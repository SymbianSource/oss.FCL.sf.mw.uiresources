/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:  Chunk maintainer.
*
*/


// INCLUDE FILES

#include "AknsSrvChunkMaintainer.h"

#include <AknsSrvClient.h>
#include "AknsSrvUtils.h"
#include <AknsConstants.h>
#include "AknsSrvDescriptorFileLayout.h"
#include "AknsSrvBitmapStore.h"
#include <fbs.h>
#include <bautils.h>
#include "AknsSrvVariant.hrh"
#include <versioninfo.h>

#include <AknsSkinUID.h>

#include "AknsDebug.h"


// CONSTANTS
static const TInt KAknsSrvMinMorphingInterval = 60; // in seconds
static const TInt KAknsSrvSkipMajor = -3;
static const TInt KAknsSrvSkipMinor = -3;
static const TInt KAknsSrvRewriteMajor = -4;
static const TInt KAknsSrvRewriteBase = -256;

static const TInt KAknsSrvMaxChunkReaders = 127;

static const TInt KAknsSrvTextColorGroupCount = 63;

// All of the following constants _MUST_ be divisible by 4
// This value seems to be most efficient when comparing memory consumption:
static const TInt KAknsSrvSharedChunkInitialSize = 160*1024;
static const TInt KAknsSrvSharedChunkMaxSize = 384*1024;
// This value seems to be most efficient when comparing memory consumption:
static const TInt KAknsSrvSharedChunkGranularity = 4*1024;
static const TInt KAknsSrvSharedChunkHeaderAreaSize = 16*4;

static const TInt KAknsSrvMaxHashList = 128;
static const TInt KAknsSrvMaxHashSize = 1024;

static const TInt32 KAknsSrvIdleWallpaperFilenameID = 0xc0def00d;

static const TInt KAknsSrvMaxScalableGfxItems =
    KAknsSrvSharedChunkGranularity / sizeof(TAknsSrvScalableItemDef);

_LIT(KAknsSrvScalableRomBmpLocation,":\\resource\\skins\\");
_LIT(KAknsSrvPathEndSeparator, "\\");

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// TAknsSrvCMPostOp::LinearOrder
//
// -----------------------------------------------------------------------------
//
TInt TAknsSrvCMPostOp::LinearOrder(
    const TAknsSrvCMPostOp& aFirst,
    const TAknsSrvCMPostOp& aSecond )
    {
    return TAknsItemID::LinearOrder( aFirst.iIID, aSecond.iIID );
    }

// ============================ MEMBER FUNCTIONS ===============================

 CAknsSrvMorphingTimer* CAknsSrvMorphingTimer::NewL(MAknsSrvMorphingListener* aListener, TInt aInterval)
    {
    CAknsSrvMorphingTimer* self = new (ELeave)CAknsSrvMorphingTimer(aListener, aInterval);
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

void CAknsSrvMorphingTimer::RunL()
    {
    iListener->MorhphingEventTimeout();
    IssueRequest();
    }

void CAknsSrvMorphingTimer::DoCancel()
    {
    iTimer.Cancel();
    }

void CAknsSrvMorphingTimer::IssueRequest()
    {
    if ( !IsActive() )
        {
        TTime now;
        now.HomeTime();
        now+=TTimeIntervalSeconds(iInterval);
        iTimer.At(iStatus, now);
        SetActive();
        }
    }

CAknsSrvMorphingTimer::~CAknsSrvMorphingTimer()
    {
    Cancel();
    iTimer.Close();
    }

void CAknsSrvMorphingTimer::ConstructL()
    {
    User::LeaveIfError(iTimer.CreateLocal());
    }

CAknsSrvMorphingTimer::CAknsSrvMorphingTimer(MAknsSrvMorphingListener* aListener,TInt aInterval) :
        CActive(CActive::EPriorityStandard),
        iListener(aListener),
        iInterval(aInterval)
    {
    CActiveScheduler::Add(this);
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsSrvChunkMaintainer::~CAknsSrvChunkMaintainer()
    {
    // We should never reach here, but just in case...
    delete iMorphingTimer;
    iSharedChunk.Close();
    iWaitSema.Close();
    iRenderMutex.Close();
    }

// -----------------------------------------------------------------------------
// Constructor
// -----------------------------------------------------------------------------
//
CAknsSrvChunkMaintainer::CAknsSrvChunkMaintainer(CAknsSrvBitmapStore* aBitmapStore)
    {
    // Size sanity checks
    __ASSERT_DEBUG(
        KAknsSrvSharedChunkInitialSize <= KAknsSrvSharedChunkMaxSize,
        User::Panic(KAknSkinSrvPanicCategory, EAknsSrvInvalidBuildConf ) );

    TInt err = iSharedChunk.CreateGlobal(KAKNSSRVSHAREDMEMORYCHUNKNAME,
        KAknsSrvSharedChunkInitialSize, KAknsSrvSharedChunkMaxSize );

    if (!err)
        {
        err = iWaitSema.CreateGlobal(KAKNSSRVWAITSEMAPHORENAME,
            KAknsSrvMaxChunkReaders);
        iInternalSemaCount = 0;
        }

    if( !err )
        {
        err = iRenderMutex.CreateGlobal(KAKNSSRVRENDERMUTEXNAME);
        }

    if (err)
        {
        AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::Constructor CANNOT CREATE SHARED CHUNK!");
        User::Panic(KAknSkinSrvPanicCategory, EAknsSrvCannotCreateSharedChunk);
        }

    VersionInfo::TPlatformVersion platformVersion;
    TRAP( err,VersionInfo::GetVersion( platformVersion ) );
    if ( !err )
        {
        iPlatformMajor = platformVersion.iMajorVersion;
        iPlatformMinor = platformVersion.iMinorVersion;
        }
    else 
        {
        iPlatformMajor = 0;
        iPlatformMinor = 0;
        }
    
    iCurrentFilenameID = 0;
    iBitmapStore = aBitmapStore;
    iMergeS60Skin = EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::MergeSkinDefinitionsL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::MergeSkinDefinitionsL( const TPtrC& aFilename,
    const TAknsItemDefClass aClass, const TBool aClearChunk,
    const TAknsSrvExclusionQuery& aExclQuery,
    const TBool aAhOverride,
    const TAknsPkgID& aPID )
    {
    // Do not merge other than bitmap classes
    if( aClass != EAknsItemDefClassBitmaps ) return;

    // Block read access to the shared chunk while writing new values
    BeginWrite();
    iMorphingMinInterval = -1;
    if (iMorphingTimer)
        {
        delete iMorphingTimer;
        iMorphingTimer = NULL;
        }
    
    if ( aPID == KAknsPIDS60DefaultSkin )
        {
        iMergeS60Skin = ETrue;
        }
    TRAPD( mergeErr, MergeSkinDefinitionsUnprotectedL( aFilename,
        aClearChunk, aExclQuery, aAhOverride, aPID) );
    
    iMergeS60Skin = EFalse;
    // And allow read access again...
    EndWrite();

    User::LeaveIfError( mergeErr );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::SetWallpaper
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::SetWallpaper( const TAknsItemID& aIID,
    const TDesC& aFilename, TInt /*aIndex*/ )
    {
    BeginWrite();

    TAknsSrvDef wallpaperDef;
    wallpaperDef.iID.iMajor = EAknsMajorSkin;
    wallpaperDef.iID.iMinor = EAknsMinorWallpaper;

    TInt32 filenameid;
    if( aIID == KAknsIIDWallpaper )
        {
        if (aFilename.Length() > 0)
            {
            filenameid = KAknsSrvIdleWallpaperFilenameID;
            }
        else
            {
            TInt index = FindDefIndex( wallpaperDef.iID );
            TAknsSrvDef* trgDef = NULL;
            if (index >= 0)
                {
                trgDef = (TAknsSrvDef*)( GetAreaBasePtr(EAknsSrvItemDefArea)
                    + index*sizeof(TAknsSrvDef) );
                trgDef->iID.iMajor = KAknsSrvSkipMajor;
                trgDef->iID.iMinor = KAknsSrvSkipMinor;
                }
            EndWrite();
            return;
            }
        }
    else
        {
        EndWrite();
        return;
        }
    UpdateFilename( filenameid, (TUint8*)aFilename.Ptr(),
        (TUint16)(aFilename.Length()), KNullDesC());

    wallpaperDef.iType = EAknsITEffectQueue;

    TAknsSrvEffectQueueDef applyGfxEffectQueue;
    applyGfxEffectQueue.iEffectQueueSize = sizeof(TAknsSrvEffectQueueDef)
        + 2*sizeof(TAknsSrvEffectDef) + 3*sizeof(TAknsSrvEffectParameterDef)
        + 8*sizeof(TInt32);
    applyGfxEffectQueue.iInputLayerIndex =0;
    applyGfxEffectQueue.iInputLayerMode = 2; //RGB
    applyGfxEffectQueue.iOutputLayerIndex = 2;
    applyGfxEffectQueue.iOutputLayerMode = 2; //RGB
    applyGfxEffectQueue.iEffectCount = 2;
    applyGfxEffectQueue.iRefMajor = 0;
    applyGfxEffectQueue.iRefMinor = 0;

    TAknsSrvEffectDef applyGfxEffectDef;
    applyGfxEffectDef.iEffectUid.iUid = 0x101F8748;
    applyGfxEffectDef.iInputLayerAIndex = 0;
    applyGfxEffectDef.iInputLayerAMode = 1;
    applyGfxEffectDef.iInputLayerBIndex = 0;
    applyGfxEffectDef.iInputLayerBMode = 1;
    applyGfxEffectDef.iOutputLayerIndex = 1;
    applyGfxEffectDef.iOutputLayerMode = 8; //  1/RGBA
    applyGfxEffectDef.iEffectParameterCount = 2;
    applyGfxEffectDef.iEffectSize = sizeof(TAknsSrvEffectDef)
        + 2*sizeof(TAknsSrvEffectParameterDef)+4*sizeof(TInt32)+2*sizeof(TInt32);

    TAknsSrvEffectParameterDef applyGfxParams;
    applyGfxParams.iParameterLength =
        sizeof(TAknsSrvEffectParameterDef)+4*sizeof(TInt32);
    applyGfxParams.iParameterType = 2; // graphics file

    TAknsSrvEffectParameterDef applyGfxParams2;
    applyGfxParams2.iParameterLength =
        sizeof(TAknsSrvEffectParameterDef)+2*sizeof(TInt32);
    applyGfxParams2.iParameterType = 0; // int



    TAknsSrvEffectDef alphaBlendEffectDef;
    alphaBlendEffectDef.iEffectUid.iUid = 0x10204add;
    alphaBlendEffectDef.iInputLayerAIndex = 0;
    alphaBlendEffectDef.iInputLayerAMode = 8; // RGBA
    alphaBlendEffectDef.iInputLayerBIndex = 1;
    alphaBlendEffectDef.iInputLayerBMode = 8; // RGBA
    alphaBlendEffectDef.iOutputLayerIndex = 2;
    alphaBlendEffectDef.iOutputLayerMode = 2; // RGB
    alphaBlendEffectDef.iEffectParameterCount = 1;
    alphaBlendEffectDef.iEffectSize = sizeof(TAknsSrvEffectDef)
        + sizeof(TAknsSrvEffectParameterDef)+2*sizeof(TInt32);


    TAknsSrvEffectParameterDef alphaBlendParams;
    alphaBlendParams.iParameterLength =
        sizeof(TAknsSrvEffectParameterDef)+2*sizeof(TInt32);
    alphaBlendParams.iParameterType = 0; // int


    TInt32 bitmapIndex = 0;
    TInt32 maskindex = 0;
    TInt32 filenameOffset = GetFilenameOffsetByID(filenameid);// offset replaces the id

    TUint8* eqblock = NULL;
    TRAPD( err,
        eqblock = new (ELeave) TUint8[
            sizeof(TAknsSrvEffectQueueDef) + 2*sizeof(TAknsSrvEffectDef)
            + 3*sizeof(TAknsSrvEffectParameterDef) + 2*sizeof(TInt32) + 4*sizeof(TInt32) + 2*sizeof(TInt32) ] );
    if ( err != KErrNone )
        {
        EndWrite();
        delete [] eqblock;
        return;
        }
    TUint8 *ptr = eqblock;

    Mem::Copy(ptr,&applyGfxEffectQueue, sizeof(TAknsSrvEffectQueueDef));
    ptr+=sizeof(TAknsSrvEffectQueueDef);
    Mem::Copy(ptr,&applyGfxEffectDef, sizeof(TAknsSrvEffectDef));
    ptr+=sizeof(TAknsSrvEffectDef);
    Mem::Copy(ptr, &applyGfxParams, sizeof(TAknsSrvEffectParameterDef));
    ptr+=sizeof(TAknsSrvEffectParameterDef);
    // applygfx params...
    *((TUint16*)(ptr)) = 1;
    ptr+=2; // sizeof TUint16
    *((TUint16*)(ptr)) = 'f';
    ptr+=2; // sizeof TUint16
    *((TUint32*)(ptr)) = bitmapIndex;
    ptr+=4;
    *((TUint32*)(ptr)) = maskindex;
    ptr+=4;
    *((TUint32*)(ptr)) = filenameOffset;
    ptr+=4;
    // generic image
    Mem::Copy(ptr, &applyGfxParams2, sizeof(TAknsSrvEffectParameterDef));
    ptr+=sizeof(TAknsSrvEffectParameterDef);
    *((TUint16*)(ptr)) = 1;
    ptr+=2; // sizeof TUint16
    *((TUint16*)(ptr)) = 'g';
    ptr+=2;
    *((TUint32*)(ptr)) = 1;
    ptr+=4;


    //alphablend
    Mem::Copy(ptr, &alphaBlendEffectDef, sizeof(TAknsSrvEffectDef));
    ptr+=sizeof(TAknsSrvEffectDef);
    Mem::Copy(ptr, &alphaBlendParams,sizeof(TAknsSrvEffectParameterDef));
    ptr+=sizeof(TAknsSrvEffectParameterDef);

    *((TUint16*)(ptr)) = 1;
    ptr+=2;
    *((TUint16*)(ptr)) = 'm';
    ptr+=2;
    *((TUint32*)(ptr)) = 1;
    ptr+=4;

    TAknsSrvEffectQueueDef* eqDef = (TAknsSrvEffectQueueDef*)eqblock;

    UpdateDef( &wallpaperDef, eqDef,     applyGfxEffectQueue.iEffectQueueSize, -1 );
    delete [] eqblock;
    EndWrite();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::BeginWrite
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::BeginWrite()
    {
    iInternalSemaCount++;
    if( iInternalSemaCount > 1 )
        {
        // Chunk already locked
        return;
        }
#if defined(_DEBUG)
    if( iInternalSemaCount < 1 )
        {
        AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::BeginWrite Internal error, internal counter underflow!");
        AKNS_DEBUG_PANIC(EAknsDPanicBadState);
        }
#endif
    // Wait if there is a read in progress...
    for (TInt count = 0;count < KAknsSrvMaxChunkReaders;count++)
        {
        iWaitSema.Wait();
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::EndWrite
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::EndWrite()
    {
    iInternalSemaCount--;
    if( iInternalSemaCount > 0 )
        {
        // Chunk must be left locked
        return;
        }
    iWaitSema.Signal(KAknsSrvMaxChunkReaders);

#if defined(_DEBUG)
    if( iInternalSemaCount < 0 )
        {
        AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::EndWrite Internal error, internal counter underflow!");
        AKNS_DEBUG_PANIC(EAknsDPanicBadState);
        }
#endif

    AKNS_TRACE_INFO("------------------------------------------------------------------");
    AKNS_TRACE_INFO1("AknSkinSrv: Total SharedChunk size at EndWrite operation %d bytes", iSharedChunk.Size());
    AKNS_TRACE_INFO1("AknSkinSrv: Total ItemDefArea size at EndWrite operation %d bytes", GetAreaAllocatedSize(EAknsSrvItemDefArea));
    AKNS_TRACE_INFO1("AknSkinSrv: Total DataArea size at EndWrite operation %d bytes", GetAreaAllocatedSize(EAknsSrvDataArea));
    AKNS_TRACE_INFO1("AknSkinSrv: Total FilenameArea size after EndWrite operation %d bytes", GetAreaAllocatedSize(EAknsSrvFilenameArea));
    AKNS_TRACE_INFO1("AknSkinSrv: Total ScalableGfxArea(STATIC) size after EndWrite operation %d bytes", GetAreaAllocatedSize(EAknsSrvScalableGfxArea));
    AKNS_TRACE_INFO1("AknSkinSrv: Total unused space in ItemDefArea %d bytes", (GetAreaAllocatedSize(EAknsSrvItemDefArea)-GetAreaCurrentSize(EAknsSrvItemDefArea)));
    AKNS_TRACE_INFO1("AknSkinSrv: Total unused space in DataArea %d bytes", (GetAreaAllocatedSize(EAknsSrvDataArea)-GetAreaCurrentSize(EAknsSrvDataArea)));
    AKNS_TRACE_INFO1("AknSkinSrv: Total unused space in FilenameArea %d bytes", (GetAreaAllocatedSize(EAknsSrvFilenameArea)-GetAreaCurrentSize(EAknsSrvFilenameArea)));
    AKNS_TRACE_INFO1("AknSkinSrv: Total unused space in ScalableGfxArea %d bytes", (GetAreaAllocatedSize(EAknsSrvScalableGfxArea)-GetAreaCurrentSize(EAknsSrvScalableGfxArea)));
    AKNS_TRACE_INFO("------------------------------------------------------------------");
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ResetLevel
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::ResetLevel()
    {
    iMergingLevel = 0;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::NextLevel
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::NextLevel()
    {
    iMergingLevel++;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::CheckAndModifyIID
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::CheckAndModifyIID( TAknsItemID& aIID,
    const TAknsSrvExclusionQuery& aExclQuery )
    {
    if( aIID.iMajor == KAknsSrvRewriteMajor )
        {
        aIID.iMajor = KAknsSrvRewriteBase - iMergingLevel;
        }

    aExclQuery.MapIID( aIID );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ProcessChunksL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::ProcessChunksL( CAknsSrvFileBuffer& aFile,
    TUint32 aFileOffset, TUint32 aChunkCount, const TDesC& aFilename,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored )
    {
    AKNS_TRACE_INFO1("CAknsSrvChunkMaintainer::ProcessChunksL Starting count=%i", aChunkCount );

    TInt offset = aFileOffset;
#if defined(AKNS_TRACING_ENABLED_ERROR)
    TUint16 prevChunktype = 65535;
#endif
    TUint16 chunktype = 65535;
    for (TUint32 count = 0; count < aChunkCount; count++)
        {
        AKNS_TRACE_INFO2("CAknsSrvChunkMaintainer::ProcessChunksL Step %i/%i", count, aChunkCount );

#if defined(AKNS_TRACING_ENABLED_ERROR)
        prevChunktype = chunktype;
#endif

        if( AknsSrvUtils::GetUInt8L( aFile, offset ) == 0xf5 )
            {
            AKNS_TRACE_ERROR1("CAknsSrvChunkMaintainer::ProcessChunksL Suspicious EOC at BOC, prev=%i", prevChunktype);
            }

        TInt32 chunksize = AknsSrvUtils::GetInt32L(
            aFile, offset+EAknsSrvDFOCommonLength );
        chunktype = AknsSrvUtils::GetUInt16L(
            aFile, offset+EAknsSrvDFOCommonType );

        AKNS_TRACE_INFO2("CAknsSrvChunkMaintainer::ProcessChunksL This chunk size=%i type=%i", chunksize, chunktype );

        if (chunktype == EAknsSkinDescFilename) // filename chunk
            {
            offset+=HandleFilenameChunkL(aFile, offset, aFilename);
            }
        else if (chunktype == EAknsSkinDescInformation) // information chunk
            {
            offset+=HandleInformationChunkL(aFile, offset, aFilename);
            }
        else if (chunktype == EAknsSkinDescSkinDescClass) // class chunk
            {
            offset+=HandleClassChunkL(aFile, offset, aExclQuery);
            }
        else if (chunktype == EAknsSkinDescSkinDescImgLangOverride) // language override chunk
            {
            offset+=HandleLangOverrideChunkL(aFile, offset);
            }
        else if (chunktype == EAknsSkinDescWallpaper) // wallpaper chunk
            {
            offset+=HandleWallpaperChunkL(aFile, offset);
            }
        // release restriction chunk (2.6)
        else if( chunktype == EAknsSkinDescRelease26 )
            {
            offset+=Handle26RelRestrictionChunkL(
                aFile, offset, aFilename, aExclQuery, aMirrored);
            }
        // release restriction chunk (generic)
        else if( chunktype == EAknsSkinDescReleaseGeneric )
            {
            offset+=HandleGenericRelRestrictionChunkL(
                aFile, offset, aFilename, aExclQuery, aMirrored);
            }
        else if (chunktype == EAknsSkinDescLanguage) // language restriction chunk
            {
            offset+=HandleLangRestrictionChunkL(aFile, offset, aFilename, aExclQuery, aMirrored);
            }
        else
            {
            // chunk not supported/not used, proceed....
            AKNS_TRACE_ERROR3("CAknsSrvChunkMaintainer::ProcessChunksL Unsupported chunk, type=%i prev=%i count=%i", chunktype, prevChunktype, count);
            offset+=chunksize;
            }
        if( AknsSrvUtils::GetUInt8L(aFile,offset-1) != 0xf5 )
            {
            AKNS_TRACE_ERROR2("CAknsSrvChunkMaintainer::ProcessChunksL No EOC, type=%i count=%i!", chunktype, count);
            }
        }
    return offset;
    }


// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleInformationChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleInformationChunkL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset, const TDesC& /*aFilename*/)
    {
    TUint32 size = AknsSrvUtils::GetInt32L(aFile, EAknsSrvDFOCommonLength+aFileOffset);
    TUint32 version = AknsSrvUtils::GetInt32L(aFile, EAknsSrvDFOInformationCompilerVer+aFileOffset);
    TUint32 authorlen = 2*(AknsSrvUtils::GetInt16L(aFile, EAknsSrvDFOInformationAuthorLen+aFileOffset));
    TUint32 copyrightlen = 2*(AknsSrvUtils::GetInt16L(aFile, EAknsSrvDFOInformationAuthorStr+authorlen+aFileOffset));
     TUint16 verMajor = (version >> 16);
#if defined(_DEBUG)
    TUint16 verMinor = (version &0xffff);
#endif
    TUint8 platMajor= AknsSrvUtils::GetUInt8L(aFile, EAknsSrvDFOInformationAuthorStr+2+copyrightlen+authorlen+aFileOffset);
    TUint8 platMinor= AknsSrvUtils::GetUInt8L(aFile, EAknsSrvDFOInformationAuthorStr+2+1+copyrightlen+authorlen+aFileOffset);
#if defined(_DEBUG)
    RDebug::Print(_L("Skin compiler information:"));
    RDebug::Print(_L("    SCVer: %d.%d"), verMajor, verMinor);
    RDebug::Print(_L("    Platf: %d.%d"), platMajor, platMinor);
    RDebug::Print(_L("    Compl: %d.%d.%d"), platMajor, platMinor,verMinor);
#endif
    if (verMajor < 2 && platMajor < 3)
        {
        User::Leave(KErrCorrupt);
        }
    return size;
    }



// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleFilenameChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleFilenameChunkL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset, const TDesC& aFilename)
    {
    TUint32 size = AknsSrvUtils::GetInt32L(aFile, EAknsSrvDFOCommonLength+aFileOffset);
    TUint8* filenamechunk = AknsSrvUtils::ReadSkinDescL(aFile, aFileOffset, size);
    TInt32 filenameid = *((TInt32*)(filenamechunk+EAknsSrvDFOFilenameFilenameID))+iCurrentFilenameID;
    TUint16 filenamelen = *((TUint16*)(filenamechunk+EAknsSrvDFOFilenameLen));
    if (iBitmapPath)
        {
        UpdateFilename( filenameid, filenamechunk+EAknsSrvDFOFilenameFilename, filenamelen, *iBitmapPath );
        }
    else
        {
        UpdateFilename( filenameid, filenamechunk+EAknsSrvDFOFilenameFilename, filenamelen, aFilename );
        }

    iFilenameCount++;
    delete [] filenamechunk;
    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleClassChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleClassChunkL(
    CAknsSrvFileBuffer& aFile, TUint32 aFileOffset,
    const TAknsSrvExclusionQuery& aExclQuery )
    {
    TUint32 size = AknsSrvUtils::GetInt32L(
        aFile, aFileOffset+EAknsSrvDFOCommonLength);
    DoMergeSkinDefinitionsL(
        aFile, aFileOffset, EAknsItemDefClassBitmaps, aExclQuery, EFalse);
    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleLangOverrideChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleLangOverrideChunkL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset)
    {
    TUint32 size = AknsSrvUtils::GetInt32L(aFile, EAknsSrvDFOCommonLength+aFileOffset);
    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleWallpaperChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleWallpaperChunkL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset)
    {
    TUint32 size = AknsSrvUtils::GetInt32L(aFile, EAknsSrvDFOCommonLength+aFileOffset);
    TUint8 wallpapertype = AknsSrvUtils::GetUInt8L(aFile, EAknsSrvDFOWallpaperWallpaperType+aFileOffset);
    TUint16 filenamelen = AknsSrvUtils::GetUInt16L(aFile,EAknsSrvDFOWallpaperFilenameLen+aFileOffset);
    TUint8 fileindex = AknsSrvUtils::GetUInt8L(aFile,aFileOffset+EAknsSrvDFOWallpaperFilename+filenamelen*2);
    TAknsItemID iid;

    if (wallpapertype == 0x00)
        {
        iid = KAknsIIDWallpaper;
        }
    else
        {
        // ignore all other values....
        return size;
        }

    HBufC16* filename = HBufC16::NewL(KAknsSrvMaxFileNameLen);
    CleanupStack::PushL(filename);

    TUint8* filenameptr = AknsSrvUtils::ReadSkinDescL( aFile, EAknsSrvDFOWallpaperFilename+aFileOffset, filenamelen*2);
    CleanupStack::PushL(filenameptr);

    TPtr16 ptr = filename->Des();
    ptr.SetLength(filenamelen);
    Mem::Copy((TUint16*)ptr.Ptr(), filenameptr, filenamelen*2);


    CleanupStack::PopAndDestroy( filenameptr );

    SetWallpaper(iid, *filename, fileindex);
    CleanupStack::PopAndDestroy( filename );
    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::Handle26RelRestrictionChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::Handle26RelRestrictionChunkL(
    CAknsSrvFileBuffer& aFile, TUint32 aFileOffset, const TDesC& aFilename,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored )
    {
    TUint32 size = AknsSrvUtils::GetInt32L( aFile,
        aFileOffset+EAknsSrvDFORelease26Length);
    TInt32 numberofchunks = AknsSrvUtils::GetInt32L( aFile,
        aFileOffset+EAknsSrvDFORelease26ChunksN );

    // Process always (we are guaranteed to be at lease 2.8>2.6)
    ProcessChunksL( aFile, aFileOffset+EAknsSrvDFORelease26Content,
        numberofchunks, aFilename, aExclQuery, aMirrored);

    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleGenericRelRestrictionChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleGenericRelRestrictionChunkL(
    CAknsSrvFileBuffer& aFile, TUint32 aFileOffset, const TDesC& aFilename,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored )
    {
    TUint32 size = AknsSrvUtils::GetInt32L( aFile,
        aFileOffset+EAknsSrvDFOReleaseGenericLength);
    TInt32 numberofchunks = AknsSrvUtils::GetInt32L( aFile,
        aFileOffset+EAknsSrvDFOReleaseGenericChunksN );
    TInt platformMajor = AknsSrvUtils::GetUInt8L( aFile,
        aFileOffset+EAknsSrvDFOReleaseGenericPlatformMajor );
    TInt platformMinor = AknsSrvUtils::GetUInt8L( aFile,
        aFileOffset+EAknsSrvDFOReleaseGenericPlatformMinor );

    // Process the chunk only if restriction is met
    if( (platformMajor<iPlatformMajor) ||
        ((platformMajor==iPlatformMajor)&&
        (platformMinor<=iPlatformMinor)) )
        {
        ProcessChunksL( aFile, aFileOffset+EAknsSrvDFOReleaseGenericContent,
            numberofchunks, aFilename, aExclQuery, aMirrored);
        }

    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::HandleLangRestrictionChunkL
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::HandleLangRestrictionChunkL(
    CAknsSrvFileBuffer& aFile, TUint32 aFileOffset, const TDesC& aFilename,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored )
    {
    TUint32 size = AknsSrvUtils::GetInt32L( aFile,
        EAknsSrvDFOCommonLength+aFileOffset);
    TUint16 generalRestr = AknsSrvUtils::GetInt16L( aFile,
        EAknsSrvDFOLanguageGenRestr+aFileOffset);
    TUint16 langRestr =  AknsSrvUtils::GetInt16L( aFile,
        EAknsSrvDFOLanguageLangRestr+aFileOffset);
    TInt32 numberofchunks = AknsSrvUtils::GetInt32L( aFile,
        EAknsSrvDFOLanguageLanguageN+aFileOffset);
    if( (generalRestr == 0) ||
        (generalRestr == 1 && !aMirrored) ||
        (generalRestr == 2 && aMirrored) )
        {
        if ((langRestr == 0) ||
           (langRestr && langRestr == User::Language()))
            {
            // Set the restriction parameters before processing
            // the chunks inside it
            TAknsSrvExclusionQuery* query = const_cast<TAknsSrvExclusionQuery*>(&aExclQuery);
            query->SetParameters(
                (User::Language()==ELangArabic)?ETrue:EFalse,
                (User::Language()==ELangHebrew)?ETrue:EFalse );
            ProcessChunksL( aFile, aFileOffset+EAknsSrvDFOLanguageContent,
                numberofchunks, aFilename, aExclQuery, aMirrored );
            // Disable exclusions after processing language restriction chunks
            query->SetParameters(EFalse,EFalse);
            }
        }
    return size;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::EnqueuePostOperationL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::EnqueuePostOperationL(
    const TAknsSrvCMPostOpType aType, const TAknsItemID aIID )
    {
    AKNS_TRACE_INFO2("CAknsSrvChunkMaintainer::EnqPO Adding PO for %x %x", aIID.iMajor, aIID.iMinor );

    TAknsSrvCMPostOp op;
    op.iType = aType;
    op.iIID = aIID;
    User::LeaveIfError( iPostOpArray.InsertInOrderAllowRepeats(
        op, TAknsSrvCMPostOp::LinearOrder ) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ExecutePostOperations
//
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::ExecutePostOperations()
    {
    TAknsSrvDef* itemtable = (TAknsSrvDef*)GetAreaBasePtr(EAknsSrvItemDefArea);
    TInt defcount = GetAreaCurrentSize(EAknsSrvItemDefArea) / sizeof(TAknsSrvDef);

    for( TInt index = 0; index<defcount; index++ )
        {
        TAknsSrvCMPostOp key;
        key.iIID = itemtable[index].iID;
        TInt opIndex = KErrNotFound;
        while( (opIndex=iPostOpArray.FindInOrder(
            key, TAknsSrvCMPostOp::LinearOrder ))!=KErrNotFound )
            {
            TAknsSrvCMPostOp op;
            op = iPostOpArray[ opIndex ];
            iPostOpArray.Remove( opIndex );

            AKNS_TRACE_INFO2("CAknsSrvChunkMaintainer::ExePO Executing PO for %x %x", op.iIID.iMajor, op.iIID.iMinor );
            if( itemtable[index].iDef.iPtrType == EAknsSrvMPPtrAbsoluteROM )
                {
                // Not modifiable
                AKNS_TRACE_INFO("CAknsSrvChunkMaintainer::ExePO SKIPPED, ROM def");
                continue;
                }

            switch( op.iType )
                {
                case EAknsSrvCMPOTTileX:
                case EAknsSrvCMPOTTileY:
                case EAknsSrvCMPOTTileToStretch:
                    PostOpTile( op, &itemtable[index] );
                    break;
                default:
                    AKNS_TRACE_INFO("CAknsSrvChunkMaintainer::ExePO SKIPPED, unsupported type");
                    break;
                }
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::PostOpTile
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::PostOpTile( TAknsSrvCMPostOp& op,
    TAknsSrvDef* itemDef )
    {
    // Read attributes
    TInt imageAttributes = 0;
    if( itemDef->iType == EAknsITBitmap )
        {
        TAknsSrvBitmapDef* bmpDef =
            static_cast<TAknsSrvBitmapDef*>(const_cast<TAny*>(
            itemDef->iDef.Address(GetAreaBasePtr(EAknsSrvDataArea))));
        imageAttributes = bmpDef->iImageAttributes;
        }
    else if( itemDef->iType == EAknsITMaskedBitmap )
        {
        TAknsSrvMaskedBitmapDef* bmpDef =
            static_cast<TAknsSrvMaskedBitmapDef*>(const_cast<TAny*>(
            itemDef->iDef.Address(GetAreaBasePtr(EAknsSrvDataArea))));
        imageAttributes = bmpDef->iImageAttributes;
        }
    else
        {
        // Never reached, but play for sure
        AKNS_TRACE_INFO("CAknsSrvChunkMaintainer::POT Unsupported def type.");
        return;
        }

    // Modify
    if( !(imageAttributes&EAknsImageAttributeNBC) &&
        (imageAttributes&EAknsImageAttributeTile) )
        {
        if( op.iType==EAknsSrvCMPOTTileX )
            {
            imageAttributes ^= EAknsImageAttributeTile;
            imageAttributes |= EAknsImageAttributeTileX;
            imageAttributes |= EAknsImageAttributeNBC;
            }
        else if( op.iType==EAknsSrvCMPOTTileY )
            {
            imageAttributes ^= EAknsImageAttributeTile;
            imageAttributes |= EAknsImageAttributeTileY;
            imageAttributes |= EAknsImageAttributeNBC;
            }
        else if( op.iType==EAknsSrvCMPOTTileToStretch )
            {
            imageAttributes ^= EAknsImageAttributeTile;
            imageAttributes |= EAknsImageAttributeStretch;
            imageAttributes |= EAknsImageAttributeNBC;
            }
        }

    // Write attributes
    if( itemDef->iType == EAknsITBitmap )
        {
        TAknsSrvBitmapDef* bmpDef =
            static_cast<TAknsSrvBitmapDef*>(const_cast<TAny*>(
            itemDef->iDef.Address(GetAreaBasePtr(EAknsSrvDataArea))));
        bmpDef->iImageAttributes = imageAttributes;
        }
    else if( itemDef->iType == EAknsITMaskedBitmap )
        {
        TAknsSrvMaskedBitmapDef* bmpDef =
            static_cast<TAknsSrvMaskedBitmapDef*>(const_cast<TAny*>(
            itemDef->iDef.Address(GetAreaBasePtr(EAknsSrvDataArea))));
        bmpDef->iImageAttributes = imageAttributes;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::MergeSkinDefinitionsUnprotectedL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::MergeSkinDefinitionsUnprotectedL(
    const TDesC& aFilename, const TBool aClearChunk,
    const TAknsSrvExclusionQuery& aExclQuery, TBool aAhOverride,
    const TAknsPkgID& aPID )
    {
    iFilenameCount = 0;

    if (aClearChunk)
        {
        InitializeChunk();
        }

    RFs fs;
    User::LeaveIfError(fs.Connect());
    CleanupClosePushL(fs);

    // Check if image files exist in resource\skins\<skinuid>

    delete iBitmapPath;
    TInt pathsize = KAknsSrvScalableRomBmpLocation().Length()+8+2; //2 for the driveletter and end separator
    if (!aPID.IsUid())
        {
        pathsize+=8;
        }
    iBitmapPath = HBufC16::NewL(pathsize);
    iBitmapPath->Des().Append(aFilename[0]);
    iBitmapPath->Des().Append(KAknsSrvScalableRomBmpLocation);
    iBitmapPath->Des().AppendNumFixedWidthUC( aPID.iNumber, EHex, 8 );

    if( !aPID.IsUid() )
        {
        iBitmapPath->Des().AppendNumFixedWidthUC( aPID.iTimestamp, EHex, 8 );
        }

    iBitmapPath->Des().Append(KAknsSrvPathEndSeparator);
    TBool exists = BaflUtils::FolderExists(fs, *iBitmapPath);
    if (!exists)
        {
        delete iBitmapPath;
        iBitmapPath = NULL;
        }

    TChar driveLetter = aFilename[0];
    TInt driveNumber;
    User::LeaveIfError(fs.CharToDrive(driveLetter, driveNumber));
    User::LeaveIfError(fs.ShareProtected());

    TInt err = fs.CreatePrivatePath(driveNumber);
    if (err!=KErrNone && err!=KErrAlreadyExists)
        User::Leave(err);

    User::LeaveIfError(fs.SetSessionToPrivate(driveNumber));
    RFile file;
    User::LeaveIfError(file.Open(fs,aFilename, EFileRead | EFileShareReadersOnly));
    CleanupClosePushL(file);
    CAknsSrvFileBuffer* fileBuf = CAknsSrvFileBuffer::NewL( file );
    CleanupStack::PushL( fileBuf );

    TUint masterChunkSize = AknsSrvUtils::GetInt32L(
        *fileBuf, EAknsSrvDFOCommonLength );
    TUint masterChunkType = AknsSrvUtils::GetUInt16L(
        *fileBuf, EAknsSrvDFOCommonType );
    TInt32 numberofchunks = AknsSrvUtils::GetInt32L(
        *fileBuf, EAknsSrvDFOSkinChunksN );

    if( masterChunkType != EAknsSkinDescSkinDesc )
        {
        AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::MSDUL CORRUPTED FILE (bad master type)!");
        User::Leave( KErrCorrupt );
        }

    ProcessChunksL(*fileBuf, EAknsSrvDFOSkinContent , numberofchunks, aFilename, aExclQuery, aAhOverride );

    if( AknsSrvUtils::GetUInt8L(*fileBuf,masterChunkSize-1) != 0xf5 )
        {
        AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::MSDUL CORRUPTED FILE (no master eoc)!");
        User::Leave( KErrCorrupt );
        }
    CleanupStack::PopAndDestroy(2);
    iCurrentFilenameID += iFilenameCount;
    CleanupStack::PopAndDestroy(); //fileBuf

    // Add generic post operations
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterMenu );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterSubmenu );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterNote );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterQuery );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterFind );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterSnote );
    EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch,
        KAknsIIDQsnFrPopupCenterFswap );

    // Execute any pending post operations
    ExecutePostOperations();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeSkinDefinitionsL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeSkinDefinitionsL(
    CAknsSrvFileBuffer& file, const TUint aOffset,
    const TAknsItemDefClass aClass, const TAknsSrvExclusionQuery& aExclQuery,
    const TBool aAhOverride )
    {
    TInt fileoffset = aOffset;
    TInt32 chunklen = AknsSrvUtils::GetInt32L( file,
        fileoffset+EAknsSrvDFOCommonLength );
    TInt16 chunktype = AknsSrvUtils::GetUInt16L( file,
        fileoffset+EAknsSrvDFOCommonType );
    TInt32 chunkcount = AknsSrvUtils::GetInt32L( file,
        fileoffset+EAknsSrvDFOClassChunksN );
    fileoffset += EAknsSrvDFOClassContent;

    for (TInt count = 0;count < chunkcount;count++)
        {
        if( AknsSrvUtils::GetUInt8L( file, fileoffset ) == 0xf5 )
            {
            AKNS_TRACE_ERROR1("CAknsSrvChunkMaintainer::DMSDL Suspicious EOC at BOC, prev=%i", chunktype);
            }

        chunklen = AknsSrvUtils::GetInt32L( file,
            fileoffset+EAknsSrvDFOCommonLength );
        chunktype = AknsSrvUtils::GetUInt16L( file,
            fileoffset+EAknsSrvDFOCommonType );

        switch(chunktype)
            {

            case EAknsSkinDescSkinDescBmpItemDef:
                DoMergeBitmapDefinitionL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            case EAknsSkinDescSkinDescColorTblItemDef:
                DoMergeColorTableDefinitionL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            case EAknsSkinDescSkinDescImgTblItemDef:
                DoMergeImageTableDefinitionL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            case EAknsSkinDescSkinDescImgBmpAnim:
                DoMergeBmpAnimDefinitionL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            case EAknsSkinDescSkinDescStringItemDef:
                DoMergeStringDefinitionL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            case EAknsSkinDescEffectQueue:
                DoMergeEffectQueueL(file, fileoffset, aClass, aExclQuery, aAhOverride);
                break;

            case EAknsSkinDescAnimation:
                DoMergeAnimationL( file, fileoffset, aClass, aExclQuery, aAhOverride );
                break;

            default:
                AKNS_TRACE_ERROR1("CAknsSrvChunkMaintainer::DMSL SKIPPED CHUNK %i", chunktype );
                break;

            }

        fileoffset+=chunklen;
        if( AknsSrvUtils::GetUInt8L( file, fileoffset-1 ) != 0xf5 )
            {
            AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::DMSDL CORRUPTED FILE!");
            User::Leave( KErrCorrupt );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::StoreScalableGraphicsL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::StoreScalableGraphicsL( const TAknsItemID& aIID,
    const TInt aType, const TSize& aLayoutSize, TInt aBmpHandle, TInt aMskHandle, TBool aIsMorphing )
    {
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    bitmap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL(bitmap);
    User::LeaveIfError( bitmap->Duplicate(aBmpHandle) );
    if (aMskHandle)
        {
        mask = new (ELeave) CFbsBitmap;
        CleanupStack::PushL(mask);
        User::LeaveIfError( mask->Duplicate(aMskHandle) );
        CleanupStack::Pop( mask );
        }
    CleanupStack::Pop(bitmap);
    iBitmapStore->StoreBitmap( bitmap );
    if (mask)
        {
        iBitmapStore->StoreBitmap( mask );
        }

    TAknsSrvScalableItemDef def;
    def.iID = aIID;
    def.iLayoutType = aType;
    def.iLayoutSize = aLayoutSize;
    def.iBitmapHandle = bitmap->Handle();
    if (aMskHandle)
        {
        def.iMaskHandle = mask->Handle();
        }
    else
        {
        def.iMaskHandle = 0;
        }
    TTime currenttime;
    currenttime.HomeTime();
    def.isMorphing = aIsMorphing;
    def.iTimeStamp = currenttime;

    BeginWrite();

    TAknsSrvScalableItemDef* table = (TAknsSrvScalableItemDef*)GetAreaBasePtr(EAknsSrvScalableGfxArea);
    TInt defcount = GetAreaCurrentSize(EAknsSrvScalableGfxArea) / sizeof(TAknsSrvScalableItemDef);
    TInt bodycount = 0;
    for (bodycount = 0; bodycount < defcount; bodycount++)
        {
        if (table[bodycount].iID == aIID &&
            table[bodycount].iLayoutType == aType &&
            table[bodycount].iLayoutSize == aLayoutSize)
            {
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iBitmapHandle);
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iMaskHandle);
            // Replace existing item, no count increase
            Mem::Copy((TUint8*)(&table[bodycount]), &def, sizeof(TAknsSrvScalableItemDef));
            EndWrite();
            return;
            }
        }
    if( defcount >= KAknsSrvMaxScalableGfxItems )
        {
        TTime oldeststamp = table[0].iTimeStamp;
        TUint32 oldestindex = 0;
        for (bodycount = 0; bodycount < defcount; bodycount++)
            {
            if (table[bodycount].iTimeStamp < oldeststamp)
                {
                oldestindex = bodycount;
                oldeststamp = table[bodycount].iTimeStamp;
                }
            }
        iBitmapStore->RemoveStoredBitmap(table[oldestindex].iBitmapHandle);
        iBitmapStore->RemoveStoredBitmap(table[oldestindex].iMaskHandle);
        // Replace existing item, no count increase
        Mem::Copy((TUint8*)(&table[oldestindex]), &def, sizeof(TAknsSrvScalableItemDef));
        }
    else
        {
        TInt8* target = GetAreaBasePtr(EAknsSrvScalableGfxArea) + GetAreaCurrentSize(EAknsSrvScalableGfxArea);
        SetAreaCurrentSize(EAknsSrvScalableGfxArea,GetAreaCurrentSize(EAknsSrvScalableGfxArea)+sizeof(TAknsSrvScalableItemDef));
        Mem::Copy(target, &def, sizeof(TAknsSrvScalableItemDef));
        }

    EndWrite();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ClearScalableGraphics
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::ClearScalableGraphics(TAknsSrcScreenMode aMode)
    {
    BeginWrite();
    if (aMode == EAknsSrvScrModeLandscape || aMode == EAknsSrvScrModePortrait)
        {
        TAknsSrvScalableItemDef* table = (TAknsSrvScalableItemDef*)GetAreaBasePtr(EAknsSrvScalableGfxArea);
        TInt defcount = GetAreaCurrentSize(EAknsSrvScalableGfxArea) / sizeof(TAknsSrvScalableItemDef);
        TInt bodycount = 0;
        for (bodycount = 0; bodycount < defcount; bodycount++)
            {
            TTime currentTime;
            currentTime.HomeTime();
            TTimeIntervalMinutes minutes;
            currentTime.MinutesFrom(table[bodycount].iTimeStamp, minutes);
            TBool layoutNotInUse = EFalse;
            if (aMode == EAknsSrvScrModeLandscape)
                {
                if (table[bodycount].iLayoutSize.iWidth < table[bodycount].iLayoutSize.iHeight)
                    {
                    // dump portrait bitmaps...
                    layoutNotInUse = ETrue;
                    }
                }
            else if (aMode == EAknsSrvScrModePortrait)
                {
                if (table[bodycount].iLayoutSize.iWidth > table[bodycount].iLayoutSize.iHeight)
                    {
                    // dump landscape bitmaps...
                    layoutNotInUse = ETrue;
                    }
                }
            // dump bitmap if the layout is different than current, or the item has been in the cache more than 5
            // minutes
            if (layoutNotInUse ||
                minutes.Int() >= 5)
                {
#if defined(_DEBUG)
                RDebug::Print(_L("CAknsSrvChunkMaintainer: Dumped bitmap, timediff: %d, mode:%d, layouttype %d"), minutes.Int(), aMode,table[bodycount].iLayoutType );
#endif
                iBitmapStore->RemoveStoredBitmap(table[bodycount].iBitmapHandle);
                iBitmapStore->RemoveStoredBitmap(table[bodycount].iMaskHandle);
                // clear item from the chunk &
                // move the rest of the chunk upwards
                TInt8* target = (TInt8*)(&(table[bodycount]));
                TInt8* source = (TInt8*)(&(table[bodycount+1]));
                TUint32 size = sizeof(TAknsSrvScalableItemDef)*(defcount-(bodycount+1));
                if (size > 0)
                {
                    Mem::Copy(target, source, size);
                }
                SetAreaCurrentSize(EAknsSrvScalableGfxArea,GetAreaCurrentSize(EAknsSrvScalableGfxArea)-sizeof(TAknsSrvScalableItemDef));
                defcount--;
                bodycount--;
                continue;
                }
            }
        }
    else
        {
        SetAreaCurrentSize( EAknsSrvScalableGfxArea, 0 );
        iBitmapStore->DestroyBitmaps();
        }
    EndWrite();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ClearMorphedGraphics
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::ClearMorphedGraphics()
    {
    BeginWrite();
    TAknsSrvScalableItemDef* table = (TAknsSrvScalableItemDef*)GetAreaBasePtr(EAknsSrvScalableGfxArea);
    TInt defcount = GetAreaCurrentSize(EAknsSrvScalableGfxArea) / sizeof(TAknsSrvScalableItemDef);
    TInt bodycount = 0;
    for (bodycount = 0; bodycount < defcount; bodycount++)
        {
        if (table[bodycount].isMorphing)
            {
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iBitmapHandle);
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iMaskHandle);
            // clear item from the chunk &
            // move the rest of the chunk upwards
            TInt8* target = (TInt8*)(&(table[bodycount]));
            TInt8* source = (TInt8*)(&(table[bodycount+1]));
            TUint32 size = sizeof(TAknsSrvScalableItemDef)*(defcount-(bodycount+1));
            if (size > 0)
            {
                Mem::Copy(target, source, size);
            }
            SetAreaCurrentSize(
                EAknsSrvScalableGfxArea,
                GetAreaCurrentSize(EAknsSrvScalableGfxArea)-sizeof(TAknsSrvScalableItemDef));
            defcount--;
            bodycount--;
            continue;
            }
        }
    EndWrite();
    }

void CAknsSrvChunkMaintainer::RemoveSingleScalableItem(const TAknsItemID& aIID )
    {
    BeginWrite();
    TAknsSrvScalableItemDef* table = (TAknsSrvScalableItemDef*)GetAreaBasePtr(EAknsSrvScalableGfxArea);
    TInt defcount = GetAreaCurrentSize(EAknsSrvScalableGfxArea) / sizeof(TAknsSrvScalableItemDef);
    TInt bodycount = 0;
    for (bodycount = 0; bodycount < defcount; bodycount++)
        {
        if (table[bodycount].iID == aIID )
            {
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iBitmapHandle);
            iBitmapStore->RemoveStoredBitmap(table[bodycount].iMaskHandle);
            // clear item from the chunk &
            // move the rest of the chunk upwards
            TInt8* target = (TInt8*)(&(table[bodycount]));
            TInt8* source = (TInt8*)(&(table[bodycount+1]));
            TUint32 size = sizeof(TAknsSrvScalableItemDef)*(defcount-(bodycount+1));
            if (size > 0)
            {
                Mem::Copy(target, source, size);
            }
            SetAreaCurrentSize(
                EAknsSrvScalableGfxArea,
                GetAreaCurrentSize(EAknsSrvScalableGfxArea)-sizeof(TAknsSrvScalableItemDef));
            defcount--;
            bodycount--;
            continue;
            }
        }
    EndWrite();
    }


// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::CreateMorphingTimerL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::CreateMorphingTimerL(MAknsSrvMorphingListener* aListener)
    {
    if (iMorphingMinInterval > 0)
        {
        if (iMorphingMinInterval < KAknsSrvMinMorphingInterval)
            {
            iMorphingMinInterval = KAknsSrvMinMorphingInterval;
            }
        iMorphingTimer = CAknsSrvMorphingTimer::NewL(aListener, iMorphingMinInterval);
        AKNS_TRACE_INFO("CAknsSrvChunkMaintainer::Created timer for morphing items");
        iMorphingTimer->IssueRequest();
        AKNS_TRACE_INFO("CAknsSrvChunkMaintainer::Activated morphing timer timer");
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::UpdateMorphingTime
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::UpdateMorphingTime()
    {
    TTime now;
    now.HomeTime();

    TAknsSrvDef itemDef;

    // Perform any ID mappings
    itemDef.iID.Set( EAknsMajorProperty, EAknsMinorPropertyMorphingTime );

    // Initialize item def type
    itemDef.iType = EAknsITString;
    TAknsSrvStringDef stringDef;

    // TText16 and TPtrC16 must be used here, since the data is copied
    // verbatim from the skin file
    TUint32 timestamp[2];
    timestamp[0] = I64HIGH(now.Int64());
    timestamp[1] = I64LOW(now.Int64());
    TText16* oldData = 0;
    TInt oldDataSize = 0;

    TAknsSrvDef* itemtable = (TAknsSrvDef*)(GetAreaBasePtr(EAknsSrvItemDefArea));
    TInt oldIndex = FindDefIndex( itemDef.iID );
    if( (oldIndex>0) && (itemtable[oldIndex].iDef.iPtrType ==
        EAknsSrvMPPtrBaseRelativeRAM) )
        {
        TAknsSrvStringDef* oldDef = (TAknsSrvStringDef*)
            itemtable[oldIndex].iDef.Address( GetAreaBasePtr(EAknsSrvDataArea));
        if( oldDef->iString.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have string data in the chunk
            // Const cast is safe (always in RAM)
            oldData = const_cast<TText16*>(
                oldDef->iString.Address( GetAreaBasePtr(EAknsSrvDataArea)));
            // Size is the length of string
            oldDataSize = 8;
            }
        }

    stringDef.iString.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    stringDef.iString.iAddressOrOffset =
        reinterpret_cast< TText16* >(
        UpdateData( &timestamp, 8,
        oldData, oldDataSize ) );

    // Const cast is safe (always in RAM)
    TText* stringBuf = const_cast< TText16* >(
        stringDef.iString.Address( GetAreaBasePtr(EAknsSrvDataArea)));

    UpdateDef( &itemDef, &stringDef, sizeof(stringDef), sizeof(stringDef) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeBitmapDefinitionL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeBitmapDefinitionL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass aClass,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/)
    {
    // Only bitmap and application icon classes are effective
    if( (aClass != EAknsItemDefClassBitmaps) &&
        (aClass != EAknsItemDefClassAppIcons) )
        {
        return;
        }

    TAknsSrvDef itemDef;

    TInt32 major = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBitmapMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBitmapMinor );
    TInt32 filenameid = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBitmapFilenameID) + iCurrentFilenameID;
    TInt32 bmpIndex = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBitmapBitmapIndex );
    TInt32 maskBmpIndex = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBitmapMaskIndex );

    itemDef.iID.Set(major, minor);

    // Exclude e.g. question mark in A&H override skin
    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }

    CheckAndModifyIID( itemDef.iID, aExclQuery );

    if( maskBmpIndex == -1 )
        {
        itemDef.iType = EAknsITBitmap;

        // aFilename and MBM index
        TAknsSrvBitmapDef bmpDef;
        bmpDef.iFilename.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
        bmpDef.iFilename.iAddressOrOffset = reinterpret_cast<
            const TUint16*>(
            GetFilenameOffsetByID( filenameid ) );
        bmpDef.iIndex = bmpIndex;

        // Image attributes
        ReadAttributeChunkL( aFile, aOffset+EAknsSrvDFOBitmapAttributes,
            bmpDef.iImageAttributes, bmpDef.iImageAlignment,
            bmpDef.iImageCoordX, bmpDef.iImageCoordY,
            bmpDef.iImageSizeW, bmpDef.iImageSizeH );

        UpdateDef( &itemDef, &bmpDef, sizeof(bmpDef), sizeof(bmpDef) );
        }
    else
        {
        itemDef.iType = EAknsITMaskedBitmap;

        // aFilename and MBM index
        TAknsSrvMaskedBitmapDef bmpDef;
        bmpDef.iFilename.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
        bmpDef.iFilename.iAddressOrOffset = reinterpret_cast<
            const TUint16*>(
            GetFilenameOffsetByID( filenameid ) );
        bmpDef.iIndex = bmpIndex;
        bmpDef.iMaskIndex = maskBmpIndex;

        // Image attributes
        ReadAttributeChunkL( aFile, aOffset+EAknsSrvDFOBitmapAttributes,
            bmpDef.iImageAttributes, bmpDef.iImageAlignment,
            bmpDef.iImageCoordX, bmpDef.iImageCoordY,
            bmpDef.iImageSizeW, bmpDef.iImageSizeH );

        UpdateDef( &itemDef, &bmpDef, sizeof(bmpDef), sizeof(bmpDef) );
        }
    }

// -----------------------------------------------------------------------------
// Local method - PostProcessColorTable.
// -----------------------------------------------------------------------------
//
void PostProcessColorTable(const TAknsItemID aID, TAknsColorTableEntry* aDef,
        TInt aOldColorCount, TInt aNewColorCount)
    {
    if (aOldColorCount > aNewColorCount )
        {
        if ( aNewColorCount < KAknsSrvTextColorGroupCount &&
             aID == KAknsIIDQsnTextColors)
            {
            // patch MSK colors
            aDef[EAknsCIQsnTextColorsCG56].iIndex = aDef[EAknsCIQsnTextColorsCG13].iIndex;
            aDef[EAknsCIQsnTextColorsCG56].iRgb = aDef[EAknsCIQsnTextColorsCG13].iRgb;

            aDef[EAknsCIQsnTextColorsCG57].iIndex = aDef[EAknsCIQsnTextColorsCG15].iIndex;
            aDef[EAknsCIQsnTextColorsCG57].iRgb = aDef[EAknsCIQsnTextColorsCG15].iRgb;

            aDef[EAknsCIQsnTextColorsCG58].iIndex = aDef[EAknsCIQsnTextColorsCG17].iIndex;
            aDef[EAknsCIQsnTextColorsCG58].iRgb = aDef[EAknsCIQsnTextColorsCG17].iRgb;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeColorTableDefinitionL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeColorTableDefinitionL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass aClass, const TAknsSrvExclusionQuery& aExclQuery,
    const TBool /*aAhOverride*/ )
    {
    // Only bitmap class is effective
    if (aClass != EAknsItemDefClassBitmaps )
        {
        return;
        }

    TAknsSrvDef itemDef;

    TInt32 major = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOColorTableMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOColorTableMinor );
    TInt colorCount = (AknsSrvUtils::GetUInt16L( aFile,
        aOffset+EAknsSrvDFOColorTableColorsN))&0xff;

    itemDef.iID.Set( major, minor );
    CheckAndModifyIID( itemDef.iID, aExclQuery );

    itemDef.iType = EAknsITColorTable;

    TAknsSrvColorTableDef colorTableDef;
    colorTableDef.iNumberOfColors = colorCount;

    // Image attributes
    TInt attributeBaseOffset =
        aOffset+EAknsSrvDFOColorTableColorIndex0+
        colorCount*EAknsSrvDFOColorTableColorSize;
    ReadAttributeChunkL( aFile, attributeBaseOffset,
        colorTableDef.iImageAttributes, colorTableDef.iImageAlignment,
        colorTableDef.iImageCoordX, colorTableDef.iImageCoordY,
        colorTableDef.iImageSizeW, colorTableDef.iImageSizeH );

    TAny* oldData = 0;
    TInt oldDataSize = 0;

    TAknsSrvDef* itemtable = (TAknsSrvDef*)(GetAreaBasePtr(EAknsSrvItemDefArea));
    TInt oldIndex = FindDefIndex( itemDef.iID );
    if( (oldIndex>0) && (itemtable[oldIndex].iDef.iPtrType ==
        EAknsSrvMPPtrBaseRelativeRAM) )
        {
        TAknsSrvColorTableDef* oldDef = (TAknsSrvColorTableDef*)
            itemtable[oldIndex].iDef.Address( GetAreaBasePtr(EAknsSrvDataArea) );
        if( oldDef->iColors.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have color table data in the chunk
            oldData = const_cast<TAknsColorTableEntry*>(
                oldDef->iColors.Address( GetAreaBasePtr(EAknsSrvDataArea)));
            oldDataSize = oldDef->iNumberOfColors *
                sizeof(TAknsColorTableEntry);
            if (oldDef->iNumberOfColors > colorTableDef.iNumberOfColors)
                {
                // keep the entrycount as same as in the old table,
                // if the new table has less colors that the old one
                // ie. inherit the colors from the default skin
                colorTableDef.iNumberOfColors = oldDef->iNumberOfColors;
                }
            }
        }

    colorTableDef.iColors.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    colorTableDef.iColors.iAddressOrOffset =
        reinterpret_cast< TAknsColorTableEntry* >(
        UpdateData( NULL, colorCount*sizeof(TAknsColorTableEntry),
        oldData, oldDataSize ) );

    TAknsColorTableEntry* colorEntries =
        const_cast< TAknsColorTableEntry* >(
        colorTableDef.iColors.Address( GetAreaBasePtr(EAknsSrvDataArea)));

    for( TInt i=0; i<colorCount; i++ )
        {
        TInt16 index = AknsSrvUtils::GetUInt16L( aFile,
            aOffset+EAknsSrvDFOColorTableColorIndex0 +
            (i*EAknsSrvDFOColorTableColorSize) );
        TInt32 rgb = AknsSrvUtils::GetInt32L( aFile,
            aOffset+EAknsSrvDFOColorTableColorRgb0 +
            (i*EAknsSrvDFOColorTableColorSize) );

        colorEntries[i].iIndex = index;
        colorEntries[i].iRgb = rgb;
        }
    PostProcessColorTable(itemDef.iID,colorEntries,colorTableDef.iNumberOfColors, colorCount);
    UpdateDef( &itemDef, &colorTableDef, sizeof(colorTableDef), sizeof(colorTableDef) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeImageTableDefinitionL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeImageTableDefinitionL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass aClass,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/ )
    {
    // Only bitmap and application icon classes are effective
    if( (aClass != EAknsItemDefClassBitmaps) &&
        (aClass != EAknsItemDefClassAppIcons) )
        {
        return;
        }

    TAknsSrvDef itemDef;

    TInt32 major = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOImageTableMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOImageTableMinor );
    TInt imageCount = (AknsSrvUtils::GetUInt16L( aFile,
        aOffset+EAknsSrvDFOImageTableImagesN))&0xff;

    itemDef.iID.Set( major, minor );
    CheckAndModifyIID( itemDef.iID, aExclQuery );

    // Exclude e.g. ROP icon
    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }

    itemDef.iType = EAknsITImageTable;

    TAknsSrvImageTableDef imageTableDef;
    imageTableDef.iNumberOfImages = imageCount;

    // Image attributes
    TInt attributeBaseOffset =
        aOffset+EAknsSrvDFOImageTableImageMajor0+
        imageCount*EAknsSrvDFOImageTableImageSize;
    ReadAttributeChunkL( aFile, attributeBaseOffset,
        imageTableDef.iImageAttributes, imageTableDef.iImageAlignment,
        imageTableDef.iImageCoordX, imageTableDef.iImageCoordY,
        imageTableDef.iImageSizeW, imageTableDef.iImageSizeH );

    TAny* oldData = 0;
    TInt oldDataSize = 0;

    TAknsSrvDef* itemtable = (TAknsSrvDef*)(GetAreaBasePtr(EAknsSrvItemDefArea));
    TInt oldIndex = FindDefIndex( itemDef.iID );
    if( (oldIndex>0) && (itemtable[oldIndex].iDef.iPtrType ==
        EAknsSrvMPPtrBaseRelativeRAM) )
        {
        TAknsSrvImageTableDef* oldDef = (TAknsSrvImageTableDef*)
            itemtable[oldIndex].iDef.Address( GetAreaBasePtr(EAknsSrvDataArea));
        if( oldDef->iImages.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have image table data in the chunk
            oldData = const_cast<TAknsItemID*>(
                oldDef->iImages.Address( GetAreaBasePtr(EAknsSrvDataArea)));
            oldDataSize = oldDef->iNumberOfImages *
                sizeof(TAknsItemID);
            }
        }

    imageTableDef.iImages.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    imageTableDef.iImages.iAddressOrOffset =
        reinterpret_cast< TAknsItemID* >(
        UpdateData( NULL, imageCount*sizeof(TAknsItemID),
        oldData, oldDataSize ) );

    TAknsItemID* imageEntries =
        const_cast< TAknsItemID* >(
        imageTableDef.iImages.Address( GetAreaBasePtr(EAknsSrvDataArea)));

    for( TInt i=0; i<imageCount; i++ )
        {
        TInt32 imgMajor = AknsSrvUtils::GetInt32L( aFile,
            aOffset+EAknsSrvDFOImageTableImageMajor0 +
            (i*EAknsSrvDFOImageTableImageSize) );
        TInt32 imgMinor = AknsSrvUtils::GetInt32L( aFile,
            aOffset+EAknsSrvDFOImageTableImageMinor0 +
            (i*EAknsSrvDFOImageTableImageSize) );

        imageEntries[i].iMajor = imgMajor;
        imageEntries[i].iMinor = imgMinor;
        CheckAndModifyIID( imageEntries[i], aExclQuery );
        }

    if( imageCount == 9 ) // Frame
        {
        EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch, imageEntries[4] );
        EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch, imageEntries[5] );
        EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch, imageEntries[6] );
        EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch, imageEntries[7] );
        EnqueuePostOperationL( EAknsSrvCMPOTTileToStretch, imageEntries[8] );
        }

    UpdateDef( &itemDef, &imageTableDef,
        sizeof(imageTableDef), sizeof(imageTableDef) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeBmpAnimDefinitionL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeBmpAnimDefinitionL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass aClass,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/ )
    {
    // Only bitmap class are effective
    if( aClass != EAknsItemDefClassBitmaps )
        {
        return;
        }

    TAknsSrvDef itemDef;

    TInt32 major = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBmpAnimMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOBmpAnimMinor );
    TInt frameCount = (AknsSrvUtils::GetUInt16L( aFile,
        aOffset+EAknsSrvDFOBmpAnimFramesN))&0xff;
    TInt16 interval = AknsSrvUtils::GetInt16L( aFile,
        aOffset+EAknsSrvDFOBmpAnimInterval );
    TInt16 playMode = static_cast< TInt16 >(
        AknsSrvUtils::GetUInt8L( aFile,
        aOffset+EAknsSrvDFOBmpAnimPlayMode) );
    TBool flash = EFalse;
    if( ((AknsSrvUtils::GetUInt16L( aFile,
        aOffset+EAknsSrvDFOBmpAnimPlayMode))&0xff) != 0 )
        {
        flash = ETrue;
        }

    itemDef.iID.Set( major, minor );

    // Exclude e.g. question mark in A&H override skin
    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }

    CheckAndModifyIID( itemDef.iID, aExclQuery );

    itemDef.iType = EAknsITBmpAnim;

    TAknsSrvBmpAnimDef bmpAnimDef;
    bmpAnimDef.iNumberOfImages = frameCount;
    bmpAnimDef.iFrameInterval = interval;
    bmpAnimDef.iPlayMode = playMode;
    bmpAnimDef.iFlash = flash;
    bmpAnimDef.iLastFrameBackground = EFalse;

    // Image attributes
    TInt attributeBaseOffset =
        aOffset+EAknsSrvDFOBmpAnimFrameMajor0+
        frameCount*EAknsSrvDFOBmpAnimFrameSize;
    ReadAttributeChunkL( aFile, attributeBaseOffset,
        bmpAnimDef.iImageAttributes, bmpAnimDef.iImageAlignment,
        bmpAnimDef.iImageCoordX, bmpAnimDef.iImageCoordY,
        bmpAnimDef.iImageSizeW, bmpAnimDef.iImageSizeH );

    TAny* oldImageData = 0;
    TInt oldImageDataSize = 0;
    TAny* oldFrameData = 0;
    TInt oldFrameDataSize = 0;

    TAknsSrvDef* itemtable = (TAknsSrvDef*)(GetAreaBasePtr(EAknsSrvItemDefArea));
    TInt oldIndex = FindDefIndex( itemDef.iID );
    if( (oldIndex>0) && (itemtable[oldIndex].iDef.iPtrType ==
        EAknsSrvMPPtrBaseRelativeRAM) )
        {
        TAknsSrvBmpAnimDef* oldDef = (TAknsSrvBmpAnimDef*)
            itemtable[oldIndex].iDef.Address(GetAreaBasePtr(EAknsSrvDataArea));
        if( oldDef->iImages.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have image table data in the chunk
            oldImageData = const_cast<TAknsItemID*>(
                oldDef->iImages.Address(GetAreaBasePtr(EAknsSrvDataArea)));
            oldImageDataSize = oldDef->iNumberOfImages *
                sizeof(TAknsItemID);
            }
        if( oldDef->iFrameInfos.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have frame infos in the chunk
            oldFrameData = const_cast<TAknsBmpAnimFrameInfo*>(
                oldDef->iFrameInfos.Address( GetAreaBasePtr(EAknsSrvDataArea)));
            oldFrameDataSize = oldDef->iNumberOfImages *
                sizeof(TAknsBmpAnimFrameInfo);
            }
        }

    bmpAnimDef.iImages.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    bmpAnimDef.iImages.iAddressOrOffset =
        reinterpret_cast< TAknsItemID* >(
        UpdateData( NULL, frameCount*sizeof(TAknsItemID),
        oldImageData, oldImageDataSize ) );
    bmpAnimDef.iFrameInfos.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    bmpAnimDef.iFrameInfos.iAddressOrOffset =
        reinterpret_cast< TAknsBmpAnimFrameInfo* >(
        UpdateData( NULL, frameCount*sizeof(TAknsBmpAnimFrameInfo),
        oldFrameData, oldFrameDataSize ) );

    TAknsItemID* imageEntries =
        const_cast< TAknsItemID* >(
        bmpAnimDef.iImages.Address( GetAreaBasePtr(EAknsSrvDataArea)));
    TAknsBmpAnimFrameInfo* frameEntries =
        const_cast< TAknsBmpAnimFrameInfo* >(
        bmpAnimDef.iFrameInfos.Address( GetAreaBasePtr(EAknsSrvDataArea)));

    for( TInt i=0; i<frameCount; i++ )
        {
        TInt32 imgMajor = AknsSrvUtils::GetInt32L( aFile,
            aOffset+EAknsSrvDFOBmpAnimFrameMajor0 +
            (i*EAknsSrvDFOBmpAnimFrameSize) );
        TInt32 imgMinor = AknsSrvUtils::GetInt32L( aFile,
            aOffset+EAknsSrvDFOBmpAnimFrameMinor0 +
            (i*EAknsSrvDFOBmpAnimFrameSize) );

        imageEntries[i].iMajor = imgMajor;
        imageEntries[i].iMinor = imgMinor;
        CheckAndModifyIID( imageEntries[i], aExclQuery );

        TInt16 frameTime = AknsSrvUtils::GetInt16L( aFile,
            aOffset+EAknsSrvDFOBmpAnimFrameTime0 +
            (i*EAknsSrvDFOBmpAnimFrameSize) );
        TInt16 framePosX = AknsSrvUtils::GetInt16L( aFile,
            aOffset+EAknsSrvDFOBmpAnimFramePosX0 +
            (i*EAknsSrvDFOBmpAnimFrameSize) );
        TInt16 framePosY = AknsSrvUtils::GetInt16L( aFile,
            aOffset+EAknsSrvDFOBmpAnimFramePosY0 +
            (i*EAknsSrvDFOBmpAnimFrameSize) );

        frameEntries[i].iTime = frameTime;
        frameEntries[i].iPosX = framePosX;
        frameEntries[i].iPosY = framePosY;
        }

    UpdateDef( &itemDef, &bmpAnimDef, sizeof(bmpAnimDef), sizeof(bmpAnimDef) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeStringDefinitionL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeStringDefinitionL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass aClass,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/ )
    {
    // Only bitmap and application icon classes are effective
    if( (aClass != EAknsItemDefClassBitmaps) &&
        (aClass != EAknsItemDefClassAppIcons) )
        {
        return;
        }

    TAknsSrvDef itemDef;

    // First fetch the scalar values
    TInt32 major = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOStringMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile,
        aOffset+EAknsSrvDFOStringMinor );
    TInt stringLen = AknsSrvUtils::GetUInt16L( aFile,
        aOffset+EAknsSrvDFOStringStringLen );

    // Perform any ID mappings
    itemDef.iID.Set( major, minor );
    CheckAndModifyIID( itemDef.iID, aExclQuery );

    // Exclude e.g. ROP icon
    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }

    // Initialize item def type
    itemDef.iType = EAknsITString;
    TAknsSrvStringDef stringDef;

    // TText16 and TPtrC16 must be used here, since the data is copied
    // verbatim from the skin file
    TText16* oldData = 0;
    TInt oldDataSize = 0;

    // Find old item, if any
    TAknsSrvDef* itemtable = (TAknsSrvDef*)(GetAreaBasePtr(EAknsSrvItemDefArea));
    TInt oldIndex = FindDefIndex( itemDef.iID );
    if( (oldIndex>0) && (itemtable[oldIndex].iDef.iPtrType ==
        EAknsSrvMPPtrBaseRelativeRAM) )
        {
        TAknsSrvStringDef* oldDef = (TAknsSrvStringDef*)
            itemtable[oldIndex].iDef.Address( GetAreaBasePtr(EAknsSrvDataArea));
        if( oldDef->iString.iPtrType ==
            EAknsSrvMPPtrBaseRelativeRAM )
            {
            // We already have string data in the chunk
            // Const cast is safe (always in RAM)
            oldData = const_cast<TText16*>(
                oldDef->iString.Address( GetAreaBasePtr(EAknsSrvDataArea)));
            // Size is the length of string + zero terminator
            oldDataSize = TPtrC16( oldData ).Size() + 2;
            }
        }

    stringDef.iString.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    stringDef.iString.iAddressOrOffset =
        reinterpret_cast< TText16* >(
        UpdateData( NULL, (stringLen+1)*2,
        oldData, oldDataSize ) );

    // Const cast is safe (always in RAM)
    TText* stringBuf = const_cast< TText16* >(
        stringDef.iString.Address( GetAreaBasePtr(EAknsSrvDataArea)));

    for( TInt i=0; i<stringLen; i++ )
        {
        stringBuf[i] = AknsSrvUtils::GetInt16L( aFile,
            aOffset+EAknsSrvDFOStringString+2*i );
        }
    // Append zero terminator
    stringBuf[stringLen] = 0;

    UpdateDef( &itemDef, &stringDef, sizeof(stringDef), sizeof(stringDef) );
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::ReadAttributeChunkL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::ReadAttributeChunkL( CAknsSrvFileBuffer& aFile,
    const TUint aOffset, TInt& aAttributes, TInt& aAlignment,
    TInt& aCoordX, TInt& aCoordY, TInt& aSizeW, TInt& aSizeH )
    {
    TUint16 version = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOCommonVersion );

    TUint16 alignAttr = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOAttributesAttributeFlags );
    TInt16 imageCoordX = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOAttributesCoordX );
    TInt16 imageCoordY = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOAttributesCoordY );
    TInt16 imageSizeW = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOAttributesSizeW );
    TInt16 imageSizeH = AknsSrvUtils::GetUInt16L( aFile,
        aOffset + EAknsSrvDFOAttributesSizeH );

    aAttributes = alignAttr&0xff;
    aAlignment = (alignAttr&0xff00)>>8;
    aCoordX = imageCoordX;
    aCoordY = imageCoordY;
    aSizeW = imageSizeW;
    aSizeH = imageSizeH;

    if( version >= 2 )
        {
        TInt extAttr = AknsSrvUtils::GetUInt16L( aFile,
            aOffset + EAknsSrvDFOAttributesExtAttributeFlags );
        extAttr = extAttr << 8;
        aAttributes |= extAttr;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::FindDefIndex
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::FindDefIndex( const TAknsItemID& aIID )
    {
    if ( iMergeS60Skin )
        {
        return -1;
        }
    TAknsSrvHashTable* hashtable = (TAknsSrvHashTable*)GetAreaBasePtr(EAknsSrvItemDefHash);
    TAknsSrvDef* itemtable = (TAknsSrvDef*)GetAreaBasePtr(EAknsSrvItemDefArea);
    TInt defcount = GetAreaCurrentSize(EAknsSrvItemDefArea) / sizeof(TAknsSrvDef);
  
    TUint hashindex = (TUint)(aIID.iMajor + aIID.iMinor) % KAknsSrvMaxHashList;
    if ( hashtable[hashindex].iHead >= 0 )
        {
        TInt def = hashtable[hashindex].iHead;
        while ( def >= 0)
            {
            if (TAknsItemID::LinearOrder( aIID, itemtable[def].iID) == 0 )
                {
                return def;
                }
            def = itemtable[def].iHashNext;
            }
        }

    return -1;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::UpdateDef
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::UpdateDef( const TAknsSrvDef* aDef,
    const TAny* aData, const TInt aDataSize, const TInt aOldDataSize )
    {
    TAny* oldData = NULL;
    TInt oldDataSize = 0;
    TAknsSrvDef* trgDef = NULL;

    TInt index = FindDefIndex( aDef->iID );

    if( index >= 0 )
        {
        trgDef = (TAknsSrvDef*)( GetAreaBasePtr(EAknsSrvItemDefArea) + index*sizeof(TAknsSrvDef) );

        if( (trgDef->iType == aDef->iType) &&
            (trgDef->iDef.iPtrType == EAknsSrvMPPtrBaseRelativeRAM ) )
            {
            oldData = const_cast<TAny*>(
                trgDef->iDef.Address( GetAreaBasePtr(EAknsSrvDataArea) ) );
            if (aOldDataSize == -1)
                {
                // if a olddatasize -1 was passed to this function the first value
                // in the data is the size of the data (in bytes)
                TInt size  = *(reinterpret_cast<TInt*>(oldData));
                oldDataSize = size;
                }
            else
                {
                oldDataSize = aOldDataSize;
                }
            }
        TInt next = trgDef->iHashNext;
        Mem::Copy( trgDef, aDef, sizeof(TAknsSrvDef) );
        trgDef->iHashNext = next;
        }
    else
        {
        trgDef = (TAknsSrvDef*)( GetAreaBasePtr(EAknsSrvItemDefArea)
            + GetAreaCurrentSize(EAknsSrvItemDefArea));
        SetAreaCurrentSize(EAknsSrvItemDefArea,
            GetAreaCurrentSize(EAknsSrvItemDefArea)+sizeof(TAknsSrvDef));
        Mem::Copy( trgDef, aDef, sizeof(TAknsSrvDef) );
        UpdateDefHash( trgDef );
        }

    trgDef->iDef.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
    trgDef->iDef.iAddressOrOffset = reinterpret_cast<TAny*>(
        UpdateData( aData, aDataSize, oldData, oldDataSize ) );
    }

void CAknsSrvChunkMaintainer::UpdateDefHash( TAknsSrvDef* aDef )
    {
    //Calculate the hash number
    TUint num = (TUint)( aDef->iID.iMajor + aDef->iID.iMinor ) % 128;
    TAknsSrvHashTable* hashtable = (TAknsSrvHashTable*)GetAreaBasePtr(EAknsSrvItemDefHash);
    TInt defcount = GetAreaCurrentSize(EAknsSrvItemDefArea) / sizeof(TAknsSrvDef);

    aDef->iHashNext = (hashtable[num].iHead >= 0) ? hashtable[num].iHead: -1;
    hashtable[num].iHead = defcount-1; 
    }
// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::UpdateData
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::UpdateData( const TAny* aData,
    const TInt aDataSize, TAny* aOldData, const TInt aOldDataSize )
    {
    TInt offset = 0;

    if( aOldData && (aOldDataSize>=aDataSize) )
        {
        // New data fits in place of the old data
        if( aData )
            {
            Mem::Copy( aOldData, aData, aDataSize );
            }
        offset = (TInt)aOldData - (TInt)GetAreaBasePtr(EAknsSrvDataArea);
        }
    else
        {
        offset = GetAreaCurrentSize(EAknsSrvDataArea);
        SetAreaCurrentSize(EAknsSrvDataArea, offset+aDataSize);
        if( aData )
            {
            Mem::Copy( GetAreaBasePtr(EAknsSrvDataArea) + offset, aData,
                aDataSize );
            }
        }
    return offset;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::GetFilenameOffsetByID
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::GetFilenameOffsetByID( TInt32 aID )
    {
    TInt32* chunkptr = (TInt32*)(GetAreaBasePtr(EAknsSrvFilenameArea));
    TInt count = GetAreaCurrentSize(EAknsSrvFilenameArea)
        / KAknsSrvMaxFileNameLen;
    TInt index = 0;
    for (index = 0; index < count; index++)
        {
        if (chunkptr[0] == aID)
            {
            break;
            }
        chunkptr+=KAknsSrvMaxFileNameLen/4;
        }
    return index*KAknsSrvMaxFileNameLen+4;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::UpdateFilename
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::UpdateFilename(
    TInt32 aFilenameID, TUint8* aFilenamePtr, TUint16 aFilenameLen,
    const TDesC& aBaseFilename )
    {
    TInt pathindex = aBaseFilename.LocateReverse(TChar('\\'))+1;
    TInt filenamecount = GetAreaCurrentSize(EAknsSrvFilenameArea)
        / KAknsSrvMaxFileNameLen;
    TInt* chunkptr = (TInt*)GetAreaBasePtr(EAknsSrvFilenameArea);
    TInt index = 0;
    TBool found = EFalse;
    // Check if the filename is already inserted and update it
    for (index = 0; index < filenamecount; index++)
        {
        if (chunkptr[0] == aFilenameID)
            {
            found = ETrue;
            break;
            }
        chunkptr+=KAknsSrvMaxFileNameLen/4;
        }

    if (!found)
        {
        SetAreaCurrentSize( EAknsSrvFilenameArea,
            GetAreaCurrentSize(EAknsSrvFilenameArea)+KAknsSrvMaxFileNameLen);
        }

    TUint8* filenameptr = (TUint8*)chunkptr;
    Mem::FillZ(filenameptr, KAknsSrvMaxFileNameLen);
    chunkptr[0] = aFilenameID;

    filenameptr+=4;
    Mem::Copy(filenameptr, aBaseFilename.Ptr(), pathindex*2);
    Mem::Copy(filenameptr+pathindex*2,
        aFilenamePtr,
        aFilenameLen*2);
    Mem::FillZ(filenameptr+pathindex*2+aFilenameLen*2, 2);
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::GetAreaBasePtr
// -----------------------------------------------------------------------------
//
TInt8* CAknsSrvChunkMaintainer::GetAreaBasePtr( TAknsSrvBaseAreaName aAreaname )
    {
    TInt* chunkbase = (TInt*)(iSharedChunk.Base());
    TInt offset = 0;
    switch (aAreaname)
        {
        case EAknsSrvItemDefArea:
            offset = chunkbase[EAknsSrvItemDefAreaBaseOffset];
            return ((TInt8*)(chunkbase))+offset;
        case EAknsSrvDataArea:
            offset = chunkbase[EAknsSrvDataAreaBaseOffset];
            return ((TInt8*)(chunkbase))+offset;
        case EAknsSrvFilenameArea:
            offset = chunkbase[EAknsSrvFilenameAreaBaseOffset];
            return ((TInt8*)(chunkbase))+offset;
        case EAknsSrvScalableGfxArea:
            offset = chunkbase[EAknsSrvScalableGfxAreaBaseOffset];
            return ((TInt8*)(chunkbase))+offset;
        case EAknsSrvItemDefHash:
            offset = chunkbase[EAknsSrvItemDefHashBaseOffset];
            return ((TInt8*)(chunkbase))+offset;
        default:
            return 0;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::GetAreaAllocatedSize
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::GetAreaAllocatedSize(
    TAknsSrvBaseAreaName aAreaname )
    {
    TInt* chunkbase = (TInt*)(iSharedChunk.Base());
    TInt size = 0;
    switch (aAreaname)
        {
        case EAknsSrvItemDefArea:
            size = chunkbase[EAknsSrvItemDefAreaAllocatedSizeOffset];
            return size;
        case EAknsSrvDataArea:
            size = chunkbase[EAknsSrvDataAreaAllocatedSizeOffset];
            return size;
        case EAknsSrvFilenameArea:
            size = chunkbase[EAknsSrvFilenameAreaAllocatedSizeOffset];
            return size;
        case EAknsSrvScalableGfxArea:
            size = chunkbase[EAknsSrvScalableGfxAreaAllocatedSizeOffset];
            return size;
        case EAknsSrvItemDefHash:
            size = chunkbase[EAknsSrvItemDefHashAllocatedSizeOffset];
            return size;
        default:
            return 0;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::GetAreaCurrentSize
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::GetAreaCurrentSize(
    TAknsSrvBaseAreaName aAreaname )
    {
    TInt* chunkbase = (TInt*)(iSharedChunk.Base());
    TInt count = 0;
    switch (aAreaname)
        {
        case EAknsSrvItemDefArea:
            count = chunkbase[EAknsSrvItemDefAreaCurrentSizeOffset];
            return count;
        case EAknsSrvDataArea:
            count = chunkbase[EAknsSrvDataAreaCurrentSizeOffset];
            return count;
        case EAknsSrvFilenameArea:
            count = chunkbase[EAknsSrvFilenameAreaCurrentSizeOffset];
            return count;
        case EAknsSrvScalableGfxArea:
            count = chunkbase[EAknsSrvScalableGfxAreaCurrentSizeOffset];
            return count;
        default:
            return 0;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::AdjustAreaAllocatedSize
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::AdjustAreaAllocatedSize(
    TAknsSrvBaseAreaName aAreaname, TInt aNewSize )
    {
    TInt* chunkbase = (TInt*)(iSharedChunk.Base());

    TInt areaallocatedsize = GetAreaAllocatedSize(aAreaname);
    TInt totalallocatedareasize = GetAreaAllocatedSize(EAknsSrvItemDefArea)
        + GetAreaAllocatedSize(EAknsSrvDataArea)
        + GetAreaAllocatedSize(EAknsSrvFilenameArea)
        + GetAreaAllocatedSize(EAknsSrvScalableGfxArea)
        + GetAreaAllocatedSize(EAknsSrvItemDefHash)
        + KAknsSrvSharedChunkHeaderAreaSize;

    if (areaallocatedsize <= aNewSize)
        {
        TInt chunksize = iSharedChunk.Size();
        if ( totalallocatedareasize
            > KAknsSrvSharedChunkMaxSize - KAknsSrvSharedChunkGranularity  )
            {
            // Tough luck, we cannot adjust the chunk size past
            // KAknsSrvSharedChunkMaxSize, just cross our fingers and
            // hope that everything fits in the chunk...
            return;
            }
        if ( (totalallocatedareasize+KAknsSrvSharedChunkGranularity)
            >= chunksize )
            {
            TInt err = iSharedChunk.Adjust( chunksize +
                KAknsSrvSharedChunkGranularity );
            if (err)
                {
                AKNS_TRACE_ERROR("CAknsSrvChunkMaintainer::AdjustAreaAllocatedSize CANNOT ADJUST!");
                User::Panic(KAknSkinSrvPanicCategory, EAknsSrvCannotAdjustChunk );
                }
            }

        TInt len = 0;
        TInt8* source = 0;
        TInt8* target = 0;

        switch (aAreaname)
            {
            case EAknsSrvItemDefArea:
                chunkbase[EAknsSrvItemDefAreaAllocatedSizeOffset] =
                    chunkbase[EAknsSrvItemDefAreaAllocatedSizeOffset]
                    + KAknsSrvSharedChunkGranularity;
                // move dataarea, filenamearea and scalablegfxarea
                // KAknsSrvSharedChunkGranularity bytes down...
                source = GetAreaBasePtr(EAknsSrvDataArea);
                target = source+KAknsSrvSharedChunkGranularity;
                len = GetAreaAllocatedSize(EAknsSrvDataArea)
                    + GetAreaAllocatedSize(EAknsSrvFilenameArea)
                    + GetAreaAllocatedSize(EAknsSrvScalableGfxArea);
                Mem::Move(target, source, len);
                chunkbase[EAknsSrvDataAreaBaseOffset] =
                    chunkbase[EAknsSrvDataAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                chunkbase[EAknsSrvFilenameAreaBaseOffset] =
                    chunkbase[EAknsSrvFilenameAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                chunkbase[EAknsSrvScalableGfxAreaBaseOffset] =
                    chunkbase[EAknsSrvScalableGfxAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                break;
            case EAknsSrvDataArea:
                chunkbase[EAknsSrvDataAreaAllocatedSizeOffset] =
                    chunkbase[EAknsSrvDataAreaAllocatedSizeOffset]
                    + KAknsSrvSharedChunkGranularity;
                // move filenamearea and scalablegfxarea
                // KAknsSrvSharedChunkGranularity bytes down
                source = GetAreaBasePtr(EAknsSrvFilenameArea);
                target = source+KAknsSrvSharedChunkGranularity;
                len = GetAreaAllocatedSize(EAknsSrvFilenameArea)
                    + GetAreaAllocatedSize(EAknsSrvScalableGfxArea);
                Mem::Move(target, source, len);
                chunkbase[EAknsSrvFilenameAreaBaseOffset] =
                    chunkbase[EAknsSrvFilenameAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                chunkbase[EAknsSrvScalableGfxAreaBaseOffset] =
                    chunkbase[EAknsSrvScalableGfxAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                break;
            case EAknsSrvFilenameArea:
                chunkbase[EAknsSrvFilenameAreaAllocatedSizeOffset] =
                    chunkbase[EAknsSrvFilenameAreaAllocatedSizeOffset]
                    + KAknsSrvSharedChunkGranularity;
                // move scalablegfxarea KAknsSrvSharedChunkGranularity bytes down
                source = GetAreaBasePtr(EAknsSrvScalableGfxArea);
                target = source+KAknsSrvSharedChunkGranularity;
                len = GetAreaAllocatedSize(EAknsSrvScalableGfxArea);
                Mem::Move(target,source,len);
                chunkbase[EAknsSrvScalableGfxAreaBaseOffset] =
                    chunkbase[EAknsSrvScalableGfxAreaBaseOffset]
                    + KAknsSrvSharedChunkGranularity;
                break;
            case EAknsSrvScalableGfxArea:
                // the size of this area is static, no need to adjust it
                break;
            default:
                break;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::SetAreaCurrentSize
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::SetAreaCurrentSize(
    TAknsSrvBaseAreaName aAreaname, TInt aNewSize )
    {
    TUint misalign = aNewSize&3;
    TUint newValue = aNewSize;
    if( misalign )
        {
        newValue += (4-misalign);
        }

    __ASSERT_DEBUG( newValue%4==0,
        User::Panic( KAknSkinSrvPanicCategory, EAknsSrvBadAlignment ) );

    AdjustAreaAllocatedSize( aAreaname, newValue );
    TInt* chunkbase = (TInt*)(iSharedChunk.Base());
    switch (aAreaname)
        {
        case EAknsSrvItemDefArea:
            chunkbase[EAknsSrvItemDefAreaCurrentSizeOffset] = newValue;
            break;
        case EAknsSrvDataArea:
            chunkbase[EAknsSrvDataAreaCurrentSizeOffset] = newValue;
            break;
        case EAknsSrvFilenameArea:
            chunkbase[EAknsSrvFilenameAreaCurrentSizeOffset] = newValue;
            break;
        case EAknsSrvScalableGfxArea:
            chunkbase[EAknsSrvScalableGfxAreaCurrentSizeOffset] = newValue;
            break;
        default:
            break;
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::InitializeChunk
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::InitializeChunk()
    {
    iCurrentFilenameID = 0;
    Mem::FillZ(iSharedChunk.Base(), iSharedChunk.Size());
    TInt* chunkbase = (TInt*)iSharedChunk.Base();
    
    chunkbase[EAknsSrvItemDefHashBaseOffset] =
        KAknsSrvSharedChunkHeaderAreaSize;
    chunkbase[EAknsSrvItemDefHashAllocatedSizeOffset] =
        KAknsSrvMaxHashSize-KAknsSrvSharedChunkHeaderAreaSize;
    chunkbase[EAknsSrvItemDefHashCurrentSizeOffset] = 0;

    Mem::Fill( GetAreaBasePtr(EAknsSrvItemDefHash), 
            (KAknsSrvMaxHashSize-KAknsSrvSharedChunkHeaderAreaSize), 0xFF );
    
    chunkbase[EAknsSrvItemDefAreaBaseOffset] =
        KAknsSrvMaxHashSize;
    chunkbase[EAknsSrvItemDefAreaAllocatedSizeOffset] =
        12*KAknsSrvSharedChunkGranularity - KAknsSrvMaxHashSize; //48k -1k 
    chunkbase[EAknsSrvItemDefAreaCurrentSizeOffset] = 0;
    
    chunkbase[EAknsSrvDataAreaBaseOffset] = 12*KAknsSrvSharedChunkGranularity;
    chunkbase[EAknsSrvDataAreaAllocatedSizeOffset] =
        20*KAknsSrvSharedChunkGranularity; //80k
    chunkbase[EAknsSrvDataAreaCurrentSizeOffset] = 0;
    
    chunkbase[EAknsSrvFilenameAreaBaseOffset] =
        32*KAknsSrvSharedChunkGranularity;
    chunkbase[EAknsSrvFilenameAreaAllocatedSizeOffset] =
        KAknsSrvSharedChunkGranularity;
    chunkbase[EAknsSrvFilenameAreaCurrentSizeOffset] = 0;
    
    chunkbase[EAknsSrvScalableGfxAreaBaseOffset] =
        33*KAknsSrvSharedChunkGranularity;
    chunkbase[EAknsSrvScalableGfxAreaAllocatedSizeOffset] =
        KAknsSrvSharedChunkGranularity;
    chunkbase[EAknsSrvScalableGfxAreaCurrentSizeOffset] = 0;

    TInt committed = iSharedChunk.Size();
    if (committed > KAknsSrvSharedChunkInitialSize)
        {
#if defined(_DEBUG)
        TInt err =
#endif
            iSharedChunk.Adjust( KAknsSrvSharedChunkInitialSize );
#if defined(_DEBUG)
        AKNS_TRACE_ERROR("AknSkinSrv could not reduce shared memory chunk size");
#endif
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::AlignToFour
// -----------------------------------------------------------------------------
//
TInt CAknsSrvChunkMaintainer::AlignToFour(const TInt aValue)
    {
    TInt misalign = aValue&3;
    TInt newValue = aValue;
    if( misalign )
        {
        newValue += (4-misalign);
        }

    __ASSERT_DEBUG( newValue%4==0,
        User::Panic( KAknSkinSrvPanicCategory, EAknsSrvBadAlignment ) );
    return newValue;
    }

// End of file

/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server client.
*
*/


// INCLUDE FILES
#include <AknsSrvClient.h>
#include "AknsSrv.h"
#include "AknsSkinChangeHandler.h"
#include "AknsSrvClientMemberData.h"
#include <AknsImageAttributeData.h>
#include "AknsSrvUtils.h"

#include <AknUtils.h> 
#include <akniconconfig.h>

#include "AknsDebug.h"
#include <hal.h>
#include <badesca.h>

// CONSTANTS

// Number of re-tries for skin server connection.
const TInt KAknSkinSrvConnectionTries = 2;
// Number of message slots.
const TUint KAknSkinSrvDefaultMessageSlots = 2;

// ============================= LOCAL FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsSrvCArrayPtrCleanup
// Cleanup operation for CArrayPtr<CAknsSrvSkinInformationPkg>
// -----------------------------------------------------------------------------
static void AknsSrvCArrayPtrCAknsSrvSkinInformationPkgCleanup( TAny* aItem )
    {
    CArrayPtr<CAknsSrvSkinInformationPkg>* array = static_cast<
        CArrayPtr<CAknsSrvSkinInformationPkg>*>( aItem );
    array->ResetAndDestroy();
    delete array;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// RAknsSrvSession::RAknsSrvSession
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
EXPORT_C RAknsSrvSession::RAknsSrvSession()
    : RSessionBase(), iMemberData(NULL)
    {
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Connect
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::Connect(
    MAknsSkinChangeObserver* aObserver,
    TInt aPriority )
    {
    AKNS_TRACE_INFO("RAknsSrvSession::Connect ENTERED");

    if( iHandle )
        {
        AKNS_TRACE_INFO("RAknsSrvSession::Connect Handle exists, RETURN KErrNone");
        return KErrNone;
        }

    // Connect to server and make sure this can't cause 2 servers launch
    // if 2 clients are trying to connect simultaneously.

    AKNS_TRACE_INFO("RAknsSrvSession::Connect Creating member data");

    iMemberData = new TAknsSrvClientMemberData;
    if (!iMemberData)
        {
        AKNS_TRACE_ERROR("RAknsSrvSession::Connect NO MEMORY");
        return KErrNoMemory;
        }

    iMemberData->iHandler = NULL;
    iMemberData->iObserver = aObserver;

    TInt err( KErrNone );

    for ( TInt tries = 0; tries < KAknSkinSrvConnectionTries ; tries++ )
        {
        AKNS_TRACE_INFO("RAknsSrvSession::Connect Creating session");
        
        err = CreateSession( KAknSkinSrvName, Version(),
            KAknSkinSrvDefaultMessageSlots );
        
        AKNS_TRACE_INFO1("RAknsSrvSession::Connect Session create ret %d", err);

        // Break if connected to existing server or if the problem is
        // other than missing server.

        if ( err == KErrNone ||
            ( err != KErrNotFound && err != KErrServerTerminated ) )
            {
            break;
            }

        AKNS_TRACE_INFO("RAknsSrvSession::Connect Trying to start the server");

        err = StartServer();    // try start a new server

        AKNS_TRACE_INFO1("RAknsSrvSession::Connect StartServer ret %d", err);

        // If server launched ok or someone else got to launch it first,
        // try connect again.

        if( (err!=KErrNone) && (err!=KErrAlreadyExists) )
            {
            break; // server not launched: don't cycle round again
            }
        }

    if (err != KErrNone)
        {
        AKNS_TRACE_ERROR1("RAknsSrvSession::Connect CREATE SESSION FAILED, err=%d", err);
        delete iMemberData;
        iMemberData = NULL;
        return err;
        }

    // Check if the user wanted us to notify skin changes and create
    // the Active object to handle the notification events. Otherwise
    // just return.
    if( iMemberData->iObserver)
        {
        AKNS_TRACE_INFO("RAknsSrvSession::Connect Observer required");

        __ASSERT_DEBUG( CActiveScheduler::Current(), User::Panic(
            KAknSkinSrvPanicCategory, EAknsSrvNoActiveScheduler ) );

        iMemberData->iHandler = new CAknsSkinChangeHandler( *this, aPriority );

        if( !iMemberData->iHandler )
            {
            AKNS_TRACE_ERROR("RAknsSrvSession::Connect NO MEMORY FOR HANDLER");
            delete iMemberData;
            iMemberData = NULL;
            return KErrNoMemory;
            }

        CActiveScheduler::Add( iMemberData->iHandler );
        iMemberData->iHandler->SetActive();

        // Set the notify handler also on the server side;
        SendReceive( EAknSkinSrvSetNotifyHandler, TIpcArgs( iMemberData->iHandler) );
        EventHandled();
        }

    AKNS_TRACE_INFO("RAknsSrvSession::Connect COMPLETED");

    // Everything went ok if we managed to get here.
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Close
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::Close()
    {
    if ( iMemberData && iMemberData->iHandler )
        {
        iMemberData->iHandler->Cancel();
        delete iMemberData->iHandler;
        iMemberData->iHandler = NULL;
        }

    RSessionBase::Close();
    if (iMemberData)
        {
        delete iMemberData;
        iMemberData = NULL;
        }
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::EnableSkinChangeNotify
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::EnableSkinChangeNotify()
    {
    SendReceive( EAknSkinSrvEnableNotifySkinChange , TIpcArgs( TIpcArgs::ENothing) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::DisableSkinChangeNotify
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::DisableSkinChangeNotify()
    {
    SendReceive( EAknSkinSrvDisableNotifySkinChange, TIpcArgs( TIpcArgs::ENothing) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::ClientError
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::ClientError(TInt aErrorCode)
    {
    AKNS_TRACE_ERROR("RAknsSrvSession::ClientError");

    SendReceive(EAknSkinSrvClientError, TIpcArgs( aErrorCode ) );

    AKNS_TRACE_INFO("RAknsSrvSession::ClientError COMPLETED");
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::SetAllDefinitionSets
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::SetAllDefinitionSets( const TAknsPkgID aPID )
    {
    AKNS_TRACE_INFO2("RAknsSrvSession::SetAllDefinitionSets %i %i", aPID.iNumber, aPID.iTimestamp);
    TInt freeRAM = 0;
    HAL::Get(HALData::EMemoryRAMFree, freeRAM);
    if ( freeRAM < KAknSkinSrvFreeRAMNeeded )
        {
        return KErrNoMemory;
        }

    return SendReceive( EAknSkinSrvSetAllItemDefSets,
        TIpcArgs( aPID.iNumber, aPID.iTimestamp) );
    } //lint !e1746 TUid is a single word

// -----------------------------------------------------------------------------
// RAknsSrvSession::EnumerateSkinPackages
// -----------------------------------------------------------------------------
//
EXPORT_C CArrayPtr<CAknsSrvSkinInformationPkg>*
    RAknsSrvSession::EnumerateSkinPackagesL(
        TAknSkinSrvSkinPackageLocation aLocation )
    {
    CArrayPtrFlat<CAknsSrvSkinInformationPkg>* array =
        new (ELeave) CArrayPtrFlat<CAknsSrvSkinInformationPkg>(5);
    CleanupStack::PushL( TCleanupItem(
        AknsSrvCArrayPtrCAknsSrvSkinInformationPkgCleanup, array ) );

    TPckgBuf<TInt> pkgCountPack;
    SendReceive( EAknSkinSrvEnumeratePackages, TIpcArgs(&pkgCountPack, aLocation));
    TInt pkgCount = pkgCountPack();
    if (pkgCount <= 0)
        {
        CleanupStack::Pop( array );
        return array;
        }
    if ( ( pkgCount*sizeof(TAknsSrvSkinInfoPkg) ) > KMaxTInt )
        {
        CleanupStack::Pop( array );
        return array;
        }
    HBufC8* packages = HBufC8::NewLC(pkgCount*sizeof(TAknsSrvSkinInfoPkg));
    TPtr8 ptr8 = packages->Des();
    User::LeaveIfError(SendReceive( EAknSkinSrvReceivePackages, TIpcArgs(pkgCount, &ptr8)));

    for (TInt count = 0; count < pkgCount; count++)
        {
        TAknsSrvSkinInfoPkg* pkg = (TAknsSrvSkinInfoPkg*)&(ptr8[count*sizeof(TAknsSrvSkinInfoPkg)]);
        CAknsSrvSkinInformationPkg* pack = CAknsSrvSkinInformationPkg::NewL(
            pkg->iPID,
            pkg->iColorSchemePID,
            pkg->iSkinDirectoryBuf,
            pkg->iSkinIniFileDirectoryBuf,
            pkg->iSkinNameBuf,
            pkg->iIdleStateWallPaperImageName,
            KNullDesC,
            pkg->iFullName,
            pkg->iIdleBgImageIndex,
            0,
            pkg->iIsDeletable,
            pkg->iIsCopyable,
            EFalse,
            pkg->iProtectionType,
            pkg->iCorrupted,
            pkg->iSupportAnimBg
            );
        CleanupStack::PushL(pack);
        array->AppendL(pack);
        CleanupStack::Pop(pack);
        }

    CleanupStack::PopAndDestroy( packages );
    CleanupStack::Pop( array );

    AKNS_TRACE_INFO1("RAknsSrvSession::EnumerateSkinPackagesL COMPLETED %i",
        array->Count() );

    return array;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::CreateChunkLookupL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsSrvChunkLookup* RAknsSrvSession::CreateChunkLookupL()
    {
    CAknsSrvChunkLookup* chunklookup = CAknsSrvChunkLookup::NewL();
    return chunklookup;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Version
// -----------------------------------------------------------------------------
//
TVersion RAknsSrvSession::Version() const
    {
    // client side version is set same as the server side version here, since
    // both are implemented in the same DLL
    return TVersion( KAknSkinSrvMajorVersionNumber,
        KAknSkinSrvMinorVersionNumber, KAknSkinSrvBuildVersionNumber );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::SetIdleWallPaper
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::SetIdleWallpaper( const TDesC& aFilename )
    {
    TInt freeRAM = 0;
    HAL::Get(HALData::EMemoryRAMFree, freeRAM);
    if ( freeRAM < KAknSkinSrvFreeRAMNeeded )
        {
        return KErrNoMemory;
        }

    return SendReceive( EAknSkinSrvSetIdleWallPaper,
        TIpcArgs( &aFilename, aFilename.Length() ) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::StoreScalableGraphics(const TAknsItemID& aIID,
    const TInt aType, const TSize& aLayoutSize, const CFbsBitmap* aBmp,
    const CFbsBitmap* aMask, TBool aMorphing)
    {
    TAknsSrvLayoutInfo layoutInfo;
    layoutInfo.iLayoutType = aType;
    layoutInfo.iLayoutSize = aLayoutSize;
    TPckgC<TAknsSrvLayoutInfo> layoutInfoPack( layoutInfo );

    TInt bmphandle = 0;
    TInt mskhandle = 0;

    if (aBmp)
        {
        bmphandle = aBmp->Handle();
        }
    else
        {
        return KErrArgument;
        }
    if (aMask)
        {
        mskhandle = aMask->Handle();
        }

    TPckgC<TAknsItemID> iidPack( aIID );
    if (aMorphing)
        {
        return SendReceive( EAknSkinSrvStoreMorphingScalableGfx, TIpcArgs(
        &iidPack, &layoutInfoPack, bmphandle, mskhandle));
        }
    else
        {
        return SendReceive( EAknSkinSrvStoreScalableGfx, TIpcArgs(
        &iidPack, &layoutInfoPack, bmphandle, mskhandle));
        }
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::ClearScalableGraphics
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::ClearScalableGraphics()
    {
    return SendReceive( EAknSkinSrvClearScalableGfx, TIpcArgs() );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::DeleteSkin
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::DeleteSkin(
    const TAknsPkgID /*aPID*/, TAknSkinSrvSkinPackageLocation /*aLocation*/ )
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::CopySkin
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::CopySkin(
    const TAknsPkgID /*aPID*/, TAknSkinSrvSkinPackageLocation /*aSourceLocation*/,
    TAknSkinSrvSkinPackageLocation /*aDestLocation*/)
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::OpenBitmapFile
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::OpenBitmapFile( const TDesC& aFilename, TInt &aFileHandle)
    {
    TPckgBuf<TInt> filehandlePack;
    TInt fileserverHandle = SendReceive(
        EAknSkinSrvOpenBitmapFile, TIpcArgs(&aFilename, &filehandlePack));
    aFileHandle = filehandlePack();
    return fileserverHandle;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::OpenInifile
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::OpenInifile(
    const TAknsPkgID aPID, TAknSkinSrvSkinPackageLocation aLocation,
    TInt& aFilehandle, TBool aWriteToFile)
    {
    TPckgC<TAknsPkgID> iidPack( aPID );
    TPckgBuf<TInt> filehandlePack;
    TInt fileserverHandle = SendReceive(
        EAknSkinSrvOpenIniFile, TIpcArgs(&iidPack, aLocation, &filehandlePack, aWriteToFile));
    aFilehandle = filehandlePack();
    return fileserverHandle;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::CopySoundFile
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::CopySoundFile(const TDesC& aSourceFilename, const TDesC& aTargetFilename)
  {
  return SendReceive(
    EAknSkinSrvCopySoundFile, TIpcArgs(&aSourceFilename, &aTargetFilename) );
  }

// -----------------------------------------------------------------------------
// RAknsSrvSession::DecodeWallpaperImageL
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::DecodeWallpaperImageL(
    const TDesC& aFilename, const TSize& aTargetSize, CFbsBitmap*& aBitmap, CFbsBitmap*& aMask)
    {
    TPckgBuf<TInt> bmphandlePack;
    TPckgBuf<TInt> mskhandlePack;
    TPckgC<TSize> sizePack(aTargetSize);
    User::LeaveIfError(
        SendReceive(
            EAknSkinSrvDecodeWallpaperImage,
            TIpcArgs(&aFilename, &sizePack, &bmphandlePack, &mskhandlePack)));
    if (aTargetSize == TSize(-1,-1))
        {
        // 0,0 is used to check if the image is corrupted
        return;
        }

    delete aBitmap;
    aBitmap = NULL;
    delete aMask;
    aMask = NULL;

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    bitmap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL(bitmap);
    User::LeaveIfError(bitmap->Duplicate(bmphandlePack()));
    if (mskhandlePack())
        {
        mask = new (ELeave) CFbsBitmap;
        CleanupStack::PushL(mask);
        User::LeaveIfError(mask->Duplicate(mskhandlePack()));
        CleanupStack::Pop(2);
        }
    else
        {
        CleanupStack::Pop( bitmap );
        }

    AknIconConfig::CompressIfPreferred( bitmap, mask );

    aBitmap = bitmap;
    aMask = mask;
    }


EXPORT_C void RAknsSrvSession::AddWallpaperL(const TDesC& aFilename, const TSize& aTargetSize )
    {
    TPckgC<TSize> sizePack(aTargetSize);
    User::LeaveIfError( SendReceive( EAknSkinSrvCacheWallpaperImage,
                TIpcArgs(&aFilename, &sizePack)));
    
    return;
    }

EXPORT_C CFbsBitmap* RAknsSrvSession::WallpaperImageL( const TDesC& aFilename )
    {
    TPckgBuf<TInt> bmphandlePack;
    TPckgBuf<TInt> mskhandlePack;
    CFbsBitmap* bitmap = NULL;
    
//    CWsScreenDevice* screenDevice = 
//            STATIC_CAST(CWsScreenDevice*, CCoeEnv::Static()->SystemGc().Device());   
//    CleanupStack::PushL( screenDevice );
//    User::LeaveIfError( screenDevice->Construct() );
//    TSize currentScreenSize = screenDevice->SizeInPixels();
//    TPckgC<TSize> sizePack( currentScreenSize );
//    
//    CleanupStack::PopAndDestroy( screenDevice );
    
    TRect screen;
    AknLayoutUtils::LayoutMetricsRect(
                            AknLayoutUtils::EScreen, screen );
    TPckgC<TSize> sizePack( screen.Size() );    
    
    User::LeaveIfError( SendReceive(EAknSkinSrvDecodeWallpaperImage,
            TIpcArgs(&aFilename, &sizePack, &bmphandlePack, &mskhandlePack))); 
    
    if ( bmphandlePack() )
        {
        bitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL(bitmap);
        User::LeaveIfError(bitmap->Duplicate(bmphandlePack()));
        CleanupStack::Pop( bitmap );
        }
    return bitmap;
    }
// -----------------------------------------------------------------------------
// RAknsSrvSession::OpenImageInifile
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::OpenImageInifile( TAknsSrvInifileType aType, TInt& aFilehandle )
    {
    TPckgBuf<TInt> filehandlePack;
    TInt fileserverHandle = SendReceive( EAknSkinSrvOpenImageInifile, TIpcArgs(&filehandlePack, aType));
    aFilehandle = filehandlePack();
    return fileserverHandle;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::DoWriteInifileL
// -----------------------------------------------------------------------------
//
void RAknsSrvSession::DoWriteInifileL(const CDesCArray& aFilenameArray)
    {
    TInt fileserverhandle;
    TInt filehandle;
    fileserverhandle = OpenImageInifile(EAknsSrvInifileSSWP, filehandle);
    RFile file;
    User::LeaveIfError(file.AdoptFromServer(fileserverhandle, filehandle));
    CleanupClosePushL(file);
    User::LeaveIfError(file.SetSize(0));
    TFileText textFile;
    textFile.Set(file);
    textFile.Seek(ESeekStart);

    for (TInt count = 0; count < aFilenameArray.Count() ; count++)
        {
        User::LeaveIfError(textFile.Write(aFilenameArray.MdcaPoint(count)));
        }

    file.Flush();
    CleanupStack::PopAndDestroy(); // file
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::SetSlideSetWallpaper
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::SetSlideSetWallpaper(const CDesCArray& aFilenameArray)
    {
    SendReceive(EAknSkinSrvStopSSIniFileObserver);
    TRAPD(error, DoWriteInifileL(aFilenameArray));
    if (error)
        {
        return error;
        }
    if (aFilenameArray.MdcaCount() == 1)
        {
        return KErrNone;
        }
    return SendReceive(EAknSkinSrvSetSlideSetWP);
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::FreeUnnecessaryLayoutBitmaps
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::FreeUnnecessaryLayoutBitmaps(TAknsSrcScreenMode aMode)
    {
    TInt type( aMode );
    SendReceive( EAknSkinSrvFreeLayoutBitmaps, TIpcArgs( type ) );
    }


EXPORT_C void RAknsSrvSession::RemoveWallpaper( const TDesC& aFilename )
    {
    SendReceive( EAknSkinSrvFreeDecodedWallpaper, TIpcArgs(&aFilename) );
    }

EXPORT_C void RAknsSrvSession::RemoveAllWallpapers(  )
    {
    SendReceive( EAknSkinSrvFreeDecodedWallpaper, TIpcArgs(&KNullDesC) );
    }

// -----------------------------------------------------------------------------
// Checks if the appUid has non-skinnable configuration icons.
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::CheckIconConfiguration( TUid aAppUid )
    {
    TPckgC<TUid> uidPack(aAppUid);
    return SendReceive( EAknSkinSrvCheckIconConfiguration, TIpcArgs( &uidPack ) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::AcknowledgeSkinChangeNotification
// -----------------------------------------------------------------------------
//
TInt RAknsSrvSession::AcknowledgeSkinChangeNotification()
    {
    TInt type( EAknsSCHNContentChanged );
    return SendReceive( EAknSkinSrvAckNotification, TIpcArgs( type ) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Reserved1
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::Reserved1()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Reserved2
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::Reserved2()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Reserved3
// -----------------------------------------------------------------------------
//
EXPORT_C TInt RAknsSrvSession::Reserved3()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Reserved4
// -----------------------------------------------------------------------------
//
EXPORT_C void RAknsSrvSession::Reserved4()
    {
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::SendCancel
// -----------------------------------------------------------------------------
//
void RAknsSrvSession::SendCancel()
    {
    SendReceive(EAknSkinSrvCancel, TIpcArgs( TIpcArgs::ENothing ) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::EventHandled
// -----------------------------------------------------------------------------
//
void RAknsSrvSession::EventHandled()
    {
    SendReceive(EAknSkinSrvNextEvent, TIpcArgs( TIpcArgs::ENothing),
        iMemberData->iHandler->iStatus);
    }

// End of File

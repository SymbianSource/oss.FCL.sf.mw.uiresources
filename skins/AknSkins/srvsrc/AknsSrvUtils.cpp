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
* Description:  Skin server utils class.
*
*/


// INCLUDE FILES
#include <f32file.h>
#include <bautils.h>

#include <e32math.h>
#include <DRMRights.h>

#include <DRMHelper.h>
#include <caf/cafplatform.h>
#include <caf/rightsinfo.h>

#include "AknsSrvUtils.h"
#include "AknsSrv.h"
#include "AknsSrvDescriptorFileLayout.h"
#include <AknsSkinUID.h>
#include "AknsDriveMaster.h"


#include "AknsDebug.h"

#include <centralrepository.h>
#include <AknSkinsInternalCRKeys.h>
#include <AknsConstants.h>

// Maximum lenght of uri.
const TInt KMaxContentUriLength = 256;

// Length of extension (including preceding dot).
const TInt KExtensionLength = 4;

// Mif-file extension
_LIT( KAknsSkinSrvMifFileExt, ".mif" );

const TInt KAknsDummySkinPkgID = 0x70000000;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsSrvUtils::CheckAHOverrideFlag
// -----------------------------------------------------------------------------
//
TBool AknsSrvUtils::CheckAHOverrideFlagL( CAknsSrvFileBuffer& aFile )
    {
    TUint8 ahflag = GetUInt8L( aFile, EAknsSrvDFOSkinSkinType );

    if ( (ahflag&2) !=0 )
        {
        return ETrue;
        }
    else
        {
        return EFalse;
        }
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::SearchSkinsL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::SearchSkinsL(
    RFs& aRfs, const TDesC& aBasePath, const TDesC& aDirName,
    CDesCArray* aSkinFiles )
    {
    SearchSkinsL( aRfs, aBasePath, aDirName, KSKNPostFix, aSkinFiles );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::SearchDirectoriesL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::SearchDirectoriesL(
    RFs& aRFs, const TDesC& aPath, CDesCArray* aSkinFiles )
    {
    SearchDirectoriesL( aRFs, aPath, KSKNPostFix, aSkinFiles );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetSkinPIDL
// -----------------------------------------------------------------------------
//
TAknsPkgID AknsSrvUtils::GetSkinPIDL(CAknsSrvFileBuffer& aFile)
    {
    TInt number = GetInt32L( aFile, EAknsSrvDFOSkinSkinPID1 );
    TInt timestamp = GetInt32L( aFile, EAknsSrvDFOSkinSkinPID2 );

    TAknsPkgID pid;
    pid.Set( timestamp, number );
    return pid;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::BuildSkinInfoPackagesL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::BuildSkinInfoPackagesL(
    CArrayPtr<TAknsSrvSkinInfoPkg>* aSkinInfo, CDesCArray* aSkinArray,
    RFs& aFileSession, CDRMHelper& aDrmHelper )
    {
    AKNS_TRACE_INFO("AknsSrvUtils::BuildSkinInfoPackagesL BEGIN" );
    TAknsSrvSkinInfoPkg* infopkg = NULL;

    // Read default skin PID.
    CRepository* repository = CRepository::NewLC( KCRUidPersonalisation );
    TInt value = 0;
    TBuf<32> buf;
    TAknsPkgID defaultSkin = KAknsNullPkgID;

    TInt err = repository->Get( KPslnDefaultSkinUID, buf );
    if ( err != KErrNone || buf.Length() < 8 )
        {
        err = repository->Get( KPslnDefaultSkinID, value );
        if( err == KErrNone )
            {
            defaultSkin.Set( TUid::Uid( value ) );
            }
        }
    else
        {
        TInt bufLength = buf.Length();
        // If its 8 characters long, its UID.
        // PIDs are 16 characters (8 ID + 8 timestamp)
        if ( bufLength == 8 )
            {
            // Let's try to set it directly as Hex.
            TLex hexLex( buf );
            TUint pid;
            err = hexLex.Val( pid, EHex );
            if (!err)
                {
                // UIDs have no timestamp.
                defaultSkin.Set( 0, pid );
                }
            }
        else
            {
            // The skin PID is set in CenRep in format <PID1><PID2> and
            // values are in hex.
            TLex lex ( buf.Left( 8 ) );
            TLex lex2 ( buf.Right( 8 ) );
            TUint pid;
            TUint timeStamp;
            err = lex.Val( pid, EHex );
            if ( !err )
                {
                err = lex2.Val( timeStamp, EHex );
                }
            if ( !err )
                {
                defaultSkin.Set( timeStamp, pid );
                }
            }        
        }
    CleanupStack::PopAndDestroy( repository );  

    for( TInt skincount=0; skincount<aSkinArray->Count(); skincount++ )
        {
        TRAPD( err2, (infopkg=BuildSkinInfoPackageL(
            aSkinArray->MdcaPoint(skincount), aDrmHelper, aFileSession ) ) );
        TBool fabricated = EFalse;

        if( err2 != KErrNone )
            {
            // Fabricate skin information, since the array must contain
            // items for broken skins as well (to ensure that they can
            // be deleted).
            TInt index = aSkinArray->MdcaPoint(skincount).LocateReverse('\\');
            TPtrC filedir;
            filedir.Set( aSkinArray->MdcaPoint(skincount).Left(index) );
            TPtrC filename;
            filename.Set( aSkinArray->MdcaPoint(skincount).Mid(index+1) );

            infopkg = new (ELeave) TAknsSrvSkinInfoPkg;
            infopkg->iPID = KAknsNullPkgID;
            infopkg->iColorSchemePID = KAknsPIDColorBlue;
            infopkg->iSkinDirectoryBuf = filedir;
            infopkg->iSkinIniFileDirectoryBuf = filedir;
            infopkg->iSkinNameBuf = filename;
            infopkg->iIdleStateWallPaperImageName = KNullDesC;
            infopkg->iFullName = KNullDesC;
            infopkg->iIsCopyable = EFalse;
            infopkg->iIsDeletable = ETrue;
            infopkg->iIdleBgImageIndex = 0;
            infopkg->iProtectionType = EAknsSrvNoProtection;
            infopkg->iCorrupted = ETrue;
            fabricated = ETrue;
            }
        CleanupStack::PushL( infopkg );

        TBool mifFile = EFalse;
        TBool alreadyFound = EFalse;

        if( infopkg )
            {
            if ( infopkg->iFullName.Length() > 0 )
                {
                SkinHasMifFileL( mifFile, aFileSession, infopkg->iFullName );
                }

            // If no mif-file, assume that skin is corrupted.
            if ( !mifFile )
                {
                infopkg->iCorrupted = ETrue;
                }

            for( TInt i=0; i<aSkinInfo->Count(); i++ )
                {
                if( aSkinInfo->At(i)->iPID == infopkg->iPID )
                    {
                    alreadyFound = ETrue;
                    break;
                    }
                }
            }

        if( infopkg && ((!alreadyFound) || fabricated) )
            {
            // Add all but default skin.
            if ( infopkg->iPID != KAknsPIDS60DefaultSkin )
                {
                aSkinInfo->AppendL(infopkg);
                CleanupStack::Pop( infopkg );
                }
            // If default skin ID has not been changed, show S60 default skin.
            else if ( defaultSkin == KAknsNullPkgID &&
                      infopkg->iPID == KAknsPIDS60DefaultSkin )
                {
                aSkinInfo->AppendL(infopkg);
                CleanupStack::Pop( infopkg );
                }
            else
                {
                CleanupStack::PopAndDestroy(); //infopkg
                }
            }
        else
            {
            CleanupStack::PopAndDestroy(); // infopkg
            }
        }
    AKNS_TRACE_INFO("AknsSrvUtils::BuildSkinInfoPackagesL END" );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::IsDrmProtectedL
// -----------------------------------------------------------------------------
//
TBool AknsSrvUtils::IsDrmProtectedL(const TDesC& aFilename)
    {
    TBool isProtected(EFalse);
    TInt value = KErrNone;

    CContent* content = CContent::NewLC( aFilename );
    User::LeaveIfError( content->GetAttribute( EIsProtected, value ) );
    if ( value )
        {
        isProtected = ETrue;
        }
    CleanupStack::PopAndDestroy( content );
    return isProtected;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::IsDrmProtectedL
// -----------------------------------------------------------------------------
//
TBool AknsSrvUtils::IsDrmProtectedL(RFile& aFileHandle)
    {
    TBool isProtected(EFalse);
    TInt value = KErrNone;

    CContent* content = CContent::NewLC( aFileHandle );
    User::LeaveIfError( content->GetAttribute( EIsProtected, value ) );
    if ( value )
        {
        isProtected = ETrue;
        }
    CleanupStack::PopAndDestroy( content );
    return isProtected;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::BuildSkinInfoPackageL
// -----------------------------------------------------------------------------
//
TAknsSrvSkinInfoPkg* AknsSrvUtils::BuildSkinInfoPackageL(
    const TDesC& aFilename, CDRMHelper& aDrmHelper, RFs& aFileSession )
    {
    TAknsSrvSkinInfoPkg* infopkg = NULL;
    TAknsSkinSrvSkinProtectionType protectionType = EAknsSrvNoProtection;
    TBool isProtected(EFalse);

    TChar driveLetter = aFilename[0];
    TInt driveNumber;
    User::LeaveIfError(aFileSession.CharToDrive(driveLetter, driveNumber));
    User::LeaveIfError(aFileSession.ShareProtected());

    TInt err = aFileSession.CreatePrivatePath(driveNumber);

    if (err!=KErrNone && err!=KErrAlreadyExists)
        {
        User::Leave(err);
        }

    User::LeaveIfError(aFileSession.SetSessionToPrivate(driveNumber));

    RFile file;
    User::LeaveIfError(file.Open(aFileSession,aFilename, EFileRead | EFileShareReadersOnly));
    CleanupClosePushL(file); // 1

    // Files on ROM are not DRM protected
    if (aFilename[0] != 'Z')
        {
        isProtected = IsDrmProtectedL(file);
        if (isProtected)
            {
            // If protection is indicated, by default set it on.
            protectionType = EAknsSrvProtected;

            TBool expired = EFalse;
            TBool sendAllowed = EFalse; //not needed
            CDRMHelperRightsConstraints* playDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* dispDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* execDrmHlpCons = NULL;
            CDRMHelperRightsConstraints* printDrmHlpCons = NULL;
            TRAPD( drmErr, aDrmHelper.GetRightsDetailsL(
                aFilename, ContentAccess::EView, expired, sendAllowed,
                playDrmHlpCons, dispDrmHlpCons, execDrmHlpCons, printDrmHlpCons ) );
            // DrmHelper leaves if the content is protected, but there are rights.
            
            if ( drmErr == KErrCANoRights )
                {
                protectionType = EAknsSrvNoRights;
                }
            else if ( drmErr == KErrArgument )
                {
                protectionType = EAknsSrvNoProtection;
                }
            // Delete not needed constraints.
            delete printDrmHlpCons;
            delete execDrmHlpCons;
            delete playDrmHlpCons;
            CleanupStack::PushL( dispDrmHlpCons );
            // Check expiration. If expired and no rights => expired.
            if ( expired && !dispDrmHlpCons )
                {
                protectionType = EAknsSrvExpiredRights;
                }
            // If expired, but there are rights => future rights.
            if ( expired && dispDrmHlpCons )
                {
                protectionType = EAknsSrvFutureRights;
                }
            if ( dispDrmHlpCons )
                {
                TUint32 counter = 0;
                TUint32 origCounter = 0;
                TRAP( drmErr, dispDrmHlpCons->GetCountersL( counter, origCounter ) );
                // No counters
                if ( drmErr == KErrNotFound )
                    {
                    protectionType = EAknsSrvProtected;
                    }
                else
                    {
                    protectionType = EAknsSrvCountBased;
                    }
                }
            CleanupStack::PopAndDestroy( dispDrmHlpCons );
            }
        else
            {
            protectionType = EAknsSrvNoProtection;
            }
        }
    CAknsSrvFileBuffer* fileBuf = NULL;
    if (!isProtected) // The file is not protected, open it normally
        {
        fileBuf = CAknsSrvFileBuffer::NewL( file );
        CleanupStack::PushL( fileBuf ); // 2
        }
    else // The file is protected, open it ignoring the rights..
        {
        TInt error = aDrmHelper.ConsumeFile2(
            file, EInstall, CDRMHelper::EStart );
        if ( error == KErrCANoRights ||
             protectionType == EAknsSrvNoRights ||
             protectionType == EAknsSrvExpiredRights )
            {
            // Rights object deleted, bake up something
            // sensible
            TInt index = aFilename.LocateReverse('\\');
            TPtrC filedir;
            filedir.Set( aFilename.Left(index) );
            TPtrC filename;
            filename.Set( aFilename.Mid(index+1) );
            infopkg = new (ELeave) TAknsSrvSkinInfoPkg;
            //Create a Random id for DRM Expired Skin
            TAknsPkgID dummyPID  = { KAknsDummySkinPkgID + (Math::Random()>>4), 0 };
            infopkg->iPID = dummyPID;
            infopkg->iColorSchemePID = KAknsPIDColorBlue;
            infopkg->iSkinDirectoryBuf = filedir;
            infopkg->iSkinIniFileDirectoryBuf = filedir;
            infopkg->iSkinNameBuf = filename;
            infopkg->iIdleStateWallPaperImageName = KNullDesC;
            infopkg->iFullName = aFilename;
            infopkg->iIsCopyable = EFalse;
            infopkg->iIsDeletable = ETrue;
            infopkg->iIdleBgImageIndex = 0;
            infopkg->iProtectionType = protectionType;
            infopkg->iCorrupted = EFalse;
            CleanupStack::PopAndDestroy( ); // file
            return infopkg;
            }
        else if ( error != KErrNone )
            {
            User::Leave(KErrCorrupt);
            }
        fileBuf = CAknsSrvFileBuffer::NewL( file);
        CleanupStack::PushL( fileBuf ); // 2
        }
    if( CheckAHOverrideFlagL( *fileBuf ) )
        {
        // Do not build package for A&H override skins
        CleanupStack::PopAndDestroy(2); //fileBuf, file
        return NULL;
        }

    TAknsPkgID pid;
    pid.Set( GetSkinPIDL( *fileBuf ) );

    TInt index = aFilename.LocateReverse('\\');
    TPtrC filedir;
    filedir.Set( aFilename.Left(index));

    TInt idlebmpindex(0);
    HBufC* idlewallpaperbmpname = KAknsSkinSrvEmptyString().AllocL();
    CleanupStack::PushL(idlewallpaperbmpname); // 3


    HBufC* name = AknsSrvUtils::GetSkinNameL( *fileBuf );
    CleanupStack::PushL(name); // 4

    infopkg = new (ELeave) TAknsSrvSkinInfoPkg;
    infopkg->iPID = pid;
    infopkg->iColorSchemePID = KAknsPIDColorBlue;
    infopkg->iSkinDirectoryBuf = filedir;
    infopkg->iSkinNameBuf = *name;
    infopkg->iIdleStateWallPaperImageName = *idlewallpaperbmpname;
    infopkg->iFullName = aFilename;
    infopkg->iIsCopyable = EFalse;
    infopkg->iIsDeletable = EFalse;
    infopkg->iIdleBgImageIndex = idlebmpindex;
    infopkg->iCorrupted = EFalse;
    infopkg->iSupportAnimBg = AnimBackgroundSupportL( *fileBuf );
    
    if ( filedir.LocateF('Z') == 0)
        {
        TPath inifiledir;
        inifiledir.Append(filedir);

        TPath defaultDrive;
        CAknsSrvDriveMaster::GetDefaultDrive( DriveInfo::EDefaultSystem, defaultDrive );
        inifiledir.Replace( 0, 3, defaultDrive );

        infopkg->iSkinIniFileDirectoryBuf = inifiledir;
        infopkg->iProtectionType = EAknsSrvNoProtection;
        }
    else
        {
        infopkg->iSkinIniFileDirectoryBuf = filedir;
        infopkg->iProtectionType = protectionType;
        }

    CleanupStack::PopAndDestroy( 2, idlewallpaperbmpname );
    if (isProtected)
        {
        aDrmHelper.ConsumeFile2(
           file, EInstall, CDRMHelper::EFinish );
        }
    CleanupStack::PopAndDestroy(2); // file, fileBuf
    return infopkg;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::AnimBackgroundSupportL
// -----------------------------------------------------------------------------
//
TBool AknsSrvUtils::AnimBackgroundSupportL(CAknsSrvFileBuffer& aFile)
    {
    TInt32 numberofchunks = GetInt32L( aFile, EAknsSrvDFOSkinChunksN );
    TInt32 chunksize = 0;
    TUint16 chunktype = 0;
    TInt totaloffset = EAknsSrvDFOSkinContent;
    for (TInt count = 0;count< numberofchunks;count++)
        {
        chunksize = GetInt32L( aFile, totaloffset+EAknsSrvDFOCommonLength );
        chunktype = GetUInt16L( aFile, totaloffset+EAknsSrvDFOCommonType );
        if( chunktype == EAknsSkinDescSkinDescClass )
            {
            TInt chunkoffset = totaloffset;
            TInt32 chunkcount = GetInt32L( aFile,chunkoffset+EAknsSrvDFOClassChunksN );
            
            chunkoffset += EAknsSrvDFOClassContent;
            for (TInt count = 0;count < chunkcount;count++)
                {
                TInt32 chunklen = GetInt32L( aFile,chunkoffset+EAknsSrvDFOCommonLength );
                TInt16 chunktype = GetUInt16L( aFile,chunkoffset+EAknsSrvDFOCommonType );
                if ( chunktype == EAknsSkinDescSkinDescStringItemDef )
                    {
                    TInt32 major = GetInt32L( aFile,chunkoffset+EAknsSrvDFOStringMajor );
                    TInt32 minor = GetInt32L( aFile,chunkoffset+EAknsSrvDFOStringMinor );
                    if ( major == EAknsMajorProperty && 
                            minor == EAknsMinorPropertyAnimBgParam  )
                        {
                        return ETrue;
                        }
                    }
                chunkoffset += chunklen;
                if( GetUInt8L( aFile, chunkoffset-1 ) != 0xf5 )
                    {
                    return EFalse;
                    }
                }   
            }
        totaloffset+=chunksize;
        if( AknsSrvUtils::GetUInt8L( aFile, totaloffset-1 ) != 0xf5 )
            {
            return EFalse;
            }        
        }
    return EFalse;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetSkinFileNameL
// -----------------------------------------------------------------------------
//
HBufC* AknsSrvUtils::GetSkinFileNameL(
    const TDesC& aPath, const TAknsPkgID aPID, RFs& aFileSession )
    {
    AKNS_TRACE_INFO("CAknsSrvUtils::GetSkinFilename ENTERED");
    HBufC* filename = NULL;

    CDesC16ArrayFlat* skinfiles = new (ELeave) CDesC16ArrayFlat(5);
    CleanupStack::PushL(skinfiles);

    TPath skindir;
    skindir.AppendNumFixedWidthUC( aPID.iNumber, EHex, 8 );
    if( !aPID.IsUid() )
        {
        skindir.AppendNumFixedWidthUC( aPID.iTimestamp, EHex, 8 );
        }

    // No leave here, since path may be missing on some drives
    TRAPD( err, SearchSkinsL(aFileSession, aPath, skindir, skinfiles ) );
    if( err )
        {
        AKNS_TRACE_ERROR1("CAknsSrvUtils::GetSkinFilename SearchSkinsL FAILED %d", err);
        CleanupStack::PopAndDestroy( skinfiles );
        return NULL;
        }

    if (skinfiles->Count() > 0)
        {
        // pickup the first file
        filename = (skinfiles->MdcaPoint(0)).AllocL();
        }
    CleanupStack::Pop( skinfiles );
    skinfiles->Reset();
    delete skinfiles;   
    return filename;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::ReadSkinDescL
// -----------------------------------------------------------------------------
//
TUint8* AknsSrvUtils::ReadSkinDescL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset, const TUint aCount )
    {
    TUint8* buff = new (ELeave) TUint8[aCount];
    CleanupStack::PushL( buff );
    for( TUint i=0; i<aCount; i++ )
        {
        buff[i] = GetUInt8L( aFile, aOffset+i );
        }
    CleanupStack::Pop( buff );
    return buff;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetInt32L
// -----------------------------------------------------------------------------
//
TInt32 AknsSrvUtils::GetInt32L(CAknsSrvFileBuffer& aFile, const TUint aOffset)
    {
    return aFile.GetInt32L( aOffset );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetUInt16L
// -----------------------------------------------------------------------------
//
TUint16 AknsSrvUtils::GetUInt16L(CAknsSrvFileBuffer& aFile, const TUint aOffset)
    {
    return aFile.GetUint16L( aOffset );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetInt16L
// -----------------------------------------------------------------------------
//
TInt16 AknsSrvUtils::GetInt16L(CAknsSrvFileBuffer& aFile, const TUint aOffset)
    {
    return aFile.GetInt16L( aOffset );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetUInt8L
// -----------------------------------------------------------------------------
//
TUint8 AknsSrvUtils::GetUInt8L(CAknsSrvFileBuffer& aFile, const TUint aOffset)
    {
    return aFile.GetUint8L( aOffset );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetSkinNameL
// -----------------------------------------------------------------------------
//
HBufC* AknsSrvUtils::GetSkinNameL(CAknsSrvFileBuffer& aFile)
    {
    TInt32 numberofchunks =
        GetInt32L( aFile, EAknsSrvDFOSkinChunksN );
    TInt32 chunksize = 0;
    TInt offset = EAknsSrvDFOSkinContent;
    TUint16 chunktype = 0;
    TUint16 language = 0;
    HBufC* name = NULL;

    TLanguage bestfound = ELangOther; // Currently the best match
    TLanguage phonelang = User::Language();
    for (TInt count = 0;count< numberofchunks;count++)
        {
        chunksize = GetInt32L( aFile, offset+EAknsSrvDFOCommonLength );
        chunktype = GetUInt16L( aFile, offset+EAknsSrvDFOCommonType );
        if( chunktype == EAknsSkinDescName )
            {
            language = GetUInt16L( aFile, offset+EAknsSrvDFONameLanguage );
            if ( (bestfound == ELangOther) ||
                (language == ELangEnglish) ||
                (language == phonelang) )
                {
                if (name)
                    {
                    CleanupStack::Pop(name);
                    delete name;
                    }
                TUint16 namelen = GetUInt16L(
                    aFile, offset+EAknsSrvDFONameNameLen );
                TUint8* namebuf = ReadSkinDescL(
                    aFile, offset+EAknsSrvDFONameName, 2*namelen );
                TBuf<128> buf;
                // We only want 128 leftmost characters from the skin name
                // and the rest is discarded...
                if( namelen>127 )
                    {
                    namelen = 127;
                    }
                buf.Append( reinterpret_cast<TUint16*>(namebuf), namelen );
                buf.ZeroTerminate();
                delete [] namebuf;
                name = buf.AllocL();
                CleanupStack::PushL(name);
                bestfound = static_cast<TLanguage>(language);
                if (bestfound == phonelang)
                    {
                    break; // Found the correct language, break here...
                    }
                }
            }
        offset+=chunksize;
        if( AknsSrvUtils::GetUInt8L( aFile, offset-1 ) != 0xf5 )
            {
            AKNS_TRACE_ERROR("AknsSrvUtils::GetSkinNameL CORRUPTED FILE!");
            User::Leave( KErrCorrupt );
            }
        }
    if (name)
        {
        CleanupStack::Pop(name);
        }
    return name;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::IsFile
// -----------------------------------------------------------------------------
//
TBool AknsSrvUtils::IsFile( RFs& aFileSession, const TDesC& aFilename )
    {
    TBool result = EFalse;
    {
    TUint attValue;
    if( aFileSession.Att( aFilename, attValue ) == KErrNone )
        {
        result = ETrue;
        }
    }
    return result;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::SearchSkinsL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::SearchSkinsL(
    RFs& aRfs, const TDesC& aBasePath, const TDesC& aDirName,
    const TDesC& aExtension, CDesCArray* aSkinFiles )
    {
    CDir* dir = NULL;
    TPath path;
    path.Append(aBasePath);
    path.Append(aDirName);
    path.Append( aExtension );

    TFileName filename;
    User::LeaveIfError(
        aRfs.GetDir( path, KEntryAttMaskSupported, ESortByName, dir) );

    CleanupStack::PushL( dir );

    TInt filecount = dir->Count();
    AKNS_TRACE_INFO1("AknsSrvUtils::SearchSkinsL filecount = %d", filecount );

    for (TInt file = 0;file<filecount;file++)
        {
        filename.Copy(aBasePath);
        filename.Append(aDirName);
        filename.Append('\\');
        filename.Append((*dir)[file].iName);

        aSkinFiles->AppendL(filename);
        }
    AKNS_TRACE_INFO1("AknsSrvUtils::SearchSkinsL skinFiles = %d", aSkinFiles->Count() );
    CleanupStack::PopAndDestroy( dir );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::SearchDirectoriesL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::SearchDirectoriesL(
    RFs& aRfs, const TDesC& aPath, const TDesC& aExtension, CDesCArray* aSkinFiles )
    {
    // First read the directory containing skins
    TInt dircount;
    CDir* dir;

    // We don't want to leave here, the path to be searched might not be
    // present on all drives....
    TInt err = aRfs.GetDir( aPath,
        KEntryAttMatchExclusive |KEntryAttMatchMask |KEntryAttDir,
        ESortByName,dir );
    if (err)
        {
        return;
        }

    CleanupStack::PushL(dir);

    dircount = dir->Count();

    for (TInt direntry = 0;direntry<dircount;direntry++)
        {
        SearchSkinsL(aRfs, aPath, (*dir)[direntry].iName, aExtension, aSkinFiles);
        }
    CleanupStack::PopAndDestroy( dir );
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetSkinFileNameL
// -----------------------------------------------------------------------------
//
HBufC* AknsSrvUtils::GetSkinFileNameL(
            CAknsSrvDriveMaster& aDriveMaster,
            const TAknsPkgID aPID,
            RFs& aFileSession,
            CAknsSrvDriveMaster::TAknsSrvSkinDriveList aDriveType )
    {
    HBufC* skinFileName = NULL;
    TFileName path;
    TInt driveCount = aDriveMaster.GetNumberOfDrives( aDriveType );
    TInt index = 0;
    for ( ; index < driveCount; index++ )
        {
        aDriveMaster.SkinDirectoryOnDrive(
            aDriveType, index, path );
        skinFileName = GetSkinFileNameL( path, aPID, aFileSession );
        if ( skinFileName )
            {
            // break the loop when first matching skin file found.
            index = driveCount;
            }
        }
    return skinFileName;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetContentUriFromFileL
// -----------------------------------------------------------------------------
//
HBufC8* AknsSrvUtils::GetContentUriFromFileL( const TDesC& aFilename )
    {
    HBufC8* contenturi = NULL;
    CContent* content = CContent::NewLC( aFilename );

    HBufC* contentUri = HBufC::NewLC( KMaxContentUriLength );
    TPtr tempPtr = contentUri->Des();
    // "EContentID" has the "content uri" we want. Not "EContentURI".
    TInt err = content->GetStringAttribute( ContentAccess::EContentID, tempPtr );
    if ( !err )
        {
        // Convert to 8-bit string
        contenturi = HBufC8::NewL( contentUri->Length() );
        contenturi->Des().Copy( *contentUri );
        }
    CleanupStack::PopAndDestroy( 2, content ); // content, contentUri
    return contenturi;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::GetProtectionTypeL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::GetProtectionTypeL(
    const TDesC& aFilename,
    TAknsSkinSrvSkinProtectionType& aProtectionType )
    {
    CContent* content = CContent::NewLC( aFilename );
    TInt value = KErrNone;

    User::LeaveIfError( content->GetAttribute( ERightsNone, value ) );
    if ( value )
        {
        aProtectionType = EAknsSrvNoRights;
        CleanupStack::PopAndDestroy( content );
        return;
        }
    User::LeaveIfError( content->GetAttribute( ERightsHaveExpired, value ) );
    if ( value )
        {
        aProtectionType = EAknsSrvExpiredRights;
        CleanupStack::PopAndDestroy( content );
        return;
        }
    User::LeaveIfError( content->GetAttribute( ECanView, value ) );
    if ( value )
        {
        aProtectionType = EAknsSrvProtected;
        CleanupStack::PopAndDestroy( content );
        return;
        }
    CleanupStack::PopAndDestroy( content );
    AKNS_TRACE_INFO1("AknsSrvUtils::GetProtectionTypeL - aProtectionType = %d", aProtectionType);
    return;
    }

// -----------------------------------------------------------------------------
// AknsSrvUtils::SkinHasMifFileL
// -----------------------------------------------------------------------------
//
void AknsSrvUtils::SkinHasMifFileL( TBool& aHasMifFile,
    RFs& aFileSession, const TDesC& aFilename )
    {
    aHasMifFile = ETrue;
    _LIT( KAknsStaticPath, "\\resource\\skins" );
    TBool parseError = EFalse;

    // No need to make checks for ROM skins.
    if ( aFilename[0] == 'Z' )
        {
        return;
        }

    HBufC* fileNameBuffer = HBufC::NewL( KMaxFileName );
    TParsePtrC fileName( aFilename );
    TPtr bufferPtr = fileNameBuffer->Des();

    // First append drive and static path.
    if ( fileName.DrivePresent() )
        {
        bufferPtr.Append( fileName.Drive() );
        }
    else
        {
        delete fileNameBuffer;
        aHasMifFile = EFalse;
        return;
        }

    // Append resource path
    if ( !parseError )
        {
        bufferPtr.Append( KAknsStaticPath );
        }

    if ( fileName.PathPresent() && !parseError )
        {
        // Take path without the trailing backslash.
        TPtrC path = fileName.Path().Left( fileName.Path().Length() - 1 );

        // Locate last backslash.
        TChar backslash('\\');
        TInt bsLoc = path.LocateReverse( backslash );

        // Append skin PID to the directory.
        bufferPtr.Append( fileName.Path().Mid( bsLoc ) );

        if ( fileName.ExtPresent() )
            {
            // Last, append filename. Now string is complete.
            bufferPtr.Append( fileName.NameAndExt() );

            // switch the extension and check for file existance.
            bufferPtr.Replace(
                bufferPtr.Length() - KExtensionLength,
                KExtensionLength,
                KAknsSkinSrvMifFileExt );
            if ( !BaflUtils::FileExists( aFileSession, bufferPtr ) )
                {
                // Finally, check if this could be old skin - check if
                // .mif file is in the same directory.
                bufferPtr.Zero();
                bufferPtr.Append( fileName.FullName() );
                bufferPtr.Replace(
                    bufferPtr.Length() - KExtensionLength,
                    KExtensionLength,
                    KAknsSkinSrvMifFileExt );
                if ( !BaflUtils::FileExists( aFileSession, bufferPtr ) )
                    {
                    // There is no matching .mif-file => leave.
                    delete fileNameBuffer;
                    aHasMifFile = EFalse;
                    return;
                    }
                }

            // switch back the graphics file extension.
            bufferPtr.Replace(
                bufferPtr.Length() - KExtensionLength,
                KExtensionLength,
                fileName.Ext() );
            }
        else
            {
            delete fileNameBuffer;
            aHasMifFile = EFalse;
            return;
            }
        }
    else
        {
        delete fileNameBuffer;
        aHasMifFile = EFalse;
        return;
        }
    delete fileNameBuffer;
    }

//  End of File

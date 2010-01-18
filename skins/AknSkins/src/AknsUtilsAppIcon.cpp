/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Extension to AknsUtils.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <apgcli.h>
#include <AknIconUtils.h>

#include <avkon.mbg>

#include <AknsUtils.h>
#include "AknsJavaUtils.h"

#include <AknsItemData.h>
#include "AknsAppSkinInstance.h"
#include <AknsImageAttributeData.h>
#include "AknsDebug.h"

#include "AknInternalIconUtils.h"
// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsUtils::CreateAppIconLC
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::CreateAppIconLC)
EXPORT_C void AknsUtils::CreateAppIconLC(
    MAknsSkinInstance* aInstance, TUid aAppUid,
    TAknsAppIconType aType,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask )
    {
    aBitmap = NULL;
    aMask = NULL;

    if (!aInstance)
        {
        User::Leave(KErrArgument);
        }

    TSize legacySize( 42, 29 );
    TInt bitmapIndex( 0 );
    TInt maskIndex( 1 );
    if( aType == EAknsAppIconTypeContext )
        {
        legacySize = TSize( 44, 44 );
        bitmapIndex = 2;
        maskIndex = 3;
        }
    else if( aType != EAknsAppIconTypeList )
        {
        User::Leave( KErrArgument );
        }

    // Make the forthcoming pushes safe (up to level 2)
    CleanupStack::PushL( static_cast<TAny*>(NULL) );
    CleanupStack::PushL( static_cast<TAny*>(NULL) );
    CleanupStack::Pop( 2 );

    // 1. Check if the icon has been configured.
    TInt ret = KErrNone;
    TBool configuredIcon = EFalse;
    //
    CAknsAppSkinInstance* apskin = static_cast<CAknsAppSkinInstance*>(aInstance);
    if ( apskin )
        {
        TInt config = apskin->IsIconConfiguredL( aAppUid );
        if ( config > 0 )
        configuredIcon = ETrue;
        }

    if ( !configuredIcon )
        {
        // 2. Skin-originating icon
        ret = GetAppIconFromSkin( aInstance, aAppUid, legacySize, aBitmap, aMask );
        if( ret == KErrNone )
            {
            // These pushes are safe
            CleanupStack::PushL( aBitmap ); // (1)
            CleanupStack::PushL( aMask ); // (2)
            return;
            }
        }
    // Cache connected apparc session for future reuse, if not already cached
    // This is done per appskininstance when necessary...
    if (!apskin->iCachedApaSession)
        {
        apskin->iCachedApaSession = new (ELeave) RApaLsSession;
        User::LeaveIfError(apskin->iCachedApaSession->Connect());
        }

    RApaLsSession* lsSession = apskin->iCachedApaSession;

    TBool forceDefaultIcon = EFalse;

    TApaAppInfo appInfo;
    TFileName filename;
    // 3. New appicon framework
    HBufC* filenameBuf = NULL;
    TBool javaIcon = EFalse;
    ret = lsSession->GetAppIcon( aAppUid, filenameBuf );
    if( filenameBuf )
        {
        filename.Copy( *filenameBuf );
        delete filenameBuf;
        }
    if( ret == KErrNone )
        {
        ret = lsSession->GetAppInfo( appInfo, aAppUid );
        }
    if( (ret==KErrNone) && (filename.Length()>2) &&
        (appInfo.iFullName.Length()>2) )
        {
        // Correct drive letter, if necessary
        if( appInfo.iFullName[1]==':' )
            {
            if( filename[1]==':' )
                {
                filename[0] = appInfo.iFullName[0];
                }
            else if( filename[0]=='\\' )
                {
                filename.Insert( 0, appInfo.iFullName.Left(2) );
                }
            }

        // check if the icon is java icon
        javaIcon = AknsJavaUtils::IsJavaIcon(filename);

        if( AknIconUtils::IsMifFile( filename ) )
            {
            // SVG icon
            // SVG always has only one icon
            bitmapIndex = 0;
            maskIndex = 1;
            AknIconUtils::ValidateLogicalAppIconId( filename,
                bitmapIndex, maskIndex );

            if (javaIcon)
                {
                AknsJavaUtils::CreateIconLC(*lsSession, aAppUid, aBitmap,
                    aMask, bitmapIndex, maskIndex ); // aBitmap, aMask (2)
                }
            else
                {
                AknIconUtils::CreateIconLC( aBitmap, aMask, filename,
                    bitmapIndex, maskIndex ); // aBitmap, aMask (2)
                }
            AknInternalIconUtils::SetAppIcon(aBitmap); //icon case
            return;
            }
        else
            {
            // MBM icon
            AknIconUtils::ValidateLogicalAppIconId( filename,
                bitmapIndex, maskIndex );
            TRAP( ret, AknIconUtils::CreateIconL( aBitmap, aMask, filename,
                bitmapIndex, maskIndex ) );
            if( ret == KErrNone )
                {
                // These pushes are safe
                CleanupStack::PushL( aBitmap ); // (1)
                CleanupStack::PushL( aMask ); // (2)
                }
            else
                {
                bitmapIndex = 0;
                maskIndex = 1;
                AknIconUtils::ValidateLogicalAppIconId( filename,
                    bitmapIndex, maskIndex );
                AknIconUtils::CreateIconLC( aBitmap, aMask, filename,
                    bitmapIndex, maskIndex ); // aBitmap, aMask (2)
                }
            AknInternalIconUtils::SetAppIcon(aBitmap); //icon case
            return;
            }
        }
    else if( ret!=KErrNotSupported )
        {
        // New framework, but no icon defined
        forceDefaultIcon = ETrue;
        }

    CApaMaskedBitmap* apaBmp = CApaMaskedBitmap::NewLC(); // apaBmp (1)
    // 3. Old (AIF-based) framework
    if( !forceDefaultIcon )
        {
        TInt apaErr = lsSession->GetAppIcon( aAppUid, legacySize, *apaBmp );
        // Use default icon if APPARC did not initialize icon bitmaps
        if( apaErr || (!apaBmp) || (!apaBmp->Mask()) ||
            (!apaBmp->Handle()) || (!apaBmp->Mask()->Handle()) )
            {
            forceDefaultIcon = ETrue;
            }
        }

    if( forceDefaultIcon )
        {
        // Default icon
        CleanupStack::PopAndDestroy( 1 ); // apaBmp (0)
        TAknsItemID iid = KAknsIIDQgnMenuUnknownLst;
        bitmapIndex = EMbmAvkonQgn_menu_unknown_lst;
        maskIndex = EMbmAvkonQgn_menu_unknown_lst_mask;
        if( aType == EAknsAppIconTypeContext )
            {
            iid = KAknsIIDQgnMenuUnknownCxt;
            bitmapIndex = EMbmAvkonQgn_menu_unknown_cxt;
            maskIndex = EMbmAvkonQgn_menu_unknown_cxt_mask;
            }
        AknsUtils::CreateIconLC( aInstance, iid, aBitmap, aMask,
            AknIconUtils::AvkonIconFileName(), bitmapIndex, maskIndex ); // aBitmap, aMask (2)
        }
    else
        {
        // AIF-based icon
        CFbsBitmap* iconOwnedBitmap = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( iconOwnedBitmap ); // iob (3)
        CFbsBitmap* iconOwnedMask = new (ELeave) CFbsBitmap();
        CleanupStack::PushL( iconOwnedMask ); // iom (4)
        User::LeaveIfError(
            iconOwnedBitmap->Duplicate( apaBmp->Handle() ) );
        User::LeaveIfError(
            iconOwnedMask->Duplicate( apaBmp->Mask()->Handle() ) );

        CAknIcon* tmpIcon = CAknIcon::NewL();
        CleanupStack::Pop( 2 ); // iom, iob (2)
        CleanupStack::PopAndDestroy( 1 ); // apaBmp (0)

        // Ownership is transferred
        tmpIcon->SetBitmap( iconOwnedBitmap );
        tmpIcon->SetMask( iconOwnedMask );
        // Ownership of tmpIcon is transferred
        CAknIcon* appIcon = AknIconUtils::CreateIconL( tmpIcon );

        aBitmap = appIcon->Bitmap();
        aMask = appIcon->Mask();
        // Detach and delete
        appIcon->SetBitmap( NULL );
        appIcon->SetMask( NULL );
        delete appIcon;

        // These are both safe
        CleanupStack::PushL( aBitmap ); // (1)
        CleanupStack::PushL( aMask ); // (2)
        }
    }

// -----------------------------------------------------------------------------
// AknsUtils::OpenAppIconFile
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::OpenAppIconFile)
EXPORT_C TInt AknsUtils::OpenAppIconFile(
    MAknsSkinInstance* /*aInstance*/, TUid /*aAppUid*/,
    TAknsAppIconType aType, RFile& /*aFile*/ )
    {
    if( aType != EAknsAppIconType3D )
        {
        return KErrArgument;
        }

    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// AknsUtils::GetAppIcon
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(AknsUtils::GetAppIcon)
EXPORT_C TInt AknsUtils::GetAppIcon(
    MAknsSkinInstance* aInstance, TUid aAppUid, TSize aSize,
    CApaMaskedBitmap& aAppBitmap )
    {
    AKNS_TRACE_OBSOLETE("AknsUtils::GetAppIcon (4 param)");

    __ASSERT_DEBUG( aAppBitmap.Mask(),
        AKNS_DEBUG_PANIC( EAknsDPanicInvalidParameter ) );

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    TInt ret = KErrNone;
    TBool configuredIcon = EFalse;

    if ( !configuredIcon )
        {
        ret = GetAppIconFromSkin( aInstance, aAppUid, aSize, bitmap, mask );
        if( ret == KErrNone )
            {
            if( bitmap && mask && bitmap->Handle() && mask->Handle() )
                {
                ret = aAppBitmap.Duplicate( bitmap->Handle() );
                ret |= aAppBitmap.Mask()->Duplicate( mask->Handle() );
                delete bitmap;
                delete mask;
                return ret;
                }
            else
                {
                // Delete bitmaps and proceed
                delete bitmap;
                bitmap = NULL; 
                delete mask;
                mask = NULL; 
                }
            }
        }

    RApaLsSession lsSession;
    ret = lsSession.Connect();
    if( ret == KErrNone )
        {
        ret = lsSession.GetAppIcon( aAppUid, aSize, aAppBitmap );
        lsSession.Close();
        if(ret == KErrNone) //icon case
        	AknInternalIconUtils::SetAppIcon(bitmap); //icon case
        }

    return ret;
    } //lint !e1746 GetAppIcon syntax

// -----------------------------------------------------------------------------
// AknsUtils::GetAppIconFromSkin
// -----------------------------------------------------------------------------
//
TInt AknsUtils::GetAppIconFromSkin(
    MAknsSkinInstance* aInstance, TUid aAppUid, TSize aSize,
    CFbsBitmap*& aBitmap, CFbsBitmap*& aMask )
    {
    if( !aInstance )
        {
        return KErrNotSupported;
        }

    TAknsItemID iid;
    iid.Set( EAknsMajorAppIcon, aAppUid.iUid );

    TInt err( KErrNone );
    TAknsItemID iconIID;
    TRAP( err, ( iconIID = SelectBestAppIconBitmapL(
        aSize, aInstance, iid ) ) );
    if( err )
        {
        return err;
        }

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    TRAPD( createErr,
        CreateIconL( aInstance, iconIID, bitmap, mask, KNullDesC, -1, -1 ) ); //lint !e645 Initialized

    if( createErr )
        {
        delete bitmap;
        delete mask;
        return createErr;
        }

    __ASSERT_DEBUG( bitmap && mask,
        AKNS_DEBUG_PANIC( EAknsDPanicNotInitialized ) );

	AknInternalIconUtils::SetAppIcon(aBitmap); //icon case
    aBitmap = bitmap;
    aMask = mask;

    return KErrNone;
    } //lint !e1746 GetAppIcon syntax

// -----------------------------------------------------------------------------
// AknsUtils::SelectBestAppIconBitmapL
// -----------------------------------------------------------------------------
//
TAknsItemID AknsUtils::SelectBestAppIconBitmapL(
    const TSize& aSize,
    MAknsSkinInstance* aSkin,
    const TAknsItemID& aAppIconIID )
    {
    TAknsItemID iid;
    iid.Set( KAknsIIDNone );
    TInt i;

    CAknsImageTableItemData* iconData = static_cast<CAknsImageTableItemData*>(
        aSkin->CreateUncachedItemDataL( aAppIconIID, EAknsITImageTable ) );
    if( !iconData )
        {
        User::Leave( KErrNotFound );
        }

    CleanupStack::PushL( iconData );

    TInt numberOfIcons = iconData->NumberOfImages();
    RArray<TSize> sizeArray;
    for( i=0; i<numberOfIcons; i++ )
        {
        TBool defOwned = EFalse;
        CAknsImageItemDef* def =
            static_cast<CAknsImageItemDef*>(
            static_cast<CAknsAppSkinInstance*>(aSkin)->LookupDef(
            defOwned, iconData->ImageIID(i), EAknsITImage ) );

        TBool appendError = EFalse;

        if( def && def->Attributes() )
            {
            TSize imageSize = def->Attributes()->iSize;
            if( sizeArray.Append( imageSize ) != KErrNone )
                {
                appendError = ETrue;
                }
            }
        else
            {
            appendError = ETrue;
            }

        if( defOwned )
            {
            delete def;
            def = NULL;
            }

        if( appendError )
            {
            sizeArray.Reset();
            User::Leave( KErrGeneral );
            }
        }

    CleanupStack::Pop( iconData );

    // First check for zero size (SVG) or the exact match
    TInt indexFound = -1;
    for( i=0; i<numberOfIcons; i++ )
        {
        if( (sizeArray[i].iWidth==aSize.iWidth) &&
            (sizeArray[i].iHeight==aSize.iHeight) )
            {
            AKNS_TRACE_INFO2("AknsUtils::SBAIB Found (exact) MBM appicon for %x %x", aAppIconIID.iMinor, aAppIconIID.iMajor );
            indexFound = i;
            // Do not break, (0,0) might still be there
            }
        else if( (sizeArray[i].iWidth==0) &&
            (sizeArray[i].iHeight==0) )
            {
            AKNS_TRACE_INFO2("AknsUtils::SBAIB Using SVG appicon for %x %x", aAppIconIID.iMinor, aAppIconIID.iMajor );
            indexFound = i;
            break;
            }
        }

    if( indexFound>-1 )
        {
        iid.Set( iconData->ImageIID( indexFound ) );
        sizeArray.Reset();
        delete iconData;
        return iid;
        }

    // Then the largest of smaller or (in terms of one dimension) equal icons
    TInt bestDSum = 0;
    TInt dSum;
    for( i=0; i<numberOfIcons; i++ )
        {
        if( (sizeArray[i].iWidth<=aSize.iWidth) &&
            (sizeArray[i].iHeight<=aSize.iHeight) )
            {
            dSum = sizeArray[i].iWidth + sizeArray[i].iHeight;
            if( dSum > bestDSum )
                {
                indexFound = i;
                bestDSum = dSum;
                }
            }
        }

    if( indexFound>-1 )
        {
        iid.Set( iconData->ImageIID( indexFound ) );
        sizeArray.Reset();
        delete iconData;
        return iid;
        }

    // Finally, the smallest absolute difference
    bestDSum = KMaxTInt;
    for( i=0; i<numberOfIcons; i++ )
        {
        dSum = ( sizeArray[i].iWidth * sizeArray[i].iHeight ) -
            (aSize.iWidth*aSize.iHeight);
        if( dSum < 0 )
            {
            dSum = 0-dSum;
            }
        if( dSum < bestDSum )
            {
            indexFound = i;
            bestDSum = dSum;
            }
        }

    if( indexFound>-1 )
        {
        iid.Set( iconData->ImageIID( indexFound ) );
        }

    sizeArray.Reset();
    delete iconData;

    if( indexFound<0 )
        {
        User::Leave( KErrNotFound );
        }

    return iid;
    }

//  End of File

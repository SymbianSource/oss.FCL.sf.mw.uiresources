/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Test AknsUtils.h
*
*/


#include <aknsutils.h>
#include <eikdialg.h>
#include <avkon.mbg>
#include <aknsitemid.h>
#include <aknsitemdef.h>

#include "testsdkskins.h"
#include "testsdkskinscontrol.h"

const TInt KLength = 10;
_LIT( KMapfile, "z:\\resource\\apps\\avkon2.mbm" );

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUInitSkinSupportL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUInitSkinSupportL( CStifItemParser& /*aItem*/ )
    {
    AknsUtils::InitSkinSupportL();
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateDataContextForContainerL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateDataContextForContainerL( CStifItemParser& /*aItem*/ )
    {
    MAknsDataContext* context = AknsUtils::CreateDataContextForContainerL();
    STIF_ASSERT_NOT_NULL( context );
    
    delete context;
    context = NULL;
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateBitmapItemDefL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateBitmapItemDefL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    CAknsItemDef* def = AknsUtils::CreateBitmapItemDefL( itemID, KMapfile, 0 );
    CleanupStack::PushL( def );
    STIF_ASSERT_NOT_NULL( def );
    
    CleanupStack::PopAndDestroy( def );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateMaskedBitmapItemDefL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateMaskedBitmapItemDefL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    CAknsItemDef* def = AknsUtils::CreateMaskedBitmapItemDefL( itemID, KMapfile, 1, 2 );
    CleanupStack::PushL( def );
    STIF_ASSERT_NOT_NULL( def );
    
    CleanupStack::PopAndDestroy( def );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUSkinInstanceL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUSkinInstanceL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    STIF_ASSERT_NOT_NULL( instance );
    
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUDataContextL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUDataContextL( CStifItemParser& /*aItem*/ )
    {
    CEikDialog* dialog = new (ELeave) CEikDialog;
    CleanupStack::PushL( dialog );
    STIF_ASSERT_NOT_NULL( dialog );
    
    MAknsDataContext* context = AknsUtils::DataContext( dialog );
    STIF_ASSERT_NOT_NULL( context );
    
    CleanupStack::PopAndDestroy( dialog );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateIconML
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateIconML( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    AknsUtils::CreateIconL( instance, itemID, bitMap, bitMapMask, KMapfile, 
                            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    CleanupStack::PushL( bitMap );
    CleanupStack::PushL( bitMapMask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );
    
    CleanupStack::Pop( bitMapMask );
    CleanupStack::Pop( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateIconMLC
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateIconMLC( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    AknsUtils::CreateIconLC( instance, itemID, bitMap, bitMapMask, KMapfile, 
                            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );
    
    CleanupStack::Pop( bitMapMask );
    CleanupStack::Pop( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateIconL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateIconL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    CFbsBitmap* bitMap = NULL;
    
    AknsUtils::CreateIconL( instance, itemID, bitMap, KMapfile, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( bitMap );
    
    STIF_ASSERT_NOT_NULL( bitMap );

    CleanupStack::Pop( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateIconLC
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateIconLC( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    CFbsBitmap* bitMap = NULL;
    
    AknsUtils::CreateIconLC( instance, itemID, bitMap, KMapfile, EMbmAvkonQgn_indi_mic );
    
    STIF_ASSERT_NOT_NULL( bitMap );

    CleanupStack::Pop( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateMaskedBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateMaskedBitmapL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    
    CApaMaskedBitmap* bitMap = AknsUtils::CreateMaskedBitmapL( instance, itemID, KMapfile, 1, 2 );
    CleanupStack::PushL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMap );

    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateGulIconL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateGulIconL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    
    CGulIcon* guiIcon = AknsUtils::CreateGulIconL( instance, itemID, KMapfile, 1, 2 );
    CleanupStack::PushL( guiIcon );
    STIF_ASSERT_NOT_NULL( guiIcon );

    CleanupStack::PopAndDestroy( guiIcon );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateAppIconLC
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateAppIconLC( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TUid uid = TUid::Uid( 0x2001CB80 );
    AknsUtils::CreateAppIconLC( instance, uid, EAknsAppIconTypeContext, bitMap, bitMapMask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUOpenAppIconFileL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUOpenAppIconFileL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    _LIT( KAppIconFile, "C:\\appicon.txt" );
    RFs rfs;
    CleanupClosePushL( rfs );
    User::LeaveIfError( rfs.Connect() );
    RFile file;
    CleanupClosePushL( file );
    file.Replace( rfs, KAppIconFile, EFileWrite );
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TUid uid = TUid::Uid( 0x2001CB80 );
    AknsUtils::CreateAppIconLC( instance, uid, EAknsAppIconTypeContext, bitMap, bitMapMask );
    
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::PopAndDestroy( bitMapMask );

    AknsUtils* util = NULL;
    
    TInt flag = util->OpenAppIconFile( instance, uid, EAknsAppIconType3D, file );
    STIF_ASSERT_TRUE( KErrNotSupported == flag );
    
    CleanupStack::PopAndDestroy( &file );
    CleanupStack::PopAndDestroy( &rfs );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateColorIconL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateColorIconL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    TAknsItemID colorID;
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TRgb rgb = 0x00020408;
    
    AknsUtils::CreateColorIconL( instance, itemID, colorID, 0, bitMap, bitMapMask, KMapfile, 1, 2, rgb );
    CleanupStack::PushL( bitMap );
    CleanupStack::PushL( bitMapMask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateColorIconLC
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateColorIconLC( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    TAknsItemID colorID;
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TRgb rgb = 0x00020408;
    
    AknsUtils::CreateColorIconLC( instance, itemID, colorID, 0, bitMap, 
                                  bitMapMask, KMapfile, 1, 2, rgb );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateColorIconML
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateColorIconML( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    TAknsItemID colorID;
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TRgb rgb = 0x00020408;
    
    TSize size( KLength, KLength );
    
    AknsUtils::CreateColorIconL( instance, itemID, colorID, 0, bitMap, bitMapMask, 
                                 KMapfile, 1, 2, rgb, size, EAspectRatioPreserved );
    CleanupStack::PushL( bitMap );
    CleanupStack::PushL( bitMapMask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateColorIconMLC
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateColorIconMLC( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    TAknsItemID itemID;
    TAknsItemID colorID;
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    TRgb rgb = 0x00020408;
    
    TSize size( KLength, KLength );
    
    AknsUtils::CreateColorIconLC( instance, itemID, colorID, 0, bitMap, bitMapMask, 
                                  KMapfile, 1, 2, rgb, size, EAspectRatioPreserved );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUGetAppIconL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUGetAppIconL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CApaMaskedBitmap* bitMapMask = CApaMaskedBitmap::NewLC();
    STIF_ASSERT_NOT_NULL( bitMapMask );
    
    TUid uid = TUid::Uid( 0x2001CB80 );
    TSize size( KLength, KLength );
    
    TInt flag = AknsUtils::GetAppIcon( instance, uid, size, *bitMapMask );
    
    CleanupStack::PopAndDestroy( bitMapMask );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateBitmapL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CFbsBitmap* bitMap = AknsUtils::CreateBitmapL( instance, KAknsIIDQsnCpScrollBgTop );
    CleanupStack::PushL( bitMap );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    
    CleanupStack::PopAndDestroy( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateMaskedBitmapIL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateMaskedBitmapIL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    TRAP_IGNORE( AknsUtils::CreateMaskedBitmapL( instance, KAknsIIDQsnCpScrollBgTop ) );
    
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUCreateGulIconIL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUCreateGulIconIL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CGulIcon* icon = AknsUtils::CreateGulIconL( instance, KAknsIIDQsnCpScrollBgTop, EFalse );
    CleanupStack::PushL( icon );
    STIF_ASSERT_NOT_NULL( icon );

    CleanupStack::PopAndDestroy( icon );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUGetCachedBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUGetCachedBitmapL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CFbsBitmap* bitMap = AknsUtils::GetCachedBitmap( instance, KAknsIIDQsnCpScrollBgTop );

    STIF_ASSERT_NOT_NULL( bitMap );

    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUGetCachedMaskedBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUGetCachedMaskedBitmapL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );
    
    CFbsBitmap* bitMap = NULL;
    CFbsBitmap* bitMapMask = NULL;
    
    AknsUtils::GetCachedMaskedBitmap( instance, KAknsIIDQsnCpScrollBgTop, bitMap, bitMapMask );
    CleanupStack::PushL( bitMap );
    CleanupStack::PushL( bitMapMask );
    
    STIF_ASSERT_NOT_NULL( bitMap );
    STIF_ASSERT_NOT_NULL( bitMapMask );

    CleanupStack::Pop( bitMapMask );
    CleanupStack::Pop( bitMap );
    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUGetCachedColorL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUGetCachedColorL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );

    TRgb rgb;
    
    TInt flag = AknsUtils::GetCachedColor( instance, rgb, KAknsIIDQsnComponentColors, 1 );
    STIF_ASSERT_TRUE( KErrNone == flag );

    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUBooleanPropertyL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUBooleanPropertyL( CStifItemParser& /*aItem*/ )
    {
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    CleanupStack::PushL( instance );

    TRAPD( err, AknsUtils::BooleanPropertyL( instance, KAknsIIDPropertyMessageHeaderLines ) );
    STIF_ASSERT_TRUE( err == KErrNotFound );

    CleanupStack::Pop( instance );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUSetAvkonSkinEnabledL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUSetAvkonSkinEnabledL( CStifItemParser& /*aItem*/ )
    {
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    TBool skin = AknsUtils::AvkonSkinEnabled();
    STIF_ASSERT_TRUE( skin );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUAvkonSkinEnabledL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUAvkonSkinEnabledL( CStifItemParser& aItem )
    {
    return TestUSetAvkonSkinEnabledL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUSetAvkonHighlightAnimationEnabledL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUSetAvkonHighlightAnimationEnabledL( CStifItemParser& /*aItem*/ )
    {
    AknsUtils::SetAvkonHighlightAnimationEnabledL( ETrue );
    TBool skin = AknsUtils::AvkonHighlightAnimationEnabled();
    STIF_ASSERT_TRUE( skin );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUAvkonHighlightAnimationEnabledL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUAvkonHighlightAnimationEnabledL( CStifItemParser& aItem )
    {
    return TestUSetAvkonHighlightAnimationEnabledL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestURegisterControlPositionL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestURegisterControlPositionL( CStifItemParser& /*aItem*/ )
    {
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    AknsUtils::RegisterControlPosition( control );
    AknsUtils::DeregisterControlPosition( control );
    
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestURegisterControlPositionPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestURegisterControlPositionPL( CStifItemParser& /*aItem*/ )
    {
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    TPoint point( KLength, KLength );
    TPoint pointGet;
    
    AknsUtils::RegisterControlPosition( control, point );
    TInt flag = AknsUtils::GetControlPosition( control, pointGet );
    STIF_ASSERT_TRUE( flag == KErrNone );
    STIF_ASSERT_TRUE( point == pointGet );
    AknsUtils::DeregisterControlPosition( control );
    
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUDeregisterControlPositionL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUDeregisterControlPositionL( CStifItemParser& aItem )
    {
    return TestURegisterControlPositionL( aItem );
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestUGetControlPositionL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestUGetControlPositionL( CStifItemParser& aItem )
    {
    return TestURegisterControlPositionPL( aItem );
    
    }



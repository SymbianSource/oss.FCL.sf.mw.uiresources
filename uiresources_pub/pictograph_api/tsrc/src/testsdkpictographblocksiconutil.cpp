/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



#include <stifparser.h>
#include <akniconutils.h>
#include <avkon.mbg>
#include <aknsutils.h>

#include "testsdkpictograph.h"
#include "akniconutilsext.h"

// CONSTANTS
const TInt KIconWidth = 32;
const TInt KIconHeight = 32;
const TInt KAngle = 30;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestDimenDefCons
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestDimenDefCons( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestDimenDefCons, "In IconUtils DimenDefCons" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestDimenDefCons );
    // Print to log file
    iLog->Log( KTestDimenDefCons );

    TAknContentDimensions dimen;

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestDimenConstruct
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestDimenConstruct( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestDimenConstruct, "In IconUtils DimenConstruct" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestDimenConstruct );
    // Print to log file
    iLog->Log( KTestDimenConstruct );

    TAknContentDimensions dimen( KIconWidth, KIconHeight );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestDimenSetDimen
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestDimenSetDimen( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestDimenSetDimen, "In IconUtils DimenSetDimen" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestDimenSetDimen );
    // Print to log file
    iLog->Log( KTestDimenSetDimen );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    TAknContentDimensions dimen;
    switch( num )
    {
    case 1:
        dimen.SetDimensions( KIconWidth, KIconHeight );
        break;
    case 2:
        TSize iconSize( KIconWidth, KIconHeight );
        dimen.SetDimensions( iconSize );
        break;
    }

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIconNewL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIconNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIconNewL, "In IconUtils IconNewL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIconNewL );
    // Print to log file
    iLog->Log( KTestIconNewL );

    CAknIcon* icon = CAknIcon::NewL();
    CleanupStack::PushL( icon );
    STIF_ASSERT_NOT_NULL( icon );

    CleanupStack::PopAndDestroy( icon );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIconBitmapL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIconBitmapL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIconBitmap, "In IconUtils IconBitmap" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIconBitmap );
    // Print to log file
    iLog->Log( KTestIconBitmap );

    CAknIcon* icon = CAknIcon::NewL();
    CleanupStack::PushL( icon );
    CFbsBitmap* bitmap = icon->Bitmap();
    STIF_ASSERT_NULL( bitmap );

    CleanupStack::PopAndDestroy( icon );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIconMaskL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIconMaskL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIconMask, "In IconUtils IconMask" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIconMask );
    // Print to log file
    iLog->Log( KTestIconMask );

    CAknIcon* icon = CAknIcon::NewL();
    CleanupStack::PushL( icon );
    CFbsBitmap* mask = icon->Mask();
    STIF_ASSERT_NULL( mask );

    CleanupStack::PopAndDestroy( icon );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIconSetBitmapL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIconSetBitmapL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIconSetBitmap, "In IconUtils IconSetBitmap" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIconSetBitmap );
    // Print to log file
    iLog->Log( KTestIconSetBitmap );

    CAknIcon* icon = CAknIcon::NewL();
    CleanupStack::PushL( icon );

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( bitmap, mask, AknIconUtils::AvkonIconFileName(),
            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( mask );
    icon->SetBitmap( bitmap );

    CleanupStack::PopAndDestroy( mask );
    CleanupStack::Pop( bitmap );
    CleanupStack::PopAndDestroy( icon );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIconSetMaskL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIconSetMaskL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIconSetMask, "In IconUtils IconSetMask" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIconSetMask );
    // Print to log file
    iLog->Log( KTestIconSetMask );

    CAknIcon* icon = CAknIcon::NewL();
    CleanupStack::PushL( icon );

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( bitmap, mask, AknIconUtils::AvkonIconFileName(),
            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( mask );
    icon->SetMask( mask );

    CleanupStack::Pop( mask );
    CleanupStack::PopAndDestroy( bitmap );
    CleanupStack::PopAndDestroy( icon );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithMaskL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithMaskL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( bitmap, mask, AknIconUtils::AvkonIconFileName(),
            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    delete mask;
    delete bitmap;

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithBmpIdL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithBmpIdL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );

    CFbsBitmap* fbsBitmap =  AknIconUtils::CreateIconL(
            AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    STIF_ASSERT_NOT_NULL( fbsBitmap );
    CleanupStack::PopAndDestroy( fbsBitmap );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithProMaskL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithProMaskL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );


    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    CTestIconProvider* provider = new ( ELeave ) CTestIconProvider;
    CleanupStack::PushL( provider );

    AknIconUtils::CreateIconL( bitmap, mask, *provider,
            EMbmAvkonQgn_graf_tab_21, EMbmAvkonQgn_graf_tab_21_mask );

    delete mask;
    delete bitmap;
    CleanupStack::PopAndDestroy( provider );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithProviderL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithProviderL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );

    CTestIconProvider* provider = new ( ELeave ) CTestIconProvider;
    CleanupStack::PushL( provider );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL( *provider,
            EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    STIF_ASSERT_NOT_NULL( fbsBitmap );
    CleanupStack::PopAndDestroy( fbsBitmap );

    CleanupStack::PopAndDestroy( provider );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithSoIconL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithSoIconL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );

    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    TAknsItemID itemID;
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknsUtils::CreateIconL( instance, itemID, bitmap, mask, 
            AknIconUtils::AvkonIconFileName(), 1, 2 );
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( mask );

    CAknIcon* sourceIcon = CAknIcon::NewL();
    CleanupStack::PushL( sourceIcon );
    sourceIcon->SetBitmap( bitmap );
    sourceIcon->SetMask( mask );

    CAknIcon* icon = AknIconUtils::CreateIconL( sourceIcon );
    CleanupStack::PushL( icon );
    STIF_ASSERT_NOT_NULL( icon );

    CleanupStack::Pop( icon );
    CleanupStack::PopAndDestroy( sourceIcon );
    CleanupStack::Pop( mask );
    CleanupStack::Pop( bitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconWithSoBmpL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconWithSoBmpL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconL, "In IconUtils IconUtilCreateIconL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconL );
    // Print to log file
    iLog->Log( KTestUtilCreateIconL );

    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    TAknsItemID itemID;
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknsUtils::CreateIconL( instance, itemID, bitmap, mask, 
            AknIconUtils::AvkonIconFileName(), 1, 2 );
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( mask );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL ( bitmap );
    CleanupStack::PushL( fbsBitmap );
    STIF_ASSERT_NOT_NULL( fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    CleanupStack::PopAndDestroy( mask );
    CleanupStack::Pop( bitmap );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilCreateIconLCL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilCreateIconLCL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilCreateIconLC, "In IconUtils IconUtilCreateIconLC" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilCreateIconLC );
    // Print to log file
    iLog->Log( KTestUtilCreateIconLC );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    CTestIconProvider* provider = new ( ELeave ) CTestIconProvider;
    CleanupStack::PushL( provider );

    switch( num )
        {
        case 1:
            AknIconUtils::CreateIconLC( bitmap, mask, AknIconUtils::AvkonIconFileName(),
                    EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
            break;
        case 2:
            AknIconUtils::CreateIconLC( bitmap, mask, *provider,
                    EMbmAvkonQgn_graf_tab_21, EMbmAvkonQgn_graf_tab_21_mask );
            break;
        }

    CleanupStack::PopAndDestroy( mask );
    CleanupStack::PopAndDestroy( bitmap );
    CleanupStack::PopAndDestroy( provider );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilPreserveIconDataL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilPreserveIconDataL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilPreserveIconData, "In IconUtils IconUtilPreserveIconData" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilPreserveIconData );
    // Print to log file
    iLog->Log( KTestUtilPreserveIconData );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    AknIconUtils::PreserveIconData( fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilDestroyIconDataL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilDestroyIconDataL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilDestroyIconData, "In IconUtils IconUtilDestroyIconData" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilDestroyIconData );
    // Print to log file
    iLog->Log( KTestUtilDestroyIconData );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    AknIconUtils::DestroyIconData( fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilSetSizeL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilSetSizeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilSetSize, "In IconUtils IconUtilSetSize" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilSetSize );
    // Print to log file
    iLog->Log( KTestUtilSetSize );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    TSize size( KIconWidth, KIconHeight );
    TInt err = AknIconUtils::SetSize( fbsBitmap, size );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilSetSizeAndRotationL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilSetSizeAndRotationL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilSetSizeAndRotation, "In IconUtils IconUtilSetSizeAndRotation" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilSetSizeAndRotation );
    // Print to log file
    iLog->Log( KTestUtilSetSizeAndRotation );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    TSize size( KIconWidth, KIconHeight );
    TInt err = AknIconUtils::SetSizeAndRotation( fbsBitmap, size,
            EAspectRatioPreserved, KAngle );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilSetObserverL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilSetObserverL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilSetObserver, "In IconUtils IconUtilSetObserver" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilSetObserver );
    // Print to log file
    iLog->Log( KTestUtilSetObserver );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    CTestIconObserver* observer = new ( ELeave ) CTestIconObserver;
    CleanupStack::PushL( observer );
    AknIconUtils::SetObserver( fbsBitmap, observer );

    CleanupStack::PopAndDestroy( observer );
    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilAvkonIconFileName
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilAvkonIconFileName( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilAvkonIconFileName, "In IconUtils IconUtilAvkonIconFileName" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilAvkonIconFileName );
    // Print to log file
    iLog->Log( KTestUtilAvkonIconFileName );

    TDesC fileName = AknIconUtils::AvkonIconFileName();
    STIF_ASSERT_NOT_EQUALS( 0, fileName.Length() );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilValidateLogicalAppIconId
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilValidateLogicalAppIconId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilValidateLogicalAppIconId, "In IconUtils IconUtilValidateLogicalAppIconId" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilValidateLogicalAppIconId );
    // Print to log file
    iLog->Log( KTestUtilValidateLogicalAppIconId );

    TDesC fileName = AknIconUtils::AvkonIconFileName();
    TInt bitmapId = EMbmAvkonQgn_graf_tab_21;
    TInt maskId = EMbmAvkonQgn_graf_tab_21_mask;
    AknIconUtils::ValidateLogicalAppIconId( fileName, bitmapId, maskId );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilIsMifFile
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilIsMifFile( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilIsMifFile, "In IconUtils IconUtilIsMifFile" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilIsMifFile );
    // Print to log file
    iLog->Log( KTestUtilIsMifFile );

    TDesC fileName = AknIconUtils::AvkonIconFileName();
    TBool mifFile = AknIconUtils::IsMifFile( fileName );
    STIF_ASSERT_FALSE( mifFile );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilIsMifIconL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilIsMifIconL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilIsMifIcon, "In IconUtils IconUtilIsMifIcon" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilIsMifIcon );
    // Print to log file
    iLog->Log( KTestUtilIsMifIcon );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    TBool mifIcon = AknIconUtils::IsMifIcon( fbsBitmap );
    STIF_ASSERT_FALSE( mifIcon );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilGetContentDimensionsL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilGetContentDimensionsL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilGetContentDimensions, "In IconUtils IconUtilGetContentDimensions" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilGetContentDimensions );
    // Print to log file
    iLog->Log( KTestUtilGetContentDimensions );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    TSize size( KIconWidth, KIconHeight );
    TAknContentDimensions dimen( KIconWidth, KIconHeight );

    switch( num )
        {
        case 1:
            err = AknIconUtils::GetContentDimensions( fbsBitmap, size );
            break;
        case 2:
            err = AknIconUtils::GetContentDimensions( fbsBitmap, dimen );
            break;
        default:
            CleanupStack::PopAndDestroy( fbsBitmap );
            return KErrNotSupported;
        }

    CleanupStack::PopAndDestroy( fbsBitmap );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilSetIconColorL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilSetIconColorL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilSetIconColor, "In IconUtils IconUtilSetIconColor" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilSetIconColor );
    // Print to log file
    iLog->Log( KTestUtilSetIconColor );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    AknIconUtils::SetIconColor( fbsBitmap, KRgbYellow );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilExcludeFromCacheL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilExcludeFromCacheL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilExcludeFromCache, "In IconUtils IconUtilExcludeFromCache" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilExcludeFromCache );
    // Print to log file
    iLog->Log( KTestUtilExcludeFromCache );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    AknIconUtils::ExcludeFromCache( fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilDisableCompressionL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilDisableCompressionL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilDisableCompression, "In IconUtils IconUtilDisableCompression" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilDisableCompression );
    // Print to log file
    iLog->Log( KTestUtilDisableCompression );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    AknIconUtils::DisableCompression( fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestUtilScaleBitmapL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestUtilScaleBitmapL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestUtilScaleBitmapL, "In IconUtils IconUtilScaleBitmapL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestUtilScaleBitmapL );
    // Print to log file
    iLog->Log( KTestUtilScaleBitmapL );

    CFbsBitmap* fbsBitmap = AknIconUtils::CreateIconL(
        AknIconUtils::AvkonIconFileName(), EMbmAvkonQgn_graf_tab_21 );
    CleanupStack::PushL( fbsBitmap );
    TRect rect( 0, 0, KIconWidth, KIconHeight );
    AknIconUtils::ScaleBitmapL( rect, fbsBitmap, fbsBitmap );

    CleanupStack::PopAndDestroy( fbsBitmap );
    return KErrNone;

    }


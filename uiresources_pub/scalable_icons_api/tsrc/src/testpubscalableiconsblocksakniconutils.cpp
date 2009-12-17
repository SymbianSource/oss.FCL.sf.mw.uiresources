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
* Description:  scalable_icons_api
*
*/

// [INCLUDE FILES]
#include <akniconutils.h>
#include <aknutils.h>
#include <avkon.mbg>
#include <aknssrvclient.h>
#include <f32file.h>

#include "testpubscalableicons.h"
#include "testpubscalableiconsmifprovider.h"

// ============================ MEMBER FUNCTIONS =========================
const TReal32 KWidth = 17;
const TReal32 KHeight = 16;

_LIT( KMbmFile, "z:\\resource\\apps\\avkon2.mbm" );
_LIT( KMifFile, "z:\\resource\\apps\\avkon2.mif" );

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions1L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions1L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktesttakncontentdimensionstakncontentdimensions1l, "In TestTAknContentDimensionsTAknContentDimensions1L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktesttakncontentdimensionstakncontentdimensions1l);
    iLog->Log(Ktesttakncontentdimensionstakncontentdimensions1l);

    TAknContentDimensions* temp = new ( ELeave ) TAknContentDimensions;
    CleanupStack::PushL( temp );

    STIF_ASSERT_NOT_NULL( temp );
    
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions2L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions2L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktesttakncontentdimensionstakncontentdimensions2l, "In TestTAknContentDimensionsTAknContentDimensions2L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktesttakncontentdimensionstakncontentdimensions2l);
    iLog->Log(Ktesttakncontentdimensionstakncontentdimensions2l);

    TAknContentDimensions* temp = new ( ELeave ) TAknContentDimensions( KWidth, KHeight );
    CleanupStack::PushL( temp );

    STIF_ASSERT_NOT_NULL( temp );
    
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions1L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions1L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktesttakncontentdimensionssetdimensions1l, "In TestTAknContentDimensionsSetDimensions1L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktesttakncontentdimensionssetdimensions1l);
    iLog->Log(Ktesttakncontentdimensionssetdimensions1l);

    TAknContentDimensions* temp = new ( ELeave ) TAknContentDimensions;
    CleanupStack::PushL( temp );

    temp->SetDimensions( KWidth, KHeight );
    
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions2L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions2L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktesttakncontentdimensionssetdimensions2l, "In TestTAknContentDimensionsSetDimensions2L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktesttakncontentdimensionssetdimensions2l);
    iLog->Log(Ktesttakncontentdimensionssetdimensions2l);

    TAknContentDimensions* temp = new ( ELeave ) TAknContentDimensions;
    CleanupStack::PushL( temp );

    TSize aDimensions( KWidth, KHeight );

    temp->SetDimensions( aDimensions );
    
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestCAknIconNewL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestCAknIconNewL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestcakniconnewl, "In TestCAknIconNewL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestcakniconnewl);
    iLog->Log(Ktestcakniconnewl);

    CAknIcon* temp = CAknIcon::NewL();
    CleanupStack::PushL( temp );
    
    STIF_ASSERT_NOT_NULL( temp );
    
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestCAknIconBitmapL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestCAknIconBitmapL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestcakniconbitmapl, "In TestCAknIconBitmapL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestcakniconbitmapl);
    iLog->Log(Ktestcakniconbitmapl);

    CAknIcon* temp = CAknIcon::NewL();
    CleanupStack::PushL( temp );

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );
    
    temp->SetBitmap( aSrcBitmap );
    
    CFbsBitmap* bitmap = temp->Bitmap();
    
    STIF_ASSERT_SAME( aSrcBitmap, bitmap );
    
    CleanupStack::Pop( aSrcBitmap );
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestCAknIconMaskL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestCAknIconMaskL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestcakniconmaskl, "In TestCAknIconMaskL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestcakniconmaskl);
    iLog->Log(Ktestcakniconmaskl);

    CAknIcon* temp = CAknIcon::NewL();
    CleanupStack::PushL( temp );
    
    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* main = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( main, mask, file, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );

    CleanupStack::PushL( mask );
    
    temp->SetMask( mask );

    CFbsBitmap* tempMask = temp->Mask();
    
    STIF_ASSERT_SAME( mask, tempMask );

    CleanupStack::Pop( mask );
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestCAknIconSetBitmapL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestCAknIconSetBitmapL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestcakniconsetbitmapl, "In TestCAknIconSetBitmapL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestcakniconsetbitmapl);
    iLog->Log(Ktestcakniconsetbitmapl);

    CAknIcon* temp = CAknIcon::NewL();
    CleanupStack::PushL( temp );

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );
    
    temp->SetBitmap( aSrcBitmap );
    
    CFbsBitmap* bitmap = temp->Bitmap();
    
    STIF_ASSERT_SAME( aSrcBitmap, bitmap );
    
    CleanupStack::Pop( aSrcBitmap );
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestCAknIconSetMaskL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestCAknIconSetMaskL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestcakniconsetmaskl, "In TestCAknIconSetMaskL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestcakniconsetmaskl);
    iLog->Log(Ktestcakniconsetmaskl);

    CAknIcon* temp = CAknIcon::NewL();
    CleanupStack::PushL( temp );
    
    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* main = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( main, mask, file, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );

    CleanupStack::PushL( mask );
    
    temp->SetMask( mask );

    CFbsBitmap* tempMask = temp->Mask();
    
    STIF_ASSERT_SAME( mask, tempMask );

    CleanupStack::Pop( mask );
    CleanupStack::PopAndDestroy( temp );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL1L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL1L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl1l, "In TestAknIconUtilsCreateIconL1L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl1l);
    iLog->Log(Ktestakniconutilscreateiconl1l);

    TFileName file( KMbmFile );
    CFbsBitmap* aBitmap;
    CFbsBitmap* aMask;

    AknIconUtils::CreateIconL( aBitmap, aMask, file, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    
    CleanupStack::PushL( aBitmap );
    CleanupStack::PushL( aMask );
    
    STIF_ASSERT_NOT_NULL( aBitmap);
    STIF_ASSERT_NOT_NULL( aMask );

    CleanupStack::PopAndDestroy( aMask );
    CleanupStack::PopAndDestroy( aBitmap );
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconLC1L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconLC1L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconlc1l, "In TestAknIconUtilsCreateIconLC1L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconlc1l);
    iLog->Log(Ktestakniconutilscreateiconlc1l);

    TFileName file( KMbmFile );
    CFbsBitmap* aBitmap;
    CFbsBitmap* aMask;

    AknIconUtils::CreateIconLC( aBitmap, aMask, file, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    
    STIF_ASSERT_NOT_NULL( aBitmap);
    STIF_ASSERT_NOT_NULL( aMask );

    CleanupStack::PopAndDestroy( aMask );
    CleanupStack::PopAndDestroy( aBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL2L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL2L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl2l, "In TestAknIconUtilsCreateIconL2L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl2l);
    iLog->Log(Ktestakniconutilscreateiconl2l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    STIF_ASSERT_NOT_NULL( aSrcBitmap );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL3L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL3L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl3l, "In TestAknIconUtilsCreateIconL3L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl3l);
    iLog->Log(Ktestakniconutilscreateiconl3l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap;
    CFbsBitmap* aMask;

    AknIconUtils::CreateIconL( aBitmap, aMask, *aFileProvider, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    
    CleanupStack::PushL( aBitmap );
    CleanupStack::PushL( aMask );
    
    STIF_ASSERT_NOT_NULL( aBitmap);
    STIF_ASSERT_NOT_NULL( aMask );
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy( aMask );
    CleanupStack::PopAndDestroy( aBitmap );
    CleanupStack::Pop( aFileProvider );
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconLC2L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconLC2L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconlc2l, "In TestAknIconUtilsCreateIconLC2L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconlc2l);
    iLog->Log(Ktestakniconutilscreateiconlc2l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap;
    CFbsBitmap* aMask;

    AknIconUtils::CreateIconLC( aBitmap, aMask, *aFileProvider, EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    
    STIF_ASSERT_NOT_NULL( aBitmap);
    STIF_ASSERT_NOT_NULL( aMask );
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL4L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL4L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl4l, "In TestAknIconUtilsCreateIconL4L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl4l);
    iLog->Log(Ktestakniconutilscreateiconl4l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap = AknIconUtils::CreateIconL( *aFileProvider, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( aBitmap );
    
    STIF_ASSERT_NOT_NULL( aBitmap);
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsPreserveIconDataL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsPreserveIconDataL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilspreserveicondatal, "In TestAknIconUtilsPreserveIconDataL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilspreserveicondatal);
    iLog->Log(Ktestakniconutilspreserveicondatal);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap = AknIconUtils::CreateIconL( *aFileProvider, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( aBitmap );
    
    AknIconUtils::PreserveIconData( aBitmap);
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsDestroyIconDataL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsDestroyIconDataL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsdestroyicondatal, "In TestAknIconUtilsDestroyIconDataL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsdestroyicondatal);
    iLog->Log(Ktestakniconutilsdestroyicondatal);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap = AknIconUtils::CreateIconL( *aFileProvider, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( aBitmap );
    
    AknIconUtils::PreserveIconData( aBitmap);
    AknIconUtils::DestroyIconData( aBitmap );
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsSetSizeL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsSetSizeL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilssetsizel, "In TestAknIconUtilsSetSizeL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilssetsizel);
    iLog->Log(Ktestakniconutilssetsizel);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = 
            CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap = AknIconUtils::CreateIconL( *aFileProvider, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( aBitmap );
    
    TSize aSize( KWidth, KHeight );

    AknIconUtils::SetSize( aBitmap, aSize, EAspectRatioPreserved );
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsSetSizeAndRotationL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsSetSizeAndRotationL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilssetsizeandrotationl, "In TestAknIconUtilsSetSizeAndRotationL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilssetsizeandrotationl);
    iLog->Log(Ktestakniconutilssetsizeandrotationl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    
    RAknsSrvSession skinsSession; 
    User::LeaveIfError( skinsSession.Connect() );
 
    CleanupClosePushL( skinsSession );

    CTestPubScalableIconsMifProvider* aFileProvider = CTestPubScalableIconsMifProvider::NewL( &skinsSession, file );
    
    CleanupStack::PushL( aFileProvider );
    
    CFbsBitmap* aBitmap = AknIconUtils::CreateIconL( *aFileProvider, EMbmAvkonQgn_indi_mic );
    CleanupStack::PushL( aBitmap );
    
    TSize aSize( KWidth, KHeight );
    TInt aAngle = 0;

    AknIconUtils::SetSizeAndRotation( aBitmap, aSize, EAspectRatioPreserved, aAngle );
    
    skinsSession.Close();
    CleanupStack::PopAndDestroy();
    CleanupStack::Pop();
    CleanupStack::PopAndDestroy();
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsSetObserverL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsSetObserverL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilssetobserverl, "In TestAknIconUtilsSetObserverL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilssetobserverl);
    iLog->Log(Ktestakniconutilssetobserverl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );
    CAknIconObserver* aObserver = new( ELeave ) CAknIconObserver;

    AknIconUtils::SetObserver( aSrcBitmap, aObserver );
    
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsAvkonIconFileNameL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsAvkonIconFileNameL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsavkoniconfilenamel, "In TestAknIconUtilsAvkonIconFileNameL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsavkoniconfilenamel);
    iLog->Log(Ktestakniconutilsavkoniconfilenamel);

    TFileName file( KMbmFile );

    TFileName avkonFilename = AknIconUtils::AvkonIconFileName();
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsValidateLogicalAppIconIdL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsValidateLogicalAppIconIdL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsvalidatelogicalappiconidl, "In TestAknIconUtilsValidateLogicalAppIconIdL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsvalidatelogicalappiconidl);
    iLog->Log(Ktestakniconutilsvalidatelogicalappiconidl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    TInt bitmapId = EMbmAvkonQgn_indi_mic;
    TInt mask = EMbmAvkonQgn_indi_mic_mask;
    
    AknIconUtils::ValidateLogicalAppIconId( file, bitmapId, mask );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsIsMifFileL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsIsMifFileL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsismiffilel, "In TestAknIconUtilsIsMifFileL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsismiffilel);
    iLog->Log(Ktestakniconutilsismiffilel);

    TFileName file( KMifFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );

    TBool isMif = AknIconUtils::IsMifFile( file );
    
    STIF_ASSERT_TRUE( isMif );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsIsMifIconL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsIsMifIconL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsismificonl, "In TestAknIconUtilsIsMifIconL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsismificonl);
    iLog->Log(Ktestakniconutilsismificonl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    TBool isMifIcon = AknIconUtils::IsMifIcon( aSrcBitmap );
    
    STIF_ASSERT_TRUE( isMifIcon );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions1L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions1L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsgetcontentdimensions1l, "In TestAknIconUtilsGetContentDimensions1L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsgetcontentdimensions1l);
    iLog->Log(Ktestakniconutilsgetcontentdimensions1l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );
    TSize aContentDimensions;

    AknIconUtils::GetContentDimensions( aSrcBitmap, aContentDimensions );
    
    TInt width = KWidth;
    TInt height = KHeight;
    
    STIF_ASSERT_EQUALS( aContentDimensions.iWidth, width );
    STIF_ASSERT_EQUALS( aContentDimensions.iHeight, height );
    
    CleanupStack::PopAndDestroy();

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions2L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions2L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsgetcontentdimensions2l, "In TestAknIconUtilsGetContentDimensions2L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsgetcontentdimensions2l);
    iLog->Log(Ktestakniconutilsgetcontentdimensions2l);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );
    TAknContentDimensions aContentDimensions;

    AknIconUtils::GetContentDimensions( aSrcBitmap, aContentDimensions );
    
    STIF_ASSERT_EQUALS( aContentDimensions.iWidth, KWidth );
    STIF_ASSERT_EQUALS( aContentDimensions.iHeight, KHeight );
    
    CleanupStack::PopAndDestroy();
    
    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL5L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL5L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl5l, "In TestAknIconUtilsCreateIconL5L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl5l);
    iLog->Log(Ktestakniconutilscreateiconl5l);



    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsCreateIconL6L
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsCreateIconL6L( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilscreateiconl6l, "In TestAknIconUtilsCreateIconL6L");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilscreateiconl6l);
    iLog->Log(Ktestakniconutilscreateiconl6l);



    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsSetIconColorL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsSetIconColorL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsseticoncolorl, "In TestAknIconUtilsSetIconColorL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsseticoncolorl);
    iLog->Log(Ktestakniconutilsseticoncolorl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    AknIconUtils::SetIconColor( aSrcBitmap, KRgbBlack );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsExcludeFromCacheL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsExcludeFromCacheL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsexcludefromcachel, "In TestAknIconUtilsExcludeFromCacheL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsexcludefromcachel);
    iLog->Log(Ktestakniconutilsexcludefromcachel);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    AknIconUtils::ExcludeFromCache( aSrcBitmap );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsDisableCompressionL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsDisableCompressionL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsdisablecompressionl, "In TestAknIconUtilsDisableCompressionL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsdisablecompressionl);
    iLog->Log(Ktestakniconutilsdisablecompressionl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    AknIconUtils::DisableCompression( aSrcBitmap );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// --------------------------------------------------------------------------
// Ctestpubscalableicons::TestAknIconUtilsScaleBitmapL
// --------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::TestAknIconUtilsScaleBitmapL( CStifItemParser& /*aItem*/ )
    {
    _LIT(Kctestpubscalableicons, "Ctestpubscalableicons");
    _LIT(Ktestakniconutilsscalebitmapl, "In TestAknIconUtilsScaleBitmapL");
    TestModuleIf().Printf(0, Kctestpubscalableicons, Ktestakniconutilsscalebitmapl);
    iLog->Log(Ktestakniconutilsscalebitmapl);

    TFileName file( KMbmFile );
    User::LeaveIfError( CompleteWithAppPath( file ) );
    CFbsBitmap* aSrcBitmap = AknIconUtils::CreateIconL( file, EMbmAvkonQgn_indi_mic );

    CleanupStack::PushL( aSrcBitmap );

    TRect aTrgRect( TSize( KWidth, KHeight ) );
    
    CFbsBitmap* aTrgBitmap = new( ELeave ) CFbsBitmap;
    aTrgBitmap->Create(TSize( KWidth, KHeight), ENone );

    AknIconUtils::ScaleBitmapL( aTrgRect, aTrgBitmap, aSrcBitmap );
    
    STIF_ASSERT_NOT_NULL( aTrgBitmap );
    
    CleanupStack::PopAndDestroy( aSrcBitmap );

    return KErrNone;
    }

// End of file

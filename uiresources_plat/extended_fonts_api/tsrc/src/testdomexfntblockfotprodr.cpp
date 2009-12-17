/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   For test extended fonts api modules
*
*/


// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknfontid.h>
#include <w32std.h> 
#include <coemain.h> 
#include <aknfontprovidersuppliedmetrics.h>

#include "testdomexfntcontainer.h"
#include "testdomextedfonts.h"

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPCreateFontFromMetrics
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPCreateFontFromMetrics( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPCreateFontFromMetrics, "In TestAFPCreateFontFromMetrics" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPCreateFontFromMetrics );
    // Print to log file
    iLog->Log( KTestAFPCreateFontFromMetrics );
    
    CWsScreenDevice* screenDevice = CCoeEnv::Static()->ScreenDevice();
    TInt fontId = 1;
    TAknFontSpecification metrics( fontId );
    TAknFontProviderSuppliedMetrics additionalMetrics;
    TInt providerIndex;
    CFbsFont* fbsFont = AknFontProvider::CreateFontFromMetrics(
        *screenDevice, fontId, metrics, additionalMetrics, providerIndex );
    screenDevice->ReleaseFont( fbsFont );
    if( screenDevice )
        {
          delete screenDevice;
          screenDevice = NULL;
        } 
    
    return KErrNone;

    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPCrateFntFrmTpefacAndMetics
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPCrateFntFrmTpefacAndMetics( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPCrateFntFrmTpefacAndMetics, "In TestAFPCrateFntFrmTpefacAndMetics" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPCrateFntFrmTpefacAndMetics );
    // Print to log file
    iLog->Log( KTestAFPCrateFntFrmTpefacAndMetics );

    CWsScreenDevice* screenDevice = CCoeEnv::Static()->ScreenDevice();
    TInt fontId = 1;
    TAknFontSpecification metrics( fontId );
    TAknFontProviderSuppliedMetrics additionalMetrics;
    TInt providerIndex;
    TTypeface typeFace;
    CFbsFont* fbsFont = AknFontProvider::CreateFontFromTypefaceAndMetrics(
        *screenDevice, typeFace, metrics, additionalMetrics, providerIndex );
    screenDevice->ReleaseFont( fbsFont );
    if( screenDevice )
        {
        delete screenDevice;
        screenDevice = NULL;
        }
    
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPHasBaselineCorrection
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPHasBaselineCorrection( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPHasBaselineCorrection, "In TestAFPHasBaselineCorrection" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPHasBaselineCorrection );
    // Print to log file
    iLog->Log( KTestAFPHasBaselineCorrection );

    AknFontProvider::HasBaselineCorrection( 1 );

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPBaslinDeltaForCharcter
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPBaslinDeltaForCharcter( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPBaslinDeltaForCharcter, "In TestAFPBaslinDeltaForCharcter" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPBaslinDeltaForCharcter );
    // Print to log file
    iLog->Log( KTestAFPBaslinDeltaForCharcter );

    TInt baseLine;
    TInt demon;
    AknFontProvider::BaselineDeltaForCharacter( 1, 'a', baseLine, demon );

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPMinimumBaslinDetaForDescrptr
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPMinimumBaslinDetaForDescrptr( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPMinimumBaslinDetaForDescrptr, "In TestAFPMinimumBaslinDetaForDescrptr" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPMinimumBaslinDetaForDescrptr );
    // Print to log file
    iLog->Log( KTestAFPMinimumBaslinDetaForDescrptr );

    TInt minBaseLine;
    TInt minDemon;
    _LIT( KTxtSame, "abc" );
    TInt numInit( 0 );
    AknFontProvider::MinimumBaselineDeltaForDescriptor(
        1, KTxtSame, minBaseLine, minDemon, ETrue, numInit );
    
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPFontProvidrIndexFromFntSpec
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPFontProvidrIndexFromFntSpec( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPFontProvidrIndexFromFntSpec,"In TestAFPFontProvidrIndexFromFntSpec" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPFontProvidrIndexFromFntSpec );
    // Print to log file
    iLog->Log( KTestAFPFontProvidrIndexFromFntSpec );

    TFontSpec FontSpec;
    AknFontProvider::FontProviderIndexFromFontSpec( FontSpec ); 

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPInitializeSystemL
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPInitializeSystemL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPInitializeSystemL,"In TestAFPInitializeSystemL" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPInitializeSystemL );
    // Print to log file
    iLog->Log( KTestAFPInitializeSystemL );

    TInt err = KErrNone;
    
    CTestDOMExFntContainer* container = new( ELeave ) CTestDOMExFntContainer();
    CEikonEnv* eikEnv = ( CEikonEnv* )container->GetEnv();
    TRAP (err, AknFontProvider::InitializeSystemL( *eikEnv ) );
    container->ResetControl();

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestAFPGetFontSpecFromMetrics
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestAFPGetFontSpecFromMetrics( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestAFPGetFontSpecFromMetrics,"In TestAFPGetFontSpecFromMetrics" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestAFPGetFontSpecFromMetrics );
    // Print to log file
    iLog->Log( KTestAFPGetFontSpecFromMetrics );

    CWsScreenDevice* screenDevice = CCoeEnv::Static()->ScreenDevice();
    TInt fontId = 1;
    TAknFontSpecification metrics( fontId );
    TFontSpec fontSpec;
    TInt providerIndex;
    AknFontProvider::GetFontSpecFromMetrics( *screenDevice, fontId, metrics, fontSpec, providerIndex );

    return KErrNone;
    }

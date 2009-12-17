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

#include "testdomextedfonts.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMExtedFonts::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDOMExtedFonts::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 
        ENTRY( "TestTAFIdIsEncodedFont",
               CTestDOMExtedFonts::TestTAFIdIsEncodedFont ),
        ENTRY( "TestTAFFntIdForStatupNormalFnt",
               CTestDOMExtedFonts::TestTAFFntIdForStatupNormalFnt ),
        ENTRY( "TestAFPCreateFontFromMetrics",
               CTestDOMExtedFonts::TestAFPCreateFontFromMetrics ),
        ENTRY( "TestAFPCrateFntFrmTpefacAndMetics",
               CTestDOMExtedFonts::TestAFPCrateFntFrmTpefacAndMetics ),
        ENTRY( "TestAFPHasBaselineCorrection",
               CTestDOMExtedFonts::TestAFPHasBaselineCorrection ),
        ENTRY( "TestAFPBaslinDeltaForCharcter",
               CTestDOMExtedFonts::TestAFPBaslinDeltaForCharcter ),
        ENTRY( "TestAFPMinimumBaslinDetaForDescrptr",
               CTestDOMExtedFonts::TestAFPMinimumBaslinDetaForDescrptr ),
        ENTRY( "TestAFPFontProvidrIndexFromFntSpec",
               CTestDOMExtedFonts::TestAFPFontProvidrIndexFromFntSpec ),
        ENTRY( "TestAFPInitializeSystemL",
               CTestDOMExtedFonts::TestAFPInitializeSystemL ),
        ENTRY( "TestAFPGetFontSpecFromMetrics",
               CTestDOMExtedFonts::TestAFPGetFontSpecFromMetrics ),
        ENTRY( "TestTAFPSMExcessAscent",
               CTestDOMExtedFonts::TestTAFPSMExcessAscent ),
        ENTRY( "TestTAFPSMSetExcessAscent",
               CTestDOMExtedFonts::TestTAFPSMSetExcessAscent ),
        ENTRY( "TestTAFPSMExcessDescent",
               CTestDOMExtedFonts::TestTAFPSMExcessDescent ),
        ENTRY( "TestTAFPSMSetExcessDescent",
               CTestDOMExtedFonts::TestTAFPSMSetExcessDescent ),
        ENTRY( "TestTAFPSMMxDescntToTxtPanBotom",
               CTestDOMExtedFonts::TestTAFPSMMxDescntToTxtPanBotom ),
        ENTRY( "TestTAFPSMStMxDescntToTxtPanBotom",
               CTestDOMExtedFonts::TestTAFPSMStMxDescntToTxtPanBotom ),
               // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

//  [End of File]

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
#include <aknfontprovidersuppliedmetrics.h>

#include "testdomextedfonts.h"

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMExcessAscent
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMExcessAscent( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMExcessAscent, "In TestTAFPSMExcessAscent" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMExcessAscent );
    // Print to log file
    iLog->Log( KTestTAFPSMExcessAscent );

    iSuppliedMetrics.ExcessAscent();

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMSetExcessAscent
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMSetExcessAscent( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMSetExcessAscent, "In TestTAFPSMSetExcessAscent" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMSetExcessAscent );
    // Print to log file
    iLog->Log( KTestTAFPSMSetExcessAscent );

    iSuppliedMetrics.SetExcessAscent( 1 );

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMExcessDescent
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMExcessDescent( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMExcessDescent, "In TestTAFPSMExcessDescent" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMExcessDescent );
    // Print to log file
    iLog->Log( KTestTAFPSMExcessDescent );

    iSuppliedMetrics.ExcessDescent();

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMSetExcessDescent
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMSetExcessDescent( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMSetExcessDescent, "In TestTAFPSMSetExcessDescent" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMSetExcessDescent );
    // Print to log file
    iLog->Log( KTestTAFPSMSetExcessDescent );

    iSuppliedMetrics.SetExcessDescent( 1 );

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMMxDescntToTxtPanBotom
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMMxDescntToTxtPanBotom( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMMxDescntToTxtPanBotom, "In TestTAFPSMMxDescntToTxtPanBotom" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMMxDescntToTxtPanBotom );
    // Print to log file
    iLog->Log( KTestTAFPSMMxDescntToTxtPanBotom );

    iSuppliedMetrics.MaxDescentToTextPaneBottom();

    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMUiVoiceRengn::TestTAFPSMStMxDescntToTxtPanBotom
// -----------------------------------------------------------------------------
TInt CTestDOMExtedFonts::TestTAFPSMStMxDescntToTxtPanBotom( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomextedfonts, "Ktestdomextedfonts" );
    _LIT( KTestTAFPSMStMxDescntToTxtPanBotom, "In TestTAFPSMStMxDescntToTxtPanBotom" );
    TestModuleIf().Printf( 0, Ktestdomextedfonts, KTestTAFPSMStMxDescntToTxtPanBotom );
    // Print to log file
    iLog->Log( KTestTAFPSMStMxDescntToTxtPanBotom );

    iSuppliedMetrics.SetMaxDescentToTextPaneBottom( 1 );

    return KErrNone;
    }

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
* Description:  layout_data_api
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknlayout2def.h>
#include <aknlayout2scalabledef.h>

#include "testdomlayoutdata.h"


// ============================ MEMBER FUNCTIONS ===============================


// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWLLImportConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWLLImportConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWLLImportConstructor, "In TestWLLImportConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWLLImportConstructor );
    // Print to log file
    iLog->Log( KTestWLLImportConstructor );
    TAknWindowComponentLayout componentLayout;
    TAknWindowLineLayout windowLineLayout( componentLayout );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWLLOperator
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWLLOperator( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWLLOperator, "In TestWLLOperator" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWLLOperator );
    // Print to log file
    iLog->Log( KTestWLLOperator );
    TAknWindowComponentLayout componentLayout;
    TAknWindowLineLayout layoutOperator = componentLayout;
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestWLLCombineLines
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestWLLCombineLines( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestWLLCombineLines, "In TestWLLCombineLines" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestWLLCombineLines );
    // Print to log file
    iLog->Log( KTestWLLCombineLines );
    
    TAknWindowLineLayout winLineLayout;
    
    TAknWindowLineLayout::CombineLines( winLineLayout, winLineLayout );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTLLImportConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTLLImportConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTLLImportConstructor, "In TestTLLImportConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTLLImportConstructor );
    // Print to log file
    iLog->Log( KTestTLLImportConstructor );
    TAknTextComponentLayout componentLayout;
    TAknTextLineLayout textLineLayout( componentLayout );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutData::TestTLLOperator
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::TestTLLOperator( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutdata, "testdomlayoutdata" );
    _LIT( KTestTLLOperator, "In TestTLLOperator" );
    TestModuleIf().Printf( 0, Ktestdomlayoutdata, KTestTLLOperator );
    // Print to log file
    iLog->Log( KTestTLLOperator );
    TAknTextComponentLayout componentLayout;
    TAknTextLineLayout textLineLayout = componentLayout;
    return KErrNone;
    }

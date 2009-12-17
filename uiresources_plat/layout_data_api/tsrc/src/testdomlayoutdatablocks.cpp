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

#include "testdomlayoutdata.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutData::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutData::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 

        ENTRY( "TestWLLImportConstructor", CTestDOMLayoutData::TestWLLImportConstructor ),
        ENTRY( "TestWLLOperator", CTestDOMLayoutData::TestWLLOperator ),
        ENTRY( "TestWLLCombineLines", CTestDOMLayoutData::TestWLLCombineLines ),
        ENTRY( "TestTLLImportConstructor", CTestDOMLayoutData::TestTLLImportConstructor ),
        ENTRY( "TestTLLOperator", CTestDOMLayoutData::TestTLLOperator ),
        //for test aknlayout2scalabledef.h
        ENTRY( "TestLSTLDefaultConstructor", CTestDOMLayoutData::TestLSTLDefaultConstructor ),
        ENTRY( "TestLSTLConstructor", CTestDOMLayoutData::TestLSTLConstructor ),
        ENTRY( "TestLSTLLayoutLimits", CTestDOMLayoutData::TestLSTLLayoutLimits ),
        ENTRY( "TestLSTLFirstIndex", CTestDOMLayoutData::TestLSTLFirstIndex ),
        ENTRY( "TestLSTLLastIndex", CTestDOMLayoutData::TestLSTLLastIndex ),
        ENTRY( "TestLSTLSetFirstIndex", CTestDOMLayoutData::TestLSTLSetFirstIndex ),
        ENTRY( "TestLSTLSetLastIndex", CTestDOMLayoutData::TestLSTLSetLastIndex ),
        ENTRY( "TestLSPLDefaultConstructor", CTestDOMLayoutData::TestLSPLDefaultConstructor ),
        ENTRY( "TestLSPLConstructor", CTestDOMLayoutData::TestLSPLConstructor ),
        ENTRY( "TestLSPLFirstVariety", CTestDOMLayoutData::TestLSPLFirstVariety ),
        ENTRY( "TestLSPLLastVariety", CTestDOMLayoutData::TestLSPLLastVariety ),
        ENTRY( "TestLSPLFirstColumn", CTestDOMLayoutData::TestLSPLFirstColumn ),
        ENTRY( "TestLSPLLastColumn", CTestDOMLayoutData::TestLSPLLastColumn ),
        ENTRY( "TestLSPLFirstRow", CTestDOMLayoutData::TestLSPLFirstRow ),
        ENTRY( "TestLSPLLastRow", CTestDOMLayoutData::TestLSPLLastRow ),
        ENTRY( "TestLSPLSetFirstVariety", CTestDOMLayoutData::TestLSPLSetFirstVariety ),
        ENTRY( "TestLSPLSetLastVariety", CTestDOMLayoutData::TestLSPLSetLastVariety ),
        ENTRY( "TestLSPLSetFirstColumn", CTestDOMLayoutData::TestLSPLSetFirstColumn ),
        ENTRY( "TestLSPLSetLastColumn", CTestDOMLayoutData::TestLSPLSetLastColumn ),
        ENTRY( "TestLSPLSetFirstRow", CTestDOMLayoutData::TestLSPLSetFirstRow ),
        ENTRY( "TestLSPLSetLastRow", CTestDOMLayoutData::TestLSPLSetLastRow ),
        ENTRY( "TestWCLDefaultConstructor", CTestDOMLayoutData::TestWCLDefaultConstructor ),
        ENTRY( "TestWCLLayoutLine", CTestDOMLayoutData::TestWCLLayoutLine ),
        ENTRY( "TestWCLLayoutLineNoEmptys", CTestDOMLayoutData::TestWCLLayoutLineNoEmptys ),
        ENTRY( "TestWCLLayoutComponentType", CTestDOMLayoutData::TestWCLLayoutComponentType ),
        ENTRY( "TestWCLCompose", CTestDOMLayoutData::TestWCLCompose ),
        ENTRY( "TestWCLComposeText", CTestDOMLayoutData::TestWCLComposeText ),
        ENTRY( "TestWCLIntersect", CTestDOMLayoutData::TestWCLIntersect ),
        ENTRY( "TestWCLMinus", CTestDOMLayoutData::TestWCLMinus ),
        ENTRY( "TestWCLSiblingAsChild", CTestDOMLayoutData::TestWCLSiblingAsChild ),
        ENTRY( "TestWCLSetZeroSized", CTestDOMLayoutData::TestWCLSetZeroSized ),
        ENTRY( "TestWCLSplit", CTestDOMLayoutData::TestWCLSplit ),
        ENTRY( "TestWCLMultiLineGrid", CTestDOMLayoutData::TestWCLMultiLineGrid ),
        ENTRY( "TestWCLMultiLineX", CTestDOMLayoutData::TestWCLMultiLineX ),
        ENTRY( "TestWCLMultiLineY", CTestDOMLayoutData::TestWCLMultiLineY ),
        ENTRY( "TestWCLAnim", CTestDOMLayoutData::TestWCLAnim ),
        ENTRY( "TestWCLConstructor", CTestDOMLayoutData::TestWCLConstructor ),
        ENTRY( "TestWCLOperator", CTestDOMLayoutData::TestWCLOperator ),
        ENTRY( "TestTCLDefaultConstructor", CTestDOMLayoutData::TestTCLDefaultConstructor ),
        ENTRY( "TestTCLLayoutLine", CTestDOMLayoutData::TestTCLLayoutLine ),
        ENTRY( "TestTCLMultiline", CTestDOMLayoutData::TestTCLMultilineL ),
        ENTRY( "TestTCLLayoutLineNoEmptys", CTestDOMLayoutData::TestTCLLayoutLineNoEmptys ),
        ENTRY( "TestTCLLayoutComponentType", CTestDOMLayoutData::TestTCLLayoutComponentType ),
        ENTRY( "TestTCLC", CTestDOMLayoutData::TestTCLCFunction ),
        ENTRY( "TestTCLlFunction", CTestDOMLayoutData::TestTCLlFunction ),
        ENTRY( "TestTCLtFunction", CTestDOMLayoutData::TestTCLtFunction ),
        ENTRY( "TestTCLrFunction", CTestDOMLayoutData::TestTCLrFunction ),
        ENTRY( "TestTCLbFunction", CTestDOMLayoutData::TestTCLbFunction ),
        ENTRY( "TestTCLWFunction", CTestDOMLayoutData::TestTCLWFunction ),
        ENTRY( "TestTCLHFunction", CTestDOMLayoutData::TestTCLHFunction ),
        ENTRY( "TestTCLJFunction", CTestDOMLayoutData::TestTCLJFunction ),
        ENTRY( "TestTCLFont", CTestDOMLayoutData::TestTCLFont ),
        ENTRY( "TestTCLSetC", CTestDOMLayoutData::TestTCLSetC ),
        ENTRY( "TestTCLSetl", CTestDOMLayoutData::TestTCLSetl ),
        ENTRY( "TestTCLSett", CTestDOMLayoutData::TestTCLSett ),
        ENTRY( "TestTCLSetr", CTestDOMLayoutData::TestTCLSetr ),
        ENTRY( "TestTCLSetb", CTestDOMLayoutData::TestTCLSetb ),
        ENTRY( "TestTCLSetW", CTestDOMLayoutData::TestTCLSetW ),
        ENTRY( "TestTCLSetH", CTestDOMLayoutData::TestTCLSetH ),
        ENTRY( "TestTCLSetJ", CTestDOMLayoutData::TestTCLSetJ ),
        ENTRY( "TestTCLSetFont", CTestDOMLayoutData::TestTCLSetFont ),
        ENTRY( "TestTCLAnim", CTestDOMLayoutData::TestTCLAnim ),
        ENTRY( "TestTCLMultiLineY", CTestDOMLayoutData::TestTCLMultiLineY ),
        ENTRY( "TestTCLConstructor", CTestDOMLayoutData::TestTCLConstructor ),
        ENTRY( "TestTCLOperator", CTestDOMLayoutData::TestTCLOperator ),
        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }



//  [End of File]

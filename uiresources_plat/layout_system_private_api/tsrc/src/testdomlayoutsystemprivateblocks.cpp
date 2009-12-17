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
* Description:  layout_system_private_api
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testdomlayoutsystemprivate.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 
        // for test AknLayout2AdaptationDataDef.h
        ENTRY( "TestLADSMultiLineTextLine", CTestDOMLayoutSystemPrivate::TestLADSMultiLineTextLineL ),
        ENTRY( "TestLADSWindowTable", CTestDOMLayoutSystemPrivate::TestLADSWindowTableL ),
        ENTRY( "TestLADSTextTable", CTestDOMLayoutSystemPrivate::TestLADSTextTableL ),
        ENTRY( "TestLADSWindowTableRect", CTestDOMLayoutSystemPrivate::TestLADSWindowTableRectL ),
        ENTRY( "TestLADSTableLimits", CTestDOMLayoutSystemPrivate::TestLADSTableLimitsL ),
        // for test AknLayout2DataDef.h
        ENTRY( "TestWLLISetAllParentOffsets", CTestDOMLayoutSystemPrivate::TestWLLISetAllParentOffsets ),
        ENTRY( "TestTLLISetAllParentOffsets", CTestDOMLayoutSystemPrivate::TestTLLISetAllParentOffsets ),
        ENTRY( "TestLDSWindowLine", CTestDOMLayoutSystemPrivate::TestLDSWindowLine ),
        ENTRY( "TestLDSWindowLineIndex", CTestDOMLayoutSystemPrivate::TestLDSWindowLineIndex ),
        ENTRY( "TestLDSWindowLineRect", CTestDOMLayoutSystemPrivate::TestLDSWindowLineRect ),
        ENTRY( "TestLDSTextLine", CTestDOMLayoutSystemPrivate::TestLDSTextLine ),
        ENTRY( "TestLDSTextLineIndex", CTestDOMLayoutSystemPrivate::TestLDSTextLineIndex ),
        ENTRY( "TestLDSTextLineRect", CTestDOMLayoutSystemPrivate::TestLDSTextLineRect ),
        ENTRY( "TestLDSMultiLineTextLine", CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLine ),
        ENTRY( "TestLDSMultiLineTextLineRect", CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLineRect ),
        ENTRY( "TestLDSWindowTable", CTestDOMLayoutSystemPrivate::TestLDSWindowTable ),
        ENTRY( "TestLDSTextTable", CTestDOMLayoutSystemPrivate::TestLDSTextTable ),
        ENTRY( "TestLDSWindowTableRect", CTestDOMLayoutSystemPrivate::TestLDSWindowTableRect ),
        ENTRY( "TestLDSTextTableRect", CTestDOMLayoutSystemPrivate::TestLDSTextTableRect ),
        ENTRY( "TestLDSTableLimits", CTestDOMLayoutSystemPrivate::TestLDSTableLimits ),
        // for test aknlayout2hierarchy.h
        ENTRY( "TestLHGetComponentType", CTestDOMLayoutSystemPrivate::TestLHGetComponentType ),
        ENTRY( "TestLHGetParamLimits", CTestDOMLayoutSystemPrivate::TestLHGetParamLimits ),
        ENTRY( "TestLHGetWindowComponentLayout", CTestDOMLayoutSystemPrivate::TestLHGetWindowComponentLayout ),
        ENTRY( "TestLHGetTextComponentLayout", CTestDOMLayoutSystemPrivate::TestLHGetTextComponentLayout ),
        // for test aknlayout2hierarchydef.h
        ENTRY( "TestLHCHDefaultConstructor", CTestDOMLayoutSystemPrivate::TestLHCHDefaultConstructor ),
        ENTRY( "TestLHCHConstructor", CTestDOMLayoutSystemPrivate::TestLHCHConstructor ),
        ENTRY( "TestLHCHLayoutSystemId", CTestDOMLayoutSystemPrivate::TestLHCHLayoutSystemId ),
        ENTRY( "TestLHCHSetLayoutSystemId", CTestDOMLayoutSystemPrivate::TestLHCHSetLayoutSystemId ),
        ENTRY( "TestLHCHApiId", CTestDOMLayoutSystemPrivate::TestLHCHApiId ),
        ENTRY( "TestLHCHComponentId", CTestDOMLayoutSystemPrivate::TestLHCHComponentId ),
        ENTRY( "TestLHCHOptionIndex", CTestDOMLayoutSystemPrivate::TestLHCHOptionIndex ),
        ENTRY( "TestLHCHVarietyIndex", CTestDOMLayoutSystemPrivate::TestLHCHVarietyIndex ),
        ENTRY( "TestLHCHColumn", CTestDOMLayoutSystemPrivate::TestLHCHColumn ),
        ENTRY( "TestLHCHRow", CTestDOMLayoutSystemPrivate::TestLHCHRow ),
        ENTRY( "TestLHCHSetApiId", CTestDOMLayoutSystemPrivate::TestLHCHSetApiId ),
        ENTRY( "TestLHCHSetComponentId", CTestDOMLayoutSystemPrivate::TestLHCHSetComponentId ),
        ENTRY( "TestLHCHSetOptionIndex", CTestDOMLayoutSystemPrivate::TestLHCHSetOptionIndex ),
        ENTRY( "TestLHCHSetVarietyIndex", CTestDOMLayoutSystemPrivate::TestLHCHSetVarietyIndex ),
        ENTRY( "TestLHCHSetColumn", CTestDOMLayoutSystemPrivate::TestLHCHSetColumn ),
        ENTRY( "TestLHCHSetRow", CTestDOMLayoutSystemPrivate::TestLHCHSetRow ),
        // for test aknlayout2scalabledatadef.h
        ENTRY( "TestLSDSWindowLine", CTestDOMLayoutSystemPrivate::TestLSDSWindowLine ),
        ENTRY( "TestLSDSWindowLineVariety", CTestDOMLayoutSystemPrivate::TestLSDSWindowLineVariety ),
        ENTRY( "TestLSDSTextLine", CTestDOMLayoutSystemPrivate::TestLSDSTextLine ),
        ENTRY( "TestLSDSTextLineVariety", CTestDOMLayoutSystemPrivate::TestLSDSTextLineVariety ),
        ENTRY( "TestLSDSWindowTable", CTestDOMLayoutSystemPrivate::TestLSDSWindowTable ),
        ENTRY( "TestLSDSWindowTableVariety", CTestDOMLayoutSystemPrivate::TestLSDSWindowTableVariety ),
        ENTRY( "TestLSDSTextTable", CTestDOMLayoutSystemPrivate::TestLSDSTextTable ),
        ENTRY( "TestLSDSTextTableVariety", CTestDOMLayoutSystemPrivate::TestLSDSTextTableVariety ),
        ENTRY( "TestLSDSTableLimits", CTestDOMLayoutSystemPrivate::TestLSDSTableLimits ),
        ENTRY( "TestLSDSParameterLimits", CTestDOMLayoutSystemPrivate::TestLSDSParameterLimits ),
        ENTRY( "TestLSDSParameterLimitsTable", CTestDOMLayoutSystemPrivate::TestLSDSParameterLimitsTable ),
        ENTRY( "TestLSDSGetComponentTypeById", CTestDOMLayoutSystemPrivate::TestLSDSGetComponentTypeById ),
        ENTRY( "TestLSDSGetParamLimitsById", CTestDOMLayoutSystemPrivate::TestLSDSGetParamLimitsById ),
        ENTRY( "TestLSDSGetWindowComponentById", CTestDOMLayoutSystemPrivate::TestLSDSGetWindowComponentById ),
        ENTRY( "TestLSDSGetTextComponentById", CTestDOMLayoutSystemPrivate::TestLSDSGetTextComponentById ),
        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }




//  [End of File]

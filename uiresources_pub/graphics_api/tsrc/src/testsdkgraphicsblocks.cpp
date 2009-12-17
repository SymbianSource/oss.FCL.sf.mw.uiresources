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
* Description:  test function implement of CTestSdkGraphics
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <palette.h>

#include "testsdkgraphics.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSdkGraphics::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestSdkGraphics::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function.
        // for DynamicPalette in palette.h.
        ENTRY( "TestDPDefaultColor256Util",
                CTestSdkGraphics::TestDPDefaultColor256Util ),
        ENTRY( "TestDPSetColor256Util",
                CTestSdkGraphics::TestDPSetColor256Util ),
        ENTRY( "TestDPColor16array",
                CTestSdkGraphics::TestDPColor16array ),
        ENTRY( "TestDPColor16inverse",
                CTestSdkGraphics::TestDPColor16inverse ),

        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

// -----------------------------------------------------------------------------
// CTestSdkGraphics::TestDPDefaultColor256Util
// -----------------------------------------------------------------------------
//
TInt CTestSdkGraphics::TestDPDefaultColor256Util( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSdkGraphics, "TestSdkGraphics" );
    _LIT( KTestDPDefaultColor256Util, "In TestDPDefaultColor256Util" );
    TestModuleIf().Printf( 0, KTestSdkGraphics, KTestDPDefaultColor256Util );
    // Print to log file
    iLog->Log( KTestDPDefaultColor256Util );

    DynamicPalette::DefaultColor256Util();

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSdkGraphics::TestDPSetColor256Util
// -----------------------------------------------------------------------------
//
TInt CTestSdkGraphics::TestDPSetColor256Util( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSdkGraphics, "TestSdkGraphics" );
    _LIT( KTestDPSetColor256Util, "In TestDPSetColor256Util" );
    TestModuleIf().Printf( 0, KTestSdkGraphics, KTestDPSetColor256Util );
    // Print to log file
    iLog->Log( KTestDPSetColor256Util );

    DynamicPalette::SetColor256Util( DynamicPalette::EIndex0 );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSdkGraphics::TestDPColor16array
// -----------------------------------------------------------------------------
//
TInt CTestSdkGraphics::TestDPColor16array( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSdkGraphics, "TestSdkGraphics" );
    _LIT( KTestDPColor16array, "In TestDPColor16array" );
    TestModuleIf().Printf( 0, KTestSdkGraphics, KTestDPColor16array );
    // Print to log file
    iLog->Log( KTestDPColor16array );

    DynamicPalette::Color16array();

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSdkGraphics::TestDPColor16inverse
// -----------------------------------------------------------------------------
//
TInt CTestSdkGraphics::TestDPColor16inverse( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSdkGraphics, "TestSdkGraphics" );
    _LIT( KTestDPColor16inverse, "In TestDPColor16inverse" );
    TestModuleIf().Printf( 0, KTestSdkGraphics, KTestDPColor16inverse );
    // Print to log file
    iLog->Log( KTestDPColor16inverse );

    DynamicPalette::Color16inverse();

    return KErrNone;

    }


//  [End of File]

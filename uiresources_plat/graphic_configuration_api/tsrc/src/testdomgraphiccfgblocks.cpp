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
* Description:  test functions implememt of CTestDomGraphicCfg
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <akniconconfig.h>
#include <fbs.h>

#include "testdomgraphiccfg.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Ctestdomgraphiccfg::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDomGraphicCfg::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function.
        // for AknIconConfig in akniconconfig.h.
        ENTRY( "TestAICPreferredDisplayMode",
                CTestDomGraphicCfg::TestAICPreferredDisplayMode ),
        ENTRY( "TestAICCompressIfPreferredL",
                CTestDomGraphicCfg::TestAICCompressIfPreferredL ),
        ENTRY( "TestAICCompressIfPreferredWithMaskL",
                CTestDomGraphicCfg::TestAICCompressIfPreferredWithMaskL ),
        ENTRY( "TestAICEnableAknIconSrvCache",
                CTestDomGraphicCfg::TestAICEnableAknIconSrvCache ),

        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

// -----------------------------------------------------------------------------
// CTestDomGraphicCfg::TestAICPreferredDisplayMode
// -----------------------------------------------------------------------------
//
TInt CTestDomGraphicCfg::TestAICPreferredDisplayMode( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( KTestDomMenuSatInter, "TestDomGraphicCfg" );
    _LIT( KTestAICPreferredDisplayMode, "In TestAICPreferredDisplayMode" );
    TestModuleIf().Printf( 0, KTestDomMenuSatInter, KTestAICPreferredDisplayMode );
    // Print to log file
    iLog->Log( KTestAICPreferredDisplayMode );

    AknIconConfig::TPreferredDisplayMode mode;
    AknIconConfig::PreferredDisplayMode( mode, AknIconConfig::EImageTypeIcon );

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomGraphicCfg::TestAICCompressIfPreferredL
// -----------------------------------------------------------------------------
//
TInt CTestDomGraphicCfg::TestAICCompressIfPreferredL( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( KTestDomMenuSatInter, "TestDomGraphicCfg" );
    _LIT( KTestAICCompressIfPreferredL, "In TestAICCompressIfPreferredL" );
    TestModuleIf().Printf( 0, KTestDomMenuSatInter, KTestAICCompressIfPreferredL );
    // Print to log file
    iLog->Log( KTestAICCompressIfPreferredL );

    CFbsBitmap* bitmap = new ( ELeave ) CFbsBitmap();
    CleanupStack::PushL( bitmap );
    
    AknIconConfig::CompressIfPreferred( bitmap );
    
    CleanupStack::PopAndDestroy( bitmap );

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomGraphicCfg::TestAICCompressIfPreferredWithMaskL
// -----------------------------------------------------------------------------
//
TInt CTestDomGraphicCfg::TestAICCompressIfPreferredWithMaskL( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( KTestDomMenuSatInter, "TestDomGraphicCfg" );
    _LIT( KTestAICCompressIfPreferredWithMaskL, "In TestAICCompressIfPreferredWithMaskL" );
    TestModuleIf().Printf( 0, KTestDomMenuSatInter, KTestAICCompressIfPreferredWithMaskL );
    // Print to log file
    iLog->Log( KTestAICCompressIfPreferredWithMaskL );

    CFbsBitmap* bitmap = new ( ELeave ) CFbsBitmap();
    CleanupStack::PushL( bitmap );
    CFbsBitmap* mask = new ( ELeave ) CFbsBitmap();
    CleanupStack::PushL( mask );
    
    AknIconConfig::CompressIfPreferred( bitmap, mask );

    CleanupStack::PopAndDestroy( mask );
    CleanupStack::PopAndDestroy( bitmap );

    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomGraphicCfg::TestAICEnableAknIconSrvCache
// -----------------------------------------------------------------------------
//
TInt CTestDomGraphicCfg::TestAICEnableAknIconSrvCache( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( KTestDomMenuSatInter, "TestDomGraphicCfg" );
    _LIT( KTestAICEnableAknIconSrvCache, "In TestAICEnableAknIconSrvCache" );
    TestModuleIf().Printf( 0, KTestDomMenuSatInter, KTestAICEnableAknIconSrvCache );
    // Print to log file
    iLog->Log( KTestAICEnableAknIconSrvCache );

    AknIconConfig::EnableAknIconSrvCache( EFalse );

    return KErrNone;
    }


//  [End of File]

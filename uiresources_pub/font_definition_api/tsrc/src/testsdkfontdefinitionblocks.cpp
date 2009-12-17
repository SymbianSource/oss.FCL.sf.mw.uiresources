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
* Description:   font_definition_api
*
*/




// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknfontspecification.h>

#include "testsdkfontdefinition.h"
#include "testsdkfontdefinitionmclass.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 
        ENTRY( "TestFSConstructor", CTestSDKFontDefinition::TestFSConstructor ),
        ENTRY( "TestFSFontConstructorL", CTestSDKFontDefinition::TestFSFontConstructorL ),
        ENTRY( "TestFSSetFontCategory", CTestSDKFontDefinition::TestFSSetFontCategory ),
        ENTRY( "TestFSFontCategory", CTestSDKFontDefinition::TestFSFontCategory ),
        ENTRY( "TestFSSetTextPaneHeight", CTestSDKFontDefinition::TestFSSetTextPaneHeight ),
        ENTRY( "TestFSTextPaneHeight", CTestSDKFontDefinition::TestFSTextPaneHeight ),
        ENTRY( "TestFSSetWeight", CTestSDKFontDefinition::TestFSSetWeight ),
        ENTRY( "TestFSSetPosture", CTestSDKFontDefinition::TestFSSetPosture ),
        ENTRY( "TestFSSetTextPaneHeightIsDesignHeight", 
                CTestSDKFontDefinition::TestFSSetTextPaneHeightIsDesignHeight ),
        ENTRY( "TestFSTextPaneIsDesignHeight", CTestSDKFontDefinition::TestFSTextPaneIsDesignHeight ),
        ENTRY( "TestFSSetExactMatchRequired", CTestSDKFontDefinition::TestFSSetExactMatchRequired ),
        ENTRY( "TestFSExactMatchRequired", CTestSDKFontDefinition::TestFSExactMatchRequired ),
        ENTRY( "TestFSSetUnits", CTestSDKFontDefinition::TestFSSetUnits ),
        ENTRY( "TestFSUnits", CTestSDKFontDefinition::TestFSUnits ),
        ENTRY( "TestFSWeight", CTestSDKFontDefinition::TestFSWeight ),
        ENTRY( "TestFSPosture", CTestSDKFontDefinition::TestFSPosture ),
        ENTRY( "TestFSIsOutlineEffectOn", CTestSDKFontDefinition::TestFSIsOutlineEffectOn ),
        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSConstructor
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSConstructor, "In TestFSConstructor" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSConstructor );
    // Print to log file
    iLog->Log( KTestFSConstructor );
    TAknFontSpecification fontSpecification( 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSFontConstructorL
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSFontConstructorL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSFontConstructor, "In TestFSFontConstructor" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSFontConstructor );
    // Print to log file
    iLog->Log( KTestFSFontConstructor );
    TFontSpec fontSpec;
    TestMGraphicsDeviceMap* map = new ( ELeave ) TestMGraphicsDeviceMap();
    TAknFontSpecification fontSpecification( EAknFontCategoryUndefined, fontSpec, map );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetFontCategory
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetFontCategory( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetFontCategory, "In TestFSSetFontCategory" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetFontCategory );
    // Print to log file
    iLog->Log( KTestFSSetFontCategory );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.SetFontCategory( EAknFontCategoryUndefined );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSFontCategory
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSFontCategory( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSFontCategory, "In TestFSFontCategory" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSFontCategory );
    // Print to log file
    iLog->Log( KTestFSFontCategory );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.FontCategory();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetTextPaneHeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetTextPaneHeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetTextPaneHeight, "In TestFSSetTextPaneHeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetTextPaneHeight );
    // Print to log file
    iLog->Log( KTestFSSetTextPaneHeight );
    TAknFontSpecification fontSpecification( 0 );
    TInt height = fontSpecification.TextPaneHeight();
    fontSpecification.SetTextPaneHeight( height );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSTextPaneHeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSTextPaneHeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSTextPaneHeight, "In TestFSTextPaneHeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSTextPaneHeight );
    // Print to log file
    iLog->Log( KTestFSTextPaneHeight );
    TAknFontSpecification fontSpecification( 0 );
    TInt height = fontSpecification.TextPaneHeight();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetWeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetWeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetWeight, "In TestFSSetWeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetWeight );
    // Print to log file
    iLog->Log( KTestFSSetWeight );
    TAknFontSpecification fontSpecification( 0 );
    TFontStrokeWeight weight = fontSpecification.Weight();
    fontSpecification.SetWeight( weight );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetPosture
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetPosture( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetPosture, "In TestFSSetPosture" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetPosture );
    // Print to log file
    iLog->Log( KTestFSSetPosture );
    TAknFontSpecification fontSpecification( 0 );
    TFontPosture posture = fontSpecification.Posture();
    fontSpecification.SetPosture( posture );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetTextPaneHeightIsDesignHeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetTextPaneHeightIsDesignHeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetTextPaneHeightIsDesignHeight, "In TestFSSetTextPaneHeightIsDesignHeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetTextPaneHeightIsDesignHeight );
    // Print to log file
    iLog->Log( KTestFSSetTextPaneHeightIsDesignHeight );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.SetTextPaneHeightIsDesignHeight( ETrue );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSTextPaneIsDesignHeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSTextPaneIsDesignHeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSTextPaneIsDesignHeight, "In TestFSTextPaneIsDesignHeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSTextPaneIsDesignHeight );
    // Print to log file
    iLog->Log( KTestFSTextPaneIsDesignHeight );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.TextPaneIsDesignHeight();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetExactMatchRequired
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetExactMatchRequired( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetExactMatchRequired, "In TestFSSetExactMatchRequired" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetExactMatchRequired );
    // Print to log file
    iLog->Log( KTestFSSetExactMatchRequired );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.SetExactMatchRequired( ETrue );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSExactMatchRequired
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSExactMatchRequired( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSExactMatchRequired, "In TestFSExactMatchRequired" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSExactMatchRequired );
    // Print to log file
    iLog->Log( KTestFSExactMatchRequired );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.ExactMatchRequired();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSSetUnits
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSSetUnits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSSetUnits, "In TestFSSetUnits" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSSetUnits );
    // Print to log file
    iLog->Log( KTestFSSetUnits );
    TAknFontSpecification fontSpecification( 0 );
    TAknFontSpecification::TAknFontSpecificationUnits unit = fontSpecification.Units();
    fontSpecification.SetUnits( unit );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSUnits
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSUnits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSUnits, "In TestFSUnits" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSUnits );
    // Print to log file
    iLog->Log( KTestFSUnits );
    TAknFontSpecification fontSpecification( 0 );
    TAknFontSpecification::TAknFontSpecificationUnits unit = fontSpecification.Units();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSWeight
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSWeight( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSWeight, "In TestFSWeight" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSWeight );
    // Print to log file
    iLog->Log( KTestFSWeight );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.Weight();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSPosture
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSPosture( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSPosture, "In TestFSPosture" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSPosture );
    // Print to log file
    iLog->Log( KTestFSPosture );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.Posture();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestSDKFontDefinition::TestFSIsOutlineEffectOn
// -----------------------------------------------------------------------------
//
TInt CTestSDKFontDefinition::TestFSIsOutlineEffectOn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestsdkfontdefinition, "testsdkfontdefinition" );
    _LIT( KTestFSIsOutlineEffectOn, "In TestFSIsOutlineEffectOn" );
    TestModuleIf().Printf( 0, Ktestsdkfontdefinition, KTestFSIsOutlineEffectOn );
    // Print to log file
    iLog->Log( KTestFSIsOutlineEffectOn );
    TAknFontSpecification fontSpecification( 0 );
    fontSpecification.IsOutlineEffectOn();
    return KErrNone;
    }
//  [End of File]

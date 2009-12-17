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
* Description:  test function implement of CTestDomSkinImgAtt
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknsimageattributedata.h>

#include "testdomskinimgatt.h"


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomSkinImgAtt::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestDomSkinImgAtt::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function.
        // for  in AknsImageAttributeData.h.
        ENTRY( "TestTAIADTAknsImageAttributeDataL",
                CTestDomSkinImgAtt::TestTAIADTAknsImageAttributeDataL ),
        ENTRY( "TestTAIADSet",
                CTestDomSkinImgAtt::TestTAIADSet ),

        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }

// -----------------------------------------------------------------------------
// CTestDomSkinImgAtt::TestTAIADTAknsImageAttributeDataL
// -----------------------------------------------------------------------------
//
TInt CTestDomSkinImgAtt::TestTAIADTAknsImageAttributeDataL( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( Ktestdomskinimgatt, "TestDomSkinImgAtt" );
    _LIT( KTestTAIADTAknsImageAttributeDataL, "In TestTAIADTAknsImageAttributeDataL" );
    TestModuleIf().Printf( 0, Ktestdomskinimgatt, KTestTAIADTAknsImageAttributeDataL );
    // Print to log file
    iLog->Log( KTestTAIADTAknsImageAttributeDataL );

    TAknsImageAttributeData* data = new ( ELeave ) TAknsImageAttributeData();
    CleanupStack::PushL( data );

    STIF_ASSERT_NOT_NULL( data );
    
    CleanupStack::PopAndDestroy( data );
    
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomSkinImgAtt::TestTAIADSet
// -----------------------------------------------------------------------------
//
TInt CTestDomSkinImgAtt::TestTAIADSet( CStifItemParser& /*aItem*/ )
    {
    // Print to UI
    _LIT( Ktestdomskinimgatt, "TestDomSkinImgAtt" );
    _LIT( KTestTAIADSetL, "In TestTAIADSetL" );
    TestModuleIf().Printf( 0, Ktestdomskinimgatt, KTestTAIADSetL );
    // Print to log file
    iLog->Log( KTestTAIADSetL );

    TAknsImageAttributeData data;

    TAknsImageAttributeData imgAttData;
    imgAttData.Set( data );
    
    return KErrNone;
    }


//  [End of File]

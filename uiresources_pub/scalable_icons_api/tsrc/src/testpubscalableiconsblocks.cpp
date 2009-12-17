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
* Description:  scalable_icons_api
*
*/


// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testpubscalableicons.h"

// CONSTANTS

// FORWARD DECLARATIONS
//class ?FORWARD_CLASSNAME;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Ctestpubscalableicons::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt Ctestpubscalableicons::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 

        // [test cases entries]
        //AknIconSrvClient.h
        ENTRY( "TestRAknIconSrvClientConnectL", Ctestpubscalableicons::TestRAknIconSrvClientConnectL ), 
        ENTRY( "TestRAknIconSrvClientDisconnectL", Ctestpubscalableicons::TestRAknIconSrvClientDisconnectL ), 
        //AknIconUtils.h
        ENTRY( "TestTAknContentDimensionsTAknContentDimensions1L", Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions1L ), 
        ENTRY( "TestTAknContentDimensionsTAknContentDimensions2L", Ctestpubscalableicons::TestTAknContentDimensionsTAknContentDimensions2L ), 
        ENTRY( "TestTAknContentDimensionsSetDimensions1L", Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions1L ), 
        ENTRY( "TestTAknContentDimensionsSetDimensions2L", Ctestpubscalableicons::TestTAknContentDimensionsSetDimensions2L ), 
        ENTRY( "TestCAknIconNewL", Ctestpubscalableicons::TestCAknIconNewL ), 
        ENTRY( "TestCAknIconBitmapL", Ctestpubscalableicons::TestCAknIconBitmapL ), 
        ENTRY( "TestCAknIconMaskL", Ctestpubscalableicons::TestCAknIconMaskL ), 
        ENTRY( "TestCAknIconSetBitmapL", Ctestpubscalableicons::TestCAknIconSetBitmapL ), 
        ENTRY( "TestCAknIconSetMaskL", Ctestpubscalableicons::TestCAknIconSetMaskL ), 
        ENTRY( "TestAknIconUtilsCreateIconL1L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL1L ), 
        ENTRY( "TestAknIconUtilsCreateIconLC1L", Ctestpubscalableicons::TestAknIconUtilsCreateIconLC1L ), 
        ENTRY( "TestAknIconUtilsCreateIconL2L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL2L ), 
        ENTRY( "TestAknIconUtilsCreateIconL3L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL3L ), 
        ENTRY( "TestAknIconUtilsCreateIconLC2L", Ctestpubscalableicons::TestAknIconUtilsCreateIconLC2L ), 
        ENTRY( "TestAknIconUtilsCreateIconL4L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL4L ), 
        ENTRY( "TestAknIconUtilsPreserveIconDataL", Ctestpubscalableicons::TestAknIconUtilsPreserveIconDataL ), 
        ENTRY( "TestAknIconUtilsDestroyIconDataL", Ctestpubscalableicons::TestAknIconUtilsDestroyIconDataL ), 
        ENTRY( "TestAknIconUtilsSetSizeL", Ctestpubscalableicons::TestAknIconUtilsSetSizeL ), 
        ENTRY( "TestAknIconUtilsSetSizeAndRotationL", Ctestpubscalableicons::TestAknIconUtilsSetSizeAndRotationL ), 
        ENTRY( "TestAknIconUtilsSetObserverL", Ctestpubscalableicons::TestAknIconUtilsSetObserverL ), 
        ENTRY( "TestAknIconUtilsAvkonIconFileNameL", Ctestpubscalableicons::TestAknIconUtilsAvkonIconFileNameL ), 
        ENTRY( "TestAknIconUtilsValidateLogicalAppIconIdL", Ctestpubscalableicons::TestAknIconUtilsValidateLogicalAppIconIdL ), 
        ENTRY( "TestAknIconUtilsIsMifFileL", Ctestpubscalableicons::TestAknIconUtilsIsMifFileL ), 
        ENTRY( "TestAknIconUtilsIsMifIconL", Ctestpubscalableicons::TestAknIconUtilsIsMifIconL ), 
        ENTRY( "TestAknIconUtilsGetContentDimensions1L", Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions1L ), 
        ENTRY( "TestAknIconUtilsGetContentDimensions2L", Ctestpubscalableicons::TestAknIconUtilsGetContentDimensions2L ), 
        ENTRY( "TestAknIconUtilsCreateIconL5L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL5L ), 
        ENTRY( "TestAknIconUtilsCreateIconL6L", Ctestpubscalableicons::TestAknIconUtilsCreateIconL6L ), 
        ENTRY( "TestAknIconUtilsSetIconColorL", Ctestpubscalableicons::TestAknIconUtilsSetIconColorL ), 
        ENTRY( "TestAknIconUtilsExcludeFromCacheL", Ctestpubscalableicons::TestAknIconUtilsExcludeFromCacheL ), 
        ENTRY( "TestAknIconUtilsDisableCompressionL", Ctestpubscalableicons::TestAknIconUtilsDisableCompressionL ), 
        ENTRY( "TestAknIconUtilsScaleBitmapL", Ctestpubscalableicons::TestAknIconUtilsScaleBitmapL ), 
        //AknInternalIconUtils.h
        ENTRY( "TestAknInternalIconUtilsSetAppIconL", Ctestpubscalableicons::TestAknInternalIconUtilsSetAppIconL ), 

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }


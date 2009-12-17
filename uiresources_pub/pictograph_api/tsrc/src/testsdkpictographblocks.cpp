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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>

#include "testsdkpictograph.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::RunMethodL
// Run specified method. Contains also table of test mothods and their names.
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::RunMethodL( CStifItemParser& aItem ) 
    {

    static TStifFunctionInfo const KFunctions[] =
        {  
        // First string is the function name used in TestScripter script file.
        // Second is the actual implementation member function. 

        // test functions in aknpictographinterface.h
        ENTRY( "TestIntfaceNewL", CTestSDKPicToGraph::TestIntfaceNewL ),

        // test functions in akniconsrvclient.h
        ENTRY( "TestSrvConnect", CTestSDKPicToGraph::TestSrvConnect ),
        ENTRY( "TestSrvDisconnect", CTestSDKPicToGraph::TestSrvDisconnect ),

        // test functions in akniconutils.h
        ENTRY( "TestDimenDefCons", CTestSDKPicToGraph::TestDimenDefCons ),
        ENTRY( "TestDimenConstruct", CTestSDKPicToGraph::TestDimenConstruct ),
        ENTRY( "TestDimenSetDimen", CTestSDKPicToGraph::TestDimenSetDimen ),

        ENTRY( "TestIconNewL", CTestSDKPicToGraph::TestIconNewL ),
        ENTRY( "TestIconBitmap", CTestSDKPicToGraph::TestIconBitmapL ),
        ENTRY( "TestIconMask", CTestSDKPicToGraph::TestIconMaskL ),
        ENTRY( "TestIconSetBitmap", CTestSDKPicToGraph::TestIconSetBitmapL ),
        ENTRY( "TestIconSetMask", CTestSDKPicToGraph::TestIconSetMaskL ),

        ENTRY( "TestUtilCreateIconWithMaskL",
                CTestSDKPicToGraph::TestUtilCreateIconWithMaskL ),
        ENTRY( "TestUtilCreateIconWithBmpIdL",
                CTestSDKPicToGraph::TestUtilCreateIconWithBmpIdL ),
        ENTRY( "TestUtilCreateIconWithProMaskL",
                CTestSDKPicToGraph::TestUtilCreateIconWithProMaskL ),
        ENTRY( "TestUtilCreateIconWithProviderL",
                CTestSDKPicToGraph::TestUtilCreateIconWithProviderL ),
        ENTRY( "TestUtilCreateIconWithSoIconL",
                CTestSDKPicToGraph::TestUtilCreateIconWithSoIconL ),
        ENTRY( "TestUtilCreateIconWithSoBmpL",
                CTestSDKPicToGraph::TestUtilCreateIconWithSoBmpL ),
        ENTRY( "TestUtilCreateIconLC",
                CTestSDKPicToGraph::TestUtilCreateIconLCL ),
        ENTRY( "TestUtilPreserveIconData",
                CTestSDKPicToGraph::TestUtilPreserveIconDataL ),
        ENTRY( "TestUtilDestroyIconData",
                CTestSDKPicToGraph::TestUtilDestroyIconDataL ),
        ENTRY( "TestUtilSetSize", CTestSDKPicToGraph::TestUtilSetSizeL ),
        ENTRY( "TestUtilSetSizeAndRotation",
                CTestSDKPicToGraph::TestUtilSetSizeAndRotationL ),
        ENTRY( "TestUtilSetObserver", CTestSDKPicToGraph::TestUtilSetObserverL ),
        ENTRY( "TestUtilAvkonIconFileName",
                CTestSDKPicToGraph::TestUtilAvkonIconFileName ),
        ENTRY( "TestUtilValidateLogicalAppIconId",
                CTestSDKPicToGraph::TestUtilValidateLogicalAppIconId ),
        ENTRY( "TestUtilIsMifFile", CTestSDKPicToGraph::TestUtilIsMifFile ),
        ENTRY( "TestUtilIsMifIcon", CTestSDKPicToGraph::TestUtilIsMifIconL ),
        ENTRY( "TestUtilGetContentDimensions",
                CTestSDKPicToGraph::TestUtilGetContentDimensionsL ),
        ENTRY( "TestUtilSetIconColor",
                CTestSDKPicToGraph::TestUtilSetIconColorL ),
        ENTRY( "TestUtilExcludeFromCache",
                CTestSDKPicToGraph::TestUtilExcludeFromCacheL ),
        ENTRY( "TestUtilDisableCompression",
                CTestSDKPicToGraph::TestUtilDisableCompressionL ),
        ENTRY( "TestUtilScaleBitmapL", CTestSDKPicToGraph::TestUtilScaleBitmapL ),

        // test functions in akninternaliconutils.h
        ENTRY( "TestIntUtilSetAppIcon",
                CTestSDKPicToGraph::TestIntUtilSetAppIconL ),

        // [test cases entries]

        };

    const TInt count = sizeof( KFunctions ) / sizeof( TStifFunctionInfo );

    return RunInternalL( KFunctions, count, aItem );

    }


//  [End of File]

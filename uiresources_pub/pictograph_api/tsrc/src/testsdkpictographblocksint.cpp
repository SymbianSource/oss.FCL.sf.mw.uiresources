/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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


#include <FeatMgr.h>
#include <aknpictographinterface.h>

#include "testsdkpictograph.h"
#include "aknpictographdrawerinterfaceext.h"
#include "testsdkpictographcontrol.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIntfaceNewL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIntfaceNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIntfaceNewL, "In Interface NewL" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIntfaceNewL );
    // Print to log file
    iLog->Log( KTestIntfaceNewL );

    CTestSDKPicToGraphControl* control = CTestSDKPicToGraphControl::NewL();
    CleanupStack::PushL( control );
    CAknPictographAnimatorCallBackExt* callBack = new ( ELeave )
            CAknPictographAnimatorCallBackExt;
    CleanupStack::PushL( callBack );
    
    FeatureManager::InitializeLibL();

    TBool pictographsSupported = 
        FeatureManager::FeatureSupported( KFeatureIdJapanesePicto );

    FeatureManager::UnInitializeLib();    
    
    CAknPictographInterface* intface = CAknPictographInterface::NewL( *control,
            *callBack );
    
    
    CleanupStack::PushL( intface );
    if( pictographsSupported )
    	{
    	STIF_ASSERT_NOT_NULL( intface );
    	}

    CleanupStack::PopAndDestroy( intface );
    CleanupStack::PopAndDestroy( callBack );
    CleanupStack::PopAndDestroy( control );
    return KErrNone;

    }


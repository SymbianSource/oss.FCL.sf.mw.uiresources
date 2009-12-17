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
* Description:  Test AknsListBoxBackgroundControlContext.h
*
*/


#include <aknslistboxbackgroundcontrolcontext.h>

#include "testsdkskins.h"

const TInt KLength = 10;
const TInt KTiledLength = 20;
// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBBCCNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBBCCNewL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TAknsItemID tileditemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TPoint pointSBR( KTiledLength, KTiledLength );
    TRect rect( pointTL, pointBR );
    TRect rectTiled( pointBR, pointSBR );
    
    CAknsListBoxBackgroundControlContext* context = 
        CAknsListBoxBackgroundControlContext::NewL( itemID, rect, ETrue, tileditemID, rectTiled );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBBCCSetTiledBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBBCCSetTiledBitmapL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TAknsItemID tileditemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TPoint pointSBR( KTiledLength, KTiledLength );
    TRect rect( pointTL, pointBR );
    TRect rectTiled( pointBR, pointSBR );
    
    CAknsListBoxBackgroundControlContext* context = 
        CAknsListBoxBackgroundControlContext::NewL( itemID, rect, ETrue, tileditemID, rectTiled );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetTiledBitmap( tileditemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBBCCSetTiledRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBBCCSetTiledRectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TAknsItemID tileditemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TPoint pointSBR( KTiledLength, KTiledLength );
    TRect rect( pointTL, pointBR );
    TRect rectTiled( pointBR, pointSBR );
    
    CAknsListBoxBackgroundControlContext* context = 
        CAknsListBoxBackgroundControlContext::NewL( itemID, rect, ETrue, tileditemID, rectTiled );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetTiledRect( rectTiled );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBBCCSetBottomBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBBCCSetBottomBitmapL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TAknsItemID tileditemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TPoint pointSBR( KTiledLength, KTiledLength );
    TRect rect( pointTL, pointBR );
    TRect rectTiled( pointBR, pointSBR );
    
    CAknsListBoxBackgroundControlContext* context = 
        CAknsListBoxBackgroundControlContext::NewL( itemID, rect, ETrue, tileditemID, rectTiled );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetBottomBitmap( tileditemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBBCCSetBottomRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBBCCSetBottomRectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TAknsItemID tileditemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TPoint pointSBR( KTiledLength, KTiledLength );
    TRect rect( pointTL, pointBR );
    TRect rectTiled( pointBR, pointSBR );
    
    CAknsListBoxBackgroundControlContext* context = 
        CAknsListBoxBackgroundControlContext::NewL( itemID, rect, ETrue, tileditemID, rectTiled );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetBottomRect( rectTiled );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }


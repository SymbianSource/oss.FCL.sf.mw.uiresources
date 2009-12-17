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
* Description:  Test AknsFrameBackgroundControlContext.h
*
*/


#include <aknsframebackgroundcontrolcontext.h>

#include "testsdkskins.h"

const TInt KLength = 10;
// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestFBCCNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestFBCCNewL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CAknsFrameBackgroundControlContext* context = 
        CAknsFrameBackgroundControlContext::NewL( itemID, 
                                                  outRect, 
                                                  inRect, 
                                                  ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestFBCCSetFrameL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestFBCCSetFrameL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CAknsFrameBackgroundControlContext* context = 
        CAknsFrameBackgroundControlContext::NewL( itemID, 
                                                  outRect, 
                                                  inRect, 
                                                  ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetFrame( itemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestFBCCSetFrameRectsL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestFBCCSetFrameRectsL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CAknsFrameBackgroundControlContext* context = 
        CAknsFrameBackgroundControlContext::NewL( itemID, 
                                                  outRect, 
                                                  inRect, 
                                                  ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetFrameRects( outRect, inRect );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestFBCCSetCenterL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestFBCCSetCenterL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CAknsFrameBackgroundControlContext* context = 
        CAknsFrameBackgroundControlContext::NewL( itemID, 
                                                  outRect, 
                                                  inRect, 
                                                  ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetCenter( itemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestFBCCSetFramePartRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestFBCCSetFramePartRectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CAknsFrameBackgroundControlContext* context = 
        CAknsFrameBackgroundControlContext::NewL( itemID, 
                                                  outRect, 
                                                  inRect, 
                                                  ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetFramePartRect( outRect, EAknsFrameIndexTl );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

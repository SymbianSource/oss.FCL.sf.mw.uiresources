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
* Description:  Test AknsBasicBackgroundControlContext.h
*
*/


#include <aknsbasicbackgroundcontrolcontext.h>

#include "testsdkskins.h"

const TInt KLength = 10;
// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBBCCNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBBCCNewL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    
    STIF_ASSERT_NOT_NULL( context );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBBCCSetBitmapL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBBCCSetBitmapL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetBitmap( itemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBBCCSetRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBBCCSetRectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetRect( rect );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBBCCSetParentPosL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBBCCSetParentPosL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetParentPos( pointBR );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestBBCCSetParentContextL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestBBCCSetParentContextL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetParentContext( context );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

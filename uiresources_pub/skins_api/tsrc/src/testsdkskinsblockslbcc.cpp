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
* Description:  Test AknsLayeredBackgroundControlContext.h
*
*/


#include <aknslayeredbackgroundcontrolcontext.h>

#include "testsdkskins.h"

const TInt KLength = 10;

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBCCNewL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBCCNewL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsLayeredBackgroundControlContext* context = 
        CAknsLayeredBackgroundControlContext::NewL( itemID, rect, ETrue, 1 );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBCCSetLayerImageL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBCCSetLayerImageL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsLayeredBackgroundControlContext* context = 
        CAknsLayeredBackgroundControlContext::NewL( itemID, rect, ETrue, 1 );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetLayerImage( 0, itemID );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestLBCCSetLayerRectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestLBCCSetLayerRectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsLayeredBackgroundControlContext* context = 
        CAknsLayeredBackgroundControlContext::NewL( itemID, rect, ETrue, 1 );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    context->SetLayerRect( 0, rect );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

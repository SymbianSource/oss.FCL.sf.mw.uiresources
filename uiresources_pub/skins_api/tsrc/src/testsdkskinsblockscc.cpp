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
* Description:  Test AknsControlContext.h
*
*/


#include <aknscontrolcontext.h>
#include <aknsbasicbackgroundcontrolcontext.h>

#include "testsdkskins.h"

const TInt KLength = 10;
// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestCCSupplyMopObjectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestCCSupplyMopObjectL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    TTypeUid::Ptr ptr = TTypeUid::Null();
    ptr = context->SupplyMopObject( MAknsControlContext::ETypeId, context );
    CAknsBasicBackgroundControlContext* point = 
        static_cast<CAknsBasicBackgroundControlContext*> ( ptr.Pointer() );
    STIF_ASSERT_NOT_NULL( point );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

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
* Description:  Test AknsItemID.h
*
*/


#include <aknsitemid.h>

#include "testsdkskins.h"

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestIILinearOrder
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestIILinearOrder( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID firstItemID;
    TAknsItemID secondItemID;
    TInt order = TAknsItemID::LinearOrder( firstItemID, secondItemID );
    STIF_ASSERT_TRUE( 0 == order );
    
    return KErrNone;
    
    }

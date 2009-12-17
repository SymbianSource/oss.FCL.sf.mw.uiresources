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
* Description:  Test AknsDataContext.h
*
*/


#include <aknsdatacontext.h>
#include <aknsutils.h>

#include "testsdkskins.h"

// ============================ MEMBER FUNCTIONS ===============================
//------------------------------------------------------------------------------
// CTestSDKSkins::TestDCSupplyMopObjectL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDCSupplyMopObjectL( CStifItemParser& /*aItem*/ )
    {
    MAknsDataContext* context = AknsUtils::CreateDataContextForContainerL();
    STIF_ASSERT_NOT_NULL( context );
    
    TTypeUid::Ptr ptr = TTypeUid::Null();
    ptr = context->SupplyMopObject( MAknsDataContext::ETypeId, context );
    MAknsDataContext* point = static_cast<MAknsDataContext*> ( ptr.Pointer() );
    STIF_ASSERT_NOT_NULL( point );
    
    delete context;
    context = NULL;
    
    return KErrNone;
    
    }

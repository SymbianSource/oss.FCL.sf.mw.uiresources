/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines a public interface class MAknsDataContext.
*
*/


// INCLUDE FILES
#include <AknsDataContext.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// MAknsDataContext::SupplyMopObject
// -----------------------------------------------------------------------------
//
EXPORT_C TTypeUid::Ptr MAknsDataContext::SupplyMopObject( TTypeUid aId,
    MAknsDataContext* aContext )
    {
    if( aContext && aId.iUid == MAknsDataContext::ETypeId )
        {
        return aId.MakePtr( aContext );
        }

    return TTypeUid::Null();
    } //lint !e1746 SupplyMopObject usual syntax

// -----------------------------------------------------------------------------
// MAknsDataContext::Reserved1
// -----------------------------------------------------------------------------
//
TInt MAknsDataContext::Reserved1()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// MAknsDataContext::Reserved2
// -----------------------------------------------------------------------------
//
TInt MAknsDataContext::Reserved2()
    {
    return 0;
    }

//  End of File

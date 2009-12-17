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
* Description:  Defines a public interface class MAknsControlContext and
*                related enumerations.
*
*/


// INCLUDE FILES
#include <AknsControlContext.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// MAknsControlContext::SupplyMopObject
// -----------------------------------------------------------------------------
//
EXPORT_C TTypeUid::Ptr MAknsControlContext::SupplyMopObject( TTypeUid aId,
    MAknsControlContext* aContext )
    {
    if( aContext && aId.iUid == MAknsControlContext::ETypeId )
        {
        return aId.MakePtr( aContext );
        }

    return TTypeUid::Null();
    } //lint !e1746 SupplyMopObject usual syntax

// -----------------------------------------------------------------------------
// MAknsControlContext::UpdateContext
// -----------------------------------------------------------------------------
//
TInt MAknsControlContext::UpdateContext()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// MAknsControlContext::Reserved2
// -----------------------------------------------------------------------------
//
TInt MAknsControlContext::Reserved2()
    {
    return 0;
    }

//  End of File

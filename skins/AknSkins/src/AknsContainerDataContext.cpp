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
* Description:  Data context suitable for containers.
*
*/


// INCLUDE FILES
#include <e32base.h>

#include "AknsContainerDataContext.h"
#include <AknsUtils.h>
#include <AknsSkinInstance.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsContainerDataContext::CAknsContainerDataContext
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsContainerDataContext::CAknsContainerDataContext()
    {
    }

// -----------------------------------------------------------------------------
// CAknsContainerDataContext::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
CAknsContainerDataContext* CAknsContainerDataContext::NewL()
    {
    CAknsContainerDataContext* self = new (ELeave) CAknsContainerDataContext;
    return self;
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsContainerDataContext::~CAknsContainerDataContext()
    {
    MAknsSkinInstance* skin = AknsUtils::SkinInstance();
    if( !skin )
        {
        return;
        }

    TInt n;

    while( (n=iIDArray.Count()) > 0 )
        {
        skin->RootDataContext()->ReleaseItem( iIDArray[n-1] );
        iIDArray.Remove( n-1 );
        }

    iIDArray.Close();
    }

// -----------------------------------------------------------------------------
// CAknsContainerDataContext::ReserveItemL()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsContainerDataContext::ReserveItemL( const TAknsItemID& aID )
    {
    MAknsSkinInstance* skin = AknsUtils::SkinInstance();
    if( !skin )
        {
        return;
        }

    if( iIDArray.FindInOrder( aID, TAknsItemID::LinearOrder ) == KErrNotFound )
        {
        skin->RootDataContext()->ReserveItemL( aID );
        User::LeaveIfError(
            iIDArray.InsertInOrder( aID, TAknsItemID::LinearOrder ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknsContainerDataContext::ReleaseItem()
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsContainerDataContext::ReleaseItem( const TAknsItemID& /*aID*/ )
    {
    }

//  End of File

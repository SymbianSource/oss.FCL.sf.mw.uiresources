/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   
*
*/



// INCLUDE FILES

#include <e32std.h>

#include "AknIconFileNameItem.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconFileNameItem::CAknIconFileNameItem()
    {
    }

CAknIconFileNameItem::CAknIconFileNameItem( const TDesC& aFileName )
    {
    // This constructor is used when the object is instantiated in stack,
    // so CBase's zero initialization is not done.
    Mem::FillZ( this, sizeof( CAknIconFileNameItem ) );
    iFileNameRef = &aFileName;    
    }

CAknIconFileNameItem::~CAknIconFileNameItem()
    {
    delete iFileName;
    }

CAknIconFileNameItem* CAknIconFileNameItem::NewL( const TDesC& aFileName )
    {
    CAknIconFileNameItem* item = new( ELeave ) CAknIconFileNameItem;
    CleanupStack::PushL( item );
    item->ConstructL( aFileName );
    CleanupStack::Pop();
    return item;
    }

void CAknIconFileNameItem::ConstructL( const TDesC& aFileName )
    {
    iFileName = aFileName.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknIconFileNameItem::LinearOrder
// -----------------------------------------------------------------------------
//
TInt CAknIconFileNameItem::LinearOrder(
    const CAknIconFileNameItem& aFirst,
    const CAknIconFileNameItem& aSecond )
    {
    const TDesC* firstFileName = aFirst.iFileNameRef ?
        aFirst.iFileNameRef : aFirst.iFileName;

    const TDesC* secondFileName = aSecond.iFileNameRef ?
        aSecond.iFileNameRef : aSecond.iFileName;

    return firstFileName->CompareF( *secondFileName );
    }

//  End of File  

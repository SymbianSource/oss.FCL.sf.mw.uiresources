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

#include "AknIconDataItem.h"
#include "AknIconSrvDef.h"
#include "AknIconFileNameCache.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconDataItem::CAknIconDataItem()
    {
    }

CAknIconDataItem::CAknIconDataItem( const TAknIconParams& aParams )
    {
    // This constructor is used when the object is instantiated in stack,
    // so CBase's zero initialization is not done.
    Mem::FillZ( this, sizeof( CAknIconDataItem ) );
    iFileNameRef = &aParams.iFileName;
    iIconId = aParams.iBitmapId;
    iAppIcon = aParams.iAppIcon;
    }

CAknIconDataItem::~CAknIconDataItem()
    {
    }

CAknIconDataItem* CAknIconDataItem::NewL( const TAknIconParams& aParams,
                                          CAknIconFileNameCache& aFileNameCache )
    {
    CAknIconDataItem* item = new( ELeave ) CAknIconDataItem;
    CleanupStack::PushL( item );
    item->ConstructL( aParams, aFileNameCache );
    CleanupStack::Pop();
    return item;
    }

void CAknIconDataItem::ConstructL( const TAknIconParams& aParams,
                                   CAknIconFileNameCache& aFileNameCache )
    {
    // cache icon file name        
    iFileName = aFileNameCache.CacheIconFileNameL(aParams.iFileName);     
    iIconId = aParams.iBitmapId;
    iUserCount = 1;
    iAppIcon = aParams.iAppIcon;
    }

#ifdef __WINSCW__            
#pragma warning (disable:4706) // assignment within conditional expression
#else
#pragma diag_suppress 1293
#pragma warning (disable:1293)
#endif

// -----------------------------------------------------------------------------
// CAknIconDataItem::LinearOrder
// -----------------------------------------------------------------------------
//
TInt CAknIconDataItem::LinearOrder(
    const CAknIconDataItem& aFirst,
    const CAknIconDataItem& aSecond )
    {
    TInt result;

    if ( !(result = aFirst.iIconId - aSecond.iIconId) )
        {
        const TDesC* firstFileName = aFirst.iFileNameRef ?
            aFirst.iFileNameRef : aFirst.iFileName;

        const TDesC* secondFileName = aSecond.iFileNameRef ?
            aSecond.iFileNameRef : aSecond.iFileName;

        result = firstFileName->CompareF( *secondFileName );
        if ( ! result )
            {
            result = aFirst.iAppIcon ^ aSecond.iAppIcon;
            }
        }

    return result;
    }

#pragma warning (default:4706)

// -----------------------------------------------------------------------------
// CAknIconDataItem::GetInfo
// -----------------------------------------------------------------------------
//
void CAknIconDataItem::GetInfo( TAknIconParams& aInfo ) const
    {
    // Note that '? :' statement does NOT work here,
    // because iFileNameRef and iFileName are different types of pointers!!!
    if ( iFileNameRef )
        {
        aInfo.iFileName = *iFileNameRef;
        }
    else
        {
        aInfo.iFileName = *iFileName;
        }

    aInfo.iBitmapId = iIconId;
    }

//  End of File  

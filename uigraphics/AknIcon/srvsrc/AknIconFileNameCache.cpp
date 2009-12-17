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
#include "AknIconFileNameCache.h"
#include "AknIconFileNameItem.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconFileNameCache::CAknIconFileNameCache()
    {
    }

CAknIconFileNameCache::~CAknIconFileNameCache()
    {
    iFileNameItems.ResetAndDestroy();
    }

CAknIconFileNameCache* CAknIconFileNameCache::NewL()
    {
    return new( ELeave ) CAknIconFileNameCache;
    }
    
// -----------------------------------------------------------------------------
// CAknIconFileNameCache::CacheIconFileNameL
// -----------------------------------------------------------------------------
//
HBufC* CAknIconFileNameCache::CacheIconFileNameL( const TDesC& aFileName )
    {
    HBufC* retFileName = GetIconFileName(aFileName);
    if (!retFileName)
        {
        retFileName = StoreIconFileNameL(aFileName);
        } 
    return retFileName;
    }

    
// -----------------------------------------------------------------------------
// CAknIconFileNameCache::GetIconFileName
// -----------------------------------------------------------------------------
//
HBufC* CAknIconFileNameCache::GetIconFileName( const TDesC& aFileName ) const
    {
    HBufC* retFileName = NULL;
    // Compare item. Can be instantiated in stack with this constructor.
    CAknIconFileNameItem compareItem( aFileName );

    TInt index = iFileNameItems.FindInOrder( 
        &compareItem, CAknIconFileNameItem::LinearOrder );

    if ( index >= 0 )
        {
        retFileName = iFileNameItems[index]->iFileName;
        }        
    return retFileName;
    }
       
// -----------------------------------------------------------------------------
// CAknIconFileNameCache::StoreIconFileNameL
// -----------------------------------------------------------------------------
//
HBufC* CAknIconFileNameCache::StoreIconFileNameL( const TDesC& aFileName )
    {
    CAknIconFileNameItem* fileNameItem = CAknIconFileNameItem::NewL(aFileName);
    CleanupStack::PushL( fileNameItem );    
    User::LeaveIfError( iFileNameItems.InsertInOrder(
        fileNameItem, CAknIconFileNameItem::LinearOrder ) );
    CleanupStack::Pop(fileNameItem);   
    return fileNameItem->iFileName;
    }    

//  End of File  

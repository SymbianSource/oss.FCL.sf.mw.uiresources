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
#include <mifconvdefs.h>
#include "AknIconDataPreserver.h"
#include "AknIconFormatHandlerFactory.h"
#include "AknIconFormatHandler.h"
#include "AknIconDataItem.h"
#include "AknIconSrvDef.h"
#include "AknIconSrv.h"
#include "AknIconSrvIconItem.h"
#include "AknIconLoader.h"
#include "AknIconSrvPanic.h"
#include "AknIconSrvUtils.h"
#include "AknIconPanic.h"


// CONSTANTS
const TInt KIconDataItemGranularity = 1;

// ================= MEMBER FUNCTIONS ==========================================

CAknIconDataPreserver::CAknIconDataPreserver( CAknIconServer& aServer ) : 
    iServer( aServer ),
    iItems( KIconDataItemGranularity )
    {
    }

CAknIconDataPreserver::~CAknIconDataPreserver()
    {
    iItems.ResetAndDestroy();
    }

CAknIconDataPreserver* CAknIconDataPreserver::NewL( CAknIconServer& aServer )
    {
    return new( ELeave ) CAknIconDataPreserver( aServer );
    }

// -----------------------------------------------------------------------------
// CAknIconDataPreserver::CreateIconL
// -----------------------------------------------------------------------------
//
CAknIconSrvIconItem* CAknIconDataPreserver::CreateIconL(
    const TAknIconParams& aParams )
    {
    CAknIconSrvIconItem* iconItem = NULL;

    // Can be instantiated in stack with this constructor.
    CAknIconDataItem compareItem( aParams );

    TInt index = iItems.FindInOrder( 
        &compareItem, CAknIconDataItem::LinearOrder );

    if ( index >= 0 )
        {
        CFbsBitmap* bitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( bitmap );

        CFbsBitmap* mask = NULL;

        if ( aParams.iMaskId >= 0 )
            {
            mask = new (ELeave) CFbsBitmap;
            CleanupStack::PushL( mask );
            }

        iHandler->UsePreparedIconL( iItems[index]->iHandle );

        TAknContentDimensions dimensions = AknIconSrvUtils::RenderPreparedIconL(
            *iHandler,
            bitmap,
            mask,
            iItems[index]->iBitmapDepth,
            iServer.IconDepth(),
            aParams.iSize,
            (TScaleMode)aParams.iMode,
            aParams.iRotationAngle, aParams.iColor, aParams.iAppIcon );

        iconItem = CAknIconSrvIconItem::NewL( aParams,
                                              bitmap,
                                              mask,
                                              dimensions,
                                              iServer.IconFileNameCache() );
        CleanupStack::Pop(); // bitmap
        if ( mask )
            {
            CleanupStack::Pop(); // mask
            }
        }

    return iconItem;
    }

// -----------------------------------------------------------------------------
// CAknIconDataPreserver::PreserveIconDataL
// -----------------------------------------------------------------------------
//
const CAknIconDataItem* CAknIconDataPreserver::PreserveIconDataL(
    const TAknIconParams& aParams )
    {
    CAknIconDataItem* item = NULL;

    CAknIconDataItem compareItem( aParams );

    TInt index = iItems.FindInOrder( 
        &compareItem, CAknIconDataItem::LinearOrder );

    if ( index >= 0 )
        {
        item = iItems[index];
        item->iUserCount++;
        }
    else
        {
        CAknIconLoader* loader;
        TPtrC8 iconData = iServer.InitIconDataAndHandlerLC(
            aParams, loader, iHandler );
        
        // Do not perform preserving for NVG as 
        // NVG does not need preserving data
        if (loader->IconTypeL( aParams.iBitmapId ) == EIconFormatNVG )
            {
            CleanupStack::PopAndDestroy(); // InitIconDataAndHandlerLC
            User::Leave( KErrGeneral );
            }

        item = CAknIconDataItem::NewL( aParams, iServer.IconFileNameCache() );
        CleanupStack::PushL( item );

        // Makes sure that the icon loader is released when required.
        CleanupStack::PushL( 
            TCleanupItem( CAknIconServer::CleanupIconLoader, &iServer ) );



        item->iBitmapDepth = (TDisplayMode)loader->IconDepthL( aParams.iBitmapId );
        item->iMaskDepth = (TDisplayMode)loader->MaskDepthL( aParams.iBitmapId );

        iHandler->PrepareIconL( iconData, item->iHandle );

        // CleanupIconLoader, InitIconDataAndHandlerLC
        CleanupStack::PopAndDestroy(); // CleanupIconLoader, 

        User::LeaveIfError( iItems.InsertInOrder(
            item, CAknIconDataItem::LinearOrder ) );

        CleanupStack::Pop(); // item
        CleanupStack::PopAndDestroy(); // InitIconDataAndHandlerLC
        }

    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconDataPreserver::UnpreserveIconData
// -----------------------------------------------------------------------------
//
const CAknIconDataItem* CAknIconDataPreserver::UnpreserveIconData(
    const TAknIconParams& aParams, TInt aCount, const RMessage2& /*aMessage*/)
    {
    CAknIconDataItem compareItem( aParams );

    TInt index = iItems.FindInOrder( 
        &compareItem, CAknIconDataItem::LinearOrder );

    CAknIconDataItem* item = 0;
    if (index >= 0)
        {
        item = iItems[index];
        item->iUserCount -= aCount;
    
        if ( item->iUserCount == 0 )
            {
            iHandler->UnprepareIcon( item->iHandle );
            delete item;
            item = 0;
            iItems.Remove( index );
            }
        }
    // OK to return also a pointer to a deleted item.
    return item;
    }

// -----------------------------------------------------------------------------
// CAknIconDataPreserver::GetContentDimensionsL
// -----------------------------------------------------------------------------
//
void CAknIconDataPreserver::GetContentDimensionsL( 
    const TAknIconParams& aParams,
    TAknContentDimensions& aContentDimensions )
    {
    CAknIconDataItem compareItem( aParams );

    TInt index = iItems.FindInOrder( 
        &compareItem, CAknIconDataItem::LinearOrder );

    if ( index >= 0 )
        {
        iHandler->UsePreparedIconL( iItems[index]->iHandle );
        iHandler->GetContentDimensionsL( aContentDimensions );
        }
    else
        {
        CAknIconLoader* loader;
        TPtrC8 iconData = iServer.InitIconDataAndHandlerLC(
            aParams, loader, iHandler );

        TInt handle;
        iHandler->PrepareIconL( iconData, handle );
        TRAPD( err,
            {
            iHandler->UsePreparedIconL( handle );
            iHandler->GetContentDimensionsL( aContentDimensions );
            } );
        iHandler->UnprepareIcon( handle );
        User::LeaveIfError( err );
        CleanupStack::PopAndDestroy(); // InitIconDataAndHandlerLC
        }
    }

//  End of File  

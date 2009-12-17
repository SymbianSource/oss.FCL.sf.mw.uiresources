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
#include <fbs.h>
#include "AknIconSrvIconItem.h"
#include "AknIconSrv.h"
#include "AknIconPanic.h"
#include "AknIconSrvDef.h"
#include "AknIconFileNameCache.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconSrvIconItem::CAknIconSrvIconItem()
    {
    }

CAknIconSrvIconItem::CAknIconSrvIconItem( const TAknIconParams& aParams )
    {
    // This constructor is used when the object is instantiated in stack,
    // so CBase's zero initialization is not done.
    Mem::FillZ( this, sizeof( CAknIconSrvIconItem ) );
    iFileNameRef = &aParams.iFileName;
    iBitmapId = (TInt16)aParams.iBitmapId;
    iMaskId = (TInt16)aParams.iMaskId;
    iSize = aParams.iSize;
    iModeAndFlags = aParams.iMode;
    iRotationAngle = aParams.iRotationAngle;
    iColor = aParams.iColor;
    iAppIcon = aParams.iAppIcon;
    if (aParams.IsCompressionDisabled())
        {
        DisableCompression();
        }
    iPrecacheItem = EFalse;
    }

CAknIconSrvIconItem::~CAknIconSrvIconItem()
    {   
    delete iBitmap;
    delete iMask;
    }

CAknIconSrvIconItem* CAknIconSrvIconItem::NewL(
    const TAknIconParams& aParams,
    CFbsBitmap* aBitmap,
    CFbsBitmap* aMask,
    const TAknContentDimensions& aDimensions,
    CAknIconFileNameCache& aFileNameCache )
    {
    CAknIconSrvIconItem* item = new( ELeave ) CAknIconSrvIconItem;
    CleanupStack::PushL( item );
    item->ConstructL( aParams, aBitmap, aMask, aDimensions, aFileNameCache );
    CleanupStack::Pop();
    return item;
    }

void CAknIconSrvIconItem::ConstructL(
    const TAknIconParams& aParams,
    CFbsBitmap* aBitmap,
    CFbsBitmap* aMask,
    const TAknContentDimensions& aDimensions,
    CAknIconFileNameCache& aFileNameCache )
    {
    // cache icon file name        
    iFileName = aFileNameCache.CacheIconFileNameL(aParams.iFileName); 

    iBitmapId = (TInt16)aParams.iBitmapId;
    iMaskId = (TInt16)aParams.iMaskId;
    iSize = aParams.iSize;
    iModeAndFlags = aParams.iMode;
    iRotationAngle = aParams.iRotationAngle;

    iBitmap = aBitmap;
    iMask = aMask;

    iUserCount = ( iMaskId >= 0 ? 2 : 1 );
    iColor = KColorNotDefined;
    // Dimensions are stored here so that there is no need to query them from
    // rasterizer any more, which is potentially slow.
    iDimensions = aDimensions;
    iAppIcon = aParams.iAppIcon;
    if (aParams.IsCompressionDisabled())
        {
        DisableCompression();
        }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::LinearOrder
// -----------------------------------------------------------------------------
//
#ifdef __WINSCW__            
#pragma warning (disable:4706) // assignment within conditional expression
#else
#pragma diag_suppress 1293
#pragma warning (disable:1293)
#endif
TInt CAknIconSrvIconItem::LinearOrder(
    const CAknIconSrvIconItem& aFirst,
    const CAknIconSrvIconItem& aSecond )
    {
    TInt result;

    if ( !(result = aFirst.iBitmapId - aSecond.iBitmapId) &&
         !(result = aFirst.iMaskId - aSecond.iMaskId) &&
         !(result = aFirst.iSize.iWidth - aSecond.iSize.iWidth) &&
         !(result = aFirst.iSize.iHeight - aSecond.iSize.iHeight) )
        {
        TInt firstMode = aFirst.iModeAndFlags & 0xffff;
        TInt secondMode = aSecond.iModeAndFlags & 0xffff;

        if ( !(result = firstMode - secondMode) )
            {
            const TDesC* firstFileName = aFirst.iFileNameRef ?
                aFirst.iFileNameRef : aFirst.iFileName;

            const TDesC* secondFileName = aSecond.iFileNameRef ?
                aSecond.iFileNameRef : aSecond.iFileName;

            if ( !(result = firstFileName->CompareF( *secondFileName )) )
                {
                if ( !(result = aFirst.iRotationAngle - aSecond.iRotationAngle) )
                    {          
                        if ( !(result = aFirst.iColor.Internal() - aSecond.iColor.Internal()) )                        
                        {
                        result = (aFirst.iModeAndFlags & EFlagDisableCompression) -
                                 (aSecond.iModeAndFlags & EFlagDisableCompression);
                        // checking if its application icon          
                        if ( !result )         
                            {
                            result = aFirst.iAppIcon ^ aSecond.iAppIcon;
                            }
                        }                             
                    }
                }
            }
        }

    return result;
    }

#pragma warning (default:4706)

// -----------------------------------------------------------------------------
// CAknIconSrvIconItem::GetInfo
// -----------------------------------------------------------------------------
//
void CAknIconSrvIconItem::GetInfo( TAknIconParams& aParams ) const
    {
    // Icon item got the file name as a reference
    if ( iFileNameRef )
        {
        aParams.iFileName = *iFileNameRef;
        }
    // Icon item owns the file name
    else
        {
        aParams.iFileName = *iFileName;
        }

    aParams.iBitmapId = iBitmapId;
    aParams.iMaskId = iMaskId;
    aParams.iSize = iSize;
    aParams.iMode = iModeAndFlags & 0xffff;
    aParams.iRotationAngle = iRotationAngle;
    aParams.iColor = iColor;
    if (IsCompressionDisabled())
        {
        aParams.DisableCompression();
        }
    aParams.iAppIcon = iAppIcon;    
    }

//  End of File  

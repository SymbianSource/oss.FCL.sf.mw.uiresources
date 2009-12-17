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
* Description:  Layered background context item.
*
*/


// INCLUDE FILES
#include <AknsLayeredBackgroundControlContext.h>

#include "AknsBackgroundLayout.h"
#include "AknsDebug.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::CAknsLayeredBackgroundControlContext
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsLayeredBackgroundControlContext::CAknsLayeredBackgroundControlContext() :
    CAknsBasicBackgroundControlContext()
    // CBase initializes: iLayoutArray(NULL), iLayoutArraySize(0)
    {
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsLayeredBackgroundControlContext::ConstructL(
    const TRect& aRect, const TBool aParentAbsolute,
    const TAknsItemID& aImageID, const TInt aNumberOfLayers  )
    {
    CAknsBasicBackgroundControlContext::ConstructL( aRect, aParentAbsolute,
        aImageID );

    TInt arraySize = aNumberOfLayers-1;
    if( arraySize>0 )
        {
        iLayoutArray = new (ELeave) TAknsBackground[ //lint !e119 New operator exists
            static_cast<TUint>(arraySize) ];
        iLayout->iNext = &(iLayoutArray[0]);
        }
    iLayoutArraySize = arraySize;

    for( TInt i = 0; i<arraySize-1; i++ )
        {
        iLayoutArray[i].iNext = &(iLayoutArray[i+1]);
        }
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsLayeredBackgroundControlContext*
    CAknsLayeredBackgroundControlContext::NewL(
    const TAknsItemID& aImageID, const TRect& aRect,
    const TBool aParentAbsolute, const TInt aNumberOfLayers  )
    {
    CAknsLayeredBackgroundControlContext* self =
        new( ELeave ) CAknsLayeredBackgroundControlContext();

    CleanupStack::PushL( self );
    self->ConstructL( aRect, aParentAbsolute, aImageID, aNumberOfLayers );
    CleanupStack::Pop( self );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::~CAknsLayeredBackgroundControlContext
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsLayeredBackgroundControlContext::~CAknsLayeredBackgroundControlContext()
    {
    delete [] iLayoutArray;
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::SetLayerImage
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsLayeredBackgroundControlContext::SetLayerImage(
    const TInt aLayer, const TAknsItemID& aID )
    {
    __ASSERT_DEBUG( (aLayer>=0 && aLayer<=iLayoutArraySize),
        AKNS_DEBUG_PANIC(EAknsDPanicInvalidParameter) );

    if (aLayer < 0 || aLayer>iLayoutArraySize)
        {
        return;
        }

    if( aLayer == 0 )
        {
        iLayout->iImageID = aID;
        }
    else
        {
        iLayoutArray[ aLayer-1 ].iImageID = aID;
        }
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::SetLayerRect
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsLayeredBackgroundControlContext::SetLayerRect(
    const TInt aLayer, const TRect& aRect )
    {
    __ASSERT_DEBUG( (aLayer>=0 && aLayer<=iLayoutArraySize),
        AKNS_DEBUG_PANIC(EAknsDPanicInvalidParameter) );

    if (aLayer < 0 || aLayer>iLayoutArraySize)
        {
        return;
        }

    if( aLayer == 0 )
        {
        iLayout->iRect = aRect;
        }
    else
        {
        iLayoutArray[ aLayer-1 ].iRect = aRect;
        }
    }

// -----------------------------------------------------------------------------
// CAknsLayeredBackgroundControlContext::IsCompatibleWithType
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TBool CAknsLayeredBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
    switch( aType )
        {
        case EAknsControlContextTypeUnknown:
        case EAknsControlContextTypeBasic:
        case EAknsControlContextTypeLayered:
            return ETrue;

#ifdef RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeCombined:
#endif //RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeListBox:
        case EAknsControlContextTypeFrame:
            // EFalse is returned
            break;

        default:
            // EFalse is returned
            break;
        }

    return EFalse;
    }

//  End of File

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
* Description:  Listbox background context item.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <AknsListBoxBackgroundControlContext.h>

#include "AknsBackgroundLayout.h"
#include <AknsUtils.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::CAknsListBoxBackgroundControlContext
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsListBoxBackgroundControlContext::CAknsListBoxBackgroundControlContext() :
    CAknsBasicBackgroundControlContext()
    // CBase initializes: iTiledContext(NULL), iBottomLayout(NULL)
    {
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsListBoxBackgroundControlContext::ConstructL(
    const TRect& aRect, const TBool aParentAbsolute,
    const TAknsItemID& aImageID,
    const TAknsItemID& aTiledBitmapID, const TRect& aTiledRect )
    {
    CAknsBasicBackgroundControlContext::ConstructL( aRect, aParentAbsolute,
        aImageID );

    iTiledLayout = new (ELeave) TAknsBackground;
    iTiledLayout->iRect = aTiledRect;
    iTiledLayout->iAttr.iAttributes = EAknsImageAttributeTileY;
    iTiledLayout->iImageID = aTiledBitmapID;

    iBottomLayout = new (ELeave) TAknsBackground;
    iBottomLayout->iImageID = KAknsIIDNone;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsListBoxBackgroundControlContext::NewL)
EXPORT_C CAknsListBoxBackgroundControlContext*
    CAknsListBoxBackgroundControlContext::NewL(
    const TAknsItemID& aImageID, const TRect& aRect,
    const TBool aParentAbsolute, const TAknsItemID& aTiledBitmapID,
    const TRect& aTiledRect )
    {
    CAknsListBoxBackgroundControlContext* self =
        new( ELeave ) CAknsListBoxBackgroundControlContext();

    CleanupStack::PushL( self );
    self->ConstructL( aRect, aParentAbsolute, aImageID, aTiledBitmapID,
        aTiledRect );
    CleanupStack::Pop( self );

    return self;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::~CAknsListBoxBackgroundControlContext
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsListBoxBackgroundControlContext::~CAknsListBoxBackgroundControlContext()
    {
    delete iTiledLayout;
    delete iBottomLayout;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::SetTiledBitmap
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsListBoxBackgroundControlContext::SetTiledBitmap)
EXPORT_C void CAknsListBoxBackgroundControlContext::SetTiledBitmap(
    const TAknsItemID& aID )
    {
    iTiledLayout->iImageID = aID;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::SetTiledRect
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsListBoxBackgroundControlContext::SetTiledRect)
EXPORT_C void CAknsListBoxBackgroundControlContext::SetTiledRect(
    const TRect& aRect )
    {
    iTiledLayout->iRect = aRect;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::SetBottomBitmap
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsListBoxBackgroundControlContext::SetBottomBitmap)
EXPORT_C void CAknsListBoxBackgroundControlContext::SetBottomBitmap(
    const TAknsItemID& aID )
    {
    iBottomLayout->iImageID = aID;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::SetBottomRect
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsListBoxBackgroundControlContext::SetBottomRect)
EXPORT_C void CAknsListBoxBackgroundControlContext::SetBottomRect(
    const TRect& aRect )
    {
    iBottomLayout->iRect = aRect;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::IsCompatibleWithType
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TBool CAknsListBoxBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
    switch( aType )
        {
        case EAknsControlContextTypeUnknown:
        case EAknsControlContextTypeBasic:
        case EAknsControlContextTypeListBox:
            return ETrue;

#ifdef RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeCombined:
#endif //RD_FULLSCREEN_WALLPAPER
        case EAknsControlContextTypeLayered:
        case EAknsControlContextTypeFrame:
            break;
        }

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsListBoxBackgroundControlContext::UpdateContext
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TInt CAknsListBoxBackgroundControlContext::UpdateContext()
    {
    MAknsSkinInstance* skin = AknsUtils::SkinInstance();
    TBool tileExists( EFalse );
    TBool bottomExists( EFalse );
    if( skin )
        {
        if( skin->GetCachedItemData( iTiledLayout->iImageID ) )
            tileExists = ETrue;
        if( skin->GetCachedItemData( iBottomLayout->iImageID ) )
            bottomExists = ETrue;
        }

    if( tileExists )
        {
        iLayout->iNext = iTiledLayout;
        if( bottomExists )
            {
            iTiledLayout->iNext = iBottomLayout;
            }
        else
            {
            iTiledLayout->iNext = NULL;
            }
        }
    else
        {
        if( bottomExists )
            {
            iLayout->iNext = iBottomLayout;
            }
        else
            {
            iLayout->iNext = NULL;
            }
        }

    return 0;
    }

//  End of File

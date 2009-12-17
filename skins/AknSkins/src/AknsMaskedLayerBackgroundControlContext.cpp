/*
* Copyright (c) 2007-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Layered background control context with mask bitmap.
*
*/

#include "AknsCppPreface.h"
#include "AknsMaskedLayerBackgroundControlContext.h"

#include <AknsUtils.h>
#include "AknsBackgroundLayout.h"
#include "AknsDebug.h"

#include "AknIconUtils.h"
#include <AknsDrawUtils.h>
#include "AknsAppSkinInstance.h"

// ======== MEMBER FUNCTIONS ========
// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::CAknsMaskedLayerBackgroundControlContext
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsMaskedLayerBackgroundControlContext::CAknsMaskedLayerBackgroundControlContext() :
    CAknsLayeredBackgroundControlContext()
    // CBase initializes: iLayoutArray(NULL), iLayoutArraySize(0)
    {
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsMaskedLayerBackgroundControlContext::ConstructL(
    const TRect& aRect, const TBool aParentAbsolute,
    const TAknsItemID& aImageID, const TInt aNumberOfLayers  )
    {
    CAknsLayeredBackgroundControlContext::ConstructL( aRect, aParentAbsolute,
        aImageID, aNumberOfLayers );
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsMaskedLayerBackgroundControlContext::NewL)
EXPORT_C CAknsMaskedLayerBackgroundControlContext*
    CAknsMaskedLayerBackgroundControlContext::NewL(
    const TAknsItemID& aImageID, const TRect& aRect,
    const TBool aParentAbsolute, const TInt aNumberOfLayers  )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    User::Leave( KErrNotSupported );
#endif //RD_FULLSCREEN_WALLPAPER
    CAknsMaskedLayerBackgroundControlContext* self =
        new( ELeave ) CAknsMaskedLayerBackgroundControlContext();

    CleanupStack::PushL( self );
    self->ConstructL( aRect, aParentAbsolute, aImageID, aNumberOfLayers );
    CleanupStack::Pop( self );

    return self;
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsMaskedLayerBackgroundControlContext::~CAknsMaskedLayerBackgroundControlContext()
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return;
#else
    delete iOffScreenDevice;
    delete iOffScreenGc;
    delete iOffScreenBmp;
    delete iLayerMask;
#endif //RD_FULLSCREEN_WALLPAPER
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::SetLayerImage
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsMaskedLayerBackgroundControlContext::SetLayerImage)
EXPORT_C void CAknsMaskedLayerBackgroundControlContext::SetLayerImage(
    const TInt aLayer, const TAknsItemID& aID )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return;
#else
    CAknsLayeredBackgroundControlContext::SetLayerImage(
        aLayer,
        aID );
#endif //RD_FULLSCREEN_WALLPAPER
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::SetLayerRect
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsMaskedLayerBackgroundControlContext::SetLayerRect)
EXPORT_C void CAknsMaskedLayerBackgroundControlContext::SetLayerRect(
    const TInt aLayer, const TRect& aRect )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return;
#else
    CAknsLayeredBackgroundControlContext::SetLayerRect(
        aLayer,
        aRect );
#endif //RD_FULLSCREEN_WALLPAPER
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::SetLayerMaskAndSizeL
// (other items were commented in a header).
// By default layer depth is set to one.
// -----------------------------------------------------------------------------
//
AKNS_EXPORTED_METHOD(CAknsMaskedLayerBackgroundControlContext::SetLayerMaskAndSizeL)
EXPORT_C void CAknsMaskedLayerBackgroundControlContext::SetLayerMaskAndSizeL(
    const TAknsItemID& aIID, const TRect& aMaskRect )
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    User::Leave( KErrNotSupported );
    return;
#else
    if ( iOffScreenDevice )
        {
        delete iOffScreenDevice;
        iOffScreenDevice = NULL;
        }

    if ( iOffScreenGc )
        {
        delete iOffScreenGc;
        iOffScreenGc = NULL;
        }

    if ( iLayerMask )
        {
        delete iLayerMask;
        iLayerMask = NULL;
        }

    if ( iOffScreenBmp )
        {
        delete iOffScreenBmp;
        iOffScreenBmp = NULL;
        }

    // Client did not set mask - previous mask & offscreen bitmap
    // deleted, just return.
    if ( aIID == KAknsIIDNone )
        {
        return;
        }

    // Only do this if layer 0 is actually available.
    CAknsItemData* itemData = NULL;
    MAknsSkinInstance* skinInstance = AknsUtils::SkinInstance();
    if ( skinInstance )
        {        
        TRAP_IGNORE(
            itemData = skinInstance->CreateUncachedItemDataL(
                iLayout->iImageID, EAknsITUnknown ) );
        }

    if ( itemData )
        {
        // Create layer mask item.
        AknsUtils::CreateIconL(AknsUtils::SkinInstance(), aIID, iLayerMask, KNullDesC, 0);
        User::LeaveIfError(AknIconUtils::SetSize(iLayerMask, aMaskRect.Size(),EAspectRatioNotPreserved));

        // Create offscreen bitmap.
        iOffScreenBmp = new (ELeave) CFbsBitmap;
        
        CAknsAppSkinInstance* appInstance = 
                static_cast<CAknsAppSkinInstance*>(skinInstance); 
                
        if ( appInstance && appInstance->AnimBackgroundState() )
            iOffScreenBmp->Create(aMaskRect.Size(), EColor16MA);
        else
            iOffScreenBmp->Create(aMaskRect.Size(), EColor64K);

        iOffScreenDevice = CFbsBitmapDevice::NewL(iOffScreenBmp);
        User::LeaveIfError(iOffScreenDevice->CreateContext(iOffScreenGc));
        TPoint myPoint( 0, 0 );

        // Draw the upper layers to offscreen bitmap.
        AknsDrawUtils::DrawBackground(
            AknsUtils::SkinInstance(),
            this,
            NULL,
            *iOffScreenGc,
            myPoint,
            aMaskRect,
            KAknsDrawParamIgnoreLayerMask );
        }

    if (itemData)
        {
        delete itemData;
        }
#endif //RD_FULLSCREEN_WALLPAPER
    }

// -----------------------------------------------------------------------------
// CAknsMaskedLayerBackgroundControlContext::IsCompatibleWithType
// (other items were commented in a header).
// -----------------------------------------------------------------------------
//
TBool CAknsMaskedLayerBackgroundControlContext::IsCompatibleWithType(
    const TAknsControlContextType aType ) const
    {
#ifndef RD_FULLSCREEN_WALLPAPER
    return EFalse;
#else
    if ( aType == EAknsControlContextTypeMasked )
        {
        return ETrue;
        }
    return EFalse;
#endif //RD_FULLSCREEN_WALLPAPER
    }

// End of file

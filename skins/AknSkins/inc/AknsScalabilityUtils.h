/*
* Copyright (c) 2004-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Internal utility class to handle scalability-related
                 operations.
*
*/


#ifndef AKNSSCALABILITYUTILS_H
#define AKNSSCALABILITYUTILS_H

// INCLUDES
#include <AknsItemData.h>
#include "AknsAppSkinInstance.h"

// FORWARD DECLARATIONS
class MAknsSkinInstance;
class CBitmapContext;
class CAknsItemDef;
class CAknsRlMasterLayout;
class TAknsBackground;

// CLASS DECLARATION

/**
* Internal utility class for scalability-related operations.
*
* @since 2.8
*
* @internal
*/
NONSHARABLE_CLASS(AknsScalabilityUtils)
    {

    public: // New methods

        /**
        * Performs scalability-aware drawing of a bitmap.
        * @internal
        * @since 2.8
        */
        static TBool DrawPartialCachedImage(
            MAknsSkinInstance* aSkin, CBitmapContext& aGc,
            const TRect& aTrgLayoutRect, const TRect& aTrgDrawRect,
            CAknsImageItemData* aImgData, const TAknsItemID& aIID,
            const TAknsImageAttributeData* aAttr,
            const TInt aDrawParam );

        /**
        * Processes (and re-ceates if necessary) an item def.
        *
        * @internal
        *
        * @since 2.8
        */
        static CAknsItemDef* ProcessDefL( CAknsItemDef* aDef );

        /**
        * Converts the given effect queue item to a rendered bitmap
        * item, if possible.
        *
        * @internal
        *
        * @since 2.8
        *
        * @return Cached pointer to the bitmap item data, or @c NULL.
        *   No ownership is transferred.
        */
        static CAknsImageItemData* ConvertToBitmap(
            CAknsAppSkinInstance* aSkin, const TAknsItemID aIID,
            const TAknsBackground* aLayout );

        /**
        * Gets the concrete item ID of a scalable item:
        *
        * @since 2.8
        *
        * @internal
        */
        static TAknsItemID ConcreteEffectQueue( CAknsAppSkinInstance* aSkin,
            const TAknsItemID& aIID );

        /**
        * Gets the backward-compatibility adjusted skin color.
        *
        * @since 2.8
        *
        * @internal
        *
        * @return @c ETrue if color assigned, @c EFalse otherwise.
        */
        static TBool GetBackwardCompatibilityColor(
            MAknsSkinInstance* aInstance, TRgb& aRgb,
            const TAknsItemID& aID, const TInt aIndex );

    protected: // New methods

       /**
        * Renders the given item recursively, placing the resulting
        * bitmaps back to the cached content.
        *
        * @internal
        *
        * @since 2.8
        *
        * @return Rendered bitmap, no ownership transferred.
        */
        static CAknsImageItemData* RecursiveCacheRenderL(
            CAknsAppSkinInstance* aSkin,
            const TAknsItemID aIID, const TInt aLayoutType,
            CAknsRlMasterLayout& aLayoutMaster,
            const TSize& aLayoutSize, TRect& aRectOut, TBool& aMorphingOut,
            TBool& aEmpty );
        static CFbsBitmap *LoadBitmapFromSkinId(
            MAknsSkinInstance* aInstance,
            const TAknsItemID &aID,
            const TSize &size);

    private: // Construction and destruction

        AknsScalabilityUtils();
        ~AknsScalabilityUtils();

    };

#endif // AKNSSCALABILITYUTILS_H

// End of File

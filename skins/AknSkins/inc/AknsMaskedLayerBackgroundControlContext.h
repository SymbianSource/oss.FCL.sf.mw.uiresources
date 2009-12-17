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


#ifndef C_AKNSMASKEDLAYERBACKGROUNDCONTROLCONTEXT_H
#define C_AKNSMASKEDLAYERBACKGROUNDCONTROLCONTEXT_H


//  INCLUDES
#include <AknsLayeredBackgroundControlContext.h>
#include <AknsSkinInstance.h>
#include <bitdev.h>
#include <bitstd.h>

/**
*  Implementation of a control context that provides one or more layered
*  backgrounds with their layout rectangles and has a mask bitmap that
*  allows drawing of the layers as partially transparent.
*
*  The class is not intended for derivation outside the library.
*
*  @lib AknSkins.lib
*
*  @since S60 v5.0
*/
NONSHARABLE_CLASS( CAknsMaskedLayerBackgroundControlContext ) :
    public CAknsLayeredBackgroundControlContext
    {
public:
    /**
    * Two-phased constructor.
    *
    * @param aImageID Item ID of the first background bitmap.
    *
    * @param aRect Rectangle where the first bitmap should be laid out.
    *
    * @param aParentAbsolute ETrue if parent absolute layout should be
    *   used, EFalse otherwise. If a parent absolute layout is used,
    *   the parent position must be set and updated using SetParentPos.
    *
    * @param aNumberOfLayers Total number of layers as an integer.
    *   This must be 1 or more.
    *
    * @return Newly constructed object.
    */
    IMPORT_C static CAknsMaskedLayerBackgroundControlContext* NewL(
        const TAknsItemID& aImageID, const TRect& aRect,
        const TBool aParentAbsolute, const TInt aNumberOfLayers );

    /**
    * Destructor.
    */
    virtual ~CAknsMaskedLayerBackgroundControlContext();

public: // New functions

    /**
    * Sets the item ID of the specified layer.
    *
    * @param aLayer Index of the layer, where 0 is the first one.
    *   The index must be less than aNumberOfLayers given to @c NewL().
    *
    * @param aID Item ID of the image.
    */
    IMPORT_C void SetLayerImage( const TInt aLayer,
        const TAknsItemID& aID );

    /**
    * Sets the layout rectangle of the specified layer.
    *
    * @param aLayer Index of the layer, where 0 is the first one.
    *   The index must be less than aNumberOfLayers given to @c NewL().
    *
    * @param aRect Rectangle where the image should be laid out.
    */
    IMPORT_C void SetLayerRect( const TInt aLayer,
        const TRect& aRect );

    /**
    * Sets layer mask IID and its size. No mask is set, if the zero layer
    * (bottom) does not have image set up.
    *
    * @param aIID Item ID of the mask image. If setting KAknsIIDNone
    *   deletes previously created member data.
    *
    * @param aRect Rectangle where the mask image should be laid out.
    */
    IMPORT_C void SetLayerMaskAndSizeL(const TAknsItemID& aIID, const TRect& aRect );

public: // From MAknsControlContext

    /**
    * @copydoc MAknsControlContext::IsCompatibleWithType
    */
    TBool IsCompatibleWithType( const TAknsControlContextType aType ) const;

protected:

    /**
    * C++ constructor.
    */
    CAknsMaskedLayerBackgroundControlContext();

    /**
    * Symbian 2nd phase constructor.
    */
    void ConstructL( const TRect& aRect, const TBool aParentAbsolute,
        const TAknsItemID& aImageID, const TInt aNumberOfLayers );

protected:  // Data

    /*
    * Layer mask image.
    * Own.
    *
    */
    CFbsBitmap* iLayerMask;

    /*
    * Offscreen bitmap in which are drawn all the layers
    * (without mask).
    * Own.
    *
    */
    CFbsBitmap* iOffScreenBmp;

    /*
    * Offscreen graphics device.
    * Own.
    *
    */
    CFbsBitmapDevice* iOffScreenDevice;

    /*
    * Offscreen bitmap graphics context..
    * Own.
    *
    */
    CFbsBitGc* iOffScreenGc;

    friend class AknsDrawUtils;
    };


#endif // C_AKNSLAYERFRAMEBACKGROUNDCONTROLCONTEXT_H

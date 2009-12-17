/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Provides moving layer(s) functionality.
*
*/


#ifndef AKNSRLEFFECTPLUGINMOVINGLAYERS_H
#define AKNSRLEFFECTPLUGINMOVINGLAYERS_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginMovingLayersUID = 0x1020762D;

// Constants for parameter names
_LIT( KAknsRlEffectMovingLayersAX, "ax" );
_LIT( KAknsRlEffectMovingLayersAY, "ay" );
_LIT( KAknsRlEffectMovingLayersBX, "bx" );
_LIT( KAknsRlEffectMovingLayersBY, "by" );

_LIT( KAknsRlEffectMovingLayersAXY, "axy" );
_LIT( KAknsRlEffectMovingLayersBXY, "bxy" );

// CLASS DECLARATION

/**
* Moving layers can use two input layers. Input layer A is used as a
* background. Input layer B is blended on A using input mask B. Input mask A is
* ignored. The origin of both input layers can be moved (results in tiling,
* seamless layer textures recommended).
*
* It is also possible to use input layer A only.
*
* @since 3.0
*/
class CAknsRlEffectPluginMovingLayers:
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 3.0
        */
        CAknsRlEffectPluginMovingLayers();

        /**
        * Destructor.
        *
        * @since 3.0
        */
        virtual ~CAknsRlEffectPluginMovingLayers();

    public: // Implementation of CAknsEffectPlugin

       TUid EffectUid() const;
       MAknsRlEffect* Effect( const TInt aInterface );

    public: // Implementation of MAknsRlEffect

        void InitializeL();
        void Release();

        void ActivateL( MAknsRlEffectContext* aContext );
        void Deactivate();

        /**
        * Accepted named parameters:
        *
        * - "ax", integer, coordinate x of A's origin
        * - "ay", integer, coordinate y of A's origin
        * - "bx", integer, coordinate x of B's origin
        * - "by", integer, coordinate y of B's origin
        *
        * Coordinate (ax, ay) defines the origin of input layer A on output.
        * Coordinate (bx, by) defines the origin of input layer B on output.
        * Coordinates are in pixels and allowed range is [MIN_INT, MAX_INT].
        *
        * Alternatively you can use the next parameters:
        * - "axy", descriptor, point (x, y) of A's origin
        * - "bxy", descriptor, point (x, y) of B's origin
        *
        * Descriptor size must be at least 2, extra elements are ignored. First
        * element is coordinate x, second element is coordinate y. Coordinates
        * are in pixels and allowed range is full 16-bit ingeter.
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        * - EGray256 -> EGray256
        *
        * Masks are optional, mask A is always ignored. Target layer A is
        * required. Target layer B is optional. Output layer mask is optional,
        * cleared to white if exists.
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        TInt Render( const TAknsRlRenderOpParam& aParam );

    private:
        TInt CreateTempBitmap( const CFbsBitmap& aBitmap );
        void DeleteTempBitmap();

    private:

        MAknsRlEffectContext* iContext;

        TInt iAx;
        TInt iAy;
        TInt iBx;
        TInt iBy;

        /**
        * Temporary bitmap for cases where the target layer is the input layer
        * -> input layer must be stored to a temporary bitmap.
        */
        CFbsBitmap* iTempBitmap;
        CFbsBitmapDevice* iTempDevice;
        CFbsBitGc* iTempContext;
    };

#endif // AKNSRLEFFECTPLUGINMOVINGLAYERS_H

// End of File


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
* Description:  Bump-mapping for effects.
*
*/


#ifndef AKNSRLEFFECTPLUGINBUMPMAP_H
#define AKNSRLEFFECTPLUGINBUMPMAP_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginBumpMapUID = 0x10204ADF;

// Constants for parameter names
_LIT( KAknsRlEffectBumpMapAzimuth,   "a" );
_LIT( KAknsRlEffectBumpMapElevation, "e" );
_LIT( KAknsRlEffectBumpMapDepth,     "d" );

_LIT( KAknsRlEffectBumpMapBlendMode,   "m" );

_LIT( KAknsRlEffectBumpMapBlendFactor, "f" );

// CLASS DECLARATION

/**
* Bump-map combines generic embossing with channel blending, the result is "an
* image bump-mapped with itself". Bump-mapping is done in three phases:
* 1. Grayscaled version of the original image is created.
* 2. The grayscaled image is embossed
* 3. The original image is blended on top of the embossed image (and the result
*    of that is put to the target).
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginBumpMap):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginBumpMap();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginBumpMap();

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
        * - "a", integer, range [0, 360] in degrees, azimuth.
        * - "e", integer, range [0, 180] in degrees, elevation.
        * - "d", integer, > 1, depth
        * - "m", integer, channel blend mode enumeration
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Azimuth:
        * Defines the direction of light used in embossing. The imaginary light
        * is directional and changing azimuth gives the impression of light
        * rotating around the center of the image. Values outside range [0,360]
        * will cause leave.
        *
        * Elevation:
        * Together azimuth and elevation define an imaginary hemishpere (on top
        * of the image). Elevation defines an angle at which the light points
        * at the bitmap above the xy-plane. Elevation value 90 would result in
        * light that comes straight above the image. Values outside range
        * [0,180] will cause leave.
        *
        * Depth:
        * Also known as relief or width45. Increasing the depth will make the
        * embossing effect look deeper. Values <= 0 will cause leave.
        *
        * Blend mode:
        * Blend mode defines the way the original image is rendered atop of the
        * embossed image. See AknsRlEffectPluginChannelBlend.h for more details
        * (no masking is used with bump-mapping).
        *
        * Blend factor:
        * Blend factor controls the resulting opacity of the applied effect.
        * Normal value range is [0, 255] but values outside will also work.
        * - Value 0 will result in the original image.
        * - Value 255 will result in the filtered image.
        * - Values outside range [0, 255] will result in underexposure or
        *   overexposure.
        *
        * The default parameter values are:
        * - "a" = 0
        * - "e" = 34
        * - "d" = 10
        * - "m" = EAknsRlChannelBlendNormal
        * - "f" = 255, full filter opacity
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        *
        * Masks are ignored. Target layer and input layer A are both required.
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        TInt Render( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TReal iAzimuth;
        TReal iElevation;
        TInt iDepth;
        TInt iBlendMode;
        TInt iBlendFactor;

        /// Intermediate array for the grayscaled image
        TUint8* iGrayscale;
    };

#endif // AKNSRLEFFECTPLUGINBUMPMAP_H

// End of File


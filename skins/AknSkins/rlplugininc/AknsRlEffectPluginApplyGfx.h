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
* Description:  Effect that applies the given bitmap or SVG icon to the layer.
*
*/


#ifndef AKNSRLEFFECTPLUGINAPPLYGFX_H
#define AKNSRLEFFECTPLUGINAPPLYGFX_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"

/**
* Effect that applies the given bitmap or SVG icon to the layer.
*
* Supported effect parameters:
*  - "f" (graphics) Fully qualified filename and indices of the graphics.
*       Mandatory. Mask index may be -1 if unused. "Mask-only" operations
*       must be done using bitmap index.
*  - "ms" (number, 0..1) Scaling mode. Must be one of the following values:
*       - 0: Stretch preserving aspect ration. Stretch to fill the
*           target area size preserving the aspect ratio. Exceeding parts
*           are cropped.
*       - 1: Stretch. Stretch to target area size.
*       Optional. If missing, default value 1 is used.
*   - "tx" (number, 1..) Horizontal number of tiles. The target area
*       x-axis is divided in the number of tiles specified by this parameter.
*       Optional. If given, enables tiling. Default value is 1.
*   - "ty" (number, 1..) Vertical number of tiles. The target area y-axis
*       is divided in the number of tiles specified by this parameter.
*       Optional. If given, enables tiling. Default value is 1.
*   - "tw" (number, 1..) Width of a tile in pixels.
*       Optional and mutually exclusive with "tx". If given, enables tiling.
*   - "th" (number, 1..) Height of a tile in pixels.
*       Optional and mutually exclusive with "tx". If given, enables tiling.
*   - "alt" (number, 1..)
*       Effect is applied only if aspect ratio of the layer is less than
*       the given value. Number 256 represents aspect ratio 1:1.
*   - "agt" (number, 1..)
*       Effect is applied only if aspect ratio of the layer is greater than
*       the given value.
* Tiling is enabled if at least one parameter indicating tiling is given.
*
* Supported layer combinations:
*  - Input layer A is supported, but optional. Supported only for interface
*   completeness, and does not affect the actual operation.
*  - Output layer RGB, A, and RGBA configurations are supported. If the output
*   layer is previously unused, the usual initialization rules apply.
*   If the output layer already exists, only the specified channels are
*   modified (and the entire layer size is always covered for them).
*   If A is requested and no mask parameter is given, the bitmap is outputted
*   to alpha channel only (to allow mask-only application).
*   If RGBA is requested and no mask parameter is given, the alpha channel
*   is cleared with white color.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginApplyGfx) :
    public CAknsRlEffectPlugin, public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginApplyGfx();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginApplyGfx();

    public: // From CAknsRlEffectPlugin

        /**
        * @copydoc CAknsRlEffectPlugin::EffectUid
        */
        TUid EffectUid() const;

        /**
        * @copydoc CAknsRlEffectPlugin::Effect
        */
        MAknsRlEffect* Effect( const TInt aInterface );

    public: // From MAknsRlEffect

        /**
        * @copydoc MAknsRlEffect::InitializeL
        */
        void InitializeL();

        /**
        * @copydoc MAknsRlEffect::Release
        */
        void Release();

        /**
        * @copydoc MAknsRlEffect::ActivateL
        */
        void ActivateL( MAknsRlEffectContext* aContext );

        /**
        * @copydoc MAknsRlEffect::Deactivate
        */
        void Deactivate();

        /**
        * @copydoc MAknsRlEffect::SetParametersL
        */
        void SetParametersL(
            MAknsRlParameterIterator& aParameters );

        /**
        * @copydoc MAknsRlEffect::GetCapabilities
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        /**
        * @copydoc MAknsRlEffect::Render
        */
        TInt Render( const TAknsRlRenderOpParam& aParam );

    private: // New methods

        void DoRenderL( const TAknsRlRenderOpParam& aParam );

    private: // Data
        MAknsRlEffectContext* iContext;

        HBufC16* iFilename;
        TInt iBmpIndex;
        TInt iMaskIndex;

        TInt iScaleMode;

        TBool iTiled;
        TInt iTilesX;
        TInt iTilesY;
        TInt iTileW;
        TInt iTileH;

        TInt iMaxAspect;
        TInt iMinAspect;
        TInt iGenericImage;
    };

#endif // AKNSRLEFFECTPLUGINAPPLYGFX_H

// End of File

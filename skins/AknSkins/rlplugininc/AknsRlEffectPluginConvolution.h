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
* Description:  Provides convolution operations on images.
*
*/


#ifndef AKNSRLEFFECTPLUGINCONVOLUTION_H
#define AKNSRLEFFECTPLUGINCONVOLUTION_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginConvolutionUID = 0x10204AE2;

// Constants for parameter names
_LIT( KAknsRlEffectConvolutionMode, "m" );

_LIT( KAknsRlEffectConvolutionBlendFactor, "f" );

_LIT( KAknsRlEffectConvolutionGaussianBlurSize, "s" );

// CLASS DECLARATION

/**
* Convolution provides functionality to do convolution operations on images.
* Convolutions are the standard image processing filters e.g. blur, sharpen,
* emboss and so forth. Convolution matrices are fixed and 3x3, you cannot
* change the way convolutions are done.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginConvolution):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public:
        enum TMode
            {
            // Convolution kernel operators
            EModeEdge               = 0,
            EModeBlur               = 1,
            EModeBlurGauss          = 2,
            EModeEmbossSoft         = 3,
            EModeEmbossHard         = 4,
            EModeEnhanceDetail      = 5,
            EModeEnhanceFocus       = 6,
            EModeSoften             = 7,
            EModeSharpen            = 8,
            EModeSharpenMore        = 9,

            // Convolution filter operators (no kernel)
            EModeMean               = 10,
            EModeMedian             = 11,
            EModeDilate             = 12,
            EModeErode              = 13,
            EModeAdjustableGaussian = 14
            };

    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginConvolution();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginConvolution();

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
        * - "m", integer, convolution mode enumeration
        * - "f", integer, blend factor
        * - "s", integer, adjustable gaussian blur size
        *
        * Convolution mode:
        * An enumeration value that defines which convolution should be used.
        * Allowed modes are defined in CAknsRlEffectPluginConvolution::TMode,
        * using any other value will cause leave.
        *
        * Blend factor:
        * Blend factor controls the resulting opacity of the applied effect.
        * Normal value range is [0, 255] but values outside will also work.
        * - Value 0 will result in the original image.
        * - Value 255 will result in the filtered image.
        * - Values outside range [0, 255] will result in underexposure or
        *   overexposure.
        *
        * Gaussian blur size:
        * Size must be between 3 and 55 and only odd sizes are allowed.
        * Greater values will make image more blurred.
        * Default value is 3.
        *
        * The default parameter values are:
        * - "m" = EModeEdge
        * - "f" = 255, full filter opacity
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        * - EGray256 -> EGray256
        *
        * Masks are ignored. Target layer and input layer A are both required.
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        TInt Render( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TInt iMode;
        TInt iBlendFactor;
        TInt iGaussianBlurSize;
        TUint16* iColumnBuffer; // for adjustable gaussian blur
    };

#endif // AKNSRLEFFECTPLUGINCONVOLUTION_H

// End of File

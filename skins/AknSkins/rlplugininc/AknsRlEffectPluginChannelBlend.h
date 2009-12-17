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
* Description:  ChannelBlend provides functionality to combine bitmaps arithmetically.
*
*/


#ifndef AKNSRLEFFECTPLUGINCHANNELBLEND_H
#define AKNSRLEFFECTPLUGINCHANNELBLEND_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginChannelBlendUID = 0x10204AE0;

// Constants for parameter names
_LIT( KAknsRlEffectChannelBlendARed,   "ar" );
_LIT( KAknsRlEffectChannelBlendAGreen, "ag" );
_LIT( KAknsRlEffectChannelBlendABlue,  "ab" );

_LIT( KAknsRlEffectChannelBlendBRed,   "br" );
_LIT( KAknsRlEffectChannelBlendBGreen, "bg" );
_LIT( KAknsRlEffectChannelBlendBBlue,  "bb" );

_LIT( KAknsRlEffectChannelBlendAMask,  "am" );
_LIT( KAknsRlEffectChannelBlendBMask,  "bm" );

_LIT( KAknsRlEffectChannelBlendMode,   "m" );

_LIT( KAknsRlEffectChannelBlendBlendFactor, "f" );

// FORWARD DECLARATIONS
class CAknsRlScanlines;

// CLASS DECLARATION

/**
* ChannelBlend provides functionality to combine bitmaps arithmetically.
* Most image manipulation tools support operations similar to channel
* blending between different layers in images or as brush drawing modes.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginChannelBlend):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public:
        /**
        * Flags for marking set parameters, internally used.
        */
        enum TConstantFlag
            {
            EConstantAColor = 0x01,
            EConstantBColor = 0x02,
            EConstantAMask  = 0x04,
            EConstantBMask  = 0x08
            };

    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginChannelBlend();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginChannelBlend();

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
        * Constant color A:
        * - "ar", integer, channel value for red, truncated to range [0, 255]
        * - "ag", integer, channel value for green, truncated to range [0, 255]
        * - "ab", integer, channel value for blue, truncated to range [0, 255]
        * Constant color B:
        * - "br", integer, channel value for red, truncated to range [0, 255]
        * - "bg", integer, channel value for green, truncated to range [0, 255]
        * - "bb", integer, channel value for blue, truncated to range [0, 255]
        * Constant mask A:
        * - "am", integer, 8-bit shade, truncated to range [0, 255]
        * Constant mask B:
        * - "bm", integer, 8-bit shade, truncated to range [0, 255]
        * Blend mode:
        * - "m", integer (enumeration), one of the ChannelBlend modes
        * Blend factor:
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Constant color A and B:
        * If any of the A color channel values is set the processing will use a
        * constant color for A. The same goes with B. If the processed bitmaps
        * are grayscale the constant colors are converted to grayscale shade.
        *
        * The next input/output combinations are supported:
        *
        *      A | B | T    A | B | T     A | B | T
        *      ---------    ----------    ----------
        *      8 | 8 | 8    16| 16| 16    32| 32| 32
        *      8 | C | 8    16| C | 16    32| C | 32
        *      C | 8 | 8    C | 16| 16    C | 32| 32
        *      C | C | 8    C | C | 16    C | C | 32
        *
        *  A = input layer A, B = input layer B, T = target layer
        *  8 = 8-bit grayscale bitmap (EGray256)
        * 16 = 16-bit RGB bitmap (EColor64K)
        * 32 = 24-bit unpacked RGB bitmap (EColor16MU)
        *  C = 24-bit constant color (converted to 8-bit gray if needed)
        *
        * Constant mask A and B:
        * If constant mask A is set the processing will use constant mask for
        * A. The same goes for mask B. The next mask combinations are
        * supported:
        *
        *      MA|MB
        *      -----
        *      8 | 8       MA = input mask A, MB = input mask B
        *      8 | C       8 = 8-bit grayscale bitmap
        *      C | 8       C = 8-bit constant shade
        *      C | C
        *
        * Blend mode:
        * Defines the used channel blend operation. Possible values are defined
        * in enumeration TAknsRlChannelBlendMode. Using any other value will
        * cause leave.
        *
        * Blend factor:
        * Blend factor controls the resulting opacity of the applied effect.
        * Normal value range is [0, 255] but values outside will also work.
        * - Value 0 will result in the original image.
        * - Value 255 will result in the filtered image.
        * - Values outside range [0, 255] will result in underexposure or
        *   overexposure.
        *
        * Default values:
        * - "ar" = 255
        * - "ag" = 255
        * - "ab" = 255
        * - "br" = 255
        * - "bg" = 255
        * - "bb" = 255
        * - "am" = 255
        * - "bm" = 255
        * - "m"  = EAknsRlChannelBlendNormal
        * - "f" = 255, full filter opacity
        *
        * Note that constant color and mask values are not used by default. You
        * must pass at least one value per constant (yes, a default value for
        * constant mask is actually quite pointless).
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        * - EGray256 -> EGray256
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        /**
        * Using a mask is optional. Masked rendering is done if any mask
        * constant is set or if both input layers have the KAknsRlLayerRGBA bit
        * set.
        *
        * Defining constants allows dropping layers. If color constant and mask
        * constant are both defined the corresponding layer is never queried.
        *
        * If non-masked rendering is used and color constant is defined the
        * corresponding layer is not queried.
        *
        * The target layer may or may not have mask bitmap. If target mask
        * bitmap exists it is filled with white.
        */
        TInt Render( const TAknsRlRenderOpParam& aParam );

        void DoRenderL( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TInt iBlendMode;
        TInt iBlendFactor;

        /**
        * Any constants set during the parameter iteration are flagged here
        * using TConstantFlags.
        */
        TUint8 iFlags;

        TUint8 iARed;
        TUint8 iAGreen;
        TUint8 iABlue;

        TUint8 iBRed;
        TUint8 iBGreen;
        TUint8 iBBlue;

        TUint8 iAMask;
        TUint8 iBMask;

        // Cache for constant scanlines, reduces memory allocations for
        // constant scanlines during animations.
        CAknsRlScanlines* iScans;
    };

#endif // AKNSRLEFFECTPLUGINCHANNELBLEND_H

// End of File

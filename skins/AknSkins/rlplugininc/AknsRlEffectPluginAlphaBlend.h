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
* Description:  Alpha Blend provides functionality to combine masked images with Porter-Duff
*                operations.
*
*/

#ifndef AKNSRLEFFECTPLUGINALPHABLEND_H
#define AKNSRLEFFECTPLUGINALPHABLEND_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginAlphaBlendUID = 0x10204ADD;

// Constants for parameter names
_LIT( KAknsRlEffectAlphaBlendARed,   "ar" );
_LIT( KAknsRlEffectAlphaBlendAGreen, "ag" );
_LIT( KAknsRlEffectAlphaBlendABlue,  "ab" );

_LIT( KAknsRlEffectAlphaBlendBRed,   "br" );
_LIT( KAknsRlEffectAlphaBlendBGreen, "bg" );
_LIT( KAknsRlEffectAlphaBlendBBlue,  "bb" );

_LIT( KAknsRlEffectAlphaBlendAMask,  "am" );
_LIT( KAknsRlEffectAlphaBlendBMask,  "bm" );

_LIT( KAknsRlEffectAlphaBlendMode,   "m" );

// FORWARD DECLARATIONS
class CAknsRlScanlines;

// CLASS DECLARATION

/**
* Alpha Blend provides functionality to combine masked images with Porter-Duff
* operations. The used blend modes follow reference: T. Porter and T. Duff,
* "Compositing Digital Images", SIGGRAPH 84, 253-259.
*
* Blending modes have A, B and Clear been dropped because they are pointless.
* Also the plus mode has not been implemented.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginAlphaBlend):
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
        CAknsRlEffectPluginAlphaBlend();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginAlphaBlend();

    public: // Functions from base classes

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
        * - "m", integer (enumeration), one of the Porter-Duff blend modes
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
        *  C = 24-bit constant color (converted to 8-bit gray if
        *      needed)
        *
        * Constant mask A and B:
        * If constant mask A is set the processing will use constant mask for
        * A. The same goes for mask B. The next mask combinations are
        * supported:
        *
        *      MA|MB
        *      -----
        *      8 | 8       MA = input mask A, MB = input mask B
        *      8 | C       8 = 8-bit grayscale bitmap (EGray256)
        *      C | 8       C = 8-bit constant shade
        *      C | C
        *
        * Blend mode:
        * Defines the used alpha blend operation. Possible values are defined
        * in enumeration TAknsRlAlphaBlendMode. Using any other value will
        * cause leave.
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
        * - "m"  = EAknsRlAlphaBlendAOverB
        *
        * Note that constant color and constant mask values are not used by
        * default. You must pass at least one value per constant (yes, a
        * default value for constant mask is actually quite pointless).
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
        * Defining constants allows dropping layers. If color constant and mask
        * constant are both defined the corresponding layer is never queried.
        * In other cases the layer is queried but defining a constant allows
        * omitting the corresponding bitmap.
        *
        * The target layer may or may not have mask bitmap. If target mask
        * bitmap exists it is filled with white.
        */
        TInt Render( const TAknsRlRenderOpParam& aParam );

        void DoRenderL( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TUint8 iBlendMode;

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

#endif // AKNSRLEFFECTPLUGINALPHABLEND_H
// End of File

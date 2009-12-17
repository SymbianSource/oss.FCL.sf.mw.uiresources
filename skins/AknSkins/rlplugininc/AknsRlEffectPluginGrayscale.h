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
* Description:  Grayscales images.
*
*/


#ifndef AKNSRLEFFECTPLUGINGRAYSCALE_H
#define AKNSRLEFFECTPLUGINGRAYSCALE_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginGrayscaleUID = 0x10204AE3;

// Constants for parameter names
_LIT( KAknsRlEffectGrayscaleGrayMin, "min" );
_LIT( KAknsRlEffectGrayscaleGrayMax, "max" );

_LIT( KAknsRlEffectGrayscaleBlendFactor, "f" );

// CLASS DECLARATION

/**
* Grayscale provides functionality to grayscaling images.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginGrayscale):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginGrayscale();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginGrayscale();

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
        * - "min", integer, lower end of the scale range
        * - "max", integer, higher end of the scale range
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Min and Max:
        * The resulting gray shades will be scaled into range [min, max].  The
        * normal range for min and max is [0, 255] but values outside the range
        * work as expected. Warning: min > max will cause a leave.
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
        * - "min" = 0
        * - "max" = 255
        * - "f" = 255, full filter opacity
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        * - EColor64K -> EGray256
        * - EColor16MU -> EGray256
        *
        * Masks are ignored. Target layer and input layer A are both required.
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        TInt Render( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TInt iGrayMin;
        TInt iGrayMax;
        TInt iBlendFactor;
    };

#endif // AKNSRLEFFECTPLUGINGRAYSCALE_H

// End of File

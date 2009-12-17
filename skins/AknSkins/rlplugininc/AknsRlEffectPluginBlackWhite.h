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
* Description:  Black & White provides functionality to convert bitmaps to black & white.
*
*/


#ifndef AKNSRLEFFECTPLUGINBLACKWHITE_H
#define AKNSRLEFFECTPLUGINBLACKWHITE_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginBlackWhiteUID = 0x10204ADE;

// Constants for parameter names
_LIT( KAknsRlEffectBlackWhiteTreshold,    "t" );
_LIT( KAknsRlEffectBlackWhiteBlendFactor, "f" );

// CLASS DECLARATION

/**
* Black & White provides functionality to convert bitmaps to black & white.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginBlackWhite):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginBlackWhite();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginBlackWhite();

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
        * - "t", integer, range [0, 255], black & white treshold
        * - "f", integer, blend factor
        *
        * Treshold:
        * If pixel intensity value is below the treshold it will be black,
        * otherwise white. Pixel intensity value is calculated by grayscaling
        * the pixel. Normal treshold range is [0,255], values outside range
        * work as expected.
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
        * - "t" = 127
        * - "f" = 255, full filter opacity
        */
        void SetParametersL( MAknsRlParameterIterator& aParameters );

        /**
        * Supported modes:
        * - EColor64K -> EColor64K
        * - EColor16MU -> EColor16MU
        *
        * - EColor64K -> EGray256
        * - EColor16MU -> EGray256
        *
        * - EGray256 -> EColor64K
        * - EGray256 -> EColor16MU
        * - EGray256 -> EGray256
        *
        * Masks are ignored. Target layer and input layer A are both required.
        */
        void GetCapabilities( TAknsRlEffectCaps& aCaps );

        TInt Render( const TAknsRlRenderOpParam& aParam );

    private:

        MAknsRlEffectContext* iContext;

        TInt iTreshold;
        TInt iBlend;
    };

#endif // AKNSRLEFFECTPLUGINBLACKWHITE_H

// End of File

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
* Description:  Adds grayscale noise to bitmap image.
*
*/


#ifndef AKNSRLEFFECTPLUGINNOISE_H
#define AKNSRLEFFECTPLUGINNOISE_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginNoiseUID = 0x10204AE5;

// Constants for parameter names
_LIT( KAknsRlEffectNoiseSeed, "s" );
_LIT( KAknsRlEffectNoiseIntensity, "i" );

// CLASS DECLARATION

/**
* Provides functionality to add grayscale noise to bitmap image. The Symbian
* pseudo-random generator is used for generating the noise.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginNoise):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginNoise();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginNoise();

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
        * - "s", integer, noise seed
        * - "i", integer, noise intensity
        *
        * Noise seed:
        * The seed passed to random number generator.
        *
        * Noise intensity:
        * Determines the strength of the noise added to the image. With
        * intensity 0 the result will be the original image. The more the value
        * differs from zero the stronger the noise effect will be. Normal range
        * is [0, 255] but values outside the range work.
        *
        * The default parameter values are:
        * - "s" = 0
        * - "i" = 127
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

        TInt iSeed;
        TInt iIntensity;
    };

#endif // AKNSRLEFFECTPLUGINNOISE_H

// End of File

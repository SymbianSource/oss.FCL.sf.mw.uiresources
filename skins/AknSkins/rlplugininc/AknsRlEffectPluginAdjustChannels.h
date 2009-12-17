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
* Description:  Handles channel adjustments.
*
*/


#ifndef AKNSRLEFFECTPLUGINADJUSTCHANNELS_H
#define AKNSRLEFFECTPLUGINADJUSTCHANNELS_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginAdjustChannelsUID = 0x10204ADC;

// Constants for channel sources
const TInt KAknsRlEffectAdjustChannelsRed   = 0;
const TInt KAknsRlEffectAdjustChannelsGreen = 1;
const TInt KAknsRlEffectAdjustChannelsBlue  = 2;

// Constants for parameter names
_LIT( KAknsRlEffectAdjustChannelsSourceRed,   "r" );
_LIT( KAknsRlEffectAdjustChannelsSourceGreen, "g" );
_LIT( KAknsRlEffectAdjustChannelsSourceBlue,  "b" );

_LIT( KAknsRlEffectAdjustChannelsFactorRed,   "fr" );
_LIT( KAknsRlEffectAdjustChannelsFactorGreen, "fg" );
_LIT( KAknsRlEffectAdjustChannelsFactorBlue,  "fb" );

_LIT( KAknsRlEffectAdjustChannelsBlendFactor, "f" );

// CLASS DECLARATION

/**
* Adjust channels provides functionality to scale and reconfigure color
* channels on a bitmap image. For example the next operations are possible:
*  - reordering color channels (e.g. [r,g,b] -> [g,r,b])
*  - dropping color channels (e.g. [r,g,b] -> [r,g,r])
*  - scaling color channels (e.g. [r,g,b] -> [ 0.5 * r, 0.3 * g, 0.1 * b])
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginAdjustChannels):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginAdjustChannels();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginAdjustChannels();

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
        * Source channel:
        * - "r", integer, range [0, 2], red source channel.
        * - "g", integer, range [0, 2], green source channel.
        * - "b", integer, range [0, 2], blue source channel.
        * Channel factor:
        * - "fr", integer, red factor, scales the red channel.
        * - "fg", integer, green factor, scales the green channel.
        * - "fb", integer, blue factor, scales the blue channel.
        * Blend factor:
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Source channel:
        * Source channel parameters define the source channel for the resulting
        * channel. Sources are defined in range [0,2], use constants
        * KAknsRlEffectAdjustChannels{ Red| Green | Blue }. For example, "r" =
        * 1 would use green channel for the resulting red channel. Values
        * outside range [0,2] will cause leave.
        *
        * Channel factor:
        * Scales the resulting channel by the factor. Factor range [0, 255]
        * equals floating point range [0, 1]. Values outside range [0, 255]
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
        * - "r" = 0, red
        * - "g" = 1, green
        * - "b" = 2, blue
        * - "fr" = 255, resulting red channel not adjusted
        * - "fg" = 255, resulting green channel not adjusted
        * - "fb" = 255, resulting blue channel not adjusted
        * - "f" = 255, full filter opacity
        *
        * With default parameters the filter will basically produce the
        * original image.
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

        TUint8 iSourceRed;
        TUint8 iSourceGreen;
        TUint8 iSourceBlue;

        TInt iFactorRed;
        TInt iFactorGreen;
        TInt iFactorBlue;

        TInt iBlendFactor;
    };

#endif // AKNSRLEFFECTPLUGINADJUSTCHANNELS_H

// End of File

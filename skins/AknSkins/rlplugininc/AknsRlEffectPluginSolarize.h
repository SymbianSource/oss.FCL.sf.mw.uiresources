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
* Description:  Solarize provides functionality to solarize bitmap images on per channel
*                basis.
*
*/


#ifndef AKNSRLEFFECTPLUGINSOLARIZE_H
#define AKNSRLEFFECTPLUGINSOLARIZE_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginSolarizeUID = 0x10204AE7;

// Constants for parameter names
_LIT( KAknsRlEffectSolarizeTreshold, "t" );
_LIT( KAknsRlEffectSolarizeChannels, "c" );
_LIT( KAknsRlEffectSolarizeBlendFactor, "f" );

// CLASS DECLARATION

/**
* Solarize provides functionality to solarize bitmap images on per channel
* basis (e.g. you could solarize red channel only).
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginSolarize):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public:
        /**
        * Constants for constructing the channel bitmask.
        */
        enum TBitmask
            {
            EMaskR = 0x01,
            EMaskG = 0x02,
            EMaskB = 0x04
            };

    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginSolarize();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginSolarize();

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
        * - "t", integer, solarize treshold
        * - "c", integer, selected channels
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Solarize treshold:
        * Channel values above threshold will be inverted, otherwise the
        * original value is used. Normal range for treshold is [0, 255] but
        * values outside range work as expected.
        *
        * Selected channels:
        * A bitmask that defines the solarized channels. The channel bits are:
        * - 001 red
        * - 010 green
        * - 100 blue
        * All combinations are supported. The bitmask can be constructed by
        * orring the TBitmask enumerations. Any extra bit on parameter is
        * ignored. All channel bits are ignored on Gray256 -> Gray256
        * operations
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
        * - "c" = 7 (111, all channels are solarized)
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

        TInt iTreshold;
        TInt iBlendFactor;

        /**
        * Defines which channels are solarized. Values EMaskR, EMaskG
        * and EMaskB orred.
        */
        TUint8 iChannelMask;
    };

#endif // AKNSRLEFFECTPLUGINSOLARIZE_H

// End of File

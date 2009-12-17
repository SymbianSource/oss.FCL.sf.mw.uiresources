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
* Description:  Inverts bitmap channels.
*
*/


#ifndef AKNSRLEFFECTPLUGININVERT_H
#define AKNSRLEFFECTPLUGININVERT_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginInvertUID = 0x10204AE4;

// Constants for parameter names
_LIT( KAknsRlEffectInvertChannels, "c" );

_LIT( KAknsRlEffectInvertBlendFactor, "f" );

// CLASS DECLARATION

/**
* Invert provides functionality for inverting bitmap channels. Inverting can be
* controlled per channel basis (e.g. invert only the red channel).
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginInvert):
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
        CAknsRlEffectPluginInvert();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginInvert();

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
        * - "c", integer, selected channels
        * - "f", integer, normal range [0, 255], blend factor.
        *
        * Selected channels:
        * A bitmask that defines the inverted channels. The channel bits are:
        * - 001 red
        * - 010 green
        * - 100 blue
        * All combinations are supported. The bitmask can be constructed by
        * orring the TBitmask enumerations. Any extra bit on parameter is
        * ignored. Selected channels parameter is ignored on Gray256 -> Gray256
        * operations.
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
        * - "c" = 7 (111, all channels are inverted)
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

        TUint8 iChannelMask;
        TInt iBlendFactor;
    };

#endif // AKNSRLEFFECTPLUGININVERT_H

// End of File

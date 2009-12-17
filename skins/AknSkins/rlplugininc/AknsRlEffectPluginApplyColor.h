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
* Description:  Simple effect that applies the given color to the entire layer.
*
*/


#ifndef AKNSRLEFFECTPLUGINAPPLYCOLOR_H
#define AKNSRLEFFECTPLUGINAPPLYCOLOR_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"

// CLASS DECLARATION

/**
* Simple effect that applies the given color to the entire layer.
*
* Supported effect parameters:
*  - "r" (number, 0..255) Color value for red component.
*  - "g" (number, 0..255) Color value for green component.
*  - "b" (number, 0..255) Color value for blue component.
*  - "i" (number, 0..255) Color index for RGB.
*  - "a" (number, 0..255) Color value for alpha component.
* If at least one of the RGB parameters are given, the others
* are assumed zero.
* If index parameter is given, the result of specifying any RGB
* parameters is undefined.
*
* Supported layer combinations:
*  - No input layers are supported.
*  - Output layer RGB channel is supported, if at least one of parameters
*       "r", "g", "b", or "i" are given.
*  - Output layer alpha channel is supported, if "a" parameter is given.
*       Output alpha channel (and RGBA combination) is also
*       supported if output layer RGB channel is supported. If no "a"
*       parameter is given, the output alpha channel will be unaffected
*       (though intialized to white by the context if unused).
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginApplyColor) :
    public CAknsRlEffectPlugin, public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginApplyColor();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginApplyColor();

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

        TBool iRGBSpecified;
        TBool iAlphaSpecified;
        TRgb iRGBColor;
        TRgb iAlphaColor;
    };

#endif // AKNSRLEFFECTPLUGINAPPLYCOLOR_H

// End of File

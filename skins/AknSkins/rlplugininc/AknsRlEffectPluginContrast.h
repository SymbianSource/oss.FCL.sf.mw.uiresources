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
* Description:  Provides functionality adjust image contrast.
*
*/


#ifndef AKNSRLEFFECTPLUGINCONTRAST_H
#define AKNSRLEFFECTPLUGINCONTRAST_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"
#include <AknsRlEffect.h>

// CONSTANTS

// Effect plugin UID
const TInt KAknsRlEffectPluginContrastUID = 0x10204AE1;

// Constants for parameter names
_LIT( KAknsRlEffectContrastAdjustment, "a" );

// CLASS DECLARATION

/**
* Contrast provides functionality adjust image contrast by blending the
* original image with medium (127) gray image.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPluginContrast):
    public CAknsRlEffectPlugin,
    public MAknsRlEffect
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPluginContrast();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPluginContrast();

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
        * - "a", integer, adjustment value.
        *
        * The normal range of adjustment value is [-255, 255]. Value -255
        * produces medium gray image, value 255 produces fully contrasted
        * image. Values outside range [-255, 255] will result in underexposure
        * and overexposure.
        *
        * The default value is 0. With default value the filter produces the
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

        TInt iAdjustment;
    };

#endif // AKNSRLEFFECTPLUGINCONTRAST_H

// End of File

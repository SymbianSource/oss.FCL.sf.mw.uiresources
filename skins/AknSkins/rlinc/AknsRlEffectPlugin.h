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
* Description:  Base class for concrete plugins.
*
*/


#ifndef AKNSRLEFFECTPLUGIN_H
#define AKNSRLEFFECTPLUGIN_H

//  INCLUDES
#include <e32base.h>
#include <AknsRlEffect.h>

// CONSTANTS

const TInt KAknsRlEffectPluginInterfaceEffect = 0;

// CLASS DECLARATION

/**
* Base class for concrete plugins.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlEffectPlugin) : public CBase
    {
    public: // Constructors and destructor

        /**
        * Default constructor.
        *
        * @since 2.8
        */
        CAknsRlEffectPlugin();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlEffectPlugin();

    public: // New functions

        /**
        * Gets the UID of the effect implemented by this plugin.
        *
        * @return UID of the effect.
        *
        * @since 2.8
        */
        virtual TUid EffectUid() const =0;

        /**
        * Gets a pointer to the effect interface implemented by this plugin.
        *
        * @param aInterface Always @c KAknsRlEffectPluginInterfaceEffect.
        *
        * @return If @c aInterface is @c KAknsRlEffectPluginInterfaceEffect,
        *   pointer to the effect interface. The pointer must be non-null and
        *   valid for the lifetime of the plugin.
        *   If @c aInterface has another value, @c null must be returned.
        */
        virtual MAknsRlEffect* Effect( const TInt aInterface ) =0;
    };

#endif // AKNSRLEFFECTPLUGIN_H

// End of File

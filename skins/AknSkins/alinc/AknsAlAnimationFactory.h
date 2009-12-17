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
* Description:  Animation Factory.
*
*/


#ifndef AKNSALANIMATIONFACTORY_H
#define AKNSALANIMATIONFACTORY_H

// INCLUDES
#include <e32std.h>

// FORWARD DECLARATIONS
class CAknsRlEffectPlugin;
class MAknsAlAnimationValue;
class MAknsAlTimingModel;

// CLASS DECLARATION
/**
* A toolkit class for creating animation related objects (RL effect plugins,
* animation values and timing models).
*
* @since 3.0
*/
class AknsAlAnimationFactory
    {
    public:

        /**
        * Creates a standard effect plugin (RenderLibrary). Ownership is
        * transferred to the caller. Can leave if constructing the plugin
        * fails.
        *
        * @return The created plugin, NULL is returned if there is no plugin
        *         that matches the provided UID.
        */
        IMPORT_C static CAknsRlEffectPlugin* CreateEffectPluginL( TUid aUid );

        /**
        * Creates an animation value. Ownership is transferred to the caller.
        * Can leave if constructing the animation value fails.
        *
        * @return The created animation value, NULL is returned if there is no
        *         value that matches the provided UID.
        */
        IMPORT_C static MAknsAlAnimationValue* CreateAnimationValueL( TUid aUid );

        /**
        * Creates a timing model. Ownership is transferred to the caller.
        * Can leave if constructing the timing model fails.
        *
        * @return The created timing model, NULL is returned if there is no
        *         timing model that matches the provided UID.
        */
        IMPORT_C static MAknsAlTimingModel* CreateTimingModelL( TUid aUid );

    private: // Prohibited constructors and destructor
        // Static class, prohibited.
        AknsAlAnimationFactory();
        // Static class, prohibited.
        ~AknsAlAnimationFactory();
    };

#endif // AKNSALANIMATIONFACTORY_H

// End of File

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
* Description:  Effect pool class.
*
*/


#ifndef AKNSRLINTERNALEFFECTPOOL_H
#define AKNSRLINTERNALEFFECTPOOL_H

//  INCLUDES
#include "AknsRlEffectPlugin.h"

/**
* Internal effect pool class that owns the effect plugins built into the
* library.
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsRlInternalEffectPool) : public CBase
    {
    private: // Constructors and destructor

        /**
        * Default constructor is private.
        *
        * @since 2.8
        */
        CAknsRlInternalEffectPool();

    public: // Constructors and destructor

        /**
        * Static creator.
        *
        * @since 2.8
        */
        static CAknsRlInternalEffectPool* NewL();

        /**
        * Two-phased constructor.
        *
        * @since 2.8
        */
        void ConstructL();

        /**
        * Destructor.
        *
        * @since 2.8
        */
        virtual ~CAknsRlInternalEffectPool();

    public: // New functions

        /**
        * Gets the effect matching the given UID.
        *
        * @param aEffectUid UID of the effect to be retrieved.
        *
        * @return Pointer to the effect instance, or @c null if not found.
        *   The effect is initialized, but not activated.
        *   The caller must not release the effect.
        *
        * @since 2.8
        */
        MAknsRlEffect* GetEffect( const TUid aEffectUid );

    private: // New functions

        void AddInstanceL( CAknsRlEffectPlugin* aPlugin );

    private: // Data

        RPointerArray<CAknsRlEffectPlugin> iEffectArray;

    };

#endif // AKNSRLINTERNALEFFECTPOOL_H

// End of File

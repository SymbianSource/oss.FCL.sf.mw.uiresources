/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines an internal singleton class CAknsAppUiParameters.
*                Encapsulates AppUi-specific skin parameters and acts as a
*                singleton in application scope.
*
*/


#ifndef AKNSAPPUIPARAMETERS_H
#define AKNSAPPUIPARAMETERS_H

//  INCLUDES
#include <coemain.h>

// CLASS DECLARATION

/**
* Singleton class encapsulating AppUi-specific skin parameters
*
* This is an internal class that contains no exported functions.
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
NONSHARABLE_CLASS(CAknsAppUiParameters) : public CCoeStatic
    {
    protected:  // Protected constructor

        /**
        * C++ default constructor.
        *
        * @internal
        */
        CAknsAppUiParameters();

    public: // Constructors and destructors

        /**
        * Creates the singleton.
        *
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static void CreateSingletonL();

        /**
        * Destructor.
        *
        * @internal
        */
        virtual ~CAknsAppUiParameters();

    public: // New methods

        /**
        * Sets the value of the flag indicating whether newly created Avkon
        * controls should use default skin parameters.
        *
        * @param aEnabled Flag value as TBool.
        */
        void SetAvkonSkinEnabled( TBool aEnabled );

        /**
        * Retrieves the value of the flag indicating whether newly created
        * Avkon controls should use default skin parameters.
        *
        * @return Flag value as TBool.
        */
        TBool AvkonSkinEnabled() const;

        /**
        * Sets the value of the flag indicating whether newly created Avkon
        * list controls should use highlight animation.
        *
        * @param aEnabled Flag value as TBool.
        */
        void SetAvkonHighlightAnimationEnabled( TBool aEnabled );

        /**
        * Retrieves the value of the flag indicating whether newly created
        * Avkon list controls should use highlight animation.
        *
        * @return Flag value as TBool.
        */
        TBool AvkonHighlightAnimationEnabled() const;

    protected:  // Data

        /**
        * Flag indicating whether default skin parameters should be used
        * for newly created Avkon controls.
        */
        TBool iAvkonSkinEnabled;

        /**
        * Flag indicating whether highlight animation should be used for newly
        * created Avkon list controls.
        */
        TBool iAvkonHighlightAnimationEnabled;
    };

#endif // AKNSAPPUIPARAMETERS_H

// End of File

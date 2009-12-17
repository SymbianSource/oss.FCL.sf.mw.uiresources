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
* Description:  Interface to skin command iterator.
*
*/


#ifndef AKNSRLCOMMAND_H
#define AKNSRLCOMMAND_H

//  INCLUDES
#include <AknsRlEffect.h>

// CONSTANTS

// DATA TYPES

/**
* Command data structure.
*
* @since 2.8
*/
struct TAknsRlCommandData
    {
    /**
    * UID of the effect that this command executes.
    *
    * @since 2.8
    */
    TUid iEffectUid;

    /**
    * Layer configuration for this command.
    *
    * @since 2.8
    */
    TAknsRlRenderOpParam iLayerConf;

    /**
    * Pointer to the parameter iterator.
    * No ownership is vested in this structure.
    * If null-value is given, no parameters are used.
    *
    * @since 2.8
    */
    MAknsRlParameterIterator* iParamIterator;
    };

// FORWARD DECLARATIONS

// CLASS DECLARATION

/**
* Interface to skin command iterator.
*
* @since 2.8
*/
class MAknsRlCommandIterator
    {
    public: // Constructors and destructor

        /**
        * Destructor for internal use.
        *
        * Destructor is reserved for internal use. Client code usually does
        * not destroy iterators.
        *
        * @since 2.8
        *
        * @internal
        */
        inline virtual ~MAknsRlCommandIterator() {}

    public: // New functions

        /**
        * Checks whether there are more commands available.
        *
        * @return @c ETrue if subsequent @c GetNextL should succeed,
        *   @c EFalse if @c GetNextL must not be called anymore.
        *
        * @since 2.8
        */
        virtual TBool HasNext() =0;

        /**
        * Gets the next command.
        *
        * @return Pointer to the command data. The ownership is not
        *   transferred. The data is guaranteed to be valid until
        *   the next call to @c HasNext, @c NextL, or the iterator is
        *   destroyed.
        *
        * @since 2.8
        */
        virtual const TAknsRlCommandData* NextL() =0;

    public: // Cleanup operation

        /**
        * Cleanup operation for internal use.
        *
        * @since 2.8
        *
        * @internal
        */
        IMPORT_C static void CleanupOperation( TAny* aItem );
    };

#endif // AKNSRLCOMMAND_H

// End of File

/*
* Copyright (c) 2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Static interface class for arbitrary data storage
*
*/


#ifndef AKNSPOINTERSTORE_H
#define AKNSPOINTERSTORE_H

//  INCLUDES
#include <e32def.h>

// CLASS DECLARATION

/**
* Static class that allows storage of arbitrary data with the skin instance 
* singleton.
*
* No ownership is maintained by AknsPointerStore, and thus the client has
* to take care of data construction and destruction.
* No type checking is performed by AknsPointerStore, the client has to
* cast keys and values according to its needs.
*
* @lib AknSkins.lib
*
* @since 2.6
*
* @internal
*/
class AknsPointerStore
    {
    public: // New functions

        /**
        * Stores the given pointer with the given key.
        * No ownership is transferred.
        *
        * @since 2.6
        *
        * @param aKey Key as TAny pointer.
        *
        * @param aValue Value as TAny pointer.
        *
        * @par Exceptions:
        *   If pointer can not be stored, the method leaves with an error code.
        */
        IMPORT_C static void StorePointerL( const TAny* aKey,
            TAny* aValue );

        /**
        * Retrieves the pointer associated with the given key.
        *
        * @since 2.6
        *
        * @param aKey Key as TAny pointer.
        *
        * @return Value associated with the key, or @c NULL if not found.
        */
        IMPORT_C static TAny* RetrievePointer( const TAny* aKey );

        /**
        * Removes the value associated with the given key (if any).
        *
        * @since 2.6
        *
        * @param aKey Key as TAny pointer.
        */
        IMPORT_C static void RemovePointer( const TAny* aKey );

    private: // Prohibited constructors and destructor
        
        // Construction prohibited (static class)
        AknsPointerStore();
        // Destruction prohibited (static class)
        ~AknsPointerStore();
    };

#endif      // AKNSPOINTERSTORE_H
            
// End of File

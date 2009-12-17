/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   
*
*/



#ifndef AKN_ICON_FILE_NAME_CACHE_H
#define AKN_ICON_FILE_NAME_CACHE_H

// INCLUDES
#include <e32base.h>

// FORWARD DECLARATIONS
class CAknIconFileNameItem;

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconFileNameCache) : public CBase
    {
    public: // Constructor and destructor

        static CAknIconFileNameCache* NewL();

        ~CAknIconFileNameCache();

    public: // New functions
    
        /*
        * Caches the icon file name if it is not already in the cache and returns
        * a pointer to the cached file name object.
        *        
        * @param aFileName file name to be cached
        * @return reference to an HBufC object containing a copy of the icon file.
        *         Note: The returned object is owned by the file name cache object and
        *         it is never NULL.
        */        
        HBufC* CacheIconFileNameL( const TDesC& aFileName );   
        

    private: // Private constructors

        CAknIconFileNameCache();

    private: // New functions    
    
        /*
        * Gets cached icon file name if found.
        *
        * @param aFileName file name to be found
        * @return HBufC object containing the icon file name if the file name
        *         is found otherwise NULL
        */        
        HBufC* GetIconFileName( const TDesC& aFileName ) const;   
        
        /*
        * Stores icon file name in icon file name cache.
        * @param aFileName file name to be stored.
        * @return HBufC object of the stored the icon file name.
        */           
        HBufC* StoreIconFileNameL( const TDesC& aFileName );

    private: // Data
    
        // Cached information of icon file names
        RPointerArray<CAknIconFileNameItem> iFileNameItems;        
    };

#endif // AKN_ICON_FILE_NAME_CACHE_H

// End of File

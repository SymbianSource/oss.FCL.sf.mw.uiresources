/*
* Copyright (c) 2002-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines an internal concrete class CAknsContainerDataContext
*                which implements a data context suitable for containers.
*
*/


#ifndef AKNSCONTAINERDATACONTEXT_H
#define AKNSCONTAINERDATACONTEXT_H

//  INCLUDES
#include <AknsDataContext.h>

// CLASS DECLARATION

/**
* Concrete data context suitable for containers.
* Implements data context that passes item reservation requests to root
* data context and releases all items reserved when lifetime of the context
* ends. Release requests are ignored.
* AknsUtils::CreateDataContextForContainerL() creates contexts of this type.
*
* This is an internal class that contains no exported functions. 
* The class is not intended for derivation outside the library.
*
* @since 2.0
*
* @internal
*/
NONSHARABLE_CLASS(CAknsContainerDataContext) : public CBase, public MAknsDataContext
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor.
        * @par Exceptions:
        *   If construction fails, leaves with an error code.
        *
        * @internal
        */
        static CAknsContainerDataContext* NewL();
        
        /**
        * Destructor.
        * Releases all the items reserved using this context.
        *
        * @internal
        */
        virtual ~CAknsContainerDataContext();
    
    public: // Functions from MAknsDataContext

        /**
        * @copydoc MAknsDataContext::ReserveItemL()
        *
        * CAknsContainerDataContext implementation forwards request to the
        * root data context of application skin item.        
        */
        void ReserveItemL( const TAknsItemID& aID );

        /**
        * @copydoc MAknsDataContext::ReleaseItem()
        *
        * CAknsContainerDataContext ignores release requests. Items are 
        * released by destructor when the lifetime of the context ends.        
        */
        void ReleaseItem( const TAknsItemID& aID );
            
    private: // Private constructors

        /**
        * C++ default constructor.
        *
        * @internal
        */
        CAknsContainerDataContext();
    
    private: // Data

        /**
        * Array for storing IDs of reserved items.
        */
        RAknsItemIDArray iIDArray;

    };

#endif // AKNSCONTAINERDATACONTEXT_H
            
// End of File

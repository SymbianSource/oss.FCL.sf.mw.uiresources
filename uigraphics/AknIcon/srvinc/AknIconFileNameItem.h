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



#ifndef AKN_ICON_FILE_NAME_ITEM_H
#define AKN_ICON_FILE_NAME_ITEM_H

// INCLUDES
#include <e32base.h>

// FORWARD DECLARATIONS

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconFileNameItem) : public CBase
    {
    public: // Constructor and destructor

        /**
        * @param aFileName file name
        */
        static CAknIconFileNameItem* NewL( const TDesC& aFileName );

        /**
        * Constructor for compare items.
        * 
        * @param aFileName file name
        */
        CAknIconFileNameItem( const TDesC& aFileName );

        ~CAknIconFileNameItem();

    public: // New functions

        static TInt LinearOrder(
            const CAknIconFileNameItem& aFirst,
            const CAknIconFileNameItem& aSecond );

    private: // Private constructors

        CAknIconFileNameItem();
        void ConstructL( const TDesC& aFileName );

    public: // Data
        HBufC* iFileName;
        const TDesC* iFileNameRef; // used by compare items        
    };

#endif // AKN_ICON_FILE_NAME_ITEM_H

// End of File

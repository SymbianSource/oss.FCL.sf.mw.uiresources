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



#ifndef AKN_ICON_DATA_ITEM_H
#define AKN_ICON_DATA_ITEM_H

// INCLUDES
#include <e32base.h>
#include <gdi.h>

// FORWARD DECLARATIONS
struct TAknIconParams;
class CAknIconFileNameCache;

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconDataItem) : public CBase
    {
    public: // Constructor and destructor

        /**
        * @param aInfo info
        */
        static CAknIconDataItem* NewL( const TAknIconParams& aInfo,
                                       CAknIconFileNameCache& aFileNameCache );

        /**
        * Constructor for compare items.
        */
        CAknIconDataItem( const TAknIconParams& aInfo );

        ~CAknIconDataItem();

    public: // New functions

        static TInt LinearOrder(
            const CAknIconDataItem& aFirst,
            const CAknIconDataItem& aSecond );

        void GetInfo( TAknIconParams& aInfo ) const;

    private: // Private constructors

        CAknIconDataItem();
        void ConstructL( const TAknIconParams& aInfo,        
                         CAknIconFileNameCache& aFileNameCache );

    public: // Data
        HBufC* iFileName; // not owned
        const TDesC* iFileNameRef; // used by compare items
        TInt iIconId;
        TInt iUserCount;
        // preserved icon data
        TInt iHandle; // Handle to DOM tree
        TDisplayMode iBitmapDepth;
        TDisplayMode iMaskDepth;
        TBool iAppIcon; // set true for application icon
    };

#endif // AKN_ICON_DATA_ITEM_H

// End of File

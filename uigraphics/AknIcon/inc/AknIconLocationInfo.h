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



#ifndef AKN_ICON_LOCATION_INFO_H
#define AKN_ICON_LOCATION_INFO_H

// INCLUDES
#include <e32base.h>
#include <mifheader.cdl.h>

// FORWARD DECLARATIONS

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconLocationInfo) : public CBase
    {
    public: // Constructor and destructor

        // Used for V3 MIF files, which have icon index table in a CDL instance.
        static CAknIconLocationInfo* NewL(
            const TDesC& aFileName,
            MifHeader::CInstance& aOffsets );

        // Used for V2 MIF files, which have icon index table in the MIF file.
        static CAknIconLocationInfo* NewL(
            const TDesC& aFileName,
            const TDesC8& aOffsetArray );

        // Used for V1 MIF files, which do not encode icon type information.
        static CAknIconLocationInfo* NewL(
            const TDesC& aFileName );

        /**
        * Constructor only for compare items.
        */
        CAknIconLocationInfo( const TDesC& aFileName );

        ~CAknIconLocationInfo();

    public: // New functions

        static TInt LinearOrder(
            const CAknIconLocationInfo& aFirst,
            const CAknIconLocationInfo& aSecond );

        /**
        * Returns KErrEof if the icon with the given index is not found.
        */
        TInt GetIconLocation( TInt16& aBitmapId, TInt16& aMaskId ) const;

    private: // Private constructors

        CAknIconLocationInfo();

        void ConstructL(
            const TDesC& aFileName,
            MifHeader::CInstance& aOffsets );

        void ConstructL(
            const TDesC& aFileName,
            const TDesC8& aOffsetArray );

        void ConstructL( const TDesC& aFileName );

    public: // Data
        HBufC* iFileName;
        const TDesC* iFileNameRef; // used by compare items

        TInt* iLocations; // array
        TInt iCount;
        MifHeader::CInstance* iSharedOffsets;
    };

#endif // AKN_ICON_LOCATION_INFO_H

// End of File

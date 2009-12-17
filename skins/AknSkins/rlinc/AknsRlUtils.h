/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Rendering library static utility class.
*
*/


#ifndef AKNSRLUTILS_H
#define AKNSRLUTILS_H

// INCLUDES
#include <e32base.h>
#include <AknsItemID.h>

// FORWARD DECLARATIONS
class MAknsSkinInstance;

// CLASS DECLARATION

/**
* Rendering library static utility class.
*
* @since 2.8
*/
NONSHARABLE_CLASS(AknsRlUtils)
    {
    private: // Constructors and destructor

        // Static class
        AknsRlUtils();
        ~AknsRlUtils();

    public: // New methods

        /**
        * Checks if the skin ID is popup center graphics.
        * @param aIID item ID to check
        * @return ETrue if check item ID is frame center piece.
        * @since 2.8
        */
        IMPORT_C static TBool IsPopupCenter( const TAknsItemID& aIID );

        /**
        * Gets popup frame dimensions.
        * @par aTlSize top-left size
        * @par aBrSize bottom-right size
        * @since 2.8
        */
        IMPORT_C static void GetPopupFrameDimensions(
            TSize& aTlSize, TSize& aBrSize );
    };

#endif // AKNSRLUTILS_H

// End of File

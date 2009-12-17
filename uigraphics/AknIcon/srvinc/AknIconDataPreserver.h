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



#ifndef AKN_ICON_DATA_PRESERVER_H
#define AKN_ICON_DATA_PRESERVER_H

// INCLUDES
#include <e32base.h>
#include <AknIconUtils.h>

// FORWARD DECLARATIONS
class CAknIconSrvIconItem;
class CAknIconDataItem;
class MAknIconFormatHandler;
struct TAknIconParams;
class CAknIconServer;
class CAknIconLoader;

// CONSTANTS

// CLASS DEFINITIONS

NONSHARABLE_CLASS(CAknIconDataPreserver) : public CBase
    {
    public: // Constructor and destructor

        static CAknIconDataPreserver* NewL( CAknIconServer& aServer );
        ~CAknIconDataPreserver();

    public: // New functions

        // returns NULL if icon data is not preserved.
        CAknIconSrvIconItem* CreateIconL( const TAknIconParams& aParams );

        const CAknIconDataItem* PreserveIconDataL( 
            const TAknIconParams& aParams );
		// Fix to error JJUN-78QCL6. Passing aMessage variable to this function.
		// We need this variable to panic the client inside this function 
        const CAknIconDataItem* UnpreserveIconData(
            const TAknIconParams& aParams, TInt aCount, const RMessage2& aMessage );

        void GetContentDimensionsL( 
            const TAknIconParams& aParams,
            TAknContentDimensions& aContentDimensions );

    private: // New functions

    private: // Private constructors

        CAknIconDataPreserver( CAknIconServer& aServer );

    public: // Data

        CAknIconServer& iServer;
        RPointerArray<CAknIconDataItem> iItems;
        MAknIconFormatHandler* iHandler; // not owned
    };

#endif // AKN_ICON_DATA_PRESERVER_H

// End of File

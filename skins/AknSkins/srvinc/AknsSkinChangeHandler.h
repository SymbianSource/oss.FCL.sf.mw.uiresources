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
* Description:  Skin change handler.
*
*/



#ifndef AKNSSKINCHANGEHANDLER_H
#define AKNSSKINCHANGEHANDLER_H

// INCLUDES
#include <e32base.h>

// DATA TYPES
enum TAknsSkinChangeHandlerNotification
    {
    EAknsSCHNContentChanged         = 1,
    EAknsSCHNPackageListUpdate      = 2,
    EAknsSCHNConfigurationMerged    = 3,
    EAknsSCHNConfigurationDeployed  = 4,
    EAknsSCHNConfigurationOOM       = 5,
    EAknsSCHNConfigurationCorrupt   = 6,
    EAknsSCHNMorphingStateChange    = 7,
    EAknsSCHNWallpaperChanged       = 8,
    EAknsSCHNFlushClientSideCaches  = 9,
    EAknsSCHNAnimBackgroundChanged  = 10,
	EAknsSCHNSSWallpaperChanged     = 11,
    };

// FORWARD DECLARATIONS
class RAknsSrvSession;

// CLASS DECLARATION

/**
* Internal class that handles observer notifications.
*
* @since 2.0
*
* @internal
*/
NONSHARABLE_CLASS(CAknsSkinChangeHandler) : public CActive
    {
    public:

        /**
        * Constructor.
        */
        CAknsSkinChangeHandler(RAknsSrvSession& aSession, TInt aPriority);

        /**
        * Destructor.
        */
        ~CAknsSkinChangeHandler();

    public:

        /**
        * Propagates skin change events.
        */
        void HandleSkinChange(
            const TAknsSkinChangeHandlerNotification aType );

    public:

        /**
        * Sets the active status.
        */
        void SetActive(); //lint !e1511 Hiding allowed

    private: // From CActive

        /**
        * Run method.
        */
        void RunL();

        /**
        * Cancellation.
        */
        void DoCancel();

    private: // Data

        TBool* iDestroyedPtr;
        RAknsSrvSession& iSession;

    };

#endif // AKNSSKINCHANGEHANDLER_H

// End of File

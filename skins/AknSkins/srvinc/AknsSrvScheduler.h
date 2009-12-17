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
* Description:  Skin server's active scheduler.
*
*/


#ifndef C_AKNSSRVSCHEDULER_H
#define C_AKNSSRVSCHEDULER_H

//  INCLUDES
#include <e32base.h>

// CLASS DECLARATION

/**
* Active scheduler for Skin server.
*/
NONSHARABLE_CLASS(CAknsSrvScheduler) : public CActiveScheduler
    {
    public:  // Constructors and destructor

        /**
        * Constructor.
        */
        CAknsSrvScheduler();

        /**
        * Destructor.
        */
        virtual ~CAknsSrvScheduler();

    public: // Functions from base classes

        /**
        * Called if active object's RunL() leaves.
        */
        void Error( TInt aLeaveCode ) const;

    };

#endif      // C_AKNSSRVSCHEDULER_H

// End of File

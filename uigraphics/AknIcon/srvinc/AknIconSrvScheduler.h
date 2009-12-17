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




#ifndef AKN_ICON_SRV_SCHEDULER_H
#define AKN_ICON_SRV_SCHEDULER_H

//  INCLUDES
#include <e32base.h>

// CLASS DECLARATION

/**
* Active scheduler for AknIcon server. 
*/
NONSHARABLE_CLASS(CAknIconSrvScheduler) : public CActiveScheduler
    {
    public:  // Constructors and destructor
        
        /**
        * Constructor.
        */
        CAknIconSrvScheduler();

        /**
        * Destructor.
        */
        virtual ~CAknIconSrvScheduler();

    public: // Functions from base classes

        /**
        * Called if active object's RunL() leaves.
        */
        void Error( TInt aLeaveCode ) const;
    };

#endif      // AKN_ICON_SRV_SCHEDULER_H
            
// End of File

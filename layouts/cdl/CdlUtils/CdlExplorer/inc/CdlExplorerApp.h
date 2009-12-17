/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: Declares main application class.
*
*/


#ifndef CDLEXPLORERAPP_H
#define CDLEXPLORERAPP_H

// INCLUDES
#include <aknapp.h>

// CONSTANTS
// UID of the application
const TUid KUidCdlExplorer = { 0x101F9564 };

// CLASS DECLARATION

/**
* CCdlExplorerApp application class.
* Provides factory to create concrete document object.
* 
*/
class CCdlExplorerApp : public CAknApplication
    {
    
    public: // Functions from base classes
    private:

        /**
        * From CApaApplication, creates CCdlExplorerDocument document object.
        * @return A pointer to the created document object.
        */
        CApaDocument* CreateDocumentL();
        
        /**
        * From CApaApplication, returns application's UID (KUidCdlExplorer).
        * @return The value of KUidCdlExplorer.
        */
        TUid AppDllUid() const;
    };

#endif

// End of File


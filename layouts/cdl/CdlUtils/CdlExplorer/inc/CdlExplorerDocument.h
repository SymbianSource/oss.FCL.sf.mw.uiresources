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
* Description: Declares document for application.
*
*/


#ifndef CDLEXPLORERDOCUMENT_H
#define CDLEXPLORERDOCUMENT_H

// INCLUDES
#include <akndoc.h>
   
// CONSTANTS

// FORWARD DECLARATIONS
class  CEikAppUi;

// CLASS DECLARATION

/**
*  CCdlExplorerDocument application class.
*/
class CCdlExplorerDocument : public CAknDocument
    {
    public: // Constructors and destructor
        /**
        * Two-phased constructor.
        */
        static CCdlExplorerDocument* NewL(CEikApplication& aApp);

        /**
        * Destructor.
        */
        virtual ~CCdlExplorerDocument();

    public: // New functions

    protected:  // New functions

    protected:  // Functions from base classes

    private:

        /**
        * EPOC default constructor.
        */
        CCdlExplorerDocument(CEikApplication& aApp);
        void ConstructL();

    private:

        /**
        * From CEikDocument, create CCdlExplorerAppUi "App UI" object.
        */
        CEikAppUi* CreateAppUiL();
    };

#endif

// End of File


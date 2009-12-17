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
* Description:
*
*/


// INCLUDE FILES
#include    "CdlExplorerApp.h"
#include    "CdlExplorerDocument.h"
#include    <eikstart.h>

// ================= MEMBER FUNCTIONS =======================

// ---------------------------------------------------------
// CCdlExplorerApp::AppDllUid()
// Returns application UID
// ---------------------------------------------------------
//
TUid CCdlExplorerApp::AppDllUid() const
    {
    return KUidCdlExplorer;
    }

   
// ---------------------------------------------------------
// CCdlExplorerApp::CreateDocumentL()
// Creates CCdlExplorerDocument object
// ---------------------------------------------------------
//
CApaDocument* CCdlExplorerApp::CreateDocumentL()
    {
    return CCdlExplorerDocument::NewL( *this );
    }

// ================= OTHER EXPORTED FUNCTIONS ==============
//
// ---------------------------------------------------------
// NewApplication() 
// Constructs CCdlExplorerApp
// Returns: created application object
// ---------------------------------------------------------
//
LOCAL_C CApaApplication* NewApplication()
    {
    return new CCdlExplorerApp;
    }

GLDEF_C TInt E32Main()
    {
    return EikStart::RunApplication(NewApplication);
    }

// End of File  


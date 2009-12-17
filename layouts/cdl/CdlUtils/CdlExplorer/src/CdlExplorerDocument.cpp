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
#include "CdlExplorerDocument.h"
#include "CdlExplorerAppUi.h"

// ================= MEMBER FUNCTIONS =======================

// constructor
CCdlExplorerDocument::CCdlExplorerDocument(CEikApplication& aApp)
: CAknDocument(aApp)    
    {
    }

// destructor
CCdlExplorerDocument::~CCdlExplorerDocument()
    {
    }

// EPOC default constructor can leave.
void CCdlExplorerDocument::ConstructL()
    {
    }

// Two-phased constructor.
CCdlExplorerDocument* CCdlExplorerDocument::NewL(
        CEikApplication& aApp)     // CCdlExplorerApp reference
    {
    CCdlExplorerDocument* self = new (ELeave) CCdlExplorerDocument( aApp );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();

    return self;
    }
    
// ----------------------------------------------------
// CCdlExplorerDocument::CreateAppUiL()
// constructs CCdlExplorerAppUi
// ----------------------------------------------------
//
CEikAppUi* CCdlExplorerDocument::CreateAppUiL()
    {
    return new (ELeave) CCdlExplorerAppUi;
    }

// End of File  

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
* Description:  Defines the skin server exe entrypoint to actually start the
*                Skin server.
*
*/


#include "AknsSrv.h"

// -----------------------------------------------------------------------------
// E32Main
// -----------------------------------------------------------------------------
//
GLDEF_C TInt E32Main()
    {
    return CAknsSrv::ThreadStart();
    }

//  End of File

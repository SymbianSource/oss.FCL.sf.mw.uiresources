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
* Description:   Server main function.
*
*/



#include <e32std.h>
#include "AknIconSrv.h"

GLDEF_C TInt E32Main()
    {
    // Prevent killing AknIconServer from other processes               
    // system reboots in case of panic
    User::SetProcessCritical(User::ESystemCritical);
	User::SetCritical(User::ESystemCritical);    
    return CAknIconServer::ThreadStart();
    }

// End of File

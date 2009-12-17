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
* Description:   Stub export only
*
*/




// INCLUDE FILES

#include <e32svr.h>
#include "AknIconSrvStub.h"

// CONSTANTS

// -----------------------------------------------------------------------------
// CAknIconServer::ThreadStart()
// -----------------------------------------------------------------------------

EXPORT_C TInt CAknIconServer::ThreadStart()
    {
    return KErrNotSupported;
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_MARK
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_MARK()
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_MARKEND
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_MARKEND()
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_FAILNEXT
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_FAILNEXT( TInt aCount )
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_FAILNEXT_INCREASING
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_FAILNEXT_INCREASING( TInt aCount )
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_RESET
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C void __SERVER_HEAP_RESET()
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C void __SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS()
    {
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_USED
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C TInt __SERVER_HEAP_USED()
    {
    return 0;
    }

// End of File

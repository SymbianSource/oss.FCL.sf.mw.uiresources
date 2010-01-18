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



// INCLUDE FILES

#include <e32std.h>
#include "AknIconSrvDebug.h"
#include "AknIconSrvClient.h"
#include "AknIconSrvTlsData.h"

// CONSTANTS

// ================= GLOBAL FUNCTIONS ==========================================

// -----------------------------------------------------------------------------
// __SERVER_HEAP_MARK
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_MARK()
    {
#if defined(_DEBUG) && defined(__WINS__)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_HEAP_MARK();
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_MARKEND
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_MARKEND()
    {
#if defined(_DEBUG) && defined(__WINS__)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_HEAP_MARKEND();
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_FAILNEXT
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_FAILNEXT( TInt aCount )
    {
	// Notice: this code is used to avoid the building warning!
    aCount = aCount;
#if defined(_DEBUG) && defined(__WINS__)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_HEAP_FAILNEXT( aCount );
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_FAILNEXT_INCREASING
// -----------------------------------------------------------------------------
//
EXPORT_C GLDEF_C void __SERVER_HEAP_FAILNEXT_INCREASING( TInt aCount )
    {
	// Notice: this code is used to avoid the building warning!
    aCount = aCount;
#if defined(_DEBUG) && defined(__WINS__)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_HEAP_FAILNEXT_INCREASING( aCount );
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_RESET
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C void __SERVER_HEAP_RESET()
    {
#if defined(_DEBUG) && defined(__WINS__)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_HEAP_RESET();
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C void __SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS()
    {
#if defined(_DEBUG)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_RESET_DYNAMICALLY_CHANGING_ALLOCATIONS();
#endif
    }

// -----------------------------------------------------------------------------
// __SERVER_HEAP_USED
// -----------------------------------------------------------------------------
//        
EXPORT_C GLDEF_C TInt __SERVER_HEAP_USED()
    {
    TInt ret = 0;

#if defined(_DEBUG)
    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    ret = client->__SERVER_HEAP_USED();
#endif

    return ret;
    }

// -----------------------------------------------------------------------------
// __SERVER_SET_PREFERRED_ICON_DISPLAY_MODE
// -----------------------------------------------------------------------------
//        
EXPORT_C GLREF_C void __SERVER_SET_PREFERRED_ICON_DISPLAY_MODE(
    TDisplayMode aMode )
    {
	// Notice: this code is used to avoid the building warning!
    aMode = aMode;
#if defined(_DEBUG)

    // New display mode won't affect already connected clients,
    // except this client.

    RAknIconSrvClient* client = RAknIconSrvClient::GetSession();
    client->__SERVER_SET_PREFERRED_ICON_DISPLAY_MODE( aMode );

    CAknIconSrvTlsData* data = static_cast<CAknIconSrvTlsData*>( Dll::Tls() );
    ((TAknIconInitData&)data->InitData()).iIconMode = aMode;
#endif
    }

//  End of File  

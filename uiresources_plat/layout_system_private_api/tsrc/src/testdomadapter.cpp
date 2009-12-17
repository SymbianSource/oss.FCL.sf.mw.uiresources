/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  layout_system_private_api
*
*/

// [INCLUDE FILES] 
#include <w32std.h>

#include "testdomadapter.h"

// CONSTANTS
const TInt KWindowTxtStart( 2 );
const TInt KLength = 10;

// ======== MEMBER FUNCTIONS ========

// ---------------------------------------------------------------------------
// Symbian 2nd static Constructor
// ---------------------------------------------------------------------------
//
CTestDomAdapter* CTestDomAdapter::NewL()
    {
    CTestDomAdapter* self = new( ELeave ) CTestDomAdapter( );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }
    
// ---------------------------------------------------------------------------
// C++ default constructor
// ---------------------------------------------------------------------------
//
CTestDomAdapter::CTestDomAdapter()
    : iAdpDataLookup( NULL )
    {    
    }
    
// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CTestDomAdapter::~CTestDomAdapter()
    {  
    if ( iAdpDataLookup )
        {
        delete []iAdpDataLookup;
        iAdpDataLookup = NULL;
        }
    }
    
// ---------------------------------------------------------------------------
// Symbian 2nd Constructor
// ---------------------------------------------------------------------------
//
void CTestDomAdapter::ConstructL()
    {   
   
    iAdpDataLookup = new (ELeave) TUint[ KLength ];
    iAdpDataLookup[0] = ( TUint )CTestDomAdapter::TextLine0f;
    iAdpDataLookup[1] = 0x0001;
    iAdpDataLookup[2] = KWindowTxtStart;
    iAdpDataLookup[3] = ( TUint )CTestDomAdapter::WindowLine0f;
    iAdpDataLookup[4] = ( TUint )CTestDomAdapter::WindowLine1f;
    iAdpDataLookup[5] = 0x0001;
    iAdpDataLookup[6] = KWindowTxtStart;
    iAdpDataLookup[7] = ( TUint )CTestDomAdapter::TextLine0f;
    iAdpDataLookup[8] = ( TUint )CTestDomAdapter::TextLine1f;
    iAdpDataLookup[9] = 0x518; 
   
    }
    
// ---------------------------------------------------------------------------
// CTestDomAdapter::GetAdpDataLookup
// ---------------------------------------------------------------------------
//
TUint* CTestDomAdapter::GetAdpDataLookup()
    { 
    return iAdpDataLookup;
    }

// ---------------------------------------------------------------------------
// CTestDomAdapter::WindowLine0f
// ---------------------------------------------------------------------------
//    
TAknWindowLineLayout CTestDomAdapter::WindowLine0f()
    {
    return TAknWindowLineLayout(); 
    }
    
// ---------------------------------------------------------------------------
// CTestDomAdapter::WindowLine1f
// ---------------------------------------------------------------------------
//
TAknWindowLineLayout CTestDomAdapter::WindowLine1f( TInt /* aIndex */)   
    {
    return TAknWindowLineLayout();
    }
    
    
// ---------------------------------------------------------------------------
// CTestDomAdapter::TextLine0f
// ---------------------------------------------------------------------------
//
TAknTextLineLayout CTestDomAdapter::TextLine0f()
    {
    return TAknTextLineLayout();
    }

// ---------------------------------------------------------------------------
// CTestDomAdapter::TextLine1f
// ---------------------------------------------------------------------------
//
TAknTextLineLayout CTestDomAdapter::TextLine1f( TInt /* aIndex */ )
    {
    return TAknTextLineLayout();
    }

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
* Description:  test cdl_api
*
*/


#include "testdomcdl.h"

// ---------------------------------------------------------------------------
// CTestDomCdlEngineObserver::CTestDomCdlEngineObserver
// ---------------------------------------------------------------------------
//
CTestDomCdlEngineObserver::CTestDomCdlEngineObserver()
    {
    
    }

// ---------------------------------------------------------------------------
// CTestDomCdlEngineObserver::~CTestDomCdlEngineObserver
// ---------------------------------------------------------------------------
//
CTestDomCdlEngineObserver::~CTestDomCdlEngineObserver()
    {
    
    }


// ---------------------------------------------------------------------------
// CDOMTestDomCdlInst::CDOMTestDomCdlInst
// ---------------------------------------------------------------------------
//
CDOMTestDomCdlInst::CDOMTestDomCdlInst()
    { 
    
    }
    
// ---------------------------------------------------------------------------
// DOMTestCdlInst::~CDOMTestDomCdlInst
// ---------------------------------------------------------------------------
//
CDOMTestDomCdlInst::~CDOMTestDomCdlInst()
    {
    
    }

// ---------------------------------------------------------------------------
// CDOMTestDomCdlInst::CreateInstanceLC
// ---------------------------------------------------------------------------
//
CCdlInstance* CDOMTestDomCdlInst::CreateInstanceLC( const TCdlRef& /*aRef*/, 
                                                const CCdlInstance* /*aSubLayer*/)
    {
    return NULL;
    }

// ---------------------------------------------------------------------------
// CDOMTestDomCdlInst::CallCompare
// ---------------------------------------------------------------------------
//
TCdlInstanceComparison CDOMTestDomCdlInst::CallCompare( const CCdlInstance& /*aFirst*/,
                                                    const CCdlInstance& /*aSecond*/ )const
    {
    //return,only for avoid warning
    TCdlInstanceComparison temValue = ECdlInstancesNotComparable;
    return temValue;
    }

// ---------------------------------------------------------------------------
// CDOMTestDomCdlInst::CallIsValid
// ---------------------------------------------------------------------------
//
TBool CDOMTestDomCdlInst::CallIsValid(const CCdlInstance& /*aInstance*/)const
    {
    //return,only for avoid warning
    return ETrue;
    }

// ---------------------------------------------------------------------------
// CDOMTestDomCdlInst::FindLC
// ---------------------------------------------------------------------------
//
void CDOMTestDomCdlInst::DoFindLC()
    {
    //return,only for avoid warning
    TUid aUid =  { 0x174657FC };
    CCdlInstanceExplorerBase::FindLC( aUid );
    }
    


//End Of File



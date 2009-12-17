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



// [INCLUDE FILES]

#include <ecam.h>
#include <cdlrefs.h>
#include <stringloader.h> 
#include <testdomcdl.rsg>

#include "testdomcdl.h"

//CONSTANTS
const TInt KThree = 3;
const TInt KFour = 4;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEUCreateRefsLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEUCreateRefsLCL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();//push
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref(0), &face );
    CleanupStack::PushL( inst );//push
    CdlExplorerUtils::CreateRefsLC( *inst );//push
    CleanupStack::PopAndDestroy( KThree );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEUCreateRefsLCArrayL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEUCreateRefsLCArrayL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();//push
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref(0), &face );
    CleanupStack::PushL( inst );//push
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT );//push
    TCdlRef ref;
    ref.iId = 1;
    ref.iUid = testUid;
    ref.iName = nameValue;
    TCdlArray<TCdlRef> refs;
    refs.iArray = &ref;
    refs.iCount = 1;
    CdlExplorerUtils::CreateRefsLC( *inst, refs );//push
    CleanupStack::PopAndDestroy( KFour );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIEBDoFindLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIEBDoFindLCL( CStifItemParser& /*aItem*/ ) 
    {
    CDOMTestDomCdlInst *testdomcdlinst = new( ELeave )CDOMTestDomCdlInst();
    testdomcdlinst->DoFindLC();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }


// [End of File]



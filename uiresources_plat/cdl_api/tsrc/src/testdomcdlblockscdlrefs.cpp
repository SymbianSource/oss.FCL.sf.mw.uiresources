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

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRITIteratorL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRITIteratorL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CCdlRefs::TIterator iter = cdlRefs->Begin();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CCdlRefs::TIterator iter2( iter );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRIoperatorL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRIoperatorL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CCdlRefs::TIterator iter = cdlRefs->Begin();
    CleanupStack::PushL( cdlRefs );
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CCdlRefs::TIterator iter2( iter );
    iter2++;
    ++iter2;
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRNewL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRNewL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRNewLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRNewLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewLC();
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRBeginL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRBeginL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->Begin();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRBeginUidL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRBeginUidL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TUid testUid ={ 0x174657FC };
    cdlRefs->Begin( testUid );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRBeginDesL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRBeginDesL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TBuf<10> name;
    cdlRefs->Begin( name );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCREndL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCREndL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->End();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRAppendL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRAppendL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    TUid testUid =  { 0x174657FC };
    TCdlRef tCdlref;
    tCdlref.iId = 0;
    tCdlref.iUid = testUid;
    tCdlref.iName = nameValue;
    cdlRefs->AppendL( tCdlref );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRAppendRefsL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRAppendRefsL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CCdlRefs* cdlRefs2 = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs2 );//push
    cdlRefs->AppendL( *cdlRefs2 );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRAppendDesL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRAppendDesL( CStifItemParser& /*aItem*/ ) 
    {
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TUid testUid =  { 0x174657FC };
    TBuf<10> homeName;
    TCdlRef ref;
    ref.iId = 1;
    ref.iUid = testUid;
    ref.iName = nameValue;
    TCdlArray<TCdlRef> refs;
    refs.iArray = &ref;
    refs.iCount = 1;
    cdlRefs->AppendL( homeName, refs );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRInsertL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRInsertL( CStifItemParser& /*aItem*/ ) 
    {
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TUid testUid =  { 0x174657FC };
    TCdlRef tCdlref;
    tCdlref.iId = 0;
    tCdlref.iUid = testUid;
    tCdlref.iName = nameValue;
    cdlRefs->InsertL( cdlRefs->Begin(), tCdlref );
    CCdlRefs::TIterator iter = cdlRefs->Begin();
    cdlRefs->Delete( iter );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRDeleteL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRDeleteL( CStifItemParser& /*aItem*/ ) 
    {
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TUid testUid =  { 0x174657FC };
    TCdlRef tCdlref;
    tCdlref.iId = 0;
    tCdlref.iUid = testUid;
    tCdlref.iName = nameValue;
    cdlRefs->InsertL( cdlRefs->Begin(), tCdlref );
    CCdlRefs::TIterator iter = cdlRefs->Begin();
    cdlRefs->Delete( iter );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRDeleteBeginAndL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRDeleteBeginAndL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->Delete( cdlRefs->Begin(), cdlRefs->End() );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRNamesL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRNamesL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->Names();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRUidsLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRUidsLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->UidsLC();
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRSubsetByUidLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRSubsetByUidLCL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->SubsetByUidLC( testUid );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRSubsetByUidsLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRSubsetByUidsLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    CCdlUids* uids = cdlRefs->UidsLC();//push
    cdlRefs->SubsetByUidsLC( *uids );
    CleanupStack::PopAndDestroy( 3 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRSubsetByNameLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRSubsetByNameLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TBuf<10> names;
    cdlRefs->SubsetByNameLC( names );//push
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRMergeAndReplaceL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRMergeAndReplaceL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->MergeAndReplaceL( *cdlRefs );//push
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRAddLayerL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRAddLayerL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->AddLayerL( *cdlRefs );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRExportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRExportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->ExportL();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRExportLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRExportLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->ExportLC();
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRImportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRImportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    HBufC8* buf8 = HBufC8::NewMaxLC( 32 );//push
    TPtr8 ptr = buf8->Des();
    TChar theChar = 0;
    ptr.Zero();
    ptr.AppendFill( theChar, 8 );
    cdlRefs->ImportL( *buf8 );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRCountRefsL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRCountRefsL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    cdlRefs->CountRefs();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRRefL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRRefL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    TUid testUid =  { 0x174657FC };
    TCdlRef tCdlref;
    tCdlref.iId = 0;
    tCdlref.iUid = testUid;
    tCdlref.iName = nameValue;
    cdlRefs->AppendL( tCdlref );
    cdlRefs->Ref( 0 );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCRDeleteWithNameL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCRDeleteWithNameL( CStifItemParser& /*aItem*/ ) 
    {
    HBufC* nameValue = StringLoader::LoadLC( R_DOMTEST_TEXT ); //push
    CCdlRefs* cdlRefs = CCdlRefs::NewL();
    CleanupStack::PushL( cdlRefs );//push
    STIF_ASSERT_NOT_NULL( cdlRefs );
    TUid testUid =  { 0x174657FC };
    TCdlRef tCdlref;
    tCdlref.iId = 0;
    tCdlref.iUid = testUid;
    tCdlref.iName = nameValue;
    cdlRefs->InsertL( cdlRefs->Begin(), tCdlref );
    cdlRefs->Delete( *tCdlref.iName );
    CleanupStack::PopAndDestroy( 2 );
    return KErrNone;
    }

// [End of File]

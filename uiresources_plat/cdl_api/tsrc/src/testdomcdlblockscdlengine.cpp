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

#include "testdomcdl.hrh"
#include "testdomcdl.h"

//CONSTANTS
const TInt KTwo = 2;
const TInt KThree = 3;
// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIRefL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIRefL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    inst->Ref();
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCISubLayerL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCISubLayerL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    inst->SubLayer();
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCILastAccessedRefL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCILastAccessedRefL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    inst->LastAccessedRef();
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIFileNameRelativeToLastAccessedInstanceL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIFileNameRelativeToLastAccessedInstanceL( CStifItemParser& /*aItem*/ ) 
    {
    TFileName filename;
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    inst->FileNameRelativeToLastAccessedInstance( filename );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIoperatorL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIoperatorL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    CCdlInstance* instother = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( instother );
    TBool flag = *inst == *instother;
    STIF_ASSERT_TRUE( flag );
    CleanupStack::PopAndDestroy( KThree );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCINewL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCINewL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCINewLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCINewLCL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewLC( newRefs->Ref( 0 ), &face );
    STIF_ASSERT_NOT_NULL( inst );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIGetDataL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIGetDataL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    TInt cdlApiId = 0;
    inst->GetData( cdlApiId );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCIGetFunctionL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCIGetFunctionL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x174657FC };
    CCdlRefs* newRefs = CdlEngine::AllAvailableRefsLC();
    SCdlInterface face = { 0,0,0,{testUid.iUid},0,0,0,0 };
    CCdlInstance* inst = CCdlInstance::NewL( newRefs->Ref( 0 ), &face );
    CleanupStack::PushL( inst );
    STIF_ASSERT_NOT_NULL( inst );
    TInt cdlApiId = 0;
    inst->GetFunction( cdlApiId );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUNewLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUNewLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = CCdlUids::NewLC();//push
    STIF_ASSERT_NOT_NULL( uids );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUCCdlUidsCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUCCdlUidsCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUAddL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUAddL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    uids->AddL( testUid );
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCURemoveL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCURemoveL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    uids->AddL( testUid );
    uids->Remove( testUid );
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUAddLUidL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUAddLUidL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    CCdlUids* uids2 = CCdlUids::NewLC();//push
    uids->AddL( *uids2 );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCURemoveUidL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCURemoveUidL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    CCdlUids* uids2 = CCdlUids::NewLC();//push
    uids->AddL( *uids2 );
    uids->Remove( *uids2 );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUFindIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUFindIndexL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    uids->FindIndex( testUid );
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUIntersectionLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUIntersectionLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    CCdlUids* uids2 = CCdlUids::NewLC();//push
    uids->IntersectionLC( *uids2 );
    CleanupStack::PopAndDestroy( KThree );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUImportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUImportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    TBuf8<10> buf;
    uids->ImportL( buf );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCUExportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCUExportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = new( ELeave )CCdlUids();
    CleanupStack::PushL( uids );
    STIF_ASSERT_NOT_NULL( uids );
    TBuf8<10> buf;
    uids->ImportL( buf );
    uids->Export();
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNNewLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNNewLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlNames* names = CCdlNames::NewLC();//push
    STIF_ASSERT_NOT_NULL( names );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNCCdlNamesL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNCCdlNamesL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNFindIndexL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNFindIndexL( CStifItemParser& /*aItem*/ ) 
    {
    TFileName fileName;
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    names->FindIndex( fileName );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNAddL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNAddL( CStifItemParser& /*aItem*/ ) 
    {
    TFileName fileName;
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    names->AddL( fileName );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNImportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNImportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    HBufC8* buf8 = HBufC8::NewMaxLC( 32 );//push
    TPtr8 ptr = buf8->Des();
    TChar theChar = 0;
    ptr.Zero();
    ptr.AppendFill( theChar, 8 );
    names->ImportL( *buf8 );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNExportL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNExportL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    HBufC8* buf8 = HBufC8::NewMaxLC( 32 );//push
    TPtr8 ptr = buf8->Des();
    TChar theChar = 0;
    ptr.Zero();
    ptr.AppendFill( theChar, 8 );
    names->ImportL( *buf8 );
    names->ExportL();
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCNExportLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCNExportLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlNames* names = new( ELeave )CCdlNames();
    CleanupStack::PushL( names );
    STIF_ASSERT_NOT_NULL( names );
    HBufC8* buf8 = HBufC8::NewMaxLC( 32 );//push
    TPtr8 ptr = buf8->Des();
    TChar theChar = 0;
    ptr.Zero();
    ptr.AppendFill( theChar, 8 );
    names->ImportL( *buf8 );
    names->ExportLC();
    CleanupStack::PopAndDestroy( KThree );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCCOHandleCustomisationChangeL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCCOHandleCustomisationChangeL( CStifItemParser& /*aItem*/ ) 
    {
    MCdlChangeObserver obser;
    CCdlUids* uids = CCdlUids::NewLC();//push
    obser.HandleCustomisationChangeL( *uids );
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCCOHandleAvailableRefsChangeL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCCOHandleAvailableRefsChangeL( CStifItemParser& /*aItem*/ ) 
    {
    MCdlChangeObserver obser;
    CCdlUids* uids = CCdlUids::NewLC();//push
    obser.HandleAvailableRefsChangeL();
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEIsCdlEngineCreated
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEIsCdlEngineCreated( CStifItemParser& /*aItem*/ ) 
    {
    CdlEngine::IsCdlEngineCreated();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCECreateCdlEngineL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCECreateCdlEngineL( CStifItemParser& /*aItem*/ ) 
    {
    CdlEngine::CreateCdlEngineL();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEStartGlobalCustomisationL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEStartGlobalCustomisationL( CStifItemParser& /*aItem*/ ) 
    {
    CdlEngine::StartGlobalCustomisationL();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEGetDataL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEGetDataL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::GetData( cdlref.iUid, 0 );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEGetFunctionL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEGetFunctionL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::GetFunction( cdlref.iUid, 0 );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEIsCustomisationStarted
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEIsCustomisationStarted( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    SCdlInterface sCdlI;
    sCdlI.iUid = testUid;
    CdlEngine::IsCustomisationStarted( &sCdlI );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCERequireCustomisationL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCERequireCustomisationL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    SCdlInterface sCdlI;
    sCdlI.iUid = testUid;
    CdlEngine::RequireCustomisationL( &sCdlI );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCELoadCustomisationL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCELoadCustomisationL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCECustomisationInstanceL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCECustomisationInstanceL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::CustomisationInstance( cdlref.iUid );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }
//

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCESetCustomisationChangeObserverL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCESetCustomisationChangeObserverL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CTestDomCdlEngineObserver* obser = new( ELeave )CTestDomCdlEngineObserver();
    CleanupStack::PushL( obser );
    CdlEngine::SetCustomisationChangeObserverL( obser, testUid );
    CleanupStack::PopAndDestroy();
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCELastAccessedRefL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCELastAccessedRefL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::LastAccessedRef( cdlref.iUid );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEFileNameRelativeToLastAccessedInstanceL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEFileNameRelativeToLastAccessedInstanceL( CStifItemParser& /*aItem*/ ) 
    {
    TFileName FileName;
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::FileNameRelativeToLastAccessedInstance( cdlref.iUid ,FileName );
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCELastApiIdL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCELastApiIdL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::LastApiId();
    CleanupStack::PopAndDestroy( cdlRef2 );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEFindInstancesLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEFindInstancesLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::FindInstancesLC( cdlref.iUid );
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEFileContentsLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEFileContentsLCL( CStifItemParser& /*aItem*/ ) 
    {
    TFileName FileName;
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::FileNameRelativeToLastAccessedInstance( cdlref.iUid, FileName );
    CdlEngine::FileContentsLC( FileName );//push
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEFindCustomisationFilesLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEFindCustomisationFilesLCL( CStifItemParser& /*aItem*/ ) 
    {
//    TFileName FileName;
//    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
//    TCdlRef cdlref = cdlRef2->Ref( 0 );
//       
//    CdlEngine::LoadCustomisationL( cdlref );
//    CdlEngine::FileNameRelativeToLastAccessedInstance( cdlref.iUid, FileName );
//    CdlEngine::FileContentsLC( FileName );//push
//    CdlEngine::FindCustomisationFilesLC();
//    CleanupStack::PopAndDestroy( KThree );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEAllAvailableRefsLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEAllAvailableRefsLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlRefs* cdlRef2 = CdlEngine::AllAvailableRefsLC();//push
    TCdlRef cdlref = cdlRef2->Ref( 0 );
    CdlEngine::LoadCustomisationL( cdlref );
    CdlEngine::AllAvailableRefsLC();
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCESetAvailableRefsChangeObserverL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCESetAvailableRefsChangeObserverL( CStifItemParser& /*aItem*/ ) 
    {
    CTestDomCdlEngineObserver* obser = new( ELeave )CTestDomCdlEngineObserver();
    CleanupStack::PushL( obser );
    CdlEngine::SetAvailableRefsChangeObserverL( obser );
    CleanupStack::PopAndDestroy( obser );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCESetLocalStateL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCESetLocalStateL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CCdlRefs* cdlRef = CdlEngine::FindInstancesLC( testUid );//push
    CdlEngine::SetLocalStateL( *cdlRef );
    CleanupStack::PopAndDestroy( cdlRef );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCESetGlobalStateL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCESetGlobalStateL( CStifItemParser& /*aItem*/ ) 
    {
    TUid testUid =  { 0x5675708D };
    CCdlRefs* cdlRef = CdlEngine::FindInstancesLC( testUid );//push
    CdlEngine::SetGlobalStateL( *cdlRef );
    CleanupStack::PopAndDestroy( cdlRef );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCELocalStateLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCELocalStateLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = CCdlUids::NewLC();//push
    CCdlRefs* cdlRef3 = CdlEngine::LocalStateLC( *uids );//push
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEGlobalStateLCL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEGlobalStateLCL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = CCdlUids::NewLC();//push
    CCdlRefs* cdlRef3 = CdlEngine::GlobalStateLC( *uids );//push
    CleanupStack::PopAndDestroy( KTwo );
    return KErrNone; 
    }
// -----------------------------------------------------------------------------
// CTestDomCdl::TestCEEnableGlobalCustomisationL
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCEEnableGlobalCustomisationL( CStifItemParser& /*aItem*/ ) 
    {
    CCdlUids* uids = CCdlUids::NewLC();//push
    CdlEngine::EnableGlobalCustomisationL( *uids , ETrue);
    CleanupStack::PopAndDestroy( uids );
    return KErrNone;
    }

// -----------------------------------------------------------------------------
// CTestDomCdl::TestCECompareNames
// -----------------------------------------------------------------------------
//
TInt CTestDomCdl::TestCECompareNames( CStifItemParser& /*aItem*/ ) 
    {
    TBuf<10> lift;
    TBuf<10> right;
    CdlEngine::CompareNames( lift, right );
    return KErrNone;
    }


//  [End of File]



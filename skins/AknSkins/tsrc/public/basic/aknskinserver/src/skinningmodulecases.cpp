/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  STIF test cases for skinning module.
*
*/



// INCLUDE FILES
#include <e32math.h>

#include <aknsbasicbackgroundcontrolcontext.h>
#include <aknslistboxbackgroundcontrolcontext.h>
#include <aknslayeredbackgroundcontrolcontext.h>
#include <aknsmaskedlayerbackgroundcontrolcontext.h>
#include <aknscombinedbackgroundcontrolcontext.h>

#include "aknsrlutils.h"
#include "aknsalanimationfactory.h"
#include "aknsrldefaultrenderer.h"
#include "aknsrleffectpluginadjustchannels.h"
#include "aknsaltimingmodelrelative.h"
#include "aknsalanimationvalue.h"
#include "aknssrv.h"

#include "skinningmodule.h"

enum TMyLayoutType
    {
    EAknsLayoutUnknown      = 0,
    EAknsLayoutPortrait     = 1,
    EAknsLayoutLandscape    = 2,
    EAknsLayoutLegacy       = 3
    };

const TUid KEffectUid = { 0x12345678 };


// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CSkinningModule::Case
// Returns a test case by number.
//
// This function contains an array of all available test cases
// i.e pair of case name and test function. If case specified by parameter
// aCaseNumber is found from array, then that item is returned.
//
// The reason for this rather complicated function is to specify all the
// test cases only in one place. It is not necessary to understand how
// function pointers to class member functions works when adding new test
// cases. See function body for instructions how to add new test case.
// -----------------------------------------------------------------------------
//
const TCaseInfo CSkinningModule::Case (
    const TInt aCaseNumber ) const
     {

    /**
    * To add new test cases, implement new test case function and add new
    * line to KCases array specify the name of the case and the function
    * doing the test case
    * In practice, do following
    * 1) Make copy of existing test case function and change its name
    *    and functionality. Note that the function must be added to
    *    SkinningModule.cpp file and to SkinningModule.h
    *    header file.
    *
    * 2) Add entry to following KCases array either by using:
    *
    * 2.1: FUNCENTRY or ENTRY macro
    * ENTRY macro takes two parameters: test case name and test case
    * function name.
    *
    * FUNCENTRY macro takes only test case function name as a parameter and
    * uses that as a test case name and test case function name.
    *
    * Or
    *
    * 2.2: OOM_FUNCENTRY or OOM_ENTRY macro. Note that these macros are used
    * only with OOM (Out-Of-Memory) testing!
    *
    * OOM_ENTRY macro takes five parameters: test case name, test case
    * function name, TBool which specifies is method supposed to be run using
    * OOM conditions, TInt value for first heap memory allocation failure and
    * TInt value for last heap memory allocation failure.
    *
    * OOM_FUNCENTRY macro takes test case function name as a parameter and uses
    * that as a test case name, TBool which specifies is method supposed to be
    * run using OOM conditions, TInt value for first heap memory allocation
    * failure and TInt value for last heap memory allocation failure.
    */

    static TCaseInfoInternal const KCases[] =
        {
        ENTRY( "Skins: Start server",                     CSkinningModule::TestCaseStartServer ),
//===========================================================================================================
        ENTRY( "Skins - Rendering: Master layout ops",    CSkinningModule::TestCaseMasterLayoutOpsL ),
        ENTRY( "Skins - Animation Factory cases",         CSkinningModule::TestCaseAnimationFactoryOpsL ),
        ENTRY( "Skins - Render Utils cases",              CSkinningModule::TestCaseRenderUtilsOps ),
//===========================================================================================================
        ENTRY( "Skins - Basic Background Context cases",  CSkinningModule::TestCaseBasicBackgroundControlContextOpsL ),
        ENTRY( "Skins - Listbox Background Context cases",CSkinningModule::TestCaseListBoxBackgroundControlContextOpsL ),
        ENTRY( "Skins - Layered Background Context cases",CSkinningModule::TestCaseLayeredBackgroundControlContextOpsL ),
        // No cases for Framed Background Context since they need CoeEnv.
        ENTRY( "Skins - Masked Background Context cases", CSkinningModule::TestCaseMaskedBackgroundControlContextOpsL ),
        ENTRY( "Skins - Combined Background Context cases", CSkinningModule::TestCaseCombinedBackgroundControlContextOpsL ),
        //OOM_ENTRY( "Loop test with OOM", CSkinningModule::LoopTest, ETrue, 2, 3),
        //OOM_FUNCENTRY( CSkinningModule::PrintTest, ETrue, 1, 3 ),
        };

    // Verify that case number is valid
    if( (TUint) aCaseNumber >= sizeof( KCases ) /
                               sizeof( TCaseInfoInternal ) )
        {
        // Invalid case, construct empty object
        TCaseInfo null( (const TText*) L"" );
        null.iMethod = NULL;
        null.iIsOOMTest = EFalse;
        null.iFirstMemoryAllocation = 0;
        null.iLastMemoryAllocation = 0;
        return null;
        }

    // Construct TCaseInfo object and return it
    TCaseInfo tmp ( KCases[ aCaseNumber ].iCaseName );
    tmp.iMethod = KCases[ aCaseNumber ].iMethod;
    tmp.iIsOOMTest = KCases[ aCaseNumber ].iIsOOMTest;
    tmp.iFirstMemoryAllocation = KCases[ aCaseNumber ].iFirstMemoryAllocation;
    tmp.iLastMemoryAllocation = KCases[ aCaseNumber ].iLastMemoryAllocation;
    return tmp;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseStartServer
//
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseStartServer( TTestResult& aResult )
    {
    // The following test case will cause User::Invariant panic.
    // We need to allow this.
    TestModuleIf().SetExitReason( CTestModuleIf::EPanic, 0 );

    TInt err = KErrNone;
    err = CAknsSrv::ThreadStart();
    if ( err == KErrNoMemory )
        {
        err = KErrNone;
        }
    TestModuleIf().SetExitReason( CTestModuleIf::ENormal, KErrNone );

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "StartServer finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseMasterLayoutOpsL
//
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseMasterLayoutOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;
    // starting CDL engine.
    /*CActiveScheduler* activeScheduler = new CActiveScheduler;
    CActiveScheduler::Install( activeScheduler );

    iClient.Connect( this );
    CCdlEngineRef* myCDLEngine = CdlEngine::CreateCdlEngineL();
    CdlEngine::StartGlobalCustomisationL();

    CAknsRlMasterLayout* master = CAknsRlMasterLayout::NewL();
    TAknsItemID id2 = master->GetParent( KAknsIIDQsnBgAreaMain );
    if ( id2 != KAknsIIDQsnBgScreen )
        {
        err = KErrGeneral;
        }
    TRect rect;
    TRect parentRect;
    TBool found = master->GetItemLayout( KAknsIIDQsnBgAreaMain, parentRect, rect );
    if ( !found )
        {
        err = KErrGeneral;
        }

    TAknsItemID nonValidId;
    nonValidId.Set( 0xFFFFFF, 0xFFFFFF );
    found = master->GetItemLayout( nonValidId, parentRect, rect );
    if ( found )
        {
        err = KErrGeneral;
        }
    TInt currentLayoutId = master->CurrentLayoutType();
    TSize currentLayoutSize = master->CurrentLayoutSize();

    iClient.Close();
    CActiveScheduler::Install( NULL );
    delete activeScheduler;*/
    OpenSessionWithNoObserver();
    CAknsRlDefaultRenderer* defaultRenderer = CAknsRlDefaultRenderer::NewL( &iClient );
    if ( !defaultRenderer )
        {
        err = KErrNoMemory;
        }

    CAknsEffectQueueItemData* effectQueue = CAknsEffectQueueItemData::NewL();
    MAknsRlCommandIterator* myCommandIterator = effectQueue->CreateCommandIteratorL();
    TInt* i = 0;
    myCommandIterator->CleanupOperation( i );

    TAknsRlRenderOpParam myOpParams;
    myOpParams.iInputLayerAStatus = KAknsRlLayerRGBOnly;
    myOpParams.iInputLayerAIndex = 0;
    myOpParams.iInputLayerBStatus = KAknsRlLayerAlphaOnly;
    myOpParams.iInputLayerBIndex = 1;
    myOpParams.iOutputLayerStatus = KAknsRlLayerRGBA;
    myOpParams.iOutputLayerIndex = 0;
    effectQueue->SetRefItem( KAknsIIDQsnBgAreaMain );
    effectQueue->SetInputLayer( 0 );
    effectQueue->SetInputLayerMode( KAknsRlLayerRGBOnly );
    effectQueue->SetOutputLayer( 1 );
    effectQueue->SetOutputLayerMode( KAknsRlLayerRGBA  );

    CAknsEffectCommand* effectCmd = CreateEffectCommandLC( myOpParams );
    effectQueue->AppendCommandL( effectCmd );
    CleanupStack::PopAndDestroy( effectCmd );

    if( effectQueue->RefItem() != KAknsIIDQsnBgAreaMain ||
        effectQueue->InputLayer() != 0 ||
        effectQueue->InputLayerMode() != KAknsRlLayerRGBOnly ||
        effectQueue->OutputLayer() != 1 ||
        effectQueue->OutputLayerMode() != KAknsRlLayerRGBA )
        {
        err = KErrGeneral;
        }

    CloseSession();

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "MasterLayoutOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseAnimationFactoryOpsL
//
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseAnimationFactoryOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TInt uid = KAknsRlEffectPluginAdjustChannelsUID;
    TAknsItemID iid;
    iid.Set( uid, 0 );
    TUid myUid = TUid::Uid( KAknsRlEffectPluginAdjustChannelsUID );
    TUid myUid2 = TUid::Uid( KAknsAlValueLinearRangeUID );
    TUid myUid3 = TUid::Uid( KAknsAlTimingModelRelativeUID );


    CAknsRlEffectPlugin* plugin =
        AknsAlAnimationFactory::CreateEffectPluginL( myUid );
    if ( !plugin || plugin->EffectUid() != myUid )
        {
        err = KErrArgument;
        }
    delete plugin;

    MAknsAlAnimationValue* animationValue = AknsAlAnimationFactory::CreateAnimationValueL( myUid2 );
    if ( !animationValue )
        {
        err = KErrArgument;
        }
    delete animationValue;
    MAknsAlTimingModel* timingModel = AknsAlAnimationFactory::CreateTimingModelL( myUid3 );
    if ( !timingModel )
        {
        err = KErrArgument;
        }
    delete timingModel;

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "AnimationFactoryOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseRenderUtilsOps
//
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseRenderUtilsOps( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TAknsItemID iid = KAknsIIDQsnFrCall3RectCenter;
    if ( AknsRlUtils::IsPopupCenter( iid ) )
        {
        err = KErrGeneral;
        }
    iid = KAknsIIDQsnFrPopupCenter;
    if ( !AknsRlUtils::IsPopupCenter( iid ) )
        {
        err = KErrGeneral;
        }

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "RenderUtilsOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseBasicBackgroundControlContextOpsL
// Basic background context operations.
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseBasicBackgroundControlContextOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TRect initialRect( TSize( 100, 100 ) );
    TRect nextRect( TSize( 50, 50 ) );
    TAknsItemID id = KAknsIIDQsnCpClockAnalogueFace1;
    TAknsItemID id2 = KAknsIIDQsnCpClockAnalogueFace2;

    CAknsBasicBackgroundControlContext* myCtx =
        CAknsBasicBackgroundControlContext::NewL( id, initialRect, EFalse );
    CleanupStack::PushL( myCtx );

    myCtx->SetBitmap( id2 );
    myCtx->SetRect( nextRect );
    myCtx->SetParentPos( TPoint( 0,0 ) );
    myCtx->SetParentContext( NULL );

    if ( !myCtx->IsCompatibleWithType( EAknsControlContextTypeBasic ) ||
         !myCtx->IsCompatibleWithType( EAknsControlContextTypeUnknown ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeLayered ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeListBox ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeFrame ))
        {
        err = KErrGeneral;
        }

    CleanupStack::PopAndDestroy( myCtx );

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "BasicBackgroundControlContextOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseListBoxBackgroundControlContextOpsL
// Listbox background context operations.
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseListBoxBackgroundControlContextOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TRect initialRect( TSize( 100, 100 ) );
    TRect nextRect( TSize( 50, 50 ) );
    TRect rect3( TSize( 20, 20 ) );
    TRect rect4( TSize( 200, 200 ) );
    TAknsItemID id = KAknsIIDQsnCpClockAnalogueFace1;
    TAknsItemID id2 = KAknsIIDQsnCpClockAnalogueFace2;
    TAknsItemID id3 = KAknsIIDQgnLogoEmpty;
    TAknsItemID id4 = KAknsIIDQsnBgColumn0;

    CAknsListBoxBackgroundControlContext* myCtx =
        CAknsListBoxBackgroundControlContext::NewL( id, initialRect, EFalse, id2, nextRect );
    CleanupStack::PushL( myCtx );

    myCtx->SetTiledBitmap( id3 );
    myCtx->SetTiledRect( rect3 );
    myCtx->SetBottomBitmap( id4 );
    myCtx->SetBottomRect( rect4 );

    if ( !myCtx->IsCompatibleWithType( EAknsControlContextTypeBasic ) ||
         !myCtx->IsCompatibleWithType( EAknsControlContextTypeUnknown ) ||
         !myCtx->IsCompatibleWithType( EAknsControlContextTypeListBox ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeLayered ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeFrame ))
        {
        err = KErrGeneral;
        }

    // Skipped case to update context since we cannot instantiate singleton.

    CleanupStack::PopAndDestroy( myCtx );

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "ListBoxBackgroundControlContextOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseLayeredBackgroundControlContextOpsL
// Layered background context operations.
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseLayeredBackgroundControlContextOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TRect initialRect( TSize( 100, 100 ) );
    TRect nextRect( TSize( 50, 50 ) );
    TRect rect3( TSize( 20, 20 ) );
    TAknsItemID id = KAknsIIDQsnCpClockAnalogueFace1;
    TAknsItemID id2 = KAknsIIDQsnCpClockAnalogueFace2;
    TAknsItemID id3 = KAknsIIDQgnLogoEmpty;

    CAknsLayeredBackgroundControlContext* myCtx =
        CAknsLayeredBackgroundControlContext::NewL( id, initialRect, EFalse, 2 );
    CleanupStack::PushL( myCtx );

    myCtx->SetLayerImage( 0, id2 );
    myCtx->SetLayerImage( 1, id3 );
    myCtx->SetLayerRect( 0, nextRect );
    myCtx->SetLayerRect( 1, rect3 );

    if ( !myCtx->IsCompatibleWithType( EAknsControlContextTypeBasic ) ||
         !myCtx->IsCompatibleWithType( EAknsControlContextTypeUnknown ) ||
         !myCtx->IsCompatibleWithType( EAknsControlContextTypeLayered ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeListBox ) ||
         myCtx->IsCompatibleWithType( EAknsControlContextTypeFrame ))
        {
        err = KErrGeneral;
        }

    CleanupStack::PopAndDestroy( myCtx );

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "LayeredBackgroundControlContextOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseMaskedBackgroundControlContextOpsL
// Masked background context operations.
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseMaskedBackgroundControlContextOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TRect initialRect( TSize( 100, 100 ) );
    TRect nextRect( TSize( 50, 50 ) );
    TRect rect3( TSize( 20, 20 ) );
    TAknsItemID id = KAknsIIDQsnCpClockAnalogueFace1;
    TAknsItemID id2 = KAknsIIDQsnCpClockAnalogueFace2;
    TAknsItemID id3 = KAknsIIDQgnLogoEmpty;

    CAknsMaskedLayerBackgroundControlContext* myCtx = CAknsMaskedLayerBackgroundControlContext::NewL(
        id, initialRect, EFalse, 2 );
    CleanupStack::PushL( myCtx );
    myCtx->SetLayerImage( 0, id2 );
    myCtx->SetLayerImage( 1, id3 );
    myCtx->SetLayerRect( 0, nextRect );
    myCtx->SetLayerRect(1, rect3 );
    // Skipped myCtx->SetLayerMaskAndSizeL() since we cannot get CEikEnv::Static()
    CleanupStack::PopAndDestroy( myCtx );
    
    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "MaskedBackgroundControlContextOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// CSkinningModule::TestCaseCombinedBackgroundControlContextOpsL
// Combined background context operations.
// -----------------------------------------------------------------------------
//
TInt CSkinningModule::TestCaseCombinedBackgroundControlContextOpsL( TTestResult& aResult )
    {
    TInt err = KErrNone;

    TRect initialRect( TSize( 100, 100 ) );
    TRect nextRect( TSize( 50, 50 ) );
    TRect rect3( TSize( 20, 20 ) );
    TAknsItemID id = KAknsIIDQsnCpClockAnalogueFace1;
    TAknsItemID id3 = KAknsIIDQgnLogoEmpty;

    CAknsCombinedBackgroundControlContext* myCtx = 
        CAknsCombinedBackgroundControlContext::NewL( EFalse );
    CleanupStack::PushL( myCtx );

    CAknsBasicBackgroundControlContext* mySubCtx1 = 
        CAknsBasicBackgroundControlContext::NewL( id, initialRect, EFalse );

    CAknsBasicBackgroundControlContext* mySubCtx2 = 
        CAknsBasicBackgroundControlContext::NewL( id3, rect3, EFalse );

    MAknsControlContext* retrievedCtx = myCtx->GetControlContext( 0 );
    if ( retrievedCtx )
        {
        // We haven't add anything to the combined context, so this should fail.
        err = KErrGeneral;
        }

    myCtx->AddControlContext( mySubCtx1 );
    retrievedCtx = myCtx->GetControlContext( 0 );
    if ( !retrievedCtx )
        {
        // We have added one context, so this should not fail.
        err = KErrGeneral;
        }
    myCtx->AddControlContext( mySubCtx2 );
    myCtx->RemoveControlContext( 0 );
    myCtx->GetControlContext( 0 );
    if ( !retrievedCtx )
        {
        // We added two contexts, then removed one, so this should not fail.
        err = KErrGeneral;
        }
    myCtx->RemoveControlContext( 0 ); // remove the last remaining one.
    CleanupStack::PopAndDestroy( myCtx );

    // Sets test case result and description(Maximum size is KStifMaxResultDes)
    _LIT( KDescription, "CombinedBackgroundControlContextOps finished" );
    aResult.SetResult( err, KDescription );
    return err;
    }

// -----------------------------------------------------------------------------
// Help method - close session.
// -----------------------------------------------------------------------------
//
void CSkinningModule::CloseSession()
    {
    iClient.Close();
    iFbsSession.Disconnect();
    }

// -----------------------------------------------------------------------------
// Help method - connect w/o observer
// -----------------------------------------------------------------------------
//
void CSkinningModule::OpenSessionWithNoObserver()
    {
    TInt err = iClient.Connect();
    err = iFbsSession.Connect();
    }

// -----------------------------------------------------------------------------
// Help method - connect w/o observer
// -----------------------------------------------------------------------------
//
// Help method - connect w/ observer
void CSkinningModule::OpenSessionWithObserver()
    {
    TInt err = iClient.Connect( this );
    err = iFbsSession.Connect();
    }

// -----------------------------------------------------------------------------
// Help method - create effect command.
// -----------------------------------------------------------------------------
//
CAknsEffectCommand* CSkinningModule::CreateEffectCommandLC( TAknsRlRenderOpParam& aOpParams )
    {
    CAknsEffectCommand* effectCmd = CAknsEffectCommand::NewL();
    CleanupStack::PushL( effectCmd );
    effectCmd->SetEffectUid( KEffectUid );
    effectCmd->SetLayerConf( aOpParams );
    return effectCmd;
    }

//  End of File

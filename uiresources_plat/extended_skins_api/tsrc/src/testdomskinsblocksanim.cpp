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
* Description:  test aknseffectanim.h
*
*/



#include <aknseffectanim.h>
#include <aknsitemid.h>
#include <aknsutils.h>
#include <coemain.h>
#include <aknsconstants.h>
#include <stifparser.h>

#include "testdomskins.h"
#include "aknseffectanimext.h"

// CONSTANTS
const TInt KLayerWidth = 20;
const TInt KLayerHeight = 10;
const TInt KIdling = 5;
const TInt KGcRectAx = 50;
const TInt KGcRectAy = 50;
const TInt KGcRectBx = 10;
const TInt KGcRectBy = 10;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimNewL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimNewL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimNewL, "In EffectAnim NewL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimNewL );
    // Print to log file
    iLog->Log( KTestAnimNewL );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );

    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );
    STIF_ASSERT_NOT_NULL( anim );

    CleanupStack::Pop( anim );
    delete anim;
    anim = NULL;
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimConstructFromSkinL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimConstructFromSkinL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimConstructFromSkinL, "In EffectAnim ConstructFromSkinL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimConstructFromSkinL );
    // Print to log file
    iLog->Log( KTestAnimConstructFromSkinL );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TBool skin = anim->ConstructFromSkinL( KAknsIIDQgnIndiTpDialler );
    STIF_ASSERT_FALSE( skin );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimStartL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimStartL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimStart, "In EffectAnim Start" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimStart );
    // Print to log file
    iLog->Log( KTestAnimStart );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->Start();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimStopL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimStopL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimStop, "In EffectAnim Stop" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimStop );
    // Print to log file
    iLog->Log( KTestAnimStop );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->Start();
    if ( err != KErrNone )
        {
        CleanupStack::PopAndDestroy( anim );
        CleanupStack::PopAndDestroy( observer );
        return err;
        }

    err = anim->Stop();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimPauseL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimPauseL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimPause, "In EffectAnim Pause" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimPause );
    // Print to log file
    iLog->Log( KTestAnimPause );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->Start();
    if ( err != KErrNone )
        {
        CleanupStack::PopAndDestroy( anim );
        CleanupStack::PopAndDestroy( observer );
        return err;
        }

    err = anim->Pause();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimContinueL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimContinueL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimContinue, "In EffectAnim Continue" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimContinue );
    // Print to log file
    iLog->Log( KTestAnimContinue );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->Start();
    if ( err != KErrNone )
        {
        CleanupStack::PopAndDestroy( anim );
        CleanupStack::PopAndDestroy( observer );
        return err;
        }

    err = anim->Pause();
    if ( err != KErrNone )
        {
        CleanupStack::PopAndDestroy( anim );
        CleanupStack::PopAndDestroy( observer );
        return err;
        }

    err = anim->Continue();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimStateL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimStateL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimState, "In EffectAnim State" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimState );
    // Print to log file
    iLog->Log( KTestAnimState );

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->Start();
    if ( err != KErrNone )
        {
        CleanupStack::PopAndDestroy( anim );
        CleanupStack::PopAndDestroy( observer );
        return err;
        }

    TInt state = anim->State();
    STIF_ASSERT_EQUALS( 1, state );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimRenderL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimRenderL( CStifItemParser& aItem )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimRender, "In EffectAnim Render" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimRender );
    // Print to log file
    iLog->Log( KTestAnimRender );

    TInt num = 0;
    TInt err = aItem.GetNextInt( num );
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    anim->ConstructFromSkinL( KAknsIIDQgnIndiTpDialler );
    TBool render = ETrue;
    TRect gcRect( KGcRectAx, KGcRectAy, KGcRectBx, KGcRectBy );
    CFbsBitGc* fbsBitgc = CFbsBitGc::NewL();
    CleanupStack::PushL( fbsBitgc );
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    CBitmapContext& bitmapGc = gc;

    switch( num )
        {
        case 1:
            render = anim->Render( *fbsBitgc, gcRect );
            break;
        case 2:
            render = anim->Render( gc, gcRect );
            break;
        case 3:
            render = anim->Render( bitmapGc, gcRect );
            break;
        default:
            CleanupStack::PopAndDestroy( fbsBitgc );
            CleanupStack::PopAndDestroy( anim );
            CleanupStack::PopAndDestroy( observer );
            return KErrNotSupported;
        }
    STIF_ASSERT_FALSE( render );

    CleanupStack::PopAndDestroy( fbsBitgc );
    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimOutputRgbL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimOutputRgbL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimOutputRgb, "In EffectAnim OutputRgb" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimOutputRgb );
    // Print to log file
    iLog->Log( KTestAnimOutputRgb );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    anim->ConstructFromSkinL( KAknsIIDQgnIndiTpDialler );

    const CFbsBitmap* bitmap = anim->OutputRgb();
    STIF_ASSERT_NULL( bitmap );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimOutputAlphaL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimOutputAlphaL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimOutputAlpha, "In EffectAnim OutputAlpha" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimOutputAlpha );
    // Print to log file
    iLog->Log( KTestAnimOutputAlpha );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    anim->ConstructFromSkinL( KAknsIIDQgnIndiTpDialler );

    const CFbsBitmap* mask = anim->OutputAlpha();
    STIF_ASSERT_NULL( mask );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimMinimumSizeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimMinimumSizeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimMinimumSize, "In EffectAnim MinimumSize" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimMinimumSize );
    // Print to log file
    iLog->Log( KTestAnimMinimumSize );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize miniSize = anim->MinimumSize();
    STIF_ASSERT_EQUALS( 3, miniSize.iWidth );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimSizeL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimSizeL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimSize, "In EffectAnim Size" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimSize );
    // Print to log file
    iLog->Log( KTestAnimSize );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize size = anim->Size();
    STIF_ASSERT_EQUALS( 0, size.iWidth );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimNeedsInputLayerL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimNeedsInputLayerL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimNeedsInputLayer, "In EffectAnim NeedsInputLayer" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimNeedsInputLayer );
    // Print to log file
    iLog->Log( KTestAnimNeedsInputLayer );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TBool needs = anim->NeedsInputLayer();
    STIF_ASSERT_TRUE( needs );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimBeginConfigInputLayersL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimBeginConfigInputLayersL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimBeginConfigInputLayersL, "In EffectAnim BeginConfigInputLayersL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimBeginConfigInputLayersL );
    // Print to log file
    iLog->Log( KTestAnimBeginConfigInputLayersL );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize layer( KLayerWidth, KLayerHeight );
    anim->BeginConfigInputLayersL( layer, EFalse );

    anim->EndConfigInputLayersL();
    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimInputRgbGcL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimInputRgbGcL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimInputRgbGc, "In EffectAnim InputRgbGc" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimInputRgbGc );
    // Print to log file
    iLog->Log( KTestAnimInputRgbGc );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize layer( KLayerWidth, KLayerHeight );
    anim->BeginConfigInputLayersL( layer, EFalse );

    CFbsBitGc* rgbGc = anim->InputRgbGc();
    STIF_ASSERT_NOT_NULL( rgbGc );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimInputAlphaGcL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimInputAlphaGcL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimInputAlphaGc, "In EffectAnim InputAlphaGc" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimInputAlphaGc );
    // Print to log file
    iLog->Log( KTestAnimInputAlphaGc );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize layer( KLayerWidth, KLayerHeight );
    anim->BeginConfigInputLayersL( layer, EFalse );

    CFbsBitGc* alphaGc = anim->InputAlphaGc();
    STIF_ASSERT_NOT_NULL( alphaGc );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimEndConfigInputLayersL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimEndConfigInputLayersL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimEndConfigInputLayersL, "In EffectAnim EndConfigInputLayersL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimEndConfigInputLayersL );
    // Print to log file
    iLog->Log( KTestAnimEndConfigInputLayersL );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TSize layer( KLayerWidth, KLayerHeight );
    anim->BeginConfigInputLayersL( layer, EFalse );

    anim->EndConfigInputLayersL();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimUpdateOutputL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimUpdateOutputL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimUpdateOutput, "In EffectAnim UpdateOutput" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimUpdateOutput );
    // Print to log file
    iLog->Log( KTestAnimUpdateOutput );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TInt err = anim->UpdateOutput();

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return err;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimSetIdlingL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimSetIdlingL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimSetIdling, "In EffectAnim SetIdling" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimSetIdling );
    // Print to log file
    iLog->Log( KTestAnimSetIdling );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    anim->SetIdling( KIdling );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestAnimIsIdlingL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestAnimIsIdlingL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestAnimIsIdling, "In EffectAnim IsIdling" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestAnimIsIdling );
    // Print to log file
    iLog->Log( KTestAnimIsIdling );


    CAknsEffectAnimObserver* observer = new ( ELeave ) CAknsEffectAnimObserver;
    CleanupStack::PushL( observer );
    AknsUtils::SetAvkonSkinEnabledL( ETrue );
    CAknsEffectAnim* anim = CAknsEffectAnim::NewL( observer );
    CleanupStack::PushL( anim );

    TBool isIdling = anim->IsIdling();
    STIF_ASSERT_FALSE( isIdling );

    CleanupStack::PopAndDestroy( anim );
    CleanupStack::PopAndDestroy( observer );
    return KErrNone;

    }


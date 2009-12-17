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
* Description:  Test AknsDrawUtils.h
*
*/


#include <aknsdrawutils.h>
#include <aknsbasicbackgroundcontrolcontext.h>

#include "testsdkskins.h"
#include "testsdkskinsobjectprovider.h"
#include "testsdkskinscontrol.h"

const TInt KLength = 10;

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUControlContextL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUControlContextL( CStifItemParser& /*aItem*/ )
    {
    CTestSDKSkinsObjectProvider* provider = new (ELeave) CTestSDKSkinsObjectProvider;
    CleanupStack::PushL( provider );
    STIF_ASSERT_NOT_NULL( provider );
    
    MAknsControlContext* context = AknsDrawUtils::ControlContext( provider );
    CleanupStack::PushL( context );
    
    CleanupStack::PopAndDestroy( context );
    CleanupStack::PopAndDestroy( provider );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUControlContextOfParentL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUControlContextOfParentL( CStifItemParser& /*aItem*/ )
    {
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    MAknsControlContext* context = AknsDrawUtils::ControlContextOfParent( control );
    CleanupStack::PushL( context );
    
    CleanupStack::PopAndDestroy( context );
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();

    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    
    TBool draw = AknsDrawUtils::Background( instance, 
                                            context, 
                                            gc, 
                                            rect );
    
    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundFPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundFPL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    
    TBool draw = AknsDrawUtils::Background( instance, 
                                            context, 
                                            control, 
                                            gc, 
                                            rect );
    
    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundSPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundSPL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    control->ActivateGc();
    
    TBool draw = AknsDrawUtils::Background( instance, 
                                            context, 
                                            control, 
                                            gc, 
                                            rect, 
                                            KAknsDrawParamDefault );
    
    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawBackgroundL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawBackgroundL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    control->ActivateGc();
    
    MAknsSkinInstance* instance = AknsUtils::SkinInstance();
    
    TBool draw = AknsDrawUtils::DrawBackground( instance, 
                                                context, 
                                                control, 
                                                gc, 
                                                pointTL, 
                                                rect, 
                                                KAknsDrawParamDefault );
    
    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundBetweenRectsFPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundBetweenRectsFPL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    
    control->ActivateGc();
    
    TBool draw = AknsDrawUtils::BackgroundBetweenRects( AknsUtils::SkinInstance(), 
                                                        context, 
                                                        gc, 
                                                        outRect, 
                                                        inRect );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundBetweenRectsL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundBetweenRectsL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::BackgroundBetweenRects( AknsUtils::SkinInstance(), 
                                                        context, 
                                                        control, 
                                                        gc, 
                                                        outRect, 
                                                        inRect );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUBackgroundBetweenRectsSPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUBackgroundBetweenRectsSPL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::BackgroundBetweenRects( AknsUtils::SkinInstance(), 
                                                        context, 
                                                        control, 
                                                        gc, 
                                                        outRect, 
                                                        inRect, 
                                                        KAknsDrawParamDefault );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUHasBitmapBackgroundL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUHasBitmapBackgroundL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    TRect rect( pointTL, pointBR );
    CAknsBasicBackgroundControlContext* context = 
        CAknsBasicBackgroundControlContext::NewL( itemID, rect, ETrue );
    CleanupStack::PushL( context );
    STIF_ASSERT_NOT_NULL( context );
    
    TBool draw = AknsDrawUtils::HasBitmapBackground( AknsUtils::SkinInstance(), 
                                                     context );
    STIF_ASSERT_TRUE( draw );
    
    CleanupStack::PopAndDestroy( context );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawCachedImageL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawCachedImageL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint pointTL( 0, 0 );
    TPoint outPoint( KOutPoint, KOutPoint );
    TRect outRect( pointTL, outPoint );
    
    AknsDrawUtils::DrawCachedImage( AknsUtils::SkinInstance(),
                                    gc, 
                                    outRect, 
                                    itemID );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawCachedImageFBSL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawCachedImageFBSL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;
    
    CFbsBitGc* gc = NULL;
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint pointTL( 0, 0 );
    TPoint outPoint( KOutPoint, KOutPoint );
    TRect outRect( pointTL, outPoint );
    
    AknsDrawUtils::DrawCachedImage( AknsUtils::SkinInstance(),
                                    *gc, 
                                    outRect, 
                                    itemID );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawFrameL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawFrameL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID frameID;
    TAknsItemID centerID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::DrawFrame( AknsUtils::SkinInstance(), 
                                           gc, 
                                           outRect, 
                                           inRect, 
                                           frameID, 
                                           centerID );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUPrepareFrameL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUPrepareFrameL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID frameID;
    TAknsItemID centerID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::PrepareFrame( AknsUtils::SkinInstance(), 
                                              outRect, 
                                              inRect, 
                                              frameID, 
                                              centerID );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawFrameSPL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawFrameSPL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID frameID;
    TAknsItemID centerID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    
    CFbsBitGc* gc = NULL;
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::DrawFrame( AknsUtils::SkinInstance(), 
                                           *gc, 
                                           outRect, 
                                           inRect, 
                                           frameID, 
                                           centerID, 
                                           KAknsDrawParamDefault );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawFrameFBSL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawFrameFBSL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID frameID;
    TAknsItemID centerID;
    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    
    CFbsBitGc* gc = NULL;
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    const TInt KInPoint = 40;
    TPoint inPoint( KInPoint, KInPoint );
    TRect outRect( pointTL, outPoint );
    TRect inRect( pointBR, inPoint );
    
    TBool draw = AknsDrawUtils::DrawFrame( AknsUtils::SkinInstance(), 
                                           *gc, 
                                           outRect, 
                                           inRect, 
                                           frameID, 
                                           centerID );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUDrawFramePartL
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUDrawFramePartL( CStifItemParser& /*aItem*/ )
    {
    TAknsItemID itemID;

    TPoint pointTL( 0, 0 );
    TPoint pointBR( KLength, KLength );
    
    CWindowGc& gc = CCoeEnv::Static()->SystemGc();
    
    CTestSDKSkinsControl* control = CTestSDKSkinsControl::NewL();
    CleanupStack::PushL( control );
    STIF_ASSERT_NOT_NULL( control );
    control->ActivateGc();
    
    const TInt KOutPoint = 50;
    TPoint outPoint( KOutPoint, KOutPoint );
    TRect rect( pointTL, outPoint );
    
    TBool draw = AknsDrawUtils::DrawFramePart( AknsUtils::SkinInstance(), 
                                           gc, 
                                           rect,
                                           itemID, 
                                           EAknsFrameIndexTl  );

    control->DeactivateGc();
    CleanupStack::PopAndDestroy( control );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUIsListSeperatorLines
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUIsListSeperatorLines( CStifItemParser& /*aItem*/ )
    {
    TBool seperator = AknsDrawUtils::IsListSeperatorLines( AknsUtils::SkinInstance() );
    STIF_ASSERT_TRUE( seperator );
    
    return KErrNone;
    
    }

// -----------------------------------------------------------------------------
// CTestSDKSkins::TestDUSlidingMode
// -----------------------------------------------------------------------------
TInt CTestSDKSkins::TestDUSlidingMode( CStifItemParser& /*aItem*/ )
    {
    TSlidingMode mode = AknsDrawUtils::SlidingMode( AknsUtils::SkinInstance() );
    STIF_ASSERT_TRUE( mode == ESlidingDisabled );
    
    return KErrNone;
    
    }

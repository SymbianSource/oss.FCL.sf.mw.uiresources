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
* Description:  test aknssrvchunklookup.h
*
*/



#include <aknssrvchunklookup.h>
#include <aknssrvclient.h>
#include <aknsconstants.h>
#include <fbs.h>

#include "testdomskins.h"

// CONSTANTS
const TInt KLayoutWidth = 50;
const TInt KLayoutHeight = 50;
// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestChunkLookupAndCreateDefL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestChunkLookupAndCreateDefL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestChunkLookupAndCreateDefL, "In ChunkLookup LookupAndCreateDefL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestChunkLookupAndCreateDefL );
    // Print to log file
    iLog->Log( KTestChunkLookupAndCreateDefL );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsSrvChunkLookup* srvChunkLookup = srvSession.CreateChunkLookupL();
    CleanupStack::PushL( srvChunkLookup );

    CAknsItemDef* itemDef = NULL;
    itemDef = srvChunkLookup->LookupAndCreateDefL( KAknsIIDQgnIndiTpDialler );
    STIF_ASSERT_NOT_NULL( itemDef );

    CleanupStack::PopAndDestroy( srvChunkLookup );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestChunkLookupAndCreScaItemL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestChunkLookupAndCreScaItemL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestChunkLookupAndCreateScalableItemL, "In ChunkLookup LookupAndCreateScalableItemL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestChunkLookupAndCreateScalableItemL );
    // Print to log file
    iLog->Log( KTestChunkLookupAndCreateScalableItemL );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsSrvChunkLookup* srvChunkLookup = srvSession.CreateChunkLookupL();
    CleanupStack::PushL( srvChunkLookup );

    TInt morphing = 0;
    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* maskBitmap = NULL;
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( maskBitmap );
    srvChunkLookup->LookupAndCreateScalableItemL(
            KAknsIIDQgnIndiTpDialler, 1, TSize( KLayoutWidth, KLayoutHeight ),
            bitmap, maskBitmap, morphing );

    CleanupStack::Pop( maskBitmap );
    delete maskBitmap;
    CleanupStack::Pop( bitmap);
    delete bitmap;
    CleanupStack::PopAndDestroy( srvChunkLookup );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestChunkBeginRenderL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestChunkBeginRenderL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestChunkBeginRender, "In ChunkLookup BeginRender" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestChunkBeginRender );
    // Print to log file
    iLog->Log( KTestChunkBeginRender );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsSrvChunkLookup* srvChunkLookup = srvSession.CreateChunkLookupL();
    CleanupStack::PushL( srvChunkLookup );

    srvChunkLookup->BeginRender();

    srvChunkLookup->EndRender();
    CleanupStack::PopAndDestroy( srvChunkLookup );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestChunkEndRenderL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestChunkEndRenderL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestChunkEndRender, "In ChunkLookup EndRender" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestChunkEndRender );
    // Print to log file
    iLog->Log( KTestChunkEndRender );

    RAknsSrvSession srvSession;
    CleanupClosePushL( srvSession );
    TInt err = srvSession.Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    CAknsSrvChunkLookup* srvChunkLookup = srvSession.CreateChunkLookupL();
    CleanupStack::PushL( srvChunkLookup );
    srvChunkLookup->BeginRender();

    srvChunkLookup->EndRender();

    CleanupStack::PopAndDestroy( srvChunkLookup );
    CleanupStack::Pop( &srvSession );
    srvSession.Close();
    return KErrNone;

    }


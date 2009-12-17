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
* Description:  test aknspointerstore.h
*
*/



#include <aknspointerstore.h>

#include "testdomskins.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestPoiStoStorePointerL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestPoiStoStorePointerL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestPoiStoStorePointerL, "In PointerStore StorePointerL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestPoiStoStorePointerL );
    // Print to log file
    iLog->Log( KTestPoiStoStorePointerL );

    TInt pointerKey( 1 );
    TInt pointerValue( 2 );
    AknsPointerStore::StorePointerL( &pointerKey, &pointerValue );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestPoiStoRetrievePointerL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestPoiStoRetrievePointerL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestPoiStoRetrievePointer, "In PointerStore RetrievePointer" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestPoiStoRetrievePointer );
    // Print to log file
    iLog->Log( KTestPoiStoRetrievePointer );

    TInt pointerKey( 1 );
    TInt pointerValue( 2 );
    AknsPointerStore::StorePointerL( &pointerKey, &pointerValue );

    TAny* pointer = AknsPointerStore::RetrievePointer( &pointerKey );
    STIF_ASSERT_NOT_NULL( pointer );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestPoiStoRemovePointerL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestPoiStoRemovePointerL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestPoiStoRemovePointer, "In PointerStore RemovePointer" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestPoiStoRemovePointer );
    // Print to log file
    iLog->Log( KTestPoiStoRemovePointer );

    TInt pointerKey( 1 );
    TInt pointerValue( 2 );
    AknsPointerStore::StorePointerL( &pointerKey, &pointerValue );

    AknsPointerStore::RemovePointer( &pointerKey );

    return KErrNone;

    }


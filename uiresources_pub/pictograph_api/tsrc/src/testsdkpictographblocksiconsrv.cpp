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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



#include <akniconsrvclient.h>

#include "testsdkpictograph.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestSrvConnect
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestSrvConnect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestSrvConnect, "In IconSrvClient Connect" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestSrvConnect );
    // Print to log file
    iLog->Log( KTestSrvConnect );

    TInt err = RAknIconSrvClient::Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    RAknIconSrvClient::Disconnect();
    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestSrvDisconnect
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestSrvDisconnect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestSrvDisconnect, "In IconSrvClient Disconnect" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestSrvDisconnect );
    // Print to log file
    iLog->Log( KTestSrvDisconnect );

    TInt err = RAknIconSrvClient::Connect();
    if ( err != KErrNone )
        {
        return err;
        }

    RAknIconSrvClient::Disconnect();
    return KErrNone;

    }


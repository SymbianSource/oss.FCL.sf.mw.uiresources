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



#include <e32base.h>
#include <fbs.h>
#include <akninternaliconutils.h>
#include <akniconutils.h>
#include <avkon.mbg>

#include "testsdkpictograph.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestSDKPicToGraph::TestIntUtilSetAppIconL
// -----------------------------------------------------------------------------
//
TInt CTestSDKPicToGraph::TestIntUtilSetAppIconL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestSDKPicToGraph, "testsdkpictograph" );
    _LIT( KTestIntUtilSetAppIcon, "In InternalUtils SetAppIcon" );
    TestModuleIf().Printf( 0, KTestSDKPicToGraph, KTestIntUtilSetAppIcon );
    // Print to log file
    iLog->Log( KTestIntUtilSetAppIcon );

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;
    AknIconUtils::CreateIconL( bitmap, mask, AknIconUtils::AvkonIconFileName(),
            EMbmAvkonQgn_indi_mic, EMbmAvkonQgn_indi_mic_mask );
    CleanupStack::PushL( bitmap );
    CleanupStack::PushL( mask );
    AknInternalIconUtils::SetAppIcon( bitmap );

    CleanupStack::PopAndDestroy( mask );
    CleanupStack::PopAndDestroy( bitmap );
    return KErrNone;

    }


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
* Description:  test aknspkgid.h
*
*/



#include <aknspkgid.h>

#include "testdomskins.h"

// CONSTANTS
const TInt KBufSize = 32;

_LIT( KTxtContext, "123456" );

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestPkgIDCopyToDesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestPkgIDCopyToDesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestPkgIDCopyToDes, "In PkgID CopyToDes" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestPkgIDCopyToDes );
    // Print to log file
    iLog->Log( KTestPkgIDCopyToDes );

    TAknsPkgID pkgId;
    pkgId.SetFromDesL( KTxtContext );

    TBuf<KBufSize> targetContext;
    pkgId.CopyToDes( targetContext );
    STIF_ASSERT_NOT_EQUALS( 0, targetContext.Length() );

    return KErrNone;

    }

// -----------------------------------------------------------------------------
// CTestDOMSkins::TestPkgIDSetFromDesL
// -----------------------------------------------------------------------------
//
TInt CTestDOMSkins::TestPkgIDSetFromDesL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( KTestDOMSkins, "testdomskins" );
    _LIT( KTestPkgIDSetFromDesL, "In PkgID SetFromDesL" );
    TestModuleIf().Printf( 0, KTestDOMSkins, KTestPkgIDSetFromDesL );
    // Print to log file
    iLog->Log( KTestPkgIDSetFromDesL );

    TAknsPkgID pkgId;
    pkgId.SetFromDesL( KTxtContext );

    return KErrNone;

    }


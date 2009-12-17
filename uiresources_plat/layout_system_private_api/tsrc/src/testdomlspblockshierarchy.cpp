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
* Description:  layout_system_private_api
*
*/



// [INCLUDE FILES]
#include <e32svr.h>
#include <stifparser.h>
#include <stiftestinterface.h>
#include <aknlayout2hierarchy.h>
#include <aknlayoutscalable_avkon.cdl.h>

#include "testdomlayoutsystemprivate.h"
#include "testdomadapter.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHGetComponentType
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHGetComponentType( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHGetComponentType, "In TestLHGetComponentType" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHGetComponentType );
    // Print to log file
    iLog->Log( KTestLHGetComponentType );

    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    AknLayout2Hierarchy::GetComponentType( componentHandle );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHGetParamLimits
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHGetParamLimits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHGetParamLimits, "In TestLHGetParamLimits" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHGetParamLimits );
    // Print to log file
    iLog->Log( KTestLHGetParamLimits );

    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    AknLayout2Hierarchy::GetParamLimits( componentHandle );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHGetWindowComponentLayout
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHGetWindowComponentLayout( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHGetWindowComponentLayout, "In TestLHGetWindowComponentLayout" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHGetWindowComponentLayout );
    // Print to log file
    iLog->Log( KTestLHGetWindowComponentLayout );

    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    AknLayout2Hierarchy::GetWindowComponentLayout( componentHandle );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHGetTextComponentLayout
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHGetTextComponentLayout( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHGetTextComponentLayout, "In TestLHGetTextComponentLayout" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHGetTextComponentLayout );
    // Print to log file
    iLog->Log( KTestLHGetTextComponentLayout );

    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
        AknLayoutScalable_Avkon::KCdlInterfaceUidValue, AknLayoutScalable_Avkon::EApiId_text_digital );

    AknLayout2Hierarchy::GetTextComponentLayout( componentHandle );
    return KErrNone;
    }

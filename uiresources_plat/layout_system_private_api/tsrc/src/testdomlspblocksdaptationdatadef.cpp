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
#include <aknlayout2adaptationdatadef.h>

#include "testdomlayoutsystemprivate.h"
#include "testdomadapter.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLADSMultiLineTextLineL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLADSMultiLineTextLineL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLADSMultiLineTextLine, "In TestLADSMultiLineTextLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLADSMultiLineTextLine );
    // Print to log file
    iLog->Log( KTestLADSMultiLineTextLine );
    TAknTextLineLayout line;
    CTestDomAdapter* testAdapter = CTestDomAdapter::NewL();
    CleanupStack::PushL( testAdapter ); 
    TUint* dataLookup = testAdapter->GetAdpDataLookup();  
    AknLayoutAdaptationDecodeSupport::MultiLineTextLine( line, dataLookup, 4, 1, 2, 3, 4 );
    CleanupStack::PopAndDestroy( testAdapter ); 
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLADSWindowTableL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLADSWindowTableL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLADSWindowTable, "In TestLADSWindowTable" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLADSWindowTable );
    // Print to log file
    iLog->Log( KTestLADSWindowTable );
    TAknWindowLineLayout line;
    CTestDomAdapter* testAdapter = CTestDomAdapter::NewL();
    CleanupStack::PushL( testAdapter ); 
    TUint* dataLookup = testAdapter->GetAdpDataLookup();  
    dataLookup += 1;
    AknLayoutAdaptationDecodeSupport::WindowTable( line, dataLookup, 0, 0, 0, 0, 0, 0 );
    CleanupStack::PopAndDestroy( testAdapter ); 
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLADSTextTableL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLADSTextTableL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLADSTextTable, "In TestLADSTextTable" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLADSTextTable );
    // Print to log file
    iLog->Log( KTestLADSTextTable );
    TAknTextLineLayout line;
    CTestDomAdapter* testAdapter = CTestDomAdapter::NewL();
    CleanupStack::PushL( testAdapter ); 
    TUint* dataLookup = testAdapter->GetAdpDataLookup();  
    dataLookup += 1;
    AknLayoutAdaptationDecodeSupport::TextTable( line, dataLookup, 0, 0, 0, 0, 0, 0 );
    CleanupStack::PopAndDestroy( testAdapter ); 
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLADSWindowTableRectL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLADSWindowTableRectL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLADSWindowTableRect, "In TestLADSWindowTableRect" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLADSWindowTableRect );
    // Print to log file
    iLog->Log( KTestLADSWindowTableRect );
    TAknWindowLineLayout line;
    TRect rect;
    CTestDomAdapter* testAdapter = CTestDomAdapter::NewL();
    CleanupStack::PushL( testAdapter ); 
    TUint* dataLookup = testAdapter->GetAdpDataLookup();  
    dataLookup += 1;
    AknLayoutAdaptationDecodeSupport::WindowTable( line, dataLookup, 1, rect, 1, 1, 0, 0, 4 );
    CleanupStack::PopAndDestroy( testAdapter ); 
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLADSTableLimitsL
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLADSTableLimitsL( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLADSTableLimits, "In TestLADSTableLimits" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLADSTableLimits );
    // Print to log file
    iLog->Log( KTestLADSTableLimits );
    CTestDomAdapter* testAdapter = CTestDomAdapter::NewL();
    CleanupStack::PushL( testAdapter ); 
    TUint* dataLookup = testAdapter->GetAdpDataLookup();  
    AknLayoutAdaptationDecodeSupport::TableLimits( dataLookup );
    CleanupStack::PopAndDestroy( testAdapter ); 
    return KErrNone;
    }

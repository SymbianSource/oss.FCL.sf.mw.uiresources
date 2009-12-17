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
#include <aknlayout2hierarchydef.h>
#include <aknlayoutscalable_avkon.cdl.h>

#include "testdomlayoutsystemprivate.h"

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHDefaultConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHDefaultConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHDefaultConstructor, "In TestLHCHDefaultConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHDefaultConstructor );
    // Print to log file
    iLog->Log( KTestLHCHDefaultConstructor );
    TAknLayoutHierarchyComponentHandle componentHandle;
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHConstructor
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHConstructor( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHConstructor, "In TestLHCHConstructor" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHConstructor );
    // Print to log file
    iLog->Log( KTestLHCHConstructor );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHLayoutSystemId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHLayoutSystemId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHLayoutSystemId, "In TestLHCHLayoutSystemId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHLayoutSystemId );
    // Print to log file
    iLog->Log( KTestLHCHLayoutSystemId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    componentHandle.LayoutSystemId();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetLayoutSystemId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetLayoutSystemId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetLayoutSystemId, "In TestLHCHSetLayoutSystemId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetLayoutSystemId );
    // Print to log file
    iLog->Log( KTestLHCHSetLayoutSystemId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt layoutSystemId = componentHandle.LayoutSystemId();
    componentHandle.SetLayoutSystemId( layoutSystemId );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHApiId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHApiId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHApiId, "In TestLHCHApiId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHApiId );
    // Print to log file
    iLog->Log( KTestLHCHApiId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt CApiId = componentHandle.ApiId();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHComponentId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHComponentId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHComponentId, "In TestLHCHComponentId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHComponentId );
    // Print to log file
    iLog->Log( KTestLHCHComponentId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt componentId = componentHandle.ComponentId();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHOptionIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHOptionIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHOptionIndex, "In TestLHCHOptionIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHOptionIndex );
    // Print to log file
    iLog->Log( KTestLHCHOptionIndex );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt optionIndex = componentHandle.OptionIndex();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHVarietyIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHVarietyIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHVarietyIndex, "In TestLHCHVarietyIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHVarietyIndex );
    // Print to log file
    iLog->Log( KTestLHCHVarietyIndex );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt varietyIndex = componentHandle.VarietyIndex();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHColumn, "In TestLHCHColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHColumn );
    // Print to log file
    iLog->Log( KTestLHCHColumn );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt column = componentHandle.Column();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHRow, "In TestLHCHRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHRow );
    // Print to log file
    iLog->Log( KTestLHCHRow );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt row = componentHandle.Row();
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetApiId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetApiId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetApiId, "In TestLHCHSetApiId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetApiId );
    // Print to log file
    iLog->Log( KTestLHCHSetApiId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt CApiId = componentHandle.ApiId();
    componentHandle.SetApiId( CApiId );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetComponentId
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetComponentId( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetComponentId, "In TestLHCHSetComponentId" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetComponentId );
    // Print to log file
    iLog->Log( KTestLHCHSetComponentId );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt componentId = componentHandle.ComponentId();
    componentHandle.SetComponentId( componentId );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetOptionIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetOptionIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetOptionIndex, "In TestLHCHSetOptionIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetOptionIndex );
    // Print to log file
    iLog->Log( KTestLHCHSetOptionIndex );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt optionIndex = componentHandle.OptionIndex();
    componentHandle.SetOptionIndex( optionIndex );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetVarietyIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetVarietyIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetVarietyIndex, "In TestLHCHSetVarietyIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetVarietyIndex );
    // Print to log file
    iLog->Log( KTestLHCHSetVarietyIndex );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt varietyIndex = componentHandle.VarietyIndex();
    componentHandle.SetVarietyIndex( varietyIndex );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetColumn
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetColumn( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetColumn, "In TestLHCHSetColumn" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetColumn );
    // Print to log file
    iLog->Log( KTestLHCHSetColumn );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt column = componentHandle.Column();
    componentHandle.SetColumn( column );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLHCHSetRow
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLHCHSetRow( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLHCHSetRow, "In TestLHCHSetRow" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLHCHSetRow );
    // Print to log file
    iLog->Log( KTestLHCHSetRow );
    TAknLayoutHierarchyComponentHandle componentHandle( KUidAknLayoutSystemId_AknLayout2, 
            AknLayoutScalable_Avkon::KCdlInterfaceUidValue, 1 );
    TInt row = componentHandle.Row();
    componentHandle.SetRow( row );
    return KErrNone;
    }

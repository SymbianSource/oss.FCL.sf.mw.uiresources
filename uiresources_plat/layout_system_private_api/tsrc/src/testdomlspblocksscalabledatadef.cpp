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
#include <aknlayout2scalabledatadef.h>

#include "testdomlayoutsystemprivate.h"
// CONSTANTS
const TInt KTableIndex( 2 );
const TUint8  KByteCodedData[] = {
// 0x0000 for Screen
0x02,0xfe,0x00,0x00,0xfe,0xfe,0xf0,0xff,0x01,0x40,
// 0x000a for application_window
0x04,0xfe,0x00,0x00,0x00,0x00,0xf0,0xff,0x01,0x40,
// 0x0014 for aid_cell_size_toolbar2
0x06,0xfe,0x00,0x00,0xfe,0xfe,0x20,0x45,
// 0x001c for aid_popup2_width_pane
0x06,0xfe,0x00,0x00,0xfe,0xfe,0xf0,0xf0,
// 0x0024 for aid_size_cell_touch
0x07,0x07,0x01,0xff,0x01,0x00,0x1c,0x01,0x01,0xfe,0x00,0x00,0xfe,0xfe,0x1b,
0xfc,0xfe,0xdb,0x1b,0x1b,0x1b,0xfc,0xfe,0xdb,0x1b,0xfc,0xfe,0xdb,
// 0x0040 for aid_visual_content_pane
0x06,0xfe,0x00,0x28,0xfe,0xfe,0xf0,0xf0,
// 0x0048 for aid_zoom_text_msg_primary
0x06,0xfe,0x00,0x00,0xfe,0xfe,0x3a,0x13,
// 0x0050 for area_bottom_pane
0x07,0x0b,0x01,0xff,0x01,0x10,0x2c,0x01,0x01,0xfe,0x00,0xfe,0xff,0x01,0x25,
0xff,0x01,0x25,0xdb,0xfe,0xdb,0xdb,0xff,0x01,0x25,0xfe,0xdb,0xfe,0x00,0x00,
0xfd,0x00,0x1b,0x1b,0x1b,0x15,0x1b,0x15,0x15,0x1b,0x1b,0x15,0x1b,
// 0x007b for area_side_right_pane
0x07,0x06,0x00,0x01,0x01,0xfe,0xfe,0x00,0x00,0xfe,0x5f,0xfd,0x00,
// 0x0088 for area_top_pane
0x07,0x0b,0x01,0xff,0x01,0xc0,0x2c,0x01,0x01,0xfe,0x00,0x00,0x00,0xff,0x01,
0x2c,0xff,0x01,0x10,0xdb,0xfe,0xfe,0xdb,0xdb,0xff,0x01,0x18,0xff,0x01,0x06,
0xdb,0xff,0x01,0x06,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfe,0xfd,0x00,
0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0x14,0x30,0x15,0x6a,0x14,
0x15,0x6a,0x28,0x3a,0x15,0x3a,
// 0x00ca for call_video_uplink_pane
0x07,0x02,0x01,0xff,0x01,0x98,0x08,0x01,0x01,0xfe,0x01,0x11,0x01,0x03,0xfe,
0xfe,0x4a,0x41,0x3d,0x35,
// 0x00de for main_pane
0x07,0x0d,0x01,0xff,0x01,0xd8,0x34,0x01,0x01,0xfe,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x3d,0x00,0x30,0x14,0x00,0x00,0x15,0xfe,0x14,
0x15,0x15,0x28,0x3a,0x15,0x3a,0x00,0x1b,0x1b,0x1b,0x00,0x15,0x1b,0x00,0x15,
0x15,0x1b,0x58,0x15,0x58,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,
0xfd,0x00,0xfe,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfd,0x00,0xfe,0xfd,0x00,0xfe,
0xfe,0xfe,0xfd,0x00,0xfe,0xbf,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,
// 0x0136 for popup_fixed_preview_cale_window
0x07,0x01,0x00,0x01,0x01,0xfe,0x00,0xfe,0xfe,0x58,0xfd,0x00,0x00,
// 0x0143 for popup_preview_fixed_window
0x06,0xfe,0xfe,0x15,0x00,0x15,0xc0,0xfe,
// 0x014b for popup_toolbar2_fixed_window_cp01
0x07,0x05,0x01,0xff,0x01,0xd0,0x14,0x01,0x01,0xfe,0x00,0xfe,0x15,0xfe,0x15,
0xfe,0xfe,0x1b,0x15,0x1b,0x15,0x1b,0xfd,0x00,0x3d,0xfd,0x00,0x3d,0xfd,0x00,
0x3d,0xfe,0x3d,0xfe,0x3d,

// 0x016e for touch_pane
0x07,0x0c,0x01,0xff,0x01,0xd0,0x30,0x01,0x01,0xfe,0x00,0x00,0xfe,0x00,0x00,
0x00,0x00,0xfe,0xfe,0x00,0x00,0xfe,0x00,0xfe,0xfe,0x15,0xfe,0xfe,0xfe,0xfe,
0x15,0x15,0xfe,0xfe,0x15,0xfe,0xfd,0x00,0x20,0xfd,0x00,0xfd,0x00,0xfd,0x00,
0xfd,0x00,0x20,0x20,0xfd,0x00,0xfd,0x00,0x20,0xfd,0x00,0x20,0xc6,0x20,0x20,
0x20,0x20,0xc6,0xc6,0x20,0x20,0xc6,0x20,
// 0x01b2 for bg_popup_call_pane_cp05
0x07,0x04,0x00,0x01,0x01,0xfe,0x00,0x00,0x00,0x00,0xfd,0x00,0xfd,0x00,
// 0x01c0 for popup_number_entry_window_t1
0x0b,0x01,0x00,0x01,0x01,0xd7,0x0f,0x26,0x0f,0xfe,0xfd,0xe3,0x1b,0x02,0xfb,
0x83,0x60,0x00,0x03,
// 0x01d3 for popup_number_entry_window_t2
0x0b,0x01,0x00,0x01,0x01,0xd7,0x0f,0xfe,0x0f,0x2b,0xfe,0x19,0x03,0xfb,0x83,
0x20,0x00,0x01
};

const TUint16 KDataLookup[ ] ={
    
0x0000, // Screen

0x000a, // application_window

0x0050, // area_bottom_pane_ParamLimits

0x0050, // area_bottom_pane

0x0088, // area_top_pane_ParamLimits

0x0088, // area_top_pane

0x00ca, // call_video_uplink_pane_ParamLimits

0x00ca, // call_video_uplink_pane

0x00de, // main_pane_ParamLimits

0x00de, // main_pane

0x516d, // context_pane

0x5180, // navi_pane

0x5190, // popup_cale_events_window_ParamLimits

0x5190, // popup_cale_events_window

0x51a7, // popup_mup_playback_window

0x51af, // signal_pane

0x2fd0, // main_browser_pane

0x2fd0, // main_burst_pane

0x01c0,

0x0001, //19
KTableIndex,
0x016e
};
// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSWindowLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSWindowLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSWindowLine, "In TestLSDSWindowLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSWindowLine );
    // Print to log file
    iLog->Log( KTestLSDSWindowLine );
    TAknWindowComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::WindowLine( line, &compData );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSWindowLineVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSWindowLineVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSWindowLineVariety, "In TestLSDSWindowLineVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSWindowLineVariety );
    // Print to log file
    iLog->Log( KTestLSDSWindowLineVariety );
    TAknWindowComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::WindowLine( line, &compData, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSTextLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSTextLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSTextLine, "In TestLSDSTextLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSTextLine );
    // Print to log file
    iLog->Log( KTestLSDSTextLine );
    TAknTextComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::TextLine( line, &compData );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSTextLineVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSTextLineVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSTextLineVariety, "In TestLSDSTextLineVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSTextLineVariety );
    // Print to log file
    iLog->Log( KTestLSDSTextLineVariety );
    TAknTextComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::TextLine( line, &compData, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSWindowTable
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSWindowTable( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSWindowTable, "In TestLSDSWindowTable" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSWindowTable );
    // Print to log file
    iLog->Log( KTestLSDSWindowTable );
    TAknWindowComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::WindowTable( line, &compData, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSWindowTableVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSWindowTableVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSWindowTableVariety, "In TestLSDSWindowTableVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSWindowTableVariety );
    // Print to log file
    iLog->Log( KTestLSDSWindowTableVariety );
    TAknWindowComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::WindowTable( line, &compData, 1, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSTextTable
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSTextTable( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSTextTable, "In TestLSDSTextTable" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSTextTable );
    // Print to log file
    iLog->Log( KTestLSDSTextTable );
    TAknTextComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::TextTable( line, &compData, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSTextTableVariety
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSTextTableVariety( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSTextTableVariety, "In TestLSDSTextTableVariety" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSTextTableVariety );
    // Print to log file
    iLog->Log( KTestLSDSTextTableVariety );
    TAknTextComponentLayoutImp line;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::TextTable( line, &compData, 1, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSTableLimits
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSTableLimits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSTableLimits, "In TestLSDSTableLimits" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSTableLimits );
    // Print to log file
    iLog->Log( KTestLSDSTableLimits );

    AknLayoutScalableDecodeSupport::TableLimits( KDataLookup );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSParameterLimits
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSParameterLimits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSParameterLimits, "In TestLSDSParameterLimits" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSParameterLimits );
    // Print to log file
    iLog->Log( KTestLSDSParameterLimits );
    TAknLayoutScalableParameterLimitsImp limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::ParameterLimits( limits, &compData, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSParameterLimitsTable
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSParameterLimitsTable( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSParameterLimitsTable, "In TestLSDSParameterLimitsTable" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSParameterLimitsTable );
    // Print to log file
    iLog->Log( KTestLSDSParameterLimitsTable );
    TAknLayoutScalableParameterLimitsImp limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::ParameterLimitsTable( limits, &compData, 1, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSGetComponentTypeById
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSGetComponentTypeById( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSGetComponentTypeById, "In TestLSDSGetComponentTypeById" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSGetComponentTypeById );
    // Print to log file
    iLog->Log( KTestLSDSGetComponentTypeById );
    TAknLayoutScalableComponentType limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::GetComponentTypeById( limits, &compData, 1 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSGetParamLimitsById
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSGetParamLimitsById( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSGetParamLimitsById, "In TestLSDSGetParamLimitsById" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSGetParamLimitsById );
    // Print to log file
    iLog->Log( KTestLSDSGetParamLimitsById );
    TAknLayoutScalableParameterLimitsImp limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::GetParamLimitsById( limits, &compData, 1, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSGetWindowComponentById
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSGetWindowComponentById( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSGetWindowComponentById, "In TestLSDSGetWindowComponentById" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSGetWindowComponentById );
    // Print to log file
    iLog->Log( KTestLSDSGetWindowComponentById );
    TAknWindowComponentLayoutImp limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::GetWindowComponentById( limits, &compData, 1, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLSDSGetTextComponentById
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLSDSGetTextComponentById( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLSDSGetTextComponentById, "In TestLSDSGetTextComponentById" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLSDSGetTextComponentById );
    // Print to log file
    iLog->Log( KTestLSDSGetTextComponentById );
    TAknTextComponentLayoutImp limits;
    SCompDataImplData compData;
    compData.iDataLookup = KDataLookup;
    compData.iByteCodedData = KByteCodedData;
    AknLayoutScalableDecodeSupport::GetTextComponentById( limits, &compData, 18, 0, 0, 0 );
    return KErrNone;
    }

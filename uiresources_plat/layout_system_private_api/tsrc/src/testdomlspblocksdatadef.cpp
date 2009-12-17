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
#include <aknlayout2datadef.h>

#include "testdomlayoutsystemprivate.h"
#include "testdomadapter.h"

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
// CTestDOMLayoutSystemPrivate::TestWLLISetAllParentOffsets
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestWLLISetAllParentOffsets( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestWLLISetAllParentOffsets, "In TestWLLISetAllParentOffsets" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestWLLISetAllParentOffsets );
    // Print to log file
    iLog->Log( KTestWLLISetAllParentOffsets );
    TAknWindowLineLayoutImp windowLineLayoutImp;
    TRect rect;
    windowLineLayoutImp.SetAllParentOffsets( rect );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestTLLISetAllParentOffsets
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestTLLISetAllParentOffsets( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestTLLISetAllParentOffsets, "In TestTLLISetAllParentOffsets" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestTLLISetAllParentOffsets );
    // Print to log file
    iLog->Log( KTestTLLISetAllParentOffsets );
    TAknTextLineLayoutImp textLineLayoutImp;
    TRect rect;
    textLineLayoutImp.SetAllParentOffsets( rect );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSWindowLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSWindowLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSWindowLine, "In TestLDSWindowLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSWindowLine );
    // Print to log file
    iLog->Log( KTestLDSWindowLine );
    TAknWindowLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::WindowLine( line, &data );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSWindowLineIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSWindowLineIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSWindowLineIndex, "In TestLDSWindowLineIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSWindowLineIndex );
    // Print to log file
    iLog->Log( KTestLDSWindowLineIndex );
    TAknWindowLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::WindowLine( line, &data, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSWindowLineRect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSWindowLineRect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSWindowLineRect, "In TestLDSWindowLineRect" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSWindowLineRect );
    // Print to log file
    iLog->Log( KTestLDSWindowLineRect );
    TAknWindowLineLayoutImp line;
    SImplData data; 
    TRect rect;
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::WindowLine( line, &data, rect, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTextLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTextLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTextLine, "In TestLDSTextLine" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTextLine );
    // Print to log file
    iLog->Log( KTestLDSTextLine );
    TAknTextLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TextLine( line, &data );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTextLineIndex
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTextLineIndex( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTextLineIndex, "In TestLDSTextLineIndexIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTextLineIndex );
    // Print to log file
    iLog->Log( KTestLDSTextLineIndex );
    TAknTextLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TextLine( line, &data, 0, 0, 0, 0, 0  );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTextLineRect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTextLineRect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTextLineRect, "In TestLDSTextLineRectIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTextLineRect );
    // Print to log file
    iLog->Log( KTestLDSTextLineRect );
    TAknTextLineLayoutImp line;
    TRect rect;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TextLine( line, &data, rect, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLine
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLine( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSMultiLineTextLine, "In TestLDSMultiLineTextLineIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSMultiLineTextLine );
    // Print to log file
    iLog->Log( KTestLDSMultiLineTextLine );
    TAknTextLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::MultiLineTextLine( line, &data, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLineRect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSMultiLineTextLineRect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSMultiLineTextLineRect, "In TestLDSMultiLineTextLineRectIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSMultiLineTextLineRect );
    // Print to log file
    iLog->Log( KTestLDSMultiLineTextLineRect );
    TAknTextLineLayoutImp line;
    TRect rect;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::MultiLineTextLine( line, &data, rect, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSWindowTable
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSWindowTable( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSWindowTable, "In TestLDSWindowTableIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSWindowTable );
    // Print to log file
    iLog->Log( KTestLDSWindowTable );
    TAknWindowLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::WindowTable( line, &data, 0, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTextTable
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTextTable( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTextTable, "In TestLDSTextTableIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTextTable );
    // Print to log file
    iLog->Log( KTestLDSTextTable );
    TAknTextLineLayoutImp line;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TextTable( line, &data, 0, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSWindowTableRect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSWindowTableRect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSWindowTableRect, "In TestLDSWindowTableRectIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSWindowTableRect );
    // Print to log file
    iLog->Log( KTestLDSWindowTableRect );
    TAknWindowLineLayoutImp line;
    TRect rect;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::WindowTable( line, &data, 0, rect, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTextTableRect
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTextTableRect( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTextTableRect, "In TestLDSTextTableRectIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTextTableRect );
    // Print to log file
    iLog->Log( KTestLDSTextTableRect );
    TAknTextLineLayoutImp line;
    TRect rect;
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TextTable( line, &data, 0, rect, 0, 0, 0, 0, 0 );
    return KErrNone;
    }
// -----------------------------------------------------------------------------
// CTestDOMLayoutSystemPrivate::TestLDSTableLimits
// -----------------------------------------------------------------------------
//
TInt CTestDOMLayoutSystemPrivate::TestLDSTableLimits( CStifItemParser& /*aItem*/ )
    {

    // Print to UI
    _LIT( Ktestdomlayoutsystemprivate, "testdomlayoutsystemprivate" );
    _LIT( KTestLDSTableLimits, "In TestLDSTableLimitsIndex" );
    TestModuleIf().Printf( 0, Ktestdomlayoutsystemprivate, KTestLDSTableLimits );
    // Print to log file
    iLog->Log( KTestLDSTableLimits );
    SImplData data; 
    data.iDataLookup = KDataLookup;
    data.iByteCodedData = KByteCodedData;
    AknLayoutDecodeSupport::TableLimits( data.iDataLookup );
    return KErrNone;
    }

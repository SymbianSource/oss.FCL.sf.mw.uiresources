/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/

// This customisation implements the interface defined in AknLayoutScalable_Apps.cdl

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000940a0 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineRCV(TInt aRow, TInt aCol, TInt aVariety) { return AknLayoutScalableDecode::WindowLineRCV(&KImplData, aRow, aCol, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLVRC(TInt aLineIndex, TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextTableLVRC(&KImplData, aLineIndex, aVariety, aRow, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize] =
	{
0x0ec2,	// (0x00094f62) Screen

0x0ece,	// (0x00094f6e) application_window

0x0f2a,	// (0x00094fca) area_bottom_pane_ParamLimits

0x0f2a,	// (0x00094fca) area_bottom_pane

0x0f83,	// (0x00095023) area_top_pane_ParamLimits

0x0f83,	// (0x00095023) area_top_pane

0x0fe7,	// (0x00095087) call_video_uplink_pane_ParamLimits

0x0fe7,	// (0x00095087) call_video_uplink_pane

0x1026,	// (0x000950c6) main_pane_ParamLimits

0x1026,	// (0x000950c6) main_pane

0xc0bb,	// (0x000a015b) context_pane

0x4503,	// (0x000985a3) navi_pane

0x4529,	// (0x000985c9) popup_cale_events_window_ParamLimits

0x4529,	// (0x000985c9) popup_cale_events_window

0xc0ce,	// (0x000a016e) popup_mup_playback_window

0x4541,	// (0x000985e1) signal_pane

0x9f80,	// (0x0009e020) main_browser_pane

0xa157,	// (0x0009e1f7) main_burst_pane

0x4385,	// (0x00098425) main_calc_pane

0xc0a1,	// (0x000a0141) main_cale_day_pane

0x1777,	// (0x00095817) main_cale_month_pane

0xc0a1,	// (0x000a0141) main_cale_week_pane

0xa157,	// (0x0009e1f7) main_call_pane

0x9c54,	// (0x0009dcf4) main_call_poc_pane

0xa157,	// (0x0009e1f7) main_camera_pane

0xa157,	// (0x0009e1f7) main_chi_dic_pane

0xa93c,	// (0x0009e9dc) main_clock_pane

0x9c54,	// (0x0009dcf4) main_fmradio_pane

0xa157,	// (0x0009e1f7) main_graph_messa_pane

0x9c54,	// (0x0009dcf4) main_help_pane

0x9f80,	// (0x0009e020) main_im_pane

0x9eaf,	// (0x0009df4f) main_image_pane_ParamLimits

0x9eaf,	// (0x0009df4f) main_image_pane

0x9c54,	// (0x0009dcf4) main_location2_pane

0xa157,	// (0x0009e1f7) main_location_pane

0x9eaf,	// (0x0009df4f) main_messa_pane

0x9c54,	// (0x0009dcf4) main_mp2_pane

0xa157,	// (0x0009e1f7) main_mp_pane

0x9c54,	// (0x0009dcf4) main_msg_pane

0x9c54,	// (0x0009dcf4) main_mup_eq_pane

0x9c54,	// (0x0009dcf4) main_mup_pane

0x9f80,	// (0x0009e020) main_notes_pane

0x9c54,	// (0x0009dcf4) main_pec_pane

0x9c54,	// (0x0009dcf4) main_phob_pane

0x9c54,	// (0x0009dcf4) main_pinb_pane

0x9c54,	// (0x0009dcf4) main_postcard_pane

0x9c54,	// (0x0009dcf4) main_qdial_pane

0xa157,	// (0x0009e1f7) main_skin_pane

0x9c54,	// (0x0009dcf4) main_smil2_pane

0xa157,	// (0x0009e1f7) main_smil_pane

0xa157,	// (0x0009e1f7) main_video_pane

0xa157,	// (0x0009e1f7) main_video_tele_pane

0x9eaf,	// (0x0009df4f) main_viewer_pane_ParamLimits

0x9eaf,	// (0x0009df4f) main_viewer_pane

0xa157,	// (0x0009e1f7) main_vorec_pane

0x43d1,	// (0x00098471) popup_blid_sat_info_window_ParamLimits

0x43d1,	// (0x00098471) popup_blid_sat_info_window

0x43f1,	// (0x00098491) popup_dyc_status_message_window_ParamLimits

0x43f1,	// (0x00098491) popup_dyc_status_message_window

0x43ff,	// (0x0009849f) popup_grid_large_graphic_window_ParamLimits

0x43ff,	// (0x0009849f) popup_grid_large_graphic_window

0x448e,	// (0x0009852e) popup_loc_request_window_ParamLimits

0x448e,	// (0x0009852e) popup_loc_request_window

0x44db,	// (0x0009857b) popup_wml_address_window_ParamLimits

0x44db,	// (0x0009857b) popup_wml_address_window

0x425d,	// (0x000982fd) call_muted_g1

0x3f19,	// (0x00097fb9) popup_call_audio_conf_window_ParamLimits

0x3f19,	// (0x00097fb9) popup_call_audio_conf_window

0x426d,	// (0x0009830d) popup_call_audio_first_window_ParamLimits

0x426d,	// (0x0009830d) popup_call_audio_first_window

0x42ad,	// (0x0009834d) popup_call_audio_in_window_ParamLimits

0x42ad,	// (0x0009834d) popup_call_audio_in_window

0x42d1,	// (0x00098371) popup_call_audio_out_window_ParamLimits

0x42d1,	// (0x00098371) popup_call_audio_out_window

0x42f3,	// (0x00098393) popup_call_audio_second_window_ParamLimits

0x42f3,	// (0x00098393) popup_call_audio_second_window

0x4323,	// (0x000983c3) popup_call_audio_wait_window_ParamLimits

0x4323,	// (0x000983c3) popup_call_audio_wait_window

0x4344,	// (0x000983e4) popup_number_entry_window_ParamLimits

0x4344,	// (0x000983e4) popup_number_entry_window

0xea4e,	// (0x000a2aee) bg_popup_call_pane_cp05_ParamLimits

0xea4e,	// (0x000a2aee) bg_popup_call_pane_cp05

0xea6e,	// (0x000a2b0e) popup_number_entry_window_t1

0xed72,	// (0x000a2e12) popup_number_entry_window_t2

0xed84,	// (0x000a2e24) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a316a) popup_number_entry_window_t

0xed96,	// (0x000a2e36) text_title_cp2

0xeda9,	// (0x000a2e49) bg_popup_call_pane_cp_ParamLimits

0xeda9,	// (0x000a2e49) bg_popup_call_pane_cp

0xedb7,	// (0x000a2e57) call_thumbnail_pane

0xedbf,	// (0x000a2e5f) popup_call_audio_in_window_g1_ParamLimits

0xedbf,	// (0x000a2e5f) popup_call_audio_in_window_g1

0xedcb,	// (0x000a2e6b) popup_call_audio_in_window_g2_ParamLimits

0xedcb,	// (0x000a2e6b) popup_call_audio_in_window_g2

0xedd7,	// (0x000a2e77) popup_call_audio_in_window_g3_ParamLimits

0xedd7,	// (0x000a2e77) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a3173) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a3173) popup_call_audio_in_window_g

0xede3,	// (0x000a2e83) popup_call_audio_in_window_t1_ParamLimits

0xede3,	// (0x000a2e83) popup_call_audio_in_window_t1

0xedff,	// (0x000a2e9f) popup_call_audio_in_window_t2_ParamLimits

0xedff,	// (0x000a2e9f) popup_call_audio_in_window_t2

0xee1b,	// (0x000a2ebb) popup_call_audio_in_window_t3_ParamLimits

0xee1b,	// (0x000a2ebb) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a317a) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a317a) popup_call_audio_in_window_t

0xeda9,	// (0x000a2e49) bg_popup_call_pane_cp01_ParamLimits

0xeda9,	// (0x000a2e49) bg_popup_call_pane_cp01

0xedb7,	// (0x000a2e57) call_thumbnail_pane_cp02

0xee2e,	// (0x000a2ece) call_type_pane_cp022

0xee36,	// (0x000a2ed6) popup_call_audio_out_window_g1_ParamLimits

0xee36,	// (0x000a2ed6) popup_call_audio_out_window_g1

0xee48,	// (0x000a2ee8) popup_call_audio_out_window_g2_ParamLimits

0xee48,	// (0x000a2ee8) popup_call_audio_out_window_g2

0xee54,	// (0x000a2ef4) popup_call_audio_out_window_g3_ParamLimits

0xee54,	// (0x000a2ef4) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a3181) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a3181) popup_call_audio_out_window_g

0xee66,	// (0x000a2f06) popup_call_audio_out_window_t1_ParamLimits

0xee66,	// (0x000a2f06) popup_call_audio_out_window_t1

0xee7e,	// (0x000a2f1e) popup_call_audio_out_window_t2_ParamLimits

0xee7e,	// (0x000a2f1e) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a3188) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a3188) popup_call_audio_out_window_t

0xee93,	// (0x000a2f33) bg_popup_call_pane_ParamLimits

0xee93,	// (0x000a2f33) bg_popup_call_pane

0x1242,	// (0x000952e2) call_thumbnail_pane_cp_ParamLimits

0x1242,	// (0x000952e2) call_thumbnail_pane_cp

0xef17,	// (0x000a2fb7) call_type_pane_cp01_ParamLimits

0xef17,	// (0x000a2fb7) call_type_pane_cp01

0xef5b,	// (0x000a2ffb) popup_call_audio_first_window_g1_ParamLimits

0xef5b,	// (0x000a2ffb) popup_call_audio_first_window_g1

0xefa7,	// (0x000a3047) popup_call_audio_first_window_g2_ParamLimits

0xefa7,	// (0x000a3047) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a318d) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a318d) popup_call_audio_first_window_g

0xefeb,	// (0x000a308b) popup_call_audio_first_window_t1_ParamLimits

0xefeb,	// (0x000a308b) popup_call_audio_first_window_t1

0x9b99,	// (0x0009dc39) popup_call_audio_first_window_t4_ParamLimits

0x9b99,	// (0x0009dc39) popup_call_audio_first_window_t4

0x9c25,	// (0x0009dcc5) popup_call_audio_first_window_t5_ParamLimits

0x9c25,	// (0x0009dcc5) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a3192) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a3192) popup_call_audio_first_window_t

0x9c54,	// (0x0009dcf4) bg_popup_call_pane_cp02

0x9c5e,	// (0x0009dcfe) call_type_pane_cp023

0x9c66,	// (0x0009dd06) popup_call_audio_wait_window_g1

0x9c6e,	// (0x0009dd0e) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a3199) popup_call_audio_wait_window_g

0x9c76,	// (0x0009dd16) popup_call_audio_wait_window_t3

0x9c84,	// (0x0009dd24) bg_popup_call_pane_cp03_ParamLimits

0x9c84,	// (0x0009dd24) bg_popup_call_pane_cp03

0x9ce4,	// (0x0009dd84) call_thumbnail_pane_cp011_ParamLimits

0x9ce4,	// (0x0009dd84) call_thumbnail_pane_cp011

0x9cf0,	// (0x0009dd90) call_type_pane_cp034_ParamLimits

0x9cf0,	// (0x0009dd90) call_type_pane_cp034

0x9d2c,	// (0x0009ddcc) popup_call_audio_second_window_g1_ParamLimits

0x9d2c,	// (0x0009ddcc) popup_call_audio_second_window_g1

0x9d68,	// (0x0009de08) popup_call_audio_second_window_g2_ParamLimits

0x9d68,	// (0x0009de08) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a319e) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a319e) popup_call_audio_second_window_g

0x9da4,	// (0x0009de44) popup_call_audio_second_window_t1_ParamLimits

0x9da4,	// (0x0009de44) popup_call_audio_second_window_t1

0x9e25,	// (0x0009dec5) popup_call_audio_second_window_t2_ParamLimits

0x9e25,	// (0x0009dec5) popup_call_audio_second_window_t2

0x9e5b,	// (0x0009defb) popup_call_audio_second_window_t3_ParamLimits

0x9e5b,	// (0x0009defb) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a31a3) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a31a3) popup_call_audio_second_window_t

0x9c54,	// (0x0009dcf4) bg_popup_call_pane_cp04

0x9e91,	// (0x0009df31) list_conf_pane

0x9e99,	// (0x0009df39) popup_call_audio_conf_window_t1

0x9ea7,	// (0x0009df47) call_thumbnail_pane_g1

0x9eaf,	// (0x0009df4f) bg_pinb_pane_ParamLimits

0x9eaf,	// (0x0009df4f) bg_pinb_pane

0x9ebd,	// (0x0009df5d) find_pinb_pane

0x9ec6,	// (0x0009df66) listscroll_pinb_pane_ParamLimits

0x9ec6,	// (0x0009df66) listscroll_pinb_pane

0x9ed5,	// (0x0009df75) pinb_bg_pane_g1

0x1266,	// (0x00095306) pinb_bg_pane_g2

0x1272,	// (0x00095312) pinb_bg_pane_g3

0x127e,	// (0x0009531e) pinb_bg_pane_g4

0x128a,	// (0x0009532a) pinb_bg_pane_g5

0x1296,	// (0x00095336) pinb_bg_pane_g6

0x12a1,	// (0x00095341) pinb_bg_pane_g7

0x12ac,	// (0x0009534c) pinb_bg_pane_g8

0x12b7,	// (0x00095357) pinb_bg_pane_g9

0x12c1,	// (0x00095361) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a31aa) pinb_bg_pane_g

0x12de,	// (0x0009537e) grid_pinb_pane

0x12e9,	// (0x00095389) list_pinb_pane

0x12f4,	// (0x00095394) scroll_pane_cp01_ParamLimits

0x12f4,	// (0x00095394) scroll_pane_cp01

0x9edf,	// (0x0009df7f) find_pinb_pane_g1_ParamLimits

0x9edf,	// (0x0009df7f) find_pinb_pane_g1

0x9ef7,	// (0x0009df97) find_pinb_pane_t1

0x9f09,	// (0x0009dfa9) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a31c4) find_pinb_pane_t

0x9f1e,	// (0x0009dfbe) input_focus_pane_cp01_ParamLimits

0x9f1e,	// (0x0009dfbe) input_focus_pane_cp01

0x1306,	// (0x000953a6) cell_pinb_pane_ParamLimits

0x1306,	// (0x000953a6) cell_pinb_pane

0x1331,	// (0x000953d1) cell_pinb_pane_g1_ParamLimits

0x1331,	// (0x000953d1) cell_pinb_pane_g1

0x9f2a,	// (0x0009dfca) cell_pinb_pane_g2_ParamLimits

0x9f2a,	// (0x0009dfca) cell_pinb_pane_g2

0x9f36,	// (0x0009dfd6) cell_pinb_pane_g3_ParamLimits

0x9f36,	// (0x0009dfd6) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a31c9) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a31c9) cell_pinb_pane_g

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp01

0x1346,	// (0x000953e6) list_pinb_item_pane_ParamLimits

0x1346,	// (0x000953e6) list_pinb_item_pane

0x9c54,	// (0x0009dcf4) list_highlight_pane_cp02

0x136f,	// (0x0009540f) list_pinb_item_pane_g1_ParamLimits

0x136f,	// (0x0009540f) list_pinb_item_pane_g1

0x137c,	// (0x0009541c) list_pinb_item_pane_g2_ParamLimits

0x137c,	// (0x0009541c) list_pinb_item_pane_g2

0x1388,	// (0x00095428) list_pinb_item_pane_g3_ParamLimits

0x1388,	// (0x00095428) list_pinb_item_pane_g3

0x1399,	// (0x00095439) list_pinb_item_pane_g4_ParamLimits

0x1399,	// (0x00095439) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a31d0) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a31d0) list_pinb_item_pane_g

0x13a5,	// (0x00095445) list_pinb_item_pane_t1_ParamLimits

0x13a5,	// (0x00095445) list_pinb_item_pane_t1

0x13d6,	// (0x00095476) calc_display_pane

0x13f4,	// (0x00095494) calc_paper_pane

0x1410,	// (0x000954b0) grid_calc_pane

0x9c54,	// (0x0009dcf4) bg_list_pane_cp01

0x143c,	// (0x000954dc) clock_g1

0x1444,	// (0x000954e4) clock_g2

0x0001,

0xf139,	// (0x000a31d9) clock_g

0x144e,	// (0x000954ee) clock_t1_ParamLimits

0x144e,	// (0x000954ee) clock_t1

0x1463,	// (0x00095503) clock_t2_ParamLimits

0x1463,	// (0x00095503) clock_t2

0x1475,	// (0x00095515) clock_t3_ParamLimits

0x1475,	// (0x00095515) clock_t3

0x1487,	// (0x00095527) clock_t4_ParamLimits

0x1487,	// (0x00095527) clock_t4

0x1499,	// (0x00095539) clock_t5_ParamLimits

0x1499,	// (0x00095539) clock_t5

0x14ae,	// (0x0009554e) clock_t6_ParamLimits

0x14ae,	// (0x0009554e) clock_t6

0x14c0,	// (0x00095560) clock_t7_ParamLimits

0x14c0,	// (0x00095560) clock_t7

0x14d2,	// (0x00095572) clock_t8_ParamLimits

0x14d2,	// (0x00095572) clock_t8

0x14e8,	// (0x00095588) clock_t9_ParamLimits

0x14e8,	// (0x00095588) clock_t9

0x0008,

0xf13e,	// (0x000a31de) clock_t_ParamLimits

0xf13e,	// (0x000a31de) clock_t

0x9f42,	// (0x0009dfe2) popup_clock_analogue_window_cp02

0x9f42,	// (0x0009dfe2) popup_clock_digital_window_cp01

0x9f4a,	// (0x0009dfea) listscroll_help_pane

0x9c54,	// (0x0009dcf4) phob_pre_status_pane

0x9f54,	// (0x0009dff4) grid_qdial_pane

0x9eaf,	// (0x0009df4f) listscroll_mce_pane

0x9eaf,	// (0x0009df4f) bg_notes_pane

0x9f5e,	// (0x0009dffe) list_notes_pane

0x14fe,	// (0x0009559e) scroll_pane_cp06

0x9f6c,	// (0x0009e00c) bg_calc_paper_pane

0x150d,	// (0x000955ad) list_calc_pane

0x9f80,	// (0x0009e020) bg_calc_display_pane

0x1527,	// (0x000955c7) calc_display_pane_t1

0x153c,	// (0x000955dc) calc_display_pane_t2

0x1551,	// (0x000955f1) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a31f1) calc_display_pane_t

0x1563,	// (0x00095603) cell_calc_pane_ParamLimits

0x1563,	// (0x00095603) cell_calc_pane

0x9f8c,	// (0x0009e02c) bg_calc_paper_pane_g1

0x9f98,	// (0x0009e038) bg_calc_paper_pane_g2

0x9fa4,	// (0x0009e044) bg_calc_paper_pane_g3

0x9fb0,	// (0x0009e050) bg_calc_paper_pane_g4

0x9fbc,	// (0x0009e05c) bg_calc_paper_pane_g5

0x1590,	// (0x00095630) bg_calc_paper_pane_g6

0x15a1,	// (0x00095641) bg_calc_paper_pane_g7

0x15b2,	// (0x00095652) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a31f8) bg_calc_paper_pane_g

0x15c3,	// (0x00095663) calc_bg_paper_pane_g9

0x15d4,	// (0x00095674) list_calc_item_pane_ParamLimits

0x15d4,	// (0x00095674) list_calc_item_pane

0x9fc8,	// (0x0009e068) list_calc_item_pane_g1

0x1604,	// (0x000956a4) list_calc_item_pane_t1_ParamLimits

0x1604,	// (0x000956a4) list_calc_item_pane_t1

0x1616,	// (0x000956b6) list_calc_item_pane_t2_ParamLimits

0x1616,	// (0x000956b6) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a3209) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a3209) list_calc_item_pane_t

0x9fd5,	// (0x0009e075) cell_calc_pane_g1

0x9fdf,	// (0x0009e07f) grid_highlight_pane_cp02

0xa001,	// (0x0009e0a1) bg_calc_display_pane_g1

0x1646,	// (0x000956e6) bg_calc_display_pane_g2

0xa00a,	// (0x0009e0aa) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a3213) bg_calc_display_pane_g

0x1650,	// (0x000956f0) cell_qdial_pane_ParamLimits

0x1650,	// (0x000956f0) cell_qdial_pane

0x1664,	// (0x00095704) cell_qdial_pane_g1_ParamLimits

0x1664,	// (0x00095704) cell_qdial_pane_g1

0x1671,	// (0x00095711) cell_qdial_pane_g2_ParamLimits

0x1671,	// (0x00095711) cell_qdial_pane_g2

0xa013,	// (0x0009e0b3) cell_qdial_pane_g3_ParamLimits

0xa013,	// (0x0009e0b3) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a321a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a321a) cell_qdial_pane_g

0x168e,	// (0x0009572e) cell_qdial_pane_t1_ParamLimits

0x168e,	// (0x0009572e) cell_qdial_pane_t1

0x16a6,	// (0x00095746) cell_qdial_pane_t2_ParamLimits

0x16a6,	// (0x00095746) cell_qdial_pane_t2

0x16b9,	// (0x00095759) cell_qdial_pane_t3_ParamLimits

0x16b9,	// (0x00095759) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a3223) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a3223) cell_qdial_pane_t

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp04

0xa01f,	// (0x0009e0bf) thumbnail_qdial_pane_ParamLimits

0xa01f,	// (0x0009e0bf) thumbnail_qdial_pane

0xa07b,	// (0x0009e11b) list_help_pane

0xa084,	// (0x0009e124) scroll_pane_cp02

0x16cc,	// (0x0009576c) help_list_pane_t1_ParamLimits

0x16cc,	// (0x0009576c) help_list_pane_t1

0x1703,	// (0x000957a3) bg_notes_pane_g2

0x170b,	// (0x000957ab) bg_notes_pane_g3

0x1713,	// (0x000957b3) notes_bg_pane_g1

0x171b,	// (0x000957bb) notes_bg_pane_g4

0x1723,	// (0x000957c3) notes_bg_pane_g5

0x172b,	// (0x000957cb) notes_bg_pane_g6

0x1733,	// (0x000957d3) notes_bg_pane_g7

0x173b,	// (0x000957db) notes_bg_pane_g8

0x1743,	// (0x000957e3) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a3241) notes_bg_pane_g

0x174b,	// (0x000957eb) list_notes_text_pane_ParamLimits

0x174b,	// (0x000957eb) list_notes_text_pane

0xa08d,	// (0x0009e12d) list_notes_text_pane_g1

0xb846,	// (0x0009f8e6) list_notes_text_pane_t1

0x1777,	// (0x00095817) listscroll_cale_week_pane

0x179c,	// (0x0009583c) bg_cale_heading_pane

0xa0b0,	// (0x0009e150) bg_cale_pane_cp01

0x17be,	// (0x0009585e) cale_week_corner_pane

0x17d8,	// (0x00095878) cale_week_day_heading_pane

0x17fa,	// (0x0009589a) cale_week_scroll_pane_g1

0x1817,	// (0x000958b7) cale_week_scroll_pane_g2

0x182a,	// (0x000958ca) cale_week_scroll_pane_g3

0x183d,	// (0x000958dd) cale_week_scroll_pane_g4

0x1850,	// (0x000958f0) cale_week_scroll_pane_g5

0x1863,	// (0x00095903) cale_week_scroll_pane_g6

0x1876,	// (0x00095916) cale_week_scroll_pane_g7

0x188b,	// (0x0009592b) cale_week_scroll_pane_g8

0x18a0,	// (0x00095940) cale_week_scroll_pane_g9

0x18b3,	// (0x00095953) cale_week_scroll_pane_g10

0x18c6,	// (0x00095966) cale_week_scroll_pane_g11

0x18d9,	// (0x00095979) cale_week_scroll_pane_g12

0x18f0,	// (0x00095990) cale_week_scroll_pane_g13

0x190b,	// (0x000959ab) cale_week_scroll_pane_g14

0x1926,	// (0x000959c6) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a3250) cale_week_scroll_pane_g

0x1956,	// (0x000959f6) cale_week_time_pane

0x196b,	// (0x00095a0b) grid_cale_week_pane

0xa0df,	// (0x0009e17f) scroll_pane_cp08

0x198a,	// (0x00095a2a) cell_cale_week_pane_ParamLimits

0x198a,	// (0x00095a2a) cell_cale_week_pane

0x19ec,	// (0x00095a8c) cale_week_day_heading_pane_t1

0x1a07,	// (0x00095aa7) cale_week_day_heading_pane_t2

0x1a22,	// (0x00095ac2) cale_week_day_heading_pane_t3

0x1a3d,	// (0x00095add) cale_week_day_heading_pane_t4

0x1a58,	// (0x00095af8) cale_week_day_heading_pane_t5

0x1a73,	// (0x00095b13) cale_week_day_heading_pane_t6

0x1a8e,	// (0x00095b2e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a3271) cale_week_day_heading_pane_t

0xa0fc,	// (0x0009e19c) bg_cale_side_pane

0x1aa9,	// (0x00095b49) cale_week_time_pane_t1

0x1ac3,	// (0x00095b63) cale_week_time_pane_t2

0x1add,	// (0x00095b7d) cale_week_time_pane_t3

0x1af7,	// (0x00095b97) cale_week_time_pane_t4

0x1b11,	// (0x00095bb1) cale_week_time_pane_t5

0x1b2b,	// (0x00095bcb) cale_week_time_pane_t6

0x1b4b,	// (0x00095beb) cale_week_time_pane_t7

0x1b6d,	// (0x00095c0d) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a3280) cale_week_time_pane_t

0x1b91,	// (0x00095c31) cell_cale_week_pane_g2

0x1bb5,	// (0x00095c55) cell_cale_week_pane_g3_ParamLimits

0x1bb5,	// (0x00095c55) cell_cale_week_pane_g3

0xa10a,	// (0x0009e1aa) grid_highlight_pane_cp07

0xa112,	// (0x0009e1b2) listscroll_gms_pane

0xa11c,	// (0x0009e1bc) grid_gms_pane

0xa125,	// (0x0009e1c5) listscroll_gms_pane_g1

0xa12d,	// (0x0009e1cd) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a3291) listscroll_gms_pane_g

0x1bcd,	// (0x00095c6d) scroll_pane_cp010

0x1bd8,	// (0x00095c78) cell_gms_pane_ParamLimits

0x1bd8,	// (0x00095c78) cell_gms_pane

0x1be8,	// (0x00095c88) cell_gms_pane_g1

0xa135,	// (0x0009e1d5) cell_gms_pane_g2

0xa13d,	// (0x0009e1dd) cell_gms_pane_g3

0xa146,	// (0x0009e1e6) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a3296) cell_gms_pane_g

0xa14f,	// (0x0009e1ef) grid_highlight_pane_cp09

0x4205,	// (0x000982a5) phob_pre_status_pane_g1

0x420d,	// (0x000982ad) phob_pre_status_pane_g2

0x4215,	// (0x000982b5) phob_pre_status_pane_g3

0x421d,	// (0x000982bd) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000a3694) phob_pre_status_pane_g

0x422d,	// (0x000982cd) phob_pre_status_pane_t1

0x423d,	// (0x000982dd) phob_pre_status_pane_t2

0x424d,	// (0x000982ed) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x000a369f) phob_pre_status_pane_t

0xa157,	// (0x0009e1f7) bg_list_pane_cp05

0x1bf8,	// (0x00095c98) grid_vorec_pane

0x1c02,	// (0x00095ca2) vorec_t1

0x1c10,	// (0x00095cb0) vorec_t2

0x1c1e,	// (0x00095cbe) vorec_t3

0x1c2c,	// (0x00095ccc) vorec_t4

0x9b73,	// (0x0009dc13) vorec_t5

0x9b81,	// (0x0009dc21) vorec_t6

0x0004,

0xf1ff,	// (0x000a329f) vorec_t

0x9b8f,	// (0x0009dc2f) wait_bar_pane_cp01

0x1c48,	// (0x00095ce8) cell_vorec_pane_ParamLimits

0x1c48,	// (0x00095ce8) cell_vorec_pane

0x1c5b,	// (0x00095cfb) cell_vorec_pane_g1

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp05

0x1c75,	// (0x00095d15) cams_zoom_pane

0x1c81,	// (0x00095d21) image_vga_pane

0x1c90,	// (0x00095d30) main_camera_pane_g1

0x1c9e,	// (0x00095d3e) main_camera_pane_g2

0x1caa,	// (0x00095d4a) main_camera_pane_g3

0x1cb6,	// (0x00095d56) main_camera_pane_g4

0x1cc2,	// (0x00095d62) main_camera_pane_g5

0x1cce,	// (0x00095d6e) main_camera_pane_g6

0x1cda,	// (0x00095d7a) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a32aa) main_camera_pane_g

0x1ce6,	// (0x00095d86) main_camera_pane_t1

0x1cf8,	// (0x00095d98) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a32bb) main_camera_pane_t

0x1d19,	// (0x00095db9) cams_zoom_pane_cp_ParamLimits

0x1d19,	// (0x00095db9) cams_zoom_pane_cp

0x1d3d,	// (0x00095ddd) image_cif_pane_ParamLimits

0x1d3d,	// (0x00095ddd) image_cif_pane

0x1d5b,	// (0x00095dfb) image_subqcif_pane

0x1d63,	// (0x00095e03) main_video_pane_g1_ParamLimits

0x1d63,	// (0x00095e03) main_video_pane_g1

0x1d83,	// (0x00095e23) main_video_pane_g2_ParamLimits

0x1d83,	// (0x00095e23) main_video_pane_g2

0x1db3,	// (0x00095e53) main_video_pane_g3_ParamLimits

0x1db3,	// (0x00095e53) main_video_pane_g3

0x1ddc,	// (0x00095e7c) main_video_pane_g4_ParamLimits

0x1ddc,	// (0x00095e7c) main_video_pane_g4

0x1e05,	// (0x00095ea5) main_video_pane_g5_ParamLimits

0x1e05,	// (0x00095ea5) main_video_pane_g5

0xa16b,	// (0x0009e20b) main_video_pane_g6_ParamLimits

0xa16b,	// (0x0009e20b) main_video_pane_g6

0x0006,

0xf220,	// (0x000a32c0) main_video_pane_g_ParamLimits

0xf220,	// (0x000a32c0) main_video_pane_g

0x1e27,	// (0x00095ec7) main_video_pane_t1_ParamLimits

0x1e27,	// (0x00095ec7) main_video_pane_t1

0xa185,	// (0x0009e225) cams_zoom_pane_g1

0xa18e,	// (0x0009e22e) cams_zoom_pane_g2

0xa197,	// (0x0009e237) cams_zoom_pane_g3

0xa1a0,	// (0x0009e240) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a32cf) cams_zoom_pane_g

0x1e71,	// (0x00095f11) grid_cams_pane

0x1e7f,	// (0x00095f1f) linegrid_cams_pane

0x1e8d,	// (0x00095f2d) cell_cams_pane_ParamLimits

0x1e8d,	// (0x00095f2d) cell_cams_pane

0xa1a9,	// (0x0009e249) cams_burst_image_pane

0xa1b1,	// (0x0009e251) cell_cams_pane_g1

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp03

0x9fd5,	// (0x0009e075) mp_bg_pane_g1

0x9c54,	// (0x0009dcf4) bg_list_pane_cp03

0xbfc6,	// (0x000a0066) bg_mp_pane

0xbfce,	// (0x000a006e) grid_mp_pane

0xbfd6,	// (0x000a0076) media_player_g1

0xbfde,	// (0x000a007e) media_player_t1

0xbfec,	// (0x000a008c) media_player_t2

0xbffa,	// (0x000a009a) media_player_t3

0xc008,	// (0x000a00a8) media_player_t4

0xc016,	// (0x000a00b6) media_player_t5

0xc024,	// (0x000a00c4) media_player_t6

0xc032,	// (0x000a00d2) media_player_t7

0x0006,

0xf5de,	// (0x000a367e) media_player_t

0xc040,	// (0x000a00e0) wait_bar_pane_cp02

0xf5c3,	// (0x000a3663) main_usb_pane_t

0x41fc,	// (0x0009829c) cell_mp_pane

0x9fd5,	// (0x0009e075) cell_mp_pane_g1

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp06

0xa1b9,	// (0x0009e259) grid_skin_colour_pane

0xa1c1,	// (0x0009e261) list_highlight_pane_cp03

0x1f97,	// (0x00096037) skin_g1

0xa1c9,	// (0x0009e269) skin_t1

0xa1d8,	// (0x0009e278) skin_t2

0x0001,

0xf264,	// (0x000a3304) skin_t

0x1fa1,	// (0x00096041) cell_skin_colour_pane_ParamLimits

0x1fa1,	// (0x00096041) cell_skin_colour_pane

0xa1e6,	// (0x0009e286) cell_skin_colour_pane_g1

0x2025,	// (0x000960c5) call_video_g1_ParamLimits

0x2025,	// (0x000960c5) call_video_g1

0x2035,	// (0x000960d5) call_video_g2_ParamLimits

0x2035,	// (0x000960d5) call_video_g2

0x0001,

0xf269,	// (0x000a3309) call_video_g_ParamLimits

0xf269,	// (0x000a3309) call_video_g

0x208f,	// (0x0009612f) call_video_uplink_pane_cp1_ParamLimits

0x208f,	// (0x0009612f) call_video_uplink_pane_cp1

0xa1f8,	// (0x0009e298) call_video_uplink_pane_cp2

0x215b,	// (0x000961fb) video_down_crop_pane_ParamLimits

0x215b,	// (0x000961fb) video_down_crop_pane

0x224d,	// (0x000962ed) video_down_pane_ParamLimits

0x224d,	// (0x000962ed) video_down_pane

0xa200,	// (0x0009e2a0) video_down_subqcif_pane_ParamLimits

0xa200,	// (0x0009e2a0) video_down_subqcif_pane

0xa218,	// (0x0009e2b8) video_down_subqcif_pane_cp_ParamLimits

0xa218,	// (0x0009e2b8) video_down_subqcif_pane_cp

0xa23e,	// (0x0009e2de) im_reading_pane_ParamLimits

0xa23e,	// (0x0009e2de) im_reading_pane

0x236d,	// (0x0009640d) im_writing_pane_ParamLimits

0x236d,	// (0x0009640d) im_writing_pane

0x238b,	// (0x0009642b) im_reading_pane_t1

0xa258,	// (0x0009e2f8) list_im_pane

0xa269,	// (0x0009e309) scroll_pane_cp07

0x23e3,	// (0x00096483) im_writing_pane_t1_ParamLimits

0x23e3,	// (0x00096483) im_writing_pane_t1

0xa282,	// (0x0009e322) im_writing_pane_t2_ParamLimits

0xa282,	// (0x0009e322) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a3313) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a3313) im_writing_pane_t

0x9c54,	// (0x0009dcf4) input_focus_pane_cp04

0x9c54,	// (0x0009dcf4) input_focus_pane_cp05

0x23f5,	// (0x00096495) list_im_single_pane_ParamLimits

0x23f5,	// (0x00096495) list_im_single_pane

0x241c,	// (0x000964bc) list_single_im_pane_t1

0x41c0,	// (0x00098260) blid_accuracy_pane

0x41c8,	// (0x00098268) blid_compass_pane

0x41d2,	// (0x00098272) main_location_t1

0x41e0,	// (0x00098280) main_location_t2

0x41ee,	// (0x0009828e) main_location_t3

0x0002,

0xf5ed,	// (0x000a368d) main_location_t

0x9c54,	// (0x0009dcf4) aid_levels_location

0x9fd5,	// (0x0009e075) blid_accuracy_pane_g1

0x9fd5,	// (0x0009e075) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a3375) blid_accuracy_pane_g

0xa2ca,	// (0x0009e36a) wml_content_pane

0xa308,	// (0x0009e3a8) wml_button_pane_ParamLimits

0xa308,	// (0x0009e3a8) wml_button_pane

0x242b,	// (0x000964cb) wml_list_single_large_pane_ParamLimits

0x242b,	// (0x000964cb) wml_list_single_large_pane

0x2456,	// (0x000964f6) wml_list_single_medium_pane_ParamLimits

0x2456,	// (0x000964f6) wml_list_single_medium_pane

0x2488,	// (0x00096528) wml_list_single_small_pane_ParamLimits

0x2488,	// (0x00096528) wml_list_single_small_pane

0xa31c,	// (0x0009e3bc) wml_selection_box_pane_ParamLimits

0xa31c,	// (0x0009e3bc) wml_selection_box_pane

0xa32f,	// (0x0009e3cf) wml_list_single_pane_t1

0xa33e,	// (0x0009e3de) wml_list_single_medium_pane_t1

0xa34d,	// (0x0009e3ed) wml_list_single_large_pane_t1

0xa35c,	// (0x0009e3fc) input_focus_pane_cp02_ParamLimits

0xa35c,	// (0x0009e3fc) input_focus_pane_cp02

0xa36f,	// (0x0009e40f) wml_selection_box_pane_g1

0xa378,	// (0x0009e418) wml_selection_box_pane_t1_ParamLimits

0xa378,	// (0x0009e418) wml_selection_box_pane_t1

0x9eaf,	// (0x0009df4f) bg_wml_button_pane_ParamLimits

0x9eaf,	// (0x0009df4f) bg_wml_button_pane

0xa390,	// (0x0009e430) wml_button_pane_g1

0xa398,	// (0x0009e438) wml_button_pane_t1

0xa390,	// (0x0009e430) wml_button_bg_pane_g1

0xa3a8,	// (0x0009e448) wml_button_bg_pane_g2

0xa3b0,	// (0x0009e450) wml_button_bg_pane_g3

0xa3b8,	// (0x0009e458) wml_button_bg_pane_g4

0xa3c0,	// (0x0009e460) wml_button_bg_pane_g5

0xa3c8,	// (0x0009e468) wml_button_bg_pane_g6

0xa3d0,	// (0x0009e470) wml_button_bg_pane_g7

0xa3d8,	// (0x0009e478) wml_button_bg_pane_g8

0xa3e0,	// (0x0009e480) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a3318) wml_button_bg_pane_g

0x24c5,	// (0x00096565) bg_list_pane_cp02

0xa3e8,	// (0x0009e488) mce_header_pane_ParamLimits

0xa3e8,	// (0x0009e488) mce_header_pane

0xa3fe,	// (0x0009e49e) mce_icon_pane

0xa3fe,	// (0x0009e49e) mce_image_pane

0xa407,	// (0x0009e4a7) mce_text_pane_ParamLimits

0xa407,	// (0x0009e4a7) mce_text_pane

0x24cf,	// (0x0009656f) scroll_pane_cp03

0xa300,	// (0x0009e3a0) scroll_pane_cp04

0xa41a,	// (0x0009e4ba) scroll_pane_cp05_ParamLimits

0xa41a,	// (0x0009e4ba) scroll_pane_cp05

0x24d9,	// (0x00096579) mce_header_field_pane_ParamLimits

0x24d9,	// (0x00096579) mce_header_field_pane

0x24f9,	// (0x00096599) mce_header_field_pane_2_ParamLimits

0x24f9,	// (0x00096599) mce_header_field_pane_2

0x250f,	// (0x000965af) mce_header_field_pane_3

0x2517,	// (0x000965b7) list_single_mce_message_pane_ParamLimits

0x2517,	// (0x000965b7) list_single_mce_message_pane

0x2545,	// (0x000965e5) list_single_mce_smart_pane_ParamLimits

0x2545,	// (0x000965e5) list_single_mce_smart_pane

0xa426,	// (0x0009e4c6) input_focus_pane_cp03

0xa42f,	// (0x0009e4cf) list_header_data_pane

0x257e,	// (0x0009661e) mce_header_field_pane_t1

0x258c,	// (0x0009662c) list_single_mce_header_pane_ParamLimits

0x258c,	// (0x0009662c) list_single_mce_header_pane

0xa437,	// (0x0009e4d7) list_single_mce_header_pane_t1

0xa446,	// (0x0009e4e6) list_single_mce_message_pane_g1

0xa44e,	// (0x0009e4ee) list_single_mce_message_pane_t1

0x25e2,	// (0x00096682) bg_cale_heading_pane_cp01_ParamLimits

0x25e2,	// (0x00096682) bg_cale_heading_pane_cp01

0xa45c,	// (0x0009e4fc) bg_cale_pane_cp02_ParamLimits

0xa45c,	// (0x0009e4fc) bg_cale_pane_cp02

0x2630,	// (0x000966d0) cale_month_corner_pane

0x264f,	// (0x000966ef) cale_month_day_heading_pane_ParamLimits

0x264f,	// (0x000966ef) cale_month_day_heading_pane

0x26b5,	// (0x00096755) cale_month_pane_g1_ParamLimits

0x26b5,	// (0x00096755) cale_month_pane_g1

0x26f8,	// (0x00096798) cale_month_pane_g2_ParamLimits

0x26f8,	// (0x00096798) cale_month_pane_g2

0x2732,	// (0x000967d2) cale_month_pane_g3_ParamLimits

0x2732,	// (0x000967d2) cale_month_pane_g3

0x2782,	// (0x00096822) cale_month_pane_g4_ParamLimits

0x2782,	// (0x00096822) cale_month_pane_g4

0x27d2,	// (0x00096872) cale_month_pane_g5_ParamLimits

0x27d2,	// (0x00096872) cale_month_pane_g5

0x2822,	// (0x000968c2) cale_month_pane_g6_ParamLimits

0x2822,	// (0x000968c2) cale_month_pane_g6

0x2872,	// (0x00096912) cale_month_pane_g7_ParamLimits

0x2872,	// (0x00096912) cale_month_pane_g7

0x28da,	// (0x0009697a) cale_month_pane_g8_ParamLimits

0x28da,	// (0x0009697a) cale_month_pane_g8

0x2942,	// (0x000969e2) cale_month_pane_g9_ParamLimits

0x2942,	// (0x000969e2) cale_month_pane_g9

0x29a0,	// (0x00096a40) cale_month_pane_g10_ParamLimits

0x29a0,	// (0x00096a40) cale_month_pane_g10

0x29fe,	// (0x00096a9e) cale_month_pane_g11_ParamLimits

0x29fe,	// (0x00096a9e) cale_month_pane_g11

0x2a52,	// (0x00096af2) cale_month_pane_g12_ParamLimits

0x2a52,	// (0x00096af2) cale_month_pane_g12

0x2aa8,	// (0x00096b48) cale_month_pane_g13_ParamLimits

0x2aa8,	// (0x00096b48) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a332b) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a332b) cale_month_pane_g

0x2afe,	// (0x00096b9e) cale_month_week_pane

0x2b22,	// (0x00096bc2) grid_cale_month_pane_ParamLimits

0x2b22,	// (0x00096bc2) grid_cale_month_pane

0x2b7f,	// (0x00096c1f) cale_month_day_heading_pane_t1

0x2c05,	// (0x00096ca5) cale_month_day_heading_pane_t2

0x2c7e,	// (0x00096d1e) cale_month_day_heading_pane_t3

0x2cf7,	// (0x00096d97) cale_month_day_heading_pane_t4

0x2d70,	// (0x00096e10) cale_month_day_heading_pane_t5

0x2de9,	// (0x00096e89) cale_month_day_heading_pane_t6

0x2e62,	// (0x00096f02) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a3346) cale_month_day_heading_pane_t

0xa0fc,	// (0x0009e19c) bg_cale_side_pane_cp01

0x2ef3,	// (0x00096f93) cale_month_week_pane_t1

0x2f0c,	// (0x00096fac) cale_month_week_pane_t2

0x2f25,	// (0x00096fc5) cale_month_week_pane_t3

0x2f3e,	// (0x00096fde) cale_month_week_pane_t4

0x2f59,	// (0x00096ff9) cale_month_week_pane_t5

0x2f7a,	// (0x0009701a) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a3355) cale_month_week_pane_t

0x2f9b,	// (0x0009703b) cell_cale_month_pane_ParamLimits

0x2f9b,	// (0x0009703b) cell_cale_month_pane

0x30eb,	// (0x0009718b) cell_cale_month_pane_g1

0x30f7,	// (0x00097197) cell_cale_month_pane_t1_ParamLimits

0x30f7,	// (0x00097197) cell_cale_month_pane_t1

0xa10a,	// (0x0009e1aa) grid_highlight_pane_cp08

0x9fd5,	// (0x0009e075) main_smil_g1

0x3123,	// (0x000971c3) smil_status_pane

0xa49b,	// (0x0009e53b) smil_text_pane

0xbea6,	// (0x0009ff46) bg_popup_call3_rect_pane_g8

0xbeae,	// (0x0009ff4e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000a360e) bg_popup_call3_rect_pane_g

0xc135,	// (0x000a01d5) smil_status_volume_pane_g1

0xa4a5,	// (0x0009e545) smil_status_pane_t1

0x45f7,	// (0x00098697) volume_smil_pane

0xa4bc,	// (0x0009e55c) list_smil_text_pane

0x3136,	// (0x000971d6) scroll_pane_cp011

0x3141,	// (0x000971e1) smil_text_list_pane_t1_ParamLimits

0x3141,	// (0x000971e1) smil_text_list_pane_t1

0x31ce,	// (0x0009726e) aid_volume_smil_ParamLimits

0x31ce,	// (0x0009726e) aid_volume_smil

0x9fd5,	// (0x0009e075) smil_volume_pane_g1

0x9fd5,	// (0x0009e075) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a3375) smil_volume_pane_g

0x1777,	// (0x00095817) listscroll_cale_day_pane

0xa4c6,	// (0x0009e566) bg_cale_pane

0xa4de,	// (0x0009e57e) list_cale_pane

0xa501,	// (0x0009e5a1) scroll_pane_cp09

0xa512,	// (0x0009e5b2) cale_bg_pane_g1

0xa51a,	// (0x0009e5ba) cale_bg_pane_g2

0xa522,	// (0x0009e5c2) cale_bg_pane_g3

0xa52a,	// (0x0009e5ca) cale_bg_pane_g4

0xa532,	// (0x0009e5d2) cale_bg_pane_g5

0xa53a,	// (0x0009e5da) cale_bg_pane_g6

0xa542,	// (0x0009e5e2) cale_bg_pane_g7

0xa54a,	// (0x0009e5ea) cale_bg_pane_g8

0xa552,	// (0x0009e5f2) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a337a) cale_bg_pane_g

0x31f8,	// (0x00097298) list_cale_time_pane_ParamLimits

0x31f8,	// (0x00097298) list_cale_time_pane

0xa55a,	// (0x0009e5fa) list_cale_time_pane_g1_ParamLimits

0xa55a,	// (0x0009e5fa) list_cale_time_pane_g1

0xa566,	// (0x0009e606) list_cale_time_pane_g2_ParamLimits

0xa566,	// (0x0009e606) list_cale_time_pane_g2

0x3220,	// (0x000972c0) list_cale_time_pane_g3_ParamLimits

0x3220,	// (0x000972c0) list_cale_time_pane_g3

0x322e,	// (0x000972ce) list_cale_time_pane_g4_ParamLimits

0x322e,	// (0x000972ce) list_cale_time_pane_g4

0x323c,	// (0x000972dc) list_cale_time_pane_g5_ParamLimits

0x323c,	// (0x000972dc) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a338d) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a338d) list_cale_time_pane_g

0xa580,	// (0x0009e620) list_cale_time_pane_t1_ParamLimits

0xa580,	// (0x0009e620) list_cale_time_pane_t1

0xa5a8,	// (0x0009e648) list_cale_time_pane_t2_ParamLimits

0xa5a8,	// (0x0009e648) list_cale_time_pane_t2

0x3604,	// (0x000976a4) aid_blid_cardinal_pane

0x3646,	// (0x000976e6) compass_pane_t4

0xa5d0,	// (0x0009e670) list_cale_time_pane_t4_ParamLimits

0xa5d0,	// (0x0009e670) list_cale_time_pane_t4

0x3654,	// (0x000976f4) compass_pane_t5

0x3664,	// (0x00097704) compass_pane_t6

0x3672,	// (0x00097712) compass_pane_t7

0xaa56,	// (0x0009eaf6) navi_pane_cc_t1

0xac33,	// (0x0009ecd3) aid_phob_thumbnail_center_pane

0x3cc1,	// (0x00097d61) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a339a) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a339a) list_cale_time_pane_t

0xeda9,	// (0x000a2e49) bg_popup_window_pane_cp02_ParamLimits

0xeda9,	// (0x000a2e49) bg_popup_window_pane_cp02

0xa5f8,	// (0x0009e698) heading_pane_cp01_ParamLimits

0xa5f8,	// (0x0009e698) heading_pane_cp01

0xa604,	// (0x0009e6a4) loc_req_pane_ParamLimits

0xa604,	// (0x0009e6a4) loc_req_pane

0xa614,	// (0x0009e6b4) loc_type_pane_ParamLimits

0xa614,	// (0x0009e6b4) loc_type_pane

0xa626,	// (0x0009e6c6) loc_type_pane_t1_ParamLimits

0xa626,	// (0x0009e6c6) loc_type_pane_t1

0xa638,	// (0x0009e6d8) loc_type_pane_t2_ParamLimits

0xa638,	// (0x0009e6d8) loc_type_pane_t2

0xa64a,	// (0x0009e6ea) loc_type_pane_t3_ParamLimits

0xa64a,	// (0x0009e6ea) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a33a1) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a33a1) loc_type_pane_t

0xa65c,	// (0x0009e6fc) list_loc_req_pane

0xa666,	// (0x0009e706) scroll_pane_cp012

0x324a,	// (0x000972ea) list_single_loc_request_popup_menu_pane_ParamLimits

0x324a,	// (0x000972ea) list_single_loc_request_popup_menu_pane

0xa671,	// (0x0009e711) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa671,	// (0x0009e711) list_single_loc_request_popup_menu_pane_g1

0xa67d,	// (0x0009e71d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa67d,	// (0x0009e71d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a33a8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a33a8) list_single_loc_request_popup_menu_pane_g

0xa689,	// (0x0009e729) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa689,	// (0x0009e729) list_single_loc_request_popup_menu_pane_t1

0x3264,	// (0x00097304) bg_popup_window_pane_cp03_ParamLimits

0x3264,	// (0x00097304) bg_popup_window_pane_cp03

0x3272,	// (0x00097312) heading_loc_req_pane_ParamLimits

0x3272,	// (0x00097312) heading_loc_req_pane

0x327e,	// (0x0009731e) popup_dyc_status_message_window_g1_ParamLimits

0x327e,	// (0x0009731e) popup_dyc_status_message_window_g1

0x328a,	// (0x0009732a) popup_dyc_status_message_window_t1_ParamLimits

0x328a,	// (0x0009732a) popup_dyc_status_message_window_t1

0x329c,	// (0x0009733c) popup_dyc_status_message_window_t2_ParamLimits

0x329c,	// (0x0009733c) popup_dyc_status_message_window_t2

0x32ae,	// (0x0009734e) popup_dyc_status_message_window_t3_ParamLimits

0x32ae,	// (0x0009734e) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a33ad) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a33ad) popup_dyc_status_message_window_t

0x9c54,	// (0x0009dcf4) bg_heading_pane_cp01

0xa69f,	// (0x0009e73f) heading_loc_req_pane_g1

0xa6a7,	// (0x0009e747) heading_loc_req_pane_g2

0xa6af,	// (0x0009e74f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a33b4) heading_loc_req_pane_g

0xa6b7,	// (0x0009e757) heading_loc_req_pane_t1

0xa6c6,	// (0x0009e766) bg_popup_sub_pane_cp01_ParamLimits

0xa6c6,	// (0x0009e766) bg_popup_sub_pane_cp01

0xa6d4,	// (0x0009e774) popup_cale_events_window_g1_ParamLimits

0xa6d4,	// (0x0009e774) popup_cale_events_window_g1

0xa6f4,	// (0x0009e794) popup_cale_events_window_g2_ParamLimits

0xa6f4,	// (0x0009e794) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a33e8) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a33e8) popup_cale_events_window_g

0xa714,	// (0x0009e7b4) popup_cale_events_window_t1_ParamLimits

0xa714,	// (0x0009e7b4) popup_cale_events_window_t1

0xa726,	// (0x0009e7c6) popup_cale_events_window_t2_ParamLimits

0xa726,	// (0x0009e7c6) popup_cale_events_window_t2

0xa764,	// (0x0009e804) popup_cale_events_window_t3_ParamLimits

0xa764,	// (0x0009e804) popup_cale_events_window_t3

0xa79e,	// (0x0009e83e) popup_cale_events_window_t4_ParamLimits

0xa79e,	// (0x0009e83e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a33ed) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a33ed) popup_cale_events_window_t

0x33a7,	// (0x00097447) call_type_pane

0xa7d4,	// (0x0009e874) popup_call_status_window_g1

0x33b3,	// (0x00097453) popup_call_status_window_g2

0x33bf,	// (0x0009745f) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a33f6) popup_call_status_window_g

0xa7e2,	// (0x0009e882) call_type_pane_g1

0xa7eb,	// (0x0009e88b) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a33fd) call_type_pane_g

0x9c54,	// (0x0009dcf4) bg_popup_sub_pane_cp02

0xa7f4,	// (0x0009e894) listscroll_popup_wml_pane

0xa7fc,	// (0x0009e89c) list_wml_pane

0xa806,	// (0x0009e8a6) scroll_pane_cp013

0xa811,	// (0x0009e8b1) list_single_graphic_popup_wml_pane_ParamLimits

0xa811,	// (0x0009e8b1) list_single_graphic_popup_wml_pane

0x9fd5,	// (0x0009e075) list_single_graphic_popup_wml_pane_g1

0xa825,	// (0x0009e8c5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a3402) list_single_graphic_popup_wml_pane_g

0xa82d,	// (0x0009e8cd) list_single_graphic_popup_wml_pane_t1

0xa843,	// (0x0009e8e3) aid_call_pane

0x9ea7,	// (0x0009df47) popup_clock_analogue_window_g1

0x9ea7,	// (0x0009df47) popup_clock_analogue_window_g2

0x33cb,	// (0x0009746b) popup_clock_analogue_window_g3

0x33cb,	// (0x0009746b) popup_clock_analogue_window_g4

0x9fd5,	// (0x0009e075) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a3407) popup_clock_analogue_window_g

0x33d3,	// (0x00097473) popup_clock_analogue_window_t1

0x33e1,	// (0x00097481) clock_digital_number_pane_ParamLimits

0x33e1,	// (0x00097481) clock_digital_number_pane

0x33ed,	// (0x0009748d) clock_digital_number_pane_cp02_ParamLimits

0x33ed,	// (0x0009748d) clock_digital_number_pane_cp02

0x33f9,	// (0x00097499) clock_digital_number_pane_cp03_ParamLimits

0x33f9,	// (0x00097499) clock_digital_number_pane_cp03

0x3405,	// (0x000974a5) clock_digital_number_pane_cp04_ParamLimits

0x3405,	// (0x000974a5) clock_digital_number_pane_cp04

0x3411,	// (0x000974b1) clock_digital_separator_pane_ParamLimits

0x3411,	// (0x000974b1) clock_digital_separator_pane

0x341d,	// (0x000974bd) popup_clock_digital_window_t1

0x9fd5,	// (0x0009e075) clock_digital_number_pane_g1

0x9fd5,	// (0x0009e075) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a3375) clock_digital_number_pane_g

0x9fd5,	// (0x0009e075) clock_digital_separator_pane_g1

0x9fd5,	// (0x0009e075) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a3375) clock_digital_separator_pane_g

0x9c54,	// (0x0009dcf4) bg_popup_window_pane_cp04

0xa84b,	// (0x0009e8eb) heading_pane_cp03

0xa853,	// (0x0009e8f3) listscroll_popup_gms_pane

0xa85b,	// (0x0009e8fb) grid_large_graphic_popup_pane

0xa865,	// (0x0009e905) listscroll_popup_gms_pane_g1

0xa86d,	// (0x0009e90d) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a3412) listscroll_popup_gms_pane_g

0xa300,	// (0x0009e3a0) scroll_pane_cp014

0x343a,	// (0x000974da) cell_large_graphic_popup_pane_ParamLimits

0x343a,	// (0x000974da) cell_large_graphic_popup_pane

0x3452,	// (0x000974f2) cell_large_graphic_popup_pane_g1_ParamLimits

0x3452,	// (0x000974f2) cell_large_graphic_popup_pane_g1

0xa875,	// (0x0009e915) cell_large_graphic_popup_pane_g2_ParamLimits

0xa875,	// (0x0009e915) cell_large_graphic_popup_pane_g2

0xa881,	// (0x0009e921) cell_large_graphic_popup_pane_g3_ParamLimits

0xa881,	// (0x0009e921) cell_large_graphic_popup_pane_g3

0xa88e,	// (0x0009e92e) cell_large_graphic_popup_pane_g4_ParamLimits

0xa88e,	// (0x0009e92e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a3417) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a3417) cell_large_graphic_popup_pane_g

0xa89e,	// (0x0009e93e) grid_highlight_pane_cp010

0x9fd5,	// (0x0009e075) bg_popup_call_pane_g1

0xa8a8,	// (0x0009e948) list_single_graphic_popup_conf_pane_ParamLimits

0xa8a8,	// (0x0009e948) list_single_graphic_popup_conf_pane

0xa8bb,	// (0x0009e95b) list_highlight_pane_cp01

0xa8c4,	// (0x0009e964) list_single_graphic_popup_conf_pane_g1

0xa8cc,	// (0x0009e96c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a3420) list_single_graphic_popup_conf_pane_g

0xa8d4,	// (0x0009e974) list_single_graphic_popup_conf_pane_t1

0xa8e2,	// (0x0009e982) linegrid_cams_pane_g1

0x345e,	// (0x000974fe) linegrid_cams_pane_g2

0xa13d,	// (0x0009e1dd) linegrid_cams_pane_g3

0xa8eb,	// (0x0009e98b) linegrid_cams_pane_g4

0x3467,	// (0x00097507) linegrid_cams_pane_g5

0x3470,	// (0x00097510) linegrid_cams_pane_g6

0xa146,	// (0x0009e1e6) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a3425) linegrid_cams_pane_g

0xa8f4,	// (0x0009e994) popup_clock_analogue_window

0xa8f4,	// (0x0009e994) popup_clock_digital_window

0x9c54,	// (0x0009dcf4) popup_phob_thumbnail_window

0x9fd5,	// (0x0009e075) call_video_uplink_pane_g1

0xa8fd,	// (0x0009e99d) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a3434) call_video_uplink_pane_g

0xa905,	// (0x0009e9a5) video_uplink_pane

0xa90d,	// (0x0009e9ad) mce_image_pane_g1

0x3479,	// (0x00097519) mce_image_pane_g2

0x3481,	// (0x00097521) mce_image_pane_g3

0x3489,	// (0x00097529) mce_image_pane_g4

0x3491,	// (0x00097531) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a3439) mce_image_pane_g

0xa917,	// (0x0009e9b7) control_top_pane_stacon_cp01_ParamLimits

0xa917,	// (0x0009e9b7) control_top_pane_stacon_cp01

0xa92b,	// (0x0009e9cb) uni_indicator_pane_stacon_cp01_ParamLimits

0xa92b,	// (0x0009e9cb) uni_indicator_pane_stacon_cp01

0xa93c,	// (0x0009e9dc) bg_popup_sub_pane_cp03

0x3499,	// (0x00097539) chi_dic_find_pane

0x34a1,	// (0x00097541) listscroll_chi_dic_pane

0x34aa,	// (0x0009754a) main_pane_chidic_g1

0x34bd,	// (0x0009755d) chi_dic_find_pane_t1

0xa946,	// (0x0009e9e6) find_chidic_pane

0xa94f,	// (0x0009e9ef) chi_dic_list_pane_ParamLimits

0xa94f,	// (0x0009e9ef) chi_dic_list_pane

0xa960,	// (0x0009ea00) scroll_pane_cp020

0x34cb,	// (0x0009756b) find_chidic_pane_t1

0x9c54,	// (0x0009dcf4) input_focus_pane_cp06

0x34da,	// (0x0009757a) list_chi_dic_pane_ParamLimits

0x34da,	// (0x0009757a) list_chi_dic_pane

0x34f7,	// (0x00097597) list_chi_dic_pane_t1_ParamLimits

0x34f7,	// (0x00097597) list_chi_dic_pane_t1

0x9c54,	// (0x0009dcf4) list_highlight_pane_cp020

0xa968,	// (0x0009ea08) bg_cale_heading_pane_g1

0x350a,	// (0x000975aa) bg_cale_heading_pane_g2

0x3512,	// (0x000975b2) bg_cale_heading_pane_g3

0x351a,	// (0x000975ba) bg_cale_heading_pane_g4

0x3524,	// (0x000975c4) bg_cale_heading_pane_g5

0x352e,	// (0x000975ce) bg_cale_heading_pane_g6

0x3536,	// (0x000975d6) bg_cale_heading_pane_g7

0x353e,	// (0x000975de) bg_cale_heading_pane_g8

0x3548,	// (0x000975e8) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a3444) bg_cale_heading_pane_g

0xa968,	// (0x0009ea08) bg_cale_side_pane_g1

0x3552,	// (0x000975f2) bg_cale_side_pane_g2

0x355c,	// (0x000975fc) bg_cale_side_pane_g3

0x3566,	// (0x00097606) bg_cale_side_pane_g4

0x3570,	// (0x00097610) bg_cale_side_pane_g5

0x357a,	// (0x0009761a) bg_cale_side_pane_g6

0x3584,	// (0x00097624) bg_cale_side_pane_g7

0x358e,	// (0x0009762e) bg_cale_side_pane_g8

0x3596,	// (0x00097636) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a3457) bg_cale_side_pane_g

0x359e,	// (0x0009763e) popup_call_status_window_ParamLimits

0x359e,	// (0x0009763e) popup_call_status_window

0xa970,	// (0x0009ea10) stacon_top_pane

0xa978,	// (0x0009ea18) status_pane_ParamLimits

0xa978,	// (0x0009ea18) status_pane

0xa98d,	// (0x0009ea2d) status_small_pane

0xa995,	// (0x0009ea35) control_pane

0x9c54,	// (0x0009dcf4) stacon_bottom_pane

0xa99d,	// (0x0009ea3d) list_single_mce_smart_pane_t1_ParamLimits

0xa99d,	// (0x0009ea3d) list_single_mce_smart_pane_t1

0xa9b0,	// (0x0009ea50) list_single_mce_smart_pane_t2_ParamLimits

0xa9b0,	// (0x0009ea50) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a346a) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a346a) list_single_mce_smart_pane_t

0x35aa,	// (0x0009764a) compass_pane

0x35b6,	// (0x00097656) main_location2_pane_t1

0x35ca,	// (0x0009766a) main_location2_pane_t2

0x35de,	// (0x0009767e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a346f) main_location2_pane_t

0xa9cf,	// (0x0009ea6f) compass_pane_g1_ParamLimits

0xa9cf,	// (0x0009ea6f) compass_pane_g1

0x3628,	// (0x000976c8) compass_pane_t1

0x3637,	// (0x000976d7) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a3478) compass_pane_t

0x3682,	// (0x00097722) text_secondary_cp61

0xaa4d,	// (0x0009eaed) navi_pane_cams_g5

0xaac9,	// (0x0009eb69) navi_pane_im_t1

0xaad7,	// (0x0009eb77) navi_pane_mp_g1_ParamLimits

0xaad7,	// (0x0009eb77) navi_pane_mp_g1

0xaaeb,	// (0x0009eb8b) navi_pane_mp_g2_ParamLimits

0xaaeb,	// (0x0009eb8b) navi_pane_mp_g2

0xaaf7,	// (0x0009eb97) navi_pane_mp_g3_ParamLimits

0xaaf7,	// (0x0009eb97) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a348c) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a348c) navi_pane_mp_g

0xab03,	// (0x0009eba3) navi_pane_mp_t1

0xab11,	// (0x0009ebb1) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a3493) navi_pane_mp_t

0xab7c,	// (0x0009ec1c) navi_pane_vt_g1

0xab03,	// (0x0009eba3) navi_pane_vt_t1

0xab84,	// (0x0009ec24) navi_slider_pane

0xa157,	// (0x0009e1f7) zooming_pane

0xab94,	// (0x0009ec34) navi_slider_pane_g1

0x36bd,	// (0x0009775d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a349a) navi_slider_pane_g

0xabb8,	// (0x0009ec58) aid_levels_zoom

0xabc0,	// (0x0009ec60) zooming_pane_g1

0xabc8,	// (0x0009ec68) zooming_pane_g2

0xabc8,	// (0x0009ec68) zooming_pane_g3

0x0002,

0xf409,	// (0x000a34a9) zooming_pane_g

0xabd0,	// (0x0009ec70) level_10_zoom

0xabd9,	// (0x0009ec79) level_11_zoom

0xabe2,	// (0x0009ec82) level_1_zoom

0xabeb,	// (0x0009ec8b) level_2_zoom

0xabf4,	// (0x0009ec94) level_3_zoom

0xabfd,	// (0x0009ec9d) level_4_zoom

0xac06,	// (0x0009eca6) level_5_zoom

0xac0f,	// (0x0009ecaf) level_6_zoom

0xac18,	// (0x0009ecb8) level_7_zoom

0xac21,	// (0x0009ecc1) level_8_zoom

0xac2a,	// (0x0009ecca) level_9_zoom

0xac3b,	// (0x0009ecdb) popup_phob_thumbnail_window_g1

0xac43,	// (0x0009ece3) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a34b0) popup_phob_thumbnail_window_g

0xc048,	// (0x000a00e8) level_1_location

0xc050,	// (0x000a00f0) level_2_location

0xc058,	// (0x000a00f8) level_3_location

0xc060,	// (0x000a0100) level_4_location

0xa157,	// (0x0009e1f7) level_5_location

0x36cf,	// (0x0009776f) mce_icon_pane_g1

0x36d7,	// (0x00097777) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a34b5) mce_icon_pane_g

0x36df,	// (0x0009777f) main_mup_pane_g1_ParamLimits

0x36df,	// (0x0009777f) main_mup_pane_g1

0x36f7,	// (0x00097797) main_mup_pane_g2_ParamLimits

0x36f7,	// (0x00097797) main_mup_pane_g2

0x370b,	// (0x000977ab) main_mup_pane_g3_ParamLimits

0x370b,	// (0x000977ab) main_mup_pane_g3

0x371f,	// (0x000977bf) main_mup_pane_g4_ParamLimits

0x371f,	// (0x000977bf) main_mup_pane_g4

0x373b,	// (0x000977db) main_mup_pane_g5_ParamLimits

0x373b,	// (0x000977db) main_mup_pane_g5

0x375c,	// (0x000977fc) main_mup_pane_g6_ParamLimits

0x375c,	// (0x000977fc) main_mup_pane_g6

0x3778,	// (0x00097818) main_mup_pane_g7_ParamLimits

0x3778,	// (0x00097818) main_mup_pane_g7

0x3794,	// (0x00097834) main_mup_pane_g8_ParamLimits

0x3794,	// (0x00097834) main_mup_pane_g8

0x37b0,	// (0x00097850) main_mup_pane_g9_ParamLimits

0x37b0,	// (0x00097850) main_mup_pane_g9

0x37cf,	// (0x0009786f) main_mup_pane_g10_ParamLimits

0x37cf,	// (0x0009786f) main_mup_pane_g10

0x37ee,	// (0x0009788e) main_mup_pane_g11_ParamLimits

0x37ee,	// (0x0009788e) main_mup_pane_g11

0x3806,	// (0x000978a6) main_mup_pane_g12_ParamLimits

0x3806,	// (0x000978a6) main_mup_pane_g12

0x3814,	// (0x000978b4) main_mup_pane_g13_ParamLimits

0x3814,	// (0x000978b4) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a34ba) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a34ba) main_mup_pane_g

0x382a,	// (0x000978ca) main_mup_pane_t1_ParamLimits

0x382a,	// (0x000978ca) main_mup_pane_t1

0x3847,	// (0x000978e7) main_mup_pane_t2_ParamLimits

0x3847,	// (0x000978e7) main_mup_pane_t2

0x3861,	// (0x00097901) main_mup_pane_t3_ParamLimits

0x3861,	// (0x00097901) main_mup_pane_t3

0x387b,	// (0x0009791b) main_mup_pane_t4_ParamLimits

0x387b,	// (0x0009791b) main_mup_pane_t4

0x388d,	// (0x0009792d) main_mup_pane_t5_ParamLimits

0x388d,	// (0x0009792d) main_mup_pane_t5

0x389f,	// (0x0009793f) main_mup_pane_t6_ParamLimits

0x389f,	// (0x0009793f) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a34d5) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a34d5) main_mup_pane_t

0x38b5,	// (0x00097955) mup_progress_pane_ParamLimits

0x38b5,	// (0x00097955) mup_progress_pane

0x38c1,	// (0x00097961) mup_visualizer_pane_ParamLimits

0x38c1,	// (0x00097961) mup_visualizer_pane

0x38ff,	// (0x0009799f) mup_volume_pane_ParamLimits

0x38ff,	// (0x0009799f) mup_volume_pane

0xa7d4,	// (0x0009e874) mup_visualizer_pane_g1_ParamLimits

0xa7d4,	// (0x0009e874) mup_visualizer_pane_g1

0xa7d4,	// (0x0009e874) mup_visualizer_pane_g2_ParamLimits

0xa7d4,	// (0x0009e874) mup_visualizer_pane_g2

0xa9cf,	// (0x0009ea6f) mup_visualizer_pane_g3_ParamLimits

0xa9cf,	// (0x0009ea6f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a34e2) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a34e2) mup_visualizer_pane_g

0x9fd5,	// (0x0009e075) mup_volume_pane_g1

0xac53,	// (0x0009ecf3) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a34e9) mup_volume_pane_g

0x9fd5,	// (0x0009e075) mup_progress_pane_g1

0xac5c,	// (0x0009ecfc) mup_progress_pane_g2

0xac65,	// (0x0009ed05) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a34ee) mup_progress_pane_g

0x9c54,	// (0x0009dcf4) bg_popup_window_pane_cp05

0xac6e,	// (0x0009ed0e) heading_pane_cp02_ParamLimits

0xac6e,	// (0x0009ed0e) heading_pane_cp02

0xac88,	// (0x0009ed28) list_popup_blid_pane

0xac90,	// (0x0009ed30) list_blid_sat_info_pane_ParamLimits

0xac90,	// (0x0009ed30) list_blid_sat_info_pane

0xaca3,	// (0x0009ed43) list_blid_sat_info_pane_g1

0xacab,	// (0x0009ed4b) list_blid_sat_info_pane_t1

0x3a0a,	// (0x00097aaa) mup_equalizer_pane_ParamLimits

0x3a0a,	// (0x00097aaa) mup_equalizer_pane

0x3a2b,	// (0x00097acb) mup_equalizer_pane_cp1_ParamLimits

0x3a2b,	// (0x00097acb) mup_equalizer_pane_cp1

0x3a4c,	// (0x00097aec) mup_equalizer_pane_cp2_ParamLimits

0x3a4c,	// (0x00097aec) mup_equalizer_pane_cp2

0x3a6d,	// (0x00097b0d) mup_equalizer_pane_cp3_ParamLimits

0x3a6d,	// (0x00097b0d) mup_equalizer_pane_cp3

0x3a8e,	// (0x00097b2e) mup_equalizer_pane_cp4_ParamLimits

0x3a8e,	// (0x00097b2e) mup_equalizer_pane_cp4

0x3aaf,	// (0x00097b4f) mup_equalizer_pane_cp5

0x3ac5,	// (0x00097b65) mup_equalizer_pane_cp6

0x3add,	// (0x00097b7d) mup_equalizer_pane_cp7

0xbf26,	// (0x0009ffc6) bg_popup_call_poc_act_pane_g9

0xbf2e,	// (0x0009ffce) bg_popup_call_poc_act_pane_g10

0xbf36,	// (0x0009ffd6) bg_popup_call_poc_act_pane_g11

0x000a,

0x9eaf,	// (0x0009df4f) mup_scale_pane

0x9fd5,	// (0x0009e075) mup_scale_pane_g1

0xacb9,	// (0x0009ed59) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a350a) mup_scale_pane_g

0xacdd,	// (0x0009ed7d) msg_data_pane

0xace5,	// (0x0009ed85) scroll_pane_cp017

0x3b07,	// (0x00097ba7) bg_list_pane_cp04_ParamLimits

0x3b07,	// (0x00097ba7) bg_list_pane_cp04

0xaced,	// (0x0009ed8d) msg_data_pane_g1

0x3b23,	// (0x00097bc3) msg_data_pane_g2

0x3b2b,	// (0x00097bcb) msg_data_pane_g3

0x3b33,	// (0x00097bd3) msg_data_pane_g4

0x3b3b,	// (0x00097bdb) msg_data_pane_g5

0x3b43,	// (0x00097be3) msg_data_pane_g6

0x3b4b,	// (0x00097beb) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a3519) msg_data_pane_g

0x3b53,	// (0x00097bf3) msg_text_pane_ParamLimits

0x3b53,	// (0x00097bf3) msg_text_pane

0x3ba3,	// (0x00097c43) qrid_highlight_pane_cp011_ParamLimits

0x3ba3,	// (0x00097c43) qrid_highlight_pane_cp011

0x9c54,	// (0x0009dcf4) msg_body_pane

0x9c54,	// (0x0009dcf4) msg_header_pane

0xacfe,	// (0x0009ed9e) input_focus_pane_cp07

0xb85c,	// (0x0009f8fc) msg_header_pane_t1_ParamLimits

0xb85c,	// (0x0009f8fc) msg_header_pane_t1

0xb86e,	// (0x0009f90e) msg_header_pane_t2_ParamLimits

0xb86e,	// (0x0009f90e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a352d) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a352d) msg_header_pane_t

0xad13,	// (0x0009edb3) msg_body_pane_g1

0xb880,	// (0x0009f920) msg_body_pane_t1_ParamLimits

0xb880,	// (0x0009f920) msg_body_pane_t1

0xb8b1,	// (0x0009f951) msg_body_pane_t2_ParamLimits

0xb8b1,	// (0x0009f951) msg_body_pane_t2

0xb8c3,	// (0x0009f963) msg_body_pane_t3_ParamLimits

0xb8c3,	// (0x0009f963) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a3532) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a3532) msg_body_pane_t

0x3c1d,	// (0x00097cbd) main_viewer_pane_g1_ParamLimits

0x3c1d,	// (0x00097cbd) main_viewer_pane_g1

0x3c29,	// (0x00097cc9) main_viewer_pane_g2_ParamLimits

0x3c29,	// (0x00097cc9) main_viewer_pane_g2

0x3c35,	// (0x00097cd5) main_viewer_pane_g3_ParamLimits

0x3c35,	// (0x00097cd5) main_viewer_pane_g3

0x3c46,	// (0x00097ce6) main_viewer_pane_g4_ParamLimits

0x3c46,	// (0x00097ce6) main_viewer_pane_g4

0x3c57,	// (0x00097cf7) main_viewer_pane_g5_ParamLimits

0x3c57,	// (0x00097cf7) main_viewer_pane_g5

0x3c57,	// (0x00097cf7) main_viewer_pane_g7_ParamLimits

0x3c57,	// (0x00097cf7) main_viewer_pane_g7

0xa671,	// (0x0009e711) main_viewer_pane_g8_ParamLimits

0xa671,	// (0x0009e711) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a3542) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a3542) main_viewer_pane_g

0xad1b,	// (0x0009edbb) viewer_content_pane_ParamLimits

0xad1b,	// (0x0009edbb) viewer_content_pane

0x3c95,	// (0x00097d35) main_postcard_pane_g1_ParamLimits

0x3c95,	// (0x00097d35) main_postcard_pane_g1

0x3ca3,	// (0x00097d43) main_postcard_pane_g2_ParamLimits

0x3ca3,	// (0x00097d43) main_postcard_pane_g2

0x3cb1,	// (0x00097d51) main_postcard_pane_g3_ParamLimits

0x3cb1,	// (0x00097d51) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a3553) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a3553) main_postcard_pane_g

0x3cc1,	// (0x00097d61) main_postcard_pane_g4

0xc148,	// (0x000a01e8) smil_status_volume_pane_g2

0x3ced,	// (0x00097d8d) postcard_pane_ParamLimits

0x3ced,	// (0x00097d8d) postcard_pane

0xa7d4,	// (0x0009e874) postcard_pane_g1_ParamLimits

0xa7d4,	// (0x0009e874) postcard_pane_g1

0x3d1f,	// (0x00097dbf) postcard_pane_g2_ParamLimits

0x3d1f,	// (0x00097dbf) postcard_pane_g2

0x3d2b,	// (0x00097dcb) postcard_pane_g3_ParamLimits

0x3d2b,	// (0x00097dcb) postcard_pane_g3

0xad29,	// (0x0009edc9) postcard_pane_g4_ParamLimits

0xad29,	// (0x0009edc9) postcard_pane_g4

0x3d37,	// (0x00097dd7) postcard_pane_g5_ParamLimits

0x3d37,	// (0x00097dd7) postcard_pane_g5

0x3d43,	// (0x00097de3) postcard_pane_g6_ParamLimits

0x3d43,	// (0x00097de3) postcard_pane_g6

0xad37,	// (0x0009edd7) postcard_pane_g7_ParamLimits

0xad37,	// (0x0009edd7) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a3560) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a3560) postcard_pane_g

0x3d4f,	// (0x00097def) main_mp2_pane_g1_ParamLimits

0x3d4f,	// (0x00097def) main_mp2_pane_g1

0x3d5b,	// (0x00097dfb) main_mp2_pane_g2_ParamLimits

0x3d5b,	// (0x00097dfb) main_mp2_pane_g2

0x3d67,	// (0x00097e07) main_mp2_pane_g3_ParamLimits

0x3d67,	// (0x00097e07) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a356f) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a356f) main_mp2_pane_g

0x3d73,	// (0x00097e13) main_mp2_pane_t1_ParamLimits

0x3d73,	// (0x00097e13) main_mp2_pane_t1

0x3d8a,	// (0x00097e2a) main_mp2_pane_t2_ParamLimits

0x3d8a,	// (0x00097e2a) main_mp2_pane_t2

0x3d9c,	// (0x00097e3c) main_mp2_pane_t3_ParamLimits

0x3d9c,	// (0x00097e3c) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a3576) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a3576) main_mp2_pane_t

0xad45,	// (0x0009ede5) pec_content_pane_ParamLimits

0xad45,	// (0x0009ede5) pec_content_pane

0xa300,	// (0x0009e3a0) scroll_pane_cp015

0xad57,	// (0x0009edf7) pec_attribute_pane_ParamLimits

0xad57,	// (0x0009edf7) pec_attribute_pane

0x3dae,	// (0x00097e4e) pec_content_pane_g1_ParamLimits

0x3dae,	// (0x00097e4e) pec_content_pane_g1

0xad67,	// (0x0009ee07) pec_content_pane_t1_ParamLimits

0xad67,	// (0x0009ee07) pec_content_pane_t1

0xad79,	// (0x0009ee19) pec_content_pane_t2_ParamLimits

0xad79,	// (0x0009ee19) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000a357d) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000a357d) pec_content_pane_t

0x3dba,	// (0x00097e5a) list_single_graphic_pane_cp01_ParamLimits

0x3dba,	// (0x00097e5a) list_single_graphic_pane_cp01

0x9eaf,	// (0x0009df4f) bg_popup_sub_pane_cp04

0xad8b,	// (0x0009ee2b) popup_mup_playback_window_g1

0xad97,	// (0x0009ee37) popup_mup_playback_window_t1

0xadac,	// (0x0009ee4c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000a3582) popup_mup_playback_window_t

0xade3,	// (0x0009ee83) main_image_pane_g1_ParamLimits

0xade3,	// (0x0009ee83) main_image_pane_g1

0xae26,	// (0x0009eec6) scroll_pane_cp018_ParamLimits

0xae26,	// (0x0009eec6) scroll_pane_cp018

0xae3e,	// (0x0009eede) scroll_pane_cp016_ParamLimits

0xae3e,	// (0x0009eede) scroll_pane_cp016

0x3e54,	// (0x00097ef4) smil2_image_pane_ParamLimits

0x3e54,	// (0x00097ef4) smil2_image_pane

0x3e84,	// (0x00097f24) smil2_root_pane_ParamLimits

0x3e84,	// (0x00097f24) smil2_root_pane

0x3eb0,	// (0x00097f50) smil2_text_pane_ParamLimits

0x3eb0,	// (0x00097f50) smil2_text_pane

0x9c54,	// (0x0009dcf4) bg_list_pane_cp06

0xae7a,	// (0x0009ef1a) grid_radio_pane

0x9c54,	// (0x0009dcf4) bg_popup_window_pane_cp06

0xae82,	// (0x0009ef22) main_fmradio_pane_t1

0xa84b,	// (0x0009e8eb) heading_pane_cp04

0xae90,	// (0x0009ef30) main_fmradio_pane_t2

0xbf7e,	// (0x000a001e) popup_cale_lunar_info_window_g1

0xae9e,	// (0x0009ef3e) main_fmradio_pane_t3

0xbf86,	// (0x000a0026) popup_cale_lunar_info_window_g2

0xaeac,	// (0x0009ef4c) main_fmradio_pane_t4

0x0001,

0xaeba,	// (0x0009ef5a) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x000a3670) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000a3597) main_fmradio_pane_t

0xaec8,	// (0x0009ef68) wait_bar_pane_cp03

0xaed0,	// (0x0009ef70) cell_fmradio_pane_ParamLimits

0xaed0,	// (0x0009ef70) cell_fmradio_pane

0xad37,	// (0x0009edd7) cell_fmradio_pane_g1_ParamLimits

0xad37,	// (0x0009edd7) cell_fmradio_pane_g1

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp011

0xaee3,	// (0x0009ef83) poc_content_pane_ParamLimits

0xaee3,	// (0x0009ef83) poc_content_pane

0xaef5,	// (0x0009ef95) scroll_pane_cp019

0x3ef0,	// (0x00097f90) popup_call_poc_act_window_ParamLimits

0x3ef0,	// (0x00097f90) popup_call_poc_act_window

0x3efd,	// (0x00097f9d) popup_call_poc_inact_window_ParamLimits

0x3efd,	// (0x00097f9d) popup_call_poc_inact_window

0xf594,	// (0x000a3634) bg_popup_call_poc_act_pane_g

0xbf3e,	// (0x0009ffde) bg_popup_call_poc_inact_pane_g1

0xbf46,	// (0x0009ffe6) bg_popup_call_poc_inact_pane_g2

0xaefd,	// (0x0009ef9d) popup_call_poc_act_window_g2

0xbf4e,	// (0x0009ffee) bg_popup_call_poc_inact_pane_g3

0xbece,	// (0x0009ff6e) bg_popup_call_poc_inact_pane_g4

0xbf56,	// (0x0009fff6) bg_popup_call_poc_inact_pane_g5

0xaf05,	// (0x0009efa5) popup_call_poc_act_window_t1_ParamLimits

0xaf05,	// (0x0009efa5) popup_call_poc_act_window_t1

0xaf2d,	// (0x0009efcd) popup_call_poc_act_window_t2_ParamLimits

0xaf2d,	// (0x0009efcd) popup_call_poc_act_window_t2

0xaf55,	// (0x0009eff5) popup_call_poc_act_window_t3_ParamLimits

0xaf55,	// (0x0009eff5) popup_call_poc_act_window_t3

0xaf7d,	// (0x0009f01d) popup_call_poc_act_window_t4_ParamLimits

0xaf7d,	// (0x0009f01d) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000a35a2) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000a35a2) popup_call_poc_act_window_t

0xbf5e,	// (0x0009fffe) bg_popup_call_poc_inact_pane_g6

0xbf66,	// (0x000a0006) bg_popup_call_poc_inact_pane_g7

0xbf6e,	// (0x000a000e) bg_popup_call_poc_inact_pane_g8

0xaf8f,	// (0x0009f02f) popup_call_poc_inact_window_g2

0xbf76,	// (0x000a0016) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x000a364b) bg_popup_call_poc_inact_pane_g

0xaf97,	// (0x0009f037) popup_call_poc_inact_window_t1_ParamLimits

0xaf97,	// (0x0009f037) popup_call_poc_inact_window_t1

0xafac,	// (0x0009f04c) popup_call_poc_inact_window_t2_ParamLimits

0xafac,	// (0x0009f04c) popup_call_poc_inact_window_t2

0xafc1,	// (0x0009f061) popup_call_poc_inact_window_t3_ParamLimits

0xafc1,	// (0x0009f061) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000a35ab) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000a35ab) popup_call_poc_inact_window_t

0xc0bb,	// (0x000a015b) context_pane_ParamLimits

0x4541,	// (0x000985e1) signal_pane_ParamLimits

0xa157,	// (0x0009e1f7) main_call2_pane

0x44b4,	// (0x00098554) popup_phob_thumbnail2_window_ParamLimits

0x44b4,	// (0x00098554) popup_phob_thumbnail2_window

0x3bcb,	// (0x00097c6b) aid_hotspot_pointer_arrow_pane

0x3bd3,	// (0x00097c73) aid_hotspot_pointer_hand_pane

0x4225,	// (0x000982c5) phob_pre_status_pane_g5

0x1c75,	// (0x00095d15) cams_zoom_pane_ParamLimits

0x1c81,	// (0x00095d21) image_vga_pane_ParamLimits

0x1c90,	// (0x00095d30) main_camera_pane_g1_ParamLimits

0x1c9e,	// (0x00095d3e) main_camera_pane_g2_ParamLimits

0x1caa,	// (0x00095d4a) main_camera_pane_g3_ParamLimits

0x1cb6,	// (0x00095d56) main_camera_pane_g4_ParamLimits

0x1cc2,	// (0x00095d62) main_camera_pane_g5_ParamLimits

0x1cce,	// (0x00095d6e) main_camera_pane_g6_ParamLimits

0x1cda,	// (0x00095d7a) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a32aa) main_camera_pane_g_ParamLimits

0x1ce6,	// (0x00095d86) main_camera_pane_t1_ParamLimits

0x1cf8,	// (0x00095d98) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a32bb) main_camera_pane_t_ParamLimits

0x9eaf,	// (0x0009df4f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9eaf,	// (0x0009df4f) bg_popup_preview_window_pane_cp01

0xafd6,	// (0x0009f076) popup_phob_thumbnail2_window_g1_ParamLimits

0xafd6,	// (0x0009f076) popup_phob_thumbnail2_window_g1

0x9c54,	// (0x0009dcf4) call2_cli_visual_pane

0x3f19,	// (0x00097fb9) popup_call2_audio_conf_window_ParamLimits

0x3f19,	// (0x00097fb9) popup_call2_audio_conf_window

0x3f2e,	// (0x00097fce) popup_call2_audio_first_window_ParamLimits

0x3f2e,	// (0x00097fce) popup_call2_audio_first_window

0x3fcc,	// (0x0009806c) popup_call2_audio_in_window_ParamLimits

0x3fcc,	// (0x0009806c) popup_call2_audio_in_window

0x400e,	// (0x000980ae) popup_call2_audio_out_window_ParamLimits

0x400e,	// (0x000980ae) popup_call2_audio_out_window

0x4070,	// (0x00098110) popup_call2_audio_second_window_ParamLimits

0x4070,	// (0x00098110) popup_call2_audio_second_window

0x40ce,	// (0x0009816e) popup_call2_audio_wait_window_ParamLimits

0x40ce,	// (0x0009816e) popup_call2_audio_wait_window

0x9c54,	// (0x0009dcf4) bg_popup_call2_act_pane_cp03

0x9e91,	// (0x0009df31) list_conf_pane_cp

0xafe2,	// (0x0009f082) popup_call2_audio_conf_window_t1

0xaff0,	// (0x0009f090) list_single_graphic_popup_conf2_pane_ParamLimits

0xaff0,	// (0x0009f090) list_single_graphic_popup_conf2_pane

0xa8bb,	// (0x0009e95b) list_highlight_pane_cp04

0xb003,	// (0x0009f0a3) list_single_graphic_popup_conf2_pane_g1

0xa8cc,	// (0x0009e96c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000a35b2) list_single_graphic_popup_conf2_pane_g

0xb00d,	// (0x0009f0ad) list_single_graphic_popup_conf2_pane_t1

0xb01b,	// (0x0009f0bb) bg_popup_call2_act_pane_cp01_ParamLimits

0xb01b,	// (0x0009f0bb) bg_popup_call2_act_pane_cp01

0xb0a5,	// (0x0009f145) call_type_pane_cp05_ParamLimits

0xb0a5,	// (0x0009f145) call_type_pane_cp05

0xb0f9,	// (0x0009f199) popup_call2_audio_second_window_g1_ParamLimits

0xb0f9,	// (0x0009f199) popup_call2_audio_second_window_g1

0xb14d,	// (0x0009f1ed) popup_call2_audio_second_window_g2_ParamLimits

0xb14d,	// (0x0009f1ed) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000a35b7) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000a35b7) popup_call2_audio_second_window_g

0xb1b2,	// (0x0009f252) popup_call2_audio_second_window_t1_ParamLimits

0xb1b2,	// (0x0009f252) popup_call2_audio_second_window_t1

0xb26d,	// (0x0009f30d) popup_call2_audio_second_window_t2_ParamLimits

0xb26d,	// (0x0009f30d) popup_call2_audio_second_window_t2

0xb2c0,	// (0x0009f360) popup_call2_audio_second_window_t3_ParamLimits

0xb2c0,	// (0x0009f360) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000a35be) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000a35be) popup_call2_audio_second_window_t

0x9c54,	// (0x0009dcf4) bg_popup_call2_in_pane_cp02

0x9c5e,	// (0x0009dcfe) call_type_pane_cp04

0x9c66,	// (0x0009dd06) popup_call2_audio_wait_window_g1

0x9c6e,	// (0x0009dd0e) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a3199) popup_call2_audio_wait_window_g

0x9c76,	// (0x0009dd16) popup_call2_audio_wait_window_t3

0xb3b3,	// (0x0009f453) bg_popup_call2_act_pane_ParamLimits

0xb3b3,	// (0x0009f453) bg_popup_call2_act_pane

0xb473,	// (0x0009f513) call_type_pane_cp03_ParamLimits

0xb473,	// (0x0009f513) call_type_pane_cp03

0xb4d7,	// (0x0009f577) popup_call2_audio_first_window_g1_ParamLimits

0xb4d7,	// (0x0009f577) popup_call2_audio_first_window_g1

0xb547,	// (0x0009f5e7) popup_call2_audio_first_window_g2_ParamLimits

0xb547,	// (0x0009f5e7) popup_call2_audio_first_window_g2

0xa7d4,	// (0x0009e874) popup_call2_audio_first_window_g3_ParamLimits

0xa7d4,	// (0x0009e874) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000a35c7) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000a35c7) popup_call2_audio_first_window_g

0xb625,	// (0x0009f6c5) popup_call2_audio_first_window_t1_ParamLimits

0xb625,	// (0x0009f6c5) popup_call2_audio_first_window_t1

0xb728,	// (0x0009f7c8) popup_call2_audio_first_window_t4_ParamLimits

0xb728,	// (0x0009f7c8) popup_call2_audio_first_window_t4

0xb8d5,	// (0x0009f975) popup_call2_audio_first_window_t5_ParamLimits

0xb8d5,	// (0x0009f975) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000a35d2) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000a35d2) popup_call2_audio_first_window_t

0x9ea7,	// (0x0009df47) bg_popup_call2_act_pane_g1

0xbf8e,	// (0x000a002e) popup_cale_lunar_info_window_t1

0xbf9c,	// (0x000a003c) popup_cale_lunar_info_window_t2

0xbfaa,	// (0x000a004a) popup_cale_lunar_info_window_t3

0x9c54,	// (0x0009dcf4) bg_popup_call2_bubble_pane

0xb9d6,	// (0x0009fa76) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9d6,	// (0x0009fa76) bg_popup_call2_in_pane_cp01

0xee2e,	// (0x000a2ece) call_type_pane_cp02

0xba1e,	// (0x0009fabe) popup_call2_audio_out_window_g1_ParamLimits

0xba1e,	// (0x0009fabe) popup_call2_audio_out_window_g1

0xba4a,	// (0x0009faea) popup_call2_audio_out_window_g2_ParamLimits

0xba4a,	// (0x0009faea) popup_call2_audio_out_window_g2

0xba72,	// (0x0009fb12) popup_call2_audio_out_window_g3_ParamLimits

0xba72,	// (0x0009fb12) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000a35db) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000a35db) popup_call2_audio_out_window_g

0xbaad,	// (0x0009fb4d) popup_call2_audio_out_window_t1_ParamLimits

0xbaad,	// (0x0009fb4d) popup_call2_audio_out_window_t1

0xbb0c,	// (0x0009fbac) popup_call2_audio_out_window_t2_ParamLimits

0xbb0c,	// (0x0009fbac) popup_call2_audio_out_window_t2

0xbb60,	// (0x0009fc00) popup_call2_audio_out_window_t3_ParamLimits

0xbb60,	// (0x0009fc00) popup_call2_audio_out_window_t3

0xbb76,	// (0x0009fc16) popup_call2_audio_out_window_t4_ParamLimits

0xbb76,	// (0x0009fc16) popup_call2_audio_out_window_t4

0xbb8c,	// (0x0009fc2c) popup_call2_audio_out_window_t5_ParamLimits

0xbb8c,	// (0x0009fc2c) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000a35e4) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000a35e4) popup_call2_audio_out_window_t

0xbbf0,	// (0x0009fc90) bg_popup_call2_in_pane_ParamLimits

0xbbf0,	// (0x0009fc90) bg_popup_call2_in_pane

0xbc4c,	// (0x0009fcec) popup_call2_audio_in_window_g1_ParamLimits

0xbc4c,	// (0x0009fcec) popup_call2_audio_in_window_g1

0xbc84,	// (0x0009fd24) popup_call2_audio_in_window_g2_ParamLimits

0xbc84,	// (0x0009fd24) popup_call2_audio_in_window_g2

0xbcbc,	// (0x0009fd5c) popup_call2_audio_in_window_g3_ParamLimits

0xbcbc,	// (0x0009fd5c) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000a35f1) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000a35f1) popup_call2_audio_in_window_g

0xbd14,	// (0x0009fdb4) popup_call2_audio_in_window_t1_ParamLimits

0xbd14,	// (0x0009fdb4) popup_call2_audio_in_window_t1

0xbd94,	// (0x0009fe34) popup_call2_audio_in_window_t2_ParamLimits

0xbd94,	// (0x0009fe34) popup_call2_audio_in_window_t2

0xbe14,	// (0x0009feb4) popup_call2_audio_in_window_t3_ParamLimits

0xbe14,	// (0x0009feb4) popup_call2_audio_in_window_t3

0xbe2e,	// (0x0009fece) popup_call2_audio_in_window_t4_ParamLimits

0xbe2e,	// (0x0009fece) popup_call2_audio_in_window_t4

0xbe40,	// (0x0009fee0) popup_call2_audio_in_window_t5_ParamLimits

0xbe40,	// (0x0009fee0) popup_call2_audio_in_window_t5

0xbe55,	// (0x0009fef5) popup_call2_audio_in_window_t6_ParamLimits

0xbe55,	// (0x0009fef5) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000a35fa) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000a35fa) popup_call2_audio_in_window_t

0x9ea7,	// (0x0009df47) bg_popup_call2_in_pane_g1

0xbfb8,	// (0x000a0058) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x000a3675) popup_cale_lunar_info_window_t

0x9eaf,	// (0x0009df4f) bg_popup_call2_rect_pane_ParamLimits

0x9eaf,	// (0x0009df4f) bg_popup_call2_rect_pane

0x9c54,	// (0x0009dcf4) call2_cli_visual_graphic_pane

0x9c54,	// (0x0009dcf4) call2_cli_visual_text_pane

0x45ea,	// (0x0009868a) smil_status_volume_pane_g3

0x0002,

0x9fd5,	// (0x0009e075) call2_cli_visual_graphic_pane_g1

0x9fd5,	// (0x0009e075) call2_cli_visual_graphic_pane_g2

0x9fd5,	// (0x0009e075) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000a3607) call2_cli_visual_graphic_pane_g

0xbe6a,	// (0x0009ff0a) bg_popup_call2_rect_pane_g1

0xa073,	// (0x0009e113) bg_popup_call2_rect_pane_g2

0xbe7e,	// (0x0009ff1e) bg_popup_call2_rect_pane_g3

0xbe86,	// (0x0009ff26) bg_popup_call2_rect_pane_g4

0xbe8e,	// (0x0009ff2e) bg_popup_call2_rect_pane_g5

0xbe96,	// (0x0009ff36) bg_popup_call2_rect_pane_g6

0xbe9e,	// (0x0009ff3e) bg_popup_call2_rect_pane_g7

0xbea6,	// (0x0009ff46) bg_popup_call2_rect_pane_g8

0xbeae,	// (0x0009ff4e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000a360e) bg_popup_call2_rect_pane_g

0xbeb6,	// (0x0009ff56) bg_popup_call2_bubble_pane_g1

0xbebe,	// (0x0009ff5e) bg_popup_call2_bubble_pane_g2

0xbec6,	// (0x0009ff66) bg_popup_call2_bubble_pane_g3

0xbece,	// (0x0009ff6e) bg_popup_call2_bubble_pane_g4

0xbed6,	// (0x0009ff76) bg_popup_call2_bubble_pane_g5

0xbede,	// (0x0009ff7e) bg_popup_call2_bubble_pane_g6

0xbee6,	// (0x0009ff86) bg_popup_call2_bubble_pane_g7

0xbeee,	// (0x0009ff8e) bg_popup_call2_bubble_pane_g8

0xbef6,	// (0x0009ff96) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000a3621) bg_popup_call2_bubble_pane_g

0x1787,	// (0x00095827) aid_cale_week_size_cell_pane

0x1d0a,	// (0x00095daa) aid_cams_cif_uncrop_pane_ParamLimits

0x1d0a,	// (0x00095daa) aid_cams_cif_uncrop_pane

0x1e65,	// (0x00095f05) aid_cams_size_cell_ParamLimits

0x1e65,	// (0x00095f05) aid_cams_size_cell

0x1e71,	// (0x00095f11) grid_cams_pane_ParamLimits

0x1e7f,	// (0x00095f1f) linegrid_cams_pane_ParamLimits

0x204d,	// (0x000960ed) call_video_pane_t1

0x206e,	// (0x0009610e) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a330e) call_video_pane_t

0x25bc,	// (0x0009665c) aid_cale_month_size_cell_pane_ParamLimits

0x25bc,	// (0x0009665c) aid_cale_month_size_cell_pane

0xf61e,	// (0x000a36be) smil_status_volume_pane_g

0x45f7,	// (0x00098697) volume_smil_pane_ParamLimits

0x0ee2,	// (0x00094f82) aid_popup2_width_pane

0x1681,	// (0x00095721) cell_qdial_pane_g4_ParamLimits

0x1681,	// (0x00095721) cell_qdial_pane_g4

0x3604,	// (0x000976a4) aid_blid_cardinal_pane_ParamLimits

0x3614,	// (0x000976b4) aid_blid_destination_pane_ParamLimits

0x3614,	// (0x000976b4) aid_blid_destination_pane

0x9eaf,	// (0x0009df4f) bg_popup_call_poc_act_pane_ParamLimits

0x9eaf,	// (0x0009df4f) bg_popup_call_poc_act_pane

0x9eaf,	// (0x0009df4f) bg_popup_call_poc_inact_pane_ParamLimits

0x9eaf,	// (0x0009df4f) bg_popup_call_poc_inact_pane

0xbefe,	// (0x0009ff9e) bg_popup_call_poc_act_pane_g1

0xbf06,	// (0x0009ffa6) bg_popup_call_poc_act_pane_g2

0xbf0e,	// (0x0009ffae) bg_popup_call_poc_act_pane_g3

0xbece,	// (0x0009ff6e) bg_popup_call_poc_act_pane_g4

0xbed6,	// (0x0009ff76) bg_popup_call_poc_act_pane_g5

0xbf16,	// (0x0009ffb6) bg_popup_call_poc_act_pane_g6

0xbee6,	// (0x0009ff86) bg_popup_call_poc_act_pane_g7

0xbf1e,	// (0x0009ffbe) bg_popup_call_poc_act_pane_g8

0x9c54,	// (0x0009dcf4) main_usb_pane

0x43e7,	// (0x00098487) popup_cale_lunar_info_window

0x238b,	// (0x0009642b) im_reading_pane_t1_ParamLimits

0xa258,	// (0x0009e2f8) list_im_pane_ParamLimits

0xa269,	// (0x0009e309) scroll_pane_cp07_ParamLimits

0x9c54,	// (0x0009dcf4) grid_highlight_pane_cp012

0x9eaf,	// (0x0009df4f) mup_scale_pane_ParamLimits

0xa7d4,	// (0x0009e874) main_usb_pane_g1_ParamLimits

0xa7d4,	// (0x0009e874) main_usb_pane_g1

0x4148,	// (0x000981e8) main_usb_pane_g2_ParamLimits

0x4148,	// (0x000981e8) main_usb_pane_g2

0x0001,

0xf5be,	// (0x000a365e) main_usb_pane_g_ParamLimits

0xf5be,	// (0x000a365e) main_usb_pane_g

0x4154,	// (0x000981f4) main_usb_pane_t1_ParamLimits

0x4154,	// (0x000981f4) main_usb_pane_t1

0x4166,	// (0x00098206) main_usb_pane_t2_ParamLimits

0x4166,	// (0x00098206) main_usb_pane_t2

0x4178,	// (0x00098218) main_usb_pane_t3_ParamLimits

0x4178,	// (0x00098218) main_usb_pane_t3

0x418a,	// (0x0009822a) main_usb_pane_t4_ParamLimits

0x418a,	// (0x0009822a) main_usb_pane_t4

0x419c,	// (0x0009823c) main_usb_pane_t5_ParamLimits

0x419c,	// (0x0009823c) main_usb_pane_t5

0x41ae,	// (0x0009824e) main_usb_pane_t6_ParamLimits

0x41ae,	// (0x0009824e) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x000a3663) main_usb_pane_t_ParamLimits

0x35aa,	// (0x0009764a) aid_text_placing

0x35b6,	// (0x00097656) main_location2_pane_t1_ParamLimits

0x35ca,	// (0x0009766a) main_location2_pane_t2_ParamLimits

0x35de,	// (0x0009767e) main_location2_pane_t3_ParamLimits

0x35f2,	// (0x00097692) main_location2_pane_t4_ParamLimits

0x35f2,	// (0x00097692) main_location2_pane_t4

0xf3cf,	// (0x000a346f) main_location2_pane_t_ParamLimits

0x9eeb,	// (0x0009df8b) find_pinb_pane_g2_ParamLimits

0x9eeb,	// (0x0009df8b) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a31bf) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a31bf) find_pinb_pane_g

0x9ef7,	// (0x0009df97) find_pinb_pane_t1_ParamLimits

0x9f09,	// (0x0009dfa9) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a31c4) find_pinb_pane_t_ParamLimits

0x9c54,	// (0x0009dcf4) main_call3_pane

0x2b7f,	// (0x00096c1f) cale_month_day_heading_pane_t1_ParamLimits

0x2c05,	// (0x00096ca5) cale_month_day_heading_pane_t2_ParamLimits

0x2c7e,	// (0x00096d1e) cale_month_day_heading_pane_t3_ParamLimits

0x2cf7,	// (0x00096d97) cale_month_day_heading_pane_t4_ParamLimits

0x2d70,	// (0x00096e10) cale_month_day_heading_pane_t5_ParamLimits

0x2de9,	// (0x00096e89) cale_month_day_heading_pane_t6_ParamLimits

0x2e62,	// (0x00096f02) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a3346) cale_month_day_heading_pane_t_ParamLimits

0xa4b3,	// (0x0009e553) smil_status_volume_pane

0x3d07,	// (0x00097da7) postcard_address_pane_ParamLimits

0x3d07,	// (0x00097da7) postcard_address_pane

0x3d13,	// (0x00097db3) postcard_message_pane_ParamLimits

0x3d13,	// (0x00097db3) postcard_message_pane

0x410d,	// (0x000981ad) call2_cli_visual_pane_t1_ParamLimits

0x410d,	// (0x000981ad) call2_cli_visual_pane_t1

0x474e,	// (0x000987ee) postcard_message_pane_t1_ParamLimits

0x474e,	// (0x000987ee) postcard_message_pane_t1

0x4737,	// (0x000987d7) postcard_address_pane_t1_ParamLimits

0x4737,	// (0x000987d7) postcard_address_pane_t1

0x4728,	// (0x000987c8) popup_call3_audio_in_window_ParamLimits

0x4728,	// (0x000987c8) popup_call3_audio_in_window

0x460c,	// (0x000986ac) bg_popup_call3_in_pane_ParamLimits

0x460c,	// (0x000986ac) bg_popup_call3_in_pane

0x466e,	// (0x0009870e) popup_call3_audio_in_window_g1_ParamLimits

0x466e,	// (0x0009870e) popup_call3_audio_in_window_g1

0x4686,	// (0x00098726) popup_call3_audio_in_window_g2_ParamLimits

0x4686,	// (0x00098726) popup_call3_audio_in_window_g2

0x469e,	// (0x0009873e) popup_call3_audio_in_window_g3_ParamLimits

0x469e,	// (0x0009873e) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x000a36c5) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x000a36c5) popup_call3_audio_in_window_g

0x46c6,	// (0x00098766) popup_call3_audio_in_window_t1_ParamLimits

0x46c6,	// (0x00098766) popup_call3_audio_in_window_t1

0x46ee,	// (0x0009878e) popup_call3_audio_in_window_t2_ParamLimits

0x46ee,	// (0x0009878e) popup_call3_audio_in_window_t2

0x4716,	// (0x000987b6) popup_call3_audio_in_window_t3_ParamLimits

0x4716,	// (0x000987b6) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x000a36ce) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x000a36ce) popup_call3_audio_in_window_t

0xa157,	// (0x0009e1f7) bg_popup_call3_rect_pane

0xbe6a,	// (0x0009ff0a) bg_popup_call3_rect_pane_g1

0xa073,	// (0x0009e113) bg_popup_call3_rect_pane_g2

0xbe7e,	// (0x0009ff1e) bg_popup_call3_rect_pane_g3

0xbe86,	// (0x0009ff26) bg_popup_call3_rect_pane_g4

0xbe8e,	// (0x0009ff2e) bg_popup_call3_rect_pane_g5

0xbe96,	// (0x0009ff36) bg_popup_call3_rect_pane_g6

0xbe9e,	// (0x0009ff3e) bg_popup_call3_rect_pane_g7

0x391a,	// (0x000979ba) mup_visualizer_osc_pane

0xac4b,	// (0x0009eceb) mup_visualizer_spec_pane

0x462c,	// (0x000986cc) call3_video_qcif_pane_ParamLimits

0x462c,	// (0x000986cc) call3_video_qcif_pane

0x463e,	// (0x000986de) call3_video_qcif_uncrop_pane_ParamLimits

0x463e,	// (0x000986de) call3_video_qcif_uncrop_pane

0x464c,	// (0x000986ec) call3_video_subqcif_pane_ParamLimits

0x464c,	// (0x000986ec) call3_video_subqcif_pane

0x465e,	// (0x000986fe) call3_video_subqcif_uncrop_pane_ParamLimits

0x465e,	// (0x000986fe) call3_video_subqcif_uncrop_pane

0x46b6,	// (0x00098756) popup_call3_audio_in_window_g4_ParamLimits

0x46b6,	// (0x00098756) popup_call3_audio_in_window_g4

0x45d7,	// (0x00098677) mup_spec_half_pane

0x45e0,	// (0x00098680) mup_spec_half_pane_cp

0xc11b,	// (0x000a01bb) mup_osc_middle_pane

0xc124,	// (0x000a01c4) mup_visualizer_osc_pane_g1

0x45b8,	// (0x00098658) mup_spec_bar_pane_ParamLimits

0x45b8,	// (0x00098658) mup_spec_bar_pane

0xc108,	// (0x000a01a8) mup_spec_bar_pane_g1

0xc112,	// (0x000a01b2) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000a36b9) mup_spec_bar_pane_g

0x1787,	// (0x00095827) aid_cale_week_size_cell_pane_ParamLimits

0x179c,	// (0x0009583c) bg_cale_heading_pane_ParamLimits

0xa0b0,	// (0x0009e150) bg_cale_pane_cp01_ParamLimits

0x17be,	// (0x0009585e) cale_week_corner_pane_ParamLimits

0x17d8,	// (0x00095878) cale_week_day_heading_pane_ParamLimits

0x17fa,	// (0x0009589a) cale_week_scroll_pane_g1_ParamLimits

0x1817,	// (0x000958b7) cale_week_scroll_pane_g2_ParamLimits

0x182a,	// (0x000958ca) cale_week_scroll_pane_g3_ParamLimits

0x183d,	// (0x000958dd) cale_week_scroll_pane_g4_ParamLimits

0x1850,	// (0x000958f0) cale_week_scroll_pane_g5_ParamLimits

0x1863,	// (0x00095903) cale_week_scroll_pane_g6_ParamLimits

0x1876,	// (0x00095916) cale_week_scroll_pane_g7_ParamLimits

0x188b,	// (0x0009592b) cale_week_scroll_pane_g8_ParamLimits

0x18a0,	// (0x00095940) cale_week_scroll_pane_g9_ParamLimits

0x18b3,	// (0x00095953) cale_week_scroll_pane_g10_ParamLimits

0x18c6,	// (0x00095966) cale_week_scroll_pane_g11_ParamLimits

0x18d9,	// (0x00095979) cale_week_scroll_pane_g12_ParamLimits

0x18f0,	// (0x00095990) cale_week_scroll_pane_g13_ParamLimits

0x190b,	// (0x000959ab) cale_week_scroll_pane_g14_ParamLimits

0x1926,	// (0x000959c6) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a3250) cale_week_scroll_pane_g_ParamLimits

0x1956,	// (0x000959f6) cale_week_time_pane_ParamLimits

0x196b,	// (0x00095a0b) grid_cale_week_pane_ParamLimits

0xa0cd,	// (0x0009e16d) listscroll_cale_week_pane_t1

0xa0df,	// (0x0009e17f) scroll_pane_cp08_ParamLimits

0x2630,	// (0x000966d0) cale_month_corner_pane_ParamLimits

0xa489,	// (0x0009e529) cale_month_pane_t1

0x2afe,	// (0x00096b9e) cale_month_week_pane_ParamLimits

0xa7d4,	// (0x0009e874) popup_call_status_window_g1_ParamLimits

0x33b3,	// (0x00097453) popup_call_status_window_g2_ParamLimits

0x33bf,	// (0x0009745f) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a33f6) popup_call_status_window_g_ParamLimits

0xa83b,	// (0x0009e8db) aid_call2_pane

0x3bbf,	// (0x00097c5f) msg_header_pane_g1

0x3d07,	// (0x00097da7) postcard_address2_pane_ParamLimits

0x3d07,	// (0x00097da7) postcard_address2_pane

0x3d13,	// (0x00097db3) postcard_message2_pane_ParamLimits

0x3d13,	// (0x00097db3) postcard_message2_pane

0x454f,	// (0x000985ef) message2_row_pane_ParamLimits

0x454f,	// (0x000985ef) message2_row_pane

0x456a,	// (0x0009860a) address2_row_pane_ParamLimits

0x456a,	// (0x0009860a) address2_row_pane

0xc0d6,	// (0x000a0176) postcard_message2_row_pane_g1

0xc0de,	// (0x000a017e) postcard_message2_row_pane_t1

0xc0d6,	// (0x000a0176) address2_row_pane_g1

0xc0de,	// (0x000a017e) address2_row_pane_t1

0x1bf0,	// (0x00095c90) aid_size_cell_vorec

0x9c54,	// (0x0009dcf4) main_rss_pane

0x457d,	// (0x0009861d) rss_list_single_pane_ParamLimits

0x457d,	// (0x0009861d) rss_list_single_pane

0xc0ec,	// (0x000a018c) rss_list_single_pane_t1

0xc0fa,	// (0x000a019a) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x000a36b4) rss_list_single_pane_t

0x9c54,	// (0x0009dcf4) main_camera2_pane

0x9c54,	// (0x0009dcf4) main_video2_pane

0x47b2,	// (0x00098852) cams_zoom_pane_cp2_ParamLimits

0x47b2,	// (0x00098852) cams_zoom_pane_cp2

0x47be,	// (0x0009885e) image2_vga_pane_ParamLimits

0x47be,	// (0x0009885e) image2_vga_pane

0x47cd,	// (0x0009886d) main_camera2_pane_g1_ParamLimits

0x47cd,	// (0x0009886d) main_camera2_pane_g1

0x47d9,	// (0x00098879) main_camera2_pane_g2_ParamLimits

0x47d9,	// (0x00098879) main_camera2_pane_g2

0x47e5,	// (0x00098885) main_camera2_pane_g3_ParamLimits

0x47e5,	// (0x00098885) main_camera2_pane_g3

0x47f1,	// (0x00098891) main_camera2_pane_g4_ParamLimits

0x47f1,	// (0x00098891) main_camera2_pane_g4

0x47fd,	// (0x0009889d) main_camera2_pane_g5_ParamLimits

0x47fd,	// (0x0009889d) main_camera2_pane_g5

0x4809,	// (0x000988a9) main_camera2_pane_g6_ParamLimits

0x4809,	// (0x000988a9) main_camera2_pane_g6

0x4815,	// (0x000988b5) main_camera2_pane_g7_ParamLimits

0x4815,	// (0x000988b5) main_camera2_pane_g7

0x4821,	// (0x000988c1) main_camera2_pane_g8_ParamLimits

0x4821,	// (0x000988c1) main_camera2_pane_g8

0x0008,

0xf635,	// (0x000a36d5) main_camera2_pane_g_ParamLimits

0xf635,	// (0x000a36d5) main_camera2_pane_g

0x4839,	// (0x000988d9) main_camera2_pane_t1_ParamLimits

0x4839,	// (0x000988d9) main_camera2_pane_t1

0x484b,	// (0x000988eb) main_camera2_pane_t2_ParamLimits

0x484b,	// (0x000988eb) main_camera2_pane_t2

0x485d,	// (0x000988fd) main_camera2_pane_t3_ParamLimits

0x485d,	// (0x000988fd) main_camera2_pane_t3

0x486f,	// (0x0009890f) main_camera2_pane_t4_ParamLimits

0x486f,	// (0x0009890f) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000a36e8) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000a36e8) main_camera2_pane_t

0x48d1,	// (0x00098971) cams_zoom_pane_cp4_ParamLimits

0x48d1,	// (0x00098971) cams_zoom_pane_cp4

0x48e1,	// (0x00098981) image2_cif_pane_ParamLimits

0x48e1,	// (0x00098981) image2_cif_pane

0x48f6,	// (0x00098996) image2_subqcif_pane_ParamLimits

0x48f6,	// (0x00098996) image2_subqcif_pane

0x4905,	// (0x000989a5) main_video2_pane_g1_ParamLimits

0x4905,	// (0x000989a5) main_video2_pane_g1

0x4917,	// (0x000989b7) main_video2_pane_g2_ParamLimits

0x4917,	// (0x000989b7) main_video2_pane_g2

0x4927,	// (0x000989c7) main_video2_pane_g3_ParamLimits

0x4927,	// (0x000989c7) main_video2_pane_g3

0x4937,	// (0x000989d7) main_video2_pane_g4_ParamLimits

0x4937,	// (0x000989d7) main_video2_pane_g4

0x4947,	// (0x000989e7) main_video2_pane_g5_ParamLimits

0x4947,	// (0x000989e7) main_video2_pane_g5

0x4957,	// (0x000989f7) main_video2_pane_g6_ParamLimits

0x4957,	// (0x000989f7) main_video2_pane_g6

0x0005,

0xf657,	// (0x000a36f7) main_video2_pane_g_ParamLimits

0xf657,	// (0x000a36f7) main_video2_pane_g

0x4969,	// (0x00098a09) main_video2_pane_t1_ParamLimits

0x4969,	// (0x00098a09) main_video2_pane_t1

0x4983,	// (0x00098a23) main_video2_pane_t2_ParamLimits

0x4983,	// (0x00098a23) main_video2_pane_t2

0x49a9,	// (0x00098a49) main_video2_pane_t3_ParamLimits

0x49a9,	// (0x00098a49) main_video2_pane_t3

0x0002,

0xf664,	// (0x000a3704) main_video2_pane_t_ParamLimits

0xf664,	// (0x000a3704) main_video2_pane_t

0x4265,	// (0x00098305) call_muted_g2

0x0001,

0xf606,	// (0x000a36a6) call_muted_g

0x9c54,	// (0x0009dcf4) main_mup2_pane

0xc15b,	// (0x000a01fb) main_mup2_pane_g1_ParamLimits

0xc15b,	// (0x000a01fb) main_mup2_pane_g1

0x49cf,	// (0x00098a6f) main_mup2_pane_g2_ParamLimits

0x49cf,	// (0x00098a6f) main_mup2_pane_g2

0x4c51,	// (0x00098cf1) main_mup_pane_g13_cp1

0x4c59,	// (0x00098cf9) mup_volume_pane_cp1

0x49ef,	// (0x00098a8f) main_mup2_pane_g4_ParamLimits

0x49ef,	// (0x00098a8f) main_mup2_pane_g4

0x4a04,	// (0x00098aa4) main_mup2_pane_g5_ParamLimits

0x4a04,	// (0x00098aa4) main_mup2_pane_g5

0x4a19,	// (0x00098ab9) main_mup2_pane_g6_ParamLimits

0x4a19,	// (0x00098ab9) main_mup2_pane_g6

0x4a2e,	// (0x00098ace) main_mup2_pane_g7_ParamLimits

0x4a2e,	// (0x00098ace) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x000a370b) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x000a370b) main_mup2_pane_g

0x4a4a,	// (0x00098aea) main_mup2_pane_t1_ParamLimits

0x4a4a,	// (0x00098aea) main_mup2_pane_t1

0x4a61,	// (0x00098b01) main_mup2_pane_t2_ParamLimits

0x4a61,	// (0x00098b01) main_mup2_pane_t2

0x4a78,	// (0x00098b18) main_mup2_pane_t3_ParamLimits

0x4a78,	// (0x00098b18) main_mup2_pane_t3

0x4a8f,	// (0x00098b2f) main_mup2_pane_t4_ParamLimits

0x4a8f,	// (0x00098b2f) main_mup2_pane_t4

0x4aa9,	// (0x00098b49) main_mup2_pane_t5_ParamLimits

0x4aa9,	// (0x00098b49) main_mup2_pane_t5

0x4ac3,	// (0x00098b63) main_mup2_pane_t6_ParamLimits

0x4ac3,	// (0x00098b63) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x000a371a) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x000a371a) main_mup2_pane_t

0x4afb,	// (0x00098b9b) mup2_visualizer_pane_ParamLimits

0x4afb,	// (0x00098b9b) mup2_visualizer_pane

0x4b31,	// (0x00098bd1) mup_progress_pane_cp_ParamLimits

0x4b31,	// (0x00098bd1) mup_progress_pane_cp

0x4c3c,	// (0x00098cdc) mup_volume_pane_cp_ParamLimits

0x4c3c,	// (0x00098cdc) mup_volume_pane_cp

0x4b48,	// (0x00098be8) mup2_visualizer_pane_g1_ParamLimits

0x4b48,	// (0x00098be8) mup2_visualizer_pane_g1

0xc167,	// (0x000a0207) mup2_visualizer_pane_g2_ParamLimits

0xc167,	// (0x000a0207) mup2_visualizer_pane_g2

0x4b5d,	// (0x00098bfd) mup2_visualizer_pane_g3_ParamLimits

0x4b5d,	// (0x00098bfd) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x000a3727) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x000a3727) mup2_visualizer_pane_g

0xae72,	// (0x0009ef12) aid_size_cell_fmradio

0x437b,	// (0x0009841b) aid_height_parent_landcape

0xa2e7,	// (0x0009e387) wml_content_pane_cp

0xa2ef,	// (0x0009e38f) wml_tabs_pane

0xa2f8,	// (0x0009e398) popup_wml_miniature_window

0xa300,	// (0x0009e3a0) scroll_pane_cp021

0xa314,	// (0x0009e3b4) wml_content_pane_comp8

0x9c54,	// (0x0009dcf4) bg_popup_sub_pane_cp05

0xc185,	// (0x000a0225) popup_wml_miniature_window_g1

0xc18d,	// (0x000a022d) wml_miniature_view_pane

0x4b6b,	// (0x00098c0b) aid_size_wml_view

0x4b73,	// (0x00098c13) wml_miniature_view_pane_g1

0x4b7c,	// (0x00098c1c) wml_miniature_view_pane_g2

0x4b85,	// (0x00098c25) wml_miniature_view_pane_g3

0x4b8d,	// (0x00098c2d) wml_miniature_view_pane_g4

0x4b95,	// (0x00098c35) wml_miniature_view_pane_g5

0x4b9d,	// (0x00098c3d) wml_miniature_view_pane_g6

0x4ba5,	// (0x00098c45) wml_miniature_view_pane_g7

0x4bad,	// (0x00098c4d) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x000a372e) wml_miniature_view_pane_g

0xc15b,	// (0x000a01fb) background_graphic_ParamLimits

0xc15b,	// (0x000a01fb) background_graphic

0xc195,	// (0x000a0235) wml_tabs_2_pane

0xc19e,	// (0x000a023e) wml_tabs_3_pane_ParamLimits

0xc19e,	// (0x000a023e) wml_tabs_3_pane

0xc1b0,	// (0x000a0250) wml_tabs_4_pane_ParamLimits

0xc1b0,	// (0x000a0250) wml_tabs_4_pane

0xc1c6,	// (0x000a0266) wml_tabs_5_pane_ParamLimits

0xc1c6,	// (0x000a0266) wml_tabs_5_pane

0xc1e0,	// (0x000a0280) wml_tabs_pane_g2_ParamLimits

0xc1e0,	// (0x000a0280) wml_tabs_pane_g2

0xc1f4,	// (0x000a0294) wml_tabs_pane_g3_ParamLimits

0xc1f4,	// (0x000a0294) wml_tabs_pane_g3

0x4bb5,	// (0x00098c55) wml_tabs_2_active_pane_ParamLimits

0x4bb5,	// (0x00098c55) wml_tabs_2_active_pane

0x4bc5,	// (0x00098c65) wml_tabs_2_passive_pane_ParamLimits

0x4bc5,	// (0x00098c65) wml_tabs_2_passive_pane

0x4bd5,	// (0x00098c75) wml_tabs_3_active_pane_cp_ParamLimits

0x4bd5,	// (0x00098c75) wml_tabs_3_active_pane_cp

0x4be6,	// (0x00098c86) wml_tabs_3_passive_pane_ParamLimits

0x4be6,	// (0x00098c86) wml_tabs_3_passive_pane

0x4bf7,	// (0x00098c97) wml_tabs_3_passive_pane_cp_ParamLimits

0x4bf7,	// (0x00098c97) wml_tabs_3_passive_pane_cp

0x4c08,	// (0x00098ca8) tabs_4_active_pane

0x4c10,	// (0x00098cb0) tabs_4_passive_pane

0x4c18,	// (0x00098cb8) tabs_4_passive_pane_cp

0x4c20,	// (0x00098cc0) tabs_4_passive_pane_cp2

0x4140,	// (0x000981e0) aid_height_text

0x38e3,	// (0x00097983) mup_volume_cont_pane_ParamLimits

0x38e3,	// (0x00097983) mup_volume_cont_pane

0x12cc,	// (0x0009536c) aid_size_cell_pinb

0x12d6,	// (0x00095376) aid_size_list_pinb

0x4b1a,	// (0x00098bba) mup2_volume_cont_pane_ParamLimits

0x4b1a,	// (0x00098bba) mup2_volume_cont_pane

0x4c28,	// (0x00098cc8) mup2_volume_cont_pane_g1_ParamLimits

0x4c28,	// (0x00098cc8) mup2_volume_cont_pane_g1

0x0eee,	// (0x00094f8e) aid_size_cell_touch_ParamLimits

0x0eee,	// (0x00094f8e) aid_size_cell_touch

0x11af,	// (0x0009524f) touch_pane_ParamLimits

0x11af,	// (0x0009524f) touch_pane

0x11a5,	// (0x00095245) main_rss2_pane

0xc211,	// (0x000a02b1) listscroll_rss2_pane

0xc21a,	// (0x000a02ba) rss2_navigation_pane

0xc222,	// (0x000a02c2) list_rss2_pane

0xa960,	// (0x0009ea00) scroll_pane_cp22

0xc22a,	// (0x000a02ca) rss2_navigation_pane_g1

0xc233,	// (0x000a02d3) rss2_navigation_pane_g2

0xc23b,	// (0x000a02db) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x000a373f) rss2_navigation_pane_g

0xc243,	// (0x000a02e3) rss2_navigation_pane_t1

0x4c61,	// (0x00098d01) rss2_list_single_pane_ParamLimits

0x4c61,	// (0x00098d01) rss2_list_single_pane

0xc251,	// (0x000a02f1) rss2_list_single_pane_t2

0xc25f,	// (0x000a02ff) rss2_list_single_pane_t3_ParamLimits

0xc25f,	// (0x000a02ff) rss2_list_single_pane_t3

0xc27c,	// (0x000a031c) rss2_list_single_pane_t4

0x312e,	// (0x000971ce) smil_status_pane_g1

0x4392,	// (0x00098432) main_image2_pane_ParamLimits

0x4392,	// (0x00098432) main_image2_pane

0x482d,	// (0x000988cd) main_camera2_pane_g9_ParamLimits

0x482d,	// (0x000988cd) main_camera2_pane_g9

0x4881,	// (0x00098921) main_camera2_pane_t5_ParamLimits

0x4881,	// (0x00098921) main_camera2_pane_t5

0x4893,	// (0x00098933) main_camera2_pane_t6_ParamLimits

0x4893,	// (0x00098933) main_camera2_pane_t6

0x4c95,	// (0x00098d35) main_image2_pane_g1_ParamLimits

0x4c95,	// (0x00098d35) main_image2_pane_g1

0x3eda,	// (0x00097f7a) smil2_video_pane_ParamLimits

0x3eda,	// (0x00097f7a) smil2_video_pane

0x0f22,	// (0x00094fc2) aid_zoom_text_primary_cp

0x1140,	// (0x000951e0) popup_preview_fixed_window

0xa250,	// (0x0009e2f0) im_reading_pane_g1

0x4777,	// (0x00098817) cams2_bc_adjust_pane_cp_ParamLimits

0x4777,	// (0x00098817) cams2_bc_adjust_pane_cp

0x48c3,	// (0x00098963) cams2_bc_adjust_pane_ParamLimits

0x48c3,	// (0x00098963) cams2_bc_adjust_pane

0xd416,	// (0x000a14b6) cams2_bc_adjust_pane_g1

0x4ca1,	// (0x00098d41) cams2_slider_pane

0x4caa,	// (0x00098d4a) cams2_slider_pane_g1

0x4cb3,	// (0x00098d53) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x000a3746) cams2_slider_pane_g

0x13d6,	// (0x00095476) calc_display_pane_ParamLimits

0x13f4,	// (0x00095494) calc_paper_pane_ParamLimits

0x1410,	// (0x000954b0) grid_calc_pane_ParamLimits

0x341d,	// (0x000974bd) popup_clock_digital_window_t1_ParamLimits

0xae0f,	// (0x0009eeaf) main_image_pane_t1

0x13bc,	// (0x0009545c) aid_size_cell_calc_ParamLimits

0x13bc,	// (0x0009545c) aid_size_cell_calc

0x43c3,	// (0x00098463) popup_blid_sat_info2_window_ParamLimits

0x43c3,	// (0x00098463) popup_blid_sat_info2_window

0xc292,	// (0x000a0332) aid_size_cell_blid

0xc29a,	// (0x000a033a) bg_popup_window_pane_cp07

0xc2bd,	// (0x000a035d) grid_popup_blid_pane

0xc2c7,	// (0x000a0367) heading_pane_cp05_ParamLimits

0xc2c7,	// (0x000a0367) heading_pane_cp05

0xc391,	// (0x000a0431) cell_popup_blid_pane_ParamLimits

0xc391,	// (0x000a0431) cell_popup_blid_pane

0xc3b5,	// (0x000a0455) cell_popup_blid_pane_g1

0xc3bd,	// (0x000a045d) cell_popup_blid_pane_t1

0x4ae0,	// (0x00098b80) mup2_indicator_pane_ParamLimits

0x4ae0,	// (0x00098b80) mup2_indicator_pane

0xa157,	// (0x0009e1f7) mup2_visualizer_osc_pane

0xc173,	// (0x000a0213) mup2_visualizer_spec_pane_ParamLimits

0xc173,	// (0x000a0213) mup2_visualizer_spec_pane

0x4ccd,	// (0x00098d6d) mup2_spec_half_pane

0x4cd6,	// (0x00098d76) mup2_spec_half_pane_cp

0x4ce0,	// (0x00098d80) mup2_spec_bar_pane_ParamLimits

0x4ce0,	// (0x00098d80) mup2_spec_bar_pane

0xc108,	// (0x000a01a8) mup2_spec_bar_pane_g1

0xc112,	// (0x000a01b2) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000a36b9) mup2_spec_bar_pane_g

0x4cff,	// (0x00098d9f) mup2_osc_middle_pane

0xc124,	// (0x000a01c4) mup2_visualizer_osc_pane_g1

0xea6e,	// (0x000a2b0e) popup_number_entry_window_t1_ParamLimits

0xed72,	// (0x000a2e12) popup_number_entry_window_t2_ParamLimits

0xed84,	// (0x000a2e24) popup_number_entry_window_t3_ParamLimits

0x1206,	// (0x000952a6) popup_number_entry_window_t5_ParamLimits

0x1206,	// (0x000952a6) popup_number_entry_window_t5

0xf0ca,	// (0x000a316a) popup_number_entry_window_t_ParamLimits

0xed96,	// (0x000a2e36) text_title_cp2_ParamLimits

0x3bdb,	// (0x00097c7b) aid_hotspot_pointer_text2_pane

0x3c69,	// (0x00097d09) main_viewer_pane_g9_ParamLimits

0x3c69,	// (0x00097d09) main_viewer_pane_g9

0xa489,	// (0x0009e529) cale_month_pane_t1_ParamLimits

0xa4c6,	// (0x0009e566) bg_cale_pane_ParamLimits

0xa4de,	// (0x0009e57e) list_cale_pane_ParamLimits

0xa4ef,	// (0x0009e58f) listscroll_cale_day_pane_t1

0xa501,	// (0x0009e5a1) scroll_pane_cp09_ParamLimits

0x3922,	// (0x000979c2) main_mup_eq_pane_t1_ParamLimits

0x3922,	// (0x000979c2) main_mup_eq_pane_t1

0x393c,	// (0x000979dc) main_mup_eq_pane_t2_ParamLimits

0x393c,	// (0x000979dc) main_mup_eq_pane_t2

0x3954,	// (0x000979f4) main_mup_eq_pane_t3_ParamLimits

0x3954,	// (0x000979f4) main_mup_eq_pane_t3

0x396c,	// (0x00097a0c) main_mup_eq_pane_t4_ParamLimits

0x396c,	// (0x00097a0c) main_mup_eq_pane_t4

0x3984,	// (0x00097a24) main_mup_eq_pane_t5_ParamLimits

0x3984,	// (0x00097a24) main_mup_eq_pane_t5

0x399c,	// (0x00097a3c) main_mup_eq_pane_t6_ParamLimits

0x399c,	// (0x00097a3c) main_mup_eq_pane_t6

0x39b0,	// (0x00097a50) main_mup_eq_pane_t7_ParamLimits

0x39b0,	// (0x00097a50) main_mup_eq_pane_t7

0x39c4,	// (0x00097a64) main_mup_eq_pane_t8_ParamLimits

0x39c4,	// (0x00097a64) main_mup_eq_pane_t8

0x39da,	// (0x00097a7a) main_mup_eq_pane_t9_ParamLimits

0x39da,	// (0x00097a7a) main_mup_eq_pane_t9

0x39f2,	// (0x00097a92) main_mup_eq_pane_t10_ParamLimits

0x39f2,	// (0x00097a92) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a34f5) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a34f5) main_mup_eq_pane_t

0x3aaf,	// (0x00097b4f) mup_equalizer_pane_cp5_ParamLimits

0x3ac5,	// (0x00097b65) mup_equalizer_pane_cp6_ParamLimits

0x3add,	// (0x00097b7d) mup_equalizer_pane_cp7_ParamLimits

0x11a5,	// (0x00095245) main_gallery_pane

0xc12d,	// (0x000a01cd) smil2_volume_pane

0xc135,	// (0x000a01d5) smil_status_volume_pane_g1_ParamLimits

0xc148,	// (0x000a01e8) smil_status_volume_pane_g2_ParamLimits

0x45ea,	// (0x0009868a) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x000a36be) smil_status_volume_pane_g_ParamLimits

0xc29a,	// (0x000a033a) bg_popup_window_pane_cp07_ParamLimits

0xc2a8,	// (0x000a0348) blid_firmament_pane

0x4d08,	// (0x00098da8) aid_size_cell_gallery_ParamLimits

0x4d08,	// (0x00098da8) aid_size_cell_gallery

0x4d16,	// (0x00098db6) grid_gallery_pane_ParamLimits

0x4d16,	// (0x00098db6) grid_gallery_pane

0x4d26,	// (0x00098dc6) cell_gallery_pane_ParamLimits

0x4d26,	// (0x00098dc6) cell_gallery_pane

0xc3cb,	// (0x000a046b) bg_cell_gallery_focus_pane_ParamLimits

0xc3cb,	// (0x000a046b) bg_cell_gallery_focus_pane

0xc3dd,	// (0x000a047d) cell_gallery_pane_g1_ParamLimits

0xc3dd,	// (0x000a047d) cell_gallery_pane_g1

0x4d74,	// (0x00098e14) cell_gallery_pane_g2_ParamLimits

0x4d74,	// (0x00098e14) cell_gallery_pane_g2

0x4d81,	// (0x00098e21) cell_gallery_pane_g3_ParamLimits

0x4d81,	// (0x00098e21) cell_gallery_pane_g3

0xc3e9,	// (0x000a0489) cell_gallery_pane_g4_ParamLimits

0xc3e9,	// (0x000a0489) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x000a376c) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x000a376c) cell_gallery_pane_g

0xc3f5,	// (0x000a0495) bg_cell_gallery_focus_pane_g1

0xc3fd,	// (0x000a049d) bg_cell_gallery_focus_pane_g2

0xc405,	// (0x000a04a5) bg_cell_gallery_focus_pane_g3

0xc40d,	// (0x000a04ad) bg_cell_gallery_focus_pane_g4

0xc415,	// (0x000a04b5) bg_cell_gallery_focus_pane_g5

0xc41d,	// (0x000a04bd) bg_cell_gallery_focus_pane_g6

0xc425,	// (0x000a04c5) bg_cell_gallery_focus_pane_g7

0xc42d,	// (0x000a04cd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x000a3775) bg_cell_gallery_focus_pane_g

0xc435,	// (0x000a04d5) aid_firma_cardinal

0xc449,	// (0x000a04e9) blid_firmament_pane_t1

0xc460,	// (0x000a0500) blid_firmament_pane_t2

0xc477,	// (0x000a0517) blid_firmament_pane_t3

0xc48e,	// (0x000a052e) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x000a3786) blid_firmament_pane_t

0xc4a5,	// (0x000a0545) blid_sat_info_pane

0xc4b5,	// (0x000a0555) blid_sat_info_pane_g1

0xc4b5,	// (0x000a0555) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x000a378f) blid_sat_info_pane_g

0xc4bf,	// (0x000a055f) blid_sat_info_pane_t1

0xc4cd,	// (0x000a056d) smil2_volume_content_pane

0xc4d6,	// (0x000a0576) smil2_volume_pane_g1

0xc4de,	// (0x000a057e) smil2_volume_content_pane_g1

0xc4e7,	// (0x000a0587) smil2_volume_content_pane_g2

0xc4f0,	// (0x000a0590) smil2_volume_content_pane_g3

0xc4f9,	// (0x000a0599) smil2_volume_content_pane_g4

0xc502,	// (0x000a05a2) smil2_volume_content_pane_g5

0xc50b,	// (0x000a05ab) smil2_volume_content_pane_g6

0xc514,	// (0x000a05b4) smil2_volume_content_pane_g7

0xc51d,	// (0x000a05bd) smil2_volume_content_pane_g8

0xc526,	// (0x000a05c6) smil2_volume_content_pane_g9

0xc52f,	// (0x000a05cf) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x000a3794) smil2_volume_content_pane_g

0x19ec,	// (0x00095a8c) cale_week_day_heading_pane_t1_ParamLimits

0x1a07,	// (0x00095aa7) cale_week_day_heading_pane_t2_ParamLimits

0x1a22,	// (0x00095ac2) cale_week_day_heading_pane_t3_ParamLimits

0x1a3d,	// (0x00095add) cale_week_day_heading_pane_t4_ParamLimits

0x1a58,	// (0x00095af8) cale_week_day_heading_pane_t5_ParamLimits

0x1a73,	// (0x00095b13) cale_week_day_heading_pane_t6_ParamLimits

0x1a8e,	// (0x00095b2e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a3271) cale_week_day_heading_pane_t_ParamLimits

0xa0fc,	// (0x0009e19c) bg_cale_side_pane_ParamLimits

0x1aa9,	// (0x00095b49) cale_week_time_pane_t1_ParamLimits

0x1ac3,	// (0x00095b63) cale_week_time_pane_t2_ParamLimits

0x1add,	// (0x00095b7d) cale_week_time_pane_t3_ParamLimits

0x1af7,	// (0x00095b97) cale_week_time_pane_t4_ParamLimits

0x1b11,	// (0x00095bb1) cale_week_time_pane_t5_ParamLimits

0x1b2b,	// (0x00095bcb) cale_week_time_pane_t6_ParamLimits

0x1b4b,	// (0x00095beb) cale_week_time_pane_t7_ParamLimits

0x1b6d,	// (0x00095c0d) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a3280) cale_week_time_pane_t_ParamLimits

0x1b91,	// (0x00095c31) cell_cale_week_pane_g2_ParamLimits

0xa0fc,	// (0x0009e19c) bg_cale_side_pane_cp01_ParamLimits

0x2ef3,	// (0x00096f93) cale_month_week_pane_t1_ParamLimits

0x2f0c,	// (0x00096fac) cale_month_week_pane_t2_ParamLimits

0x2f25,	// (0x00096fc5) cale_month_week_pane_t3_ParamLimits

0x2f3e,	// (0x00096fde) cale_month_week_pane_t4_ParamLimits

0x2f59,	// (0x00096ff9) cale_month_week_pane_t5_ParamLimits

0x2f7a,	// (0x0009701a) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a3355) cale_month_week_pane_t_ParamLimits

0x30eb,	// (0x0009718b) cell_cale_month_pane_g1_ParamLimits

0x11a5,	// (0x00095245) main_cale_event_viewer_pane

0xea44,	// (0x000a2ae4) listscroll_cale_event_viewer_pane

0xc538,	// (0x000a05d8) list_cale_ev_pane

0xc540,	// (0x000a05e0) scroll_pane_cp023

0xc54c,	// (0x000a05ec) field_cale_ev_pane_ParamLimits

0xc54c,	// (0x000a05ec) field_cale_ev_pane

0xc56a,	// (0x000a060a) field_cale_ev_content_pane_ParamLimits

0xc56a,	// (0x000a060a) field_cale_ev_content_pane

0xc576,	// (0x000a0616) field_cale_ev_pane_g1_ParamLimits

0xc576,	// (0x000a0616) field_cale_ev_pane_g1

0xc582,	// (0x000a0622) field_cale_ev_pane_g2_ParamLimits

0xc582,	// (0x000a0622) field_cale_ev_pane_g2

0xc59a,	// (0x000a063a) field_cale_ev_pane_g3_ParamLimits

0xc59a,	// (0x000a063a) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x000a37a9) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x000a37a9) field_cale_ev_pane_g

0xc5b2,	// (0x000a0652) field_cale_ev_pane_t1_ParamLimits

0xc5b2,	// (0x000a0652) field_cale_ev_pane_t1

0xb80b,	// (0x0009f8ab) field_cale_ev_content_pane_t1_ParamLimits

0xb80b,	// (0x0009f8ab) field_cale_ev_content_pane_t1

0xacf5,	// (0x0009ed95) bg_button_pane_cp01

0x1777,	// (0x00095817) listscroll_cale_week_pane_ParamLimits

0xa0a7,	// (0x0009e147) popup_toolbar_window_cp01

0xa0cd,	// (0x0009e16d) listscroll_cale_week_pane_t1_ParamLimits

0x1777,	// (0x00095817) listscroll_cale_day_pane_ParamLimits

0xa0a7,	// (0x0009e147) popup_toolbar_window_cp02

0xa4ef,	// (0x0009e58f) listscroll_cale_day_pane_t1_ParamLimits

0x1777,	// (0x00095817) main_cale_month_pane_ParamLimits

0x44c6,	// (0x00098566) popup_toolbar_window_cp03_ParamLimits

0x44c6,	// (0x00098566) popup_toolbar_window_cp03

0x3df0,	// (0x00097e90) main_image_pane_g2_ParamLimits

0x3df0,	// (0x00097e90) main_image_pane_g2

0x3dfc,	// (0x00097e9c) main_image_pane_g3_ParamLimits

0x3dfc,	// (0x00097e9c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000a3587) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000a3587) main_image_pane_g

0xae0f,	// (0x0009eeaf) main_image_pane_t1_ParamLimits

0x3e08,	// (0x00097ea8) main_image_pane_t2_ParamLimits

0x3e08,	// (0x00097ea8) main_image_pane_t2

0x3e1a,	// (0x00097eba) main_image_pane_t3_ParamLimits

0x3e1a,	// (0x00097eba) main_image_pane_t3

0x3e2c,	// (0x00097ecc) main_image_pane_t4_ParamLimits

0x3e2c,	// (0x00097ecc) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000a358e) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000a358e) main_image_pane_t

0x3e3e,	// (0x00097ede) popup_image_details_window_cp01

0x3e48,	// (0x00097ee8) popup_toobar_trans_pane_cp01_ParamLimits

0x3e48,	// (0x00097ee8) popup_toobar_trans_pane_cp01

0x4416,	// (0x000984b6) popup_image_details_window_ParamLimits

0x4416,	// (0x000984b6) popup_image_details_window

0x4424,	// (0x000984c4) popup_image_focus_window

0x4769,	// (0x00098809) camera2_autofocus_pane_ParamLimits

0x4769,	// (0x00098809) camera2_autofocus_pane

0xea44,	// (0x000a2ae4) bg_popup_sub_pane_cp06

0xc5c9,	// (0x000a0669) popup_image_focus_window_g1

0xc5d1,	// (0x000a0671) popup_image_focus_window_g2

0xc5d9,	// (0x000a0679) popup_image_focus_window_g3

0xc5e1,	// (0x000a0681) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x000a37b0) popup_image_focus_window_g

0xc5e9,	// (0x000a0689) popup_image_focus_window_t1

0xc5f7,	// (0x000a0697) popup_image_focus_window_t2

0xc607,	// (0x000a06a7) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x000a37b9) popup_image_focus_window_t

0xc615,	// (0x000a06b5) camera2_autofocus_pane_g1

0xea81,	// (0x000a2b21) bg_tb_trans_pane_cp01

0xc623,	// (0x000a06c3) popup_image_details_window_g1

0xc636,	// (0x000a06d6) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x000a37cb) popup_image_details_window_g

0xc65f,	// (0x000a06ff) popup_image_details_window_t1

0xc671,	// (0x000a0711) popup_image_details_window_t2

0xc68a,	// (0x000a072a) popup_image_details_window_t3

0xc69e,	// (0x000a073e) popup_image_details_window_t4

0xc6b9,	// (0x000a0759) popup_image_details_window_t5

0x0004,

0xf732,	// (0x000a37d2) popup_image_details_window_t

0x9f6c,	// (0x0009e00c) bg_calc_paper_pane_ParamLimits

0x11a5,	// (0x00095245) grid_highlight_pane_cp013

0x150d,	// (0x000955ad) list_calc_pane_ParamLimits

0x151f,	// (0x000955bf) scroll_pane_cp024

0x9f80,	// (0x0009e020) bg_calc_display_pane_ParamLimits

0x1527,	// (0x000955c7) calc_display_pane_t1_ParamLimits

0x153c,	// (0x000955dc) calc_display_pane_t2_ParamLimits

0x1551,	// (0x000955f1) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a31f1) calc_display_pane_t_ParamLimits

0x162e,	// (0x000956ce) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a320e) cell_calc_pane_g

0x1637,	// (0x000956d7) cell_calc_pane_t1

0x9fdf,	// (0x0009e07f) grid_highlight_pane_cp02_ParamLimits

0x9ff5,	// (0x0009e095) toolbar_button_pane_cp01_ParamLimits

0x9ff5,	// (0x0009e095) toolbar_button_pane_cp01

0xae54,	// (0x0009eef4) temp_image_control_pane_ParamLimits

0xae54,	// (0x0009eef4) temp_image_control_pane

0x4392,	// (0x00098432) main_mp3_pane

0xc6d3,	// (0x000a0773) temp_image_control_pane_g1_ParamLimits

0xc6d3,	// (0x000a0773) temp_image_control_pane_g1

0xc6e1,	// (0x000a0781) temp_image_control_pane_g2_ParamLimits

0xc6e1,	// (0x000a0781) temp_image_control_pane_g2

0xc6f3,	// (0x000a0793) temp_image_control_pane_g3_ParamLimits

0xc6f3,	// (0x000a0793) temp_image_control_pane_g3

0x4dbe,	// (0x00098e5e) temp_image_control_pane_g4_ParamLimits

0x4dbe,	// (0x00098e5e) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x000a37dd) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x000a37dd) temp_image_control_pane_g

0xc6d3,	// (0x000a0773) main_mp3_pane_g1

0x4dcf,	// (0x00098e6f) main_mp3_pane_g2

0x0007,

0xf746,	// (0x000a37e6) main_mp3_pane_g

0xc736,	// (0x000a07d6) main_mp3_pane_t1

0xa15f,	// (0x0009e1ff) main_camera_pane_g8_ParamLimits

0xa15f,	// (0x0009e1ff) main_camera_pane_g8

0x1e1b,	// (0x00095ebb) main_video_pane_g7_ParamLimits

0x1e1b,	// (0x00095ebb) main_video_pane_g7

0x48b1,	// (0x00098951) main_camera2_pane_t7_ParamLimits

0x48b1,	// (0x00098951) main_camera2_pane_t7

0xa2a7,	// (0x0009e347) scroll_pane_cp025_ParamLimits

0xa2a7,	// (0x0009e347) scroll_pane_cp025

0xa2bb,	// (0x0009e35b) scroll_pane_cp026_ParamLimits

0xa2bb,	// (0x0009e35b) scroll_pane_cp026

0xa2ca,	// (0x0009e36a) wml_content_pane_ParamLimits

0x11a5,	// (0x00095245) main_touch_calib_pane

0x4e73,	// (0x00098f13) main_touch_calib_pane_g1

0x4e7f,	// (0x00098f1f) main_touch_calib_pane_g2

0x4e8b,	// (0x00098f2b) main_touch_calib_pane_g3

0x4e97,	// (0x00098f37) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x000a3804) main_touch_calib_pane_g

0x4ea3,	// (0x00098f43) main_touch_calib_pane_t1

0x4ebc,	// (0x00098f5c) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x000a380d) main_touch_calib_pane_t

0xaa2f,	// (0x0009eacf) mup_progress_pane_cp02

0xaa64,	// (0x0009eb04) navi_pane_g1

0xab1f,	// (0x0009ebbf) navi_pane_mp_t3

0x4392,	// (0x00098432) main_mp3_pane_ParamLimits

0x4503,	// (0x000985a3) navi_pane_ParamLimits

0xc6d3,	// (0x000a0773) main_mp3_pane_g1_ParamLimits

0x4dcf,	// (0x00098e6f) main_mp3_pane_g2_ParamLimits

0x4ddb,	// (0x00098e7b) main_mp3_pane_g3_ParamLimits

0x4ddb,	// (0x00098e7b) main_mp3_pane_g3

0x4de7,	// (0x00098e87) main_mp3_pane_g4_ParamLimits

0x4de7,	// (0x00098e87) main_mp3_pane_g4

0xc703,	// (0x000a07a3) main_mp3_pane_g5_ParamLimits

0xc703,	// (0x000a07a3) main_mp3_pane_g5

0xc711,	// (0x000a07b1) main_mp3_pane_g6_ParamLimits

0xc711,	// (0x000a07b1) main_mp3_pane_g6

0xc71e,	// (0x000a07be) main_mp3_pane_g7_ParamLimits

0xc71e,	// (0x000a07be) main_mp3_pane_g7

0xc72a,	// (0x000a07ca) main_mp3_pane_g8_ParamLimits

0xc72a,	// (0x000a07ca) main_mp3_pane_g8

0xf746,	// (0x000a37e6) main_mp3_pane_g_ParamLimits

0x4df3,	// (0x00098e93) main_mp3_pane_t2

0x4e03,	// (0x00098ea3) main_mp3_pane_t3

0xc744,	// (0x000a07e4) main_mp3_pane_t4

0xc752,	// (0x000a07f2) main_mp3_pane_t5

0x0005,

0xf757,	// (0x000a37f7) main_mp3_pane_t

0xc760,	// (0x000a0800) mup_progress_pane_cp01

0x0f22,	// (0x00094fc2) aid_zoom_text_secondary2

0xc538,	// (0x000a05d8) list_cale_ev2_pane

0xc540,	// (0x000a05e0) scroll_pane_cp023_ParamLimits

0x4f17,	// (0x00098fb7) field_cale_ev2_pane_ParamLimits

0x4f17,	// (0x00098fb7) field_cale_ev2_pane

0xc768,	// (0x000a0808) field_cale_ev2_pane_g1_ParamLimits

0xc768,	// (0x000a0808) field_cale_ev2_pane_g1

0xc774,	// (0x000a0814) field_cale_ev2_pane_g2_ParamLimits

0xc774,	// (0x000a0814) field_cale_ev2_pane_g2

0xc78c,	// (0x000a082c) field_cale_ev2_pane_g3_ParamLimits

0xc78c,	// (0x000a082c) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x000a3818) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x000a3818) field_cale_ev2_pane_g

0xc7b0,	// (0x000a0850) field_cale_ev2_pane_t1_ParamLimits

0xc7b0,	// (0x000a0850) field_cale_ev2_pane_t1

0xc7c7,	// (0x000a0867) field_cale_ev2_pane_t2_ParamLimits

0xc7c7,	// (0x000a0867) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x000a3821) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x000a3821) field_cale_ev2_pane_t

0x3cd1,	// (0x00097d71) main_postcard_pane_g5_ParamLimits

0x3cd1,	// (0x00097d71) main_postcard_pane_g5

0x3cdf,	// (0x00097d7f) main_postcard_pane_g6_ParamLimits

0x3cdf,	// (0x00097d7f) main_postcard_pane_g6

0x1c65,	// (0x00095d05) camera2_autofocus_pane_cp_ParamLimits

0x1c65,	// (0x00095d05) camera2_autofocus_pane_cp

0x4392,	// (0x00098432) main_mup3_pane

0x4f61,	// (0x00099001) main_mup3_pane_g1_ParamLimits

0x4f61,	// (0x00099001) main_mup3_pane_g1

0x4f82,	// (0x00099022) main_mup3_pane_g2_ParamLimits

0x4f82,	// (0x00099022) main_mup3_pane_g2

0x4ffc,	// (0x0009909c) main_mup3_pane_g3_ParamLimits

0x4ffc,	// (0x0009909c) main_mup3_pane_g3

0x503f,	// (0x000990df) main_mup3_pane_g4_ParamLimits

0x503f,	// (0x000990df) main_mup3_pane_g4

0x5082,	// (0x00099122) main_mup3_pane_g5_ParamLimits

0x5082,	// (0x00099122) main_mup3_pane_g5

0x50c5,	// (0x00099165) main_mup3_pane_g6_ParamLimits

0x50c5,	// (0x00099165) main_mup3_pane_g6

0xc7dc,	// (0x000a087c) main_mup3_pane_g7_ParamLimits

0xc7dc,	// (0x000a087c) main_mup3_pane_g7

0x0007,

0xf791,	// (0x000a3831) main_mup3_pane_g_ParamLimits

0xf791,	// (0x000a3831) main_mup3_pane_g

0x513b,	// (0x000991db) main_mup3_pane_t1_ParamLimits

0x513b,	// (0x000991db) main_mup3_pane_t1

0x51aa,	// (0x0009924a) main_mup3_pane_t2_ParamLimits

0x51aa,	// (0x0009924a) main_mup3_pane_t2

0x5273,	// (0x00099313) main_mup3_pane_t4_ParamLimits

0x5273,	// (0x00099313) main_mup3_pane_t4

0x52c1,	// (0x00099361) main_mup3_pane_t5_ParamLimits

0x52c1,	// (0x00099361) main_mup3_pane_t5

0x5371,	// (0x00099411) main_mup3_pane_t6_ParamLimits

0x5371,	// (0x00099411) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x000a3842) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x000a3842) main_mup3_pane_t

0x541d,	// (0x000994bd) mup3_progress_pane_ParamLimits

0x541d,	// (0x000994bd) mup3_progress_pane

0x5491,	// (0x00099531) popup_mup3_control_window_ParamLimits

0x5491,	// (0x00099531) popup_mup3_control_window

0xc7ea,	// (0x000a088a) popup_mup3_text_window

0x54aa,	// (0x0009954a) mup3_progress_pane_t1

0x54c9,	// (0x00099569) mup3_progress_pane_t2

0xc7f2,	// (0x000a0892) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x000a384f) mup3_progress_pane_t

0xc80f,	// (0x000a08af) mup_progress_pane_cp03

0xea44,	// (0x000a2ae4) bg_tb_trans_pane_cp04

0x54e8,	// (0x00099588) mup3_volume_pane

0x54f0,	// (0x00099590) popup_mup3_control_window_g1

0x54f9,	// (0x00099599) mup3_volume_pane_g1

0x5502,	// (0x000995a2) mup3_volume_pane_g2

0x550b,	// (0x000995ab) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x000a3856) mup3_volume_pane_g

0xea44,	// (0x000a2ae4) bg_tb_trans_pane_cp03

0xc81f,	// (0x000a08bf) popup_mup3_text_window_g1

0xc827,	// (0x000a08c7) popup_mup3_text_window_t1

0x9fc8,	// (0x0009e068) list_calc_item_pane_g1_ParamLimits

0xc208,	// (0x000a02a8) mup_volume_pane_cp_g1

0x4ed5,	// (0x00098f75) main_touch_calib_pane_t3

0x4eeb,	// (0x00098f8b) main_touch_calib_pane_t4

0x4f01,	// (0x00098fa1) main_touch_calib_pane_t5

0x0eda,	// (0x00094f7a) aid_cell_size_toolbar2

0x0ee2,	// (0x00094f82) aid_popup3_width_pane

0x0dea,	// (0x00094e8a) aid_zoom_text_msg_primary

0x1c3a,	// (0x00095cda) vorec_t7

0x9f8c,	// (0x0009e02c) bg_calc_paper_pane_g1_ParamLimits

0x9f98,	// (0x0009e038) bg_calc_paper_pane_g2_ParamLimits

0x9fa4,	// (0x0009e044) bg_calc_paper_pane_g3_ParamLimits

0x9fb0,	// (0x0009e050) bg_calc_paper_pane_g4_ParamLimits

0x9fbc,	// (0x0009e05c) bg_calc_paper_pane_g5_ParamLimits

0x1590,	// (0x00095630) bg_calc_paper_pane_g6_ParamLimits

0x15a1,	// (0x00095641) bg_calc_paper_pane_g7_ParamLimits

0x15b2,	// (0x00095652) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a31f8) bg_calc_paper_pane_g_ParamLimits

0x15c3,	// (0x00095663) calc_bg_paper_pane_g9_ParamLimits

0x1d4c,	// (0x00095dec) image_qvga_pane_ParamLimits

0x1d4c,	// (0x00095dec) image_qvga_pane

0x9eaf,	// (0x0009df4f) bg_popup_sub_pane_cp04_ParamLimits

0xad8b,	// (0x0009ee2b) popup_mup_playback_window_g1_ParamLimits

0xad97,	// (0x0009ee37) popup_mup_playback_window_t1_ParamLimits

0xadac,	// (0x0009ee4c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000a3582) popup_mup_playback_window_t_ParamLimits

0x49e0,	// (0x00098a80) main_mup2_pane_g3_ParamLimits

0x49e0,	// (0x00098a80) main_mup2_pane_g3

0x20fb,	// (0x0009619b) popup_toolbar_window_cp04

0xb1a1,	// (0x0009f241) popup_call2_audio_second_window_g3_ParamLimits

0xb1a1,	// (0x0009f241) popup_call2_audio_second_window_g3

0xb5ab,	// (0x0009f64b) popup_call2_audio_first_window_g4_ParamLimits

0xb5ab,	// (0x0009f64b) popup_call2_audio_first_window_g4

0xbcf4,	// (0x0009fd94) popup_call2_audio_in_window_g4_ParamLimits

0xbcf4,	// (0x0009fd94) popup_call2_audio_in_window_g4

0x3de3,	// (0x00097e83) aid_area_sk_bg_cut_ParamLimits

0x3de3,	// (0x00097e83) aid_area_sk_bg_cut

0xadc1,	// (0x0009ee61) aid_area_sk_bg_cut_2_ParamLimits

0xadc1,	// (0x0009ee61) aid_area_sk_bg_cut_2

0x4d64,	// (0x00098e04) aid_placing_details_win

0x4d6c,	// (0x00098e0c) aid_placing_details_win_2

0xc615,	// (0x000a06b5) camera2_autofocus_pane_g1_ParamLimits

0x1131,	// (0x000951d1) popup_fixed_preview_cale_window_ParamLimits

0x1131,	// (0x000951d1) popup_fixed_preview_cale_window

0xab9d,	// (0x0009ec3d) navi_slider_pane_g3

0xaba6,	// (0x0009ec46) navi_slider_pane_g4

0xabaf,	// (0x0009ec4f) navi_slider_pane_g5

0xab9d,	// (0x0009ec3d) navi_slider_pane_g6

0x36c6,	// (0x00097766) navi_slider_pane_g7

0xacc2,	// (0x0009ed62) mup_scale_pane_g3

0xaccb,	// (0x0009ed6b) mup_scale_pane_g4

0xacd4,	// (0x0009ed74) mup_scale_pane_g5

0x3af5,	// (0x00097b95) mup_scale_pane_g6

0x3afe,	// (0x00097b9e) mup_scale_pane_g7

0xab9d,	// (0x0009ec3d) cams2_slider_pane_g3

0xc28a,	// (0x000a032a) cams2_slider_pane_g4

0x4cbc,	// (0x00098d5c) cams2_slider_pane_g5

0xab9d,	// (0x0009ec3d) cams2_slider_pane_g6

0x4cc4,	// (0x00098d64) cams2_slider_pane_g7

0xc4b5,	// (0x000a0555) camera2_autofocus_pane_cp_g1

0xc0a1,	// (0x000a0141) bg_popup_preview_window_pane_cp02_ParamLimits

0xc0a1,	// (0x000a0141) bg_popup_preview_window_pane_cp02

0xc835,	// (0x000a08d5) list_fp_cale_pane_ParamLimits

0xc835,	// (0x000a08d5) list_fp_cale_pane

0xc841,	// (0x000a08e1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc841,	// (0x000a08e1) popup_fixed_preview_cale_window_t1

0x5514,	// (0x000995b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5514,	// (0x000995b4) popup_fixed_preview_cale_window_t2

0x5529,	// (0x000995c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x5529,	// (0x000995c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x000a385d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x000a385d) popup_fixed_preview_cale_window_t

0x553e,	// (0x000995de) list_single_fp_cale_pane_ParamLimits

0x553e,	// (0x000995de) list_single_fp_cale_pane

0xc85f,	// (0x000a08ff) list_single_fp_cale_pane_g1_ParamLimits

0xc85f,	// (0x000a08ff) list_single_fp_cale_pane_g1

0xc86b,	// (0x000a090b) list_single_fp_cale_pane_g2_ParamLimits

0xc86b,	// (0x000a090b) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x000a3864) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x000a3864) list_single_fp_cale_pane_g

0xc884,	// (0x000a0924) list_single_fp_cale_pane_t1_ParamLimits

0xc884,	// (0x000a0924) list_single_fp_cale_pane_t1

0xc896,	// (0x000a0936) list_single_fp_cale_pane_t2_ParamLimits

0xc896,	// (0x000a0936) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x000a386b) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x000a386b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11a5,	// (0x00095245) main_dialer_pane

0x5551,	// (0x000995f1) aid_cell_size_keypad

0x555b,	// (0x000995fb) dialer_ne_pane

0x5565,	// (0x00099605) grid_dialer_command_1_pane

0x556d,	// (0x0009960d) grid_dialer_command_2_pane

0x5575,	// (0x00099615) grid_dialer_keypad_pane

0x5589,	// (0x00099629) bg_popup_call_pane_cp06_ParamLimits

0x5589,	// (0x00099629) bg_popup_call_pane_cp06

0x5595,	// (0x00099635) dialer_ne_clear_pane_ParamLimits

0x5595,	// (0x00099635) dialer_ne_clear_pane

0xc8c9,	// (0x000a0969) dialer_ne_pane_g1

0xc8d1,	// (0x000a0971) dialer_ne_pane_t1_ParamLimits

0xc8d1,	// (0x000a0971) dialer_ne_pane_t1

0x55a1,	// (0x00099641) dialer_ne_pane_t2_ParamLimits

0x55a1,	// (0x00099641) dialer_ne_pane_t2

0x55be,	// (0x0009965e) dialer_ne_pane_t3_ParamLimits

0x55be,	// (0x0009965e) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x000a3870) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x000a3870) dialer_ne_pane_t

0x55e2,	// (0x00099682) dialer_ne_pane_t3_copy1_ParamLimits

0x55e2,	// (0x00099682) dialer_ne_pane_t3_copy1

0x5606,	// (0x000996a6) cell_dialer_keypad_pane_ParamLimits

0x5606,	// (0x000996a6) cell_dialer_keypad_pane

0x561d,	// (0x000996bd) cell_dialer_command_1_pane_ParamLimits

0x561d,	// (0x000996bd) cell_dialer_command_1_pane

0x5633,	// (0x000996d3) cell_dialer_command_2_pane_ParamLimits

0x5633,	// (0x000996d3) cell_dialer_command_2_pane

0xc8e3,	// (0x000a0983) bg_button_pane_cp02_ParamLimits

0xc8e3,	// (0x000a0983) bg_button_pane_cp02

0x5642,	// (0x000996e2) cell_dialer_keypad_pane_g1_ParamLimits

0x5642,	// (0x000996e2) cell_dialer_keypad_pane_g1

0xc8e3,	// (0x000a0983) bg_button_pane_cp03_ParamLimits

0xc8e3,	// (0x000a0983) bg_button_pane_cp03

0x5657,	// (0x000996f7) cell_dialer_command_1_pane_g1_ParamLimits

0x5657,	// (0x000996f7) cell_dialer_command_1_pane_g1

0xc8ef,	// (0x000a098f) bg_button_pane_cp04

0x566b,	// (0x0009970b) cell_dialer_command_2_pane_g1

0xa157,	// (0x0009e1f7) bg_button_pane_cp06

0xc8f7,	// (0x000a0997) dialer_ne_clear_pane_g1

0xaa70,	// (0x0009eb10) navi_pane_g2

0xaa9e,	// (0x0009eb3e) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a3485) navi_pane_g

0xab2d,	// (0x0009ebcd) navi_pane_mv_g2

0xab54,	// (0x0009ebf4) navi_pane_mv_g5

0x3691,	// (0x00097731) navi_pane_mv_t1

0x9f80,	// (0x0009e020) main_clock2_pane

0x56ab,	// (0x0009974b) main_clock2_list_pane_ParamLimits

0x56ab,	// (0x0009974b) main_clock2_list_pane

0x56d5,	// (0x00099775) main_clock2_pane_t1_ParamLimits

0x56d5,	// (0x00099775) main_clock2_pane_t1

0x56f9,	// (0x00099799) main_clock2_pane_t2_ParamLimits

0x56f9,	// (0x00099799) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x000a387c) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x000a387c) main_clock2_pane_t

0x5754,	// (0x000997f4) popup_clock_analogue_window_cp03_ParamLimits

0x5754,	// (0x000997f4) popup_clock_analogue_window_cp03

0x5772,	// (0x00099812) popup_clock_digital_window_cp02_ParamLimits

0x5772,	// (0x00099812) popup_clock_digital_window_cp02

0x57df,	// (0x0009987f) main_clock2_list_single_pane_ParamLimits

0x57df,	// (0x0009987f) main_clock2_list_single_pane

0xa157,	// (0x0009e1f7) list_highlight_pane_cp05

0xc931,	// (0x000a09d1) main_clock2_list_single_pane_t1

0x20fb,	// (0x0009619b) popup_toolbar_window_cp04_ParamLimits

0x4d8e,	// (0x00098e2e) camera2_autofocus_pane_g2_ParamLimits

0x4d8e,	// (0x00098e2e) camera2_autofocus_pane_g2

0x4d9a,	// (0x00098e3a) camera2_autofocus_pane_g3_ParamLimits

0x4d9a,	// (0x00098e3a) camera2_autofocus_pane_g3

0x4da6,	// (0x00098e46) camera2_autofocus_pane_g4_ParamLimits

0x4da6,	// (0x00098e46) camera2_autofocus_pane_g4

0x4db2,	// (0x00098e52) camera2_autofocus_pane_g5_ParamLimits

0x4db2,	// (0x00098e52) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x000a37c0) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x000a37c0) camera2_autofocus_pane_g

0x4f41,	// (0x00098fe1) camera2_autofocus_pane_cp_g2

0x4f49,	// (0x00098fe9) camera2_autofocus_pane_cp_g3

0x4f51,	// (0x00098ff1) camera2_autofocus_pane_cp_g4

0x4f59,	// (0x00098ff9) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x000a3826) camera2_autofocus_pane_cp_g

0x5581,	// (0x00099621) popup_dialer_spcha_window

0xea44,	// (0x000a2ae4) bg_popup_sub_pane_cp07

0xc93f,	// (0x000a09df) list_spcha_pane

0xc947,	// (0x000a09e7) list_single_spcha_pane_ParamLimits

0xc947,	// (0x000a09e7) list_single_spcha_pane

0xea44,	// (0x000a2ae4) list_highlight_pane_cp06

0xc958,	// (0x000a09f8) list_single_spcha_pane_t1

0xba9e,	// (0x0009fb3e) popup_call2_audio_out_window_g4_ParamLimits

0xba9e,	// (0x0009fb3e) popup_call2_audio_out_window_g4

0x11a5,	// (0x00095245) main_imed2_pane

0x442c,	// (0x000984cc) popup_imed_adjust2_window

0x443f,	// (0x000984df) popup_imed_trans_window_ParamLimits

0x443f,	// (0x000984df) popup_imed_trans_window

0xc2f3,	// (0x000a0393) popup_blid_sat_info2_window_t1

0xc301,	// (0x000a03a1) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x000a3755) popup_blid_sat_info2_window_t

0x5888,	// (0x00099928) aid_size_cell_colour_35

0x58a2,	// (0x00099942) aid_size_cell_colour_112

0x58b9,	// (0x00099959) aid_size_cell_effect

0xea81,	// (0x000a2b21) bg_tb_trans_pane_cp02

0xb829,	// (0x0009f8c9) heading_imed_pane

0x58d3,	// (0x00099973) listscroll_imed_pane

0xc966,	// (0x000a0a06) heading_imed_pane_g1

0xc96e,	// (0x000a0a0e) heading_imed_pane_t1

0xc97c,	// (0x000a0a1c) grid_imed_colour_35_pane_ParamLimits

0xc97c,	// (0x000a0a1c) grid_imed_colour_35_pane

0x58df,	// (0x0009997f) grid_imed_effect_pane

0xc994,	// (0x000a0a34) list_imed_aspect_pane

0x58ef,	// (0x0009998f) scroll_pane_cp027_ParamLimits

0x58ef,	// (0x0009998f) scroll_pane_cp027

0x58fb,	// (0x0009999b) cell_imed_effect_pane_ParamLimits

0x58fb,	// (0x0009999b) cell_imed_effect_pane

0xc99c,	// (0x000a0a3c) cell_imed_colour_pane_ParamLimits

0xc99c,	// (0x000a0a3c) cell_imed_colour_pane

0xc9de,	// (0x000a0a7e) cell_imed_colour_pane_g1_ParamLimits

0xc9de,	// (0x000a0a7e) cell_imed_colour_pane_g1

0xc9ef,	// (0x000a0a8f) hgihlgiht_grid_pane_cp016_ParamLimits

0xc9ef,	// (0x000a0a8f) hgihlgiht_grid_pane_cp016

0x5913,	// (0x000999b3) cell_imed_effect_pane_g1

0x591b,	// (0x000999bb) grid_highlight_pane_cp017

0xca00,	// (0x000a0aa0) list_imed_single_pane_ParamLimits

0xca00,	// (0x000a0aa0) list_imed_single_pane

0xea44,	// (0x000a2ae4) list_highlight_pane_cp07

0xca15,	// (0x000a0ab5) list_imed_aspect_pane_comp1_t1

0xc0ad,	// (0x000a014d) bg_tb_trans_pane_cp05

0xca37,	// (0x000a0ad7) popup_imed_adjust2_window_g1

0xca5e,	// (0x000a0afe) popup_imed_adjust2_window_t1

0xca76,	// (0x000a0b16) slider_imed_adjust_pane

0xca8a,	// (0x000a0b2a) slider_imed_adjust_pane_g1

0xca9a,	// (0x000a0b3a) slider_imed_adjust_pane_g2

0xcaaa,	// (0x000a0b4a) slider_imed_adjust_pane_g3

0xcabb,	// (0x000a0b5b) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x000a3899) slider_imed_adjust_pane_g

0x5924,	// (0x000999c4) aid_size_cell_clipart2

0x5930,	// (0x000999d0) grid_imed_clipart_pane

0xcacc,	// (0x000a0b6c) scroll_pane_cp031

0x593a,	// (0x000999da) cell_imed_clipart_pane_ParamLimits

0x593a,	// (0x000999da) cell_imed_clipart_pane

0x595d,	// (0x000999fd) cell_imed_clipart_pane_g1

0xea44,	// (0x000a2ae4) grid_highlight_pane_cp014

0x56b7,	// (0x00099757) main_clock2_pane_g1_ParamLimits

0x56b7,	// (0x00099757) main_clock2_pane_g1

0x578a,	// (0x0009982a) aid_call2_pane_cp10

0x579c,	// (0x0009983c) aid_call_pane_cp10

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g1

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g2

0x57ae,	// (0x0009984e) popup_clock_analogue_window_cp10_g3

0x57ae,	// (0x0009984e) popup_clock_analogue_window_cp10_g4

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x000a3887) popup_clock_analogue_window_cp10_g

0x57c0,	// (0x00099860) popup_clock_analogue_window_cp10_t1

0x57f1,	// (0x00099891) clock_digital_number_pane_cp10_ParamLimits

0x57f1,	// (0x00099891) clock_digital_number_pane_cp10

0x5809,	// (0x000998a9) clock_digital_number_pane_cp11_ParamLimits

0x5809,	// (0x000998a9) clock_digital_number_pane_cp11

0x5821,	// (0x000998c1) clock_digital_number_pane_cp12_ParamLimits

0x5821,	// (0x000998c1) clock_digital_number_pane_cp12

0x5839,	// (0x000998d9) clock_digital_number_pane_cp13_ParamLimits

0x5839,	// (0x000998d9) clock_digital_number_pane_cp13

0x5851,	// (0x000998f1) clock_digital_separator_pane_cp10_ParamLimits

0x5851,	// (0x000998f1) clock_digital_separator_pane_cp10

0x5869,	// (0x00099909) popup_clock_digital_window_cp02_t1_ParamLimits

0x5869,	// (0x00099909) popup_clock_digital_window_cp02_t1

0x9ea7,	// (0x0009df47) clock_digital_number_pane_cp10_g1

0x9ea7,	// (0x0009df47) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x000a38a2) clock_digital_number_pane_cp10_g

0x9ea7,	// (0x0009df47) clock_digital_separator_pane_cp10_g1

0x9ea7,	// (0x0009df47) clock_digital_separator_pane_g2_cp10

0xab5c,	// (0x0009ebfc) navi_pane_vded_g4

0xab65,	// (0x0009ec05) navi_pane_vded_g5

0xab6e,	// (0x0009ec0e) navi_pane_vded_t1

0x11a5,	// (0x00095245) main_vded_pane

0x5966,	// (0x00099a06) main_vded_pane_g1

0x5972,	// (0x00099a12) main_vded_pane_g2

0x597c,	// (0x00099a1c) main_vded_pane_g3

0x0002,

0xf807,	// (0x000a38a7) main_vded_pane_g

0x5986,	// (0x00099a26) main_vded_pane_t1

0x5994,	// (0x00099a34) main_vded_pane_t2

0x0001,

0xf80e,	// (0x000a38ae) main_vded_pane_t

0x59a2,	// (0x00099a42) vded_slider_pane

0x59ac,	// (0x00099a4c) vded_video_pane

0xcad4,	// (0x000a0b74) vded_video_pane_g1

0x59b6,	// (0x00099a56) vded_video_pane_g2

0xc4b5,	// (0x000a0555) vded_video_pane_g3

0x0002,

0xf813,	// (0x000a38b3) vded_video_pane_g

0xcade,	// (0x000a0b7e) vded_slider_pane_g1

0xc208,	// (0x000a02a8) vded_slider_pane_g2

0xcae7,	// (0x000a0b87) vded_slider_pane_g3

0xcaf0,	// (0x000a0b90) vded_slider_pane_g4

0xcaf9,	// (0x000a0b99) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x000a38ba) vded_slider_pane_g

0x5483,	// (0x00099523) mup3_rocker_pane_ParamLimits

0x5483,	// (0x00099523) mup3_rocker_pane

0x59bf,	// (0x00099a5f) mup3_control_keys_pane_g1

0x59c7,	// (0x00099a67) mup3_control_keys_pane_g2

0x59cf,	// (0x00099a6f) mup3_control_keys_pane_g3

0x59d7,	// (0x00099a77) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x000a38c5) mup3_control_keys_pane_g

0x1159,	// (0x000951f9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1159,	// (0x000951f9) popup_toolbar2_fixed_window_cp01

0x549d,	// (0x0009953d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x549d,	// (0x0009953d) popup_toolbar2_fixed_window_cp02

0xb313,	// (0x0009f3b3) popup_call2_audio_second_window_t4_ParamLimits

0xb313,	// (0x0009f3b3) popup_call2_audio_second_window_t4

0xb90b,	// (0x0009f9ab) popup_call2_audio_first_window_t6_ParamLimits

0xb90b,	// (0x0009f9ab) popup_call2_audio_first_window_t6

0xbba1,	// (0x0009fc41) popup_call2_audio_out_window_t6_ParamLimits

0xbba1,	// (0x0009fc41) popup_call2_audio_out_window_t6

0x11a5,	// (0x00095245) main_vitu_pane

0x59e7,	// (0x00099a87) aid_size_cell_itu_ParamLimits

0x59e7,	// (0x00099a87) aid_size_cell_itu

0xea8f,	// (0x000a2b2f) bg_popup_window_pane_cp08_ParamLimits

0xea8f,	// (0x000a2b2f) bg_popup_window_pane_cp08

0x59f5,	// (0x00099a95) field_vitu_entry_pane_ParamLimits

0x59f5,	// (0x00099a95) field_vitu_entry_pane

0x5a04,	// (0x00099aa4) grid_vitu_function_pane_ParamLimits

0x5a04,	// (0x00099aa4) grid_vitu_function_pane

0x5a14,	// (0x00099ab4) grid_vitu_itu_pane_ParamLimits

0x5a14,	// (0x00099ab4) grid_vitu_itu_pane

0x5a24,	// (0x00099ac4) cell_vitu_itu_pane_ParamLimits

0x5a24,	// (0x00099ac4) cell_vitu_itu_pane

0x5a39,	// (0x00099ad9) cell_vitu_function_pane_ParamLimits

0x5a39,	// (0x00099ad9) cell_vitu_function_pane

0xea81,	// (0x000a2b21) bg_popup_sub_pane_cp08_ParamLimits

0xea81,	// (0x000a2b21) bg_popup_sub_pane_cp08

0x5a4b,	// (0x00099aeb) field_vitu_entry_pane_t1_ParamLimits

0x5a4b,	// (0x00099aeb) field_vitu_entry_pane_t1

0xcb1a,	// (0x000a0bba) field_vitu_entry_pane_t2_ParamLimits

0xcb1a,	// (0x000a0bba) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x000a38d3) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x000a38d3) field_vitu_entry_pane_t

0xcb37,	// (0x000a0bd7) bg_button_pane_cp05_ParamLimits

0xcb37,	// (0x000a0bd7) bg_button_pane_cp05

0x5a68,	// (0x00099b08) cell_vitu_itu_pane_g1

0x5a80,	// (0x00099b20) cell_vitu_itu_pane_t1_ParamLimits

0x5a80,	// (0x00099b20) cell_vitu_itu_pane_t1

0x5a92,	// (0x00099b32) cell_vitu_itu_pane_t2_ParamLimits

0x5a92,	// (0x00099b32) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x000a38d8) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x000a38d8) cell_vitu_itu_pane_t

0xcb45,	// (0x000a0be5) bg_button_pane_cp07

0x5ac7,	// (0x00099b67) cell_vitu_function_pane_g1

0x1434,	// (0x000954d4) main_calc_pane_g1

0x0f16,	// (0x00094fb6) aid_visual_content_pane

0x11a5,	// (0x00095245) main_vradio_pane

0x5ad0,	// (0x00099b70) main_vradio_pane_g1_ParamLimits

0x5ad0,	// (0x00099b70) main_vradio_pane_g1

0xcb4f,	// (0x000a0bef) main_vradio_pane_g2_ParamLimits

0xcb4f,	// (0x000a0bef) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000a38df) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000a38df) main_vradio_pane_g

0x5ae0,	// (0x00099b80) main_vradio_pane_t1_ParamLimits

0x5ae0,	// (0x00099b80) main_vradio_pane_t1

0x5af2,	// (0x00099b92) main_vradio_pane_t2_ParamLimits

0x5af2,	// (0x00099b92) main_vradio_pane_t2

0xcb5c,	// (0x000a0bfc) main_vradio_pane_t3_ParamLimits

0xcb5c,	// (0x000a0bfc) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000a38e4) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000a38e4) main_vradio_pane_t

0x5b04,	// (0x00099ba4) vradio_rocker_control_pane_ParamLimits

0x5b04,	// (0x00099ba4) vradio_rocker_control_pane

0x5b10,	// (0x00099bb0) vradio_station_info_pane_ParamLimits

0x5b10,	// (0x00099bb0) vradio_station_info_pane

0xcb70,	// (0x000a0c10) vradio_frequency_info_pane_ParamLimits

0xcb70,	// (0x000a0c10) vradio_frequency_info_pane

0xc4b5,	// (0x000a0555) vradio_station_info_pane_g1

0xcb7f,	// (0x000a0c1f) vradio_station_info_pane_t1_ParamLimits

0xcb7f,	// (0x000a0c1f) vradio_station_info_pane_t1

0xcba1,	// (0x000a0c41) vradio_station_info_pane_t2_ParamLimits

0xcba1,	// (0x000a0c41) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000a38eb) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000a38eb) vradio_station_info_pane_t

0xcbb3,	// (0x000a0c53) vradio_tuning_pane

0xcbbb,	// (0x000a0c5b) vradio_rocker_control_pane_g1

0xcbc3,	// (0x000a0c63) vradio_rocker_control_pane_g2

0xcbcb,	// (0x000a0c6b) vradio_rocker_control_pane_g3

0xcbd3,	// (0x000a0c73) vradio_rocker_control_pane_g4

0xcbdb,	// (0x000a0c7b) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000a38f0) vradio_rocker_control_pane_g

0x5b1f,	// (0x00099bbf) vradio_frequency_info_pane_g1

0xcbe3,	// (0x000a0c83) vradio_frequency_info_pane_t1_ParamLimits

0xcbe3,	// (0x000a0c83) vradio_frequency_info_pane_t1

0x5b29,	// (0x00099bc9) vradio_tuning_pane_g1

0x5b32,	// (0x00099bd2) vradio_tuning_pane_t1

0x0f5f,	// (0x00094fff) area_side_right_pane_ParamLimits

0x0f5f,	// (0x00094fff) area_side_right_pane

0xc068,	// (0x000a0108) status_small_pane_g1

0xc070,	// (0x000a0110) status_small_pane_g2

0xc079,	// (0x000a0119) status_small_pane_g3

0xc082,	// (0x000a0122) status_small_pane_g4

0x0003,

0xf60b,	// (0x000a36ab) status_small_pane_g

0xc08b,	// (0x000a012b) status_small_pane_t1

0x11a5,	// (0x00095245) main_video3_pane

0xcbf7,	// (0x000a0c97) cams_zoom_vslider_pane

0xcbff,	// (0x000a0c9f) image3_wide_pane_ParamLimits

0xcbff,	// (0x000a0c9f) image3_wide_pane

0xcc19,	// (0x000a0cb9) image3_wide_small_pane

0xcc25,	// (0x000a0cc5) main_video3_pane_g1_ParamLimits

0xcc25,	// (0x000a0cc5) main_video3_pane_g1

0xcc41,	// (0x000a0ce1) main_video3_pane_g2_ParamLimits

0xcc41,	// (0x000a0ce1) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000a38fb) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000a38fb) main_video3_pane_g

0xcc5d,	// (0x000a0cfd) main_video3_pane_t1_ParamLimits

0xcc5d,	// (0x000a0cfd) main_video3_pane_t1

0xcc88,	// (0x000a0d28) main_video3_pane_t2_ParamLimits

0xcc88,	// (0x000a0d28) main_video3_pane_t2

0xccb3,	// (0x000a0d53) main_video3_pane_t3_ParamLimits

0xccb3,	// (0x000a0d53) main_video3_pane_t3

0x0002,

0xf860,	// (0x000a3900) main_video3_pane_t_ParamLimits

0xf860,	// (0x000a3900) main_video3_pane_t

0xcce0,	// (0x000a0d80) cams_zoom_vslider_pane_g1

0xcce9,	// (0x000a0d89) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000a3907) cams_zoom_vslider_pane_g

0xccf1,	// (0x000a0d91) small_slider_vertical_pane

0xc4b5,	// (0x000a0555) small_slider_vertical_pane_g1

0xc4b5,	// (0x000a0555) small_slider_vertical_pane_g2

0xccf9,	// (0x000a0d99) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000a390c) small_slider_vertical_pane_g

0x11a5,	// (0x00095245) main_hwr_training_pane

0xcd02,	// (0x000a0da2) hwr_training_instruct_pane_ParamLimits

0xcd02,	// (0x000a0da2) hwr_training_instruct_pane

0x5b41,	// (0x00099be1) hwr_training_navi_pane_ParamLimits

0x5b41,	// (0x00099be1) hwr_training_navi_pane

0x5b5b,	// (0x00099bfb) hwr_training_write_pane_ParamLimits

0x5b5b,	// (0x00099bfb) hwr_training_write_pane

0xea44,	// (0x000a2ae4) bg_frame_shadow_pane

0xcd39,	// (0x000a0dd9) hwr_training_write_pane_g1

0xcd41,	// (0x000a0de1) hwr_training_write_pane_g2

0xcd49,	// (0x000a0de9) hwr_training_write_pane_g3

0xcd51,	// (0x000a0df1) hwr_training_write_pane_g4

0xcd59,	// (0x000a0df9) hwr_training_write_pane_g5

0xcd61,	// (0x000a0e01) hwr_training_write_pane_g6

0xcd69,	// (0x000a0e09) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000a3913) hwr_training_write_pane_g

0x5b93,	// (0x00099c33) hwr_training_navi_pane_g1_ParamLimits

0x5b93,	// (0x00099c33) hwr_training_navi_pane_g1

0x5ba5,	// (0x00099c45) hwr_training_navi_pane_g2_ParamLimits

0x5ba5,	// (0x00099c45) hwr_training_navi_pane_g2

0x5bb7,	// (0x00099c57) hwr_training_navi_pane_g3_ParamLimits

0x5bb7,	// (0x00099c57) hwr_training_navi_pane_g3

0x5bc7,	// (0x00099c67) hwr_training_navi_pane_g4_ParamLimits

0x5bc7,	// (0x00099c67) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000a3922) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000a3922) hwr_training_navi_pane_g

0x5be1,	// (0x00099c81) hwr_training_navi_pane_t1

0x5bef,	// (0x00099c8f) list_single_hwr_training_instruct_pane_ParamLimits

0x5bef,	// (0x00099c8f) list_single_hwr_training_instruct_pane

0xcd71,	// (0x000a0e11) list_single_hwr_training_instruct_pane_t1

0xc3f5,	// (0x000a0495) bg_frame_shadow_pane_g1

0xcd80,	// (0x000a0e20) bg_frame_shadow_pane_g2

0xcd88,	// (0x000a0e28) bg_frame_shadow_pane_g3

0xcd90,	// (0x000a0e30) bg_frame_shadow_pane_g4

0xcd98,	// (0x000a0e38) bg_frame_shadow_pane_g5

0xcda0,	// (0x000a0e40) bg_frame_shadow_pane_g6

0xcda8,	// (0x000a0e48) bg_frame_shadow_pane_g7

0xa04b,	// (0x0009e0eb) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000a392d) bg_frame_shadow_pane_g

0x11a5,	// (0x00095245) main_video_tele_dialer_pane

0x5c18,	// (0x00099cb8) aid_size_cell_video_keypad_ParamLimits

0x5c18,	// (0x00099cb8) aid_size_cell_video_keypad

0x5c28,	// (0x00099cc8) grid_video_dialer_keypad_pane_ParamLimits

0x5c28,	// (0x00099cc8) grid_video_dialer_keypad_pane

0x5c5c,	// (0x00099cfc) video_down_pane_cp_ParamLimits

0x5c5c,	// (0x00099cfc) video_down_pane_cp

0x5c86,	// (0x00099d26) cell_video_dialer_keypad_pane_ParamLimits

0x5c86,	// (0x00099d26) cell_video_dialer_keypad_pane

0xcdb0,	// (0x000a0e50) bg_button_pane_cp08_ParamLimits

0xcdb0,	// (0x000a0e50) bg_button_pane_cp08

0x5c9b,	// (0x00099d3b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c9b,	// (0x00099d3b) cell_video_dialer_keypad_pane_g1

0x5477,	// (0x00099517) mup3_rocker2_pane_ParamLimits

0x5477,	// (0x00099517) mup3_rocker2_pane

0xc4b5,	// (0x000a0555) mup3_rocker2_pane_g1

0x43a0,	// (0x00098440) main_dialer2_pane

0x11a5,	// (0x00095245) main_mp4_pane

0x5cdd,	// (0x00099d7d) main_mp4_pane_g1_ParamLimits

0x5cdd,	// (0x00099d7d) main_mp4_pane_g1

0x5ceb,	// (0x00099d8b) main_mp4_pane_g2_ParamLimits

0x5ceb,	// (0x00099d8b) main_mp4_pane_g2

0x5cf9,	// (0x00099d99) main_mp4_pane_g3_ParamLimits

0x5cf9,	// (0x00099d99) main_mp4_pane_g3

0x5d3e,	// (0x00099dde) main_mp4_pane_g4_ParamLimits

0x5d3e,	// (0x00099dde) main_mp4_pane_g4

0x5d66,	// (0x00099e06) main_mp4_pane_g5_ParamLimits

0x5d66,	// (0x00099e06) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x000a394d) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x000a394d) main_mp4_pane_g

0x5db6,	// (0x00099e56) main_mp4_pane_t1_ParamLimits

0x5db6,	// (0x00099e56) main_mp4_pane_t1

0x5e12,	// (0x00099eb2) main_mp4_pane_t2_ParamLimits

0x5e12,	// (0x00099eb2) main_mp4_pane_t2

0xcdbc,	// (0x000a0e5c) main_mp4_pane_t3_ParamLimits

0xcdbc,	// (0x000a0e5c) main_mp4_pane_t3

0x5e64,	// (0x00099f04) main_mp4_pane_t4_ParamLimits

0x5e64,	// (0x00099f04) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x000a395a) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x000a395a) main_mp4_pane_t

0x5ea8,	// (0x00099f48) mp4_progress_pane_ParamLimits

0x5ea8,	// (0x00099f48) mp4_progress_pane

0x5ef2,	// (0x00099f92) mp4_rocker_pane_ParamLimits

0x5ef2,	// (0x00099f92) mp4_rocker_pane

0xcde4,	// (0x000a0e84) mp4_progress_pane_t1

0xcdfd,	// (0x000a0e9d) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x000a3963) mp4_progress_pane_t

0xce16,	// (0x000a0eb6) mup_progress_pane_cp04

0xd41e,	// (0x000a14be) mp4_rocker_pane_g1

0x5f12,	// (0x00099fb2) aid_cell_size_keypad2_ParamLimits

0x5f12,	// (0x00099fb2) aid_cell_size_keypad2

0x5f22,	// (0x00099fc2) dialer2_ne_pane_ParamLimits

0x5f22,	// (0x00099fc2) dialer2_ne_pane

0x5f30,	// (0x00099fd0) grid_dialer2_keypad_pane_ParamLimits

0x5f30,	// (0x00099fd0) grid_dialer2_keypad_pane

0xd428,	// (0x000a14c8) bg_popup_call_pane_cp07_ParamLimits

0xd428,	// (0x000a14c8) bg_popup_call_pane_cp07

0x5f40,	// (0x00099fe0) dialer2_ne_pane_t1_ParamLimits

0x5f40,	// (0x00099fe0) dialer2_ne_pane_t1

0x5f65,	// (0x0009a005) cell_dialer2_keypad_pane_ParamLimits

0x5f65,	// (0x0009a005) cell_dialer2_keypad_pane

0xce34,	// (0x000a0ed4) bg_button_pane_pane_cp04_ParamLimits

0xce34,	// (0x000a0ed4) bg_button_pane_pane_cp04

0x5f7a,	// (0x0009a01a) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f7a,	// (0x0009a01a) cell_dialer2_keypad_pane_g1

0x1fbd,	// (0x0009605d) aid_placing_vt_set_content_ParamLimits

0x1fbd,	// (0x0009605d) aid_placing_vt_set_content

0x1fe9,	// (0x00096089) aid_placing_vt_set_title_ParamLimits

0x1fe9,	// (0x00096089) aid_placing_vt_set_title

0x11a5,	// (0x00095245) main_image3_pane

0x6014,	// (0x0009a0b4) area_side_right_pane_cp01_ParamLimits

0x6014,	// (0x0009a0b4) area_side_right_pane_cp01

0x6041,	// (0x0009a0e1) main_image3_pane_g1_ParamLimits

0x6041,	// (0x0009a0e1) main_image3_pane_g1

0x604f,	// (0x0009a0ef) main_image3_pane_g2_ParamLimits

0x604f,	// (0x0009a0ef) main_image3_pane_g2

0x6068,	// (0x0009a108) main_image3_pane_g3_ParamLimits

0x6068,	// (0x0009a108) main_image3_pane_g3

0x6081,	// (0x0009a121) main_image3_pane_g4_ParamLimits

0x6081,	// (0x0009a121) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x000a3972) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x000a3972) main_image3_pane_g

0x609a,	// (0x0009a13a) main_image3_pane_t1_ParamLimits

0x609a,	// (0x0009a13a) main_image3_pane_t1

0x60bf,	// (0x0009a15f) main_image3_pane_t2_ParamLimits

0x60bf,	// (0x0009a15f) main_image3_pane_t2

0x60de,	// (0x0009a17e) main_image3_pane_t3_ParamLimits

0x60de,	// (0x0009a17e) main_image3_pane_t3

0x0003,

0xf8db,	// (0x000a397b) main_image3_pane_t_ParamLimits

0xf8db,	// (0x000a397b) main_image3_pane_t

0xea8f,	// (0x000a2b2f) grid_sctrl_middle_pane_cp01_ParamLimits

0xea8f,	// (0x000a2b2f) grid_sctrl_middle_pane_cp01

0x613f,	// (0x0009a1df) cell_sctrl_middle_pane_cp01_ParamLimits

0x613f,	// (0x0009a1df) cell_sctrl_middle_pane_cp01

0x6150,	// (0x0009a1f0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6150,	// (0x0009a1f0) cell_sctrl_middle_pane_cp01_g1

0x11a5,	// (0x00095245) main_call4_pane

0x615d,	// (0x0009a1fd) aid_size_button_call4_ParamLimits

0x615d,	// (0x0009a1fd) aid_size_button_call4

0x618d,	// (0x0009a22d) call4_windows_pane_ParamLimits

0x618d,	// (0x0009a22d) call4_windows_pane

0x61a7,	// (0x0009a247) grid_call4_button_pane_ParamLimits

0x61a7,	// (0x0009a247) grid_call4_button_pane

0xce40,	// (0x000a0ee0) call4_windows_conf_pane

0xce57,	// (0x000a0ef7) popup_call4_audio_first_window_ParamLimits

0xce57,	// (0x000a0ef7) popup_call4_audio_first_window

0xcea3,	// (0x000a0f43) popup_call4_audio_second_window_ParamLimits

0xcea3,	// (0x000a0f43) popup_call4_audio_second_window

0xceb7,	// (0x000a0f57) popup_call4_audio_wait_window_ParamLimits

0xceb7,	// (0x000a0f57) popup_call4_audio_wait_window

0x61cb,	// (0x0009a26b) cell_call4_button_pane_ParamLimits

0x61cb,	// (0x0009a26b) cell_call4_button_pane

0x61f0,	// (0x0009a290) bg_button_pane_cp09_ParamLimits

0x61f0,	// (0x0009a290) bg_button_pane_cp09

0x61fc,	// (0x0009a29c) cell_call4_button_pane_g1_ParamLimits

0x61fc,	// (0x0009a29c) cell_call4_button_pane_g1

0x6209,	// (0x0009a2a9) cell_call4_button_pane_t1_ParamLimits

0x6209,	// (0x0009a2a9) cell_call4_button_pane_t1

0xceff,	// (0x000a0f9f) popup_call4_audio_conf_window_ParamLimits

0xceff,	// (0x000a0f9f) popup_call4_audio_conf_window

0x54aa,	// (0x0009954a) mup3_progress_pane_t1_ParamLimits

0x54c9,	// (0x00099569) mup3_progress_pane_t2_ParamLimits

0xc7f2,	// (0x000a0892) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x000a384f) mup3_progress_pane_t_ParamLimits

0xc80f,	// (0x000a08af) mup_progress_pane_cp03_ParamLimits

0x59df,	// (0x00099a7f) mup3_control_keys_pane_g4_copy1

0x5ed6,	// (0x00099f76) mp4_rocker2_pane_ParamLimits

0x5ed6,	// (0x00099f76) mp4_rocker2_pane

0xcf13,	// (0x000a0fb3) mp4_rocker2_pane_g1

0xcf1b,	// (0x000a0fbb) mp4_rocker2_pane_g2

0x621b,	// (0x0009a2bb) mp4_rocker2_pane_g3

0x6223,	// (0x0009a2c3) mp4_rocker2_pane_g4

0x622b,	// (0x0009a2cb) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x000a3984) mp4_rocker2_pane_g

0x11a5,	// (0x00095245) main_camera4_pane

0x11a5,	// (0x00095245) main_video4_pane

0x5c38,	// (0x00099cd8) main_video_tele_dialer_pane_t1_ParamLimits

0x5c38,	// (0x00099cd8) main_video_tele_dialer_pane_t1

0x5c4a,	// (0x00099cea) main_video_tele_dialer_pane_t2_ParamLimits

0x5c4a,	// (0x00099cea) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000a393e) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000a393e) main_video_tele_dialer_pane_t

0x624b,	// (0x0009a2eb) cam4_autofocus_pane_ParamLimits

0x624b,	// (0x0009a2eb) cam4_autofocus_pane

0x6265,	// (0x0009a305) cam4_image_uncrop_pane_ParamLimits

0x6265,	// (0x0009a305) cam4_image_uncrop_pane

0x627c,	// (0x0009a31c) cam4_indicators_pane_ParamLimits

0x627c,	// (0x0009a31c) cam4_indicators_pane

0x6298,	// (0x0009a338) main_camera4_pane_g1_ParamLimits

0x6298,	// (0x0009a338) main_camera4_pane_g1

0x62a4,	// (0x0009a344) main_camera4_pane_g2_ParamLimits

0x62a4,	// (0x0009a344) main_camera4_pane_g2

0x62a4,	// (0x0009a344) main_camera4_pane_g3_ParamLimits

0x62a4,	// (0x0009a344) main_camera4_pane_g3

0x62b0,	// (0x0009a350) main_camera4_pane_g4_ParamLimits

0x62b0,	// (0x0009a350) main_camera4_pane_g4

0x62bc,	// (0x0009a35c) main_camera4_pane_g5_ParamLimits

0x62bc,	// (0x0009a35c) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x000a398f) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x000a398f) main_camera4_pane_g

0x62d6,	// (0x0009a376) main_camera4_pane_t1_ParamLimits

0x62d6,	// (0x0009a376) main_camera4_pane_t1

0x631e,	// (0x0009a3be) bg_tb_trans_pane_cp06

0x6334,	// (0x0009a3d4) cam4_indicators_pane_g1

0x6345,	// (0x0009a3e5) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x000a39aa) cam4_indicators_pane_g

0x635d,	// (0x0009a3fd) cam4_indicators_pane_t1

0x6387,	// (0x0009a427) main_video4_pane_g1_ParamLimits

0x6387,	// (0x0009a427) main_video4_pane_g1

0x6393,	// (0x0009a433) main_video4_pane_g2_ParamLimits

0x6393,	// (0x0009a433) main_video4_pane_g2

0x639f,	// (0x0009a43f) main_video4_pane_g3_ParamLimits

0x639f,	// (0x0009a43f) main_video4_pane_g3

0x63ab,	// (0x0009a44b) main_video4_pane_g4_ParamLimits

0x63ab,	// (0x0009a44b) main_video4_pane_g4

0x0004,

0xf911,	// (0x000a39b1) main_video4_pane_g_ParamLimits

0xf911,	// (0x000a39b1) main_video4_pane_g

0x63cb,	// (0x0009a46b) vid4_indicators_pane_ParamLimits

0x63cb,	// (0x0009a46b) vid4_indicators_pane

0x63ea,	// (0x0009a48a) video4_image_uncrop_cif_pane_ParamLimits

0x63ea,	// (0x0009a48a) video4_image_uncrop_cif_pane

0x63f9,	// (0x0009a499) video4_image_uncrop_nhd_pane_ParamLimits

0x63f9,	// (0x0009a499) video4_image_uncrop_nhd_pane

0x6265,	// (0x0009a305) video4_image_uncrop_vga_pane_ParamLimits

0x6265,	// (0x0009a305) video4_image_uncrop_vga_pane

0x4392,	// (0x00098432) bg_tb_trans_pane_cp07

0x640e,	// (0x0009a4ae) vid4_indicators_pane_g1

0x6422,	// (0x0009a4c2) vid4_indicators_pane_g2

0x6436,	// (0x0009a4d6) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x000a39bc) vid4_indicators_pane_g

0x6463,	// (0x0009a503) vid4_indicators_pane_t1

0x647a,	// (0x0009a51a) cam4_autofocus_pane_g1

0x6482,	// (0x0009a522) cam4_autofocus_pane_g2

0x648a,	// (0x0009a52a) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000a39c7) cam4_autofocus_pane_g

0x6492,	// (0x0009a532) cam4_autofocus_pane_g3_copy1

0x5c6a,	// (0x00099d0a) video_down_pane_cp_t1

0x5c78,	// (0x00099d18) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x000a3943) video_down_pane_cp_t

0x118b,	// (0x0009522b) popup_vitu2_window_ParamLimits

0x118b,	// (0x0009522b) popup_vitu2_window

0x649a,	// (0x0009a53a) aid_size_cell2_itu2_ParamLimits

0x649a,	// (0x0009a53a) aid_size_cell2_itu2

0x64bc,	// (0x0009a55c) aid_size_cell_itu2_ParamLimits

0x64bc,	// (0x0009a55c) aid_size_cell_itu2

0x6500,	// (0x0009a5a0) bg_popup_window_pane_cp09_ParamLimits

0x6500,	// (0x0009a5a0) bg_popup_window_pane_cp09

0x650e,	// (0x0009a5ae) field_vitu2_entry_pane_ParamLimits

0x650e,	// (0x0009a5ae) field_vitu2_entry_pane

0x652e,	// (0x0009a5ce) grid_vitu2_function_pane_ParamLimits

0x652e,	// (0x0009a5ce) grid_vitu2_function_pane

0x6572,	// (0x0009a612) grid_vitu2_itu_pane_ParamLimits

0x6572,	// (0x0009a612) grid_vitu2_itu_pane

0x65ec,	// (0x0009a68c) cell_vitu2_itu_pane_ParamLimits

0x65ec,	// (0x0009a68c) cell_vitu2_itu_pane

0x6605,	// (0x0009a6a5) cell_vitu2_function_pane_ParamLimits

0x6605,	// (0x0009a6a5) cell_vitu2_function_pane

0xcf23,	// (0x000a0fc3) bg_popup_call_pane_cp08_ParamLimits

0xcf23,	// (0x000a0fc3) bg_popup_call_pane_cp08

0xcf3a,	// (0x000a0fda) field_vitu2_entry_pane_g1

0xcf46,	// (0x000a0fe6) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x000a39ce) field_vitu2_entry_pane_g

0x6646,	// (0x0009a6e6) field_vitu2_entry_pane_t1_ParamLimits

0x6646,	// (0x0009a6e6) field_vitu2_entry_pane_t1

0xcf60,	// (0x000a1000) field_vitu2_entry_pane_t2_ParamLimits

0xcf60,	// (0x000a1000) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x000a39d5) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x000a39d5) field_vitu2_entry_pane_t

0x6676,	// (0x0009a716) bg_button_pane_cp010_ParamLimits

0x6676,	// (0x0009a716) bg_button_pane_cp010

0x6684,	// (0x0009a724) cell_vitu2_itu_pane_g1

0x66a4,	// (0x0009a744) cell_vitu2_itu_pane_t1_ParamLimits

0x66a4,	// (0x0009a744) cell_vitu2_itu_pane_t1

0x0dfa,	// (0x00094e9a) cell_vitu2_itu_pane_t2_ParamLimits

0x0dfa,	// (0x00094e9a) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000a39df) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000a39df) cell_vitu2_itu_pane_t

0x4392,	// (0x00098432) bg_button_pane_cp011

0x66f0,	// (0x0009a790) cell_vitu2_function_pane_g1

0x11a5,	// (0x00095245) main_myfav_hc_pane

0x6120,	// (0x0009a1c0) popup_image3_note_pane_ParamLimits

0x6120,	// (0x0009a1c0) popup_image3_note_pane

0x612e,	// (0x0009a1ce) popup_image3_tool_bar_pane_ParamLimits

0x612e,	// (0x0009a1ce) popup_image3_tool_bar_pane

0x0e70,	// (0x00094f10) cell_vitu2_itu_pane_t3_ParamLimits

0x0e70,	// (0x00094f10) cell_vitu2_itu_pane_t3

0xea44,	// (0x000a2ae4) bg_popup_trans_pane

0xcf85,	// (0x000a1025) grid_image3_tool_bar_pane

0xcf8f,	// (0x000a102f) bg_popup_trans_pane_g1

0xa3b0,	// (0x0009e450) bg_popup_trans_pane_g2

0xcf97,	// (0x000a1037) bg_popup_trans_pane_g3

0xcf9f,	// (0x000a103f) bg_popup_trans_pane_g4

0xcfa7,	// (0x000a1047) bg_popup_trans_pane_g5

0xcfaf,	// (0x000a104f) bg_popup_trans_pane_g6

0xcfb7,	// (0x000a1057) bg_popup_trans_pane_g7

0xcfbf,	// (0x000a105f) bg_popup_trans_pane_g8

0xa390,	// (0x0009e430) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000a39e6) bg_popup_trans_pane_g

0xcfc7,	// (0x000a1067) cell_image3_tool_bar_pane_ParamLimits

0xcfc7,	// (0x000a1067) cell_image3_tool_bar_pane

0xc4b5,	// (0x000a0555) cell_image3_tool_bar_pane_g1

0xea44,	// (0x000a2ae4) bg_popup_trans_pane_cp1

0xcfdb,	// (0x000a107b) popup_image3_note_pane_t1

0xcfe9,	// (0x000a1089) popup_image3_note_pane_t2

0xcff7,	// (0x000a1097) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000a39f9) popup_image3_note_pane_t

0xd005,	// (0x000a10a5) popup_image3_note_pane_t3_copy1

0x6704,	// (0x0009a7a4) bg_myfav_hc_instruction_pane_ParamLimits

0x6704,	// (0x0009a7a4) bg_myfav_hc_instruction_pane

0x671c,	// (0x0009a7bc) cell_myfav_contact_pane_ParamLimits

0x671c,	// (0x0009a7bc) cell_myfav_contact_pane

0x6736,	// (0x0009a7d6) cell_myfav_contact_pane_cp1_ParamLimits

0x6736,	// (0x0009a7d6) cell_myfav_contact_pane_cp1

0x674e,	// (0x0009a7ee) cell_myfav_contact_pane_cp2_ParamLimits

0x674e,	// (0x0009a7ee) cell_myfav_contact_pane_cp2

0x6766,	// (0x0009a806) cell_myfav_contact_pane_cp3_ParamLimits

0x6766,	// (0x0009a806) cell_myfav_contact_pane_cp3

0x677d,	// (0x0009a81d) cell_myfav_contact_pane_cp4_ParamLimits

0x677d,	// (0x0009a81d) cell_myfav_contact_pane_cp4

0x6793,	// (0x0009a833) cell_myfav_contact_pane_cp5_ParamLimits

0x6793,	// (0x0009a833) cell_myfav_contact_pane_cp5

0x67a7,	// (0x0009a847) cell_myfav_contact_pane_cp6_ParamLimits

0x67a7,	// (0x0009a847) cell_myfav_contact_pane_cp6

0x67bb,	// (0x0009a85b) cell_myfav_contact_pane_cp7_ParamLimits

0x67bb,	// (0x0009a85b) cell_myfav_contact_pane_cp7

0xd013,	// (0x000a10b3) listscroll_gen_pane_cp05

0x67d3,	// (0x0009a873) main_myfav_hc_pane_g1_ParamLimits

0x67d3,	// (0x0009a873) main_myfav_hc_pane_g1

0x67e9,	// (0x0009a889) main_myfav_hc_pane_g2_ParamLimits

0x67e9,	// (0x0009a889) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000a3a00) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000a3a00) main_myfav_hc_pane_g

0x6819,	// (0x0009a8b9) main_myfav_hc_pane_t1_ParamLimits

0x6819,	// (0x0009a8b9) main_myfav_hc_pane_t1

0xd01c,	// (0x000a10bc) main_myfav_hc_pane_t2_ParamLimits

0xd01c,	// (0x000a10bc) main_myfav_hc_pane_t2

0xd02e,	// (0x000a10ce) main_myfav_hc_pane_t3_ParamLimits

0xd02e,	// (0x000a10ce) main_myfav_hc_pane_t3

0x6830,	// (0x0009a8d0) main_myfav_hc_pane_t4_ParamLimits

0x6830,	// (0x0009a8d0) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000a3a07) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000a3a07) main_myfav_hc_pane_t

0xc4b5,	// (0x000a0555) bg_myfav_hc_instruction_pane_g1

0xd040,	// (0x000a10e0) cell_myfav_contact_pane_g1_ParamLimits

0xd040,	// (0x000a10e0) cell_myfav_contact_pane_g1

0xd040,	// (0x000a10e0) cell_myfav_contact_pane_g2_ParamLimits

0xd040,	// (0x000a10e0) cell_myfav_contact_pane_g2

0xd04c,	// (0x000a10ec) cell_myfav_contact_pane_g3_ParamLimits

0xd04c,	// (0x000a10ec) cell_myfav_contact_pane_g3

0xc7dc,	// (0x000a087c) cell_myfav_contact_pane_g4_ParamLimits

0xc7dc,	// (0x000a087c) cell_myfav_contact_pane_g4

0xd059,	// (0x000a10f9) cell_myfav_contact_pane_g5_ParamLimits

0xd059,	// (0x000a10f9) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000a3a12) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000a3a12) cell_myfav_contact_pane_g

0x6801,	// (0x0009a8a1) main_myfav_hc_pane_g3_ParamLimits

0x6801,	// (0x0009a8a1) main_myfav_hc_pane_g3

0x1094,	// (0x00095134) popup_adpt_find_window

0x685a,	// (0x0009a8fa) afind_page_pane_ParamLimits

0x685a,	// (0x0009a8fa) afind_page_pane

0x6867,	// (0x0009a907) aid_size_cell_afind_ParamLimits

0x6867,	// (0x0009a907) aid_size_cell_afind

0x6881,	// (0x0009a921) bg_popup_sub_pane_cp09_ParamLimits

0x6881,	// (0x0009a921) bg_popup_sub_pane_cp09

0x688e,	// (0x0009a92e) find_pane_cp01_ParamLimits

0x688e,	// (0x0009a92e) find_pane_cp01

0xd065,	// (0x000a1105) grid_afind_control_pane_ParamLimits

0xd065,	// (0x000a1105) grid_afind_control_pane

0x689b,	// (0x0009a93b) grid_afind_pane_ParamLimits

0x689b,	// (0x0009a93b) grid_afind_pane

0x68b5,	// (0x0009a955) cell_afind_pane_ParamLimits

0x68b5,	// (0x0009a955) cell_afind_pane

0xc4b5,	// (0x000a0555) afind_page_pane_g1

0x68fd,	// (0x0009a99d) afind_page_pane_g2

0x6906,	// (0x0009a9a6) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000a3a1d) afind_page_pane_g

0x690f,	// (0x0009a9af) afind_page_pane_t1

0xd079,	// (0x000a1119) cell_afind_grid_control_pane_ParamLimits

0xd079,	// (0x000a1119) cell_afind_grid_control_pane

0xce34,	// (0x000a0ed4) bg_button_pane_cp69_ParamLimits

0xce34,	// (0x000a0ed4) bg_button_pane_cp69

0x692f,	// (0x0009a9cf) cell_afind_pane_g1_ParamLimits

0x692f,	// (0x0009a9cf) cell_afind_pane_g1

0x693c,	// (0x0009a9dc) cell_afind_pane_t1_ParamLimits

0x693c,	// (0x0009a9dc) cell_afind_pane_t1

0xa1a9,	// (0x0009e249) bg_button_pane_cp72

0xd088,	// (0x000a1128) cell_afind_grid_control_pane_g1

0x3f0a,	// (0x00097faa) aid_image_placing_area_ParamLimits

0x3f0a,	// (0x00097faa) aid_image_placing_area

0xcb02,	// (0x000a0ba2) field_vitu_entry_pane_g1_ParamLimits

0xcb02,	// (0x000a0ba2) field_vitu_entry_pane_g1

0xcb0e,	// (0x000a0bae) field_vitu_entry_pane_g2_ParamLimits

0xcb0e,	// (0x000a0bae) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x000a38ce) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x000a38ce) field_vitu_entry_pane_g

0x5a68,	// (0x00099b08) cell_vitu_itu_pane_g1_ParamLimits

0x5aaa,	// (0x00099b4a) cell_vitu_itu_pane_t3_ParamLimits

0x5aaa,	// (0x00099b4a) cell_vitu_itu_pane_t3

0xcde4,	// (0x000a0e84) mp4_progress_pane_t1_ParamLimits

0xcdfd,	// (0x000a0e9d) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x000a3963) mp4_progress_pane_t_ParamLimits

0xce16,	// (0x000a0eb6) mup_progress_pane_cp04_ParamLimits

0x6844,	// (0x0009a8e4) main_myfav_hc_pane_t5_ParamLimits

0x6844,	// (0x0009a8e4) main_myfav_hc_pane_t5

0x0df2,	// (0x00094e92) aid_zoom_text_primary

0x1094,	// (0x00095134) popup_adpt_find_window_ParamLimits

0x4392,	// (0x00098432) main_cam_set_pane

0x628a,	// (0x0009a32a) cam4_zoom_pane_ParamLimits

0x628a,	// (0x0009a32a) cam4_zoom_pane

0x694e,	// (0x0009a9ee) main_cam_set_pane_g1_ParamLimits

0x694e,	// (0x0009a9ee) main_cam_set_pane_g1

0x695c,	// (0x0009a9fc) main_cam_set_pane_g2_ParamLimits

0x695c,	// (0x0009a9fc) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000a3a24) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000a3a24) main_cam_set_pane_g

0x6968,	// (0x0009aa08) main_cam_set_pane_t1_ParamLimits

0x6968,	// (0x0009aa08) main_cam_set_pane_t1

0x6984,	// (0x0009aa24) main_cset_listscroll_pane_ParamLimits

0x6984,	// (0x0009aa24) main_cset_listscroll_pane

0x69af,	// (0x0009aa4f) main_cset_slider_pane_ParamLimits

0x69af,	// (0x0009aa4f) main_cset_slider_pane

0xd099,	// (0x000a1139) main_cset_list_pane_ParamLimits

0xd099,	// (0x000a1139) main_cset_list_pane

0xd0a9,	// (0x000a1149) scroll_pane_cp028

0x69ce,	// (0x0009aa6e) aid_area_touch_slider

0x69ea,	// (0x0009aa8a) cset_slider_pane

0x6a14,	// (0x0009aab4) main_cset_slider_pane_g1

0x6a29,	// (0x0009aac9) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000a3a29) main_cset_slider_pane_g

0xd0f4,	// (0x000a1194) main_cset_slider_pane_t1

0x6aef,	// (0x0009ab8f) main_cset_slider_pane_t2

0x6b09,	// (0x0009aba9) main_cset_slider_pane_t3

0x6b23,	// (0x0009abc3) main_cset_slider_pane_t4

0x6b41,	// (0x0009abe1) main_cset_slider_pane_t5

0x6b5f,	// (0x0009abff) main_cset_slider_pane_t6

0x6b76,	// (0x0009ac16) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x000a3a4e) main_cset_slider_pane_t

0x6c84,	// (0x0009ad24) cset_list_set_pane_ParamLimits

0x6c84,	// (0x0009ad24) cset_list_set_pane

0x6c9d,	// (0x0009ad3d) aid_position_infowindow_above

0x6ca5,	// (0x0009ad45) aid_position_infowindow_below

0x6cad,	// (0x0009ad4d) cset_list_set_pane_g1_ParamLimits

0x6cad,	// (0x0009ad4d) cset_list_set_pane_g1

0x6cb9,	// (0x0009ad59) cset_list_set_pane_g3_ParamLimits

0x6cb9,	// (0x0009ad59) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x000a3a6d) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x000a3a6d) cset_list_set_pane_g

0x6cc8,	// (0x0009ad68) cset_list_set_pane_t1_ParamLimits

0x6cc8,	// (0x0009ad68) cset_list_set_pane_t1

0xea81,	// (0x000a2b21) list_highlight_pane_cp021_ParamLimits

0xea81,	// (0x000a2b21) list_highlight_pane_cp021

0xacc2,	// (0x0009ed62) cset_slider_pane_g1

0xacd4,	// (0x0009ed74) cset_slider_pane_g2

0xaccb,	// (0x0009ed6b) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x000a3a72) cset_slider_pane_g

0x6cdd,	// (0x0009ad7d) aid_area_touch_cam4_zoom

0x6ce5,	// (0x0009ad85) cam4_zoom_cont_pane

0x6ced,	// (0x0009ad8d) cam4_zoom_pane_g1

0x6cf5,	// (0x0009ad95) cam4_zoom_pane_g2

0x6cfd,	// (0x0009ad9d) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x000a3a79) cam4_zoom_pane_g

0x6d05,	// (0x0009ada5) cam4_zoom_cont_pane_g1

0x6d0e,	// (0x0009adae) cam4_zoom_cont_pane_g2

0x6d17,	// (0x0009adb7) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x000a3a80) cam4_zoom_cont_pane_g

0x6177,	// (0x0009a217) call4_image_pane_ParamLimits

0x6177,	// (0x0009a217) call4_image_pane

0xce40,	// (0x000a0ee0) call4_windows_conf_pane_ParamLimits

0xce81,	// (0x000a0f21) popup_call4_audio_in_window_ParamLimits

0xce81,	// (0x000a0f21) popup_call4_audio_in_window

0xea44,	// (0x000a2ae4) bg_popup_call2_act_pane_cp02

0xcef7,	// (0x000a0f97) call4_list_conf_pane

0xc4b5,	// (0x000a0555) call4_image_pane_g1

0xc4b5,	// (0x000a0555) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x000a378f) call4_image_pane_g

0xd194,	// (0x000a1234) list_single_graphic_popup_conf4_pane_ParamLimits

0xd194,	// (0x000a1234) list_single_graphic_popup_conf4_pane

0xea44,	// (0x000a2ae4) list_highlight_pane_cp022

0xd1a7,	// (0x000a1247) list_single_graphic_popup_conf4_pane_g1

0xa8cc,	// (0x0009e96c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x000a3a87) list_single_graphic_popup_conf4_pane_g

0xd1af,	// (0x000a124f) list_single_graphic_popup_conf4_pane_t1

0x214d,	// (0x000961ed) popup_vtel_slider_window_ParamLimits

0x214d,	// (0x000961ed) popup_vtel_slider_window

0xce22,	// (0x000a0ec2) dialer2_ne_pane_t2_ParamLimits

0xce22,	// (0x000a0ec2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x000a3968) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x000a3968) dialer2_ne_pane_t

0xea81,	// (0x000a2b21) bg_popup_sub_pane_cp010_ParamLimits

0xea81,	// (0x000a2b21) bg_popup_sub_pane_cp010

0x6d20,	// (0x0009adc0) popup_vtel_slider_window_g1_ParamLimits

0x6d20,	// (0x0009adc0) popup_vtel_slider_window_g1

0x6d2c,	// (0x0009adcc) popup_vtel_slider_window_g2_ParamLimits

0x6d2c,	// (0x0009adcc) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x000a3a8c) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x000a3a8c) popup_vtel_slider_window_g

0x6d74,	// (0x0009ae14) vtel_slider_pane_ParamLimits

0x6d74,	// (0x0009ae14) vtel_slider_pane

0x6d83,	// (0x0009ae23) vtel_slider_pane_g1_ParamLimits

0x6d83,	// (0x0009ae23) vtel_slider_pane_g1

0x6d90,	// (0x0009ae30) vtel_slider_pane_g2_ParamLimits

0x6d90,	// (0x0009ae30) vtel_slider_pane_g2

0x6d9d,	// (0x0009ae3d) vtel_slider_pane_g3_ParamLimits

0x6d9d,	// (0x0009ae3d) vtel_slider_pane_g3

0x6d83,	// (0x0009ae23) vtel_slider_pane_g4_ParamLimits

0x6d83,	// (0x0009ae23) vtel_slider_pane_g4

0x6daa,	// (0x0009ae4a) vtel_slider_pane_g5_ParamLimits

0x6daa,	// (0x0009ae4a) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x000a3a95) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x000a3a95) vtel_slider_pane_g

0x4392,	// (0x00098432) main_gallery2_pane

0x64e2,	// (0x0009a582) aid_size_row_itut2_dropdow_list_ParamLimits

0x64e2,	// (0x0009a582) aid_size_row_itut2_dropdow_list

0x6550,	// (0x0009a5f0) grid_vitu2_function_top_pane_ParamLimits

0x6550,	// (0x0009a5f0) grid_vitu2_function_top_pane

0x65aa,	// (0x0009a64a) popup_vitu2_dropdown_list_window_ParamLimits

0x65aa,	// (0x0009a64a) popup_vitu2_dropdown_list_window

0x65ca,	// (0x0009a66a) popup_vitu2_match_list_window

0x6dc5,	// (0x0009ae65) cell_vitu2_function_top_pane_ParamLimits

0x6dc5,	// (0x0009ae65) cell_vitu2_function_top_pane

0x6ddf,	// (0x0009ae7f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ddf,	// (0x0009ae7f) cell_vitu2_function_top_pane_cp01

0x6dfb,	// (0x0009ae9b) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dfb,	// (0x0009ae9b) cell_vitu2_function_top_wide_pane

0x4392,	// (0x00098432) bg_button_pane_cp012

0x6e17,	// (0x0009aeb7) cell_vitu2_function_top_pane_g1

0x6e2b,	// (0x0009aecb) bg_button_pane_cp013_ParamLimits

0x6e2b,	// (0x0009aecb) bg_button_pane_cp013

0x6e47,	// (0x0009aee7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e47,	// (0x0009aee7) cell_vitu2_function_top_wide_pane_g1

0x118b,	// (0x0009522b) bg_popup_sub_pane_cp20

0x6e5f,	// (0x0009aeff) list_vitu2_match_list_pane

0xcf8f,	// (0x000a102f) bg_popup_sub_pane_cp20_g1

0xcf97,	// (0x000a1037) bg_popup_sub_pane_cp20_g2

0xa3b0,	// (0x0009e450) bg_popup_sub_pane_cp20_g3

0xcf9f,	// (0x000a103f) bg_popup_sub_pane_cp20_g4

0xa390,	// (0x0009e430) bg_popup_sub_pane_cp20_g5

0xd1c5,	// (0x000a1265) bg_popup_sub_pane_cp20_g6

0xcfaf,	// (0x000a104f) bg_popup_sub_pane_cp20_g7

0xcfb7,	// (0x000a1057) bg_popup_sub_pane_cp20_g8

0xcfbf,	// (0x000a105f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x000a3aa0) bg_popup_sub_pane_cp20_g

0x6e77,	// (0x0009af17) list_vitu2_match_list_item_pane_ParamLimits

0x6e77,	// (0x0009af17) list_vitu2_match_list_item_pane

0x6e89,	// (0x0009af29) list_vitu2_match_list_item_pane_t1

0x11a5,	// (0x00095245) bg_popup_sub_pane_cp21

0x6edf,	// (0x0009af7f) grid_vitu2_dropdown_list_pane

0x6ee7,	// (0x0009af87) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ee7,	// (0x0009af87) cell_vitu2_dropdown_list_char_pane

0x6f08,	// (0x0009afa8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f08,	// (0x0009afa8) cell_vitu2_dropdown_list_ctrl_pane

0xd1cd,	// (0x000a126d) cell_vitu2_dropdown_list_char_pane_g1

0xd1d6,	// (0x000a1276) cell_vitu2_dropdown_list_char_pane_g2

0xd1df,	// (0x000a127f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x000a3abd) cell_vitu2_dropdown_list_char_pane_g

0x6f34,	// (0x0009afd4) cell_vitu2_dropdown_list_char_pane_t1

0x6f42,	// (0x0009afe2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f42,	// (0x0009afe2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f52,	// (0x0009aff2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f52,	// (0x0009aff2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f63,	// (0x0009b003) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f63,	// (0x0009b003) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f73,	// (0x0009b013) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f73,	// (0x0009b013) cell_vitu2_dropdown_list_ctrl_pane_g4

0x631e,	// (0x0009a3be) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x631e,	// (0x0009a3be) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x000a3ac4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x000a3ac4) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f8f,	// (0x0009b02f) aid_size_cell_gallery2_ParamLimits

0x6f8f,	// (0x0009b02f) aid_size_cell_gallery2

0x6fa9,	// (0x0009b049) grid_gallery2_pane_ParamLimits

0x6fa9,	// (0x0009b049) grid_gallery2_pane

0x58ef,	// (0x0009998f) scroll_pane_cp029_ParamLimits

0x58ef,	// (0x0009998f) scroll_pane_cp029

0x6fc0,	// (0x0009b060) cell_gallery2_pane_ParamLimits

0x6fc0,	// (0x0009b060) cell_gallery2_pane

0xd1e8,	// (0x000a1288) cell_gallery2_pane_g2

0x7012,	// (0x0009b0b2) cell_gallery2_pane_g3

0xd1f0,	// (0x000a1290) cell_gallery2_pane_g4

0xd1f8,	// (0x000a1298) cell_gallery2_pane_g5

0xa157,	// (0x0009e1f7) grid_highlight_pane_cp10

0x65ca,	// (0x0009a66a) popup_vitu2_match_list_window_ParamLimits

0x65dc,	// (0x0009a67c) popup_vitu2_query_window_ParamLimits

0x65dc,	// (0x0009a67c) popup_vitu2_query_window

0x11a5,	// (0x00095245) bg_vitu2_candi_button_pane

0xd1cd,	// (0x000a126d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1d6,	// (0x000a1276) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1df,	// (0x000a127f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x701a,	// (0x0009b0ba) bg_button_pane_cp015

0x702c,	// (0x0009b0cc) bg_button_pane_cp016

0x703f,	// (0x0009b0df) bg_button_pane_cp017

0xc0ad,	// (0x000a014d) bg_popup_sub_pane_cp22

0xd200,	// (0x000a12a0) popup_vitu2_query_window_g1

0x7084,	// (0x0009b124) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x000a3acf) popup_vitu2_query_window_g

0x70a1,	// (0x0009b141) popup_vitu2_query_window_t1_ParamLimits

0x70a1,	// (0x0009b141) popup_vitu2_query_window_t1

0x70d4,	// (0x0009b174) popup_vitu2_query_window_t2_ParamLimits

0x70d4,	// (0x0009b174) popup_vitu2_query_window_t2

0x70e6,	// (0x0009b186) popup_vitu2_query_window_t3_ParamLimits

0x70e6,	// (0x0009b186) popup_vitu2_query_window_t3

0x710e,	// (0x0009b1ae) popup_vitu2_query_window_t4_ParamLimits

0x710e,	// (0x0009b1ae) popup_vitu2_query_window_t4

0x712f,	// (0x0009b1cf) popup_vitu2_query_window_t5_ParamLimits

0x712f,	// (0x0009b1cf) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x000a3ad6) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x000a3ad6) popup_vitu2_query_window_t

0xd091,	// (0x000a1131) main_cset_text_pane

0x69ce,	// (0x0009aa6e) aid_area_touch_slider_ParamLimits

0x69ea,	// (0x0009aa8a) cset_slider_pane_ParamLimits

0x6a14,	// (0x0009aab4) main_cset_slider_pane_g1_ParamLimits

0x6a29,	// (0x0009aac9) main_cset_slider_pane_g2_ParamLimits

0xd0b2,	// (0x000a1152) main_cset_slider_pane_g3_ParamLimits

0xd0b2,	// (0x000a1152) main_cset_slider_pane_g3

0x6a3e,	// (0x0009aade) main_cset_slider_pane_g4_ParamLimits

0x6a3e,	// (0x0009aade) main_cset_slider_pane_g4

0x6a4d,	// (0x0009aaed) main_cset_slider_pane_g5_ParamLimits

0x6a4d,	// (0x0009aaed) main_cset_slider_pane_g5

0x6a5b,	// (0x0009aafb) main_cset_slider_pane_g6_ParamLimits

0x6a5b,	// (0x0009aafb) main_cset_slider_pane_g6

0xf989,	// (0x000a3a29) main_cset_slider_pane_g_ParamLimits

0xd0f4,	// (0x000a1194) main_cset_slider_pane_t1_ParamLimits

0x6aef,	// (0x0009ab8f) main_cset_slider_pane_t2_ParamLimits

0x6b09,	// (0x0009aba9) main_cset_slider_pane_t3_ParamLimits

0x6b23,	// (0x0009abc3) main_cset_slider_pane_t4_ParamLimits

0x6b41,	// (0x0009abe1) main_cset_slider_pane_t5_ParamLimits

0x6b5f,	// (0x0009abff) main_cset_slider_pane_t6_ParamLimits

0x6b76,	// (0x0009ac16) main_cset_slider_pane_t7_ParamLimits

0x6ba4,	// (0x0009ac44) main_cset_slider_pane_t8_ParamLimits

0x6ba4,	// (0x0009ac44) main_cset_slider_pane_t8

0x6bcc,	// (0x0009ac6c) main_cset_slider_pane_t9_ParamLimits

0x6bcc,	// (0x0009ac6c) main_cset_slider_pane_t9

0x6bf4,	// (0x0009ac94) main_cset_slider_pane_t10_ParamLimits

0x6bf4,	// (0x0009ac94) main_cset_slider_pane_t10

0x6c1c,	// (0x0009acbc) main_cset_slider_pane_t11_ParamLimits

0x6c1c,	// (0x0009acbc) main_cset_slider_pane_t11

0x6c46,	// (0x0009ace6) main_cset_slider_pane_t12_ParamLimits

0x6c46,	// (0x0009ace6) main_cset_slider_pane_t12

0x6c65,	// (0x0009ad05) main_cset_slider_pane_t13_ParamLimits

0x6c65,	// (0x0009ad05) main_cset_slider_pane_t13

0xf9ae,	// (0x000a3a4e) main_cset_slider_pane_t_ParamLimits

0xea44,	// (0x000a2ae4) bg_popup_sub_pane_cp011

0xd20c,	// (0x000a12ac) main_cset_text_pane_g1

0xd214,	// (0x000a12b4) main_cset_text_pane_t1

0xd222,	// (0x000a12c2) main_cset_text_pane_t2

0xd230,	// (0x000a12d0) main_cset_text_pane_t3

0xd23e,	// (0x000a12de) main_cset_text_pane_t4

0xd24c,	// (0x000a12ec) main_cset_text_pane_t5

0xd25a,	// (0x000a12fa) main_cset_text_pane_t6

0xd268,	// (0x000a1308) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000a3ae5) main_cset_text_pane_t

0x11a5,	// (0x00095245) main_cam4_burst_pane

0x11a5,	// (0x00095245) main_cam5_pane

0x691d,	// (0x0009a9bd) bg_button_pane_cp019

0x6926,	// (0x0009a9c6) bg_button_pane_cp020

0xd0be,	// (0x000a115e) main_cset_slider_pane_g7_ParamLimits

0xd0be,	// (0x000a115e) main_cset_slider_pane_g7

0xd0ca,	// (0x000a116a) main_cset_slider_pane_g8_ParamLimits

0xd0ca,	// (0x000a116a) main_cset_slider_pane_g8

0x6a6f,	// (0x0009ab0f) main_cset_slider_pane_g9_ParamLimits

0x6a6f,	// (0x0009ab0f) main_cset_slider_pane_g9

0x6a7b,	// (0x0009ab1b) main_cset_slider_pane_g10_ParamLimits

0x6a7b,	// (0x0009ab1b) main_cset_slider_pane_g10

0x6a87,	// (0x0009ab27) main_cset_slider_pane_g11_ParamLimits

0x6a87,	// (0x0009ab27) main_cset_slider_pane_g11

0x6a93,	// (0x0009ab33) main_cset_slider_pane_g12_ParamLimits

0x6a93,	// (0x0009ab33) main_cset_slider_pane_g12

0x6a9f,	// (0x0009ab3f) main_cset_slider_pane_g13_ParamLimits

0x6a9f,	// (0x0009ab3f) main_cset_slider_pane_g13

0x6aad,	// (0x0009ab4d) main_cset_slider_pane_g14_ParamLimits

0x6aad,	// (0x0009ab4d) main_cset_slider_pane_g14

0x6abb,	// (0x0009ab5b) main_cset_slider_pane_g15_ParamLimits

0x6abb,	// (0x0009ab5b) main_cset_slider_pane_g15

0xd122,	// (0x000a11c2) main_cset_slider_pane_t14_ParamLimits

0xd122,	// (0x000a11c2) main_cset_slider_pane_t14

0xd15b,	// (0x000a11fb) main_cset_slider_pane_t15_ParamLimits

0xd15b,	// (0x000a11fb) main_cset_slider_pane_t15

0x71a6,	// (0x0009b246) aid_cam4_burst_size_cell_ParamLimits

0x71a6,	// (0x0009b246) aid_cam4_burst_size_cell

0x71c2,	// (0x0009b262) grid_cam4_burst_pane_ParamLimits

0x71c2,	// (0x0009b262) grid_cam4_burst_pane

0x71f2,	// (0x0009b292) linegrid_cam4_burst_pane_ParamLimits

0x71f2,	// (0x0009b292) linegrid_cam4_burst_pane

0x7212,	// (0x0009b2b2) scroll_pane_cp30_ParamLimits

0x7212,	// (0x0009b2b2) scroll_pane_cp30

0x721e,	// (0x0009b2be) cell_cam4_burst_pane_ParamLimits

0x721e,	// (0x0009b2be) cell_cam4_burst_pane

0xd276,	// (0x000a1316) linegrid_cam4_burst_pane_g1_ParamLimits

0xd276,	// (0x000a1316) linegrid_cam4_burst_pane_g1

0x725a,	// (0x0009b2fa) linegrid_cam4_burst_pane_g2_ParamLimits

0x725a,	// (0x0009b2fa) linegrid_cam4_burst_pane_g2

0xd283,	// (0x000a1323) linegrid_cam4_burst_pane_g3_ParamLimits

0xd283,	// (0x000a1323) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000a3af4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000a3af4) linegrid_cam4_burst_pane_g

0x726b,	// (0x0009b30b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x726b,	// (0x0009b30b) linegrid_cam4_burst_pane_g3_copy1

0xd290,	// (0x000a1330) linegrid_cam4_burst_pane_g4_ParamLimits

0xd290,	// (0x000a1330) linegrid_cam4_burst_pane_g4

0x7285,	// (0x0009b325) linegrid_cam4_burst_pane_g5_ParamLimits

0x7285,	// (0x0009b325) linegrid_cam4_burst_pane_g5

0x7296,	// (0x0009b336) linegrid_cam4_burst_pane_g6_ParamLimits

0x7296,	// (0x0009b336) linegrid_cam4_burst_pane_g6

0xd29d,	// (0x000a133d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd29d,	// (0x000a133d) linegrid_cam4_burst_pane_g7

0x72a7,	// (0x0009b347) cell_cam4_burst_pane_g1

0xd2b6,	// (0x000a1356) main_cam5_pane_t1_ParamLimits

0xd2b6,	// (0x000a1356) main_cam5_pane_t1

0xd2c8,	// (0x000a1368) main_cam5_pane_t2_ParamLimits

0xd2c8,	// (0x000a1368) main_cam5_pane_t2

0xd2da,	// (0x000a137a) main_cam5_pane_t3_ParamLimits

0xd2da,	// (0x000a137a) main_cam5_pane_t3

0xd2ec,	// (0x000a138c) main_cam5_pane_t4_ParamLimits

0xd2ec,	// (0x000a138c) main_cam5_pane_t4

0xd304,	// (0x000a13a4) main_cam5_pane_t5_ParamLimits

0xd304,	// (0x000a13a4) main_cam5_pane_t5

0xd318,	// (0x000a13b8) main_cam5_pane_t6_ParamLimits

0xd318,	// (0x000a13b8) main_cam5_pane_t6

0xd32c,	// (0x000a13cc) main_cam5_pane_t7_ParamLimits

0xd32c,	// (0x000a13cc) main_cam5_pane_t7

0xd33e,	// (0x000a13de) main_cam5_pane_t8_ParamLimits

0xd33e,	// (0x000a13de) main_cam5_pane_t8

0xd35a,	// (0x000a13fa) main_cam5_pane_t9_ParamLimits

0xd35a,	// (0x000a13fa) main_cam5_pane_t9

0xd36c,	// (0x000a140c) main_cam5_pane_t10_ParamLimits

0xd36c,	// (0x000a140c) main_cam5_pane_t10

0xd37e,	// (0x000a141e) main_cam5_pane_t11_ParamLimits

0xd37e,	// (0x000a141e) main_cam5_pane_t11

0xd390,	// (0x000a1430) main_cam5_pane_t12_ParamLimits

0xd390,	// (0x000a1430) main_cam5_pane_t12

0xd3a5,	// (0x000a1445) main_cam5_pane_t13_ParamLimits

0xd3a5,	// (0x000a1445) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000a3b00) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000a3b00) main_cam5_pane_t

0x114a,	// (0x000951ea) popup_scut_keymap_window_ParamLimits

0x114a,	// (0x000951ea) popup_scut_keymap_window

0x72ba,	// (0x0009b35a) aid_size_cell_brow_shortcut

0xa157,	// (0x0009e1f7) bg_popup_window_pane_cp010

0x72c6,	// (0x0009b366) grid_scut_pane

0x72d2,	// (0x0009b372) cell_scut_pane_ParamLimits

0x72d2,	// (0x0009b372) cell_scut_pane

0x72e9,	// (0x0009b389) cell_scut_pane_g1

0xd3c2,	// (0x000a1462) cell_scut_pane_t1

0xd3d1,	// (0x000a1471) cell_scut_pane_t2

0x72f2,	// (0x0009b392) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000a3b1b) cell_scut_pane_t

0x50d3,	// (0x00099173) main_mup3_pane_g8_ParamLimits

0x50d3,	// (0x00099173) main_mup3_pane_g8

0x64f0,	// (0x0009a590) area_vitu2_query_pane_ParamLimits

0x64f0,	// (0x0009a590) area_vitu2_query_pane

0x7052,	// (0x0009b0f2) input_focus_pane_cp08

0xd436,	// (0x000a14d6) area_vitu2_query_pane_g1

0x7300,	// (0x0009b3a0) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000a3b22) area_vitu2_query_pane_g

0x7311,	// (0x0009b3b1) area_vitu2_query_pane_t1_ParamLimits

0x7311,	// (0x0009b3b1) area_vitu2_query_pane_t1

0x7325,	// (0x0009b3c5) area_vitu2_query_pane_t2_ParamLimits

0x7325,	// (0x0009b3c5) area_vitu2_query_pane_t2

0x7339,	// (0x0009b3d9) area_vitu2_query_pane_t3_ParamLimits

0x7339,	// (0x0009b3d9) area_vitu2_query_pane_t3

0xd442,	// (0x000a14e2) area_vitu2_query_pane_t4_ParamLimits

0xd442,	// (0x000a14e2) area_vitu2_query_pane_t4

0xd46a,	// (0x000a150a) area_vitu2_query_pane_t5_ParamLimits

0xd46a,	// (0x000a150a) area_vitu2_query_pane_t5

0xd492,	// (0x000a1532) area_vitu2_query_pane_t6_ParamLimits

0xd492,	// (0x000a1532) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000a3b27) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000a3b27) area_vitu2_query_pane_t

0x7361,	// (0x0009b401) bg_button_pane_cp018

0x736f,	// (0x0009b40f) bg_button_pane_cp021

0x737b,	// (0x0009b41b) bg_button_pane_cp022

0x738c,	// (0x0009b42c) input_focus_pane_cp09

0xa9db,	// (0x0009ea7b) aid_size_touch_mv_arrow_left

0xaa06,	// (0x0009eaa6) aid_size_touch_mv_arrow_right

0x6ad3,	// (0x0009ab73) main_cset_slider_pane_g16_ParamLimits

0x6ad3,	// (0x0009ab73) main_cset_slider_pane_g16

0x6ae1,	// (0x0009ab81) main_cset_slider_pane_g17_ParamLimits

0x6ae1,	// (0x0009ab81) main_cset_slider_pane_g17

0x72a7,	// (0x0009b347) cell_cam4_burst_pane_g1_ParamLimits

0xea44,	// (0x000a2ae4) compa_mode_pane

0x6d38,	// (0x0009add8) popup_vtel_slider_window_g3_ParamLimits

0x6d38,	// (0x0009add8) popup_vtel_slider_window_g3

0x6d4c,	// (0x0009adec) popup_vtel_slider_window_g4_ParamLimits

0x6d4c,	// (0x0009adec) popup_vtel_slider_window_g4

0x6d60,	// (0x0009ae00) popup_vtel_slider_window_t1_ParamLimits

0x6d60,	// (0x0009ae00) popup_vtel_slider_window_t1

0x11a5,	// (0x00095245) main_cl_pane

0x442c,	// (0x000984cc) popup_imed_adjust2_window_ParamLimits

0xc0ad,	// (0x000a014d) bg_tb_trans_pane_cp05_ParamLimits

0xca37,	// (0x000a0ad7) popup_imed_adjust2_window_g1_ParamLimits

0xca46,	// (0x000a0ae6) popup_imed_adjust2_window_g2_ParamLimits

0xca46,	// (0x000a0ae6) popup_imed_adjust2_window_g2

0xca52,	// (0x000a0af2) popup_imed_adjust2_window_g3_ParamLimits

0xca52,	// (0x000a0af2) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x000a3892) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x000a3892) popup_imed_adjust2_window_g

0xca5e,	// (0x000a0afe) popup_imed_adjust2_window_t1_ParamLimits

0xca76,	// (0x000a0b16) slider_imed_adjust_pane_ParamLimits

0xca8a,	// (0x000a0b2a) slider_imed_adjust_pane_g1_ParamLimits

0xca9a,	// (0x000a0b3a) slider_imed_adjust_pane_g2_ParamLimits

0xcaaa,	// (0x000a0b4a) slider_imed_adjust_pane_g3_ParamLimits

0xcabb,	// (0x000a0b5b) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x000a3899) slider_imed_adjust_pane_g_ParamLimits

0x6233,	// (0x0009a2d3) aid_touch_area_cam4_ParamLimits

0x6233,	// (0x0009a2d3) aid_touch_area_cam4

0x6243,	// (0x0009a2e3) battery_pane_cp01

0x62ca,	// (0x0009a36a) main_camera4_pane_g6_ParamLimits

0x62ca,	// (0x0009a36a) main_camera4_pane_g6

0x62e8,	// (0x0009a388) main_camera4_pane_t2_ParamLimits

0x62e8,	// (0x0009a388) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x000a399c) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x000a399c) main_camera4_pane_t

0x6377,	// (0x0009a417) aid_touch_area_vid4_ParamLimits

0x6377,	// (0x0009a417) aid_touch_area_vid4

0x63b7,	// (0x0009a457) main_video4_pane_g5_ParamLimits

0x63b7,	// (0x0009a457) main_video4_pane_g5

0x63db,	// (0x0009a47b) vid4_progress_pane_ParamLimits

0x63db,	// (0x0009a47b) vid4_progress_pane

0xd0e8,	// (0x000a1188) main_cset_slider_pane_g18_ParamLimits

0xd0e8,	// (0x000a1188) main_cset_slider_pane_g18

0xd2aa,	// (0x000a134a) cell_cam4_burst_pane_g2_ParamLimits

0xd2aa,	// (0x000a134a) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000a3afb) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000a3afb) cell_cam4_burst_pane_g

0x739d,	// (0x0009b43d) bg_cl_pane_ParamLimits

0x739d,	// (0x0009b43d) bg_cl_pane

0x73a9,	// (0x0009b449) cl_header_pane_ParamLimits

0x73a9,	// (0x0009b449) cl_header_pane

0x73b5,	// (0x0009b455) cl_listscroll_pane_ParamLimits

0x73b5,	// (0x0009b455) cl_listscroll_pane

0xd4de,	// (0x000a157e) bg_cl_pane_g1

0xd4e6,	// (0x000a1586) bg_cl_pane_g2

0xd4ee,	// (0x000a158e) bg_cl_pane_g3

0xd4f6,	// (0x000a1596) bg_cl_pane_g4

0xd4fe,	// (0x000a159e) bg_cl_pane_g5

0xd506,	// (0x000a15a6) bg_cl_pane_g6

0xd50e,	// (0x000a15ae) bg_cl_pane_g7

0xd516,	// (0x000a15b6) bg_cl_pane_g8

0xd51e,	// (0x000a15be) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000a3b36) bg_cl_pane_g

0x73c1,	// (0x0009b461) aid_height_cl_leading_ParamLimits

0x73c1,	// (0x0009b461) aid_height_cl_leading

0x73cd,	// (0x0009b46d) aid_height_cl_text_ParamLimits

0x73cd,	// (0x0009b46d) aid_height_cl_text

0xea8f,	// (0x000a2b2f) bg_cl_header_pane_ParamLimits

0xea8f,	// (0x000a2b2f) bg_cl_header_pane

0x73e5,	// (0x0009b485) cl_header_pane_g1_ParamLimits

0x73e5,	// (0x0009b485) cl_header_pane_g1

0x73f2,	// (0x0009b492) cl_header_pane_t1_ParamLimits

0x73f2,	// (0x0009b492) cl_header_pane_t1

0xd526,	// (0x000a15c6) cl_list_pane

0xd0a9,	// (0x000a1149) hc_scroll_pane_cp01

0xa390,	// (0x0009e430) bg_cl_header_pane_g1

0xcf8f,	// (0x000a102f) bg_cl_header_pane_g2

0xa3b0,	// (0x0009e450) bg_cl_header_pane_g3

0xcf9f,	// (0x000a103f) bg_cl_header_pane_g4

0xcf97,	// (0x000a1037) bg_cl_header_pane_g5

0xd1c5,	// (0x000a1265) bg_cl_header_pane_g6

0xcfb7,	// (0x000a1057) bg_cl_header_pane_g7

0xcfbf,	// (0x000a105f) bg_cl_header_pane_g8

0xcfaf,	// (0x000a104f) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x000a3b49) bg_cl_header_pane_g

0x7404,	// (0x0009b4a4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7404,	// (0x0009b4a4) hc_cl_list_double_graphic_heading_pane

0x7418,	// (0x0009b4b8) hc_cl_list_single_graphic_pane_ParamLimits

0x7418,	// (0x0009b4b8) hc_cl_list_single_graphic_pane

0x7432,	// (0x0009b4d2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7432,	// (0x0009b4d2) hc_cl_list_single_graphic_pane_g1

0x743e,	// (0x0009b4de) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x743e,	// (0x0009b4de) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x000a3b5c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x000a3b5c) hc_cl_list_single_graphic_pane_g

0x7452,	// (0x0009b4f2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7452,	// (0x0009b4f2) hc_cl_list_single_graphic_pane_t1

0x7432,	// (0x0009b4d2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7432,	// (0x0009b4d2) hc_cl_list_double_graphic_heading_pane_g1

0x7467,	// (0x0009b507) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7467,	// (0x0009b507) hc_cl_list_double_graphic_heading_pane_g2

0x747b,	// (0x0009b51b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x747b,	// (0x0009b51b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x000a3b61) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x000a3b61) hc_cl_list_double_graphic_heading_pane_g

0x748f,	// (0x0009b52f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x748f,	// (0x0009b52f) hc_cl_list_double_graphic_heading_pane_t1

0x74a4,	// (0x0009b544) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74a4,	// (0x0009b544) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x000a3b68) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x000a3b68) hc_cl_list_double_graphic_heading_pane_t

0x74c1,	// (0x0009b561) vid4_progress_pane_g1

0x74d1,	// (0x0009b571) vid4_progress_pane_g2

0x74e1,	// (0x0009b581) vid4_progress_pane_g3

0x74f3,	// (0x0009b593) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x000a3b6d) vid4_progress_pane_g

0x750b,	// (0x0009b5ab) vid4_progress_pane_t1

0x7521,	// (0x0009b5c1) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x000a3b78) vid4_progress_pane_t

0x754c,	// (0x0009b5ec) wait_bar_pane_cp07

0xc2a8,	// (0x000a0348) blid_firmament_pane_ParamLimits

0xc2eb,	// (0x000a038b) popup_blid_sat_info2_window_g1

0xc30f,	// (0x000a03af) popup_blid_sat_info2_window_t3

0xc31d,	// (0x000a03bd) popup_blid_sat_info2_window_t4

0xc32b,	// (0x000a03cb) popup_blid_sat_info2_window_t5

0xc339,	// (0x000a03d9) popup_blid_sat_info2_window_t6

0xc349,	// (0x000a03e9) popup_blid_sat_info2_window_t7

0xc357,	// (0x000a03f7) popup_blid_sat_info2_window_t8

0xc365,	// (0x000a0405) popup_blid_sat_info2_window_t9

0xc373,	// (0x000a0413) popup_blid_sat_info2_window_t10

0xc435,	// (0x000a04d5) aid_firma_cardinal_ParamLimits

0xc449,	// (0x000a04e9) blid_firmament_pane_t1_ParamLimits

0xc460,	// (0x000a0500) blid_firmament_pane_t2_ParamLimits

0xc477,	// (0x000a0517) blid_firmament_pane_t3_ParamLimits

0xc48e,	// (0x000a052e) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x000a3786) blid_firmament_pane_t_ParamLimits

0xc4a5,	// (0x000a0545) blid_sat_info_pane_ParamLimits

0x4392,	// (0x00098432) main_cam_set_pane_ParamLimits

0x5888,	// (0x00099928) aid_size_cell_colour_35_ParamLimits

0x58a2,	// (0x00099942) aid_size_cell_colour_112_ParamLimits

0x58b9,	// (0x00099959) aid_size_cell_effect_ParamLimits

0xea81,	// (0x000a2b21) bg_tb_trans_pane_cp02_ParamLimits

0xb829,	// (0x0009f8c9) heading_imed_pane_ParamLimits

0x58d3,	// (0x00099973) listscroll_imed_pane_ParamLimits

0xb5bd,	// (0x0009f65d) popup_call2_audio_first_window_g5_ParamLimits

0xb5bd,	// (0x0009f65d) popup_call2_audio_first_window_g5

0x5fe2,	// (0x0009a082) aid_size_touch_image3_arrow_left_ParamLimits

0x5fe2,	// (0x0009a082) aid_size_touch_image3_arrow_left

0x5ff8,	// (0x0009a098) aid_size_touch_image3_arrow_right_ParamLimits

0x5ff8,	// (0x0009a098) aid_size_touch_image3_arrow_right

0x7536,	// (0x0009b5d6) vid4_progress_pane_t3

0x5b73,	// (0x00099c13) main_hwr_training_symbol_option_pane_ParamLimits

0x5b73,	// (0x00099c13) main_hwr_training_symbol_option_pane

0xcd24,	// (0x000a0dc4) popup_hwr_training_preview_window_ParamLimits

0xcd24,	// (0x000a0dc4) popup_hwr_training_preview_window

0x5bd4,	// (0x00099c74) hwr_training_navi_pane_g5_ParamLimits

0x5bd4,	// (0x00099c74) hwr_training_navi_pane_g5

0xcf7d,	// (0x000a101d) popup_char_count_window

0x118b,	// (0x0009522b) bg_popup_sub_pane_cp20_ParamLimits

0x6e5f,	// (0x0009aeff) list_vitu2_match_list_pane_ParamLimits

0x6e6b,	// (0x0009af0b) vitu2_page_scroll_pane_ParamLimits

0x6e6b,	// (0x0009af0b) vitu2_page_scroll_pane

0xd537,	// (0x000a15d7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd537,	// (0x000a15d7) list_single_hwr_training_symbol_option_pane

0xd54a,	// (0x000a15ea) list_single_hwr_training_symbol_option_pane_g1

0xd552,	// (0x000a15f2) list_single_hwr_training_symbol_option_pane_t1

0xd560,	// (0x000a1600) bg_button_pane_cp023

0xd569,	// (0x000a1609) bg_button_pane_cp024

0x7595,	// (0x0009b635) vitu2_page_scroll_pane_g1

0x759d,	// (0x0009b63d) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x000a3b7f) vitu2_page_scroll_pane_g

0x75a5,	// (0x0009b645) vitu2_page_scroll_pane_t1

0xc4de,	// (0x000a057e) popup_char_count_window_g1

0xd59c,	// (0x000a163c) popup_char_count_window_g2

0xd5a5,	// (0x000a1645) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x000a3b84) popup_char_count_window_g

0xd5ae,	// (0x000a164e) popup_char_count_window_t1

0x11a5,	// (0x00095245) main_vded2_pane

0xca23,	// (0x000a0ac3) aid_size_cell_imed_line

0xca2d,	// (0x000a0acd) grid_imed_line_width_pane

0x6447,	// (0x0009a4e7) vid4_indicators_pane_g4

0xd5bc,	// (0x000a165c) cell_imed_line_width_pane_ParamLimits

0xd5bc,	// (0x000a165c) cell_imed_line_width_pane

0xd5d0,	// (0x000a1670) cell_imed_line_width_pane_g1

0xd416,	// (0x000a14b6) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x000a3b8b) cell_imed_line_width_pane_g

0x75b4,	// (0x0009b654) main_vded2_pane_g1_ParamLimits

0x75b4,	// (0x0009b654) main_vded2_pane_g1

0x75c1,	// (0x0009b661) main_vded2_pane_g2_ParamLimits

0x75c1,	// (0x0009b661) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x000a3b90) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x000a3b90) main_vded2_pane_g

0x75cf,	// (0x0009b66f) vded2_slider_pane_ParamLimits

0x75cf,	// (0x0009b66f) vded2_slider_pane

0x75dc,	// (0x0009b67c) aid_size_touch_vded2_end

0x75e6,	// (0x0009b686) aid_size_touch_vded2_playhead

0xd5d9,	// (0x000a1679) aid_size_touch_vded2_start

0xd5e1,	// (0x000a1681) vded2_slider_bg_pane

0xd5ea,	// (0x000a168a) vded2_slider_pane_g1

0xd5f3,	// (0x000a1693) vded2_slider_pane_g2

0x75ee,	// (0x0009b68e) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x000a3b95) vded2_slider_pane_g

0xd5fb,	// (0x000a169b) vded2_slider_bg_pane_g1

0xd604,	// (0x000a16a4) vded2_slider_bg_pane_g2

0xd60d,	// (0x000a16ad) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x000a3b9c) vded2_slider_bg_pane_g

0x3c75,	// (0x00097d15) aid_postcard_touch_down_pane_ParamLimits

0x3c75,	// (0x00097d15) aid_postcard_touch_down_pane

0x3c85,	// (0x00097d25) aid_postcard_touch_up_pane_ParamLimits

0x3c85,	// (0x00097d25) aid_postcard_touch_up_pane

0x11a5,	// (0x00095245) main_blid2_pane

0x43bb,	// (0x0009845b) popup_blid2_search_window

0xea44,	// (0x000a2ae4) blid2_gps_pane

0xea44,	// (0x000a2ae4) blid2_navig_pane

0xea44,	// (0x000a2ae4) blid2_search_pane

0xea44,	// (0x000a2ae4) blid2_tripm_pane

0x75f7,	// (0x0009b697) blid2_search_pane_g1_ParamLimits

0x75f7,	// (0x0009b697) blid2_search_pane_g1

0x7607,	// (0x0009b6a7) blid2_search_pane_t1_ParamLimits

0x7607,	// (0x0009b6a7) blid2_search_pane_t1

0x7619,	// (0x0009b6b9) aid_size_cell_blid2_gps_ParamLimits

0x7619,	// (0x0009b6b9) aid_size_cell_blid2_gps

0x7629,	// (0x0009b6c9) blid2_gps_pane_g1_ParamLimits

0x7629,	// (0x0009b6c9) blid2_gps_pane_g1

0x7635,	// (0x0009b6d5) grid_blid2_satellite_pane_ParamLimits

0x7635,	// (0x0009b6d5) grid_blid2_satellite_pane

0x7645,	// (0x0009b6e5) blid2_navig_pane_g1_ParamLimits

0x7645,	// (0x0009b6e5) blid2_navig_pane_g1

0x7651,	// (0x0009b6f1) blid2_navig_pane_t1_ParamLimits

0x7651,	// (0x0009b6f1) blid2_navig_pane_t1

0x7663,	// (0x0009b703) blid2_navig_pane_t2_ParamLimits

0x7663,	// (0x0009b703) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x000a3ba3) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x000a3ba3) blid2_navig_pane_t

0x7675,	// (0x0009b715) blid2_navig_ring_pane_ParamLimits

0x7675,	// (0x0009b715) blid2_navig_ring_pane

0x7685,	// (0x0009b725) blid2_speed_pane_ParamLimits

0x7685,	// (0x0009b725) blid2_speed_pane

0x7691,	// (0x0009b731) blid2_tripm_pane_g1_ParamLimits

0x7691,	// (0x0009b731) blid2_tripm_pane_g1

0x76a1,	// (0x0009b741) blid2_tripm_pane_g2_ParamLimits

0x76a1,	// (0x0009b741) blid2_tripm_pane_g2

0x76ad,	// (0x0009b74d) blid2_tripm_pane_g3_ParamLimits

0x76ad,	// (0x0009b74d) blid2_tripm_pane_g3

0x76b9,	// (0x0009b759) blid2_tripm_pane_g4_ParamLimits

0x76b9,	// (0x0009b759) blid2_tripm_pane_g4

0x76c5,	// (0x0009b765) blid2_tripm_pane_g5_ParamLimits

0x76c5,	// (0x0009b765) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x000a3ba8) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x000a3ba8) blid2_tripm_pane_g

0x76e1,	// (0x0009b781) blid2_tripm_pane_t1_ParamLimits

0x76e1,	// (0x0009b781) blid2_tripm_pane_t1

0x76f5,	// (0x0009b795) blid2_tripm_pane_t2_ParamLimits

0x76f5,	// (0x0009b795) blid2_tripm_pane_t2

0x7707,	// (0x0009b7a7) blid2_tripm_pane_t3_ParamLimits

0x7707,	// (0x0009b7a7) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x000a3bb5) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x000a3bb5) blid2_tripm_pane_t

0x7739,	// (0x0009b7d9) cell_blid2_satellite_pane_ParamLimits

0x7739,	// (0x0009b7d9) cell_blid2_satellite_pane

0x7753,	// (0x0009b7f3) cell_blid2_satellite_pane_g1

0xd616,	// (0x000a16b6) cell_blid2_satellite_pane_t1

0xc4b5,	// (0x000a0555) blid2_speed_pane_g1

0xd624,	// (0x000a16c4) blid2_speed_pane_t1

0xd632,	// (0x000a16d2) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x000a3bbe) blid2_speed_pane_t

0xc4b5,	// (0x000a0555) blid2_navig_ring_pane_g1

0x775c,	// (0x0009b7fc) blid2_navig_ring_pane_g2

0x7764,	// (0x0009b804) blid2_navig_ring_pane_g3

0x776c,	// (0x0009b80c) blid2_navig_ring_pane_g4

0x7774,	// (0x0009b814) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x000a3bc3) blid2_navig_ring_pane_g

0xea44,	// (0x000a2ae4) bg_popup_window_pane_cp011

0xd640,	// (0x000a16e0) popup_blid2_search_window_g1

0xd648,	// (0x000a16e8) popup_blid2_search_window_t1

0xd656,	// (0x000a16f6) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x000a3bce) popup_blid2_search_window_t

0xa29f,	// (0x0009e33f) main_browser_pane_g1

0x9f80,	// (0x0009e020) main_browser_pane_ParamLimits

0x4392,	// (0x00098432) bg_button_pane_cp011_ParamLimits

0x66f0,	// (0x0009a790) cell_vitu2_function_pane_g1_ParamLimits

0xc0ad,	// (0x000a014d) bg_popup_sub_pane_cp22_ParamLimits

0x7052,	// (0x0009b0f2) input_focus_pane_cp08_ParamLimits

0x7069,	// (0x0009b109) popup_vitu2_query_button_pane_ParamLimits

0x7069,	// (0x0009b109) popup_vitu2_query_button_pane

0x707a,	// (0x0009b11a) popup_vitu2_query_input_button_pane

0xd200,	// (0x000a12a0) popup_vitu2_query_window_g1_ParamLimits

0x7084,	// (0x0009b124) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x000a3acf) popup_vitu2_query_window_g_ParamLimits

0xea44,	// (0x000a2ae4) bg_button_pane_cp026

0x777c,	// (0x0009b81c) popup_vitu2_query_input_button_pane_g1

0xea44,	// (0x000a2ae4) bg_button_pane_cp025

0xd664,	// (0x000a1704) popup_vitu2_query_button_pane_t1

0x4e13,	// (0x00098eb3) main_mp3_pane_t6

0x4e23,	// (0x00098ec3) popup_slider_window_cp01

0x632c,	// (0x0009a3cc) cam4_battery_pane

0x6406,	// (0x0009a4a6) cam4_battery_pane_cp02

0x74b9,	// (0x0009b559) cam4_battery_pane_cp01

0x74b9,	// (0x0009b559) cam4_battery_pane_cp03

0xd41e,	// (0x000a14be) cam4_battery_pane_g1

0xc4b5,	// (0x000a0555) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x000a3bd3) cam4_battery_pane_g

0xc381,	// (0x000a0421) popup_blid_sat_info2_window_t11

0xa9db,	// (0x0009ea7b) aid_size_touch_mv_arrow_left_ParamLimits

0xaa06,	// (0x0009eaa6) aid_size_touch_mv_arrow_right_ParamLimits

0xaa64,	// (0x0009eb04) navi_pane_g1_ParamLimits

0xaa70,	// (0x0009eb10) navi_pane_g2_ParamLimits

0xaa9e,	// (0x0009eb3e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a3485) navi_pane_g_ParamLimits

0x3691,	// (0x00097731) navi_pane_mv_t1_ParamLimits

0x58df,	// (0x0009997f) grid_imed_effect_pane_ParamLimits

0x200d,	// (0x000960ad) aid_placing_vt_slider_lsc

0xa1ee,	// (0x0009e28e) aid_placing_vt_slider_prt

0xea81,	// (0x000a2b21) bg_tb_trans_pane_cp01_ParamLimits

0xc623,	// (0x000a06c3) popup_image_details_window_g1_ParamLimits

0xc636,	// (0x000a06d6) popup_image_details_window_g2_ParamLimits

0xc64b,	// (0x000a06eb) popup_image_details_window_g3_ParamLimits

0xc64b,	// (0x000a06eb) popup_image_details_window_g3

0xf72b,	// (0x000a37cb) popup_image_details_window_g_ParamLimits

0xc65f,	// (0x000a06ff) popup_image_details_window_t1_ParamLimits

0xc671,	// (0x000a0711) popup_image_details_window_t2_ParamLimits

0xc68a,	// (0x000a072a) popup_image_details_window_t3_ParamLimits

0xc69e,	// (0x000a073e) popup_image_details_window_t4_ParamLimits

0xc6b9,	// (0x000a0759) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x000a37d2) popup_image_details_window_t_ParamLimits

0x73d9,	// (0x0009b479) cl_header_name_pane_ParamLimits

0x73d9,	// (0x0009b479) cl_header_name_pane

0x7784,	// (0x0009b824) cl_header_name_pane_t1_ParamLimits

0x7784,	// (0x0009b824) cl_header_name_pane_t1

0x779b,	// (0x0009b83b) cl_header_name_pane_t2_ParamLimits

0x779b,	// (0x0009b83b) cl_header_name_pane_t2

0x77c5,	// (0x0009b865) cl_header_name_pane_t3_ParamLimits

0x77c5,	// (0x0009b865) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x000a3bd8) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x000a3bd8) cl_header_name_pane_t

0xab2d,	// (0x0009ebcd) navi_pane_mv_g2_ParamLimits

0xcf3a,	// (0x000a0fda) field_vitu2_entry_pane_g1_ParamLimits

0xcf46,	// (0x000a0fe6) field_vitu2_entry_pane_g2_ParamLimits

0xcf52,	// (0x000a0ff2) field_vitu2_entry_pane_g3_ParamLimits

0xcf52,	// (0x000a0ff2) field_vitu2_entry_pane_g3

0xf92e,	// (0x000a39ce) field_vitu2_entry_pane_g_ParamLimits

0x6684,	// (0x0009a724) cell_vitu2_itu_pane_g1_ParamLimits

0x6696,	// (0x0009a736) cell_vitu2_itu_pane_g2_ParamLimits

0x6696,	// (0x0009a736) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000a39da) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000a39da) cell_vitu2_itu_pane_g

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp05_ParamLimits

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp05

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp03

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp04

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp10_ParamLimits

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp10

0x737b,	// (0x0009b41b) bg_vkb2_func_pane_cp08

0x7361,	// (0x0009b401) bg_vkb2_func_pane_cp06

0x736f,	// (0x0009b40f) bg_vkb2_func_pane_cp07

0xd572,	// (0x000a1612) bg_vkb2_func_pane_cp11_ParamLimits

0xd572,	// (0x000a1612) bg_vkb2_func_pane_cp11

0xd587,	// (0x000a1627) bg_vkb2_func_pane_cp12_ParamLimits

0xd587,	// (0x000a1627) bg_vkb2_func_pane_cp12

0xea44,	// (0x000a2ae4) bg_vkb2_func_pane_cp09

0xcf8f,	// (0x000a102f) bg_vkb2_func_pane_g1

0xa3b0,	// (0x0009e450) bg_vkb2_func_pane_g2

0xcf97,	// (0x000a1037) bg_vkb2_func_pane_g3

0xcf9f,	// (0x000a103f) bg_vkb2_func_pane_g4

0xd1c5,	// (0x000a1265) bg_vkb2_func_pane_g5

0xcfb7,	// (0x000a1057) bg_vkb2_func_pane_g6

0xcfbf,	// (0x000a105f) bg_vkb2_func_pane_g7

0xcfaf,	// (0x000a104f) bg_vkb2_func_pane_g8

0xa390,	// (0x0009e430) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000a3bdf) bg_vkb2_func_pane_g

0x76d3,	// (0x0009b773) blid2_tripm_pane_g6_ParamLimits

0x76d3,	// (0x0009b773) blid2_tripm_pane_g6

0xcddc,	// (0x000a0e7c) mp4_progress_pane_g1

0x772d,	// (0x0009b7cd) blid2_tripm_values_pane_ParamLimits

0x772d,	// (0x0009b7cd) blid2_tripm_values_pane

0x77ea,	// (0x0009b88a) blid2_tripm_values_pane_t1

0x77f8,	// (0x0009b898) blid2_tripm_values_pane_t2

0x7806,	// (0x0009b8a6) blid2_tripm_values_pane_t3

0x7814,	// (0x0009b8b4) blid2_tripm_values_pane_t4

0x7822,	// (0x0009b8c2) blid2_tripm_values_pane_t5

0x7830,	// (0x0009b8d0) blid2_tripm_values_pane_t6

0x783e,	// (0x0009b8de) blid2_tripm_values_pane_t7

0x784c,	// (0x0009b8ec) blid2_tripm_values_pane_t8

0x785a,	// (0x0009b8fa) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000a3bf2) blid2_tripm_values_pane_t

0x204d,	// (0x000960ed) call_video_pane_t1_ParamLimits

0x206e,	// (0x0009610e) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a330e) call_video_pane_t_ParamLimits

0x3bbf,	// (0x00097c5f) msg_header_pane_g1_ParamLimits

0xad07,	// (0x0009eda7) msg_header_pane_g2_ParamLimits

0xad07,	// (0x0009eda7) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a3528) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a3528) msg_header_pane_g

0x9f80,	// (0x0009e020) main_clock2_pane_ParamLimits

0x5673,	// (0x00099713) grid_clock2_toolbar_pane_ParamLimits

0x5673,	// (0x00099713) grid_clock2_toolbar_pane

0x5673,	// (0x00099713) listscroll_clock2_pane_ParamLimits

0x5673,	// (0x00099713) listscroll_clock2_pane

0x571d,	// (0x000997bd) main_clock2_pane_t3_ParamLimits

0x571d,	// (0x000997bd) main_clock2_pane_t3

0x572f,	// (0x000997cf) main_clock2_pane_t4_ParamLimits

0x572f,	// (0x000997cf) main_clock2_pane_t4

0xd672,	// (0x000a1712) cell_clock2_toolbar_pane

0xd67a,	// (0x000a171a) cell_clock2_toolbar_pane_cp01

0xd67a,	// (0x000a171a) cell_clock2_toolbar_pane_cp02

0xd682,	// (0x000a1722) cell_clock2_toolbar_pane_cp03

0xd68a,	// (0x000a172a) list_clock2_pane

0xa960,	// (0x0009ea00) scroll_pane_cp10

0xd692,	// (0x000a1732) list_single_clock2_pane_ParamLimits

0xd692,	// (0x000a1732) list_single_clock2_pane

0xa157,	// (0x0009e1f7) list_highlight_pane_cp08

0xd69f,	// (0x000a173f) list_single_clock2_pane_t1

0xd6ad,	// (0x000a174d) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000a3c05) list_single_clock2_pane_t

0xea44,	// (0x000a2ae4) bg_button_pane_cp10

0xd6bb,	// (0x000a175b) cell_clock2_toolbar_pane_g1

0x3be3,	// (0x00097c83) aid_main_viewer_pane_g1_ParamLimits

0x3be3,	// (0x00097c83) aid_main_viewer_pane_g1

0x3bef,	// (0x00097c8f) aid_main_viewer_pane_g2_ParamLimits

0x3bef,	// (0x00097c8f) aid_main_viewer_pane_g2

0x3bfb,	// (0x00097c9b) aid_main_viewer_pane_g3_ParamLimits

0x3bfb,	// (0x00097c9b) aid_main_viewer_pane_g3

0x3c0c,	// (0x00097cac) aid_main_viewer_pane_g4_ParamLimits

0x3c0c,	// (0x00097cac) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a3539) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a3539) aid_main_viewer_pane_g

0x4385,	// (0x00098425) main_calc_pane_ParamLimits

0x43a0,	// (0x00098440) main_dialer2_pane_ParamLimits

0x11a5,	// (0x00095245) main_cam6_pane

0x11a5,	// (0x00095245) main_vid6_pane

0x567f,	// (0x0009971f) listscroll_gen_pane_cp06_ParamLimits

0x567f,	// (0x0009971f) listscroll_gen_pane_cp06

0x5741,	// (0x000997e1) main_clock2_pane_t5_ParamLimits

0x5741,	// (0x000997e1) main_clock2_pane_t5

0x578a,	// (0x0009982a) aid_call2_pane_cp10_ParamLimits

0x579c,	// (0x0009983c) aid_call_pane_cp10_ParamLimits

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57ae,	// (0x0009984e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57ae,	// (0x0009984e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9cf,	// (0x0009ea6f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x000a3887) popup_clock_analogue_window_cp10_g_ParamLimits

0x57c0,	// (0x00099860) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f8f,	// (0x0009a02f) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f8f,	// (0x0009a02f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x000a396d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x000a396d) cell_dialer2_keypad_pane_g

0x5fab,	// (0x0009a04b) cell_dialer2_keypad_pane_t1

0x69bb,	// (0x0009aa5b) main_cset_text2_pane_ParamLimits

0x69bb,	// (0x0009aa5b) main_cset_text2_pane

0xd436,	// (0x000a14d6) area_vitu2_query_pane_g1_ParamLimits

0x7300,	// (0x0009b3a0) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000a3b22) area_vitu2_query_pane_g_ParamLimits

0xd4ba,	// (0x000a155a) area_vitu2_query_pane_t7_ParamLimits

0xd4ba,	// (0x000a155a) area_vitu2_query_pane_t7

0x7361,	// (0x0009b401) bg_button_pane_cp018_ParamLimits

0x736f,	// (0x0009b40f) bg_button_pane_cp021_ParamLimits

0x737b,	// (0x0009b41b) bg_button_pane_cp022_ParamLimits

0x737b,	// (0x0009b41b) bg_vkb2_func_pane_cp08_ParamLimits

0x7361,	// (0x0009b401) bg_vkb2_func_pane_cp06_ParamLimits

0x736f,	// (0x0009b40f) bg_vkb2_func_pane_cp07_ParamLimits

0x738c,	// (0x0009b42c) input_focus_pane_cp09_ParamLimits

0x7868,	// (0x0009b908) cam6_autofocus_pane_ParamLimits

0x7868,	// (0x0009b908) cam6_autofocus_pane

0x788a,	// (0x0009b92a) cam6_image_uncrop_pane_ParamLimits

0x788a,	// (0x0009b92a) cam6_image_uncrop_pane

0x78b7,	// (0x0009b957) cam6_indi_pane_ParamLimits

0x78b7,	// (0x0009b957) cam6_indi_pane

0x78d1,	// (0x0009b971) cam6_mode_pane_ParamLimits

0x78d1,	// (0x0009b971) cam6_mode_pane

0x78e5,	// (0x0009b985) cam6_timer_pane_ParamLimits

0x78e5,	// (0x0009b985) cam6_timer_pane

0x78f6,	// (0x0009b996) cam6_zoom_pane_ParamLimits

0x78f6,	// (0x0009b996) cam6_zoom_pane

0x790e,	// (0x0009b9ae) cam6_mode_pane_g1_ParamLimits

0x790e,	// (0x0009b9ae) cam6_mode_pane_g1

0x791a,	// (0x0009b9ba) cam6_mode_pane_g2_ParamLimits

0x791a,	// (0x0009b9ba) cam6_mode_pane_g2

0x7926,	// (0x0009b9c6) cam6_mode_pane_g3_ParamLimits

0x7926,	// (0x0009b9c6) cam6_mode_pane_g3

0x7932,	// (0x0009b9d2) cam6_mode_pane_g4_ParamLimits

0x7932,	// (0x0009b9d2) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000a3c0a) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000a3c0a) cam6_mode_pane_g

0xd428,	// (0x000a14c8) bg_tb_trans_pane_cp08_ParamLimits

0xd428,	// (0x000a14c8) bg_tb_trans_pane_cp08

0xd6c3,	// (0x000a1763) cam6_battery_pane_ParamLimits

0xd6c3,	// (0x000a1763) cam6_battery_pane

0xd6d9,	// (0x000a1779) cam6_indi_pane_g1_ParamLimits

0xd6d9,	// (0x000a1779) cam6_indi_pane_g1

0xd6eb,	// (0x000a178b) cam6_indi_pane_g2_ParamLimits

0xd6eb,	// (0x000a178b) cam6_indi_pane_g2

0xd6fd,	// (0x000a179d) cam6_indi_pane_g3_ParamLimits

0xd6fd,	// (0x000a179d) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000a3c13) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000a3c13) cam6_indi_pane_g

0xd70f,	// (0x000a17af) cam6_indi_pane_t1_ParamLimits

0xd70f,	// (0x000a17af) cam6_indi_pane_t1

0x6482,	// (0x0009a522) cam6_autofocus_pane_g1

0x647a,	// (0x0009a51a) cam6_autofocus_pane_g2

0x6492,	// (0x0009a532) cam6_autofocus_pane_g3

0x648a,	// (0x0009a52a) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000a3c1a) cam6_autofocus_pane_g

0xd735,	// (0x000a17d5) cam6_timer_pane_g1

0xd73d,	// (0x000a17dd) cam6_timer_pane_t1

0xd74b,	// (0x000a17eb) cam6_zoom_cont_pane

0xd753,	// (0x000a17f3) cam6_zoom_pane_g1

0xd75b,	// (0x000a17fb) cam6_zoom_pane_g2

0x793e,	// (0x0009b9de) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000a3c23) cam6_zoom_pane_g

0xc4b5,	// (0x000a0555) cam6_battery_pane_g1

0xc4b5,	// (0x000a0555) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x000a378f) cam6_battery_pane_g

0xd763,	// (0x000a1803) cam6_zoom_cont_pane_g1

0xd76c,	// (0x000a180c) cam6_zoom_cont_pane_g2

0xd775,	// (0x000a1815) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000a3c2a) cam6_zoom_cont_pane_g

0x795b,	// (0x0009b9fb) cam6_mode_pane_cp_ParamLimits

0x795b,	// (0x0009b9fb) cam6_mode_pane_cp

0x796f,	// (0x0009ba0f) cam6_zoom_pane_cp_ParamLimits

0x796f,	// (0x0009ba0f) cam6_zoom_pane_cp

0x7987,	// (0x0009ba27) vid6_image_uncrop_cif_pane_ParamLimits

0x7987,	// (0x0009ba27) vid6_image_uncrop_cif_pane

0x79b3,	// (0x0009ba53) vid6_image_uncrop_nhd_pane_ParamLimits

0x79b3,	// (0x0009ba53) vid6_image_uncrop_nhd_pane

0x79d0,	// (0x0009ba70) vid6_image_uncrop_vga_pane_ParamLimits

0x79d0,	// (0x0009ba70) vid6_image_uncrop_vga_pane

0x79ef,	// (0x0009ba8f) vid6_image_uncrop_wvga_pane_ParamLimits

0x79ef,	// (0x0009ba8f) vid6_image_uncrop_wvga_pane

0x7a0c,	// (0x0009baac) vid6_indi_pane_ParamLimits

0x7a0c,	// (0x0009baac) vid6_indi_pane

0xd428,	// (0x000a14c8) bg_tb_trans_pane_cp09_ParamLimits

0xd428,	// (0x000a14c8) bg_tb_trans_pane_cp09

0xd78d,	// (0x000a182d) cam6_battery_pane_cp_ParamLimits

0xd78d,	// (0x000a182d) cam6_battery_pane_cp

0xd799,	// (0x000a1839) vid6_indi_pane_g1_ParamLimits

0xd799,	// (0x000a1839) vid6_indi_pane_g1

0xd7ab,	// (0x000a184b) vid6_indi_pane_g2_ParamLimits

0xd7ab,	// (0x000a184b) vid6_indi_pane_g2

0xd7bd,	// (0x000a185d) vid6_indi_pane_g3_ParamLimits

0xd7bd,	// (0x000a185d) vid6_indi_pane_g3

0xd7d2,	// (0x000a1872) vid6_indi_pane_g4_ParamLimits

0xd7d2,	// (0x000a1872) vid6_indi_pane_g4

0xd7e7,	// (0x000a1887) vid6_indi_pane_g5_ParamLimits

0xd7e7,	// (0x000a1887) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000a3c31) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000a3c31) vid6_indi_pane_g

0xd801,	// (0x000a18a1) vid6_indi_pane_t1_ParamLimits

0xd801,	// (0x000a18a1) vid6_indi_pane_t1

0xd817,	// (0x000a18b7) vid6_indi_pane_t2_ParamLimits

0xd817,	// (0x000a18b7) vid6_indi_pane_t2

0xd83f,	// (0x000a18df) vid6_indi_pane_t3_ParamLimits

0xd83f,	// (0x000a18df) vid6_indi_pane_t3

0xd867,	// (0x000a1907) vid6_indi_pane_t4_ParamLimits

0xd867,	// (0x000a1907) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x000a3c3c) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x000a3c3c) vid6_indi_pane_t

0xd88b,	// (0x000a192b) wait_bar_pane_cp08

0x7a2f,	// (0x0009bacf) main_cset_text2_pane_t1_ParamLimits

0x7a2f,	// (0x0009bacf) main_cset_text2_pane_t1

0x7946,	// (0x0009b9e6) listscroll_gen_pane_cp06_t1_ParamLimits

0x7946,	// (0x0009b9e6) listscroll_gen_pane_cp06_t1

0x11a5,	// (0x00095245) main_cam6_set_pane

0x631e,	// (0x0009a3be) bg_tb_trans_pane_cp06_ParamLimits

0x6334,	// (0x0009a3d4) cam4_indicators_pane_g1_ParamLimits

0x6345,	// (0x0009a3e5) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x000a39aa) cam4_indicators_pane_g_ParamLimits

0x635d,	// (0x0009a3fd) cam4_indicators_pane_t1_ParamLimits

0x4392,	// (0x00098432) bg_tb_trans_pane_cp07_ParamLimits

0x640e,	// (0x0009a4ae) vid4_indicators_pane_g1_ParamLimits

0x6422,	// (0x0009a4c2) vid4_indicators_pane_g2_ParamLimits

0x6436,	// (0x0009a4d6) vid4_indicators_pane_g3_ParamLimits

0x6447,	// (0x0009a4e7) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x000a39bc) vid4_indicators_pane_g_ParamLimits

0x6463,	// (0x0009a503) vid4_indicators_pane_t1_ParamLimits

0x74c1,	// (0x0009b561) vid4_progress_pane_g1_ParamLimits

0x74d1,	// (0x0009b571) vid4_progress_pane_g2_ParamLimits

0x74e1,	// (0x0009b581) vid4_progress_pane_g3_ParamLimits

0x74f3,	// (0x0009b593) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x000a3b6d) vid4_progress_pane_g_ParamLimits

0x750b,	// (0x0009b5ab) vid4_progress_pane_t1_ParamLimits

0x7521,	// (0x0009b5c1) vid4_progress_pane_t2_ParamLimits

0x7536,	// (0x0009b5d6) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x000a3b78) vid4_progress_pane_t_ParamLimits

0x754c,	// (0x0009b5ec) wait_bar_pane_cp07_ParamLimits

0x7a66,	// (0x0009bb06) main_cam6_set_pane_g2_ParamLimits

0x7a66,	// (0x0009bb06) main_cam6_set_pane_g2

0x7a72,	// (0x0009bb12) main_cset6_listscroll_pane_ParamLimits

0x7a72,	// (0x0009bb12) main_cset6_listscroll_pane

0x7a9d,	// (0x0009bb3d) main_cset6_slider_pane_ParamLimits

0x7a9d,	// (0x0009bb3d) main_cset6_slider_pane

0x7aa9,	// (0x0009bb49) main_cset6_text2_pane_ParamLimits

0x7aa9,	// (0x0009bb49) main_cset6_text2_pane

0xd89a,	// (0x000a193a) main_cset6_text_pane

0xd8a2,	// (0x000a1942) main_cset_list_pane_copy1_ParamLimits

0xd8a2,	// (0x000a1942) main_cset_list_pane_copy1

0xd8b2,	// (0x000a1952) scroll_pane_cp028_copy1

0x7abc,	// (0x0009bb5c) cset_list_set_pane_copy1

0x7ad2,	// (0x0009bb72) aid_position_infowindow_above_copy1

0x7ada,	// (0x0009bb7a) aid_position_infowindow_below_copy1

0xf0a8,	// (0x000a3148) cset_list_set_pane_g1_copy1

0xd8bb,	// (0x000a195b) cset_list_set_pane_g3_copy1_ParamLimits

0xd8bb,	// (0x000a195b) cset_list_set_pane_g3_copy1

0xd8ca,	// (0x000a196a) cset_list_set_pane_t1_copy1_ParamLimits

0xd8ca,	// (0x000a196a) cset_list_set_pane_t1_copy1

0xea81,	// (0x000a2b21) list_highlight_pane_cp021_copy1_ParamLimits

0xea81,	// (0x000a2b21) list_highlight_pane_cp021_copy1

0xd8df,	// (0x000a197f) cset6_slider_pane_ParamLimits

0xd8df,	// (0x000a197f) cset6_slider_pane

0xd90b,	// (0x000a19ab) main_cset6_slider_pane_g1_ParamLimits

0xd90b,	// (0x000a19ab) main_cset6_slider_pane_g1

0x7ae2,	// (0x0009bb82) main_cset6_slider_pane_g2_ParamLimits

0x7ae2,	// (0x0009bb82) main_cset6_slider_pane_g2

0xd933,	// (0x000a19d3) main_cset6_slider_pane_g3_ParamLimits

0xd933,	// (0x000a19d3) main_cset6_slider_pane_g3

0x7b0a,	// (0x0009bbaa) main_cset6_slider_pane_g4_ParamLimits

0x7b0a,	// (0x0009bbaa) main_cset6_slider_pane_g4

0x7b16,	// (0x0009bbb6) main_cset6_slider_pane_g5_ParamLimits

0x7b16,	// (0x0009bbb6) main_cset6_slider_pane_g5

0xd0be,	// (0x000a115e) main_cset6_slider_pane_g7_ParamLimits

0xd0be,	// (0x000a115e) main_cset6_slider_pane_g7

0xd0ca,	// (0x000a116a) main_cset6_slider_pane_g8_ParamLimits

0xd0ca,	// (0x000a116a) main_cset6_slider_pane_g8

0x7b24,	// (0x0009bbc4) main_cset6_slider_pane_g9_ParamLimits

0x7b24,	// (0x0009bbc4) main_cset6_slider_pane_g9

0x7b30,	// (0x0009bbd0) main_cset6_slider_pane_g10_ParamLimits

0x7b30,	// (0x0009bbd0) main_cset6_slider_pane_g10

0x7b3c,	// (0x0009bbdc) main_cset6_slider_pane_g11_ParamLimits

0x7b3c,	// (0x0009bbdc) main_cset6_slider_pane_g11

0x7b48,	// (0x0009bbe8) main_cset6_slider_pane_g12_ParamLimits

0x7b48,	// (0x0009bbe8) main_cset6_slider_pane_g12

0xd3e0,	// (0x000a1480) main_cset6_slider_pane_g13_ParamLimits

0xd3e0,	// (0x000a1480) main_cset6_slider_pane_g13

0xd3ec,	// (0x000a148c) main_cset6_slider_pane_g14_ParamLimits

0xd3ec,	// (0x000a148c) main_cset6_slider_pane_g14

0x7b54,	// (0x0009bbf4) main_cset6_slider_pane_g15_ParamLimits

0x7b54,	// (0x0009bbf4) main_cset6_slider_pane_g15

0x7b6c,	// (0x0009bc0c) main_cset6_slider_pane_g16_ParamLimits

0x7b6c,	// (0x0009bc0c) main_cset6_slider_pane_g16

0x7b7a,	// (0x0009bc1a) main_cset6_slider_pane_g17_ParamLimits

0x7b7a,	// (0x0009bc1a) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x000a3c45) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x000a3c45) main_cset6_slider_pane_g

0xd94b,	// (0x000a19eb) main_cset6_slider_pane_t1_ParamLimits

0xd94b,	// (0x000a19eb) main_cset6_slider_pane_t1

0x7b94,	// (0x0009bc34) main_cset6_slider_pane_t2_ParamLimits

0x7b94,	// (0x0009bc34) main_cset6_slider_pane_t2

0x7bbf,	// (0x0009bc5f) main_cset6_slider_pane_t3_ParamLimits

0x7bbf,	// (0x0009bc5f) main_cset6_slider_pane_t3

0x7bea,	// (0x0009bc8a) main_cset6_slider_pane_t4_ParamLimits

0x7bea,	// (0x0009bc8a) main_cset6_slider_pane_t4

0x7c15,	// (0x0009bcb5) main_cset6_slider_pane_t5_ParamLimits

0x7c15,	// (0x0009bcb5) main_cset6_slider_pane_t5

0xd98c,	// (0x000a1a2c) main_cset6_slider_pane_t7_ParamLimits

0xd98c,	// (0x000a1a2c) main_cset6_slider_pane_t7

0x7c42,	// (0x0009bce2) main_cset6_slider_pane_t8_ParamLimits

0x7c42,	// (0x0009bce2) main_cset6_slider_pane_t8

0x7c66,	// (0x0009bd06) main_cset6_slider_pane_t9_ParamLimits

0x7c66,	// (0x0009bd06) main_cset6_slider_pane_t9

0x7c8a,	// (0x0009bd2a) main_cset6_slider_pane_t10_ParamLimits

0x7c8a,	// (0x0009bd2a) main_cset6_slider_pane_t10

0x7cae,	// (0x0009bd4e) main_cset6_slider_pane_t11_ParamLimits

0x7cae,	// (0x0009bd4e) main_cset6_slider_pane_t11

0xd9c2,	// (0x000a1a62) main_cset6_slider_pane_t14_ParamLimits

0xd9c2,	// (0x000a1a62) main_cset6_slider_pane_t14

0xd9fb,	// (0x000a1a9b) main_cset6_slider_pane_t15_ParamLimits

0xd9fb,	// (0x000a1a9b) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x000a3c6a) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x000a3c6a) main_cset6_slider_pane_t

0xccf9,	// (0x000a0d99) cset_slider_pane_g1_copy1

0xd3f8,	// (0x000a1498) cset_slider_pane_g2_copy1

0xd401,	// (0x000a14a1) cset_slider_pane_g3_copy1

0xea44,	// (0x000a2ae4) bg_popup_sub_pane_cp011_copy1

0xda34,	// (0x000a1ad4) main_cset_text_pane_g1_copy1

0xd214,	// (0x000a12b4) main_cset_text_pane_t1_copy1

0xd222,	// (0x000a12c2) main_cset_text_pane_t2_copy1

0xd230,	// (0x000a12d0) main_cset_text_pane_t3_copy1

0xd23e,	// (0x000a12de) main_cset_text_pane_t4_copy1

0xd24c,	// (0x000a12ec) main_cset_text_pane_t5_copy1

0xda3c,	// (0x000a1adc) main_cset_text_pane_t6_copy1

0xda4a,	// (0x000a1aea) main_cset_text_pane_t7_copy1

0x7da3,	// (0x0009be43) main_cset_text2_pane_t1_copy1

0x4392,	// (0x00098432) main_ncimui_pane

0x43f1,	// (0x00098491) popup_query_ncimui_window_ParamLimits

0x43f1,	// (0x00098491) popup_query_ncimui_window

0xc7a4,	// (0x000a0844) field_cale_ev2_pane_g4_ParamLimits

0xc7a4,	// (0x000a0844) field_cale_ev2_pane_g4

0x5caf,	// (0x00099d4f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5caf,	// (0x00099d4f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x000a3948) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x000a3948) cell_video_dialer_keypad_pane_g

0x5cc7,	// (0x00099d67) cell_video_dialer_keypad_pane_t1

0xea44,	// (0x000a2ae4) bg_popup_window_pane_cp012

0xa84b,	// (0x0009e8eb) heading_pane_cp06

0xda76,	// (0x000a1b16) ncim_query_content_pane

0xea44,	// (0x000a2ae4) bg_popup_heading_pane_cp01

0xda7e,	// (0x000a1b1e) ncim_heading_pane_t1

0xda8c,	// (0x000a1b2c) ncim_indicator_popup_pane

0xda9e,	// (0x000a1b3e) ncim_query_button_pane

0xdab2,	// (0x000a1b52) ncim_query_content_pane_t1

0xdac4,	// (0x000a1b64) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x000a3cae) ncim_query_content_pane_t

0xdafe,	// (0x000a1b9e) ncim_query_list_pane

0xdb10,	// (0x000a1bb0) ncim_query_popup_pane

0xda8c,	// (0x000a1b2c) ncim_indicator_popup_pane_ParamLimits

0x7ef7,	// (0x0009bf97) ncim_query_content_pane_g1_ParamLimits

0x7ef7,	// (0x0009bf97) ncim_query_content_pane_g1

0xdab2,	// (0x000a1b52) ncim_query_content_pane_t1_ParamLimits

0xdac4,	// (0x000a1b64) ncim_query_content_pane_t2_ParamLimits

0x7f03,	// (0x0009bfa3) ncim_query_content_pane_t3_ParamLimits

0x7f03,	// (0x0009bfa3) ncim_query_content_pane_t3

0x7f20,	// (0x0009bfc0) ncim_query_content_pane_t4_ParamLimits

0x7f20,	// (0x0009bfc0) ncim_query_content_pane_t4

0x7f3d,	// (0x0009bfdd) ncim_query_content_pane_t5_ParamLimits

0x7f3d,	// (0x0009bfdd) ncim_query_content_pane_t5

0xdad6,	// (0x000a1b76) ncim_query_content_pane_t6_ParamLimits

0xdad6,	// (0x000a1b76) ncim_query_content_pane_t6

0xfc0e,	// (0x000a3cae) ncim_query_content_pane_t_ParamLimits

0xdafe,	// (0x000a1b9e) ncim_query_list_pane_ParamLimits

0xdb10,	// (0x000a1bb0) ncim_query_popup_pane_ParamLimits

0xdb24,	// (0x000a1bc4) wait_bar_pane_cp04

0xea44,	// (0x000a2ae4) input_focus_pane_cp011

0xdb2c,	// (0x000a1bcc) ncim_query_popup_pane_t1

0xdb3a,	// (0x000a1bda) ncim_list_query_list_pane_ParamLimits

0xdb3a,	// (0x000a1bda) ncim_list_query_list_pane

0xea44,	// (0x000a2ae4) bg_button_pane_cp027

0xdb47,	// (0x000a1be7) ncim_query_button_pane_g1

0xea44,	// (0x000a2ae4) list_highlight_pane_cp012

0xdb51,	// (0x000a1bf1) ncim_list_query_list_pane_g1

0xdb59,	// (0x000a1bf9) ncim_list_query_list_pane_t1

0x6351,	// (0x0009a3f1) cam4_indicators_pane_g3_ParamLimits

0x6351,	// (0x0009a3f1) cam4_indicators_pane_g3

0x6453,	// (0x0009a4f3) vid4_indicators_pane_g5_ParamLimits

0x6453,	// (0x0009a4f3) vid4_indicators_pane_g5

0x74ff,	// (0x0009b59f) vid4_progress_pane_g5_ParamLimits

0x74ff,	// (0x0009b59f) vid4_progress_pane_g5

0x7de3,	// (0x0009be83) main_ncimui_pane_g1

0x7e4b,	// (0x0009beeb) ncimui_group_query_pane_ParamLimits

0x7e4b,	// (0x0009beeb) ncimui_group_query_pane

0x7e93,	// (0x0009bf33) ncimui_list_pane_ParamLimits

0x7e93,	// (0x0009bf33) ncimui_list_pane

0x7eba,	// (0x0009bf5a) ncimui_text_pane_ParamLimits

0x7eba,	// (0x0009bf5a) ncimui_text_pane

0x7f5a,	// (0x0009bffa) ncimui_text_pane_t1_ParamLimits

0x7f5a,	// (0x0009bffa) ncimui_text_pane_t1

0xdb67,	// (0x000a1c07) ncimui_list_single_graphic_pane_ParamLimits

0xdb67,	// (0x000a1c07) ncimui_list_single_graphic_pane

0x7f79,	// (0x0009c019) ncimui_query_pane_ParamLimits

0x7f79,	// (0x0009c019) ncimui_query_pane

0xea44,	// (0x000a2ae4) list_highlight_pane_cp013

0xdb77,	// (0x000a1c17) ncim_list_query_list_pane_t1_copy1

0xdb85,	// (0x000a1c25) ncim_list_single_graphic_pane_g1

0x7f8c,	// (0x0009c02c) ncim_query_button_pane_cp01

0x7f98,	// (0x0009c038) ncim_query_entry_pane_ParamLimits

0x7f98,	// (0x0009c038) ncim_query_entry_pane

0x7fab,	// (0x0009c04b) ncimui_query_pane_g1

0x7fb7,	// (0x0009c057) ncimui_query_pane_t1_ParamLimits

0x7fb7,	// (0x0009c057) ncimui_query_pane_t1

0xea81,	// (0x000a2b21) input_focus_pane_cp012

0xdb8d,	// (0x000a1c2d) ncim_query_entry_pane_t1

0x9f80,	// (0x0009e020) main_im_pane_ParamLimits

0x4392,	// (0x00098432) main_mobtv_pane_ParamLimits

0x4392,	// (0x00098432) main_mobtv_pane

0x7b88,	// (0x0009bc28) main_cset6_slider_pane_g18_ParamLimits

0x7b88,	// (0x0009bc28) main_cset6_slider_pane_g18

0xd93f,	// (0x000a19df) main_cset6_slider_pane_g19_ParamLimits

0xd93f,	// (0x000a19df) main_cset6_slider_pane_g19

0xcf52,	// (0x000a0ff2) bg_main_mobtv_pane_ParamLimits

0xcf52,	// (0x000a0ff2) bg_main_mobtv_pane

0x7fd0,	// (0x0009c070) main_mobtv_info_pane

0x7fdb,	// (0x0009c07b) main_mobtv_loading_pane_ParamLimits

0x7fdb,	// (0x0009c07b) main_mobtv_loading_pane

0xdb9f,	// (0x000a1c3f) main_mobtv_pg_channel_list_pane

0xdba9,	// (0x000a1c49) main_mobtv_pg_hdr_pane

0x7fe8,	// (0x0009c088) main_mobtv_programe_curr_pane_ParamLimits

0x7fe8,	// (0x0009c088) main_mobtv_programe_curr_pane

0x7ff5,	// (0x0009c095) main_mobtv_programe_next_pane_ParamLimits

0x7ff5,	// (0x0009c095) main_mobtv_programe_next_pane

0xdbb2,	// (0x000a1c52) popup_mobtv_noti_window

0xc4b5,	// (0x000a0555) main_tv_pg_hdr_pane_g1

0xdbba,	// (0x000a1c5a) main_tv_pg_hdr_pane_g2

0xdbc2,	// (0x000a1c62) main_tv_pg_hdr_pane_g3

0xdbca,	// (0x000a1c6a) main_tv_pg_hdr_pane_g4

0xdbd2,	// (0x000a1c72) main_tv_pg_hdr_pane_g5

0xdbdc,	// (0x000a1c7c) main_tv_pg_hdr_pane_g6

0xdbe6,	// (0x000a1c86) main_tv_pg_hdr_pane_g7

0xdbf0,	// (0x000a1c90) main_tv_pg_hdr_pane_g8

0xdbfa,	// (0x000a1c9a) main_tv_pg_hdr_pane_g9

0xdc04,	// (0x000a1ca4) main_tv_pg_hdr_pane_g10

0xdc0e,	// (0x000a1cae) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x000a3cbb) main_tv_pg_hdr_pane_g

0xdc18,	// (0x000a1cb8) main_tv_pg_hdr_pane_t1

0xdc26,	// (0x000a1cc6) main_tv_pg_hdr_pane_t2

0xdc34,	// (0x000a1cd4) main_tv_pg_hdr_pane_t3

0xdc44,	// (0x000a1ce4) main_tv_pg_hdr_pane_t4

0xdc54,	// (0x000a1cf4) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x000a3cd2) main_tv_pg_hdr_pane_t

0xdc64,	// (0x000a1d04) single_mobtv_pg_channel_pane_ParamLimits

0xdc64,	// (0x000a1d04) single_mobtv_pg_channel_pane

0xdc76,	// (0x000a1d16) single_mobtv_pg_channel_table_pane

0xa4b3,	// (0x0009e553) single_mobtv_pg_channel_thumb_pane

0xdc7f,	// (0x000a1d1f) single_tv_pg_channel_pane_g1

0xdc88,	// (0x000a1d28) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000a3cdd) single_tv_pg_channel_pane_g

0xc703,	// (0x000a07a3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc703,	// (0x000a07a3) bg_single_mobtv_pg_channel_thumb_pane

0xdc91,	// (0x000a1d31) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc91,	// (0x000a1d31) single_mobtv_pg_channel_thumb_pane_g1

0xdc9f,	// (0x000a1d3f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc9f,	// (0x000a1d3f) single_mobtv_pg_channel_thumb_pane_g2

0xdcab,	// (0x000a1d4b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdcab,	// (0x000a1d4b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000a3ce2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000a3ce2) single_mobtv_pg_channel_thumb_pane_g

0xdcb7,	// (0x000a1d57) single_mobtv_pg_channel_thumb_pane_t1

0xdcc5,	// (0x000a1d65) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000a3ce9) single_mobtv_pg_channel_thumb_pane_t

0xc4b5,	// (0x000a0555) bg_single_mobtv_pg_channel_table_pane_g1

0xc4b5,	// (0x000a0555) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x000a378f) bg_single_mobtv_pg_channel_table_pane_g

0xdcd3,	// (0x000a1d73) single_mobtv_pg_channel_table_pane_t1

0xdce1,	// (0x000a1d81) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000a3cee) single_mobtv_pg_channel_table_pane_t

0x800a,	// (0x0009c0aa) main_mobtv_info_pane_g1_ParamLimits

0x800a,	// (0x0009c0aa) main_mobtv_info_pane_g1

0x8026,	// (0x0009c0c6) main_mobtv_info_pane_t1_ParamLimits

0x8026,	// (0x0009c0c6) main_mobtv_info_pane_t1

0x809e,	// (0x0009c13e) main_mobtv_info_pane_t2_ParamLimits

0x809e,	// (0x0009c13e) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000a3cf8) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000a3cf8) main_mobtv_info_pane_t

0x812d,	// (0x0009c1cd) wait_bar_pane_cp05

0x813f,	// (0x0009c1df) main_mobtv_loading_pane_g1_ParamLimits

0x813f,	// (0x0009c1df) main_mobtv_loading_pane_g1

0x814d,	// (0x0009c1ed) main_mobtv_loading_pane_g2_ParamLimits

0x814d,	// (0x0009c1ed) main_mobtv_loading_pane_g2

0x8159,	// (0x0009c1f9) main_mobtv_loading_pane_g3_ParamLimits

0x8159,	// (0x0009c1f9) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000a3cff) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000a3cff) main_mobtv_loading_pane_g

0xdcef,	// (0x000a1d8f) main_mobtv_loading_pane_t1_ParamLimits

0xdcef,	// (0x000a1d8f) main_mobtv_loading_pane_t1

0xdd07,	// (0x000a1da7) main_mobtv_loading_pane_t2_ParamLimits

0xdd07,	// (0x000a1da7) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000a3d06) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000a3d06) main_mobtv_loading_pane_t

0x8167,	// (0x0009c207) wait_bar_pane_cp06_ParamLimits

0x8167,	// (0x0009c207) wait_bar_pane_cp06

0xdd2b,	// (0x000a1dcb) main_mobtv_programe_curr_pane_t1

0xdd39,	// (0x000a1dd9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000a3d0b) main_mobtv_programe_curr_pane_t

0xdd47,	// (0x000a1de7) main_mobtv_programe_next_pane_t1

0xdd55,	// (0x000a1df5) main_mobtv_programe_next_pane_t2

0xdd63,	// (0x000a1e03) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000a3d10) main_mobtv_programe_next_pane_t

0xea44,	// (0x000a2ae4) bg_popup_mobtv_noti_window_pane

0xdd71,	// (0x000a1e11) popup_mobtv_noti_window_g1

0xdd79,	// (0x000a1e19) popup_mobtv_noti_window_t1

0xdd87,	// (0x000a1e27) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000a3d17) popup_mobtv_noti_window_t

0xc4b5,	// (0x000a0555) bg_popup_mobtv_noti_window_pane_g1

0x11a5,	// (0x00095245) sc_clock_pane

0x11a5,	// (0x00095245) main_fs_bigclock_pane

0x771b,	// (0x0009b7bb) blid2_tripm_pane_t4_ParamLimits

0x771b,	// (0x0009b7bb) blid2_tripm_pane_t4

0x8173,	// (0x0009c213) sc_clock_pane_g1_ParamLimits

0x8173,	// (0x0009c213) sc_clock_pane_g1

0x8181,	// (0x0009c221) sc_clock_pane_t1_ParamLimits

0x8181,	// (0x0009c221) sc_clock_pane_t1

0x8194,	// (0x0009c234) sc_clock_pane_t2_ParamLimits

0x8194,	// (0x0009c234) sc_clock_pane_t2

0x81a6,	// (0x0009c246) sc_clock_pane_t3_ParamLimits

0x81a6,	// (0x0009c246) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000a3d1c) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000a3d1c) sc_clock_pane_t

0x90f9,	// (0x0009d199) main_fs_bigclock_indicator_pane_ParamLimits

0x90f9,	// (0x0009d199) main_fs_bigclock_indicator_pane

0x8229,	// (0x0009c2c9) main_fs_bigclock_pane_g1_ParamLimits

0x8229,	// (0x0009c2c9) main_fs_bigclock_pane_g1

0x9105,	// (0x0009d1a5) main_fs_bigclock_pane_t1_ParamLimits

0x9105,	// (0x0009d1a5) main_fs_bigclock_pane_t1

0x9117,	// (0x0009d1b7) main_fs_bigclock_pane_t2_ParamLimits

0x9117,	// (0x0009d1b7) main_fs_bigclock_pane_t2

0x912b,	// (0x0009d1cb) main_fs_bigclock_pane_t3_ParamLimits

0x912b,	// (0x0009d1cb) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000a3f26) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000a3f26) main_fs_bigclock_pane_t

0xe8f5,	// (0x000a2995) main_fs_bigclock_indicator_pane_g1

0xdaa6,	// (0x000a1b46) ncim_query_content_pane_g2_ParamLimits

0xdaa6,	// (0x000a1b46) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x000a3ca9) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x000a3ca9) ncim_query_content_pane_g

0x81ba,	// (0x0009c25a) sc_clock_pane_t4_ParamLimits

0x81ba,	// (0x0009c25a) sc_clock_pane_t4

0x4392,	// (0x00098432) main_radioblah_pane

0xcec5,	// (0x000a0f65) cell_call4_button_pane_t1_copy1_ParamLimits

0xcec5,	// (0x000a0f65) cell_call4_button_pane_t1_copy1

0x7dfd,	// (0x0009be9d) main_ncimui_pane_t1_ParamLimits

0x7dfd,	// (0x0009be9d) main_ncimui_pane_t1

0x7e17,	// (0x0009beb7) main_ncimui_pane_t2_ParamLimits

0x7e17,	// (0x0009beb7) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x000a3ca2) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x000a3ca2) main_ncimui_pane_t

0xdecd,	// (0x000a1f6d) main_radioblah_anim_pane_ParamLimits

0xdecd,	// (0x000a1f6d) main_radioblah_anim_pane

0xdede,	// (0x000a1f7e) main_radioblah_info_pane_ParamLimits

0xdede,	// (0x000a1f7e) main_radioblah_info_pane

0xdef2,	// (0x000a1f92) main_radioblah_pane_t1_ParamLimits

0xdef2,	// (0x000a1f92) main_radioblah_pane_t1

0xdf0e,	// (0x000a1fae) main_radioblah_pane_t2_ParamLimits

0xdf0e,	// (0x000a1fae) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x000a3d3d) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x000a3d3d) main_radioblah_pane_t

0x827f,	// (0x0009c31f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x827f,	// (0x0009c31f) main_radioblah_rocker_ctrl_pane

0xdf56,	// (0x000a1ff6) main_radioblah_info_pane_t1_ParamLimits

0xdf56,	// (0x000a1ff6) main_radioblah_info_pane_t1

0x82c4,	// (0x0009c364) main_radioblah_info_pane_t2_ParamLimits

0x82c4,	// (0x0009c364) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x000a3d46) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x000a3d46) main_radioblah_info_pane_t

0xc4b5,	// (0x000a0555) main_radioblah_rocker_ctrl_pane_g1

0x8374,	// (0x0009c414) main_radioblah_rocker_ctrl_pane_g2

0x837c,	// (0x0009c41c) main_radioblah_rocker_ctrl_pane_g3

0x8384,	// (0x0009c424) main_radioblah_rocker_ctrl_pane_g4

0x838c,	// (0x0009c42c) main_radioblah_rocker_ctrl_pane_g5

0x8394,	// (0x0009c434) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x000a3d4f) main_radioblah_rocker_ctrl_pane_g

0x7da3,	// (0x0009be43) main_cset_text2_pane_t1_copy1_ParamLimits

0x6274,	// (0x0009a314) cam4_image_uncrop_qvga_pane

0x63c3,	// (0x0009a463) vid4_image_uncrop_qcif_pane

0x78a9,	// (0x0009b949) cam6_image_uncrop_qvga_pane_ParamLimits

0x78a9,	// (0x0009b949) cam6_image_uncrop_qvga_pane

0xd77d,	// (0x000a181d) vid6_image_uncrop_qcif_pane_ParamLimits

0xd77d,	// (0x000a181d) vid6_image_uncrop_qcif_pane

0xea44,	// (0x000a2ae4) bg_popup_preview_window_pane_cp03

0xda58,	// (0x000a1af8) list_cset_text2_pane

0xda60,	// (0x000a1b00) main_cset6_text2_pane_g1

0xda68,	// (0x000a1b08) main_cset6_text2_pane_t1

0x839c,	// (0x0009c43c) list_cset_text2_pane_t1_ParamLimits

0x839c,	// (0x0009c43c) list_cset_text2_pane_t1

0x4392,	// (0x00098432) main_radioblah_pane_ParamLimits

0x8119,	// (0x0009c1b9) main_mobtv_info_pane_t3_ParamLimits

0x8119,	// (0x0009c1b9) main_mobtv_info_pane_t3

0x826d,	// (0x0009c30d) main_radioblah_pane_g1

0x8298,	// (0x0009c338) main_radioblah_info_pane_g1

0x8319,	// (0x0009c3b9) main_radioblah_info_pane_t3_ParamLimits

0x8319,	// (0x0009c3b9) main_radioblah_info_pane_t3

0x309b,	// (0x0009713b) highlight_cell_cale_month_pane_ParamLimits

0x309b,	// (0x0009713b) highlight_cell_cale_month_pane

0x11a5,	// (0x00095245) main_phob_fisheye_pane

0xc853,	// (0x000a08f3) scroll_pane_cp0031_ParamLimits

0xc853,	// (0x000a08f3) scroll_pane_cp0031

0xd88b,	// (0x000a192b) wait_bar_pane_cp08_ParamLimits

0x7abc,	// (0x0009bb5c) cset_list_set_pane_copy1_ParamLimits

0xdf90,	// (0x000a2030) highlight_cell_cale_month_pane_g1

0x83bd,	// (0x0009c45d) highlight_cell_cale_month_pane_t1

0xd526,	// (0x000a15c6) list_gen_pane_cp01

0xd0a9,	// (0x000a1149) scroll_pane_01

0x83cb,	// (0x0009c46b) list_single_double_fisheye_pane

0x83d4,	// (0x0009c474) list_double_fisheye_pane_g1_ParamLimits

0x83d4,	// (0x0009c474) list_double_fisheye_pane_g1

0x83e0,	// (0x0009c480) list_double_fisheye_pane_g2_ParamLimits

0x83e0,	// (0x0009c480) list_double_fisheye_pane_g2

0x83f4,	// (0x0009c494) list_double_fisheye_pane_g3_ParamLimits

0x83f4,	// (0x0009c494) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x000a3d5c) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x000a3d5c) list_double_fisheye_pane_g

0x841d,	// (0x0009c4bd) list_double_fisheye_pane_t1_ParamLimits

0x841d,	// (0x0009c4bd) list_double_fisheye_pane_t1

0x8438,	// (0x0009c4d8) list_double_fisheye_pane_t2_ParamLimits

0x8438,	// (0x0009c4d8) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x000a3d67) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x000a3d67) list_double_fisheye_pane_t

0x11a5,	// (0x00095245) main_call5_pane

0x81e0,	// (0x0009c280) sc_swipe_pane_ParamLimits

0x81e0,	// (0x0009c280) sc_swipe_pane

0x8466,	// (0x0009c506) call5_image_pane_ParamLimits

0x8466,	// (0x0009c506) call5_image_pane

0x8476,	// (0x0009c516) call5_swipe_1_pane_ParamLimits

0x8476,	// (0x0009c516) call5_swipe_1_pane

0x8482,	// (0x0009c522) call5_swipe_2_pane_ParamLimits

0x8482,	// (0x0009c522) call5_swipe_2_pane

0x849c,	// (0x0009c53c) popup_call5_audio_first_window_ParamLimits

0x849c,	// (0x0009c53c) popup_call5_audio_first_window

0xc703,	// (0x000a07a3) call5_swipe_1_pane_g1_ParamLimits

0xc703,	// (0x000a07a3) call5_swipe_1_pane_g1

0xdf98,	// (0x000a2038) call5_swipe_1_pane_g2_ParamLimits

0xdf98,	// (0x000a2038) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x000a3d6c) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x000a3d6c) call5_swipe_1_pane_g

0xdfa4,	// (0x000a2044) call5_swipe_1_pane_t1_ParamLimits

0xdfa4,	// (0x000a2044) call5_swipe_1_pane_t1

0xc703,	// (0x000a07a3) call5_swipe_2_pane_g1_ParamLimits

0xc703,	// (0x000a07a3) call5_swipe_2_pane_g1

0xdfb9,	// (0x000a2059) call5_swipe_2_pane_g2_ParamLimits

0xdfb9,	// (0x000a2059) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x000a3d71) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x000a3d71) call5_swipe_2_pane_g

0xdfc5,	// (0x000a2065) call5_swipe_2_pane_t1_ParamLimits

0xdfc5,	// (0x000a2065) call5_swipe_2_pane_t1

0xdfda,	// (0x000a207a) sc_swipe_pane_g1_ParamLimits

0xdfda,	// (0x000a207a) sc_swipe_pane_g1

0xdfe7,	// (0x000a2087) sc_swipe_pane_g2_ParamLimits

0xdfe7,	// (0x000a2087) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x000a3d76) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x000a3d76) sc_swipe_pane_g

0xdff3,	// (0x000a2093) sc_swipe_pane_t1_ParamLimits

0xdff3,	// (0x000a2093) sc_swipe_pane_t1

0x11a5,	// (0x00095245) main_cmail_launcher_pane

0x84aa,	// (0x0009c54a) aid_size_cell_cmail_l_ParamLimits

0x84aa,	// (0x0009c54a) aid_size_cell_cmail_l

0x84ba,	// (0x0009c55a) grid_cmail_l_pane_ParamLimits

0x84ba,	// (0x0009c55a) grid_cmail_l_pane

0x84ca,	// (0x0009c56a) cell_cmail_l_pane_ParamLimits

0x84ca,	// (0x0009c56a) cell_cmail_l_pane

0x84de,	// (0x0009c57e) cell_cmail_l_pane_g1_ParamLimits

0x84de,	// (0x0009c57e) cell_cmail_l_pane_g1

0x84ef,	// (0x0009c58f) cell_cmail_l_pane_t1_ParamLimits

0x84ef,	// (0x0009c58f) cell_cmail_l_pane_t1

0xe008,	// (0x000a20a8) cell_cmail_l_pane_t2_ParamLimits

0xe008,	// (0x000a20a8) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x000a3d7b) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x000a3d7b) cell_cmail_l_pane_t

0xea81,	// (0x000a2b21) grid_highlight_pane_cp018_ParamLimits

0xea81,	// (0x000a2b21) grid_highlight_pane_cp018

0x0ffb,	// (0x0009509b) main2_pane_ParamLimits

0x0ffb,	// (0x0009509b) main2_pane

0xa02b,	// (0x0009e0cb) popup_sp_fs_action_menu_bg_pane_g1

0xa033,	// (0x0009e0d3) popup_sp_fs_action_menu_bg_pane_g2

0xa03b,	// (0x0009e0db) popup_sp_fs_action_menu_bg_pane_g3

0xa043,	// (0x0009e0e3) popup_sp_fs_action_menu_bg_pane_g4

0xa04b,	// (0x0009e0eb) popup_sp_fs_action_menu_bg_pane_g5

0xa053,	// (0x0009e0f3) popup_sp_fs_action_menu_bg_pane_g6

0xa05b,	// (0x0009e0fb) popup_sp_fs_action_menu_bg_pane_g7

0xa063,	// (0x0009e103) popup_sp_fs_action_menu_bg_pane_g8

0xa06b,	// (0x0009e10b) popup_sp_fs_action_menu_bg_pane_g9

0xa073,	// (0x0009e113) popup_sp_fs_action_menu_bg_pane_g10

0xa073,	// (0x0009e113) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a322a) popup_sp_fs_action_menu_bg_pane_g

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g3_g1

0x1eac,	// (0x00095f4c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_t3_g3_g2

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a32d8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a32d8) list_medium_line_x2_t3_g3_g

0x1ec4,	// (0x00095f64) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ec4,	// (0x00095f64) list_medium_line_x2_t3_g3_t1

0x1ed9,	// (0x00095f79) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ed9,	// (0x00095f79) list_medium_line_x2_t3_g3_t2

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a32df) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a32df) list_medium_line_x2_t3_g3_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g2_g1

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a32e6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a32e6) list_medium_line_x2_t3_g2_g

0x1f00,	// (0x00095fa0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f00,	// (0x00095fa0) list_medium_line_x2_t3_g2_t1

0x1f16,	// (0x00095fb6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f16,	// (0x00095fb6) list_medium_line_x2_t3_g2_t2

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a32eb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a32eb) list_medium_line_x2_t3_g2_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t4_g4_g1

0x1f28,	// (0x00095fc8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f28,	// (0x00095fc8) list_medium_line_x2_t4_g4_g2

0x1eac,	// (0x00095f4c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_t4_g4_g3

0x1f34,	// (0x00095fd4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f34,	// (0x00095fd4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a32f2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a32f2) list_medium_line_x2_t4_g4_g

0x1f40,	// (0x00095fe0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f40,	// (0x00095fe0) list_medium_line_x2_t4_g4_t1

0x1f5a,	// (0x00095ffa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f5a,	// (0x00095ffa) list_medium_line_x2_t4_g4_t2

0x1f70,	// (0x00096010) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f70,	// (0x00096010) list_medium_line_x2_t4_g4_t3

0x1f85,	// (0x00096025) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f85,	// (0x00096025) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a32fb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a32fb) list_medium_line_x2_t4_g4_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g4_g1

0x1f28,	// (0x00095fc8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f28,	// (0x00095fc8) list_medium_line_x2_t2_g4_g2

0x1eac,	// (0x00095f4c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_t2_g4_g3

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a3362) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a3362) list_medium_line_x2_t2_g4_g

0x30c1,	// (0x00097161) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30c1,	// (0x00097161) list_medium_line_x2_t2_g4_t1

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a336b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a336b) list_medium_line_x2_t2_g4_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g3_g1

0x1eac,	// (0x00095f4c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_t2_g3_g2

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a32d8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a32d8) list_medium_line_x2_t2_g3_g

0x30d6,	// (0x00097176) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30d6,	// (0x00097176) list_medium_line_x2_t2_g3_t1

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a3370) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a3370) list_medium_line_x2_t2_g3_t

0x32c0,	// (0x00097360) main_sp_fs_list_pane_ParamLimits

0x32c0,	// (0x00097360) main_sp_fs_list_pane

0x32cc,	// (0x0009736c) sp_fs_scroll_pane_ParamLimits

0x32cc,	// (0x0009736c) sp_fs_scroll_pane

0x32d8,	// (0x00097378) list_medium_line_x2_t3_t1

0x32e8,	// (0x00097388) list_medium_line_x2_t3_t2

0x32f6,	// (0x00097396) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a33bb) list_medium_line_x2_t3_t

0x3304,	// (0x000973a4) list_medium_line_x3_t4_t1

0x3314,	// (0x000973b4) list_medium_line_x3_t4_t2

0x3322,	// (0x000973c2) list_medium_line_x3_t4_t3

0x32f6,	// (0x00097396) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a33c2) list_medium_line_x3_t4_t

0x3330,	// (0x000973d0) list_medium_line_x4_t5_t1

0x3340,	// (0x000973e0) list_medium_line_x4_t5_t2

0x3322,	// (0x000973c2) list_medium_line_x4_t5_t3

0x334e,	// (0x000973ee) list_medium_line_x4_t5_t4

0x32f6,	// (0x00097396) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a33cb) list_medium_line_x4_t5_t

0x1ea0,	// (0x00095f40) list_medium_line_t4_g4_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_t4_g4_g1

0x1f34,	// (0x00095fd4) list_medium_line_t4_g4_g2_ParamLimits

0x1f34,	// (0x00095fd4) list_medium_line_t4_g4_g2

0x335c,	// (0x000973fc) list_medium_line_t4_g4_g3_ParamLimits

0x335c,	// (0x000973fc) list_medium_line_t4_g4_g3

0x1eb8,	// (0x00095f58) list_medium_line_t4_g4_g4_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a33d6) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a33d6) list_medium_line_t4_g4_g

0x3368,	// (0x00097408) list_medium_line_t4_g4_t1_ParamLimits

0x3368,	// (0x00097408) list_medium_line_t4_g4_t1

0x337d,	// (0x0009741d) list_medium_line_t4_g4_t2_ParamLimits

0x337d,	// (0x0009741d) list_medium_line_t4_g4_t2

0x3392,	// (0x00097432) list_medium_line_t4_g4_t3_ParamLimits

0x3392,	// (0x00097432) list_medium_line_t4_g4_t3

0x1eeb,	// (0x00095f8b) list_medium_line_t4_g4_t4_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a33df) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a33df) list_medium_line_t4_g4_t

0x34b2,	// (0x00097552) chi_dic_find_pane_g1

0x43ae,	// (0x0009844e) main_tport_pane

0x6db7,	// (0x0009ae57) list_medium_line_plain_t1

0x6e97,	// (0x0009af37) list_medium_line_t2_g2_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t2_g2_g1

0x6ea3,	// (0x0009af43) list_medium_line_t2_g2_g2_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x000a3ab3) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x000a3ab3) list_medium_line_t2_g2_g

0x6eaf,	// (0x0009af4f) list_medium_line_t2_g2_t1_ParamLimits

0x6eaf,	// (0x0009af4f) list_medium_line_t2_g2_t1

0x6ec9,	// (0x0009af69) list_medium_line_t2_g2_t2_ParamLimits

0x6ec9,	// (0x0009af69) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x000a3ab8) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x000a3ab8) list_medium_line_t2_g2_t

0xd52f,	// (0x000a15cf) aid_sp_fs_list_icon_a_sm

0xf097,	// (0x000a3137) aid_sp_fs_list_icon_d

0xb835,	// (0x0009f8d5) aid_sp_fs_text_primary

0xf09f,	// (0x000a313f) aid_sp_fs_text_secondary

0x755d,	// (0x0009b5fd) list_medium_line

0x755d,	// (0x0009b5fd) list_medium_line_g2

0x755d,	// (0x0009b5fd) list_medium_line_g3

0x755d,	// (0x0009b5fd) list_medium_line_plain

0x755d,	// (0x0009b5fd) list_medium_line_plain_t2

0x755d,	// (0x0009b5fd) list_medium_line_plain_t3

0x755d,	// (0x0009b5fd) list_medium_line_right_icon

0x755d,	// (0x0009b5fd) list_medium_line_right_iconx2

0x755d,	// (0x0009b5fd) list_medium_line_t2

0x755d,	// (0x0009b5fd) list_medium_line_t2_g2

0x755d,	// (0x0009b5fd) list_medium_line_t2_g3

0x755d,	// (0x0009b5fd) list_medium_line_t2_right_icon

0x755d,	// (0x0009b5fd) list_medium_line_t2_right_iconx2

0x755d,	// (0x0009b5fd) list_medium_line_t3

0x755d,	// (0x0009b5fd) list_medium_line_t3_g2

0x755d,	// (0x0009b5fd) list_medium_line_t3_g3

0x755d,	// (0x0009b5fd) list_medium_line_t3_right_iconx2

0x7566,	// (0x0009b606) list_medium_line_t4_g4

0x756f,	// (0x0009b60f) list_medium_line_x2

0x756f,	// (0x0009b60f) list_medium_line_x2_t2_g2

0x756f,	// (0x0009b60f) list_medium_line_x2_t2_g3

0x756f,	// (0x0009b60f) list_medium_line_x2_t2_g4

0x756f,	// (0x0009b60f) list_medium_line_x2_t3

0x756f,	// (0x0009b60f) list_medium_line_x2_t3_g2

0x756f,	// (0x0009b60f) list_medium_line_x2_t3_g3

0x756f,	// (0x0009b60f) list_medium_line_x2_t3_g4

0x756f,	// (0x0009b60f) list_medium_line_x2_t4_g2

0x756f,	// (0x0009b60f) list_medium_line_x2_t4_g4

0x7578,	// (0x0009b618) list_medium_line_x3

0x7578,	// (0x0009b618) list_medium_line_x3_t4

0x7578,	// (0x0009b618) list_medium_line_x3_t4_g4

0x7566,	// (0x0009b606) list_medium_line_x4_t4

0x7566,	// (0x0009b606) list_medium_line_x4_t4_g7

0x7566,	// (0x0009b606) list_medium_line_x4_t5

0x7581,	// (0x0009b621) list_single_fs_dyc_pane_ParamLimits

0x7581,	// (0x0009b621) list_single_fs_dyc_pane

0x1ea0,	// (0x00095f40) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x4_t4_g7_g1

0x7cd4,	// (0x0009bd74) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cd4,	// (0x0009bd74) list_medium_line_x4_t4_g7_g2

0x7ce0,	// (0x0009bd80) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ce0,	// (0x0009bd80) list_medium_line_x4_t4_g7_g3

0x7cef,	// (0x0009bd8f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7cef,	// (0x0009bd8f) list_medium_line_x4_t4_g7_g4

0x7cfb,	// (0x0009bd9b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7cfb,	// (0x0009bd9b) list_medium_line_x4_t4_g7_g5

0x7d0a,	// (0x0009bdaa) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d0a,	// (0x0009bdaa) list_medium_line_x4_t4_g7_g6

0x7d19,	// (0x0009bdb9) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d19,	// (0x0009bdb9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x000a3c83) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x000a3c83) list_medium_line_x4_t4_g7_g

0x7d25,	// (0x0009bdc5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d25,	// (0x0009bdc5) list_medium_line_x4_t4_g7_t1

0x7d3a,	// (0x0009bdda) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d3a,	// (0x0009bdda) list_medium_line_x4_t4_g7_t2

0x7d4f,	// (0x0009bdef) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d4f,	// (0x0009bdef) list_medium_line_x4_t4_g7_t3

0x7d64,	// (0x0009be04) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d64,	// (0x0009be04) list_medium_line_x4_t4_g7_t4

0x7d76,	// (0x0009be16) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d76,	// (0x0009be16) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x000a3c92) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x000a3c92) list_medium_line_x4_t4_g7_t

0x7d88,	// (0x0009be28) list_single_dyc_row_pane_ParamLimits

0x7d88,	// (0x0009be28) list_single_dyc_row_pane

0x845a,	// (0x0009c4fa) call5_gesture_pane_ParamLimits

0x845a,	// (0x0009c4fa) call5_gesture_pane

0x848e,	// (0x0009c52e) call5_windows_pane_ParamLimits

0x848e,	// (0x0009c52e) call5_windows_pane

0x8505,	// (0x0009c5a5) call5_swipe_1_pane_cp_ParamLimits

0x8505,	// (0x0009c5a5) call5_swipe_1_pane_cp

0x8511,	// (0x0009c5b1) call5_swipe_2_pane_cp_ParamLimits

0x8511,	// (0x0009c5b1) call5_swipe_2_pane_cp

0xa157,	// (0x0009e1f7) call5_image_pane_cp

0x851d,	// (0x0009c5bd) popup_call5_audio_first_window_cp_ParamLimits

0x851d,	// (0x0009c5bd) popup_call5_audio_first_window_cp

0xdfda,	// (0x000a207a) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfda,	// (0x000a207a) call5_swipe_1_pane_g1_cp

0xe01a,	// (0x000a20ba) call5_swipe_1_pane_g2_cp

0xdff3,	// (0x000a2093) call5_swipe_1_pane_t1_cp_ParamLimits

0xdff3,	// (0x000a2093) call5_swipe_1_pane_t1_cp

0xdfda,	// (0x000a207a) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfda,	// (0x000a207a) call5_swipe_2_pane_g1_cp

0xe022,	// (0x000a20c2) call5_swipe_2_pane_g2_cp

0xe02a,	// (0x000a20ca) call5_swipe_2_pane_t1_cp_ParamLimits

0xe02a,	// (0x000a20ca) call5_swipe_2_pane_t1_cp

0xea81,	// (0x000a2b21) main_sp_fs_email_pane

0xe03f,	// (0x000a20df) main_sp_fs_listscroll_pane_te

0x852b,	// (0x0009c5cb) popup_sp_fs_action_menu_pane_ParamLimits

0x852b,	// (0x0009c5cb) popup_sp_fs_action_menu_pane

0xc4b5,	// (0x000a0555) bg_sp_fs_ctrlbar_pane_g1

0xe048,	// (0x000a20e8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe051,	// (0x000a20f1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe05a,	// (0x000a20fa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc4b5,	// (0x000a0555) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x000a3d80) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc29a,	// (0x000a033a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc29a,	// (0x000a033a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe063,	// (0x000a2103) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe063,	// (0x000a2103) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe06f,	// (0x000a210f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe06f,	// (0x000a210f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x000a3d89) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x000a3d89) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe07b,	// (0x000a211b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe07b,	// (0x000a211b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x856f,	// (0x0009c60f) list_medium_line_t2_right_icon_g1

0x8577,	// (0x0009c617) list_medium_line_t2_right_icon_t1

0x8587,	// (0x0009c627) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x000a3d8e) list_medium_line_t2_right_icon_t

0xc0ad,	// (0x000a014d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc0ad,	// (0x000a014d) bg_sp_fs_ctrlbar_pane

0x85d8,	// (0x0009c678) main_sp_fs_ctrlbar_button_pane_cp01

0x85e0,	// (0x0009c680) main_sp_fs_ctrlbar_ddmenu_pane

0xe0e8,	// (0x000a2188) main_sp_fs_ctrlbar_pane_g1

0xe0f4,	// (0x000a2194) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000a3d93) main_sp_fs_ctrlbar_pane_g

0xe100,	// (0x000a21a0) main_sp_fs_ctrlbar_pane_t1

0x85ea,	// (0x0009c68a) main_sp_fs_ctrlbar_pane

0x8600,	// (0x0009c6a0) main_sp_fs_listscroll_pane_te_cp01

0x8611,	// (0x0009c6b1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8611,	// (0x0009c6b1) popup_sp_fs_action_menu_pane_cp01

0xea81,	// (0x000a2b21) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xea81,	// (0x000a2b21) bg_sp_fs_highlight_list_pane_cp01

0xe130,	// (0x000a21d0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe130,	// (0x000a21d0) sp_fs_action_menu_list_gene_pane_g1

0xe13f,	// (0x000a21df) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe13f,	// (0x000a21df) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000a3d9d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000a3d9d) sp_fs_action_menu_list_gene_pane_g

0xe14c,	// (0x000a21ec) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe14c,	// (0x000a21ec) sp_fs_action_menu_list_gene_pane_t1

0xe164,	// (0x000a2204) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe164,	// (0x000a2204) sp_fs_action_menu_list_gene_pane

0xe183,	// (0x000a2223) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe183,	// (0x000a2223) popup_sp_fs_action_menu_bg_pane

0xe191,	// (0x000a2231) sp_fs_action_menu_list_pane_ParamLimits

0xe191,	// (0x000a2231) sp_fs_action_menu_list_pane

0x863b,	// (0x0009c6db) sp_fs_scroll_pane_cp01_ParamLimits

0x863b,	// (0x0009c6db) sp_fs_scroll_pane_cp01

0x8661,	// (0x0009c701) list_medium_line_plain_t2_t1

0x8671,	// (0x0009c711) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000a3da2) list_medium_line_plain_t2_t

0x867f,	// (0x0009c71f) list_medium_line_plain_t3_t1

0x868f,	// (0x0009c72f) list_medium_line_plain_t3_t2

0x869d,	// (0x0009c73d) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000a3da7) list_medium_line_plain_t3_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t2_g2_g1

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a32e6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a32e6) list_medium_line_x2_t2_g2_g

0x3368,	// (0x00097408) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3368,	// (0x00097408) list_medium_line_x2_t2_g2_t1

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000a3dae) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000a3dae) list_medium_line_x2_t2_g2_t

0x1ea0,	// (0x00095f40) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t4_g2_g1

0x86ab,	// (0x0009c74b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x86ab,	// (0x0009c74b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x000a3db3) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x000a3db3) list_medium_line_x2_t4_g2_g

0x86bd,	// (0x0009c75d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86bd,	// (0x0009c75d) list_medium_line_x2_t4_g2_t1

0x86d7,	// (0x0009c777) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86d7,	// (0x0009c777) list_medium_line_x2_t4_g2_t2

0x86ed,	// (0x0009c78d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86ed,	// (0x0009c78d) list_medium_line_x2_t4_g2_t3

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x000a3db8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x000a3db8) list_medium_line_x2_t4_g2_t

0x8702,	// (0x0009c7a2) list_medium_line_t3_right_iconx2_g1

0x856f,	// (0x0009c60f) list_medium_line_t3_right_iconx2_g2

0x870a,	// (0x0009c7aa) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x000a3dc1) list_medium_line_t3_right_iconx2_g

0x8712,	// (0x0009c7b2) list_medium_line_t3_right_iconx2_t1

0x8722,	// (0x0009c7c2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x000a3dc8) list_medium_line_t3_right_iconx2_t

0x1ea0,	// (0x00095f40) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x3_t4_g4_g1

0x1eac,	// (0x00095f4c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x3_t4_g4_g2

0x1f34,	// (0x00095fd4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f34,	// (0x00095fd4) list_medium_line_x3_t4_g4_g3

0x8730,	// (0x0009c7d0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8730,	// (0x0009c7d0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x000a3dcd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x000a3dcd) list_medium_line_x3_t4_g4_g

0x873c,	// (0x0009c7dc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x873c,	// (0x0009c7dc) list_medium_line_x3_t4_g4_t1

0x8753,	// (0x0009c7f3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8753,	// (0x0009c7f3) list_medium_line_x3_t4_g4_t2

0x337d,	// (0x0009741d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x337d,	// (0x0009741d) list_medium_line_x3_t4_g4_t3

0x8768,	// (0x0009c808) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8768,	// (0x0009c808) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x000a3dd6) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x000a3dd6) list_medium_line_x3_t4_g4_t

0x8785,	// (0x0009c825) list_single_dyc_row_text_pane_t1_ParamLimits

0x8785,	// (0x0009c825) list_single_dyc_row_text_pane_t1

0x87bc,	// (0x0009c85c) list_single_dyc_row_text_pane_t2_ParamLimits

0x87bc,	// (0x0009c85c) list_single_dyc_row_text_pane_t2

0xe1b1,	// (0x000a2251) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1b1,	// (0x000a2251) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000a3ddf) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000a3ddf) list_single_dyc_row_text_pane_t

0xe1d5,	// (0x000a2275) list_single_dyc_row_pane_g1_ParamLimits

0xe1d5,	// (0x000a2275) list_single_dyc_row_pane_g1

0xe1e1,	// (0x000a2281) list_single_dyc_row_pane_g2_ParamLimits

0xe1e1,	// (0x000a2281) list_single_dyc_row_pane_g2

0xe1ed,	// (0x000a228d) list_single_dyc_row_pane_g3_ParamLimits

0xe1ed,	// (0x000a228d) list_single_dyc_row_pane_g3

0xe1f9,	// (0x000a2299) list_single_dyc_row_pane_g4_ParamLimits

0xe1f9,	// (0x000a2299) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000a3dec) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000a3dec) list_single_dyc_row_pane_g

0xe205,	// (0x000a22a5) list_single_dyc_row_text_pane_ParamLimits

0xe205,	// (0x000a22a5) list_single_dyc_row_text_pane

0xea44,	// (0x000a2ae4) bg_sp_fs_scroll_pane

0xe224,	// (0x000a22c4) thumb_sp_fs_scroll_pane

0x6e97,	// (0x0009af37) list_medium_line_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_g1

0x88df,	// (0x0009c97f) list_medium_line_t1_ParamLimits

0x88df,	// (0x0009c97f) list_medium_line_t1

0x1ea0,	// (0x00095f40) list_medium_line_x2_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_g1

0x1eac,	// (0x00095f4c) list_medium_line_x2_g2_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000a3df5) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000a3df5) list_medium_line_x2_g

0xe22d,	// (0x000a22cd) list_medium_line_x2_t1_ParamLimits

0xe22d,	// (0x000a22cd) list_medium_line_x2_t1

0x1ea0,	// (0x00095f40) list_medium_line_x3_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x3_g1

0x1eac,	// (0x00095f4c) list_medium_line_x3_g2_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000a3df5) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000a3df5) list_medium_line_x3_g

0xe22d,	// (0x000a22cd) list_medium_line_x3_t1_ParamLimits

0xe22d,	// (0x000a22cd) list_medium_line_x3_t1

0xe243,	// (0x000a22e3) thumb_sp_fs_scroll_pane_g1

0xe24c,	// (0x000a22ec) thumb_sp_fs_scroll_pane_g2

0xe255,	// (0x000a22f5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000a3dfa) thumb_sp_fs_scroll_pane_g

0xe243,	// (0x000a22e3) bg_sp_fs_scroll_pane_g1

0xe24c,	// (0x000a22ec) bg_sp_fs_scroll_pane_g2

0xe255,	// (0x000a22f5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000a3dfa) bg_sp_fs_scroll_pane_g

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ea0,	// (0x00095f40) list_medium_line_x2_t3_g4_g1

0x1f28,	// (0x00095fc8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f28,	// (0x00095fc8) list_medium_line_x2_t3_g4_g2

0x1eac,	// (0x00095f4c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1eac,	// (0x00095f4c) list_medium_line_x2_t3_g4_g3

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1eb8,	// (0x00095f58) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a3362) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a3362) list_medium_line_x2_t3_g4_g

0x88f4,	// (0x0009c994) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88f4,	// (0x0009c994) list_medium_line_x2_t3_g4_t1

0x890a,	// (0x0009c9aa) list_medium_line_x2_t3_g4_t2_ParamLimits

0x890a,	// (0x0009c9aa) list_medium_line_x2_t3_g4_t2

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1eeb,	// (0x00095f8b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000a3e01) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000a3e01) list_medium_line_x2_t3_g4_t

0x6e97,	// (0x0009af37) list_medium_line_g2_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_g2_g1

0x6ea3,	// (0x0009af43) list_medium_line_g2_g2_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x000a3ab3) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x000a3ab3) list_medium_line_g2_g

0x8924,	// (0x0009c9c4) list_medium_line_g2_t1_ParamLimits

0x8924,	// (0x0009c9c4) list_medium_line_g2_t1

0x6e97,	// (0x0009af37) list_medium_line_t3_g2_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t3_g2_g1

0x6ea3,	// (0x0009af43) list_medium_line_t3_g2_g2_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x000a3ab3) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x000a3ab3) list_medium_line_t3_g2_g

0x8939,	// (0x0009c9d9) list_medium_line_t3_g2_t1_ParamLimits

0x8939,	// (0x0009c9d9) list_medium_line_t3_g2_t1

0x8953,	// (0x0009c9f3) list_medium_line_t3_g2_t2_ParamLimits

0x8953,	// (0x0009c9f3) list_medium_line_t3_g2_t2

0x8969,	// (0x0009ca09) list_medium_line_t3_g2_t3_ParamLimits

0x8969,	// (0x0009ca09) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000a3e08) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000a3e08) list_medium_line_t3_g2_t

0x856f,	// (0x0009c60f) list_medium_line_right_icon_g1

0x897f,	// (0x0009ca1f) list_medium_line_right_icon_t1

0x6e97,	// (0x0009af37) list_medium_line_t2_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t2_g1

0x898d,	// (0x0009ca2d) list_medium_line_t2_t1_ParamLimits

0x898d,	// (0x0009ca2d) list_medium_line_t2_t1

0x89a7,	// (0x0009ca47) list_medium_line_t2_t2_ParamLimits

0x89a7,	// (0x0009ca47) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000a3e0f) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000a3e0f) list_medium_line_t2_t

0x6e97,	// (0x0009af37) list_medium_line_t3_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t3_g1

0x89bc,	// (0x0009ca5c) list_medium_line_t3_t1_ParamLimits

0x89bc,	// (0x0009ca5c) list_medium_line_t3_t1

0x89d6,	// (0x0009ca76) list_medium_line_t3_t2_ParamLimits

0x89d6,	// (0x0009ca76) list_medium_line_t3_t2

0x89ec,	// (0x0009ca8c) list_medium_line_t3_t3_ParamLimits

0x89ec,	// (0x0009ca8c) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000a3e14) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000a3e14) list_medium_line_t3_t

0x6e97,	// (0x0009af37) list_medium_line_g3_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_g3_g1

0x8a01,	// (0x0009caa1) list_medium_line_g3_g2_ParamLimits

0x8a01,	// (0x0009caa1) list_medium_line_g3_g2

0x6ea3,	// (0x0009af43) list_medium_line_g3_g3_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000a3e1b) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000a3e1b) list_medium_line_g3_g

0x8a0d,	// (0x0009caad) list_medium_line_g3_t1_ParamLimits

0x8a0d,	// (0x0009caad) list_medium_line_g3_t1

0x6e97,	// (0x0009af37) list_medium_line_t2_g3_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t2_g3_g1

0x8a01,	// (0x0009caa1) list_medium_line_t2_g3_g2_ParamLimits

0x8a01,	// (0x0009caa1) list_medium_line_t2_g3_g2

0x6ea3,	// (0x0009af43) list_medium_line_t2_g3_g3_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000a3e1b) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000a3e1b) list_medium_line_t2_g3_g

0x8a22,	// (0x0009cac2) list_medium_line_t2_g3_t1_ParamLimits

0x8a22,	// (0x0009cac2) list_medium_line_t2_g3_t1

0x8a3c,	// (0x0009cadc) list_medium_line_t2_g3_t2_ParamLimits

0x8a3c,	// (0x0009cadc) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000a3e22) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000a3e22) list_medium_line_t2_g3_t

0x6e97,	// (0x0009af37) list_medium_line_t3_g3_g1_ParamLimits

0x6e97,	// (0x0009af37) list_medium_line_t3_g3_g1

0x8a01,	// (0x0009caa1) list_medium_line_t3_g3_g2_ParamLimits

0x8a01,	// (0x0009caa1) list_medium_line_t3_g3_g2

0x6ea3,	// (0x0009af43) list_medium_line_t3_g3_g3_ParamLimits

0x6ea3,	// (0x0009af43) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000a3e1b) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000a3e1b) list_medium_line_t3_g3_g

0x8a52,	// (0x0009caf2) list_medium_line_t3_g3_t1_ParamLimits

0x8a52,	// (0x0009caf2) list_medium_line_t3_g3_t1

0x8a6b,	// (0x0009cb0b) list_medium_line_t3_g3_t2_ParamLimits

0x8a6b,	// (0x0009cb0b) list_medium_line_t3_g3_t2

0x8a81,	// (0x0009cb21) list_medium_line_t3_g3_t3_ParamLimits

0x8a81,	// (0x0009cb21) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000a3e27) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000a3e27) list_medium_line_t3_g3_t

0x8702,	// (0x0009c7a2) list_medium_line_right_iconx2_g1

0x856f,	// (0x0009c60f) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000a3e2e) list_medium_line_right_iconx2_g

0xf0b0,	// (0x000a3150) list_medium_line_right_iconx2_t1

0x8702,	// (0x0009c7a2) list_medium_line_t2_right_iconx2_g1

0x856f,	// (0x0009c60f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000a3e2e) list_medium_line_t2_right_iconx2_g

0x8a97,	// (0x0009cb37) list_medium_line_t2_right_iconx2_t1

0x8aa7,	// (0x0009cb47) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000a3e33) list_medium_line_t2_right_iconx2_t

0x8ab5,	// (0x0009cb55) list_medium_line_x4_t4_t1

0x8ac3,	// (0x0009cb63) list_medium_line_x4_t4_t2

0x8ad3,	// (0x0009cb73) list_medium_line_x4_t4_t3

0x8ae3,	// (0x0009cb83) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000a3e38) list_medium_line_x4_t4_t

0x8b1d,	// (0x0009cbbd) tport_appsw_pane_ParamLimits

0x8b1d,	// (0x0009cbbd) tport_appsw_pane

0x8b2b,	// (0x0009cbcb) tport_contact_pane_ParamLimits

0x8b2b,	// (0x0009cbcb) tport_contact_pane

0x8b3b,	// (0x0009cbdb) tport_listscroll_pane_ParamLimits

0x8b3b,	// (0x0009cbdb) tport_listscroll_pane

0x8b4b,	// (0x0009cbeb) cell_tport_appsw_pane_ParamLimits

0x8b4b,	// (0x0009cbeb) cell_tport_appsw_pane

0xc7dc,	// (0x000a087c) tport_appsw_pane_g1_ParamLimits

0xc7dc,	// (0x000a087c) tport_appsw_pane_g1

0xe25e,	// (0x000a22fe) tport_contact_pane_g1

0xe267,	// (0x000a2307) tport_contact_pane_t1

0xe275,	// (0x000a2315) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x000a3e41) tport_contact_pane_t

0xe283,	// (0x000a2323) list_tport_pane

0xe28c,	// (0x000a232c) scroll_pane_cp_030

0x8b7e,	// (0x0009cc1e) cell_tport_appsw_pane_g1

0x8b8e,	// (0x0009cc2e) cell_tport_appsw_pane_t1

0x8b9c,	// (0x0009cc3c) grid_highlight_pane_cp019

0x8ba4,	// (0x0009cc44) list_tport_double_graphic_pane_ParamLimits

0x8ba4,	// (0x0009cc44) list_tport_double_graphic_pane

0xea81,	// (0x000a2b21) list_highlight_pane_cp023_ParamLimits

0xea81,	// (0x000a2b21) list_highlight_pane_cp023

0x8bb5,	// (0x0009cc55) list_tport_double_graphic_pane_g1_ParamLimits

0x8bb5,	// (0x0009cc55) list_tport_double_graphic_pane_g1

0x8bc2,	// (0x0009cc62) list_tport_double_graphic_pane_t1_ParamLimits

0x8bc2,	// (0x0009cc62) list_tport_double_graphic_pane_t1

0x8bd7,	// (0x0009cc77) list_tport_double_graphic_pane_t2_ParamLimits

0x8bd7,	// (0x0009cc77) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x000a3e4d) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x000a3e4d) list_tport_double_graphic_pane_t

0xea44,	// (0x000a2ae4) main_cale_note_pane

0x662c,	// (0x0009a6cc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x662c,	// (0x0009a6cc) cell_vitu2_function_top_wide_pane_cp01

0x812d,	// (0x0009c1cd) wait_bar_pane_cp05_ParamLimits

0xea81,	// (0x000a2b21) listscroll_cmail_pane

0xe295,	// (0x000a2335) list_cmail_pane

0x8be9,	// (0x0009cc89) list_cmail_body_pane

0x8c11,	// (0x0009ccb1) list_single_cmail_header_caption_pane

0x8c3d,	// (0x0009ccdd) list_single_cmail_header_detail_pane_ParamLimits

0x8c3d,	// (0x0009ccdd) list_single_cmail_header_detail_pane

0xe2a5,	// (0x000a2345) list_single_cmail_header_caption_pane_t1

0x8c76,	// (0x0009cd16) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c76,	// (0x0009cd16) list_single_cmail_header_detail_pane_g1

0xf0be,	// (0x000a315e) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0be,	// (0x000a315e) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x000a3e52) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x000a3e52) list_single_cmail_header_detail_pane_g

0xe2c9,	// (0x000a2369) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe2c9,	// (0x000a2369) list_single_cmail_header_detail_pane_t1

0xe329,	// (0x000a23c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe329,	// (0x000a23c9) list_single_cmail_header_editor_pane_bg

0xdc88,	// (0x000a1d28) list_cmail_body_pane_g1

0xe340,	// (0x000a23e0) list_cmail_body_pane_t1

0xcf8f,	// (0x000a102f) list_single_cmail_header_editor_pane_bg_g1

0xa3b0,	// (0x0009e450) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf9f,	// (0x000a103f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf97,	// (0x000a1037) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1c5,	// (0x000a1265) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfbf,	// (0x000a105f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfaf,	// (0x000a104f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfb7,	// (0x000a1057) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa390,	// (0x0009e430) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c8c,	// (0x0009cd2c) calenote_gesture_pane_ParamLimits

0x8c8c,	// (0x0009cd2c) calenote_gesture_pane

0x8ca6,	// (0x0009cd46) calenote_window_pane_ParamLimits

0x8ca6,	// (0x0009cd46) calenote_window_pane

0xe34e,	// (0x000a23ee) popup_note_window_cp01

0x8cbe,	// (0x0009cd5e) calenote_swipe_1_pane_ParamLimits

0x8cbe,	// (0x0009cd5e) calenote_swipe_1_pane

0x8511,	// (0x0009c5b1) calenote_swipe_2_pane_ParamLimits

0x8511,	// (0x0009c5b1) calenote_swipe_2_pane

0xdfda,	// (0x000a207a) calenote_swipe_1_pane_g1_ParamLimits

0xdfda,	// (0x000a207a) calenote_swipe_1_pane_g1

0xdfe7,	// (0x000a2087) calenote_swipe_1_pane_g2_ParamLimits

0xdfe7,	// (0x000a2087) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x000a3d76) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x000a3d76) calenote_swipe_1_pane_g

0xe360,	// (0x000a2400) calenote_swipe_1_pane_t1_ParamLimits

0xe360,	// (0x000a2400) calenote_swipe_1_pane_t1

0xdfda,	// (0x000a207a) calenote_swipe_2_pane_g1_ParamLimits

0xdfda,	// (0x000a207a) calenote_swipe_2_pane_g1

0xe37f,	// (0x000a241f) calenote_swipe_2_pane_g2_ParamLimits

0xe37f,	// (0x000a241f) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x000a3e5e) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x000a3e5e) calenote_swipe_2_pane_g

0xe38b,	// (0x000a242b) calenote_swipe_2_pane_t1_ParamLimits

0xe38b,	// (0x000a242b) calenote_swipe_2_pane_t1

0xea44,	// (0x000a2ae4) main_mup_navstr_pane

0x5383,	// (0x00099423) main_mup3_pane_t7_ParamLimits

0x5383,	// (0x00099423) main_mup3_pane_t7

0x5d8e,	// (0x00099e2e) main_mp4_pane_g6_ParamLimits

0x5d8e,	// (0x00099e2e) main_mp4_pane_g6

0x610e,	// (0x0009a1ae) main_image3_pane_t4_ParamLimits

0x610e,	// (0x0009a1ae) main_image3_pane_t4

0x8cd1,	// (0x0009cd71) popup_navstr_preview_pane_ParamLimits

0x8cd1,	// (0x0009cd71) popup_navstr_preview_pane

0x8cdd,	// (0x0009cd7d) scroll_navstr_pane_ParamLimits

0x8cdd,	// (0x0009cd7d) scroll_navstr_pane

0xea44,	// (0x000a2ae4) bg_popup_preview_window_pane_cp04

0xe3b2,	// (0x000a2452) popup_navstr_preview_pane_t1

0x8ce9,	// (0x0009cd89) scroll_navstr_pane_g1_ParamLimits

0x8ce9,	// (0x0009cd89) scroll_navstr_pane_g1

0x8cf6,	// (0x0009cd96) scroll_navstr_pane_t1_ParamLimits

0x8cf6,	// (0x0009cd96) scroll_navstr_pane_t1

0xe357,	// (0x000a23f7) bg_button_pane_cp014

0xe357,	// (0x000a23f7) bg_button_pane_cp030

0x8400,	// (0x0009c4a0) list_double_fisheye_pane_g4_ParamLimits

0x8400,	// (0x0009c4a0) list_double_fisheye_pane_g4

0x840c,	// (0x0009c4ac) list_double_fisheye_pane_g5_ParamLimits

0x840c,	// (0x0009c4ac) list_double_fisheye_pane_g5

0xbe72,	// (0x0009ff12) sp_fs_scroll_pane_cp03

0xe0e8,	// (0x000a2188) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0f4,	// (0x000a2194) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000a3d93) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe100,	// (0x000a21a0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe29d,	// (0x000a233d) sp_fs_scroll_pane_cp02

0xa096,	// (0x0009e136) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa096,	// (0x0009e136) popup_sp_fs_calendar_preview_list_single_pane

0xea44,	// (0x000a2ae4) main_cam6_pano_pane

0x4392,	// (0x00098432) main_mup3_pane_ParamLimits

0xea44,	// (0x000a2ae4) main_phacti_pane

0x8002,	// (0x0009c0a2) bg_button_pane_cp11

0x801a,	// (0x0009c0ba) main_mobtv_info_pane_g2_ParamLimits

0x801a,	// (0x0009c0ba) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000a3cf3) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000a3cf3) main_mobtv_info_pane_g

0x81cc,	// (0x0009c26c) sc_clock_pane_t5_ParamLimits

0x81cc,	// (0x0009c26c) sc_clock_pane_t5

0x826d,	// (0x0009c30d) main_radioblah_pane_g1_ParamLimits

0xdf26,	// (0x000a1fc6) main_radioblah_pane_t3_ParamLimits

0xdf26,	// (0x000a1fc6) main_radioblah_pane_t3

0xdf3e,	// (0x000a1fde) main_radioblah_pane_t4_ParamLimits

0xdf3e,	// (0x000a1fde) main_radioblah_pane_t4

0x828b,	// (0x0009c32b) main_radioblah_text_pane_ParamLimits

0x828b,	// (0x0009c32b) main_radioblah_text_pane

0x8298,	// (0x0009c338) main_radioblah_info_pane_g1_ParamLimits

0x832d,	// (0x0009c3cd) main_radioblah_info_pane_t4_ParamLimits

0x832d,	// (0x0009c3cd) main_radioblah_info_pane_t4

0xea81,	// (0x000a2b21) main_sp_fs_calendar_pane

0x8d08,	// (0x0009cda8) main_phacti_pane_g1

0x8d10,	// (0x0009cdb0) phacti_note_pane_ParamLimits

0x8d10,	// (0x0009cdb0) phacti_note_pane

0xe3c9,	// (0x000a2469) phacti_term_pane_ParamLimits

0xe3c9,	// (0x000a2469) phacti_term_pane

0xe3de,	// (0x000a247e) phacti_note_pane_t1_ParamLimits

0xe3de,	// (0x000a247e) phacti_note_pane_t1

0xe3f5,	// (0x000a2495) phacti_term_pane_g1

0xe3fd,	// (0x000a249d) phacti_term_pane_t1_ParamLimits

0xe3fd,	// (0x000a249d) phacti_term_pane_t1

0xe427,	// (0x000a24c7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe42f,	// (0x000a24cf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x000a3e68) popup_sp_fs_calendar_preview_list_single_pane_g

0xe437,	// (0x000a24d7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe437,	// (0x000a24d7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe44d,	// (0x000a24ed) aid_popup_sp_fs_bg_corner_pane

0xc4b5,	// (0x000a0555) popup_sp_fs_calendar_preview_bg_pane_g1

0xea44,	// (0x000a2ae4) popup_sp_fs_calendar_preview_bg_pane

0xb83e,	// (0x0009f8de) popup_sp_fs_calendar_preview_list_pane

0xc0ad,	// (0x000a014d) bg_main_sp_fs_cale_pane_ParamLimits

0xc0ad,	// (0x000a014d) bg_main_sp_fs_cale_pane

0xe45e,	// (0x000a24fe) listscroll_cale_mrui_pane_ParamLimits

0xe45e,	// (0x000a24fe) listscroll_cale_mrui_pane

0xe473,	// (0x000a2513) listscroll_sp_fs_schedule_track_pane

0xe47c,	// (0x000a251c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe47c,	// (0x000a251c) main_sp_fs_ctrlbar_pane_cp01

0xe48f,	// (0x000a252f) main_sp_fs_ribbon_pane

0xe497,	// (0x000a2537) popup_sp_fs_cale_preview_window

0x8d73,	// (0x0009ce13) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d73,	// (0x0009ce13) list_single_sp_fs_schedule_track_pane

0xea8f,	// (0x000a2b2f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xea8f,	// (0x000a2b2f) bg_sp_fs_highlight_list_pane_cp03

0x8d96,	// (0x0009ce36) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d96,	// (0x0009ce36) list_single_sp_fs_schedule_track_pane_g1

0x8da2,	// (0x0009ce42) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8da2,	// (0x0009ce42) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x000a3e6d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x000a3e6d) list_single_sp_fs_schedule_track_pane_g

0x8dae,	// (0x0009ce4e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dae,	// (0x0009ce4e) list_single_sp_fs_schedule_track_pane_t1

0x8dc6,	// (0x0009ce66) sp_fs_schedule_track_pane_ParamLimits

0x8dc6,	// (0x0009ce66) sp_fs_schedule_track_pane

0xe4a9,	// (0x000a2549) sp_fs_schedule_track_pane_g1

0xe4b1,	// (0x000a2551) sp_fs_schedule_track_pane_g2

0xe4b9,	// (0x000a2559) sp_fs_schedule_track_pane_g3

0xe4c1,	// (0x000a2561) sp_fs_schedule_track_pane_g4

0xe4c9,	// (0x000a2569) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x000a3e72) sp_fs_schedule_track_pane_g

0xcf8f,	// (0x000a102f) bg_sp_fs_schedule_viewer_highlight_g1

0xa3b0,	// (0x0009e450) bg_sp_fs_schedule_viewer_highlight_g2

0xcf97,	// (0x000a1037) bg_sp_fs_schedule_viewer_highlight_g3

0xcf9f,	// (0x000a103f) bg_sp_fs_schedule_viewer_highlight_g4

0xd1c5,	// (0x000a1265) bg_sp_fs_schedule_viewer_highlight_g5

0xcfaf,	// (0x000a104f) bg_sp_fs_schedule_viewer_highlight_g6

0xcfb7,	// (0x000a1057) bg_sp_fs_schedule_viewer_highlight_g7

0xcfbf,	// (0x000a105f) bg_sp_fs_schedule_viewer_highlight_g8

0xa390,	// (0x0009e430) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x000a3e7d) bg_sp_fs_schedule_viewer_highlight_g

0xea44,	// (0x000a2ae4) bg_main_sp_fs_ribbon_pane

0x8dd6,	// (0x0009ce76) main_sp_fs_ribbon_pane_g1

0xe4d1,	// (0x000a2571) main_sp_fs_ribbon_pane_t1

0x8ddf,	// (0x0009ce7f) main_sp_fs_ribbon_pane_t2

0xe4e0,	// (0x000a2580) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x000a3e90) main_sp_fs_ribbon_pane_t

0xe4ef,	// (0x000a258f) main_sp_fs_ribbon_scheduler_pane

0xe4f7,	// (0x000a2597) bg_main_sp_fs_ribbon_pane_g1

0xe500,	// (0x000a25a0) bg_main_sp_fs_ribbon_pane_g2

0xe509,	// (0x000a25a9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x000a3e97) bg_main_sp_fs_ribbon_pane_g

0xe511,	// (0x000a25b1) main_sp_fs_ribbon_scheduler_pane_g1

0xe51a,	// (0x000a25ba) main_sp_fs_ribbon_scheduler_pane_g2

0xe523,	// (0x000a25c3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x000a3e9e) main_sp_fs_ribbon_scheduler_pane_g

0xe52c,	// (0x000a25cc) list_cale_mrui_pane

0x8dee,	// (0x0009ce8e) sp_fs_scroll_pane_cp07_ParamLimits

0x8dee,	// (0x0009ce8e) sp_fs_scroll_pane_cp07

0x8e0a,	// (0x0009ceaa) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e0a,	// (0x0009ceaa) bg_sp_fs_schedule_viewer_highlight

0xe539,	// (0x000a25d9) list_single_sp_fs_schedule_track_pane_cp01

0xe541,	// (0x000a25e1) list_sp_fs_schedule_track_pane

0xe549,	// (0x000a25e9) sp_fs_scroll_pane_cp06_ParamLimits

0xe549,	// (0x000a25e9) sp_fs_scroll_pane_cp06

0xc4b5,	// (0x000a0555) bgmain_sp_fs_calendar_pane_g1

0x8e17,	// (0x0009ceb7) list_single_cale_mrui_pane_ParamLimits

0x8e17,	// (0x0009ceb7) list_single_cale_mrui_pane

0xe55b,	// (0x000a25fb) list_single_cale_mrui_row_pane_ParamLimits

0xe55b,	// (0x000a25fb) list_single_cale_mrui_row_pane

0xe568,	// (0x000a2608) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe568,	// (0x000a2608) list_single_cale_mrui_row_pane_g1

0xe5ad,	// (0x000a264d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe5ad,	// (0x000a264d) list_single_cale_mrui_row_pane_t1

0x8e45,	// (0x0009cee5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e45,	// (0x0009cee5) list_single_cale_mrui_row_pane_t2

0xe5bf,	// (0x000a265f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe5bf,	// (0x000a265f) list_single_cale_mrui_row_pane_t3

0xe5ee,	// (0x000a268e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5ee,	// (0x000a268e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x000a3eac) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x000a3eac) list_single_cale_mrui_row_pane_t

0x8eab,	// (0x0009cf4b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8eab,	// (0x0009cf4b) list_single_cmail_header_editor_pane_bg_cp01

0x8ecb,	// (0x0009cf6b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ecb,	// (0x0009cf6b) list_single_cmail_header_editor_pane_bg_cp02

0x8ee7,	// (0x0009cf87) main_radioblah_text_pane_t1_ParamLimits

0x8ee7,	// (0x0009cf87) main_radioblah_text_pane_t1

0xe61d,	// (0x000a26bd) cam6_indi_pane_cp01

0xe625,	// (0x000a26c5) cam6_mode_pane_cp01

0xe62d,	// (0x000a26cd) cam6_pano_pane

0xe636,	// (0x000a26d6) cam6_zoom_pane_cp01

0xe63e,	// (0x000a26de) cam6_pano_image_pane

0xe649,	// (0x000a26e9) cam6_pano_pane_g1

0xdc88,	// (0x000a1d28) cam6_pano_pane_g2

0xe652,	// (0x000a26f2) cam6_pano_pane_g3

0xe65b,	// (0x000a26fb) cam6_pano_pane_g4

0xcad4,	// (0x000a0b74) cam6_pano_pane_g5

0xe664,	// (0x000a2704) cam6_pano_pane_g6

0xe66e,	// (0x000a270e) cam6_pano_pane_g7

0xe676,	// (0x000a2716) cam6_pano_pane_g8

0xe67f,	// (0x000a271f) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x000a3eb5) cam6_pano_pane_g

0xea44,	// (0x000a2ae4) main_browser_tag_pane

0xe3aa,	// (0x000a244a) grid_navstr_albumart_pane

0xe68a,	// (0x000a272a) cell_navstr_albumart_pane_ParamLimits

0xe68a,	// (0x000a272a) cell_navstr_albumart_pane

0xe6aa,	// (0x000a274a) cell_navstr_albumart_pane_g1

0xbe7e,	// (0x0009ff1e) cell_navstr_albumart_pane_g2

0xbe8e,	// (0x0009ff2e) cell_navstr_albumart_pane_g3

0xbe86,	// (0x0009ff26) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x000a3ec8) cell_navstr_albumart_pane_g

0x8f02,	// (0x0009cfa2) bt_list_pane_ParamLimits

0x8f02,	// (0x0009cfa2) bt_list_pane

0x8f23,	// (0x0009cfc3) bt_list_pane_t1

0x8f32,	// (0x0009cfd2) bt_list_pane_t2

0x0001,

0xfe31,	// (0x000a3ed1) bt_list_pane_t

0xea44,	// (0x000a2ae4) main_cale_prevew_pane

0x8f41,	// (0x0009cfe1) popup_cale_preview_window_ParamLimits

0x8f41,	// (0x0009cfe1) popup_cale_preview_window

0xea81,	// (0x000a2b21) bg_popup_preview_window_pane_cp05_ParamLimits

0xea81,	// (0x000a2b21) bg_popup_preview_window_pane_cp05

0xe6b2,	// (0x000a2752) list_cale_preview_pane_ParamLimits

0xe6b2,	// (0x000a2752) list_cale_preview_pane

0x8f5a,	// (0x0009cffa) list_double_cale_preview_pane_ParamLimits

0x8f5a,	// (0x0009cffa) list_double_cale_preview_pane

0x8f6c,	// (0x0009d00c) list_single_cale_preview_pane_ParamLimits

0x8f6c,	// (0x0009d00c) list_single_cale_preview_pane

0x8f80,	// (0x0009d020) list_single_cale_preview_pane_g1

0x8f88,	// (0x0009d028) list_single_cale_preview_pane_t1_ParamLimits

0x8f88,	// (0x0009d028) list_single_cale_preview_pane_t1

0x8f9d,	// (0x0009d03d) list_double_cale_preview_pane_g1

0x8fa5,	// (0x0009d045) list_double_cale_preview_pane_t1_ParamLimits

0x8fa5,	// (0x0009d045) list_double_cale_preview_pane_t1

0x8fba,	// (0x0009d05a) list_double_cale_preview_pane_t2_ParamLimits

0x8fba,	// (0x0009d05a) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x000a3ed6) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x000a3ed6) list_double_cale_preview_pane_t

0xea44,	// (0x000a2ae4) main_ezdial_pane

0xea81,	// (0x000a2b21) main_sp_fs_email_pane_ParamLimits

0x8595,	// (0x0009c635) cmail_ddmenu_btn01_pane_ParamLimits

0x8595,	// (0x0009c635) cmail_ddmenu_btn01_pane

0x85aa,	// (0x0009c64a) cmail_ddmenu_btn02_pane_ParamLimits

0x85aa,	// (0x0009c64a) cmail_ddmenu_btn02_pane

0x85c2,	// (0x0009c662) cmail_ddmenu_btn03_pane_ParamLimits

0x85c2,	// (0x0009c662) cmail_ddmenu_btn03_pane

0x85ea,	// (0x0009c68a) main_sp_fs_ctrlbar_pane_ParamLimits

0x8600,	// (0x0009c6a0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8be9,	// (0x0009cc89) list_cmail_body_pane_ParamLimits

0xe2b3,	// (0x000a2353) bg_button_pane_cp12

0xe2bc,	// (0x000a235c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2bc,	// (0x000a235c) list_single_cmail_header_detail_pane_g3

0xe305,	// (0x000a23a5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe305,	// (0x000a23a5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x000a3e59) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x000a3e59) list_single_cmail_header_detail_pane_t

0xe412,	// (0x000a24b2) phacti_term_pane_t2_ParamLimits

0xe412,	// (0x000a24b2) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x000a3e63) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x000a3e63) phacti_term_pane_t

0xe6be,	// (0x000a275e) aid_size_list_single_double

0x8fd2,	// (0x0009d072) popup_ezdial_listscroll_window

0x8ff6,	// (0x0009d096) popup_number_entry_window_cp01

0xa157,	// (0x0009e1f7) bg_popup_call_pane_cp09

0xe6ca,	// (0x000a276a) ezdial_list_pane

0xe6d2,	// (0x000a2772) scroll_pane_cp23

0xc29a,	// (0x000a033a) bg_button_pane_cp028_ParamLimits

0xc29a,	// (0x000a033a) bg_button_pane_cp028

0x9004,	// (0x0009d0a4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9004,	// (0x0009d0a4) cmail_ddmenu_btn01_pane_g1

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x000a3edb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x000a3edb) cmail_ddmenu_btn01_pane_g

0xe6da,	// (0x000a277a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe6da,	// (0x000a277a) cmail_ddmenu_btn01_pane_t1

0xc0ad,	// (0x000a014d) bg_button_pane_cp029_ParamLimits

0xc0ad,	// (0x000a014d) bg_button_pane_cp029

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn02_pane_g1

0x902d,	// (0x0009d0cd) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x902d,	// (0x0009d0cd) cmail_ddmenu_btn02_pane_t1

0xea8f,	// (0x000a2b2f) bg_button_pane_cp031_ParamLimits

0xea8f,	// (0x000a2b2f) bg_button_pane_cp031

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9014,	// (0x0009d0b4) cmail_ddmenu_btn03_pane_g1

0x902d,	// (0x0009d0cd) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x902d,	// (0x0009d0cd) cmail_ddmenu_btn03_pane_t1

0x5fab,	// (0x0009a04b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fc5,	// (0x0009a065) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fc5,	// (0x0009a065) cell_dialer2_keypad_pane_t1_copy1

0x7e43,	// (0x0009bee3) ncimui_group_button_pane

0xea81,	// (0x000a2b21) main_sp_fs_calendar_pane_ParamLimits

0x8c11,	// (0x0009ccb1) list_single_cmail_header_caption_pane_ParamLimits

0xe455,	// (0x000a24f5) aid_recal_txt_sm_pane

0xea44,	// (0x000a2ae4) mian_recal_day_pane

0xe497,	// (0x000a2537) popup_sp_fs_cale_preview_window_ParamLimits

0xe6ef,	// (0x000a278f) list_recal_day_pane

0xe731,	// (0x000a27d1) list_single_recal_day_pane_ParamLimits

0xe731,	// (0x000a27d1) list_single_recal_day_pane

0xe743,	// (0x000a27e3) list_single_recal_day_pane_g1_ParamLimits

0xe743,	// (0x000a27e3) list_single_recal_day_pane_g1

0xe74f,	// (0x000a27ef) list_single_recal_day_pane_g2_ParamLimits

0xe74f,	// (0x000a27ef) list_single_recal_day_pane_g2

0xe75b,	// (0x000a27fb) list_single_recal_day_pane_g3_ParamLimits

0xe75b,	// (0x000a27fb) list_single_recal_day_pane_g3

0x9051,	// (0x0009d0f1) list_single_recal_day_pane_g4_ParamLimits

0x9051,	// (0x0009d0f1) list_single_recal_day_pane_g4

0xe767,	// (0x000a2807) list_single_recal_day_pane_g5_ParamLimits

0xe767,	// (0x000a2807) list_single_recal_day_pane_g5

0xe773,	// (0x000a2813) list_single_recal_day_pane_g6_ParamLimits

0xe773,	// (0x000a2813) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x000a3eea) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x000a3eea) list_single_recal_day_pane_g

0xe787,	// (0x000a2827) list_single_recal_day_pane_t1

0xe799,	// (0x000a2839) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x000a3ef5) list_single_recal_day_pane_t

0x9069,	// (0x0009d109) ncimui_query_button_pane_ParamLimits

0x9069,	// (0x0009d109) ncimui_query_button_pane

0x9079,	// (0x0009d119) ncimui_query_button_pane_t1_ParamLimits

0x9079,	// (0x0009d119) ncimui_query_button_pane_t1

0xe7ab,	// (0x000a284b) ncimui_query_button_pane_t2_ParamLimits

0xe7ab,	// (0x000a284b) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x000a3efa) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x000a3efa) ncimui_query_button_pane_t

0x908c,	// (0x0009d12c) query_button_pane_ParamLimits

0x908c,	// (0x0009d12c) query_button_pane

0xea44,	// (0x000a2ae4) bg_button_pane_cp0028

0xe7be,	// (0x000a285e) query_button_pane_t1

0x43ae,	// (0x0009844e) main_tport_pane_ParamLimits

0x8af3,	// (0x0009cb93) bg_popup_window_pane_cp01_ParamLimits

0x8af3,	// (0x0009cb93) bg_popup_window_pane_cp01

0x8b01,	// (0x0009cba1) heading_pane_cp08_ParamLimits

0x8b01,	// (0x0009cba1) heading_pane_cp08

0x8b0f,	// (0x0009cbaf) heading_pane_cp07_ParamLimits

0x8b0f,	// (0x0009cbaf) heading_pane_cp07

0x8b7e,	// (0x0009cc1e) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x000a3e46) cell_tport_appsw_pane_g

0xb854,	// (0x0009f8f4) input_candi_list_open_g1

0xa573,	// (0x0009e613) list_cale_time_pane_g6_ParamLimits

0xa573,	// (0x0009e613) list_cale_time_pane_g6

0x4e2d,	// (0x00098ecd) aid_size_touch_calib_1_ParamLimits

0x4e2d,	// (0x00098ecd) aid_size_touch_calib_1

0x4e39,	// (0x00098ed9) aid_size_touch_calib_2_ParamLimits

0x4e39,	// (0x00098ed9) aid_size_touch_calib_2

0x4e47,	// (0x00098ee7) aid_size_touch_calib_3_ParamLimits

0x4e47,	// (0x00098ee7) aid_size_touch_calib_3

0x4e57,	// (0x00098ef7) aid_size_touch_calib_4_ParamLimits

0x4e57,	// (0x00098ef7) aid_size_touch_calib_4

0x4e65,	// (0x00098f05) main_touch_calib_button_group_pane_ParamLimits

0x4e65,	// (0x00098f05) main_touch_calib_button_group_pane

0x4e73,	// (0x00098f13) main_touch_calib_pane_g1_ParamLimits

0x4e7f,	// (0x00098f1f) main_touch_calib_pane_g2_ParamLimits

0x4e8b,	// (0x00098f2b) main_touch_calib_pane_g3_ParamLimits

0x4e97,	// (0x00098f37) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x000a3804) main_touch_calib_pane_g_ParamLimits

0x4ea3,	// (0x00098f43) main_touch_calib_pane_t1_ParamLimits

0x4ebc,	// (0x00098f5c) main_touch_calib_pane_t2_ParamLimits

0x4ed5,	// (0x00098f75) main_touch_calib_pane_t3_ParamLimits

0x4eeb,	// (0x00098f8b) main_touch_calib_pane_t4_ParamLimits

0x4f01,	// (0x00098fa1) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x000a380d) main_touch_calib_pane_t_ParamLimits

0xc877,	// (0x000a0917) list_single_fp_cale_pane_g3_ParamLimits

0xc877,	// (0x000a0917) list_single_fp_cale_pane_g3

0x4392,	// (0x00098432) bg_button_pane_cp012_ParamLimits

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp03_ParamLimits

0x6e17,	// (0x0009aeb7) cell_vitu2_function_top_pane_g1_ParamLimits

0x4392,	// (0x00098432) bg_vkb2_func_pane_cp04_ParamLimits

0x7dcb,	// (0x0009be6b) main_ncimui_button_group_pane_ParamLimits

0x7dcb,	// (0x0009be6b) main_ncimui_button_group_pane

0x7e31,	// (0x0009bed1) main_ncimui_pane_t3_ParamLimits

0x7e31,	// (0x0009bed1) main_ncimui_pane_t3

0xe3c0,	// (0x000a2460) phacti_button_group_pane

0xe6be,	// (0x000a275e) aid_size_list_single_double_ParamLimits

0x8fd2,	// (0x0009d072) popup_ezdial_listscroll_window_ParamLimits

0x8ff6,	// (0x0009d096) popup_number_entry_window_cp01_ParamLimits

0x9099,	// (0x0009d139) phacti_button_pane_ParamLimits

0x9099,	// (0x0009d139) phacti_button_pane

0xea44,	// (0x000a2ae4) bg_button_pane_cp14

0xe7cc,	// (0x000a286c) phacti_button_pane_t1

0x90aa,	// (0x0009d14a) main_touch_calib_button_pane_ParamLimits

0x90aa,	// (0x0009d14a) main_touch_calib_button_pane

0x9f80,	// (0x0009e020) bg_button_pane_cp18_ParamLimits

0x9f80,	// (0x0009e020) bg_button_pane_cp18

0xe7da,	// (0x000a287a) main_touch_calib_button_pane_t1_ParamLimits

0xe7da,	// (0x000a287a) main_touch_calib_button_pane_t1

0xe7f0,	// (0x000a2890) main_touch_calib_button_pane_t2_ParamLimits

0xe7f0,	// (0x000a2890) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x000a3eff) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x000a3eff) main_touch_calib_button_pane_t

0xea44,	// (0x000a2ae4) cell_ncimui_button_pane

0xea44,	// (0x000a2ae4) bg_button_pane_cp032

0xe80e,	// (0x000a28ae) cell_ncimui_button_pane_t1

0x6021,	// (0x0009a0c1) image3_infobar_pane_ParamLimits

0x6021,	// (0x0009a0c1) image3_infobar_pane

0x81ee,	// (0x0009c28e) fs_bigclock_status_pane_ParamLimits

0x81ee,	// (0x0009c28e) fs_bigclock_status_pane

0x81fb,	// (0x0009c29b) main_fs_bigclock_clock_pane_ParamLimits

0x81fb,	// (0x0009c29b) main_fs_bigclock_clock_pane

0x820f,	// (0x0009c2af) main_fs_bigclock_indi_pane_ParamLimits

0x820f,	// (0x0009c2af) main_fs_bigclock_indi_pane

0x8237,	// (0x0009c2d7) main_fs_bigclock_swipe_pane_ParamLimits

0x8237,	// (0x0009c2d7) main_fs_bigclock_swipe_pane

0xea44,	// (0x000a2ae4) main_fs_clock_dumped_data

0xdd95,	// (0x000a1e35) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd95,	// (0x000a1e35) list_single_fs_bigclock_indicator_pane_g1

0xddb1,	// (0x000a1e51) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddb1,	// (0x000a1e51) list_single_fs_bigclock_indicator_pane_g2

0xddcb,	// (0x000a1e6b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xddcb,	// (0x000a1e6b) list_single_fs_bigclock_indicator_pane_g3

0xdde5,	// (0x000a1e85) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdde5,	// (0x000a1e85) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000a3d27) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000a3d27) list_single_fs_bigclock_indicator_pane_g

0xde10,	// (0x000a1eb0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde10,	// (0x000a1eb0) list_single_fs_bigclock_indicator_pane_t1

0xde38,	// (0x000a1ed8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde38,	// (0x000a1ed8) list_single_fs_bigclock_indicator_pane_t2

0xde60,	// (0x000a1f00) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde60,	// (0x000a1f00) list_single_fs_bigclock_indicator_pane_t3

0xde88,	// (0x000a1f28) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde88,	// (0x000a1f28) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000a3d32) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000a3d32) list_single_fs_bigclock_indicator_pane_t

0xe81c,	// (0x000a28bc) image3_infobar_fav_pane_ParamLimits

0xe81c,	// (0x000a28bc) image3_infobar_fav_pane

0xe82c,	// (0x000a28cc) image3_infobar_loc_pane_ParamLimits

0xe82c,	// (0x000a28cc) image3_infobar_loc_pane

0xe840,	// (0x000a28e0) image3_infobar_time_pane_ParamLimits

0xe840,	// (0x000a28e0) image3_infobar_time_pane

0xc4b5,	// (0x000a0555) image3_infobar_time_pane_g1

0xe850,	// (0x000a28f0) image3_infobar_time_pane_t1

0xc4b5,	// (0x000a0555) image3_infobar_loc_pane_g1

0xe85e,	// (0x000a28fe) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000a3f04) image3_infobar_loc_pane_g

0xe866,	// (0x000a2906) image3_infobar_loc_pane_t1

0xc4b5,	// (0x000a0555) image3_infobar_fav_pane_g1

0xe874,	// (0x000a2914) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000a3f09) image3_infobar_fav_pane_g

0xe87c,	// (0x000a291c) fs_bigclock_status_battery_pane

0xe885,	// (0x000a2925) fs_bigclock_status_signal_pane

0xe88e,	// (0x000a292e) fs_bigclock_status_title_pane

0xe897,	// (0x000a2937) fs_bigclock_status_signal_pane_g1

0xe8a0,	// (0x000a2940) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000a3f0e) fs_bigclock_status_signal_pane_g

0xe8a8,	// (0x000a2948) fs_bigclock_status_battery_pane_g1

0xe8b1,	// (0x000a2951) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000a3f13) fs_bigclock_status_battery_pane_g

0xe8b9,	// (0x000a2959) fs_bigclock_status_title_pane_t1

0x90ba,	// (0x0009d15a) main_fs_bigclock_clock_pane_g1

0x90ba,	// (0x0009d15a) main_fs_bigclock_clock_pane_g2

0x90c7,	// (0x0009d167) main_fs_bigclock_clock_pane_g3

0x90c7,	// (0x0009d167) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000a3f18) main_fs_bigclock_clock_pane_g

0x90d3,	// (0x0009d173) main_fs_bigclock_clock_pane_t1

0x90e6,	// (0x0009d186) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000a3f21) main_fs_bigclock_clock_pane_t

0xe8c7,	// (0x000a2967) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe8c7,	// (0x000a2967) list_single_fs_bigclock_indicator_pane

0xe8d8,	// (0x000a2978) list_single_fs_bigclock_pane_ParamLimits

0xe8d8,	// (0x000a2978) list_single_fs_bigclock_pane

0xe8fe,	// (0x000a299e) main_fs_bigclock_indicator_pane_t1

0xe90d,	// (0x000a29ad) list_single_fs_bigclock_pane_g1

0xe915,	// (0x000a29b5) list_single_fs_bigclock_pane_t1

0xc4b5,	// (0x000a0555) main_fs_bigclock_swipe_pane_g1

0xe958,	// (0x000a29f8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000a3f32) main_fs_bigclock_swipe_pane_g

0xe960,	// (0x000a2a00) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe960,	// (0x000a2a00) main_fs_bigclock_swipe_pane_t1

0x33a7,	// (0x00097447) call_type_pane_ParamLimits

0xea44,	// (0x000a2ae4) main_btmg_pane

0xe594,	// (0x000a2634) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe594,	// (0x000a2634) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x000a3ea5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x000a3ea5) list_single_cale_mrui_row_pane_g

0xe718,	// (0x000a27b8) list_recal_vselct_arw_lo_pane

0xe720,	// (0x000a27c0) list_recal_vselct_arw_up_pane

0xe728,	// (0x000a27c8) list_recal_vselct_pane

0x913d,	// (0x0009d1dd) btmg_button_pane

0x9149,	// (0x0009d1e9) main_btmg_pane_g1

0xea44,	// (0x000a2ae4) bg_button_pane_cp044

0xe97d,	// (0x000a2a1d) btmg_button_pane_t1

0xc099,	// (0x000a0139) aid_listscroll_gen

0xea81,	// (0x000a2b21) main_cntbar_detail_pane

0xe295,	// (0x000a2335) list_cmail_folder_pane

0xbe72,	// (0x0009ff12) sp_fs_scroll_pane_cp03_ParamLimits

0x9151,	// (0x0009d1f1) list_single_fs_dyc_pane_cp01_ParamLimits

0x9151,	// (0x0009d1f1) list_single_fs_dyc_pane_cp01

0xe98b,	// (0x000a2a2b) aid_size_cmail_indent

0xe994,	// (0x000a2a34) list_single_dyc_row_pane_cp01

0x9199,	// (0x0009d239) cntbar_detail_list_pane_ParamLimits

0x9199,	// (0x0009d239) cntbar_detail_list_pane

0x91d3,	// (0x0009d273) main_cntbar_detail_cont_pane_ParamLimits

0x91d3,	// (0x0009d273) main_cntbar_detail_cont_pane

0x32cc,	// (0x0009736c) scroll_pane_cp032_ParamLimits

0x32cc,	// (0x0009736c) scroll_pane_cp032

0x91df,	// (0x0009d27f) cntbar_detail_list_event_pane_ParamLimits

0x91df,	// (0x0009d27f) cntbar_detail_list_event_pane

0x91a5,	// (0x0009d245) cntbar_detail_list_shct_pane

0xa3fe,	// (0x0009e49e) aid_list_gen

0xe99d,	// (0x000a2a3d) aid_scroll

0xe9a6,	// (0x000a2a46) aid_size_touch_scroll_bar

0x756f,	// (0x0009b60f) aid_list_double

0x91f3,	// (0x0009d293) aid_list_single

0x755d,	// (0x0009b5fd) aid_list_single_lg

0x91fc,	// (0x0009d29c) aid_list_z_g_a_sm

0x9204,	// (0x0009d2a4) aid_list_z_g_d

0x920c,	// (0x0009d2ac) aid_txt_z_prm

0x921a,	// (0x0009d2ba) aid_txt_z_prm_cp01

0x9228,	// (0x0009d2c8) aid_txt_z_sec

0x9236,	// (0x0009d2d6) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9236,	// (0x0009d2d6) main_cntbar_detail_cont_pane_g1

0x9243,	// (0x0009d2e3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9243,	// (0x0009d2e3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000a3f37) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000a3f37) main_cntbar_detail_cont_pane_g

0xe9af,	// (0x000a2a4f) main_cntbar_detail_cont_pane_t1

0xe9bd,	// (0x000a2a5d) main_cntbar_detail_cont_pane_t2

0xe9cb,	// (0x000a2a6b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x000a3f3c) main_cntbar_detail_cont_pane_t

0x924f,	// (0x0009d2ef) cell_cntbar_detail_list_shct_pane_ParamLimits

0x924f,	// (0x0009d2ef) cell_cntbar_detail_list_shct_pane

0xe9d9,	// (0x000a2a79) cntbar_detail_list_shct_pane_g1

0xe9e2,	// (0x000a2a82) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x000a3f43) cntbar_detail_list_shct_pane_g

0x9263,	// (0x0009d303) cntbar_detail_list_event_pane_g1_ParamLimits

0x9263,	// (0x0009d303) cntbar_detail_list_event_pane_g1

0x926f,	// (0x0009d30f) cntbar_detail_list_event_pane_g2_ParamLimits

0x926f,	// (0x0009d30f) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x000a3f48) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x000a3f48) cntbar_detail_list_event_pane_g

0x92db,	// (0x0009d37b) cntbar_detail_list_event_pane_t1_ParamLimits

0x92db,	// (0x0009d37b) cntbar_detail_list_event_pane_t1

0x92f0,	// (0x0009d390) cntbar_detail_list_event_pane_t2_ParamLimits

0x92f0,	// (0x0009d390) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x000a3f55) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x000a3f55) cntbar_detail_list_event_pane_t

0xc4b5,	// (0x000a0555) cell_cntbar_detail_list_shct_pane_g1

0xab4c,	// (0x0009ebec) navi_pane_mv_g3

0xea81,	// (0x000a2b21) main_cntbar_detail_pane_ParamLimits

0xea44,	// (0x000a2ae4) main_notif_wgt_pane

0x5cd5,	// (0x00099d75) aid_tch_main_mp4_pane_g4

0x5f0a,	// (0x00099faa) popup_slider_window_cp02

0xe70e,	// (0x000a27ae) list_recal_day_event_pane

0x9179,	// (0x0009d219) cntbar_detail_btn_pane_ParamLimits

0x9179,	// (0x0009d219) cntbar_detail_btn_pane

0x9189,	// (0x0009d229) cntbar_detail_btn_pane_cp01_ParamLimits

0x9189,	// (0x0009d229) cntbar_detail_btn_pane_cp01

0x91a5,	// (0x0009d245) cntbar_detail_list_shct_pane_ParamLimits

0x91b1,	// (0x0009d251) cntbar_detail_pane_g1_ParamLimits

0x91b1,	// (0x0009d251) cntbar_detail_pane_g1

0x91bd,	// (0x0009d25d) cntbar_detail_pane_t1_ParamLimits

0x91bd,	// (0x0009d25d) cntbar_detail_pane_t1

0x927b,	// (0x0009d31b) cntbar_detail_list_event_pane_g3_ParamLimits

0x927b,	// (0x0009d31b) cntbar_detail_list_event_pane_g3

0x9293,	// (0x0009d333) cntbar_detail_list_event_pane_g4_ParamLimits

0x9293,	// (0x0009d333) cntbar_detail_list_event_pane_g4

0x92ab,	// (0x0009d34b) cntbar_detail_list_event_pane_g5_ParamLimits

0x92ab,	// (0x0009d34b) cntbar_detail_list_event_pane_g5

0x92c3,	// (0x0009d363) cntbar_detail_list_event_pane_g6_ParamLimits

0x92c3,	// (0x0009d363) cntbar_detail_list_event_pane_g6

0x9305,	// (0x0009d3a5) cntbar_detail_list_event_pane_t3_ParamLimits

0x9305,	// (0x0009d3a5) cntbar_detail_list_event_pane_t3

0x9317,	// (0x0009d3b7) popup_notif_wgt_window_ParamLimits

0x9317,	// (0x0009d3b7) popup_notif_wgt_window

0x9327,	// (0x0009d3c7) popup_submenu_window_cp01_ParamLimits

0x9327,	// (0x0009d3c7) popup_submenu_window_cp01

0xa157,	// (0x0009e1f7) bg_popup_window_pane_cp10

0xe9eb,	// (0x000a2a8b) listscroll_notif_wgt_pane

0xe9fd,	// (0x000a2a9d) list_notif_wgt_window

0xea06,	// (0x000a2aa6) scroll_pane_cp033

0x9335,	// (0x0009d3d5) list_notif_wgt_row_pane_ParamLimits

0x9335,	// (0x0009d3d5) list_notif_wgt_row_pane

0xea0f,	// (0x000a2aaf) aid_size_list_notif_wgt_del

0xea1c,	// (0x000a2abc) list_notif_wgt_row_pane_g1

0xea28,	// (0x000a2ac8) list_notif_wgt_row_pane_g2

0xea37,	// (0x000a2ad7) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x000a3f5c) list_notif_wgt_row_pane_g

0xea9d,	// (0x000a2b3d) list_notif_wgt_row_pane_t1

0xeab3,	// (0x000a2b53) list_notif_wgt_row_pane_t2

0xeac5,	// (0x000a2b65) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x000a3f63) list_notif_wgt_row_pane_t

0xd1df,	// (0x000a127f) list_recal_day_event_pane_g1

0xead7,	// (0x000a2b77) list_recal_day_event_pane_t1

0xea44,	// (0x000a2ae4) bg_button_pane_cp045

0x9347,	// (0x0009d3e7) cntbar_detail_btn_pane_t1

0xc0ad,	// (0x000a014d) main_callh_pane_ParamLimits

0xc0ad,	// (0x000a014d) main_callh_pane

0xea44,	// (0x000a2ae4) main_coverflow0_pane

0xea44,	// (0x000a2ae4) main_wgtman_pane

0x824f,	// (0x0009c2ef) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x824f,	// (0x0009c2ef) main_fs_bigclock_unlock_btn_pane

0x8b76,	// (0x0009cc16) bg_button_pane_cp16

0x8b86,	// (0x0009cc26) cell_tport_appsw_pane_g3

0x9355,	// (0x0009d3f5) cf0_flow_pane_ParamLimits

0x9355,	// (0x0009d3f5) cf0_flow_pane

0xeae6,	// (0x000a2b86) listscroll_cf0_pane

0xeaf1,	// (0x000a2b91) main_cf0_pane_g1

0x9364,	// (0x0009d404) main_cf0_pane_t1_ParamLimits

0x9364,	// (0x0009d404) main_cf0_pane_t1

0x9378,	// (0x0009d418) main_cf0_pane_t2_ParamLimits

0x9378,	// (0x0009d418) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x000a3f6f) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x000a3f6f) main_cf0_pane_t

0xeb03,	// (0x000a2ba3) scroll_pane_cp11

0x938c,	// (0x0009d42c) cf0_flow_pane_g1

0x9394,	// (0x0009d434) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x000a3f74) cf0_flow_pane_g

0x939c,	// (0x0009d43c) cf0_flow_pane_t1

0xea44,	// (0x000a2ae4) main_call6_pane

0xea44,	// (0x000a2ae4) main_calllock_pane

0x93aa,	// (0x0009d44a) call6_btn_grp_pane_ParamLimits

0x93aa,	// (0x0009d44a) call6_btn_grp_pane

0x93b9,	// (0x0009d459) call6_pane_g1_ParamLimits

0x93b9,	// (0x0009d459) call6_pane_g1

0x93c8,	// (0x0009d468) popup_call6_1st_window_ParamLimits

0x93c8,	// (0x0009d468) popup_call6_1st_window

0x93d6,	// (0x0009d476) popup_call6_2nd_window_ParamLimits

0x93d6,	// (0x0009d476) popup_call6_2nd_window

0x93e4,	// (0x0009d484) cell_call6_btn_pane_ParamLimits

0x93e4,	// (0x0009d484) cell_call6_btn_pane

0xa157,	// (0x0009e1f7) bg_popup_call2_in_pane_cp03

0xeb0e,	// (0x000a2bae) popup_call6_1st_window_g1

0xeb16,	// (0x000a2bb6) popup_call6_1st_window_g2

0xeb1e,	// (0x000a2bbe) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x000a3f79) popup_call6_1st_window_g

0xeb26,	// (0x000a2bc6) popup_call6_1st_window_t1

0xeb35,	// (0x000a2bd5) popup_call6_1st_window_t2

0xeb45,	// (0x000a2be5) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x000a3f80) popup_call6_1st_window_t

0xa157,	// (0x0009e1f7) bg_popup_call2_in_pane_cp04

0xeb0e,	// (0x000a2bae) popup_call6_2nd_window_g1

0xeb16,	// (0x000a2bb6) popup_call6_2nd_window_g2

0xeb1e,	// (0x000a2bbe) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x000a3f79) popup_call6_2nd_window_g

0xeb26,	// (0x000a2bc6) popup_call6_2nd_window_t1

0xea44,	// (0x000a2ae4) bg_button_pane_cp15

0xeb55,	// (0x000a2bf5) cell_call6_btn_pane_g1

0xeb5e,	// (0x000a2bfe) cell_call6_btn_pane_t1

0x93f3,	// (0x0009d493) listscroll_wgtman_pane_ParamLimits

0x93f3,	// (0x0009d493) listscroll_wgtman_pane

0x940f,	// (0x0009d4af) wgtman_btn_pane_ParamLimits

0x940f,	// (0x0009d4af) wgtman_btn_pane

0xa960,	// (0x0009ea00) aid_scroll_copy1

0xeb6d,	// (0x000a2c0d) list_wgtman_pane

0x9444,	// (0x0009d4e4) wgtman_btn_pane_g1_ParamLimits

0x9444,	// (0x0009d4e4) wgtman_btn_pane_g1

0x946c,	// (0x0009d50c) wgtman_btn_pane_t1_ParamLimits

0x946c,	// (0x0009d50c) wgtman_btn_pane_t1

0xeb77,	// (0x000a2c17) wgtman_btn_pane_t2_ParamLimits

0xeb77,	// (0x000a2c17) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x000a3f87) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x000a3f87) wgtman_btn_pane_t

0x94a3,	// (0x0009d543) listrow_wgtman_pane_ParamLimits

0x94a3,	// (0x0009d543) listrow_wgtman_pane

0x94bf,	// (0x0009d55f) listrow_wgtman_pane_g1

0x94cc,	// (0x0009d56c) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x000a3f8c) listrow_wgtman_pane_g

0x94ea,	// (0x0009d58a) listrow_wgtman_pane_t1

0x9502,	// (0x0009d5a2) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x000a3f91) listrow_wgtman_pane_t

0x9528,	// (0x0009d5c8) wait_bar_pane_cp09

0xeb8e,	// (0x000a2c2e) main_calllock_btn_pane

0xeb98,	// (0x000a2c38) main_calllock_pane_g1

0xea44,	// (0x000a2ae4) bg_button_pane_cp17

0xeba3,	// (0x000a2c43) main_calllock_btn_pane_g1

0xebac,	// (0x000a2c4c) main_calllock_btn_pane_t1

0xea44,	// (0x000a2ae4) main_dialer3_pane

0xea44,	// (0x000a2ae4) main_fmrd2_pane

0xc4b5,	// (0x000a0555) main_fs_bigclock_unlock_btn_pane_g1

0x9542,	// (0x0009d5e2) main_fs_bigclock_unlock_btn_pane_t1

0x9550,	// (0x0009d5f0) area_fmrd2_info_pane_ParamLimits

0x9550,	// (0x0009d5f0) area_fmrd2_info_pane

0x955e,	// (0x0009d5fe) area_fmrd2_visual_pane_ParamLimits

0x955e,	// (0x0009d5fe) area_fmrd2_visual_pane

0x956c,	// (0x0009d60c) fmrd2_indi_pane_ParamLimits

0x956c,	// (0x0009d60c) fmrd2_indi_pane

0x9579,	// (0x0009d619) area_fmrd2_visual_pane_g1

0x9581,	// (0x0009d621) area_fmrd2_visual_pane_t1

0x9591,	// (0x0009d631) area_fmrd2_visual_pane_t2

0x95a1,	// (0x0009d641) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000a3f9b) area_fmrd2_visual_pane_t

0x95b1,	// (0x0009d651) area_fmrd2_info_pane_g1

0x95b9,	// (0x0009d659) area_fmrd2_info_pane_t1

0x95c9,	// (0x0009d669) area_fmrd2_info_pane_t2

0x95d9,	// (0x0009d679) area_fmrd2_info_pane_t3

0x95e9,	// (0x0009d689) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000a3fa2) area_fmrd2_info_pane_t

0x95f7,	// (0x0009d697) fmrd2_indi_pane_t1

0x9607,	// (0x0009d6a7) fmrd2_indi_pane_t2

0x9617,	// (0x0009d6b7) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000a3fab) fmrd2_indi_pane_t

0xddf4,	// (0x000a1e94) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddf4,	// (0x000a1e94) list_single_fs_bigclock_indicator_pane_g5

0xdea5,	// (0x000a1f45) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdea5,	// (0x000a1f45) list_single_fs_bigclock_indicator_pane_t5

0x8d26,	// (0x0009cdc6) aid_cell_bcale_month_pane_ParamLimits

0x8d26,	// (0x0009cdc6) aid_cell_bcale_month_pane

0x8d44,	// (0x0009cde4) bcale_month_pane_ParamLimits

0x8d44,	// (0x0009cde4) bcale_month_pane

0x8d62,	// (0x0009ce02) bcale_preview_pane_ParamLimits

0x8d62,	// (0x0009ce02) bcale_preview_pane

0xe915,	// (0x000a29b5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe934,	// (0x000a29d4) list_single_fs_bigclock_pane_t2_ParamLimits

0xe934,	// (0x000a29d4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000a3f2d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000a3f2d) list_single_fs_bigclock_pane_t

0x953a,	// (0x0009d5da) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x000a3f96) main_fs_bigclock_unlock_btn_pane_g

0x9625,	// (0x0009d6c5) aid_dia3_key_size_ParamLimits

0x9625,	// (0x0009d6c5) aid_dia3_key_size

0x9631,	// (0x0009d6d1) aid_dia3_listrow_size_ParamLimits

0x9631,	// (0x0009d6d1) aid_dia3_listrow_size

0x9641,	// (0x0009d6e1) dia3_keypad_fun_pane_ParamLimits

0x9641,	// (0x0009d6e1) dia3_keypad_fun_pane

0x9653,	// (0x0009d6f3) dia3_keypad_num_pane_ParamLimits

0x9653,	// (0x0009d6f3) dia3_keypad_num_pane

0x9665,	// (0x0009d705) dia3_listscroll_pane_ParamLimits

0x9665,	// (0x0009d705) dia3_listscroll_pane

0x9673,	// (0x0009d713) dia3_numentry_pane_ParamLimits

0x9673,	// (0x0009d713) dia3_numentry_pane

0xebbb,	// (0x000a2c5b) dia3_list_pane

0xebc6,	// (0x000a2c66) scroll_pane_cp12

0xea44,	// (0x000a2ae4) bg_dia3_numentry_pane

0x9681,	// (0x0009d721) dia3_numentry_pane_t1

0x9690,	// (0x0009d730) cell_dia3_key_num_pane

0x9698,	// (0x0009d738) cell_dia3_key0_fun_pane_ParamLimits

0x9698,	// (0x0009d738) cell_dia3_key0_fun_pane

0x96a5,	// (0x0009d745) cell_dia3_key1_fun_pane_ParamLimits

0x96a5,	// (0x0009d745) cell_dia3_key1_fun_pane

0x96b2,	// (0x0009d752) dia3_listrow_pane

0xdb47,	// (0x000a1be7) bg_dia3_numentry_pane_g1

0xea44,	// (0x000a2ae4) bg_button_pane_cp21

0xebd1,	// (0x000a2c71) cell_dia3_key_num_pane_t1

0xebdf,	// (0x000a2c7f) cell_dia3_key_num_pane_t2

0xebee,	// (0x000a2c8e) cell_dia3_key_num_pane_t3

0xebfd,	// (0x000a2c9d) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x000a3fb2) cell_dia3_key_num_pane_t

0xea44,	// (0x000a2ae4) bg_button_pane_cp19

0x96bf,	// (0x0009d75f) cell_dia3_key0_fun_pane_g1

0xea44,	// (0x000a2ae4) bg_button_pane_cp20

0x96c7,	// (0x0009d767) cell_dia3_key1_fun_pane_g1

0x96cf,	// (0x0009d76f) area_left_week_number_pane

0x96e2,	// (0x0009d782) area_top_day_name_pane

0x96f0,	// (0x0009d790) frame_month_view_pane

0xec0c,	// (0x000a2cac) grid_month_view_pane

0x9705,	// (0x0009d7a5) cell_top_day_name_pane_ParamLimits

0x9705,	// (0x0009d7a5) cell_top_day_name_pane

0x971f,	// (0x0009d7bf) cell_area_left_week_number_pane_ParamLimits

0x971f,	// (0x0009d7bf) cell_area_left_week_number_pane

0x9742,	// (0x0009d7e2) cell_month_view_pane_ParamLimits

0x9742,	// (0x0009d7e2) cell_month_view_pane

0xec1a,	// (0x000a2cba) frm_month_g1

0x976e,	// (0x0009d80e) frm_month_g2

0x977f,	// (0x0009d81f) frm_month_g3

0x9790,	// (0x0009d830) frm_month_g4

0x97a1,	// (0x0009d841) frm_month_g5

0x97b4,	// (0x0009d854) frm_month_g6

0x97c7,	// (0x0009d867) frm_month_g7

0xec27,	// (0x000a2cc7) frm_month_g8

0x97da,	// (0x0009d87a) frm_month_g9

0x97e7,	// (0x0009d887) frm_month_g10

0x97f4,	// (0x0009d894) frm_month_g11

0x9801,	// (0x0009d8a1) frm_month_g12

0x980e,	// (0x0009d8ae) frm_month_g13

0x981b,	// (0x0009d8bb) frm_month_g14

0x982a,	// (0x0009d8ca) frm_month_g15

0x9839,	// (0x0009d8d9) frm_month_g16

0x000f,

0xff1b,	// (0x000a3fbb) frm_month_g

0xec34,	// (0x000a2cd4) cell_top_day_name_pane_t1

0x9848,	// (0x0009d8e8) cell_area_left_week_number_pane_g1

0x9857,	// (0x0009d8f7) cell_area_left_week_number_pane_t1

0xc703,	// (0x000a07a3) cell_month_view_pane_g1

0x986d,	// (0x0009d90d) cell_month_view_pane_t1

0xea44,	// (0x000a2ae4) main_fps_pane

0xe095,	// (0x000a2135) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe095,	// (0x000a2135) cmail_ddmenu_btn02_pane_cp1

0xe0cc,	// (0x000a216c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0cc,	// (0x000a216c) cmail_ddmenu_btn02_pane_cp2

0x9020,	// (0x0009d0c0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9020,	// (0x0009d0c0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x000a3ee0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x000a3ee0) cmail_ddmenu_btn02_pane_g

0x903f,	// (0x0009d0df) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x903f,	// (0x0009d0df) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x000a3ee5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x000a3ee5) cmail_ddmenu_btn02_pane_t

0x9883,	// (0x0009d923) fps_text_pane_ParamLimits

0x9883,	// (0x0009d923) fps_text_pane

0x9890,	// (0x0009d930) main_fps_pane_g1_ParamLimits

0x9890,	// (0x0009d930) main_fps_pane_g1

0x989e,	// (0x0009d93e) wait_bar_pane_cp010_ParamLimits

0x989e,	// (0x0009d93e) wait_bar_pane_cp010

0x98aa,	// (0x0009d94a) fps_text_pane_t1_ParamLimits

0x98aa,	// (0x0009d94a) fps_text_pane_t1

0x62fa,	// (0x0009a39a) cam4_image_uncrop_pane_g1

0x6303,	// (0x0009a3a3) cam4_image_uncrop_pane_g2

0x630c,	// (0x0009a3ac) cam4_image_uncrop_pane_g3

0x6315,	// (0x0009a3b5) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x000a39a1) cam4_image_uncrop_pane_g

0x96b2,	// (0x0009d752) dia3_listrow_pane_ParamLimits

0xea44,	// (0x000a2ae4) main_phob2_pane

0x8b58,	// (0x0009cbf8) cell_tport_appsw_pane_cp02_ParamLimits

0x8b58,	// (0x0009cbf8) cell_tport_appsw_pane_cp02

0x8b67,	// (0x0009cc07) cell_tport_appsw_pane_cp03_ParamLimits

0x8b67,	// (0x0009cc07) cell_tport_appsw_pane_cp03

0xea44,	// (0x000a2ae4) phob2_contact_card_pane

0xea44,	// (0x000a2ae4) phob2_listscroll_pane

0xec47,	// (0x000a2ce7) phob2_list_pane

0xec4f,	// (0x000a2cef) scroll_pane_cp034

0x98c3,	// (0x0009d963) phob2_cc_data_pane_ParamLimits

0x98c3,	// (0x0009d963) phob2_cc_data_pane

0x98dd,	// (0x0009d97d) phob2_cc_listscroll_pane_ParamLimits

0x98dd,	// (0x0009d97d) phob2_cc_listscroll_pane

0x98f7,	// (0x0009d997) list_double_large_graphic_phob2_pane_ParamLimits

0x98f7,	// (0x0009d997) list_double_large_graphic_phob2_pane

0x9916,	// (0x0009d9b6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9916,	// (0x0009d9b6) list_double_large_graphic_phob2_pane_g1

0x992c,	// (0x0009d9cc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x992c,	// (0x0009d9cc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000a3fdc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000a3fdc) list_double_large_graphic_phob2_pane_g

0x9938,	// (0x0009d9d8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9938,	// (0x0009d9d8) list_double_large_graphic_phob2_pane_t1

0x994e,	// (0x0009d9ee) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x994e,	// (0x0009d9ee) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000a3fe1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000a3fe1) list_double_large_graphic_phob2_pane_t

0xea44,	// (0x000a2ae4) list_highlight_pane_cp024

0x9963,	// (0x0009da03) phob2_cc_button_pane

0x996b,	// (0x0009da0b) phob2_cc_data_pane_g1_ParamLimits

0x996b,	// (0x0009da0b) phob2_cc_data_pane_g1

0x9977,	// (0x0009da17) phob2_cc_data_pane_g2_ParamLimits

0x9977,	// (0x0009da17) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000a3fe6) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000a3fe6) phob2_cc_data_pane_g

0x9983,	// (0x0009da23) phob2_cc_data_pane_t1_ParamLimits

0x9983,	// (0x0009da23) phob2_cc_data_pane_t1

0x9995,	// (0x0009da35) phob2_cc_data_pane_t2_ParamLimits

0x9995,	// (0x0009da35) phob2_cc_data_pane_t2

0x99a7,	// (0x0009da47) phob2_cc_data_pane_t3_ParamLimits

0x99a7,	// (0x0009da47) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000a3feb) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000a3feb) phob2_cc_data_pane_t

0xec57,	// (0x000a2cf7) phob2_cc_list_pane_ParamLimits

0xec57,	// (0x000a2cf7) phob2_cc_list_pane

0xd40a,	// (0x000a14aa) scroll_pane_cp035_ParamLimits

0xd40a,	// (0x000a14aa) scroll_pane_cp035

0xea81,	// (0x000a2b21) bg_button_pane_cp033

0xec63,	// (0x000a2d03) phob2_cc_button_pane_g1

0xec6f,	// (0x000a2d0f) phob2_cc_button_pane_t1

0xec84,	// (0x000a2d24) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000a3ff2) phob2_cc_button_pane_t

0x99b9,	// (0x0009da59) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99b9,	// (0x0009da59) list_double_large_graphic_phob2_cc_pane

0x99e2,	// (0x0009da82) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99e2,	// (0x0009da82) list_double_large_graphic_phob2_cc_pane_g1

0x99f3,	// (0x0009da93) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99f3,	// (0x0009da93) list_double_large_graphic_phob2_cc_pane_g2

0x9a02,	// (0x0009daa2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a02,	// (0x0009daa2) list_double_large_graphic_phob2_cc_pane_g3

0x9a11,	// (0x0009dab1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a11,	// (0x0009dab1) list_double_large_graphic_phob2_cc_pane_g4

0x9a22,	// (0x0009dac2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a22,	// (0x0009dac2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000a3ff7) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000a3ff7) list_double_large_graphic_phob2_cc_pane_g

0x9a31,	// (0x0009dad1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a31,	// (0x0009dad1) list_double_large_graphic_phob2_cc_pane_t1

0x9a5a,	// (0x0009dafa) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a5a,	// (0x0009dafa) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000a4002) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000a4002) list_double_large_graphic_phob2_cc_pane_t

0xec96,	// (0x000a2d36) list_highlight_pane_cp025_ParamLimits

0xec96,	// (0x000a2d36) list_highlight_pane_cp025

0xea81,	// (0x000a2b21) bg_button_pane_cp033_ParamLimits

0xec63,	// (0x000a2d03) phob2_cc_button_pane_g1_ParamLimits

0xec6f,	// (0x000a2d0f) phob2_cc_button_pane_t1_ParamLimits

0xec84,	// (0x000a2d24) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000a3ff2) phob2_cc_button_pane_t_ParamLimits

0x1199,	// (0x00095239) popup_wgtman_window

0xd0a9,	// (0x000a1149) scroll_pane_cp038

0x942c,	// (0x0009d4cc) wgtman_btn_pane_cp_01_ParamLimits

0x942c,	// (0x0009d4cc) wgtman_btn_pane_cp_01

0xeca4,	// (0x000a2d44) wgtman_content_pane

0xecad,	// (0x000a2d4d) wgtman_heading_pane

0xea44,	// (0x000a2ae4) bg_heading_pane_cp02

0xecb6,	// (0x000a2d56) wgtman_heading_pane_g1

0xecbe,	// (0x000a2d5e) wgtman_heading_pane_t1

0xeccc,	// (0x000a2d6c) scroll_pane_cp036

0xecd4,	// (0x000a2d74) wgtman_list_pane

0xe0b1,	// (0x000a2151) wgtman_list_pane_t1_ParamLimits

0xe0b1,	// (0x000a2151) wgtman_list_pane_t1

0x6259,	// (0x0009a2f9) cam4_grid_pane

0x701a,	// (0x0009b0ba) bg_button_pane_cp015_ParamLimits

0x702c,	// (0x0009b0cc) bg_button_pane_cp016_ParamLimits

0x703f,	// (0x0009b0df) bg_button_pane_cp017_ParamLimits

0x7095,	// (0x0009b135) popup_vitu2_query_window_g3_ParamLimits

0x7095,	// (0x0009b135) popup_vitu2_query_window_g3

0x7150,	// (0x0009b1f0) popup_vitu2_query_window_t6_ParamLimits

0x7150,	// (0x0009b1f0) popup_vitu2_query_window_t6

0x717b,	// (0x0009b21b) popup_vitu2_query_window_t7_ParamLimits

0x717b,	// (0x0009b21b) popup_vitu2_query_window_t7

0xd0d6,	// (0x000a1176) cam4_grid_pane_g1

0xd0df,	// (0x000a117f) cam4_grid_pane_g2

0xecdc,	// (0x000a2d7c) cam4_grid_pane_g3

0xece5,	// (0x000a2d85) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000a4007) cam4_grid_pane_g

0x200d,	// (0x000960ad) aid_placing_vt_slider_lsc_ParamLimits

0x234d,	// (0x000963ed) vidtel_button_pane_ParamLimits

0x234d,	// (0x000963ed) vidtel_button_pane

0xea44,	// (0x000a2ae4) bg_button_pane_cp034

0x9a83,	// (0x0009db23) vidtel_button_pane_g1

0xecf0,	// (0x000a2d90) vidtel_button_pane_t1

0xd1bd,	// (0x000a125d) aid_size_vtel_slider_touch

0xd40a,	// (0x000a14aa) scroll_pane_cp039

0x7f8c,	// (0x0009c02c) ncim_query_button_pane_cp01_ParamLimits

0x7fab,	// (0x0009c04b) ncimui_query_pane_g1_ParamLimits

0xea81,	// (0x000a2b21) input_focus_pane_cp012_ParamLimits

0xdb8d,	// (0x000a1c2d) ncim_query_entry_pane_t1_ParamLimits

0xd40a,	// (0x000a14aa) scroll_pane_cp039_ParamLimits

0xaa37,	// (0x0009ead7) navi_pane_bcale_mc_g1

0xaa3f,	// (0x0009eadf) navi_pane_bcale_mc_t1

0xe115,	// (0x000a21b5) main_sp_fs_email_pane_g1

0xe121,	// (0x000a21c1) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000a3d98) main_sp_fs_email_pane_g

0xe5a0,	// (0x000a2640) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe5a0,	// (0x000a2640) list_single_cale_mrui_row_pane_g3

0x905f,	// (0x0009d0ff) list_single_recal_day_pane_g5_event_pane

0xe77f,	// (0x000a281f) list_single_recal_day_pane_g7

0xed06,	// (0x000a2da6) list_recal_day_event_pane_cp01

0xed0f,	// (0x000a2daf) list_recal_vselct_arw_lo_pane_cp01

0xed17,	// (0x000a2db7) list_recal_vselct_arw_up_pane_cp01

0xed1f,	// (0x000a2dbf) list_recal_vselct_pane_cp01

0xd1df,	// (0x000a127f) list_recal_day_event_pane_cp01_g1

0xed29,	// (0x000a2dc9) list_recal_day_event_pane_cp01_t1

0xe787,	// (0x000a2827) list_single_recal_day_pane_t1_ParamLimits

0xe799,	// (0x000a2839) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x000a3ef5) list_single_recal_day_pane_t_ParamLimits

0x9eaf,	// (0x0009df4f) bg_notes_pane_ParamLimits

0x9f5e,	// (0x0009dffe) list_notes_pane_ParamLimits

0x14fe,	// (0x0009559e) scroll_pane_cp06_ParamLimits

0x9f80,	// (0x0009e020) main_notes_pane_ParamLimits

0xea44,	// (0x000a2ae4) main_welc_pane

0x9a8b,	// (0x0009db2b) main_welc_body_pane_ParamLimits

0x9a8b,	// (0x0009db2b) main_welc_body_pane

0x9aa4,	// (0x0009db44) main_welc_opti_pane_ParamLimits

0x9aa4,	// (0x0009db44) main_welc_opti_pane

0x9ad7,	// (0x0009db77) main_welc_pane_t1_ParamLimits

0x9ad7,	// (0x0009db77) main_welc_pane_t1

0x9af1,	// (0x0009db91) main_welc_body_row_pane_ParamLimits

0x9af1,	// (0x0009db91) main_welc_body_row_pane

0xea8f,	// (0x000a2b2f) main_welc_opti_row_pane_ParamLimits

0xea8f,	// (0x000a2b2f) main_welc_opti_row_pane

0xed37,	// (0x000a2dd7) main_welc_opti_row_pane_g1

0x9b1a,	// (0x0009dbba) main_welc_opti_row_pane_t1

0xed3f,	// (0x000a2ddf) main_welc_body_row_pane_t1

0xe9f5,	// (0x000a2a95) popup_notif_wgt_heading_pane

0xea0f,	// (0x000a2aaf) aid_size_list_notif_wgt_del_ParamLimits

0xea1c,	// (0x000a2abc) list_notif_wgt_row_pane_g1_ParamLimits

0xea28,	// (0x000a2ac8) list_notif_wgt_row_pane_g2_ParamLimits

0xea37,	// (0x000a2ad7) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x000a3f5c) list_notif_wgt_row_pane_g_ParamLimits

0xea9d,	// (0x000a2b3d) list_notif_wgt_row_pane_t1_ParamLimits

0xeab3,	// (0x000a2b53) list_notif_wgt_row_pane_t2_ParamLimits

0xeac5,	// (0x000a2b65) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x000a3f63) list_notif_wgt_row_pane_t_ParamLimits

0x94bf,	// (0x0009d55f) listrow_wgtman_pane_g1_ParamLimits

0x94cc,	// (0x0009d56c) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x000a3f8c) listrow_wgtman_pane_g_ParamLimits

0x94ea,	// (0x0009d58a) listrow_wgtman_pane_t1_ParamLimits

0x9502,	// (0x0009d5a2) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x000a3f91) listrow_wgtman_pane_t_ParamLimits

0x9528,	// (0x0009d5c8) wait_bar_pane_cp09_ParamLimits

0xea44,	// (0x000a2ae4) bg_popup_heading_pane_cp02

0xed4e,	// (0x000a2dee) popup_notif_wgt_heading_pane_g1

0xed56,	// (0x000a2df6) popup_notif_wgt_heading_pane_t1

0xea44,	// (0x000a2ae4) main_vids_pane

0xea44,	// (0x000a2ae4) vids_listscroll_pane

0x9b29,	// (0x0009dbc9) scroll_pane_cp040

0xea44,	// (0x000a2ae4) vids_list_pane

0x9b34,	// (0x0009dbd4) vids_list_double_pane_ParamLimits

0x9b34,	// (0x0009dbd4) vids_list_double_pane

0x9b4c,	// (0x0009dbec) vids_list_double_pane_g1

0x9b55,	// (0x0009dbf5) vids_list_double_pane_t1

0x9b65,	// (0x0009dc05) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x000a4015) vids_list_double_pane_t

0x4392,	// (0x00098432) main_ncimui_pane_ParamLimits

0x7de3,	// (0x0009be83) main_ncimui_pane_g1_ParamLimits

0x7def,	// (0x0009be8f) main_ncimui_pane_g2_ParamLimits

0x7def,	// (0x0009be8f) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x000a3c9d) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x000a3c9d) main_ncimui_pane_g

0x9abd,	// (0x0009db5d) main_welc_pane_g1_ParamLimits

0x9abd,	// (0x0009db5d) main_welc_pane_g1

0x9ac9,	// (0x0009db69) main_welc_pane_g2_ParamLimits

0x9ac9,	// (0x0009db69) main_welc_pane_g2

0x0001,

0xff70,	// (0x000a4010) main_welc_pane_g_ParamLimits

0xff70,	// (0x000a4010) main_welc_pane_g

0x9eaf,	// (0x0009df4f) listscroll_mce_pane_ParamLimits

0xab8c,	// (0x0009ec2c) wait_bar_pane_cp10

0xc0a1,	// (0x000a0141) main_cale_day_pane_ParamLimits

0xc0a1,	// (0x000a0141) main_cale_week_pane_ParamLimits

0x9eaf,	// (0x0009df4f) main_messa_pane_ParamLimits

0x569f,	// (0x0009973f) main_clock2_btn_pane_ParamLimits

0x569f,	// (0x0009973f) main_clock2_btn_pane

0xc8ff,	// (0x000a099f) main_clock2_btn_pane_cp01_ParamLimits

0xc8ff,	// (0x000a099f) main_clock2_btn_pane_cp01

0xe52c,	// (0x000a25cc) list_cale_mrui_pane_ParamLimits

0xeafb,	// (0x000a2b9b) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x000a3f6a) main_cf0_pane_g

0x96cf,	// (0x0009d76f) area_left_week_number_pane_ParamLimits

0x96e2,	// (0x0009d782) area_top_day_name_pane_ParamLimits

0x96f0,	// (0x0009d790) frame_month_view_pane_ParamLimits

0xec0c,	// (0x000a2cac) grid_month_view_pane_ParamLimits

0xec1a,	// (0x000a2cba) frm_month_g1_ParamLimits

0x976e,	// (0x0009d80e) frm_month_g2_ParamLimits

0x977f,	// (0x0009d81f) frm_month_g3_ParamLimits

0x9790,	// (0x0009d830) frm_month_g4_ParamLimits

0x97a1,	// (0x0009d841) frm_month_g5_ParamLimits

0x97b4,	// (0x0009d854) frm_month_g6_ParamLimits

0x97c7,	// (0x0009d867) frm_month_g7_ParamLimits

0xec27,	// (0x000a2cc7) frm_month_g8_ParamLimits

0x97da,	// (0x0009d87a) frm_month_g9_ParamLimits

0x97e7,	// (0x0009d887) frm_month_g10_ParamLimits

0x97f4,	// (0x0009d894) frm_month_g11_ParamLimits

0x9801,	// (0x0009d8a1) frm_month_g12_ParamLimits

0x980e,	// (0x0009d8ae) frm_month_g13_ParamLimits

0x981b,	// (0x0009d8bb) frm_month_g14_ParamLimits

0x982a,	// (0x0009d8ca) frm_month_g15_ParamLimits

0x9839,	// (0x0009d8d9) frm_month_g16_ParamLimits

0xff1b,	// (0x000a3fbb) frm_month_g_ParamLimits

0xec34,	// (0x000a2cd4) cell_top_day_name_pane_t1_ParamLimits

0x9848,	// (0x0009d8e8) cell_area_left_week_number_pane_g1_ParamLimits

0x9857,	// (0x0009d8f7) cell_area_left_week_number_pane_t1_ParamLimits

0xc703,	// (0x000a07a3) cell_month_view_pane_g1_ParamLimits

0x986d,	// (0x0009d90d) cell_month_view_pane_t1_ParamLimits

0x9ea7,	// (0x0009df47) main_clock2_btn_pane_g1

0xed64,	// (0x000a2e04) main_clock2_btn_pane_t1

0xea81,	// (0x000a2b21) listscroll_cmail_pane_ParamLimits

0xe115,	// (0x000a21b5) main_sp_fs_email_pane_g1_ParamLimits

0xe121,	// (0x000a21c1) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000a3d98) main_sp_fs_email_pane_g_ParamLimits

0xe6ef,	// (0x000a278f) list_recal_day_pane_ParamLimits

0xe700,	// (0x000a27a0) mian_recal_day_pane_t1

0x8832,	// (0x0009c8d2) list_single_dyc_row_text_pane_t4_ParamLimits

0x8832,	// (0x0009c8d2) list_single_dyc_row_text_pane_t4

0x8869,	// (0x0009c909) list_single_dyc_row_text_pane_t5_ParamLimits

0x8869,	// (0x0009c909) list_single_dyc_row_text_pane_t5

0xe1c3,	// (0x000a2263) list_single_dyc_row_text_pane_t6_ParamLimits

0xe1c3,	// (0x000a2263) list_single_dyc_row_text_pane_t6

0x31f0,	// (0x00097290) aid_mgn_list_cale_time_pane

0x4392,	// (0x00098432) main_gallery2_pane_ParamLimits

0xc915,	// (0x000a09b5) main_clock2_pane_cp01_t1

0xc923,	// (0x000a09c3) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x000a3877) main_clock2_pane_cp01_t

0x1941,	// (0x000959e1) cale_week_scroll_pane_g16_ParamLimits

0x1941,	// (0x000959e1) cale_week_scroll_pane_g16

0xa157,	// (0x0009e1f7) vorec_slider_pane

0xecf0,	// (0x000a2d90) vidtel_button_pane_t1_ParamLimits

0x90ba,	// (0x0009d15a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90ba,	// (0x0009d15a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90c7,	// (0x0009d167) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90c7,	// (0x0009d167) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x000a3f18) main_fs_bigclock_clock_pane_g_ParamLimits

0x90d3,	// (0x0009d173) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90e6,	// (0x0009d186) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x000a3f21) main_fs_bigclock_clock_pane_t_ParamLimits
};


const AknLayoutScalable_Apps::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&TextLineVRC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&WindowLineRCV,
	&ParameterLimitsV,
	&WindowLineRCV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRCV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large

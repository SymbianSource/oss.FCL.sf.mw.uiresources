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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009cc0d };

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
0x0bdb,	// (0x0009d7e8) Screen

0x0be7,	// (0x0009d7f4) application_window

0x0c3b,	// (0x0009d848) area_bottom_pane_ParamLimits

0x0c3b,	// (0x0009d848) area_bottom_pane

0x0c99,	// (0x0009d8a6) area_top_pane_ParamLimits

0x0c99,	// (0x0009d8a6) area_top_pane

0x0cfd,	// (0x0009d90a) call_video_uplink_pane_ParamLimits

0x0cfd,	// (0x0009d90a) call_video_uplink_pane

0x0d3c,	// (0x0009d949) main_pane_ParamLimits

0x0d3c,	// (0x0009d949) main_pane

0xca65,	// (0x000a9672) context_pane

0x4355,	// (0x000a0f62) navi_pane

0x437d,	// (0x000a0f8a) popup_cale_events_window_ParamLimits

0x437d,	// (0x000a0f8a) popup_cale_events_window

0xca78,	// (0x000a9685) popup_mup_playback_window

0x4395,	// (0x000a0fa2) signal_pane

0xa9b6,	// (0x000a75c3) main_browser_pane

0xab5e,	// (0x000a776b) main_burst_pane

0x41a5,	// (0x000a0db2) main_calc_pane

0xca4b,	// (0x000a9658) main_cale_day_pane

0x41b2,	// (0x000a0dbf) main_cale_month_pane

0xca4b,	// (0x000a9658) main_cale_week_pane

0xab5e,	// (0x000a776b) main_call_pane

0xa239,	// (0x000a6e46) main_call_poc_pane

0xab5e,	// (0x000a776b) main_camera_pane

0xab5e,	// (0x000a776b) main_chi_dic_pane

0xb3d4,	// (0x000a7fe1) main_clock_pane

0xa239,	// (0x000a6e46) main_fmradio_pane

0xab5e,	// (0x000a776b) main_graph_messa_pane

0xa239,	// (0x000a6e46) main_help_pane

0xa9b6,	// (0x000a75c3) main_im_pane

0xa494,	// (0x000a70a1) main_image_pane_ParamLimits

0xa494,	// (0x000a70a1) main_image_pane

0xa239,	// (0x000a6e46) main_location2_pane

0xab5e,	// (0x000a776b) main_location_pane

0xa494,	// (0x000a70a1) main_messa_pane

0xa239,	// (0x000a6e46) main_mp2_pane

0xab5e,	// (0x000a776b) main_mp_pane

0xa239,	// (0x000a6e46) main_msg_pane

0xa239,	// (0x000a6e46) main_mup_eq_pane

0xa239,	// (0x000a6e46) main_mup_pane

0xa9b6,	// (0x000a75c3) main_notes_pane

0xa239,	// (0x000a6e46) main_pec_pane

0xa239,	// (0x000a6e46) main_phob_pane

0xa239,	// (0x000a6e46) main_pinb_pane

0xa239,	// (0x000a6e46) main_postcard_pane

0xa239,	// (0x000a6e46) main_qdial_pane

0xab5e,	// (0x000a776b) main_skin_pane

0xa239,	// (0x000a6e46) main_smil2_pane

0xab5e,	// (0x000a776b) main_smil_pane

0xab5e,	// (0x000a776b) main_video_pane

0xab5e,	// (0x000a776b) main_video_tele_pane

0xa494,	// (0x000a70a1) main_viewer_pane_ParamLimits

0xa494,	// (0x000a70a1) main_viewer_pane

0xab5e,	// (0x000a776b) main_vorec_pane

0x4205,	// (0x000a0e12) popup_blid_sat_info_window_ParamLimits

0x4205,	// (0x000a0e12) popup_blid_sat_info_window

0x422b,	// (0x000a0e38) popup_dyc_status_message_window_ParamLimits

0x422b,	// (0x000a0e38) popup_dyc_status_message_window

0x423b,	// (0x000a0e48) popup_grid_large_graphic_window_ParamLimits

0x423b,	// (0x000a0e48) popup_grid_large_graphic_window

0x42d0,	// (0x000a0edd) popup_loc_request_window_ParamLimits

0x42d0,	// (0x000a0edd) popup_loc_request_window

0x4329,	// (0x000a0f36) popup_wml_address_window_ParamLimits

0x4329,	// (0x000a0f36) popup_wml_address_window

0x407d,	// (0x000a0c8a) call_muted_g1

0x3d3c,	// (0x000a0949) popup_call_audio_conf_window_ParamLimits

0x3d3c,	// (0x000a0949) popup_call_audio_conf_window

0x408d,	// (0x000a0c9a) popup_call_audio_first_window_ParamLimits

0x408d,	// (0x000a0c9a) popup_call_audio_first_window

0x40cd,	// (0x000a0cda) popup_call_audio_in_window_ParamLimits

0x40cd,	// (0x000a0cda) popup_call_audio_in_window

0x40f1,	// (0x000a0cfe) popup_call_audio_out_window_ParamLimits

0x40f1,	// (0x000a0cfe) popup_call_audio_out_window

0x4113,	// (0x000a0d20) popup_call_audio_second_window_ParamLimits

0x4113,	// (0x000a0d20) popup_call_audio_second_window

0x4143,	// (0x000a0d50) popup_call_audio_wait_window_ParamLimits

0x4143,	// (0x000a0d50) popup_call_audio_wait_window

0x4164,	// (0x000a0d71) popup_number_entry_window_ParamLimits

0x4164,	// (0x000a0d71) popup_number_entry_window

0x9df1,	// (0x000a69fe) bg_popup_call_pane_cp05_ParamLimits

0x9df1,	// (0x000a69fe) bg_popup_call_pane_cp05

0x9e11,	// (0x000a6a1e) popup_number_entry_window_t1

0x9e24,	// (0x000a6a31) popup_number_entry_window_t2

0x9e36,	// (0x000a6a43) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000abcd3) popup_number_entry_window_t

0x9e7d,	// (0x000a6a8a) text_title_cp2

0x9e90,	// (0x000a6a9d) bg_popup_call_pane_cp_ParamLimits

0x9e90,	// (0x000a6a9d) bg_popup_call_pane_cp

0x9e9e,	// (0x000a6aab) call_thumbnail_pane

0x9ea6,	// (0x000a6ab3) popup_call_audio_in_window_g1_ParamLimits

0x9ea6,	// (0x000a6ab3) popup_call_audio_in_window_g1

0x9eb2,	// (0x000a6abf) popup_call_audio_in_window_g2_ParamLimits

0x9eb2,	// (0x000a6abf) popup_call_audio_in_window_g2

0x9ebe,	// (0x000a6acb) popup_call_audio_in_window_g3_ParamLimits

0x9ebe,	// (0x000a6acb) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000abcdc) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000abcdc) popup_call_audio_in_window_g

0x9eca,	// (0x000a6ad7) popup_call_audio_in_window_t1_ParamLimits

0x9eca,	// (0x000a6ad7) popup_call_audio_in_window_t1

0x9ee6,	// (0x000a6af3) popup_call_audio_in_window_t2_ParamLimits

0x9ee6,	// (0x000a6af3) popup_call_audio_in_window_t2

0x9f02,	// (0x000a6b0f) popup_call_audio_in_window_t3_ParamLimits

0x9f02,	// (0x000a6b0f) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000abce3) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000abce3) popup_call_audio_in_window_t

0x9e90,	// (0x000a6a9d) bg_popup_call_pane_cp01_ParamLimits

0x9e90,	// (0x000a6a9d) bg_popup_call_pane_cp01

0x9e9e,	// (0x000a6aab) call_thumbnail_pane_cp02

0x9f15,	// (0x000a6b22) call_type_pane_cp022

0x9f1d,	// (0x000a6b2a) popup_call_audio_out_window_g1_ParamLimits

0x9f1d,	// (0x000a6b2a) popup_call_audio_out_window_g1

0x9f2f,	// (0x000a6b3c) popup_call_audio_out_window_g2_ParamLimits

0x9f2f,	// (0x000a6b3c) popup_call_audio_out_window_g2

0x9f3b,	// (0x000a6b48) popup_call_audio_out_window_g3_ParamLimits

0x9f3b,	// (0x000a6b48) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000abcea) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000abcea) popup_call_audio_out_window_g

0x9f4d,	// (0x000a6b5a) popup_call_audio_out_window_t1_ParamLimits

0x9f4d,	// (0x000a6b5a) popup_call_audio_out_window_t1

0x9f65,	// (0x000a6b72) popup_call_audio_out_window_t2_ParamLimits

0x9f65,	// (0x000a6b72) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000abcf1) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000abcf1) popup_call_audio_out_window_t

0x9f7a,	// (0x000a6b87) bg_popup_call_pane_ParamLimits

0x9f7a,	// (0x000a6b87) bg_popup_call_pane

0x0f1f,	// (0x0009db2c) call_thumbnail_pane_cp_ParamLimits

0x0f1f,	// (0x0009db2c) call_thumbnail_pane_cp

0x9ffe,	// (0x000a6c0b) call_type_pane_cp01_ParamLimits

0x9ffe,	// (0x000a6c0b) call_type_pane_cp01

0xa042,	// (0x000a6c4f) popup_call_audio_first_window_g1_ParamLimits

0xa042,	// (0x000a6c4f) popup_call_audio_first_window_g1

0xa08e,	// (0x000a6c9b) popup_call_audio_first_window_g2_ParamLimits

0xa08e,	// (0x000a6c9b) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000abcf6) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000abcf6) popup_call_audio_first_window_g

0xa0d2,	// (0x000a6cdf) popup_call_audio_first_window_t1_ParamLimits

0xa0d2,	// (0x000a6cdf) popup_call_audio_first_window_t1

0xa17e,	// (0x000a6d8b) popup_call_audio_first_window_t4_ParamLimits

0xa17e,	// (0x000a6d8b) popup_call_audio_first_window_t4

0xa20a,	// (0x000a6e17) popup_call_audio_first_window_t5_ParamLimits

0xa20a,	// (0x000a6e17) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000abcfb) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000abcfb) popup_call_audio_first_window_t

0xa239,	// (0x000a6e46) bg_popup_call_pane_cp02

0xa243,	// (0x000a6e50) call_type_pane_cp023

0xa24b,	// (0x000a6e58) popup_call_audio_wait_window_g1

0xa253,	// (0x000a6e60) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000abd02) popup_call_audio_wait_window_g

0xa25b,	// (0x000a6e68) popup_call_audio_wait_window_t3

0xa269,	// (0x000a6e76) bg_popup_call_pane_cp03_ParamLimits

0xa269,	// (0x000a6e76) bg_popup_call_pane_cp03

0xa2c9,	// (0x000a6ed6) call_thumbnail_pane_cp011_ParamLimits

0xa2c9,	// (0x000a6ed6) call_thumbnail_pane_cp011

0xa2d5,	// (0x000a6ee2) call_type_pane_cp034_ParamLimits

0xa2d5,	// (0x000a6ee2) call_type_pane_cp034

0xa311,	// (0x000a6f1e) popup_call_audio_second_window_g1_ParamLimits

0xa311,	// (0x000a6f1e) popup_call_audio_second_window_g1

0xa34d,	// (0x000a6f5a) popup_call_audio_second_window_g2_ParamLimits

0xa34d,	// (0x000a6f5a) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000abd07) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000abd07) popup_call_audio_second_window_g

0xa389,	// (0x000a6f96) popup_call_audio_second_window_t1_ParamLimits

0xa389,	// (0x000a6f96) popup_call_audio_second_window_t1

0xa40a,	// (0x000a7017) popup_call_audio_second_window_t2_ParamLimits

0xa40a,	// (0x000a7017) popup_call_audio_second_window_t2

0xa440,	// (0x000a704d) popup_call_audio_second_window_t3_ParamLimits

0xa440,	// (0x000a704d) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000abd0c) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000abd0c) popup_call_audio_second_window_t

0xa239,	// (0x000a6e46) bg_popup_call_pane_cp04

0xa476,	// (0x000a7083) list_conf_pane

0xa47e,	// (0x000a708b) popup_call_audio_conf_window_t1

0xa48c,	// (0x000a7099) call_thumbnail_pane_g1

0xa494,	// (0x000a70a1) bg_pinb_pane_ParamLimits

0xa494,	// (0x000a70a1) bg_pinb_pane

0xa4a2,	// (0x000a70af) find_pinb_pane

0xa4ab,	// (0x000a70b8) listscroll_pinb_pane_ParamLimits

0xa4ab,	// (0x000a70b8) listscroll_pinb_pane

0xa4ba,	// (0x000a70c7) pinb_bg_pane_g1

0x0f43,	// (0x0009db50) pinb_bg_pane_g2

0x0f4f,	// (0x0009db5c) pinb_bg_pane_g3

0x0f5b,	// (0x0009db68) pinb_bg_pane_g4

0x0f67,	// (0x0009db74) pinb_bg_pane_g5

0x0f73,	// (0x0009db80) pinb_bg_pane_g6

0x0f7e,	// (0x0009db8b) pinb_bg_pane_g7

0x0f89,	// (0x0009db96) pinb_bg_pane_g8

0x0f94,	// (0x0009dba1) pinb_bg_pane_g9

0x0f9e,	// (0x0009dbab) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000abd13) pinb_bg_pane_g

0x0fbb,	// (0x0009dbc8) grid_pinb_pane

0x0fc6,	// (0x0009dbd3) list_pinb_pane

0x0fd1,	// (0x0009dbde) scroll_pane_cp01_ParamLimits

0x0fd1,	// (0x0009dbde) scroll_pane_cp01

0xa4c4,	// (0x000a70d1) find_pinb_pane_g1_ParamLimits

0xa4c4,	// (0x000a70d1) find_pinb_pane_g1

0xa4dc,	// (0x000a70e9) find_pinb_pane_t1

0xa4ee,	// (0x000a70fb) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000abd2d) find_pinb_pane_t

0xa503,	// (0x000a7110) input_focus_pane_cp01_ParamLimits

0xa503,	// (0x000a7110) input_focus_pane_cp01

0x0fe3,	// (0x0009dbf0) cell_pinb_pane_ParamLimits

0x0fe3,	// (0x0009dbf0) cell_pinb_pane

0x1008,	// (0x0009dc15) cell_pinb_pane_g1_ParamLimits

0x1008,	// (0x0009dc15) cell_pinb_pane_g1

0x101d,	// (0x0009dc2a) cell_pinb_pane_g2_ParamLimits

0x101d,	// (0x0009dc2a) cell_pinb_pane_g2

0xa50f,	// (0x000a711c) cell_pinb_pane_g3_ParamLimits

0xa50f,	// (0x000a711c) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000abd32) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000abd32) cell_pinb_pane_g

0xa239,	// (0x000a6e46) grid_highlight_pane_cp01

0x1029,	// (0x0009dc36) list_pinb_item_pane_ParamLimits

0x1029,	// (0x0009dc36) list_pinb_item_pane

0xa239,	// (0x000a6e46) list_highlight_pane_cp02

0x1047,	// (0x0009dc54) list_pinb_item_pane_g1_ParamLimits

0x1047,	// (0x0009dc54) list_pinb_item_pane_g1

0x1054,	// (0x0009dc61) list_pinb_item_pane_g2_ParamLimits

0x1054,	// (0x0009dc61) list_pinb_item_pane_g2

0x1060,	// (0x0009dc6d) list_pinb_item_pane_g3_ParamLimits

0x1060,	// (0x0009dc6d) list_pinb_item_pane_g3

0x1071,	// (0x0009dc7e) list_pinb_item_pane_g4_ParamLimits

0x1071,	// (0x0009dc7e) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000abd39) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000abd39) list_pinb_item_pane_g

0x107d,	// (0x0009dc8a) list_pinb_item_pane_t1_ParamLimits

0x107d,	// (0x0009dc8a) list_pinb_item_pane_t1

0x10ae,	// (0x0009dcbb) calc_display_pane

0x10cc,	// (0x0009dcd9) calc_paper_pane

0x10e8,	// (0x0009dcf5) grid_calc_pane

0xa239,	// (0x000a6e46) bg_list_pane_cp01

0x1114,	// (0x0009dd21) clock_g1

0x111c,	// (0x0009dd29) clock_g2

0x0001,

0xf135,	// (0x000abd42) clock_g

0x1126,	// (0x0009dd33) clock_t1_ParamLimits

0x1126,	// (0x0009dd33) clock_t1

0x113b,	// (0x0009dd48) clock_t2_ParamLimits

0x113b,	// (0x0009dd48) clock_t2

0x114d,	// (0x0009dd5a) clock_t3_ParamLimits

0x114d,	// (0x0009dd5a) clock_t3

0x115f,	// (0x0009dd6c) clock_t4_ParamLimits

0x115f,	// (0x0009dd6c) clock_t4

0x1171,	// (0x0009dd7e) clock_t5_ParamLimits

0x1171,	// (0x0009dd7e) clock_t5

0x1186,	// (0x0009dd93) clock_t6_ParamLimits

0x1186,	// (0x0009dd93) clock_t6

0x1198,	// (0x0009dda5) clock_t7_ParamLimits

0x1198,	// (0x0009dda5) clock_t7

0x11aa,	// (0x0009ddb7) clock_t8_ParamLimits

0x11aa,	// (0x0009ddb7) clock_t8

0x11c0,	// (0x0009ddcd) clock_t9_ParamLimits

0x11c0,	// (0x0009ddcd) clock_t9

0x0008,

0xf13a,	// (0x000abd47) clock_t_ParamLimits

0xf13a,	// (0x000abd47) clock_t

0xa51b,	// (0x000a7128) popup_clock_analogue_window_cp02

0xa51b,	// (0x000a7128) popup_clock_digital_window_cp01

0xa980,	// (0x000a758d) listscroll_help_pane

0xa239,	// (0x000a6e46) phob_pre_status_pane

0xa98a,	// (0x000a7597) grid_qdial_pane

0xa494,	// (0x000a70a1) listscroll_mce_pane

0xa494,	// (0x000a70a1) bg_notes_pane

0xa994,	// (0x000a75a1) list_notes_pane

0x11d6,	// (0x0009dde3) scroll_pane_cp06

0xa9a2,	// (0x000a75af) bg_calc_paper_pane

0x11e5,	// (0x0009ddf2) list_calc_pane

0xa9b6,	// (0x000a75c3) bg_calc_display_pane

0x11ff,	// (0x0009de0c) calc_display_pane_t1

0x1214,	// (0x0009de21) calc_display_pane_t2

0x1229,	// (0x0009de36) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000abd5a) calc_display_pane_t

0x123b,	// (0x0009de48) cell_calc_pane_ParamLimits

0x123b,	// (0x0009de48) cell_calc_pane

0xa9c2,	// (0x000a75cf) bg_calc_paper_pane_g1

0xa9ce,	// (0x000a75db) bg_calc_paper_pane_g2

0xa9da,	// (0x000a75e7) bg_calc_paper_pane_g3

0xa9e6,	// (0x000a75f3) bg_calc_paper_pane_g4

0xa9f2,	// (0x000a75ff) bg_calc_paper_pane_g5

0x126a,	// (0x0009de77) bg_calc_paper_pane_g6

0x127b,	// (0x0009de88) bg_calc_paper_pane_g7

0x128c,	// (0x0009de99) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000abd61) bg_calc_paper_pane_g

0x129d,	// (0x0009deaa) calc_bg_paper_pane_g9

0x12ae,	// (0x0009debb) list_calc_item_pane_ParamLimits

0x12ae,	// (0x0009debb) list_calc_item_pane

0xa9fe,	// (0x000a760b) list_calc_item_pane_g1

0x12cf,	// (0x0009dedc) list_calc_item_pane_t1_ParamLimits

0x12cf,	// (0x0009dedc) list_calc_item_pane_t1

0x12e1,	// (0x0009deee) list_calc_item_pane_t2_ParamLimits

0x12e1,	// (0x0009deee) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000abd72) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000abd72) list_calc_item_pane_t

0xaa0b,	// (0x000a7618) cell_calc_pane_g1

0xaa15,	// (0x000a7622) grid_highlight_pane_cp02

0xdd67,	// (0x000aa974) bg_calc_display_pane_g1

0x1311,	// (0x0009df1e) bg_calc_display_pane_g2

0xd924,	// (0x000aa531) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000abd7c) bg_calc_display_pane_g

0x131b,	// (0x0009df28) cell_qdial_pane_ParamLimits

0x131b,	// (0x0009df28) cell_qdial_pane

0x1331,	// (0x0009df3e) cell_qdial_pane_g1_ParamLimits

0x1331,	// (0x0009df3e) cell_qdial_pane_g1

0x133e,	// (0x0009df4b) cell_qdial_pane_g2_ParamLimits

0x133e,	// (0x0009df4b) cell_qdial_pane_g2

0xaa37,	// (0x000a7644) cell_qdial_pane_g3_ParamLimits

0xaa37,	// (0x000a7644) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000abd83) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000abd83) cell_qdial_pane_g

0x135c,	// (0x0009df69) cell_qdial_pane_t1_ParamLimits

0x135c,	// (0x0009df69) cell_qdial_pane_t1

0x1374,	// (0x0009df81) cell_qdial_pane_t2_ParamLimits

0x1374,	// (0x0009df81) cell_qdial_pane_t2

0x1387,	// (0x0009df94) cell_qdial_pane_t3_ParamLimits

0x1387,	// (0x0009df94) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000abd8c) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000abd8c) cell_qdial_pane_t

0xa239,	// (0x000a6e46) grid_highlight_pane_cp04

0xaa43,	// (0x000a7650) thumbnail_qdial_pane_ParamLimits

0xaa43,	// (0x000a7650) thumbnail_qdial_pane

0xaa9f,	// (0x000a76ac) list_help_pane

0xaaa8,	// (0x000a76b5) scroll_pane_cp02

0x139a,	// (0x0009dfa7) help_list_pane_t1_ParamLimits

0x139a,	// (0x0009dfa7) help_list_pane_t1

0x13c1,	// (0x0009dfce) bg_notes_pane_g2

0x13c9,	// (0x0009dfd6) bg_notes_pane_g3

0x13d1,	// (0x0009dfde) notes_bg_pane_g1

0x13d9,	// (0x0009dfe6) notes_bg_pane_g4

0x13e1,	// (0x0009dfee) notes_bg_pane_g5

0x13e9,	// (0x0009dff6) notes_bg_pane_g6

0x13f1,	// (0x0009dffe) notes_bg_pane_g7

0x13f9,	// (0x0009e006) notes_bg_pane_g8

0x1401,	// (0x0009e00e) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000abdaa) notes_bg_pane_g

0x1409,	// (0x0009e016) list_notes_text_pane_ParamLimits

0x1409,	// (0x0009e016) list_notes_text_pane

0xaab1,	// (0x000a76be) list_notes_text_pane_g1

0x1431,	// (0x0009e03e) list_notes_text_pane_t1

0x143f,	// (0x0009e04c) listscroll_cale_week_pane

0x146b,	// (0x0009e078) bg_cale_heading_pane

0x1494,	// (0x0009e0a1) bg_cale_pane_cp01

0x14b6,	// (0x0009e0c3) cale_week_corner_pane

0x14d5,	// (0x0009e0e2) cale_week_day_heading_pane

0x1503,	// (0x0009e110) cale_week_scroll_pane_g1

0x1527,	// (0x0009e134) cale_week_scroll_pane_g2

0x153f,	// (0x0009e14c) cale_week_scroll_pane_g3

0x1557,	// (0x0009e164) cale_week_scroll_pane_g4

0x156f,	// (0x0009e17c) cale_week_scroll_pane_g5

0x1587,	// (0x0009e194) cale_week_scroll_pane_g6

0x15a7,	// (0x0009e1b4) cale_week_scroll_pane_g7

0x15c7,	// (0x0009e1d4) cale_week_scroll_pane_g8

0x15e7,	// (0x0009e1f4) cale_week_scroll_pane_g9

0x1604,	// (0x0009e211) cale_week_scroll_pane_g10

0x1621,	// (0x0009e22e) cale_week_scroll_pane_g11

0x1640,	// (0x0009e24d) cale_week_scroll_pane_g12

0x1665,	// (0x0009e272) cale_week_scroll_pane_g13

0x168e,	// (0x0009e29b) cale_week_scroll_pane_g14

0x16b7,	// (0x0009e2c4) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000abdb9) cale_week_scroll_pane_g

0x1700,	// (0x0009e30d) cale_week_time_pane

0x1720,	// (0x0009e32d) grid_cale_week_pane

0xaae6,	// (0x000a76f3) scroll_pane_cp08

0x1751,	// (0x0009e35e) cell_cale_week_pane_ParamLimits

0x1751,	// (0x0009e35e) cell_cale_week_pane

0x17e1,	// (0x0009e3ee) cale_week_day_heading_pane_t1

0x1809,	// (0x0009e416) cale_week_day_heading_pane_t2

0x1836,	// (0x0009e443) cale_week_day_heading_pane_t3

0x1863,	// (0x0009e470) cale_week_day_heading_pane_t4

0x1890,	// (0x0009e49d) cale_week_day_heading_pane_t5

0x18bd,	// (0x0009e4ca) cale_week_day_heading_pane_t6

0x18ea,	// (0x0009e4f7) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000abdda) cale_week_day_heading_pane_t

0xab03,	// (0x000a7710) bg_cale_side_pane

0x1912,	// (0x0009e51f) cale_week_time_pane_t1

0x1936,	// (0x0009e543) cale_week_time_pane_t2

0x195a,	// (0x0009e567) cale_week_time_pane_t3

0x197e,	// (0x0009e58b) cale_week_time_pane_t4

0x19a2,	// (0x0009e5af) cale_week_time_pane_t5

0x19c8,	// (0x0009e5d5) cale_week_time_pane_t6

0x19f0,	// (0x0009e5fd) cale_week_time_pane_t7

0x1a1c,	// (0x0009e629) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000abde9) cale_week_time_pane_t

0x1a4c,	// (0x0009e659) cell_cale_week_pane_g2

0x1a70,	// (0x0009e67d) cell_cale_week_pane_g3_ParamLimits

0x1a70,	// (0x0009e67d) cell_cale_week_pane_g3

0xab11,	// (0x000a771e) grid_highlight_pane_cp07

0xab19,	// (0x000a7726) listscroll_gms_pane

0xab23,	// (0x000a7730) grid_gms_pane

0xab2c,	// (0x000a7739) listscroll_gms_pane_g1

0xab34,	// (0x000a7741) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000abdfa) listscroll_gms_pane_g

0x1a88,	// (0x0009e695) scroll_pane_cp010

0x1a93,	// (0x0009e6a0) cell_gms_pane_ParamLimits

0x1a93,	// (0x0009e6a0) cell_gms_pane

0x1aa6,	// (0x0009e6b3) cell_gms_pane_g1

0xab3c,	// (0x000a7749) cell_gms_pane_g2

0xab44,	// (0x000a7751) cell_gms_pane_g3

0xab4d,	// (0x000a775a) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000abdff) cell_gms_pane_g

0xab56,	// (0x000a7763) grid_highlight_pane_cp09

0x4025,	// (0x000a0c32) phob_pre_status_pane_g1

0x402d,	// (0x000a0c3a) phob_pre_status_pane_g2

0x4035,	// (0x000a0c42) phob_pre_status_pane_g3

0x403d,	// (0x000a0c4a) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x000ac1ea) phob_pre_status_pane_g

0x404d,	// (0x000a0c5a) phob_pre_status_pane_t1

0x405d,	// (0x000a0c6a) phob_pre_status_pane_t2

0x406d,	// (0x000a0c7a) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x000ac1f5) phob_pre_status_pane_t

0xab5e,	// (0x000a776b) bg_list_pane_cp05

0x1ab6,	// (0x0009e6c3) grid_vorec_pane

0x1ac0,	// (0x0009e6cd) vorec_t1

0x1ace,	// (0x0009e6db) vorec_t2

0x1adc,	// (0x0009e6e9) vorec_t3

0x1aea,	// (0x0009e6f7) vorec_t4

0x9d92,	// (0x000a699f) vorec_t5

0x9da0,	// (0x000a69ad) vorec_t6

0x0004,

0xf1fb,	// (0x000abe08) vorec_t

0x9dae,	// (0x000a69bb) wait_bar_pane_cp01

0x1b06,	// (0x0009e713) cell_vorec_pane_ParamLimits

0x1b06,	// (0x0009e713) cell_vorec_pane

0x1b1b,	// (0x0009e728) cell_vorec_pane_g1

0xa239,	// (0x000a6e46) grid_highlight_pane_cp05

0x1b33,	// (0x0009e740) cams_zoom_pane

0x1b3f,	// (0x0009e74c) image_vga_pane

0x1b4e,	// (0x0009e75b) main_camera_pane_g1

0x1b5c,	// (0x0009e769) main_camera_pane_g2

0x1b68,	// (0x0009e775) main_camera_pane_g3

0x1b76,	// (0x0009e783) main_camera_pane_g4

0x1b84,	// (0x0009e791) main_camera_pane_g5

0x1b92,	// (0x0009e79f) main_camera_pane_g6

0x1ba0,	// (0x0009e7ad) main_camera_pane_g7

0x0007,

0xf206,	// (0x000abe13) main_camera_pane_g

0x1bae,	// (0x0009e7bb) main_camera_pane_t1

0x1bc0,	// (0x0009e7cd) main_camera_pane_t2

0x0001,

0xf217,	// (0x000abe24) main_camera_pane_t

0x1be3,	// (0x0009e7f0) cams_zoom_pane_cp_ParamLimits

0x1be3,	// (0x0009e7f0) cams_zoom_pane_cp

0x1c07,	// (0x0009e814) image_cif_pane_ParamLimits

0x1c07,	// (0x0009e814) image_cif_pane

0x1c25,	// (0x0009e832) image_subqcif_pane

0x1c2f,	// (0x0009e83c) main_video_pane_g1_ParamLimits

0x1c2f,	// (0x0009e83c) main_video_pane_g1

0x1c4f,	// (0x0009e85c) main_video_pane_g2_ParamLimits

0x1c4f,	// (0x0009e85c) main_video_pane_g2

0x1c7f,	// (0x0009e88c) main_video_pane_g3_ParamLimits

0x1c7f,	// (0x0009e88c) main_video_pane_g3

0x1ca8,	// (0x0009e8b5) main_video_pane_g4_ParamLimits

0x1ca8,	// (0x0009e8b5) main_video_pane_g4

0x1cd1,	// (0x0009e8de) main_video_pane_g5_ParamLimits

0x1cd1,	// (0x0009e8de) main_video_pane_g5

0xab72,	// (0x000a777f) main_video_pane_g6_ParamLimits

0xab72,	// (0x000a777f) main_video_pane_g6

0x0006,

0xf21c,	// (0x000abe29) main_video_pane_g_ParamLimits

0xf21c,	// (0x000abe29) main_video_pane_g

0x1cf3,	// (0x0009e900) main_video_pane_t1_ParamLimits

0x1cf3,	// (0x0009e900) main_video_pane_t1

0xab8c,	// (0x000a7799) cams_zoom_pane_g1

0xab95,	// (0x000a77a2) cams_zoom_pane_g2

0xab9e,	// (0x000a77ab) cams_zoom_pane_g3

0xaba7,	// (0x000a77b4) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000abe38) cams_zoom_pane_g

0x1d3d,	// (0x0009e94a) grid_cams_pane

0x1d4b,	// (0x0009e958) linegrid_cams_pane

0x1d57,	// (0x0009e964) cell_cams_pane_ParamLimits

0x1d57,	// (0x0009e964) cell_cams_pane

0xabb0,	// (0x000a77bd) cams_burst_image_pane

0xabb8,	// (0x000a77c5) cell_cams_pane_g1

0xa239,	// (0x000a6e46) grid_highlight_pane_cp03

0xaa0b,	// (0x000a7618) mp_bg_pane_g1

0xa239,	// (0x000a6e46) bg_list_pane_cp03

0xc96e,	// (0x000a957b) bg_mp_pane

0xc976,	// (0x000a9583) grid_mp_pane

0xc97e,	// (0x000a958b) media_player_g1

0xc988,	// (0x000a9595) media_player_t1

0xc996,	// (0x000a95a3) media_player_t2

0xc9a4,	// (0x000a95b1) media_player_t3

0xc9b2,	// (0x000a95bf) media_player_t4

0xc9c0,	// (0x000a95cd) media_player_t5

0xc9ce,	// (0x000a95db) media_player_t6

0xc9dc,	// (0x000a95e9) media_player_t7

0x0006,

0xf5c7,	// (0x000ac1d4) media_player_t

0xc9ea,	// (0x000a95f7) wait_bar_pane_cp02

0xf5ac,	// (0x000ac1b9) main_usb_pane_t

0x401c,	// (0x000a0c29) cell_mp_pane

0xaa0b,	// (0x000a7618) cell_mp_pane_g1

0xa239,	// (0x000a6e46) grid_highlight_pane_cp06

0xabc0,	// (0x000a77cd) grid_skin_colour_pane

0xabc8,	// (0x000a77d5) list_highlight_pane_cp03

0x1e63,	// (0x0009ea70) skin_g1

0xabd0,	// (0x000a77dd) skin_t1

0xabdf,	// (0x000a77ec) skin_t2

0x0001,

0xf260,	// (0x000abe6d) skin_t

0x1e6d,	// (0x0009ea7a) cell_skin_colour_pane_ParamLimits

0x1e6d,	// (0x0009ea7a) cell_skin_colour_pane

0xabed,	// (0x000a77fa) cell_skin_colour_pane_g1

0x1eed,	// (0x0009eafa) call_video_g1_ParamLimits

0x1eed,	// (0x0009eafa) call_video_g1

0x1efd,	// (0x0009eb0a) call_video_g2_ParamLimits

0x1efd,	// (0x0009eb0a) call_video_g2

0x0001,

0xf265,	// (0x000abe72) call_video_g_ParamLimits

0xf265,	// (0x000abe72) call_video_g

0x1f4d,	// (0x0009eb5a) call_video_uplink_pane_cp1_ParamLimits

0x1f4d,	// (0x0009eb5a) call_video_uplink_pane_cp1

0xabff,	// (0x000a780c) call_video_uplink_pane_cp2

0x201b,	// (0x0009ec28) video_down_crop_pane_ParamLimits

0x201b,	// (0x0009ec28) video_down_crop_pane

0x210d,	// (0x0009ed1a) video_down_pane_ParamLimits

0x210d,	// (0x0009ed1a) video_down_pane

0xac07,	// (0x000a7814) video_down_subqcif_pane_ParamLimits

0xac07,	// (0x000a7814) video_down_subqcif_pane

0xac21,	// (0x000a782e) video_down_subqcif_pane_cp_ParamLimits

0xac21,	// (0x000a782e) video_down_subqcif_pane_cp

0xac49,	// (0x000a7856) im_reading_pane_ParamLimits

0xac49,	// (0x000a7856) im_reading_pane

0x222a,	// (0x0009ee37) im_writing_pane_ParamLimits

0x222a,	// (0x0009ee37) im_writing_pane

0x2248,	// (0x0009ee55) im_reading_pane_t1

0xac63,	// (0x000a7870) list_im_pane

0xac74,	// (0x000a7881) scroll_pane_cp07

0x228a,	// (0x0009ee97) im_writing_pane_t1_ParamLimits

0x228a,	// (0x0009ee97) im_writing_pane_t1

0xac8d,	// (0x000a789a) im_writing_pane_t2_ParamLimits

0xac8d,	// (0x000a789a) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000abe7c) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000abe7c) im_writing_pane_t

0xa239,	// (0x000a6e46) input_focus_pane_cp04

0xa239,	// (0x000a6e46) input_focus_pane_cp05

0x229c,	// (0x0009eea9) list_im_single_pane_ParamLimits

0x229c,	// (0x0009eea9) list_im_single_pane

0x22b5,	// (0x0009eec2) list_single_im_pane_t1

0x3fe0,	// (0x000a0bed) blid_accuracy_pane

0x3fe8,	// (0x000a0bf5) blid_compass_pane

0x3ff2,	// (0x000a0bff) main_location_t1

0x4000,	// (0x000a0c0d) main_location_t2

0x400e,	// (0x000a0c1b) main_location_t3

0x0002,

0xf5d6,	// (0x000ac1e3) main_location_t

0xa239,	// (0x000a6e46) aid_levels_location

0xaa0b,	// (0x000a7618) blid_accuracy_pane_g1

0xaa0b,	// (0x000a7618) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000abede) blid_accuracy_pane_g

0xacd5,	// (0x000a78e2) wml_content_pane

0xad13,	// (0x000a7920) wml_button_pane_ParamLimits

0xad13,	// (0x000a7920) wml_button_pane

0x22c4,	// (0x0009eed1) wml_list_single_large_pane_ParamLimits

0x22c4,	// (0x0009eed1) wml_list_single_large_pane

0x22e6,	// (0x0009eef3) wml_list_single_medium_pane_ParamLimits

0x22e6,	// (0x0009eef3) wml_list_single_medium_pane

0x2309,	// (0x0009ef16) wml_list_single_small_pane_ParamLimits

0x2309,	// (0x0009ef16) wml_list_single_small_pane

0xad27,	// (0x000a7934) wml_selection_box_pane_ParamLimits

0xad27,	// (0x000a7934) wml_selection_box_pane

0xadc9,	// (0x000a79d6) wml_list_single_pane_t1

0xadd8,	// (0x000a79e5) wml_list_single_medium_pane_t1

0xade7,	// (0x000a79f4) wml_list_single_large_pane_t1

0xadf6,	// (0x000a7a03) input_focus_pane_cp02_ParamLimits

0xadf6,	// (0x000a7a03) input_focus_pane_cp02

0xae09,	// (0x000a7a16) wml_selection_box_pane_g1

0xae12,	// (0x000a7a1f) wml_selection_box_pane_t1_ParamLimits

0xae12,	// (0x000a7a1f) wml_selection_box_pane_t1

0xa494,	// (0x000a70a1) bg_wml_button_pane_ParamLimits

0xa494,	// (0x000a70a1) bg_wml_button_pane

0xae2a,	// (0x000a7a37) wml_button_pane_g1

0xae32,	// (0x000a7a3f) wml_button_pane_t1

0xae2a,	// (0x000a7a37) wml_button_bg_pane_g1

0xae42,	// (0x000a7a4f) wml_button_bg_pane_g2

0xae4a,	// (0x000a7a57) wml_button_bg_pane_g3

0xae52,	// (0x000a7a5f) wml_button_bg_pane_g4

0xae5a,	// (0x000a7a67) wml_button_bg_pane_g5

0xae62,	// (0x000a7a6f) wml_button_bg_pane_g6

0xae6a,	// (0x000a7a77) wml_button_bg_pane_g7

0xae72,	// (0x000a7a7f) wml_button_bg_pane_g8

0xae7a,	// (0x000a7a87) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000abe81) wml_button_bg_pane_g

0x2331,	// (0x0009ef3e) bg_list_pane_cp02

0xae82,	// (0x000a7a8f) mce_header_pane_ParamLimits

0xae82,	// (0x000a7a8f) mce_header_pane

0xae98,	// (0x000a7aa5) mce_icon_pane

0xae98,	// (0x000a7aa5) mce_image_pane

0xaea1,	// (0x000a7aae) mce_text_pane_ParamLimits

0xaea1,	// (0x000a7aae) mce_text_pane

0x233b,	// (0x0009ef48) scroll_pane_cp03

0xad0b,	// (0x000a7918) scroll_pane_cp04

0xaeb4,	// (0x000a7ac1) scroll_pane_cp05_ParamLimits

0xaeb4,	// (0x000a7ac1) scroll_pane_cp05

0x2345,	// (0x0009ef52) mce_header_field_pane_ParamLimits

0x2345,	// (0x0009ef52) mce_header_field_pane

0x2367,	// (0x0009ef74) mce_header_field_pane_2_ParamLimits

0x2367,	// (0x0009ef74) mce_header_field_pane_2

0x237d,	// (0x0009ef8a) mce_header_field_pane_3

0x2385,	// (0x0009ef92) list_single_mce_message_pane_ParamLimits

0x2385,	// (0x0009ef92) list_single_mce_message_pane

0x23a4,	// (0x0009efb1) list_single_mce_smart_pane_ParamLimits

0x23a4,	// (0x0009efb1) list_single_mce_smart_pane

0xaec0,	// (0x000a7acd) input_focus_pane_cp03

0xaec9,	// (0x000a7ad6) list_header_data_pane

0x23ce,	// (0x0009efdb) mce_header_field_pane_t1

0x23de,	// (0x0009efeb) list_single_mce_header_pane_ParamLimits

0x23de,	// (0x0009efeb) list_single_mce_header_pane

0xaed1,	// (0x000a7ade) list_single_mce_header_pane_t1

0xaee0,	// (0x000a7aed) list_single_mce_message_pane_g1

0xaee8,	// (0x000a7af5) list_single_mce_message_pane_t1

0x2422,	// (0x0009f02f) bg_cale_heading_pane_cp01_ParamLimits

0x2422,	// (0x0009f02f) bg_cale_heading_pane_cp01

0xaef6,	// (0x000a7b03) bg_cale_pane_cp02_ParamLimits

0xaef6,	// (0x000a7b03) bg_cale_pane_cp02

0x2474,	// (0x0009f081) cale_month_corner_pane

0x2493,	// (0x0009f0a0) cale_month_day_heading_pane_ParamLimits

0x2493,	// (0x0009f0a0) cale_month_day_heading_pane

0x24f5,	// (0x0009f102) cale_month_pane_g1_ParamLimits

0x24f5,	// (0x0009f102) cale_month_pane_g1

0x253c,	// (0x0009f149) cale_month_pane_g2_ParamLimits

0x253c,	// (0x0009f149) cale_month_pane_g2

0x2574,	// (0x0009f181) cale_month_pane_g3_ParamLimits

0x2574,	// (0x0009f181) cale_month_pane_g3

0x25c8,	// (0x0009f1d5) cale_month_pane_g4_ParamLimits

0x25c8,	// (0x0009f1d5) cale_month_pane_g4

0x261c,	// (0x0009f229) cale_month_pane_g5_ParamLimits

0x261c,	// (0x0009f229) cale_month_pane_g5

0x2670,	// (0x0009f27d) cale_month_pane_g6_ParamLimits

0x2670,	// (0x0009f27d) cale_month_pane_g6

0x26d4,	// (0x0009f2e1) cale_month_pane_g7_ParamLimits

0x26d4,	// (0x0009f2e1) cale_month_pane_g7

0x2738,	// (0x0009f345) cale_month_pane_g8_ParamLimits

0x2738,	// (0x0009f345) cale_month_pane_g8

0x279c,	// (0x0009f3a9) cale_month_pane_g9_ParamLimits

0x279c,	// (0x0009f3a9) cale_month_pane_g9

0x27f6,	// (0x0009f403) cale_month_pane_g10_ParamLimits

0x27f6,	// (0x0009f403) cale_month_pane_g10

0x2848,	// (0x0009f455) cale_month_pane_g11_ParamLimits

0x2848,	// (0x0009f455) cale_month_pane_g11

0x2896,	// (0x0009f4a3) cale_month_pane_g12_ParamLimits

0x2896,	// (0x0009f4a3) cale_month_pane_g12

0x28e6,	// (0x0009f4f3) cale_month_pane_g13_ParamLimits

0x28e6,	// (0x0009f4f3) cale_month_pane_g13

0x000c,

0xf287,	// (0x000abe94) cale_month_pane_g_ParamLimits

0xf287,	// (0x000abe94) cale_month_pane_g

0x2936,	// (0x0009f543) cale_month_week_pane

0x2956,	// (0x0009f563) grid_cale_month_pane_ParamLimits

0x2956,	// (0x0009f563) grid_cale_month_pane

0x29af,	// (0x0009f5bc) cale_month_day_heading_pane_t1

0x2a31,	// (0x0009f63e) cale_month_day_heading_pane_t2

0x2aaa,	// (0x0009f6b7) cale_month_day_heading_pane_t3

0x2b23,	// (0x0009f730) cale_month_day_heading_pane_t4

0x2b9c,	// (0x0009f7a9) cale_month_day_heading_pane_t5

0x2c1d,	// (0x0009f82a) cale_month_day_heading_pane_t6

0x2ca6,	// (0x0009f8b3) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000abeaf) cale_month_day_heading_pane_t

0xab03,	// (0x000a7710) bg_cale_side_pane_cp01

0x2d2f,	// (0x0009f93c) cale_month_week_pane_t1

0x2d48,	// (0x0009f955) cale_month_week_pane_t2

0x2d61,	// (0x0009f96e) cale_month_week_pane_t3

0x2d7a,	// (0x0009f987) cale_month_week_pane_t4

0x2d93,	// (0x0009f9a0) cale_month_week_pane_t5

0x2db0,	// (0x0009f9bd) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000abebe) cale_month_week_pane_t

0x2dd3,	// (0x0009f9e0) cell_cale_month_pane_ParamLimits

0x2dd3,	// (0x0009f9e0) cell_cale_month_pane

0x2f2b,	// (0x0009fb38) cell_cale_month_pane_g1

0x2f37,	// (0x0009fb44) cell_cale_month_pane_t1_ParamLimits

0x2f37,	// (0x0009fb44) cell_cale_month_pane_t1

0xab11,	// (0x000a771e) grid_highlight_pane_cp08

0xaa0b,	// (0x000a7618) main_smil_g1

0x2f63,	// (0x0009fb70) smil_status_pane

0xaf35,	// (0x000a7b42) smil_text_pane

0xc88c,	// (0x000a9499) bg_popup_call3_rect_pane_g8

0xc894,	// (0x000a94a1) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x000ac177) bg_popup_call3_rect_pane_g

0xcaf2,	// (0x000a96ff) smil_status_volume_pane_g1

0xaf3f,	// (0x000a7b4c) smil_status_pane_t1

0x4427,	// (0x000a1034) volume_smil_pane

0xaf56,	// (0x000a7b63) list_smil_text_pane

0x2f76,	// (0x0009fb83) scroll_pane_cp011

0x2f81,	// (0x0009fb8e) smil_text_list_pane_t1_ParamLimits

0x2f81,	// (0x0009fb8e) smil_text_list_pane_t1

0x2fd5,	// (0x0009fbe2) aid_volume_smil_ParamLimits

0x2fd5,	// (0x0009fbe2) aid_volume_smil

0xaa0b,	// (0x000a7618) smil_volume_pane_g1

0xaa0b,	// (0x000a7618) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000abede) smil_volume_pane_g

0x143f,	// (0x0009e04c) listscroll_cale_day_pane

0xaf60,	// (0x000a7b6d) bg_cale_pane

0xaf78,	// (0x000a7b85) list_cale_pane

0xaf9b,	// (0x000a7ba8) scroll_pane_cp09

0xafac,	// (0x000a7bb9) cale_bg_pane_g1

0xafb4,	// (0x000a7bc1) cale_bg_pane_g2

0xafbc,	// (0x000a7bc9) cale_bg_pane_g3

0xafc4,	// (0x000a7bd1) cale_bg_pane_g4

0xafcc,	// (0x000a7bd9) cale_bg_pane_g5

0xafd4,	// (0x000a7be1) cale_bg_pane_g6

0xafdc,	// (0x000a7be9) cale_bg_pane_g7

0xafe4,	// (0x000a7bf1) cale_bg_pane_g8

0xafec,	// (0x000a7bf9) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x000abee3) cale_bg_pane_g

0x2fff,	// (0x0009fc0c) list_cale_time_pane_ParamLimits

0x2fff,	// (0x0009fc0c) list_cale_time_pane

0xaff4,	// (0x000a7c01) list_cale_time_pane_g1_ParamLimits

0xaff4,	// (0x000a7c01) list_cale_time_pane_g1

0xb000,	// (0x000a7c0d) list_cale_time_pane_g2_ParamLimits

0xb000,	// (0x000a7c0d) list_cale_time_pane_g2

0x3016,	// (0x0009fc23) list_cale_time_pane_g3_ParamLimits

0x3016,	// (0x0009fc23) list_cale_time_pane_g3

0x3024,	// (0x0009fc31) list_cale_time_pane_g4_ParamLimits

0x3024,	// (0x0009fc31) list_cale_time_pane_g4

0x3032,	// (0x0009fc3f) list_cale_time_pane_g5_ParamLimits

0x3032,	// (0x0009fc3f) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x000abef6) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x000abef6) list_cale_time_pane_g

0xb01a,	// (0x000a7c27) list_cale_time_pane_t1_ParamLimits

0xb01a,	// (0x000a7c27) list_cale_time_pane_t1

0xb042,	// (0x000a7c4f) list_cale_time_pane_t2_ParamLimits

0xb042,	// (0x000a7c4f) list_cale_time_pane_t2

0x33e4,	// (0x0009fff1) aid_blid_cardinal_pane

0x3426,	// (0x000a0033) compass_pane_t4

0xb06a,	// (0x000a7c77) list_cale_time_pane_t4_ParamLimits

0xb06a,	// (0x000a7c77) list_cale_time_pane_t4

0x3434,	// (0x000a0041) compass_pane_t5

0x3444,	// (0x000a0051) compass_pane_t6

0x3452,	// (0x000a005f) compass_pane_t7

0xb4ee,	// (0x000a80fb) navi_pane_cc_t1

0xb6db,	// (0x000a82e8) aid_phob_thumbnail_center_pane

0x3adc,	// (0x000a06e9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000abf03) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000abf03) list_cale_time_pane_t

0x9e90,	// (0x000a6a9d) bg_popup_window_pane_cp02_ParamLimits

0x9e90,	// (0x000a6a9d) bg_popup_window_pane_cp02

0xb092,	// (0x000a7c9f) heading_pane_cp01_ParamLimits

0xb092,	// (0x000a7c9f) heading_pane_cp01

0xb09e,	// (0x000a7cab) loc_req_pane_ParamLimits

0xb09e,	// (0x000a7cab) loc_req_pane

0xb0ae,	// (0x000a7cbb) loc_type_pane_ParamLimits

0xb0ae,	// (0x000a7cbb) loc_type_pane

0xb0c0,	// (0x000a7ccd) loc_type_pane_t1_ParamLimits

0xb0c0,	// (0x000a7ccd) loc_type_pane_t1

0xb0d2,	// (0x000a7cdf) loc_type_pane_t2_ParamLimits

0xb0d2,	// (0x000a7cdf) loc_type_pane_t2

0xb0e4,	// (0x000a7cf1) loc_type_pane_t3_ParamLimits

0xb0e4,	// (0x000a7cf1) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000abf0a) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000abf0a) loc_type_pane_t

0xb0f6,	// (0x000a7d03) list_loc_req_pane

0xb100,	// (0x000a7d0d) scroll_pane_cp012

0x3040,	// (0x0009fc4d) list_single_loc_request_popup_menu_pane_ParamLimits

0x3040,	// (0x0009fc4d) list_single_loc_request_popup_menu_pane

0xb10b,	// (0x000a7d18) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb10b,	// (0x000a7d18) list_single_loc_request_popup_menu_pane_g1

0xb117,	// (0x000a7d24) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb117,	// (0x000a7d24) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000abf11) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000abf11) list_single_loc_request_popup_menu_pane_g

0xb123,	// (0x000a7d30) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb123,	// (0x000a7d30) list_single_loc_request_popup_menu_pane_t1

0x3052,	// (0x0009fc5f) bg_popup_window_pane_cp03_ParamLimits

0x3052,	// (0x0009fc5f) bg_popup_window_pane_cp03

0x3060,	// (0x0009fc6d) heading_loc_req_pane_ParamLimits

0x3060,	// (0x0009fc6d) heading_loc_req_pane

0x306c,	// (0x0009fc79) popup_dyc_status_message_window_g1_ParamLimits

0x306c,	// (0x0009fc79) popup_dyc_status_message_window_g1

0x3078,	// (0x0009fc85) popup_dyc_status_message_window_t1_ParamLimits

0x3078,	// (0x0009fc85) popup_dyc_status_message_window_t1

0x308a,	// (0x0009fc97) popup_dyc_status_message_window_t2_ParamLimits

0x308a,	// (0x0009fc97) popup_dyc_status_message_window_t2

0x309c,	// (0x0009fca9) popup_dyc_status_message_window_t3_ParamLimits

0x309c,	// (0x0009fca9) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000abf16) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000abf16) popup_dyc_status_message_window_t

0xa239,	// (0x000a6e46) bg_heading_pane_cp01

0xb139,	// (0x000a7d46) heading_loc_req_pane_g1

0xb141,	// (0x000a7d4e) heading_loc_req_pane_g2

0xb149,	// (0x000a7d56) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000abf1d) heading_loc_req_pane_g

0xb151,	// (0x000a7d5e) heading_loc_req_pane_t1

0xb161,	// (0x000a7d6e) bg_popup_sub_pane_cp01_ParamLimits

0xb161,	// (0x000a7d6e) bg_popup_sub_pane_cp01

0xb16f,	// (0x000a7d7c) popup_cale_events_window_g1_ParamLimits

0xb16f,	// (0x000a7d7c) popup_cale_events_window_g1

0xb18f,	// (0x000a7d9c) popup_cale_events_window_g2_ParamLimits

0xb18f,	// (0x000a7d9c) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000abf51) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000abf51) popup_cale_events_window_g

0xb1af,	// (0x000a7dbc) popup_cale_events_window_t1_ParamLimits

0xb1af,	// (0x000a7dbc) popup_cale_events_window_t1

0xb1c1,	// (0x000a7dce) popup_cale_events_window_t2_ParamLimits

0xb1c1,	// (0x000a7dce) popup_cale_events_window_t2

0xb20b,	// (0x000a7e18) popup_cale_events_window_t3_ParamLimits

0xb20b,	// (0x000a7e18) popup_cale_events_window_t3

0xb245,	// (0x000a7e52) popup_cale_events_window_t4_ParamLimits

0xb245,	// (0x000a7e52) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000abf56) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000abf56) popup_cale_events_window_t

0x3195,	// (0x0009fda2) call_type_pane

0xb649,	// (0x000a8256) popup_call_status_window_g1

0x31a1,	// (0x0009fdae) popup_call_status_window_g2

0x31ad,	// (0x0009fdba) popup_call_status_window_g3

0x0002,

0xf352,	// (0x000abf5f) popup_call_status_window_g

0xb27b,	// (0x000a7e88) call_type_pane_g1

0xb284,	// (0x000a7e91) call_type_pane_g2

0x0001,

0xf359,	// (0x000abf66) call_type_pane_g

0xa239,	// (0x000a6e46) bg_popup_sub_pane_cp02

0xb28d,	// (0x000a7e9a) listscroll_popup_wml_pane

0xb295,	// (0x000a7ea2) list_wml_pane

0xb29f,	// (0x000a7eac) scroll_pane_cp013

0xb2aa,	// (0x000a7eb7) list_single_graphic_popup_wml_pane_ParamLimits

0xb2aa,	// (0x000a7eb7) list_single_graphic_popup_wml_pane

0xaa0b,	// (0x000a7618) list_single_graphic_popup_wml_pane_g1

0xb2be,	// (0x000a7ecb) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x000abf6b) list_single_graphic_popup_wml_pane_g

0xb2c6,	// (0x000a7ed3) list_single_graphic_popup_wml_pane_t1

0xb2dc,	// (0x000a7ee9) aid_call_pane

0xa48c,	// (0x000a7099) popup_clock_analogue_window_g1

0xa48c,	// (0x000a7099) popup_clock_analogue_window_g2

0x31b9,	// (0x0009fdc6) popup_clock_analogue_window_g3

0x31b9,	// (0x0009fdc6) popup_clock_analogue_window_g4

0xaa0b,	// (0x000a7618) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x000abf70) popup_clock_analogue_window_g

0x31c1,	// (0x0009fdce) popup_clock_analogue_window_t1

0x31cf,	// (0x0009fddc) clock_digital_number_pane_ParamLimits

0x31cf,	// (0x0009fddc) clock_digital_number_pane

0x31db,	// (0x0009fde8) clock_digital_number_pane_cp02_ParamLimits

0x31db,	// (0x0009fde8) clock_digital_number_pane_cp02

0x31e7,	// (0x0009fdf4) clock_digital_number_pane_cp03_ParamLimits

0x31e7,	// (0x0009fdf4) clock_digital_number_pane_cp03

0x31f3,	// (0x0009fe00) clock_digital_number_pane_cp04_ParamLimits

0x31f3,	// (0x0009fe00) clock_digital_number_pane_cp04

0x31ff,	// (0x0009fe0c) clock_digital_separator_pane_ParamLimits

0x31ff,	// (0x0009fe0c) clock_digital_separator_pane

0x320b,	// (0x0009fe18) popup_clock_digital_window_t1

0xaa0b,	// (0x000a7618) clock_digital_number_pane_g1

0xaa0b,	// (0x000a7618) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000abede) clock_digital_number_pane_g

0xaa0b,	// (0x000a7618) clock_digital_separator_pane_g1

0xaa0b,	// (0x000a7618) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000abede) clock_digital_separator_pane_g

0xa239,	// (0x000a6e46) bg_popup_window_pane_cp04

0xb2e4,	// (0x000a7ef1) heading_pane_cp03

0xb2ec,	// (0x000a7ef9) listscroll_popup_gms_pane

0xb2f4,	// (0x000a7f01) grid_large_graphic_popup_pane

0xb2fe,	// (0x000a7f0b) listscroll_popup_gms_pane_g1

0xb306,	// (0x000a7f13) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x000abf7b) listscroll_popup_gms_pane_g

0xad0b,	// (0x000a7918) scroll_pane_cp014

0x3228,	// (0x0009fe35) cell_large_graphic_popup_pane_ParamLimits

0x3228,	// (0x0009fe35) cell_large_graphic_popup_pane

0x3242,	// (0x0009fe4f) cell_large_graphic_popup_pane_g1_ParamLimits

0x3242,	// (0x0009fe4f) cell_large_graphic_popup_pane_g1

0xb30e,	// (0x000a7f1b) cell_large_graphic_popup_pane_g2_ParamLimits

0xb30e,	// (0x000a7f1b) cell_large_graphic_popup_pane_g2

0xb31a,	// (0x000a7f27) cell_large_graphic_popup_pane_g3_ParamLimits

0xb31a,	// (0x000a7f27) cell_large_graphic_popup_pane_g3

0xb327,	// (0x000a7f34) cell_large_graphic_popup_pane_g4_ParamLimits

0xb327,	// (0x000a7f34) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x000abf80) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x000abf80) cell_large_graphic_popup_pane_g

0xb337,	// (0x000a7f44) grid_highlight_pane_cp010

0xaa0b,	// (0x000a7618) bg_popup_call_pane_g1

0xb341,	// (0x000a7f4e) list_single_graphic_popup_conf_pane_ParamLimits

0xb341,	// (0x000a7f4e) list_single_graphic_popup_conf_pane

0xb353,	// (0x000a7f60) list_highlight_pane_cp01

0xb35c,	// (0x000a7f69) list_single_graphic_popup_conf_pane_g1

0xb364,	// (0x000a7f71) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x000abf89) list_single_graphic_popup_conf_pane_g

0xb36c,	// (0x000a7f79) list_single_graphic_popup_conf_pane_t1

0xb37a,	// (0x000a7f87) linegrid_cams_pane_g1

0x324e,	// (0x0009fe5b) linegrid_cams_pane_g2

0xab44,	// (0x000a7751) linegrid_cams_pane_g3

0xb383,	// (0x000a7f90) linegrid_cams_pane_g4

0x3257,	// (0x0009fe64) linegrid_cams_pane_g5

0x3260,	// (0x0009fe6d) linegrid_cams_pane_g6

0xab4d,	// (0x000a775a) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x000abf8e) linegrid_cams_pane_g

0xb38c,	// (0x000a7f99) popup_clock_analogue_window

0xb38c,	// (0x000a7f99) popup_clock_digital_window

0xa239,	// (0x000a6e46) popup_phob_thumbnail_window

0xaa0b,	// (0x000a7618) call_video_uplink_pane_g1

0xb395,	// (0x000a7fa2) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x000abf9d) call_video_uplink_pane_g

0xb39d,	// (0x000a7faa) video_uplink_pane

0xb3a5,	// (0x000a7fb2) mce_image_pane_g1

0x326b,	// (0x0009fe78) mce_image_pane_g2

0x3275,	// (0x0009fe82) mce_image_pane_g3

0x327f,	// (0x0009fe8c) mce_image_pane_g4

0x3287,	// (0x0009fe94) mce_image_pane_g5

0x0004,

0xf395,	// (0x000abfa2) mce_image_pane_g

0xb3af,	// (0x000a7fbc) control_top_pane_stacon_cp01_ParamLimits

0xb3af,	// (0x000a7fbc) control_top_pane_stacon_cp01

0xb3c3,	// (0x000a7fd0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb3c3,	// (0x000a7fd0) uni_indicator_pane_stacon_cp01

0xb3d4,	// (0x000a7fe1) bg_popup_sub_pane_cp03

0x328f,	// (0x0009fe9c) chi_dic_find_pane

0x3297,	// (0x0009fea4) listscroll_chi_dic_pane

0x32a0,	// (0x0009fead) main_pane_chidic_g1

0x32b3,	// (0x0009fec0) chi_dic_find_pane_t1

0xb3de,	// (0x000a7feb) find_chidic_pane

0xb3e7,	// (0x000a7ff4) chi_dic_list_pane_ParamLimits

0xb3e7,	// (0x000a7ff4) chi_dic_list_pane

0xb3f8,	// (0x000a8005) scroll_pane_cp020

0x32c1,	// (0x0009fece) find_chidic_pane_t1

0xa239,	// (0x000a6e46) input_focus_pane_cp06

0xad3a,	// (0x000a7947) list_chi_dic_pane_ParamLimits

0xad3a,	// (0x000a7947) list_chi_dic_pane

0x32d0,	// (0x0009fedd) list_chi_dic_pane_t1_ParamLimits

0x32d0,	// (0x0009fedd) list_chi_dic_pane_t1

0xa239,	// (0x000a6e46) list_highlight_pane_cp020

0xb400,	// (0x000a800d) bg_cale_heading_pane_g1

0x32e3,	// (0x0009fef0) bg_cale_heading_pane_g2

0x32eb,	// (0x0009fef8) bg_cale_heading_pane_g3

0x32f3,	// (0x0009ff00) bg_cale_heading_pane_g4

0x32fd,	// (0x0009ff0a) bg_cale_heading_pane_g5

0x3307,	// (0x0009ff14) bg_cale_heading_pane_g6

0x330f,	// (0x0009ff1c) bg_cale_heading_pane_g7

0x3317,	// (0x0009ff24) bg_cale_heading_pane_g8

0x3321,	// (0x0009ff2e) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x000abfad) bg_cale_heading_pane_g

0xb400,	// (0x000a800d) bg_cale_side_pane_g1

0x332b,	// (0x0009ff38) bg_cale_side_pane_g2

0x3335,	// (0x0009ff42) bg_cale_side_pane_g3

0x333f,	// (0x0009ff4c) bg_cale_side_pane_g4

0x3349,	// (0x0009ff56) bg_cale_side_pane_g5

0x3353,	// (0x0009ff60) bg_cale_side_pane_g6

0x335d,	// (0x0009ff6a) bg_cale_side_pane_g7

0x3367,	// (0x0009ff74) bg_cale_side_pane_g8

0x336f,	// (0x0009ff7c) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x000abfc0) bg_cale_side_pane_g

0x3377,	// (0x0009ff84) popup_call_status_window_ParamLimits

0x3377,	// (0x0009ff84) popup_call_status_window

0xb408,	// (0x000a8015) stacon_top_pane

0xb410,	// (0x000a801d) status_pane_ParamLimits

0xb410,	// (0x000a801d) status_pane

0xb425,	// (0x000a8032) status_small_pane

0xb42d,	// (0x000a803a) control_pane

0xa239,	// (0x000a6e46) stacon_bottom_pane

0xb435,	// (0x000a8042) list_single_mce_smart_pane_t1_ParamLimits

0xb435,	// (0x000a8042) list_single_mce_smart_pane_t1

0xb448,	// (0x000a8055) list_single_mce_smart_pane_t2_ParamLimits

0xb448,	// (0x000a8055) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x000abfd3) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x000abfd3) list_single_mce_smart_pane_t

0x3383,	// (0x0009ff90) compass_pane

0x338e,	// (0x0009ff9b) main_location2_pane_t1

0x33a4,	// (0x0009ffb1) main_location2_pane_t2

0x33ba,	// (0x0009ffc7) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x000abfd8) main_location2_pane_t

0xb467,	// (0x000a8074) compass_pane_g1_ParamLimits

0xb467,	// (0x000a8074) compass_pane_g1

0x3408,	// (0x000a0015) compass_pane_t1

0x3417,	// (0x000a0024) compass_pane_t2

0x0005,

0xf3d4,	// (0x000abfe1) compass_pane_t

0x3462,	// (0x000a006f) text_secondary_cp61

0xb4e5,	// (0x000a80f2) navi_pane_cams_g5

0xb561,	// (0x000a816e) navi_pane_im_t1

0xb56f,	// (0x000a817c) navi_pane_mp_g1_ParamLimits

0xb56f,	// (0x000a817c) navi_pane_mp_g1

0xb583,	// (0x000a8190) navi_pane_mp_g2_ParamLimits

0xb583,	// (0x000a8190) navi_pane_mp_g2

0xb58f,	// (0x000a819c) navi_pane_mp_g3_ParamLimits

0xb58f,	// (0x000a819c) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x000abff5) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x000abff5) navi_pane_mp_g

0xb59b,	// (0x000a81a8) navi_pane_mp_t1

0xb5a9,	// (0x000a81b6) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000abffc) navi_pane_mp_t

0xb616,	// (0x000a8223) navi_pane_vt_g1

0xb59b,	// (0x000a81a8) navi_pane_vt_t1

0xb61e,	// (0x000a822b) navi_slider_pane

0xab5e,	// (0x000a776b) zooming_pane

0xb62e,	// (0x000a823b) navi_slider_pane_g1

0x349d,	// (0x000a00aa) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000ac003) navi_slider_pane_g

0xb660,	// (0x000a826d) aid_levels_zoom

0xb668,	// (0x000a8275) zooming_pane_g1

0xb670,	// (0x000a827d) zooming_pane_g2

0xb670,	// (0x000a827d) zooming_pane_g3

0x0002,

0xf405,	// (0x000ac012) zooming_pane_g

0xb678,	// (0x000a8285) level_10_zoom

0xb681,	// (0x000a828e) level_11_zoom

0xb68a,	// (0x000a8297) level_1_zoom

0xb693,	// (0x000a82a0) level_2_zoom

0xb69c,	// (0x000a82a9) level_3_zoom

0xb6a5,	// (0x000a82b2) level_4_zoom

0xb6ae,	// (0x000a82bb) level_5_zoom

0xb6b7,	// (0x000a82c4) level_6_zoom

0xb6c0,	// (0x000a82cd) level_7_zoom

0xb6c9,	// (0x000a82d6) level_8_zoom

0xb6d2,	// (0x000a82df) level_9_zoom

0xb6e3,	// (0x000a82f0) popup_phob_thumbnail_window_g1

0xb6eb,	// (0x000a82f8) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000ac019) popup_phob_thumbnail_window_g

0xc9f2,	// (0x000a95ff) level_1_location

0xc9fa,	// (0x000a9607) level_2_location

0xca02,	// (0x000a960f) level_3_location

0xca0a,	// (0x000a9617) level_4_location

0xab5e,	// (0x000a776b) level_5_location

0x34af,	// (0x000a00bc) mce_icon_pane_g1

0x34b7,	// (0x000a00c4) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000ac01e) mce_icon_pane_g

0x34bf,	// (0x000a00cc) main_mup_pane_g1_ParamLimits

0x34bf,	// (0x000a00cc) main_mup_pane_g1

0x34d7,	// (0x000a00e4) main_mup_pane_g2_ParamLimits

0x34d7,	// (0x000a00e4) main_mup_pane_g2

0x34f3,	// (0x000a0100) main_mup_pane_g3_ParamLimits

0x34f3,	// (0x000a0100) main_mup_pane_g3

0x350f,	// (0x000a011c) main_mup_pane_g4_ParamLimits

0x350f,	// (0x000a011c) main_mup_pane_g4

0x3523,	// (0x000a0130) main_mup_pane_g5_ParamLimits

0x3523,	// (0x000a0130) main_mup_pane_g5

0x3544,	// (0x000a0151) main_mup_pane_g6_ParamLimits

0x3544,	// (0x000a0151) main_mup_pane_g6

0x3564,	// (0x000a0171) main_mup_pane_g7_ParamLimits

0x3564,	// (0x000a0171) main_mup_pane_g7

0x3588,	// (0x000a0195) main_mup_pane_g8_ParamLimits

0x3588,	// (0x000a0195) main_mup_pane_g8

0x35ac,	// (0x000a01b9) main_mup_pane_g9_ParamLimits

0x35ac,	// (0x000a01b9) main_mup_pane_g9

0x35cf,	// (0x000a01dc) main_mup_pane_g10_ParamLimits

0x35cf,	// (0x000a01dc) main_mup_pane_g10

0x35f2,	// (0x000a01ff) main_mup_pane_g11_ParamLimits

0x35f2,	// (0x000a01ff) main_mup_pane_g11

0x3612,	// (0x000a021f) main_mup_pane_g12_ParamLimits

0x3612,	// (0x000a021f) main_mup_pane_g12

0x3620,	// (0x000a022d) main_mup_pane_g13_ParamLimits

0x3620,	// (0x000a022d) main_mup_pane_g13

0x000c,

0xf416,	// (0x000ac023) main_mup_pane_g_ParamLimits

0xf416,	// (0x000ac023) main_mup_pane_g

0x3636,	// (0x000a0243) main_mup_pane_t1_ParamLimits

0x3636,	// (0x000a0243) main_mup_pane_t1

0x3655,	// (0x000a0262) main_mup_pane_t2_ParamLimits

0x3655,	// (0x000a0262) main_mup_pane_t2

0x366f,	// (0x000a027c) main_mup_pane_t3_ParamLimits

0x366f,	// (0x000a027c) main_mup_pane_t3

0x3689,	// (0x000a0296) main_mup_pane_t4_ParamLimits

0x3689,	// (0x000a0296) main_mup_pane_t4

0x369b,	// (0x000a02a8) main_mup_pane_t5_ParamLimits

0x369b,	// (0x000a02a8) main_mup_pane_t5

0x36ad,	// (0x000a02ba) main_mup_pane_t6_ParamLimits

0x36ad,	// (0x000a02ba) main_mup_pane_t6

0x0005,

0xf431,	// (0x000ac03e) main_mup_pane_t_ParamLimits

0xf431,	// (0x000ac03e) main_mup_pane_t

0x36c3,	// (0x000a02d0) mup_progress_pane_ParamLimits

0x36c3,	// (0x000a02d0) mup_progress_pane

0x36cf,	// (0x000a02dc) mup_visualizer_pane_ParamLimits

0x36cf,	// (0x000a02dc) mup_visualizer_pane

0x370d,	// (0x000a031a) mup_volume_pane_ParamLimits

0x370d,	// (0x000a031a) mup_volume_pane

0xb649,	// (0x000a8256) mup_visualizer_pane_g1_ParamLimits

0xb649,	// (0x000a8256) mup_visualizer_pane_g1

0xb649,	// (0x000a8256) mup_visualizer_pane_g2_ParamLimits

0xb649,	// (0x000a8256) mup_visualizer_pane_g2

0xb467,	// (0x000a8074) mup_visualizer_pane_g3_ParamLimits

0xb467,	// (0x000a8074) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000ac04b) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000ac04b) mup_visualizer_pane_g

0xaa0b,	// (0x000a7618) mup_volume_pane_g1

0xb6fb,	// (0x000a8308) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000ac052) mup_volume_pane_g

0xaa0b,	// (0x000a7618) mup_progress_pane_g1

0xb704,	// (0x000a8311) mup_progress_pane_g2

0xb70d,	// (0x000a831a) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000ac057) mup_progress_pane_g

0xa239,	// (0x000a6e46) bg_popup_window_pane_cp05

0xb716,	// (0x000a8323) heading_pane_cp02_ParamLimits

0xb716,	// (0x000a8323) heading_pane_cp02

0xb732,	// (0x000a833f) list_popup_blid_pane

0xb73a,	// (0x000a8347) list_blid_sat_info_pane_ParamLimits

0xb73a,	// (0x000a8347) list_blid_sat_info_pane

0xb74d,	// (0x000a835a) list_blid_sat_info_pane_g1

0xb755,	// (0x000a8362) list_blid_sat_info_pane_t1

0x382c,	// (0x000a0439) mup_equalizer_pane_ParamLimits

0x382c,	// (0x000a0439) mup_equalizer_pane

0x384d,	// (0x000a045a) mup_equalizer_pane_cp1_ParamLimits

0x384d,	// (0x000a045a) mup_equalizer_pane_cp1

0x386e,	// (0x000a047b) mup_equalizer_pane_cp2_ParamLimits

0x386e,	// (0x000a047b) mup_equalizer_pane_cp2

0x388f,	// (0x000a049c) mup_equalizer_pane_cp3_ParamLimits

0x388f,	// (0x000a049c) mup_equalizer_pane_cp3

0x38b4,	// (0x000a04c1) mup_equalizer_pane_cp4_ParamLimits

0x38b4,	// (0x000a04c1) mup_equalizer_pane_cp4

0x38d9,	// (0x000a04e6) mup_equalizer_pane_cp5

0x38f1,	// (0x000a04fe) mup_equalizer_pane_cp6

0x3909,	// (0x000a0516) mup_equalizer_pane_cp7

0xc90c,	// (0x000a9519) bg_popup_call_poc_act_pane_g9

0xc914,	// (0x000a9521) bg_popup_call_poc_act_pane_g10

0xc91c,	// (0x000a9529) bg_popup_call_poc_act_pane_g11

0x000a,

0xa494,	// (0x000a70a1) mup_scale_pane

0xaa0b,	// (0x000a7618) mup_scale_pane_g1

0xb763,	// (0x000a8370) mup_scale_pane_g2

0x0006,

0xf466,	// (0x000ac073) mup_scale_pane_g

0xb787,	// (0x000a8394) msg_data_pane

0xb78f,	// (0x000a839c) scroll_pane_cp017

0x3933,	// (0x000a0540) bg_list_pane_cp04_ParamLimits

0x3933,	// (0x000a0540) bg_list_pane_cp04

0xb797,	// (0x000a83a4) msg_data_pane_g1

0x3953,	// (0x000a0560) msg_data_pane_g2

0x395d,	// (0x000a056a) msg_data_pane_g3

0x3967,	// (0x000a0574) msg_data_pane_g4

0x396f,	// (0x000a057c) msg_data_pane_g5

0x3977,	// (0x000a0584) msg_data_pane_g6

0x397f,	// (0x000a058c) msg_data_pane_g7

0x0006,

0xf475,	// (0x000ac082) msg_data_pane_g

0x3987,	// (0x000a0594) msg_text_pane_ParamLimits

0x3987,	// (0x000a0594) msg_text_pane

0x39b6,	// (0x000a05c3) qrid_highlight_pane_cp011_ParamLimits

0x39b6,	// (0x000a05c3) qrid_highlight_pane_cp011

0xa239,	// (0x000a6e46) msg_body_pane

0xa239,	// (0x000a6e46) msg_header_pane

0xb7a8,	// (0x000a83b5) input_focus_pane_cp07

0xa52b,	// (0x000a7138) msg_header_pane_t1_ParamLimits

0xa52b,	// (0x000a7138) msg_header_pane_t1

0xa53d,	// (0x000a714a) msg_header_pane_t2_ParamLimits

0xa53d,	// (0x000a714a) msg_header_pane_t2

0x0001,

0xf489,	// (0x000ac096) msg_header_pane_t_ParamLimits

0xf489,	// (0x000ac096) msg_header_pane_t

0xb7bd,	// (0x000a83ca) msg_body_pane_g1

0xa54f,	// (0x000a715c) msg_body_pane_t1_ParamLimits

0xa54f,	// (0x000a715c) msg_body_pane_t1

0xa580,	// (0x000a718d) msg_body_pane_t2_ParamLimits

0xa580,	// (0x000a718d) msg_body_pane_t2

0xa592,	// (0x000a719f) msg_body_pane_t3_ParamLimits

0xa592,	// (0x000a719f) msg_body_pane_t3

0x0002,

0xf48e,	// (0x000ac09b) msg_body_pane_t_ParamLimits

0xf48e,	// (0x000ac09b) msg_body_pane_t

0x3a2c,	// (0x000a0639) main_viewer_pane_g1_ParamLimits

0x3a2c,	// (0x000a0639) main_viewer_pane_g1

0x3a38,	// (0x000a0645) main_viewer_pane_g2_ParamLimits

0x3a38,	// (0x000a0645) main_viewer_pane_g2

0x3a44,	// (0x000a0651) main_viewer_pane_g3_ParamLimits

0x3a44,	// (0x000a0651) main_viewer_pane_g3

0x3a55,	// (0x000a0662) main_viewer_pane_g4_ParamLimits

0x3a55,	// (0x000a0662) main_viewer_pane_g4

0x3a66,	// (0x000a0673) main_viewer_pane_g5_ParamLimits

0x3a66,	// (0x000a0673) main_viewer_pane_g5

0x3a66,	// (0x000a0673) main_viewer_pane_g7_ParamLimits

0x3a66,	// (0x000a0673) main_viewer_pane_g7

0x3a78,	// (0x000a0685) main_viewer_pane_g8_ParamLimits

0x3a78,	// (0x000a0685) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x000ac0ab) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000ac0ab) main_viewer_pane_g

0xb7c5,	// (0x000a83d2) viewer_content_pane_ParamLimits

0xb7c5,	// (0x000a83d2) viewer_content_pane

0x3ab0,	// (0x000a06bd) main_postcard_pane_g1_ParamLimits

0x3ab0,	// (0x000a06bd) main_postcard_pane_g1

0x3abe,	// (0x000a06cb) main_postcard_pane_g2_ParamLimits

0x3abe,	// (0x000a06cb) main_postcard_pane_g2

0x3acc,	// (0x000a06d9) main_postcard_pane_g3_ParamLimits

0x3acc,	// (0x000a06d9) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x000ac0bc) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x000ac0bc) main_postcard_pane_g

0x3adc,	// (0x000a06e9) main_postcard_pane_g4

0xcb05,	// (0x000a9712) smil_status_volume_pane_g2

0x3b08,	// (0x000a0715) postcard_pane_ParamLimits

0x3b08,	// (0x000a0715) postcard_pane

0xb649,	// (0x000a8256) postcard_pane_g1_ParamLimits

0xb649,	// (0x000a8256) postcard_pane_g1

0x3b42,	// (0x000a074f) postcard_pane_g2_ParamLimits

0x3b42,	// (0x000a074f) postcard_pane_g2

0x3b4e,	// (0x000a075b) postcard_pane_g3_ParamLimits

0x3b4e,	// (0x000a075b) postcard_pane_g3

0xb7d3,	// (0x000a83e0) postcard_pane_g4_ParamLimits

0xb7d3,	// (0x000a83e0) postcard_pane_g4

0x3b5a,	// (0x000a0767) postcard_pane_g5_ParamLimits

0x3b5a,	// (0x000a0767) postcard_pane_g5

0x3b66,	// (0x000a0773) postcard_pane_g6_ParamLimits

0x3b66,	// (0x000a0773) postcard_pane_g6

0xb7e1,	// (0x000a83ee) postcard_pane_g7_ParamLimits

0xb7e1,	// (0x000a83ee) postcard_pane_g7

0x0006,

0xf4bc,	// (0x000ac0c9) postcard_pane_g_ParamLimits

0xf4bc,	// (0x000ac0c9) postcard_pane_g

0x3b74,	// (0x000a0781) main_mp2_pane_g1_ParamLimits

0x3b74,	// (0x000a0781) main_mp2_pane_g1

0x3b82,	// (0x000a078f) main_mp2_pane_g2_ParamLimits

0x3b82,	// (0x000a078f) main_mp2_pane_g2

0x3b8e,	// (0x000a079b) main_mp2_pane_g3_ParamLimits

0x3b8e,	// (0x000a079b) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x000ac0d8) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x000ac0d8) main_mp2_pane_g

0x3b9a,	// (0x000a07a7) main_mp2_pane_t1_ParamLimits

0x3b9a,	// (0x000a07a7) main_mp2_pane_t1

0x3bb1,	// (0x000a07be) main_mp2_pane_t2_ParamLimits

0x3bb1,	// (0x000a07be) main_mp2_pane_t2

0x3bc5,	// (0x000a07d2) main_mp2_pane_t3_ParamLimits

0x3bc5,	// (0x000a07d2) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x000ac0df) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x000ac0df) main_mp2_pane_t

0xb7ef,	// (0x000a83fc) pec_content_pane_ParamLimits

0xb7ef,	// (0x000a83fc) pec_content_pane

0xad0b,	// (0x000a7918) scroll_pane_cp015

0xb801,	// (0x000a840e) pec_attribute_pane_ParamLimits

0xb801,	// (0x000a840e) pec_attribute_pane

0x3bd7,	// (0x000a07e4) pec_content_pane_g1_ParamLimits

0x3bd7,	// (0x000a07e4) pec_content_pane_g1

0xb811,	// (0x000a841e) pec_content_pane_t1_ParamLimits

0xb811,	// (0x000a841e) pec_content_pane_t1

0xb823,	// (0x000a8430) pec_content_pane_t2_ParamLimits

0xb823,	// (0x000a8430) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x000ac0e6) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x000ac0e6) pec_content_pane_t

0x3be3,	// (0x000a07f0) list_single_graphic_pane_cp01_ParamLimits

0x3be3,	// (0x000a07f0) list_single_graphic_pane_cp01

0xa494,	// (0x000a70a1) bg_popup_sub_pane_cp04

0xb835,	// (0x000a8442) popup_mup_playback_window_g1

0xb841,	// (0x000a844e) popup_mup_playback_window_t1

0xb856,	// (0x000a8463) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x000ac0eb) popup_mup_playback_window_t

0xb88d,	// (0x000a849a) main_image_pane_g1_ParamLimits

0xb88d,	// (0x000a849a) main_image_pane_g1

0xb8d0,	// (0x000a84dd) scroll_pane_cp018_ParamLimits

0xb8d0,	// (0x000a84dd) scroll_pane_cp018

0xb8e8,	// (0x000a84f5) scroll_pane_cp016_ParamLimits

0xb8e8,	// (0x000a84f5) scroll_pane_cp016

0x3c71,	// (0x000a087e) smil2_image_pane_ParamLimits

0x3c71,	// (0x000a087e) smil2_image_pane

0x3ca7,	// (0x000a08b4) smil2_root_pane_ParamLimits

0x3ca7,	// (0x000a08b4) smil2_root_pane

0x3cd3,	// (0x000a08e0) smil2_text_pane_ParamLimits

0x3cd3,	// (0x000a08e0) smil2_text_pane

0xa239,	// (0x000a6e46) bg_list_pane_cp06

0xb924,	// (0x000a8531) grid_radio_pane

0xa239,	// (0x000a6e46) bg_popup_window_pane_cp06

0xb92e,	// (0x000a853b) main_fmradio_pane_t1

0xb2e4,	// (0x000a7ef1) heading_pane_cp04

0xb93c,	// (0x000a8549) main_fmradio_pane_t2

0xc924,	// (0x000a9531) popup_cale_lunar_info_window_g1

0xb94a,	// (0x000a8557) main_fmradio_pane_t3

0xc92c,	// (0x000a9539) popup_cale_lunar_info_window_g2

0xb95a,	// (0x000a8567) main_fmradio_pane_t4

0x0001,

0xb968,	// (0x000a8575) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x000ac1c6) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000ac100) main_fmradio_pane_t

0xb976,	// (0x000a8583) wait_bar_pane_cp03

0xb97e,	// (0x000a858b) cell_fmradio_pane_ParamLimits

0xb97e,	// (0x000a858b) cell_fmradio_pane

0xb7e1,	// (0x000a83ee) cell_fmradio_pane_g1_ParamLimits

0xb7e1,	// (0x000a83ee) cell_fmradio_pane_g1

0xa239,	// (0x000a6e46) grid_highlight_pane_cp011

0xb993,	// (0x000a85a0) poc_content_pane_ParamLimits

0xb993,	// (0x000a85a0) poc_content_pane

0xb9a5,	// (0x000a85b2) scroll_pane_cp019

0x3d13,	// (0x000a0920) popup_call_poc_act_window_ParamLimits

0x3d13,	// (0x000a0920) popup_call_poc_act_window

0x3d20,	// (0x000a092d) popup_call_poc_inact_window_ParamLimits

0x3d20,	// (0x000a092d) popup_call_poc_inact_window

0xf590,	// (0x000ac19d) bg_popup_call_poc_act_pane_g

0xc89c,	// (0x000a94a9) bg_popup_call_poc_inact_pane_g1

0xc8a4,	// (0x000a94b1) bg_popup_call_poc_inact_pane_g2

0xb9ad,	// (0x000a85ba) popup_call_poc_act_window_g2

0xc8ac,	// (0x000a94b9) bg_popup_call_poc_inact_pane_g3

0xc8b4,	// (0x000a94c1) bg_popup_call_poc_inact_pane_g4

0xc8bc,	// (0x000a94c9) bg_popup_call_poc_inact_pane_g5

0xb9b5,	// (0x000a85c2) popup_call_poc_act_window_t1_ParamLimits

0xb9b5,	// (0x000a85c2) popup_call_poc_act_window_t1

0xb9dd,	// (0x000a85ea) popup_call_poc_act_window_t2_ParamLimits

0xb9dd,	// (0x000a85ea) popup_call_poc_act_window_t2

0xba05,	// (0x000a8612) popup_call_poc_act_window_t3_ParamLimits

0xba05,	// (0x000a8612) popup_call_poc_act_window_t3

0xba2d,	// (0x000a863a) popup_call_poc_act_window_t4_ParamLimits

0xba2d,	// (0x000a863a) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000ac10b) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000ac10b) popup_call_poc_act_window_t

0xc8c4,	// (0x000a94d1) bg_popup_call_poc_inact_pane_g6

0xc8cc,	// (0x000a94d9) bg_popup_call_poc_inact_pane_g7

0xc8d4,	// (0x000a94e1) bg_popup_call_poc_inact_pane_g8

0xba3f,	// (0x000a864c) popup_call_poc_inact_window_g2

0xc8dc,	// (0x000a94e9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x000ac18a) bg_popup_call_poc_inact_pane_g

0xba47,	// (0x000a8654) popup_call_poc_inact_window_t1_ParamLimits

0xba47,	// (0x000a8654) popup_call_poc_inact_window_t1

0xba5c,	// (0x000a8669) popup_call_poc_inact_window_t2_ParamLimits

0xba5c,	// (0x000a8669) popup_call_poc_inact_window_t2

0xba71,	// (0x000a867e) popup_call_poc_inact_window_t3_ParamLimits

0xba71,	// (0x000a867e) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000ac114) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000ac114) popup_call_poc_inact_window_t

0xca65,	// (0x000a9672) context_pane_ParamLimits

0x4395,	// (0x000a0fa2) signal_pane_ParamLimits

0xab5e,	// (0x000a776b) main_call2_pane

0x4302,	// (0x000a0f0f) popup_phob_thumbnail2_window_ParamLimits

0x4302,	// (0x000a0f0f) popup_phob_thumbnail2_window

0x39da,	// (0x000a05e7) aid_hotspot_pointer_arrow_pane

0x39e2,	// (0x000a05ef) aid_hotspot_pointer_hand_pane

0x4045,	// (0x000a0c52) phob_pre_status_pane_g5

0x1b33,	// (0x0009e740) cams_zoom_pane_ParamLimits

0x1b3f,	// (0x0009e74c) image_vga_pane_ParamLimits

0x1b4e,	// (0x0009e75b) main_camera_pane_g1_ParamLimits

0x1b5c,	// (0x0009e769) main_camera_pane_g2_ParamLimits

0x1b68,	// (0x0009e775) main_camera_pane_g3_ParamLimits

0x1b76,	// (0x0009e783) main_camera_pane_g4_ParamLimits

0x1b84,	// (0x0009e791) main_camera_pane_g5_ParamLimits

0x1b92,	// (0x0009e79f) main_camera_pane_g6_ParamLimits

0x1ba0,	// (0x0009e7ad) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000abe13) main_camera_pane_g_ParamLimits

0x1bae,	// (0x0009e7bb) main_camera_pane_t1_ParamLimits

0x1bc0,	// (0x0009e7cd) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000abe24) main_camera_pane_t_ParamLimits

0xa494,	// (0x000a70a1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa494,	// (0x000a70a1) bg_popup_preview_window_pane_cp01

0xba86,	// (0x000a8693) popup_phob_thumbnail2_window_g1_ParamLimits

0xba86,	// (0x000a8693) popup_phob_thumbnail2_window_g1

0xa239,	// (0x000a6e46) call2_cli_visual_pane

0x3d3c,	// (0x000a0949) popup_call2_audio_conf_window_ParamLimits

0x3d3c,	// (0x000a0949) popup_call2_audio_conf_window

0x3d55,	// (0x000a0962) popup_call2_audio_first_window_ParamLimits

0x3d55,	// (0x000a0962) popup_call2_audio_first_window

0x3df3,	// (0x000a0a00) popup_call2_audio_in_window_ParamLimits

0x3df3,	// (0x000a0a00) popup_call2_audio_in_window

0x3e37,	// (0x000a0a44) popup_call2_audio_out_window_ParamLimits

0x3e37,	// (0x000a0a44) popup_call2_audio_out_window

0x3ea1,	// (0x000a0aae) popup_call2_audio_second_window_ParamLimits

0x3ea1,	// (0x000a0aae) popup_call2_audio_second_window

0x3eff,	// (0x000a0b0c) popup_call2_audio_wait_window_ParamLimits

0x3eff,	// (0x000a0b0c) popup_call2_audio_wait_window

0xa239,	// (0x000a6e46) bg_popup_call2_act_pane_cp03

0xa476,	// (0x000a7083) list_conf_pane_cp

0xba92,	// (0x000a869f) popup_call2_audio_conf_window_t1

0xbaa0,	// (0x000a86ad) list_single_graphic_popup_conf2_pane_ParamLimits

0xbaa0,	// (0x000a86ad) list_single_graphic_popup_conf2_pane

0xb353,	// (0x000a7f60) list_highlight_pane_cp04

0xbab3,	// (0x000a86c0) list_single_graphic_popup_conf2_pane_g1

0xb364,	// (0x000a7f71) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000ac11b) list_single_graphic_popup_conf2_pane_g

0xbabd,	// (0x000a86ca) list_single_graphic_popup_conf2_pane_t1

0xbacb,	// (0x000a86d8) bg_popup_call2_act_pane_cp01_ParamLimits

0xbacb,	// (0x000a86d8) bg_popup_call2_act_pane_cp01

0xbb55,	// (0x000a8762) call_type_pane_cp05_ParamLimits

0xbb55,	// (0x000a8762) call_type_pane_cp05

0xbba9,	// (0x000a87b6) popup_call2_audio_second_window_g1_ParamLimits

0xbba9,	// (0x000a87b6) popup_call2_audio_second_window_g1

0xbbfd,	// (0x000a880a) popup_call2_audio_second_window_g2_ParamLimits

0xbbfd,	// (0x000a880a) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000ac120) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000ac120) popup_call2_audio_second_window_g

0xbc62,	// (0x000a886f) popup_call2_audio_second_window_t1_ParamLimits

0xbc62,	// (0x000a886f) popup_call2_audio_second_window_t1

0xbd1d,	// (0x000a892a) popup_call2_audio_second_window_t2_ParamLimits

0xbd1d,	// (0x000a892a) popup_call2_audio_second_window_t2

0xbd70,	// (0x000a897d) popup_call2_audio_second_window_t3_ParamLimits

0xbd70,	// (0x000a897d) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000ac127) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000ac127) popup_call2_audio_second_window_t

0xa239,	// (0x000a6e46) bg_popup_call2_in_pane_cp02

0xa243,	// (0x000a6e50) call_type_pane_cp04

0xa24b,	// (0x000a6e58) popup_call2_audio_wait_window_g1

0xa253,	// (0x000a6e60) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000abd02) popup_call2_audio_wait_window_g

0xa25b,	// (0x000a6e68) popup_call2_audio_wait_window_t3

0xbe63,	// (0x000a8a70) bg_popup_call2_act_pane_ParamLimits

0xbe63,	// (0x000a8a70) bg_popup_call2_act_pane

0xbf23,	// (0x000a8b30) call_type_pane_cp03_ParamLimits

0xbf23,	// (0x000a8b30) call_type_pane_cp03

0xbf87,	// (0x000a8b94) popup_call2_audio_first_window_g1_ParamLimits

0xbf87,	// (0x000a8b94) popup_call2_audio_first_window_g1

0xbff7,	// (0x000a8c04) popup_call2_audio_first_window_g2_ParamLimits

0xbff7,	// (0x000a8c04) popup_call2_audio_first_window_g2

0xb649,	// (0x000a8256) popup_call2_audio_first_window_g3_ParamLimits

0xb649,	// (0x000a8256) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000ac130) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000ac130) popup_call2_audio_first_window_g

0xc0d5,	// (0x000a8ce2) popup_call2_audio_first_window_t1_ParamLimits

0xc0d5,	// (0x000a8ce2) popup_call2_audio_first_window_t1

0xc1d8,	// (0x000a8de5) popup_call2_audio_first_window_t4_ParamLimits

0xc1d8,	// (0x000a8de5) popup_call2_audio_first_window_t4

0xc2bb,	// (0x000a8ec8) popup_call2_audio_first_window_t5_ParamLimits

0xc2bb,	// (0x000a8ec8) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000ac13b) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000ac13b) popup_call2_audio_first_window_t

0xa48c,	// (0x000a7099) bg_popup_call2_act_pane_g1

0xc936,	// (0x000a9543) popup_cale_lunar_info_window_t1

0xc944,	// (0x000a9551) popup_cale_lunar_info_window_t2

0xc952,	// (0x000a955f) popup_cale_lunar_info_window_t3

0xa239,	// (0x000a6e46) bg_popup_call2_bubble_pane

0xc3ce,	// (0x000a8fdb) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3ce,	// (0x000a8fdb) bg_popup_call2_in_pane_cp01

0x9f15,	// (0x000a6b22) call_type_pane_cp02

0xc416,	// (0x000a9023) popup_call2_audio_out_window_g1_ParamLimits

0xc416,	// (0x000a9023) popup_call2_audio_out_window_g1

0xc442,	// (0x000a904f) popup_call2_audio_out_window_g2_ParamLimits

0xc442,	// (0x000a904f) popup_call2_audio_out_window_g2

0xc46a,	// (0x000a9077) popup_call2_audio_out_window_g3_ParamLimits

0xc46a,	// (0x000a9077) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000ac144) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000ac144) popup_call2_audio_out_window_g

0xc4a5,	// (0x000a90b2) popup_call2_audio_out_window_t1_ParamLimits

0xc4a5,	// (0x000a90b2) popup_call2_audio_out_window_t1

0xc504,	// (0x000a9111) popup_call2_audio_out_window_t2_ParamLimits

0xc504,	// (0x000a9111) popup_call2_audio_out_window_t2

0xc558,	// (0x000a9165) popup_call2_audio_out_window_t3_ParamLimits

0xc558,	// (0x000a9165) popup_call2_audio_out_window_t3

0xc56e,	// (0x000a917b) popup_call2_audio_out_window_t4_ParamLimits

0xc56e,	// (0x000a917b) popup_call2_audio_out_window_t4

0xc584,	// (0x000a9191) popup_call2_audio_out_window_t5_ParamLimits

0xc584,	// (0x000a9191) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000ac14d) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000ac14d) popup_call2_audio_out_window_t

0xc5e8,	// (0x000a91f5) bg_popup_call2_in_pane_ParamLimits

0xc5e8,	// (0x000a91f5) bg_popup_call2_in_pane

0xc644,	// (0x000a9251) popup_call2_audio_in_window_g1_ParamLimits

0xc644,	// (0x000a9251) popup_call2_audio_in_window_g1

0xc67c,	// (0x000a9289) popup_call2_audio_in_window_g2_ParamLimits

0xc67c,	// (0x000a9289) popup_call2_audio_in_window_g2

0xc6b4,	// (0x000a92c1) popup_call2_audio_in_window_g3_ParamLimits

0xc6b4,	// (0x000a92c1) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000ac15a) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000ac15a) popup_call2_audio_in_window_g

0xc70c,	// (0x000a9319) popup_call2_audio_in_window_t1_ParamLimits

0xc70c,	// (0x000a9319) popup_call2_audio_in_window_t1

0xc78c,	// (0x000a9399) popup_call2_audio_in_window_t2_ParamLimits

0xc78c,	// (0x000a9399) popup_call2_audio_in_window_t2

0xc80c,	// (0x000a9419) popup_call2_audio_in_window_t3_ParamLimits

0xc80c,	// (0x000a9419) popup_call2_audio_in_window_t3

0xc826,	// (0x000a9433) popup_call2_audio_in_window_t4_ParamLimits

0xc826,	// (0x000a9433) popup_call2_audio_in_window_t4

0xc838,	// (0x000a9445) popup_call2_audio_in_window_t5_ParamLimits

0xc838,	// (0x000a9445) popup_call2_audio_in_window_t5

0xc84a,	// (0x000a9457) popup_call2_audio_in_window_t6_ParamLimits

0xc84a,	// (0x000a9457) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x000ac163) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x000ac163) popup_call2_audio_in_window_t

0xa48c,	// (0x000a7099) bg_popup_call2_in_pane_g1

0xc960,	// (0x000a956d) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x000ac1cb) popup_cale_lunar_info_window_t

0xa494,	// (0x000a70a1) bg_popup_call2_rect_pane_ParamLimits

0xa494,	// (0x000a70a1) bg_popup_call2_rect_pane

0xa239,	// (0x000a6e46) call2_cli_visual_graphic_pane

0xa239,	// (0x000a6e46) call2_cli_visual_text_pane

0x441a,	// (0x000a1027) smil_status_volume_pane_g3

0x0002,

0xaa0b,	// (0x000a7618) call2_cli_visual_graphic_pane_g1

0xaa0b,	// (0x000a7618) call2_cli_visual_graphic_pane_g2

0xaa0b,	// (0x000a7618) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x000ac170) call2_cli_visual_graphic_pane_g

0xc85c,	// (0x000a9469) bg_popup_call2_rect_pane_g1

0xaa97,	// (0x000a76a4) bg_popup_call2_rect_pane_g2

0xc864,	// (0x000a9471) bg_popup_call2_rect_pane_g3

0xc86c,	// (0x000a9479) bg_popup_call2_rect_pane_g4

0xc874,	// (0x000a9481) bg_popup_call2_rect_pane_g5

0xc87c,	// (0x000a9489) bg_popup_call2_rect_pane_g6

0xc884,	// (0x000a9491) bg_popup_call2_rect_pane_g7

0xc88c,	// (0x000a9499) bg_popup_call2_rect_pane_g8

0xc894,	// (0x000a94a1) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x000ac177) bg_popup_call2_rect_pane_g

0xc89c,	// (0x000a94a9) bg_popup_call2_bubble_pane_g1

0xc8a4,	// (0x000a94b1) bg_popup_call2_bubble_pane_g2

0xc8ac,	// (0x000a94b9) bg_popup_call2_bubble_pane_g3

0xc8b4,	// (0x000a94c1) bg_popup_call2_bubble_pane_g4

0xc8bc,	// (0x000a94c9) bg_popup_call2_bubble_pane_g5

0xc8c4,	// (0x000a94d1) bg_popup_call2_bubble_pane_g6

0xc8cc,	// (0x000a94d9) bg_popup_call2_bubble_pane_g7

0xc8d4,	// (0x000a94e1) bg_popup_call2_bubble_pane_g8

0xc8dc,	// (0x000a94e9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x000ac18a) bg_popup_call2_bubble_pane_g

0x1451,	// (0x0009e05e) aid_cale_week_size_cell_pane

0x1bd4,	// (0x0009e7e1) aid_cams_cif_uncrop_pane_ParamLimits

0x1bd4,	// (0x0009e7e1) aid_cams_cif_uncrop_pane

0x1d31,	// (0x0009e93e) aid_cams_size_cell_ParamLimits

0x1d31,	// (0x0009e93e) aid_cams_size_cell

0x1d3d,	// (0x0009e94a) grid_cams_pane_ParamLimits

0x1d4b,	// (0x0009e958) linegrid_cams_pane_ParamLimits

0x1f13,	// (0x0009eb20) call_video_pane_t1

0x1f30,	// (0x0009eb3d) call_video_pane_t2

0x0001,

0xf26a,	// (0x000abe77) call_video_pane_t

0x23fc,	// (0x0009f009) aid_cale_month_size_cell_pane_ParamLimits

0x23fc,	// (0x0009f009) aid_cale_month_size_cell_pane

0xf607,	// (0x000ac214) smil_status_volume_pane_g

0x4427,	// (0x000a1034) volume_smil_pane_ParamLimits

0x0bfb,	// (0x0009d808) aid_popup2_width_pane

0x134f,	// (0x0009df5c) cell_qdial_pane_g4_ParamLimits

0x134f,	// (0x0009df5c) cell_qdial_pane_g4

0x33e4,	// (0x0009fff1) aid_blid_cardinal_pane_ParamLimits

0x33f4,	// (0x000a0001) aid_blid_destination_pane_ParamLimits

0x33f4,	// (0x000a0001) aid_blid_destination_pane

0xa494,	// (0x000a70a1) bg_popup_call_poc_act_pane_ParamLimits

0xa494,	// (0x000a70a1) bg_popup_call_poc_act_pane

0xa494,	// (0x000a70a1) bg_popup_call_poc_inact_pane_ParamLimits

0xa494,	// (0x000a70a1) bg_popup_call_poc_inact_pane

0xc8e4,	// (0x000a94f1) bg_popup_call_poc_act_pane_g1

0xc8ec,	// (0x000a94f9) bg_popup_call_poc_act_pane_g2

0xc8f4,	// (0x000a9501) bg_popup_call_poc_act_pane_g3

0xc8b4,	// (0x000a94c1) bg_popup_call_poc_act_pane_g4

0xc8bc,	// (0x000a94c9) bg_popup_call_poc_act_pane_g5

0xc8fc,	// (0x000a9509) bg_popup_call_poc_act_pane_g6

0xc8cc,	// (0x000a94d9) bg_popup_call_poc_act_pane_g7

0xc904,	// (0x000a9511) bg_popup_call_poc_act_pane_g8

0xa239,	// (0x000a6e46) main_usb_pane

0x421f,	// (0x000a0e2c) popup_cale_lunar_info_window

0x2248,	// (0x0009ee55) im_reading_pane_t1_ParamLimits

0xac63,	// (0x000a7870) list_im_pane_ParamLimits

0xac74,	// (0x000a7881) scroll_pane_cp07_ParamLimits

0xa239,	// (0x000a6e46) grid_highlight_pane_cp012

0xa494,	// (0x000a70a1) mup_scale_pane_ParamLimits

0xb649,	// (0x000a8256) main_usb_pane_g1_ParamLimits

0xb649,	// (0x000a8256) main_usb_pane_g1

0x3f68,	// (0x000a0b75) main_usb_pane_g2_ParamLimits

0x3f68,	// (0x000a0b75) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x000ac1b4) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x000ac1b4) main_usb_pane_g

0x3f74,	// (0x000a0b81) main_usb_pane_t1_ParamLimits

0x3f74,	// (0x000a0b81) main_usb_pane_t1

0x3f86,	// (0x000a0b93) main_usb_pane_t2_ParamLimits

0x3f86,	// (0x000a0b93) main_usb_pane_t2

0x3f98,	// (0x000a0ba5) main_usb_pane_t3_ParamLimits

0x3f98,	// (0x000a0ba5) main_usb_pane_t3

0x3faa,	// (0x000a0bb7) main_usb_pane_t4_ParamLimits

0x3faa,	// (0x000a0bb7) main_usb_pane_t4

0x3fbc,	// (0x000a0bc9) main_usb_pane_t5_ParamLimits

0x3fbc,	// (0x000a0bc9) main_usb_pane_t5

0x3fce,	// (0x000a0bdb) main_usb_pane_t6_ParamLimits

0x3fce,	// (0x000a0bdb) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x000ac1b9) main_usb_pane_t_ParamLimits

0x3383,	// (0x0009ff90) aid_text_placing

0x338e,	// (0x0009ff9b) main_location2_pane_t1_ParamLimits

0x33a4,	// (0x0009ffb1) main_location2_pane_t2_ParamLimits

0x33ba,	// (0x0009ffc7) main_location2_pane_t3_ParamLimits

0x33d0,	// (0x0009ffdd) main_location2_pane_t4_ParamLimits

0x33d0,	// (0x0009ffdd) main_location2_pane_t4

0xf3cb,	// (0x000abfd8) main_location2_pane_t_ParamLimits

0xa4d0,	// (0x000a70dd) find_pinb_pane_g2_ParamLimits

0xa4d0,	// (0x000a70dd) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000abd28) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000abd28) find_pinb_pane_g

0xa4dc,	// (0x000a70e9) find_pinb_pane_t1_ParamLimits

0xa4ee,	// (0x000a70fb) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000abd2d) find_pinb_pane_t_ParamLimits

0xa239,	// (0x000a6e46) main_call3_pane

0x29af,	// (0x0009f5bc) cale_month_day_heading_pane_t1_ParamLimits

0x2a31,	// (0x0009f63e) cale_month_day_heading_pane_t2_ParamLimits

0x2aaa,	// (0x0009f6b7) cale_month_day_heading_pane_t3_ParamLimits

0x2b23,	// (0x0009f730) cale_month_day_heading_pane_t4_ParamLimits

0x2b9c,	// (0x0009f7a9) cale_month_day_heading_pane_t5_ParamLimits

0x2c1d,	// (0x0009f82a) cale_month_day_heading_pane_t6_ParamLimits

0x2ca6,	// (0x0009f8b3) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000abeaf) cale_month_day_heading_pane_t_ParamLimits

0xaf4d,	// (0x000a7b5a) smil_status_volume_pane

0x3b26,	// (0x000a0733) postcard_address_pane_ParamLimits

0x3b26,	// (0x000a0733) postcard_address_pane

0x3b34,	// (0x000a0741) postcard_message_pane_ParamLimits

0x3b34,	// (0x000a0741) postcard_message_pane

0x3f3e,	// (0x000a0b4b) call2_cli_visual_pane_t1_ParamLimits

0x3f3e,	// (0x000a0b4b) call2_cli_visual_pane_t1

0x456d,	// (0x000a117a) postcard_message_pane_t1_ParamLimits

0x456d,	// (0x000a117a) postcard_message_pane_t1

0xcb18,	// (0x000a9725) postcard_address_pane_t1_ParamLimits

0xcb18,	// (0x000a9725) postcard_address_pane_t1

0x455e,	// (0x000a116b) popup_call3_audio_in_window_ParamLimits

0x455e,	// (0x000a116b) popup_call3_audio_in_window

0x443c,	// (0x000a1049) bg_popup_call3_in_pane_ParamLimits

0x443c,	// (0x000a1049) bg_popup_call3_in_pane

0x44a4,	// (0x000a10b1) popup_call3_audio_in_window_g1_ParamLimits

0x44a4,	// (0x000a10b1) popup_call3_audio_in_window_g1

0x44bc,	// (0x000a10c9) popup_call3_audio_in_window_g2_ParamLimits

0x44bc,	// (0x000a10c9) popup_call3_audio_in_window_g2

0x44d4,	// (0x000a10e1) popup_call3_audio_in_window_g3_ParamLimits

0x44d4,	// (0x000a10e1) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x000ac21b) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x000ac21b) popup_call3_audio_in_window_g

0x44fc,	// (0x000a1109) popup_call3_audio_in_window_t1_ParamLimits

0x44fc,	// (0x000a1109) popup_call3_audio_in_window_t1

0x4524,	// (0x000a1131) popup_call3_audio_in_window_t2_ParamLimits

0x4524,	// (0x000a1131) popup_call3_audio_in_window_t2

0x454c,	// (0x000a1159) popup_call3_audio_in_window_t3_ParamLimits

0x454c,	// (0x000a1159) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x000ac224) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x000ac224) popup_call3_audio_in_window_t

0xab5e,	// (0x000a776b) bg_popup_call3_rect_pane

0xc85c,	// (0x000a9469) bg_popup_call3_rect_pane_g1

0xaa97,	// (0x000a76a4) bg_popup_call3_rect_pane_g2

0xc864,	// (0x000a9471) bg_popup_call3_rect_pane_g3

0xc86c,	// (0x000a9479) bg_popup_call3_rect_pane_g4

0xc874,	// (0x000a9481) bg_popup_call3_rect_pane_g5

0xc87c,	// (0x000a9489) bg_popup_call3_rect_pane_g6

0xc884,	// (0x000a9491) bg_popup_call3_rect_pane_g7

0x3728,	// (0x000a0335) mup_visualizer_osc_pane

0xb6f3,	// (0x000a8300) mup_visualizer_spec_pane

0x445c,	// (0x000a1069) call3_video_qcif_pane_ParamLimits

0x445c,	// (0x000a1069) call3_video_qcif_pane

0x446e,	// (0x000a107b) call3_video_qcif_uncrop_pane_ParamLimits

0x446e,	// (0x000a107b) call3_video_qcif_uncrop_pane

0x447e,	// (0x000a108b) call3_video_subqcif_pane_ParamLimits

0x447e,	// (0x000a108b) call3_video_subqcif_pane

0x4492,	// (0x000a109f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4492,	// (0x000a109f) call3_video_subqcif_uncrop_pane

0x44ec,	// (0x000a10f9) popup_call3_audio_in_window_g4_ParamLimits

0x44ec,	// (0x000a10f9) popup_call3_audio_in_window_g4

0x4409,	// (0x000a1016) mup_spec_half_pane

0x4412,	// (0x000a101f) mup_spec_half_pane_cp

0xcad8,	// (0x000a96e5) mup_osc_middle_pane

0xcae1,	// (0x000a96ee) mup_visualizer_osc_pane_g1

0x43e9,	// (0x000a0ff6) mup_spec_bar_pane_ParamLimits

0x43e9,	// (0x000a0ff6) mup_spec_bar_pane

0xcac5,	// (0x000a96d2) mup_spec_bar_pane_g1

0xcacf,	// (0x000a96dc) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000ac20f) mup_spec_bar_pane_g

0x1451,	// (0x0009e05e) aid_cale_week_size_cell_pane_ParamLimits

0x146b,	// (0x0009e078) bg_cale_heading_pane_ParamLimits

0x1494,	// (0x0009e0a1) bg_cale_pane_cp01_ParamLimits

0x14b6,	// (0x0009e0c3) cale_week_corner_pane_ParamLimits

0x14d5,	// (0x0009e0e2) cale_week_day_heading_pane_ParamLimits

0x1503,	// (0x0009e110) cale_week_scroll_pane_g1_ParamLimits

0x1527,	// (0x0009e134) cale_week_scroll_pane_g2_ParamLimits

0x153f,	// (0x0009e14c) cale_week_scroll_pane_g3_ParamLimits

0x1557,	// (0x0009e164) cale_week_scroll_pane_g4_ParamLimits

0x156f,	// (0x0009e17c) cale_week_scroll_pane_g5_ParamLimits

0x1587,	// (0x0009e194) cale_week_scroll_pane_g6_ParamLimits

0x15a7,	// (0x0009e1b4) cale_week_scroll_pane_g7_ParamLimits

0x15c7,	// (0x0009e1d4) cale_week_scroll_pane_g8_ParamLimits

0x15e7,	// (0x0009e1f4) cale_week_scroll_pane_g9_ParamLimits

0x1604,	// (0x0009e211) cale_week_scroll_pane_g10_ParamLimits

0x1621,	// (0x0009e22e) cale_week_scroll_pane_g11_ParamLimits

0x1640,	// (0x0009e24d) cale_week_scroll_pane_g12_ParamLimits

0x1665,	// (0x0009e272) cale_week_scroll_pane_g13_ParamLimits

0x168e,	// (0x0009e29b) cale_week_scroll_pane_g14_ParamLimits

0x16b7,	// (0x0009e2c4) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000abdb9) cale_week_scroll_pane_g_ParamLimits

0x1700,	// (0x0009e30d) cale_week_time_pane_ParamLimits

0x1720,	// (0x0009e32d) grid_cale_week_pane_ParamLimits

0xaad4,	// (0x000a76e1) listscroll_cale_week_pane_t1

0xaae6,	// (0x000a76f3) scroll_pane_cp08_ParamLimits

0x2474,	// (0x0009f081) cale_month_corner_pane_ParamLimits

0xaf23,	// (0x000a7b30) cale_month_pane_t1

0x2936,	// (0x0009f543) cale_month_week_pane_ParamLimits

0xb649,	// (0x000a8256) popup_call_status_window_g1_ParamLimits

0x31a1,	// (0x0009fdae) popup_call_status_window_g2_ParamLimits

0x31ad,	// (0x0009fdba) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x000abf5f) popup_call_status_window_g_ParamLimits

0xb2d4,	// (0x000a7ee1) aid_call2_pane

0x39cc,	// (0x000a05d9) msg_header_pane_g1

0x3b26,	// (0x000a0733) postcard_address2_pane_ParamLimits

0x3b26,	// (0x000a0733) postcard_address2_pane

0x3b34,	// (0x000a0741) postcard_message2_pane_ParamLimits

0x3b34,	// (0x000a0741) postcard_message2_pane

0x43a3,	// (0x000a0fb0) message2_row_pane_ParamLimits

0x43a3,	// (0x000a0fb0) message2_row_pane

0xca80,	// (0x000a968d) address2_row_pane_ParamLimits

0xca80,	// (0x000a968d) address2_row_pane

0xca93,	// (0x000a96a0) postcard_message2_row_pane_g1

0xca9b,	// (0x000a96a8) postcard_message2_row_pane_t1

0xca93,	// (0x000a96a0) address2_row_pane_g1

0xca9b,	// (0x000a96a8) address2_row_pane_t1

0x1aae,	// (0x0009e6bb) aid_size_cell_vorec

0xa239,	// (0x000a6e46) main_rss_pane

0x43bd,	// (0x000a0fca) rss_list_single_pane_ParamLimits

0x43bd,	// (0x000a0fca) rss_list_single_pane

0xcaa9,	// (0x000a96b6) rss_list_single_pane_t1

0xcab7,	// (0x000a96c4) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x000ac20a) rss_list_single_pane_t

0xa239,	// (0x000a6e46) main_camera2_pane

0xa239,	// (0x000a6e46) main_video2_pane

0x45d1,	// (0x000a11de) cams_zoom_pane_cp2_ParamLimits

0x45d1,	// (0x000a11de) cams_zoom_pane_cp2

0x45dd,	// (0x000a11ea) image2_vga_pane_ParamLimits

0x45dd,	// (0x000a11ea) image2_vga_pane

0x45ec,	// (0x000a11f9) main_camera2_pane_g1_ParamLimits

0x45ec,	// (0x000a11f9) main_camera2_pane_g1

0x45f8,	// (0x000a1205) main_camera2_pane_g2_ParamLimits

0x45f8,	// (0x000a1205) main_camera2_pane_g2

0x4604,	// (0x000a1211) main_camera2_pane_g3_ParamLimits

0x4604,	// (0x000a1211) main_camera2_pane_g3

0x4610,	// (0x000a121d) main_camera2_pane_g4_ParamLimits

0x4610,	// (0x000a121d) main_camera2_pane_g4

0x461c,	// (0x000a1229) main_camera2_pane_g5_ParamLimits

0x461c,	// (0x000a1229) main_camera2_pane_g5

0x4628,	// (0x000a1235) main_camera2_pane_g6_ParamLimits

0x4628,	// (0x000a1235) main_camera2_pane_g6

0x4634,	// (0x000a1241) main_camera2_pane_g7_ParamLimits

0x4634,	// (0x000a1241) main_camera2_pane_g7

0x4640,	// (0x000a124d) main_camera2_pane_g8_ParamLimits

0x4640,	// (0x000a124d) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x000ac22b) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x000ac22b) main_camera2_pane_g

0x4658,	// (0x000a1265) main_camera2_pane_t1_ParamLimits

0x4658,	// (0x000a1265) main_camera2_pane_t1

0x466a,	// (0x000a1277) main_camera2_pane_t2_ParamLimits

0x466a,	// (0x000a1277) main_camera2_pane_t2

0x467c,	// (0x000a1289) main_camera2_pane_t3_ParamLimits

0x467c,	// (0x000a1289) main_camera2_pane_t3

0x468e,	// (0x000a129b) main_camera2_pane_t4_ParamLimits

0x468e,	// (0x000a129b) main_camera2_pane_t4

0x0006,

0xf631,	// (0x000ac23e) main_camera2_pane_t_ParamLimits

0xf631,	// (0x000ac23e) main_camera2_pane_t

0x46eb,	// (0x000a12f8) cams_zoom_pane_cp4_ParamLimits

0x46eb,	// (0x000a12f8) cams_zoom_pane_cp4

0x46fb,	// (0x000a1308) image2_cif_pane_ParamLimits

0x46fb,	// (0x000a1308) image2_cif_pane

0x4710,	// (0x000a131d) image2_subqcif_pane_ParamLimits

0x4710,	// (0x000a131d) image2_subqcif_pane

0x471f,	// (0x000a132c) main_video2_pane_g1_ParamLimits

0x471f,	// (0x000a132c) main_video2_pane_g1

0x4731,	// (0x000a133e) main_video2_pane_g2_ParamLimits

0x4731,	// (0x000a133e) main_video2_pane_g2

0x4741,	// (0x000a134e) main_video2_pane_g3_ParamLimits

0x4741,	// (0x000a134e) main_video2_pane_g3

0x4751,	// (0x000a135e) main_video2_pane_g4_ParamLimits

0x4751,	// (0x000a135e) main_video2_pane_g4

0x4761,	// (0x000a136e) main_video2_pane_g5_ParamLimits

0x4761,	// (0x000a136e) main_video2_pane_g5

0x4771,	// (0x000a137e) main_video2_pane_g6_ParamLimits

0x4771,	// (0x000a137e) main_video2_pane_g6

0x0005,

0xf640,	// (0x000ac24d) main_video2_pane_g_ParamLimits

0xf640,	// (0x000ac24d) main_video2_pane_g

0x4783,	// (0x000a1390) main_video2_pane_t1_ParamLimits

0x4783,	// (0x000a1390) main_video2_pane_t1

0x479d,	// (0x000a13aa) main_video2_pane_t2_ParamLimits

0x479d,	// (0x000a13aa) main_video2_pane_t2

0x47c3,	// (0x000a13d0) main_video2_pane_t3_ParamLimits

0x47c3,	// (0x000a13d0) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000ac25a) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000ac25a) main_video2_pane_t

0x4085,	// (0x000a0c92) call_muted_g2

0x0001,

0xf5ef,	// (0x000ac1fc) call_muted_g

0xa239,	// (0x000a6e46) main_mup2_pane

0xcb2f,	// (0x000a973c) main_mup2_pane_g1_ParamLimits

0xcb2f,	// (0x000a973c) main_mup2_pane_g1

0x47e9,	// (0x000a13f6) main_mup2_pane_g2_ParamLimits

0x47e9,	// (0x000a13f6) main_mup2_pane_g2

0x4a7b,	// (0x000a1688) main_mup_pane_g13_cp1

0x4a83,	// (0x000a1690) mup_volume_pane_cp1

0x480b,	// (0x000a1418) main_mup2_pane_g4_ParamLimits

0x480b,	// (0x000a1418) main_mup2_pane_g4

0x4820,	// (0x000a142d) main_mup2_pane_g5_ParamLimits

0x4820,	// (0x000a142d) main_mup2_pane_g5

0x4835,	// (0x000a1442) main_mup2_pane_g6_ParamLimits

0x4835,	// (0x000a1442) main_mup2_pane_g6

0x484a,	// (0x000a1457) main_mup2_pane_g7_ParamLimits

0x484a,	// (0x000a1457) main_mup2_pane_g7

0x0006,

0xf654,	// (0x000ac261) main_mup2_pane_g_ParamLimits

0xf654,	// (0x000ac261) main_mup2_pane_g

0x4866,	// (0x000a1473) main_mup2_pane_t1_ParamLimits

0x4866,	// (0x000a1473) main_mup2_pane_t1

0x487d,	// (0x000a148a) main_mup2_pane_t2_ParamLimits

0x487d,	// (0x000a148a) main_mup2_pane_t2

0x4894,	// (0x000a14a1) main_mup2_pane_t3_ParamLimits

0x4894,	// (0x000a14a1) main_mup2_pane_t3

0x48ab,	// (0x000a14b8) main_mup2_pane_t4_ParamLimits

0x48ab,	// (0x000a14b8) main_mup2_pane_t4

0x48c5,	// (0x000a14d2) main_mup2_pane_t5_ParamLimits

0x48c5,	// (0x000a14d2) main_mup2_pane_t5

0x48df,	// (0x000a14ec) main_mup2_pane_t6_ParamLimits

0x48df,	// (0x000a14ec) main_mup2_pane_t6

0x0005,

0xf663,	// (0x000ac270) main_mup2_pane_t_ParamLimits

0xf663,	// (0x000ac270) main_mup2_pane_t

0x4917,	// (0x000a1524) mup2_visualizer_pane_ParamLimits

0x4917,	// (0x000a1524) mup2_visualizer_pane

0x494d,	// (0x000a155a) mup_progress_pane_cp_ParamLimits

0x494d,	// (0x000a155a) mup_progress_pane_cp

0x4a66,	// (0x000a1673) mup_volume_pane_cp_ParamLimits

0x4a66,	// (0x000a1673) mup_volume_pane_cp

0x4966,	// (0x000a1573) mup2_visualizer_pane_g1_ParamLimits

0x4966,	// (0x000a1573) mup2_visualizer_pane_g1

0xcb3b,	// (0x000a9748) mup2_visualizer_pane_g2_ParamLimits

0xcb3b,	// (0x000a9748) mup2_visualizer_pane_g2

0x497b,	// (0x000a1588) mup2_visualizer_pane_g3_ParamLimits

0x497b,	// (0x000a1588) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x000ac27d) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x000ac27d) mup2_visualizer_pane_g

0xb91c,	// (0x000a8529) aid_size_cell_fmradio

0x419b,	// (0x000a0da8) aid_height_parent_landcape

0xacf2,	// (0x000a78ff) wml_content_pane_cp

0xacfa,	// (0x000a7907) wml_tabs_pane

0xad03,	// (0x000a7910) popup_wml_miniature_window

0xad0b,	// (0x000a7918) scroll_pane_cp021

0xad1f,	// (0x000a792c) wml_content_pane_comp8

0xa239,	// (0x000a6e46) bg_popup_sub_pane_cp05

0xcb59,	// (0x000a9766) popup_wml_miniature_window_g1

0xcb61,	// (0x000a976e) wml_miniature_view_pane

0x4989,	// (0x000a1596) aid_size_wml_view

0x4991,	// (0x000a159e) wml_miniature_view_pane_g1

0x499a,	// (0x000a15a7) wml_miniature_view_pane_g2

0x49a3,	// (0x000a15b0) wml_miniature_view_pane_g3

0x49ab,	// (0x000a15b8) wml_miniature_view_pane_g4

0x49b3,	// (0x000a15c0) wml_miniature_view_pane_g5

0x49bb,	// (0x000a15c8) wml_miniature_view_pane_g6

0x49c3,	// (0x000a15d0) wml_miniature_view_pane_g7

0x49cb,	// (0x000a15d8) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x000ac284) wml_miniature_view_pane_g

0xcb2f,	// (0x000a973c) background_graphic_ParamLimits

0xcb2f,	// (0x000a973c) background_graphic

0xcb69,	// (0x000a9776) wml_tabs_2_pane

0xcb72,	// (0x000a977f) wml_tabs_3_pane_ParamLimits

0xcb72,	// (0x000a977f) wml_tabs_3_pane

0xcb84,	// (0x000a9791) wml_tabs_4_pane_ParamLimits

0xcb84,	// (0x000a9791) wml_tabs_4_pane

0xcb9a,	// (0x000a97a7) wml_tabs_5_pane_ParamLimits

0xcb9a,	// (0x000a97a7) wml_tabs_5_pane

0xcbb4,	// (0x000a97c1) wml_tabs_pane_g2_ParamLimits

0xcbb4,	// (0x000a97c1) wml_tabs_pane_g2

0xcbc8,	// (0x000a97d5) wml_tabs_pane_g3_ParamLimits

0xcbc8,	// (0x000a97d5) wml_tabs_pane_g3

0x49d3,	// (0x000a15e0) wml_tabs_2_active_pane_ParamLimits

0x49d3,	// (0x000a15e0) wml_tabs_2_active_pane

0x49e5,	// (0x000a15f2) wml_tabs_2_passive_pane_ParamLimits

0x49e5,	// (0x000a15f2) wml_tabs_2_passive_pane

0x49f7,	// (0x000a1604) wml_tabs_3_active_pane_cp_ParamLimits

0x49f7,	// (0x000a1604) wml_tabs_3_active_pane_cp

0x4a0a,	// (0x000a1617) wml_tabs_3_passive_pane_ParamLimits

0x4a0a,	// (0x000a1617) wml_tabs_3_passive_pane

0x4a1b,	// (0x000a1628) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a1b,	// (0x000a1628) wml_tabs_3_passive_pane_cp

0x4a30,	// (0x000a163d) tabs_4_active_pane

0x4a38,	// (0x000a1645) tabs_4_passive_pane

0x4a40,	// (0x000a164d) tabs_4_passive_pane_cp

0x4a48,	// (0x000a1655) tabs_4_passive_pane_cp2

0x3f60,	// (0x000a0b6d) aid_height_text

0x36f1,	// (0x000a02fe) mup_volume_cont_pane_ParamLimits

0x36f1,	// (0x000a02fe) mup_volume_cont_pane

0x0fa9,	// (0x0009dbb6) aid_size_cell_pinb

0x0fb3,	// (0x0009dbc0) aid_size_list_pinb

0x4936,	// (0x000a1543) mup2_volume_cont_pane_ParamLimits

0x4936,	// (0x000a1543) mup2_volume_cont_pane

0x4a52,	// (0x000a165f) mup2_volume_cont_pane_g1_ParamLimits

0x4a52,	// (0x000a165f) mup2_volume_cont_pane_g1

0x0c07,	// (0x0009d814) aid_size_cell_touch_ParamLimits

0x0c07,	// (0x0009d814) aid_size_cell_touch

0x0ec8,	// (0x0009dad5) touch_pane_ParamLimits

0x0ec8,	// (0x0009dad5) touch_pane

0x0ebe,	// (0x0009dacb) main_rss2_pane

0xcbe5,	// (0x000a97f2) listscroll_rss2_pane

0xcbee,	// (0x000a97fb) rss2_navigation_pane

0xcbf6,	// (0x000a9803) list_rss2_pane

0xb3f8,	// (0x000a8005) scroll_pane_cp22

0xcbfe,	// (0x000a980b) rss2_navigation_pane_g1

0xcc07,	// (0x000a9814) rss2_navigation_pane_g2

0xcc0f,	// (0x000a981c) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x000ac295) rss2_navigation_pane_g

0xcc17,	// (0x000a9824) rss2_navigation_pane_t1

0x4a8b,	// (0x000a1698) rss2_list_single_pane_ParamLimits

0x4a8b,	// (0x000a1698) rss2_list_single_pane

0xcc25,	// (0x000a9832) rss2_list_single_pane_t2

0xcc33,	// (0x000a9840) rss2_list_single_pane_t3_ParamLimits

0xcc33,	// (0x000a9840) rss2_list_single_pane_t3

0xcc50,	// (0x000a985d) rss2_list_single_pane_t4

0x2f6e,	// (0x0009fb7b) smil_status_pane_g1

0x41c4,	// (0x000a0dd1) main_image2_pane_ParamLimits

0x41c4,	// (0x000a0dd1) main_image2_pane

0x464c,	// (0x000a1259) main_camera2_pane_g9_ParamLimits

0x464c,	// (0x000a1259) main_camera2_pane_g9

0x46a0,	// (0x000a12ad) main_camera2_pane_t5_ParamLimits

0x46a0,	// (0x000a12ad) main_camera2_pane_t5

0x46b2,	// (0x000a12bf) main_camera2_pane_t6_ParamLimits

0x46b2,	// (0x000a12bf) main_camera2_pane_t6

0x4aae,	// (0x000a16bb) main_image2_pane_g1_ParamLimits

0x4aae,	// (0x000a16bb) main_image2_pane_g1

0x3cfd,	// (0x000a090a) smil2_video_pane_ParamLimits

0x3cfd,	// (0x000a090a) smil2_video_pane

0x0b0b,	// (0x0009d718) aid_zoom_text_primary_cp

0x0e59,	// (0x0009da66) popup_preview_fixed_window

0xac5b,	// (0x000a7868) im_reading_pane_g1

0x4596,	// (0x000a11a3) cams2_bc_adjust_pane_cp_ParamLimits

0x4596,	// (0x000a11a3) cams2_bc_adjust_pane_cp

0x46dd,	// (0x000a12ea) cams2_bc_adjust_pane_ParamLimits

0x46dd,	// (0x000a12ea) cams2_bc_adjust_pane

0xd094,	// (0x000a9ca1) cams2_bc_adjust_pane_g1

0x4aba,	// (0x000a16c7) cams2_slider_pane

0x4ac3,	// (0x000a16d0) cams2_slider_pane_g1

0x4acc,	// (0x000a16d9) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x000ac29c) cams2_slider_pane_g

0x10ae,	// (0x0009dcbb) calc_display_pane_ParamLimits

0x10cc,	// (0x0009dcd9) calc_paper_pane_ParamLimits

0x10e8,	// (0x0009dcf5) grid_calc_pane_ParamLimits

0x320b,	// (0x0009fe18) popup_clock_digital_window_t1_ParamLimits

0xb8b9,	// (0x000a84c6) main_image_pane_t1

0x1094,	// (0x0009dca1) aid_size_cell_calc_ParamLimits

0x1094,	// (0x0009dca1) aid_size_cell_calc

0x41f5,	// (0x000a0e02) popup_blid_sat_info2_window_ParamLimits

0x41f5,	// (0x000a0e02) popup_blid_sat_info2_window

0xcc66,	// (0x000a9873) aid_size_cell_blid

0xcc6e,	// (0x000a987b) bg_popup_window_pane_cp07

0xcc91,	// (0x000a989e) grid_popup_blid_pane

0xcc9b,	// (0x000a98a8) heading_pane_cp05_ParamLimits

0xcc9b,	// (0x000a98a8) heading_pane_cp05

0xcd65,	// (0x000a9972) cell_popup_blid_pane_ParamLimits

0xcd65,	// (0x000a9972) cell_popup_blid_pane

0xcd8f,	// (0x000a999c) cell_popup_blid_pane_g1

0xcd97,	// (0x000a99a4) cell_popup_blid_pane_t1

0x48fc,	// (0x000a1509) mup2_indicator_pane_ParamLimits

0x48fc,	// (0x000a1509) mup2_indicator_pane

0xab5e,	// (0x000a776b) mup2_visualizer_osc_pane

0xcb47,	// (0x000a9754) mup2_visualizer_spec_pane_ParamLimits

0xcb47,	// (0x000a9754) mup2_visualizer_spec_pane

0x4ae6,	// (0x000a16f3) mup2_spec_half_pane

0x4aef,	// (0x000a16fc) mup2_spec_half_pane_cp

0x4af9,	// (0x000a1706) mup2_spec_bar_pane_ParamLimits

0x4af9,	// (0x000a1706) mup2_spec_bar_pane

0xcac5,	// (0x000a96d2) mup2_spec_bar_pane_g1

0xcacf,	// (0x000a96dc) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000ac20f) mup2_spec_bar_pane_g

0x4b18,	// (0x000a1725) mup2_osc_middle_pane

0xcae1,	// (0x000a96ee) mup2_visualizer_osc_pane_g1

0x9e11,	// (0x000a6a1e) popup_number_entry_window_t1_ParamLimits

0x9e24,	// (0x000a6a31) popup_number_entry_window_t2_ParamLimits

0x9e36,	// (0x000a6a43) popup_number_entry_window_t3_ParamLimits

0x9e48,	// (0x000a6a55) popup_number_entry_window_t5_ParamLimits

0x9e48,	// (0x000a6a55) popup_number_entry_window_t5

0xf0c6,	// (0x000abcd3) popup_number_entry_window_t_ParamLimits

0x9e7d,	// (0x000a6a8a) text_title_cp2_ParamLimits

0x39ea,	// (0x000a05f7) aid_hotspot_pointer_text2_pane

0x3a84,	// (0x000a0691) main_viewer_pane_g9_ParamLimits

0x3a84,	// (0x000a0691) main_viewer_pane_g9

0xaf23,	// (0x000a7b30) cale_month_pane_t1_ParamLimits

0xaf60,	// (0x000a7b6d) bg_cale_pane_ParamLimits

0xaf78,	// (0x000a7b85) list_cale_pane_ParamLimits

0xaf89,	// (0x000a7b96) listscroll_cale_day_pane_t1

0xaf9b,	// (0x000a7ba8) scroll_pane_cp09_ParamLimits

0x3730,	// (0x000a033d) main_mup_eq_pane_t1_ParamLimits

0x3730,	// (0x000a033d) main_mup_eq_pane_t1

0x374c,	// (0x000a0359) main_mup_eq_pane_t2_ParamLimits

0x374c,	// (0x000a0359) main_mup_eq_pane_t2

0x3768,	// (0x000a0375) main_mup_eq_pane_t3_ParamLimits

0x3768,	// (0x000a0375) main_mup_eq_pane_t3

0x3782,	// (0x000a038f) main_mup_eq_pane_t4_ParamLimits

0x3782,	// (0x000a038f) main_mup_eq_pane_t4

0x379c,	// (0x000a03a9) main_mup_eq_pane_t5_ParamLimits

0x379c,	// (0x000a03a9) main_mup_eq_pane_t5

0x37b6,	// (0x000a03c3) main_mup_eq_pane_t6_ParamLimits

0x37b6,	// (0x000a03c3) main_mup_eq_pane_t6

0x37cc,	// (0x000a03d9) main_mup_eq_pane_t7_ParamLimits

0x37cc,	// (0x000a03d9) main_mup_eq_pane_t7

0x37e2,	// (0x000a03ef) main_mup_eq_pane_t8_ParamLimits

0x37e2,	// (0x000a03ef) main_mup_eq_pane_t8

0x37f8,	// (0x000a0405) main_mup_eq_pane_t9_ParamLimits

0x37f8,	// (0x000a0405) main_mup_eq_pane_t9

0x3814,	// (0x000a0421) main_mup_eq_pane_t10_ParamLimits

0x3814,	// (0x000a0421) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x000ac05e) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x000ac05e) main_mup_eq_pane_t

0x38d9,	// (0x000a04e6) mup_equalizer_pane_cp5_ParamLimits

0x38f1,	// (0x000a04fe) mup_equalizer_pane_cp6_ParamLimits

0x3909,	// (0x000a0516) mup_equalizer_pane_cp7_ParamLimits

0x0ebe,	// (0x0009dacb) main_gallery_pane

0xcaea,	// (0x000a96f7) smil2_volume_pane

0xcaf2,	// (0x000a96ff) smil_status_volume_pane_g1_ParamLimits

0xcb05,	// (0x000a9712) smil_status_volume_pane_g2_ParamLimits

0x441a,	// (0x000a1027) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x000ac214) smil_status_volume_pane_g_ParamLimits

0xcc6e,	// (0x000a987b) bg_popup_window_pane_cp07_ParamLimits

0xcc7c,	// (0x000a9889) blid_firmament_pane

0x4b21,	// (0x000a172e) aid_size_cell_gallery_ParamLimits

0x4b21,	// (0x000a172e) aid_size_cell_gallery

0x4b2f,	// (0x000a173c) grid_gallery_pane_ParamLimits

0x4b2f,	// (0x000a173c) grid_gallery_pane

0x4b3f,	// (0x000a174c) cell_gallery_pane_ParamLimits

0x4b3f,	// (0x000a174c) cell_gallery_pane

0xcda5,	// (0x000a99b2) bg_cell_gallery_focus_pane_ParamLimits

0xcda5,	// (0x000a99b2) bg_cell_gallery_focus_pane

0xcdb7,	// (0x000a99c4) cell_gallery_pane_g1_ParamLimits

0xcdb7,	// (0x000a99c4) cell_gallery_pane_g1

0x4b8a,	// (0x000a1797) cell_gallery_pane_g2_ParamLimits

0x4b8a,	// (0x000a1797) cell_gallery_pane_g2

0x4b97,	// (0x000a17a4) cell_gallery_pane_g3_ParamLimits

0x4b97,	// (0x000a17a4) cell_gallery_pane_g3

0xcdc3,	// (0x000a99d0) cell_gallery_pane_g4_ParamLimits

0xcdc3,	// (0x000a99d0) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x000ac2c2) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x000ac2c2) cell_gallery_pane_g

0xcdcf,	// (0x000a99dc) bg_cell_gallery_focus_pane_g1

0xcdd7,	// (0x000a99e4) bg_cell_gallery_focus_pane_g2

0xcddf,	// (0x000a99ec) bg_cell_gallery_focus_pane_g3

0xcde7,	// (0x000a99f4) bg_cell_gallery_focus_pane_g4

0xcdef,	// (0x000a99fc) bg_cell_gallery_focus_pane_g5

0xcdf7,	// (0x000a9a04) bg_cell_gallery_focus_pane_g6

0xcdff,	// (0x000a9a0c) bg_cell_gallery_focus_pane_g7

0xce07,	// (0x000a9a14) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x000ac2cb) bg_cell_gallery_focus_pane_g

0xce0f,	// (0x000a9a1c) aid_firma_cardinal

0xce23,	// (0x000a9a30) blid_firmament_pane_t1

0xce3a,	// (0x000a9a47) blid_firmament_pane_t2

0xce51,	// (0x000a9a5e) blid_firmament_pane_t3

0xce68,	// (0x000a9a75) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x000ac2dc) blid_firmament_pane_t

0xce7f,	// (0x000a9a8c) blid_sat_info_pane

0xce8f,	// (0x000a9a9c) blid_sat_info_pane_g1

0xce8f,	// (0x000a9a9c) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x000ac2e5) blid_sat_info_pane_g

0xce99,	// (0x000a9aa6) blid_sat_info_pane_t1

0xcea7,	// (0x000a9ab4) smil2_volume_content_pane

0xceb0,	// (0x000a9abd) smil2_volume_pane_g1

0xad5d,	// (0x000a796a) smil2_volume_content_pane_g1

0xceb8,	// (0x000a9ac5) smil2_volume_content_pane_g2

0xcec1,	// (0x000a9ace) smil2_volume_content_pane_g3

0xceca,	// (0x000a9ad7) smil2_volume_content_pane_g4

0xced3,	// (0x000a9ae0) smil2_volume_content_pane_g5

0xcedc,	// (0x000a9ae9) smil2_volume_content_pane_g6

0xcee5,	// (0x000a9af2) smil2_volume_content_pane_g7

0xceee,	// (0x000a9afb) smil2_volume_content_pane_g8

0xcef7,	// (0x000a9b04) smil2_volume_content_pane_g9

0xcf00,	// (0x000a9b0d) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x000ac2ea) smil2_volume_content_pane_g

0x17e1,	// (0x0009e3ee) cale_week_day_heading_pane_t1_ParamLimits

0x1809,	// (0x0009e416) cale_week_day_heading_pane_t2_ParamLimits

0x1836,	// (0x0009e443) cale_week_day_heading_pane_t3_ParamLimits

0x1863,	// (0x0009e470) cale_week_day_heading_pane_t4_ParamLimits

0x1890,	// (0x0009e49d) cale_week_day_heading_pane_t5_ParamLimits

0x18bd,	// (0x0009e4ca) cale_week_day_heading_pane_t6_ParamLimits

0x18ea,	// (0x0009e4f7) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000abdda) cale_week_day_heading_pane_t_ParamLimits

0xab03,	// (0x000a7710) bg_cale_side_pane_ParamLimits

0x1912,	// (0x0009e51f) cale_week_time_pane_t1_ParamLimits

0x1936,	// (0x0009e543) cale_week_time_pane_t2_ParamLimits

0x195a,	// (0x0009e567) cale_week_time_pane_t3_ParamLimits

0x197e,	// (0x0009e58b) cale_week_time_pane_t4_ParamLimits

0x19a2,	// (0x0009e5af) cale_week_time_pane_t5_ParamLimits

0x19c8,	// (0x0009e5d5) cale_week_time_pane_t6_ParamLimits

0x19f0,	// (0x0009e5fd) cale_week_time_pane_t7_ParamLimits

0x1a1c,	// (0x0009e629) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000abde9) cale_week_time_pane_t_ParamLimits

0x1a4c,	// (0x0009e659) cell_cale_week_pane_g2_ParamLimits

0xab03,	// (0x000a7710) bg_cale_side_pane_cp01_ParamLimits

0x2d2f,	// (0x0009f93c) cale_month_week_pane_t1_ParamLimits

0x2d48,	// (0x0009f955) cale_month_week_pane_t2_ParamLimits

0x2d61,	// (0x0009f96e) cale_month_week_pane_t3_ParamLimits

0x2d7a,	// (0x0009f987) cale_month_week_pane_t4_ParamLimits

0x2d93,	// (0x0009f9a0) cale_month_week_pane_t5_ParamLimits

0x2db0,	// (0x0009f9bd) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000abebe) cale_month_week_pane_t_ParamLimits

0x2f2b,	// (0x0009fb38) cell_cale_month_pane_g1_ParamLimits

0x0ebe,	// (0x0009dacb) main_cale_event_viewer_pane

0x9de7,	// (0x000a69f4) listscroll_cale_event_viewer_pane

0xcf09,	// (0x000a9b16) list_cale_ev_pane

0xcf11,	// (0x000a9b1e) scroll_pane_cp023

0x4ba4,	// (0x000a17b1) field_cale_ev_pane_ParamLimits

0x4ba4,	// (0x000a17b1) field_cale_ev_pane

0xcf1d,	// (0x000a9b2a) field_cale_ev_content_pane_ParamLimits

0xcf1d,	// (0x000a9b2a) field_cale_ev_content_pane

0xcf29,	// (0x000a9b36) field_cale_ev_pane_g1_ParamLimits

0xcf29,	// (0x000a9b36) field_cale_ev_pane_g1

0xcf35,	// (0x000a9b42) field_cale_ev_pane_g2_ParamLimits

0xcf35,	// (0x000a9b42) field_cale_ev_pane_g2

0xcf4d,	// (0x000a9b5a) field_cale_ev_pane_g3_ParamLimits

0xcf4d,	// (0x000a9b5a) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x000ac2ff) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x000ac2ff) field_cale_ev_pane_g

0xcf65,	// (0x000a9b72) field_cale_ev_pane_t1_ParamLimits

0xcf65,	// (0x000a9b72) field_cale_ev_pane_t1

0x4bc8,	// (0x000a17d5) field_cale_ev_content_pane_t1_ParamLimits

0x4bc8,	// (0x000a17d5) field_cale_ev_content_pane_t1

0xb79f,	// (0x000a83ac) bg_button_pane_cp01

0x143f,	// (0x0009e04c) listscroll_cale_week_pane_ParamLimits

0xaacb,	// (0x000a76d8) popup_toolbar_window_cp01

0xaad4,	// (0x000a76e1) listscroll_cale_week_pane_t1_ParamLimits

0x143f,	// (0x0009e04c) listscroll_cale_day_pane_ParamLimits

0xaacb,	// (0x000a76d8) popup_toolbar_window_cp02

0xaf89,	// (0x000a7b96) listscroll_cale_day_pane_t1_ParamLimits

0x41b2,	// (0x000a0dbf) main_cale_month_pane_ParamLimits

0x4314,	// (0x000a0f21) popup_toolbar_window_cp03_ParamLimits

0x4314,	// (0x000a0f21) popup_toolbar_window_cp03

0x3c0d,	// (0x000a081a) main_image_pane_g2_ParamLimits

0x3c0d,	// (0x000a081a) main_image_pane_g2

0x3c19,	// (0x000a0826) main_image_pane_g3_ParamLimits

0x3c19,	// (0x000a0826) main_image_pane_g3

0x0002,

0xf4e3,	// (0x000ac0f0) main_image_pane_g_ParamLimits

0xf4e3,	// (0x000ac0f0) main_image_pane_g

0xb8b9,	// (0x000a84c6) main_image_pane_t1_ParamLimits

0x3c25,	// (0x000a0832) main_image_pane_t2_ParamLimits

0x3c25,	// (0x000a0832) main_image_pane_t2

0x3c37,	// (0x000a0844) main_image_pane_t3_ParamLimits

0x3c37,	// (0x000a0844) main_image_pane_t3

0x3c49,	// (0x000a0856) main_image_pane_t4_ParamLimits

0x3c49,	// (0x000a0856) main_image_pane_t4

0x0003,

0xf4ea,	// (0x000ac0f7) main_image_pane_t_ParamLimits

0xf4ea,	// (0x000ac0f7) main_image_pane_t

0x3c5b,	// (0x000a0868) popup_image_details_window_cp01

0x3c65,	// (0x000a0872) popup_toobar_trans_pane_cp01_ParamLimits

0x3c65,	// (0x000a0872) popup_toobar_trans_pane_cp01

0x4256,	// (0x000a0e63) popup_image_details_window_ParamLimits

0x4256,	// (0x000a0e63) popup_image_details_window

0x4264,	// (0x000a0e71) popup_image_focus_window

0x4588,	// (0x000a1195) camera2_autofocus_pane_ParamLimits

0x4588,	// (0x000a1195) camera2_autofocus_pane

0x9de7,	// (0x000a69f4) bg_popup_sub_pane_cp06

0xcf7c,	// (0x000a9b89) popup_image_focus_window_g1

0xcf84,	// (0x000a9b91) popup_image_focus_window_g2

0xcf8c,	// (0x000a9b99) popup_image_focus_window_g3

0xcf94,	// (0x000a9ba1) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x000ac306) popup_image_focus_window_g

0xcf9c,	// (0x000a9ba9) popup_image_focus_window_t1

0xcfaa,	// (0x000a9bb7) popup_image_focus_window_t2

0xcfba,	// (0x000a9bc7) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x000ac30f) popup_image_focus_window_t

0xcfc8,	// (0x000a9bd5) camera2_autofocus_pane_g1

0xad4f,	// (0x000a795c) bg_tb_trans_pane_cp01

0xcfd6,	// (0x000a9be3) popup_image_details_window_g1

0xcfe9,	// (0x000a9bf6) popup_image_details_window_g2

0x0002,

0xf714,	// (0x000ac321) popup_image_details_window_g

0xd012,	// (0x000a9c1f) popup_image_details_window_t1

0xd024,	// (0x000a9c31) popup_image_details_window_t2

0xd03d,	// (0x000a9c4a) popup_image_details_window_t3

0xd051,	// (0x000a9c5e) popup_image_details_window_t4

0xd06c,	// (0x000a9c79) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x000ac328) popup_image_details_window_t

0xa9a2,	// (0x000a75af) bg_calc_paper_pane_ParamLimits

0x0ebe,	// (0x0009dacb) grid_highlight_pane_cp013

0x11e5,	// (0x0009ddf2) list_calc_pane_ParamLimits

0x11f7,	// (0x0009de04) scroll_pane_cp024

0xa9b6,	// (0x000a75c3) bg_calc_display_pane_ParamLimits

0x11ff,	// (0x0009de0c) calc_display_pane_t1_ParamLimits

0x1214,	// (0x0009de21) calc_display_pane_t2_ParamLimits

0x1229,	// (0x0009de36) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000abd5a) calc_display_pane_t_ParamLimits

0x12f9,	// (0x0009df06) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000abd77) cell_calc_pane_g

0x1302,	// (0x0009df0f) cell_calc_pane_t1

0xaa15,	// (0x000a7622) grid_highlight_pane_cp02_ParamLimits

0xaa2b,	// (0x000a7638) toolbar_button_pane_cp01_ParamLimits

0xaa2b,	// (0x000a7638) toolbar_button_pane_cp01

0xb8fe,	// (0x000a850b) temp_image_control_pane_ParamLimits

0xb8fe,	// (0x000a850b) temp_image_control_pane

0x41c4,	// (0x000a0dd1) main_mp3_pane

0xd086,	// (0x000a9c93) temp_image_control_pane_g1_ParamLimits

0xd086,	// (0x000a9c93) temp_image_control_pane_g1

0xd09c,	// (0x000a9ca9) temp_image_control_pane_g2_ParamLimits

0xd09c,	// (0x000a9ca9) temp_image_control_pane_g2

0xd0ae,	// (0x000a9cbb) temp_image_control_pane_g3_ParamLimits

0xd0ae,	// (0x000a9cbb) temp_image_control_pane_g3

0x4c13,	// (0x000a1820) temp_image_control_pane_g4_ParamLimits

0x4c13,	// (0x000a1820) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x000ac333) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x000ac333) temp_image_control_pane_g

0xd086,	// (0x000a9c93) main_mp3_pane_g1

0x4c24,	// (0x000a1831) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x000ac33c) main_mp3_pane_g

0xd0f1,	// (0x000a9cfe) main_mp3_pane_t1

0xab66,	// (0x000a7773) main_camera_pane_g8_ParamLimits

0xab66,	// (0x000a7773) main_camera_pane_g8

0x1ce7,	// (0x0009e8f4) main_video_pane_g7_ParamLimits

0x1ce7,	// (0x0009e8f4) main_video_pane_g7

0x46cb,	// (0x000a12d8) main_camera2_pane_t7_ParamLimits

0x46cb,	// (0x000a12d8) main_camera2_pane_t7

0xacb2,	// (0x000a78bf) scroll_pane_cp025_ParamLimits

0xacb2,	// (0x000a78bf) scroll_pane_cp025

0xacc6,	// (0x000a78d3) scroll_pane_cp026_ParamLimits

0xacc6,	// (0x000a78d3) scroll_pane_cp026

0xacd5,	// (0x000a78e2) wml_content_pane_ParamLimits

0x0ebe,	// (0x0009dacb) main_touch_calib_pane

0x4cc8,	// (0x000a18d5) main_touch_calib_pane_g1

0x4cd4,	// (0x000a18e1) main_touch_calib_pane_g2

0x4ce0,	// (0x000a18ed) main_touch_calib_pane_g3

0x4cec,	// (0x000a18f9) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x000ac35a) main_touch_calib_pane_g

0x4cf8,	// (0x000a1905) main_touch_calib_pane_t1

0x4d0f,	// (0x000a191c) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x000ac363) main_touch_calib_pane_t

0xb4c7,	// (0x000a80d4) mup_progress_pane_cp02

0xb4fc,	// (0x000a8109) navi_pane_g1

0xb5b7,	// (0x000a81c4) navi_pane_mp_t3

0x41c4,	// (0x000a0dd1) main_mp3_pane_ParamLimits

0x4355,	// (0x000a0f62) navi_pane_ParamLimits

0xd086,	// (0x000a9c93) main_mp3_pane_g1_ParamLimits

0x4c24,	// (0x000a1831) main_mp3_pane_g2_ParamLimits

0x4c30,	// (0x000a183d) main_mp3_pane_g3_ParamLimits

0x4c30,	// (0x000a183d) main_mp3_pane_g3

0x4c3c,	// (0x000a1849) main_mp3_pane_g4_ParamLimits

0x4c3c,	// (0x000a1849) main_mp3_pane_g4

0xd0be,	// (0x000a9ccb) main_mp3_pane_g5_ParamLimits

0xd0be,	// (0x000a9ccb) main_mp3_pane_g5

0xd0cc,	// (0x000a9cd9) main_mp3_pane_g6_ParamLimits

0xd0cc,	// (0x000a9cd9) main_mp3_pane_g6

0xd0d9,	// (0x000a9ce6) main_mp3_pane_g7_ParamLimits

0xd0d9,	// (0x000a9ce6) main_mp3_pane_g7

0xd0e5,	// (0x000a9cf2) main_mp3_pane_g8_ParamLimits

0xd0e5,	// (0x000a9cf2) main_mp3_pane_g8

0xf72f,	// (0x000ac33c) main_mp3_pane_g_ParamLimits

0x4c48,	// (0x000a1855) main_mp3_pane_t2

0x4c58,	// (0x000a1865) main_mp3_pane_t3

0xd0ff,	// (0x000a9d0c) main_mp3_pane_t4

0xd10d,	// (0x000a9d1a) main_mp3_pane_t5

0x0005,

0xf740,	// (0x000ac34d) main_mp3_pane_t

0xd11b,	// (0x000a9d28) mup_progress_pane_cp01

0x0b0b,	// (0x0009d718) aid_zoom_text_secondary2

0xcf09,	// (0x000a9b16) list_cale_ev2_pane

0xcf11,	// (0x000a9b1e) scroll_pane_cp023_ParamLimits

0x4d6a,	// (0x000a1977) field_cale_ev2_pane_ParamLimits

0x4d6a,	// (0x000a1977) field_cale_ev2_pane

0x4d85,	// (0x000a1992) field_cale_ev2_pane_g1_ParamLimits

0x4d85,	// (0x000a1992) field_cale_ev2_pane_g1

0x4d91,	// (0x000a199e) field_cale_ev2_pane_g2_ParamLimits

0x4d91,	// (0x000a199e) field_cale_ev2_pane_g2

0x4da9,	// (0x000a19b6) field_cale_ev2_pane_g3_ParamLimits

0x4da9,	// (0x000a19b6) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x000ac36e) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x000ac36e) field_cale_ev2_pane_g

0x4dc1,	// (0x000a19ce) field_cale_ev2_pane_t1_ParamLimits

0x4dc1,	// (0x000a19ce) field_cale_ev2_pane_t1

0x4dd8,	// (0x000a19e5) field_cale_ev2_pane_t2_ParamLimits

0x4dd8,	// (0x000a19e5) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x000ac377) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x000ac377) field_cale_ev2_pane_t

0x3aec,	// (0x000a06f9) main_postcard_pane_g5_ParamLimits

0x3aec,	// (0x000a06f9) main_postcard_pane_g5

0x3afa,	// (0x000a0707) main_postcard_pane_g6_ParamLimits

0x3afa,	// (0x000a0707) main_postcard_pane_g6

0x1b25,	// (0x0009e732) camera2_autofocus_pane_cp_ParamLimits

0x1b25,	// (0x0009e732) camera2_autofocus_pane_cp

0x41c4,	// (0x000a0dd1) main_mup3_pane

0x4e30,	// (0x000a1a3d) main_mup3_pane_g1_ParamLimits

0x4e30,	// (0x000a1a3d) main_mup3_pane_g1

0x4e51,	// (0x000a1a5e) main_mup3_pane_g2_ParamLimits

0x4e51,	// (0x000a1a5e) main_mup3_pane_g2

0x4ec5,	// (0x000a1ad2) main_mup3_pane_g3_ParamLimits

0x4ec5,	// (0x000a1ad2) main_mup3_pane_g3

0x4f2a,	// (0x000a1b37) main_mup3_pane_g4_ParamLimits

0x4f2a,	// (0x000a1b37) main_mup3_pane_g4

0x4f8f,	// (0x000a1b9c) main_mup3_pane_g5_ParamLimits

0x4f8f,	// (0x000a1b9c) main_mup3_pane_g5

0x4ff4,	// (0x000a1c01) main_mup3_pane_g6_ParamLimits

0x4ff4,	// (0x000a1c01) main_mup3_pane_g6

0xd123,	// (0x000a9d30) main_mup3_pane_g7_ParamLimits

0xd123,	// (0x000a9d30) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x000ac387) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x000ac387) main_mup3_pane_g

0x506a,	// (0x000a1c77) main_mup3_pane_t1_ParamLimits

0x506a,	// (0x000a1c77) main_mup3_pane_t1

0x50d5,	// (0x000a1ce2) main_mup3_pane_t2_ParamLimits

0x50d5,	// (0x000a1ce2) main_mup3_pane_t2

0x519a,	// (0x000a1da7) main_mup3_pane_t4_ParamLimits

0x519a,	// (0x000a1da7) main_mup3_pane_t4

0x51ee,	// (0x000a1dfb) main_mup3_pane_t5_ParamLimits

0x51ee,	// (0x000a1dfb) main_mup3_pane_t5

0x529e,	// (0x000a1eab) main_mup3_pane_t6_ParamLimits

0x529e,	// (0x000a1eab) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x000ac398) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x000ac398) main_mup3_pane_t

0x5348,	// (0x000a1f55) mup3_progress_pane_ParamLimits

0x5348,	// (0x000a1f55) mup3_progress_pane

0x53c6,	// (0x000a1fd3) popup_mup3_control_window_ParamLimits

0x53c6,	// (0x000a1fd3) popup_mup3_control_window

0xd131,	// (0x000a9d3e) popup_mup3_text_window

0x53e3,	// (0x000a1ff0) mup3_progress_pane_t1

0x5402,	// (0x000a200f) mup3_progress_pane_t2

0xd139,	// (0x000a9d46) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x000ac3a5) mup3_progress_pane_t

0xd156,	// (0x000a9d63) mup_progress_pane_cp03

0x9de7,	// (0x000a69f4) bg_tb_trans_pane_cp04

0x5421,	// (0x000a202e) mup3_volume_pane

0x5429,	// (0x000a2036) popup_mup3_control_window_g1

0xdd70,	// (0x000aa97d) mup3_volume_pane_g1

0xdd79,	// (0x000aa986) mup3_volume_pane_g2

0xdd82,	// (0x000aa98f) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x000ac3ac) mup3_volume_pane_g

0x9de7,	// (0x000a69f4) bg_tb_trans_pane_cp03

0xd166,	// (0x000a9d73) popup_mup3_text_window_g1

0xd16e,	// (0x000a9d7b) popup_mup3_text_window_t1

0xa9fe,	// (0x000a760b) list_calc_item_pane_g1_ParamLimits

0xcbdc,	// (0x000a97e9) mup_volume_pane_cp_g1

0x4d28,	// (0x000a1935) main_touch_calib_pane_t3

0x4d3e,	// (0x000a194b) main_touch_calib_pane_t4

0x4d54,	// (0x000a1961) main_touch_calib_pane_t5

0x0bf3,	// (0x0009d800) aid_cell_size_toolbar2

0x0bfb,	// (0x0009d808) aid_popup3_width_pane

0x0afb,	// (0x0009d708) aid_zoom_text_msg_primary

0x1af8,	// (0x0009e705) vorec_t7

0xa9c2,	// (0x000a75cf) bg_calc_paper_pane_g1_ParamLimits

0xa9ce,	// (0x000a75db) bg_calc_paper_pane_g2_ParamLimits

0xa9da,	// (0x000a75e7) bg_calc_paper_pane_g3_ParamLimits

0xa9e6,	// (0x000a75f3) bg_calc_paper_pane_g4_ParamLimits

0xa9f2,	// (0x000a75ff) bg_calc_paper_pane_g5_ParamLimits

0x126a,	// (0x0009de77) bg_calc_paper_pane_g6_ParamLimits

0x127b,	// (0x0009de88) bg_calc_paper_pane_g7_ParamLimits

0x128c,	// (0x0009de99) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000abd61) bg_calc_paper_pane_g_ParamLimits

0x129d,	// (0x0009deaa) calc_bg_paper_pane_g9_ParamLimits

0x1c16,	// (0x0009e823) image_qvga_pane_ParamLimits

0x1c16,	// (0x0009e823) image_qvga_pane

0xa494,	// (0x000a70a1) bg_popup_sub_pane_cp04_ParamLimits

0xb835,	// (0x000a8442) popup_mup_playback_window_g1_ParamLimits

0xb841,	// (0x000a844e) popup_mup_playback_window_t1_ParamLimits

0xb856,	// (0x000a8463) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x000ac0eb) popup_mup_playback_window_t_ParamLimits

0x47fa,	// (0x000a1407) main_mup2_pane_g3_ParamLimits

0x47fa,	// (0x000a1407) main_mup2_pane_g3

0x1fb9,	// (0x0009ebc6) popup_toolbar_window_cp04

0xbc51,	// (0x000a885e) popup_call2_audio_second_window_g3_ParamLimits

0xbc51,	// (0x000a885e) popup_call2_audio_second_window_g3

0xc05b,	// (0x000a8c68) popup_call2_audio_first_window_g4_ParamLimits

0xc05b,	// (0x000a8c68) popup_call2_audio_first_window_g4

0xc6ec,	// (0x000a92f9) popup_call2_audio_in_window_g4_ParamLimits

0xc6ec,	// (0x000a92f9) popup_call2_audio_in_window_g4

0x3c00,	// (0x000a080d) aid_area_sk_bg_cut_ParamLimits

0x3c00,	// (0x000a080d) aid_area_sk_bg_cut

0xb86b,	// (0x000a8478) aid_area_sk_bg_cut_2_ParamLimits

0xb86b,	// (0x000a8478) aid_area_sk_bg_cut_2

0x4b7a,	// (0x000a1787) aid_placing_details_win

0x4b82,	// (0x000a178f) aid_placing_details_win_2

0xcfc8,	// (0x000a9bd5) camera2_autofocus_pane_g1_ParamLimits

0x0e4a,	// (0x0009da57) popup_fixed_preview_cale_window_ParamLimits

0x0e4a,	// (0x0009da57) popup_fixed_preview_cale_window

0xb657,	// (0x000a8264) navi_slider_pane_g3

0xb637,	// (0x000a8244) navi_slider_pane_g4

0xb640,	// (0x000a824d) navi_slider_pane_g5

0xb657,	// (0x000a8264) navi_slider_pane_g6

0x34a6,	// (0x000a00b3) navi_slider_pane_g7

0xb76c,	// (0x000a8379) mup_scale_pane_g3

0xb775,	// (0x000a8382) mup_scale_pane_g4

0xb77e,	// (0x000a838b) mup_scale_pane_g5

0x3921,	// (0x000a052e) mup_scale_pane_g6

0x392a,	// (0x000a0537) mup_scale_pane_g7

0xb657,	// (0x000a8264) cams2_slider_pane_g3

0xcc5e,	// (0x000a986b) cams2_slider_pane_g4

0x4ad5,	// (0x000a16e2) cams2_slider_pane_g5

0xb657,	// (0x000a8264) cams2_slider_pane_g6

0x4add,	// (0x000a16ea) cams2_slider_pane_g7

0xce8f,	// (0x000a9a9c) camera2_autofocus_pane_cp_g1

0xca4b,	// (0x000a9658) bg_popup_preview_window_pane_cp02_ParamLimits

0xca4b,	// (0x000a9658) bg_popup_preview_window_pane_cp02

0xd17c,	// (0x000a9d89) list_fp_cale_pane_ParamLimits

0xd17c,	// (0x000a9d89) list_fp_cale_pane

0xd188,	// (0x000a9d95) popup_fixed_preview_cale_window_t1_ParamLimits

0xd188,	// (0x000a9d95) popup_fixed_preview_cale_window_t1

0x5432,	// (0x000a203f) popup_fixed_preview_cale_window_t2_ParamLimits

0x5432,	// (0x000a203f) popup_fixed_preview_cale_window_t2

0x5447,	// (0x000a2054) popup_fixed_preview_cale_window_t3_ParamLimits

0x5447,	// (0x000a2054) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x000ac3b3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x000ac3b3) popup_fixed_preview_cale_window_t

0x545c,	// (0x000a2069) list_single_fp_cale_pane_ParamLimits

0x545c,	// (0x000a2069) list_single_fp_cale_pane

0xd1a6,	// (0x000a9db3) list_single_fp_cale_pane_g1_ParamLimits

0xd1a6,	// (0x000a9db3) list_single_fp_cale_pane_g1

0xd1b2,	// (0x000a9dbf) list_single_fp_cale_pane_g2_ParamLimits

0xd1b2,	// (0x000a9dbf) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x000ac3ba) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x000ac3ba) list_single_fp_cale_pane_g

0xd1cb,	// (0x000a9dd8) list_single_fp_cale_pane_t1_ParamLimits

0xd1cb,	// (0x000a9dd8) list_single_fp_cale_pane_t1

0xd1dd,	// (0x000a9dea) list_single_fp_cale_pane_t2_ParamLimits

0xd1dd,	// (0x000a9dea) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x000ac3c1) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x000ac3c1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0ebe,	// (0x0009dacb) main_dialer_pane

0x546c,	// (0x000a2079) aid_cell_size_keypad

0x5476,	// (0x000a2083) dialer_ne_pane

0x5480,	// (0x000a208d) grid_dialer_command_1_pane

0x5488,	// (0x000a2095) grid_dialer_command_2_pane

0x5490,	// (0x000a209d) grid_dialer_keypad_pane

0x54a4,	// (0x000a20b1) bg_popup_call_pane_cp06_ParamLimits

0x54a4,	// (0x000a20b1) bg_popup_call_pane_cp06

0x54b0,	// (0x000a20bd) dialer_ne_clear_pane_ParamLimits

0x54b0,	// (0x000a20bd) dialer_ne_clear_pane

0xd210,	// (0x000a9e1d) dialer_ne_pane_g1

0xd218,	// (0x000a9e25) dialer_ne_pane_t1_ParamLimits

0xd218,	// (0x000a9e25) dialer_ne_pane_t1

0x54bc,	// (0x000a20c9) dialer_ne_pane_t2_ParamLimits

0x54bc,	// (0x000a20c9) dialer_ne_pane_t2

0x54d9,	// (0x000a20e6) dialer_ne_pane_t3_ParamLimits

0x54d9,	// (0x000a20e6) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x000ac3c6) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x000ac3c6) dialer_ne_pane_t

0x54fd,	// (0x000a210a) dialer_ne_pane_t3_copy1_ParamLimits

0x54fd,	// (0x000a210a) dialer_ne_pane_t3_copy1

0x5521,	// (0x000a212e) cell_dialer_keypad_pane_ParamLimits

0x5521,	// (0x000a212e) cell_dialer_keypad_pane

0x5538,	// (0x000a2145) cell_dialer_command_1_pane_ParamLimits

0x5538,	// (0x000a2145) cell_dialer_command_1_pane

0x554e,	// (0x000a215b) cell_dialer_command_2_pane_ParamLimits

0x554e,	// (0x000a215b) cell_dialer_command_2_pane

0xd22a,	// (0x000a9e37) bg_button_pane_cp02_ParamLimits

0xd22a,	// (0x000a9e37) bg_button_pane_cp02

0x555d,	// (0x000a216a) cell_dialer_keypad_pane_g1_ParamLimits

0x555d,	// (0x000a216a) cell_dialer_keypad_pane_g1

0xd22a,	// (0x000a9e37) bg_button_pane_cp03_ParamLimits

0xd22a,	// (0x000a9e37) bg_button_pane_cp03

0x5572,	// (0x000a217f) cell_dialer_command_1_pane_g1_ParamLimits

0x5572,	// (0x000a217f) cell_dialer_command_1_pane_g1

0xd236,	// (0x000a9e43) bg_button_pane_cp04

0x5586,	// (0x000a2193) cell_dialer_command_2_pane_g1

0xab5e,	// (0x000a776b) bg_button_pane_cp06

0xd23e,	// (0x000a9e4b) dialer_ne_clear_pane_g1

0xb508,	// (0x000a8115) navi_pane_g2

0xb536,	// (0x000a8143) navi_pane_g3

0x0002,

0xf3e1,	// (0x000abfee) navi_pane_g

0xb5c5,	// (0x000a81d2) navi_pane_mv_g2

0xb5ee,	// (0x000a81fb) navi_pane_mv_g5

0x3471,	// (0x000a007e) navi_pane_mv_t1

0xa9b6,	// (0x000a75c3) main_clock2_pane

0xe1b4,	// (0x000aadc1) main_clock2_list_pane_ParamLimits

0xe1b4,	// (0x000aadc1) main_clock2_list_pane

0x55e1,	// (0x000a21ee) main_clock2_pane_t1_ParamLimits

0x55e1,	// (0x000a21ee) main_clock2_pane_t1

0x560f,	// (0x000a221c) main_clock2_pane_t2_ParamLimits

0x560f,	// (0x000a221c) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x000ac3d2) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x000ac3d2) main_clock2_pane_t

0x5674,	// (0x000a2281) popup_clock_analogue_window_cp03_ParamLimits

0x5674,	// (0x000a2281) popup_clock_analogue_window_cp03

0x5692,	// (0x000a229f) popup_clock_digital_window_cp02_ParamLimits

0x5692,	// (0x000a229f) popup_clock_digital_window_cp02

0x5707,	// (0x000a2314) main_clock2_list_single_pane_ParamLimits

0x5707,	// (0x000a2314) main_clock2_list_single_pane

0xab5e,	// (0x000a776b) list_highlight_pane_cp05

0xd276,	// (0x000a9e83) main_clock2_list_single_pane_t1

0x1fb9,	// (0x0009ebc6) popup_toolbar_window_cp04_ParamLimits

0x4be3,	// (0x000a17f0) camera2_autofocus_pane_g2_ParamLimits

0x4be3,	// (0x000a17f0) camera2_autofocus_pane_g2

0x4bef,	// (0x000a17fc) camera2_autofocus_pane_g3_ParamLimits

0x4bef,	// (0x000a17fc) camera2_autofocus_pane_g3

0x4bfb,	// (0x000a1808) camera2_autofocus_pane_g4_ParamLimits

0x4bfb,	// (0x000a1808) camera2_autofocus_pane_g4

0x4c07,	// (0x000a1814) camera2_autofocus_pane_g5_ParamLimits

0x4c07,	// (0x000a1814) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x000ac316) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x000ac316) camera2_autofocus_pane_g

0x4ded,	// (0x000a19fa) camera2_autofocus_pane_cp_g2

0x4df5,	// (0x000a1a02) camera2_autofocus_pane_cp_g3

0x4dfd,	// (0x000a1a0a) camera2_autofocus_pane_cp_g4

0x4e05,	// (0x000a1a12) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x000ac37c) camera2_autofocus_pane_cp_g

0x549c,	// (0x000a20a9) popup_dialer_spcha_window

0x9de7,	// (0x000a69f4) bg_popup_sub_pane_cp07

0xd284,	// (0x000a9e91) list_spcha_pane

0xd28c,	// (0x000a9e99) list_single_spcha_pane_ParamLimits

0xd28c,	// (0x000a9e99) list_single_spcha_pane

0x9de7,	// (0x000a69f4) list_highlight_pane_cp06

0xd29d,	// (0x000a9eaa) list_single_spcha_pane_t1

0xc496,	// (0x000a90a3) popup_call2_audio_out_window_g4_ParamLimits

0xc496,	// (0x000a90a3) popup_call2_audio_out_window_g4

0x0ebe,	// (0x0009dacb) main_imed2_pane

0x426e,	// (0x000a0e7b) popup_imed_adjust2_window

0x4281,	// (0x000a0e8e) popup_imed_trans_window_ParamLimits

0x4281,	// (0x000a0e8e) popup_imed_trans_window

0xccc7,	// (0x000a98d4) popup_blid_sat_info2_window_t1

0xccd5,	// (0x000a98e2) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x000ac2ab) popup_blid_sat_info2_window_t

0x57be,	// (0x000a23cb) aid_size_cell_colour_35

0x57d8,	// (0x000a23e5) aid_size_cell_colour_112

0x57ef,	// (0x000a23fc) aid_size_cell_effect

0xad4f,	// (0x000a795c) bg_tb_trans_pane_cp02

0xb1ff,	// (0x000a7e0c) heading_imed_pane

0x5809,	// (0x000a2416) listscroll_imed_pane

0xd2ab,	// (0x000a9eb8) heading_imed_pane_g1

0xd2b3,	// (0x000a9ec0) heading_imed_pane_t1

0xd2c1,	// (0x000a9ece) grid_imed_colour_35_pane_ParamLimits

0xd2c1,	// (0x000a9ece) grid_imed_colour_35_pane

0x5815,	// (0x000a2422) grid_imed_effect_pane

0xd2dd,	// (0x000a9eea) list_imed_aspect_pane

0x5825,	// (0x000a2432) scroll_pane_cp027_ParamLimits

0x5825,	// (0x000a2432) scroll_pane_cp027

0x5831,	// (0x000a243e) cell_imed_effect_pane_ParamLimits

0x5831,	// (0x000a243e) cell_imed_effect_pane

0xd2e5,	// (0x000a9ef2) cell_imed_colour_pane_ParamLimits

0xd2e5,	// (0x000a9ef2) cell_imed_colour_pane

0xd32f,	// (0x000a9f3c) cell_imed_colour_pane_g1_ParamLimits

0xd32f,	// (0x000a9f3c) cell_imed_colour_pane_g1

0xd340,	// (0x000a9f4d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd340,	// (0x000a9f4d) hgihlgiht_grid_pane_cp016

0x584d,	// (0x000a245a) cell_imed_effect_pane_g1

0x5855,	// (0x000a2462) grid_highlight_pane_cp017

0xd351,	// (0x000a9f5e) list_imed_single_pane_ParamLimits

0xd351,	// (0x000a9f5e) list_imed_single_pane

0x9de7,	// (0x000a69f4) list_highlight_pane_cp07

0xd365,	// (0x000a9f72) list_imed_aspect_pane_comp1_t1

0xca57,	// (0x000a9664) bg_tb_trans_pane_cp05

0xd387,	// (0x000a9f94) popup_imed_adjust2_window_g1

0xd3ae,	// (0x000a9fbb) popup_imed_adjust2_window_t1

0xd3c6,	// (0x000a9fd3) slider_imed_adjust_pane

0xd3da,	// (0x000a9fe7) slider_imed_adjust_pane_g1

0xd3ea,	// (0x000a9ff7) slider_imed_adjust_pane_g2

0xd3fa,	// (0x000aa007) slider_imed_adjust_pane_g3

0xd40b,	// (0x000aa018) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x000ac3ef) slider_imed_adjust_pane_g

0x585e,	// (0x000a246b) aid_size_cell_clipart2

0xd41c,	// (0x000aa029) grid_imed_clipart_pane

0xd426,	// (0x000aa033) scroll_pane_cp031

0x586a,	// (0x000a2477) cell_imed_clipart_pane_ParamLimits

0x586a,	// (0x000a2477) cell_imed_clipart_pane

0x5888,	// (0x000a2495) cell_imed_clipart_pane_g1

0x9de7,	// (0x000a69f4) grid_highlight_pane_cp014

0x55c3,	// (0x000a21d0) main_clock2_pane_g1_ParamLimits

0x55c3,	// (0x000a21d0) main_clock2_pane_g1

0x56ae,	// (0x000a22bb) aid_call2_pane_cp10

0x56c0,	// (0x000a22cd) aid_call_pane_cp10

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g1

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g2

0x56d2,	// (0x000a22df) popup_clock_analogue_window_cp10_g3

0x56d2,	// (0x000a22df) popup_clock_analogue_window_cp10_g4

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x000ac3dd) popup_clock_analogue_window_cp10_g

0x56e8,	// (0x000a22f5) popup_clock_analogue_window_cp10_t1

0x5719,	// (0x000a2326) clock_digital_number_pane_cp10_ParamLimits

0x5719,	// (0x000a2326) clock_digital_number_pane_cp10

0x5733,	// (0x000a2340) clock_digital_number_pane_cp11_ParamLimits

0x5733,	// (0x000a2340) clock_digital_number_pane_cp11

0x574d,	// (0x000a235a) clock_digital_number_pane_cp12_ParamLimits

0x574d,	// (0x000a235a) clock_digital_number_pane_cp12

0x5767,	// (0x000a2374) clock_digital_number_pane_cp13_ParamLimits

0x5767,	// (0x000a2374) clock_digital_number_pane_cp13

0x5783,	// (0x000a2390) clock_digital_separator_pane_cp10_ParamLimits

0x5783,	// (0x000a2390) clock_digital_separator_pane_cp10

0x579d,	// (0x000a23aa) popup_clock_digital_window_cp02_t1_ParamLimits

0x579d,	// (0x000a23aa) popup_clock_digital_window_cp02_t1

0xa48c,	// (0x000a7099) clock_digital_number_pane_cp10_g1

0xa48c,	// (0x000a7099) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x000ac3f8) clock_digital_number_pane_cp10_g

0xa48c,	// (0x000a7099) clock_digital_separator_pane_cp10_g1

0xa48c,	// (0x000a7099) clock_digital_separator_pane_g2_cp10

0xb5f6,	// (0x000a8203) navi_pane_vded_g4

0xb5ff,	// (0x000a820c) navi_pane_vded_g5

0xb608,	// (0x000a8215) navi_pane_vded_t1

0x0ebe,	// (0x0009dacb) main_vded_pane

0x5891,	// (0x000a249e) main_vded_pane_g1

0x589d,	// (0x000a24aa) main_vded_pane_g2

0x58a7,	// (0x000a24b4) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x000ac3fd) main_vded_pane_g

0x58b1,	// (0x000a24be) main_vded_pane_t1

0x58bf,	// (0x000a24cc) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x000ac404) main_vded_pane_t

0x58cd,	// (0x000a24da) vded_slider_pane

0x58d7,	// (0x000a24e4) vded_video_pane

0xd42e,	// (0x000aa03b) vded_video_pane_g1

0x58e3,	// (0x000a24f0) vded_video_pane_g2

0xce8f,	// (0x000a9a9c) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x000ac409) vded_video_pane_g

0xd438,	// (0x000aa045) vded_slider_pane_g1

0xcbdc,	// (0x000a97e9) vded_slider_pane_g2

0xd441,	// (0x000aa04e) vded_slider_pane_g3

0xd44a,	// (0x000aa057) vded_slider_pane_g4

0xd453,	// (0x000aa060) vded_slider_pane_g5

0x0004,

0xf803,	// (0x000ac410) vded_slider_pane_g

0x53ba,	// (0x000a1fc7) mup3_rocker_pane_ParamLimits

0x53ba,	// (0x000a1fc7) mup3_rocker_pane

0x58ec,	// (0x000a24f9) mup3_control_keys_pane_g1

0x58f4,	// (0x000a2501) mup3_control_keys_pane_g2

0x58fc,	// (0x000a2509) mup3_control_keys_pane_g3

0x5904,	// (0x000a2511) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x000ac41b) mup3_control_keys_pane_g

0x0e72,	// (0x0009da7f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e72,	// (0x0009da7f) popup_toolbar2_fixed_window_cp01

0x53d6,	// (0x000a1fe3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53d6,	// (0x000a1fe3) popup_toolbar2_fixed_window_cp02

0xbdc3,	// (0x000a89d0) popup_call2_audio_second_window_t4_ParamLimits

0xbdc3,	// (0x000a89d0) popup_call2_audio_second_window_t4

0xc2f1,	// (0x000a8efe) popup_call2_audio_first_window_t6_ParamLimits

0xc2f1,	// (0x000a8efe) popup_call2_audio_first_window_t6

0xc599,	// (0x000a91a6) popup_call2_audio_out_window_t6_ParamLimits

0xc599,	// (0x000a91a6) popup_call2_audio_out_window_t6

0x0ebe,	// (0x0009dacb) main_vitu_pane

0x5914,	// (0x000a2521) aid_size_cell_itu_ParamLimits

0x5914,	// (0x000a2521) aid_size_cell_itu

0xe1b4,	// (0x000aadc1) bg_popup_window_pane_cp08_ParamLimits

0xe1b4,	// (0x000aadc1) bg_popup_window_pane_cp08

0x5922,	// (0x000a252f) field_vitu_entry_pane_ParamLimits

0x5922,	// (0x000a252f) field_vitu_entry_pane

0x5931,	// (0x000a253e) grid_vitu_function_pane_ParamLimits

0x5931,	// (0x000a253e) grid_vitu_function_pane

0x5941,	// (0x000a254e) grid_vitu_itu_pane_ParamLimits

0x5941,	// (0x000a254e) grid_vitu_itu_pane

0x5951,	// (0x000a255e) cell_vitu_itu_pane_ParamLimits

0x5951,	// (0x000a255e) cell_vitu_itu_pane

0x5968,	// (0x000a2575) cell_vitu_function_pane_ParamLimits

0x5968,	// (0x000a2575) cell_vitu_function_pane

0xad4f,	// (0x000a795c) bg_popup_sub_pane_cp08_ParamLimits

0xad4f,	// (0x000a795c) bg_popup_sub_pane_cp08

0x597c,	// (0x000a2589) field_vitu_entry_pane_t1_ParamLimits

0x597c,	// (0x000a2589) field_vitu_entry_pane_t1

0xd474,	// (0x000aa081) field_vitu_entry_pane_t2_ParamLimits

0xd474,	// (0x000aa081) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x000ac429) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x000ac429) field_vitu_entry_pane_t

0xd491,	// (0x000aa09e) bg_button_pane_cp05_ParamLimits

0xd491,	// (0x000aa09e) bg_button_pane_cp05

0x5996,	// (0x000a25a3) cell_vitu_itu_pane_g1

0x59ae,	// (0x000a25bb) cell_vitu_itu_pane_t1_ParamLimits

0x59ae,	// (0x000a25bb) cell_vitu_itu_pane_t1

0x59c0,	// (0x000a25cd) cell_vitu_itu_pane_t2_ParamLimits

0x59c0,	// (0x000a25cd) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x000ac42e) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x000ac42e) cell_vitu_itu_pane_t

0xd49f,	// (0x000aa0ac) bg_button_pane_cp07

0x5a03,	// (0x000a2610) cell_vitu_function_pane_g1

0x110c,	// (0x0009dd19) main_calc_pane_g1

0x0c2f,	// (0x0009d83c) aid_visual_content_pane

0x0ebe,	// (0x0009dacb) main_vradio_pane

0x5a0c,	// (0x000a2619) main_vradio_pane_g1_ParamLimits

0x5a0c,	// (0x000a2619) main_vradio_pane_g1

0xd4a9,	// (0x000aa0b6) main_vradio_pane_g2_ParamLimits

0xd4a9,	// (0x000aa0b6) main_vradio_pane_g2

0x0001,

0xf828,	// (0x000ac435) main_vradio_pane_g_ParamLimits

0xf828,	// (0x000ac435) main_vradio_pane_g

0x5a1a,	// (0x000a2627) main_vradio_pane_t1_ParamLimits

0x5a1a,	// (0x000a2627) main_vradio_pane_t1

0x5a2c,	// (0x000a2639) main_vradio_pane_t2_ParamLimits

0x5a2c,	// (0x000a2639) main_vradio_pane_t2

0xd4b6,	// (0x000aa0c3) main_vradio_pane_t3_ParamLimits

0xd4b6,	// (0x000aa0c3) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x000ac43a) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x000ac43a) main_vradio_pane_t

0x5a3e,	// (0x000a264b) vradio_rocker_control_pane_ParamLimits

0x5a3e,	// (0x000a264b) vradio_rocker_control_pane

0x5a4a,	// (0x000a2657) vradio_station_info_pane_ParamLimits

0x5a4a,	// (0x000a2657) vradio_station_info_pane

0xd4d6,	// (0x000aa0e3) vradio_frequency_info_pane_ParamLimits

0xd4d6,	// (0x000aa0e3) vradio_frequency_info_pane

0xce8f,	// (0x000a9a9c) vradio_station_info_pane_g1

0xd4e5,	// (0x000aa0f2) vradio_station_info_pane_t1_ParamLimits

0xd4e5,	// (0x000aa0f2) vradio_station_info_pane_t1

0xd507,	// (0x000aa114) vradio_station_info_pane_t2_ParamLimits

0xd507,	// (0x000aa114) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x000ac441) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x000ac441) vradio_station_info_pane_t

0xd519,	// (0x000aa126) vradio_tuning_pane

0xd521,	// (0x000aa12e) vradio_rocker_control_pane_g1

0xd529,	// (0x000aa136) vradio_rocker_control_pane_g2

0xd531,	// (0x000aa13e) vradio_rocker_control_pane_g3

0xd539,	// (0x000aa146) vradio_rocker_control_pane_g4

0xd541,	// (0x000aa14e) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x000ac446) vradio_rocker_control_pane_g

0x5a57,	// (0x000a2664) vradio_frequency_info_pane_g1

0xd549,	// (0x000aa156) vradio_frequency_info_pane_t1_ParamLimits

0xd549,	// (0x000aa156) vradio_frequency_info_pane_t1

0x5a61,	// (0x000a266e) vradio_tuning_pane_g1

0x5a6c,	// (0x000a2679) vradio_tuning_pane_t1

0x0c70,	// (0x0009d87d) area_side_right_pane_ParamLimits

0x0c70,	// (0x0009d87d) area_side_right_pane

0xca12,	// (0x000a961f) status_small_pane_g1

0xca1a,	// (0x000a9627) status_small_pane_g2

0xca23,	// (0x000a9630) status_small_pane_g3

0xca2c,	// (0x000a9639) status_small_pane_g4

0x0003,

0xf5f4,	// (0x000ac201) status_small_pane_g

0xca35,	// (0x000a9642) status_small_pane_t1

0x0ebe,	// (0x0009dacb) main_video3_pane

0xd55d,	// (0x000aa16a) cams_zoom_vslider_pane

0xd565,	// (0x000aa172) image3_wide_pane_ParamLimits

0xd565,	// (0x000aa172) image3_wide_pane

0xd57f,	// (0x000aa18c) image3_wide_small_pane

0xd58b,	// (0x000aa198) main_video3_pane_g1_ParamLimits

0xd58b,	// (0x000aa198) main_video3_pane_g1

0xd5a7,	// (0x000aa1b4) main_video3_pane_g2_ParamLimits

0xd5a7,	// (0x000aa1b4) main_video3_pane_g2

0x0001,

0xf844,	// (0x000ac451) main_video3_pane_g_ParamLimits

0xf844,	// (0x000ac451) main_video3_pane_g

0xd5c3,	// (0x000aa1d0) main_video3_pane_t1_ParamLimits

0xd5c3,	// (0x000aa1d0) main_video3_pane_t1

0xd5ee,	// (0x000aa1fb) main_video3_pane_t2_ParamLimits

0xd5ee,	// (0x000aa1fb) main_video3_pane_t2

0xd61b,	// (0x000aa228) main_video3_pane_t3_ParamLimits

0xd61b,	// (0x000aa228) main_video3_pane_t3

0x0002,

0xf849,	// (0x000ac456) main_video3_pane_t_ParamLimits

0xf849,	// (0x000ac456) main_video3_pane_t

0xd648,	// (0x000aa255) cams_zoom_vslider_pane_g1

0xd651,	// (0x000aa25e) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x000ac45d) cams_zoom_vslider_pane_g

0xd659,	// (0x000aa266) small_slider_vertical_pane

0xce8f,	// (0x000a9a9c) small_slider_vertical_pane_g1

0xce8f,	// (0x000a9a9c) small_slider_vertical_pane_g2

0xd661,	// (0x000aa26e) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x000ac462) small_slider_vertical_pane_g

0x0ebe,	// (0x0009dacb) main_hwr_training_pane

0xd66a,	// (0x000aa277) hwr_training_instruct_pane_ParamLimits

0xd66a,	// (0x000aa277) hwr_training_instruct_pane

0x5a7b,	// (0x000a2688) hwr_training_navi_pane_ParamLimits

0x5a7b,	// (0x000a2688) hwr_training_navi_pane

0x5a95,	// (0x000a26a2) hwr_training_write_pane_ParamLimits

0x5a95,	// (0x000a26a2) hwr_training_write_pane

0x9de7,	// (0x000a69f4) bg_frame_shadow_pane

0xd6a1,	// (0x000aa2ae) hwr_training_write_pane_g1

0xd6a9,	// (0x000aa2b6) hwr_training_write_pane_g2

0xd6b1,	// (0x000aa2be) hwr_training_write_pane_g3

0xd6b9,	// (0x000aa2c6) hwr_training_write_pane_g4

0xd6c1,	// (0x000aa2ce) hwr_training_write_pane_g5

0xd6c9,	// (0x000aa2d6) hwr_training_write_pane_g6

0xd6d1,	// (0x000aa2de) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x000ac469) hwr_training_write_pane_g

0x5acd,	// (0x000a26da) hwr_training_navi_pane_g1_ParamLimits

0x5acd,	// (0x000a26da) hwr_training_navi_pane_g1

0x5adf,	// (0x000a26ec) hwr_training_navi_pane_g2_ParamLimits

0x5adf,	// (0x000a26ec) hwr_training_navi_pane_g2

0x5af1,	// (0x000a26fe) hwr_training_navi_pane_g3_ParamLimits

0x5af1,	// (0x000a26fe) hwr_training_navi_pane_g3

0x5b01,	// (0x000a270e) hwr_training_navi_pane_g4_ParamLimits

0x5b01,	// (0x000a270e) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x000ac478) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x000ac478) hwr_training_navi_pane_g

0x5b1b,	// (0x000a2728) hwr_training_navi_pane_t1

0x5b29,	// (0x000a2736) list_single_hwr_training_instruct_pane_ParamLimits

0x5b29,	// (0x000a2736) list_single_hwr_training_instruct_pane

0xd6d9,	// (0x000aa2e6) list_single_hwr_training_instruct_pane_t1

0xcdcf,	// (0x000a99dc) bg_frame_shadow_pane_g1

0xd6e8,	// (0x000aa2f5) bg_frame_shadow_pane_g2

0xd6f0,	// (0x000aa2fd) bg_frame_shadow_pane_g3

0xd6f8,	// (0x000aa305) bg_frame_shadow_pane_g4

0xd700,	// (0x000aa30d) bg_frame_shadow_pane_g5

0xd708,	// (0x000aa315) bg_frame_shadow_pane_g6

0xd710,	// (0x000aa31d) bg_frame_shadow_pane_g7

0xaa6f,	// (0x000a767c) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x000ac483) bg_frame_shadow_pane_g

0x0ebe,	// (0x0009dacb) main_video_tele_dialer_pane

0x5b42,	// (0x000a274f) aid_size_cell_video_keypad_ParamLimits

0x5b42,	// (0x000a274f) aid_size_cell_video_keypad

0x5b52,	// (0x000a275f) grid_video_dialer_keypad_pane_ParamLimits

0x5b52,	// (0x000a275f) grid_video_dialer_keypad_pane

0x5b84,	// (0x000a2791) video_down_pane_cp_ParamLimits

0x5b84,	// (0x000a2791) video_down_pane_cp

0x5bae,	// (0x000a27bb) cell_video_dialer_keypad_pane_ParamLimits

0x5bae,	// (0x000a27bb) cell_video_dialer_keypad_pane

0xd718,	// (0x000aa325) bg_button_pane_cp08_ParamLimits

0xd718,	// (0x000aa325) bg_button_pane_cp08

0x5bc5,	// (0x000a27d2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5bc5,	// (0x000a27d2) cell_video_dialer_keypad_pane_g1

0x53ae,	// (0x000a1fbb) mup3_rocker2_pane_ParamLimits

0x53ae,	// (0x000a1fbb) mup3_rocker2_pane

0xce8f,	// (0x000a9a9c) mup3_rocker2_pane_g1

0x41d2,	// (0x000a0ddf) main_dialer2_pane

0x0ebe,	// (0x0009dacb) main_mp4_pane

0x5c1e,	// (0x000a282b) main_mp4_pane_g1_ParamLimits

0x5c1e,	// (0x000a282b) main_mp4_pane_g1

0x5c2c,	// (0x000a2839) main_mp4_pane_g2_ParamLimits

0x5c2c,	// (0x000a2839) main_mp4_pane_g2

0x5c3a,	// (0x000a2847) main_mp4_pane_g3_ParamLimits

0x5c3a,	// (0x000a2847) main_mp4_pane_g3

0x5c8d,	// (0x000a289a) main_mp4_pane_g4_ParamLimits

0x5c8d,	// (0x000a289a) main_mp4_pane_g4

0x5cbb,	// (0x000a28c8) main_mp4_pane_g5_ParamLimits

0x5cbb,	// (0x000a28c8) main_mp4_pane_g5

0x0007,

0xf896,	// (0x000ac4a3) main_mp4_pane_g_ParamLimits

0xf896,	// (0x000ac4a3) main_mp4_pane_g

0x5d2f,	// (0x000a293c) main_mp4_pane_t1_ParamLimits

0x5d2f,	// (0x000a293c) main_mp4_pane_t1

0x5d8b,	// (0x000a2998) main_mp4_pane_t2_ParamLimits

0x5d8b,	// (0x000a2998) main_mp4_pane_t2

0xd724,	// (0x000aa331) main_mp4_pane_t3_ParamLimits

0xd724,	// (0x000aa331) main_mp4_pane_t3

0x5ddd,	// (0x000a29ea) main_mp4_pane_t4_ParamLimits

0x5ddd,	// (0x000a29ea) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000ac4b4) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000ac4b4) main_mp4_pane_t

0x5e1d,	// (0x000a2a2a) mp4_progress_pane_ParamLimits

0x5e1d,	// (0x000a2a2a) mp4_progress_pane

0x5e67,	// (0x000a2a74) mp4_rocker_pane_ParamLimits

0x5e67,	// (0x000a2a74) mp4_rocker_pane

0xd752,	// (0x000aa35f) mp4_progress_pane_t1

0xd76b,	// (0x000aa378) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000ac4bd) mp4_progress_pane_t

0xd784,	// (0x000aa391) mup_progress_pane_cp04

0xdd8b,	// (0x000aa998) mp4_rocker_pane_g1

0x5e87,	// (0x000a2a94) aid_cell_size_keypad2_ParamLimits

0x5e87,	// (0x000a2a94) aid_cell_size_keypad2

0x5e97,	// (0x000a2aa4) dialer2_ne_pane_ParamLimits

0x5e97,	// (0x000a2aa4) dialer2_ne_pane

0x5ea3,	// (0x000a2ab0) grid_dialer2_keypad_pane_ParamLimits

0x5ea3,	// (0x000a2ab0) grid_dialer2_keypad_pane

0xdd95,	// (0x000aa9a2) bg_popup_call_pane_cp07_ParamLimits

0xdd95,	// (0x000aa9a2) bg_popup_call_pane_cp07

0x5eb1,	// (0x000a2abe) dialer2_ne_pane_t1_ParamLimits

0x5eb1,	// (0x000a2abe) dialer2_ne_pane_t1

0x5ed6,	// (0x000a2ae3) cell_dialer2_keypad_pane_ParamLimits

0x5ed6,	// (0x000a2ae3) cell_dialer2_keypad_pane

0xd7a9,	// (0x000aa3b6) bg_button_pane_pane_cp04_ParamLimits

0xd7a9,	// (0x000aa3b6) bg_button_pane_pane_cp04

0x5eed,	// (0x000a2afa) cell_dialer2_keypad_pane_g1_ParamLimits

0x5eed,	// (0x000a2afa) cell_dialer2_keypad_pane_g1

0x1e8b,	// (0x0009ea98) aid_placing_vt_set_content_ParamLimits

0x1e8b,	// (0x0009ea98) aid_placing_vt_set_content

0x1eb3,	// (0x0009eac0) aid_placing_vt_set_title_ParamLimits

0x1eb3,	// (0x0009eac0) aid_placing_vt_set_title

0x0ebe,	// (0x0009dacb) main_image3_pane

0x5f87,	// (0x000a2b94) area_side_right_pane_cp01_ParamLimits

0x5f87,	// (0x000a2b94) area_side_right_pane_cp01

0x5fb6,	// (0x000a2bc3) main_image3_pane_g1_ParamLimits

0x5fb6,	// (0x000a2bc3) main_image3_pane_g1

0x5fc4,	// (0x000a2bd1) main_image3_pane_g2_ParamLimits

0x5fc4,	// (0x000a2bd1) main_image3_pane_g2

0x5fdd,	// (0x000a2bea) main_image3_pane_g3_ParamLimits

0x5fdd,	// (0x000a2bea) main_image3_pane_g3

0x5ff6,	// (0x000a2c03) main_image3_pane_g4_ParamLimits

0x5ff6,	// (0x000a2c03) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000ac4cc) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000ac4cc) main_image3_pane_g

0x600f,	// (0x000a2c1c) main_image3_pane_t1_ParamLimits

0x600f,	// (0x000a2c1c) main_image3_pane_t1

0x6034,	// (0x000a2c41) main_image3_pane_t2_ParamLimits

0x6034,	// (0x000a2c41) main_image3_pane_t2

0x6053,	// (0x000a2c60) main_image3_pane_t3_ParamLimits

0x6053,	// (0x000a2c60) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000ac4d5) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000ac4d5) main_image3_pane_t

0xe1b4,	// (0x000aadc1) grid_sctrl_middle_pane_cp01_ParamLimits

0xe1b4,	// (0x000aadc1) grid_sctrl_middle_pane_cp01

0x60b4,	// (0x000a2cc1) cell_sctrl_middle_pane_cp01_ParamLimits

0x60b4,	// (0x000a2cc1) cell_sctrl_middle_pane_cp01

0x60c5,	// (0x000a2cd2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60c5,	// (0x000a2cd2) cell_sctrl_middle_pane_cp01_g1

0x0ebe,	// (0x0009dacb) main_call4_pane

0x60d2,	// (0x000a2cdf) aid_size_button_call4_ParamLimits

0x60d2,	// (0x000a2cdf) aid_size_button_call4

0x6108,	// (0x000a2d15) call4_windows_pane_ParamLimits

0x6108,	// (0x000a2d15) call4_windows_pane

0x611d,	// (0x000a2d2a) grid_call4_button_pane_ParamLimits

0x611d,	// (0x000a2d2a) grid_call4_button_pane

0x614d,	// (0x000a2d5a) call4_windows_conf_pane

0x6168,	// (0x000a2d75) popup_call4_audio_first_window_ParamLimits

0x6168,	// (0x000a2d75) popup_call4_audio_first_window

0x61ba,	// (0x000a2dc7) popup_call4_audio_second_window_ParamLimits

0x61ba,	// (0x000a2dc7) popup_call4_audio_second_window

0x61d3,	// (0x000a2de0) popup_call4_audio_wait_window_ParamLimits

0x61d3,	// (0x000a2de0) popup_call4_audio_wait_window

0x61e1,	// (0x000a2dee) cell_call4_button_pane_ParamLimits

0x61e1,	// (0x000a2dee) cell_call4_button_pane

0x6204,	// (0x000a2e11) bg_button_pane_cp09_ParamLimits

0x6204,	// (0x000a2e11) bg_button_pane_cp09

0x6210,	// (0x000a2e1d) cell_call4_button_pane_g1_ParamLimits

0x6210,	// (0x000a2e1d) cell_call4_button_pane_g1

0x621d,	// (0x000a2e2a) cell_call4_button_pane_t1_ParamLimits

0x621d,	// (0x000a2e2a) cell_call4_button_pane_t1

0xd7bd,	// (0x000aa3ca) popup_call4_audio_conf_window_ParamLimits

0xd7bd,	// (0x000aa3ca) popup_call4_audio_conf_window

0x53e3,	// (0x000a1ff0) mup3_progress_pane_t1_ParamLimits

0x5402,	// (0x000a200f) mup3_progress_pane_t2_ParamLimits

0xd139,	// (0x000a9d46) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x000ac3a5) mup3_progress_pane_t_ParamLimits

0xd156,	// (0x000a9d63) mup_progress_pane_cp03_ParamLimits

0x590c,	// (0x000a2519) mup3_control_keys_pane_g4_copy1

0x5e4b,	// (0x000a2a58) mp4_rocker2_pane_ParamLimits

0x5e4b,	// (0x000a2a58) mp4_rocker2_pane

0xd7d7,	// (0x000aa3e4) mp4_rocker2_pane_g1

0xd7df,	// (0x000aa3ec) mp4_rocker2_pane_g2

0x6261,	// (0x000a2e6e) mp4_rocker2_pane_g3

0x6269,	// (0x000a2e76) mp4_rocker2_pane_g4

0x6271,	// (0x000a2e7e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000ac4de) mp4_rocker2_pane_g

0x0ebe,	// (0x0009dacb) main_camera4_pane

0x0ebe,	// (0x0009dacb) main_video4_pane

0x5b60,	// (0x000a276d) main_video_tele_dialer_pane_t1_ParamLimits

0x5b60,	// (0x000a276d) main_video_tele_dialer_pane_t1

0x5b72,	// (0x000a277f) main_video_tele_dialer_pane_t2_ParamLimits

0x5b72,	// (0x000a277f) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x000ac494) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x000ac494) main_video_tele_dialer_pane_t

0x6291,	// (0x000a2e9e) cam4_autofocus_pane_ParamLimits

0x6291,	// (0x000a2e9e) cam4_autofocus_pane

0x62a9,	// (0x000a2eb6) cam4_image_uncrop_pane_ParamLimits

0x62a9,	// (0x000a2eb6) cam4_image_uncrop_pane

0x62c2,	// (0x000a2ecf) cam4_indicators_pane_ParamLimits

0x62c2,	// (0x000a2ecf) cam4_indicators_pane

0x62de,	// (0x000a2eeb) main_camera4_pane_g1_ParamLimits

0x62de,	// (0x000a2eeb) main_camera4_pane_g1

0x62ea,	// (0x000a2ef7) main_camera4_pane_g2_ParamLimits

0x62ea,	// (0x000a2ef7) main_camera4_pane_g2

0x62ea,	// (0x000a2ef7) main_camera4_pane_g3_ParamLimits

0x62ea,	// (0x000a2ef7) main_camera4_pane_g3

0x62f6,	// (0x000a2f03) main_camera4_pane_g4_ParamLimits

0x62f6,	// (0x000a2f03) main_camera4_pane_g4

0x6302,	// (0x000a2f0f) main_camera4_pane_g5_ParamLimits

0x6302,	// (0x000a2f0f) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000ac4e9) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000ac4e9) main_camera4_pane_g

0x631c,	// (0x000a2f29) main_camera4_pane_t1_ParamLimits

0x631c,	// (0x000a2f29) main_camera4_pane_t1

0x6366,	// (0x000a2f73) bg_tb_trans_pane_cp06

0x637c,	// (0x000a2f89) cam4_indicators_pane_g1

0x638d,	// (0x000a2f9a) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000ac504) cam4_indicators_pane_g

0x63a5,	// (0x000a2fb2) cam4_indicators_pane_t1

0x63cf,	// (0x000a2fdc) main_video4_pane_g1_ParamLimits

0x63cf,	// (0x000a2fdc) main_video4_pane_g1

0x63db,	// (0x000a2fe8) main_video4_pane_g2_ParamLimits

0x63db,	// (0x000a2fe8) main_video4_pane_g2

0x63e7,	// (0x000a2ff4) main_video4_pane_g3_ParamLimits

0x63e7,	// (0x000a2ff4) main_video4_pane_g3

0x63f3,	// (0x000a3000) main_video4_pane_g4_ParamLimits

0x63f3,	// (0x000a3000) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000ac50b) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000ac50b) main_video4_pane_g

0x6415,	// (0x000a3022) vid4_indicators_pane_ParamLimits

0x6415,	// (0x000a3022) vid4_indicators_pane

0x6434,	// (0x000a3041) video4_image_uncrop_cif_pane_ParamLimits

0x6434,	// (0x000a3041) video4_image_uncrop_cif_pane

0x6443,	// (0x000a3050) video4_image_uncrop_nhd_pane_ParamLimits

0x6443,	// (0x000a3050) video4_image_uncrop_nhd_pane

0x62a9,	// (0x000a2eb6) video4_image_uncrop_vga_pane_ParamLimits

0x62a9,	// (0x000a2eb6) video4_image_uncrop_vga_pane

0x41c4,	// (0x000a0dd1) bg_tb_trans_pane_cp07

0x645c,	// (0x000a3069) vid4_indicators_pane_g1

0x6472,	// (0x000a307f) vid4_indicators_pane_g2

0x6486,	// (0x000a3093) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000ac516) vid4_indicators_pane_g

0x64b7,	// (0x000a30c4) vid4_indicators_pane_t1

0x64ce,	// (0x000a30db) cam4_autofocus_pane_g1

0x64d6,	// (0x000a30e3) cam4_autofocus_pane_g2

0x64de,	// (0x000a30eb) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000ac521) cam4_autofocus_pane_g

0x64e6,	// (0x000a30f3) cam4_autofocus_pane_g3_copy1

0x5b92,	// (0x000a279f) video_down_pane_cp_t1

0x5ba0,	// (0x000a27ad) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x000ac499) video_down_pane_cp_t

0x0ea4,	// (0x0009dab1) popup_vitu2_window_ParamLimits

0x0ea4,	// (0x0009dab1) popup_vitu2_window

0x64ee,	// (0x000a30fb) aid_size_cell2_itu2_ParamLimits

0x64ee,	// (0x000a30fb) aid_size_cell2_itu2

0x6510,	// (0x000a311d) aid_size_cell_itu2_ParamLimits

0x6510,	// (0x000a311d) aid_size_cell_itu2

0x6556,	// (0x000a3163) bg_popup_window_pane_cp09_ParamLimits

0x6556,	// (0x000a3163) bg_popup_window_pane_cp09

0x6564,	// (0x000a3171) field_vitu2_entry_pane_ParamLimits

0x6564,	// (0x000a3171) field_vitu2_entry_pane

0x6584,	// (0x000a3191) grid_vitu2_function_pane_ParamLimits

0x6584,	// (0x000a3191) grid_vitu2_function_pane

0x65c8,	// (0x000a31d5) grid_vitu2_itu_pane_ParamLimits

0x65c8,	// (0x000a31d5) grid_vitu2_itu_pane

0x6640,	// (0x000a324d) cell_vitu2_itu_pane_ParamLimits

0x6640,	// (0x000a324d) cell_vitu2_itu_pane

0x665b,	// (0x000a3268) cell_vitu2_function_pane_ParamLimits

0x665b,	// (0x000a3268) cell_vitu2_function_pane

0xd7e7,	// (0x000aa3f4) bg_popup_call_pane_cp08_ParamLimits

0xd7e7,	// (0x000aa3f4) bg_popup_call_pane_cp08

0xd7fe,	// (0x000aa40b) field_vitu2_entry_pane_g1

0xd80a,	// (0x000aa417) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000ac528) field_vitu2_entry_pane_g

0x669f,	// (0x000a32ac) field_vitu2_entry_pane_t1_ParamLimits

0x669f,	// (0x000a32ac) field_vitu2_entry_pane_t1

0xa5a4,	// (0x000a71b1) field_vitu2_entry_pane_t2_ParamLimits

0xa5a4,	// (0x000a71b1) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000ac52f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000ac52f) field_vitu2_entry_pane_t

0x66cd,	// (0x000a32da) bg_button_pane_cp010_ParamLimits

0x66cd,	// (0x000a32da) bg_button_pane_cp010

0x66db,	// (0x000a32e8) cell_vitu2_itu_pane_g1

0x66fb,	// (0x000a3308) cell_vitu2_itu_pane_t1_ParamLimits

0x66fb,	// (0x000a3308) cell_vitu2_itu_pane_t1

0x0b13,	// (0x0009d720) cell_vitu2_itu_pane_t2_ParamLimits

0x0b13,	// (0x0009d720) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000ac539) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000ac539) cell_vitu2_itu_pane_t

0x41c4,	// (0x000a0dd1) bg_button_pane_cp011

0x6747,	// (0x000a3354) cell_vitu2_function_pane_g1

0x0ebe,	// (0x0009dacb) main_myfav_hc_pane

0x6095,	// (0x000a2ca2) popup_image3_note_pane_ParamLimits

0x6095,	// (0x000a2ca2) popup_image3_note_pane

0x60a3,	// (0x000a2cb0) popup_image3_tool_bar_pane_ParamLimits

0x60a3,	// (0x000a2cb0) popup_image3_tool_bar_pane

0x0b89,	// (0x0009d796) cell_vitu2_itu_pane_t3_ParamLimits

0x0b89,	// (0x0009d796) cell_vitu2_itu_pane_t3

0x9de7,	// (0x000a69f4) bg_popup_trans_pane

0xd82c,	// (0x000aa439) grid_image3_tool_bar_pane

0xd836,	// (0x000aa443) bg_popup_trans_pane_g1

0xae4a,	// (0x000a7a57) bg_popup_trans_pane_g2

0xd83e,	// (0x000aa44b) bg_popup_trans_pane_g3

0xd846,	// (0x000aa453) bg_popup_trans_pane_g4

0xd84e,	// (0x000aa45b) bg_popup_trans_pane_g5

0xd856,	// (0x000aa463) bg_popup_trans_pane_g6

0xd85e,	// (0x000aa46b) bg_popup_trans_pane_g7

0xd866,	// (0x000aa473) bg_popup_trans_pane_g8

0xae2a,	// (0x000a7a37) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000ac540) bg_popup_trans_pane_g

0xd86e,	// (0x000aa47b) cell_image3_tool_bar_pane_ParamLimits

0xd86e,	// (0x000aa47b) cell_image3_tool_bar_pane

0xce8f,	// (0x000a9a9c) cell_image3_tool_bar_pane_g1

0x9de7,	// (0x000a69f4) bg_popup_trans_pane_cp1

0xd884,	// (0x000aa491) popup_image3_note_pane_t1

0xd892,	// (0x000aa49f) popup_image3_note_pane_t2

0xd8a0,	// (0x000aa4ad) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ac553) popup_image3_note_pane_t

0xd8b0,	// (0x000aa4bd) popup_image3_note_pane_t3_copy1

0x675b,	// (0x000a3368) bg_myfav_hc_instruction_pane_ParamLimits

0x675b,	// (0x000a3368) bg_myfav_hc_instruction_pane

0x6773,	// (0x000a3380) cell_myfav_contact_pane_ParamLimits

0x6773,	// (0x000a3380) cell_myfav_contact_pane

0x678d,	// (0x000a339a) cell_myfav_contact_pane_cp1_ParamLimits

0x678d,	// (0x000a339a) cell_myfav_contact_pane_cp1

0x67a5,	// (0x000a33b2) cell_myfav_contact_pane_cp2_ParamLimits

0x67a5,	// (0x000a33b2) cell_myfav_contact_pane_cp2

0x67bd,	// (0x000a33ca) cell_myfav_contact_pane_cp3_ParamLimits

0x67bd,	// (0x000a33ca) cell_myfav_contact_pane_cp3

0x67d4,	// (0x000a33e1) cell_myfav_contact_pane_cp4_ParamLimits

0x67d4,	// (0x000a33e1) cell_myfav_contact_pane_cp4

0x67ea,	// (0x000a33f7) cell_myfav_contact_pane_cp5_ParamLimits

0x67ea,	// (0x000a33f7) cell_myfav_contact_pane_cp5

0x67fe,	// (0x000a340b) cell_myfav_contact_pane_cp6_ParamLimits

0x67fe,	// (0x000a340b) cell_myfav_contact_pane_cp6

0x6812,	// (0x000a341f) cell_myfav_contact_pane_cp7_ParamLimits

0x6812,	// (0x000a341f) cell_myfav_contact_pane_cp7

0xd8be,	// (0x000aa4cb) listscroll_gen_pane_cp05

0x682a,	// (0x000a3437) main_myfav_hc_pane_g1_ParamLimits

0x682a,	// (0x000a3437) main_myfav_hc_pane_g1

0x6844,	// (0x000a3451) main_myfav_hc_pane_g2_ParamLimits

0x6844,	// (0x000a3451) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ac55a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ac55a) main_myfav_hc_pane_g

0x6876,	// (0x000a3483) main_myfav_hc_pane_t1_ParamLimits

0x6876,	// (0x000a3483) main_myfav_hc_pane_t1

0xd8c7,	// (0x000aa4d4) main_myfav_hc_pane_t2_ParamLimits

0xd8c7,	// (0x000aa4d4) main_myfav_hc_pane_t2

0xd8d9,	// (0x000aa4e6) main_myfav_hc_pane_t3_ParamLimits

0xd8d9,	// (0x000aa4e6) main_myfav_hc_pane_t3

0x688d,	// (0x000a349a) main_myfav_hc_pane_t4_ParamLimits

0x688d,	// (0x000a349a) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ac561) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ac561) main_myfav_hc_pane_t

0xce8f,	// (0x000a9a9c) bg_myfav_hc_instruction_pane_g1

0xd8eb,	// (0x000aa4f8) cell_myfav_contact_pane_g1_ParamLimits

0xd8eb,	// (0x000aa4f8) cell_myfav_contact_pane_g1

0xd8eb,	// (0x000aa4f8) cell_myfav_contact_pane_g2_ParamLimits

0xd8eb,	// (0x000aa4f8) cell_myfav_contact_pane_g2

0xd8f7,	// (0x000aa504) cell_myfav_contact_pane_g3_ParamLimits

0xd8f7,	// (0x000aa504) cell_myfav_contact_pane_g3

0xd123,	// (0x000a9d30) cell_myfav_contact_pane_g4_ParamLimits

0xd123,	// (0x000a9d30) cell_myfav_contact_pane_g4

0xd904,	// (0x000aa511) cell_myfav_contact_pane_g5_ParamLimits

0xd904,	// (0x000aa511) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ac56c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ac56c) cell_myfav_contact_pane_g

0x685e,	// (0x000a346b) main_myfav_hc_pane_g3_ParamLimits

0x685e,	// (0x000a346b) main_myfav_hc_pane_g3

0x0dac,	// (0x0009d9b9) popup_adpt_find_window

0x68b7,	// (0x000a34c4) afind_page_pane_ParamLimits

0x68b7,	// (0x000a34c4) afind_page_pane

0x68c4,	// (0x000a34d1) aid_size_cell_afind_ParamLimits

0x68c4,	// (0x000a34d1) aid_size_cell_afind

0x68de,	// (0x000a34eb) bg_popup_sub_pane_cp09_ParamLimits

0x68de,	// (0x000a34eb) bg_popup_sub_pane_cp09

0x68eb,	// (0x000a34f8) find_pane_cp01_ParamLimits

0x68eb,	// (0x000a34f8) find_pane_cp01

0xd910,	// (0x000aa51d) grid_afind_control_pane_ParamLimits

0xd910,	// (0x000aa51d) grid_afind_control_pane

0x68f8,	// (0x000a3505) grid_afind_pane_ParamLimits

0x68f8,	// (0x000a3505) grid_afind_pane

0x6914,	// (0x000a3521) cell_afind_pane_ParamLimits

0x6914,	// (0x000a3521) cell_afind_pane

0xce8f,	// (0x000a9a9c) afind_page_pane_g1

0x6960,	// (0x000a356d) afind_page_pane_g2

0x6969,	// (0x000a3576) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ac577) afind_page_pane_g

0x6972,	// (0x000a357f) afind_page_pane_t1

0xd92d,	// (0x000aa53a) cell_afind_grid_control_pane_ParamLimits

0xd92d,	// (0x000aa53a) cell_afind_grid_control_pane

0xd7a9,	// (0x000aa3b6) bg_button_pane_cp69_ParamLimits

0xd7a9,	// (0x000aa3b6) bg_button_pane_cp69

0x6992,	// (0x000a359f) cell_afind_pane_g1_ParamLimits

0x6992,	// (0x000a359f) cell_afind_pane_g1

0x699f,	// (0x000a35ac) cell_afind_pane_t1_ParamLimits

0x699f,	// (0x000a35ac) cell_afind_pane_t1

0xabb0,	// (0x000a77bd) bg_button_pane_cp72

0xd93c,	// (0x000aa549) cell_afind_grid_control_pane_g1

0x3d2d,	// (0x000a093a) aid_image_placing_area_ParamLimits

0x3d2d,	// (0x000a093a) aid_image_placing_area

0xd45c,	// (0x000aa069) field_vitu_entry_pane_g1_ParamLimits

0xd45c,	// (0x000aa069) field_vitu_entry_pane_g1

0xd468,	// (0x000aa075) field_vitu_entry_pane_g2_ParamLimits

0xd468,	// (0x000aa075) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x000ac424) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x000ac424) field_vitu_entry_pane_g

0x5996,	// (0x000a25a3) cell_vitu_itu_pane_g1_ParamLimits

0x59e6,	// (0x000a25f3) cell_vitu_itu_pane_t3_ParamLimits

0x59e6,	// (0x000a25f3) cell_vitu_itu_pane_t3

0xd752,	// (0x000aa35f) mp4_progress_pane_t1_ParamLimits

0xd76b,	// (0x000aa378) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000ac4bd) mp4_progress_pane_t_ParamLimits

0xd784,	// (0x000aa391) mup_progress_pane_cp04_ParamLimits

0x68a1,	// (0x000a34ae) main_myfav_hc_pane_t5_ParamLimits

0x68a1,	// (0x000a34ae) main_myfav_hc_pane_t5

0x0b03,	// (0x0009d710) aid_zoom_text_primary

0x0dac,	// (0x0009d9b9) popup_adpt_find_window_ParamLimits

0x41c4,	// (0x000a0dd1) main_cam_set_pane

0x62d0,	// (0x000a2edd) cam4_zoom_pane_ParamLimits

0x62d0,	// (0x000a2edd) cam4_zoom_pane

0x69b1,	// (0x000a35be) main_cam_set_pane_g1_ParamLimits

0x69b1,	// (0x000a35be) main_cam_set_pane_g1

0x69bf,	// (0x000a35cc) main_cam_set_pane_g2_ParamLimits

0x69bf,	// (0x000a35cc) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ac57e) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ac57e) main_cam_set_pane_g

0x69cb,	// (0x000a35d8) main_cam_set_pane_t1_ParamLimits

0x69cb,	// (0x000a35d8) main_cam_set_pane_t1

0x69e7,	// (0x000a35f4) main_cset_listscroll_pane_ParamLimits

0x69e7,	// (0x000a35f4) main_cset_listscroll_pane

0x6a16,	// (0x000a3623) main_cset_slider_pane_ParamLimits

0x6a16,	// (0x000a3623) main_cset_slider_pane

0xd94d,	// (0x000aa55a) main_cset_list_pane_ParamLimits

0xd94d,	// (0x000aa55a) main_cset_list_pane

0xd95d,	// (0x000aa56a) scroll_pane_cp028

0x6a37,	// (0x000a3644) aid_area_touch_slider

0x6a53,	// (0x000a3660) cset_slider_pane

0x6a7d,	// (0x000a368a) main_cset_slider_pane_g1

0x6a92,	// (0x000a369f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ac583) main_cset_slider_pane_g

0xd996,	// (0x000aa5a3) main_cset_slider_pane_t1

0x6b4e,	// (0x000a375b) main_cset_slider_pane_t2

0x6b68,	// (0x000a3775) main_cset_slider_pane_t3

0x6b82,	// (0x000a378f) main_cset_slider_pane_t4

0x6b9c,	// (0x000a37a9) main_cset_slider_pane_t5

0x6bb6,	// (0x000a37c3) main_cset_slider_pane_t6

0x6bcb,	// (0x000a37d8) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ac5a8) main_cset_slider_pane_t

0x6ccf,	// (0x000a38dc) cset_list_set_pane_ParamLimits

0x6ccf,	// (0x000a38dc) cset_list_set_pane

0x6ce0,	// (0x000a38ed) aid_position_infowindow_above

0x6ce8,	// (0x000a38f5) aid_position_infowindow_below

0x6cf0,	// (0x000a38fd) cset_list_set_pane_g1_ParamLimits

0x6cf0,	// (0x000a38fd) cset_list_set_pane_g1

0x6cfc,	// (0x000a3909) cset_list_set_pane_g3_ParamLimits

0x6cfc,	// (0x000a3909) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ac5c7) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ac5c7) cset_list_set_pane_g

0x6d0b,	// (0x000a3918) cset_list_set_pane_t1_ParamLimits

0x6d0b,	// (0x000a3918) cset_list_set_pane_t1

0xad4f,	// (0x000a795c) list_highlight_pane_cp021_ParamLimits

0xad4f,	// (0x000a795c) list_highlight_pane_cp021

0xb76c,	// (0x000a8379) cset_slider_pane_g1

0xb77e,	// (0x000a838b) cset_slider_pane_g2

0xb775,	// (0x000a8382) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ac5cc) cset_slider_pane_g

0x6d20,	// (0x000a392d) aid_area_touch_cam4_zoom

0x6d29,	// (0x000a3936) cam4_zoom_cont_pane

0x6d31,	// (0x000a393e) cam4_zoom_pane_g1

0x6d39,	// (0x000a3946) cam4_zoom_pane_g2

0x6d41,	// (0x000a394e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ac5d3) cam4_zoom_pane_g

0x6d4a,	// (0x000a3957) cam4_zoom_cont_pane_g1

0x6d53,	// (0x000a3960) cam4_zoom_cont_pane_g2

0x6d5c,	// (0x000a3969) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ac5da) cam4_zoom_cont_pane_g

0x60ec,	// (0x000a2cf9) call4_image_pane_ParamLimits

0x60ec,	// (0x000a2cf9) call4_image_pane

0x614d,	// (0x000a2d5a) call4_windows_conf_pane_ParamLimits

0x6198,	// (0x000a2da5) popup_call4_audio_in_window_ParamLimits

0x6198,	// (0x000a2da5) popup_call4_audio_in_window

0x9de7,	// (0x000a69f4) bg_popup_call2_act_pane_cp02

0xd7b5,	// (0x000aa3c2) call4_list_conf_pane

0xce8f,	// (0x000a9a9c) call4_image_pane_g1

0xce8f,	// (0x000a9a9c) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x000ac2e5) call4_image_pane_g

0xda36,	// (0x000aa643) list_single_graphic_popup_conf4_pane_ParamLimits

0xda36,	// (0x000aa643) list_single_graphic_popup_conf4_pane

0x9de7,	// (0x000a69f4) list_highlight_pane_cp022

0xda4b,	// (0x000aa658) list_single_graphic_popup_conf4_pane_g1

0xb364,	// (0x000a7f71) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ac5e1) list_single_graphic_popup_conf4_pane_g

0xda53,	// (0x000aa660) list_single_graphic_popup_conf4_pane_t1

0x200d,	// (0x0009ec1a) popup_vtel_slider_window_ParamLimits

0x200d,	// (0x0009ec1a) popup_vtel_slider_window

0xd797,	// (0x000aa3a4) dialer2_ne_pane_t2_ParamLimits

0xd797,	// (0x000aa3a4) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000ac4c2) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000ac4c2) dialer2_ne_pane_t

0xad4f,	// (0x000a795c) bg_popup_sub_pane_cp010_ParamLimits

0xad4f,	// (0x000a795c) bg_popup_sub_pane_cp010

0x6d65,	// (0x000a3972) popup_vtel_slider_window_g1_ParamLimits

0x6d65,	// (0x000a3972) popup_vtel_slider_window_g1

0x6d71,	// (0x000a397e) popup_vtel_slider_window_g2_ParamLimits

0x6d71,	// (0x000a397e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ac5e6) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ac5e6) popup_vtel_slider_window_g

0x6db9,	// (0x000a39c6) vtel_slider_pane_ParamLimits

0x6db9,	// (0x000a39c6) vtel_slider_pane

0x6dc8,	// (0x000a39d5) vtel_slider_pane_g1_ParamLimits

0x6dc8,	// (0x000a39d5) vtel_slider_pane_g1

0x6dd5,	// (0x000a39e2) vtel_slider_pane_g2_ParamLimits

0x6dd5,	// (0x000a39e2) vtel_slider_pane_g2

0x6de2,	// (0x000a39ef) vtel_slider_pane_g3_ParamLimits

0x6de2,	// (0x000a39ef) vtel_slider_pane_g3

0x6dc8,	// (0x000a39d5) vtel_slider_pane_g4_ParamLimits

0x6dc8,	// (0x000a39d5) vtel_slider_pane_g4

0x6def,	// (0x000a39fc) vtel_slider_pane_g5_ParamLimits

0x6def,	// (0x000a39fc) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ac5ef) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ac5ef) vtel_slider_pane_g

0x41c4,	// (0x000a0dd1) main_gallery2_pane

0x6536,	// (0x000a3143) aid_size_row_itut2_dropdow_list_ParamLimits

0x6536,	// (0x000a3143) aid_size_row_itut2_dropdow_list

0x65a6,	// (0x000a31b3) grid_vitu2_function_top_pane_ParamLimits

0x65a6,	// (0x000a31b3) grid_vitu2_function_top_pane

0x65fc,	// (0x000a3209) popup_vitu2_dropdown_list_window_ParamLimits

0x65fc,	// (0x000a3209) popup_vitu2_dropdown_list_window

0x661c,	// (0x000a3229) popup_vitu2_match_list_window

0x6e0a,	// (0x000a3a17) cell_vitu2_function_top_pane_ParamLimits

0x6e0a,	// (0x000a3a17) cell_vitu2_function_top_pane

0x6e2e,	// (0x000a3a3b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e2e,	// (0x000a3a3b) cell_vitu2_function_top_pane_cp01

0x6e4a,	// (0x000a3a57) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e4a,	// (0x000a3a57) cell_vitu2_function_top_wide_pane

0x41c4,	// (0x000a0dd1) bg_button_pane_cp012

0x6e66,	// (0x000a3a73) cell_vitu2_function_top_pane_g1

0x6e7a,	// (0x000a3a87) bg_button_pane_cp013_ParamLimits

0x6e7a,	// (0x000a3a87) bg_button_pane_cp013

0x6e96,	// (0x000a3aa3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e96,	// (0x000a3aa3) cell_vitu2_function_top_wide_pane_g1

0x0ea4,	// (0x0009dab1) bg_popup_sub_pane_cp20

0x6eae,	// (0x000a3abb) list_vitu2_match_list_pane

0xd836,	// (0x000aa443) bg_popup_sub_pane_cp20_g1

0xd83e,	// (0x000aa44b) bg_popup_sub_pane_cp20_g2

0xae4a,	// (0x000a7a57) bg_popup_sub_pane_cp20_g3

0xd846,	// (0x000aa453) bg_popup_sub_pane_cp20_g4

0xae2a,	// (0x000a7a37) bg_popup_sub_pane_cp20_g5

0xda69,	// (0x000aa676) bg_popup_sub_pane_cp20_g6

0xd856,	// (0x000aa463) bg_popup_sub_pane_cp20_g7

0xd85e,	// (0x000aa46b) bg_popup_sub_pane_cp20_g8

0xd866,	// (0x000aa473) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000ac5fa) bg_popup_sub_pane_cp20_g

0x6ec6,	// (0x000a3ad3) list_vitu2_match_list_item_pane_ParamLimits

0x6ec6,	// (0x000a3ad3) list_vitu2_match_list_item_pane

0x6ed8,	// (0x000a3ae5) list_vitu2_match_list_item_pane_t1

0x0ebe,	// (0x0009dacb) bg_popup_sub_pane_cp21

0x6f2e,	// (0x000a3b3b) grid_vitu2_dropdown_list_pane

0x6f36,	// (0x000a3b43) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f36,	// (0x000a3b43) cell_vitu2_dropdown_list_char_pane

0x6f5b,	// (0x000a3b68) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f5b,	// (0x000a3b68) cell_vitu2_dropdown_list_ctrl_pane

0xda71,	// (0x000aa67e) cell_vitu2_dropdown_list_char_pane_g1

0xda7a,	// (0x000aa687) cell_vitu2_dropdown_list_char_pane_g2

0xda83,	// (0x000aa690) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000ac617) cell_vitu2_dropdown_list_char_pane_g

0x6f89,	// (0x000a3b96) cell_vitu2_dropdown_list_char_pane_t1

0x6f97,	// (0x000a3ba4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f97,	// (0x000a3ba4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6fa7,	// (0x000a3bb4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6fa7,	// (0x000a3bb4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fb8,	// (0x000a3bc5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fb8,	// (0x000a3bc5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fc8,	// (0x000a3bd5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fc8,	// (0x000a3bd5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6366,	// (0x000a2f73) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6366,	// (0x000a2f73) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000ac61e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000ac61e) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fe1,	// (0x000a3bee) aid_size_cell_gallery2_ParamLimits

0x6fe1,	// (0x000a3bee) aid_size_cell_gallery2

0x6ffb,	// (0x000a3c08) grid_gallery2_pane_ParamLimits

0x6ffb,	// (0x000a3c08) grid_gallery2_pane

0x7012,	// (0x000a3c1f) scroll_pane_cp029_ParamLimits

0x7012,	// (0x000a3c1f) scroll_pane_cp029

0x7022,	// (0x000a3c2f) cell_gallery2_pane_ParamLimits

0x7022,	// (0x000a3c2f) cell_gallery2_pane

0xda8c,	// (0x000aa699) cell_gallery2_pane_g2

0x7079,	// (0x000a3c86) cell_gallery2_pane_g3

0xda94,	// (0x000aa6a1) cell_gallery2_pane_g4

0xda9c,	// (0x000aa6a9) cell_gallery2_pane_g5

0xab5e,	// (0x000a776b) grid_highlight_pane_cp10

0x661c,	// (0x000a3229) popup_vitu2_match_list_window_ParamLimits

0x6630,	// (0x000a323d) popup_vitu2_query_window_ParamLimits

0x6630,	// (0x000a323d) popup_vitu2_query_window

0x0ebe,	// (0x0009dacb) bg_vitu2_candi_button_pane

0xda71,	// (0x000aa67e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda7a,	// (0x000aa687) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda83,	// (0x000aa690) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7081,	// (0x000a3c8e) bg_button_pane_cp015

0x7093,	// (0x000a3ca0) bg_button_pane_cp016

0x70a6,	// (0x000a3cb3) bg_button_pane_cp017

0xca57,	// (0x000a9664) bg_popup_sub_pane_cp22

0xdaa4,	// (0x000aa6b1) popup_vitu2_query_window_g1

0x70eb,	// (0x000a3cf8) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000ac629) popup_vitu2_query_window_g

0x7108,	// (0x000a3d15) popup_vitu2_query_window_t1_ParamLimits

0x7108,	// (0x000a3d15) popup_vitu2_query_window_t1

0x713b,	// (0x000a3d48) popup_vitu2_query_window_t2_ParamLimits

0x713b,	// (0x000a3d48) popup_vitu2_query_window_t2

0x714d,	// (0x000a3d5a) popup_vitu2_query_window_t3_ParamLimits

0x714d,	// (0x000a3d5a) popup_vitu2_query_window_t3

0x7175,	// (0x000a3d82) popup_vitu2_query_window_t4_ParamLimits

0x7175,	// (0x000a3d82) popup_vitu2_query_window_t4

0x7198,	// (0x000a3da5) popup_vitu2_query_window_t5_ParamLimits

0x7198,	// (0x000a3da5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000ac630) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000ac630) popup_vitu2_query_window_t

0xd945,	// (0x000aa552) main_cset_text_pane

0x6a37,	// (0x000a3644) aid_area_touch_slider_ParamLimits

0x6a53,	// (0x000a3660) cset_slider_pane_ParamLimits

0x6a7d,	// (0x000a368a) main_cset_slider_pane_g1_ParamLimits

0x6a92,	// (0x000a369f) main_cset_slider_pane_g2_ParamLimits

0xd966,	// (0x000aa573) main_cset_slider_pane_g3_ParamLimits

0xd966,	// (0x000aa573) main_cset_slider_pane_g3

0x6aa7,	// (0x000a36b4) main_cset_slider_pane_g4_ParamLimits

0x6aa7,	// (0x000a36b4) main_cset_slider_pane_g4

0x6ab6,	// (0x000a36c3) main_cset_slider_pane_g5_ParamLimits

0x6ab6,	// (0x000a36c3) main_cset_slider_pane_g5

0x6ac2,	// (0x000a36cf) main_cset_slider_pane_g6_ParamLimits

0x6ac2,	// (0x000a36cf) main_cset_slider_pane_g6

0xf976,	// (0x000ac583) main_cset_slider_pane_g_ParamLimits

0xd996,	// (0x000aa5a3) main_cset_slider_pane_t1_ParamLimits

0x6b4e,	// (0x000a375b) main_cset_slider_pane_t2_ParamLimits

0x6b68,	// (0x000a3775) main_cset_slider_pane_t3_ParamLimits

0x6b82,	// (0x000a378f) main_cset_slider_pane_t4_ParamLimits

0x6b9c,	// (0x000a37a9) main_cset_slider_pane_t5_ParamLimits

0x6bb6,	// (0x000a37c3) main_cset_slider_pane_t6_ParamLimits

0x6bcb,	// (0x000a37d8) main_cset_slider_pane_t7_ParamLimits

0x6bf5,	// (0x000a3802) main_cset_slider_pane_t8_ParamLimits

0x6bf5,	// (0x000a3802) main_cset_slider_pane_t8

0x6c1d,	// (0x000a382a) main_cset_slider_pane_t9_ParamLimits

0x6c1d,	// (0x000a382a) main_cset_slider_pane_t9

0x6c45,	// (0x000a3852) main_cset_slider_pane_t10_ParamLimits

0x6c45,	// (0x000a3852) main_cset_slider_pane_t10

0x6c6d,	// (0x000a387a) main_cset_slider_pane_t11_ParamLimits

0x6c6d,	// (0x000a387a) main_cset_slider_pane_t11

0x6c95,	// (0x000a38a2) main_cset_slider_pane_t12_ParamLimits

0x6c95,	// (0x000a38a2) main_cset_slider_pane_t12

0x6cb2,	// (0x000a38bf) main_cset_slider_pane_t13_ParamLimits

0x6cb2,	// (0x000a38bf) main_cset_slider_pane_t13

0xf99b,	// (0x000ac5a8) main_cset_slider_pane_t_ParamLimits

0x9de7,	// (0x000a69f4) bg_popup_sub_pane_cp011

0xdab0,	// (0x000aa6bd) main_cset_text_pane_g1

0xdab8,	// (0x000aa6c5) main_cset_text_pane_t1

0xdac6,	// (0x000aa6d3) main_cset_text_pane_t2

0xdad4,	// (0x000aa6e1) main_cset_text_pane_t3

0xdae2,	// (0x000aa6ef) main_cset_text_pane_t4

0xdaf0,	// (0x000aa6fd) main_cset_text_pane_t5

0xdafe,	// (0x000aa70b) main_cset_text_pane_t6

0xdb0c,	// (0x000aa719) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000ac63f) main_cset_text_pane_t

0x0ebe,	// (0x0009dacb) main_cam4_burst_pane

0x0ebe,	// (0x0009dacb) main_cam5_pane

0x6980,	// (0x000a358d) bg_button_pane_cp019

0x6989,	// (0x000a3596) bg_button_pane_cp020

0xd972,	// (0x000aa57f) main_cset_slider_pane_g7_ParamLimits

0xd972,	// (0x000aa57f) main_cset_slider_pane_g7

0xd97e,	// (0x000aa58b) main_cset_slider_pane_g8_ParamLimits

0xd97e,	// (0x000aa58b) main_cset_slider_pane_g8

0x6ad6,	// (0x000a36e3) main_cset_slider_pane_g9_ParamLimits

0x6ad6,	// (0x000a36e3) main_cset_slider_pane_g9

0x6ae2,	// (0x000a36ef) main_cset_slider_pane_g10_ParamLimits

0x6ae2,	// (0x000a36ef) main_cset_slider_pane_g10

0x6aee,	// (0x000a36fb) main_cset_slider_pane_g11_ParamLimits

0x6aee,	// (0x000a36fb) main_cset_slider_pane_g11

0x6afa,	// (0x000a3707) main_cset_slider_pane_g12_ParamLimits

0x6afa,	// (0x000a3707) main_cset_slider_pane_g12

0x6b06,	// (0x000a3713) main_cset_slider_pane_g13_ParamLimits

0x6b06,	// (0x000a3713) main_cset_slider_pane_g13

0x6b12,	// (0x000a371f) main_cset_slider_pane_g14_ParamLimits

0x6b12,	// (0x000a371f) main_cset_slider_pane_g14

0x6b1e,	// (0x000a372b) main_cset_slider_pane_g15_ParamLimits

0x6b1e,	// (0x000a372b) main_cset_slider_pane_g15

0xd9c4,	// (0x000aa5d1) main_cset_slider_pane_t14_ParamLimits

0xd9c4,	// (0x000aa5d1) main_cset_slider_pane_t14

0xd9fd,	// (0x000aa60a) main_cset_slider_pane_t15_ParamLimits

0xd9fd,	// (0x000aa60a) main_cset_slider_pane_t15

0x7211,	// (0x000a3e1e) aid_cam4_burst_size_cell_ParamLimits

0x7211,	// (0x000a3e1e) aid_cam4_burst_size_cell

0x722d,	// (0x000a3e3a) grid_cam4_burst_pane_ParamLimits

0x722d,	// (0x000a3e3a) grid_cam4_burst_pane

0x725f,	// (0x000a3e6c) linegrid_cam4_burst_pane_ParamLimits

0x725f,	// (0x000a3e6c) linegrid_cam4_burst_pane

0x727d,	// (0x000a3e8a) scroll_pane_cp30_ParamLimits

0x727d,	// (0x000a3e8a) scroll_pane_cp30

0x7289,	// (0x000a3e96) cell_cam4_burst_pane_ParamLimits

0x7289,	// (0x000a3e96) cell_cam4_burst_pane

0xdb1a,	// (0x000aa727) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb1a,	// (0x000aa727) linegrid_cam4_burst_pane_g1

0x72c9,	// (0x000a3ed6) linegrid_cam4_burst_pane_g2_ParamLimits

0x72c9,	// (0x000a3ed6) linegrid_cam4_burst_pane_g2

0xdb27,	// (0x000aa734) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb27,	// (0x000aa734) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000ac64e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000ac64e) linegrid_cam4_burst_pane_g

0x72da,	// (0x000a3ee7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72da,	// (0x000a3ee7) linegrid_cam4_burst_pane_g3_copy1

0xdb34,	// (0x000aa741) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb34,	// (0x000aa741) linegrid_cam4_burst_pane_g4

0x72f4,	// (0x000a3f01) linegrid_cam4_burst_pane_g5_ParamLimits

0x72f4,	// (0x000a3f01) linegrid_cam4_burst_pane_g5

0x7305,	// (0x000a3f12) linegrid_cam4_burst_pane_g6_ParamLimits

0x7305,	// (0x000a3f12) linegrid_cam4_burst_pane_g6

0xdb41,	// (0x000aa74e) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb41,	// (0x000aa74e) linegrid_cam4_burst_pane_g7

0x731c,	// (0x000a3f29) cell_cam4_burst_pane_g1

0xdb5a,	// (0x000aa767) main_cam5_pane_t1_ParamLimits

0xdb5a,	// (0x000aa767) main_cam5_pane_t1

0xdb6c,	// (0x000aa779) main_cam5_pane_t2_ParamLimits

0xdb6c,	// (0x000aa779) main_cam5_pane_t2

0xdb7e,	// (0x000aa78b) main_cam5_pane_t3_ParamLimits

0xdb7e,	// (0x000aa78b) main_cam5_pane_t3

0xdb90,	// (0x000aa79d) main_cam5_pane_t4_ParamLimits

0xdb90,	// (0x000aa79d) main_cam5_pane_t4

0xdba8,	// (0x000aa7b5) main_cam5_pane_t5_ParamLimits

0xdba8,	// (0x000aa7b5) main_cam5_pane_t5

0xdbbc,	// (0x000aa7c9) main_cam5_pane_t6_ParamLimits

0xdbbc,	// (0x000aa7c9) main_cam5_pane_t6

0xdbd0,	// (0x000aa7dd) main_cam5_pane_t7_ParamLimits

0xdbd0,	// (0x000aa7dd) main_cam5_pane_t7

0xdbe2,	// (0x000aa7ef) main_cam5_pane_t8_ParamLimits

0xdbe2,	// (0x000aa7ef) main_cam5_pane_t8

0xdc00,	// (0x000aa80d) main_cam5_pane_t9_ParamLimits

0xdc00,	// (0x000aa80d) main_cam5_pane_t9

0xdc12,	// (0x000aa81f) main_cam5_pane_t10_ParamLimits

0xdc12,	// (0x000aa81f) main_cam5_pane_t10

0xdc24,	// (0x000aa831) main_cam5_pane_t11_ParamLimits

0xdc24,	// (0x000aa831) main_cam5_pane_t11

0xdc38,	// (0x000aa845) main_cam5_pane_t12_ParamLimits

0xdc38,	// (0x000aa845) main_cam5_pane_t12

0xdc4f,	// (0x000aa85c) main_cam5_pane_t13_ParamLimits

0xdc4f,	// (0x000aa85c) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000ac65a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000ac65a) main_cam5_pane_t

0x0e63,	// (0x0009da70) popup_scut_keymap_window_ParamLimits

0x0e63,	// (0x0009da70) popup_scut_keymap_window

0x732f,	// (0x000a3f3c) aid_size_cell_brow_shortcut

0xab5e,	// (0x000a776b) bg_popup_window_pane_cp010

0x733b,	// (0x000a3f48) grid_scut_pane

0x7347,	// (0x000a3f54) cell_scut_pane_ParamLimits

0x7347,	// (0x000a3f54) cell_scut_pane

0x7362,	// (0x000a3f6f) cell_scut_pane_g1

0xdc72,	// (0x000aa87f) cell_scut_pane_t1

0xdc81,	// (0x000aa88e) cell_scut_pane_t2

0x736b,	// (0x000a3f78) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000ac675) cell_scut_pane_t

0x5002,	// (0x000a1c0f) main_mup3_pane_g8_ParamLimits

0x5002,	// (0x000a1c0f) main_mup3_pane_g8

0x6546,	// (0x000a3153) area_vitu2_query_pane_ParamLimits

0x6546,	// (0x000a3153) area_vitu2_query_pane

0x70b9,	// (0x000a3cc6) input_focus_pane_cp08

0xdc90,	// (0x000aa89d) area_vitu2_query_pane_g1

0x7379,	// (0x000a3f86) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ac67c) area_vitu2_query_pane_g

0x738a,	// (0x000a3f97) area_vitu2_query_pane_t1_ParamLimits

0x738a,	// (0x000a3f97) area_vitu2_query_pane_t1

0x739e,	// (0x000a3fab) area_vitu2_query_pane_t2_ParamLimits

0x739e,	// (0x000a3fab) area_vitu2_query_pane_t2

0x73b2,	// (0x000a3fbf) area_vitu2_query_pane_t3_ParamLimits

0x73b2,	// (0x000a3fbf) area_vitu2_query_pane_t3

0xa5c1,	// (0x000a71ce) area_vitu2_query_pane_t4_ParamLimits

0xa5c1,	// (0x000a71ce) area_vitu2_query_pane_t4

0xa5e9,	// (0x000a71f6) area_vitu2_query_pane_t5_ParamLimits

0xa5e9,	// (0x000a71f6) area_vitu2_query_pane_t5

0xa611,	// (0x000a721e) area_vitu2_query_pane_t6_ParamLimits

0xa611,	// (0x000a721e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ac681) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ac681) area_vitu2_query_pane_t

0x73da,	// (0x000a3fe7) bg_button_pane_cp018

0x73e8,	// (0x000a3ff5) bg_button_pane_cp021

0x73f4,	// (0x000a4001) bg_button_pane_cp022

0x7405,	// (0x000a4012) input_focus_pane_cp09

0xb473,	// (0x000a8080) aid_size_touch_mv_arrow_left

0xb49e,	// (0x000a80ab) aid_size_touch_mv_arrow_right

0x6b36,	// (0x000a3743) main_cset_slider_pane_g16_ParamLimits

0x6b36,	// (0x000a3743) main_cset_slider_pane_g16

0x6b42,	// (0x000a374f) main_cset_slider_pane_g17_ParamLimits

0x6b42,	// (0x000a374f) main_cset_slider_pane_g17

0x731c,	// (0x000a3f29) cell_cam4_burst_pane_g1_ParamLimits

0x9de7,	// (0x000a69f4) compa_mode_pane

0x6d7d,	// (0x000a398a) popup_vtel_slider_window_g3_ParamLimits

0x6d7d,	// (0x000a398a) popup_vtel_slider_window_g3

0x6d91,	// (0x000a399e) popup_vtel_slider_window_g4_ParamLimits

0x6d91,	// (0x000a399e) popup_vtel_slider_window_g4

0x6da5,	// (0x000a39b2) popup_vtel_slider_window_t1_ParamLimits

0x6da5,	// (0x000a39b2) popup_vtel_slider_window_t1

0x0ebe,	// (0x0009dacb) main_cl_pane

0x426e,	// (0x000a0e7b) popup_imed_adjust2_window_ParamLimits

0xca57,	// (0x000a9664) bg_tb_trans_pane_cp05_ParamLimits

0xd387,	// (0x000a9f94) popup_imed_adjust2_window_g1_ParamLimits

0xd396,	// (0x000a9fa3) popup_imed_adjust2_window_g2_ParamLimits

0xd396,	// (0x000a9fa3) popup_imed_adjust2_window_g2

0xd3a2,	// (0x000a9faf) popup_imed_adjust2_window_g3_ParamLimits

0xd3a2,	// (0x000a9faf) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x000ac3e8) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x000ac3e8) popup_imed_adjust2_window_g

0xd3ae,	// (0x000a9fbb) popup_imed_adjust2_window_t1_ParamLimits

0xd3c6,	// (0x000a9fd3) slider_imed_adjust_pane_ParamLimits

0xd3da,	// (0x000a9fe7) slider_imed_adjust_pane_g1_ParamLimits

0xd3ea,	// (0x000a9ff7) slider_imed_adjust_pane_g2_ParamLimits

0xd3fa,	// (0x000aa007) slider_imed_adjust_pane_g3_ParamLimits

0xd40b,	// (0x000aa018) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x000ac3ef) slider_imed_adjust_pane_g_ParamLimits

0x6279,	// (0x000a2e86) aid_touch_area_cam4_ParamLimits

0x6279,	// (0x000a2e86) aid_touch_area_cam4

0x6289,	// (0x000a2e96) battery_pane_cp01

0x6310,	// (0x000a2f1d) main_camera4_pane_g6_ParamLimits

0x6310,	// (0x000a2f1d) main_camera4_pane_g6

0x632e,	// (0x000a2f3b) main_camera4_pane_t2_ParamLimits

0x632e,	// (0x000a2f3b) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000ac4f6) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000ac4f6) main_camera4_pane_t

0x63bf,	// (0x000a2fcc) aid_touch_area_vid4_ParamLimits

0x63bf,	// (0x000a2fcc) aid_touch_area_vid4

0x63ff,	// (0x000a300c) main_video4_pane_g5_ParamLimits

0x63ff,	// (0x000a300c) main_video4_pane_g5

0x6425,	// (0x000a3032) vid4_progress_pane_ParamLimits

0x6425,	// (0x000a3032) vid4_progress_pane

0xd98a,	// (0x000aa597) main_cset_slider_pane_g18_ParamLimits

0xd98a,	// (0x000aa597) main_cset_slider_pane_g18

0xdb4e,	// (0x000aa75b) cell_cam4_burst_pane_g2_ParamLimits

0xdb4e,	// (0x000aa75b) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000ac655) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000ac655) cell_cam4_burst_pane_g

0x7416,	// (0x000a4023) bg_cl_pane_ParamLimits

0x7416,	// (0x000a4023) bg_cl_pane

0x7422,	// (0x000a402f) cl_header_pane_ParamLimits

0x7422,	// (0x000a402f) cl_header_pane

0x742e,	// (0x000a403b) cl_listscroll_pane_ParamLimits

0x742e,	// (0x000a403b) cl_listscroll_pane

0xdc9c,	// (0x000aa8a9) bg_cl_pane_g1

0xdca4,	// (0x000aa8b1) bg_cl_pane_g2

0xdcac,	// (0x000aa8b9) bg_cl_pane_g3

0xdcb4,	// (0x000aa8c1) bg_cl_pane_g4

0xdcbc,	// (0x000aa8c9) bg_cl_pane_g5

0xdcc4,	// (0x000aa8d1) bg_cl_pane_g6

0xdccc,	// (0x000aa8d9) bg_cl_pane_g7

0xdcd4,	// (0x000aa8e1) bg_cl_pane_g8

0xdcdc,	// (0x000aa8e9) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ac690) bg_cl_pane_g

0x743a,	// (0x000a4047) aid_height_cl_leading_ParamLimits

0x743a,	// (0x000a4047) aid_height_cl_leading

0x7446,	// (0x000a4053) aid_height_cl_text_ParamLimits

0x7446,	// (0x000a4053) aid_height_cl_text

0xe1b4,	// (0x000aadc1) bg_cl_header_pane_ParamLimits

0xe1b4,	// (0x000aadc1) bg_cl_header_pane

0x745e,	// (0x000a406b) cl_header_pane_g1_ParamLimits

0x745e,	// (0x000a406b) cl_header_pane_g1

0x746b,	// (0x000a4078) cl_header_pane_t1_ParamLimits

0x746b,	// (0x000a4078) cl_header_pane_t1

0xdce4,	// (0x000aa8f1) cl_list_pane

0xd95d,	// (0x000aa56a) hc_scroll_pane_cp01

0xae2a,	// (0x000a7a37) bg_cl_header_pane_g1

0xd836,	// (0x000aa443) bg_cl_header_pane_g2

0xae4a,	// (0x000a7a57) bg_cl_header_pane_g3

0xd846,	// (0x000aa453) bg_cl_header_pane_g4

0xd83e,	// (0x000aa44b) bg_cl_header_pane_g5

0xda69,	// (0x000aa676) bg_cl_header_pane_g6

0xd85e,	// (0x000aa46b) bg_cl_header_pane_g7

0xd866,	// (0x000aa473) bg_cl_header_pane_g8

0xd856,	// (0x000aa463) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ac6a3) bg_cl_header_pane_g

0x747d,	// (0x000a408a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x747d,	// (0x000a408a) hc_cl_list_double_graphic_heading_pane

0x748d,	// (0x000a409a) hc_cl_list_single_graphic_pane_ParamLimits

0x748d,	// (0x000a409a) hc_cl_list_single_graphic_pane

0x749f,	// (0x000a40ac) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x749f,	// (0x000a40ac) hc_cl_list_single_graphic_pane_g1

0x74ab,	// (0x000a40b8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74ab,	// (0x000a40b8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ac6b6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ac6b6) hc_cl_list_single_graphic_pane_g

0x74bf,	// (0x000a40cc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74bf,	// (0x000a40cc) hc_cl_list_single_graphic_pane_t1

0x749f,	// (0x000a40ac) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x749f,	// (0x000a40ac) hc_cl_list_double_graphic_heading_pane_g1

0x74d4,	// (0x000a40e1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74d4,	// (0x000a40e1) hc_cl_list_double_graphic_heading_pane_g2

0x74e8,	// (0x000a40f5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74e8,	// (0x000a40f5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ac6bb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ac6bb) hc_cl_list_double_graphic_heading_pane_g

0x74fc,	// (0x000a4109) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74fc,	// (0x000a4109) hc_cl_list_double_graphic_heading_pane_t1

0x7511,	// (0x000a411e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7511,	// (0x000a411e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ac6c2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ac6c2) hc_cl_list_double_graphic_heading_pane_t

0x752e,	// (0x000a413b) vid4_progress_pane_g1

0x753e,	// (0x000a414b) vid4_progress_pane_g2

0x754e,	// (0x000a415b) vid4_progress_pane_g3

0x638d,	// (0x000a2f9a) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ac6c7) vid4_progress_pane_g

0x7560,	// (0x000a416d) vid4_progress_pane_t1

0x7576,	// (0x000a4183) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ac6d2) vid4_progress_pane_t

0x75a0,	// (0x000a41ad) wait_bar_pane_cp07

0xcc7c,	// (0x000a9889) blid_firmament_pane_ParamLimits

0xccbf,	// (0x000a98cc) popup_blid_sat_info2_window_g1

0xcce3,	// (0x000a98f0) popup_blid_sat_info2_window_t3

0xccf1,	// (0x000a98fe) popup_blid_sat_info2_window_t4

0xccff,	// (0x000a990c) popup_blid_sat_info2_window_t5

0xcd0d,	// (0x000a991a) popup_blid_sat_info2_window_t6

0xcd1d,	// (0x000a992a) popup_blid_sat_info2_window_t7

0xcd2b,	// (0x000a9938) popup_blid_sat_info2_window_t8

0xcd39,	// (0x000a9946) popup_blid_sat_info2_window_t9

0xcd47,	// (0x000a9954) popup_blid_sat_info2_window_t10

0xce0f,	// (0x000a9a1c) aid_firma_cardinal_ParamLimits

0xce23,	// (0x000a9a30) blid_firmament_pane_t1_ParamLimits

0xce3a,	// (0x000a9a47) blid_firmament_pane_t2_ParamLimits

0xce51,	// (0x000a9a5e) blid_firmament_pane_t3_ParamLimits

0xce68,	// (0x000a9a75) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x000ac2dc) blid_firmament_pane_t_ParamLimits

0xce7f,	// (0x000a9a8c) blid_sat_info_pane_ParamLimits

0x41c4,	// (0x000a0dd1) main_cam_set_pane_ParamLimits

0x57be,	// (0x000a23cb) aid_size_cell_colour_35_ParamLimits

0x57d8,	// (0x000a23e5) aid_size_cell_colour_112_ParamLimits

0x57ef,	// (0x000a23fc) aid_size_cell_effect_ParamLimits

0xad4f,	// (0x000a795c) bg_tb_trans_pane_cp02_ParamLimits

0xb1ff,	// (0x000a7e0c) heading_imed_pane_ParamLimits

0x5809,	// (0x000a2416) listscroll_imed_pane_ParamLimits

0xc06d,	// (0x000a8c7a) popup_call2_audio_first_window_g5_ParamLimits

0xc06d,	// (0x000a8c7a) popup_call2_audio_first_window_g5

0x5f55,	// (0x000a2b62) aid_size_touch_image3_arrow_left_ParamLimits

0x5f55,	// (0x000a2b62) aid_size_touch_image3_arrow_left

0x5f6b,	// (0x000a2b78) aid_size_touch_image3_arrow_right_ParamLimits

0x5f6b,	// (0x000a2b78) aid_size_touch_image3_arrow_right

0x758b,	// (0x000a4198) vid4_progress_pane_t3

0x5aad,	// (0x000a26ba) main_hwr_training_symbol_option_pane_ParamLimits

0x5aad,	// (0x000a26ba) main_hwr_training_symbol_option_pane

0xd68c,	// (0x000aa299) popup_hwr_training_preview_window_ParamLimits

0xd68c,	// (0x000aa299) popup_hwr_training_preview_window

0x5b0e,	// (0x000a271b) hwr_training_navi_pane_g5_ParamLimits

0x5b0e,	// (0x000a271b) hwr_training_navi_pane_g5

0xd824,	// (0x000aa431) popup_char_count_window

0x0ea4,	// (0x0009dab1) bg_popup_sub_pane_cp20_ParamLimits

0x6eae,	// (0x000a3abb) list_vitu2_match_list_pane_ParamLimits

0x6eba,	// (0x000a3ac7) vitu2_page_scroll_pane_ParamLimits

0x6eba,	// (0x000a3ac7) vitu2_page_scroll_pane

0xdced,	// (0x000aa8fa) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdced,	// (0x000aa8fa) list_single_hwr_training_symbol_option_pane

0xdd00,	// (0x000aa90d) list_single_hwr_training_symbol_option_pane_g1

0xdd08,	// (0x000aa915) list_single_hwr_training_symbol_option_pane_t1

0xdd16,	// (0x000aa923) bg_button_pane_cp023

0xdd1f,	// (0x000aa92c) bg_button_pane_cp024

0x75eb,	// (0x000a41f8) vitu2_page_scroll_pane_g1

0x75f3,	// (0x000a4200) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ac6d9) vitu2_page_scroll_pane_g

0x75fd,	// (0x000a420a) vitu2_page_scroll_pane_t1

0xd924,	// (0x000aa531) popup_char_count_window_g1

0xdda3,	// (0x000aa9b0) popup_char_count_window_g2

0xdd67,	// (0x000aa974) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ac6de) popup_char_count_window_g

0xddac,	// (0x000aa9b9) popup_char_count_window_t1

0x0ebe,	// (0x0009dacb) main_vded2_pane

0xd373,	// (0x000a9f80) aid_size_cell_imed_line

0xd37d,	// (0x000a9f8a) grid_imed_line_width_pane

0x6499,	// (0x000a30a6) vid4_indicators_pane_g4

0xddba,	// (0x000aa9c7) cell_imed_line_width_pane_ParamLimits

0xddba,	// (0x000aa9c7) cell_imed_line_width_pane

0xddd0,	// (0x000aa9dd) cell_imed_line_width_pane_g1

0xd094,	// (0x000a9ca1) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ac6e5) cell_imed_line_width_pane_g

0x760c,	// (0x000a4219) main_vded2_pane_g1_ParamLimits

0x760c,	// (0x000a4219) main_vded2_pane_g1

0x761b,	// (0x000a4228) main_vded2_pane_g2_ParamLimits

0x761b,	// (0x000a4228) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ac6ea) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ac6ea) main_vded2_pane_g

0x7629,	// (0x000a4236) vded2_slider_pane_ParamLimits

0x7629,	// (0x000a4236) vded2_slider_pane

0x7636,	// (0x000a4243) aid_size_touch_vded2_end

0x7640,	// (0x000a424d) aid_size_touch_vded2_playhead

0xddd9,	// (0x000aa9e6) aid_size_touch_vded2_start

0xdde1,	// (0x000aa9ee) vded2_slider_bg_pane

0xddea,	// (0x000aa9f7) vded2_slider_pane_g1

0xddf3,	// (0x000aaa00) vded2_slider_pane_g2

0x7648,	// (0x000a4255) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ac6ef) vded2_slider_pane_g

0xdd70,	// (0x000aa97d) vded2_slider_bg_pane_g1

0xdd79,	// (0x000aa986) vded2_slider_bg_pane_g2

0xdd82,	// (0x000aa98f) vded2_slider_bg_pane_g3

0x0002,

0xf79f,	// (0x000ac3ac) vded2_slider_bg_pane_g

0x3a90,	// (0x000a069d) aid_postcard_touch_down_pane_ParamLimits

0x3a90,	// (0x000a069d) aid_postcard_touch_down_pane

0x3aa0,	// (0x000a06ad) aid_postcard_touch_up_pane_ParamLimits

0x3aa0,	// (0x000a06ad) aid_postcard_touch_up_pane

0x0ebe,	// (0x0009dacb) main_blid2_pane

0x41ed,	// (0x000a0dfa) popup_blid2_search_window

0x9de7,	// (0x000a69f4) blid2_gps_pane

0x9de7,	// (0x000a69f4) blid2_navig_pane

0x9de7,	// (0x000a69f4) blid2_search_pane

0x9de7,	// (0x000a69f4) blid2_tripm_pane

0x7651,	// (0x000a425e) blid2_search_pane_g1_ParamLimits

0x7651,	// (0x000a425e) blid2_search_pane_g1

0x765d,	// (0x000a426a) blid2_search_pane_t1_ParamLimits

0x765d,	// (0x000a426a) blid2_search_pane_t1

0x766f,	// (0x000a427c) aid_size_cell_blid2_gps_ParamLimits

0x766f,	// (0x000a427c) aid_size_cell_blid2_gps

0x767f,	// (0x000a428c) blid2_gps_pane_g1_ParamLimits

0x767f,	// (0x000a428c) blid2_gps_pane_g1

0x768b,	// (0x000a4298) grid_blid2_satellite_pane_ParamLimits

0x768b,	// (0x000a4298) grid_blid2_satellite_pane

0x7699,	// (0x000a42a6) blid2_navig_pane_g1_ParamLimits

0x7699,	// (0x000a42a6) blid2_navig_pane_g1

0x76a5,	// (0x000a42b2) blid2_navig_pane_t1_ParamLimits

0x76a5,	// (0x000a42b2) blid2_navig_pane_t1

0x76b7,	// (0x000a42c4) blid2_navig_pane_t2_ParamLimits

0x76b7,	// (0x000a42c4) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x000ac6f6) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x000ac6f6) blid2_navig_pane_t

0x76c9,	// (0x000a42d6) blid2_navig_ring_pane_ParamLimits

0x76c9,	// (0x000a42d6) blid2_navig_ring_pane

0x76d9,	// (0x000a42e6) blid2_speed_pane_ParamLimits

0x76d9,	// (0x000a42e6) blid2_speed_pane

0x76e5,	// (0x000a42f2) blid2_tripm_pane_g1_ParamLimits

0x76e5,	// (0x000a42f2) blid2_tripm_pane_g1

0x76f5,	// (0x000a4302) blid2_tripm_pane_g2_ParamLimits

0x76f5,	// (0x000a4302) blid2_tripm_pane_g2

0x7701,	// (0x000a430e) blid2_tripm_pane_g3_ParamLimits

0x7701,	// (0x000a430e) blid2_tripm_pane_g3

0x770d,	// (0x000a431a) blid2_tripm_pane_g4_ParamLimits

0x770d,	// (0x000a431a) blid2_tripm_pane_g4

0x7719,	// (0x000a4326) blid2_tripm_pane_g5_ParamLimits

0x7719,	// (0x000a4326) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x000ac6fb) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x000ac6fb) blid2_tripm_pane_g

0x7735,	// (0x000a4342) blid2_tripm_pane_t1_ParamLimits

0x7735,	// (0x000a4342) blid2_tripm_pane_t1

0x7747,	// (0x000a4354) blid2_tripm_pane_t2_ParamLimits

0x7747,	// (0x000a4354) blid2_tripm_pane_t2

0x7759,	// (0x000a4366) blid2_tripm_pane_t3_ParamLimits

0x7759,	// (0x000a4366) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x000ac708) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x000ac708) blid2_tripm_pane_t

0x778b,	// (0x000a4398) cell_blid2_satellite_pane_ParamLimits

0x778b,	// (0x000a4398) cell_blid2_satellite_pane

0x77a9,	// (0x000a43b6) cell_blid2_satellite_pane_g1

0xddfb,	// (0x000aaa08) cell_blid2_satellite_pane_t1

0xce8f,	// (0x000a9a9c) blid2_speed_pane_g1

0xde09,	// (0x000aaa16) blid2_speed_pane_t1

0xde17,	// (0x000aaa24) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x000ac711) blid2_speed_pane_t

0xce8f,	// (0x000a9a9c) blid2_navig_ring_pane_g1

0x77b2,	// (0x000a43bf) blid2_navig_ring_pane_g2

0x77ba,	// (0x000a43c7) blid2_navig_ring_pane_g3

0x77c2,	// (0x000a43cf) blid2_navig_ring_pane_g4

0x77ca,	// (0x000a43d7) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x000ac716) blid2_navig_ring_pane_g

0x9de7,	// (0x000a69f4) bg_popup_window_pane_cp011

0xde25,	// (0x000aaa32) popup_blid2_search_window_g1

0xde2d,	// (0x000aaa3a) popup_blid2_search_window_t1

0xde3b,	// (0x000aaa48) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x000ac721) popup_blid2_search_window_t

0xacaa,	// (0x000a78b7) main_browser_pane_g1

0xa9b6,	// (0x000a75c3) main_browser_pane_ParamLimits

0x41c4,	// (0x000a0dd1) bg_button_pane_cp011_ParamLimits

0x6747,	// (0x000a3354) cell_vitu2_function_pane_g1_ParamLimits

0xca57,	// (0x000a9664) bg_popup_sub_pane_cp22_ParamLimits

0x70b9,	// (0x000a3cc6) input_focus_pane_cp08_ParamLimits

0x70d0,	// (0x000a3cdd) popup_vitu2_query_button_pane_ParamLimits

0x70d0,	// (0x000a3cdd) popup_vitu2_query_button_pane

0x70e1,	// (0x000a3cee) popup_vitu2_query_input_button_pane

0xdaa4,	// (0x000aa6b1) popup_vitu2_query_window_g1_ParamLimits

0x70eb,	// (0x000a3cf8) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000ac629) popup_vitu2_query_window_g_ParamLimits

0x9de7,	// (0x000a69f4) bg_button_pane_cp026

0x77d2,	// (0x000a43df) popup_vitu2_query_input_button_pane_g1

0x9de7,	// (0x000a69f4) bg_button_pane_cp025

0xde49,	// (0x000aaa56) popup_vitu2_query_button_pane_t1

0x4c68,	// (0x000a1875) main_mp3_pane_t6

0x4c78,	// (0x000a1885) popup_slider_window_cp01

0x6374,	// (0x000a2f81) cam4_battery_pane

0x6452,	// (0x000a305f) cam4_battery_pane_cp02

0x7526,	// (0x000a4133) cam4_battery_pane_cp01

0x7526,	// (0x000a4133) cam4_battery_pane_cp03

0xdd8b,	// (0x000aa998) cam4_battery_pane_g1

0xce8f,	// (0x000a9a9c) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x000ac726) cam4_battery_pane_g

0xcd55,	// (0x000a9962) popup_blid_sat_info2_window_t11

0xb473,	// (0x000a8080) aid_size_touch_mv_arrow_left_ParamLimits

0xb49e,	// (0x000a80ab) aid_size_touch_mv_arrow_right_ParamLimits

0xb4fc,	// (0x000a8109) navi_pane_g1_ParamLimits

0xb508,	// (0x000a8115) navi_pane_g2_ParamLimits

0xb536,	// (0x000a8143) navi_pane_g3_ParamLimits

0xf3e1,	// (0x000abfee) navi_pane_g_ParamLimits

0x3471,	// (0x000a007e) navi_pane_mv_t1_ParamLimits

0x5815,	// (0x000a2422) grid_imed_effect_pane_ParamLimits

0x1ed5,	// (0x0009eae2) aid_placing_vt_slider_lsc

0xabf5,	// (0x000a7802) aid_placing_vt_slider_prt

0xad4f,	// (0x000a795c) bg_tb_trans_pane_cp01_ParamLimits

0xcfd6,	// (0x000a9be3) popup_image_details_window_g1_ParamLimits

0xcfe9,	// (0x000a9bf6) popup_image_details_window_g2_ParamLimits

0xcffe,	// (0x000a9c0b) popup_image_details_window_g3_ParamLimits

0xcffe,	// (0x000a9c0b) popup_image_details_window_g3

0xf714,	// (0x000ac321) popup_image_details_window_g_ParamLimits

0xd012,	// (0x000a9c1f) popup_image_details_window_t1_ParamLimits

0xd024,	// (0x000a9c31) popup_image_details_window_t2_ParamLimits

0xd03d,	// (0x000a9c4a) popup_image_details_window_t3_ParamLimits

0xd051,	// (0x000a9c5e) popup_image_details_window_t4_ParamLimits

0xd06c,	// (0x000a9c79) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x000ac328) popup_image_details_window_t_ParamLimits

0x7452,	// (0x000a405f) cl_header_name_pane_ParamLimits

0x7452,	// (0x000a405f) cl_header_name_pane

0x77da,	// (0x000a43e7) cl_header_name_pane_t1_ParamLimits

0x77da,	// (0x000a43e7) cl_header_name_pane_t1

0x77f1,	// (0x000a43fe) cl_header_name_pane_t2_ParamLimits

0x77f1,	// (0x000a43fe) cl_header_name_pane_t2

0x781b,	// (0x000a4428) cl_header_name_pane_t3_ParamLimits

0x781b,	// (0x000a4428) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x000ac72b) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x000ac72b) cl_header_name_pane_t

0xb5c5,	// (0x000a81d2) navi_pane_mv_g2_ParamLimits

0xd7fe,	// (0x000aa40b) field_vitu2_entry_pane_g1_ParamLimits

0xd80a,	// (0x000aa417) field_vitu2_entry_pane_g2_ParamLimits

0xd816,	// (0x000aa423) field_vitu2_entry_pane_g3_ParamLimits

0xd816,	// (0x000aa423) field_vitu2_entry_pane_g3

0xf91b,	// (0x000ac528) field_vitu2_entry_pane_g_ParamLimits

0x66db,	// (0x000a32e8) cell_vitu2_itu_pane_g1_ParamLimits

0x66ed,	// (0x000a32fa) cell_vitu2_itu_pane_g2_ParamLimits

0x66ed,	// (0x000a32fa) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000ac534) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000ac534) cell_vitu2_itu_pane_g

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp05_ParamLimits

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp05

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp03

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp04

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp10_ParamLimits

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp10

0x73f4,	// (0x000a4001) bg_vkb2_func_pane_cp08

0x73da,	// (0x000a3fe7) bg_vkb2_func_pane_cp06

0x73e8,	// (0x000a3ff5) bg_vkb2_func_pane_cp07

0xdd28,	// (0x000aa935) bg_vkb2_func_pane_cp11_ParamLimits

0xdd28,	// (0x000aa935) bg_vkb2_func_pane_cp11

0xdd3d,	// (0x000aa94a) bg_vkb2_func_pane_cp12_ParamLimits

0xdd3d,	// (0x000aa94a) bg_vkb2_func_pane_cp12

0x9de7,	// (0x000a69f4) bg_vkb2_func_pane_cp09

0xd836,	// (0x000aa443) bg_vkb2_func_pane_g1

0xae4a,	// (0x000a7a57) bg_vkb2_func_pane_g2

0xd83e,	// (0x000aa44b) bg_vkb2_func_pane_g3

0xd846,	// (0x000aa453) bg_vkb2_func_pane_g4

0xda69,	// (0x000aa676) bg_vkb2_func_pane_g5

0xd85e,	// (0x000aa46b) bg_vkb2_func_pane_g6

0xd866,	// (0x000aa473) bg_vkb2_func_pane_g7

0xd856,	// (0x000aa463) bg_vkb2_func_pane_g8

0xae2a,	// (0x000a7a37) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x000ac732) bg_vkb2_func_pane_g

0x7727,	// (0x000a4334) blid2_tripm_pane_g6_ParamLimits

0x7727,	// (0x000a4334) blid2_tripm_pane_g6

0xd74a,	// (0x000aa357) mp4_progress_pane_g1

0x777f,	// (0x000a438c) blid2_tripm_values_pane_ParamLimits

0x777f,	// (0x000a438c) blid2_tripm_values_pane

0x7840,	// (0x000a444d) blid2_tripm_values_pane_t1

0x784e,	// (0x000a445b) blid2_tripm_values_pane_t2

0x785c,	// (0x000a4469) blid2_tripm_values_pane_t3

0x786a,	// (0x000a4477) blid2_tripm_values_pane_t4

0x7878,	// (0x000a4485) blid2_tripm_values_pane_t5

0x7886,	// (0x000a4493) blid2_tripm_values_pane_t6

0x7894,	// (0x000a44a1) blid2_tripm_values_pane_t7

0x78a2,	// (0x000a44af) blid2_tripm_values_pane_t8

0x78b0,	// (0x000a44bd) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x000ac745) blid2_tripm_values_pane_t

0x1f13,	// (0x0009eb20) call_video_pane_t1_ParamLimits

0x1f30,	// (0x0009eb3d) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000abe77) call_video_pane_t_ParamLimits

0x39cc,	// (0x000a05d9) msg_header_pane_g1_ParamLimits

0xb7b1,	// (0x000a83be) msg_header_pane_g2_ParamLimits

0xb7b1,	// (0x000a83be) msg_header_pane_g2

0x0001,

0xf484,	// (0x000ac091) msg_header_pane_g_ParamLimits

0xf484,	// (0x000ac091) msg_header_pane_g

0xa9b6,	// (0x000a75c3) main_clock2_pane_ParamLimits

0x558e,	// (0x000a219b) grid_clock2_toolbar_pane_ParamLimits

0x558e,	// (0x000a219b) grid_clock2_toolbar_pane

0x558e,	// (0x000a219b) listscroll_clock2_pane_ParamLimits

0x558e,	// (0x000a219b) listscroll_clock2_pane

0x563d,	// (0x000a224a) main_clock2_pane_t3_ParamLimits

0x563d,	// (0x000a224a) main_clock2_pane_t3

0x564f,	// (0x000a225c) main_clock2_pane_t4_ParamLimits

0x564f,	// (0x000a225c) main_clock2_pane_t4

0xde57,	// (0x000aaa64) cell_clock2_toolbar_pane

0xde5f,	// (0x000aaa6c) cell_clock2_toolbar_pane_cp01

0xde5f,	// (0x000aaa6c) cell_clock2_toolbar_pane_cp02

0xde67,	// (0x000aaa74) cell_clock2_toolbar_pane_cp03

0xde6f,	// (0x000aaa7c) list_clock2_pane

0xb3f8,	// (0x000a8005) scroll_pane_cp10

0xde77,	// (0x000aaa84) list_single_clock2_pane_ParamLimits

0xde77,	// (0x000aaa84) list_single_clock2_pane

0xab5e,	// (0x000a776b) list_highlight_pane_cp08

0xde84,	// (0x000aaa91) list_single_clock2_pane_t1

0xde92,	// (0x000aaa9f) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x000ac758) list_single_clock2_pane_t

0x9de7,	// (0x000a69f4) bg_button_pane_cp10

0xdea0,	// (0x000aaaad) cell_clock2_toolbar_pane_g1

0x39f2,	// (0x000a05ff) aid_main_viewer_pane_g1_ParamLimits

0x39f2,	// (0x000a05ff) aid_main_viewer_pane_g1

0x39fe,	// (0x000a060b) aid_main_viewer_pane_g2_ParamLimits

0x39fe,	// (0x000a060b) aid_main_viewer_pane_g2

0x3a0a,	// (0x000a0617) aid_main_viewer_pane_g3_ParamLimits

0x3a0a,	// (0x000a0617) aid_main_viewer_pane_g3

0x3a1b,	// (0x000a0628) aid_main_viewer_pane_g4_ParamLimits

0x3a1b,	// (0x000a0628) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x000ac0a2) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x000ac0a2) aid_main_viewer_pane_g

0x41a5,	// (0x000a0db2) main_calc_pane_ParamLimits

0x41d2,	// (0x000a0ddf) main_dialer2_pane_ParamLimits

0x0ebe,	// (0x0009dacb) main_cam6_pane

0x0ebe,	// (0x0009dacb) main_vid6_pane

0x559a,	// (0x000a21a7) listscroll_gen_pane_cp06_ParamLimits

0x559a,	// (0x000a21a7) listscroll_gen_pane_cp06

0x5661,	// (0x000a226e) main_clock2_pane_t5_ParamLimits

0x5661,	// (0x000a226e) main_clock2_pane_t5

0x56ae,	// (0x000a22bb) aid_call2_pane_cp10_ParamLimits

0x56c0,	// (0x000a22cd) aid_call_pane_cp10_ParamLimits

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56d2,	// (0x000a22df) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56d2,	// (0x000a22df) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb467,	// (0x000a8074) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x000ac3dd) popup_clock_analogue_window_cp10_g_ParamLimits

0x56e8,	// (0x000a22f5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f02,	// (0x000a2b0f) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f02,	// (0x000a2b0f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000ac4c7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000ac4c7) cell_dialer2_keypad_pane_g

0x5f1e,	// (0x000a2b2b) cell_dialer2_keypad_pane_t1

0x6a24,	// (0x000a3631) main_cset_text2_pane_ParamLimits

0x6a24,	// (0x000a3631) main_cset_text2_pane

0xdc90,	// (0x000aa89d) area_vitu2_query_pane_g1_ParamLimits

0x7379,	// (0x000a3f86) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ac67c) area_vitu2_query_pane_g_ParamLimits

0xa639,	// (0x000a7246) area_vitu2_query_pane_t7_ParamLimits

0xa639,	// (0x000a7246) area_vitu2_query_pane_t7

0x73da,	// (0x000a3fe7) bg_button_pane_cp018_ParamLimits

0x73e8,	// (0x000a3ff5) bg_button_pane_cp021_ParamLimits

0x73f4,	// (0x000a4001) bg_button_pane_cp022_ParamLimits

0x73f4,	// (0x000a4001) bg_vkb2_func_pane_cp08_ParamLimits

0x73da,	// (0x000a3fe7) bg_vkb2_func_pane_cp06_ParamLimits

0x73e8,	// (0x000a3ff5) bg_vkb2_func_pane_cp07_ParamLimits

0x7405,	// (0x000a4012) input_focus_pane_cp09_ParamLimits

0x78be,	// (0x000a44cb) cam6_autofocus_pane_ParamLimits

0x78be,	// (0x000a44cb) cam6_autofocus_pane

0x78e0,	// (0x000a44ed) cam6_image_uncrop_pane_ParamLimits

0x78e0,	// (0x000a44ed) cam6_image_uncrop_pane

0x790d,	// (0x000a451a) cam6_indi_pane_ParamLimits

0x790d,	// (0x000a451a) cam6_indi_pane

0x7927,	// (0x000a4534) cam6_mode_pane_ParamLimits

0x7927,	// (0x000a4534) cam6_mode_pane

0x793b,	// (0x000a4548) cam6_timer_pane_ParamLimits

0x793b,	// (0x000a4548) cam6_timer_pane

0x7947,	// (0x000a4554) cam6_zoom_pane_ParamLimits

0x7947,	// (0x000a4554) cam6_zoom_pane

0x7963,	// (0x000a4570) cam6_mode_pane_g1_ParamLimits

0x7963,	// (0x000a4570) cam6_mode_pane_g1

0x796f,	// (0x000a457c) cam6_mode_pane_g2_ParamLimits

0x796f,	// (0x000a457c) cam6_mode_pane_g2

0x797b,	// (0x000a4588) cam6_mode_pane_g3_ParamLimits

0x797b,	// (0x000a4588) cam6_mode_pane_g3

0x7987,	// (0x000a4594) cam6_mode_pane_g4_ParamLimits

0x7987,	// (0x000a4594) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x000ac75d) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x000ac75d) cam6_mode_pane_g

0xdd95,	// (0x000aa9a2) bg_tb_trans_pane_cp08_ParamLimits

0xdd95,	// (0x000aa9a2) bg_tb_trans_pane_cp08

0xdea8,	// (0x000aaab5) cam6_battery_pane_ParamLimits

0xdea8,	// (0x000aaab5) cam6_battery_pane

0xdebe,	// (0x000aaacb) cam6_indi_pane_g1_ParamLimits

0xdebe,	// (0x000aaacb) cam6_indi_pane_g1

0xded0,	// (0x000aaadd) cam6_indi_pane_g2_ParamLimits

0xded0,	// (0x000aaadd) cam6_indi_pane_g2

0xdee2,	// (0x000aaaef) cam6_indi_pane_g3_ParamLimits

0xdee2,	// (0x000aaaef) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x000ac766) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x000ac766) cam6_indi_pane_g

0xdef4,	// (0x000aab01) cam6_indi_pane_t1_ParamLimits

0xdef4,	// (0x000aab01) cam6_indi_pane_t1

0x64d6,	// (0x000a30e3) cam6_autofocus_pane_g1

0x64ce,	// (0x000a30db) cam6_autofocus_pane_g2

0x64e6,	// (0x000a30f3) cam6_autofocus_pane_g3

0x64de,	// (0x000a30eb) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x000ac76d) cam6_autofocus_pane_g

0xdf1a,	// (0x000aab27) cam6_timer_pane_g1

0xdf22,	// (0x000aab2f) cam6_timer_pane_t1

0xdf30,	// (0x000aab3d) cam6_zoom_cont_pane

0xdf38,	// (0x000aab45) cam6_zoom_pane_g1

0xdf40,	// (0x000aab4d) cam6_zoom_pane_g2

0x7993,	// (0x000a45a0) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x000ac776) cam6_zoom_pane_g

0xce8f,	// (0x000a9a9c) cam6_battery_pane_g1

0xce8f,	// (0x000a9a9c) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x000ac2e5) cam6_battery_pane_g

0xdf48,	// (0x000aab55) cam6_zoom_cont_pane_g1

0xdf51,	// (0x000aab5e) cam6_zoom_cont_pane_g2

0xdf5a,	// (0x000aab67) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x000ac77d) cam6_zoom_cont_pane_g

0x79b0,	// (0x000a45bd) cam6_mode_pane_cp_ParamLimits

0x79b0,	// (0x000a45bd) cam6_mode_pane_cp

0x79c4,	// (0x000a45d1) cam6_zoom_pane_cp_ParamLimits

0x79c4,	// (0x000a45d1) cam6_zoom_pane_cp

0x79e0,	// (0x000a45ed) vid6_image_uncrop_cif_pane_ParamLimits

0x79e0,	// (0x000a45ed) vid6_image_uncrop_cif_pane

0x7a0c,	// (0x000a4619) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a0c,	// (0x000a4619) vid6_image_uncrop_nhd_pane

0x7a2b,	// (0x000a4638) vid6_image_uncrop_vga_pane_ParamLimits

0x7a2b,	// (0x000a4638) vid6_image_uncrop_vga_pane

0x7a4a,	// (0x000a4657) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a4a,	// (0x000a4657) vid6_image_uncrop_wvga_pane

0x7a69,	// (0x000a4676) vid6_indi_pane_ParamLimits

0x7a69,	// (0x000a4676) vid6_indi_pane

0xdd95,	// (0x000aa9a2) bg_tb_trans_pane_cp09_ParamLimits

0xdd95,	// (0x000aa9a2) bg_tb_trans_pane_cp09

0xdf72,	// (0x000aab7f) cam6_battery_pane_cp_ParamLimits

0xdf72,	// (0x000aab7f) cam6_battery_pane_cp

0xdf7e,	// (0x000aab8b) vid6_indi_pane_g1_ParamLimits

0xdf7e,	// (0x000aab8b) vid6_indi_pane_g1

0xdf90,	// (0x000aab9d) vid6_indi_pane_g2_ParamLimits

0xdf90,	// (0x000aab9d) vid6_indi_pane_g2

0xdfa2,	// (0x000aabaf) vid6_indi_pane_g3_ParamLimits

0xdfa2,	// (0x000aabaf) vid6_indi_pane_g3

0xdfb9,	// (0x000aabc6) vid6_indi_pane_g4_ParamLimits

0xdfb9,	// (0x000aabc6) vid6_indi_pane_g4

0xdfd0,	// (0x000aabdd) vid6_indi_pane_g5_ParamLimits

0xdfd0,	// (0x000aabdd) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x000ac784) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x000ac784) vid6_indi_pane_g

0xdfea,	// (0x000aabf7) vid6_indi_pane_t1_ParamLimits

0xdfea,	// (0x000aabf7) vid6_indi_pane_t1

0xe000,	// (0x000aac0d) vid6_indi_pane_t2_ParamLimits

0xe000,	// (0x000aac0d) vid6_indi_pane_t2

0xe028,	// (0x000aac35) vid6_indi_pane_t3_ParamLimits

0xe028,	// (0x000aac35) vid6_indi_pane_t3

0xe050,	// (0x000aac5d) vid6_indi_pane_t4_ParamLimits

0xe050,	// (0x000aac5d) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x000ac78f) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x000ac78f) vid6_indi_pane_t

0xe074,	// (0x000aac81) wait_bar_pane_cp08

0x7a8e,	// (0x000a469b) main_cset_text2_pane_t1_ParamLimits

0x7a8e,	// (0x000a469b) main_cset_text2_pane_t1

0x799b,	// (0x000a45a8) listscroll_gen_pane_cp06_t1_ParamLimits

0x799b,	// (0x000a45a8) listscroll_gen_pane_cp06_t1

0x0ebe,	// (0x0009dacb) main_cam6_set_pane

0x6366,	// (0x000a2f73) bg_tb_trans_pane_cp06_ParamLimits

0x637c,	// (0x000a2f89) cam4_indicators_pane_g1_ParamLimits

0x638d,	// (0x000a2f9a) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000ac504) cam4_indicators_pane_g_ParamLimits

0x63a5,	// (0x000a2fb2) cam4_indicators_pane_t1_ParamLimits

0x41c4,	// (0x000a0dd1) bg_tb_trans_pane_cp07_ParamLimits

0x645c,	// (0x000a3069) vid4_indicators_pane_g1_ParamLimits

0x6472,	// (0x000a307f) vid4_indicators_pane_g2_ParamLimits

0x6486,	// (0x000a3093) vid4_indicators_pane_g3_ParamLimits

0x6499,	// (0x000a30a6) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000ac516) vid4_indicators_pane_g_ParamLimits

0x64b7,	// (0x000a30c4) vid4_indicators_pane_t1_ParamLimits

0x752e,	// (0x000a413b) vid4_progress_pane_g1_ParamLimits

0x753e,	// (0x000a414b) vid4_progress_pane_g2_ParamLimits

0x754e,	// (0x000a415b) vid4_progress_pane_g3_ParamLimits

0x638d,	// (0x000a2f9a) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ac6c7) vid4_progress_pane_g_ParamLimits

0x7560,	// (0x000a416d) vid4_progress_pane_t1_ParamLimits

0x7576,	// (0x000a4183) vid4_progress_pane_t2_ParamLimits

0x758b,	// (0x000a4198) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ac6d2) vid4_progress_pane_t_ParamLimits

0x75a0,	// (0x000a41ad) wait_bar_pane_cp07_ParamLimits

0x7ab5,	// (0x000a46c2) main_cam6_set_pane_g2_ParamLimits

0x7ab5,	// (0x000a46c2) main_cam6_set_pane_g2

0x7ac1,	// (0x000a46ce) main_cset6_listscroll_pane_ParamLimits

0x7ac1,	// (0x000a46ce) main_cset6_listscroll_pane

0x7aee,	// (0x000a46fb) main_cset6_slider_pane_ParamLimits

0x7aee,	// (0x000a46fb) main_cset6_slider_pane

0x7afa,	// (0x000a4707) main_cset6_text2_pane_ParamLimits

0x7afa,	// (0x000a4707) main_cset6_text2_pane

0xe083,	// (0x000aac90) main_cset6_text_pane

0xe08b,	// (0x000aac98) main_cset_list_pane_copy1_ParamLimits

0xe08b,	// (0x000aac98) main_cset_list_pane_copy1

0xe09b,	// (0x000aaca8) scroll_pane_cp028_copy1

0x7b0d,	// (0x000a471a) cset_list_set_pane_copy1

0x7b1d,	// (0x000a472a) aid_position_infowindow_above_copy1

0x7b25,	// (0x000a4732) aid_position_infowindow_below_copy1

0x7b2d,	// (0x000a473a) cset_list_set_pane_g1_copy1

0x7b35,	// (0x000a4742) cset_list_set_pane_g3_copy1_ParamLimits

0x7b35,	// (0x000a4742) cset_list_set_pane_g3_copy1

0x7b44,	// (0x000a4751) cset_list_set_pane_t1_copy1_ParamLimits

0x7b44,	// (0x000a4751) cset_list_set_pane_t1_copy1

0xad4f,	// (0x000a795c) list_highlight_pane_cp021_copy1_ParamLimits

0xad4f,	// (0x000a795c) list_highlight_pane_cp021_copy1

0xe0a4,	// (0x000aacb1) cset6_slider_pane_ParamLimits

0xe0a4,	// (0x000aacb1) cset6_slider_pane

0xe0d0,	// (0x000aacdd) main_cset6_slider_pane_g1_ParamLimits

0xe0d0,	// (0x000aacdd) main_cset6_slider_pane_g1

0x7b59,	// (0x000a4766) main_cset6_slider_pane_g2_ParamLimits

0x7b59,	// (0x000a4766) main_cset6_slider_pane_g2

0xe0f8,	// (0x000aad05) main_cset6_slider_pane_g3_ParamLimits

0xe0f8,	// (0x000aad05) main_cset6_slider_pane_g3

0x7b81,	// (0x000a478e) main_cset6_slider_pane_g4_ParamLimits

0x7b81,	// (0x000a478e) main_cset6_slider_pane_g4

0x7b8d,	// (0x000a479a) main_cset6_slider_pane_g5_ParamLimits

0x7b8d,	// (0x000a479a) main_cset6_slider_pane_g5

0xd972,	// (0x000aa57f) main_cset6_slider_pane_g7_ParamLimits

0xd972,	// (0x000aa57f) main_cset6_slider_pane_g7

0xd97e,	// (0x000aa58b) main_cset6_slider_pane_g8_ParamLimits

0xd97e,	// (0x000aa58b) main_cset6_slider_pane_g8

0x7b99,	// (0x000a47a6) main_cset6_slider_pane_g9_ParamLimits

0x7b99,	// (0x000a47a6) main_cset6_slider_pane_g9

0x7ba5,	// (0x000a47b2) main_cset6_slider_pane_g10_ParamLimits

0x7ba5,	// (0x000a47b2) main_cset6_slider_pane_g10

0x7bb1,	// (0x000a47be) main_cset6_slider_pane_g11_ParamLimits

0x7bb1,	// (0x000a47be) main_cset6_slider_pane_g11

0x7bbd,	// (0x000a47ca) main_cset6_slider_pane_g12_ParamLimits

0x7bbd,	// (0x000a47ca) main_cset6_slider_pane_g12

0x7bc9,	// (0x000a47d6) main_cset6_slider_pane_g13_ParamLimits

0x7bc9,	// (0x000a47d6) main_cset6_slider_pane_g13

0x7bd5,	// (0x000a47e2) main_cset6_slider_pane_g14_ParamLimits

0x7bd5,	// (0x000a47e2) main_cset6_slider_pane_g14

0x7be1,	// (0x000a47ee) main_cset6_slider_pane_g15_ParamLimits

0x7be1,	// (0x000a47ee) main_cset6_slider_pane_g15

0x7bf9,	// (0x000a4806) main_cset6_slider_pane_g16_ParamLimits

0x7bf9,	// (0x000a4806) main_cset6_slider_pane_g16

0x7c05,	// (0x000a4812) main_cset6_slider_pane_g17_ParamLimits

0x7c05,	// (0x000a4812) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x000ac798) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x000ac798) main_cset6_slider_pane_g

0xe104,	// (0x000aad11) main_cset6_slider_pane_t1_ParamLimits

0xe104,	// (0x000aad11) main_cset6_slider_pane_t1

0x7c29,	// (0x000a4836) main_cset6_slider_pane_t2_ParamLimits

0x7c29,	// (0x000a4836) main_cset6_slider_pane_t2

0x7c54,	// (0x000a4861) main_cset6_slider_pane_t3_ParamLimits

0x7c54,	// (0x000a4861) main_cset6_slider_pane_t3

0x7c7f,	// (0x000a488c) main_cset6_slider_pane_t4_ParamLimits

0x7c7f,	// (0x000a488c) main_cset6_slider_pane_t4

0x7caa,	// (0x000a48b7) main_cset6_slider_pane_t5_ParamLimits

0x7caa,	// (0x000a48b7) main_cset6_slider_pane_t5

0xe145,	// (0x000aad52) main_cset6_slider_pane_t7_ParamLimits

0xe145,	// (0x000aad52) main_cset6_slider_pane_t7

0x7cd5,	// (0x000a48e2) main_cset6_slider_pane_t8_ParamLimits

0x7cd5,	// (0x000a48e2) main_cset6_slider_pane_t8

0x7cf9,	// (0x000a4906) main_cset6_slider_pane_t9_ParamLimits

0x7cf9,	// (0x000a4906) main_cset6_slider_pane_t9

0x7d1d,	// (0x000a492a) main_cset6_slider_pane_t10_ParamLimits

0x7d1d,	// (0x000a492a) main_cset6_slider_pane_t10

0x7d41,	// (0x000a494e) main_cset6_slider_pane_t11_ParamLimits

0x7d41,	// (0x000a494e) main_cset6_slider_pane_t11

0xe17b,	// (0x000aad88) main_cset6_slider_pane_t14_ParamLimits

0xe17b,	// (0x000aad88) main_cset6_slider_pane_t14

0xe1c2,	// (0x000aadcf) main_cset6_slider_pane_t15_ParamLimits

0xe1c2,	// (0x000aadcf) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x000ac7bd) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x000ac7bd) main_cset6_slider_pane_t

0xe1fb,	// (0x000aae08) cset_slider_pane_g1_copy1

0xe204,	// (0x000aae11) cset_slider_pane_g2_copy1

0xe20d,	// (0x000aae1a) cset_slider_pane_g3_copy1

0x9de7,	// (0x000a69f4) bg_popup_sub_pane_cp011_copy1

0xe216,	// (0x000aae23) main_cset_text_pane_g1_copy1

0xdab8,	// (0x000aa6c5) main_cset_text_pane_t1_copy1

0xdac6,	// (0x000aa6d3) main_cset_text_pane_t2_copy1

0xdad4,	// (0x000aa6e1) main_cset_text_pane_t3_copy1

0xdae2,	// (0x000aa6ef) main_cset_text_pane_t4_copy1

0xdaf0,	// (0x000aa6fd) main_cset_text_pane_t5_copy1

0xe21e,	// (0x000aae2b) main_cset_text_pane_t6_copy1

0xe22c,	// (0x000aae39) main_cset_text_pane_t7_copy1

0x7e3b,	// (0x000a4a48) main_cset_text2_pane_t1_copy1

0x41c4,	// (0x000a0dd1) main_ncimui_pane

0x422b,	// (0x000a0e38) popup_query_ncimui_window_ParamLimits

0x422b,	// (0x000a0e38) popup_query_ncimui_window

0xad66,	// (0x000a7973) field_cale_ev2_pane_g4_ParamLimits

0xad66,	// (0x000a7973) field_cale_ev2_pane_g4

0x5bda,	// (0x000a27e7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5bda,	// (0x000a27e7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x000ac49e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x000ac49e) cell_video_dialer_keypad_pane_g

0x5bf2,	// (0x000a27ff) cell_video_dialer_keypad_pane_t1

0x9de7,	// (0x000a69f4) bg_popup_window_pane_cp012

0xb2e4,	// (0x000a7ef1) heading_pane_cp06

0xe258,	// (0x000aae65) ncim_query_content_pane

0x9de7,	// (0x000a69f4) bg_popup_heading_pane_cp01

0xe260,	// (0x000aae6d) ncim_heading_pane_t1

0xe26e,	// (0x000aae7b) ncim_indicator_popup_pane

0xe280,	// (0x000aae8d) ncim_query_button_pane

0xe296,	// (0x000aaea3) ncim_query_content_pane_t1

0xe2a8,	// (0x000aaeb5) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x000ac801) ncim_query_content_pane_t

0xe2e2,	// (0x000aaeef) ncim_query_list_pane

0xe2f4,	// (0x000aaf01) ncim_query_popup_pane

0xe26e,	// (0x000aae7b) ncim_indicator_popup_pane_ParamLimits

0x7f97,	// (0x000a4ba4) ncim_query_content_pane_g1_ParamLimits

0x7f97,	// (0x000a4ba4) ncim_query_content_pane_g1

0xe296,	// (0x000aaea3) ncim_query_content_pane_t1_ParamLimits

0xe2a8,	// (0x000aaeb5) ncim_query_content_pane_t2_ParamLimits

0x7fa3,	// (0x000a4bb0) ncim_query_content_pane_t3_ParamLimits

0x7fa3,	// (0x000a4bb0) ncim_query_content_pane_t3

0x7fc0,	// (0x000a4bcd) ncim_query_content_pane_t4_ParamLimits

0x7fc0,	// (0x000a4bcd) ncim_query_content_pane_t4

0x7fdd,	// (0x000a4bea) ncim_query_content_pane_t5_ParamLimits

0x7fdd,	// (0x000a4bea) ncim_query_content_pane_t5

0xe2ba,	// (0x000aaec7) ncim_query_content_pane_t6_ParamLimits

0xe2ba,	// (0x000aaec7) ncim_query_content_pane_t6

0xfbf4,	// (0x000ac801) ncim_query_content_pane_t_ParamLimits

0xe2e2,	// (0x000aaeef) ncim_query_list_pane_ParamLimits

0xe2f4,	// (0x000aaf01) ncim_query_popup_pane_ParamLimits

0xe308,	// (0x000aaf15) wait_bar_pane_cp04

0x9de7,	// (0x000a69f4) input_focus_pane_cp011

0xe310,	// (0x000aaf1d) ncim_query_popup_pane_t1

0xe31e,	// (0x000aaf2b) ncim_list_query_list_pane_ParamLimits

0xe31e,	// (0x000aaf2b) ncim_list_query_list_pane

0x9de7,	// (0x000a69f4) bg_button_pane_cp027

0xe331,	// (0x000aaf3e) ncim_query_button_pane_g1

0x9de7,	// (0x000a69f4) list_highlight_pane_cp012

0xe33b,	// (0x000aaf48) ncim_list_query_list_pane_g1

0xe343,	// (0x000aaf50) ncim_list_query_list_pane_t1

0x6399,	// (0x000a2fa6) cam4_indicators_pane_g3_ParamLimits

0x6399,	// (0x000a2fa6) cam4_indicators_pane_g3

0x64a5,	// (0x000a30b2) vid4_indicators_pane_g5_ParamLimits

0x64a5,	// (0x000a30b2) vid4_indicators_pane_g5

0x6399,	// (0x000a2fa6) vid4_progress_pane_g5_ParamLimits

0x6399,	// (0x000a2fa6) vid4_progress_pane_g5

0x7e6d,	// (0x000a4a7a) main_ncimui_pane_g1

0x7ed9,	// (0x000a4ae6) ncimui_group_query_pane_ParamLimits

0x7ed9,	// (0x000a4ae6) ncimui_group_query_pane

0x7f33,	// (0x000a4b40) ncimui_list_pane_ParamLimits

0x7f33,	// (0x000a4b40) ncimui_list_pane

0x7f5a,	// (0x000a4b67) ncimui_text_pane_ParamLimits

0x7f5a,	// (0x000a4b67) ncimui_text_pane

0x7ffa,	// (0x000a4c07) ncimui_text_pane_t1_ParamLimits

0x7ffa,	// (0x000a4c07) ncimui_text_pane_t1

0xe351,	// (0x000aaf5e) ncimui_list_single_graphic_pane_ParamLimits

0xe351,	// (0x000aaf5e) ncimui_list_single_graphic_pane

0x8019,	// (0x000a4c26) ncimui_query_pane_ParamLimits

0x8019,	// (0x000a4c26) ncimui_query_pane

0x9de7,	// (0x000a69f4) list_highlight_pane_cp013

0xe361,	// (0x000aaf6e) ncim_list_query_list_pane_t1_copy1

0xe33b,	// (0x000aaf48) ncim_list_single_graphic_pane_g1

0x802c,	// (0x000a4c39) ncim_query_button_pane_cp01

0x8038,	// (0x000a4c45) ncim_query_entry_pane_ParamLimits

0x8038,	// (0x000a4c45) ncim_query_entry_pane

0x804b,	// (0x000a4c58) ncimui_query_pane_g1

0x8057,	// (0x000a4c64) ncimui_query_pane_t1_ParamLimits

0x8057,	// (0x000a4c64) ncimui_query_pane_t1

0xad4f,	// (0x000a795c) input_focus_pane_cp012

0xe36f,	// (0x000aaf7c) ncim_query_entry_pane_t1

0xa9b6,	// (0x000a75c3) main_im_pane_ParamLimits

0x41c4,	// (0x000a0dd1) main_mobtv_pane_ParamLimits

0x41c4,	// (0x000a0dd1) main_mobtv_pane

0x7c11,	// (0x000a481e) main_cset6_slider_pane_g18_ParamLimits

0x7c11,	// (0x000a481e) main_cset6_slider_pane_g18

0x7c1d,	// (0x000a482a) main_cset6_slider_pane_g19_ParamLimits

0x7c1d,	// (0x000a482a) main_cset6_slider_pane_g19

0xd816,	// (0x000aa423) bg_main_mobtv_pane_ParamLimits

0xd816,	// (0x000aa423) bg_main_mobtv_pane

0x8070,	// (0x000a4c7d) main_mobtv_info_pane

0x807b,	// (0x000a4c88) main_mobtv_loading_pane_ParamLimits

0x807b,	// (0x000a4c88) main_mobtv_loading_pane

0xe381,	// (0x000aaf8e) main_mobtv_pg_channel_list_pane

0xe38b,	// (0x000aaf98) main_mobtv_pg_hdr_pane

0x8088,	// (0x000a4c95) main_mobtv_programe_curr_pane_ParamLimits

0x8088,	// (0x000a4c95) main_mobtv_programe_curr_pane

0x8095,	// (0x000a4ca2) main_mobtv_programe_next_pane_ParamLimits

0x8095,	// (0x000a4ca2) main_mobtv_programe_next_pane

0xe394,	// (0x000aafa1) popup_mobtv_noti_window

0xce8f,	// (0x000a9a9c) main_tv_pg_hdr_pane_g1

0xe39e,	// (0x000aafab) main_tv_pg_hdr_pane_g2

0xe3a6,	// (0x000aafb3) main_tv_pg_hdr_pane_g3

0xe3ae,	// (0x000aafbb) main_tv_pg_hdr_pane_g4

0xe3b6,	// (0x000aafc3) main_tv_pg_hdr_pane_g5

0xe3c0,	// (0x000aafcd) main_tv_pg_hdr_pane_g6

0xe3ca,	// (0x000aafd7) main_tv_pg_hdr_pane_g7

0xe3d4,	// (0x000aafe1) main_tv_pg_hdr_pane_g8

0xe3de,	// (0x000aafeb) main_tv_pg_hdr_pane_g9

0xe3e8,	// (0x000aaff5) main_tv_pg_hdr_pane_g10

0xe3f2,	// (0x000aafff) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x000ac80e) main_tv_pg_hdr_pane_g

0xe3fc,	// (0x000ab009) main_tv_pg_hdr_pane_t1

0xe40a,	// (0x000ab017) main_tv_pg_hdr_pane_t2

0xe418,	// (0x000ab025) main_tv_pg_hdr_pane_t3

0xe428,	// (0x000ab035) main_tv_pg_hdr_pane_t4

0xe438,	// (0x000ab045) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x000ac825) main_tv_pg_hdr_pane_t

0xe448,	// (0x000ab055) single_mobtv_pg_channel_pane_ParamLimits

0xe448,	// (0x000ab055) single_mobtv_pg_channel_pane

0xe45a,	// (0x000ab067) single_mobtv_pg_channel_table_pane

0xe463,	// (0x000ab070) single_mobtv_pg_channel_thumb_pane

0xe46c,	// (0x000ab079) single_tv_pg_channel_pane_g1

0xe475,	// (0x000ab082) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x000ac830) single_tv_pg_channel_pane_g

0xd0be,	// (0x000a9ccb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0be,	// (0x000a9ccb) bg_single_mobtv_pg_channel_thumb_pane

0xe47e,	// (0x000ab08b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe47e,	// (0x000ab08b) single_mobtv_pg_channel_thumb_pane_g1

0xe48c,	// (0x000ab099) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe48c,	// (0x000ab099) single_mobtv_pg_channel_thumb_pane_g2

0xe498,	// (0x000ab0a5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe498,	// (0x000ab0a5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x000ac835) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x000ac835) single_mobtv_pg_channel_thumb_pane_g

0xe4a4,	// (0x000ab0b1) single_mobtv_pg_channel_thumb_pane_t1

0xe4b2,	// (0x000ab0bf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x000ac83c) single_mobtv_pg_channel_thumb_pane_t

0xce8f,	// (0x000a9a9c) bg_single_mobtv_pg_channel_table_pane_g1

0xce8f,	// (0x000a9a9c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x000ac2e5) bg_single_mobtv_pg_channel_table_pane_g

0xe4c0,	// (0x000ab0cd) single_mobtv_pg_channel_table_pane_t1

0xe4ce,	// (0x000ab0db) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x000ac841) single_mobtv_pg_channel_table_pane_t

0x80aa,	// (0x000a4cb7) main_mobtv_info_pane_g1_ParamLimits

0x80aa,	// (0x000a4cb7) main_mobtv_info_pane_g1

0x80c6,	// (0x000a4cd3) main_mobtv_info_pane_t1_ParamLimits

0x80c6,	// (0x000a4cd3) main_mobtv_info_pane_t1

0x813e,	// (0x000a4d4b) main_mobtv_info_pane_t2_ParamLimits

0x813e,	// (0x000a4d4b) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x000ac84b) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x000ac84b) main_mobtv_info_pane_t

0x81cf,	// (0x000a4ddc) wait_bar_pane_cp05

0x81e1,	// (0x000a4dee) main_mobtv_loading_pane_g1_ParamLimits

0x81e1,	// (0x000a4dee) main_mobtv_loading_pane_g1

0x81ed,	// (0x000a4dfa) main_mobtv_loading_pane_g2_ParamLimits

0x81ed,	// (0x000a4dfa) main_mobtv_loading_pane_g2

0x81f9,	// (0x000a4e06) main_mobtv_loading_pane_g3_ParamLimits

0x81f9,	// (0x000a4e06) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x000ac852) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x000ac852) main_mobtv_loading_pane_g

0xe4dc,	// (0x000ab0e9) main_mobtv_loading_pane_t1_ParamLimits

0xe4dc,	// (0x000ab0e9) main_mobtv_loading_pane_t1

0xe4f4,	// (0x000ab101) main_mobtv_loading_pane_t2_ParamLimits

0xe4f4,	// (0x000ab101) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x000ac859) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x000ac859) main_mobtv_loading_pane_t

0x8207,	// (0x000a4e14) wait_bar_pane_cp06_ParamLimits

0x8207,	// (0x000a4e14) wait_bar_pane_cp06

0xe518,	// (0x000ab125) main_mobtv_programe_curr_pane_t1

0xe526,	// (0x000ab133) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x000ac85e) main_mobtv_programe_curr_pane_t

0xe534,	// (0x000ab141) main_mobtv_programe_next_pane_t1

0xe542,	// (0x000ab14f) main_mobtv_programe_next_pane_t2

0xe550,	// (0x000ab15d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x000ac863) main_mobtv_programe_next_pane_t

0x9de7,	// (0x000a69f4) bg_popup_mobtv_noti_window_pane

0xe55e,	// (0x000ab16b) popup_mobtv_noti_window_g1

0xe566,	// (0x000ab173) popup_mobtv_noti_window_t1

0xe574,	// (0x000ab181) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x000ac86a) popup_mobtv_noti_window_t

0xce8f,	// (0x000a9a9c) bg_popup_mobtv_noti_window_pane_g1

0x0ebe,	// (0x0009dacb) sc_clock_pane

0x0ebe,	// (0x0009dacb) main_fs_bigclock_pane

0x776d,	// (0x000a437a) blid2_tripm_pane_t4_ParamLimits

0x776d,	// (0x000a437a) blid2_tripm_pane_t4

0x8213,	// (0x000a4e20) sc_clock_pane_g1_ParamLimits

0x8213,	// (0x000a4e20) sc_clock_pane_g1

0x8221,	// (0x000a4e2e) sc_clock_pane_t1_ParamLimits

0x8221,	// (0x000a4e2e) sc_clock_pane_t1

0x8236,	// (0x000a4e43) sc_clock_pane_t2_ParamLimits

0x8236,	// (0x000a4e43) sc_clock_pane_t2

0x8248,	// (0x000a4e55) sc_clock_pane_t3_ParamLimits

0x8248,	// (0x000a4e55) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x000ac86f) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x000ac86f) sc_clock_pane_t

0x92b7,	// (0x000a5ec4) main_fs_bigclock_indicator_pane_ParamLimits

0x92b7,	// (0x000a5ec4) main_fs_bigclock_indicator_pane

0x82d7,	// (0x000a4ee4) main_fs_bigclock_pane_g1_ParamLimits

0x82d7,	// (0x000a4ee4) main_fs_bigclock_pane_g1

0x92c3,	// (0x000a5ed0) main_fs_bigclock_pane_t1_ParamLimits

0x92c3,	// (0x000a5ed0) main_fs_bigclock_pane_t1

0x92d5,	// (0x000a5ee2) main_fs_bigclock_pane_t2_ParamLimits

0x92d5,	// (0x000a5ee2) main_fs_bigclock_pane_t2

0x92e9,	// (0x000a5ef6) main_fs_bigclock_pane_t3_ParamLimits

0x92e9,	// (0x000a5ef6) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000aca79) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000aca79) main_fs_bigclock_pane_t

0xecf7,	// (0x000ab904) main_fs_bigclock_indicator_pane_g1

0xe288,	// (0x000aae95) ncim_query_content_pane_g2_ParamLimits

0xe288,	// (0x000aae95) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x000ac7fc) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x000ac7fc) ncim_query_content_pane_g

0x825a,	// (0x000a4e67) sc_clock_pane_t4_ParamLimits

0x825a,	// (0x000a4e67) sc_clock_pane_t4

0x41c4,	// (0x000a0dd1) main_radioblah_pane

0x622f,	// (0x000a2e3c) cell_call4_button_pane_t1_copy1_ParamLimits

0x622f,	// (0x000a2e3c) cell_call4_button_pane_t1_copy1

0x7e89,	// (0x000a4a96) main_ncimui_pane_t1_ParamLimits

0x7e89,	// (0x000a4a96) main_ncimui_pane_t1

0x7ea3,	// (0x000a4ab0) main_ncimui_pane_t2_ParamLimits

0x7ea3,	// (0x000a4ab0) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x000ac7f5) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x000ac7f5) main_ncimui_pane_t

0xe582,	// (0x000ab18f) main_radioblah_anim_pane_ParamLimits

0xe582,	// (0x000ab18f) main_radioblah_anim_pane

0xe593,	// (0x000ab1a0) main_radioblah_info_pane_ParamLimits

0xe593,	// (0x000ab1a0) main_radioblah_info_pane

0xe5a7,	// (0x000ab1b4) main_radioblah_pane_t1_ParamLimits

0xe5a7,	// (0x000ab1b4) main_radioblah_pane_t1

0xe5c3,	// (0x000ab1d0) main_radioblah_pane_t2_ParamLimits

0xe5c3,	// (0x000ab1d0) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x000ac890) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x000ac890) main_radioblah_pane_t

0x8476,	// (0x000a5083) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8476,	// (0x000a5083) main_radioblah_rocker_ctrl_pane

0xe61f,	// (0x000ab22c) main_radioblah_info_pane_t1_ParamLimits

0xe61f,	// (0x000ab22c) main_radioblah_info_pane_t1

0x84bf,	// (0x000a50cc) main_radioblah_info_pane_t2_ParamLimits

0x84bf,	// (0x000a50cc) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x000ac899) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x000ac899) main_radioblah_info_pane_t

0xce8f,	// (0x000a9a9c) main_radioblah_rocker_ctrl_pane_g1

0x856f,	// (0x000a517c) main_radioblah_rocker_ctrl_pane_g2

0x8577,	// (0x000a5184) main_radioblah_rocker_ctrl_pane_g3

0x857f,	// (0x000a518c) main_radioblah_rocker_ctrl_pane_g4

0x8587,	// (0x000a5194) main_radioblah_rocker_ctrl_pane_g5

0x858f,	// (0x000a519c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x000ac8a2) main_radioblah_rocker_ctrl_pane_g

0x7e3b,	// (0x000a4a48) main_cset_text2_pane_t1_copy1_ParamLimits

0x62b8,	// (0x000a2ec5) cam4_image_uncrop_qvga_pane

0x640b,	// (0x000a3018) vid4_image_uncrop_qcif_pane

0x78ff,	// (0x000a450c) cam6_image_uncrop_qvga_pane_ParamLimits

0x78ff,	// (0x000a450c) cam6_image_uncrop_qvga_pane

0xdf62,	// (0x000aab6f) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf62,	// (0x000aab6f) vid6_image_uncrop_qcif_pane

0x9de7,	// (0x000a69f4) bg_popup_preview_window_pane_cp03

0xe23a,	// (0x000aae47) list_cset_text2_pane

0xe242,	// (0x000aae4f) main_cset6_text2_pane_g1

0xe24a,	// (0x000aae57) main_cset6_text2_pane_t1

0x8597,	// (0x000a51a4) list_cset_text2_pane_t1_ParamLimits

0x8597,	// (0x000a51a4) list_cset_text2_pane_t1

0x41c4,	// (0x000a0dd1) main_radioblah_pane_ParamLimits

0x81bb,	// (0x000a4dc8) main_mobtv_info_pane_t3_ParamLimits

0x81bb,	// (0x000a4dc8) main_mobtv_info_pane_t3

0x8464,	// (0x000a5071) main_radioblah_pane_g1

0x848f,	// (0x000a509c) main_radioblah_info_pane_g1

0x8514,	// (0x000a5121) main_radioblah_info_pane_t3_ParamLimits

0x8514,	// (0x000a5121) main_radioblah_info_pane_t3

0x2edb,	// (0x0009fae8) highlight_cell_cale_month_pane_ParamLimits

0x2edb,	// (0x0009fae8) highlight_cell_cale_month_pane

0x0ebe,	// (0x0009dacb) main_phob_fisheye_pane

0xd19a,	// (0x000a9da7) scroll_pane_cp0031_ParamLimits

0xd19a,	// (0x000a9da7) scroll_pane_cp0031

0xe074,	// (0x000aac81) wait_bar_pane_cp08_ParamLimits

0x7b0d,	// (0x000a471a) cset_list_set_pane_copy1_ParamLimits

0xe659,	// (0x000ab266) highlight_cell_cale_month_pane_g1

0x85ae,	// (0x000a51bb) highlight_cell_cale_month_pane_t1

0xdce4,	// (0x000aa8f1) list_gen_pane_cp01

0xd95d,	// (0x000aa56a) scroll_pane_01

0x85bc,	// (0x000a51c9) list_single_double_fisheye_pane

0x85c5,	// (0x000a51d2) list_double_fisheye_pane_g1_ParamLimits

0x85c5,	// (0x000a51d2) list_double_fisheye_pane_g1

0x85d1,	// (0x000a51de) list_double_fisheye_pane_g2_ParamLimits

0x85d1,	// (0x000a51de) list_double_fisheye_pane_g2

0x85e5,	// (0x000a51f2) list_double_fisheye_pane_g3_ParamLimits

0x85e5,	// (0x000a51f2) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x000ac8af) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x000ac8af) list_double_fisheye_pane_g

0x860e,	// (0x000a521b) list_double_fisheye_pane_t1_ParamLimits

0x860e,	// (0x000a521b) list_double_fisheye_pane_t1

0x8629,	// (0x000a5236) list_double_fisheye_pane_t2_ParamLimits

0x8629,	// (0x000a5236) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x000ac8ba) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x000ac8ba) list_double_fisheye_pane_t

0x0ebe,	// (0x0009dacb) main_call5_pane

0x8280,	// (0x000a4e8d) sc_swipe_pane_ParamLimits

0x8280,	// (0x000a4e8d) sc_swipe_pane

0x8657,	// (0x000a5264) call5_image_pane_ParamLimits

0x8657,	// (0x000a5264) call5_image_pane

0x8669,	// (0x000a5276) call5_swipe_1_pane_ParamLimits

0x8669,	// (0x000a5276) call5_swipe_1_pane

0x8675,	// (0x000a5282) call5_swipe_2_pane_ParamLimits

0x8675,	// (0x000a5282) call5_swipe_2_pane

0x868f,	// (0x000a529c) popup_call5_audio_first_window_ParamLimits

0x868f,	// (0x000a529c) popup_call5_audio_first_window

0xd0be,	// (0x000a9ccb) call5_swipe_1_pane_g1_ParamLimits

0xd0be,	// (0x000a9ccb) call5_swipe_1_pane_g1

0xe661,	// (0x000ab26e) call5_swipe_1_pane_g2_ParamLimits

0xe661,	// (0x000ab26e) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x000ac8bf) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x000ac8bf) call5_swipe_1_pane_g

0xe66d,	// (0x000ab27a) call5_swipe_1_pane_t1_ParamLimits

0xe66d,	// (0x000ab27a) call5_swipe_1_pane_t1

0xd0be,	// (0x000a9ccb) call5_swipe_2_pane_g1_ParamLimits

0xd0be,	// (0x000a9ccb) call5_swipe_2_pane_g1

0xe682,	// (0x000ab28f) call5_swipe_2_pane_g2_ParamLimits

0xe682,	// (0x000ab28f) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x000ac8c4) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x000ac8c4) call5_swipe_2_pane_g

0xe68e,	// (0x000ab29b) call5_swipe_2_pane_t1_ParamLimits

0xe68e,	// (0x000ab29b) call5_swipe_2_pane_t1

0xe6a3,	// (0x000ab2b0) sc_swipe_pane_g1_ParamLimits

0xe6a3,	// (0x000ab2b0) sc_swipe_pane_g1

0xe6b0,	// (0x000ab2bd) sc_swipe_pane_g2_ParamLimits

0xe6b0,	// (0x000ab2bd) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x000ac8c9) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x000ac8c9) sc_swipe_pane_g

0xe6bc,	// (0x000ab2c9) sc_swipe_pane_t1_ParamLimits

0xe6bc,	// (0x000ab2c9) sc_swipe_pane_t1

0x0ebe,	// (0x0009dacb) main_cmail_launcher_pane

0x869f,	// (0x000a52ac) aid_size_cell_cmail_l_ParamLimits

0x869f,	// (0x000a52ac) aid_size_cell_cmail_l

0x86ad,	// (0x000a52ba) grid_cmail_l_pane_ParamLimits

0x86ad,	// (0x000a52ba) grid_cmail_l_pane

0x86bd,	// (0x000a52ca) cell_cmail_l_pane_ParamLimits

0x86bd,	// (0x000a52ca) cell_cmail_l_pane

0xe6d1,	// (0x000ab2de) cell_cmail_l_pane_g1_ParamLimits

0xe6d1,	// (0x000ab2de) cell_cmail_l_pane_g1

0xe6dd,	// (0x000ab2ea) cell_cmail_l_pane_t1_ParamLimits

0xe6dd,	// (0x000ab2ea) cell_cmail_l_pane_t1

0xe6f3,	// (0x000ab300) cell_cmail_l_pane_t2_ParamLimits

0xe6f3,	// (0x000ab300) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x000ac8ce) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x000ac8ce) cell_cmail_l_pane_t

0xad4f,	// (0x000a795c) grid_highlight_pane_cp018_ParamLimits

0xad4f,	// (0x000a795c) grid_highlight_pane_cp018

0x0d11,	// (0x0009d91e) main2_pane_ParamLimits

0x0d11,	// (0x0009d91e) main2_pane

0xaa4f,	// (0x000a765c) popup_sp_fs_action_menu_bg_pane_g1

0xaa57,	// (0x000a7664) popup_sp_fs_action_menu_bg_pane_g2

0xaa5f,	// (0x000a766c) popup_sp_fs_action_menu_bg_pane_g3

0xaa67,	// (0x000a7674) popup_sp_fs_action_menu_bg_pane_g4

0xaa6f,	// (0x000a767c) popup_sp_fs_action_menu_bg_pane_g5

0xaa77,	// (0x000a7684) popup_sp_fs_action_menu_bg_pane_g6

0xaa7f,	// (0x000a768c) popup_sp_fs_action_menu_bg_pane_g7

0xaa87,	// (0x000a7694) popup_sp_fs_action_menu_bg_pane_g8

0xaa8f,	// (0x000a769c) popup_sp_fs_action_menu_bg_pane_g9

0xaa97,	// (0x000a76a4) popup_sp_fs_action_menu_bg_pane_g10

0xaa97,	// (0x000a76a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000abd93) popup_sp_fs_action_menu_bg_pane_g

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g3_g1

0x1d78,	// (0x0009e985) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_t3_g3_g2

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000abe41) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000abe41) list_medium_line_x2_t3_g3_g

0x1d90,	// (0x0009e99d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d90,	// (0x0009e99d) list_medium_line_x2_t3_g3_t1

0x1da5,	// (0x0009e9b2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1da5,	// (0x0009e9b2) list_medium_line_x2_t3_g3_t2

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000abe48) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000abe48) list_medium_line_x2_t3_g3_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g2_g1

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000abe4f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000abe4f) list_medium_line_x2_t3_g2_g

0x1dcc,	// (0x0009e9d9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dcc,	// (0x0009e9d9) list_medium_line_x2_t3_g2_t1

0x1de2,	// (0x0009e9ef) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1de2,	// (0x0009e9ef) list_medium_line_x2_t3_g2_t2

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000abe54) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000abe54) list_medium_line_x2_t3_g2_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t4_g4_g1

0x1df4,	// (0x0009ea01) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1df4,	// (0x0009ea01) list_medium_line_x2_t4_g4_g2

0x1d78,	// (0x0009e985) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_t4_g4_g3

0x1e00,	// (0x0009ea0d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e00,	// (0x0009ea0d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000abe5b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000abe5b) list_medium_line_x2_t4_g4_g

0x1e0c,	// (0x0009ea19) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e0c,	// (0x0009ea19) list_medium_line_x2_t4_g4_t1

0x1e26,	// (0x0009ea33) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e26,	// (0x0009ea33) list_medium_line_x2_t4_g4_t2

0x1e3c,	// (0x0009ea49) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e3c,	// (0x0009ea49) list_medium_line_x2_t4_g4_t3

0x1e51,	// (0x0009ea5e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e51,	// (0x0009ea5e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000abe64) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000abe64) list_medium_line_x2_t4_g4_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g4_g1

0x1df4,	// (0x0009ea01) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1df4,	// (0x0009ea01) list_medium_line_x2_t2_g4_g2

0x1d78,	// (0x0009e985) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_t2_g4_g3

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000abecb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000abecb) list_medium_line_x2_t2_g4_g

0x2f01,	// (0x0009fb0e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f01,	// (0x0009fb0e) list_medium_line_x2_t2_g4_t1

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000abed4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000abed4) list_medium_line_x2_t2_g4_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g3_g1

0x1d78,	// (0x0009e985) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_t2_g3_g2

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000abe41) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000abe41) list_medium_line_x2_t2_g3_g

0x2f16,	// (0x0009fb23) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2f16,	// (0x0009fb23) list_medium_line_x2_t2_g3_t1

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000abed9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000abed9) list_medium_line_x2_t2_g3_t

0x30ae,	// (0x0009fcbb) main_sp_fs_list_pane_ParamLimits

0x30ae,	// (0x0009fcbb) main_sp_fs_list_pane

0x30ba,	// (0x0009fcc7) sp_fs_scroll_pane_ParamLimits

0x30ba,	// (0x0009fcc7) sp_fs_scroll_pane

0x30c6,	// (0x0009fcd3) list_medium_line_x2_t3_t1

0x30d6,	// (0x0009fce3) list_medium_line_x2_t3_t2

0x30e4,	// (0x0009fcf1) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000abf24) list_medium_line_x2_t3_t

0x30f2,	// (0x0009fcff) list_medium_line_x3_t4_t1

0x3102,	// (0x0009fd0f) list_medium_line_x3_t4_t2

0x3110,	// (0x0009fd1d) list_medium_line_x3_t4_t3

0x30e4,	// (0x0009fcf1) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000abf2b) list_medium_line_x3_t4_t

0x311e,	// (0x0009fd2b) list_medium_line_x4_t5_t1

0x312e,	// (0x0009fd3b) list_medium_line_x4_t5_t2

0x3110,	// (0x0009fd1d) list_medium_line_x4_t5_t3

0x313c,	// (0x0009fd49) list_medium_line_x4_t5_t4

0x30e4,	// (0x0009fcf1) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000abf34) list_medium_line_x4_t5_t

0x1d6c,	// (0x0009e979) list_medium_line_t4_g4_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_t4_g4_g1

0x1e00,	// (0x0009ea0d) list_medium_line_t4_g4_g2_ParamLimits

0x1e00,	// (0x0009ea0d) list_medium_line_t4_g4_g2

0x314a,	// (0x0009fd57) list_medium_line_t4_g4_g3_ParamLimits

0x314a,	// (0x0009fd57) list_medium_line_t4_g4_g3

0x1d84,	// (0x0009e991) list_medium_line_t4_g4_g4_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000abf3f) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000abf3f) list_medium_line_t4_g4_g

0x3156,	// (0x0009fd63) list_medium_line_t4_g4_t1_ParamLimits

0x3156,	// (0x0009fd63) list_medium_line_t4_g4_t1

0x316b,	// (0x0009fd78) list_medium_line_t4_g4_t2_ParamLimits

0x316b,	// (0x0009fd78) list_medium_line_t4_g4_t2

0x3180,	// (0x0009fd8d) list_medium_line_t4_g4_t3_ParamLimits

0x3180,	// (0x0009fd8d) list_medium_line_t4_g4_t3

0x1db7,	// (0x0009e9c4) list_medium_line_t4_g4_t4_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000abf48) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000abf48) list_medium_line_t4_g4_t

0x32a8,	// (0x0009feb5) chi_dic_find_pane_g1

0x41e0,	// (0x000a0ded) main_tport_pane

0x6dfc,	// (0x000a3a09) list_medium_line_plain_t1

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g2_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g2_g1

0x6ef2,	// (0x000a3aff) list_medium_line_t2_g2_g2_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000ac60d) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000ac60d) list_medium_line_t2_g2_g

0x6efe,	// (0x000a3b0b) list_medium_line_t2_g2_t1_ParamLimits

0x6efe,	// (0x000a3b0b) list_medium_line_t2_g2_t1

0x6f18,	// (0x000a3b25) list_medium_line_t2_g2_t2_ParamLimits

0x6f18,	// (0x000a3b25) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000ac612) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000ac612) list_medium_line_t2_g2_t

0xa65d,	// (0x000a726a) aid_sp_fs_list_icon_a_sm

0xad72,	// (0x000a797f) aid_sp_fs_list_icon_d

0xc3bc,	// (0x000a8fc9) aid_sp_fs_text_primary

0xc3c5,	// (0x000a8fd2) aid_sp_fs_text_secondary

0x75b3,	// (0x000a41c0) list_medium_line

0x75b3,	// (0x000a41c0) list_medium_line_g2

0x75b3,	// (0x000a41c0) list_medium_line_g3

0x75b3,	// (0x000a41c0) list_medium_line_plain

0x75b3,	// (0x000a41c0) list_medium_line_plain_t2

0x75b3,	// (0x000a41c0) list_medium_line_plain_t3

0x75b3,	// (0x000a41c0) list_medium_line_right_icon

0x75b3,	// (0x000a41c0) list_medium_line_right_iconx2

0x75b3,	// (0x000a41c0) list_medium_line_t2

0x75b3,	// (0x000a41c0) list_medium_line_t2_g2

0x75b3,	// (0x000a41c0) list_medium_line_t2_g3

0x75b3,	// (0x000a41c0) list_medium_line_t2_right_icon

0x75b3,	// (0x000a41c0) list_medium_line_t2_right_iconx2

0x75b3,	// (0x000a41c0) list_medium_line_t3

0x75b3,	// (0x000a41c0) list_medium_line_t3_g2

0x75b3,	// (0x000a41c0) list_medium_line_t3_g3

0x75b3,	// (0x000a41c0) list_medium_line_t3_right_iconx2

0x75bc,	// (0x000a41c9) list_medium_line_t4_g4

0x75c5,	// (0x000a41d2) list_medium_line_x2

0x75c5,	// (0x000a41d2) list_medium_line_x2_t2_g2

0x75c5,	// (0x000a41d2) list_medium_line_x2_t2_g3

0x75c5,	// (0x000a41d2) list_medium_line_x2_t2_g4

0x75c5,	// (0x000a41d2) list_medium_line_x2_t3

0x75c5,	// (0x000a41d2) list_medium_line_x2_t3_g2

0x75c5,	// (0x000a41d2) list_medium_line_x2_t3_g3

0x75c5,	// (0x000a41d2) list_medium_line_x2_t3_g4

0x75c5,	// (0x000a41d2) list_medium_line_x2_t4_g2

0x75c5,	// (0x000a41d2) list_medium_line_x2_t4_g4

0x75ce,	// (0x000a41db) list_medium_line_x3

0x75ce,	// (0x000a41db) list_medium_line_x3_t4

0x75ce,	// (0x000a41db) list_medium_line_x3_t4_g4

0x75bc,	// (0x000a41c9) list_medium_line_x4_t4

0x75bc,	// (0x000a41c9) list_medium_line_x4_t4_g7

0x75bc,	// (0x000a41c9) list_medium_line_x4_t5

0x75d7,	// (0x000a41e4) list_single_fs_dyc_pane_ParamLimits

0x75d7,	// (0x000a41e4) list_single_fs_dyc_pane

0x1d6c,	// (0x0009e979) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x4_t4_g7_g1

0x7d65,	// (0x000a4972) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d65,	// (0x000a4972) list_medium_line_x4_t4_g7_g2

0x7d71,	// (0x000a497e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d71,	// (0x000a497e) list_medium_line_x4_t4_g7_g3

0x7d80,	// (0x000a498d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d80,	// (0x000a498d) list_medium_line_x4_t4_g7_g4

0x7d8c,	// (0x000a4999) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d8c,	// (0x000a4999) list_medium_line_x4_t4_g7_g5

0x7d9b,	// (0x000a49a8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d9b,	// (0x000a49a8) list_medium_line_x4_t4_g7_g6

0x7daa,	// (0x000a49b7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7daa,	// (0x000a49b7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x000ac7d6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x000ac7d6) list_medium_line_x4_t4_g7_g

0x7db6,	// (0x000a49c3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7db6,	// (0x000a49c3) list_medium_line_x4_t4_g7_t1

0x7dcb,	// (0x000a49d8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7dcb,	// (0x000a49d8) list_medium_line_x4_t4_g7_t2

0x7de0,	// (0x000a49ed) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7de0,	// (0x000a49ed) list_medium_line_x4_t4_g7_t3

0x7df5,	// (0x000a4a02) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7df5,	// (0x000a4a02) list_medium_line_x4_t4_g7_t4

0x7e07,	// (0x000a4a14) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e07,	// (0x000a4a14) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x000ac7e5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x000ac7e5) list_medium_line_x4_t4_g7_t

0x7e19,	// (0x000a4a26) list_single_dyc_row_pane_ParamLimits

0x7e19,	// (0x000a4a26) list_single_dyc_row_pane

0x864b,	// (0x000a5258) call5_gesture_pane_ParamLimits

0x864b,	// (0x000a5258) call5_gesture_pane

0x8681,	// (0x000a528e) call5_windows_pane_ParamLimits

0x8681,	// (0x000a528e) call5_windows_pane

0x86d2,	// (0x000a52df) call5_swipe_1_pane_cp_ParamLimits

0x86d2,	// (0x000a52df) call5_swipe_1_pane_cp

0x86de,	// (0x000a52eb) call5_swipe_2_pane_cp_ParamLimits

0x86de,	// (0x000a52eb) call5_swipe_2_pane_cp

0xab5e,	// (0x000a776b) call5_image_pane_cp

0x86ea,	// (0x000a52f7) popup_call5_audio_first_window_cp_ParamLimits

0x86ea,	// (0x000a52f7) popup_call5_audio_first_window_cp

0xe6a3,	// (0x000ab2b0) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6a3,	// (0x000ab2b0) call5_swipe_1_pane_g1_cp

0xe710,	// (0x000ab31d) call5_swipe_1_pane_g2_cp

0xe6bc,	// (0x000ab2c9) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6bc,	// (0x000ab2c9) call5_swipe_1_pane_t1_cp

0xe6a3,	// (0x000ab2b0) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6a3,	// (0x000ab2b0) call5_swipe_2_pane_g1_cp

0xe718,	// (0x000ab325) call5_swipe_2_pane_g2_cp

0xe720,	// (0x000ab32d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe720,	// (0x000ab32d) call5_swipe_2_pane_t1_cp

0xad4f,	// (0x000a795c) main_sp_fs_email_pane

0xdd5e,	// (0x000aa96b) main_sp_fs_listscroll_pane_te

0x86f8,	// (0x000a5305) popup_sp_fs_action_menu_pane_ParamLimits

0x86f8,	// (0x000a5305) popup_sp_fs_action_menu_pane

0xce8f,	// (0x000a9a9c) bg_sp_fs_ctrlbar_pane_g1

0xe735,	// (0x000ab342) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe73e,	// (0x000ab34b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe747,	// (0x000ab354) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce8f,	// (0x000a9a9c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x000ac8d3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc6e,	// (0x000a987b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc6e,	// (0x000a987b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe750,	// (0x000ab35d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe750,	// (0x000ab35d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe75c,	// (0x000ab369) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe75c,	// (0x000ab369) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x000ac8dc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x000ac8dc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe768,	// (0x000ab375) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe768,	// (0x000ab375) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x873e,	// (0x000a534b) list_medium_line_t2_right_icon_g1

0x8746,	// (0x000a5353) list_medium_line_t2_right_icon_t1

0x8756,	// (0x000a5363) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x000ac8e1) list_medium_line_t2_right_icon_t

0xca57,	// (0x000a9664) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca57,	// (0x000a9664) bg_sp_fs_ctrlbar_pane

0x87bd,	// (0x000a53ca) main_sp_fs_ctrlbar_button_pane_cp01

0x87c5,	// (0x000a53d2) main_sp_fs_ctrlbar_ddmenu_pane

0xe7bc,	// (0x000ab3c9) main_sp_fs_ctrlbar_pane_g1

0xe7c8,	// (0x000ab3d5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x000ac8e6) main_sp_fs_ctrlbar_pane_g

0xe7d4,	// (0x000ab3e1) main_sp_fs_ctrlbar_pane_t1

0x87cf,	// (0x000a53dc) main_sp_fs_ctrlbar_pane

0x87e5,	// (0x000a53f2) main_sp_fs_listscroll_pane_te_cp01

0x87f6,	// (0x000a5403) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x87f6,	// (0x000a5403) popup_sp_fs_action_menu_pane_cp01

0xad4f,	// (0x000a795c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad4f,	// (0x000a795c) bg_sp_fs_highlight_list_pane_cp01

0xa665,	// (0x000a7272) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa665,	// (0x000a7272) sp_fs_action_menu_list_gene_pane_g1

0xe804,	// (0x000ab411) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe804,	// (0x000ab411) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x000ac8f0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x000ac8f0) sp_fs_action_menu_list_gene_pane_g

0xa674,	// (0x000a7281) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa674,	// (0x000a7281) sp_fs_action_menu_list_gene_pane_t1

0xa68c,	// (0x000a7299) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa68c,	// (0x000a7299) sp_fs_action_menu_list_gene_pane

0xe811,	// (0x000ab41e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe811,	// (0x000ab41e) popup_sp_fs_action_menu_bg_pane

0xa6af,	// (0x000a72bc) sp_fs_action_menu_list_pane_ParamLimits

0xa6af,	// (0x000a72bc) sp_fs_action_menu_list_pane

0x8824,	// (0x000a5431) sp_fs_scroll_pane_cp01_ParamLimits

0x8824,	// (0x000a5431) sp_fs_scroll_pane_cp01

0x884a,	// (0x000a5457) list_medium_line_plain_t2_t1

0x885a,	// (0x000a5467) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x000ac8f5) list_medium_line_plain_t2_t

0x8868,	// (0x000a5475) list_medium_line_plain_t3_t1

0x8878,	// (0x000a5485) list_medium_line_plain_t3_t2

0x8886,	// (0x000a5493) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x000ac8fa) list_medium_line_plain_t3_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t2_g2_g1

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000abe4f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000abe4f) list_medium_line_x2_t2_g2_g

0x3156,	// (0x0009fd63) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3156,	// (0x0009fd63) list_medium_line_x2_t2_g2_t1

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x000ac901) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x000ac901) list_medium_line_x2_t2_g2_t

0x1d6c,	// (0x0009e979) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t4_g2_g1

0x8894,	// (0x000a54a1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8894,	// (0x000a54a1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x000ac906) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x000ac906) list_medium_line_x2_t4_g2_g

0x88a6,	// (0x000a54b3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x88a6,	// (0x000a54b3) list_medium_line_x2_t4_g2_t1

0x88c0,	// (0x000a54cd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x88c0,	// (0x000a54cd) list_medium_line_x2_t4_g2_t2

0x88d6,	// (0x000a54e3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x88d6,	// (0x000a54e3) list_medium_line_x2_t4_g2_t3

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x000ac90b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x000ac90b) list_medium_line_x2_t4_g2_t

0x88eb,	// (0x000a54f8) list_medium_line_t3_right_iconx2_g1

0x873e,	// (0x000a534b) list_medium_line_t3_right_iconx2_g2

0x88f3,	// (0x000a5500) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x000ac914) list_medium_line_t3_right_iconx2_g

0x88fb,	// (0x000a5508) list_medium_line_t3_right_iconx2_t1

0x890b,	// (0x000a5518) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x000ac91b) list_medium_line_t3_right_iconx2_t

0x1d6c,	// (0x0009e979) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x3_t4_g4_g1

0x1d78,	// (0x0009e985) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x3_t4_g4_g2

0x1e00,	// (0x0009ea0d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e00,	// (0x0009ea0d) list_medium_line_x3_t4_g4_g3

0x8919,	// (0x000a5526) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8919,	// (0x000a5526) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x000ac920) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x000ac920) list_medium_line_x3_t4_g4_g

0x8925,	// (0x000a5532) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8925,	// (0x000a5532) list_medium_line_x3_t4_g4_t1

0x893c,	// (0x000a5549) list_medium_line_x3_t4_g4_t2_ParamLimits

0x893c,	// (0x000a5549) list_medium_line_x3_t4_g4_t2

0x316b,	// (0x0009fd78) list_medium_line_x3_t4_g4_t3_ParamLimits

0x316b,	// (0x0009fd78) list_medium_line_x3_t4_g4_t3

0x8951,	// (0x000a555e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8951,	// (0x000a555e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x000ac929) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x000ac929) list_medium_line_x3_t4_g4_t

0x896e,	// (0x000a557b) list_single_dyc_row_text_pane_t1_ParamLimits

0x896e,	// (0x000a557b) list_single_dyc_row_text_pane_t1

0x89b1,	// (0x000a55be) list_single_dyc_row_text_pane_t2_ParamLimits

0x89b1,	// (0x000a55be) list_single_dyc_row_text_pane_t2

0xa6d3,	// (0x000a72e0) list_single_dyc_row_text_pane_t3_ParamLimits

0xa6d3,	// (0x000a72e0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x000ac932) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x000ac932) list_single_dyc_row_text_pane_t

0xa6f7,	// (0x000a7304) list_single_dyc_row_pane_g1_ParamLimits

0xa6f7,	// (0x000a7304) list_single_dyc_row_pane_g1

0xa703,	// (0x000a7310) list_single_dyc_row_pane_g2_ParamLimits

0xa703,	// (0x000a7310) list_single_dyc_row_pane_g2

0xa70f,	// (0x000a731c) list_single_dyc_row_pane_g3_ParamLimits

0xa70f,	// (0x000a731c) list_single_dyc_row_pane_g3

0xa71b,	// (0x000a7328) list_single_dyc_row_pane_g4_ParamLimits

0xa71b,	// (0x000a7328) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000ac93f) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000ac93f) list_single_dyc_row_pane_g

0xa727,	// (0x000a7334) list_single_dyc_row_text_pane_ParamLimits

0xa727,	// (0x000a7334) list_single_dyc_row_text_pane

0x9de7,	// (0x000a69f4) bg_sp_fs_scroll_pane

0xe81f,	// (0x000ab42c) thumb_sp_fs_scroll_pane

0x6ee6,	// (0x000a3af3) list_medium_line_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_g1

0x8ae2,	// (0x000a56ef) list_medium_line_t1_ParamLimits

0x8ae2,	// (0x000a56ef) list_medium_line_t1

0x1d6c,	// (0x0009e979) list_medium_line_x2_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_g1

0x1d78,	// (0x0009e985) list_medium_line_x2_g2_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000ac948) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000ac948) list_medium_line_x2_g

0xa746,	// (0x000a7353) list_medium_line_x2_t1_ParamLimits

0xa746,	// (0x000a7353) list_medium_line_x2_t1

0x1d6c,	// (0x0009e979) list_medium_line_x3_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x3_g1

0x1d78,	// (0x0009e985) list_medium_line_x3_g2_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000ac948) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000ac948) list_medium_line_x3_g

0xa746,	// (0x000a7353) list_medium_line_x3_t1_ParamLimits

0xa746,	// (0x000a7353) list_medium_line_x3_t1

0xe828,	// (0x000ab435) thumb_sp_fs_scroll_pane_g1

0xe831,	// (0x000ab43e) thumb_sp_fs_scroll_pane_g2

0xe83a,	// (0x000ab447) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ac94d) thumb_sp_fs_scroll_pane_g

0xe828,	// (0x000ab435) bg_sp_fs_scroll_pane_g1

0xe831,	// (0x000ab43e) bg_sp_fs_scroll_pane_g2

0xe83a,	// (0x000ab447) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000ac94d) bg_sp_fs_scroll_pane_g

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d6c,	// (0x0009e979) list_medium_line_x2_t3_g4_g1

0x1df4,	// (0x0009ea01) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1df4,	// (0x0009ea01) list_medium_line_x2_t3_g4_g2

0x1d78,	// (0x0009e985) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d78,	// (0x0009e985) list_medium_line_x2_t3_g4_g3

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d84,	// (0x0009e991) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000abecb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000abecb) list_medium_line_x2_t3_g4_g

0x8af7,	// (0x000a5704) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8af7,	// (0x000a5704) list_medium_line_x2_t3_g4_t1

0x8b0d,	// (0x000a571a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8b0d,	// (0x000a571a) list_medium_line_x2_t3_g4_t2

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1db7,	// (0x0009e9c4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000ac954) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000ac954) list_medium_line_x2_t3_g4_t

0x6ee6,	// (0x000a3af3) list_medium_line_g2_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_g2_g1

0x6ef2,	// (0x000a3aff) list_medium_line_g2_g2_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000ac60d) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000ac60d) list_medium_line_g2_g

0x8b27,	// (0x000a5734) list_medium_line_g2_t1_ParamLimits

0x8b27,	// (0x000a5734) list_medium_line_g2_t1

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g2_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g2_g1

0x6ef2,	// (0x000a3aff) list_medium_line_t3_g2_g2_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000ac60d) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000ac60d) list_medium_line_t3_g2_g

0x8b3c,	// (0x000a5749) list_medium_line_t3_g2_t1_ParamLimits

0x8b3c,	// (0x000a5749) list_medium_line_t3_g2_t1

0x8b56,	// (0x000a5763) list_medium_line_t3_g2_t2_ParamLimits

0x8b56,	// (0x000a5763) list_medium_line_t3_g2_t2

0x8b6c,	// (0x000a5779) list_medium_line_t3_g2_t3_ParamLimits

0x8b6c,	// (0x000a5779) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000ac95b) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000ac95b) list_medium_line_t3_g2_t

0x873e,	// (0x000a534b) list_medium_line_right_icon_g1

0x8b86,	// (0x000a5793) list_medium_line_right_icon_t1

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g1

0x8b94,	// (0x000a57a1) list_medium_line_t2_t1_ParamLimits

0x8b94,	// (0x000a57a1) list_medium_line_t2_t1

0x8bae,	// (0x000a57bb) list_medium_line_t2_t2_ParamLimits

0x8bae,	// (0x000a57bb) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000ac962) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000ac962) list_medium_line_t2_t

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g1

0x8bc3,	// (0x000a57d0) list_medium_line_t3_t1_ParamLimits

0x8bc3,	// (0x000a57d0) list_medium_line_t3_t1

0x8bdd,	// (0x000a57ea) list_medium_line_t3_t2_ParamLimits

0x8bdd,	// (0x000a57ea) list_medium_line_t3_t2

0x8bf3,	// (0x000a5800) list_medium_line_t3_t3_ParamLimits

0x8bf3,	// (0x000a5800) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000ac967) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000ac967) list_medium_line_t3_t

0x6ee6,	// (0x000a3af3) list_medium_line_g3_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_g3_g1

0x8c08,	// (0x000a5815) list_medium_line_g3_g2_ParamLimits

0x8c08,	// (0x000a5815) list_medium_line_g3_g2

0x6ef2,	// (0x000a3aff) list_medium_line_g3_g3_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000ac96e) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000ac96e) list_medium_line_g3_g

0x8c14,	// (0x000a5821) list_medium_line_g3_t1_ParamLimits

0x8c14,	// (0x000a5821) list_medium_line_g3_t1

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g3_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t2_g3_g1

0x8c08,	// (0x000a5815) list_medium_line_t2_g3_g2_ParamLimits

0x8c08,	// (0x000a5815) list_medium_line_t2_g3_g2

0x6ef2,	// (0x000a3aff) list_medium_line_t2_g3_g3_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000ac96e) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000ac96e) list_medium_line_t2_g3_g

0x8c29,	// (0x000a5836) list_medium_line_t2_g3_t1_ParamLimits

0x8c29,	// (0x000a5836) list_medium_line_t2_g3_t1

0x8c43,	// (0x000a5850) list_medium_line_t2_g3_t2_ParamLimits

0x8c43,	// (0x000a5850) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000ac975) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000ac975) list_medium_line_t2_g3_t

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g3_g1_ParamLimits

0x6ee6,	// (0x000a3af3) list_medium_line_t3_g3_g1

0x8c08,	// (0x000a5815) list_medium_line_t3_g3_g2_ParamLimits

0x8c08,	// (0x000a5815) list_medium_line_t3_g3_g2

0x6ef2,	// (0x000a3aff) list_medium_line_t3_g3_g3_ParamLimits

0x6ef2,	// (0x000a3aff) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000ac96e) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000ac96e) list_medium_line_t3_g3_g

0x8c59,	// (0x000a5866) list_medium_line_t3_g3_t1_ParamLimits

0x8c59,	// (0x000a5866) list_medium_line_t3_g3_t1

0x8c72,	// (0x000a587f) list_medium_line_t3_g3_t2_ParamLimits

0x8c72,	// (0x000a587f) list_medium_line_t3_g3_t2

0x8c88,	// (0x000a5895) list_medium_line_t3_g3_t3_ParamLimits

0x8c88,	// (0x000a5895) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000ac97a) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000ac97a) list_medium_line_t3_g3_t

0x88eb,	// (0x000a54f8) list_medium_line_right_iconx2_g1

0x873e,	// (0x000a534b) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ac981) list_medium_line_right_iconx2_g

0x8ca2,	// (0x000a58af) list_medium_line_right_iconx2_t1

0x88eb,	// (0x000a54f8) list_medium_line_t2_right_iconx2_g1

0x873e,	// (0x000a534b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000ac981) list_medium_line_t2_right_iconx2_g

0x8cb0,	// (0x000a58bd) list_medium_line_t2_right_iconx2_t1

0x8cc0,	// (0x000a58cd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000ac986) list_medium_line_t2_right_iconx2_t

0x8cce,	// (0x000a58db) list_medium_line_x4_t4_t1

0x8cdc,	// (0x000a58e9) list_medium_line_x4_t4_t2

0x8cec,	// (0x000a58f9) list_medium_line_x4_t4_t3

0x8cfc,	// (0x000a5909) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000ac98b) list_medium_line_x4_t4_t

0x8d36,	// (0x000a5943) tport_appsw_pane_ParamLimits

0x8d36,	// (0x000a5943) tport_appsw_pane

0x8d44,	// (0x000a5951) tport_contact_pane_ParamLimits

0x8d44,	// (0x000a5951) tport_contact_pane

0x8d54,	// (0x000a5961) tport_listscroll_pane_ParamLimits

0x8d54,	// (0x000a5961) tport_listscroll_pane

0x8d63,	// (0x000a5970) cell_tport_appsw_pane_ParamLimits

0x8d63,	// (0x000a5970) cell_tport_appsw_pane

0xd123,	// (0x000a9d30) tport_appsw_pane_g1_ParamLimits

0xd123,	// (0x000a9d30) tport_appsw_pane_g1

0xe843,	// (0x000ab450) tport_contact_pane_g1

0xe84c,	// (0x000ab459) tport_contact_pane_t1

0xe85a,	// (0x000ab467) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000ac994) tport_contact_pane_t

0xe868,	// (0x000ab475) list_tport_pane

0xe871,	// (0x000ab47e) scroll_pane_cp_030

0x8d98,	// (0x000a59a5) cell_tport_appsw_pane_g1

0x8da8,	// (0x000a59b5) cell_tport_appsw_pane_t1

0x8db6,	// (0x000a59c3) grid_highlight_pane_cp019

0x8dbe,	// (0x000a59cb) list_tport_double_graphic_pane_ParamLimits

0x8dbe,	// (0x000a59cb) list_tport_double_graphic_pane

0xad4f,	// (0x000a795c) list_highlight_pane_cp023_ParamLimits

0xad4f,	// (0x000a795c) list_highlight_pane_cp023

0x8ddb,	// (0x000a59e8) list_tport_double_graphic_pane_g1_ParamLimits

0x8ddb,	// (0x000a59e8) list_tport_double_graphic_pane_g1

0x8de8,	// (0x000a59f5) list_tport_double_graphic_pane_t1_ParamLimits

0x8de8,	// (0x000a59f5) list_tport_double_graphic_pane_t1

0x8dfd,	// (0x000a5a0a) list_tport_double_graphic_pane_t2_ParamLimits

0x8dfd,	// (0x000a5a0a) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000ac9a0) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000ac9a0) list_tport_double_graphic_pane_t

0x9de7,	// (0x000a69f4) main_cale_note_pane

0x6684,	// (0x000a3291) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6684,	// (0x000a3291) cell_vitu2_function_top_wide_pane_cp01

0x81cf,	// (0x000a4ddc) wait_bar_pane_cp05_ParamLimits

0xad4f,	// (0x000a795c) listscroll_cmail_pane

0xe87a,	// (0x000ab487) list_cmail_pane

0x8e0f,	// (0x000a5a1c) list_cmail_body_pane

0x8e29,	// (0x000a5a36) list_single_cmail_header_caption_pane

0xe88a,	// (0x000ab497) list_single_cmail_header_detail_pane_ParamLimits

0xe88a,	// (0x000ab497) list_single_cmail_header_detail_pane

0xe8bc,	// (0x000ab4c9) list_single_cmail_header_caption_pane_t1

0x8e49,	// (0x000a5a56) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e49,	// (0x000a5a56) list_single_cmail_header_detail_pane_g1

0xad7a,	// (0x000a7987) list_single_cmail_header_detail_pane_g2_ParamLimits

0xad7a,	// (0x000a7987) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000ac9a5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000ac9a5) list_single_cmail_header_detail_pane_g

0xa75c,	// (0x000a7369) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa75c,	// (0x000a7369) list_single_cmail_header_detail_pane_t1

0xa7bc,	// (0x000a73c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa7bc,	// (0x000a73c9) list_single_cmail_header_editor_pane_bg

0xe475,	// (0x000ab082) list_cmail_body_pane_g1

0xe8e0,	// (0x000ab4ed) list_cmail_body_pane_t1

0xd836,	// (0x000aa443) list_single_cmail_header_editor_pane_bg_g1

0xae4a,	// (0x000a7a57) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd846,	// (0x000aa453) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd83e,	// (0x000aa44b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda69,	// (0x000aa676) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd866,	// (0x000aa473) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd856,	// (0x000aa463) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd85e,	// (0x000aa46b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xae2a,	// (0x000a7a37) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e61,	// (0x000a5a6e) calenote_gesture_pane_ParamLimits

0x8e61,	// (0x000a5a6e) calenote_gesture_pane

0x8e7b,	// (0x000a5a88) calenote_window_pane_ParamLimits

0x8e7b,	// (0x000a5a88) calenote_window_pane

0xe8ee,	// (0x000ab4fb) popup_note_window_cp01

0x8e93,	// (0x000a5aa0) calenote_swipe_1_pane_ParamLimits

0x8e93,	// (0x000a5aa0) calenote_swipe_1_pane

0x86de,	// (0x000a52eb) calenote_swipe_2_pane_ParamLimits

0x86de,	// (0x000a52eb) calenote_swipe_2_pane

0xe6a3,	// (0x000ab2b0) calenote_swipe_1_pane_g1_ParamLimits

0xe6a3,	// (0x000ab2b0) calenote_swipe_1_pane_g1

0xe6b0,	// (0x000ab2bd) calenote_swipe_1_pane_g2_ParamLimits

0xe6b0,	// (0x000ab2bd) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x000ac8c9) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x000ac8c9) calenote_swipe_1_pane_g

0xe900,	// (0x000ab50d) calenote_swipe_1_pane_t1_ParamLimits

0xe900,	// (0x000ab50d) calenote_swipe_1_pane_t1

0xe6a3,	// (0x000ab2b0) calenote_swipe_2_pane_g1_ParamLimits

0xe6a3,	// (0x000ab2b0) calenote_swipe_2_pane_g1

0xe91f,	// (0x000ab52c) calenote_swipe_2_pane_g2_ParamLimits

0xe91f,	// (0x000ab52c) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000ac9b1) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000ac9b1) calenote_swipe_2_pane_g

0xe92b,	// (0x000ab538) calenote_swipe_2_pane_t1_ParamLimits

0xe92b,	// (0x000ab538) calenote_swipe_2_pane_t1

0x9de7,	// (0x000a69f4) main_mup_navstr_pane

0x52b0,	// (0x000a1ebd) main_mup3_pane_t7_ParamLimits

0x52b0,	// (0x000a1ebd) main_mup3_pane_t7

0x5ce9,	// (0x000a28f6) main_mp4_pane_g6_ParamLimits

0x5ce9,	// (0x000a28f6) main_mp4_pane_g6

0x6083,	// (0x000a2c90) main_image3_pane_t4_ParamLimits

0x6083,	// (0x000a2c90) main_image3_pane_t4

0x8ea6,	// (0x000a5ab3) popup_navstr_preview_pane_ParamLimits

0x8ea6,	// (0x000a5ab3) popup_navstr_preview_pane

0x8eb2,	// (0x000a5abf) scroll_navstr_pane_ParamLimits

0x8eb2,	// (0x000a5abf) scroll_navstr_pane

0x9de7,	// (0x000a69f4) bg_popup_preview_window_pane_cp04

0xe952,	// (0x000ab55f) popup_navstr_preview_pane_t1

0x8ebe,	// (0x000a5acb) scroll_navstr_pane_g1_ParamLimits

0x8ebe,	// (0x000a5acb) scroll_navstr_pane_g1

0x8ecb,	// (0x000a5ad8) scroll_navstr_pane_t1_ParamLimits

0x8ecb,	// (0x000a5ad8) scroll_navstr_pane_t1

0xe8f7,	// (0x000ab504) bg_button_pane_cp014

0xe8f7,	// (0x000ab504) bg_button_pane_cp030

0x85f1,	// (0x000a51fe) list_double_fisheye_pane_g4_ParamLimits

0x85f1,	// (0x000a51fe) list_double_fisheye_pane_g4

0x85fd,	// (0x000a520a) list_double_fisheye_pane_g5_ParamLimits

0x85fd,	// (0x000a520a) list_double_fisheye_pane_g5

0xd4ca,	// (0x000aa0d7) sp_fs_scroll_pane_cp03

0xe7bc,	// (0x000ab3c9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7c8,	// (0x000ab3d5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x000ac8e6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7d4,	// (0x000ab3e1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe882,	// (0x000ab48f) sp_fs_scroll_pane_cp02

0xaaba,	// (0x000a76c7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaaba,	// (0x000a76c7) popup_sp_fs_calendar_preview_list_single_pane

0x9de7,	// (0x000a69f4) main_cam6_pano_pane

0x41c4,	// (0x000a0dd1) main_mup3_pane_ParamLimits

0x9de7,	// (0x000a69f4) main_phacti_pane

0x80a2,	// (0x000a4caf) bg_button_pane_cp11

0x80ba,	// (0x000a4cc7) main_mobtv_info_pane_g2_ParamLimits

0x80ba,	// (0x000a4cc7) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x000ac846) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x000ac846) main_mobtv_info_pane_g

0x826c,	// (0x000a4e79) sc_clock_pane_t5_ParamLimits

0x826c,	// (0x000a4e79) sc_clock_pane_t5

0x8464,	// (0x000a5071) main_radioblah_pane_g1_ParamLimits

0xe5db,	// (0x000ab1e8) main_radioblah_pane_t3_ParamLimits

0xe5db,	// (0x000ab1e8) main_radioblah_pane_t3

0xe607,	// (0x000ab214) main_radioblah_pane_t4_ParamLimits

0xe607,	// (0x000ab214) main_radioblah_pane_t4

0x8482,	// (0x000a508f) main_radioblah_text_pane_ParamLimits

0x8482,	// (0x000a508f) main_radioblah_text_pane

0x848f,	// (0x000a509c) main_radioblah_info_pane_g1_ParamLimits

0x8528,	// (0x000a5135) main_radioblah_info_pane_t4_ParamLimits

0x8528,	// (0x000a5135) main_radioblah_info_pane_t4

0xad4f,	// (0x000a795c) main_sp_fs_calendar_pane

0x8edd,	// (0x000a5aea) main_phacti_pane_g1

0x8ee5,	// (0x000a5af2) phacti_note_pane_ParamLimits

0x8ee5,	// (0x000a5af2) phacti_note_pane

0xe969,	// (0x000ab576) phacti_term_pane_ParamLimits

0xe969,	// (0x000ab576) phacti_term_pane

0xe97e,	// (0x000ab58b) phacti_note_pane_t1_ParamLimits

0xe97e,	// (0x000ab58b) phacti_note_pane_t1

0xa7d3,	// (0x000a73e0) phacti_term_pane_g1

0xa7db,	// (0x000a73e8) phacti_term_pane_t1_ParamLimits

0xa7db,	// (0x000a73e8) phacti_term_pane_t1

0xe995,	// (0x000ab5a2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe99d,	// (0x000ab5aa) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000ac9bb) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9a5,	// (0x000ab5b2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9a5,	// (0x000ab5b2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9bb,	// (0x000ab5c8) aid_popup_sp_fs_bg_corner_pane

0xce8f,	// (0x000a9a9c) popup_sp_fs_calendar_preview_bg_pane_g1

0x9de7,	// (0x000a69f4) popup_sp_fs_calendar_preview_bg_pane

0xe9c3,	// (0x000ab5d0) popup_sp_fs_calendar_preview_list_pane

0xca57,	// (0x000a9664) bg_main_sp_fs_cale_pane_ParamLimits

0xca57,	// (0x000a9664) bg_main_sp_fs_cale_pane

0xa80e,	// (0x000a741b) listscroll_cale_mrui_pane_ParamLimits

0xa80e,	// (0x000a741b) listscroll_cale_mrui_pane

0xa823,	// (0x000a7430) listscroll_sp_fs_schedule_track_pane

0xa82c,	// (0x000a7439) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa82c,	// (0x000a7439) main_sp_fs_ctrlbar_pane_cp01

0xe9cb,	// (0x000ab5d8) main_sp_fs_ribbon_pane

0xa83f,	// (0x000a744c) popup_sp_fs_cale_preview_window

0xee86,	// (0x000aba93) list_single_sp_fs_schedule_track_pane_ParamLimits

0xee86,	// (0x000aba93) list_single_sp_fs_schedule_track_pane

0xe1b4,	// (0x000aadc1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe1b4,	// (0x000aadc1) bg_sp_fs_highlight_list_pane_cp03

0x8f48,	// (0x000a5b55) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f48,	// (0x000a5b55) list_single_sp_fs_schedule_track_pane_g1

0x8f54,	// (0x000a5b61) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f54,	// (0x000a5b61) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000ac9c0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000ac9c0) list_single_sp_fs_schedule_track_pane_g

0x8f60,	// (0x000a5b6d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f60,	// (0x000a5b6d) list_single_sp_fs_schedule_track_pane_t1

0x8f7e,	// (0x000a5b8b) sp_fs_schedule_track_pane_ParamLimits

0x8f7e,	// (0x000a5b8b) sp_fs_schedule_track_pane

0xe9d3,	// (0x000ab5e0) sp_fs_schedule_track_pane_g1

0xe9db,	// (0x000ab5e8) sp_fs_schedule_track_pane_g2

0xe9e3,	// (0x000ab5f0) sp_fs_schedule_track_pane_g3

0xe9eb,	// (0x000ab5f8) sp_fs_schedule_track_pane_g4

0xe9f3,	// (0x000ab600) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000ac9c5) sp_fs_schedule_track_pane_g

0xd836,	// (0x000aa443) bg_sp_fs_schedule_viewer_highlight_g1

0xae4a,	// (0x000a7a57) bg_sp_fs_schedule_viewer_highlight_g2

0xd83e,	// (0x000aa44b) bg_sp_fs_schedule_viewer_highlight_g3

0xd846,	// (0x000aa453) bg_sp_fs_schedule_viewer_highlight_g4

0xda69,	// (0x000aa676) bg_sp_fs_schedule_viewer_highlight_g5

0xd856,	// (0x000aa463) bg_sp_fs_schedule_viewer_highlight_g6

0xd85e,	// (0x000aa46b) bg_sp_fs_schedule_viewer_highlight_g7

0xd866,	// (0x000aa473) bg_sp_fs_schedule_viewer_highlight_g8

0xae2a,	// (0x000a7a37) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000ac9d0) bg_sp_fs_schedule_viewer_highlight_g

0x9de7,	// (0x000a69f4) bg_main_sp_fs_ribbon_pane

0x8f90,	// (0x000a5b9d) main_sp_fs_ribbon_pane_g1

0xe9fb,	// (0x000ab608) main_sp_fs_ribbon_pane_t1

0x8f99,	// (0x000a5ba6) main_sp_fs_ribbon_pane_t2

0xea0a,	// (0x000ab617) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000ac9e3) main_sp_fs_ribbon_pane_t

0xea19,	// (0x000ab626) main_sp_fs_ribbon_scheduler_pane

0xea21,	// (0x000ab62e) bg_main_sp_fs_ribbon_pane_g1

0xea44,	// (0x000ab651) bg_main_sp_fs_ribbon_pane_g2

0xea4d,	// (0x000ab65a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000ac9ea) bg_main_sp_fs_ribbon_pane_g

0xea55,	// (0x000ab662) main_sp_fs_ribbon_scheduler_pane_g1

0xea5e,	// (0x000ab66b) main_sp_fs_ribbon_scheduler_pane_g2

0xea67,	// (0x000ab674) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000ac9f1) main_sp_fs_ribbon_scheduler_pane_g

0xea70,	// (0x000ab67d) list_cale_mrui_pane

0x8fa8,	// (0x000a5bb5) sp_fs_scroll_pane_cp07_ParamLimits

0x8fa8,	// (0x000a5bb5) sp_fs_scroll_pane_cp07

0x8fc4,	// (0x000a5bd1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fc4,	// (0x000a5bd1) bg_sp_fs_schedule_viewer_highlight

0xea7d,	// (0x000ab68a) list_single_sp_fs_schedule_track_pane_cp01

0xea85,	// (0x000ab692) list_sp_fs_schedule_track_pane

0xea8d,	// (0x000ab69a) sp_fs_scroll_pane_cp06_ParamLimits

0xea8d,	// (0x000ab69a) sp_fs_scroll_pane_cp06

0xce8f,	// (0x000a9a9c) bgmain_sp_fs_calendar_pane_g1

0x8fd1,	// (0x000a5bde) list_single_cale_mrui_pane_ParamLimits

0x8fd1,	// (0x000a5bde) list_single_cale_mrui_pane

0xa851,	// (0x000a745e) list_single_cale_mrui_row_pane_ParamLimits

0xa851,	// (0x000a745e) list_single_cale_mrui_row_pane

0xa85e,	// (0x000a746b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa85e,	// (0x000a746b) list_single_cale_mrui_row_pane_g1

0xa896,	// (0x000a74a3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa896,	// (0x000a74a3) list_single_cale_mrui_row_pane_t1

0x8ff7,	// (0x000a5c04) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ff7,	// (0x000a5c04) list_single_cale_mrui_row_pane_t2

0xa8a8,	// (0x000a74b5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa8a8,	// (0x000a74b5) list_single_cale_mrui_row_pane_t3

0xa8d7,	// (0x000a74e4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8d7,	// (0x000a74e4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000ac9ff) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000ac9ff) list_single_cale_mrui_row_pane_t

0x905d,	// (0x000a5c6a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x905d,	// (0x000a5c6a) list_single_cmail_header_editor_pane_bg_cp01

0x907f,	// (0x000a5c8c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x907f,	// (0x000a5c8c) list_single_cmail_header_editor_pane_bg_cp02

0x909d,	// (0x000a5caa) main_radioblah_text_pane_t1_ParamLimits

0x909d,	// (0x000a5caa) main_radioblah_text_pane_t1

0xeaac,	// (0x000ab6b9) cam6_indi_pane_cp01

0xeab4,	// (0x000ab6c1) cam6_mode_pane_cp01

0xeabc,	// (0x000ab6c9) cam6_pano_pane

0xeac5,	// (0x000ab6d2) cam6_zoom_pane_cp01

0xeacf,	// (0x000ab6dc) cam6_pano_image_pane

0xead8,	// (0x000ab6e5) cam6_pano_pane_g1

0xe475,	// (0x000ab082) cam6_pano_pane_g2

0xeae1,	// (0x000ab6ee) cam6_pano_pane_g3

0xeaea,	// (0x000ab6f7) cam6_pano_pane_g4

0xd42e,	// (0x000aa03b) cam6_pano_pane_g5

0xeaf3,	// (0x000ab700) cam6_pano_pane_g6

0xeafb,	// (0x000ab708) cam6_pano_pane_g7

0xeb03,	// (0x000ab710) cam6_pano_pane_g8

0xeb0c,	// (0x000ab719) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000aca08) cam6_pano_pane_g

0x9de7,	// (0x000a69f4) main_browser_tag_pane

0xe94a,	// (0x000ab557) grid_navstr_albumart_pane

0xeb17,	// (0x000ab724) cell_navstr_albumart_pane_ParamLimits

0xeb17,	// (0x000ab724) cell_navstr_albumart_pane

0xeb33,	// (0x000ab740) cell_navstr_albumart_pane_g1

0xc864,	// (0x000a9471) cell_navstr_albumart_pane_g2

0xc874,	// (0x000a9481) cell_navstr_albumart_pane_g3

0xc86c,	// (0x000a9479) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000aca1b) cell_navstr_albumart_pane_g

0x90b7,	// (0x000a5cc4) bt_list_pane_ParamLimits

0x90b7,	// (0x000a5cc4) bt_list_pane

0x90d0,	// (0x000a5cdd) bt_list_pane_t1

0x90df,	// (0x000a5cec) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000aca24) bt_list_pane_t

0x9de7,	// (0x000a69f4) main_cale_prevew_pane

0x90ee,	// (0x000a5cfb) popup_cale_preview_window_ParamLimits

0x90ee,	// (0x000a5cfb) popup_cale_preview_window

0xad4f,	// (0x000a795c) bg_popup_preview_window_pane_cp05_ParamLimits

0xad4f,	// (0x000a795c) bg_popup_preview_window_pane_cp05

0xeb3b,	// (0x000ab748) list_cale_preview_pane_ParamLimits

0xeb3b,	// (0x000ab748) list_cale_preview_pane

0x910b,	// (0x000a5d18) list_double_cale_preview_pane_ParamLimits

0x910b,	// (0x000a5d18) list_double_cale_preview_pane

0x911f,	// (0x000a5d2c) list_single_cale_preview_pane_ParamLimits

0x911f,	// (0x000a5d2c) list_single_cale_preview_pane

0x9137,	// (0x000a5d44) list_single_cale_preview_pane_g1

0x913f,	// (0x000a5d4c) list_single_cale_preview_pane_t1_ParamLimits

0x913f,	// (0x000a5d4c) list_single_cale_preview_pane_t1

0x9154,	// (0x000a5d61) list_double_cale_preview_pane_g1

0x915c,	// (0x000a5d69) list_double_cale_preview_pane_t1_ParamLimits

0x915c,	// (0x000a5d69) list_double_cale_preview_pane_t1

0x9171,	// (0x000a5d7e) list_double_cale_preview_pane_t2_ParamLimits

0x9171,	// (0x000a5d7e) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000aca29) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000aca29) list_double_cale_preview_pane_t

0x9de7,	// (0x000a69f4) main_ezdial_pane

0xad4f,	// (0x000a795c) main_sp_fs_email_pane_ParamLimits

0x8764,	// (0x000a5371) cmail_ddmenu_btn01_pane_ParamLimits

0x8764,	// (0x000a5371) cmail_ddmenu_btn01_pane

0x8781,	// (0x000a538e) cmail_ddmenu_btn02_pane_ParamLimits

0x8781,	// (0x000a538e) cmail_ddmenu_btn02_pane

0x879f,	// (0x000a53ac) cmail_ddmenu_btn03_pane_ParamLimits

0x879f,	// (0x000a53ac) cmail_ddmenu_btn03_pane

0x87cf,	// (0x000a53dc) main_sp_fs_ctrlbar_pane_ParamLimits

0x87e5,	// (0x000a53f2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8e0f,	// (0x000a5a1c) list_cmail_body_pane_ParamLimits

0xe8ca,	// (0x000ab4d7) bg_button_pane_cp12

0xe8d3,	// (0x000ab4e0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8d3,	// (0x000ab4e0) list_single_cmail_header_detail_pane_g3

0xa798,	// (0x000a73a5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa798,	// (0x000a73a5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000ac9ac) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000ac9ac) list_single_cmail_header_detail_pane_t

0xa7f0,	// (0x000a73fd) phacti_term_pane_t2_ParamLimits

0xa7f0,	// (0x000a73fd) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000ac9b6) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000ac9b6) phacti_term_pane_t

0xeb47,	// (0x000ab754) aid_size_list_single_double

0x9189,	// (0x000a5d96) popup_ezdial_listscroll_window

0x91ab,	// (0x000a5db8) popup_number_entry_window_cp01

0xab5e,	// (0x000a776b) bg_popup_call_pane_cp09

0xeb53,	// (0x000ab760) ezdial_list_pane

0xeb5b,	// (0x000ab768) scroll_pane_cp23

0xcc6e,	// (0x000a987b) bg_button_pane_cp028_ParamLimits

0xcc6e,	// (0x000a987b) bg_button_pane_cp028

0x91b9,	// (0x000a5dc6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91b9,	// (0x000a5dc6) cmail_ddmenu_btn01_pane_g1

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000aca2e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000aca2e) cmail_ddmenu_btn01_pane_g

0xeb63,	// (0x000ab770) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb63,	// (0x000ab770) cmail_ddmenu_btn01_pane_t1

0xca57,	// (0x000a9664) bg_button_pane_cp029_ParamLimits

0xca57,	// (0x000a9664) bg_button_pane_cp029

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn02_pane_g1

0x91e3,	// (0x000a5df0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91e3,	// (0x000a5df0) cmail_ddmenu_btn02_pane_t1

0xe1b4,	// (0x000aadc1) bg_button_pane_cp031_ParamLimits

0xe1b4,	// (0x000aadc1) bg_button_pane_cp031

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91cb,	// (0x000a5dd8) cmail_ddmenu_btn03_pane_g1

0x91e3,	// (0x000a5df0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91e3,	// (0x000a5df0) cmail_ddmenu_btn03_pane_t1

0x5f1e,	// (0x000a2b2b) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f38,	// (0x000a2b45) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f38,	// (0x000a2b45) cell_dialer2_keypad_pane_t1_copy1

0x7ecf,	// (0x000a4adc) ncimui_group_button_pane

0xad4f,	// (0x000a795c) main_sp_fs_calendar_pane_ParamLimits

0x8e29,	// (0x000a5a36) list_single_cmail_header_caption_pane_ParamLimits

0xa805,	// (0x000a7412) aid_recal_txt_sm_pane

0x9de7,	// (0x000a69f4) mian_recal_day_pane

0xa83f,	// (0x000a744c) popup_sp_fs_cale_preview_window_ParamLimits

0xeb78,	// (0x000ab785) list_recal_day_pane

0xa924,	// (0x000a7531) list_single_recal_day_pane_ParamLimits

0xa924,	// (0x000a7531) list_single_recal_day_pane

0xeb9f,	// (0x000ab7ac) list_single_recal_day_pane_g1_ParamLimits

0xeb9f,	// (0x000ab7ac) list_single_recal_day_pane_g1

0xa936,	// (0x000a7543) list_single_recal_day_pane_g2_ParamLimits

0xa936,	// (0x000a7543) list_single_recal_day_pane_g2

0xa942,	// (0x000a754f) list_single_recal_day_pane_g3_ParamLimits

0xa942,	// (0x000a754f) list_single_recal_day_pane_g3

0x9207,	// (0x000a5e14) list_single_recal_day_pane_g4_ParamLimits

0x9207,	// (0x000a5e14) list_single_recal_day_pane_g4

0xa94e,	// (0x000a755b) list_single_recal_day_pane_g5_ParamLimits

0xa94e,	// (0x000a755b) list_single_recal_day_pane_g5

0xa95a,	// (0x000a7567) list_single_recal_day_pane_g6_ParamLimits

0xa95a,	// (0x000a7567) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000aca3d) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000aca3d) list_single_recal_day_pane_g

0xa96e,	// (0x000a757b) list_single_recal_day_pane_t1

0xad86,	// (0x000a7993) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000aca48) list_single_recal_day_pane_t

0x921f,	// (0x000a5e2c) ncimui_query_button_pane_ParamLimits

0x921f,	// (0x000a5e2c) ncimui_query_button_pane

0x922f,	// (0x000a5e3c) ncimui_query_button_pane_t1_ParamLimits

0x922f,	// (0x000a5e3c) ncimui_query_button_pane_t1

0xebab,	// (0x000ab7b8) ncimui_query_button_pane_t2_ParamLimits

0xebab,	// (0x000ab7b8) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000aca4d) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000aca4d) ncimui_query_button_pane_t

0x9242,	// (0x000a5e4f) query_button_pane_ParamLimits

0x9242,	// (0x000a5e4f) query_button_pane

0x9de7,	// (0x000a69f4) bg_button_pane_cp0028

0xebbe,	// (0x000ab7cb) query_button_pane_t1

0x41e0,	// (0x000a0ded) main_tport_pane_ParamLimits

0x8d0c,	// (0x000a5919) bg_popup_window_pane_cp01_ParamLimits

0x8d0c,	// (0x000a5919) bg_popup_window_pane_cp01

0x8d1a,	// (0x000a5927) heading_pane_cp08_ParamLimits

0x8d1a,	// (0x000a5927) heading_pane_cp08

0x8d28,	// (0x000a5935) heading_pane_cp07_ParamLimits

0x8d28,	// (0x000a5935) heading_pane_cp07

0x8d98,	// (0x000a59a5) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000ac999) cell_tport_appsw_pane_g

0xa523,	// (0x000a7130) input_candi_list_open_g1

0xb00d,	// (0x000a7c1a) list_cale_time_pane_g6_ParamLimits

0xb00d,	// (0x000a7c1a) list_cale_time_pane_g6

0x4c82,	// (0x000a188f) aid_size_touch_calib_1_ParamLimits

0x4c82,	// (0x000a188f) aid_size_touch_calib_1

0x4c8e,	// (0x000a189b) aid_size_touch_calib_2_ParamLimits

0x4c8e,	// (0x000a189b) aid_size_touch_calib_2

0x4c9c,	// (0x000a18a9) aid_size_touch_calib_3_ParamLimits

0x4c9c,	// (0x000a18a9) aid_size_touch_calib_3

0x4cac,	// (0x000a18b9) aid_size_touch_calib_4_ParamLimits

0x4cac,	// (0x000a18b9) aid_size_touch_calib_4

0x4cba,	// (0x000a18c7) main_touch_calib_button_group_pane_ParamLimits

0x4cba,	// (0x000a18c7) main_touch_calib_button_group_pane

0x4cc8,	// (0x000a18d5) main_touch_calib_pane_g1_ParamLimits

0x4cd4,	// (0x000a18e1) main_touch_calib_pane_g2_ParamLimits

0x4ce0,	// (0x000a18ed) main_touch_calib_pane_g3_ParamLimits

0x4cec,	// (0x000a18f9) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x000ac35a) main_touch_calib_pane_g_ParamLimits

0x4cf8,	// (0x000a1905) main_touch_calib_pane_t1_ParamLimits

0x4d0f,	// (0x000a191c) main_touch_calib_pane_t2_ParamLimits

0x4d28,	// (0x000a1935) main_touch_calib_pane_t3_ParamLimits

0x4d3e,	// (0x000a194b) main_touch_calib_pane_t4_ParamLimits

0x4d54,	// (0x000a1961) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x000ac363) main_touch_calib_pane_t_ParamLimits

0xd1be,	// (0x000a9dcb) list_single_fp_cale_pane_g3_ParamLimits

0xd1be,	// (0x000a9dcb) list_single_fp_cale_pane_g3

0x41c4,	// (0x000a0dd1) bg_button_pane_cp012_ParamLimits

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp03_ParamLimits

0x6e66,	// (0x000a3a73) cell_vitu2_function_top_pane_g1_ParamLimits

0x41c4,	// (0x000a0dd1) bg_vkb2_func_pane_cp04_ParamLimits

0x7e55,	// (0x000a4a62) main_ncimui_button_group_pane_ParamLimits

0x7e55,	// (0x000a4a62) main_ncimui_button_group_pane

0x7ebd,	// (0x000a4aca) main_ncimui_pane_t3_ParamLimits

0x7ebd,	// (0x000a4aca) main_ncimui_pane_t3

0xe960,	// (0x000ab56d) phacti_button_group_pane

0xeb47,	// (0x000ab754) aid_size_list_single_double_ParamLimits

0x9189,	// (0x000a5d96) popup_ezdial_listscroll_window_ParamLimits

0x91ab,	// (0x000a5db8) popup_number_entry_window_cp01_ParamLimits

0x924f,	// (0x000a5e5c) phacti_button_pane_ParamLimits

0x924f,	// (0x000a5e5c) phacti_button_pane

0x9de7,	// (0x000a69f4) bg_button_pane_cp14

0xebcc,	// (0x000ab7d9) phacti_button_pane_t1

0x9260,	// (0x000a5e6d) main_touch_calib_button_pane_ParamLimits

0x9260,	// (0x000a5e6d) main_touch_calib_button_pane

0xa9b6,	// (0x000a75c3) bg_button_pane_cp18_ParamLimits

0xa9b6,	// (0x000a75c3) bg_button_pane_cp18

0xebda,	// (0x000ab7e7) main_touch_calib_button_pane_t1_ParamLimits

0xebda,	// (0x000ab7e7) main_touch_calib_button_pane_t1

0xebf0,	// (0x000ab7fd) main_touch_calib_button_pane_t2_ParamLimits

0xebf0,	// (0x000ab7fd) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000aca52) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000aca52) main_touch_calib_button_pane_t

0x9de7,	// (0x000a69f4) cell_ncimui_button_pane

0x9de7,	// (0x000a69f4) bg_button_pane_cp032

0xec0e,	// (0x000ab81b) cell_ncimui_button_pane_t1

0x5f94,	// (0x000a2ba1) image3_infobar_pane_ParamLimits

0x5f94,	// (0x000a2ba1) image3_infobar_pane

0x828e,	// (0x000a4e9b) fs_bigclock_status_pane_ParamLimits

0x828e,	// (0x000a4e9b) fs_bigclock_status_pane

0x829b,	// (0x000a4ea8) main_fs_bigclock_clock_pane_ParamLimits

0x829b,	// (0x000a4ea8) main_fs_bigclock_clock_pane

0x82b7,	// (0x000a4ec4) main_fs_bigclock_indi_pane_ParamLimits

0x82b7,	// (0x000a4ec4) main_fs_bigclock_indi_pane

0x82e5,	// (0x000a4ef2) main_fs_bigclock_swipe_pane_ParamLimits

0x82e5,	// (0x000a4ef2) main_fs_bigclock_swipe_pane

0x9de7,	// (0x000a69f4) main_fs_clock_dumped_data

0x831f,	// (0x000a4f2c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x831f,	// (0x000a4f2c) list_single_fs_bigclock_indicator_pane_g1

0x833e,	// (0x000a4f4b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x833e,	// (0x000a4f4b) list_single_fs_bigclock_indicator_pane_g2

0x8358,	// (0x000a4f65) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8358,	// (0x000a4f65) list_single_fs_bigclock_indicator_pane_g3

0x8374,	// (0x000a4f81) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8374,	// (0x000a4f81) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x000ac87a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x000ac87a) list_single_fs_bigclock_indicator_pane_g

0x83a3,	// (0x000a4fb0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x83a3,	// (0x000a4fb0) list_single_fs_bigclock_indicator_pane_t1

0x83cb,	// (0x000a4fd8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x83cb,	// (0x000a4fd8) list_single_fs_bigclock_indicator_pane_t2

0x83f3,	// (0x000a5000) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x83f3,	// (0x000a5000) list_single_fs_bigclock_indicator_pane_t3

0x841b,	// (0x000a5028) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x841b,	// (0x000a5028) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x000ac885) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x000ac885) list_single_fs_bigclock_indicator_pane_t

0xec1c,	// (0x000ab829) image3_infobar_fav_pane_ParamLimits

0xec1c,	// (0x000ab829) image3_infobar_fav_pane

0xec2c,	// (0x000ab839) image3_infobar_loc_pane_ParamLimits

0xec2c,	// (0x000ab839) image3_infobar_loc_pane

0xec42,	// (0x000ab84f) image3_infobar_time_pane_ParamLimits

0xec42,	// (0x000ab84f) image3_infobar_time_pane

0xce8f,	// (0x000a9a9c) image3_infobar_time_pane_g1

0xec52,	// (0x000ab85f) image3_infobar_time_pane_t1

0xce8f,	// (0x000a9a9c) image3_infobar_loc_pane_g1

0xec60,	// (0x000ab86d) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000aca57) image3_infobar_loc_pane_g

0xec68,	// (0x000ab875) image3_infobar_loc_pane_t1

0xce8f,	// (0x000a9a9c) image3_infobar_fav_pane_g1

0xec76,	// (0x000ab883) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000aca5c) image3_infobar_fav_pane_g

0xec7e,	// (0x000ab88b) fs_bigclock_status_battery_pane

0xec87,	// (0x000ab894) fs_bigclock_status_signal_pane

0xec90,	// (0x000ab89d) fs_bigclock_status_title_pane

0xec99,	// (0x000ab8a6) fs_bigclock_status_signal_pane_g1

0xeca2,	// (0x000ab8af) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000aca61) fs_bigclock_status_signal_pane_g

0xecaa,	// (0x000ab8b7) fs_bigclock_status_battery_pane_g1

0xecb3,	// (0x000ab8c0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000aca66) fs_bigclock_status_battery_pane_g

0xecbb,	// (0x000ab8c8) fs_bigclock_status_title_pane_t1

0x9270,	// (0x000a5e7d) main_fs_bigclock_clock_pane_g1

0x9270,	// (0x000a5e7d) main_fs_bigclock_clock_pane_g2

0x927f,	// (0x000a5e8c) main_fs_bigclock_clock_pane_g3

0x927f,	// (0x000a5e8c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000aca6b) main_fs_bigclock_clock_pane_g

0x928f,	// (0x000a5e9c) main_fs_bigclock_clock_pane_t1

0x92a4,	// (0x000a5eb1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000aca74) main_fs_bigclock_clock_pane_t

0xecc9,	// (0x000ab8d6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecc9,	// (0x000ab8d6) list_single_fs_bigclock_indicator_pane

0xecda,	// (0x000ab8e7) list_single_fs_bigclock_pane_ParamLimits

0xecda,	// (0x000ab8e7) list_single_fs_bigclock_pane

0xed00,	// (0x000ab90d) main_fs_bigclock_indicator_pane_t1

0xed0f,	// (0x000ab91c) list_single_fs_bigclock_pane_g1

0xed17,	// (0x000ab924) list_single_fs_bigclock_pane_t1

0xce8f,	// (0x000a9a9c) main_fs_bigclock_swipe_pane_g1

0xed5a,	// (0x000ab967) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000aca85) main_fs_bigclock_swipe_pane_g

0xed62,	// (0x000ab96f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed62,	// (0x000ab96f) main_fs_bigclock_swipe_pane_t1

0x3195,	// (0x0009fda2) call_type_pane_ParamLimits

0x9de7,	// (0x000a69f4) main_btmg_pane

0xa88a,	// (0x000a7497) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa88a,	// (0x000a7497) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000ac9f8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000ac9f8) list_single_cale_mrui_row_pane_g

0xa912,	// (0x000a751f) list_recal_vselct_arw_lo_pane

0xeb97,	// (0x000ab7a4) list_recal_vselct_arw_up_pane

0xa91a,	// (0x000a7527) list_recal_vselct_pane

0x92fb,	// (0x000a5f08) btmg_button_pane

0x9307,	// (0x000a5f14) main_btmg_pane_g1

0x9de7,	// (0x000a69f4) bg_button_pane_cp044

0xed7f,	// (0x000ab98c) btmg_button_pane_t1

0xca43,	// (0x000a9650) aid_listscroll_gen

0xad4f,	// (0x000a795c) main_cntbar_detail_pane

0xe87a,	// (0x000ab487) list_cmail_folder_pane

0xd4ca,	// (0x000aa0d7) sp_fs_scroll_pane_cp03_ParamLimits

0xad98,	// (0x000a79a5) list_single_fs_dyc_pane_cp01_ParamLimits

0xad98,	// (0x000a79a5) list_single_fs_dyc_pane_cp01

0xed8d,	// (0x000ab99a) aid_size_cmail_indent

0xadb2,	// (0x000a79bf) list_single_dyc_row_pane_cp01

0x932f,	// (0x000a5f3c) cntbar_detail_list_pane_ParamLimits

0x932f,	// (0x000a5f3c) cntbar_detail_list_pane

0x936f,	// (0x000a5f7c) main_cntbar_detail_cont_pane_ParamLimits

0x936f,	// (0x000a5f7c) main_cntbar_detail_cont_pane

0x30ba,	// (0x0009fcc7) scroll_pane_cp032_ParamLimits

0x30ba,	// (0x0009fcc7) scroll_pane_cp032

0x937b,	// (0x000a5f88) cntbar_detail_list_event_pane_ParamLimits

0x937b,	// (0x000a5f88) cntbar_detail_list_event_pane

0x933d,	// (0x000a5f4a) cntbar_detail_list_shct_pane

0xae98,	// (0x000a7aa5) aid_list_gen

0xed96,	// (0x000ab9a3) aid_scroll

0xed9f,	// (0x000ab9ac) aid_size_touch_scroll_bar

0x75c5,	// (0x000a41d2) aid_list_double

0x938b,	// (0x000a5f98) aid_list_single

0x75b3,	// (0x000a41c0) aid_list_single_lg

0x9394,	// (0x000a5fa1) aid_list_z_g_a_sm

0x939c,	// (0x000a5fa9) aid_list_z_g_d

0x93a4,	// (0x000a5fb1) aid_txt_z_prm

0x93b2,	// (0x000a5fbf) aid_txt_z_prm_cp01

0x93c0,	// (0x000a5fcd) aid_txt_z_sec

0x93ce,	// (0x000a5fdb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93ce,	// (0x000a5fdb) main_cntbar_detail_cont_pane_g1

0x93db,	// (0x000a5fe8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93db,	// (0x000a5fe8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000aca8a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000aca8a) main_cntbar_detail_cont_pane_g

0xeda8,	// (0x000ab9b5) main_cntbar_detail_cont_pane_t1

0xedb6,	// (0x000ab9c3) main_cntbar_detail_cont_pane_t2

0xedc4,	// (0x000ab9d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000aca8f) main_cntbar_detail_cont_pane_t

0x93e7,	// (0x000a5ff4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93e7,	// (0x000a5ff4) cell_cntbar_detail_list_shct_pane

0xedd2,	// (0x000ab9df) cntbar_detail_list_shct_pane_g1

0xeddb,	// (0x000ab9e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000aca96) cntbar_detail_list_shct_pane_g

0x93fb,	// (0x000a6008) cntbar_detail_list_event_pane_g1_ParamLimits

0x93fb,	// (0x000a6008) cntbar_detail_list_event_pane_g1

0x9407,	// (0x000a6014) cntbar_detail_list_event_pane_g2_ParamLimits

0x9407,	// (0x000a6014) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000aca9b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000aca9b) cntbar_detail_list_event_pane_g

0x9475,	// (0x000a6082) cntbar_detail_list_event_pane_t1_ParamLimits

0x9475,	// (0x000a6082) cntbar_detail_list_event_pane_t1

0x948a,	// (0x000a6097) cntbar_detail_list_event_pane_t2_ParamLimits

0x948a,	// (0x000a6097) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000acaa8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000acaa8) cntbar_detail_list_event_pane_t

0xce8f,	// (0x000a9a9c) cell_cntbar_detail_list_shct_pane_g1

0xb5e6,	// (0x000a81f3) navi_pane_mv_g3

0xad4f,	// (0x000a795c) main_cntbar_detail_pane_ParamLimits

0x9de7,	// (0x000a69f4) main_notif_wgt_pane

0x5c16,	// (0x000a2823) aid_tch_main_mp4_pane_g4

0x5e7f,	// (0x000a2a8c) popup_slider_window_cp02

0xa908,	// (0x000a7515) list_recal_day_event_pane

0x930f,	// (0x000a5f1c) cntbar_detail_btn_pane_ParamLimits

0x930f,	// (0x000a5f1c) cntbar_detail_btn_pane

0x931f,	// (0x000a5f2c) cntbar_detail_btn_pane_cp01_ParamLimits

0x931f,	// (0x000a5f2c) cntbar_detail_btn_pane_cp01

0x933d,	// (0x000a5f4a) cntbar_detail_list_shct_pane_ParamLimits

0x9349,	// (0x000a5f56) cntbar_detail_pane_g1_ParamLimits

0x9349,	// (0x000a5f56) cntbar_detail_pane_g1

0x9359,	// (0x000a5f66) cntbar_detail_pane_t1_ParamLimits

0x9359,	// (0x000a5f66) cntbar_detail_pane_t1

0x9413,	// (0x000a6020) cntbar_detail_list_event_pane_g3_ParamLimits

0x9413,	// (0x000a6020) cntbar_detail_list_event_pane_g3

0x942b,	// (0x000a6038) cntbar_detail_list_event_pane_g4_ParamLimits

0x942b,	// (0x000a6038) cntbar_detail_list_event_pane_g4

0x9443,	// (0x000a6050) cntbar_detail_list_event_pane_g5_ParamLimits

0x9443,	// (0x000a6050) cntbar_detail_list_event_pane_g5

0x945b,	// (0x000a6068) cntbar_detail_list_event_pane_g6_ParamLimits

0x945b,	// (0x000a6068) cntbar_detail_list_event_pane_g6

0x949f,	// (0x000a60ac) cntbar_detail_list_event_pane_t3_ParamLimits

0x949f,	// (0x000a60ac) cntbar_detail_list_event_pane_t3

0x94b1,	// (0x000a60be) popup_notif_wgt_window_ParamLimits

0x94b1,	// (0x000a60be) popup_notif_wgt_window

0x94c1,	// (0x000a60ce) popup_submenu_window_cp01_ParamLimits

0x94c1,	// (0x000a60ce) popup_submenu_window_cp01

0xab5e,	// (0x000a776b) bg_popup_window_pane_cp10

0xede4,	// (0x000ab9f1) listscroll_notif_wgt_pane

0xedf6,	// (0x000aba03) list_notif_wgt_window

0xedff,	// (0x000aba0c) scroll_pane_cp033

0x94d1,	// (0x000a60de) list_notif_wgt_row_pane_ParamLimits

0x94d1,	// (0x000a60de) list_notif_wgt_row_pane

0xee08,	// (0x000aba15) aid_size_list_notif_wgt_del

0xee15,	// (0x000aba22) list_notif_wgt_row_pane_g1

0xee21,	// (0x000aba2e) list_notif_wgt_row_pane_g2

0xee30,	// (0x000aba3d) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000acaaf) list_notif_wgt_row_pane_g

0xee3d,	// (0x000aba4a) list_notif_wgt_row_pane_t1

0xee53,	// (0x000aba60) list_notif_wgt_row_pane_t2

0xee65,	// (0x000aba72) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000acab6) list_notif_wgt_row_pane_t

0xda83,	// (0x000aa690) list_recal_day_event_pane_g1

0xee77,	// (0x000aba84) list_recal_day_event_pane_t1

0x9de7,	// (0x000a69f4) bg_button_pane_cp045

0x94e5,	// (0x000a60f2) cntbar_detail_btn_pane_t1

0xca57,	// (0x000a9664) main_callh_pane_ParamLimits

0xca57,	// (0x000a9664) main_callh_pane

0x9de7,	// (0x000a69f4) main_coverflow0_pane

0x9de7,	// (0x000a69f4) main_wgtman_pane

0x82fd,	// (0x000a4f0a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82fd,	// (0x000a4f0a) main_fs_bigclock_unlock_btn_pane

0x8d90,	// (0x000a599d) bg_button_pane_cp16

0x8da0,	// (0x000a59ad) cell_tport_appsw_pane_g3

0x94f3,	// (0x000a6100) cf0_flow_pane_ParamLimits

0x94f3,	// (0x000a6100) cf0_flow_pane

0xee9d,	// (0x000abaaa) listscroll_cf0_pane

0xeea8,	// (0x000abab5) main_cf0_pane_g1

0x9502,	// (0x000a610f) main_cf0_pane_t1_ParamLimits

0x9502,	// (0x000a610f) main_cf0_pane_t1

0x9516,	// (0x000a6123) main_cf0_pane_t2_ParamLimits

0x9516,	// (0x000a6123) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000acac2) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000acac2) main_cf0_pane_t

0xeeba,	// (0x000abac7) scroll_pane_cp11

0x952a,	// (0x000a6137) cf0_flow_pane_g1

0x9532,	// (0x000a613f) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000acac7) cf0_flow_pane_g

0x953a,	// (0x000a6147) cf0_flow_pane_t1

0x9de7,	// (0x000a69f4) main_call6_pane

0x9de7,	// (0x000a69f4) main_calllock_pane

0x9548,	// (0x000a6155) call6_btn_grp_pane_ParamLimits

0x9548,	// (0x000a6155) call6_btn_grp_pane

0x9555,	// (0x000a6162) call6_pane_g1_ParamLimits

0x9555,	// (0x000a6162) call6_pane_g1

0x9565,	// (0x000a6172) popup_call6_1st_window_ParamLimits

0x9565,	// (0x000a6172) popup_call6_1st_window

0x9575,	// (0x000a6182) popup_call6_2nd_window_ParamLimits

0x9575,	// (0x000a6182) popup_call6_2nd_window

0x9585,	// (0x000a6192) cell_call6_btn_pane_ParamLimits

0x9585,	// (0x000a6192) cell_call6_btn_pane

0xab5e,	// (0x000a776b) bg_popup_call2_in_pane_cp03

0xeec5,	// (0x000abad2) popup_call6_1st_window_g1

0xeecd,	// (0x000abada) popup_call6_1st_window_g2

0xeed5,	// (0x000abae2) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000acacc) popup_call6_1st_window_g

0xeedd,	// (0x000abaea) popup_call6_1st_window_t1

0xeeec,	// (0x000abaf9) popup_call6_1st_window_t2

0xeefc,	// (0x000abb09) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000acad3) popup_call6_1st_window_t

0xab5e,	// (0x000a776b) bg_popup_call2_in_pane_cp04

0xeec5,	// (0x000abad2) popup_call6_2nd_window_g1

0xeecd,	// (0x000abada) popup_call6_2nd_window_g2

0xeed5,	// (0x000abae2) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000acacc) popup_call6_2nd_window_g

0xeedd,	// (0x000abaea) popup_call6_2nd_window_t1

0x0ebe,	// (0x0009dacb) bg_button_pane_cp15

0x9596,	// (0x000a61a3) cell_call6_btn_pane_g1

0x959f,	// (0x000a61ac) cell_call6_btn_pane_t1

0x95ae,	// (0x000a61bb) listscroll_wgtman_pane_ParamLimits

0x95ae,	// (0x000a61bb) listscroll_wgtman_pane

0x95ca,	// (0x000a61d7) wgtman_btn_pane_ParamLimits

0x95ca,	// (0x000a61d7) wgtman_btn_pane

0xb3f8,	// (0x000a8005) aid_scroll_copy1

0xef0c,	// (0x000abb19) list_wgtman_pane

0x95ff,	// (0x000a620c) wgtman_btn_pane_g1_ParamLimits

0x95ff,	// (0x000a620c) wgtman_btn_pane_g1

0x9627,	// (0x000a6234) wgtman_btn_pane_t1_ParamLimits

0x9627,	// (0x000a6234) wgtman_btn_pane_t1

0xef16,	// (0x000abb23) wgtman_btn_pane_t2_ParamLimits

0xef16,	// (0x000abb23) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000acada) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000acada) wgtman_btn_pane_t

0x965e,	// (0x000a626b) listrow_wgtman_pane_ParamLimits

0x965e,	// (0x000a626b) listrow_wgtman_pane

0x9673,	// (0x000a6280) listrow_wgtman_pane_g1

0x9680,	// (0x000a628d) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000acadf) listrow_wgtman_pane_g

0x969e,	// (0x000a62ab) listrow_wgtman_pane_t1

0x96b6,	// (0x000a62c3) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000acae4) listrow_wgtman_pane_t

0x96dc,	// (0x000a62e9) wait_bar_pane_cp09

0xef2d,	// (0x000abb3a) main_calllock_btn_pane

0xef37,	// (0x000abb44) main_calllock_pane_g1

0x9de7,	// (0x000a69f4) bg_button_pane_cp17

0xef43,	// (0x000abb50) main_calllock_btn_pane_g1

0xef4c,	// (0x000abb59) main_calllock_btn_pane_t1

0x9de7,	// (0x000a69f4) main_dialer3_pane

0x9de7,	// (0x000a69f4) main_fmrd2_pane

0xce8f,	// (0x000a9a9c) main_fs_bigclock_unlock_btn_pane_g1

0x96f6,	// (0x000a6303) main_fs_bigclock_unlock_btn_pane_t1

0x9704,	// (0x000a6311) area_fmrd2_info_pane_ParamLimits

0x9704,	// (0x000a6311) area_fmrd2_info_pane

0x9710,	// (0x000a631d) area_fmrd2_visual_pane_ParamLimits

0x9710,	// (0x000a631d) area_fmrd2_visual_pane

0x971e,	// (0x000a632b) fmrd2_indi_pane_ParamLimits

0x971e,	// (0x000a632b) fmrd2_indi_pane

0x972b,	// (0x000a6338) area_fmrd2_visual_pane_g1

0x9733,	// (0x000a6340) area_fmrd2_visual_pane_t1

0x9743,	// (0x000a6350) area_fmrd2_visual_pane_t2

0x9753,	// (0x000a6360) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000acaee) area_fmrd2_visual_pane_t

0x9763,	// (0x000a6370) area_fmrd2_info_pane_g1

0x976b,	// (0x000a6378) area_fmrd2_info_pane_t1

0x977b,	// (0x000a6388) area_fmrd2_info_pane_t2

0x978b,	// (0x000a6398) area_fmrd2_info_pane_t3

0x979b,	// (0x000a63a8) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000acaf5) area_fmrd2_info_pane_t

0x97ab,	// (0x000a63b8) fmrd2_indi_pane_t1

0x97bb,	// (0x000a63c8) fmrd2_indi_pane_t2

0x97cb,	// (0x000a63d8) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000acafe) fmrd2_indi_pane_t

0x8385,	// (0x000a4f92) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8385,	// (0x000a4f92) list_single_fs_bigclock_indicator_pane_g5

0x843a,	// (0x000a5047) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x843a,	// (0x000a5047) list_single_fs_bigclock_indicator_pane_t5

0x8efb,	// (0x000a5b08) aid_cell_bcale_month_pane_ParamLimits

0x8efb,	// (0x000a5b08) aid_cell_bcale_month_pane

0x8f19,	// (0x000a5b26) bcale_month_pane_ParamLimits

0x8f19,	// (0x000a5b26) bcale_month_pane

0x8f37,	// (0x000a5b44) bcale_preview_pane_ParamLimits

0x8f37,	// (0x000a5b44) bcale_preview_pane

0xed17,	// (0x000ab924) list_single_fs_bigclock_pane_t1_ParamLimits

0xed36,	// (0x000ab943) list_single_fs_bigclock_pane_t2_ParamLimits

0xed36,	// (0x000ab943) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000aca80) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000aca80) list_single_fs_bigclock_pane_t

0x96ee,	// (0x000a62fb) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000acae9) main_fs_bigclock_unlock_btn_pane_g

0x97db,	// (0x000a63e8) aid_dia3_key_size_ParamLimits

0x97db,	// (0x000a63e8) aid_dia3_key_size

0x97e7,	// (0x000a63f4) aid_dia3_listrow_size_ParamLimits

0x97e7,	// (0x000a63f4) aid_dia3_listrow_size

0x97f7,	// (0x000a6404) dia3_keypad_fun_pane_ParamLimits

0x97f7,	// (0x000a6404) dia3_keypad_fun_pane

0x9807,	// (0x000a6414) dia3_keypad_num_pane_ParamLimits

0x9807,	// (0x000a6414) dia3_keypad_num_pane

0x9817,	// (0x000a6424) dia3_listscroll_pane_ParamLimits

0x9817,	// (0x000a6424) dia3_listscroll_pane

0x9825,	// (0x000a6432) dia3_numentry_pane_ParamLimits

0x9825,	// (0x000a6432) dia3_numentry_pane

0xef5b,	// (0x000abb68) dia3_list_pane

0x9833,	// (0x000a6440) scroll_pane_cp12

0x9de7,	// (0x000a69f4) bg_dia3_numentry_pane

0x983e,	// (0x000a644b) dia3_numentry_pane_t1

0x984d,	// (0x000a645a) cell_dia3_key_num_pane

0x9855,	// (0x000a6462) cell_dia3_key0_fun_pane_ParamLimits

0x9855,	// (0x000a6462) cell_dia3_key0_fun_pane

0x9862,	// (0x000a646f) cell_dia3_key1_fun_pane_ParamLimits

0x9862,	// (0x000a646f) cell_dia3_key1_fun_pane

0x986f,	// (0x000a647c) dia3_listrow_pane

0xe331,	// (0x000aaf3e) bg_dia3_numentry_pane_g1

0x9de7,	// (0x000a69f4) bg_button_pane_cp21

0x987c,	// (0x000a6489) cell_dia3_key_num_pane_t1

0x988a,	// (0x000a6497) cell_dia3_key_num_pane_t2

0x9899,	// (0x000a64a6) cell_dia3_key_num_pane_t3

0x98a8,	// (0x000a64b5) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000acb05) cell_dia3_key_num_pane_t

0x9de7,	// (0x000a69f4) bg_button_pane_cp19

0x98b7,	// (0x000a64c4) cell_dia3_key0_fun_pane_g1

0x9de7,	// (0x000a69f4) bg_button_pane_cp20

0x98bf,	// (0x000a64cc) cell_dia3_key1_fun_pane_g1

0x98c7,	// (0x000a64d4) area_left_week_number_pane

0x98da,	// (0x000a64e7) area_top_day_name_pane

0x98e8,	// (0x000a64f5) frame_month_view_pane

0xef66,	// (0x000abb73) grid_month_view_pane

0x98fd,	// (0x000a650a) cell_top_day_name_pane_ParamLimits

0x98fd,	// (0x000a650a) cell_top_day_name_pane

0x9919,	// (0x000a6526) cell_area_left_week_number_pane_ParamLimits

0x9919,	// (0x000a6526) cell_area_left_week_number_pane

0x993a,	// (0x000a6547) cell_month_view_pane_ParamLimits

0x993a,	// (0x000a6547) cell_month_view_pane

0xef74,	// (0x000abb81) frm_month_g1

0x9966,	// (0x000a6573) frm_month_g2

0x9977,	// (0x000a6584) frm_month_g3

0x9988,	// (0x000a6595) frm_month_g4

0x9999,	// (0x000a65a6) frm_month_g5

0x99aa,	// (0x000a65b7) frm_month_g6

0x99bd,	// (0x000a65ca) frm_month_g7

0xef81,	// (0x000abb8e) frm_month_g8

0x99d0,	// (0x000a65dd) frm_month_g9

0x99dd,	// (0x000a65ea) frm_month_g10

0x99ea,	// (0x000a65f7) frm_month_g11

0x99f7,	// (0x000a6604) frm_month_g12

0x9a04,	// (0x000a6611) frm_month_g13

0x9a13,	// (0x000a6620) frm_month_g14

0x9a22,	// (0x000a662f) frm_month_g15

0x9a31,	// (0x000a663e) frm_month_g16

0x000f,

0xff01,	// (0x000acb0e) frm_month_g

0xef8e,	// (0x000abb9b) cell_top_day_name_pane_t1

0x9a40,	// (0x000a664d) cell_area_left_week_number_pane_g1

0x9a4f,	// (0x000a665c) cell_area_left_week_number_pane_t1

0xd0be,	// (0x000a9ccb) cell_month_view_pane_g1

0x9a65,	// (0x000a6672) cell_month_view_pane_t1

0x9de7,	// (0x000a69f4) main_fps_pane

0xe782,	// (0x000ab38f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe782,	// (0x000ab38f) cmail_ddmenu_btn02_pane_cp1

0xe79e,	// (0x000ab3ab) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe79e,	// (0x000ab3ab) cmail_ddmenu_btn02_pane_cp2

0x91d7,	// (0x000a5de4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91d7,	// (0x000a5de4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000aca33) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000aca33) cmail_ddmenu_btn02_pane_g

0x91f5,	// (0x000a5e02) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91f5,	// (0x000a5e02) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000aca38) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000aca38) cmail_ddmenu_btn02_pane_t

0x9a7b,	// (0x000a6688) fps_text_pane_ParamLimits

0x9a7b,	// (0x000a6688) fps_text_pane

0x9a88,	// (0x000a6695) main_fps_pane_g1_ParamLimits

0x9a88,	// (0x000a6695) main_fps_pane_g1

0x9a94,	// (0x000a66a1) wait_bar_pane_cp010_ParamLimits

0x9a94,	// (0x000a66a1) wait_bar_pane_cp010

0x9aa0,	// (0x000a66ad) fps_text_pane_t1_ParamLimits

0x9aa0,	// (0x000a66ad) fps_text_pane_t1

0x6340,	// (0x000a2f4d) cam4_image_uncrop_pane_g1

0x6349,	// (0x000a2f56) cam4_image_uncrop_pane_g2

0x6352,	// (0x000a2f5f) cam4_image_uncrop_pane_g3

0x635b,	// (0x000a2f68) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000ac4fb) cam4_image_uncrop_pane_g

0x986f,	// (0x000a647c) dia3_listrow_pane_ParamLimits

0x9de7,	// (0x000a69f4) main_phob2_pane

0x8d72,	// (0x000a597f) cell_tport_appsw_pane_cp02_ParamLimits

0x8d72,	// (0x000a597f) cell_tport_appsw_pane_cp02

0x8d81,	// (0x000a598e) cell_tport_appsw_pane_cp03_ParamLimits

0x8d81,	// (0x000a598e) cell_tport_appsw_pane_cp03

0x9de7,	// (0x000a69f4) phob2_contact_card_pane

0x9de7,	// (0x000a69f4) phob2_listscroll_pane

0xefa1,	// (0x000abbae) phob2_list_pane

0xefa9,	// (0x000abbb6) scroll_pane_cp034

0x9ab9,	// (0x000a66c6) phob2_cc_data_pane_ParamLimits

0x9ab9,	// (0x000a66c6) phob2_cc_data_pane

0x9ad0,	// (0x000a66dd) phob2_cc_listscroll_pane_ParamLimits

0x9ad0,	// (0x000a66dd) phob2_cc_listscroll_pane

0x9aec,	// (0x000a66f9) list_double_large_graphic_phob2_pane_ParamLimits

0x9aec,	// (0x000a66f9) list_double_large_graphic_phob2_pane

0x9b04,	// (0x000a6711) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b04,	// (0x000a6711) list_double_large_graphic_phob2_pane_g1

0x9b1a,	// (0x000a6727) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b1a,	// (0x000a6727) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000acb2f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000acb2f) list_double_large_graphic_phob2_pane_g

0x9b26,	// (0x000a6733) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b26,	// (0x000a6733) list_double_large_graphic_phob2_pane_t1

0x9b3b,	// (0x000a6748) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b3b,	// (0x000a6748) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000acb34) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000acb34) list_double_large_graphic_phob2_pane_t

0x9de7,	// (0x000a69f4) list_highlight_pane_cp024

0x9b4d,	// (0x000a675a) phob2_cc_button_pane

0x9b55,	// (0x000a6762) phob2_cc_data_pane_g1_ParamLimits

0x9b55,	// (0x000a6762) phob2_cc_data_pane_g1

0x9b69,	// (0x000a6776) phob2_cc_data_pane_g2_ParamLimits

0x9b69,	// (0x000a6776) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000acb39) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000acb39) phob2_cc_data_pane_g

0x9b78,	// (0x000a6785) phob2_cc_data_pane_t1_ParamLimits

0x9b78,	// (0x000a6785) phob2_cc_data_pane_t1

0x9b91,	// (0x000a679e) phob2_cc_data_pane_t2_ParamLimits

0x9b91,	// (0x000a679e) phob2_cc_data_pane_t2

0x9baa,	// (0x000a67b7) phob2_cc_data_pane_t3_ParamLimits

0x9baa,	// (0x000a67b7) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000acb3e) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000acb3e) phob2_cc_data_pane_t

0xefb1,	// (0x000abbbe) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x000abbbe) phob2_cc_list_pane

0xdd52,	// (0x000aa95f) scroll_pane_cp035_ParamLimits

0xdd52,	// (0x000aa95f) scroll_pane_cp035

0xad4f,	// (0x000a795c) bg_button_pane_cp033

0xefbd,	// (0x000abbca) phob2_cc_button_pane_g1

0xefc9,	// (0x000abbd6) phob2_cc_button_pane_t1

0xefde,	// (0x000abbeb) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000acb45) phob2_cc_button_pane_t

0x9bc3,	// (0x000a67d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9bc3,	// (0x000a67d0) list_double_large_graphic_phob2_cc_pane

0x9c12,	// (0x000a681f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c12,	// (0x000a681f) list_double_large_graphic_phob2_cc_pane_g1

0x9c23,	// (0x000a6830) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c23,	// (0x000a6830) list_double_large_graphic_phob2_cc_pane_g2

0x9c32,	// (0x000a683f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c32,	// (0x000a683f) list_double_large_graphic_phob2_cc_pane_g3

0x9c41,	// (0x000a684e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9c41,	// (0x000a684e) list_double_large_graphic_phob2_cc_pane_g4

0x9c52,	// (0x000a685f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9c52,	// (0x000a685f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000acb4a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000acb4a) list_double_large_graphic_phob2_cc_pane_g

0x9c61,	// (0x000a686e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9c61,	// (0x000a686e) list_double_large_graphic_phob2_cc_pane_t1

0x9c8a,	// (0x000a6897) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c8a,	// (0x000a6897) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000acb55) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000acb55) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x000abbfd) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x000abbfd) list_highlight_pane_cp025

0xad4f,	// (0x000a795c) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x000abbca) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x000abbd6) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x000abbeb) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000acb45) phob2_cc_button_pane_t_ParamLimits

0x0eb2,	// (0x0009dabf) popup_wgtman_window

0xd95d,	// (0x000aa56a) scroll_pane_cp038

0x95e7,	// (0x000a61f4) wgtman_btn_pane_cp_01_ParamLimits

0x95e7,	// (0x000a61f4) wgtman_btn_pane_cp_01

0xeffe,	// (0x000abc0b) wgtman_content_pane

0xf007,	// (0x000abc14) wgtman_heading_pane

0x9de7,	// (0x000a69f4) bg_heading_pane_cp02

0xf010,	// (0x000abc1d) wgtman_heading_pane_g1

0xf018,	// (0x000abc25) wgtman_heading_pane_t1

0xf026,	// (0x000abc33) scroll_pane_cp036

0xf02e,	// (0x000abc3b) wgtman_list_pane

0xea2a,	// (0x000ab637) wgtman_list_pane_t1_ParamLimits

0xea2a,	// (0x000ab637) wgtman_list_pane_t1

0x629d,	// (0x000a2eaa) cam4_grid_pane

0x7081,	// (0x000a3c8e) bg_button_pane_cp015_ParamLimits

0x7093,	// (0x000a3ca0) bg_button_pane_cp016_ParamLimits

0x70a6,	// (0x000a3cb3) bg_button_pane_cp017_ParamLimits

0x70fc,	// (0x000a3d09) popup_vitu2_query_window_g3_ParamLimits

0x70fc,	// (0x000a3d09) popup_vitu2_query_window_g3

0x71bb,	// (0x000a3dc8) popup_vitu2_query_window_t6_ParamLimits

0x71bb,	// (0x000a3dc8) popup_vitu2_query_window_t6

0x71e6,	// (0x000a3df3) popup_vitu2_query_window_t7_ParamLimits

0x71e6,	// (0x000a3df3) popup_vitu2_query_window_t7

0xe5f3,	// (0x000ab200) cam4_grid_pane_g1

0xe5fc,	// (0x000ab209) cam4_grid_pane_g2

0xf036,	// (0x000abc43) cam4_grid_pane_g3

0xf03f,	// (0x000abc4c) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000acb5a) cam4_grid_pane_g

0x1ed5,	// (0x0009eae2) aid_placing_vt_slider_lsc_ParamLimits

0x2208,	// (0x0009ee15) vidtel_button_pane_ParamLimits

0x2208,	// (0x0009ee15) vidtel_button_pane

0x9de7,	// (0x000a69f4) bg_button_pane_cp034

0xf04a,	// (0x000abc57) vidtel_button_pane_g1

0xf052,	// (0x000abc5f) vidtel_button_pane_t1

0xda61,	// (0x000aa66e) aid_size_vtel_slider_touch

0xdd52,	// (0x000aa95f) scroll_pane_cp039

0x802c,	// (0x000a4c39) ncim_query_button_pane_cp01_ParamLimits

0x804b,	// (0x000a4c58) ncimui_query_pane_g1_ParamLimits

0xad4f,	// (0x000a795c) input_focus_pane_cp012_ParamLimits

0xe36f,	// (0x000aaf7c) ncim_query_entry_pane_t1_ParamLimits

0xdd52,	// (0x000aa95f) scroll_pane_cp039_ParamLimits

0xb4cf,	// (0x000a80dc) navi_pane_bcale_mc_g1

0xb4d7,	// (0x000a80e4) navi_pane_bcale_mc_t1

0xe7e9,	// (0x000ab3f6) main_sp_fs_email_pane_g1

0xe7f5,	// (0x000ab402) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x000ac8eb) main_sp_fs_email_pane_g

0xea9f,	// (0x000ab6ac) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea9f,	// (0x000ab6ac) list_single_cale_mrui_row_pane_g3

0x9215,	// (0x000a5e22) list_single_recal_day_pane_g5_event_pane

0xa966,	// (0x000a7573) list_single_recal_day_pane_g7

0xf068,	// (0x000abc75) list_recal_day_event_pane_cp01

0xf071,	// (0x000abc7e) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x000abc86) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x000abc8e) list_recal_vselct_pane_cp01

0xda83,	// (0x000aa690) list_recal_day_event_pane_cp01_g1

0xadbb,	// (0x000a79c8) list_recal_day_event_pane_cp01_t1

0xa96e,	// (0x000a757b) list_single_recal_day_pane_t1_ParamLimits

0xad86,	// (0x000a7993) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000aca48) list_single_recal_day_pane_t_ParamLimits

0xa494,	// (0x000a70a1) bg_notes_pane_ParamLimits

0xa994,	// (0x000a75a1) list_notes_pane_ParamLimits

0x11d6,	// (0x0009dde3) scroll_pane_cp06_ParamLimits

0xa9b6,	// (0x000a75c3) main_notes_pane_ParamLimits

0x9de7,	// (0x000a69f4) main_welc_pane

0x9cb3,	// (0x000a68c0) main_welc_body_pane_ParamLimits

0x9cb3,	// (0x000a68c0) main_welc_body_pane

0x9cce,	// (0x000a68db) main_welc_opti_pane_ParamLimits

0x9cce,	// (0x000a68db) main_welc_opti_pane

0x9d03,	// (0x000a6910) main_welc_pane_t1_ParamLimits

0x9d03,	// (0x000a6910) main_welc_pane_t1

0x9d21,	// (0x000a692e) main_welc_body_row_pane_ParamLimits

0x9d21,	// (0x000a692e) main_welc_body_row_pane

0xe1b4,	// (0x000aadc1) main_welc_opti_row_pane_ParamLimits

0xe1b4,	// (0x000aadc1) main_welc_opti_row_pane

0xf08b,	// (0x000abc98) main_welc_opti_row_pane_g1

0x9d3b,	// (0x000a6948) main_welc_opti_row_pane_t1

0xf093,	// (0x000abca0) main_welc_body_row_pane_t1

0xedee,	// (0x000ab9fb) popup_notif_wgt_heading_pane

0xee08,	// (0x000aba15) aid_size_list_notif_wgt_del_ParamLimits

0xee15,	// (0x000aba22) list_notif_wgt_row_pane_g1_ParamLimits

0xee21,	// (0x000aba2e) list_notif_wgt_row_pane_g2_ParamLimits

0xee30,	// (0x000aba3d) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000acaaf) list_notif_wgt_row_pane_g_ParamLimits

0xee3d,	// (0x000aba4a) list_notif_wgt_row_pane_t1_ParamLimits

0xee53,	// (0x000aba60) list_notif_wgt_row_pane_t2_ParamLimits

0xee65,	// (0x000aba72) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000acab6) list_notif_wgt_row_pane_t_ParamLimits

0x9673,	// (0x000a6280) listrow_wgtman_pane_g1_ParamLimits

0x9680,	// (0x000a628d) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000acadf) listrow_wgtman_pane_g_ParamLimits

0x969e,	// (0x000a62ab) listrow_wgtman_pane_t1_ParamLimits

0x96b6,	// (0x000a62c3) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000acae4) listrow_wgtman_pane_t_ParamLimits

0x96dc,	// (0x000a62e9) wait_bar_pane_cp09_ParamLimits

0x9de7,	// (0x000a69f4) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000abcaf) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000abcb7) popup_notif_wgt_heading_pane_t1

0x9de7,	// (0x000a69f4) main_vids_pane

0x9de7,	// (0x000a69f4) vids_listscroll_pane

0x9d4a,	// (0x000a6957) scroll_pane_cp040

0x9de7,	// (0x000a69f4) vids_list_pane

0x9d55,	// (0x000a6962) vids_list_double_pane_ParamLimits

0x9d55,	// (0x000a6962) vids_list_double_pane

0x9d69,	// (0x000a6976) vids_list_double_pane_g1

0x9d72,	// (0x000a697f) vids_list_double_pane_t1

0x9d82,	// (0x000a698f) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000acb68) vids_list_double_pane_t

0x41c4,	// (0x000a0dd1) main_ncimui_pane_ParamLimits

0x7e6d,	// (0x000a4a7a) main_ncimui_pane_g1_ParamLimits

0x7e7b,	// (0x000a4a88) main_ncimui_pane_g2_ParamLimits

0x7e7b,	// (0x000a4a88) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x000ac7f0) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x000ac7f0) main_ncimui_pane_g

0x9ce9,	// (0x000a68f6) main_welc_pane_g1_ParamLimits

0x9ce9,	// (0x000a68f6) main_welc_pane_g1

0x9cf5,	// (0x000a6902) main_welc_pane_g2_ParamLimits

0x9cf5,	// (0x000a6902) main_welc_pane_g2

0x0001,

0xff56,	// (0x000acb63) main_welc_pane_g_ParamLimits

0xff56,	// (0x000acb63) main_welc_pane_g

0xa494,	// (0x000a70a1) listscroll_mce_pane_ParamLimits

0xb626,	// (0x000a8233) wait_bar_pane_cp10

0xca4b,	// (0x000a9658) main_cale_day_pane_ParamLimits

0xca4b,	// (0x000a9658) main_cale_week_pane_ParamLimits

0xa494,	// (0x000a70a1) main_messa_pane_ParamLimits

0x55b7,	// (0x000a21c4) main_clock2_btn_pane_ParamLimits

0x55b7,	// (0x000a21c4) main_clock2_btn_pane

0xd246,	// (0x000a9e53) main_clock2_btn_pane_cp01_ParamLimits

0xd246,	// (0x000a9e53) main_clock2_btn_pane_cp01

0xea70,	// (0x000ab67d) list_cale_mrui_pane_ParamLimits

0xeeb2,	// (0x000ababf) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000acabd) main_cf0_pane_g

0x98c7,	// (0x000a64d4) area_left_week_number_pane_ParamLimits

0x98da,	// (0x000a64e7) area_top_day_name_pane_ParamLimits

0x98e8,	// (0x000a64f5) frame_month_view_pane_ParamLimits

0xef66,	// (0x000abb73) grid_month_view_pane_ParamLimits

0xef74,	// (0x000abb81) frm_month_g1_ParamLimits

0x9966,	// (0x000a6573) frm_month_g2_ParamLimits

0x9977,	// (0x000a6584) frm_month_g3_ParamLimits

0x9988,	// (0x000a6595) frm_month_g4_ParamLimits

0x9999,	// (0x000a65a6) frm_month_g5_ParamLimits

0x99aa,	// (0x000a65b7) frm_month_g6_ParamLimits

0x99bd,	// (0x000a65ca) frm_month_g7_ParamLimits

0xef81,	// (0x000abb8e) frm_month_g8_ParamLimits

0x99d0,	// (0x000a65dd) frm_month_g9_ParamLimits

0x99dd,	// (0x000a65ea) frm_month_g10_ParamLimits

0x99ea,	// (0x000a65f7) frm_month_g11_ParamLimits

0x99f7,	// (0x000a6604) frm_month_g12_ParamLimits

0x9a04,	// (0x000a6611) frm_month_g13_ParamLimits

0x9a13,	// (0x000a6620) frm_month_g14_ParamLimits

0x9a22,	// (0x000a662f) frm_month_g15_ParamLimits

0x9a31,	// (0x000a663e) frm_month_g16_ParamLimits

0xff01,	// (0x000acb0e) frm_month_g_ParamLimits

0xef8e,	// (0x000abb9b) cell_top_day_name_pane_t1_ParamLimits

0x9a40,	// (0x000a664d) cell_area_left_week_number_pane_g1_ParamLimits

0x9a4f,	// (0x000a665c) cell_area_left_week_number_pane_t1_ParamLimits

0xd0be,	// (0x000a9ccb) cell_month_view_pane_g1_ParamLimits

0x9a65,	// (0x000a6672) cell_month_view_pane_t1_ParamLimits

0xa48c,	// (0x000a7099) main_clock2_btn_pane_g1

0xf0b8,	// (0x000abcc5) main_clock2_btn_pane_t1

0xad4f,	// (0x000a795c) listscroll_cmail_pane_ParamLimits

0xe7e9,	// (0x000ab3f6) main_sp_fs_email_pane_g1_ParamLimits

0xe7f5,	// (0x000ab402) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x000ac8eb) main_sp_fs_email_pane_g_ParamLimits

0xeb78,	// (0x000ab785) list_recal_day_pane_ParamLimits

0xeb89,	// (0x000ab796) mian_recal_day_pane_t1

0x8a27,	// (0x000a5634) list_single_dyc_row_text_pane_t4_ParamLimits

0x8a27,	// (0x000a5634) list_single_dyc_row_text_pane_t4

0x8a6c,	// (0x000a5679) list_single_dyc_row_text_pane_t5_ParamLimits

0x8a6c,	// (0x000a5679) list_single_dyc_row_text_pane_t5

0xa6e5,	// (0x000a72f2) list_single_dyc_row_text_pane_t6_ParamLimits

0xa6e5,	// (0x000a72f2) list_single_dyc_row_text_pane_t6

0x2ff7,	// (0x0009fc04) aid_mgn_list_cale_time_pane

0x41c4,	// (0x000a0dd1) main_gallery2_pane_ParamLimits

0xd25a,	// (0x000a9e67) main_clock2_pane_cp01_t1

0xd268,	// (0x000a9e75) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x000ac3cd) main_clock2_pane_cp01_t

0x16e0,	// (0x0009e2ed) cale_week_scroll_pane_g16_ParamLimits

0x16e0,	// (0x0009e2ed) cale_week_scroll_pane_g16

0xab5e,	// (0x000a776b) vorec_slider_pane

0xf052,	// (0x000abc5f) vidtel_button_pane_t1_ParamLimits

0x9270,	// (0x000a5e7d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9270,	// (0x000a5e7d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x927f,	// (0x000a5e8c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x927f,	// (0x000a5e8c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x000aca6b) main_fs_bigclock_clock_pane_g_ParamLimits

0x928f,	// (0x000a5e9c) main_fs_bigclock_clock_pane_t1_ParamLimits

0x92a4,	// (0x000a5eb1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x000aca74) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e0d,	// (0x000a1a1a) main_mup3_lyrics_pane_ParamLimits

0x4e0d,	// (0x000a1a1a) main_mup3_lyrics_pane

0x9db8,	// (0x000a69c5) main_mup3_lyrics_pane_t1_ParamLimits

0x9db8,	// (0x000a69c5) main_mup3_lyrics_pane_t1

0x5c00,	// (0x000a280d) aid_main_mp4_pane_t1_area

0x5c0a,	// (0x000a2817) aid_main_mp4_pane_t2_area

0x5d17,	// (0x000a2924) main_mp4_pane_g7_ParamLimits

0x5d17,	// (0x000a2924) main_mp4_pane_g7

0x5d23,	// (0x000a2930) main_mp4_pane_g8_ParamLimits

0x5d23,	// (0x000a2930) main_mp4_pane_g8

0x6141,	// (0x000a2d4e) aid_call6_pane_g1_size

0x9bf1,	// (0x000a67fe) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9bf1,	// (0x000a67fe) list_double_large_graphic_phob2_other_pane

0x9ddf,	// (0x000a69ec) list_double_large_graphic_phob2_other_pane_g1

0x9de7,	// (0x000a69f4) list_highlight_pane_cp026
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large

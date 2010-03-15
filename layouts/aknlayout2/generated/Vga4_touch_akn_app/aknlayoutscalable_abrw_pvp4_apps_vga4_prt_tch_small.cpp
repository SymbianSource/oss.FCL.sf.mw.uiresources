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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005cc98 };

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
0x0dff,	// (0x0005da97) Screen

0x0e0b,	// (0x0005daa3) application_window

0x0e5b,	// (0x0005daf3) area_bottom_pane_ParamLimits

0x0e5b,	// (0x0005daf3) area_bottom_pane

0x0e90,	// (0x0005db28) area_top_pane_ParamLimits

0x0e90,	// (0x0005db28) area_top_pane

0x9cc4,	// (0x0006695c) call_video_uplink_pane_ParamLimits

0x9cc4,	// (0x0006695c) call_video_uplink_pane

0x0f1f,	// (0x0005dbb7) main_pane_ParamLimits

0x0f1f,	// (0x0005dbb7) main_pane

0xc891,	// (0x00069529) context_pane

0x4759,	// (0x000613f1) navi_pane

0x477d,	// (0x00061415) popup_cale_events_window_ParamLimits

0x477d,	// (0x00061415) popup_cale_events_window

0xc8a4,	// (0x0006953c) popup_mup_playback_window

0x4795,	// (0x0006142d) signal_pane

0xa753,	// (0x000673eb) main_browser_pane

0xb427,	// (0x000680bf) main_burst_pane

0x460b,	// (0x000612a3) main_calc_pane

0xc834,	// (0x000694cc) main_cale_day_pane

0x1647,	// (0x0005e2df) main_cale_month_pane

0xc834,	// (0x000694cc) main_cale_week_pane

0xb427,	// (0x000680bf) main_call_pane

0xa0f5,	// (0x00066d8d) main_call_poc_pane

0xb427,	// (0x000680bf) main_camera_pane

0xb427,	// (0x000680bf) main_chi_dic_pane

0xb2c9,	// (0x00067f61) main_clock_pane

0xa0f5,	// (0x00066d8d) main_fmradio_pane

0xb427,	// (0x000680bf) main_graph_messa_pane

0xa0f5,	// (0x00066d8d) main_help_pane

0xa753,	// (0x000673eb) main_im_pane

0xa68e,	// (0x00067326) main_image_pane_ParamLimits

0xa68e,	// (0x00067326) main_image_pane

0xa0f5,	// (0x00066d8d) main_location2_pane

0xb427,	// (0x000680bf) main_location_pane

0xa68e,	// (0x00067326) main_messa_pane

0xa0f5,	// (0x00066d8d) main_mp2_pane

0xb427,	// (0x000680bf) main_mp_pane

0xa0f5,	// (0x00066d8d) main_msg_pane

0xa0f5,	// (0x00066d8d) main_mup_eq_pane

0xa0f5,	// (0x00066d8d) main_mup_pane

0xa753,	// (0x000673eb) main_notes_pane

0xa0f5,	// (0x00066d8d) main_pec_pane

0xa0f5,	// (0x00066d8d) main_phob_pane

0xa0f5,	// (0x00066d8d) main_pinb_pane

0xa0f5,	// (0x00066d8d) main_postcard_pane

0xa0f5,	// (0x00066d8d) main_qdial_pane

0xb427,	// (0x000680bf) main_skin_pane

0xa0f5,	// (0x00066d8d) main_smil2_pane

0xb427,	// (0x000680bf) main_smil_pane

0xb427,	// (0x000680bf) main_video_pane

0xb427,	// (0x000680bf) main_video_tele_pane

0xa68e,	// (0x00067326) main_viewer_pane_ParamLimits

0xa68e,	// (0x00067326) main_viewer_pane

0xb427,	// (0x000680bf) main_vorec_pane

0x4643,	// (0x000612db) popup_blid_sat_info_window_ParamLimits

0x4643,	// (0x000612db) popup_blid_sat_info_window

0x465d,	// (0x000612f5) popup_dyc_status_message_window_ParamLimits

0x465d,	// (0x000612f5) popup_dyc_status_message_window

0x466d,	// (0x00061305) popup_grid_large_graphic_window_ParamLimits

0x466d,	// (0x00061305) popup_grid_large_graphic_window

0x46e5,	// (0x0006137d) popup_loc_request_window_ParamLimits

0x46e5,	// (0x0006137d) popup_loc_request_window

0x472d,	// (0x000613c5) popup_wml_address_window_ParamLimits

0x472d,	// (0x000613c5) popup_wml_address_window

0x44e3,	// (0x0006117b) call_muted_g1

0x41a2,	// (0x00060e3a) popup_call_audio_conf_window_ParamLimits

0x41a2,	// (0x00060e3a) popup_call_audio_conf_window

0x44f3,	// (0x0006118b) popup_call_audio_first_window_ParamLimits

0x44f3,	// (0x0006118b) popup_call_audio_first_window

0x4533,	// (0x000611cb) popup_call_audio_in_window_ParamLimits

0x4533,	// (0x000611cb) popup_call_audio_in_window

0x4557,	// (0x000611ef) popup_call_audio_out_window_ParamLimits

0x4557,	// (0x000611ef) popup_call_audio_out_window

0x4579,	// (0x00061211) popup_call_audio_second_window_ParamLimits

0x4579,	// (0x00061211) popup_call_audio_second_window

0x45a9,	// (0x00061241) popup_call_audio_wait_window_ParamLimits

0x45a9,	// (0x00061241) popup_call_audio_wait_window

0x45ca,	// (0x00061262) popup_number_entry_window_ParamLimits

0x45ca,	// (0x00061262) popup_number_entry_window

0x9ce2,	// (0x0006697a) bg_popup_call_pane_cp05_ParamLimits

0x9ce2,	// (0x0006697a) bg_popup_call_pane_cp05

0x9d02,	// (0x0006699a) popup_number_entry_window_t1

0x9d15,	// (0x000669ad) popup_number_entry_window_t2

0x9d27,	// (0x000669bf) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0006bd6b) popup_number_entry_window_t

0x9d39,	// (0x000669d1) text_title_cp2

0x9d4c,	// (0x000669e4) bg_popup_call_pane_cp_ParamLimits

0x9d4c,	// (0x000669e4) bg_popup_call_pane_cp

0x9d5a,	// (0x000669f2) call_thumbnail_pane

0x9d62,	// (0x000669fa) popup_call_audio_in_window_g1_ParamLimits

0x9d62,	// (0x000669fa) popup_call_audio_in_window_g1

0x9d6e,	// (0x00066a06) popup_call_audio_in_window_g2_ParamLimits

0x9d6e,	// (0x00066a06) popup_call_audio_in_window_g2

0x9d7a,	// (0x00066a12) popup_call_audio_in_window_g3_ParamLimits

0x9d7a,	// (0x00066a12) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0006bd74) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0006bd74) popup_call_audio_in_window_g

0x9d86,	// (0x00066a1e) popup_call_audio_in_window_t1_ParamLimits

0x9d86,	// (0x00066a1e) popup_call_audio_in_window_t1

0x9da2,	// (0x00066a3a) popup_call_audio_in_window_t2_ParamLimits

0x9da2,	// (0x00066a3a) popup_call_audio_in_window_t2

0x9dbe,	// (0x00066a56) popup_call_audio_in_window_t3_ParamLimits

0x9dbe,	// (0x00066a56) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0006bd7b) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0006bd7b) popup_call_audio_in_window_t

0x9d4c,	// (0x000669e4) bg_popup_call_pane_cp01_ParamLimits

0x9d4c,	// (0x000669e4) bg_popup_call_pane_cp01

0x9d5a,	// (0x000669f2) call_thumbnail_pane_cp02

0x9dd1,	// (0x00066a69) call_type_pane_cp022

0x9dd9,	// (0x00066a71) popup_call_audio_out_window_g1_ParamLimits

0x9dd9,	// (0x00066a71) popup_call_audio_out_window_g1

0x9deb,	// (0x00066a83) popup_call_audio_out_window_g2_ParamLimits

0x9deb,	// (0x00066a83) popup_call_audio_out_window_g2

0x9df7,	// (0x00066a8f) popup_call_audio_out_window_g3_ParamLimits

0x9df7,	// (0x00066a8f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0006bd82) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0006bd82) popup_call_audio_out_window_g

0x9e09,	// (0x00066aa1) popup_call_audio_out_window_t1_ParamLimits

0x9e09,	// (0x00066aa1) popup_call_audio_out_window_t1

0x9e21,	// (0x00066ab9) popup_call_audio_out_window_t2_ParamLimits

0x9e21,	// (0x00066ab9) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0006bd89) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0006bd89) popup_call_audio_out_window_t

0x9e36,	// (0x00066ace) bg_popup_call_pane_ParamLimits

0x9e36,	// (0x00066ace) bg_popup_call_pane

0x1119,	// (0x0005ddb1) call_thumbnail_pane_cp_ParamLimits

0x1119,	// (0x0005ddb1) call_thumbnail_pane_cp

0x9eba,	// (0x00066b52) call_type_pane_cp01_ParamLimits

0x9eba,	// (0x00066b52) call_type_pane_cp01

0x9efe,	// (0x00066b96) popup_call_audio_first_window_g1_ParamLimits

0x9efe,	// (0x00066b96) popup_call_audio_first_window_g1

0x9f4a,	// (0x00066be2) popup_call_audio_first_window_g2_ParamLimits

0x9f4a,	// (0x00066be2) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0006bd8e) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0006bd8e) popup_call_audio_first_window_g

0x9f8e,	// (0x00066c26) popup_call_audio_first_window_t1_ParamLimits

0x9f8e,	// (0x00066c26) popup_call_audio_first_window_t1

0xa03a,	// (0x00066cd2) popup_call_audio_first_window_t4_ParamLimits

0xa03a,	// (0x00066cd2) popup_call_audio_first_window_t4

0xa0c6,	// (0x00066d5e) popup_call_audio_first_window_t5_ParamLimits

0xa0c6,	// (0x00066d5e) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0006bd93) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0006bd93) popup_call_audio_first_window_t

0xa0f5,	// (0x00066d8d) bg_popup_call_pane_cp02

0xa0ff,	// (0x00066d97) call_type_pane_cp023

0xa107,	// (0x00066d9f) popup_call_audio_wait_window_g1

0xa10f,	// (0x00066da7) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0006bd9a) popup_call_audio_wait_window_g

0xa117,	// (0x00066daf) popup_call_audio_wait_window_t3

0xa125,	// (0x00066dbd) bg_popup_call_pane_cp03_ParamLimits

0xa125,	// (0x00066dbd) bg_popup_call_pane_cp03

0xa185,	// (0x00066e1d) call_thumbnail_pane_cp011_ParamLimits

0xa185,	// (0x00066e1d) call_thumbnail_pane_cp011

0xa191,	// (0x00066e29) call_type_pane_cp034_ParamLimits

0xa191,	// (0x00066e29) call_type_pane_cp034

0xa50b,	// (0x000671a3) popup_call_audio_second_window_g1_ParamLimits

0xa50b,	// (0x000671a3) popup_call_audio_second_window_g1

0xa547,	// (0x000671df) popup_call_audio_second_window_g2_ParamLimits

0xa547,	// (0x000671df) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0006bd9f) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0006bd9f) popup_call_audio_second_window_g

0xa583,	// (0x0006721b) popup_call_audio_second_window_t1_ParamLimits

0xa583,	// (0x0006721b) popup_call_audio_second_window_t1

0xa604,	// (0x0006729c) popup_call_audio_second_window_t2_ParamLimits

0xa604,	// (0x0006729c) popup_call_audio_second_window_t2

0xa63a,	// (0x000672d2) popup_call_audio_second_window_t3_ParamLimits

0xa63a,	// (0x000672d2) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0006bda4) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0006bda4) popup_call_audio_second_window_t

0xa0f5,	// (0x00066d8d) bg_popup_call_pane_cp04

0xa670,	// (0x00067308) list_conf_pane

0xa678,	// (0x00067310) popup_call_audio_conf_window_t1

0xa686,	// (0x0006731e) call_thumbnail_pane_g1

0xa68e,	// (0x00067326) bg_pinb_pane_ParamLimits

0xa68e,	// (0x00067326) bg_pinb_pane

0xa69c,	// (0x00067334) find_pinb_pane

0xa6a5,	// (0x0006733d) listscroll_pinb_pane_ParamLimits

0xa6a5,	// (0x0006733d) listscroll_pinb_pane

0xa6b4,	// (0x0006734c) pinb_bg_pane_g1

0x113d,	// (0x0005ddd5) pinb_bg_pane_g2

0x1149,	// (0x0005dde1) pinb_bg_pane_g3

0x1155,	// (0x0005dded) pinb_bg_pane_g4

0x1161,	// (0x0005ddf9) pinb_bg_pane_g5

0x116d,	// (0x0005de05) pinb_bg_pane_g6

0x1178,	// (0x0005de10) pinb_bg_pane_g7

0x1183,	// (0x0005de1b) pinb_bg_pane_g8

0x118e,	// (0x0005de26) pinb_bg_pane_g9

0x1198,	// (0x0005de30) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0006bdab) pinb_bg_pane_g

0x11b5,	// (0x0005de4d) grid_pinb_pane

0x11c0,	// (0x0005de58) list_pinb_pane

0x11cb,	// (0x0005de63) scroll_pane_cp01_ParamLimits

0x11cb,	// (0x0005de63) scroll_pane_cp01

0xa6be,	// (0x00067356) find_pinb_pane_g1_ParamLimits

0xa6be,	// (0x00067356) find_pinb_pane_g1

0xa6d6,	// (0x0006736e) find_pinb_pane_t1

0xa6e8,	// (0x00067380) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0006bdc5) find_pinb_pane_t

0xa6fd,	// (0x00067395) input_focus_pane_cp01_ParamLimits

0xa6fd,	// (0x00067395) input_focus_pane_cp01

0x11dd,	// (0x0005de75) cell_pinb_pane_ParamLimits

0x11dd,	// (0x0005de75) cell_pinb_pane

0x1202,	// (0x0005de9a) cell_pinb_pane_g1_ParamLimits

0x1202,	// (0x0005de9a) cell_pinb_pane_g1

0x1217,	// (0x0005deaf) cell_pinb_pane_g2_ParamLimits

0x1217,	// (0x0005deaf) cell_pinb_pane_g2

0xa709,	// (0x000673a1) cell_pinb_pane_g3_ParamLimits

0xa709,	// (0x000673a1) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0006bdca) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0006bdca) cell_pinb_pane_g

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp01

0x1223,	// (0x0005debb) list_pinb_item_pane_ParamLimits

0x1223,	// (0x0005debb) list_pinb_item_pane

0xa0f5,	// (0x00066d8d) list_highlight_pane_cp02

0x1241,	// (0x0005ded9) list_pinb_item_pane_g1_ParamLimits

0x1241,	// (0x0005ded9) list_pinb_item_pane_g1

0x124e,	// (0x0005dee6) list_pinb_item_pane_g2_ParamLimits

0x124e,	// (0x0005dee6) list_pinb_item_pane_g2

0x125a,	// (0x0005def2) list_pinb_item_pane_g3_ParamLimits

0x125a,	// (0x0005def2) list_pinb_item_pane_g3

0x126b,	// (0x0005df03) list_pinb_item_pane_g4_ParamLimits

0x126b,	// (0x0005df03) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0006bdd1) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0006bdd1) list_pinb_item_pane_g

0x1277,	// (0x0005df0f) list_pinb_item_pane_t1_ParamLimits

0x1277,	// (0x0005df0f) list_pinb_item_pane_t1

0x12a8,	// (0x0005df40) calc_display_pane

0x12c6,	// (0x0005df5e) calc_paper_pane

0x12e2,	// (0x0005df7a) grid_calc_pane

0xa0f5,	// (0x00066d8d) bg_list_pane_cp01

0x130e,	// (0x0005dfa6) clock_g1

0x1316,	// (0x0005dfae) clock_g2

0x0001,

0xf142,	// (0x0006bdda) clock_g

0x1320,	// (0x0005dfb8) clock_t1_ParamLimits

0x1320,	// (0x0005dfb8) clock_t1

0x1335,	// (0x0005dfcd) clock_t2_ParamLimits

0x1335,	// (0x0005dfcd) clock_t2

0x1347,	// (0x0005dfdf) clock_t3_ParamLimits

0x1347,	// (0x0005dfdf) clock_t3

0x1359,	// (0x0005dff1) clock_t4_ParamLimits

0x1359,	// (0x0005dff1) clock_t4

0x136b,	// (0x0005e003) clock_t5_ParamLimits

0x136b,	// (0x0005e003) clock_t5

0x1380,	// (0x0005e018) clock_t6_ParamLimits

0x1380,	// (0x0005e018) clock_t6

0x1392,	// (0x0005e02a) clock_t7_ParamLimits

0x1392,	// (0x0005e02a) clock_t7

0x13a4,	// (0x0005e03c) clock_t8_ParamLimits

0x13a4,	// (0x0005e03c) clock_t8

0x13ba,	// (0x0005e052) clock_t9_ParamLimits

0x13ba,	// (0x0005e052) clock_t9

0x0008,

0xf147,	// (0x0006bddf) clock_t_ParamLimits

0xf147,	// (0x0006bddf) clock_t

0xa715,	// (0x000673ad) popup_clock_analogue_window_cp02

0xa715,	// (0x000673ad) popup_clock_digital_window_cp01

0xa71d,	// (0x000673b5) listscroll_help_pane

0xa0f5,	// (0x00066d8d) phob_pre_status_pane

0xa727,	// (0x000673bf) grid_qdial_pane

0xa68e,	// (0x00067326) listscroll_mce_pane

0xa68e,	// (0x00067326) bg_notes_pane

0xa731,	// (0x000673c9) list_notes_pane

0x13d0,	// (0x0005e068) scroll_pane_cp06

0xa73f,	// (0x000673d7) bg_calc_paper_pane

0x13e9,	// (0x0005e081) list_calc_pane

0xa753,	// (0x000673eb) bg_calc_display_pane

0x1403,	// (0x0005e09b) calc_display_pane_t1

0x1418,	// (0x0005e0b0) calc_display_pane_t2

0x142d,	// (0x0005e0c5) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0006bdf2) calc_display_pane_t

0x143f,	// (0x0005e0d7) cell_calc_pane_ParamLimits

0x143f,	// (0x0005e0d7) cell_calc_pane

0xa75f,	// (0x000673f7) bg_calc_paper_pane_g1

0xa76b,	// (0x00067403) bg_calc_paper_pane_g2

0xa777,	// (0x0006740f) bg_calc_paper_pane_g3

0xa783,	// (0x0006741b) bg_calc_paper_pane_g4

0xa78f,	// (0x00067427) bg_calc_paper_pane_g5

0x146e,	// (0x0005e106) bg_calc_paper_pane_g6

0x147f,	// (0x0005e117) bg_calc_paper_pane_g7

0x1490,	// (0x0005e128) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0006bdf9) bg_calc_paper_pane_g

0x14a3,	// (0x0005e13b) calc_bg_paper_pane_g9

0x14b6,	// (0x0005e14e) list_calc_item_pane_ParamLimits

0x14b6,	// (0x0005e14e) list_calc_item_pane

0xa79b,	// (0x00067433) list_calc_item_pane_g1

0x14d7,	// (0x0005e16f) list_calc_item_pane_t1_ParamLimits

0x14d7,	// (0x0005e16f) list_calc_item_pane_t1

0x14e9,	// (0x0005e181) list_calc_item_pane_t2_ParamLimits

0x14e9,	// (0x0005e181) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0006be0a) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0006be0a) list_calc_item_pane_t

0xa7a8,	// (0x00067440) cell_calc_pane_g1

0xa7b2,	// (0x0006744a) grid_highlight_pane_cp02

0xa7d4,	// (0x0006746c) bg_calc_display_pane_g1

0x1519,	// (0x0005e1b1) bg_calc_display_pane_g2

0xa7dd,	// (0x00067475) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0006be14) bg_calc_display_pane_g

0x1523,	// (0x0005e1bb) cell_qdial_pane_ParamLimits

0x1523,	// (0x0005e1bb) cell_qdial_pane

0x1539,	// (0x0005e1d1) cell_qdial_pane_g1_ParamLimits

0x1539,	// (0x0005e1d1) cell_qdial_pane_g1

0x1546,	// (0x0005e1de) cell_qdial_pane_g2_ParamLimits

0x1546,	// (0x0005e1de) cell_qdial_pane_g2

0xa7e6,	// (0x0006747e) cell_qdial_pane_g3_ParamLimits

0xa7e6,	// (0x0006747e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0006be1b) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0006be1b) cell_qdial_pane_g

0x1564,	// (0x0005e1fc) cell_qdial_pane_t1_ParamLimits

0x1564,	// (0x0005e1fc) cell_qdial_pane_t1

0x157c,	// (0x0005e214) cell_qdial_pane_t2_ParamLimits

0x157c,	// (0x0005e214) cell_qdial_pane_t2

0x158f,	// (0x0005e227) cell_qdial_pane_t3_ParamLimits

0x158f,	// (0x0005e227) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0006be24) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0006be24) cell_qdial_pane_t

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp04

0xa7f2,	// (0x0006748a) thumbnail_qdial_pane_ParamLimits

0xa7f2,	// (0x0006748a) thumbnail_qdial_pane

0xa84e,	// (0x000674e6) list_help_pane

0xa857,	// (0x000674ef) scroll_pane_cp02

0x15a2,	// (0x0005e23a) help_list_pane_t1_ParamLimits

0x15a2,	// (0x0005e23a) help_list_pane_t1

0x15c9,	// (0x0005e261) bg_notes_pane_g2

0x15d1,	// (0x0005e269) bg_notes_pane_g3

0x15d9,	// (0x0005e271) notes_bg_pane_g1

0x15e1,	// (0x0005e279) notes_bg_pane_g4

0x15e9,	// (0x0005e281) notes_bg_pane_g5

0x15f1,	// (0x0005e289) notes_bg_pane_g6

0x15f9,	// (0x0005e291) notes_bg_pane_g7

0x1601,	// (0x0005e299) notes_bg_pane_g8

0x1609,	// (0x0005e2a1) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0006be42) notes_bg_pane_g

0x1611,	// (0x0005e2a9) list_notes_text_pane_ParamLimits

0x1611,	// (0x0005e2a9) list_notes_text_pane

0xaa1b,	// (0x000676b3) list_notes_text_pane_g1

0x1639,	// (0x0005e2d1) list_notes_text_pane_t1

0x1647,	// (0x0005e2df) listscroll_cale_week_pane

0x167f,	// (0x0005e317) bg_cale_heading_pane

0xaa35,	// (0x000676cd) bg_cale_pane_cp01

0x16a8,	// (0x0005e340) cale_week_corner_pane

0x16c7,	// (0x0005e35f) cale_week_day_heading_pane

0x16f5,	// (0x0005e38d) cale_week_scroll_pane_g1

0x1719,	// (0x0005e3b1) cale_week_scroll_pane_g2

0x1731,	// (0x0005e3c9) cale_week_scroll_pane_g3

0x1749,	// (0x0005e3e1) cale_week_scroll_pane_g4

0x1761,	// (0x0005e3f9) cale_week_scroll_pane_g5

0x1779,	// (0x0005e411) cale_week_scroll_pane_g6

0x1795,	// (0x0005e42d) cale_week_scroll_pane_g7

0x17b1,	// (0x0005e449) cale_week_scroll_pane_g8

0x17cd,	// (0x0005e465) cale_week_scroll_pane_g9

0x17ea,	// (0x0005e482) cale_week_scroll_pane_g10

0x1807,	// (0x0005e49f) cale_week_scroll_pane_g11

0x1824,	// (0x0005e4bc) cale_week_scroll_pane_g12

0x1841,	// (0x0005e4d9) cale_week_scroll_pane_g13

0x185e,	// (0x0005e4f6) cale_week_scroll_pane_g14

0x1887,	// (0x0005e51f) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0006be51) cale_week_scroll_pane_g

0x18b0,	// (0x0005e548) cale_week_time_pane

0x18cc,	// (0x0005e564) grid_cale_week_pane

0xaa65,	// (0x000676fd) scroll_pane_cp08

0x18fb,	// (0x0005e593) cell_cale_week_pane_ParamLimits

0x18fb,	// (0x0005e593) cell_cale_week_pane

0x197b,	// (0x0005e613) cale_week_day_heading_pane_t1

0x19c1,	// (0x0005e659) cale_week_day_heading_pane_t2

0x1a0c,	// (0x0005e6a4) cale_week_day_heading_pane_t3

0x1a57,	// (0x0005e6ef) cale_week_day_heading_pane_t4

0x1aa2,	// (0x0005e73a) cale_week_day_heading_pane_t5

0x1aed,	// (0x0005e785) cale_week_day_heading_pane_t6

0x1b38,	// (0x0005e7d0) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0006be70) cale_week_day_heading_pane_t

0xaa87,	// (0x0006771f) bg_cale_side_pane

0x1b7e,	// (0x0005e816) cale_week_time_pane_t1

0x1bc2,	// (0x0005e85a) cale_week_time_pane_t2

0x1c06,	// (0x0005e89e) cale_week_time_pane_t3

0x1c4a,	// (0x0005e8e2) cale_week_time_pane_t4

0x1c8e,	// (0x0005e926) cale_week_time_pane_t5

0x1cd2,	// (0x0005e96a) cale_week_time_pane_t6

0x1d16,	// (0x0005e9ae) cale_week_time_pane_t7

0x1d5a,	// (0x0005e9f2) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0006be7f) cale_week_time_pane_t

0x1da4,	// (0x0005ea3c) cell_cale_week_pane_g2

0x1dc8,	// (0x0005ea60) cell_cale_week_pane_g3_ParamLimits

0x1dc8,	// (0x0005ea60) cell_cale_week_pane_g3

0xaa95,	// (0x0006772d) grid_highlight_pane_cp07

0xaa9d,	// (0x00067735) listscroll_gms_pane

0xaaa7,	// (0x0006773f) grid_gms_pane

0xaab0,	// (0x00067748) listscroll_gms_pane_g1

0xaab8,	// (0x00067750) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0006be90) listscroll_gms_pane_g

0x1de0,	// (0x0005ea78) scroll_pane_cp010

0x1deb,	// (0x0005ea83) cell_gms_pane_ParamLimits

0x1deb,	// (0x0005ea83) cell_gms_pane

0x1dfe,	// (0x0005ea96) cell_gms_pane_g1

0xaac0,	// (0x00067758) cell_gms_pane_g2

0xaac8,	// (0x00067760) cell_gms_pane_g3

0xaad1,	// (0x00067769) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0006be95) cell_gms_pane_g

0xaada,	// (0x00067772) grid_highlight_pane_cp09

0x448b,	// (0x00061123) phob_pre_status_pane_g1

0x4493,	// (0x0006112b) phob_pre_status_pane_g2

0x449b,	// (0x00061133) phob_pre_status_pane_g3

0x44a3,	// (0x0006113b) phob_pre_status_pane_g4

0x0004,

0xf5e7,	// (0x0006c27f) phob_pre_status_pane_g

0x44b3,	// (0x0006114b) phob_pre_status_pane_t1

0x44c3,	// (0x0006115b) phob_pre_status_pane_t2

0x44d3,	// (0x0006116b) phob_pre_status_pane_t3

0x0002,

0xf5f2,	// (0x0006c28a) phob_pre_status_pane_t

0xa0f5,	// (0x00066d8d) bg_list_pane_cp05

0x1e0e,	// (0x0005eaa6) grid_vorec_pane

0x1e1a,	// (0x0005eab2) vorec_t1

0x1e28,	// (0x0005eac0) vorec_t2

0x1e36,	// (0x0005eace) vorec_t3

0x1e44,	// (0x0005eadc) vorec_t4

0x1e52,	// (0x0005eaea) vorec_t5

0x1e60,	// (0x0005eaf8) vorec_t6

0x0006,

0xf206,	// (0x0006be9e) vorec_t

0x1e7c,	// (0x0005eb14) wait_bar_pane_cp01

0x1e84,	// (0x0005eb1c) cell_vorec_pane_ParamLimits

0x1e84,	// (0x0005eb1c) cell_vorec_pane

0xaae2,	// (0x0006777a) cell_vorec_pane_g1

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp05

0x1ea7,	// (0x0005eb3f) cams_zoom_pane

0x1eb3,	// (0x0005eb4b) image_vga_pane

0x1ec2,	// (0x0005eb5a) main_camera_pane_g1

0x1ed0,	// (0x0005eb68) main_camera_pane_g2

0x1edc,	// (0x0005eb74) main_camera_pane_g3

0x1eea,	// (0x0005eb82) main_camera_pane_g4

0x1ef8,	// (0x0005eb90) main_camera_pane_g5

0x1f06,	// (0x0005eb9e) main_camera_pane_g6

0x1f14,	// (0x0005ebac) main_camera_pane_g7

0x0007,

0xf215,	// (0x0006bead) main_camera_pane_g

0x1f22,	// (0x0005ebba) main_camera_pane_t1

0x1f34,	// (0x0005ebcc) main_camera_pane_t2

0x0001,

0xf226,	// (0x0006bebe) main_camera_pane_t

0x1f57,	// (0x0005ebef) cams_zoom_pane_cp_ParamLimits

0x1f57,	// (0x0005ebef) cams_zoom_pane_cp

0x1f7b,	// (0x0005ec13) image_cif_pane_ParamLimits

0x1f7b,	// (0x0005ec13) image_cif_pane

0x1f99,	// (0x0005ec31) image_subqcif_pane

0x1fa3,	// (0x0005ec3b) main_video_pane_g1_ParamLimits

0x1fa3,	// (0x0005ec3b) main_video_pane_g1

0x1fc3,	// (0x0005ec5b) main_video_pane_g2_ParamLimits

0x1fc3,	// (0x0005ec5b) main_video_pane_g2

0x1ff3,	// (0x0005ec8b) main_video_pane_g3_ParamLimits

0x1ff3,	// (0x0005ec8b) main_video_pane_g3

0x201c,	// (0x0005ecb4) main_video_pane_g4_ParamLimits

0x201c,	// (0x0005ecb4) main_video_pane_g4

0x2045,	// (0x0005ecdd) main_video_pane_g5_ParamLimits

0x2045,	// (0x0005ecdd) main_video_pane_g5

0xaaf8,	// (0x00067790) main_video_pane_g6_ParamLimits

0xaaf8,	// (0x00067790) main_video_pane_g6

0x0006,

0xf22b,	// (0x0006bec3) main_video_pane_g_ParamLimits

0xf22b,	// (0x0006bec3) main_video_pane_g

0x2067,	// (0x0005ecff) main_video_pane_t1_ParamLimits

0x2067,	// (0x0005ecff) main_video_pane_t1

0xab12,	// (0x000677aa) cams_zoom_pane_g1

0xab1b,	// (0x000677b3) cams_zoom_pane_g2

0xab24,	// (0x000677bc) cams_zoom_pane_g3

0xab2d,	// (0x000677c5) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0006bed2) cams_zoom_pane_g

0x20b1,	// (0x0005ed49) grid_cams_pane

0x20bf,	// (0x0005ed57) linegrid_cams_pane

0x20cb,	// (0x0005ed63) cell_cams_pane_ParamLimits

0x20cb,	// (0x0005ed63) cell_cams_pane

0xab36,	// (0x000677ce) cams_burst_image_pane

0xab3e,	// (0x000677d6) cell_cams_pane_g1

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp03

0xa7a8,	// (0x00067440) mp_bg_pane_g1

0xa0f5,	// (0x00066d8d) bg_list_pane_cp03

0xc757,	// (0x000693ef) bg_mp_pane

0xc75f,	// (0x000693f7) grid_mp_pane

0xc767,	// (0x000693ff) media_player_g1

0xc771,	// (0x00069409) media_player_t1

0xc77f,	// (0x00069417) media_player_t2

0xc78d,	// (0x00069425) media_player_t3

0xc79b,	// (0x00069433) media_player_t4

0xc7a9,	// (0x00069441) media_player_t5

0xc7b7,	// (0x0006944f) media_player_t6

0xc7c5,	// (0x0006945d) media_player_t7

0x0006,

0xf5d1,	// (0x0006c269) media_player_t

0xc7d3,	// (0x0006946b) wait_bar_pane_cp02

0xf5b6,	// (0x0006c24e) main_usb_pane_t

0x4482,	// (0x0006111a) cell_mp_pane

0xa7a8,	// (0x00067440) cell_mp_pane_g1

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp06

0xab46,	// (0x000677de) grid_skin_colour_pane

0xab4e,	// (0x000677e6) list_highlight_pane_cp03

0x21de,	// (0x0005ee76) skin_g1

0xab56,	// (0x000677ee) skin_t1

0xab65,	// (0x000677fd) skin_t2

0x0001,

0xf26f,	// (0x0006bf07) skin_t

0x21e8,	// (0x0005ee80) cell_skin_colour_pane_ParamLimits

0x21e8,	// (0x0005ee80) cell_skin_colour_pane

0xab73,	// (0x0006780b) cell_skin_colour_pane_g1

0x2268,	// (0x0005ef00) call_video_g1_ParamLimits

0x2268,	// (0x0005ef00) call_video_g1

0x2278,	// (0x0005ef10) call_video_g2_ParamLimits

0x2278,	// (0x0005ef10) call_video_g2

0x0001,

0xf274,	// (0x0006bf0c) call_video_g_ParamLimits

0xf274,	// (0x0006bf0c) call_video_g

0x22c8,	// (0x0005ef60) call_video_uplink_pane_cp1_ParamLimits

0x22c8,	// (0x0005ef60) call_video_uplink_pane_cp1

0xab85,	// (0x0006781d) call_video_uplink_pane_cp2

0x2396,	// (0x0005f02e) video_down_crop_pane_ParamLimits

0x2396,	// (0x0005f02e) video_down_crop_pane

0x2488,	// (0x0005f120) video_down_pane_ParamLimits

0x2488,	// (0x0005f120) video_down_pane

0xab8d,	// (0x00067825) video_down_subqcif_pane_ParamLimits

0xab8d,	// (0x00067825) video_down_subqcif_pane

0xaba7,	// (0x0006783f) video_down_subqcif_pane_cp_ParamLimits

0xaba7,	// (0x0006783f) video_down_subqcif_pane_cp

0xabcf,	// (0x00067867) im_reading_pane_ParamLimits

0xabcf,	// (0x00067867) im_reading_pane

0x25a5,	// (0x0005f23d) im_writing_pane_ParamLimits

0x25a5,	// (0x0005f23d) im_writing_pane

0x25c3,	// (0x0005f25b) im_reading_pane_t1

0xabe9,	// (0x00067881) list_im_pane

0xabfa,	// (0x00067892) scroll_pane_cp07

0x2605,	// (0x0005f29d) im_writing_pane_t1_ParamLimits

0x2605,	// (0x0005f29d) im_writing_pane_t1

0xac13,	// (0x000678ab) im_writing_pane_t2_ParamLimits

0xac13,	// (0x000678ab) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0006bf16) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0006bf16) im_writing_pane_t

0xa0f5,	// (0x00066d8d) input_focus_pane_cp04

0xa0f5,	// (0x00066d8d) input_focus_pane_cp05

0x2617,	// (0x0005f2af) list_im_single_pane_ParamLimits

0x2617,	// (0x0005f2af) list_im_single_pane

0x2630,	// (0x0005f2c8) list_single_im_pane_t1

0x4446,	// (0x000610de) blid_accuracy_pane

0x444e,	// (0x000610e6) blid_compass_pane

0x4458,	// (0x000610f0) main_location_t1

0x4466,	// (0x000610fe) main_location_t2

0x4474,	// (0x0006110c) main_location_t3

0x0002,

0xf5e0,	// (0x0006c278) main_location_t

0xa0f5,	// (0x00066d8d) aid_levels_location

0xa7a8,	// (0x00067440) blid_accuracy_pane_g1

0xa7a8,	// (0x00067440) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0006bf78) blid_accuracy_pane_g

0xac5b,	// (0x000678f3) wml_content_pane

0xac99,	// (0x00067931) wml_button_pane_ParamLimits

0xac99,	// (0x00067931) wml_button_pane

0x263f,	// (0x0005f2d7) wml_list_single_large_pane_ParamLimits

0x263f,	// (0x0005f2d7) wml_list_single_large_pane

0x2661,	// (0x0005f2f9) wml_list_single_medium_pane_ParamLimits

0x2661,	// (0x0005f2f9) wml_list_single_medium_pane

0x2684,	// (0x0005f31c) wml_list_single_small_pane_ParamLimits

0x2684,	// (0x0005f31c) wml_list_single_small_pane

0xacad,	// (0x00067945) wml_selection_box_pane_ParamLimits

0xacad,	// (0x00067945) wml_selection_box_pane

0xacc0,	// (0x00067958) wml_list_single_pane_t1

0xaccf,	// (0x00067967) wml_list_single_medium_pane_t1

0xacde,	// (0x00067976) wml_list_single_large_pane_t1

0xaced,	// (0x00067985) input_focus_pane_cp02_ParamLimits

0xaced,	// (0x00067985) input_focus_pane_cp02

0xad00,	// (0x00067998) wml_selection_box_pane_g1

0xad09,	// (0x000679a1) wml_selection_box_pane_t1_ParamLimits

0xad09,	// (0x000679a1) wml_selection_box_pane_t1

0xa68e,	// (0x00067326) bg_wml_button_pane_ParamLimits

0xa68e,	// (0x00067326) bg_wml_button_pane

0xad21,	// (0x000679b9) wml_button_pane_g1

0xad29,	// (0x000679c1) wml_button_pane_t1

0xad21,	// (0x000679b9) wml_button_bg_pane_g1

0xad39,	// (0x000679d1) wml_button_bg_pane_g2

0xad41,	// (0x000679d9) wml_button_bg_pane_g3

0xad49,	// (0x000679e1) wml_button_bg_pane_g4

0xad51,	// (0x000679e9) wml_button_bg_pane_g5

0xad59,	// (0x000679f1) wml_button_bg_pane_g6

0xad61,	// (0x000679f9) wml_button_bg_pane_g7

0xad69,	// (0x00067a01) wml_button_bg_pane_g8

0xad71,	// (0x00067a09) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0006bf1b) wml_button_bg_pane_g

0x26ac,	// (0x0005f344) bg_list_pane_cp02

0xad79,	// (0x00067a11) mce_header_pane_ParamLimits

0xad79,	// (0x00067a11) mce_header_pane

0xad8f,	// (0x00067a27) mce_icon_pane

0xad8f,	// (0x00067a27) mce_image_pane

0xad98,	// (0x00067a30) mce_text_pane_ParamLimits

0xad98,	// (0x00067a30) mce_text_pane

0x26b6,	// (0x0005f34e) scroll_pane_cp03

0xac91,	// (0x00067929) scroll_pane_cp04

0xadab,	// (0x00067a43) scroll_pane_cp05_ParamLimits

0xadab,	// (0x00067a43) scroll_pane_cp05

0x26c0,	// (0x0005f358) mce_header_field_pane_ParamLimits

0x26c0,	// (0x0005f358) mce_header_field_pane

0x26e2,	// (0x0005f37a) mce_header_field_pane_2_ParamLimits

0x26e2,	// (0x0005f37a) mce_header_field_pane_2

0x26f8,	// (0x0005f390) mce_header_field_pane_3

0x2700,	// (0x0005f398) list_single_mce_message_pane_ParamLimits

0x2700,	// (0x0005f398) list_single_mce_message_pane

0x271f,	// (0x0005f3b7) list_single_mce_smart_pane_ParamLimits

0x271f,	// (0x0005f3b7) list_single_mce_smart_pane

0xadb7,	// (0x00067a4f) input_focus_pane_cp03

0xadc0,	// (0x00067a58) list_header_data_pane

0x2749,	// (0x0005f3e1) mce_header_field_pane_t1

0x2759,	// (0x0005f3f1) list_single_mce_header_pane_ParamLimits

0x2759,	// (0x0005f3f1) list_single_mce_header_pane

0xadc8,	// (0x00067a60) list_single_mce_header_pane_t1

0xadd7,	// (0x00067a6f) list_single_mce_message_pane_g1

0xaddf,	// (0x00067a77) list_single_mce_message_pane_t1

0x279d,	// (0x0005f435) bg_cale_heading_pane_cp01_ParamLimits

0x279d,	// (0x0005f435) bg_cale_heading_pane_cp01

0xaded,	// (0x00067a85) bg_cale_pane_cp02_ParamLimits

0xaded,	// (0x00067a85) bg_cale_pane_cp02

0x27e4,	// (0x0005f47c) cale_month_corner_pane

0x2803,	// (0x0005f49b) cale_month_day_heading_pane_ParamLimits

0x2803,	// (0x0005f49b) cale_month_day_heading_pane

0x2852,	// (0x0005f4ea) cale_month_pane_g1_ParamLimits

0x2852,	// (0x0005f4ea) cale_month_pane_g1

0x288e,	// (0x0005f526) cale_month_pane_g2_ParamLimits

0x288e,	// (0x0005f526) cale_month_pane_g2

0x28c2,	// (0x0005f55a) cale_month_pane_g3_ParamLimits

0x28c2,	// (0x0005f55a) cale_month_pane_g3

0x2916,	// (0x0005f5ae) cale_month_pane_g4_ParamLimits

0x2916,	// (0x0005f5ae) cale_month_pane_g4

0x296a,	// (0x0005f602) cale_month_pane_g5_ParamLimits

0x296a,	// (0x0005f602) cale_month_pane_g5

0x29be,	// (0x0005f656) cale_month_pane_g6_ParamLimits

0x29be,	// (0x0005f656) cale_month_pane_g6

0x2a1a,	// (0x0005f6b2) cale_month_pane_g7_ParamLimits

0x2a1a,	// (0x0005f6b2) cale_month_pane_g7

0x2a76,	// (0x0005f70e) cale_month_pane_g8_ParamLimits

0x2a76,	// (0x0005f70e) cale_month_pane_g8

0x2ad2,	// (0x0005f76a) cale_month_pane_g9_ParamLimits

0x2ad2,	// (0x0005f76a) cale_month_pane_g9

0x2b22,	// (0x0005f7ba) cale_month_pane_g10_ParamLimits

0x2b22,	// (0x0005f7ba) cale_month_pane_g10

0x2b68,	// (0x0005f800) cale_month_pane_g11_ParamLimits

0x2b68,	// (0x0005f800) cale_month_pane_g11

0x2bac,	// (0x0005f844) cale_month_pane_g12_ParamLimits

0x2bac,	// (0x0005f844) cale_month_pane_g12

0x2bf4,	// (0x0005f88c) cale_month_pane_g13_ParamLimits

0x2bf4,	// (0x0005f88c) cale_month_pane_g13

0x000c,

0xf296,	// (0x0006bf2e) cale_month_pane_g_ParamLimits

0xf296,	// (0x0006bf2e) cale_month_pane_g

0x2c3c,	// (0x0005f8d4) cale_month_week_pane

0x2c58,	// (0x0005f8f0) grid_cale_month_pane_ParamLimits

0x2c58,	// (0x0005f8f0) grid_cale_month_pane

0x2c9e,	// (0x0005f936) cale_month_day_heading_pane_t1

0x2d1c,	// (0x0005f9b4) cale_month_day_heading_pane_t2

0x2da5,	// (0x0005fa3d) cale_month_day_heading_pane_t3

0x2e2e,	// (0x0005fac6) cale_month_day_heading_pane_t4

0x2eb7,	// (0x0005fb4f) cale_month_day_heading_pane_t5

0x2f44,	// (0x0005fbdc) cale_month_day_heading_pane_t6

0x2fd5,	// (0x0005fc6d) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0006bf49) cale_month_day_heading_pane_t

0xaa87,	// (0x0006771f) bg_cale_side_pane_cp01

0x3066,	// (0x0005fcfe) cale_month_week_pane_t1

0x307f,	// (0x0005fd17) cale_month_week_pane_t2

0x3098,	// (0x0005fd30) cale_month_week_pane_t3

0x30b1,	// (0x0005fd49) cale_month_week_pane_t4

0x30ca,	// (0x0005fd62) cale_month_week_pane_t5

0x30e5,	// (0x0005fd7d) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0006bf58) cale_month_week_pane_t

0x3106,	// (0x0005fd9e) cell_cale_month_pane_ParamLimits

0x3106,	// (0x0005fd9e) cell_cale_month_pane

0x323e,	// (0x0005fed6) cell_cale_month_pane_g1

0x324a,	// (0x0005fee2) cell_cale_month_pane_t1_ParamLimits

0x324a,	// (0x0005fee2) cell_cale_month_pane_t1

0xaa95,	// (0x0006772d) grid_highlight_pane_cp08

0xa7a8,	// (0x00067440) main_smil_g1

0x326a,	// (0x0005ff02) smil_status_pane

0xae2c,	// (0x00067ac4) smil_text_pane

0xc675,	// (0x0006930d) bg_popup_call3_rect_pane_g8

0xc67d,	// (0x00069315) bg_popup_call3_rect_pane_g9

0x0008,

0xf574,	// (0x0006c20c) bg_popup_call3_rect_pane_g

0xc90b,	// (0x000695a3) smil_status_volume_pane_g1

0x327d,	// (0x0005ff15) smil_status_pane_t1

0x483a,	// (0x000614d2) volume_smil_pane

0xae36,	// (0x00067ace) list_smil_text_pane

0x3294,	// (0x0005ff2c) scroll_pane_cp011

0x329f,	// (0x0005ff37) smil_text_list_pane_t1_ParamLimits

0x329f,	// (0x0005ff37) smil_text_list_pane_t1

0x32f1,	// (0x0005ff89) aid_volume_smil_ParamLimits

0x32f1,	// (0x0005ff89) aid_volume_smil

0xa7a8,	// (0x00067440) smil_volume_pane_g1

0xa7a8,	// (0x00067440) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0006bf78) smil_volume_pane_g

0x1647,	// (0x0005e2df) listscroll_cale_day_pane

0xae40,	// (0x00067ad8) bg_cale_pane

0xae58,	// (0x00067af0) list_cale_pane

0xae7b,	// (0x00067b13) scroll_pane_cp09

0xae8c,	// (0x00067b24) cale_bg_pane_g1

0xae94,	// (0x00067b2c) cale_bg_pane_g2

0xae9c,	// (0x00067b34) cale_bg_pane_g3

0xaea4,	// (0x00067b3c) cale_bg_pane_g4

0xaeac,	// (0x00067b44) cale_bg_pane_g5

0xaeb4,	// (0x00067b4c) cale_bg_pane_g6

0xaebc,	// (0x00067b54) cale_bg_pane_g7

0xaec4,	// (0x00067b5c) cale_bg_pane_g8

0xaecc,	// (0x00067b64) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0006bf7d) cale_bg_pane_g

0x3313,	// (0x0005ffab) list_cale_time_pane_ParamLimits

0x3313,	// (0x0005ffab) list_cale_time_pane

0xaed4,	// (0x00067b6c) list_cale_time_pane_g1_ParamLimits

0xaed4,	// (0x00067b6c) list_cale_time_pane_g1

0xaee0,	// (0x00067b78) list_cale_time_pane_g2_ParamLimits

0xaee0,	// (0x00067b78) list_cale_time_pane_g2

0x3328,	// (0x0005ffc0) list_cale_time_pane_g3_ParamLimits

0x3328,	// (0x0005ffc0) list_cale_time_pane_g3

0x3336,	// (0x0005ffce) list_cale_time_pane_g4_ParamLimits

0x3336,	// (0x0005ffce) list_cale_time_pane_g4

0x3344,	// (0x0005ffdc) list_cale_time_pane_g5_ParamLimits

0x3344,	// (0x0005ffdc) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0006bf90) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0006bf90) list_cale_time_pane_g

0xaefa,	// (0x00067b92) list_cale_time_pane_t1_ParamLimits

0xaefa,	// (0x00067b92) list_cale_time_pane_t1

0xaf22,	// (0x00067bba) list_cale_time_pane_t2_ParamLimits

0xaf22,	// (0x00067bba) list_cale_time_pane_t2

0x370b,	// (0x000603a3) aid_blid_cardinal_pane

0x374d,	// (0x000603e5) compass_pane_t4

0xaf5f,	// (0x00067bf7) list_cale_time_pane_t4_ParamLimits

0xaf5f,	// (0x00067bf7) list_cale_time_pane_t4

0x375b,	// (0x000603f3) compass_pane_t5

0x376b,	// (0x00060403) compass_pane_t6

0x3779,	// (0x00060411) compass_pane_t7

0xb379,	// (0x00068011) navi_pane_cc_t1

0xb4dc,	// (0x00068174) aid_phob_thumbnail_center_pane

0x3f42,	// (0x00060bda) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0006bf9d) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0006bf9d) list_cale_time_pane_t

0x9d4c,	// (0x000669e4) bg_popup_window_pane_cp02_ParamLimits

0x9d4c,	// (0x000669e4) bg_popup_window_pane_cp02

0xaf87,	// (0x00067c1f) heading_pane_cp01_ParamLimits

0xaf87,	// (0x00067c1f) heading_pane_cp01

0xaf93,	// (0x00067c2b) loc_req_pane_ParamLimits

0xaf93,	// (0x00067c2b) loc_req_pane

0xafa3,	// (0x00067c3b) loc_type_pane_ParamLimits

0xafa3,	// (0x00067c3b) loc_type_pane

0xafb5,	// (0x00067c4d) loc_type_pane_t1_ParamLimits

0xafb5,	// (0x00067c4d) loc_type_pane_t1

0xafc7,	// (0x00067c5f) loc_type_pane_t2_ParamLimits

0xafc7,	// (0x00067c5f) loc_type_pane_t2

0xafd9,	// (0x00067c71) loc_type_pane_t3_ParamLimits

0xafd9,	// (0x00067c71) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0006bfa4) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0006bfa4) loc_type_pane_t

0xafeb,	// (0x00067c83) list_loc_req_pane

0xaff5,	// (0x00067c8d) scroll_pane_cp012

0x3352,	// (0x0005ffea) list_single_loc_request_popup_menu_pane_ParamLimits

0x3352,	// (0x0005ffea) list_single_loc_request_popup_menu_pane

0xb000,	// (0x00067c98) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb000,	// (0x00067c98) list_single_loc_request_popup_menu_pane_g1

0xb00c,	// (0x00067ca4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00c,	// (0x00067ca4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0006bfab) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0006bfab) list_single_loc_request_popup_menu_pane_g

0xb018,	// (0x00067cb0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb018,	// (0x00067cb0) list_single_loc_request_popup_menu_pane_t1

0x3364,	// (0x0005fffc) bg_popup_window_pane_cp03_ParamLimits

0x3364,	// (0x0005fffc) bg_popup_window_pane_cp03

0x3372,	// (0x0006000a) heading_loc_req_pane_ParamLimits

0x3372,	// (0x0006000a) heading_loc_req_pane

0x337e,	// (0x00060016) popup_dyc_status_message_window_g1_ParamLimits

0x337e,	// (0x00060016) popup_dyc_status_message_window_g1

0x338a,	// (0x00060022) popup_dyc_status_message_window_t1_ParamLimits

0x338a,	// (0x00060022) popup_dyc_status_message_window_t1

0x339c,	// (0x00060034) popup_dyc_status_message_window_t2_ParamLimits

0x339c,	// (0x00060034) popup_dyc_status_message_window_t2

0x33ae,	// (0x00060046) popup_dyc_status_message_window_t3_ParamLimits

0x33ae,	// (0x00060046) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0006bfb0) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0006bfb0) popup_dyc_status_message_window_t

0xa0f5,	// (0x00066d8d) bg_heading_pane_cp01

0xb02e,	// (0x00067cc6) heading_loc_req_pane_g1

0xb036,	// (0x00067cce) heading_loc_req_pane_g2

0xb03e,	// (0x00067cd6) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0006bfb7) heading_loc_req_pane_g

0xb046,	// (0x00067cde) heading_loc_req_pane_t1

0xb056,	// (0x00067cee) bg_popup_sub_pane_cp01_ParamLimits

0xb056,	// (0x00067cee) bg_popup_sub_pane_cp01

0xb064,	// (0x00067cfc) popup_cale_events_window_g1_ParamLimits

0xb064,	// (0x00067cfc) popup_cale_events_window_g1

0xb084,	// (0x00067d1c) popup_cale_events_window_g2_ParamLimits

0xb084,	// (0x00067d1c) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0006bfeb) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0006bfeb) popup_cale_events_window_g

0xb0a4,	// (0x00067d3c) popup_cale_events_window_t1_ParamLimits

0xb0a4,	// (0x00067d3c) popup_cale_events_window_t1

0xb0b6,	// (0x00067d4e) popup_cale_events_window_t2_ParamLimits

0xb0b6,	// (0x00067d4e) popup_cale_events_window_t2

0xb0f4,	// (0x00067d8c) popup_cale_events_window_t3_ParamLimits

0xb0f4,	// (0x00067d8c) popup_cale_events_window_t3

0xb13a,	// (0x00067dd2) popup_cale_events_window_t4_ParamLimits

0xb13a,	// (0x00067dd2) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0006bff0) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0006bff0) popup_cale_events_window_t

0x34a7,	// (0x0006013f) call_type_pane

0xb4aa,	// (0x00068142) popup_call_status_window_g1

0x34b3,	// (0x0006014b) popup_call_status_window_g2

0x34bf,	// (0x00060157) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0006bff9) popup_call_status_window_g

0xb170,	// (0x00067e08) call_type_pane_g1

0xb179,	// (0x00067e11) call_type_pane_g2

0x0001,

0xf368,	// (0x0006c000) call_type_pane_g

0xa0f5,	// (0x00066d8d) bg_popup_sub_pane_cp02

0xb182,	// (0x00067e1a) listscroll_popup_wml_pane

0xb18a,	// (0x00067e22) list_wml_pane

0xb194,	// (0x00067e2c) scroll_pane_cp013

0xb19f,	// (0x00067e37) list_single_graphic_popup_wml_pane_ParamLimits

0xb19f,	// (0x00067e37) list_single_graphic_popup_wml_pane

0xa7a8,	// (0x00067440) list_single_graphic_popup_wml_pane_g1

0xb1b3,	// (0x00067e4b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0006c005) list_single_graphic_popup_wml_pane_g

0xb1bb,	// (0x00067e53) list_single_graphic_popup_wml_pane_t1

0xb1d1,	// (0x00067e69) aid_call_pane

0xa686,	// (0x0006731e) popup_clock_analogue_window_g1

0xa686,	// (0x0006731e) popup_clock_analogue_window_g2

0x34cb,	// (0x00060163) popup_clock_analogue_window_g3

0x34cb,	// (0x00060163) popup_clock_analogue_window_g4

0xa7a8,	// (0x00067440) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0006c00a) popup_clock_analogue_window_g

0x34d3,	// (0x0006016b) popup_clock_analogue_window_t1

0x34e1,	// (0x00060179) clock_digital_number_pane_ParamLimits

0x34e1,	// (0x00060179) clock_digital_number_pane

0x34ed,	// (0x00060185) clock_digital_number_pane_cp02_ParamLimits

0x34ed,	// (0x00060185) clock_digital_number_pane_cp02

0x34f9,	// (0x00060191) clock_digital_number_pane_cp03_ParamLimits

0x34f9,	// (0x00060191) clock_digital_number_pane_cp03

0x3505,	// (0x0006019d) clock_digital_number_pane_cp04_ParamLimits

0x3505,	// (0x0006019d) clock_digital_number_pane_cp04

0x3511,	// (0x000601a9) clock_digital_separator_pane_ParamLimits

0x3511,	// (0x000601a9) clock_digital_separator_pane

0x351d,	// (0x000601b5) popup_clock_digital_window_t1

0xa7a8,	// (0x00067440) clock_digital_number_pane_g1

0xa7a8,	// (0x00067440) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0006bf78) clock_digital_number_pane_g

0xa7a8,	// (0x00067440) clock_digital_separator_pane_g1

0xa7a8,	// (0x00067440) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0006bf78) clock_digital_separator_pane_g

0xa0f5,	// (0x00066d8d) bg_popup_window_pane_cp04

0xb1d9,	// (0x00067e71) heading_pane_cp03

0xb1e1,	// (0x00067e79) listscroll_popup_gms_pane

0xb1e9,	// (0x00067e81) grid_large_graphic_popup_pane

0xb1f3,	// (0x00067e8b) listscroll_popup_gms_pane_g1

0xb1fb,	// (0x00067e93) listscroll_popup_gms_pane_g2

0x0001,

0x0168,	// (0x0005ce00) listscroll_popup_gms_pane_g

0xac91,	// (0x00067929) scroll_pane_cp014

0x353a,	// (0x000601d2) cell_large_graphic_popup_pane_ParamLimits

0x353a,	// (0x000601d2) cell_large_graphic_popup_pane

0x3554,	// (0x000601ec) cell_large_graphic_popup_pane_g1_ParamLimits

0x3554,	// (0x000601ec) cell_large_graphic_popup_pane_g1

0xb203,	// (0x00067e9b) cell_large_graphic_popup_pane_g2_ParamLimits

0xb203,	// (0x00067e9b) cell_large_graphic_popup_pane_g2

0xb20f,	// (0x00067ea7) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20f,	// (0x00067ea7) cell_large_graphic_popup_pane_g3

0xb21c,	// (0x00067eb4) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21c,	// (0x00067eb4) cell_large_graphic_popup_pane_g4

0x0003,

0xf37d,	// (0x0006c015) cell_large_graphic_popup_pane_g_ParamLimits

0xf37d,	// (0x0006c015) cell_large_graphic_popup_pane_g

0xb22c,	// (0x00067ec4) grid_highlight_pane_cp010

0xa7a8,	// (0x00067440) bg_popup_call_pane_g1

0xb236,	// (0x00067ece) list_single_graphic_popup_conf_pane_ParamLimits

0xb236,	// (0x00067ece) list_single_graphic_popup_conf_pane

0xb248,	// (0x00067ee0) list_highlight_pane_cp01

0xb251,	// (0x00067ee9) list_single_graphic_popup_conf_pane_g1

0xb259,	// (0x00067ef1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf386,	// (0x0006c01e) list_single_graphic_popup_conf_pane_g

0xb261,	// (0x00067ef9) list_single_graphic_popup_conf_pane_t1

0xb26f,	// (0x00067f07) linegrid_cams_pane_g1

0x3560,	// (0x000601f8) linegrid_cams_pane_g2

0xaac8,	// (0x00067760) linegrid_cams_pane_g3

0xb278,	// (0x00067f10) linegrid_cams_pane_g4

0x3569,	// (0x00060201) linegrid_cams_pane_g5

0x3572,	// (0x0006020a) linegrid_cams_pane_g6

0xaad1,	// (0x00067769) linegrid_cams_pane_g7

0x0006,

0xf38b,	// (0x0006c023) linegrid_cams_pane_g

0xb281,	// (0x00067f19) popup_clock_analogue_window

0xb281,	// (0x00067f19) popup_clock_digital_window

0xa0f5,	// (0x00066d8d) popup_phob_thumbnail_window

0xa7a8,	// (0x00067440) call_video_uplink_pane_g1

0xb28a,	// (0x00067f22) call_video_uplink_pane_g2

0x0001,

0xf39a,	// (0x0006c032) call_video_uplink_pane_g

0xb292,	// (0x00067f2a) video_uplink_pane

0xb29a,	// (0x00067f32) mce_image_pane_g1

0x357d,	// (0x00060215) mce_image_pane_g2

0x3587,	// (0x0006021f) mce_image_pane_g3

0x3591,	// (0x00060229) mce_image_pane_g4

0x3599,	// (0x00060231) mce_image_pane_g5

0x0004,

0xf39f,	// (0x0006c037) mce_image_pane_g

0xb2a4,	// (0x00067f3c) control_top_pane_stacon_cp01_ParamLimits

0xb2a4,	// (0x00067f3c) control_top_pane_stacon_cp01

0xb2b8,	// (0x00067f50) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b8,	// (0x00067f50) uni_indicator_pane_stacon_cp01

0xb2c9,	// (0x00067f61) bg_popup_sub_pane_cp03

0x35a1,	// (0x00060239) chi_dic_find_pane

0x35a9,	// (0x00060241) listscroll_chi_dic_pane

0x35b2,	// (0x0006024a) main_pane_chidic_g1

0x35c5,	// (0x0006025d) chi_dic_find_pane_t1

0xb2d3,	// (0x00067f6b) find_chidic_pane

0xb2dc,	// (0x00067f74) chi_dic_list_pane_ParamLimits

0xb2dc,	// (0x00067f74) chi_dic_list_pane

0xb2ed,	// (0x00067f85) scroll_pane_cp020

0x35d3,	// (0x0006026b) find_chidic_pane_t1

0xa0f5,	// (0x00066d8d) input_focus_pane_cp06

0x35e2,	// (0x0006027a) list_chi_dic_pane_ParamLimits

0x35e2,	// (0x0006027a) list_chi_dic_pane

0x35f7,	// (0x0006028f) list_chi_dic_pane_t1_ParamLimits

0x35f7,	// (0x0006028f) list_chi_dic_pane_t1

0xa0f5,	// (0x00066d8d) list_highlight_pane_cp020

0xb2f5,	// (0x00067f8d) bg_cale_heading_pane_g1

0x360a,	// (0x000602a2) bg_cale_heading_pane_g2

0x3612,	// (0x000602aa) bg_cale_heading_pane_g3

0x361a,	// (0x000602b2) bg_cale_heading_pane_g4

0x3624,	// (0x000602bc) bg_cale_heading_pane_g5

0x362e,	// (0x000602c6) bg_cale_heading_pane_g6

0x3636,	// (0x000602ce) bg_cale_heading_pane_g7

0x363e,	// (0x000602d6) bg_cale_heading_pane_g8

0x3648,	// (0x000602e0) bg_cale_heading_pane_g9

0x0008,

0xf3aa,	// (0x0006c042) bg_cale_heading_pane_g

0xb2f5,	// (0x00067f8d) bg_cale_side_pane_g1

0x3652,	// (0x000602ea) bg_cale_side_pane_g2

0x365c,	// (0x000602f4) bg_cale_side_pane_g3

0x3666,	// (0x000602fe) bg_cale_side_pane_g4

0x3670,	// (0x00060308) bg_cale_side_pane_g5

0x367a,	// (0x00060312) bg_cale_side_pane_g6

0x3684,	// (0x0006031c) bg_cale_side_pane_g7

0x368e,	// (0x00060326) bg_cale_side_pane_g8

0x3696,	// (0x0006032e) bg_cale_side_pane_g9

0x0008,

0xf3bd,	// (0x0006c055) bg_cale_side_pane_g

0x369e,	// (0x00060336) popup_call_status_window_ParamLimits

0x369e,	// (0x00060336) popup_call_status_window

0xb2fd,	// (0x00067f95) stacon_top_pane

0xb305,	// (0x00067f9d) status_pane_ParamLimits

0xb305,	// (0x00067f9d) status_pane

0xb31a,	// (0x00067fb2) status_small_pane

0xb322,	// (0x00067fba) control_pane

0xa0f5,	// (0x00066d8d) stacon_bottom_pane

0xb32a,	// (0x00067fc2) list_single_mce_smart_pane_t1_ParamLimits

0xb32a,	// (0x00067fc2) list_single_mce_smart_pane_t1

0xb33d,	// (0x00067fd5) list_single_mce_smart_pane_t2_ParamLimits

0xb33d,	// (0x00067fd5) list_single_mce_smart_pane_t2

0x0001,

0xf3d0,	// (0x0006c068) list_single_mce_smart_pane_t_ParamLimits

0xf3d0,	// (0x0006c068) list_single_mce_smart_pane_t

0x36aa,	// (0x00060342) compass_pane

0x36b5,	// (0x0006034d) main_location2_pane_t1

0x36cb,	// (0x00060363) main_location2_pane_t2

0x36e1,	// (0x00060379) main_location2_pane_t3

0x0003,

0xf3d5,	// (0x0006c06d) main_location2_pane_t

0xb35c,	// (0x00067ff4) compass_pane_g1_ParamLimits

0xb35c,	// (0x00067ff4) compass_pane_g1

0x372f,	// (0x000603c7) compass_pane_t1

0x373e,	// (0x000603d6) compass_pane_t2

0x0005,

0xf3de,	// (0x0006c076) compass_pane_t

0x3789,	// (0x00060421) text_secondary_cp61

0xb370,	// (0x00068008) navi_pane_cams_g5

0xb393,	// (0x0006802b) navi_pane_im_t1

0xb3a1,	// (0x00068039) navi_pane_mp_g1_ParamLimits

0xb3a1,	// (0x00068039) navi_pane_mp_g1

0xb3b5,	// (0x0006804d) navi_pane_mp_g2_ParamLimits

0xb3b5,	// (0x0006804d) navi_pane_mp_g2

0xb3c1,	// (0x00068059) navi_pane_mp_g3_ParamLimits

0xb3c1,	// (0x00068059) navi_pane_mp_g3

0x0002,

0xf3f2,	// (0x0006c08a) navi_pane_mp_g_ParamLimits

0xf3f2,	// (0x0006c08a) navi_pane_mp_g

0xb3cd,	// (0x00068065) navi_pane_mp_t1

0xb3db,	// (0x00068073) navi_pane_mp_t2

0x0002,

0xf3f9,	// (0x0006c091) navi_pane_mp_t

0xb417,	// (0x000680af) navi_pane_vt_g1

0xb3cd,	// (0x00068065) navi_pane_vt_t1

0xb41f,	// (0x000680b7) navi_slider_pane

0xb427,	// (0x000680bf) zooming_pane

0xb42f,	// (0x000680c7) navi_slider_pane_g1

0x38be,	// (0x00060556) navi_slider_pane_g2

0x0006,

0xf400,	// (0x0006c098) navi_slider_pane_g

0xb453,	// (0x000680eb) aid_levels_zoom

0xb45b,	// (0x000680f3) zooming_pane_g1

0xb463,	// (0x000680fb) zooming_pane_g2

0xb463,	// (0x000680fb) zooming_pane_g3

0x0002,

0xf40f,	// (0x0006c0a7) zooming_pane_g

0xb46b,	// (0x00068103) level_10_zoom

0xb474,	// (0x0006810c) level_11_zoom

0xb47d,	// (0x00068115) level_1_zoom

0xb486,	// (0x0006811e) level_2_zoom

0xb48f,	// (0x00068127) level_3_zoom

0xb498,	// (0x00068130) level_4_zoom

0xb4a1,	// (0x00068139) level_5_zoom

0xb4b8,	// (0x00068150) level_6_zoom

0xb4c1,	// (0x00068159) level_7_zoom

0xb4ca,	// (0x00068162) level_8_zoom

0xb4d3,	// (0x0006816b) level_9_zoom

0xb4e4,	// (0x0006817c) popup_phob_thumbnail_window_g1

0xb4ec,	// (0x00068184) popup_phob_thumbnail_window_g2

0x0001,

0xf416,	// (0x0006c0ae) popup_phob_thumbnail_window_g

0xc7db,	// (0x00069473) level_1_location

0xc7e3,	// (0x0006947b) level_2_location

0xc7eb,	// (0x00069483) level_3_location

0xc7f3,	// (0x0006948b) level_4_location

0xb427,	// (0x000680bf) level_5_location

0x38d0,	// (0x00060568) mce_icon_pane_g1

0x38d8,	// (0x00060570) mce_icon_pane_g2

0x0001,

0xf41b,	// (0x0006c0b3) mce_icon_pane_g

0x38e0,	// (0x00060578) main_mup_pane_g1_ParamLimits

0x38e0,	// (0x00060578) main_mup_pane_g1

0x38f8,	// (0x00060590) main_mup_pane_g2_ParamLimits

0x38f8,	// (0x00060590) main_mup_pane_g2

0x3914,	// (0x000605ac) main_mup_pane_g3_ParamLimits

0x3914,	// (0x000605ac) main_mup_pane_g3

0x3930,	// (0x000605c8) main_mup_pane_g4_ParamLimits

0x3930,	// (0x000605c8) main_mup_pane_g4

0x394c,	// (0x000605e4) main_mup_pane_g5_ParamLimits

0x394c,	// (0x000605e4) main_mup_pane_g5

0x396d,	// (0x00060605) main_mup_pane_g6_ParamLimits

0x396d,	// (0x00060605) main_mup_pane_g6

0x398d,	// (0x00060625) main_mup_pane_g7_ParamLimits

0x398d,	// (0x00060625) main_mup_pane_g7

0x39b1,	// (0x00060649) main_mup_pane_g8_ParamLimits

0x39b1,	// (0x00060649) main_mup_pane_g8

0x39d5,	// (0x0006066d) main_mup_pane_g9_ParamLimits

0x39d5,	// (0x0006066d) main_mup_pane_g9

0x39f8,	// (0x00060690) main_mup_pane_g10_ParamLimits

0x39f8,	// (0x00060690) main_mup_pane_g10

0x3a1b,	// (0x000606b3) main_mup_pane_g11_ParamLimits

0x3a1b,	// (0x000606b3) main_mup_pane_g11

0x3a3b,	// (0x000606d3) main_mup_pane_g12_ParamLimits

0x3a3b,	// (0x000606d3) main_mup_pane_g12

0x3a49,	// (0x000606e1) main_mup_pane_g13_ParamLimits

0x3a49,	// (0x000606e1) main_mup_pane_g13

0x000c,

0xf420,	// (0x0006c0b8) main_mup_pane_g_ParamLimits

0xf420,	// (0x0006c0b8) main_mup_pane_g

0x3a5f,	// (0x000606f7) main_mup_pane_t1_ParamLimits

0x3a5f,	// (0x000606f7) main_mup_pane_t1

0x3a7e,	// (0x00060716) main_mup_pane_t2_ParamLimits

0x3a7e,	// (0x00060716) main_mup_pane_t2

0x3a98,	// (0x00060730) main_mup_pane_t3_ParamLimits

0x3a98,	// (0x00060730) main_mup_pane_t3

0x3ab2,	// (0x0006074a) main_mup_pane_t4_ParamLimits

0x3ab2,	// (0x0006074a) main_mup_pane_t4

0x3ac4,	// (0x0006075c) main_mup_pane_t5_ParamLimits

0x3ac4,	// (0x0006075c) main_mup_pane_t5

0x3ad6,	// (0x0006076e) main_mup_pane_t6_ParamLimits

0x3ad6,	// (0x0006076e) main_mup_pane_t6

0x0005,

0xf43b,	// (0x0006c0d3) main_mup_pane_t_ParamLimits

0xf43b,	// (0x0006c0d3) main_mup_pane_t

0x3aec,	// (0x00060784) mup_progress_pane_ParamLimits

0x3aec,	// (0x00060784) mup_progress_pane

0x3af8,	// (0x00060790) mup_visualizer_pane_ParamLimits

0x3af8,	// (0x00060790) mup_visualizer_pane

0x3b36,	// (0x000607ce) mup_volume_pane_ParamLimits

0x3b36,	// (0x000607ce) mup_volume_pane

0xb4aa,	// (0x00068142) mup_visualizer_pane_g1_ParamLimits

0xb4aa,	// (0x00068142) mup_visualizer_pane_g1

0xb4aa,	// (0x00068142) mup_visualizer_pane_g2_ParamLimits

0xb4aa,	// (0x00068142) mup_visualizer_pane_g2

0xb35c,	// (0x00067ff4) mup_visualizer_pane_g3_ParamLimits

0xb35c,	// (0x00067ff4) mup_visualizer_pane_g3

0x0002,

0xf448,	// (0x0006c0e0) mup_visualizer_pane_g_ParamLimits

0xf448,	// (0x0006c0e0) mup_visualizer_pane_g

0xa7a8,	// (0x00067440) mup_volume_pane_g1

0xb4fc,	// (0x00068194) mup_volume_pane_g2

0x0001,

0xf44f,	// (0x0006c0e7) mup_volume_pane_g

0xa7a8,	// (0x00067440) mup_progress_pane_g1

0xb505,	// (0x0006819d) mup_progress_pane_g2

0xb50e,	// (0x000681a6) mup_progress_pane_g3

0x0002,

0xf454,	// (0x0006c0ec) mup_progress_pane_g

0xa0f5,	// (0x00066d8d) bg_popup_window_pane_cp05

0xb517,	// (0x000681af) heading_pane_cp02_ParamLimits

0xb517,	// (0x000681af) heading_pane_cp02

0xb533,	// (0x000681cb) list_popup_blid_pane

0xb53b,	// (0x000681d3) list_blid_sat_info_pane_ParamLimits

0xb53b,	// (0x000681d3) list_blid_sat_info_pane

0xb54e,	// (0x000681e6) list_blid_sat_info_pane_g1

0xb556,	// (0x000681ee) list_blid_sat_info_pane_t1

0x3c55,	// (0x000608ed) mup_equalizer_pane_ParamLimits

0x3c55,	// (0x000608ed) mup_equalizer_pane

0x3c76,	// (0x0006090e) mup_equalizer_pane_cp1_ParamLimits

0x3c76,	// (0x0006090e) mup_equalizer_pane_cp1

0x3c97,	// (0x0006092f) mup_equalizer_pane_cp2_ParamLimits

0x3c97,	// (0x0006092f) mup_equalizer_pane_cp2

0x3cb8,	// (0x00060950) mup_equalizer_pane_cp3_ParamLimits

0x3cb8,	// (0x00060950) mup_equalizer_pane_cp3

0x3cdd,	// (0x00060975) mup_equalizer_pane_cp4_ParamLimits

0x3cdd,	// (0x00060975) mup_equalizer_pane_cp4

0x3d02,	// (0x0006099a) mup_equalizer_pane_cp5

0x3d1a,	// (0x000609b2) mup_equalizer_pane_cp6

0x3d32,	// (0x000609ca) mup_equalizer_pane_cp7

0xc6f5,	// (0x0006938d) bg_popup_call_poc_act_pane_g9

0xc6fd,	// (0x00069395) bg_popup_call_poc_act_pane_g10

0xc705,	// (0x0006939d) bg_popup_call_poc_act_pane_g11

0x000a,

0xa68e,	// (0x00067326) mup_scale_pane

0xa7a8,	// (0x00067440) mup_scale_pane_g1

0xb564,	// (0x000681fc) mup_scale_pane_g2

0x0006,

0xf470,	// (0x0006c108) mup_scale_pane_g

0xb588,	// (0x00068220) msg_data_pane

0xb590,	// (0x00068228) scroll_pane_cp017

0x3d5c,	// (0x000609f4) bg_list_pane_cp04_ParamLimits

0x3d5c,	// (0x000609f4) bg_list_pane_cp04

0xb598,	// (0x00068230) msg_data_pane_g1

0x3d84,	// (0x00060a1c) msg_data_pane_g2

0x3d8e,	// (0x00060a26) msg_data_pane_g3

0x3d98,	// (0x00060a30) msg_data_pane_g4

0x3da0,	// (0x00060a38) msg_data_pane_g5

0x3da8,	// (0x00060a40) msg_data_pane_g6

0x3db0,	// (0x00060a48) msg_data_pane_g7

0x0006,

0xf47f,	// (0x0006c117) msg_data_pane_g

0x3db8,	// (0x00060a50) msg_text_pane_ParamLimits

0x3db8,	// (0x00060a50) msg_text_pane

0x3de0,	// (0x00060a78) qrid_highlight_pane_cp011_ParamLimits

0x3de0,	// (0x00060a78) qrid_highlight_pane_cp011

0xa0f5,	// (0x00066d8d) msg_body_pane

0xa0f5,	// (0x00066d8d) msg_header_pane

0xb5a0,	// (0x00068238) input_focus_pane_cp07

0xb5b5,	// (0x0006824d) msg_header_pane_t1_ParamLimits

0xb5b5,	// (0x0006824d) msg_header_pane_t1

0xa1f1,	// (0x00066e89) msg_header_pane_t2_ParamLimits

0xa1f1,	// (0x00066e89) msg_header_pane_t2

0x0001,

0xf493,	// (0x0006c12b) msg_header_pane_t_ParamLimits

0xf493,	// (0x0006c12b) msg_header_pane_t

0xb5c7,	// (0x0006825f) msg_body_pane_g1

0x3e0f,	// (0x00060aa7) msg_body_pane_t1_ParamLimits

0x3e0f,	// (0x00060aa7) msg_body_pane_t1

0xa203,	// (0x00066e9b) msg_body_pane_t2_ParamLimits

0xa203,	// (0x00066e9b) msg_body_pane_t2

0xa215,	// (0x00066ead) msg_body_pane_t3_ParamLimits

0xa215,	// (0x00066ead) msg_body_pane_t3

0x0002,

0xf498,	// (0x0006c130) msg_body_pane_t_ParamLimits

0xf498,	// (0x0006c130) msg_body_pane_t

0x3e92,	// (0x00060b2a) main_viewer_pane_g1_ParamLimits

0x3e92,	// (0x00060b2a) main_viewer_pane_g1

0x3e9e,	// (0x00060b36) main_viewer_pane_g2_ParamLimits

0x3e9e,	// (0x00060b36) main_viewer_pane_g2

0x3eaa,	// (0x00060b42) main_viewer_pane_g3_ParamLimits

0x3eaa,	// (0x00060b42) main_viewer_pane_g3

0x3ebb,	// (0x00060b53) main_viewer_pane_g4_ParamLimits

0x3ebb,	// (0x00060b53) main_viewer_pane_g4

0x3ecc,	// (0x00060b64) main_viewer_pane_g5_ParamLimits

0x3ecc,	// (0x00060b64) main_viewer_pane_g5

0x3ecc,	// (0x00060b64) main_viewer_pane_g7_ParamLimits

0x3ecc,	// (0x00060b64) main_viewer_pane_g7

0x3ede,	// (0x00060b76) main_viewer_pane_g8_ParamLimits

0x3ede,	// (0x00060b76) main_viewer_pane_g8

0x0007,

0xf4a8,	// (0x0006c140) main_viewer_pane_g_ParamLimits

0xf4a8,	// (0x0006c140) main_viewer_pane_g

0xb5cf,	// (0x00068267) viewer_content_pane_ParamLimits

0xb5cf,	// (0x00068267) viewer_content_pane

0x3f16,	// (0x00060bae) main_postcard_pane_g1_ParamLimits

0x3f16,	// (0x00060bae) main_postcard_pane_g1

0x3f24,	// (0x00060bbc) main_postcard_pane_g2_ParamLimits

0x3f24,	// (0x00060bbc) main_postcard_pane_g2

0x3f32,	// (0x00060bca) main_postcard_pane_g3_ParamLimits

0x3f32,	// (0x00060bca) main_postcard_pane_g3

0x0005,

0xf4b9,	// (0x0006c151) main_postcard_pane_g_ParamLimits

0xf4b9,	// (0x0006c151) main_postcard_pane_g

0x3f42,	// (0x00060bda) main_postcard_pane_g4

0xc91e,	// (0x000695b6) smil_status_volume_pane_g2

0x3f6e,	// (0x00060c06) postcard_pane_ParamLimits

0x3f6e,	// (0x00060c06) postcard_pane

0xb4aa,	// (0x00068142) postcard_pane_g1_ParamLimits

0xb4aa,	// (0x00068142) postcard_pane_g1

0x3fa8,	// (0x00060c40) postcard_pane_g2_ParamLimits

0x3fa8,	// (0x00060c40) postcard_pane_g2

0x3fb4,	// (0x00060c4c) postcard_pane_g3_ParamLimits

0x3fb4,	// (0x00060c4c) postcard_pane_g3

0xb5dd,	// (0x00068275) postcard_pane_g4_ParamLimits

0xb5dd,	// (0x00068275) postcard_pane_g4

0x3fc0,	// (0x00060c58) postcard_pane_g5_ParamLimits

0x3fc0,	// (0x00060c58) postcard_pane_g5

0x3fcc,	// (0x00060c64) postcard_pane_g6_ParamLimits

0x3fcc,	// (0x00060c64) postcard_pane_g6

0xb5eb,	// (0x00068283) postcard_pane_g7_ParamLimits

0xb5eb,	// (0x00068283) postcard_pane_g7

0x0006,

0xf4c6,	// (0x0006c15e) postcard_pane_g_ParamLimits

0xf4c6,	// (0x0006c15e) postcard_pane_g

0x3fda,	// (0x00060c72) main_mp2_pane_g1_ParamLimits

0x3fda,	// (0x00060c72) main_mp2_pane_g1

0x3fe8,	// (0x00060c80) main_mp2_pane_g2_ParamLimits

0x3fe8,	// (0x00060c80) main_mp2_pane_g2

0x3ff4,	// (0x00060c8c) main_mp2_pane_g3_ParamLimits

0x3ff4,	// (0x00060c8c) main_mp2_pane_g3

0x0002,

0xf4d5,	// (0x0006c16d) main_mp2_pane_g_ParamLimits

0xf4d5,	// (0x0006c16d) main_mp2_pane_g

0x4000,	// (0x00060c98) main_mp2_pane_t1_ParamLimits

0x4000,	// (0x00060c98) main_mp2_pane_t1

0x4017,	// (0x00060caf) main_mp2_pane_t2_ParamLimits

0x4017,	// (0x00060caf) main_mp2_pane_t2

0x402b,	// (0x00060cc3) main_mp2_pane_t3_ParamLimits

0x402b,	// (0x00060cc3) main_mp2_pane_t3

0x0002,

0xf4dc,	// (0x0006c174) main_mp2_pane_t_ParamLimits

0xf4dc,	// (0x0006c174) main_mp2_pane_t

0xb5f9,	// (0x00068291) pec_content_pane_ParamLimits

0xb5f9,	// (0x00068291) pec_content_pane

0xac91,	// (0x00067929) scroll_pane_cp015

0xb60b,	// (0x000682a3) pec_attribute_pane_ParamLimits

0xb60b,	// (0x000682a3) pec_attribute_pane

0x403d,	// (0x00060cd5) pec_content_pane_g1_ParamLimits

0x403d,	// (0x00060cd5) pec_content_pane_g1

0xb61b,	// (0x000682b3) pec_content_pane_t1_ParamLimits

0xb61b,	// (0x000682b3) pec_content_pane_t1

0xb62d,	// (0x000682c5) pec_content_pane_t2_ParamLimits

0xb62d,	// (0x000682c5) pec_content_pane_t2

0x0001,

0xf4e3,	// (0x0006c17b) pec_content_pane_t_ParamLimits

0xf4e3,	// (0x0006c17b) pec_content_pane_t

0x4049,	// (0x00060ce1) list_single_graphic_pane_cp01_ParamLimits

0x4049,	// (0x00060ce1) list_single_graphic_pane_cp01

0xa68e,	// (0x00067326) bg_popup_sub_pane_cp04

0xb63f,	// (0x000682d7) popup_mup_playback_window_g1

0xb64b,	// (0x000682e3) popup_mup_playback_window_t1

0xb660,	// (0x000682f8) popup_mup_playback_window_t2

0x0001,

0xf4e8,	// (0x0006c180) popup_mup_playback_window_t

0xb697,	// (0x0006832f) main_image_pane_g1_ParamLimits

0xb697,	// (0x0006832f) main_image_pane_g1

0xb6da,	// (0x00068372) scroll_pane_cp018_ParamLimits

0xb6da,	// (0x00068372) scroll_pane_cp018

0xb6f2,	// (0x0006838a) scroll_pane_cp016_ParamLimits

0xb6f2,	// (0x0006838a) scroll_pane_cp016

0x40d7,	// (0x00060d6f) smil2_image_pane_ParamLimits

0x40d7,	// (0x00060d6f) smil2_image_pane

0x410d,	// (0x00060da5) smil2_root_pane_ParamLimits

0x410d,	// (0x00060da5) smil2_root_pane

0x4139,	// (0x00060dd1) smil2_text_pane_ParamLimits

0x4139,	// (0x00060dd1) smil2_text_pane

0xa0f5,	// (0x00066d8d) bg_list_pane_cp06

0xb72e,	// (0x000683c6) grid_radio_pane

0xa0f5,	// (0x00066d8d) bg_popup_window_pane_cp06

0xb738,	// (0x000683d0) main_fmradio_pane_t1

0xb1d9,	// (0x00067e71) heading_pane_cp04

0xb746,	// (0x000683de) main_fmradio_pane_t2

0xc70d,	// (0x000693a5) popup_cale_lunar_info_window_g1

0xb754,	// (0x000683ec) main_fmradio_pane_t3

0xc715,	// (0x000693ad) popup_cale_lunar_info_window_g2

0xb764,	// (0x000683fc) main_fmradio_pane_t4

0x0001,

0xb772,	// (0x0006840a) main_fmradio_pane_t5

0x0004,

0xf5c3,	// (0x0006c25b) popup_cale_lunar_info_window_g

0xf4fd,	// (0x0006c195) main_fmradio_pane_t

0xb780,	// (0x00068418) wait_bar_pane_cp03

0xaf4a,	// (0x00067be2) cell_fmradio_pane_ParamLimits

0xaf4a,	// (0x00067be2) cell_fmradio_pane

0xb5eb,	// (0x00068283) cell_fmradio_pane_g1_ParamLimits

0xb5eb,	// (0x00068283) cell_fmradio_pane_g1

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp011

0xb788,	// (0x00068420) poc_content_pane_ParamLimits

0xb788,	// (0x00068420) poc_content_pane

0xb79a,	// (0x00068432) scroll_pane_cp019

0x4179,	// (0x00060e11) popup_call_poc_act_window_ParamLimits

0x4179,	// (0x00060e11) popup_call_poc_act_window

0x4186,	// (0x00060e1e) popup_call_poc_inact_window_ParamLimits

0x4186,	// (0x00060e1e) popup_call_poc_inact_window

0xf59a,	// (0x0006c232) bg_popup_call_poc_act_pane_g

0xc685,	// (0x0006931d) bg_popup_call_poc_inact_pane_g1

0xc68d,	// (0x00069325) bg_popup_call_poc_inact_pane_g2

0xb7a2,	// (0x0006843a) popup_call_poc_act_window_g2

0xc695,	// (0x0006932d) bg_popup_call_poc_inact_pane_g3

0xc69d,	// (0x00069335) bg_popup_call_poc_inact_pane_g4

0xc6a5,	// (0x0006933d) bg_popup_call_poc_inact_pane_g5

0xb7aa,	// (0x00068442) popup_call_poc_act_window_t1_ParamLimits

0xb7aa,	// (0x00068442) popup_call_poc_act_window_t1

0xb7d2,	// (0x0006846a) popup_call_poc_act_window_t2_ParamLimits

0xb7d2,	// (0x0006846a) popup_call_poc_act_window_t2

0xb7fa,	// (0x00068492) popup_call_poc_act_window_t3_ParamLimits

0xb7fa,	// (0x00068492) popup_call_poc_act_window_t3

0xb822,	// (0x000684ba) popup_call_poc_act_window_t4_ParamLimits

0xb822,	// (0x000684ba) popup_call_poc_act_window_t4

0x0003,

0xf508,	// (0x0006c1a0) popup_call_poc_act_window_t_ParamLimits

0xf508,	// (0x0006c1a0) popup_call_poc_act_window_t

0xc6ad,	// (0x00069345) bg_popup_call_poc_inact_pane_g6

0xc6b5,	// (0x0006934d) bg_popup_call_poc_inact_pane_g7

0xc6bd,	// (0x00069355) bg_popup_call_poc_inact_pane_g8

0xb834,	// (0x000684cc) popup_call_poc_inact_window_g2

0xc6c5,	// (0x0006935d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf587,	// (0x0006c21f) bg_popup_call_poc_inact_pane_g

0xb83c,	// (0x000684d4) popup_call_poc_inact_window_t1_ParamLimits

0xb83c,	// (0x000684d4) popup_call_poc_inact_window_t1

0xb851,	// (0x000684e9) popup_call_poc_inact_window_t2_ParamLimits

0xb851,	// (0x000684e9) popup_call_poc_inact_window_t2

0xb866,	// (0x000684fe) popup_call_poc_inact_window_t3_ParamLimits

0xb866,	// (0x000684fe) popup_call_poc_inact_window_t3

0x0002,

0xf511,	// (0x0006c1a9) popup_call_poc_inact_window_t_ParamLimits

0xf511,	// (0x0006c1a9) popup_call_poc_inact_window_t

0xc891,	// (0x00069529) context_pane_ParamLimits

0x4795,	// (0x0006142d) signal_pane_ParamLimits

0xb427,	// (0x000680bf) main_call2_pane

0xc87f,	// (0x00069517) popup_phob_thumbnail2_window_ParamLimits

0xc87f,	// (0x00069517) popup_phob_thumbnail2_window

0x3e40,	// (0x00060ad8) aid_hotspot_pointer_arrow_pane

0x3e48,	// (0x00060ae0) aid_hotspot_pointer_hand_pane

0x44ab,	// (0x00061143) phob_pre_status_pane_g5

0x1ea7,	// (0x0005eb3f) cams_zoom_pane_ParamLimits

0x1eb3,	// (0x0005eb4b) image_vga_pane_ParamLimits

0x1ec2,	// (0x0005eb5a) main_camera_pane_g1_ParamLimits

0x1ed0,	// (0x0005eb68) main_camera_pane_g2_ParamLimits

0x1edc,	// (0x0005eb74) main_camera_pane_g3_ParamLimits

0x1eea,	// (0x0005eb82) main_camera_pane_g4_ParamLimits

0x1ef8,	// (0x0005eb90) main_camera_pane_g5_ParamLimits

0x1f06,	// (0x0005eb9e) main_camera_pane_g6_ParamLimits

0x1f14,	// (0x0005ebac) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0006bead) main_camera_pane_g_ParamLimits

0x1f22,	// (0x0005ebba) main_camera_pane_t1_ParamLimits

0x1f34,	// (0x0005ebcc) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0006bebe) main_camera_pane_t_ParamLimits

0xa68e,	// (0x00067326) bg_popup_preview_window_pane_cp01_ParamLimits

0xa68e,	// (0x00067326) bg_popup_preview_window_pane_cp01

0xb87b,	// (0x00068513) popup_phob_thumbnail2_window_g1_ParamLimits

0xb87b,	// (0x00068513) popup_phob_thumbnail2_window_g1

0xa0f5,	// (0x00066d8d) call2_cli_visual_pane

0x41a2,	// (0x00060e3a) popup_call2_audio_conf_window_ParamLimits

0x41a2,	// (0x00060e3a) popup_call2_audio_conf_window

0x41bb,	// (0x00060e53) popup_call2_audio_first_window_ParamLimits

0x41bb,	// (0x00060e53) popup_call2_audio_first_window

0x4259,	// (0x00060ef1) popup_call2_audio_in_window_ParamLimits

0x4259,	// (0x00060ef1) popup_call2_audio_in_window

0x429d,	// (0x00060f35) popup_call2_audio_out_window_ParamLimits

0x429d,	// (0x00060f35) popup_call2_audio_out_window

0x4307,	// (0x00060f9f) popup_call2_audio_second_window_ParamLimits

0x4307,	// (0x00060f9f) popup_call2_audio_second_window

0x4365,	// (0x00060ffd) popup_call2_audio_wait_window_ParamLimits

0x4365,	// (0x00060ffd) popup_call2_audio_wait_window

0xa0f5,	// (0x00066d8d) bg_popup_call2_act_pane_cp03

0xa670,	// (0x00067308) list_conf_pane_cp

0xb887,	// (0x0006851f) popup_call2_audio_conf_window_t1

0xb895,	// (0x0006852d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb895,	// (0x0006852d) list_single_graphic_popup_conf2_pane

0xb248,	// (0x00067ee0) list_highlight_pane_cp04

0xb8a8,	// (0x00068540) list_single_graphic_popup_conf2_pane_g1

0xb259,	// (0x00067ef1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf518,	// (0x0006c1b0) list_single_graphic_popup_conf2_pane_g

0xb8b2,	// (0x0006854a) list_single_graphic_popup_conf2_pane_t1

0xb8c0,	// (0x00068558) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8c0,	// (0x00068558) bg_popup_call2_act_pane_cp01

0xb94a,	// (0x000685e2) call_type_pane_cp05_ParamLimits

0xb94a,	// (0x000685e2) call_type_pane_cp05

0xb99e,	// (0x00068636) popup_call2_audio_second_window_g1_ParamLimits

0xb99e,	// (0x00068636) popup_call2_audio_second_window_g1

0xb9f2,	// (0x0006868a) popup_call2_audio_second_window_g2_ParamLimits

0xb9f2,	// (0x0006868a) popup_call2_audio_second_window_g2

0x0002,

0xf51d,	// (0x0006c1b5) popup_call2_audio_second_window_g_ParamLimits

0xf51d,	// (0x0006c1b5) popup_call2_audio_second_window_g

0xba57,	// (0x000686ef) popup_call2_audio_second_window_t1_ParamLimits

0xba57,	// (0x000686ef) popup_call2_audio_second_window_t1

0xbb12,	// (0x000687aa) popup_call2_audio_second_window_t2_ParamLimits

0xbb12,	// (0x000687aa) popup_call2_audio_second_window_t2

0xbb65,	// (0x000687fd) popup_call2_audio_second_window_t3_ParamLimits

0xbb65,	// (0x000687fd) popup_call2_audio_second_window_t3

0x0003,

0xf524,	// (0x0006c1bc) popup_call2_audio_second_window_t_ParamLimits

0xf524,	// (0x0006c1bc) popup_call2_audio_second_window_t

0xa0f5,	// (0x00066d8d) bg_popup_call2_in_pane_cp02

0xa0ff,	// (0x00066d97) call_type_pane_cp04

0xa107,	// (0x00066d9f) popup_call2_audio_wait_window_g1

0xa10f,	// (0x00066da7) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0006bd9a) popup_call2_audio_wait_window_g

0xa117,	// (0x00066daf) popup_call2_audio_wait_window_t3

0xbc58,	// (0x000688f0) bg_popup_call2_act_pane_ParamLimits

0xbc58,	// (0x000688f0) bg_popup_call2_act_pane

0xbd18,	// (0x000689b0) call_type_pane_cp03_ParamLimits

0xbd18,	// (0x000689b0) call_type_pane_cp03

0xbd7c,	// (0x00068a14) popup_call2_audio_first_window_g1_ParamLimits

0xbd7c,	// (0x00068a14) popup_call2_audio_first_window_g1

0xbdec,	// (0x00068a84) popup_call2_audio_first_window_g2_ParamLimits

0xbdec,	// (0x00068a84) popup_call2_audio_first_window_g2

0xb4aa,	// (0x00068142) popup_call2_audio_first_window_g3_ParamLimits

0xb4aa,	// (0x00068142) popup_call2_audio_first_window_g3

0x0004,

0xf52d,	// (0x0006c1c5) popup_call2_audio_first_window_g_ParamLimits

0xf52d,	// (0x0006c1c5) popup_call2_audio_first_window_g

0xbeca,	// (0x00068b62) popup_call2_audio_first_window_t1_ParamLimits

0xbeca,	// (0x00068b62) popup_call2_audio_first_window_t1

0xbfcd,	// (0x00068c65) popup_call2_audio_first_window_t4_ParamLimits

0xbfcd,	// (0x00068c65) popup_call2_audio_first_window_t4

0xc0b0,	// (0x00068d48) popup_call2_audio_first_window_t5_ParamLimits

0xc0b0,	// (0x00068d48) popup_call2_audio_first_window_t5

0x0003,

0xf538,	// (0x0006c1d0) popup_call2_audio_first_window_t_ParamLimits

0xf538,	// (0x0006c1d0) popup_call2_audio_first_window_t

0xa686,	// (0x0006731e) bg_popup_call2_act_pane_g1

0xc71f,	// (0x000693b7) popup_cale_lunar_info_window_t1

0xc72d,	// (0x000693c5) popup_cale_lunar_info_window_t2

0xc73b,	// (0x000693d3) popup_cale_lunar_info_window_t3

0xa0f5,	// (0x00066d8d) bg_popup_call2_bubble_pane

0xc1b1,	// (0x00068e49) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1b1,	// (0x00068e49) bg_popup_call2_in_pane_cp01

0x9dd1,	// (0x00066a69) call_type_pane_cp02

0xc1f9,	// (0x00068e91) popup_call2_audio_out_window_g1_ParamLimits

0xc1f9,	// (0x00068e91) popup_call2_audio_out_window_g1

0xc225,	// (0x00068ebd) popup_call2_audio_out_window_g2_ParamLimits

0xc225,	// (0x00068ebd) popup_call2_audio_out_window_g2

0xc24d,	// (0x00068ee5) popup_call2_audio_out_window_g3_ParamLimits

0xc24d,	// (0x00068ee5) popup_call2_audio_out_window_g3

0x0003,

0xf541,	// (0x0006c1d9) popup_call2_audio_out_window_g_ParamLimits

0xf541,	// (0x0006c1d9) popup_call2_audio_out_window_g

0xc288,	// (0x00068f20) popup_call2_audio_out_window_t1_ParamLimits

0xc288,	// (0x00068f20) popup_call2_audio_out_window_t1

0xc2e7,	// (0x00068f7f) popup_call2_audio_out_window_t2_ParamLimits

0xc2e7,	// (0x00068f7f) popup_call2_audio_out_window_t2

0xc33b,	// (0x00068fd3) popup_call2_audio_out_window_t3_ParamLimits

0xc33b,	// (0x00068fd3) popup_call2_audio_out_window_t3

0xc351,	// (0x00068fe9) popup_call2_audio_out_window_t4_ParamLimits

0xc351,	// (0x00068fe9) popup_call2_audio_out_window_t4

0xc367,	// (0x00068fff) popup_call2_audio_out_window_t5_ParamLimits

0xc367,	// (0x00068fff) popup_call2_audio_out_window_t5

0x0005,

0xf54a,	// (0x0006c1e2) popup_call2_audio_out_window_t_ParamLimits

0xf54a,	// (0x0006c1e2) popup_call2_audio_out_window_t

0xc3cb,	// (0x00069063) bg_popup_call2_in_pane_ParamLimits

0xc3cb,	// (0x00069063) bg_popup_call2_in_pane

0xc427,	// (0x000690bf) popup_call2_audio_in_window_g1_ParamLimits

0xc427,	// (0x000690bf) popup_call2_audio_in_window_g1

0xc45f,	// (0x000690f7) popup_call2_audio_in_window_g2_ParamLimits

0xc45f,	// (0x000690f7) popup_call2_audio_in_window_g2

0xc497,	// (0x0006912f) popup_call2_audio_in_window_g3_ParamLimits

0xc497,	// (0x0006912f) popup_call2_audio_in_window_g3

0x0003,

0xf557,	// (0x0006c1ef) popup_call2_audio_in_window_g_ParamLimits

0xf557,	// (0x0006c1ef) popup_call2_audio_in_window_g

0xc4ef,	// (0x00069187) popup_call2_audio_in_window_t1_ParamLimits

0xc4ef,	// (0x00069187) popup_call2_audio_in_window_t1

0xc56f,	// (0x00069207) popup_call2_audio_in_window_t2_ParamLimits

0xc56f,	// (0x00069207) popup_call2_audio_in_window_t2

0xc5ef,	// (0x00069287) popup_call2_audio_in_window_t3_ParamLimits

0xc5ef,	// (0x00069287) popup_call2_audio_in_window_t3

0xc609,	// (0x000692a1) popup_call2_audio_in_window_t4_ParamLimits

0xc609,	// (0x000692a1) popup_call2_audio_in_window_t4

0xc61b,	// (0x000692b3) popup_call2_audio_in_window_t5_ParamLimits

0xc61b,	// (0x000692b3) popup_call2_audio_in_window_t5

0xc630,	// (0x000692c8) popup_call2_audio_in_window_t6_ParamLimits

0xc630,	// (0x000692c8) popup_call2_audio_in_window_t6

0x0005,

0xf560,	// (0x0006c1f8) popup_call2_audio_in_window_t_ParamLimits

0xf560,	// (0x0006c1f8) popup_call2_audio_in_window_t

0xa686,	// (0x0006731e) bg_popup_call2_in_pane_g1

0xc749,	// (0x000693e1) popup_cale_lunar_info_window_t4

0x0003,

0xf5c8,	// (0x0006c260) popup_cale_lunar_info_window_t

0xa68e,	// (0x00067326) bg_popup_call2_rect_pane_ParamLimits

0xa68e,	// (0x00067326) bg_popup_call2_rect_pane

0xa0f5,	// (0x00066d8d) call2_cli_visual_graphic_pane

0xa0f5,	// (0x00066d8d) call2_cli_visual_text_pane

0x482d,	// (0x000614c5) smil_status_volume_pane_g3

0x0002,

0xa7a8,	// (0x00067440) call2_cli_visual_graphic_pane_g1

0xa7a8,	// (0x00067440) call2_cli_visual_graphic_pane_g2

0xa7a8,	// (0x00067440) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56d,	// (0x0006c205) call2_cli_visual_graphic_pane_g

0xc645,	// (0x000692dd) bg_popup_call2_rect_pane_g1

0xa846,	// (0x000674de) bg_popup_call2_rect_pane_g2

0xc64d,	// (0x000692e5) bg_popup_call2_rect_pane_g3

0xc655,	// (0x000692ed) bg_popup_call2_rect_pane_g4

0xc65d,	// (0x000692f5) bg_popup_call2_rect_pane_g5

0xc665,	// (0x000692fd) bg_popup_call2_rect_pane_g6

0xc66d,	// (0x00069305) bg_popup_call2_rect_pane_g7

0xc675,	// (0x0006930d) bg_popup_call2_rect_pane_g8

0xc67d,	// (0x00069315) bg_popup_call2_rect_pane_g9

0x0008,

0xf574,	// (0x0006c20c) bg_popup_call2_rect_pane_g

0xc685,	// (0x0006931d) bg_popup_call2_bubble_pane_g1

0xc68d,	// (0x00069325) bg_popup_call2_bubble_pane_g2

0xc695,	// (0x0006932d) bg_popup_call2_bubble_pane_g3

0xc69d,	// (0x00069335) bg_popup_call2_bubble_pane_g4

0xc6a5,	// (0x0006933d) bg_popup_call2_bubble_pane_g5

0xc6ad,	// (0x00069345) bg_popup_call2_bubble_pane_g6

0xc6b5,	// (0x0006934d) bg_popup_call2_bubble_pane_g7

0xc6bd,	// (0x00069355) bg_popup_call2_bubble_pane_g8

0xc6c5,	// (0x0006935d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf587,	// (0x0006c21f) bg_popup_call2_bubble_pane_g

0x1665,	// (0x0005e2fd) aid_cale_week_size_cell_pane

0x1f48,	// (0x0005ebe0) aid_cams_cif_uncrop_pane_ParamLimits

0x1f48,	// (0x0005ebe0) aid_cams_cif_uncrop_pane

0x20a5,	// (0x0005ed3d) aid_cams_size_cell_ParamLimits

0x20a5,	// (0x0005ed3d) aid_cams_size_cell

0x20b1,	// (0x0005ed49) grid_cams_pane_ParamLimits

0x20bf,	// (0x0005ed57) linegrid_cams_pane_ParamLimits

0x228e,	// (0x0005ef26) call_video_pane_t1

0x22ab,	// (0x0005ef43) call_video_pane_t2

0x0001,

0xf279,	// (0x0006bf11) call_video_pane_t

0x2777,	// (0x0005f40f) aid_cale_month_size_cell_pane_ParamLimits

0x2777,	// (0x0005f40f) aid_cale_month_size_cell_pane

0xf611,	// (0x0006c2a9) smil_status_volume_pane_g

0x483a,	// (0x000614d2) volume_smil_pane_ParamLimits

0x9c9b,	// (0x00066933) aid_popup2_width_pane

0x1557,	// (0x0005e1ef) cell_qdial_pane_g4_ParamLimits

0x1557,	// (0x0005e1ef) cell_qdial_pane_g4

0x370b,	// (0x000603a3) aid_blid_cardinal_pane_ParamLimits

0x371b,	// (0x000603b3) aid_blid_destination_pane_ParamLimits

0x371b,	// (0x000603b3) aid_blid_destination_pane

0xa68e,	// (0x00067326) bg_popup_call_poc_act_pane_ParamLimits

0xa68e,	// (0x00067326) bg_popup_call_poc_act_pane

0xa68e,	// (0x00067326) bg_popup_call_poc_inact_pane_ParamLimits

0xa68e,	// (0x00067326) bg_popup_call_poc_inact_pane

0xc6cd,	// (0x00069365) bg_popup_call_poc_act_pane_g1

0xc6d5,	// (0x0006936d) bg_popup_call_poc_act_pane_g2

0xc6dd,	// (0x00069375) bg_popup_call_poc_act_pane_g3

0xc69d,	// (0x00069335) bg_popup_call_poc_act_pane_g4

0xc6a5,	// (0x0006933d) bg_popup_call_poc_act_pane_g5

0xc6e5,	// (0x0006937d) bg_popup_call_poc_act_pane_g6

0xc6b5,	// (0x0006934d) bg_popup_call_poc_act_pane_g7

0xc6ed,	// (0x00069385) bg_popup_call_poc_act_pane_g8

0xa0f5,	// (0x00066d8d) main_usb_pane

0xc856,	// (0x000694ee) popup_cale_lunar_info_window

0x25c3,	// (0x0005f25b) im_reading_pane_t1_ParamLimits

0xabe9,	// (0x00067881) list_im_pane_ParamLimits

0xabfa,	// (0x00067892) scroll_pane_cp07_ParamLimits

0xa0f5,	// (0x00066d8d) grid_highlight_pane_cp012

0xa68e,	// (0x00067326) mup_scale_pane_ParamLimits

0xb4aa,	// (0x00068142) main_usb_pane_g1_ParamLimits

0xb4aa,	// (0x00068142) main_usb_pane_g1

0x43ce,	// (0x00061066) main_usb_pane_g2_ParamLimits

0x43ce,	// (0x00061066) main_usb_pane_g2

0x0001,

0xf5b1,	// (0x0006c249) main_usb_pane_g_ParamLimits

0xf5b1,	// (0x0006c249) main_usb_pane_g

0x43da,	// (0x00061072) main_usb_pane_t1_ParamLimits

0x43da,	// (0x00061072) main_usb_pane_t1

0x43ec,	// (0x00061084) main_usb_pane_t2_ParamLimits

0x43ec,	// (0x00061084) main_usb_pane_t2

0x43fe,	// (0x00061096) main_usb_pane_t3_ParamLimits

0x43fe,	// (0x00061096) main_usb_pane_t3

0x4410,	// (0x000610a8) main_usb_pane_t4_ParamLimits

0x4410,	// (0x000610a8) main_usb_pane_t4

0x4422,	// (0x000610ba) main_usb_pane_t5_ParamLimits

0x4422,	// (0x000610ba) main_usb_pane_t5

0x4434,	// (0x000610cc) main_usb_pane_t6_ParamLimits

0x4434,	// (0x000610cc) main_usb_pane_t6

0x0005,

0xf5b6,	// (0x0006c24e) main_usb_pane_t_ParamLimits

0x36aa,	// (0x00060342) aid_text_placing

0x36b5,	// (0x0006034d) main_location2_pane_t1_ParamLimits

0x36cb,	// (0x00060363) main_location2_pane_t2_ParamLimits

0x36e1,	// (0x00060379) main_location2_pane_t3_ParamLimits

0x36f7,	// (0x0006038f) main_location2_pane_t4_ParamLimits

0x36f7,	// (0x0006038f) main_location2_pane_t4

0xf3d5,	// (0x0006c06d) main_location2_pane_t_ParamLimits

0xa6ca,	// (0x00067362) find_pinb_pane_g2_ParamLimits

0xa6ca,	// (0x00067362) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0006bdc0) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0006bdc0) find_pinb_pane_g

0xa6d6,	// (0x0006736e) find_pinb_pane_t1_ParamLimits

0xa6e8,	// (0x00067380) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0006bdc5) find_pinb_pane_t_ParamLimits

0xa0f5,	// (0x00066d8d) main_call3_pane

0x2c9e,	// (0x0005f936) cale_month_day_heading_pane_t1_ParamLimits

0x2d1c,	// (0x0005f9b4) cale_month_day_heading_pane_t2_ParamLimits

0x2da5,	// (0x0005fa3d) cale_month_day_heading_pane_t3_ParamLimits

0x2e2e,	// (0x0005fac6) cale_month_day_heading_pane_t4_ParamLimits

0x2eb7,	// (0x0005fb4f) cale_month_day_heading_pane_t5_ParamLimits

0x2f44,	// (0x0005fbdc) cale_month_day_heading_pane_t6_ParamLimits

0x2fd5,	// (0x0005fc6d) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0006bf49) cale_month_day_heading_pane_t_ParamLimits

0x328b,	// (0x0005ff23) smil_status_volume_pane

0x3f8c,	// (0x00060c24) postcard_address_pane_ParamLimits

0x3f8c,	// (0x00060c24) postcard_address_pane

0x3f9a,	// (0x00060c32) postcard_message_pane_ParamLimits

0x3f9a,	// (0x00060c32) postcard_message_pane

0x43a4,	// (0x0006103c) call2_cli_visual_pane_t1_ParamLimits

0x43a4,	// (0x0006103c) call2_cli_visual_pane_t1

0x4999,	// (0x00061631) postcard_message_pane_t1_ParamLimits

0x4999,	// (0x00061631) postcard_message_pane_t1

0x4982,	// (0x0006161a) postcard_address_pane_t1_ParamLimits

0x4982,	// (0x0006161a) postcard_address_pane_t1

0x4973,	// (0x0006160b) popup_call3_audio_in_window_ParamLimits

0x4973,	// (0x0006160b) popup_call3_audio_in_window

0x4851,	// (0x000614e9) bg_popup_call3_in_pane_ParamLimits

0x4851,	// (0x000614e9) bg_popup_call3_in_pane

0x48b9,	// (0x00061551) popup_call3_audio_in_window_g1_ParamLimits

0x48b9,	// (0x00061551) popup_call3_audio_in_window_g1

0x48d1,	// (0x00061569) popup_call3_audio_in_window_g2_ParamLimits

0x48d1,	// (0x00061569) popup_call3_audio_in_window_g2

0x48e9,	// (0x00061581) popup_call3_audio_in_window_g3_ParamLimits

0x48e9,	// (0x00061581) popup_call3_audio_in_window_g3

0x0003,

0xf618,	// (0x0006c2b0) popup_call3_audio_in_window_g_ParamLimits

0xf618,	// (0x0006c2b0) popup_call3_audio_in_window_g

0x4911,	// (0x000615a9) popup_call3_audio_in_window_t1_ParamLimits

0x4911,	// (0x000615a9) popup_call3_audio_in_window_t1

0x4939,	// (0x000615d1) popup_call3_audio_in_window_t2_ParamLimits

0x4939,	// (0x000615d1) popup_call3_audio_in_window_t2

0x4961,	// (0x000615f9) popup_call3_audio_in_window_t3_ParamLimits

0x4961,	// (0x000615f9) popup_call3_audio_in_window_t3

0x0002,

0xf621,	// (0x0006c2b9) popup_call3_audio_in_window_t_ParamLimits

0xf621,	// (0x0006c2b9) popup_call3_audio_in_window_t

0xb427,	// (0x000680bf) bg_popup_call3_rect_pane

0xc645,	// (0x000692dd) bg_popup_call3_rect_pane_g1

0xa846,	// (0x000674de) bg_popup_call3_rect_pane_g2

0xc64d,	// (0x000692e5) bg_popup_call3_rect_pane_g3

0xc655,	// (0x000692ed) bg_popup_call3_rect_pane_g4

0xc65d,	// (0x000692f5) bg_popup_call3_rect_pane_g5

0xc665,	// (0x000692fd) bg_popup_call3_rect_pane_g6

0xc66d,	// (0x00069305) bg_popup_call3_rect_pane_g7

0x3b51,	// (0x000607e9) mup_visualizer_osc_pane

0xb4f4,	// (0x0006818c) mup_visualizer_spec_pane

0x4871,	// (0x00061509) call3_video_qcif_pane_ParamLimits

0x4871,	// (0x00061509) call3_video_qcif_pane

0x4883,	// (0x0006151b) call3_video_qcif_uncrop_pane_ParamLimits

0x4883,	// (0x0006151b) call3_video_qcif_uncrop_pane

0x4893,	// (0x0006152b) call3_video_subqcif_pane_ParamLimits

0x4893,	// (0x0006152b) call3_video_subqcif_pane

0x48a7,	// (0x0006153f) call3_video_subqcif_uncrop_pane_ParamLimits

0x48a7,	// (0x0006153f) call3_video_subqcif_uncrop_pane

0x4901,	// (0x00061599) popup_call3_audio_in_window_g4_ParamLimits

0x4901,	// (0x00061599) popup_call3_audio_in_window_g4

0x481c,	// (0x000614b4) mup_spec_half_pane

0x4825,	// (0x000614bd) mup_spec_half_pane_cp

0xc8f1,	// (0x00069589) mup_osc_middle_pane

0xc8fa,	// (0x00069592) mup_visualizer_osc_pane_g1

0x47fc,	// (0x00061494) mup_spec_bar_pane_ParamLimits

0x47fc,	// (0x00061494) mup_spec_bar_pane

0xc8de,	// (0x00069576) mup_spec_bar_pane_g1

0xc8e8,	// (0x00069580) mup_spec_bar_pane_g2

0x0001,

0xf60c,	// (0x0006c2a4) mup_spec_bar_pane_g

0x1665,	// (0x0005e2fd) aid_cale_week_size_cell_pane_ParamLimits

0x167f,	// (0x0005e317) bg_cale_heading_pane_ParamLimits

0xaa35,	// (0x000676cd) bg_cale_pane_cp01_ParamLimits

0x16a8,	// (0x0005e340) cale_week_corner_pane_ParamLimits

0x16c7,	// (0x0005e35f) cale_week_day_heading_pane_ParamLimits

0x16f5,	// (0x0005e38d) cale_week_scroll_pane_g1_ParamLimits

0x1719,	// (0x0005e3b1) cale_week_scroll_pane_g2_ParamLimits

0x1731,	// (0x0005e3c9) cale_week_scroll_pane_g3_ParamLimits

0x1749,	// (0x0005e3e1) cale_week_scroll_pane_g4_ParamLimits

0x1761,	// (0x0005e3f9) cale_week_scroll_pane_g5_ParamLimits

0x1779,	// (0x0005e411) cale_week_scroll_pane_g6_ParamLimits

0x1795,	// (0x0005e42d) cale_week_scroll_pane_g7_ParamLimits

0x17b1,	// (0x0005e449) cale_week_scroll_pane_g8_ParamLimits

0x17cd,	// (0x0005e465) cale_week_scroll_pane_g9_ParamLimits

0x17ea,	// (0x0005e482) cale_week_scroll_pane_g10_ParamLimits

0x1807,	// (0x0005e49f) cale_week_scroll_pane_g11_ParamLimits

0x1824,	// (0x0005e4bc) cale_week_scroll_pane_g12_ParamLimits

0x1841,	// (0x0005e4d9) cale_week_scroll_pane_g13_ParamLimits

0x185e,	// (0x0005e4f6) cale_week_scroll_pane_g14_ParamLimits

0x1887,	// (0x0005e51f) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0006be51) cale_week_scroll_pane_g_ParamLimits

0x18b0,	// (0x0005e548) cale_week_time_pane_ParamLimits

0x18cc,	// (0x0005e564) grid_cale_week_pane_ParamLimits

0xaa53,	// (0x000676eb) listscroll_cale_week_pane_t1

0xaa65,	// (0x000676fd) scroll_pane_cp08_ParamLimits

0x27e4,	// (0x0005f47c) cale_month_corner_pane_ParamLimits

0xae1a,	// (0x00067ab2) cale_month_pane_t1

0x2c3c,	// (0x0005f8d4) cale_month_week_pane_ParamLimits

0xb4aa,	// (0x00068142) popup_call_status_window_g1_ParamLimits

0x34b3,	// (0x0006014b) popup_call_status_window_g2_ParamLimits

0x34bf,	// (0x00060157) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0006bff9) popup_call_status_window_g_ParamLimits

0xb1c9,	// (0x00067e61) aid_call2_pane

0x3e01,	// (0x00060a99) msg_header_pane_g1

0x3f8c,	// (0x00060c24) postcard_address2_pane_ParamLimits

0x3f8c,	// (0x00060c24) postcard_address2_pane

0x3f9a,	// (0x00060c32) postcard_message2_pane_ParamLimits

0x3f9a,	// (0x00060c32) postcard_message2_pane

0x47a3,	// (0x0006143b) message2_row_pane_ParamLimits

0x47a3,	// (0x0006143b) message2_row_pane

0x47bd,	// (0x00061455) address2_row_pane_ParamLimits

0x47bd,	// (0x00061455) address2_row_pane

0xc8ac,	// (0x00069544) postcard_message2_row_pane_g1

0xc8b4,	// (0x0006954c) postcard_message2_row_pane_t1

0xc8ac,	// (0x00069544) address2_row_pane_g1

0xc8b4,	// (0x0006954c) address2_row_pane_t1

0x1e06,	// (0x0005ea9e) aid_size_cell_vorec

0xa0f5,	// (0x00066d8d) main_rss_pane

0x47d0,	// (0x00061468) rss_list_single_pane_ParamLimits

0x47d0,	// (0x00061468) rss_list_single_pane

0xc8c2,	// (0x0006955a) rss_list_single_pane_t1

0xc8d0,	// (0x00069568) rss_list_single_pane_t2

0x0001,

0xf607,	// (0x0006c29f) rss_list_single_pane_t

0xa0f5,	// (0x00066d8d) main_camera2_pane

0xa0f5,	// (0x00066d8d) main_video2_pane

0x49fd,	// (0x00061695) cams_zoom_pane_cp2_ParamLimits

0x49fd,	// (0x00061695) cams_zoom_pane_cp2

0x4a09,	// (0x000616a1) image2_vga_pane_ParamLimits

0x4a09,	// (0x000616a1) image2_vga_pane

0x4a18,	// (0x000616b0) main_camera2_pane_g1_ParamLimits

0x4a18,	// (0x000616b0) main_camera2_pane_g1

0x4a24,	// (0x000616bc) main_camera2_pane_g2_ParamLimits

0x4a24,	// (0x000616bc) main_camera2_pane_g2

0x4a30,	// (0x000616c8) main_camera2_pane_g3_ParamLimits

0x4a30,	// (0x000616c8) main_camera2_pane_g3

0x4a3c,	// (0x000616d4) main_camera2_pane_g4_ParamLimits

0x4a3c,	// (0x000616d4) main_camera2_pane_g4

0x4a48,	// (0x000616e0) main_camera2_pane_g5_ParamLimits

0x4a48,	// (0x000616e0) main_camera2_pane_g5

0x4a54,	// (0x000616ec) main_camera2_pane_g6_ParamLimits

0x4a54,	// (0x000616ec) main_camera2_pane_g6

0x4a60,	// (0x000616f8) main_camera2_pane_g7_ParamLimits

0x4a60,	// (0x000616f8) main_camera2_pane_g7

0x4a6c,	// (0x00061704) main_camera2_pane_g8_ParamLimits

0x4a6c,	// (0x00061704) main_camera2_pane_g8

0x0008,

0xf628,	// (0x0006c2c0) main_camera2_pane_g_ParamLimits

0xf628,	// (0x0006c2c0) main_camera2_pane_g

0x4a84,	// (0x0006171c) main_camera2_pane_t1_ParamLimits

0x4a84,	// (0x0006171c) main_camera2_pane_t1

0x4a96,	// (0x0006172e) main_camera2_pane_t2_ParamLimits

0x4a96,	// (0x0006172e) main_camera2_pane_t2

0x4aa8,	// (0x00061740) main_camera2_pane_t3_ParamLimits

0x4aa8,	// (0x00061740) main_camera2_pane_t3

0x4aba,	// (0x00061752) main_camera2_pane_t4_ParamLimits

0x4aba,	// (0x00061752) main_camera2_pane_t4

0x0006,

0xf63b,	// (0x0006c2d3) main_camera2_pane_t_ParamLimits

0xf63b,	// (0x0006c2d3) main_camera2_pane_t

0x4b17,	// (0x000617af) cams_zoom_pane_cp4_ParamLimits

0x4b17,	// (0x000617af) cams_zoom_pane_cp4

0x4b27,	// (0x000617bf) image2_cif_pane_ParamLimits

0x4b27,	// (0x000617bf) image2_cif_pane

0x4b3c,	// (0x000617d4) image2_subqcif_pane_ParamLimits

0x4b3c,	// (0x000617d4) image2_subqcif_pane

0x4b4b,	// (0x000617e3) main_video2_pane_g1_ParamLimits

0x4b4b,	// (0x000617e3) main_video2_pane_g1

0x4b5d,	// (0x000617f5) main_video2_pane_g2_ParamLimits

0x4b5d,	// (0x000617f5) main_video2_pane_g2

0x4b6d,	// (0x00061805) main_video2_pane_g3_ParamLimits

0x4b6d,	// (0x00061805) main_video2_pane_g3

0x4b7d,	// (0x00061815) main_video2_pane_g4_ParamLimits

0x4b7d,	// (0x00061815) main_video2_pane_g4

0x4b8d,	// (0x00061825) main_video2_pane_g5_ParamLimits

0x4b8d,	// (0x00061825) main_video2_pane_g5

0x4b9d,	// (0x00061835) main_video2_pane_g6_ParamLimits

0x4b9d,	// (0x00061835) main_video2_pane_g6

0x0005,

0xf64a,	// (0x0006c2e2) main_video2_pane_g_ParamLimits

0xf64a,	// (0x0006c2e2) main_video2_pane_g

0x4baf,	// (0x00061847) main_video2_pane_t1_ParamLimits

0x4baf,	// (0x00061847) main_video2_pane_t1

0x4bc9,	// (0x00061861) main_video2_pane_t2_ParamLimits

0x4bc9,	// (0x00061861) main_video2_pane_t2

0x4bef,	// (0x00061887) main_video2_pane_t3_ParamLimits

0x4bef,	// (0x00061887) main_video2_pane_t3

0x0002,

0xf657,	// (0x0006c2ef) main_video2_pane_t_ParamLimits

0xf657,	// (0x0006c2ef) main_video2_pane_t

0x44eb,	// (0x00061183) call_muted_g2

0x0001,

0xf5f9,	// (0x0006c291) call_muted_g

0xa0f5,	// (0x00066d8d) main_mup2_pane

0xc931,	// (0x000695c9) main_mup2_pane_g1_ParamLimits

0xc931,	// (0x000695c9) main_mup2_pane_g1

0x4c15,	// (0x000618ad) main_mup2_pane_g2_ParamLimits

0x4c15,	// (0x000618ad) main_mup2_pane_g2

0x4ea7,	// (0x00061b3f) main_mup_pane_g13_cp1

0x4eaf,	// (0x00061b47) mup_volume_pane_cp1

0x4c37,	// (0x000618cf) main_mup2_pane_g4_ParamLimits

0x4c37,	// (0x000618cf) main_mup2_pane_g4

0x4c4c,	// (0x000618e4) main_mup2_pane_g5_ParamLimits

0x4c4c,	// (0x000618e4) main_mup2_pane_g5

0x4c61,	// (0x000618f9) main_mup2_pane_g6_ParamLimits

0x4c61,	// (0x000618f9) main_mup2_pane_g6

0x4c76,	// (0x0006190e) main_mup2_pane_g7_ParamLimits

0x4c76,	// (0x0006190e) main_mup2_pane_g7

0x0006,

0xf65e,	// (0x0006c2f6) main_mup2_pane_g_ParamLimits

0xf65e,	// (0x0006c2f6) main_mup2_pane_g

0x4c92,	// (0x0006192a) main_mup2_pane_t1_ParamLimits

0x4c92,	// (0x0006192a) main_mup2_pane_t1

0x4ca9,	// (0x00061941) main_mup2_pane_t2_ParamLimits

0x4ca9,	// (0x00061941) main_mup2_pane_t2

0x4cc0,	// (0x00061958) main_mup2_pane_t3_ParamLimits

0x4cc0,	// (0x00061958) main_mup2_pane_t3

0x4cd7,	// (0x0006196f) main_mup2_pane_t4_ParamLimits

0x4cd7,	// (0x0006196f) main_mup2_pane_t4

0x4cf1,	// (0x00061989) main_mup2_pane_t5_ParamLimits

0x4cf1,	// (0x00061989) main_mup2_pane_t5

0x4d0b,	// (0x000619a3) main_mup2_pane_t6_ParamLimits

0x4d0b,	// (0x000619a3) main_mup2_pane_t6

0x0005,

0xf66d,	// (0x0006c305) main_mup2_pane_t_ParamLimits

0xf66d,	// (0x0006c305) main_mup2_pane_t

0x4d43,	// (0x000619db) mup2_visualizer_pane_ParamLimits

0x4d43,	// (0x000619db) mup2_visualizer_pane

0x4d79,	// (0x00061a11) mup_progress_pane_cp_ParamLimits

0x4d79,	// (0x00061a11) mup_progress_pane_cp

0x4e92,	// (0x00061b2a) mup_volume_pane_cp_ParamLimits

0x4e92,	// (0x00061b2a) mup_volume_pane_cp

0x4d92,	// (0x00061a2a) mup2_visualizer_pane_g1_ParamLimits

0x4d92,	// (0x00061a2a) mup2_visualizer_pane_g1

0xc93d,	// (0x000695d5) mup2_visualizer_pane_g2_ParamLimits

0xc93d,	// (0x000695d5) mup2_visualizer_pane_g2

0x4da7,	// (0x00061a3f) mup2_visualizer_pane_g3_ParamLimits

0x4da7,	// (0x00061a3f) mup2_visualizer_pane_g3

0x0002,

0xf67a,	// (0x0006c312) mup2_visualizer_pane_g_ParamLimits

0xf67a,	// (0x0006c312) mup2_visualizer_pane_g

0xb726,	// (0x000683be) aid_size_cell_fmradio

0x4601,	// (0x00061299) aid_height_parent_landcape

0xac78,	// (0x00067910) wml_content_pane_cp

0xac80,	// (0x00067918) wml_tabs_pane

0xac89,	// (0x00067921) popup_wml_miniature_window

0xac91,	// (0x00067929) scroll_pane_cp021

0xaca5,	// (0x0006793d) wml_content_pane_comp8

0xa0f5,	// (0x00066d8d) bg_popup_sub_pane_cp05

0xc95b,	// (0x000695f3) popup_wml_miniature_window_g1

0xc963,	// (0x000695fb) wml_miniature_view_pane

0x4db5,	// (0x00061a4d) aid_size_wml_view

0x4dbd,	// (0x00061a55) wml_miniature_view_pane_g1

0x4dc6,	// (0x00061a5e) wml_miniature_view_pane_g2

0x4dcf,	// (0x00061a67) wml_miniature_view_pane_g3

0x4dd7,	// (0x00061a6f) wml_miniature_view_pane_g4

0x4ddf,	// (0x00061a77) wml_miniature_view_pane_g5

0x4de7,	// (0x00061a7f) wml_miniature_view_pane_g6

0x4def,	// (0x00061a87) wml_miniature_view_pane_g7

0x4df7,	// (0x00061a8f) wml_miniature_view_pane_g8

0x0007,

0xf681,	// (0x0006c319) wml_miniature_view_pane_g

0xc931,	// (0x000695c9) background_graphic_ParamLimits

0xc931,	// (0x000695c9) background_graphic

0xc96b,	// (0x00069603) wml_tabs_2_pane

0xc974,	// (0x0006960c) wml_tabs_3_pane_ParamLimits

0xc974,	// (0x0006960c) wml_tabs_3_pane

0xc986,	// (0x0006961e) wml_tabs_4_pane_ParamLimits

0xc986,	// (0x0006961e) wml_tabs_4_pane

0xc99c,	// (0x00069634) wml_tabs_5_pane_ParamLimits

0xc99c,	// (0x00069634) wml_tabs_5_pane

0xc9b6,	// (0x0006964e) wml_tabs_pane_g2_ParamLimits

0xc9b6,	// (0x0006964e) wml_tabs_pane_g2

0xc9ca,	// (0x00069662) wml_tabs_pane_g3_ParamLimits

0xc9ca,	// (0x00069662) wml_tabs_pane_g3

0x4dff,	// (0x00061a97) wml_tabs_2_active_pane_ParamLimits

0x4dff,	// (0x00061a97) wml_tabs_2_active_pane

0x4e11,	// (0x00061aa9) wml_tabs_2_passive_pane_ParamLimits

0x4e11,	// (0x00061aa9) wml_tabs_2_passive_pane

0x4e23,	// (0x00061abb) wml_tabs_3_active_pane_cp_ParamLimits

0x4e23,	// (0x00061abb) wml_tabs_3_active_pane_cp

0x4e36,	// (0x00061ace) wml_tabs_3_passive_pane_ParamLimits

0x4e36,	// (0x00061ace) wml_tabs_3_passive_pane

0x4e47,	// (0x00061adf) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e47,	// (0x00061adf) wml_tabs_3_passive_pane_cp

0x4e5c,	// (0x00061af4) tabs_4_active_pane

0x4e64,	// (0x00061afc) tabs_4_passive_pane

0x4e6c,	// (0x00061b04) tabs_4_passive_pane_cp

0x4e74,	// (0x00061b0c) tabs_4_passive_pane_cp2

0x43c6,	// (0x0006105e) aid_height_text

0x3b1a,	// (0x000607b2) mup_volume_cont_pane_ParamLimits

0x3b1a,	// (0x000607b2) mup_volume_cont_pane

0x11a3,	// (0x0005de3b) aid_size_cell_pinb

0x11ad,	// (0x0005de45) aid_size_list_pinb

0x4d62,	// (0x000619fa) mup2_volume_cont_pane_ParamLimits

0x4d62,	// (0x000619fa) mup2_volume_cont_pane

0x4e7e,	// (0x00061b16) mup2_volume_cont_pane_g1_ParamLimits

0x4e7e,	// (0x00061b16) mup2_volume_cont_pane_g1

0x0e17,	// (0x0005daaf) aid_size_cell_touch_ParamLimits

0x0e17,	// (0x0005daaf) aid_size_cell_touch

0x108d,	// (0x0005dd25) touch_pane_ParamLimits

0x108d,	// (0x0005dd25) touch_pane

0x9c89,	// (0x00066921) main_rss2_pane

0xc9e7,	// (0x0006967f) listscroll_rss2_pane

0xc9f0,	// (0x00069688) rss2_navigation_pane

0xc9f8,	// (0x00069690) list_rss2_pane

0xb2ed,	// (0x00067f85) scroll_pane_cp22

0xca00,	// (0x00069698) rss2_navigation_pane_g1

0xca09,	// (0x000696a1) rss2_navigation_pane_g2

0xca11,	// (0x000696a9) rss2_navigation_pane_g3

0x0002,

0xf692,	// (0x0006c32a) rss2_navigation_pane_g

0xca19,	// (0x000696b1) rss2_navigation_pane_t1

0x4eb7,	// (0x00061b4f) rss2_list_single_pane_ParamLimits

0x4eb7,	// (0x00061b4f) rss2_list_single_pane

0xca27,	// (0x000696bf) rss2_list_single_pane_t2

0xca35,	// (0x000696cd) rss2_list_single_pane_t3_ParamLimits

0xca35,	// (0x000696cd) rss2_list_single_pane_t3

0xca52,	// (0x000696ea) rss2_list_single_pane_t4

0x3275,	// (0x0005ff0d) smil_status_pane_g1

0xa227,	// (0x00066ebf) main_image2_pane_ParamLimits

0xa227,	// (0x00066ebf) main_image2_pane

0x4a78,	// (0x00061710) main_camera2_pane_g9_ParamLimits

0x4a78,	// (0x00061710) main_camera2_pane_g9

0x4acc,	// (0x00061764) main_camera2_pane_t5_ParamLimits

0x4acc,	// (0x00061764) main_camera2_pane_t5

0x4ade,	// (0x00061776) main_camera2_pane_t6_ParamLimits

0x4ade,	// (0x00061776) main_camera2_pane_t6

0x4eda,	// (0x00061b72) main_image2_pane_g1_ParamLimits

0x4eda,	// (0x00061b72) main_image2_pane_g1

0x4163,	// (0x00060dfb) smil2_video_pane_ParamLimits

0x4163,	// (0x00060dfb) smil2_video_pane

0x0e53,	// (0x0005daeb) aid_zoom_text_primary_cp

0x9cd8,	// (0x00066970) popup_preview_fixed_window

0xabe1,	// (0x00067879) im_reading_pane_g1

0x49c2,	// (0x0006165a) cams2_bc_adjust_pane_cp_ParamLimits

0x49c2,	// (0x0006165a) cams2_bc_adjust_pane_cp

0x4b09,	// (0x000617a1) cams2_bc_adjust_pane_ParamLimits

0x4b09,	// (0x000617a1) cams2_bc_adjust_pane

0xda2a,	// (0x0006a6c2) cams2_bc_adjust_pane_g1

0x4ee6,	// (0x00061b7e) cams2_slider_pane

0x4eef,	// (0x00061b87) cams2_slider_pane_g1

0x4ef8,	// (0x00061b90) cams2_slider_pane_g2

0x0006,

0xf699,	// (0x0006c331) cams2_slider_pane_g

0x12a8,	// (0x0005df40) calc_display_pane_ParamLimits

0x12c6,	// (0x0005df5e) calc_paper_pane_ParamLimits

0x12e2,	// (0x0005df7a) grid_calc_pane_ParamLimits

0x351d,	// (0x000601b5) popup_clock_digital_window_t1_ParamLimits

0xb6c3,	// (0x0006835b) main_image_pane_t1

0x128e,	// (0x0005df26) aid_size_cell_calc_ParamLimits

0x128e,	// (0x0005df26) aid_size_cell_calc

0x4633,	// (0x000612cb) popup_blid_sat_info2_window_ParamLimits

0x4633,	// (0x000612cb) popup_blid_sat_info2_window

0xca68,	// (0x00069700) aid_size_cell_blid

0xca70,	// (0x00069708) bg_popup_window_pane_cp07

0xca93,	// (0x0006972b) grid_popup_blid_pane

0xca9d,	// (0x00069735) heading_pane_cp05_ParamLimits

0xca9d,	// (0x00069735) heading_pane_cp05

0xcb67,	// (0x000697ff) cell_popup_blid_pane_ParamLimits

0xcb67,	// (0x000697ff) cell_popup_blid_pane

0xcb91,	// (0x00069829) cell_popup_blid_pane_g1

0xcb99,	// (0x00069831) cell_popup_blid_pane_t1

0x4d28,	// (0x000619c0) mup2_indicator_pane_ParamLimits

0x4d28,	// (0x000619c0) mup2_indicator_pane

0xb427,	// (0x000680bf) mup2_visualizer_osc_pane

0xc949,	// (0x000695e1) mup2_visualizer_spec_pane_ParamLimits

0xc949,	// (0x000695e1) mup2_visualizer_spec_pane

0x4f12,	// (0x00061baa) mup2_spec_half_pane

0x4f1b,	// (0x00061bb3) mup2_spec_half_pane_cp

0x4f25,	// (0x00061bbd) mup2_spec_bar_pane_ParamLimits

0x4f25,	// (0x00061bbd) mup2_spec_bar_pane

0xc8de,	// (0x00069576) mup2_spec_bar_pane_g1

0xc8e8,	// (0x00069580) mup2_spec_bar_pane_g2

0x0001,

0xf60c,	// (0x0006c2a4) mup2_spec_bar_pane_g

0x4f44,	// (0x00061bdc) mup2_osc_middle_pane

0xc8fa,	// (0x00069592) mup2_visualizer_osc_pane_g1

0x9d02,	// (0x0006699a) popup_number_entry_window_t1_ParamLimits

0x9d15,	// (0x000669ad) popup_number_entry_window_t2_ParamLimits

0x9d27,	// (0x000669bf) popup_number_entry_window_t3_ParamLimits

0x10e4,	// (0x0005dd7c) popup_number_entry_window_t5_ParamLimits

0x10e4,	// (0x0005dd7c) popup_number_entry_window_t5

0xf0d3,	// (0x0006bd6b) popup_number_entry_window_t_ParamLimits

0x9d39,	// (0x000669d1) text_title_cp2_ParamLimits

0x3e50,	// (0x00060ae8) aid_hotspot_pointer_text2_pane

0x3eea,	// (0x00060b82) main_viewer_pane_g9_ParamLimits

0x3eea,	// (0x00060b82) main_viewer_pane_g9

0xae1a,	// (0x00067ab2) cale_month_pane_t1_ParamLimits

0xae40,	// (0x00067ad8) bg_cale_pane_ParamLimits

0xae58,	// (0x00067af0) list_cale_pane_ParamLimits

0xae69,	// (0x00067b01) listscroll_cale_day_pane_t1

0xae7b,	// (0x00067b13) scroll_pane_cp09_ParamLimits

0x3b59,	// (0x000607f1) main_mup_eq_pane_t1_ParamLimits

0x3b59,	// (0x000607f1) main_mup_eq_pane_t1

0x3b75,	// (0x0006080d) main_mup_eq_pane_t2_ParamLimits

0x3b75,	// (0x0006080d) main_mup_eq_pane_t2

0x3b91,	// (0x00060829) main_mup_eq_pane_t3_ParamLimits

0x3b91,	// (0x00060829) main_mup_eq_pane_t3

0x3bab,	// (0x00060843) main_mup_eq_pane_t4_ParamLimits

0x3bab,	// (0x00060843) main_mup_eq_pane_t4

0x3bc5,	// (0x0006085d) main_mup_eq_pane_t5_ParamLimits

0x3bc5,	// (0x0006085d) main_mup_eq_pane_t5

0x3bdf,	// (0x00060877) main_mup_eq_pane_t6_ParamLimits

0x3bdf,	// (0x00060877) main_mup_eq_pane_t6

0x3bf5,	// (0x0006088d) main_mup_eq_pane_t7_ParamLimits

0x3bf5,	// (0x0006088d) main_mup_eq_pane_t7

0x3c0b,	// (0x000608a3) main_mup_eq_pane_t8_ParamLimits

0x3c0b,	// (0x000608a3) main_mup_eq_pane_t8

0x3c21,	// (0x000608b9) main_mup_eq_pane_t9_ParamLimits

0x3c21,	// (0x000608b9) main_mup_eq_pane_t9

0x3c3d,	// (0x000608d5) main_mup_eq_pane_t10_ParamLimits

0x3c3d,	// (0x000608d5) main_mup_eq_pane_t10

0x0009,

0xf45b,	// (0x0006c0f3) main_mup_eq_pane_t_ParamLimits

0xf45b,	// (0x0006c0f3) main_mup_eq_pane_t

0x3d02,	// (0x0006099a) mup_equalizer_pane_cp5_ParamLimits

0x3d1a,	// (0x000609b2) mup_equalizer_pane_cp6_ParamLimits

0x3d32,	// (0x000609ca) mup_equalizer_pane_cp7_ParamLimits

0x9c89,	// (0x00066921) main_gallery_pane

0xc903,	// (0x0006959b) smil2_volume_pane

0xc90b,	// (0x000695a3) smil_status_volume_pane_g1_ParamLimits

0xc91e,	// (0x000695b6) smil_status_volume_pane_g2_ParamLimits

0x482d,	// (0x000614c5) smil_status_volume_pane_g3_ParamLimits

0xf611,	// (0x0006c2a9) smil_status_volume_pane_g_ParamLimits

0xca70,	// (0x00069708) bg_popup_window_pane_cp07_ParamLimits

0xca7e,	// (0x00069716) blid_firmament_pane

0x4f4d,	// (0x00061be5) aid_size_cell_gallery_ParamLimits

0x4f4d,	// (0x00061be5) aid_size_cell_gallery

0x4f5b,	// (0x00061bf3) grid_gallery_pane_ParamLimits

0x4f5b,	// (0x00061bf3) grid_gallery_pane

0x4f6b,	// (0x00061c03) cell_gallery_pane_ParamLimits

0x4f6b,	// (0x00061c03) cell_gallery_pane

0xcba7,	// (0x0006983f) bg_cell_gallery_focus_pane_ParamLimits

0xcba7,	// (0x0006983f) bg_cell_gallery_focus_pane

0xcbb9,	// (0x00069851) cell_gallery_pane_g1_ParamLimits

0xcbb9,	// (0x00069851) cell_gallery_pane_g1

0x4fb1,	// (0x00061c49) cell_gallery_pane_g2_ParamLimits

0x4fb1,	// (0x00061c49) cell_gallery_pane_g2

0x4fbe,	// (0x00061c56) cell_gallery_pane_g3_ParamLimits

0x4fbe,	// (0x00061c56) cell_gallery_pane_g3

0xcbc5,	// (0x0006985d) cell_gallery_pane_g4_ParamLimits

0xcbc5,	// (0x0006985d) cell_gallery_pane_g4

0x0003,

0xf6bf,	// (0x0006c357) cell_gallery_pane_g_ParamLimits

0xf6bf,	// (0x0006c357) cell_gallery_pane_g

0xcbd1,	// (0x00069869) bg_cell_gallery_focus_pane_g1

0xcbd9,	// (0x00069871) bg_cell_gallery_focus_pane_g2

0xcbe1,	// (0x00069879) bg_cell_gallery_focus_pane_g3

0xcbe9,	// (0x00069881) bg_cell_gallery_focus_pane_g4

0xcbf1,	// (0x00069889) bg_cell_gallery_focus_pane_g5

0xcbf9,	// (0x00069891) bg_cell_gallery_focus_pane_g6

0xcc01,	// (0x00069899) bg_cell_gallery_focus_pane_g7

0xcc09,	// (0x000698a1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c8,	// (0x0006c360) bg_cell_gallery_focus_pane_g

0xcc11,	// (0x000698a9) aid_firma_cardinal

0xcc25,	// (0x000698bd) blid_firmament_pane_t1

0xcc3c,	// (0x000698d4) blid_firmament_pane_t2

0xcc53,	// (0x000698eb) blid_firmament_pane_t3

0xcc6a,	// (0x00069902) blid_firmament_pane_t4

0x0003,

0xf6d9,	// (0x0006c371) blid_firmament_pane_t

0xcc81,	// (0x00069919) blid_sat_info_pane

0xcc91,	// (0x00069929) blid_sat_info_pane_g1

0xcc91,	// (0x00069929) blid_sat_info_pane_g2

0x0001,

0xf6e2,	// (0x0006c37a) blid_sat_info_pane_g

0xcc9b,	// (0x00069933) blid_sat_info_pane_t1

0xcca9,	// (0x00069941) smil2_volume_content_pane

0xccb2,	// (0x0006994a) smil2_volume_pane_g1

0xccba,	// (0x00069952) smil2_volume_content_pane_g1

0xccc3,	// (0x0006995b) smil2_volume_content_pane_g2

0xcccc,	// (0x00069964) smil2_volume_content_pane_g3

0xccd5,	// (0x0006996d) smil2_volume_content_pane_g4

0xccde,	// (0x00069976) smil2_volume_content_pane_g5

0xcce7,	// (0x0006997f) smil2_volume_content_pane_g6

0xccf0,	// (0x00069988) smil2_volume_content_pane_g7

0xccf9,	// (0x00069991) smil2_volume_content_pane_g8

0xcd02,	// (0x0006999a) smil2_volume_content_pane_g9

0xcd0b,	// (0x000699a3) smil2_volume_content_pane_g10

0x0009,

0xf6e7,	// (0x0006c37f) smil2_volume_content_pane_g

0x197b,	// (0x0005e613) cale_week_day_heading_pane_t1_ParamLimits

0x19c1,	// (0x0005e659) cale_week_day_heading_pane_t2_ParamLimits

0x1a0c,	// (0x0005e6a4) cale_week_day_heading_pane_t3_ParamLimits

0x1a57,	// (0x0005e6ef) cale_week_day_heading_pane_t4_ParamLimits

0x1aa2,	// (0x0005e73a) cale_week_day_heading_pane_t5_ParamLimits

0x1aed,	// (0x0005e785) cale_week_day_heading_pane_t6_ParamLimits

0x1b38,	// (0x0005e7d0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0006be70) cale_week_day_heading_pane_t_ParamLimits

0xaa87,	// (0x0006771f) bg_cale_side_pane_ParamLimits

0x1b7e,	// (0x0005e816) cale_week_time_pane_t1_ParamLimits

0x1bc2,	// (0x0005e85a) cale_week_time_pane_t2_ParamLimits

0x1c06,	// (0x0005e89e) cale_week_time_pane_t3_ParamLimits

0x1c4a,	// (0x0005e8e2) cale_week_time_pane_t4_ParamLimits

0x1c8e,	// (0x0005e926) cale_week_time_pane_t5_ParamLimits

0x1cd2,	// (0x0005e96a) cale_week_time_pane_t6_ParamLimits

0x1d16,	// (0x0005e9ae) cale_week_time_pane_t7_ParamLimits

0x1d5a,	// (0x0005e9f2) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0006be7f) cale_week_time_pane_t_ParamLimits

0x1da4,	// (0x0005ea3c) cell_cale_week_pane_g2_ParamLimits

0xaa87,	// (0x0006771f) bg_cale_side_pane_cp01_ParamLimits

0x3066,	// (0x0005fcfe) cale_month_week_pane_t1_ParamLimits

0x307f,	// (0x0005fd17) cale_month_week_pane_t2_ParamLimits

0x3098,	// (0x0005fd30) cale_month_week_pane_t3_ParamLimits

0x30b1,	// (0x0005fd49) cale_month_week_pane_t4_ParamLimits

0x30ca,	// (0x0005fd62) cale_month_week_pane_t5_ParamLimits

0x30e5,	// (0x0005fd7d) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0006bf58) cale_month_week_pane_t_ParamLimits

0x323e,	// (0x0005fed6) cell_cale_month_pane_g1_ParamLimits

0x9c89,	// (0x00066921) main_cale_event_viewer_pane

0x9c89,	// (0x00066921) listscroll_cale_event_viewer_pane

0xcd14,	// (0x000699ac) list_cale_ev_pane

0xcd1c,	// (0x000699b4) scroll_pane_cp023

0x4fcb,	// (0x00061c63) field_cale_ev_pane_ParamLimits

0x4fcb,	// (0x00061c63) field_cale_ev_pane

0xcd28,	// (0x000699c0) field_cale_ev_content_pane_ParamLimits

0xcd28,	// (0x000699c0) field_cale_ev_content_pane

0xcd34,	// (0x000699cc) field_cale_ev_pane_g1_ParamLimits

0xcd34,	// (0x000699cc) field_cale_ev_pane_g1

0xcd40,	// (0x000699d8) field_cale_ev_pane_g2_ParamLimits

0xcd40,	// (0x000699d8) field_cale_ev_pane_g2

0xcd58,	// (0x000699f0) field_cale_ev_pane_g3_ParamLimits

0xcd58,	// (0x000699f0) field_cale_ev_pane_g3

0x0002,

0xf6fc,	// (0x0006c394) field_cale_ev_pane_g_ParamLimits

0xf6fc,	// (0x0006c394) field_cale_ev_pane_g

0xcd70,	// (0x00069a08) field_cale_ev_pane_t1_ParamLimits

0xcd70,	// (0x00069a08) field_cale_ev_pane_t1

0x4fef,	// (0x00061c87) field_cale_ev_content_pane_t1_ParamLimits

0x4fef,	// (0x00061c87) field_cale_ev_content_pane_t1

0x3df6,	// (0x00060a8e) bg_button_pane_cp01

0x1647,	// (0x0005e2df) listscroll_cale_week_pane_ParamLimits

0x165b,	// (0x0005e2f3) popup_toolbar_window_cp01

0xaa53,	// (0x000676eb) listscroll_cale_week_pane_t1_ParamLimits

0x1647,	// (0x0005e2df) listscroll_cale_day_pane_ParamLimits

0x165b,	// (0x0005e2f3) popup_toolbar_window_cp02

0xae69,	// (0x00067b01) listscroll_cale_day_pane_t1_ParamLimits

0x1647,	// (0x0005e2df) main_cale_month_pane_ParamLimits

0x4717,	// (0x000613af) popup_toolbar_window_cp03_ParamLimits

0x4717,	// (0x000613af) popup_toolbar_window_cp03

0x4073,	// (0x00060d0b) main_image_pane_g2_ParamLimits

0x4073,	// (0x00060d0b) main_image_pane_g2

0x407f,	// (0x00060d17) main_image_pane_g3_ParamLimits

0x407f,	// (0x00060d17) main_image_pane_g3

0x0002,

0xf4ed,	// (0x0006c185) main_image_pane_g_ParamLimits

0xf4ed,	// (0x0006c185) main_image_pane_g

0xb6c3,	// (0x0006835b) main_image_pane_t1_ParamLimits

0x408b,	// (0x00060d23) main_image_pane_t2_ParamLimits

0x408b,	// (0x00060d23) main_image_pane_t2

0x409d,	// (0x00060d35) main_image_pane_t3_ParamLimits

0x409d,	// (0x00060d35) main_image_pane_t3

0x40af,	// (0x00060d47) main_image_pane_t4_ParamLimits

0x40af,	// (0x00060d47) main_image_pane_t4

0x0003,

0xf4f4,	// (0x0006c18c) main_image_pane_t_ParamLimits

0xf4f4,	// (0x0006c18c) main_image_pane_t

0x40c1,	// (0x00060d59) popup_image_details_window_cp01

0x40cb,	// (0x00060d63) popup_toobar_trans_pane_cp01_ParamLimits

0x40cb,	// (0x00060d63) popup_toobar_trans_pane_cp01

0x4688,	// (0x00061320) popup_image_details_window_ParamLimits

0x4688,	// (0x00061320) popup_image_details_window

0xc862,	// (0x000694fa) popup_image_focus_window

0x49b4,	// (0x0006164c) camera2_autofocus_pane_ParamLimits

0x49b4,	// (0x0006164c) camera2_autofocus_pane

0x9c89,	// (0x00066921) bg_popup_sub_pane_cp06

0xcd87,	// (0x00069a1f) popup_image_focus_window_g1

0xcd8f,	// (0x00069a27) popup_image_focus_window_g2

0xcd97,	// (0x00069a2f) popup_image_focus_window_g3

0xcd9f,	// (0x00069a37) popup_image_focus_window_g4

0x0003,

0xf703,	// (0x0006c39b) popup_image_focus_window_g

0xcda7,	// (0x00069a3f) popup_image_focus_window_t1

0xcdb5,	// (0x00069a4d) popup_image_focus_window_t2

0xcdc5,	// (0x00069a5d) popup_image_focus_window_t3

0x0002,

0xf70c,	// (0x0006c3a4) popup_image_focus_window_t

0xcdd3,	// (0x00069a6b) camera2_autofocus_pane_g1

0xa227,	// (0x00066ebf) bg_tb_trans_pane_cp01

0xcde1,	// (0x00069a79) popup_image_details_window_g1

0xcdf4,	// (0x00069a8c) popup_image_details_window_g2

0x0002,

0xf71e,	// (0x0006c3b6) popup_image_details_window_g

0xce1d,	// (0x00069ab5) popup_image_details_window_t1

0xce2f,	// (0x00069ac7) popup_image_details_window_t2

0xce48,	// (0x00069ae0) popup_image_details_window_t3

0xce5c,	// (0x00069af4) popup_image_details_window_t4

0xce77,	// (0x00069b0f) popup_image_details_window_t5

0x0004,

0xf725,	// (0x0006c3bd) popup_image_details_window_t

0xa73f,	// (0x000673d7) bg_calc_paper_pane_ParamLimits

0x13df,	// (0x0005e077) grid_highlight_pane_cp013

0x13e9,	// (0x0005e081) list_calc_pane_ParamLimits

0x13fb,	// (0x0005e093) scroll_pane_cp024

0xa753,	// (0x000673eb) bg_calc_display_pane_ParamLimits

0x1403,	// (0x0005e09b) calc_display_pane_t1_ParamLimits

0x1418,	// (0x0005e0b0) calc_display_pane_t2_ParamLimits

0x142d,	// (0x0005e0c5) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0006bdf2) calc_display_pane_t_ParamLimits

0x1501,	// (0x0005e199) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0006be0f) cell_calc_pane_g

0x150a,	// (0x0005e1a2) cell_calc_pane_t1

0xa7b2,	// (0x0006744a) grid_highlight_pane_cp02_ParamLimits

0xa7c8,	// (0x00067460) toolbar_button_pane_cp01_ParamLimits

0xa7c8,	// (0x00067460) toolbar_button_pane_cp01

0xb708,	// (0x000683a0) temp_image_control_pane_ParamLimits

0xb708,	// (0x000683a0) temp_image_control_pane

0xa227,	// (0x00066ebf) main_mp3_pane

0xce91,	// (0x00069b29) temp_image_control_pane_g1_ParamLimits

0xce91,	// (0x00069b29) temp_image_control_pane_g1

0xce9f,	// (0x00069b37) temp_image_control_pane_g2_ParamLimits

0xce9f,	// (0x00069b37) temp_image_control_pane_g2

0xceb1,	// (0x00069b49) temp_image_control_pane_g3_ParamLimits

0xceb1,	// (0x00069b49) temp_image_control_pane_g3

0x503a,	// (0x00061cd2) temp_image_control_pane_g4_ParamLimits

0x503a,	// (0x00061cd2) temp_image_control_pane_g4

0x0003,

0xf730,	// (0x0006c3c8) temp_image_control_pane_g_ParamLimits

0xf730,	// (0x0006c3c8) temp_image_control_pane_g

0xce91,	// (0x00069b29) main_mp3_pane_g1

0x504b,	// (0x00061ce3) main_mp3_pane_g2

0x0007,

0xf739,	// (0x0006c3d1) main_mp3_pane_g

0xcef4,	// (0x00069b8c) main_mp3_pane_t1

0xaaec,	// (0x00067784) main_camera_pane_g8_ParamLimits

0xaaec,	// (0x00067784) main_camera_pane_g8

0x205b,	// (0x0005ecf3) main_video_pane_g7_ParamLimits

0x205b,	// (0x0005ecf3) main_video_pane_g7

0x4af7,	// (0x0006178f) main_camera2_pane_t7_ParamLimits

0x4af7,	// (0x0006178f) main_camera2_pane_t7

0xac38,	// (0x000678d0) scroll_pane_cp025_ParamLimits

0xac38,	// (0x000678d0) scroll_pane_cp025

0xac4c,	// (0x000678e4) scroll_pane_cp026_ParamLimits

0xac4c,	// (0x000678e4) scroll_pane_cp026

0xac5b,	// (0x000678f3) wml_content_pane_ParamLimits

0x9c89,	// (0x00066921) main_touch_calib_pane

0x50ef,	// (0x00061d87) main_touch_calib_pane_g1

0x50fb,	// (0x00061d93) main_touch_calib_pane_g2

0x5107,	// (0x00061d9f) main_touch_calib_pane_g3

0x5113,	// (0x00061dab) main_touch_calib_pane_g4

0x0003,

0xf757,	// (0x0006c3ef) main_touch_calib_pane_g

0x511f,	// (0x00061db7) main_touch_calib_pane_t1

0x5136,	// (0x00061dce) main_touch_calib_pane_t2

0x0004,

0xf760,	// (0x0006c3f8) main_touch_calib_pane_t

0xb368,	// (0x00068000) mup_progress_pane_cp02

0xb387,	// (0x0006801f) navi_pane_g1

0xb3e9,	// (0x00068081) navi_pane_mp_t3

0xa227,	// (0x00066ebf) main_mp3_pane_ParamLimits

0x4759,	// (0x000613f1) navi_pane_ParamLimits

0xce91,	// (0x00069b29) main_mp3_pane_g1_ParamLimits

0x504b,	// (0x00061ce3) main_mp3_pane_g2_ParamLimits

0x5057,	// (0x00061cef) main_mp3_pane_g3_ParamLimits

0x5057,	// (0x00061cef) main_mp3_pane_g3

0x5063,	// (0x00061cfb) main_mp3_pane_g4_ParamLimits

0x5063,	// (0x00061cfb) main_mp3_pane_g4

0xcec1,	// (0x00069b59) main_mp3_pane_g5_ParamLimits

0xcec1,	// (0x00069b59) main_mp3_pane_g5

0xcecf,	// (0x00069b67) main_mp3_pane_g6_ParamLimits

0xcecf,	// (0x00069b67) main_mp3_pane_g6

0xcedc,	// (0x00069b74) main_mp3_pane_g7_ParamLimits

0xcedc,	// (0x00069b74) main_mp3_pane_g7

0xcee8,	// (0x00069b80) main_mp3_pane_g8_ParamLimits

0xcee8,	// (0x00069b80) main_mp3_pane_g8

0xf739,	// (0x0006c3d1) main_mp3_pane_g_ParamLimits

0x506f,	// (0x00061d07) main_mp3_pane_t2

0x507f,	// (0x00061d17) main_mp3_pane_t3

0xcf02,	// (0x00069b9a) main_mp3_pane_t4

0xcf10,	// (0x00069ba8) main_mp3_pane_t5

0x0005,

0xf74a,	// (0x0006c3e2) main_mp3_pane_t

0xcf1e,	// (0x00069bb6) mup_progress_pane_cp01

0x0e53,	// (0x0005daeb) aid_zoom_text_secondary2

0xcd14,	// (0x000699ac) list_cale_ev2_pane

0xcd1c,	// (0x000699b4) scroll_pane_cp023_ParamLimits

0x5191,	// (0x00061e29) field_cale_ev2_pane_ParamLimits

0x5191,	// (0x00061e29) field_cale_ev2_pane

0x51ac,	// (0x00061e44) field_cale_ev2_pane_g1_ParamLimits

0x51ac,	// (0x00061e44) field_cale_ev2_pane_g1

0x51b8,	// (0x00061e50) field_cale_ev2_pane_g2_ParamLimits

0x51b8,	// (0x00061e50) field_cale_ev2_pane_g2

0x51d0,	// (0x00061e68) field_cale_ev2_pane_g3_ParamLimits

0x51d0,	// (0x00061e68) field_cale_ev2_pane_g3

0x0003,

0xf76b,	// (0x0006c403) field_cale_ev2_pane_g_ParamLimits

0xf76b,	// (0x0006c403) field_cale_ev2_pane_g

0x51e8,	// (0x00061e80) field_cale_ev2_pane_t1_ParamLimits

0x51e8,	// (0x00061e80) field_cale_ev2_pane_t1

0x51ff,	// (0x00061e97) field_cale_ev2_pane_t2_ParamLimits

0x51ff,	// (0x00061e97) field_cale_ev2_pane_t2

0x0001,

0xf774,	// (0x0006c40c) field_cale_ev2_pane_t_ParamLimits

0xf774,	// (0x0006c40c) field_cale_ev2_pane_t

0x3f52,	// (0x00060bea) main_postcard_pane_g5_ParamLimits

0x3f52,	// (0x00060bea) main_postcard_pane_g5

0x3f60,	// (0x00060bf8) main_postcard_pane_g6_ParamLimits

0x3f60,	// (0x00060bf8) main_postcard_pane_g6

0x1e99,	// (0x0005eb31) camera2_autofocus_pane_cp_ParamLimits

0x1e99,	// (0x0005eb31) camera2_autofocus_pane_cp

0xa227,	// (0x00066ebf) main_mup3_pane

0x5234,	// (0x00061ecc) main_mup3_pane_g1_ParamLimits

0x5234,	// (0x00061ecc) main_mup3_pane_g1

0x5255,	// (0x00061eed) main_mup3_pane_g2_ParamLimits

0x5255,	// (0x00061eed) main_mup3_pane_g2

0x52d1,	// (0x00061f69) main_mup3_pane_g3_ParamLimits

0x52d1,	// (0x00061f69) main_mup3_pane_g3

0x5316,	// (0x00061fae) main_mup3_pane_g4_ParamLimits

0x5316,	// (0x00061fae) main_mup3_pane_g4

0x5359,	// (0x00061ff1) main_mup3_pane_g5_ParamLimits

0x5359,	// (0x00061ff1) main_mup3_pane_g5

0x539e,	// (0x00062036) main_mup3_pane_g6_ParamLimits

0x539e,	// (0x00062036) main_mup3_pane_g6

0xcf26,	// (0x00069bbe) main_mup3_pane_g7_ParamLimits

0xcf26,	// (0x00069bbe) main_mup3_pane_g7

0x0007,

0xf784,	// (0x0006c41c) main_mup3_pane_g_ParamLimits

0xf784,	// (0x0006c41c) main_mup3_pane_g

0x5414,	// (0x000620ac) main_mup3_pane_t1_ParamLimits

0x5414,	// (0x000620ac) main_mup3_pane_t1

0x547d,	// (0x00062115) main_mup3_pane_t2_ParamLimits

0x547d,	// (0x00062115) main_mup3_pane_t2

0x5546,	// (0x000621de) main_mup3_pane_t4_ParamLimits

0x5546,	// (0x000621de) main_mup3_pane_t4

0x559a,	// (0x00062232) main_mup3_pane_t5_ParamLimits

0x559a,	// (0x00062232) main_mup3_pane_t5

0x5648,	// (0x000622e0) main_mup3_pane_t6_ParamLimits

0x5648,	// (0x000622e0) main_mup3_pane_t6

0x0005,

0xf795,	// (0x0006c42d) main_mup3_pane_t_ParamLimits

0xf795,	// (0x0006c42d) main_mup3_pane_t

0x56f4,	// (0x0006238c) mup3_progress_pane_ParamLimits

0x56f4,	// (0x0006238c) mup3_progress_pane

0x576e,	// (0x00062406) popup_mup3_control_window_ParamLimits

0x576e,	// (0x00062406) popup_mup3_control_window

0xcf34,	// (0x00069bcc) popup_mup3_text_window

0x578b,	// (0x00062423) mup3_progress_pane_t1

0x57aa,	// (0x00062442) mup3_progress_pane_t2

0xcf3c,	// (0x00069bd4) mup3_progress_pane_t3

0x0002,

0xf7a2,	// (0x0006c43a) mup3_progress_pane_t

0xcf59,	// (0x00069bf1) mup_progress_pane_cp03

0x9c89,	// (0x00066921) bg_tb_trans_pane_cp04

0x57c9,	// (0x00062461) mup3_volume_pane

0x57d1,	// (0x00062469) popup_mup3_control_window_g1

0xdbe1,	// (0x0006a879) mup3_volume_pane_g1

0xdbea,	// (0x0006a882) mup3_volume_pane_g2

0xdbf3,	// (0x0006a88b) mup3_volume_pane_g3

0x0002,

0xf7a9,	// (0x0006c441) mup3_volume_pane_g

0x9c89,	// (0x00066921) bg_tb_trans_pane_cp03

0xcf69,	// (0x00069c01) popup_mup3_text_window_g1

0xcf71,	// (0x00069c09) popup_mup3_text_window_t1

0xa79b,	// (0x00067433) list_calc_item_pane_g1_ParamLimits

0xc9de,	// (0x00069676) mup_volume_pane_cp_g1

0x514f,	// (0x00061de7) main_touch_calib_pane_t3

0x5165,	// (0x00061dfd) main_touch_calib_pane_t4

0x517b,	// (0x00061e13) main_touch_calib_pane_t5

0x9c93,	// (0x0006692b) aid_cell_size_toolbar2

0x9c9b,	// (0x00066933) aid_popup3_width_pane

0x0e4b,	// (0x0005dae3) aid_zoom_text_msg_primary

0x1e6e,	// (0x0005eb06) vorec_t7

0xa75f,	// (0x000673f7) bg_calc_paper_pane_g1_ParamLimits

0xa76b,	// (0x00067403) bg_calc_paper_pane_g2_ParamLimits

0xa777,	// (0x0006740f) bg_calc_paper_pane_g3_ParamLimits

0xa783,	// (0x0006741b) bg_calc_paper_pane_g4_ParamLimits

0xa78f,	// (0x00067427) bg_calc_paper_pane_g5_ParamLimits

0x146e,	// (0x0005e106) bg_calc_paper_pane_g6_ParamLimits

0x147f,	// (0x0005e117) bg_calc_paper_pane_g7_ParamLimits

0x1490,	// (0x0005e128) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0006bdf9) bg_calc_paper_pane_g_ParamLimits

0x14a3,	// (0x0005e13b) calc_bg_paper_pane_g9_ParamLimits

0x1f8a,	// (0x0005ec22) image_qvga_pane_ParamLimits

0x1f8a,	// (0x0005ec22) image_qvga_pane

0xa68e,	// (0x00067326) bg_popup_sub_pane_cp04_ParamLimits

0xb63f,	// (0x000682d7) popup_mup_playback_window_g1_ParamLimits

0xb64b,	// (0x000682e3) popup_mup_playback_window_t1_ParamLimits

0xb660,	// (0x000682f8) popup_mup_playback_window_t2_ParamLimits

0xf4e8,	// (0x0006c180) popup_mup_playback_window_t_ParamLimits

0x4c26,	// (0x000618be) main_mup2_pane_g3_ParamLimits

0x4c26,	// (0x000618be) main_mup2_pane_g3

0x2334,	// (0x0005efcc) popup_toolbar_window_cp04

0xba46,	// (0x000686de) popup_call2_audio_second_window_g3_ParamLimits

0xba46,	// (0x000686de) popup_call2_audio_second_window_g3

0xbe50,	// (0x00068ae8) popup_call2_audio_first_window_g4_ParamLimits

0xbe50,	// (0x00068ae8) popup_call2_audio_first_window_g4

0xc4cf,	// (0x00069167) popup_call2_audio_in_window_g4_ParamLimits

0xc4cf,	// (0x00069167) popup_call2_audio_in_window_g4

0x4066,	// (0x00060cfe) aid_area_sk_bg_cut_ParamLimits

0x4066,	// (0x00060cfe) aid_area_sk_bg_cut

0xb675,	// (0x0006830d) aid_area_sk_bg_cut_2_ParamLimits

0xb675,	// (0x0006830d) aid_area_sk_bg_cut_2

0x4fa1,	// (0x00061c39) aid_placing_details_win

0x4fa9,	// (0x00061c41) aid_placing_details_win_2

0xcdd3,	// (0x00069a6b) camera2_autofocus_pane_g1_ParamLimits

0x102d,	// (0x0005dcc5) popup_fixed_preview_cale_window_ParamLimits

0x102d,	// (0x0005dcc5) popup_fixed_preview_cale_window

0xb438,	// (0x000680d0) navi_slider_pane_g3

0xb441,	// (0x000680d9) navi_slider_pane_g4

0xb44a,	// (0x000680e2) navi_slider_pane_g5

0xb438,	// (0x000680d0) navi_slider_pane_g6

0x38c7,	// (0x0006055f) navi_slider_pane_g7

0xb56d,	// (0x00068205) mup_scale_pane_g3

0xb576,	// (0x0006820e) mup_scale_pane_g4

0xb57f,	// (0x00068217) mup_scale_pane_g5

0x3d4a,	// (0x000609e2) mup_scale_pane_g6

0x3d53,	// (0x000609eb) mup_scale_pane_g7

0xb438,	// (0x000680d0) cams2_slider_pane_g3

0xca60,	// (0x000696f8) cams2_slider_pane_g4

0x4f01,	// (0x00061b99) cams2_slider_pane_g5

0xb438,	// (0x000680d0) cams2_slider_pane_g6

0x4f09,	// (0x00061ba1) cams2_slider_pane_g7

0xcc91,	// (0x00069929) camera2_autofocus_pane_cp_g1

0xc834,	// (0x000694cc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc834,	// (0x000694cc) bg_popup_preview_window_pane_cp02

0xcf7f,	// (0x00069c17) list_fp_cale_pane_ParamLimits

0xcf7f,	// (0x00069c17) list_fp_cale_pane

0xcf8b,	// (0x00069c23) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf8b,	// (0x00069c23) popup_fixed_preview_cale_window_t1

0x57da,	// (0x00062472) popup_fixed_preview_cale_window_t2_ParamLimits

0x57da,	// (0x00062472) popup_fixed_preview_cale_window_t2

0x57ef,	// (0x00062487) popup_fixed_preview_cale_window_t3_ParamLimits

0x57ef,	// (0x00062487) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b0,	// (0x0006c448) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b0,	// (0x0006c448) popup_fixed_preview_cale_window_t

0x5804,	// (0x0006249c) list_single_fp_cale_pane_ParamLimits

0x5804,	// (0x0006249c) list_single_fp_cale_pane

0xcfa9,	// (0x00069c41) list_single_fp_cale_pane_g1_ParamLimits

0xcfa9,	// (0x00069c41) list_single_fp_cale_pane_g1

0xcfb5,	// (0x00069c4d) list_single_fp_cale_pane_g2_ParamLimits

0xcfb5,	// (0x00069c4d) list_single_fp_cale_pane_g2

0x0002,

0xf7b7,	// (0x0006c44f) list_single_fp_cale_pane_g_ParamLimits

0xf7b7,	// (0x0006c44f) list_single_fp_cale_pane_g

0xcfce,	// (0x00069c66) list_single_fp_cale_pane_t1_ParamLimits

0xcfce,	// (0x00069c66) list_single_fp_cale_pane_t1

0xcfe0,	// (0x00069c78) list_single_fp_cale_pane_t2_ParamLimits

0xcfe0,	// (0x00069c78) list_single_fp_cale_pane_t2

0x0001,

0xf7be,	// (0x0006c456) list_single_fp_cale_pane_t_ParamLimits

0xf7be,	// (0x0006c456) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c89,	// (0x00066921) main_dialer_pane

0x5814,	// (0x000624ac) aid_cell_size_keypad

0x581e,	// (0x000624b6) dialer_ne_pane

0x5828,	// (0x000624c0) grid_dialer_command_1_pane

0x5830,	// (0x000624c8) grid_dialer_command_2_pane

0x5838,	// (0x000624d0) grid_dialer_keypad_pane

0x584c,	// (0x000624e4) bg_popup_call_pane_cp06_ParamLimits

0x584c,	// (0x000624e4) bg_popup_call_pane_cp06

0x5858,	// (0x000624f0) dialer_ne_clear_pane_ParamLimits

0x5858,	// (0x000624f0) dialer_ne_clear_pane

0xd013,	// (0x00069cab) dialer_ne_pane_g1

0xd01b,	// (0x00069cb3) dialer_ne_pane_t1_ParamLimits

0xd01b,	// (0x00069cb3) dialer_ne_pane_t1

0x5864,	// (0x000624fc) dialer_ne_pane_t2_ParamLimits

0x5864,	// (0x000624fc) dialer_ne_pane_t2

0x5881,	// (0x00062519) dialer_ne_pane_t3_ParamLimits

0x5881,	// (0x00062519) dialer_ne_pane_t3

0x0002,

0xf7c3,	// (0x0006c45b) dialer_ne_pane_t_ParamLimits

0xf7c3,	// (0x0006c45b) dialer_ne_pane_t

0x58a5,	// (0x0006253d) dialer_ne_pane_t3_copy1_ParamLimits

0x58a5,	// (0x0006253d) dialer_ne_pane_t3_copy1

0x58c9,	// (0x00062561) cell_dialer_keypad_pane_ParamLimits

0x58c9,	// (0x00062561) cell_dialer_keypad_pane

0x58e0,	// (0x00062578) cell_dialer_command_1_pane_ParamLimits

0x58e0,	// (0x00062578) cell_dialer_command_1_pane

0x58f6,	// (0x0006258e) cell_dialer_command_2_pane_ParamLimits

0x58f6,	// (0x0006258e) cell_dialer_command_2_pane

0xd02d,	// (0x00069cc5) bg_button_pane_cp02_ParamLimits

0xd02d,	// (0x00069cc5) bg_button_pane_cp02

0x5905,	// (0x0006259d) cell_dialer_keypad_pane_g1_ParamLimits

0x5905,	// (0x0006259d) cell_dialer_keypad_pane_g1

0xd02d,	// (0x00069cc5) bg_button_pane_cp03_ParamLimits

0xd02d,	// (0x00069cc5) bg_button_pane_cp03

0x591a,	// (0x000625b2) cell_dialer_command_1_pane_g1_ParamLimits

0x591a,	// (0x000625b2) cell_dialer_command_1_pane_g1

0xd039,	// (0x00069cd1) bg_button_pane_cp04

0x592e,	// (0x000625c6) cell_dialer_command_2_pane_g1

0xb427,	// (0x000680bf) bg_button_pane_cp06

0xd041,	// (0x00069cd9) dialer_ne_clear_pane_g1

0x3802,	// (0x0006049a) navi_pane_g2

0x3830,	// (0x000604c8) navi_pane_g3

0x0002,

0xf3eb,	// (0x0006c083) navi_pane_g

0x385b,	// (0x000604f3) navi_pane_mv_g2

0x3882,	// (0x0006051a) navi_pane_mv_g5

0x388a,	// (0x00060522) navi_pane_mv_t1

0xa753,	// (0x000673eb) main_clock2_pane

0x596c,	// (0x00062604) main_clock2_list_pane_ParamLimits

0x596c,	// (0x00062604) main_clock2_list_pane

0x5996,	// (0x0006262e) main_clock2_pane_t1_ParamLimits

0x5996,	// (0x0006262e) main_clock2_pane_t1

0x59b8,	// (0x00062650) main_clock2_pane_t2_ParamLimits

0x59b8,	// (0x00062650) main_clock2_pane_t2

0x0004,

0xf7ca,	// (0x0006c462) main_clock2_pane_t_ParamLimits

0xf7ca,	// (0x0006c462) main_clock2_pane_t

0x5a15,	// (0x000626ad) popup_clock_analogue_window_cp03_ParamLimits

0x5a15,	// (0x000626ad) popup_clock_analogue_window_cp03

0x5a35,	// (0x000626cd) popup_clock_digital_window_cp02_ParamLimits

0x5a35,	// (0x000626cd) popup_clock_digital_window_cp02

0x5aa6,	// (0x0006273e) main_clock2_list_single_pane_ParamLimits

0x5aa6,	// (0x0006273e) main_clock2_list_single_pane

0xb427,	// (0x000680bf) list_highlight_pane_cp05

0xd05d,	// (0x00069cf5) main_clock2_list_single_pane_t1

0x2334,	// (0x0005efcc) popup_toolbar_window_cp04_ParamLimits

0x500a,	// (0x00061ca2) camera2_autofocus_pane_g2_ParamLimits

0x500a,	// (0x00061ca2) camera2_autofocus_pane_g2

0x5016,	// (0x00061cae) camera2_autofocus_pane_g3_ParamLimits

0x5016,	// (0x00061cae) camera2_autofocus_pane_g3

0x5022,	// (0x00061cba) camera2_autofocus_pane_g4_ParamLimits

0x5022,	// (0x00061cba) camera2_autofocus_pane_g4

0x502e,	// (0x00061cc6) camera2_autofocus_pane_g5_ParamLimits

0x502e,	// (0x00061cc6) camera2_autofocus_pane_g5

0x0004,

0xf713,	// (0x0006c3ab) camera2_autofocus_pane_g_ParamLimits

0xf713,	// (0x0006c3ab) camera2_autofocus_pane_g

0x5214,	// (0x00061eac) camera2_autofocus_pane_cp_g2

0x521c,	// (0x00061eb4) camera2_autofocus_pane_cp_g3

0x5224,	// (0x00061ebc) camera2_autofocus_pane_cp_g4

0x522c,	// (0x00061ec4) camera2_autofocus_pane_cp_g5

0x0004,

0xf779,	// (0x0006c411) camera2_autofocus_pane_cp_g

0x5844,	// (0x000624dc) popup_dialer_spcha_window

0x9c89,	// (0x00066921) bg_popup_sub_pane_cp07

0xd06b,	// (0x00069d03) list_spcha_pane

0xd073,	// (0x00069d0b) list_single_spcha_pane_ParamLimits

0xd073,	// (0x00069d0b) list_single_spcha_pane

0x9c89,	// (0x00066921) list_highlight_pane_cp06

0xd084,	// (0x00069d1c) list_single_spcha_pane_t1

0xc279,	// (0x00068f11) popup_call2_audio_out_window_g4_ParamLimits

0xc279,	// (0x00068f11) popup_call2_audio_out_window_g4

0x9c89,	// (0x00066921) main_imed2_pane

0xc86c,	// (0x00069504) popup_imed_adjust2_window

0x4696,	// (0x0006132e) popup_imed_trans_window_ParamLimits

0x4696,	// (0x0006132e) popup_imed_trans_window

0xcac9,	// (0x00069761) popup_blid_sat_info2_window_t1

0xcad7,	// (0x0006976f) popup_blid_sat_info2_window_t2

0x000a,

0xf6a8,	// (0x0006c340) popup_blid_sat_info2_window_t

0x5b50,	// (0x000627e8) aid_size_cell_colour_35

0x5b6a,	// (0x00062802) aid_size_cell_colour_112

0x5b81,	// (0x00062819) aid_size_cell_effect

0xa227,	// (0x00066ebf) bg_tb_trans_pane_cp02

0xb12e,	// (0x00067dc6) heading_imed_pane

0x5b9b,	// (0x00062833) listscroll_imed_pane

0xd092,	// (0x00069d2a) heading_imed_pane_g1

0xd09a,	// (0x00069d32) heading_imed_pane_t1

0xd0a8,	// (0x00069d40) grid_imed_colour_35_pane_ParamLimits

0xd0a8,	// (0x00069d40) grid_imed_colour_35_pane

0x5ba7,	// (0x0006283f) grid_imed_effect_pane

0xd0c4,	// (0x00069d5c) list_imed_aspect_pane

0x5bb7,	// (0x0006284f) scroll_pane_cp027_ParamLimits

0x5bb7,	// (0x0006284f) scroll_pane_cp027

0x5bc3,	// (0x0006285b) cell_imed_effect_pane_ParamLimits

0x5bc3,	// (0x0006285b) cell_imed_effect_pane

0xd0cc,	// (0x00069d64) cell_imed_colour_pane_ParamLimits

0xd0cc,	// (0x00069d64) cell_imed_colour_pane

0xd116,	// (0x00069dae) cell_imed_colour_pane_g1_ParamLimits

0xd116,	// (0x00069dae) cell_imed_colour_pane_g1

0xd127,	// (0x00069dbf) hgihlgiht_grid_pane_cp016_ParamLimits

0xd127,	// (0x00069dbf) hgihlgiht_grid_pane_cp016

0x5bdf,	// (0x00062877) cell_imed_effect_pane_g1

0x5be7,	// (0x0006287f) grid_highlight_pane_cp017

0xd138,	// (0x00069dd0) list_imed_single_pane_ParamLimits

0xd138,	// (0x00069dd0) list_imed_single_pane

0x9c89,	// (0x00066921) list_highlight_pane_cp07

0xd14c,	// (0x00069de4) list_imed_aspect_pane_comp1_t1

0xc840,	// (0x000694d8) bg_tb_trans_pane_cp05

0xd16e,	// (0x00069e06) popup_imed_adjust2_window_g1

0xd195,	// (0x00069e2d) popup_imed_adjust2_window_t1

0xd1ad,	// (0x00069e45) slider_imed_adjust_pane

0xd1c1,	// (0x00069e59) slider_imed_adjust_pane_g1

0xd1d1,	// (0x00069e69) slider_imed_adjust_pane_g2

0xd1e1,	// (0x00069e79) slider_imed_adjust_pane_g3

0xd1f2,	// (0x00069e8a) slider_imed_adjust_pane_g4

0x0003,

0xf7e7,	// (0x0006c47f) slider_imed_adjust_pane_g

0x5bf0,	// (0x00062888) aid_size_cell_clipart2

0x5bfc,	// (0x00062894) grid_imed_clipart_pane

0xd203,	// (0x00069e9b) scroll_pane_cp031

0x5c06,	// (0x0006289e) cell_imed_clipart_pane_ParamLimits

0x5c06,	// (0x0006289e) cell_imed_clipart_pane

0x5c24,	// (0x000628bc) cell_imed_clipart_pane_g1

0x9c89,	// (0x00066921) grid_highlight_pane_cp014

0x5978,	// (0x00062610) main_clock2_pane_g1_ParamLimits

0x5978,	// (0x00062610) main_clock2_pane_g1

0x5a51,	// (0x000626e9) aid_call2_pane_cp10

0x5a63,	// (0x000626fb) aid_call_pane_cp10

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g1

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g2

0x5a75,	// (0x0006270d) popup_clock_analogue_window_cp10_g3

0x5a75,	// (0x0006270d) popup_clock_analogue_window_cp10_g4

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d5,	// (0x0006c46d) popup_clock_analogue_window_cp10_g

0x5a87,	// (0x0006271f) popup_clock_analogue_window_cp10_t1

0x5ab8,	// (0x00062750) clock_digital_number_pane_cp10_ParamLimits

0x5ab8,	// (0x00062750) clock_digital_number_pane_cp10

0x5ad0,	// (0x00062768) clock_digital_number_pane_cp11_ParamLimits

0x5ad0,	// (0x00062768) clock_digital_number_pane_cp11

0x5ae8,	// (0x00062780) clock_digital_number_pane_cp12_ParamLimits

0x5ae8,	// (0x00062780) clock_digital_number_pane_cp12

0x5b00,	// (0x00062798) clock_digital_number_pane_cp13_ParamLimits

0x5b00,	// (0x00062798) clock_digital_number_pane_cp13

0x5b18,	// (0x000627b0) clock_digital_separator_pane_cp10_ParamLimits

0x5b18,	// (0x000627b0) clock_digital_separator_pane_cp10

0x5b30,	// (0x000627c8) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b30,	// (0x000627c8) popup_clock_digital_window_cp02_t1

0xa686,	// (0x0006731e) clock_digital_number_pane_cp10_g1

0xa686,	// (0x0006731e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f0,	// (0x0006c488) clock_digital_number_pane_cp10_g

0xa686,	// (0x0006731e) clock_digital_separator_pane_cp10_g1

0xa686,	// (0x0006731e) clock_digital_separator_pane_g2_cp10

0xb3f7,	// (0x0006808f) navi_pane_vded_g4

0xb400,	// (0x00068098) navi_pane_vded_g5

0xb409,	// (0x000680a1) navi_pane_vded_t1

0x9c89,	// (0x00066921) main_vded_pane

0x5c2d,	// (0x000628c5) main_vded_pane_g1

0x5c39,	// (0x000628d1) main_vded_pane_g2

0x5c43,	// (0x000628db) main_vded_pane_g3

0x0002,

0xf7f5,	// (0x0006c48d) main_vded_pane_g

0x5c4d,	// (0x000628e5) main_vded_pane_t1

0x5c5b,	// (0x000628f3) main_vded_pane_t2

0x0001,

0xf7fc,	// (0x0006c494) main_vded_pane_t

0x5c69,	// (0x00062901) vded_slider_pane

0x5c73,	// (0x0006290b) vded_video_pane

0xd20b,	// (0x00069ea3) vded_video_pane_g1

0x5c7f,	// (0x00062917) vded_video_pane_g2

0xcc91,	// (0x00069929) vded_video_pane_g3

0x0002,

0xf801,	// (0x0006c499) vded_video_pane_g

0xd215,	// (0x00069ead) vded_slider_pane_g1

0xc9de,	// (0x00069676) vded_slider_pane_g2

0xd21e,	// (0x00069eb6) vded_slider_pane_g3

0xd227,	// (0x00069ebf) vded_slider_pane_g4

0xd230,	// (0x00069ec8) vded_slider_pane_g5

0x0004,

0xf808,	// (0x0006c4a0) vded_slider_pane_g

0x5762,	// (0x000623fa) mup3_rocker_pane_ParamLimits

0x5762,	// (0x000623fa) mup3_rocker_pane

0x5c88,	// (0x00062920) mup3_control_keys_pane_g1

0x5c90,	// (0x00062928) mup3_control_keys_pane_g2

0x5c98,	// (0x00062930) mup3_control_keys_pane_g3

0x5ca0,	// (0x00062938) mup3_control_keys_pane_g4

0x0003,

0xf813,	// (0x0006c4ab) mup3_control_keys_pane_g

0x104b,	// (0x0005dce3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x104b,	// (0x0005dce3) popup_toolbar2_fixed_window_cp01

0x577e,	// (0x00062416) popup_toolbar2_fixed_window_cp02_ParamLimits

0x577e,	// (0x00062416) popup_toolbar2_fixed_window_cp02

0xbbb8,	// (0x00068850) popup_call2_audio_second_window_t4_ParamLimits

0xbbb8,	// (0x00068850) popup_call2_audio_second_window_t4

0xc0e6,	// (0x00068d7e) popup_call2_audio_first_window_t6_ParamLimits

0xc0e6,	// (0x00068d7e) popup_call2_audio_first_window_t6

0xc37c,	// (0x00069014) popup_call2_audio_out_window_t6_ParamLimits

0xc37c,	// (0x00069014) popup_call2_audio_out_window_t6

0x9c89,	// (0x00066921) main_vitu_pane

0x5cb0,	// (0x00062948) aid_size_cell_itu_ParamLimits

0x5cb0,	// (0x00062948) aid_size_cell_itu

0x1073,	// (0x0005dd0b) bg_popup_window_pane_cp08_ParamLimits

0x1073,	// (0x0005dd0b) bg_popup_window_pane_cp08

0x5cbe,	// (0x00062956) field_vitu_entry_pane_ParamLimits

0x5cbe,	// (0x00062956) field_vitu_entry_pane

0x5ccd,	// (0x00062965) grid_vitu_function_pane_ParamLimits

0x5ccd,	// (0x00062965) grid_vitu_function_pane

0x5cdd,	// (0x00062975) grid_vitu_itu_pane_ParamLimits

0x5cdd,	// (0x00062975) grid_vitu_itu_pane

0x5ced,	// (0x00062985) cell_vitu_itu_pane_ParamLimits

0x5ced,	// (0x00062985) cell_vitu_itu_pane

0x5d04,	// (0x0006299c) cell_vitu_function_pane_ParamLimits

0x5d04,	// (0x0006299c) cell_vitu_function_pane

0xa227,	// (0x00066ebf) bg_popup_sub_pane_cp08_ParamLimits

0xa227,	// (0x00066ebf) bg_popup_sub_pane_cp08

0x5d18,	// (0x000629b0) field_vitu_entry_pane_t1_ParamLimits

0x5d18,	// (0x000629b0) field_vitu_entry_pane_t1

0xd251,	// (0x00069ee9) field_vitu_entry_pane_t2_ParamLimits

0xd251,	// (0x00069ee9) field_vitu_entry_pane_t2

0x0001,

0xf821,	// (0x0006c4b9) field_vitu_entry_pane_t_ParamLimits

0xf821,	// (0x0006c4b9) field_vitu_entry_pane_t

0xd26e,	// (0x00069f06) bg_button_pane_cp05_ParamLimits

0xd26e,	// (0x00069f06) bg_button_pane_cp05

0x5d32,	// (0x000629ca) cell_vitu_itu_pane_g1

0x5d4a,	// (0x000629e2) cell_vitu_itu_pane_t1_ParamLimits

0x5d4a,	// (0x000629e2) cell_vitu_itu_pane_t1

0x5d5c,	// (0x000629f4) cell_vitu_itu_pane_t2_ParamLimits

0x5d5c,	// (0x000629f4) cell_vitu_itu_pane_t2

0x0002,

0xf826,	// (0x0006c4be) cell_vitu_itu_pane_t_ParamLimits

0xf826,	// (0x0006c4be) cell_vitu_itu_pane_t

0xd27c,	// (0x00069f14) bg_button_pane_cp07

0x5d9f,	// (0x00062a37) cell_vitu_function_pane_g1

0x1306,	// (0x0005df9e) main_calc_pane_g1

0x0e3f,	// (0x0005dad7) aid_visual_content_pane

0x9c89,	// (0x00066921) main_vradio_pane

0x5da8,	// (0x00062a40) main_vradio_pane_g1_ParamLimits

0x5da8,	// (0x00062a40) main_vradio_pane_g1

0xd286,	// (0x00069f1e) main_vradio_pane_g2_ParamLimits

0xd286,	// (0x00069f1e) main_vradio_pane_g2

0x0001,

0xf82d,	// (0x0006c4c5) main_vradio_pane_g_ParamLimits

0xf82d,	// (0x0006c4c5) main_vradio_pane_g

0x5db6,	// (0x00062a4e) main_vradio_pane_t1_ParamLimits

0x5db6,	// (0x00062a4e) main_vradio_pane_t1

0x5dc8,	// (0x00062a60) main_vradio_pane_t2_ParamLimits

0x5dc8,	// (0x00062a60) main_vradio_pane_t2

0xd293,	// (0x00069f2b) main_vradio_pane_t3_ParamLimits

0xd293,	// (0x00069f2b) main_vradio_pane_t3

0x0002,

0xf832,	// (0x0006c4ca) main_vradio_pane_t_ParamLimits

0xf832,	// (0x0006c4ca) main_vradio_pane_t

0x5dda,	// (0x00062a72) vradio_rocker_control_pane_ParamLimits

0x5dda,	// (0x00062a72) vradio_rocker_control_pane

0x5de6,	// (0x00062a7e) vradio_station_info_pane_ParamLimits

0x5de6,	// (0x00062a7e) vradio_station_info_pane

0xd2a7,	// (0x00069f3f) vradio_frequency_info_pane_ParamLimits

0xd2a7,	// (0x00069f3f) vradio_frequency_info_pane

0xcc91,	// (0x00069929) vradio_station_info_pane_g1

0xd2b6,	// (0x00069f4e) vradio_station_info_pane_t1_ParamLimits

0xd2b6,	// (0x00069f4e) vradio_station_info_pane_t1

0xd2d8,	// (0x00069f70) vradio_station_info_pane_t2_ParamLimits

0xd2d8,	// (0x00069f70) vradio_station_info_pane_t2

0x0001,

0xf839,	// (0x0006c4d1) vradio_station_info_pane_t_ParamLimits

0xf839,	// (0x0006c4d1) vradio_station_info_pane_t

0xd2ea,	// (0x00069f82) vradio_tuning_pane

0xd2f2,	// (0x00069f8a) vradio_rocker_control_pane_g1

0xd2fa,	// (0x00069f92) vradio_rocker_control_pane_g2

0xd302,	// (0x00069f9a) vradio_rocker_control_pane_g3

0xd30a,	// (0x00069fa2) vradio_rocker_control_pane_g4

0xd312,	// (0x00069faa) vradio_rocker_control_pane_g5

0x0004,

0xf83e,	// (0x0006c4d6) vradio_rocker_control_pane_g

0x5df3,	// (0x00062a8b) vradio_frequency_info_pane_g1

0xd31a,	// (0x00069fb2) vradio_frequency_info_pane_t1_ParamLimits

0xd31a,	// (0x00069fb2) vradio_frequency_info_pane_t1

0x5dfd,	// (0x00062a95) vradio_tuning_pane_g1

0x5e08,	// (0x00062aa0) vradio_tuning_pane_t1

0x9caf,	// (0x00066947) area_side_right_pane_ParamLimits

0x9caf,	// (0x00066947) area_side_right_pane

0xc7fb,	// (0x00069493) status_small_pane_g1

0xc803,	// (0x0006949b) status_small_pane_g2

0xc80c,	// (0x000694a4) status_small_pane_g3

0xc815,	// (0x000694ad) status_small_pane_g4

0x0003,

0xf5fe,	// (0x0006c296) status_small_pane_g

0xc81e,	// (0x000694b6) status_small_pane_t1

0x9c89,	// (0x00066921) main_video3_pane

0xd32e,	// (0x00069fc6) cams_zoom_vslider_pane

0xd336,	// (0x00069fce) image3_wide_pane_ParamLimits

0xd336,	// (0x00069fce) image3_wide_pane

0xd350,	// (0x00069fe8) image3_wide_small_pane

0xd35c,	// (0x00069ff4) main_video3_pane_g1_ParamLimits

0xd35c,	// (0x00069ff4) main_video3_pane_g1

0xd378,	// (0x0006a010) main_video3_pane_g2_ParamLimits

0xd378,	// (0x0006a010) main_video3_pane_g2

0x0001,

0xf849,	// (0x0006c4e1) main_video3_pane_g_ParamLimits

0xf849,	// (0x0006c4e1) main_video3_pane_g

0xd394,	// (0x0006a02c) main_video3_pane_t1_ParamLimits

0xd394,	// (0x0006a02c) main_video3_pane_t1

0xd3bf,	// (0x0006a057) main_video3_pane_t2_ParamLimits

0xd3bf,	// (0x0006a057) main_video3_pane_t2

0xd3ec,	// (0x0006a084) main_video3_pane_t3_ParamLimits

0xd3ec,	// (0x0006a084) main_video3_pane_t3

0x0002,

0xf84e,	// (0x0006c4e6) main_video3_pane_t_ParamLimits

0xf84e,	// (0x0006c4e6) main_video3_pane_t

0xd419,	// (0x0006a0b1) cams_zoom_vslider_pane_g1

0xd422,	// (0x0006a0ba) cams_zoom_vslider_pane_g2

0x0001,

0xf855,	// (0x0006c4ed) cams_zoom_vslider_pane_g

0xd42a,	// (0x0006a0c2) small_slider_vertical_pane

0xcc91,	// (0x00069929) small_slider_vertical_pane_g1

0xcc91,	// (0x00069929) small_slider_vertical_pane_g2

0xd432,	// (0x0006a0ca) small_slider_vertical_pane_g3

0x0002,

0xf85a,	// (0x0006c4f2) small_slider_vertical_pane_g

0x9c89,	// (0x00066921) main_hwr_training_pane

0xd43b,	// (0x0006a0d3) hwr_training_instruct_pane_ParamLimits

0xd43b,	// (0x0006a0d3) hwr_training_instruct_pane

0x5e17,	// (0x00062aaf) hwr_training_navi_pane_ParamLimits

0x5e17,	// (0x00062aaf) hwr_training_navi_pane

0x5e31,	// (0x00062ac9) hwr_training_write_pane_ParamLimits

0x5e31,	// (0x00062ac9) hwr_training_write_pane

0x9c89,	// (0x00066921) bg_frame_shadow_pane

0xd472,	// (0x0006a10a) hwr_training_write_pane_g1

0xd47a,	// (0x0006a112) hwr_training_write_pane_g2

0xd482,	// (0x0006a11a) hwr_training_write_pane_g3

0xd48a,	// (0x0006a122) hwr_training_write_pane_g4

0xd492,	// (0x0006a12a) hwr_training_write_pane_g5

0xd49a,	// (0x0006a132) hwr_training_write_pane_g6

0xd4a2,	// (0x0006a13a) hwr_training_write_pane_g7

0x0006,

0xf861,	// (0x0006c4f9) hwr_training_write_pane_g

0x5e69,	// (0x00062b01) hwr_training_navi_pane_g1_ParamLimits

0x5e69,	// (0x00062b01) hwr_training_navi_pane_g1

0x5e7b,	// (0x00062b13) hwr_training_navi_pane_g2_ParamLimits

0x5e7b,	// (0x00062b13) hwr_training_navi_pane_g2

0x5e8d,	// (0x00062b25) hwr_training_navi_pane_g3_ParamLimits

0x5e8d,	// (0x00062b25) hwr_training_navi_pane_g3

0x5e9d,	// (0x00062b35) hwr_training_navi_pane_g4_ParamLimits

0x5e9d,	// (0x00062b35) hwr_training_navi_pane_g4

0x0004,

0xf870,	// (0x0006c508) hwr_training_navi_pane_g_ParamLimits

0xf870,	// (0x0006c508) hwr_training_navi_pane_g

0x5eb7,	// (0x00062b4f) hwr_training_navi_pane_t1

0x5ec5,	// (0x00062b5d) list_single_hwr_training_instruct_pane_ParamLimits

0x5ec5,	// (0x00062b5d) list_single_hwr_training_instruct_pane

0xd4aa,	// (0x0006a142) list_single_hwr_training_instruct_pane_t1

0xcbd1,	// (0x00069869) bg_frame_shadow_pane_g1

0xd4b9,	// (0x0006a151) bg_frame_shadow_pane_g2

0xd4c1,	// (0x0006a159) bg_frame_shadow_pane_g3

0xd4c9,	// (0x0006a161) bg_frame_shadow_pane_g4

0xd4d1,	// (0x0006a169) bg_frame_shadow_pane_g5

0xd4d9,	// (0x0006a171) bg_frame_shadow_pane_g6

0xd4e1,	// (0x0006a179) bg_frame_shadow_pane_g7

0xa81e,	// (0x000674b6) bg_frame_shadow_pane_g8

0x0007,

0xf87b,	// (0x0006c513) bg_frame_shadow_pane_g

0x9c89,	// (0x00066921) main_video_tele_dialer_pane

0x5ede,	// (0x00062b76) aid_size_cell_video_keypad_ParamLimits

0x5ede,	// (0x00062b76) aid_size_cell_video_keypad

0x5eee,	// (0x00062b86) grid_video_dialer_keypad_pane_ParamLimits

0x5eee,	// (0x00062b86) grid_video_dialer_keypad_pane

0x5f20,	// (0x00062bb8) video_down_pane_cp_ParamLimits

0x5f20,	// (0x00062bb8) video_down_pane_cp

0x5f48,	// (0x00062be0) cell_video_dialer_keypad_pane_ParamLimits

0x5f48,	// (0x00062be0) cell_video_dialer_keypad_pane

0xd4e9,	// (0x0006a181) bg_button_pane_cp08_ParamLimits

0xd4e9,	// (0x0006a181) bg_button_pane_cp08

0x5f5f,	// (0x00062bf7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f5f,	// (0x00062bf7) cell_video_dialer_keypad_pane_g1

0x5756,	// (0x000623ee) mup3_rocker2_pane_ParamLimits

0x5756,	// (0x000623ee) mup3_rocker2_pane

0xcc91,	// (0x00069929) mup3_rocker2_pane_g1

0x4618,	// (0x000612b0) main_dialer2_pane

0x9c89,	// (0x00066921) main_mp4_pane

0x5f9e,	// (0x00062c36) main_mp4_pane_g1_ParamLimits

0x5f9e,	// (0x00062c36) main_mp4_pane_g1

0x5fac,	// (0x00062c44) main_mp4_pane_g2_ParamLimits

0x5fac,	// (0x00062c44) main_mp4_pane_g2

0x5fba,	// (0x00062c52) main_mp4_pane_g3_ParamLimits

0x5fba,	// (0x00062c52) main_mp4_pane_g3

0x600d,	// (0x00062ca5) main_mp4_pane_g4_ParamLimits

0x600d,	// (0x00062ca5) main_mp4_pane_g4

0x6035,	// (0x00062ccd) main_mp4_pane_g5_ParamLimits

0x6035,	// (0x00062ccd) main_mp4_pane_g5

0x0005,

0xf89b,	// (0x0006c533) main_mp4_pane_g_ParamLimits

0xf89b,	// (0x0006c533) main_mp4_pane_g

0x6085,	// (0x00062d1d) main_mp4_pane_t1_ParamLimits

0x6085,	// (0x00062d1d) main_mp4_pane_t1

0x60e1,	// (0x00062d79) main_mp4_pane_t2_ParamLimits

0x60e1,	// (0x00062d79) main_mp4_pane_t2

0xd4f5,	// (0x0006a18d) main_mp4_pane_t3_ParamLimits

0xd4f5,	// (0x0006a18d) main_mp4_pane_t3

0x6133,	// (0x00062dcb) main_mp4_pane_t4_ParamLimits

0x6133,	// (0x00062dcb) main_mp4_pane_t4

0x0003,

0xf8a8,	// (0x0006c540) main_mp4_pane_t_ParamLimits

0xf8a8,	// (0x0006c540) main_mp4_pane_t

0x6173,	// (0x00062e0b) mp4_progress_pane_ParamLimits

0x6173,	// (0x00062e0b) mp4_progress_pane

0x61bd,	// (0x00062e55) mp4_rocker_pane_ParamLimits

0x61bd,	// (0x00062e55) mp4_rocker_pane

0xd51d,	// (0x0006a1b5) mp4_progress_pane_t1

0xd536,	// (0x0006a1ce) mp4_progress_pane_t2

0x0001,

0xf8b1,	// (0x0006c549) mp4_progress_pane_t

0xd54f,	// (0x0006a1e7) mup_progress_pane_cp04

0xdbfc,	// (0x0006a894) mp4_rocker_pane_g1

0x61df,	// (0x00062e77) aid_cell_size_keypad2_ParamLimits

0x61df,	// (0x00062e77) aid_cell_size_keypad2

0x61ef,	// (0x00062e87) dialer2_ne_pane_ParamLimits

0x61ef,	// (0x00062e87) dialer2_ne_pane

0x61fb,	// (0x00062e93) grid_dialer2_keypad_pane_ParamLimits

0x61fb,	// (0x00062e93) grid_dialer2_keypad_pane

0xdc06,	// (0x0006a89e) bg_popup_call_pane_cp07_ParamLimits

0xdc06,	// (0x0006a89e) bg_popup_call_pane_cp07

0x6209,	// (0x00062ea1) dialer2_ne_pane_t1_ParamLimits

0x6209,	// (0x00062ea1) dialer2_ne_pane_t1

0x622e,	// (0x00062ec6) cell_dialer2_keypad_pane_ParamLimits

0x622e,	// (0x00062ec6) cell_dialer2_keypad_pane

0xd56d,	// (0x0006a205) bg_button_pane_pane_cp04_ParamLimits

0xd56d,	// (0x0006a205) bg_button_pane_pane_cp04

0x6245,	// (0x00062edd) cell_dialer2_keypad_pane_g1_ParamLimits

0x6245,	// (0x00062edd) cell_dialer2_keypad_pane_g1

0x2206,	// (0x0005ee9e) aid_placing_vt_set_content_ParamLimits

0x2206,	// (0x0005ee9e) aid_placing_vt_set_content

0x222e,	// (0x0005eec6) aid_placing_vt_set_title_ParamLimits

0x222e,	// (0x0005eec6) aid_placing_vt_set_title

0x9c89,	// (0x00066921) main_image3_pane

0x62df,	// (0x00062f77) area_side_right_pane_cp01_ParamLimits

0x62df,	// (0x00062f77) area_side_right_pane_cp01

0x630e,	// (0x00062fa6) main_image3_pane_g1_ParamLimits

0x630e,	// (0x00062fa6) main_image3_pane_g1

0x631c,	// (0x00062fb4) main_image3_pane_g2_ParamLimits

0x631c,	// (0x00062fb4) main_image3_pane_g2

0x6335,	// (0x00062fcd) main_image3_pane_g3_ParamLimits

0x6335,	// (0x00062fcd) main_image3_pane_g3

0x634e,	// (0x00062fe6) main_image3_pane_g4_ParamLimits

0x634e,	// (0x00062fe6) main_image3_pane_g4

0x0003,

0xf8c0,	// (0x0006c558) main_image3_pane_g_ParamLimits

0xf8c0,	// (0x0006c558) main_image3_pane_g

0x6367,	// (0x00062fff) main_image3_pane_t1_ParamLimits

0x6367,	// (0x00062fff) main_image3_pane_t1

0x638c,	// (0x00063024) main_image3_pane_t2_ParamLimits

0x638c,	// (0x00063024) main_image3_pane_t2

0x63ab,	// (0x00063043) main_image3_pane_t3_ParamLimits

0x63ab,	// (0x00063043) main_image3_pane_t3

0x0003,

0xf8c9,	// (0x0006c561) main_image3_pane_t_ParamLimits

0xf8c9,	// (0x0006c561) main_image3_pane_t

0x1073,	// (0x0005dd0b) grid_sctrl_middle_pane_cp01_ParamLimits

0x1073,	// (0x0005dd0b) grid_sctrl_middle_pane_cp01

0x640c,	// (0x000630a4) cell_sctrl_middle_pane_cp01_ParamLimits

0x640c,	// (0x000630a4) cell_sctrl_middle_pane_cp01

0x641d,	// (0x000630b5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x641d,	// (0x000630b5) cell_sctrl_middle_pane_cp01_g1

0x9c89,	// (0x00066921) main_call4_pane

0x642a,	// (0x000630c2) aid_size_button_call4_ParamLimits

0x642a,	// (0x000630c2) aid_size_button_call4

0x645c,	// (0x000630f4) call4_windows_pane_ParamLimits

0x645c,	// (0x000630f4) call4_windows_pane

0x6478,	// (0x00063110) grid_call4_button_pane_ParamLimits

0x6478,	// (0x00063110) grid_call4_button_pane

0xd579,	// (0x0006a211) call4_windows_conf_pane

0x649c,	// (0x00063134) popup_call4_audio_first_window_ParamLimits

0x649c,	// (0x00063134) popup_call4_audio_first_window

0x64c8,	// (0x00063160) popup_call4_audio_second_window_ParamLimits

0x64c8,	// (0x00063160) popup_call4_audio_second_window

0xd5b6,	// (0x0006a24e) popup_call4_audio_wait_window_ParamLimits

0xd5b6,	// (0x0006a24e) popup_call4_audio_wait_window

0x64dc,	// (0x00063174) cell_call4_button_pane_ParamLimits

0x64dc,	// (0x00063174) cell_call4_button_pane

0x64ff,	// (0x00063197) bg_button_pane_cp09_ParamLimits

0x64ff,	// (0x00063197) bg_button_pane_cp09

0x650b,	// (0x000631a3) cell_call4_button_pane_g1_ParamLimits

0x650b,	// (0x000631a3) cell_call4_button_pane_g1

0x6518,	// (0x000631b0) cell_call4_button_pane_t1_ParamLimits

0x6518,	// (0x000631b0) cell_call4_button_pane_t1

0xd5fe,	// (0x0006a296) popup_call4_audio_conf_window_ParamLimits

0xd5fe,	// (0x0006a296) popup_call4_audio_conf_window

0x578b,	// (0x00062423) mup3_progress_pane_t1_ParamLimits

0x57aa,	// (0x00062442) mup3_progress_pane_t2_ParamLimits

0xcf3c,	// (0x00069bd4) mup3_progress_pane_t3_ParamLimits

0xf7a2,	// (0x0006c43a) mup3_progress_pane_t_ParamLimits

0xcf59,	// (0x00069bf1) mup_progress_pane_cp03_ParamLimits

0x5ca8,	// (0x00062940) mup3_control_keys_pane_g4_copy1

0x61a1,	// (0x00062e39) mp4_rocker2_pane_ParamLimits

0x61a1,	// (0x00062e39) mp4_rocker2_pane

0xd618,	// (0x0006a2b0) mp4_rocker2_pane_g1

0xd620,	// (0x0006a2b8) mp4_rocker2_pane_g2

0x652a,	// (0x000631c2) mp4_rocker2_pane_g3

0x6532,	// (0x000631ca) mp4_rocker2_pane_g4

0x653a,	// (0x000631d2) mp4_rocker2_pane_g5

0x0004,

0xf8d2,	// (0x0006c56a) mp4_rocker2_pane_g

0x9c89,	// (0x00066921) main_camera4_pane

0x9c89,	// (0x00066921) main_video4_pane

0x5efc,	// (0x00062b94) main_video_tele_dialer_pane_t1_ParamLimits

0x5efc,	// (0x00062b94) main_video_tele_dialer_pane_t1

0x5f0e,	// (0x00062ba6) main_video_tele_dialer_pane_t2_ParamLimits

0x5f0e,	// (0x00062ba6) main_video_tele_dialer_pane_t2

0x0001,

0xf88c,	// (0x0006c524) main_video_tele_dialer_pane_t_ParamLimits

0xf88c,	// (0x0006c524) main_video_tele_dialer_pane_t

0x655a,	// (0x000631f2) cam4_autofocus_pane_ParamLimits

0x655a,	// (0x000631f2) cam4_autofocus_pane

0x6572,	// (0x0006320a) cam4_image_uncrop_pane_ParamLimits

0x6572,	// (0x0006320a) cam4_image_uncrop_pane

0x658b,	// (0x00063223) cam4_indicators_pane_ParamLimits

0x658b,	// (0x00063223) cam4_indicators_pane

0x65a7,	// (0x0006323f) main_camera4_pane_g1_ParamLimits

0x65a7,	// (0x0006323f) main_camera4_pane_g1

0x65b3,	// (0x0006324b) main_camera4_pane_g2_ParamLimits

0x65b3,	// (0x0006324b) main_camera4_pane_g2

0x65b3,	// (0x0006324b) main_camera4_pane_g3_ParamLimits

0x65b3,	// (0x0006324b) main_camera4_pane_g3

0x65bf,	// (0x00063257) main_camera4_pane_g4_ParamLimits

0x65bf,	// (0x00063257) main_camera4_pane_g4

0x65cb,	// (0x00063263) main_camera4_pane_g5_ParamLimits

0x65cb,	// (0x00063263) main_camera4_pane_g5

0x0005,

0xf8dd,	// (0x0006c575) main_camera4_pane_g_ParamLimits

0xf8dd,	// (0x0006c575) main_camera4_pane_g

0x65e5,	// (0x0006327d) main_camera4_pane_t1_ParamLimits

0x65e5,	// (0x0006327d) main_camera4_pane_t1

0x662f,	// (0x000632c7) bg_tb_trans_pane_cp06

0x6645,	// (0x000632dd) cam4_indicators_pane_g1

0x6656,	// (0x000632ee) cam4_indicators_pane_g2

0x0002,

0xf8f8,	// (0x0006c590) cam4_indicators_pane_g

0x666e,	// (0x00063306) cam4_indicators_pane_t1

0x6698,	// (0x00063330) main_video4_pane_g1_ParamLimits

0x6698,	// (0x00063330) main_video4_pane_g1

0x66a4,	// (0x0006333c) main_video4_pane_g2_ParamLimits

0x66a4,	// (0x0006333c) main_video4_pane_g2

0x66b0,	// (0x00063348) main_video4_pane_g3_ParamLimits

0x66b0,	// (0x00063348) main_video4_pane_g3

0x66bc,	// (0x00063354) main_video4_pane_g4_ParamLimits

0x66bc,	// (0x00063354) main_video4_pane_g4

0x0004,

0xf8ff,	// (0x0006c597) main_video4_pane_g_ParamLimits

0xf8ff,	// (0x0006c597) main_video4_pane_g

0x66de,	// (0x00063376) vid4_indicators_pane_ParamLimits

0x66de,	// (0x00063376) vid4_indicators_pane

0x66fd,	// (0x00063395) video4_image_uncrop_cif_pane_ParamLimits

0x66fd,	// (0x00063395) video4_image_uncrop_cif_pane

0x670c,	// (0x000633a4) video4_image_uncrop_nhd_pane_ParamLimits

0x670c,	// (0x000633a4) video4_image_uncrop_nhd_pane

0x6572,	// (0x0006320a) video4_image_uncrop_vga_pane_ParamLimits

0x6572,	// (0x0006320a) video4_image_uncrop_vga_pane

0x671b,	// (0x000633b3) bg_tb_trans_pane_cp07

0x6733,	// (0x000633cb) vid4_indicators_pane_g1

0x6749,	// (0x000633e1) vid4_indicators_pane_g2

0x675d,	// (0x000633f5) vid4_indicators_pane_g3

0x0004,

0xf90a,	// (0x0006c5a2) vid4_indicators_pane_g

0x678e,	// (0x00063426) vid4_indicators_pane_t1

0x67a5,	// (0x0006343d) cam4_autofocus_pane_g1

0x67ad,	// (0x00063445) cam4_autofocus_pane_g2

0x67b5,	// (0x0006344d) cam4_autofocus_pane_g3

0x0002,

0xf915,	// (0x0006c5ad) cam4_autofocus_pane_g

0x67bd,	// (0x00063455) cam4_autofocus_pane_g3_copy1

0x5f2c,	// (0x00062bc4) video_down_pane_cp_t1

0x5f3a,	// (0x00062bd2) video_down_pane_cp_t2

0x0001,

0xf891,	// (0x0006c529) video_down_pane_cp_t

0x1073,	// (0x0005dd0b) popup_vitu2_window_ParamLimits

0x1073,	// (0x0005dd0b) popup_vitu2_window

0x67c5,	// (0x0006345d) aid_size_cell2_itu2_ParamLimits

0x67c5,	// (0x0006345d) aid_size_cell2_itu2

0x67e7,	// (0x0006347f) aid_size_cell_itu2_ParamLimits

0x67e7,	// (0x0006347f) aid_size_cell_itu2

0x682b,	// (0x000634c3) bg_popup_window_pane_cp09_ParamLimits

0x682b,	// (0x000634c3) bg_popup_window_pane_cp09

0x6839,	// (0x000634d1) field_vitu2_entry_pane_ParamLimits

0x6839,	// (0x000634d1) field_vitu2_entry_pane

0x6859,	// (0x000634f1) grid_vitu2_function_pane_ParamLimits

0x6859,	// (0x000634f1) grid_vitu2_function_pane

0x689d,	// (0x00063535) grid_vitu2_itu_pane_ParamLimits

0x689d,	// (0x00063535) grid_vitu2_itu_pane

0x6911,	// (0x000635a9) cell_vitu2_itu_pane_ParamLimits

0x6911,	// (0x000635a9) cell_vitu2_itu_pane

0x6928,	// (0x000635c0) cell_vitu2_function_pane_ParamLimits

0x6928,	// (0x000635c0) cell_vitu2_function_pane

0xd628,	// (0x0006a2c0) bg_popup_call_pane_cp08_ParamLimits

0xd628,	// (0x0006a2c0) bg_popup_call_pane_cp08

0xd641,	// (0x0006a2d9) field_vitu2_entry_pane_g1

0xd64d,	// (0x0006a2e5) field_vitu2_entry_pane_g2

0x0002,

0xf91c,	// (0x0006c5b4) field_vitu2_entry_pane_g

0xa241,	// (0x00066ed9) field_vitu2_entry_pane_t1_ParamLimits

0xa241,	// (0x00066ed9) field_vitu2_entry_pane_t1

0xa270,	// (0x00066f08) field_vitu2_entry_pane_t2_ParamLimits

0xa270,	// (0x00066f08) field_vitu2_entry_pane_t2

0x0001,

0xf923,	// (0x0006c5bb) field_vitu2_entry_pane_t_ParamLimits

0xf923,	// (0x0006c5bb) field_vitu2_entry_pane_t

0x696c,	// (0x00063604) bg_button_pane_cp010_ParamLimits

0x696c,	// (0x00063604) bg_button_pane_cp010

0x697a,	// (0x00063612) cell_vitu2_itu_pane_g1

0x6998,	// (0x00063630) cell_vitu2_itu_pane_t1_ParamLimits

0x6998,	// (0x00063630) cell_vitu2_itu_pane_t1

0x0d44,	// (0x0005d9dc) cell_vitu2_itu_pane_t2_ParamLimits

0x0d44,	// (0x0005d9dc) cell_vitu2_itu_pane_t2

0x0002,

0xf92d,	// (0x0006c5c5) cell_vitu2_itu_pane_t_ParamLimits

0xf92d,	// (0x0006c5c5) cell_vitu2_itu_pane_t

0x671b,	// (0x000633b3) bg_button_pane_cp011

0x69ea,	// (0x00063682) cell_vitu2_function_pane_g1

0x9c89,	// (0x00066921) main_myfav_hc_pane

0x63ed,	// (0x00063085) popup_image3_note_pane_ParamLimits

0x63ed,	// (0x00063085) popup_image3_note_pane

0x63fb,	// (0x00063093) popup_image3_tool_bar_pane_ParamLimits

0x63fb,	// (0x00063093) popup_image3_tool_bar_pane

0x0db2,	// (0x0005da4a) cell_vitu2_itu_pane_t3_ParamLimits

0x0db2,	// (0x0005da4a) cell_vitu2_itu_pane_t3

0x9c89,	// (0x00066921) bg_popup_trans_pane

0xd66f,	// (0x0006a307) grid_image3_tool_bar_pane

0xd679,	// (0x0006a311) bg_popup_trans_pane_g1

0xad41,	// (0x000679d9) bg_popup_trans_pane_g2

0xd681,	// (0x0006a319) bg_popup_trans_pane_g3

0xd689,	// (0x0006a321) bg_popup_trans_pane_g4

0xd691,	// (0x0006a329) bg_popup_trans_pane_g5

0xd699,	// (0x0006a331) bg_popup_trans_pane_g6

0xd6a1,	// (0x0006a339) bg_popup_trans_pane_g7

0xd6a9,	// (0x0006a341) bg_popup_trans_pane_g8

0xad21,	// (0x000679b9) bg_popup_trans_pane_g9

0x0008,

0xf934,	// (0x0006c5cc) bg_popup_trans_pane_g

0xd6b1,	// (0x0006a349) cell_image3_tool_bar_pane_ParamLimits

0xd6b1,	// (0x0006a349) cell_image3_tool_bar_pane

0xcc91,	// (0x00069929) cell_image3_tool_bar_pane_g1

0x9c89,	// (0x00066921) bg_popup_trans_pane_cp1

0xd6c7,	// (0x0006a35f) popup_image3_note_pane_t1

0xd6d5,	// (0x0006a36d) popup_image3_note_pane_t2

0xd6e3,	// (0x0006a37b) popup_image3_note_pane_t3

0x0002,

0xf947,	// (0x0006c5df) popup_image3_note_pane_t

0xd6f3,	// (0x0006a38b) popup_image3_note_pane_t3_copy1

0x69fe,	// (0x00063696) bg_myfav_hc_instruction_pane_ParamLimits

0x69fe,	// (0x00063696) bg_myfav_hc_instruction_pane

0x6a16,	// (0x000636ae) cell_myfav_contact_pane_ParamLimits

0x6a16,	// (0x000636ae) cell_myfav_contact_pane

0x6a30,	// (0x000636c8) cell_myfav_contact_pane_cp1_ParamLimits

0x6a30,	// (0x000636c8) cell_myfav_contact_pane_cp1

0x6a48,	// (0x000636e0) cell_myfav_contact_pane_cp2_ParamLimits

0x6a48,	// (0x000636e0) cell_myfav_contact_pane_cp2

0x6a60,	// (0x000636f8) cell_myfav_contact_pane_cp3_ParamLimits

0x6a60,	// (0x000636f8) cell_myfav_contact_pane_cp3

0x6a77,	// (0x0006370f) cell_myfav_contact_pane_cp4_ParamLimits

0x6a77,	// (0x0006370f) cell_myfav_contact_pane_cp4

0x6a8d,	// (0x00063725) cell_myfav_contact_pane_cp5_ParamLimits

0x6a8d,	// (0x00063725) cell_myfav_contact_pane_cp5

0x6aa1,	// (0x00063739) cell_myfav_contact_pane_cp6_ParamLimits

0x6aa1,	// (0x00063739) cell_myfav_contact_pane_cp6

0x6ab5,	// (0x0006374d) cell_myfav_contact_pane_cp7_ParamLimits

0x6ab5,	// (0x0006374d) cell_myfav_contact_pane_cp7

0xd701,	// (0x0006a399) listscroll_gen_pane_cp05

0x6acd,	// (0x00063765) main_myfav_hc_pane_g1_ParamLimits

0x6acd,	// (0x00063765) main_myfav_hc_pane_g1

0x6ae7,	// (0x0006377f) main_myfav_hc_pane_g2_ParamLimits

0x6ae7,	// (0x0006377f) main_myfav_hc_pane_g2

0x0002,

0xf94e,	// (0x0006c5e6) main_myfav_hc_pane_g_ParamLimits

0xf94e,	// (0x0006c5e6) main_myfav_hc_pane_g

0x6b19,	// (0x000637b1) main_myfav_hc_pane_t1_ParamLimits

0x6b19,	// (0x000637b1) main_myfav_hc_pane_t1

0xd70a,	// (0x0006a3a2) main_myfav_hc_pane_t2_ParamLimits

0xd70a,	// (0x0006a3a2) main_myfav_hc_pane_t2

0xd71c,	// (0x0006a3b4) main_myfav_hc_pane_t3_ParamLimits

0xd71c,	// (0x0006a3b4) main_myfav_hc_pane_t3

0x6b30,	// (0x000637c8) main_myfav_hc_pane_t4_ParamLimits

0x6b30,	// (0x000637c8) main_myfav_hc_pane_t4

0x0004,

0xf955,	// (0x0006c5ed) main_myfav_hc_pane_t_ParamLimits

0xf955,	// (0x0006c5ed) main_myfav_hc_pane_t

0xcc91,	// (0x00069929) bg_myfav_hc_instruction_pane_g1

0xd72e,	// (0x0006a3c6) cell_myfav_contact_pane_g1_ParamLimits

0xd72e,	// (0x0006a3c6) cell_myfav_contact_pane_g1

0xd72e,	// (0x0006a3c6) cell_myfav_contact_pane_g2_ParamLimits

0xd72e,	// (0x0006a3c6) cell_myfav_contact_pane_g2

0xd73a,	// (0x0006a3d2) cell_myfav_contact_pane_g3_ParamLimits

0xd73a,	// (0x0006a3d2) cell_myfav_contact_pane_g3

0xcf26,	// (0x00069bbe) cell_myfav_contact_pane_g4_ParamLimits

0xcf26,	// (0x00069bbe) cell_myfav_contact_pane_g4

0xd747,	// (0x0006a3df) cell_myfav_contact_pane_g5_ParamLimits

0xd747,	// (0x0006a3df) cell_myfav_contact_pane_g5

0x0004,

0xf960,	// (0x0006c5f8) cell_myfav_contact_pane_g_ParamLimits

0xf960,	// (0x0006c5f8) cell_myfav_contact_pane_g

0x6b01,	// (0x00063799) main_myfav_hc_pane_g3_ParamLimits

0x6b01,	// (0x00063799) main_myfav_hc_pane_g3

0x0f8f,	// (0x0005dc27) popup_adpt_find_window

0x6b5a,	// (0x000637f2) afind_page_pane_ParamLimits

0x6b5a,	// (0x000637f2) afind_page_pane

0x6b67,	// (0x000637ff) aid_size_cell_afind_ParamLimits

0x6b67,	// (0x000637ff) aid_size_cell_afind

0x6b81,	// (0x00063819) bg_popup_sub_pane_cp09_ParamLimits

0x6b81,	// (0x00063819) bg_popup_sub_pane_cp09

0x6b8e,	// (0x00063826) find_pane_cp01_ParamLimits

0x6b8e,	// (0x00063826) find_pane_cp01

0xd753,	// (0x0006a3eb) grid_afind_control_pane_ParamLimits

0xd753,	// (0x0006a3eb) grid_afind_control_pane

0x6b9b,	// (0x00063833) grid_afind_pane_ParamLimits

0x6b9b,	// (0x00063833) grid_afind_pane

0x6bb7,	// (0x0006384f) cell_afind_pane_ParamLimits

0x6bb7,	// (0x0006384f) cell_afind_pane

0xcc91,	// (0x00069929) afind_page_pane_g1

0x6c03,	// (0x0006389b) afind_page_pane_g2

0x6c0c,	// (0x000638a4) afind_page_pane_g3

0x0002,

0xf96b,	// (0x0006c603) afind_page_pane_g

0x6c15,	// (0x000638ad) afind_page_pane_t1

0xd767,	// (0x0006a3ff) cell_afind_grid_control_pane_ParamLimits

0xd767,	// (0x0006a3ff) cell_afind_grid_control_pane

0xd56d,	// (0x0006a205) bg_button_pane_cp69_ParamLimits

0xd56d,	// (0x0006a205) bg_button_pane_cp69

0x6c35,	// (0x000638cd) cell_afind_pane_g1_ParamLimits

0x6c35,	// (0x000638cd) cell_afind_pane_g1

0x6c42,	// (0x000638da) cell_afind_pane_t1_ParamLimits

0x6c42,	// (0x000638da) cell_afind_pane_t1

0xab36,	// (0x000677ce) bg_button_pane_cp72

0xd776,	// (0x0006a40e) cell_afind_grid_control_pane_g1

0x4193,	// (0x00060e2b) aid_image_placing_area_ParamLimits

0x4193,	// (0x00060e2b) aid_image_placing_area

0xd239,	// (0x00069ed1) field_vitu_entry_pane_g1_ParamLimits

0xd239,	// (0x00069ed1) field_vitu_entry_pane_g1

0xd245,	// (0x00069edd) field_vitu_entry_pane_g2_ParamLimits

0xd245,	// (0x00069edd) field_vitu_entry_pane_g2

0x0001,

0xf81c,	// (0x0006c4b4) field_vitu_entry_pane_g_ParamLimits

0xf81c,	// (0x0006c4b4) field_vitu_entry_pane_g

0x5d32,	// (0x000629ca) cell_vitu_itu_pane_g1_ParamLimits

0x5d82,	// (0x00062a1a) cell_vitu_itu_pane_t3_ParamLimits

0x5d82,	// (0x00062a1a) cell_vitu_itu_pane_t3

0xd51d,	// (0x0006a1b5) mp4_progress_pane_t1_ParamLimits

0xd536,	// (0x0006a1ce) mp4_progress_pane_t2_ParamLimits

0xf8b1,	// (0x0006c549) mp4_progress_pane_t_ParamLimits

0xd54f,	// (0x0006a1e7) mup_progress_pane_cp04_ParamLimits

0x6b44,	// (0x000637dc) main_myfav_hc_pane_t5_ParamLimits

0x6b44,	// (0x000637dc) main_myfav_hc_pane_t5

0x9ca7,	// (0x0006693f) aid_zoom_text_primary

0x0f8f,	// (0x0005dc27) popup_adpt_find_window_ParamLimits

0xa227,	// (0x00066ebf) main_cam_set_pane

0x6599,	// (0x00063231) cam4_zoom_pane_ParamLimits

0x6599,	// (0x00063231) cam4_zoom_pane

0x6c54,	// (0x000638ec) main_cam_set_pane_g1_ParamLimits

0x6c54,	// (0x000638ec) main_cam_set_pane_g1

0x6c62,	// (0x000638fa) main_cam_set_pane_g2_ParamLimits

0x6c62,	// (0x000638fa) main_cam_set_pane_g2

0x0001,

0xf972,	// (0x0006c60a) main_cam_set_pane_g_ParamLimits

0xf972,	// (0x0006c60a) main_cam_set_pane_g

0x6c6e,	// (0x00063906) main_cam_set_pane_t1_ParamLimits

0x6c6e,	// (0x00063906) main_cam_set_pane_t1

0x6c8a,	// (0x00063922) main_cset_listscroll_pane_ParamLimits

0x6c8a,	// (0x00063922) main_cset_listscroll_pane

0x6cb9,	// (0x00063951) main_cset_slider_pane_ParamLimits

0x6cb9,	// (0x00063951) main_cset_slider_pane

0xd787,	// (0x0006a41f) main_cset_list_pane_ParamLimits

0xd787,	// (0x0006a41f) main_cset_list_pane

0xd797,	// (0x0006a42f) scroll_pane_cp028

0x6cda,	// (0x00063972) aid_area_touch_slider

0x6cf6,	// (0x0006398e) cset_slider_pane

0x6d20,	// (0x000639b8) main_cset_slider_pane_g1

0x6d35,	// (0x000639cd) main_cset_slider_pane_g2

0x0011,

0xf977,	// (0x0006c60f) main_cset_slider_pane_g

0xd7d0,	// (0x0006a468) main_cset_slider_pane_t1

0x6df1,	// (0x00063a89) main_cset_slider_pane_t2

0x6e0b,	// (0x00063aa3) main_cset_slider_pane_t3

0x6e25,	// (0x00063abd) main_cset_slider_pane_t4

0x6e3f,	// (0x00063ad7) main_cset_slider_pane_t5

0x6e59,	// (0x00063af1) main_cset_slider_pane_t6

0x6e6e,	// (0x00063b06) main_cset_slider_pane_t7

0x000e,

0xf99c,	// (0x0006c634) main_cset_slider_pane_t

0x6f72,	// (0x00063c0a) cset_list_set_pane_ParamLimits

0x6f72,	// (0x00063c0a) cset_list_set_pane

0x6f83,	// (0x00063c1b) aid_position_infowindow_above

0x6f8b,	// (0x00063c23) aid_position_infowindow_below

0x6f93,	// (0x00063c2b) cset_list_set_pane_g1_ParamLimits

0x6f93,	// (0x00063c2b) cset_list_set_pane_g1

0x6f9f,	// (0x00063c37) cset_list_set_pane_g3_ParamLimits

0x6f9f,	// (0x00063c37) cset_list_set_pane_g3

0x0001,

0xf9bb,	// (0x0006c653) cset_list_set_pane_g_ParamLimits

0xf9bb,	// (0x0006c653) cset_list_set_pane_g

0x6fae,	// (0x00063c46) cset_list_set_pane_t1_ParamLimits

0x6fae,	// (0x00063c46) cset_list_set_pane_t1

0xa227,	// (0x00066ebf) list_highlight_pane_cp021_ParamLimits

0xa227,	// (0x00066ebf) list_highlight_pane_cp021

0xb56d,	// (0x00068205) cset_slider_pane_g1

0xb57f,	// (0x00068217) cset_slider_pane_g2

0xb576,	// (0x0006820e) cset_slider_pane_g3

0x0002,

0xf9c0,	// (0x0006c658) cset_slider_pane_g

0x6fc3,	// (0x00063c5b) aid_area_touch_cam4_zoom

0x6fcb,	// (0x00063c63) cam4_zoom_cont_pane

0x6fd3,	// (0x00063c6b) cam4_zoom_pane_g1

0x6fdb,	// (0x00063c73) cam4_zoom_pane_g2

0x6fe3,	// (0x00063c7b) cam4_zoom_pane_g3

0x0002,

0xf9c7,	// (0x0006c65f) cam4_zoom_pane_g

0x6feb,	// (0x00063c83) cam4_zoom_cont_pane_g1

0x6ff4,	// (0x00063c8c) cam4_zoom_cont_pane_g2

0x6ffd,	// (0x00063c95) cam4_zoom_cont_pane_g3

0x0002,

0xf9ce,	// (0x0006c666) cam4_zoom_cont_pane_g

0x6444,	// (0x000630dc) call4_image_pane_ParamLimits

0x6444,	// (0x000630dc) call4_image_pane

0xd579,	// (0x0006a211) call4_windows_conf_pane_ParamLimits

0xd594,	// (0x0006a22c) popup_call4_audio_in_window_ParamLimits

0xd594,	// (0x0006a22c) popup_call4_audio_in_window

0x9c89,	// (0x00066921) bg_popup_call2_act_pane_cp02

0xd5f6,	// (0x0006a28e) call4_list_conf_pane

0xcc91,	// (0x00069929) call4_image_pane_g1

0xcc91,	// (0x00069929) call4_image_pane_g2

0x0001,

0xf6e2,	// (0x0006c37a) call4_image_pane_g

0xd870,	// (0x0006a508) list_single_graphic_popup_conf4_pane_ParamLimits

0xd870,	// (0x0006a508) list_single_graphic_popup_conf4_pane

0x9c89,	// (0x00066921) list_highlight_pane_cp022

0xd885,	// (0x0006a51d) list_single_graphic_popup_conf4_pane_g1

0xb259,	// (0x00067ef1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d5,	// (0x0006c66d) list_single_graphic_popup_conf4_pane_g

0xd88d,	// (0x0006a525) list_single_graphic_popup_conf4_pane_t1

0x2388,	// (0x0005f020) popup_vtel_slider_window_ParamLimits

0x2388,	// (0x0005f020) popup_vtel_slider_window

0xd55b,	// (0x0006a1f3) dialer2_ne_pane_t2_ParamLimits

0xd55b,	// (0x0006a1f3) dialer2_ne_pane_t2

0x0001,

0xf8b6,	// (0x0006c54e) dialer2_ne_pane_t_ParamLimits

0xf8b6,	// (0x0006c54e) dialer2_ne_pane_t

0xa227,	// (0x00066ebf) bg_popup_sub_pane_cp010_ParamLimits

0xa227,	// (0x00066ebf) bg_popup_sub_pane_cp010

0x7006,	// (0x00063c9e) popup_vtel_slider_window_g1_ParamLimits

0x7006,	// (0x00063c9e) popup_vtel_slider_window_g1

0x7012,	// (0x00063caa) popup_vtel_slider_window_g2_ParamLimits

0x7012,	// (0x00063caa) popup_vtel_slider_window_g2

0x0003,

0xf9da,	// (0x0006c672) popup_vtel_slider_window_g_ParamLimits

0xf9da,	// (0x0006c672) popup_vtel_slider_window_g

0x705a,	// (0x00063cf2) vtel_slider_pane_ParamLimits

0x705a,	// (0x00063cf2) vtel_slider_pane

0x7069,	// (0x00063d01) vtel_slider_pane_g1_ParamLimits

0x7069,	// (0x00063d01) vtel_slider_pane_g1

0x7076,	// (0x00063d0e) vtel_slider_pane_g2_ParamLimits

0x7076,	// (0x00063d0e) vtel_slider_pane_g2

0x7083,	// (0x00063d1b) vtel_slider_pane_g3_ParamLimits

0x7083,	// (0x00063d1b) vtel_slider_pane_g3

0x7069,	// (0x00063d01) vtel_slider_pane_g4_ParamLimits

0x7069,	// (0x00063d01) vtel_slider_pane_g4

0x7090,	// (0x00063d28) vtel_slider_pane_g5_ParamLimits

0x7090,	// (0x00063d28) vtel_slider_pane_g5

0x0004,

0xf9e3,	// (0x0006c67b) vtel_slider_pane_g_ParamLimits

0xf9e3,	// (0x0006c67b) vtel_slider_pane_g

0x9c89,	// (0x00066921) main_gallery2_pane

0x680d,	// (0x000634a5) aid_size_row_itut2_dropdow_list_ParamLimits

0x680d,	// (0x000634a5) aid_size_row_itut2_dropdow_list

0x687b,	// (0x00063513) grid_vitu2_function_top_pane_ParamLimits

0x687b,	// (0x00063513) grid_vitu2_function_top_pane

0x68cd,	// (0x00063565) popup_vitu2_dropdown_list_window_ParamLimits

0x68cd,	// (0x00063565) popup_vitu2_dropdown_list_window

0x68ed,	// (0x00063585) popup_vitu2_match_list_window

0x70ab,	// (0x00063d43) cell_vitu2_function_top_pane_ParamLimits

0x70ab,	// (0x00063d43) cell_vitu2_function_top_pane

0x70cb,	// (0x00063d63) cell_vitu2_function_top_pane_cp01_ParamLimits

0x70cb,	// (0x00063d63) cell_vitu2_function_top_pane_cp01

0x70e9,	// (0x00063d81) cell_vitu2_function_top_wide_pane_ParamLimits

0x70e9,	// (0x00063d81) cell_vitu2_function_top_wide_pane

0x671b,	// (0x000633b3) bg_button_pane_cp012

0x7107,	// (0x00063d9f) cell_vitu2_function_top_pane_g1

0x7116,	// (0x00063dae) bg_button_pane_cp013_ParamLimits

0x7116,	// (0x00063dae) bg_button_pane_cp013

0x7132,	// (0x00063dca) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7132,	// (0x00063dca) cell_vitu2_function_top_wide_pane_g1

0x714a,	// (0x00063de2) bg_popup_sub_pane_cp20

0x7158,	// (0x00063df0) list_vitu2_match_list_pane

0xd679,	// (0x0006a311) bg_popup_sub_pane_cp20_g1

0xd681,	// (0x0006a319) bg_popup_sub_pane_cp20_g2

0xad41,	// (0x000679d9) bg_popup_sub_pane_cp20_g3

0xd689,	// (0x0006a321) bg_popup_sub_pane_cp20_g4

0xad21,	// (0x000679b9) bg_popup_sub_pane_cp20_g5

0xd8a3,	// (0x0006a53b) bg_popup_sub_pane_cp20_g6

0xd699,	// (0x0006a331) bg_popup_sub_pane_cp20_g7

0xd6a1,	// (0x0006a339) bg_popup_sub_pane_cp20_g8

0xd6a9,	// (0x0006a341) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ee,	// (0x0006c686) bg_popup_sub_pane_cp20_g

0x7170,	// (0x00063e08) list_vitu2_match_list_item_pane_ParamLimits

0x7170,	// (0x00063e08) list_vitu2_match_list_item_pane

0x7182,	// (0x00063e1a) list_vitu2_match_list_item_pane_t1

0x13df,	// (0x0005e077) bg_popup_sub_pane_cp21

0x71d4,	// (0x00063e6c) grid_vitu2_dropdown_list_pane

0x71dc,	// (0x00063e74) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71dc,	// (0x00063e74) cell_vitu2_dropdown_list_char_pane

0x7201,	// (0x00063e99) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7201,	// (0x00063e99) cell_vitu2_dropdown_list_ctrl_pane

0xd8ab,	// (0x0006a543) cell_vitu2_dropdown_list_char_pane_g1

0xd8b4,	// (0x0006a54c) cell_vitu2_dropdown_list_char_pane_g2

0xd8bd,	// (0x0006a555) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0b,	// (0x0006c6a3) cell_vitu2_dropdown_list_char_pane_g

0x722f,	// (0x00063ec7) cell_vitu2_dropdown_list_char_pane_t1

0x723d,	// (0x00063ed5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x723d,	// (0x00063ed5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x724d,	// (0x00063ee5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x724d,	// (0x00063ee5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x725e,	// (0x00063ef6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x725e,	// (0x00063ef6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x726e,	// (0x00063f06) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x726e,	// (0x00063f06) cell_vitu2_dropdown_list_ctrl_pane_g4

0x662f,	// (0x000632c7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x662f,	// (0x000632c7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa12,	// (0x0006c6aa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa12,	// (0x0006c6aa) cell_vitu2_dropdown_list_ctrl_pane_g

0x7287,	// (0x00063f1f) aid_size_cell_gallery2_ParamLimits

0x7287,	// (0x00063f1f) aid_size_cell_gallery2

0x7295,	// (0x00063f2d) grid_gallery2_pane_ParamLimits

0x7295,	// (0x00063f2d) grid_gallery2_pane

0x72a4,	// (0x00063f3c) scroll_pane_cp029_ParamLimits

0x72a4,	// (0x00063f3c) scroll_pane_cp029

0x72b0,	// (0x00063f48) cell_gallery2_pane_ParamLimits

0x72b0,	// (0x00063f48) cell_gallery2_pane

0xd8c6,	// (0x0006a55e) cell_gallery2_pane_g2

0x72da,	// (0x00063f72) cell_gallery2_pane_g3

0xd8d0,	// (0x0006a568) cell_gallery2_pane_g4

0xd8d8,	// (0x0006a570) cell_gallery2_pane_g5

0xb427,	// (0x000680bf) grid_highlight_pane_cp10

0x68ed,	// (0x00063585) popup_vitu2_match_list_window_ParamLimits

0x6901,	// (0x00063599) popup_vitu2_query_window_ParamLimits

0x6901,	// (0x00063599) popup_vitu2_query_window

0x13df,	// (0x0005e077) bg_vitu2_candi_button_pane

0xd8ab,	// (0x0006a543) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8b4,	// (0x0006a54c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8bd,	// (0x0006a555) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x72e2,	// (0x00063f7a) bg_button_pane_cp015

0x72f4,	// (0x00063f8c) bg_button_pane_cp016

0x7307,	// (0x00063f9f) bg_button_pane_cp017

0xc840,	// (0x000694d8) bg_popup_sub_pane_cp22

0xd8e0,	// (0x0006a578) popup_vitu2_query_window_g1

0x734c,	// (0x00063fe4) popup_vitu2_query_window_g2

0x0002,

0xfa1d,	// (0x0006c6b5) popup_vitu2_query_window_g

0x7369,	// (0x00064001) popup_vitu2_query_window_t1_ParamLimits

0x7369,	// (0x00064001) popup_vitu2_query_window_t1

0x739c,	// (0x00064034) popup_vitu2_query_window_t2_ParamLimits

0x739c,	// (0x00064034) popup_vitu2_query_window_t2

0x73ae,	// (0x00064046) popup_vitu2_query_window_t3_ParamLimits

0x73ae,	// (0x00064046) popup_vitu2_query_window_t3

0x73d6,	// (0x0006406e) popup_vitu2_query_window_t4_ParamLimits

0x73d6,	// (0x0006406e) popup_vitu2_query_window_t4

0x73f9,	// (0x00064091) popup_vitu2_query_window_t5_ParamLimits

0x73f9,	// (0x00064091) popup_vitu2_query_window_t5

0x0006,

0xfa24,	// (0x0006c6bc) popup_vitu2_query_window_t_ParamLimits

0xfa24,	// (0x0006c6bc) popup_vitu2_query_window_t

0xd77f,	// (0x0006a417) main_cset_text_pane

0x6cda,	// (0x00063972) aid_area_touch_slider_ParamLimits

0x6cf6,	// (0x0006398e) cset_slider_pane_ParamLimits

0x6d20,	// (0x000639b8) main_cset_slider_pane_g1_ParamLimits

0x6d35,	// (0x000639cd) main_cset_slider_pane_g2_ParamLimits

0xd7a0,	// (0x0006a438) main_cset_slider_pane_g3_ParamLimits

0xd7a0,	// (0x0006a438) main_cset_slider_pane_g3

0x6d4a,	// (0x000639e2) main_cset_slider_pane_g4_ParamLimits

0x6d4a,	// (0x000639e2) main_cset_slider_pane_g4

0x6d59,	// (0x000639f1) main_cset_slider_pane_g5_ParamLimits

0x6d59,	// (0x000639f1) main_cset_slider_pane_g5

0x6d65,	// (0x000639fd) main_cset_slider_pane_g6_ParamLimits

0x6d65,	// (0x000639fd) main_cset_slider_pane_g6

0xf977,	// (0x0006c60f) main_cset_slider_pane_g_ParamLimits

0xd7d0,	// (0x0006a468) main_cset_slider_pane_t1_ParamLimits

0x6df1,	// (0x00063a89) main_cset_slider_pane_t2_ParamLimits

0x6e0b,	// (0x00063aa3) main_cset_slider_pane_t3_ParamLimits

0x6e25,	// (0x00063abd) main_cset_slider_pane_t4_ParamLimits

0x6e3f,	// (0x00063ad7) main_cset_slider_pane_t5_ParamLimits

0x6e59,	// (0x00063af1) main_cset_slider_pane_t6_ParamLimits

0x6e6e,	// (0x00063b06) main_cset_slider_pane_t7_ParamLimits

0x6e98,	// (0x00063b30) main_cset_slider_pane_t8_ParamLimits

0x6e98,	// (0x00063b30) main_cset_slider_pane_t8

0x6ec0,	// (0x00063b58) main_cset_slider_pane_t9_ParamLimits

0x6ec0,	// (0x00063b58) main_cset_slider_pane_t9

0x6ee8,	// (0x00063b80) main_cset_slider_pane_t10_ParamLimits

0x6ee8,	// (0x00063b80) main_cset_slider_pane_t10

0x6f10,	// (0x00063ba8) main_cset_slider_pane_t11_ParamLimits

0x6f10,	// (0x00063ba8) main_cset_slider_pane_t11

0x6f38,	// (0x00063bd0) main_cset_slider_pane_t12_ParamLimits

0x6f38,	// (0x00063bd0) main_cset_slider_pane_t12

0x6f55,	// (0x00063bed) main_cset_slider_pane_t13_ParamLimits

0x6f55,	// (0x00063bed) main_cset_slider_pane_t13

0xf99c,	// (0x0006c634) main_cset_slider_pane_t_ParamLimits

0x9c89,	// (0x00066921) bg_popup_sub_pane_cp011

0xd8ec,	// (0x0006a584) main_cset_text_pane_g1

0xd8f4,	// (0x0006a58c) main_cset_text_pane_t1

0xd902,	// (0x0006a59a) main_cset_text_pane_t2

0xd910,	// (0x0006a5a8) main_cset_text_pane_t3

0xd91e,	// (0x0006a5b6) main_cset_text_pane_t4

0xd92c,	// (0x0006a5c4) main_cset_text_pane_t5

0xd93a,	// (0x0006a5d2) main_cset_text_pane_t6

0xd948,	// (0x0006a5e0) main_cset_text_pane_t7

0x0006,

0xfa33,	// (0x0006c6cb) main_cset_text_pane_t

0x9c89,	// (0x00066921) main_cam4_burst_pane

0x9c89,	// (0x00066921) main_cam5_pane

0x6c23,	// (0x000638bb) bg_button_pane_cp019

0x6c2c,	// (0x000638c4) bg_button_pane_cp020

0xd7ac,	// (0x0006a444) main_cset_slider_pane_g7_ParamLimits

0xd7ac,	// (0x0006a444) main_cset_slider_pane_g7

0xd7b8,	// (0x0006a450) main_cset_slider_pane_g8_ParamLimits

0xd7b8,	// (0x0006a450) main_cset_slider_pane_g8

0x6d79,	// (0x00063a11) main_cset_slider_pane_g9_ParamLimits

0x6d79,	// (0x00063a11) main_cset_slider_pane_g9

0x6d85,	// (0x00063a1d) main_cset_slider_pane_g10_ParamLimits

0x6d85,	// (0x00063a1d) main_cset_slider_pane_g10

0x6d91,	// (0x00063a29) main_cset_slider_pane_g11_ParamLimits

0x6d91,	// (0x00063a29) main_cset_slider_pane_g11

0x6d9d,	// (0x00063a35) main_cset_slider_pane_g12_ParamLimits

0x6d9d,	// (0x00063a35) main_cset_slider_pane_g12

0x6da9,	// (0x00063a41) main_cset_slider_pane_g13_ParamLimits

0x6da9,	// (0x00063a41) main_cset_slider_pane_g13

0x6db5,	// (0x00063a4d) main_cset_slider_pane_g14_ParamLimits

0x6db5,	// (0x00063a4d) main_cset_slider_pane_g14

0x6dc1,	// (0x00063a59) main_cset_slider_pane_g15_ParamLimits

0x6dc1,	// (0x00063a59) main_cset_slider_pane_g15

0xd7fe,	// (0x0006a496) main_cset_slider_pane_t14_ParamLimits

0xd7fe,	// (0x0006a496) main_cset_slider_pane_t14

0xd837,	// (0x0006a4cf) main_cset_slider_pane_t15_ParamLimits

0xd837,	// (0x0006a4cf) main_cset_slider_pane_t15

0x7472,	// (0x0006410a) aid_cam4_burst_size_cell_ParamLimits

0x7472,	// (0x0006410a) aid_cam4_burst_size_cell

0x748e,	// (0x00064126) grid_cam4_burst_pane_ParamLimits

0x748e,	// (0x00064126) grid_cam4_burst_pane

0x74c0,	// (0x00064158) linegrid_cam4_burst_pane_ParamLimits

0x74c0,	// (0x00064158) linegrid_cam4_burst_pane

0x74de,	// (0x00064176) scroll_pane_cp30_ParamLimits

0x74de,	// (0x00064176) scroll_pane_cp30

0x74ea,	// (0x00064182) cell_cam4_burst_pane_ParamLimits

0x74ea,	// (0x00064182) cell_cam4_burst_pane

0xd956,	// (0x0006a5ee) linegrid_cam4_burst_pane_g1_ParamLimits

0xd956,	// (0x0006a5ee) linegrid_cam4_burst_pane_g1

0x752a,	// (0x000641c2) linegrid_cam4_burst_pane_g2_ParamLimits

0x752a,	// (0x000641c2) linegrid_cam4_burst_pane_g2

0xd963,	// (0x0006a5fb) linegrid_cam4_burst_pane_g3_ParamLimits

0xd963,	// (0x0006a5fb) linegrid_cam4_burst_pane_g3

0x0002,

0xfa42,	// (0x0006c6da) linegrid_cam4_burst_pane_g_ParamLimits

0xfa42,	// (0x0006c6da) linegrid_cam4_burst_pane_g

0x753b,	// (0x000641d3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x753b,	// (0x000641d3) linegrid_cam4_burst_pane_g3_copy1

0xd970,	// (0x0006a608) linegrid_cam4_burst_pane_g4_ParamLimits

0xd970,	// (0x0006a608) linegrid_cam4_burst_pane_g4

0x7555,	// (0x000641ed) linegrid_cam4_burst_pane_g5_ParamLimits

0x7555,	// (0x000641ed) linegrid_cam4_burst_pane_g5

0x7566,	// (0x000641fe) linegrid_cam4_burst_pane_g6_ParamLimits

0x7566,	// (0x000641fe) linegrid_cam4_burst_pane_g6

0xd97d,	// (0x0006a615) linegrid_cam4_burst_pane_g7_ParamLimits

0xd97d,	// (0x0006a615) linegrid_cam4_burst_pane_g7

0x757d,	// (0x00064215) cell_cam4_burst_pane_g1

0xd996,	// (0x0006a62e) main_cam5_pane_t1_ParamLimits

0xd996,	// (0x0006a62e) main_cam5_pane_t1

0xd9a8,	// (0x0006a640) main_cam5_pane_t2_ParamLimits

0xd9a8,	// (0x0006a640) main_cam5_pane_t2

0xd9ba,	// (0x0006a652) main_cam5_pane_t3_ParamLimits

0xd9ba,	// (0x0006a652) main_cam5_pane_t3

0xd9cc,	// (0x0006a664) main_cam5_pane_t4_ParamLimits

0xd9cc,	// (0x0006a664) main_cam5_pane_t4

0xd9e4,	// (0x0006a67c) main_cam5_pane_t5_ParamLimits

0xd9e4,	// (0x0006a67c) main_cam5_pane_t5

0xd9f8,	// (0x0006a690) main_cam5_pane_t6_ParamLimits

0xd9f8,	// (0x0006a690) main_cam5_pane_t6

0xda0c,	// (0x0006a6a4) main_cam5_pane_t7_ParamLimits

0xda0c,	// (0x0006a6a4) main_cam5_pane_t7

0xda32,	// (0x0006a6ca) main_cam5_pane_t8_ParamLimits

0xda32,	// (0x0006a6ca) main_cam5_pane_t8

0xda50,	// (0x0006a6e8) main_cam5_pane_t9_ParamLimits

0xda50,	// (0x0006a6e8) main_cam5_pane_t9

0xda62,	// (0x0006a6fa) main_cam5_pane_t10_ParamLimits

0xda62,	// (0x0006a6fa) main_cam5_pane_t10

0xda74,	// (0x0006a70c) main_cam5_pane_t11_ParamLimits

0xda74,	// (0x0006a70c) main_cam5_pane_t11

0xda88,	// (0x0006a720) main_cam5_pane_t12_ParamLimits

0xda88,	// (0x0006a720) main_cam5_pane_t12

0xda9f,	// (0x0006a737) main_cam5_pane_t13_ParamLimits

0xda9f,	// (0x0006a737) main_cam5_pane_t13

0x000c,

0xfa4e,	// (0x0006c6e6) main_cam5_pane_t_ParamLimits

0xfa4e,	// (0x0006c6e6) main_cam5_pane_t

0x103c,	// (0x0005dcd4) popup_scut_keymap_window_ParamLimits

0x103c,	// (0x0005dcd4) popup_scut_keymap_window

0x7590,	// (0x00064228) aid_size_cell_brow_shortcut

0xb427,	// (0x000680bf) bg_popup_window_pane_cp010

0x759c,	// (0x00064234) grid_scut_pane

0x75a8,	// (0x00064240) cell_scut_pane_ParamLimits

0x75a8,	// (0x00064240) cell_scut_pane

0x75c3,	// (0x0006425b) cell_scut_pane_g1

0xdac2,	// (0x0006a75a) cell_scut_pane_t1

0xdad1,	// (0x0006a769) cell_scut_pane_t2

0x75cc,	// (0x00064264) cell_scut_pane_t3

0x0002,

0xfa69,	// (0x0006c701) cell_scut_pane_t

0x53ac,	// (0x00062044) main_mup3_pane_g8_ParamLimits

0x53ac,	// (0x00062044) main_mup3_pane_g8

0x681b,	// (0x000634b3) area_vitu2_query_pane_ParamLimits

0x681b,	// (0x000634b3) area_vitu2_query_pane

0x731a,	// (0x00063fb2) input_focus_pane_cp08

0xdae0,	// (0x0006a778) area_vitu2_query_pane_g1

0x75da,	// (0x00064272) area_vitu2_query_pane_g2

0x0001,

0xfa70,	// (0x0006c708) area_vitu2_query_pane_g

0x75eb,	// (0x00064283) area_vitu2_query_pane_t1_ParamLimits

0x75eb,	// (0x00064283) area_vitu2_query_pane_t1

0x75ff,	// (0x00064297) area_vitu2_query_pane_t2_ParamLimits

0x75ff,	// (0x00064297) area_vitu2_query_pane_t2

0x7613,	// (0x000642ab) area_vitu2_query_pane_t3_ParamLimits

0x7613,	// (0x000642ab) area_vitu2_query_pane_t3

0xa28d,	// (0x00066f25) area_vitu2_query_pane_t4_ParamLimits

0xa28d,	// (0x00066f25) area_vitu2_query_pane_t4

0xa2b5,	// (0x00066f4d) area_vitu2_query_pane_t5_ParamLimits

0xa2b5,	// (0x00066f4d) area_vitu2_query_pane_t5

0xa2dd,	// (0x00066f75) area_vitu2_query_pane_t6_ParamLimits

0xa2dd,	// (0x00066f75) area_vitu2_query_pane_t6

0x0006,

0xfa75,	// (0x0006c70d) area_vitu2_query_pane_t_ParamLimits

0xfa75,	// (0x0006c70d) area_vitu2_query_pane_t

0x763b,	// (0x000642d3) bg_button_pane_cp018

0x7649,	// (0x000642e1) bg_button_pane_cp021

0x7655,	// (0x000642ed) bg_button_pane_cp022

0x7666,	// (0x000642fe) input_focus_pane_cp09

0x3798,	// (0x00060430) aid_size_touch_mv_arrow_left

0x37c3,	// (0x0006045b) aid_size_touch_mv_arrow_right

0x6dd9,	// (0x00063a71) main_cset_slider_pane_g16_ParamLimits

0x6dd9,	// (0x00063a71) main_cset_slider_pane_g16

0x6de5,	// (0x00063a7d) main_cset_slider_pane_g17_ParamLimits

0x6de5,	// (0x00063a7d) main_cset_slider_pane_g17

0x757d,	// (0x00064215) cell_cam4_burst_pane_g1_ParamLimits

0x9c89,	// (0x00066921) compa_mode_pane

0x701e,	// (0x00063cb6) popup_vtel_slider_window_g3_ParamLimits

0x701e,	// (0x00063cb6) popup_vtel_slider_window_g3

0x7032,	// (0x00063cca) popup_vtel_slider_window_g4_ParamLimits

0x7032,	// (0x00063cca) popup_vtel_slider_window_g4

0x7046,	// (0x00063cde) popup_vtel_slider_window_t1_ParamLimits

0x7046,	// (0x00063cde) popup_vtel_slider_window_t1

0x9c89,	// (0x00066921) main_cl_pane

0xc86c,	// (0x00069504) popup_imed_adjust2_window_ParamLimits

0xc840,	// (0x000694d8) bg_tb_trans_pane_cp05_ParamLimits

0xd16e,	// (0x00069e06) popup_imed_adjust2_window_g1_ParamLimits

0xd17d,	// (0x00069e15) popup_imed_adjust2_window_g2_ParamLimits

0xd17d,	// (0x00069e15) popup_imed_adjust2_window_g2

0xd189,	// (0x00069e21) popup_imed_adjust2_window_g3_ParamLimits

0xd189,	// (0x00069e21) popup_imed_adjust2_window_g3

0x0002,

0xf7e0,	// (0x0006c478) popup_imed_adjust2_window_g_ParamLimits

0xf7e0,	// (0x0006c478) popup_imed_adjust2_window_g

0xd195,	// (0x00069e2d) popup_imed_adjust2_window_t1_ParamLimits

0xd1ad,	// (0x00069e45) slider_imed_adjust_pane_ParamLimits

0xd1c1,	// (0x00069e59) slider_imed_adjust_pane_g1_ParamLimits

0xd1d1,	// (0x00069e69) slider_imed_adjust_pane_g2_ParamLimits

0xd1e1,	// (0x00069e79) slider_imed_adjust_pane_g3_ParamLimits

0xd1f2,	// (0x00069e8a) slider_imed_adjust_pane_g4_ParamLimits

0xf7e7,	// (0x0006c47f) slider_imed_adjust_pane_g_ParamLimits

0x6542,	// (0x000631da) aid_touch_area_cam4_ParamLimits

0x6542,	// (0x000631da) aid_touch_area_cam4

0x6552,	// (0x000631ea) battery_pane_cp01

0x65d9,	// (0x00063271) main_camera4_pane_g6_ParamLimits

0x65d9,	// (0x00063271) main_camera4_pane_g6

0x65f7,	// (0x0006328f) main_camera4_pane_t2_ParamLimits

0x65f7,	// (0x0006328f) main_camera4_pane_t2

0x0001,

0xf8ea,	// (0x0006c582) main_camera4_pane_t_ParamLimits

0xf8ea,	// (0x0006c582) main_camera4_pane_t

0x6688,	// (0x00063320) aid_touch_area_vid4_ParamLimits

0x6688,	// (0x00063320) aid_touch_area_vid4

0x66c8,	// (0x00063360) main_video4_pane_g5_ParamLimits

0x66c8,	// (0x00063360) main_video4_pane_g5

0x66ee,	// (0x00063386) vid4_progress_pane_ParamLimits

0x66ee,	// (0x00063386) vid4_progress_pane

0xd7c4,	// (0x0006a45c) main_cset_slider_pane_g18_ParamLimits

0xd7c4,	// (0x0006a45c) main_cset_slider_pane_g18

0xd98a,	// (0x0006a622) cell_cam4_burst_pane_g2_ParamLimits

0xd98a,	// (0x0006a622) cell_cam4_burst_pane_g2

0x0001,

0xfa49,	// (0x0006c6e1) cell_cam4_burst_pane_g_ParamLimits

0xfa49,	// (0x0006c6e1) cell_cam4_burst_pane_g

0x7677,	// (0x0006430f) bg_cl_pane_ParamLimits

0x7677,	// (0x0006430f) bg_cl_pane

0x7683,	// (0x0006431b) cl_header_pane_ParamLimits

0x7683,	// (0x0006431b) cl_header_pane

0x768f,	// (0x00064327) cl_listscroll_pane_ParamLimits

0x768f,	// (0x00064327) cl_listscroll_pane

0xdaec,	// (0x0006a784) bg_cl_pane_g1

0xdaf4,	// (0x0006a78c) bg_cl_pane_g2

0xdafc,	// (0x0006a794) bg_cl_pane_g3

0xdb04,	// (0x0006a79c) bg_cl_pane_g4

0xdb0c,	// (0x0006a7a4) bg_cl_pane_g5

0xdb14,	// (0x0006a7ac) bg_cl_pane_g6

0xdb1c,	// (0x0006a7b4) bg_cl_pane_g7

0xdb24,	// (0x0006a7bc) bg_cl_pane_g8

0xdb2c,	// (0x0006a7c4) bg_cl_pane_g9

0x0008,

0xfa84,	// (0x0006c71c) bg_cl_pane_g

0x769b,	// (0x00064333) aid_height_cl_leading_ParamLimits

0x769b,	// (0x00064333) aid_height_cl_leading

0x76a7,	// (0x0006433f) aid_height_cl_text_ParamLimits

0x76a7,	// (0x0006433f) aid_height_cl_text

0x1073,	// (0x0005dd0b) bg_cl_header_pane_ParamLimits

0x1073,	// (0x0005dd0b) bg_cl_header_pane

0x76bf,	// (0x00064357) cl_header_pane_g1_ParamLimits

0x76bf,	// (0x00064357) cl_header_pane_g1

0x76cc,	// (0x00064364) cl_header_pane_t1_ParamLimits

0x76cc,	// (0x00064364) cl_header_pane_t1

0xdb34,	// (0x0006a7cc) cl_list_pane

0xd797,	// (0x0006a42f) hc_scroll_pane_cp01

0xad21,	// (0x000679b9) bg_cl_header_pane_g1

0xd679,	// (0x0006a311) bg_cl_header_pane_g2

0xad41,	// (0x000679d9) bg_cl_header_pane_g3

0xd689,	// (0x0006a321) bg_cl_header_pane_g4

0xd681,	// (0x0006a319) bg_cl_header_pane_g5

0xd8a3,	// (0x0006a53b) bg_cl_header_pane_g6

0xd6a1,	// (0x0006a339) bg_cl_header_pane_g7

0xd6a9,	// (0x0006a341) bg_cl_header_pane_g8

0xd699,	// (0x0006a331) bg_cl_header_pane_g9

0x0008,

0xfa97,	// (0x0006c72f) bg_cl_header_pane_g

0x76de,	// (0x00064376) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76de,	// (0x00064376) hc_cl_list_double_graphic_heading_pane

0x76ee,	// (0x00064386) hc_cl_list_single_graphic_pane_ParamLimits

0x76ee,	// (0x00064386) hc_cl_list_single_graphic_pane

0x7700,	// (0x00064398) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7700,	// (0x00064398) hc_cl_list_single_graphic_pane_g1

0x770c,	// (0x000643a4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x770c,	// (0x000643a4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaa,	// (0x0006c742) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaa,	// (0x0006c742) hc_cl_list_single_graphic_pane_g

0x7720,	// (0x000643b8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7720,	// (0x000643b8) hc_cl_list_single_graphic_pane_t1

0x7700,	// (0x00064398) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7700,	// (0x00064398) hc_cl_list_double_graphic_heading_pane_g1

0x7735,	// (0x000643cd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7735,	// (0x000643cd) hc_cl_list_double_graphic_heading_pane_g2

0x7749,	// (0x000643e1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7749,	// (0x000643e1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaf,	// (0x0006c747) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaf,	// (0x0006c747) hc_cl_list_double_graphic_heading_pane_g

0x775d,	// (0x000643f5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x775d,	// (0x000643f5) hc_cl_list_double_graphic_heading_pane_t1

0x7772,	// (0x0006440a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7772,	// (0x0006440a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab6,	// (0x0006c74e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab6,	// (0x0006c74e) hc_cl_list_double_graphic_heading_pane_t

0x778f,	// (0x00064427) vid4_progress_pane_g1

0x77a1,	// (0x00064439) vid4_progress_pane_g2

0x3ede,	// (0x00060b76) vid4_progress_pane_g3

0x77b3,	// (0x0006444b) vid4_progress_pane_g4

0x0004,

0xfabb,	// (0x0006c753) vid4_progress_pane_g

0x77d1,	// (0x00064469) vid4_progress_pane_t1

0x77e6,	// (0x0006447e) vid4_progress_pane_t2

0x0002,

0xfac6,	// (0x0006c75e) vid4_progress_pane_t

0x7811,	// (0x000644a9) wait_bar_pane_cp07

0xca7e,	// (0x00069716) blid_firmament_pane_ParamLimits

0xcac1,	// (0x00069759) popup_blid_sat_info2_window_g1

0xcae5,	// (0x0006977d) popup_blid_sat_info2_window_t3

0xcaf3,	// (0x0006978b) popup_blid_sat_info2_window_t4

0xcb01,	// (0x00069799) popup_blid_sat_info2_window_t5

0xcb0f,	// (0x000697a7) popup_blid_sat_info2_window_t6

0xcb1f,	// (0x000697b7) popup_blid_sat_info2_window_t7

0xcb2d,	// (0x000697c5) popup_blid_sat_info2_window_t8

0xcb3b,	// (0x000697d3) popup_blid_sat_info2_window_t9

0xcb49,	// (0x000697e1) popup_blid_sat_info2_window_t10

0xcc11,	// (0x000698a9) aid_firma_cardinal_ParamLimits

0xcc25,	// (0x000698bd) blid_firmament_pane_t1_ParamLimits

0xcc3c,	// (0x000698d4) blid_firmament_pane_t2_ParamLimits

0xcc53,	// (0x000698eb) blid_firmament_pane_t3_ParamLimits

0xcc6a,	// (0x00069902) blid_firmament_pane_t4_ParamLimits

0xf6d9,	// (0x0006c371) blid_firmament_pane_t_ParamLimits

0xcc81,	// (0x00069919) blid_sat_info_pane_ParamLimits

0xa227,	// (0x00066ebf) main_cam_set_pane_ParamLimits

0x5b50,	// (0x000627e8) aid_size_cell_colour_35_ParamLimits

0x5b6a,	// (0x00062802) aid_size_cell_colour_112_ParamLimits

0x5b81,	// (0x00062819) aid_size_cell_effect_ParamLimits

0xa227,	// (0x00066ebf) bg_tb_trans_pane_cp02_ParamLimits

0xb12e,	// (0x00067dc6) heading_imed_pane_ParamLimits

0x5b9b,	// (0x00062833) listscroll_imed_pane_ParamLimits

0xbe62,	// (0x00068afa) popup_call2_audio_first_window_g5_ParamLimits

0xbe62,	// (0x00068afa) popup_call2_audio_first_window_g5

0x62ad,	// (0x00062f45) aid_size_touch_image3_arrow_left_ParamLimits

0x62ad,	// (0x00062f45) aid_size_touch_image3_arrow_left

0x62c3,	// (0x00062f5b) aid_size_touch_image3_arrow_right_ParamLimits

0x62c3,	// (0x00062f5b) aid_size_touch_image3_arrow_right

0x77fc,	// (0x00064494) vid4_progress_pane_t3

0x5e49,	// (0x00062ae1) main_hwr_training_symbol_option_pane_ParamLimits

0x5e49,	// (0x00062ae1) main_hwr_training_symbol_option_pane

0xd45d,	// (0x0006a0f5) popup_hwr_training_preview_window_ParamLimits

0xd45d,	// (0x0006a0f5) popup_hwr_training_preview_window

0x5eaa,	// (0x00062b42) hwr_training_navi_pane_g5_ParamLimits

0x5eaa,	// (0x00062b42) hwr_training_navi_pane_g5

0xd667,	// (0x0006a2ff) popup_char_count_window

0x714a,	// (0x00063de2) bg_popup_sub_pane_cp20_ParamLimits

0x7158,	// (0x00063df0) list_vitu2_match_list_pane_ParamLimits

0x7164,	// (0x00063dfc) vitu2_page_scroll_pane_ParamLimits

0x7164,	// (0x00063dfc) vitu2_page_scroll_pane

0xdb3d,	// (0x0006a7d5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb3d,	// (0x0006a7d5) list_single_hwr_training_symbol_option_pane

0xdb50,	// (0x0006a7e8) list_single_hwr_training_symbol_option_pane_g1

0xdb58,	// (0x0006a7f0) list_single_hwr_training_symbol_option_pane_t1

0xdb66,	// (0x0006a7fe) bg_button_pane_cp023

0xdb6f,	// (0x0006a807) bg_button_pane_cp024

0x785d,	// (0x000644f5) vitu2_page_scroll_pane_g1

0x7865,	// (0x000644fd) vitu2_page_scroll_pane_g2

0x0001,

0xfacd,	// (0x0006c765) vitu2_page_scroll_pane_g

0x786f,	// (0x00064507) vitu2_page_scroll_pane_t1

0xc9de,	// (0x00069676) popup_char_count_window_g1

0xdba2,	// (0x0006a83a) popup_char_count_window_g2

0xdbab,	// (0x0006a843) popup_char_count_window_g3

0x0002,

0xfad2,	// (0x0006c76a) popup_char_count_window_g

0xdbb4,	// (0x0006a84c) popup_char_count_window_t1

0x9c89,	// (0x00066921) main_vded2_pane

0xd15a,	// (0x00069df2) aid_size_cell_imed_line

0xd164,	// (0x00069dfc) grid_imed_line_width_pane

0x6770,	// (0x00063408) vid4_indicators_pane_g4

0xdbc2,	// (0x0006a85a) cell_imed_line_width_pane_ParamLimits

0xdbc2,	// (0x0006a85a) cell_imed_line_width_pane

0xdbd8,	// (0x0006a870) cell_imed_line_width_pane_g1

0xda2a,	// (0x0006a6c2) cell_imed_line_width_pane_g2

0x0001,

0xfad9,	// (0x0006c771) cell_imed_line_width_pane_g

0x787e,	// (0x00064516) main_vded2_pane_g1_ParamLimits

0x787e,	// (0x00064516) main_vded2_pane_g1

0x788d,	// (0x00064525) main_vded2_pane_g2_ParamLimits

0x788d,	// (0x00064525) main_vded2_pane_g2

0x0001,

0xfade,	// (0x0006c776) main_vded2_pane_g_ParamLimits

0xfade,	// (0x0006c776) main_vded2_pane_g

0x789b,	// (0x00064533) vded2_slider_pane_ParamLimits

0x789b,	// (0x00064533) vded2_slider_pane

0x78a8,	// (0x00064540) aid_size_touch_vded2_end

0x78b2,	// (0x0006454a) aid_size_touch_vded2_playhead

0xdc14,	// (0x0006a8ac) aid_size_touch_vded2_start

0xdc1c,	// (0x0006a8b4) vded2_slider_bg_pane

0xdc25,	// (0x0006a8bd) vded2_slider_pane_g1

0xdc2e,	// (0x0006a8c6) vded2_slider_pane_g2

0x78ba,	// (0x00064552) vded2_slider_pane_g3

0x0002,

0xfae3,	// (0x0006c77b) vded2_slider_pane_g

0xdbe1,	// (0x0006a879) vded2_slider_bg_pane_g1

0xdbea,	// (0x0006a882) vded2_slider_bg_pane_g2

0xdbf3,	// (0x0006a88b) vded2_slider_bg_pane_g3

0x0002,

0xf7a9,	// (0x0006c441) vded2_slider_bg_pane_g

0x3ef6,	// (0x00060b8e) aid_postcard_touch_down_pane_ParamLimits

0x3ef6,	// (0x00060b8e) aid_postcard_touch_down_pane

0x3f06,	// (0x00060b9e) aid_postcard_touch_up_pane_ParamLimits

0x3f06,	// (0x00060b9e) aid_postcard_touch_up_pane

0x9c89,	// (0x00066921) main_blid2_pane

0xc84e,	// (0x000694e6) popup_blid2_search_window

0x9c89,	// (0x00066921) blid2_gps_pane

0x9c89,	// (0x00066921) blid2_navig_pane

0x9c89,	// (0x00066921) blid2_search_pane

0x9c89,	// (0x00066921) blid2_tripm_pane

0x78c3,	// (0x0006455b) blid2_search_pane_g1_ParamLimits

0x78c3,	// (0x0006455b) blid2_search_pane_g1

0x78cf,	// (0x00064567) blid2_search_pane_t1_ParamLimits

0x78cf,	// (0x00064567) blid2_search_pane_t1

0x78e1,	// (0x00064579) aid_size_cell_blid2_gps_ParamLimits

0x78e1,	// (0x00064579) aid_size_cell_blid2_gps

0x78f1,	// (0x00064589) blid2_gps_pane_g1_ParamLimits

0x78f1,	// (0x00064589) blid2_gps_pane_g1

0x78fd,	// (0x00064595) grid_blid2_satellite_pane_ParamLimits

0x78fd,	// (0x00064595) grid_blid2_satellite_pane

0x790b,	// (0x000645a3) blid2_navig_pane_g1_ParamLimits

0x790b,	// (0x000645a3) blid2_navig_pane_g1

0x7917,	// (0x000645af) blid2_navig_pane_t1_ParamLimits

0x7917,	// (0x000645af) blid2_navig_pane_t1

0x7929,	// (0x000645c1) blid2_navig_pane_t2_ParamLimits

0x7929,	// (0x000645c1) blid2_navig_pane_t2

0x0001,

0xfaea,	// (0x0006c782) blid2_navig_pane_t_ParamLimits

0xfaea,	// (0x0006c782) blid2_navig_pane_t

0x793b,	// (0x000645d3) blid2_navig_ring_pane_ParamLimits

0x793b,	// (0x000645d3) blid2_navig_ring_pane

0x794b,	// (0x000645e3) blid2_speed_pane_ParamLimits

0x794b,	// (0x000645e3) blid2_speed_pane

0x7957,	// (0x000645ef) blid2_tripm_pane_g1_ParamLimits

0x7957,	// (0x000645ef) blid2_tripm_pane_g1

0x7967,	// (0x000645ff) blid2_tripm_pane_g2_ParamLimits

0x7967,	// (0x000645ff) blid2_tripm_pane_g2

0x7973,	// (0x0006460b) blid2_tripm_pane_g3_ParamLimits

0x7973,	// (0x0006460b) blid2_tripm_pane_g3

0x797f,	// (0x00064617) blid2_tripm_pane_g4_ParamLimits

0x797f,	// (0x00064617) blid2_tripm_pane_g4

0x798b,	// (0x00064623) blid2_tripm_pane_g5_ParamLimits

0x798b,	// (0x00064623) blid2_tripm_pane_g5

0x0005,

0xfaef,	// (0x0006c787) blid2_tripm_pane_g_ParamLimits

0xfaef,	// (0x0006c787) blid2_tripm_pane_g

0x79a7,	// (0x0006463f) blid2_tripm_pane_t1_ParamLimits

0x79a7,	// (0x0006463f) blid2_tripm_pane_t1

0x79b9,	// (0x00064651) blid2_tripm_pane_t2_ParamLimits

0x79b9,	// (0x00064651) blid2_tripm_pane_t2

0x79cb,	// (0x00064663) blid2_tripm_pane_t3_ParamLimits

0x79cb,	// (0x00064663) blid2_tripm_pane_t3

0x0003,

0xfafc,	// (0x0006c794) blid2_tripm_pane_t_ParamLimits

0xfafc,	// (0x0006c794) blid2_tripm_pane_t

0x79fd,	// (0x00064695) cell_blid2_satellite_pane_ParamLimits

0x79fd,	// (0x00064695) cell_blid2_satellite_pane

0x7a1b,	// (0x000646b3) cell_blid2_satellite_pane_g1

0xdc36,	// (0x0006a8ce) cell_blid2_satellite_pane_t1

0xcc91,	// (0x00069929) blid2_speed_pane_g1

0xdc44,	// (0x0006a8dc) blid2_speed_pane_t1

0xdc52,	// (0x0006a8ea) blid2_speed_pane_t2

0x0001,

0xfb05,	// (0x0006c79d) blid2_speed_pane_t

0xcc91,	// (0x00069929) blid2_navig_ring_pane_g1

0x7a24,	// (0x000646bc) blid2_navig_ring_pane_g2

0x7a2c,	// (0x000646c4) blid2_navig_ring_pane_g3

0x7a34,	// (0x000646cc) blid2_navig_ring_pane_g4

0x7a3c,	// (0x000646d4) blid2_navig_ring_pane_g5

0x0004,

0xfb0a,	// (0x0006c7a2) blid2_navig_ring_pane_g

0x9c89,	// (0x00066921) bg_popup_window_pane_cp011

0xdc60,	// (0x0006a8f8) popup_blid2_search_window_g1

0xdc68,	// (0x0006a900) popup_blid2_search_window_t1

0xdc76,	// (0x0006a90e) popup_blid2_search_window_t2

0x0001,

0xfb15,	// (0x0006c7ad) popup_blid2_search_window_t

0xac30,	// (0x000678c8) main_browser_pane_g1

0xa753,	// (0x000673eb) main_browser_pane_ParamLimits

0x671b,	// (0x000633b3) bg_button_pane_cp011_ParamLimits

0x69ea,	// (0x00063682) cell_vitu2_function_pane_g1_ParamLimits

0xc840,	// (0x000694d8) bg_popup_sub_pane_cp22_ParamLimits

0x731a,	// (0x00063fb2) input_focus_pane_cp08_ParamLimits

0x7331,	// (0x00063fc9) popup_vitu2_query_button_pane_ParamLimits

0x7331,	// (0x00063fc9) popup_vitu2_query_button_pane

0x7342,	// (0x00063fda) popup_vitu2_query_input_button_pane

0xd8e0,	// (0x0006a578) popup_vitu2_query_window_g1_ParamLimits

0x734c,	// (0x00063fe4) popup_vitu2_query_window_g2_ParamLimits

0xfa1d,	// (0x0006c6b5) popup_vitu2_query_window_g_ParamLimits

0x9c89,	// (0x00066921) bg_button_pane_cp026

0x7a44,	// (0x000646dc) popup_vitu2_query_input_button_pane_g1

0x9c89,	// (0x00066921) bg_button_pane_cp025

0xdc84,	// (0x0006a91c) popup_vitu2_query_button_pane_t1

0x508f,	// (0x00061d27) main_mp3_pane_t6

0x509f,	// (0x00061d37) popup_slider_window_cp01

0x663d,	// (0x000632d5) cam4_battery_pane

0x6729,	// (0x000633c1) cam4_battery_pane_cp02

0x7787,	// (0x0006441f) cam4_battery_pane_cp01

0x7787,	// (0x0006441f) cam4_battery_pane_cp03

0xdbfc,	// (0x0006a894) cam4_battery_pane_g1

0xcc91,	// (0x00069929) cam4_battery_pane_g2

0x0001,

0xfb1a,	// (0x0006c7b2) cam4_battery_pane_g

0xcb57,	// (0x000697ef) popup_blid_sat_info2_window_t11

0x3798,	// (0x00060430) aid_size_touch_mv_arrow_left_ParamLimits

0x37c3,	// (0x0006045b) aid_size_touch_mv_arrow_right_ParamLimits

0xb387,	// (0x0006801f) navi_pane_g1_ParamLimits

0x3802,	// (0x0006049a) navi_pane_g2_ParamLimits

0x3830,	// (0x000604c8) navi_pane_g3_ParamLimits

0xf3eb,	// (0x0006c083) navi_pane_g_ParamLimits

0x388a,	// (0x00060522) navi_pane_mv_t1_ParamLimits

0x5ba7,	// (0x0006283f) grid_imed_effect_pane_ParamLimits

0x2250,	// (0x0005eee8) aid_placing_vt_slider_lsc

0xab7b,	// (0x00067813) aid_placing_vt_slider_prt

0xa227,	// (0x00066ebf) bg_tb_trans_pane_cp01_ParamLimits

0xcde1,	// (0x00069a79) popup_image_details_window_g1_ParamLimits

0xcdf4,	// (0x00069a8c) popup_image_details_window_g2_ParamLimits

0xce09,	// (0x00069aa1) popup_image_details_window_g3_ParamLimits

0xce09,	// (0x00069aa1) popup_image_details_window_g3

0xf71e,	// (0x0006c3b6) popup_image_details_window_g_ParamLimits

0xce1d,	// (0x00069ab5) popup_image_details_window_t1_ParamLimits

0xce2f,	// (0x00069ac7) popup_image_details_window_t2_ParamLimits

0xce48,	// (0x00069ae0) popup_image_details_window_t3_ParamLimits

0xce5c,	// (0x00069af4) popup_image_details_window_t4_ParamLimits

0xce77,	// (0x00069b0f) popup_image_details_window_t5_ParamLimits

0xf725,	// (0x0006c3bd) popup_image_details_window_t_ParamLimits

0x76b3,	// (0x0006434b) cl_header_name_pane_ParamLimits

0x76b3,	// (0x0006434b) cl_header_name_pane

0x7a4c,	// (0x000646e4) cl_header_name_pane_t1_ParamLimits

0x7a4c,	// (0x000646e4) cl_header_name_pane_t1

0x7a63,	// (0x000646fb) cl_header_name_pane_t2_ParamLimits

0x7a63,	// (0x000646fb) cl_header_name_pane_t2

0x7a8d,	// (0x00064725) cl_header_name_pane_t3_ParamLimits

0x7a8d,	// (0x00064725) cl_header_name_pane_t3

0x0002,

0xfb1f,	// (0x0006c7b7) cl_header_name_pane_t_ParamLimits

0xfb1f,	// (0x0006c7b7) cl_header_name_pane_t

0x385b,	// (0x000604f3) navi_pane_mv_g2_ParamLimits

0xd641,	// (0x0006a2d9) field_vitu2_entry_pane_g1_ParamLimits

0xd64d,	// (0x0006a2e5) field_vitu2_entry_pane_g2_ParamLimits

0xd659,	// (0x0006a2f1) field_vitu2_entry_pane_g3_ParamLimits

0xd659,	// (0x0006a2f1) field_vitu2_entry_pane_g3

0xf91c,	// (0x0006c5b4) field_vitu2_entry_pane_g_ParamLimits

0x697a,	// (0x00063612) cell_vitu2_itu_pane_g1_ParamLimits

0x698a,	// (0x00063622) cell_vitu2_itu_pane_g2_ParamLimits

0x698a,	// (0x00063622) cell_vitu2_itu_pane_g2

0x0001,

0xf928,	// (0x0006c5c0) cell_vitu2_itu_pane_g_ParamLimits

0xf928,	// (0x0006c5c0) cell_vitu2_itu_pane_g

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp05_ParamLimits

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp05

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp03

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp04

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp10_ParamLimits

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp10

0x7655,	// (0x000642ed) bg_vkb2_func_pane_cp08

0x763b,	// (0x000642d3) bg_vkb2_func_pane_cp06

0x7649,	// (0x000642e1) bg_vkb2_func_pane_cp07

0xdb78,	// (0x0006a810) bg_vkb2_func_pane_cp11_ParamLimits

0xdb78,	// (0x0006a810) bg_vkb2_func_pane_cp11

0xdb8d,	// (0x0006a825) bg_vkb2_func_pane_cp12_ParamLimits

0xdb8d,	// (0x0006a825) bg_vkb2_func_pane_cp12

0x9c89,	// (0x00066921) bg_vkb2_func_pane_cp09

0xd679,	// (0x0006a311) bg_vkb2_func_pane_g1

0xad41,	// (0x000679d9) bg_vkb2_func_pane_g2

0xd681,	// (0x0006a319) bg_vkb2_func_pane_g3

0xd689,	// (0x0006a321) bg_vkb2_func_pane_g4

0xd8a3,	// (0x0006a53b) bg_vkb2_func_pane_g5

0xd6a1,	// (0x0006a339) bg_vkb2_func_pane_g6

0xd6a9,	// (0x0006a341) bg_vkb2_func_pane_g7

0xd699,	// (0x0006a331) bg_vkb2_func_pane_g8

0xad21,	// (0x000679b9) bg_vkb2_func_pane_g9

0x0008,

0xfb26,	// (0x0006c7be) bg_vkb2_func_pane_g

0x7999,	// (0x00064631) blid2_tripm_pane_g6_ParamLimits

0x7999,	// (0x00064631) blid2_tripm_pane_g6

0xd515,	// (0x0006a1ad) mp4_progress_pane_g1

0x79f1,	// (0x00064689) blid2_tripm_values_pane_ParamLimits

0x79f1,	// (0x00064689) blid2_tripm_values_pane

0x7ab2,	// (0x0006474a) blid2_tripm_values_pane_t1

0x7ac0,	// (0x00064758) blid2_tripm_values_pane_t2

0x7ace,	// (0x00064766) blid2_tripm_values_pane_t3

0x7adc,	// (0x00064774) blid2_tripm_values_pane_t4

0x7aea,	// (0x00064782) blid2_tripm_values_pane_t5

0x7af8,	// (0x00064790) blid2_tripm_values_pane_t6

0x7b06,	// (0x0006479e) blid2_tripm_values_pane_t7

0x7b14,	// (0x000647ac) blid2_tripm_values_pane_t8

0x7b22,	// (0x000647ba) blid2_tripm_values_pane_t9

0x0008,

0xfb39,	// (0x0006c7d1) blid2_tripm_values_pane_t

0x228e,	// (0x0005ef26) call_video_pane_t1_ParamLimits

0x22ab,	// (0x0005ef43) call_video_pane_t2_ParamLimits

0xf279,	// (0x0006bf11) call_video_pane_t_ParamLimits

0x3e01,	// (0x00060a99) msg_header_pane_g1_ParamLimits

0xb5a9,	// (0x00068241) msg_header_pane_g2_ParamLimits

0xb5a9,	// (0x00068241) msg_header_pane_g2

0x0001,

0xf48e,	// (0x0006c126) msg_header_pane_g_ParamLimits

0xf48e,	// (0x0006c126) msg_header_pane_g

0xa753,	// (0x000673eb) main_clock2_pane_ParamLimits

0x5936,	// (0x000625ce) grid_clock2_toolbar_pane_ParamLimits

0x5936,	// (0x000625ce) grid_clock2_toolbar_pane

0x5936,	// (0x000625ce) listscroll_clock2_pane_ParamLimits

0x5936,	// (0x000625ce) listscroll_clock2_pane

0x59de,	// (0x00062676) main_clock2_pane_t3_ParamLimits

0x59de,	// (0x00062676) main_clock2_pane_t3

0x59f0,	// (0x00062688) main_clock2_pane_t4_ParamLimits

0x59f0,	// (0x00062688) main_clock2_pane_t4

0xdc92,	// (0x0006a92a) cell_clock2_toolbar_pane

0xdc9a,	// (0x0006a932) cell_clock2_toolbar_pane_cp01

0xdc9a,	// (0x0006a932) cell_clock2_toolbar_pane_cp02

0xdca2,	// (0x0006a93a) cell_clock2_toolbar_pane_cp03

0xdcaa,	// (0x0006a942) list_clock2_pane

0xb2ed,	// (0x00067f85) scroll_pane_cp10

0xdcb2,	// (0x0006a94a) list_single_clock2_pane_ParamLimits

0xdcb2,	// (0x0006a94a) list_single_clock2_pane

0xb427,	// (0x000680bf) list_highlight_pane_cp08

0xdcbf,	// (0x0006a957) list_single_clock2_pane_t1

0xdccd,	// (0x0006a965) list_single_clock2_pane_t2

0x0001,

0xfb4c,	// (0x0006c7e4) list_single_clock2_pane_t

0x9c89,	// (0x00066921) bg_button_pane_cp10

0xdcdb,	// (0x0006a973) cell_clock2_toolbar_pane_g1

0x3e58,	// (0x00060af0) aid_main_viewer_pane_g1_ParamLimits

0x3e58,	// (0x00060af0) aid_main_viewer_pane_g1

0x3e64,	// (0x00060afc) aid_main_viewer_pane_g2_ParamLimits

0x3e64,	// (0x00060afc) aid_main_viewer_pane_g2

0x3e70,	// (0x00060b08) aid_main_viewer_pane_g3_ParamLimits

0x3e70,	// (0x00060b08) aid_main_viewer_pane_g3

0x3e81,	// (0x00060b19) aid_main_viewer_pane_g4_ParamLimits

0x3e81,	// (0x00060b19) aid_main_viewer_pane_g4

0x0003,

0xf49f,	// (0x0006c137) aid_main_viewer_pane_g_ParamLimits

0xf49f,	// (0x0006c137) aid_main_viewer_pane_g

0x460b,	// (0x000612a3) main_calc_pane_ParamLimits

0x4618,	// (0x000612b0) main_dialer2_pane_ParamLimits

0x9c89,	// (0x00066921) main_cam6_pane

0x9c89,	// (0x00066921) main_vid6_pane

0x5942,	// (0x000625da) listscroll_gen_pane_cp06_ParamLimits

0x5942,	// (0x000625da) listscroll_gen_pane_cp06

0x5a02,	// (0x0006269a) main_clock2_pane_t5_ParamLimits

0x5a02,	// (0x0006269a) main_clock2_pane_t5

0x5a51,	// (0x000626e9) aid_call2_pane_cp10_ParamLimits

0x5a63,	// (0x000626fb) aid_call_pane_cp10_ParamLimits

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a75,	// (0x0006270d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a75,	// (0x0006270d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35c,	// (0x00067ff4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d5,	// (0x0006c46d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a87,	// (0x0006271f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x625a,	// (0x00062ef2) cell_dialer2_keypad_pane_g2_ParamLimits

0x625a,	// (0x00062ef2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8bb,	// (0x0006c553) cell_dialer2_keypad_pane_g_ParamLimits

0xf8bb,	// (0x0006c553) cell_dialer2_keypad_pane_g

0x6276,	// (0x00062f0e) cell_dialer2_keypad_pane_t1

0x6cc7,	// (0x0006395f) main_cset_text2_pane_ParamLimits

0x6cc7,	// (0x0006395f) main_cset_text2_pane

0xdae0,	// (0x0006a778) area_vitu2_query_pane_g1_ParamLimits

0x75da,	// (0x00064272) area_vitu2_query_pane_g2_ParamLimits

0xfa70,	// (0x0006c708) area_vitu2_query_pane_g_ParamLimits

0xa305,	// (0x00066f9d) area_vitu2_query_pane_t7_ParamLimits

0xa305,	// (0x00066f9d) area_vitu2_query_pane_t7

0x763b,	// (0x000642d3) bg_button_pane_cp018_ParamLimits

0x7649,	// (0x000642e1) bg_button_pane_cp021_ParamLimits

0x7655,	// (0x000642ed) bg_button_pane_cp022_ParamLimits

0x7655,	// (0x000642ed) bg_vkb2_func_pane_cp08_ParamLimits

0x763b,	// (0x000642d3) bg_vkb2_func_pane_cp06_ParamLimits

0x7649,	// (0x000642e1) bg_vkb2_func_pane_cp07_ParamLimits

0x7666,	// (0x000642fe) input_focus_pane_cp09_ParamLimits

0x7b30,	// (0x000647c8) cam6_autofocus_pane_ParamLimits

0x7b30,	// (0x000647c8) cam6_autofocus_pane

0x7b52,	// (0x000647ea) cam6_image_uncrop_pane_ParamLimits

0x7b52,	// (0x000647ea) cam6_image_uncrop_pane

0x7b7f,	// (0x00064817) cam6_indi_pane_ParamLimits

0x7b7f,	// (0x00064817) cam6_indi_pane

0x7b99,	// (0x00064831) cam6_mode_pane_ParamLimits

0x7b99,	// (0x00064831) cam6_mode_pane

0x7bad,	// (0x00064845) cam6_timer_pane_ParamLimits

0x7bad,	// (0x00064845) cam6_timer_pane

0x7bb9,	// (0x00064851) cam6_zoom_pane_ParamLimits

0x7bb9,	// (0x00064851) cam6_zoom_pane

0x7bd5,	// (0x0006486d) cam6_mode_pane_g1_ParamLimits

0x7bd5,	// (0x0006486d) cam6_mode_pane_g1

0x7be1,	// (0x00064879) cam6_mode_pane_g2_ParamLimits

0x7be1,	// (0x00064879) cam6_mode_pane_g2

0x7bed,	// (0x00064885) cam6_mode_pane_g3_ParamLimits

0x7bed,	// (0x00064885) cam6_mode_pane_g3

0x7bf9,	// (0x00064891) cam6_mode_pane_g4_ParamLimits

0x7bf9,	// (0x00064891) cam6_mode_pane_g4

0x0003,

0xfb51,	// (0x0006c7e9) cam6_mode_pane_g_ParamLimits

0xfb51,	// (0x0006c7e9) cam6_mode_pane_g

0xdc06,	// (0x0006a89e) bg_tb_trans_pane_cp08_ParamLimits

0xdc06,	// (0x0006a89e) bg_tb_trans_pane_cp08

0xdce3,	// (0x0006a97b) cam6_battery_pane_ParamLimits

0xdce3,	// (0x0006a97b) cam6_battery_pane

0xdcf9,	// (0x0006a991) cam6_indi_pane_g1_ParamLimits

0xdcf9,	// (0x0006a991) cam6_indi_pane_g1

0xdd0b,	// (0x0006a9a3) cam6_indi_pane_g2_ParamLimits

0xdd0b,	// (0x0006a9a3) cam6_indi_pane_g2

0xdd1d,	// (0x0006a9b5) cam6_indi_pane_g3_ParamLimits

0xdd1d,	// (0x0006a9b5) cam6_indi_pane_g3

0x0002,

0xfb5a,	// (0x0006c7f2) cam6_indi_pane_g_ParamLimits

0xfb5a,	// (0x0006c7f2) cam6_indi_pane_g

0xdd2f,	// (0x0006a9c7) cam6_indi_pane_t1_ParamLimits

0xdd2f,	// (0x0006a9c7) cam6_indi_pane_t1

0x67ad,	// (0x00063445) cam6_autofocus_pane_g1

0x67a5,	// (0x0006343d) cam6_autofocus_pane_g2

0x67bd,	// (0x00063455) cam6_autofocus_pane_g3

0x67b5,	// (0x0006344d) cam6_autofocus_pane_g4

0x0003,

0xfb61,	// (0x0006c7f9) cam6_autofocus_pane_g

0xdd55,	// (0x0006a9ed) cam6_timer_pane_g1

0xdd5d,	// (0x0006a9f5) cam6_timer_pane_t1

0xdd6b,	// (0x0006aa03) cam6_zoom_cont_pane

0xdd73,	// (0x0006aa0b) cam6_zoom_pane_g1

0xdd7b,	// (0x0006aa13) cam6_zoom_pane_g2

0x7c05,	// (0x0006489d) cam6_zoom_pane_g3

0x0002,

0xfb6a,	// (0x0006c802) cam6_zoom_pane_g

0xcc91,	// (0x00069929) cam6_battery_pane_g1

0xcc91,	// (0x00069929) cam6_battery_pane_g2

0x0001,

0xf6e2,	// (0x0006c37a) cam6_battery_pane_g

0xdd83,	// (0x0006aa1b) cam6_zoom_cont_pane_g1

0xdd8c,	// (0x0006aa24) cam6_zoom_cont_pane_g2

0xdda7,	// (0x0006aa3f) cam6_zoom_cont_pane_g3

0x0002,

0xfb71,	// (0x0006c809) cam6_zoom_cont_pane_g

0x7c22,	// (0x000648ba) cam6_mode_pane_cp_ParamLimits

0x7c22,	// (0x000648ba) cam6_mode_pane_cp

0x7c36,	// (0x000648ce) cam6_zoom_pane_cp_ParamLimits

0x7c36,	// (0x000648ce) cam6_zoom_pane_cp

0x7c52,	// (0x000648ea) vid6_image_uncrop_cif_pane_ParamLimits

0x7c52,	// (0x000648ea) vid6_image_uncrop_cif_pane

0x7c7e,	// (0x00064916) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c7e,	// (0x00064916) vid6_image_uncrop_nhd_pane

0x7c9d,	// (0x00064935) vid6_image_uncrop_vga_pane_ParamLimits

0x7c9d,	// (0x00064935) vid6_image_uncrop_vga_pane

0x7cbc,	// (0x00064954) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cbc,	// (0x00064954) vid6_image_uncrop_wvga_pane

0x7cdb,	// (0x00064973) vid6_indi_pane_ParamLimits

0x7cdb,	// (0x00064973) vid6_indi_pane

0xdc06,	// (0x0006a89e) bg_tb_trans_pane_cp09_ParamLimits

0xdc06,	// (0x0006a89e) bg_tb_trans_pane_cp09

0xddbf,	// (0x0006aa57) cam6_battery_pane_cp_ParamLimits

0xddbf,	// (0x0006aa57) cam6_battery_pane_cp

0xddcb,	// (0x0006aa63) vid6_indi_pane_g1_ParamLimits

0xddcb,	// (0x0006aa63) vid6_indi_pane_g1

0xdddd,	// (0x0006aa75) vid6_indi_pane_g2_ParamLimits

0xdddd,	// (0x0006aa75) vid6_indi_pane_g2

0xddef,	// (0x0006aa87) vid6_indi_pane_g3_ParamLimits

0xddef,	// (0x0006aa87) vid6_indi_pane_g3

0xde06,	// (0x0006aa9e) vid6_indi_pane_g4_ParamLimits

0xde06,	// (0x0006aa9e) vid6_indi_pane_g4

0xde1d,	// (0x0006aab5) vid6_indi_pane_g5_ParamLimits

0xde1d,	// (0x0006aab5) vid6_indi_pane_g5

0x0004,

0xfb78,	// (0x0006c810) vid6_indi_pane_g_ParamLimits

0xfb78,	// (0x0006c810) vid6_indi_pane_g

0xde37,	// (0x0006aacf) vid6_indi_pane_t1_ParamLimits

0xde37,	// (0x0006aacf) vid6_indi_pane_t1

0xde4d,	// (0x0006aae5) vid6_indi_pane_t2_ParamLimits

0xde4d,	// (0x0006aae5) vid6_indi_pane_t2

0xde75,	// (0x0006ab0d) vid6_indi_pane_t3_ParamLimits

0xde75,	// (0x0006ab0d) vid6_indi_pane_t3

0xde9d,	// (0x0006ab35) vid6_indi_pane_t4_ParamLimits

0xde9d,	// (0x0006ab35) vid6_indi_pane_t4

0x0003,

0xfb83,	// (0x0006c81b) vid6_indi_pane_t_ParamLimits

0xfb83,	// (0x0006c81b) vid6_indi_pane_t

0xdec1,	// (0x0006ab59) wait_bar_pane_cp08

0x7d00,	// (0x00064998) main_cset_text2_pane_t1_ParamLimits

0x7d00,	// (0x00064998) main_cset_text2_pane_t1

0x7c0d,	// (0x000648a5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c0d,	// (0x000648a5) listscroll_gen_pane_cp06_t1

0x9c89,	// (0x00066921) main_cam6_set_pane

0x662f,	// (0x000632c7) bg_tb_trans_pane_cp06_ParamLimits

0x6645,	// (0x000632dd) cam4_indicators_pane_g1_ParamLimits

0x6656,	// (0x000632ee) cam4_indicators_pane_g2_ParamLimits

0xf8f8,	// (0x0006c590) cam4_indicators_pane_g_ParamLimits

0x666e,	// (0x00063306) cam4_indicators_pane_t1_ParamLimits

0x671b,	// (0x000633b3) bg_tb_trans_pane_cp07_ParamLimits

0x6733,	// (0x000633cb) vid4_indicators_pane_g1_ParamLimits

0x6749,	// (0x000633e1) vid4_indicators_pane_g2_ParamLimits

0x675d,	// (0x000633f5) vid4_indicators_pane_g3_ParamLimits

0x6770,	// (0x00063408) vid4_indicators_pane_g4_ParamLimits

0xf90a,	// (0x0006c5a2) vid4_indicators_pane_g_ParamLimits

0x678e,	// (0x00063426) vid4_indicators_pane_t1_ParamLimits

0x778f,	// (0x00064427) vid4_progress_pane_g1_ParamLimits

0x77a1,	// (0x00064439) vid4_progress_pane_g2_ParamLimits

0x3ede,	// (0x00060b76) vid4_progress_pane_g3_ParamLimits

0x77b3,	// (0x0006444b) vid4_progress_pane_g4_ParamLimits

0xfabb,	// (0x0006c753) vid4_progress_pane_g_ParamLimits

0x77d1,	// (0x00064469) vid4_progress_pane_t1_ParamLimits

0x77e6,	// (0x0006447e) vid4_progress_pane_t2_ParamLimits

0x77fc,	// (0x00064494) vid4_progress_pane_t3_ParamLimits

0xfac6,	// (0x0006c75e) vid4_progress_pane_t_ParamLimits

0x7811,	// (0x000644a9) wait_bar_pane_cp07_ParamLimits

0x7d27,	// (0x000649bf) main_cam6_set_pane_g2_ParamLimits

0x7d27,	// (0x000649bf) main_cam6_set_pane_g2

0x7d33,	// (0x000649cb) main_cset6_listscroll_pane_ParamLimits

0x7d33,	// (0x000649cb) main_cset6_listscroll_pane

0x7d60,	// (0x000649f8) main_cset6_slider_pane_ParamLimits

0x7d60,	// (0x000649f8) main_cset6_slider_pane

0x7d6c,	// (0x00064a04) main_cset6_text2_pane_ParamLimits

0x7d6c,	// (0x00064a04) main_cset6_text2_pane

0xded0,	// (0x0006ab68) main_cset6_text_pane

0xded8,	// (0x0006ab70) main_cset_list_pane_copy1_ParamLimits

0xded8,	// (0x0006ab70) main_cset_list_pane_copy1

0xdee8,	// (0x0006ab80) scroll_pane_cp028_copy1

0x7d7f,	// (0x00064a17) cset_list_set_pane_copy1

0x7d8f,	// (0x00064a27) aid_position_infowindow_above_copy1

0x7d97,	// (0x00064a2f) aid_position_infowindow_below_copy1

0x7d9f,	// (0x00064a37) cset_list_set_pane_g1_copy1

0x7da7,	// (0x00064a3f) cset_list_set_pane_g3_copy1_ParamLimits

0x7da7,	// (0x00064a3f) cset_list_set_pane_g3_copy1

0x7db6,	// (0x00064a4e) cset_list_set_pane_t1_copy1_ParamLimits

0x7db6,	// (0x00064a4e) cset_list_set_pane_t1_copy1

0xa227,	// (0x00066ebf) list_highlight_pane_cp021_copy1_ParamLimits

0xa227,	// (0x00066ebf) list_highlight_pane_cp021_copy1

0xdef1,	// (0x0006ab89) cset6_slider_pane_ParamLimits

0xdef1,	// (0x0006ab89) cset6_slider_pane

0xdf1d,	// (0x0006abb5) main_cset6_slider_pane_g1_ParamLimits

0xdf1d,	// (0x0006abb5) main_cset6_slider_pane_g1

0x7dcb,	// (0x00064a63) main_cset6_slider_pane_g2_ParamLimits

0x7dcb,	// (0x00064a63) main_cset6_slider_pane_g2

0xdf6b,	// (0x0006ac03) main_cset6_slider_pane_g3_ParamLimits

0xdf6b,	// (0x0006ac03) main_cset6_slider_pane_g3

0x7df3,	// (0x00064a8b) main_cset6_slider_pane_g4_ParamLimits

0x7df3,	// (0x00064a8b) main_cset6_slider_pane_g4

0x7dff,	// (0x00064a97) main_cset6_slider_pane_g5_ParamLimits

0x7dff,	// (0x00064a97) main_cset6_slider_pane_g5

0xd7ac,	// (0x0006a444) main_cset6_slider_pane_g7_ParamLimits

0xd7ac,	// (0x0006a444) main_cset6_slider_pane_g7

0xd7b8,	// (0x0006a450) main_cset6_slider_pane_g8_ParamLimits

0xd7b8,	// (0x0006a450) main_cset6_slider_pane_g8

0x7e0b,	// (0x00064aa3) main_cset6_slider_pane_g9_ParamLimits

0x7e0b,	// (0x00064aa3) main_cset6_slider_pane_g9

0x7e17,	// (0x00064aaf) main_cset6_slider_pane_g10_ParamLimits

0x7e17,	// (0x00064aaf) main_cset6_slider_pane_g10

0x7e23,	// (0x00064abb) main_cset6_slider_pane_g11_ParamLimits

0x7e23,	// (0x00064abb) main_cset6_slider_pane_g11

0x7e2f,	// (0x00064ac7) main_cset6_slider_pane_g12_ParamLimits

0x7e2f,	// (0x00064ac7) main_cset6_slider_pane_g12

0x7e3b,	// (0x00064ad3) main_cset6_slider_pane_g13_ParamLimits

0x7e3b,	// (0x00064ad3) main_cset6_slider_pane_g13

0x7e47,	// (0x00064adf) main_cset6_slider_pane_g14_ParamLimits

0x7e47,	// (0x00064adf) main_cset6_slider_pane_g14

0x7e53,	// (0x00064aeb) main_cset6_slider_pane_g15_ParamLimits

0x7e53,	// (0x00064aeb) main_cset6_slider_pane_g15

0x7e6b,	// (0x00064b03) main_cset6_slider_pane_g16_ParamLimits

0x7e6b,	// (0x00064b03) main_cset6_slider_pane_g16

0x7e77,	// (0x00064b0f) main_cset6_slider_pane_g17_ParamLimits

0x7e77,	// (0x00064b0f) main_cset6_slider_pane_g17

0x0011,

0xfb8c,	// (0x0006c824) main_cset6_slider_pane_g_ParamLimits

0xfb8c,	// (0x0006c824) main_cset6_slider_pane_g

0xdf77,	// (0x0006ac0f) main_cset6_slider_pane_t1_ParamLimits

0xdf77,	// (0x0006ac0f) main_cset6_slider_pane_t1

0x7e9b,	// (0x00064b33) main_cset6_slider_pane_t2_ParamLimits

0x7e9b,	// (0x00064b33) main_cset6_slider_pane_t2

0x7ec6,	// (0x00064b5e) main_cset6_slider_pane_t3_ParamLimits

0x7ec6,	// (0x00064b5e) main_cset6_slider_pane_t3

0x7ef1,	// (0x00064b89) main_cset6_slider_pane_t4_ParamLimits

0x7ef1,	// (0x00064b89) main_cset6_slider_pane_t4

0x7f1c,	// (0x00064bb4) main_cset6_slider_pane_t5_ParamLimits

0x7f1c,	// (0x00064bb4) main_cset6_slider_pane_t5

0xdfb8,	// (0x0006ac50) main_cset6_slider_pane_t7_ParamLimits

0xdfb8,	// (0x0006ac50) main_cset6_slider_pane_t7

0x7f47,	// (0x00064bdf) main_cset6_slider_pane_t8_ParamLimits

0x7f47,	// (0x00064bdf) main_cset6_slider_pane_t8

0x7f6b,	// (0x00064c03) main_cset6_slider_pane_t9_ParamLimits

0x7f6b,	// (0x00064c03) main_cset6_slider_pane_t9

0x7f8f,	// (0x00064c27) main_cset6_slider_pane_t10_ParamLimits

0x7f8f,	// (0x00064c27) main_cset6_slider_pane_t10

0x7fb3,	// (0x00064c4b) main_cset6_slider_pane_t11_ParamLimits

0x7fb3,	// (0x00064c4b) main_cset6_slider_pane_t11

0xdfee,	// (0x0006ac86) main_cset6_slider_pane_t14_ParamLimits

0xdfee,	// (0x0006ac86) main_cset6_slider_pane_t14

0xe027,	// (0x0006acbf) main_cset6_slider_pane_t15_ParamLimits

0xe027,	// (0x0006acbf) main_cset6_slider_pane_t15

0x000b,

0xfbb1,	// (0x0006c849) main_cset6_slider_pane_t_ParamLimits

0xfbb1,	// (0x0006c849) main_cset6_slider_pane_t

0xdf45,	// (0x0006abdd) cset_slider_pane_g1_copy1

0xdf4e,	// (0x0006abe6) cset_slider_pane_g2_copy1

0xdf57,	// (0x0006abef) cset_slider_pane_g3_copy1

0x9c89,	// (0x00066921) bg_popup_sub_pane_cp011_copy1

0xe060,	// (0x0006acf8) main_cset_text_pane_g1_copy1

0xd8f4,	// (0x0006a58c) main_cset_text_pane_t1_copy1

0xd902,	// (0x0006a59a) main_cset_text_pane_t2_copy1

0xd910,	// (0x0006a5a8) main_cset_text_pane_t3_copy1

0xd91e,	// (0x0006a5b6) main_cset_text_pane_t4_copy1

0xd92c,	// (0x0006a5c4) main_cset_text_pane_t5_copy1

0xe068,	// (0x0006ad00) main_cset_text_pane_t6_copy1

0xe076,	// (0x0006ad0e) main_cset_text_pane_t7_copy1

0x807d,	// (0x00064d15) main_cset_text2_pane_t1_copy1

0xa227,	// (0x00066ebf) main_ncimui_pane

0x465d,	// (0x000612f5) popup_query_ncimui_window_ParamLimits

0x465d,	// (0x000612f5) popup_query_ncimui_window

0xa235,	// (0x00066ecd) field_cale_ev2_pane_g4_ParamLimits

0xa235,	// (0x00066ecd) field_cale_ev2_pane_g4

0x5f70,	// (0x00062c08) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f70,	// (0x00062c08) cell_video_dialer_keypad_pane_g2

0x0001,

0xf896,	// (0x0006c52e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf896,	// (0x0006c52e) cell_video_dialer_keypad_pane_g

0x5f88,	// (0x00062c20) cell_video_dialer_keypad_pane_t1

0x9c89,	// (0x00066921) bg_popup_window_pane_cp012

0xb1d9,	// (0x00067e71) heading_pane_cp06

0xe0a2,	// (0x0006ad3a) ncim_query_content_pane

0x9c89,	// (0x00066921) bg_popup_heading_pane_cp01

0xe0aa,	// (0x0006ad42) ncim_heading_pane_t1

0xe0b8,	// (0x0006ad50) ncim_indicator_popup_pane

0xe0ca,	// (0x0006ad62) ncim_query_button_pane

0xe0e0,	// (0x0006ad78) ncim_query_content_pane_t1

0xe0f2,	// (0x0006ad8a) ncim_query_content_pane_t2

0x0005,

0xfbf5,	// (0x0006c88d) ncim_query_content_pane_t

0xe12c,	// (0x0006adc4) ncim_query_list_pane

0xe13e,	// (0x0006add6) ncim_query_popup_pane

0xe0b8,	// (0x0006ad50) ncim_indicator_popup_pane_ParamLimits

0x81d9,	// (0x00064e71) ncim_query_content_pane_g1_ParamLimits

0x81d9,	// (0x00064e71) ncim_query_content_pane_g1

0xe0e0,	// (0x0006ad78) ncim_query_content_pane_t1_ParamLimits

0xe0f2,	// (0x0006ad8a) ncim_query_content_pane_t2_ParamLimits

0x81e5,	// (0x00064e7d) ncim_query_content_pane_t3_ParamLimits

0x81e5,	// (0x00064e7d) ncim_query_content_pane_t3

0x8202,	// (0x00064e9a) ncim_query_content_pane_t4_ParamLimits

0x8202,	// (0x00064e9a) ncim_query_content_pane_t4

0x821f,	// (0x00064eb7) ncim_query_content_pane_t5_ParamLimits

0x821f,	// (0x00064eb7) ncim_query_content_pane_t5

0xe104,	// (0x0006ad9c) ncim_query_content_pane_t6_ParamLimits

0xe104,	// (0x0006ad9c) ncim_query_content_pane_t6

0xfbf5,	// (0x0006c88d) ncim_query_content_pane_t_ParamLimits

0xe12c,	// (0x0006adc4) ncim_query_list_pane_ParamLimits

0xe13e,	// (0x0006add6) ncim_query_popup_pane_ParamLimits

0xe152,	// (0x0006adea) wait_bar_pane_cp04

0x9c89,	// (0x00066921) input_focus_pane_cp011

0xe15a,	// (0x0006adf2) ncim_query_popup_pane_t1

0xe168,	// (0x0006ae00) ncim_list_query_list_pane_ParamLimits

0xe168,	// (0x0006ae00) ncim_list_query_list_pane

0x9c89,	// (0x00066921) bg_button_pane_cp027

0xe17b,	// (0x0006ae13) ncim_query_button_pane_g1

0x9c89,	// (0x00066921) list_highlight_pane_cp012

0xe185,	// (0x0006ae1d) ncim_list_query_list_pane_g1

0xe18d,	// (0x0006ae25) ncim_list_query_list_pane_t1

0x6662,	// (0x000632fa) cam4_indicators_pane_g3_ParamLimits

0x6662,	// (0x000632fa) cam4_indicators_pane_g3

0x677c,	// (0x00063414) vid4_indicators_pane_g5_ParamLimits

0x677c,	// (0x00063414) vid4_indicators_pane_g5

0x77c2,	// (0x0006445a) vid4_progress_pane_g5_ParamLimits

0x77c2,	// (0x0006445a) vid4_progress_pane_g5

0x80af,	// (0x00064d47) main_ncimui_pane_g1

0x811b,	// (0x00064db3) ncimui_group_query_pane_ParamLimits

0x811b,	// (0x00064db3) ncimui_group_query_pane

0x8175,	// (0x00064e0d) ncimui_list_pane_ParamLimits

0x8175,	// (0x00064e0d) ncimui_list_pane

0x819c,	// (0x00064e34) ncimui_text_pane_ParamLimits

0x819c,	// (0x00064e34) ncimui_text_pane

0x823c,	// (0x00064ed4) ncimui_text_pane_t1_ParamLimits

0x823c,	// (0x00064ed4) ncimui_text_pane_t1

0xe19b,	// (0x0006ae33) ncimui_list_single_graphic_pane_ParamLimits

0xe19b,	// (0x0006ae33) ncimui_list_single_graphic_pane

0x825b,	// (0x00064ef3) ncimui_query_pane_ParamLimits

0x825b,	// (0x00064ef3) ncimui_query_pane

0x9c89,	// (0x00066921) list_highlight_pane_cp013

0xe1ab,	// (0x0006ae43) ncim_list_query_list_pane_t1_copy1

0xe185,	// (0x0006ae1d) ncim_list_single_graphic_pane_g1

0xe1b9,	// (0x0006ae51) ncim_query_button_pane_cp01

0xe1c5,	// (0x0006ae5d) ncim_query_entry_pane_ParamLimits

0xe1c5,	// (0x0006ae5d) ncim_query_entry_pane

0xe1d8,	// (0x0006ae70) ncimui_query_pane_g1

0xe1e4,	// (0x0006ae7c) ncimui_query_pane_t1_ParamLimits

0xe1e4,	// (0x0006ae7c) ncimui_query_pane_t1

0xa227,	// (0x00066ebf) input_focus_pane_cp012

0xe1fd,	// (0x0006ae95) ncim_query_entry_pane_t1

0xa753,	// (0x000673eb) main_im_pane_ParamLimits

0xa227,	// (0x00066ebf) main_mobtv_pane_ParamLimits

0xa227,	// (0x00066ebf) main_mobtv_pane

0x7e83,	// (0x00064b1b) main_cset6_slider_pane_g18_ParamLimits

0x7e83,	// (0x00064b1b) main_cset6_slider_pane_g18

0x7e8f,	// (0x00064b27) main_cset6_slider_pane_g19_ParamLimits

0x7e8f,	// (0x00064b27) main_cset6_slider_pane_g19

0xd659,	// (0x0006a2f1) bg_main_mobtv_pane_ParamLimits

0xd659,	// (0x0006a2f1) bg_main_mobtv_pane

0x826e,	// (0x00064f06) main_mobtv_info_pane

0x8279,	// (0x00064f11) main_mobtv_loading_pane_ParamLimits

0x8279,	// (0x00064f11) main_mobtv_loading_pane

0xe20f,	// (0x0006aea7) main_mobtv_pg_channel_list_pane

0xe219,	// (0x0006aeb1) main_mobtv_pg_hdr_pane

0x8286,	// (0x00064f1e) main_mobtv_programe_curr_pane_ParamLimits

0x8286,	// (0x00064f1e) main_mobtv_programe_curr_pane

0x8293,	// (0x00064f2b) main_mobtv_programe_next_pane_ParamLimits

0x8293,	// (0x00064f2b) main_mobtv_programe_next_pane

0xe222,	// (0x0006aeba) popup_mobtv_noti_window

0xcc91,	// (0x00069929) main_tv_pg_hdr_pane_g1

0xe22c,	// (0x0006aec4) main_tv_pg_hdr_pane_g2

0xe234,	// (0x0006aecc) main_tv_pg_hdr_pane_g3

0xe23c,	// (0x0006aed4) main_tv_pg_hdr_pane_g4

0xe244,	// (0x0006aedc) main_tv_pg_hdr_pane_g5

0xe24e,	// (0x0006aee6) main_tv_pg_hdr_pane_g6

0xe258,	// (0x0006aef0) main_tv_pg_hdr_pane_g7

0xe262,	// (0x0006aefa) main_tv_pg_hdr_pane_g8

0xe26c,	// (0x0006af04) main_tv_pg_hdr_pane_g9

0xe276,	// (0x0006af0e) main_tv_pg_hdr_pane_g10

0xe280,	// (0x0006af18) main_tv_pg_hdr_pane_g11

0x000a,

0xfc02,	// (0x0006c89a) main_tv_pg_hdr_pane_g

0xe28a,	// (0x0006af22) main_tv_pg_hdr_pane_t1

0xe298,	// (0x0006af30) main_tv_pg_hdr_pane_t2

0xe2a6,	// (0x0006af3e) main_tv_pg_hdr_pane_t3

0xe2b6,	// (0x0006af4e) main_tv_pg_hdr_pane_t4

0xe2c6,	// (0x0006af5e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc19,	// (0x0006c8b1) main_tv_pg_hdr_pane_t

0xe2d6,	// (0x0006af6e) single_mobtv_pg_channel_pane_ParamLimits

0xe2d6,	// (0x0006af6e) single_mobtv_pg_channel_pane

0xe2e8,	// (0x0006af80) single_mobtv_pg_channel_table_pane

0xe2f1,	// (0x0006af89) single_mobtv_pg_channel_thumb_pane

0xe2fa,	// (0x0006af92) single_tv_pg_channel_pane_g1

0xe303,	// (0x0006af9b) single_tv_pg_channel_pane_g2

0x0001,

0xfc24,	// (0x0006c8bc) single_tv_pg_channel_pane_g

0xcec1,	// (0x00069b59) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcec1,	// (0x00069b59) bg_single_mobtv_pg_channel_thumb_pane

0xe30c,	// (0x0006afa4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe30c,	// (0x0006afa4) single_mobtv_pg_channel_thumb_pane_g1

0xe31a,	// (0x0006afb2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe31a,	// (0x0006afb2) single_mobtv_pg_channel_thumb_pane_g2

0xe326,	// (0x0006afbe) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe326,	// (0x0006afbe) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc29,	// (0x0006c8c1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc29,	// (0x0006c8c1) single_mobtv_pg_channel_thumb_pane_g

0xe332,	// (0x0006afca) single_mobtv_pg_channel_thumb_pane_t1

0xe340,	// (0x0006afd8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc30,	// (0x0006c8c8) single_mobtv_pg_channel_thumb_pane_t

0xcc91,	// (0x00069929) bg_single_mobtv_pg_channel_table_pane_g1

0xcc91,	// (0x00069929) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e2,	// (0x0006c37a) bg_single_mobtv_pg_channel_table_pane_g

0xe34e,	// (0x0006afe6) single_mobtv_pg_channel_table_pane_t1

0xe35c,	// (0x0006aff4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc35,	// (0x0006c8cd) single_mobtv_pg_channel_table_pane_t

0x82a8,	// (0x00064f40) main_mobtv_info_pane_g1_ParamLimits

0x82a8,	// (0x00064f40) main_mobtv_info_pane_g1

0x82c4,	// (0x00064f5c) main_mobtv_info_pane_t1_ParamLimits

0x82c4,	// (0x00064f5c) main_mobtv_info_pane_t1

0x833c,	// (0x00064fd4) main_mobtv_info_pane_t2_ParamLimits

0x833c,	// (0x00064fd4) main_mobtv_info_pane_t2

0x0002,

0xfc3f,	// (0x0006c8d7) main_mobtv_info_pane_t_ParamLimits

0xfc3f,	// (0x0006c8d7) main_mobtv_info_pane_t

0x83cd,	// (0x00065065) wait_bar_pane_cp05

0x83df,	// (0x00065077) main_mobtv_loading_pane_g1_ParamLimits

0x83df,	// (0x00065077) main_mobtv_loading_pane_g1

0x83eb,	// (0x00065083) main_mobtv_loading_pane_g2_ParamLimits

0x83eb,	// (0x00065083) main_mobtv_loading_pane_g2

0x83f7,	// (0x0006508f) main_mobtv_loading_pane_g3_ParamLimits

0x83f7,	// (0x0006508f) main_mobtv_loading_pane_g3

0x0002,

0xfc46,	// (0x0006c8de) main_mobtv_loading_pane_g_ParamLimits

0xfc46,	// (0x0006c8de) main_mobtv_loading_pane_g

0xe36a,	// (0x0006b002) main_mobtv_loading_pane_t1_ParamLimits

0xe36a,	// (0x0006b002) main_mobtv_loading_pane_t1

0xe382,	// (0x0006b01a) main_mobtv_loading_pane_t2_ParamLimits

0xe382,	// (0x0006b01a) main_mobtv_loading_pane_t2

0x0001,

0xfc4d,	// (0x0006c8e5) main_mobtv_loading_pane_t_ParamLimits

0xfc4d,	// (0x0006c8e5) main_mobtv_loading_pane_t

0x8405,	// (0x0006509d) wait_bar_pane_cp06_ParamLimits

0x8405,	// (0x0006509d) wait_bar_pane_cp06

0xe3a6,	// (0x0006b03e) main_mobtv_programe_curr_pane_t1

0xe3b4,	// (0x0006b04c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc52,	// (0x0006c8ea) main_mobtv_programe_curr_pane_t

0xe3c2,	// (0x0006b05a) main_mobtv_programe_next_pane_t1

0xe3d0,	// (0x0006b068) main_mobtv_programe_next_pane_t2

0xe3de,	// (0x0006b076) main_mobtv_programe_next_pane_t3

0x0002,

0xfc57,	// (0x0006c8ef) main_mobtv_programe_next_pane_t

0x9c89,	// (0x00066921) bg_popup_mobtv_noti_window_pane

0xe3ec,	// (0x0006b084) popup_mobtv_noti_window_g1

0xe3f4,	// (0x0006b08c) popup_mobtv_noti_window_t1

0xe402,	// (0x0006b09a) popup_mobtv_noti_window_t2

0x0001,

0xfc5e,	// (0x0006c8f6) popup_mobtv_noti_window_t

0xcc91,	// (0x00069929) bg_popup_mobtv_noti_window_pane_g1

0x9c89,	// (0x00066921) sc_clock_pane

0x9c89,	// (0x00066921) main_fs_bigclock_pane

0x79df,	// (0x00064677) blid2_tripm_pane_t4_ParamLimits

0x79df,	// (0x00064677) blid2_tripm_pane_t4

0x8411,	// (0x000650a9) sc_clock_pane_g1_ParamLimits

0x8411,	// (0x000650a9) sc_clock_pane_g1

0x841f,	// (0x000650b7) sc_clock_pane_t1_ParamLimits

0x841f,	// (0x000650b7) sc_clock_pane_t1

0x8434,	// (0x000650cc) sc_clock_pane_t2_ParamLimits

0x8434,	// (0x000650cc) sc_clock_pane_t2

0x8446,	// (0x000650de) sc_clock_pane_t3_ParamLimits

0x8446,	// (0x000650de) sc_clock_pane_t3

0x0004,

0xfc63,	// (0x0006c8fb) sc_clock_pane_t_ParamLimits

0xfc63,	// (0x0006c8fb) sc_clock_pane_t

0x9283,	// (0x00065f1b) main_fs_bigclock_indicator_pane_ParamLimits

0x9283,	// (0x00065f1b) main_fs_bigclock_indicator_pane

0x84d3,	// (0x0006516b) main_fs_bigclock_pane_g1_ParamLimits

0x84d3,	// (0x0006516b) main_fs_bigclock_pane_g1

0x928f,	// (0x00065f27) main_fs_bigclock_pane_t1_ParamLimits

0x928f,	// (0x00065f27) main_fs_bigclock_pane_t1

0x92a1,	// (0x00065f39) main_fs_bigclock_pane_t2_ParamLimits

0x92a1,	// (0x00065f39) main_fs_bigclock_pane_t2

0x92b5,	// (0x00065f4d) main_fs_bigclock_pane_t3_ParamLimits

0x92b5,	// (0x00065f4d) main_fs_bigclock_pane_t3

0x0002,

0xfe67,	// (0x0006caff) main_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0006caff) main_fs_bigclock_pane_t

0xec55,	// (0x0006b8ed) main_fs_bigclock_indicator_pane_g1

0xe0d2,	// (0x0006ad6a) ncim_query_content_pane_g2_ParamLimits

0xe0d2,	// (0x0006ad6a) ncim_query_content_pane_g2

0x0001,

0xfbf0,	// (0x0006c888) ncim_query_content_pane_g_ParamLimits

0xfbf0,	// (0x0006c888) ncim_query_content_pane_g

0x8458,	// (0x000650f0) sc_clock_pane_t4_ParamLimits

0x8458,	// (0x000650f0) sc_clock_pane_t4

0xa227,	// (0x00066ebf) main_radioblah_pane

0xd5c4,	// (0x0006a25c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c4,	// (0x0006a25c) cell_call4_button_pane_t1_copy1

0x80cb,	// (0x00064d63) main_ncimui_pane_t1_ParamLimits

0x80cb,	// (0x00064d63) main_ncimui_pane_t1

0x80e5,	// (0x00064d7d) main_ncimui_pane_t2_ParamLimits

0x80e5,	// (0x00064d7d) main_ncimui_pane_t2

0x0002,

0xfbe9,	// (0x0006c881) main_ncimui_pane_t_ParamLimits

0xfbe9,	// (0x0006c881) main_ncimui_pane_t

0xe54e,	// (0x0006b1e6) main_radioblah_anim_pane_ParamLimits

0xe54e,	// (0x0006b1e6) main_radioblah_anim_pane

0xe55f,	// (0x0006b1f7) main_radioblah_info_pane_ParamLimits

0xe55f,	// (0x0006b1f7) main_radioblah_info_pane

0xe573,	// (0x0006b20b) main_radioblah_pane_t1_ParamLimits

0xe573,	// (0x0006b20b) main_radioblah_pane_t1

0xe58f,	// (0x0006b227) main_radioblah_pane_t2_ParamLimits

0xe58f,	// (0x0006b227) main_radioblah_pane_t2

0x0003,

0xfc84,	// (0x0006c91c) main_radioblah_pane_t_ParamLimits

0xfc84,	// (0x0006c91c) main_radioblah_pane_t

0x8525,	// (0x000651bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8525,	// (0x000651bd) main_radioblah_rocker_ctrl_pane

0xe5d7,	// (0x0006b26f) main_radioblah_info_pane_t1_ParamLimits

0xe5d7,	// (0x0006b26f) main_radioblah_info_pane_t1

0x856e,	// (0x00065206) main_radioblah_info_pane_t2_ParamLimits

0x856e,	// (0x00065206) main_radioblah_info_pane_t2

0x0003,

0xfc8d,	// (0x0006c925) main_radioblah_info_pane_t_ParamLimits

0xfc8d,	// (0x0006c925) main_radioblah_info_pane_t

0xcc91,	// (0x00069929) main_radioblah_rocker_ctrl_pane_g1

0x861e,	// (0x000652b6) main_radioblah_rocker_ctrl_pane_g2

0x8626,	// (0x000652be) main_radioblah_rocker_ctrl_pane_g3

0x862e,	// (0x000652c6) main_radioblah_rocker_ctrl_pane_g4

0x8636,	// (0x000652ce) main_radioblah_rocker_ctrl_pane_g5

0x863e,	// (0x000652d6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc96,	// (0x0006c92e) main_radioblah_rocker_ctrl_pane_g

0x807d,	// (0x00064d15) main_cset_text2_pane_t1_copy1_ParamLimits

0x6581,	// (0x00063219) cam4_image_uncrop_qvga_pane

0x66d4,	// (0x0006336c) vid4_image_uncrop_qcif_pane

0x7b71,	// (0x00064809) cam6_image_uncrop_qvga_pane_ParamLimits

0x7b71,	// (0x00064809) cam6_image_uncrop_qvga_pane

0xddaf,	// (0x0006aa47) vid6_image_uncrop_qcif_pane_ParamLimits

0xddaf,	// (0x0006aa47) vid6_image_uncrop_qcif_pane

0x9c89,	// (0x00066921) bg_popup_preview_window_pane_cp03

0xe084,	// (0x0006ad1c) list_cset_text2_pane

0xe08c,	// (0x0006ad24) main_cset6_text2_pane_g1

0xe094,	// (0x0006ad2c) main_cset6_text2_pane_t1

0x8646,	// (0x000652de) list_cset_text2_pane_t1_ParamLimits

0x8646,	// (0x000652de) list_cset_text2_pane_t1

0xa227,	// (0x00066ebf) main_radioblah_pane_ParamLimits

0x83b9,	// (0x00065051) main_mobtv_info_pane_t3_ParamLimits

0x83b9,	// (0x00065051) main_mobtv_info_pane_t3

0x8513,	// (0x000651ab) main_radioblah_pane_g1

0x853e,	// (0x000651d6) main_radioblah_info_pane_g1

0x85c3,	// (0x0006525b) main_radioblah_info_pane_t3_ParamLimits

0x85c3,	// (0x0006525b) main_radioblah_info_pane_t3

0x31ee,	// (0x0005fe86) highlight_cell_cale_month_pane_ParamLimits

0x31ee,	// (0x0005fe86) highlight_cell_cale_month_pane

0x9c89,	// (0x00066921) main_phob_fisheye_pane

0xcf9d,	// (0x00069c35) scroll_pane_cp0031_ParamLimits

0xcf9d,	// (0x00069c35) scroll_pane_cp0031

0xdec1,	// (0x0006ab59) wait_bar_pane_cp08_ParamLimits

0x7d7f,	// (0x00064a17) cset_list_set_pane_copy1_ParamLimits

0xe611,	// (0x0006b2a9) highlight_cell_cale_month_pane_g1

0x865d,	// (0x000652f5) highlight_cell_cale_month_pane_t1

0xdb34,	// (0x0006a7cc) list_gen_pane_cp01

0xd797,	// (0x0006a42f) scroll_pane_01

0x866b,	// (0x00065303) list_single_double_fisheye_pane

0x8674,	// (0x0006530c) list_double_fisheye_pane_g1_ParamLimits

0x8674,	// (0x0006530c) list_double_fisheye_pane_g1

0x8680,	// (0x00065318) list_double_fisheye_pane_g2_ParamLimits

0x8680,	// (0x00065318) list_double_fisheye_pane_g2

0x8694,	// (0x0006532c) list_double_fisheye_pane_g3_ParamLimits

0x8694,	// (0x0006532c) list_double_fisheye_pane_g3

0x0004,

0xfca3,	// (0x0006c93b) list_double_fisheye_pane_g_ParamLimits

0xfca3,	// (0x0006c93b) list_double_fisheye_pane_g

0x86bd,	// (0x00065355) list_double_fisheye_pane_t1_ParamLimits

0x86bd,	// (0x00065355) list_double_fisheye_pane_t1

0x86d8,	// (0x00065370) list_double_fisheye_pane_t2_ParamLimits

0x86d8,	// (0x00065370) list_double_fisheye_pane_t2

0x0001,

0xfcae,	// (0x0006c946) list_double_fisheye_pane_t_ParamLimits

0xfcae,	// (0x0006c946) list_double_fisheye_pane_t

0x9c89,	// (0x00066921) main_call5_pane

0x847e,	// (0x00065116) sc_swipe_pane_ParamLimits

0x847e,	// (0x00065116) sc_swipe_pane

0x8706,	// (0x0006539e) call5_image_pane_ParamLimits

0x8706,	// (0x0006539e) call5_image_pane

0x8718,	// (0x000653b0) call5_swipe_1_pane_ParamLimits

0x8718,	// (0x000653b0) call5_swipe_1_pane

0x8724,	// (0x000653bc) call5_swipe_2_pane_ParamLimits

0x8724,	// (0x000653bc) call5_swipe_2_pane

0x8740,	// (0x000653d8) popup_call5_audio_first_window_ParamLimits

0x8740,	// (0x000653d8) popup_call5_audio_first_window

0xcec1,	// (0x00069b59) call5_swipe_1_pane_g1_ParamLimits

0xcec1,	// (0x00069b59) call5_swipe_1_pane_g1

0xe619,	// (0x0006b2b1) call5_swipe_1_pane_g2_ParamLimits

0xe619,	// (0x0006b2b1) call5_swipe_1_pane_g2

0x0001,

0xfcb3,	// (0x0006c94b) call5_swipe_1_pane_g_ParamLimits

0xfcb3,	// (0x0006c94b) call5_swipe_1_pane_g

0xe625,	// (0x0006b2bd) call5_swipe_1_pane_t1_ParamLimits

0xe625,	// (0x0006b2bd) call5_swipe_1_pane_t1

0xcec1,	// (0x00069b59) call5_swipe_2_pane_g1_ParamLimits

0xcec1,	// (0x00069b59) call5_swipe_2_pane_g1

0xe63a,	// (0x0006b2d2) call5_swipe_2_pane_g2_ParamLimits

0xe63a,	// (0x0006b2d2) call5_swipe_2_pane_g2

0x0001,

0xfcb8,	// (0x0006c950) call5_swipe_2_pane_g_ParamLimits

0xfcb8,	// (0x0006c950) call5_swipe_2_pane_g

0xe646,	// (0x0006b2de) call5_swipe_2_pane_t1_ParamLimits

0xe646,	// (0x0006b2de) call5_swipe_2_pane_t1

0xe65b,	// (0x0006b2f3) sc_swipe_pane_g1_ParamLimits

0xe65b,	// (0x0006b2f3) sc_swipe_pane_g1

0xe668,	// (0x0006b300) sc_swipe_pane_g2_ParamLimits

0xe668,	// (0x0006b300) sc_swipe_pane_g2

0x0001,

0xfcbd,	// (0x0006c955) sc_swipe_pane_g_ParamLimits

0xfcbd,	// (0x0006c955) sc_swipe_pane_g

0xe674,	// (0x0006b30c) sc_swipe_pane_t1_ParamLimits

0xe674,	// (0x0006b30c) sc_swipe_pane_t1

0x9c89,	// (0x00066921) main_cmail_launcher_pane

0x8750,	// (0x000653e8) aid_size_cell_cmail_l_ParamLimits

0x8750,	// (0x000653e8) aid_size_cell_cmail_l

0x8760,	// (0x000653f8) grid_cmail_l_pane_ParamLimits

0x8760,	// (0x000653f8) grid_cmail_l_pane

0x8770,	// (0x00065408) cell_cmail_l_pane_ParamLimits

0x8770,	// (0x00065408) cell_cmail_l_pane

0x8786,	// (0x0006541e) cell_cmail_l_pane_g1_ParamLimits

0x8786,	// (0x0006541e) cell_cmail_l_pane_g1

0x8792,	// (0x0006542a) cell_cmail_l_pane_t1_ParamLimits

0x8792,	// (0x0006542a) cell_cmail_l_pane_t1

0xe689,	// (0x0006b321) cell_cmail_l_pane_t2_ParamLimits

0xe689,	// (0x0006b321) cell_cmail_l_pane_t2

0x0001,

0xfcc2,	// (0x0006c95a) cell_cmail_l_pane_t_ParamLimits

0xfcc2,	// (0x0006c95a) cell_cmail_l_pane_t

0xa227,	// (0x00066ebf) grid_highlight_pane_cp018_ParamLimits

0xa227,	// (0x00066ebf) grid_highlight_pane_cp018

0x0ef4,	// (0x0005db8c) main2_pane_ParamLimits

0x0ef4,	// (0x0005db8c) main2_pane

0xa7fe,	// (0x00067496) popup_sp_fs_action_menu_bg_pane_g1

0xa806,	// (0x0006749e) popup_sp_fs_action_menu_bg_pane_g2

0xa80e,	// (0x000674a6) popup_sp_fs_action_menu_bg_pane_g3

0xa816,	// (0x000674ae) popup_sp_fs_action_menu_bg_pane_g4

0xa81e,	// (0x000674b6) popup_sp_fs_action_menu_bg_pane_g5

0xa826,	// (0x000674be) popup_sp_fs_action_menu_bg_pane_g6

0xa82e,	// (0x000674c6) popup_sp_fs_action_menu_bg_pane_g7

0xa836,	// (0x000674ce) popup_sp_fs_action_menu_bg_pane_g8

0xa83e,	// (0x000674d6) popup_sp_fs_action_menu_bg_pane_g9

0xa846,	// (0x000674de) popup_sp_fs_action_menu_bg_pane_g10

0xa846,	// (0x000674de) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0006be2b) popup_sp_fs_action_menu_bg_pane_g

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g3_g1

0x20e0,	// (0x0005ed78) list_medium_line_x2_t3_g3_g2_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_t3_g3_g2

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0006bedb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0006bedb) list_medium_line_x2_t3_g3_g

0x20ec,	// (0x0005ed84) list_medium_line_x2_t3_g3_t1_ParamLimits

0x20ec,	// (0x0005ed84) list_medium_line_x2_t3_g3_t1

0x2101,	// (0x0005ed99) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2101,	// (0x0005ed99) list_medium_line_x2_t3_g3_t2

0x2115,	// (0x0005edad) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0006bee2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0006bee2) list_medium_line_x2_t3_g3_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g2_g1

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0006bee9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0006bee9) list_medium_line_x2_t3_g2_g

0x212a,	// (0x0005edc2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x212a,	// (0x0005edc2) list_medium_line_x2_t3_g2_t1

0x2140,	// (0x0005edd8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2140,	// (0x0005edd8) list_medium_line_x2_t3_g2_t2

0x2152,	// (0x0005edea) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2152,	// (0x0005edea) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0006beee) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0006beee) list_medium_line_x2_t3_g2_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t4_g4_g1

0x216f,	// (0x0005ee07) list_medium_line_x2_t4_g4_g2_ParamLimits

0x216f,	// (0x0005ee07) list_medium_line_x2_t4_g4_g2

0x20e0,	// (0x0005ed78) list_medium_line_x2_t4_g4_g3_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_t4_g4_g3

0x217b,	// (0x0005ee13) list_medium_line_x2_t4_g4_g4_ParamLimits

0x217b,	// (0x0005ee13) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0006bef5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0006bef5) list_medium_line_x2_t4_g4_g

0x2187,	// (0x0005ee1f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2187,	// (0x0005ee1f) list_medium_line_x2_t4_g4_t1

0x21a1,	// (0x0005ee39) list_medium_line_x2_t4_g4_t2_ParamLimits

0x21a1,	// (0x0005ee39) list_medium_line_x2_t4_g4_t2

0x21b7,	// (0x0005ee4f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x21b7,	// (0x0005ee4f) list_medium_line_x2_t4_g4_t3

0x21cc,	// (0x0005ee64) list_medium_line_x2_t4_g4_t4_ParamLimits

0x21cc,	// (0x0005ee64) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0006befe) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0006befe) list_medium_line_x2_t4_g4_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g4_g1

0x216f,	// (0x0005ee07) list_medium_line_x2_t2_g4_g2_ParamLimits

0x216f,	// (0x0005ee07) list_medium_line_x2_t2_g4_g2

0x20e0,	// (0x0005ed78) list_medium_line_x2_t2_g4_g3_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_t2_g4_g3

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0006bf65) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0006bf65) list_medium_line_x2_t2_g4_g

0x3214,	// (0x0005feac) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3214,	// (0x0005feac) list_medium_line_x2_t2_g4_t1

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0006bf6e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0006bf6e) list_medium_line_x2_t2_g4_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g3_g1

0x20e0,	// (0x0005ed78) list_medium_line_x2_t2_g3_g2_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_t2_g3_g2

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0006bedb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0006bedb) list_medium_line_x2_t2_g3_g

0x3229,	// (0x0005fec1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3229,	// (0x0005fec1) list_medium_line_x2_t2_g3_t1

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0006bf73) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0006bf73) list_medium_line_x2_t2_g3_t

0x33c0,	// (0x00060058) main_sp_fs_list_pane_ParamLimits

0x33c0,	// (0x00060058) main_sp_fs_list_pane

0x33cc,	// (0x00060064) sp_fs_scroll_pane_ParamLimits

0x33cc,	// (0x00060064) sp_fs_scroll_pane

0x33d8,	// (0x00060070) list_medium_line_x2_t3_t1

0x33e8,	// (0x00060080) list_medium_line_x2_t3_t2

0x33f6,	// (0x0006008e) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0006bfbe) list_medium_line_x2_t3_t

0x3404,	// (0x0006009c) list_medium_line_x3_t4_t1

0x3414,	// (0x000600ac) list_medium_line_x3_t4_t2

0x3422,	// (0x000600ba) list_medium_line_x3_t4_t3

0x33f6,	// (0x0006008e) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0006bfc5) list_medium_line_x3_t4_t

0x3430,	// (0x000600c8) list_medium_line_x4_t5_t1

0x3440,	// (0x000600d8) list_medium_line_x4_t5_t2

0x3422,	// (0x000600ba) list_medium_line_x4_t5_t3

0x344e,	// (0x000600e6) list_medium_line_x4_t5_t4

0x33f6,	// (0x0006008e) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0006bfce) list_medium_line_x4_t5_t

0xa1cd,	// (0x00066e65) list_medium_line_t4_g4_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_t4_g4_g1

0xa1e5,	// (0x00066e7d) list_medium_line_t4_g4_g2_ParamLimits

0xa1e5,	// (0x00066e7d) list_medium_line_t4_g4_g2

0x345c,	// (0x000600f4) list_medium_line_t4_g4_g3_ParamLimits

0x345c,	// (0x000600f4) list_medium_line_t4_g4_g3

0xa1d9,	// (0x00066e71) list_medium_line_t4_g4_g4_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0006bfd9) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0006bfd9) list_medium_line_t4_g4_g

0x3468,	// (0x00060100) list_medium_line_t4_g4_t1_ParamLimits

0x3468,	// (0x00060100) list_medium_line_t4_g4_t1

0x347d,	// (0x00060115) list_medium_line_t4_g4_t2_ParamLimits

0x347d,	// (0x00060115) list_medium_line_t4_g4_t2

0x3492,	// (0x0006012a) list_medium_line_t4_g4_t3_ParamLimits

0x3492,	// (0x0006012a) list_medium_line_t4_g4_t3

0x2115,	// (0x0005edad) list_medium_line_t4_g4_t4_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0006bfe2) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0006bfe2) list_medium_line_t4_g4_t

0x35ba,	// (0x00060252) chi_dic_find_pane_g1

0x4626,	// (0x000612be) main_tport_pane

0x709d,	// (0x00063d35) list_medium_line_plain_t1

0x7190,	// (0x00063e28) list_medium_line_t2_g2_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t2_g2_g1

0x719c,	// (0x00063e34) list_medium_line_t2_g2_g2_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_t2_g2_g2

0x0001,

0xfa01,	// (0x0006c699) list_medium_line_t2_g2_g_ParamLimits

0xfa01,	// (0x0006c699) list_medium_line_t2_g2_g

0x71a8,	// (0x00063e40) list_medium_line_t2_g2_t1_ParamLimits

0x71a8,	// (0x00063e40) list_medium_line_t2_g2_t1

0x71bf,	// (0x00063e57) list_medium_line_t2_g2_t2_ParamLimits

0x71bf,	// (0x00063e57) list_medium_line_t2_g2_t2

0x0001,

0xfa06,	// (0x0006c69e) list_medium_line_t2_g2_t_ParamLimits

0xfa06,	// (0x0006c69e) list_medium_line_t2_g2_t

0xa329,	// (0x00066fc1) aid_sp_fs_list_icon_a_sm

0xa331,	// (0x00066fc9) aid_sp_fs_list_icon_d

0xa339,	// (0x00066fd1) aid_sp_fs_text_primary

0xdd9e,	// (0x0006aa36) aid_sp_fs_text_secondary

0x7825,	// (0x000644bd) list_medium_line

0x7825,	// (0x000644bd) list_medium_line_g2

0x7825,	// (0x000644bd) list_medium_line_g3

0x7825,	// (0x000644bd) list_medium_line_plain

0x7825,	// (0x000644bd) list_medium_line_plain_t2

0x7825,	// (0x000644bd) list_medium_line_plain_t3

0x7825,	// (0x000644bd) list_medium_line_right_icon

0x7825,	// (0x000644bd) list_medium_line_right_iconx2

0x7825,	// (0x000644bd) list_medium_line_t2

0x7825,	// (0x000644bd) list_medium_line_t2_g2

0x7825,	// (0x000644bd) list_medium_line_t2_g3

0x7825,	// (0x000644bd) list_medium_line_t2_right_icon

0x7825,	// (0x000644bd) list_medium_line_t2_right_iconx2

0x7825,	// (0x000644bd) list_medium_line_t3

0x7825,	// (0x000644bd) list_medium_line_t3_g2

0x7825,	// (0x000644bd) list_medium_line_t3_g3

0x7825,	// (0x000644bd) list_medium_line_t3_right_iconx2

0x782e,	// (0x000644c6) list_medium_line_t4_g4

0x7837,	// (0x000644cf) list_medium_line_x2

0x7837,	// (0x000644cf) list_medium_line_x2_t2_g2

0x7837,	// (0x000644cf) list_medium_line_x2_t2_g3

0x7837,	// (0x000644cf) list_medium_line_x2_t2_g4

0x7837,	// (0x000644cf) list_medium_line_x2_t3

0x7837,	// (0x000644cf) list_medium_line_x2_t3_g2

0x7837,	// (0x000644cf) list_medium_line_x2_t3_g3

0x7837,	// (0x000644cf) list_medium_line_x2_t3_g4

0x7837,	// (0x000644cf) list_medium_line_x2_t4_g2

0x7837,	// (0x000644cf) list_medium_line_x2_t4_g4

0x7840,	// (0x000644d8) list_medium_line_x3

0x7840,	// (0x000644d8) list_medium_line_x3_t4

0x7840,	// (0x000644d8) list_medium_line_x3_t4_g4

0x782e,	// (0x000644c6) list_medium_line_x4_t4

0x782e,	// (0x000644c6) list_medium_line_x4_t4_g7

0x782e,	// (0x000644c6) list_medium_line_x4_t5

0x7849,	// (0x000644e1) list_single_fs_dyc_pane_ParamLimits

0x7849,	// (0x000644e1) list_single_fs_dyc_pane

0xa1cd,	// (0x00066e65) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x4_t4_g7_g1

0xa342,	// (0x00066fda) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa342,	// (0x00066fda) list_medium_line_x4_t4_g7_g2

0x7fd7,	// (0x00064c6f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7fd7,	// (0x00064c6f) list_medium_line_x4_t4_g7_g3

0x7fe6,	// (0x00064c7e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7fe6,	// (0x00064c7e) list_medium_line_x4_t4_g7_g4

0x7ff2,	// (0x00064c8a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ff2,	// (0x00064c8a) list_medium_line_x4_t4_g7_g5

0x8001,	// (0x00064c99) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8001,	// (0x00064c99) list_medium_line_x4_t4_g7_g6

0xa34e,	// (0x00066fe6) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa34e,	// (0x00066fe6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbca,	// (0x0006c862) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbca,	// (0x0006c862) list_medium_line_x4_t4_g7_g

0x8010,	// (0x00064ca8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8010,	// (0x00064ca8) list_medium_line_x4_t4_g7_t1

0x8025,	// (0x00064cbd) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8025,	// (0x00064cbd) list_medium_line_x4_t4_g7_t2

0x803a,	// (0x00064cd2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x803a,	// (0x00064cd2) list_medium_line_x4_t4_g7_t3

0x804f,	// (0x00064ce7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x804f,	// (0x00064ce7) list_medium_line_x4_t4_g7_t4

0xa35a,	// (0x00066ff2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa35a,	// (0x00066ff2) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd9,	// (0x0006c871) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd9,	// (0x0006c871) list_medium_line_x4_t4_g7_t

0x8061,	// (0x00064cf9) list_single_dyc_row_pane_ParamLimits

0x8061,	// (0x00064cf9) list_single_dyc_row_pane

0x86fa,	// (0x00065392) call5_gesture_pane_ParamLimits

0x86fa,	// (0x00065392) call5_gesture_pane

0x8730,	// (0x000653c8) call5_windows_pane_ParamLimits

0x8730,	// (0x000653c8) call5_windows_pane

0x87a8,	// (0x00065440) call5_swipe_1_pane_cp_ParamLimits

0x87a8,	// (0x00065440) call5_swipe_1_pane_cp

0x87b4,	// (0x0006544c) call5_swipe_2_pane_cp_ParamLimits

0x87b4,	// (0x0006544c) call5_swipe_2_pane_cp

0xb427,	// (0x000680bf) call5_image_pane_cp

0x87c0,	// (0x00065458) popup_call5_audio_first_window_cp_ParamLimits

0x87c0,	// (0x00065458) popup_call5_audio_first_window_cp

0xe65b,	// (0x0006b2f3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65b,	// (0x0006b2f3) call5_swipe_1_pane_g1_cp

0xe69b,	// (0x0006b333) call5_swipe_1_pane_g2_cp

0xe674,	// (0x0006b30c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe674,	// (0x0006b30c) call5_swipe_1_pane_t1_cp

0xe65b,	// (0x0006b2f3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65b,	// (0x0006b2f3) call5_swipe_2_pane_g1_cp

0xe6a3,	// (0x0006b33b) call5_swipe_2_pane_g2_cp

0xe6ab,	// (0x0006b343) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ab,	// (0x0006b343) call5_swipe_2_pane_t1_cp

0xa227,	// (0x00066ebf) main_sp_fs_email_pane

0xe6c0,	// (0x0006b358) main_sp_fs_listscroll_pane_te

0xa36c,	// (0x00067004) popup_sp_fs_action_menu_pane_ParamLimits

0xa36c,	// (0x00067004) popup_sp_fs_action_menu_pane

0xcc91,	// (0x00069929) bg_sp_fs_ctrlbar_pane_g1

0xe6c9,	// (0x0006b361) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d2,	// (0x0006b36a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6db,	// (0x0006b373) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc91,	// (0x00069929) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc7,	// (0x0006c95f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca70,	// (0x00069708) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca70,	// (0x00069708) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e4,	// (0x0006b37c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e4,	// (0x0006b37c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f0,	// (0x0006b388) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f0,	// (0x0006b388) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd0,	// (0x0006c968) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd0,	// (0x0006c968) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6fc,	// (0x0006b394) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6fc,	// (0x0006b394) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x87ce,	// (0x00065466) list_medium_line_t2_right_icon_g1

0x87d6,	// (0x0006546e) list_medium_line_t2_right_icon_t1

0x87e6,	// (0x0006547e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd5,	// (0x0006c96d) list_medium_line_t2_right_icon_t

0xc840,	// (0x000694d8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc840,	// (0x000694d8) bg_sp_fs_ctrlbar_pane

0x884d,	// (0x000654e5) main_sp_fs_ctrlbar_button_pane_cp01

0x8855,	// (0x000654ed) main_sp_fs_ctrlbar_ddmenu_pane

0xe74e,	// (0x0006b3e6) main_sp_fs_ctrlbar_pane_g1

0xe75a,	// (0x0006b3f2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcda,	// (0x0006c972) main_sp_fs_ctrlbar_pane_g

0xe766,	// (0x0006b3fe) main_sp_fs_ctrlbar_pane_t1

0x885f,	// (0x000654f7) main_sp_fs_ctrlbar_pane

0x8879,	// (0x00065511) main_sp_fs_listscroll_pane_te_cp01

0x888a,	// (0x00065522) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x888a,	// (0x00065522) popup_sp_fs_action_menu_pane_cp01

0xa227,	// (0x00066ebf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa227,	// (0x00066ebf) bg_sp_fs_highlight_list_pane_cp01

0xa3b2,	// (0x0006704a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa3b2,	// (0x0006704a) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x0006b42e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x0006b42e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce4,	// (0x0006c97c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce4,	// (0x0006c97c) sp_fs_action_menu_list_gene_pane_g

0xa3c1,	// (0x00067059) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa3c1,	// (0x00067059) sp_fs_action_menu_list_gene_pane_t1

0xa3d9,	// (0x00067071) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa3d9,	// (0x00067071) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x0006b43b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x0006b43b) popup_sp_fs_action_menu_bg_pane

0xa3fc,	// (0x00067094) sp_fs_action_menu_list_pane_ParamLimits

0xa3fc,	// (0x00067094) sp_fs_action_menu_list_pane

0xe7b1,	// (0x0006b449) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b1,	// (0x0006b449) sp_fs_scroll_pane_cp01

0x88b4,	// (0x0006554c) list_medium_line_plain_t2_t1

0x88c4,	// (0x0006555c) list_medium_line_plain_t2_t2

0x0001,

0xfce9,	// (0x0006c981) list_medium_line_plain_t2_t

0x88d2,	// (0x0006556a) list_medium_line_plain_t3_t1

0x88e2,	// (0x0006557a) list_medium_line_plain_t3_t2

0x88f0,	// (0x00065588) list_medium_line_plain_t3_t3

0x0002,

0xfcee,	// (0x0006c986) list_medium_line_plain_t3_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t2_g2_g1

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0006bee9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0006bee9) list_medium_line_x2_t2_g2_g

0x3468,	// (0x00060100) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3468,	// (0x00060100) list_medium_line_x2_t2_g2_t1

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf5,	// (0x0006c98d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf5,	// (0x0006c98d) list_medium_line_x2_t2_g2_t

0xa1cd,	// (0x00066e65) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t4_g2_g1

0xa420,	// (0x000670b8) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa420,	// (0x000670b8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcfa,	// (0x0006c992) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcfa,	// (0x0006c992) list_medium_line_x2_t4_g2_g

0x88fe,	// (0x00065596) list_medium_line_x2_t4_g2_t1_ParamLimits

0x88fe,	// (0x00065596) list_medium_line_x2_t4_g2_t1

0x8918,	// (0x000655b0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8918,	// (0x000655b0) list_medium_line_x2_t4_g2_t2

0x892e,	// (0x000655c6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x892e,	// (0x000655c6) list_medium_line_x2_t4_g2_t3

0x2115,	// (0x0005edad) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcff,	// (0x0006c997) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcff,	// (0x0006c997) list_medium_line_x2_t4_g2_t

0x8943,	// (0x000655db) list_medium_line_t3_right_iconx2_g1

0x87ce,	// (0x00065466) list_medium_line_t3_right_iconx2_g2

0x894b,	// (0x000655e3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd08,	// (0x0006c9a0) list_medium_line_t3_right_iconx2_g

0x8955,	// (0x000655ed) list_medium_line_t3_right_iconx2_t1

0x8965,	// (0x000655fd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0f,	// (0x0006c9a7) list_medium_line_t3_right_iconx2_t

0xa1cd,	// (0x00066e65) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x3_t4_g4_g1

0x20e0,	// (0x0005ed78) list_medium_line_x3_t4_g4_g2_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x3_t4_g4_g2

0xa1e5,	// (0x00066e7d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa1e5,	// (0x00066e7d) list_medium_line_x3_t4_g4_g3

0x8973,	// (0x0006560b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8973,	// (0x0006560b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd14,	// (0x0006c9ac) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd14,	// (0x0006c9ac) list_medium_line_x3_t4_g4_g

0x897f,	// (0x00065617) list_medium_line_x3_t4_g4_t1_ParamLimits

0x897f,	// (0x00065617) list_medium_line_x3_t4_g4_t1

0x8996,	// (0x0006562e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8996,	// (0x0006562e) list_medium_line_x3_t4_g4_t2

0x347d,	// (0x00060115) list_medium_line_x3_t4_g4_t3_ParamLimits

0x347d,	// (0x00060115) list_medium_line_x3_t4_g4_t3

0x89ab,	// (0x00065643) list_medium_line_x3_t4_g4_t4_ParamLimits

0x89ab,	// (0x00065643) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1d,	// (0x0006c9b5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1d,	// (0x0006c9b5) list_medium_line_x3_t4_g4_t

0x89c8,	// (0x00065660) list_single_dyc_row_text_pane_t1_ParamLimits

0x89c8,	// (0x00065660) list_single_dyc_row_text_pane_t1

0x8a05,	// (0x0006569d) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a05,	// (0x0006569d) list_single_dyc_row_text_pane_t2

0xa432,	// (0x000670ca) list_single_dyc_row_text_pane_t3_ParamLimits

0xa432,	// (0x000670ca) list_single_dyc_row_text_pane_t3

0x0002,

0xfd26,	// (0x0006c9be) list_single_dyc_row_text_pane_t_ParamLimits

0xfd26,	// (0x0006c9be) list_single_dyc_row_text_pane_t

0xa444,	// (0x000670dc) list_single_dyc_row_pane_g1_ParamLimits

0xa444,	// (0x000670dc) list_single_dyc_row_pane_g1

0xa450,	// (0x000670e8) list_single_dyc_row_pane_g2_ParamLimits

0xa450,	// (0x000670e8) list_single_dyc_row_pane_g2

0xa45c,	// (0x000670f4) list_single_dyc_row_pane_g3_ParamLimits

0xa45c,	// (0x000670f4) list_single_dyc_row_pane_g3

0xa468,	// (0x00067100) list_single_dyc_row_pane_g4_ParamLimits

0xa468,	// (0x00067100) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0006c9c5) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0006c9c5) list_single_dyc_row_pane_g

0xa474,	// (0x0006710c) list_single_dyc_row_text_pane_ParamLimits

0xa474,	// (0x0006710c) list_single_dyc_row_text_pane

0x9c89,	// (0x00066921) bg_sp_fs_scroll_pane

0xe7d7,	// (0x0006b46f) thumb_sp_fs_scroll_pane

0x7190,	// (0x00063e28) list_medium_line_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_g1

0x8a5f,	// (0x000656f7) list_medium_line_t1_ParamLimits

0x8a5f,	// (0x000656f7) list_medium_line_t1

0xa1cd,	// (0x00066e65) list_medium_line_x2_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_g1

0x20e0,	// (0x0005ed78) list_medium_line_x2_g2_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0006c9ce) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0006c9ce) list_medium_line_x2_g

0xa493,	// (0x0006712b) list_medium_line_x2_t1_ParamLimits

0xa493,	// (0x0006712b) list_medium_line_x2_t1

0xa1cd,	// (0x00066e65) list_medium_line_x3_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x3_g1

0x20e0,	// (0x0005ed78) list_medium_line_x3_g2_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0006c9ce) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0006c9ce) list_medium_line_x3_g

0xa493,	// (0x0006712b) list_medium_line_x3_t1_ParamLimits

0xa493,	// (0x0006712b) list_medium_line_x3_t1

0xe7e0,	// (0x0006b478) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0006b481) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0006b48a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0006c9d3) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x0006b478) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0006b481) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0006b48a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0006c9d3) bg_sp_fs_scroll_pane_g

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa1cd,	// (0x00066e65) list_medium_line_x2_t3_g4_g1

0x216f,	// (0x0005ee07) list_medium_line_x2_t3_g4_g2_ParamLimits

0x216f,	// (0x0005ee07) list_medium_line_x2_t3_g4_g2

0x20e0,	// (0x0005ed78) list_medium_line_x2_t3_g4_g3_ParamLimits

0x20e0,	// (0x0005ed78) list_medium_line_x2_t3_g4_g3

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa1d9,	// (0x00066e71) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0006bf65) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0006bf65) list_medium_line_x2_t3_g4_g

0x8a74,	// (0x0006570c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a74,	// (0x0006570c) list_medium_line_x2_t3_g4_t1

0x8a8a,	// (0x00065722) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a8a,	// (0x00065722) list_medium_line_x2_t3_g4_t2

0x2115,	// (0x0005edad) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2115,	// (0x0005edad) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0006c9da) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0006c9da) list_medium_line_x2_t3_g4_t

0x7190,	// (0x00063e28) list_medium_line_g2_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_g2_g1

0x719c,	// (0x00063e34) list_medium_line_g2_g2_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_g2_g2

0x0001,

0xfa01,	// (0x0006c699) list_medium_line_g2_g_ParamLimits

0xfa01,	// (0x0006c699) list_medium_line_g2_g

0x8aa3,	// (0x0006573b) list_medium_line_g2_t1_ParamLimits

0x8aa3,	// (0x0006573b) list_medium_line_g2_t1

0x7190,	// (0x00063e28) list_medium_line_t3_g2_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t3_g2_g1

0x719c,	// (0x00063e34) list_medium_line_t3_g2_g2_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_t3_g2_g2

0x0001,

0xfa01,	// (0x0006c699) list_medium_line_t3_g2_g_ParamLimits

0xfa01,	// (0x0006c699) list_medium_line_t3_g2_g

0x8ab8,	// (0x00065750) list_medium_line_t3_g2_t1_ParamLimits

0x8ab8,	// (0x00065750) list_medium_line_t3_g2_t1

0x8acf,	// (0x00065767) list_medium_line_t3_g2_t2_ParamLimits

0x8acf,	// (0x00065767) list_medium_line_t3_g2_t2

0x8ae4,	// (0x0006577c) list_medium_line_t3_g2_t3_ParamLimits

0x8ae4,	// (0x0006577c) list_medium_line_t3_g2_t3

0x0002,

0xfd49,	// (0x0006c9e1) list_medium_line_t3_g2_t_ParamLimits

0xfd49,	// (0x0006c9e1) list_medium_line_t3_g2_t

0x87ce,	// (0x00065466) list_medium_line_right_icon_g1

0x8afd,	// (0x00065795) list_medium_line_right_icon_t1

0x7190,	// (0x00063e28) list_medium_line_t2_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t2_g1

0x8b0b,	// (0x000657a3) list_medium_line_t2_t1_ParamLimits

0x8b0b,	// (0x000657a3) list_medium_line_t2_t1

0x8b25,	// (0x000657bd) list_medium_line_t2_t2_ParamLimits

0x8b25,	// (0x000657bd) list_medium_line_t2_t2

0x0001,

0xfd50,	// (0x0006c9e8) list_medium_line_t2_t_ParamLimits

0xfd50,	// (0x0006c9e8) list_medium_line_t2_t

0x7190,	// (0x00063e28) list_medium_line_t3_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t3_g1

0x8b3a,	// (0x000657d2) list_medium_line_t3_t1_ParamLimits

0x8b3a,	// (0x000657d2) list_medium_line_t3_t1

0x8b54,	// (0x000657ec) list_medium_line_t3_t2_ParamLimits

0x8b54,	// (0x000657ec) list_medium_line_t3_t2

0x8b6a,	// (0x00065802) list_medium_line_t3_t3_ParamLimits

0x8b6a,	// (0x00065802) list_medium_line_t3_t3

0x0002,

0xfd55,	// (0x0006c9ed) list_medium_line_t3_t_ParamLimits

0xfd55,	// (0x0006c9ed) list_medium_line_t3_t

0x7190,	// (0x00063e28) list_medium_line_g3_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_g3_g1

0x8b7f,	// (0x00065817) list_medium_line_g3_g2_ParamLimits

0x8b7f,	// (0x00065817) list_medium_line_g3_g2

0x719c,	// (0x00063e34) list_medium_line_g3_g3_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_g3_g3

0x0002,

0xfd5c,	// (0x0006c9f4) list_medium_line_g3_g_ParamLimits

0xfd5c,	// (0x0006c9f4) list_medium_line_g3_g

0x8b8b,	// (0x00065823) list_medium_line_g3_t1_ParamLimits

0x8b8b,	// (0x00065823) list_medium_line_g3_t1

0x7190,	// (0x00063e28) list_medium_line_t2_g3_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t2_g3_g1

0x8b7f,	// (0x00065817) list_medium_line_t2_g3_g2_ParamLimits

0x8b7f,	// (0x00065817) list_medium_line_t2_g3_g2

0x719c,	// (0x00063e34) list_medium_line_t2_g3_g3_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_t2_g3_g3

0x0002,

0xfd5c,	// (0x0006c9f4) list_medium_line_t2_g3_g_ParamLimits

0xfd5c,	// (0x0006c9f4) list_medium_line_t2_g3_g

0x8ba0,	// (0x00065838) list_medium_line_t2_g3_t1_ParamLimits

0x8ba0,	// (0x00065838) list_medium_line_t2_g3_t1

0x8bb7,	// (0x0006584f) list_medium_line_t2_g3_t2_ParamLimits

0x8bb7,	// (0x0006584f) list_medium_line_t2_g3_t2

0x0001,

0xfd63,	// (0x0006c9fb) list_medium_line_t2_g3_t_ParamLimits

0xfd63,	// (0x0006c9fb) list_medium_line_t2_g3_t

0x7190,	// (0x00063e28) list_medium_line_t3_g3_g1_ParamLimits

0x7190,	// (0x00063e28) list_medium_line_t3_g3_g1

0x8b7f,	// (0x00065817) list_medium_line_t3_g3_g2_ParamLimits

0x8b7f,	// (0x00065817) list_medium_line_t3_g3_g2

0x719c,	// (0x00063e34) list_medium_line_t3_g3_g3_ParamLimits

0x719c,	// (0x00063e34) list_medium_line_t3_g3_g3

0x0002,

0xfd5c,	// (0x0006c9f4) list_medium_line_t3_g3_g_ParamLimits

0xfd5c,	// (0x0006c9f4) list_medium_line_t3_g3_g

0x8bcc,	// (0x00065864) list_medium_line_t3_g3_t1_ParamLimits

0x8bcc,	// (0x00065864) list_medium_line_t3_g3_t1

0x8be0,	// (0x00065878) list_medium_line_t3_g3_t2_ParamLimits

0x8be0,	// (0x00065878) list_medium_line_t3_g3_t2

0x8bf2,	// (0x0006588a) list_medium_line_t3_g3_t3_ParamLimits

0x8bf2,	// (0x0006588a) list_medium_line_t3_g3_t3

0x0002,

0xfd68,	// (0x0006ca00) list_medium_line_t3_g3_t_ParamLimits

0xfd68,	// (0x0006ca00) list_medium_line_t3_g3_t

0x8943,	// (0x000655db) list_medium_line_right_iconx2_g1

0x87ce,	// (0x00065466) list_medium_line_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0006ca07) list_medium_line_right_iconx2_g

0x8c06,	// (0x0006589e) list_medium_line_right_iconx2_t1

0x8943,	// (0x000655db) list_medium_line_t2_right_iconx2_g1

0x87ce,	// (0x00065466) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0006ca07) list_medium_line_t2_right_iconx2_g

0x8c14,	// (0x000658ac) list_medium_line_t2_right_iconx2_t1

0x8c24,	// (0x000658bc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd74,	// (0x0006ca0c) list_medium_line_t2_right_iconx2_t

0x8c32,	// (0x000658ca) list_medium_line_x4_t4_t1

0x8c40,	// (0x000658d8) list_medium_line_x4_t4_t2

0x8c50,	// (0x000658e8) list_medium_line_x4_t4_t3

0x8c60,	// (0x000658f8) list_medium_line_x4_t4_t4

0x0003,

0xfd79,	// (0x0006ca11) list_medium_line_x4_t4_t

0x8c9a,	// (0x00065932) tport_appsw_pane_ParamLimits

0x8c9a,	// (0x00065932) tport_appsw_pane

0x8ca8,	// (0x00065940) tport_contact_pane_ParamLimits

0x8ca8,	// (0x00065940) tport_contact_pane

0x8cb8,	// (0x00065950) tport_listscroll_pane_ParamLimits

0x8cb8,	// (0x00065950) tport_listscroll_pane

0x8cc8,	// (0x00065960) cell_tport_appsw_pane_ParamLimits

0x8cc8,	// (0x00065960) cell_tport_appsw_pane

0xcf26,	// (0x00069bbe) tport_appsw_pane_g1_ParamLimits

0xcf26,	// (0x00069bbe) tport_appsw_pane_g1

0xe7fb,	// (0x0006b493) tport_contact_pane_g1

0xe804,	// (0x0006b49c) tport_contact_pane_t1

0xe812,	// (0x0006b4aa) tport_contact_pane_t2

0x0001,

0xfd82,	// (0x0006ca1a) tport_contact_pane_t

0xe820,	// (0x0006b4b8) list_tport_pane

0xe829,	// (0x0006b4c1) scroll_pane_cp_030

0x8cfd,	// (0x00065995) cell_tport_appsw_pane_g1

0x8d0d,	// (0x000659a5) cell_tport_appsw_pane_t1

0x9c89,	// (0x00066921) grid_highlight_pane_cp019

0x8d1b,	// (0x000659b3) list_tport_double_graphic_pane_ParamLimits

0x8d1b,	// (0x000659b3) list_tport_double_graphic_pane

0xa227,	// (0x00066ebf) list_highlight_pane_cp023_ParamLimits

0xa227,	// (0x00066ebf) list_highlight_pane_cp023

0x8d28,	// (0x000659c0) list_tport_double_graphic_pane_g1_ParamLimits

0x8d28,	// (0x000659c0) list_tport_double_graphic_pane_g1

0x8d35,	// (0x000659cd) list_tport_double_graphic_pane_t1_ParamLimits

0x8d35,	// (0x000659cd) list_tport_double_graphic_pane_t1

0x8d4a,	// (0x000659e2) list_tport_double_graphic_pane_t2_ParamLimits

0x8d4a,	// (0x000659e2) list_tport_double_graphic_pane_t2

0x0001,

0xfd8e,	// (0x0006ca26) list_tport_double_graphic_pane_t_ParamLimits

0xfd8e,	// (0x0006ca26) list_tport_double_graphic_pane_t

0x9c89,	// (0x00066921) main_cale_note_pane

0x6951,	// (0x000635e9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6951,	// (0x000635e9) cell_vitu2_function_top_wide_pane_cp01

0x83cd,	// (0x00065065) wait_bar_pane_cp05_ParamLimits

0xa227,	// (0x00066ebf) listscroll_cmail_pane

0xe83a,	// (0x0006b4d2) list_cmail_pane

0x8d66,	// (0x000659fe) list_cmail_body_pane

0x8d7e,	// (0x00065a16) list_single_cmail_header_caption_pane

0x8d9e,	// (0x00065a36) list_single_cmail_header_detail_pane_ParamLimits

0x8d9e,	// (0x00065a36) list_single_cmail_header_detail_pane

0x8dd0,	// (0x00065a68) list_single_cmail_header_caption_pane_t1

0x8deb,	// (0x00065a83) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8deb,	// (0x00065a83) list_single_cmail_header_detail_pane_g1

0xa4a9,	// (0x00067141) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa4a9,	// (0x00067141) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd93,	// (0x0006ca2b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd93,	// (0x0006ca2b) list_single_cmail_header_detail_pane_g

0x8e03,	// (0x00065a9b) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8e03,	// (0x00065a9b) list_single_cmail_header_detail_pane_t1

0x8e51,	// (0x00065ae9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8e51,	// (0x00065ae9) list_single_cmail_header_editor_pane_bg

0xe303,	// (0x0006af9b) list_cmail_body_pane_g1

0xe85e,	// (0x0006b4f6) list_cmail_body_pane_t1

0xd679,	// (0x0006a311) list_single_cmail_header_editor_pane_bg_g1

0xad41,	// (0x000679d9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd689,	// (0x0006a321) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd681,	// (0x0006a319) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8a3,	// (0x0006a53b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6a9,	// (0x0006a341) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd699,	// (0x0006a331) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a1,	// (0x0006a339) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad21,	// (0x000679b9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e68,	// (0x00065b00) calenote_gesture_pane_ParamLimits

0x8e68,	// (0x00065b00) calenote_gesture_pane

0x8e82,	// (0x00065b1a) calenote_window_pane_ParamLimits

0x8e82,	// (0x00065b1a) calenote_window_pane

0xe86c,	// (0x0006b504) popup_note_window_cp01

0x8e9a,	// (0x00065b32) calenote_swipe_1_pane_ParamLimits

0x8e9a,	// (0x00065b32) calenote_swipe_1_pane

0x87b4,	// (0x0006544c) calenote_swipe_2_pane_ParamLimits

0x87b4,	// (0x0006544c) calenote_swipe_2_pane

0xe65b,	// (0x0006b2f3) calenote_swipe_1_pane_g1_ParamLimits

0xe65b,	// (0x0006b2f3) calenote_swipe_1_pane_g1

0xe668,	// (0x0006b300) calenote_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x0006b300) calenote_swipe_1_pane_g2

0x0001,

0xfcbd,	// (0x0006c955) calenote_swipe_1_pane_g_ParamLimits

0xfcbd,	// (0x0006c955) calenote_swipe_1_pane_g

0xe87e,	// (0x0006b516) calenote_swipe_1_pane_t1_ParamLimits

0xe87e,	// (0x0006b516) calenote_swipe_1_pane_t1

0xe65b,	// (0x0006b2f3) calenote_swipe_2_pane_g1_ParamLimits

0xe65b,	// (0x0006b2f3) calenote_swipe_2_pane_g1

0xe89d,	// (0x0006b535) calenote_swipe_2_pane_g2_ParamLimits

0xe89d,	// (0x0006b535) calenote_swipe_2_pane_g2

0x0001,

0xfd9f,	// (0x0006ca37) calenote_swipe_2_pane_g_ParamLimits

0xfd9f,	// (0x0006ca37) calenote_swipe_2_pane_g

0xe8a9,	// (0x0006b541) calenote_swipe_2_pane_t1_ParamLimits

0xe8a9,	// (0x0006b541) calenote_swipe_2_pane_t1

0x9c89,	// (0x00066921) main_mup_navstr_pane

0x565a,	// (0x000622f2) main_mup3_pane_t7_ParamLimits

0x565a,	// (0x000622f2) main_mup3_pane_t7

0x605d,	// (0x00062cf5) main_mp4_pane_g6_ParamLimits

0x605d,	// (0x00062cf5) main_mp4_pane_g6

0x63db,	// (0x00063073) main_image3_pane_t4_ParamLimits

0x63db,	// (0x00063073) main_image3_pane_t4

0x8ead,	// (0x00065b45) popup_navstr_preview_pane_ParamLimits

0x8ead,	// (0x00065b45) popup_navstr_preview_pane

0x8eb9,	// (0x00065b51) scroll_navstr_pane_ParamLimits

0x8eb9,	// (0x00065b51) scroll_navstr_pane

0x9c89,	// (0x00066921) bg_popup_preview_window_pane_cp04

0xe8d0,	// (0x0006b568) popup_navstr_preview_pane_t1

0x8ec5,	// (0x00065b5d) scroll_navstr_pane_g1_ParamLimits

0x8ec5,	// (0x00065b5d) scroll_navstr_pane_g1

0x8ed2,	// (0x00065b6a) scroll_navstr_pane_t1_ParamLimits

0x8ed2,	// (0x00065b6a) scroll_navstr_pane_t1

0xe875,	// (0x0006b50d) bg_button_pane_cp014

0xe875,	// (0x0006b50d) bg_button_pane_cp030

0x86a0,	// (0x00065338) list_double_fisheye_pane_g4_ParamLimits

0x86a0,	// (0x00065338) list_double_fisheye_pane_g4

0x86ac,	// (0x00065344) list_double_fisheye_pane_g5_ParamLimits

0x86ac,	// (0x00065344) list_double_fisheye_pane_g5

0xe842,	// (0x0006b4da) sp_fs_scroll_pane_cp03

0xe74e,	// (0x0006b3e6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75a,	// (0x0006b3f2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcda,	// (0x0006c972) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe766,	// (0x0006b3fe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d5c,	// (0x000659f4) sp_fs_scroll_pane_cp02

0xaa24,	// (0x000676bc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa24,	// (0x000676bc) popup_sp_fs_calendar_preview_list_single_pane

0x9c89,	// (0x00066921) main_cam6_pano_pane

0xa227,	// (0x00066ebf) main_mup3_pane_ParamLimits

0x9c89,	// (0x00066921) main_phacti_pane

0x82a0,	// (0x00064f38) bg_button_pane_cp11

0x82b8,	// (0x00064f50) main_mobtv_info_pane_g2_ParamLimits

0x82b8,	// (0x00064f50) main_mobtv_info_pane_g2

0x0001,

0xfc3a,	// (0x0006c8d2) main_mobtv_info_pane_g_ParamLimits

0xfc3a,	// (0x0006c8d2) main_mobtv_info_pane_g

0x846a,	// (0x00065102) sc_clock_pane_t5_ParamLimits

0x846a,	// (0x00065102) sc_clock_pane_t5

0x8513,	// (0x000651ab) main_radioblah_pane_g1_ParamLimits

0xe5a7,	// (0x0006b23f) main_radioblah_pane_t3_ParamLimits

0xe5a7,	// (0x0006b23f) main_radioblah_pane_t3

0xe5bf,	// (0x0006b257) main_radioblah_pane_t4_ParamLimits

0xe5bf,	// (0x0006b257) main_radioblah_pane_t4

0x8531,	// (0x000651c9) main_radioblah_text_pane_ParamLimits

0x8531,	// (0x000651c9) main_radioblah_text_pane

0x853e,	// (0x000651d6) main_radioblah_info_pane_g1_ParamLimits

0x85d7,	// (0x0006526f) main_radioblah_info_pane_t4_ParamLimits

0x85d7,	// (0x0006526f) main_radioblah_info_pane_t4

0xa227,	// (0x00066ebf) main_sp_fs_calendar_pane

0x8ee4,	// (0x00065b7c) main_phacti_pane_g1

0x8eec,	// (0x00065b84) phacti_note_pane_ParamLimits

0x8eec,	// (0x00065b84) phacti_note_pane

0xe8e7,	// (0x0006b57f) phacti_term_pane_ParamLimits

0xe8e7,	// (0x0006b57f) phacti_term_pane

0xe8fc,	// (0x0006b594) phacti_note_pane_t1_ParamLimits

0xe8fc,	// (0x0006b594) phacti_note_pane_t1

0xa4d9,	// (0x00067171) phacti_term_pane_g1

0xa4e1,	// (0x00067179) phacti_term_pane_t1_ParamLimits

0xa4e1,	// (0x00067179) phacti_term_pane_t1

0xe913,	// (0x0006b5ab) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe91b,	// (0x0006b5b3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda9,	// (0x0006ca41) popup_sp_fs_calendar_preview_list_single_pane_g

0xe923,	// (0x0006b5bb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe923,	// (0x0006b5bb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe939,	// (0x0006b5d1) aid_popup_sp_fs_bg_corner_pane

0xcc91,	// (0x00069929) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c89,	// (0x00066921) popup_sp_fs_calendar_preview_bg_pane

0xe941,	// (0x0006b5d9) popup_sp_fs_calendar_preview_list_pane

0xc840,	// (0x000694d8) bg_main_sp_fs_cale_pane_ParamLimits

0xc840,	// (0x000694d8) bg_main_sp_fs_cale_pane

0xa869,	// (0x00067501) listscroll_cale_mrui_pane_ParamLimits

0xa869,	// (0x00067501) listscroll_cale_mrui_pane

0xa87e,	// (0x00067516) listscroll_sp_fs_schedule_track_pane

0xa887,	// (0x0006751f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa887,	// (0x0006751f) main_sp_fs_ctrlbar_pane_cp01

0xe949,	// (0x0006b5e1) main_sp_fs_ribbon_pane

0xa89a,	// (0x00067532) popup_sp_fs_cale_preview_window

0xed6f,	// (0x0006ba07) list_single_sp_fs_schedule_track_pane_ParamLimits

0xed6f,	// (0x0006ba07) list_single_sp_fs_schedule_track_pane

0x1073,	// (0x0005dd0b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1073,	// (0x0005dd0b) bg_sp_fs_highlight_list_pane_cp03

0x8f4b,	// (0x00065be3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f4b,	// (0x00065be3) list_single_sp_fs_schedule_track_pane_g1

0x8f57,	// (0x00065bef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f57,	// (0x00065bef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0006ca46) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0006ca46) list_single_sp_fs_schedule_track_pane_g

0x8f63,	// (0x00065bfb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f63,	// (0x00065bfb) list_single_sp_fs_schedule_track_pane_t1

0x8f81,	// (0x00065c19) sp_fs_schedule_track_pane_ParamLimits

0x8f81,	// (0x00065c19) sp_fs_schedule_track_pane

0xe951,	// (0x0006b5e9) sp_fs_schedule_track_pane_g1

0xe959,	// (0x0006b5f1) sp_fs_schedule_track_pane_g2

0xe961,	// (0x0006b5f9) sp_fs_schedule_track_pane_g3

0xe969,	// (0x0006b601) sp_fs_schedule_track_pane_g4

0xe971,	// (0x0006b609) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb3,	// (0x0006ca4b) sp_fs_schedule_track_pane_g

0xd679,	// (0x0006a311) bg_sp_fs_schedule_viewer_highlight_g1

0xad41,	// (0x000679d9) bg_sp_fs_schedule_viewer_highlight_g2

0xd681,	// (0x0006a319) bg_sp_fs_schedule_viewer_highlight_g3

0xd689,	// (0x0006a321) bg_sp_fs_schedule_viewer_highlight_g4

0xd8a3,	// (0x0006a53b) bg_sp_fs_schedule_viewer_highlight_g5

0xd699,	// (0x0006a331) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a1,	// (0x0006a339) bg_sp_fs_schedule_viewer_highlight_g7

0xd6a9,	// (0x0006a341) bg_sp_fs_schedule_viewer_highlight_g8

0xad21,	// (0x000679b9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbe,	// (0x0006ca56) bg_sp_fs_schedule_viewer_highlight_g

0x9c89,	// (0x00066921) bg_main_sp_fs_ribbon_pane

0x8f93,	// (0x00065c2b) main_sp_fs_ribbon_pane_g1

0xe979,	// (0x0006b611) main_sp_fs_ribbon_pane_t1

0x8f9c,	// (0x00065c34) main_sp_fs_ribbon_pane_t2

0xe988,	// (0x0006b620) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd1,	// (0x0006ca69) main_sp_fs_ribbon_pane_t

0xe997,	// (0x0006b62f) main_sp_fs_ribbon_scheduler_pane

0xe99f,	// (0x0006b637) bg_main_sp_fs_ribbon_pane_g1

0xe9a8,	// (0x0006b640) bg_main_sp_fs_ribbon_pane_g2

0xe9b1,	// (0x0006b649) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd8,	// (0x0006ca70) bg_main_sp_fs_ribbon_pane_g

0xe9b9,	// (0x0006b651) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c2,	// (0x0006b65a) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cb,	// (0x0006b663) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddf,	// (0x0006ca77) main_sp_fs_ribbon_scheduler_pane_g

0xe9d4,	// (0x0006b66c) list_cale_mrui_pane

0x8fab,	// (0x00065c43) sp_fs_scroll_pane_cp07_ParamLimits

0x8fab,	// (0x00065c43) sp_fs_scroll_pane_cp07

0x8fc7,	// (0x00065c5f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8fc7,	// (0x00065c5f) bg_sp_fs_schedule_viewer_highlight

0xe9e1,	// (0x0006b679) list_single_sp_fs_schedule_track_pane_cp01

0xe9e9,	// (0x0006b681) list_sp_fs_schedule_track_pane

0xe9f1,	// (0x0006b689) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f1,	// (0x0006b689) sp_fs_scroll_pane_cp06

0xcc91,	// (0x00069929) bgmain_sp_fs_calendar_pane_g1

0x8fd4,	// (0x00065c6c) list_single_cale_mrui_pane_ParamLimits

0x8fd4,	// (0x00065c6c) list_single_cale_mrui_pane

0xa8ac,	// (0x00067544) list_single_cale_mrui_row_pane_ParamLimits

0xa8ac,	// (0x00067544) list_single_cale_mrui_row_pane

0xa8c2,	// (0x0006755a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8c2,	// (0x0006755a) list_single_cale_mrui_row_pane_g1

0xa8fa,	// (0x00067592) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa8fa,	// (0x00067592) list_single_cale_mrui_row_pane_t1

0x8fe9,	// (0x00065c81) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fe9,	// (0x00065c81) list_single_cale_mrui_row_pane_t2

0xa90c,	// (0x000675a4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa90c,	// (0x000675a4) list_single_cale_mrui_row_pane_t3

0xa93b,	// (0x000675d3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa93b,	// (0x000675d3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfded,	// (0x0006ca85) list_single_cale_mrui_row_pane_t_ParamLimits

0xfded,	// (0x0006ca85) list_single_cale_mrui_row_pane_t

0x904f,	// (0x00065ce7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x904f,	// (0x00065ce7) list_single_cmail_header_editor_pane_bg_cp01

0x9073,	// (0x00065d0b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9073,	// (0x00065d0b) list_single_cmail_header_editor_pane_bg_cp02

0x908f,	// (0x00065d27) main_radioblah_text_pane_t1_ParamLimits

0x908f,	// (0x00065d27) main_radioblah_text_pane_t1

0xea10,	// (0x0006b6a8) cam6_indi_pane_cp01

0xea18,	// (0x0006b6b0) cam6_mode_pane_cp01

0xea20,	// (0x0006b6b8) cam6_pano_pane

0xea29,	// (0x0006b6c1) cam6_zoom_pane_cp01

0xea33,	// (0x0006b6cb) cam6_pano_image_pane

0xea3c,	// (0x0006b6d4) cam6_pano_pane_g1

0xe303,	// (0x0006af9b) cam6_pano_pane_g2

0xea45,	// (0x0006b6dd) cam6_pano_pane_g3

0xea4e,	// (0x0006b6e6) cam6_pano_pane_g4

0xd20b,	// (0x00069ea3) cam6_pano_pane_g5

0xea57,	// (0x0006b6ef) cam6_pano_pane_g6

0xea5f,	// (0x0006b6f7) cam6_pano_pane_g7

0xea67,	// (0x0006b6ff) cam6_pano_pane_g8

0xea70,	// (0x0006b708) cam6_pano_pane_g9

0x0008,

0xfdf6,	// (0x0006ca8e) cam6_pano_pane_g

0x9c89,	// (0x00066921) main_browser_tag_pane

0xe8c8,	// (0x0006b560) grid_navstr_albumart_pane

0xea7b,	// (0x0006b713) cell_navstr_albumart_pane_ParamLimits

0xea7b,	// (0x0006b713) cell_navstr_albumart_pane

0xea9a,	// (0x0006b732) cell_navstr_albumart_pane_g1

0xc64d,	// (0x000692e5) cell_navstr_albumart_pane_g2

0xc65d,	// (0x000692f5) cell_navstr_albumart_pane_g3

0xc655,	// (0x000692ed) cell_navstr_albumart_pane_g4

0x0003,

0xfe09,	// (0x0006caa1) cell_navstr_albumart_pane_g

0x90a9,	// (0x00065d41) bt_list_pane_ParamLimits

0x90a9,	// (0x00065d41) bt_list_pane

0x90c2,	// (0x00065d5a) bt_list_pane_t1

0x90d1,	// (0x00065d69) bt_list_pane_t2

0x0001,

0xfe12,	// (0x0006caaa) bt_list_pane_t

0x9c89,	// (0x00066921) main_cale_prevew_pane

0x90e0,	// (0x00065d78) popup_cale_preview_window_ParamLimits

0x90e0,	// (0x00065d78) popup_cale_preview_window

0xa227,	// (0x00066ebf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa227,	// (0x00066ebf) bg_popup_preview_window_pane_cp05

0xeaa2,	// (0x0006b73a) list_cale_preview_pane_ParamLimits

0xeaa2,	// (0x0006b73a) list_cale_preview_pane

0x90fb,	// (0x00065d93) list_double_cale_preview_pane_ParamLimits

0x90fb,	// (0x00065d93) list_double_cale_preview_pane

0x910f,	// (0x00065da7) list_single_cale_preview_pane_ParamLimits

0x910f,	// (0x00065da7) list_single_cale_preview_pane

0x9127,	// (0x00065dbf) list_single_cale_preview_pane_g1

0x912f,	// (0x00065dc7) list_single_cale_preview_pane_t1_ParamLimits

0x912f,	// (0x00065dc7) list_single_cale_preview_pane_t1

0x9144,	// (0x00065ddc) list_double_cale_preview_pane_g1

0x914c,	// (0x00065de4) list_double_cale_preview_pane_t1_ParamLimits

0x914c,	// (0x00065de4) list_double_cale_preview_pane_t1

0x9161,	// (0x00065df9) list_double_cale_preview_pane_t2_ParamLimits

0x9161,	// (0x00065df9) list_double_cale_preview_pane_t2

0x0001,

0xfe17,	// (0x0006caaf) list_double_cale_preview_pane_t_ParamLimits

0xfe17,	// (0x0006caaf) list_double_cale_preview_pane_t

0x9c89,	// (0x00066921) main_ezdial_pane

0xa227,	// (0x00066ebf) main_sp_fs_email_pane_ParamLimits

0x87f4,	// (0x0006548c) cmail_ddmenu_btn01_pane_ParamLimits

0x87f4,	// (0x0006548c) cmail_ddmenu_btn01_pane

0x8811,	// (0x000654a9) cmail_ddmenu_btn02_pane_ParamLimits

0x8811,	// (0x000654a9) cmail_ddmenu_btn02_pane

0x882f,	// (0x000654c7) cmail_ddmenu_btn03_pane_ParamLimits

0x882f,	// (0x000654c7) cmail_ddmenu_btn03_pane

0x885f,	// (0x000654f7) main_sp_fs_ctrlbar_pane_ParamLimits

0x8879,	// (0x00065511) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d66,	// (0x000659fe) list_cmail_body_pane_ParamLimits

0x8de0,	// (0x00065a78) bg_button_pane_cp12

0xe851,	// (0x0006b4e9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x0006b4e9) list_single_cmail_header_detail_pane_g3

0xa4b5,	// (0x0006714d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa4b5,	// (0x0006714d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9a,	// (0x0006ca32) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9a,	// (0x0006ca32) list_single_cmail_header_detail_pane_t

0xa4f6,	// (0x0006718e) phacti_term_pane_t2_ParamLimits

0xa4f6,	// (0x0006718e) phacti_term_pane_t2

0x0001,

0xfda4,	// (0x0006ca3c) phacti_term_pane_t_ParamLimits

0xfda4,	// (0x0006ca3c) phacti_term_pane_t

0xeaae,	// (0x0006b746) aid_size_list_single_double

0x9179,	// (0x00065e11) popup_ezdial_listscroll_window

0x919b,	// (0x00065e33) popup_number_entry_window_cp01

0xb427,	// (0x000680bf) bg_popup_call_pane_cp09

0xeaba,	// (0x0006b752) ezdial_list_pane

0xeac2,	// (0x0006b75a) scroll_pane_cp23

0xca70,	// (0x00069708) bg_button_pane_cp028_ParamLimits

0xca70,	// (0x00069708) bg_button_pane_cp028

0x91a9,	// (0x00065e41) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x91a9,	// (0x00065e41) cmail_ddmenu_btn01_pane_g1

0x91bb,	// (0x00065e53) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x91bb,	// (0x00065e53) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1c,	// (0x0006cab4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1c,	// (0x0006cab4) cmail_ddmenu_btn01_pane_g

0xeaca,	// (0x0006b762) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaca,	// (0x0006b762) cmail_ddmenu_btn01_pane_t1

0xc840,	// (0x000694d8) bg_button_pane_cp029_ParamLimits

0xc840,	// (0x000694d8) bg_button_pane_cp029

0x91bb,	// (0x00065e53) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x91bb,	// (0x00065e53) cmail_ddmenu_btn02_pane_g1

0x91d3,	// (0x00065e6b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91d3,	// (0x00065e6b) cmail_ddmenu_btn02_pane_t1

0x1073,	// (0x0005dd0b) bg_button_pane_cp031_ParamLimits

0x1073,	// (0x0005dd0b) bg_button_pane_cp031

0x91bb,	// (0x00065e53) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x91bb,	// (0x00065e53) cmail_ddmenu_btn03_pane_g1

0x91d3,	// (0x00065e6b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91d3,	// (0x00065e6b) cmail_ddmenu_btn03_pane_t1

0x6276,	// (0x00062f0e) cell_dialer2_keypad_pane_t1_ParamLimits

0x6290,	// (0x00062f28) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6290,	// (0x00062f28) cell_dialer2_keypad_pane_t1_copy1

0x8111,	// (0x00064da9) ncimui_group_button_pane

0xa227,	// (0x00066ebf) main_sp_fs_calendar_pane_ParamLimits

0x8d7e,	// (0x00065a16) list_single_cmail_header_caption_pane_ParamLimits

0xa860,	// (0x000674f8) aid_recal_txt_sm_pane

0x9c89,	// (0x00066921) mian_recal_day_pane

0xa89a,	// (0x00067532) popup_sp_fs_cale_preview_window_ParamLimits

0xeadf,	// (0x0006b777) list_recal_day_pane

0xa986,	// (0x0006761e) list_single_recal_day_pane_ParamLimits

0xa986,	// (0x0006761e) list_single_recal_day_pane

0xeb06,	// (0x0006b79e) list_single_recal_day_pane_g1_ParamLimits

0xeb06,	// (0x0006b79e) list_single_recal_day_pane_g1

0xa998,	// (0x00067630) list_single_recal_day_pane_g2_ParamLimits

0xa998,	// (0x00067630) list_single_recal_day_pane_g2

0xa9a4,	// (0x0006763c) list_single_recal_day_pane_g3_ParamLimits

0xa9a4,	// (0x0006763c) list_single_recal_day_pane_g3

0x91f7,	// (0x00065e8f) list_single_recal_day_pane_g4_ParamLimits

0x91f7,	// (0x00065e8f) list_single_recal_day_pane_g4

0xa9b0,	// (0x00067648) list_single_recal_day_pane_g5_ParamLimits

0xa9b0,	// (0x00067648) list_single_recal_day_pane_g5

0xa9bc,	// (0x00067654) list_single_recal_day_pane_g6_ParamLimits

0xa9bc,	// (0x00067654) list_single_recal_day_pane_g6

0x0004,

0xfe2b,	// (0x0006cac3) list_single_recal_day_pane_g_ParamLimits

0xfe2b,	// (0x0006cac3) list_single_recal_day_pane_g

0xa9d0,	// (0x00067668) list_single_recal_day_pane_t1

0xa9e2,	// (0x0006767a) list_single_recal_day_pane_t2

0x0001,

0xfe36,	// (0x0006cace) list_single_recal_day_pane_t

0x920f,	// (0x00065ea7) ncimui_query_button_pane_ParamLimits

0x920f,	// (0x00065ea7) ncimui_query_button_pane

0x921f,	// (0x00065eb7) ncimui_query_button_pane_t1_ParamLimits

0x921f,	// (0x00065eb7) ncimui_query_button_pane_t1

0xeb12,	// (0x0006b7aa) ncimui_query_button_pane_t2_ParamLimits

0xeb12,	// (0x0006b7aa) ncimui_query_button_pane_t2

0x0001,

0xfe3b,	// (0x0006cad3) ncimui_query_button_pane_t_ParamLimits

0xfe3b,	// (0x0006cad3) ncimui_query_button_pane_t

0x9232,	// (0x00065eca) query_button_pane_ParamLimits

0x9232,	// (0x00065eca) query_button_pane

0x9c89,	// (0x00066921) bg_button_pane_cp0028

0xeb25,	// (0x0006b7bd) query_button_pane_t1

0x4626,	// (0x000612be) main_tport_pane_ParamLimits

0x8c70,	// (0x00065908) bg_popup_window_pane_cp01_ParamLimits

0x8c70,	// (0x00065908) bg_popup_window_pane_cp01

0x8c7e,	// (0x00065916) heading_pane_cp08_ParamLimits

0x8c7e,	// (0x00065916) heading_pane_cp08

0x8c8c,	// (0x00065924) heading_pane_cp07_ParamLimits

0x8c8c,	// (0x00065924) heading_pane_cp07

0x8cfd,	// (0x00065995) cell_tport_appsw_pane_g2

0x0002,

0xfd87,	// (0x0006ca1f) cell_tport_appsw_pane_g

0x3d7c,	// (0x00060a14) input_candi_list_open_g1

0xaeed,	// (0x00067b85) list_cale_time_pane_g6_ParamLimits

0xaeed,	// (0x00067b85) list_cale_time_pane_g6

0x50a9,	// (0x00061d41) aid_size_touch_calib_1_ParamLimits

0x50a9,	// (0x00061d41) aid_size_touch_calib_1

0x50b5,	// (0x00061d4d) aid_size_touch_calib_2_ParamLimits

0x50b5,	// (0x00061d4d) aid_size_touch_calib_2

0x50c3,	// (0x00061d5b) aid_size_touch_calib_3_ParamLimits

0x50c3,	// (0x00061d5b) aid_size_touch_calib_3

0x50d3,	// (0x00061d6b) aid_size_touch_calib_4_ParamLimits

0x50d3,	// (0x00061d6b) aid_size_touch_calib_4

0x50e1,	// (0x00061d79) main_touch_calib_button_group_pane_ParamLimits

0x50e1,	// (0x00061d79) main_touch_calib_button_group_pane

0x50ef,	// (0x00061d87) main_touch_calib_pane_g1_ParamLimits

0x50fb,	// (0x00061d93) main_touch_calib_pane_g2_ParamLimits

0x5107,	// (0x00061d9f) main_touch_calib_pane_g3_ParamLimits

0x5113,	// (0x00061dab) main_touch_calib_pane_g4_ParamLimits

0xf757,	// (0x0006c3ef) main_touch_calib_pane_g_ParamLimits

0x511f,	// (0x00061db7) main_touch_calib_pane_t1_ParamLimits

0x5136,	// (0x00061dce) main_touch_calib_pane_t2_ParamLimits

0x514f,	// (0x00061de7) main_touch_calib_pane_t3_ParamLimits

0x5165,	// (0x00061dfd) main_touch_calib_pane_t4_ParamLimits

0x517b,	// (0x00061e13) main_touch_calib_pane_t5_ParamLimits

0xf760,	// (0x0006c3f8) main_touch_calib_pane_t_ParamLimits

0xcfc1,	// (0x00069c59) list_single_fp_cale_pane_g3_ParamLimits

0xcfc1,	// (0x00069c59) list_single_fp_cale_pane_g3

0x671b,	// (0x000633b3) bg_button_pane_cp012_ParamLimits

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp03_ParamLimits

0x7107,	// (0x00063d9f) cell_vitu2_function_top_pane_g1_ParamLimits

0x671b,	// (0x000633b3) bg_vkb2_func_pane_cp04_ParamLimits

0x8097,	// (0x00064d2f) main_ncimui_button_group_pane_ParamLimits

0x8097,	// (0x00064d2f) main_ncimui_button_group_pane

0x80ff,	// (0x00064d97) main_ncimui_pane_t3_ParamLimits

0x80ff,	// (0x00064d97) main_ncimui_pane_t3

0xe8de,	// (0x0006b576) phacti_button_group_pane

0xeaae,	// (0x0006b746) aid_size_list_single_double_ParamLimits

0x9179,	// (0x00065e11) popup_ezdial_listscroll_window_ParamLimits

0x919b,	// (0x00065e33) popup_number_entry_window_cp01_ParamLimits

0x923f,	// (0x00065ed7) phacti_button_pane_ParamLimits

0x923f,	// (0x00065ed7) phacti_button_pane

0x9c89,	// (0x00066921) bg_button_pane_cp14

0xeb33,	// (0x0006b7cb) phacti_button_pane_t1

0x9250,	// (0x00065ee8) main_touch_calib_button_pane_ParamLimits

0x9250,	// (0x00065ee8) main_touch_calib_button_pane

0xa753,	// (0x000673eb) bg_button_pane_cp18_ParamLimits

0xa753,	// (0x000673eb) bg_button_pane_cp18

0xeb41,	// (0x0006b7d9) main_touch_calib_button_pane_t1_ParamLimits

0xeb41,	// (0x0006b7d9) main_touch_calib_button_pane_t1

0xeb57,	// (0x0006b7ef) main_touch_calib_button_pane_t2_ParamLimits

0xeb57,	// (0x0006b7ef) main_touch_calib_button_pane_t2

0x0001,

0xfe40,	// (0x0006cad8) main_touch_calib_button_pane_t_ParamLimits

0xfe40,	// (0x0006cad8) main_touch_calib_button_pane_t

0x9c89,	// (0x00066921) cell_ncimui_button_pane

0x9c89,	// (0x00066921) bg_button_pane_cp032

0xeb75,	// (0x0006b80d) cell_ncimui_button_pane_t1

0x62ec,	// (0x00062f84) image3_infobar_pane_ParamLimits

0x62ec,	// (0x00062f84) image3_infobar_pane

0x848c,	// (0x00065124) fs_bigclock_status_pane_ParamLimits

0x848c,	// (0x00065124) fs_bigclock_status_pane

0x8499,	// (0x00065131) main_fs_bigclock_clock_pane_ParamLimits

0x8499,	// (0x00065131) main_fs_bigclock_clock_pane

0x84af,	// (0x00065147) main_fs_bigclock_indi_pane_ParamLimits

0x84af,	// (0x00065147) main_fs_bigclock_indi_pane

0x84e1,	// (0x00065179) main_fs_bigclock_swipe_pane_ParamLimits

0x84e1,	// (0x00065179) main_fs_bigclock_swipe_pane

0x9c89,	// (0x00066921) main_fs_clock_dumped_data

0xe410,	// (0x0006b0a8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe410,	// (0x0006b0a8) list_single_fs_bigclock_indicator_pane_g1

0xe43a,	// (0x0006b0d2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe43a,	// (0x0006b0d2) list_single_fs_bigclock_indicator_pane_g2

0xe454,	// (0x0006b0ec) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe454,	// (0x0006b0ec) list_single_fs_bigclock_indicator_pane_g3

0xe46e,	// (0x0006b106) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe46e,	// (0x0006b106) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6e,	// (0x0006c906) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6e,	// (0x0006c906) list_single_fs_bigclock_indicator_pane_g

0xe499,	// (0x0006b131) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe499,	// (0x0006b131) list_single_fs_bigclock_indicator_pane_t1

0xe4c1,	// (0x0006b159) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4c1,	// (0x0006b159) list_single_fs_bigclock_indicator_pane_t2

0xe4e9,	// (0x0006b181) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e9,	// (0x0006b181) list_single_fs_bigclock_indicator_pane_t3

0xe511,	// (0x0006b1a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe511,	// (0x0006b1a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc79,	// (0x0006c911) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc79,	// (0x0006c911) list_single_fs_bigclock_indicator_pane_t

0xeb83,	// (0x0006b81b) image3_infobar_fav_pane_ParamLimits

0xeb83,	// (0x0006b81b) image3_infobar_fav_pane

0xeb93,	// (0x0006b82b) image3_infobar_loc_pane_ParamLimits

0xeb93,	// (0x0006b82b) image3_infobar_loc_pane

0xeba9,	// (0x0006b841) image3_infobar_time_pane_ParamLimits

0xeba9,	// (0x0006b841) image3_infobar_time_pane

0xcc91,	// (0x00069929) image3_infobar_time_pane_g1

0xebb9,	// (0x0006b851) image3_infobar_time_pane_t1

0xcc91,	// (0x00069929) image3_infobar_loc_pane_g1

0xebc7,	// (0x0006b85f) image3_infobar_loc_pane_g2

0x0001,

0xfe45,	// (0x0006cadd) image3_infobar_loc_pane_g

0xebcf,	// (0x0006b867) image3_infobar_loc_pane_t1

0xcc91,	// (0x00069929) image3_infobar_fav_pane_g1

0xebdd,	// (0x0006b875) image3_infobar_fav_pane_g2

0x0001,

0xfe4a,	// (0x0006cae2) image3_infobar_fav_pane_g

0xebe5,	// (0x0006b87d) fs_bigclock_status_battery_pane

0xebee,	// (0x0006b886) fs_bigclock_status_signal_pane

0xebf7,	// (0x0006b88f) fs_bigclock_status_title_pane

0xec00,	// (0x0006b898) fs_bigclock_status_signal_pane_g1

0xec09,	// (0x0006b8a1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4f,	// (0x0006cae7) fs_bigclock_status_signal_pane_g

0xec11,	// (0x0006b8a9) fs_bigclock_status_battery_pane_g1

0xec1a,	// (0x0006b8b2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe54,	// (0x0006caec) fs_bigclock_status_battery_pane_g

0xec22,	// (0x0006b8ba) fs_bigclock_status_title_pane_t1

0xcc91,	// (0x00069929) main_fs_bigclock_clock_pane_g1

0xec30,	// (0x0006b8c8) main_fs_bigclock_clock_pane_g2

0xec30,	// (0x0006b8c8) main_fs_bigclock_clock_pane_g3

0xec30,	// (0x0006b8c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe59,	// (0x0006caf1) main_fs_bigclock_clock_pane_g

0xec38,	// (0x0006b8d0) main_fs_bigclock_clock_pane_t1

0xec46,	// (0x0006b8de) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe62,	// (0x0006cafa) main_fs_bigclock_clock_pane_t

0x9260,	// (0x00065ef8) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9260,	// (0x00065ef8) list_single_fs_bigclock_indicator_pane

0x9271,	// (0x00065f09) list_single_fs_bigclock_pane_ParamLimits

0x9271,	// (0x00065f09) list_single_fs_bigclock_pane

0xec5e,	// (0x0006b8f6) main_fs_bigclock_indicator_pane_t1

0xec6d,	// (0x0006b905) list_single_fs_bigclock_pane_g1

0xec75,	// (0x0006b90d) list_single_fs_bigclock_pane_t1

0xcc91,	// (0x00069929) main_fs_bigclock_swipe_pane_g1

0xecb8,	// (0x0006b950) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe73,	// (0x0006cb0b) main_fs_bigclock_swipe_pane_g

0xecc0,	// (0x0006b958) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc0,	// (0x0006b958) main_fs_bigclock_swipe_pane_t1

0x34a7,	// (0x0006013f) call_type_pane_ParamLimits

0x9c89,	// (0x00066921) main_btmg_pane

0xa8ee,	// (0x00067586) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8ee,	// (0x00067586) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde6,	// (0x0006ca7e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde6,	// (0x0006ca7e) list_single_cale_mrui_row_pane_g

0xa974,	// (0x0006760c) list_recal_vselct_arw_lo_pane

0xeafe,	// (0x0006b796) list_recal_vselct_arw_up_pane

0xa97c,	// (0x00067614) list_recal_vselct_pane

0x92c7,	// (0x00065f5f) btmg_button_pane

0x92d3,	// (0x00065f6b) main_btmg_pane_g1

0x9c89,	// (0x00066921) bg_button_pane_cp044

0xecdd,	// (0x0006b975) btmg_button_pane_t1

0xc82c,	// (0x000694c4) aid_listscroll_gen

0xa227,	// (0x00066ebf) main_cntbar_detail_pane

0xe832,	// (0x0006b4ca) list_cmail_folder_pane

0xe842,	// (0x0006b4da) sp_fs_scroll_pane_cp03_ParamLimits

0x92db,	// (0x00065f73) list_single_fs_dyc_pane_cp01_ParamLimits

0x92db,	// (0x00065f73) list_single_fs_dyc_pane_cp01

0xeceb,	// (0x0006b983) aid_size_cmail_indent

0xa9f4,	// (0x0006768c) list_single_dyc_row_pane_cp01

0x9319,	// (0x00065fb1) cntbar_detail_list_pane_ParamLimits

0x9319,	// (0x00065fb1) cntbar_detail_list_pane

0x9359,	// (0x00065ff1) main_cntbar_detail_cont_pane_ParamLimits

0x9359,	// (0x00065ff1) main_cntbar_detail_cont_pane

0x33cc,	// (0x00060064) scroll_pane_cp032_ParamLimits

0x33cc,	// (0x00060064) scroll_pane_cp032

0x9365,	// (0x00065ffd) cntbar_detail_list_event_pane_ParamLimits

0x9365,	// (0x00065ffd) cntbar_detail_list_event_pane

0x9327,	// (0x00065fbf) cntbar_detail_list_shct_pane

0xad8f,	// (0x00067a27) aid_list_gen

0xecf4,	// (0x0006b98c) aid_scroll

0xecfd,	// (0x0006b995) aid_size_touch_scroll_bar

0x7837,	// (0x000644cf) aid_list_double

0xed06,	// (0x0006b99e) aid_list_single

0x7825,	// (0x000644bd) aid_list_single_lg

0xa9fd,	// (0x00067695) aid_list_z_g_a_sm

0xaa05,	// (0x0006769d) aid_list_z_g_d

0x9375,	// (0x0006600d) aid_txt_z_prm

0x9385,	// (0x0006601d) aid_txt_z_prm_cp01

0x9393,	// (0x0006602b) aid_txt_z_sec

0x93a1,	// (0x00066039) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93a1,	// (0x00066039) main_cntbar_detail_cont_pane_g1

0x93ae,	// (0x00066046) main_cntbar_detail_cont_pane_g2_ParamLimits

0x93ae,	// (0x00066046) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe78,	// (0x0006cb10) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe78,	// (0x0006cb10) main_cntbar_detail_cont_pane_g

0xed0f,	// (0x0006b9a7) main_cntbar_detail_cont_pane_t1

0xed1d,	// (0x0006b9b5) main_cntbar_detail_cont_pane_t2

0xed2b,	// (0x0006b9c3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7d,	// (0x0006cb15) main_cntbar_detail_cont_pane_t

0x93ba,	// (0x00066052) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93ba,	// (0x00066052) cell_cntbar_detail_list_shct_pane

0xed39,	// (0x0006b9d1) cntbar_detail_list_shct_pane_g1

0xed42,	// (0x0006b9da) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe84,	// (0x0006cb1c) cntbar_detail_list_shct_pane_g

0x93ce,	// (0x00066066) cntbar_detail_list_event_pane_g1_ParamLimits

0x93ce,	// (0x00066066) cntbar_detail_list_event_pane_g1

0x93da,	// (0x00066072) cntbar_detail_list_event_pane_g2_ParamLimits

0x93da,	// (0x00066072) cntbar_detail_list_event_pane_g2

0x0005,

0xfe89,	// (0x0006cb21) cntbar_detail_list_event_pane_g_ParamLimits

0xfe89,	// (0x0006cb21) cntbar_detail_list_event_pane_g

0x9448,	// (0x000660e0) cntbar_detail_list_event_pane_t1_ParamLimits

0x9448,	// (0x000660e0) cntbar_detail_list_event_pane_t1

0x945d,	// (0x000660f5) cntbar_detail_list_event_pane_t2_ParamLimits

0x945d,	// (0x000660f5) cntbar_detail_list_event_pane_t2

0x0002,

0xfe96,	// (0x0006cb2e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe96,	// (0x0006cb2e) cntbar_detail_list_event_pane_t

0xcc91,	// (0x00069929) cell_cntbar_detail_list_shct_pane_g1

0x387a,	// (0x00060512) navi_pane_mv_g3

0xa227,	// (0x00066ebf) main_cntbar_detail_pane_ParamLimits

0x9c89,	// (0x00066921) main_notif_wgt_pane

0x5f96,	// (0x00062c2e) aid_tch_main_mp4_pane_g4

0x61d5,	// (0x00062e6d) popup_slider_window_cp02

0xa96a,	// (0x00067602) list_recal_day_event_pane

0x92f9,	// (0x00065f91) cntbar_detail_btn_pane_ParamLimits

0x92f9,	// (0x00065f91) cntbar_detail_btn_pane

0x9309,	// (0x00065fa1) cntbar_detail_btn_pane_cp01_ParamLimits

0x9309,	// (0x00065fa1) cntbar_detail_btn_pane_cp01

0x9327,	// (0x00065fbf) cntbar_detail_list_shct_pane_ParamLimits

0x9333,	// (0x00065fcb) cntbar_detail_pane_g1_ParamLimits

0x9333,	// (0x00065fcb) cntbar_detail_pane_g1

0x9343,	// (0x00065fdb) cntbar_detail_pane_t1_ParamLimits

0x9343,	// (0x00065fdb) cntbar_detail_pane_t1

0x93e6,	// (0x0006607e) cntbar_detail_list_event_pane_g3_ParamLimits

0x93e6,	// (0x0006607e) cntbar_detail_list_event_pane_g3

0x93fe,	// (0x00066096) cntbar_detail_list_event_pane_g4_ParamLimits

0x93fe,	// (0x00066096) cntbar_detail_list_event_pane_g4

0x9416,	// (0x000660ae) cntbar_detail_list_event_pane_g5_ParamLimits

0x9416,	// (0x000660ae) cntbar_detail_list_event_pane_g5

0x942e,	// (0x000660c6) cntbar_detail_list_event_pane_g6_ParamLimits

0x942e,	// (0x000660c6) cntbar_detail_list_event_pane_g6

0x9472,	// (0x0006610a) cntbar_detail_list_event_pane_t3_ParamLimits

0x9472,	// (0x0006610a) cntbar_detail_list_event_pane_t3

0x9484,	// (0x0006611c) popup_notif_wgt_window_ParamLimits

0x9484,	// (0x0006611c) popup_notif_wgt_window

0x9494,	// (0x0006612c) popup_submenu_window_cp01_ParamLimits

0x9494,	// (0x0006612c) popup_submenu_window_cp01

0xb427,	// (0x000680bf) bg_popup_window_pane_cp10

0xed4b,	// (0x0006b9e3) listscroll_notif_wgt_pane

0xed5d,	// (0x0006b9f5) list_notif_wgt_window

0xed66,	// (0x0006b9fe) scroll_pane_cp033

0x94a4,	// (0x0006613c) list_notif_wgt_row_pane_ParamLimits

0x94a4,	// (0x0006613c) list_notif_wgt_row_pane

0xed83,	// (0x0006ba1b) aid_size_list_notif_wgt_del

0xed90,	// (0x0006ba28) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0006ba34) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0006ba40) list_notif_wgt_row_pane_g3

0x0002,

0xfe9d,	// (0x0006cb35) list_notif_wgt_row_pane_g

0xedb5,	// (0x0006ba4d) list_notif_wgt_row_pane_t1

0xedca,	// (0x0006ba62) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0006ba74) list_notif_wgt_row_pane_t3

0x0002,

0xfea4,	// (0x0006cb3c) list_notif_wgt_row_pane_t

0xd8bd,	// (0x0006a555) list_recal_day_event_pane_g1

0xedee,	// (0x0006ba86) list_recal_day_event_pane_t1

0x9c89,	// (0x00066921) bg_button_pane_cp045

0xedfd,	// (0x0006ba95) cntbar_detail_btn_pane_t1

0xc840,	// (0x000694d8) main_callh_pane_ParamLimits

0xc840,	// (0x000694d8) main_callh_pane

0x9c89,	// (0x00066921) main_coverflow0_pane

0x9c89,	// (0x00066921) main_wgtman_pane

0x84f9,	// (0x00065191) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x84f9,	// (0x00065191) main_fs_bigclock_unlock_btn_pane

0x8cf5,	// (0x0006598d) bg_button_pane_cp16

0x8d05,	// (0x0006599d) cell_tport_appsw_pane_g3

0x94b5,	// (0x0006614d) cf0_flow_pane_ParamLimits

0x94b5,	// (0x0006614d) cf0_flow_pane

0xee0b,	// (0x0006baa3) listscroll_cf0_pane

0xee16,	// (0x0006baae) main_cf0_pane_g1

0x94c4,	// (0x0006615c) main_cf0_pane_t1_ParamLimits

0x94c4,	// (0x0006615c) main_cf0_pane_t1

0x94d8,	// (0x00066170) main_cf0_pane_t2_ParamLimits

0x94d8,	// (0x00066170) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x0006cb48) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x0006cb48) main_cf0_pane_t

0xee28,	// (0x0006bac0) scroll_pane_cp11

0x94ec,	// (0x00066184) cf0_flow_pane_g1

0x94f4,	// (0x0006618c) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0006cb4d) cf0_flow_pane_g

0x94fc,	// (0x00066194) cf0_flow_pane_t1

0x9c89,	// (0x00066921) main_call6_pane

0x9c89,	// (0x00066921) main_calllock_pane

0x950a,	// (0x000661a2) call6_btn_grp_pane_ParamLimits

0x950a,	// (0x000661a2) call6_btn_grp_pane

0x9517,	// (0x000661af) call6_pane_g1_ParamLimits

0x9517,	// (0x000661af) call6_pane_g1

0x9527,	// (0x000661bf) popup_call6_1st_window_ParamLimits

0x9527,	// (0x000661bf) popup_call6_1st_window

0x9535,	// (0x000661cd) popup_call6_2nd_window_ParamLimits

0x9535,	// (0x000661cd) popup_call6_2nd_window

0x9543,	// (0x000661db) cell_call6_btn_pane_ParamLimits

0x9543,	// (0x000661db) cell_call6_btn_pane

0xb427,	// (0x000680bf) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0006bacb) popup_call6_1st_window_g1

0xee3b,	// (0x0006bad3) popup_call6_1st_window_g2

0xee43,	// (0x0006badb) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0006cb52) popup_call6_1st_window_g

0xee4b,	// (0x0006bae3) popup_call6_1st_window_t1

0xee5a,	// (0x0006baf2) popup_call6_1st_window_t2

0xee6a,	// (0x0006bb02) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x0006cb59) popup_call6_1st_window_t

0xb427,	// (0x000680bf) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0006bacb) popup_call6_2nd_window_g1

0xee3b,	// (0x0006bad3) popup_call6_2nd_window_g2

0xee43,	// (0x0006badb) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0006cb52) popup_call6_2nd_window_g

0xee4b,	// (0x0006bae3) popup_call6_2nd_window_t1

0x9c89,	// (0x00066921) bg_button_pane_cp15

0xee7a,	// (0x0006bb12) cell_call6_btn_pane_g1

0xee83,	// (0x0006bb1b) cell_call6_btn_pane_t1

0x9552,	// (0x000661ea) listscroll_wgtman_pane_ParamLimits

0x9552,	// (0x000661ea) listscroll_wgtman_pane

0x9570,	// (0x00066208) wgtman_btn_pane_ParamLimits

0x9570,	// (0x00066208) wgtman_btn_pane

0xb2ed,	// (0x00067f85) aid_scroll_copy1

0xee92,	// (0x0006bb2a) list_wgtman_pane

0x95a5,	// (0x0006623d) wgtman_btn_pane_g1_ParamLimits

0x95a5,	// (0x0006623d) wgtman_btn_pane_g1

0x95cd,	// (0x00066265) wgtman_btn_pane_t1_ParamLimits

0x95cd,	// (0x00066265) wgtman_btn_pane_t1

0xee9c,	// (0x0006bb34) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0006bb34) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0006cb60) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0006cb60) wgtman_btn_pane_t

0x9604,	// (0x0006629c) listrow_wgtman_pane_ParamLimits

0x9604,	// (0x0006629c) listrow_wgtman_pane

0x9615,	// (0x000662ad) listrow_wgtman_pane_g1

0x9622,	// (0x000662ba) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x0006cb65) listrow_wgtman_pane_g

0x9640,	// (0x000662d8) listrow_wgtman_pane_t1

0x9658,	// (0x000662f0) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x0006cb6a) listrow_wgtman_pane_t

0x967e,	// (0x00066316) wait_bar_pane_cp09

0xeeb3,	// (0x0006bb4b) main_calllock_btn_pane

0xeebd,	// (0x0006bb55) main_calllock_pane_g1

0x9c89,	// (0x00066921) bg_button_pane_cp17

0xeec9,	// (0x0006bb61) main_calllock_btn_pane_g1

0xeed2,	// (0x0006bb6a) main_calllock_btn_pane_t1

0x9c89,	// (0x00066921) main_dialer3_pane

0x9c89,	// (0x00066921) main_fmrd2_pane

0xcc91,	// (0x00069929) main_fs_bigclock_unlock_btn_pane_g1

0xeee9,	// (0x0006bb81) main_fs_bigclock_unlock_btn_pane_t1

0x9690,	// (0x00066328) area_fmrd2_info_pane_ParamLimits

0x9690,	// (0x00066328) area_fmrd2_info_pane

0x969c,	// (0x00066334) area_fmrd2_visual_pane_ParamLimits

0x969c,	// (0x00066334) area_fmrd2_visual_pane

0x96aa,	// (0x00066342) fmrd2_indi_pane_ParamLimits

0x96aa,	// (0x00066342) fmrd2_indi_pane

0x96b7,	// (0x0006634f) area_fmrd2_visual_pane_g1

0x96bf,	// (0x00066357) area_fmrd2_visual_pane_t1

0x96cf,	// (0x00066367) area_fmrd2_visual_pane_t2

0x96df,	// (0x00066377) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x0006cb74) area_fmrd2_visual_pane_t

0x96ef,	// (0x00066387) area_fmrd2_info_pane_g1

0x96f7,	// (0x0006638f) area_fmrd2_info_pane_t1

0x9707,	// (0x0006639f) area_fmrd2_info_pane_t2

0x9717,	// (0x000663af) area_fmrd2_info_pane_t3

0x9727,	// (0x000663bf) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x0006cb7b) area_fmrd2_info_pane_t

0x9737,	// (0x000663cf) fmrd2_indi_pane_t1

0x9747,	// (0x000663df) fmrd2_indi_pane_t2

0x9757,	// (0x000663ef) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x0006cb84) fmrd2_indi_pane_t

0xe47d,	// (0x0006b115) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe47d,	// (0x0006b115) list_single_fs_bigclock_indicator_pane_g5

0xe526,	// (0x0006b1be) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe526,	// (0x0006b1be) list_single_fs_bigclock_indicator_pane_t5

0x8f02,	// (0x00065b9a) aid_cell_bcale_month_pane_ParamLimits

0x8f02,	// (0x00065b9a) aid_cell_bcale_month_pane

0x8f20,	// (0x00065bb8) bcale_month_pane_ParamLimits

0x8f20,	// (0x00065bb8) bcale_month_pane

0x8f3c,	// (0x00065bd4) bcale_preview_pane_ParamLimits

0x8f3c,	// (0x00065bd4) bcale_preview_pane

0xec75,	// (0x0006b90d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec94,	// (0x0006b92c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec94,	// (0x0006b92c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6e,	// (0x0006cb06) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0006cb06) list_single_fs_bigclock_pane_t

0xeee1,	// (0x0006bb79) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0006cb6f) main_fs_bigclock_unlock_btn_pane_g

0x9767,	// (0x000663ff) aid_dia3_key_size_ParamLimits

0x9767,	// (0x000663ff) aid_dia3_key_size

0x9773,	// (0x0006640b) aid_dia3_listrow_size_ParamLimits

0x9773,	// (0x0006640b) aid_dia3_listrow_size

0x9783,	// (0x0006641b) dia3_keypad_fun_pane_ParamLimits

0x9783,	// (0x0006641b) dia3_keypad_fun_pane

0x9793,	// (0x0006642b) dia3_keypad_num_pane_ParamLimits

0x9793,	// (0x0006642b) dia3_keypad_num_pane

0x97a3,	// (0x0006643b) dia3_listscroll_pane_ParamLimits

0x97a3,	// (0x0006643b) dia3_listscroll_pane

0x97b1,	// (0x00066449) dia3_numentry_pane_ParamLimits

0x97b1,	// (0x00066449) dia3_numentry_pane

0xeef7,	// (0x0006bb8f) dia3_list_pane

0xef02,	// (0x0006bb9a) scroll_pane_cp12

0x9c89,	// (0x00066921) bg_dia3_numentry_pane

0x97bf,	// (0x00066457) dia3_numentry_pane_t1

0x97ce,	// (0x00066466) cell_dia3_key_num_pane

0x97d6,	// (0x0006646e) cell_dia3_key0_fun_pane_ParamLimits

0x97d6,	// (0x0006646e) cell_dia3_key0_fun_pane

0x97e3,	// (0x0006647b) cell_dia3_key1_fun_pane_ParamLimits

0x97e3,	// (0x0006647b) cell_dia3_key1_fun_pane

0x97f0,	// (0x00066488) dia3_listrow_pane

0xe17b,	// (0x0006ae13) bg_dia3_numentry_pane_g1

0x9c89,	// (0x00066921) bg_button_pane_cp21

0xef0d,	// (0x0006bba5) cell_dia3_key_num_pane_t1

0xef1b,	// (0x0006bbb3) cell_dia3_key_num_pane_t2

0xef2a,	// (0x0006bbc2) cell_dia3_key_num_pane_t3

0xef39,	// (0x0006bbd1) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x0006cb8b) cell_dia3_key_num_pane_t

0x9c89,	// (0x00066921) bg_button_pane_cp19

0x97fd,	// (0x00066495) cell_dia3_key0_fun_pane_g1

0x9c89,	// (0x00066921) bg_button_pane_cp20

0x9805,	// (0x0006649d) cell_dia3_key1_fun_pane_g1

0x980d,	// (0x000664a5) area_left_week_number_pane

0x9820,	// (0x000664b8) area_top_day_name_pane

0x982e,	// (0x000664c6) frame_month_view_pane

0xef48,	// (0x0006bbe0) grid_month_view_pane

0x9843,	// (0x000664db) cell_top_day_name_pane_ParamLimits

0x9843,	// (0x000664db) cell_top_day_name_pane

0x985f,	// (0x000664f7) cell_area_left_week_number_pane_ParamLimits

0x985f,	// (0x000664f7) cell_area_left_week_number_pane

0x9880,	// (0x00066518) cell_month_view_pane_ParamLimits

0x9880,	// (0x00066518) cell_month_view_pane

0xef56,	// (0x0006bbee) frm_month_g1

0x98ac,	// (0x00066544) frm_month_g2

0x98bd,	// (0x00066555) frm_month_g3

0x98ce,	// (0x00066566) frm_month_g4

0x98df,	// (0x00066577) frm_month_g5

0x98f0,	// (0x00066588) frm_month_g6

0x9903,	// (0x0006659b) frm_month_g7

0xef63,	// (0x0006bbfb) frm_month_g8

0x9916,	// (0x000665ae) frm_month_g9

0x9923,	// (0x000665bb) frm_month_g10

0x9930,	// (0x000665c8) frm_month_g11

0x993d,	// (0x000665d5) frm_month_g12

0x994a,	// (0x000665e2) frm_month_g13

0x9959,	// (0x000665f1) frm_month_g14

0x9968,	// (0x00066600) frm_month_g15

0x9977,	// (0x0006660f) frm_month_g16

0x000f,

0xfefc,	// (0x0006cb94) frm_month_g

0xef70,	// (0x0006bc08) cell_top_day_name_pane_t1

0x9986,	// (0x0006661e) cell_area_left_week_number_pane_g1

0x9995,	// (0x0006662d) cell_area_left_week_number_pane_t1

0xcec1,	// (0x00069b59) cell_month_view_pane_g1

0x99ab,	// (0x00066643) cell_month_view_pane_t1

0x9c89,	// (0x00066921) main_fps_pane

0xe716,	// (0x0006b3ae) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe716,	// (0x0006b3ae) cmail_ddmenu_btn02_pane_cp1

0xe732,	// (0x0006b3ca) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe732,	// (0x0006b3ca) cmail_ddmenu_btn02_pane_cp2

0x91c7,	// (0x00065e5f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91c7,	// (0x00065e5f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe21,	// (0x0006cab9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe21,	// (0x0006cab9) cmail_ddmenu_btn02_pane_g

0x91e5,	// (0x00065e7d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91e5,	// (0x00065e7d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe26,	// (0x0006cabe) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe26,	// (0x0006cabe) cmail_ddmenu_btn02_pane_t

0x99c1,	// (0x00066659) fps_text_pane_ParamLimits

0x99c1,	// (0x00066659) fps_text_pane

0x99ce,	// (0x00066666) main_fps_pane_g1_ParamLimits

0x99ce,	// (0x00066666) main_fps_pane_g1

0x99da,	// (0x00066672) wait_bar_pane_cp010_ParamLimits

0x99da,	// (0x00066672) wait_bar_pane_cp010

0x99e6,	// (0x0006667e) fps_text_pane_t1_ParamLimits

0x99e6,	// (0x0006667e) fps_text_pane_t1

0x6609,	// (0x000632a1) cam4_image_uncrop_pane_g1

0x6612,	// (0x000632aa) cam4_image_uncrop_pane_g2

0x661b,	// (0x000632b3) cam4_image_uncrop_pane_g3

0x6624,	// (0x000632bc) cam4_image_uncrop_pane_g4

0x0003,

0xf8ef,	// (0x0006c587) cam4_image_uncrop_pane_g

0x97f0,	// (0x00066488) dia3_listrow_pane_ParamLimits

0x9c89,	// (0x00066921) main_phob2_pane

0x8cd7,	// (0x0006596f) cell_tport_appsw_pane_cp02_ParamLimits

0x8cd7,	// (0x0006596f) cell_tport_appsw_pane_cp02

0x8ce6,	// (0x0006597e) cell_tport_appsw_pane_cp03_ParamLimits

0x8ce6,	// (0x0006597e) cell_tport_appsw_pane_cp03

0x9c89,	// (0x00066921) phob2_contact_card_pane

0x9c89,	// (0x00066921) phob2_listscroll_pane

0xef83,	// (0x0006bc1b) phob2_list_pane

0xef8b,	// (0x0006bc23) scroll_pane_cp034

0x99ff,	// (0x00066697) phob2_cc_data_pane_ParamLimits

0x99ff,	// (0x00066697) phob2_cc_data_pane

0x9a1b,	// (0x000666b3) phob2_cc_listscroll_pane_ParamLimits

0x9a1b,	// (0x000666b3) phob2_cc_listscroll_pane

0x9a37,	// (0x000666cf) list_double_large_graphic_phob2_pane_ParamLimits

0x9a37,	// (0x000666cf) list_double_large_graphic_phob2_pane

0x9a4f,	// (0x000666e7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a4f,	// (0x000666e7) list_double_large_graphic_phob2_pane_g1

0x9a65,	// (0x000666fd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a65,	// (0x000666fd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x0006cbb5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x0006cbb5) list_double_large_graphic_phob2_pane_g

0x9a71,	// (0x00066709) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a71,	// (0x00066709) list_double_large_graphic_phob2_pane_t1

0x9a86,	// (0x0006671e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a86,	// (0x0006671e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x0006cbba) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x0006cbba) list_double_large_graphic_phob2_pane_t

0x9c89,	// (0x00066921) list_highlight_pane_cp024

0xef93,	// (0x0006bc2b) phob2_cc_button_pane

0x9a98,	// (0x00066730) phob2_cc_data_pane_g1_ParamLimits

0x9a98,	// (0x00066730) phob2_cc_data_pane_g1

0x9aa4,	// (0x0006673c) phob2_cc_data_pane_g2_ParamLimits

0x9aa4,	// (0x0006673c) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x0006cbbf) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x0006cbbf) phob2_cc_data_pane_g

0x9ab0,	// (0x00066748) phob2_cc_data_pane_t1_ParamLimits

0x9ab0,	// (0x00066748) phob2_cc_data_pane_t1

0x9ac2,	// (0x0006675a) phob2_cc_data_pane_t2_ParamLimits

0x9ac2,	// (0x0006675a) phob2_cc_data_pane_t2

0x9ad4,	// (0x0006676c) phob2_cc_data_pane_t3_ParamLimits

0x9ad4,	// (0x0006676c) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x0006cbc4) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x0006cbc4) phob2_cc_data_pane_t

0xef9b,	// (0x0006bc33) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x0006bc33) phob2_cc_list_pane

0xda1e,	// (0x0006a6b6) scroll_pane_cp035_ParamLimits

0xda1e,	// (0x0006a6b6) scroll_pane_cp035

0xa227,	// (0x00066ebf) bg_button_pane_cp033

0xefa7,	// (0x0006bc3f) phob2_cc_button_pane_g1

0xefb3,	// (0x0006bc4b) phob2_cc_button_pane_t1

0xefc8,	// (0x0006bc60) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x0006cbcb) phob2_cc_button_pane_t

0x9ae6,	// (0x0006677e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ae6,	// (0x0006677e) list_double_large_graphic_phob2_cc_pane

0x9b02,	// (0x0006679a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b02,	// (0x0006679a) list_double_large_graphic_phob2_cc_pane_g1

0x9b13,	// (0x000667ab) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b13,	// (0x000667ab) list_double_large_graphic_phob2_cc_pane_g2

0x9b22,	// (0x000667ba) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b22,	// (0x000667ba) list_double_large_graphic_phob2_cc_pane_g3

0x9b31,	// (0x000667c9) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b31,	// (0x000667c9) list_double_large_graphic_phob2_cc_pane_g4

0x9b42,	// (0x000667da) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b42,	// (0x000667da) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x0006cbd0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x0006cbd0) list_double_large_graphic_phob2_cc_pane_g

0x9b51,	// (0x000667e9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b51,	// (0x000667e9) list_double_large_graphic_phob2_cc_pane_t1

0x9b7a,	// (0x00066812) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b7a,	// (0x00066812) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x0006cbdb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x0006cbdb) list_double_large_graphic_phob2_cc_pane_t

0xefda,	// (0x0006bc72) list_highlight_pane_cp025_ParamLimits

0xefda,	// (0x0006bc72) list_highlight_pane_cp025

0xa227,	// (0x00066ebf) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x0006bc3f) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x0006bc4b) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x0006bc60) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x0006cbcb) phob2_cc_button_pane_t_ParamLimits

0x1081,	// (0x0005dd19) popup_wgtman_window

0xd797,	// (0x0006a42f) scroll_pane_cp038

0x958d,	// (0x00066225) wgtman_btn_pane_cp_01_ParamLimits

0x958d,	// (0x00066225) wgtman_btn_pane_cp_01

0xefe8,	// (0x0006bc80) wgtman_content_pane

0xeff1,	// (0x0006bc89) wgtman_heading_pane

0x9c89,	// (0x00066921) bg_heading_pane_cp02

0xeffa,	// (0x0006bc92) wgtman_heading_pane_g1

0xf002,	// (0x0006bc9a) wgtman_heading_pane_t1

0xf010,	// (0x0006bca8) scroll_pane_cp036

0xf018,	// (0x0006bcb0) wgtman_list_pane

0xf020,	// (0x0006bcb8) wgtman_list_pane_t1_ParamLimits

0xf020,	// (0x0006bcb8) wgtman_list_pane_t1

0x6566,	// (0x000631fe) cam4_grid_pane

0x72e2,	// (0x00063f7a) bg_button_pane_cp015_ParamLimits

0x72f4,	// (0x00063f8c) bg_button_pane_cp016_ParamLimits

0x7307,	// (0x00063f9f) bg_button_pane_cp017_ParamLimits

0x735d,	// (0x00063ff5) popup_vitu2_query_window_g3_ParamLimits

0x735d,	// (0x00063ff5) popup_vitu2_query_window_g3

0x741c,	// (0x000640b4) popup_vitu2_query_window_t6_ParamLimits

0x741c,	// (0x000640b4) popup_vitu2_query_window_t6

0x7447,	// (0x000640df) popup_vitu2_query_window_t7_ParamLimits

0x7447,	// (0x000640df) popup_vitu2_query_window_t7

0xdd95,	// (0x0006aa2d) cam4_grid_pane_g1

0xdf60,	// (0x0006abf8) cam4_grid_pane_g2

0xf03a,	// (0x0006bcd2) cam4_grid_pane_g3

0xf043,	// (0x0006bcdb) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x0006cbe0) cam4_grid_pane_g

0x2250,	// (0x0005eee8) aid_placing_vt_slider_lsc_ParamLimits

0x2583,	// (0x0005f21b) vidtel_button_pane_ParamLimits

0x2583,	// (0x0005f21b) vidtel_button_pane

0xf04e,	// (0x0006bce6) bg_button_pane_cp034

0x9ba3,	// (0x0006683b) vidtel_button_pane_g1

0xf058,	// (0x0006bcf0) vidtel_button_pane_t1

0xd89b,	// (0x0006a533) aid_size_vtel_slider_touch

0xda1e,	// (0x0006a6b6) scroll_pane_cp039

0xe1b9,	// (0x0006ae51) ncim_query_button_pane_cp01_ParamLimits

0xe1d8,	// (0x0006ae70) ncimui_query_pane_g1_ParamLimits

0xa227,	// (0x00066ebf) input_focus_pane_cp012_ParamLimits

0xe1fd,	// (0x0006ae95) ncim_query_entry_pane_t1_ParamLimits

0xda1e,	// (0x0006a6b6) scroll_pane_cp039_ParamLimits

0x37ec,	// (0x00060484) navi_pane_bcale_mc_g1

0x37f4,	// (0x0006048c) navi_pane_bcale_mc_t1

0xe77b,	// (0x0006b413) main_sp_fs_email_pane_g1

0xe787,	// (0x0006b41f) main_sp_fs_email_pane_g2

0x0001,

0xfcdf,	// (0x0006c977) main_sp_fs_email_pane_g

0xea03,	// (0x0006b69b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea03,	// (0x0006b69b) list_single_cale_mrui_row_pane_g3

0x9205,	// (0x00065e9d) list_single_recal_day_pane_g5_event_pane

0xa9c8,	// (0x00067660) list_single_recal_day_pane_g7

0xf066,	// (0x0006bcfe) list_recal_day_event_pane_cp01

0xf06f,	// (0x0006bd07) list_recal_vselct_arw_lo_pane_cp01

0xf077,	// (0x0006bd0f) list_recal_vselct_arw_up_pane_cp01

0xf07f,	// (0x0006bd17) list_recal_vselct_pane_cp01

0xd8bd,	// (0x0006a555) list_recal_day_event_pane_cp01_g1

0xaa0d,	// (0x000676a5) list_recal_day_event_pane_cp01_t1

0xa9d0,	// (0x00067668) list_single_recal_day_pane_t1_ParamLimits

0xa9e2,	// (0x0006767a) list_single_recal_day_pane_t2_ParamLimits

0xfe36,	// (0x0006cace) list_single_recal_day_pane_t_ParamLimits

0xa68e,	// (0x00067326) bg_notes_pane_ParamLimits

0xa731,	// (0x000673c9) list_notes_pane_ParamLimits

0x13d0,	// (0x0005e068) scroll_pane_cp06_ParamLimits

0xa753,	// (0x000673eb) main_notes_pane_ParamLimits

0x9c89,	// (0x00066921) main_welc_pane

0x9bab,	// (0x00066843) main_welc_body_pane_ParamLimits

0x9bab,	// (0x00066843) main_welc_body_pane

0x9bc6,	// (0x0006685e) main_welc_opti_pane_ParamLimits

0x9bc6,	// (0x0006685e) main_welc_opti_pane

0x9bfb,	// (0x00066893) main_welc_pane_t1_ParamLimits

0x9bfb,	// (0x00066893) main_welc_pane_t1

0x9c19,	// (0x000668b1) main_welc_body_row_pane_ParamLimits

0x9c19,	// (0x000668b1) main_welc_body_row_pane

0x9c33,	// (0x000668cb) main_welc_opti_row_pane_ParamLimits

0x9c33,	// (0x000668cb) main_welc_opti_row_pane

0xf089,	// (0x0006bd21) main_welc_opti_row_pane_g1

0xf091,	// (0x0006bd29) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0006bd38) main_welc_body_row_pane_t1

0xed55,	// (0x0006b9ed) popup_notif_wgt_heading_pane

0xed83,	// (0x0006ba1b) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0006ba28) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0006ba34) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0006ba40) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9d,	// (0x0006cb35) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0006ba4d) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0006ba62) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0006ba74) list_notif_wgt_row_pane_t3_ParamLimits

0xfea4,	// (0x0006cb3c) list_notif_wgt_row_pane_t_ParamLimits

0x9615,	// (0x000662ad) listrow_wgtman_pane_g1_ParamLimits

0x9622,	// (0x000662ba) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x0006cb65) listrow_wgtman_pane_g_ParamLimits

0x9640,	// (0x000662d8) listrow_wgtman_pane_t1_ParamLimits

0x9658,	// (0x000662f0) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x0006cb6a) listrow_wgtman_pane_t_ParamLimits

0x967e,	// (0x00066316) wait_bar_pane_cp09_ParamLimits

0x9c89,	// (0x00066921) bg_popup_heading_pane_cp02

0xf0af,	// (0x0006bd47) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0006bd4f) popup_notif_wgt_heading_pane_t1

0x9c89,	// (0x00066921) main_vids_pane

0x9c89,	// (0x00066921) vids_listscroll_pane

0x9c44,	// (0x000668dc) scroll_pane_cp040

0x9c89,	// (0x00066921) vids_list_pane

0x9c4f,	// (0x000668e7) vids_list_double_pane_ParamLimits

0x9c4f,	// (0x000668e7) vids_list_double_pane

0x9c62,	// (0x000668fa) vids_list_double_pane_g1

0x9c6b,	// (0x00066903) vids_list_double_pane_t1

0x9c7b,	// (0x00066913) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x0006cbee) vids_list_double_pane_t

0xa227,	// (0x00066ebf) main_ncimui_pane_ParamLimits

0x80af,	// (0x00064d47) main_ncimui_pane_g1_ParamLimits

0x80bd,	// (0x00064d55) main_ncimui_pane_g2_ParamLimits

0x80bd,	// (0x00064d55) main_ncimui_pane_g2

0x0001,

0xfbe4,	// (0x0006c87c) main_ncimui_pane_g_ParamLimits

0xfbe4,	// (0x0006c87c) main_ncimui_pane_g

0x9be1,	// (0x00066879) main_welc_pane_g1_ParamLimits

0x9be1,	// (0x00066879) main_welc_pane_g1

0x9bed,	// (0x00066885) main_welc_pane_g2_ParamLimits

0x9bed,	// (0x00066885) main_welc_pane_g2

0x0001,

0xff51,	// (0x0006cbe9) main_welc_pane_g_ParamLimits

0xff51,	// (0x0006cbe9) main_welc_pane_g

0xa68e,	// (0x00067326) listscroll_mce_pane_ParamLimits

0x38b6,	// (0x0006054e) wait_bar_pane_cp10

0xc834,	// (0x000694cc) main_cale_day_pane_ParamLimits

0xc834,	// (0x000694cc) main_cale_week_pane_ParamLimits

0xa68e,	// (0x00067326) main_messa_pane_ParamLimits

0x5960,	// (0x000625f8) main_clock2_btn_pane_ParamLimits

0x5960,	// (0x000625f8) main_clock2_btn_pane

0xd049,	// (0x00069ce1) main_clock2_btn_pane_cp01_ParamLimits

0xd049,	// (0x00069ce1) main_clock2_btn_pane_cp01

0xe9d4,	// (0x0006b66c) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0006bab8) main_cf0_pane_g2

0x0001,

0xfeab,	// (0x0006cb43) main_cf0_pane_g

0x980d,	// (0x000664a5) area_left_week_number_pane_ParamLimits

0x9820,	// (0x000664b8) area_top_day_name_pane_ParamLimits

0x982e,	// (0x000664c6) frame_month_view_pane_ParamLimits

0xef48,	// (0x0006bbe0) grid_month_view_pane_ParamLimits

0xef56,	// (0x0006bbee) frm_month_g1_ParamLimits

0x98ac,	// (0x00066544) frm_month_g2_ParamLimits

0x98bd,	// (0x00066555) frm_month_g3_ParamLimits

0x98ce,	// (0x00066566) frm_month_g4_ParamLimits

0x98df,	// (0x00066577) frm_month_g5_ParamLimits

0x98f0,	// (0x00066588) frm_month_g6_ParamLimits

0x9903,	// (0x0006659b) frm_month_g7_ParamLimits

0xef63,	// (0x0006bbfb) frm_month_g8_ParamLimits

0x9916,	// (0x000665ae) frm_month_g9_ParamLimits

0x9923,	// (0x000665bb) frm_month_g10_ParamLimits

0x9930,	// (0x000665c8) frm_month_g11_ParamLimits

0x993d,	// (0x000665d5) frm_month_g12_ParamLimits

0x994a,	// (0x000665e2) frm_month_g13_ParamLimits

0x9959,	// (0x000665f1) frm_month_g14_ParamLimits

0x9968,	// (0x00066600) frm_month_g15_ParamLimits

0x9977,	// (0x0006660f) frm_month_g16_ParamLimits

0xfefc,	// (0x0006cb94) frm_month_g_ParamLimits

0xef70,	// (0x0006bc08) cell_top_day_name_pane_t1_ParamLimits

0x9986,	// (0x0006661e) cell_area_left_week_number_pane_g1_ParamLimits

0x9995,	// (0x0006662d) cell_area_left_week_number_pane_t1_ParamLimits

0xcec1,	// (0x00069b59) cell_month_view_pane_g1_ParamLimits

0x99ab,	// (0x00066643) cell_month_view_pane_t1_ParamLimits

0xa686,	// (0x0006731e) main_clock2_btn_pane_g1

0xf0c5,	// (0x0006bd5d) main_clock2_btn_pane_t1

0xa227,	// (0x00066ebf) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x0006b413) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x0006b41f) main_sp_fs_email_pane_g2_ParamLimits

0xfcdf,	// (0x0006c977) main_sp_fs_email_pane_g_ParamLimits

0xeadf,	// (0x0006b777) list_recal_day_pane_ParamLimits

0xeaf0,	// (0x0006b788) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small

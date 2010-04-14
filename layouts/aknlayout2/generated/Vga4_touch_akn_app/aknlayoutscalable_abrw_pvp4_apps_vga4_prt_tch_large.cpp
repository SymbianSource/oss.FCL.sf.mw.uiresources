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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009cde8 };

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
0x0b73,	// (0x0009d95b) Screen

0x0b7f,	// (0x0009d967) application_window

0x0bd7,	// (0x0009d9bf) area_bottom_pane_ParamLimits

0x0bd7,	// (0x0009d9bf) area_bottom_pane

0x0c0c,	// (0x0009d9f4) area_top_pane_ParamLimits

0x0c0c,	// (0x0009d9f4) area_top_pane

0x9c46,	// (0x000a6a2e) call_video_uplink_pane_ParamLimits

0x9c46,	// (0x000a6a2e) call_video_uplink_pane

0x0c9b,	// (0x0009da83) main_pane_ParamLimits

0x0c9b,	// (0x0009da83) main_pane

0xc873,	// (0x000a965b) context_pane

0x45e7,	// (0x000a13cf) navi_pane

0x460b,	// (0x000a13f3) popup_cale_events_window_ParamLimits

0x460b,	// (0x000a13f3) popup_cale_events_window

0xc886,	// (0x000a966e) popup_mup_playback_window

0x4623,	// (0x000a140b) signal_pane

0xa869,	// (0x000a7651) main_browser_pane

0xb40b,	// (0x000a81f3) main_burst_pane

0x4499,	// (0x000a1281) main_calc_pane

0xc816,	// (0x000a95fe) main_cale_day_pane

0x13cd,	// (0x0009e1b5) main_cale_month_pane

0xc816,	// (0x000a95fe) main_cale_week_pane

0xb40b,	// (0x000a81f3) main_call_pane

0xa077,	// (0x000a6e5f) main_call_poc_pane

0xb40b,	// (0x000a81f3) main_camera_pane

0xb40b,	// (0x000a81f3) main_chi_dic_pane

0xb2ad,	// (0x000a8095) main_clock_pane

0xa077,	// (0x000a6e5f) main_fmradio_pane

0xb40b,	// (0x000a81f3) main_graph_messa_pane

0xa077,	// (0x000a6e5f) main_help_pane

0xa869,	// (0x000a7651) main_im_pane

0xa7a4,	// (0x000a758c) main_image_pane_ParamLimits

0xa7a4,	// (0x000a758c) main_image_pane

0xa077,	// (0x000a6e5f) main_location2_pane

0xb40b,	// (0x000a81f3) main_location_pane

0xa7a4,	// (0x000a758c) main_messa_pane

0xa077,	// (0x000a6e5f) main_mp2_pane

0xb40b,	// (0x000a81f3) main_mp_pane

0xa077,	// (0x000a6e5f) main_msg_pane

0xa077,	// (0x000a6e5f) main_mup_eq_pane

0xa077,	// (0x000a6e5f) main_mup_pane

0xa869,	// (0x000a7651) main_notes_pane

0xa077,	// (0x000a6e5f) main_pec_pane

0xa077,	// (0x000a6e5f) main_phob_pane

0xa077,	// (0x000a6e5f) main_pinb_pane

0xa077,	// (0x000a6e5f) main_postcard_pane

0xa077,	// (0x000a6e5f) main_qdial_pane

0xb40b,	// (0x000a81f3) main_skin_pane

0xa077,	// (0x000a6e5f) main_smil2_pane

0xb40b,	// (0x000a81f3) main_smil_pane

0xb40b,	// (0x000a81f3) main_video_pane

0xb40b,	// (0x000a81f3) main_video_tele_pane

0xa7a4,	// (0x000a758c) main_viewer_pane_ParamLimits

0xa7a4,	// (0x000a758c) main_viewer_pane

0xb40b,	// (0x000a81f3) main_vorec_pane

0x44d1,	// (0x000a12b9) popup_blid_sat_info_window_ParamLimits

0x44d1,	// (0x000a12b9) popup_blid_sat_info_window

0x44eb,	// (0x000a12d3) popup_dyc_status_message_window_ParamLimits

0x44eb,	// (0x000a12d3) popup_dyc_status_message_window

0x44fb,	// (0x000a12e3) popup_grid_large_graphic_window_ParamLimits

0x44fb,	// (0x000a12e3) popup_grid_large_graphic_window

0x4573,	// (0x000a135b) popup_loc_request_window_ParamLimits

0x4573,	// (0x000a135b) popup_loc_request_window

0x45bb,	// (0x000a13a3) popup_wml_address_window_ParamLimits

0x45bb,	// (0x000a13a3) popup_wml_address_window

0x4371,	// (0x000a1159) call_muted_g1

0x4030,	// (0x000a0e18) popup_call_audio_conf_window_ParamLimits

0x4030,	// (0x000a0e18) popup_call_audio_conf_window

0x4381,	// (0x000a1169) popup_call_audio_first_window_ParamLimits

0x4381,	// (0x000a1169) popup_call_audio_first_window

0x43c1,	// (0x000a11a9) popup_call_audio_in_window_ParamLimits

0x43c1,	// (0x000a11a9) popup_call_audio_in_window

0x43e5,	// (0x000a11cd) popup_call_audio_out_window_ParamLimits

0x43e5,	// (0x000a11cd) popup_call_audio_out_window

0x4407,	// (0x000a11ef) popup_call_audio_second_window_ParamLimits

0x4407,	// (0x000a11ef) popup_call_audio_second_window

0x4437,	// (0x000a121f) popup_call_audio_wait_window_ParamLimits

0x4437,	// (0x000a121f) popup_call_audio_wait_window

0x4458,	// (0x000a1240) popup_number_entry_window_ParamLimits

0x4458,	// (0x000a1240) popup_number_entry_window

0x9c64,	// (0x000a6a4c) bg_popup_call_pane_cp05_ParamLimits

0x9c64,	// (0x000a6a4c) bg_popup_call_pane_cp05

0x9c84,	// (0x000a6a6c) popup_number_entry_window_t1

0x9c97,	// (0x000a6a7f) popup_number_entry_window_t2

0x9ca9,	// (0x000a6a91) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000abeae) popup_number_entry_window_t

0x9cbb,	// (0x000a6aa3) text_title_cp2

0x9cce,	// (0x000a6ab6) bg_popup_call_pane_cp_ParamLimits

0x9cce,	// (0x000a6ab6) bg_popup_call_pane_cp

0x9cdc,	// (0x000a6ac4) call_thumbnail_pane

0x9ce4,	// (0x000a6acc) popup_call_audio_in_window_g1_ParamLimits

0x9ce4,	// (0x000a6acc) popup_call_audio_in_window_g1

0x9cf0,	// (0x000a6ad8) popup_call_audio_in_window_g2_ParamLimits

0x9cf0,	// (0x000a6ad8) popup_call_audio_in_window_g2

0x9cfc,	// (0x000a6ae4) popup_call_audio_in_window_g3_ParamLimits

0x9cfc,	// (0x000a6ae4) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000abeb7) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000abeb7) popup_call_audio_in_window_g

0x9d08,	// (0x000a6af0) popup_call_audio_in_window_t1_ParamLimits

0x9d08,	// (0x000a6af0) popup_call_audio_in_window_t1

0x9d24,	// (0x000a6b0c) popup_call_audio_in_window_t2_ParamLimits

0x9d24,	// (0x000a6b0c) popup_call_audio_in_window_t2

0x9d40,	// (0x000a6b28) popup_call_audio_in_window_t3_ParamLimits

0x9d40,	// (0x000a6b28) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000abebe) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000abebe) popup_call_audio_in_window_t

0x9cce,	// (0x000a6ab6) bg_popup_call_pane_cp01_ParamLimits

0x9cce,	// (0x000a6ab6) bg_popup_call_pane_cp01

0x9cdc,	// (0x000a6ac4) call_thumbnail_pane_cp02

0x9d53,	// (0x000a6b3b) call_type_pane_cp022

0x9d5b,	// (0x000a6b43) popup_call_audio_out_window_g1_ParamLimits

0x9d5b,	// (0x000a6b43) popup_call_audio_out_window_g1

0x9d6d,	// (0x000a6b55) popup_call_audio_out_window_g2_ParamLimits

0x9d6d,	// (0x000a6b55) popup_call_audio_out_window_g2

0x9d79,	// (0x000a6b61) popup_call_audio_out_window_g3_ParamLimits

0x9d79,	// (0x000a6b61) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000abec5) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000abec5) popup_call_audio_out_window_g

0x9d8b,	// (0x000a6b73) popup_call_audio_out_window_t1_ParamLimits

0x9d8b,	// (0x000a6b73) popup_call_audio_out_window_t1

0x9da3,	// (0x000a6b8b) popup_call_audio_out_window_t2_ParamLimits

0x9da3,	// (0x000a6b8b) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000abecc) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000abecc) popup_call_audio_out_window_t

0x9db8,	// (0x000a6ba0) bg_popup_call_pane_ParamLimits

0x9db8,	// (0x000a6ba0) bg_popup_call_pane

0x0e9f,	// (0x0009dc87) call_thumbnail_pane_cp_ParamLimits

0x0e9f,	// (0x0009dc87) call_thumbnail_pane_cp

0x9e3c,	// (0x000a6c24) call_type_pane_cp01_ParamLimits

0x9e3c,	// (0x000a6c24) call_type_pane_cp01

0x9e80,	// (0x000a6c68) popup_call_audio_first_window_g1_ParamLimits

0x9e80,	// (0x000a6c68) popup_call_audio_first_window_g1

0x9ecc,	// (0x000a6cb4) popup_call_audio_first_window_g2_ParamLimits

0x9ecc,	// (0x000a6cb4) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000abed1) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000abed1) popup_call_audio_first_window_g

0x9f10,	// (0x000a6cf8) popup_call_audio_first_window_t1_ParamLimits

0x9f10,	// (0x000a6cf8) popup_call_audio_first_window_t1

0x9fbc,	// (0x000a6da4) popup_call_audio_first_window_t4_ParamLimits

0x9fbc,	// (0x000a6da4) popup_call_audio_first_window_t4

0xa048,	// (0x000a6e30) popup_call_audio_first_window_t5_ParamLimits

0xa048,	// (0x000a6e30) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000abed6) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000abed6) popup_call_audio_first_window_t

0xa077,	// (0x000a6e5f) bg_popup_call_pane_cp02

0xa081,	// (0x000a6e69) call_type_pane_cp023

0xa089,	// (0x000a6e71) popup_call_audio_wait_window_g1

0xa091,	// (0x000a6e79) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000abedd) popup_call_audio_wait_window_g

0xa099,	// (0x000a6e81) popup_call_audio_wait_window_t3

0xa0a7,	// (0x000a6e8f) bg_popup_call_pane_cp03_ParamLimits

0xa0a7,	// (0x000a6e8f) bg_popup_call_pane_cp03

0xa107,	// (0x000a6eef) call_thumbnail_pane_cp011_ParamLimits

0xa107,	// (0x000a6eef) call_thumbnail_pane_cp011

0xa113,	// (0x000a6efb) call_type_pane_cp034_ParamLimits

0xa113,	// (0x000a6efb) call_type_pane_cp034

0xa14f,	// (0x000a6f37) popup_call_audio_second_window_g1_ParamLimits

0xa14f,	// (0x000a6f37) popup_call_audio_second_window_g1

0xa18b,	// (0x000a6f73) popup_call_audio_second_window_g2_ParamLimits

0xa18b,	// (0x000a6f73) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000abee2) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000abee2) popup_call_audio_second_window_g

0xa1c7,	// (0x000a6faf) popup_call_audio_second_window_t1_ParamLimits

0xa1c7,	// (0x000a6faf) popup_call_audio_second_window_t1

0xa248,	// (0x000a7030) popup_call_audio_second_window_t2_ParamLimits

0xa248,	// (0x000a7030) popup_call_audio_second_window_t2

0xa750,	// (0x000a7538) popup_call_audio_second_window_t3_ParamLimits

0xa750,	// (0x000a7538) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000abee7) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000abee7) popup_call_audio_second_window_t

0xa077,	// (0x000a6e5f) bg_popup_call_pane_cp04

0xa786,	// (0x000a756e) list_conf_pane

0xa78e,	// (0x000a7576) popup_call_audio_conf_window_t1

0xa79c,	// (0x000a7584) call_thumbnail_pane_g1

0xa7a4,	// (0x000a758c) bg_pinb_pane_ParamLimits

0xa7a4,	// (0x000a758c) bg_pinb_pane

0xa7b2,	// (0x000a759a) find_pinb_pane

0xa7bb,	// (0x000a75a3) listscroll_pinb_pane_ParamLimits

0xa7bb,	// (0x000a75a3) listscroll_pinb_pane

0xa7ca,	// (0x000a75b2) pinb_bg_pane_g1

0x0ec3,	// (0x0009dcab) pinb_bg_pane_g2

0x0ecf,	// (0x0009dcb7) pinb_bg_pane_g3

0x0edb,	// (0x0009dcc3) pinb_bg_pane_g4

0x0ee7,	// (0x0009dccf) pinb_bg_pane_g5

0x0ef3,	// (0x0009dcdb) pinb_bg_pane_g6

0x0efe,	// (0x0009dce6) pinb_bg_pane_g7

0x0f09,	// (0x0009dcf1) pinb_bg_pane_g8

0x0f14,	// (0x0009dcfc) pinb_bg_pane_g9

0x0f1e,	// (0x0009dd06) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000abeee) pinb_bg_pane_g

0x0f3b,	// (0x0009dd23) grid_pinb_pane

0x0f46,	// (0x0009dd2e) list_pinb_pane

0x0f51,	// (0x0009dd39) scroll_pane_cp01_ParamLimits

0x0f51,	// (0x0009dd39) scroll_pane_cp01

0xa7d4,	// (0x000a75bc) find_pinb_pane_g1_ParamLimits

0xa7d4,	// (0x000a75bc) find_pinb_pane_g1

0xa7ec,	// (0x000a75d4) find_pinb_pane_t1

0xa7fe,	// (0x000a75e6) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000abf08) find_pinb_pane_t

0xa813,	// (0x000a75fb) input_focus_pane_cp01_ParamLimits

0xa813,	// (0x000a75fb) input_focus_pane_cp01

0x0f63,	// (0x0009dd4b) cell_pinb_pane_ParamLimits

0x0f63,	// (0x0009dd4b) cell_pinb_pane

0x0f88,	// (0x0009dd70) cell_pinb_pane_g1_ParamLimits

0x0f88,	// (0x0009dd70) cell_pinb_pane_g1

0x0f9d,	// (0x0009dd85) cell_pinb_pane_g2_ParamLimits

0x0f9d,	// (0x0009dd85) cell_pinb_pane_g2

0xa81f,	// (0x000a7607) cell_pinb_pane_g3_ParamLimits

0xa81f,	// (0x000a7607) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000abf0d) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000abf0d) cell_pinb_pane_g

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp01

0x0fa9,	// (0x0009dd91) list_pinb_item_pane_ParamLimits

0x0fa9,	// (0x0009dd91) list_pinb_item_pane

0xa077,	// (0x000a6e5f) list_highlight_pane_cp02

0x0fc7,	// (0x0009ddaf) list_pinb_item_pane_g1_ParamLimits

0x0fc7,	// (0x0009ddaf) list_pinb_item_pane_g1

0x0fd4,	// (0x0009ddbc) list_pinb_item_pane_g2_ParamLimits

0x0fd4,	// (0x0009ddbc) list_pinb_item_pane_g2

0x0fe0,	// (0x0009ddc8) list_pinb_item_pane_g3_ParamLimits

0x0fe0,	// (0x0009ddc8) list_pinb_item_pane_g3

0x0ff1,	// (0x0009ddd9) list_pinb_item_pane_g4_ParamLimits

0x0ff1,	// (0x0009ddd9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000abf14) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000abf14) list_pinb_item_pane_g

0x0ffd,	// (0x0009dde5) list_pinb_item_pane_t1_ParamLimits

0x0ffd,	// (0x0009dde5) list_pinb_item_pane_t1

0x102e,	// (0x0009de16) calc_display_pane

0x104c,	// (0x0009de34) calc_paper_pane

0x1068,	// (0x0009de50) grid_calc_pane

0xa077,	// (0x000a6e5f) bg_list_pane_cp01

0x1094,	// (0x0009de7c) clock_g1

0x109c,	// (0x0009de84) clock_g2

0x0001,

0xf135,	// (0x000abf1d) clock_g

0x10a6,	// (0x0009de8e) clock_t1_ParamLimits

0x10a6,	// (0x0009de8e) clock_t1

0x10bb,	// (0x0009dea3) clock_t2_ParamLimits

0x10bb,	// (0x0009dea3) clock_t2

0x10cd,	// (0x0009deb5) clock_t3_ParamLimits

0x10cd,	// (0x0009deb5) clock_t3

0x10df,	// (0x0009dec7) clock_t4_ParamLimits

0x10df,	// (0x0009dec7) clock_t4

0x10f1,	// (0x0009ded9) clock_t5_ParamLimits

0x10f1,	// (0x0009ded9) clock_t5

0x1106,	// (0x0009deee) clock_t6_ParamLimits

0x1106,	// (0x0009deee) clock_t6

0x1118,	// (0x0009df00) clock_t7_ParamLimits

0x1118,	// (0x0009df00) clock_t7

0x112a,	// (0x0009df12) clock_t8_ParamLimits

0x112a,	// (0x0009df12) clock_t8

0x1140,	// (0x0009df28) clock_t9_ParamLimits

0x1140,	// (0x0009df28) clock_t9

0x0008,

0xf13a,	// (0x000abf22) clock_t_ParamLimits

0xf13a,	// (0x000abf22) clock_t

0xa82b,	// (0x000a7613) popup_clock_analogue_window_cp02

0xa82b,	// (0x000a7613) popup_clock_digital_window_cp01

0xa833,	// (0x000a761b) listscroll_help_pane

0xa077,	// (0x000a6e5f) phob_pre_status_pane

0xa83d,	// (0x000a7625) grid_qdial_pane

0xa7a4,	// (0x000a758c) listscroll_mce_pane

0xa7a4,	// (0x000a758c) bg_notes_pane

0xa847,	// (0x000a762f) list_notes_pane

0x1156,	// (0x0009df3e) scroll_pane_cp06

0xa855,	// (0x000a763d) bg_calc_paper_pane

0x116f,	// (0x0009df57) list_calc_pane

0xa869,	// (0x000a7651) bg_calc_display_pane

0x1189,	// (0x0009df71) calc_display_pane_t1

0x119e,	// (0x0009df86) calc_display_pane_t2

0x11b3,	// (0x0009df9b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000abf35) calc_display_pane_t

0x11c5,	// (0x0009dfad) cell_calc_pane_ParamLimits

0x11c5,	// (0x0009dfad) cell_calc_pane

0xa875,	// (0x000a765d) bg_calc_paper_pane_g1

0xa881,	// (0x000a7669) bg_calc_paper_pane_g2

0xa88d,	// (0x000a7675) bg_calc_paper_pane_g3

0xa899,	// (0x000a7681) bg_calc_paper_pane_g4

0xa8a5,	// (0x000a768d) bg_calc_paper_pane_g5

0x11f4,	// (0x0009dfdc) bg_calc_paper_pane_g6

0x1205,	// (0x0009dfed) bg_calc_paper_pane_g7

0x1216,	// (0x0009dffe) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000abf3c) bg_calc_paper_pane_g

0x1229,	// (0x0009e011) calc_bg_paper_pane_g9

0x123c,	// (0x0009e024) list_calc_item_pane_ParamLimits

0x123c,	// (0x0009e024) list_calc_item_pane

0xa8b1,	// (0x000a7699) list_calc_item_pane_g1

0x125d,	// (0x0009e045) list_calc_item_pane_t1_ParamLimits

0x125d,	// (0x0009e045) list_calc_item_pane_t1

0x126f,	// (0x0009e057) list_calc_item_pane_t2_ParamLimits

0x126f,	// (0x0009e057) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000abf4d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000abf4d) list_calc_item_pane_t

0xa8be,	// (0x000a76a6) cell_calc_pane_g1

0xa8c8,	// (0x000a76b0) grid_highlight_pane_cp02

0xa8ea,	// (0x000a76d2) bg_calc_display_pane_g1

0x129f,	// (0x0009e087) bg_calc_display_pane_g2

0xa8f3,	// (0x000a76db) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000abf57) bg_calc_display_pane_g

0x12a9,	// (0x0009e091) cell_qdial_pane_ParamLimits

0x12a9,	// (0x0009e091) cell_qdial_pane

0x12bf,	// (0x0009e0a7) cell_qdial_pane_g1_ParamLimits

0x12bf,	// (0x0009e0a7) cell_qdial_pane_g1

0x12cc,	// (0x0009e0b4) cell_qdial_pane_g2_ParamLimits

0x12cc,	// (0x0009e0b4) cell_qdial_pane_g2

0xa8fc,	// (0x000a76e4) cell_qdial_pane_g3_ParamLimits

0xa8fc,	// (0x000a76e4) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000abf5e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000abf5e) cell_qdial_pane_g

0x12ea,	// (0x0009e0d2) cell_qdial_pane_t1_ParamLimits

0x12ea,	// (0x0009e0d2) cell_qdial_pane_t1

0x1302,	// (0x0009e0ea) cell_qdial_pane_t2_ParamLimits

0x1302,	// (0x0009e0ea) cell_qdial_pane_t2

0x1315,	// (0x0009e0fd) cell_qdial_pane_t3_ParamLimits

0x1315,	// (0x0009e0fd) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000abf67) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000abf67) cell_qdial_pane_t

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp04

0xa908,	// (0x000a76f0) thumbnail_qdial_pane_ParamLimits

0xa908,	// (0x000a76f0) thumbnail_qdial_pane

0xa964,	// (0x000a774c) list_help_pane

0xa96d,	// (0x000a7755) scroll_pane_cp02

0x1328,	// (0x0009e110) help_list_pane_t1_ParamLimits

0x1328,	// (0x0009e110) help_list_pane_t1

0x134f,	// (0x0009e137) bg_notes_pane_g2

0x1357,	// (0x0009e13f) bg_notes_pane_g3

0x135f,	// (0x0009e147) notes_bg_pane_g1

0x1367,	// (0x0009e14f) notes_bg_pane_g4

0x136f,	// (0x0009e157) notes_bg_pane_g5

0x1377,	// (0x0009e15f) notes_bg_pane_g6

0x137f,	// (0x0009e167) notes_bg_pane_g7

0x1387,	// (0x0009e16f) notes_bg_pane_g8

0x138f,	// (0x0009e177) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000abf85) notes_bg_pane_g

0x1397,	// (0x0009e17f) list_notes_text_pane_ParamLimits

0x1397,	// (0x0009e17f) list_notes_text_pane

0xa976,	// (0x000a775e) list_notes_text_pane_g1

0x13bf,	// (0x0009e1a7) list_notes_text_pane_t1

0x13cd,	// (0x0009e1b5) listscroll_cale_week_pane

0x1403,	// (0x0009e1eb) bg_cale_heading_pane

0xa990,	// (0x000a7778) bg_cale_pane_cp01

0x142c,	// (0x0009e214) cale_week_corner_pane

0x144b,	// (0x0009e233) cale_week_day_heading_pane

0x1479,	// (0x0009e261) cale_week_scroll_pane_g1

0x149d,	// (0x0009e285) cale_week_scroll_pane_g2

0x14b5,	// (0x0009e29d) cale_week_scroll_pane_g3

0x14cd,	// (0x0009e2b5) cale_week_scroll_pane_g4

0x14e5,	// (0x0009e2cd) cale_week_scroll_pane_g5

0x14fd,	// (0x0009e2e5) cale_week_scroll_pane_g6

0x151d,	// (0x0009e305) cale_week_scroll_pane_g7

0x153d,	// (0x0009e325) cale_week_scroll_pane_g8

0x155d,	// (0x0009e345) cale_week_scroll_pane_g9

0x157a,	// (0x0009e362) cale_week_scroll_pane_g10

0x1597,	// (0x0009e37f) cale_week_scroll_pane_g11

0x15b4,	// (0x0009e39c) cale_week_scroll_pane_g12

0x15d1,	// (0x0009e3b9) cale_week_scroll_pane_g13

0x15f6,	// (0x0009e3de) cale_week_scroll_pane_g14

0x161f,	// (0x0009e407) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000abf94) cale_week_scroll_pane_g

0x1668,	// (0x0009e450) cale_week_time_pane

0x1688,	// (0x0009e470) grid_cale_week_pane

0xa9c0,	// (0x000a77a8) scroll_pane_cp08

0x16bb,	// (0x0009e4a3) cell_cale_week_pane_ParamLimits

0x16bb,	// (0x0009e4a3) cell_cale_week_pane

0x174b,	// (0x0009e533) cale_week_day_heading_pane_t1

0x1793,	// (0x0009e57b) cale_week_day_heading_pane_t2

0x17e0,	// (0x0009e5c8) cale_week_day_heading_pane_t3

0x182d,	// (0x0009e615) cale_week_day_heading_pane_t4

0x187a,	// (0x0009e662) cale_week_day_heading_pane_t5

0x18c7,	// (0x0009e6af) cale_week_day_heading_pane_t6

0x1914,	// (0x0009e6fc) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000abfb5) cale_week_day_heading_pane_t

0xa9e2,	// (0x000a77ca) bg_cale_side_pane

0x195c,	// (0x0009e744) cale_week_time_pane_t1

0x19a0,	// (0x0009e788) cale_week_time_pane_t2

0x19e4,	// (0x0009e7cc) cale_week_time_pane_t3

0x1a28,	// (0x0009e810) cale_week_time_pane_t4

0x1a6c,	// (0x0009e854) cale_week_time_pane_t5

0x1ab0,	// (0x0009e898) cale_week_time_pane_t6

0x1af4,	// (0x0009e8dc) cale_week_time_pane_t7

0x1b40,	// (0x0009e928) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000abfc4) cale_week_time_pane_t

0x1b8e,	// (0x0009e976) cell_cale_week_pane_g2

0x1bb2,	// (0x0009e99a) cell_cale_week_pane_g3_ParamLimits

0x1bb2,	// (0x0009e99a) cell_cale_week_pane_g3

0xa9f0,	// (0x000a77d8) grid_highlight_pane_cp07

0xa9f8,	// (0x000a77e0) listscroll_gms_pane

0xaa02,	// (0x000a77ea) grid_gms_pane

0xaa0b,	// (0x000a77f3) listscroll_gms_pane_g1

0xaa13,	// (0x000a77fb) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000abfd5) listscroll_gms_pane_g

0x1bca,	// (0x0009e9b2) scroll_pane_cp010

0x1bd5,	// (0x0009e9bd) cell_gms_pane_ParamLimits

0x1bd5,	// (0x0009e9bd) cell_gms_pane

0x1be8,	// (0x0009e9d0) cell_gms_pane_g1

0xaa1b,	// (0x000a7803) cell_gms_pane_g2

0xaa23,	// (0x000a780b) cell_gms_pane_g3

0xaa2c,	// (0x000a7814) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000abfda) cell_gms_pane_g

0xaa35,	// (0x000a781d) grid_highlight_pane_cp09

0x4319,	// (0x000a1101) phob_pre_status_pane_g1

0x4321,	// (0x000a1109) phob_pre_status_pane_g2

0x4329,	// (0x000a1111) phob_pre_status_pane_g3

0x4331,	// (0x000a1119) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000ac3c9) phob_pre_status_pane_g

0x4341,	// (0x000a1129) phob_pre_status_pane_t1

0x4351,	// (0x000a1139) phob_pre_status_pane_t2

0x4361,	// (0x000a1149) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000ac3d4) phob_pre_status_pane_t

0xa077,	// (0x000a6e5f) bg_list_pane_cp05

0x1bf8,	// (0x0009e9e0) grid_vorec_pane

0x1c04,	// (0x0009e9ec) vorec_t1

0x1c12,	// (0x0009e9fa) vorec_t2

0x1c20,	// (0x0009ea08) vorec_t3

0x1c2e,	// (0x0009ea16) vorec_t4

0x1c3c,	// (0x0009ea24) vorec_t5

0x1c4a,	// (0x0009ea32) vorec_t6

0x0006,

0xf1fb,	// (0x000abfe3) vorec_t

0x1c66,	// (0x0009ea4e) wait_bar_pane_cp01

0x1c6e,	// (0x0009ea56) cell_vorec_pane_ParamLimits

0x1c6e,	// (0x0009ea56) cell_vorec_pane

0x1c83,	// (0x0009ea6b) cell_vorec_pane_g1

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp05

0x1c9b,	// (0x0009ea83) cams_zoom_pane

0x1ca7,	// (0x0009ea8f) image_vga_pane

0x1cb6,	// (0x0009ea9e) main_camera_pane_g1

0x1cc4,	// (0x0009eaac) main_camera_pane_g2

0x1cd0,	// (0x0009eab8) main_camera_pane_g3

0x1cde,	// (0x0009eac6) main_camera_pane_g4

0x1cec,	// (0x0009ead4) main_camera_pane_g5

0x1cfa,	// (0x0009eae2) main_camera_pane_g6

0x1d08,	// (0x0009eaf0) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000abff2) main_camera_pane_g

0x1d16,	// (0x0009eafe) main_camera_pane_t1

0x1d28,	// (0x0009eb10) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000ac003) main_camera_pane_t

0x1d4b,	// (0x0009eb33) cams_zoom_pane_cp_ParamLimits

0x1d4b,	// (0x0009eb33) cams_zoom_pane_cp

0x1d6f,	// (0x0009eb57) image_cif_pane_ParamLimits

0x1d6f,	// (0x0009eb57) image_cif_pane

0x1d8d,	// (0x0009eb75) image_subqcif_pane

0x1d97,	// (0x0009eb7f) main_video_pane_g1_ParamLimits

0x1d97,	// (0x0009eb7f) main_video_pane_g1

0x1db7,	// (0x0009eb9f) main_video_pane_g2_ParamLimits

0x1db7,	// (0x0009eb9f) main_video_pane_g2

0x1de7,	// (0x0009ebcf) main_video_pane_g3_ParamLimits

0x1de7,	// (0x0009ebcf) main_video_pane_g3

0x1e10,	// (0x0009ebf8) main_video_pane_g4_ParamLimits

0x1e10,	// (0x0009ebf8) main_video_pane_g4

0x1e39,	// (0x0009ec21) main_video_pane_g5_ParamLimits

0x1e39,	// (0x0009ec21) main_video_pane_g5

0xaa49,	// (0x000a7831) main_video_pane_g6_ParamLimits

0xaa49,	// (0x000a7831) main_video_pane_g6

0x0006,

0xf220,	// (0x000ac008) main_video_pane_g_ParamLimits

0xf220,	// (0x000ac008) main_video_pane_g

0x1e5b,	// (0x0009ec43) main_video_pane_t1_ParamLimits

0x1e5b,	// (0x0009ec43) main_video_pane_t1

0xaa63,	// (0x000a784b) cams_zoom_pane_g1

0xaa6c,	// (0x000a7854) cams_zoom_pane_g2

0xaa75,	// (0x000a785d) cams_zoom_pane_g3

0xaa7e,	// (0x000a7866) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000ac017) cams_zoom_pane_g

0x1ea5,	// (0x0009ec8d) grid_cams_pane

0x1eb3,	// (0x0009ec9b) linegrid_cams_pane

0x1ebf,	// (0x0009eca7) cell_cams_pane_ParamLimits

0x1ebf,	// (0x0009eca7) cell_cams_pane

0xaa87,	// (0x000a786f) cams_burst_image_pane

0xaa8f,	// (0x000a7877) cell_cams_pane_g1

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp03

0xa8be,	// (0x000a76a6) mp_bg_pane_g1

0xa077,	// (0x000a6e5f) bg_list_pane_cp03

0xc739,	// (0x000a9521) bg_mp_pane

0xc741,	// (0x000a9529) grid_mp_pane

0xc749,	// (0x000a9531) media_player_g1

0xc753,	// (0x000a953b) media_player_t1

0xc761,	// (0x000a9549) media_player_t2

0xc76f,	// (0x000a9557) media_player_t3

0xc77d,	// (0x000a9565) media_player_t4

0xc78b,	// (0x000a9573) media_player_t5

0xc799,	// (0x000a9581) media_player_t6

0xc7a7,	// (0x000a958f) media_player_t7

0x0006,

0xf5cb,	// (0x000ac3b3) media_player_t

0xc7b5,	// (0x000a959d) wait_bar_pane_cp02

0xf5b0,	// (0x000ac398) main_usb_pane_t

0x4310,	// (0x000a10f8) cell_mp_pane

0xa8be,	// (0x000a76a6) cell_mp_pane_g1

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp06

0xaa97,	// (0x000a787f) grid_skin_colour_pane

0xaa9f,	// (0x000a7887) list_highlight_pane_cp03

0x1fe4,	// (0x0009edcc) skin_g1

0xaaa7,	// (0x000a788f) skin_t1

0xaab6,	// (0x000a789e) skin_t2

0x0001,

0xf264,	// (0x000ac04c) skin_t

0x1fee,	// (0x0009edd6) cell_skin_colour_pane_ParamLimits

0x1fee,	// (0x0009edd6) cell_skin_colour_pane

0xaac4,	// (0x000a78ac) cell_skin_colour_pane_g1

0x206e,	// (0x0009ee56) call_video_g1_ParamLimits

0x206e,	// (0x0009ee56) call_video_g1

0x207e,	// (0x0009ee66) call_video_g2_ParamLimits

0x207e,	// (0x0009ee66) call_video_g2

0x0001,

0xf269,	// (0x000ac051) call_video_g_ParamLimits

0xf269,	// (0x000ac051) call_video_g

0x20ce,	// (0x0009eeb6) call_video_uplink_pane_cp1_ParamLimits

0x20ce,	// (0x0009eeb6) call_video_uplink_pane_cp1

0xaad6,	// (0x000a78be) call_video_uplink_pane_cp2

0x219c,	// (0x0009ef84) video_down_crop_pane_ParamLimits

0x219c,	// (0x0009ef84) video_down_crop_pane

0x228e,	// (0x0009f076) video_down_pane_ParamLimits

0x228e,	// (0x0009f076) video_down_pane

0xaade,	// (0x000a78c6) video_down_subqcif_pane_ParamLimits

0xaade,	// (0x000a78c6) video_down_subqcif_pane

0xaaf8,	// (0x000a78e0) video_down_subqcif_pane_cp_ParamLimits

0xaaf8,	// (0x000a78e0) video_down_subqcif_pane_cp

0xab20,	// (0x000a7908) im_reading_pane_ParamLimits

0xab20,	// (0x000a7908) im_reading_pane

0x23ab,	// (0x0009f193) im_writing_pane_ParamLimits

0x23ab,	// (0x0009f193) im_writing_pane

0x23c9,	// (0x0009f1b1) im_reading_pane_t1

0xab3a,	// (0x000a7922) list_im_pane

0xab4b,	// (0x000a7933) scroll_pane_cp07

0x240b,	// (0x0009f1f3) im_writing_pane_t1_ParamLimits

0x240b,	// (0x0009f1f3) im_writing_pane_t1

0xab64,	// (0x000a794c) im_writing_pane_t2_ParamLimits

0xab64,	// (0x000a794c) im_writing_pane_t2

0x0001,

0xf273,	// (0x000ac05b) im_writing_pane_t_ParamLimits

0xf273,	// (0x000ac05b) im_writing_pane_t

0xa077,	// (0x000a6e5f) input_focus_pane_cp04

0xa077,	// (0x000a6e5f) input_focus_pane_cp05

0x241d,	// (0x0009f205) list_im_single_pane_ParamLimits

0x241d,	// (0x0009f205) list_im_single_pane

0x2436,	// (0x0009f21e) list_single_im_pane_t1

0x42d4,	// (0x000a10bc) blid_accuracy_pane

0x42dc,	// (0x000a10c4) blid_compass_pane

0x42e6,	// (0x000a10ce) main_location_t1

0x42f4,	// (0x000a10dc) main_location_t2

0x4302,	// (0x000a10ea) main_location_t3

0x0002,

0xf5da,	// (0x000ac3c2) main_location_t

0xa077,	// (0x000a6e5f) aid_levels_location

0xa8be,	// (0x000a76a6) blid_accuracy_pane_g1

0xa8be,	// (0x000a76a6) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000ac0bd) blid_accuracy_pane_g

0xabac,	// (0x000a7994) wml_content_pane

0xabea,	// (0x000a79d2) wml_button_pane_ParamLimits

0xabea,	// (0x000a79d2) wml_button_pane

0x2445,	// (0x0009f22d) wml_list_single_large_pane_ParamLimits

0x2445,	// (0x0009f22d) wml_list_single_large_pane

0x2467,	// (0x0009f24f) wml_list_single_medium_pane_ParamLimits

0x2467,	// (0x0009f24f) wml_list_single_medium_pane

0x248a,	// (0x0009f272) wml_list_single_small_pane_ParamLimits

0x248a,	// (0x0009f272) wml_list_single_small_pane

0xabfe,	// (0x000a79e6) wml_selection_box_pane_ParamLimits

0xabfe,	// (0x000a79e6) wml_selection_box_pane

0xac11,	// (0x000a79f9) wml_list_single_pane_t1

0xac20,	// (0x000a7a08) wml_list_single_medium_pane_t1

0xac2f,	// (0x000a7a17) wml_list_single_large_pane_t1

0xac3e,	// (0x000a7a26) input_focus_pane_cp02_ParamLimits

0xac3e,	// (0x000a7a26) input_focus_pane_cp02

0xac5d,	// (0x000a7a45) wml_selection_box_pane_g1

0xac66,	// (0x000a7a4e) wml_selection_box_pane_t1_ParamLimits

0xac66,	// (0x000a7a4e) wml_selection_box_pane_t1

0xa7a4,	// (0x000a758c) bg_wml_button_pane_ParamLimits

0xa7a4,	// (0x000a758c) bg_wml_button_pane

0xac7e,	// (0x000a7a66) wml_button_pane_g1

0xac86,	// (0x000a7a6e) wml_button_pane_t1

0xac7e,	// (0x000a7a66) wml_button_bg_pane_g1

0xac96,	// (0x000a7a7e) wml_button_bg_pane_g2

0xac9e,	// (0x000a7a86) wml_button_bg_pane_g3

0xaca6,	// (0x000a7a8e) wml_button_bg_pane_g4

0xacae,	// (0x000a7a96) wml_button_bg_pane_g5

0xacb6,	// (0x000a7a9e) wml_button_bg_pane_g6

0xacbe,	// (0x000a7aa6) wml_button_bg_pane_g7

0xacc6,	// (0x000a7aae) wml_button_bg_pane_g8

0xacce,	// (0x000a7ab6) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000ac060) wml_button_bg_pane_g

0x24b2,	// (0x0009f29a) bg_list_pane_cp02

0xacd6,	// (0x000a7abe) mce_header_pane_ParamLimits

0xacd6,	// (0x000a7abe) mce_header_pane

0xacec,	// (0x000a7ad4) mce_icon_pane

0xacec,	// (0x000a7ad4) mce_image_pane

0xacf5,	// (0x000a7add) mce_text_pane_ParamLimits

0xacf5,	// (0x000a7add) mce_text_pane

0x24bc,	// (0x0009f2a4) scroll_pane_cp03

0xabe2,	// (0x000a79ca) scroll_pane_cp04

0xad08,	// (0x000a7af0) scroll_pane_cp05_ParamLimits

0xad08,	// (0x000a7af0) scroll_pane_cp05

0x24c6,	// (0x0009f2ae) mce_header_field_pane_ParamLimits

0x24c6,	// (0x0009f2ae) mce_header_field_pane

0x24e8,	// (0x0009f2d0) mce_header_field_pane_2_ParamLimits

0x24e8,	// (0x0009f2d0) mce_header_field_pane_2

0x24fe,	// (0x0009f2e6) mce_header_field_pane_3

0x2506,	// (0x0009f2ee) list_single_mce_message_pane_ParamLimits

0x2506,	// (0x0009f2ee) list_single_mce_message_pane

0x2525,	// (0x0009f30d) list_single_mce_smart_pane_ParamLimits

0x2525,	// (0x0009f30d) list_single_mce_smart_pane

0xad14,	// (0x000a7afc) input_focus_pane_cp03

0xad1d,	// (0x000a7b05) list_header_data_pane

0x254f,	// (0x0009f337) mce_header_field_pane_t1

0x255f,	// (0x0009f347) list_single_mce_header_pane_ParamLimits

0x255f,	// (0x0009f347) list_single_mce_header_pane

0xad25,	// (0x000a7b0d) list_single_mce_header_pane_t1

0xad34,	// (0x000a7b1c) list_single_mce_message_pane_g1

0xad3c,	// (0x000a7b24) list_single_mce_message_pane_t1

0x25a3,	// (0x0009f38b) bg_cale_heading_pane_cp01_ParamLimits

0x25a3,	// (0x0009f38b) bg_cale_heading_pane_cp01

0xad4a,	// (0x000a7b32) bg_cale_pane_cp02_ParamLimits

0xad4a,	// (0x000a7b32) bg_cale_pane_cp02

0x25ea,	// (0x0009f3d2) cale_month_corner_pane

0x2609,	// (0x0009f3f1) cale_month_day_heading_pane_ParamLimits

0x2609,	// (0x0009f3f1) cale_month_day_heading_pane

0x2660,	// (0x0009f448) cale_month_pane_g1_ParamLimits

0x2660,	// (0x0009f448) cale_month_pane_g1

0x269c,	// (0x0009f484) cale_month_pane_g2_ParamLimits

0x269c,	// (0x0009f484) cale_month_pane_g2

0x26d4,	// (0x0009f4bc) cale_month_pane_g3_ParamLimits

0x26d4,	// (0x0009f4bc) cale_month_pane_g3

0x2728,	// (0x0009f510) cale_month_pane_g4_ParamLimits

0x2728,	// (0x0009f510) cale_month_pane_g4

0x277c,	// (0x0009f564) cale_month_pane_g5_ParamLimits

0x277c,	// (0x0009f564) cale_month_pane_g5

0x27d0,	// (0x0009f5b8) cale_month_pane_g6_ParamLimits

0x27d0,	// (0x0009f5b8) cale_month_pane_g6

0x2834,	// (0x0009f61c) cale_month_pane_g7_ParamLimits

0x2834,	// (0x0009f61c) cale_month_pane_g7

0x2898,	// (0x0009f680) cale_month_pane_g8_ParamLimits

0x2898,	// (0x0009f680) cale_month_pane_g8

0x28fc,	// (0x0009f6e4) cale_month_pane_g9_ParamLimits

0x28fc,	// (0x0009f6e4) cale_month_pane_g9

0x2954,	// (0x0009f73c) cale_month_pane_g10_ParamLimits

0x2954,	// (0x0009f73c) cale_month_pane_g10

0x29a2,	// (0x0009f78a) cale_month_pane_g11_ParamLimits

0x29a2,	// (0x0009f78a) cale_month_pane_g11

0x29ee,	// (0x0009f7d6) cale_month_pane_g12_ParamLimits

0x29ee,	// (0x0009f7d6) cale_month_pane_g12

0x2a3e,	// (0x0009f826) cale_month_pane_g13_ParamLimits

0x2a3e,	// (0x0009f826) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000ac073) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000ac073) cale_month_pane_g

0x2a8e,	// (0x0009f876) cale_month_week_pane

0x2aae,	// (0x0009f896) grid_cale_month_pane_ParamLimits

0x2aae,	// (0x0009f896) grid_cale_month_pane

0x2afc,	// (0x0009f8e4) cale_month_day_heading_pane_t1

0x2b7e,	// (0x0009f966) cale_month_day_heading_pane_t2

0x2c0b,	// (0x0009f9f3) cale_month_day_heading_pane_t3

0x2c98,	// (0x0009fa80) cale_month_day_heading_pane_t4

0x2d25,	// (0x0009fb0d) cale_month_day_heading_pane_t5

0x2dba,	// (0x0009fba2) cale_month_day_heading_pane_t6

0x2e57,	// (0x0009fc3f) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000ac08e) cale_month_day_heading_pane_t

0xa9e2,	// (0x000a77ca) bg_cale_side_pane_cp01

0x2ef4,	// (0x0009fcdc) cale_month_week_pane_t1

0x2f0d,	// (0x0009fcf5) cale_month_week_pane_t2

0x2f26,	// (0x0009fd0e) cale_month_week_pane_t3

0x2f3f,	// (0x0009fd27) cale_month_week_pane_t4

0x2f58,	// (0x0009fd40) cale_month_week_pane_t5

0x2f73,	// (0x0009fd5b) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000ac09d) cale_month_week_pane_t

0x2f94,	// (0x0009fd7c) cell_cale_month_pane_ParamLimits

0x2f94,	// (0x0009fd7c) cell_cale_month_pane

0x30e0,	// (0x0009fec8) cell_cale_month_pane_g1

0x30ec,	// (0x0009fed4) cell_cale_month_pane_t1_ParamLimits

0x30ec,	// (0x0009fed4) cell_cale_month_pane_t1

0xa9f0,	// (0x000a77d8) grid_highlight_pane_cp08

0xa8be,	// (0x000a76a6) main_smil_g1

0x310c,	// (0x0009fef4) smil_status_pane

0xad89,	// (0x000a7b71) smil_text_pane

0xc657,	// (0x000a943f) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x000a9447) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac356) bg_popup_call3_rect_pane_g

0xc8ed,	// (0x000a96d5) smil_status_volume_pane_g1

0x311f,	// (0x0009ff07) smil_status_pane_t1

0x46c8,	// (0x000a14b0) volume_smil_pane

0xad93,	// (0x000a7b7b) list_smil_text_pane

0x3136,	// (0x0009ff1e) scroll_pane_cp011

0x3141,	// (0x0009ff29) smil_text_list_pane_t1_ParamLimits

0x3141,	// (0x0009ff29) smil_text_list_pane_t1

0x3193,	// (0x0009ff7b) aid_volume_smil_ParamLimits

0x3193,	// (0x0009ff7b) aid_volume_smil

0xa8be,	// (0x000a76a6) smil_volume_pane_g1

0xa8be,	// (0x000a76a6) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000ac0bd) smil_volume_pane_g

0x13cd,	// (0x0009e1b5) listscroll_cale_day_pane

0xad9d,	// (0x000a7b85) bg_cale_pane

0xadb5,	// (0x000a7b9d) list_cale_pane

0xadd8,	// (0x000a7bc0) scroll_pane_cp09

0xade9,	// (0x000a7bd1) cale_bg_pane_g1

0xadf1,	// (0x000a7bd9) cale_bg_pane_g2

0xadf9,	// (0x000a7be1) cale_bg_pane_g3

0xae01,	// (0x000a7be9) cale_bg_pane_g4

0xae09,	// (0x000a7bf1) cale_bg_pane_g5

0xae11,	// (0x000a7bf9) cale_bg_pane_g6

0xae19,	// (0x000a7c01) cale_bg_pane_g7

0xae21,	// (0x000a7c09) cale_bg_pane_g8

0xae29,	// (0x000a7c11) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000ac0c2) cale_bg_pane_g

0x31b5,	// (0x0009ff9d) list_cale_time_pane_ParamLimits

0x31b5,	// (0x0009ff9d) list_cale_time_pane

0xae39,	// (0x000a7c21) list_cale_time_pane_g1_ParamLimits

0xae39,	// (0x000a7c21) list_cale_time_pane_g1

0xae45,	// (0x000a7c2d) list_cale_time_pane_g2_ParamLimits

0xae45,	// (0x000a7c2d) list_cale_time_pane_g2

0x31c9,	// (0x0009ffb1) list_cale_time_pane_g3_ParamLimits

0x31c9,	// (0x0009ffb1) list_cale_time_pane_g3

0x31d7,	// (0x0009ffbf) list_cale_time_pane_g4_ParamLimits

0x31d7,	// (0x0009ffbf) list_cale_time_pane_g4

0x31e5,	// (0x0009ffcd) list_cale_time_pane_g5_ParamLimits

0x31e5,	// (0x0009ffcd) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000ac0d5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000ac0d5) list_cale_time_pane_g

0xae5f,	// (0x000a7c47) list_cale_time_pane_t1_ParamLimits

0xae5f,	// (0x000a7c47) list_cale_time_pane_t1

0xae87,	// (0x000a7c6f) list_cale_time_pane_t2_ParamLimits

0xae87,	// (0x000a7c6f) list_cale_time_pane_t2

0x35ae,	// (0x000a0396) aid_blid_cardinal_pane

0x35f0,	// (0x000a03d8) compass_pane_t4

0xaeaf,	// (0x000a7c97) list_cale_time_pane_t4_ParamLimits

0xaeaf,	// (0x000a7c97) list_cale_time_pane_t4

0x35fe,	// (0x000a03e6) compass_pane_t5

0x360e,	// (0x000a03f6) compass_pane_t6

0x361c,	// (0x000a0404) compass_pane_t7

0xb35d,	// (0x000a8145) navi_pane_cc_t1

0xb4b2,	// (0x000a829a) aid_phob_thumbnail_center_pane

0x3dd0,	// (0x000a0bb8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000ac0e2) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000ac0e2) list_cale_time_pane_t

0x9cce,	// (0x000a6ab6) bg_popup_window_pane_cp02_ParamLimits

0x9cce,	// (0x000a6ab6) bg_popup_window_pane_cp02

0xaed7,	// (0x000a7cbf) heading_pane_cp01_ParamLimits

0xaed7,	// (0x000a7cbf) heading_pane_cp01

0xaee3,	// (0x000a7ccb) loc_req_pane_ParamLimits

0xaee3,	// (0x000a7ccb) loc_req_pane

0xaef3,	// (0x000a7cdb) loc_type_pane_ParamLimits

0xaef3,	// (0x000a7cdb) loc_type_pane

0xaf05,	// (0x000a7ced) loc_type_pane_t1_ParamLimits

0xaf05,	// (0x000a7ced) loc_type_pane_t1

0xaf17,	// (0x000a7cff) loc_type_pane_t2_ParamLimits

0xaf17,	// (0x000a7cff) loc_type_pane_t2

0xaf29,	// (0x000a7d11) loc_type_pane_t3_ParamLimits

0xaf29,	// (0x000a7d11) loc_type_pane_t3

0x0002,

0xf301,	// (0x000ac0e9) loc_type_pane_t_ParamLimits

0xf301,	// (0x000ac0e9) loc_type_pane_t

0xaf3b,	// (0x000a7d23) list_loc_req_pane

0xaf45,	// (0x000a7d2d) scroll_pane_cp012

0x31f3,	// (0x0009ffdb) list_single_loc_request_popup_menu_pane_ParamLimits

0x31f3,	// (0x0009ffdb) list_single_loc_request_popup_menu_pane

0xaf50,	// (0x000a7d38) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf50,	// (0x000a7d38) list_single_loc_request_popup_menu_pane_g1

0xaf5c,	// (0x000a7d44) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf5c,	// (0x000a7d44) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000ac0f0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000ac0f0) list_single_loc_request_popup_menu_pane_g

0xaf68,	// (0x000a7d50) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf68,	// (0x000a7d50) list_single_loc_request_popup_menu_pane_t1

0x3205,	// (0x0009ffed) bg_popup_window_pane_cp03_ParamLimits

0x3205,	// (0x0009ffed) bg_popup_window_pane_cp03

0x3213,	// (0x0009fffb) heading_loc_req_pane_ParamLimits

0x3213,	// (0x0009fffb) heading_loc_req_pane

0x321f,	// (0x000a0007) popup_dyc_status_message_window_g1_ParamLimits

0x321f,	// (0x000a0007) popup_dyc_status_message_window_g1

0x322b,	// (0x000a0013) popup_dyc_status_message_window_t1_ParamLimits

0x322b,	// (0x000a0013) popup_dyc_status_message_window_t1

0x323d,	// (0x000a0025) popup_dyc_status_message_window_t2_ParamLimits

0x323d,	// (0x000a0025) popup_dyc_status_message_window_t2

0x324f,	// (0x000a0037) popup_dyc_status_message_window_t3_ParamLimits

0x324f,	// (0x000a0037) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000ac0f5) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000ac0f5) popup_dyc_status_message_window_t

0xa077,	// (0x000a6e5f) bg_heading_pane_cp01

0xaf7e,	// (0x000a7d66) heading_loc_req_pane_g1

0xaf86,	// (0x000a7d6e) heading_loc_req_pane_g2

0xaf8e,	// (0x000a7d76) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000ac0fc) heading_loc_req_pane_g

0xaf96,	// (0x000a7d7e) heading_loc_req_pane_t1

0xafa6,	// (0x000a7d8e) bg_popup_sub_pane_cp01_ParamLimits

0xafa6,	// (0x000a7d8e) bg_popup_sub_pane_cp01

0xafb4,	// (0x000a7d9c) popup_cale_events_window_g1_ParamLimits

0xafb4,	// (0x000a7d9c) popup_cale_events_window_g1

0xafd4,	// (0x000a7dbc) popup_cale_events_window_g2_ParamLimits

0xafd4,	// (0x000a7dbc) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000ac130) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000ac130) popup_cale_events_window_g

0xaff4,	// (0x000a7ddc) popup_cale_events_window_t1_ParamLimits

0xaff4,	// (0x000a7ddc) popup_cale_events_window_t1

0xb006,	// (0x000a7dee) popup_cale_events_window_t2_ParamLimits

0xb006,	// (0x000a7dee) popup_cale_events_window_t2

0xb0d6,	// (0x000a7ebe) popup_cale_events_window_t3_ParamLimits

0xb0d6,	// (0x000a7ebe) popup_cale_events_window_t3

0xb110,	// (0x000a7ef8) popup_cale_events_window_t4_ParamLimits

0xb110,	// (0x000a7ef8) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000ac135) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000ac135) popup_cale_events_window_t

0x334a,	// (0x000a0132) call_type_pane

0xb146,	// (0x000a7f2e) popup_call_status_window_g1

0x3356,	// (0x000a013e) popup_call_status_window_g2

0x3362,	// (0x000a014a) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000ac13e) popup_call_status_window_g

0xb154,	// (0x000a7f3c) call_type_pane_g1

0xb15d,	// (0x000a7f45) call_type_pane_g2

0x0001,

0xf35d,	// (0x000ac145) call_type_pane_g

0xa077,	// (0x000a6e5f) bg_popup_sub_pane_cp02

0xb166,	// (0x000a7f4e) listscroll_popup_wml_pane

0xb16e,	// (0x000a7f56) list_wml_pane

0xb178,	// (0x000a7f60) scroll_pane_cp013

0xb183,	// (0x000a7f6b) list_single_graphic_popup_wml_pane_ParamLimits

0xb183,	// (0x000a7f6b) list_single_graphic_popup_wml_pane

0xa8be,	// (0x000a76a6) list_single_graphic_popup_wml_pane_g1

0xb197,	// (0x000a7f7f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000ac14a) list_single_graphic_popup_wml_pane_g

0xb19f,	// (0x000a7f87) list_single_graphic_popup_wml_pane_t1

0xb1b5,	// (0x000a7f9d) aid_call_pane

0xa79c,	// (0x000a7584) popup_clock_analogue_window_g1

0xa79c,	// (0x000a7584) popup_clock_analogue_window_g2

0x336e,	// (0x000a0156) popup_clock_analogue_window_g3

0x336e,	// (0x000a0156) popup_clock_analogue_window_g4

0xa8be,	// (0x000a76a6) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000ac14f) popup_clock_analogue_window_g

0x3376,	// (0x000a015e) popup_clock_analogue_window_t1

0x3384,	// (0x000a016c) clock_digital_number_pane_ParamLimits

0x3384,	// (0x000a016c) clock_digital_number_pane

0x3390,	// (0x000a0178) clock_digital_number_pane_cp02_ParamLimits

0x3390,	// (0x000a0178) clock_digital_number_pane_cp02

0x339c,	// (0x000a0184) clock_digital_number_pane_cp03_ParamLimits

0x339c,	// (0x000a0184) clock_digital_number_pane_cp03

0x33a8,	// (0x000a0190) clock_digital_number_pane_cp04_ParamLimits

0x33a8,	// (0x000a0190) clock_digital_number_pane_cp04

0x33b4,	// (0x000a019c) clock_digital_separator_pane_ParamLimits

0x33b4,	// (0x000a019c) clock_digital_separator_pane

0x33c0,	// (0x000a01a8) popup_clock_digital_window_t1

0xa8be,	// (0x000a76a6) clock_digital_number_pane_g1

0xa8be,	// (0x000a76a6) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000ac0bd) clock_digital_number_pane_g

0xa8be,	// (0x000a76a6) clock_digital_separator_pane_g1

0xa8be,	// (0x000a76a6) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000ac0bd) clock_digital_separator_pane_g

0xa077,	// (0x000a6e5f) bg_popup_window_pane_cp04

0xb1bd,	// (0x000a7fa5) heading_pane_cp03

0xb1c5,	// (0x000a7fad) listscroll_popup_gms_pane

0xb1cd,	// (0x000a7fb5) grid_large_graphic_popup_pane

0xb1d7,	// (0x000a7fbf) listscroll_popup_gms_pane_g1

0xb1df,	// (0x000a7fc7) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000ac15a) listscroll_popup_gms_pane_g

0xabe2,	// (0x000a79ca) scroll_pane_cp014

0x33dd,	// (0x000a01c5) cell_large_graphic_popup_pane_ParamLimits

0x33dd,	// (0x000a01c5) cell_large_graphic_popup_pane

0x33f7,	// (0x000a01df) cell_large_graphic_popup_pane_g1_ParamLimits

0x33f7,	// (0x000a01df) cell_large_graphic_popup_pane_g1

0xb1e7,	// (0x000a7fcf) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1e7,	// (0x000a7fcf) cell_large_graphic_popup_pane_g2

0xb1f3,	// (0x000a7fdb) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1f3,	// (0x000a7fdb) cell_large_graphic_popup_pane_g3

0xb200,	// (0x000a7fe8) cell_large_graphic_popup_pane_g4_ParamLimits

0xb200,	// (0x000a7fe8) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000ac15f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000ac15f) cell_large_graphic_popup_pane_g

0xb210,	// (0x000a7ff8) grid_highlight_pane_cp010

0xa8be,	// (0x000a76a6) bg_popup_call_pane_g1

0xb21a,	// (0x000a8002) list_single_graphic_popup_conf_pane_ParamLimits

0xb21a,	// (0x000a8002) list_single_graphic_popup_conf_pane

0xb22c,	// (0x000a8014) list_highlight_pane_cp01

0xb235,	// (0x000a801d) list_single_graphic_popup_conf_pane_g1

0xb23d,	// (0x000a8025) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000ac168) list_single_graphic_popup_conf_pane_g

0xb245,	// (0x000a802d) list_single_graphic_popup_conf_pane_t1

0xb253,	// (0x000a803b) linegrid_cams_pane_g1

0x3403,	// (0x000a01eb) linegrid_cams_pane_g2

0xaa23,	// (0x000a780b) linegrid_cams_pane_g3

0xb25c,	// (0x000a8044) linegrid_cams_pane_g4

0x340c,	// (0x000a01f4) linegrid_cams_pane_g5

0x3415,	// (0x000a01fd) linegrid_cams_pane_g6

0xaa2c,	// (0x000a7814) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000ac16d) linegrid_cams_pane_g

0xb265,	// (0x000a804d) popup_clock_analogue_window

0xb265,	// (0x000a804d) popup_clock_digital_window

0xa077,	// (0x000a6e5f) popup_phob_thumbnail_window

0xa8be,	// (0x000a76a6) call_video_uplink_pane_g1

0xb26e,	// (0x000a8056) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000ac17c) call_video_uplink_pane_g

0xb276,	// (0x000a805e) video_uplink_pane

0xb27e,	// (0x000a8066) mce_image_pane_g1

0x3420,	// (0x000a0208) mce_image_pane_g2

0x342a,	// (0x000a0212) mce_image_pane_g3

0x3434,	// (0x000a021c) mce_image_pane_g4

0x343c,	// (0x000a0224) mce_image_pane_g5

0x0004,

0xf399,	// (0x000ac181) mce_image_pane_g

0xb288,	// (0x000a8070) control_top_pane_stacon_cp01_ParamLimits

0xb288,	// (0x000a8070) control_top_pane_stacon_cp01

0xb29c,	// (0x000a8084) uni_indicator_pane_stacon_cp01_ParamLimits

0xb29c,	// (0x000a8084) uni_indicator_pane_stacon_cp01

0xb2ad,	// (0x000a8095) bg_popup_sub_pane_cp03

0x3444,	// (0x000a022c) chi_dic_find_pane

0x344c,	// (0x000a0234) listscroll_chi_dic_pane

0x3455,	// (0x000a023d) main_pane_chidic_g1

0x3468,	// (0x000a0250) chi_dic_find_pane_t1

0xb2b7,	// (0x000a809f) find_chidic_pane

0xb2c0,	// (0x000a80a8) chi_dic_list_pane_ParamLimits

0xb2c0,	// (0x000a80a8) chi_dic_list_pane

0xb2d1,	// (0x000a80b9) scroll_pane_cp020

0x3476,	// (0x000a025e) find_chidic_pane_t1

0xa077,	// (0x000a6e5f) input_focus_pane_cp06

0x3485,	// (0x000a026d) list_chi_dic_pane_ParamLimits

0x3485,	// (0x000a026d) list_chi_dic_pane

0x349a,	// (0x000a0282) list_chi_dic_pane_t1_ParamLimits

0x349a,	// (0x000a0282) list_chi_dic_pane_t1

0xa077,	// (0x000a6e5f) list_highlight_pane_cp020

0xb2d9,	// (0x000a80c1) bg_cale_heading_pane_g1

0x34ad,	// (0x000a0295) bg_cale_heading_pane_g2

0x34b5,	// (0x000a029d) bg_cale_heading_pane_g3

0x34bd,	// (0x000a02a5) bg_cale_heading_pane_g4

0x34c7,	// (0x000a02af) bg_cale_heading_pane_g5

0x34d1,	// (0x000a02b9) bg_cale_heading_pane_g6

0x34d9,	// (0x000a02c1) bg_cale_heading_pane_g7

0x34e1,	// (0x000a02c9) bg_cale_heading_pane_g8

0x34eb,	// (0x000a02d3) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000ac18c) bg_cale_heading_pane_g

0xb2d9,	// (0x000a80c1) bg_cale_side_pane_g1

0x34f5,	// (0x000a02dd) bg_cale_side_pane_g2

0x34ff,	// (0x000a02e7) bg_cale_side_pane_g3

0x3509,	// (0x000a02f1) bg_cale_side_pane_g4

0x3513,	// (0x000a02fb) bg_cale_side_pane_g5

0x351d,	// (0x000a0305) bg_cale_side_pane_g6

0x3527,	// (0x000a030f) bg_cale_side_pane_g7

0x3531,	// (0x000a0319) bg_cale_side_pane_g8

0x3539,	// (0x000a0321) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000ac19f) bg_cale_side_pane_g

0x3541,	// (0x000a0329) popup_call_status_window_ParamLimits

0x3541,	// (0x000a0329) popup_call_status_window

0xb2e1,	// (0x000a80c9) stacon_top_pane

0xb2e9,	// (0x000a80d1) status_pane_ParamLimits

0xb2e9,	// (0x000a80d1) status_pane

0xb2fe,	// (0x000a80e6) status_small_pane

0xb306,	// (0x000a80ee) control_pane

0xa077,	// (0x000a6e5f) stacon_bottom_pane

0xb30e,	// (0x000a80f6) list_single_mce_smart_pane_t1_ParamLimits

0xb30e,	// (0x000a80f6) list_single_mce_smart_pane_t1

0xb321,	// (0x000a8109) list_single_mce_smart_pane_t2_ParamLimits

0xb321,	// (0x000a8109) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000ac1b2) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000ac1b2) list_single_mce_smart_pane_t

0x354d,	// (0x000a0335) compass_pane

0x3558,	// (0x000a0340) main_location2_pane_t1

0x356e,	// (0x000a0356) main_location2_pane_t2

0x3584,	// (0x000a036c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000ac1b7) main_location2_pane_t

0xb340,	// (0x000a8128) compass_pane_g1_ParamLimits

0xb340,	// (0x000a8128) compass_pane_g1

0x35d2,	// (0x000a03ba) compass_pane_t1

0x35e1,	// (0x000a03c9) compass_pane_t2

0x0005,

0xf3d8,	// (0x000ac1c0) compass_pane_t

0x362c,	// (0x000a0414) text_secondary_cp61

0xb354,	// (0x000a813c) navi_pane_cams_g5

0xb377,	// (0x000a815f) navi_pane_im_t1

0xb385,	// (0x000a816d) navi_pane_mp_g1_ParamLimits

0xb385,	// (0x000a816d) navi_pane_mp_g1

0xb399,	// (0x000a8181) navi_pane_mp_g2_ParamLimits

0xb399,	// (0x000a8181) navi_pane_mp_g2

0xb3a5,	// (0x000a818d) navi_pane_mp_g3_ParamLimits

0xb3a5,	// (0x000a818d) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000ac1d4) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000ac1d4) navi_pane_mp_g

0xb3b1,	// (0x000a8199) navi_pane_mp_t1

0xb3bf,	// (0x000a81a7) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000ac1db) navi_pane_mp_t

0xb3fb,	// (0x000a81e3) navi_pane_vt_g1

0xb3b1,	// (0x000a8199) navi_pane_vt_t1

0xb403,	// (0x000a81eb) navi_slider_pane

0xb40b,	// (0x000a81f3) zooming_pane

0xb413,	// (0x000a81fb) navi_slider_pane_g1

0x3761,	// (0x000a0549) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000ac1e2) navi_slider_pane_g

0xb437,	// (0x000a821f) aid_levels_zoom

0xb43f,	// (0x000a8227) zooming_pane_g1

0xb447,	// (0x000a822f) zooming_pane_g2

0xb447,	// (0x000a822f) zooming_pane_g3

0x0002,

0xf409,	// (0x000ac1f1) zooming_pane_g

0xb44f,	// (0x000a8237) level_10_zoom

0xb458,	// (0x000a8240) level_11_zoom

0xb461,	// (0x000a8249) level_1_zoom

0xb46a,	// (0x000a8252) level_2_zoom

0xb473,	// (0x000a825b) level_3_zoom

0xb47c,	// (0x000a8264) level_4_zoom

0xb485,	// (0x000a826d) level_5_zoom

0xb48e,	// (0x000a8276) level_6_zoom

0xb497,	// (0x000a827f) level_7_zoom

0xb4a0,	// (0x000a8288) level_8_zoom

0xb4a9,	// (0x000a8291) level_9_zoom

0xb4ba,	// (0x000a82a2) popup_phob_thumbnail_window_g1

0xb4c2,	// (0x000a82aa) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000ac1f8) popup_phob_thumbnail_window_g

0xc7bd,	// (0x000a95a5) level_1_location

0xc7c5,	// (0x000a95ad) level_2_location

0xc7cd,	// (0x000a95b5) level_3_location

0xc7d5,	// (0x000a95bd) level_4_location

0xb40b,	// (0x000a81f3) level_5_location

0x3773,	// (0x000a055b) mce_icon_pane_g1

0x377b,	// (0x000a0563) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000ac1fd) mce_icon_pane_g

0x3783,	// (0x000a056b) main_mup_pane_g1_ParamLimits

0x3783,	// (0x000a056b) main_mup_pane_g1

0x379b,	// (0x000a0583) main_mup_pane_g2_ParamLimits

0x379b,	// (0x000a0583) main_mup_pane_g2

0x37b7,	// (0x000a059f) main_mup_pane_g3_ParamLimits

0x37b7,	// (0x000a059f) main_mup_pane_g3

0x37d3,	// (0x000a05bb) main_mup_pane_g4_ParamLimits

0x37d3,	// (0x000a05bb) main_mup_pane_g4

0x37ef,	// (0x000a05d7) main_mup_pane_g5_ParamLimits

0x37ef,	// (0x000a05d7) main_mup_pane_g5

0x3810,	// (0x000a05f8) main_mup_pane_g6_ParamLimits

0x3810,	// (0x000a05f8) main_mup_pane_g6

0x3830,	// (0x000a0618) main_mup_pane_g7_ParamLimits

0x3830,	// (0x000a0618) main_mup_pane_g7

0x3854,	// (0x000a063c) main_mup_pane_g8_ParamLimits

0x3854,	// (0x000a063c) main_mup_pane_g8

0x3878,	// (0x000a0660) main_mup_pane_g9_ParamLimits

0x3878,	// (0x000a0660) main_mup_pane_g9

0x389b,	// (0x000a0683) main_mup_pane_g10_ParamLimits

0x389b,	// (0x000a0683) main_mup_pane_g10

0x38be,	// (0x000a06a6) main_mup_pane_g11_ParamLimits

0x38be,	// (0x000a06a6) main_mup_pane_g11

0x38de,	// (0x000a06c6) main_mup_pane_g12_ParamLimits

0x38de,	// (0x000a06c6) main_mup_pane_g12

0x38ec,	// (0x000a06d4) main_mup_pane_g13_ParamLimits

0x38ec,	// (0x000a06d4) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000ac202) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000ac202) main_mup_pane_g

0x3902,	// (0x000a06ea) main_mup_pane_t1_ParamLimits

0x3902,	// (0x000a06ea) main_mup_pane_t1

0x3921,	// (0x000a0709) main_mup_pane_t2_ParamLimits

0x3921,	// (0x000a0709) main_mup_pane_t2

0x393b,	// (0x000a0723) main_mup_pane_t3_ParamLimits

0x393b,	// (0x000a0723) main_mup_pane_t3

0x3955,	// (0x000a073d) main_mup_pane_t4_ParamLimits

0x3955,	// (0x000a073d) main_mup_pane_t4

0x3967,	// (0x000a074f) main_mup_pane_t5_ParamLimits

0x3967,	// (0x000a074f) main_mup_pane_t5

0x3979,	// (0x000a0761) main_mup_pane_t6_ParamLimits

0x3979,	// (0x000a0761) main_mup_pane_t6

0x0005,

0xf435,	// (0x000ac21d) main_mup_pane_t_ParamLimits

0xf435,	// (0x000ac21d) main_mup_pane_t

0x398f,	// (0x000a0777) mup_progress_pane_ParamLimits

0x398f,	// (0x000a0777) mup_progress_pane

0x399b,	// (0x000a0783) mup_visualizer_pane_ParamLimits

0x399b,	// (0x000a0783) mup_visualizer_pane

0x39d9,	// (0x000a07c1) mup_volume_pane_ParamLimits

0x39d9,	// (0x000a07c1) mup_volume_pane

0xb146,	// (0x000a7f2e) mup_visualizer_pane_g1_ParamLimits

0xb146,	// (0x000a7f2e) mup_visualizer_pane_g1

0xb146,	// (0x000a7f2e) mup_visualizer_pane_g2_ParamLimits

0xb146,	// (0x000a7f2e) mup_visualizer_pane_g2

0xb340,	// (0x000a8128) mup_visualizer_pane_g3_ParamLimits

0xb340,	// (0x000a8128) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000ac22a) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000ac22a) mup_visualizer_pane_g

0xa8be,	// (0x000a76a6) mup_volume_pane_g1

0xb4d2,	// (0x000a82ba) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000ac231) mup_volume_pane_g

0xa8be,	// (0x000a76a6) mup_progress_pane_g1

0xb4db,	// (0x000a82c3) mup_progress_pane_g2

0xb4e4,	// (0x000a82cc) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000ac236) mup_progress_pane_g

0xa077,	// (0x000a6e5f) bg_popup_window_pane_cp05

0xb4ed,	// (0x000a82d5) heading_pane_cp02_ParamLimits

0xb4ed,	// (0x000a82d5) heading_pane_cp02

0xb509,	// (0x000a82f1) list_popup_blid_pane

0xb511,	// (0x000a82f9) list_blid_sat_info_pane_ParamLimits

0xb511,	// (0x000a82f9) list_blid_sat_info_pane

0xb524,	// (0x000a830c) list_blid_sat_info_pane_g1

0xb52c,	// (0x000a8314) list_blid_sat_info_pane_t1

0x3af8,	// (0x000a08e0) mup_equalizer_pane_ParamLimits

0x3af8,	// (0x000a08e0) mup_equalizer_pane

0x3b19,	// (0x000a0901) mup_equalizer_pane_cp1_ParamLimits

0x3b19,	// (0x000a0901) mup_equalizer_pane_cp1

0x3b3a,	// (0x000a0922) mup_equalizer_pane_cp2_ParamLimits

0x3b3a,	// (0x000a0922) mup_equalizer_pane_cp2

0x3b5b,	// (0x000a0943) mup_equalizer_pane_cp3_ParamLimits

0x3b5b,	// (0x000a0943) mup_equalizer_pane_cp3

0x3b80,	// (0x000a0968) mup_equalizer_pane_cp4_ParamLimits

0x3b80,	// (0x000a0968) mup_equalizer_pane_cp4

0x3ba5,	// (0x000a098d) mup_equalizer_pane_cp5

0x3bbd,	// (0x000a09a5) mup_equalizer_pane_cp6

0x3bd5,	// (0x000a09bd) mup_equalizer_pane_cp7

0xc6d7,	// (0x000a94bf) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x000a94c7) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x000a94cf) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7a4,	// (0x000a758c) mup_scale_pane

0xa8be,	// (0x000a76a6) mup_scale_pane_g1

0xb53a,	// (0x000a8322) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000ac252) mup_scale_pane_g

0xb55e,	// (0x000a8346) msg_data_pane

0xb566,	// (0x000a834e) scroll_pane_cp017

0x3bff,	// (0x000a09e7) bg_list_pane_cp04_ParamLimits

0x3bff,	// (0x000a09e7) bg_list_pane_cp04

0xb56e,	// (0x000a8356) msg_data_pane_g1

0x3c1f,	// (0x000a0a07) msg_data_pane_g2

0x3c29,	// (0x000a0a11) msg_data_pane_g3

0x3c33,	// (0x000a0a1b) msg_data_pane_g4

0x3c3b,	// (0x000a0a23) msg_data_pane_g5

0x3c43,	// (0x000a0a2b) msg_data_pane_g6

0x3c4b,	// (0x000a0a33) msg_data_pane_g7

0x0006,

0xf479,	// (0x000ac261) msg_data_pane_g

0x3c53,	// (0x000a0a3b) msg_text_pane_ParamLimits

0x3c53,	// (0x000a0a3b) msg_text_pane

0x3c79,	// (0x000a0a61) qrid_highlight_pane_cp011_ParamLimits

0x3c79,	// (0x000a0a61) qrid_highlight_pane_cp011

0xa077,	// (0x000a6e5f) msg_body_pane

0xa077,	// (0x000a6e5f) msg_header_pane

0xb57f,	// (0x000a8367) input_focus_pane_cp07

0xa286,	// (0x000a706e) msg_header_pane_t1_ParamLimits

0xa286,	// (0x000a706e) msg_header_pane_t1

0xa298,	// (0x000a7080) msg_header_pane_t2_ParamLimits

0xa298,	// (0x000a7080) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000ac275) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000ac275) msg_header_pane_t

0xb594,	// (0x000a837c) msg_body_pane_g1

0x3c9d,	// (0x000a0a85) msg_body_pane_t1_ParamLimits

0x3c9d,	// (0x000a0a85) msg_body_pane_t1

0xa2aa,	// (0x000a7092) msg_body_pane_t2_ParamLimits

0xa2aa,	// (0x000a7092) msg_body_pane_t2

0xa2bc,	// (0x000a70a4) msg_body_pane_t3_ParamLimits

0xa2bc,	// (0x000a70a4) msg_body_pane_t3

0x0002,

0xf492,	// (0x000ac27a) msg_body_pane_t_ParamLimits

0xf492,	// (0x000ac27a) msg_body_pane_t

0x3d20,	// (0x000a0b08) main_viewer_pane_g1_ParamLimits

0x3d20,	// (0x000a0b08) main_viewer_pane_g1

0x3d2c,	// (0x000a0b14) main_viewer_pane_g2_ParamLimits

0x3d2c,	// (0x000a0b14) main_viewer_pane_g2

0x3d38,	// (0x000a0b20) main_viewer_pane_g3_ParamLimits

0x3d38,	// (0x000a0b20) main_viewer_pane_g3

0x3d49,	// (0x000a0b31) main_viewer_pane_g4_ParamLimits

0x3d49,	// (0x000a0b31) main_viewer_pane_g4

0x3d5a,	// (0x000a0b42) main_viewer_pane_g5_ParamLimits

0x3d5a,	// (0x000a0b42) main_viewer_pane_g5

0x3d5a,	// (0x000a0b42) main_viewer_pane_g7_ParamLimits

0x3d5a,	// (0x000a0b42) main_viewer_pane_g7

0x3d6c,	// (0x000a0b54) main_viewer_pane_g8_ParamLimits

0x3d6c,	// (0x000a0b54) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000ac28a) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000ac28a) main_viewer_pane_g

0xb59c,	// (0x000a8384) viewer_content_pane_ParamLimits

0xb59c,	// (0x000a8384) viewer_content_pane

0x3da4,	// (0x000a0b8c) main_postcard_pane_g1_ParamLimits

0x3da4,	// (0x000a0b8c) main_postcard_pane_g1

0x3db2,	// (0x000a0b9a) main_postcard_pane_g2_ParamLimits

0x3db2,	// (0x000a0b9a) main_postcard_pane_g2

0x3dc0,	// (0x000a0ba8) main_postcard_pane_g3_ParamLimits

0x3dc0,	// (0x000a0ba8) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000ac29b) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000ac29b) main_postcard_pane_g

0x3dd0,	// (0x000a0bb8) main_postcard_pane_g4

0xc900,	// (0x000a96e8) smil_status_volume_pane_g2

0x3dfc,	// (0x000a0be4) postcard_pane_ParamLimits

0x3dfc,	// (0x000a0be4) postcard_pane

0xb146,	// (0x000a7f2e) postcard_pane_g1_ParamLimits

0xb146,	// (0x000a7f2e) postcard_pane_g1

0x3e36,	// (0x000a0c1e) postcard_pane_g2_ParamLimits

0x3e36,	// (0x000a0c1e) postcard_pane_g2

0x3e42,	// (0x000a0c2a) postcard_pane_g3_ParamLimits

0x3e42,	// (0x000a0c2a) postcard_pane_g3

0xb5aa,	// (0x000a8392) postcard_pane_g4_ParamLimits

0xb5aa,	// (0x000a8392) postcard_pane_g4

0x3e4e,	// (0x000a0c36) postcard_pane_g5_ParamLimits

0x3e4e,	// (0x000a0c36) postcard_pane_g5

0x3e5a,	// (0x000a0c42) postcard_pane_g6_ParamLimits

0x3e5a,	// (0x000a0c42) postcard_pane_g6

0xb5b8,	// (0x000a83a0) postcard_pane_g7_ParamLimits

0xb5b8,	// (0x000a83a0) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000ac2a8) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000ac2a8) postcard_pane_g

0x3e68,	// (0x000a0c50) main_mp2_pane_g1_ParamLimits

0x3e68,	// (0x000a0c50) main_mp2_pane_g1

0x3e76,	// (0x000a0c5e) main_mp2_pane_g2_ParamLimits

0x3e76,	// (0x000a0c5e) main_mp2_pane_g2

0x3e82,	// (0x000a0c6a) main_mp2_pane_g3_ParamLimits

0x3e82,	// (0x000a0c6a) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000ac2b7) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000ac2b7) main_mp2_pane_g

0x3e8e,	// (0x000a0c76) main_mp2_pane_t1_ParamLimits

0x3e8e,	// (0x000a0c76) main_mp2_pane_t1

0x3ea5,	// (0x000a0c8d) main_mp2_pane_t2_ParamLimits

0x3ea5,	// (0x000a0c8d) main_mp2_pane_t2

0x3eb9,	// (0x000a0ca1) main_mp2_pane_t3_ParamLimits

0x3eb9,	// (0x000a0ca1) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000ac2be) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000ac2be) main_mp2_pane_t

0xb5c6,	// (0x000a83ae) pec_content_pane_ParamLimits

0xb5c6,	// (0x000a83ae) pec_content_pane

0xabe2,	// (0x000a79ca) scroll_pane_cp015

0xb5d8,	// (0x000a83c0) pec_attribute_pane_ParamLimits

0xb5d8,	// (0x000a83c0) pec_attribute_pane

0x3ecb,	// (0x000a0cb3) pec_content_pane_g1_ParamLimits

0x3ecb,	// (0x000a0cb3) pec_content_pane_g1

0xb5e8,	// (0x000a83d0) pec_content_pane_t1_ParamLimits

0xb5e8,	// (0x000a83d0) pec_content_pane_t1

0xb5fa,	// (0x000a83e2) pec_content_pane_t2_ParamLimits

0xb5fa,	// (0x000a83e2) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000ac2c5) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000ac2c5) pec_content_pane_t

0x3ed7,	// (0x000a0cbf) list_single_graphic_pane_cp01_ParamLimits

0x3ed7,	// (0x000a0cbf) list_single_graphic_pane_cp01

0xa7a4,	// (0x000a758c) bg_popup_sub_pane_cp04

0xb60c,	// (0x000a83f4) popup_mup_playback_window_g1

0xb618,	// (0x000a8400) popup_mup_playback_window_t1

0xb62d,	// (0x000a8415) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000ac2ca) popup_mup_playback_window_t

0xb664,	// (0x000a844c) main_image_pane_g1_ParamLimits

0xb664,	// (0x000a844c) main_image_pane_g1

0xb6a7,	// (0x000a848f) scroll_pane_cp018_ParamLimits

0xb6a7,	// (0x000a848f) scroll_pane_cp018

0xb6bf,	// (0x000a84a7) scroll_pane_cp016_ParamLimits

0xb6bf,	// (0x000a84a7) scroll_pane_cp016

0x3f65,	// (0x000a0d4d) smil2_image_pane_ParamLimits

0x3f65,	// (0x000a0d4d) smil2_image_pane

0x3f9b,	// (0x000a0d83) smil2_root_pane_ParamLimits

0x3f9b,	// (0x000a0d83) smil2_root_pane

0x3fc7,	// (0x000a0daf) smil2_text_pane_ParamLimits

0x3fc7,	// (0x000a0daf) smil2_text_pane

0xa077,	// (0x000a6e5f) bg_list_pane_cp06

0xb6fb,	// (0x000a84e3) grid_radio_pane

0xa077,	// (0x000a6e5f) bg_popup_window_pane_cp06

0xb705,	// (0x000a84ed) main_fmradio_pane_t1

0xb1bd,	// (0x000a7fa5) heading_pane_cp04

0xb713,	// (0x000a84fb) main_fmradio_pane_t2

0xc6ef,	// (0x000a94d7) popup_cale_lunar_info_window_g1

0xb721,	// (0x000a8509) main_fmradio_pane_t3

0xc6f7,	// (0x000a94df) popup_cale_lunar_info_window_g2

0xb731,	// (0x000a8519) main_fmradio_pane_t4

0x0001,

0xb73f,	// (0x000a8527) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000ac3a5) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000ac2df) main_fmradio_pane_t

0xb74d,	// (0x000a8535) wait_bar_pane_cp03

0xb755,	// (0x000a853d) cell_fmradio_pane_ParamLimits

0xb755,	// (0x000a853d) cell_fmradio_pane

0xb5b8,	// (0x000a83a0) cell_fmradio_pane_g1_ParamLimits

0xb5b8,	// (0x000a83a0) cell_fmradio_pane_g1

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp011

0xb76a,	// (0x000a8552) poc_content_pane_ParamLimits

0xb76a,	// (0x000a8552) poc_content_pane

0xb77c,	// (0x000a8564) scroll_pane_cp019

0x4007,	// (0x000a0def) popup_call_poc_act_window_ParamLimits

0x4007,	// (0x000a0def) popup_call_poc_act_window

0x4014,	// (0x000a0dfc) popup_call_poc_inact_window_ParamLimits

0x4014,	// (0x000a0dfc) popup_call_poc_inact_window

0xf594,	// (0x000ac37c) bg_popup_call_poc_act_pane_g

0xc667,	// (0x000a944f) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x000a9457) bg_popup_call_poc_inact_pane_g2

0xb784,	// (0x000a856c) popup_call_poc_act_window_g2

0xc677,	// (0x000a945f) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x000a9467) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x000a946f) bg_popup_call_poc_inact_pane_g5

0xb78c,	// (0x000a8574) popup_call_poc_act_window_t1_ParamLimits

0xb78c,	// (0x000a8574) popup_call_poc_act_window_t1

0xb7b4,	// (0x000a859c) popup_call_poc_act_window_t2_ParamLimits

0xb7b4,	// (0x000a859c) popup_call_poc_act_window_t2

0xb7dc,	// (0x000a85c4) popup_call_poc_act_window_t3_ParamLimits

0xb7dc,	// (0x000a85c4) popup_call_poc_act_window_t3

0xb804,	// (0x000a85ec) popup_call_poc_act_window_t4_ParamLimits

0xb804,	// (0x000a85ec) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000ac2ea) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000ac2ea) popup_call_poc_act_window_t

0xc68f,	// (0x000a9477) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x000a947f) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x000a9487) bg_popup_call_poc_inact_pane_g8

0xb816,	// (0x000a85fe) popup_call_poc_inact_window_g2

0xc6a7,	// (0x000a948f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000ac369) bg_popup_call_poc_inact_pane_g

0xb81e,	// (0x000a8606) popup_call_poc_inact_window_t1_ParamLimits

0xb81e,	// (0x000a8606) popup_call_poc_inact_window_t1

0xb833,	// (0x000a861b) popup_call_poc_inact_window_t2_ParamLimits

0xb833,	// (0x000a861b) popup_call_poc_inact_window_t2

0xb848,	// (0x000a8630) popup_call_poc_inact_window_t3_ParamLimits

0xb848,	// (0x000a8630) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000ac2f3) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000ac2f3) popup_call_poc_inact_window_t

0xc873,	// (0x000a965b) context_pane_ParamLimits

0x4623,	// (0x000a140b) signal_pane_ParamLimits

0xb40b,	// (0x000a81f3) main_call2_pane

0xc861,	// (0x000a9649) popup_phob_thumbnail2_window_ParamLimits

0xc861,	// (0x000a9649) popup_phob_thumbnail2_window

0x3cce,	// (0x000a0ab6) aid_hotspot_pointer_arrow_pane

0x3cd6,	// (0x000a0abe) aid_hotspot_pointer_hand_pane

0x4339,	// (0x000a1121) phob_pre_status_pane_g5

0x1c9b,	// (0x0009ea83) cams_zoom_pane_ParamLimits

0x1ca7,	// (0x0009ea8f) image_vga_pane_ParamLimits

0x1cb6,	// (0x0009ea9e) main_camera_pane_g1_ParamLimits

0x1cc4,	// (0x0009eaac) main_camera_pane_g2_ParamLimits

0x1cd0,	// (0x0009eab8) main_camera_pane_g3_ParamLimits

0x1cde,	// (0x0009eac6) main_camera_pane_g4_ParamLimits

0x1cec,	// (0x0009ead4) main_camera_pane_g5_ParamLimits

0x1cfa,	// (0x0009eae2) main_camera_pane_g6_ParamLimits

0x1d08,	// (0x0009eaf0) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000abff2) main_camera_pane_g_ParamLimits

0x1d16,	// (0x0009eafe) main_camera_pane_t1_ParamLimits

0x1d28,	// (0x0009eb10) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000ac003) main_camera_pane_t_ParamLimits

0xa7a4,	// (0x000a758c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7a4,	// (0x000a758c) bg_popup_preview_window_pane_cp01

0xb85d,	// (0x000a8645) popup_phob_thumbnail2_window_g1_ParamLimits

0xb85d,	// (0x000a8645) popup_phob_thumbnail2_window_g1

0xa077,	// (0x000a6e5f) call2_cli_visual_pane

0x4030,	// (0x000a0e18) popup_call2_audio_conf_window_ParamLimits

0x4030,	// (0x000a0e18) popup_call2_audio_conf_window

0x4049,	// (0x000a0e31) popup_call2_audio_first_window_ParamLimits

0x4049,	// (0x000a0e31) popup_call2_audio_first_window

0x40e7,	// (0x000a0ecf) popup_call2_audio_in_window_ParamLimits

0x40e7,	// (0x000a0ecf) popup_call2_audio_in_window

0x412b,	// (0x000a0f13) popup_call2_audio_out_window_ParamLimits

0x412b,	// (0x000a0f13) popup_call2_audio_out_window

0x4195,	// (0x000a0f7d) popup_call2_audio_second_window_ParamLimits

0x4195,	// (0x000a0f7d) popup_call2_audio_second_window

0x41f3,	// (0x000a0fdb) popup_call2_audio_wait_window_ParamLimits

0x41f3,	// (0x000a0fdb) popup_call2_audio_wait_window

0xa077,	// (0x000a6e5f) bg_popup_call2_act_pane_cp03

0xa786,	// (0x000a756e) list_conf_pane_cp

0xb869,	// (0x000a8651) popup_call2_audio_conf_window_t1

0xb877,	// (0x000a865f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb877,	// (0x000a865f) list_single_graphic_popup_conf2_pane

0xb22c,	// (0x000a8014) list_highlight_pane_cp04

0xb88a,	// (0x000a8672) list_single_graphic_popup_conf2_pane_g1

0xb23d,	// (0x000a8025) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000ac2fa) list_single_graphic_popup_conf2_pane_g

0xb894,	// (0x000a867c) list_single_graphic_popup_conf2_pane_t1

0xb8a2,	// (0x000a868a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8a2,	// (0x000a868a) bg_popup_call2_act_pane_cp01

0xb92c,	// (0x000a8714) call_type_pane_cp05_ParamLimits

0xb92c,	// (0x000a8714) call_type_pane_cp05

0xb980,	// (0x000a8768) popup_call2_audio_second_window_g1_ParamLimits

0xb980,	// (0x000a8768) popup_call2_audio_second_window_g1

0xb9d4,	// (0x000a87bc) popup_call2_audio_second_window_g2_ParamLimits

0xb9d4,	// (0x000a87bc) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000ac2ff) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000ac2ff) popup_call2_audio_second_window_g

0xba39,	// (0x000a8821) popup_call2_audio_second_window_t1_ParamLimits

0xba39,	// (0x000a8821) popup_call2_audio_second_window_t1

0xbaf4,	// (0x000a88dc) popup_call2_audio_second_window_t2_ParamLimits

0xbaf4,	// (0x000a88dc) popup_call2_audio_second_window_t2

0xbb47,	// (0x000a892f) popup_call2_audio_second_window_t3_ParamLimits

0xbb47,	// (0x000a892f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000ac306) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000ac306) popup_call2_audio_second_window_t

0xa077,	// (0x000a6e5f) bg_popup_call2_in_pane_cp02

0xa081,	// (0x000a6e69) call_type_pane_cp04

0xa089,	// (0x000a6e71) popup_call2_audio_wait_window_g1

0xa091,	// (0x000a6e79) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000abedd) popup_call2_audio_wait_window_g

0xa099,	// (0x000a6e81) popup_call2_audio_wait_window_t3

0xbc3a,	// (0x000a8a22) bg_popup_call2_act_pane_ParamLimits

0xbc3a,	// (0x000a8a22) bg_popup_call2_act_pane

0xbcfa,	// (0x000a8ae2) call_type_pane_cp03_ParamLimits

0xbcfa,	// (0x000a8ae2) call_type_pane_cp03

0xbd5e,	// (0x000a8b46) popup_call2_audio_first_window_g1_ParamLimits

0xbd5e,	// (0x000a8b46) popup_call2_audio_first_window_g1

0xbdce,	// (0x000a8bb6) popup_call2_audio_first_window_g2_ParamLimits

0xbdce,	// (0x000a8bb6) popup_call2_audio_first_window_g2

0xb146,	// (0x000a7f2e) popup_call2_audio_first_window_g3_ParamLimits

0xb146,	// (0x000a7f2e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000ac30f) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000ac30f) popup_call2_audio_first_window_g

0xbeac,	// (0x000a8c94) popup_call2_audio_first_window_t1_ParamLimits

0xbeac,	// (0x000a8c94) popup_call2_audio_first_window_t1

0xbfaf,	// (0x000a8d97) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x000a8d97) popup_call2_audio_first_window_t4

0xc092,	// (0x000a8e7a) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x000a8e7a) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000ac31a) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000ac31a) popup_call2_audio_first_window_t

0xa79c,	// (0x000a7584) bg_popup_call2_act_pane_g1

0xc701,	// (0x000a94e9) popup_cale_lunar_info_window_t1

0xc70f,	// (0x000a94f7) popup_cale_lunar_info_window_t2

0xc71d,	// (0x000a9505) popup_cale_lunar_info_window_t3

0xa077,	// (0x000a6e5f) bg_popup_call2_bubble_pane

0xc193,	// (0x000a8f7b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000a8f7b) bg_popup_call2_in_pane_cp01

0x9d53,	// (0x000a6b3b) call_type_pane_cp02

0xc1db,	// (0x000a8fc3) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x000a8fc3) popup_call2_audio_out_window_g1

0xc207,	// (0x000a8fef) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x000a8fef) popup_call2_audio_out_window_g2

0xc22f,	// (0x000a9017) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x000a9017) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000ac323) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000ac323) popup_call2_audio_out_window_g

0xc26a,	// (0x000a9052) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x000a9052) popup_call2_audio_out_window_t1

0xc2c9,	// (0x000a90b1) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x000a90b1) popup_call2_audio_out_window_t2

0xc31d,	// (0x000a9105) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x000a9105) popup_call2_audio_out_window_t3

0xc333,	// (0x000a911b) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x000a911b) popup_call2_audio_out_window_t4

0xc349,	// (0x000a9131) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x000a9131) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000ac32c) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000ac32c) popup_call2_audio_out_window_t

0xc3ad,	// (0x000a9195) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x000a9195) bg_popup_call2_in_pane

0xc409,	// (0x000a91f1) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x000a91f1) popup_call2_audio_in_window_g1

0xc441,	// (0x000a9229) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x000a9229) popup_call2_audio_in_window_g2

0xc479,	// (0x000a9261) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x000a9261) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000ac339) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000ac339) popup_call2_audio_in_window_g

0xc4d1,	// (0x000a92b9) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x000a92b9) popup_call2_audio_in_window_t1

0xc551,	// (0x000a9339) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x000a9339) popup_call2_audio_in_window_t2

0xc5d1,	// (0x000a93b9) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x000a93b9) popup_call2_audio_in_window_t3

0xc5eb,	// (0x000a93d3) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x000a93d3) popup_call2_audio_in_window_t4

0xc5fd,	// (0x000a93e5) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x000a93e5) popup_call2_audio_in_window_t5

0xc612,	// (0x000a93fa) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x000a93fa) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000ac342) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000ac342) popup_call2_audio_in_window_t

0xa79c,	// (0x000a7584) bg_popup_call2_in_pane_g1

0xc72b,	// (0x000a9513) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000ac3aa) popup_cale_lunar_info_window_t

0xa7a4,	// (0x000a758c) bg_popup_call2_rect_pane_ParamLimits

0xa7a4,	// (0x000a758c) bg_popup_call2_rect_pane

0xa077,	// (0x000a6e5f) call2_cli_visual_graphic_pane

0xa077,	// (0x000a6e5f) call2_cli_visual_text_pane

0x46bb,	// (0x000a14a3) smil_status_volume_pane_g3

0x0002,

0xa8be,	// (0x000a76a6) call2_cli_visual_graphic_pane_g1

0xa8be,	// (0x000a76a6) call2_cli_visual_graphic_pane_g2

0xa8be,	// (0x000a76a6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000ac34f) call2_cli_visual_graphic_pane_g

0xc627,	// (0x000a940f) bg_popup_call2_rect_pane_g1

0xa95c,	// (0x000a7744) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x000a9417) bg_popup_call2_rect_pane_g3

0xc637,	// (0x000a941f) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x000a9427) bg_popup_call2_rect_pane_g5

0xc647,	// (0x000a942f) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x000a9437) bg_popup_call2_rect_pane_g7

0xc657,	// (0x000a943f) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x000a9447) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000ac356) bg_popup_call2_rect_pane_g

0xc667,	// (0x000a944f) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x000a9457) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x000a945f) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x000a9467) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x000a946f) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x000a9477) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x000a947f) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x000a9487) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x000a948f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000ac369) bg_popup_call2_bubble_pane_g

0x13e9,	// (0x0009e1d1) aid_cale_week_size_cell_pane

0x1d3c,	// (0x0009eb24) aid_cams_cif_uncrop_pane_ParamLimits

0x1d3c,	// (0x0009eb24) aid_cams_cif_uncrop_pane

0x1e99,	// (0x0009ec81) aid_cams_size_cell_ParamLimits

0x1e99,	// (0x0009ec81) aid_cams_size_cell

0x1ea5,	// (0x0009ec8d) grid_cams_pane_ParamLimits

0x1eb3,	// (0x0009ec9b) linegrid_cams_pane_ParamLimits

0x2094,	// (0x0009ee7c) call_video_pane_t1

0x20b1,	// (0x0009ee99) call_video_pane_t2

0x0001,

0xf26e,	// (0x000ac056) call_video_pane_t

0x257d,	// (0x0009f365) aid_cale_month_size_cell_pane_ParamLimits

0x257d,	// (0x0009f365) aid_cale_month_size_cell_pane

0xf60b,	// (0x000ac3f3) smil_status_volume_pane_g

0x46c8,	// (0x000a14b0) volume_smil_pane_ParamLimits

0x9c25,	// (0x000a6a0d) aid_popup2_width_pane

0x12dd,	// (0x0009e0c5) cell_qdial_pane_g4_ParamLimits

0x12dd,	// (0x0009e0c5) cell_qdial_pane_g4

0x35ae,	// (0x000a0396) aid_blid_cardinal_pane_ParamLimits

0x35be,	// (0x000a03a6) aid_blid_destination_pane_ParamLimits

0x35be,	// (0x000a03a6) aid_blid_destination_pane

0xa7a4,	// (0x000a758c) bg_popup_call_poc_act_pane_ParamLimits

0xa7a4,	// (0x000a758c) bg_popup_call_poc_act_pane

0xa7a4,	// (0x000a758c) bg_popup_call_poc_inact_pane_ParamLimits

0xa7a4,	// (0x000a758c) bg_popup_call_poc_inact_pane

0xc6af,	// (0x000a9497) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x000a949f) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x000a94a7) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x000a9467) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x000a946f) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x000a94af) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x000a947f) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x000a94b7) bg_popup_call_poc_act_pane_g8

0xa077,	// (0x000a6e5f) main_usb_pane

0xc838,	// (0x000a9620) popup_cale_lunar_info_window

0x23c9,	// (0x0009f1b1) im_reading_pane_t1_ParamLimits

0xab3a,	// (0x000a7922) list_im_pane_ParamLimits

0xab4b,	// (0x000a7933) scroll_pane_cp07_ParamLimits

0xa077,	// (0x000a6e5f) grid_highlight_pane_cp012

0xa7a4,	// (0x000a758c) mup_scale_pane_ParamLimits

0xb146,	// (0x000a7f2e) main_usb_pane_g1_ParamLimits

0xb146,	// (0x000a7f2e) main_usb_pane_g1

0x425c,	// (0x000a1044) main_usb_pane_g2_ParamLimits

0x425c,	// (0x000a1044) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000ac393) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000ac393) main_usb_pane_g

0x4268,	// (0x000a1050) main_usb_pane_t1_ParamLimits

0x4268,	// (0x000a1050) main_usb_pane_t1

0x427a,	// (0x000a1062) main_usb_pane_t2_ParamLimits

0x427a,	// (0x000a1062) main_usb_pane_t2

0x428c,	// (0x000a1074) main_usb_pane_t3_ParamLimits

0x428c,	// (0x000a1074) main_usb_pane_t3

0x429e,	// (0x000a1086) main_usb_pane_t4_ParamLimits

0x429e,	// (0x000a1086) main_usb_pane_t4

0x42b0,	// (0x000a1098) main_usb_pane_t5_ParamLimits

0x42b0,	// (0x000a1098) main_usb_pane_t5

0x42c2,	// (0x000a10aa) main_usb_pane_t6_ParamLimits

0x42c2,	// (0x000a10aa) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000ac398) main_usb_pane_t_ParamLimits

0x354d,	// (0x000a0335) aid_text_placing

0x3558,	// (0x000a0340) main_location2_pane_t1_ParamLimits

0x356e,	// (0x000a0356) main_location2_pane_t2_ParamLimits

0x3584,	// (0x000a036c) main_location2_pane_t3_ParamLimits

0x359a,	// (0x000a0382) main_location2_pane_t4_ParamLimits

0x359a,	// (0x000a0382) main_location2_pane_t4

0xf3cf,	// (0x000ac1b7) main_location2_pane_t_ParamLimits

0xa7e0,	// (0x000a75c8) find_pinb_pane_g2_ParamLimits

0xa7e0,	// (0x000a75c8) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000abf03) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000abf03) find_pinb_pane_g

0xa7ec,	// (0x000a75d4) find_pinb_pane_t1_ParamLimits

0xa7fe,	// (0x000a75e6) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000abf08) find_pinb_pane_t_ParamLimits

0xa077,	// (0x000a6e5f) main_call3_pane

0x2afc,	// (0x0009f8e4) cale_month_day_heading_pane_t1_ParamLimits

0x2b7e,	// (0x0009f966) cale_month_day_heading_pane_t2_ParamLimits

0x2c0b,	// (0x0009f9f3) cale_month_day_heading_pane_t3_ParamLimits

0x2c98,	// (0x0009fa80) cale_month_day_heading_pane_t4_ParamLimits

0x2d25,	// (0x0009fb0d) cale_month_day_heading_pane_t5_ParamLimits

0x2dba,	// (0x0009fba2) cale_month_day_heading_pane_t6_ParamLimits

0x2e57,	// (0x0009fc3f) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000ac08e) cale_month_day_heading_pane_t_ParamLimits

0x312d,	// (0x0009ff15) smil_status_volume_pane

0x3e1a,	// (0x000a0c02) postcard_address_pane_ParamLimits

0x3e1a,	// (0x000a0c02) postcard_address_pane

0x3e28,	// (0x000a0c10) postcard_message_pane_ParamLimits

0x3e28,	// (0x000a0c10) postcard_message_pane

0x4232,	// (0x000a101a) call2_cli_visual_pane_t1_ParamLimits

0x4232,	// (0x000a101a) call2_cli_visual_pane_t1

0x4827,	// (0x000a160f) postcard_message_pane_t1_ParamLimits

0x4827,	// (0x000a160f) postcard_message_pane_t1

0x4810,	// (0x000a15f8) postcard_address_pane_t1_ParamLimits

0x4810,	// (0x000a15f8) postcard_address_pane_t1

0x4801,	// (0x000a15e9) popup_call3_audio_in_window_ParamLimits

0x4801,	// (0x000a15e9) popup_call3_audio_in_window

0x46df,	// (0x000a14c7) bg_popup_call3_in_pane_ParamLimits

0x46df,	// (0x000a14c7) bg_popup_call3_in_pane

0x4747,	// (0x000a152f) popup_call3_audio_in_window_g1_ParamLimits

0x4747,	// (0x000a152f) popup_call3_audio_in_window_g1

0x475f,	// (0x000a1547) popup_call3_audio_in_window_g2_ParamLimits

0x475f,	// (0x000a1547) popup_call3_audio_in_window_g2

0x4777,	// (0x000a155f) popup_call3_audio_in_window_g3_ParamLimits

0x4777,	// (0x000a155f) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000ac3fa) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000ac3fa) popup_call3_audio_in_window_g

0x479f,	// (0x000a1587) popup_call3_audio_in_window_t1_ParamLimits

0x479f,	// (0x000a1587) popup_call3_audio_in_window_t1

0x47c7,	// (0x000a15af) popup_call3_audio_in_window_t2_ParamLimits

0x47c7,	// (0x000a15af) popup_call3_audio_in_window_t2

0x47ef,	// (0x000a15d7) popup_call3_audio_in_window_t3_ParamLimits

0x47ef,	// (0x000a15d7) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000ac403) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000ac403) popup_call3_audio_in_window_t

0xb40b,	// (0x000a81f3) bg_popup_call3_rect_pane

0xc627,	// (0x000a940f) bg_popup_call3_rect_pane_g1

0xa95c,	// (0x000a7744) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x000a9417) bg_popup_call3_rect_pane_g3

0xc637,	// (0x000a941f) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x000a9427) bg_popup_call3_rect_pane_g5

0xc647,	// (0x000a942f) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x000a9437) bg_popup_call3_rect_pane_g7

0x39f4,	// (0x000a07dc) mup_visualizer_osc_pane

0xb4ca,	// (0x000a82b2) mup_visualizer_spec_pane

0x46ff,	// (0x000a14e7) call3_video_qcif_pane_ParamLimits

0x46ff,	// (0x000a14e7) call3_video_qcif_pane

0x4711,	// (0x000a14f9) call3_video_qcif_uncrop_pane_ParamLimits

0x4711,	// (0x000a14f9) call3_video_qcif_uncrop_pane

0x4721,	// (0x000a1509) call3_video_subqcif_pane_ParamLimits

0x4721,	// (0x000a1509) call3_video_subqcif_pane

0x4735,	// (0x000a151d) call3_video_subqcif_uncrop_pane_ParamLimits

0x4735,	// (0x000a151d) call3_video_subqcif_uncrop_pane

0x478f,	// (0x000a1577) popup_call3_audio_in_window_g4_ParamLimits

0x478f,	// (0x000a1577) popup_call3_audio_in_window_g4

0x46aa,	// (0x000a1492) mup_spec_half_pane

0x46b3,	// (0x000a149b) mup_spec_half_pane_cp

0xc8d3,	// (0x000a96bb) mup_osc_middle_pane

0xc8dc,	// (0x000a96c4) mup_visualizer_osc_pane_g1

0x468a,	// (0x000a1472) mup_spec_bar_pane_ParamLimits

0x468a,	// (0x000a1472) mup_spec_bar_pane

0xc8c0,	// (0x000a96a8) mup_spec_bar_pane_g1

0xc8ca,	// (0x000a96b2) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac3ee) mup_spec_bar_pane_g

0x13e9,	// (0x0009e1d1) aid_cale_week_size_cell_pane_ParamLimits

0x1403,	// (0x0009e1eb) bg_cale_heading_pane_ParamLimits

0xa990,	// (0x000a7778) bg_cale_pane_cp01_ParamLimits

0x142c,	// (0x0009e214) cale_week_corner_pane_ParamLimits

0x144b,	// (0x0009e233) cale_week_day_heading_pane_ParamLimits

0x1479,	// (0x0009e261) cale_week_scroll_pane_g1_ParamLimits

0x149d,	// (0x0009e285) cale_week_scroll_pane_g2_ParamLimits

0x14b5,	// (0x0009e29d) cale_week_scroll_pane_g3_ParamLimits

0x14cd,	// (0x0009e2b5) cale_week_scroll_pane_g4_ParamLimits

0x14e5,	// (0x0009e2cd) cale_week_scroll_pane_g5_ParamLimits

0x14fd,	// (0x0009e2e5) cale_week_scroll_pane_g6_ParamLimits

0x151d,	// (0x0009e305) cale_week_scroll_pane_g7_ParamLimits

0x153d,	// (0x0009e325) cale_week_scroll_pane_g8_ParamLimits

0x155d,	// (0x0009e345) cale_week_scroll_pane_g9_ParamLimits

0x157a,	// (0x0009e362) cale_week_scroll_pane_g10_ParamLimits

0x1597,	// (0x0009e37f) cale_week_scroll_pane_g11_ParamLimits

0x15b4,	// (0x0009e39c) cale_week_scroll_pane_g12_ParamLimits

0x15d1,	// (0x0009e3b9) cale_week_scroll_pane_g13_ParamLimits

0x15f6,	// (0x0009e3de) cale_week_scroll_pane_g14_ParamLimits

0x161f,	// (0x0009e407) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000abf94) cale_week_scroll_pane_g_ParamLimits

0x1668,	// (0x0009e450) cale_week_time_pane_ParamLimits

0x1688,	// (0x0009e470) grid_cale_week_pane_ParamLimits

0xa9ae,	// (0x000a7796) listscroll_cale_week_pane_t1

0xa9c0,	// (0x000a77a8) scroll_pane_cp08_ParamLimits

0x25ea,	// (0x0009f3d2) cale_month_corner_pane_ParamLimits

0xad77,	// (0x000a7b5f) cale_month_pane_t1

0x2a8e,	// (0x0009f876) cale_month_week_pane_ParamLimits

0xb146,	// (0x000a7f2e) popup_call_status_window_g1_ParamLimits

0x3356,	// (0x000a013e) popup_call_status_window_g2_ParamLimits

0x3362,	// (0x000a014a) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000ac13e) popup_call_status_window_g_ParamLimits

0xb1ad,	// (0x000a7f95) aid_call2_pane

0x3c8f,	// (0x000a0a77) msg_header_pane_g1

0x3e1a,	// (0x000a0c02) postcard_address2_pane_ParamLimits

0x3e1a,	// (0x000a0c02) postcard_address2_pane

0x3e28,	// (0x000a0c10) postcard_message2_pane_ParamLimits

0x3e28,	// (0x000a0c10) postcard_message2_pane

0x4631,	// (0x000a1419) message2_row_pane_ParamLimits

0x4631,	// (0x000a1419) message2_row_pane

0x464b,	// (0x000a1433) address2_row_pane_ParamLimits

0x464b,	// (0x000a1433) address2_row_pane

0xc88e,	// (0x000a9676) postcard_message2_row_pane_g1

0xc896,	// (0x000a967e) postcard_message2_row_pane_t1

0xc88e,	// (0x000a9676) address2_row_pane_g1

0xc896,	// (0x000a967e) address2_row_pane_t1

0x1bf0,	// (0x0009e9d8) aid_size_cell_vorec

0xa077,	// (0x000a6e5f) main_rss_pane

0x465e,	// (0x000a1446) rss_list_single_pane_ParamLimits

0x465e,	// (0x000a1446) rss_list_single_pane

0xc8a4,	// (0x000a968c) rss_list_single_pane_t1

0xc8b2,	// (0x000a969a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000ac3e9) rss_list_single_pane_t

0xa077,	// (0x000a6e5f) main_camera2_pane

0xa077,	// (0x000a6e5f) main_video2_pane

0x488b,	// (0x000a1673) cams_zoom_pane_cp2_ParamLimits

0x488b,	// (0x000a1673) cams_zoom_pane_cp2

0x4897,	// (0x000a167f) image2_vga_pane_ParamLimits

0x4897,	// (0x000a167f) image2_vga_pane

0x48a6,	// (0x000a168e) main_camera2_pane_g1_ParamLimits

0x48a6,	// (0x000a168e) main_camera2_pane_g1

0x48b2,	// (0x000a169a) main_camera2_pane_g2_ParamLimits

0x48b2,	// (0x000a169a) main_camera2_pane_g2

0x48be,	// (0x000a16a6) main_camera2_pane_g3_ParamLimits

0x48be,	// (0x000a16a6) main_camera2_pane_g3

0x48ca,	// (0x000a16b2) main_camera2_pane_g4_ParamLimits

0x48ca,	// (0x000a16b2) main_camera2_pane_g4

0x48d6,	// (0x000a16be) main_camera2_pane_g5_ParamLimits

0x48d6,	// (0x000a16be) main_camera2_pane_g5

0x48e2,	// (0x000a16ca) main_camera2_pane_g6_ParamLimits

0x48e2,	// (0x000a16ca) main_camera2_pane_g6

0x48ee,	// (0x000a16d6) main_camera2_pane_g7_ParamLimits

0x48ee,	// (0x000a16d6) main_camera2_pane_g7

0x48fa,	// (0x000a16e2) main_camera2_pane_g8_ParamLimits

0x48fa,	// (0x000a16e2) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000ac40a) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000ac40a) main_camera2_pane_g

0x4912,	// (0x000a16fa) main_camera2_pane_t1_ParamLimits

0x4912,	// (0x000a16fa) main_camera2_pane_t1

0x4924,	// (0x000a170c) main_camera2_pane_t2_ParamLimits

0x4924,	// (0x000a170c) main_camera2_pane_t2

0x4936,	// (0x000a171e) main_camera2_pane_t3_ParamLimits

0x4936,	// (0x000a171e) main_camera2_pane_t3

0x4948,	// (0x000a1730) main_camera2_pane_t4_ParamLimits

0x4948,	// (0x000a1730) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000ac41d) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000ac41d) main_camera2_pane_t

0x49a5,	// (0x000a178d) cams_zoom_pane_cp4_ParamLimits

0x49a5,	// (0x000a178d) cams_zoom_pane_cp4

0x49b5,	// (0x000a179d) image2_cif_pane_ParamLimits

0x49b5,	// (0x000a179d) image2_cif_pane

0x49ca,	// (0x000a17b2) image2_subqcif_pane_ParamLimits

0x49ca,	// (0x000a17b2) image2_subqcif_pane

0x49d9,	// (0x000a17c1) main_video2_pane_g1_ParamLimits

0x49d9,	// (0x000a17c1) main_video2_pane_g1

0x49eb,	// (0x000a17d3) main_video2_pane_g2_ParamLimits

0x49eb,	// (0x000a17d3) main_video2_pane_g2

0x49fb,	// (0x000a17e3) main_video2_pane_g3_ParamLimits

0x49fb,	// (0x000a17e3) main_video2_pane_g3

0x4a0b,	// (0x000a17f3) main_video2_pane_g4_ParamLimits

0x4a0b,	// (0x000a17f3) main_video2_pane_g4

0x4a1b,	// (0x000a1803) main_video2_pane_g5_ParamLimits

0x4a1b,	// (0x000a1803) main_video2_pane_g5

0x4a2b,	// (0x000a1813) main_video2_pane_g6_ParamLimits

0x4a2b,	// (0x000a1813) main_video2_pane_g6

0x0005,

0xf644,	// (0x000ac42c) main_video2_pane_g_ParamLimits

0xf644,	// (0x000ac42c) main_video2_pane_g

0x4a3d,	// (0x000a1825) main_video2_pane_t1_ParamLimits

0x4a3d,	// (0x000a1825) main_video2_pane_t1

0x4a57,	// (0x000a183f) main_video2_pane_t2_ParamLimits

0x4a57,	// (0x000a183f) main_video2_pane_t2

0x4a7d,	// (0x000a1865) main_video2_pane_t3_ParamLimits

0x4a7d,	// (0x000a1865) main_video2_pane_t3

0x0002,

0xf651,	// (0x000ac439) main_video2_pane_t_ParamLimits

0xf651,	// (0x000ac439) main_video2_pane_t

0x4379,	// (0x000a1161) call_muted_g2

0x0001,

0xf5f3,	// (0x000ac3db) call_muted_g

0xa077,	// (0x000a6e5f) main_mup2_pane

0xc913,	// (0x000a96fb) main_mup2_pane_g1_ParamLimits

0xc913,	// (0x000a96fb) main_mup2_pane_g1

0x4aa3,	// (0x000a188b) main_mup2_pane_g2_ParamLimits

0x4aa3,	// (0x000a188b) main_mup2_pane_g2

0x4d35,	// (0x000a1b1d) main_mup_pane_g13_cp1

0x4d3d,	// (0x000a1b25) mup_volume_pane_cp1

0x4ac5,	// (0x000a18ad) main_mup2_pane_g4_ParamLimits

0x4ac5,	// (0x000a18ad) main_mup2_pane_g4

0x4ada,	// (0x000a18c2) main_mup2_pane_g5_ParamLimits

0x4ada,	// (0x000a18c2) main_mup2_pane_g5

0x4aef,	// (0x000a18d7) main_mup2_pane_g6_ParamLimits

0x4aef,	// (0x000a18d7) main_mup2_pane_g6

0x4b04,	// (0x000a18ec) main_mup2_pane_g7_ParamLimits

0x4b04,	// (0x000a18ec) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000ac440) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000ac440) main_mup2_pane_g

0x4b20,	// (0x000a1908) main_mup2_pane_t1_ParamLimits

0x4b20,	// (0x000a1908) main_mup2_pane_t1

0x4b37,	// (0x000a191f) main_mup2_pane_t2_ParamLimits

0x4b37,	// (0x000a191f) main_mup2_pane_t2

0x4b4e,	// (0x000a1936) main_mup2_pane_t3_ParamLimits

0x4b4e,	// (0x000a1936) main_mup2_pane_t3

0x4b65,	// (0x000a194d) main_mup2_pane_t4_ParamLimits

0x4b65,	// (0x000a194d) main_mup2_pane_t4

0x4b7f,	// (0x000a1967) main_mup2_pane_t5_ParamLimits

0x4b7f,	// (0x000a1967) main_mup2_pane_t5

0x4b99,	// (0x000a1981) main_mup2_pane_t6_ParamLimits

0x4b99,	// (0x000a1981) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000ac44f) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000ac44f) main_mup2_pane_t

0x4bd1,	// (0x000a19b9) mup2_visualizer_pane_ParamLimits

0x4bd1,	// (0x000a19b9) mup2_visualizer_pane

0x4c07,	// (0x000a19ef) mup_progress_pane_cp_ParamLimits

0x4c07,	// (0x000a19ef) mup_progress_pane_cp

0x4d20,	// (0x000a1b08) mup_volume_pane_cp_ParamLimits

0x4d20,	// (0x000a1b08) mup_volume_pane_cp

0x4c20,	// (0x000a1a08) mup2_visualizer_pane_g1_ParamLimits

0x4c20,	// (0x000a1a08) mup2_visualizer_pane_g1

0xc91f,	// (0x000a9707) mup2_visualizer_pane_g2_ParamLimits

0xc91f,	// (0x000a9707) mup2_visualizer_pane_g2

0x4c35,	// (0x000a1a1d) mup2_visualizer_pane_g3_ParamLimits

0x4c35,	// (0x000a1a1d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000ac45c) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000ac45c) mup2_visualizer_pane_g

0xb6f3,	// (0x000a84db) aid_size_cell_fmradio

0x448f,	// (0x000a1277) aid_height_parent_landcape

0xabc9,	// (0x000a79b1) wml_content_pane_cp

0xabd1,	// (0x000a79b9) wml_tabs_pane

0xabda,	// (0x000a79c2) popup_wml_miniature_window

0xabe2,	// (0x000a79ca) scroll_pane_cp021

0xabf6,	// (0x000a79de) wml_content_pane_comp8

0xa077,	// (0x000a6e5f) bg_popup_sub_pane_cp05

0xc93d,	// (0x000a9725) popup_wml_miniature_window_g1

0xc945,	// (0x000a972d) wml_miniature_view_pane

0x4c43,	// (0x000a1a2b) aid_size_wml_view

0x4c4b,	// (0x000a1a33) wml_miniature_view_pane_g1

0x4c54,	// (0x000a1a3c) wml_miniature_view_pane_g2

0x4c5d,	// (0x000a1a45) wml_miniature_view_pane_g3

0x4c65,	// (0x000a1a4d) wml_miniature_view_pane_g4

0x4c6d,	// (0x000a1a55) wml_miniature_view_pane_g5

0x4c75,	// (0x000a1a5d) wml_miniature_view_pane_g6

0x4c7d,	// (0x000a1a65) wml_miniature_view_pane_g7

0x4c85,	// (0x000a1a6d) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000ac463) wml_miniature_view_pane_g

0xc913,	// (0x000a96fb) background_graphic_ParamLimits

0xc913,	// (0x000a96fb) background_graphic

0xc94d,	// (0x000a9735) wml_tabs_2_pane

0xc956,	// (0x000a973e) wml_tabs_3_pane_ParamLimits

0xc956,	// (0x000a973e) wml_tabs_3_pane

0xc968,	// (0x000a9750) wml_tabs_4_pane_ParamLimits

0xc968,	// (0x000a9750) wml_tabs_4_pane

0xc97e,	// (0x000a9766) wml_tabs_5_pane_ParamLimits

0xc97e,	// (0x000a9766) wml_tabs_5_pane

0xc998,	// (0x000a9780) wml_tabs_pane_g2_ParamLimits

0xc998,	// (0x000a9780) wml_tabs_pane_g2

0xc9ac,	// (0x000a9794) wml_tabs_pane_g3_ParamLimits

0xc9ac,	// (0x000a9794) wml_tabs_pane_g3

0x4c8d,	// (0x000a1a75) wml_tabs_2_active_pane_ParamLimits

0x4c8d,	// (0x000a1a75) wml_tabs_2_active_pane

0x4c9f,	// (0x000a1a87) wml_tabs_2_passive_pane_ParamLimits

0x4c9f,	// (0x000a1a87) wml_tabs_2_passive_pane

0x4cb1,	// (0x000a1a99) wml_tabs_3_active_pane_cp_ParamLimits

0x4cb1,	// (0x000a1a99) wml_tabs_3_active_pane_cp

0x4cc4,	// (0x000a1aac) wml_tabs_3_passive_pane_ParamLimits

0x4cc4,	// (0x000a1aac) wml_tabs_3_passive_pane

0x4cd5,	// (0x000a1abd) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cd5,	// (0x000a1abd) wml_tabs_3_passive_pane_cp

0x4cea,	// (0x000a1ad2) tabs_4_active_pane

0x4cf2,	// (0x000a1ada) tabs_4_passive_pane

0x4cfa,	// (0x000a1ae2) tabs_4_passive_pane_cp

0x4d02,	// (0x000a1aea) tabs_4_passive_pane_cp2

0x4254,	// (0x000a103c) aid_height_text

0x39bd,	// (0x000a07a5) mup_volume_cont_pane_ParamLimits

0x39bd,	// (0x000a07a5) mup_volume_cont_pane

0x0f29,	// (0x0009dd11) aid_size_cell_pinb

0x0f33,	// (0x0009dd1b) aid_size_list_pinb

0x4bf0,	// (0x000a19d8) mup2_volume_cont_pane_ParamLimits

0x4bf0,	// (0x000a19d8) mup2_volume_cont_pane

0x4d0c,	// (0x000a1af4) mup2_volume_cont_pane_g1_ParamLimits

0x4d0c,	// (0x000a1af4) mup2_volume_cont_pane_g1

0x0b8b,	// (0x0009d973) aid_size_cell_touch_ParamLimits

0x0b8b,	// (0x0009d973) aid_size_cell_touch

0x0e13,	// (0x0009dbfb) touch_pane_ParamLimits

0x0e13,	// (0x0009dbfb) touch_pane

0x9c13,	// (0x000a69fb) main_rss2_pane

0xc9c9,	// (0x000a97b1) listscroll_rss2_pane

0xc9d2,	// (0x000a97ba) rss2_navigation_pane

0xc9da,	// (0x000a97c2) list_rss2_pane

0xb2d1,	// (0x000a80b9) scroll_pane_cp22

0xc9e2,	// (0x000a97ca) rss2_navigation_pane_g1

0xc9eb,	// (0x000a97d3) rss2_navigation_pane_g2

0xc9f3,	// (0x000a97db) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000ac474) rss2_navigation_pane_g

0xc9fb,	// (0x000a97e3) rss2_navigation_pane_t1

0x4d45,	// (0x000a1b2d) rss2_list_single_pane_ParamLimits

0x4d45,	// (0x000a1b2d) rss2_list_single_pane

0xca09,	// (0x000a97f1) rss2_list_single_pane_t2

0xca17,	// (0x000a97ff) rss2_list_single_pane_t3_ParamLimits

0xca17,	// (0x000a97ff) rss2_list_single_pane_t3

0xca34,	// (0x000a981c) rss2_list_single_pane_t4

0x3117,	// (0x0009feff) smil_status_pane_g1

0xa2ce,	// (0x000a70b6) main_image2_pane_ParamLimits

0xa2ce,	// (0x000a70b6) main_image2_pane

0x4906,	// (0x000a16ee) main_camera2_pane_g9_ParamLimits

0x4906,	// (0x000a16ee) main_camera2_pane_g9

0x495a,	// (0x000a1742) main_camera2_pane_t5_ParamLimits

0x495a,	// (0x000a1742) main_camera2_pane_t5

0x496c,	// (0x000a1754) main_camera2_pane_t6_ParamLimits

0x496c,	// (0x000a1754) main_camera2_pane_t6

0x4d68,	// (0x000a1b50) main_image2_pane_g1_ParamLimits

0x4d68,	// (0x000a1b50) main_image2_pane_g1

0x3ff1,	// (0x000a0dd9) smil2_video_pane_ParamLimits

0x3ff1,	// (0x000a0dd9) smil2_video_pane

0x0bcf,	// (0x0009d9b7) aid_zoom_text_primary_cp

0x9c5a,	// (0x000a6a42) popup_preview_fixed_window

0xab32,	// (0x000a791a) im_reading_pane_g1

0x4850,	// (0x000a1638) cams2_bc_adjust_pane_cp_ParamLimits

0x4850,	// (0x000a1638) cams2_bc_adjust_pane_cp

0x4997,	// (0x000a177f) cams2_bc_adjust_pane_ParamLimits

0x4997,	// (0x000a177f) cams2_bc_adjust_pane

0xd094,	// (0x000a9e7c) cams2_bc_adjust_pane_g1

0x4d74,	// (0x000a1b5c) cams2_slider_pane

0x4d7d,	// (0x000a1b65) cams2_slider_pane_g1

0x4d86,	// (0x000a1b6e) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000ac47b) cams2_slider_pane_g

0x102e,	// (0x0009de16) calc_display_pane_ParamLimits

0x104c,	// (0x0009de34) calc_paper_pane_ParamLimits

0x1068,	// (0x0009de50) grid_calc_pane_ParamLimits

0x33c0,	// (0x000a01a8) popup_clock_digital_window_t1_ParamLimits

0xb690,	// (0x000a8478) main_image_pane_t1

0x1014,	// (0x0009ddfc) aid_size_cell_calc_ParamLimits

0x1014,	// (0x0009ddfc) aid_size_cell_calc

0x44c1,	// (0x000a12a9) popup_blid_sat_info2_window_ParamLimits

0x44c1,	// (0x000a12a9) popup_blid_sat_info2_window

0xca4a,	// (0x000a9832) aid_size_cell_blid

0xca52,	// (0x000a983a) bg_popup_window_pane_cp07

0xca75,	// (0x000a985d) grid_popup_blid_pane

0xca7f,	// (0x000a9867) heading_pane_cp05_ParamLimits

0xca7f,	// (0x000a9867) heading_pane_cp05

0xcb49,	// (0x000a9931) cell_popup_blid_pane_ParamLimits

0xcb49,	// (0x000a9931) cell_popup_blid_pane

0xcb73,	// (0x000a995b) cell_popup_blid_pane_g1

0xcb7b,	// (0x000a9963) cell_popup_blid_pane_t1

0x4bb6,	// (0x000a199e) mup2_indicator_pane_ParamLimits

0x4bb6,	// (0x000a199e) mup2_indicator_pane

0xb40b,	// (0x000a81f3) mup2_visualizer_osc_pane

0xc92b,	// (0x000a9713) mup2_visualizer_spec_pane_ParamLimits

0xc92b,	// (0x000a9713) mup2_visualizer_spec_pane

0x4da0,	// (0x000a1b88) mup2_spec_half_pane

0x4da9,	// (0x000a1b91) mup2_spec_half_pane_cp

0x4db3,	// (0x000a1b9b) mup2_spec_bar_pane_ParamLimits

0x4db3,	// (0x000a1b9b) mup2_spec_bar_pane

0xc8c0,	// (0x000a96a8) mup2_spec_bar_pane_g1

0xc8ca,	// (0x000a96b2) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000ac3ee) mup2_spec_bar_pane_g

0x4dd2,	// (0x000a1bba) mup2_osc_middle_pane

0xc8dc,	// (0x000a96c4) mup2_visualizer_osc_pane_g1

0x9c84,	// (0x000a6a6c) popup_number_entry_window_t1_ParamLimits

0x9c97,	// (0x000a6a7f) popup_number_entry_window_t2_ParamLimits

0x9ca9,	// (0x000a6a91) popup_number_entry_window_t3_ParamLimits

0x0e6a,	// (0x0009dc52) popup_number_entry_window_t5_ParamLimits

0x0e6a,	// (0x0009dc52) popup_number_entry_window_t5

0xf0c6,	// (0x000abeae) popup_number_entry_window_t_ParamLimits

0x9cbb,	// (0x000a6aa3) text_title_cp2_ParamLimits

0x3cde,	// (0x000a0ac6) aid_hotspot_pointer_text2_pane

0x3d78,	// (0x000a0b60) main_viewer_pane_g9_ParamLimits

0x3d78,	// (0x000a0b60) main_viewer_pane_g9

0xad77,	// (0x000a7b5f) cale_month_pane_t1_ParamLimits

0xad9d,	// (0x000a7b85) bg_cale_pane_ParamLimits

0xadb5,	// (0x000a7b9d) list_cale_pane_ParamLimits

0xadc6,	// (0x000a7bae) listscroll_cale_day_pane_t1

0xadd8,	// (0x000a7bc0) scroll_pane_cp09_ParamLimits

0x39fc,	// (0x000a07e4) main_mup_eq_pane_t1_ParamLimits

0x39fc,	// (0x000a07e4) main_mup_eq_pane_t1

0x3a18,	// (0x000a0800) main_mup_eq_pane_t2_ParamLimits

0x3a18,	// (0x000a0800) main_mup_eq_pane_t2

0x3a34,	// (0x000a081c) main_mup_eq_pane_t3_ParamLimits

0x3a34,	// (0x000a081c) main_mup_eq_pane_t3

0x3a4e,	// (0x000a0836) main_mup_eq_pane_t4_ParamLimits

0x3a4e,	// (0x000a0836) main_mup_eq_pane_t4

0x3a68,	// (0x000a0850) main_mup_eq_pane_t5_ParamLimits

0x3a68,	// (0x000a0850) main_mup_eq_pane_t5

0x3a82,	// (0x000a086a) main_mup_eq_pane_t6_ParamLimits

0x3a82,	// (0x000a086a) main_mup_eq_pane_t6

0x3a98,	// (0x000a0880) main_mup_eq_pane_t7_ParamLimits

0x3a98,	// (0x000a0880) main_mup_eq_pane_t7

0x3aae,	// (0x000a0896) main_mup_eq_pane_t8_ParamLimits

0x3aae,	// (0x000a0896) main_mup_eq_pane_t8

0x3ac4,	// (0x000a08ac) main_mup_eq_pane_t9_ParamLimits

0x3ac4,	// (0x000a08ac) main_mup_eq_pane_t9

0x3ae0,	// (0x000a08c8) main_mup_eq_pane_t10_ParamLimits

0x3ae0,	// (0x000a08c8) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000ac23d) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000ac23d) main_mup_eq_pane_t

0x3ba5,	// (0x000a098d) mup_equalizer_pane_cp5_ParamLimits

0x3bbd,	// (0x000a09a5) mup_equalizer_pane_cp6_ParamLimits

0x3bd5,	// (0x000a09bd) mup_equalizer_pane_cp7_ParamLimits

0x9c13,	// (0x000a69fb) main_gallery_pane

0xc8e5,	// (0x000a96cd) smil2_volume_pane

0xc8ed,	// (0x000a96d5) smil_status_volume_pane_g1_ParamLimits

0xc900,	// (0x000a96e8) smil_status_volume_pane_g2_ParamLimits

0x46bb,	// (0x000a14a3) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000ac3f3) smil_status_volume_pane_g_ParamLimits

0xca52,	// (0x000a983a) bg_popup_window_pane_cp07_ParamLimits

0xca60,	// (0x000a9848) blid_firmament_pane

0x4ddb,	// (0x000a1bc3) aid_size_cell_gallery_ParamLimits

0x4ddb,	// (0x000a1bc3) aid_size_cell_gallery

0x4de9,	// (0x000a1bd1) grid_gallery_pane_ParamLimits

0x4de9,	// (0x000a1bd1) grid_gallery_pane

0x4df9,	// (0x000a1be1) cell_gallery_pane_ParamLimits

0x4df9,	// (0x000a1be1) cell_gallery_pane

0xcb89,	// (0x000a9971) bg_cell_gallery_focus_pane_ParamLimits

0xcb89,	// (0x000a9971) bg_cell_gallery_focus_pane

0xcb9b,	// (0x000a9983) cell_gallery_pane_g1_ParamLimits

0xcb9b,	// (0x000a9983) cell_gallery_pane_g1

0x4e3f,	// (0x000a1c27) cell_gallery_pane_g2_ParamLimits

0x4e3f,	// (0x000a1c27) cell_gallery_pane_g2

0x4e4c,	// (0x000a1c34) cell_gallery_pane_g3_ParamLimits

0x4e4c,	// (0x000a1c34) cell_gallery_pane_g3

0xcba7,	// (0x000a998f) cell_gallery_pane_g4_ParamLimits

0xcba7,	// (0x000a998f) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000ac4a1) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000ac4a1) cell_gallery_pane_g

0xcbb3,	// (0x000a999b) bg_cell_gallery_focus_pane_g1

0xcbbb,	// (0x000a99a3) bg_cell_gallery_focus_pane_g2

0xcbc3,	// (0x000a99ab) bg_cell_gallery_focus_pane_g3

0xcbcb,	// (0x000a99b3) bg_cell_gallery_focus_pane_g4

0xcbd3,	// (0x000a99bb) bg_cell_gallery_focus_pane_g5

0xcbdb,	// (0x000a99c3) bg_cell_gallery_focus_pane_g6

0xcbe3,	// (0x000a99cb) bg_cell_gallery_focus_pane_g7

0xcbeb,	// (0x000a99d3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000ac4aa) bg_cell_gallery_focus_pane_g

0xcbf3,	// (0x000a99db) aid_firma_cardinal

0xcc07,	// (0x000a99ef) blid_firmament_pane_t1

0xcc1e,	// (0x000a9a06) blid_firmament_pane_t2

0xcc35,	// (0x000a9a1d) blid_firmament_pane_t3

0xcc4c,	// (0x000a9a34) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000ac4bb) blid_firmament_pane_t

0xcc63,	// (0x000a9a4b) blid_sat_info_pane

0xcc73,	// (0x000a9a5b) blid_sat_info_pane_g1

0xcc73,	// (0x000a9a5b) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000ac4c4) blid_sat_info_pane_g

0xcc7d,	// (0x000a9a65) blid_sat_info_pane_t1

0xcc8b,	// (0x000a9a73) smil2_volume_content_pane

0xcc94,	// (0x000a9a7c) smil2_volume_pane_g1

0xcc9c,	// (0x000a9a84) smil2_volume_content_pane_g1

0xcca5,	// (0x000a9a8d) smil2_volume_content_pane_g2

0xccae,	// (0x000a9a96) smil2_volume_content_pane_g3

0xccb7,	// (0x000a9a9f) smil2_volume_content_pane_g4

0xccc0,	// (0x000a9aa8) smil2_volume_content_pane_g5

0xccc9,	// (0x000a9ab1) smil2_volume_content_pane_g6

0xccd2,	// (0x000a9aba) smil2_volume_content_pane_g7

0xccdb,	// (0x000a9ac3) smil2_volume_content_pane_g8

0xcce4,	// (0x000a9acc) smil2_volume_content_pane_g9

0xcced,	// (0x000a9ad5) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000ac4c9) smil2_volume_content_pane_g

0x174b,	// (0x0009e533) cale_week_day_heading_pane_t1_ParamLimits

0x1793,	// (0x0009e57b) cale_week_day_heading_pane_t2_ParamLimits

0x17e0,	// (0x0009e5c8) cale_week_day_heading_pane_t3_ParamLimits

0x182d,	// (0x0009e615) cale_week_day_heading_pane_t4_ParamLimits

0x187a,	// (0x0009e662) cale_week_day_heading_pane_t5_ParamLimits

0x18c7,	// (0x0009e6af) cale_week_day_heading_pane_t6_ParamLimits

0x1914,	// (0x0009e6fc) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000abfb5) cale_week_day_heading_pane_t_ParamLimits

0xa9e2,	// (0x000a77ca) bg_cale_side_pane_ParamLimits

0x195c,	// (0x0009e744) cale_week_time_pane_t1_ParamLimits

0x19a0,	// (0x0009e788) cale_week_time_pane_t2_ParamLimits

0x19e4,	// (0x0009e7cc) cale_week_time_pane_t3_ParamLimits

0x1a28,	// (0x0009e810) cale_week_time_pane_t4_ParamLimits

0x1a6c,	// (0x0009e854) cale_week_time_pane_t5_ParamLimits

0x1ab0,	// (0x0009e898) cale_week_time_pane_t6_ParamLimits

0x1af4,	// (0x0009e8dc) cale_week_time_pane_t7_ParamLimits

0x1b40,	// (0x0009e928) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000abfc4) cale_week_time_pane_t_ParamLimits

0x1b8e,	// (0x0009e976) cell_cale_week_pane_g2_ParamLimits

0xa9e2,	// (0x000a77ca) bg_cale_side_pane_cp01_ParamLimits

0x2ef4,	// (0x0009fcdc) cale_month_week_pane_t1_ParamLimits

0x2f0d,	// (0x0009fcf5) cale_month_week_pane_t2_ParamLimits

0x2f26,	// (0x0009fd0e) cale_month_week_pane_t3_ParamLimits

0x2f3f,	// (0x0009fd27) cale_month_week_pane_t4_ParamLimits

0x2f58,	// (0x0009fd40) cale_month_week_pane_t5_ParamLimits

0x2f73,	// (0x0009fd5b) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000ac09d) cale_month_week_pane_t_ParamLimits

0x30e0,	// (0x0009fec8) cell_cale_month_pane_g1_ParamLimits

0x9c13,	// (0x000a69fb) main_cale_event_viewer_pane

0x9c13,	// (0x000a69fb) listscroll_cale_event_viewer_pane

0xccf6,	// (0x000a9ade) list_cale_ev_pane

0xccfe,	// (0x000a9ae6) scroll_pane_cp023

0x4e59,	// (0x000a1c41) field_cale_ev_pane_ParamLimits

0x4e59,	// (0x000a1c41) field_cale_ev_pane

0xcd0a,	// (0x000a9af2) field_cale_ev_content_pane_ParamLimits

0xcd0a,	// (0x000a9af2) field_cale_ev_content_pane

0xcd16,	// (0x000a9afe) field_cale_ev_pane_g1_ParamLimits

0xcd16,	// (0x000a9afe) field_cale_ev_pane_g1

0xcd22,	// (0x000a9b0a) field_cale_ev_pane_g2_ParamLimits

0xcd22,	// (0x000a9b0a) field_cale_ev_pane_g2

0xcd3a,	// (0x000a9b22) field_cale_ev_pane_g3_ParamLimits

0xcd3a,	// (0x000a9b22) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000ac4de) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000ac4de) field_cale_ev_pane_g

0xcd52,	// (0x000a9b3a) field_cale_ev_pane_t1_ParamLimits

0xcd52,	// (0x000a9b3a) field_cale_ev_pane_t1

0x4e7d,	// (0x000a1c65) field_cale_ev_content_pane_t1_ParamLimits

0x4e7d,	// (0x000a1c65) field_cale_ev_content_pane_t1

0xb576,	// (0x000a835e) bg_button_pane_cp01

0x13cd,	// (0x0009e1b5) listscroll_cale_week_pane_ParamLimits

0x13df,	// (0x0009e1c7) popup_toolbar_window_cp01

0xa9ae,	// (0x000a7796) listscroll_cale_week_pane_t1_ParamLimits

0x13cd,	// (0x0009e1b5) listscroll_cale_day_pane_ParamLimits

0x13df,	// (0x0009e1c7) popup_toolbar_window_cp02

0xadc6,	// (0x000a7bae) listscroll_cale_day_pane_t1_ParamLimits

0x13cd,	// (0x0009e1b5) main_cale_month_pane_ParamLimits

0x45a5,	// (0x000a138d) popup_toolbar_window_cp03_ParamLimits

0x45a5,	// (0x000a138d) popup_toolbar_window_cp03

0x3f01,	// (0x000a0ce9) main_image_pane_g2_ParamLimits

0x3f01,	// (0x000a0ce9) main_image_pane_g2

0x3f0d,	// (0x000a0cf5) main_image_pane_g3_ParamLimits

0x3f0d,	// (0x000a0cf5) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000ac2cf) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000ac2cf) main_image_pane_g

0xb690,	// (0x000a8478) main_image_pane_t1_ParamLimits

0x3f19,	// (0x000a0d01) main_image_pane_t2_ParamLimits

0x3f19,	// (0x000a0d01) main_image_pane_t2

0x3f2b,	// (0x000a0d13) main_image_pane_t3_ParamLimits

0x3f2b,	// (0x000a0d13) main_image_pane_t3

0x3f3d,	// (0x000a0d25) main_image_pane_t4_ParamLimits

0x3f3d,	// (0x000a0d25) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000ac2d6) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000ac2d6) main_image_pane_t

0x3f4f,	// (0x000a0d37) popup_image_details_window_cp01

0x3f59,	// (0x000a0d41) popup_toobar_trans_pane_cp01_ParamLimits

0x3f59,	// (0x000a0d41) popup_toobar_trans_pane_cp01

0x4516,	// (0x000a12fe) popup_image_details_window_ParamLimits

0x4516,	// (0x000a12fe) popup_image_details_window

0xc844,	// (0x000a962c) popup_image_focus_window

0x4842,	// (0x000a162a) camera2_autofocus_pane_ParamLimits

0x4842,	// (0x000a162a) camera2_autofocus_pane

0x9c13,	// (0x000a69fb) bg_popup_sub_pane_cp06

0xcd69,	// (0x000a9b51) popup_image_focus_window_g1

0xcd71,	// (0x000a9b59) popup_image_focus_window_g2

0xcd79,	// (0x000a9b61) popup_image_focus_window_g3

0xcd81,	// (0x000a9b69) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000ac4e5) popup_image_focus_window_g

0xcd89,	// (0x000a9b71) popup_image_focus_window_t1

0xcd97,	// (0x000a9b7f) popup_image_focus_window_t2

0xcda7,	// (0x000a9b8f) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000ac4ee) popup_image_focus_window_t

0xcdb5,	// (0x000a9b9d) camera2_autofocus_pane_g1

0xa2ce,	// (0x000a70b6) bg_tb_trans_pane_cp01

0xcdc3,	// (0x000a9bab) popup_image_details_window_g1

0xcdd6,	// (0x000a9bbe) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000ac500) popup_image_details_window_g

0xcdff,	// (0x000a9be7) popup_image_details_window_t1

0xce11,	// (0x000a9bf9) popup_image_details_window_t2

0xce2a,	// (0x000a9c12) popup_image_details_window_t3

0xce3e,	// (0x000a9c26) popup_image_details_window_t4

0xce59,	// (0x000a9c41) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000ac507) popup_image_details_window_t

0xa855,	// (0x000a763d) bg_calc_paper_pane_ParamLimits

0x1165,	// (0x0009df4d) grid_highlight_pane_cp013

0x116f,	// (0x0009df57) list_calc_pane_ParamLimits

0x1181,	// (0x0009df69) scroll_pane_cp024

0xa869,	// (0x000a7651) bg_calc_display_pane_ParamLimits

0x1189,	// (0x0009df71) calc_display_pane_t1_ParamLimits

0x119e,	// (0x0009df86) calc_display_pane_t2_ParamLimits

0x11b3,	// (0x0009df9b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000abf35) calc_display_pane_t_ParamLimits

0x1287,	// (0x0009e06f) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000abf52) cell_calc_pane_g

0x1290,	// (0x0009e078) cell_calc_pane_t1

0xa8c8,	// (0x000a76b0) grid_highlight_pane_cp02_ParamLimits

0xa8de,	// (0x000a76c6) toolbar_button_pane_cp01_ParamLimits

0xa8de,	// (0x000a76c6) toolbar_button_pane_cp01

0xb6d5,	// (0x000a84bd) temp_image_control_pane_ParamLimits

0xb6d5,	// (0x000a84bd) temp_image_control_pane

0xa2ce,	// (0x000a70b6) main_mp3_pane

0xce73,	// (0x000a9c5b) temp_image_control_pane_g1_ParamLimits

0xce73,	// (0x000a9c5b) temp_image_control_pane_g1

0xce81,	// (0x000a9c69) temp_image_control_pane_g2_ParamLimits

0xce81,	// (0x000a9c69) temp_image_control_pane_g2

0xce93,	// (0x000a9c7b) temp_image_control_pane_g3_ParamLimits

0xce93,	// (0x000a9c7b) temp_image_control_pane_g3

0x4ec8,	// (0x000a1cb0) temp_image_control_pane_g4_ParamLimits

0x4ec8,	// (0x000a1cb0) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000ac512) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000ac512) temp_image_control_pane_g

0xce73,	// (0x000a9c5b) main_mp3_pane_g1

0x4ed9,	// (0x000a1cc1) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000ac51b) main_mp3_pane_g

0xced6,	// (0x000a9cbe) main_mp3_pane_t1

0xaa3d,	// (0x000a7825) main_camera_pane_g8_ParamLimits

0xaa3d,	// (0x000a7825) main_camera_pane_g8

0x1e4f,	// (0x0009ec37) main_video_pane_g7_ParamLimits

0x1e4f,	// (0x0009ec37) main_video_pane_g7

0x4985,	// (0x000a176d) main_camera2_pane_t7_ParamLimits

0x4985,	// (0x000a176d) main_camera2_pane_t7

0xab89,	// (0x000a7971) scroll_pane_cp025_ParamLimits

0xab89,	// (0x000a7971) scroll_pane_cp025

0xab9d,	// (0x000a7985) scroll_pane_cp026_ParamLimits

0xab9d,	// (0x000a7985) scroll_pane_cp026

0xabac,	// (0x000a7994) wml_content_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_touch_calib_pane

0x4f7d,	// (0x000a1d65) main_touch_calib_pane_g1

0x4f89,	// (0x000a1d71) main_touch_calib_pane_g2

0x4f95,	// (0x000a1d7d) main_touch_calib_pane_g3

0x4fa1,	// (0x000a1d89) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000ac539) main_touch_calib_pane_g

0x4fad,	// (0x000a1d95) main_touch_calib_pane_t1

0x4fc4,	// (0x000a1dac) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000ac542) main_touch_calib_pane_t

0xb34c,	// (0x000a8134) mup_progress_pane_cp02

0xb36b,	// (0x000a8153) navi_pane_g1

0xb3cd,	// (0x000a81b5) navi_pane_mp_t3

0xa2ce,	// (0x000a70b6) main_mp3_pane_ParamLimits

0x45e7,	// (0x000a13cf) navi_pane_ParamLimits

0xce73,	// (0x000a9c5b) main_mp3_pane_g1_ParamLimits

0x4ed9,	// (0x000a1cc1) main_mp3_pane_g2_ParamLimits

0x4ee5,	// (0x000a1ccd) main_mp3_pane_g3_ParamLimits

0x4ee5,	// (0x000a1ccd) main_mp3_pane_g3

0x4ef1,	// (0x000a1cd9) main_mp3_pane_g4_ParamLimits

0x4ef1,	// (0x000a1cd9) main_mp3_pane_g4

0xcea3,	// (0x000a9c8b) main_mp3_pane_g5_ParamLimits

0xcea3,	// (0x000a9c8b) main_mp3_pane_g5

0xceb1,	// (0x000a9c99) main_mp3_pane_g6_ParamLimits

0xceb1,	// (0x000a9c99) main_mp3_pane_g6

0xcebe,	// (0x000a9ca6) main_mp3_pane_g7_ParamLimits

0xcebe,	// (0x000a9ca6) main_mp3_pane_g7

0xceca,	// (0x000a9cb2) main_mp3_pane_g8_ParamLimits

0xceca,	// (0x000a9cb2) main_mp3_pane_g8

0xf733,	// (0x000ac51b) main_mp3_pane_g_ParamLimits

0x4efd,	// (0x000a1ce5) main_mp3_pane_t2

0x4f0d,	// (0x000a1cf5) main_mp3_pane_t3

0xcee4,	// (0x000a9ccc) main_mp3_pane_t4

0xcef2,	// (0x000a9cda) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000ac52c) main_mp3_pane_t

0xcf00,	// (0x000a9ce8) mup_progress_pane_cp01

0x0bcf,	// (0x0009d9b7) aid_zoom_text_secondary2

0xccf6,	// (0x000a9ade) list_cale_ev2_pane

0xccfe,	// (0x000a9ae6) scroll_pane_cp023_ParamLimits

0xe703,	// (0x000ab4eb) field_cale_ev2_pane_ParamLimits

0xe703,	// (0x000ab4eb) field_cale_ev2_pane

0x501f,	// (0x000a1e07) field_cale_ev2_pane_g1_ParamLimits

0x501f,	// (0x000a1e07) field_cale_ev2_pane_g1

0x502b,	// (0x000a1e13) field_cale_ev2_pane_g2_ParamLimits

0x502b,	// (0x000a1e13) field_cale_ev2_pane_g2

0x5043,	// (0x000a1e2b) field_cale_ev2_pane_g3_ParamLimits

0x5043,	// (0x000a1e2b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000ac54d) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000ac54d) field_cale_ev2_pane_g

0x505b,	// (0x000a1e43) field_cale_ev2_pane_t1_ParamLimits

0x505b,	// (0x000a1e43) field_cale_ev2_pane_t1

0x5072,	// (0x000a1e5a) field_cale_ev2_pane_t2_ParamLimits

0x5072,	// (0x000a1e5a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000ac556) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000ac556) field_cale_ev2_pane_t

0x3de0,	// (0x000a0bc8) main_postcard_pane_g5_ParamLimits

0x3de0,	// (0x000a0bc8) main_postcard_pane_g5

0x3dee,	// (0x000a0bd6) main_postcard_pane_g6_ParamLimits

0x3dee,	// (0x000a0bd6) main_postcard_pane_g6

0x1c8d,	// (0x0009ea75) camera2_autofocus_pane_cp_ParamLimits

0x1c8d,	// (0x0009ea75) camera2_autofocus_pane_cp

0xa2ce,	// (0x000a70b6) main_mup3_pane

0x50a7,	// (0x000a1e8f) main_mup3_pane_g1_ParamLimits

0x50a7,	// (0x000a1e8f) main_mup3_pane_g1

0x50c8,	// (0x000a1eb0) main_mup3_pane_g2_ParamLimits

0x50c8,	// (0x000a1eb0) main_mup3_pane_g2

0x5144,	// (0x000a1f2c) main_mup3_pane_g3_ParamLimits

0x5144,	// (0x000a1f2c) main_mup3_pane_g3

0x5189,	// (0x000a1f71) main_mup3_pane_g4_ParamLimits

0x5189,	// (0x000a1f71) main_mup3_pane_g4

0x51cc,	// (0x000a1fb4) main_mup3_pane_g5_ParamLimits

0x51cc,	// (0x000a1fb4) main_mup3_pane_g5

0x5211,	// (0x000a1ff9) main_mup3_pane_g6_ParamLimits

0x5211,	// (0x000a1ff9) main_mup3_pane_g6

0xcf08,	// (0x000a9cf0) main_mup3_pane_g7_ParamLimits

0xcf08,	// (0x000a9cf0) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000ac566) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000ac566) main_mup3_pane_g

0x5287,	// (0x000a206f) main_mup3_pane_t1_ParamLimits

0x5287,	// (0x000a206f) main_mup3_pane_t1

0x52f0,	// (0x000a20d8) main_mup3_pane_t2_ParamLimits

0x52f0,	// (0x000a20d8) main_mup3_pane_t2

0x53b9,	// (0x000a21a1) main_mup3_pane_t4_ParamLimits

0x53b9,	// (0x000a21a1) main_mup3_pane_t4

0x540d,	// (0x000a21f5) main_mup3_pane_t5_ParamLimits

0x540d,	// (0x000a21f5) main_mup3_pane_t5

0x54bb,	// (0x000a22a3) main_mup3_pane_t6_ParamLimits

0x54bb,	// (0x000a22a3) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000ac577) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000ac577) main_mup3_pane_t

0x5567,	// (0x000a234f) mup3_progress_pane_ParamLimits

0x5567,	// (0x000a234f) mup3_progress_pane

0x55e1,	// (0x000a23c9) popup_mup3_control_window_ParamLimits

0x55e1,	// (0x000a23c9) popup_mup3_control_window

0xcf16,	// (0x000a9cfe) popup_mup3_text_window

0x55fe,	// (0x000a23e6) mup3_progress_pane_t1

0x561d,	// (0x000a2405) mup3_progress_pane_t2

0xcf1e,	// (0x000a9d06) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000ac584) mup3_progress_pane_t

0xcf3b,	// (0x000a9d23) mup_progress_pane_cp03

0x9c13,	// (0x000a69fb) bg_tb_trans_pane_cp04

0x563c,	// (0x000a2424) mup3_volume_pane

0x5644,	// (0x000a242c) popup_mup3_control_window_g1

0xd997,	// (0x000aa77f) mup3_volume_pane_g1

0xd9a0,	// (0x000aa788) mup3_volume_pane_g2

0xd9a9,	// (0x000aa791) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000ac58b) mup3_volume_pane_g

0x9c13,	// (0x000a69fb) bg_tb_trans_pane_cp03

0xcf4b,	// (0x000a9d33) popup_mup3_text_window_g1

0xcf53,	// (0x000a9d3b) popup_mup3_text_window_t1

0xa8b1,	// (0x000a7699) list_calc_item_pane_g1_ParamLimits

0xc9c0,	// (0x000a97a8) mup_volume_pane_cp_g1

0x4fdd,	// (0x000a1dc5) main_touch_calib_pane_t3

0x4ff3,	// (0x000a1ddb) main_touch_calib_pane_t4

0x5009,	// (0x000a1df1) main_touch_calib_pane_t5

0x9c1d,	// (0x000a6a05) aid_cell_size_toolbar2

0x9c25,	// (0x000a6a0d) aid_popup3_width_pane

0x0bbf,	// (0x0009d9a7) aid_zoom_text_msg_primary

0x1c58,	// (0x0009ea40) vorec_t7

0xa875,	// (0x000a765d) bg_calc_paper_pane_g1_ParamLimits

0xa881,	// (0x000a7669) bg_calc_paper_pane_g2_ParamLimits

0xa88d,	// (0x000a7675) bg_calc_paper_pane_g3_ParamLimits

0xa899,	// (0x000a7681) bg_calc_paper_pane_g4_ParamLimits

0xa8a5,	// (0x000a768d) bg_calc_paper_pane_g5_ParamLimits

0x11f4,	// (0x0009dfdc) bg_calc_paper_pane_g6_ParamLimits

0x1205,	// (0x0009dfed) bg_calc_paper_pane_g7_ParamLimits

0x1216,	// (0x0009dffe) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000abf3c) bg_calc_paper_pane_g_ParamLimits

0x1229,	// (0x0009e011) calc_bg_paper_pane_g9_ParamLimits

0x1d7e,	// (0x0009eb66) image_qvga_pane_ParamLimits

0x1d7e,	// (0x0009eb66) image_qvga_pane

0xa7a4,	// (0x000a758c) bg_popup_sub_pane_cp04_ParamLimits

0xb60c,	// (0x000a83f4) popup_mup_playback_window_g1_ParamLimits

0xb618,	// (0x000a8400) popup_mup_playback_window_t1_ParamLimits

0xb62d,	// (0x000a8415) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000ac2ca) popup_mup_playback_window_t_ParamLimits

0x4ab4,	// (0x000a189c) main_mup2_pane_g3_ParamLimits

0x4ab4,	// (0x000a189c) main_mup2_pane_g3

0x213a,	// (0x0009ef22) popup_toolbar_window_cp04

0xba28,	// (0x000a8810) popup_call2_audio_second_window_g3_ParamLimits

0xba28,	// (0x000a8810) popup_call2_audio_second_window_g3

0xbe32,	// (0x000a8c1a) popup_call2_audio_first_window_g4_ParamLimits

0xbe32,	// (0x000a8c1a) popup_call2_audio_first_window_g4

0xc4b1,	// (0x000a9299) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x000a9299) popup_call2_audio_in_window_g4

0x3ef4,	// (0x000a0cdc) aid_area_sk_bg_cut_ParamLimits

0x3ef4,	// (0x000a0cdc) aid_area_sk_bg_cut

0xb642,	// (0x000a842a) aid_area_sk_bg_cut_2_ParamLimits

0xb642,	// (0x000a842a) aid_area_sk_bg_cut_2

0x4e2f,	// (0x000a1c17) aid_placing_details_win

0x4e37,	// (0x000a1c1f) aid_placing_details_win_2

0xcdb5,	// (0x000a9b9d) camera2_autofocus_pane_g1_ParamLimits

0x0da9,	// (0x0009db91) popup_fixed_preview_cale_window_ParamLimits

0x0da9,	// (0x0009db91) popup_fixed_preview_cale_window

0xb41c,	// (0x000a8204) navi_slider_pane_g3

0xb425,	// (0x000a820d) navi_slider_pane_g4

0xb42e,	// (0x000a8216) navi_slider_pane_g5

0xb41c,	// (0x000a8204) navi_slider_pane_g6

0x376a,	// (0x000a0552) navi_slider_pane_g7

0xb543,	// (0x000a832b) mup_scale_pane_g3

0xb54c,	// (0x000a8334) mup_scale_pane_g4

0xb555,	// (0x000a833d) mup_scale_pane_g5

0x3bed,	// (0x000a09d5) mup_scale_pane_g6

0x3bf6,	// (0x000a09de) mup_scale_pane_g7

0xb41c,	// (0x000a8204) cams2_slider_pane_g3

0xca42,	// (0x000a982a) cams2_slider_pane_g4

0x4d8f,	// (0x000a1b77) cams2_slider_pane_g5

0xb41c,	// (0x000a8204) cams2_slider_pane_g6

0x4d97,	// (0x000a1b7f) cams2_slider_pane_g7

0xcc73,	// (0x000a9a5b) camera2_autofocus_pane_cp_g1

0xc816,	// (0x000a95fe) bg_popup_preview_window_pane_cp02_ParamLimits

0xc816,	// (0x000a95fe) bg_popup_preview_window_pane_cp02

0xcf61,	// (0x000a9d49) list_fp_cale_pane_ParamLimits

0xcf61,	// (0x000a9d49) list_fp_cale_pane

0xcf6d,	// (0x000a9d55) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf6d,	// (0x000a9d55) popup_fixed_preview_cale_window_t1

0x564d,	// (0x000a2435) popup_fixed_preview_cale_window_t2_ParamLimits

0x564d,	// (0x000a2435) popup_fixed_preview_cale_window_t2

0x5662,	// (0x000a244a) popup_fixed_preview_cale_window_t3_ParamLimits

0x5662,	// (0x000a244a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000ac592) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000ac592) popup_fixed_preview_cale_window_t

0x5677,	// (0x000a245f) list_single_fp_cale_pane_ParamLimits

0x5677,	// (0x000a245f) list_single_fp_cale_pane

0xcf8b,	// (0x000a9d73) list_single_fp_cale_pane_g1_ParamLimits

0xcf8b,	// (0x000a9d73) list_single_fp_cale_pane_g1

0xcf97,	// (0x000a9d7f) list_single_fp_cale_pane_g2_ParamLimits

0xcf97,	// (0x000a9d7f) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000ac599) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000ac599) list_single_fp_cale_pane_g

0xcfb0,	// (0x000a9d98) list_single_fp_cale_pane_t1_ParamLimits

0xcfb0,	// (0x000a9d98) list_single_fp_cale_pane_t1

0xcfc2,	// (0x000a9daa) list_single_fp_cale_pane_t2_ParamLimits

0xcfc2,	// (0x000a9daa) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000ac5a0) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000ac5a0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c13,	// (0x000a69fb) main_dialer_pane

0x5687,	// (0x000a246f) aid_cell_size_keypad

0x5691,	// (0x000a2479) dialer_ne_pane

0x569b,	// (0x000a2483) grid_dialer_command_1_pane

0x56a3,	// (0x000a248b) grid_dialer_command_2_pane

0x56ab,	// (0x000a2493) grid_dialer_keypad_pane

0x56bf,	// (0x000a24a7) bg_popup_call_pane_cp06_ParamLimits

0x56bf,	// (0x000a24a7) bg_popup_call_pane_cp06

0x56cb,	// (0x000a24b3) dialer_ne_clear_pane_ParamLimits

0x56cb,	// (0x000a24b3) dialer_ne_clear_pane

0xcff5,	// (0x000a9ddd) dialer_ne_pane_g1

0xcffd,	// (0x000a9de5) dialer_ne_pane_t1_ParamLimits

0xcffd,	// (0x000a9de5) dialer_ne_pane_t1

0x56d7,	// (0x000a24bf) dialer_ne_pane_t2_ParamLimits

0x56d7,	// (0x000a24bf) dialer_ne_pane_t2

0x56f4,	// (0x000a24dc) dialer_ne_pane_t3_ParamLimits

0x56f4,	// (0x000a24dc) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000ac5a5) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000ac5a5) dialer_ne_pane_t

0x5718,	// (0x000a2500) dialer_ne_pane_t3_copy1_ParamLimits

0x5718,	// (0x000a2500) dialer_ne_pane_t3_copy1

0x573c,	// (0x000a2524) cell_dialer_keypad_pane_ParamLimits

0x573c,	// (0x000a2524) cell_dialer_keypad_pane

0x5753,	// (0x000a253b) cell_dialer_command_1_pane_ParamLimits

0x5753,	// (0x000a253b) cell_dialer_command_1_pane

0x5769,	// (0x000a2551) cell_dialer_command_2_pane_ParamLimits

0x5769,	// (0x000a2551) cell_dialer_command_2_pane

0xd00f,	// (0x000a9df7) bg_button_pane_cp02_ParamLimits

0xd00f,	// (0x000a9df7) bg_button_pane_cp02

0x5778,	// (0x000a2560) cell_dialer_keypad_pane_g1_ParamLimits

0x5778,	// (0x000a2560) cell_dialer_keypad_pane_g1

0xd00f,	// (0x000a9df7) bg_button_pane_cp03_ParamLimits

0xd00f,	// (0x000a9df7) bg_button_pane_cp03

0x578d,	// (0x000a2575) cell_dialer_command_1_pane_g1_ParamLimits

0x578d,	// (0x000a2575) cell_dialer_command_1_pane_g1

0xd01b,	// (0x000a9e03) bg_button_pane_cp04

0x57a1,	// (0x000a2589) cell_dialer_command_2_pane_g1

0xb40b,	// (0x000a81f3) bg_button_pane_cp06

0xd023,	// (0x000a9e0b) dialer_ne_clear_pane_g1

0x36a5,	// (0x000a048d) navi_pane_g2

0x36d3,	// (0x000a04bb) navi_pane_g3

0x0002,

0xf3e5,	// (0x000ac1cd) navi_pane_g

0x36fe,	// (0x000a04e6) navi_pane_mv_g2

0x3725,	// (0x000a050d) navi_pane_mv_g5

0x372d,	// (0x000a0515) navi_pane_mv_t1

0xa869,	// (0x000a7651) main_clock2_pane

0x57df,	// (0x000a25c7) main_clock2_list_pane_ParamLimits

0x57df,	// (0x000a25c7) main_clock2_list_pane

0x5809,	// (0x000a25f1) main_clock2_pane_t1_ParamLimits

0x5809,	// (0x000a25f1) main_clock2_pane_t1

0x582b,	// (0x000a2613) main_clock2_pane_t2_ParamLimits

0x582b,	// (0x000a2613) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000ac5b1) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000ac5b1) main_clock2_pane_t

0x5888,	// (0x000a2670) popup_clock_analogue_window_cp03_ParamLimits

0x5888,	// (0x000a2670) popup_clock_analogue_window_cp03

0x58a8,	// (0x000a2690) popup_clock_digital_window_cp02_ParamLimits

0x58a8,	// (0x000a2690) popup_clock_digital_window_cp02

0x5919,	// (0x000a2701) main_clock2_list_single_pane_ParamLimits

0x5919,	// (0x000a2701) main_clock2_list_single_pane

0xb40b,	// (0x000a81f3) list_highlight_pane_cp05

0xd05f,	// (0x000a9e47) main_clock2_list_single_pane_t1

0x213a,	// (0x0009ef22) popup_toolbar_window_cp04_ParamLimits

0x4e98,	// (0x000a1c80) camera2_autofocus_pane_g2_ParamLimits

0x4e98,	// (0x000a1c80) camera2_autofocus_pane_g2

0x4ea4,	// (0x000a1c8c) camera2_autofocus_pane_g3_ParamLimits

0x4ea4,	// (0x000a1c8c) camera2_autofocus_pane_g3

0x4eb0,	// (0x000a1c98) camera2_autofocus_pane_g4_ParamLimits

0x4eb0,	// (0x000a1c98) camera2_autofocus_pane_g4

0x4ebc,	// (0x000a1ca4) camera2_autofocus_pane_g5_ParamLimits

0x4ebc,	// (0x000a1ca4) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000ac4f5) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000ac4f5) camera2_autofocus_pane_g

0x5087,	// (0x000a1e6f) camera2_autofocus_pane_cp_g2

0x508f,	// (0x000a1e77) camera2_autofocus_pane_cp_g3

0x5097,	// (0x000a1e7f) camera2_autofocus_pane_cp_g4

0x509f,	// (0x000a1e87) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000ac55b) camera2_autofocus_pane_cp_g

0x56b7,	// (0x000a249f) popup_dialer_spcha_window

0x9c13,	// (0x000a69fb) bg_popup_sub_pane_cp07

0xd06d,	// (0x000a9e55) list_spcha_pane

0xd075,	// (0x000a9e5d) list_single_spcha_pane_ParamLimits

0xd075,	// (0x000a9e5d) list_single_spcha_pane

0x9c13,	// (0x000a69fb) list_highlight_pane_cp06

0xd086,	// (0x000a9e6e) list_single_spcha_pane_t1

0xc25b,	// (0x000a9043) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x000a9043) popup_call2_audio_out_window_g4

0x9c13,	// (0x000a69fb) main_imed2_pane

0xc84e,	// (0x000a9636) popup_imed_adjust2_window

0x4524,	// (0x000a130c) popup_imed_trans_window_ParamLimits

0x4524,	// (0x000a130c) popup_imed_trans_window

0xcaab,	// (0x000a9893) popup_blid_sat_info2_window_t1

0xcab9,	// (0x000a98a1) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000ac48a) popup_blid_sat_info2_window_t

0x59c3,	// (0x000a27ab) aid_size_cell_colour_35

0x59dd,	// (0x000a27c5) aid_size_cell_colour_112

0x59f4,	// (0x000a27dc) aid_size_cell_effect

0xa2ce,	// (0x000a70b6) bg_tb_trans_pane_cp02

0xb044,	// (0x000a7e2c) heading_imed_pane

0x5a0e,	// (0x000a27f6) listscroll_imed_pane

0xd09c,	// (0x000a9e84) heading_imed_pane_g1

0xd0a4,	// (0x000a9e8c) heading_imed_pane_t1

0xd0b2,	// (0x000a9e9a) grid_imed_colour_35_pane_ParamLimits

0xd0b2,	// (0x000a9e9a) grid_imed_colour_35_pane

0x5a1a,	// (0x000a2802) grid_imed_effect_pane

0xd0ce,	// (0x000a9eb6) list_imed_aspect_pane

0x5a2a,	// (0x000a2812) scroll_pane_cp027_ParamLimits

0x5a2a,	// (0x000a2812) scroll_pane_cp027

0x5a36,	// (0x000a281e) cell_imed_effect_pane_ParamLimits

0x5a36,	// (0x000a281e) cell_imed_effect_pane

0xd0d6,	// (0x000a9ebe) cell_imed_colour_pane_ParamLimits

0xd0d6,	// (0x000a9ebe) cell_imed_colour_pane

0xd120,	// (0x000a9f08) cell_imed_colour_pane_g1_ParamLimits

0xd120,	// (0x000a9f08) cell_imed_colour_pane_g1

0xd131,	// (0x000a9f19) hgihlgiht_grid_pane_cp016_ParamLimits

0xd131,	// (0x000a9f19) hgihlgiht_grid_pane_cp016

0x5a52,	// (0x000a283a) cell_imed_effect_pane_g1

0x5a5a,	// (0x000a2842) grid_highlight_pane_cp017

0xd142,	// (0x000a9f2a) list_imed_single_pane_ParamLimits

0xd142,	// (0x000a9f2a) list_imed_single_pane

0x9c13,	// (0x000a69fb) list_highlight_pane_cp07

0xd156,	// (0x000a9f3e) list_imed_aspect_pane_comp1_t1

0xc822,	// (0x000a960a) bg_tb_trans_pane_cp05

0xd178,	// (0x000a9f60) popup_imed_adjust2_window_g1

0xd19f,	// (0x000a9f87) popup_imed_adjust2_window_t1

0xd1b7,	// (0x000a9f9f) slider_imed_adjust_pane

0xd1cb,	// (0x000a9fb3) slider_imed_adjust_pane_g1

0xd1db,	// (0x000a9fc3) slider_imed_adjust_pane_g2

0xd1eb,	// (0x000a9fd3) slider_imed_adjust_pane_g3

0xd1fc,	// (0x000a9fe4) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000ac5ce) slider_imed_adjust_pane_g

0x5a63,	// (0x000a284b) aid_size_cell_clipart2

0x5a6f,	// (0x000a2857) grid_imed_clipart_pane

0xd20d,	// (0x000a9ff5) scroll_pane_cp031

0x5a79,	// (0x000a2861) cell_imed_clipart_pane_ParamLimits

0x5a79,	// (0x000a2861) cell_imed_clipart_pane

0x5a97,	// (0x000a287f) cell_imed_clipart_pane_g1

0x9c13,	// (0x000a69fb) grid_highlight_pane_cp014

0x57eb,	// (0x000a25d3) main_clock2_pane_g1_ParamLimits

0x57eb,	// (0x000a25d3) main_clock2_pane_g1

0x58c4,	// (0x000a26ac) aid_call2_pane_cp10

0x58d6,	// (0x000a26be) aid_call_pane_cp10

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g1

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g2

0x58e8,	// (0x000a26d0) popup_clock_analogue_window_cp10_g3

0x58e8,	// (0x000a26d0) popup_clock_analogue_window_cp10_g4

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000ac5bc) popup_clock_analogue_window_cp10_g

0x58fa,	// (0x000a26e2) popup_clock_analogue_window_cp10_t1

0x592b,	// (0x000a2713) clock_digital_number_pane_cp10_ParamLimits

0x592b,	// (0x000a2713) clock_digital_number_pane_cp10

0x5943,	// (0x000a272b) clock_digital_number_pane_cp11_ParamLimits

0x5943,	// (0x000a272b) clock_digital_number_pane_cp11

0x595b,	// (0x000a2743) clock_digital_number_pane_cp12_ParamLimits

0x595b,	// (0x000a2743) clock_digital_number_pane_cp12

0x5973,	// (0x000a275b) clock_digital_number_pane_cp13_ParamLimits

0x5973,	// (0x000a275b) clock_digital_number_pane_cp13

0x598b,	// (0x000a2773) clock_digital_separator_pane_cp10_ParamLimits

0x598b,	// (0x000a2773) clock_digital_separator_pane_cp10

0x59a3,	// (0x000a278b) popup_clock_digital_window_cp02_t1_ParamLimits

0x59a3,	// (0x000a278b) popup_clock_digital_window_cp02_t1

0xa79c,	// (0x000a7584) clock_digital_number_pane_cp10_g1

0xa79c,	// (0x000a7584) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000ac5d7) clock_digital_number_pane_cp10_g

0xa79c,	// (0x000a7584) clock_digital_separator_pane_cp10_g1

0xa79c,	// (0x000a7584) clock_digital_separator_pane_g2_cp10

0xb3db,	// (0x000a81c3) navi_pane_vded_g4

0xb3e4,	// (0x000a81cc) navi_pane_vded_g5

0xb3ed,	// (0x000a81d5) navi_pane_vded_t1

0x9c13,	// (0x000a69fb) main_vded_pane

0x5aa0,	// (0x000a2888) main_vded_pane_g1

0x5aac,	// (0x000a2894) main_vded_pane_g2

0x5ab6,	// (0x000a289e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000ac5dc) main_vded_pane_g

0x5ac0,	// (0x000a28a8) main_vded_pane_t1

0x5ace,	// (0x000a28b6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000ac5e3) main_vded_pane_t

0x5adc,	// (0x000a28c4) vded_slider_pane

0x5ae6,	// (0x000a28ce) vded_video_pane

0xd215,	// (0x000a9ffd) vded_video_pane_g1

0x5af2,	// (0x000a28da) vded_video_pane_g2

0xcc73,	// (0x000a9a5b) vded_video_pane_g3

0x0002,

0xf800,	// (0x000ac5e8) vded_video_pane_g

0xd21f,	// (0x000aa007) vded_slider_pane_g1

0xc9c0,	// (0x000a97a8) vded_slider_pane_g2

0xd228,	// (0x000aa010) vded_slider_pane_g3

0xd231,	// (0x000aa019) vded_slider_pane_g4

0xd23a,	// (0x000aa022) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000ac5ef) vded_slider_pane_g

0x55d5,	// (0x000a23bd) mup3_rocker_pane_ParamLimits

0x55d5,	// (0x000a23bd) mup3_rocker_pane

0x5afb,	// (0x000a28e3) mup3_control_keys_pane_g1

0x5b03,	// (0x000a28eb) mup3_control_keys_pane_g2

0x5b0b,	// (0x000a28f3) mup3_control_keys_pane_g3

0x5b13,	// (0x000a28fb) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000ac5fa) mup3_control_keys_pane_g

0x0dc7,	// (0x0009dbaf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dc7,	// (0x0009dbaf) popup_toolbar2_fixed_window_cp01

0x55f1,	// (0x000a23d9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55f1,	// (0x000a23d9) popup_toolbar2_fixed_window_cp02

0xbb9a,	// (0x000a8982) popup_call2_audio_second_window_t4_ParamLimits

0xbb9a,	// (0x000a8982) popup_call2_audio_second_window_t4

0xc0c8,	// (0x000a8eb0) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x000a8eb0) popup_call2_audio_first_window_t6

0xc35e,	// (0x000a9146) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x000a9146) popup_call2_audio_out_window_t6

0x9c13,	// (0x000a69fb) main_vitu_pane

0x5b23,	// (0x000a290b) aid_size_cell_itu_ParamLimits

0x5b23,	// (0x000a290b) aid_size_cell_itu

0x0df9,	// (0x0009dbe1) bg_popup_window_pane_cp08_ParamLimits

0x0df9,	// (0x0009dbe1) bg_popup_window_pane_cp08

0x5b31,	// (0x000a2919) field_vitu_entry_pane_ParamLimits

0x5b31,	// (0x000a2919) field_vitu_entry_pane

0x5b40,	// (0x000a2928) grid_vitu_function_pane_ParamLimits

0x5b40,	// (0x000a2928) grid_vitu_function_pane

0x5b50,	// (0x000a2938) grid_vitu_itu_pane_ParamLimits

0x5b50,	// (0x000a2938) grid_vitu_itu_pane

0x5b60,	// (0x000a2948) cell_vitu_itu_pane_ParamLimits

0x5b60,	// (0x000a2948) cell_vitu_itu_pane

0x5b77,	// (0x000a295f) cell_vitu_function_pane_ParamLimits

0x5b77,	// (0x000a295f) cell_vitu_function_pane

0xa2ce,	// (0x000a70b6) bg_popup_sub_pane_cp08_ParamLimits

0xa2ce,	// (0x000a70b6) bg_popup_sub_pane_cp08

0x5b8b,	// (0x000a2973) field_vitu_entry_pane_t1_ParamLimits

0x5b8b,	// (0x000a2973) field_vitu_entry_pane_t1

0xd25b,	// (0x000aa043) field_vitu_entry_pane_t2_ParamLimits

0xd25b,	// (0x000aa043) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000ac608) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000ac608) field_vitu_entry_pane_t

0xd278,	// (0x000aa060) bg_button_pane_cp05_ParamLimits

0xd278,	// (0x000aa060) bg_button_pane_cp05

0x5ba5,	// (0x000a298d) cell_vitu_itu_pane_g1

0x5bbd,	// (0x000a29a5) cell_vitu_itu_pane_t1_ParamLimits

0x5bbd,	// (0x000a29a5) cell_vitu_itu_pane_t1

0x5bcf,	// (0x000a29b7) cell_vitu_itu_pane_t2_ParamLimits

0x5bcf,	// (0x000a29b7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000ac60d) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000ac60d) cell_vitu_itu_pane_t

0xd286,	// (0x000aa06e) bg_button_pane_cp07

0x5c12,	// (0x000a29fa) cell_vitu_function_pane_g1

0x108c,	// (0x0009de74) main_calc_pane_g1

0x0bb3,	// (0x0009d99b) aid_visual_content_pane

0x9c13,	// (0x000a69fb) main_vradio_pane

0x5c1b,	// (0x000a2a03) main_vradio_pane_g1_ParamLimits

0x5c1b,	// (0x000a2a03) main_vradio_pane_g1

0xd290,	// (0x000aa078) main_vradio_pane_g2_ParamLimits

0xd290,	// (0x000aa078) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000ac614) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000ac614) main_vradio_pane_g

0x5c29,	// (0x000a2a11) main_vradio_pane_t1_ParamLimits

0x5c29,	// (0x000a2a11) main_vradio_pane_t1

0x5c3b,	// (0x000a2a23) main_vradio_pane_t2_ParamLimits

0x5c3b,	// (0x000a2a23) main_vradio_pane_t2

0xd29d,	// (0x000aa085) main_vradio_pane_t3_ParamLimits

0xd29d,	// (0x000aa085) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000ac619) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000ac619) main_vradio_pane_t

0x5c4d,	// (0x000a2a35) vradio_rocker_control_pane_ParamLimits

0x5c4d,	// (0x000a2a35) vradio_rocker_control_pane

0x5c59,	// (0x000a2a41) vradio_station_info_pane_ParamLimits

0x5c59,	// (0x000a2a41) vradio_station_info_pane

0xd2b1,	// (0x000aa099) vradio_frequency_info_pane_ParamLimits

0xd2b1,	// (0x000aa099) vradio_frequency_info_pane

0xcc73,	// (0x000a9a5b) vradio_station_info_pane_g1

0xd2c0,	// (0x000aa0a8) vradio_station_info_pane_t1_ParamLimits

0xd2c0,	// (0x000aa0a8) vradio_station_info_pane_t1

0xd2e2,	// (0x000aa0ca) vradio_station_info_pane_t2_ParamLimits

0xd2e2,	// (0x000aa0ca) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000ac620) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000ac620) vradio_station_info_pane_t

0xd2f4,	// (0x000aa0dc) vradio_tuning_pane

0xd2fc,	// (0x000aa0e4) vradio_rocker_control_pane_g1

0xd304,	// (0x000aa0ec) vradio_rocker_control_pane_g2

0xd30c,	// (0x000aa0f4) vradio_rocker_control_pane_g3

0xd314,	// (0x000aa0fc) vradio_rocker_control_pane_g4

0xd31c,	// (0x000aa104) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000ac625) vradio_rocker_control_pane_g

0x5c66,	// (0x000a2a4e) vradio_frequency_info_pane_g1

0xd324,	// (0x000aa10c) vradio_frequency_info_pane_t1_ParamLimits

0xd324,	// (0x000aa10c) vradio_frequency_info_pane_t1

0x5c70,	// (0x000a2a58) vradio_tuning_pane_g1

0x5c7b,	// (0x000a2a63) vradio_tuning_pane_t1

0x9c31,	// (0x000a6a19) area_side_right_pane_ParamLimits

0x9c31,	// (0x000a6a19) area_side_right_pane

0xc7dd,	// (0x000a95c5) status_small_pane_g1

0xc7e5,	// (0x000a95cd) status_small_pane_g2

0xc7ee,	// (0x000a95d6) status_small_pane_g3

0xc7f7,	// (0x000a95df) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000ac3e0) status_small_pane_g

0xc800,	// (0x000a95e8) status_small_pane_t1

0x9c13,	// (0x000a69fb) main_video3_pane

0xd338,	// (0x000aa120) cams_zoom_vslider_pane

0xd340,	// (0x000aa128) image3_wide_pane_ParamLimits

0xd340,	// (0x000aa128) image3_wide_pane

0xd35a,	// (0x000aa142) image3_wide_small_pane

0xd366,	// (0x000aa14e) main_video3_pane_g1_ParamLimits

0xd366,	// (0x000aa14e) main_video3_pane_g1

0xd382,	// (0x000aa16a) main_video3_pane_g2_ParamLimits

0xd382,	// (0x000aa16a) main_video3_pane_g2

0x0001,

0xf848,	// (0x000ac630) main_video3_pane_g_ParamLimits

0xf848,	// (0x000ac630) main_video3_pane_g

0xd39e,	// (0x000aa186) main_video3_pane_t1_ParamLimits

0xd39e,	// (0x000aa186) main_video3_pane_t1

0xd3c9,	// (0x000aa1b1) main_video3_pane_t2_ParamLimits

0xd3c9,	// (0x000aa1b1) main_video3_pane_t2

0xd3f6,	// (0x000aa1de) main_video3_pane_t3_ParamLimits

0xd3f6,	// (0x000aa1de) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000ac635) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000ac635) main_video3_pane_t

0xd423,	// (0x000aa20b) cams_zoom_vslider_pane_g1

0xd42c,	// (0x000aa214) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000ac63c) cams_zoom_vslider_pane_g

0xd434,	// (0x000aa21c) small_slider_vertical_pane

0xcc73,	// (0x000a9a5b) small_slider_vertical_pane_g1

0xcc73,	// (0x000a9a5b) small_slider_vertical_pane_g2

0xd43c,	// (0x000aa224) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000ac641) small_slider_vertical_pane_g

0x9c13,	// (0x000a69fb) main_hwr_training_pane

0xd445,	// (0x000aa22d) hwr_training_instruct_pane_ParamLimits

0xd445,	// (0x000aa22d) hwr_training_instruct_pane

0x5c8a,	// (0x000a2a72) hwr_training_navi_pane_ParamLimits

0x5c8a,	// (0x000a2a72) hwr_training_navi_pane

0x5ca4,	// (0x000a2a8c) hwr_training_write_pane_ParamLimits

0x5ca4,	// (0x000a2a8c) hwr_training_write_pane

0x9c13,	// (0x000a69fb) bg_frame_shadow_pane

0xd47c,	// (0x000aa264) hwr_training_write_pane_g1

0xd484,	// (0x000aa26c) hwr_training_write_pane_g2

0xd48c,	// (0x000aa274) hwr_training_write_pane_g3

0xd494,	// (0x000aa27c) hwr_training_write_pane_g4

0xd49c,	// (0x000aa284) hwr_training_write_pane_g5

0xd4a4,	// (0x000aa28c) hwr_training_write_pane_g6

0xd4ac,	// (0x000aa294) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000ac648) hwr_training_write_pane_g

0x5cdc,	// (0x000a2ac4) hwr_training_navi_pane_g1_ParamLimits

0x5cdc,	// (0x000a2ac4) hwr_training_navi_pane_g1

0x5cee,	// (0x000a2ad6) hwr_training_navi_pane_g2_ParamLimits

0x5cee,	// (0x000a2ad6) hwr_training_navi_pane_g2

0x5d00,	// (0x000a2ae8) hwr_training_navi_pane_g3_ParamLimits

0x5d00,	// (0x000a2ae8) hwr_training_navi_pane_g3

0x5d10,	// (0x000a2af8) hwr_training_navi_pane_g4_ParamLimits

0x5d10,	// (0x000a2af8) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000ac657) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000ac657) hwr_training_navi_pane_g

0x5d2a,	// (0x000a2b12) hwr_training_navi_pane_t1

0x5d38,	// (0x000a2b20) list_single_hwr_training_instruct_pane_ParamLimits

0x5d38,	// (0x000a2b20) list_single_hwr_training_instruct_pane

0xd4b4,	// (0x000aa29c) list_single_hwr_training_instruct_pane_t1

0xcbb3,	// (0x000a999b) bg_frame_shadow_pane_g1

0xd4c3,	// (0x000aa2ab) bg_frame_shadow_pane_g2

0xd4cb,	// (0x000aa2b3) bg_frame_shadow_pane_g3

0xd4d3,	// (0x000aa2bb) bg_frame_shadow_pane_g4

0xd4db,	// (0x000aa2c3) bg_frame_shadow_pane_g5

0xd4e3,	// (0x000aa2cb) bg_frame_shadow_pane_g6

0xd4eb,	// (0x000aa2d3) bg_frame_shadow_pane_g7

0xa934,	// (0x000a771c) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000ac662) bg_frame_shadow_pane_g

0x9c13,	// (0x000a69fb) main_video_tele_dialer_pane

0x5d51,	// (0x000a2b39) aid_size_cell_video_keypad_ParamLimits

0x5d51,	// (0x000a2b39) aid_size_cell_video_keypad

0x5d61,	// (0x000a2b49) grid_video_dialer_keypad_pane_ParamLimits

0x5d61,	// (0x000a2b49) grid_video_dialer_keypad_pane

0x5d93,	// (0x000a2b7b) video_down_pane_cp_ParamLimits

0x5d93,	// (0x000a2b7b) video_down_pane_cp

0x5dbb,	// (0x000a2ba3) cell_video_dialer_keypad_pane_ParamLimits

0x5dbb,	// (0x000a2ba3) cell_video_dialer_keypad_pane

0xd4f3,	// (0x000aa2db) bg_button_pane_cp08_ParamLimits

0xd4f3,	// (0x000aa2db) bg_button_pane_cp08

0x5dd2,	// (0x000a2bba) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dd2,	// (0x000a2bba) cell_video_dialer_keypad_pane_g1

0x55c9,	// (0x000a23b1) mup3_rocker2_pane_ParamLimits

0x55c9,	// (0x000a23b1) mup3_rocker2_pane

0xcc73,	// (0x000a9a5b) mup3_rocker2_pane_g1

0x44a6,	// (0x000a128e) main_dialer2_pane

0x9c13,	// (0x000a69fb) main_mp4_pane

0x5e11,	// (0x000a2bf9) main_mp4_pane_g1_ParamLimits

0x5e11,	// (0x000a2bf9) main_mp4_pane_g1

0x5e1f,	// (0x000a2c07) main_mp4_pane_g2_ParamLimits

0x5e1f,	// (0x000a2c07) main_mp4_pane_g2

0x5e2d,	// (0x000a2c15) main_mp4_pane_g3_ParamLimits

0x5e2d,	// (0x000a2c15) main_mp4_pane_g3

0x5e80,	// (0x000a2c68) main_mp4_pane_g4_ParamLimits

0x5e80,	// (0x000a2c68) main_mp4_pane_g4

0x5ea8,	// (0x000a2c90) main_mp4_pane_g5_ParamLimits

0x5ea8,	// (0x000a2c90) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000ac682) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000ac682) main_mp4_pane_g

0x5ef8,	// (0x000a2ce0) main_mp4_pane_t1_ParamLimits

0x5ef8,	// (0x000a2ce0) main_mp4_pane_t1

0x5f54,	// (0x000a2d3c) main_mp4_pane_t2_ParamLimits

0x5f54,	// (0x000a2d3c) main_mp4_pane_t2

0xd4ff,	// (0x000aa2e7) main_mp4_pane_t3_ParamLimits

0xd4ff,	// (0x000aa2e7) main_mp4_pane_t3

0x5fa6,	// (0x000a2d8e) main_mp4_pane_t4_ParamLimits

0x5fa6,	// (0x000a2d8e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000ac68f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000ac68f) main_mp4_pane_t

0x5fe6,	// (0x000a2dce) mp4_progress_pane_ParamLimits

0x5fe6,	// (0x000a2dce) mp4_progress_pane

0x6030,	// (0x000a2e18) mp4_rocker_pane_ParamLimits

0x6030,	// (0x000a2e18) mp4_rocker_pane

0xd527,	// (0x000aa30f) mp4_progress_pane_t1

0xd540,	// (0x000aa328) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000ac698) mp4_progress_pane_t

0xd559,	// (0x000aa341) mup_progress_pane_cp04

0xd9b2,	// (0x000aa79a) mp4_rocker_pane_g1

0x6052,	// (0x000a2e3a) aid_cell_size_keypad2_ParamLimits

0x6052,	// (0x000a2e3a) aid_cell_size_keypad2

0x6062,	// (0x000a2e4a) dialer2_ne_pane_ParamLimits

0x6062,	// (0x000a2e4a) dialer2_ne_pane

0x606e,	// (0x000a2e56) grid_dialer2_keypad_pane_ParamLimits

0x606e,	// (0x000a2e56) grid_dialer2_keypad_pane

0xd9bc,	// (0x000aa7a4) bg_popup_call_pane_cp07_ParamLimits

0xd9bc,	// (0x000aa7a4) bg_popup_call_pane_cp07

0x607c,	// (0x000a2e64) dialer2_ne_pane_t1_ParamLimits

0x607c,	// (0x000a2e64) dialer2_ne_pane_t1

0x60a1,	// (0x000a2e89) cell_dialer2_keypad_pane_ParamLimits

0x60a1,	// (0x000a2e89) cell_dialer2_keypad_pane

0xd577,	// (0x000aa35f) bg_button_pane_pane_cp04_ParamLimits

0xd577,	// (0x000aa35f) bg_button_pane_pane_cp04

0x60b8,	// (0x000a2ea0) cell_dialer2_keypad_pane_g1_ParamLimits

0x60b8,	// (0x000a2ea0) cell_dialer2_keypad_pane_g1

0x200c,	// (0x0009edf4) aid_placing_vt_set_content_ParamLimits

0x200c,	// (0x0009edf4) aid_placing_vt_set_content

0x2034,	// (0x0009ee1c) aid_placing_vt_set_title_ParamLimits

0x2034,	// (0x0009ee1c) aid_placing_vt_set_title

0x9c13,	// (0x000a69fb) main_image3_pane

0x6152,	// (0x000a2f3a) area_side_right_pane_cp01_ParamLimits

0x6152,	// (0x000a2f3a) area_side_right_pane_cp01

0x6181,	// (0x000a2f69) main_image3_pane_g1_ParamLimits

0x6181,	// (0x000a2f69) main_image3_pane_g1

0x618f,	// (0x000a2f77) main_image3_pane_g2_ParamLimits

0x618f,	// (0x000a2f77) main_image3_pane_g2

0x61a8,	// (0x000a2f90) main_image3_pane_g3_ParamLimits

0x61a8,	// (0x000a2f90) main_image3_pane_g3

0x61c1,	// (0x000a2fa9) main_image3_pane_g4_ParamLimits

0x61c1,	// (0x000a2fa9) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000ac6a7) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000ac6a7) main_image3_pane_g

0x61da,	// (0x000a2fc2) main_image3_pane_t1_ParamLimits

0x61da,	// (0x000a2fc2) main_image3_pane_t1

0x61ff,	// (0x000a2fe7) main_image3_pane_t2_ParamLimits

0x61ff,	// (0x000a2fe7) main_image3_pane_t2

0x621e,	// (0x000a3006) main_image3_pane_t3_ParamLimits

0x621e,	// (0x000a3006) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000ac6b0) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000ac6b0) main_image3_pane_t

0x0df9,	// (0x0009dbe1) grid_sctrl_middle_pane_cp01_ParamLimits

0x0df9,	// (0x0009dbe1) grid_sctrl_middle_pane_cp01

0x627f,	// (0x000a3067) cell_sctrl_middle_pane_cp01_ParamLimits

0x627f,	// (0x000a3067) cell_sctrl_middle_pane_cp01

0x6290,	// (0x000a3078) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6290,	// (0x000a3078) cell_sctrl_middle_pane_cp01_g1

0x9c13,	// (0x000a69fb) main_call4_pane

0x629d,	// (0x000a3085) aid_size_button_call4_ParamLimits

0x629d,	// (0x000a3085) aid_size_button_call4

0x62cf,	// (0x000a30b7) call4_windows_pane_ParamLimits

0x62cf,	// (0x000a30b7) call4_windows_pane

0x62eb,	// (0x000a30d3) grid_call4_button_pane_ParamLimits

0x62eb,	// (0x000a30d3) grid_call4_button_pane

0xd583,	// (0x000aa36b) call4_windows_conf_pane

0x630f,	// (0x000a30f7) popup_call4_audio_first_window_ParamLimits

0x630f,	// (0x000a30f7) popup_call4_audio_first_window

0x633b,	// (0x000a3123) popup_call4_audio_second_window_ParamLimits

0x633b,	// (0x000a3123) popup_call4_audio_second_window

0xd5c0,	// (0x000aa3a8) popup_call4_audio_wait_window_ParamLimits

0xd5c0,	// (0x000aa3a8) popup_call4_audio_wait_window

0x634f,	// (0x000a3137) cell_call4_button_pane_ParamLimits

0x634f,	// (0x000a3137) cell_call4_button_pane

0x6372,	// (0x000a315a) bg_button_pane_cp09_ParamLimits

0x6372,	// (0x000a315a) bg_button_pane_cp09

0x637e,	// (0x000a3166) cell_call4_button_pane_g1_ParamLimits

0x637e,	// (0x000a3166) cell_call4_button_pane_g1

0x638b,	// (0x000a3173) cell_call4_button_pane_t1_ParamLimits

0x638b,	// (0x000a3173) cell_call4_button_pane_t1

0xd608,	// (0x000aa3f0) popup_call4_audio_conf_window_ParamLimits

0xd608,	// (0x000aa3f0) popup_call4_audio_conf_window

0x55fe,	// (0x000a23e6) mup3_progress_pane_t1_ParamLimits

0x561d,	// (0x000a2405) mup3_progress_pane_t2_ParamLimits

0xcf1e,	// (0x000a9d06) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000ac584) mup3_progress_pane_t_ParamLimits

0xcf3b,	// (0x000a9d23) mup_progress_pane_cp03_ParamLimits

0x5b1b,	// (0x000a2903) mup3_control_keys_pane_g4_copy1

0x6014,	// (0x000a2dfc) mp4_rocker2_pane_ParamLimits

0x6014,	// (0x000a2dfc) mp4_rocker2_pane

0xd622,	// (0x000aa40a) mp4_rocker2_pane_g1

0xd62a,	// (0x000aa412) mp4_rocker2_pane_g2

0x639d,	// (0x000a3185) mp4_rocker2_pane_g3

0x63a5,	// (0x000a318d) mp4_rocker2_pane_g4

0x63ad,	// (0x000a3195) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000ac6b9) mp4_rocker2_pane_g

0x9c13,	// (0x000a69fb) main_camera4_pane

0x9c13,	// (0x000a69fb) main_video4_pane

0x5d6f,	// (0x000a2b57) main_video_tele_dialer_pane_t1_ParamLimits

0x5d6f,	// (0x000a2b57) main_video_tele_dialer_pane_t1

0x5d81,	// (0x000a2b69) main_video_tele_dialer_pane_t2_ParamLimits

0x5d81,	// (0x000a2b69) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000ac673) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000ac673) main_video_tele_dialer_pane_t

0x63cd,	// (0x000a31b5) cam4_autofocus_pane_ParamLimits

0x63cd,	// (0x000a31b5) cam4_autofocus_pane

0x63e5,	// (0x000a31cd) cam4_image_uncrop_pane_ParamLimits

0x63e5,	// (0x000a31cd) cam4_image_uncrop_pane

0x63fe,	// (0x000a31e6) cam4_indicators_pane_ParamLimits

0x63fe,	// (0x000a31e6) cam4_indicators_pane

0x641a,	// (0x000a3202) main_camera4_pane_g1_ParamLimits

0x641a,	// (0x000a3202) main_camera4_pane_g1

0x6426,	// (0x000a320e) main_camera4_pane_g2_ParamLimits

0x6426,	// (0x000a320e) main_camera4_pane_g2

0x6426,	// (0x000a320e) main_camera4_pane_g3_ParamLimits

0x6426,	// (0x000a320e) main_camera4_pane_g3

0x6432,	// (0x000a321a) main_camera4_pane_g4_ParamLimits

0x6432,	// (0x000a321a) main_camera4_pane_g4

0x643e,	// (0x000a3226) main_camera4_pane_g5_ParamLimits

0x643e,	// (0x000a3226) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000ac6c4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000ac6c4) main_camera4_pane_g

0x6458,	// (0x000a3240) main_camera4_pane_t1_ParamLimits

0x6458,	// (0x000a3240) main_camera4_pane_t1

0x64a2,	// (0x000a328a) bg_tb_trans_pane_cp06

0x64b8,	// (0x000a32a0) cam4_indicators_pane_g1

0x64c9,	// (0x000a32b1) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000ac6df) cam4_indicators_pane_g

0x64e1,	// (0x000a32c9) cam4_indicators_pane_t1

0x650b,	// (0x000a32f3) main_video4_pane_g1_ParamLimits

0x650b,	// (0x000a32f3) main_video4_pane_g1

0x6517,	// (0x000a32ff) main_video4_pane_g2_ParamLimits

0x6517,	// (0x000a32ff) main_video4_pane_g2

0x6523,	// (0x000a330b) main_video4_pane_g3_ParamLimits

0x6523,	// (0x000a330b) main_video4_pane_g3

0x652f,	// (0x000a3317) main_video4_pane_g4_ParamLimits

0x652f,	// (0x000a3317) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000ac6e6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000ac6e6) main_video4_pane_g

0x6551,	// (0x000a3339) vid4_indicators_pane_ParamLimits

0x6551,	// (0x000a3339) vid4_indicators_pane

0x6570,	// (0x000a3358) video4_image_uncrop_cif_pane_ParamLimits

0x6570,	// (0x000a3358) video4_image_uncrop_cif_pane

0x657f,	// (0x000a3367) video4_image_uncrop_nhd_pane_ParamLimits

0x657f,	// (0x000a3367) video4_image_uncrop_nhd_pane

0x63e5,	// (0x000a31cd) video4_image_uncrop_vga_pane_ParamLimits

0x63e5,	// (0x000a31cd) video4_image_uncrop_vga_pane

0x658e,	// (0x000a3376) bg_tb_trans_pane_cp07

0x65a6,	// (0x000a338e) vid4_indicators_pane_g1

0x65bc,	// (0x000a33a4) vid4_indicators_pane_g2

0x65d0,	// (0x000a33b8) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000ac6f1) vid4_indicators_pane_g

0x6601,	// (0x000a33e9) vid4_indicators_pane_t1

0x6618,	// (0x000a3400) cam4_autofocus_pane_g1

0x6620,	// (0x000a3408) cam4_autofocus_pane_g2

0x6628,	// (0x000a3410) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000ac6fc) cam4_autofocus_pane_g

0x6630,	// (0x000a3418) cam4_autofocus_pane_g3_copy1

0x5d9f,	// (0x000a2b87) video_down_pane_cp_t1

0x5dad,	// (0x000a2b95) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000ac678) video_down_pane_cp_t

0x0df9,	// (0x0009dbe1) popup_vitu2_window_ParamLimits

0x0df9,	// (0x0009dbe1) popup_vitu2_window

0x6638,	// (0x000a3420) aid_size_cell2_itu2_ParamLimits

0x6638,	// (0x000a3420) aid_size_cell2_itu2

0x665a,	// (0x000a3442) aid_size_cell_itu2_ParamLimits

0x665a,	// (0x000a3442) aid_size_cell_itu2

0x66a0,	// (0x000a3488) bg_popup_window_pane_cp09_ParamLimits

0x66a0,	// (0x000a3488) bg_popup_window_pane_cp09

0x66ae,	// (0x000a3496) field_vitu2_entry_pane_ParamLimits

0x66ae,	// (0x000a3496) field_vitu2_entry_pane

0x66ce,	// (0x000a34b6) grid_vitu2_function_pane_ParamLimits

0x66ce,	// (0x000a34b6) grid_vitu2_function_pane

0x6712,	// (0x000a34fa) grid_vitu2_itu_pane_ParamLimits

0x6712,	// (0x000a34fa) grid_vitu2_itu_pane

0x6786,	// (0x000a356e) cell_vitu2_itu_pane_ParamLimits

0x6786,	// (0x000a356e) cell_vitu2_itu_pane

0x679d,	// (0x000a3585) cell_vitu2_function_pane_ParamLimits

0x679d,	// (0x000a3585) cell_vitu2_function_pane

0xd632,	// (0x000aa41a) bg_popup_call_pane_cp08_ParamLimits

0xd632,	// (0x000aa41a) bg_popup_call_pane_cp08

0xd649,	// (0x000aa431) field_vitu2_entry_pane_g1

0xd655,	// (0x000aa43d) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000ac703) field_vitu2_entry_pane_g

0x67e1,	// (0x000a35c9) field_vitu2_entry_pane_t1_ParamLimits

0x67e1,	// (0x000a35c9) field_vitu2_entry_pane_t1

0xa2dc,	// (0x000a70c4) field_vitu2_entry_pane_t2_ParamLimits

0xa2dc,	// (0x000a70c4) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000ac70a) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000ac70a) field_vitu2_entry_pane_t

0x680b,	// (0x000a35f3) bg_button_pane_cp010_ParamLimits

0x680b,	// (0x000a35f3) bg_button_pane_cp010

0x6819,	// (0x000a3601) cell_vitu2_itu_pane_g1

0x6842,	// (0x000a362a) cell_vitu2_itu_pane_t1_ParamLimits

0x6842,	// (0x000a362a) cell_vitu2_itu_pane_t1

0x0ab8,	// (0x0009d8a0) cell_vitu2_itu_pane_t2_ParamLimits

0x0ab8,	// (0x0009d8a0) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000ac714) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000ac714) cell_vitu2_itu_pane_t

0x658e,	// (0x000a3376) bg_button_pane_cp011

0x688e,	// (0x000a3676) cell_vitu2_function_pane_g1

0x9c13,	// (0x000a69fb) main_myfav_hc_pane

0x6260,	// (0x000a3048) popup_image3_note_pane_ParamLimits

0x6260,	// (0x000a3048) popup_image3_note_pane

0x626e,	// (0x000a3056) popup_image3_tool_bar_pane_ParamLimits

0x626e,	// (0x000a3056) popup_image3_tool_bar_pane

0x0b26,	// (0x0009d90e) cell_vitu2_itu_pane_t3_ParamLimits

0x0b26,	// (0x0009d90e) cell_vitu2_itu_pane_t3

0x9c13,	// (0x000a69fb) bg_popup_trans_pane

0xd677,	// (0x000aa45f) grid_image3_tool_bar_pane

0xd681,	// (0x000aa469) bg_popup_trans_pane_g1

0xac9e,	// (0x000a7a86) bg_popup_trans_pane_g2

0xd689,	// (0x000aa471) bg_popup_trans_pane_g3

0xd691,	// (0x000aa479) bg_popup_trans_pane_g4

0xd699,	// (0x000aa481) bg_popup_trans_pane_g5

0xd6a1,	// (0x000aa489) bg_popup_trans_pane_g6

0xd6a9,	// (0x000aa491) bg_popup_trans_pane_g7

0xd6b1,	// (0x000aa499) bg_popup_trans_pane_g8

0xac7e,	// (0x000a7a66) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000ac71b) bg_popup_trans_pane_g

0xd6b9,	// (0x000aa4a1) cell_image3_tool_bar_pane_ParamLimits

0xd6b9,	// (0x000aa4a1) cell_image3_tool_bar_pane

0xcc73,	// (0x000a9a5b) cell_image3_tool_bar_pane_g1

0x9c13,	// (0x000a69fb) bg_popup_trans_pane_cp1

0xd6cf,	// (0x000aa4b7) popup_image3_note_pane_t1

0xd6dd,	// (0x000aa4c5) popup_image3_note_pane_t2

0xd6eb,	// (0x000aa4d3) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000ac72e) popup_image3_note_pane_t

0xd6fb,	// (0x000aa4e3) popup_image3_note_pane_t3_copy1

0x68a2,	// (0x000a368a) bg_myfav_hc_instruction_pane_ParamLimits

0x68a2,	// (0x000a368a) bg_myfav_hc_instruction_pane

0x68ba,	// (0x000a36a2) cell_myfav_contact_pane_ParamLimits

0x68ba,	// (0x000a36a2) cell_myfav_contact_pane

0x68d4,	// (0x000a36bc) cell_myfav_contact_pane_cp1_ParamLimits

0x68d4,	// (0x000a36bc) cell_myfav_contact_pane_cp1

0x68ec,	// (0x000a36d4) cell_myfav_contact_pane_cp2_ParamLimits

0x68ec,	// (0x000a36d4) cell_myfav_contact_pane_cp2

0x6904,	// (0x000a36ec) cell_myfav_contact_pane_cp3_ParamLimits

0x6904,	// (0x000a36ec) cell_myfav_contact_pane_cp3

0x691b,	// (0x000a3703) cell_myfav_contact_pane_cp4_ParamLimits

0x691b,	// (0x000a3703) cell_myfav_contact_pane_cp4

0x6931,	// (0x000a3719) cell_myfav_contact_pane_cp5_ParamLimits

0x6931,	// (0x000a3719) cell_myfav_contact_pane_cp5

0x6945,	// (0x000a372d) cell_myfav_contact_pane_cp6_ParamLimits

0x6945,	// (0x000a372d) cell_myfav_contact_pane_cp6

0x6959,	// (0x000a3741) cell_myfav_contact_pane_cp7_ParamLimits

0x6959,	// (0x000a3741) cell_myfav_contact_pane_cp7

0xd709,	// (0x000aa4f1) listscroll_gen_pane_cp05

0x6971,	// (0x000a3759) main_myfav_hc_pane_g1_ParamLimits

0x6971,	// (0x000a3759) main_myfav_hc_pane_g1

0x698b,	// (0x000a3773) main_myfav_hc_pane_g2_ParamLimits

0x698b,	// (0x000a3773) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000ac735) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000ac735) main_myfav_hc_pane_g

0x69bd,	// (0x000a37a5) main_myfav_hc_pane_t1_ParamLimits

0x69bd,	// (0x000a37a5) main_myfav_hc_pane_t1

0xd712,	// (0x000aa4fa) main_myfav_hc_pane_t2_ParamLimits

0xd712,	// (0x000aa4fa) main_myfav_hc_pane_t2

0xd724,	// (0x000aa50c) main_myfav_hc_pane_t3_ParamLimits

0xd724,	// (0x000aa50c) main_myfav_hc_pane_t3

0x69d4,	// (0x000a37bc) main_myfav_hc_pane_t4_ParamLimits

0x69d4,	// (0x000a37bc) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000ac73c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000ac73c) main_myfav_hc_pane_t

0xcc73,	// (0x000a9a5b) bg_myfav_hc_instruction_pane_g1

0xd736,	// (0x000aa51e) cell_myfav_contact_pane_g1_ParamLimits

0xd736,	// (0x000aa51e) cell_myfav_contact_pane_g1

0xd736,	// (0x000aa51e) cell_myfav_contact_pane_g2_ParamLimits

0xd736,	// (0x000aa51e) cell_myfav_contact_pane_g2

0xd742,	// (0x000aa52a) cell_myfav_contact_pane_g3_ParamLimits

0xd742,	// (0x000aa52a) cell_myfav_contact_pane_g3

0xcf08,	// (0x000a9cf0) cell_myfav_contact_pane_g4_ParamLimits

0xcf08,	// (0x000a9cf0) cell_myfav_contact_pane_g4

0xd74f,	// (0x000aa537) cell_myfav_contact_pane_g5_ParamLimits

0xd74f,	// (0x000aa537) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000ac747) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000ac747) cell_myfav_contact_pane_g

0x69a5,	// (0x000a378d) main_myfav_hc_pane_g3_ParamLimits

0x69a5,	// (0x000a378d) main_myfav_hc_pane_g3

0x0d0b,	// (0x0009daf3) popup_adpt_find_window

0x69fe,	// (0x000a37e6) afind_page_pane_ParamLimits

0x69fe,	// (0x000a37e6) afind_page_pane

0x6a0b,	// (0x000a37f3) aid_size_cell_afind_ParamLimits

0x6a0b,	// (0x000a37f3) aid_size_cell_afind

0x6a25,	// (0x000a380d) bg_popup_sub_pane_cp09_ParamLimits

0x6a25,	// (0x000a380d) bg_popup_sub_pane_cp09

0x6a32,	// (0x000a381a) find_pane_cp01_ParamLimits

0x6a32,	// (0x000a381a) find_pane_cp01

0xd75b,	// (0x000aa543) grid_afind_control_pane_ParamLimits

0xd75b,	// (0x000aa543) grid_afind_control_pane

0x6a3f,	// (0x000a3827) grid_afind_pane_ParamLimits

0x6a3f,	// (0x000a3827) grid_afind_pane

0x6a5b,	// (0x000a3843) cell_afind_pane_ParamLimits

0x6a5b,	// (0x000a3843) cell_afind_pane

0xcc73,	// (0x000a9a5b) afind_page_pane_g1

0x6aa7,	// (0x000a388f) afind_page_pane_g2

0x6ab0,	// (0x000a3898) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000ac752) afind_page_pane_g

0x6ab9,	// (0x000a38a1) afind_page_pane_t1

0xd76f,	// (0x000aa557) cell_afind_grid_control_pane_ParamLimits

0xd76f,	// (0x000aa557) cell_afind_grid_control_pane

0xd577,	// (0x000aa35f) bg_button_pane_cp69_ParamLimits

0xd577,	// (0x000aa35f) bg_button_pane_cp69

0x6ad9,	// (0x000a38c1) cell_afind_pane_g1_ParamLimits

0x6ad9,	// (0x000a38c1) cell_afind_pane_g1

0x6ae6,	// (0x000a38ce) cell_afind_pane_t1_ParamLimits

0x6ae6,	// (0x000a38ce) cell_afind_pane_t1

0xaa87,	// (0x000a786f) bg_button_pane_cp72

0xd77e,	// (0x000aa566) cell_afind_grid_control_pane_g1

0x4021,	// (0x000a0e09) aid_image_placing_area_ParamLimits

0x4021,	// (0x000a0e09) aid_image_placing_area

0xd243,	// (0x000aa02b) field_vitu_entry_pane_g1_ParamLimits

0xd243,	// (0x000aa02b) field_vitu_entry_pane_g1

0xd24f,	// (0x000aa037) field_vitu_entry_pane_g2_ParamLimits

0xd24f,	// (0x000aa037) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000ac603) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000ac603) field_vitu_entry_pane_g

0x5ba5,	// (0x000a298d) cell_vitu_itu_pane_g1_ParamLimits

0x5bf5,	// (0x000a29dd) cell_vitu_itu_pane_t3_ParamLimits

0x5bf5,	// (0x000a29dd) cell_vitu_itu_pane_t3

0xd527,	// (0x000aa30f) mp4_progress_pane_t1_ParamLimits

0xd540,	// (0x000aa328) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000ac698) mp4_progress_pane_t_ParamLimits

0xd559,	// (0x000aa341) mup_progress_pane_cp04_ParamLimits

0x69e8,	// (0x000a37d0) main_myfav_hc_pane_t5_ParamLimits

0x69e8,	// (0x000a37d0) main_myfav_hc_pane_t5

0x0bc7,	// (0x0009d9af) aid_zoom_text_primary

0x0d0b,	// (0x0009daf3) popup_adpt_find_window_ParamLimits

0xa2ce,	// (0x000a70b6) main_cam_set_pane

0x640c,	// (0x000a31f4) cam4_zoom_pane_ParamLimits

0x640c,	// (0x000a31f4) cam4_zoom_pane

0x6af8,	// (0x000a38e0) main_cam_set_pane_g1_ParamLimits

0x6af8,	// (0x000a38e0) main_cam_set_pane_g1

0x6b06,	// (0x000a38ee) main_cam_set_pane_g2_ParamLimits

0x6b06,	// (0x000a38ee) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000ac759) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000ac759) main_cam_set_pane_g

0x6b12,	// (0x000a38fa) main_cam_set_pane_t1_ParamLimits

0x6b12,	// (0x000a38fa) main_cam_set_pane_t1

0x6b2e,	// (0x000a3916) main_cset_listscroll_pane_ParamLimits

0x6b2e,	// (0x000a3916) main_cset_listscroll_pane

0x6b5d,	// (0x000a3945) main_cset_slider_pane_ParamLimits

0x6b5d,	// (0x000a3945) main_cset_slider_pane

0xd78f,	// (0x000aa577) main_cset_list_pane_ParamLimits

0xd78f,	// (0x000aa577) main_cset_list_pane

0xd79f,	// (0x000aa587) scroll_pane_cp028

0x6b7e,	// (0x000a3966) aid_area_touch_slider

0x6b9a,	// (0x000a3982) cset_slider_pane

0x6bc4,	// (0x000a39ac) main_cset_slider_pane_g1

0x6bd9,	// (0x000a39c1) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000ac75e) main_cset_slider_pane_g

0xd7d8,	// (0x000aa5c0) main_cset_slider_pane_t1

0x6c95,	// (0x000a3a7d) main_cset_slider_pane_t2

0x6caf,	// (0x000a3a97) main_cset_slider_pane_t3

0x6cc9,	// (0x000a3ab1) main_cset_slider_pane_t4

0x6ce3,	// (0x000a3acb) main_cset_slider_pane_t5

0x6cfd,	// (0x000a3ae5) main_cset_slider_pane_t6

0x6d12,	// (0x000a3afa) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000ac783) main_cset_slider_pane_t

0x6e16,	// (0x000a3bfe) cset_list_set_pane_ParamLimits

0x6e16,	// (0x000a3bfe) cset_list_set_pane

0x6e27,	// (0x000a3c0f) aid_position_infowindow_above

0x6e2f,	// (0x000a3c17) aid_position_infowindow_below

0x6e37,	// (0x000a3c1f) cset_list_set_pane_g1_ParamLimits

0x6e37,	// (0x000a3c1f) cset_list_set_pane_g1

0x6e43,	// (0x000a3c2b) cset_list_set_pane_g3_ParamLimits

0x6e43,	// (0x000a3c2b) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000ac7a2) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000ac7a2) cset_list_set_pane_g

0x6e52,	// (0x000a3c3a) cset_list_set_pane_t1_ParamLimits

0x6e52,	// (0x000a3c3a) cset_list_set_pane_t1

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp021_ParamLimits

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp021

0xb543,	// (0x000a832b) cset_slider_pane_g1

0xb555,	// (0x000a833d) cset_slider_pane_g2

0xb54c,	// (0x000a8334) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000ac7a7) cset_slider_pane_g

0x6e67,	// (0x000a3c4f) aid_area_touch_cam4_zoom

0x6e6f,	// (0x000a3c57) cam4_zoom_cont_pane

0x6e77,	// (0x000a3c5f) cam4_zoom_pane_g1

0x6e7f,	// (0x000a3c67) cam4_zoom_pane_g2

0x6e87,	// (0x000a3c6f) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000ac7ae) cam4_zoom_pane_g

0x6e8f,	// (0x000a3c77) cam4_zoom_cont_pane_g1

0x6e98,	// (0x000a3c80) cam4_zoom_cont_pane_g2

0x6ea1,	// (0x000a3c89) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000ac7b5) cam4_zoom_cont_pane_g

0x62b7,	// (0x000a309f) call4_image_pane_ParamLimits

0x62b7,	// (0x000a309f) call4_image_pane

0xd583,	// (0x000aa36b) call4_windows_conf_pane_ParamLimits

0xd59e,	// (0x000aa386) popup_call4_audio_in_window_ParamLimits

0xd59e,	// (0x000aa386) popup_call4_audio_in_window

0x9c13,	// (0x000a69fb) bg_popup_call2_act_pane_cp02

0xd600,	// (0x000aa3e8) call4_list_conf_pane

0xcc73,	// (0x000a9a5b) call4_image_pane_g1

0xcc73,	// (0x000a9a5b) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000ac4c4) call4_image_pane_g

0xd878,	// (0x000aa660) list_single_graphic_popup_conf4_pane_ParamLimits

0xd878,	// (0x000aa660) list_single_graphic_popup_conf4_pane

0x9c13,	// (0x000a69fb) list_highlight_pane_cp022

0xd88d,	// (0x000aa675) list_single_graphic_popup_conf4_pane_g1

0xb23d,	// (0x000a8025) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000ac7bc) list_single_graphic_popup_conf4_pane_g

0xd895,	// (0x000aa67d) list_single_graphic_popup_conf4_pane_t1

0x218e,	// (0x0009ef76) popup_vtel_slider_window_ParamLimits

0x218e,	// (0x0009ef76) popup_vtel_slider_window

0xd565,	// (0x000aa34d) dialer2_ne_pane_t2_ParamLimits

0xd565,	// (0x000aa34d) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000ac69d) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000ac69d) dialer2_ne_pane_t

0xa2ce,	// (0x000a70b6) bg_popup_sub_pane_cp010_ParamLimits

0xa2ce,	// (0x000a70b6) bg_popup_sub_pane_cp010

0x6eaa,	// (0x000a3c92) popup_vtel_slider_window_g1_ParamLimits

0x6eaa,	// (0x000a3c92) popup_vtel_slider_window_g1

0x6eb6,	// (0x000a3c9e) popup_vtel_slider_window_g2_ParamLimits

0x6eb6,	// (0x000a3c9e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000ac7c1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000ac7c1) popup_vtel_slider_window_g

0x6efe,	// (0x000a3ce6) vtel_slider_pane_ParamLimits

0x6efe,	// (0x000a3ce6) vtel_slider_pane

0x6f0d,	// (0x000a3cf5) vtel_slider_pane_g1_ParamLimits

0x6f0d,	// (0x000a3cf5) vtel_slider_pane_g1

0x6f1a,	// (0x000a3d02) vtel_slider_pane_g2_ParamLimits

0x6f1a,	// (0x000a3d02) vtel_slider_pane_g2

0x6f27,	// (0x000a3d0f) vtel_slider_pane_g3_ParamLimits

0x6f27,	// (0x000a3d0f) vtel_slider_pane_g3

0x6f0d,	// (0x000a3cf5) vtel_slider_pane_g4_ParamLimits

0x6f0d,	// (0x000a3cf5) vtel_slider_pane_g4

0x6f34,	// (0x000a3d1c) vtel_slider_pane_g5_ParamLimits

0x6f34,	// (0x000a3d1c) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000ac7ca) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000ac7ca) vtel_slider_pane_g

0xa2ce,	// (0x000a70b6) main_gallery2_pane

0x6680,	// (0x000a3468) aid_size_row_itut2_dropdow_list_ParamLimits

0x6680,	// (0x000a3468) aid_size_row_itut2_dropdow_list

0x66f0,	// (0x000a34d8) grid_vitu2_function_top_pane_ParamLimits

0x66f0,	// (0x000a34d8) grid_vitu2_function_top_pane

0x6742,	// (0x000a352a) popup_vitu2_dropdown_list_window_ParamLimits

0x6742,	// (0x000a352a) popup_vitu2_dropdown_list_window

0x6762,	// (0x000a354a) popup_vitu2_match_list_window

0x6f41,	// (0x000a3d29) cell_vitu2_function_top_pane_ParamLimits

0x6f41,	// (0x000a3d29) cell_vitu2_function_top_pane

0x6f61,	// (0x000a3d49) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f61,	// (0x000a3d49) cell_vitu2_function_top_pane_cp01

0x6f7f,	// (0x000a3d67) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f7f,	// (0x000a3d67) cell_vitu2_function_top_wide_pane

0x658e,	// (0x000a3376) bg_button_pane_cp012

0x6f9d,	// (0x000a3d85) cell_vitu2_function_top_pane_g1

0x6fb0,	// (0x000a3d98) bg_button_pane_cp013_ParamLimits

0x6fb0,	// (0x000a3d98) bg_button_pane_cp013

0x6fcc,	// (0x000a3db4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fcc,	// (0x000a3db4) cell_vitu2_function_top_wide_pane_g1

0x6fe4,	// (0x000a3dcc) bg_popup_sub_pane_cp20

0x6ff2,	// (0x000a3dda) list_vitu2_match_list_pane

0xd681,	// (0x000aa469) bg_popup_sub_pane_cp20_g1

0xd689,	// (0x000aa471) bg_popup_sub_pane_cp20_g2

0xac9e,	// (0x000a7a86) bg_popup_sub_pane_cp20_g3

0xd691,	// (0x000aa479) bg_popup_sub_pane_cp20_g4

0xac7e,	// (0x000a7a66) bg_popup_sub_pane_cp20_g5

0xd8ab,	// (0x000aa693) bg_popup_sub_pane_cp20_g6

0xd6a1,	// (0x000aa489) bg_popup_sub_pane_cp20_g7

0xd6a9,	// (0x000aa491) bg_popup_sub_pane_cp20_g8

0xd6b1,	// (0x000aa499) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000ac7d5) bg_popup_sub_pane_cp20_g

0x700a,	// (0x000a3df2) list_vitu2_match_list_item_pane_ParamLimits

0x700a,	// (0x000a3df2) list_vitu2_match_list_item_pane

0x701c,	// (0x000a3e04) list_vitu2_match_list_item_pane_t1

0x1165,	// (0x0009df4d) bg_popup_sub_pane_cp21

0x705a,	// (0x000a3e42) grid_vitu2_dropdown_list_pane

0x7062,	// (0x000a3e4a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7062,	// (0x000a3e4a) cell_vitu2_dropdown_list_char_pane

0x7087,	// (0x000a3e6f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7087,	// (0x000a3e6f) cell_vitu2_dropdown_list_ctrl_pane

0xd8b3,	// (0x000aa69b) cell_vitu2_dropdown_list_char_pane_g1

0xd8bc,	// (0x000aa6a4) cell_vitu2_dropdown_list_char_pane_g2

0xd8c5,	// (0x000aa6ad) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000ac7f2) cell_vitu2_dropdown_list_char_pane_g

0x70b5,	// (0x000a3e9d) cell_vitu2_dropdown_list_char_pane_t1

0x70c3,	// (0x000a3eab) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70c3,	// (0x000a3eab) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70d3,	// (0x000a3ebb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70d3,	// (0x000a3ebb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70e4,	// (0x000a3ecc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70e4,	// (0x000a3ecc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70f4,	// (0x000a3edc) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70f4,	// (0x000a3edc) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64a2,	// (0x000a328a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64a2,	// (0x000a328a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000ac7f9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000ac7f9) cell_vitu2_dropdown_list_ctrl_pane_g

0x710d,	// (0x000a3ef5) aid_size_cell_gallery2_ParamLimits

0x710d,	// (0x000a3ef5) aid_size_cell_gallery2

0x7127,	// (0x000a3f0f) grid_gallery2_pane_ParamLimits

0x7127,	// (0x000a3f0f) grid_gallery2_pane

0x5a2a,	// (0x000a2812) scroll_pane_cp029_ParamLimits

0x5a2a,	// (0x000a2812) scroll_pane_cp029

0x713e,	// (0x000a3f26) cell_gallery2_pane_ParamLimits

0x713e,	// (0x000a3f26) cell_gallery2_pane

0xd8ce,	// (0x000aa6b6) cell_gallery2_pane_g2

0x718a,	// (0x000a3f72) cell_gallery2_pane_g3

0xd8d6,	// (0x000aa6be) cell_gallery2_pane_g4

0xd8de,	// (0x000aa6c6) cell_gallery2_pane_g5

0xb40b,	// (0x000a81f3) grid_highlight_pane_cp10

0x6762,	// (0x000a354a) popup_vitu2_match_list_window_ParamLimits

0x6776,	// (0x000a355e) popup_vitu2_query_window_ParamLimits

0x6776,	// (0x000a355e) popup_vitu2_query_window

0x1165,	// (0x0009df4d) bg_vitu2_candi_button_pane

0xd8b3,	// (0x000aa69b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8bc,	// (0x000aa6a4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8c5,	// (0x000aa6ad) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7192,	// (0x000a3f7a) bg_button_pane_cp015

0x71a4,	// (0x000a3f8c) bg_button_pane_cp016

0x71b7,	// (0x000a3f9f) bg_button_pane_cp017

0xc822,	// (0x000a960a) bg_popup_sub_pane_cp22

0xd8e6,	// (0x000aa6ce) popup_vitu2_query_window_g1

0x71fc,	// (0x000a3fe4) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000ac804) popup_vitu2_query_window_g

0x7219,	// (0x000a4001) popup_vitu2_query_window_t1_ParamLimits

0x7219,	// (0x000a4001) popup_vitu2_query_window_t1

0x724c,	// (0x000a4034) popup_vitu2_query_window_t2_ParamLimits

0x724c,	// (0x000a4034) popup_vitu2_query_window_t2

0x725e,	// (0x000a4046) popup_vitu2_query_window_t3_ParamLimits

0x725e,	// (0x000a4046) popup_vitu2_query_window_t3

0x7286,	// (0x000a406e) popup_vitu2_query_window_t4_ParamLimits

0x7286,	// (0x000a406e) popup_vitu2_query_window_t4

0x72a9,	// (0x000a4091) popup_vitu2_query_window_t5_ParamLimits

0x72a9,	// (0x000a4091) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000ac80b) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000ac80b) popup_vitu2_query_window_t

0xd787,	// (0x000aa56f) main_cset_text_pane

0x6b7e,	// (0x000a3966) aid_area_touch_slider_ParamLimits

0x6b9a,	// (0x000a3982) cset_slider_pane_ParamLimits

0x6bc4,	// (0x000a39ac) main_cset_slider_pane_g1_ParamLimits

0x6bd9,	// (0x000a39c1) main_cset_slider_pane_g2_ParamLimits

0xd7a8,	// (0x000aa590) main_cset_slider_pane_g3_ParamLimits

0xd7a8,	// (0x000aa590) main_cset_slider_pane_g3

0x6bee,	// (0x000a39d6) main_cset_slider_pane_g4_ParamLimits

0x6bee,	// (0x000a39d6) main_cset_slider_pane_g4

0x6bfd,	// (0x000a39e5) main_cset_slider_pane_g5_ParamLimits

0x6bfd,	// (0x000a39e5) main_cset_slider_pane_g5

0x6c09,	// (0x000a39f1) main_cset_slider_pane_g6_ParamLimits

0x6c09,	// (0x000a39f1) main_cset_slider_pane_g6

0xf976,	// (0x000ac75e) main_cset_slider_pane_g_ParamLimits

0xd7d8,	// (0x000aa5c0) main_cset_slider_pane_t1_ParamLimits

0x6c95,	// (0x000a3a7d) main_cset_slider_pane_t2_ParamLimits

0x6caf,	// (0x000a3a97) main_cset_slider_pane_t3_ParamLimits

0x6cc9,	// (0x000a3ab1) main_cset_slider_pane_t4_ParamLimits

0x6ce3,	// (0x000a3acb) main_cset_slider_pane_t5_ParamLimits

0x6cfd,	// (0x000a3ae5) main_cset_slider_pane_t6_ParamLimits

0x6d12,	// (0x000a3afa) main_cset_slider_pane_t7_ParamLimits

0x6d3c,	// (0x000a3b24) main_cset_slider_pane_t8_ParamLimits

0x6d3c,	// (0x000a3b24) main_cset_slider_pane_t8

0x6d64,	// (0x000a3b4c) main_cset_slider_pane_t9_ParamLimits

0x6d64,	// (0x000a3b4c) main_cset_slider_pane_t9

0x6d8c,	// (0x000a3b74) main_cset_slider_pane_t10_ParamLimits

0x6d8c,	// (0x000a3b74) main_cset_slider_pane_t10

0x6db4,	// (0x000a3b9c) main_cset_slider_pane_t11_ParamLimits

0x6db4,	// (0x000a3b9c) main_cset_slider_pane_t11

0x6ddc,	// (0x000a3bc4) main_cset_slider_pane_t12_ParamLimits

0x6ddc,	// (0x000a3bc4) main_cset_slider_pane_t12

0x6df9,	// (0x000a3be1) main_cset_slider_pane_t13_ParamLimits

0x6df9,	// (0x000a3be1) main_cset_slider_pane_t13

0xf99b,	// (0x000ac783) main_cset_slider_pane_t_ParamLimits

0x9c13,	// (0x000a69fb) bg_popup_sub_pane_cp011

0xd8f2,	// (0x000aa6da) main_cset_text_pane_g1

0xd8fa,	// (0x000aa6e2) main_cset_text_pane_t1

0xd908,	// (0x000aa6f0) main_cset_text_pane_t2

0xd916,	// (0x000aa6fe) main_cset_text_pane_t3

0xd924,	// (0x000aa70c) main_cset_text_pane_t4

0xd932,	// (0x000aa71a) main_cset_text_pane_t5

0xd940,	// (0x000aa728) main_cset_text_pane_t6

0xd94e,	// (0x000aa736) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000ac81a) main_cset_text_pane_t

0x9c13,	// (0x000a69fb) main_cam4_burst_pane

0x9c13,	// (0x000a69fb) main_cam5_pane

0x6ac7,	// (0x000a38af) bg_button_pane_cp019

0x6ad0,	// (0x000a38b8) bg_button_pane_cp020

0xd7b4,	// (0x000aa59c) main_cset_slider_pane_g7_ParamLimits

0xd7b4,	// (0x000aa59c) main_cset_slider_pane_g7

0xd7c0,	// (0x000aa5a8) main_cset_slider_pane_g8_ParamLimits

0xd7c0,	// (0x000aa5a8) main_cset_slider_pane_g8

0x6c1d,	// (0x000a3a05) main_cset_slider_pane_g9_ParamLimits

0x6c1d,	// (0x000a3a05) main_cset_slider_pane_g9

0x6c29,	// (0x000a3a11) main_cset_slider_pane_g10_ParamLimits

0x6c29,	// (0x000a3a11) main_cset_slider_pane_g10

0x6c35,	// (0x000a3a1d) main_cset_slider_pane_g11_ParamLimits

0x6c35,	// (0x000a3a1d) main_cset_slider_pane_g11

0x6c41,	// (0x000a3a29) main_cset_slider_pane_g12_ParamLimits

0x6c41,	// (0x000a3a29) main_cset_slider_pane_g12

0x6c4d,	// (0x000a3a35) main_cset_slider_pane_g13_ParamLimits

0x6c4d,	// (0x000a3a35) main_cset_slider_pane_g13

0x6c59,	// (0x000a3a41) main_cset_slider_pane_g14_ParamLimits

0x6c59,	// (0x000a3a41) main_cset_slider_pane_g14

0x6c65,	// (0x000a3a4d) main_cset_slider_pane_g15_ParamLimits

0x6c65,	// (0x000a3a4d) main_cset_slider_pane_g15

0xd806,	// (0x000aa5ee) main_cset_slider_pane_t14_ParamLimits

0xd806,	// (0x000aa5ee) main_cset_slider_pane_t14

0xd83f,	// (0x000aa627) main_cset_slider_pane_t15_ParamLimits

0xd83f,	// (0x000aa627) main_cset_slider_pane_t15

0x7322,	// (0x000a410a) aid_cam4_burst_size_cell_ParamLimits

0x7322,	// (0x000a410a) aid_cam4_burst_size_cell

0x733e,	// (0x000a4126) grid_cam4_burst_pane_ParamLimits

0x733e,	// (0x000a4126) grid_cam4_burst_pane

0x7370,	// (0x000a4158) linegrid_cam4_burst_pane_ParamLimits

0x7370,	// (0x000a4158) linegrid_cam4_burst_pane

0x738e,	// (0x000a4176) scroll_pane_cp30_ParamLimits

0x738e,	// (0x000a4176) scroll_pane_cp30

0x739a,	// (0x000a4182) cell_cam4_burst_pane_ParamLimits

0x739a,	// (0x000a4182) cell_cam4_burst_pane

0xd9ca,	// (0x000aa7b2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ca,	// (0x000aa7b2) linegrid_cam4_burst_pane_g1

0x73da,	// (0x000a41c2) linegrid_cam4_burst_pane_g2_ParamLimits

0x73da,	// (0x000a41c2) linegrid_cam4_burst_pane_g2

0xd9d7,	// (0x000aa7bf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d7,	// (0x000aa7bf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000ac829) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000ac829) linegrid_cam4_burst_pane_g

0x73eb,	// (0x000a41d3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73eb,	// (0x000a41d3) linegrid_cam4_burst_pane_g3_copy1

0xd9e4,	// (0x000aa7cc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e4,	// (0x000aa7cc) linegrid_cam4_burst_pane_g4

0x7405,	// (0x000a41ed) linegrid_cam4_burst_pane_g5_ParamLimits

0x7405,	// (0x000a41ed) linegrid_cam4_burst_pane_g5

0x7416,	// (0x000a41fe) linegrid_cam4_burst_pane_g6_ParamLimits

0x7416,	// (0x000a41fe) linegrid_cam4_burst_pane_g6

0xd9f1,	// (0x000aa7d9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f1,	// (0x000aa7d9) linegrid_cam4_burst_pane_g7

0x742d,	// (0x000a4215) cell_cam4_burst_pane_g1

0xda0a,	// (0x000aa7f2) main_cam5_pane_t1_ParamLimits

0xda0a,	// (0x000aa7f2) main_cam5_pane_t1

0xda1c,	// (0x000aa804) main_cam5_pane_t2_ParamLimits

0xda1c,	// (0x000aa804) main_cam5_pane_t2

0xda2e,	// (0x000aa816) main_cam5_pane_t3_ParamLimits

0xda2e,	// (0x000aa816) main_cam5_pane_t3

0xda40,	// (0x000aa828) main_cam5_pane_t4_ParamLimits

0xda40,	// (0x000aa828) main_cam5_pane_t4

0xda58,	// (0x000aa840) main_cam5_pane_t5_ParamLimits

0xda58,	// (0x000aa840) main_cam5_pane_t5

0xda6c,	// (0x000aa854) main_cam5_pane_t6_ParamLimits

0xda6c,	// (0x000aa854) main_cam5_pane_t6

0xda80,	// (0x000aa868) main_cam5_pane_t7_ParamLimits

0xda80,	// (0x000aa868) main_cam5_pane_t7

0xda92,	// (0x000aa87a) main_cam5_pane_t8_ParamLimits

0xda92,	// (0x000aa87a) main_cam5_pane_t8

0xdab0,	// (0x000aa898) main_cam5_pane_t9_ParamLimits

0xdab0,	// (0x000aa898) main_cam5_pane_t9

0xdac2,	// (0x000aa8aa) main_cam5_pane_t10_ParamLimits

0xdac2,	// (0x000aa8aa) main_cam5_pane_t10

0xdad4,	// (0x000aa8bc) main_cam5_pane_t11_ParamLimits

0xdad4,	// (0x000aa8bc) main_cam5_pane_t11

0xdae8,	// (0x000aa8d0) main_cam5_pane_t12_ParamLimits

0xdae8,	// (0x000aa8d0) main_cam5_pane_t12

0xdaff,	// (0x000aa8e7) main_cam5_pane_t13_ParamLimits

0xdaff,	// (0x000aa8e7) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000ac835) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000ac835) main_cam5_pane_t

0x0db8,	// (0x0009dba0) popup_scut_keymap_window_ParamLimits

0x0db8,	// (0x0009dba0) popup_scut_keymap_window

0x7440,	// (0x000a4228) aid_size_cell_brow_shortcut

0xb40b,	// (0x000a81f3) bg_popup_window_pane_cp010

0x744c,	// (0x000a4234) grid_scut_pane

0x7458,	// (0x000a4240) cell_scut_pane_ParamLimits

0x7458,	// (0x000a4240) cell_scut_pane

0x7473,	// (0x000a425b) cell_scut_pane_g1

0xdb22,	// (0x000aa90a) cell_scut_pane_t1

0xdb31,	// (0x000aa919) cell_scut_pane_t2

0x747c,	// (0x000a4264) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000ac850) cell_scut_pane_t

0x521f,	// (0x000a2007) main_mup3_pane_g8_ParamLimits

0x521f,	// (0x000a2007) main_mup3_pane_g8

0x6690,	// (0x000a3478) area_vitu2_query_pane_ParamLimits

0x6690,	// (0x000a3478) area_vitu2_query_pane

0x71ca,	// (0x000a3fb2) input_focus_pane_cp08

0xdb40,	// (0x000aa928) area_vitu2_query_pane_g1

0x748a,	// (0x000a4272) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ac857) area_vitu2_query_pane_g

0x749b,	// (0x000a4283) area_vitu2_query_pane_t1_ParamLimits

0x749b,	// (0x000a4283) area_vitu2_query_pane_t1

0x74af,	// (0x000a4297) area_vitu2_query_pane_t2_ParamLimits

0x74af,	// (0x000a4297) area_vitu2_query_pane_t2

0x74c3,	// (0x000a42ab) area_vitu2_query_pane_t3_ParamLimits

0x74c3,	// (0x000a42ab) area_vitu2_query_pane_t3

0xa313,	// (0x000a70fb) area_vitu2_query_pane_t4_ParamLimits

0xa313,	// (0x000a70fb) area_vitu2_query_pane_t4

0xa33b,	// (0x000a7123) area_vitu2_query_pane_t5_ParamLimits

0xa33b,	// (0x000a7123) area_vitu2_query_pane_t5

0xa363,	// (0x000a714b) area_vitu2_query_pane_t6_ParamLimits

0xa363,	// (0x000a714b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ac85c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ac85c) area_vitu2_query_pane_t

0x74eb,	// (0x000a42d3) bg_button_pane_cp018

0x74f9,	// (0x000a42e1) bg_button_pane_cp021

0x7505,	// (0x000a42ed) bg_button_pane_cp022

0x7516,	// (0x000a42fe) input_focus_pane_cp09

0x363b,	// (0x000a0423) aid_size_touch_mv_arrow_left

0x3666,	// (0x000a044e) aid_size_touch_mv_arrow_right

0x6c7d,	// (0x000a3a65) main_cset_slider_pane_g16_ParamLimits

0x6c7d,	// (0x000a3a65) main_cset_slider_pane_g16

0x6c89,	// (0x000a3a71) main_cset_slider_pane_g17_ParamLimits

0x6c89,	// (0x000a3a71) main_cset_slider_pane_g17

0x742d,	// (0x000a4215) cell_cam4_burst_pane_g1_ParamLimits

0x9c13,	// (0x000a69fb) compa_mode_pane

0x6ec2,	// (0x000a3caa) popup_vtel_slider_window_g3_ParamLimits

0x6ec2,	// (0x000a3caa) popup_vtel_slider_window_g3

0x6ed6,	// (0x000a3cbe) popup_vtel_slider_window_g4_ParamLimits

0x6ed6,	// (0x000a3cbe) popup_vtel_slider_window_g4

0x6eea,	// (0x000a3cd2) popup_vtel_slider_window_t1_ParamLimits

0x6eea,	// (0x000a3cd2) popup_vtel_slider_window_t1

0x9c13,	// (0x000a69fb) main_cl_pane

0xc84e,	// (0x000a9636) popup_imed_adjust2_window_ParamLimits

0xc822,	// (0x000a960a) bg_tb_trans_pane_cp05_ParamLimits

0xd178,	// (0x000a9f60) popup_imed_adjust2_window_g1_ParamLimits

0xd187,	// (0x000a9f6f) popup_imed_adjust2_window_g2_ParamLimits

0xd187,	// (0x000a9f6f) popup_imed_adjust2_window_g2

0xd193,	// (0x000a9f7b) popup_imed_adjust2_window_g3_ParamLimits

0xd193,	// (0x000a9f7b) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000ac5c7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000ac5c7) popup_imed_adjust2_window_g

0xd19f,	// (0x000a9f87) popup_imed_adjust2_window_t1_ParamLimits

0xd1b7,	// (0x000a9f9f) slider_imed_adjust_pane_ParamLimits

0xd1cb,	// (0x000a9fb3) slider_imed_adjust_pane_g1_ParamLimits

0xd1db,	// (0x000a9fc3) slider_imed_adjust_pane_g2_ParamLimits

0xd1eb,	// (0x000a9fd3) slider_imed_adjust_pane_g3_ParamLimits

0xd1fc,	// (0x000a9fe4) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000ac5ce) slider_imed_adjust_pane_g_ParamLimits

0x63b5,	// (0x000a319d) aid_touch_area_cam4_ParamLimits

0x63b5,	// (0x000a319d) aid_touch_area_cam4

0x63c5,	// (0x000a31ad) battery_pane_cp01

0x644c,	// (0x000a3234) main_camera4_pane_g6_ParamLimits

0x644c,	// (0x000a3234) main_camera4_pane_g6

0x646a,	// (0x000a3252) main_camera4_pane_t2_ParamLimits

0x646a,	// (0x000a3252) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000ac6d1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000ac6d1) main_camera4_pane_t

0x64fb,	// (0x000a32e3) aid_touch_area_vid4_ParamLimits

0x64fb,	// (0x000a32e3) aid_touch_area_vid4

0x653b,	// (0x000a3323) main_video4_pane_g5_ParamLimits

0x653b,	// (0x000a3323) main_video4_pane_g5

0x6561,	// (0x000a3349) vid4_progress_pane_ParamLimits

0x6561,	// (0x000a3349) vid4_progress_pane

0xd7cc,	// (0x000aa5b4) main_cset_slider_pane_g18_ParamLimits

0xd7cc,	// (0x000aa5b4) main_cset_slider_pane_g18

0xd9fe,	// (0x000aa7e6) cell_cam4_burst_pane_g2_ParamLimits

0xd9fe,	// (0x000aa7e6) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000ac830) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000ac830) cell_cam4_burst_pane_g

0x7527,	// (0x000a430f) bg_cl_pane_ParamLimits

0x7527,	// (0x000a430f) bg_cl_pane

0x7533,	// (0x000a431b) cl_header_pane_ParamLimits

0x7533,	// (0x000a431b) cl_header_pane

0x753f,	// (0x000a4327) cl_listscroll_pane_ParamLimits

0x753f,	// (0x000a4327) cl_listscroll_pane

0xdb4c,	// (0x000aa934) bg_cl_pane_g1

0xdb54,	// (0x000aa93c) bg_cl_pane_g2

0xdb5c,	// (0x000aa944) bg_cl_pane_g3

0xdb64,	// (0x000aa94c) bg_cl_pane_g4

0xdb6c,	// (0x000aa954) bg_cl_pane_g5

0xdb74,	// (0x000aa95c) bg_cl_pane_g6

0xdb7c,	// (0x000aa964) bg_cl_pane_g7

0xdb84,	// (0x000aa96c) bg_cl_pane_g8

0xdb8c,	// (0x000aa974) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ac86b) bg_cl_pane_g

0x754b,	// (0x000a4333) aid_height_cl_leading_ParamLimits

0x754b,	// (0x000a4333) aid_height_cl_leading

0x7557,	// (0x000a433f) aid_height_cl_text_ParamLimits

0x7557,	// (0x000a433f) aid_height_cl_text

0x0df9,	// (0x0009dbe1) bg_cl_header_pane_ParamLimits

0x0df9,	// (0x0009dbe1) bg_cl_header_pane

0x756f,	// (0x000a4357) cl_header_pane_g1_ParamLimits

0x756f,	// (0x000a4357) cl_header_pane_g1

0x757c,	// (0x000a4364) cl_header_pane_t1_ParamLimits

0x757c,	// (0x000a4364) cl_header_pane_t1

0xdb94,	// (0x000aa97c) cl_list_pane

0xd79f,	// (0x000aa587) hc_scroll_pane_cp01

0xac7e,	// (0x000a7a66) bg_cl_header_pane_g1

0xd681,	// (0x000aa469) bg_cl_header_pane_g2

0xac9e,	// (0x000a7a86) bg_cl_header_pane_g3

0xd691,	// (0x000aa479) bg_cl_header_pane_g4

0xd689,	// (0x000aa471) bg_cl_header_pane_g5

0xd8ab,	// (0x000aa693) bg_cl_header_pane_g6

0xd6a9,	// (0x000aa491) bg_cl_header_pane_g7

0xd6b1,	// (0x000aa499) bg_cl_header_pane_g8

0xd6a1,	// (0x000aa489) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ac87e) bg_cl_header_pane_g

0x758e,	// (0x000a4376) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x758e,	// (0x000a4376) hc_cl_list_double_graphic_heading_pane

0x759e,	// (0x000a4386) hc_cl_list_single_graphic_pane_ParamLimits

0x759e,	// (0x000a4386) hc_cl_list_single_graphic_pane

0x75b0,	// (0x000a4398) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75b0,	// (0x000a4398) hc_cl_list_single_graphic_pane_g1

0x75bc,	// (0x000a43a4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75bc,	// (0x000a43a4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ac891) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ac891) hc_cl_list_single_graphic_pane_g

0x75d0,	// (0x000a43b8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75d0,	// (0x000a43b8) hc_cl_list_single_graphic_pane_t1

0x75b0,	// (0x000a4398) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75b0,	// (0x000a4398) hc_cl_list_double_graphic_heading_pane_g1

0x75e5,	// (0x000a43cd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75e5,	// (0x000a43cd) hc_cl_list_double_graphic_heading_pane_g2

0x75f9,	// (0x000a43e1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75f9,	// (0x000a43e1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ac896) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ac896) hc_cl_list_double_graphic_heading_pane_g

0x760d,	// (0x000a43f5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x760d,	// (0x000a43f5) hc_cl_list_double_graphic_heading_pane_t1

0x7622,	// (0x000a440a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7622,	// (0x000a440a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ac89d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ac89d) hc_cl_list_double_graphic_heading_pane_t

0x763f,	// (0x000a4427) vid4_progress_pane_g1

0x7651,	// (0x000a4439) vid4_progress_pane_g2

0x3d6c,	// (0x000a0b54) vid4_progress_pane_g3

0x7663,	// (0x000a444b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ac8a2) vid4_progress_pane_g

0x7681,	// (0x000a4469) vid4_progress_pane_t1

0x7696,	// (0x000a447e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ac8ad) vid4_progress_pane_t

0x76c1,	// (0x000a44a9) wait_bar_pane_cp07

0xca60,	// (0x000a9848) blid_firmament_pane_ParamLimits

0xcaa3,	// (0x000a988b) popup_blid_sat_info2_window_g1

0xcac7,	// (0x000a98af) popup_blid_sat_info2_window_t3

0xcad5,	// (0x000a98bd) popup_blid_sat_info2_window_t4

0xcae3,	// (0x000a98cb) popup_blid_sat_info2_window_t5

0xcaf1,	// (0x000a98d9) popup_blid_sat_info2_window_t6

0xcb01,	// (0x000a98e9) popup_blid_sat_info2_window_t7

0xcb0f,	// (0x000a98f7) popup_blid_sat_info2_window_t8

0xcb1d,	// (0x000a9905) popup_blid_sat_info2_window_t9

0xcb2b,	// (0x000a9913) popup_blid_sat_info2_window_t10

0xcbf3,	// (0x000a99db) aid_firma_cardinal_ParamLimits

0xcc07,	// (0x000a99ef) blid_firmament_pane_t1_ParamLimits

0xcc1e,	// (0x000a9a06) blid_firmament_pane_t2_ParamLimits

0xcc35,	// (0x000a9a1d) blid_firmament_pane_t3_ParamLimits

0xcc4c,	// (0x000a9a34) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000ac4bb) blid_firmament_pane_t_ParamLimits

0xcc63,	// (0x000a9a4b) blid_sat_info_pane_ParamLimits

0xa2ce,	// (0x000a70b6) main_cam_set_pane_ParamLimits

0x59c3,	// (0x000a27ab) aid_size_cell_colour_35_ParamLimits

0x59dd,	// (0x000a27c5) aid_size_cell_colour_112_ParamLimits

0x59f4,	// (0x000a27dc) aid_size_cell_effect_ParamLimits

0xa2ce,	// (0x000a70b6) bg_tb_trans_pane_cp02_ParamLimits

0xb044,	// (0x000a7e2c) heading_imed_pane_ParamLimits

0x5a0e,	// (0x000a27f6) listscroll_imed_pane_ParamLimits

0xbe44,	// (0x000a8c2c) popup_call2_audio_first_window_g5_ParamLimits

0xbe44,	// (0x000a8c2c) popup_call2_audio_first_window_g5

0x6120,	// (0x000a2f08) aid_size_touch_image3_arrow_left_ParamLimits

0x6120,	// (0x000a2f08) aid_size_touch_image3_arrow_left

0x6136,	// (0x000a2f1e) aid_size_touch_image3_arrow_right_ParamLimits

0x6136,	// (0x000a2f1e) aid_size_touch_image3_arrow_right

0x76ac,	// (0x000a4494) vid4_progress_pane_t3

0x5cbc,	// (0x000a2aa4) main_hwr_training_symbol_option_pane_ParamLimits

0x5cbc,	// (0x000a2aa4) main_hwr_training_symbol_option_pane

0xd467,	// (0x000aa24f) popup_hwr_training_preview_window_ParamLimits

0xd467,	// (0x000aa24f) popup_hwr_training_preview_window

0x5d1d,	// (0x000a2b05) hwr_training_navi_pane_g5_ParamLimits

0x5d1d,	// (0x000a2b05) hwr_training_navi_pane_g5

0xd66f,	// (0x000aa457) popup_char_count_window

0x6fe4,	// (0x000a3dcc) bg_popup_sub_pane_cp20_ParamLimits

0x6ff2,	// (0x000a3dda) list_vitu2_match_list_pane_ParamLimits

0x6ffe,	// (0x000a3de6) vitu2_page_scroll_pane_ParamLimits

0x6ffe,	// (0x000a3de6) vitu2_page_scroll_pane

0xdb9d,	// (0x000aa985) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb9d,	// (0x000aa985) list_single_hwr_training_symbol_option_pane

0xdbb0,	// (0x000aa998) list_single_hwr_training_symbol_option_pane_g1

0xdbb8,	// (0x000aa9a0) list_single_hwr_training_symbol_option_pane_t1

0xdbc6,	// (0x000aa9ae) bg_button_pane_cp023

0xdbcf,	// (0x000aa9b7) bg_button_pane_cp024

0x770d,	// (0x000a44f5) vitu2_page_scroll_pane_g1

0x7715,	// (0x000a44fd) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ac8b4) vitu2_page_scroll_pane_g

0x771f,	// (0x000a4507) vitu2_page_scroll_pane_t1

0xc9c0,	// (0x000a97a8) popup_char_count_window_g1

0xdc02,	// (0x000aa9ea) popup_char_count_window_g2

0xdc0b,	// (0x000aa9f3) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ac8b9) popup_char_count_window_g

0xdc14,	// (0x000aa9fc) popup_char_count_window_t1

0x9c13,	// (0x000a69fb) main_vded2_pane

0xd164,	// (0x000a9f4c) aid_size_cell_imed_line

0xd16e,	// (0x000a9f56) grid_imed_line_width_pane

0x65e3,	// (0x000a33cb) vid4_indicators_pane_g4

0xdc22,	// (0x000aaa0a) cell_imed_line_width_pane_ParamLimits

0xdc22,	// (0x000aaa0a) cell_imed_line_width_pane

0xdc38,	// (0x000aaa20) cell_imed_line_width_pane_g1

0xd094,	// (0x000a9e7c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ac8c0) cell_imed_line_width_pane_g

0x772e,	// (0x000a4516) main_vded2_pane_g1_ParamLimits

0x772e,	// (0x000a4516) main_vded2_pane_g1

0x773d,	// (0x000a4525) main_vded2_pane_g2_ParamLimits

0x773d,	// (0x000a4525) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ac8c5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ac8c5) main_vded2_pane_g

0x774b,	// (0x000a4533) vded2_slider_pane_ParamLimits

0x774b,	// (0x000a4533) vded2_slider_pane

0x7758,	// (0x000a4540) aid_size_touch_vded2_end

0x7762,	// (0x000a454a) aid_size_touch_vded2_playhead

0xdc41,	// (0x000aaa29) aid_size_touch_vded2_start

0xdc49,	// (0x000aaa31) vded2_slider_bg_pane

0xdc52,	// (0x000aaa3a) vded2_slider_pane_g1

0xdc5b,	// (0x000aaa43) vded2_slider_pane_g2

0x776a,	// (0x000a4552) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ac8ca) vded2_slider_pane_g

0xd997,	// (0x000aa77f) vded2_slider_bg_pane_g1

0xd9a0,	// (0x000aa788) vded2_slider_bg_pane_g2

0xd9a9,	// (0x000aa791) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x000ac58b) vded2_slider_bg_pane_g

0x3d84,	// (0x000a0b6c) aid_postcard_touch_down_pane_ParamLimits

0x3d84,	// (0x000a0b6c) aid_postcard_touch_down_pane

0x3d94,	// (0x000a0b7c) aid_postcard_touch_up_pane_ParamLimits

0x3d94,	// (0x000a0b7c) aid_postcard_touch_up_pane

0x9c13,	// (0x000a69fb) main_blid2_pane

0xc830,	// (0x000a9618) popup_blid2_search_window

0x9c13,	// (0x000a69fb) blid2_gps_pane

0x9c13,	// (0x000a69fb) blid2_navig_pane

0x9c13,	// (0x000a69fb) blid2_search_pane

0x9c13,	// (0x000a69fb) blid2_tripm_pane

0x7773,	// (0x000a455b) blid2_search_pane_g1_ParamLimits

0x7773,	// (0x000a455b) blid2_search_pane_g1

0x777f,	// (0x000a4567) blid2_search_pane_t1_ParamLimits

0x777f,	// (0x000a4567) blid2_search_pane_t1

0x7791,	// (0x000a4579) aid_size_cell_blid2_gps_ParamLimits

0x7791,	// (0x000a4579) aid_size_cell_blid2_gps

0x77a1,	// (0x000a4589) blid2_gps_pane_g1_ParamLimits

0x77a1,	// (0x000a4589) blid2_gps_pane_g1

0x77ad,	// (0x000a4595) grid_blid2_satellite_pane_ParamLimits

0x77ad,	// (0x000a4595) grid_blid2_satellite_pane

0x77bb,	// (0x000a45a3) blid2_navig_pane_g1_ParamLimits

0x77bb,	// (0x000a45a3) blid2_navig_pane_g1

0x77c7,	// (0x000a45af) blid2_navig_pane_t1_ParamLimits

0x77c7,	// (0x000a45af) blid2_navig_pane_t1

0x77d9,	// (0x000a45c1) blid2_navig_pane_t2_ParamLimits

0x77d9,	// (0x000a45c1) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x000ac8d1) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x000ac8d1) blid2_navig_pane_t

0x77eb,	// (0x000a45d3) blid2_navig_ring_pane_ParamLimits

0x77eb,	// (0x000a45d3) blid2_navig_ring_pane

0x77fb,	// (0x000a45e3) blid2_speed_pane_ParamLimits

0x77fb,	// (0x000a45e3) blid2_speed_pane

0x7807,	// (0x000a45ef) blid2_tripm_pane_g1_ParamLimits

0x7807,	// (0x000a45ef) blid2_tripm_pane_g1

0x7817,	// (0x000a45ff) blid2_tripm_pane_g2_ParamLimits

0x7817,	// (0x000a45ff) blid2_tripm_pane_g2

0x7823,	// (0x000a460b) blid2_tripm_pane_g3_ParamLimits

0x7823,	// (0x000a460b) blid2_tripm_pane_g3

0x782f,	// (0x000a4617) blid2_tripm_pane_g4_ParamLimits

0x782f,	// (0x000a4617) blid2_tripm_pane_g4

0x783b,	// (0x000a4623) blid2_tripm_pane_g5_ParamLimits

0x783b,	// (0x000a4623) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x000ac8d6) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x000ac8d6) blid2_tripm_pane_g

0x7857,	// (0x000a463f) blid2_tripm_pane_t1_ParamLimits

0x7857,	// (0x000a463f) blid2_tripm_pane_t1

0x7869,	// (0x000a4651) blid2_tripm_pane_t2_ParamLimits

0x7869,	// (0x000a4651) blid2_tripm_pane_t2

0x787b,	// (0x000a4663) blid2_tripm_pane_t3_ParamLimits

0x787b,	// (0x000a4663) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x000ac8e3) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x000ac8e3) blid2_tripm_pane_t

0x78ad,	// (0x000a4695) cell_blid2_satellite_pane_ParamLimits

0x78ad,	// (0x000a4695) cell_blid2_satellite_pane

0x78cb,	// (0x000a46b3) cell_blid2_satellite_pane_g1

0xdc63,	// (0x000aaa4b) cell_blid2_satellite_pane_t1

0xcc73,	// (0x000a9a5b) blid2_speed_pane_g1

0xdc71,	// (0x000aaa59) blid2_speed_pane_t1

0xdc7f,	// (0x000aaa67) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x000ac8ec) blid2_speed_pane_t

0xcc73,	// (0x000a9a5b) blid2_navig_ring_pane_g1

0x78d4,	// (0x000a46bc) blid2_navig_ring_pane_g2

0x78dc,	// (0x000a46c4) blid2_navig_ring_pane_g3

0x78e4,	// (0x000a46cc) blid2_navig_ring_pane_g4

0x78ec,	// (0x000a46d4) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x000ac8f1) blid2_navig_ring_pane_g

0x9c13,	// (0x000a69fb) bg_popup_window_pane_cp011

0xdc8d,	// (0x000aaa75) popup_blid2_search_window_g1

0xdc95,	// (0x000aaa7d) popup_blid2_search_window_t1

0xdca3,	// (0x000aaa8b) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x000ac8fc) popup_blid2_search_window_t

0xab81,	// (0x000a7969) main_browser_pane_g1

0xa869,	// (0x000a7651) main_browser_pane_ParamLimits

0x658e,	// (0x000a3376) bg_button_pane_cp011_ParamLimits

0x688e,	// (0x000a3676) cell_vitu2_function_pane_g1_ParamLimits

0xc822,	// (0x000a960a) bg_popup_sub_pane_cp22_ParamLimits

0x71ca,	// (0x000a3fb2) input_focus_pane_cp08_ParamLimits

0x71e1,	// (0x000a3fc9) popup_vitu2_query_button_pane_ParamLimits

0x71e1,	// (0x000a3fc9) popup_vitu2_query_button_pane

0x71f2,	// (0x000a3fda) popup_vitu2_query_input_button_pane

0xd8e6,	// (0x000aa6ce) popup_vitu2_query_window_g1_ParamLimits

0x71fc,	// (0x000a3fe4) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000ac804) popup_vitu2_query_window_g_ParamLimits

0x9c13,	// (0x000a69fb) bg_button_pane_cp026

0x78f4,	// (0x000a46dc) popup_vitu2_query_input_button_pane_g1

0x9c13,	// (0x000a69fb) bg_button_pane_cp025

0xdcb1,	// (0x000aaa99) popup_vitu2_query_button_pane_t1

0x4f1d,	// (0x000a1d05) main_mp3_pane_t6

0x4f2d,	// (0x000a1d15) popup_slider_window_cp01

0x64b0,	// (0x000a3298) cam4_battery_pane

0x659c,	// (0x000a3384) cam4_battery_pane_cp02

0x7637,	// (0x000a441f) cam4_battery_pane_cp01

0x7637,	// (0x000a441f) cam4_battery_pane_cp03

0xd9b2,	// (0x000aa79a) cam4_battery_pane_g1

0xcc73,	// (0x000a9a5b) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x000ac901) cam4_battery_pane_g

0xcb39,	// (0x000a9921) popup_blid_sat_info2_window_t11

0x363b,	// (0x000a0423) aid_size_touch_mv_arrow_left_ParamLimits

0x3666,	// (0x000a044e) aid_size_touch_mv_arrow_right_ParamLimits

0xb36b,	// (0x000a8153) navi_pane_g1_ParamLimits

0x36a5,	// (0x000a048d) navi_pane_g2_ParamLimits

0x36d3,	// (0x000a04bb) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000ac1cd) navi_pane_g_ParamLimits

0x372d,	// (0x000a0515) navi_pane_mv_t1_ParamLimits

0x5a1a,	// (0x000a2802) grid_imed_effect_pane_ParamLimits

0x2056,	// (0x0009ee3e) aid_placing_vt_slider_lsc

0xaacc,	// (0x000a78b4) aid_placing_vt_slider_prt

0xa2ce,	// (0x000a70b6) bg_tb_trans_pane_cp01_ParamLimits

0xcdc3,	// (0x000a9bab) popup_image_details_window_g1_ParamLimits

0xcdd6,	// (0x000a9bbe) popup_image_details_window_g2_ParamLimits

0xcdeb,	// (0x000a9bd3) popup_image_details_window_g3_ParamLimits

0xcdeb,	// (0x000a9bd3) popup_image_details_window_g3

0xf718,	// (0x000ac500) popup_image_details_window_g_ParamLimits

0xcdff,	// (0x000a9be7) popup_image_details_window_t1_ParamLimits

0xce11,	// (0x000a9bf9) popup_image_details_window_t2_ParamLimits

0xce2a,	// (0x000a9c12) popup_image_details_window_t3_ParamLimits

0xce3e,	// (0x000a9c26) popup_image_details_window_t4_ParamLimits

0xce59,	// (0x000a9c41) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000ac507) popup_image_details_window_t_ParamLimits

0x7563,	// (0x000a434b) cl_header_name_pane_ParamLimits

0x7563,	// (0x000a434b) cl_header_name_pane

0x78fc,	// (0x000a46e4) cl_header_name_pane_t1_ParamLimits

0x78fc,	// (0x000a46e4) cl_header_name_pane_t1

0x7913,	// (0x000a46fb) cl_header_name_pane_t2_ParamLimits

0x7913,	// (0x000a46fb) cl_header_name_pane_t2

0x793d,	// (0x000a4725) cl_header_name_pane_t3_ParamLimits

0x793d,	// (0x000a4725) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x000ac906) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x000ac906) cl_header_name_pane_t

0x36fe,	// (0x000a04e6) navi_pane_mv_g2_ParamLimits

0xd649,	// (0x000aa431) field_vitu2_entry_pane_g1_ParamLimits

0xd655,	// (0x000aa43d) field_vitu2_entry_pane_g2_ParamLimits

0xd661,	// (0x000aa449) field_vitu2_entry_pane_g3_ParamLimits

0xd661,	// (0x000aa449) field_vitu2_entry_pane_g3

0xf91b,	// (0x000ac703) field_vitu2_entry_pane_g_ParamLimits

0x6819,	// (0x000a3601) cell_vitu2_itu_pane_g1_ParamLimits

0x6829,	// (0x000a3611) cell_vitu2_itu_pane_g2_ParamLimits

0x6829,	// (0x000a3611) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000ac70f) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000ac70f) cell_vitu2_itu_pane_g

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp05_ParamLimits

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp05

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp03

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp04

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp10_ParamLimits

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp10

0x7505,	// (0x000a42ed) bg_vkb2_func_pane_cp08

0x74eb,	// (0x000a42d3) bg_vkb2_func_pane_cp06

0x74f9,	// (0x000a42e1) bg_vkb2_func_pane_cp07

0xdbd8,	// (0x000aa9c0) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd8,	// (0x000aa9c0) bg_vkb2_func_pane_cp11

0xdbed,	// (0x000aa9d5) bg_vkb2_func_pane_cp12_ParamLimits

0xdbed,	// (0x000aa9d5) bg_vkb2_func_pane_cp12

0x9c13,	// (0x000a69fb) bg_vkb2_func_pane_cp09

0xd681,	// (0x000aa469) bg_vkb2_func_pane_g1

0xac9e,	// (0x000a7a86) bg_vkb2_func_pane_g2

0xd689,	// (0x000aa471) bg_vkb2_func_pane_g3

0xd691,	// (0x000aa479) bg_vkb2_func_pane_g4

0xd8ab,	// (0x000aa693) bg_vkb2_func_pane_g5

0xd6a9,	// (0x000aa491) bg_vkb2_func_pane_g6

0xd6b1,	// (0x000aa499) bg_vkb2_func_pane_g7

0xd6a1,	// (0x000aa489) bg_vkb2_func_pane_g8

0xac7e,	// (0x000a7a66) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x000ac90d) bg_vkb2_func_pane_g

0x7849,	// (0x000a4631) blid2_tripm_pane_g6_ParamLimits

0x7849,	// (0x000a4631) blid2_tripm_pane_g6

0xd51f,	// (0x000aa307) mp4_progress_pane_g1

0x78a1,	// (0x000a4689) blid2_tripm_values_pane_ParamLimits

0x78a1,	// (0x000a4689) blid2_tripm_values_pane

0x7962,	// (0x000a474a) blid2_tripm_values_pane_t1

0x7970,	// (0x000a4758) blid2_tripm_values_pane_t2

0x797e,	// (0x000a4766) blid2_tripm_values_pane_t3

0x798c,	// (0x000a4774) blid2_tripm_values_pane_t4

0x799a,	// (0x000a4782) blid2_tripm_values_pane_t5

0x79a8,	// (0x000a4790) blid2_tripm_values_pane_t6

0x79b6,	// (0x000a479e) blid2_tripm_values_pane_t7

0x79c4,	// (0x000a47ac) blid2_tripm_values_pane_t8

0x79d2,	// (0x000a47ba) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x000ac920) blid2_tripm_values_pane_t

0x2094,	// (0x0009ee7c) call_video_pane_t1_ParamLimits

0x20b1,	// (0x0009ee99) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000ac056) call_video_pane_t_ParamLimits

0x3c8f,	// (0x000a0a77) msg_header_pane_g1_ParamLimits

0xb588,	// (0x000a8370) msg_header_pane_g2_ParamLimits

0xb588,	// (0x000a8370) msg_header_pane_g2

0x0001,

0xf488,	// (0x000ac270) msg_header_pane_g_ParamLimits

0xf488,	// (0x000ac270) msg_header_pane_g

0xa869,	// (0x000a7651) main_clock2_pane_ParamLimits

0x57a9,	// (0x000a2591) grid_clock2_toolbar_pane_ParamLimits

0x57a9,	// (0x000a2591) grid_clock2_toolbar_pane

0x57a9,	// (0x000a2591) listscroll_clock2_pane_ParamLimits

0x57a9,	// (0x000a2591) listscroll_clock2_pane

0x5851,	// (0x000a2639) main_clock2_pane_t3_ParamLimits

0x5851,	// (0x000a2639) main_clock2_pane_t3

0x5863,	// (0x000a264b) main_clock2_pane_t4_ParamLimits

0x5863,	// (0x000a264b) main_clock2_pane_t4

0xdcbf,	// (0x000aaaa7) cell_clock2_toolbar_pane

0xdcc7,	// (0x000aaaaf) cell_clock2_toolbar_pane_cp01

0xdcc7,	// (0x000aaaaf) cell_clock2_toolbar_pane_cp02

0xdccf,	// (0x000aaab7) cell_clock2_toolbar_pane_cp03

0xdcd7,	// (0x000aaabf) list_clock2_pane

0xb2d1,	// (0x000a80b9) scroll_pane_cp10

0xdcdf,	// (0x000aaac7) list_single_clock2_pane_ParamLimits

0xdcdf,	// (0x000aaac7) list_single_clock2_pane

0xb40b,	// (0x000a81f3) list_highlight_pane_cp08

0xdcec,	// (0x000aaad4) list_single_clock2_pane_t1

0xdcfa,	// (0x000aaae2) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x000ac933) list_single_clock2_pane_t

0x9c13,	// (0x000a69fb) bg_button_pane_cp10

0xdd08,	// (0x000aaaf0) cell_clock2_toolbar_pane_g1

0x3ce6,	// (0x000a0ace) aid_main_viewer_pane_g1_ParamLimits

0x3ce6,	// (0x000a0ace) aid_main_viewer_pane_g1

0x3cf2,	// (0x000a0ada) aid_main_viewer_pane_g2_ParamLimits

0x3cf2,	// (0x000a0ada) aid_main_viewer_pane_g2

0x3cfe,	// (0x000a0ae6) aid_main_viewer_pane_g3_ParamLimits

0x3cfe,	// (0x000a0ae6) aid_main_viewer_pane_g3

0x3d0f,	// (0x000a0af7) aid_main_viewer_pane_g4_ParamLimits

0x3d0f,	// (0x000a0af7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000ac281) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000ac281) aid_main_viewer_pane_g

0x4499,	// (0x000a1281) main_calc_pane_ParamLimits

0x44a6,	// (0x000a128e) main_dialer2_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_cam6_pane

0x9c13,	// (0x000a69fb) main_vid6_pane

0x57b5,	// (0x000a259d) listscroll_gen_pane_cp06_ParamLimits

0x57b5,	// (0x000a259d) listscroll_gen_pane_cp06

0x5875,	// (0x000a265d) main_clock2_pane_t5_ParamLimits

0x5875,	// (0x000a265d) main_clock2_pane_t5

0x58c4,	// (0x000a26ac) aid_call2_pane_cp10_ParamLimits

0x58d6,	// (0x000a26be) aid_call_pane_cp10_ParamLimits

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58e8,	// (0x000a26d0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58e8,	// (0x000a26d0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb340,	// (0x000a8128) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000ac5bc) popup_clock_analogue_window_cp10_g_ParamLimits

0x58fa,	// (0x000a26e2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60cd,	// (0x000a2eb5) cell_dialer2_keypad_pane_g2_ParamLimits

0x60cd,	// (0x000a2eb5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000ac6a2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000ac6a2) cell_dialer2_keypad_pane_g

0x60e9,	// (0x000a2ed1) cell_dialer2_keypad_pane_t1

0x6b6b,	// (0x000a3953) main_cset_text2_pane_ParamLimits

0x6b6b,	// (0x000a3953) main_cset_text2_pane

0xdb40,	// (0x000aa928) area_vitu2_query_pane_g1_ParamLimits

0x748a,	// (0x000a4272) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ac857) area_vitu2_query_pane_g_ParamLimits

0xa38b,	// (0x000a7173) area_vitu2_query_pane_t7_ParamLimits

0xa38b,	// (0x000a7173) area_vitu2_query_pane_t7

0x74eb,	// (0x000a42d3) bg_button_pane_cp018_ParamLimits

0x74f9,	// (0x000a42e1) bg_button_pane_cp021_ParamLimits

0x7505,	// (0x000a42ed) bg_button_pane_cp022_ParamLimits

0x7505,	// (0x000a42ed) bg_vkb2_func_pane_cp08_ParamLimits

0x74eb,	// (0x000a42d3) bg_vkb2_func_pane_cp06_ParamLimits

0x74f9,	// (0x000a42e1) bg_vkb2_func_pane_cp07_ParamLimits

0x7516,	// (0x000a42fe) input_focus_pane_cp09_ParamLimits

0x79e0,	// (0x000a47c8) cam6_autofocus_pane_ParamLimits

0x79e0,	// (0x000a47c8) cam6_autofocus_pane

0x7a02,	// (0x000a47ea) cam6_image_uncrop_pane_ParamLimits

0x7a02,	// (0x000a47ea) cam6_image_uncrop_pane

0x7a2f,	// (0x000a4817) cam6_indi_pane_ParamLimits

0x7a2f,	// (0x000a4817) cam6_indi_pane

0x7a49,	// (0x000a4831) cam6_mode_pane_ParamLimits

0x7a49,	// (0x000a4831) cam6_mode_pane

0x7a5d,	// (0x000a4845) cam6_timer_pane_ParamLimits

0x7a5d,	// (0x000a4845) cam6_timer_pane

0x7a69,	// (0x000a4851) cam6_zoom_pane_ParamLimits

0x7a69,	// (0x000a4851) cam6_zoom_pane

0x7a85,	// (0x000a486d) cam6_mode_pane_g1_ParamLimits

0x7a85,	// (0x000a486d) cam6_mode_pane_g1

0x7a91,	// (0x000a4879) cam6_mode_pane_g2_ParamLimits

0x7a91,	// (0x000a4879) cam6_mode_pane_g2

0x7a9d,	// (0x000a4885) cam6_mode_pane_g3_ParamLimits

0x7a9d,	// (0x000a4885) cam6_mode_pane_g3

0x7aa9,	// (0x000a4891) cam6_mode_pane_g4_ParamLimits

0x7aa9,	// (0x000a4891) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x000ac938) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x000ac938) cam6_mode_pane_g

0xd9bc,	// (0x000aa7a4) bg_tb_trans_pane_cp08_ParamLimits

0xd9bc,	// (0x000aa7a4) bg_tb_trans_pane_cp08

0xdd10,	// (0x000aaaf8) cam6_battery_pane_ParamLimits

0xdd10,	// (0x000aaaf8) cam6_battery_pane

0xdd26,	// (0x000aab0e) cam6_indi_pane_g1_ParamLimits

0xdd26,	// (0x000aab0e) cam6_indi_pane_g1

0xdd38,	// (0x000aab20) cam6_indi_pane_g2_ParamLimits

0xdd38,	// (0x000aab20) cam6_indi_pane_g2

0xdd4a,	// (0x000aab32) cam6_indi_pane_g3_ParamLimits

0xdd4a,	// (0x000aab32) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x000ac941) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x000ac941) cam6_indi_pane_g

0xdd5c,	// (0x000aab44) cam6_indi_pane_t1_ParamLimits

0xdd5c,	// (0x000aab44) cam6_indi_pane_t1

0x6620,	// (0x000a3408) cam6_autofocus_pane_g1

0x6618,	// (0x000a3400) cam6_autofocus_pane_g2

0x6630,	// (0x000a3418) cam6_autofocus_pane_g3

0x6628,	// (0x000a3410) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x000ac948) cam6_autofocus_pane_g

0xdd82,	// (0x000aab6a) cam6_timer_pane_g1

0xdd8a,	// (0x000aab72) cam6_timer_pane_t1

0xdd98,	// (0x000aab80) cam6_zoom_cont_pane

0xdda0,	// (0x000aab88) cam6_zoom_pane_g1

0xdda8,	// (0x000aab90) cam6_zoom_pane_g2

0x7ab5,	// (0x000a489d) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x000ac951) cam6_zoom_pane_g

0xcc73,	// (0x000a9a5b) cam6_battery_pane_g1

0xcc73,	// (0x000a9a5b) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000ac4c4) cam6_battery_pane_g

0xddb0,	// (0x000aab98) cam6_zoom_cont_pane_g1

0xddb9,	// (0x000aaba1) cam6_zoom_cont_pane_g2

0xddc2,	// (0x000aabaa) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x000ac958) cam6_zoom_cont_pane_g

0x7ad2,	// (0x000a48ba) cam6_mode_pane_cp_ParamLimits

0x7ad2,	// (0x000a48ba) cam6_mode_pane_cp

0x7ae6,	// (0x000a48ce) cam6_zoom_pane_cp_ParamLimits

0x7ae6,	// (0x000a48ce) cam6_zoom_pane_cp

0x7b02,	// (0x000a48ea) vid6_image_uncrop_cif_pane_ParamLimits

0x7b02,	// (0x000a48ea) vid6_image_uncrop_cif_pane

0x7b2e,	// (0x000a4916) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b2e,	// (0x000a4916) vid6_image_uncrop_nhd_pane

0x7b4d,	// (0x000a4935) vid6_image_uncrop_vga_pane_ParamLimits

0x7b4d,	// (0x000a4935) vid6_image_uncrop_vga_pane

0x7b6c,	// (0x000a4954) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b6c,	// (0x000a4954) vid6_image_uncrop_wvga_pane

0x7b8b,	// (0x000a4973) vid6_indi_pane_ParamLimits

0x7b8b,	// (0x000a4973) vid6_indi_pane

0xd9bc,	// (0x000aa7a4) bg_tb_trans_pane_cp09_ParamLimits

0xd9bc,	// (0x000aa7a4) bg_tb_trans_pane_cp09

0xddda,	// (0x000aabc2) cam6_battery_pane_cp_ParamLimits

0xddda,	// (0x000aabc2) cam6_battery_pane_cp

0xdde6,	// (0x000aabce) vid6_indi_pane_g1_ParamLimits

0xdde6,	// (0x000aabce) vid6_indi_pane_g1

0xddf8,	// (0x000aabe0) vid6_indi_pane_g2_ParamLimits

0xddf8,	// (0x000aabe0) vid6_indi_pane_g2

0xde0a,	// (0x000aabf2) vid6_indi_pane_g3_ParamLimits

0xde0a,	// (0x000aabf2) vid6_indi_pane_g3

0xde21,	// (0x000aac09) vid6_indi_pane_g4_ParamLimits

0xde21,	// (0x000aac09) vid6_indi_pane_g4

0xde38,	// (0x000aac20) vid6_indi_pane_g5_ParamLimits

0xde38,	// (0x000aac20) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x000ac95f) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x000ac95f) vid6_indi_pane_g

0xde52,	// (0x000aac3a) vid6_indi_pane_t1_ParamLimits

0xde52,	// (0x000aac3a) vid6_indi_pane_t1

0xde68,	// (0x000aac50) vid6_indi_pane_t2_ParamLimits

0xde68,	// (0x000aac50) vid6_indi_pane_t2

0xde90,	// (0x000aac78) vid6_indi_pane_t3_ParamLimits

0xde90,	// (0x000aac78) vid6_indi_pane_t3

0xdeb8,	// (0x000aaca0) vid6_indi_pane_t4_ParamLimits

0xdeb8,	// (0x000aaca0) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x000ac96a) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x000ac96a) vid6_indi_pane_t

0xdedc,	// (0x000aacc4) wait_bar_pane_cp08

0x7bb0,	// (0x000a4998) main_cset_text2_pane_t1_ParamLimits

0x7bb0,	// (0x000a4998) main_cset_text2_pane_t1

0x7abd,	// (0x000a48a5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7abd,	// (0x000a48a5) listscroll_gen_pane_cp06_t1

0x9c13,	// (0x000a69fb) main_cam6_set_pane

0x64a2,	// (0x000a328a) bg_tb_trans_pane_cp06_ParamLimits

0x64b8,	// (0x000a32a0) cam4_indicators_pane_g1_ParamLimits

0x64c9,	// (0x000a32b1) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000ac6df) cam4_indicators_pane_g_ParamLimits

0x64e1,	// (0x000a32c9) cam4_indicators_pane_t1_ParamLimits

0x658e,	// (0x000a3376) bg_tb_trans_pane_cp07_ParamLimits

0x65a6,	// (0x000a338e) vid4_indicators_pane_g1_ParamLimits

0x65bc,	// (0x000a33a4) vid4_indicators_pane_g2_ParamLimits

0x65d0,	// (0x000a33b8) vid4_indicators_pane_g3_ParamLimits

0x65e3,	// (0x000a33cb) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000ac6f1) vid4_indicators_pane_g_ParamLimits

0x6601,	// (0x000a33e9) vid4_indicators_pane_t1_ParamLimits

0x763f,	// (0x000a4427) vid4_progress_pane_g1_ParamLimits

0x7651,	// (0x000a4439) vid4_progress_pane_g2_ParamLimits

0x3d6c,	// (0x000a0b54) vid4_progress_pane_g3_ParamLimits

0x7663,	// (0x000a444b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ac8a2) vid4_progress_pane_g_ParamLimits

0x7681,	// (0x000a4469) vid4_progress_pane_t1_ParamLimits

0x7696,	// (0x000a447e) vid4_progress_pane_t2_ParamLimits

0x76ac,	// (0x000a4494) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ac8ad) vid4_progress_pane_t_ParamLimits

0x76c1,	// (0x000a44a9) wait_bar_pane_cp07_ParamLimits

0x7bd7,	// (0x000a49bf) main_cam6_set_pane_g2_ParamLimits

0x7bd7,	// (0x000a49bf) main_cam6_set_pane_g2

0x7be3,	// (0x000a49cb) main_cset6_listscroll_pane_ParamLimits

0x7be3,	// (0x000a49cb) main_cset6_listscroll_pane

0x7c10,	// (0x000a49f8) main_cset6_slider_pane_ParamLimits

0x7c10,	// (0x000a49f8) main_cset6_slider_pane

0x7c1c,	// (0x000a4a04) main_cset6_text2_pane_ParamLimits

0x7c1c,	// (0x000a4a04) main_cset6_text2_pane

0xdeeb,	// (0x000aacd3) main_cset6_text_pane

0xdef3,	// (0x000aacdb) main_cset_list_pane_copy1_ParamLimits

0xdef3,	// (0x000aacdb) main_cset_list_pane_copy1

0xdf03,	// (0x000aaceb) scroll_pane_cp028_copy1

0x7c2f,	// (0x000a4a17) cset_list_set_pane_copy1

0x7c3f,	// (0x000a4a27) aid_position_infowindow_above_copy1

0x7c47,	// (0x000a4a2f) aid_position_infowindow_below_copy1

0x7c4f,	// (0x000a4a37) cset_list_set_pane_g1_copy1

0x7c57,	// (0x000a4a3f) cset_list_set_pane_g3_copy1_ParamLimits

0x7c57,	// (0x000a4a3f) cset_list_set_pane_g3_copy1

0x7c66,	// (0x000a4a4e) cset_list_set_pane_t1_copy1_ParamLimits

0x7c66,	// (0x000a4a4e) cset_list_set_pane_t1_copy1

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp021_copy1_ParamLimits

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp021_copy1

0xdf0c,	// (0x000aacf4) cset6_slider_pane_ParamLimits

0xdf0c,	// (0x000aacf4) cset6_slider_pane

0xdf38,	// (0x000aad20) main_cset6_slider_pane_g1_ParamLimits

0xdf38,	// (0x000aad20) main_cset6_slider_pane_g1

0x7c7b,	// (0x000a4a63) main_cset6_slider_pane_g2_ParamLimits

0x7c7b,	// (0x000a4a63) main_cset6_slider_pane_g2

0xdf60,	// (0x000aad48) main_cset6_slider_pane_g3_ParamLimits

0xdf60,	// (0x000aad48) main_cset6_slider_pane_g3

0x7ca3,	// (0x000a4a8b) main_cset6_slider_pane_g4_ParamLimits

0x7ca3,	// (0x000a4a8b) main_cset6_slider_pane_g4

0x7caf,	// (0x000a4a97) main_cset6_slider_pane_g5_ParamLimits

0x7caf,	// (0x000a4a97) main_cset6_slider_pane_g5

0xd7b4,	// (0x000aa59c) main_cset6_slider_pane_g7_ParamLimits

0xd7b4,	// (0x000aa59c) main_cset6_slider_pane_g7

0xd7c0,	// (0x000aa5a8) main_cset6_slider_pane_g8_ParamLimits

0xd7c0,	// (0x000aa5a8) main_cset6_slider_pane_g8

0x7cbb,	// (0x000a4aa3) main_cset6_slider_pane_g9_ParamLimits

0x7cbb,	// (0x000a4aa3) main_cset6_slider_pane_g9

0x7cc7,	// (0x000a4aaf) main_cset6_slider_pane_g10_ParamLimits

0x7cc7,	// (0x000a4aaf) main_cset6_slider_pane_g10

0x7cd3,	// (0x000a4abb) main_cset6_slider_pane_g11_ParamLimits

0x7cd3,	// (0x000a4abb) main_cset6_slider_pane_g11

0x7cdf,	// (0x000a4ac7) main_cset6_slider_pane_g12_ParamLimits

0x7cdf,	// (0x000a4ac7) main_cset6_slider_pane_g12

0x7ceb,	// (0x000a4ad3) main_cset6_slider_pane_g13_ParamLimits

0x7ceb,	// (0x000a4ad3) main_cset6_slider_pane_g13

0x7cf7,	// (0x000a4adf) main_cset6_slider_pane_g14_ParamLimits

0x7cf7,	// (0x000a4adf) main_cset6_slider_pane_g14

0x7d03,	// (0x000a4aeb) main_cset6_slider_pane_g15_ParamLimits

0x7d03,	// (0x000a4aeb) main_cset6_slider_pane_g15

0x7d1b,	// (0x000a4b03) main_cset6_slider_pane_g16_ParamLimits

0x7d1b,	// (0x000a4b03) main_cset6_slider_pane_g16

0x7d27,	// (0x000a4b0f) main_cset6_slider_pane_g17_ParamLimits

0x7d27,	// (0x000a4b0f) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x000ac973) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x000ac973) main_cset6_slider_pane_g

0xdf6c,	// (0x000aad54) main_cset6_slider_pane_t1_ParamLimits

0xdf6c,	// (0x000aad54) main_cset6_slider_pane_t1

0x7d4b,	// (0x000a4b33) main_cset6_slider_pane_t2_ParamLimits

0x7d4b,	// (0x000a4b33) main_cset6_slider_pane_t2

0x7d76,	// (0x000a4b5e) main_cset6_slider_pane_t3_ParamLimits

0x7d76,	// (0x000a4b5e) main_cset6_slider_pane_t3

0x7da1,	// (0x000a4b89) main_cset6_slider_pane_t4_ParamLimits

0x7da1,	// (0x000a4b89) main_cset6_slider_pane_t4

0x7dcc,	// (0x000a4bb4) main_cset6_slider_pane_t5_ParamLimits

0x7dcc,	// (0x000a4bb4) main_cset6_slider_pane_t5

0xdfad,	// (0x000aad95) main_cset6_slider_pane_t7_ParamLimits

0xdfad,	// (0x000aad95) main_cset6_slider_pane_t7

0x7df7,	// (0x000a4bdf) main_cset6_slider_pane_t8_ParamLimits

0x7df7,	// (0x000a4bdf) main_cset6_slider_pane_t8

0x7e1b,	// (0x000a4c03) main_cset6_slider_pane_t9_ParamLimits

0x7e1b,	// (0x000a4c03) main_cset6_slider_pane_t9

0x7e3f,	// (0x000a4c27) main_cset6_slider_pane_t10_ParamLimits

0x7e3f,	// (0x000a4c27) main_cset6_slider_pane_t10

0x7e63,	// (0x000a4c4b) main_cset6_slider_pane_t11_ParamLimits

0x7e63,	// (0x000a4c4b) main_cset6_slider_pane_t11

0xdfe3,	// (0x000aadcb) main_cset6_slider_pane_t14_ParamLimits

0xdfe3,	// (0x000aadcb) main_cset6_slider_pane_t14

0xe01c,	// (0x000aae04) main_cset6_slider_pane_t15_ParamLimits

0xe01c,	// (0x000aae04) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x000ac998) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x000ac998) main_cset6_slider_pane_t

0xd95c,	// (0x000aa744) cset_slider_pane_g1_copy1

0xd965,	// (0x000aa74d) cset_slider_pane_g2_copy1

0xd96e,	// (0x000aa756) cset_slider_pane_g3_copy1

0x9c13,	// (0x000a69fb) bg_popup_sub_pane_cp011_copy1

0xe055,	// (0x000aae3d) main_cset_text_pane_g1_copy1

0xd8fa,	// (0x000aa6e2) main_cset_text_pane_t1_copy1

0xd908,	// (0x000aa6f0) main_cset_text_pane_t2_copy1

0xd916,	// (0x000aa6fe) main_cset_text_pane_t3_copy1

0xd924,	// (0x000aa70c) main_cset_text_pane_t4_copy1

0xd932,	// (0x000aa71a) main_cset_text_pane_t5_copy1

0xe05d,	// (0x000aae45) main_cset_text_pane_t6_copy1

0xe06b,	// (0x000aae53) main_cset_text_pane_t7_copy1

0x7f56,	// (0x000a4d3e) main_cset_text2_pane_t1_copy1

0xa2ce,	// (0x000a70b6) main_ncimui_pane

0x44eb,	// (0x000a12d3) popup_query_ncimui_window_ParamLimits

0x44eb,	// (0x000a12d3) popup_query_ncimui_window

0xac51,	// (0x000a7a39) field_cale_ev2_pane_g4_ParamLimits

0xac51,	// (0x000a7a39) field_cale_ev2_pane_g4

0x5de3,	// (0x000a2bcb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5de3,	// (0x000a2bcb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000ac67d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000ac67d) cell_video_dialer_keypad_pane_g

0x5dfb,	// (0x000a2be3) cell_video_dialer_keypad_pane_t1

0x9c13,	// (0x000a69fb) bg_popup_window_pane_cp012

0xb1bd,	// (0x000a7fa5) heading_pane_cp06

0xe097,	// (0x000aae7f) ncim_query_content_pane

0x9c13,	// (0x000a69fb) bg_popup_heading_pane_cp01

0xe09f,	// (0x000aae87) ncim_heading_pane_t1

0xe0ad,	// (0x000aae95) ncim_indicator_popup_pane

0xe0bf,	// (0x000aaea7) ncim_query_button_pane

0xe0d5,	// (0x000aaebd) ncim_query_content_pane_t1

0xe0e7,	// (0x000aaecf) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x000ac9dc) ncim_query_content_pane_t

0xe121,	// (0x000aaf09) ncim_query_list_pane

0xe133,	// (0x000aaf1b) ncim_query_popup_pane

0xe0ad,	// (0x000aae95) ncim_indicator_popup_pane_ParamLimits

0x80b2,	// (0x000a4e9a) ncim_query_content_pane_g1_ParamLimits

0x80b2,	// (0x000a4e9a) ncim_query_content_pane_g1

0xe0d5,	// (0x000aaebd) ncim_query_content_pane_t1_ParamLimits

0xe0e7,	// (0x000aaecf) ncim_query_content_pane_t2_ParamLimits

0x80be,	// (0x000a4ea6) ncim_query_content_pane_t3_ParamLimits

0x80be,	// (0x000a4ea6) ncim_query_content_pane_t3

0x80db,	// (0x000a4ec3) ncim_query_content_pane_t4_ParamLimits

0x80db,	// (0x000a4ec3) ncim_query_content_pane_t4

0x80f8,	// (0x000a4ee0) ncim_query_content_pane_t5_ParamLimits

0x80f8,	// (0x000a4ee0) ncim_query_content_pane_t5

0xe0f9,	// (0x000aaee1) ncim_query_content_pane_t6_ParamLimits

0xe0f9,	// (0x000aaee1) ncim_query_content_pane_t6

0xfbf4,	// (0x000ac9dc) ncim_query_content_pane_t_ParamLimits

0xe121,	// (0x000aaf09) ncim_query_list_pane_ParamLimits

0xe133,	// (0x000aaf1b) ncim_query_popup_pane_ParamLimits

0xe147,	// (0x000aaf2f) wait_bar_pane_cp04

0x9c13,	// (0x000a69fb) input_focus_pane_cp011

0xe14f,	// (0x000aaf37) ncim_query_popup_pane_t1

0xe15d,	// (0x000aaf45) ncim_list_query_list_pane_ParamLimits

0xe15d,	// (0x000aaf45) ncim_list_query_list_pane

0x9c13,	// (0x000a69fb) bg_button_pane_cp027

0xe170,	// (0x000aaf58) ncim_query_button_pane_g1

0x9c13,	// (0x000a69fb) list_highlight_pane_cp012

0xe17a,	// (0x000aaf62) ncim_list_query_list_pane_g1

0xe182,	// (0x000aaf6a) ncim_list_query_list_pane_t1

0x64d5,	// (0x000a32bd) cam4_indicators_pane_g3_ParamLimits

0x64d5,	// (0x000a32bd) cam4_indicators_pane_g3

0x65ef,	// (0x000a33d7) vid4_indicators_pane_g5_ParamLimits

0x65ef,	// (0x000a33d7) vid4_indicators_pane_g5

0x7672,	// (0x000a445a) vid4_progress_pane_g5_ParamLimits

0x7672,	// (0x000a445a) vid4_progress_pane_g5

0x7f88,	// (0x000a4d70) main_ncimui_pane_g1

0x7ff4,	// (0x000a4ddc) ncimui_group_query_pane_ParamLimits

0x7ff4,	// (0x000a4ddc) ncimui_group_query_pane

0x804e,	// (0x000a4e36) ncimui_list_pane_ParamLimits

0x804e,	// (0x000a4e36) ncimui_list_pane

0x8075,	// (0x000a4e5d) ncimui_text_pane_ParamLimits

0x8075,	// (0x000a4e5d) ncimui_text_pane

0x8115,	// (0x000a4efd) ncimui_text_pane_t1_ParamLimits

0x8115,	// (0x000a4efd) ncimui_text_pane_t1

0xe190,	// (0x000aaf78) ncimui_list_single_graphic_pane_ParamLimits

0xe190,	// (0x000aaf78) ncimui_list_single_graphic_pane

0x8134,	// (0x000a4f1c) ncimui_query_pane_ParamLimits

0x8134,	// (0x000a4f1c) ncimui_query_pane

0x9c13,	// (0x000a69fb) list_highlight_pane_cp013

0xe1a0,	// (0x000aaf88) ncim_list_query_list_pane_t1_copy1

0xe17a,	// (0x000aaf62) ncim_list_single_graphic_pane_g1

0xe1ae,	// (0x000aaf96) ncim_query_button_pane_cp01

0xe1ba,	// (0x000aafa2) ncim_query_entry_pane_ParamLimits

0xe1ba,	// (0x000aafa2) ncim_query_entry_pane

0xe1cd,	// (0x000aafb5) ncimui_query_pane_g1

0xe1d9,	// (0x000aafc1) ncimui_query_pane_t1_ParamLimits

0xe1d9,	// (0x000aafc1) ncimui_query_pane_t1

0xa2ce,	// (0x000a70b6) input_focus_pane_cp012

0xe1f2,	// (0x000aafda) ncim_query_entry_pane_t1

0xa869,	// (0x000a7651) main_im_pane_ParamLimits

0xa2ce,	// (0x000a70b6) main_mobtv_pane_ParamLimits

0xa2ce,	// (0x000a70b6) main_mobtv_pane

0x7d33,	// (0x000a4b1b) main_cset6_slider_pane_g18_ParamLimits

0x7d33,	// (0x000a4b1b) main_cset6_slider_pane_g18

0x7d3f,	// (0x000a4b27) main_cset6_slider_pane_g19_ParamLimits

0x7d3f,	// (0x000a4b27) main_cset6_slider_pane_g19

0xd661,	// (0x000aa449) bg_main_mobtv_pane_ParamLimits

0xd661,	// (0x000aa449) bg_main_mobtv_pane

0x8147,	// (0x000a4f2f) main_mobtv_info_pane

0x8152,	// (0x000a4f3a) main_mobtv_loading_pane_ParamLimits

0x8152,	// (0x000a4f3a) main_mobtv_loading_pane

0xe204,	// (0x000aafec) main_mobtv_pg_channel_list_pane

0xe20e,	// (0x000aaff6) main_mobtv_pg_hdr_pane

0x815f,	// (0x000a4f47) main_mobtv_programe_curr_pane_ParamLimits

0x815f,	// (0x000a4f47) main_mobtv_programe_curr_pane

0x816c,	// (0x000a4f54) main_mobtv_programe_next_pane_ParamLimits

0x816c,	// (0x000a4f54) main_mobtv_programe_next_pane

0xe217,	// (0x000aafff) popup_mobtv_noti_window

0xcc73,	// (0x000a9a5b) main_tv_pg_hdr_pane_g1

0xe221,	// (0x000ab009) main_tv_pg_hdr_pane_g2

0xe229,	// (0x000ab011) main_tv_pg_hdr_pane_g3

0xe231,	// (0x000ab019) main_tv_pg_hdr_pane_g4

0xe239,	// (0x000ab021) main_tv_pg_hdr_pane_g5

0xe243,	// (0x000ab02b) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x000ab035) main_tv_pg_hdr_pane_g7

0xe257,	// (0x000ab03f) main_tv_pg_hdr_pane_g8

0xe261,	// (0x000ab049) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x000ab053) main_tv_pg_hdr_pane_g10

0xe275,	// (0x000ab05d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x000ac9e9) main_tv_pg_hdr_pane_g

0xe27f,	// (0x000ab067) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x000ab075) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x000ab083) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x000ab093) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x000ab0a3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x000aca00) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x000ab0b3) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x000ab0b3) single_mobtv_pg_channel_pane

0xe2dd,	// (0x000ab0c5) single_mobtv_pg_channel_table_pane

0xe2e6,	// (0x000ab0ce) single_mobtv_pg_channel_thumb_pane

0xe2ef,	// (0x000ab0d7) single_tv_pg_channel_pane_g1

0xe2f8,	// (0x000ab0e0) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x000aca0b) single_tv_pg_channel_pane_g

0xcea3,	// (0x000a9c8b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcea3,	// (0x000a9c8b) bg_single_mobtv_pg_channel_thumb_pane

0xe301,	// (0x000ab0e9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe301,	// (0x000ab0e9) single_mobtv_pg_channel_thumb_pane_g1

0xe30f,	// (0x000ab0f7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe30f,	// (0x000ab0f7) single_mobtv_pg_channel_thumb_pane_g2

0xe31b,	// (0x000ab103) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe31b,	// (0x000ab103) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x000aca10) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x000aca10) single_mobtv_pg_channel_thumb_pane_g

0xe327,	// (0x000ab10f) single_mobtv_pg_channel_thumb_pane_t1

0xe335,	// (0x000ab11d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x000aca17) single_mobtv_pg_channel_thumb_pane_t

0xcc73,	// (0x000a9a5b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc73,	// (0x000a9a5b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000ac4c4) bg_single_mobtv_pg_channel_table_pane_g

0xe343,	// (0x000ab12b) single_mobtv_pg_channel_table_pane_t1

0xe351,	// (0x000ab139) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x000aca1c) single_mobtv_pg_channel_table_pane_t

0x8181,	// (0x000a4f69) main_mobtv_info_pane_g1_ParamLimits

0x8181,	// (0x000a4f69) main_mobtv_info_pane_g1

0x819d,	// (0x000a4f85) main_mobtv_info_pane_t1_ParamLimits

0x819d,	// (0x000a4f85) main_mobtv_info_pane_t1

0x8215,	// (0x000a4ffd) main_mobtv_info_pane_t2_ParamLimits

0x8215,	// (0x000a4ffd) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x000aca26) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x000aca26) main_mobtv_info_pane_t

0x82a6,	// (0x000a508e) wait_bar_pane_cp05

0x82b8,	// (0x000a50a0) main_mobtv_loading_pane_g1_ParamLimits

0x82b8,	// (0x000a50a0) main_mobtv_loading_pane_g1

0x82c4,	// (0x000a50ac) main_mobtv_loading_pane_g2_ParamLimits

0x82c4,	// (0x000a50ac) main_mobtv_loading_pane_g2

0x82d0,	// (0x000a50b8) main_mobtv_loading_pane_g3_ParamLimits

0x82d0,	// (0x000a50b8) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x000aca2d) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x000aca2d) main_mobtv_loading_pane_g

0xe35f,	// (0x000ab147) main_mobtv_loading_pane_t1_ParamLimits

0xe35f,	// (0x000ab147) main_mobtv_loading_pane_t1

0xe377,	// (0x000ab15f) main_mobtv_loading_pane_t2_ParamLimits

0xe377,	// (0x000ab15f) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x000aca34) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x000aca34) main_mobtv_loading_pane_t

0x82de,	// (0x000a50c6) wait_bar_pane_cp06_ParamLimits

0x82de,	// (0x000a50c6) wait_bar_pane_cp06

0xe39b,	// (0x000ab183) main_mobtv_programe_curr_pane_t1

0xe3a9,	// (0x000ab191) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x000aca39) main_mobtv_programe_curr_pane_t

0xe3b7,	// (0x000ab19f) main_mobtv_programe_next_pane_t1

0xe3c5,	// (0x000ab1ad) main_mobtv_programe_next_pane_t2

0xe3d3,	// (0x000ab1bb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x000aca3e) main_mobtv_programe_next_pane_t

0x9c13,	// (0x000a69fb) bg_popup_mobtv_noti_window_pane

0xe3e1,	// (0x000ab1c9) popup_mobtv_noti_window_g1

0xe3e9,	// (0x000ab1d1) popup_mobtv_noti_window_t1

0xe3f7,	// (0x000ab1df) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x000aca45) popup_mobtv_noti_window_t

0xcc73,	// (0x000a9a5b) bg_popup_mobtv_noti_window_pane_g1

0x9c13,	// (0x000a69fb) sc_clock_pane

0x9c13,	// (0x000a69fb) main_fs_bigclock_pane

0x788f,	// (0x000a4677) blid2_tripm_pane_t4_ParamLimits

0x788f,	// (0x000a4677) blid2_tripm_pane_t4

0x82ea,	// (0x000a50d2) sc_clock_pane_g1_ParamLimits

0x82ea,	// (0x000a50d2) sc_clock_pane_g1

0x82f8,	// (0x000a50e0) sc_clock_pane_t1_ParamLimits

0x82f8,	// (0x000a50e0) sc_clock_pane_t1

0x830d,	// (0x000a50f5) sc_clock_pane_t2_ParamLimits

0x830d,	// (0x000a50f5) sc_clock_pane_t2

0x831f,	// (0x000a5107) sc_clock_pane_t3_ParamLimits

0x831f,	// (0x000a5107) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x000aca4a) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x000aca4a) sc_clock_pane_t

0x922f,	// (0x000a6017) main_fs_bigclock_indicator_pane_ParamLimits

0x922f,	// (0x000a6017) main_fs_bigclock_indicator_pane

0x83b2,	// (0x000a519a) main_fs_bigclock_pane_g1_ParamLimits

0x83b2,	// (0x000a519a) main_fs_bigclock_pane_g1

0x923b,	// (0x000a6023) main_fs_bigclock_pane_t1_ParamLimits

0x923b,	// (0x000a6023) main_fs_bigclock_pane_t1

0x924d,	// (0x000a6035) main_fs_bigclock_pane_t2_ParamLimits

0x924d,	// (0x000a6035) main_fs_bigclock_pane_t2

0x9261,	// (0x000a6049) main_fs_bigclock_pane_t3_ParamLimits

0x9261,	// (0x000a6049) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x000acc54) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x000acc54) main_fs_bigclock_pane_t

0xec5b,	// (0x000aba43) main_fs_bigclock_indicator_pane_g1

0xe0c7,	// (0x000aaeaf) ncim_query_content_pane_g2_ParamLimits

0xe0c7,	// (0x000aaeaf) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x000ac9d7) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x000ac9d7) ncim_query_content_pane_g

0x8331,	// (0x000a5119) sc_clock_pane_t4_ParamLimits

0x8331,	// (0x000a5119) sc_clock_pane_t4

0xa2ce,	// (0x000a70b6) main_radioblah_pane

0xd5ce,	// (0x000aa3b6) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5ce,	// (0x000aa3b6) cell_call4_button_pane_t1_copy1

0x7fa4,	// (0x000a4d8c) main_ncimui_pane_t1_ParamLimits

0x7fa4,	// (0x000a4d8c) main_ncimui_pane_t1

0x7fbe,	// (0x000a4da6) main_ncimui_pane_t2_ParamLimits

0x7fbe,	// (0x000a4da6) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x000ac9d0) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x000ac9d0) main_ncimui_pane_t

0xe54a,	// (0x000ab332) main_radioblah_anim_pane_ParamLimits

0xe54a,	// (0x000ab332) main_radioblah_anim_pane

0xe55b,	// (0x000ab343) main_radioblah_info_pane_ParamLimits

0xe55b,	// (0x000ab343) main_radioblah_info_pane

0xe56f,	// (0x000ab357) main_radioblah_pane_t1_ParamLimits

0xe56f,	// (0x000ab357) main_radioblah_pane_t1

0xe58b,	// (0x000ab373) main_radioblah_pane_t2_ParamLimits

0xe58b,	// (0x000ab373) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x000aca6b) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x000aca6b) main_radioblah_pane_t

0x8404,	// (0x000a51ec) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8404,	// (0x000a51ec) main_radioblah_rocker_ctrl_pane

0xe5d3,	// (0x000ab3bb) main_radioblah_info_pane_t1_ParamLimits

0xe5d3,	// (0x000ab3bb) main_radioblah_info_pane_t1

0x844d,	// (0x000a5235) main_radioblah_info_pane_t2_ParamLimits

0x844d,	// (0x000a5235) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x000aca74) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x000aca74) main_radioblah_info_pane_t

0xcc73,	// (0x000a9a5b) main_radioblah_rocker_ctrl_pane_g1

0x84fd,	// (0x000a52e5) main_radioblah_rocker_ctrl_pane_g2

0x8505,	// (0x000a52ed) main_radioblah_rocker_ctrl_pane_g3

0x850d,	// (0x000a52f5) main_radioblah_rocker_ctrl_pane_g4

0x8515,	// (0x000a52fd) main_radioblah_rocker_ctrl_pane_g5

0x851d,	// (0x000a5305) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x000aca7d) main_radioblah_rocker_ctrl_pane_g

0x7f56,	// (0x000a4d3e) main_cset_text2_pane_t1_copy1_ParamLimits

0x63f4,	// (0x000a31dc) cam4_image_uncrop_qvga_pane

0x6547,	// (0x000a332f) vid4_image_uncrop_qcif_pane

0x7a21,	// (0x000a4809) cam6_image_uncrop_qvga_pane_ParamLimits

0x7a21,	// (0x000a4809) cam6_image_uncrop_qvga_pane

0xddca,	// (0x000aabb2) vid6_image_uncrop_qcif_pane_ParamLimits

0xddca,	// (0x000aabb2) vid6_image_uncrop_qcif_pane

0x9c13,	// (0x000a69fb) bg_popup_preview_window_pane_cp03

0xe079,	// (0x000aae61) list_cset_text2_pane

0xe081,	// (0x000aae69) main_cset6_text2_pane_g1

0xe089,	// (0x000aae71) main_cset6_text2_pane_t1

0x8525,	// (0x000a530d) list_cset_text2_pane_t1_ParamLimits

0x8525,	// (0x000a530d) list_cset_text2_pane_t1

0xa2ce,	// (0x000a70b6) main_radioblah_pane_ParamLimits

0x8292,	// (0x000a507a) main_mobtv_info_pane_t3_ParamLimits

0x8292,	// (0x000a507a) main_mobtv_info_pane_t3

0x83f2,	// (0x000a51da) main_radioblah_pane_g1

0x841d,	// (0x000a5205) main_radioblah_info_pane_g1

0x84a2,	// (0x000a528a) main_radioblah_info_pane_t3_ParamLimits

0x84a2,	// (0x000a528a) main_radioblah_info_pane_t3

0x3090,	// (0x0009fe78) highlight_cell_cale_month_pane_ParamLimits

0x3090,	// (0x0009fe78) highlight_cell_cale_month_pane

0x9c13,	// (0x000a69fb) main_phob_fisheye_pane

0xcf7f,	// (0x000a9d67) scroll_pane_cp0031_ParamLimits

0xcf7f,	// (0x000a9d67) scroll_pane_cp0031

0xdedc,	// (0x000aacc4) wait_bar_pane_cp08_ParamLimits

0x7c2f,	// (0x000a4a17) cset_list_set_pane_copy1_ParamLimits

0xe60d,	// (0x000ab3f5) highlight_cell_cale_month_pane_g1

0x853c,	// (0x000a5324) highlight_cell_cale_month_pane_t1

0xdb94,	// (0x000aa97c) list_gen_pane_cp01

0xd79f,	// (0x000aa587) scroll_pane_01

0x854a,	// (0x000a5332) list_single_double_fisheye_pane

0x8553,	// (0x000a533b) list_double_fisheye_pane_g1_ParamLimits

0x8553,	// (0x000a533b) list_double_fisheye_pane_g1

0x855f,	// (0x000a5347) list_double_fisheye_pane_g2_ParamLimits

0x855f,	// (0x000a5347) list_double_fisheye_pane_g2

0x8573,	// (0x000a535b) list_double_fisheye_pane_g3_ParamLimits

0x8573,	// (0x000a535b) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x000aca8a) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x000aca8a) list_double_fisheye_pane_g

0x859c,	// (0x000a5384) list_double_fisheye_pane_t1_ParamLimits

0x859c,	// (0x000a5384) list_double_fisheye_pane_t1

0x85b7,	// (0x000a539f) list_double_fisheye_pane_t2_ParamLimits

0x85b7,	// (0x000a539f) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x000aca95) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x000aca95) list_double_fisheye_pane_t

0x9c13,	// (0x000a69fb) main_call5_pane

0x8357,	// (0x000a513f) sc_swipe_pane_ParamLimits

0x8357,	// (0x000a513f) sc_swipe_pane

0x85e5,	// (0x000a53cd) call5_image_pane_ParamLimits

0x85e5,	// (0x000a53cd) call5_image_pane

0x85f7,	// (0x000a53df) call5_swipe_1_pane_ParamLimits

0x85f7,	// (0x000a53df) call5_swipe_1_pane

0x8603,	// (0x000a53eb) call5_swipe_2_pane_ParamLimits

0x8603,	// (0x000a53eb) call5_swipe_2_pane

0x861f,	// (0x000a5407) popup_call5_audio_first_window_ParamLimits

0x861f,	// (0x000a5407) popup_call5_audio_first_window

0xcea3,	// (0x000a9c8b) call5_swipe_1_pane_g1_ParamLimits

0xcea3,	// (0x000a9c8b) call5_swipe_1_pane_g1

0xe615,	// (0x000ab3fd) call5_swipe_1_pane_g2_ParamLimits

0xe615,	// (0x000ab3fd) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x000aca9a) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x000aca9a) call5_swipe_1_pane_g

0xe621,	// (0x000ab409) call5_swipe_1_pane_t1_ParamLimits

0xe621,	// (0x000ab409) call5_swipe_1_pane_t1

0xcea3,	// (0x000a9c8b) call5_swipe_2_pane_g1_ParamLimits

0xcea3,	// (0x000a9c8b) call5_swipe_2_pane_g1

0xe636,	// (0x000ab41e) call5_swipe_2_pane_g2_ParamLimits

0xe636,	// (0x000ab41e) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x000aca9f) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x000aca9f) call5_swipe_2_pane_g

0xe642,	// (0x000ab42a) call5_swipe_2_pane_t1_ParamLimits

0xe642,	// (0x000ab42a) call5_swipe_2_pane_t1

0xe657,	// (0x000ab43f) sc_swipe_pane_g1_ParamLimits

0xe657,	// (0x000ab43f) sc_swipe_pane_g1

0xe664,	// (0x000ab44c) sc_swipe_pane_g2_ParamLimits

0xe664,	// (0x000ab44c) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x000acaa4) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x000acaa4) sc_swipe_pane_g

0xe670,	// (0x000ab458) sc_swipe_pane_t1_ParamLimits

0xe670,	// (0x000ab458) sc_swipe_pane_t1

0x9c13,	// (0x000a69fb) main_cmail_launcher_pane

0x862f,	// (0x000a5417) aid_size_cell_cmail_l_ParamLimits

0x862f,	// (0x000a5417) aid_size_cell_cmail_l

0x863f,	// (0x000a5427) grid_cmail_l_pane_ParamLimits

0x863f,	// (0x000a5427) grid_cmail_l_pane

0x864f,	// (0x000a5437) cell_cmail_l_pane_ParamLimits

0x864f,	// (0x000a5437) cell_cmail_l_pane

0x8665,	// (0x000a544d) cell_cmail_l_pane_g1_ParamLimits

0x8665,	// (0x000a544d) cell_cmail_l_pane_g1

0x8671,	// (0x000a5459) cell_cmail_l_pane_t1_ParamLimits

0x8671,	// (0x000a5459) cell_cmail_l_pane_t1

0xe685,	// (0x000ab46d) cell_cmail_l_pane_t2_ParamLimits

0xe685,	// (0x000ab46d) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x000acaa9) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x000acaa9) cell_cmail_l_pane_t

0xa2ce,	// (0x000a70b6) grid_highlight_pane_cp018_ParamLimits

0xa2ce,	// (0x000a70b6) grid_highlight_pane_cp018

0x0c70,	// (0x0009da58) main2_pane_ParamLimits

0x0c70,	// (0x0009da58) main2_pane

0xa914,	// (0x000a76fc) popup_sp_fs_action_menu_bg_pane_g1

0xa91c,	// (0x000a7704) popup_sp_fs_action_menu_bg_pane_g2

0xa924,	// (0x000a770c) popup_sp_fs_action_menu_bg_pane_g3

0xa92c,	// (0x000a7714) popup_sp_fs_action_menu_bg_pane_g4

0xa934,	// (0x000a771c) popup_sp_fs_action_menu_bg_pane_g5

0xa93c,	// (0x000a7724) popup_sp_fs_action_menu_bg_pane_g6

0xa944,	// (0x000a772c) popup_sp_fs_action_menu_bg_pane_g7

0xa94c,	// (0x000a7734) popup_sp_fs_action_menu_bg_pane_g8

0xa954,	// (0x000a773c) popup_sp_fs_action_menu_bg_pane_g9

0xa95c,	// (0x000a7744) popup_sp_fs_action_menu_bg_pane_g10

0xa95c,	// (0x000a7744) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000abf6e) popup_sp_fs_action_menu_bg_pane_g

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g3_g1

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t3_g3_g2

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000ac020) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000ac020) list_medium_line_x2_t3_g3_g

0x1ef8,	// (0x0009ece0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ef8,	// (0x0009ece0) list_medium_line_x2_t3_g3_t1

0x1f0d,	// (0x0009ecf5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f0d,	// (0x0009ecf5) list_medium_line_x2_t3_g3_t2

0x1f21,	// (0x0009ed09) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000ac027) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000ac027) list_medium_line_x2_t3_g3_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g2_g1

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000ac02e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000ac02e) list_medium_line_x2_t3_g2_g

0x1f36,	// (0x0009ed1e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f36,	// (0x0009ed1e) list_medium_line_x2_t3_g2_t1

0x1f4c,	// (0x0009ed34) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f4c,	// (0x0009ed34) list_medium_line_x2_t3_g2_t2

0x1f5e,	// (0x0009ed46) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f5e,	// (0x0009ed46) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000ac033) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000ac033) list_medium_line_x2_t3_g2_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t4_g4_g1

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t4_g4_g2

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t4_g4_g3

0x1f88,	// (0x0009ed70) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f88,	// (0x0009ed70) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000ac03a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000ac03a) list_medium_line_x2_t4_g4_g

0x1f94,	// (0x0009ed7c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f94,	// (0x0009ed7c) list_medium_line_x2_t4_g4_t1

0x1fab,	// (0x0009ed93) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fab,	// (0x0009ed93) list_medium_line_x2_t4_g4_t2

0x1fc0,	// (0x0009eda8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fc0,	// (0x0009eda8) list_medium_line_x2_t4_g4_t3

0x1fd2,	// (0x0009edba) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1fd2,	// (0x0009edba) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000ac043) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000ac043) list_medium_line_x2_t4_g4_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g4_g1

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t2_g4_g2

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t2_g4_g3

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000ac0aa) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000ac0aa) list_medium_line_x2_t2_g4_g

0x30b6,	// (0x0009fe9e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30b6,	// (0x0009fe9e) list_medium_line_x2_t2_g4_t1

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000ac0b3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000ac0b3) list_medium_line_x2_t2_g4_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g3_g1

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t2_g3_g2

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000ac020) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000ac020) list_medium_line_x2_t2_g3_g

0x30cb,	// (0x0009feb3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30cb,	// (0x0009feb3) list_medium_line_x2_t2_g3_t1

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000ac0b8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000ac0b8) list_medium_line_x2_t2_g3_t

0x3261,	// (0x000a0049) main_sp_fs_list_pane_ParamLimits

0x3261,	// (0x000a0049) main_sp_fs_list_pane

0x326d,	// (0x000a0055) sp_fs_scroll_pane_ParamLimits

0x326d,	// (0x000a0055) sp_fs_scroll_pane

0x3279,	// (0x000a0061) list_medium_line_x2_t3_t1

0x3289,	// (0x000a0071) list_medium_line_x2_t3_t2

0x3297,	// (0x000a007f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000ac103) list_medium_line_x2_t3_t

0x32a5,	// (0x000a008d) list_medium_line_x3_t4_t1

0x32b5,	// (0x000a009d) list_medium_line_x3_t4_t2

0x32c3,	// (0x000a00ab) list_medium_line_x3_t4_t3

0x3297,	// (0x000a007f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000ac10a) list_medium_line_x3_t4_t

0x32d1,	// (0x000a00b9) list_medium_line_x4_t5_t1

0x32e1,	// (0x000a00c9) list_medium_line_x4_t5_t2

0x32c3,	// (0x000a00ab) list_medium_line_x4_t5_t3

0x32ef,	// (0x000a00d7) list_medium_line_x4_t5_t4

0x3297,	// (0x000a007f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000ac113) list_medium_line_x4_t5_t

0x1ed4,	// (0x0009ecbc) list_medium_line_t4_g4_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_t4_g4_g1

0x1f88,	// (0x0009ed70) list_medium_line_t4_g4_g2_ParamLimits

0x1f88,	// (0x0009ed70) list_medium_line_t4_g4_g2

0x32fd,	// (0x000a00e5) list_medium_line_t4_g4_g3_ParamLimits

0x32fd,	// (0x000a00e5) list_medium_line_t4_g4_g3

0x1eec,	// (0x0009ecd4) list_medium_line_t4_g4_g4_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000ac11e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000ac11e) list_medium_line_t4_g4_g

0x3309,	// (0x000a00f1) list_medium_line_t4_g4_t1_ParamLimits

0x3309,	// (0x000a00f1) list_medium_line_t4_g4_t1

0x331e,	// (0x000a0106) list_medium_line_t4_g4_t2_ParamLimits

0x331e,	// (0x000a0106) list_medium_line_t4_g4_t2

0x3334,	// (0x000a011c) list_medium_line_t4_g4_t3_ParamLimits

0x3334,	// (0x000a011c) list_medium_line_t4_g4_t3

0x1f21,	// (0x0009ed09) list_medium_line_t4_g4_t4_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000ac127) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000ac127) list_medium_line_t4_g4_t

0x345d,	// (0x000a0245) chi_dic_find_pane_g1

0x44b4,	// (0x000a129c) main_tport_pane

0xa2f9,	// (0x000a70e1) list_medium_line_plain_t1

0xa307,	// (0x000a70ef) list_medium_line_t2_g2_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t2_g2_g1

0xb050,	// (0x000a7e38) list_medium_line_t2_g2_g2_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000ac7e8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000ac7e8) list_medium_line_t2_g2_g

0x702a,	// (0x000a3e12) list_medium_line_t2_g2_t1_ParamLimits

0x702a,	// (0x000a3e12) list_medium_line_t2_g2_t1

0x7044,	// (0x000a3e2c) list_medium_line_t2_g2_t2_ParamLimits

0x7044,	// (0x000a3e2c) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000ac7ed) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000ac7ed) list_medium_line_t2_g2_t

0xa3af,	// (0x000a7197) aid_sp_fs_list_icon_a_sm

0xb05c,	// (0x000a7e44) aid_sp_fs_list_icon_d

0xa3b7,	// (0x000a719f) aid_sp_fs_text_primary

0xa3c0,	// (0x000a71a8) aid_sp_fs_text_secondary

0x76d5,	// (0x000a44bd) list_medium_line

0x76d5,	// (0x000a44bd) list_medium_line_g2

0x76d5,	// (0x000a44bd) list_medium_line_g3

0x76d5,	// (0x000a44bd) list_medium_line_plain

0x76d5,	// (0x000a44bd) list_medium_line_plain_t2

0x76d5,	// (0x000a44bd) list_medium_line_plain_t3

0x76d5,	// (0x000a44bd) list_medium_line_right_icon

0x76d5,	// (0x000a44bd) list_medium_line_right_iconx2

0x76d5,	// (0x000a44bd) list_medium_line_t2

0x76d5,	// (0x000a44bd) list_medium_line_t2_g2

0x76d5,	// (0x000a44bd) list_medium_line_t2_g3

0x76d5,	// (0x000a44bd) list_medium_line_t2_right_icon

0x76d5,	// (0x000a44bd) list_medium_line_t2_right_iconx2

0x76d5,	// (0x000a44bd) list_medium_line_t3

0x76d5,	// (0x000a44bd) list_medium_line_t3_g2

0x76d5,	// (0x000a44bd) list_medium_line_t3_g3

0x76d5,	// (0x000a44bd) list_medium_line_t3_right_iconx2

0x76de,	// (0x000a44c6) list_medium_line_t4_g4

0x76e7,	// (0x000a44cf) list_medium_line_x2

0x76e7,	// (0x000a44cf) list_medium_line_x2_t2_g2

0x76e7,	// (0x000a44cf) list_medium_line_x2_t2_g3

0x76e7,	// (0x000a44cf) list_medium_line_x2_t2_g4

0x76e7,	// (0x000a44cf) list_medium_line_x2_t3

0x76e7,	// (0x000a44cf) list_medium_line_x2_t3_g2

0x76e7,	// (0x000a44cf) list_medium_line_x2_t3_g3

0x76e7,	// (0x000a44cf) list_medium_line_x2_t3_g4

0x76e7,	// (0x000a44cf) list_medium_line_x2_t4_g2

0x76e7,	// (0x000a44cf) list_medium_line_x2_t4_g4

0x76f0,	// (0x000a44d8) list_medium_line_x3

0x76f0,	// (0x000a44d8) list_medium_line_x3_t4

0x76f0,	// (0x000a44d8) list_medium_line_x3_t4_g4

0x76de,	// (0x000a44c6) list_medium_line_x4_t4

0x76de,	// (0x000a44c6) list_medium_line_x4_t4_g7

0x76de,	// (0x000a44c6) list_medium_line_x4_t5

0x76f9,	// (0x000a44e1) list_single_fs_dyc_pane_ParamLimits

0x76f9,	// (0x000a44e1) list_single_fs_dyc_pane

0x1ed4,	// (0x0009ecbc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x4_t4_g7_g1

0x7e87,	// (0x000a4c6f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e87,	// (0x000a4c6f) list_medium_line_x4_t4_g7_g2

0x7e93,	// (0x000a4c7b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e93,	// (0x000a4c7b) list_medium_line_x4_t4_g7_g3

0x7ea2,	// (0x000a4c8a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ea2,	// (0x000a4c8a) list_medium_line_x4_t4_g7_g4

0x7eae,	// (0x000a4c96) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7eae,	// (0x000a4c96) list_medium_line_x4_t4_g7_g5

0x7ebd,	// (0x000a4ca5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ebd,	// (0x000a4ca5) list_medium_line_x4_t4_g7_g6

0x7ecc,	// (0x000a4cb4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ecc,	// (0x000a4cb4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x000ac9b1) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x000ac9b1) list_medium_line_x4_t4_g7_g

0x7ed8,	// (0x000a4cc0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ed8,	// (0x000a4cc0) list_medium_line_x4_t4_g7_t1

0x7eed,	// (0x000a4cd5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7eed,	// (0x000a4cd5) list_medium_line_x4_t4_g7_t2

0x7f02,	// (0x000a4cea) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f02,	// (0x000a4cea) list_medium_line_x4_t4_g7_t3

0x7f17,	// (0x000a4cff) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f17,	// (0x000a4cff) list_medium_line_x4_t4_g7_t4

0x7f29,	// (0x000a4d11) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f29,	// (0x000a4d11) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x000ac9c0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x000ac9c0) list_medium_line_x4_t4_g7_t

0x7f3b,	// (0x000a4d23) list_single_dyc_row_pane_ParamLimits

0x7f3b,	// (0x000a4d23) list_single_dyc_row_pane

0x85d9,	// (0x000a53c1) call5_gesture_pane_ParamLimits

0x85d9,	// (0x000a53c1) call5_gesture_pane

0x860f,	// (0x000a53f7) call5_windows_pane_ParamLimits

0x860f,	// (0x000a53f7) call5_windows_pane

0x8687,	// (0x000a546f) call5_swipe_1_pane_cp_ParamLimits

0x8687,	// (0x000a546f) call5_swipe_1_pane_cp

0x8693,	// (0x000a547b) call5_swipe_2_pane_cp_ParamLimits

0x8693,	// (0x000a547b) call5_swipe_2_pane_cp

0xb40b,	// (0x000a81f3) call5_image_pane_cp

0x869f,	// (0x000a5487) popup_call5_audio_first_window_cp_ParamLimits

0x869f,	// (0x000a5487) popup_call5_audio_first_window_cp

0xe657,	// (0x000ab43f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe657,	// (0x000ab43f) call5_swipe_1_pane_g1_cp

0xe697,	// (0x000ab47f) call5_swipe_1_pane_g2_cp

0xe670,	// (0x000ab458) call5_swipe_1_pane_t1_cp_ParamLimits

0xe670,	// (0x000ab458) call5_swipe_1_pane_t1_cp

0xe657,	// (0x000ab43f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe657,	// (0x000ab43f) call5_swipe_2_pane_g1_cp

0xe69f,	// (0x000ab487) call5_swipe_2_pane_g2_cp

0xe6a7,	// (0x000ab48f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6a7,	// (0x000ab48f) call5_swipe_2_pane_t1_cp

0xa2ce,	// (0x000a70b6) main_sp_fs_email_pane

0xe6bc,	// (0x000ab4a4) main_sp_fs_listscroll_pane_te

0xa3c9,	// (0x000a71b1) popup_sp_fs_action_menu_pane_ParamLimits

0xa3c9,	// (0x000a71b1) popup_sp_fs_action_menu_pane

0xcc73,	// (0x000a9a5b) bg_sp_fs_ctrlbar_pane_g1

0xd228,	// (0x000aa010) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd23a,	// (0x000aa022) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd231,	// (0x000aa019) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc73,	// (0x000a9a5b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x000acaae) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca52,	// (0x000a983a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca52,	// (0x000a983a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6c5,	// (0x000ab4ad) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6c5,	// (0x000ab4ad) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d1,	// (0x000ab4b9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6d1,	// (0x000ab4b9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x000acab7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x000acab7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6dd,	// (0x000ab4c5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6dd,	// (0x000ab4c5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb064,	// (0x000a7e4c) list_medium_line_t2_right_icon_g1

0x86ad,	// (0x000a5495) list_medium_line_t2_right_icon_t1

0x86bd,	// (0x000a54a5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x000acabc) list_medium_line_t2_right_icon_t

0xc822,	// (0x000a960a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc822,	// (0x000a960a) bg_sp_fs_ctrlbar_pane

0x8724,	// (0x000a550c) main_sp_fs_ctrlbar_button_pane_cp01

0x872c,	// (0x000a5514) main_sp_fs_ctrlbar_ddmenu_pane

0xe6f7,	// (0x000ab4df) main_sp_fs_ctrlbar_pane_g1

0xe756,	// (0x000ab53e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x000acac1) main_sp_fs_ctrlbar_pane_g

0xe762,	// (0x000ab54a) main_sp_fs_ctrlbar_pane_t1

0x8736,	// (0x000a551e) main_sp_fs_ctrlbar_pane

0x8750,	// (0x000a5538) main_sp_fs_listscroll_pane_te_cp01

0x8761,	// (0x000a5549) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8761,	// (0x000a5549) popup_sp_fs_action_menu_pane_cp01

0xa2ce,	// (0x000a70b6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2ce,	// (0x000a70b6) bg_sp_fs_highlight_list_pane_cp01

0xa40f,	// (0x000a71f7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa40f,	// (0x000a71f7) sp_fs_action_menu_list_gene_pane_g1

0xe792,	// (0x000ab57a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe792,	// (0x000ab57a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x000acacb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x000acacb) sp_fs_action_menu_list_gene_pane_g

0xa41e,	// (0x000a7206) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa41e,	// (0x000a7206) sp_fs_action_menu_list_gene_pane_t1

0xa436,	// (0x000a721e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa436,	// (0x000a721e) sp_fs_action_menu_list_gene_pane

0xe79f,	// (0x000ab587) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79f,	// (0x000ab587) popup_sp_fs_action_menu_bg_pane

0xa459,	// (0x000a7241) sp_fs_action_menu_list_pane_ParamLimits

0xa459,	// (0x000a7241) sp_fs_action_menu_list_pane

0xe7ad,	// (0x000ab595) sp_fs_scroll_pane_cp01_ParamLimits

0xe7ad,	// (0x000ab595) sp_fs_scroll_pane_cp01

0x878f,	// (0x000a5577) list_medium_line_plain_t2_t1

0x879f,	// (0x000a5587) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x000acad0) list_medium_line_plain_t2_t

0x87ad,	// (0x000a5595) list_medium_line_plain_t3_t1

0x87bd,	// (0x000a55a5) list_medium_line_plain_t3_t2

0x87cb,	// (0x000a55b3) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x000acad5) list_medium_line_plain_t3_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t2_g2_g1

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000ac02e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000ac02e) list_medium_line_x2_t2_g2_g

0x3309,	// (0x000a00f1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3309,	// (0x000a00f1) list_medium_line_x2_t2_g2_t1

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x000acadc) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x000acadc) list_medium_line_x2_t2_g2_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t4_g2_g1

0x87d9,	// (0x000a55c1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87d9,	// (0x000a55c1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x000acae1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x000acae1) list_medium_line_x2_t4_g2_g

0x87eb,	// (0x000a55d3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87eb,	// (0x000a55d3) list_medium_line_x2_t4_g2_t1

0x8805,	// (0x000a55ed) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8805,	// (0x000a55ed) list_medium_line_x2_t4_g2_t2

0x881b,	// (0x000a5603) list_medium_line_x2_t4_g2_t3_ParamLimits

0x881b,	// (0x000a5603) list_medium_line_x2_t4_g2_t3

0x1f21,	// (0x0009ed09) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x000acae6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x000acae6) list_medium_line_x2_t4_g2_t

0xb06c,	// (0x000a7e54) list_medium_line_t3_right_iconx2_g1

0xb064,	// (0x000a7e4c) list_medium_line_t3_right_iconx2_g2

0x8830,	// (0x000a5618) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x000acaef) list_medium_line_t3_right_iconx2_g

0x883a,	// (0x000a5622) list_medium_line_t3_right_iconx2_t1

0x884a,	// (0x000a5632) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x000acaf6) list_medium_line_t3_right_iconx2_t

0x1ed4,	// (0x0009ecbc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x3_t4_g4_g1

0x1ee0,	// (0x0009ecc8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x3_t4_g4_g2

0x1f88,	// (0x0009ed70) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f88,	// (0x0009ed70) list_medium_line_x3_t4_g4_g3

0x8858,	// (0x000a5640) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8858,	// (0x000a5640) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x000acafb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x000acafb) list_medium_line_x3_t4_g4_g

0x8864,	// (0x000a564c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8864,	// (0x000a564c) list_medium_line_x3_t4_g4_t1

0x887b,	// (0x000a5663) list_medium_line_x3_t4_g4_t2_ParamLimits

0x887b,	// (0x000a5663) list_medium_line_x3_t4_g4_t2

0x8890,	// (0x000a5678) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8890,	// (0x000a5678) list_medium_line_x3_t4_g4_t3

0x88a5,	// (0x000a568d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88a5,	// (0x000a568d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x000acb04) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x000acb04) list_medium_line_x3_t4_g4_t

0x88c2,	// (0x000a56aa) list_single_dyc_row_text_pane_t1_ParamLimits

0x88c2,	// (0x000a56aa) list_single_dyc_row_text_pane_t1

0x8905,	// (0x000a56ed) list_single_dyc_row_text_pane_t2_ParamLimits

0x8905,	// (0x000a56ed) list_single_dyc_row_text_pane_t2

0xa47d,	// (0x000a7265) list_single_dyc_row_text_pane_t3_ParamLimits

0xa47d,	// (0x000a7265) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x000acb0d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x000acb0d) list_single_dyc_row_text_pane_t

0xa4a1,	// (0x000a7289) list_single_dyc_row_pane_g1_ParamLimits

0xa4a1,	// (0x000a7289) list_single_dyc_row_pane_g1

0xa4ad,	// (0x000a7295) list_single_dyc_row_pane_g2_ParamLimits

0xa4ad,	// (0x000a7295) list_single_dyc_row_pane_g2

0xa4b9,	// (0x000a72a1) list_single_dyc_row_pane_g3_ParamLimits

0xa4b9,	// (0x000a72a1) list_single_dyc_row_pane_g3

0xa4c5,	// (0x000a72ad) list_single_dyc_row_pane_g4_ParamLimits

0xa4c5,	// (0x000a72ad) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x000acb1a) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x000acb1a) list_single_dyc_row_pane_g

0xa4d1,	// (0x000a72b9) list_single_dyc_row_text_pane_ParamLimits

0xa4d1,	// (0x000a72b9) list_single_dyc_row_text_pane

0x9c13,	// (0x000a69fb) bg_sp_fs_scroll_pane

0xe7d3,	// (0x000ab5bb) thumb_sp_fs_scroll_pane

0xa307,	// (0x000a70ef) list_medium_line_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_g1

0xa4f0,	// (0x000a72d8) list_medium_line_t1_ParamLimits

0xa4f0,	// (0x000a72d8) list_medium_line_t1

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_g1

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_g2_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x000acb23) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x000acb23) list_medium_line_x2_g

0xa505,	// (0x000a72ed) list_medium_line_x2_t1_ParamLimits

0xa505,	// (0x000a72ed) list_medium_line_x2_t1

0x1ed4,	// (0x0009ecbc) list_medium_line_x3_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x3_g1

0x1ee0,	// (0x0009ecc8) list_medium_line_x3_g2_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x000acb23) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x000acb23) list_medium_line_x3_g

0xa505,	// (0x000a72ed) list_medium_line_x3_t1_ParamLimits

0xa505,	// (0x000a72ed) list_medium_line_x3_t1

0xe7dc,	// (0x000ab5c4) thumb_sp_fs_scroll_pane_g1

0xe7e5,	// (0x000ab5cd) thumb_sp_fs_scroll_pane_g2

0xe7ee,	// (0x000ab5d6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acb28) thumb_sp_fs_scroll_pane_g

0xe7dc,	// (0x000ab5c4) bg_sp_fs_scroll_pane_g1

0xe7e5,	// (0x000ab5cd) bg_sp_fs_scroll_pane_g2

0xe7ee,	// (0x000ab5d6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x000acb28) bg_sp_fs_scroll_pane_g

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ed4,	// (0x0009ecbc) list_medium_line_x2_t3_g4_g1

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f7c,	// (0x0009ed64) list_medium_line_x2_t3_g4_g2

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ee0,	// (0x0009ecc8) list_medium_line_x2_t3_g4_g3

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1eec,	// (0x0009ecd4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000ac0aa) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000ac0aa) list_medium_line_x2_t3_g4_g

0x8a36,	// (0x000a581e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a36,	// (0x000a581e) list_medium_line_x2_t3_g4_t1

0x8a4c,	// (0x000a5834) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a4c,	// (0x000a5834) list_medium_line_x2_t3_g4_t2

0x1f21,	// (0x0009ed09) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f21,	// (0x0009ed09) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x000acb2f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x000acb2f) list_medium_line_x2_t3_g4_t

0xa307,	// (0x000a70ef) list_medium_line_g2_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_g2_g1

0xb050,	// (0x000a7e38) list_medium_line_g2_g2_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000ac7e8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000ac7e8) list_medium_line_g2_g

0xa51b,	// (0x000a7303) list_medium_line_g2_t1_ParamLimits

0xa51b,	// (0x000a7303) list_medium_line_g2_t1

0xa307,	// (0x000a70ef) list_medium_line_t3_g2_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t3_g2_g1

0xb050,	// (0x000a7e38) list_medium_line_t3_g2_g2_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000ac7e8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000ac7e8) list_medium_line_t3_g2_g

0x8a65,	// (0x000a584d) list_medium_line_t3_g2_t1_ParamLimits

0x8a65,	// (0x000a584d) list_medium_line_t3_g2_t1

0x8a7f,	// (0x000a5867) list_medium_line_t3_g2_t2_ParamLimits

0x8a7f,	// (0x000a5867) list_medium_line_t3_g2_t2

0x8a95,	// (0x000a587d) list_medium_line_t3_g2_t3_ParamLimits

0x8a95,	// (0x000a587d) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x000acb36) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x000acb36) list_medium_line_t3_g2_t

0xb064,	// (0x000a7e4c) list_medium_line_right_icon_g1

0xa530,	// (0x000a7318) list_medium_line_right_icon_t1

0xa307,	// (0x000a70ef) list_medium_line_t2_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t2_g1

0x8aac,	// (0x000a5894) list_medium_line_t2_t1_ParamLimits

0x8aac,	// (0x000a5894) list_medium_line_t2_t1

0x8ac6,	// (0x000a58ae) list_medium_line_t2_t2_ParamLimits

0x8ac6,	// (0x000a58ae) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x000acb3d) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x000acb3d) list_medium_line_t2_t

0xa307,	// (0x000a70ef) list_medium_line_t3_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t3_g1

0x8adb,	// (0x000a58c3) list_medium_line_t3_t1_ParamLimits

0x8adb,	// (0x000a58c3) list_medium_line_t3_t1

0x8af2,	// (0x000a58da) list_medium_line_t3_t2_ParamLimits

0x8af2,	// (0x000a58da) list_medium_line_t3_t2

0x8b07,	// (0x000a58ef) list_medium_line_t3_t3_ParamLimits

0x8b07,	// (0x000a58ef) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x000acb42) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x000acb42) list_medium_line_t3_t

0xa307,	// (0x000a70ef) list_medium_line_g3_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_g3_g1

0xb074,	// (0x000a7e5c) list_medium_line_g3_g2_ParamLimits

0xb074,	// (0x000a7e5c) list_medium_line_g3_g2

0xb050,	// (0x000a7e38) list_medium_line_g3_g3_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x000acb49) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x000acb49) list_medium_line_g3_g

0xa53e,	// (0x000a7326) list_medium_line_g3_t1_ParamLimits

0xa53e,	// (0x000a7326) list_medium_line_g3_t1

0xa307,	// (0x000a70ef) list_medium_line_t2_g3_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t2_g3_g1

0xb074,	// (0x000a7e5c) list_medium_line_t2_g3_g2_ParamLimits

0xb074,	// (0x000a7e5c) list_medium_line_t2_g3_g2

0xb050,	// (0x000a7e38) list_medium_line_t2_g3_g3_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x000acb49) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x000acb49) list_medium_line_t2_g3_g

0x8b19,	// (0x000a5901) list_medium_line_t2_g3_t1_ParamLimits

0x8b19,	// (0x000a5901) list_medium_line_t2_g3_t1

0x8b33,	// (0x000a591b) list_medium_line_t2_g3_t2_ParamLimits

0x8b33,	// (0x000a591b) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x000acb50) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x000acb50) list_medium_line_t2_g3_t

0xa307,	// (0x000a70ef) list_medium_line_t3_g3_g1_ParamLimits

0xa307,	// (0x000a70ef) list_medium_line_t3_g3_g1

0xb074,	// (0x000a7e5c) list_medium_line_t3_g3_g2_ParamLimits

0xb074,	// (0x000a7e5c) list_medium_line_t3_g3_g2

0xb050,	// (0x000a7e38) list_medium_line_t3_g3_g3_ParamLimits

0xb050,	// (0x000a7e38) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x000acb49) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x000acb49) list_medium_line_t3_g3_g

0x8b49,	// (0x000a5931) list_medium_line_t3_g3_t1_ParamLimits

0x8b49,	// (0x000a5931) list_medium_line_t3_g3_t1

0x8b62,	// (0x000a594a) list_medium_line_t3_g3_t2_ParamLimits

0x8b62,	// (0x000a594a) list_medium_line_t3_g3_t2

0x8b78,	// (0x000a5960) list_medium_line_t3_g3_t3_ParamLimits

0x8b78,	// (0x000a5960) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x000acb55) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x000acb55) list_medium_line_t3_g3_t

0xb06c,	// (0x000a7e54) list_medium_line_right_iconx2_g1

0xb064,	// (0x000a7e4c) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acb5c) list_medium_line_right_iconx2_g

0xb080,	// (0x000a7e68) list_medium_line_right_iconx2_t1

0xb06c,	// (0x000a7e54) list_medium_line_t2_right_iconx2_g1

0xb064,	// (0x000a7e4c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x000acb5c) list_medium_line_t2_right_iconx2_g

0x8b92,	// (0x000a597a) list_medium_line_t2_right_iconx2_t1

0x8ba2,	// (0x000a598a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x000acb61) list_medium_line_t2_right_iconx2_t

0x8bb0,	// (0x000a5998) list_medium_line_x4_t4_t1

0x8bbe,	// (0x000a59a6) list_medium_line_x4_t4_t2

0x8bce,	// (0x000a59b6) list_medium_line_x4_t4_t3

0x8bde,	// (0x000a59c6) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x000acb66) list_medium_line_x4_t4_t

0x8c18,	// (0x000a5a00) tport_appsw_pane_ParamLimits

0x8c18,	// (0x000a5a00) tport_appsw_pane

0x8c26,	// (0x000a5a0e) tport_contact_pane_ParamLimits

0x8c26,	// (0x000a5a0e) tport_contact_pane

0x8c36,	// (0x000a5a1e) tport_listscroll_pane_ParamLimits

0x8c36,	// (0x000a5a1e) tport_listscroll_pane

0x8c46,	// (0x000a5a2e) cell_tport_appsw_pane_ParamLimits

0x8c46,	// (0x000a5a2e) cell_tport_appsw_pane

0xcf08,	// (0x000a9cf0) tport_appsw_pane_g1_ParamLimits

0xcf08,	// (0x000a9cf0) tport_appsw_pane_g1

0xe7f7,	// (0x000ab5df) tport_contact_pane_g1

0xe800,	// (0x000ab5e8) tport_contact_pane_t1

0xe80e,	// (0x000ab5f6) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x000acb6f) tport_contact_pane_t

0xe81c,	// (0x000ab604) list_tport_pane

0xe825,	// (0x000ab60d) scroll_pane_cp_030

0x8c7b,	// (0x000a5a63) cell_tport_appsw_pane_g1

0x8c8b,	// (0x000a5a73) cell_tport_appsw_pane_t1

0x8c99,	// (0x000a5a81) grid_highlight_pane_cp019

0x8ca1,	// (0x000a5a89) list_tport_double_graphic_pane_ParamLimits

0x8ca1,	// (0x000a5a89) list_tport_double_graphic_pane

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp023_ParamLimits

0xa2ce,	// (0x000a70b6) list_highlight_pane_cp023

0x8cae,	// (0x000a5a96) list_tport_double_graphic_pane_g1_ParamLimits

0x8cae,	// (0x000a5a96) list_tport_double_graphic_pane_g1

0x8cbb,	// (0x000a5aa3) list_tport_double_graphic_pane_t1_ParamLimits

0x8cbb,	// (0x000a5aa3) list_tport_double_graphic_pane_t1

0x8cd0,	// (0x000a5ab8) list_tport_double_graphic_pane_t2_ParamLimits

0x8cd0,	// (0x000a5ab8) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x000acb7b) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x000acb7b) list_tport_double_graphic_pane_t

0x9c13,	// (0x000a69fb) main_cale_note_pane

0x67c6,	// (0x000a35ae) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c6,	// (0x000a35ae) cell_vitu2_function_top_wide_pane_cp01

0x82a6,	// (0x000a508e) wait_bar_pane_cp05_ParamLimits

0xa2ce,	// (0x000a70b6) listscroll_cmail_pane

0xe836,	// (0x000ab61e) list_cmail_pane

0x8cec,	// (0x000a5ad4) list_cmail_body_pane

0x8d05,	// (0x000a5aed) list_single_cmail_header_caption_pane

0x8d26,	// (0x000a5b0e) list_single_cmail_header_detail_pane_ParamLimits

0x8d26,	// (0x000a5b0e) list_single_cmail_header_detail_pane

0x8d57,	// (0x000a5b3f) list_single_cmail_header_caption_pane_t1

0x8d67,	// (0x000a5b4f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d67,	// (0x000a5b4f) list_single_cmail_header_detail_pane_g1

0xb08e,	// (0x000a7e76) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb08e,	// (0x000a7e76) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x000acb80) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x000acb80) list_single_cmail_header_detail_pane_g

0x8d7f,	// (0x000a5b67) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8d7f,	// (0x000a5b67) list_single_cmail_header_detail_pane_t1

0x8dcd,	// (0x000a5bb5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8dcd,	// (0x000a5bb5) list_single_cmail_header_editor_pane_bg

0xe2f8,	// (0x000ab0e0) list_cmail_body_pane_g1

0xe863,	// (0x000ab64b) list_cmail_body_pane_t1

0xd681,	// (0x000aa469) list_single_cmail_header_editor_pane_bg_g1

0xac9e,	// (0x000a7a86) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd691,	// (0x000aa479) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd689,	// (0x000aa471) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8ab,	// (0x000aa693) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6b1,	// (0x000aa499) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a1,	// (0x000aa489) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a9,	// (0x000aa491) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac7e,	// (0x000a7a66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8de4,	// (0x000a5bcc) calenote_gesture_pane_ParamLimits

0x8de4,	// (0x000a5bcc) calenote_gesture_pane

0x8dfe,	// (0x000a5be6) calenote_window_pane_ParamLimits

0x8dfe,	// (0x000a5be6) calenote_window_pane

0xe871,	// (0x000ab659) popup_note_window_cp01

0x8e16,	// (0x000a5bfe) calenote_swipe_1_pane_ParamLimits

0x8e16,	// (0x000a5bfe) calenote_swipe_1_pane

0x8693,	// (0x000a547b) calenote_swipe_2_pane_ParamLimits

0x8693,	// (0x000a547b) calenote_swipe_2_pane

0xe657,	// (0x000ab43f) calenote_swipe_1_pane_g1_ParamLimits

0xe657,	// (0x000ab43f) calenote_swipe_1_pane_g1

0xe664,	// (0x000ab44c) calenote_swipe_1_pane_g2_ParamLimits

0xe664,	// (0x000ab44c) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x000acaa4) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x000acaa4) calenote_swipe_1_pane_g

0xe883,	// (0x000ab66b) calenote_swipe_1_pane_t1_ParamLimits

0xe883,	// (0x000ab66b) calenote_swipe_1_pane_t1

0xe657,	// (0x000ab43f) calenote_swipe_2_pane_g1_ParamLimits

0xe657,	// (0x000ab43f) calenote_swipe_2_pane_g1

0xe8a2,	// (0x000ab68a) calenote_swipe_2_pane_g2_ParamLimits

0xe8a2,	// (0x000ab68a) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x000acb8c) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x000acb8c) calenote_swipe_2_pane_g

0xe8ae,	// (0x000ab696) calenote_swipe_2_pane_t1_ParamLimits

0xe8ae,	// (0x000ab696) calenote_swipe_2_pane_t1

0x9c13,	// (0x000a69fb) main_mup_navstr_pane

0x54cd,	// (0x000a22b5) main_mup3_pane_t7_ParamLimits

0x54cd,	// (0x000a22b5) main_mup3_pane_t7

0x5ed0,	// (0x000a2cb8) main_mp4_pane_g6_ParamLimits

0x5ed0,	// (0x000a2cb8) main_mp4_pane_g6

0x624e,	// (0x000a3036) main_image3_pane_t4_ParamLimits

0x624e,	// (0x000a3036) main_image3_pane_t4

0x8e29,	// (0x000a5c11) popup_navstr_preview_pane_ParamLimits

0x8e29,	// (0x000a5c11) popup_navstr_preview_pane

0x8e35,	// (0x000a5c1d) scroll_navstr_pane_ParamLimits

0x8e35,	// (0x000a5c1d) scroll_navstr_pane

0x9c13,	// (0x000a69fb) bg_popup_preview_window_pane_cp04

0xe8d5,	// (0x000ab6bd) popup_navstr_preview_pane_t1

0x8e41,	// (0x000a5c29) scroll_navstr_pane_g1_ParamLimits

0x8e41,	// (0x000a5c29) scroll_navstr_pane_g1

0x8e4e,	// (0x000a5c36) scroll_navstr_pane_t1_ParamLimits

0x8e4e,	// (0x000a5c36) scroll_navstr_pane_t1

0xe87a,	// (0x000ab662) bg_button_pane_cp014

0xe87a,	// (0x000ab662) bg_button_pane_cp030

0x857f,	// (0x000a5367) list_double_fisheye_pane_g4_ParamLimits

0x857f,	// (0x000a5367) list_double_fisheye_pane_g4

0x858b,	// (0x000a5373) list_double_fisheye_pane_g5_ParamLimits

0x858b,	// (0x000a5373) list_double_fisheye_pane_g5

0xe83e,	// (0x000ab626) sp_fs_scroll_pane_cp03

0xe6f7,	// (0x000ab4df) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe756,	// (0x000ab53e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x000acac1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe762,	// (0x000ab54a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ce2,	// (0x000a5aca) sp_fs_scroll_pane_cp02

0xa97f,	// (0x000a7767) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa97f,	// (0x000a7767) popup_sp_fs_calendar_preview_list_single_pane

0x9c13,	// (0x000a69fb) main_cam6_pano_pane

0xa2ce,	// (0x000a70b6) main_mup3_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_phacti_pane

0x8179,	// (0x000a4f61) bg_button_pane_cp11

0x8191,	// (0x000a4f79) main_mobtv_info_pane_g2_ParamLimits

0x8191,	// (0x000a4f79) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x000aca21) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x000aca21) main_mobtv_info_pane_g

0x8343,	// (0x000a512b) sc_clock_pane_t5_ParamLimits

0x8343,	// (0x000a512b) sc_clock_pane_t5

0x83f2,	// (0x000a51da) main_radioblah_pane_g1_ParamLimits

0xe5a3,	// (0x000ab38b) main_radioblah_pane_t3_ParamLimits

0xe5a3,	// (0x000ab38b) main_radioblah_pane_t3

0xe5bb,	// (0x000ab3a3) main_radioblah_pane_t4_ParamLimits

0xe5bb,	// (0x000ab3a3) main_radioblah_pane_t4

0x8410,	// (0x000a51f8) main_radioblah_text_pane_ParamLimits

0x8410,	// (0x000a51f8) main_radioblah_text_pane

0x841d,	// (0x000a5205) main_radioblah_info_pane_g1_ParamLimits

0x84b6,	// (0x000a529e) main_radioblah_info_pane_t4_ParamLimits

0x84b6,	// (0x000a529e) main_radioblah_info_pane_t4

0xa2ce,	// (0x000a70b6) main_sp_fs_calendar_pane

0x8e60,	// (0x000a5c48) main_phacti_pane_g1

0x8e68,	// (0x000a5c50) phacti_note_pane_ParamLimits

0x8e68,	// (0x000a5c50) phacti_note_pane

0xe8ec,	// (0x000ab6d4) phacti_term_pane_ParamLimits

0xe8ec,	// (0x000ab6d4) phacti_term_pane

0xe901,	// (0x000ab6e9) phacti_note_pane_t1_ParamLimits

0xe901,	// (0x000ab6e9) phacti_note_pane_t1

0xa577,	// (0x000a735f) phacti_term_pane_g1

0xa57f,	// (0x000a7367) phacti_term_pane_t1_ParamLimits

0xa57f,	// (0x000a7367) phacti_term_pane_t1

0xe918,	// (0x000ab700) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe920,	// (0x000ab708) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x000acb96) popup_sp_fs_calendar_preview_list_single_pane_g

0xe928,	// (0x000ab710) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe928,	// (0x000ab710) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93e,	// (0x000ab726) aid_popup_sp_fs_bg_corner_pane

0xcc73,	// (0x000a9a5b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c13,	// (0x000a69fb) popup_sp_fs_calendar_preview_bg_pane

0xe946,	// (0x000ab72e) popup_sp_fs_calendar_preview_list_pane

0xc822,	// (0x000a960a) bg_main_sp_fs_cale_pane_ParamLimits

0xc822,	// (0x000a960a) bg_main_sp_fs_cale_pane

0xa5b2,	// (0x000a739a) listscroll_cale_mrui_pane_ParamLimits

0xa5b2,	// (0x000a739a) listscroll_cale_mrui_pane

0xa5c7,	// (0x000a73af) listscroll_sp_fs_schedule_track_pane

0xa5d0,	// (0x000a73b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5d0,	// (0x000a73b8) main_sp_fs_ctrlbar_pane_cp01

0xe94e,	// (0x000ab736) main_sp_fs_ribbon_pane

0xa5e3,	// (0x000a73cb) popup_sp_fs_cale_preview_window

0x8ec7,	// (0x000a5caf) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ec7,	// (0x000a5caf) list_single_sp_fs_schedule_track_pane

0x0df9,	// (0x0009dbe1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0df9,	// (0x0009dbe1) bg_sp_fs_highlight_list_pane_cp03

0x8edc,	// (0x000a5cc4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8edc,	// (0x000a5cc4) list_single_sp_fs_schedule_track_pane_g1

0x8ee8,	// (0x000a5cd0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ee8,	// (0x000a5cd0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x000acb9b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x000acb9b) list_single_sp_fs_schedule_track_pane_g

0x8ef4,	// (0x000a5cdc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ef4,	// (0x000a5cdc) list_single_sp_fs_schedule_track_pane_t1

0x8f12,	// (0x000a5cfa) sp_fs_schedule_track_pane_ParamLimits

0x8f12,	// (0x000a5cfa) sp_fs_schedule_track_pane

0xe956,	// (0x000ab73e) sp_fs_schedule_track_pane_g1

0xe95e,	// (0x000ab746) sp_fs_schedule_track_pane_g2

0xe966,	// (0x000ab74e) sp_fs_schedule_track_pane_g3

0xe96e,	// (0x000ab756) sp_fs_schedule_track_pane_g4

0xe976,	// (0x000ab75e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x000acba0) sp_fs_schedule_track_pane_g

0xd681,	// (0x000aa469) bg_sp_fs_schedule_viewer_highlight_g1

0xac9e,	// (0x000a7a86) bg_sp_fs_schedule_viewer_highlight_g2

0xd689,	// (0x000aa471) bg_sp_fs_schedule_viewer_highlight_g3

0xd691,	// (0x000aa479) bg_sp_fs_schedule_viewer_highlight_g4

0xd8ab,	// (0x000aa693) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a1,	// (0x000aa489) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a9,	// (0x000aa491) bg_sp_fs_schedule_viewer_highlight_g7

0xd6b1,	// (0x000aa499) bg_sp_fs_schedule_viewer_highlight_g8

0xac7e,	// (0x000a7a66) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x000acbab) bg_sp_fs_schedule_viewer_highlight_g

0x9c13,	// (0x000a69fb) bg_main_sp_fs_ribbon_pane

0x8f24,	// (0x000a5d0c) main_sp_fs_ribbon_pane_g1

0xe97e,	// (0x000ab766) main_sp_fs_ribbon_pane_t1

0x8f2d,	// (0x000a5d15) main_sp_fs_ribbon_pane_t2

0xe98d,	// (0x000ab775) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x000acbbe) main_sp_fs_ribbon_pane_t

0xe99c,	// (0x000ab784) main_sp_fs_ribbon_scheduler_pane

0xe9a4,	// (0x000ab78c) bg_main_sp_fs_ribbon_pane_g1

0xe9ad,	// (0x000ab795) bg_main_sp_fs_ribbon_pane_g2

0xe9b6,	// (0x000ab79e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x000acbc5) bg_main_sp_fs_ribbon_pane_g

0xe9be,	// (0x000ab7a6) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c7,	// (0x000ab7af) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d0,	// (0x000ab7b8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x000acbcc) main_sp_fs_ribbon_scheduler_pane_g

0xe9d9,	// (0x000ab7c1) list_cale_mrui_pane

0x8f3c,	// (0x000a5d24) sp_fs_scroll_pane_cp07_ParamLimits

0x8f3c,	// (0x000a5d24) sp_fs_scroll_pane_cp07

0x8f58,	// (0x000a5d40) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f58,	// (0x000a5d40) bg_sp_fs_schedule_viewer_highlight

0xe9e6,	// (0x000ab7ce) list_single_sp_fs_schedule_track_pane_cp01

0xe9ee,	// (0x000ab7d6) list_sp_fs_schedule_track_pane

0xe9f6,	// (0x000ab7de) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f6,	// (0x000ab7de) sp_fs_scroll_pane_cp06

0xcc73,	// (0x000a9a5b) bgmain_sp_fs_calendar_pane_g1

0x8f65,	// (0x000a5d4d) list_single_cale_mrui_pane_ParamLimits

0x8f65,	// (0x000a5d4d) list_single_cale_mrui_pane

0xa5f5,	// (0x000a73dd) list_single_cale_mrui_row_pane_ParamLimits

0xa5f5,	// (0x000a73dd) list_single_cale_mrui_row_pane

0xa60b,	// (0x000a73f3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa60b,	// (0x000a73f3) list_single_cale_mrui_row_pane_g1

0xa637,	// (0x000a741f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa637,	// (0x000a741f) list_single_cale_mrui_row_pane_t1

0x8f7a,	// (0x000a5d62) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f7a,	// (0x000a5d62) list_single_cale_mrui_row_pane_t2

0xa649,	// (0x000a7431) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa649,	// (0x000a7431) list_single_cale_mrui_row_pane_t3

0xa678,	// (0x000a7460) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa678,	// (0x000a7460) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x000acbda) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x000acbda) list_single_cale_mrui_row_pane_t

0x8fe0,	// (0x000a5dc8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fe0,	// (0x000a5dc8) list_single_cmail_header_editor_pane_bg_cp01

0x9004,	// (0x000a5dec) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9004,	// (0x000a5dec) list_single_cmail_header_editor_pane_bg_cp02

0x9020,	// (0x000a5e08) main_radioblah_text_pane_t1_ParamLimits

0x9020,	// (0x000a5e08) main_radioblah_text_pane_t1

0xea15,	// (0x000ab7fd) cam6_indi_pane_cp01

0xea1d,	// (0x000ab805) cam6_mode_pane_cp01

0xea25,	// (0x000ab80d) cam6_pano_pane

0xea2e,	// (0x000ab816) cam6_zoom_pane_cp01

0xea38,	// (0x000ab820) cam6_pano_image_pane

0xea41,	// (0x000ab829) cam6_pano_pane_g1

0xe2f8,	// (0x000ab0e0) cam6_pano_pane_g2

0xea4a,	// (0x000ab832) cam6_pano_pane_g3

0xea53,	// (0x000ab83b) cam6_pano_pane_g4

0xd215,	// (0x000a9ffd) cam6_pano_pane_g5

0xea5c,	// (0x000ab844) cam6_pano_pane_g6

0xea64,	// (0x000ab84c) cam6_pano_pane_g7

0xea6c,	// (0x000ab854) cam6_pano_pane_g8

0xea75,	// (0x000ab85d) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x000acbe3) cam6_pano_pane_g

0x9c13,	// (0x000a69fb) main_browser_tag_pane

0xe8cd,	// (0x000ab6b5) grid_navstr_albumart_pane

0xea80,	// (0x000ab868) cell_navstr_albumart_pane_ParamLimits

0xea80,	// (0x000ab868) cell_navstr_albumart_pane

0xea9f,	// (0x000ab887) cell_navstr_albumart_pane_g1

0xc62f,	// (0x000a9417) cell_navstr_albumart_pane_g2

0xc63f,	// (0x000a9427) cell_navstr_albumart_pane_g3

0xc637,	// (0x000a941f) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x000acbf6) cell_navstr_albumart_pane_g

0x903a,	// (0x000a5e22) bt_list_pane_ParamLimits

0x903a,	// (0x000a5e22) bt_list_pane

0x9053,	// (0x000a5e3b) bt_list_pane_t1

0x9062,	// (0x000a5e4a) bt_list_pane_t2

0x0001,

0xfe17,	// (0x000acbff) bt_list_pane_t

0x9c13,	// (0x000a69fb) main_cale_prevew_pane

0x9071,	// (0x000a5e59) popup_cale_preview_window_ParamLimits

0x9071,	// (0x000a5e59) popup_cale_preview_window

0xa2ce,	// (0x000a70b6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2ce,	// (0x000a70b6) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x000ab88f) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x000ab88f) list_cale_preview_pane

0x908c,	// (0x000a5e74) list_double_cale_preview_pane_ParamLimits

0x908c,	// (0x000a5e74) list_double_cale_preview_pane

0x90a0,	// (0x000a5e88) list_single_cale_preview_pane_ParamLimits

0x90a0,	// (0x000a5e88) list_single_cale_preview_pane

0x90b8,	// (0x000a5ea0) list_single_cale_preview_pane_g1

0x90c0,	// (0x000a5ea8) list_single_cale_preview_pane_t1_ParamLimits

0x90c0,	// (0x000a5ea8) list_single_cale_preview_pane_t1

0x90d5,	// (0x000a5ebd) list_double_cale_preview_pane_g1

0x90dd,	// (0x000a5ec5) list_double_cale_preview_pane_t1_ParamLimits

0x90dd,	// (0x000a5ec5) list_double_cale_preview_pane_t1

0x90f2,	// (0x000a5eda) list_double_cale_preview_pane_t2_ParamLimits

0x90f2,	// (0x000a5eda) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x000acc04) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x000acc04) list_double_cale_preview_pane_t

0x9c13,	// (0x000a69fb) main_ezdial_pane

0xa2ce,	// (0x000a70b6) main_sp_fs_email_pane_ParamLimits

0x86cb,	// (0x000a54b3) cmail_ddmenu_btn01_pane_ParamLimits

0x86cb,	// (0x000a54b3) cmail_ddmenu_btn01_pane

0x86e8,	// (0x000a54d0) cmail_ddmenu_btn02_pane_ParamLimits

0x86e8,	// (0x000a54d0) cmail_ddmenu_btn02_pane

0x8706,	// (0x000a54ee) cmail_ddmenu_btn03_pane_ParamLimits

0x8706,	// (0x000a54ee) cmail_ddmenu_btn03_pane

0x8736,	// (0x000a551e) main_sp_fs_ctrlbar_pane_ParamLimits

0x8750,	// (0x000a5538) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cec,	// (0x000a5ad4) list_cmail_body_pane_ParamLimits

0xe84d,	// (0x000ab635) bg_button_pane_cp12

0xe856,	// (0x000ab63e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe856,	// (0x000ab63e) list_single_cmail_header_detail_pane_g3

0xa553,	// (0x000a733b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa553,	// (0x000a733b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x000acb87) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x000acb87) list_single_cmail_header_detail_pane_t

0xa594,	// (0x000a737c) phacti_term_pane_t2_ParamLimits

0xa594,	// (0x000a737c) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x000acb91) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x000acb91) phacti_term_pane_t

0xeab3,	// (0x000ab89b) aid_size_list_single_double

0x910a,	// (0x000a5ef2) popup_ezdial_listscroll_window

0x912c,	// (0x000a5f14) popup_number_entry_window_cp01

0xb40b,	// (0x000a81f3) bg_popup_call_pane_cp09

0xeabf,	// (0x000ab8a7) ezdial_list_pane

0xeac7,	// (0x000ab8af) scroll_pane_cp23

0xca52,	// (0x000a983a) bg_button_pane_cp028_ParamLimits

0xca52,	// (0x000a983a) bg_button_pane_cp028

0x913a,	// (0x000a5f22) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x913a,	// (0x000a5f22) cmail_ddmenu_btn01_pane_g1

0x914c,	// (0x000a5f34) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x914c,	// (0x000a5f34) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x000acc09) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x000acc09) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x000ab8b7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x000ab8b7) cmail_ddmenu_btn01_pane_t1

0xc822,	// (0x000a960a) bg_button_pane_cp029_ParamLimits

0xc822,	// (0x000a960a) bg_button_pane_cp029

0x9158,	// (0x000a5f40) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9158,	// (0x000a5f40) cmail_ddmenu_btn02_pane_g1

0x9170,	// (0x000a5f58) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9170,	// (0x000a5f58) cmail_ddmenu_btn02_pane_t1

0x0df9,	// (0x0009dbe1) bg_button_pane_cp031_ParamLimits

0x0df9,	// (0x0009dbe1) bg_button_pane_cp031

0x9158,	// (0x000a5f40) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9158,	// (0x000a5f40) cmail_ddmenu_btn03_pane_g1

0x9170,	// (0x000a5f58) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9170,	// (0x000a5f58) cmail_ddmenu_btn03_pane_t1

0x60e9,	// (0x000a2ed1) cell_dialer2_keypad_pane_t1_ParamLimits

0x6103,	// (0x000a2eeb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6103,	// (0x000a2eeb) cell_dialer2_keypad_pane_t1_copy1

0x7fea,	// (0x000a4dd2) ncimui_group_button_pane

0xa2ce,	// (0x000a70b6) main_sp_fs_calendar_pane_ParamLimits

0x8d05,	// (0x000a5aed) list_single_cmail_header_caption_pane_ParamLimits

0xa5a9,	// (0x000a7391) aid_recal_txt_sm_pane

0x9c13,	// (0x000a69fb) mian_recal_day_pane

0xa5e3,	// (0x000a73cb) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x000ab8cd) list_recal_day_pane

0xa6c3,	// (0x000a74ab) list_single_recal_day_pane_ParamLimits

0xa6c3,	// (0x000a74ab) list_single_recal_day_pane

0xeb0c,	// (0x000ab8f4) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x000ab8f4) list_single_recal_day_pane_g1

0xa6d5,	// (0x000a74bd) list_single_recal_day_pane_g2_ParamLimits

0xa6d5,	// (0x000a74bd) list_single_recal_day_pane_g2

0xa6e1,	// (0x000a74c9) list_single_recal_day_pane_g3_ParamLimits

0xa6e1,	// (0x000a74c9) list_single_recal_day_pane_g3

0x9194,	// (0x000a5f7c) list_single_recal_day_pane_g4_ParamLimits

0x9194,	// (0x000a5f7c) list_single_recal_day_pane_g4

0xa6ed,	// (0x000a74d5) list_single_recal_day_pane_g5_ParamLimits

0xa6ed,	// (0x000a74d5) list_single_recal_day_pane_g5

0xa6f9,	// (0x000a74e1) list_single_recal_day_pane_g6_ParamLimits

0xa6f9,	// (0x000a74e1) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x000acc18) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x000acc18) list_single_recal_day_pane_g

0xa70d,	// (0x000a74f5) list_single_recal_day_pane_t1

0xa71f,	// (0x000a7507) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x000acc23) list_single_recal_day_pane_t

0x91ac,	// (0x000a5f94) ncimui_query_button_pane_ParamLimits

0x91ac,	// (0x000a5f94) ncimui_query_button_pane

0x91bc,	// (0x000a5fa4) ncimui_query_button_pane_t1_ParamLimits

0x91bc,	// (0x000a5fa4) ncimui_query_button_pane_t1

0xeb18,	// (0x000ab900) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x000ab900) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x000acc28) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x000acc28) ncimui_query_button_pane_t

0x91cf,	// (0x000a5fb7) query_button_pane_ParamLimits

0x91cf,	// (0x000a5fb7) query_button_pane

0x9c13,	// (0x000a69fb) bg_button_pane_cp0028

0xeb2b,	// (0x000ab913) query_button_pane_t1

0x44b4,	// (0x000a129c) main_tport_pane_ParamLimits

0x8bee,	// (0x000a59d6) bg_popup_window_pane_cp01_ParamLimits

0x8bee,	// (0x000a59d6) bg_popup_window_pane_cp01

0x8bfc,	// (0x000a59e4) heading_pane_cp08_ParamLimits

0x8bfc,	// (0x000a59e4) heading_pane_cp08

0x8c0a,	// (0x000a59f2) heading_pane_cp07_ParamLimits

0x8c0a,	// (0x000a59f2) heading_pane_cp07

0x8c7b,	// (0x000a5a63) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x000acb74) cell_tport_appsw_pane_g

0xa27e,	// (0x000a7066) input_candi_list_open_g1

0xae52,	// (0x000a7c3a) list_cale_time_pane_g6_ParamLimits

0xae52,	// (0x000a7c3a) list_cale_time_pane_g6

0x4f37,	// (0x000a1d1f) aid_size_touch_calib_1_ParamLimits

0x4f37,	// (0x000a1d1f) aid_size_touch_calib_1

0x4f43,	// (0x000a1d2b) aid_size_touch_calib_2_ParamLimits

0x4f43,	// (0x000a1d2b) aid_size_touch_calib_2

0x4f51,	// (0x000a1d39) aid_size_touch_calib_3_ParamLimits

0x4f51,	// (0x000a1d39) aid_size_touch_calib_3

0x4f61,	// (0x000a1d49) aid_size_touch_calib_4_ParamLimits

0x4f61,	// (0x000a1d49) aid_size_touch_calib_4

0x4f6f,	// (0x000a1d57) main_touch_calib_button_group_pane_ParamLimits

0x4f6f,	// (0x000a1d57) main_touch_calib_button_group_pane

0x4f7d,	// (0x000a1d65) main_touch_calib_pane_g1_ParamLimits

0x4f89,	// (0x000a1d71) main_touch_calib_pane_g2_ParamLimits

0x4f95,	// (0x000a1d7d) main_touch_calib_pane_g3_ParamLimits

0x4fa1,	// (0x000a1d89) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000ac539) main_touch_calib_pane_g_ParamLimits

0x4fad,	// (0x000a1d95) main_touch_calib_pane_t1_ParamLimits

0x4fc4,	// (0x000a1dac) main_touch_calib_pane_t2_ParamLimits

0x4fdd,	// (0x000a1dc5) main_touch_calib_pane_t3_ParamLimits

0x4ff3,	// (0x000a1ddb) main_touch_calib_pane_t4_ParamLimits

0x5009,	// (0x000a1df1) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000ac542) main_touch_calib_pane_t_ParamLimits

0xcfa3,	// (0x000a9d8b) list_single_fp_cale_pane_g3_ParamLimits

0xcfa3,	// (0x000a9d8b) list_single_fp_cale_pane_g3

0x658e,	// (0x000a3376) bg_button_pane_cp012_ParamLimits

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp03_ParamLimits

0x6f9d,	// (0x000a3d85) cell_vitu2_function_top_pane_g1_ParamLimits

0x658e,	// (0x000a3376) bg_vkb2_func_pane_cp04_ParamLimits

0x7f70,	// (0x000a4d58) main_ncimui_button_group_pane_ParamLimits

0x7f70,	// (0x000a4d58) main_ncimui_button_group_pane

0x7fd8,	// (0x000a4dc0) main_ncimui_pane_t3_ParamLimits

0x7fd8,	// (0x000a4dc0) main_ncimui_pane_t3

0xe8e3,	// (0x000ab6cb) phacti_button_group_pane

0xeab3,	// (0x000ab89b) aid_size_list_single_double_ParamLimits

0x910a,	// (0x000a5ef2) popup_ezdial_listscroll_window_ParamLimits

0x912c,	// (0x000a5f14) popup_number_entry_window_cp01_ParamLimits

0x91dc,	// (0x000a5fc4) phacti_button_pane_ParamLimits

0x91dc,	// (0x000a5fc4) phacti_button_pane

0x9c13,	// (0x000a69fb) bg_button_pane_cp14

0xeb39,	// (0x000ab921) phacti_button_pane_t1

0x91ed,	// (0x000a5fd5) main_touch_calib_button_pane_ParamLimits

0x91ed,	// (0x000a5fd5) main_touch_calib_button_pane

0xa869,	// (0x000a7651) bg_button_pane_cp18_ParamLimits

0xa869,	// (0x000a7651) bg_button_pane_cp18

0xeb47,	// (0x000ab92f) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x000ab92f) main_touch_calib_button_pane_t1

0xeb5d,	// (0x000ab945) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x000ab945) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x000acc2d) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x000acc2d) main_touch_calib_button_pane_t

0x9c13,	// (0x000a69fb) cell_ncimui_button_pane

0x9c13,	// (0x000a69fb) bg_button_pane_cp032

0xeb7b,	// (0x000ab963) cell_ncimui_button_pane_t1

0x615f,	// (0x000a2f47) image3_infobar_pane_ParamLimits

0x615f,	// (0x000a2f47) image3_infobar_pane

0x8365,	// (0x000a514d) fs_bigclock_status_pane_ParamLimits

0x8365,	// (0x000a514d) fs_bigclock_status_pane

0x8372,	// (0x000a515a) main_fs_bigclock_clock_pane_ParamLimits

0x8372,	// (0x000a515a) main_fs_bigclock_clock_pane

0x838e,	// (0x000a5176) main_fs_bigclock_indi_pane_ParamLimits

0x838e,	// (0x000a5176) main_fs_bigclock_indi_pane

0x83c0,	// (0x000a51a8) main_fs_bigclock_swipe_pane_ParamLimits

0x83c0,	// (0x000a51a8) main_fs_bigclock_swipe_pane

0x9c13,	// (0x000a69fb) main_fs_clock_dumped_data

0xe405,	// (0x000ab1ed) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe405,	// (0x000ab1ed) list_single_fs_bigclock_indicator_pane_g1

0xe42f,	// (0x000ab217) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe42f,	// (0x000ab217) list_single_fs_bigclock_indicator_pane_g2

0xe449,	// (0x000ab231) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe449,	// (0x000ab231) list_single_fs_bigclock_indicator_pane_g3

0xe463,	// (0x000ab24b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe463,	// (0x000ab24b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x000aca55) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x000aca55) list_single_fs_bigclock_indicator_pane_g

0xe48e,	// (0x000ab276) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe48e,	// (0x000ab276) list_single_fs_bigclock_indicator_pane_t1

0xe4b6,	// (0x000ab29e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4b6,	// (0x000ab29e) list_single_fs_bigclock_indicator_pane_t2

0xe4de,	// (0x000ab2c6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4de,	// (0x000ab2c6) list_single_fs_bigclock_indicator_pane_t3

0xe506,	// (0x000ab2ee) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe506,	// (0x000ab2ee) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x000aca60) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x000aca60) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x000ab971) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x000ab971) image3_infobar_fav_pane

0xeb99,	// (0x000ab981) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x000ab981) image3_infobar_loc_pane

0xebaf,	// (0x000ab997) image3_infobar_time_pane_ParamLimits

0xebaf,	// (0x000ab997) image3_infobar_time_pane

0xcc73,	// (0x000a9a5b) image3_infobar_time_pane_g1

0xebbf,	// (0x000ab9a7) image3_infobar_time_pane_t1

0xcc73,	// (0x000a9a5b) image3_infobar_loc_pane_g1

0xebcd,	// (0x000ab9b5) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x000acc32) image3_infobar_loc_pane_g

0xebd5,	// (0x000ab9bd) image3_infobar_loc_pane_t1

0xcc73,	// (0x000a9a5b) image3_infobar_fav_pane_g1

0xebe3,	// (0x000ab9cb) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x000acc37) image3_infobar_fav_pane_g

0xebeb,	// (0x000ab9d3) fs_bigclock_status_battery_pane

0xebf4,	// (0x000ab9dc) fs_bigclock_status_signal_pane

0xebfd,	// (0x000ab9e5) fs_bigclock_status_title_pane

0xec06,	// (0x000ab9ee) fs_bigclock_status_signal_pane_g1

0xec0f,	// (0x000ab9f7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x000acc3c) fs_bigclock_status_signal_pane_g

0xec17,	// (0x000ab9ff) fs_bigclock_status_battery_pane_g1

0xec20,	// (0x000aba08) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x000acc41) fs_bigclock_status_battery_pane_g

0xec28,	// (0x000aba10) fs_bigclock_status_title_pane_t1

0xcc73,	// (0x000a9a5b) main_fs_bigclock_clock_pane_g1

0xec36,	// (0x000aba1e) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x000aba29) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x000aba29) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x000acc46) main_fs_bigclock_clock_pane_g

0xec4d,	// (0x000aba35) main_fs_bigclock_clock_pane_t1

0x91fd,	// (0x000a5fe5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x000acc4f) main_fs_bigclock_clock_pane_t

0x920c,	// (0x000a5ff4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x920c,	// (0x000a5ff4) list_single_fs_bigclock_indicator_pane

0x921d,	// (0x000a6005) list_single_fs_bigclock_pane_ParamLimits

0x921d,	// (0x000a6005) list_single_fs_bigclock_pane

0xec64,	// (0x000aba4c) main_fs_bigclock_indicator_pane_t1

0xec73,	// (0x000aba5b) list_single_fs_bigclock_pane_g1

0xec7b,	// (0x000aba63) list_single_fs_bigclock_pane_t1

0xcc73,	// (0x000a9a5b) main_fs_bigclock_swipe_pane_g1

0xecbe,	// (0x000abaa6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x000acc60) main_fs_bigclock_swipe_pane_g

0xecc6,	// (0x000abaae) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc6,	// (0x000abaae) main_fs_bigclock_swipe_pane_t1

0x334a,	// (0x000a0132) call_type_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_btmg_pane

0xb09a,	// (0x000a7e82) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb09a,	// (0x000a7e82) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x000acbd3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x000acbd3) list_single_cale_mrui_row_pane_g

0xa6b1,	// (0x000a7499) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x000ab8ec) list_recal_vselct_arw_up_pane

0xa6b9,	// (0x000a74a1) list_recal_vselct_pane

0x9273,	// (0x000a605b) btmg_button_pane

0x927f,	// (0x000a6067) main_btmg_pane_g1

0x9c13,	// (0x000a69fb) bg_button_pane_cp044

0xece3,	// (0x000abacb) btmg_button_pane_t1

0xc80e,	// (0x000a95f6) aid_listscroll_gen

0xa2ce,	// (0x000a70b6) main_cntbar_detail_pane

0xe82e,	// (0x000ab616) list_cmail_folder_pane

0xe83e,	// (0x000ab626) sp_fs_scroll_pane_cp03_ParamLimits

0x9287,	// (0x000a606f) list_single_fs_dyc_pane_cp01_ParamLimits

0x9287,	// (0x000a606f) list_single_fs_dyc_pane_cp01

0xecf1,	// (0x000abad9) aid_size_cmail_indent

0xa731,	// (0x000a7519) list_single_dyc_row_pane_cp01

0x92c4,	// (0x000a60ac) cntbar_detail_list_pane_ParamLimits

0x92c4,	// (0x000a60ac) cntbar_detail_list_pane

0x9304,	// (0x000a60ec) main_cntbar_detail_cont_pane_ParamLimits

0x9304,	// (0x000a60ec) main_cntbar_detail_cont_pane

0x326d,	// (0x000a0055) scroll_pane_cp032_ParamLimits

0x326d,	// (0x000a0055) scroll_pane_cp032

0x9310,	// (0x000a60f8) cntbar_detail_list_event_pane_ParamLimits

0x9310,	// (0x000a60f8) cntbar_detail_list_event_pane

0x92d2,	// (0x000a60ba) cntbar_detail_list_shct_pane

0xacec,	// (0x000a7ad4) aid_list_gen

0xecfa,	// (0x000abae2) aid_scroll

0xed03,	// (0x000abaeb) aid_size_touch_scroll_bar

0x76e7,	// (0x000a44cf) aid_list_double

0xed0c,	// (0x000abaf4) aid_list_single

0x76d5,	// (0x000a44bd) aid_list_single_lg

0xa73a,	// (0x000a7522) aid_list_z_g_a_sm

0xb0a6,	// (0x000a7e8e) aid_list_z_g_d

0xa742,	// (0x000a752a) aid_txt_z_prm

0x9320,	// (0x000a6108) aid_txt_z_prm_cp01

0x932e,	// (0x000a6116) aid_txt_z_sec

0x933c,	// (0x000a6124) main_cntbar_detail_cont_pane_g1_ParamLimits

0x933c,	// (0x000a6124) main_cntbar_detail_cont_pane_g1

0x9349,	// (0x000a6131) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9349,	// (0x000a6131) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x000acc65) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x000acc65) main_cntbar_detail_cont_pane_g

0xed15,	// (0x000abafd) main_cntbar_detail_cont_pane_t1

0xed23,	// (0x000abb0b) main_cntbar_detail_cont_pane_t2

0xed31,	// (0x000abb19) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x000acc6a) main_cntbar_detail_cont_pane_t

0x9355,	// (0x000a613d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9355,	// (0x000a613d) cell_cntbar_detail_list_shct_pane

0xed3f,	// (0x000abb27) cntbar_detail_list_shct_pane_g1

0xed48,	// (0x000abb30) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x000acc71) cntbar_detail_list_shct_pane_g

0x9369,	// (0x000a6151) cntbar_detail_list_event_pane_g1_ParamLimits

0x9369,	// (0x000a6151) cntbar_detail_list_event_pane_g1

0x9375,	// (0x000a615d) cntbar_detail_list_event_pane_g2_ParamLimits

0x9375,	// (0x000a615d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x000acc76) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x000acc76) cntbar_detail_list_event_pane_g

0x93e3,	// (0x000a61cb) cntbar_detail_list_event_pane_t1_ParamLimits

0x93e3,	// (0x000a61cb) cntbar_detail_list_event_pane_t1

0x93f8,	// (0x000a61e0) cntbar_detail_list_event_pane_t2_ParamLimits

0x93f8,	// (0x000a61e0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x000acc83) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x000acc83) cntbar_detail_list_event_pane_t

0xcc73,	// (0x000a9a5b) cell_cntbar_detail_list_shct_pane_g1

0x371d,	// (0x000a0505) navi_pane_mv_g3

0xa2ce,	// (0x000a70b6) main_cntbar_detail_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_notif_wgt_pane

0x5e09,	// (0x000a2bf1) aid_tch_main_mp4_pane_g4

0x6048,	// (0x000a2e30) popup_slider_window_cp02

0xa6a7,	// (0x000a748f) list_recal_day_event_pane

0x92a4,	// (0x000a608c) cntbar_detail_btn_pane_ParamLimits

0x92a4,	// (0x000a608c) cntbar_detail_btn_pane

0x92b4,	// (0x000a609c) cntbar_detail_btn_pane_cp01_ParamLimits

0x92b4,	// (0x000a609c) cntbar_detail_btn_pane_cp01

0x92d2,	// (0x000a60ba) cntbar_detail_list_shct_pane_ParamLimits

0x92de,	// (0x000a60c6) cntbar_detail_pane_g1_ParamLimits

0x92de,	// (0x000a60c6) cntbar_detail_pane_g1

0x92ee,	// (0x000a60d6) cntbar_detail_pane_t1_ParamLimits

0x92ee,	// (0x000a60d6) cntbar_detail_pane_t1

0x9381,	// (0x000a6169) cntbar_detail_list_event_pane_g3_ParamLimits

0x9381,	// (0x000a6169) cntbar_detail_list_event_pane_g3

0x9399,	// (0x000a6181) cntbar_detail_list_event_pane_g4_ParamLimits

0x9399,	// (0x000a6181) cntbar_detail_list_event_pane_g4

0x93b1,	// (0x000a6199) cntbar_detail_list_event_pane_g5_ParamLimits

0x93b1,	// (0x000a6199) cntbar_detail_list_event_pane_g5

0x93c9,	// (0x000a61b1) cntbar_detail_list_event_pane_g6_ParamLimits

0x93c9,	// (0x000a61b1) cntbar_detail_list_event_pane_g6

0x940d,	// (0x000a61f5) cntbar_detail_list_event_pane_t3_ParamLimits

0x940d,	// (0x000a61f5) cntbar_detail_list_event_pane_t3

0x941f,	// (0x000a6207) popup_notif_wgt_window_ParamLimits

0x941f,	// (0x000a6207) popup_notif_wgt_window

0x942f,	// (0x000a6217) popup_submenu_window_cp01_ParamLimits

0x942f,	// (0x000a6217) popup_submenu_window_cp01

0xb40b,	// (0x000a81f3) bg_popup_window_pane_cp10

0xed51,	// (0x000abb39) listscroll_notif_wgt_pane

0xed63,	// (0x000abb4b) list_notif_wgt_window

0xed6c,	// (0x000abb54) scroll_pane_cp033

0x943f,	// (0x000a6227) list_notif_wgt_row_pane_ParamLimits

0x943f,	// (0x000a6227) list_notif_wgt_row_pane

0xed75,	// (0x000abb5d) aid_size_list_notif_wgt_del

0xed82,	// (0x000abb6a) list_notif_wgt_row_pane_g1

0xed8e,	// (0x000abb76) list_notif_wgt_row_pane_g2

0xeda2,	// (0x000abb8a) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x000acc8a) list_notif_wgt_row_pane_g

0xedaf,	// (0x000abb97) list_notif_wgt_row_pane_t1

0xedc5,	// (0x000abbad) list_notif_wgt_row_pane_t2

0xedd7,	// (0x000abbbf) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x000acc91) list_notif_wgt_row_pane_t

0xd8c5,	// (0x000aa6ad) list_recal_day_event_pane_g1

0xede9,	// (0x000abbd1) list_recal_day_event_pane_t1

0x9c13,	// (0x000a69fb) bg_button_pane_cp045

0xedf8,	// (0x000abbe0) cntbar_detail_btn_pane_t1

0xc822,	// (0x000a960a) main_callh_pane_ParamLimits

0xc822,	// (0x000a960a) main_callh_pane

0x9c13,	// (0x000a69fb) main_coverflow0_pane

0x9c13,	// (0x000a69fb) main_wgtman_pane

0x83d8,	// (0x000a51c0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83d8,	// (0x000a51c0) main_fs_bigclock_unlock_btn_pane

0x8c73,	// (0x000a5a5b) bg_button_pane_cp16

0x8c83,	// (0x000a5a6b) cell_tport_appsw_pane_g3

0x9450,	// (0x000a6238) cf0_flow_pane_ParamLimits

0x9450,	// (0x000a6238) cf0_flow_pane

0xee06,	// (0x000abbee) listscroll_cf0_pane

0xee11,	// (0x000abbf9) main_cf0_pane_g1

0x945f,	// (0x000a6247) main_cf0_pane_t1_ParamLimits

0x945f,	// (0x000a6247) main_cf0_pane_t1

0x9473,	// (0x000a625b) main_cf0_pane_t2_ParamLimits

0x9473,	// (0x000a625b) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x000acc9d) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x000acc9d) main_cf0_pane_t

0xee23,	// (0x000abc0b) scroll_pane_cp11

0x9487,	// (0x000a626f) cf0_flow_pane_g1

0x948f,	// (0x000a6277) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x000acca2) cf0_flow_pane_g

0x9497,	// (0x000a627f) cf0_flow_pane_t1

0x9c13,	// (0x000a69fb) main_call6_pane

0x9c13,	// (0x000a69fb) main_calllock_pane

0x94a5,	// (0x000a628d) call6_btn_grp_pane_ParamLimits

0x94a5,	// (0x000a628d) call6_btn_grp_pane

0x94b2,	// (0x000a629a) call6_pane_g1_ParamLimits

0x94b2,	// (0x000a629a) call6_pane_g1

0x94c2,	// (0x000a62aa) popup_call6_1st_window_ParamLimits

0x94c2,	// (0x000a62aa) popup_call6_1st_window

0x94d0,	// (0x000a62b8) popup_call6_2nd_window_ParamLimits

0x94d0,	// (0x000a62b8) popup_call6_2nd_window

0x94de,	// (0x000a62c6) cell_call6_btn_pane_ParamLimits

0x94de,	// (0x000a62c6) cell_call6_btn_pane

0xb40b,	// (0x000a81f3) bg_popup_call2_in_pane_cp03

0xee2e,	// (0x000abc16) popup_call6_1st_window_g1

0xee36,	// (0x000abc1e) popup_call6_1st_window_g2

0xee3e,	// (0x000abc26) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x000acca7) popup_call6_1st_window_g

0xee46,	// (0x000abc2e) popup_call6_1st_window_t1

0xee55,	// (0x000abc3d) popup_call6_1st_window_t2

0xee65,	// (0x000abc4d) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x000accae) popup_call6_1st_window_t

0xb40b,	// (0x000a81f3) bg_popup_call2_in_pane_cp04

0xee2e,	// (0x000abc16) popup_call6_2nd_window_g1

0xee36,	// (0x000abc1e) popup_call6_2nd_window_g2

0xee3e,	// (0x000abc26) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x000acca7) popup_call6_2nd_window_g

0xee46,	// (0x000abc2e) popup_call6_2nd_window_t1

0x9c13,	// (0x000a69fb) bg_button_pane_cp15

0xee75,	// (0x000abc5d) cell_call6_btn_pane_g1

0xee7e,	// (0x000abc66) cell_call6_btn_pane_t1

0x94ed,	// (0x000a62d5) listscroll_wgtman_pane_ParamLimits

0x94ed,	// (0x000a62d5) listscroll_wgtman_pane

0x9509,	// (0x000a62f1) wgtman_btn_pane_ParamLimits

0x9509,	// (0x000a62f1) wgtman_btn_pane

0xb2d1,	// (0x000a80b9) aid_scroll_copy1

0xee8d,	// (0x000abc75) list_wgtman_pane

0x953e,	// (0x000a6326) wgtman_btn_pane_g1_ParamLimits

0x953e,	// (0x000a6326) wgtman_btn_pane_g1

0x9566,	// (0x000a634e) wgtman_btn_pane_t1_ParamLimits

0x9566,	// (0x000a634e) wgtman_btn_pane_t1

0xee97,	// (0x000abc7f) wgtman_btn_pane_t2_ParamLimits

0xee97,	// (0x000abc7f) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x000accb5) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x000accb5) wgtman_btn_pane_t

0x959d,	// (0x000a6385) listrow_wgtman_pane_ParamLimits

0x959d,	// (0x000a6385) listrow_wgtman_pane

0x95b1,	// (0x000a6399) listrow_wgtman_pane_g1

0x95be,	// (0x000a63a6) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x000accba) listrow_wgtman_pane_g

0x95dc,	// (0x000a63c4) listrow_wgtman_pane_t1

0x95f4,	// (0x000a63dc) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x000accbf) listrow_wgtman_pane_t

0x961a,	// (0x000a6402) wait_bar_pane_cp09

0xeeae,	// (0x000abc96) main_calllock_btn_pane

0xeeb8,	// (0x000abca0) main_calllock_pane_g1

0x9c13,	// (0x000a69fb) bg_button_pane_cp17

0xeec4,	// (0x000abcac) main_calllock_btn_pane_g1

0xeecd,	// (0x000abcb5) main_calllock_btn_pane_t1

0x9c13,	// (0x000a69fb) main_dialer3_pane

0x9c13,	// (0x000a69fb) main_fmrd2_pane

0xcc73,	// (0x000a9a5b) main_fs_bigclock_unlock_btn_pane_g1

0xeee4,	// (0x000abccc) main_fs_bigclock_unlock_btn_pane_t1

0x962c,	// (0x000a6414) area_fmrd2_info_pane_ParamLimits

0x962c,	// (0x000a6414) area_fmrd2_info_pane

0x9638,	// (0x000a6420) area_fmrd2_visual_pane_ParamLimits

0x9638,	// (0x000a6420) area_fmrd2_visual_pane

0x9646,	// (0x000a642e) fmrd2_indi_pane_ParamLimits

0x9646,	// (0x000a642e) fmrd2_indi_pane

0x9653,	// (0x000a643b) area_fmrd2_visual_pane_g1

0x965b,	// (0x000a6443) area_fmrd2_visual_pane_t1

0x966b,	// (0x000a6453) area_fmrd2_visual_pane_t2

0x967b,	// (0x000a6463) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x000accc9) area_fmrd2_visual_pane_t

0x968b,	// (0x000a6473) area_fmrd2_info_pane_g1

0x9693,	// (0x000a647b) area_fmrd2_info_pane_t1

0x96a3,	// (0x000a648b) area_fmrd2_info_pane_t2

0x96b3,	// (0x000a649b) area_fmrd2_info_pane_t3

0x96c3,	// (0x000a64ab) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x000accd0) area_fmrd2_info_pane_t

0x96d3,	// (0x000a64bb) fmrd2_indi_pane_t1

0x96e3,	// (0x000a64cb) fmrd2_indi_pane_t2

0x96f3,	// (0x000a64db) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x000accd9) fmrd2_indi_pane_t

0xe472,	// (0x000ab25a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe472,	// (0x000ab25a) list_single_fs_bigclock_indicator_pane_g5

0xe522,	// (0x000ab30a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe522,	// (0x000ab30a) list_single_fs_bigclock_indicator_pane_t5

0x8e7e,	// (0x000a5c66) aid_cell_bcale_month_pane_ParamLimits

0x8e7e,	// (0x000a5c66) aid_cell_bcale_month_pane

0x8e9c,	// (0x000a5c84) bcale_month_pane_ParamLimits

0x8e9c,	// (0x000a5c84) bcale_month_pane

0x8eb8,	// (0x000a5ca0) bcale_preview_pane_ParamLimits

0x8eb8,	// (0x000a5ca0) bcale_preview_pane

0xec7b,	// (0x000aba63) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9a,	// (0x000aba82) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9a,	// (0x000aba82) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x000acc5b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000acc5b) list_single_fs_bigclock_pane_t

0xeedc,	// (0x000abcc4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x000accc4) main_fs_bigclock_unlock_btn_pane_g

0x9703,	// (0x000a64eb) aid_dia3_key_size_ParamLimits

0x9703,	// (0x000a64eb) aid_dia3_key_size

0x970f,	// (0x000a64f7) aid_dia3_listrow_size_ParamLimits

0x970f,	// (0x000a64f7) aid_dia3_listrow_size

0x971f,	// (0x000a6507) dia3_keypad_fun_pane_ParamLimits

0x971f,	// (0x000a6507) dia3_keypad_fun_pane

0x972f,	// (0x000a6517) dia3_keypad_num_pane_ParamLimits

0x972f,	// (0x000a6517) dia3_keypad_num_pane

0x973f,	// (0x000a6527) dia3_listscroll_pane_ParamLimits

0x973f,	// (0x000a6527) dia3_listscroll_pane

0x974d,	// (0x000a6535) dia3_numentry_pane_ParamLimits

0x974d,	// (0x000a6535) dia3_numentry_pane

0xeef2,	// (0x000abcda) dia3_list_pane

0xeefd,	// (0x000abce5) scroll_pane_cp12

0x9c13,	// (0x000a69fb) bg_dia3_numentry_pane

0x975b,	// (0x000a6543) dia3_numentry_pane_t1

0x976a,	// (0x000a6552) cell_dia3_key_num_pane

0x9772,	// (0x000a655a) cell_dia3_key0_fun_pane_ParamLimits

0x9772,	// (0x000a655a) cell_dia3_key0_fun_pane

0x977f,	// (0x000a6567) cell_dia3_key1_fun_pane_ParamLimits

0x977f,	// (0x000a6567) cell_dia3_key1_fun_pane

0x978c,	// (0x000a6574) dia3_listrow_pane

0xe170,	// (0x000aaf58) bg_dia3_numentry_pane_g1

0x9c13,	// (0x000a69fb) bg_button_pane_cp21

0xef08,	// (0x000abcf0) cell_dia3_key_num_pane_t1

0xef16,	// (0x000abcfe) cell_dia3_key_num_pane_t2

0xef25,	// (0x000abd0d) cell_dia3_key_num_pane_t3

0xef34,	// (0x000abd1c) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x000acce0) cell_dia3_key_num_pane_t

0x9c13,	// (0x000a69fb) bg_button_pane_cp19

0x9799,	// (0x000a6581) cell_dia3_key0_fun_pane_g1

0x9c13,	// (0x000a69fb) bg_button_pane_cp20

0x97a1,	// (0x000a6589) cell_dia3_key1_fun_pane_g1

0x97a9,	// (0x000a6591) area_left_week_number_pane

0x97bc,	// (0x000a65a4) area_top_day_name_pane

0x97ca,	// (0x000a65b2) frame_month_view_pane

0xef43,	// (0x000abd2b) grid_month_view_pane

0x97df,	// (0x000a65c7) cell_top_day_name_pane_ParamLimits

0x97df,	// (0x000a65c7) cell_top_day_name_pane

0x97fb,	// (0x000a65e3) cell_area_left_week_number_pane_ParamLimits

0x97fb,	// (0x000a65e3) cell_area_left_week_number_pane

0x981c,	// (0x000a6604) cell_month_view_pane_ParamLimits

0x981c,	// (0x000a6604) cell_month_view_pane

0xef51,	// (0x000abd39) frm_month_g1

0x9848,	// (0x000a6630) frm_month_g2

0x9859,	// (0x000a6641) frm_month_g3

0x986a,	// (0x000a6652) frm_month_g4

0x987b,	// (0x000a6663) frm_month_g5

0x988c,	// (0x000a6674) frm_month_g6

0x989f,	// (0x000a6687) frm_month_g7

0xef5e,	// (0x000abd46) frm_month_g8

0x98b2,	// (0x000a669a) frm_month_g9

0x98bf,	// (0x000a66a7) frm_month_g10

0x98cc,	// (0x000a66b4) frm_month_g11

0x98d9,	// (0x000a66c1) frm_month_g12

0x98e6,	// (0x000a66ce) frm_month_g13

0x98f5,	// (0x000a66dd) frm_month_g14

0x9904,	// (0x000a66ec) frm_month_g15

0x9913,	// (0x000a66fb) frm_month_g16

0x000f,

0xff01,	// (0x000acce9) frm_month_g

0xef6b,	// (0x000abd53) cell_top_day_name_pane_t1

0x9922,	// (0x000a670a) cell_area_left_week_number_pane_g1

0x9931,	// (0x000a6719) cell_area_left_week_number_pane_t1

0xcea3,	// (0x000a9c8b) cell_month_view_pane_g1

0x9947,	// (0x000a672f) cell_month_view_pane_t1

0x9c13,	// (0x000a69fb) main_fps_pane

0xe71e,	// (0x000ab506) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe71e,	// (0x000ab506) cmail_ddmenu_btn02_pane_cp1

0xe73a,	// (0x000ab522) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe73a,	// (0x000ab522) cmail_ddmenu_btn02_pane_cp2

0x9164,	// (0x000a5f4c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9164,	// (0x000a5f4c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x000acc0e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x000acc0e) cmail_ddmenu_btn02_pane_g

0x9182,	// (0x000a5f6a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9182,	// (0x000a5f6a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x000acc13) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x000acc13) cmail_ddmenu_btn02_pane_t

0x995d,	// (0x000a6745) fps_text_pane_ParamLimits

0x995d,	// (0x000a6745) fps_text_pane

0x996a,	// (0x000a6752) main_fps_pane_g1_ParamLimits

0x996a,	// (0x000a6752) main_fps_pane_g1

0x9976,	// (0x000a675e) wait_bar_pane_cp010_ParamLimits

0x9976,	// (0x000a675e) wait_bar_pane_cp010

0x9982,	// (0x000a676a) fps_text_pane_t1_ParamLimits

0x9982,	// (0x000a676a) fps_text_pane_t1

0x647c,	// (0x000a3264) cam4_image_uncrop_pane_g1

0x6485,	// (0x000a326d) cam4_image_uncrop_pane_g2

0x648e,	// (0x000a3276) cam4_image_uncrop_pane_g3

0x6497,	// (0x000a327f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000ac6d6) cam4_image_uncrop_pane_g

0x978c,	// (0x000a6574) dia3_listrow_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_phob2_pane

0x8c55,	// (0x000a5a3d) cell_tport_appsw_pane_cp02_ParamLimits

0x8c55,	// (0x000a5a3d) cell_tport_appsw_pane_cp02

0x8c64,	// (0x000a5a4c) cell_tport_appsw_pane_cp03_ParamLimits

0x8c64,	// (0x000a5a4c) cell_tport_appsw_pane_cp03

0x9c13,	// (0x000a69fb) phob2_contact_card_pane

0x9c13,	// (0x000a69fb) phob2_listscroll_pane

0xef7e,	// (0x000abd66) phob2_list_pane

0xef86,	// (0x000abd6e) scroll_pane_cp034

0x999b,	// (0x000a6783) phob2_cc_data_pane_ParamLimits

0x999b,	// (0x000a6783) phob2_cc_data_pane

0x99b7,	// (0x000a679f) phob2_cc_listscroll_pane_ParamLimits

0x99b7,	// (0x000a679f) phob2_cc_listscroll_pane

0x99d3,	// (0x000a67bb) list_double_large_graphic_phob2_pane_ParamLimits

0x99d3,	// (0x000a67bb) list_double_large_graphic_phob2_pane

0x99eb,	// (0x000a67d3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99eb,	// (0x000a67d3) list_double_large_graphic_phob2_pane_g1

0x9a01,	// (0x000a67e9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a01,	// (0x000a67e9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x000acd0a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x000acd0a) list_double_large_graphic_phob2_pane_g

0x9a0d,	// (0x000a67f5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a0d,	// (0x000a67f5) list_double_large_graphic_phob2_pane_t1

0x9a22,	// (0x000a680a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a22,	// (0x000a680a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x000acd0f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x000acd0f) list_double_large_graphic_phob2_pane_t

0x9c13,	// (0x000a69fb) list_highlight_pane_cp024

0x9a34,	// (0x000a681c) phob2_cc_button_pane

0x9a3c,	// (0x000a6824) phob2_cc_data_pane_g1_ParamLimits

0x9a3c,	// (0x000a6824) phob2_cc_data_pane_g1

0x9a48,	// (0x000a6830) phob2_cc_data_pane_g2_ParamLimits

0x9a48,	// (0x000a6830) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x000acd14) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x000acd14) phob2_cc_data_pane_g

0x9a54,	// (0x000a683c) phob2_cc_data_pane_t1_ParamLimits

0x9a54,	// (0x000a683c) phob2_cc_data_pane_t1

0x9a66,	// (0x000a684e) phob2_cc_data_pane_t2_ParamLimits

0x9a66,	// (0x000a684e) phob2_cc_data_pane_t2

0x9a78,	// (0x000a6860) phob2_cc_data_pane_t3_ParamLimits

0x9a78,	// (0x000a6860) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x000acd19) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x000acd19) phob2_cc_data_pane_t

0xef8e,	// (0x000abd76) phob2_cc_list_pane_ParamLimits

0xef8e,	// (0x000abd76) phob2_cc_list_pane

0xd977,	// (0x000aa75f) scroll_pane_cp035_ParamLimits

0xd977,	// (0x000aa75f) scroll_pane_cp035

0xa2ce,	// (0x000a70b6) bg_button_pane_cp033

0xef9a,	// (0x000abd82) phob2_cc_button_pane_g1

0xefa6,	// (0x000abd8e) phob2_cc_button_pane_t1

0xefbb,	// (0x000abda3) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x000acd20) phob2_cc_button_pane_t

0x9a8a,	// (0x000a6872) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a8a,	// (0x000a6872) list_double_large_graphic_phob2_cc_pane

0x9aa6,	// (0x000a688e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9aa6,	// (0x000a688e) list_double_large_graphic_phob2_cc_pane_g1

0x9ab7,	// (0x000a689f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9ab7,	// (0x000a689f) list_double_large_graphic_phob2_cc_pane_g2

0x9ac6,	// (0x000a68ae) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ac6,	// (0x000a68ae) list_double_large_graphic_phob2_cc_pane_g3

0x9ad5,	// (0x000a68bd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ad5,	// (0x000a68bd) list_double_large_graphic_phob2_cc_pane_g4

0x9ae6,	// (0x000a68ce) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ae6,	// (0x000a68ce) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x000acd25) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x000acd25) list_double_large_graphic_phob2_cc_pane_g

0x9af5,	// (0x000a68dd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9af5,	// (0x000a68dd) list_double_large_graphic_phob2_cc_pane_t1

0x9b1e,	// (0x000a6906) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b1e,	// (0x000a6906) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x000acd30) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x000acd30) list_double_large_graphic_phob2_cc_pane_t

0xefcd,	// (0x000abdb5) list_highlight_pane_cp025_ParamLimits

0xefcd,	// (0x000abdb5) list_highlight_pane_cp025

0xa2ce,	// (0x000a70b6) bg_button_pane_cp033_ParamLimits

0xef9a,	// (0x000abd82) phob2_cc_button_pane_g1_ParamLimits

0xefa6,	// (0x000abd8e) phob2_cc_button_pane_t1_ParamLimits

0xefbb,	// (0x000abda3) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x000acd20) phob2_cc_button_pane_t_ParamLimits

0x0e07,	// (0x0009dbef) popup_wgtman_window

0xd79f,	// (0x000aa587) scroll_pane_cp038

0x9526,	// (0x000a630e) wgtman_btn_pane_cp_01_ParamLimits

0x9526,	// (0x000a630e) wgtman_btn_pane_cp_01

0xefdb,	// (0x000abdc3) wgtman_content_pane

0xefe4,	// (0x000abdcc) wgtman_heading_pane

0x9c13,	// (0x000a69fb) bg_heading_pane_cp02

0xefed,	// (0x000abdd5) wgtman_heading_pane_g1

0xeff5,	// (0x000abddd) wgtman_heading_pane_t1

0xf003,	// (0x000abdeb) scroll_pane_cp036

0xf00b,	// (0x000abdf3) wgtman_list_pane

0xf013,	// (0x000abdfb) wgtman_list_pane_t1_ParamLimits

0xf013,	// (0x000abdfb) wgtman_list_pane_t1

0x63d9,	// (0x000a31c1) cam4_grid_pane

0x7192,	// (0x000a3f7a) bg_button_pane_cp015_ParamLimits

0x71a4,	// (0x000a3f8c) bg_button_pane_cp016_ParamLimits

0x71b7,	// (0x000a3f9f) bg_button_pane_cp017_ParamLimits

0x720d,	// (0x000a3ff5) popup_vitu2_query_window_g3_ParamLimits

0x720d,	// (0x000a3ff5) popup_vitu2_query_window_g3

0x72cc,	// (0x000a40b4) popup_vitu2_query_window_t6_ParamLimits

0x72cc,	// (0x000a40b4) popup_vitu2_query_window_t6

0x72f7,	// (0x000a40df) popup_vitu2_query_window_t7_ParamLimits

0x72f7,	// (0x000a40df) popup_vitu2_query_window_t7

0xd983,	// (0x000aa76b) cam4_grid_pane_g1

0xd98c,	// (0x000aa774) cam4_grid_pane_g2

0xf02d,	// (0x000abe15) cam4_grid_pane_g3

0xf036,	// (0x000abe1e) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x000acd35) cam4_grid_pane_g

0x2056,	// (0x0009ee3e) aid_placing_vt_slider_lsc_ParamLimits

0x2389,	// (0x0009f171) vidtel_button_pane_ParamLimits

0x2389,	// (0x0009f171) vidtel_button_pane

0xf041,	// (0x000abe29) bg_button_pane_cp034

0x9b47,	// (0x000a692f) vidtel_button_pane_g1

0xf04b,	// (0x000abe33) vidtel_button_pane_t1

0xd8a3,	// (0x000aa68b) aid_size_vtel_slider_touch

0xd977,	// (0x000aa75f) scroll_pane_cp039

0xe1ae,	// (0x000aaf96) ncim_query_button_pane_cp01_ParamLimits

0xe1cd,	// (0x000aafb5) ncimui_query_pane_g1_ParamLimits

0xa2ce,	// (0x000a70b6) input_focus_pane_cp012_ParamLimits

0xe1f2,	// (0x000aafda) ncim_query_entry_pane_t1_ParamLimits

0xd977,	// (0x000aa75f) scroll_pane_cp039_ParamLimits

0x368f,	// (0x000a0477) navi_pane_bcale_mc_g1

0x3697,	// (0x000a047f) navi_pane_bcale_mc_t1

0xe777,	// (0x000ab55f) main_sp_fs_email_pane_g1

0xe783,	// (0x000ab56b) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x000acac6) main_sp_fs_email_pane_g

0xea08,	// (0x000ab7f0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea08,	// (0x000ab7f0) list_single_cale_mrui_row_pane_g3

0x91a2,	// (0x000a5f8a) list_single_recal_day_pane_g5_event_pane

0xa705,	// (0x000a74ed) list_single_recal_day_pane_g7

0xf059,	// (0x000abe41) list_recal_day_event_pane_cp01

0xf062,	// (0x000abe4a) list_recal_vselct_arw_lo_pane_cp01

0xf06a,	// (0x000abe52) list_recal_vselct_arw_up_pane_cp01

0xf072,	// (0x000abe5a) list_recal_vselct_pane_cp01

0xd8c5,	// (0x000aa6ad) list_recal_day_event_pane_cp01_g1

0xb0ae,	// (0x000a7e96) list_recal_day_event_pane_cp01_t1

0xa70d,	// (0x000a74f5) list_single_recal_day_pane_t1_ParamLimits

0xa71f,	// (0x000a7507) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x000acc23) list_single_recal_day_pane_t_ParamLimits

0xa7a4,	// (0x000a758c) bg_notes_pane_ParamLimits

0xa847,	// (0x000a762f) list_notes_pane_ParamLimits

0x1156,	// (0x0009df3e) scroll_pane_cp06_ParamLimits

0xa869,	// (0x000a7651) main_notes_pane_ParamLimits

0x9c13,	// (0x000a69fb) main_welc_pane

0x9b4f,	// (0x000a6937) main_welc_body_pane_ParamLimits

0x9b4f,	// (0x000a6937) main_welc_body_pane

0x9b6a,	// (0x000a6952) main_welc_opti_pane_ParamLimits

0x9b6a,	// (0x000a6952) main_welc_opti_pane

0x9b9f,	// (0x000a6987) main_welc_pane_t1_ParamLimits

0x9b9f,	// (0x000a6987) main_welc_pane_t1

0xb0bc,	// (0x000a7ea4) main_welc_body_row_pane_ParamLimits

0xb0bc,	// (0x000a7ea4) main_welc_body_row_pane

0x9bbd,	// (0x000a69a5) main_welc_opti_row_pane_ParamLimits

0x9bbd,	// (0x000a69a5) main_welc_opti_row_pane

0xf07c,	// (0x000abe64) main_welc_opti_row_pane_g1

0xf084,	// (0x000abe6c) main_welc_opti_row_pane_t1

0xf093,	// (0x000abe7b) main_welc_body_row_pane_t1

0xed5b,	// (0x000abb43) popup_notif_wgt_heading_pane

0xed75,	// (0x000abb5d) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x000abb6a) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x000abb76) list_notif_wgt_row_pane_g2_ParamLimits

0xeda2,	// (0x000abb8a) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x000acc8a) list_notif_wgt_row_pane_g_ParamLimits

0xedaf,	// (0x000abb97) list_notif_wgt_row_pane_t1_ParamLimits

0xedc5,	// (0x000abbad) list_notif_wgt_row_pane_t2_ParamLimits

0xedd7,	// (0x000abbbf) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x000acc91) list_notif_wgt_row_pane_t_ParamLimits

0x95b1,	// (0x000a6399) listrow_wgtman_pane_g1_ParamLimits

0x95be,	// (0x000a63a6) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x000accba) listrow_wgtman_pane_g_ParamLimits

0x95dc,	// (0x000a63c4) listrow_wgtman_pane_t1_ParamLimits

0x95f4,	// (0x000a63dc) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x000accbf) listrow_wgtman_pane_t_ParamLimits

0x961a,	// (0x000a6402) wait_bar_pane_cp09_ParamLimits

0x9c13,	// (0x000a69fb) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000abe8a) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000abe92) popup_notif_wgt_heading_pane_t1

0x9c13,	// (0x000a69fb) main_vids_pane

0x9c13,	// (0x000a69fb) vids_listscroll_pane

0x9bce,	// (0x000a69b6) scroll_pane_cp040

0x9c13,	// (0x000a69fb) vids_list_pane

0x9bd9,	// (0x000a69c1) vids_list_double_pane_ParamLimits

0x9bd9,	// (0x000a69c1) vids_list_double_pane

0x9bec,	// (0x000a69d4) vids_list_double_pane_g1

0x9bf5,	// (0x000a69dd) vids_list_double_pane_t1

0x9c05,	// (0x000a69ed) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x000acd43) vids_list_double_pane_t

0xa2ce,	// (0x000a70b6) main_ncimui_pane_ParamLimits

0x7f88,	// (0x000a4d70) main_ncimui_pane_g1_ParamLimits

0x7f96,	// (0x000a4d7e) main_ncimui_pane_g2_ParamLimits

0x7f96,	// (0x000a4d7e) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x000ac9cb) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x000ac9cb) main_ncimui_pane_g

0x9b85,	// (0x000a696d) main_welc_pane_g1_ParamLimits

0x9b85,	// (0x000a696d) main_welc_pane_g1

0x9b91,	// (0x000a6979) main_welc_pane_g2_ParamLimits

0x9b91,	// (0x000a6979) main_welc_pane_g2

0x0001,

0xff56,	// (0x000acd3e) main_welc_pane_g_ParamLimits

0xff56,	// (0x000acd3e) main_welc_pane_g

0xa7a4,	// (0x000a758c) listscroll_mce_pane_ParamLimits

0x3759,	// (0x000a0541) wait_bar_pane_cp10

0xc816,	// (0x000a95fe) main_cale_day_pane_ParamLimits

0xc816,	// (0x000a95fe) main_cale_week_pane_ParamLimits

0xa7a4,	// (0x000a758c) main_messa_pane_ParamLimits

0x57d3,	// (0x000a25bb) main_clock2_btn_pane_ParamLimits

0x57d3,	// (0x000a25bb) main_clock2_btn_pane

0xd02b,	// (0x000a9e13) main_clock2_btn_pane_cp01_ParamLimits

0xd02b,	// (0x000a9e13) main_clock2_btn_pane_cp01

0xe9d9,	// (0x000ab7c1) list_cale_mrui_pane_ParamLimits

0xee1b,	// (0x000abc03) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x000acc98) main_cf0_pane_g

0x97a9,	// (0x000a6591) area_left_week_number_pane_ParamLimits

0x97bc,	// (0x000a65a4) area_top_day_name_pane_ParamLimits

0x97ca,	// (0x000a65b2) frame_month_view_pane_ParamLimits

0xef43,	// (0x000abd2b) grid_month_view_pane_ParamLimits

0xef51,	// (0x000abd39) frm_month_g1_ParamLimits

0x9848,	// (0x000a6630) frm_month_g2_ParamLimits

0x9859,	// (0x000a6641) frm_month_g3_ParamLimits

0x986a,	// (0x000a6652) frm_month_g4_ParamLimits

0x987b,	// (0x000a6663) frm_month_g5_ParamLimits

0x988c,	// (0x000a6674) frm_month_g6_ParamLimits

0x989f,	// (0x000a6687) frm_month_g7_ParamLimits

0xef5e,	// (0x000abd46) frm_month_g8_ParamLimits

0x98b2,	// (0x000a669a) frm_month_g9_ParamLimits

0x98bf,	// (0x000a66a7) frm_month_g10_ParamLimits

0x98cc,	// (0x000a66b4) frm_month_g11_ParamLimits

0x98d9,	// (0x000a66c1) frm_month_g12_ParamLimits

0x98e6,	// (0x000a66ce) frm_month_g13_ParamLimits

0x98f5,	// (0x000a66dd) frm_month_g14_ParamLimits

0x9904,	// (0x000a66ec) frm_month_g15_ParamLimits

0x9913,	// (0x000a66fb) frm_month_g16_ParamLimits

0xff01,	// (0x000acce9) frm_month_g_ParamLimits

0xef6b,	// (0x000abd53) cell_top_day_name_pane_t1_ParamLimits

0x9922,	// (0x000a670a) cell_area_left_week_number_pane_g1_ParamLimits

0x9931,	// (0x000a6719) cell_area_left_week_number_pane_t1_ParamLimits

0xcea3,	// (0x000a9c8b) cell_month_view_pane_g1_ParamLimits

0x9947,	// (0x000a672f) cell_month_view_pane_t1_ParamLimits

0xa79c,	// (0x000a7584) main_clock2_btn_pane_g1

0xf0b8,	// (0x000abea0) main_clock2_btn_pane_t1

0xa2ce,	// (0x000a70b6) listscroll_cmail_pane_ParamLimits

0xe777,	// (0x000ab55f) main_sp_fs_email_pane_g1_ParamLimits

0xe783,	// (0x000ab56b) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x000acac6) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x000ab8cd) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x000ab8de) mian_recal_day_pane_t1

0x897b,	// (0x000a5763) list_single_dyc_row_text_pane_t4_ParamLimits

0x897b,	// (0x000a5763) list_single_dyc_row_text_pane_t4

0x89c0,	// (0x000a57a8) list_single_dyc_row_text_pane_t5_ParamLimits

0x89c0,	// (0x000a57a8) list_single_dyc_row_text_pane_t5

0xa48f,	// (0x000a7277) list_single_dyc_row_text_pane_t6_ParamLimits

0xa48f,	// (0x000a7277) list_single_dyc_row_text_pane_t6

0xae31,	// (0x000a7c19) aid_mgn_list_cale_time_pane

0xa2ce,	// (0x000a70b6) main_gallery2_pane_ParamLimits

0xd03f,	// (0x000a9e27) main_clock2_pane_cp01_t1

0xd04f,	// (0x000a9e37) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000ac5ac) main_clock2_pane_cp01_t

0x1648,	// (0x0009e430) cale_week_scroll_pane_g16_ParamLimits

0x1648,	// (0x0009e430) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large

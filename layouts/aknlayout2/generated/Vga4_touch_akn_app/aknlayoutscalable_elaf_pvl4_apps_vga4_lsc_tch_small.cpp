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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e8e1 };

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
0x0a27,	// (0x0004f308) Screen

0x0a33,	// (0x0004f314) application_window

0x0a7f,	// (0x0004f360) area_bottom_pane_ParamLimits

0x0a7f,	// (0x0004f360) area_bottom_pane

0x0ab8,	// (0x0004f399) area_top_pane_ParamLimits

0x0ab8,	// (0x0004f399) area_top_pane

0x9a47,	// (0x00058328) call_video_uplink_pane_ParamLimits

0x9a47,	// (0x00058328) call_video_uplink_pane

0x0b46,	// (0x0004f427) main_pane_ParamLimits

0x0b46,	// (0x0004f427) main_pane

0xc810,	// (0x0005b0f1) context_pane

0x44fa,	// (0x00052ddb) navi_pane

0x452a,	// (0x00052e0b) popup_cale_events_window_ParamLimits

0x452a,	// (0x00052e0b) popup_cale_events_window

0xc823,	// (0x0005b104) popup_mup_playback_window

0x4542,	// (0x00052e23) signal_pane

0xa1c8,	// (0x00058aa9) main_browser_pane

0xa3f4,	// (0x00058cd5) main_burst_pane

0x41fc,	// (0x00052add) main_calc_pane

0xc7b3,	// (0x0005b094) main_cale_day_pane

0x1188,	// (0x0004fa69) main_cale_month_pane

0xc7b3,	// (0x0005b094) main_cale_week_pane

0xa3f4,	// (0x00058cd5) main_call_pane

0x9e86,	// (0x00058767) main_call_poc_pane

0xa3f4,	// (0x00058cd5) main_camera_pane

0xa3f4,	// (0x00058cd5) main_chi_dic_pane

0xb232,	// (0x00059b13) main_clock_pane

0x9e86,	// (0x00058767) main_fmradio_pane

0xa3f4,	// (0x00058cd5) main_graph_messa_pane

0x9e86,	// (0x00058767) main_help_pane

0xa1c8,	// (0x00058aa9) main_im_pane

0xa0e1,	// (0x000589c2) main_image_pane_ParamLimits

0xa0e1,	// (0x000589c2) main_image_pane

0x9e86,	// (0x00058767) main_location2_pane

0xa3f4,	// (0x00058cd5) main_location_pane

0xa0e1,	// (0x000589c2) main_messa_pane

0x9e86,	// (0x00058767) main_mp2_pane

0xa3f4,	// (0x00058cd5) main_mp_pane

0x9e86,	// (0x00058767) main_msg_pane

0x9e86,	// (0x00058767) main_mup_eq_pane

0x9e86,	// (0x00058767) main_mup_pane

0xa1c8,	// (0x00058aa9) main_notes_pane

0x9e86,	// (0x00058767) main_pec_pane

0x9e86,	// (0x00058767) main_phob_pane

0x9e86,	// (0x00058767) main_pinb_pane

0x9e86,	// (0x00058767) main_postcard_pane

0x9e86,	// (0x00058767) main_qdial_pane

0xa3f4,	// (0x00058cd5) main_skin_pane

0x9e86,	// (0x00058767) main_smil2_pane

0xa3f4,	// (0x00058cd5) main_smil_pane

0xa3f4,	// (0x00058cd5) main_video_pane

0xa3f4,	// (0x00058cd5) main_video_tele_pane

0xa0e1,	// (0x000589c2) main_viewer_pane_ParamLimits

0xa0e1,	// (0x000589c2) main_viewer_pane

0xa3f4,	// (0x00058cd5) main_vorec_pane

0x4252,	// (0x00052b33) popup_blid_sat_info_window_ParamLimits

0x4252,	// (0x00052b33) popup_blid_sat_info_window

0x42b6,	// (0x00052b97) popup_dyc_status_message_window_ParamLimits

0x42b6,	// (0x00052b97) popup_dyc_status_message_window

0x42d0,	// (0x00052bb1) popup_grid_large_graphic_window_ParamLimits

0x42d0,	// (0x00052bb1) popup_grid_large_graphic_window

0x4392,	// (0x00052c73) popup_loc_request_window_ParamLimits

0x4392,	// (0x00052c73) popup_loc_request_window

0x44ce,	// (0x00052daf) popup_wml_address_window_ParamLimits

0x44ce,	// (0x00052daf) popup_wml_address_window

0x403a,	// (0x0005291b) call_muted_g1

0x3cce,	// (0x000525af) popup_call_audio_conf_window_ParamLimits

0x3cce,	// (0x000525af) popup_call_audio_conf_window

0x404a,	// (0x0005292b) popup_call_audio_first_window_ParamLimits

0x404a,	// (0x0005292b) popup_call_audio_first_window

0x40c0,	// (0x000529a1) popup_call_audio_in_window_ParamLimits

0x40c0,	// (0x000529a1) popup_call_audio_in_window

0x40fc,	// (0x000529dd) popup_call_audio_out_window_ParamLimits

0x40fc,	// (0x000529dd) popup_call_audio_out_window

0x4136,	// (0x00052a17) popup_call_audio_second_window_ParamLimits

0x4136,	// (0x00052a17) popup_call_audio_second_window

0x418c,	// (0x00052a6d) popup_call_audio_wait_window_ParamLimits

0x418c,	// (0x00052a6d) popup_call_audio_wait_window

0x41c1,	// (0x00052aa2) popup_number_entry_window_ParamLimits

0x41c1,	// (0x00052aa2) popup_number_entry_window

0x9a73,	// (0x00058354) bg_popup_call_pane_cp05_ParamLimits

0x9a73,	// (0x00058354) bg_popup_call_pane_cp05

0x9a93,	// (0x00058374) popup_number_entry_window_t1

0x9aa6,	// (0x00058387) popup_number_entry_window_t2

0x9ab8,	// (0x00058399) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005d9ab) popup_number_entry_window_t

0x9aca,	// (0x000583ab) text_title_cp2

0x9add,	// (0x000583be) bg_popup_call_pane_cp_ParamLimits

0x9add,	// (0x000583be) bg_popup_call_pane_cp

0x9aeb,	// (0x000583cc) call_thumbnail_pane

0x9af3,	// (0x000583d4) popup_call_audio_in_window_g1_ParamLimits

0x9af3,	// (0x000583d4) popup_call_audio_in_window_g1

0x9aff,	// (0x000583e0) popup_call_audio_in_window_g2_ParamLimits

0x9aff,	// (0x000583e0) popup_call_audio_in_window_g2

0x9b0b,	// (0x000583ec) popup_call_audio_in_window_g3_ParamLimits

0x9b0b,	// (0x000583ec) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005d9b4) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005d9b4) popup_call_audio_in_window_g

0x9b17,	// (0x000583f8) popup_call_audio_in_window_t1_ParamLimits

0x9b17,	// (0x000583f8) popup_call_audio_in_window_t1

0x9b33,	// (0x00058414) popup_call_audio_in_window_t2_ParamLimits

0x9b33,	// (0x00058414) popup_call_audio_in_window_t2

0x9b4f,	// (0x00058430) popup_call_audio_in_window_t3_ParamLimits

0x9b4f,	// (0x00058430) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005d9bb) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005d9bb) popup_call_audio_in_window_t

0x9add,	// (0x000583be) bg_popup_call_pane_cp01_ParamLimits

0x9add,	// (0x000583be) bg_popup_call_pane_cp01

0x9aeb,	// (0x000583cc) call_thumbnail_pane_cp02

0x9b62,	// (0x00058443) call_type_pane_cp022

0x9b6a,	// (0x0005844b) popup_call_audio_out_window_g1_ParamLimits

0x9b6a,	// (0x0005844b) popup_call_audio_out_window_g1

0x9b7c,	// (0x0005845d) popup_call_audio_out_window_g2_ParamLimits

0x9b7c,	// (0x0005845d) popup_call_audio_out_window_g2

0x9b88,	// (0x00058469) popup_call_audio_out_window_g3_ParamLimits

0x9b88,	// (0x00058469) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005d9c2) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005d9c2) popup_call_audio_out_window_g

0x9b9a,	// (0x0005847b) popup_call_audio_out_window_t1_ParamLimits

0x9b9a,	// (0x0005847b) popup_call_audio_out_window_t1

0x9bb2,	// (0x00058493) popup_call_audio_out_window_t2_ParamLimits

0x9bb2,	// (0x00058493) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005d9c9) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005d9c9) popup_call_audio_out_window_t

0x9bc7,	// (0x000584a8) bg_popup_call_pane_ParamLimits

0x9bc7,	// (0x000584a8) bg_popup_call_pane

0x0d05,	// (0x0004f5e6) call_thumbnail_pane_cp_ParamLimits

0x0d05,	// (0x0004f5e6) call_thumbnail_pane_cp

0x9c4b,	// (0x0005852c) call_type_pane_cp01_ParamLimits

0x9c4b,	// (0x0005852c) call_type_pane_cp01

0x9c8f,	// (0x00058570) popup_call_audio_first_window_g1_ParamLimits

0x9c8f,	// (0x00058570) popup_call_audio_first_window_g1

0x9cdb,	// (0x000585bc) popup_call_audio_first_window_g2_ParamLimits

0x9cdb,	// (0x000585bc) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005d9ce) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005d9ce) popup_call_audio_first_window_g

0x9d1f,	// (0x00058600) popup_call_audio_first_window_t1_ParamLimits

0x9d1f,	// (0x00058600) popup_call_audio_first_window_t1

0x9dcb,	// (0x000586ac) popup_call_audio_first_window_t4_ParamLimits

0x9dcb,	// (0x000586ac) popup_call_audio_first_window_t4

0x9e57,	// (0x00058738) popup_call_audio_first_window_t5_ParamLimits

0x9e57,	// (0x00058738) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005d9d3) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005d9d3) popup_call_audio_first_window_t

0x9e86,	// (0x00058767) bg_popup_call_pane_cp02

0x9e90,	// (0x00058771) call_type_pane_cp023

0x9e98,	// (0x00058779) popup_call_audio_wait_window_g1

0x9ea0,	// (0x00058781) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005d9da) popup_call_audio_wait_window_g

0x9ea8,	// (0x00058789) popup_call_audio_wait_window_t3

0x9eb6,	// (0x00058797) bg_popup_call_pane_cp03_ParamLimits

0x9eb6,	// (0x00058797) bg_popup_call_pane_cp03

0x9f16,	// (0x000587f7) call_thumbnail_pane_cp011_ParamLimits

0x9f16,	// (0x000587f7) call_thumbnail_pane_cp011

0x9f22,	// (0x00058803) call_type_pane_cp034_ParamLimits

0x9f22,	// (0x00058803) call_type_pane_cp034

0x9f5e,	// (0x0005883f) popup_call_audio_second_window_g1_ParamLimits

0x9f5e,	// (0x0005883f) popup_call_audio_second_window_g1

0x9f9a,	// (0x0005887b) popup_call_audio_second_window_g2_ParamLimits

0x9f9a,	// (0x0005887b) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005d9df) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005d9df) popup_call_audio_second_window_g

0x9fd6,	// (0x000588b7) popup_call_audio_second_window_t1_ParamLimits

0x9fd6,	// (0x000588b7) popup_call_audio_second_window_t1

0xa057,	// (0x00058938) popup_call_audio_second_window_t2_ParamLimits

0xa057,	// (0x00058938) popup_call_audio_second_window_t2

0xa08d,	// (0x0005896e) popup_call_audio_second_window_t3_ParamLimits

0xa08d,	// (0x0005896e) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005d9e4) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005d9e4) popup_call_audio_second_window_t

0x9e86,	// (0x00058767) bg_popup_call_pane_cp04

0xa0c3,	// (0x000589a4) list_conf_pane

0xa0cb,	// (0x000589ac) popup_call_audio_conf_window_t1

0xa0d9,	// (0x000589ba) call_thumbnail_pane_g1

0xa0e1,	// (0x000589c2) bg_pinb_pane_ParamLimits

0xa0e1,	// (0x000589c2) bg_pinb_pane

0xa0ef,	// (0x000589d0) find_pinb_pane

0xa0f8,	// (0x000589d9) listscroll_pinb_pane_ParamLimits

0xa0f8,	// (0x000589d9) listscroll_pinb_pane

0xa107,	// (0x000589e8) pinb_bg_pane_g1

0x0d29,	// (0x0004f60a) pinb_bg_pane_g2

0x0d35,	// (0x0004f616) pinb_bg_pane_g3

0x0d41,	// (0x0004f622) pinb_bg_pane_g4

0x0d4d,	// (0x0004f62e) pinb_bg_pane_g5

0x0d59,	// (0x0004f63a) pinb_bg_pane_g6

0x0d64,	// (0x0004f645) pinb_bg_pane_g7

0x0d6f,	// (0x0004f650) pinb_bg_pane_g8

0x0d7a,	// (0x0004f65b) pinb_bg_pane_g9

0x0d84,	// (0x0004f665) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005d9eb) pinb_bg_pane_g

0x0da1,	// (0x0004f682) grid_pinb_pane

0x0dac,	// (0x0004f68d) list_pinb_pane

0x0db7,	// (0x0004f698) scroll_pane_cp01_ParamLimits

0x0db7,	// (0x0004f698) scroll_pane_cp01

0xa111,	// (0x000589f2) find_pinb_pane_g1_ParamLimits

0xa111,	// (0x000589f2) find_pinb_pane_g1

0xa129,	// (0x00058a0a) find_pinb_pane_t1

0xa13b,	// (0x00058a1c) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005da05) find_pinb_pane_t

0xa150,	// (0x00058a31) input_focus_pane_cp01_ParamLimits

0xa150,	// (0x00058a31) input_focus_pane_cp01

0x0dc9,	// (0x0004f6aa) cell_pinb_pane_ParamLimits

0x0dc9,	// (0x0004f6aa) cell_pinb_pane

0x0deb,	// (0x0004f6cc) cell_pinb_pane_g1_ParamLimits

0x0deb,	// (0x0004f6cc) cell_pinb_pane_g1

0x0e00,	// (0x0004f6e1) cell_pinb_pane_g2_ParamLimits

0x0e00,	// (0x0004f6e1) cell_pinb_pane_g2

0xa15c,	// (0x00058a3d) cell_pinb_pane_g3_ParamLimits

0xa15c,	// (0x00058a3d) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005da0a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005da0a) cell_pinb_pane_g

0x9e86,	// (0x00058767) grid_highlight_pane_cp01

0x0e0c,	// (0x0004f6ed) list_pinb_item_pane_ParamLimits

0x0e0c,	// (0x0004f6ed) list_pinb_item_pane

0x9e86,	// (0x00058767) list_highlight_pane_cp02

0x0e1e,	// (0x0004f6ff) list_pinb_item_pane_g1_ParamLimits

0x0e1e,	// (0x0004f6ff) list_pinb_item_pane_g1

0x0e2b,	// (0x0004f70c) list_pinb_item_pane_g2_ParamLimits

0x0e2b,	// (0x0004f70c) list_pinb_item_pane_g2

0x0e37,	// (0x0004f718) list_pinb_item_pane_g3_ParamLimits

0x0e37,	// (0x0004f718) list_pinb_item_pane_g3

0x0e48,	// (0x0004f729) list_pinb_item_pane_g4_ParamLimits

0x0e48,	// (0x0004f729) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005da11) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005da11) list_pinb_item_pane_g

0x0e54,	// (0x0004f735) list_pinb_item_pane_t1_ParamLimits

0x0e54,	// (0x0004f735) list_pinb_item_pane_t1

0x0e89,	// (0x0004f76a) calc_display_pane

0x0eb1,	// (0x0004f792) calc_paper_pane

0x0ed4,	// (0x0004f7b5) grid_calc_pane

0x9e86,	// (0x00058767) bg_list_pane_cp01

0x0f02,	// (0x0004f7e3) clock_g1

0x0f0a,	// (0x0004f7eb) clock_g2

0x0001,

0xf139,	// (0x0005da1a) clock_g

0x0f12,	// (0x0004f7f3) clock_t1_ParamLimits

0x0f12,	// (0x0004f7f3) clock_t1

0x0f27,	// (0x0004f808) clock_t2_ParamLimits

0x0f27,	// (0x0004f808) clock_t2

0x0f39,	// (0x0004f81a) clock_t3_ParamLimits

0x0f39,	// (0x0004f81a) clock_t3

0x0f4b,	// (0x0004f82c) clock_t4_ParamLimits

0x0f4b,	// (0x0004f82c) clock_t4

0x0f5d,	// (0x0004f83e) clock_t5_ParamLimits

0x0f5d,	// (0x0004f83e) clock_t5

0x0f72,	// (0x0004f853) clock_t6_ParamLimits

0x0f72,	// (0x0004f853) clock_t6

0x0f84,	// (0x0004f865) clock_t7_ParamLimits

0x0f84,	// (0x0004f865) clock_t7

0x0f96,	// (0x0004f877) clock_t8_ParamLimits

0x0f96,	// (0x0004f877) clock_t8

0x0faa,	// (0x0004f88b) clock_t9_ParamLimits

0x0faa,	// (0x0004f88b) clock_t9

0x0008,

0xf13e,	// (0x0005da1f) clock_t_ParamLimits

0xf13e,	// (0x0005da1f) clock_t

0xa170,	// (0x00058a51) popup_clock_analogue_window_cp02

0xa170,	// (0x00058a51) popup_clock_digital_window_cp01

0xa178,	// (0x00058a59) listscroll_help_pane

0x9e86,	// (0x00058767) phob_pre_status_pane

0xa182,	// (0x00058a63) grid_qdial_pane

0xa0e1,	// (0x000589c2) listscroll_mce_pane

0xa0e1,	// (0x000589c2) bg_notes_pane

0xa18c,	// (0x00058a6d) list_notes_pane

0x0fc0,	// (0x0004f8a1) scroll_pane_cp06

0xa19a,	// (0x00058a7b) bg_calc_paper_pane

0xa1ae,	// (0x00058a8f) list_calc_pane

0xa1c8,	// (0x00058aa9) bg_calc_display_pane

0x0fd4,	// (0x0004f8b5) calc_display_pane_t1

0x0fe6,	// (0x0004f8c7) calc_display_pane_t2

0xa1d4,	// (0x00058ab5) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005da32) calc_display_pane_t

0x0ff8,	// (0x0004f8d9) cell_calc_pane_ParamLimits

0x0ff8,	// (0x0004f8d9) cell_calc_pane

0xa1e6,	// (0x00058ac7) bg_calc_paper_pane_g1

0xa1f2,	// (0x00058ad3) bg_calc_paper_pane_g2

0xa1fe,	// (0x00058adf) bg_calc_paper_pane_g3

0xa20a,	// (0x00058aeb) bg_calc_paper_pane_g4

0xa216,	// (0x00058af7) bg_calc_paper_pane_g5

0x1035,	// (0x0004f916) bg_calc_paper_pane_g6

0x1048,	// (0x0004f929) bg_calc_paper_pane_g7

0x105b,	// (0x0004f93c) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005da39) bg_calc_paper_pane_g

0x106c,	// (0x0004f94d) calc_bg_paper_pane_g9

0x107d,	// (0x0004f95e) list_calc_item_pane_ParamLimits

0x107d,	// (0x0004f95e) list_calc_item_pane

0xa222,	// (0x00058b03) list_calc_item_pane_g1

0xa22f,	// (0x00058b10) list_calc_item_pane_t1_ParamLimits

0xa22f,	// (0x00058b10) list_calc_item_pane_t1

0x1095,	// (0x0004f976) list_calc_item_pane_t2_ParamLimits

0x1095,	// (0x0004f976) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005da4a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005da4a) list_calc_item_pane_t

0xa241,	// (0x00058b22) cell_calc_pane_g1

0xa24b,	// (0x00058b2c) grid_highlight_pane_cp02

0xa26d,	// (0x00058b4e) bg_calc_display_pane_g1

0xa276,	// (0x00058b57) bg_calc_display_pane_g2

0xa280,	// (0x00058b61) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005da54) bg_calc_display_pane_g

0x10c7,	// (0x0004f9a8) cell_qdial_pane_ParamLimits

0x10c7,	// (0x0004f9a8) cell_qdial_pane

0x10db,	// (0x0004f9bc) cell_qdial_pane_g1_ParamLimits

0x10db,	// (0x0004f9bc) cell_qdial_pane_g1

0x10f1,	// (0x0004f9d2) cell_qdial_pane_g2_ParamLimits

0x10f1,	// (0x0004f9d2) cell_qdial_pane_g2

0xa289,	// (0x00058b6a) cell_qdial_pane_g3_ParamLimits

0xa289,	// (0x00058b6a) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005da5b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005da5b) cell_qdial_pane_g

0x1118,	// (0x0004f9f9) cell_qdial_pane_t1_ParamLimits

0x1118,	// (0x0004f9f9) cell_qdial_pane_t1

0x1130,	// (0x0004fa11) cell_qdial_pane_t2_ParamLimits

0x1130,	// (0x0004fa11) cell_qdial_pane_t2

0x1143,	// (0x0004fa24) cell_qdial_pane_t3_ParamLimits

0x1143,	// (0x0004fa24) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005da64) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005da64) cell_qdial_pane_t

0x9e86,	// (0x00058767) grid_highlight_pane_cp04

0xa295,	// (0x00058b76) thumbnail_qdial_pane_ParamLimits

0xa295,	// (0x00058b76) thumbnail_qdial_pane

0xa2f1,	// (0x00058bd2) list_help_pane

0xa2fa,	// (0x00058bdb) scroll_pane_cp02

0x1156,	// (0x0004fa37) help_list_pane_t1_ParamLimits

0x1156,	// (0x0004fa37) help_list_pane_t1

0xa303,	// (0x00058be4) bg_notes_pane_g2

0xa30b,	// (0x00058bec) bg_notes_pane_g3

0xa313,	// (0x00058bf4) notes_bg_pane_g1

0xa31b,	// (0x00058bfc) notes_bg_pane_g4

0xa323,	// (0x00058c04) notes_bg_pane_g5

0xa32b,	// (0x00058c0c) notes_bg_pane_g6

0xa333,	// (0x00058c14) notes_bg_pane_g7

0xa33b,	// (0x00058c1c) notes_bg_pane_g8

0xa343,	// (0x00058c24) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005da82) notes_bg_pane_g

0x1174,	// (0x0004fa55) list_notes_text_pane_ParamLimits

0x1174,	// (0x0004fa55) list_notes_text_pane

0xa34b,	// (0x00058c2c) list_notes_text_pane_g1

0xfb43,	// (0x0004e424) list_notes_text_pane_t1

0x1188,	// (0x0004fa69) listscroll_cale_week_pane

0x11be,	// (0x0004fa9f) bg_cale_heading_pane

0x11e7,	// (0x0004fac8) bg_cale_pane_cp01

0x1209,	// (0x0004faea) cale_week_corner_pane

0x1228,	// (0x0004fb09) cale_week_day_heading_pane

0x1256,	// (0x0004fb37) cale_week_scroll_pane_g1

0x127a,	// (0x0004fb5b) cale_week_scroll_pane_g2

0x1292,	// (0x0004fb73) cale_week_scroll_pane_g3

0x12aa,	// (0x0004fb8b) cale_week_scroll_pane_g4

0x12c6,	// (0x0004fba7) cale_week_scroll_pane_g5

0x12e6,	// (0x0004fbc7) cale_week_scroll_pane_g6

0x1306,	// (0x0004fbe7) cale_week_scroll_pane_g7

0x132a,	// (0x0004fc0b) cale_week_scroll_pane_g8

0x134e,	// (0x0004fc2f) cale_week_scroll_pane_g9

0x136b,	// (0x0004fc4c) cale_week_scroll_pane_g10

0x1388,	// (0x0004fc69) cale_week_scroll_pane_g11

0x13a5,	// (0x0004fc86) cale_week_scroll_pane_g12

0x13c2,	// (0x0004fca3) cale_week_scroll_pane_g13

0x13df,	// (0x0004fcc0) cale_week_scroll_pane_g14

0x1408,	// (0x0004fce9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005da91) cale_week_scroll_pane_g

0x1455,	// (0x0004fd36) cale_week_time_pane

0x1479,	// (0x0004fd5a) grid_cale_week_pane

0xa377,	// (0x00058c58) scroll_pane_cp08

0x14b0,	// (0x0004fd91) cell_cale_week_pane_ParamLimits

0x14b0,	// (0x0004fd91) cell_cale_week_pane

0x1540,	// (0x0004fe21) cale_week_day_heading_pane_t1

0x158a,	// (0x0004fe6b) cale_week_day_heading_pane_t2

0x15d9,	// (0x0004feba) cale_week_day_heading_pane_t3

0x1628,	// (0x0004ff09) cale_week_day_heading_pane_t4

0x1677,	// (0x0004ff58) cale_week_day_heading_pane_t5

0x16ca,	// (0x0004ffab) cale_week_day_heading_pane_t6

0x1721,	// (0x00050002) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005dab2) cale_week_day_heading_pane_t

0xa399,	// (0x00058c7a) bg_cale_side_pane

0x176b,	// (0x0005004c) cale_week_time_pane_t1

0x17a5,	// (0x00050086) cale_week_time_pane_t2

0x17df,	// (0x000500c0) cale_week_time_pane_t3

0x1819,	// (0x000500fa) cale_week_time_pane_t4

0x1853,	// (0x00050134) cale_week_time_pane_t5

0x188d,	// (0x0005016e) cale_week_time_pane_t6

0x18c7,	// (0x000501a8) cale_week_time_pane_t7

0x1901,	// (0x000501e2) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005dac1) cale_week_time_pane_t

0x1941,	// (0x00050222) cell_cale_week_pane_g2

0x1960,	// (0x00050241) cell_cale_week_pane_g3_ParamLimits

0x1960,	// (0x00050241) cell_cale_week_pane_g3

0xa3a7,	// (0x00058c88) grid_highlight_pane_cp07

0xa3af,	// (0x00058c90) listscroll_gms_pane

0xa3b9,	// (0x00058c9a) grid_gms_pane

0xa3c2,	// (0x00058ca3) listscroll_gms_pane_g1

0xa3ca,	// (0x00058cab) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005dad2) listscroll_gms_pane_g

0x1978,	// (0x00050259) scroll_pane_cp010

0x1983,	// (0x00050264) cell_gms_pane_ParamLimits

0x1983,	// (0x00050264) cell_gms_pane

0x199d,	// (0x0005027e) cell_gms_pane_g1

0xa3d2,	// (0x00058cb3) cell_gms_pane_g2

0xa3da,	// (0x00058cbb) cell_gms_pane_g3

0xa3e3,	// (0x00058cc4) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005dad7) cell_gms_pane_g

0xa3ec,	// (0x00058ccd) grid_highlight_pane_cp09

0x3fe2,	// (0x000528c3) phob_pre_status_pane_g1

0x3fea,	// (0x000528cb) phob_pre_status_pane_g2

0x3ff2,	// (0x000528d3) phob_pre_status_pane_g3

0x3ffa,	// (0x000528db) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0005dec9) phob_pre_status_pane_g

0x400a,	// (0x000528eb) phob_pre_status_pane_t1

0x401a,	// (0x000528fb) phob_pre_status_pane_t2

0x402a,	// (0x0005290b) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0005ded4) phob_pre_status_pane_t

0xa3f4,	// (0x00058cd5) bg_list_pane_cp05

0x19ad,	// (0x0005028e) grid_vorec_pane

0x19b9,	// (0x0005029a) vorec_t1

0x19c7,	// (0x000502a8) vorec_t2

0x19d5,	// (0x000502b6) vorec_t3

0x19e3,	// (0x000502c4) vorec_t4

0x99e6,	// (0x000582c7) vorec_t5

0x99f4,	// (0x000582d5) vorec_t6

0x0004,

0xf1ff,	// (0x0005dae0) vorec_t

0x9a02,	// (0x000582e3) wait_bar_pane_cp01

0x19ff,	// (0x000502e0) cell_vorec_pane_ParamLimits

0x19ff,	// (0x000502e0) cell_vorec_pane

0xa3fc,	// (0x00058cdd) cell_vorec_pane_g1

0x9e86,	// (0x00058767) grid_highlight_pane_cp05

0x1a2a,	// (0x0005030b) cams_zoom_pane

0x1a39,	// (0x0005031a) image_vga_pane

0x1a53,	// (0x00050334) main_camera_pane_g1

0x1a65,	// (0x00050346) main_camera_pane_g2

0x1a75,	// (0x00050356) main_camera_pane_g3

0x1a89,	// (0x0005036a) main_camera_pane_g4

0x1a9d,	// (0x0005037e) main_camera_pane_g5

0x1ab1,	// (0x00050392) main_camera_pane_g6

0x1ac5,	// (0x000503a6) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005daeb) main_camera_pane_g

0x1ad9,	// (0x000503ba) main_camera_pane_t1

0x1aef,	// (0x000503d0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005dafc) main_camera_pane_t

0x1b2d,	// (0x0005040e) cams_zoom_pane_cp_ParamLimits

0x1b2d,	// (0x0005040e) cams_zoom_pane_cp

0x1b55,	// (0x00050436) image_cif_pane_ParamLimits

0x1b55,	// (0x00050436) image_cif_pane

0x1b90,	// (0x00050471) image_subqcif_pane

0x1b9a,	// (0x0005047b) main_video_pane_g1_ParamLimits

0x1b9a,	// (0x0005047b) main_video_pane_g1

0x1bbe,	// (0x0005049f) main_video_pane_g2_ParamLimits

0x1bbe,	// (0x0005049f) main_video_pane_g2

0x1bf4,	// (0x000504d5) main_video_pane_g3_ParamLimits

0x1bf4,	// (0x000504d5) main_video_pane_g3

0x1c22,	// (0x00050503) main_video_pane_g4_ParamLimits

0x1c22,	// (0x00050503) main_video_pane_g4

0x1c50,	// (0x00050531) main_video_pane_g5_ParamLimits

0x1c50,	// (0x00050531) main_video_pane_g5

0xa412,	// (0x00058cf3) main_video_pane_g6_ParamLimits

0xa412,	// (0x00058cf3) main_video_pane_g6

0x0006,

0xf220,	// (0x0005db01) main_video_pane_g_ParamLimits

0xf220,	// (0x0005db01) main_video_pane_g

0x1c79,	// (0x0005055a) main_video_pane_t1_ParamLimits

0x1c79,	// (0x0005055a) main_video_pane_t1

0xa42c,	// (0x00058d0d) cams_zoom_pane_g1

0xa435,	// (0x00058d16) cams_zoom_pane_g2

0xa43e,	// (0x00058d1f) cams_zoom_pane_g3

0xa447,	// (0x00058d28) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005db10) cams_zoom_pane_g

0x1cd6,	// (0x000505b7) grid_cams_pane

0x1cf0,	// (0x000505d1) linegrid_cams_pane

0x1d02,	// (0x000505e3) cell_cams_pane_ParamLimits

0x1d02,	// (0x000505e3) cell_cams_pane

0xa450,	// (0x00058d31) cams_burst_image_pane

0xa458,	// (0x00058d39) cell_cams_pane_g1

0x9e86,	// (0x00058767) grid_highlight_pane_cp03

0xa241,	// (0x00058b22) mp_bg_pane_g1

0x9e86,	// (0x00058767) bg_list_pane_cp03

0xc6d6,	// (0x0005afb7) bg_mp_pane

0xc6de,	// (0x0005afbf) grid_mp_pane

0xc6e6,	// (0x0005afc7) media_player_g1

0xc6f0,	// (0x0005afd1) media_player_t1

0xc6fe,	// (0x0005afdf) media_player_t2

0xc70c,	// (0x0005afed) media_player_t3

0xc71a,	// (0x0005affb) media_player_t4

0xc728,	// (0x0005b009) media_player_t5

0xc736,	// (0x0005b017) media_player_t6

0xc744,	// (0x0005b025) media_player_t7

0x0006,

0xf5d2,	// (0x0005deb3) media_player_t

0xc752,	// (0x0005b033) wait_bar_pane_cp02

0xf5b7,	// (0x0005de98) main_usb_pane_t

0x3fd9,	// (0x000528ba) cell_mp_pane

0xa241,	// (0x00058b22) cell_mp_pane_g1

0x9e86,	// (0x00058767) grid_highlight_pane_cp06

0xa460,	// (0x00058d41) grid_skin_colour_pane

0xa468,	// (0x00058d49) list_highlight_pane_cp03

0x1d48,	// (0x00050629) skin_g1

0xa470,	// (0x00058d51) skin_t1

0xa47f,	// (0x00058d60) skin_t2

0x0001,

0xf264,	// (0x0005db45) skin_t

0x1d50,	// (0x00050631) cell_skin_colour_pane_ParamLimits

0x1d50,	// (0x00050631) cell_skin_colour_pane

0xa48d,	// (0x00058d6e) cell_skin_colour_pane_g1

0x1dc3,	// (0x000506a4) call_video_g1_ParamLimits

0x1dc3,	// (0x000506a4) call_video_g1

0x1ddf,	// (0x000506c0) call_video_g2_ParamLimits

0x1ddf,	// (0x000506c0) call_video_g2

0x0001,

0xf269,	// (0x0005db4a) call_video_g_ParamLimits

0xf269,	// (0x0005db4a) call_video_g

0x1e24,	// (0x00050705) call_video_uplink_pane_cp1_ParamLimits

0x1e24,	// (0x00050705) call_video_uplink_pane_cp1

0xa49f,	// (0x00058d80) call_video_uplink_pane_cp2

0x1ec5,	// (0x000507a6) video_down_crop_pane_ParamLimits

0x1ec5,	// (0x000507a6) video_down_crop_pane

0x1fae,	// (0x0005088f) video_down_pane_ParamLimits

0x1fae,	// (0x0005088f) video_down_pane

0xa4a7,	// (0x00058d88) video_down_subqcif_pane_ParamLimits

0xa4a7,	// (0x00058d88) video_down_subqcif_pane

0xa4c1,	// (0x00058da2) video_down_subqcif_pane_cp_ParamLimits

0xa4c1,	// (0x00058da2) video_down_subqcif_pane_cp

0xa4e9,	// (0x00058dca) im_reading_pane_ParamLimits

0xa4e9,	// (0x00058dca) im_reading_pane

0x20b7,	// (0x00050998) im_writing_pane_ParamLimits

0x20b7,	// (0x00050998) im_writing_pane

0x20d3,	// (0x000509b4) im_reading_pane_t1

0xa503,	// (0x00058de4) list_im_pane

0xa514,	// (0x00058df5) scroll_pane_cp07

0x210f,	// (0x000509f0) im_writing_pane_t1_ParamLimits

0x210f,	// (0x000509f0) im_writing_pane_t1

0xa52d,	// (0x00058e0e) im_writing_pane_t2_ParamLimits

0xa52d,	// (0x00058e0e) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005db54) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005db54) im_writing_pane_t

0x9e86,	// (0x00058767) input_focus_pane_cp04

0x9e86,	// (0x00058767) input_focus_pane_cp05

0x2124,	// (0x00050a05) list_im_single_pane_ParamLimits

0x2124,	// (0x00050a05) list_im_single_pane

0x213a,	// (0x00050a1b) list_single_im_pane_t1

0x3f99,	// (0x0005287a) blid_accuracy_pane

0x3fa1,	// (0x00052882) blid_compass_pane

0x3fab,	// (0x0005288c) main_location_t1

0x3fbb,	// (0x0005289c) main_location_t2

0x3fcb,	// (0x000528ac) main_location_t3

0x0002,

0xf5e1,	// (0x0005dec2) main_location_t

0x9e86,	// (0x00058767) aid_levels_location

0xa241,	// (0x00058b22) blid_accuracy_pane_g1

0xa241,	// (0x00058b22) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0005dbbd) blid_accuracy_pane_g

0xa575,	// (0x00058e56) wml_content_pane

0xa5b3,	// (0x00058e94) wml_button_pane_ParamLimits

0xa5b3,	// (0x00058e94) wml_button_pane

0x2149,	// (0x00050a2a) wml_list_single_large_pane_ParamLimits

0x2149,	// (0x00050a2a) wml_list_single_large_pane

0x215f,	// (0x00050a40) wml_list_single_medium_pane_ParamLimits

0x215f,	// (0x00050a40) wml_list_single_medium_pane

0x2176,	// (0x00050a57) wml_list_single_small_pane_ParamLimits

0x2176,	// (0x00050a57) wml_list_single_small_pane

0xa5c7,	// (0x00058ea8) wml_selection_box_pane_ParamLimits

0xa5c7,	// (0x00058ea8) wml_selection_box_pane

0xa5da,	// (0x00058ebb) wml_list_single_pane_t1

0xa5e9,	// (0x00058eca) wml_list_single_medium_pane_t1

0xa5f8,	// (0x00058ed9) wml_list_single_large_pane_t1

0xa607,	// (0x00058ee8) input_focus_pane_cp02_ParamLimits

0xa607,	// (0x00058ee8) input_focus_pane_cp02

0xa61a,	// (0x00058efb) wml_selection_box_pane_g1

0xa623,	// (0x00058f04) wml_selection_box_pane_t1_ParamLimits

0xa623,	// (0x00058f04) wml_selection_box_pane_t1

0xa0e1,	// (0x000589c2) bg_wml_button_pane_ParamLimits

0xa0e1,	// (0x000589c2) bg_wml_button_pane

0xa63b,	// (0x00058f1c) wml_button_pane_g1

0xa643,	// (0x00058f24) wml_button_pane_t1

0xa63b,	// (0x00058f1c) wml_button_bg_pane_g1

0xa653,	// (0x00058f34) wml_button_bg_pane_g2

0xa65b,	// (0x00058f3c) wml_button_bg_pane_g3

0xa663,	// (0x00058f44) wml_button_bg_pane_g4

0xa66b,	// (0x00058f4c) wml_button_bg_pane_g5

0xa673,	// (0x00058f54) wml_button_bg_pane_g6

0xa67b,	// (0x00058f5c) wml_button_bg_pane_g7

0xa683,	// (0x00058f64) wml_button_bg_pane_g8

0xa68b,	// (0x00058f6c) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005db59) wml_button_bg_pane_g

0x2192,	// (0x00050a73) bg_list_pane_cp02

0xacef,	// (0x000595d0) mce_header_pane_ParamLimits

0xacef,	// (0x000595d0) mce_header_pane

0xad05,	// (0x000595e6) mce_icon_pane

0xad05,	// (0x000595e6) mce_image_pane

0xad0e,	// (0x000595ef) mce_text_pane_ParamLimits

0xad0e,	// (0x000595ef) mce_text_pane

0x219c,	// (0x00050a7d) scroll_pane_cp03

0xa5ab,	// (0x00058e8c) scroll_pane_cp04

0xad21,	// (0x00059602) scroll_pane_cp05_ParamLimits

0xad21,	// (0x00059602) scroll_pane_cp05

0x21a6,	// (0x00050a87) mce_header_field_pane_ParamLimits

0x21a6,	// (0x00050a87) mce_header_field_pane

0x21bf,	// (0x00050aa0) mce_header_field_pane_2_ParamLimits

0x21bf,	// (0x00050aa0) mce_header_field_pane_2

0x21d5,	// (0x00050ab6) mce_header_field_pane_3

0x21dd,	// (0x00050abe) list_single_mce_message_pane_ParamLimits

0x21dd,	// (0x00050abe) list_single_mce_message_pane

0x21f6,	// (0x00050ad7) list_single_mce_smart_pane_ParamLimits

0x21f6,	// (0x00050ad7) list_single_mce_smart_pane

0xad2d,	// (0x0005960e) input_focus_pane_cp03

0xad36,	// (0x00059617) list_header_data_pane

0x221a,	// (0x00050afb) mce_header_field_pane_t1

0x222a,	// (0x00050b0b) list_single_mce_header_pane_ParamLimits

0x222a,	// (0x00050b0b) list_single_mce_header_pane

0xad3e,	// (0x0005961f) list_single_mce_header_pane_t1

0xad4d,	// (0x0005962e) list_single_mce_message_pane_g1

0xad55,	// (0x00059636) list_single_mce_message_pane_t1

0x2264,	// (0x00050b45) bg_cale_heading_pane_cp01_ParamLimits

0x2264,	// (0x00050b45) bg_cale_heading_pane_cp01

0xad63,	// (0x00059644) bg_cale_pane_cp02_ParamLimits

0xad63,	// (0x00059644) bg_cale_pane_cp02

0x22ab,	// (0x00050b8c) cale_month_corner_pane

0x22ca,	// (0x00050bab) cale_month_day_heading_pane_ParamLimits

0x22ca,	// (0x00050bab) cale_month_day_heading_pane

0x2329,	// (0x00050c0a) cale_month_pane_g1_ParamLimits

0x2329,	// (0x00050c0a) cale_month_pane_g1

0x2365,	// (0x00050c46) cale_month_pane_g2_ParamLimits

0x2365,	// (0x00050c46) cale_month_pane_g2

0x23a1,	// (0x00050c82) cale_month_pane_g3_ParamLimits

0x23a1,	// (0x00050c82) cale_month_pane_g3

0x23f5,	// (0x00050cd6) cale_month_pane_g4_ParamLimits

0x23f5,	// (0x00050cd6) cale_month_pane_g4

0x2449,	// (0x00050d2a) cale_month_pane_g5_ParamLimits

0x2449,	// (0x00050d2a) cale_month_pane_g5

0x24a5,	// (0x00050d86) cale_month_pane_g6_ParamLimits

0x24a5,	// (0x00050d86) cale_month_pane_g6

0x2509,	// (0x00050dea) cale_month_pane_g7_ParamLimits

0x2509,	// (0x00050dea) cale_month_pane_g7

0x2575,	// (0x00050e56) cale_month_pane_g8_ParamLimits

0x2575,	// (0x00050e56) cale_month_pane_g8

0x25e1,	// (0x00050ec2) cale_month_pane_g9_ParamLimits

0x25e1,	// (0x00050ec2) cale_month_pane_g9

0x263f,	// (0x00050f20) cale_month_pane_g10_ParamLimits

0x263f,	// (0x00050f20) cale_month_pane_g10

0x2691,	// (0x00050f72) cale_month_pane_g11_ParamLimits

0x2691,	// (0x00050f72) cale_month_pane_g11

0x26e3,	// (0x00050fc4) cale_month_pane_g12_ParamLimits

0x26e3,	// (0x00050fc4) cale_month_pane_g12

0x273b,	// (0x0005101c) cale_month_pane_g13_ParamLimits

0x273b,	// (0x0005101c) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005db6c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005db6c) cale_month_pane_g

0x2793,	// (0x00051074) cale_month_week_pane

0x27b7,	// (0x00051098) grid_cale_month_pane_ParamLimits

0x27b7,	// (0x00051098) grid_cale_month_pane

0x280d,	// (0x000510ee) cale_month_day_heading_pane_t1

0x2893,	// (0x00051174) cale_month_day_heading_pane_t2

0x2924,	// (0x00051205) cale_month_day_heading_pane_t3

0x29b5,	// (0x00051296) cale_month_day_heading_pane_t4

0x2a46,	// (0x00051327) cale_month_day_heading_pane_t5

0x2ae7,	// (0x000513c8) cale_month_day_heading_pane_t6

0x2b8c,	// (0x0005146d) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005db87) cale_month_day_heading_pane_t

0xa399,	// (0x00058c7a) bg_cale_side_pane_cp01

0x2c35,	// (0x00051516) cale_month_week_pane_t1

0x2c4e,	// (0x0005152f) cale_month_week_pane_t2

0x2c67,	// (0x00051548) cale_month_week_pane_t3

0x2c80,	// (0x00051561) cale_month_week_pane_t4

0x2c99,	// (0x0005157a) cale_month_week_pane_t5

0x2cb2,	// (0x00051593) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005db96) cale_month_week_pane_t

0x2cd1,	// (0x000515b2) cell_cale_month_pane_ParamLimits

0x2cd1,	// (0x000515b2) cell_cale_month_pane

0xa693,	// (0x00058f74) cell_cale_month_pane_g1

0x2dfb,	// (0x000516dc) cell_cale_month_pane_t1_ParamLimits

0x2dfb,	// (0x000516dc) cell_cale_month_pane_t1

0xa3a7,	// (0x00058c88) grid_highlight_pane_cp08

0xa241,	// (0x00058b22) main_smil_g1

0x2e1b,	// (0x000516fc) smil_status_pane

0xada2,	// (0x00059683) smil_text_pane

0xc5f4,	// (0x0005aed5) bg_popup_call3_rect_pane_g8

0xc5fc,	// (0x0005aedd) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0005de56) bg_popup_call3_rect_pane_g

0xc88a,	// (0x0005b16b) smil_status_volume_pane_g1

0x2e2e,	// (0x0005170f) smil_status_pane_t1

0xa791,	// (0x00059072) volume_smil_pane

0xadac,	// (0x0005968d) list_smil_text_pane

0x2e47,	// (0x00051728) scroll_pane_cp011

0x2e52,	// (0x00051733) smil_text_list_pane_t1_ParamLimits

0x2e52,	// (0x00051733) smil_text_list_pane_t1

0xa69f,	// (0x00058f80) aid_volume_smil_ParamLimits

0xa69f,	// (0x00058f80) aid_volume_smil

0xa241,	// (0x00058b22) smil_volume_pane_g1

0xa241,	// (0x00058b22) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0005dbbd) smil_volume_pane_g

0x1188,	// (0x0004fa69) listscroll_cale_day_pane

0xadb6,	// (0x00059697) bg_cale_pane

0xadce,	// (0x000596af) list_cale_pane

0xadf1,	// (0x000596d2) scroll_pane_cp09

0xae02,	// (0x000596e3) cale_bg_pane_g1

0xae0a,	// (0x000596eb) cale_bg_pane_g2

0xae12,	// (0x000596f3) cale_bg_pane_g3

0xae1a,	// (0x000596fb) cale_bg_pane_g4

0xae22,	// (0x00059703) cale_bg_pane_g5

0xae2a,	// (0x0005970b) cale_bg_pane_g6

0xae32,	// (0x00059713) cale_bg_pane_g7

0xae3a,	// (0x0005971b) cale_bg_pane_g8

0xae42,	// (0x00059723) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0005dbc2) cale_bg_pane_g

0x2e8b,	// (0x0005176c) list_cale_time_pane_ParamLimits

0x2e8b,	// (0x0005176c) list_cale_time_pane

0xae52,	// (0x00059733) list_cale_time_pane_g1_ParamLimits

0xae52,	// (0x00059733) list_cale_time_pane_g1

0xae5e,	// (0x0005973f) list_cale_time_pane_g2_ParamLimits

0xae5e,	// (0x0005973f) list_cale_time_pane_g2

0x2e9f,	// (0x00051780) list_cale_time_pane_g3_ParamLimits

0x2e9f,	// (0x00051780) list_cale_time_pane_g3

0x2ead,	// (0x0005178e) list_cale_time_pane_g4_ParamLimits

0x2ead,	// (0x0005178e) list_cale_time_pane_g4

0x2ebb,	// (0x0005179c) list_cale_time_pane_g5_ParamLimits

0x2ebb,	// (0x0005179c) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0005dbd5) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0005dbd5) list_cale_time_pane_g

0xae78,	// (0x00059759) list_cale_time_pane_t1_ParamLimits

0xae78,	// (0x00059759) list_cale_time_pane_t1

0xaea0,	// (0x00059781) list_cale_time_pane_t2_ParamLimits

0xaea0,	// (0x00059781) list_cale_time_pane_t2

0x3189,	// (0x00051a6a) aid_blid_cardinal_pane

0x31c7,	// (0x00051aa8) compass_pane_t4

0xaec8,	// (0x000597a9) list_cale_time_pane_t4_ParamLimits

0xaec8,	// (0x000597a9) list_cale_time_pane_t4

0x31d5,	// (0x00051ab6) compass_pane_t5

0x31e3,	// (0x00051ac4) compass_pane_t6

0x31f1,	// (0x00051ad2) compass_pane_t7

0xb2e2,	// (0x00059bc3) navi_pane_cc_t1

0xb42f,	// (0x00059d10) aid_phob_thumbnail_center_pane

0x3964,	// (0x00052245) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0005dbe2) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0005dbe2) list_cale_time_pane_t

0x9add,	// (0x000583be) bg_popup_window_pane_cp02_ParamLimits

0x9add,	// (0x000583be) bg_popup_window_pane_cp02

0xaef0,	// (0x000597d1) heading_pane_cp01_ParamLimits

0xaef0,	// (0x000597d1) heading_pane_cp01

0xaefc,	// (0x000597dd) loc_req_pane_ParamLimits

0xaefc,	// (0x000597dd) loc_req_pane

0xaf0c,	// (0x000597ed) loc_type_pane_ParamLimits

0xaf0c,	// (0x000597ed) loc_type_pane

0xaf1e,	// (0x000597ff) loc_type_pane_t1_ParamLimits

0xaf1e,	// (0x000597ff) loc_type_pane_t1

0xaf30,	// (0x00059811) loc_type_pane_t2_ParamLimits

0xaf30,	// (0x00059811) loc_type_pane_t2

0xaf42,	// (0x00059823) loc_type_pane_t3_ParamLimits

0xaf42,	// (0x00059823) loc_type_pane_t3

0x0002,

0xf308,	// (0x0005dbe9) loc_type_pane_t_ParamLimits

0xf308,	// (0x0005dbe9) loc_type_pane_t

0xaf54,	// (0x00059835) list_loc_req_pane

0xaf5e,	// (0x0005983f) scroll_pane_cp012

0x2ec9,	// (0x000517aa) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ec9,	// (0x000517aa) list_single_loc_request_popup_menu_pane

0xaf69,	// (0x0005984a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf69,	// (0x0005984a) list_single_loc_request_popup_menu_pane_g1

0xaf75,	// (0x00059856) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf75,	// (0x00059856) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0005dbf0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0005dbf0) list_single_loc_request_popup_menu_pane_g

0xaf81,	// (0x00059862) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf81,	// (0x00059862) list_single_loc_request_popup_menu_pane_t1

0xa0e1,	// (0x000589c2) bg_popup_window_pane_cp03_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_window_pane_cp03

0xaf97,	// (0x00059878) heading_loc_req_pane_ParamLimits

0xaf97,	// (0x00059878) heading_loc_req_pane

0x2ed6,	// (0x000517b7) popup_dyc_status_message_window_g1_ParamLimits

0x2ed6,	// (0x000517b7) popup_dyc_status_message_window_g1

0x2eea,	// (0x000517cb) popup_dyc_status_message_window_t1_ParamLimits

0x2eea,	// (0x000517cb) popup_dyc_status_message_window_t1

0x2eff,	// (0x000517e0) popup_dyc_status_message_window_t2_ParamLimits

0x2eff,	// (0x000517e0) popup_dyc_status_message_window_t2

0x2f14,	// (0x000517f5) popup_dyc_status_message_window_t3_ParamLimits

0x2f14,	// (0x000517f5) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0005dbf5) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0005dbf5) popup_dyc_status_message_window_t

0x9e86,	// (0x00058767) bg_heading_pane_cp01

0xafa3,	// (0x00059884) heading_loc_req_pane_g1

0xafab,	// (0x0005988c) heading_loc_req_pane_g2

0xafb3,	// (0x00059894) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0005dbfc) heading_loc_req_pane_g

0xafbb,	// (0x0005989c) heading_loc_req_pane_t1

0xafcb,	// (0x000598ac) bg_popup_sub_pane_cp01_ParamLimits

0xafcb,	// (0x000598ac) bg_popup_sub_pane_cp01

0xafd9,	// (0x000598ba) popup_cale_events_window_g1_ParamLimits

0xafd9,	// (0x000598ba) popup_cale_events_window_g1

0xaff9,	// (0x000598da) popup_cale_events_window_g2_ParamLimits

0xaff9,	// (0x000598da) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0005dc30) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0005dc30) popup_cale_events_window_g

0xb019,	// (0x000598fa) popup_cale_events_window_t1_ParamLimits

0xb019,	// (0x000598fa) popup_cale_events_window_t1

0xb02b,	// (0x0005990c) popup_cale_events_window_t2_ParamLimits

0xb02b,	// (0x0005990c) popup_cale_events_window_t2

0xb069,	// (0x0005994a) popup_cale_events_window_t3_ParamLimits

0xb069,	// (0x0005994a) popup_cale_events_window_t3

0xb0a3,	// (0x00059984) popup_cale_events_window_t4_ParamLimits

0xb0a3,	// (0x00059984) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0005dc35) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0005dc35) popup_cale_events_window_t

0x2f48,	// (0x00051829) call_type_pane

0x2f58,	// (0x00051839) popup_call_status_window_g1

0x2f6c,	// (0x0005184d) popup_call_status_window_g2

0x2f80,	// (0x00051861) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0005dc3e) popup_call_status_window_g

0xb0d9,	// (0x000599ba) call_type_pane_g1

0xb0e2,	// (0x000599c3) call_type_pane_g2

0x0001,

0xf364,	// (0x0005dc45) call_type_pane_g

0x9e86,	// (0x00058767) bg_popup_sub_pane_cp02

0xb0eb,	// (0x000599cc) listscroll_popup_wml_pane

0xb0f3,	// (0x000599d4) list_wml_pane

0xb0fd,	// (0x000599de) scroll_pane_cp013

0xb108,	// (0x000599e9) list_single_graphic_popup_wml_pane_ParamLimits

0xb108,	// (0x000599e9) list_single_graphic_popup_wml_pane

0xa241,	// (0x00058b22) list_single_graphic_popup_wml_pane_g1

0xb11c,	// (0x000599fd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0005dc4a) list_single_graphic_popup_wml_pane_g

0xb124,	// (0x00059a05) list_single_graphic_popup_wml_pane_t1

0xb13a,	// (0x00059a1b) aid_call_pane

0xa0d9,	// (0x000589ba) popup_clock_analogue_window_g1

0xa0d9,	// (0x000589ba) popup_clock_analogue_window_g2

0xa6c1,	// (0x00058fa2) popup_clock_analogue_window_g3

0xa6c1,	// (0x00058fa2) popup_clock_analogue_window_g4

0xa241,	// (0x00058b22) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0005dc4f) popup_clock_analogue_window_g

0xa6c9,	// (0x00058faa) popup_clock_analogue_window_t1

0xa6d7,	// (0x00058fb8) clock_digital_number_pane_ParamLimits

0xa6d7,	// (0x00058fb8) clock_digital_number_pane

0xa6e3,	// (0x00058fc4) clock_digital_number_pane_cp02_ParamLimits

0xa6e3,	// (0x00058fc4) clock_digital_number_pane_cp02

0xa6ef,	// (0x00058fd0) clock_digital_number_pane_cp03_ParamLimits

0xa6ef,	// (0x00058fd0) clock_digital_number_pane_cp03

0xa6fb,	// (0x00058fdc) clock_digital_number_pane_cp04_ParamLimits

0xa6fb,	// (0x00058fdc) clock_digital_number_pane_cp04

0xa707,	// (0x00058fe8) clock_digital_separator_pane_ParamLimits

0xa707,	// (0x00058fe8) clock_digital_separator_pane

0xa713,	// (0x00058ff4) popup_clock_digital_window_t1

0xa241,	// (0x00058b22) clock_digital_number_pane_g1

0xa241,	// (0x00058b22) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0005dbbd) clock_digital_number_pane_g

0xa241,	// (0x00058b22) clock_digital_separator_pane_g1

0xa241,	// (0x00058b22) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0005dbbd) clock_digital_separator_pane_g

0x9e86,	// (0x00058767) bg_popup_window_pane_cp04

0xb142,	// (0x00059a23) heading_pane_cp03

0xb14a,	// (0x00059a2b) listscroll_popup_gms_pane

0xb152,	// (0x00059a33) grid_large_graphic_popup_pane

0xb15c,	// (0x00059a3d) listscroll_popup_gms_pane_g1

0xb164,	// (0x00059a45) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0005dc5a) listscroll_popup_gms_pane_g

0xa5ab,	// (0x00058e8c) scroll_pane_cp014

0x2f90,	// (0x00051871) cell_large_graphic_popup_pane_ParamLimits

0x2f90,	// (0x00051871) cell_large_graphic_popup_pane

0x2fa8,	// (0x00051889) cell_large_graphic_popup_pane_g1_ParamLimits

0x2fa8,	// (0x00051889) cell_large_graphic_popup_pane_g1

0xb16c,	// (0x00059a4d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb16c,	// (0x00059a4d) cell_large_graphic_popup_pane_g2

0xb178,	// (0x00059a59) cell_large_graphic_popup_pane_g3_ParamLimits

0xb178,	// (0x00059a59) cell_large_graphic_popup_pane_g3

0xb185,	// (0x00059a66) cell_large_graphic_popup_pane_g4_ParamLimits

0xb185,	// (0x00059a66) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0005dc5f) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0005dc5f) cell_large_graphic_popup_pane_g

0xb195,	// (0x00059a76) grid_highlight_pane_cp010

0xa241,	// (0x00058b22) bg_popup_call_pane_g1

0xb19f,	// (0x00059a80) list_single_graphic_popup_conf_pane_ParamLimits

0xb19f,	// (0x00059a80) list_single_graphic_popup_conf_pane

0xb1b1,	// (0x00059a92) list_highlight_pane_cp01

0xb1ba,	// (0x00059a9b) list_single_graphic_popup_conf_pane_g1

0xb1c2,	// (0x00059aa3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0005dc68) list_single_graphic_popup_conf_pane_g

0xb1ca,	// (0x00059aab) list_single_graphic_popup_conf_pane_t1

0xb1d8,	// (0x00059ab9) linegrid_cams_pane_g1

0x2fb4,	// (0x00051895) linegrid_cams_pane_g2

0xa3da,	// (0x00058cbb) linegrid_cams_pane_g3

0xb1e1,	// (0x00059ac2) linegrid_cams_pane_g4

0x2fbd,	// (0x0005189e) linegrid_cams_pane_g5

0x2fc6,	// (0x000518a7) linegrid_cams_pane_g6

0xa3e3,	// (0x00058cc4) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0005dc6d) linegrid_cams_pane_g

0xb1ea,	// (0x00059acb) popup_clock_analogue_window

0xb1ea,	// (0x00059acb) popup_clock_digital_window

0x9e86,	// (0x00058767) popup_phob_thumbnail_window

0xa241,	// (0x00058b22) call_video_uplink_pane_g1

0xb1f3,	// (0x00059ad4) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0005dc7c) call_video_uplink_pane_g

0xb1fb,	// (0x00059adc) video_uplink_pane

0xb203,	// (0x00059ae4) mce_image_pane_g1

0x2fd1,	// (0x000518b2) mce_image_pane_g2

0x2fdb,	// (0x000518bc) mce_image_pane_g3

0x2fe5,	// (0x000518c6) mce_image_pane_g4

0x2fed,	// (0x000518ce) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0005dc81) mce_image_pane_g

0xb20d,	// (0x00059aee) control_top_pane_stacon_cp01_ParamLimits

0xb20d,	// (0x00059aee) control_top_pane_stacon_cp01

0xb221,	// (0x00059b02) uni_indicator_pane_stacon_cp01_ParamLimits

0xb221,	// (0x00059b02) uni_indicator_pane_stacon_cp01

0xb232,	// (0x00059b13) bg_popup_sub_pane_cp03

0x2ff5,	// (0x000518d6) chi_dic_find_pane

0x2ffd,	// (0x000518de) listscroll_chi_dic_pane

0x3006,	// (0x000518e7) main_pane_chidic_g1

0x3019,	// (0x000518fa) chi_dic_find_pane_t1

0xb23c,	// (0x00059b1d) find_chidic_pane

0xb245,	// (0x00059b26) chi_dic_list_pane_ParamLimits

0xb245,	// (0x00059b26) chi_dic_list_pane

0xb256,	// (0x00059b37) scroll_pane_cp020

0x3027,	// (0x00051908) find_chidic_pane_t1

0x9e86,	// (0x00058767) input_focus_pane_cp06

0x0e0c,	// (0x0004f6ed) list_chi_dic_pane_ParamLimits

0x0e0c,	// (0x0004f6ed) list_chi_dic_pane

0x3036,	// (0x00051917) list_chi_dic_pane_t1_ParamLimits

0x3036,	// (0x00051917) list_chi_dic_pane_t1

0x9e86,	// (0x00058767) list_highlight_pane_cp020

0xb25e,	// (0x00059b3f) bg_cale_heading_pane_g1

0x3049,	// (0x0005192a) bg_cale_heading_pane_g2

0x3051,	// (0x00051932) bg_cale_heading_pane_g3

0x3059,	// (0x0005193a) bg_cale_heading_pane_g4

0x3063,	// (0x00051944) bg_cale_heading_pane_g5

0x306d,	// (0x0005194e) bg_cale_heading_pane_g6

0x3075,	// (0x00051956) bg_cale_heading_pane_g7

0x307d,	// (0x0005195e) bg_cale_heading_pane_g8

0x3087,	// (0x00051968) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0005dc8c) bg_cale_heading_pane_g

0xb25e,	// (0x00059b3f) bg_cale_side_pane_g1

0x3091,	// (0x00051972) bg_cale_side_pane_g2

0x309b,	// (0x0005197c) bg_cale_side_pane_g3

0x30a5,	// (0x00051986) bg_cale_side_pane_g4

0x30af,	// (0x00051990) bg_cale_side_pane_g5

0x30b9,	// (0x0005199a) bg_cale_side_pane_g6

0x30c3,	// (0x000519a4) bg_cale_side_pane_g7

0x30cd,	// (0x000519ae) bg_cale_side_pane_g8

0x30d5,	// (0x000519b6) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0005dc9f) bg_cale_side_pane_g

0x30dd,	// (0x000519be) popup_call_status_window_ParamLimits

0x30dd,	// (0x000519be) popup_call_status_window

0xb266,	// (0x00059b47) stacon_top_pane

0xb26e,	// (0x00059b4f) status_pane_ParamLimits

0xb26e,	// (0x00059b4f) status_pane

0xb283,	// (0x00059b64) status_small_pane

0xb28b,	// (0x00059b6c) control_pane

0x9e86,	// (0x00058767) stacon_bottom_pane

0xb293,	// (0x00059b74) list_single_mce_smart_pane_t1_ParamLimits

0xb293,	// (0x00059b74) list_single_mce_smart_pane_t1

0xb2a6,	// (0x00059b87) list_single_mce_smart_pane_t2_ParamLimits

0xb2a6,	// (0x00059b87) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0005dcb2) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0005dcb2) list_single_mce_smart_pane_t

0x312a,	// (0x00051a0b) compass_pane

0x3135,	// (0x00051a16) main_location2_pane_t1

0x3149,	// (0x00051a2a) main_location2_pane_t2

0x315f,	// (0x00051a40) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0005dcb7) main_location2_pane_t

0xb2c5,	// (0x00059ba6) compass_pane_g1_ParamLimits

0xb2c5,	// (0x00059ba6) compass_pane_g1

0x31a9,	// (0x00051a8a) compass_pane_t1

0x31b8,	// (0x00051a99) compass_pane_t2

0x0005,

0xf3df,	// (0x0005dcc0) compass_pane_t

0x31ff,	// (0x00051ae0) text_secondary_cp61

0xb2d9,	// (0x00059bba) navi_pane_cams_g5

0xb2fc,	// (0x00059bdd) navi_pane_im_t1

0xb30a,	// (0x00059beb) navi_pane_mp_g1_ParamLimits

0xb30a,	// (0x00059beb) navi_pane_mp_g1

0xb31e,	// (0x00059bff) navi_pane_mp_g2_ParamLimits

0xb31e,	// (0x00059bff) navi_pane_mp_g2

0xb32a,	// (0x00059c0b) navi_pane_mp_g3_ParamLimits

0xb32a,	// (0x00059c0b) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0005dcd4) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0005dcd4) navi_pane_mp_g

0xb336,	// (0x00059c17) navi_pane_mp_t1

0xb344,	// (0x00059c25) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0005dcdb) navi_pane_mp_t

0xb380,	// (0x00059c61) navi_pane_vt_g1

0xb336,	// (0x00059c17) navi_pane_vt_t1

0xb388,	// (0x00059c69) navi_slider_pane

0xa3f4,	// (0x00058cd5) zooming_pane

0xb390,	// (0x00059c71) navi_slider_pane_g1

0xa730,	// (0x00059011) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0005dce2) navi_slider_pane_g

0xb3b4,	// (0x00059c95) aid_levels_zoom

0xb3bc,	// (0x00059c9d) zooming_pane_g1

0xb3c4,	// (0x00059ca5) zooming_pane_g2

0xb3c4,	// (0x00059ca5) zooming_pane_g3

0x0002,

0xf410,	// (0x0005dcf1) zooming_pane_g

0xb3cc,	// (0x00059cad) level_10_zoom

0xb3d5,	// (0x00059cb6) level_11_zoom

0xb3de,	// (0x00059cbf) level_1_zoom

0xb3e7,	// (0x00059cc8) level_2_zoom

0xb3f0,	// (0x00059cd1) level_3_zoom

0xb3f9,	// (0x00059cda) level_4_zoom

0xb402,	// (0x00059ce3) level_5_zoom

0xb40b,	// (0x00059cec) level_6_zoom

0xb414,	// (0x00059cf5) level_7_zoom

0xb41d,	// (0x00059cfe) level_8_zoom

0xb426,	// (0x00059d07) level_9_zoom

0xb437,	// (0x00059d18) popup_phob_thumbnail_window_g1

0xb43f,	// (0x00059d20) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0005dcf8) popup_phob_thumbnail_window_g

0xc75a,	// (0x0005b03b) level_1_location

0xc762,	// (0x0005b043) level_2_location

0xc76a,	// (0x0005b04b) level_3_location

0xc772,	// (0x0005b053) level_4_location

0xa3f4,	// (0x00058cd5) level_5_location

0x3348,	// (0x00051c29) mce_icon_pane_g1

0x3352,	// (0x00051c33) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0005dcfd) mce_icon_pane_g

0x335a,	// (0x00051c3b) main_mup_pane_g1_ParamLimits

0x335a,	// (0x00051c3b) main_mup_pane_g1

0x3370,	// (0x00051c51) main_mup_pane_g2_ParamLimits

0x3370,	// (0x00051c51) main_mup_pane_g2

0x3388,	// (0x00051c69) main_mup_pane_g3_ParamLimits

0x3388,	// (0x00051c69) main_mup_pane_g3

0x33a0,	// (0x00051c81) main_mup_pane_g4_ParamLimits

0x33a0,	// (0x00051c81) main_mup_pane_g4

0x33b8,	// (0x00051c99) main_mup_pane_g5_ParamLimits

0x33b8,	// (0x00051c99) main_mup_pane_g5

0x33d4,	// (0x00051cb5) main_mup_pane_g6_ParamLimits

0x33d4,	// (0x00051cb5) main_mup_pane_g6

0x33ee,	// (0x00051ccf) main_mup_pane_g7_ParamLimits

0x33ee,	// (0x00051ccf) main_mup_pane_g7

0x340c,	// (0x00051ced) main_mup_pane_g8_ParamLimits

0x340c,	// (0x00051ced) main_mup_pane_g8

0x342a,	// (0x00051d0b) main_mup_pane_g9_ParamLimits

0x342a,	// (0x00051d0b) main_mup_pane_g9

0x3446,	// (0x00051d27) main_mup_pane_g10_ParamLimits

0x3446,	// (0x00051d27) main_mup_pane_g10

0x3464,	// (0x00051d45) main_mup_pane_g11_ParamLimits

0x3464,	// (0x00051d45) main_mup_pane_g11

0x347e,	// (0x00051d5f) main_mup_pane_g12_ParamLimits

0x347e,	// (0x00051d5f) main_mup_pane_g12

0x3494,	// (0x00051d75) main_mup_pane_g13_ParamLimits

0x3494,	// (0x00051d75) main_mup_pane_g13

0x000c,

0xf421,	// (0x0005dd02) main_mup_pane_g_ParamLimits

0xf421,	// (0x0005dd02) main_mup_pane_g

0x34a8,	// (0x00051d89) main_mup_pane_t1_ParamLimits

0x34a8,	// (0x00051d89) main_mup_pane_t1

0x34c4,	// (0x00051da5) main_mup_pane_t2_ParamLimits

0x34c4,	// (0x00051da5) main_mup_pane_t2

0x34dc,	// (0x00051dbd) main_mup_pane_t3_ParamLimits

0x34dc,	// (0x00051dbd) main_mup_pane_t3

0x34f4,	// (0x00051dd5) main_mup_pane_t4_ParamLimits

0x34f4,	// (0x00051dd5) main_mup_pane_t4

0x3512,	// (0x00051df3) main_mup_pane_t5_ParamLimits

0x3512,	// (0x00051df3) main_mup_pane_t5

0x3527,	// (0x00051e08) main_mup_pane_t6_ParamLimits

0x3527,	// (0x00051e08) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0005dd1d) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0005dd1d) main_mup_pane_t

0x3539,	// (0x00051e1a) mup_progress_pane_ParamLimits

0x3539,	// (0x00051e1a) mup_progress_pane

0x3545,	// (0x00051e26) mup_visualizer_pane_ParamLimits

0x3545,	// (0x00051e26) mup_visualizer_pane

0x3579,	// (0x00051e5a) mup_volume_pane_ParamLimits

0x3579,	// (0x00051e5a) mup_volume_pane

0xb447,	// (0x00059d28) mup_visualizer_pane_g1_ParamLimits

0xb447,	// (0x00059d28) mup_visualizer_pane_g1

0xb447,	// (0x00059d28) mup_visualizer_pane_g2_ParamLimits

0xb447,	// (0x00059d28) mup_visualizer_pane_g2

0xb2c5,	// (0x00059ba6) mup_visualizer_pane_g3_ParamLimits

0xb2c5,	// (0x00059ba6) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0005dd2a) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0005dd2a) mup_visualizer_pane_g

0xa241,	// (0x00058b22) mup_volume_pane_g1

0xb45d,	// (0x00059d3e) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0005dd31) mup_volume_pane_g

0xa241,	// (0x00058b22) mup_progress_pane_g1

0xb466,	// (0x00059d47) mup_progress_pane_g2

0xb46f,	// (0x00059d50) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0005dd36) mup_progress_pane_g

0x9e86,	// (0x00058767) bg_popup_window_pane_cp05

0xb478,	// (0x00059d59) heading_pane_cp02_ParamLimits

0xb478,	// (0x00059d59) heading_pane_cp02

0xb494,	// (0x00059d75) list_popup_blid_pane

0xb49c,	// (0x00059d7d) list_blid_sat_info_pane_ParamLimits

0xb49c,	// (0x00059d7d) list_blid_sat_info_pane

0xb4af,	// (0x00059d90) list_blid_sat_info_pane_g1

0xb4b7,	// (0x00059d98) list_blid_sat_info_pane_t1

0x36a3,	// (0x00051f84) mup_equalizer_pane_ParamLimits

0x36a3,	// (0x00051f84) mup_equalizer_pane

0x36c4,	// (0x00051fa5) mup_equalizer_pane_cp1_ParamLimits

0x36c4,	// (0x00051fa5) mup_equalizer_pane_cp1

0x36e5,	// (0x00051fc6) mup_equalizer_pane_cp2_ParamLimits

0x36e5,	// (0x00051fc6) mup_equalizer_pane_cp2

0x370a,	// (0x00051feb) mup_equalizer_pane_cp3_ParamLimits

0x370a,	// (0x00051feb) mup_equalizer_pane_cp3

0x3733,	// (0x00052014) mup_equalizer_pane_cp4_ParamLimits

0x3733,	// (0x00052014) mup_equalizer_pane_cp4

0x375c,	// (0x0005203d) mup_equalizer_pane_cp5

0x3774,	// (0x00052055) mup_equalizer_pane_cp6

0x378c,	// (0x0005206d) mup_equalizer_pane_cp7

0xc674,	// (0x0005af55) bg_popup_call_poc_act_pane_g9

0xc67c,	// (0x0005af5d) bg_popup_call_poc_act_pane_g10

0xc684,	// (0x0005af65) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0e1,	// (0x000589c2) mup_scale_pane

0xa241,	// (0x00058b22) mup_scale_pane_g1

0xb4c5,	// (0x00059da6) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0005dd52) mup_scale_pane_g

0xb4e9,	// (0x00059dca) msg_data_pane

0xb4f1,	// (0x00059dd2) scroll_pane_cp017

0x37b6,	// (0x00052097) bg_list_pane_cp04_ParamLimits

0x37b6,	// (0x00052097) bg_list_pane_cp04

0xb4f9,	// (0x00059dda) msg_data_pane_g1

0x37d6,	// (0x000520b7) msg_data_pane_g2

0x37e0,	// (0x000520c1) msg_data_pane_g3

0x37ea,	// (0x000520cb) msg_data_pane_g4

0x37f2,	// (0x000520d3) msg_data_pane_g5

0x37fa,	// (0x000520db) msg_data_pane_g6

0x3802,	// (0x000520e3) msg_data_pane_g7

0x0006,

0xf480,	// (0x0005dd61) msg_data_pane_g

0x380a,	// (0x000520eb) msg_text_pane_ParamLimits

0x380a,	// (0x000520eb) msg_text_pane

0x3832,	// (0x00052113) qrid_highlight_pane_cp011_ParamLimits

0x3832,	// (0x00052113) qrid_highlight_pane_cp011

0x9e86,	// (0x00058767) msg_body_pane

0x9e86,	// (0x00058767) msg_header_pane

0xb50a,	// (0x00059deb) input_focus_pane_cp07

0xb51f,	// (0x00059e00) msg_header_pane_t1_ParamLimits

0xb51f,	// (0x00059e00) msg_header_pane_t1

0x3848,	// (0x00052129) msg_header_pane_t2_ParamLimits

0x3848,	// (0x00052129) msg_header_pane_t2

0x0001,

0xf494,	// (0x0005dd75) msg_header_pane_t_ParamLimits

0xf494,	// (0x0005dd75) msg_header_pane_t

0xb531,	// (0x00059e12) msg_body_pane_g1

0xfd55,	// (0x0004e636) msg_body_pane_t1_ParamLimits

0xfd55,	// (0x0004e636) msg_body_pane_t1

0x385a,	// (0x0005213b) msg_body_pane_t2_ParamLimits

0x385a,	// (0x0005213b) msg_body_pane_t2

0x386c,	// (0x0005214d) msg_body_pane_t3_ParamLimits

0x386c,	// (0x0005214d) msg_body_pane_t3

0x0002,

0xf499,	// (0x0005dd7a) msg_body_pane_t_ParamLimits

0xf499,	// (0x0005dd7a) msg_body_pane_t

0x38b8,	// (0x00052199) main_viewer_pane_g1_ParamLimits

0x38b8,	// (0x00052199) main_viewer_pane_g1

0x38c6,	// (0x000521a7) main_viewer_pane_g2_ParamLimits

0x38c6,	// (0x000521a7) main_viewer_pane_g2

0x38d4,	// (0x000521b5) main_viewer_pane_g3_ParamLimits

0x38d4,	// (0x000521b5) main_viewer_pane_g3

0x38e3,	// (0x000521c4) main_viewer_pane_g4_ParamLimits

0x38e3,	// (0x000521c4) main_viewer_pane_g4

0xa75a,	// (0x0005903b) main_viewer_pane_g5_ParamLimits

0xa75a,	// (0x0005903b) main_viewer_pane_g5

0xa75a,	// (0x0005903b) main_viewer_pane_g7_ParamLimits

0xa75a,	// (0x0005903b) main_viewer_pane_g7

0xa76c,	// (0x0005904d) main_viewer_pane_g8_ParamLimits

0xa76c,	// (0x0005904d) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0005dd8a) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005dd8a) main_viewer_pane_g

0xb539,	// (0x00059e1a) viewer_content_pane_ParamLimits

0xb539,	// (0x00059e1a) viewer_content_pane

0x3921,	// (0x00052202) main_postcard_pane_g1_ParamLimits

0x3921,	// (0x00052202) main_postcard_pane_g1

0x3937,	// (0x00052218) main_postcard_pane_g2_ParamLimits

0x3937,	// (0x00052218) main_postcard_pane_g2

0x394d,	// (0x0005222e) main_postcard_pane_g3_ParamLimits

0x394d,	// (0x0005222e) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0005dd9b) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0005dd9b) main_postcard_pane_g

0x3964,	// (0x00052245) main_postcard_pane_g4

0xc89d,	// (0x0005b17e) smil_status_volume_pane_g2

0x39a7,	// (0x00052288) postcard_pane_ParamLimits

0x39a7,	// (0x00052288) postcard_pane

0xb547,	// (0x00059e28) postcard_pane_g1_ParamLimits

0xb547,	// (0x00059e28) postcard_pane_g1

0x39f7,	// (0x000522d8) postcard_pane_g2_ParamLimits

0x39f7,	// (0x000522d8) postcard_pane_g2

0x3a03,	// (0x000522e4) postcard_pane_g3_ParamLimits

0x3a03,	// (0x000522e4) postcard_pane_g3

0xb555,	// (0x00059e36) postcard_pane_g4_ParamLimits

0xb555,	// (0x00059e36) postcard_pane_g4

0x3a0f,	// (0x000522f0) postcard_pane_g5_ParamLimits

0x3a0f,	// (0x000522f0) postcard_pane_g5

0x3a24,	// (0x00052305) postcard_pane_g6_ParamLimits

0x3a24,	// (0x00052305) postcard_pane_g6

0xb547,	// (0x00059e28) postcard_pane_g7_ParamLimits

0xb547,	// (0x00059e28) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0005dda8) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0005dda8) postcard_pane_g

0x3a3c,	// (0x0005231d) main_mp2_pane_g1_ParamLimits

0x3a3c,	// (0x0005231d) main_mp2_pane_g1

0x3a4a,	// (0x0005232b) main_mp2_pane_g2_ParamLimits

0x3a4a,	// (0x0005232b) main_mp2_pane_g2

0x3a56,	// (0x00052337) main_mp2_pane_g3_ParamLimits

0x3a56,	// (0x00052337) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0005ddb7) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0005ddb7) main_mp2_pane_g

0x3a62,	// (0x00052343) main_mp2_pane_t1_ParamLimits

0x3a62,	// (0x00052343) main_mp2_pane_t1

0x3a79,	// (0x0005235a) main_mp2_pane_t2_ParamLimits

0x3a79,	// (0x0005235a) main_mp2_pane_t2

0x3a8b,	// (0x0005236c) main_mp2_pane_t3_ParamLimits

0x3a8b,	// (0x0005236c) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0005ddbe) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0005ddbe) main_mp2_pane_t

0xb563,	// (0x00059e44) pec_content_pane_ParamLimits

0xb563,	// (0x00059e44) pec_content_pane

0xa5ab,	// (0x00058e8c) scroll_pane_cp015

0xb575,	// (0x00059e56) pec_attribute_pane_ParamLimits

0xb575,	// (0x00059e56) pec_attribute_pane

0x3a9d,	// (0x0005237e) pec_content_pane_g1_ParamLimits

0x3a9d,	// (0x0005237e) pec_content_pane_g1

0xb585,	// (0x00059e66) pec_content_pane_t1_ParamLimits

0xb585,	// (0x00059e66) pec_content_pane_t1

0xb597,	// (0x00059e78) pec_content_pane_t2_ParamLimits

0xb597,	// (0x00059e78) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0005ddc5) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0005ddc5) pec_content_pane_t

0x3aa9,	// (0x0005238a) list_single_graphic_pane_cp01_ParamLimits

0x3aa9,	// (0x0005238a) list_single_graphic_pane_cp01

0xa0e1,	// (0x000589c2) bg_popup_sub_pane_cp04

0xb5a9,	// (0x00059e8a) popup_mup_playback_window_g1

0xb5b5,	// (0x00059e96) popup_mup_playback_window_t1

0xb5ca,	// (0x00059eab) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0005ddca) popup_mup_playback_window_t

0xb601,	// (0x00059ee2) main_image_pane_g1_ParamLimits

0xb601,	// (0x00059ee2) main_image_pane_g1

0xb644,	// (0x00059f25) scroll_pane_cp018_ParamLimits

0xb644,	// (0x00059f25) scroll_pane_cp018

0xb65c,	// (0x00059f3d) scroll_pane_cp016_ParamLimits

0xb65c,	// (0x00059f3d) scroll_pane_cp016

0x3b78,	// (0x00052459) smil2_image_pane_ParamLimits

0x3b78,	// (0x00052459) smil2_image_pane

0x3bae,	// (0x0005248f) smil2_root_pane_ParamLimits

0x3bae,	// (0x0005248f) smil2_root_pane

0x3be6,	// (0x000524c7) smil2_text_pane_ParamLimits

0x3be6,	// (0x000524c7) smil2_text_pane

0x9e86,	// (0x00058767) bg_list_pane_cp06

0xb698,	// (0x00059f79) grid_radio_pane

0x9e86,	// (0x00058767) bg_popup_window_pane_cp06

0xb6a2,	// (0x00059f83) main_fmradio_pane_t1

0xb142,	// (0x00059a23) heading_pane_cp04

0xb6b0,	// (0x00059f91) main_fmradio_pane_t2

0xc68c,	// (0x0005af6d) popup_cale_lunar_info_window_g1

0xb6be,	// (0x00059f9f) main_fmradio_pane_t3

0xc694,	// (0x0005af75) popup_cale_lunar_info_window_g2

0xb6ce,	// (0x00059faf) main_fmradio_pane_t4

0x0001,

0xb6dc,	// (0x00059fbd) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0005dea5) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0005dddf) main_fmradio_pane_t

0xb6ea,	// (0x00059fcb) wait_bar_pane_cp03

0xb6f2,	// (0x00059fd3) cell_fmradio_pane_ParamLimits

0xb6f2,	// (0x00059fd3) cell_fmradio_pane

0xb547,	// (0x00059e28) cell_fmradio_pane_g1_ParamLimits

0xb547,	// (0x00059e28) cell_fmradio_pane_g1

0x9e86,	// (0x00058767) grid_highlight_pane_cp011

0xb707,	// (0x00059fe8) poc_content_pane_ParamLimits

0xb707,	// (0x00059fe8) poc_content_pane

0xb719,	// (0x00059ffa) scroll_pane_cp019

0x3c76,	// (0x00052557) popup_call_poc_act_window_ParamLimits

0x3c76,	// (0x00052557) popup_call_poc_act_window

0x3c9a,	// (0x0005257b) popup_call_poc_inact_window_ParamLimits

0x3c9a,	// (0x0005257b) popup_call_poc_inact_window

0xf59b,	// (0x0005de7c) bg_popup_call_poc_act_pane_g

0xc604,	// (0x0005aee5) bg_popup_call_poc_inact_pane_g1

0xc60c,	// (0x0005aeed) bg_popup_call_poc_inact_pane_g2

0xb721,	// (0x0005a002) popup_call_poc_act_window_g2

0xc614,	// (0x0005aef5) bg_popup_call_poc_inact_pane_g3

0xc61c,	// (0x0005aefd) bg_popup_call_poc_inact_pane_g4

0xc624,	// (0x0005af05) bg_popup_call_poc_inact_pane_g5

0xb729,	// (0x0005a00a) popup_call_poc_act_window_t1_ParamLimits

0xb729,	// (0x0005a00a) popup_call_poc_act_window_t1

0xb751,	// (0x0005a032) popup_call_poc_act_window_t2_ParamLimits

0xb751,	// (0x0005a032) popup_call_poc_act_window_t2

0xb779,	// (0x0005a05a) popup_call_poc_act_window_t3_ParamLimits

0xb779,	// (0x0005a05a) popup_call_poc_act_window_t3

0xb7a1,	// (0x0005a082) popup_call_poc_act_window_t4_ParamLimits

0xb7a1,	// (0x0005a082) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0005ddea) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0005ddea) popup_call_poc_act_window_t

0xc62c,	// (0x0005af0d) bg_popup_call_poc_inact_pane_g6

0xc634,	// (0x0005af15) bg_popup_call_poc_inact_pane_g7

0xc63c,	// (0x0005af1d) bg_popup_call_poc_inact_pane_g8

0xb7b3,	// (0x0005a094) popup_call_poc_inact_window_g2

0xc644,	// (0x0005af25) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0005de69) bg_popup_call_poc_inact_pane_g

0xb7bb,	// (0x0005a09c) popup_call_poc_inact_window_t1_ParamLimits

0xb7bb,	// (0x0005a09c) popup_call_poc_inact_window_t1

0xb7d0,	// (0x0005a0b1) popup_call_poc_inact_window_t2_ParamLimits

0xb7d0,	// (0x0005a0b1) popup_call_poc_inact_window_t2

0xb7e5,	// (0x0005a0c6) popup_call_poc_inact_window_t3_ParamLimits

0xb7e5,	// (0x0005a0c6) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0005ddf3) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0005ddf3) popup_call_poc_inact_window_t

0xc810,	// (0x0005b0f1) context_pane_ParamLimits

0x4542,	// (0x00052e23) signal_pane_ParamLimits

0xa3f4,	// (0x00058cd5) main_call2_pane

0xc7fe,	// (0x0005b0df) popup_phob_thumbnail2_window_ParamLimits

0xc7fe,	// (0x0005b0df) popup_phob_thumbnail2_window

0xa742,	// (0x00059023) aid_hotspot_pointer_arrow_pane

0xa74a,	// (0x0005902b) aid_hotspot_pointer_hand_pane

0x4002,	// (0x000528e3) phob_pre_status_pane_g5

0x1a2a,	// (0x0005030b) cams_zoom_pane_ParamLimits

0x1a39,	// (0x0005031a) image_vga_pane_ParamLimits

0x1a53,	// (0x00050334) main_camera_pane_g1_ParamLimits

0x1a65,	// (0x00050346) main_camera_pane_g2_ParamLimits

0x1a75,	// (0x00050356) main_camera_pane_g3_ParamLimits

0x1a89,	// (0x0005036a) main_camera_pane_g4_ParamLimits

0x1a9d,	// (0x0005037e) main_camera_pane_g5_ParamLimits

0x1ab1,	// (0x00050392) main_camera_pane_g6_ParamLimits

0x1ac5,	// (0x000503a6) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005daeb) main_camera_pane_g_ParamLimits

0x1ad9,	// (0x000503ba) main_camera_pane_t1_ParamLimits

0x1aef,	// (0x000503d0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005dafc) main_camera_pane_t_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_preview_window_pane_cp01

0xb7fa,	// (0x0005a0db) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7fa,	// (0x0005a0db) popup_phob_thumbnail2_window_g1

0x9e86,	// (0x00058767) call2_cli_visual_pane

0x3cce,	// (0x000525af) popup_call2_audio_conf_window_ParamLimits

0x3cce,	// (0x000525af) popup_call2_audio_conf_window

0x3cf6,	// (0x000525d7) popup_call2_audio_first_window_ParamLimits

0x3cf6,	// (0x000525d7) popup_call2_audio_first_window

0x3d8c,	// (0x0005266d) popup_call2_audio_in_window_ParamLimits

0x3d8c,	// (0x0005266d) popup_call2_audio_in_window

0x3dd8,	// (0x000526b9) popup_call2_audio_out_window_ParamLimits

0x3dd8,	// (0x000526b9) popup_call2_audio_out_window

0x3e4a,	// (0x0005272b) popup_call2_audio_second_window_ParamLimits

0x3e4a,	// (0x0005272b) popup_call2_audio_second_window

0x3eb0,	// (0x00052791) popup_call2_audio_wait_window_ParamLimits

0x3eb0,	// (0x00052791) popup_call2_audio_wait_window

0x9e86,	// (0x00058767) bg_popup_call2_act_pane_cp03

0xa0c3,	// (0x000589a4) list_conf_pane_cp

0xb806,	// (0x0005a0e7) popup_call2_audio_conf_window_t1

0xb814,	// (0x0005a0f5) list_single_graphic_popup_conf2_pane_ParamLimits

0xb814,	// (0x0005a0f5) list_single_graphic_popup_conf2_pane

0xb1b1,	// (0x00059a92) list_highlight_pane_cp04

0xb827,	// (0x0005a108) list_single_graphic_popup_conf2_pane_g1

0xb1c2,	// (0x00059aa3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0005ddfa) list_single_graphic_popup_conf2_pane_g

0xb831,	// (0x0005a112) list_single_graphic_popup_conf2_pane_t1

0xb83f,	// (0x0005a120) bg_popup_call2_act_pane_cp01_ParamLimits

0xb83f,	// (0x0005a120) bg_popup_call2_act_pane_cp01

0xb8c9,	// (0x0005a1aa) call_type_pane_cp05_ParamLimits

0xb8c9,	// (0x0005a1aa) call_type_pane_cp05

0xb91d,	// (0x0005a1fe) popup_call2_audio_second_window_g1_ParamLimits

0xb91d,	// (0x0005a1fe) popup_call2_audio_second_window_g1

0xb971,	// (0x0005a252) popup_call2_audio_second_window_g2_ParamLimits

0xb971,	// (0x0005a252) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0005ddff) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0005ddff) popup_call2_audio_second_window_g

0xb9d6,	// (0x0005a2b7) popup_call2_audio_second_window_t1_ParamLimits

0xb9d6,	// (0x0005a2b7) popup_call2_audio_second_window_t1

0xba91,	// (0x0005a372) popup_call2_audio_second_window_t2_ParamLimits

0xba91,	// (0x0005a372) popup_call2_audio_second_window_t2

0xbae4,	// (0x0005a3c5) popup_call2_audio_second_window_t3_ParamLimits

0xbae4,	// (0x0005a3c5) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0005de06) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0005de06) popup_call2_audio_second_window_t

0x9e86,	// (0x00058767) bg_popup_call2_in_pane_cp02

0x9e90,	// (0x00058771) call_type_pane_cp04

0x9e98,	// (0x00058779) popup_call2_audio_wait_window_g1

0x9ea0,	// (0x00058781) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005d9da) popup_call2_audio_wait_window_g

0x9ea8,	// (0x00058789) popup_call2_audio_wait_window_t3

0xbbd7,	// (0x0005a4b8) bg_popup_call2_act_pane_ParamLimits

0xbbd7,	// (0x0005a4b8) bg_popup_call2_act_pane

0xbc97,	// (0x0005a578) call_type_pane_cp03_ParamLimits

0xbc97,	// (0x0005a578) call_type_pane_cp03

0xbcfb,	// (0x0005a5dc) popup_call2_audio_first_window_g1_ParamLimits

0xbcfb,	// (0x0005a5dc) popup_call2_audio_first_window_g1

0xbd6b,	// (0x0005a64c) popup_call2_audio_first_window_g2_ParamLimits

0xbd6b,	// (0x0005a64c) popup_call2_audio_first_window_g2

0xb447,	// (0x00059d28) popup_call2_audio_first_window_g3_ParamLimits

0xb447,	// (0x00059d28) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0005de0f) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0005de0f) popup_call2_audio_first_window_g

0xbe49,	// (0x0005a72a) popup_call2_audio_first_window_t1_ParamLimits

0xbe49,	// (0x0005a72a) popup_call2_audio_first_window_t1

0xbf4c,	// (0x0005a82d) popup_call2_audio_first_window_t4_ParamLimits

0xbf4c,	// (0x0005a82d) popup_call2_audio_first_window_t4

0xc02f,	// (0x0005a910) popup_call2_audio_first_window_t5_ParamLimits

0xc02f,	// (0x0005a910) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0005de1a) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0005de1a) popup_call2_audio_first_window_t

0xa0d9,	// (0x000589ba) bg_popup_call2_act_pane_g1

0xc69e,	// (0x0005af7f) popup_cale_lunar_info_window_t1

0xc6ac,	// (0x0005af8d) popup_cale_lunar_info_window_t2

0xc6ba,	// (0x0005af9b) popup_cale_lunar_info_window_t3

0x9e86,	// (0x00058767) bg_popup_call2_bubble_pane

0xc130,	// (0x0005aa11) bg_popup_call2_in_pane_cp01_ParamLimits

0xc130,	// (0x0005aa11) bg_popup_call2_in_pane_cp01

0x9b62,	// (0x00058443) call_type_pane_cp02

0xc178,	// (0x0005aa59) popup_call2_audio_out_window_g1_ParamLimits

0xc178,	// (0x0005aa59) popup_call2_audio_out_window_g1

0xc1a4,	// (0x0005aa85) popup_call2_audio_out_window_g2_ParamLimits

0xc1a4,	// (0x0005aa85) popup_call2_audio_out_window_g2

0xc1cc,	// (0x0005aaad) popup_call2_audio_out_window_g3_ParamLimits

0xc1cc,	// (0x0005aaad) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0005de23) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0005de23) popup_call2_audio_out_window_g

0xc207,	// (0x0005aae8) popup_call2_audio_out_window_t1_ParamLimits

0xc207,	// (0x0005aae8) popup_call2_audio_out_window_t1

0xc266,	// (0x0005ab47) popup_call2_audio_out_window_t2_ParamLimits

0xc266,	// (0x0005ab47) popup_call2_audio_out_window_t2

0xc2ba,	// (0x0005ab9b) popup_call2_audio_out_window_t3_ParamLimits

0xc2ba,	// (0x0005ab9b) popup_call2_audio_out_window_t3

0xc2d0,	// (0x0005abb1) popup_call2_audio_out_window_t4_ParamLimits

0xc2d0,	// (0x0005abb1) popup_call2_audio_out_window_t4

0xc2e6,	// (0x0005abc7) popup_call2_audio_out_window_t5_ParamLimits

0xc2e6,	// (0x0005abc7) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0005de2c) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0005de2c) popup_call2_audio_out_window_t

0xc34a,	// (0x0005ac2b) bg_popup_call2_in_pane_ParamLimits

0xc34a,	// (0x0005ac2b) bg_popup_call2_in_pane

0xc3a6,	// (0x0005ac87) popup_call2_audio_in_window_g1_ParamLimits

0xc3a6,	// (0x0005ac87) popup_call2_audio_in_window_g1

0xc3de,	// (0x0005acbf) popup_call2_audio_in_window_g2_ParamLimits

0xc3de,	// (0x0005acbf) popup_call2_audio_in_window_g2

0xc416,	// (0x0005acf7) popup_call2_audio_in_window_g3_ParamLimits

0xc416,	// (0x0005acf7) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0005de39) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0005de39) popup_call2_audio_in_window_g

0xc46e,	// (0x0005ad4f) popup_call2_audio_in_window_t1_ParamLimits

0xc46e,	// (0x0005ad4f) popup_call2_audio_in_window_t1

0xc4ee,	// (0x0005adcf) popup_call2_audio_in_window_t2_ParamLimits

0xc4ee,	// (0x0005adcf) popup_call2_audio_in_window_t2

0xc56e,	// (0x0005ae4f) popup_call2_audio_in_window_t3_ParamLimits

0xc56e,	// (0x0005ae4f) popup_call2_audio_in_window_t3

0xc588,	// (0x0005ae69) popup_call2_audio_in_window_t4_ParamLimits

0xc588,	// (0x0005ae69) popup_call2_audio_in_window_t4

0xc59a,	// (0x0005ae7b) popup_call2_audio_in_window_t5_ParamLimits

0xc59a,	// (0x0005ae7b) popup_call2_audio_in_window_t5

0xc5af,	// (0x0005ae90) popup_call2_audio_in_window_t6_ParamLimits

0xc5af,	// (0x0005ae90) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0005de42) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0005de42) popup_call2_audio_in_window_t

0xa0d9,	// (0x000589ba) bg_popup_call2_in_pane_g1

0xc6c8,	// (0x0005afa9) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0005deaa) popup_cale_lunar_info_window_t

0xa0e1,	// (0x000589c2) bg_popup_call2_rect_pane_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_call2_rect_pane

0x9e86,	// (0x00058767) call2_cli_visual_graphic_pane

0x9e86,	// (0x00058767) call2_cli_visual_text_pane

0xa784,	// (0x00059065) smil_status_volume_pane_g3

0x0002,

0xa241,	// (0x00058b22) call2_cli_visual_graphic_pane_g1

0xa241,	// (0x00058b22) call2_cli_visual_graphic_pane_g2

0xa241,	// (0x00058b22) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0005de4f) call2_cli_visual_graphic_pane_g

0xc5c4,	// (0x0005aea5) bg_popup_call2_rect_pane_g1

0xa2e9,	// (0x00058bca) bg_popup_call2_rect_pane_g2

0xc5cc,	// (0x0005aead) bg_popup_call2_rect_pane_g3

0xc5d4,	// (0x0005aeb5) bg_popup_call2_rect_pane_g4

0xc5dc,	// (0x0005aebd) bg_popup_call2_rect_pane_g5

0xc5e4,	// (0x0005aec5) bg_popup_call2_rect_pane_g6

0xc5ec,	// (0x0005aecd) bg_popup_call2_rect_pane_g7

0xc5f4,	// (0x0005aed5) bg_popup_call2_rect_pane_g8

0xc5fc,	// (0x0005aedd) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0005de56) bg_popup_call2_rect_pane_g

0xc604,	// (0x0005aee5) bg_popup_call2_bubble_pane_g1

0xc60c,	// (0x0005aeed) bg_popup_call2_bubble_pane_g2

0xc614,	// (0x0005aef5) bg_popup_call2_bubble_pane_g3

0xc61c,	// (0x0005aefd) bg_popup_call2_bubble_pane_g4

0xc624,	// (0x0005af05) bg_popup_call2_bubble_pane_g5

0xc62c,	// (0x0005af0d) bg_popup_call2_bubble_pane_g6

0xc634,	// (0x0005af15) bg_popup_call2_bubble_pane_g7

0xc63c,	// (0x0005af1d) bg_popup_call2_bubble_pane_g8

0xc644,	// (0x0005af25) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0005de69) bg_popup_call2_bubble_pane_g

0x11a4,	// (0x0004fa85) aid_cale_week_size_cell_pane

0x1b09,	// (0x000503ea) aid_cams_cif_uncrop_pane_ParamLimits

0x1b09,	// (0x000503ea) aid_cams_cif_uncrop_pane

0x1cc2,	// (0x000505a3) aid_cams_size_cell_ParamLimits

0x1cc2,	// (0x000505a3) aid_cams_size_cell

0x1cd6,	// (0x000505b7) grid_cams_pane_ParamLimits

0x1cf0,	// (0x000505d1) linegrid_cams_pane_ParamLimits

0x1df0,	// (0x000506d1) call_video_pane_t1

0x1e0a,	// (0x000506eb) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005db4f) call_video_pane_t

0x223e,	// (0x00050b1f) aid_cale_month_size_cell_pane_ParamLimits

0x223e,	// (0x00050b1f) aid_cale_month_size_cell_pane

0xf612,	// (0x0005def3) smil_status_volume_pane_g

0xa791,	// (0x00059072) volume_smil_pane_ParamLimits

0x9a1e,	// (0x000582ff) aid_popup2_width_pane

0x1102,	// (0x0004f9e3) cell_qdial_pane_g4_ParamLimits

0x1102,	// (0x0004f9e3) cell_qdial_pane_g4

0x3189,	// (0x00051a6a) aid_blid_cardinal_pane_ParamLimits

0x3195,	// (0x00051a76) aid_blid_destination_pane_ParamLimits

0x3195,	// (0x00051a76) aid_blid_destination_pane

0xa0e1,	// (0x000589c2) bg_popup_call_poc_act_pane_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_call_poc_act_pane

0xa0e1,	// (0x000589c2) bg_popup_call_poc_inact_pane_ParamLimits

0xa0e1,	// (0x000589c2) bg_popup_call_poc_inact_pane

0xc64c,	// (0x0005af2d) bg_popup_call_poc_act_pane_g1

0xc654,	// (0x0005af35) bg_popup_call_poc_act_pane_g2

0xc65c,	// (0x0005af3d) bg_popup_call_poc_act_pane_g3

0xc61c,	// (0x0005aefd) bg_popup_call_poc_act_pane_g4

0xc624,	// (0x0005af05) bg_popup_call_poc_act_pane_g5

0xc664,	// (0x0005af45) bg_popup_call_poc_act_pane_g6

0xc634,	// (0x0005af15) bg_popup_call_poc_act_pane_g7

0xc66c,	// (0x0005af4d) bg_popup_call_poc_act_pane_g8

0x9e86,	// (0x00058767) main_usb_pane

0xc7d5,	// (0x0005b0b6) popup_cale_lunar_info_window

0x20d3,	// (0x000509b4) im_reading_pane_t1_ParamLimits

0xa503,	// (0x00058de4) list_im_pane_ParamLimits

0xa514,	// (0x00058df5) scroll_pane_cp07_ParamLimits

0x9e86,	// (0x00058767) grid_highlight_pane_cp012

0xa0e1,	// (0x000589c2) mup_scale_pane_ParamLimits

0xb547,	// (0x00059e28) main_usb_pane_g1_ParamLimits

0xb547,	// (0x00059e28) main_usb_pane_g1

0x3f0e,	// (0x000527ef) main_usb_pane_g2_ParamLimits

0x3f0e,	// (0x000527ef) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0005de93) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0005de93) main_usb_pane_g

0x3f24,	// (0x00052805) main_usb_pane_t1_ParamLimits

0x3f24,	// (0x00052805) main_usb_pane_t1

0x3f36,	// (0x00052817) main_usb_pane_t2_ParamLimits

0x3f36,	// (0x00052817) main_usb_pane_t2

0x3f48,	// (0x00052829) main_usb_pane_t3_ParamLimits

0x3f48,	// (0x00052829) main_usb_pane_t3

0x3f5a,	// (0x0005283b) main_usb_pane_t4_ParamLimits

0x3f5a,	// (0x0005283b) main_usb_pane_t4

0x3f6f,	// (0x00052850) main_usb_pane_t5_ParamLimits

0x3f6f,	// (0x00052850) main_usb_pane_t5

0x3f84,	// (0x00052865) main_usb_pane_t6_ParamLimits

0x3f84,	// (0x00052865) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0005de98) main_usb_pane_t_ParamLimits

0x312a,	// (0x00051a0b) aid_text_placing

0x3135,	// (0x00051a16) main_location2_pane_t1_ParamLimits

0x3149,	// (0x00051a2a) main_location2_pane_t2_ParamLimits

0x315f,	// (0x00051a40) main_location2_pane_t3_ParamLimits

0x3175,	// (0x00051a56) main_location2_pane_t4_ParamLimits

0x3175,	// (0x00051a56) main_location2_pane_t4

0xf3d6,	// (0x0005dcb7) main_location2_pane_t_ParamLimits

0xa11d,	// (0x000589fe) find_pinb_pane_g2_ParamLimits

0xa11d,	// (0x000589fe) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005da00) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005da00) find_pinb_pane_g

0xa129,	// (0x00058a0a) find_pinb_pane_t1_ParamLimits

0xa13b,	// (0x00058a1c) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005da05) find_pinb_pane_t_ParamLimits

0x9e86,	// (0x00058767) main_call3_pane

0x280d,	// (0x000510ee) cale_month_day_heading_pane_t1_ParamLimits

0x2893,	// (0x00051174) cale_month_day_heading_pane_t2_ParamLimits

0x2924,	// (0x00051205) cale_month_day_heading_pane_t3_ParamLimits

0x29b5,	// (0x00051296) cale_month_day_heading_pane_t4_ParamLimits

0x2a46,	// (0x00051327) cale_month_day_heading_pane_t5_ParamLimits

0x2ae7,	// (0x000513c8) cale_month_day_heading_pane_t6_ParamLimits

0x2b8c,	// (0x0005146d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005db87) cale_month_day_heading_pane_t_ParamLimits

0x2e3e,	// (0x0005171f) smil_status_volume_pane

0x39cb,	// (0x000522ac) postcard_address_pane_ParamLimits

0x39cb,	// (0x000522ac) postcard_address_pane

0x39e1,	// (0x000522c2) postcard_message_pane_ParamLimits

0x39e1,	// (0x000522c2) postcard_message_pane

0x3eea,	// (0x000527cb) call2_cli_visual_pane_t1_ParamLimits

0x3eea,	// (0x000527cb) call2_cli_visual_pane_t1

0x4777,	// (0x00053058) postcard_message_pane_t1_ParamLimits

0x4777,	// (0x00053058) postcard_message_pane_t1

0x4760,	// (0x00053041) postcard_address_pane_t1_ParamLimits

0x4760,	// (0x00053041) postcard_address_pane_t1

0x474c,	// (0x0005302d) popup_call3_audio_in_window_ParamLimits

0x474c,	// (0x0005302d) popup_call3_audio_in_window

0x45d1,	// (0x00052eb2) bg_popup_call3_in_pane_ParamLimits

0x45d1,	// (0x00052eb2) bg_popup_call3_in_pane

0x464d,	// (0x00052f2e) popup_call3_audio_in_window_g1_ParamLimits

0x464d,	// (0x00052f2e) popup_call3_audio_in_window_g1

0x466d,	// (0x00052f4e) popup_call3_audio_in_window_g2_ParamLimits

0x466d,	// (0x00052f4e) popup_call3_audio_in_window_g2

0x468d,	// (0x00052f6e) popup_call3_audio_in_window_g3_ParamLimits

0x468d,	// (0x00052f6e) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0005defa) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0005defa) popup_call3_audio_in_window_g

0x46be,	// (0x00052f9f) popup_call3_audio_in_window_t1_ParamLimits

0x46be,	// (0x00052f9f) popup_call3_audio_in_window_t1

0x46fc,	// (0x00052fdd) popup_call3_audio_in_window_t2_ParamLimits

0x46fc,	// (0x00052fdd) popup_call3_audio_in_window_t2

0x473a,	// (0x0005301b) popup_call3_audio_in_window_t3_ParamLimits

0x473a,	// (0x0005301b) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0005df03) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0005df03) popup_call3_audio_in_window_t

0xa3f4,	// (0x00058cd5) bg_popup_call3_rect_pane

0xc5c4,	// (0x0005aea5) bg_popup_call3_rect_pane_g1

0xa2e9,	// (0x00058bca) bg_popup_call3_rect_pane_g2

0xc5cc,	// (0x0005aead) bg_popup_call3_rect_pane_g3

0xc5d4,	// (0x0005aeb5) bg_popup_call3_rect_pane_g4

0xc5dc,	// (0x0005aebd) bg_popup_call3_rect_pane_g5

0xc5e4,	// (0x0005aec5) bg_popup_call3_rect_pane_g6

0xc5ec,	// (0x0005aecd) bg_popup_call3_rect_pane_g7

0x358f,	// (0x00051e70) mup_visualizer_osc_pane

0xb455,	// (0x00059d36) mup_visualizer_spec_pane

0x4601,	// (0x00052ee2) call3_video_qcif_pane_ParamLimits

0x4601,	// (0x00052ee2) call3_video_qcif_pane

0x4614,	// (0x00052ef5) call3_video_qcif_uncrop_pane_ParamLimits

0x4614,	// (0x00052ef5) call3_video_qcif_uncrop_pane

0x4624,	// (0x00052f05) call3_video_subqcif_pane_ParamLimits

0x4624,	// (0x00052f05) call3_video_subqcif_pane

0x463a,	// (0x00052f1b) call3_video_subqcif_uncrop_pane_ParamLimits

0x463a,	// (0x00052f1b) call3_video_subqcif_uncrop_pane

0x46ad,	// (0x00052f8e) popup_call3_audio_in_window_g4_ParamLimits

0x46ad,	// (0x00052f8e) popup_call3_audio_in_window_g4

0x45c0,	// (0x00052ea1) mup_spec_half_pane

0x45c9,	// (0x00052eaa) mup_spec_half_pane_cp

0xc870,	// (0x0005b151) mup_osc_middle_pane

0xc879,	// (0x0005b15a) mup_visualizer_osc_pane_g1

0x45a0,	// (0x00052e81) mup_spec_bar_pane_ParamLimits

0x45a0,	// (0x00052e81) mup_spec_bar_pane

0xc85d,	// (0x0005b13e) mup_spec_bar_pane_g1

0xc867,	// (0x0005b148) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005deee) mup_spec_bar_pane_g

0x11a4,	// (0x0004fa85) aid_cale_week_size_cell_pane_ParamLimits

0x11be,	// (0x0004fa9f) bg_cale_heading_pane_ParamLimits

0x11e7,	// (0x0004fac8) bg_cale_pane_cp01_ParamLimits

0x1209,	// (0x0004faea) cale_week_corner_pane_ParamLimits

0x1228,	// (0x0004fb09) cale_week_day_heading_pane_ParamLimits

0x1256,	// (0x0004fb37) cale_week_scroll_pane_g1_ParamLimits

0x127a,	// (0x0004fb5b) cale_week_scroll_pane_g2_ParamLimits

0x1292,	// (0x0004fb73) cale_week_scroll_pane_g3_ParamLimits

0x12aa,	// (0x0004fb8b) cale_week_scroll_pane_g4_ParamLimits

0x12c6,	// (0x0004fba7) cale_week_scroll_pane_g5_ParamLimits

0x12e6,	// (0x0004fbc7) cale_week_scroll_pane_g6_ParamLimits

0x1306,	// (0x0004fbe7) cale_week_scroll_pane_g7_ParamLimits

0x132a,	// (0x0004fc0b) cale_week_scroll_pane_g8_ParamLimits

0x134e,	// (0x0004fc2f) cale_week_scroll_pane_g9_ParamLimits

0x136b,	// (0x0004fc4c) cale_week_scroll_pane_g10_ParamLimits

0x1388,	// (0x0004fc69) cale_week_scroll_pane_g11_ParamLimits

0x13a5,	// (0x0004fc86) cale_week_scroll_pane_g12_ParamLimits

0x13c2,	// (0x0004fca3) cale_week_scroll_pane_g13_ParamLimits

0x13df,	// (0x0004fcc0) cale_week_scroll_pane_g14_ParamLimits

0x1408,	// (0x0004fce9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005da91) cale_week_scroll_pane_g_ParamLimits

0x1455,	// (0x0004fd36) cale_week_time_pane_ParamLimits

0x1479,	// (0x0004fd5a) grid_cale_week_pane_ParamLimits

0xa365,	// (0x00058c46) listscroll_cale_week_pane_t1

0xa377,	// (0x00058c58) scroll_pane_cp08_ParamLimits

0x22ab,	// (0x00050b8c) cale_month_corner_pane_ParamLimits

0xad90,	// (0x00059671) cale_month_pane_t1

0x2793,	// (0x00051074) cale_month_week_pane_ParamLimits

0x2f58,	// (0x00051839) popup_call_status_window_g1_ParamLimits

0x2f6c,	// (0x0005184d) popup_call_status_window_g2_ParamLimits

0x2f80,	// (0x00051861) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0005dc3e) popup_call_status_window_g_ParamLimits

0xb132,	// (0x00059a13) aid_call2_pane

0xfd47,	// (0x0004e628) msg_header_pane_g1

0x39cb,	// (0x000522ac) postcard_address2_pane_ParamLimits

0x39cb,	// (0x000522ac) postcard_address2_pane

0x39e1,	// (0x000522c2) postcard_message2_pane_ParamLimits

0x39e1,	// (0x000522c2) postcard_message2_pane

0x4550,	// (0x00052e31) message2_row_pane_ParamLimits

0x4550,	// (0x00052e31) message2_row_pane

0x456d,	// (0x00052e4e) address2_row_pane_ParamLimits

0x456d,	// (0x00052e4e) address2_row_pane

0xc82b,	// (0x0005b10c) postcard_message2_row_pane_g1

0xc833,	// (0x0005b114) postcard_message2_row_pane_t1

0xc82b,	// (0x0005b10c) address2_row_pane_g1

0xc833,	// (0x0005b114) address2_row_pane_t1

0x19a5,	// (0x00050286) aid_size_cell_vorec

0x9e86,	// (0x00058767) main_rss_pane

0x4580,	// (0x00052e61) rss_list_single_pane_ParamLimits

0x4580,	// (0x00052e61) rss_list_single_pane

0xc841,	// (0x0005b122) rss_list_single_pane_t1

0xc84f,	// (0x0005b130) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0005dee9) rss_list_single_pane_t

0x9e86,	// (0x00058767) main_camera2_pane

0x9e86,	// (0x00058767) main_video2_pane

0x47e6,	// (0x000530c7) cams_zoom_pane_cp2_ParamLimits

0x47e6,	// (0x000530c7) cams_zoom_pane_cp2

0x47fd,	// (0x000530de) image2_vga_pane_ParamLimits

0x47fd,	// (0x000530de) image2_vga_pane

0x4845,	// (0x00053126) main_camera2_pane_g1_ParamLimits

0x4845,	// (0x00053126) main_camera2_pane_g1

0x4865,	// (0x00053146) main_camera2_pane_g2_ParamLimits

0x4865,	// (0x00053146) main_camera2_pane_g2

0x487c,	// (0x0005315d) main_camera2_pane_g3_ParamLimits

0x487c,	// (0x0005315d) main_camera2_pane_g3

0x4893,	// (0x00053174) main_camera2_pane_g4_ParamLimits

0x4893,	// (0x00053174) main_camera2_pane_g4

0x48aa,	// (0x0005318b) main_camera2_pane_g5_ParamLimits

0x48aa,	// (0x0005318b) main_camera2_pane_g5

0x48c1,	// (0x000531a2) main_camera2_pane_g6_ParamLimits

0x48c1,	// (0x000531a2) main_camera2_pane_g6

0x48d8,	// (0x000531b9) main_camera2_pane_g7_ParamLimits

0x48d8,	// (0x000531b9) main_camera2_pane_g7

0x48ef,	// (0x000531d0) main_camera2_pane_g8_ParamLimits

0x48ef,	// (0x000531d0) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0005df0a) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0005df0a) main_camera2_pane_g

0x491d,	// (0x000531fe) main_camera2_pane_t1_ParamLimits

0x491d,	// (0x000531fe) main_camera2_pane_t1

0x4952,	// (0x00053233) main_camera2_pane_t2_ParamLimits

0x4952,	// (0x00053233) main_camera2_pane_t2

0x496f,	// (0x00053250) main_camera2_pane_t3_ParamLimits

0x496f,	// (0x00053250) main_camera2_pane_t3

0x49cd,	// (0x000532ae) main_camera2_pane_t4_ParamLimits

0x49cd,	// (0x000532ae) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0005df1d) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0005df1d) main_camera2_pane_t

0x4a56,	// (0x00053337) cams_zoom_pane_cp4_ParamLimits

0x4a56,	// (0x00053337) cams_zoom_pane_cp4

0x4a6c,	// (0x0005334d) image2_cif_pane_ParamLimits

0x4a6c,	// (0x0005334d) image2_cif_pane

0x4a97,	// (0x00053378) image2_subqcif_pane_ParamLimits

0x4a97,	// (0x00053378) image2_subqcif_pane

0x4ab2,	// (0x00053393) main_video2_pane_g1_ParamLimits

0x4ab2,	// (0x00053393) main_video2_pane_g1

0x4acc,	// (0x000533ad) main_video2_pane_g2_ParamLimits

0x4acc,	// (0x000533ad) main_video2_pane_g2

0x4ae2,	// (0x000533c3) main_video2_pane_g3_ParamLimits

0x4ae2,	// (0x000533c3) main_video2_pane_g3

0x4af8,	// (0x000533d9) main_video2_pane_g4_ParamLimits

0x4af8,	// (0x000533d9) main_video2_pane_g4

0x4b0e,	// (0x000533ef) main_video2_pane_g5_ParamLimits

0x4b0e,	// (0x000533ef) main_video2_pane_g5

0x4b24,	// (0x00053405) main_video2_pane_g6_ParamLimits

0x4b24,	// (0x00053405) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0005df2c) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0005df2c) main_video2_pane_g

0x4b3e,	// (0x0005341f) main_video2_pane_t1_ParamLimits

0x4b3e,	// (0x0005341f) main_video2_pane_t1

0x4b62,	// (0x00053443) main_video2_pane_t2_ParamLimits

0x4b62,	// (0x00053443) main_video2_pane_t2

0x4bb2,	// (0x00053493) main_video2_pane_t3_ParamLimits

0x4bb2,	// (0x00053493) main_video2_pane_t3

0x0002,

0xf658,	// (0x0005df39) main_video2_pane_t_ParamLimits

0xf658,	// (0x0005df39) main_video2_pane_t

0x4042,	// (0x00052923) call_muted_g2

0x0001,

0xf5fa,	// (0x0005dedb) call_muted_g

0x9e86,	// (0x00058767) main_mup2_pane

0x4bfa,	// (0x000534db) main_mup2_pane_g1_ParamLimits

0x4bfa,	// (0x000534db) main_mup2_pane_g1

0x4c06,	// (0x000534e7) main_mup2_pane_g2_ParamLimits

0x4c06,	// (0x000534e7) main_mup2_pane_g2

0xa7fc,	// (0x000590dd) main_mup_pane_g13_cp1

0xa804,	// (0x000590e5) mup_volume_pane_cp1

0x4c24,	// (0x00053505) main_mup2_pane_g4_ParamLimits

0x4c24,	// (0x00053505) main_mup2_pane_g4

0x4c36,	// (0x00053517) main_mup2_pane_g5_ParamLimits

0x4c36,	// (0x00053517) main_mup2_pane_g5

0x4c48,	// (0x00053529) main_mup2_pane_g6_ParamLimits

0x4c48,	// (0x00053529) main_mup2_pane_g6

0x4c5a,	// (0x0005353b) main_mup2_pane_g7_ParamLimits

0x4c5a,	// (0x0005353b) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0005df40) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0005df40) main_mup2_pane_g

0x4c72,	// (0x00053553) main_mup2_pane_t1_ParamLimits

0x4c72,	// (0x00053553) main_mup2_pane_t1

0x4c88,	// (0x00053569) main_mup2_pane_t2_ParamLimits

0x4c88,	// (0x00053569) main_mup2_pane_t2

0x4c9e,	// (0x0005357f) main_mup2_pane_t3_ParamLimits

0x4c9e,	// (0x0005357f) main_mup2_pane_t3

0x4cb4,	// (0x00053595) main_mup2_pane_t4_ParamLimits

0x4cb4,	// (0x00053595) main_mup2_pane_t4

0x4ccc,	// (0x000535ad) main_mup2_pane_t5_ParamLimits

0x4ccc,	// (0x000535ad) main_mup2_pane_t5

0x4ce4,	// (0x000535c5) main_mup2_pane_t6_ParamLimits

0x4ce4,	// (0x000535c5) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0005df4f) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0005df4f) main_mup2_pane_t

0x4d14,	// (0x000535f5) mup2_visualizer_pane_ParamLimits

0x4d14,	// (0x000535f5) mup2_visualizer_pane

0x4d42,	// (0x00053623) mup_progress_pane_cp_ParamLimits

0x4d42,	// (0x00053623) mup_progress_pane_cp

0xa7e7,	// (0x000590c8) mup_volume_pane_cp_ParamLimits

0xa7e7,	// (0x000590c8) mup_volume_pane_cp

0x4d58,	// (0x00053639) mup2_visualizer_pane_g1_ParamLimits

0x4d58,	// (0x00053639) mup2_visualizer_pane_g1

0xc8b0,	// (0x0005b191) mup2_visualizer_pane_g2_ParamLimits

0xc8b0,	// (0x0005b191) mup2_visualizer_pane_g2

0x4d6f,	// (0x00053650) mup2_visualizer_pane_g3_ParamLimits

0x4d6f,	// (0x00053650) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0005df5c) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0005df5c) mup2_visualizer_pane_g

0xb690,	// (0x00059f71) aid_size_cell_fmradio

0x41f2,	// (0x00052ad3) aid_height_parent_landcape

0xa592,	// (0x00058e73) wml_content_pane_cp

0xa59a,	// (0x00058e7b) wml_tabs_pane

0xa5a3,	// (0x00058e84) popup_wml_miniature_window

0xa5ab,	// (0x00058e8c) scroll_pane_cp021

0xa5bf,	// (0x00058ea0) wml_content_pane_comp8

0x9e86,	// (0x00058767) bg_popup_sub_pane_cp05

0xc8ce,	// (0x0005b1af) popup_wml_miniature_window_g1

0xc8d6,	// (0x0005b1b7) wml_miniature_view_pane

0x4d7b,	// (0x0005365c) aid_size_wml_view

0x4d83,	// (0x00053664) wml_miniature_view_pane_g1

0x4d8c,	// (0x0005366d) wml_miniature_view_pane_g2

0x4d95,	// (0x00053676) wml_miniature_view_pane_g3

0x4d9d,	// (0x0005367e) wml_miniature_view_pane_g4

0x4da5,	// (0x00053686) wml_miniature_view_pane_g5

0x4dad,	// (0x0005368e) wml_miniature_view_pane_g6

0x4db5,	// (0x00053696) wml_miniature_view_pane_g7

0x4dbd,	// (0x0005369e) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0005df63) wml_miniature_view_pane_g

0xc8de,	// (0x0005b1bf) background_graphic_ParamLimits

0xc8de,	// (0x0005b1bf) background_graphic

0xc8ea,	// (0x0005b1cb) wml_tabs_2_pane

0xc8f3,	// (0x0005b1d4) wml_tabs_3_pane_ParamLimits

0xc8f3,	// (0x0005b1d4) wml_tabs_3_pane

0xc905,	// (0x0005b1e6) wml_tabs_4_pane_ParamLimits

0xc905,	// (0x0005b1e6) wml_tabs_4_pane

0xc91b,	// (0x0005b1fc) wml_tabs_5_pane_ParamLimits

0xc91b,	// (0x0005b1fc) wml_tabs_5_pane

0xc935,	// (0x0005b216) wml_tabs_pane_g2_ParamLimits

0xc935,	// (0x0005b216) wml_tabs_pane_g2

0xc949,	// (0x0005b22a) wml_tabs_pane_g3_ParamLimits

0xc949,	// (0x0005b22a) wml_tabs_pane_g3

0x4dc5,	// (0x000536a6) wml_tabs_2_active_pane_ParamLimits

0x4dc5,	// (0x000536a6) wml_tabs_2_active_pane

0x4dd9,	// (0x000536ba) wml_tabs_2_passive_pane_ParamLimits

0x4dd9,	// (0x000536ba) wml_tabs_2_passive_pane

0x4ded,	// (0x000536ce) wml_tabs_3_active_pane_cp_ParamLimits

0x4ded,	// (0x000536ce) wml_tabs_3_active_pane_cp

0x4e02,	// (0x000536e3) wml_tabs_3_passive_pane_ParamLimits

0x4e02,	// (0x000536e3) wml_tabs_3_passive_pane

0x4e15,	// (0x000536f6) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e15,	// (0x000536f6) wml_tabs_3_passive_pane_cp

0x4e2c,	// (0x0005370d) tabs_4_active_pane

0x4e34,	// (0x00053715) tabs_4_passive_pane

0x4e3e,	// (0x0005371f) tabs_4_passive_pane_cp

0x4e46,	// (0x00053727) tabs_4_passive_pane_cp2

0x3f06,	// (0x000527e7) aid_height_text

0x3561,	// (0x00051e42) mup_volume_cont_pane_ParamLimits

0x3561,	// (0x00051e42) mup_volume_cont_pane

0x0d8f,	// (0x0004f670) aid_size_cell_pinb

0x0d99,	// (0x0004f67a) aid_size_list_pinb

0x4d2e,	// (0x0005360f) mup2_volume_cont_pane_ParamLimits

0x4d2e,	// (0x0005360f) mup2_volume_cont_pane

0xa7d3,	// (0x000590b4) mup2_volume_cont_pane_g1_ParamLimits

0xa7d3,	// (0x000590b4) mup2_volume_cont_pane_g1

0x0a3f,	// (0x0004f320) aid_size_cell_touch_ParamLimits

0x0a3f,	// (0x0004f320) aid_size_cell_touch

0x0c7f,	// (0x0004f560) touch_pane_ParamLimits

0x0c7f,	// (0x0004f560) touch_pane

0x9a0c,	// (0x000582ed) main_rss2_pane

0xc966,	// (0x0005b247) listscroll_rss2_pane

0xc96f,	// (0x0005b250) rss2_navigation_pane

0xc977,	// (0x0005b258) list_rss2_pane

0xb256,	// (0x00059b37) scroll_pane_cp22

0xc97f,	// (0x0005b260) rss2_navigation_pane_g1

0xc988,	// (0x0005b269) rss2_navigation_pane_g2

0xc990,	// (0x0005b271) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0005df74) rss2_navigation_pane_g

0xc998,	// (0x0005b279) rss2_navigation_pane_t1

0x4e50,	// (0x00053731) rss2_list_single_pane_ParamLimits

0x4e50,	// (0x00053731) rss2_list_single_pane

0xc9a6,	// (0x0005b287) rss2_list_single_pane_t2

0xc9b4,	// (0x0005b295) rss2_list_single_pane_t3_ParamLimits

0xc9b4,	// (0x0005b295) rss2_list_single_pane_t3

0xc9d1,	// (0x0005b2b2) rss2_list_single_pane_t4

0x2e26,	// (0x00051707) smil_status_pane_g1

0x9a65,	// (0x00058346) main_image2_pane_ParamLimits

0x9a65,	// (0x00058346) main_image2_pane

0x4906,	// (0x000531e7) main_camera2_pane_g9_ParamLimits

0x4906,	// (0x000531e7) main_camera2_pane_g9

0x4a22,	// (0x00053303) main_camera2_pane_t5_ParamLimits

0x4a22,	// (0x00053303) main_camera2_pane_t5

0xa7a8,	// (0x00059089) main_camera2_pane_t6_ParamLimits

0xa7a8,	// (0x00059089) main_camera2_pane_t6

0x4e66,	// (0x00053747) main_image2_pane_g1_ParamLimits

0x4e66,	// (0x00053747) main_image2_pane_g1

0x3c20,	// (0x00052501) smil2_video_pane_ParamLimits

0x3c20,	// (0x00052501) smil2_video_pane

0x0a77,	// (0x0004f358) aid_zoom_text_primary_cp

0x9a5b,	// (0x0005833c) popup_preview_fixed_window

0xa4fb,	// (0x00058ddc) im_reading_pane_g1

0x47d8,	// (0x000530b9) cams2_bc_adjust_pane_cp_ParamLimits

0x47d8,	// (0x000530b9) cams2_bc_adjust_pane_cp

0x4a48,	// (0x00053329) cams2_bc_adjust_pane_ParamLimits

0x4a48,	// (0x00053329) cams2_bc_adjust_pane

0xa80c,	// (0x000590ed) cams2_bc_adjust_pane_g1

0xa814,	// (0x000590f5) cams2_slider_pane

0xa81d,	// (0x000590fe) cams2_slider_pane_g1

0xa826,	// (0x00059107) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0005df7b) cams2_slider_pane_g

0x0e89,	// (0x0004f76a) calc_display_pane_ParamLimits

0x0eb1,	// (0x0004f792) calc_paper_pane_ParamLimits

0x0ed4,	// (0x0004f7b5) grid_calc_pane_ParamLimits

0xa713,	// (0x00058ff4) popup_clock_digital_window_t1_ParamLimits

0xb62d,	// (0x00059f0e) main_image_pane_t1

0x0e6b,	// (0x0004f74c) aid_size_cell_calc_ParamLimits

0x0e6b,	// (0x0004f74c) aid_size_cell_calc

0x4238,	// (0x00052b19) popup_blid_sat_info2_window_ParamLimits

0x4238,	// (0x00052b19) popup_blid_sat_info2_window

0xc9e7,	// (0x0005b2c8) aid_size_cell_blid

0xc9ef,	// (0x0005b2d0) bg_popup_window_pane_cp07

0xca12,	// (0x0005b2f3) grid_popup_blid_pane

0xca1c,	// (0x0005b2fd) heading_pane_cp05_ParamLimits

0xca1c,	// (0x0005b2fd) heading_pane_cp05

0xcae6,	// (0x0005b3c7) cell_popup_blid_pane_ParamLimits

0xcae6,	// (0x0005b3c7) cell_popup_blid_pane

0xcb10,	// (0x0005b3f1) cell_popup_blid_pane_g1

0xcb18,	// (0x0005b3f9) cell_popup_blid_pane_t1

0x4cfe,	// (0x000535df) mup2_indicator_pane_ParamLimits

0x4cfe,	// (0x000535df) mup2_indicator_pane

0xa3f4,	// (0x00058cd5) mup2_visualizer_osc_pane

0xc8bc,	// (0x0005b19d) mup2_visualizer_spec_pane_ParamLimits

0xc8bc,	// (0x0005b19d) mup2_visualizer_spec_pane

0x4e7c,	// (0x0005375d) mup2_spec_half_pane

0x4e85,	// (0x00053766) mup2_spec_half_pane_cp

0x4e8d,	// (0x0005376e) mup2_spec_bar_pane_ParamLimits

0x4e8d,	// (0x0005376e) mup2_spec_bar_pane

0xc85d,	// (0x0005b13e) mup2_spec_bar_pane_g1

0xc867,	// (0x0005b148) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005deee) mup2_spec_bar_pane_g

0x4ead,	// (0x0005378e) mup2_osc_middle_pane

0xc879,	// (0x0005b15a) mup2_visualizer_osc_pane_g1

0x9a93,	// (0x00058374) popup_number_entry_window_t1_ParamLimits

0x9aa6,	// (0x00058387) popup_number_entry_window_t2_ParamLimits

0x9ab8,	// (0x00058399) popup_number_entry_window_t3_ParamLimits

0x0cd1,	// (0x0004f5b2) popup_number_entry_window_t5_ParamLimits

0x0cd1,	// (0x0004f5b2) popup_number_entry_window_t5

0xf0ca,	// (0x0005d9ab) popup_number_entry_window_t_ParamLimits

0x9aca,	// (0x000583ab) text_title_cp2_ParamLimits

0xa752,	// (0x00059033) aid_hotspot_pointer_text2_pane

0xa778,	// (0x00059059) main_viewer_pane_g9_ParamLimits

0xa778,	// (0x00059059) main_viewer_pane_g9

0xad90,	// (0x00059671) cale_month_pane_t1_ParamLimits

0xadb6,	// (0x00059697) bg_cale_pane_ParamLimits

0xadce,	// (0x000596af) list_cale_pane_ParamLimits

0xaddf,	// (0x000596c0) listscroll_cale_day_pane_t1

0xadf1,	// (0x000596d2) scroll_pane_cp09_ParamLimits

0x3597,	// (0x00051e78) main_mup_eq_pane_t1_ParamLimits

0x3597,	// (0x00051e78) main_mup_eq_pane_t1

0x35b3,	// (0x00051e94) main_mup_eq_pane_t2_ParamLimits

0x35b3,	// (0x00051e94) main_mup_eq_pane_t2

0x35cf,	// (0x00051eb0) main_mup_eq_pane_t3_ParamLimits

0x35cf,	// (0x00051eb0) main_mup_eq_pane_t3

0x35ed,	// (0x00051ece) main_mup_eq_pane_t4_ParamLimits

0x35ed,	// (0x00051ece) main_mup_eq_pane_t4

0x360b,	// (0x00051eec) main_mup_eq_pane_t5_ParamLimits

0x360b,	// (0x00051eec) main_mup_eq_pane_t5

0x3629,	// (0x00051f0a) main_mup_eq_pane_t6_ParamLimits

0x3629,	// (0x00051f0a) main_mup_eq_pane_t6

0x363f,	// (0x00051f20) main_mup_eq_pane_t7_ParamLimits

0x363f,	// (0x00051f20) main_mup_eq_pane_t7

0x3655,	// (0x00051f36) main_mup_eq_pane_t8_ParamLimits

0x3655,	// (0x00051f36) main_mup_eq_pane_t8

0x366b,	// (0x00051f4c) main_mup_eq_pane_t9_ParamLimits

0x366b,	// (0x00051f4c) main_mup_eq_pane_t9

0x3687,	// (0x00051f68) main_mup_eq_pane_t10_ParamLimits

0x3687,	// (0x00051f68) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0005dd3d) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0005dd3d) main_mup_eq_pane_t

0x375c,	// (0x0005203d) mup_equalizer_pane_cp5_ParamLimits

0x3774,	// (0x00052055) mup_equalizer_pane_cp6_ParamLimits

0x378c,	// (0x0005206d) mup_equalizer_pane_cp7_ParamLimits

0x9a0c,	// (0x000582ed) main_gallery_pane

0xc882,	// (0x0005b163) smil2_volume_pane

0xc88a,	// (0x0005b16b) smil_status_volume_pane_g1_ParamLimits

0xc89d,	// (0x0005b17e) smil_status_volume_pane_g2_ParamLimits

0xa784,	// (0x00059065) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0005def3) smil_status_volume_pane_g_ParamLimits

0xc9ef,	// (0x0005b2d0) bg_popup_window_pane_cp07_ParamLimits

0xc9fd,	// (0x0005b2de) blid_firmament_pane

0x4eb6,	// (0x00053797) aid_size_cell_gallery_ParamLimits

0x4eb6,	// (0x00053797) aid_size_cell_gallery

0x4ecc,	// (0x000537ad) grid_gallery_pane_ParamLimits

0x4ecc,	// (0x000537ad) grid_gallery_pane

0x4ee7,	// (0x000537c8) cell_gallery_pane_ParamLimits

0x4ee7,	// (0x000537c8) cell_gallery_pane

0xcb26,	// (0x0005b407) bg_cell_gallery_focus_pane_ParamLimits

0xcb26,	// (0x0005b407) bg_cell_gallery_focus_pane

0xcb38,	// (0x0005b419) cell_gallery_pane_g1_ParamLimits

0xcb38,	// (0x0005b419) cell_gallery_pane_g1

0x4f32,	// (0x00053813) cell_gallery_pane_g2_ParamLimits

0x4f32,	// (0x00053813) cell_gallery_pane_g2

0x4f3f,	// (0x00053820) cell_gallery_pane_g3_ParamLimits

0x4f3f,	// (0x00053820) cell_gallery_pane_g3

0xcb44,	// (0x0005b425) cell_gallery_pane_g4_ParamLimits

0xcb44,	// (0x0005b425) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0005dfa1) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0005dfa1) cell_gallery_pane_g

0xcb50,	// (0x0005b431) bg_cell_gallery_focus_pane_g1

0xcb58,	// (0x0005b439) bg_cell_gallery_focus_pane_g2

0xcb60,	// (0x0005b441) bg_cell_gallery_focus_pane_g3

0xcb68,	// (0x0005b449) bg_cell_gallery_focus_pane_g4

0xcb70,	// (0x0005b451) bg_cell_gallery_focus_pane_g5

0xcb78,	// (0x0005b459) bg_cell_gallery_focus_pane_g6

0xcb80,	// (0x0005b461) bg_cell_gallery_focus_pane_g7

0xcb88,	// (0x0005b469) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0005dfaa) bg_cell_gallery_focus_pane_g

0xcb90,	// (0x0005b471) aid_firma_cardinal

0xcba4,	// (0x0005b485) blid_firmament_pane_t1

0xcbbb,	// (0x0005b49c) blid_firmament_pane_t2

0xcbd2,	// (0x0005b4b3) blid_firmament_pane_t3

0xcbe9,	// (0x0005b4ca) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0005dfbb) blid_firmament_pane_t

0xcc00,	// (0x0005b4e1) blid_sat_info_pane

0xcc10,	// (0x0005b4f1) blid_sat_info_pane_g1

0xcc10,	// (0x0005b4f1) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0005dfc4) blid_sat_info_pane_g

0xcc1a,	// (0x0005b4fb) blid_sat_info_pane_t1

0xcc28,	// (0x0005b509) smil2_volume_content_pane

0xcc31,	// (0x0005b512) smil2_volume_pane_g1

0xcc39,	// (0x0005b51a) smil2_volume_content_pane_g1

0xcc42,	// (0x0005b523) smil2_volume_content_pane_g2

0xcc4b,	// (0x0005b52c) smil2_volume_content_pane_g3

0xcc54,	// (0x0005b535) smil2_volume_content_pane_g4

0xcc5d,	// (0x0005b53e) smil2_volume_content_pane_g5

0xcc66,	// (0x0005b547) smil2_volume_content_pane_g6

0xcc6f,	// (0x0005b550) smil2_volume_content_pane_g7

0xcc78,	// (0x0005b559) smil2_volume_content_pane_g8

0xcc81,	// (0x0005b562) smil2_volume_content_pane_g9

0xcc8a,	// (0x0005b56b) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0005dfc9) smil2_volume_content_pane_g

0x1540,	// (0x0004fe21) cale_week_day_heading_pane_t1_ParamLimits

0x158a,	// (0x0004fe6b) cale_week_day_heading_pane_t2_ParamLimits

0x15d9,	// (0x0004feba) cale_week_day_heading_pane_t3_ParamLimits

0x1628,	// (0x0004ff09) cale_week_day_heading_pane_t4_ParamLimits

0x1677,	// (0x0004ff58) cale_week_day_heading_pane_t5_ParamLimits

0x16ca,	// (0x0004ffab) cale_week_day_heading_pane_t6_ParamLimits

0x1721,	// (0x00050002) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005dab2) cale_week_day_heading_pane_t_ParamLimits

0xa399,	// (0x00058c7a) bg_cale_side_pane_ParamLimits

0x176b,	// (0x0005004c) cale_week_time_pane_t1_ParamLimits

0x17a5,	// (0x00050086) cale_week_time_pane_t2_ParamLimits

0x17df,	// (0x000500c0) cale_week_time_pane_t3_ParamLimits

0x1819,	// (0x000500fa) cale_week_time_pane_t4_ParamLimits

0x1853,	// (0x00050134) cale_week_time_pane_t5_ParamLimits

0x188d,	// (0x0005016e) cale_week_time_pane_t6_ParamLimits

0x18c7,	// (0x000501a8) cale_week_time_pane_t7_ParamLimits

0x1901,	// (0x000501e2) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005dac1) cale_week_time_pane_t_ParamLimits

0x1941,	// (0x00050222) cell_cale_week_pane_g2_ParamLimits

0xa399,	// (0x00058c7a) bg_cale_side_pane_cp01_ParamLimits

0x2c35,	// (0x00051516) cale_month_week_pane_t1_ParamLimits

0x2c4e,	// (0x0005152f) cale_month_week_pane_t2_ParamLimits

0x2c67,	// (0x00051548) cale_month_week_pane_t3_ParamLimits

0x2c80,	// (0x00051561) cale_month_week_pane_t4_ParamLimits

0x2c99,	// (0x0005157a) cale_month_week_pane_t5_ParamLimits

0x2cb2,	// (0x00051593) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005db96) cale_month_week_pane_t_ParamLimits

0xa693,	// (0x00058f74) cell_cale_month_pane_g1_ParamLimits

0x9a0c,	// (0x000582ed) main_cale_event_viewer_pane

0x9a0c,	// (0x000582ed) listscroll_cale_event_viewer_pane

0xcc93,	// (0x0005b574) list_cale_ev_pane

0xcc9b,	// (0x0005b57c) scroll_pane_cp023

0x4f4c,	// (0x0005382d) field_cale_ev_pane_ParamLimits

0x4f4c,	// (0x0005382d) field_cale_ev_pane

0xcca7,	// (0x0005b588) field_cale_ev_content_pane_ParamLimits

0xcca7,	// (0x0005b588) field_cale_ev_content_pane

0xccb3,	// (0x0005b594) field_cale_ev_pane_g1_ParamLimits

0xccb3,	// (0x0005b594) field_cale_ev_pane_g1

0xccbf,	// (0x0005b5a0) field_cale_ev_pane_g2_ParamLimits

0xccbf,	// (0x0005b5a0) field_cale_ev_pane_g2

0xccd7,	// (0x0005b5b8) field_cale_ev_pane_g3_ParamLimits

0xccd7,	// (0x0005b5b8) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0005dfde) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0005dfde) field_cale_ev_pane_g

0xccef,	// (0x0005b5d0) field_cale_ev_pane_t1_ParamLimits

0xccef,	// (0x0005b5d0) field_cale_ev_pane_t1

0x4f70,	// (0x00053851) field_cale_ev_content_pane_t1_ParamLimits

0x4f70,	// (0x00053851) field_cale_ev_content_pane_t1

0xb501,	// (0x00059de2) bg_button_pane_cp01

0x1188,	// (0x0004fa69) listscroll_cale_week_pane_ParamLimits

0x119a,	// (0x0004fa7b) popup_toolbar_window_cp01

0xa365,	// (0x00058c46) listscroll_cale_week_pane_t1_ParamLimits

0x1188,	// (0x0004fa69) listscroll_cale_day_pane_ParamLimits

0x119a,	// (0x0004fa7b) popup_toolbar_window_cp02

0xaddf,	// (0x000596c0) listscroll_cale_day_pane_t1_ParamLimits

0x1188,	// (0x0004fa69) main_cale_month_pane_ParamLimits

0x44b8,	// (0x00052d99) popup_toolbar_window_cp03_ParamLimits

0x44b8,	// (0x00052d99) popup_toolbar_window_cp03

0x3ade,	// (0x000523bf) main_image_pane_g2_ParamLimits

0x3ade,	// (0x000523bf) main_image_pane_g2

0x3aef,	// (0x000523d0) main_image_pane_g3_ParamLimits

0x3aef,	// (0x000523d0) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0005ddcf) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0005ddcf) main_image_pane_g

0xb62d,	// (0x00059f0e) main_image_pane_t1_ParamLimits

0x3b00,	// (0x000523e1) main_image_pane_t2_ParamLimits

0x3b00,	// (0x000523e1) main_image_pane_t2

0x3b12,	// (0x000523f3) main_image_pane_t3_ParamLimits

0x3b12,	// (0x000523f3) main_image_pane_t3

0x3b3a,	// (0x0005241b) main_image_pane_t4_ParamLimits

0x3b3a,	// (0x0005241b) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0005ddd6) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0005ddd6) main_image_pane_t

0x3b5a,	// (0x0005243b) popup_image_details_window_cp01

0x3b64,	// (0x00052445) popup_toobar_trans_pane_cp01_ParamLimits

0x3b64,	// (0x00052445) popup_toobar_trans_pane_cp01

0x432b,	// (0x00052c0c) popup_image_details_window_ParamLimits

0x432b,	// (0x00052c0c) popup_image_details_window

0xc7e1,	// (0x0005b0c2) popup_image_focus_window

0x4792,	// (0x00053073) camera2_autofocus_pane_ParamLimits

0x4792,	// (0x00053073) camera2_autofocus_pane

0x9a0c,	// (0x000582ed) bg_popup_sub_pane_cp06

0xcd06,	// (0x0005b5e7) popup_image_focus_window_g1

0xcd0e,	// (0x0005b5ef) popup_image_focus_window_g2

0xcd16,	// (0x0005b5f7) popup_image_focus_window_g3

0xcd1e,	// (0x0005b5ff) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0005dfe5) popup_image_focus_window_g

0xcd26,	// (0x0005b607) popup_image_focus_window_t1

0xcd34,	// (0x0005b615) popup_image_focus_window_t2

0xcd44,	// (0x0005b625) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0005dfee) popup_image_focus_window_t

0xcd52,	// (0x0005b633) camera2_autofocus_pane_g1

0x9a65,	// (0x00058346) bg_tb_trans_pane_cp01

0xcd60,	// (0x0005b641) popup_image_details_window_g1

0xcd73,	// (0x0005b654) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0005e000) popup_image_details_window_g

0xcd9c,	// (0x0005b67d) popup_image_details_window_t1

0xcdae,	// (0x0005b68f) popup_image_details_window_t2

0xcdc7,	// (0x0005b6a8) popup_image_details_window_t3

0xcddb,	// (0x0005b6bc) popup_image_details_window_t4

0xcdf6,	// (0x0005b6d7) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0005e007) popup_image_details_window_t

0xa19a,	// (0x00058a7b) bg_calc_paper_pane_ParamLimits

0x9a0c,	// (0x000582ed) grid_highlight_pane_cp013

0xa1ae,	// (0x00058a8f) list_calc_pane_ParamLimits

0xa1c0,	// (0x00058aa1) scroll_pane_cp024

0xa1c8,	// (0x00058aa9) bg_calc_display_pane_ParamLimits

0x0fd4,	// (0x0004f8b5) calc_display_pane_t1_ParamLimits

0x0fe6,	// (0x0004f8c7) calc_display_pane_t2_ParamLimits

0xa1d4,	// (0x00058ab5) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005da32) calc_display_pane_t_ParamLimits

0x10af,	// (0x0004f990) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005da4f) cell_calc_pane_g

0x10b8,	// (0x0004f999) cell_calc_pane_t1

0xa24b,	// (0x00058b2c) grid_highlight_pane_cp02_ParamLimits

0xa261,	// (0x00058b42) toolbar_button_pane_cp01_ParamLimits

0xa261,	// (0x00058b42) toolbar_button_pane_cp01

0xb672,	// (0x00059f53) temp_image_control_pane_ParamLimits

0xb672,	// (0x00059f53) temp_image_control_pane

0x9a65,	// (0x00058346) main_mp3_pane

0xce10,	// (0x0005b6f1) temp_image_control_pane_g1_ParamLimits

0xce10,	// (0x0005b6f1) temp_image_control_pane_g1

0xce1e,	// (0x0005b6ff) temp_image_control_pane_g2_ParamLimits

0xce1e,	// (0x0005b6ff) temp_image_control_pane_g2

0xce30,	// (0x0005b711) temp_image_control_pane_g3_ParamLimits

0xce30,	// (0x0005b711) temp_image_control_pane_g3

0x4fc1,	// (0x000538a2) temp_image_control_pane_g4_ParamLimits

0x4fc1,	// (0x000538a2) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0005e012) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0005e012) temp_image_control_pane_g

0xce10,	// (0x0005b6f1) main_mp3_pane_g1

0x4fd4,	// (0x000538b5) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0005e01b) main_mp3_pane_g

0xce73,	// (0x0005b754) main_mp3_pane_t1

0xa406,	// (0x00058ce7) main_camera_pane_g8_ParamLimits

0xa406,	// (0x00058ce7) main_camera_pane_g8

0x1c68,	// (0x00050549) main_video_pane_g7_ParamLimits

0x1c68,	// (0x00050549) main_video_pane_g7

0xa7c1,	// (0x000590a2) main_camera2_pane_t7_ParamLimits

0xa7c1,	// (0x000590a2) main_camera2_pane_t7

0xa552,	// (0x00058e33) scroll_pane_cp025_ParamLimits

0xa552,	// (0x00058e33) scroll_pane_cp025

0xa566,	// (0x00058e47) scroll_pane_cp026_ParamLimits

0xa566,	// (0x00058e47) scroll_pane_cp026

0xa575,	// (0x00058e56) wml_content_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_touch_calib_pane

0x50a6,	// (0x00053987) main_touch_calib_pane_g1

0x50b8,	// (0x00053999) main_touch_calib_pane_g2

0x50ca,	// (0x000539ab) main_touch_calib_pane_g3

0x50dc,	// (0x000539bd) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0005e039) main_touch_calib_pane_g

0x50ee,	// (0x000539cf) main_touch_calib_pane_t1

0x5108,	// (0x000539e9) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0005e042) main_touch_calib_pane_t

0xb2d1,	// (0x00059bb2) mup_progress_pane_cp02

0xb2f0,	// (0x00059bd1) navi_pane_g1

0xb352,	// (0x00059c33) navi_pane_mp_t3

0x9a65,	// (0x00058346) main_mp3_pane_ParamLimits

0x44fa,	// (0x00052ddb) navi_pane_ParamLimits

0xce10,	// (0x0005b6f1) main_mp3_pane_g1_ParamLimits

0x4fd4,	// (0x000538b5) main_mp3_pane_g2_ParamLimits

0x4fe0,	// (0x000538c1) main_mp3_pane_g3_ParamLimits

0x4fe0,	// (0x000538c1) main_mp3_pane_g3

0x4fee,	// (0x000538cf) main_mp3_pane_g4_ParamLimits

0x4fee,	// (0x000538cf) main_mp3_pane_g4

0xce40,	// (0x0005b721) main_mp3_pane_g5_ParamLimits

0xce40,	// (0x0005b721) main_mp3_pane_g5

0xce4e,	// (0x0005b72f) main_mp3_pane_g6_ParamLimits

0xce4e,	// (0x0005b72f) main_mp3_pane_g6

0xce5b,	// (0x0005b73c) main_mp3_pane_g7_ParamLimits

0xce5b,	// (0x0005b73c) main_mp3_pane_g7

0xce67,	// (0x0005b748) main_mp3_pane_g8_ParamLimits

0xce67,	// (0x0005b748) main_mp3_pane_g8

0xf73a,	// (0x0005e01b) main_mp3_pane_g_ParamLimits

0x4ffa,	// (0x000538db) main_mp3_pane_t2

0x5008,	// (0x000538e9) main_mp3_pane_t3

0xce81,	// (0x0005b762) main_mp3_pane_t4

0xce8f,	// (0x0005b770) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0005e02c) main_mp3_pane_t

0xce9d,	// (0x0005b77e) mup_progress_pane_cp01

0x0a77,	// (0x0004f358) aid_zoom_text_secondary2

0xcc93,	// (0x0005b574) list_cale_ev2_pane

0xcc9b,	// (0x0005b57c) scroll_pane_cp023_ParamLimits

0x5162,	// (0x00053a43) field_cale_ev2_pane_ParamLimits

0x5162,	// (0x00053a43) field_cale_ev2_pane

0xfd86,	// (0x0004e667) field_cale_ev2_pane_g1_ParamLimits

0xfd86,	// (0x0004e667) field_cale_ev2_pane_g1

0xfd92,	// (0x0004e673) field_cale_ev2_pane_g2_ParamLimits

0xfd92,	// (0x0004e673) field_cale_ev2_pane_g2

0xfdaa,	// (0x0004e68b) field_cale_ev2_pane_g3_ParamLimits

0xfdaa,	// (0x0004e68b) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0005e04d) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0005e04d) field_cale_ev2_pane_g

0xfdc2,	// (0x0004e6a3) field_cale_ev2_pane_t1_ParamLimits

0xfdc2,	// (0x0004e6a3) field_cale_ev2_pane_t1

0xfdd9,	// (0x0004e6ba) field_cale_ev2_pane_t2_ParamLimits

0xfdd9,	// (0x0004e6ba) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0005e056) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0005e056) field_cale_ev2_pane_t

0x397b,	// (0x0005225c) main_postcard_pane_g5_ParamLimits

0x397b,	// (0x0005225c) main_postcard_pane_g5

0x3991,	// (0x00052272) main_postcard_pane_g6_ParamLimits

0x3991,	// (0x00052272) main_postcard_pane_g6

0x1a14,	// (0x000502f5) camera2_autofocus_pane_cp_ParamLimits

0x1a14,	// (0x000502f5) camera2_autofocus_pane_cp

0x9a65,	// (0x00058346) main_mup3_pane

0x51b2,	// (0x00053a93) main_mup3_pane_g1_ParamLimits

0x51b2,	// (0x00053a93) main_mup3_pane_g1

0x51d4,	// (0x00053ab5) main_mup3_pane_g2_ParamLimits

0x51d4,	// (0x00053ab5) main_mup3_pane_g2

0x5255,	// (0x00053b36) main_mup3_pane_g3_ParamLimits

0x5255,	// (0x00053b36) main_mup3_pane_g3

0x529d,	// (0x00053b7e) main_mup3_pane_g4_ParamLimits

0x529d,	// (0x00053b7e) main_mup3_pane_g4

0x52e3,	// (0x00053bc4) main_mup3_pane_g5_ParamLimits

0x52e3,	// (0x00053bc4) main_mup3_pane_g5

0x532b,	// (0x00053c0c) main_mup3_pane_g6_ParamLimits

0x532b,	// (0x00053c0c) main_mup3_pane_g6

0xcea5,	// (0x0005b786) main_mup3_pane_g7_ParamLimits

0xcea5,	// (0x0005b786) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0005e066) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0005e066) main_mup3_pane_g

0x53ab,	// (0x00053c8c) main_mup3_pane_t1_ParamLimits

0x53ab,	// (0x00053c8c) main_mup3_pane_t1

0x5419,	// (0x00053cfa) main_mup3_pane_t2_ParamLimits

0x5419,	// (0x00053cfa) main_mup3_pane_t2

0x54ef,	// (0x00053dd0) main_mup3_pane_t4_ParamLimits

0x54ef,	// (0x00053dd0) main_mup3_pane_t4

0x554d,	// (0x00053e2e) main_mup3_pane_t5_ParamLimits

0x554d,	// (0x00053e2e) main_mup3_pane_t5

0x5607,	// (0x00053ee8) main_mup3_pane_t6_ParamLimits

0x5607,	// (0x00053ee8) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0005e077) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0005e077) main_mup3_pane_t

0x56bf,	// (0x00053fa0) mup3_progress_pane_ParamLimits

0x56bf,	// (0x00053fa0) mup3_progress_pane

0x5751,	// (0x00054032) popup_mup3_control_window_ParamLimits

0x5751,	// (0x00054032) popup_mup3_control_window

0xceb3,	// (0x0005b794) popup_mup3_text_window

0x5787,	// (0x00054068) mup3_progress_pane_t1

0x57a5,	// (0x00054086) mup3_progress_pane_t2

0xcebb,	// (0x0005b79c) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0005e084) mup3_progress_pane_t

0xced8,	// (0x0005b7b9) mup_progress_pane_cp03

0x9a0c,	// (0x000582ed) bg_tb_trans_pane_cp04

0x57c3,	// (0x000540a4) mup3_volume_pane

0x57cb,	// (0x000540ac) popup_mup3_control_window_g1

0x57d4,	// (0x000540b5) mup3_volume_pane_g1

0x57dd,	// (0x000540be) mup3_volume_pane_g2

0x57e6,	// (0x000540c7) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0005e08b) mup3_volume_pane_g

0x9a0c,	// (0x000582ed) bg_tb_trans_pane_cp03

0xcee8,	// (0x0005b7c9) popup_mup3_text_window_g1

0xcef0,	// (0x0005b7d1) popup_mup3_text_window_t1

0xa222,	// (0x00058b03) list_calc_item_pane_g1_ParamLimits

0xc95d,	// (0x0005b23e) mup_volume_pane_cp_g1

0x5122,	// (0x00053a03) main_touch_calib_pane_t3

0x5136,	// (0x00053a17) main_touch_calib_pane_t4

0x514c,	// (0x00053a2d) main_touch_calib_pane_t5

0x9a16,	// (0x000582f7) aid_cell_size_toolbar2

0x9a1e,	// (0x000582ff) aid_popup3_width_pane

0x0a6f,	// (0x0004f350) aid_zoom_text_msg_primary

0x19f1,	// (0x000502d2) vorec_t7

0xa1e6,	// (0x00058ac7) bg_calc_paper_pane_g1_ParamLimits

0xa1f2,	// (0x00058ad3) bg_calc_paper_pane_g2_ParamLimits

0xa1fe,	// (0x00058adf) bg_calc_paper_pane_g3_ParamLimits

0xa20a,	// (0x00058aeb) bg_calc_paper_pane_g4_ParamLimits

0xa216,	// (0x00058af7) bg_calc_paper_pane_g5_ParamLimits

0x1035,	// (0x0004f916) bg_calc_paper_pane_g6_ParamLimits

0x1048,	// (0x0004f929) bg_calc_paper_pane_g7_ParamLimits

0x105b,	// (0x0004f93c) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005da39) bg_calc_paper_pane_g_ParamLimits

0x106c,	// (0x0004f94d) calc_bg_paper_pane_g9_ParamLimits

0x1b76,	// (0x00050457) image_qvga_pane_ParamLimits

0x1b76,	// (0x00050457) image_qvga_pane

0xa0e1,	// (0x000589c2) bg_popup_sub_pane_cp04_ParamLimits

0xb5a9,	// (0x00059e8a) popup_mup_playback_window_g1_ParamLimits

0xb5b5,	// (0x00059e96) popup_mup_playback_window_t1_ParamLimits

0xb5ca,	// (0x00059eab) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0005ddca) popup_mup_playback_window_t_ParamLimits

0x4c16,	// (0x000534f7) main_mup2_pane_g3_ParamLimits

0x4c16,	// (0x000534f7) main_mup2_pane_g3

0x1e89,	// (0x0005076a) popup_toolbar_window_cp04

0xb9c5,	// (0x0005a2a6) popup_call2_audio_second_window_g3_ParamLimits

0xb9c5,	// (0x0005a2a6) popup_call2_audio_second_window_g3

0xbdcf,	// (0x0005a6b0) popup_call2_audio_first_window_g4_ParamLimits

0xbdcf,	// (0x0005a6b0) popup_call2_audio_first_window_g4

0xc44e,	// (0x0005ad2f) popup_call2_audio_in_window_g4_ParamLimits

0xc44e,	// (0x0005ad2f) popup_call2_audio_in_window_g4

0x3ac0,	// (0x000523a1) aid_area_sk_bg_cut_ParamLimits

0x3ac0,	// (0x000523a1) aid_area_sk_bg_cut

0xb5df,	// (0x00059ec0) aid_area_sk_bg_cut_2_ParamLimits

0xb5df,	// (0x00059ec0) aid_area_sk_bg_cut_2

0x4f22,	// (0x00053803) aid_placing_details_win

0x4f2a,	// (0x0005380b) aid_placing_details_win_2

0xcd52,	// (0x0005b633) camera2_autofocus_pane_g1_ParamLimits

0x0c18,	// (0x0004f4f9) popup_fixed_preview_cale_window_ParamLimits

0x0c18,	// (0x0004f4f9) popup_fixed_preview_cale_window

0xb399,	// (0x00059c7a) navi_slider_pane_g3

0xb3a2,	// (0x00059c83) navi_slider_pane_g4

0xb3ab,	// (0x00059c8c) navi_slider_pane_g5

0xb399,	// (0x00059c7a) navi_slider_pane_g6

0xa739,	// (0x0005901a) navi_slider_pane_g7

0xb4ce,	// (0x00059daf) mup_scale_pane_g3

0xb4d7,	// (0x00059db8) mup_scale_pane_g4

0xb4e0,	// (0x00059dc1) mup_scale_pane_g5

0x37a4,	// (0x00052085) mup_scale_pane_g6

0x37ad,	// (0x0005208e) mup_scale_pane_g7

0xb399,	// (0x00059c7a) cams2_slider_pane_g3

0xc9df,	// (0x0005b2c0) cams2_slider_pane_g4

0xa82f,	// (0x00059110) cams2_slider_pane_g5

0xb399,	// (0x00059c7a) cams2_slider_pane_g6

0xa837,	// (0x00059118) cams2_slider_pane_g7

0xcc10,	// (0x0005b4f1) camera2_autofocus_pane_cp_g1

0xc7b3,	// (0x0005b094) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7b3,	// (0x0005b094) bg_popup_preview_window_pane_cp02

0xcefe,	// (0x0005b7df) list_fp_cale_pane_ParamLimits

0xcefe,	// (0x0005b7df) list_fp_cale_pane

0xcf0a,	// (0x0005b7eb) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf0a,	// (0x0005b7eb) popup_fixed_preview_cale_window_t1

0x57ef,	// (0x000540d0) popup_fixed_preview_cale_window_t2_ParamLimits

0x57ef,	// (0x000540d0) popup_fixed_preview_cale_window_t2

0x5804,	// (0x000540e5) popup_fixed_preview_cale_window_t3_ParamLimits

0x5804,	// (0x000540e5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0005e092) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0005e092) popup_fixed_preview_cale_window_t

0x5819,	// (0x000540fa) list_single_fp_cale_pane_ParamLimits

0x5819,	// (0x000540fa) list_single_fp_cale_pane

0xcf28,	// (0x0005b809) list_single_fp_cale_pane_g1_ParamLimits

0xcf28,	// (0x0005b809) list_single_fp_cale_pane_g1

0xcf34,	// (0x0005b815) list_single_fp_cale_pane_g2_ParamLimits

0xcf34,	// (0x0005b815) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0005e099) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0005e099) list_single_fp_cale_pane_g

0xcf4d,	// (0x0005b82e) list_single_fp_cale_pane_t1_ParamLimits

0xcf4d,	// (0x0005b82e) list_single_fp_cale_pane_t1

0xcf5f,	// (0x0005b840) list_single_fp_cale_pane_t2_ParamLimits

0xcf5f,	// (0x0005b840) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0005e0a0) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0005e0a0) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a0c,	// (0x000582ed) main_dialer_pane

0x582e,	// (0x0005410f) aid_cell_size_keypad

0x5838,	// (0x00054119) dialer_ne_pane

0x5842,	// (0x00054123) grid_dialer_command_1_pane

0x584a,	// (0x0005412b) grid_dialer_command_2_pane

0x5852,	// (0x00054133) grid_dialer_keypad_pane

0x5864,	// (0x00054145) bg_popup_call_pane_cp06_ParamLimits

0x5864,	// (0x00054145) bg_popup_call_pane_cp06

0x5870,	// (0x00054151) dialer_ne_clear_pane_ParamLimits

0x5870,	// (0x00054151) dialer_ne_clear_pane

0xcf92,	// (0x0005b873) dialer_ne_pane_g1

0xcf9a,	// (0x0005b87b) dialer_ne_pane_t1_ParamLimits

0xcf9a,	// (0x0005b87b) dialer_ne_pane_t1

0x587c,	// (0x0005415d) dialer_ne_pane_t2_ParamLimits

0x587c,	// (0x0005415d) dialer_ne_pane_t2

0x58a6,	// (0x00054187) dialer_ne_pane_t3_ParamLimits

0x58a6,	// (0x00054187) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0005e0a5) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0005e0a5) dialer_ne_pane_t

0x58d6,	// (0x000541b7) dialer_ne_pane_t3_copy1_ParamLimits

0x58d6,	// (0x000541b7) dialer_ne_pane_t3_copy1

0x5905,	// (0x000541e6) cell_dialer_keypad_pane_ParamLimits

0x5905,	// (0x000541e6) cell_dialer_keypad_pane

0x591c,	// (0x000541fd) cell_dialer_command_1_pane_ParamLimits

0x591c,	// (0x000541fd) cell_dialer_command_1_pane

0x5932,	// (0x00054213) cell_dialer_command_2_pane_ParamLimits

0x5932,	// (0x00054213) cell_dialer_command_2_pane

0xcfac,	// (0x0005b88d) bg_button_pane_cp02_ParamLimits

0xcfac,	// (0x0005b88d) bg_button_pane_cp02

0x5941,	// (0x00054222) cell_dialer_keypad_pane_g1_ParamLimits

0x5941,	// (0x00054222) cell_dialer_keypad_pane_g1

0xcfac,	// (0x0005b88d) bg_button_pane_cp03_ParamLimits

0xcfac,	// (0x0005b88d) bg_button_pane_cp03

0x5956,	// (0x00054237) cell_dialer_command_1_pane_g1_ParamLimits

0x5956,	// (0x00054237) cell_dialer_command_1_pane_g1

0xcfb8,	// (0x0005b899) bg_button_pane_cp04

0x596a,	// (0x0005424b) cell_dialer_command_2_pane_g1

0xa3f4,	// (0x00058cd5) bg_button_pane_cp06

0xcfc0,	// (0x0005b8a1) dialer_ne_clear_pane_g1

0x3276,	// (0x00051b57) navi_pane_g2

0x32a4,	// (0x00051b85) navi_pane_g3

0x0002,

0xf3ec,	// (0x0005dccd) navi_pane_g

0x32cf,	// (0x00051bb0) navi_pane_mv_g2

0x32f6,	// (0x00051bd7) navi_pane_mv_g5

0x32fe,	// (0x00051bdf) navi_pane_mv_t1

0xa1c8,	// (0x00058aa9) main_clock2_pane

0x59b5,	// (0x00054296) main_clock2_list_pane_ParamLimits

0x59b5,	// (0x00054296) main_clock2_list_pane

0x59ed,	// (0x000542ce) main_clock2_pane_t1_ParamLimits

0x59ed,	// (0x000542ce) main_clock2_pane_t1

0x5a29,	// (0x0005430a) main_clock2_pane_t2_ParamLimits

0x5a29,	// (0x0005430a) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0005e0b1) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0005e0b1) main_clock2_pane_t

0x5ac9,	// (0x000543aa) popup_clock_analogue_window_cp03_ParamLimits

0x5ac9,	// (0x000543aa) popup_clock_analogue_window_cp03

0x5af0,	// (0x000543d1) popup_clock_digital_window_cp02_ParamLimits

0x5af0,	// (0x000543d1) popup_clock_digital_window_cp02

0x5b69,	// (0x0005444a) main_clock2_list_single_pane_ParamLimits

0x5b69,	// (0x0005444a) main_clock2_list_single_pane

0xa3f4,	// (0x00058cd5) list_highlight_pane_cp05

0xcffc,	// (0x0005b8dd) main_clock2_list_single_pane_t1

0x1e89,	// (0x0005076a) popup_toolbar_window_cp04_ParamLimits

0x4f91,	// (0x00053872) camera2_autofocus_pane_g2_ParamLimits

0x4f91,	// (0x00053872) camera2_autofocus_pane_g2

0x4f9d,	// (0x0005387e) camera2_autofocus_pane_g3_ParamLimits

0x4f9d,	// (0x0005387e) camera2_autofocus_pane_g3

0x4fa9,	// (0x0005388a) camera2_autofocus_pane_g4_ParamLimits

0x4fa9,	// (0x0005388a) camera2_autofocus_pane_g4

0x4fb5,	// (0x00053896) camera2_autofocus_pane_g5_ParamLimits

0x4fb5,	// (0x00053896) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0005dff5) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0005dff5) camera2_autofocus_pane_g

0x5192,	// (0x00053a73) camera2_autofocus_pane_cp_g2

0x519a,	// (0x00053a7b) camera2_autofocus_pane_cp_g3

0x51a2,	// (0x00053a83) camera2_autofocus_pane_cp_g4

0x51aa,	// (0x00053a8b) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0005e05b) camera2_autofocus_pane_cp_g

0x585c,	// (0x0005413d) popup_dialer_spcha_window

0x9a0c,	// (0x000582ed) bg_popup_sub_pane_cp07

0xd00a,	// (0x0005b8eb) list_spcha_pane

0xd012,	// (0x0005b8f3) list_single_spcha_pane_ParamLimits

0xd012,	// (0x0005b8f3) list_single_spcha_pane

0x9a0c,	// (0x000582ed) list_highlight_pane_cp06

0xd023,	// (0x0005b904) list_single_spcha_pane_t1

0xc1f8,	// (0x0005aad9) popup_call2_audio_out_window_g4_ParamLimits

0xc1f8,	// (0x0005aad9) popup_call2_audio_out_window_g4

0x9a0c,	// (0x000582ed) main_imed2_pane

0xc7eb,	// (0x0005b0cc) popup_imed_adjust2_window

0x4343,	// (0x00052c24) popup_imed_trans_window_ParamLimits

0x4343,	// (0x00052c24) popup_imed_trans_window

0xca48,	// (0x0005b329) popup_blid_sat_info2_window_t1

0xca56,	// (0x0005b337) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0005df8a) popup_blid_sat_info2_window_t

0x5c1f,	// (0x00054500) aid_size_cell_colour_35

0x5c3f,	// (0x00054520) aid_size_cell_colour_112

0x5c5f,	// (0x00054540) aid_size_cell_effect

0xc7bf,	// (0x0005b0a0) bg_tb_trans_pane_cp02

0xaef0,	// (0x000597d1) heading_imed_pane

0x5c7f,	// (0x00054560) listscroll_imed_pane

0xd031,	// (0x0005b912) heading_imed_pane_g1

0xd039,	// (0x0005b91a) heading_imed_pane_t1

0xd047,	// (0x0005b928) grid_imed_colour_35_pane_ParamLimits

0xd047,	// (0x0005b928) grid_imed_colour_35_pane

0x5c8b,	// (0x0005456c) grid_imed_effect_pane

0xd063,	// (0x0005b944) list_imed_aspect_pane

0x5ca0,	// (0x00054581) scroll_pane_cp027_ParamLimits

0x5ca0,	// (0x00054581) scroll_pane_cp027

0x5cb1,	// (0x00054592) cell_imed_effect_pane_ParamLimits

0x5cb1,	// (0x00054592) cell_imed_effect_pane

0xd06b,	// (0x0005b94c) cell_imed_colour_pane_ParamLimits

0xd06b,	// (0x0005b94c) cell_imed_colour_pane

0xd0b5,	// (0x0005b996) cell_imed_colour_pane_g1_ParamLimits

0xd0b5,	// (0x0005b996) cell_imed_colour_pane_g1

0xd0c6,	// (0x0005b9a7) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0c6,	// (0x0005b9a7) hgihlgiht_grid_pane_cp016

0x5cdc,	// (0x000545bd) cell_imed_effect_pane_g1

0x5ce4,	// (0x000545c5) grid_highlight_pane_cp017

0xd0d7,	// (0x0005b9b8) list_imed_single_pane_ParamLimits

0xd0d7,	// (0x0005b9b8) list_imed_single_pane

0x9a0c,	// (0x000582ed) list_highlight_pane_cp07

0xd0eb,	// (0x0005b9cc) list_imed_aspect_pane_comp1_t1

0xc7bf,	// (0x0005b0a0) bg_tb_trans_pane_cp05

0xd10d,	// (0x0005b9ee) popup_imed_adjust2_window_g1

0xd134,	// (0x0005ba15) popup_imed_adjust2_window_t1

0xd14c,	// (0x0005ba2d) slider_imed_adjust_pane

0xd160,	// (0x0005ba41) slider_imed_adjust_pane_g1

0xd170,	// (0x0005ba51) slider_imed_adjust_pane_g2

0xd180,	// (0x0005ba61) slider_imed_adjust_pane_g3

0xd191,	// (0x0005ba72) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0005e0ce) slider_imed_adjust_pane_g

0x5ced,	// (0x000545ce) aid_size_cell_clipart2

0x5cf9,	// (0x000545da) grid_imed_clipart_pane

0xd1a2,	// (0x0005ba83) scroll_pane_cp031

0x5d03,	// (0x000545e4) cell_imed_clipart_pane_ParamLimits

0x5d03,	// (0x000545e4) cell_imed_clipart_pane

0x5d20,	// (0x00054601) cell_imed_clipart_pane_g1

0x9a0c,	// (0x000582ed) grid_highlight_pane_cp014

0x59ca,	// (0x000542ab) main_clock2_pane_g1_ParamLimits

0x59ca,	// (0x000542ab) main_clock2_pane_g1

0x5b10,	// (0x000543f1) aid_call2_pane_cp10

0x5b22,	// (0x00054403) aid_call_pane_cp10

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g1

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g2

0x5b34,	// (0x00054415) popup_clock_analogue_window_cp10_g3

0x5b34,	// (0x00054415) popup_clock_analogue_window_cp10_g4

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0005e0bc) popup_clock_analogue_window_cp10_g

0x5b4a,	// (0x0005442b) popup_clock_analogue_window_cp10_t1

0x5b7b,	// (0x0005445c) clock_digital_number_pane_cp10_ParamLimits

0x5b7b,	// (0x0005445c) clock_digital_number_pane_cp10

0x5b95,	// (0x00054476) clock_digital_number_pane_cp11_ParamLimits

0x5b95,	// (0x00054476) clock_digital_number_pane_cp11

0x5baf,	// (0x00054490) clock_digital_number_pane_cp12_ParamLimits

0x5baf,	// (0x00054490) clock_digital_number_pane_cp12

0x5bc9,	// (0x000544aa) clock_digital_number_pane_cp13_ParamLimits

0x5bc9,	// (0x000544aa) clock_digital_number_pane_cp13

0x5be3,	// (0x000544c4) clock_digital_separator_pane_cp10_ParamLimits

0x5be3,	// (0x000544c4) clock_digital_separator_pane_cp10

0x5bfd,	// (0x000544de) popup_clock_digital_window_cp02_t1_ParamLimits

0x5bfd,	// (0x000544de) popup_clock_digital_window_cp02_t1

0xa0d9,	// (0x000589ba) clock_digital_number_pane_cp10_g1

0xa0d9,	// (0x000589ba) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0005e0d7) clock_digital_number_pane_cp10_g

0xa0d9,	// (0x000589ba) clock_digital_separator_pane_cp10_g1

0xa0d9,	// (0x000589ba) clock_digital_separator_pane_g2_cp10

0xb360,	// (0x00059c41) navi_pane_vded_g4

0xb369,	// (0x00059c4a) navi_pane_vded_g5

0xb372,	// (0x00059c53) navi_pane_vded_t1

0x9a0c,	// (0x000582ed) main_vded_pane

0x5d29,	// (0x0005460a) main_vded_pane_g1

0x5d35,	// (0x00054616) main_vded_pane_g2

0x5d41,	// (0x00054622) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0005e0dc) main_vded_pane_g

0x5d4d,	// (0x0005462e) main_vded_pane_t1

0x5d5b,	// (0x0005463c) main_vded_pane_t2

0x0001,

0xf802,	// (0x0005e0e3) main_vded_pane_t

0x5d69,	// (0x0005464a) vded_slider_pane

0x5d73,	// (0x00054654) vded_video_pane

0xd1aa,	// (0x0005ba8b) vded_video_pane_g1

0x5d7d,	// (0x0005465e) vded_video_pane_g2

0xcc10,	// (0x0005b4f1) vded_video_pane_g3

0x0002,

0xf807,	// (0x0005e0e8) vded_video_pane_g

0xd1b4,	// (0x0005ba95) vded_slider_pane_g1

0xc95d,	// (0x0005b23e) vded_slider_pane_g2

0xd1bd,	// (0x0005ba9e) vded_slider_pane_g3

0xd1c6,	// (0x0005baa7) vded_slider_pane_g4

0xd1cf,	// (0x0005bab0) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0005e0ef) vded_slider_pane_g

0x573b,	// (0x0005401c) mup3_rocker_pane_ParamLimits

0x573b,	// (0x0005401c) mup3_rocker_pane

0x5d86,	// (0x00054667) mup3_control_keys_pane_g1

0x5d8e,	// (0x0005466f) mup3_control_keys_pane_g2

0x5d96,	// (0x00054677) mup3_control_keys_pane_g3

0x5d9e,	// (0x0005467f) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0005e0fa) mup3_control_keys_pane_g

0x0c4f,	// (0x0004f530) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c4f,	// (0x0004f530) popup_toolbar2_fixed_window_cp01

0x5771,	// (0x00054052) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5771,	// (0x00054052) popup_toolbar2_fixed_window_cp02

0xbb37,	// (0x0005a418) popup_call2_audio_second_window_t4_ParamLimits

0xbb37,	// (0x0005a418) popup_call2_audio_second_window_t4

0xc065,	// (0x0005a946) popup_call2_audio_first_window_t6_ParamLimits

0xc065,	// (0x0005a946) popup_call2_audio_first_window_t6

0xc2fb,	// (0x0005abdc) popup_call2_audio_out_window_t6_ParamLimits

0xc2fb,	// (0x0005abdc) popup_call2_audio_out_window_t6

0x9a0c,	// (0x000582ed) main_vitu_pane

0x5dae,	// (0x0005468f) aid_size_cell_itu_ParamLimits

0x5dae,	// (0x0005468f) aid_size_cell_itu

0x9a65,	// (0x00058346) bg_popup_window_pane_cp08_ParamLimits

0x9a65,	// (0x00058346) bg_popup_window_pane_cp08

0x5dc4,	// (0x000546a5) field_vitu_entry_pane_ParamLimits

0x5dc4,	// (0x000546a5) field_vitu_entry_pane

0x5ddb,	// (0x000546bc) grid_vitu_function_pane_ParamLimits

0x5ddb,	// (0x000546bc) grid_vitu_function_pane

0x5df6,	// (0x000546d7) grid_vitu_itu_pane_ParamLimits

0x5df6,	// (0x000546d7) grid_vitu_itu_pane

0x5e14,	// (0x000546f5) cell_vitu_itu_pane_ParamLimits

0x5e14,	// (0x000546f5) cell_vitu_itu_pane

0x5e3a,	// (0x0005471b) cell_vitu_function_pane_ParamLimits

0x5e3a,	// (0x0005471b) cell_vitu_function_pane

0x9a65,	// (0x00058346) bg_popup_sub_pane_cp08_ParamLimits

0x9a65,	// (0x00058346) bg_popup_sub_pane_cp08

0x5e55,	// (0x00054736) field_vitu_entry_pane_t1_ParamLimits

0x5e55,	// (0x00054736) field_vitu_entry_pane_t1

0xd1f0,	// (0x0005bad1) field_vitu_entry_pane_t2_ParamLimits

0xd1f0,	// (0x0005bad1) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0005e108) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0005e108) field_vitu_entry_pane_t

0xd20d,	// (0x0005baee) bg_button_pane_cp05_ParamLimits

0xd20d,	// (0x0005baee) bg_button_pane_cp05

0x5e75,	// (0x00054756) cell_vitu_itu_pane_g1

0x5e8d,	// (0x0005476e) cell_vitu_itu_pane_t1_ParamLimits

0x5e8d,	// (0x0005476e) cell_vitu_itu_pane_t1

0x5e9f,	// (0x00054780) cell_vitu_itu_pane_t2_ParamLimits

0x5e9f,	// (0x00054780) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0005e10d) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0005e10d) cell_vitu_itu_pane_t

0xd21b,	// (0x0005bafc) bg_button_pane_cp07

0x5ed4,	// (0x000547b5) cell_vitu_function_pane_g1

0xa168,	// (0x00058a49) main_calc_pane_g1

0x0a63,	// (0x0004f344) aid_visual_content_pane

0x9a0c,	// (0x000582ed) main_vradio_pane

0x5edd,	// (0x000547be) main_vradio_pane_g1_ParamLimits

0x5edd,	// (0x000547be) main_vradio_pane_g1

0xd225,	// (0x0005bb06) main_vradio_pane_g2_ParamLimits

0xd225,	// (0x0005bb06) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0005e114) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0005e114) main_vradio_pane_g

0x5ef4,	// (0x000547d5) main_vradio_pane_t1_ParamLimits

0x5ef4,	// (0x000547d5) main_vradio_pane_t1

0x5f09,	// (0x000547ea) main_vradio_pane_t2_ParamLimits

0x5f09,	// (0x000547ea) main_vradio_pane_t2

0xd232,	// (0x0005bb13) main_vradio_pane_t3_ParamLimits

0xd232,	// (0x0005bb13) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0005e119) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0005e119) main_vradio_pane_t

0x5f1e,	// (0x000547ff) vradio_rocker_control_pane_ParamLimits

0x5f1e,	// (0x000547ff) vradio_rocker_control_pane

0x5f30,	// (0x00054811) vradio_station_info_pane_ParamLimits

0x5f30,	// (0x00054811) vradio_station_info_pane

0xd246,	// (0x0005bb27) vradio_frequency_info_pane_ParamLimits

0xd246,	// (0x0005bb27) vradio_frequency_info_pane

0xcc10,	// (0x0005b4f1) vradio_station_info_pane_g1

0xd255,	// (0x0005bb36) vradio_station_info_pane_t1_ParamLimits

0xd255,	// (0x0005bb36) vradio_station_info_pane_t1

0xd277,	// (0x0005bb58) vradio_station_info_pane_t2_ParamLimits

0xd277,	// (0x0005bb58) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0005e120) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0005e120) vradio_station_info_pane_t

0xd289,	// (0x0005bb6a) vradio_tuning_pane

0xd291,	// (0x0005bb72) vradio_rocker_control_pane_g1

0xd299,	// (0x0005bb7a) vradio_rocker_control_pane_g2

0xd2a1,	// (0x0005bb82) vradio_rocker_control_pane_g3

0xd2a9,	// (0x0005bb8a) vradio_rocker_control_pane_g4

0xd2b1,	// (0x0005bb92) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0005e125) vradio_rocker_control_pane_g

0x5f40,	// (0x00054821) vradio_frequency_info_pane_g1

0xd2b9,	// (0x0005bb9a) vradio_frequency_info_pane_t1_ParamLimits

0xd2b9,	// (0x0005bb9a) vradio_frequency_info_pane_t1

0x5f4a,	// (0x0005482b) vradio_tuning_pane_g1

0x5f55,	// (0x00054836) vradio_tuning_pane_t1

0x9a32,	// (0x00058313) area_side_right_pane_ParamLimits

0x9a32,	// (0x00058313) area_side_right_pane

0xc77a,	// (0x0005b05b) status_small_pane_g1

0xc782,	// (0x0005b063) status_small_pane_g2

0xc78b,	// (0x0005b06c) status_small_pane_g3

0xc794,	// (0x0005b075) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0005dee0) status_small_pane_g

0xc79d,	// (0x0005b07e) status_small_pane_t1

0x9a0c,	// (0x000582ed) main_video3_pane

0xd2cd,	// (0x0005bbae) cams_zoom_vslider_pane

0xd2d5,	// (0x0005bbb6) image3_wide_pane_ParamLimits

0xd2d5,	// (0x0005bbb6) image3_wide_pane

0xd2ef,	// (0x0005bbd0) image3_wide_small_pane

0xd30f,	// (0x0005bbf0) main_video3_pane_g1_ParamLimits

0xd30f,	// (0x0005bbf0) main_video3_pane_g1

0xd32b,	// (0x0005bc0c) main_video3_pane_g2_ParamLimits

0xd32b,	// (0x0005bc0c) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0005e130) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0005e130) main_video3_pane_g

0xd347,	// (0x0005bc28) main_video3_pane_t1_ParamLimits

0xd347,	// (0x0005bc28) main_video3_pane_t1

0xd372,	// (0x0005bc53) main_video3_pane_t2_ParamLimits

0xd372,	// (0x0005bc53) main_video3_pane_t2

0xd39f,	// (0x0005bc80) main_video3_pane_t3_ParamLimits

0xd39f,	// (0x0005bc80) main_video3_pane_t3

0x0002,

0xf854,	// (0x0005e135) main_video3_pane_t_ParamLimits

0xf854,	// (0x0005e135) main_video3_pane_t

0xd3cc,	// (0x0005bcad) cams_zoom_vslider_pane_g1

0xd3d5,	// (0x0005bcb6) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0005e13c) cams_zoom_vslider_pane_g

0xd3dd,	// (0x0005bcbe) small_slider_vertical_pane

0xcc10,	// (0x0005b4f1) small_slider_vertical_pane_g1

0xcc10,	// (0x0005b4f1) small_slider_vertical_pane_g2

0xd3e5,	// (0x0005bcc6) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0005e141) small_slider_vertical_pane_g

0x9a0c,	// (0x000582ed) main_hwr_training_pane

0xd3ee,	// (0x0005bccf) hwr_training_instruct_pane_ParamLimits

0xd3ee,	// (0x0005bccf) hwr_training_instruct_pane

0x5f64,	// (0x00054845) hwr_training_navi_pane_ParamLimits

0x5f64,	// (0x00054845) hwr_training_navi_pane

0x5f83,	// (0x00054864) hwr_training_write_pane_ParamLimits

0x5f83,	// (0x00054864) hwr_training_write_pane

0x9a0c,	// (0x000582ed) bg_frame_shadow_pane

0xd425,	// (0x0005bd06) hwr_training_write_pane_g1

0xd42d,	// (0x0005bd0e) hwr_training_write_pane_g2

0xd435,	// (0x0005bd16) hwr_training_write_pane_g3

0xd43d,	// (0x0005bd1e) hwr_training_write_pane_g4

0xd445,	// (0x0005bd26) hwr_training_write_pane_g5

0xd44d,	// (0x0005bd2e) hwr_training_write_pane_g6

0xd455,	// (0x0005bd36) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0005e148) hwr_training_write_pane_g

0xa840,	// (0x00059121) hwr_training_navi_pane_g1_ParamLimits

0xa840,	// (0x00059121) hwr_training_navi_pane_g1

0xa852,	// (0x00059133) hwr_training_navi_pane_g2_ParamLimits

0xa852,	// (0x00059133) hwr_training_navi_pane_g2

0xa864,	// (0x00059145) hwr_training_navi_pane_g3_ParamLimits

0xa864,	// (0x00059145) hwr_training_navi_pane_g3

0xa874,	// (0x00059155) hwr_training_navi_pane_g4_ParamLimits

0xa874,	// (0x00059155) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0005e157) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0005e157) hwr_training_navi_pane_g

0xa881,	// (0x00059162) hwr_training_navi_pane_t1

0x5fcb,	// (0x000548ac) list_single_hwr_training_instruct_pane_ParamLimits

0x5fcb,	// (0x000548ac) list_single_hwr_training_instruct_pane

0xd45d,	// (0x0005bd3e) list_single_hwr_training_instruct_pane_t1

0xcb50,	// (0x0005b431) bg_frame_shadow_pane_g1

0xd46c,	// (0x0005bd4d) bg_frame_shadow_pane_g2

0xd474,	// (0x0005bd55) bg_frame_shadow_pane_g3

0xd47c,	// (0x0005bd5d) bg_frame_shadow_pane_g4

0xd484,	// (0x0005bd65) bg_frame_shadow_pane_g5

0xd48c,	// (0x0005bd6d) bg_frame_shadow_pane_g6

0xd494,	// (0x0005bd75) bg_frame_shadow_pane_g7

0xa2c1,	// (0x00058ba2) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0005e162) bg_frame_shadow_pane_g

0x9a0c,	// (0x000582ed) main_video_tele_dialer_pane

0x5fe0,	// (0x000548c1) aid_size_cell_video_keypad_ParamLimits

0x5fe0,	// (0x000548c1) aid_size_cell_video_keypad

0x5ffa,	// (0x000548db) grid_video_dialer_keypad_pane_ParamLimits

0x5ffa,	// (0x000548db) grid_video_dialer_keypad_pane

0x6046,	// (0x00054927) video_down_pane_cp_ParamLimits

0x6046,	// (0x00054927) video_down_pane_cp

0x6076,	// (0x00054957) cell_video_dialer_keypad_pane_ParamLimits

0x6076,	// (0x00054957) cell_video_dialer_keypad_pane

0xd49c,	// (0x0005bd7d) bg_button_pane_cp08_ParamLimits

0xd49c,	// (0x0005bd7d) bg_button_pane_cp08

0x609a,	// (0x0005497b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x609a,	// (0x0005497b) cell_video_dialer_keypad_pane_g1

0x5725,	// (0x00054006) mup3_rocker2_pane_ParamLimits

0x5725,	// (0x00054006) mup3_rocker2_pane

0xcc10,	// (0x0005b4f1) mup3_rocker2_pane_g1

0x4210,	// (0x00052af1) main_dialer2_pane

0x9a0c,	// (0x000582ed) main_mp4_pane

0xa897,	// (0x00059178) main_mp4_pane_g1_ParamLimits

0xa897,	// (0x00059178) main_mp4_pane_g1

0xa897,	// (0x00059178) main_mp4_pane_g2_ParamLimits

0xa897,	// (0x00059178) main_mp4_pane_g2

0x60d5,	// (0x000549b6) main_mp4_pane_g3_ParamLimits

0x60d5,	// (0x000549b6) main_mp4_pane_g3

0xa8a5,	// (0x00059186) main_mp4_pane_g4_ParamLimits

0xa8a5,	// (0x00059186) main_mp4_pane_g4

0xa8cd,	// (0x000591ae) main_mp4_pane_g5_ParamLimits

0xa8cd,	// (0x000591ae) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0005e182) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0005e182) main_mp4_pane_g

0xa91d,	// (0x000591fe) main_mp4_pane_t1_ParamLimits

0xa91d,	// (0x000591fe) main_mp4_pane_t1

0xa979,	// (0x0005925a) main_mp4_pane_t2_ParamLimits

0xa979,	// (0x0005925a) main_mp4_pane_t2

0xd4a8,	// (0x0005bd89) main_mp4_pane_t3_ParamLimits

0xd4a8,	// (0x0005bd89) main_mp4_pane_t3

0xa9cb,	// (0x000592ac) main_mp4_pane_t4_ParamLimits

0xa9cb,	// (0x000592ac) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0005e18f) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0005e18f) main_mp4_pane_t

0xaa0b,	// (0x000592ec) mp4_progress_pane_ParamLimits

0xaa0b,	// (0x000592ec) mp4_progress_pane

0xaa55,	// (0x00059336) mp4_rocker_pane_ParamLimits

0xaa55,	// (0x00059336) mp4_rocker_pane

0xd4d0,	// (0x0005bdb1) mp4_progress_pane_t1

0xd4e9,	// (0x0005bdca) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0005e198) mp4_progress_pane_t

0xd502,	// (0x0005bde3) mup_progress_pane_cp04

0xcc10,	// (0x0005b4f1) mp4_rocker_pane_g1

0x611f,	// (0x00054a00) aid_cell_size_keypad2_ParamLimits

0x611f,	// (0x00054a00) aid_cell_size_keypad2

0x6135,	// (0x00054a16) dialer2_ne_pane_ParamLimits

0x6135,	// (0x00054a16) dialer2_ne_pane

0x614d,	// (0x00054a2e) grid_dialer2_keypad_pane_ParamLimits

0x614d,	// (0x00054a2e) grid_dialer2_keypad_pane

0xc9ef,	// (0x0005b2d0) bg_popup_call_pane_cp07_ParamLimits

0xc9ef,	// (0x0005b2d0) bg_popup_call_pane_cp07

0x6169,	// (0x00054a4a) dialer2_ne_pane_t1_ParamLimits

0x6169,	// (0x00054a4a) dialer2_ne_pane_t1

0x61a4,	// (0x00054a85) cell_dialer2_keypad_pane_ParamLimits

0x61a4,	// (0x00054a85) cell_dialer2_keypad_pane

0xd520,	// (0x0005be01) bg_button_pane_pane_cp04_ParamLimits

0xd520,	// (0x0005be01) bg_button_pane_pane_cp04

0x61c8,	// (0x00054aa9) cell_dialer2_keypad_pane_g1_ParamLimits

0x61c8,	// (0x00054aa9) cell_dialer2_keypad_pane_g1

0x1d70,	// (0x00050651) aid_placing_vt_set_content_ParamLimits

0x1d70,	// (0x00050651) aid_placing_vt_set_content

0x1d94,	// (0x00050675) aid_placing_vt_set_title_ParamLimits

0x1d94,	// (0x00050675) aid_placing_vt_set_title

0x9a0c,	// (0x000582ed) main_image3_pane

0x628e,	// (0x00054b6f) area_side_right_pane_cp01_ParamLimits

0x628e,	// (0x00054b6f) area_side_right_pane_cp01

0xa897,	// (0x00059178) main_image3_pane_g1_ParamLimits

0xa897,	// (0x00059178) main_image3_pane_g1

0x62a7,	// (0x00054b88) main_image3_pane_g2_ParamLimits

0x62a7,	// (0x00054b88) main_image3_pane_g2

0x62cf,	// (0x00054bb0) main_image3_pane_g3_ParamLimits

0x62cf,	// (0x00054bb0) main_image3_pane_g3

0x62f9,	// (0x00054bda) main_image3_pane_g4_ParamLimits

0x62f9,	// (0x00054bda) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0005e1a7) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0005e1a7) main_image3_pane_g

0x6323,	// (0x00054c04) main_image3_pane_t1_ParamLimits

0x6323,	// (0x00054c04) main_image3_pane_t1

0x637b,	// (0x00054c5c) main_image3_pane_t2_ParamLimits

0x637b,	// (0x00054c5c) main_image3_pane_t2

0x63cd,	// (0x00054cae) main_image3_pane_t3_ParamLimits

0x63cd,	// (0x00054cae) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0005e1b0) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0005e1b0) main_image3_pane_t

0x9a65,	// (0x00058346) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a65,	// (0x00058346) grid_sctrl_middle_pane_cp01

0x6455,	// (0x00054d36) cell_sctrl_middle_pane_cp01_ParamLimits

0x6455,	// (0x00054d36) cell_sctrl_middle_pane_cp01

0x6472,	// (0x00054d53) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6472,	// (0x00054d53) cell_sctrl_middle_pane_cp01_g1

0x9a0c,	// (0x000582ed) main_call4_pane

0x6487,	// (0x00054d68) aid_size_button_call4_ParamLimits

0x6487,	// (0x00054d68) aid_size_button_call4

0x64ba,	// (0x00054d9b) call4_windows_pane_ParamLimits

0x64ba,	// (0x00054d9b) call4_windows_pane

0x64dc,	// (0x00054dbd) grid_call4_button_pane_ParamLimits

0x64dc,	// (0x00054dbd) grid_call4_button_pane

0xd52c,	// (0x0005be0d) call4_windows_conf_pane

0x6507,	// (0x00054de8) popup_call4_audio_first_window_ParamLimits

0x6507,	// (0x00054de8) popup_call4_audio_first_window

0x6533,	// (0x00054e14) popup_call4_audio_second_window_ParamLimits

0x6533,	// (0x00054e14) popup_call4_audio_second_window

0xd569,	// (0x0005be4a) popup_call4_audio_wait_window_ParamLimits

0xd569,	// (0x0005be4a) popup_call4_audio_wait_window

0x6549,	// (0x00054e2a) cell_call4_button_pane_ParamLimits

0x6549,	// (0x00054e2a) cell_call4_button_pane

0x6570,	// (0x00054e51) bg_button_pane_cp09_ParamLimits

0x6570,	// (0x00054e51) bg_button_pane_cp09

0x657c,	// (0x00054e5d) cell_call4_button_pane_g1_ParamLimits

0x657c,	// (0x00054e5d) cell_call4_button_pane_g1

0x65a2,	// (0x00054e83) cell_call4_button_pane_t1_ParamLimits

0x65a2,	// (0x00054e83) cell_call4_button_pane_t1

0xd5b1,	// (0x0005be92) popup_call4_audio_conf_window_ParamLimits

0xd5b1,	// (0x0005be92) popup_call4_audio_conf_window

0x5787,	// (0x00054068) mup3_progress_pane_t1_ParamLimits

0x57a5,	// (0x00054086) mup3_progress_pane_t2_ParamLimits

0xcebb,	// (0x0005b79c) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0005e084) mup3_progress_pane_t_ParamLimits

0xced8,	// (0x0005b7b9) mup_progress_pane_cp03_ParamLimits

0x5da6,	// (0x00054687) mup3_control_keys_pane_g4_copy1

0xaa39,	// (0x0005931a) mp4_rocker2_pane_ParamLimits

0xaa39,	// (0x0005931a) mp4_rocker2_pane

0xd5cb,	// (0x0005beac) mp4_rocker2_pane_g1

0xd5d3,	// (0x0005beb4) mp4_rocker2_pane_g2

0xaaab,	// (0x0005938c) mp4_rocker2_pane_g3

0xaab3,	// (0x00059394) mp4_rocker2_pane_g4

0xaabb,	// (0x0005939c) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0005e1b9) mp4_rocker2_pane_g

0x9a0c,	// (0x000582ed) main_camera4_pane

0x9a0c,	// (0x000582ed) main_video4_pane

0x6014,	// (0x000548f5) main_video_tele_dialer_pane_t1_ParamLimits

0x6014,	// (0x000548f5) main_video_tele_dialer_pane_t1

0x602d,	// (0x0005490e) main_video_tele_dialer_pane_t2_ParamLimits

0x602d,	// (0x0005490e) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0005e173) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0005e173) main_video_tele_dialer_pane_t

0x65e0,	// (0x00054ec1) cam4_autofocus_pane_ParamLimits

0x65e0,	// (0x00054ec1) cam4_autofocus_pane

0x65f6,	// (0x00054ed7) cam4_image_uncrop_pane_ParamLimits

0x65f6,	// (0x00054ed7) cam4_image_uncrop_pane

0x660f,	// (0x00054ef0) cam4_indicators_pane_ParamLimits

0x660f,	// (0x00054ef0) cam4_indicators_pane

0x663e,	// (0x00054f1f) main_camera4_pane_g1_ParamLimits

0x663e,	// (0x00054f1f) main_camera4_pane_g1

0x6650,	// (0x00054f31) main_camera4_pane_g2_ParamLimits

0x6650,	// (0x00054f31) main_camera4_pane_g2

0x6663,	// (0x00054f44) main_camera4_pane_g3_ParamLimits

0x6663,	// (0x00054f44) main_camera4_pane_g3

0x6676,	// (0x00054f57) main_camera4_pane_g4_ParamLimits

0x6676,	// (0x00054f57) main_camera4_pane_g4

0x6689,	// (0x00054f6a) main_camera4_pane_g5_ParamLimits

0x6689,	// (0x00054f6a) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0005e1c4) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0005e1c4) main_camera4_pane_g

0x66ad,	// (0x00054f8e) main_camera4_pane_t1_ParamLimits

0x66ad,	// (0x00054f8e) main_camera4_pane_t1

0xce40,	// (0x0005b721) bg_tb_trans_pane_cp06

0xaae9,	// (0x000593ca) cam4_indicators_pane_g1

0xaafa,	// (0x000593db) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0005e1df) cam4_indicators_pane_g

0xab12,	// (0x000593f3) cam4_indicators_pane_t1

0x6711,	// (0x00054ff2) main_video4_pane_g1_ParamLimits

0x6711,	// (0x00054ff2) main_video4_pane_g1

0x6720,	// (0x00055001) main_video4_pane_g2_ParamLimits

0x6720,	// (0x00055001) main_video4_pane_g2

0x672f,	// (0x00055010) main_video4_pane_g3_ParamLimits

0x672f,	// (0x00055010) main_video4_pane_g3

0x673e,	// (0x0005501f) main_video4_pane_g4_ParamLimits

0x673e,	// (0x0005501f) main_video4_pane_g4

0x0004,

0xf905,	// (0x0005e1e6) main_video4_pane_g_ParamLimits

0xf905,	// (0x0005e1e6) main_video4_pane_g

0x675c,	// (0x0005503d) vid4_indicators_pane_ParamLimits

0x675c,	// (0x0005503d) vid4_indicators_pane

0x678a,	// (0x0005506b) video4_image_uncrop_cif_pane_ParamLimits

0x678a,	// (0x0005506b) video4_image_uncrop_cif_pane

0x67a4,	// (0x00055085) video4_image_uncrop_nhd_pane_ParamLimits

0x67a4,	// (0x00055085) video4_image_uncrop_nhd_pane

0x65f6,	// (0x00054ed7) video4_image_uncrop_vga_pane_ParamLimits

0x65f6,	// (0x00054ed7) video4_image_uncrop_vga_pane

0x9a65,	// (0x00058346) bg_tb_trans_pane_cp07

0xab40,	// (0x00059421) vid4_indicators_pane_g1

0xab56,	// (0x00059437) vid4_indicators_pane_g2

0xab6a,	// (0x0005944b) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0005e1f1) vid4_indicators_pane_g

0xab9b,	// (0x0005947c) vid4_indicators_pane_t1

0x67ba,	// (0x0005509b) cam4_autofocus_pane_g1

0x67c2,	// (0x000550a3) cam4_autofocus_pane_g2

0x67ca,	// (0x000550ab) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0005e1fc) cam4_autofocus_pane_g

0x67d2,	// (0x000550b3) cam4_autofocus_pane_g3_copy1

0x605a,	// (0x0005493b) video_down_pane_cp_t1

0x6068,	// (0x00054949) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0005e178) video_down_pane_cp_t

0x9a65,	// (0x00058346) popup_vitu2_window_ParamLimits

0x9a65,	// (0x00058346) popup_vitu2_window

0x67da,	// (0x000550bb) aid_size_cell2_itu2_ParamLimits

0x67da,	// (0x000550bb) aid_size_cell2_itu2

0x6800,	// (0x000550e1) aid_size_cell_itu2_ParamLimits

0x6800,	// (0x000550e1) aid_size_cell_itu2

0x6860,	// (0x00055141) bg_popup_window_pane_cp09_ParamLimits

0x6860,	// (0x00055141) bg_popup_window_pane_cp09

0x686e,	// (0x0005514f) field_vitu2_entry_pane_ParamLimits

0x686e,	// (0x0005514f) field_vitu2_entry_pane

0x6896,	// (0x00055177) grid_vitu2_function_pane_ParamLimits

0x6896,	// (0x00055177) grid_vitu2_function_pane

0x68e7,	// (0x000551c8) grid_vitu2_itu_pane_ParamLimits

0x68e7,	// (0x000551c8) grid_vitu2_itu_pane

0x697b,	// (0x0005525c) cell_vitu2_itu_pane_ParamLimits

0x697b,	// (0x0005525c) cell_vitu2_itu_pane

0x69a1,	// (0x00055282) cell_vitu2_function_pane_ParamLimits

0x69a1,	// (0x00055282) cell_vitu2_function_pane

0xd5db,	// (0x0005bebc) bg_popup_call_pane_cp08_ParamLimits

0xd5db,	// (0x0005bebc) bg_popup_call_pane_cp08

0xd5f2,	// (0x0005bed3) field_vitu2_entry_pane_g1

0xd5fe,	// (0x0005bedf) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0005e203) field_vitu2_entry_pane_g

0xfdee,	// (0x0004e6cf) field_vitu2_entry_pane_t1_ParamLimits

0xfdee,	// (0x0004e6cf) field_vitu2_entry_pane_t1

0x69e5,	// (0x000552c6) field_vitu2_entry_pane_t2_ParamLimits

0x69e5,	// (0x000552c6) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0005e20a) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0005e20a) field_vitu2_entry_pane_t

0x6a02,	// (0x000552e3) bg_button_pane_cp010_ParamLimits

0x6a02,	// (0x000552e3) bg_button_pane_cp010

0xabb2,	// (0x00059493) cell_vitu2_itu_pane_g1

0x6a1e,	// (0x000552ff) cell_vitu2_itu_pane_t1_ParamLimits

0x6a1e,	// (0x000552ff) cell_vitu2_itu_pane_t1

0xfe1d,	// (0x0004e6fe) cell_vitu2_itu_pane_t2_ParamLimits

0xfe1d,	// (0x0004e6fe) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0005e214) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0005e214) cell_vitu2_itu_pane_t

0x9a65,	// (0x00058346) bg_button_pane_cp011

0x6a7c,	// (0x0005535d) cell_vitu2_function_pane_g1

0x9a0c,	// (0x000582ed) main_myfav_hc_pane

0x641d,	// (0x00054cfe) popup_image3_note_pane_ParamLimits

0x641d,	// (0x00054cfe) popup_image3_note_pane

0x6439,	// (0x00054d1a) popup_image3_tool_bar_pane_ParamLimits

0x6439,	// (0x00054d1a) popup_image3_tool_bar_pane

0xfeab,	// (0x0004e78c) cell_vitu2_itu_pane_t3_ParamLimits

0xfeab,	// (0x0004e78c) cell_vitu2_itu_pane_t3

0x9a0c,	// (0x000582ed) bg_popup_trans_pane

0xd620,	// (0x0005bf01) grid_image3_tool_bar_pane

0xd62a,	// (0x0005bf0b) bg_popup_trans_pane_g1

0xa65b,	// (0x00058f3c) bg_popup_trans_pane_g2

0xd632,	// (0x0005bf13) bg_popup_trans_pane_g3

0xd63a,	// (0x0005bf1b) bg_popup_trans_pane_g4

0xd642,	// (0x0005bf23) bg_popup_trans_pane_g5

0xd64a,	// (0x0005bf2b) bg_popup_trans_pane_g6

0xd652,	// (0x0005bf33) bg_popup_trans_pane_g7

0xd65a,	// (0x0005bf3b) bg_popup_trans_pane_g8

0xa63b,	// (0x00058f1c) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0005e21b) bg_popup_trans_pane_g

0xd662,	// (0x0005bf43) cell_image3_tool_bar_pane_ParamLimits

0xd662,	// (0x0005bf43) cell_image3_tool_bar_pane

0xcc10,	// (0x0005b4f1) cell_image3_tool_bar_pane_g1

0x9a0c,	// (0x000582ed) bg_popup_trans_pane_cp1

0xd678,	// (0x0005bf59) popup_image3_note_pane_t1

0xd686,	// (0x0005bf67) popup_image3_note_pane_t2

0xd694,	// (0x0005bf75) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0005e22e) popup_image3_note_pane_t

0xd6a4,	// (0x0005bf85) popup_image3_note_pane_t3_copy1

0x6a90,	// (0x00055371) bg_myfav_hc_instruction_pane_ParamLimits

0x6a90,	// (0x00055371) bg_myfav_hc_instruction_pane

0x6aa8,	// (0x00055389) cell_myfav_contact_pane_ParamLimits

0x6aa8,	// (0x00055389) cell_myfav_contact_pane

0x6ac4,	// (0x000553a5) cell_myfav_contact_pane_cp1_ParamLimits

0x6ac4,	// (0x000553a5) cell_myfav_contact_pane_cp1

0x6adc,	// (0x000553bd) cell_myfav_contact_pane_cp2_ParamLimits

0x6adc,	// (0x000553bd) cell_myfav_contact_pane_cp2

0x6af4,	// (0x000553d5) cell_myfav_contact_pane_cp3_ParamLimits

0x6af4,	// (0x000553d5) cell_myfav_contact_pane_cp3

0x6b0b,	// (0x000553ec) cell_myfav_contact_pane_cp4_ParamLimits

0x6b0b,	// (0x000553ec) cell_myfav_contact_pane_cp4

0x6b23,	// (0x00055404) cell_myfav_contact_pane_cp5_ParamLimits

0x6b23,	// (0x00055404) cell_myfav_contact_pane_cp5

0x6b37,	// (0x00055418) cell_myfav_contact_pane_cp6_ParamLimits

0x6b37,	// (0x00055418) cell_myfav_contact_pane_cp6

0x6b4d,	// (0x0005542e) cell_myfav_contact_pane_cp7_ParamLimits

0x6b4d,	// (0x0005542e) cell_myfav_contact_pane_cp7

0xd6b2,	// (0x0005bf93) listscroll_gen_pane_cp05

0x6b65,	// (0x00055446) main_myfav_hc_pane_g1_ParamLimits

0x6b65,	// (0x00055446) main_myfav_hc_pane_g1

0x6b7f,	// (0x00055460) main_myfav_hc_pane_g2_ParamLimits

0x6b7f,	// (0x00055460) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0005e235) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0005e235) main_myfav_hc_pane_g

0x6bb3,	// (0x00055494) main_myfav_hc_pane_t1_ParamLimits

0x6bb3,	// (0x00055494) main_myfav_hc_pane_t1

0xd6bb,	// (0x0005bf9c) main_myfav_hc_pane_t2_ParamLimits

0xd6bb,	// (0x0005bf9c) main_myfav_hc_pane_t2

0xd6cd,	// (0x0005bfae) main_myfav_hc_pane_t3_ParamLimits

0xd6cd,	// (0x0005bfae) main_myfav_hc_pane_t3

0x6bca,	// (0x000554ab) main_myfav_hc_pane_t4_ParamLimits

0x6bca,	// (0x000554ab) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0005e23c) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0005e23c) main_myfav_hc_pane_t

0xcc10,	// (0x0005b4f1) bg_myfav_hc_instruction_pane_g1

0xd6df,	// (0x0005bfc0) cell_myfav_contact_pane_g1_ParamLimits

0xd6df,	// (0x0005bfc0) cell_myfav_contact_pane_g1

0xd6df,	// (0x0005bfc0) cell_myfav_contact_pane_g2_ParamLimits

0xd6df,	// (0x0005bfc0) cell_myfav_contact_pane_g2

0xd6eb,	// (0x0005bfcc) cell_myfav_contact_pane_g3_ParamLimits

0xd6eb,	// (0x0005bfcc) cell_myfav_contact_pane_g3

0xcea5,	// (0x0005b786) cell_myfav_contact_pane_g4_ParamLimits

0xcea5,	// (0x0005b786) cell_myfav_contact_pane_g4

0xd6f8,	// (0x0005bfd9) cell_myfav_contact_pane_g5_ParamLimits

0xd6f8,	// (0x0005bfd9) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0005e247) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0005e247) cell_myfav_contact_pane_g

0x6b99,	// (0x0005547a) main_myfav_hc_pane_g3_ParamLimits

0x6b99,	// (0x0005547a) main_myfav_hc_pane_g3

0x0bb0,	// (0x0004f491) popup_adpt_find_window

0x6bf4,	// (0x000554d5) afind_page_pane_ParamLimits

0x6bf4,	// (0x000554d5) afind_page_pane

0x6c09,	// (0x000554ea) aid_size_cell_afind_ParamLimits

0x6c09,	// (0x000554ea) aid_size_cell_afind

0x6c27,	// (0x00055508) bg_popup_sub_pane_cp09_ParamLimits

0x6c27,	// (0x00055508) bg_popup_sub_pane_cp09

0x6c34,	// (0x00055515) find_pane_cp01_ParamLimits

0x6c34,	// (0x00055515) find_pane_cp01

0xd704,	// (0x0005bfe5) grid_afind_control_pane_ParamLimits

0xd704,	// (0x0005bfe5) grid_afind_control_pane

0x6c41,	// (0x00055522) grid_afind_pane_ParamLimits

0x6c41,	// (0x00055522) grid_afind_pane

0x6c63,	// (0x00055544) cell_afind_pane_ParamLimits

0x6c63,	// (0x00055544) cell_afind_pane

0xcc10,	// (0x0005b4f1) afind_page_pane_g1

0x6ccc,	// (0x000555ad) afind_page_pane_g2

0x6cd5,	// (0x000555b6) afind_page_pane_g3

0x0002,

0xf971,	// (0x0005e252) afind_page_pane_g

0x6cde,	// (0x000555bf) afind_page_pane_t1

0xd718,	// (0x0005bff9) cell_afind_grid_control_pane_ParamLimits

0xd718,	// (0x0005bff9) cell_afind_grid_control_pane

0xd520,	// (0x0005be01) bg_button_pane_cp69_ParamLimits

0xd520,	// (0x0005be01) bg_button_pane_cp69

0x6cfe,	// (0x000555df) cell_afind_pane_g1_ParamLimits

0x6cfe,	// (0x000555df) cell_afind_pane_g1

0x6d0b,	// (0x000555ec) cell_afind_pane_t1_ParamLimits

0x6d0b,	// (0x000555ec) cell_afind_pane_t1

0xa450,	// (0x00058d31) bg_button_pane_cp72

0xd727,	// (0x0005c008) cell_afind_grid_control_pane_g1

0x3cb3,	// (0x00052594) aid_image_placing_area_ParamLimits

0x3cb3,	// (0x00052594) aid_image_placing_area

0xd1d8,	// (0x0005bab9) field_vitu_entry_pane_g1_ParamLimits

0xd1d8,	// (0x0005bab9) field_vitu_entry_pane_g1

0xd1e4,	// (0x0005bac5) field_vitu_entry_pane_g2_ParamLimits

0xd1e4,	// (0x0005bac5) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0005e103) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0005e103) field_vitu_entry_pane_g

0x5e75,	// (0x00054756) cell_vitu_itu_pane_g1_ParamLimits

0x5eb7,	// (0x00054798) cell_vitu_itu_pane_t3_ParamLimits

0x5eb7,	// (0x00054798) cell_vitu_itu_pane_t3

0xd4d0,	// (0x0005bdb1) mp4_progress_pane_t1_ParamLimits

0xd4e9,	// (0x0005bdca) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0005e198) mp4_progress_pane_t_ParamLimits

0xd502,	// (0x0005bde3) mup_progress_pane_cp04_ParamLimits

0x6bde,	// (0x000554bf) main_myfav_hc_pane_t5_ParamLimits

0x6bde,	// (0x000554bf) main_myfav_hc_pane_t5

0x9a2a,	// (0x0005830b) aid_zoom_text_primary

0x0bb0,	// (0x0004f491) popup_adpt_find_window_ParamLimits

0x9a65,	// (0x00058346) main_cam_set_pane

0x6628,	// (0x00054f09) cam4_zoom_pane_ParamLimits

0x6628,	// (0x00054f09) cam4_zoom_pane

0x6d1d,	// (0x000555fe) main_cam_set_pane_g1_ParamLimits

0x6d1d,	// (0x000555fe) main_cam_set_pane_g1

0x6d2b,	// (0x0005560c) main_cam_set_pane_g2_ParamLimits

0x6d2b,	// (0x0005560c) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0005e259) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0005e259) main_cam_set_pane_g

0x6d4c,	// (0x0005562d) main_cam_set_pane_t1_ParamLimits

0x6d4c,	// (0x0005562d) main_cam_set_pane_t1

0x6d67,	// (0x00055648) main_cset_listscroll_pane_ParamLimits

0x6d67,	// (0x00055648) main_cset_listscroll_pane

0x6d8b,	// (0x0005566c) main_cset_slider_pane_ParamLimits

0x6d8b,	// (0x0005566c) main_cset_slider_pane

0xd738,	// (0x0005c019) main_cset_list_pane_ParamLimits

0xd738,	// (0x0005c019) main_cset_list_pane

0xd748,	// (0x0005c029) scroll_pane_cp028

0x6db5,	// (0x00055696) aid_area_touch_slider

0x6dd1,	// (0x000556b2) cset_slider_pane

0x6dfb,	// (0x000556dc) main_cset_slider_pane_g1

0x6e10,	// (0x000556f1) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0005e25e) main_cset_slider_pane_g

0xd781,	// (0x0005c062) main_cset_slider_pane_t1

0x6ed2,	// (0x000557b3) main_cset_slider_pane_t2

0x6eec,	// (0x000557cd) main_cset_slider_pane_t3

0x6f06,	// (0x000557e7) main_cset_slider_pane_t4

0x6f20,	// (0x00055801) main_cset_slider_pane_t5

0x6f3e,	// (0x0005581f) main_cset_slider_pane_t6

0x6f53,	// (0x00055834) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0005e283) main_cset_slider_pane_t

0x705f,	// (0x00055940) cset_list_set_pane_ParamLimits

0x705f,	// (0x00055940) cset_list_set_pane

0x7073,	// (0x00055954) aid_position_infowindow_above

0x707b,	// (0x0005595c) aid_position_infowindow_below

0xff09,	// (0x0004e7ea) cset_list_set_pane_g1_ParamLimits

0xff09,	// (0x0004e7ea) cset_list_set_pane_g1

0xff15,	// (0x0004e7f6) cset_list_set_pane_g3_ParamLimits

0xff15,	// (0x0004e7f6) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0005e2a2) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0005e2a2) cset_list_set_pane_g

0xff24,	// (0x0004e805) cset_list_set_pane_t1_ParamLimits

0xff24,	// (0x0004e805) cset_list_set_pane_t1

0x9a65,	// (0x00058346) list_highlight_pane_cp021_ParamLimits

0x9a65,	// (0x00058346) list_highlight_pane_cp021

0xb4ce,	// (0x00059daf) cset_slider_pane_g1

0xb4e0,	// (0x00059dc1) cset_slider_pane_g2

0xb4d7,	// (0x00059db8) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0005e2a7) cset_slider_pane_g

0xabc4,	// (0x000594a5) aid_area_touch_cam4_zoom

0xabcc,	// (0x000594ad) cam4_zoom_cont_pane

0xabd4,	// (0x000594b5) cam4_zoom_pane_g1

0xabdc,	// (0x000594bd) cam4_zoom_pane_g2

0x7083,	// (0x00055964) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0005e2ae) cam4_zoom_pane_g

0xd821,	// (0x0005c102) cam4_zoom_cont_pane_g1

0xd82a,	// (0x0005c10b) cam4_zoom_cont_pane_g2

0xd833,	// (0x0005c114) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0005e2b5) cam4_zoom_cont_pane_g

0x64a5,	// (0x00054d86) call4_image_pane_ParamLimits

0x64a5,	// (0x00054d86) call4_image_pane

0xd52c,	// (0x0005be0d) call4_windows_conf_pane_ParamLimits

0xd547,	// (0x0005be28) popup_call4_audio_in_window_ParamLimits

0xd547,	// (0x0005be28) popup_call4_audio_in_window

0x9a0c,	// (0x000582ed) bg_popup_call2_act_pane_cp02

0xd5a9,	// (0x0005be8a) call4_list_conf_pane

0xcc10,	// (0x0005b4f1) call4_image_pane_g1

0xcc10,	// (0x0005b4f1) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0005dfc4) call4_image_pane_g

0xd83c,	// (0x0005c11d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd83c,	// (0x0005c11d) list_single_graphic_popup_conf4_pane

0x9a0c,	// (0x000582ed) list_highlight_pane_cp022

0xd851,	// (0x0005c132) list_single_graphic_popup_conf4_pane_g1

0xb1c2,	// (0x00059aa3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0005e2bc) list_single_graphic_popup_conf4_pane_g

0xd859,	// (0x0005c13a) list_single_graphic_popup_conf4_pane_t1

0x1eab,	// (0x0005078c) popup_vtel_slider_window_ParamLimits

0x1eab,	// (0x0005078c) popup_vtel_slider_window

0xd50e,	// (0x0005bdef) dialer2_ne_pane_t2_ParamLimits

0xd50e,	// (0x0005bdef) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0005e19d) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0005e19d) dialer2_ne_pane_t

0xc9ef,	// (0x0005b2d0) bg_popup_sub_pane_cp010_ParamLimits

0xc9ef,	// (0x0005b2d0) bg_popup_sub_pane_cp010

0x708b,	// (0x0005596c) popup_vtel_slider_window_g1_ParamLimits

0x708b,	// (0x0005596c) popup_vtel_slider_window_g1

0x709e,	// (0x0005597f) popup_vtel_slider_window_g2_ParamLimits

0x709e,	// (0x0005597f) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0005e2c1) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0005e2c1) popup_vtel_slider_window_g

0x70f4,	// (0x000559d5) vtel_slider_pane_ParamLimits

0x70f4,	// (0x000559d5) vtel_slider_pane

0x7116,	// (0x000559f7) vtel_slider_pane_g1_ParamLimits

0x7116,	// (0x000559f7) vtel_slider_pane_g1

0x712a,	// (0x00055a0b) vtel_slider_pane_g2_ParamLimits

0x712a,	// (0x00055a0b) vtel_slider_pane_g2

0x7142,	// (0x00055a23) vtel_slider_pane_g3_ParamLimits

0x7142,	// (0x00055a23) vtel_slider_pane_g3

0x7116,	// (0x000559f7) vtel_slider_pane_g4_ParamLimits

0x7116,	// (0x000559f7) vtel_slider_pane_g4

0x7158,	// (0x00055a39) vtel_slider_pane_g5_ParamLimits

0x7158,	// (0x00055a39) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0005e2ca) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0005e2ca) vtel_slider_pane_g

0x9a65,	// (0x00058346) main_gallery2_pane

0x682c,	// (0x0005510d) aid_size_row_itut2_dropdow_list_ParamLimits

0x682c,	// (0x0005510d) aid_size_row_itut2_dropdow_list

0x68be,	// (0x0005519f) grid_vitu2_function_top_pane_ParamLimits

0x68be,	// (0x0005519f) grid_vitu2_function_top_pane

0x6922,	// (0x00055203) popup_vitu2_dropdown_list_window_ParamLimits

0x6922,	// (0x00055203) popup_vitu2_dropdown_list_window

0x694f,	// (0x00055230) popup_vitu2_match_list_window

0x716e,	// (0x00055a4f) cell_vitu2_function_top_pane_ParamLimits

0x716e,	// (0x00055a4f) cell_vitu2_function_top_pane

0x718e,	// (0x00055a6f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x718e,	// (0x00055a6f) cell_vitu2_function_top_pane_cp01

0x71aa,	// (0x00055a8b) cell_vitu2_function_top_wide_pane_ParamLimits

0x71aa,	// (0x00055a8b) cell_vitu2_function_top_wide_pane

0x9a65,	// (0x00058346) bg_button_pane_cp012

0x71c6,	// (0x00055aa7) cell_vitu2_function_top_pane_g1

0xabe4,	// (0x000594c5) bg_button_pane_cp013_ParamLimits

0xabe4,	// (0x000594c5) bg_button_pane_cp013

0x71da,	// (0x00055abb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71da,	// (0x00055abb) cell_vitu2_function_top_wide_pane_g1

0x9a65,	// (0x00058346) bg_popup_sub_pane_cp20

0x71f2,	// (0x00055ad3) list_vitu2_match_list_pane

0xd62a,	// (0x0005bf0b) bg_popup_sub_pane_cp20_g1

0xd632,	// (0x0005bf13) bg_popup_sub_pane_cp20_g2

0xa65b,	// (0x00058f3c) bg_popup_sub_pane_cp20_g3

0xd63a,	// (0x0005bf1b) bg_popup_sub_pane_cp20_g4

0xa63b,	// (0x00058f1c) bg_popup_sub_pane_cp20_g5

0xd86f,	// (0x0005c150) bg_popup_sub_pane_cp20_g6

0xd64a,	// (0x0005bf2b) bg_popup_sub_pane_cp20_g7

0xd652,	// (0x0005bf33) bg_popup_sub_pane_cp20_g8

0xd65a,	// (0x0005bf3b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0005e2d5) bg_popup_sub_pane_cp20_g

0xac00,	// (0x000594e1) list_vitu2_match_list_item_pane_ParamLimits

0xac00,	// (0x000594e1) list_vitu2_match_list_item_pane

0xac12,	// (0x000594f3) list_vitu2_match_list_item_pane_t1

0x9a0c,	// (0x000582ed) bg_popup_sub_pane_cp21

0xb0eb,	// (0x000599cc) grid_vitu2_dropdown_list_pane

0x7210,	// (0x00055af1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7210,	// (0x00055af1) cell_vitu2_dropdown_list_char_pane

0x7233,	// (0x00055b14) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7233,	// (0x00055b14) cell_vitu2_dropdown_list_ctrl_pane

0xd877,	// (0x0005c158) cell_vitu2_dropdown_list_char_pane_g1

0xd880,	// (0x0005c161) cell_vitu2_dropdown_list_char_pane_g2

0xd889,	// (0x0005c16a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0005e2f2) cell_vitu2_dropdown_list_char_pane_g

0x7261,	// (0x00055b42) cell_vitu2_dropdown_list_char_pane_t1

0x726f,	// (0x00055b50) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x726f,	// (0x00055b50) cell_vitu2_dropdown_list_ctrl_pane_g1

0x727f,	// (0x00055b60) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x727f,	// (0x00055b60) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7290,	// (0x00055b71) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7290,	// (0x00055b71) cell_vitu2_dropdown_list_ctrl_pane_g3

0x72a0,	// (0x00055b81) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x72a0,	// (0x00055b81) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce40,	// (0x0005b721) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce40,	// (0x0005b721) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0005e2f9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0005e2f9) cell_vitu2_dropdown_list_ctrl_pane_g

0x72bc,	// (0x00055b9d) aid_size_cell_gallery2_ParamLimits

0x72bc,	// (0x00055b9d) aid_size_cell_gallery2

0x72da,	// (0x00055bbb) grid_gallery2_pane_ParamLimits

0x72da,	// (0x00055bbb) grid_gallery2_pane

0x72f4,	// (0x00055bd5) scroll_pane_cp029_ParamLimits

0x72f4,	// (0x00055bd5) scroll_pane_cp029

0x7300,	// (0x00055be1) cell_gallery2_pane_ParamLimits

0x7300,	// (0x00055be1) cell_gallery2_pane

0xd892,	// (0x0005c173) cell_gallery2_pane_g2

0x7361,	// (0x00055c42) cell_gallery2_pane_g3

0xd89a,	// (0x0005c17b) cell_gallery2_pane_g4

0xd8a2,	// (0x0005c183) cell_gallery2_pane_g5

0xa3f4,	// (0x00058cd5) grid_highlight_pane_cp10

0x694f,	// (0x00055230) popup_vitu2_match_list_window_ParamLimits

0x6966,	// (0x00055247) popup_vitu2_query_window_ParamLimits

0x6966,	// (0x00055247) popup_vitu2_query_window

0x9a0c,	// (0x000582ed) bg_vitu2_candi_button_pane

0xd877,	// (0x0005c158) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd880,	// (0x0005c161) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd889,	// (0x0005c16a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff91,	// (0x0004e872) bg_button_pane_cp015

0x7369,	// (0x00055c4a) bg_button_pane_cp016

0x737c,	// (0x00055c5d) bg_button_pane_cp017

0xc7bf,	// (0x0005b0a0) bg_popup_sub_pane_cp22

0xd8aa,	// (0x0005c18b) popup_vitu2_query_window_g1

0xffc6,	// (0x0004e8a7) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0005e304) popup_vitu2_query_window_g

0xffe5,	// (0x0004e8c6) popup_vitu2_query_window_t1_ParamLimits

0xffe5,	// (0x0004e8c6) popup_vitu2_query_window_t1

0x001a,	// (0x0004e8fb) popup_vitu2_query_window_t2_ParamLimits

0x001a,	// (0x0004e8fb) popup_vitu2_query_window_t2

0x002c,	// (0x0004e90d) popup_vitu2_query_window_t3_ParamLimits

0x002c,	// (0x0004e90d) popup_vitu2_query_window_t3

0x73a0,	// (0x00055c81) popup_vitu2_query_window_t4_ParamLimits

0x73a0,	// (0x00055c81) popup_vitu2_query_window_t4

0x73c1,	// (0x00055ca2) popup_vitu2_query_window_t5_ParamLimits

0x73c1,	// (0x00055ca2) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0005e30b) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0005e30b) popup_vitu2_query_window_t

0xd730,	// (0x0005c011) main_cset_text_pane

0x6db5,	// (0x00055696) aid_area_touch_slider_ParamLimits

0x6dd1,	// (0x000556b2) cset_slider_pane_ParamLimits

0x6dfb,	// (0x000556dc) main_cset_slider_pane_g1_ParamLimits

0x6e10,	// (0x000556f1) main_cset_slider_pane_g2_ParamLimits

0xd751,	// (0x0005c032) main_cset_slider_pane_g3_ParamLimits

0xd751,	// (0x0005c032) main_cset_slider_pane_g3

0x6e25,	// (0x00055706) main_cset_slider_pane_g4_ParamLimits

0x6e25,	// (0x00055706) main_cset_slider_pane_g4

0x6e34,	// (0x00055715) main_cset_slider_pane_g5_ParamLimits

0x6e34,	// (0x00055715) main_cset_slider_pane_g5

0x6e42,	// (0x00055723) main_cset_slider_pane_g6_ParamLimits

0x6e42,	// (0x00055723) main_cset_slider_pane_g6

0xf97d,	// (0x0005e25e) main_cset_slider_pane_g_ParamLimits

0xd781,	// (0x0005c062) main_cset_slider_pane_t1_ParamLimits

0x6ed2,	// (0x000557b3) main_cset_slider_pane_t2_ParamLimits

0x6eec,	// (0x000557cd) main_cset_slider_pane_t3_ParamLimits

0x6f06,	// (0x000557e7) main_cset_slider_pane_t4_ParamLimits

0x6f20,	// (0x00055801) main_cset_slider_pane_t5_ParamLimits

0x6f3e,	// (0x0005581f) main_cset_slider_pane_t6_ParamLimits

0x6f53,	// (0x00055834) main_cset_slider_pane_t7_ParamLimits

0x6f81,	// (0x00055862) main_cset_slider_pane_t8_ParamLimits

0x6f81,	// (0x00055862) main_cset_slider_pane_t8

0x6fa9,	// (0x0005588a) main_cset_slider_pane_t9_ParamLimits

0x6fa9,	// (0x0005588a) main_cset_slider_pane_t9

0x6fd1,	// (0x000558b2) main_cset_slider_pane_t10_ParamLimits

0x6fd1,	// (0x000558b2) main_cset_slider_pane_t10

0x6ff9,	// (0x000558da) main_cset_slider_pane_t11_ParamLimits

0x6ff9,	// (0x000558da) main_cset_slider_pane_t11

0x7023,	// (0x00055904) main_cset_slider_pane_t12_ParamLimits

0x7023,	// (0x00055904) main_cset_slider_pane_t12

0x7040,	// (0x00055921) main_cset_slider_pane_t13_ParamLimits

0x7040,	// (0x00055921) main_cset_slider_pane_t13

0xf9a2,	// (0x0005e283) main_cset_slider_pane_t_ParamLimits

0x9a0c,	// (0x000582ed) bg_popup_sub_pane_cp011

0xd8b6,	// (0x0005c197) main_cset_text_pane_g1

0xd8be,	// (0x0005c19f) main_cset_text_pane_t1

0xd8cc,	// (0x0005c1ad) main_cset_text_pane_t2

0xd8da,	// (0x0005c1bb) main_cset_text_pane_t3

0xd8e8,	// (0x0005c1c9) main_cset_text_pane_t4

0xd8f6,	// (0x0005c1d7) main_cset_text_pane_t5

0xd904,	// (0x0005c1e5) main_cset_text_pane_t6

0xd912,	// (0x0005c1f3) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0005e31a) main_cset_text_pane_t

0x9a0c,	// (0x000582ed) main_cam4_burst_pane

0x9a0c,	// (0x000582ed) main_cam5_pane

0x6cec,	// (0x000555cd) bg_button_pane_cp019

0x6cf5,	// (0x000555d6) bg_button_pane_cp020

0xd75d,	// (0x0005c03e) main_cset_slider_pane_g7_ParamLimits

0xd75d,	// (0x0005c03e) main_cset_slider_pane_g7

0xd769,	// (0x0005c04a) main_cset_slider_pane_g8_ParamLimits

0xd769,	// (0x0005c04a) main_cset_slider_pane_g8

0x6e56,	// (0x00055737) main_cset_slider_pane_g9_ParamLimits

0x6e56,	// (0x00055737) main_cset_slider_pane_g9

0x6e62,	// (0x00055743) main_cset_slider_pane_g10_ParamLimits

0x6e62,	// (0x00055743) main_cset_slider_pane_g10

0x6e6e,	// (0x0005574f) main_cset_slider_pane_g11_ParamLimits

0x6e6e,	// (0x0005574f) main_cset_slider_pane_g11

0x6e7a,	// (0x0005575b) main_cset_slider_pane_g12_ParamLimits

0x6e7a,	// (0x0005575b) main_cset_slider_pane_g12

0x6e86,	// (0x00055767) main_cset_slider_pane_g13_ParamLimits

0x6e86,	// (0x00055767) main_cset_slider_pane_g13

0x6e92,	// (0x00055773) main_cset_slider_pane_g14_ParamLimits

0x6e92,	// (0x00055773) main_cset_slider_pane_g14

0x6e9e,	// (0x0005577f) main_cset_slider_pane_g15_ParamLimits

0x6e9e,	// (0x0005577f) main_cset_slider_pane_g15

0xd7af,	// (0x0005c090) main_cset_slider_pane_t14_ParamLimits

0xd7af,	// (0x0005c090) main_cset_slider_pane_t14

0xd7e8,	// (0x0005c0c9) main_cset_slider_pane_t15_ParamLimits

0xd7e8,	// (0x0005c0c9) main_cset_slider_pane_t15

0x73e2,	// (0x00055cc3) aid_cam4_burst_size_cell_ParamLimits

0x73e2,	// (0x00055cc3) aid_cam4_burst_size_cell

0x7402,	// (0x00055ce3) grid_cam4_burst_pane_ParamLimits

0x7402,	// (0x00055ce3) grid_cam4_burst_pane

0x743c,	// (0x00055d1d) linegrid_cam4_burst_pane_ParamLimits

0x743c,	// (0x00055d1d) linegrid_cam4_burst_pane

0xd920,	// (0x0005c201) scroll_pane_cp30_ParamLimits

0xd920,	// (0x0005c201) scroll_pane_cp30

0x745e,	// (0x00055d3f) cell_cam4_burst_pane_ParamLimits

0x745e,	// (0x00055d3f) cell_cam4_burst_pane

0xd92c,	// (0x0005c20d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd92c,	// (0x0005c20d) linegrid_cam4_burst_pane_g1

0x74b3,	// (0x00055d94) linegrid_cam4_burst_pane_g2_ParamLimits

0x74b3,	// (0x00055d94) linegrid_cam4_burst_pane_g2

0xd939,	// (0x0005c21a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd939,	// (0x0005c21a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0005e329) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005e329) linegrid_cam4_burst_pane_g

0x74c4,	// (0x00055da5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74c4,	// (0x00055da5) linegrid_cam4_burst_pane_g3_copy1

0xd946,	// (0x0005c227) linegrid_cam4_burst_pane_g4_ParamLimits

0xd946,	// (0x0005c227) linegrid_cam4_burst_pane_g4

0x74e2,	// (0x00055dc3) linegrid_cam4_burst_pane_g5_ParamLimits

0x74e2,	// (0x00055dc3) linegrid_cam4_burst_pane_g5

0x74f3,	// (0x00055dd4) linegrid_cam4_burst_pane_g6_ParamLimits

0x74f3,	// (0x00055dd4) linegrid_cam4_burst_pane_g6

0xd953,	// (0x0005c234) linegrid_cam4_burst_pane_g7_ParamLimits

0xd953,	// (0x0005c234) linegrid_cam4_burst_pane_g7

0x750a,	// (0x00055deb) cell_cam4_burst_pane_g1

0xd96c,	// (0x0005c24d) main_cam5_pane_t1_ParamLimits

0xd96c,	// (0x0005c24d) main_cam5_pane_t1

0xd97e,	// (0x0005c25f) main_cam5_pane_t2_ParamLimits

0xd97e,	// (0x0005c25f) main_cam5_pane_t2

0xd990,	// (0x0005c271) main_cam5_pane_t3_ParamLimits

0xd990,	// (0x0005c271) main_cam5_pane_t3

0xd9a2,	// (0x0005c283) main_cam5_pane_t4_ParamLimits

0xd9a2,	// (0x0005c283) main_cam5_pane_t4

0xd9ba,	// (0x0005c29b) main_cam5_pane_t5_ParamLimits

0xd9ba,	// (0x0005c29b) main_cam5_pane_t5

0xd9ce,	// (0x0005c2af) main_cam5_pane_t6_ParamLimits

0xd9ce,	// (0x0005c2af) main_cam5_pane_t6

0xd9e2,	// (0x0005c2c3) main_cam5_pane_t7_ParamLimits

0xd9e2,	// (0x0005c2c3) main_cam5_pane_t7

0xd9f4,	// (0x0005c2d5) main_cam5_pane_t8_ParamLimits

0xd9f4,	// (0x0005c2d5) main_cam5_pane_t8

0xda12,	// (0x0005c2f3) main_cam5_pane_t9_ParamLimits

0xda12,	// (0x0005c2f3) main_cam5_pane_t9

0xda24,	// (0x0005c305) main_cam5_pane_t10_ParamLimits

0xda24,	// (0x0005c305) main_cam5_pane_t10

0xda36,	// (0x0005c317) main_cam5_pane_t11_ParamLimits

0xda36,	// (0x0005c317) main_cam5_pane_t11

0xda4a,	// (0x0005c32b) main_cam5_pane_t12_ParamLimits

0xda4a,	// (0x0005c32b) main_cam5_pane_t12

0xda61,	// (0x0005c342) main_cam5_pane_t13_ParamLimits

0xda61,	// (0x0005c342) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0005e335) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0005e335) main_cam5_pane_t

0x0c33,	// (0x0004f514) popup_scut_keymap_window_ParamLimits

0x0c33,	// (0x0004f514) popup_scut_keymap_window

0x751d,	// (0x00055dfe) aid_size_cell_brow_shortcut

0xa3f4,	// (0x00058cd5) bg_popup_window_pane_cp010

0x7529,	// (0x00055e0a) grid_scut_pane

0x7535,	// (0x00055e16) cell_scut_pane_ParamLimits

0x7535,	// (0x00055e16) cell_scut_pane

0x754e,	// (0x00055e2f) cell_scut_pane_g1

0xda84,	// (0x0005c365) cell_scut_pane_t1

0xda93,	// (0x0005c374) cell_scut_pane_t2

0x7557,	// (0x00055e38) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0005e350) cell_scut_pane_t

0x533e,	// (0x00053c1f) main_mup3_pane_g8_ParamLimits

0x533e,	// (0x00053c1f) main_mup3_pane_g8

0x6848,	// (0x00055129) area_vitu2_query_pane_ParamLimits

0x6848,	// (0x00055129) area_vitu2_query_pane

0xffa5,	// (0x0004e886) input_focus_pane_cp08

0xdaa2,	// (0x0005c383) area_vitu2_query_pane_g1

0x00aa,	// (0x0004e98b) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0005e357) area_vitu2_query_pane_g

0x7565,	// (0x00055e46) area_vitu2_query_pane_t1_ParamLimits

0x7565,	// (0x00055e46) area_vitu2_query_pane_t1

0x7579,	// (0x00055e5a) area_vitu2_query_pane_t2_ParamLimits

0x7579,	// (0x00055e5a) area_vitu2_query_pane_t2

0x00bb,	// (0x0004e99c) area_vitu2_query_pane_t3_ParamLimits

0x00bb,	// (0x0004e99c) area_vitu2_query_pane_t3

0x758d,	// (0x00055e6e) area_vitu2_query_pane_t4_ParamLimits

0x758d,	// (0x00055e6e) area_vitu2_query_pane_t4

0x75b5,	// (0x00055e96) area_vitu2_query_pane_t5_ParamLimits

0x75b5,	// (0x00055e96) area_vitu2_query_pane_t5

0x75dd,	// (0x00055ebe) area_vitu2_query_pane_t6_ParamLimits

0x75dd,	// (0x00055ebe) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0005e35c) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0005e35c) area_vitu2_query_pane_t

0x7629,	// (0x00055f0a) bg_button_pane_cp018

0x7637,	// (0x00055f18) bg_button_pane_cp021

0x00e3,	// (0x0004e9c4) bg_button_pane_cp022

0x00f4,	// (0x0004e9d5) input_focus_pane_cp09

0x320e,	// (0x00051aef) aid_size_touch_mv_arrow_left

0x3237,	// (0x00051b18) aid_size_touch_mv_arrow_right

0x6eb6,	// (0x00055797) main_cset_slider_pane_g16_ParamLimits

0x6eb6,	// (0x00055797) main_cset_slider_pane_g16

0x6ec4,	// (0x000557a5) main_cset_slider_pane_g17_ParamLimits

0x6ec4,	// (0x000557a5) main_cset_slider_pane_g17

0x750a,	// (0x00055deb) cell_cam4_burst_pane_g1_ParamLimits

0x9a0c,	// (0x000582ed) compa_mode_pane

0x70ae,	// (0x0005598f) popup_vtel_slider_window_g3_ParamLimits

0x70ae,	// (0x0005598f) popup_vtel_slider_window_g3

0x70c5,	// (0x000559a6) popup_vtel_slider_window_g4_ParamLimits

0x70c5,	// (0x000559a6) popup_vtel_slider_window_g4

0x70dc,	// (0x000559bd) popup_vtel_slider_window_t1_ParamLimits

0x70dc,	// (0x000559bd) popup_vtel_slider_window_t1

0x9a0c,	// (0x000582ed) main_cl_pane

0xc7eb,	// (0x0005b0cc) popup_imed_adjust2_window_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_tb_trans_pane_cp05_ParamLimits

0xd10d,	// (0x0005b9ee) popup_imed_adjust2_window_g1_ParamLimits

0xd11c,	// (0x0005b9fd) popup_imed_adjust2_window_g2_ParamLimits

0xd11c,	// (0x0005b9fd) popup_imed_adjust2_window_g2

0xd128,	// (0x0005ba09) popup_imed_adjust2_window_g3_ParamLimits

0xd128,	// (0x0005ba09) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0005e0c7) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0005e0c7) popup_imed_adjust2_window_g

0xd134,	// (0x0005ba15) popup_imed_adjust2_window_t1_ParamLimits

0xd14c,	// (0x0005ba2d) slider_imed_adjust_pane_ParamLimits

0xd160,	// (0x0005ba41) slider_imed_adjust_pane_g1_ParamLimits

0xd170,	// (0x0005ba51) slider_imed_adjust_pane_g2_ParamLimits

0xd180,	// (0x0005ba61) slider_imed_adjust_pane_g3_ParamLimits

0xd191,	// (0x0005ba72) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0005e0ce) slider_imed_adjust_pane_g_ParamLimits

0x65c8,	// (0x00054ea9) aid_touch_area_cam4_ParamLimits

0x65c8,	// (0x00054ea9) aid_touch_area_cam4

0xaac3,	// (0x000593a4) battery_pane_cp01

0x669a,	// (0x00054f7b) main_camera4_pane_g6_ParamLimits

0x669a,	// (0x00054f7b) main_camera4_pane_g6

0x66c4,	// (0x00054fa5) main_camera4_pane_t2_ParamLimits

0x66c4,	// (0x00054fa5) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0005e1d1) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0005e1d1) main_camera4_pane_t

0x66f9,	// (0x00054fda) aid_touch_area_vid4_ParamLimits

0x66f9,	// (0x00054fda) aid_touch_area_vid4

0x674d,	// (0x0005502e) main_video4_pane_g5_ParamLimits

0x674d,	// (0x0005502e) main_video4_pane_g5

0x6772,	// (0x00055053) vid4_progress_pane_ParamLimits

0x6772,	// (0x00055053) vid4_progress_pane

0xd775,	// (0x0005c056) main_cset_slider_pane_g18_ParamLimits

0xd775,	// (0x0005c056) main_cset_slider_pane_g18

0xd960,	// (0x0005c241) cell_cam4_burst_pane_g2_ParamLimits

0xd960,	// (0x0005c241) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0005e330) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0005e330) cell_cam4_burst_pane_g

0xa1c8,	// (0x00058aa9) bg_cl_pane_ParamLimits

0xa1c8,	// (0x00058aa9) bg_cl_pane

0x7643,	// (0x00055f24) cl_header_pane_ParamLimits

0x7643,	// (0x00055f24) cl_header_pane

0x7657,	// (0x00055f38) cl_listscroll_pane_ParamLimits

0x7657,	// (0x00055f38) cl_listscroll_pane

0xdaae,	// (0x0005c38f) bg_cl_pane_g1

0xdab6,	// (0x0005c397) bg_cl_pane_g2

0xdabe,	// (0x0005c39f) bg_cl_pane_g3

0xdac6,	// (0x0005c3a7) bg_cl_pane_g4

0xdace,	// (0x0005c3af) bg_cl_pane_g5

0xdad6,	// (0x0005c3b7) bg_cl_pane_g6

0xdade,	// (0x0005c3bf) bg_cl_pane_g7

0xdae6,	// (0x0005c3c7) bg_cl_pane_g8

0xdaee,	// (0x0005c3cf) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0005e36b) bg_cl_pane_g

0x7667,	// (0x00055f48) aid_height_cl_leading_ParamLimits

0x7667,	// (0x00055f48) aid_height_cl_leading

0x7673,	// (0x00055f54) aid_height_cl_text_ParamLimits

0x7673,	// (0x00055f54) aid_height_cl_text

0x9a65,	// (0x00058346) bg_cl_header_pane_ParamLimits

0x9a65,	// (0x00058346) bg_cl_header_pane

0x7692,	// (0x00055f73) cl_header_pane_g1_ParamLimits

0x7692,	// (0x00055f73) cl_header_pane_g1

0x76a8,	// (0x00055f89) cl_header_pane_t1_ParamLimits

0x76a8,	// (0x00055f89) cl_header_pane_t1

0xdaf6,	// (0x0005c3d7) cl_list_pane

0xd748,	// (0x0005c029) hc_scroll_pane_cp01

0xa63b,	// (0x00058f1c) bg_cl_header_pane_g1

0xd62a,	// (0x0005bf0b) bg_cl_header_pane_g2

0xa65b,	// (0x00058f3c) bg_cl_header_pane_g3

0xd63a,	// (0x0005bf1b) bg_cl_header_pane_g4

0xd632,	// (0x0005bf13) bg_cl_header_pane_g5

0xd86f,	// (0x0005c150) bg_cl_header_pane_g6

0xd652,	// (0x0005bf33) bg_cl_header_pane_g7

0xd65a,	// (0x0005bf3b) bg_cl_header_pane_g8

0xd64a,	// (0x0005bf2b) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0005e37e) bg_cl_header_pane_g

0x76c1,	// (0x00055fa2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76c1,	// (0x00055fa2) hc_cl_list_double_graphic_heading_pane

0x76d4,	// (0x00055fb5) hc_cl_list_single_graphic_pane_ParamLimits

0x76d4,	// (0x00055fb5) hc_cl_list_single_graphic_pane

0x76ec,	// (0x00055fcd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76ec,	// (0x00055fcd) hc_cl_list_single_graphic_pane_g1

0x76f8,	// (0x00055fd9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76f8,	// (0x00055fd9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0005e391) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0005e391) hc_cl_list_single_graphic_pane_g

0x770c,	// (0x00055fed) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x770c,	// (0x00055fed) hc_cl_list_single_graphic_pane_t1

0x76ec,	// (0x00055fcd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76ec,	// (0x00055fcd) hc_cl_list_double_graphic_heading_pane_g1

0x7721,	// (0x00056002) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7721,	// (0x00056002) hc_cl_list_double_graphic_heading_pane_g2

0x7735,	// (0x00056016) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7735,	// (0x00056016) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0005e396) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0005e396) hc_cl_list_double_graphic_heading_pane_g

0x7749,	// (0x0005602a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7749,	// (0x0005602a) hc_cl_list_double_graphic_heading_pane_t1

0x775e,	// (0x0005603f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x775e,	// (0x0005603f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0005e39d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0005e39d) hc_cl_list_double_graphic_heading_pane_t

0x7773,	// (0x00056054) vid4_progress_pane_g1

0x7785,	// (0x00056066) vid4_progress_pane_g2

0xa76c,	// (0x0005904d) vid4_progress_pane_g3

0xac28,	// (0x00059509) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0005e3a2) vid4_progress_pane_g

0xac46,	// (0x00059527) vid4_progress_pane_t1

0xac5b,	// (0x0005953c) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0005e3ad) vid4_progress_pane_t

0xac86,	// (0x00059567) wait_bar_pane_cp07

0xc9fd,	// (0x0005b2de) blid_firmament_pane_ParamLimits

0xca40,	// (0x0005b321) popup_blid_sat_info2_window_g1

0xca64,	// (0x0005b345) popup_blid_sat_info2_window_t3

0xca72,	// (0x0005b353) popup_blid_sat_info2_window_t4

0xca80,	// (0x0005b361) popup_blid_sat_info2_window_t5

0xca8e,	// (0x0005b36f) popup_blid_sat_info2_window_t6

0xca9e,	// (0x0005b37f) popup_blid_sat_info2_window_t7

0xcaac,	// (0x0005b38d) popup_blid_sat_info2_window_t8

0xcaba,	// (0x0005b39b) popup_blid_sat_info2_window_t9

0xcac8,	// (0x0005b3a9) popup_blid_sat_info2_window_t10

0xcb90,	// (0x0005b471) aid_firma_cardinal_ParamLimits

0xcba4,	// (0x0005b485) blid_firmament_pane_t1_ParamLimits

0xcbbb,	// (0x0005b49c) blid_firmament_pane_t2_ParamLimits

0xcbd2,	// (0x0005b4b3) blid_firmament_pane_t3_ParamLimits

0xcbe9,	// (0x0005b4ca) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0005dfbb) blid_firmament_pane_t_ParamLimits

0xcc00,	// (0x0005b4e1) blid_sat_info_pane_ParamLimits

0x9a65,	// (0x00058346) main_cam_set_pane_ParamLimits

0x5c1f,	// (0x00054500) aid_size_cell_colour_35_ParamLimits

0x5c3f,	// (0x00054520) aid_size_cell_colour_112_ParamLimits

0x5c5f,	// (0x00054540) aid_size_cell_effect_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_tb_trans_pane_cp02_ParamLimits

0xaef0,	// (0x000597d1) heading_imed_pane_ParamLimits

0x5c7f,	// (0x00054560) listscroll_imed_pane_ParamLimits

0xbde1,	// (0x0005a6c2) popup_call2_audio_first_window_g5_ParamLimits

0xbde1,	// (0x0005a6c2) popup_call2_audio_first_window_g5

0x6230,	// (0x00054b11) aid_size_touch_image3_arrow_left_ParamLimits

0x6230,	// (0x00054b11) aid_size_touch_image3_arrow_left

0x625c,	// (0x00054b3d) aid_size_touch_image3_arrow_right_ParamLimits

0x625c,	// (0x00054b3d) aid_size_touch_image3_arrow_right

0xac71,	// (0x00059552) vid4_progress_pane_t3

0x5f9e,	// (0x0005487f) main_hwr_training_symbol_option_pane_ParamLimits

0x5f9e,	// (0x0005487f) main_hwr_training_symbol_option_pane

0xd410,	// (0x0005bcf1) popup_hwr_training_preview_window_ParamLimits

0xd410,	// (0x0005bcf1) popup_hwr_training_preview_window

0x5fbe,	// (0x0005489f) hwr_training_navi_pane_g5_ParamLimits

0x5fbe,	// (0x0005489f) hwr_training_navi_pane_g5

0xd618,	// (0x0005bef9) popup_char_count_window

0x9a65,	// (0x00058346) bg_popup_sub_pane_cp20_ParamLimits

0x71f2,	// (0x00055ad3) list_vitu2_match_list_pane_ParamLimits

0x7201,	// (0x00055ae2) vitu2_page_scroll_pane_ParamLimits

0x7201,	// (0x00055ae2) vitu2_page_scroll_pane

0xdaff,	// (0x0005c3e0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaff,	// (0x0005c3e0) list_single_hwr_training_symbol_option_pane

0xdb12,	// (0x0005c3f3) list_single_hwr_training_symbol_option_pane_g1

0xdb1a,	// (0x0005c3fb) list_single_hwr_training_symbol_option_pane_t1

0xdb28,	// (0x0005c409) bg_button_pane_cp023

0xdb31,	// (0x0005c412) bg_button_pane_cp024

0x77d4,	// (0x000560b5) vitu2_page_scroll_pane_g1

0x77dc,	// (0x000560bd) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0005e3b4) vitu2_page_scroll_pane_g

0x77e6,	// (0x000560c7) vitu2_page_scroll_pane_t1

0xdb64,	// (0x0005c445) popup_char_count_window_g1

0xdb6d,	// (0x0005c44e) popup_char_count_window_g2

0xdb76,	// (0x0005c457) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0005e3b9) popup_char_count_window_g

0xdb7f,	// (0x0005c460) popup_char_count_window_t1

0x9a0c,	// (0x000582ed) main_vded2_pane

0xd0f9,	// (0x0005b9da) aid_size_cell_imed_line

0xd103,	// (0x0005b9e4) grid_imed_line_width_pane

0xab7d,	// (0x0005945e) vid4_indicators_pane_g4

0xdb8d,	// (0x0005c46e) cell_imed_line_width_pane_ParamLimits

0xdb8d,	// (0x0005c46e) cell_imed_line_width_pane

0xdba3,	// (0x0005c484) cell_imed_line_width_pane_g1

0xd2fb,	// (0x0005bbdc) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0005e3c0) cell_imed_line_width_pane_g

0x77f5,	// (0x000560d6) main_vded2_pane_g1_ParamLimits

0x77f5,	// (0x000560d6) main_vded2_pane_g1

0x7810,	// (0x000560f1) main_vded2_pane_g2_ParamLimits

0x7810,	// (0x000560f1) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0005e3c5) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0005e3c5) main_vded2_pane_g

0x7822,	// (0x00056103) vded2_slider_pane_ParamLimits

0x7822,	// (0x00056103) vded2_slider_pane

0x7832,	// (0x00056113) aid_size_touch_vded2_end

0x783c,	// (0x0005611d) aid_size_touch_vded2_playhead

0xdbac,	// (0x0005c48d) aid_size_touch_vded2_start

0xdbb4,	// (0x0005c495) vded2_slider_bg_pane

0xdbbd,	// (0x0005c49e) vded2_slider_pane_g1

0xdbc6,	// (0x0005c4a7) vded2_slider_pane_g2

0x7846,	// (0x00056127) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0005e3ca) vded2_slider_pane_g

0xdbce,	// (0x0005c4af) vded2_slider_bg_pane_g1

0xdbd7,	// (0x0005c4b8) vded2_slider_bg_pane_g2

0xdbe0,	// (0x0005c4c1) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0005e3d1) vded2_slider_bg_pane_g

0x38f2,	// (0x000521d3) aid_postcard_touch_down_pane_ParamLimits

0x38f2,	// (0x000521d3) aid_postcard_touch_down_pane

0x390a,	// (0x000521eb) aid_postcard_touch_up_pane_ParamLimits

0x390a,	// (0x000521eb) aid_postcard_touch_up_pane

0x9a0c,	// (0x000582ed) main_blid2_pane

0xc7cd,	// (0x0005b0ae) popup_blid2_search_window

0x9a0c,	// (0x000582ed) blid2_gps_pane

0x9a0c,	// (0x000582ed) blid2_navig_pane

0x9a0c,	// (0x000582ed) blid2_search_pane

0x9a0c,	// (0x000582ed) blid2_tripm_pane

0x7851,	// (0x00056132) blid2_search_pane_g1_ParamLimits

0x7851,	// (0x00056132) blid2_search_pane_g1

0x7864,	// (0x00056145) blid2_search_pane_t1_ParamLimits

0x7864,	// (0x00056145) blid2_search_pane_t1

0x7876,	// (0x00056157) aid_size_cell_blid2_gps_ParamLimits

0x7876,	// (0x00056157) aid_size_cell_blid2_gps

0x788e,	// (0x0005616f) blid2_gps_pane_g1_ParamLimits

0x788e,	// (0x0005616f) blid2_gps_pane_g1

0x78a2,	// (0x00056183) grid_blid2_satellite_pane_ParamLimits

0x78a2,	// (0x00056183) grid_blid2_satellite_pane

0x78ba,	// (0x0005619b) blid2_navig_pane_g1_ParamLimits

0x78ba,	// (0x0005619b) blid2_navig_pane_g1

0x78c6,	// (0x000561a7) blid2_navig_pane_t1_ParamLimits

0x78c6,	// (0x000561a7) blid2_navig_pane_t1

0x78e1,	// (0x000561c2) blid2_navig_pane_t2_ParamLimits

0x78e1,	// (0x000561c2) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0005e3d8) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0005e3d8) blid2_navig_pane_t

0x78fc,	// (0x000561dd) blid2_navig_ring_pane_ParamLimits

0x78fc,	// (0x000561dd) blid2_navig_ring_pane

0x7917,	// (0x000561f8) blid2_speed_pane_ParamLimits

0x7917,	// (0x000561f8) blid2_speed_pane

0x7923,	// (0x00056204) blid2_tripm_pane_g1_ParamLimits

0x7923,	// (0x00056204) blid2_tripm_pane_g1

0x793e,	// (0x0005621f) blid2_tripm_pane_g2_ParamLimits

0x793e,	// (0x0005621f) blid2_tripm_pane_g2

0x7952,	// (0x00056233) blid2_tripm_pane_g3_ParamLimits

0x7952,	// (0x00056233) blid2_tripm_pane_g3

0x7966,	// (0x00056247) blid2_tripm_pane_g4_ParamLimits

0x7966,	// (0x00056247) blid2_tripm_pane_g4

0x797a,	// (0x0005625b) blid2_tripm_pane_g5_ParamLimits

0x797a,	// (0x0005625b) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0005e3dd) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0005e3dd) blid2_tripm_pane_g

0x79a0,	// (0x00056281) blid2_tripm_pane_t1_ParamLimits

0x79a0,	// (0x00056281) blid2_tripm_pane_t1

0x79b9,	// (0x0005629a) blid2_tripm_pane_t2_ParamLimits

0x79b9,	// (0x0005629a) blid2_tripm_pane_t2

0x79d2,	// (0x000562b3) blid2_tripm_pane_t3_ParamLimits

0x79d2,	// (0x000562b3) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0005e3ea) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0005e3ea) blid2_tripm_pane_t

0x7a19,	// (0x000562fa) cell_blid2_satellite_pane_ParamLimits

0x7a19,	// (0x000562fa) cell_blid2_satellite_pane

0x7a37,	// (0x00056318) cell_blid2_satellite_pane_g1

0xdbe9,	// (0x0005c4ca) cell_blid2_satellite_pane_t1

0xcc10,	// (0x0005b4f1) blid2_speed_pane_g1

0xdbf7,	// (0x0005c4d8) blid2_speed_pane_t1

0xdc05,	// (0x0005c4e6) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0005e3f3) blid2_speed_pane_t

0xcc10,	// (0x0005b4f1) blid2_navig_ring_pane_g1

0x7a40,	// (0x00056321) blid2_navig_ring_pane_g2

0x7a48,	// (0x00056329) blid2_navig_ring_pane_g3

0x7a50,	// (0x00056331) blid2_navig_ring_pane_g4

0x7a58,	// (0x00056339) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0005e3f8) blid2_navig_ring_pane_g

0x9a0c,	// (0x000582ed) bg_popup_window_pane_cp011

0xdc13,	// (0x0005c4f4) popup_blid2_search_window_g1

0xdc1b,	// (0x0005c4fc) popup_blid2_search_window_t1

0xdc29,	// (0x0005c50a) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0005e403) popup_blid2_search_window_t

0xa54a,	// (0x00058e2b) main_browser_pane_g1

0xa1c8,	// (0x00058aa9) main_browser_pane_ParamLimits

0x9a65,	// (0x00058346) bg_button_pane_cp011_ParamLimits

0x6a7c,	// (0x0005535d) cell_vitu2_function_pane_g1_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_popup_sub_pane_cp22_ParamLimits

0xffa5,	// (0x0004e886) input_focus_pane_cp08_ParamLimits

0x738f,	// (0x00055c70) popup_vitu2_query_button_pane_ParamLimits

0x738f,	// (0x00055c70) popup_vitu2_query_button_pane

0xffbc,	// (0x0004e89d) popup_vitu2_query_input_button_pane

0xd8aa,	// (0x0005c18b) popup_vitu2_query_window_g1_ParamLimits

0xffc6,	// (0x0004e8a7) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0005e304) popup_vitu2_query_window_g_ParamLimits

0x9a0c,	// (0x000582ed) bg_button_pane_cp026

0x7a60,	// (0x00056341) popup_vitu2_query_input_button_pane_g1

0x9a0c,	// (0x000582ed) bg_button_pane_cp025

0xdc37,	// (0x0005c518) popup_vitu2_query_button_pane_t1

0x5016,	// (0x000538f7) main_mp3_pane_t6

0x5024,	// (0x00053905) popup_slider_window_cp01

0xaae1,	// (0x000593c2) cam4_battery_pane

0xab36,	// (0x00059417) cam4_battery_pane_cp02

0xac20,	// (0x00059501) cam4_battery_pane_cp01

0xac20,	// (0x00059501) cam4_battery_pane_cp03

0xcc10,	// (0x0005b4f1) cam4_battery_pane_g1

0xdc45,	// (0x0005c526) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0005e408) cam4_battery_pane_g

0xcad6,	// (0x0005b3b7) popup_blid_sat_info2_window_t11

0x320e,	// (0x00051aef) aid_size_touch_mv_arrow_left_ParamLimits

0x3237,	// (0x00051b18) aid_size_touch_mv_arrow_right_ParamLimits

0xb2f0,	// (0x00059bd1) navi_pane_g1_ParamLimits

0x3276,	// (0x00051b57) navi_pane_g2_ParamLimits

0x32a4,	// (0x00051b85) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0005dccd) navi_pane_g_ParamLimits

0x32fe,	// (0x00051bdf) navi_pane_mv_t1_ParamLimits

0x5c8b,	// (0x0005456c) grid_imed_effect_pane_ParamLimits

0x1db3,	// (0x00050694) aid_placing_vt_slider_lsc

0xa495,	// (0x00058d76) aid_placing_vt_slider_prt

0x9a65,	// (0x00058346) bg_tb_trans_pane_cp01_ParamLimits

0xcd60,	// (0x0005b641) popup_image_details_window_g1_ParamLimits

0xcd73,	// (0x0005b654) popup_image_details_window_g2_ParamLimits

0xcd88,	// (0x0005b669) popup_image_details_window_g3_ParamLimits

0xcd88,	// (0x0005b669) popup_image_details_window_g3

0xf71f,	// (0x0005e000) popup_image_details_window_g_ParamLimits

0xcd9c,	// (0x0005b67d) popup_image_details_window_t1_ParamLimits

0xcdae,	// (0x0005b68f) popup_image_details_window_t2_ParamLimits

0xcdc7,	// (0x0005b6a8) popup_image_details_window_t3_ParamLimits

0xcddb,	// (0x0005b6bc) popup_image_details_window_t4_ParamLimits

0xcdf6,	// (0x0005b6d7) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0005e007) popup_image_details_window_t_ParamLimits

0x767f,	// (0x00055f60) cl_header_name_pane_ParamLimits

0x767f,	// (0x00055f60) cl_header_name_pane

0x7a68,	// (0x00056349) cl_header_name_pane_t1_ParamLimits

0x7a68,	// (0x00056349) cl_header_name_pane_t1

0x7a89,	// (0x0005636a) cl_header_name_pane_t2_ParamLimits

0x7a89,	// (0x0005636a) cl_header_name_pane_t2

0x7acb,	// (0x000563ac) cl_header_name_pane_t3_ParamLimits

0x7acb,	// (0x000563ac) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0005e40d) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0005e40d) cl_header_name_pane_t

0x32cf,	// (0x00051bb0) navi_pane_mv_g2_ParamLimits

0xd5f2,	// (0x0005bed3) field_vitu2_entry_pane_g1_ParamLimits

0xd5fe,	// (0x0005bedf) field_vitu2_entry_pane_g2_ParamLimits

0xd60a,	// (0x0005beeb) field_vitu2_entry_pane_g3_ParamLimits

0xd60a,	// (0x0005beeb) field_vitu2_entry_pane_g3

0xf922,	// (0x0005e203) field_vitu2_entry_pane_g_ParamLimits

0xabb2,	// (0x00059493) cell_vitu2_itu_pane_g1_ParamLimits

0x6a10,	// (0x000552f1) cell_vitu2_itu_pane_g2_ParamLimits

0x6a10,	// (0x000552f1) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0005e20f) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0005e20f) cell_vitu2_itu_pane_g

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp05_ParamLimits

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp05

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp03

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp04

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp10_ParamLimits

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp10

0x00e3,	// (0x0004e9c4) bg_vkb2_func_pane_cp08

0x7629,	// (0x00055f0a) bg_vkb2_func_pane_cp06

0x7637,	// (0x00055f18) bg_vkb2_func_pane_cp07

0xdb3a,	// (0x0005c41b) bg_vkb2_func_pane_cp11_ParamLimits

0xdb3a,	// (0x0005c41b) bg_vkb2_func_pane_cp11

0xdb4f,	// (0x0005c430) bg_vkb2_func_pane_cp12_ParamLimits

0xdb4f,	// (0x0005c430) bg_vkb2_func_pane_cp12

0x9a0c,	// (0x000582ed) bg_vkb2_func_pane_cp09

0xd62a,	// (0x0005bf0b) bg_vkb2_func_pane_g1

0xa65b,	// (0x00058f3c) bg_vkb2_func_pane_g2

0xd632,	// (0x0005bf13) bg_vkb2_func_pane_g3

0xd63a,	// (0x0005bf1b) bg_vkb2_func_pane_g4

0xd86f,	// (0x0005c150) bg_vkb2_func_pane_g5

0xd652,	// (0x0005bf33) bg_vkb2_func_pane_g6

0xd65a,	// (0x0005bf3b) bg_vkb2_func_pane_g7

0xd64a,	// (0x0005bf2b) bg_vkb2_func_pane_g8

0xa63b,	// (0x00058f1c) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0005e414) bg_vkb2_func_pane_g

0x798e,	// (0x0005626f) blid2_tripm_pane_g6_ParamLimits

0x798e,	// (0x0005626f) blid2_tripm_pane_g6

0xd4c8,	// (0x0005bda9) mp4_progress_pane_g1

0x7a05,	// (0x000562e6) blid2_tripm_values_pane_ParamLimits

0x7a05,	// (0x000562e6) blid2_tripm_values_pane

0x7afc,	// (0x000563dd) blid2_tripm_values_pane_t1

0x7b0a,	// (0x000563eb) blid2_tripm_values_pane_t2

0x7b18,	// (0x000563f9) blid2_tripm_values_pane_t3

0x7b26,	// (0x00056407) blid2_tripm_values_pane_t4

0x7b34,	// (0x00056415) blid2_tripm_values_pane_t5

0x7b42,	// (0x00056423) blid2_tripm_values_pane_t6

0x7b50,	// (0x00056431) blid2_tripm_values_pane_t7

0x7b5e,	// (0x0005643f) blid2_tripm_values_pane_t8

0x7b6c,	// (0x0005644d) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0005e427) blid2_tripm_values_pane_t

0x1df0,	// (0x000506d1) call_video_pane_t1_ParamLimits

0x1e0a,	// (0x000506eb) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005db4f) call_video_pane_t_ParamLimits

0xfd47,	// (0x0004e628) msg_header_pane_g1_ParamLimits

0xb513,	// (0x00059df4) msg_header_pane_g2_ParamLimits

0xb513,	// (0x00059df4) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0005dd70) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0005dd70) msg_header_pane_g

0xa1c8,	// (0x00058aa9) main_clock2_pane_ParamLimits

0x5972,	// (0x00054253) grid_clock2_toolbar_pane_ParamLimits

0x5972,	// (0x00054253) grid_clock2_toolbar_pane

0x5972,	// (0x00054253) listscroll_clock2_pane_ParamLimits

0x5972,	// (0x00054253) listscroll_clock2_pane

0x5a69,	// (0x0005434a) main_clock2_pane_t3_ParamLimits

0x5a69,	// (0x0005434a) main_clock2_pane_t3

0x5a8d,	// (0x0005436e) main_clock2_pane_t4_ParamLimits

0x5a8d,	// (0x0005436e) main_clock2_pane_t4

0xdc4f,	// (0x0005c530) cell_clock2_toolbar_pane

0xdc57,	// (0x0005c538) cell_clock2_toolbar_pane_cp01

0xdc57,	// (0x0005c538) cell_clock2_toolbar_pane_cp02

0xdc5f,	// (0x0005c540) cell_clock2_toolbar_pane_cp03

0xdc67,	// (0x0005c548) list_clock2_pane

0xb256,	// (0x00059b37) scroll_pane_cp10

0xdc6f,	// (0x0005c550) list_single_clock2_pane_ParamLimits

0xdc6f,	// (0x0005c550) list_single_clock2_pane

0xa3f4,	// (0x00058cd5) list_highlight_pane_cp08

0xdc7c,	// (0x0005c55d) list_single_clock2_pane_t1

0xdc8a,	// (0x0005c56b) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0005e43a) list_single_clock2_pane_t

0x9a0c,	// (0x000582ed) bg_button_pane_cp10

0xdc98,	// (0x0005c579) cell_clock2_toolbar_pane_g1

0x387e,	// (0x0005215f) aid_main_viewer_pane_g1_ParamLimits

0x387e,	// (0x0005215f) aid_main_viewer_pane_g1

0x388c,	// (0x0005216d) aid_main_viewer_pane_g2_ParamLimits

0x388c,	// (0x0005216d) aid_main_viewer_pane_g2

0x389a,	// (0x0005217b) aid_main_viewer_pane_g3_ParamLimits

0x389a,	// (0x0005217b) aid_main_viewer_pane_g3

0x38a9,	// (0x0005218a) aid_main_viewer_pane_g4_ParamLimits

0x38a9,	// (0x0005218a) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0005dd81) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0005dd81) aid_main_viewer_pane_g

0x41fc,	// (0x00052add) main_calc_pane_ParamLimits

0x4210,	// (0x00052af1) main_dialer2_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_cam6_pane

0x9a0c,	// (0x000582ed) main_vid6_pane

0x597e,	// (0x0005425f) listscroll_gen_pane_cp06_ParamLimits

0x597e,	// (0x0005425f) listscroll_gen_pane_cp06

0x5ab0,	// (0x00054391) main_clock2_pane_t5_ParamLimits

0x5ab0,	// (0x00054391) main_clock2_pane_t5

0x5b10,	// (0x000543f1) aid_call2_pane_cp10_ParamLimits

0x5b22,	// (0x00054403) aid_call_pane_cp10_ParamLimits

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b34,	// (0x00054415) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b34,	// (0x00054415) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2c5,	// (0x00059ba6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0005e0bc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b4a,	// (0x0005442b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61dd,	// (0x00054abe) cell_dialer2_keypad_pane_g2_ParamLimits

0x61dd,	// (0x00054abe) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0005e1a2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0005e1a2) cell_dialer2_keypad_pane_g

0x61f9,	// (0x00054ada) cell_dialer2_keypad_pane_t1

0x6da7,	// (0x00055688) main_cset_text2_pane_ParamLimits

0x6da7,	// (0x00055688) main_cset_text2_pane

0xdaa2,	// (0x0005c383) area_vitu2_query_pane_g1_ParamLimits

0x00aa,	// (0x0004e98b) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0005e357) area_vitu2_query_pane_g_ParamLimits

0x7605,	// (0x00055ee6) area_vitu2_query_pane_t7_ParamLimits

0x7605,	// (0x00055ee6) area_vitu2_query_pane_t7

0x7629,	// (0x00055f0a) bg_button_pane_cp018_ParamLimits

0x7637,	// (0x00055f18) bg_button_pane_cp021_ParamLimits

0x00e3,	// (0x0004e9c4) bg_button_pane_cp022_ParamLimits

0x00e3,	// (0x0004e9c4) bg_vkb2_func_pane_cp08_ParamLimits

0x7629,	// (0x00055f0a) bg_vkb2_func_pane_cp06_ParamLimits

0x7637,	// (0x00055f18) bg_vkb2_func_pane_cp07_ParamLimits

0x00f4,	// (0x0004e9d5) input_focus_pane_cp09_ParamLimits

0xac9a,	// (0x0005957b) cam6_autofocus_pane_ParamLimits

0xac9a,	// (0x0005957b) cam6_autofocus_pane

0x7b7a,	// (0x0005645b) cam6_image_uncrop_pane_ParamLimits

0x7b7a,	// (0x0005645b) cam6_image_uncrop_pane

0x7b89,	// (0x0005646a) cam6_indi_pane_ParamLimits

0x7b89,	// (0x0005646a) cam6_indi_pane

0x7b9f,	// (0x00056480) cam6_mode_pane_ParamLimits

0x7b9f,	// (0x00056480) cam6_mode_pane

0x7bb1,	// (0x00056492) cam6_timer_pane_ParamLimits

0x7bb1,	// (0x00056492) cam6_timer_pane

0x7bbd,	// (0x0005649e) cam6_zoom_pane_ParamLimits

0x7bbd,	// (0x0005649e) cam6_zoom_pane

0x7bcb,	// (0x000564ac) cam6_mode_pane_g1_ParamLimits

0x7bcb,	// (0x000564ac) cam6_mode_pane_g1

0x7bdb,	// (0x000564bc) cam6_mode_pane_g2_ParamLimits

0x7bdb,	// (0x000564bc) cam6_mode_pane_g2

0x7beb,	// (0x000564cc) cam6_mode_pane_g3_ParamLimits

0x7beb,	// (0x000564cc) cam6_mode_pane_g3

0x7bfb,	// (0x000564dc) cam6_mode_pane_g4_ParamLimits

0x7bfb,	// (0x000564dc) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0005e43f) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0005e43f) cam6_mode_pane_g

0xdca0,	// (0x0005c581) bg_tb_trans_pane_cp08_ParamLimits

0xdca0,	// (0x0005c581) bg_tb_trans_pane_cp08

0xdcae,	// (0x0005c58f) cam6_battery_pane_ParamLimits

0xdcae,	// (0x0005c58f) cam6_battery_pane

0xdcc4,	// (0x0005c5a5) cam6_indi_pane_g1_ParamLimits

0xdcc4,	// (0x0005c5a5) cam6_indi_pane_g1

0xdcd6,	// (0x0005c5b7) cam6_indi_pane_g2_ParamLimits

0xdcd6,	// (0x0005c5b7) cam6_indi_pane_g2

0xdce8,	// (0x0005c5c9) cam6_indi_pane_g3_ParamLimits

0xdce8,	// (0x0005c5c9) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0005e448) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005e448) cam6_indi_pane_g

0xdcfa,	// (0x0005c5db) cam6_indi_pane_t1_ParamLimits

0xdcfa,	// (0x0005c5db) cam6_indi_pane_t1

0x67ba,	// (0x0005509b) cam6_autofocus_pane_g1

0x67c2,	// (0x000550a3) cam6_autofocus_pane_g2

0x67ca,	// (0x000550ab) cam6_autofocus_pane_g3

0x67d2,	// (0x000550b3) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0005e44f) cam6_autofocus_pane_g

0xdd20,	// (0x0005c601) cam6_timer_pane_g1

0xdd28,	// (0x0005c609) cam6_timer_pane_t1

0xdd36,	// (0x0005c617) cam6_zoom_cont_pane

0xdd3e,	// (0x0005c61f) cam6_zoom_pane_g1

0xdd46,	// (0x0005c627) cam6_zoom_pane_g2

0x7c0b,	// (0x000564ec) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0005e458) cam6_zoom_pane_g

0xcc10,	// (0x0005b4f1) cam6_battery_pane_g1

0xcc10,	// (0x0005b4f1) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0005dfc4) cam6_battery_pane_g

0xdd4e,	// (0x0005c62f) cam6_zoom_cont_pane_g1

0xdd57,	// (0x0005c638) cam6_zoom_cont_pane_g2

0xdd60,	// (0x0005c641) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0005e45f) cam6_zoom_cont_pane_g

0x7c28,	// (0x00056509) cam6_mode_pane_cp_ParamLimits

0x7c28,	// (0x00056509) cam6_mode_pane_cp

0x7bbd,	// (0x0005649e) cam6_zoom_pane_cp_ParamLimits

0x7bbd,	// (0x0005649e) cam6_zoom_pane_cp

0x7c3a,	// (0x0005651b) vid6_image_uncrop_cif_pane_ParamLimits

0x7c3a,	// (0x0005651b) vid6_image_uncrop_cif_pane

0x7c4a,	// (0x0005652b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c4a,	// (0x0005652b) vid6_image_uncrop_nhd_pane

0x7b7a,	// (0x0005645b) vid6_image_uncrop_vga_pane_ParamLimits

0x7b7a,	// (0x0005645b) vid6_image_uncrop_vga_pane

0x7c59,	// (0x0005653a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c59,	// (0x0005653a) vid6_image_uncrop_wvga_pane

0x7c68,	// (0x00056549) vid6_indi_pane_ParamLimits

0x7c68,	// (0x00056549) vid6_indi_pane

0xdca0,	// (0x0005c581) bg_tb_trans_pane_cp09_ParamLimits

0xdca0,	// (0x0005c581) bg_tb_trans_pane_cp09

0xdd78,	// (0x0005c659) cam6_battery_pane_cp_ParamLimits

0xdd78,	// (0x0005c659) cam6_battery_pane_cp

0xdd84,	// (0x0005c665) vid6_indi_pane_g1_ParamLimits

0xdd84,	// (0x0005c665) vid6_indi_pane_g1

0xdd96,	// (0x0005c677) vid6_indi_pane_g2_ParamLimits

0xdd96,	// (0x0005c677) vid6_indi_pane_g2

0xdda8,	// (0x0005c689) vid6_indi_pane_g3_ParamLimits

0xdda8,	// (0x0005c689) vid6_indi_pane_g3

0xddbf,	// (0x0005c6a0) vid6_indi_pane_g4_ParamLimits

0xddbf,	// (0x0005c6a0) vid6_indi_pane_g4

0xddd6,	// (0x0005c6b7) vid6_indi_pane_g5_ParamLimits

0xddd6,	// (0x0005c6b7) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0005e466) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0005e466) vid6_indi_pane_g

0xddf0,	// (0x0005c6d1) vid6_indi_pane_t1_ParamLimits

0xddf0,	// (0x0005c6d1) vid6_indi_pane_t1

0xde06,	// (0x0005c6e7) vid6_indi_pane_t2_ParamLimits

0xde06,	// (0x0005c6e7) vid6_indi_pane_t2

0xde2e,	// (0x0005c70f) vid6_indi_pane_t3_ParamLimits

0xde2e,	// (0x0005c70f) vid6_indi_pane_t3

0xde56,	// (0x0005c737) vid6_indi_pane_t4_ParamLimits

0xde56,	// (0x0005c737) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0005e471) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0005e471) vid6_indi_pane_t

0xde7a,	// (0x0005c75b) wait_bar_pane_cp08

0x7c80,	// (0x00056561) main_cset_text2_pane_t1_ParamLimits

0x7c80,	// (0x00056561) main_cset_text2_pane_t1

0x7c13,	// (0x000564f4) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c13,	// (0x000564f4) listscroll_gen_pane_cp06_t1

0x9a0c,	// (0x000582ed) main_cam6_set_pane

0xce40,	// (0x0005b721) bg_tb_trans_pane_cp06_ParamLimits

0xaae9,	// (0x000593ca) cam4_indicators_pane_g1_ParamLimits

0xaafa,	// (0x000593db) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0005e1df) cam4_indicators_pane_g_ParamLimits

0xab12,	// (0x000593f3) cam4_indicators_pane_t1_ParamLimits

0x9a65,	// (0x00058346) bg_tb_trans_pane_cp07_ParamLimits

0xab40,	// (0x00059421) vid4_indicators_pane_g1_ParamLimits

0xab56,	// (0x00059437) vid4_indicators_pane_g2_ParamLimits

0xab6a,	// (0x0005944b) vid4_indicators_pane_g3_ParamLimits

0xab7d,	// (0x0005945e) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0005e1f1) vid4_indicators_pane_g_ParamLimits

0xab9b,	// (0x0005947c) vid4_indicators_pane_t1_ParamLimits

0x7773,	// (0x00056054) vid4_progress_pane_g1_ParamLimits

0x7785,	// (0x00056066) vid4_progress_pane_g2_ParamLimits

0xa76c,	// (0x0005904d) vid4_progress_pane_g3_ParamLimits

0xac28,	// (0x00059509) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0005e3a2) vid4_progress_pane_g_ParamLimits

0xac46,	// (0x00059527) vid4_progress_pane_t1_ParamLimits

0xac5b,	// (0x0005953c) vid4_progress_pane_t2_ParamLimits

0xac71,	// (0x00059552) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0005e3ad) vid4_progress_pane_t_ParamLimits

0xac86,	// (0x00059567) wait_bar_pane_cp07_ParamLimits

0x7c9e,	// (0x0005657f) main_cam6_set_pane_g2_ParamLimits

0x7c9e,	// (0x0005657f) main_cam6_set_pane_g2

0x7cc4,	// (0x000565a5) main_cset6_listscroll_pane_ParamLimits

0x7cc4,	// (0x000565a5) main_cset6_listscroll_pane

0x7ce2,	// (0x000565c3) main_cset6_slider_pane_ParamLimits

0x7ce2,	// (0x000565c3) main_cset6_slider_pane

0x7cf8,	// (0x000565d9) main_cset6_text2_pane_ParamLimits

0x7cf8,	// (0x000565d9) main_cset6_text2_pane

0xde89,	// (0x0005c76a) main_cset6_text_pane

0xde91,	// (0x0005c772) main_cset_list_pane_copy1_ParamLimits

0xde91,	// (0x0005c772) main_cset_list_pane_copy1

0xdea1,	// (0x0005c782) scroll_pane_cp028_copy1

0x2e8b,	// (0x0005176c) cset_list_set_pane_copy1

0x7d06,	// (0x000565e7) aid_position_infowindow_above_copy1

0x7d0e,	// (0x000565ef) aid_position_infowindow_below_copy1

0x0122,	// (0x0004ea03) cset_list_set_pane_g1_copy1

0x012a,	// (0x0004ea0b) cset_list_set_pane_g3_copy1_ParamLimits

0x012a,	// (0x0004ea0b) cset_list_set_pane_g3_copy1

0x0139,	// (0x0004ea1a) cset_list_set_pane_t1_copy1_ParamLimits

0x0139,	// (0x0004ea1a) cset_list_set_pane_t1_copy1

0x9a65,	// (0x00058346) list_highlight_pane_cp021_copy1_ParamLimits

0x9a65,	// (0x00058346) list_highlight_pane_cp021_copy1

0xdeaa,	// (0x0005c78b) cset6_slider_pane_ParamLimits

0xdeaa,	// (0x0005c78b) cset6_slider_pane

0xded6,	// (0x0005c7b7) main_cset6_slider_pane_g1_ParamLimits

0xded6,	// (0x0005c7b7) main_cset6_slider_pane_g1

0x7d16,	// (0x000565f7) main_cset6_slider_pane_g2_ParamLimits

0x7d16,	// (0x000565f7) main_cset6_slider_pane_g2

0xdefe,	// (0x0005c7df) main_cset6_slider_pane_g3_ParamLimits

0xdefe,	// (0x0005c7df) main_cset6_slider_pane_g3

0x7d3e,	// (0x0005661f) main_cset6_slider_pane_g4_ParamLimits

0x7d3e,	// (0x0005661f) main_cset6_slider_pane_g4

0x7d4a,	// (0x0005662b) main_cset6_slider_pane_g5_ParamLimits

0x7d4a,	// (0x0005662b) main_cset6_slider_pane_g5

0xd75d,	// (0x0005c03e) main_cset6_slider_pane_g7_ParamLimits

0xd75d,	// (0x0005c03e) main_cset6_slider_pane_g7

0xd769,	// (0x0005c04a) main_cset6_slider_pane_g8_ParamLimits

0xd769,	// (0x0005c04a) main_cset6_slider_pane_g8

0x6e56,	// (0x00055737) main_cset6_slider_pane_g9_ParamLimits

0x6e56,	// (0x00055737) main_cset6_slider_pane_g9

0x6e62,	// (0x00055743) main_cset6_slider_pane_g10_ParamLimits

0x6e62,	// (0x00055743) main_cset6_slider_pane_g10

0x6e6e,	// (0x0005574f) main_cset6_slider_pane_g11_ParamLimits

0x6e6e,	// (0x0005574f) main_cset6_slider_pane_g11

0x6e7a,	// (0x0005575b) main_cset6_slider_pane_g12_ParamLimits

0x6e7a,	// (0x0005575b) main_cset6_slider_pane_g12

0x6e86,	// (0x00055767) main_cset6_slider_pane_g13_ParamLimits

0x6e86,	// (0x00055767) main_cset6_slider_pane_g13

0x6e92,	// (0x00055773) main_cset6_slider_pane_g14_ParamLimits

0x6e92,	// (0x00055773) main_cset6_slider_pane_g14

0x7d58,	// (0x00056639) main_cset6_slider_pane_g15_ParamLimits

0x7d58,	// (0x00056639) main_cset6_slider_pane_g15

0x6eb6,	// (0x00055797) main_cset6_slider_pane_g16_ParamLimits

0x6eb6,	// (0x00055797) main_cset6_slider_pane_g16

0x6ec4,	// (0x000557a5) main_cset6_slider_pane_g17_ParamLimits

0x6ec4,	// (0x000557a5) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0005e47a) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0005e47a) main_cset6_slider_pane_g

0xdf0a,	// (0x0005c7eb) main_cset6_slider_pane_t1_ParamLimits

0xdf0a,	// (0x0005c7eb) main_cset6_slider_pane_t1

0x7d88,	// (0x00056669) main_cset6_slider_pane_t2_ParamLimits

0x7d88,	// (0x00056669) main_cset6_slider_pane_t2

0x7db3,	// (0x00056694) main_cset6_slider_pane_t3_ParamLimits

0x7db3,	// (0x00056694) main_cset6_slider_pane_t3

0x7dde,	// (0x000566bf) main_cset6_slider_pane_t4_ParamLimits

0x7dde,	// (0x000566bf) main_cset6_slider_pane_t4

0x7e09,	// (0x000566ea) main_cset6_slider_pane_t5_ParamLimits

0x7e09,	// (0x000566ea) main_cset6_slider_pane_t5

0xdf4b,	// (0x0005c82c) main_cset6_slider_pane_t7_ParamLimits

0xdf4b,	// (0x0005c82c) main_cset6_slider_pane_t7

0x7e36,	// (0x00056717) main_cset6_slider_pane_t8_ParamLimits

0x7e36,	// (0x00056717) main_cset6_slider_pane_t8

0x7e5a,	// (0x0005673b) main_cset6_slider_pane_t9_ParamLimits

0x7e5a,	// (0x0005673b) main_cset6_slider_pane_t9

0x7e7e,	// (0x0005675f) main_cset6_slider_pane_t10_ParamLimits

0x7e7e,	// (0x0005675f) main_cset6_slider_pane_t10

0x7ea2,	// (0x00056783) main_cset6_slider_pane_t11_ParamLimits

0x7ea2,	// (0x00056783) main_cset6_slider_pane_t11

0xdf81,	// (0x0005c862) main_cset6_slider_pane_t14_ParamLimits

0xdf81,	// (0x0005c862) main_cset6_slider_pane_t14

0xdfba,	// (0x0005c89b) main_cset6_slider_pane_t15_ParamLimits

0xdfba,	// (0x0005c89b) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0005e49f) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0005e49f) main_cset6_slider_pane_t

0xd821,	// (0x0005c102) cset_slider_pane_g1_copy1

0xd82a,	// (0x0005c10b) cset_slider_pane_g2_copy1

0xd833,	// (0x0005c114) cset_slider_pane_g3_copy1

0x9a0c,	// (0x000582ed) bg_popup_sub_pane_cp011_copy1

0xdff3,	// (0x0005c8d4) main_cset_text_pane_g1_copy1

0xd8be,	// (0x0005c19f) main_cset_text_pane_t1_copy1

0xd8cc,	// (0x0005c1ad) main_cset_text_pane_t2_copy1

0xd8da,	// (0x0005c1bb) main_cset_text_pane_t3_copy1

0xd8e8,	// (0x0005c1c9) main_cset_text_pane_t4_copy1

0xd8f6,	// (0x0005c1d7) main_cset_text_pane_t5_copy1

0xdffb,	// (0x0005c8dc) main_cset_text_pane_t6_copy1

0xe009,	// (0x0005c8ea) main_cset_text_pane_t7_copy1

0x7c80,	// (0x00056561) main_cset_text2_pane_t1_copy1

0x9a65,	// (0x00058346) main_ncimui_pane

0x449e,	// (0x00052d7f) popup_query_ncimui_window_ParamLimits

0x449e,	// (0x00052d7f) popup_query_ncimui_window

0x5186,	// (0x00053a67) field_cale_ev2_pane_g4_ParamLimits

0x5186,	// (0x00053a67) field_cale_ev2_pane_g4

0x60af,	// (0x00054990) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60af,	// (0x00054990) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0005e17d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0005e17d) cell_video_dialer_keypad_pane_g

0x60c7,	// (0x000549a8) cell_video_dialer_keypad_pane_t1

0x9a0c,	// (0x000582ed) bg_popup_window_pane_cp012

0xb142,	// (0x00059a23) heading_pane_cp06

0xe035,	// (0x0005c916) ncim_query_content_pane

0x9a0c,	// (0x000582ed) bg_popup_heading_pane_cp01

0xe03d,	// (0x0005c91e) ncim_heading_pane_t1

0xe04b,	// (0x0005c92c) ncim_indicator_popup_pane

0xe05d,	// (0x0005c93e) ncim_query_button_pane

0xe073,	// (0x0005c954) ncim_query_content_pane_t1

0xe085,	// (0x0005c966) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0005e4e3) ncim_query_content_pane_t

0xe0bf,	// (0x0005c9a0) ncim_query_list_pane

0xe0d1,	// (0x0005c9b2) ncim_query_popup_pane

0xe04b,	// (0x0005c92c) ncim_indicator_popup_pane_ParamLimits

0x8018,	// (0x000568f9) ncim_query_content_pane_g1_ParamLimits

0x8018,	// (0x000568f9) ncim_query_content_pane_g1

0xe073,	// (0x0005c954) ncim_query_content_pane_t1_ParamLimits

0xe085,	// (0x0005c966) ncim_query_content_pane_t2_ParamLimits

0x8024,	// (0x00056905) ncim_query_content_pane_t3_ParamLimits

0x8024,	// (0x00056905) ncim_query_content_pane_t3

0x804c,	// (0x0005692d) ncim_query_content_pane_t4_ParamLimits

0x804c,	// (0x0005692d) ncim_query_content_pane_t4

0x8074,	// (0x00056955) ncim_query_content_pane_t5_ParamLimits

0x8074,	// (0x00056955) ncim_query_content_pane_t5

0xe097,	// (0x0005c978) ncim_query_content_pane_t6_ParamLimits

0xe097,	// (0x0005c978) ncim_query_content_pane_t6

0xfc02,	// (0x0005e4e3) ncim_query_content_pane_t_ParamLimits

0xe0bf,	// (0x0005c9a0) ncim_query_list_pane_ParamLimits

0xe0d1,	// (0x0005c9b2) ncim_query_popup_pane_ParamLimits

0xe0e5,	// (0x0005c9c6) wait_bar_pane_cp04

0x9a0c,	// (0x000582ed) input_focus_pane_cp011

0xe0ed,	// (0x0005c9ce) ncim_query_popup_pane_t1

0xe0fb,	// (0x0005c9dc) ncim_list_query_list_pane_ParamLimits

0xe0fb,	// (0x0005c9dc) ncim_list_query_list_pane

0x9a0c,	// (0x000582ed) bg_button_pane_cp027

0xe10e,	// (0x0005c9ef) ncim_query_button_pane_g1

0x9a0c,	// (0x000582ed) list_highlight_pane_cp012

0xe118,	// (0x0005c9f9) ncim_list_query_list_pane_g1

0xe120,	// (0x0005ca01) ncim_list_query_list_pane_t1

0xab06,	// (0x000593e7) cam4_indicators_pane_g3_ParamLimits

0xab06,	// (0x000593e7) cam4_indicators_pane_g3

0xab89,	// (0x0005946a) vid4_indicators_pane_g5_ParamLimits

0xab89,	// (0x0005946a) vid4_indicators_pane_g5

0xac37,	// (0x00059518) vid4_progress_pane_g5_ParamLimits

0xac37,	// (0x00059518) vid4_progress_pane_g5

0x7f06,	// (0x000567e7) main_ncimui_pane_g1

0x7f6c,	// (0x0005684d) ncimui_group_query_pane_ParamLimits

0x7f6c,	// (0x0005684d) ncimui_group_query_pane

0x7fb4,	// (0x00056895) ncimui_list_pane_ParamLimits

0x7fb4,	// (0x00056895) ncimui_list_pane

0x7fdb,	// (0x000568bc) ncimui_text_pane_ParamLimits

0x7fdb,	// (0x000568bc) ncimui_text_pane

0x809c,	// (0x0005697d) ncimui_text_pane_t1_ParamLimits

0x809c,	// (0x0005697d) ncimui_text_pane_t1

0xe12e,	// (0x0005ca0f) ncimui_list_single_graphic_pane_ParamLimits

0xe12e,	// (0x0005ca0f) ncimui_list_single_graphic_pane

0x80ba,	// (0x0005699b) ncimui_query_pane_ParamLimits

0x80ba,	// (0x0005699b) ncimui_query_pane

0x9a0c,	// (0x000582ed) list_highlight_pane_cp013

0xe13e,	// (0x0005ca1f) ncim_list_query_list_pane_t1_copy1

0xe118,	// (0x0005c9f9) ncim_list_single_graphic_pane_g1

0xe14c,	// (0x0005ca2d) ncim_query_button_pane_cp01

0xe158,	// (0x0005ca39) ncim_query_entry_pane_ParamLimits

0xe158,	// (0x0005ca39) ncim_query_entry_pane

0xe16b,	// (0x0005ca4c) ncimui_query_pane_g1

0xe177,	// (0x0005ca58) ncimui_query_pane_t1_ParamLimits

0xe177,	// (0x0005ca58) ncimui_query_pane_t1

0x9a65,	// (0x00058346) input_focus_pane_cp012

0xe190,	// (0x0005ca71) ncim_query_entry_pane_t1

0xa1c8,	// (0x00058aa9) main_im_pane_ParamLimits

0x9a65,	// (0x00058346) main_mobtv_pane_ParamLimits

0x9a65,	// (0x00058346) main_mobtv_pane

0x7d70,	// (0x00056651) main_cset6_slider_pane_g18_ParamLimits

0x7d70,	// (0x00056651) main_cset6_slider_pane_g18

0x7d7c,	// (0x0005665d) main_cset6_slider_pane_g19_ParamLimits

0x7d7c,	// (0x0005665d) main_cset6_slider_pane_g19

0xaca8,	// (0x00059589) bg_main_mobtv_pane_ParamLimits

0xaca8,	// (0x00059589) bg_main_mobtv_pane

0x80cd,	// (0x000569ae) main_mobtv_info_pane

0x80d8,	// (0x000569b9) main_mobtv_loading_pane_ParamLimits

0x80d8,	// (0x000569b9) main_mobtv_loading_pane

0xe1a2,	// (0x0005ca83) main_mobtv_pg_channel_list_pane

0xe1ac,	// (0x0005ca8d) main_mobtv_pg_hdr_pane

0x80e5,	// (0x000569c6) main_mobtv_programe_curr_pane_ParamLimits

0x80e5,	// (0x000569c6) main_mobtv_programe_curr_pane

0x80f2,	// (0x000569d3) main_mobtv_programe_next_pane_ParamLimits

0x80f2,	// (0x000569d3) main_mobtv_programe_next_pane

0xe1b5,	// (0x0005ca96) popup_mobtv_noti_window

0xcc10,	// (0x0005b4f1) main_tv_pg_hdr_pane_g1

0xe1bf,	// (0x0005caa0) main_tv_pg_hdr_pane_g2

0xe1c7,	// (0x0005caa8) main_tv_pg_hdr_pane_g3

0xe1cf,	// (0x0005cab0) main_tv_pg_hdr_pane_g4

0xe1d7,	// (0x0005cab8) main_tv_pg_hdr_pane_g5

0xe1e1,	// (0x0005cac2) main_tv_pg_hdr_pane_g6

0xe1eb,	// (0x0005cacc) main_tv_pg_hdr_pane_g7

0xe1f5,	// (0x0005cad6) main_tv_pg_hdr_pane_g8

0xe1ff,	// (0x0005cae0) main_tv_pg_hdr_pane_g9

0xe209,	// (0x0005caea) main_tv_pg_hdr_pane_g10

0xe213,	// (0x0005caf4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0005e4f0) main_tv_pg_hdr_pane_g

0xe21d,	// (0x0005cafe) main_tv_pg_hdr_pane_t1

0xe22b,	// (0x0005cb0c) main_tv_pg_hdr_pane_t2

0xe239,	// (0x0005cb1a) main_tv_pg_hdr_pane_t3

0xe249,	// (0x0005cb2a) main_tv_pg_hdr_pane_t4

0xe259,	// (0x0005cb3a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0005e507) main_tv_pg_hdr_pane_t

0xe269,	// (0x0005cb4a) single_mobtv_pg_channel_pane_ParamLimits

0xe269,	// (0x0005cb4a) single_mobtv_pg_channel_pane

0xe27b,	// (0x0005cb5c) single_mobtv_pg_channel_table_pane

0xe284,	// (0x0005cb65) single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x0005cb6e) single_tv_pg_channel_pane_g1

0xe296,	// (0x0005cb77) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0005e512) single_tv_pg_channel_pane_g

0xce40,	// (0x0005b721) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce40,	// (0x0005b721) bg_single_mobtv_pg_channel_thumb_pane

0xe29f,	// (0x0005cb80) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29f,	// (0x0005cb80) single_mobtv_pg_channel_thumb_pane_g1

0xe2ad,	// (0x0005cb8e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2ad,	// (0x0005cb8e) single_mobtv_pg_channel_thumb_pane_g2

0xe2b9,	// (0x0005cb9a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b9,	// (0x0005cb9a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0005e517) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0005e517) single_mobtv_pg_channel_thumb_pane_g

0xe2c5,	// (0x0005cba6) single_mobtv_pg_channel_thumb_pane_t1

0xe2d3,	// (0x0005cbb4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0005e51e) single_mobtv_pg_channel_thumb_pane_t

0xcc10,	// (0x0005b4f1) bg_single_mobtv_pg_channel_table_pane_g1

0xcc10,	// (0x0005b4f1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0005dfc4) bg_single_mobtv_pg_channel_table_pane_g

0xe2e1,	// (0x0005cbc2) single_mobtv_pg_channel_table_pane_t1

0xe2ef,	// (0x0005cbd0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0005e523) single_mobtv_pg_channel_table_pane_t

0x8107,	// (0x000569e8) main_mobtv_info_pane_g1_ParamLimits

0x8107,	// (0x000569e8) main_mobtv_info_pane_g1

0x8125,	// (0x00056a06) main_mobtv_info_pane_t1_ParamLimits

0x8125,	// (0x00056a06) main_mobtv_info_pane_t1

0x819d,	// (0x00056a7e) main_mobtv_info_pane_t2_ParamLimits

0x819d,	// (0x00056a7e) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0005e52d) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0005e52d) main_mobtv_info_pane_t

0x822c,	// (0x00056b0d) wait_bar_pane_cp05

0x823e,	// (0x00056b1f) main_mobtv_loading_pane_g1_ParamLimits

0x823e,	// (0x00056b1f) main_mobtv_loading_pane_g1

0x824f,	// (0x00056b30) main_mobtv_loading_pane_g2_ParamLimits

0x824f,	// (0x00056b30) main_mobtv_loading_pane_g2

0x825b,	// (0x00056b3c) main_mobtv_loading_pane_g3_ParamLimits

0x825b,	// (0x00056b3c) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0005e534) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0005e534) main_mobtv_loading_pane_g

0xe2fd,	// (0x0005cbde) main_mobtv_loading_pane_t1_ParamLimits

0xe2fd,	// (0x0005cbde) main_mobtv_loading_pane_t1

0xe315,	// (0x0005cbf6) main_mobtv_loading_pane_t2_ParamLimits

0xe315,	// (0x0005cbf6) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0005e53b) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0005e53b) main_mobtv_loading_pane_t

0x826e,	// (0x00056b4f) wait_bar_pane_cp06_ParamLimits

0x826e,	// (0x00056b4f) wait_bar_pane_cp06

0xe339,	// (0x0005cc1a) main_mobtv_programe_curr_pane_t1

0xe347,	// (0x0005cc28) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0005e540) main_mobtv_programe_curr_pane_t

0xe355,	// (0x0005cc36) main_mobtv_programe_next_pane_t1

0xe363,	// (0x0005cc44) main_mobtv_programe_next_pane_t2

0xe371,	// (0x0005cc52) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0005e545) main_mobtv_programe_next_pane_t

0x9a0c,	// (0x000582ed) bg_popup_mobtv_noti_window_pane

0xe37f,	// (0x0005cc60) popup_mobtv_noti_window_g1

0xe387,	// (0x0005cc68) popup_mobtv_noti_window_t1

0xe395,	// (0x0005cc76) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0005e54c) popup_mobtv_noti_window_t

0xcc10,	// (0x0005b4f1) bg_popup_mobtv_noti_window_pane_g1

0x9a0c,	// (0x000582ed) sc_clock_pane

0x9a0c,	// (0x000582ed) main_fs_bigclock_pane

0x79ef,	// (0x000562d0) blid2_tripm_pane_t4_ParamLimits

0x79ef,	// (0x000562d0) blid2_tripm_pane_t4

0x827d,	// (0x00056b5e) sc_clock_pane_g1_ParamLimits

0x827d,	// (0x00056b5e) sc_clock_pane_g1

0x828f,	// (0x00056b70) sc_clock_pane_t1_ParamLimits

0x828f,	// (0x00056b70) sc_clock_pane_t1

0x82b3,	// (0x00056b94) sc_clock_pane_t2_ParamLimits

0x82b3,	// (0x00056b94) sc_clock_pane_t2

0x82cb,	// (0x00056bac) sc_clock_pane_t3_ParamLimits

0x82cb,	// (0x00056bac) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0005e551) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0005e551) sc_clock_pane_t

0x8fe3,	// (0x000578c4) main_fs_bigclock_indicator_pane_ParamLimits

0x8fe3,	// (0x000578c4) main_fs_bigclock_indicator_pane

0x8387,	// (0x00056c68) main_fs_bigclock_pane_g1_ParamLimits

0x8387,	// (0x00056c68) main_fs_bigclock_pane_g1

0x8fef,	// (0x000578d0) main_fs_bigclock_pane_t1_ParamLimits

0x8fef,	// (0x000578d0) main_fs_bigclock_pane_t1

0x9001,	// (0x000578e2) main_fs_bigclock_pane_t2_ParamLimits

0x9001,	// (0x000578e2) main_fs_bigclock_pane_t2

0x9015,	// (0x000578f6) main_fs_bigclock_pane_t3_ParamLimits

0x9015,	// (0x000578f6) main_fs_bigclock_pane_t3

0x0002,

0xfe7f,	// (0x0005e760) main_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0005e760) main_fs_bigclock_pane_t

0xec01,	// (0x0005d4e2) main_fs_bigclock_indicator_pane_g1

0xe065,	// (0x0005c946) ncim_query_content_pane_g2_ParamLimits

0xe065,	// (0x0005c946) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0005e4de) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0005e4de) ncim_query_content_pane_g

0x82e2,	// (0x00056bc3) sc_clock_pane_t4_ParamLimits

0x82e2,	// (0x00056bc3) sc_clock_pane_t4

0x9a65,	// (0x00058346) main_radioblah_pane

0xd577,	// (0x0005be58) cell_call4_button_pane_t1_copy1_ParamLimits

0xd577,	// (0x0005be58) cell_call4_button_pane_t1_copy1

0x7f1e,	// (0x000567ff) main_ncimui_pane_t1_ParamLimits

0x7f1e,	// (0x000567ff) main_ncimui_pane_t1

0x7f38,	// (0x00056819) main_ncimui_pane_t2_ParamLimits

0x7f38,	// (0x00056819) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0005e4d7) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0005e4d7) main_ncimui_pane_t

0xe4e8,	// (0x0005cdc9) main_radioblah_anim_pane_ParamLimits

0xe4e8,	// (0x0005cdc9) main_radioblah_anim_pane

0xe4f9,	// (0x0005cdda) main_radioblah_info_pane_ParamLimits

0xe4f9,	// (0x0005cdda) main_radioblah_info_pane

0xe50d,	// (0x0005cdee) main_radioblah_pane_t1_ParamLimits

0xe50d,	// (0x0005cdee) main_radioblah_pane_t1

0xe529,	// (0x0005ce0a) main_radioblah_pane_t2_ParamLimits

0xe529,	// (0x0005ce0a) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0005e572) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0005e572) main_radioblah_pane_t

0x83e4,	// (0x00056cc5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83e4,	// (0x00056cc5) main_radioblah_rocker_ctrl_pane

0xe571,	// (0x0005ce52) main_radioblah_info_pane_t1_ParamLimits

0xe571,	// (0x0005ce52) main_radioblah_info_pane_t1

0x843c,	// (0x00056d1d) main_radioblah_info_pane_t2_ParamLimits

0x843c,	// (0x00056d1d) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0005e57b) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0005e57b) main_radioblah_info_pane_t

0xcc10,	// (0x0005b4f1) main_radioblah_rocker_ctrl_pane_g1

0x84ec,	// (0x00056dcd) main_radioblah_rocker_ctrl_pane_g2

0x84f4,	// (0x00056dd5) main_radioblah_rocker_ctrl_pane_g3

0x84fc,	// (0x00056ddd) main_radioblah_rocker_ctrl_pane_g4

0x8504,	// (0x00056de5) main_radioblah_rocker_ctrl_pane_g5

0x850c,	// (0x00056ded) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0005e584) main_radioblah_rocker_ctrl_pane_g

0x7c80,	// (0x00056561) main_cset_text2_pane_t1_copy1_ParamLimits

0xaad7,	// (0x000593b8) cam4_image_uncrop_qvga_pane

0xab2c,	// (0x0005940d) vid4_image_uncrop_qcif_pane

0xac9a,	// (0x0005957b) cam6_image_uncrop_qvga_pane_ParamLimits

0xac9a,	// (0x0005957b) cam6_image_uncrop_qvga_pane

0xdd68,	// (0x0005c649) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd68,	// (0x0005c649) vid6_image_uncrop_qcif_pane

0x9a0c,	// (0x000582ed) bg_popup_preview_window_pane_cp03

0xe017,	// (0x0005c8f8) list_cset_text2_pane

0xe01f,	// (0x0005c900) main_cset6_text2_pane_g1

0xe027,	// (0x0005c908) main_cset6_text2_pane_t1

0x8514,	// (0x00056df5) list_cset_text2_pane_t1_ParamLimits

0x8514,	// (0x00056df5) list_cset_text2_pane_t1

0x9a65,	// (0x00058346) main_radioblah_pane_ParamLimits

0x8218,	// (0x00056af9) main_mobtv_info_pane_t3_ParamLimits

0x8218,	// (0x00056af9) main_mobtv_info_pane_t3

0x83d2,	// (0x00056cb3) main_radioblah_pane_g1

0x840c,	// (0x00056ced) main_radioblah_info_pane_g1

0x8491,	// (0x00056d72) main_radioblah_info_pane_t3_ParamLimits

0x8491,	// (0x00056d72) main_radioblah_info_pane_t3

0x2dd5,	// (0x000516b6) highlight_cell_cale_month_pane_ParamLimits

0x2dd5,	// (0x000516b6) highlight_cell_cale_month_pane

0x9a0c,	// (0x000582ed) main_phob_fisheye_pane

0xcf1c,	// (0x0005b7fd) scroll_pane_cp0031_ParamLimits

0xcf1c,	// (0x0005b7fd) scroll_pane_cp0031

0xde7a,	// (0x0005c75b) wait_bar_pane_cp08_ParamLimits

0x2e8b,	// (0x0005176c) cset_list_set_pane_copy1_ParamLimits

0xe5ab,	// (0x0005ce8c) highlight_cell_cale_month_pane_g1

0x852d,	// (0x00056e0e) highlight_cell_cale_month_pane_t1

0xdaf6,	// (0x0005c3d7) list_gen_pane_cp01

0xd748,	// (0x0005c029) scroll_pane_01

0x853b,	// (0x00056e1c) list_single_double_fisheye_pane

0x01f3,	// (0x0004ead4) list_double_fisheye_pane_g1_ParamLimits

0x01f3,	// (0x0004ead4) list_double_fisheye_pane_g1

0x01ff,	// (0x0004eae0) list_double_fisheye_pane_g2_ParamLimits

0x01ff,	// (0x0004eae0) list_double_fisheye_pane_g2

0x8544,	// (0x00056e25) list_double_fisheye_pane_g3_ParamLimits

0x8544,	// (0x00056e25) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0005e591) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0005e591) list_double_fisheye_pane_g

0x0230,	// (0x0004eb11) list_double_fisheye_pane_t1_ParamLimits

0x0230,	// (0x0004eb11) list_double_fisheye_pane_t1

0x024b,	// (0x0004eb2c) list_double_fisheye_pane_t2_ParamLimits

0x024b,	// (0x0004eb2c) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0005e59c) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0005e59c) list_double_fisheye_pane_t

0x9a0c,	// (0x000582ed) main_call5_pane

0x830d,	// (0x00056bee) sc_swipe_pane_ParamLimits

0x830d,	// (0x00056bee) sc_swipe_pane

0x8563,	// (0x00056e44) call5_image_pane_ParamLimits

0x8563,	// (0x00056e44) call5_image_pane

0x8580,	// (0x00056e61) call5_swipe_1_pane_ParamLimits

0x8580,	// (0x00056e61) call5_swipe_1_pane

0x8593,	// (0x00056e74) call5_swipe_2_pane_ParamLimits

0x8593,	// (0x00056e74) call5_swipe_2_pane

0x85c0,	// (0x00056ea1) popup_call5_audio_first_window_ParamLimits

0x85c0,	// (0x00056ea1) popup_call5_audio_first_window

0xce40,	// (0x0005b721) call5_swipe_1_pane_g1_ParamLimits

0xce40,	// (0x0005b721) call5_swipe_1_pane_g1

0xe5b3,	// (0x0005ce94) call5_swipe_1_pane_g2_ParamLimits

0xe5b3,	// (0x0005ce94) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0005e5a1) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0005e5a1) call5_swipe_1_pane_g

0xe5bf,	// (0x0005cea0) call5_swipe_1_pane_t1_ParamLimits

0xe5bf,	// (0x0005cea0) call5_swipe_1_pane_t1

0xce40,	// (0x0005b721) call5_swipe_2_pane_g1_ParamLimits

0xce40,	// (0x0005b721) call5_swipe_2_pane_g1

0xe603,	// (0x0005cee4) call5_swipe_2_pane_g2_ParamLimits

0xe603,	// (0x0005cee4) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0005e5a6) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0005e5a6) call5_swipe_2_pane_g

0xe60f,	// (0x0005cef0) call5_swipe_2_pane_t1_ParamLimits

0xe60f,	// (0x0005cef0) call5_swipe_2_pane_t1

0xe624,	// (0x0005cf05) sc_swipe_pane_g1_ParamLimits

0xe624,	// (0x0005cf05) sc_swipe_pane_g1

0xe631,	// (0x0005cf12) sc_swipe_pane_g2_ParamLimits

0xe631,	// (0x0005cf12) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0005e5ab) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0005e5ab) sc_swipe_pane_g

0xe63d,	// (0x0005cf1e) sc_swipe_pane_t1_ParamLimits

0xe63d,	// (0x0005cf1e) sc_swipe_pane_t1

0x9a0c,	// (0x000582ed) main_cmail_launcher_pane

0x85d5,	// (0x00056eb6) aid_size_cell_cmail_l_ParamLimits

0x85d5,	// (0x00056eb6) aid_size_cell_cmail_l

0x85ef,	// (0x00056ed0) grid_cmail_l_pane_ParamLimits

0x85ef,	// (0x00056ed0) grid_cmail_l_pane

0x860a,	// (0x00056eeb) cell_cmail_l_pane_ParamLimits

0x860a,	// (0x00056eeb) cell_cmail_l_pane

0x8632,	// (0x00056f13) cell_cmail_l_pane_g1_ParamLimits

0x8632,	// (0x00056f13) cell_cmail_l_pane_g1

0x863e,	// (0x00056f1f) cell_cmail_l_pane_t1_ParamLimits

0x863e,	// (0x00056f1f) cell_cmail_l_pane_t1

0xe652,	// (0x0005cf33) cell_cmail_l_pane_t2_ParamLimits

0xe652,	// (0x0005cf33) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0005e5b0) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0005e5b0) cell_cmail_l_pane_t

0x9a65,	// (0x00058346) grid_highlight_pane_cp018_ParamLimits

0x9a65,	// (0x00058346) grid_highlight_pane_cp018

0x0b15,	// (0x0004f3f6) main2_pane_ParamLimits

0x0b15,	// (0x0004f3f6) main2_pane

0xa2a1,	// (0x00058b82) popup_sp_fs_action_menu_bg_pane_g1

0xa2a9,	// (0x00058b8a) popup_sp_fs_action_menu_bg_pane_g2

0xa2b1,	// (0x00058b92) popup_sp_fs_action_menu_bg_pane_g3

0xa2b9,	// (0x00058b9a) popup_sp_fs_action_menu_bg_pane_g4

0xa2c1,	// (0x00058ba2) popup_sp_fs_action_menu_bg_pane_g5

0xa2c9,	// (0x00058baa) popup_sp_fs_action_menu_bg_pane_g6

0xa2d1,	// (0x00058bb2) popup_sp_fs_action_menu_bg_pane_g7

0xa2d9,	// (0x00058bba) popup_sp_fs_action_menu_bg_pane_g8

0xa2e1,	// (0x00058bc2) popup_sp_fs_action_menu_bg_pane_g9

0xa2e9,	// (0x00058bca) popup_sp_fs_action_menu_bg_pane_g10

0xa2e9,	// (0x00058bca) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005da6b) popup_sp_fs_action_menu_bg_pane_g

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g3_g1

0xfb51,	// (0x0004e432) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb51,	// (0x0004e432) list_medium_line_x2_t3_g3_g2

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005db19) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005db19) list_medium_line_x2_t3_g3_g

0xfb5d,	// (0x0004e43e) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb5d,	// (0x0004e43e) list_medium_line_x2_t3_g3_t1

0xfb72,	// (0x0004e453) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb72,	// (0x0004e453) list_medium_line_x2_t3_g3_t2

0xfb86,	// (0x0004e467) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfb86,	// (0x0004e467) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005db20) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005db20) list_medium_line_x2_t3_g3_t

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g2_g1

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005db27) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005db27) list_medium_line_x2_t3_g2_g

0xfb9b,	// (0x0004e47c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfb9b,	// (0x0004e47c) list_medium_line_x2_t3_g2_t1

0xfbb1,	// (0x0004e492) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbb1,	// (0x0004e492) list_medium_line_x2_t3_g2_t2

0xfbc3,	// (0x0004e4a4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbc3,	// (0x0004e4a4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005db2c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005db2c) list_medium_line_x2_t3_g2_t

0x1d24,	// (0x00050605) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t4_g4_g1

0xfbe1,	// (0x0004e4c2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfbe1,	// (0x0004e4c2) list_medium_line_x2_t4_g4_g2

0xf054,	// (0x0005d935) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x2_t4_g4_g3

0x1d3c,	// (0x0005061d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d3c,	// (0x0005061d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005db33) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005db33) list_medium_line_x2_t4_g4_g

0xfbed,	// (0x0004e4ce) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfbed,	// (0x0004e4ce) list_medium_line_x2_t4_g4_t1

0xfc07,	// (0x0004e4e8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc07,	// (0x0004e4e8) list_medium_line_x2_t4_g4_t2

0xfc1d,	// (0x0004e4fe) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc1d,	// (0x0004e4fe) list_medium_line_x2_t4_g4_t3

0xfc32,	// (0x0004e513) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc32,	// (0x0004e513) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005db3c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005db3c) list_medium_line_x2_t4_g4_t

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g4_g1

0xf060,	// (0x0005d941) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf060,	// (0x0005d941) list_medium_line_x2_t2_g4_g2

0xf054,	// (0x0005d935) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x2_t2_g4_g3

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005dba3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005dba3) list_medium_line_x2_t2_g4_g

0xfc44,	// (0x0004e525) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc44,	// (0x0004e525) list_medium_line_x2_t2_g4_t1

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005dbac) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005dbac) list_medium_line_x2_t2_g4_t

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g3_g1

0xf054,	// (0x0005d935) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x2_t2_g3_g2

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0005dbb1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0005dbb1) list_medium_line_x2_t2_g3_g

0xfc59,	// (0x0004e53a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc59,	// (0x0004e53a) list_medium_line_x2_t2_g3_t1

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0005dbb8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0005dbb8) list_medium_line_x2_t2_g3_t

0x2f30,	// (0x00051811) main_sp_fs_list_pane_ParamLimits

0x2f30,	// (0x00051811) main_sp_fs_list_pane

0x2f3c,	// (0x0005181d) sp_fs_scroll_pane_ParamLimits

0x2f3c,	// (0x0005181d) sp_fs_scroll_pane

0xfc6e,	// (0x0004e54f) list_medium_line_x2_t3_t1

0xfc7e,	// (0x0004e55f) list_medium_line_x2_t3_t2

0xfc8c,	// (0x0004e56d) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0005dc03) list_medium_line_x2_t3_t

0xfc9a,	// (0x0004e57b) list_medium_line_x3_t4_t1

0xfcaa,	// (0x0004e58b) list_medium_line_x3_t4_t2

0xfcb8,	// (0x0004e599) list_medium_line_x3_t4_t3

0xf081,	// (0x0005d962) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0005dc0a) list_medium_line_x3_t4_t

0xfcc6,	// (0x0004e5a7) list_medium_line_x4_t5_t1

0xfcd6,	// (0x0004e5b7) list_medium_line_x4_t5_t2

0xf08f,	// (0x0005d970) list_medium_line_x4_t5_t3

0xfce4,	// (0x0004e5c5) list_medium_line_x4_t5_t4

0xf081,	// (0x0005d962) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0005dc13) list_medium_line_x4_t5_t

0x1d24,	// (0x00050605) list_medium_line_t4_g4_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_t4_g4_g1

0x1d3c,	// (0x0005061d) list_medium_line_t4_g4_g2_ParamLimits

0x1d3c,	// (0x0005061d) list_medium_line_t4_g4_g2

0xfcf2,	// (0x0004e5d3) list_medium_line_t4_g4_g3_ParamLimits

0xfcf2,	// (0x0004e5d3) list_medium_line_t4_g4_g3

0x1d30,	// (0x00050611) list_medium_line_t4_g4_g4_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0005dc1e) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0005dc1e) list_medium_line_t4_g4_g

0xfcfe,	// (0x0004e5df) list_medium_line_t4_g4_t1_ParamLimits

0xfcfe,	// (0x0004e5df) list_medium_line_t4_g4_t1

0xfd13,	// (0x0004e5f4) list_medium_line_t4_g4_t2_ParamLimits

0xfd13,	// (0x0004e5f4) list_medium_line_t4_g4_t2

0xfd29,	// (0x0004e60a) list_medium_line_t4_g4_t3_ParamLimits

0xfd29,	// (0x0004e60a) list_medium_line_t4_g4_t3

0xf06c,	// (0x0005d94d) list_medium_line_t4_g4_t4_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0005dc27) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0005dc27) list_medium_line_t4_g4_t

0x300e,	// (0x000518ef) chi_dic_find_pane_g1

0x4224,	// (0x00052b05) main_tport_pane

0xff39,	// (0x0004e81a) list_medium_line_plain_t1

0xff47,	// (0x0004e828) list_medium_line_t2_g2_g1_ParamLimits

0xff47,	// (0x0004e828) list_medium_line_t2_g2_g1

0xff53,	// (0x0004e834) list_medium_line_t2_g2_g2_ParamLimits

0xff53,	// (0x0004e834) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0005e2e8) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0005e2e8) list_medium_line_t2_g2_g

0xff5f,	// (0x0004e840) list_medium_line_t2_g2_t1_ParamLimits

0xff5f,	// (0x0004e840) list_medium_line_t2_g2_t1

0xff76,	// (0x0004e857) list_medium_line_t2_g2_t2_ParamLimits

0xff76,	// (0x0004e857) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0005e2ed) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0005e2ed) list_medium_line_t2_g2_t

0x7797,	// (0x00056078) aid_sp_fs_list_icon_a_sm

0x779f,	// (0x00056080) aid_sp_fs_list_icon_d

0x77a7,	// (0x00056088) aid_sp_fs_text_primary

0x77b0,	// (0x00056091) aid_sp_fs_text_secondary

0x0105,	// (0x0004e9e6) list_medium_line

0x0105,	// (0x0004e9e6) list_medium_line_g2

0x0105,	// (0x0004e9e6) list_medium_line_g3

0x0105,	// (0x0004e9e6) list_medium_line_plain

0x0105,	// (0x0004e9e6) list_medium_line_plain_t2

0x0105,	// (0x0004e9e6) list_medium_line_plain_t3

0x0105,	// (0x0004e9e6) list_medium_line_right_icon

0x0105,	// (0x0004e9e6) list_medium_line_right_iconx2

0x0105,	// (0x0004e9e6) list_medium_line_t2

0x0105,	// (0x0004e9e6) list_medium_line_t2_g2

0x0105,	// (0x0004e9e6) list_medium_line_t2_g3

0x0105,	// (0x0004e9e6) list_medium_line_t2_right_icon

0x0105,	// (0x0004e9e6) list_medium_line_t2_right_iconx2

0x0105,	// (0x0004e9e6) list_medium_line_t3

0x0105,	// (0x0004e9e6) list_medium_line_t3_g2

0x0105,	// (0x0004e9e6) list_medium_line_t3_g3

0x0105,	// (0x0004e9e6) list_medium_line_t3_right_iconx2

0x77b9,	// (0x0005609a) list_medium_line_t4_g4

0x77c2,	// (0x000560a3) list_medium_line_x2

0x77c2,	// (0x000560a3) list_medium_line_x2_t2_g2

0x77c2,	// (0x000560a3) list_medium_line_x2_t2_g3

0x77c2,	// (0x000560a3) list_medium_line_x2_t2_g4

0x77c2,	// (0x000560a3) list_medium_line_x2_t3

0x77c2,	// (0x000560a3) list_medium_line_x2_t3_g2

0x77c2,	// (0x000560a3) list_medium_line_x2_t3_g3

0x77c2,	// (0x000560a3) list_medium_line_x2_t3_g4

0x77c2,	// (0x000560a3) list_medium_line_x2_t4_g2

0x77c2,	// (0x000560a3) list_medium_line_x2_t4_g4

0x77cb,	// (0x000560ac) list_medium_line_x3

0x77cb,	// (0x000560ac) list_medium_line_x3_t4

0x77cb,	// (0x000560ac) list_medium_line_x3_t4_g4

0x77b9,	// (0x0005609a) list_medium_line_x4_t4

0x77b9,	// (0x0005609a) list_medium_line_x4_t4_g7

0x77b9,	// (0x0005609a) list_medium_line_x4_t5

0x010e,	// (0x0004e9ef) list_single_fs_dyc_pane_ParamLimits

0x010e,	// (0x0004e9ef) list_single_fs_dyc_pane

0x1d24,	// (0x00050605) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x4_t4_g7_g1

0x7ec8,	// (0x000567a9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ec8,	// (0x000567a9) list_medium_line_x4_t4_g7_g2

0x014e,	// (0x0004ea2f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x014e,	// (0x0004ea2f) list_medium_line_x4_t4_g7_g3

0x015d,	// (0x0004ea3e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x015d,	// (0x0004ea3e) list_medium_line_x4_t4_g7_g4

0x0169,	// (0x0004ea4a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0169,	// (0x0004ea4a) list_medium_line_x4_t4_g7_g5

0x0178,	// (0x0004ea59) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0178,	// (0x0004ea59) list_medium_line_x4_t4_g7_g6

0x7ed4,	// (0x000567b5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ed4,	// (0x000567b5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0005e4b8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0005e4b8) list_medium_line_x4_t4_g7_g

0x0187,	// (0x0004ea68) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0187,	// (0x0004ea68) list_medium_line_x4_t4_g7_t1

0x019c,	// (0x0004ea7d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x019c,	// (0x0004ea7d) list_medium_line_x4_t4_g7_t2

0x01b1,	// (0x0004ea92) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01b1,	// (0x0004ea92) list_medium_line_x4_t4_g7_t3

0x01c6,	// (0x0004eaa7) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01c6,	// (0x0004eaa7) list_medium_line_x4_t4_g7_t4

0x7ee0,	// (0x000567c1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ee0,	// (0x000567c1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0005e4c7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0005e4c7) list_medium_line_x4_t4_g7_t

0x01d8,	// (0x0004eab9) list_single_dyc_row_pane_ParamLimits

0x01d8,	// (0x0004eab9) list_single_dyc_row_pane

0x8550,	// (0x00056e31) call5_gesture_pane_ParamLimits

0x8550,	// (0x00056e31) call5_gesture_pane

0x85a6,	// (0x00056e87) call5_windows_pane_ParamLimits

0x85a6,	// (0x00056e87) call5_windows_pane

0x8654,	// (0x00056f35) call5_swipe_1_pane_cp_ParamLimits

0x8654,	// (0x00056f35) call5_swipe_1_pane_cp

0x8660,	// (0x00056f41) call5_swipe_2_pane_cp_ParamLimits

0x8660,	// (0x00056f41) call5_swipe_2_pane_cp

0xa3f4,	// (0x00058cd5) call5_image_pane_cp

0x866c,	// (0x00056f4d) popup_call5_audio_first_window_cp_ParamLimits

0x866c,	// (0x00056f4d) popup_call5_audio_first_window_cp

0xe624,	// (0x0005cf05) call5_swipe_1_pane_g1_cp_ParamLimits

0xe624,	// (0x0005cf05) call5_swipe_1_pane_g1_cp

0xe664,	// (0x0005cf45) call5_swipe_1_pane_g2_cp

0xe63d,	// (0x0005cf1e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe63d,	// (0x0005cf1e) call5_swipe_1_pane_t1_cp

0xe624,	// (0x0005cf05) call5_swipe_2_pane_g1_cp_ParamLimits

0xe624,	// (0x0005cf05) call5_swipe_2_pane_g1_cp

0xe66c,	// (0x0005cf4d) call5_swipe_2_pane_g2_cp

0xe674,	// (0x0005cf55) call5_swipe_2_pane_t1_cp_ParamLimits

0xe674,	// (0x0005cf55) call5_swipe_2_pane_t1_cp

0x9a65,	// (0x00058346) main_sp_fs_email_pane

0xe689,	// (0x0005cf6a) main_sp_fs_listscroll_pane_te

0x867a,	// (0x00056f5b) popup_sp_fs_action_menu_pane_ParamLimits

0x867a,	// (0x00056f5b) popup_sp_fs_action_menu_pane

0xcc10,	// (0x0005b4f1) bg_sp_fs_ctrlbar_pane_g1

0xd1bd,	// (0x0005ba9e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1cf,	// (0x0005bab0) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1c6,	// (0x0005baa7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc10,	// (0x0005b4f1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0005e5b5) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9ef,	// (0x0005b2d0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9ef,	// (0x0005b2d0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe692,	// (0x0005cf73) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe692,	// (0x0005cf73) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe69e,	// (0x0005cf7f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe69e,	// (0x0005cf7f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0005e5be) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0005e5be) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6aa,	// (0x0005cf8b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6aa,	// (0x0005cf8b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x026d,	// (0x0004eb4e) list_medium_line_t2_right_icon_g1

0x0275,	// (0x0004eb56) list_medium_line_t2_right_icon_t1

0x0285,	// (0x0004eb66) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0005e5c3) list_medium_line_t2_right_icon_t

0xc7bf,	// (0x0005b0a0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_sp_fs_ctrlbar_pane

0x870d,	// (0x00056fee) main_sp_fs_ctrlbar_button_pane_cp01

0x8717,	// (0x00056ff8) main_sp_fs_ctrlbar_ddmenu_pane

0xd303,	// (0x0005bbe4) main_sp_fs_ctrlbar_pane_g1

0xe6fc,	// (0x0005cfdd) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0005e5c8) main_sp_fs_ctrlbar_pane_g

0xe708,	// (0x0005cfe9) main_sp_fs_ctrlbar_pane_t1

0x0297,	// (0x0004eb78) main_sp_fs_ctrlbar_pane

0x02bb,	// (0x0004eb9c) main_sp_fs_listscroll_pane_te_cp01

0x02db,	// (0x0004ebbc) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02db,	// (0x0004ebbc) popup_sp_fs_action_menu_pane_cp01

0x9a65,	// (0x00058346) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a65,	// (0x00058346) bg_sp_fs_highlight_list_pane_cp01

0x8721,	// (0x00057002) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8721,	// (0x00057002) sp_fs_action_menu_list_gene_pane_g1

0xe738,	// (0x0005d019) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe738,	// (0x0005d019) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0005e5d2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0005e5d2) sp_fs_action_menu_list_gene_pane_g

0x8730,	// (0x00057011) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8730,	// (0x00057011) sp_fs_action_menu_list_gene_pane_t1

0x8748,	// (0x00057029) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8748,	// (0x00057029) sp_fs_action_menu_list_gene_pane

0xe745,	// (0x0005d026) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe745,	// (0x0005d026) popup_sp_fs_action_menu_bg_pane

0x876b,	// (0x0005704c) sp_fs_action_menu_list_pane_ParamLimits

0x876b,	// (0x0005704c) sp_fs_action_menu_list_pane

0xe753,	// (0x0005d034) sp_fs_scroll_pane_cp01_ParamLimits

0xe753,	// (0x0005d034) sp_fs_scroll_pane_cp01

0x030b,	// (0x0004ebec) list_medium_line_plain_t2_t1

0x031b,	// (0x0004ebfc) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0005e5d7) list_medium_line_plain_t2_t

0x032b,	// (0x0004ec0c) list_medium_line_plain_t3_t1

0x033b,	// (0x0004ec1c) list_medium_line_plain_t3_t2

0x0349,	// (0x0004ec2a) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0005e5dc) list_medium_line_plain_t3_t

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t2_g2_g1

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005db27) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005db27) list_medium_line_x2_t2_g2_g

0xf09d,	// (0x0005d97e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf09d,	// (0x0005d97e) list_medium_line_x2_t2_g2_t1

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0005e5e3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0005e5e3) list_medium_line_x2_t2_g2_t

0x1d24,	// (0x00050605) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t4_g2_g1

0x878f,	// (0x00057070) list_medium_line_x2_t4_g2_g2_ParamLimits

0x878f,	// (0x00057070) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0005e5e8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0005e5e8) list_medium_line_x2_t4_g2_g

0x0357,	// (0x0004ec38) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0357,	// (0x0004ec38) list_medium_line_x2_t4_g2_t1

0x0371,	// (0x0004ec52) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0371,	// (0x0004ec52) list_medium_line_x2_t4_g2_t2

0x0387,	// (0x0004ec68) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0387,	// (0x0004ec68) list_medium_line_x2_t4_g2_t3

0xf06c,	// (0x0005d94d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0005e5ed) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0005e5ed) list_medium_line_x2_t4_g2_t

0x039c,	// (0x0004ec7d) list_medium_line_t3_right_iconx2_g1

0x026d,	// (0x0004eb4e) list_medium_line_t3_right_iconx2_g2

0x03a4,	// (0x0004ec85) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0005e5f6) list_medium_line_t3_right_iconx2_g

0x03ae,	// (0x0004ec8f) list_medium_line_t3_right_iconx2_t1

0x03be,	// (0x0004ec9f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0005e5fd) list_medium_line_t3_right_iconx2_t

0x1d24,	// (0x00050605) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x3_t4_g4_g1

0xf054,	// (0x0005d935) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x3_t4_g4_g2

0x1d3c,	// (0x0005061d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d3c,	// (0x0005061d) list_medium_line_x3_t4_g4_g3

0x03cc,	// (0x0004ecad) list_medium_line_x3_t4_g4_g4_ParamLimits

0x03cc,	// (0x0004ecad) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0005e602) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0005e602) list_medium_line_x3_t4_g4_g

0x03d8,	// (0x0004ecb9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x03d8,	// (0x0004ecb9) list_medium_line_x3_t4_g4_t1

0x03ef,	// (0x0004ecd0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x03ef,	// (0x0004ecd0) list_medium_line_x3_t4_g4_t2

0x040a,	// (0x0004eceb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x040a,	// (0x0004eceb) list_medium_line_x3_t4_g4_t3

0x041f,	// (0x0004ed00) list_medium_line_x3_t4_g4_t4_ParamLimits

0x041f,	// (0x0004ed00) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0005e60b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0005e60b) list_medium_line_x3_t4_g4_t

0x043c,	// (0x0004ed1d) list_single_dyc_row_text_pane_t1_ParamLimits

0x043c,	// (0x0004ed1d) list_single_dyc_row_text_pane_t1

0x0485,	// (0x0004ed66) list_single_dyc_row_text_pane_t2_ParamLimits

0x0485,	// (0x0004ed66) list_single_dyc_row_text_pane_t2

0x87a1,	// (0x00057082) list_single_dyc_row_text_pane_t3_ParamLimits

0x87a1,	// (0x00057082) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0005e614) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0005e614) list_single_dyc_row_text_pane_t

0x87c5,	// (0x000570a6) list_single_dyc_row_pane_g1_ParamLimits

0x87c5,	// (0x000570a6) list_single_dyc_row_pane_g1

0x87d1,	// (0x000570b2) list_single_dyc_row_pane_g2_ParamLimits

0x87d1,	// (0x000570b2) list_single_dyc_row_pane_g2

0x87dd,	// (0x000570be) list_single_dyc_row_pane_g3_ParamLimits

0x87dd,	// (0x000570be) list_single_dyc_row_pane_g3

0x87e9,	// (0x000570ca) list_single_dyc_row_pane_g4_ParamLimits

0x87e9,	// (0x000570ca) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005e621) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005e621) list_single_dyc_row_pane_g

0x87f5,	// (0x000570d6) list_single_dyc_row_text_pane_ParamLimits

0x87f5,	// (0x000570d6) list_single_dyc_row_text_pane

0x9a0c,	// (0x000582ed) bg_sp_fs_scroll_pane

0xe779,	// (0x0005d05a) thumb_sp_fs_scroll_pane

0xf0b2,	// (0x0005d993) list_medium_line_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_g1

0x05ba,	// (0x0004ee9b) list_medium_line_t1_ParamLimits

0x05ba,	// (0x0004ee9b) list_medium_line_t1

0x1d24,	// (0x00050605) list_medium_line_x2_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_g1

0xf054,	// (0x0005d935) list_medium_line_x2_g2_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005e62a) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005e62a) list_medium_line_x2_g

0x8814,	// (0x000570f5) list_medium_line_x2_t1_ParamLimits

0x8814,	// (0x000570f5) list_medium_line_x2_t1

0x1d24,	// (0x00050605) list_medium_line_x3_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x3_g1

0xf054,	// (0x0005d935) list_medium_line_x3_g2_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005e62a) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005e62a) list_medium_line_x3_g

0x8814,	// (0x000570f5) list_medium_line_x3_t1_ParamLimits

0x8814,	// (0x000570f5) list_medium_line_x3_t1

0xe782,	// (0x0005d063) thumb_sp_fs_scroll_pane_g1

0xe78b,	// (0x0005d06c) thumb_sp_fs_scroll_pane_g2

0xe794,	// (0x0005d075) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e62f) thumb_sp_fs_scroll_pane_g

0xe782,	// (0x0005d063) bg_sp_fs_scroll_pane_g1

0xe78b,	// (0x0005d06c) bg_sp_fs_scroll_pane_g2

0xe794,	// (0x0005d075) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e62f) bg_sp_fs_scroll_pane_g

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d24,	// (0x00050605) list_medium_line_x2_t3_g4_g1

0xf060,	// (0x0005d941) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf060,	// (0x0005d941) list_medium_line_x2_t3_g4_g2

0xf054,	// (0x0005d935) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf054,	// (0x0005d935) list_medium_line_x2_t3_g4_g3

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d30,	// (0x00050611) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005dba3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005dba3) list_medium_line_x2_t3_g4_g

0x05cf,	// (0x0004eeb0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05cf,	// (0x0004eeb0) list_medium_line_x2_t3_g4_t1

0x05e5,	// (0x0004eec6) list_medium_line_x2_t3_g4_t2_ParamLimits

0x05e5,	// (0x0004eec6) list_medium_line_x2_t3_g4_t2

0xf06c,	// (0x0005d94d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf06c,	// (0x0005d94d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005e636) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005e636) list_medium_line_x2_t3_g4_t

0xf0b2,	// (0x0005d993) list_medium_line_g2_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_g2_g1

0xf0be,	// (0x0005d99f) list_medium_line_g2_g2_ParamLimits

0xf0be,	// (0x0005d99f) list_medium_line_g2_g2

0x0001,

0xfd5c,	// (0x0005e63d) list_medium_line_g2_g_ParamLimits

0xfd5c,	// (0x0005e63d) list_medium_line_g2_g

0x05fe,	// (0x0004eedf) list_medium_line_g2_t1_ParamLimits

0x05fe,	// (0x0004eedf) list_medium_line_g2_t1

0xf0b2,	// (0x0005d993) list_medium_line_t3_g2_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_t3_g2_g1

0xf0be,	// (0x0005d99f) list_medium_line_t3_g2_g2_ParamLimits

0xf0be,	// (0x0005d99f) list_medium_line_t3_g2_g2

0x0001,

0xfd5c,	// (0x0005e63d) list_medium_line_t3_g2_g_ParamLimits

0xfd5c,	// (0x0005e63d) list_medium_line_t3_g2_g

0x0613,	// (0x0004eef4) list_medium_line_t3_g2_t1_ParamLimits

0x0613,	// (0x0004eef4) list_medium_line_t3_g2_t1

0x062d,	// (0x0004ef0e) list_medium_line_t3_g2_t2_ParamLimits

0x062d,	// (0x0004ef0e) list_medium_line_t3_g2_t2

0x0643,	// (0x0004ef24) list_medium_line_t3_g2_t3_ParamLimits

0x0643,	// (0x0004ef24) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0005e642) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0005e642) list_medium_line_t3_g2_t

0x026d,	// (0x0004eb4e) list_medium_line_right_icon_g1

0x065a,	// (0x0004ef3b) list_medium_line_right_icon_t1

0xf0b2,	// (0x0005d993) list_medium_line_t2_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_t2_g1

0x0668,	// (0x0004ef49) list_medium_line_t2_t1_ParamLimits

0x0668,	// (0x0004ef49) list_medium_line_t2_t1

0x0682,	// (0x0004ef63) list_medium_line_t2_t2_ParamLimits

0x0682,	// (0x0004ef63) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0005e649) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0005e649) list_medium_line_t2_t

0xf0b2,	// (0x0005d993) list_medium_line_t3_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_t3_g1

0x069b,	// (0x0004ef7c) list_medium_line_t3_t1_ParamLimits

0x069b,	// (0x0004ef7c) list_medium_line_t3_t1

0x06b5,	// (0x0004ef96) list_medium_line_t3_t2_ParamLimits

0x06b5,	// (0x0004ef96) list_medium_line_t3_t2

0x06cb,	// (0x0004efac) list_medium_line_t3_t3_ParamLimits

0x06cb,	// (0x0004efac) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0005e64e) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0005e64e) list_medium_line_t3_t

0xf0b2,	// (0x0005d993) list_medium_line_g3_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_g3_g1

0x06e0,	// (0x0004efc1) list_medium_line_g3_g2_ParamLimits

0x06e0,	// (0x0004efc1) list_medium_line_g3_g2

0xf0be,	// (0x0005d99f) list_medium_line_g3_g3_ParamLimits

0xf0be,	// (0x0005d99f) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0005e655) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0005e655) list_medium_line_g3_g

0x06ec,	// (0x0004efcd) list_medium_line_g3_t1_ParamLimits

0x06ec,	// (0x0004efcd) list_medium_line_g3_t1

0xf0b2,	// (0x0005d993) list_medium_line_t2_g3_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_t2_g3_g1

0x06e0,	// (0x0004efc1) list_medium_line_t2_g3_g2_ParamLimits

0x06e0,	// (0x0004efc1) list_medium_line_t2_g3_g2

0xf0be,	// (0x0005d99f) list_medium_line_t2_g3_g3_ParamLimits

0xf0be,	// (0x0005d99f) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0005e655) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0005e655) list_medium_line_t2_g3_g

0x0701,	// (0x0004efe2) list_medium_line_t2_g3_t1_ParamLimits

0x0701,	// (0x0004efe2) list_medium_line_t2_g3_t1

0x0718,	// (0x0004eff9) list_medium_line_t2_g3_t2_ParamLimits

0x0718,	// (0x0004eff9) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0005e65c) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0005e65c) list_medium_line_t2_g3_t

0xf0b2,	// (0x0005d993) list_medium_line_t3_g3_g1_ParamLimits

0xf0b2,	// (0x0005d993) list_medium_line_t3_g3_g1

0x06e0,	// (0x0004efc1) list_medium_line_t3_g3_g2_ParamLimits

0x06e0,	// (0x0004efc1) list_medium_line_t3_g3_g2

0xf0be,	// (0x0005d99f) list_medium_line_t3_g3_g3_ParamLimits

0xf0be,	// (0x0005d99f) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0005e655) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0005e655) list_medium_line_t3_g3_g

0x0731,	// (0x0004f012) list_medium_line_t3_g3_t1_ParamLimits

0x0731,	// (0x0004f012) list_medium_line_t3_g3_t1

0x074a,	// (0x0004f02b) list_medium_line_t3_g3_t2_ParamLimits

0x074a,	// (0x0004f02b) list_medium_line_t3_g3_t2

0x0760,	// (0x0004f041) list_medium_line_t3_g3_t3_ParamLimits

0x0760,	// (0x0004f041) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0005e661) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0005e661) list_medium_line_t3_g3_t

0x039c,	// (0x0004ec7d) list_medium_line_right_iconx2_g1

0x026d,	// (0x0004eb4e) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e668) list_medium_line_right_iconx2_g

0x077a,	// (0x0004f05b) list_medium_line_right_iconx2_t1

0x039c,	// (0x0004ec7d) list_medium_line_t2_right_iconx2_g1

0x026d,	// (0x0004eb4e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e668) list_medium_line_t2_right_iconx2_g

0x0788,	// (0x0004f069) list_medium_line_t2_right_iconx2_t1

0x0798,	// (0x0004f079) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0005e66d) list_medium_line_t2_right_iconx2_t

0x07aa,	// (0x0004f08b) list_medium_line_x4_t4_t1

0x07b8,	// (0x0004f099) list_medium_line_x4_t4_t2

0x07c8,	// (0x0004f0a9) list_medium_line_x4_t4_t3

0x07d8,	// (0x0004f0b9) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0005e672) list_medium_line_x4_t4_t

0x886d,	// (0x0005714e) tport_appsw_pane_ParamLimits

0x886d,	// (0x0005714e) tport_appsw_pane

0x8885,	// (0x00057166) tport_contact_pane_ParamLimits

0x8885,	// (0x00057166) tport_contact_pane

0x889d,	// (0x0005717e) tport_listscroll_pane_ParamLimits

0x889d,	// (0x0005717e) tport_listscroll_pane

0x88b7,	// (0x00057198) cell_tport_appsw_pane_ParamLimits

0x88b7,	// (0x00057198) cell_tport_appsw_pane

0xd60a,	// (0x0005beeb) tport_appsw_pane_g1_ParamLimits

0xd60a,	// (0x0005beeb) tport_appsw_pane_g1

0xe79d,	// (0x0005d07e) tport_contact_pane_g1

0xe7a6,	// (0x0005d087) tport_contact_pane_t1

0xe7b4,	// (0x0005d095) tport_contact_pane_t2

0x0001,

0xfd9a,	// (0x0005e67b) tport_contact_pane_t

0xe7c2,	// (0x0005d0a3) list_tport_pane

0xe7cb,	// (0x0005d0ac) scroll_pane_cp_030

0x8909,	// (0x000571ea) cell_tport_appsw_pane_g1

0x8919,	// (0x000571fa) cell_tport_appsw_pane_t1

0x8927,	// (0x00057208) grid_highlight_pane_cp019

0x892f,	// (0x00057210) list_tport_double_graphic_pane_ParamLimits

0x892f,	// (0x00057210) list_tport_double_graphic_pane

0x9a65,	// (0x00058346) list_highlight_pane_cp023_ParamLimits

0x9a65,	// (0x00058346) list_highlight_pane_cp023

0x893c,	// (0x0005721d) list_tport_double_graphic_pane_g1_ParamLimits

0x893c,	// (0x0005721d) list_tport_double_graphic_pane_g1

0x8949,	// (0x0005722a) list_tport_double_graphic_pane_t1_ParamLimits

0x8949,	// (0x0005722a) list_tport_double_graphic_pane_t1

0x895e,	// (0x0005723f) list_tport_double_graphic_pane_t2_ParamLimits

0x895e,	// (0x0005723f) list_tport_double_graphic_pane_t2

0x0001,

0xfda6,	// (0x0005e687) list_tport_double_graphic_pane_t_ParamLimits

0xfda6,	// (0x0005e687) list_tport_double_graphic_pane_t

0x9a0c,	// (0x000582ed) main_cale_note_pane

0x69ca,	// (0x000552ab) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69ca,	// (0x000552ab) cell_vitu2_function_top_wide_pane_cp01

0x822c,	// (0x00056b0d) wait_bar_pane_cp05_ParamLimits

0x9a65,	// (0x00058346) listscroll_cmail_pane

0xe7dc,	// (0x0005d0bd) list_cmail_pane

0x897a,	// (0x0005725b) list_cmail_body_pane

0xe5d4,	// (0x0005ceb5) list_single_cmail_header_caption_pane

0x898d,	// (0x0005726e) list_single_cmail_header_detail_pane_ParamLimits

0x898d,	// (0x0005726e) list_single_cmail_header_detail_pane

0x89b8,	// (0x00057299) list_single_cmail_header_caption_pane_t1

0x07e8,	// (0x0004f0c9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07e8,	// (0x0004f0c9) list_single_cmail_header_detail_pane_g1

0x89c8,	// (0x000572a9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x89c8,	// (0x000572a9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdab,	// (0x0005e68c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdab,	// (0x0005e68c) list_single_cmail_header_detail_pane_g

0x89d4,	// (0x000572b5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x89d4,	// (0x000572b5) list_single_cmail_header_detail_pane_t1

0x8a40,	// (0x00057321) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8a40,	// (0x00057321) list_single_cmail_header_editor_pane_bg

0xe296,	// (0x0005cb77) list_cmail_body_pane_g1

0xe809,	// (0x0005d0ea) list_cmail_body_pane_t1

0xd62a,	// (0x0005bf0b) list_single_cmail_header_editor_pane_bg_g1

0xa65b,	// (0x00058f3c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd63a,	// (0x0005bf1b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd632,	// (0x0005bf13) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd86f,	// (0x0005c150) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd65a,	// (0x0005bf3b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd64a,	// (0x0005bf2b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd652,	// (0x0005bf33) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa63b,	// (0x00058f1c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a57,	// (0x00057338) calenote_gesture_pane_ParamLimits

0x8a57,	// (0x00057338) calenote_gesture_pane

0x8a77,	// (0x00057358) calenote_window_pane_ParamLimits

0x8a77,	// (0x00057358) calenote_window_pane

0xe817,	// (0x0005d0f8) popup_note_window_cp01

0x8a93,	// (0x00057374) calenote_swipe_1_pane_ParamLimits

0x8a93,	// (0x00057374) calenote_swipe_1_pane

0x8660,	// (0x00056f41) calenote_swipe_2_pane_ParamLimits

0x8660,	// (0x00056f41) calenote_swipe_2_pane

0xe624,	// (0x0005cf05) calenote_swipe_1_pane_g1_ParamLimits

0xe624,	// (0x0005cf05) calenote_swipe_1_pane_g1

0xe631,	// (0x0005cf12) calenote_swipe_1_pane_g2_ParamLimits

0xe631,	// (0x0005cf12) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0005e5ab) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0005e5ab) calenote_swipe_1_pane_g

0xe829,	// (0x0005d10a) calenote_swipe_1_pane_t1_ParamLimits

0xe829,	// (0x0005d10a) calenote_swipe_1_pane_t1

0xe624,	// (0x0005cf05) calenote_swipe_2_pane_g1_ParamLimits

0xe624,	// (0x0005cf05) calenote_swipe_2_pane_g1

0xe848,	// (0x0005d129) calenote_swipe_2_pane_g2_ParamLimits

0xe848,	// (0x0005d129) calenote_swipe_2_pane_g2

0x0001,

0xfdb7,	// (0x0005e698) calenote_swipe_2_pane_g_ParamLimits

0xfdb7,	// (0x0005e698) calenote_swipe_2_pane_g

0xe854,	// (0x0005d135) calenote_swipe_2_pane_t1_ParamLimits

0xe854,	// (0x0005d135) calenote_swipe_2_pane_t1

0x9a0c,	// (0x000582ed) main_mup_navstr_pane

0x5619,	// (0x00053efa) main_mup3_pane_t7_ParamLimits

0x5619,	// (0x00053efa) main_mup3_pane_t7

0xa8f5,	// (0x000591d6) main_mp4_pane_g6_ParamLimits

0xa8f5,	// (0x000591d6) main_mp4_pane_g6

0xaa99,	// (0x0005937a) main_image3_pane_t4_ParamLimits

0xaa99,	// (0x0005937a) main_image3_pane_t4

0x8aa8,	// (0x00057389) popup_navstr_preview_pane_ParamLimits

0x8aa8,	// (0x00057389) popup_navstr_preview_pane

0x8ab8,	// (0x00057399) scroll_navstr_pane_ParamLimits

0x8ab8,	// (0x00057399) scroll_navstr_pane

0x9a0c,	// (0x000582ed) bg_popup_preview_window_pane_cp04

0xe87b,	// (0x0005d15c) popup_navstr_preview_pane_t1

0x8acc,	// (0x000573ad) scroll_navstr_pane_g1_ParamLimits

0x8acc,	// (0x000573ad) scroll_navstr_pane_g1

0x8ae0,	// (0x000573c1) scroll_navstr_pane_t1_ParamLimits

0x8ae0,	// (0x000573c1) scroll_navstr_pane_t1

0xe820,	// (0x0005d101) bg_button_pane_cp014

0xe820,	// (0x0005d101) bg_button_pane_cp030

0x0213,	// (0x0004eaf4) list_double_fisheye_pane_g4_ParamLimits

0x0213,	// (0x0004eaf4) list_double_fisheye_pane_g4

0x021f,	// (0x0004eb00) list_double_fisheye_pane_g5_ParamLimits

0x021f,	// (0x0004eb00) list_double_fisheye_pane_g5

0xe7e4,	// (0x0005d0c5) sp_fs_scroll_pane_cp03

0xd303,	// (0x0005bbe4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6fc,	// (0x0005cfdd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0005e5c8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe708,	// (0x0005cfe9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8970,	// (0x00057251) sp_fs_scroll_pane_cp02

0xa354,	// (0x00058c35) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa354,	// (0x00058c35) popup_sp_fs_calendar_preview_list_single_pane

0x9a0c,	// (0x000582ed) main_cam6_pano_pane

0x9a65,	// (0x00058346) main_mup3_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_phacti_pane

0x80ff,	// (0x000569e0) bg_button_pane_cp11

0x8119,	// (0x000569fa) main_mobtv_info_pane_g2_ParamLimits

0x8119,	// (0x000569fa) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0005e528) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0005e528) main_mobtv_info_pane_g

0x82f4,	// (0x00056bd5) sc_clock_pane_t5_ParamLimits

0x82f4,	// (0x00056bd5) sc_clock_pane_t5

0x83d2,	// (0x00056cb3) main_radioblah_pane_g1_ParamLimits

0xe541,	// (0x0005ce22) main_radioblah_pane_t3_ParamLimits

0xe541,	// (0x0005ce22) main_radioblah_pane_t3

0xe559,	// (0x0005ce3a) main_radioblah_pane_t4_ParamLimits

0xe559,	// (0x0005ce3a) main_radioblah_pane_t4

0x83fa,	// (0x00056cdb) main_radioblah_text_pane_ParamLimits

0x83fa,	// (0x00056cdb) main_radioblah_text_pane

0x840c,	// (0x00056ced) main_radioblah_info_pane_g1_ParamLimits

0x84a5,	// (0x00056d86) main_radioblah_info_pane_t4_ParamLimits

0x84a5,	// (0x00056d86) main_radioblah_info_pane_t4

0x9a65,	// (0x00058346) main_sp_fs_calendar_pane

0x8af7,	// (0x000573d8) main_phacti_pane_g1

0x8aff,	// (0x000573e0) phacti_note_pane_ParamLimits

0x8aff,	// (0x000573e0) phacti_note_pane

0xe892,	// (0x0005d173) phacti_term_pane_ParamLimits

0xe892,	// (0x0005d173) phacti_term_pane

0xe8a7,	// (0x0005d188) phacti_note_pane_t1_ParamLimits

0xe8a7,	// (0x0005d188) phacti_note_pane_t1

0x8b13,	// (0x000573f4) phacti_term_pane_g1

0x8b1b,	// (0x000573fc) phacti_term_pane_t1_ParamLimits

0x8b1b,	// (0x000573fc) phacti_term_pane_t1

0xe8be,	// (0x0005d19f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8c6,	// (0x0005d1a7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc1,	// (0x0005e6a2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ce,	// (0x0005d1af) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ce,	// (0x0005d1af) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8e4,	// (0x0005d1c5) aid_popup_sp_fs_bg_corner_pane

0xcc10,	// (0x0005b4f1) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a0c,	// (0x000582ed) popup_sp_fs_calendar_preview_bg_pane

0xe8ec,	// (0x0005d1cd) popup_sp_fs_calendar_preview_list_pane

0xc7bf,	// (0x0005b0a0) bg_main_sp_fs_cale_pane_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_main_sp_fs_cale_pane

0x8bab,	// (0x0005748c) listscroll_cale_mrui_pane_ParamLimits

0x8bab,	// (0x0005748c) listscroll_cale_mrui_pane

0x8bc0,	// (0x000574a1) listscroll_sp_fs_schedule_track_pane

0x8bc9,	// (0x000574aa) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8bc9,	// (0x000574aa) main_sp_fs_ctrlbar_pane_cp01

0xe8f4,	// (0x0005d1d5) main_sp_fs_ribbon_pane

0x8bdc,	// (0x000574bd) popup_sp_fs_cale_preview_window

0x8bee,	// (0x000574cf) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8bee,	// (0x000574cf) list_single_sp_fs_schedule_track_pane

0x9a65,	// (0x00058346) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a65,	// (0x00058346) bg_sp_fs_highlight_list_pane_cp03

0x8c02,	// (0x000574e3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c02,	// (0x000574e3) list_single_sp_fs_schedule_track_pane_g1

0x8c0e,	// (0x000574ef) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c0e,	// (0x000574ef) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc6,	// (0x0005e6a7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc6,	// (0x0005e6a7) list_single_sp_fs_schedule_track_pane_g

0x8c1a,	// (0x000574fb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c1a,	// (0x000574fb) list_single_sp_fs_schedule_track_pane_t1

0x8c3c,	// (0x0005751d) sp_fs_schedule_track_pane_ParamLimits

0x8c3c,	// (0x0005751d) sp_fs_schedule_track_pane

0xe8fc,	// (0x0005d1dd) sp_fs_schedule_track_pane_g1

0xe904,	// (0x0005d1e5) sp_fs_schedule_track_pane_g2

0xe90c,	// (0x0005d1ed) sp_fs_schedule_track_pane_g3

0xe914,	// (0x0005d1f5) sp_fs_schedule_track_pane_g4

0xe91c,	// (0x0005d1fd) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcb,	// (0x0005e6ac) sp_fs_schedule_track_pane_g

0xd62a,	// (0x0005bf0b) bg_sp_fs_schedule_viewer_highlight_g1

0xa65b,	// (0x00058f3c) bg_sp_fs_schedule_viewer_highlight_g2

0xd632,	// (0x0005bf13) bg_sp_fs_schedule_viewer_highlight_g3

0xd63a,	// (0x0005bf1b) bg_sp_fs_schedule_viewer_highlight_g4

0xd86f,	// (0x0005c150) bg_sp_fs_schedule_viewer_highlight_g5

0xd64a,	// (0x0005bf2b) bg_sp_fs_schedule_viewer_highlight_g6

0xd652,	// (0x0005bf33) bg_sp_fs_schedule_viewer_highlight_g7

0xd65a,	// (0x0005bf3b) bg_sp_fs_schedule_viewer_highlight_g8

0xa63b,	// (0x00058f1c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd6,	// (0x0005e6b7) bg_sp_fs_schedule_viewer_highlight_g

0x9a0c,	// (0x000582ed) bg_main_sp_fs_ribbon_pane

0x8c51,	// (0x00057532) main_sp_fs_ribbon_pane_g1

0xe924,	// (0x0005d205) main_sp_fs_ribbon_pane_t1

0x8c5a,	// (0x0005753b) main_sp_fs_ribbon_pane_t2

0xe933,	// (0x0005d214) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde9,	// (0x0005e6ca) main_sp_fs_ribbon_pane_t

0xe942,	// (0x0005d223) main_sp_fs_ribbon_scheduler_pane

0xe94a,	// (0x0005d22b) bg_main_sp_fs_ribbon_pane_g1

0xe953,	// (0x0005d234) bg_main_sp_fs_ribbon_pane_g2

0xe95c,	// (0x0005d23d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf0,	// (0x0005e6d1) bg_main_sp_fs_ribbon_pane_g

0xe964,	// (0x0005d245) main_sp_fs_ribbon_scheduler_pane_g1

0xe96d,	// (0x0005d24e) main_sp_fs_ribbon_scheduler_pane_g2

0xe976,	// (0x0005d257) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf7,	// (0x0005e6d8) main_sp_fs_ribbon_scheduler_pane_g

0xe97f,	// (0x0005d260) list_cale_mrui_pane

0x8c69,	// (0x0005754a) sp_fs_scroll_pane_cp07_ParamLimits

0x8c69,	// (0x0005754a) sp_fs_scroll_pane_cp07

0x8c85,	// (0x00057566) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c85,	// (0x00057566) bg_sp_fs_schedule_viewer_highlight

0xe98c,	// (0x0005d26d) list_single_sp_fs_schedule_track_pane_cp01

0xe994,	// (0x0005d275) list_sp_fs_schedule_track_pane

0xe99c,	// (0x0005d27d) sp_fs_scroll_pane_cp06_ParamLimits

0xe99c,	// (0x0005d27d) sp_fs_scroll_pane_cp06

0xcc10,	// (0x0005b4f1) bgmain_sp_fs_calendar_pane_g1

0x0800,	// (0x0004f0e1) list_single_cale_mrui_pane_ParamLimits

0x0800,	// (0x0004f0e1) list_single_cale_mrui_pane

0x8c97,	// (0x00057578) list_single_cale_mrui_row_pane_ParamLimits

0x8c97,	// (0x00057578) list_single_cale_mrui_row_pane

0x8cad,	// (0x0005758e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8cad,	// (0x0005758e) list_single_cale_mrui_row_pane_g1

0x8ce5,	// (0x000575c6) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8ce5,	// (0x000575c6) list_single_cale_mrui_row_pane_t1

0x0815,	// (0x0004f0f6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0815,	// (0x0004f0f6) list_single_cale_mrui_row_pane_t2

0x8cf7,	// (0x000575d8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8cf7,	// (0x000575d8) list_single_cale_mrui_row_pane_t3

0x8d26,	// (0x00057607) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8d26,	// (0x00057607) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe05,	// (0x0005e6e6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe05,	// (0x0005e6e6) list_single_cale_mrui_row_pane_t

0x087d,	// (0x0004f15e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x087d,	// (0x0004f15e) list_single_cmail_header_editor_pane_bg_cp01

0x08a3,	// (0x0004f184) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x08a3,	// (0x0004f184) list_single_cmail_header_editor_pane_bg_cp02

0x8d55,	// (0x00057636) main_radioblah_text_pane_t1_ParamLimits

0x8d55,	// (0x00057636) main_radioblah_text_pane_t1

0xe9bb,	// (0x0005d29c) cam6_indi_pane_cp01

0xe9c3,	// (0x0005d2a4) cam6_mode_pane_cp01

0xe9cb,	// (0x0005d2ac) cam6_pano_pane

0xe9d4,	// (0x0005d2b5) cam6_zoom_pane_cp01

0xe9de,	// (0x0005d2bf) cam6_pano_image_pane

0xe9e7,	// (0x0005d2c8) cam6_pano_pane_g1

0xe296,	// (0x0005cb77) cam6_pano_pane_g2

0xe9f0,	// (0x0005d2d1) cam6_pano_pane_g3

0xe9f9,	// (0x0005d2da) cam6_pano_pane_g4

0xd1aa,	// (0x0005ba8b) cam6_pano_pane_g5

0xea02,	// (0x0005d2e3) cam6_pano_pane_g6

0xea0a,	// (0x0005d2eb) cam6_pano_pane_g7

0xea12,	// (0x0005d2f3) cam6_pano_pane_g8

0xea1b,	// (0x0005d2fc) cam6_pano_pane_g9

0x0008,

0xfe0e,	// (0x0005e6ef) cam6_pano_pane_g

0x9a0c,	// (0x000582ed) main_browser_tag_pane

0xe873,	// (0x0005d154) grid_navstr_albumart_pane

0xea26,	// (0x0005d307) cell_navstr_albumart_pane_ParamLimits

0xea26,	// (0x0005d307) cell_navstr_albumart_pane

0xea45,	// (0x0005d326) cell_navstr_albumart_pane_g1

0xc5cc,	// (0x0005aead) cell_navstr_albumart_pane_g2

0xc5dc,	// (0x0005aebd) cell_navstr_albumart_pane_g3

0xc5d4,	// (0x0005aeb5) cell_navstr_albumart_pane_g4

0x0003,

0xfe21,	// (0x0005e702) cell_navstr_albumart_pane_g

0x8d70,	// (0x00057651) bt_list_pane_ParamLimits

0x8d70,	// (0x00057651) bt_list_pane

0x8d86,	// (0x00057667) bt_list_pane_t1

0x8d95,	// (0x00057676) bt_list_pane_t2

0x0001,

0xfe2a,	// (0x0005e70b) bt_list_pane_t

0x9a0c,	// (0x000582ed) main_cale_prevew_pane

0x8da4,	// (0x00057685) popup_cale_preview_window_ParamLimits

0x8da4,	// (0x00057685) popup_cale_preview_window

0x9a65,	// (0x00058346) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a65,	// (0x00058346) bg_popup_preview_window_pane_cp05

0xea4d,	// (0x0005d32e) list_cale_preview_pane_ParamLimits

0xea4d,	// (0x0005d32e) list_cale_preview_pane

0x8dc1,	// (0x000576a2) list_double_cale_preview_pane_ParamLimits

0x8dc1,	// (0x000576a2) list_double_cale_preview_pane

0x8dd5,	// (0x000576b6) list_single_cale_preview_pane_ParamLimits

0x8dd5,	// (0x000576b6) list_single_cale_preview_pane

0x8ded,	// (0x000576ce) list_single_cale_preview_pane_g1

0x8df5,	// (0x000576d6) list_single_cale_preview_pane_t1_ParamLimits

0x8df5,	// (0x000576d6) list_single_cale_preview_pane_t1

0x8e0a,	// (0x000576eb) list_double_cale_preview_pane_g1

0x8e12,	// (0x000576f3) list_double_cale_preview_pane_t1_ParamLimits

0x8e12,	// (0x000576f3) list_double_cale_preview_pane_t1

0x8e27,	// (0x00057708) list_double_cale_preview_pane_t2_ParamLimits

0x8e27,	// (0x00057708) list_double_cale_preview_pane_t2

0x0001,

0xfe2f,	// (0x0005e710) list_double_cale_preview_pane_t_ParamLimits

0xfe2f,	// (0x0005e710) list_double_cale_preview_pane_t

0x9a0c,	// (0x000582ed) main_ezdial_pane

0x9a65,	// (0x00058346) main_sp_fs_email_pane_ParamLimits

0x86c0,	// (0x00056fa1) cmail_ddmenu_btn01_pane_ParamLimits

0x86c0,	// (0x00056fa1) cmail_ddmenu_btn01_pane

0x86d3,	// (0x00056fb4) cmail_ddmenu_btn02_pane_ParamLimits

0x86d3,	// (0x00056fb4) cmail_ddmenu_btn02_pane

0x86f6,	// (0x00056fd7) cmail_ddmenu_btn03_pane_ParamLimits

0x86f6,	// (0x00056fd7) cmail_ddmenu_btn03_pane

0x0297,	// (0x0004eb78) main_sp_fs_ctrlbar_pane_ParamLimits

0x02bb,	// (0x0004eb9c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x897a,	// (0x0005725b) list_cmail_body_pane_ParamLimits

0xe7f3,	// (0x0005d0d4) bg_button_pane_cp12

0xe7fc,	// (0x0005d0dd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7fc,	// (0x0005d0dd) list_single_cmail_header_detail_pane_g3

0x8a1c,	// (0x000572fd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a1c,	// (0x000572fd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb2,	// (0x0005e693) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb2,	// (0x0005e693) list_single_cmail_header_detail_pane_t

0x8b30,	// (0x00057411) phacti_term_pane_t2_ParamLimits

0x8b30,	// (0x00057411) phacti_term_pane_t2

0x0001,

0xfdbc,	// (0x0005e69d) phacti_term_pane_t_ParamLimits

0xfdbc,	// (0x0005e69d) phacti_term_pane_t

0xea59,	// (0x0005d33a) aid_size_list_single_double

0x8e3f,	// (0x00057720) popup_ezdial_listscroll_window

0x8e5b,	// (0x0005773c) popup_number_entry_window_cp01

0xa3f4,	// (0x00058cd5) bg_popup_call_pane_cp09

0xea65,	// (0x0005d346) ezdial_list_pane

0xea6d,	// (0x0005d34e) scroll_pane_cp23

0xc7bf,	// (0x0005b0a0) bg_button_pane_cp028_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_button_pane_cp028

0x8e69,	// (0x0005774a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e69,	// (0x0005774a) cmail_ddmenu_btn01_pane_g1

0x8e78,	// (0x00057759) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e78,	// (0x00057759) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe34,	// (0x0005e715) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe34,	// (0x0005e715) cmail_ddmenu_btn01_pane_g

0xea75,	// (0x0005d356) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea75,	// (0x0005d356) cmail_ddmenu_btn01_pane_t1

0xc7bf,	// (0x0005b0a0) bg_button_pane_cp029_ParamLimits

0xc7bf,	// (0x0005b0a0) bg_button_pane_cp029

0x8e8e,	// (0x0005776f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e8e,	// (0x0005776f) cmail_ddmenu_btn02_pane_g1

0x8ea9,	// (0x0005778a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ea9,	// (0x0005778a) cmail_ddmenu_btn02_pane_t1

0x9a65,	// (0x00058346) bg_button_pane_cp031_ParamLimits

0x9a65,	// (0x00058346) bg_button_pane_cp031

0x8e8e,	// (0x0005776f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e8e,	// (0x0005776f) cmail_ddmenu_btn03_pane_g1

0x8ea9,	// (0x0005778a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ea9,	// (0x0005778a) cmail_ddmenu_btn03_pane_t1

0x61f9,	// (0x00054ada) cell_dialer2_keypad_pane_t1_ParamLimits

0x6213,	// (0x00054af4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6213,	// (0x00054af4) cell_dialer2_keypad_pane_t1_copy1

0x7f64,	// (0x00056845) ncimui_group_button_pane

0x9a65,	// (0x00058346) main_sp_fs_calendar_pane_ParamLimits

0xe5d4,	// (0x0005ceb5) list_single_cmail_header_caption_pane_ParamLimits

0x8b63,	// (0x00057444) aid_recal_txt_sm_pane

0x9a0c,	// (0x000582ed) mian_recal_day_pane

0x8bdc,	// (0x000574bd) popup_sp_fs_cale_preview_window_ParamLimits

0xea8b,	// (0x0005d36c) list_recal_day_pane

0x8eec,	// (0x000577cd) list_single_recal_day_pane_ParamLimits

0x8eec,	// (0x000577cd) list_single_recal_day_pane

0xeab2,	// (0x0005d393) list_single_recal_day_pane_g1_ParamLimits

0xeab2,	// (0x0005d393) list_single_recal_day_pane_g1

0x8efe,	// (0x000577df) list_single_recal_day_pane_g2_ParamLimits

0x8efe,	// (0x000577df) list_single_recal_day_pane_g2

0x8f0a,	// (0x000577eb) list_single_recal_day_pane_g3_ParamLimits

0x8f0a,	// (0x000577eb) list_single_recal_day_pane_g3

0x08c3,	// (0x0004f1a4) list_single_recal_day_pane_g4_ParamLimits

0x08c3,	// (0x0004f1a4) list_single_recal_day_pane_g4

0x8f16,	// (0x000577f7) list_single_recal_day_pane_g5_ParamLimits

0x8f16,	// (0x000577f7) list_single_recal_day_pane_g5

0x8f22,	// (0x00057803) list_single_recal_day_pane_g6_ParamLimits

0x8f22,	// (0x00057803) list_single_recal_day_pane_g6

0x0004,

0xfe43,	// (0x0005e724) list_single_recal_day_pane_g_ParamLimits

0xfe43,	// (0x0005e724) list_single_recal_day_pane_g

0x8f36,	// (0x00057817) list_single_recal_day_pane_t1

0xacb6,	// (0x00059597) list_single_recal_day_pane_t2

0x0001,

0xfe4e,	// (0x0005e72f) list_single_recal_day_pane_t

0x8f48,	// (0x00057829) ncimui_query_button_pane_ParamLimits

0x8f48,	// (0x00057829) ncimui_query_button_pane

0x8f58,	// (0x00057839) ncimui_query_button_pane_t1_ParamLimits

0x8f58,	// (0x00057839) ncimui_query_button_pane_t1

0xeabe,	// (0x0005d39f) ncimui_query_button_pane_t2_ParamLimits

0xeabe,	// (0x0005d39f) ncimui_query_button_pane_t2

0x0001,

0xfe53,	// (0x0005e734) ncimui_query_button_pane_t_ParamLimits

0xfe53,	// (0x0005e734) ncimui_query_button_pane_t

0x8f6b,	// (0x0005784c) query_button_pane_ParamLimits

0x8f6b,	// (0x0005784c) query_button_pane

0x9a0c,	// (0x000582ed) bg_button_pane_cp0028

0xead1,	// (0x0005d3b2) query_button_pane_t1

0x4224,	// (0x00052b05) main_tport_pane_ParamLimits

0x882a,	// (0x0005710b) bg_popup_window_pane_cp01_ParamLimits

0x882a,	// (0x0005710b) bg_popup_window_pane_cp01

0x8845,	// (0x00057126) heading_pane_cp08_ParamLimits

0x8845,	// (0x00057126) heading_pane_cp08

0x8858,	// (0x00057139) heading_pane_cp07_ParamLimits

0x8858,	// (0x00057139) heading_pane_cp07

0x8909,	// (0x000571ea) cell_tport_appsw_pane_g2

0x0002,

0xfd9f,	// (0x0005e680) cell_tport_appsw_pane_g

0xfd3f,	// (0x0004e620) input_candi_list_open_g1

0xae6b,	// (0x0005974c) list_cale_time_pane_g6_ParamLimits

0xae6b,	// (0x0005974c) list_cale_time_pane_g6

0x502e,	// (0x0005390f) aid_size_touch_calib_1_ParamLimits

0x502e,	// (0x0005390f) aid_size_touch_calib_1

0x5040,	// (0x00053921) aid_size_touch_calib_2_ParamLimits

0x5040,	// (0x00053921) aid_size_touch_calib_2

0x5058,	// (0x00053939) aid_size_touch_calib_3_ParamLimits

0x5058,	// (0x00053939) aid_size_touch_calib_3

0x5076,	// (0x00053957) aid_size_touch_calib_4_ParamLimits

0x5076,	// (0x00053957) aid_size_touch_calib_4

0x508e,	// (0x0005396f) main_touch_calib_button_group_pane_ParamLimits

0x508e,	// (0x0005396f) main_touch_calib_button_group_pane

0x50a6,	// (0x00053987) main_touch_calib_pane_g1_ParamLimits

0x50b8,	// (0x00053999) main_touch_calib_pane_g2_ParamLimits

0x50ca,	// (0x000539ab) main_touch_calib_pane_g3_ParamLimits

0x50dc,	// (0x000539bd) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0005e039) main_touch_calib_pane_g_ParamLimits

0x50ee,	// (0x000539cf) main_touch_calib_pane_t1_ParamLimits

0x5108,	// (0x000539e9) main_touch_calib_pane_t2_ParamLimits

0x5122,	// (0x00053a03) main_touch_calib_pane_t3_ParamLimits

0x5136,	// (0x00053a17) main_touch_calib_pane_t4_ParamLimits

0x514c,	// (0x00053a2d) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0005e042) main_touch_calib_pane_t_ParamLimits

0xcf40,	// (0x0005b821) list_single_fp_cale_pane_g3_ParamLimits

0xcf40,	// (0x0005b821) list_single_fp_cale_pane_g3

0x9a65,	// (0x00058346) bg_button_pane_cp012_ParamLimits

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp03_ParamLimits

0x71c6,	// (0x00055aa7) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a65,	// (0x00058346) bg_vkb2_func_pane_cp04_ParamLimits

0x7ef2,	// (0x000567d3) main_ncimui_button_group_pane_ParamLimits

0x7ef2,	// (0x000567d3) main_ncimui_button_group_pane

0x7f52,	// (0x00056833) main_ncimui_pane_t3_ParamLimits

0x7f52,	// (0x00056833) main_ncimui_pane_t3

0xe889,	// (0x0005d16a) phacti_button_group_pane

0xea59,	// (0x0005d33a) aid_size_list_single_double_ParamLimits

0x8e3f,	// (0x00057720) popup_ezdial_listscroll_window_ParamLimits

0x8e5b,	// (0x0005773c) popup_number_entry_window_cp01_ParamLimits

0x8f7e,	// (0x0005785f) phacti_button_pane_ParamLimits

0x8f7e,	// (0x0005785f) phacti_button_pane

0x9a0c,	// (0x000582ed) bg_button_pane_cp14

0xeadf,	// (0x0005d3c0) phacti_button_pane_t1

0x8f8f,	// (0x00057870) main_touch_calib_button_pane_ParamLimits

0x8f8f,	// (0x00057870) main_touch_calib_button_pane

0xa1c8,	// (0x00058aa9) bg_button_pane_cp18_ParamLimits

0xa1c8,	// (0x00058aa9) bg_button_pane_cp18

0xeaed,	// (0x0005d3ce) main_touch_calib_button_pane_t1_ParamLimits

0xeaed,	// (0x0005d3ce) main_touch_calib_button_pane_t1

0xeb03,	// (0x0005d3e4) main_touch_calib_button_pane_t2_ParamLimits

0xeb03,	// (0x0005d3e4) main_touch_calib_button_pane_t2

0x0001,

0xfe58,	// (0x0005e739) main_touch_calib_button_pane_t_ParamLimits

0xfe58,	// (0x0005e739) main_touch_calib_button_pane_t

0x9a0c,	// (0x000582ed) cell_ncimui_button_pane

0x9a0c,	// (0x000582ed) bg_button_pane_cp032

0xeb21,	// (0x0005d402) cell_ncimui_button_pane_t1

0xaa77,	// (0x00059358) image3_infobar_pane_ParamLimits

0xaa77,	// (0x00059358) image3_infobar_pane

0x8320,	// (0x00056c01) fs_bigclock_status_pane_ParamLimits

0x8320,	// (0x00056c01) fs_bigclock_status_pane

0x832d,	// (0x00056c0e) main_fs_bigclock_clock_pane_ParamLimits

0x832d,	// (0x00056c0e) main_fs_bigclock_clock_pane

0x8357,	// (0x00056c38) main_fs_bigclock_indi_pane_ParamLimits

0x8357,	// (0x00056c38) main_fs_bigclock_indi_pane

0x8395,	// (0x00056c76) main_fs_bigclock_swipe_pane_ParamLimits

0x8395,	// (0x00056c76) main_fs_bigclock_swipe_pane

0x9a0c,	// (0x000582ed) main_fs_clock_dumped_data

0xe3a3,	// (0x0005cc84) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a3,	// (0x0005cc84) list_single_fs_bigclock_indicator_pane_g1

0xe3cd,	// (0x0005ccae) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3cd,	// (0x0005ccae) list_single_fs_bigclock_indicator_pane_g2

0xe3e7,	// (0x0005ccc8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e7,	// (0x0005ccc8) list_single_fs_bigclock_indicator_pane_g3

0xe401,	// (0x0005cce2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe401,	// (0x0005cce2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0005e55c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0005e55c) list_single_fs_bigclock_indicator_pane_g

0xe42c,	// (0x0005cd0d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe42c,	// (0x0005cd0d) list_single_fs_bigclock_indicator_pane_t1

0xe454,	// (0x0005cd35) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe454,	// (0x0005cd35) list_single_fs_bigclock_indicator_pane_t2

0xe47c,	// (0x0005cd5d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe47c,	// (0x0005cd5d) list_single_fs_bigclock_indicator_pane_t3

0xe4a4,	// (0x0005cd85) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4a4,	// (0x0005cd85) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0005e567) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0005e567) list_single_fs_bigclock_indicator_pane_t

0xeb2f,	// (0x0005d410) image3_infobar_fav_pane_ParamLimits

0xeb2f,	// (0x0005d410) image3_infobar_fav_pane

0xeb3f,	// (0x0005d420) image3_infobar_loc_pane_ParamLimits

0xeb3f,	// (0x0005d420) image3_infobar_loc_pane

0xeb55,	// (0x0005d436) image3_infobar_time_pane_ParamLimits

0xeb55,	// (0x0005d436) image3_infobar_time_pane

0xcc10,	// (0x0005b4f1) image3_infobar_time_pane_g1

0xeb65,	// (0x0005d446) image3_infobar_time_pane_t1

0xcc10,	// (0x0005b4f1) image3_infobar_loc_pane_g1

0xeb73,	// (0x0005d454) image3_infobar_loc_pane_g2

0x0001,

0xfe5d,	// (0x0005e73e) image3_infobar_loc_pane_g

0xeb7b,	// (0x0005d45c) image3_infobar_loc_pane_t1

0xcc10,	// (0x0005b4f1) image3_infobar_fav_pane_g1

0xeb89,	// (0x0005d46a) image3_infobar_fav_pane_g2

0x0001,

0xfe62,	// (0x0005e743) image3_infobar_fav_pane_g

0xeb91,	// (0x0005d472) fs_bigclock_status_battery_pane

0xeb9a,	// (0x0005d47b) fs_bigclock_status_signal_pane

0xeba3,	// (0x0005d484) fs_bigclock_status_title_pane

0xebac,	// (0x0005d48d) fs_bigclock_status_signal_pane_g1

0xebb5,	// (0x0005d496) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe67,	// (0x0005e748) fs_bigclock_status_signal_pane_g

0xebbd,	// (0x0005d49e) fs_bigclock_status_battery_pane_g1

0xebc6,	// (0x0005d4a7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6c,	// (0x0005e74d) fs_bigclock_status_battery_pane_g

0xebce,	// (0x0005d4af) fs_bigclock_status_title_pane_t1

0xcc10,	// (0x0005b4f1) main_fs_bigclock_clock_pane_g1

0xebdc,	// (0x0005d4bd) main_fs_bigclock_clock_pane_g2

0xebe7,	// (0x0005d4c8) main_fs_bigclock_clock_pane_g3

0xebe7,	// (0x0005d4c8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe71,	// (0x0005e752) main_fs_bigclock_clock_pane_g

0xebf3,	// (0x0005d4d4) main_fs_bigclock_clock_pane_t1

0x8fa4,	// (0x00057885) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7a,	// (0x0005e75b) main_fs_bigclock_clock_pane_t

0x8fb3,	// (0x00057894) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8fb3,	// (0x00057894) list_single_fs_bigclock_indicator_pane

0x8fc4,	// (0x000578a5) list_single_fs_bigclock_pane_ParamLimits

0x8fc4,	// (0x000578a5) list_single_fs_bigclock_pane

0xec0a,	// (0x0005d4eb) main_fs_bigclock_indicator_pane_t1

0xec19,	// (0x0005d4fa) list_single_fs_bigclock_pane_g1

0xec21,	// (0x0005d502) list_single_fs_bigclock_pane_t1

0xcc10,	// (0x0005b4f1) main_fs_bigclock_swipe_pane_g1

0xec64,	// (0x0005d545) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8b,	// (0x0005e76c) main_fs_bigclock_swipe_pane_g

0xec6c,	// (0x0005d54d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec6c,	// (0x0005d54d) main_fs_bigclock_swipe_pane_t1

0x2f48,	// (0x00051829) call_type_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_btmg_pane

0x8cd9,	// (0x000575ba) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8cd9,	// (0x000575ba) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfe,	// (0x0005e6df) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfe,	// (0x0005e6df) list_single_cale_mrui_row_pane_g

0x8eda,	// (0x000577bb) list_recal_vselct_arw_lo_pane

0xeaaa,	// (0x0005d38b) list_recal_vselct_arw_up_pane

0x8ee2,	// (0x000577c3) list_recal_vselct_pane

0x9027,	// (0x00057908) btmg_button_pane

0x9031,	// (0x00057912) main_btmg_pane_g1

0x9a0c,	// (0x000582ed) bg_button_pane_cp044

0xec89,	// (0x0005d56a) btmg_button_pane_t1

0xc7ab,	// (0x0005b08c) aid_listscroll_gen

0x9a65,	// (0x00058346) main_cntbar_detail_pane

0xe7d4,	// (0x0005d0b5) list_cmail_folder_pane

0xe7e4,	// (0x0005d0c5) sp_fs_scroll_pane_cp03_ParamLimits

0x08db,	// (0x0004f1bc) list_single_fs_dyc_pane_cp01_ParamLimits

0x08db,	// (0x0004f1bc) list_single_fs_dyc_pane_cp01

0xec97,	// (0x0005d578) aid_size_cmail_indent

0xacc8,	// (0x000595a9) list_single_dyc_row_pane_cp01

0x906b,	// (0x0005794c) cntbar_detail_list_pane_ParamLimits

0x906b,	// (0x0005794c) cntbar_detail_list_pane

0x90bd,	// (0x0005799e) main_cntbar_detail_cont_pane_ParamLimits

0x90bd,	// (0x0005799e) main_cntbar_detail_cont_pane

0x2f3c,	// (0x0005181d) scroll_pane_cp032_ParamLimits

0x2f3c,	// (0x0005181d) scroll_pane_cp032

0x90d1,	// (0x000579b2) cntbar_detail_list_event_pane_ParamLimits

0x90d1,	// (0x000579b2) cntbar_detail_list_event_pane

0x907d,	// (0x0005795e) cntbar_detail_list_shct_pane

0xad05,	// (0x000595e6) aid_list_gen

0xeca0,	// (0x0005d581) aid_scroll

0xeca9,	// (0x0005d58a) aid_size_touch_scroll_bar

0x77c2,	// (0x000560a3) aid_list_double

0xecb2,	// (0x0005d593) aid_list_single

0x0105,	// (0x0004e9e6) aid_list_single_lg

0xacd1,	// (0x000595b2) aid_list_z_g_a_sm

0xacd9,	// (0x000595ba) aid_list_z_g_d

0x08f6,	// (0x0004f1d7) aid_txt_z_prm

0x0906,	// (0x0004f1e7) aid_txt_z_prm_cp01

0x0914,	// (0x0004f1f5) aid_txt_z_sec

0x90e1,	// (0x000579c2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90e1,	// (0x000579c2) main_cntbar_detail_cont_pane_g1

0x90f5,	// (0x000579d6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90f5,	// (0x000579d6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe90,	// (0x0005e771) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe90,	// (0x0005e771) main_cntbar_detail_cont_pane_g

0xecbb,	// (0x0005d59c) main_cntbar_detail_cont_pane_t1

0xecc9,	// (0x0005d5aa) main_cntbar_detail_cont_pane_t2

0xecd7,	// (0x0005d5b8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe95,	// (0x0005e776) main_cntbar_detail_cont_pane_t

0x9105,	// (0x000579e6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9105,	// (0x000579e6) cell_cntbar_detail_list_shct_pane

0xece5,	// (0x0005d5c6) cntbar_detail_list_shct_pane_g1

0xecee,	// (0x0005d5cf) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9c,	// (0x0005e77d) cntbar_detail_list_shct_pane_g

0x9117,	// (0x000579f8) cntbar_detail_list_event_pane_g1_ParamLimits

0x9117,	// (0x000579f8) cntbar_detail_list_event_pane_g1

0x9123,	// (0x00057a04) cntbar_detail_list_event_pane_g2_ParamLimits

0x9123,	// (0x00057a04) cntbar_detail_list_event_pane_g2

0x0005,

0xfea1,	// (0x0005e782) cntbar_detail_list_event_pane_g_ParamLimits

0xfea1,	// (0x0005e782) cntbar_detail_list_event_pane_g

0x9191,	// (0x00057a72) cntbar_detail_list_event_pane_t1_ParamLimits

0x9191,	// (0x00057a72) cntbar_detail_list_event_pane_t1

0x91a6,	// (0x00057a87) cntbar_detail_list_event_pane_t2_ParamLimits

0x91a6,	// (0x00057a87) cntbar_detail_list_event_pane_t2

0x0002,

0xfeae,	// (0x0005e78f) cntbar_detail_list_event_pane_t_ParamLimits

0xfeae,	// (0x0005e78f) cntbar_detail_list_event_pane_t

0xcc10,	// (0x0005b4f1) cell_cntbar_detail_list_shct_pane_g1

0x32ee,	// (0x00051bcf) navi_pane_mv_g3

0x9a65,	// (0x00058346) main_cntbar_detail_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_notif_wgt_pane

0xa88f,	// (0x00059170) aid_tch_main_mp4_pane_g4

0xaa6d,	// (0x0005934e) popup_slider_window_cp02

0x8ed0,	// (0x000577b1) list_recal_day_event_pane

0x903b,	// (0x0005791c) cntbar_detail_btn_pane_ParamLimits

0x903b,	// (0x0005791c) cntbar_detail_btn_pane

0x9053,	// (0x00057934) cntbar_detail_btn_pane_cp01_ParamLimits

0x9053,	// (0x00057934) cntbar_detail_btn_pane_cp01

0x907d,	// (0x0005795e) cntbar_detail_list_shct_pane_ParamLimits

0x908d,	// (0x0005796e) cntbar_detail_pane_g1_ParamLimits

0x908d,	// (0x0005796e) cntbar_detail_pane_g1

0x90a1,	// (0x00057982) cntbar_detail_pane_t1_ParamLimits

0x90a1,	// (0x00057982) cntbar_detail_pane_t1

0x912f,	// (0x00057a10) cntbar_detail_list_event_pane_g3_ParamLimits

0x912f,	// (0x00057a10) cntbar_detail_list_event_pane_g3

0x9147,	// (0x00057a28) cntbar_detail_list_event_pane_g4_ParamLimits

0x9147,	// (0x00057a28) cntbar_detail_list_event_pane_g4

0x915f,	// (0x00057a40) cntbar_detail_list_event_pane_g5_ParamLimits

0x915f,	// (0x00057a40) cntbar_detail_list_event_pane_g5

0x9177,	// (0x00057a58) cntbar_detail_list_event_pane_g6_ParamLimits

0x9177,	// (0x00057a58) cntbar_detail_list_event_pane_g6

0x91bb,	// (0x00057a9c) cntbar_detail_list_event_pane_t3_ParamLimits

0x91bb,	// (0x00057a9c) cntbar_detail_list_event_pane_t3

0x91cd,	// (0x00057aae) popup_notif_wgt_window_ParamLimits

0x91cd,	// (0x00057aae) popup_notif_wgt_window

0x91e6,	// (0x00057ac7) popup_submenu_window_cp01_ParamLimits

0x91e6,	// (0x00057ac7) popup_submenu_window_cp01

0xa3f4,	// (0x00058cd5) bg_popup_window_pane_cp10

0xecf7,	// (0x0005d5d8) listscroll_notif_wgt_pane

0xed09,	// (0x0005d5ea) list_notif_wgt_window

0xed12,	// (0x0005d5f3) scroll_pane_cp033

0x91fa,	// (0x00057adb) list_notif_wgt_row_pane_ParamLimits

0x91fa,	// (0x00057adb) list_notif_wgt_row_pane

0xed1b,	// (0x0005d5fc) aid_size_list_notif_wgt_del

0xed28,	// (0x0005d609) list_notif_wgt_row_pane_g1

0xed34,	// (0x0005d615) list_notif_wgt_row_pane_g2

0xed48,	// (0x0005d629) list_notif_wgt_row_pane_g3

0x0002,

0xfeb5,	// (0x0005e796) list_notif_wgt_row_pane_g

0xed55,	// (0x0005d636) list_notif_wgt_row_pane_t1

0xed6b,	// (0x0005d64c) list_notif_wgt_row_pane_t2

0xed7d,	// (0x0005d65e) list_notif_wgt_row_pane_t3

0x0002,

0xfebc,	// (0x0005e79d) list_notif_wgt_row_pane_t

0xd877,	// (0x0005c158) list_recal_day_event_pane_g1

0xed8f,	// (0x0005d670) list_recal_day_event_pane_t1

0x9a0c,	// (0x000582ed) bg_button_pane_cp045

0xed9e,	// (0x0005d67f) cntbar_detail_btn_pane_t1

0xc7bf,	// (0x0005b0a0) main_callh_pane_ParamLimits

0xc7bf,	// (0x0005b0a0) main_callh_pane

0x9a0c,	// (0x000582ed) main_coverflow0_pane

0x9a0c,	// (0x000582ed) main_wgtman_pane

0x83ad,	// (0x00056c8e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83ad,	// (0x00056c8e) main_fs_bigclock_unlock_btn_pane

0x8901,	// (0x000571e2) bg_button_pane_cp16

0x8911,	// (0x000571f2) cell_tport_appsw_pane_g3

0x920a,	// (0x00057aeb) cf0_flow_pane_ParamLimits

0x920a,	// (0x00057aeb) cf0_flow_pane

0xedac,	// (0x0005d68d) listscroll_cf0_pane

0xedb7,	// (0x0005d698) main_cf0_pane_g1

0x921f,	// (0x00057b00) main_cf0_pane_t1_ParamLimits

0x921f,	// (0x00057b00) main_cf0_pane_t1

0x9236,	// (0x00057b17) main_cf0_pane_t2_ParamLimits

0x9236,	// (0x00057b17) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0005e7a9) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0005e7a9) main_cf0_pane_t

0xedc9,	// (0x0005d6aa) scroll_pane_cp11

0x924d,	// (0x00057b2e) cf0_flow_pane_g1

0x9259,	// (0x00057b3a) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0005e7ae) cf0_flow_pane_g

0x9265,	// (0x00057b46) cf0_flow_pane_t1

0x9a0c,	// (0x000582ed) main_call6_pane

0x9a0c,	// (0x000582ed) main_calllock_pane

0x9277,	// (0x00057b58) call6_btn_grp_pane_ParamLimits

0x9277,	// (0x00057b58) call6_btn_grp_pane

0x9291,	// (0x00057b72) call6_pane_g1_ParamLimits

0x9291,	// (0x00057b72) call6_pane_g1

0x92a7,	// (0x00057b88) popup_call6_1st_window_ParamLimits

0x92a7,	// (0x00057b88) popup_call6_1st_window

0x92b8,	// (0x00057b99) popup_call6_2nd_window_ParamLimits

0x92b8,	// (0x00057b99) popup_call6_2nd_window

0x92c9,	// (0x00057baa) cell_call6_btn_pane_ParamLimits

0x92c9,	// (0x00057baa) cell_call6_btn_pane

0xa3f4,	// (0x00058cd5) bg_popup_call2_in_pane_cp03

0xedd4,	// (0x0005d6b5) popup_call6_1st_window_g1

0xeddc,	// (0x0005d6bd) popup_call6_1st_window_g2

0xede4,	// (0x0005d6c5) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0005e7b3) popup_call6_1st_window_g

0xedec,	// (0x0005d6cd) popup_call6_1st_window_t1

0xedfb,	// (0x0005d6dc) popup_call6_1st_window_t2

0xee0b,	// (0x0005d6ec) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0005e7ba) popup_call6_1st_window_t

0xa3f4,	// (0x00058cd5) bg_popup_call2_in_pane_cp04

0xedd4,	// (0x0005d6b5) popup_call6_2nd_window_g1

0xeddc,	// (0x0005d6bd) popup_call6_2nd_window_g2

0xede4,	// (0x0005d6c5) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0005e7b3) popup_call6_2nd_window_g

0xedec,	// (0x0005d6cd) popup_call6_2nd_window_t1

0x9a0c,	// (0x000582ed) bg_button_pane_cp15

0xee1b,	// (0x0005d6fc) cell_call6_btn_pane_g1

0xee24,	// (0x0005d705) cell_call6_btn_pane_t1

0x92dd,	// (0x00057bbe) listscroll_wgtman_pane_ParamLimits

0x92dd,	// (0x00057bbe) listscroll_wgtman_pane

0x92fe,	// (0x00057bdf) wgtman_btn_pane_ParamLimits

0x92fe,	// (0x00057bdf) wgtman_btn_pane

0xb256,	// (0x00059b37) aid_scroll_copy1

0xee33,	// (0x0005d714) list_wgtman_pane

0x9341,	// (0x00057c22) wgtman_btn_pane_g1_ParamLimits

0x9341,	// (0x00057c22) wgtman_btn_pane_g1

0x936d,	// (0x00057c4e) wgtman_btn_pane_t1_ParamLimits

0x936d,	// (0x00057c4e) wgtman_btn_pane_t1

0xee3d,	// (0x0005d71e) wgtman_btn_pane_t2_ParamLimits

0xee3d,	// (0x0005d71e) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0005e7c1) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0005e7c1) wgtman_btn_pane_t

0xac00,	// (0x000594e1) listrow_wgtman_pane_ParamLimits

0xac00,	// (0x000594e1) listrow_wgtman_pane

0x93aa,	// (0x00057c8b) listrow_wgtman_pane_g1

0x93b7,	// (0x00057c98) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0005e7c6) listrow_wgtman_pane_g

0x0922,	// (0x0004f203) listrow_wgtman_pane_t1

0x093a,	// (0x0004f21b) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0005e7cb) listrow_wgtman_pane_t

0x0960,	// (0x0004f241) wait_bar_pane_cp09

0xee54,	// (0x0005d735) main_calllock_btn_pane

0xee5e,	// (0x0005d73f) main_calllock_pane_g1

0x9a0c,	// (0x000582ed) bg_button_pane_cp17

0xee6a,	// (0x0005d74b) main_calllock_btn_pane_g1

0xee73,	// (0x0005d754) main_calllock_btn_pane_t1

0x9a0c,	// (0x000582ed) main_dialer3_pane

0x9a0c,	// (0x000582ed) main_fmrd2_pane

0xcc10,	// (0x0005b4f1) main_fs_bigclock_unlock_btn_pane_g1

0xee8a,	// (0x0005d76b) main_fs_bigclock_unlock_btn_pane_t1

0x93d5,	// (0x00057cb6) area_fmrd2_info_pane_ParamLimits

0x93d5,	// (0x00057cb6) area_fmrd2_info_pane

0x93e4,	// (0x00057cc5) area_fmrd2_visual_pane_ParamLimits

0x93e4,	// (0x00057cc5) area_fmrd2_visual_pane

0x93f2,	// (0x00057cd3) fmrd2_indi_pane_ParamLimits

0x93f2,	// (0x00057cd3) fmrd2_indi_pane

0x93ff,	// (0x00057ce0) area_fmrd2_visual_pane_g1

0x9407,	// (0x00057ce8) area_fmrd2_visual_pane_t1

0x9417,	// (0x00057cf8) area_fmrd2_visual_pane_t2

0x9427,	// (0x00057d08) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0005e7d5) area_fmrd2_visual_pane_t

0x9437,	// (0x00057d18) area_fmrd2_info_pane_g1

0x943f,	// (0x00057d20) area_fmrd2_info_pane_t1

0x944f,	// (0x00057d30) area_fmrd2_info_pane_t2

0x945f,	// (0x00057d40) area_fmrd2_info_pane_t3

0x946f,	// (0x00057d50) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0005e7dc) area_fmrd2_info_pane_t

0x947f,	// (0x00057d60) fmrd2_indi_pane_t1

0x948f,	// (0x00057d70) fmrd2_indi_pane_t2

0x949f,	// (0x00057d80) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0005e7e5) fmrd2_indi_pane_t

0xe410,	// (0x0005ccf1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe410,	// (0x0005ccf1) list_single_fs_bigclock_indicator_pane_g5

0xe4c0,	// (0x0005cda1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4c0,	// (0x0005cda1) list_single_fs_bigclock_indicator_pane_t5

0x8b45,	// (0x00057426) aid_cell_bcale_month_pane_ParamLimits

0x8b45,	// (0x00057426) aid_cell_bcale_month_pane

0x8b6c,	// (0x0005744d) bcale_month_pane_ParamLimits

0x8b6c,	// (0x0005744d) bcale_month_pane

0x8b8e,	// (0x0005746f) bcale_preview_pane_ParamLimits

0x8b8e,	// (0x0005746f) bcale_preview_pane

0xec21,	// (0x0005d502) list_single_fs_bigclock_pane_t1_ParamLimits

0xec40,	// (0x0005d521) list_single_fs_bigclock_pane_t2_ParamLimits

0xec40,	// (0x0005d521) list_single_fs_bigclock_pane_t2

0x0001,

0xfe86,	// (0x0005e767) list_single_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0005e767) list_single_fs_bigclock_pane_t

0xee82,	// (0x0005d763) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0005e7d0) main_fs_bigclock_unlock_btn_pane_g

0x94af,	// (0x00057d90) aid_dia3_key_size_ParamLimits

0x94af,	// (0x00057d90) aid_dia3_key_size

0x94be,	// (0x00057d9f) aid_dia3_listrow_size_ParamLimits

0x94be,	// (0x00057d9f) aid_dia3_listrow_size

0x94d3,	// (0x00057db4) dia3_keypad_fun_pane_ParamLimits

0x94d3,	// (0x00057db4) dia3_keypad_fun_pane

0x94ef,	// (0x00057dd0) dia3_keypad_num_pane_ParamLimits

0x94ef,	// (0x00057dd0) dia3_keypad_num_pane

0x9508,	// (0x00057de9) dia3_listscroll_pane_ParamLimits

0x9508,	// (0x00057de9) dia3_listscroll_pane

0x951b,	// (0x00057dfc) dia3_numentry_pane_ParamLimits

0x951b,	// (0x00057dfc) dia3_numentry_pane

0xee98,	// (0x0005d779) dia3_list_pane

0xeea3,	// (0x0005d784) scroll_pane_cp12

0x9a0c,	// (0x000582ed) bg_dia3_numentry_pane

0x952f,	// (0x00057e10) dia3_numentry_pane_t1

0x953e,	// (0x00057e1f) cell_dia3_key_num_pane

0x9546,	// (0x00057e27) cell_dia3_key0_fun_pane_ParamLimits

0x9546,	// (0x00057e27) cell_dia3_key0_fun_pane

0x955a,	// (0x00057e3b) cell_dia3_key1_fun_pane_ParamLimits

0x955a,	// (0x00057e3b) cell_dia3_key1_fun_pane

0x9572,	// (0x00057e53) dia3_listrow_pane

0xe10e,	// (0x0005c9ef) bg_dia3_numentry_pane_g1

0x9a0c,	// (0x000582ed) bg_button_pane_cp21

0xeeae,	// (0x0005d78f) cell_dia3_key_num_pane_t1

0xeebc,	// (0x0005d79d) cell_dia3_key_num_pane_t2

0xeecb,	// (0x0005d7ac) cell_dia3_key_num_pane_t3

0xeeda,	// (0x0005d7bb) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0005e7ec) cell_dia3_key_num_pane_t

0x9a0c,	// (0x000582ed) bg_button_pane_cp19

0x9584,	// (0x00057e65) cell_dia3_key0_fun_pane_g1

0x9a0c,	// (0x000582ed) bg_button_pane_cp20

0x958c,	// (0x00057e6d) cell_dia3_key1_fun_pane_g1

0x9594,	// (0x00057e75) area_left_week_number_pane

0x95a2,	// (0x00057e83) area_top_day_name_pane

0x95b5,	// (0x00057e96) frame_month_view_pane

0xeee9,	// (0x0005d7ca) grid_month_view_pane

0x95ca,	// (0x00057eab) cell_top_day_name_pane_ParamLimits

0x95ca,	// (0x00057eab) cell_top_day_name_pane

0x95f9,	// (0x00057eda) cell_area_left_week_number_pane_ParamLimits

0x95f9,	// (0x00057eda) cell_area_left_week_number_pane

0x960d,	// (0x00057eee) cell_month_view_pane_ParamLimits

0x960d,	// (0x00057eee) cell_month_view_pane

0xeef7,	// (0x0005d7d8) frm_month_g1

0x963c,	// (0x00057f1d) frm_month_g2

0x964f,	// (0x00057f30) frm_month_g3

0x9662,	// (0x00057f43) frm_month_g4

0x9675,	// (0x00057f56) frm_month_g5

0x9688,	// (0x00057f69) frm_month_g6

0x969b,	// (0x00057f7c) frm_month_g7

0xef04,	// (0x0005d7e5) frm_month_g8

0x96b0,	// (0x00057f91) frm_month_g9

0x96c0,	// (0x00057fa1) frm_month_g10

0x96d0,	// (0x00057fb1) frm_month_g11

0x96e0,	// (0x00057fc1) frm_month_g12

0x96f2,	// (0x00057fd3) frm_month_g13

0x9706,	// (0x00057fe7) frm_month_g14

0x971a,	// (0x00057ffb) frm_month_g15

0x972e,	// (0x0005800f) frm_month_g16

0x000f,

0xff14,	// (0x0005e7f5) frm_month_g

0xef11,	// (0x0005d7f2) cell_top_day_name_pane_t1

0x9742,	// (0x00058023) cell_area_left_week_number_pane_g1

0x974e,	// (0x0005802f) cell_area_left_week_number_pane_t1

0xce40,	// (0x0005b721) cell_month_view_pane_g1

0x9761,	// (0x00058042) cell_month_view_pane_t1

0x9a0c,	// (0x000582ed) main_fps_pane

0xe6c4,	// (0x0005cfa5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c4,	// (0x0005cfa5) cmail_ddmenu_btn02_pane_cp1

0xe6e0,	// (0x0005cfc1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e0,	// (0x0005cfc1) cmail_ddmenu_btn02_pane_cp2

0x8e9d,	// (0x0005777e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e9d,	// (0x0005777e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe39,	// (0x0005e71a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe39,	// (0x0005e71a) cmail_ddmenu_btn02_pane_g

0x8ebe,	// (0x0005779f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ebe,	// (0x0005779f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3e,	// (0x0005e71f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3e,	// (0x0005e71f) cmail_ddmenu_btn02_pane_t

0x9774,	// (0x00058055) fps_text_pane_ParamLimits

0x9774,	// (0x00058055) fps_text_pane

0x978b,	// (0x0005806c) main_fps_pane_g1_ParamLimits

0x978b,	// (0x0005806c) main_fps_pane_g1

0x97a3,	// (0x00058084) wait_bar_pane_cp010_ParamLimits

0x97a3,	// (0x00058084) wait_bar_pane_cp010

0x97b6,	// (0x00058097) fps_text_pane_t1_ParamLimits

0x97b6,	// (0x00058097) fps_text_pane_t1

0xe5ef,	// (0x0005ced0) cam4_image_uncrop_pane_g1

0xe5f8,	// (0x0005ced9) cam4_image_uncrop_pane_g2

0x66e5,	// (0x00054fc6) cam4_image_uncrop_pane_g3

0x66ee,	// (0x00054fcf) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0005e1d6) cam4_image_uncrop_pane_g

0x9572,	// (0x00057e53) dia3_listrow_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_phob2_pane

0x88d0,	// (0x000571b1) cell_tport_appsw_pane_cp02_ParamLimits

0x88d0,	// (0x000571b1) cell_tport_appsw_pane_cp02

0x88e4,	// (0x000571c5) cell_tport_appsw_pane_cp03_ParamLimits

0x88e4,	// (0x000571c5) cell_tport_appsw_pane_cp03

0x9a0c,	// (0x000582ed) phob2_contact_card_pane

0x9a0c,	// (0x000582ed) phob2_listscroll_pane

0xef24,	// (0x0005d805) phob2_list_pane

0xef2c,	// (0x0005d80d) scroll_pane_cp034

0x97ce,	// (0x000580af) phob2_cc_data_pane_ParamLimits

0x97ce,	// (0x000580af) phob2_cc_data_pane

0x97ef,	// (0x000580d0) phob2_cc_listscroll_pane_ParamLimits

0x97ef,	// (0x000580d0) phob2_cc_listscroll_pane

0x9811,	// (0x000580f2) list_double_large_graphic_phob2_pane_ParamLimits

0x9811,	// (0x000580f2) list_double_large_graphic_phob2_pane

0x9825,	// (0x00058106) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9825,	// (0x00058106) list_double_large_graphic_phob2_pane_g1

0x0972,	// (0x0004f253) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0972,	// (0x0004f253) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0005e816) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0005e816) list_double_large_graphic_phob2_pane_g

0x097e,	// (0x0004f25f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x097e,	// (0x0004f25f) list_double_large_graphic_phob2_pane_t1

0x0993,	// (0x0004f274) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0993,	// (0x0004f274) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0005e81b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0005e81b) list_double_large_graphic_phob2_pane_t

0x9a0c,	// (0x000582ed) list_highlight_pane_cp024

0x983b,	// (0x0005811c) phob2_cc_button_pane

0x9843,	// (0x00058124) phob2_cc_data_pane_g1_ParamLimits

0x9843,	// (0x00058124) phob2_cc_data_pane_g1

0x9859,	// (0x0005813a) phob2_cc_data_pane_g2_ParamLimits

0x9859,	// (0x0005813a) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0005e820) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0005e820) phob2_cc_data_pane_g

0x9869,	// (0x0005814a) phob2_cc_data_pane_t1_ParamLimits

0x9869,	// (0x0005814a) phob2_cc_data_pane_t1

0x9881,	// (0x00058162) phob2_cc_data_pane_t2_ParamLimits

0x9881,	// (0x00058162) phob2_cc_data_pane_t2

0x989b,	// (0x0005817c) phob2_cc_data_pane_t3_ParamLimits

0x989b,	// (0x0005817c) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0005e825) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0005e825) phob2_cc_data_pane_t

0xef34,	// (0x0005d815) phob2_cc_list_pane_ParamLimits

0xef34,	// (0x0005d815) phob2_cc_list_pane

0xd920,	// (0x0005c201) scroll_pane_cp035_ParamLimits

0xd920,	// (0x0005c201) scroll_pane_cp035

0x9a65,	// (0x00058346) bg_button_pane_cp033

0xef40,	// (0x0005d821) phob2_cc_button_pane_g1

0xef4c,	// (0x0005d82d) phob2_cc_button_pane_t1

0xef61,	// (0x0005d842) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0005e82c) phob2_cc_button_pane_t

0x98b5,	// (0x00058196) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98b5,	// (0x00058196) list_double_large_graphic_phob2_cc_pane

0x98c9,	// (0x000581aa) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98c9,	// (0x000581aa) list_double_large_graphic_phob2_cc_pane_g1

0x09a5,	// (0x0004f286) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09a5,	// (0x0004f286) list_double_large_graphic_phob2_cc_pane_g2

0x09b1,	// (0x0004f292) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09b1,	// (0x0004f292) list_double_large_graphic_phob2_cc_pane_g3

0x09bd,	// (0x0004f29e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09bd,	// (0x0004f29e) list_double_large_graphic_phob2_cc_pane_g4

0x09c9,	// (0x0004f2aa) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x09c9,	// (0x0004f2aa) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0005e831) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0005e831) list_double_large_graphic_phob2_cc_pane_g

0x09d5,	// (0x0004f2b6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x09d5,	// (0x0004f2b6) list_double_large_graphic_phob2_cc_pane_t1

0x09fe,	// (0x0004f2df) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09fe,	// (0x0004f2df) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0005e83c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0005e83c) list_double_large_graphic_phob2_cc_pane_t

0xef73,	// (0x0005d854) list_highlight_pane_cp025_ParamLimits

0xef73,	// (0x0005d854) list_highlight_pane_cp025

0x9a65,	// (0x00058346) bg_button_pane_cp033_ParamLimits

0xef40,	// (0x0005d821) phob2_cc_button_pane_g1_ParamLimits

0xef4c,	// (0x0005d82d) phob2_cc_button_pane_t1_ParamLimits

0xef61,	// (0x0005d842) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0005e82c) phob2_cc_button_pane_t_ParamLimits

0x0c73,	// (0x0004f554) popup_wgtman_window

0xd748,	// (0x0005c029) scroll_pane_cp038

0x9323,	// (0x00057c04) wgtman_btn_pane_cp_01_ParamLimits

0x9323,	// (0x00057c04) wgtman_btn_pane_cp_01

0xef81,	// (0x0005d862) wgtman_content_pane

0xef8a,	// (0x0005d86b) wgtman_heading_pane

0x9a0c,	// (0x000582ed) bg_heading_pane_cp02

0xef93,	// (0x0005d874) wgtman_heading_pane_g1

0xef9b,	// (0x0005d87c) wgtman_heading_pane_t1

0xefa9,	// (0x0005d88a) scroll_pane_cp036

0xefb1,	// (0x0005d892) wgtman_list_pane

0xefb9,	// (0x0005d89a) wgtman_list_pane_t1_ParamLimits

0xefb9,	// (0x0005d89a) wgtman_list_pane_t1

0xaacb,	// (0x000593ac) cam4_grid_pane

0xff91,	// (0x0004e872) bg_button_pane_cp015_ParamLimits

0x7369,	// (0x00055c4a) bg_button_pane_cp016_ParamLimits

0x737c,	// (0x00055c5d) bg_button_pane_cp017_ParamLimits

0xffd9,	// (0x0004e8ba) popup_vitu2_query_window_g3_ParamLimits

0xffd9,	// (0x0004e8ba) popup_vitu2_query_window_g3

0x0054,	// (0x0004e935) popup_vitu2_query_window_t6_ParamLimits

0x0054,	// (0x0004e935) popup_vitu2_query_window_t6

0x007f,	// (0x0004e960) popup_vitu2_query_window_t7_ParamLimits

0x007f,	// (0x0004e960) popup_vitu2_query_window_t7

0xe5ef,	// (0x0005ced0) cam4_grid_pane_g1

0xe5f8,	// (0x0005ced9) cam4_grid_pane_g2

0xefd3,	// (0x0005d8b4) cam4_grid_pane_g3

0xefdc,	// (0x0005d8bd) cam4_grid_pane_g4

0x0003,

0xff60,	// (0x0005e841) cam4_grid_pane_g

0x1db3,	// (0x00050694) aid_placing_vt_slider_lsc_ParamLimits

0x20a0,	// (0x00050981) vidtel_button_pane_ParamLimits

0x20a0,	// (0x00050981) vidtel_button_pane

0x9a0c,	// (0x000582ed) bg_button_pane_cp034

0x98d5,	// (0x000581b6) vidtel_button_pane_g1

0x98dd,	// (0x000581be) vidtel_button_pane_t1

0xd867,	// (0x0005c148) aid_size_vtel_slider_touch

0xd920,	// (0x0005c201) scroll_pane_cp039

0xe14c,	// (0x0005ca2d) ncim_query_button_pane_cp01_ParamLimits

0xe16b,	// (0x0005ca4c) ncimui_query_pane_g1_ParamLimits

0x9a65,	// (0x00058346) input_focus_pane_cp012_ParamLimits

0xe190,	// (0x0005ca71) ncim_query_entry_pane_t1_ParamLimits

0xd920,	// (0x0005c201) scroll_pane_cp039_ParamLimits

0x3260,	// (0x00051b41) navi_pane_bcale_mc_g1

0x3268,	// (0x00051b49) navi_pane_bcale_mc_t1

0xe71d,	// (0x0005cffe) main_sp_fs_email_pane_g1

0xe729,	// (0x0005d00a) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0005e5cd) main_sp_fs_email_pane_g

0xe9ae,	// (0x0005d28f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9ae,	// (0x0005d28f) list_single_cale_mrui_row_pane_g3

0x08d1,	// (0x0004f1b2) list_single_recal_day_pane_g5_event_pane

0x8f2e,	// (0x0005780f) list_single_recal_day_pane_g7

0xefe7,	// (0x0005d8c8) list_recal_day_event_pane_cp01

0xeff0,	// (0x0005d8d1) list_recal_vselct_arw_lo_pane_cp01

0xeff8,	// (0x0005d8d9) list_recal_vselct_arw_up_pane_cp01

0xf000,	// (0x0005d8e1) list_recal_vselct_pane_cp01

0xd877,	// (0x0005c158) list_recal_day_event_pane_cp01_g1

0xace1,	// (0x000595c2) list_recal_day_event_pane_cp01_t1

0x8f36,	// (0x00057817) list_single_recal_day_pane_t1_ParamLimits

0xacb6,	// (0x00059597) list_single_recal_day_pane_t2_ParamLimits

0xfe4e,	// (0x0005e72f) list_single_recal_day_pane_t_ParamLimits

0xa0e1,	// (0x000589c2) bg_notes_pane_ParamLimits

0xa18c,	// (0x00058a6d) list_notes_pane_ParamLimits

0x0fc0,	// (0x0004f8a1) scroll_pane_cp06_ParamLimits

0xa1c8,	// (0x00058aa9) main_notes_pane_ParamLimits

0x9a0c,	// (0x000582ed) main_welc_pane

0x98f3,	// (0x000581d4) main_welc_body_pane_ParamLimits

0x98f3,	// (0x000581d4) main_welc_body_pane

0x9912,	// (0x000581f3) main_welc_opti_pane_ParamLimits

0x9912,	// (0x000581f3) main_welc_opti_pane

0x995b,	// (0x0005823c) main_welc_pane_t1_ParamLimits

0x995b,	// (0x0005823c) main_welc_pane_t1

0x997d,	// (0x0005825e) main_welc_body_row_pane_ParamLimits

0x997d,	// (0x0005825e) main_welc_body_row_pane

0x9991,	// (0x00058272) main_welc_opti_row_pane_ParamLimits

0x9991,	// (0x00058272) main_welc_opti_row_pane

0xf00a,	// (0x0005d8eb) main_welc_opti_row_pane_g1

0xf012,	// (0x0005d8f3) main_welc_opti_row_pane_t1

0xf021,	// (0x0005d902) main_welc_body_row_pane_t1

0xed01,	// (0x0005d5e2) popup_notif_wgt_heading_pane

0xed1b,	// (0x0005d5fc) aid_size_list_notif_wgt_del_ParamLimits

0xed28,	// (0x0005d609) list_notif_wgt_row_pane_g1_ParamLimits

0xed34,	// (0x0005d615) list_notif_wgt_row_pane_g2_ParamLimits

0xed48,	// (0x0005d629) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb5,	// (0x0005e796) list_notif_wgt_row_pane_g_ParamLimits

0xed55,	// (0x0005d636) list_notif_wgt_row_pane_t1_ParamLimits

0xed6b,	// (0x0005d64c) list_notif_wgt_row_pane_t2_ParamLimits

0xed7d,	// (0x0005d65e) list_notif_wgt_row_pane_t3_ParamLimits

0xfebc,	// (0x0005e79d) list_notif_wgt_row_pane_t_ParamLimits

0x93aa,	// (0x00057c8b) listrow_wgtman_pane_g1_ParamLimits

0x93b7,	// (0x00057c98) listrow_wgtman_pane_g2_ParamLimits

0xfee5,	// (0x0005e7c6) listrow_wgtman_pane_g_ParamLimits

0x0922,	// (0x0004f203) listrow_wgtman_pane_t1_ParamLimits

0x093a,	// (0x0004f21b) listrow_wgtman_pane_t2_ParamLimits

0xfeea,	// (0x0005e7cb) listrow_wgtman_pane_t_ParamLimits

0x0960,	// (0x0004f241) wait_bar_pane_cp09_ParamLimits

0x9a0c,	// (0x000582ed) bg_popup_heading_pane_cp02

0xf030,	// (0x0005d911) popup_notif_wgt_heading_pane_g1

0xf038,	// (0x0005d919) popup_notif_wgt_heading_pane_t1

0x9a0c,	// (0x000582ed) main_vids_pane

0x9a0c,	// (0x000582ed) vids_listscroll_pane

0x99a1,	// (0x00058282) scroll_pane_cp040

0x9a0c,	// (0x000582ed) vids_list_pane

0x99ac,	// (0x0005828d) vids_list_double_pane_ParamLimits

0x99ac,	// (0x0005828d) vids_list_double_pane

0x99bd,	// (0x0005829e) vids_list_double_pane_g1

0x99c6,	// (0x000582a7) vids_list_double_pane_t1

0x99d6,	// (0x000582b7) vids_list_double_pane_t2

0x0001,

0xff6e,	// (0x0005e84f) vids_list_double_pane_t

0x9a65,	// (0x00058346) main_ncimui_pane_ParamLimits

0x7f06,	// (0x000567e7) main_ncimui_pane_g1_ParamLimits

0x7f12,	// (0x000567f3) main_ncimui_pane_g2_ParamLimits

0x7f12,	// (0x000567f3) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0005e4d2) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0005e4d2) main_ncimui_pane_g

0x9931,	// (0x00058212) main_welc_pane_g1_ParamLimits

0x9931,	// (0x00058212) main_welc_pane_g1

0x9946,	// (0x00058227) main_welc_pane_g2_ParamLimits

0x9946,	// (0x00058227) main_welc_pane_g2

0x0001,

0xff69,	// (0x0005e84a) main_welc_pane_g_ParamLimits

0xff69,	// (0x0005e84a) main_welc_pane_g

0xa0e1,	// (0x000589c2) listscroll_mce_pane_ParamLimits

0x3340,	// (0x00051c21) wait_bar_pane_cp10

0xc7b3,	// (0x0005b094) main_cale_day_pane_ParamLimits

0xc7b3,	// (0x0005b094) main_cale_week_pane_ParamLimits

0xa0e1,	// (0x000589c2) main_messa_pane_ParamLimits

0x59a3,	// (0x00054284) main_clock2_btn_pane_ParamLimits

0x59a3,	// (0x00054284) main_clock2_btn_pane

0xcfc8,	// (0x0005b8a9) main_clock2_btn_pane_cp01_ParamLimits

0xcfc8,	// (0x0005b8a9) main_clock2_btn_pane_cp01

0xe97f,	// (0x0005d260) list_cale_mrui_pane_ParamLimits

0xedc1,	// (0x0005d6a2) main_cf0_pane_g2

0x0001,

0xfec3,	// (0x0005e7a4) main_cf0_pane_g

0x9594,	// (0x00057e75) area_left_week_number_pane_ParamLimits

0x95a2,	// (0x00057e83) area_top_day_name_pane_ParamLimits

0x95b5,	// (0x00057e96) frame_month_view_pane_ParamLimits

0xeee9,	// (0x0005d7ca) grid_month_view_pane_ParamLimits

0xeef7,	// (0x0005d7d8) frm_month_g1_ParamLimits

0x963c,	// (0x00057f1d) frm_month_g2_ParamLimits

0x964f,	// (0x00057f30) frm_month_g3_ParamLimits

0x9662,	// (0x00057f43) frm_month_g4_ParamLimits

0x9675,	// (0x00057f56) frm_month_g5_ParamLimits

0x9688,	// (0x00057f69) frm_month_g6_ParamLimits

0x969b,	// (0x00057f7c) frm_month_g7_ParamLimits

0xef04,	// (0x0005d7e5) frm_month_g8_ParamLimits

0x96b0,	// (0x00057f91) frm_month_g9_ParamLimits

0x96c0,	// (0x00057fa1) frm_month_g10_ParamLimits

0x96d0,	// (0x00057fb1) frm_month_g11_ParamLimits

0x96e0,	// (0x00057fc1) frm_month_g12_ParamLimits

0x96f2,	// (0x00057fd3) frm_month_g13_ParamLimits

0x9706,	// (0x00057fe7) frm_month_g14_ParamLimits

0x971a,	// (0x00057ffb) frm_month_g15_ParamLimits

0x972e,	// (0x0005800f) frm_month_g16_ParamLimits

0xff14,	// (0x0005e7f5) frm_month_g_ParamLimits

0xef11,	// (0x0005d7f2) cell_top_day_name_pane_t1_ParamLimits

0x9742,	// (0x00058023) cell_area_left_week_number_pane_g1_ParamLimits

0x974e,	// (0x0005802f) cell_area_left_week_number_pane_t1_ParamLimits

0xce40,	// (0x0005b721) cell_month_view_pane_g1_ParamLimits

0x9761,	// (0x00058042) cell_month_view_pane_t1_ParamLimits

0xa0d9,	// (0x000589ba) main_clock2_btn_pane_g1

0xf046,	// (0x0005d927) main_clock2_btn_pane_t1

0x9a65,	// (0x00058346) listscroll_cmail_pane_ParamLimits

0xe71d,	// (0x0005cffe) main_sp_fs_email_pane_g1_ParamLimits

0xe729,	// (0x0005d00a) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0005e5cd) main_sp_fs_email_pane_g_ParamLimits

0xea8b,	// (0x0005d36c) list_recal_day_pane_ParamLimits

0xea9c,	// (0x0005d37d) mian_recal_day_pane_t1

0x04fb,	// (0x0004eddc) list_single_dyc_row_text_pane_t4_ParamLimits

0x04fb,	// (0x0004eddc) list_single_dyc_row_text_pane_t4

0x0544,	// (0x0004ee25) list_single_dyc_row_text_pane_t5_ParamLimits

0x0544,	// (0x0004ee25) list_single_dyc_row_text_pane_t5

0x87b3,	// (0x00057094) list_single_dyc_row_text_pane_t6_ParamLimits

0x87b3,	// (0x00057094) list_single_dyc_row_text_pane_t6

0xae4a,	// (0x0005972b) aid_mgn_list_cale_time_pane

0x9a65,	// (0x00058346) main_gallery2_pane_ParamLimits

0xcfdc,	// (0x0005b8bd) main_clock2_pane_cp01_t1

0xcfec,	// (0x0005b8cd) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0005e0ac) main_clock2_pane_cp01_t

0x1431,	// (0x0004fd12) cale_week_scroll_pane_g16_ParamLimits

0x1431,	// (0x0004fd12) cale_week_scroll_pane_g16

0xa3f4,	// (0x00058cd5) vorec_slider_pane

0x98dd,	// (0x000581be) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small

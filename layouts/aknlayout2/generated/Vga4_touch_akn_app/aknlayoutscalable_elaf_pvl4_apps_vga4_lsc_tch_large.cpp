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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008d305 };

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
0x0ad8,	// (0x0008dddd) Screen

0x0ae4,	// (0x0008dde9) application_window

0x0b38,	// (0x0008de3d) area_bottom_pane_ParamLimits

0x0b38,	// (0x0008de3d) area_bottom_pane

0x0b71,	// (0x0008de76) area_top_pane_ParamLimits

0x0b71,	// (0x0008de76) area_top_pane

0x99ef,	// (0x00096cf4) call_video_uplink_pane_ParamLimits

0x99ef,	// (0x00096cf4) call_video_uplink_pane

0x0bff,	// (0x0008df04) main_pane_ParamLimits

0x0bff,	// (0x0008df04) main_pane

0xc82f,	// (0x00099b34) context_pane

0x453c,	// (0x00091841) navi_pane

0x456c,	// (0x00091871) popup_cale_events_window_ParamLimits

0x456c,	// (0x00091871) popup_cale_events_window

0xc842,	// (0x00099b47) popup_mup_playback_window

0x4584,	// (0x00091889) signal_pane

0xa170,	// (0x00097475) main_browser_pane

0xb3c2,	// (0x000986c7) main_burst_pane

0x423e,	// (0x00091543) main_calc_pane

0xc7d2,	// (0x00099ad7) main_cale_day_pane

0x1241,	// (0x0008e546) main_cale_month_pane

0xc7d2,	// (0x00099ad7) main_cale_week_pane

0xb3c2,	// (0x000986c7) main_call_pane

0x9e2e,	// (0x00097133) main_call_poc_pane

0xb3c2,	// (0x000986c7) main_camera_pane

0xb3c2,	// (0x000986c7) main_chi_dic_pane

0xb264,	// (0x00098569) main_clock_pane

0x9e2e,	// (0x00097133) main_fmradio_pane

0xb3c2,	// (0x000986c7) main_graph_messa_pane

0x9e2e,	// (0x00097133) main_help_pane

0xa170,	// (0x00097475) main_im_pane

0xa089,	// (0x0009738e) main_image_pane_ParamLimits

0xa089,	// (0x0009738e) main_image_pane

0x9e2e,	// (0x00097133) main_location2_pane

0xb3c2,	// (0x000986c7) main_location_pane

0xa089,	// (0x0009738e) main_messa_pane

0x9e2e,	// (0x00097133) main_mp2_pane

0xb3c2,	// (0x000986c7) main_mp_pane

0x9e2e,	// (0x00097133) main_msg_pane

0x9e2e,	// (0x00097133) main_mup_eq_pane

0x9e2e,	// (0x00097133) main_mup_pane

0xa170,	// (0x00097475) main_notes_pane

0x9e2e,	// (0x00097133) main_pec_pane

0x9e2e,	// (0x00097133) main_phob_pane

0x9e2e,	// (0x00097133) main_pinb_pane

0x9e2e,	// (0x00097133) main_postcard_pane

0x9e2e,	// (0x00097133) main_qdial_pane

0xb3c2,	// (0x000986c7) main_skin_pane

0x9e2e,	// (0x00097133) main_smil2_pane

0xb3c2,	// (0x000986c7) main_smil_pane

0xb3c2,	// (0x000986c7) main_video_pane

0xb3c2,	// (0x000986c7) main_video_tele_pane

0xa089,	// (0x0009738e) main_viewer_pane_ParamLimits

0xa089,	// (0x0009738e) main_viewer_pane

0xb3c2,	// (0x000986c7) main_vorec_pane

0x4294,	// (0x00091599) popup_blid_sat_info_window_ParamLimits

0x4294,	// (0x00091599) popup_blid_sat_info_window

0x42f8,	// (0x000915fd) popup_dyc_status_message_window_ParamLimits

0x42f8,	// (0x000915fd) popup_dyc_status_message_window

0x4312,	// (0x00091617) popup_grid_large_graphic_window_ParamLimits

0x4312,	// (0x00091617) popup_grid_large_graphic_window

0x43d4,	// (0x000916d9) popup_loc_request_window_ParamLimits

0x43d4,	// (0x000916d9) popup_loc_request_window

0x4510,	// (0x00091815) popup_wml_address_window_ParamLimits

0x4510,	// (0x00091815) popup_wml_address_window

0x407c,	// (0x00091381) call_muted_g1

0x3d10,	// (0x00091015) popup_call_audio_conf_window_ParamLimits

0x3d10,	// (0x00091015) popup_call_audio_conf_window

0x408c,	// (0x00091391) popup_call_audio_first_window_ParamLimits

0x408c,	// (0x00091391) popup_call_audio_first_window

0x4102,	// (0x00091407) popup_call_audio_in_window_ParamLimits

0x4102,	// (0x00091407) popup_call_audio_in_window

0x413e,	// (0x00091443) popup_call_audio_out_window_ParamLimits

0x413e,	// (0x00091443) popup_call_audio_out_window

0x4178,	// (0x0009147d) popup_call_audio_second_window_ParamLimits

0x4178,	// (0x0009147d) popup_call_audio_second_window

0x41ce,	// (0x000914d3) popup_call_audio_wait_window_ParamLimits

0x41ce,	// (0x000914d3) popup_call_audio_wait_window

0x4203,	// (0x00091508) popup_number_entry_window_ParamLimits

0x4203,	// (0x00091508) popup_number_entry_window

0x9a1b,	// (0x00096d20) bg_popup_call_pane_cp05_ParamLimits

0x9a1b,	// (0x00096d20) bg_popup_call_pane_cp05

0x9a3b,	// (0x00096d40) popup_number_entry_window_t1

0x9a4e,	// (0x00096d53) popup_number_entry_window_t2

0x9a60,	// (0x00096d65) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0009c3d2) popup_number_entry_window_t

0x9a72,	// (0x00096d77) text_title_cp2

0x9a85,	// (0x00096d8a) bg_popup_call_pane_cp_ParamLimits

0x9a85,	// (0x00096d8a) bg_popup_call_pane_cp

0x9a93,	// (0x00096d98) call_thumbnail_pane

0x9a9b,	// (0x00096da0) popup_call_audio_in_window_g1_ParamLimits

0x9a9b,	// (0x00096da0) popup_call_audio_in_window_g1

0x9aa7,	// (0x00096dac) popup_call_audio_in_window_g2_ParamLimits

0x9aa7,	// (0x00096dac) popup_call_audio_in_window_g2

0x9ab3,	// (0x00096db8) popup_call_audio_in_window_g3_ParamLimits

0x9ab3,	// (0x00096db8) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0009c3db) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0009c3db) popup_call_audio_in_window_g

0x9abf,	// (0x00096dc4) popup_call_audio_in_window_t1_ParamLimits

0x9abf,	// (0x00096dc4) popup_call_audio_in_window_t1

0x9adb,	// (0x00096de0) popup_call_audio_in_window_t2_ParamLimits

0x9adb,	// (0x00096de0) popup_call_audio_in_window_t2

0x9af7,	// (0x00096dfc) popup_call_audio_in_window_t3_ParamLimits

0x9af7,	// (0x00096dfc) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0009c3e2) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0009c3e2) popup_call_audio_in_window_t

0x9a85,	// (0x00096d8a) bg_popup_call_pane_cp01_ParamLimits

0x9a85,	// (0x00096d8a) bg_popup_call_pane_cp01

0x9a93,	// (0x00096d98) call_thumbnail_pane_cp02

0x9b0a,	// (0x00096e0f) call_type_pane_cp022

0x9b12,	// (0x00096e17) popup_call_audio_out_window_g1_ParamLimits

0x9b12,	// (0x00096e17) popup_call_audio_out_window_g1

0x9b24,	// (0x00096e29) popup_call_audio_out_window_g2_ParamLimits

0x9b24,	// (0x00096e29) popup_call_audio_out_window_g2

0x9b30,	// (0x00096e35) popup_call_audio_out_window_g3_ParamLimits

0x9b30,	// (0x00096e35) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0009c3e9) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0009c3e9) popup_call_audio_out_window_g

0x9b42,	// (0x00096e47) popup_call_audio_out_window_t1_ParamLimits

0x9b42,	// (0x00096e47) popup_call_audio_out_window_t1

0x9b5a,	// (0x00096e5f) popup_call_audio_out_window_t2_ParamLimits

0x9b5a,	// (0x00096e5f) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0009c3f0) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0009c3f0) popup_call_audio_out_window_t

0x9b6f,	// (0x00096e74) bg_popup_call_pane_ParamLimits

0x9b6f,	// (0x00096e74) bg_popup_call_pane

0x0dbe,	// (0x0008e0c3) call_thumbnail_pane_cp_ParamLimits

0x0dbe,	// (0x0008e0c3) call_thumbnail_pane_cp

0x9bf3,	// (0x00096ef8) call_type_pane_cp01_ParamLimits

0x9bf3,	// (0x00096ef8) call_type_pane_cp01

0x9c37,	// (0x00096f3c) popup_call_audio_first_window_g1_ParamLimits

0x9c37,	// (0x00096f3c) popup_call_audio_first_window_g1

0x9c83,	// (0x00096f88) popup_call_audio_first_window_g2_ParamLimits

0x9c83,	// (0x00096f88) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0009c3f5) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0009c3f5) popup_call_audio_first_window_g

0x9cc7,	// (0x00096fcc) popup_call_audio_first_window_t1_ParamLimits

0x9cc7,	// (0x00096fcc) popup_call_audio_first_window_t1

0x9d73,	// (0x00097078) popup_call_audio_first_window_t4_ParamLimits

0x9d73,	// (0x00097078) popup_call_audio_first_window_t4

0x9dff,	// (0x00097104) popup_call_audio_first_window_t5_ParamLimits

0x9dff,	// (0x00097104) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0009c3fa) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0009c3fa) popup_call_audio_first_window_t

0x9e2e,	// (0x00097133) bg_popup_call_pane_cp02

0x9e38,	// (0x0009713d) call_type_pane_cp023

0x9e40,	// (0x00097145) popup_call_audio_wait_window_g1

0x9e48,	// (0x0009714d) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0009c401) popup_call_audio_wait_window_g

0x9e50,	// (0x00097155) popup_call_audio_wait_window_t3

0x9e5e,	// (0x00097163) bg_popup_call_pane_cp03_ParamLimits

0x9e5e,	// (0x00097163) bg_popup_call_pane_cp03

0x9ebe,	// (0x000971c3) call_thumbnail_pane_cp011_ParamLimits

0x9ebe,	// (0x000971c3) call_thumbnail_pane_cp011

0x9eca,	// (0x000971cf) call_type_pane_cp034_ParamLimits

0x9eca,	// (0x000971cf) call_type_pane_cp034

0x9f06,	// (0x0009720b) popup_call_audio_second_window_g1_ParamLimits

0x9f06,	// (0x0009720b) popup_call_audio_second_window_g1

0x9f42,	// (0x00097247) popup_call_audio_second_window_g2_ParamLimits

0x9f42,	// (0x00097247) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0009c406) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0009c406) popup_call_audio_second_window_g

0x9f7e,	// (0x00097283) popup_call_audio_second_window_t1_ParamLimits

0x9f7e,	// (0x00097283) popup_call_audio_second_window_t1

0x9fff,	// (0x00097304) popup_call_audio_second_window_t2_ParamLimits

0x9fff,	// (0x00097304) popup_call_audio_second_window_t2

0xa035,	// (0x0009733a) popup_call_audio_second_window_t3_ParamLimits

0xa035,	// (0x0009733a) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0009c40b) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0009c40b) popup_call_audio_second_window_t

0x9e2e,	// (0x00097133) bg_popup_call_pane_cp04

0xa06b,	// (0x00097370) list_conf_pane

0xa073,	// (0x00097378) popup_call_audio_conf_window_t1

0xa081,	// (0x00097386) call_thumbnail_pane_g1

0xa089,	// (0x0009738e) bg_pinb_pane_ParamLimits

0xa089,	// (0x0009738e) bg_pinb_pane

0xa097,	// (0x0009739c) find_pinb_pane

0xa0a0,	// (0x000973a5) listscroll_pinb_pane_ParamLimits

0xa0a0,	// (0x000973a5) listscroll_pinb_pane

0xa0af,	// (0x000973b4) pinb_bg_pane_g1

0x0de2,	// (0x0008e0e7) pinb_bg_pane_g2

0x0dee,	// (0x0008e0f3) pinb_bg_pane_g3

0x0dfa,	// (0x0008e0ff) pinb_bg_pane_g4

0x0e06,	// (0x0008e10b) pinb_bg_pane_g5

0x0e12,	// (0x0008e117) pinb_bg_pane_g6

0x0e1d,	// (0x0008e122) pinb_bg_pane_g7

0x0e28,	// (0x0008e12d) pinb_bg_pane_g8

0x0e33,	// (0x0008e138) pinb_bg_pane_g9

0x0e3d,	// (0x0008e142) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0009c412) pinb_bg_pane_g

0x0e5a,	// (0x0008e15f) grid_pinb_pane

0x0e65,	// (0x0008e16a) list_pinb_pane

0x0e70,	// (0x0008e175) scroll_pane_cp01_ParamLimits

0x0e70,	// (0x0008e175) scroll_pane_cp01

0xa0b9,	// (0x000973be) find_pinb_pane_g1_ParamLimits

0xa0b9,	// (0x000973be) find_pinb_pane_g1

0xa0d1,	// (0x000973d6) find_pinb_pane_t1

0xa0e3,	// (0x000973e8) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0009c42c) find_pinb_pane_t

0xa0f8,	// (0x000973fd) input_focus_pane_cp01_ParamLimits

0xa0f8,	// (0x000973fd) input_focus_pane_cp01

0x0e82,	// (0x0008e187) cell_pinb_pane_ParamLimits

0x0e82,	// (0x0008e187) cell_pinb_pane

0x0ea4,	// (0x0008e1a9) cell_pinb_pane_g1_ParamLimits

0x0ea4,	// (0x0008e1a9) cell_pinb_pane_g1

0x0eb9,	// (0x0008e1be) cell_pinb_pane_g2_ParamLimits

0x0eb9,	// (0x0008e1be) cell_pinb_pane_g2

0xa104,	// (0x00097409) cell_pinb_pane_g3_ParamLimits

0xa104,	// (0x00097409) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0009c431) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0009c431) cell_pinb_pane_g

0x9e2e,	// (0x00097133) grid_highlight_pane_cp01

0x0ec5,	// (0x0008e1ca) list_pinb_item_pane_ParamLimits

0x0ec5,	// (0x0008e1ca) list_pinb_item_pane

0x9e2e,	// (0x00097133) list_highlight_pane_cp02

0x0ed7,	// (0x0008e1dc) list_pinb_item_pane_g1_ParamLimits

0x0ed7,	// (0x0008e1dc) list_pinb_item_pane_g1

0x0ee4,	// (0x0008e1e9) list_pinb_item_pane_g2_ParamLimits

0x0ee4,	// (0x0008e1e9) list_pinb_item_pane_g2

0x0ef0,	// (0x0008e1f5) list_pinb_item_pane_g3_ParamLimits

0x0ef0,	// (0x0008e1f5) list_pinb_item_pane_g3

0x0f01,	// (0x0008e206) list_pinb_item_pane_g4_ParamLimits

0x0f01,	// (0x0008e206) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0009c438) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0009c438) list_pinb_item_pane_g

0x0f0d,	// (0x0008e212) list_pinb_item_pane_t1_ParamLimits

0x0f0d,	// (0x0008e212) list_pinb_item_pane_t1

0x0f42,	// (0x0008e247) calc_display_pane

0x0f6a,	// (0x0008e26f) calc_paper_pane

0x0f8d,	// (0x0008e292) grid_calc_pane

0x9e2e,	// (0x00097133) bg_list_pane_cp01

0x0fbb,	// (0x0008e2c0) clock_g1

0x0fc3,	// (0x0008e2c8) clock_g2

0x0001,

0xf13c,	// (0x0009c441) clock_g

0x0fcb,	// (0x0008e2d0) clock_t1_ParamLimits

0x0fcb,	// (0x0008e2d0) clock_t1

0x0fe0,	// (0x0008e2e5) clock_t2_ParamLimits

0x0fe0,	// (0x0008e2e5) clock_t2

0x0ff2,	// (0x0008e2f7) clock_t3_ParamLimits

0x0ff2,	// (0x0008e2f7) clock_t3

0x1004,	// (0x0008e309) clock_t4_ParamLimits

0x1004,	// (0x0008e309) clock_t4

0x1016,	// (0x0008e31b) clock_t5_ParamLimits

0x1016,	// (0x0008e31b) clock_t5

0x102b,	// (0x0008e330) clock_t6_ParamLimits

0x102b,	// (0x0008e330) clock_t6

0x103d,	// (0x0008e342) clock_t7_ParamLimits

0x103d,	// (0x0008e342) clock_t7

0x104f,	// (0x0008e354) clock_t8_ParamLimits

0x104f,	// (0x0008e354) clock_t8

0x1063,	// (0x0008e368) clock_t9_ParamLimits

0x1063,	// (0x0008e368) clock_t9

0x0008,

0xf141,	// (0x0009c446) clock_t_ParamLimits

0xf141,	// (0x0009c446) clock_t

0xa118,	// (0x0009741d) popup_clock_analogue_window_cp02

0xa118,	// (0x0009741d) popup_clock_digital_window_cp01

0xa120,	// (0x00097425) listscroll_help_pane

0x9e2e,	// (0x00097133) phob_pre_status_pane

0xa12a,	// (0x0009742f) grid_qdial_pane

0xa089,	// (0x0009738e) listscroll_mce_pane

0xa089,	// (0x0009738e) bg_notes_pane

0xa134,	// (0x00097439) list_notes_pane

0x1079,	// (0x0008e37e) scroll_pane_cp06

0xa142,	// (0x00097447) bg_calc_paper_pane

0xa156,	// (0x0009745b) list_calc_pane

0xa170,	// (0x00097475) bg_calc_display_pane

0x108d,	// (0x0008e392) calc_display_pane_t1

0x109f,	// (0x0008e3a4) calc_display_pane_t2

0xa17c,	// (0x00097481) calc_display_pane_t3

0x0002,

0xf154,	// (0x0009c459) calc_display_pane_t

0x10b1,	// (0x0008e3b6) cell_calc_pane_ParamLimits

0x10b1,	// (0x0008e3b6) cell_calc_pane

0xa18e,	// (0x00097493) bg_calc_paper_pane_g1

0xa19a,	// (0x0009749f) bg_calc_paper_pane_g2

0xa1a6,	// (0x000974ab) bg_calc_paper_pane_g3

0xa1b2,	// (0x000974b7) bg_calc_paper_pane_g4

0xa1be,	// (0x000974c3) bg_calc_paper_pane_g5

0x10ee,	// (0x0008e3f3) bg_calc_paper_pane_g6

0x1101,	// (0x0008e406) bg_calc_paper_pane_g7

0x1114,	// (0x0008e419) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0009c460) bg_calc_paper_pane_g

0x1125,	// (0x0008e42a) calc_bg_paper_pane_g9

0x1136,	// (0x0008e43b) list_calc_item_pane_ParamLimits

0x1136,	// (0x0008e43b) list_calc_item_pane

0xa1ca,	// (0x000974cf) list_calc_item_pane_g1

0xa1d7,	// (0x000974dc) list_calc_item_pane_t1_ParamLimits

0xa1d7,	// (0x000974dc) list_calc_item_pane_t1

0x114e,	// (0x0008e453) list_calc_item_pane_t2_ParamLimits

0x114e,	// (0x0008e453) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0009c471) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0009c471) list_calc_item_pane_t

0xa1e9,	// (0x000974ee) cell_calc_pane_g1

0xa1f3,	// (0x000974f8) grid_highlight_pane_cp02

0xa215,	// (0x0009751a) bg_calc_display_pane_g1

0xa21e,	// (0x00097523) bg_calc_display_pane_g2

0xa228,	// (0x0009752d) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0009c47b) bg_calc_display_pane_g

0x1180,	// (0x0008e485) cell_qdial_pane_ParamLimits

0x1180,	// (0x0008e485) cell_qdial_pane

0x1194,	// (0x0008e499) cell_qdial_pane_g1_ParamLimits

0x1194,	// (0x0008e499) cell_qdial_pane_g1

0x11aa,	// (0x0008e4af) cell_qdial_pane_g2_ParamLimits

0x11aa,	// (0x0008e4af) cell_qdial_pane_g2

0xa231,	// (0x00097536) cell_qdial_pane_g3_ParamLimits

0xa231,	// (0x00097536) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0009c482) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0009c482) cell_qdial_pane_g

0x11d1,	// (0x0008e4d6) cell_qdial_pane_t1_ParamLimits

0x11d1,	// (0x0008e4d6) cell_qdial_pane_t1

0x11e9,	// (0x0008e4ee) cell_qdial_pane_t2_ParamLimits

0x11e9,	// (0x0008e4ee) cell_qdial_pane_t2

0x11fc,	// (0x0008e501) cell_qdial_pane_t3_ParamLimits

0x11fc,	// (0x0008e501) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0009c48b) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0009c48b) cell_qdial_pane_t

0x9e2e,	// (0x00097133) grid_highlight_pane_cp04

0xa23d,	// (0x00097542) thumbnail_qdial_pane_ParamLimits

0xa23d,	// (0x00097542) thumbnail_qdial_pane

0xa299,	// (0x0009759e) list_help_pane

0xa2a2,	// (0x000975a7) scroll_pane_cp02

0x120f,	// (0x0008e514) help_list_pane_t1_ParamLimits

0x120f,	// (0x0008e514) help_list_pane_t1

0xa2ab,	// (0x000975b0) bg_notes_pane_g2

0xa2b3,	// (0x000975b8) bg_notes_pane_g3

0xa2bb,	// (0x000975c0) notes_bg_pane_g1

0xa2c3,	// (0x000975c8) notes_bg_pane_g4

0xa2cb,	// (0x000975d0) notes_bg_pane_g5

0xa2d3,	// (0x000975d8) notes_bg_pane_g6

0xa2db,	// (0x000975e0) notes_bg_pane_g7

0xa2e3,	// (0x000975e8) notes_bg_pane_g8

0xa2eb,	// (0x000975f0) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0009c4a9) notes_bg_pane_g

0x122d,	// (0x0008e532) list_notes_text_pane_ParamLimits

0x122d,	// (0x0008e532) list_notes_text_pane

0xa2f3,	// (0x000975f8) list_notes_text_pane_g1

0xfbeb,	// (0x0008cef0) list_notes_text_pane_t1

0x1241,	// (0x0008e546) listscroll_cale_week_pane

0x1277,	// (0x0008e57c) bg_cale_heading_pane

0xa30d,	// (0x00097612) bg_cale_pane_cp01

0x12a0,	// (0x0008e5a5) cale_week_corner_pane

0x12bf,	// (0x0008e5c4) cale_week_day_heading_pane

0x12ed,	// (0x0008e5f2) cale_week_scroll_pane_g1

0x1311,	// (0x0008e616) cale_week_scroll_pane_g2

0x1329,	// (0x0008e62e) cale_week_scroll_pane_g3

0x1341,	// (0x0008e646) cale_week_scroll_pane_g4

0x135d,	// (0x0008e662) cale_week_scroll_pane_g5

0x137d,	// (0x0008e682) cale_week_scroll_pane_g6

0x139d,	// (0x0008e6a2) cale_week_scroll_pane_g7

0x13c1,	// (0x0008e6c6) cale_week_scroll_pane_g8

0x13e5,	// (0x0008e6ea) cale_week_scroll_pane_g9

0x1402,	// (0x0008e707) cale_week_scroll_pane_g10

0x141f,	// (0x0008e724) cale_week_scroll_pane_g11

0x143c,	// (0x0008e741) cale_week_scroll_pane_g12

0x1459,	// (0x0008e75e) cale_week_scroll_pane_g13

0x1476,	// (0x0008e77b) cale_week_scroll_pane_g14

0x149f,	// (0x0008e7a4) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0009c4b8) cale_week_scroll_pane_g

0x14c8,	// (0x0008e7cd) cale_week_time_pane

0x14ec,	// (0x0008e7f1) grid_cale_week_pane

0xa33d,	// (0x00097642) scroll_pane_cp08

0x1523,	// (0x0008e828) cell_cale_week_pane_ParamLimits

0x1523,	// (0x0008e828) cell_cale_week_pane

0x15b3,	// (0x0008e8b8) cale_week_day_heading_pane_t1

0x15fd,	// (0x0008e902) cale_week_day_heading_pane_t2

0x164c,	// (0x0008e951) cale_week_day_heading_pane_t3

0x169b,	// (0x0008e9a0) cale_week_day_heading_pane_t4

0x16ea,	// (0x0008e9ef) cale_week_day_heading_pane_t5

0x173d,	// (0x0008ea42) cale_week_day_heading_pane_t6

0x1794,	// (0x0008ea99) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0009c4d7) cale_week_day_heading_pane_t

0xa35f,	// (0x00097664) bg_cale_side_pane

0x17de,	// (0x0008eae3) cale_week_time_pane_t1

0x1818,	// (0x0008eb1d) cale_week_time_pane_t2

0x1852,	// (0x0008eb57) cale_week_time_pane_t3

0x188c,	// (0x0008eb91) cale_week_time_pane_t4

0x18c6,	// (0x0008ebcb) cale_week_time_pane_t5

0x1900,	// (0x0008ec05) cale_week_time_pane_t6

0x193a,	// (0x0008ec3f) cale_week_time_pane_t7

0x1974,	// (0x0008ec79) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0009c4e6) cale_week_time_pane_t

0x19b4,	// (0x0008ecb9) cell_cale_week_pane_g2

0x19d3,	// (0x0008ecd8) cell_cale_week_pane_g3_ParamLimits

0x19d3,	// (0x0008ecd8) cell_cale_week_pane_g3

0xa36d,	// (0x00097672) grid_highlight_pane_cp07

0xa375,	// (0x0009767a) listscroll_gms_pane

0xa37f,	// (0x00097684) grid_gms_pane

0xa388,	// (0x0009768d) listscroll_gms_pane_g1

0xa390,	// (0x00097695) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0009c4f7) listscroll_gms_pane_g

0x19eb,	// (0x0008ecf0) scroll_pane_cp010

0x19f6,	// (0x0008ecfb) cell_gms_pane_ParamLimits

0x19f6,	// (0x0008ecfb) cell_gms_pane

0x1a10,	// (0x0008ed15) cell_gms_pane_g1

0xa398,	// (0x0009769d) cell_gms_pane_g2

0xa3a0,	// (0x000976a5) cell_gms_pane_g3

0xa3a9,	// (0x000976ae) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0009c4fc) cell_gms_pane_g

0xa3b2,	// (0x000976b7) grid_highlight_pane_cp09

0x4024,	// (0x00091329) phob_pre_status_pane_g1

0x402c,	// (0x00091331) phob_pre_status_pane_g2

0x4034,	// (0x00091339) phob_pre_status_pane_g3

0x403c,	// (0x00091341) phob_pre_status_pane_g4

0x0004,

0xf5ed,	// (0x0009c8f2) phob_pre_status_pane_g

0x404c,	// (0x00091351) phob_pre_status_pane_t1

0x405c,	// (0x00091361) phob_pre_status_pane_t2

0x406c,	// (0x00091371) phob_pre_status_pane_t3

0x0002,

0xf5f8,	// (0x0009c8fd) phob_pre_status_pane_t

0x9e2e,	// (0x00097133) bg_list_pane_cp05

0x1a20,	// (0x0008ed25) grid_vorec_pane

0x1a2c,	// (0x0008ed31) vorec_t1

0x1a3a,	// (0x0008ed3f) vorec_t2

0x1a48,	// (0x0008ed4d) vorec_t3

0x1a56,	// (0x0008ed5b) vorec_t4

0x1a64,	// (0x0008ed69) vorec_t5

0xa3ba,	// (0x000976bf) vorec_t6

0x0006,

0xf200,	// (0x0009c505) vorec_t

0x1a80,	// (0x0008ed85) wait_bar_pane_cp01

0x1a88,	// (0x0008ed8d) cell_vorec_pane_ParamLimits

0x1a88,	// (0x0008ed8d) cell_vorec_pane

0xa3c8,	// (0x000976cd) cell_vorec_pane_g1

0x9e2e,	// (0x00097133) grid_highlight_pane_cp05

0x1ab3,	// (0x0008edb8) cams_zoom_pane

0x1ac2,	// (0x0008edc7) image_vga_pane

0x1adc,	// (0x0008ede1) main_camera_pane_g1

0x1aee,	// (0x0008edf3) main_camera_pane_g2

0x1afe,	// (0x0008ee03) main_camera_pane_g3

0x1b12,	// (0x0008ee17) main_camera_pane_g4

0x1b26,	// (0x0008ee2b) main_camera_pane_g5

0x1b3a,	// (0x0008ee3f) main_camera_pane_g6

0x1b4e,	// (0x0008ee53) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0009c514) main_camera_pane_g

0x1b62,	// (0x0008ee67) main_camera_pane_t1

0x1b78,	// (0x0008ee7d) main_camera_pane_t2

0x0001,

0xf220,	// (0x0009c525) main_camera_pane_t

0x1bb6,	// (0x0008eebb) cams_zoom_pane_cp_ParamLimits

0x1bb6,	// (0x0008eebb) cams_zoom_pane_cp

0x1bde,	// (0x0008eee3) image_cif_pane_ParamLimits

0x1bde,	// (0x0008eee3) image_cif_pane

0x1c19,	// (0x0008ef1e) image_subqcif_pane

0x1c23,	// (0x0008ef28) main_video_pane_g1_ParamLimits

0x1c23,	// (0x0008ef28) main_video_pane_g1

0x1c47,	// (0x0008ef4c) main_video_pane_g2_ParamLimits

0x1c47,	// (0x0008ef4c) main_video_pane_g2

0x1c7d,	// (0x0008ef82) main_video_pane_g3_ParamLimits

0x1c7d,	// (0x0008ef82) main_video_pane_g3

0x1cab,	// (0x0008efb0) main_video_pane_g4_ParamLimits

0x1cab,	// (0x0008efb0) main_video_pane_g4

0x1cd9,	// (0x0008efde) main_video_pane_g5_ParamLimits

0x1cd9,	// (0x0008efde) main_video_pane_g5

0xa3de,	// (0x000976e3) main_video_pane_g6_ParamLimits

0xa3de,	// (0x000976e3) main_video_pane_g6

0x0006,

0xf225,	// (0x0009c52a) main_video_pane_g_ParamLimits

0xf225,	// (0x0009c52a) main_video_pane_g

0x1d02,	// (0x0008f007) main_video_pane_t1_ParamLimits

0x1d02,	// (0x0008f007) main_video_pane_t1

0xa3f8,	// (0x000976fd) cams_zoom_pane_g1

0xa401,	// (0x00097706) cams_zoom_pane_g2

0xa40a,	// (0x0009770f) cams_zoom_pane_g3

0xa413,	// (0x00097718) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0009c539) cams_zoom_pane_g

0x1d5f,	// (0x0008f064) grid_cams_pane

0x1d79,	// (0x0008f07e) linegrid_cams_pane

0x1d8b,	// (0x0008f090) cell_cams_pane_ParamLimits

0x1d8b,	// (0x0008f090) cell_cams_pane

0xa41c,	// (0x00097721) cams_burst_image_pane

0xa424,	// (0x00097729) cell_cams_pane_g1

0x9e2e,	// (0x00097133) grid_highlight_pane_cp03

0xa1e9,	// (0x000974ee) mp_bg_pane_g1

0x9e2e,	// (0x00097133) bg_list_pane_cp03

0xc6f5,	// (0x000999fa) bg_mp_pane

0xc6fd,	// (0x00099a02) grid_mp_pane

0xc705,	// (0x00099a0a) media_player_g1

0xc70f,	// (0x00099a14) media_player_t1

0xc71d,	// (0x00099a22) media_player_t2

0xc72b,	// (0x00099a30) media_player_t3

0xc739,	// (0x00099a3e) media_player_t4

0xc747,	// (0x00099a4c) media_player_t5

0xc755,	// (0x00099a5a) media_player_t6

0xc763,	// (0x00099a68) media_player_t7

0x0006,

0xf5d7,	// (0x0009c8dc) media_player_t

0xc771,	// (0x00099a76) wait_bar_pane_cp02

0xf5bc,	// (0x0009c8c1) main_usb_pane_t

0x401b,	// (0x00091320) cell_mp_pane

0xa1e9,	// (0x000974ee) cell_mp_pane_g1

0x9e2e,	// (0x00097133) grid_highlight_pane_cp06

0xa42c,	// (0x00097731) grid_skin_colour_pane

0xa434,	// (0x00097739) list_highlight_pane_cp03

0x1dad,	// (0x0008f0b2) skin_g1

0xa43c,	// (0x00097741) skin_t1

0xa44b,	// (0x00097750) skin_t2

0x0001,

0xf269,	// (0x0009c56e) skin_t

0x1db5,	// (0x0008f0ba) cell_skin_colour_pane_ParamLimits

0x1db5,	// (0x0008f0ba) cell_skin_colour_pane

0xa459,	// (0x0009775e) cell_skin_colour_pane_g1

0x1e28,	// (0x0008f12d) call_video_g1_ParamLimits

0x1e28,	// (0x0008f12d) call_video_g1

0x1e44,	// (0x0008f149) call_video_g2_ParamLimits

0x1e44,	// (0x0008f149) call_video_g2

0x0001,

0xf26e,	// (0x0009c573) call_video_g_ParamLimits

0xf26e,	// (0x0009c573) call_video_g

0x1e89,	// (0x0008f18e) call_video_uplink_pane_cp1_ParamLimits

0x1e89,	// (0x0008f18e) call_video_uplink_pane_cp1

0xa46b,	// (0x00097770) call_video_uplink_pane_cp2

0x1f2a,	// (0x0008f22f) video_down_crop_pane_ParamLimits

0x1f2a,	// (0x0008f22f) video_down_crop_pane

0x2013,	// (0x0008f318) video_down_pane_ParamLimits

0x2013,	// (0x0008f318) video_down_pane

0xa473,	// (0x00097778) video_down_subqcif_pane_ParamLimits

0xa473,	// (0x00097778) video_down_subqcif_pane

0xa48d,	// (0x00097792) video_down_subqcif_pane_cp_ParamLimits

0xa48d,	// (0x00097792) video_down_subqcif_pane_cp

0xa4b5,	// (0x000977ba) im_reading_pane_ParamLimits

0xa4b5,	// (0x000977ba) im_reading_pane

0x211c,	// (0x0008f421) im_writing_pane_ParamLimits

0x211c,	// (0x0008f421) im_writing_pane

0x2138,	// (0x0008f43d) im_reading_pane_t1

0xa4cf,	// (0x000977d4) list_im_pane

0xa4e0,	// (0x000977e5) scroll_pane_cp07

0x2174,	// (0x0008f479) im_writing_pane_t1_ParamLimits

0x2174,	// (0x0008f479) im_writing_pane_t1

0xa4f9,	// (0x000977fe) im_writing_pane_t2_ParamLimits

0xa4f9,	// (0x000977fe) im_writing_pane_t2

0x0001,

0xf278,	// (0x0009c57d) im_writing_pane_t_ParamLimits

0xf278,	// (0x0009c57d) im_writing_pane_t

0x9e2e,	// (0x00097133) input_focus_pane_cp04

0x9e2e,	// (0x00097133) input_focus_pane_cp05

0x2189,	// (0x0008f48e) list_im_single_pane_ParamLimits

0x2189,	// (0x0008f48e) list_im_single_pane

0x219f,	// (0x0008f4a4) list_single_im_pane_t1

0x3fdb,	// (0x000912e0) blid_accuracy_pane

0x3fe3,	// (0x000912e8) blid_compass_pane

0x3fed,	// (0x000912f2) main_location_t1

0x3ffd,	// (0x00091302) main_location_t2

0x400d,	// (0x00091312) main_location_t3

0x0002,

0xf5e6,	// (0x0009c8eb) main_location_t

0x9e2e,	// (0x00097133) aid_levels_location

0xa1e9,	// (0x000974ee) blid_accuracy_pane_g1

0xa1e9,	// (0x000974ee) blid_accuracy_pane_g2

0x0001,

0xf2e1,	// (0x0009c5e6) blid_accuracy_pane_g

0xac03,	// (0x00097f08) wml_content_pane

0xac41,	// (0x00097f46) wml_button_pane_ParamLimits

0xac41,	// (0x00097f46) wml_button_pane

0x21ae,	// (0x0008f4b3) wml_list_single_large_pane_ParamLimits

0x21ae,	// (0x0008f4b3) wml_list_single_large_pane

0x21c4,	// (0x0008f4c9) wml_list_single_medium_pane_ParamLimits

0x21c4,	// (0x0008f4c9) wml_list_single_medium_pane

0x21db,	// (0x0008f4e0) wml_list_single_small_pane_ParamLimits

0x21db,	// (0x0008f4e0) wml_list_single_small_pane

0xac55,	// (0x00097f5a) wml_selection_box_pane_ParamLimits

0xac55,	// (0x00097f5a) wml_selection_box_pane

0xac68,	// (0x00097f6d) wml_list_single_pane_t1

0xac77,	// (0x00097f7c) wml_list_single_medium_pane_t1

0xac86,	// (0x00097f8b) wml_list_single_large_pane_t1

0xac95,	// (0x00097f9a) input_focus_pane_cp02_ParamLimits

0xac95,	// (0x00097f9a) input_focus_pane_cp02

0xaca8,	// (0x00097fad) wml_selection_box_pane_g1

0xacb1,	// (0x00097fb6) wml_selection_box_pane_t1_ParamLimits

0xacb1,	// (0x00097fb6) wml_selection_box_pane_t1

0xa089,	// (0x0009738e) bg_wml_button_pane_ParamLimits

0xa089,	// (0x0009738e) bg_wml_button_pane

0xacc9,	// (0x00097fce) wml_button_pane_g1

0xacd1,	// (0x00097fd6) wml_button_pane_t1

0xacc9,	// (0x00097fce) wml_button_bg_pane_g1

0xace1,	// (0x00097fe6) wml_button_bg_pane_g2

0xace9,	// (0x00097fee) wml_button_bg_pane_g3

0xacf1,	// (0x00097ff6) wml_button_bg_pane_g4

0xacf9,	// (0x00097ffe) wml_button_bg_pane_g5

0xad01,	// (0x00098006) wml_button_bg_pane_g6

0xad09,	// (0x0009800e) wml_button_bg_pane_g7

0xad11,	// (0x00098016) wml_button_bg_pane_g8

0xad19,	// (0x0009801e) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0009c582) wml_button_bg_pane_g

0x21f7,	// (0x0008f4fc) bg_list_pane_cp02

0xad21,	// (0x00098026) mce_header_pane_ParamLimits

0xad21,	// (0x00098026) mce_header_pane

0xad37,	// (0x0009803c) mce_icon_pane

0xad37,	// (0x0009803c) mce_image_pane

0xad40,	// (0x00098045) mce_text_pane_ParamLimits

0xad40,	// (0x00098045) mce_text_pane

0x2201,	// (0x0008f506) scroll_pane_cp03

0xac39,	// (0x00097f3e) scroll_pane_cp04

0xad53,	// (0x00098058) scroll_pane_cp05_ParamLimits

0xad53,	// (0x00098058) scroll_pane_cp05

0x220b,	// (0x0008f510) mce_header_field_pane_ParamLimits

0x220b,	// (0x0008f510) mce_header_field_pane

0x2224,	// (0x0008f529) mce_header_field_pane_2_ParamLimits

0x2224,	// (0x0008f529) mce_header_field_pane_2

0x223a,	// (0x0008f53f) mce_header_field_pane_3

0x2242,	// (0x0008f547) list_single_mce_message_pane_ParamLimits

0x2242,	// (0x0008f547) list_single_mce_message_pane

0x225b,	// (0x0008f560) list_single_mce_smart_pane_ParamLimits

0x225b,	// (0x0008f560) list_single_mce_smart_pane

0xad5f,	// (0x00098064) input_focus_pane_cp03

0xad68,	// (0x0009806d) list_header_data_pane

0x227f,	// (0x0008f584) mce_header_field_pane_t1

0x228f,	// (0x0008f594) list_single_mce_header_pane_ParamLimits

0x228f,	// (0x0008f594) list_single_mce_header_pane

0xad70,	// (0x00098075) list_single_mce_header_pane_t1

0xad7f,	// (0x00098084) list_single_mce_message_pane_g1

0xad87,	// (0x0009808c) list_single_mce_message_pane_t1

0x22c9,	// (0x0008f5ce) bg_cale_heading_pane_cp01_ParamLimits

0x22c9,	// (0x0008f5ce) bg_cale_heading_pane_cp01

0xad95,	// (0x0009809a) bg_cale_pane_cp02_ParamLimits

0xad95,	// (0x0009809a) bg_cale_pane_cp02

0x2310,	// (0x0008f615) cale_month_corner_pane

0x232f,	// (0x0008f634) cale_month_day_heading_pane_ParamLimits

0x232f,	// (0x0008f634) cale_month_day_heading_pane

0x238e,	// (0x0008f693) cale_month_pane_g1_ParamLimits

0x238e,	// (0x0008f693) cale_month_pane_g1

0x23ca,	// (0x0008f6cf) cale_month_pane_g2_ParamLimits

0x23ca,	// (0x0008f6cf) cale_month_pane_g2

0x2406,	// (0x0008f70b) cale_month_pane_g3_ParamLimits

0x2406,	// (0x0008f70b) cale_month_pane_g3

0x245a,	// (0x0008f75f) cale_month_pane_g4_ParamLimits

0x245a,	// (0x0008f75f) cale_month_pane_g4

0x24ae,	// (0x0008f7b3) cale_month_pane_g5_ParamLimits

0x24ae,	// (0x0008f7b3) cale_month_pane_g5

0x250a,	// (0x0008f80f) cale_month_pane_g6_ParamLimits

0x250a,	// (0x0008f80f) cale_month_pane_g6

0x256e,	// (0x0008f873) cale_month_pane_g7_ParamLimits

0x256e,	// (0x0008f873) cale_month_pane_g7

0x25da,	// (0x0008f8df) cale_month_pane_g8_ParamLimits

0x25da,	// (0x0008f8df) cale_month_pane_g8

0x2646,	// (0x0008f94b) cale_month_pane_g9_ParamLimits

0x2646,	// (0x0008f94b) cale_month_pane_g9

0x26a4,	// (0x0008f9a9) cale_month_pane_g10_ParamLimits

0x26a4,	// (0x0008f9a9) cale_month_pane_g10

0x26f6,	// (0x0008f9fb) cale_month_pane_g11_ParamLimits

0x26f6,	// (0x0008f9fb) cale_month_pane_g11

0x2748,	// (0x0008fa4d) cale_month_pane_g12_ParamLimits

0x2748,	// (0x0008fa4d) cale_month_pane_g12

0x27a0,	// (0x0008faa5) cale_month_pane_g13_ParamLimits

0x27a0,	// (0x0008faa5) cale_month_pane_g13

0x000c,

0xf290,	// (0x0009c595) cale_month_pane_g_ParamLimits

0xf290,	// (0x0009c595) cale_month_pane_g

0x27f8,	// (0x0008fafd) cale_month_week_pane

0x281c,	// (0x0008fb21) grid_cale_month_pane_ParamLimits

0x281c,	// (0x0008fb21) grid_cale_month_pane

0x2872,	// (0x0008fb77) cale_month_day_heading_pane_t1

0x28f8,	// (0x0008fbfd) cale_month_day_heading_pane_t2

0x2989,	// (0x0008fc8e) cale_month_day_heading_pane_t3

0x2a1a,	// (0x0008fd1f) cale_month_day_heading_pane_t4

0x2aab,	// (0x0008fdb0) cale_month_day_heading_pane_t5

0x2b4c,	// (0x0008fe51) cale_month_day_heading_pane_t6

0x2bf1,	// (0x0008fef6) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0009c5b0) cale_month_day_heading_pane_t

0xa35f,	// (0x00097664) bg_cale_side_pane_cp01

0x2c9a,	// (0x0008ff9f) cale_month_week_pane_t1

0x2cb3,	// (0x0008ffb8) cale_month_week_pane_t2

0x2ccc,	// (0x0008ffd1) cale_month_week_pane_t3

0x2ce5,	// (0x0008ffea) cale_month_week_pane_t4

0x2cfe,	// (0x00090003) cale_month_week_pane_t5

0x2d17,	// (0x0009001c) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0009c5bf) cale_month_week_pane_t

0x2d36,	// (0x0009003b) cell_cale_month_pane_ParamLimits

0x2d36,	// (0x0009003b) cell_cale_month_pane

0xa516,	// (0x0009781b) cell_cale_month_pane_g1

0x2e60,	// (0x00090165) cell_cale_month_pane_t1_ParamLimits

0x2e60,	// (0x00090165) cell_cale_month_pane_t1

0xa36d,	// (0x00097672) grid_highlight_pane_cp08

0xa1e9,	// (0x000974ee) main_smil_g1

0x2e80,	// (0x00090185) smil_status_pane

0xadd4,	// (0x000980d9) smil_text_pane

0xc613,	// (0x00099918) bg_popup_call3_rect_pane_g8

0xc61b,	// (0x00099920) bg_popup_call3_rect_pane_g9

0x0008,

0xf57a,	// (0x0009c87f) bg_popup_call3_rect_pane_g

0xc8a9,	// (0x00099bae) smil_status_volume_pane_g1

0x2e93,	// (0x00090198) smil_status_pane_t1

0xa614,	// (0x00097919) volume_smil_pane

0xadde,	// (0x000980e3) list_smil_text_pane

0x2eac,	// (0x000901b1) scroll_pane_cp011

0x2eb7,	// (0x000901bc) smil_text_list_pane_t1_ParamLimits

0x2eb7,	// (0x000901bc) smil_text_list_pane_t1

0xa522,	// (0x00097827) aid_volume_smil_ParamLimits

0xa522,	// (0x00097827) aid_volume_smil

0xa1e9,	// (0x000974ee) smil_volume_pane_g1

0xa1e9,	// (0x000974ee) smil_volume_pane_g2

0x0001,

0xf2e1,	// (0x0009c5e6) smil_volume_pane_g

0x1241,	// (0x0008e546) listscroll_cale_day_pane

0xade8,	// (0x000980ed) bg_cale_pane

0xae00,	// (0x00098105) list_cale_pane

0xae23,	// (0x00098128) scroll_pane_cp09

0xae34,	// (0x00098139) cale_bg_pane_g1

0xae3c,	// (0x00098141) cale_bg_pane_g2

0xae44,	// (0x00098149) cale_bg_pane_g3

0xae4c,	// (0x00098151) cale_bg_pane_g4

0xae54,	// (0x00098159) cale_bg_pane_g5

0xae5c,	// (0x00098161) cale_bg_pane_g6

0xae64,	// (0x00098169) cale_bg_pane_g7

0xae6c,	// (0x00098171) cale_bg_pane_g8

0xae74,	// (0x00098179) cale_bg_pane_g9

0x0008,

0xf2e6,	// (0x0009c5eb) cale_bg_pane_g

0x2ef0,	// (0x000901f5) list_cale_time_pane_ParamLimits

0x2ef0,	// (0x000901f5) list_cale_time_pane

0xae84,	// (0x00098189) list_cale_time_pane_g1_ParamLimits

0xae84,	// (0x00098189) list_cale_time_pane_g1

0xae90,	// (0x00098195) list_cale_time_pane_g2_ParamLimits

0xae90,	// (0x00098195) list_cale_time_pane_g2

0x2f04,	// (0x00090209) list_cale_time_pane_g3_ParamLimits

0x2f04,	// (0x00090209) list_cale_time_pane_g3

0x2f12,	// (0x00090217) list_cale_time_pane_g4_ParamLimits

0x2f12,	// (0x00090217) list_cale_time_pane_g4

0x2f20,	// (0x00090225) list_cale_time_pane_g5_ParamLimits

0x2f20,	// (0x00090225) list_cale_time_pane_g5

0x0005,

0xf2f9,	// (0x0009c5fe) list_cale_time_pane_g_ParamLimits

0xf2f9,	// (0x0009c5fe) list_cale_time_pane_g

0xaeaa,	// (0x000981af) list_cale_time_pane_t1_ParamLimits

0xaeaa,	// (0x000981af) list_cale_time_pane_t1

0xaed2,	// (0x000981d7) list_cale_time_pane_t2_ParamLimits

0xaed2,	// (0x000981d7) list_cale_time_pane_t2

0x31ee,	// (0x000904f3) aid_blid_cardinal_pane

0x322c,	// (0x00090531) compass_pane_t4

0xaefa,	// (0x000981ff) list_cale_time_pane_t4_ParamLimits

0xaefa,	// (0x000981ff) list_cale_time_pane_t4

0x323a,	// (0x0009053f) compass_pane_t5

0x3248,	// (0x0009054d) compass_pane_t6

0x3256,	// (0x0009055b) compass_pane_t7

0xb314,	// (0x00098619) navi_pane_cc_t1

0xb469,	// (0x0009876e) aid_phob_thumbnail_center_pane

0x39a6,	// (0x00090cab) main_postcard_pane_g4_ParamLimits

0x0002,

0xf306,	// (0x0009c60b) list_cale_time_pane_t_ParamLimits

0xf306,	// (0x0009c60b) list_cale_time_pane_t

0x9a85,	// (0x00096d8a) bg_popup_window_pane_cp02_ParamLimits

0x9a85,	// (0x00096d8a) bg_popup_window_pane_cp02

0xaf22,	// (0x00098227) heading_pane_cp01_ParamLimits

0xaf22,	// (0x00098227) heading_pane_cp01

0xaf2e,	// (0x00098233) loc_req_pane_ParamLimits

0xaf2e,	// (0x00098233) loc_req_pane

0xaf3e,	// (0x00098243) loc_type_pane_ParamLimits

0xaf3e,	// (0x00098243) loc_type_pane

0xaf50,	// (0x00098255) loc_type_pane_t1_ParamLimits

0xaf50,	// (0x00098255) loc_type_pane_t1

0xaf62,	// (0x00098267) loc_type_pane_t2_ParamLimits

0xaf62,	// (0x00098267) loc_type_pane_t2

0xaf74,	// (0x00098279) loc_type_pane_t3_ParamLimits

0xaf74,	// (0x00098279) loc_type_pane_t3

0x0002,

0xf30d,	// (0x0009c612) loc_type_pane_t_ParamLimits

0xf30d,	// (0x0009c612) loc_type_pane_t

0xaf86,	// (0x0009828b) list_loc_req_pane

0xaf90,	// (0x00098295) scroll_pane_cp012

0x2f2e,	// (0x00090233) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f2e,	// (0x00090233) list_single_loc_request_popup_menu_pane

0xaf9b,	// (0x000982a0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9b,	// (0x000982a0) list_single_loc_request_popup_menu_pane_g1

0xafa7,	// (0x000982ac) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa7,	// (0x000982ac) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf314,	// (0x0009c619) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf314,	// (0x0009c619) list_single_loc_request_popup_menu_pane_g

0xafb3,	// (0x000982b8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb3,	// (0x000982b8) list_single_loc_request_popup_menu_pane_t1

0xa089,	// (0x0009738e) bg_popup_window_pane_cp03_ParamLimits

0xa089,	// (0x0009738e) bg_popup_window_pane_cp03

0xafc9,	// (0x000982ce) heading_loc_req_pane_ParamLimits

0xafc9,	// (0x000982ce) heading_loc_req_pane

0x2f3b,	// (0x00090240) popup_dyc_status_message_window_g1_ParamLimits

0x2f3b,	// (0x00090240) popup_dyc_status_message_window_g1

0x2f4f,	// (0x00090254) popup_dyc_status_message_window_t1_ParamLimits

0x2f4f,	// (0x00090254) popup_dyc_status_message_window_t1

0x2f64,	// (0x00090269) popup_dyc_status_message_window_t2_ParamLimits

0x2f64,	// (0x00090269) popup_dyc_status_message_window_t2

0x2f79,	// (0x0009027e) popup_dyc_status_message_window_t3_ParamLimits

0x2f79,	// (0x0009027e) popup_dyc_status_message_window_t3

0x0002,

0xf319,	// (0x0009c61e) popup_dyc_status_message_window_t_ParamLimits

0xf319,	// (0x0009c61e) popup_dyc_status_message_window_t

0x9e2e,	// (0x00097133) bg_heading_pane_cp01

0xafd5,	// (0x000982da) heading_loc_req_pane_g1

0xafdd,	// (0x000982e2) heading_loc_req_pane_g2

0xafe5,	// (0x000982ea) heading_loc_req_pane_g3

0x0002,

0xf320,	// (0x0009c625) heading_loc_req_pane_g

0xafed,	// (0x000982f2) heading_loc_req_pane_t1

0xaffd,	// (0x00098302) bg_popup_sub_pane_cp01_ParamLimits

0xaffd,	// (0x00098302) bg_popup_sub_pane_cp01

0xb00b,	// (0x00098310) popup_cale_events_window_g1_ParamLimits

0xb00b,	// (0x00098310) popup_cale_events_window_g1

0xb02b,	// (0x00098330) popup_cale_events_window_g2_ParamLimits

0xb02b,	// (0x00098330) popup_cale_events_window_g2

0x0001,

0xf354,	// (0x0009c659) popup_cale_events_window_g_ParamLimits

0xf354,	// (0x0009c659) popup_cale_events_window_g

0xb04b,	// (0x00098350) popup_cale_events_window_t1_ParamLimits

0xb04b,	// (0x00098350) popup_cale_events_window_t1

0xb05d,	// (0x00098362) popup_cale_events_window_t2_ParamLimits

0xb05d,	// (0x00098362) popup_cale_events_window_t2

0xb09b,	// (0x000983a0) popup_cale_events_window_t3_ParamLimits

0xb09b,	// (0x000983a0) popup_cale_events_window_t3

0xb0d5,	// (0x000983da) popup_cale_events_window_t4_ParamLimits

0xb0d5,	// (0x000983da) popup_cale_events_window_t4

0x0003,

0xf359,	// (0x0009c65e) popup_cale_events_window_t_ParamLimits

0xf359,	// (0x0009c65e) popup_cale_events_window_t

0x2fad,	// (0x000902b2) call_type_pane

0x2fbd,	// (0x000902c2) popup_call_status_window_g1

0x2fd1,	// (0x000902d6) popup_call_status_window_g2

0x2fe5,	// (0x000902ea) popup_call_status_window_g3

0x0002,

0xf362,	// (0x0009c667) popup_call_status_window_g

0xb10b,	// (0x00098410) call_type_pane_g1

0xb114,	// (0x00098419) call_type_pane_g2

0x0001,

0xf369,	// (0x0009c66e) call_type_pane_g

0x9e2e,	// (0x00097133) bg_popup_sub_pane_cp02

0xb11d,	// (0x00098422) listscroll_popup_wml_pane

0xb125,	// (0x0009842a) list_wml_pane

0xb12f,	// (0x00098434) scroll_pane_cp013

0xb13a,	// (0x0009843f) list_single_graphic_popup_wml_pane_ParamLimits

0xb13a,	// (0x0009843f) list_single_graphic_popup_wml_pane

0xa1e9,	// (0x000974ee) list_single_graphic_popup_wml_pane_g1

0xb14e,	// (0x00098453) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36e,	// (0x0009c673) list_single_graphic_popup_wml_pane_g

0xb156,	// (0x0009845b) list_single_graphic_popup_wml_pane_t1

0xb16c,	// (0x00098471) aid_call_pane

0xa081,	// (0x00097386) popup_clock_analogue_window_g1

0xa081,	// (0x00097386) popup_clock_analogue_window_g2

0xa544,	// (0x00097849) popup_clock_analogue_window_g3

0xa544,	// (0x00097849) popup_clock_analogue_window_g4

0xa1e9,	// (0x000974ee) popup_clock_analogue_window_g5

0x0004,

0xf373,	// (0x0009c678) popup_clock_analogue_window_g

0xa54c,	// (0x00097851) popup_clock_analogue_window_t1

0xa55a,	// (0x0009785f) clock_digital_number_pane_ParamLimits

0xa55a,	// (0x0009785f) clock_digital_number_pane

0xa566,	// (0x0009786b) clock_digital_number_pane_cp02_ParamLimits

0xa566,	// (0x0009786b) clock_digital_number_pane_cp02

0xa572,	// (0x00097877) clock_digital_number_pane_cp03_ParamLimits

0xa572,	// (0x00097877) clock_digital_number_pane_cp03

0xa57e,	// (0x00097883) clock_digital_number_pane_cp04_ParamLimits

0xa57e,	// (0x00097883) clock_digital_number_pane_cp04

0xa58a,	// (0x0009788f) clock_digital_separator_pane_ParamLimits

0xa58a,	// (0x0009788f) clock_digital_separator_pane

0xa596,	// (0x0009789b) popup_clock_digital_window_t1

0xa1e9,	// (0x000974ee) clock_digital_number_pane_g1

0xa1e9,	// (0x000974ee) clock_digital_number_pane_g2

0x0001,

0xf2e1,	// (0x0009c5e6) clock_digital_number_pane_g

0xa1e9,	// (0x000974ee) clock_digital_separator_pane_g1

0xa1e9,	// (0x000974ee) clock_digital_separator_pane_g2

0x0001,

0xf2e1,	// (0x0009c5e6) clock_digital_separator_pane_g

0x9e2e,	// (0x00097133) bg_popup_window_pane_cp04

0xb174,	// (0x00098479) heading_pane_cp03

0xb17c,	// (0x00098481) listscroll_popup_gms_pane

0xb184,	// (0x00098489) grid_large_graphic_popup_pane

0xb18e,	// (0x00098493) listscroll_popup_gms_pane_g1

0xb196,	// (0x0009849b) listscroll_popup_gms_pane_g2

0x0001,

0xf37e,	// (0x0009c683) listscroll_popup_gms_pane_g

0xac39,	// (0x00097f3e) scroll_pane_cp014

0x2ff5,	// (0x000902fa) cell_large_graphic_popup_pane_ParamLimits

0x2ff5,	// (0x000902fa) cell_large_graphic_popup_pane

0x300d,	// (0x00090312) cell_large_graphic_popup_pane_g1_ParamLimits

0x300d,	// (0x00090312) cell_large_graphic_popup_pane_g1

0xb19e,	// (0x000984a3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb19e,	// (0x000984a3) cell_large_graphic_popup_pane_g2

0xb1aa,	// (0x000984af) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1aa,	// (0x000984af) cell_large_graphic_popup_pane_g3

0xb1b7,	// (0x000984bc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1b7,	// (0x000984bc) cell_large_graphic_popup_pane_g4

0x0003,

0xf383,	// (0x0009c688) cell_large_graphic_popup_pane_g_ParamLimits

0xf383,	// (0x0009c688) cell_large_graphic_popup_pane_g

0xb1c7,	// (0x000984cc) grid_highlight_pane_cp010

0xa1e9,	// (0x000974ee) bg_popup_call_pane_g1

0xb1d1,	// (0x000984d6) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d1,	// (0x000984d6) list_single_graphic_popup_conf_pane

0xb1e3,	// (0x000984e8) list_highlight_pane_cp01

0xb1ec,	// (0x000984f1) list_single_graphic_popup_conf_pane_g1

0xb1f4,	// (0x000984f9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38c,	// (0x0009c691) list_single_graphic_popup_conf_pane_g

0xb1fc,	// (0x00098501) list_single_graphic_popup_conf_pane_t1

0xb20a,	// (0x0009850f) linegrid_cams_pane_g1

0x3019,	// (0x0009031e) linegrid_cams_pane_g2

0xa3a0,	// (0x000976a5) linegrid_cams_pane_g3

0xb213,	// (0x00098518) linegrid_cams_pane_g4

0x3022,	// (0x00090327) linegrid_cams_pane_g5

0x302b,	// (0x00090330) linegrid_cams_pane_g6

0xa3a9,	// (0x000976ae) linegrid_cams_pane_g7

0x0006,

0xf391,	// (0x0009c696) linegrid_cams_pane_g

0xb21c,	// (0x00098521) popup_clock_analogue_window

0xb21c,	// (0x00098521) popup_clock_digital_window

0x9e2e,	// (0x00097133) popup_phob_thumbnail_window

0xa1e9,	// (0x000974ee) call_video_uplink_pane_g1

0xb225,	// (0x0009852a) call_video_uplink_pane_g2

0x0001,

0xf3a0,	// (0x0009c6a5) call_video_uplink_pane_g

0xb22d,	// (0x00098532) video_uplink_pane

0xb235,	// (0x0009853a) mce_image_pane_g1

0x3036,	// (0x0009033b) mce_image_pane_g2

0x3040,	// (0x00090345) mce_image_pane_g3

0x304a,	// (0x0009034f) mce_image_pane_g4

0x3052,	// (0x00090357) mce_image_pane_g5

0x0004,

0xf3a5,	// (0x0009c6aa) mce_image_pane_g

0xb23f,	// (0x00098544) control_top_pane_stacon_cp01_ParamLimits

0xb23f,	// (0x00098544) control_top_pane_stacon_cp01

0xb253,	// (0x00098558) uni_indicator_pane_stacon_cp01_ParamLimits

0xb253,	// (0x00098558) uni_indicator_pane_stacon_cp01

0xb264,	// (0x00098569) bg_popup_sub_pane_cp03

0x305a,	// (0x0009035f) chi_dic_find_pane

0x3062,	// (0x00090367) listscroll_chi_dic_pane

0x306b,	// (0x00090370) main_pane_chidic_g1

0x307e,	// (0x00090383) chi_dic_find_pane_t1

0xb26e,	// (0x00098573) find_chidic_pane

0xb277,	// (0x0009857c) chi_dic_list_pane_ParamLimits

0xb277,	// (0x0009857c) chi_dic_list_pane

0xb288,	// (0x0009858d) scroll_pane_cp020

0x308c,	// (0x00090391) find_chidic_pane_t1

0x9e2e,	// (0x00097133) input_focus_pane_cp06

0x0ec5,	// (0x0008e1ca) list_chi_dic_pane_ParamLimits

0x0ec5,	// (0x0008e1ca) list_chi_dic_pane

0x309b,	// (0x000903a0) list_chi_dic_pane_t1_ParamLimits

0x309b,	// (0x000903a0) list_chi_dic_pane_t1

0x9e2e,	// (0x00097133) list_highlight_pane_cp020

0xb290,	// (0x00098595) bg_cale_heading_pane_g1

0x30ae,	// (0x000903b3) bg_cale_heading_pane_g2

0x30b6,	// (0x000903bb) bg_cale_heading_pane_g3

0x30be,	// (0x000903c3) bg_cale_heading_pane_g4

0x30c8,	// (0x000903cd) bg_cale_heading_pane_g5

0x30d2,	// (0x000903d7) bg_cale_heading_pane_g6

0x30da,	// (0x000903df) bg_cale_heading_pane_g7

0x30e2,	// (0x000903e7) bg_cale_heading_pane_g8

0x30ec,	// (0x000903f1) bg_cale_heading_pane_g9

0x0008,

0xf3b0,	// (0x0009c6b5) bg_cale_heading_pane_g

0xb290,	// (0x00098595) bg_cale_side_pane_g1

0x30f6,	// (0x000903fb) bg_cale_side_pane_g2

0x3100,	// (0x00090405) bg_cale_side_pane_g3

0x310a,	// (0x0009040f) bg_cale_side_pane_g4

0x3114,	// (0x00090419) bg_cale_side_pane_g5

0x311e,	// (0x00090423) bg_cale_side_pane_g6

0x3128,	// (0x0009042d) bg_cale_side_pane_g7

0x3132,	// (0x00090437) bg_cale_side_pane_g8

0x313a,	// (0x0009043f) bg_cale_side_pane_g9

0x0008,

0xf3c3,	// (0x0009c6c8) bg_cale_side_pane_g

0x3142,	// (0x00090447) popup_call_status_window_ParamLimits

0x3142,	// (0x00090447) popup_call_status_window

0xb298,	// (0x0009859d) stacon_top_pane

0xb2a0,	// (0x000985a5) status_pane_ParamLimits

0xb2a0,	// (0x000985a5) status_pane

0xb2b5,	// (0x000985ba) status_small_pane

0xb2bd,	// (0x000985c2) control_pane

0x9e2e,	// (0x00097133) stacon_bottom_pane

0xb2c5,	// (0x000985ca) list_single_mce_smart_pane_t1_ParamLimits

0xb2c5,	// (0x000985ca) list_single_mce_smart_pane_t1

0xb2d8,	// (0x000985dd) list_single_mce_smart_pane_t2_ParamLimits

0xb2d8,	// (0x000985dd) list_single_mce_smart_pane_t2

0x0001,

0xf3d6,	// (0x0009c6db) list_single_mce_smart_pane_t_ParamLimits

0xf3d6,	// (0x0009c6db) list_single_mce_smart_pane_t

0x318f,	// (0x00090494) compass_pane

0x319a,	// (0x0009049f) main_location2_pane_t1

0x31ae,	// (0x000904b3) main_location2_pane_t2

0x31c4,	// (0x000904c9) main_location2_pane_t3

0x0003,

0xf3db,	// (0x0009c6e0) main_location2_pane_t

0xb2f7,	// (0x000985fc) compass_pane_g1_ParamLimits

0xb2f7,	// (0x000985fc) compass_pane_g1

0x320e,	// (0x00090513) compass_pane_t1

0x321d,	// (0x00090522) compass_pane_t2

0x0005,

0xf3e4,	// (0x0009c6e9) compass_pane_t

0x3264,	// (0x00090569) text_secondary_cp61

0xb30b,	// (0x00098610) navi_pane_cams_g5

0xb32e,	// (0x00098633) navi_pane_im_t1

0xb33c,	// (0x00098641) navi_pane_mp_g1_ParamLimits

0xb33c,	// (0x00098641) navi_pane_mp_g1

0xb350,	// (0x00098655) navi_pane_mp_g2_ParamLimits

0xb350,	// (0x00098655) navi_pane_mp_g2

0xb35c,	// (0x00098661) navi_pane_mp_g3_ParamLimits

0xb35c,	// (0x00098661) navi_pane_mp_g3

0x0002,

0xf3f8,	// (0x0009c6fd) navi_pane_mp_g_ParamLimits

0xf3f8,	// (0x0009c6fd) navi_pane_mp_g

0xb368,	// (0x0009866d) navi_pane_mp_t1

0xb376,	// (0x0009867b) navi_pane_mp_t2

0x0002,

0xf3ff,	// (0x0009c704) navi_pane_mp_t

0xb3b2,	// (0x000986b7) navi_pane_vt_g1

0xb368,	// (0x0009866d) navi_pane_vt_t1

0xb3ba,	// (0x000986bf) navi_slider_pane

0xb3c2,	// (0x000986c7) zooming_pane

0xb3ca,	// (0x000986cf) navi_slider_pane_g1

0xa5b3,	// (0x000978b8) navi_slider_pane_g2

0x0006,

0xf406,	// (0x0009c70b) navi_slider_pane_g

0xb3ee,	// (0x000986f3) aid_levels_zoom

0xb3f6,	// (0x000986fb) zooming_pane_g1

0xb3fe,	// (0x00098703) zooming_pane_g2

0xb3fe,	// (0x00098703) zooming_pane_g3

0x0002,

0xf415,	// (0x0009c71a) zooming_pane_g

0xb406,	// (0x0009870b) level_10_zoom

0xb40f,	// (0x00098714) level_11_zoom

0xb418,	// (0x0009871d) level_1_zoom

0xb421,	// (0x00098726) level_2_zoom

0xb42a,	// (0x0009872f) level_3_zoom

0xb433,	// (0x00098738) level_4_zoom

0xb43c,	// (0x00098741) level_5_zoom

0xb445,	// (0x0009874a) level_6_zoom

0xb44e,	// (0x00098753) level_7_zoom

0xb457,	// (0x0009875c) level_8_zoom

0xb460,	// (0x00098765) level_9_zoom

0xb471,	// (0x00098776) popup_phob_thumbnail_window_g1

0xb479,	// (0x0009877e) popup_phob_thumbnail_window_g2

0x0001,

0xf41c,	// (0x0009c721) popup_phob_thumbnail_window_g

0xc779,	// (0x00099a7e) level_1_location

0xc781,	// (0x00099a86) level_2_location

0xc789,	// (0x00099a8e) level_3_location

0xc791,	// (0x00099a96) level_4_location

0xb3c2,	// (0x000986c7) level_5_location

0x33ad,	// (0x000906b2) mce_icon_pane_g1

0x33b7,	// (0x000906bc) mce_icon_pane_g2

0x0001,

0xf421,	// (0x0009c726) mce_icon_pane_g

0x33bf,	// (0x000906c4) main_mup_pane_g1_ParamLimits

0x33bf,	// (0x000906c4) main_mup_pane_g1

0x33d5,	// (0x000906da) main_mup_pane_g2_ParamLimits

0x33d5,	// (0x000906da) main_mup_pane_g2

0x33ed,	// (0x000906f2) main_mup_pane_g3_ParamLimits

0x33ed,	// (0x000906f2) main_mup_pane_g3

0x3405,	// (0x0009070a) main_mup_pane_g4_ParamLimits

0x3405,	// (0x0009070a) main_mup_pane_g4

0x341d,	// (0x00090722) main_mup_pane_g5_ParamLimits

0x341d,	// (0x00090722) main_mup_pane_g5

0x3439,	// (0x0009073e) main_mup_pane_g6_ParamLimits

0x3439,	// (0x0009073e) main_mup_pane_g6

0x3453,	// (0x00090758) main_mup_pane_g7_ParamLimits

0x3453,	// (0x00090758) main_mup_pane_g7

0x3471,	// (0x00090776) main_mup_pane_g8_ParamLimits

0x3471,	// (0x00090776) main_mup_pane_g8

0x348f,	// (0x00090794) main_mup_pane_g9_ParamLimits

0x348f,	// (0x00090794) main_mup_pane_g9

0x34ab,	// (0x000907b0) main_mup_pane_g10_ParamLimits

0x34ab,	// (0x000907b0) main_mup_pane_g10

0x34c9,	// (0x000907ce) main_mup_pane_g11_ParamLimits

0x34c9,	// (0x000907ce) main_mup_pane_g11

0x34e3,	// (0x000907e8) main_mup_pane_g12_ParamLimits

0x34e3,	// (0x000907e8) main_mup_pane_g12

0x34f9,	// (0x000907fe) main_mup_pane_g13_ParamLimits

0x34f9,	// (0x000907fe) main_mup_pane_g13

0x000c,

0xf426,	// (0x0009c72b) main_mup_pane_g_ParamLimits

0xf426,	// (0x0009c72b) main_mup_pane_g

0x350d,	// (0x00090812) main_mup_pane_t1_ParamLimits

0x350d,	// (0x00090812) main_mup_pane_t1

0x3529,	// (0x0009082e) main_mup_pane_t2_ParamLimits

0x3529,	// (0x0009082e) main_mup_pane_t2

0x3541,	// (0x00090846) main_mup_pane_t3_ParamLimits

0x3541,	// (0x00090846) main_mup_pane_t3

0x3559,	// (0x0009085e) main_mup_pane_t4_ParamLimits

0x3559,	// (0x0009085e) main_mup_pane_t4

0x3577,	// (0x0009087c) main_mup_pane_t5_ParamLimits

0x3577,	// (0x0009087c) main_mup_pane_t5

0x358c,	// (0x00090891) main_mup_pane_t6_ParamLimits

0x358c,	// (0x00090891) main_mup_pane_t6

0x0005,

0xf441,	// (0x0009c746) main_mup_pane_t_ParamLimits

0xf441,	// (0x0009c746) main_mup_pane_t

0x359e,	// (0x000908a3) mup_progress_pane_ParamLimits

0x359e,	// (0x000908a3) mup_progress_pane

0x35aa,	// (0x000908af) mup_visualizer_pane_ParamLimits

0x35aa,	// (0x000908af) mup_visualizer_pane

0x35de,	// (0x000908e3) mup_volume_pane_ParamLimits

0x35de,	// (0x000908e3) mup_volume_pane

0xb481,	// (0x00098786) mup_visualizer_pane_g1_ParamLimits

0xb481,	// (0x00098786) mup_visualizer_pane_g1

0xb481,	// (0x00098786) mup_visualizer_pane_g2_ParamLimits

0xb481,	// (0x00098786) mup_visualizer_pane_g2

0xb2f7,	// (0x000985fc) mup_visualizer_pane_g3_ParamLimits

0xb2f7,	// (0x000985fc) mup_visualizer_pane_g3

0x0002,

0xf44e,	// (0x0009c753) mup_visualizer_pane_g_ParamLimits

0xf44e,	// (0x0009c753) mup_visualizer_pane_g

0xa1e9,	// (0x000974ee) mup_volume_pane_g1

0xb497,	// (0x0009879c) mup_volume_pane_g2

0x0001,

0xf455,	// (0x0009c75a) mup_volume_pane_g

0xa1e9,	// (0x000974ee) mup_progress_pane_g1

0xb4a0,	// (0x000987a5) mup_progress_pane_g2

0xb4a9,	// (0x000987ae) mup_progress_pane_g3

0x0002,

0xf45a,	// (0x0009c75f) mup_progress_pane_g

0x9e2e,	// (0x00097133) bg_popup_window_pane_cp05

0xb4b2,	// (0x000987b7) heading_pane_cp02_ParamLimits

0xb4b2,	// (0x000987b7) heading_pane_cp02

0xb4ce,	// (0x000987d3) list_popup_blid_pane

0xb4d6,	// (0x000987db) list_blid_sat_info_pane_ParamLimits

0xb4d6,	// (0x000987db) list_blid_sat_info_pane

0xb4e9,	// (0x000987ee) list_blid_sat_info_pane_g1

0xb4f1,	// (0x000987f6) list_blid_sat_info_pane_t1

0x3708,	// (0x00090a0d) mup_equalizer_pane_ParamLimits

0x3708,	// (0x00090a0d) mup_equalizer_pane

0x3729,	// (0x00090a2e) mup_equalizer_pane_cp1_ParamLimits

0x3729,	// (0x00090a2e) mup_equalizer_pane_cp1

0x374a,	// (0x00090a4f) mup_equalizer_pane_cp2_ParamLimits

0x374a,	// (0x00090a4f) mup_equalizer_pane_cp2

0x376f,	// (0x00090a74) mup_equalizer_pane_cp3_ParamLimits

0x376f,	// (0x00090a74) mup_equalizer_pane_cp3

0x3798,	// (0x00090a9d) mup_equalizer_pane_cp4_ParamLimits

0x3798,	// (0x00090a9d) mup_equalizer_pane_cp4

0x37c1,	// (0x00090ac6) mup_equalizer_pane_cp5

0x37d9,	// (0x00090ade) mup_equalizer_pane_cp6

0x37f1,	// (0x00090af6) mup_equalizer_pane_cp7

0xc693,	// (0x00099998) bg_popup_call_poc_act_pane_g9

0xc69b,	// (0x000999a0) bg_popup_call_poc_act_pane_g10

0xc6a3,	// (0x000999a8) bg_popup_call_poc_act_pane_g11

0x000a,

0xa089,	// (0x0009738e) mup_scale_pane

0xa1e9,	// (0x000974ee) mup_scale_pane_g1

0xb4ff,	// (0x00098804) mup_scale_pane_g2

0x0006,

0xf476,	// (0x0009c77b) mup_scale_pane_g

0xb523,	// (0x00098828) msg_data_pane

0xb52b,	// (0x00098830) scroll_pane_cp017

0xfe0b,	// (0x0008d110) bg_list_pane_cp04_ParamLimits

0xfe0b,	// (0x0008d110) bg_list_pane_cp04

0xb533,	// (0x00098838) msg_data_pane_g1

0x3823,	// (0x00090b28) msg_data_pane_g2

0x382d,	// (0x00090b32) msg_data_pane_g3

0x3837,	// (0x00090b3c) msg_data_pane_g4

0x383f,	// (0x00090b44) msg_data_pane_g5

0x3847,	// (0x00090b4c) msg_data_pane_g6

0x384f,	// (0x00090b54) msg_data_pane_g7

0x0006,

0xf485,	// (0x0009c78a) msg_data_pane_g

0xfe2b,	// (0x0008d130) msg_text_pane_ParamLimits

0xfe2b,	// (0x0008d130) msg_text_pane

0x3857,	// (0x00090b5c) qrid_highlight_pane_cp011_ParamLimits

0x3857,	// (0x00090b5c) qrid_highlight_pane_cp011

0x9e2e,	// (0x00097133) msg_body_pane

0x9e2e,	// (0x00097133) msg_header_pane

0xb53b,	// (0x00098840) input_focus_pane_cp07

0x3878,	// (0x00090b7d) msg_header_pane_t1_ParamLimits

0x3878,	// (0x00090b7d) msg_header_pane_t1

0x388a,	// (0x00090b8f) msg_header_pane_t2_ParamLimits

0x388a,	// (0x00090b8f) msg_header_pane_t2

0x0001,

0xf499,	// (0x0009c79e) msg_header_pane_t_ParamLimits

0xf499,	// (0x0009c79e) msg_header_pane_t

0xb550,	// (0x00098855) msg_body_pane_g1

0xfe5f,	// (0x0008d164) msg_body_pane_t1_ParamLimits

0xfe5f,	// (0x0008d164) msg_body_pane_t1

0x389c,	// (0x00090ba1) msg_body_pane_t2_ParamLimits

0x389c,	// (0x00090ba1) msg_body_pane_t2

0x38ae,	// (0x00090bb3) msg_body_pane_t3_ParamLimits

0x38ae,	// (0x00090bb3) msg_body_pane_t3

0x0002,

0xf49e,	// (0x0009c7a3) msg_body_pane_t_ParamLimits

0xf49e,	// (0x0009c7a3) msg_body_pane_t

0x38fa,	// (0x00090bff) main_viewer_pane_g1_ParamLimits

0x38fa,	// (0x00090bff) main_viewer_pane_g1

0x3908,	// (0x00090c0d) main_viewer_pane_g2_ParamLimits

0x3908,	// (0x00090c0d) main_viewer_pane_g2

0x3916,	// (0x00090c1b) main_viewer_pane_g3_ParamLimits

0x3916,	// (0x00090c1b) main_viewer_pane_g3

0x3925,	// (0x00090c2a) main_viewer_pane_g4_ParamLimits

0x3925,	// (0x00090c2a) main_viewer_pane_g4

0xa5dd,	// (0x000978e2) main_viewer_pane_g5_ParamLimits

0xa5dd,	// (0x000978e2) main_viewer_pane_g5

0xa5dd,	// (0x000978e2) main_viewer_pane_g7_ParamLimits

0xa5dd,	// (0x000978e2) main_viewer_pane_g7

0xa5ef,	// (0x000978f4) main_viewer_pane_g8_ParamLimits

0xa5ef,	// (0x000978f4) main_viewer_pane_g8

0x0007,

0xf4ae,	// (0x0009c7b3) main_viewer_pane_g_ParamLimits

0xf4ae,	// (0x0009c7b3) main_viewer_pane_g

0xb558,	// (0x0009885d) viewer_content_pane_ParamLimits

0xb558,	// (0x0009885d) viewer_content_pane

0x3963,	// (0x00090c68) main_postcard_pane_g1_ParamLimits

0x3963,	// (0x00090c68) main_postcard_pane_g1

0x3979,	// (0x00090c7e) main_postcard_pane_g2_ParamLimits

0x3979,	// (0x00090c7e) main_postcard_pane_g2

0x398f,	// (0x00090c94) main_postcard_pane_g3_ParamLimits

0x398f,	// (0x00090c94) main_postcard_pane_g3

0x0005,

0xf4bf,	// (0x0009c7c4) main_postcard_pane_g_ParamLimits

0xf4bf,	// (0x0009c7c4) main_postcard_pane_g

0x39a6,	// (0x00090cab) main_postcard_pane_g4

0xc8bc,	// (0x00099bc1) smil_status_volume_pane_g2

0x39e9,	// (0x00090cee) postcard_pane_ParamLimits

0x39e9,	// (0x00090cee) postcard_pane

0xb566,	// (0x0009886b) postcard_pane_g1_ParamLimits

0xb566,	// (0x0009886b) postcard_pane_g1

0x3a39,	// (0x00090d3e) postcard_pane_g2_ParamLimits

0x3a39,	// (0x00090d3e) postcard_pane_g2

0x3a45,	// (0x00090d4a) postcard_pane_g3_ParamLimits

0x3a45,	// (0x00090d4a) postcard_pane_g3

0xb574,	// (0x00098879) postcard_pane_g4_ParamLimits

0xb574,	// (0x00098879) postcard_pane_g4

0x3a51,	// (0x00090d56) postcard_pane_g5_ParamLimits

0x3a51,	// (0x00090d56) postcard_pane_g5

0x3a66,	// (0x00090d6b) postcard_pane_g6_ParamLimits

0x3a66,	// (0x00090d6b) postcard_pane_g6

0xb566,	// (0x0009886b) postcard_pane_g7_ParamLimits

0xb566,	// (0x0009886b) postcard_pane_g7

0x0006,

0xf4cc,	// (0x0009c7d1) postcard_pane_g_ParamLimits

0xf4cc,	// (0x0009c7d1) postcard_pane_g

0x3a7e,	// (0x00090d83) main_mp2_pane_g1_ParamLimits

0x3a7e,	// (0x00090d83) main_mp2_pane_g1

0x3a8c,	// (0x00090d91) main_mp2_pane_g2_ParamLimits

0x3a8c,	// (0x00090d91) main_mp2_pane_g2

0x3a98,	// (0x00090d9d) main_mp2_pane_g3_ParamLimits

0x3a98,	// (0x00090d9d) main_mp2_pane_g3

0x0002,

0xf4db,	// (0x0009c7e0) main_mp2_pane_g_ParamLimits

0xf4db,	// (0x0009c7e0) main_mp2_pane_g

0x3aa4,	// (0x00090da9) main_mp2_pane_t1_ParamLimits

0x3aa4,	// (0x00090da9) main_mp2_pane_t1

0x3abb,	// (0x00090dc0) main_mp2_pane_t2_ParamLimits

0x3abb,	// (0x00090dc0) main_mp2_pane_t2

0x3acd,	// (0x00090dd2) main_mp2_pane_t3_ParamLimits

0x3acd,	// (0x00090dd2) main_mp2_pane_t3

0x0002,

0xf4e2,	// (0x0009c7e7) main_mp2_pane_t_ParamLimits

0xf4e2,	// (0x0009c7e7) main_mp2_pane_t

0xb582,	// (0x00098887) pec_content_pane_ParamLimits

0xb582,	// (0x00098887) pec_content_pane

0xac39,	// (0x00097f3e) scroll_pane_cp015

0xb594,	// (0x00098899) pec_attribute_pane_ParamLimits

0xb594,	// (0x00098899) pec_attribute_pane

0x3adf,	// (0x00090de4) pec_content_pane_g1_ParamLimits

0x3adf,	// (0x00090de4) pec_content_pane_g1

0xb5a4,	// (0x000988a9) pec_content_pane_t1_ParamLimits

0xb5a4,	// (0x000988a9) pec_content_pane_t1

0xb5b6,	// (0x000988bb) pec_content_pane_t2_ParamLimits

0xb5b6,	// (0x000988bb) pec_content_pane_t2

0x0001,

0xf4e9,	// (0x0009c7ee) pec_content_pane_t_ParamLimits

0xf4e9,	// (0x0009c7ee) pec_content_pane_t

0x3aeb,	// (0x00090df0) list_single_graphic_pane_cp01_ParamLimits

0x3aeb,	// (0x00090df0) list_single_graphic_pane_cp01

0xa089,	// (0x0009738e) bg_popup_sub_pane_cp04

0xb5c8,	// (0x000988cd) popup_mup_playback_window_g1

0xb5d4,	// (0x000988d9) popup_mup_playback_window_t1

0xb5e9,	// (0x000988ee) popup_mup_playback_window_t2

0x0001,

0xf4ee,	// (0x0009c7f3) popup_mup_playback_window_t

0xb620,	// (0x00098925) main_image_pane_g1_ParamLimits

0xb620,	// (0x00098925) main_image_pane_g1

0xb663,	// (0x00098968) scroll_pane_cp018_ParamLimits

0xb663,	// (0x00098968) scroll_pane_cp018

0xb67b,	// (0x00098980) scroll_pane_cp016_ParamLimits

0xb67b,	// (0x00098980) scroll_pane_cp016

0x3bba,	// (0x00090ebf) smil2_image_pane_ParamLimits

0x3bba,	// (0x00090ebf) smil2_image_pane

0x3bf0,	// (0x00090ef5) smil2_root_pane_ParamLimits

0x3bf0,	// (0x00090ef5) smil2_root_pane

0x3c28,	// (0x00090f2d) smil2_text_pane_ParamLimits

0x3c28,	// (0x00090f2d) smil2_text_pane

0x9e2e,	// (0x00097133) bg_list_pane_cp06

0xb6b7,	// (0x000989bc) grid_radio_pane

0x9e2e,	// (0x00097133) bg_popup_window_pane_cp06

0xb6c1,	// (0x000989c6) main_fmradio_pane_t1

0xb174,	// (0x00098479) heading_pane_cp04

0xb6cf,	// (0x000989d4) main_fmradio_pane_t2

0xc6ab,	// (0x000999b0) popup_cale_lunar_info_window_g1

0xb6dd,	// (0x000989e2) main_fmradio_pane_t3

0xc6b3,	// (0x000999b8) popup_cale_lunar_info_window_g2

0xb6ed,	// (0x000989f2) main_fmradio_pane_t4

0x0001,

0xb6fb,	// (0x00098a00) main_fmradio_pane_t5

0x0004,

0xf5c9,	// (0x0009c8ce) popup_cale_lunar_info_window_g

0xf503,	// (0x0009c808) main_fmradio_pane_t

0xb709,	// (0x00098a0e) wait_bar_pane_cp03

0xb711,	// (0x00098a16) cell_fmradio_pane_ParamLimits

0xb711,	// (0x00098a16) cell_fmradio_pane

0xb566,	// (0x0009886b) cell_fmradio_pane_g1_ParamLimits

0xb566,	// (0x0009886b) cell_fmradio_pane_g1

0x9e2e,	// (0x00097133) grid_highlight_pane_cp011

0xb726,	// (0x00098a2b) poc_content_pane_ParamLimits

0xb726,	// (0x00098a2b) poc_content_pane

0xb738,	// (0x00098a3d) scroll_pane_cp019

0x3cb8,	// (0x00090fbd) popup_call_poc_act_window_ParamLimits

0x3cb8,	// (0x00090fbd) popup_call_poc_act_window

0x3cdc,	// (0x00090fe1) popup_call_poc_inact_window_ParamLimits

0x3cdc,	// (0x00090fe1) popup_call_poc_inact_window

0xf5a0,	// (0x0009c8a5) bg_popup_call_poc_act_pane_g

0xc623,	// (0x00099928) bg_popup_call_poc_inact_pane_g1

0xc62b,	// (0x00099930) bg_popup_call_poc_inact_pane_g2

0xb740,	// (0x00098a45) popup_call_poc_act_window_g2

0xc633,	// (0x00099938) bg_popup_call_poc_inact_pane_g3

0xc63b,	// (0x00099940) bg_popup_call_poc_inact_pane_g4

0xc643,	// (0x00099948) bg_popup_call_poc_inact_pane_g5

0xb748,	// (0x00098a4d) popup_call_poc_act_window_t1_ParamLimits

0xb748,	// (0x00098a4d) popup_call_poc_act_window_t1

0xb770,	// (0x00098a75) popup_call_poc_act_window_t2_ParamLimits

0xb770,	// (0x00098a75) popup_call_poc_act_window_t2

0xb798,	// (0x00098a9d) popup_call_poc_act_window_t3_ParamLimits

0xb798,	// (0x00098a9d) popup_call_poc_act_window_t3

0xb7c0,	// (0x00098ac5) popup_call_poc_act_window_t4_ParamLimits

0xb7c0,	// (0x00098ac5) popup_call_poc_act_window_t4

0x0003,

0xf50e,	// (0x0009c813) popup_call_poc_act_window_t_ParamLimits

0xf50e,	// (0x0009c813) popup_call_poc_act_window_t

0xc64b,	// (0x00099950) bg_popup_call_poc_inact_pane_g6

0xc653,	// (0x00099958) bg_popup_call_poc_inact_pane_g7

0xc65b,	// (0x00099960) bg_popup_call_poc_inact_pane_g8

0xb7d2,	// (0x00098ad7) popup_call_poc_inact_window_g2

0xc663,	// (0x00099968) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58d,	// (0x0009c892) bg_popup_call_poc_inact_pane_g

0xb7da,	// (0x00098adf) popup_call_poc_inact_window_t1_ParamLimits

0xb7da,	// (0x00098adf) popup_call_poc_inact_window_t1

0xb7ef,	// (0x00098af4) popup_call_poc_inact_window_t2_ParamLimits

0xb7ef,	// (0x00098af4) popup_call_poc_inact_window_t2

0xb804,	// (0x00098b09) popup_call_poc_inact_window_t3_ParamLimits

0xb804,	// (0x00098b09) popup_call_poc_inact_window_t3

0x0002,

0xf517,	// (0x0009c81c) popup_call_poc_inact_window_t_ParamLimits

0xf517,	// (0x0009c81c) popup_call_poc_inact_window_t

0xc82f,	// (0x00099b34) context_pane_ParamLimits

0x4584,	// (0x00091889) signal_pane_ParamLimits

0xb3c2,	// (0x000986c7) main_call2_pane

0xc81d,	// (0x00099b22) popup_phob_thumbnail2_window_ParamLimits

0xc81d,	// (0x00099b22) popup_phob_thumbnail2_window

0xa5c5,	// (0x000978ca) aid_hotspot_pointer_arrow_pane

0xa5cd,	// (0x000978d2) aid_hotspot_pointer_hand_pane

0x4044,	// (0x00091349) phob_pre_status_pane_g5

0x1ab3,	// (0x0008edb8) cams_zoom_pane_ParamLimits

0x1ac2,	// (0x0008edc7) image_vga_pane_ParamLimits

0x1adc,	// (0x0008ede1) main_camera_pane_g1_ParamLimits

0x1aee,	// (0x0008edf3) main_camera_pane_g2_ParamLimits

0x1afe,	// (0x0008ee03) main_camera_pane_g3_ParamLimits

0x1b12,	// (0x0008ee17) main_camera_pane_g4_ParamLimits

0x1b26,	// (0x0008ee2b) main_camera_pane_g5_ParamLimits

0x1b3a,	// (0x0008ee3f) main_camera_pane_g6_ParamLimits

0x1b4e,	// (0x0008ee53) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0009c514) main_camera_pane_g_ParamLimits

0x1b62,	// (0x0008ee67) main_camera_pane_t1_ParamLimits

0x1b78,	// (0x0008ee7d) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0009c525) main_camera_pane_t_ParamLimits

0xa089,	// (0x0009738e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa089,	// (0x0009738e) bg_popup_preview_window_pane_cp01

0xb819,	// (0x00098b1e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb819,	// (0x00098b1e) popup_phob_thumbnail2_window_g1

0x9e2e,	// (0x00097133) call2_cli_visual_pane

0x3d10,	// (0x00091015) popup_call2_audio_conf_window_ParamLimits

0x3d10,	// (0x00091015) popup_call2_audio_conf_window

0x3d38,	// (0x0009103d) popup_call2_audio_first_window_ParamLimits

0x3d38,	// (0x0009103d) popup_call2_audio_first_window

0x3dce,	// (0x000910d3) popup_call2_audio_in_window_ParamLimits

0x3dce,	// (0x000910d3) popup_call2_audio_in_window

0x3e1a,	// (0x0009111f) popup_call2_audio_out_window_ParamLimits

0x3e1a,	// (0x0009111f) popup_call2_audio_out_window

0x3e8c,	// (0x00091191) popup_call2_audio_second_window_ParamLimits

0x3e8c,	// (0x00091191) popup_call2_audio_second_window

0x3ef2,	// (0x000911f7) popup_call2_audio_wait_window_ParamLimits

0x3ef2,	// (0x000911f7) popup_call2_audio_wait_window

0x9e2e,	// (0x00097133) bg_popup_call2_act_pane_cp03

0xa06b,	// (0x00097370) list_conf_pane_cp

0xb825,	// (0x00098b2a) popup_call2_audio_conf_window_t1

0xb833,	// (0x00098b38) list_single_graphic_popup_conf2_pane_ParamLimits

0xb833,	// (0x00098b38) list_single_graphic_popup_conf2_pane

0xb1e3,	// (0x000984e8) list_highlight_pane_cp04

0xb846,	// (0x00098b4b) list_single_graphic_popup_conf2_pane_g1

0xb1f4,	// (0x000984f9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51e,	// (0x0009c823) list_single_graphic_popup_conf2_pane_g

0xb850,	// (0x00098b55) list_single_graphic_popup_conf2_pane_t1

0xb85e,	// (0x00098b63) bg_popup_call2_act_pane_cp01_ParamLimits

0xb85e,	// (0x00098b63) bg_popup_call2_act_pane_cp01

0xb8e8,	// (0x00098bed) call_type_pane_cp05_ParamLimits

0xb8e8,	// (0x00098bed) call_type_pane_cp05

0xb93c,	// (0x00098c41) popup_call2_audio_second_window_g1_ParamLimits

0xb93c,	// (0x00098c41) popup_call2_audio_second_window_g1

0xb990,	// (0x00098c95) popup_call2_audio_second_window_g2_ParamLimits

0xb990,	// (0x00098c95) popup_call2_audio_second_window_g2

0x0002,

0xf523,	// (0x0009c828) popup_call2_audio_second_window_g_ParamLimits

0xf523,	// (0x0009c828) popup_call2_audio_second_window_g

0xb9f5,	// (0x00098cfa) popup_call2_audio_second_window_t1_ParamLimits

0xb9f5,	// (0x00098cfa) popup_call2_audio_second_window_t1

0xbab0,	// (0x00098db5) popup_call2_audio_second_window_t2_ParamLimits

0xbab0,	// (0x00098db5) popup_call2_audio_second_window_t2

0xbb03,	// (0x00098e08) popup_call2_audio_second_window_t3_ParamLimits

0xbb03,	// (0x00098e08) popup_call2_audio_second_window_t3

0x0003,

0xf52a,	// (0x0009c82f) popup_call2_audio_second_window_t_ParamLimits

0xf52a,	// (0x0009c82f) popup_call2_audio_second_window_t

0x9e2e,	// (0x00097133) bg_popup_call2_in_pane_cp02

0x9e38,	// (0x0009713d) call_type_pane_cp04

0x9e40,	// (0x00097145) popup_call2_audio_wait_window_g1

0x9e48,	// (0x0009714d) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0009c401) popup_call2_audio_wait_window_g

0x9e50,	// (0x00097155) popup_call2_audio_wait_window_t3

0xbbf6,	// (0x00098efb) bg_popup_call2_act_pane_ParamLimits

0xbbf6,	// (0x00098efb) bg_popup_call2_act_pane

0xbcb6,	// (0x00098fbb) call_type_pane_cp03_ParamLimits

0xbcb6,	// (0x00098fbb) call_type_pane_cp03

0xbd1a,	// (0x0009901f) popup_call2_audio_first_window_g1_ParamLimits

0xbd1a,	// (0x0009901f) popup_call2_audio_first_window_g1

0xbd8a,	// (0x0009908f) popup_call2_audio_first_window_g2_ParamLimits

0xbd8a,	// (0x0009908f) popup_call2_audio_first_window_g2

0xb481,	// (0x00098786) popup_call2_audio_first_window_g3_ParamLimits

0xb481,	// (0x00098786) popup_call2_audio_first_window_g3

0x0004,

0xf533,	// (0x0009c838) popup_call2_audio_first_window_g_ParamLimits

0xf533,	// (0x0009c838) popup_call2_audio_first_window_g

0xbe68,	// (0x0009916d) popup_call2_audio_first_window_t1_ParamLimits

0xbe68,	// (0x0009916d) popup_call2_audio_first_window_t1

0xbf6b,	// (0x00099270) popup_call2_audio_first_window_t4_ParamLimits

0xbf6b,	// (0x00099270) popup_call2_audio_first_window_t4

0xc04e,	// (0x00099353) popup_call2_audio_first_window_t5_ParamLimits

0xc04e,	// (0x00099353) popup_call2_audio_first_window_t5

0x0003,

0xf53e,	// (0x0009c843) popup_call2_audio_first_window_t_ParamLimits

0xf53e,	// (0x0009c843) popup_call2_audio_first_window_t

0xa081,	// (0x00097386) bg_popup_call2_act_pane_g1

0xc6bd,	// (0x000999c2) popup_cale_lunar_info_window_t1

0xc6cb,	// (0x000999d0) popup_cale_lunar_info_window_t2

0xc6d9,	// (0x000999de) popup_cale_lunar_info_window_t3

0x9e2e,	// (0x00097133) bg_popup_call2_bubble_pane

0xc14f,	// (0x00099454) bg_popup_call2_in_pane_cp01_ParamLimits

0xc14f,	// (0x00099454) bg_popup_call2_in_pane_cp01

0x9b0a,	// (0x00096e0f) call_type_pane_cp02

0xc197,	// (0x0009949c) popup_call2_audio_out_window_g1_ParamLimits

0xc197,	// (0x0009949c) popup_call2_audio_out_window_g1

0xc1c3,	// (0x000994c8) popup_call2_audio_out_window_g2_ParamLimits

0xc1c3,	// (0x000994c8) popup_call2_audio_out_window_g2

0xc1eb,	// (0x000994f0) popup_call2_audio_out_window_g3_ParamLimits

0xc1eb,	// (0x000994f0) popup_call2_audio_out_window_g3

0x0003,

0xf547,	// (0x0009c84c) popup_call2_audio_out_window_g_ParamLimits

0xf547,	// (0x0009c84c) popup_call2_audio_out_window_g

0xc226,	// (0x0009952b) popup_call2_audio_out_window_t1_ParamLimits

0xc226,	// (0x0009952b) popup_call2_audio_out_window_t1

0xc285,	// (0x0009958a) popup_call2_audio_out_window_t2_ParamLimits

0xc285,	// (0x0009958a) popup_call2_audio_out_window_t2

0xc2d9,	// (0x000995de) popup_call2_audio_out_window_t3_ParamLimits

0xc2d9,	// (0x000995de) popup_call2_audio_out_window_t3

0xc2ef,	// (0x000995f4) popup_call2_audio_out_window_t4_ParamLimits

0xc2ef,	// (0x000995f4) popup_call2_audio_out_window_t4

0xc305,	// (0x0009960a) popup_call2_audio_out_window_t5_ParamLimits

0xc305,	// (0x0009960a) popup_call2_audio_out_window_t5

0x0005,

0xf550,	// (0x0009c855) popup_call2_audio_out_window_t_ParamLimits

0xf550,	// (0x0009c855) popup_call2_audio_out_window_t

0xc369,	// (0x0009966e) bg_popup_call2_in_pane_ParamLimits

0xc369,	// (0x0009966e) bg_popup_call2_in_pane

0xc3c5,	// (0x000996ca) popup_call2_audio_in_window_g1_ParamLimits

0xc3c5,	// (0x000996ca) popup_call2_audio_in_window_g1

0xc3fd,	// (0x00099702) popup_call2_audio_in_window_g2_ParamLimits

0xc3fd,	// (0x00099702) popup_call2_audio_in_window_g2

0xc435,	// (0x0009973a) popup_call2_audio_in_window_g3_ParamLimits

0xc435,	// (0x0009973a) popup_call2_audio_in_window_g3

0x0003,

0xf55d,	// (0x0009c862) popup_call2_audio_in_window_g_ParamLimits

0xf55d,	// (0x0009c862) popup_call2_audio_in_window_g

0xc48d,	// (0x00099792) popup_call2_audio_in_window_t1_ParamLimits

0xc48d,	// (0x00099792) popup_call2_audio_in_window_t1

0xc50d,	// (0x00099812) popup_call2_audio_in_window_t2_ParamLimits

0xc50d,	// (0x00099812) popup_call2_audio_in_window_t2

0xc58d,	// (0x00099892) popup_call2_audio_in_window_t3_ParamLimits

0xc58d,	// (0x00099892) popup_call2_audio_in_window_t3

0xc5a7,	// (0x000998ac) popup_call2_audio_in_window_t4_ParamLimits

0xc5a7,	// (0x000998ac) popup_call2_audio_in_window_t4

0xc5b9,	// (0x000998be) popup_call2_audio_in_window_t5_ParamLimits

0xc5b9,	// (0x000998be) popup_call2_audio_in_window_t5

0xc5ce,	// (0x000998d3) popup_call2_audio_in_window_t6_ParamLimits

0xc5ce,	// (0x000998d3) popup_call2_audio_in_window_t6

0x0005,

0xf566,	// (0x0009c86b) popup_call2_audio_in_window_t_ParamLimits

0xf566,	// (0x0009c86b) popup_call2_audio_in_window_t

0xa081,	// (0x00097386) bg_popup_call2_in_pane_g1

0xc6e7,	// (0x000999ec) popup_cale_lunar_info_window_t4

0x0003,

0xf5ce,	// (0x0009c8d3) popup_cale_lunar_info_window_t

0xa089,	// (0x0009738e) bg_popup_call2_rect_pane_ParamLimits

0xa089,	// (0x0009738e) bg_popup_call2_rect_pane

0x9e2e,	// (0x00097133) call2_cli_visual_graphic_pane

0x9e2e,	// (0x00097133) call2_cli_visual_text_pane

0xa607,	// (0x0009790c) smil_status_volume_pane_g3

0x0002,

0xa1e9,	// (0x000974ee) call2_cli_visual_graphic_pane_g1

0xa1e9,	// (0x000974ee) call2_cli_visual_graphic_pane_g2

0xa1e9,	// (0x000974ee) call2_cli_visual_graphic_pane_g3

0x0002,

0xf573,	// (0x0009c878) call2_cli_visual_graphic_pane_g

0xc5e3,	// (0x000998e8) bg_popup_call2_rect_pane_g1

0xa291,	// (0x00097596) bg_popup_call2_rect_pane_g2

0xc5eb,	// (0x000998f0) bg_popup_call2_rect_pane_g3

0xc5f3,	// (0x000998f8) bg_popup_call2_rect_pane_g4

0xc5fb,	// (0x00099900) bg_popup_call2_rect_pane_g5

0xc603,	// (0x00099908) bg_popup_call2_rect_pane_g6

0xc60b,	// (0x00099910) bg_popup_call2_rect_pane_g7

0xc613,	// (0x00099918) bg_popup_call2_rect_pane_g8

0xc61b,	// (0x00099920) bg_popup_call2_rect_pane_g9

0x0008,

0xf57a,	// (0x0009c87f) bg_popup_call2_rect_pane_g

0xc623,	// (0x00099928) bg_popup_call2_bubble_pane_g1

0xc62b,	// (0x00099930) bg_popup_call2_bubble_pane_g2

0xc633,	// (0x00099938) bg_popup_call2_bubble_pane_g3

0xc63b,	// (0x00099940) bg_popup_call2_bubble_pane_g4

0xc643,	// (0x00099948) bg_popup_call2_bubble_pane_g5

0xc64b,	// (0x00099950) bg_popup_call2_bubble_pane_g6

0xc653,	// (0x00099958) bg_popup_call2_bubble_pane_g7

0xc65b,	// (0x00099960) bg_popup_call2_bubble_pane_g8

0xc663,	// (0x00099968) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58d,	// (0x0009c892) bg_popup_call2_bubble_pane_g

0x125d,	// (0x0008e562) aid_cale_week_size_cell_pane

0x1b92,	// (0x0008ee97) aid_cams_cif_uncrop_pane_ParamLimits

0x1b92,	// (0x0008ee97) aid_cams_cif_uncrop_pane

0x1d4b,	// (0x0008f050) aid_cams_size_cell_ParamLimits

0x1d4b,	// (0x0008f050) aid_cams_size_cell

0x1d5f,	// (0x0008f064) grid_cams_pane_ParamLimits

0x1d79,	// (0x0008f07e) linegrid_cams_pane_ParamLimits

0x1e55,	// (0x0008f15a) call_video_pane_t1

0x1e6f,	// (0x0008f174) call_video_pane_t2

0x0001,

0xf273,	// (0x0009c578) call_video_pane_t

0x22a3,	// (0x0008f5a8) aid_cale_month_size_cell_pane_ParamLimits

0x22a3,	// (0x0008f5a8) aid_cale_month_size_cell_pane

0xf617,	// (0x0009c91c) smil_status_volume_pane_g

0xa614,	// (0x00097919) volume_smil_pane_ParamLimits

0x99ce,	// (0x00096cd3) aid_popup2_width_pane

0x11bb,	// (0x0008e4c0) cell_qdial_pane_g4_ParamLimits

0x11bb,	// (0x0008e4c0) cell_qdial_pane_g4

0x31ee,	// (0x000904f3) aid_blid_cardinal_pane_ParamLimits

0x31fa,	// (0x000904ff) aid_blid_destination_pane_ParamLimits

0x31fa,	// (0x000904ff) aid_blid_destination_pane

0xa089,	// (0x0009738e) bg_popup_call_poc_act_pane_ParamLimits

0xa089,	// (0x0009738e) bg_popup_call_poc_act_pane

0xa089,	// (0x0009738e) bg_popup_call_poc_inact_pane_ParamLimits

0xa089,	// (0x0009738e) bg_popup_call_poc_inact_pane

0xc66b,	// (0x00099970) bg_popup_call_poc_act_pane_g1

0xc673,	// (0x00099978) bg_popup_call_poc_act_pane_g2

0xc67b,	// (0x00099980) bg_popup_call_poc_act_pane_g3

0xc63b,	// (0x00099940) bg_popup_call_poc_act_pane_g4

0xc643,	// (0x00099948) bg_popup_call_poc_act_pane_g5

0xc683,	// (0x00099988) bg_popup_call_poc_act_pane_g6

0xc653,	// (0x00099958) bg_popup_call_poc_act_pane_g7

0xc68b,	// (0x00099990) bg_popup_call_poc_act_pane_g8

0x9e2e,	// (0x00097133) main_usb_pane

0xc7f4,	// (0x00099af9) popup_cale_lunar_info_window

0x2138,	// (0x0008f43d) im_reading_pane_t1_ParamLimits

0xa4cf,	// (0x000977d4) list_im_pane_ParamLimits

0xa4e0,	// (0x000977e5) scroll_pane_cp07_ParamLimits

0x9e2e,	// (0x00097133) grid_highlight_pane_cp012

0xa089,	// (0x0009738e) mup_scale_pane_ParamLimits

0xb566,	// (0x0009886b) main_usb_pane_g1_ParamLimits

0xb566,	// (0x0009886b) main_usb_pane_g1

0x3f50,	// (0x00091255) main_usb_pane_g2_ParamLimits

0x3f50,	// (0x00091255) main_usb_pane_g2

0x0001,

0xf5b7,	// (0x0009c8bc) main_usb_pane_g_ParamLimits

0xf5b7,	// (0x0009c8bc) main_usb_pane_g

0x3f66,	// (0x0009126b) main_usb_pane_t1_ParamLimits

0x3f66,	// (0x0009126b) main_usb_pane_t1

0x3f78,	// (0x0009127d) main_usb_pane_t2_ParamLimits

0x3f78,	// (0x0009127d) main_usb_pane_t2

0x3f8a,	// (0x0009128f) main_usb_pane_t3_ParamLimits

0x3f8a,	// (0x0009128f) main_usb_pane_t3

0x3f9c,	// (0x000912a1) main_usb_pane_t4_ParamLimits

0x3f9c,	// (0x000912a1) main_usb_pane_t4

0x3fb1,	// (0x000912b6) main_usb_pane_t5_ParamLimits

0x3fb1,	// (0x000912b6) main_usb_pane_t5

0x3fc6,	// (0x000912cb) main_usb_pane_t6_ParamLimits

0x3fc6,	// (0x000912cb) main_usb_pane_t6

0x0005,

0xf5bc,	// (0x0009c8c1) main_usb_pane_t_ParamLimits

0x318f,	// (0x00090494) aid_text_placing

0x319a,	// (0x0009049f) main_location2_pane_t1_ParamLimits

0x31ae,	// (0x000904b3) main_location2_pane_t2_ParamLimits

0x31c4,	// (0x000904c9) main_location2_pane_t3_ParamLimits

0x31da,	// (0x000904df) main_location2_pane_t4_ParamLimits

0x31da,	// (0x000904df) main_location2_pane_t4

0xf3db,	// (0x0009c6e0) main_location2_pane_t_ParamLimits

0xa0c5,	// (0x000973ca) find_pinb_pane_g2_ParamLimits

0xa0c5,	// (0x000973ca) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0009c427) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0009c427) find_pinb_pane_g

0xa0d1,	// (0x000973d6) find_pinb_pane_t1_ParamLimits

0xa0e3,	// (0x000973e8) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0009c42c) find_pinb_pane_t_ParamLimits

0x9e2e,	// (0x00097133) main_call3_pane

0x2872,	// (0x0008fb77) cale_month_day_heading_pane_t1_ParamLimits

0x28f8,	// (0x0008fbfd) cale_month_day_heading_pane_t2_ParamLimits

0x2989,	// (0x0008fc8e) cale_month_day_heading_pane_t3_ParamLimits

0x2a1a,	// (0x0008fd1f) cale_month_day_heading_pane_t4_ParamLimits

0x2aab,	// (0x0008fdb0) cale_month_day_heading_pane_t5_ParamLimits

0x2b4c,	// (0x0008fe51) cale_month_day_heading_pane_t6_ParamLimits

0x2bf1,	// (0x0008fef6) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0009c5b0) cale_month_day_heading_pane_t_ParamLimits

0x2ea3,	// (0x000901a8) smil_status_volume_pane

0x3a0d,	// (0x00090d12) postcard_address_pane_ParamLimits

0x3a0d,	// (0x00090d12) postcard_address_pane

0x3a23,	// (0x00090d28) postcard_message_pane_ParamLimits

0x3a23,	// (0x00090d28) postcard_message_pane

0x3f2c,	// (0x00091231) call2_cli_visual_pane_t1_ParamLimits

0x3f2c,	// (0x00091231) call2_cli_visual_pane_t1

0x47b9,	// (0x00091abe) postcard_message_pane_t1_ParamLimits

0x47b9,	// (0x00091abe) postcard_message_pane_t1

0x47a2,	// (0x00091aa7) postcard_address_pane_t1_ParamLimits

0x47a2,	// (0x00091aa7) postcard_address_pane_t1

0x478e,	// (0x00091a93) popup_call3_audio_in_window_ParamLimits

0x478e,	// (0x00091a93) popup_call3_audio_in_window

0x4613,	// (0x00091918) bg_popup_call3_in_pane_ParamLimits

0x4613,	// (0x00091918) bg_popup_call3_in_pane

0x468f,	// (0x00091994) popup_call3_audio_in_window_g1_ParamLimits

0x468f,	// (0x00091994) popup_call3_audio_in_window_g1

0x46af,	// (0x000919b4) popup_call3_audio_in_window_g2_ParamLimits

0x46af,	// (0x000919b4) popup_call3_audio_in_window_g2

0x46cf,	// (0x000919d4) popup_call3_audio_in_window_g3_ParamLimits

0x46cf,	// (0x000919d4) popup_call3_audio_in_window_g3

0x0003,

0xf61e,	// (0x0009c923) popup_call3_audio_in_window_g_ParamLimits

0xf61e,	// (0x0009c923) popup_call3_audio_in_window_g

0x4700,	// (0x00091a05) popup_call3_audio_in_window_t1_ParamLimits

0x4700,	// (0x00091a05) popup_call3_audio_in_window_t1

0x473e,	// (0x00091a43) popup_call3_audio_in_window_t2_ParamLimits

0x473e,	// (0x00091a43) popup_call3_audio_in_window_t2

0x477c,	// (0x00091a81) popup_call3_audio_in_window_t3_ParamLimits

0x477c,	// (0x00091a81) popup_call3_audio_in_window_t3

0x0002,

0xf627,	// (0x0009c92c) popup_call3_audio_in_window_t_ParamLimits

0xf627,	// (0x0009c92c) popup_call3_audio_in_window_t

0xb3c2,	// (0x000986c7) bg_popup_call3_rect_pane

0xc5e3,	// (0x000998e8) bg_popup_call3_rect_pane_g1

0xa291,	// (0x00097596) bg_popup_call3_rect_pane_g2

0xc5eb,	// (0x000998f0) bg_popup_call3_rect_pane_g3

0xc5f3,	// (0x000998f8) bg_popup_call3_rect_pane_g4

0xc5fb,	// (0x00099900) bg_popup_call3_rect_pane_g5

0xc603,	// (0x00099908) bg_popup_call3_rect_pane_g6

0xc60b,	// (0x00099910) bg_popup_call3_rect_pane_g7

0x35f4,	// (0x000908f9) mup_visualizer_osc_pane

0xb48f,	// (0x00098794) mup_visualizer_spec_pane

0x4643,	// (0x00091948) call3_video_qcif_pane_ParamLimits

0x4643,	// (0x00091948) call3_video_qcif_pane

0x4656,	// (0x0009195b) call3_video_qcif_uncrop_pane_ParamLimits

0x4656,	// (0x0009195b) call3_video_qcif_uncrop_pane

0x4666,	// (0x0009196b) call3_video_subqcif_pane_ParamLimits

0x4666,	// (0x0009196b) call3_video_subqcif_pane

0x467c,	// (0x00091981) call3_video_subqcif_uncrop_pane_ParamLimits

0x467c,	// (0x00091981) call3_video_subqcif_uncrop_pane

0x46ef,	// (0x000919f4) popup_call3_audio_in_window_g4_ParamLimits

0x46ef,	// (0x000919f4) popup_call3_audio_in_window_g4

0x4602,	// (0x00091907) mup_spec_half_pane

0x460b,	// (0x00091910) mup_spec_half_pane_cp

0xc88f,	// (0x00099b94) mup_osc_middle_pane

0xc898,	// (0x00099b9d) mup_visualizer_osc_pane_g1

0x45e2,	// (0x000918e7) mup_spec_bar_pane_ParamLimits

0x45e2,	// (0x000918e7) mup_spec_bar_pane

0xc87c,	// (0x00099b81) mup_spec_bar_pane_g1

0xc886,	// (0x00099b8b) mup_spec_bar_pane_g2

0x0001,

0xf612,	// (0x0009c917) mup_spec_bar_pane_g

0x125d,	// (0x0008e562) aid_cale_week_size_cell_pane_ParamLimits

0x1277,	// (0x0008e57c) bg_cale_heading_pane_ParamLimits

0xa30d,	// (0x00097612) bg_cale_pane_cp01_ParamLimits

0x12a0,	// (0x0008e5a5) cale_week_corner_pane_ParamLimits

0x12bf,	// (0x0008e5c4) cale_week_day_heading_pane_ParamLimits

0x12ed,	// (0x0008e5f2) cale_week_scroll_pane_g1_ParamLimits

0x1311,	// (0x0008e616) cale_week_scroll_pane_g2_ParamLimits

0x1329,	// (0x0008e62e) cale_week_scroll_pane_g3_ParamLimits

0x1341,	// (0x0008e646) cale_week_scroll_pane_g4_ParamLimits

0x135d,	// (0x0008e662) cale_week_scroll_pane_g5_ParamLimits

0x137d,	// (0x0008e682) cale_week_scroll_pane_g6_ParamLimits

0x139d,	// (0x0008e6a2) cale_week_scroll_pane_g7_ParamLimits

0x13c1,	// (0x0008e6c6) cale_week_scroll_pane_g8_ParamLimits

0x13e5,	// (0x0008e6ea) cale_week_scroll_pane_g9_ParamLimits

0x1402,	// (0x0008e707) cale_week_scroll_pane_g10_ParamLimits

0x141f,	// (0x0008e724) cale_week_scroll_pane_g11_ParamLimits

0x143c,	// (0x0008e741) cale_week_scroll_pane_g12_ParamLimits

0x1459,	// (0x0008e75e) cale_week_scroll_pane_g13_ParamLimits

0x1476,	// (0x0008e77b) cale_week_scroll_pane_g14_ParamLimits

0x149f,	// (0x0008e7a4) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0009c4b8) cale_week_scroll_pane_g_ParamLimits

0x14c8,	// (0x0008e7cd) cale_week_time_pane_ParamLimits

0x14ec,	// (0x0008e7f1) grid_cale_week_pane_ParamLimits

0xa32b,	// (0x00097630) listscroll_cale_week_pane_t1

0xa33d,	// (0x00097642) scroll_pane_cp08_ParamLimits

0x2310,	// (0x0008f615) cale_month_corner_pane_ParamLimits

0xadc2,	// (0x000980c7) cale_month_pane_t1

0x27f8,	// (0x0008fafd) cale_month_week_pane_ParamLimits

0x2fbd,	// (0x000902c2) popup_call_status_window_g1_ParamLimits

0x2fd1,	// (0x000902d6) popup_call_status_window_g2_ParamLimits

0x2fe5,	// (0x000902ea) popup_call_status_window_g3_ParamLimits

0xf362,	// (0x0009c667) popup_call_status_window_g_ParamLimits

0xb164,	// (0x00098469) aid_call2_pane

0xfe51,	// (0x0008d156) msg_header_pane_g1

0x3a0d,	// (0x00090d12) postcard_address2_pane_ParamLimits

0x3a0d,	// (0x00090d12) postcard_address2_pane

0x3a23,	// (0x00090d28) postcard_message2_pane_ParamLimits

0x3a23,	// (0x00090d28) postcard_message2_pane

0x4592,	// (0x00091897) message2_row_pane_ParamLimits

0x4592,	// (0x00091897) message2_row_pane

0x45af,	// (0x000918b4) address2_row_pane_ParamLimits

0x45af,	// (0x000918b4) address2_row_pane

0xc84a,	// (0x00099b4f) postcard_message2_row_pane_g1

0xc852,	// (0x00099b57) postcard_message2_row_pane_t1

0xc84a,	// (0x00099b4f) address2_row_pane_g1

0xc852,	// (0x00099b57) address2_row_pane_t1

0x1a18,	// (0x0008ed1d) aid_size_cell_vorec

0x9e2e,	// (0x00097133) main_rss_pane

0x45c2,	// (0x000918c7) rss_list_single_pane_ParamLimits

0x45c2,	// (0x000918c7) rss_list_single_pane

0xc860,	// (0x00099b65) rss_list_single_pane_t1

0xc86e,	// (0x00099b73) rss_list_single_pane_t2

0x0001,

0xf60d,	// (0x0009c912) rss_list_single_pane_t

0x9e2e,	// (0x00097133) main_camera2_pane

0x9e2e,	// (0x00097133) main_video2_pane

0x4828,	// (0x00091b2d) cams_zoom_pane_cp2_ParamLimits

0x4828,	// (0x00091b2d) cams_zoom_pane_cp2

0x483f,	// (0x00091b44) image2_vga_pane_ParamLimits

0x483f,	// (0x00091b44) image2_vga_pane

0x4887,	// (0x00091b8c) main_camera2_pane_g1_ParamLimits

0x4887,	// (0x00091b8c) main_camera2_pane_g1

0x48a7,	// (0x00091bac) main_camera2_pane_g2_ParamLimits

0x48a7,	// (0x00091bac) main_camera2_pane_g2

0x48be,	// (0x00091bc3) main_camera2_pane_g3_ParamLimits

0x48be,	// (0x00091bc3) main_camera2_pane_g3

0x48d5,	// (0x00091bda) main_camera2_pane_g4_ParamLimits

0x48d5,	// (0x00091bda) main_camera2_pane_g4

0x48ec,	// (0x00091bf1) main_camera2_pane_g5_ParamLimits

0x48ec,	// (0x00091bf1) main_camera2_pane_g5

0x4903,	// (0x00091c08) main_camera2_pane_g6_ParamLimits

0x4903,	// (0x00091c08) main_camera2_pane_g6

0x491a,	// (0x00091c1f) main_camera2_pane_g7_ParamLimits

0x491a,	// (0x00091c1f) main_camera2_pane_g7

0x4931,	// (0x00091c36) main_camera2_pane_g8_ParamLimits

0x4931,	// (0x00091c36) main_camera2_pane_g8

0x0008,

0xf62e,	// (0x0009c933) main_camera2_pane_g_ParamLimits

0xf62e,	// (0x0009c933) main_camera2_pane_g

0x495f,	// (0x00091c64) main_camera2_pane_t1_ParamLimits

0x495f,	// (0x00091c64) main_camera2_pane_t1

0x4994,	// (0x00091c99) main_camera2_pane_t2_ParamLimits

0x4994,	// (0x00091c99) main_camera2_pane_t2

0x49b1,	// (0x00091cb6) main_camera2_pane_t3_ParamLimits

0x49b1,	// (0x00091cb6) main_camera2_pane_t3

0x4a0f,	// (0x00091d14) main_camera2_pane_t4_ParamLimits

0x4a0f,	// (0x00091d14) main_camera2_pane_t4

0x0006,

0xf641,	// (0x0009c946) main_camera2_pane_t_ParamLimits

0xf641,	// (0x0009c946) main_camera2_pane_t

0x4a98,	// (0x00091d9d) cams_zoom_pane_cp4_ParamLimits

0x4a98,	// (0x00091d9d) cams_zoom_pane_cp4

0x4aae,	// (0x00091db3) image2_cif_pane_ParamLimits

0x4aae,	// (0x00091db3) image2_cif_pane

0x4ad9,	// (0x00091dde) image2_subqcif_pane_ParamLimits

0x4ad9,	// (0x00091dde) image2_subqcif_pane

0x4af4,	// (0x00091df9) main_video2_pane_g1_ParamLimits

0x4af4,	// (0x00091df9) main_video2_pane_g1

0x4b0e,	// (0x00091e13) main_video2_pane_g2_ParamLimits

0x4b0e,	// (0x00091e13) main_video2_pane_g2

0x4b24,	// (0x00091e29) main_video2_pane_g3_ParamLimits

0x4b24,	// (0x00091e29) main_video2_pane_g3

0x4b3a,	// (0x00091e3f) main_video2_pane_g4_ParamLimits

0x4b3a,	// (0x00091e3f) main_video2_pane_g4

0x4b50,	// (0x00091e55) main_video2_pane_g5_ParamLimits

0x4b50,	// (0x00091e55) main_video2_pane_g5

0x4b66,	// (0x00091e6b) main_video2_pane_g6_ParamLimits

0x4b66,	// (0x00091e6b) main_video2_pane_g6

0x0005,

0xf650,	// (0x0009c955) main_video2_pane_g_ParamLimits

0xf650,	// (0x0009c955) main_video2_pane_g

0x4b80,	// (0x00091e85) main_video2_pane_t1_ParamLimits

0x4b80,	// (0x00091e85) main_video2_pane_t1

0x4ba4,	// (0x00091ea9) main_video2_pane_t2_ParamLimits

0x4ba4,	// (0x00091ea9) main_video2_pane_t2

0x4bf4,	// (0x00091ef9) main_video2_pane_t3_ParamLimits

0x4bf4,	// (0x00091ef9) main_video2_pane_t3

0x0002,

0xf65d,	// (0x0009c962) main_video2_pane_t_ParamLimits

0xf65d,	// (0x0009c962) main_video2_pane_t

0x4084,	// (0x00091389) call_muted_g2

0x0001,

0xf5ff,	// (0x0009c904) call_muted_g

0x9e2e,	// (0x00097133) main_mup2_pane

0x4c3c,	// (0x00091f41) main_mup2_pane_g1_ParamLimits

0x4c3c,	// (0x00091f41) main_mup2_pane_g1

0x4c48,	// (0x00091f4d) main_mup2_pane_g2_ParamLimits

0x4c48,	// (0x00091f4d) main_mup2_pane_g2

0xa67f,	// (0x00097984) main_mup_pane_g13_cp1

0xa687,	// (0x0009798c) mup_volume_pane_cp1

0x4c66,	// (0x00091f6b) main_mup2_pane_g4_ParamLimits

0x4c66,	// (0x00091f6b) main_mup2_pane_g4

0x4c78,	// (0x00091f7d) main_mup2_pane_g5_ParamLimits

0x4c78,	// (0x00091f7d) main_mup2_pane_g5

0x4c8a,	// (0x00091f8f) main_mup2_pane_g6_ParamLimits

0x4c8a,	// (0x00091f8f) main_mup2_pane_g6

0x4c9c,	// (0x00091fa1) main_mup2_pane_g7_ParamLimits

0x4c9c,	// (0x00091fa1) main_mup2_pane_g7

0x0006,

0xf664,	// (0x0009c969) main_mup2_pane_g_ParamLimits

0xf664,	// (0x0009c969) main_mup2_pane_g

0x4cb4,	// (0x00091fb9) main_mup2_pane_t1_ParamLimits

0x4cb4,	// (0x00091fb9) main_mup2_pane_t1

0x4cca,	// (0x00091fcf) main_mup2_pane_t2_ParamLimits

0x4cca,	// (0x00091fcf) main_mup2_pane_t2

0x4ce0,	// (0x00091fe5) main_mup2_pane_t3_ParamLimits

0x4ce0,	// (0x00091fe5) main_mup2_pane_t3

0x4cf6,	// (0x00091ffb) main_mup2_pane_t4_ParamLimits

0x4cf6,	// (0x00091ffb) main_mup2_pane_t4

0x4d0e,	// (0x00092013) main_mup2_pane_t5_ParamLimits

0x4d0e,	// (0x00092013) main_mup2_pane_t5

0x4d26,	// (0x0009202b) main_mup2_pane_t6_ParamLimits

0x4d26,	// (0x0009202b) main_mup2_pane_t6

0x0005,

0xf673,	// (0x0009c978) main_mup2_pane_t_ParamLimits

0xf673,	// (0x0009c978) main_mup2_pane_t

0x4d56,	// (0x0009205b) mup2_visualizer_pane_ParamLimits

0x4d56,	// (0x0009205b) mup2_visualizer_pane

0x4d84,	// (0x00092089) mup_progress_pane_cp_ParamLimits

0x4d84,	// (0x00092089) mup_progress_pane_cp

0xa66a,	// (0x0009796f) mup_volume_pane_cp_ParamLimits

0xa66a,	// (0x0009796f) mup_volume_pane_cp

0x4d9a,	// (0x0009209f) mup2_visualizer_pane_g1_ParamLimits

0x4d9a,	// (0x0009209f) mup2_visualizer_pane_g1

0xc8cf,	// (0x00099bd4) mup2_visualizer_pane_g2_ParamLimits

0xc8cf,	// (0x00099bd4) mup2_visualizer_pane_g2

0x4db1,	// (0x000920b6) mup2_visualizer_pane_g3_ParamLimits

0x4db1,	// (0x000920b6) mup2_visualizer_pane_g3

0x0002,

0xf680,	// (0x0009c985) mup2_visualizer_pane_g_ParamLimits

0xf680,	// (0x0009c985) mup2_visualizer_pane_g

0xb6af,	// (0x000989b4) aid_size_cell_fmradio

0x4234,	// (0x00091539) aid_height_parent_landcape

0xac20,	// (0x00097f25) wml_content_pane_cp

0xac28,	// (0x00097f2d) wml_tabs_pane

0xac31,	// (0x00097f36) popup_wml_miniature_window

0xac39,	// (0x00097f3e) scroll_pane_cp021

0xac4d,	// (0x00097f52) wml_content_pane_comp8

0x9e2e,	// (0x00097133) bg_popup_sub_pane_cp05

0xc8ed,	// (0x00099bf2) popup_wml_miniature_window_g1

0xc8f5,	// (0x00099bfa) wml_miniature_view_pane

0x4dbd,	// (0x000920c2) aid_size_wml_view

0x4dc5,	// (0x000920ca) wml_miniature_view_pane_g1

0x4dce,	// (0x000920d3) wml_miniature_view_pane_g2

0x4dd7,	// (0x000920dc) wml_miniature_view_pane_g3

0x4ddf,	// (0x000920e4) wml_miniature_view_pane_g4

0x4de7,	// (0x000920ec) wml_miniature_view_pane_g5

0x4def,	// (0x000920f4) wml_miniature_view_pane_g6

0x4df7,	// (0x000920fc) wml_miniature_view_pane_g7

0x4dff,	// (0x00092104) wml_miniature_view_pane_g8

0x0007,

0xf687,	// (0x0009c98c) wml_miniature_view_pane_g

0xc8fd,	// (0x00099c02) background_graphic_ParamLimits

0xc8fd,	// (0x00099c02) background_graphic

0xc909,	// (0x00099c0e) wml_tabs_2_pane

0xc912,	// (0x00099c17) wml_tabs_3_pane_ParamLimits

0xc912,	// (0x00099c17) wml_tabs_3_pane

0xc924,	// (0x00099c29) wml_tabs_4_pane_ParamLimits

0xc924,	// (0x00099c29) wml_tabs_4_pane

0xc93a,	// (0x00099c3f) wml_tabs_5_pane_ParamLimits

0xc93a,	// (0x00099c3f) wml_tabs_5_pane

0xc954,	// (0x00099c59) wml_tabs_pane_g2_ParamLimits

0xc954,	// (0x00099c59) wml_tabs_pane_g2

0xc968,	// (0x00099c6d) wml_tabs_pane_g3_ParamLimits

0xc968,	// (0x00099c6d) wml_tabs_pane_g3

0x4e07,	// (0x0009210c) wml_tabs_2_active_pane_ParamLimits

0x4e07,	// (0x0009210c) wml_tabs_2_active_pane

0x4e1b,	// (0x00092120) wml_tabs_2_passive_pane_ParamLimits

0x4e1b,	// (0x00092120) wml_tabs_2_passive_pane

0x4e2f,	// (0x00092134) wml_tabs_3_active_pane_cp_ParamLimits

0x4e2f,	// (0x00092134) wml_tabs_3_active_pane_cp

0x4e44,	// (0x00092149) wml_tabs_3_passive_pane_ParamLimits

0x4e44,	// (0x00092149) wml_tabs_3_passive_pane

0x4e57,	// (0x0009215c) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e57,	// (0x0009215c) wml_tabs_3_passive_pane_cp

0x4e6e,	// (0x00092173) tabs_4_active_pane

0x4e76,	// (0x0009217b) tabs_4_passive_pane

0x4e80,	// (0x00092185) tabs_4_passive_pane_cp

0x4e88,	// (0x0009218d) tabs_4_passive_pane_cp2

0x3f48,	// (0x0009124d) aid_height_text

0x35c6,	// (0x000908cb) mup_volume_cont_pane_ParamLimits

0x35c6,	// (0x000908cb) mup_volume_cont_pane

0x0e48,	// (0x0008e14d) aid_size_cell_pinb

0x0e52,	// (0x0008e157) aid_size_list_pinb

0x4d70,	// (0x00092075) mup2_volume_cont_pane_ParamLimits

0x4d70,	// (0x00092075) mup2_volume_cont_pane

0xa656,	// (0x0009795b) mup2_volume_cont_pane_g1_ParamLimits

0xa656,	// (0x0009795b) mup2_volume_cont_pane_g1

0x0af0,	// (0x0008ddf5) aid_size_cell_touch_ParamLimits

0x0af0,	// (0x0008ddf5) aid_size_cell_touch

0x0d38,	// (0x0008e03d) touch_pane_ParamLimits

0x0d38,	// (0x0008e03d) touch_pane

0x99bc,	// (0x00096cc1) main_rss2_pane

0xc985,	// (0x00099c8a) listscroll_rss2_pane

0xc98e,	// (0x00099c93) rss2_navigation_pane

0xc996,	// (0x00099c9b) list_rss2_pane

0xb288,	// (0x0009858d) scroll_pane_cp22

0xc99e,	// (0x00099ca3) rss2_navigation_pane_g1

0xc9a7,	// (0x00099cac) rss2_navigation_pane_g2

0xc9af,	// (0x00099cb4) rss2_navigation_pane_g3

0x0002,

0xf698,	// (0x0009c99d) rss2_navigation_pane_g

0xc9b7,	// (0x00099cbc) rss2_navigation_pane_t1

0x4e92,	// (0x00092197) rss2_list_single_pane_ParamLimits

0x4e92,	// (0x00092197) rss2_list_single_pane

0xc9c5,	// (0x00099cca) rss2_list_single_pane_t2

0xc9d3,	// (0x00099cd8) rss2_list_single_pane_t3_ParamLimits

0xc9d3,	// (0x00099cd8) rss2_list_single_pane_t3

0xc9f0,	// (0x00099cf5) rss2_list_single_pane_t4

0x2e8b,	// (0x00090190) smil_status_pane_g1

0x9a0d,	// (0x00096d12) main_image2_pane_ParamLimits

0x9a0d,	// (0x00096d12) main_image2_pane

0x4948,	// (0x00091c4d) main_camera2_pane_g9_ParamLimits

0x4948,	// (0x00091c4d) main_camera2_pane_g9

0x4a64,	// (0x00091d69) main_camera2_pane_t5_ParamLimits

0x4a64,	// (0x00091d69) main_camera2_pane_t5

0xa62b,	// (0x00097930) main_camera2_pane_t6_ParamLimits

0xa62b,	// (0x00097930) main_camera2_pane_t6

0x4ea8,	// (0x000921ad) main_image2_pane_g1_ParamLimits

0x4ea8,	// (0x000921ad) main_image2_pane_g1

0x3c62,	// (0x00090f67) smil2_video_pane_ParamLimits

0x3c62,	// (0x00090f67) smil2_video_pane

0x0b30,	// (0x0008de35) aid_zoom_text_primary_cp

0x9a03,	// (0x00096d08) popup_preview_fixed_window

0xa4c7,	// (0x000977cc) im_reading_pane_g1

0x481a,	// (0x00091b1f) cams2_bc_adjust_pane_cp_ParamLimits

0x481a,	// (0x00091b1f) cams2_bc_adjust_pane_cp

0x4a8a,	// (0x00091d8f) cams2_bc_adjust_pane_ParamLimits

0x4a8a,	// (0x00091d8f) cams2_bc_adjust_pane

0xa68f,	// (0x00097994) cams2_bc_adjust_pane_g1

0xa697,	// (0x0009799c) cams2_slider_pane

0xa6a0,	// (0x000979a5) cams2_slider_pane_g1

0xa6a9,	// (0x000979ae) cams2_slider_pane_g2

0x0006,

0xf69f,	// (0x0009c9a4) cams2_slider_pane_g

0x0f42,	// (0x0008e247) calc_display_pane_ParamLimits

0x0f6a,	// (0x0008e26f) calc_paper_pane_ParamLimits

0x0f8d,	// (0x0008e292) grid_calc_pane_ParamLimits

0xa596,	// (0x0009789b) popup_clock_digital_window_t1_ParamLimits

0xb64c,	// (0x00098951) main_image_pane_t1

0x0f24,	// (0x0008e229) aid_size_cell_calc_ParamLimits

0x0f24,	// (0x0008e229) aid_size_cell_calc

0x427a,	// (0x0009157f) popup_blid_sat_info2_window_ParamLimits

0x427a,	// (0x0009157f) popup_blid_sat_info2_window

0xca06,	// (0x00099d0b) aid_size_cell_blid

0xca0e,	// (0x00099d13) bg_popup_window_pane_cp07

0xca31,	// (0x00099d36) grid_popup_blid_pane

0xca3b,	// (0x00099d40) heading_pane_cp05_ParamLimits

0xca3b,	// (0x00099d40) heading_pane_cp05

0xcb05,	// (0x00099e0a) cell_popup_blid_pane_ParamLimits

0xcb05,	// (0x00099e0a) cell_popup_blid_pane

0xcb2f,	// (0x00099e34) cell_popup_blid_pane_g1

0xcb37,	// (0x00099e3c) cell_popup_blid_pane_t1

0x4d40,	// (0x00092045) mup2_indicator_pane_ParamLimits

0x4d40,	// (0x00092045) mup2_indicator_pane

0xb3c2,	// (0x000986c7) mup2_visualizer_osc_pane

0xc8db,	// (0x00099be0) mup2_visualizer_spec_pane_ParamLimits

0xc8db,	// (0x00099be0) mup2_visualizer_spec_pane

0x4ebe,	// (0x000921c3) mup2_spec_half_pane

0x4ec7,	// (0x000921cc) mup2_spec_half_pane_cp

0x4ecf,	// (0x000921d4) mup2_spec_bar_pane_ParamLimits

0x4ecf,	// (0x000921d4) mup2_spec_bar_pane

0xc87c,	// (0x00099b81) mup2_spec_bar_pane_g1

0xc886,	// (0x00099b8b) mup2_spec_bar_pane_g2

0x0001,

0xf612,	// (0x0009c917) mup2_spec_bar_pane_g

0x4eef,	// (0x000921f4) mup2_osc_middle_pane

0xc898,	// (0x00099b9d) mup2_visualizer_osc_pane_g1

0x9a3b,	// (0x00096d40) popup_number_entry_window_t1_ParamLimits

0x9a4e,	// (0x00096d53) popup_number_entry_window_t2_ParamLimits

0x9a60,	// (0x00096d65) popup_number_entry_window_t3_ParamLimits

0x0d8a,	// (0x0008e08f) popup_number_entry_window_t5_ParamLimits

0x0d8a,	// (0x0008e08f) popup_number_entry_window_t5

0xf0cd,	// (0x0009c3d2) popup_number_entry_window_t_ParamLimits

0x9a72,	// (0x00096d77) text_title_cp2_ParamLimits

0xa5d5,	// (0x000978da) aid_hotspot_pointer_text2_pane

0xa5fb,	// (0x00097900) main_viewer_pane_g9_ParamLimits

0xa5fb,	// (0x00097900) main_viewer_pane_g9

0xadc2,	// (0x000980c7) cale_month_pane_t1_ParamLimits

0xade8,	// (0x000980ed) bg_cale_pane_ParamLimits

0xae00,	// (0x00098105) list_cale_pane_ParamLimits

0xae11,	// (0x00098116) listscroll_cale_day_pane_t1

0xae23,	// (0x00098128) scroll_pane_cp09_ParamLimits

0x35fc,	// (0x00090901) main_mup_eq_pane_t1_ParamLimits

0x35fc,	// (0x00090901) main_mup_eq_pane_t1

0x3618,	// (0x0009091d) main_mup_eq_pane_t2_ParamLimits

0x3618,	// (0x0009091d) main_mup_eq_pane_t2

0x3634,	// (0x00090939) main_mup_eq_pane_t3_ParamLimits

0x3634,	// (0x00090939) main_mup_eq_pane_t3

0x3652,	// (0x00090957) main_mup_eq_pane_t4_ParamLimits

0x3652,	// (0x00090957) main_mup_eq_pane_t4

0x3670,	// (0x00090975) main_mup_eq_pane_t5_ParamLimits

0x3670,	// (0x00090975) main_mup_eq_pane_t5

0x368e,	// (0x00090993) main_mup_eq_pane_t6_ParamLimits

0x368e,	// (0x00090993) main_mup_eq_pane_t6

0x36a4,	// (0x000909a9) main_mup_eq_pane_t7_ParamLimits

0x36a4,	// (0x000909a9) main_mup_eq_pane_t7

0x36ba,	// (0x000909bf) main_mup_eq_pane_t8_ParamLimits

0x36ba,	// (0x000909bf) main_mup_eq_pane_t8

0x36d0,	// (0x000909d5) main_mup_eq_pane_t9_ParamLimits

0x36d0,	// (0x000909d5) main_mup_eq_pane_t9

0x36ec,	// (0x000909f1) main_mup_eq_pane_t10_ParamLimits

0x36ec,	// (0x000909f1) main_mup_eq_pane_t10

0x0009,

0xf461,	// (0x0009c766) main_mup_eq_pane_t_ParamLimits

0xf461,	// (0x0009c766) main_mup_eq_pane_t

0x37c1,	// (0x00090ac6) mup_equalizer_pane_cp5_ParamLimits

0x37d9,	// (0x00090ade) mup_equalizer_pane_cp6_ParamLimits

0x37f1,	// (0x00090af6) mup_equalizer_pane_cp7_ParamLimits

0x99bc,	// (0x00096cc1) main_gallery_pane

0xc8a1,	// (0x00099ba6) smil2_volume_pane

0xc8a9,	// (0x00099bae) smil_status_volume_pane_g1_ParamLimits

0xc8bc,	// (0x00099bc1) smil_status_volume_pane_g2_ParamLimits

0xa607,	// (0x0009790c) smil_status_volume_pane_g3_ParamLimits

0xf617,	// (0x0009c91c) smil_status_volume_pane_g_ParamLimits

0xca0e,	// (0x00099d13) bg_popup_window_pane_cp07_ParamLimits

0xca1c,	// (0x00099d21) blid_firmament_pane

0x4ef8,	// (0x000921fd) aid_size_cell_gallery_ParamLimits

0x4ef8,	// (0x000921fd) aid_size_cell_gallery

0x4f0e,	// (0x00092213) grid_gallery_pane_ParamLimits

0x4f0e,	// (0x00092213) grid_gallery_pane

0x4f29,	// (0x0009222e) cell_gallery_pane_ParamLimits

0x4f29,	// (0x0009222e) cell_gallery_pane

0xcb45,	// (0x00099e4a) bg_cell_gallery_focus_pane_ParamLimits

0xcb45,	// (0x00099e4a) bg_cell_gallery_focus_pane

0xcb57,	// (0x00099e5c) cell_gallery_pane_g1_ParamLimits

0xcb57,	// (0x00099e5c) cell_gallery_pane_g1

0x4f74,	// (0x00092279) cell_gallery_pane_g2_ParamLimits

0x4f74,	// (0x00092279) cell_gallery_pane_g2

0x4f81,	// (0x00092286) cell_gallery_pane_g3_ParamLimits

0x4f81,	// (0x00092286) cell_gallery_pane_g3

0xcb63,	// (0x00099e68) cell_gallery_pane_g4_ParamLimits

0xcb63,	// (0x00099e68) cell_gallery_pane_g4

0x0003,

0xf6c5,	// (0x0009c9ca) cell_gallery_pane_g_ParamLimits

0xf6c5,	// (0x0009c9ca) cell_gallery_pane_g

0xcb6f,	// (0x00099e74) bg_cell_gallery_focus_pane_g1

0xcb77,	// (0x00099e7c) bg_cell_gallery_focus_pane_g2

0xcb7f,	// (0x00099e84) bg_cell_gallery_focus_pane_g3

0xcb87,	// (0x00099e8c) bg_cell_gallery_focus_pane_g4

0xcb8f,	// (0x00099e94) bg_cell_gallery_focus_pane_g5

0xcb97,	// (0x00099e9c) bg_cell_gallery_focus_pane_g6

0xcb9f,	// (0x00099ea4) bg_cell_gallery_focus_pane_g7

0xcba7,	// (0x00099eac) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ce,	// (0x0009c9d3) bg_cell_gallery_focus_pane_g

0xcbaf,	// (0x00099eb4) aid_firma_cardinal

0xcbc3,	// (0x00099ec8) blid_firmament_pane_t1

0xcbda,	// (0x00099edf) blid_firmament_pane_t2

0xcbf1,	// (0x00099ef6) blid_firmament_pane_t3

0xcc08,	// (0x00099f0d) blid_firmament_pane_t4

0x0003,

0xf6df,	// (0x0009c9e4) blid_firmament_pane_t

0xcc1f,	// (0x00099f24) blid_sat_info_pane

0xcc2f,	// (0x00099f34) blid_sat_info_pane_g1

0xcc2f,	// (0x00099f34) blid_sat_info_pane_g2

0x0001,

0xf6e8,	// (0x0009c9ed) blid_sat_info_pane_g

0xcc39,	// (0x00099f3e) blid_sat_info_pane_t1

0xcc47,	// (0x00099f4c) smil2_volume_content_pane

0xcc50,	// (0x00099f55) smil2_volume_pane_g1

0xcc58,	// (0x00099f5d) smil2_volume_content_pane_g1

0xcc61,	// (0x00099f66) smil2_volume_content_pane_g2

0xcc6a,	// (0x00099f6f) smil2_volume_content_pane_g3

0xcc73,	// (0x00099f78) smil2_volume_content_pane_g4

0xcc7c,	// (0x00099f81) smil2_volume_content_pane_g5

0xcc85,	// (0x00099f8a) smil2_volume_content_pane_g6

0xcc8e,	// (0x00099f93) smil2_volume_content_pane_g7

0xcc97,	// (0x00099f9c) smil2_volume_content_pane_g8

0xcca0,	// (0x00099fa5) smil2_volume_content_pane_g9

0xcca9,	// (0x00099fae) smil2_volume_content_pane_g10

0x0009,

0xf6ed,	// (0x0009c9f2) smil2_volume_content_pane_g

0x15b3,	// (0x0008e8b8) cale_week_day_heading_pane_t1_ParamLimits

0x15fd,	// (0x0008e902) cale_week_day_heading_pane_t2_ParamLimits

0x164c,	// (0x0008e951) cale_week_day_heading_pane_t3_ParamLimits

0x169b,	// (0x0008e9a0) cale_week_day_heading_pane_t4_ParamLimits

0x16ea,	// (0x0008e9ef) cale_week_day_heading_pane_t5_ParamLimits

0x173d,	// (0x0008ea42) cale_week_day_heading_pane_t6_ParamLimits

0x1794,	// (0x0008ea99) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0009c4d7) cale_week_day_heading_pane_t_ParamLimits

0xa35f,	// (0x00097664) bg_cale_side_pane_ParamLimits

0x17de,	// (0x0008eae3) cale_week_time_pane_t1_ParamLimits

0x1818,	// (0x0008eb1d) cale_week_time_pane_t2_ParamLimits

0x1852,	// (0x0008eb57) cale_week_time_pane_t3_ParamLimits

0x188c,	// (0x0008eb91) cale_week_time_pane_t4_ParamLimits

0x18c6,	// (0x0008ebcb) cale_week_time_pane_t5_ParamLimits

0x1900,	// (0x0008ec05) cale_week_time_pane_t6_ParamLimits

0x193a,	// (0x0008ec3f) cale_week_time_pane_t7_ParamLimits

0x1974,	// (0x0008ec79) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0009c4e6) cale_week_time_pane_t_ParamLimits

0x19b4,	// (0x0008ecb9) cell_cale_week_pane_g2_ParamLimits

0xa35f,	// (0x00097664) bg_cale_side_pane_cp01_ParamLimits

0x2c9a,	// (0x0008ff9f) cale_month_week_pane_t1_ParamLimits

0x2cb3,	// (0x0008ffb8) cale_month_week_pane_t2_ParamLimits

0x2ccc,	// (0x0008ffd1) cale_month_week_pane_t3_ParamLimits

0x2ce5,	// (0x0008ffea) cale_month_week_pane_t4_ParamLimits

0x2cfe,	// (0x00090003) cale_month_week_pane_t5_ParamLimits

0x2d17,	// (0x0009001c) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0009c5bf) cale_month_week_pane_t_ParamLimits

0xa516,	// (0x0009781b) cell_cale_month_pane_g1_ParamLimits

0x99bc,	// (0x00096cc1) main_cale_event_viewer_pane

0x99bc,	// (0x00096cc1) listscroll_cale_event_viewer_pane

0xccb2,	// (0x00099fb7) list_cale_ev_pane

0xccba,	// (0x00099fbf) scroll_pane_cp023

0x4f8e,	// (0x00092293) field_cale_ev_pane_ParamLimits

0x4f8e,	// (0x00092293) field_cale_ev_pane

0xccc6,	// (0x00099fcb) field_cale_ev_content_pane_ParamLimits

0xccc6,	// (0x00099fcb) field_cale_ev_content_pane

0xccd2,	// (0x00099fd7) field_cale_ev_pane_g1_ParamLimits

0xccd2,	// (0x00099fd7) field_cale_ev_pane_g1

0xccde,	// (0x00099fe3) field_cale_ev_pane_g2_ParamLimits

0xccde,	// (0x00099fe3) field_cale_ev_pane_g2

0xccf6,	// (0x00099ffb) field_cale_ev_pane_g3_ParamLimits

0xccf6,	// (0x00099ffb) field_cale_ev_pane_g3

0x0002,

0xf702,	// (0x0009ca07) field_cale_ev_pane_g_ParamLimits

0xf702,	// (0x0009ca07) field_cale_ev_pane_g

0xcd0e,	// (0x0009a013) field_cale_ev_pane_t1_ParamLimits

0xcd0e,	// (0x0009a013) field_cale_ev_pane_t1

0x4fb2,	// (0x000922b7) field_cale_ev_content_pane_t1_ParamLimits

0x4fb2,	// (0x000922b7) field_cale_ev_content_pane_t1

0x386d,	// (0x00090b72) bg_button_pane_cp01

0x1241,	// (0x0008e546) listscroll_cale_week_pane_ParamLimits

0x1253,	// (0x0008e558) popup_toolbar_window_cp01

0xa32b,	// (0x00097630) listscroll_cale_week_pane_t1_ParamLimits

0x1241,	// (0x0008e546) listscroll_cale_day_pane_ParamLimits

0x1253,	// (0x0008e558) popup_toolbar_window_cp02

0xae11,	// (0x00098116) listscroll_cale_day_pane_t1_ParamLimits

0x1241,	// (0x0008e546) main_cale_month_pane_ParamLimits

0x44fa,	// (0x000917ff) popup_toolbar_window_cp03_ParamLimits

0x44fa,	// (0x000917ff) popup_toolbar_window_cp03

0x3b20,	// (0x00090e25) main_image_pane_g2_ParamLimits

0x3b20,	// (0x00090e25) main_image_pane_g2

0x3b31,	// (0x00090e36) main_image_pane_g3_ParamLimits

0x3b31,	// (0x00090e36) main_image_pane_g3

0x0002,

0xf4f3,	// (0x0009c7f8) main_image_pane_g_ParamLimits

0xf4f3,	// (0x0009c7f8) main_image_pane_g

0xb64c,	// (0x00098951) main_image_pane_t1_ParamLimits

0x3b42,	// (0x00090e47) main_image_pane_t2_ParamLimits

0x3b42,	// (0x00090e47) main_image_pane_t2

0x3b54,	// (0x00090e59) main_image_pane_t3_ParamLimits

0x3b54,	// (0x00090e59) main_image_pane_t3

0x3b7c,	// (0x00090e81) main_image_pane_t4_ParamLimits

0x3b7c,	// (0x00090e81) main_image_pane_t4

0x0003,

0xf4fa,	// (0x0009c7ff) main_image_pane_t_ParamLimits

0xf4fa,	// (0x0009c7ff) main_image_pane_t

0x3b9c,	// (0x00090ea1) popup_image_details_window_cp01

0x3ba6,	// (0x00090eab) popup_toobar_trans_pane_cp01_ParamLimits

0x3ba6,	// (0x00090eab) popup_toobar_trans_pane_cp01

0x436d,	// (0x00091672) popup_image_details_window_ParamLimits

0x436d,	// (0x00091672) popup_image_details_window

0xc800,	// (0x00099b05) popup_image_focus_window

0x47d4,	// (0x00091ad9) camera2_autofocus_pane_ParamLimits

0x47d4,	// (0x00091ad9) camera2_autofocus_pane

0x99bc,	// (0x00096cc1) bg_popup_sub_pane_cp06

0xcd25,	// (0x0009a02a) popup_image_focus_window_g1

0xcd2d,	// (0x0009a032) popup_image_focus_window_g2

0xcd35,	// (0x0009a03a) popup_image_focus_window_g3

0xcd3d,	// (0x0009a042) popup_image_focus_window_g4

0x0003,

0xf709,	// (0x0009ca0e) popup_image_focus_window_g

0xcd45,	// (0x0009a04a) popup_image_focus_window_t1

0xcd53,	// (0x0009a058) popup_image_focus_window_t2

0xcd63,	// (0x0009a068) popup_image_focus_window_t3

0x0002,

0xf712,	// (0x0009ca17) popup_image_focus_window_t

0xcd71,	// (0x0009a076) camera2_autofocus_pane_g1

0x9a0d,	// (0x00096d12) bg_tb_trans_pane_cp01

0xcd7f,	// (0x0009a084) popup_image_details_window_g1

0xcd92,	// (0x0009a097) popup_image_details_window_g2

0x0002,

0xf724,	// (0x0009ca29) popup_image_details_window_g

0xcdbb,	// (0x0009a0c0) popup_image_details_window_t1

0xcdcd,	// (0x0009a0d2) popup_image_details_window_t2

0xcde6,	// (0x0009a0eb) popup_image_details_window_t3

0xcdfa,	// (0x0009a0ff) popup_image_details_window_t4

0xce15,	// (0x0009a11a) popup_image_details_window_t5

0x0004,

0xf72b,	// (0x0009ca30) popup_image_details_window_t

0xa142,	// (0x00097447) bg_calc_paper_pane_ParamLimits

0x99bc,	// (0x00096cc1) grid_highlight_pane_cp013

0xa156,	// (0x0009745b) list_calc_pane_ParamLimits

0xa168,	// (0x0009746d) scroll_pane_cp024

0xa170,	// (0x00097475) bg_calc_display_pane_ParamLimits

0x108d,	// (0x0008e392) calc_display_pane_t1_ParamLimits

0x109f,	// (0x0008e3a4) calc_display_pane_t2_ParamLimits

0xa17c,	// (0x00097481) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0009c459) calc_display_pane_t_ParamLimits

0x1168,	// (0x0008e46d) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0009c476) cell_calc_pane_g

0x1171,	// (0x0008e476) cell_calc_pane_t1

0xa1f3,	// (0x000974f8) grid_highlight_pane_cp02_ParamLimits

0xa209,	// (0x0009750e) toolbar_button_pane_cp01_ParamLimits

0xa209,	// (0x0009750e) toolbar_button_pane_cp01

0xb691,	// (0x00098996) temp_image_control_pane_ParamLimits

0xb691,	// (0x00098996) temp_image_control_pane

0x9a0d,	// (0x00096d12) main_mp3_pane

0xce2f,	// (0x0009a134) temp_image_control_pane_g1_ParamLimits

0xce2f,	// (0x0009a134) temp_image_control_pane_g1

0xce3d,	// (0x0009a142) temp_image_control_pane_g2_ParamLimits

0xce3d,	// (0x0009a142) temp_image_control_pane_g2

0xce4f,	// (0x0009a154) temp_image_control_pane_g3_ParamLimits

0xce4f,	// (0x0009a154) temp_image_control_pane_g3

0x5003,	// (0x00092308) temp_image_control_pane_g4_ParamLimits

0x5003,	// (0x00092308) temp_image_control_pane_g4

0x0003,

0xf736,	// (0x0009ca3b) temp_image_control_pane_g_ParamLimits

0xf736,	// (0x0009ca3b) temp_image_control_pane_g

0xce2f,	// (0x0009a134) main_mp3_pane_g1

0x5016,	// (0x0009231b) main_mp3_pane_g2

0x0007,

0xf73f,	// (0x0009ca44) main_mp3_pane_g

0xce92,	// (0x0009a197) main_mp3_pane_t1

0xa3d2,	// (0x000976d7) main_camera_pane_g8_ParamLimits

0xa3d2,	// (0x000976d7) main_camera_pane_g8

0x1cf1,	// (0x0008eff6) main_video_pane_g7_ParamLimits

0x1cf1,	// (0x0008eff6) main_video_pane_g7

0xa644,	// (0x00097949) main_camera2_pane_t7_ParamLimits

0xa644,	// (0x00097949) main_camera2_pane_t7

0xabe0,	// (0x00097ee5) scroll_pane_cp025_ParamLimits

0xabe0,	// (0x00097ee5) scroll_pane_cp025

0xabf4,	// (0x00097ef9) scroll_pane_cp026_ParamLimits

0xabf4,	// (0x00097ef9) scroll_pane_cp026

0xac03,	// (0x00097f08) wml_content_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_touch_calib_pane

0x50e8,	// (0x000923ed) main_touch_calib_pane_g1

0x50fa,	// (0x000923ff) main_touch_calib_pane_g2

0x510c,	// (0x00092411) main_touch_calib_pane_g3

0x511e,	// (0x00092423) main_touch_calib_pane_g4

0x0003,

0xf75d,	// (0x0009ca62) main_touch_calib_pane_g

0x5130,	// (0x00092435) main_touch_calib_pane_t1

0x514a,	// (0x0009244f) main_touch_calib_pane_t2

0x0004,

0xf766,	// (0x0009ca6b) main_touch_calib_pane_t

0xb303,	// (0x00098608) mup_progress_pane_cp02

0xb322,	// (0x00098627) navi_pane_g1

0xb384,	// (0x00098689) navi_pane_mp_t3

0x9a0d,	// (0x00096d12) main_mp3_pane_ParamLimits

0x453c,	// (0x00091841) navi_pane_ParamLimits

0xce2f,	// (0x0009a134) main_mp3_pane_g1_ParamLimits

0x5016,	// (0x0009231b) main_mp3_pane_g2_ParamLimits

0x5022,	// (0x00092327) main_mp3_pane_g3_ParamLimits

0x5022,	// (0x00092327) main_mp3_pane_g3

0x5030,	// (0x00092335) main_mp3_pane_g4_ParamLimits

0x5030,	// (0x00092335) main_mp3_pane_g4

0xce5f,	// (0x0009a164) main_mp3_pane_g5_ParamLimits

0xce5f,	// (0x0009a164) main_mp3_pane_g5

0xce6d,	// (0x0009a172) main_mp3_pane_g6_ParamLimits

0xce6d,	// (0x0009a172) main_mp3_pane_g6

0xce7a,	// (0x0009a17f) main_mp3_pane_g7_ParamLimits

0xce7a,	// (0x0009a17f) main_mp3_pane_g7

0xce86,	// (0x0009a18b) main_mp3_pane_g8_ParamLimits

0xce86,	// (0x0009a18b) main_mp3_pane_g8

0xf73f,	// (0x0009ca44) main_mp3_pane_g_ParamLimits

0x503c,	// (0x00092341) main_mp3_pane_t2

0x504a,	// (0x0009234f) main_mp3_pane_t3

0xcea0,	// (0x0009a1a5) main_mp3_pane_t4

0xceae,	// (0x0009a1b3) main_mp3_pane_t5

0x0005,

0xf750,	// (0x0009ca55) main_mp3_pane_t

0xcebc,	// (0x0009a1c1) mup_progress_pane_cp01

0x0b30,	// (0x0008de35) aid_zoom_text_secondary2

0xccb2,	// (0x00099fb7) list_cale_ev2_pane

0xccba,	// (0x00099fbf) scroll_pane_cp023_ParamLimits

0x51a4,	// (0x000924a9) field_cale_ev2_pane_ParamLimits

0x51a4,	// (0x000924a9) field_cale_ev2_pane

0x51c8,	// (0x000924cd) field_cale_ev2_pane_g1_ParamLimits

0x51c8,	// (0x000924cd) field_cale_ev2_pane_g1

0x51d4,	// (0x000924d9) field_cale_ev2_pane_g2_ParamLimits

0x51d4,	// (0x000924d9) field_cale_ev2_pane_g2

0x51ec,	// (0x000924f1) field_cale_ev2_pane_g3_ParamLimits

0x51ec,	// (0x000924f1) field_cale_ev2_pane_g3

0x0003,

0xf771,	// (0x0009ca76) field_cale_ev2_pane_g_ParamLimits

0xf771,	// (0x0009ca76) field_cale_ev2_pane_g

0xfe90,	// (0x0008d195) field_cale_ev2_pane_t1_ParamLimits

0xfe90,	// (0x0008d195) field_cale_ev2_pane_t1

0xfea7,	// (0x0008d1ac) field_cale_ev2_pane_t2_ParamLimits

0xfea7,	// (0x0008d1ac) field_cale_ev2_pane_t2

0x0001,

0xf77a,	// (0x0009ca7f) field_cale_ev2_pane_t_ParamLimits

0xf77a,	// (0x0009ca7f) field_cale_ev2_pane_t

0x39bd,	// (0x00090cc2) main_postcard_pane_g5_ParamLimits

0x39bd,	// (0x00090cc2) main_postcard_pane_g5

0x39d3,	// (0x00090cd8) main_postcard_pane_g6_ParamLimits

0x39d3,	// (0x00090cd8) main_postcard_pane_g6

0x1a9d,	// (0x0008eda2) camera2_autofocus_pane_cp_ParamLimits

0x1a9d,	// (0x0008eda2) camera2_autofocus_pane_cp

0x9a0d,	// (0x00096d12) main_mup3_pane

0x5224,	// (0x00092529) main_mup3_pane_g1_ParamLimits

0x5224,	// (0x00092529) main_mup3_pane_g1

0x5246,	// (0x0009254b) main_mup3_pane_g2_ParamLimits

0x5246,	// (0x0009254b) main_mup3_pane_g2

0x52c9,	// (0x000925ce) main_mup3_pane_g3_ParamLimits

0x52c9,	// (0x000925ce) main_mup3_pane_g3

0x5311,	// (0x00092616) main_mup3_pane_g4_ParamLimits

0x5311,	// (0x00092616) main_mup3_pane_g4

0x5357,	// (0x0009265c) main_mup3_pane_g5_ParamLimits

0x5357,	// (0x0009265c) main_mup3_pane_g5

0x539f,	// (0x000926a4) main_mup3_pane_g6_ParamLimits

0x539f,	// (0x000926a4) main_mup3_pane_g6

0xcec4,	// (0x0009a1c9) main_mup3_pane_g7_ParamLimits

0xcec4,	// (0x0009a1c9) main_mup3_pane_g7

0x0007,

0xf78a,	// (0x0009ca8f) main_mup3_pane_g_ParamLimits

0xf78a,	// (0x0009ca8f) main_mup3_pane_g

0x541f,	// (0x00092724) main_mup3_pane_t1_ParamLimits

0x541f,	// (0x00092724) main_mup3_pane_t1

0x548d,	// (0x00092792) main_mup3_pane_t2_ParamLimits

0x548d,	// (0x00092792) main_mup3_pane_t2

0x5563,	// (0x00092868) main_mup3_pane_t4_ParamLimits

0x5563,	// (0x00092868) main_mup3_pane_t4

0x55c1,	// (0x000928c6) main_mup3_pane_t5_ParamLimits

0x55c1,	// (0x000928c6) main_mup3_pane_t5

0x567b,	// (0x00092980) main_mup3_pane_t6_ParamLimits

0x567b,	// (0x00092980) main_mup3_pane_t6

0x0005,

0xf79b,	// (0x0009caa0) main_mup3_pane_t_ParamLimits

0xf79b,	// (0x0009caa0) main_mup3_pane_t

0x5733,	// (0x00092a38) mup3_progress_pane_ParamLimits

0x5733,	// (0x00092a38) mup3_progress_pane

0x57c5,	// (0x00092aca) popup_mup3_control_window_ParamLimits

0x57c5,	// (0x00092aca) popup_mup3_control_window

0xced2,	// (0x0009a1d7) popup_mup3_text_window

0x57fb,	// (0x00092b00) mup3_progress_pane_t1

0x5819,	// (0x00092b1e) mup3_progress_pane_t2

0xceda,	// (0x0009a1df) mup3_progress_pane_t3

0x0002,

0xf7a8,	// (0x0009caad) mup3_progress_pane_t

0xcef7,	// (0x0009a1fc) mup_progress_pane_cp03

0x99bc,	// (0x00096cc1) bg_tb_trans_pane_cp04

0x5837,	// (0x00092b3c) mup3_volume_pane

0x583f,	// (0x00092b44) popup_mup3_control_window_g1

0x5848,	// (0x00092b4d) mup3_volume_pane_g1

0x5851,	// (0x00092b56) mup3_volume_pane_g2

0x585a,	// (0x00092b5f) mup3_volume_pane_g3

0x0002,

0xf7af,	// (0x0009cab4) mup3_volume_pane_g

0x99bc,	// (0x00096cc1) bg_tb_trans_pane_cp03

0xcf07,	// (0x0009a20c) popup_mup3_text_window_g1

0xcf0f,	// (0x0009a214) popup_mup3_text_window_t1

0xa1ca,	// (0x000974cf) list_calc_item_pane_g1_ParamLimits

0xc97c,	// (0x00099c81) mup_volume_pane_cp_g1

0x5164,	// (0x00092469) main_touch_calib_pane_t3

0x5178,	// (0x0009247d) main_touch_calib_pane_t4

0x518e,	// (0x00092493) main_touch_calib_pane_t5

0x99c6,	// (0x00096ccb) aid_cell_size_toolbar2

0x99ce,	// (0x00096cd3) aid_popup3_width_pane

0x0b20,	// (0x0008de25) aid_zoom_text_msg_primary

0x1a72,	// (0x0008ed77) vorec_t7

0xa18e,	// (0x00097493) bg_calc_paper_pane_g1_ParamLimits

0xa19a,	// (0x0009749f) bg_calc_paper_pane_g2_ParamLimits

0xa1a6,	// (0x000974ab) bg_calc_paper_pane_g3_ParamLimits

0xa1b2,	// (0x000974b7) bg_calc_paper_pane_g4_ParamLimits

0xa1be,	// (0x000974c3) bg_calc_paper_pane_g5_ParamLimits

0x10ee,	// (0x0008e3f3) bg_calc_paper_pane_g6_ParamLimits

0x1101,	// (0x0008e406) bg_calc_paper_pane_g7_ParamLimits

0x1114,	// (0x0008e419) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0009c460) bg_calc_paper_pane_g_ParamLimits

0x1125,	// (0x0008e42a) calc_bg_paper_pane_g9_ParamLimits

0x1bff,	// (0x0008ef04) image_qvga_pane_ParamLimits

0x1bff,	// (0x0008ef04) image_qvga_pane

0xa089,	// (0x0009738e) bg_popup_sub_pane_cp04_ParamLimits

0xb5c8,	// (0x000988cd) popup_mup_playback_window_g1_ParamLimits

0xb5d4,	// (0x000988d9) popup_mup_playback_window_t1_ParamLimits

0xb5e9,	// (0x000988ee) popup_mup_playback_window_t2_ParamLimits

0xf4ee,	// (0x0009c7f3) popup_mup_playback_window_t_ParamLimits

0x4c58,	// (0x00091f5d) main_mup2_pane_g3_ParamLimits

0x4c58,	// (0x00091f5d) main_mup2_pane_g3

0x1eee,	// (0x0008f1f3) popup_toolbar_window_cp04

0xb9e4,	// (0x00098ce9) popup_call2_audio_second_window_g3_ParamLimits

0xb9e4,	// (0x00098ce9) popup_call2_audio_second_window_g3

0xbdee,	// (0x000990f3) popup_call2_audio_first_window_g4_ParamLimits

0xbdee,	// (0x000990f3) popup_call2_audio_first_window_g4

0xc46d,	// (0x00099772) popup_call2_audio_in_window_g4_ParamLimits

0xc46d,	// (0x00099772) popup_call2_audio_in_window_g4

0x3b02,	// (0x00090e07) aid_area_sk_bg_cut_ParamLimits

0x3b02,	// (0x00090e07) aid_area_sk_bg_cut

0xb5fe,	// (0x00098903) aid_area_sk_bg_cut_2_ParamLimits

0xb5fe,	// (0x00098903) aid_area_sk_bg_cut_2

0x4f64,	// (0x00092269) aid_placing_details_win

0x4f6c,	// (0x00092271) aid_placing_details_win_2

0xcd71,	// (0x0009a076) camera2_autofocus_pane_g1_ParamLimits

0x0cd1,	// (0x0008dfd6) popup_fixed_preview_cale_window_ParamLimits

0x0cd1,	// (0x0008dfd6) popup_fixed_preview_cale_window

0xb3d3,	// (0x000986d8) navi_slider_pane_g3

0xb3dc,	// (0x000986e1) navi_slider_pane_g4

0xb3e5,	// (0x000986ea) navi_slider_pane_g5

0xb3d3,	// (0x000986d8) navi_slider_pane_g6

0xa5bc,	// (0x000978c1) navi_slider_pane_g7

0xb508,	// (0x0009880d) mup_scale_pane_g3

0xb511,	// (0x00098816) mup_scale_pane_g4

0xb51a,	// (0x0009881f) mup_scale_pane_g5

0x3809,	// (0x00090b0e) mup_scale_pane_g6

0x3812,	// (0x00090b17) mup_scale_pane_g7

0xb3d3,	// (0x000986d8) cams2_slider_pane_g3

0xc9fe,	// (0x00099d03) cams2_slider_pane_g4

0xa6b2,	// (0x000979b7) cams2_slider_pane_g5

0xb3d3,	// (0x000986d8) cams2_slider_pane_g6

0xa6ba,	// (0x000979bf) cams2_slider_pane_g7

0xcc2f,	// (0x00099f34) camera2_autofocus_pane_cp_g1

0xc7d2,	// (0x00099ad7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7d2,	// (0x00099ad7) bg_popup_preview_window_pane_cp02

0xcf1d,	// (0x0009a222) list_fp_cale_pane_ParamLimits

0xcf1d,	// (0x0009a222) list_fp_cale_pane

0xcf29,	// (0x0009a22e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf29,	// (0x0009a22e) popup_fixed_preview_cale_window_t1

0x5863,	// (0x00092b68) popup_fixed_preview_cale_window_t2_ParamLimits

0x5863,	// (0x00092b68) popup_fixed_preview_cale_window_t2

0x5878,	// (0x00092b7d) popup_fixed_preview_cale_window_t3_ParamLimits

0x5878,	// (0x00092b7d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b6,	// (0x0009cabb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b6,	// (0x0009cabb) popup_fixed_preview_cale_window_t

0x588d,	// (0x00092b92) list_single_fp_cale_pane_ParamLimits

0x588d,	// (0x00092b92) list_single_fp_cale_pane

0xcf47,	// (0x0009a24c) list_single_fp_cale_pane_g1_ParamLimits

0xcf47,	// (0x0009a24c) list_single_fp_cale_pane_g1

0xcf53,	// (0x0009a258) list_single_fp_cale_pane_g2_ParamLimits

0xcf53,	// (0x0009a258) list_single_fp_cale_pane_g2

0x0002,

0xf7bd,	// (0x0009cac2) list_single_fp_cale_pane_g_ParamLimits

0xf7bd,	// (0x0009cac2) list_single_fp_cale_pane_g

0xcf6c,	// (0x0009a271) list_single_fp_cale_pane_t1_ParamLimits

0xcf6c,	// (0x0009a271) list_single_fp_cale_pane_t1

0xcf7e,	// (0x0009a283) list_single_fp_cale_pane_t2_ParamLimits

0xcf7e,	// (0x0009a283) list_single_fp_cale_pane_t2

0x0001,

0xf7c4,	// (0x0009cac9) list_single_fp_cale_pane_t_ParamLimits

0xf7c4,	// (0x0009cac9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99bc,	// (0x00096cc1) main_dialer_pane

0x58a2,	// (0x00092ba7) aid_cell_size_keypad

0x58ac,	// (0x00092bb1) dialer_ne_pane

0x58b6,	// (0x00092bbb) grid_dialer_command_1_pane

0x58be,	// (0x00092bc3) grid_dialer_command_2_pane

0x58c6,	// (0x00092bcb) grid_dialer_keypad_pane

0x58d8,	// (0x00092bdd) bg_popup_call_pane_cp06_ParamLimits

0x58d8,	// (0x00092bdd) bg_popup_call_pane_cp06

0x58e4,	// (0x00092be9) dialer_ne_clear_pane_ParamLimits

0x58e4,	// (0x00092be9) dialer_ne_clear_pane

0xcfb1,	// (0x0009a2b6) dialer_ne_pane_g1

0xcfb9,	// (0x0009a2be) dialer_ne_pane_t1_ParamLimits

0xcfb9,	// (0x0009a2be) dialer_ne_pane_t1

0x58f0,	// (0x00092bf5) dialer_ne_pane_t2_ParamLimits

0x58f0,	// (0x00092bf5) dialer_ne_pane_t2

0x591a,	// (0x00092c1f) dialer_ne_pane_t3_ParamLimits

0x591a,	// (0x00092c1f) dialer_ne_pane_t3

0x0002,

0xf7c9,	// (0x0009cace) dialer_ne_pane_t_ParamLimits

0xf7c9,	// (0x0009cace) dialer_ne_pane_t

0x594a,	// (0x00092c4f) dialer_ne_pane_t3_copy1_ParamLimits

0x594a,	// (0x00092c4f) dialer_ne_pane_t3_copy1

0x5979,	// (0x00092c7e) cell_dialer_keypad_pane_ParamLimits

0x5979,	// (0x00092c7e) cell_dialer_keypad_pane

0x5990,	// (0x00092c95) cell_dialer_command_1_pane_ParamLimits

0x5990,	// (0x00092c95) cell_dialer_command_1_pane

0x59a6,	// (0x00092cab) cell_dialer_command_2_pane_ParamLimits

0x59a6,	// (0x00092cab) cell_dialer_command_2_pane

0xcfcb,	// (0x0009a2d0) bg_button_pane_cp02_ParamLimits

0xcfcb,	// (0x0009a2d0) bg_button_pane_cp02

0x59b5,	// (0x00092cba) cell_dialer_keypad_pane_g1_ParamLimits

0x59b5,	// (0x00092cba) cell_dialer_keypad_pane_g1

0xcfcb,	// (0x0009a2d0) bg_button_pane_cp03_ParamLimits

0xcfcb,	// (0x0009a2d0) bg_button_pane_cp03

0x59ca,	// (0x00092ccf) cell_dialer_command_1_pane_g1_ParamLimits

0x59ca,	// (0x00092ccf) cell_dialer_command_1_pane_g1

0xcfd7,	// (0x0009a2dc) bg_button_pane_cp04

0x59de,	// (0x00092ce3) cell_dialer_command_2_pane_g1

0xb3c2,	// (0x000986c7) bg_button_pane_cp06

0xcfdf,	// (0x0009a2e4) dialer_ne_clear_pane_g1

0x32db,	// (0x000905e0) navi_pane_g2

0x3309,	// (0x0009060e) navi_pane_g3

0x0002,

0xf3f1,	// (0x0009c6f6) navi_pane_g

0x3334,	// (0x00090639) navi_pane_mv_g2

0x335b,	// (0x00090660) navi_pane_mv_g5

0x3363,	// (0x00090668) navi_pane_mv_t1

0xa170,	// (0x00097475) main_clock2_pane

0x5a29,	// (0x00092d2e) main_clock2_list_pane_ParamLimits

0x5a29,	// (0x00092d2e) main_clock2_list_pane

0x5a61,	// (0x00092d66) main_clock2_pane_t1_ParamLimits

0x5a61,	// (0x00092d66) main_clock2_pane_t1

0x5a9d,	// (0x00092da2) main_clock2_pane_t2_ParamLimits

0x5a9d,	// (0x00092da2) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0009cad5) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0009cad5) main_clock2_pane_t

0x5b3d,	// (0x00092e42) popup_clock_analogue_window_cp03_ParamLimits

0x5b3d,	// (0x00092e42) popup_clock_analogue_window_cp03

0x5b64,	// (0x00092e69) popup_clock_digital_window_cp02_ParamLimits

0x5b64,	// (0x00092e69) popup_clock_digital_window_cp02

0x5bdd,	// (0x00092ee2) main_clock2_list_single_pane_ParamLimits

0x5bdd,	// (0x00092ee2) main_clock2_list_single_pane

0xb3c2,	// (0x000986c7) list_highlight_pane_cp05

0xd003,	// (0x0009a308) main_clock2_list_single_pane_t1

0x1eee,	// (0x0008f1f3) popup_toolbar_window_cp04_ParamLimits

0x4fd3,	// (0x000922d8) camera2_autofocus_pane_g2_ParamLimits

0x4fd3,	// (0x000922d8) camera2_autofocus_pane_g2

0x4fdf,	// (0x000922e4) camera2_autofocus_pane_g3_ParamLimits

0x4fdf,	// (0x000922e4) camera2_autofocus_pane_g3

0x4feb,	// (0x000922f0) camera2_autofocus_pane_g4_ParamLimits

0x4feb,	// (0x000922f0) camera2_autofocus_pane_g4

0x4ff7,	// (0x000922fc) camera2_autofocus_pane_g5_ParamLimits

0x4ff7,	// (0x000922fc) camera2_autofocus_pane_g5

0x0004,

0xf719,	// (0x0009ca1e) camera2_autofocus_pane_g_ParamLimits

0xf719,	// (0x0009ca1e) camera2_autofocus_pane_g

0x5204,	// (0x00092509) camera2_autofocus_pane_cp_g2

0x520c,	// (0x00092511) camera2_autofocus_pane_cp_g3

0x5214,	// (0x00092519) camera2_autofocus_pane_cp_g4

0x521c,	// (0x00092521) camera2_autofocus_pane_cp_g5

0x0004,

0xf77f,	// (0x0009ca84) camera2_autofocus_pane_cp_g

0x58d0,	// (0x00092bd5) popup_dialer_spcha_window

0x99bc,	// (0x00096cc1) bg_popup_sub_pane_cp07

0xd011,	// (0x0009a316) list_spcha_pane

0xd019,	// (0x0009a31e) list_single_spcha_pane_ParamLimits

0xd019,	// (0x0009a31e) list_single_spcha_pane

0x99bc,	// (0x00096cc1) list_highlight_pane_cp06

0xd02a,	// (0x0009a32f) list_single_spcha_pane_t1

0xc217,	// (0x0009951c) popup_call2_audio_out_window_g4_ParamLimits

0xc217,	// (0x0009951c) popup_call2_audio_out_window_g4

0x99bc,	// (0x00096cc1) main_imed2_pane

0xc80a,	// (0x00099b0f) popup_imed_adjust2_window

0x4385,	// (0x0009168a) popup_imed_trans_window_ParamLimits

0x4385,	// (0x0009168a) popup_imed_trans_window

0xca67,	// (0x00099d6c) popup_blid_sat_info2_window_t1

0xca75,	// (0x00099d7a) popup_blid_sat_info2_window_t2

0x000a,

0xf6ae,	// (0x0009c9b3) popup_blid_sat_info2_window_t

0x5c93,	// (0x00092f98) aid_size_cell_colour_35

0x5cb3,	// (0x00092fb8) aid_size_cell_colour_112

0x5cd3,	// (0x00092fd8) aid_size_cell_effect

0xc7de,	// (0x00099ae3) bg_tb_trans_pane_cp02

0xaf22,	// (0x00098227) heading_imed_pane

0x5cf3,	// (0x00092ff8) listscroll_imed_pane

0xd038,	// (0x0009a33d) heading_imed_pane_g1

0xd040,	// (0x0009a345) heading_imed_pane_t1

0xd04e,	// (0x0009a353) grid_imed_colour_35_pane_ParamLimits

0xd04e,	// (0x0009a353) grid_imed_colour_35_pane

0x5cff,	// (0x00093004) grid_imed_effect_pane

0xd06a,	// (0x0009a36f) list_imed_aspect_pane

0x5d14,	// (0x00093019) scroll_pane_cp027_ParamLimits

0x5d14,	// (0x00093019) scroll_pane_cp027

0x5d25,	// (0x0009302a) cell_imed_effect_pane_ParamLimits

0x5d25,	// (0x0009302a) cell_imed_effect_pane

0xd072,	// (0x0009a377) cell_imed_colour_pane_ParamLimits

0xd072,	// (0x0009a377) cell_imed_colour_pane

0xd0bc,	// (0x0009a3c1) cell_imed_colour_pane_g1_ParamLimits

0xd0bc,	// (0x0009a3c1) cell_imed_colour_pane_g1

0xd0cd,	// (0x0009a3d2) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0cd,	// (0x0009a3d2) hgihlgiht_grid_pane_cp016

0x5d50,	// (0x00093055) cell_imed_effect_pane_g1

0x5d58,	// (0x0009305d) grid_highlight_pane_cp017

0xd0de,	// (0x0009a3e3) list_imed_single_pane_ParamLimits

0xd0de,	// (0x0009a3e3) list_imed_single_pane

0x99bc,	// (0x00096cc1) list_highlight_pane_cp07

0xd0f2,	// (0x0009a3f7) list_imed_aspect_pane_comp1_t1

0xc7de,	// (0x00099ae3) bg_tb_trans_pane_cp05

0xd114,	// (0x0009a419) popup_imed_adjust2_window_g1

0xd13b,	// (0x0009a440) popup_imed_adjust2_window_t1

0xd153,	// (0x0009a458) slider_imed_adjust_pane

0xd167,	// (0x0009a46c) slider_imed_adjust_pane_g1

0xd177,	// (0x0009a47c) slider_imed_adjust_pane_g2

0xd187,	// (0x0009a48c) slider_imed_adjust_pane_g3

0xd198,	// (0x0009a49d) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0009caf2) slider_imed_adjust_pane_g

0x5d61,	// (0x00093066) aid_size_cell_clipart2

0x5d6d,	// (0x00093072) grid_imed_clipart_pane

0xd1a9,	// (0x0009a4ae) scroll_pane_cp031

0x5d77,	// (0x0009307c) cell_imed_clipart_pane_ParamLimits

0x5d77,	// (0x0009307c) cell_imed_clipart_pane

0x5d94,	// (0x00093099) cell_imed_clipart_pane_g1

0x99bc,	// (0x00096cc1) grid_highlight_pane_cp014

0x5a3e,	// (0x00092d43) main_clock2_pane_g1_ParamLimits

0x5a3e,	// (0x00092d43) main_clock2_pane_g1

0x5b84,	// (0x00092e89) aid_call2_pane_cp10

0x5b96,	// (0x00092e9b) aid_call_pane_cp10

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g1

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g2

0x5ba8,	// (0x00092ead) popup_clock_analogue_window_cp10_g3

0x5ba8,	// (0x00092ead) popup_clock_analogue_window_cp10_g4

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0009cae0) popup_clock_analogue_window_cp10_g

0x5bbe,	// (0x00092ec3) popup_clock_analogue_window_cp10_t1

0x5bef,	// (0x00092ef4) clock_digital_number_pane_cp10_ParamLimits

0x5bef,	// (0x00092ef4) clock_digital_number_pane_cp10

0x5c09,	// (0x00092f0e) clock_digital_number_pane_cp11_ParamLimits

0x5c09,	// (0x00092f0e) clock_digital_number_pane_cp11

0x5c23,	// (0x00092f28) clock_digital_number_pane_cp12_ParamLimits

0x5c23,	// (0x00092f28) clock_digital_number_pane_cp12

0x5c3d,	// (0x00092f42) clock_digital_number_pane_cp13_ParamLimits

0x5c3d,	// (0x00092f42) clock_digital_number_pane_cp13

0x5c57,	// (0x00092f5c) clock_digital_separator_pane_cp10_ParamLimits

0x5c57,	// (0x00092f5c) clock_digital_separator_pane_cp10

0x5c71,	// (0x00092f76) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c71,	// (0x00092f76) popup_clock_digital_window_cp02_t1

0xa081,	// (0x00097386) clock_digital_number_pane_cp10_g1

0xa081,	// (0x00097386) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0009cafb) clock_digital_number_pane_cp10_g

0xa081,	// (0x00097386) clock_digital_separator_pane_cp10_g1

0xa081,	// (0x00097386) clock_digital_separator_pane_g2_cp10

0xb392,	// (0x00098697) navi_pane_vded_g4

0xb39b,	// (0x000986a0) navi_pane_vded_g5

0xb3a4,	// (0x000986a9) navi_pane_vded_t1

0x99bc,	// (0x00096cc1) main_vded_pane

0x5d9d,	// (0x000930a2) main_vded_pane_g1

0x5da9,	// (0x000930ae) main_vded_pane_g2

0x5db5,	// (0x000930ba) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0009cb00) main_vded_pane_g

0x5dc1,	// (0x000930c6) main_vded_pane_t1

0x5dcf,	// (0x000930d4) main_vded_pane_t2

0x0001,

0xf802,	// (0x0009cb07) main_vded_pane_t

0x5ddd,	// (0x000930e2) vded_slider_pane

0x5de7,	// (0x000930ec) vded_video_pane

0xd1b1,	// (0x0009a4b6) vded_video_pane_g1

0x5df1,	// (0x000930f6) vded_video_pane_g2

0xcc2f,	// (0x00099f34) vded_video_pane_g3

0x0002,

0xf807,	// (0x0009cb0c) vded_video_pane_g

0xd1bb,	// (0x0009a4c0) vded_slider_pane_g1

0xc97c,	// (0x00099c81) vded_slider_pane_g2

0xd1c4,	// (0x0009a4c9) vded_slider_pane_g3

0xd1cd,	// (0x0009a4d2) vded_slider_pane_g4

0xd1d6,	// (0x0009a4db) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0009cb13) vded_slider_pane_g

0x57af,	// (0x00092ab4) mup3_rocker_pane_ParamLimits

0x57af,	// (0x00092ab4) mup3_rocker_pane

0x5dfa,	// (0x000930ff) mup3_control_keys_pane_g1

0x5e02,	// (0x00093107) mup3_control_keys_pane_g2

0x5e0a,	// (0x0009310f) mup3_control_keys_pane_g3

0x5e12,	// (0x00093117) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0009cb1e) mup3_control_keys_pane_g

0x0d08,	// (0x0008e00d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d08,	// (0x0008e00d) popup_toolbar2_fixed_window_cp01

0x57e5,	// (0x00092aea) popup_toolbar2_fixed_window_cp02_ParamLimits

0x57e5,	// (0x00092aea) popup_toolbar2_fixed_window_cp02

0xbb56,	// (0x00098e5b) popup_call2_audio_second_window_t4_ParamLimits

0xbb56,	// (0x00098e5b) popup_call2_audio_second_window_t4

0xc084,	// (0x00099389) popup_call2_audio_first_window_t6_ParamLimits

0xc084,	// (0x00099389) popup_call2_audio_first_window_t6

0xc31a,	// (0x0009961f) popup_call2_audio_out_window_t6_ParamLimits

0xc31a,	// (0x0009961f) popup_call2_audio_out_window_t6

0x99bc,	// (0x00096cc1) main_vitu_pane

0x5e22,	// (0x00093127) aid_size_cell_itu_ParamLimits

0x5e22,	// (0x00093127) aid_size_cell_itu

0x9a0d,	// (0x00096d12) bg_popup_window_pane_cp08_ParamLimits

0x9a0d,	// (0x00096d12) bg_popup_window_pane_cp08

0x5e38,	// (0x0009313d) field_vitu_entry_pane_ParamLimits

0x5e38,	// (0x0009313d) field_vitu_entry_pane

0x5e4f,	// (0x00093154) grid_vitu_function_pane_ParamLimits

0x5e4f,	// (0x00093154) grid_vitu_function_pane

0x5e6a,	// (0x0009316f) grid_vitu_itu_pane_ParamLimits

0x5e6a,	// (0x0009316f) grid_vitu_itu_pane

0x5e88,	// (0x0009318d) cell_vitu_itu_pane_ParamLimits

0x5e88,	// (0x0009318d) cell_vitu_itu_pane

0x5eae,	// (0x000931b3) cell_vitu_function_pane_ParamLimits

0x5eae,	// (0x000931b3) cell_vitu_function_pane

0x9a0d,	// (0x00096d12) bg_popup_sub_pane_cp08_ParamLimits

0x9a0d,	// (0x00096d12) bg_popup_sub_pane_cp08

0x5ec9,	// (0x000931ce) field_vitu_entry_pane_t1_ParamLimits

0x5ec9,	// (0x000931ce) field_vitu_entry_pane_t1

0xd1f7,	// (0x0009a4fc) field_vitu_entry_pane_t2_ParamLimits

0xd1f7,	// (0x0009a4fc) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0009cb2c) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0009cb2c) field_vitu_entry_pane_t

0xd214,	// (0x0009a519) bg_button_pane_cp05_ParamLimits

0xd214,	// (0x0009a519) bg_button_pane_cp05

0x5ee9,	// (0x000931ee) cell_vitu_itu_pane_g1

0x5f01,	// (0x00093206) cell_vitu_itu_pane_t1_ParamLimits

0x5f01,	// (0x00093206) cell_vitu_itu_pane_t1

0x5f13,	// (0x00093218) cell_vitu_itu_pane_t2_ParamLimits

0x5f13,	// (0x00093218) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0009cb31) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0009cb31) cell_vitu_itu_pane_t

0xd222,	// (0x0009a527) bg_button_pane_cp07

0x5f48,	// (0x0009324d) cell_vitu_function_pane_g1

0xa110,	// (0x00097415) main_calc_pane_g1

0x0b14,	// (0x0008de19) aid_visual_content_pane

0x99bc,	// (0x00096cc1) main_vradio_pane

0x5f51,	// (0x00093256) main_vradio_pane_g1_ParamLimits

0x5f51,	// (0x00093256) main_vradio_pane_g1

0xd22c,	// (0x0009a531) main_vradio_pane_g2_ParamLimits

0xd22c,	// (0x0009a531) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0009cb38) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0009cb38) main_vradio_pane_g

0x5f68,	// (0x0009326d) main_vradio_pane_t1_ParamLimits

0x5f68,	// (0x0009326d) main_vradio_pane_t1

0x5f7d,	// (0x00093282) main_vradio_pane_t2_ParamLimits

0x5f7d,	// (0x00093282) main_vradio_pane_t2

0xd239,	// (0x0009a53e) main_vradio_pane_t3_ParamLimits

0xd239,	// (0x0009a53e) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0009cb3d) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0009cb3d) main_vradio_pane_t

0x5f92,	// (0x00093297) vradio_rocker_control_pane_ParamLimits

0x5f92,	// (0x00093297) vradio_rocker_control_pane

0x5fa4,	// (0x000932a9) vradio_station_info_pane_ParamLimits

0x5fa4,	// (0x000932a9) vradio_station_info_pane

0xd24d,	// (0x0009a552) vradio_frequency_info_pane_ParamLimits

0xd24d,	// (0x0009a552) vradio_frequency_info_pane

0xcc2f,	// (0x00099f34) vradio_station_info_pane_g1

0xd25c,	// (0x0009a561) vradio_station_info_pane_t1_ParamLimits

0xd25c,	// (0x0009a561) vradio_station_info_pane_t1

0xd27e,	// (0x0009a583) vradio_station_info_pane_t2_ParamLimits

0xd27e,	// (0x0009a583) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0009cb44) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0009cb44) vradio_station_info_pane_t

0xd290,	// (0x0009a595) vradio_tuning_pane

0xd298,	// (0x0009a59d) vradio_rocker_control_pane_g1

0xd2a0,	// (0x0009a5a5) vradio_rocker_control_pane_g2

0xd2a8,	// (0x0009a5ad) vradio_rocker_control_pane_g3

0xd2b0,	// (0x0009a5b5) vradio_rocker_control_pane_g4

0xd2b8,	// (0x0009a5bd) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0009cb49) vradio_rocker_control_pane_g

0x5fb4,	// (0x000932b9) vradio_frequency_info_pane_g1

0xd2c0,	// (0x0009a5c5) vradio_frequency_info_pane_t1_ParamLimits

0xd2c0,	// (0x0009a5c5) vradio_frequency_info_pane_t1

0x5fbe,	// (0x000932c3) vradio_tuning_pane_g1

0x5fc9,	// (0x000932ce) vradio_tuning_pane_t1

0x99da,	// (0x00096cdf) area_side_right_pane_ParamLimits

0x99da,	// (0x00096cdf) area_side_right_pane

0xc799,	// (0x00099a9e) status_small_pane_g1

0xc7a1,	// (0x00099aa6) status_small_pane_g2

0xc7aa,	// (0x00099aaf) status_small_pane_g3

0xc7b3,	// (0x00099ab8) status_small_pane_g4

0x0003,

0xf604,	// (0x0009c909) status_small_pane_g

0xc7bc,	// (0x00099ac1) status_small_pane_t1

0x99bc,	// (0x00096cc1) main_video3_pane

0xd2d4,	// (0x0009a5d9) cams_zoom_vslider_pane

0xd2dc,	// (0x0009a5e1) image3_wide_pane_ParamLimits

0xd2dc,	// (0x0009a5e1) image3_wide_pane

0xd2f6,	// (0x0009a5fb) image3_wide_small_pane

0xd302,	// (0x0009a607) main_video3_pane_g1_ParamLimits

0xd302,	// (0x0009a607) main_video3_pane_g1

0xd31e,	// (0x0009a623) main_video3_pane_g2_ParamLimits

0xd31e,	// (0x0009a623) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0009cb54) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0009cb54) main_video3_pane_g

0xd33a,	// (0x0009a63f) main_video3_pane_t1_ParamLimits

0xd33a,	// (0x0009a63f) main_video3_pane_t1

0xd365,	// (0x0009a66a) main_video3_pane_t2_ParamLimits

0xd365,	// (0x0009a66a) main_video3_pane_t2

0xd392,	// (0x0009a697) main_video3_pane_t3_ParamLimits

0xd392,	// (0x0009a697) main_video3_pane_t3

0x0002,

0xf854,	// (0x0009cb59) main_video3_pane_t_ParamLimits

0xf854,	// (0x0009cb59) main_video3_pane_t

0xd3bf,	// (0x0009a6c4) cams_zoom_vslider_pane_g1

0xd3c8,	// (0x0009a6cd) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0009cb60) cams_zoom_vslider_pane_g

0xd3d0,	// (0x0009a6d5) small_slider_vertical_pane

0xcc2f,	// (0x00099f34) small_slider_vertical_pane_g1

0xcc2f,	// (0x00099f34) small_slider_vertical_pane_g2

0xd3d8,	// (0x0009a6dd) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0009cb65) small_slider_vertical_pane_g

0x99bc,	// (0x00096cc1) main_hwr_training_pane

0xd3e1,	// (0x0009a6e6) hwr_training_instruct_pane_ParamLimits

0xd3e1,	// (0x0009a6e6) hwr_training_instruct_pane

0x5fd8,	// (0x000932dd) hwr_training_navi_pane_ParamLimits

0x5fd8,	// (0x000932dd) hwr_training_navi_pane

0x5ff7,	// (0x000932fc) hwr_training_write_pane_ParamLimits

0x5ff7,	// (0x000932fc) hwr_training_write_pane

0x99bc,	// (0x00096cc1) bg_frame_shadow_pane

0xd418,	// (0x0009a71d) hwr_training_write_pane_g1

0xd420,	// (0x0009a725) hwr_training_write_pane_g2

0xd428,	// (0x0009a72d) hwr_training_write_pane_g3

0xd430,	// (0x0009a735) hwr_training_write_pane_g4

0xd438,	// (0x0009a73d) hwr_training_write_pane_g5

0xd440,	// (0x0009a745) hwr_training_write_pane_g6

0xd448,	// (0x0009a74d) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0009cb6c) hwr_training_write_pane_g

0xa6cf,	// (0x000979d4) hwr_training_navi_pane_g1_ParamLimits

0xa6cf,	// (0x000979d4) hwr_training_navi_pane_g1

0xa6e1,	// (0x000979e6) hwr_training_navi_pane_g2_ParamLimits

0xa6e1,	// (0x000979e6) hwr_training_navi_pane_g2

0xa6f3,	// (0x000979f8) hwr_training_navi_pane_g3_ParamLimits

0xa6f3,	// (0x000979f8) hwr_training_navi_pane_g3

0xa703,	// (0x00097a08) hwr_training_navi_pane_g4_ParamLimits

0xa703,	// (0x00097a08) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0009cb7b) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0009cb7b) hwr_training_navi_pane_g

0xa710,	// (0x00097a15) hwr_training_navi_pane_t1

0x603f,	// (0x00093344) list_single_hwr_training_instruct_pane_ParamLimits

0x603f,	// (0x00093344) list_single_hwr_training_instruct_pane

0xd450,	// (0x0009a755) list_single_hwr_training_instruct_pane_t1

0xcb6f,	// (0x00099e74) bg_frame_shadow_pane_g1

0xd45f,	// (0x0009a764) bg_frame_shadow_pane_g2

0xd467,	// (0x0009a76c) bg_frame_shadow_pane_g3

0xd46f,	// (0x0009a774) bg_frame_shadow_pane_g4

0xd477,	// (0x0009a77c) bg_frame_shadow_pane_g5

0xd47f,	// (0x0009a784) bg_frame_shadow_pane_g6

0xd487,	// (0x0009a78c) bg_frame_shadow_pane_g7

0xa269,	// (0x0009756e) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0009cb86) bg_frame_shadow_pane_g

0x99bc,	// (0x00096cc1) main_video_tele_dialer_pane

0x6054,	// (0x00093359) aid_size_cell_video_keypad_ParamLimits

0x6054,	// (0x00093359) aid_size_cell_video_keypad

0x606e,	// (0x00093373) grid_video_dialer_keypad_pane_ParamLimits

0x606e,	// (0x00093373) grid_video_dialer_keypad_pane

0x60ba,	// (0x000933bf) video_down_pane_cp_ParamLimits

0x60ba,	// (0x000933bf) video_down_pane_cp

0x60ea,	// (0x000933ef) cell_video_dialer_keypad_pane_ParamLimits

0x60ea,	// (0x000933ef) cell_video_dialer_keypad_pane

0xd48f,	// (0x0009a794) bg_button_pane_cp08_ParamLimits

0xd48f,	// (0x0009a794) bg_button_pane_cp08

0x610e,	// (0x00093413) cell_video_dialer_keypad_pane_g1_ParamLimits

0x610e,	// (0x00093413) cell_video_dialer_keypad_pane_g1

0x5799,	// (0x00092a9e) mup3_rocker2_pane_ParamLimits

0x5799,	// (0x00092a9e) mup3_rocker2_pane

0xcc2f,	// (0x00099f34) mup3_rocker2_pane_g1

0x4252,	// (0x00091557) main_dialer2_pane

0x99bc,	// (0x00096cc1) main_mp4_pane

0xa726,	// (0x00097a2b) main_mp4_pane_g1_ParamLimits

0xa726,	// (0x00097a2b) main_mp4_pane_g1

0xa726,	// (0x00097a2b) main_mp4_pane_g2_ParamLimits

0xa726,	// (0x00097a2b) main_mp4_pane_g2

0x6149,	// (0x0009344e) main_mp4_pane_g3_ParamLimits

0x6149,	// (0x0009344e) main_mp4_pane_g3

0xa734,	// (0x00097a39) main_mp4_pane_g4_ParamLimits

0xa734,	// (0x00097a39) main_mp4_pane_g4

0xa75c,	// (0x00097a61) main_mp4_pane_g5_ParamLimits

0xa75c,	// (0x00097a61) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0009cba6) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0009cba6) main_mp4_pane_g

0xa7ac,	// (0x00097ab1) main_mp4_pane_t1_ParamLimits

0xa7ac,	// (0x00097ab1) main_mp4_pane_t1

0xa808,	// (0x00097b0d) main_mp4_pane_t2_ParamLimits

0xa808,	// (0x00097b0d) main_mp4_pane_t2

0xd49b,	// (0x0009a7a0) main_mp4_pane_t3_ParamLimits

0xd49b,	// (0x0009a7a0) main_mp4_pane_t3

0xa85a,	// (0x00097b5f) main_mp4_pane_t4_ParamLimits

0xa85a,	// (0x00097b5f) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0009cbb3) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0009cbb3) main_mp4_pane_t

0xa89a,	// (0x00097b9f) mp4_progress_pane_ParamLimits

0xa89a,	// (0x00097b9f) mp4_progress_pane

0xa8e4,	// (0x00097be9) mp4_rocker_pane_ParamLimits

0xa8e4,	// (0x00097be9) mp4_rocker_pane

0xd4c3,	// (0x0009a7c8) mp4_progress_pane_t1

0xd4dc,	// (0x0009a7e1) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0009cbbc) mp4_progress_pane_t

0xd4f5,	// (0x0009a7fa) mup_progress_pane_cp04

0xcc2f,	// (0x00099f34) mp4_rocker_pane_g1

0x6193,	// (0x00093498) aid_cell_size_keypad2_ParamLimits

0x6193,	// (0x00093498) aid_cell_size_keypad2

0x61a9,	// (0x000934ae) dialer2_ne_pane_ParamLimits

0x61a9,	// (0x000934ae) dialer2_ne_pane

0x61c1,	// (0x000934c6) grid_dialer2_keypad_pane_ParamLimits

0x61c1,	// (0x000934c6) grid_dialer2_keypad_pane

0xca0e,	// (0x00099d13) bg_popup_call_pane_cp07_ParamLimits

0xca0e,	// (0x00099d13) bg_popup_call_pane_cp07

0x61dd,	// (0x000934e2) dialer2_ne_pane_t1_ParamLimits

0x61dd,	// (0x000934e2) dialer2_ne_pane_t1

0x6218,	// (0x0009351d) cell_dialer2_keypad_pane_ParamLimits

0x6218,	// (0x0009351d) cell_dialer2_keypad_pane

0xd513,	// (0x0009a818) bg_button_pane_pane_cp04_ParamLimits

0xd513,	// (0x0009a818) bg_button_pane_pane_cp04

0x623c,	// (0x00093541) cell_dialer2_keypad_pane_g1_ParamLimits

0x623c,	// (0x00093541) cell_dialer2_keypad_pane_g1

0x1dd5,	// (0x0008f0da) aid_placing_vt_set_content_ParamLimits

0x1dd5,	// (0x0008f0da) aid_placing_vt_set_content

0x1df9,	// (0x0008f0fe) aid_placing_vt_set_title_ParamLimits

0x1df9,	// (0x0008f0fe) aid_placing_vt_set_title

0x99bc,	// (0x00096cc1) main_image3_pane

0x6302,	// (0x00093607) area_side_right_pane_cp01_ParamLimits

0x6302,	// (0x00093607) area_side_right_pane_cp01

0xa726,	// (0x00097a2b) main_image3_pane_g1_ParamLimits

0xa726,	// (0x00097a2b) main_image3_pane_g1

0x631b,	// (0x00093620) main_image3_pane_g2_ParamLimits

0x631b,	// (0x00093620) main_image3_pane_g2

0x6343,	// (0x00093648) main_image3_pane_g3_ParamLimits

0x6343,	// (0x00093648) main_image3_pane_g3

0x636d,	// (0x00093672) main_image3_pane_g4_ParamLimits

0x636d,	// (0x00093672) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0009cbcb) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0009cbcb) main_image3_pane_g

0x6397,	// (0x0009369c) main_image3_pane_t1_ParamLimits

0x6397,	// (0x0009369c) main_image3_pane_t1

0x63ef,	// (0x000936f4) main_image3_pane_t2_ParamLimits

0x63ef,	// (0x000936f4) main_image3_pane_t2

0x6441,	// (0x00093746) main_image3_pane_t3_ParamLimits

0x6441,	// (0x00093746) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0009cbd4) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0009cbd4) main_image3_pane_t

0x9a0d,	// (0x00096d12) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a0d,	// (0x00096d12) grid_sctrl_middle_pane_cp01

0x64c9,	// (0x000937ce) cell_sctrl_middle_pane_cp01_ParamLimits

0x64c9,	// (0x000937ce) cell_sctrl_middle_pane_cp01

0x64e6,	// (0x000937eb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64e6,	// (0x000937eb) cell_sctrl_middle_pane_cp01_g1

0x99bc,	// (0x00096cc1) main_call4_pane

0x64fb,	// (0x00093800) aid_size_button_call4_ParamLimits

0x64fb,	// (0x00093800) aid_size_button_call4

0x652e,	// (0x00093833) call4_windows_pane_ParamLimits

0x652e,	// (0x00093833) call4_windows_pane

0x6550,	// (0x00093855) grid_call4_button_pane_ParamLimits

0x6550,	// (0x00093855) grid_call4_button_pane

0xd51f,	// (0x0009a824) call4_windows_conf_pane

0x657b,	// (0x00093880) popup_call4_audio_first_window_ParamLimits

0x657b,	// (0x00093880) popup_call4_audio_first_window

0x65a7,	// (0x000938ac) popup_call4_audio_second_window_ParamLimits

0x65a7,	// (0x000938ac) popup_call4_audio_second_window

0xd55c,	// (0x0009a861) popup_call4_audio_wait_window_ParamLimits

0xd55c,	// (0x0009a861) popup_call4_audio_wait_window

0x65bd,	// (0x000938c2) cell_call4_button_pane_ParamLimits

0x65bd,	// (0x000938c2) cell_call4_button_pane

0x65e4,	// (0x000938e9) bg_button_pane_cp09_ParamLimits

0x65e4,	// (0x000938e9) bg_button_pane_cp09

0x65f0,	// (0x000938f5) cell_call4_button_pane_g1_ParamLimits

0x65f0,	// (0x000938f5) cell_call4_button_pane_g1

0x6616,	// (0x0009391b) cell_call4_button_pane_t1_ParamLimits

0x6616,	// (0x0009391b) cell_call4_button_pane_t1

0xd5a4,	// (0x0009a8a9) popup_call4_audio_conf_window_ParamLimits

0xd5a4,	// (0x0009a8a9) popup_call4_audio_conf_window

0x57fb,	// (0x00092b00) mup3_progress_pane_t1_ParamLimits

0x5819,	// (0x00092b1e) mup3_progress_pane_t2_ParamLimits

0xceda,	// (0x0009a1df) mup3_progress_pane_t3_ParamLimits

0xf7a8,	// (0x0009caad) mup3_progress_pane_t_ParamLimits

0xcef7,	// (0x0009a1fc) mup_progress_pane_cp03_ParamLimits

0x5e1a,	// (0x0009311f) mup3_control_keys_pane_g4_copy1

0xa8c8,	// (0x00097bcd) mp4_rocker2_pane_ParamLimits

0xa8c8,	// (0x00097bcd) mp4_rocker2_pane

0xd5be,	// (0x0009a8c3) mp4_rocker2_pane_g1

0xd5c6,	// (0x0009a8cb) mp4_rocker2_pane_g2

0xa93a,	// (0x00097c3f) mp4_rocker2_pane_g3

0xa942,	// (0x00097c47) mp4_rocker2_pane_g4

0xa94a,	// (0x00097c4f) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0009cbdd) mp4_rocker2_pane_g

0x99bc,	// (0x00096cc1) main_camera4_pane

0x99bc,	// (0x00096cc1) main_video4_pane

0x6088,	// (0x0009338d) main_video_tele_dialer_pane_t1_ParamLimits

0x6088,	// (0x0009338d) main_video_tele_dialer_pane_t1

0x60a1,	// (0x000933a6) main_video_tele_dialer_pane_t2_ParamLimits

0x60a1,	// (0x000933a6) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0009cb97) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0009cb97) main_video_tele_dialer_pane_t

0x6654,	// (0x00093959) cam4_autofocus_pane_ParamLimits

0x6654,	// (0x00093959) cam4_autofocus_pane

0x666a,	// (0x0009396f) cam4_image_uncrop_pane_ParamLimits

0x666a,	// (0x0009396f) cam4_image_uncrop_pane

0x6683,	// (0x00093988) cam4_indicators_pane_ParamLimits

0x6683,	// (0x00093988) cam4_indicators_pane

0x66b2,	// (0x000939b7) main_camera4_pane_g1_ParamLimits

0x66b2,	// (0x000939b7) main_camera4_pane_g1

0x66c4,	// (0x000939c9) main_camera4_pane_g2_ParamLimits

0x66c4,	// (0x000939c9) main_camera4_pane_g2

0x66d7,	// (0x000939dc) main_camera4_pane_g3_ParamLimits

0x66d7,	// (0x000939dc) main_camera4_pane_g3

0x66ea,	// (0x000939ef) main_camera4_pane_g4_ParamLimits

0x66ea,	// (0x000939ef) main_camera4_pane_g4

0x66fd,	// (0x00093a02) main_camera4_pane_g5_ParamLimits

0x66fd,	// (0x00093a02) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0009cbe8) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0009cbe8) main_camera4_pane_g

0x6721,	// (0x00093a26) main_camera4_pane_t1_ParamLimits

0x6721,	// (0x00093a26) main_camera4_pane_t1

0xce5f,	// (0x0009a164) bg_tb_trans_pane_cp06

0xa978,	// (0x00097c7d) cam4_indicators_pane_g1

0xa989,	// (0x00097c8e) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0009cc03) cam4_indicators_pane_g

0xa9a1,	// (0x00097ca6) cam4_indicators_pane_t1

0x6785,	// (0x00093a8a) main_video4_pane_g1_ParamLimits

0x6785,	// (0x00093a8a) main_video4_pane_g1

0x6794,	// (0x00093a99) main_video4_pane_g2_ParamLimits

0x6794,	// (0x00093a99) main_video4_pane_g2

0x67a3,	// (0x00093aa8) main_video4_pane_g3_ParamLimits

0x67a3,	// (0x00093aa8) main_video4_pane_g3

0x67b2,	// (0x00093ab7) main_video4_pane_g4_ParamLimits

0x67b2,	// (0x00093ab7) main_video4_pane_g4

0x0004,

0xf905,	// (0x0009cc0a) main_video4_pane_g_ParamLimits

0xf905,	// (0x0009cc0a) main_video4_pane_g

0x67d0,	// (0x00093ad5) vid4_indicators_pane_ParamLimits

0x67d0,	// (0x00093ad5) vid4_indicators_pane

0x67fe,	// (0x00093b03) video4_image_uncrop_cif_pane_ParamLimits

0x67fe,	// (0x00093b03) video4_image_uncrop_cif_pane

0x6818,	// (0x00093b1d) video4_image_uncrop_nhd_pane_ParamLimits

0x6818,	// (0x00093b1d) video4_image_uncrop_nhd_pane

0x666a,	// (0x0009396f) video4_image_uncrop_vga_pane_ParamLimits

0x666a,	// (0x0009396f) video4_image_uncrop_vga_pane

0x9a0d,	// (0x00096d12) bg_tb_trans_pane_cp07

0xa9cf,	// (0x00097cd4) vid4_indicators_pane_g1

0xa9e5,	// (0x00097cea) vid4_indicators_pane_g2

0xa9f9,	// (0x00097cfe) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0009cc15) vid4_indicators_pane_g

0xaa2a,	// (0x00097d2f) vid4_indicators_pane_t1

0x682e,	// (0x00093b33) cam4_autofocus_pane_g1

0x6836,	// (0x00093b3b) cam4_autofocus_pane_g2

0x683e,	// (0x00093b43) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0009cc20) cam4_autofocus_pane_g

0x6846,	// (0x00093b4b) cam4_autofocus_pane_g3_copy1

0x60ce,	// (0x000933d3) video_down_pane_cp_t1

0x60dc,	// (0x000933e1) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0009cb9c) video_down_pane_cp_t

0x9a0d,	// (0x00096d12) popup_vitu2_window_ParamLimits

0x9a0d,	// (0x00096d12) popup_vitu2_window

0x684e,	// (0x00093b53) aid_size_cell2_itu2_ParamLimits

0x684e,	// (0x00093b53) aid_size_cell2_itu2

0x6874,	// (0x00093b79) aid_size_cell_itu2_ParamLimits

0x6874,	// (0x00093b79) aid_size_cell_itu2

0x68d4,	// (0x00093bd9) bg_popup_window_pane_cp09_ParamLimits

0x68d4,	// (0x00093bd9) bg_popup_window_pane_cp09

0x68e2,	// (0x00093be7) field_vitu2_entry_pane_ParamLimits

0x68e2,	// (0x00093be7) field_vitu2_entry_pane

0x690a,	// (0x00093c0f) grid_vitu2_function_pane_ParamLimits

0x690a,	// (0x00093c0f) grid_vitu2_function_pane

0x695b,	// (0x00093c60) grid_vitu2_itu_pane_ParamLimits

0x695b,	// (0x00093c60) grid_vitu2_itu_pane

0x69ea,	// (0x00093cef) cell_vitu2_itu_pane_ParamLimits

0x69ea,	// (0x00093cef) cell_vitu2_itu_pane

0x6a10,	// (0x00093d15) cell_vitu2_function_pane_ParamLimits

0x6a10,	// (0x00093d15) cell_vitu2_function_pane

0xd5e2,	// (0x0009a8e7) bg_popup_call_pane_cp08_ParamLimits

0xd5e2,	// (0x0009a8e7) bg_popup_call_pane_cp08

0xd5fb,	// (0x0009a900) field_vitu2_entry_pane_g1

0xd607,	// (0x0009a90c) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0009cc27) field_vitu2_entry_pane_g

0xfebc,	// (0x0008d1c1) field_vitu2_entry_pane_t1_ParamLimits

0xfebc,	// (0x0008d1c1) field_vitu2_entry_pane_t1

0x6a54,	// (0x00093d59) field_vitu2_entry_pane_t2_ParamLimits

0x6a54,	// (0x00093d59) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0009cc2e) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0009cc2e) field_vitu2_entry_pane_t

0x6a71,	// (0x00093d76) bg_button_pane_cp010_ParamLimits

0x6a71,	// (0x00093d76) bg_button_pane_cp010

0x6a7f,	// (0x00093d84) cell_vitu2_itu_pane_g1

0x6aaa,	// (0x00093daf) cell_vitu2_itu_pane_t1_ParamLimits

0x6aaa,	// (0x00093daf) cell_vitu2_itu_pane_t1

0xfeea,	// (0x0008d1ef) cell_vitu2_itu_pane_t2_ParamLimits

0xfeea,	// (0x0008d1ef) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0009cc38) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0009cc38) cell_vitu2_itu_pane_t

0x9a0d,	// (0x00096d12) bg_button_pane_cp011

0x6b08,	// (0x00093e0d) cell_vitu2_function_pane_g1

0x99bc,	// (0x00096cc1) main_myfav_hc_pane

0x6491,	// (0x00093796) popup_image3_note_pane_ParamLimits

0x6491,	// (0x00093796) popup_image3_note_pane

0x64ad,	// (0x000937b2) popup_image3_tool_bar_pane_ParamLimits

0x64ad,	// (0x000937b2) popup_image3_tool_bar_pane

0xff78,	// (0x0008d27d) cell_vitu2_itu_pane_t3_ParamLimits

0xff78,	// (0x0008d27d) cell_vitu2_itu_pane_t3

0x99bc,	// (0x00096cc1) bg_popup_trans_pane

0xd629,	// (0x0009a92e) grid_image3_tool_bar_pane

0xd633,	// (0x0009a938) bg_popup_trans_pane_g1

0xace9,	// (0x00097fee) bg_popup_trans_pane_g2

0xd63b,	// (0x0009a940) bg_popup_trans_pane_g3

0xd643,	// (0x0009a948) bg_popup_trans_pane_g4

0xd64b,	// (0x0009a950) bg_popup_trans_pane_g5

0xd653,	// (0x0009a958) bg_popup_trans_pane_g6

0xd65b,	// (0x0009a960) bg_popup_trans_pane_g7

0xd663,	// (0x0009a968) bg_popup_trans_pane_g8

0xacc9,	// (0x00097fce) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0009cc3f) bg_popup_trans_pane_g

0xd66b,	// (0x0009a970) cell_image3_tool_bar_pane_ParamLimits

0xd66b,	// (0x0009a970) cell_image3_tool_bar_pane

0xcc2f,	// (0x00099f34) cell_image3_tool_bar_pane_g1

0x99bc,	// (0x00096cc1) bg_popup_trans_pane_cp1

0xd681,	// (0x0009a986) popup_image3_note_pane_t1

0xd68f,	// (0x0009a994) popup_image3_note_pane_t2

0xd69d,	// (0x0009a9a2) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0009cc52) popup_image3_note_pane_t

0xd6ad,	// (0x0009a9b2) popup_image3_note_pane_t3_copy1

0x6b1c,	// (0x00093e21) bg_myfav_hc_instruction_pane_ParamLimits

0x6b1c,	// (0x00093e21) bg_myfav_hc_instruction_pane

0x6b34,	// (0x00093e39) cell_myfav_contact_pane_ParamLimits

0x6b34,	// (0x00093e39) cell_myfav_contact_pane

0x6b50,	// (0x00093e55) cell_myfav_contact_pane_cp1_ParamLimits

0x6b50,	// (0x00093e55) cell_myfav_contact_pane_cp1

0x6b68,	// (0x00093e6d) cell_myfav_contact_pane_cp2_ParamLimits

0x6b68,	// (0x00093e6d) cell_myfav_contact_pane_cp2

0x6b80,	// (0x00093e85) cell_myfav_contact_pane_cp3_ParamLimits

0x6b80,	// (0x00093e85) cell_myfav_contact_pane_cp3

0x6b97,	// (0x00093e9c) cell_myfav_contact_pane_cp4_ParamLimits

0x6b97,	// (0x00093e9c) cell_myfav_contact_pane_cp4

0x6baf,	// (0x00093eb4) cell_myfav_contact_pane_cp5_ParamLimits

0x6baf,	// (0x00093eb4) cell_myfav_contact_pane_cp5

0x6bc3,	// (0x00093ec8) cell_myfav_contact_pane_cp6_ParamLimits

0x6bc3,	// (0x00093ec8) cell_myfav_contact_pane_cp6

0x6bd9,	// (0x00093ede) cell_myfav_contact_pane_cp7_ParamLimits

0x6bd9,	// (0x00093ede) cell_myfav_contact_pane_cp7

0xd6bb,	// (0x0009a9c0) listscroll_gen_pane_cp05

0x6bf1,	// (0x00093ef6) main_myfav_hc_pane_g1_ParamLimits

0x6bf1,	// (0x00093ef6) main_myfav_hc_pane_g1

0x6c0b,	// (0x00093f10) main_myfav_hc_pane_g2_ParamLimits

0x6c0b,	// (0x00093f10) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0009cc59) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0009cc59) main_myfav_hc_pane_g

0x6c3f,	// (0x00093f44) main_myfav_hc_pane_t1_ParamLimits

0x6c3f,	// (0x00093f44) main_myfav_hc_pane_t1

0xd6c4,	// (0x0009a9c9) main_myfav_hc_pane_t2_ParamLimits

0xd6c4,	// (0x0009a9c9) main_myfav_hc_pane_t2

0xd6d6,	// (0x0009a9db) main_myfav_hc_pane_t3_ParamLimits

0xd6d6,	// (0x0009a9db) main_myfav_hc_pane_t3

0x6c56,	// (0x00093f5b) main_myfav_hc_pane_t4_ParamLimits

0x6c56,	// (0x00093f5b) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0009cc60) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0009cc60) main_myfav_hc_pane_t

0xcc2f,	// (0x00099f34) bg_myfav_hc_instruction_pane_g1

0xd6e8,	// (0x0009a9ed) cell_myfav_contact_pane_g1_ParamLimits

0xd6e8,	// (0x0009a9ed) cell_myfav_contact_pane_g1

0xd6e8,	// (0x0009a9ed) cell_myfav_contact_pane_g2_ParamLimits

0xd6e8,	// (0x0009a9ed) cell_myfav_contact_pane_g2

0xd6f4,	// (0x0009a9f9) cell_myfav_contact_pane_g3_ParamLimits

0xd6f4,	// (0x0009a9f9) cell_myfav_contact_pane_g3

0xcec4,	// (0x0009a1c9) cell_myfav_contact_pane_g4_ParamLimits

0xcec4,	// (0x0009a1c9) cell_myfav_contact_pane_g4

0xd701,	// (0x0009aa06) cell_myfav_contact_pane_g5_ParamLimits

0xd701,	// (0x0009aa06) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0009cc6b) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0009cc6b) cell_myfav_contact_pane_g

0x6c25,	// (0x00093f2a) main_myfav_hc_pane_g3_ParamLimits

0x6c25,	// (0x00093f2a) main_myfav_hc_pane_g3

0x0c69,	// (0x0008df6e) popup_adpt_find_window

0x6c80,	// (0x00093f85) afind_page_pane_ParamLimits

0x6c80,	// (0x00093f85) afind_page_pane

0x6c95,	// (0x00093f9a) aid_size_cell_afind_ParamLimits

0x6c95,	// (0x00093f9a) aid_size_cell_afind

0x6cb3,	// (0x00093fb8) bg_popup_sub_pane_cp09_ParamLimits

0x6cb3,	// (0x00093fb8) bg_popup_sub_pane_cp09

0x6cc0,	// (0x00093fc5) find_pane_cp01_ParamLimits

0x6cc0,	// (0x00093fc5) find_pane_cp01

0xd70d,	// (0x0009aa12) grid_afind_control_pane_ParamLimits

0xd70d,	// (0x0009aa12) grid_afind_control_pane

0x6ccd,	// (0x00093fd2) grid_afind_pane_ParamLimits

0x6ccd,	// (0x00093fd2) grid_afind_pane

0x6cef,	// (0x00093ff4) cell_afind_pane_ParamLimits

0x6cef,	// (0x00093ff4) cell_afind_pane

0xcc2f,	// (0x00099f34) afind_page_pane_g1

0x6d56,	// (0x0009405b) afind_page_pane_g2

0x6d5f,	// (0x00094064) afind_page_pane_g3

0x0002,

0xf971,	// (0x0009cc76) afind_page_pane_g

0x6d68,	// (0x0009406d) afind_page_pane_t1

0xd721,	// (0x0009aa26) cell_afind_grid_control_pane_ParamLimits

0xd721,	// (0x0009aa26) cell_afind_grid_control_pane

0xd513,	// (0x0009a818) bg_button_pane_cp69_ParamLimits

0xd513,	// (0x0009a818) bg_button_pane_cp69

0x6d88,	// (0x0009408d) cell_afind_pane_g1_ParamLimits

0x6d88,	// (0x0009408d) cell_afind_pane_g1

0x6d95,	// (0x0009409a) cell_afind_pane_t1_ParamLimits

0x6d95,	// (0x0009409a) cell_afind_pane_t1

0xa41c,	// (0x00097721) bg_button_pane_cp72

0xd730,	// (0x0009aa35) cell_afind_grid_control_pane_g1

0x3cf5,	// (0x00090ffa) aid_image_placing_area_ParamLimits

0x3cf5,	// (0x00090ffa) aid_image_placing_area

0xd1df,	// (0x0009a4e4) field_vitu_entry_pane_g1_ParamLimits

0xd1df,	// (0x0009a4e4) field_vitu_entry_pane_g1

0xd1eb,	// (0x0009a4f0) field_vitu_entry_pane_g2_ParamLimits

0xd1eb,	// (0x0009a4f0) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0009cb27) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0009cb27) field_vitu_entry_pane_g

0x5ee9,	// (0x000931ee) cell_vitu_itu_pane_g1_ParamLimits

0x5f2b,	// (0x00093230) cell_vitu_itu_pane_t3_ParamLimits

0x5f2b,	// (0x00093230) cell_vitu_itu_pane_t3

0xd4c3,	// (0x0009a7c8) mp4_progress_pane_t1_ParamLimits

0xd4dc,	// (0x0009a7e1) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0009cbbc) mp4_progress_pane_t_ParamLimits

0xd4f5,	// (0x0009a7fa) mup_progress_pane_cp04_ParamLimits

0x6c6a,	// (0x00093f6f) main_myfav_hc_pane_t5_ParamLimits

0x6c6a,	// (0x00093f6f) main_myfav_hc_pane_t5

0x0b28,	// (0x0008de2d) aid_zoom_text_primary

0x0c69,	// (0x0008df6e) popup_adpt_find_window_ParamLimits

0x9a0d,	// (0x00096d12) main_cam_set_pane

0x669c,	// (0x000939a1) cam4_zoom_pane_ParamLimits

0x669c,	// (0x000939a1) cam4_zoom_pane

0x6da7,	// (0x000940ac) main_cam_set_pane_g1_ParamLimits

0x6da7,	// (0x000940ac) main_cam_set_pane_g1

0x6db5,	// (0x000940ba) main_cam_set_pane_g2_ParamLimits

0x6db5,	// (0x000940ba) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0009cc7d) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0009cc7d) main_cam_set_pane_g

0x6dd6,	// (0x000940db) main_cam_set_pane_t1_ParamLimits

0x6dd6,	// (0x000940db) main_cam_set_pane_t1

0x6df1,	// (0x000940f6) main_cset_listscroll_pane_ParamLimits

0x6df1,	// (0x000940f6) main_cset_listscroll_pane

0x6e15,	// (0x0009411a) main_cset_slider_pane_ParamLimits

0x6e15,	// (0x0009411a) main_cset_slider_pane

0xd741,	// (0x0009aa46) main_cset_list_pane_ParamLimits

0xd741,	// (0x0009aa46) main_cset_list_pane

0xd751,	// (0x0009aa56) scroll_pane_cp028

0x6e3f,	// (0x00094144) aid_area_touch_slider

0x6e5b,	// (0x00094160) cset_slider_pane

0x6e85,	// (0x0009418a) main_cset_slider_pane_g1

0x6e9a,	// (0x0009419f) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0009cc82) main_cset_slider_pane_g

0xd78a,	// (0x0009aa8f) main_cset_slider_pane_t1

0x6f5c,	// (0x00094261) main_cset_slider_pane_t2

0x6f76,	// (0x0009427b) main_cset_slider_pane_t3

0x6f90,	// (0x00094295) main_cset_slider_pane_t4

0x6faa,	// (0x000942af) main_cset_slider_pane_t5

0x6fc8,	// (0x000942cd) main_cset_slider_pane_t6

0x6fdd,	// (0x000942e2) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0009cca7) main_cset_slider_pane_t

0x70e9,	// (0x000943ee) cset_list_set_pane_ParamLimits

0x70e9,	// (0x000943ee) cset_list_set_pane

0x70fd,	// (0x00094402) aid_position_infowindow_above

0x7105,	// (0x0009440a) aid_position_infowindow_below

0x710d,	// (0x00094412) cset_list_set_pane_g1_ParamLimits

0x710d,	// (0x00094412) cset_list_set_pane_g1

0xffd6,	// (0x0008d2db) cset_list_set_pane_g3_ParamLimits

0xffd6,	// (0x0008d2db) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0009ccc6) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0009ccc6) cset_list_set_pane_g

0xffe5,	// (0x0008d2ea) cset_list_set_pane_t1_ParamLimits

0xffe5,	// (0x0008d2ea) cset_list_set_pane_t1

0x9a0d,	// (0x00096d12) list_highlight_pane_cp021_ParamLimits

0x9a0d,	// (0x00096d12) list_highlight_pane_cp021

0xb508,	// (0x0009880d) cset_slider_pane_g1

0xb51a,	// (0x0009881f) cset_slider_pane_g2

0xb511,	// (0x00098816) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0009cccb) cset_slider_pane_g

0xaa41,	// (0x00097d46) aid_area_touch_cam4_zoom

0xaa49,	// (0x00097d4e) cam4_zoom_cont_pane

0xaa51,	// (0x00097d56) cam4_zoom_pane_g1

0xaa59,	// (0x00097d5e) cam4_zoom_pane_g2

0x7119,	// (0x0009441e) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009ccd2) cam4_zoom_pane_g

0xd82a,	// (0x0009ab2f) cam4_zoom_cont_pane_g1

0xd833,	// (0x0009ab38) cam4_zoom_cont_pane_g2

0xd83c,	// (0x0009ab41) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009ccd9) cam4_zoom_cont_pane_g

0x6519,	// (0x0009381e) call4_image_pane_ParamLimits

0x6519,	// (0x0009381e) call4_image_pane

0xd51f,	// (0x0009a824) call4_windows_conf_pane_ParamLimits

0xd53a,	// (0x0009a83f) popup_call4_audio_in_window_ParamLimits

0xd53a,	// (0x0009a83f) popup_call4_audio_in_window

0x99bc,	// (0x00096cc1) bg_popup_call2_act_pane_cp02

0xd59c,	// (0x0009a8a1) call4_list_conf_pane

0xcc2f,	// (0x00099f34) call4_image_pane_g1

0xcc2f,	// (0x00099f34) call4_image_pane_g2

0x0001,

0xf6e8,	// (0x0009c9ed) call4_image_pane_g

0xd845,	// (0x0009ab4a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd845,	// (0x0009ab4a) list_single_graphic_popup_conf4_pane

0x99bc,	// (0x00096cc1) list_highlight_pane_cp022

0xd85a,	// (0x0009ab5f) list_single_graphic_popup_conf4_pane_g1

0xb1f4,	// (0x000984f9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009cce0) list_single_graphic_popup_conf4_pane_g

0xd862,	// (0x0009ab67) list_single_graphic_popup_conf4_pane_t1

0x1f10,	// (0x0008f215) popup_vtel_slider_window_ParamLimits

0x1f10,	// (0x0008f215) popup_vtel_slider_window

0xd501,	// (0x0009a806) dialer2_ne_pane_t2_ParamLimits

0xd501,	// (0x0009a806) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0009cbc1) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0009cbc1) dialer2_ne_pane_t

0xca0e,	// (0x00099d13) bg_popup_sub_pane_cp010_ParamLimits

0xca0e,	// (0x00099d13) bg_popup_sub_pane_cp010

0x7121,	// (0x00094426) popup_vtel_slider_window_g1_ParamLimits

0x7121,	// (0x00094426) popup_vtel_slider_window_g1

0x7134,	// (0x00094439) popup_vtel_slider_window_g2_ParamLimits

0x7134,	// (0x00094439) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009cce5) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009cce5) popup_vtel_slider_window_g

0x718a,	// (0x0009448f) vtel_slider_pane_ParamLimits

0x718a,	// (0x0009448f) vtel_slider_pane

0x71ac,	// (0x000944b1) vtel_slider_pane_g1_ParamLimits

0x71ac,	// (0x000944b1) vtel_slider_pane_g1

0x71c0,	// (0x000944c5) vtel_slider_pane_g2_ParamLimits

0x71c0,	// (0x000944c5) vtel_slider_pane_g2

0x71d8,	// (0x000944dd) vtel_slider_pane_g3_ParamLimits

0x71d8,	// (0x000944dd) vtel_slider_pane_g3

0x71ac,	// (0x000944b1) vtel_slider_pane_g4_ParamLimits

0x71ac,	// (0x000944b1) vtel_slider_pane_g4

0x71ee,	// (0x000944f3) vtel_slider_pane_g5_ParamLimits

0x71ee,	// (0x000944f3) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009ccee) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009ccee) vtel_slider_pane_g

0x9a0d,	// (0x00096d12) main_gallery2_pane

0x68a0,	// (0x00093ba5) aid_size_row_itut2_dropdow_list_ParamLimits

0x68a0,	// (0x00093ba5) aid_size_row_itut2_dropdow_list

0x6932,	// (0x00093c37) grid_vitu2_function_top_pane_ParamLimits

0x6932,	// (0x00093c37) grid_vitu2_function_top_pane

0x6991,	// (0x00093c96) popup_vitu2_dropdown_list_window_ParamLimits

0x6991,	// (0x00093c96) popup_vitu2_dropdown_list_window

0x69be,	// (0x00093cc3) popup_vitu2_match_list_window

0x7212,	// (0x00094517) cell_vitu2_function_top_pane_ParamLimits

0x7212,	// (0x00094517) cell_vitu2_function_top_pane

0x7232,	// (0x00094537) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7232,	// (0x00094537) cell_vitu2_function_top_pane_cp01

0x7250,	// (0x00094555) cell_vitu2_function_top_wide_pane_ParamLimits

0x7250,	// (0x00094555) cell_vitu2_function_top_wide_pane

0x9a0d,	// (0x00096d12) bg_button_pane_cp012

0x726e,	// (0x00094573) cell_vitu2_function_top_pane_g1

0xaa61,	// (0x00097d66) bg_button_pane_cp013_ParamLimits

0xaa61,	// (0x00097d66) bg_button_pane_cp013

0x7282,	// (0x00094587) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7282,	// (0x00094587) cell_vitu2_function_top_wide_pane_g1

0x9a0d,	// (0x00096d12) bg_popup_sub_pane_cp20

0x729a,	// (0x0009459f) list_vitu2_match_list_pane

0xd633,	// (0x0009a938) bg_popup_sub_pane_cp20_g1

0xd63b,	// (0x0009a940) bg_popup_sub_pane_cp20_g2

0xace9,	// (0x00097fee) bg_popup_sub_pane_cp20_g3

0xd643,	// (0x0009a948) bg_popup_sub_pane_cp20_g4

0xacc9,	// (0x00097fce) bg_popup_sub_pane_cp20_g5

0xd878,	// (0x0009ab7d) bg_popup_sub_pane_cp20_g6

0xd653,	// (0x0009a958) bg_popup_sub_pane_cp20_g7

0xd65b,	// (0x0009a960) bg_popup_sub_pane_cp20_g8

0xd663,	// (0x0009a968) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009ccf9) bg_popup_sub_pane_cp20_g

0xaa7d,	// (0x00097d82) list_vitu2_match_list_item_pane_ParamLimits

0xaa7d,	// (0x00097d82) list_vitu2_match_list_item_pane

0xaa8f,	// (0x00097d94) list_vitu2_match_list_item_pane_t1

0x99bc,	// (0x00096cc1) bg_popup_sub_pane_cp21

0xb11d,	// (0x00098422) grid_vitu2_dropdown_list_pane

0x72c4,	// (0x000945c9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x72c4,	// (0x000945c9) cell_vitu2_dropdown_list_char_pane

0x72e7,	// (0x000945ec) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x72e7,	// (0x000945ec) cell_vitu2_dropdown_list_ctrl_pane

0xd880,	// (0x0009ab85) cell_vitu2_dropdown_list_char_pane_g1

0xd889,	// (0x0009ab8e) cell_vitu2_dropdown_list_char_pane_g2

0xd892,	// (0x0009ab97) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009cd16) cell_vitu2_dropdown_list_char_pane_g

0x7315,	// (0x0009461a) cell_vitu2_dropdown_list_char_pane_t1

0x7323,	// (0x00094628) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7323,	// (0x00094628) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7333,	// (0x00094638) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7333,	// (0x00094638) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7344,	// (0x00094649) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7344,	// (0x00094649) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7354,	// (0x00094659) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7354,	// (0x00094659) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce5f,	// (0x0009a164) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce5f,	// (0x0009a164) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009cd1d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009cd1d) cell_vitu2_dropdown_list_ctrl_pane_g

0x7370,	// (0x00094675) aid_size_cell_gallery2_ParamLimits

0x7370,	// (0x00094675) aid_size_cell_gallery2

0x738e,	// (0x00094693) grid_gallery2_pane_ParamLimits

0x738e,	// (0x00094693) grid_gallery2_pane

0x73a8,	// (0x000946ad) scroll_pane_cp029_ParamLimits

0x73a8,	// (0x000946ad) scroll_pane_cp029

0x73b4,	// (0x000946b9) cell_gallery2_pane_ParamLimits

0x73b4,	// (0x000946b9) cell_gallery2_pane

0xd89b,	// (0x0009aba0) cell_gallery2_pane_g2

0x7415,	// (0x0009471a) cell_gallery2_pane_g3

0xd8a3,	// (0x0009aba8) cell_gallery2_pane_g4

0xd8ab,	// (0x0009abb0) cell_gallery2_pane_g5

0xb3c2,	// (0x000986c7) grid_highlight_pane_cp10

0x69be,	// (0x00093cc3) popup_vitu2_match_list_window_ParamLimits

0x69d5,	// (0x00093cda) popup_vitu2_query_window_ParamLimits

0x69d5,	// (0x00093cda) popup_vitu2_query_window

0x99bc,	// (0x00096cc1) bg_vitu2_candi_button_pane

0xd880,	// (0x0009ab85) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd889,	// (0x0009ab8e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd892,	// (0x0009ab97) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0032,	// (0x0008d337) bg_button_pane_cp015

0x741d,	// (0x00094722) bg_button_pane_cp016

0x7430,	// (0x00094735) bg_button_pane_cp017

0xc7de,	// (0x00099ae3) bg_popup_sub_pane_cp22

0xd8b3,	// (0x0009abb8) popup_vitu2_query_window_g1

0x0067,	// (0x0008d36c) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009cd28) popup_vitu2_query_window_g

0x0086,	// (0x0008d38b) popup_vitu2_query_window_t1_ParamLimits

0x0086,	// (0x0008d38b) popup_vitu2_query_window_t1

0x00bb,	// (0x0008d3c0) popup_vitu2_query_window_t2_ParamLimits

0x00bb,	// (0x0008d3c0) popup_vitu2_query_window_t2

0x00cd,	// (0x0008d3d2) popup_vitu2_query_window_t3_ParamLimits

0x00cd,	// (0x0008d3d2) popup_vitu2_query_window_t3

0x7454,	// (0x00094759) popup_vitu2_query_window_t4_ParamLimits

0x7454,	// (0x00094759) popup_vitu2_query_window_t4

0x7475,	// (0x0009477a) popup_vitu2_query_window_t5_ParamLimits

0x7475,	// (0x0009477a) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009cd2f) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009cd2f) popup_vitu2_query_window_t

0xd739,	// (0x0009aa3e) main_cset_text_pane

0x6e3f,	// (0x00094144) aid_area_touch_slider_ParamLimits

0x6e5b,	// (0x00094160) cset_slider_pane_ParamLimits

0x6e85,	// (0x0009418a) main_cset_slider_pane_g1_ParamLimits

0x6e9a,	// (0x0009419f) main_cset_slider_pane_g2_ParamLimits

0xd75a,	// (0x0009aa5f) main_cset_slider_pane_g3_ParamLimits

0xd75a,	// (0x0009aa5f) main_cset_slider_pane_g3

0x6eaf,	// (0x000941b4) main_cset_slider_pane_g4_ParamLimits

0x6eaf,	// (0x000941b4) main_cset_slider_pane_g4

0x6ebe,	// (0x000941c3) main_cset_slider_pane_g5_ParamLimits

0x6ebe,	// (0x000941c3) main_cset_slider_pane_g5

0x6ecc,	// (0x000941d1) main_cset_slider_pane_g6_ParamLimits

0x6ecc,	// (0x000941d1) main_cset_slider_pane_g6

0xf97d,	// (0x0009cc82) main_cset_slider_pane_g_ParamLimits

0xd78a,	// (0x0009aa8f) main_cset_slider_pane_t1_ParamLimits

0x6f5c,	// (0x00094261) main_cset_slider_pane_t2_ParamLimits

0x6f76,	// (0x0009427b) main_cset_slider_pane_t3_ParamLimits

0x6f90,	// (0x00094295) main_cset_slider_pane_t4_ParamLimits

0x6faa,	// (0x000942af) main_cset_slider_pane_t5_ParamLimits

0x6fc8,	// (0x000942cd) main_cset_slider_pane_t6_ParamLimits

0x6fdd,	// (0x000942e2) main_cset_slider_pane_t7_ParamLimits

0x700b,	// (0x00094310) main_cset_slider_pane_t8_ParamLimits

0x700b,	// (0x00094310) main_cset_slider_pane_t8

0x7033,	// (0x00094338) main_cset_slider_pane_t9_ParamLimits

0x7033,	// (0x00094338) main_cset_slider_pane_t9

0x705b,	// (0x00094360) main_cset_slider_pane_t10_ParamLimits

0x705b,	// (0x00094360) main_cset_slider_pane_t10

0x7083,	// (0x00094388) main_cset_slider_pane_t11_ParamLimits

0x7083,	// (0x00094388) main_cset_slider_pane_t11

0x70ad,	// (0x000943b2) main_cset_slider_pane_t12_ParamLimits

0x70ad,	// (0x000943b2) main_cset_slider_pane_t12

0x70ca,	// (0x000943cf) main_cset_slider_pane_t13_ParamLimits

0x70ca,	// (0x000943cf) main_cset_slider_pane_t13

0xf9a2,	// (0x0009cca7) main_cset_slider_pane_t_ParamLimits

0x99bc,	// (0x00096cc1) bg_popup_sub_pane_cp011

0xd8bf,	// (0x0009abc4) main_cset_text_pane_g1

0xd8c7,	// (0x0009abcc) main_cset_text_pane_t1

0xd8d5,	// (0x0009abda) main_cset_text_pane_t2

0xd8e3,	// (0x0009abe8) main_cset_text_pane_t3

0xd8f1,	// (0x0009abf6) main_cset_text_pane_t4

0xd8ff,	// (0x0009ac04) main_cset_text_pane_t5

0xd90d,	// (0x0009ac12) main_cset_text_pane_t6

0xd91b,	// (0x0009ac20) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009cd3e) main_cset_text_pane_t

0x99bc,	// (0x00096cc1) main_cam4_burst_pane

0x99bc,	// (0x00096cc1) main_cam5_pane

0x6d76,	// (0x0009407b) bg_button_pane_cp019

0x6d7f,	// (0x00094084) bg_button_pane_cp020

0xd766,	// (0x0009aa6b) main_cset_slider_pane_g7_ParamLimits

0xd766,	// (0x0009aa6b) main_cset_slider_pane_g7

0xd772,	// (0x0009aa77) main_cset_slider_pane_g8_ParamLimits

0xd772,	// (0x0009aa77) main_cset_slider_pane_g8

0x6ee0,	// (0x000941e5) main_cset_slider_pane_g9_ParamLimits

0x6ee0,	// (0x000941e5) main_cset_slider_pane_g9

0x6eec,	// (0x000941f1) main_cset_slider_pane_g10_ParamLimits

0x6eec,	// (0x000941f1) main_cset_slider_pane_g10

0x6ef8,	// (0x000941fd) main_cset_slider_pane_g11_ParamLimits

0x6ef8,	// (0x000941fd) main_cset_slider_pane_g11

0x6f04,	// (0x00094209) main_cset_slider_pane_g12_ParamLimits

0x6f04,	// (0x00094209) main_cset_slider_pane_g12

0x6f10,	// (0x00094215) main_cset_slider_pane_g13_ParamLimits

0x6f10,	// (0x00094215) main_cset_slider_pane_g13

0x6f1c,	// (0x00094221) main_cset_slider_pane_g14_ParamLimits

0x6f1c,	// (0x00094221) main_cset_slider_pane_g14

0x6f28,	// (0x0009422d) main_cset_slider_pane_g15_ParamLimits

0x6f28,	// (0x0009422d) main_cset_slider_pane_g15

0xd7b8,	// (0x0009aabd) main_cset_slider_pane_t14_ParamLimits

0xd7b8,	// (0x0009aabd) main_cset_slider_pane_t14

0xd7f1,	// (0x0009aaf6) main_cset_slider_pane_t15_ParamLimits

0xd7f1,	// (0x0009aaf6) main_cset_slider_pane_t15

0x7496,	// (0x0009479b) aid_cam4_burst_size_cell_ParamLimits

0x7496,	// (0x0009479b) aid_cam4_burst_size_cell

0x74b6,	// (0x000947bb) grid_cam4_burst_pane_ParamLimits

0x74b6,	// (0x000947bb) grid_cam4_burst_pane

0x74f0,	// (0x000947f5) linegrid_cam4_burst_pane_ParamLimits

0x74f0,	// (0x000947f5) linegrid_cam4_burst_pane

0xd929,	// (0x0009ac2e) scroll_pane_cp30_ParamLimits

0xd929,	// (0x0009ac2e) scroll_pane_cp30

0x7512,	// (0x00094817) cell_cam4_burst_pane_ParamLimits

0x7512,	// (0x00094817) cell_cam4_burst_pane

0xd935,	// (0x0009ac3a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd935,	// (0x0009ac3a) linegrid_cam4_burst_pane_g1

0x7567,	// (0x0009486c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7567,	// (0x0009486c) linegrid_cam4_burst_pane_g2

0xd942,	// (0x0009ac47) linegrid_cam4_burst_pane_g3_ParamLimits

0xd942,	// (0x0009ac47) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009cd4d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009cd4d) linegrid_cam4_burst_pane_g

0x7578,	// (0x0009487d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7578,	// (0x0009487d) linegrid_cam4_burst_pane_g3_copy1

0xd94f,	// (0x0009ac54) linegrid_cam4_burst_pane_g4_ParamLimits

0xd94f,	// (0x0009ac54) linegrid_cam4_burst_pane_g4

0x7596,	// (0x0009489b) linegrid_cam4_burst_pane_g5_ParamLimits

0x7596,	// (0x0009489b) linegrid_cam4_burst_pane_g5

0x75a7,	// (0x000948ac) linegrid_cam4_burst_pane_g6_ParamLimits

0x75a7,	// (0x000948ac) linegrid_cam4_burst_pane_g6

0xd95c,	// (0x0009ac61) linegrid_cam4_burst_pane_g7_ParamLimits

0xd95c,	// (0x0009ac61) linegrid_cam4_burst_pane_g7

0x75be,	// (0x000948c3) cell_cam4_burst_pane_g1

0xd975,	// (0x0009ac7a) main_cam5_pane_t1_ParamLimits

0xd975,	// (0x0009ac7a) main_cam5_pane_t1

0xd987,	// (0x0009ac8c) main_cam5_pane_t2_ParamLimits

0xd987,	// (0x0009ac8c) main_cam5_pane_t2

0xd999,	// (0x0009ac9e) main_cam5_pane_t3_ParamLimits

0xd999,	// (0x0009ac9e) main_cam5_pane_t3

0xd9ab,	// (0x0009acb0) main_cam5_pane_t4_ParamLimits

0xd9ab,	// (0x0009acb0) main_cam5_pane_t4

0xd9c3,	// (0x0009acc8) main_cam5_pane_t5_ParamLimits

0xd9c3,	// (0x0009acc8) main_cam5_pane_t5

0xd9d7,	// (0x0009acdc) main_cam5_pane_t6_ParamLimits

0xd9d7,	// (0x0009acdc) main_cam5_pane_t6

0xd9eb,	// (0x0009acf0) main_cam5_pane_t7_ParamLimits

0xd9eb,	// (0x0009acf0) main_cam5_pane_t7

0xd9fd,	// (0x0009ad02) main_cam5_pane_t8_ParamLimits

0xd9fd,	// (0x0009ad02) main_cam5_pane_t8

0xda1b,	// (0x0009ad20) main_cam5_pane_t9_ParamLimits

0xda1b,	// (0x0009ad20) main_cam5_pane_t9

0xda2d,	// (0x0009ad32) main_cam5_pane_t10_ParamLimits

0xda2d,	// (0x0009ad32) main_cam5_pane_t10

0xda3f,	// (0x0009ad44) main_cam5_pane_t11_ParamLimits

0xda3f,	// (0x0009ad44) main_cam5_pane_t11

0xda53,	// (0x0009ad58) main_cam5_pane_t12_ParamLimits

0xda53,	// (0x0009ad58) main_cam5_pane_t12

0xda6a,	// (0x0009ad6f) main_cam5_pane_t13_ParamLimits

0xda6a,	// (0x0009ad6f) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009cd59) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009cd59) main_cam5_pane_t

0x0cec,	// (0x0008dff1) popup_scut_keymap_window_ParamLimits

0x0cec,	// (0x0008dff1) popup_scut_keymap_window

0x75d1,	// (0x000948d6) aid_size_cell_brow_shortcut

0xb3c2,	// (0x000986c7) bg_popup_window_pane_cp010

0x75dd,	// (0x000948e2) grid_scut_pane

0x75e9,	// (0x000948ee) cell_scut_pane_ParamLimits

0x75e9,	// (0x000948ee) cell_scut_pane

0x7602,	// (0x00094907) cell_scut_pane_g1

0xda8d,	// (0x0009ad92) cell_scut_pane_t1

0xda9c,	// (0x0009ada1) cell_scut_pane_t2

0x760b,	// (0x00094910) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009cd74) cell_scut_pane_t

0x53b2,	// (0x000926b7) main_mup3_pane_g8_ParamLimits

0x53b2,	// (0x000926b7) main_mup3_pane_g8

0x68bc,	// (0x00093bc1) area_vitu2_query_pane_ParamLimits

0x68bc,	// (0x00093bc1) area_vitu2_query_pane

0x0046,	// (0x0008d34b) input_focus_pane_cp08

0xdaab,	// (0x0009adb0) area_vitu2_query_pane_g1

0x014b,	// (0x0008d450) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009cd7b) area_vitu2_query_pane_g

0x7619,	// (0x0009491e) area_vitu2_query_pane_t1_ParamLimits

0x7619,	// (0x0009491e) area_vitu2_query_pane_t1

0x762d,	// (0x00094932) area_vitu2_query_pane_t2_ParamLimits

0x762d,	// (0x00094932) area_vitu2_query_pane_t2

0x015e,	// (0x0008d463) area_vitu2_query_pane_t3_ParamLimits

0x015e,	// (0x0008d463) area_vitu2_query_pane_t3

0x7641,	// (0x00094946) area_vitu2_query_pane_t4_ParamLimits

0x7641,	// (0x00094946) area_vitu2_query_pane_t4

0x7669,	// (0x0009496e) area_vitu2_query_pane_t5_ParamLimits

0x7669,	// (0x0009496e) area_vitu2_query_pane_t5

0x7691,	// (0x00094996) area_vitu2_query_pane_t6_ParamLimits

0x7691,	// (0x00094996) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009cd80) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009cd80) area_vitu2_query_pane_t

0x76dd,	// (0x000949e2) bg_button_pane_cp018

0x76eb,	// (0x000949f0) bg_button_pane_cp021

0x0186,	// (0x0008d48b) bg_button_pane_cp022

0x0197,	// (0x0008d49c) input_focus_pane_cp09

0x3273,	// (0x00090578) aid_size_touch_mv_arrow_left

0x329c,	// (0x000905a1) aid_size_touch_mv_arrow_right

0x6f40,	// (0x00094245) main_cset_slider_pane_g16_ParamLimits

0x6f40,	// (0x00094245) main_cset_slider_pane_g16

0x6f4e,	// (0x00094253) main_cset_slider_pane_g17_ParamLimits

0x6f4e,	// (0x00094253) main_cset_slider_pane_g17

0x75be,	// (0x000948c3) cell_cam4_burst_pane_g1_ParamLimits

0x99bc,	// (0x00096cc1) compa_mode_pane

0x7144,	// (0x00094449) popup_vtel_slider_window_g3_ParamLimits

0x7144,	// (0x00094449) popup_vtel_slider_window_g3

0x715b,	// (0x00094460) popup_vtel_slider_window_g4_ParamLimits

0x715b,	// (0x00094460) popup_vtel_slider_window_g4

0x7172,	// (0x00094477) popup_vtel_slider_window_t1_ParamLimits

0x7172,	// (0x00094477) popup_vtel_slider_window_t1

0x99bc,	// (0x00096cc1) main_cl_pane

0xc80a,	// (0x00099b0f) popup_imed_adjust2_window_ParamLimits

0xc7de,	// (0x00099ae3) bg_tb_trans_pane_cp05_ParamLimits

0xd114,	// (0x0009a419) popup_imed_adjust2_window_g1_ParamLimits

0xd123,	// (0x0009a428) popup_imed_adjust2_window_g2_ParamLimits

0xd123,	// (0x0009a428) popup_imed_adjust2_window_g2

0xd12f,	// (0x0009a434) popup_imed_adjust2_window_g3_ParamLimits

0xd12f,	// (0x0009a434) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0009caeb) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0009caeb) popup_imed_adjust2_window_g

0xd13b,	// (0x0009a440) popup_imed_adjust2_window_t1_ParamLimits

0xd153,	// (0x0009a458) slider_imed_adjust_pane_ParamLimits

0xd167,	// (0x0009a46c) slider_imed_adjust_pane_g1_ParamLimits

0xd177,	// (0x0009a47c) slider_imed_adjust_pane_g2_ParamLimits

0xd187,	// (0x0009a48c) slider_imed_adjust_pane_g3_ParamLimits

0xd198,	// (0x0009a49d) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0009caf2) slider_imed_adjust_pane_g_ParamLimits

0x663c,	// (0x00093941) aid_touch_area_cam4_ParamLimits

0x663c,	// (0x00093941) aid_touch_area_cam4

0xa952,	// (0x00097c57) battery_pane_cp01

0x670e,	// (0x00093a13) main_camera4_pane_g6_ParamLimits

0x670e,	// (0x00093a13) main_camera4_pane_g6

0x6738,	// (0x00093a3d) main_camera4_pane_t2_ParamLimits

0x6738,	// (0x00093a3d) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0009cbf5) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0009cbf5) main_camera4_pane_t

0x676d,	// (0x00093a72) aid_touch_area_vid4_ParamLimits

0x676d,	// (0x00093a72) aid_touch_area_vid4

0x67c1,	// (0x00093ac6) main_video4_pane_g5_ParamLimits

0x67c1,	// (0x00093ac6) main_video4_pane_g5

0x67e6,	// (0x00093aeb) vid4_progress_pane_ParamLimits

0x67e6,	// (0x00093aeb) vid4_progress_pane

0xd77e,	// (0x0009aa83) main_cset_slider_pane_g18_ParamLimits

0xd77e,	// (0x0009aa83) main_cset_slider_pane_g18

0xd969,	// (0x0009ac6e) cell_cam4_burst_pane_g2_ParamLimits

0xd969,	// (0x0009ac6e) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009cd54) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009cd54) cell_cam4_burst_pane_g

0xa170,	// (0x00097475) bg_cl_pane_ParamLimits

0xa170,	// (0x00097475) bg_cl_pane

0x76f7,	// (0x000949fc) cl_header_pane_ParamLimits

0x76f7,	// (0x000949fc) cl_header_pane

0x770b,	// (0x00094a10) cl_listscroll_pane_ParamLimits

0x770b,	// (0x00094a10) cl_listscroll_pane

0xdab7,	// (0x0009adbc) bg_cl_pane_g1

0xdabf,	// (0x0009adc4) bg_cl_pane_g2

0xdac7,	// (0x0009adcc) bg_cl_pane_g3

0xdacf,	// (0x0009add4) bg_cl_pane_g4

0xdad7,	// (0x0009addc) bg_cl_pane_g5

0xdadf,	// (0x0009ade4) bg_cl_pane_g6

0xdae7,	// (0x0009adec) bg_cl_pane_g7

0xdaef,	// (0x0009adf4) bg_cl_pane_g8

0xdaf7,	// (0x0009adfc) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009cd8f) bg_cl_pane_g

0x771b,	// (0x00094a20) aid_height_cl_leading_ParamLimits

0x771b,	// (0x00094a20) aid_height_cl_leading

0x7727,	// (0x00094a2c) aid_height_cl_text_ParamLimits

0x7727,	// (0x00094a2c) aid_height_cl_text

0x9a0d,	// (0x00096d12) bg_cl_header_pane_ParamLimits

0x9a0d,	// (0x00096d12) bg_cl_header_pane

0x7746,	// (0x00094a4b) cl_header_pane_g1_ParamLimits

0x7746,	// (0x00094a4b) cl_header_pane_g1

0x775c,	// (0x00094a61) cl_header_pane_t1_ParamLimits

0x775c,	// (0x00094a61) cl_header_pane_t1

0xdaff,	// (0x0009ae04) cl_list_pane

0xd751,	// (0x0009aa56) hc_scroll_pane_cp01

0xacc9,	// (0x00097fce) bg_cl_header_pane_g1

0xd633,	// (0x0009a938) bg_cl_header_pane_g2

0xace9,	// (0x00097fee) bg_cl_header_pane_g3

0xd643,	// (0x0009a948) bg_cl_header_pane_g4

0xd63b,	// (0x0009a940) bg_cl_header_pane_g5

0xd878,	// (0x0009ab7d) bg_cl_header_pane_g6

0xd65b,	// (0x0009a960) bg_cl_header_pane_g7

0xd663,	// (0x0009a968) bg_cl_header_pane_g8

0xd653,	// (0x0009a958) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009cda2) bg_cl_header_pane_g

0x7775,	// (0x00094a7a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7775,	// (0x00094a7a) hc_cl_list_double_graphic_heading_pane

0x7788,	// (0x00094a8d) hc_cl_list_single_graphic_pane_ParamLimits

0x7788,	// (0x00094a8d) hc_cl_list_single_graphic_pane

0x77a0,	// (0x00094aa5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x77a0,	// (0x00094aa5) hc_cl_list_single_graphic_pane_g1

0x77ac,	// (0x00094ab1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x77ac,	// (0x00094ab1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009cdb5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009cdb5) hc_cl_list_single_graphic_pane_g

0x77c0,	// (0x00094ac5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x77c0,	// (0x00094ac5) hc_cl_list_single_graphic_pane_t1

0x77a0,	// (0x00094aa5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x77a0,	// (0x00094aa5) hc_cl_list_double_graphic_heading_pane_g1

0x77d5,	// (0x00094ada) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x77d5,	// (0x00094ada) hc_cl_list_double_graphic_heading_pane_g2

0x77e9,	// (0x00094aee) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x77e9,	// (0x00094aee) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009cdba) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009cdba) hc_cl_list_double_graphic_heading_pane_g

0x77fd,	// (0x00094b02) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x77fd,	// (0x00094b02) hc_cl_list_double_graphic_heading_pane_t1

0x7812,	// (0x00094b17) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7812,	// (0x00094b17) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009cdc1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009cdc1) hc_cl_list_double_graphic_heading_pane_t

0x7827,	// (0x00094b2c) vid4_progress_pane_g1

0x7839,	// (0x00094b3e) vid4_progress_pane_g2

0xa5ef,	// (0x000978f4) vid4_progress_pane_g3

0xaab1,	// (0x00097db6) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009cdc6) vid4_progress_pane_g

0xaacf,	// (0x00097dd4) vid4_progress_pane_t1

0xaae4,	// (0x00097de9) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009cdd1) vid4_progress_pane_t

0xab0f,	// (0x00097e14) wait_bar_pane_cp07

0xca1c,	// (0x00099d21) blid_firmament_pane_ParamLimits

0xca5f,	// (0x00099d64) popup_blid_sat_info2_window_g1

0xca83,	// (0x00099d88) popup_blid_sat_info2_window_t3

0xca91,	// (0x00099d96) popup_blid_sat_info2_window_t4

0xca9f,	// (0x00099da4) popup_blid_sat_info2_window_t5

0xcaad,	// (0x00099db2) popup_blid_sat_info2_window_t6

0xcabd,	// (0x00099dc2) popup_blid_sat_info2_window_t7

0xcacb,	// (0x00099dd0) popup_blid_sat_info2_window_t8

0xcad9,	// (0x00099dde) popup_blid_sat_info2_window_t9

0xcae7,	// (0x00099dec) popup_blid_sat_info2_window_t10

0xcbaf,	// (0x00099eb4) aid_firma_cardinal_ParamLimits

0xcbc3,	// (0x00099ec8) blid_firmament_pane_t1_ParamLimits

0xcbda,	// (0x00099edf) blid_firmament_pane_t2_ParamLimits

0xcbf1,	// (0x00099ef6) blid_firmament_pane_t3_ParamLimits

0xcc08,	// (0x00099f0d) blid_firmament_pane_t4_ParamLimits

0xf6df,	// (0x0009c9e4) blid_firmament_pane_t_ParamLimits

0xcc1f,	// (0x00099f24) blid_sat_info_pane_ParamLimits

0x9a0d,	// (0x00096d12) main_cam_set_pane_ParamLimits

0x5c93,	// (0x00092f98) aid_size_cell_colour_35_ParamLimits

0x5cb3,	// (0x00092fb8) aid_size_cell_colour_112_ParamLimits

0x5cd3,	// (0x00092fd8) aid_size_cell_effect_ParamLimits

0xc7de,	// (0x00099ae3) bg_tb_trans_pane_cp02_ParamLimits

0xaf22,	// (0x00098227) heading_imed_pane_ParamLimits

0x5cf3,	// (0x00092ff8) listscroll_imed_pane_ParamLimits

0xbe00,	// (0x00099105) popup_call2_audio_first_window_g5_ParamLimits

0xbe00,	// (0x00099105) popup_call2_audio_first_window_g5

0x62a4,	// (0x000935a9) aid_size_touch_image3_arrow_left_ParamLimits

0x62a4,	// (0x000935a9) aid_size_touch_image3_arrow_left

0x62d0,	// (0x000935d5) aid_size_touch_image3_arrow_right_ParamLimits

0x62d0,	// (0x000935d5) aid_size_touch_image3_arrow_right

0xaafa,	// (0x00097dff) vid4_progress_pane_t3

0x6012,	// (0x00093317) main_hwr_training_symbol_option_pane_ParamLimits

0x6012,	// (0x00093317) main_hwr_training_symbol_option_pane

0xd403,	// (0x0009a708) popup_hwr_training_preview_window_ParamLimits

0xd403,	// (0x0009a708) popup_hwr_training_preview_window

0x6032,	// (0x00093337) hwr_training_navi_pane_g5_ParamLimits

0x6032,	// (0x00093337) hwr_training_navi_pane_g5

0xd621,	// (0x0009a926) popup_char_count_window

0x9a0d,	// (0x00096d12) bg_popup_sub_pane_cp20_ParamLimits

0x729a,	// (0x0009459f) list_vitu2_match_list_pane_ParamLimits

0x72a9,	// (0x000945ae) vitu2_page_scroll_pane_ParamLimits

0x72a9,	// (0x000945ae) vitu2_page_scroll_pane

0xdb08,	// (0x0009ae0d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb08,	// (0x0009ae0d) list_single_hwr_training_symbol_option_pane

0xdb1b,	// (0x0009ae20) list_single_hwr_training_symbol_option_pane_g1

0xdb23,	// (0x0009ae28) list_single_hwr_training_symbol_option_pane_t1

0xdb31,	// (0x0009ae36) bg_button_pane_cp023

0xdb3a,	// (0x0009ae3f) bg_button_pane_cp024

0x7877,	// (0x00094b7c) vitu2_page_scroll_pane_g1

0x787f,	// (0x00094b84) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009cdd8) vitu2_page_scroll_pane_g

0x7889,	// (0x00094b8e) vitu2_page_scroll_pane_t1

0xc97c,	// (0x00099c81) popup_char_count_window_g1

0xdb6d,	// (0x0009ae72) popup_char_count_window_g2

0xdb76,	// (0x0009ae7b) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009cddd) popup_char_count_window_g

0xdb7f,	// (0x0009ae84) popup_char_count_window_t1

0x99bc,	// (0x00096cc1) main_vded2_pane

0xd100,	// (0x0009a405) aid_size_cell_imed_line

0xd10a,	// (0x0009a40f) grid_imed_line_width_pane

0xaa0c,	// (0x00097d11) vid4_indicators_pane_g4

0xdb8d,	// (0x0009ae92) cell_imed_line_width_pane_ParamLimits

0xdb8d,	// (0x0009ae92) cell_imed_line_width_pane

0xdba3,	// (0x0009aea8) cell_imed_line_width_pane_g1

0xcffb,	// (0x0009a300) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009cde4) cell_imed_line_width_pane_g

0x7898,	// (0x00094b9d) main_vded2_pane_g1_ParamLimits

0x7898,	// (0x00094b9d) main_vded2_pane_g1

0x78b3,	// (0x00094bb8) main_vded2_pane_g2_ParamLimits

0x78b3,	// (0x00094bb8) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009cde9) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009cde9) main_vded2_pane_g

0x78c5,	// (0x00094bca) vded2_slider_pane_ParamLimits

0x78c5,	// (0x00094bca) vded2_slider_pane

0x78d5,	// (0x00094bda) aid_size_touch_vded2_end

0x78df,	// (0x00094be4) aid_size_touch_vded2_playhead

0xdbac,	// (0x0009aeb1) aid_size_touch_vded2_start

0xdbb4,	// (0x0009aeb9) vded2_slider_bg_pane

0xdbbd,	// (0x0009aec2) vded2_slider_pane_g1

0xdbc6,	// (0x0009aecb) vded2_slider_pane_g2

0x78e9,	// (0x00094bee) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009cdee) vded2_slider_pane_g

0xdbce,	// (0x0009aed3) vded2_slider_bg_pane_g1

0xdbd7,	// (0x0009aedc) vded2_slider_bg_pane_g2

0xdbe0,	// (0x0009aee5) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009cdf5) vded2_slider_bg_pane_g

0x3934,	// (0x00090c39) aid_postcard_touch_down_pane_ParamLimits

0x3934,	// (0x00090c39) aid_postcard_touch_down_pane

0x394c,	// (0x00090c51) aid_postcard_touch_up_pane_ParamLimits

0x394c,	// (0x00090c51) aid_postcard_touch_up_pane

0x99bc,	// (0x00096cc1) main_blid2_pane

0xc7ec,	// (0x00099af1) popup_blid2_search_window

0x99bc,	// (0x00096cc1) blid2_gps_pane

0x99bc,	// (0x00096cc1) blid2_navig_pane

0x99bc,	// (0x00096cc1) blid2_search_pane

0x99bc,	// (0x00096cc1) blid2_tripm_pane

0x78f4,	// (0x00094bf9) blid2_search_pane_g1_ParamLimits

0x78f4,	// (0x00094bf9) blid2_search_pane_g1

0x7907,	// (0x00094c0c) blid2_search_pane_t1_ParamLimits

0x7907,	// (0x00094c0c) blid2_search_pane_t1

0x7919,	// (0x00094c1e) aid_size_cell_blid2_gps_ParamLimits

0x7919,	// (0x00094c1e) aid_size_cell_blid2_gps

0x7931,	// (0x00094c36) blid2_gps_pane_g1_ParamLimits

0x7931,	// (0x00094c36) blid2_gps_pane_g1

0x7945,	// (0x00094c4a) grid_blid2_satellite_pane_ParamLimits

0x7945,	// (0x00094c4a) grid_blid2_satellite_pane

0x795d,	// (0x00094c62) blid2_navig_pane_g1_ParamLimits

0x795d,	// (0x00094c62) blid2_navig_pane_g1

0x7969,	// (0x00094c6e) blid2_navig_pane_t1_ParamLimits

0x7969,	// (0x00094c6e) blid2_navig_pane_t1

0x7984,	// (0x00094c89) blid2_navig_pane_t2_ParamLimits

0x7984,	// (0x00094c89) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009cdfc) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009cdfc) blid2_navig_pane_t

0x799f,	// (0x00094ca4) blid2_navig_ring_pane_ParamLimits

0x799f,	// (0x00094ca4) blid2_navig_ring_pane

0x79ba,	// (0x00094cbf) blid2_speed_pane_ParamLimits

0x79ba,	// (0x00094cbf) blid2_speed_pane

0x79c6,	// (0x00094ccb) blid2_tripm_pane_g1_ParamLimits

0x79c6,	// (0x00094ccb) blid2_tripm_pane_g1

0x79e1,	// (0x00094ce6) blid2_tripm_pane_g2_ParamLimits

0x79e1,	// (0x00094ce6) blid2_tripm_pane_g2

0x79f5,	// (0x00094cfa) blid2_tripm_pane_g3_ParamLimits

0x79f5,	// (0x00094cfa) blid2_tripm_pane_g3

0x7a09,	// (0x00094d0e) blid2_tripm_pane_g4_ParamLimits

0x7a09,	// (0x00094d0e) blid2_tripm_pane_g4

0x7a1d,	// (0x00094d22) blid2_tripm_pane_g5_ParamLimits

0x7a1d,	// (0x00094d22) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009ce01) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009ce01) blid2_tripm_pane_g

0x7a43,	// (0x00094d48) blid2_tripm_pane_t1_ParamLimits

0x7a43,	// (0x00094d48) blid2_tripm_pane_t1

0x7a5c,	// (0x00094d61) blid2_tripm_pane_t2_ParamLimits

0x7a5c,	// (0x00094d61) blid2_tripm_pane_t2

0x7a75,	// (0x00094d7a) blid2_tripm_pane_t3_ParamLimits

0x7a75,	// (0x00094d7a) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009ce0e) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009ce0e) blid2_tripm_pane_t

0x7abc,	// (0x00094dc1) cell_blid2_satellite_pane_ParamLimits

0x7abc,	// (0x00094dc1) cell_blid2_satellite_pane

0x7ada,	// (0x00094ddf) cell_blid2_satellite_pane_g1

0xdbe9,	// (0x0009aeee) cell_blid2_satellite_pane_t1

0xcc2f,	// (0x00099f34) blid2_speed_pane_g1

0xdbf7,	// (0x0009aefc) blid2_speed_pane_t1

0xdc05,	// (0x0009af0a) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009ce17) blid2_speed_pane_t

0xcc2f,	// (0x00099f34) blid2_navig_ring_pane_g1

0x7ae3,	// (0x00094de8) blid2_navig_ring_pane_g2

0x7aeb,	// (0x00094df0) blid2_navig_ring_pane_g3

0x7af3,	// (0x00094df8) blid2_navig_ring_pane_g4

0x7afb,	// (0x00094e00) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009ce1c) blid2_navig_ring_pane_g

0x99bc,	// (0x00096cc1) bg_popup_window_pane_cp011

0xdc13,	// (0x0009af18) popup_blid2_search_window_g1

0xdc1b,	// (0x0009af20) popup_blid2_search_window_t1

0xdc29,	// (0x0009af2e) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009ce27) popup_blid2_search_window_t

0xabd8,	// (0x00097edd) main_browser_pane_g1

0xa170,	// (0x00097475) main_browser_pane_ParamLimits

0x9a0d,	// (0x00096d12) bg_button_pane_cp011_ParamLimits

0x6b08,	// (0x00093e0d) cell_vitu2_function_pane_g1_ParamLimits

0xc7de,	// (0x00099ae3) bg_popup_sub_pane_cp22_ParamLimits

0x0046,	// (0x0008d34b) input_focus_pane_cp08_ParamLimits

0x7443,	// (0x00094748) popup_vitu2_query_button_pane_ParamLimits

0x7443,	// (0x00094748) popup_vitu2_query_button_pane

0x005d,	// (0x0008d362) popup_vitu2_query_input_button_pane

0xd8b3,	// (0x0009abb8) popup_vitu2_query_window_g1_ParamLimits

0x0067,	// (0x0008d36c) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009cd28) popup_vitu2_query_window_g_ParamLimits

0x99bc,	// (0x00096cc1) bg_button_pane_cp026

0x7b03,	// (0x00094e08) popup_vitu2_query_input_button_pane_g1

0x99bc,	// (0x00096cc1) bg_button_pane_cp025

0xdc37,	// (0x0009af3c) popup_vitu2_query_button_pane_t1

0x5058,	// (0x0009235d) main_mp3_pane_t6

0x5066,	// (0x0009236b) popup_slider_window_cp01

0xa970,	// (0x00097c75) cam4_battery_pane

0xa9c5,	// (0x00097cca) cam4_battery_pane_cp02

0xaaa9,	// (0x00097dae) cam4_battery_pane_cp01

0xaaa9,	// (0x00097dae) cam4_battery_pane_cp03

0xcc2f,	// (0x00099f34) cam4_battery_pane_g1

0xdc45,	// (0x0009af4a) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009ce2c) cam4_battery_pane_g

0xcaf5,	// (0x00099dfa) popup_blid_sat_info2_window_t11

0x3273,	// (0x00090578) aid_size_touch_mv_arrow_left_ParamLimits

0x329c,	// (0x000905a1) aid_size_touch_mv_arrow_right_ParamLimits

0xb322,	// (0x00098627) navi_pane_g1_ParamLimits

0x32db,	// (0x000905e0) navi_pane_g2_ParamLimits

0x3309,	// (0x0009060e) navi_pane_g3_ParamLimits

0xf3f1,	// (0x0009c6f6) navi_pane_g_ParamLimits

0x3363,	// (0x00090668) navi_pane_mv_t1_ParamLimits

0x5cff,	// (0x00093004) grid_imed_effect_pane_ParamLimits

0x1e18,	// (0x0008f11d) aid_placing_vt_slider_lsc

0xa461,	// (0x00097766) aid_placing_vt_slider_prt

0x9a0d,	// (0x00096d12) bg_tb_trans_pane_cp01_ParamLimits

0xcd7f,	// (0x0009a084) popup_image_details_window_g1_ParamLimits

0xcd92,	// (0x0009a097) popup_image_details_window_g2_ParamLimits

0xcda7,	// (0x0009a0ac) popup_image_details_window_g3_ParamLimits

0xcda7,	// (0x0009a0ac) popup_image_details_window_g3

0xf724,	// (0x0009ca29) popup_image_details_window_g_ParamLimits

0xcdbb,	// (0x0009a0c0) popup_image_details_window_t1_ParamLimits

0xcdcd,	// (0x0009a0d2) popup_image_details_window_t2_ParamLimits

0xcde6,	// (0x0009a0eb) popup_image_details_window_t3_ParamLimits

0xcdfa,	// (0x0009a0ff) popup_image_details_window_t4_ParamLimits

0xce15,	// (0x0009a11a) popup_image_details_window_t5_ParamLimits

0xf72b,	// (0x0009ca30) popup_image_details_window_t_ParamLimits

0x7733,	// (0x00094a38) cl_header_name_pane_ParamLimits

0x7733,	// (0x00094a38) cl_header_name_pane

0x7b0b,	// (0x00094e10) cl_header_name_pane_t1_ParamLimits

0x7b0b,	// (0x00094e10) cl_header_name_pane_t1

0x7b2c,	// (0x00094e31) cl_header_name_pane_t2_ParamLimits

0x7b2c,	// (0x00094e31) cl_header_name_pane_t2

0x7b6e,	// (0x00094e73) cl_header_name_pane_t3_ParamLimits

0x7b6e,	// (0x00094e73) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009ce31) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009ce31) cl_header_name_pane_t

0x3334,	// (0x00090639) navi_pane_mv_g2_ParamLimits

0xd5fb,	// (0x0009a900) field_vitu2_entry_pane_g1_ParamLimits

0xd607,	// (0x0009a90c) field_vitu2_entry_pane_g2_ParamLimits

0xd613,	// (0x0009a918) field_vitu2_entry_pane_g3_ParamLimits

0xd613,	// (0x0009a918) field_vitu2_entry_pane_g3

0xf922,	// (0x0009cc27) field_vitu2_entry_pane_g_ParamLimits

0x6a7f,	// (0x00093d84) cell_vitu2_itu_pane_g1_ParamLimits

0x6a8f,	// (0x00093d94) cell_vitu2_itu_pane_g2_ParamLimits

0x6a8f,	// (0x00093d94) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0009cc33) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0009cc33) cell_vitu2_itu_pane_g

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp05_ParamLimits

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp05

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp03

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp04

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp10_ParamLimits

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp10

0x0186,	// (0x0008d48b) bg_vkb2_func_pane_cp08

0x76dd,	// (0x000949e2) bg_vkb2_func_pane_cp06

0x76eb,	// (0x000949f0) bg_vkb2_func_pane_cp07

0xdb43,	// (0x0009ae48) bg_vkb2_func_pane_cp11_ParamLimits

0xdb43,	// (0x0009ae48) bg_vkb2_func_pane_cp11

0xdb58,	// (0x0009ae5d) bg_vkb2_func_pane_cp12_ParamLimits

0xdb58,	// (0x0009ae5d) bg_vkb2_func_pane_cp12

0x99bc,	// (0x00096cc1) bg_vkb2_func_pane_cp09

0xd633,	// (0x0009a938) bg_vkb2_func_pane_g1

0xace9,	// (0x00097fee) bg_vkb2_func_pane_g2

0xd63b,	// (0x0009a940) bg_vkb2_func_pane_g3

0xd643,	// (0x0009a948) bg_vkb2_func_pane_g4

0xd878,	// (0x0009ab7d) bg_vkb2_func_pane_g5

0xd65b,	// (0x0009a960) bg_vkb2_func_pane_g6

0xd663,	// (0x0009a968) bg_vkb2_func_pane_g7

0xd653,	// (0x0009a958) bg_vkb2_func_pane_g8

0xacc9,	// (0x00097fce) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009ce38) bg_vkb2_func_pane_g

0x7a31,	// (0x00094d36) blid2_tripm_pane_g6_ParamLimits

0x7a31,	// (0x00094d36) blid2_tripm_pane_g6

0xd4bb,	// (0x0009a7c0) mp4_progress_pane_g1

0x7aa8,	// (0x00094dad) blid2_tripm_values_pane_ParamLimits

0x7aa8,	// (0x00094dad) blid2_tripm_values_pane

0x7b9f,	// (0x00094ea4) blid2_tripm_values_pane_t1

0x7bad,	// (0x00094eb2) blid2_tripm_values_pane_t2

0x7bbb,	// (0x00094ec0) blid2_tripm_values_pane_t3

0x7bc9,	// (0x00094ece) blid2_tripm_values_pane_t4

0x7bd7,	// (0x00094edc) blid2_tripm_values_pane_t5

0x7be5,	// (0x00094eea) blid2_tripm_values_pane_t6

0x7bf3,	// (0x00094ef8) blid2_tripm_values_pane_t7

0x7c01,	// (0x00094f06) blid2_tripm_values_pane_t8

0x7c0f,	// (0x00094f14) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009ce4b) blid2_tripm_values_pane_t

0x1e55,	// (0x0008f15a) call_video_pane_t1_ParamLimits

0x1e6f,	// (0x0008f174) call_video_pane_t2_ParamLimits

0xf273,	// (0x0009c578) call_video_pane_t_ParamLimits

0xfe51,	// (0x0008d156) msg_header_pane_g1_ParamLimits

0xb544,	// (0x00098849) msg_header_pane_g2_ParamLimits

0xb544,	// (0x00098849) msg_header_pane_g2

0x0001,

0xf494,	// (0x0009c799) msg_header_pane_g_ParamLimits

0xf494,	// (0x0009c799) msg_header_pane_g

0xa170,	// (0x00097475) main_clock2_pane_ParamLimits

0x59e6,	// (0x00092ceb) grid_clock2_toolbar_pane_ParamLimits

0x59e6,	// (0x00092ceb) grid_clock2_toolbar_pane

0x59e6,	// (0x00092ceb) listscroll_clock2_pane_ParamLimits

0x59e6,	// (0x00092ceb) listscroll_clock2_pane

0x5add,	// (0x00092de2) main_clock2_pane_t3_ParamLimits

0x5add,	// (0x00092de2) main_clock2_pane_t3

0x5b01,	// (0x00092e06) main_clock2_pane_t4_ParamLimits

0x5b01,	// (0x00092e06) main_clock2_pane_t4

0xdc4f,	// (0x0009af54) cell_clock2_toolbar_pane

0xdc57,	// (0x0009af5c) cell_clock2_toolbar_pane_cp01

0xdc57,	// (0x0009af5c) cell_clock2_toolbar_pane_cp02

0xdc5f,	// (0x0009af64) cell_clock2_toolbar_pane_cp03

0xdc67,	// (0x0009af6c) list_clock2_pane

0xb288,	// (0x0009858d) scroll_pane_cp10

0xdc6f,	// (0x0009af74) list_single_clock2_pane_ParamLimits

0xdc6f,	// (0x0009af74) list_single_clock2_pane

0xb3c2,	// (0x000986c7) list_highlight_pane_cp08

0xdc7c,	// (0x0009af81) list_single_clock2_pane_t1

0xdc8a,	// (0x0009af8f) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009ce5e) list_single_clock2_pane_t

0x99bc,	// (0x00096cc1) bg_button_pane_cp10

0xdc98,	// (0x0009af9d) cell_clock2_toolbar_pane_g1

0x38c0,	// (0x00090bc5) aid_main_viewer_pane_g1_ParamLimits

0x38c0,	// (0x00090bc5) aid_main_viewer_pane_g1

0x38ce,	// (0x00090bd3) aid_main_viewer_pane_g2_ParamLimits

0x38ce,	// (0x00090bd3) aid_main_viewer_pane_g2

0x38dc,	// (0x00090be1) aid_main_viewer_pane_g3_ParamLimits

0x38dc,	// (0x00090be1) aid_main_viewer_pane_g3

0x38eb,	// (0x00090bf0) aid_main_viewer_pane_g4_ParamLimits

0x38eb,	// (0x00090bf0) aid_main_viewer_pane_g4

0x0003,

0xf4a5,	// (0x0009c7aa) aid_main_viewer_pane_g_ParamLimits

0xf4a5,	// (0x0009c7aa) aid_main_viewer_pane_g

0x423e,	// (0x00091543) main_calc_pane_ParamLimits

0x4252,	// (0x00091557) main_dialer2_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_cam6_pane

0x99bc,	// (0x00096cc1) main_vid6_pane

0x59f2,	// (0x00092cf7) listscroll_gen_pane_cp06_ParamLimits

0x59f2,	// (0x00092cf7) listscroll_gen_pane_cp06

0x5b24,	// (0x00092e29) main_clock2_pane_t5_ParamLimits

0x5b24,	// (0x00092e29) main_clock2_pane_t5

0x5b84,	// (0x00092e89) aid_call2_pane_cp10_ParamLimits

0x5b96,	// (0x00092e9b) aid_call_pane_cp10_ParamLimits

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ba8,	// (0x00092ead) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ba8,	// (0x00092ead) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2f7,	// (0x000985fc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0009cae0) popup_clock_analogue_window_cp10_g_ParamLimits

0x5bbe,	// (0x00092ec3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6251,	// (0x00093556) cell_dialer2_keypad_pane_g2_ParamLimits

0x6251,	// (0x00093556) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0009cbc6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0009cbc6) cell_dialer2_keypad_pane_g

0x626d,	// (0x00093572) cell_dialer2_keypad_pane_t1

0x6e31,	// (0x00094136) main_cset_text2_pane_ParamLimits

0x6e31,	// (0x00094136) main_cset_text2_pane

0xdaab,	// (0x0009adb0) area_vitu2_query_pane_g1_ParamLimits

0x014b,	// (0x0008d450) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009cd7b) area_vitu2_query_pane_g_ParamLimits

0x76b9,	// (0x000949be) area_vitu2_query_pane_t7_ParamLimits

0x76b9,	// (0x000949be) area_vitu2_query_pane_t7

0x76dd,	// (0x000949e2) bg_button_pane_cp018_ParamLimits

0x76eb,	// (0x000949f0) bg_button_pane_cp021_ParamLimits

0x0186,	// (0x0008d48b) bg_button_pane_cp022_ParamLimits

0x0186,	// (0x0008d48b) bg_vkb2_func_pane_cp08_ParamLimits

0x76dd,	// (0x000949e2) bg_vkb2_func_pane_cp06_ParamLimits

0x76eb,	// (0x000949f0) bg_vkb2_func_pane_cp07_ParamLimits

0x0197,	// (0x0008d49c) input_focus_pane_cp09_ParamLimits

0xab2b,	// (0x00097e30) cam6_autofocus_pane_ParamLimits

0xab2b,	// (0x00097e30) cam6_autofocus_pane

0x7c1d,	// (0x00094f22) cam6_image_uncrop_pane_ParamLimits

0x7c1d,	// (0x00094f22) cam6_image_uncrop_pane

0x7c2c,	// (0x00094f31) cam6_indi_pane_ParamLimits

0x7c2c,	// (0x00094f31) cam6_indi_pane

0x7c42,	// (0x00094f47) cam6_mode_pane_ParamLimits

0x7c42,	// (0x00094f47) cam6_mode_pane

0x7c54,	// (0x00094f59) cam6_timer_pane_ParamLimits

0x7c54,	// (0x00094f59) cam6_timer_pane

0x7c60,	// (0x00094f65) cam6_zoom_pane_ParamLimits

0x7c60,	// (0x00094f65) cam6_zoom_pane

0x7c6e,	// (0x00094f73) cam6_mode_pane_g1_ParamLimits

0x7c6e,	// (0x00094f73) cam6_mode_pane_g1

0x7c7e,	// (0x00094f83) cam6_mode_pane_g2_ParamLimits

0x7c7e,	// (0x00094f83) cam6_mode_pane_g2

0x7c8e,	// (0x00094f93) cam6_mode_pane_g3_ParamLimits

0x7c8e,	// (0x00094f93) cam6_mode_pane_g3

0x7c9e,	// (0x00094fa3) cam6_mode_pane_g4_ParamLimits

0x7c9e,	// (0x00094fa3) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009ce63) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009ce63) cam6_mode_pane_g

0xdca0,	// (0x0009afa5) bg_tb_trans_pane_cp08_ParamLimits

0xdca0,	// (0x0009afa5) bg_tb_trans_pane_cp08

0xdcae,	// (0x0009afb3) cam6_battery_pane_ParamLimits

0xdcae,	// (0x0009afb3) cam6_battery_pane

0xdcc4,	// (0x0009afc9) cam6_indi_pane_g1_ParamLimits

0xdcc4,	// (0x0009afc9) cam6_indi_pane_g1

0xdcd6,	// (0x0009afdb) cam6_indi_pane_g2_ParamLimits

0xdcd6,	// (0x0009afdb) cam6_indi_pane_g2

0xdce8,	// (0x0009afed) cam6_indi_pane_g3_ParamLimits

0xdce8,	// (0x0009afed) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009ce6c) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009ce6c) cam6_indi_pane_g

0xdcfa,	// (0x0009afff) cam6_indi_pane_t1_ParamLimits

0xdcfa,	// (0x0009afff) cam6_indi_pane_t1

0x682e,	// (0x00093b33) cam6_autofocus_pane_g1

0x6836,	// (0x00093b3b) cam6_autofocus_pane_g2

0x683e,	// (0x00093b43) cam6_autofocus_pane_g3

0x6846,	// (0x00093b4b) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009ce73) cam6_autofocus_pane_g

0xdd20,	// (0x0009b025) cam6_timer_pane_g1

0xdd28,	// (0x0009b02d) cam6_timer_pane_t1

0xdd36,	// (0x0009b03b) cam6_zoom_cont_pane

0xdd3e,	// (0x0009b043) cam6_zoom_pane_g1

0xdd46,	// (0x0009b04b) cam6_zoom_pane_g2

0x7cae,	// (0x00094fb3) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009ce7c) cam6_zoom_pane_g

0xcc2f,	// (0x00099f34) cam6_battery_pane_g1

0xcc2f,	// (0x00099f34) cam6_battery_pane_g2

0x0001,

0xf6e8,	// (0x0009c9ed) cam6_battery_pane_g

0xdd4e,	// (0x0009b053) cam6_zoom_cont_pane_g1

0xdd57,	// (0x0009b05c) cam6_zoom_cont_pane_g2

0xdd60,	// (0x0009b065) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009ce83) cam6_zoom_cont_pane_g

0x7ccb,	// (0x00094fd0) cam6_mode_pane_cp_ParamLimits

0x7ccb,	// (0x00094fd0) cam6_mode_pane_cp

0x7c60,	// (0x00094f65) cam6_zoom_pane_cp_ParamLimits

0x7c60,	// (0x00094f65) cam6_zoom_pane_cp

0x7cdd,	// (0x00094fe2) vid6_image_uncrop_cif_pane_ParamLimits

0x7cdd,	// (0x00094fe2) vid6_image_uncrop_cif_pane

0x7ced,	// (0x00094ff2) vid6_image_uncrop_nhd_pane_ParamLimits

0x7ced,	// (0x00094ff2) vid6_image_uncrop_nhd_pane

0x7c1d,	// (0x00094f22) vid6_image_uncrop_vga_pane_ParamLimits

0x7c1d,	// (0x00094f22) vid6_image_uncrop_vga_pane

0x7cfc,	// (0x00095001) vid6_image_uncrop_wvga_pane_ParamLimits

0x7cfc,	// (0x00095001) vid6_image_uncrop_wvga_pane

0x7d0b,	// (0x00095010) vid6_indi_pane_ParamLimits

0x7d0b,	// (0x00095010) vid6_indi_pane

0xdca0,	// (0x0009afa5) bg_tb_trans_pane_cp09_ParamLimits

0xdca0,	// (0x0009afa5) bg_tb_trans_pane_cp09

0xdd78,	// (0x0009b07d) cam6_battery_pane_cp_ParamLimits

0xdd78,	// (0x0009b07d) cam6_battery_pane_cp

0xdd84,	// (0x0009b089) vid6_indi_pane_g1_ParamLimits

0xdd84,	// (0x0009b089) vid6_indi_pane_g1

0xdd96,	// (0x0009b09b) vid6_indi_pane_g2_ParamLimits

0xdd96,	// (0x0009b09b) vid6_indi_pane_g2

0xdda8,	// (0x0009b0ad) vid6_indi_pane_g3_ParamLimits

0xdda8,	// (0x0009b0ad) vid6_indi_pane_g3

0xddbf,	// (0x0009b0c4) vid6_indi_pane_g4_ParamLimits

0xddbf,	// (0x0009b0c4) vid6_indi_pane_g4

0xddd6,	// (0x0009b0db) vid6_indi_pane_g5_ParamLimits

0xddd6,	// (0x0009b0db) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009ce8a) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009ce8a) vid6_indi_pane_g

0xddf0,	// (0x0009b0f5) vid6_indi_pane_t1_ParamLimits

0xddf0,	// (0x0009b0f5) vid6_indi_pane_t1

0xde06,	// (0x0009b10b) vid6_indi_pane_t2_ParamLimits

0xde06,	// (0x0009b10b) vid6_indi_pane_t2

0xde2e,	// (0x0009b133) vid6_indi_pane_t3_ParamLimits

0xde2e,	// (0x0009b133) vid6_indi_pane_t3

0xde56,	// (0x0009b15b) vid6_indi_pane_t4_ParamLimits

0xde56,	// (0x0009b15b) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009ce95) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009ce95) vid6_indi_pane_t

0xde7a,	// (0x0009b17f) wait_bar_pane_cp08

0x7d23,	// (0x00095028) main_cset_text2_pane_t1_ParamLimits

0x7d23,	// (0x00095028) main_cset_text2_pane_t1

0x7cb6,	// (0x00094fbb) listscroll_gen_pane_cp06_t1_ParamLimits

0x7cb6,	// (0x00094fbb) listscroll_gen_pane_cp06_t1

0x99bc,	// (0x00096cc1) main_cam6_set_pane

0xce5f,	// (0x0009a164) bg_tb_trans_pane_cp06_ParamLimits

0xa978,	// (0x00097c7d) cam4_indicators_pane_g1_ParamLimits

0xa989,	// (0x00097c8e) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0009cc03) cam4_indicators_pane_g_ParamLimits

0xa9a1,	// (0x00097ca6) cam4_indicators_pane_t1_ParamLimits

0x9a0d,	// (0x00096d12) bg_tb_trans_pane_cp07_ParamLimits

0xa9cf,	// (0x00097cd4) vid4_indicators_pane_g1_ParamLimits

0xa9e5,	// (0x00097cea) vid4_indicators_pane_g2_ParamLimits

0xa9f9,	// (0x00097cfe) vid4_indicators_pane_g3_ParamLimits

0xaa0c,	// (0x00097d11) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0009cc15) vid4_indicators_pane_g_ParamLimits

0xaa2a,	// (0x00097d2f) vid4_indicators_pane_t1_ParamLimits

0x7827,	// (0x00094b2c) vid4_progress_pane_g1_ParamLimits

0x7839,	// (0x00094b3e) vid4_progress_pane_g2_ParamLimits

0xa5ef,	// (0x000978f4) vid4_progress_pane_g3_ParamLimits

0xaab1,	// (0x00097db6) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009cdc6) vid4_progress_pane_g_ParamLimits

0xaacf,	// (0x00097dd4) vid4_progress_pane_t1_ParamLimits

0xaae4,	// (0x00097de9) vid4_progress_pane_t2_ParamLimits

0xaafa,	// (0x00097dff) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009cdd1) vid4_progress_pane_t_ParamLimits

0xab0f,	// (0x00097e14) wait_bar_pane_cp07_ParamLimits

0x7d41,	// (0x00095046) main_cam6_set_pane_g2_ParamLimits

0x7d41,	// (0x00095046) main_cam6_set_pane_g2

0x7d67,	// (0x0009506c) main_cset6_listscroll_pane_ParamLimits

0x7d67,	// (0x0009506c) main_cset6_listscroll_pane

0x7d85,	// (0x0009508a) main_cset6_slider_pane_ParamLimits

0x7d85,	// (0x0009508a) main_cset6_slider_pane

0x7d9b,	// (0x000950a0) main_cset6_text2_pane_ParamLimits

0x7d9b,	// (0x000950a0) main_cset6_text2_pane

0xde89,	// (0x0009b18e) main_cset6_text_pane

0xde91,	// (0x0009b196) main_cset_list_pane_copy1_ParamLimits

0xde91,	// (0x0009b196) main_cset_list_pane_copy1

0xdea1,	// (0x0009b1a6) scroll_pane_cp028_copy1

0x2ef0,	// (0x000901f5) cset_list_set_pane_copy1

0x7da9,	// (0x000950ae) aid_position_infowindow_above_copy1

0x7db1,	// (0x000950b6) aid_position_infowindow_below_copy1

0x7db9,	// (0x000950be) cset_list_set_pane_g1_copy1

0x01ce,	// (0x0008d4d3) cset_list_set_pane_g3_copy1_ParamLimits

0x01ce,	// (0x0008d4d3) cset_list_set_pane_g3_copy1

0x01dd,	// (0x0008d4e2) cset_list_set_pane_t1_copy1_ParamLimits

0x01dd,	// (0x0008d4e2) cset_list_set_pane_t1_copy1

0x9a0d,	// (0x00096d12) list_highlight_pane_cp021_copy1_ParamLimits

0x9a0d,	// (0x00096d12) list_highlight_pane_cp021_copy1

0xdeaa,	// (0x0009b1af) cset6_slider_pane_ParamLimits

0xdeaa,	// (0x0009b1af) cset6_slider_pane

0xded6,	// (0x0009b1db) main_cset6_slider_pane_g1_ParamLimits

0xded6,	// (0x0009b1db) main_cset6_slider_pane_g1

0x7dc1,	// (0x000950c6) main_cset6_slider_pane_g2_ParamLimits

0x7dc1,	// (0x000950c6) main_cset6_slider_pane_g2

0xdefe,	// (0x0009b203) main_cset6_slider_pane_g3_ParamLimits

0xdefe,	// (0x0009b203) main_cset6_slider_pane_g3

0x7de9,	// (0x000950ee) main_cset6_slider_pane_g4_ParamLimits

0x7de9,	// (0x000950ee) main_cset6_slider_pane_g4

0x7df5,	// (0x000950fa) main_cset6_slider_pane_g5_ParamLimits

0x7df5,	// (0x000950fa) main_cset6_slider_pane_g5

0xd766,	// (0x0009aa6b) main_cset6_slider_pane_g7_ParamLimits

0xd766,	// (0x0009aa6b) main_cset6_slider_pane_g7

0xd772,	// (0x0009aa77) main_cset6_slider_pane_g8_ParamLimits

0xd772,	// (0x0009aa77) main_cset6_slider_pane_g8

0x6ee0,	// (0x000941e5) main_cset6_slider_pane_g9_ParamLimits

0x6ee0,	// (0x000941e5) main_cset6_slider_pane_g9

0x6eec,	// (0x000941f1) main_cset6_slider_pane_g10_ParamLimits

0x6eec,	// (0x000941f1) main_cset6_slider_pane_g10

0x6ef8,	// (0x000941fd) main_cset6_slider_pane_g11_ParamLimits

0x6ef8,	// (0x000941fd) main_cset6_slider_pane_g11

0x6f04,	// (0x00094209) main_cset6_slider_pane_g12_ParamLimits

0x6f04,	// (0x00094209) main_cset6_slider_pane_g12

0x6f10,	// (0x00094215) main_cset6_slider_pane_g13_ParamLimits

0x6f10,	// (0x00094215) main_cset6_slider_pane_g13

0x6f1c,	// (0x00094221) main_cset6_slider_pane_g14_ParamLimits

0x6f1c,	// (0x00094221) main_cset6_slider_pane_g14

0x7e03,	// (0x00095108) main_cset6_slider_pane_g15_ParamLimits

0x7e03,	// (0x00095108) main_cset6_slider_pane_g15

0x6f40,	// (0x00094245) main_cset6_slider_pane_g16_ParamLimits

0x6f40,	// (0x00094245) main_cset6_slider_pane_g16

0x6f4e,	// (0x00094253) main_cset6_slider_pane_g17_ParamLimits

0x6f4e,	// (0x00094253) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009ce9e) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009ce9e) main_cset6_slider_pane_g

0xdf0a,	// (0x0009b20f) main_cset6_slider_pane_t1_ParamLimits

0xdf0a,	// (0x0009b20f) main_cset6_slider_pane_t1

0x7e33,	// (0x00095138) main_cset6_slider_pane_t2_ParamLimits

0x7e33,	// (0x00095138) main_cset6_slider_pane_t2

0x7e5e,	// (0x00095163) main_cset6_slider_pane_t3_ParamLimits

0x7e5e,	// (0x00095163) main_cset6_slider_pane_t3

0x7e89,	// (0x0009518e) main_cset6_slider_pane_t4_ParamLimits

0x7e89,	// (0x0009518e) main_cset6_slider_pane_t4

0x7eb4,	// (0x000951b9) main_cset6_slider_pane_t5_ParamLimits

0x7eb4,	// (0x000951b9) main_cset6_slider_pane_t5

0xdf4b,	// (0x0009b250) main_cset6_slider_pane_t7_ParamLimits

0xdf4b,	// (0x0009b250) main_cset6_slider_pane_t7

0x7ee1,	// (0x000951e6) main_cset6_slider_pane_t8_ParamLimits

0x7ee1,	// (0x000951e6) main_cset6_slider_pane_t8

0x7f05,	// (0x0009520a) main_cset6_slider_pane_t9_ParamLimits

0x7f05,	// (0x0009520a) main_cset6_slider_pane_t9

0x7f29,	// (0x0009522e) main_cset6_slider_pane_t10_ParamLimits

0x7f29,	// (0x0009522e) main_cset6_slider_pane_t10

0x7f4d,	// (0x00095252) main_cset6_slider_pane_t11_ParamLimits

0x7f4d,	// (0x00095252) main_cset6_slider_pane_t11

0xdf81,	// (0x0009b286) main_cset6_slider_pane_t14_ParamLimits

0xdf81,	// (0x0009b286) main_cset6_slider_pane_t14

0xdfba,	// (0x0009b2bf) main_cset6_slider_pane_t15_ParamLimits

0xdfba,	// (0x0009b2bf) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009cec3) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009cec3) main_cset6_slider_pane_t

0xd82a,	// (0x0009ab2f) cset_slider_pane_g1_copy1

0xd833,	// (0x0009ab38) cset_slider_pane_g2_copy1

0xd83c,	// (0x0009ab41) cset_slider_pane_g3_copy1

0x99bc,	// (0x00096cc1) bg_popup_sub_pane_cp011_copy1

0xdff3,	// (0x0009b2f8) main_cset_text_pane_g1_copy1

0xd8c7,	// (0x0009abcc) main_cset_text_pane_t1_copy1

0xd8d5,	// (0x0009abda) main_cset_text_pane_t2_copy1

0xd8e3,	// (0x0009abe8) main_cset_text_pane_t3_copy1

0xd8f1,	// (0x0009abf6) main_cset_text_pane_t4_copy1

0xd8ff,	// (0x0009ac04) main_cset_text_pane_t5_copy1

0xdffb,	// (0x0009b300) main_cset_text_pane_t6_copy1

0xe009,	// (0x0009b30e) main_cset_text_pane_t7_copy1

0x7d23,	// (0x00095028) main_cset_text2_pane_t1_copy1

0x9a0d,	// (0x00096d12) main_ncimui_pane

0x44e0,	// (0x000917e5) popup_query_ncimui_window_ParamLimits

0x44e0,	// (0x000917e5) popup_query_ncimui_window

0xa6c3,	// (0x000979c8) field_cale_ev2_pane_g4_ParamLimits

0xa6c3,	// (0x000979c8) field_cale_ev2_pane_g4

0x6123,	// (0x00093428) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6123,	// (0x00093428) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0009cba1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0009cba1) cell_video_dialer_keypad_pane_g

0x613b,	// (0x00093440) cell_video_dialer_keypad_pane_t1

0x99bc,	// (0x00096cc1) bg_popup_window_pane_cp012

0xb174,	// (0x00098479) heading_pane_cp06

0xe035,	// (0x0009b33a) ncim_query_content_pane

0x99bc,	// (0x00096cc1) bg_popup_heading_pane_cp01

0xe03d,	// (0x0009b342) ncim_heading_pane_t1

0xe04b,	// (0x0009b350) ncim_indicator_popup_pane

0xe05d,	// (0x0009b362) ncim_query_button_pane

0xe073,	// (0x0009b378) ncim_query_content_pane_t1

0xe085,	// (0x0009b38a) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0009cf07) ncim_query_content_pane_t

0xe0bf,	// (0x0009b3c4) ncim_query_list_pane

0xe0d1,	// (0x0009b3d6) ncim_query_popup_pane

0xe04b,	// (0x0009b350) ncim_indicator_popup_pane_ParamLimits

0x8099,	// (0x0009539e) ncim_query_content_pane_g1_ParamLimits

0x8099,	// (0x0009539e) ncim_query_content_pane_g1

0xe073,	// (0x0009b378) ncim_query_content_pane_t1_ParamLimits

0xe085,	// (0x0009b38a) ncim_query_content_pane_t2_ParamLimits

0x80a5,	// (0x000953aa) ncim_query_content_pane_t3_ParamLimits

0x80a5,	// (0x000953aa) ncim_query_content_pane_t3

0x80cd,	// (0x000953d2) ncim_query_content_pane_t4_ParamLimits

0x80cd,	// (0x000953d2) ncim_query_content_pane_t4

0x80f5,	// (0x000953fa) ncim_query_content_pane_t5_ParamLimits

0x80f5,	// (0x000953fa) ncim_query_content_pane_t5

0xe097,	// (0x0009b39c) ncim_query_content_pane_t6_ParamLimits

0xe097,	// (0x0009b39c) ncim_query_content_pane_t6

0xfc02,	// (0x0009cf07) ncim_query_content_pane_t_ParamLimits

0xe0bf,	// (0x0009b3c4) ncim_query_list_pane_ParamLimits

0xe0d1,	// (0x0009b3d6) ncim_query_popup_pane_ParamLimits

0xe0e5,	// (0x0009b3ea) wait_bar_pane_cp04

0x99bc,	// (0x00096cc1) input_focus_pane_cp011

0xe0ed,	// (0x0009b3f2) ncim_query_popup_pane_t1

0xe0fb,	// (0x0009b400) ncim_list_query_list_pane_ParamLimits

0xe0fb,	// (0x0009b400) ncim_list_query_list_pane

0x99bc,	// (0x00096cc1) bg_button_pane_cp027

0xe10e,	// (0x0009b413) ncim_query_button_pane_g1

0x99bc,	// (0x00096cc1) list_highlight_pane_cp012

0xe118,	// (0x0009b41d) ncim_list_query_list_pane_g1

0xe120,	// (0x0009b425) ncim_list_query_list_pane_t1

0xa995,	// (0x00097c9a) cam4_indicators_pane_g3_ParamLimits

0xa995,	// (0x00097c9a) cam4_indicators_pane_g3

0xaa18,	// (0x00097d1d) vid4_indicators_pane_g5_ParamLimits

0xaa18,	// (0x00097d1d) vid4_indicators_pane_g5

0xaac0,	// (0x00097dc5) vid4_progress_pane_g5_ParamLimits

0xaac0,	// (0x00097dc5) vid4_progress_pane_g5

0x7f87,	// (0x0009528c) main_ncimui_pane_g1

0x7fed,	// (0x000952f2) ncimui_group_query_pane_ParamLimits

0x7fed,	// (0x000952f2) ncimui_group_query_pane

0x8035,	// (0x0009533a) ncimui_list_pane_ParamLimits

0x8035,	// (0x0009533a) ncimui_list_pane

0x805c,	// (0x00095361) ncimui_text_pane_ParamLimits

0x805c,	// (0x00095361) ncimui_text_pane

0x811d,	// (0x00095422) ncimui_text_pane_t1_ParamLimits

0x811d,	// (0x00095422) ncimui_text_pane_t1

0xe12e,	// (0x0009b433) ncimui_list_single_graphic_pane_ParamLimits

0xe12e,	// (0x0009b433) ncimui_list_single_graphic_pane

0x813b,	// (0x00095440) ncimui_query_pane_ParamLimits

0x813b,	// (0x00095440) ncimui_query_pane

0x99bc,	// (0x00096cc1) list_highlight_pane_cp013

0xe13e,	// (0x0009b443) ncim_list_query_list_pane_t1_copy1

0xe118,	// (0x0009b41d) ncim_list_single_graphic_pane_g1

0xe14c,	// (0x0009b451) ncim_query_button_pane_cp01

0xe158,	// (0x0009b45d) ncim_query_entry_pane_ParamLimits

0xe158,	// (0x0009b45d) ncim_query_entry_pane

0xe16b,	// (0x0009b470) ncimui_query_pane_g1

0xe177,	// (0x0009b47c) ncimui_query_pane_t1_ParamLimits

0xe177,	// (0x0009b47c) ncimui_query_pane_t1

0x9a0d,	// (0x00096d12) input_focus_pane_cp012

0xe190,	// (0x0009b495) ncim_query_entry_pane_t1

0xa170,	// (0x00097475) main_im_pane_ParamLimits

0x9a0d,	// (0x00096d12) main_mobtv_pane_ParamLimits

0x9a0d,	// (0x00096d12) main_mobtv_pane

0x7e1b,	// (0x00095120) main_cset6_slider_pane_g18_ParamLimits

0x7e1b,	// (0x00095120) main_cset6_slider_pane_g18

0x7e27,	// (0x0009512c) main_cset6_slider_pane_g19_ParamLimits

0x7e27,	// (0x0009512c) main_cset6_slider_pane_g19

0xab39,	// (0x00097e3e) bg_main_mobtv_pane_ParamLimits

0xab39,	// (0x00097e3e) bg_main_mobtv_pane

0x814e,	// (0x00095453) main_mobtv_info_pane

0x8159,	// (0x0009545e) main_mobtv_loading_pane_ParamLimits

0x8159,	// (0x0009545e) main_mobtv_loading_pane

0xe1a2,	// (0x0009b4a7) main_mobtv_pg_channel_list_pane

0xe1ac,	// (0x0009b4b1) main_mobtv_pg_hdr_pane

0x8166,	// (0x0009546b) main_mobtv_programe_curr_pane_ParamLimits

0x8166,	// (0x0009546b) main_mobtv_programe_curr_pane

0x8173,	// (0x00095478) main_mobtv_programe_next_pane_ParamLimits

0x8173,	// (0x00095478) main_mobtv_programe_next_pane

0xe1b5,	// (0x0009b4ba) popup_mobtv_noti_window

0xcc2f,	// (0x00099f34) main_tv_pg_hdr_pane_g1

0xe1bf,	// (0x0009b4c4) main_tv_pg_hdr_pane_g2

0xe1c7,	// (0x0009b4cc) main_tv_pg_hdr_pane_g3

0xe1cf,	// (0x0009b4d4) main_tv_pg_hdr_pane_g4

0xe1d7,	// (0x0009b4dc) main_tv_pg_hdr_pane_g5

0xe1e1,	// (0x0009b4e6) main_tv_pg_hdr_pane_g6

0xe1eb,	// (0x0009b4f0) main_tv_pg_hdr_pane_g7

0xe1f5,	// (0x0009b4fa) main_tv_pg_hdr_pane_g8

0xe1ff,	// (0x0009b504) main_tv_pg_hdr_pane_g9

0xe209,	// (0x0009b50e) main_tv_pg_hdr_pane_g10

0xe213,	// (0x0009b518) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0009cf14) main_tv_pg_hdr_pane_g

0xe21d,	// (0x0009b522) main_tv_pg_hdr_pane_t1

0xe22b,	// (0x0009b530) main_tv_pg_hdr_pane_t2

0xe239,	// (0x0009b53e) main_tv_pg_hdr_pane_t3

0xe249,	// (0x0009b54e) main_tv_pg_hdr_pane_t4

0xe259,	// (0x0009b55e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0009cf2b) main_tv_pg_hdr_pane_t

0xe269,	// (0x0009b56e) single_mobtv_pg_channel_pane_ParamLimits

0xe269,	// (0x0009b56e) single_mobtv_pg_channel_pane

0xe27b,	// (0x0009b580) single_mobtv_pg_channel_table_pane

0xe284,	// (0x0009b589) single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x0009b592) single_tv_pg_channel_pane_g1

0xe296,	// (0x0009b59b) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0009cf36) single_tv_pg_channel_pane_g

0xce5f,	// (0x0009a164) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce5f,	// (0x0009a164) bg_single_mobtv_pg_channel_thumb_pane

0xe29f,	// (0x0009b5a4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29f,	// (0x0009b5a4) single_mobtv_pg_channel_thumb_pane_g1

0xe2ad,	// (0x0009b5b2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2ad,	// (0x0009b5b2) single_mobtv_pg_channel_thumb_pane_g2

0xe2b9,	// (0x0009b5be) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b9,	// (0x0009b5be) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0009cf3b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0009cf3b) single_mobtv_pg_channel_thumb_pane_g

0xe2c5,	// (0x0009b5ca) single_mobtv_pg_channel_thumb_pane_t1

0xe2d3,	// (0x0009b5d8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0009cf42) single_mobtv_pg_channel_thumb_pane_t

0xcc2f,	// (0x00099f34) bg_single_mobtv_pg_channel_table_pane_g1

0xcc2f,	// (0x00099f34) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e8,	// (0x0009c9ed) bg_single_mobtv_pg_channel_table_pane_g

0xe2e1,	// (0x0009b5e6) single_mobtv_pg_channel_table_pane_t1

0xe2ef,	// (0x0009b5f4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0009cf47) single_mobtv_pg_channel_table_pane_t

0x8188,	// (0x0009548d) main_mobtv_info_pane_g1_ParamLimits

0x8188,	// (0x0009548d) main_mobtv_info_pane_g1

0x81a6,	// (0x000954ab) main_mobtv_info_pane_t1_ParamLimits

0x81a6,	// (0x000954ab) main_mobtv_info_pane_t1

0x821e,	// (0x00095523) main_mobtv_info_pane_t2_ParamLimits

0x821e,	// (0x00095523) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0009cf51) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0009cf51) main_mobtv_info_pane_t

0x82ad,	// (0x000955b2) wait_bar_pane_cp05

0x82bf,	// (0x000955c4) main_mobtv_loading_pane_g1_ParamLimits

0x82bf,	// (0x000955c4) main_mobtv_loading_pane_g1

0x82d0,	// (0x000955d5) main_mobtv_loading_pane_g2_ParamLimits

0x82d0,	// (0x000955d5) main_mobtv_loading_pane_g2

0x82dc,	// (0x000955e1) main_mobtv_loading_pane_g3_ParamLimits

0x82dc,	// (0x000955e1) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0009cf58) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0009cf58) main_mobtv_loading_pane_g

0xe2fd,	// (0x0009b602) main_mobtv_loading_pane_t1_ParamLimits

0xe2fd,	// (0x0009b602) main_mobtv_loading_pane_t1

0xe315,	// (0x0009b61a) main_mobtv_loading_pane_t2_ParamLimits

0xe315,	// (0x0009b61a) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0009cf5f) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0009cf5f) main_mobtv_loading_pane_t

0x82ef,	// (0x000955f4) wait_bar_pane_cp06_ParamLimits

0x82ef,	// (0x000955f4) wait_bar_pane_cp06

0xe339,	// (0x0009b63e) main_mobtv_programe_curr_pane_t1

0xe347,	// (0x0009b64c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0009cf64) main_mobtv_programe_curr_pane_t

0xe355,	// (0x0009b65a) main_mobtv_programe_next_pane_t1

0xe363,	// (0x0009b668) main_mobtv_programe_next_pane_t2

0xe371,	// (0x0009b676) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0009cf69) main_mobtv_programe_next_pane_t

0x99bc,	// (0x00096cc1) bg_popup_mobtv_noti_window_pane

0xe37f,	// (0x0009b684) popup_mobtv_noti_window_g1

0xe387,	// (0x0009b68c) popup_mobtv_noti_window_t1

0xe395,	// (0x0009b69a) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0009cf70) popup_mobtv_noti_window_t

0xcc2f,	// (0x00099f34) bg_popup_mobtv_noti_window_pane_g1

0x99bc,	// (0x00096cc1) sc_clock_pane

0x99bc,	// (0x00096cc1) main_fs_bigclock_pane

0x7a92,	// (0x00094d97) blid2_tripm_pane_t4_ParamLimits

0x7a92,	// (0x00094d97) blid2_tripm_pane_t4

0x82fe,	// (0x00095603) sc_clock_pane_g1_ParamLimits

0x82fe,	// (0x00095603) sc_clock_pane_g1

0x8310,	// (0x00095615) sc_clock_pane_t1_ParamLimits

0x8310,	// (0x00095615) sc_clock_pane_t1

0x8334,	// (0x00095639) sc_clock_pane_t2_ParamLimits

0x8334,	// (0x00095639) sc_clock_pane_t2

0x834c,	// (0x00095651) sc_clock_pane_t3_ParamLimits

0x834c,	// (0x00095651) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0009cf75) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0009cf75) sc_clock_pane_t

0x8fcf,	// (0x000962d4) main_fs_bigclock_indicator_pane_ParamLimits

0x8fcf,	// (0x000962d4) main_fs_bigclock_indicator_pane

0xce2f,	// (0x0009a134) main_fs_bigclock_pane_g1_ParamLimits

0xce2f,	// (0x0009a134) main_fs_bigclock_pane_g1

0x8fdb,	// (0x000962e0) main_fs_bigclock_pane_t1_ParamLimits

0x8fdb,	// (0x000962e0) main_fs_bigclock_pane_t1

0x8fed,	// (0x000962f2) main_fs_bigclock_pane_t2_ParamLimits

0x8fed,	// (0x000962f2) main_fs_bigclock_pane_t2

0x9001,	// (0x00096306) main_fs_bigclock_pane_t3_ParamLimits

0x9001,	// (0x00096306) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0009d17f) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009d17f) main_fs_bigclock_pane_t

0xebe9,	// (0x0009beee) main_fs_bigclock_indicator_pane_g1

0xe065,	// (0x0009b36a) ncim_query_content_pane_g2_ParamLimits

0xe065,	// (0x0009b36a) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0009cf02) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0009cf02) ncim_query_content_pane_g

0x8363,	// (0x00095668) sc_clock_pane_t4_ParamLimits

0x8363,	// (0x00095668) sc_clock_pane_t4

0x9a0d,	// (0x00096d12) main_radioblah_pane

0xd56a,	// (0x0009a86f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd56a,	// (0x0009a86f) cell_call4_button_pane_t1_copy1

0x7f9f,	// (0x000952a4) main_ncimui_pane_t1_ParamLimits

0x7f9f,	// (0x000952a4) main_ncimui_pane_t1

0x7fb9,	// (0x000952be) main_ncimui_pane_t2_ParamLimits

0x7fb9,	// (0x000952be) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0009cefb) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0009cefb) main_ncimui_pane_t

0xe4e1,	// (0x0009b7e6) main_radioblah_anim_pane_ParamLimits

0xe4e1,	// (0x0009b7e6) main_radioblah_anim_pane

0xe4f2,	// (0x0009b7f7) main_radioblah_info_pane_ParamLimits

0xe4f2,	// (0x0009b7f7) main_radioblah_info_pane

0xe506,	// (0x0009b80b) main_radioblah_pane_t1_ParamLimits

0xe506,	// (0x0009b80b) main_radioblah_pane_t1

0xe522,	// (0x0009b827) main_radioblah_pane_t2_ParamLimits

0xe522,	// (0x0009b827) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0009cf96) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0009cf96) main_radioblah_pane_t

0x8413,	// (0x00095718) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8413,	// (0x00095718) main_radioblah_rocker_ctrl_pane

0xe56a,	// (0x0009b86f) main_radioblah_info_pane_t1_ParamLimits

0xe56a,	// (0x0009b86f) main_radioblah_info_pane_t1

0x846b,	// (0x00095770) main_radioblah_info_pane_t2_ParamLimits

0x846b,	// (0x00095770) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0009cf9f) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0009cf9f) main_radioblah_info_pane_t

0xcc2f,	// (0x00099f34) main_radioblah_rocker_ctrl_pane_g1

0x851b,	// (0x00095820) main_radioblah_rocker_ctrl_pane_g2

0x8523,	// (0x00095828) main_radioblah_rocker_ctrl_pane_g3

0x852b,	// (0x00095830) main_radioblah_rocker_ctrl_pane_g4

0x8533,	// (0x00095838) main_radioblah_rocker_ctrl_pane_g5

0x853b,	// (0x00095840) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0009cfa8) main_radioblah_rocker_ctrl_pane_g

0x7d23,	// (0x00095028) main_cset_text2_pane_t1_copy1_ParamLimits

0xa966,	// (0x00097c6b) cam4_image_uncrop_qvga_pane

0xa9bb,	// (0x00097cc0) vid4_image_uncrop_qcif_pane

0xab2b,	// (0x00097e30) cam6_image_uncrop_qvga_pane_ParamLimits

0xab2b,	// (0x00097e30) cam6_image_uncrop_qvga_pane

0xdd68,	// (0x0009b06d) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd68,	// (0x0009b06d) vid6_image_uncrop_qcif_pane

0x99bc,	// (0x00096cc1) bg_popup_preview_window_pane_cp03

0xe017,	// (0x0009b31c) list_cset_text2_pane

0xe01f,	// (0x0009b324) main_cset6_text2_pane_g1

0xe027,	// (0x0009b32c) main_cset6_text2_pane_t1

0x8543,	// (0x00095848) list_cset_text2_pane_t1_ParamLimits

0x8543,	// (0x00095848) list_cset_text2_pane_t1

0x9a0d,	// (0x00096d12) main_radioblah_pane_ParamLimits

0x8299,	// (0x0009559e) main_mobtv_info_pane_t3_ParamLimits

0x8299,	// (0x0009559e) main_mobtv_info_pane_t3

0x8401,	// (0x00095706) main_radioblah_pane_g1

0x843b,	// (0x00095740) main_radioblah_info_pane_g1

0x84c0,	// (0x000957c5) main_radioblah_info_pane_t3_ParamLimits

0x84c0,	// (0x000957c5) main_radioblah_info_pane_t3

0x2e3a,	// (0x0009013f) highlight_cell_cale_month_pane_ParamLimits

0x2e3a,	// (0x0009013f) highlight_cell_cale_month_pane

0x99bc,	// (0x00096cc1) main_phob_fisheye_pane

0xcf3b,	// (0x0009a240) scroll_pane_cp0031_ParamLimits

0xcf3b,	// (0x0009a240) scroll_pane_cp0031

0xde7a,	// (0x0009b17f) wait_bar_pane_cp08_ParamLimits

0x2ef0,	// (0x000901f5) cset_list_set_pane_copy1_ParamLimits

0xe5a4,	// (0x0009b8a9) highlight_cell_cale_month_pane_g1

0x855c,	// (0x00095861) highlight_cell_cale_month_pane_t1

0xdaff,	// (0x0009ae04) list_gen_pane_cp01

0xd751,	// (0x0009aa56) scroll_pane_01

0x02c1,	// (0x0008d5c6) list_single_double_fisheye_pane

0x02ca,	// (0x0008d5cf) list_double_fisheye_pane_g1_ParamLimits

0x02ca,	// (0x0008d5cf) list_double_fisheye_pane_g1

0x02d6,	// (0x0008d5db) list_double_fisheye_pane_g2_ParamLimits

0x02d6,	// (0x0008d5db) list_double_fisheye_pane_g2

0x02ea,	// (0x0008d5ef) list_double_fisheye_pane_g3_ParamLimits

0x02ea,	// (0x0008d5ef) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0009cfb5) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0009cfb5) list_double_fisheye_pane_g

0x0313,	// (0x0008d618) list_double_fisheye_pane_t1_ParamLimits

0x0313,	// (0x0008d618) list_double_fisheye_pane_t1

0x032e,	// (0x0008d633) list_double_fisheye_pane_t2_ParamLimits

0x032e,	// (0x0008d633) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0009cfc0) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0009cfc0) list_double_fisheye_pane_t

0x99bc,	// (0x00096cc1) main_call5_pane

0x838e,	// (0x00095693) sc_swipe_pane_ParamLimits

0x838e,	// (0x00095693) sc_swipe_pane

0x857d,	// (0x00095882) call5_image_pane_ParamLimits

0x857d,	// (0x00095882) call5_image_pane

0x859a,	// (0x0009589f) call5_swipe_1_pane_ParamLimits

0x859a,	// (0x0009589f) call5_swipe_1_pane

0x85ad,	// (0x000958b2) call5_swipe_2_pane_ParamLimits

0x85ad,	// (0x000958b2) call5_swipe_2_pane

0x85da,	// (0x000958df) popup_call5_audio_first_window_ParamLimits

0x85da,	// (0x000958df) popup_call5_audio_first_window

0xce5f,	// (0x0009a164) call5_swipe_1_pane_g1_ParamLimits

0xce5f,	// (0x0009a164) call5_swipe_1_pane_g1

0xe5ac,	// (0x0009b8b1) call5_swipe_1_pane_g2_ParamLimits

0xe5ac,	// (0x0009b8b1) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0009cfc5) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0009cfc5) call5_swipe_1_pane_g

0xe5b8,	// (0x0009b8bd) call5_swipe_1_pane_t1_ParamLimits

0xe5b8,	// (0x0009b8bd) call5_swipe_1_pane_t1

0xce5f,	// (0x0009a164) call5_swipe_2_pane_g1_ParamLimits

0xce5f,	// (0x0009a164) call5_swipe_2_pane_g1

0xe5cd,	// (0x0009b8d2) call5_swipe_2_pane_g2_ParamLimits

0xe5cd,	// (0x0009b8d2) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0009cfca) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0009cfca) call5_swipe_2_pane_g

0xe5d9,	// (0x0009b8de) call5_swipe_2_pane_t1_ParamLimits

0xe5d9,	// (0x0009b8de) call5_swipe_2_pane_t1

0xe5ee,	// (0x0009b8f3) sc_swipe_pane_g1_ParamLimits

0xe5ee,	// (0x0009b8f3) sc_swipe_pane_g1

0xe5fb,	// (0x0009b900) sc_swipe_pane_g2_ParamLimits

0xe5fb,	// (0x0009b900) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0009cfcf) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0009cfcf) sc_swipe_pane_g

0xe607,	// (0x0009b90c) sc_swipe_pane_t1_ParamLimits

0xe607,	// (0x0009b90c) sc_swipe_pane_t1

0x99bc,	// (0x00096cc1) main_cmail_launcher_pane

0x85ef,	// (0x000958f4) aid_size_cell_cmail_l_ParamLimits

0x85ef,	// (0x000958f4) aid_size_cell_cmail_l

0x8609,	// (0x0009590e) grid_cmail_l_pane_ParamLimits

0x8609,	// (0x0009590e) grid_cmail_l_pane

0x8624,	// (0x00095929) cell_cmail_l_pane_ParamLimits

0x8624,	// (0x00095929) cell_cmail_l_pane

0x864c,	// (0x00095951) cell_cmail_l_pane_g1_ParamLimits

0x864c,	// (0x00095951) cell_cmail_l_pane_g1

0x8658,	// (0x0009595d) cell_cmail_l_pane_t1_ParamLimits

0x8658,	// (0x0009595d) cell_cmail_l_pane_t1

0xe61c,	// (0x0009b921) cell_cmail_l_pane_t2_ParamLimits

0xe61c,	// (0x0009b921) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0009cfd4) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0009cfd4) cell_cmail_l_pane_t

0x9a0d,	// (0x00096d12) grid_highlight_pane_cp018_ParamLimits

0x9a0d,	// (0x00096d12) grid_highlight_pane_cp018

0x0bce,	// (0x0008ded3) main2_pane_ParamLimits

0x0bce,	// (0x0008ded3) main2_pane

0xa249,	// (0x0009754e) popup_sp_fs_action_menu_bg_pane_g1

0xa251,	// (0x00097556) popup_sp_fs_action_menu_bg_pane_g2

0xa259,	// (0x0009755e) popup_sp_fs_action_menu_bg_pane_g3

0xa261,	// (0x00097566) popup_sp_fs_action_menu_bg_pane_g4

0xa269,	// (0x0009756e) popup_sp_fs_action_menu_bg_pane_g5

0xa271,	// (0x00097576) popup_sp_fs_action_menu_bg_pane_g6

0xa279,	// (0x0009757e) popup_sp_fs_action_menu_bg_pane_g7

0xa281,	// (0x00097586) popup_sp_fs_action_menu_bg_pane_g8

0xa289,	// (0x0009758e) popup_sp_fs_action_menu_bg_pane_g9

0xa291,	// (0x00097596) popup_sp_fs_action_menu_bg_pane_g10

0xa291,	// (0x00097596) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0009c492) popup_sp_fs_action_menu_bg_pane_g

0xfbf9,	// (0x0008cefe) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfbf9,	// (0x0008cefe) list_medium_line_x2_t3_g3_g1

0xfc05,	// (0x0008cf0a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfc05,	// (0x0008cf0a) list_medium_line_x2_t3_g3_g2

0xfc11,	// (0x0008cf16) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfc11,	// (0x0008cf16) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0009c542) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0009c542) list_medium_line_x2_t3_g3_g

0xfc1d,	// (0x0008cf22) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfc1d,	// (0x0008cf22) list_medium_line_x2_t3_g3_t1

0xfc32,	// (0x0008cf37) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfc32,	// (0x0008cf37) list_medium_line_x2_t3_g3_t2

0xfc46,	// (0x0008cf4b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfc46,	// (0x0008cf4b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0009c549) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0009c549) list_medium_line_x2_t3_g3_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t3_g2_g1

0xf057,	// (0x0009c35c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0009c550) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0009c550) list_medium_line_x2_t3_g2_g

0xfc5b,	// (0x0008cf60) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfc5b,	// (0x0008cf60) list_medium_line_x2_t3_g2_t1

0xfc71,	// (0x0008cf76) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfc71,	// (0x0008cf76) list_medium_line_x2_t3_g2_t2

0xfc83,	// (0x0008cf88) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfc83,	// (0x0008cf88) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0009c555) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0009c555) list_medium_line_x2_t3_g2_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t4_g4_g1

0xfca1,	// (0x0008cfa6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfca1,	// (0x0008cfa6) list_medium_line_x2_t4_g4_g2

0xf063,	// (0x0009c368) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x2_t4_g4_g3

0xfcad,	// (0x0008cfb2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfcad,	// (0x0008cfb2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0009c55c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0009c55c) list_medium_line_x2_t4_g4_g

0xfcb9,	// (0x0008cfbe) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfcb9,	// (0x0008cfbe) list_medium_line_x2_t4_g4_t1

0xfcd3,	// (0x0008cfd8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfcd3,	// (0x0008cfd8) list_medium_line_x2_t4_g4_t2

0xfce9,	// (0x0008cfee) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfce9,	// (0x0008cfee) list_medium_line_x2_t4_g4_t3

0xfcfe,	// (0x0008d003) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfcfe,	// (0x0008d003) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0009c565) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0009c565) list_medium_line_x2_t4_g4_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g4_g1

0xf06f,	// (0x0009c374) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf06f,	// (0x0009c374) list_medium_line_x2_t2_g4_g2

0xf063,	// (0x0009c368) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x2_t2_g4_g3

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0009c5cc) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0009c5cc) list_medium_line_x2_t2_g4_g

0xfd10,	// (0x0008d015) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfd10,	// (0x0008d015) list_medium_line_x2_t2_g4_t1

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0009c5d5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0009c5d5) list_medium_line_x2_t2_g4_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g3_g1

0xf063,	// (0x0009c368) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x2_t2_g3_g2

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d5,	// (0x0009c5da) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d5,	// (0x0009c5da) list_medium_line_x2_t2_g3_g

0xfd25,	// (0x0008d02a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfd25,	// (0x0008d02a) list_medium_line_x2_t2_g3_t1

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2dc,	// (0x0009c5e1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2dc,	// (0x0009c5e1) list_medium_line_x2_t2_g3_t

0x2f95,	// (0x0009029a) main_sp_fs_list_pane_ParamLimits

0x2f95,	// (0x0009029a) main_sp_fs_list_pane

0x2fa1,	// (0x000902a6) sp_fs_scroll_pane_ParamLimits

0x2fa1,	// (0x000902a6) sp_fs_scroll_pane

0xfd3a,	// (0x0008d03f) list_medium_line_x2_t3_t1

0xfd4a,	// (0x0008d04f) list_medium_line_x2_t3_t2

0xfd58,	// (0x0008d05d) list_medium_line_x2_t3_t3

0x0002,

0xf327,	// (0x0009c62c) list_medium_line_x2_t3_t

0xfd66,	// (0x0008d06b) list_medium_line_x3_t4_t1

0xfd76,	// (0x0008d07b) list_medium_line_x3_t4_t2

0xfd84,	// (0x0008d089) list_medium_line_x3_t4_t3

0xf090,	// (0x0009c395) list_medium_line_x3_t4_t4

0x0003,

0xf32e,	// (0x0009c633) list_medium_line_x3_t4_t

0xfd92,	// (0x0008d097) list_medium_line_x4_t5_t1

0xfda2,	// (0x0008d0a7) list_medium_line_x4_t5_t2

0xf09e,	// (0x0009c3a3) list_medium_line_x4_t5_t3

0xfdb0,	// (0x0008d0b5) list_medium_line_x4_t5_t4

0xf090,	// (0x0009c395) list_medium_line_x4_t5_t5

0x0004,

0xf337,	// (0x0009c63c) list_medium_line_x4_t5_t

0xf04b,	// (0x0009c350) list_medium_line_t4_g4_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_t4_g4_g1

0xf0ac,	// (0x0009c3b1) list_medium_line_t4_g4_g2_ParamLimits

0xf0ac,	// (0x0009c3b1) list_medium_line_t4_g4_g2

0xfdbe,	// (0x0008d0c3) list_medium_line_t4_g4_g3_ParamLimits

0xfdbe,	// (0x0008d0c3) list_medium_line_t4_g4_g3

0xf057,	// (0x0009c35c) list_medium_line_t4_g4_g4_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_t4_g4_g4

0x0003,

0xf342,	// (0x0009c647) list_medium_line_t4_g4_g_ParamLimits

0xf342,	// (0x0009c647) list_medium_line_t4_g4_g

0xfdca,	// (0x0008d0cf) list_medium_line_t4_g4_t1_ParamLimits

0xfdca,	// (0x0008d0cf) list_medium_line_t4_g4_t1

0xfddf,	// (0x0008d0e4) list_medium_line_t4_g4_t2_ParamLimits

0xfddf,	// (0x0008d0e4) list_medium_line_t4_g4_t2

0xfdf5,	// (0x0008d0fa) list_medium_line_t4_g4_t3_ParamLimits

0xfdf5,	// (0x0008d0fa) list_medium_line_t4_g4_t3

0xf07b,	// (0x0009c380) list_medium_line_t4_g4_t4_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_t4_g4_t4

0x0003,

0xf34b,	// (0x0009c650) list_medium_line_t4_g4_t_ParamLimits

0xf34b,	// (0x0009c650) list_medium_line_t4_g4_t

0x3073,	// (0x00090378) chi_dic_find_pane_g1

0x4266,	// (0x0009156b) main_tport_pane

0x7204,	// (0x00094509) list_medium_line_plain_t1

0x72b8,	// (0x000945bd) list_medium_line_t2_g2_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t2_g2_g1

0xaa9d,	// (0x00097da2) list_medium_line_t2_g2_g2_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009cd0c) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009cd0c) list_medium_line_t2_g2_g

0xfffa,	// (0x0008d2ff) list_medium_line_t2_g2_t1_ParamLimits

0xfffa,	// (0x0008d2ff) list_medium_line_t2_g2_t1

0x0014,	// (0x0008d319) list_medium_line_t2_g2_t2_ParamLimits

0x0014,	// (0x0008d319) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009cd11) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009cd11) list_medium_line_t2_g2_t

0x784b,	// (0x00094b50) aid_sp_fs_list_icon_a_sm

0xab23,	// (0x00097e28) aid_sp_fs_list_icon_d

0x7853,	// (0x00094b58) aid_sp_fs_text_primary

0x785c,	// (0x00094b61) aid_sp_fs_text_secondary

0x7865,	// (0x00094b6a) list_medium_line

0x7865,	// (0x00094b6a) list_medium_line_g2

0x7865,	// (0x00094b6a) list_medium_line_g3

0x7865,	// (0x00094b6a) list_medium_line_plain

0x7865,	// (0x00094b6a) list_medium_line_plain_t2

0x7865,	// (0x00094b6a) list_medium_line_plain_t3

0x7865,	// (0x00094b6a) list_medium_line_right_icon

0x7865,	// (0x00094b6a) list_medium_line_right_iconx2

0x7865,	// (0x00094b6a) list_medium_line_t2

0x7865,	// (0x00094b6a) list_medium_line_t2_g2

0x7865,	// (0x00094b6a) list_medium_line_t2_g3

0x7865,	// (0x00094b6a) list_medium_line_t2_right_icon

0x7865,	// (0x00094b6a) list_medium_line_t2_right_iconx2

0x7865,	// (0x00094b6a) list_medium_line_t3

0x7865,	// (0x00094b6a) list_medium_line_t3_g2

0x7865,	// (0x00094b6a) list_medium_line_t3_g3

0x7865,	// (0x00094b6a) list_medium_line_t3_right_iconx2

0x01a8,	// (0x0008d4ad) list_medium_line_t4_g4

0x01b1,	// (0x0008d4b6) list_medium_line_x2

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t2_g2

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t2_g3

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t2_g4

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t3

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t3_g2

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t3_g3

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t3_g4

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t4_g2

0x01b1,	// (0x0008d4b6) list_medium_line_x2_t4_g4

0x786e,	// (0x00094b73) list_medium_line_x3

0x786e,	// (0x00094b73) list_medium_line_x3_t4

0x786e,	// (0x00094b73) list_medium_line_x3_t4_g4

0x01a8,	// (0x0008d4ad) list_medium_line_x4_t4

0x01a8,	// (0x0008d4ad) list_medium_line_x4_t4_g7

0x01a8,	// (0x0008d4ad) list_medium_line_x4_t5

0x01ba,	// (0x0008d4bf) list_single_fs_dyc_pane_ParamLimits

0x01ba,	// (0x0008d4bf) list_single_fs_dyc_pane

0xf04b,	// (0x0009c350) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x4_t4_g7_g1

0x01f2,	// (0x0008d4f7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x01f2,	// (0x0008d4f7) list_medium_line_x4_t4_g7_g2

0x01fe,	// (0x0008d503) list_medium_line_x4_t4_g7_g3_ParamLimits

0x01fe,	// (0x0008d503) list_medium_line_x4_t4_g7_g3

0x020d,	// (0x0008d512) list_medium_line_x4_t4_g7_g4_ParamLimits

0x020d,	// (0x0008d512) list_medium_line_x4_t4_g7_g4

0x0219,	// (0x0008d51e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0219,	// (0x0008d51e) list_medium_line_x4_t4_g7_g5

0x0228,	// (0x0008d52d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0228,	// (0x0008d52d) list_medium_line_x4_t4_g7_g6

0x0237,	// (0x0008d53c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0237,	// (0x0008d53c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009cedc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009cedc) list_medium_line_x4_t4_g7_g

0x0243,	// (0x0008d548) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0243,	// (0x0008d548) list_medium_line_x4_t4_g7_t1

0x0258,	// (0x0008d55d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0258,	// (0x0008d55d) list_medium_line_x4_t4_g7_t2

0x026d,	// (0x0008d572) list_medium_line_x4_t4_g7_t3_ParamLimits

0x026d,	// (0x0008d572) list_medium_line_x4_t4_g7_t3

0x0282,	// (0x0008d587) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0282,	// (0x0008d587) list_medium_line_x4_t4_g7_t4

0x0294,	// (0x0008d599) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0294,	// (0x0008d599) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009ceeb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009ceeb) list_medium_line_x4_t4_g7_t

0x02a6,	// (0x0008d5ab) list_single_dyc_row_pane_ParamLimits

0x02a6,	// (0x0008d5ab) list_single_dyc_row_pane

0x856a,	// (0x0009586f) call5_gesture_pane_ParamLimits

0x856a,	// (0x0009586f) call5_gesture_pane

0x85c0,	// (0x000958c5) call5_windows_pane_ParamLimits

0x85c0,	// (0x000958c5) call5_windows_pane

0x866e,	// (0x00095973) call5_swipe_1_pane_cp_ParamLimits

0x866e,	// (0x00095973) call5_swipe_1_pane_cp

0x867a,	// (0x0009597f) call5_swipe_2_pane_cp_ParamLimits

0x867a,	// (0x0009597f) call5_swipe_2_pane_cp

0xb3c2,	// (0x000986c7) call5_image_pane_cp

0x8686,	// (0x0009598b) popup_call5_audio_first_window_cp_ParamLimits

0x8686,	// (0x0009598b) popup_call5_audio_first_window_cp

0xe5ee,	// (0x0009b8f3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5ee,	// (0x0009b8f3) call5_swipe_1_pane_g1_cp

0xe62e,	// (0x0009b933) call5_swipe_1_pane_g2_cp

0xe607,	// (0x0009b90c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe607,	// (0x0009b90c) call5_swipe_1_pane_t1_cp

0xe5ee,	// (0x0009b8f3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5ee,	// (0x0009b8f3) call5_swipe_2_pane_g1_cp

0xe636,	// (0x0009b93b) call5_swipe_2_pane_g2_cp

0xe63e,	// (0x0009b943) call5_swipe_2_pane_t1_cp_ParamLimits

0xe63e,	// (0x0009b943) call5_swipe_2_pane_t1_cp

0x9a0d,	// (0x00096d12) main_sp_fs_email_pane

0xe653,	// (0x0009b958) main_sp_fs_listscroll_pane_te

0x8694,	// (0x00095999) popup_sp_fs_action_menu_pane_ParamLimits

0x8694,	// (0x00095999) popup_sp_fs_action_menu_pane

0xcc2f,	// (0x00099f34) bg_sp_fs_ctrlbar_pane_g1

0xd1c4,	// (0x0009a4c9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1d6,	// (0x0009a4db) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1cd,	// (0x0009a4d2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc2f,	// (0x00099f34) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0009cfd9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca0e,	// (0x00099d13) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca0e,	// (0x00099d13) bg_sp_fs_ctrlbar_ddmenu_pane

0xe65c,	// (0x0009b961) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe65c,	// (0x0009b961) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe668,	// (0x0009b96d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe668,	// (0x0009b96d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0009cfe2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0009cfe2) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe674,	// (0x0009b979) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe674,	// (0x0009b979) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xab47,	// (0x00097e4c) list_medium_line_t2_right_icon_g1

0x0350,	// (0x0008d655) list_medium_line_t2_right_icon_t1

0x0360,	// (0x0008d665) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0009cfe7) list_medium_line_t2_right_icon_t

0xc7de,	// (0x00099ae3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7de,	// (0x00099ae3) bg_sp_fs_ctrlbar_pane

0x8727,	// (0x00095a2c) main_sp_fs_ctrlbar_button_pane_cp01

0x8731,	// (0x00095a36) main_sp_fs_ctrlbar_ddmenu_pane

0xe6c6,	// (0x0009b9cb) main_sp_fs_ctrlbar_pane_g1

0xe6d2,	// (0x0009b9d7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0009cfec) main_sp_fs_ctrlbar_pane_g

0xe6de,	// (0x0009b9e3) main_sp_fs_ctrlbar_pane_t1

0x0372,	// (0x0008d677) main_sp_fs_ctrlbar_pane

0x0396,	// (0x0008d69b) main_sp_fs_listscroll_pane_te_cp01

0x03b6,	// (0x0008d6bb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x03b6,	// (0x0008d6bb) popup_sp_fs_action_menu_pane_cp01

0x9a0d,	// (0x00096d12) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a0d,	// (0x00096d12) bg_sp_fs_highlight_list_pane_cp01

0x873b,	// (0x00095a40) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x873b,	// (0x00095a40) sp_fs_action_menu_list_gene_pane_g1

0xe70e,	// (0x0009ba13) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe70e,	// (0x0009ba13) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0009cff6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0009cff6) sp_fs_action_menu_list_gene_pane_g

0x874a,	// (0x00095a4f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x874a,	// (0x00095a4f) sp_fs_action_menu_list_gene_pane_t1

0x8762,	// (0x00095a67) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8762,	// (0x00095a67) sp_fs_action_menu_list_gene_pane

0xe71b,	// (0x0009ba20) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe71b,	// (0x0009ba20) popup_sp_fs_action_menu_bg_pane

0x8785,	// (0x00095a8a) sp_fs_action_menu_list_pane_ParamLimits

0x8785,	// (0x00095a8a) sp_fs_action_menu_list_pane

0xe729,	// (0x0009ba2e) sp_fs_scroll_pane_cp01_ParamLimits

0xe729,	// (0x0009ba2e) sp_fs_scroll_pane_cp01

0x03ec,	// (0x0008d6f1) list_medium_line_plain_t2_t1

0x03fc,	// (0x0008d701) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0009cffb) list_medium_line_plain_t2_t

0x040c,	// (0x0008d711) list_medium_line_plain_t3_t1

0x041c,	// (0x0008d721) list_medium_line_plain_t3_t2

0x042a,	// (0x0008d72f) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0009d000) list_medium_line_plain_t3_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t2_g2_g1

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0009c550) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0009c550) list_medium_line_x2_t2_g2_g

0xf0b8,	// (0x0009c3bd) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b8,	// (0x0009c3bd) list_medium_line_x2_t2_g2_t1

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0009d007) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0009d007) list_medium_line_x2_t2_g2_t

0xf04b,	// (0x0009c350) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t4_g2_g1

0x0438,	// (0x0008d73d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0438,	// (0x0008d73d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0009d00c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0009d00c) list_medium_line_x2_t4_g2_g

0x044a,	// (0x0008d74f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x044a,	// (0x0008d74f) list_medium_line_x2_t4_g2_t1

0x0464,	// (0x0008d769) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0464,	// (0x0008d769) list_medium_line_x2_t4_g2_t2

0x047a,	// (0x0008d77f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x047a,	// (0x0008d77f) list_medium_line_x2_t4_g2_t3

0xf07b,	// (0x0009c380) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0009d011) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0009d011) list_medium_line_x2_t4_g2_t

0xab4f,	// (0x00097e54) list_medium_line_t3_right_iconx2_g1

0xab47,	// (0x00097e4c) list_medium_line_t3_right_iconx2_g2

0x048f,	// (0x0008d794) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0009d01a) list_medium_line_t3_right_iconx2_g

0x0499,	// (0x0008d79e) list_medium_line_t3_right_iconx2_t1

0x04a9,	// (0x0008d7ae) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0009d021) list_medium_line_t3_right_iconx2_t

0xf04b,	// (0x0009c350) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x3_t4_g4_g1

0xf063,	// (0x0009c368) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x3_t4_g4_g2

0xf0ac,	// (0x0009c3b1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0ac,	// (0x0009c3b1) list_medium_line_x3_t4_g4_g3

0x04b7,	// (0x0008d7bc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x04b7,	// (0x0008d7bc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0009d026) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0009d026) list_medium_line_x3_t4_g4_g

0x04c3,	// (0x0008d7c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x04c3,	// (0x0008d7c8) list_medium_line_x3_t4_g4_t1

0x04da,	// (0x0008d7df) list_medium_line_x3_t4_g4_t2_ParamLimits

0x04da,	// (0x0008d7df) list_medium_line_x3_t4_g4_t2

0x04f5,	// (0x0008d7fa) list_medium_line_x3_t4_g4_t3_ParamLimits

0x04f5,	// (0x0008d7fa) list_medium_line_x3_t4_g4_t3

0x050a,	// (0x0008d80f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x050a,	// (0x0008d80f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0009d02f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0009d02f) list_medium_line_x3_t4_g4_t

0x0527,	// (0x0008d82c) list_single_dyc_row_text_pane_t1_ParamLimits

0x0527,	// (0x0008d82c) list_single_dyc_row_text_pane_t1

0x0570,	// (0x0008d875) list_single_dyc_row_text_pane_t2_ParamLimits

0x0570,	// (0x0008d875) list_single_dyc_row_text_pane_t2

0x87a9,	// (0x00095aae) list_single_dyc_row_text_pane_t3_ParamLimits

0x87a9,	// (0x00095aae) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0009d038) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0009d038) list_single_dyc_row_text_pane_t

0x87cd,	// (0x00095ad2) list_single_dyc_row_pane_g1_ParamLimits

0x87cd,	// (0x00095ad2) list_single_dyc_row_pane_g1

0x87d9,	// (0x00095ade) list_single_dyc_row_pane_g2_ParamLimits

0x87d9,	// (0x00095ade) list_single_dyc_row_pane_g2

0x87e5,	// (0x00095aea) list_single_dyc_row_pane_g3_ParamLimits

0x87e5,	// (0x00095aea) list_single_dyc_row_pane_g3

0x87f1,	// (0x00095af6) list_single_dyc_row_pane_g4_ParamLimits

0x87f1,	// (0x00095af6) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009d045) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009d045) list_single_dyc_row_pane_g

0x87fd,	// (0x00095b02) list_single_dyc_row_text_pane_ParamLimits

0x87fd,	// (0x00095b02) list_single_dyc_row_text_pane

0x99bc,	// (0x00096cc1) bg_sp_fs_scroll_pane

0xe74f,	// (0x0009ba54) thumb_sp_fs_scroll_pane

0x72b8,	// (0x000945bd) list_medium_line_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_g1

0x881c,	// (0x00095b21) list_medium_line_t1_ParamLimits

0x881c,	// (0x00095b21) list_medium_line_t1

0xf04b,	// (0x0009c350) list_medium_line_x2_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_g1

0xf063,	// (0x0009c368) list_medium_line_x2_g2_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009d04e) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009d04e) list_medium_line_x2_g

0x8831,	// (0x00095b36) list_medium_line_x2_t1_ParamLimits

0x8831,	// (0x00095b36) list_medium_line_x2_t1

0xf04b,	// (0x0009c350) list_medium_line_x3_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x3_g1

0xf063,	// (0x0009c368) list_medium_line_x3_g2_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009d04e) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009d04e) list_medium_line_x3_g

0x8831,	// (0x00095b36) list_medium_line_x3_t1_ParamLimits

0x8831,	// (0x00095b36) list_medium_line_x3_t1

0xe758,	// (0x0009ba5d) thumb_sp_fs_scroll_pane_g1

0xe761,	// (0x0009ba66) thumb_sp_fs_scroll_pane_g2

0xe76a,	// (0x0009ba6f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d053) thumb_sp_fs_scroll_pane_g

0xe758,	// (0x0009ba5d) bg_sp_fs_scroll_pane_g1

0xe761,	// (0x0009ba66) bg_sp_fs_scroll_pane_g2

0xe76a,	// (0x0009ba6f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d053) bg_sp_fs_scroll_pane_g

0xf04b,	// (0x0009c350) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf04b,	// (0x0009c350) list_medium_line_x2_t3_g4_g1

0xf06f,	// (0x0009c374) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf06f,	// (0x0009c374) list_medium_line_x2_t3_g4_g2

0xf063,	// (0x0009c368) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf063,	// (0x0009c368) list_medium_line_x2_t3_g4_g3

0xf057,	// (0x0009c35c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf057,	// (0x0009c35c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0009c5cc) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0009c5cc) list_medium_line_x2_t3_g4_g

0x06a5,	// (0x0008d9aa) list_medium_line_x2_t3_g4_t1_ParamLimits

0x06a5,	// (0x0008d9aa) list_medium_line_x2_t3_g4_t1

0x06bb,	// (0x0008d9c0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x06bb,	// (0x0008d9c0) list_medium_line_x2_t3_g4_t2

0xf07b,	// (0x0009c380) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf07b,	// (0x0009c380) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009d05a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009d05a) list_medium_line_x2_t3_g4_t

0x72b8,	// (0x000945bd) list_medium_line_g2_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_g2_g1

0xaa9d,	// (0x00097da2) list_medium_line_g2_g2_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0009cd0c) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0009cd0c) list_medium_line_g2_g

0x8847,	// (0x00095b4c) list_medium_line_g2_t1_ParamLimits

0x8847,	// (0x00095b4c) list_medium_line_g2_t1

0x72b8,	// (0x000945bd) list_medium_line_t3_g2_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t3_g2_g1

0xaa9d,	// (0x00097da2) list_medium_line_t3_g2_g2_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0009cd0c) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0009cd0c) list_medium_line_t3_g2_g

0x06d4,	// (0x0008d9d9) list_medium_line_t3_g2_t1_ParamLimits

0x06d4,	// (0x0008d9d9) list_medium_line_t3_g2_t1

0x06eb,	// (0x0008d9f0) list_medium_line_t3_g2_t2_ParamLimits

0x06eb,	// (0x0008d9f0) list_medium_line_t3_g2_t2

0x0700,	// (0x0008da05) list_medium_line_t3_g2_t3_ParamLimits

0x0700,	// (0x0008da05) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0009d061) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0009d061) list_medium_line_t3_g2_t

0xab47,	// (0x00097e4c) list_medium_line_right_icon_g1

0x885c,	// (0x00095b61) list_medium_line_right_icon_t1

0x72b8,	// (0x000945bd) list_medium_line_t2_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t2_g1

0x0719,	// (0x0008da1e) list_medium_line_t2_t1_ParamLimits

0x0719,	// (0x0008da1e) list_medium_line_t2_t1

0x0733,	// (0x0008da38) list_medium_line_t2_t2_ParamLimits

0x0733,	// (0x0008da38) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0009d068) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0009d068) list_medium_line_t2_t

0x72b8,	// (0x000945bd) list_medium_line_t3_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t3_g1

0x074c,	// (0x0008da51) list_medium_line_t3_t1_ParamLimits

0x074c,	// (0x0008da51) list_medium_line_t3_t1

0x0766,	// (0x0008da6b) list_medium_line_t3_t2_ParamLimits

0x0766,	// (0x0008da6b) list_medium_line_t3_t2

0x077c,	// (0x0008da81) list_medium_line_t3_t3_ParamLimits

0x077c,	// (0x0008da81) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0009d06d) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0009d06d) list_medium_line_t3_t

0x72b8,	// (0x000945bd) list_medium_line_g3_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_g3_g1

0xab57,	// (0x00097e5c) list_medium_line_g3_g2_ParamLimits

0xab57,	// (0x00097e5c) list_medium_line_g3_g2

0xaa9d,	// (0x00097da2) list_medium_line_g3_g3_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0009d074) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0009d074) list_medium_line_g3_g

0x886a,	// (0x00095b6f) list_medium_line_g3_t1_ParamLimits

0x886a,	// (0x00095b6f) list_medium_line_g3_t1

0x72b8,	// (0x000945bd) list_medium_line_t2_g3_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t2_g3_g1

0xab57,	// (0x00097e5c) list_medium_line_t2_g3_g2_ParamLimits

0xab57,	// (0x00097e5c) list_medium_line_t2_g3_g2

0xaa9d,	// (0x00097da2) list_medium_line_t2_g3_g3_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0009d074) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0009d074) list_medium_line_t2_g3_g

0x0791,	// (0x0008da96) list_medium_line_t2_g3_t1_ParamLimits

0x0791,	// (0x0008da96) list_medium_line_t2_g3_t1

0x07ab,	// (0x0008dab0) list_medium_line_t2_g3_t2_ParamLimits

0x07ab,	// (0x0008dab0) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0009d07b) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0009d07b) list_medium_line_t2_g3_t

0x72b8,	// (0x000945bd) list_medium_line_t3_g3_g1_ParamLimits

0x72b8,	// (0x000945bd) list_medium_line_t3_g3_g1

0xab57,	// (0x00097e5c) list_medium_line_t3_g3_g2_ParamLimits

0xab57,	// (0x00097e5c) list_medium_line_t3_g3_g2

0xaa9d,	// (0x00097da2) list_medium_line_t3_g3_g3_ParamLimits

0xaa9d,	// (0x00097da2) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0009d074) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0009d074) list_medium_line_t3_g3_g

0x07c5,	// (0x0008daca) list_medium_line_t3_g3_t1_ParamLimits

0x07c5,	// (0x0008daca) list_medium_line_t3_g3_t1

0x07d9,	// (0x0008dade) list_medium_line_t3_g3_t2_ParamLimits

0x07d9,	// (0x0008dade) list_medium_line_t3_g3_t2

0x07eb,	// (0x0008daf0) list_medium_line_t3_g3_t3_ParamLimits

0x07eb,	// (0x0008daf0) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0009d080) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0009d080) list_medium_line_t3_g3_t

0xab4f,	// (0x00097e54) list_medium_line_right_iconx2_g1

0xab47,	// (0x00097e4c) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d087) list_medium_line_right_iconx2_g

0xab63,	// (0x00097e68) list_medium_line_right_iconx2_t1

0xab4f,	// (0x00097e54) list_medium_line_t2_right_iconx2_g1

0xab47,	// (0x00097e4c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d087) list_medium_line_t2_right_iconx2_g

0x07ff,	// (0x0008db04) list_medium_line_t2_right_iconx2_t1

0x080f,	// (0x0008db14) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0009d08c) list_medium_line_t2_right_iconx2_t

0x0821,	// (0x0008db26) list_medium_line_x4_t4_t1

0x082f,	// (0x0008db34) list_medium_line_x4_t4_t2

0x083f,	// (0x0008db44) list_medium_line_x4_t4_t3

0x084f,	// (0x0008db54) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0009d091) list_medium_line_x4_t4_t

0x88c2,	// (0x00095bc7) tport_appsw_pane_ParamLimits

0x88c2,	// (0x00095bc7) tport_appsw_pane

0x88da,	// (0x00095bdf) tport_contact_pane_ParamLimits

0x88da,	// (0x00095bdf) tport_contact_pane

0x88f2,	// (0x00095bf7) tport_listscroll_pane_ParamLimits

0x88f2,	// (0x00095bf7) tport_listscroll_pane

0x890c,	// (0x00095c11) cell_tport_appsw_pane_ParamLimits

0x890c,	// (0x00095c11) cell_tport_appsw_pane

0xd613,	// (0x0009a918) tport_appsw_pane_g1_ParamLimits

0xd613,	// (0x0009a918) tport_appsw_pane_g1

0xe773,	// (0x0009ba78) tport_contact_pane_g1

0xe77c,	// (0x0009ba81) tport_contact_pane_t1

0xe78a,	// (0x0009ba8f) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0009d09a) tport_contact_pane_t

0xe798,	// (0x0009ba9d) list_tport_pane

0xe7a1,	// (0x0009baa6) scroll_pane_cp_030

0x895e,	// (0x00095c63) cell_tport_appsw_pane_g1

0x896e,	// (0x00095c73) cell_tport_appsw_pane_t1

0x897c,	// (0x00095c81) grid_highlight_pane_cp019

0x8984,	// (0x00095c89) list_tport_double_graphic_pane_ParamLimits

0x8984,	// (0x00095c89) list_tport_double_graphic_pane

0x9a0d,	// (0x00096d12) list_highlight_pane_cp023_ParamLimits

0x9a0d,	// (0x00096d12) list_highlight_pane_cp023

0x8991,	// (0x00095c96) list_tport_double_graphic_pane_g1_ParamLimits

0x8991,	// (0x00095c96) list_tport_double_graphic_pane_g1

0x899e,	// (0x00095ca3) list_tport_double_graphic_pane_t1_ParamLimits

0x899e,	// (0x00095ca3) list_tport_double_graphic_pane_t1

0x89b3,	// (0x00095cb8) list_tport_double_graphic_pane_t2_ParamLimits

0x89b3,	// (0x00095cb8) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0009d0a6) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0009d0a6) list_tport_double_graphic_pane_t

0x99bc,	// (0x00096cc1) main_cale_note_pane

0x6a39,	// (0x00093d3e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a39,	// (0x00093d3e) cell_vitu2_function_top_wide_pane_cp01

0x82ad,	// (0x000955b2) wait_bar_pane_cp05_ParamLimits

0x9a0d,	// (0x00096d12) listscroll_cmail_pane

0xe7b2,	// (0x0009bab7) list_cmail_pane

0x89cf,	// (0x00095cd4) list_cmail_body_pane

0xe7c9,	// (0x0009bace) list_single_cmail_header_caption_pane

0x89e2,	// (0x00095ce7) list_single_cmail_header_detail_pane_ParamLimits

0x89e2,	// (0x00095ce7) list_single_cmail_header_detail_pane

0x8a0d,	// (0x00095d12) list_single_cmail_header_caption_pane_t1

0x085f,	// (0x0008db64) list_single_cmail_header_detail_pane_g1_ParamLimits

0x085f,	// (0x0008db64) list_single_cmail_header_detail_pane_g1

0xab71,	// (0x00097e76) list_single_cmail_header_detail_pane_g2_ParamLimits

0xab71,	// (0x00097e76) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0009d0ab) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0009d0ab) list_single_cmail_header_detail_pane_g

0x0877,	// (0x0008db7c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0877,	// (0x0008db7c) list_single_cmail_header_detail_pane_t1

0x08c7,	// (0x0008dbcc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x08c7,	// (0x0008dbcc) list_single_cmail_header_editor_pane_bg

0xe296,	// (0x0009b59b) list_cmail_body_pane_g1

0xe7f1,	// (0x0009baf6) list_cmail_body_pane_t1

0xd633,	// (0x0009a938) list_single_cmail_header_editor_pane_bg_g1

0xace9,	// (0x00097fee) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd643,	// (0x0009a948) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd63b,	// (0x0009a940) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd878,	// (0x0009ab7d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd663,	// (0x0009a968) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd653,	// (0x0009a958) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd65b,	// (0x0009a960) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc9,	// (0x00097fce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a4c,	// (0x00095d51) calenote_gesture_pane_ParamLimits

0x8a4c,	// (0x00095d51) calenote_gesture_pane

0x8a6c,	// (0x00095d71) calenote_window_pane_ParamLimits

0x8a6c,	// (0x00095d71) calenote_window_pane

0xe7ff,	// (0x0009bb04) popup_note_window_cp01

0x8a88,	// (0x00095d8d) calenote_swipe_1_pane_ParamLimits

0x8a88,	// (0x00095d8d) calenote_swipe_1_pane

0x867a,	// (0x0009597f) calenote_swipe_2_pane_ParamLimits

0x867a,	// (0x0009597f) calenote_swipe_2_pane

0xe5ee,	// (0x0009b8f3) calenote_swipe_1_pane_g1_ParamLimits

0xe5ee,	// (0x0009b8f3) calenote_swipe_1_pane_g1

0xe5fb,	// (0x0009b900) calenote_swipe_1_pane_g2_ParamLimits

0xe5fb,	// (0x0009b900) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0009cfcf) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0009cfcf) calenote_swipe_1_pane_g

0xe811,	// (0x0009bb16) calenote_swipe_1_pane_t1_ParamLimits

0xe811,	// (0x0009bb16) calenote_swipe_1_pane_t1

0xe5ee,	// (0x0009b8f3) calenote_swipe_2_pane_g1_ParamLimits

0xe5ee,	// (0x0009b8f3) calenote_swipe_2_pane_g1

0xe830,	// (0x0009bb35) calenote_swipe_2_pane_g2_ParamLimits

0xe830,	// (0x0009bb35) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0009d0b7) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0009d0b7) calenote_swipe_2_pane_g

0xe83c,	// (0x0009bb41) calenote_swipe_2_pane_t1_ParamLimits

0xe83c,	// (0x0009bb41) calenote_swipe_2_pane_t1

0x99bc,	// (0x00096cc1) main_mup_navstr_pane

0x568d,	// (0x00092992) main_mup3_pane_t7_ParamLimits

0x568d,	// (0x00092992) main_mup3_pane_t7

0xa784,	// (0x00097a89) main_mp4_pane_g6_ParamLimits

0xa784,	// (0x00097a89) main_mp4_pane_g6

0xa928,	// (0x00097c2d) main_image3_pane_t4_ParamLimits

0xa928,	// (0x00097c2d) main_image3_pane_t4

0x8a9d,	// (0x00095da2) popup_navstr_preview_pane_ParamLimits

0x8a9d,	// (0x00095da2) popup_navstr_preview_pane

0x8aad,	// (0x00095db2) scroll_navstr_pane_ParamLimits

0x8aad,	// (0x00095db2) scroll_navstr_pane

0x99bc,	// (0x00096cc1) bg_popup_preview_window_pane_cp04

0xe863,	// (0x0009bb68) popup_navstr_preview_pane_t1

0x8ac1,	// (0x00095dc6) scroll_navstr_pane_g1_ParamLimits

0x8ac1,	// (0x00095dc6) scroll_navstr_pane_g1

0x8ad5,	// (0x00095dda) scroll_navstr_pane_t1_ParamLimits

0x8ad5,	// (0x00095dda) scroll_navstr_pane_t1

0xe808,	// (0x0009bb0d) bg_button_pane_cp014

0xe808,	// (0x0009bb0d) bg_button_pane_cp030

0x02f6,	// (0x0008d5fb) list_double_fisheye_pane_g4_ParamLimits

0x02f6,	// (0x0008d5fb) list_double_fisheye_pane_g4

0x0302,	// (0x0008d607) list_double_fisheye_pane_g5_ParamLimits

0x0302,	// (0x0008d607) list_double_fisheye_pane_g5

0xe7ba,	// (0x0009babf) sp_fs_scroll_pane_cp03

0xe6c6,	// (0x0009b9cb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6d2,	// (0x0009b9d7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0009cfec) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6de,	// (0x0009b9e3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x89c5,	// (0x00095cca) sp_fs_scroll_pane_cp02

0xa2fc,	// (0x00097601) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2fc,	// (0x00097601) popup_sp_fs_calendar_preview_list_single_pane

0x99bc,	// (0x00096cc1) main_cam6_pano_pane

0x9a0d,	// (0x00096d12) main_mup3_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_phacti_pane

0x8180,	// (0x00095485) bg_button_pane_cp11

0x819a,	// (0x0009549f) main_mobtv_info_pane_g2_ParamLimits

0x819a,	// (0x0009549f) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0009cf4c) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0009cf4c) main_mobtv_info_pane_g

0x8375,	// (0x0009567a) sc_clock_pane_t5_ParamLimits

0x8375,	// (0x0009567a) sc_clock_pane_t5

0x8401,	// (0x00095706) main_radioblah_pane_g1_ParamLimits

0xe53a,	// (0x0009b83f) main_radioblah_pane_t3_ParamLimits

0xe53a,	// (0x0009b83f) main_radioblah_pane_t3

0xe552,	// (0x0009b857) main_radioblah_pane_t4_ParamLimits

0xe552,	// (0x0009b857) main_radioblah_pane_t4

0x8429,	// (0x0009572e) main_radioblah_text_pane_ParamLimits

0x8429,	// (0x0009572e) main_radioblah_text_pane

0x843b,	// (0x00095740) main_radioblah_info_pane_g1_ParamLimits

0x84d4,	// (0x000957d9) main_radioblah_info_pane_t4_ParamLimits

0x84d4,	// (0x000957d9) main_radioblah_info_pane_t4

0x9a0d,	// (0x00096d12) main_sp_fs_calendar_pane

0x8aec,	// (0x00095df1) main_phacti_pane_g1

0x8af4,	// (0x00095df9) phacti_note_pane_ParamLimits

0x8af4,	// (0x00095df9) phacti_note_pane

0xe87a,	// (0x0009bb7f) phacti_term_pane_ParamLimits

0xe87a,	// (0x0009bb7f) phacti_term_pane

0xe88f,	// (0x0009bb94) phacti_note_pane_t1_ParamLimits

0xe88f,	// (0x0009bb94) phacti_note_pane_t1

0x8b08,	// (0x00095e0d) phacti_term_pane_g1

0x8b10,	// (0x00095e15) phacti_term_pane_t1_ParamLimits

0x8b10,	// (0x00095e15) phacti_term_pane_t1

0xe8a6,	// (0x0009bbab) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ae,	// (0x0009bbb3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0009d0c1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b6,	// (0x0009bbbb) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b6,	// (0x0009bbbb) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cc,	// (0x0009bbd1) aid_popup_sp_fs_bg_corner_pane

0xcc2f,	// (0x00099f34) popup_sp_fs_calendar_preview_bg_pane_g1

0x99bc,	// (0x00096cc1) popup_sp_fs_calendar_preview_bg_pane

0xe8d4,	// (0x0009bbd9) popup_sp_fs_calendar_preview_list_pane

0xc7de,	// (0x00099ae3) bg_main_sp_fs_cale_pane_ParamLimits

0xc7de,	// (0x00099ae3) bg_main_sp_fs_cale_pane

0x8ba0,	// (0x00095ea5) listscroll_cale_mrui_pane_ParamLimits

0x8ba0,	// (0x00095ea5) listscroll_cale_mrui_pane

0x8bb5,	// (0x00095eba) listscroll_sp_fs_schedule_track_pane

0x8bbe,	// (0x00095ec3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8bbe,	// (0x00095ec3) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x0009bbe1) main_sp_fs_ribbon_pane

0x8bd1,	// (0x00095ed6) popup_sp_fs_cale_preview_window

0x8be3,	// (0x00095ee8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8be3,	// (0x00095ee8) list_single_sp_fs_schedule_track_pane

0x9a0d,	// (0x00096d12) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a0d,	// (0x00096d12) bg_sp_fs_highlight_list_pane_cp03

0x8bf7,	// (0x00095efc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bf7,	// (0x00095efc) list_single_sp_fs_schedule_track_pane_g1

0x8c03,	// (0x00095f08) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c03,	// (0x00095f08) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0009d0c6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0009d0c6) list_single_sp_fs_schedule_track_pane_g

0x8c0f,	// (0x00095f14) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c0f,	// (0x00095f14) list_single_sp_fs_schedule_track_pane_t1

0x8c31,	// (0x00095f36) sp_fs_schedule_track_pane_ParamLimits

0x8c31,	// (0x00095f36) sp_fs_schedule_track_pane

0xe8e4,	// (0x0009bbe9) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x0009bbf1) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x0009bbf9) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x0009bc01) sp_fs_schedule_track_pane_g4

0xe904,	// (0x0009bc09) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0009d0cb) sp_fs_schedule_track_pane_g

0xd633,	// (0x0009a938) bg_sp_fs_schedule_viewer_highlight_g1

0xace9,	// (0x00097fee) bg_sp_fs_schedule_viewer_highlight_g2

0xd63b,	// (0x0009a940) bg_sp_fs_schedule_viewer_highlight_g3

0xd643,	// (0x0009a948) bg_sp_fs_schedule_viewer_highlight_g4

0xd878,	// (0x0009ab7d) bg_sp_fs_schedule_viewer_highlight_g5

0xd653,	// (0x0009a958) bg_sp_fs_schedule_viewer_highlight_g6

0xd65b,	// (0x0009a960) bg_sp_fs_schedule_viewer_highlight_g7

0xd663,	// (0x0009a968) bg_sp_fs_schedule_viewer_highlight_g8

0xacc9,	// (0x00097fce) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0009d0d6) bg_sp_fs_schedule_viewer_highlight_g

0x99bc,	// (0x00096cc1) bg_main_sp_fs_ribbon_pane

0x8c46,	// (0x00095f4b) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x0009bc11) main_sp_fs_ribbon_pane_t1

0x8c4f,	// (0x00095f54) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x0009bc20) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0009d0e9) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x0009bc2f) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x0009bc37) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x0009bc40) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x0009bc49) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0009d0f0) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x0009bc51) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x0009bc5a) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x0009bc63) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0009d0f7) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x0009bc6c) list_cale_mrui_pane

0x8c5e,	// (0x00095f63) sp_fs_scroll_pane_cp07_ParamLimits

0x8c5e,	// (0x00095f63) sp_fs_scroll_pane_cp07

0x8c7a,	// (0x00095f7f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c7a,	// (0x00095f7f) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x0009bc79) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x0009bc81) list_sp_fs_schedule_track_pane

0xe984,	// (0x0009bc89) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x0009bc89) sp_fs_scroll_pane_cp06

0xcc2f,	// (0x00099f34) bgmain_sp_fs_calendar_pane_g1

0x08e0,	// (0x0008dbe5) list_single_cale_mrui_pane_ParamLimits

0x08e0,	// (0x0008dbe5) list_single_cale_mrui_pane

0x8c8c,	// (0x00095f91) list_single_cale_mrui_row_pane_ParamLimits

0x8c8c,	// (0x00095f91) list_single_cale_mrui_row_pane

0x8ca2,	// (0x00095fa7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8ca2,	// (0x00095fa7) list_single_cale_mrui_row_pane_g1

0x8cce,	// (0x00095fd3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8cce,	// (0x00095fd3) list_single_cale_mrui_row_pane_t1

0x08f5,	// (0x0008dbfa) list_single_cale_mrui_row_pane_t2_ParamLimits

0x08f5,	// (0x0008dbfa) list_single_cale_mrui_row_pane_t2

0x8ce0,	// (0x00095fe5) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8ce0,	// (0x00095fe5) list_single_cale_mrui_row_pane_t3

0x8d0f,	// (0x00096014) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8d0f,	// (0x00096014) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0009d105) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0009d105) list_single_cale_mrui_row_pane_t

0x095d,	// (0x0008dc62) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x095d,	// (0x0008dc62) list_single_cmail_header_editor_pane_bg_cp01

0x0981,	// (0x0008dc86) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0981,	// (0x0008dc86) list_single_cmail_header_editor_pane_bg_cp02

0x8d3e,	// (0x00096043) main_radioblah_text_pane_t1_ParamLimits

0x8d3e,	// (0x00096043) main_radioblah_text_pane_t1

0xe9a3,	// (0x0009bca8) cam6_indi_pane_cp01

0xe9ab,	// (0x0009bcb0) cam6_mode_pane_cp01

0xe9b3,	// (0x0009bcb8) cam6_pano_pane

0xe9bc,	// (0x0009bcc1) cam6_zoom_pane_cp01

0xe9c6,	// (0x0009bccb) cam6_pano_image_pane

0xe9cf,	// (0x0009bcd4) cam6_pano_pane_g1

0xe296,	// (0x0009b59b) cam6_pano_pane_g2

0xe9d8,	// (0x0009bcdd) cam6_pano_pane_g3

0xe9e1,	// (0x0009bce6) cam6_pano_pane_g4

0xd1b1,	// (0x0009a4b6) cam6_pano_pane_g5

0xe9ea,	// (0x0009bcef) cam6_pano_pane_g6

0xe9f2,	// (0x0009bcf7) cam6_pano_pane_g7

0xe9fa,	// (0x0009bcff) cam6_pano_pane_g8

0xea03,	// (0x0009bd08) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0009d10e) cam6_pano_pane_g

0x99bc,	// (0x00096cc1) main_browser_tag_pane

0xe85b,	// (0x0009bb60) grid_navstr_albumart_pane

0xea0e,	// (0x0009bd13) cell_navstr_albumart_pane_ParamLimits

0xea0e,	// (0x0009bd13) cell_navstr_albumart_pane

0xea2d,	// (0x0009bd32) cell_navstr_albumart_pane_g1

0xc5eb,	// (0x000998f0) cell_navstr_albumart_pane_g2

0xc5fb,	// (0x00099900) cell_navstr_albumart_pane_g3

0xc5f3,	// (0x000998f8) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0009d121) cell_navstr_albumart_pane_g

0x8d59,	// (0x0009605e) bt_list_pane_ParamLimits

0x8d59,	// (0x0009605e) bt_list_pane

0x8d6f,	// (0x00096074) bt_list_pane_t1

0x8d7e,	// (0x00096083) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0009d12a) bt_list_pane_t

0x99bc,	// (0x00096cc1) main_cale_prevew_pane

0x8d8d,	// (0x00096092) popup_cale_preview_window_ParamLimits

0x8d8d,	// (0x00096092) popup_cale_preview_window

0x9a0d,	// (0x00096d12) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a0d,	// (0x00096d12) bg_popup_preview_window_pane_cp05

0xea35,	// (0x0009bd3a) list_cale_preview_pane_ParamLimits

0xea35,	// (0x0009bd3a) list_cale_preview_pane

0x8daa,	// (0x000960af) list_double_cale_preview_pane_ParamLimits

0x8daa,	// (0x000960af) list_double_cale_preview_pane

0x8dbe,	// (0x000960c3) list_single_cale_preview_pane_ParamLimits

0x8dbe,	// (0x000960c3) list_single_cale_preview_pane

0x8dd6,	// (0x000960db) list_single_cale_preview_pane_g1

0x8dde,	// (0x000960e3) list_single_cale_preview_pane_t1_ParamLimits

0x8dde,	// (0x000960e3) list_single_cale_preview_pane_t1

0x8df3,	// (0x000960f8) list_double_cale_preview_pane_g1

0x8dfb,	// (0x00096100) list_double_cale_preview_pane_t1_ParamLimits

0x8dfb,	// (0x00096100) list_double_cale_preview_pane_t1

0x8e10,	// (0x00096115) list_double_cale_preview_pane_t2_ParamLimits

0x8e10,	// (0x00096115) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0009d12f) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0009d12f) list_double_cale_preview_pane_t

0x99bc,	// (0x00096cc1) main_ezdial_pane

0x9a0d,	// (0x00096d12) main_sp_fs_email_pane_ParamLimits

0x86da,	// (0x000959df) cmail_ddmenu_btn01_pane_ParamLimits

0x86da,	// (0x000959df) cmail_ddmenu_btn01_pane

0x86ed,	// (0x000959f2) cmail_ddmenu_btn02_pane_ParamLimits

0x86ed,	// (0x000959f2) cmail_ddmenu_btn02_pane

0x8710,	// (0x00095a15) cmail_ddmenu_btn03_pane_ParamLimits

0x8710,	// (0x00095a15) cmail_ddmenu_btn03_pane

0x0372,	// (0x0008d677) main_sp_fs_ctrlbar_pane_ParamLimits

0x0396,	// (0x0008d69b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x89cf,	// (0x00095cd4) list_cmail_body_pane_ParamLimits

0x8a1d,	// (0x00095d22) bg_button_pane_cp12

0xe7e4,	// (0x0009bae9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e4,	// (0x0009bae9) list_single_cmail_header_detail_pane_g3

0x8a28,	// (0x00095d2d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a28,	// (0x00095d2d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0009d0b2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0009d0b2) list_single_cmail_header_detail_pane_t

0x8b25,	// (0x00095e2a) phacti_term_pane_t2_ParamLimits

0x8b25,	// (0x00095e2a) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0009d0bc) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0009d0bc) phacti_term_pane_t

0xea41,	// (0x0009bd46) aid_size_list_single_double

0x8e28,	// (0x0009612d) popup_ezdial_listscroll_window

0x8e44,	// (0x00096149) popup_number_entry_window_cp01

0xb3c2,	// (0x000986c7) bg_popup_call_pane_cp09

0xea4d,	// (0x0009bd52) ezdial_list_pane

0xea55,	// (0x0009bd5a) scroll_pane_cp23

0xc7de,	// (0x00099ae3) bg_button_pane_cp028_ParamLimits

0xc7de,	// (0x00099ae3) bg_button_pane_cp028

0x8e52,	// (0x00096157) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e52,	// (0x00096157) cmail_ddmenu_btn01_pane_g1

0x8e61,	// (0x00096166) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e61,	// (0x00096166) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0009d134) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0009d134) cmail_ddmenu_btn01_pane_g

0xea5d,	// (0x0009bd62) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea5d,	// (0x0009bd62) cmail_ddmenu_btn01_pane_t1

0xc7de,	// (0x00099ae3) bg_button_pane_cp029_ParamLimits

0xc7de,	// (0x00099ae3) bg_button_pane_cp029

0x8e77,	// (0x0009617c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e77,	// (0x0009617c) cmail_ddmenu_btn02_pane_g1

0x8e92,	// (0x00096197) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e92,	// (0x00096197) cmail_ddmenu_btn02_pane_t1

0x9a0d,	// (0x00096d12) bg_button_pane_cp031_ParamLimits

0x9a0d,	// (0x00096d12) bg_button_pane_cp031

0x8e77,	// (0x0009617c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e77,	// (0x0009617c) cmail_ddmenu_btn03_pane_g1

0x8e92,	// (0x00096197) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e92,	// (0x00096197) cmail_ddmenu_btn03_pane_t1

0x626d,	// (0x00093572) cell_dialer2_keypad_pane_t1_ParamLimits

0x6287,	// (0x0009358c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6287,	// (0x0009358c) cell_dialer2_keypad_pane_t1_copy1

0x7fe5,	// (0x000952ea) ncimui_group_button_pane

0x9a0d,	// (0x00096d12) main_sp_fs_calendar_pane_ParamLimits

0xe7c9,	// (0x0009bace) list_single_cmail_header_caption_pane_ParamLimits

0x8b58,	// (0x00095e5d) aid_recal_txt_sm_pane

0x99bc,	// (0x00096cc1) mian_recal_day_pane

0x8bd1,	// (0x00095ed6) popup_sp_fs_cale_preview_window_ParamLimits

0xea73,	// (0x0009bd78) list_recal_day_pane

0x8ed5,	// (0x000961da) list_single_recal_day_pane_ParamLimits

0x8ed5,	// (0x000961da) list_single_recal_day_pane

0xea9a,	// (0x0009bd9f) list_single_recal_day_pane_g1_ParamLimits

0xea9a,	// (0x0009bd9f) list_single_recal_day_pane_g1

0x8ee7,	// (0x000961ec) list_single_recal_day_pane_g2_ParamLimits

0x8ee7,	// (0x000961ec) list_single_recal_day_pane_g2

0x8ef3,	// (0x000961f8) list_single_recal_day_pane_g3_ParamLimits

0x8ef3,	// (0x000961f8) list_single_recal_day_pane_g3

0x099f,	// (0x0008dca4) list_single_recal_day_pane_g4_ParamLimits

0x099f,	// (0x0008dca4) list_single_recal_day_pane_g4

0x8eff,	// (0x00096204) list_single_recal_day_pane_g5_ParamLimits

0x8eff,	// (0x00096204) list_single_recal_day_pane_g5

0x8f0b,	// (0x00096210) list_single_recal_day_pane_g6_ParamLimits

0x8f0b,	// (0x00096210) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0009d143) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0009d143) list_single_recal_day_pane_g

0x8f1f,	// (0x00096224) list_single_recal_day_pane_t1

0x8f31,	// (0x00096236) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0009d14e) list_single_recal_day_pane_t

0x8f43,	// (0x00096248) ncimui_query_button_pane_ParamLimits

0x8f43,	// (0x00096248) ncimui_query_button_pane

0x8f53,	// (0x00096258) ncimui_query_button_pane_t1_ParamLimits

0x8f53,	// (0x00096258) ncimui_query_button_pane_t1

0xeaa6,	// (0x0009bdab) ncimui_query_button_pane_t2_ParamLimits

0xeaa6,	// (0x0009bdab) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0009d153) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0009d153) ncimui_query_button_pane_t

0x8f66,	// (0x0009626b) query_button_pane_ParamLimits

0x8f66,	// (0x0009626b) query_button_pane

0x99bc,	// (0x00096cc1) bg_button_pane_cp0028

0xeab9,	// (0x0009bdbe) query_button_pane_t1

0x4266,	// (0x0009156b) main_tport_pane_ParamLimits

0x887f,	// (0x00095b84) bg_popup_window_pane_cp01_ParamLimits

0x887f,	// (0x00095b84) bg_popup_window_pane_cp01

0x889a,	// (0x00095b9f) heading_pane_cp08_ParamLimits

0x889a,	// (0x00095b9f) heading_pane_cp08

0x88ad,	// (0x00095bb2) heading_pane_cp07_ParamLimits

0x88ad,	// (0x00095bb2) heading_pane_cp07

0x895e,	// (0x00095c63) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0009d09f) cell_tport_appsw_pane_g

0x381b,	// (0x00090b20) input_candi_list_open_g1

0xae9d,	// (0x000981a2) list_cale_time_pane_g6_ParamLimits

0xae9d,	// (0x000981a2) list_cale_time_pane_g6

0x5070,	// (0x00092375) aid_size_touch_calib_1_ParamLimits

0x5070,	// (0x00092375) aid_size_touch_calib_1

0x5082,	// (0x00092387) aid_size_touch_calib_2_ParamLimits

0x5082,	// (0x00092387) aid_size_touch_calib_2

0x509a,	// (0x0009239f) aid_size_touch_calib_3_ParamLimits

0x509a,	// (0x0009239f) aid_size_touch_calib_3

0x50b8,	// (0x000923bd) aid_size_touch_calib_4_ParamLimits

0x50b8,	// (0x000923bd) aid_size_touch_calib_4

0x50d0,	// (0x000923d5) main_touch_calib_button_group_pane_ParamLimits

0x50d0,	// (0x000923d5) main_touch_calib_button_group_pane

0x50e8,	// (0x000923ed) main_touch_calib_pane_g1_ParamLimits

0x50fa,	// (0x000923ff) main_touch_calib_pane_g2_ParamLimits

0x510c,	// (0x00092411) main_touch_calib_pane_g3_ParamLimits

0x511e,	// (0x00092423) main_touch_calib_pane_g4_ParamLimits

0xf75d,	// (0x0009ca62) main_touch_calib_pane_g_ParamLimits

0x5130,	// (0x00092435) main_touch_calib_pane_t1_ParamLimits

0x514a,	// (0x0009244f) main_touch_calib_pane_t2_ParamLimits

0x5164,	// (0x00092469) main_touch_calib_pane_t3_ParamLimits

0x5178,	// (0x0009247d) main_touch_calib_pane_t4_ParamLimits

0x518e,	// (0x00092493) main_touch_calib_pane_t5_ParamLimits

0xf766,	// (0x0009ca6b) main_touch_calib_pane_t_ParamLimits

0xcf5f,	// (0x0009a264) list_single_fp_cale_pane_g3_ParamLimits

0xcf5f,	// (0x0009a264) list_single_fp_cale_pane_g3

0x9a0d,	// (0x00096d12) bg_button_pane_cp012_ParamLimits

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp03_ParamLimits

0x726e,	// (0x00094573) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a0d,	// (0x00096d12) bg_vkb2_func_pane_cp04_ParamLimits

0x7f73,	// (0x00095278) main_ncimui_button_group_pane_ParamLimits

0x7f73,	// (0x00095278) main_ncimui_button_group_pane

0x7fd3,	// (0x000952d8) main_ncimui_pane_t3_ParamLimits

0x7fd3,	// (0x000952d8) main_ncimui_pane_t3

0xe871,	// (0x0009bb76) phacti_button_group_pane

0xea41,	// (0x0009bd46) aid_size_list_single_double_ParamLimits

0x8e28,	// (0x0009612d) popup_ezdial_listscroll_window_ParamLimits

0x8e44,	// (0x00096149) popup_number_entry_window_cp01_ParamLimits

0x8f79,	// (0x0009627e) phacti_button_pane_ParamLimits

0x8f79,	// (0x0009627e) phacti_button_pane

0x99bc,	// (0x00096cc1) bg_button_pane_cp14

0xeac7,	// (0x0009bdcc) phacti_button_pane_t1

0x8f8a,	// (0x0009628f) main_touch_calib_button_pane_ParamLimits

0x8f8a,	// (0x0009628f) main_touch_calib_button_pane

0xa170,	// (0x00097475) bg_button_pane_cp18_ParamLimits

0xa170,	// (0x00097475) bg_button_pane_cp18

0xead5,	// (0x0009bdda) main_touch_calib_button_pane_t1_ParamLimits

0xead5,	// (0x0009bdda) main_touch_calib_button_pane_t1

0xeaeb,	// (0x0009bdf0) main_touch_calib_button_pane_t2_ParamLimits

0xeaeb,	// (0x0009bdf0) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0009d158) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0009d158) main_touch_calib_button_pane_t

0x99bc,	// (0x00096cc1) cell_ncimui_button_pane

0x99bc,	// (0x00096cc1) bg_button_pane_cp032

0xeb09,	// (0x0009be0e) cell_ncimui_button_pane_t1

0xa906,	// (0x00097c0b) image3_infobar_pane_ParamLimits

0xa906,	// (0x00097c0b) image3_infobar_pane

0x83a1,	// (0x000956a6) fs_bigclock_status_pane_ParamLimits

0x83a1,	// (0x000956a6) fs_bigclock_status_pane

0x83ae,	// (0x000956b3) main_fs_bigclock_clock_pane_ParamLimits

0x83ae,	// (0x000956b3) main_fs_bigclock_clock_pane

0x83c2,	// (0x000956c7) main_fs_bigclock_indi_pane_ParamLimits

0x83c2,	// (0x000956c7) main_fs_bigclock_indi_pane

0x83dd,	// (0x000956e2) main_fs_bigclock_swipe_pane_ParamLimits

0x83dd,	// (0x000956e2) main_fs_bigclock_swipe_pane

0x99bc,	// (0x00096cc1) main_fs_clock_dumped_data

0xe3a3,	// (0x0009b6a8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a3,	// (0x0009b6a8) list_single_fs_bigclock_indicator_pane_g1

0xe3cd,	// (0x0009b6d2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3cd,	// (0x0009b6d2) list_single_fs_bigclock_indicator_pane_g2

0xe3e7,	// (0x0009b6ec) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e7,	// (0x0009b6ec) list_single_fs_bigclock_indicator_pane_g3

0xe401,	// (0x0009b706) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe401,	// (0x0009b706) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0009cf80) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0009cf80) list_single_fs_bigclock_indicator_pane_g

0xe42c,	// (0x0009b731) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe42c,	// (0x0009b731) list_single_fs_bigclock_indicator_pane_t1

0xe454,	// (0x0009b759) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe454,	// (0x0009b759) list_single_fs_bigclock_indicator_pane_t2

0xe47c,	// (0x0009b781) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe47c,	// (0x0009b781) list_single_fs_bigclock_indicator_pane_t3

0xe4a4,	// (0x0009b7a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4a4,	// (0x0009b7a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0009cf8b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0009cf8b) list_single_fs_bigclock_indicator_pane_t

0xeb17,	// (0x0009be1c) image3_infobar_fav_pane_ParamLimits

0xeb17,	// (0x0009be1c) image3_infobar_fav_pane

0xeb27,	// (0x0009be2c) image3_infobar_loc_pane_ParamLimits

0xeb27,	// (0x0009be2c) image3_infobar_loc_pane

0xeb3d,	// (0x0009be42) image3_infobar_time_pane_ParamLimits

0xeb3d,	// (0x0009be42) image3_infobar_time_pane

0xcc2f,	// (0x00099f34) image3_infobar_time_pane_g1

0xeb4d,	// (0x0009be52) image3_infobar_time_pane_t1

0xcc2f,	// (0x00099f34) image3_infobar_loc_pane_g1

0xeb5b,	// (0x0009be60) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0009d15d) image3_infobar_loc_pane_g

0xeb63,	// (0x0009be68) image3_infobar_loc_pane_t1

0xcc2f,	// (0x00099f34) image3_infobar_fav_pane_g1

0xeb71,	// (0x0009be76) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0009d162) image3_infobar_fav_pane_g

0xeb79,	// (0x0009be7e) fs_bigclock_status_battery_pane

0xeb82,	// (0x0009be87) fs_bigclock_status_signal_pane

0xeb8b,	// (0x0009be90) fs_bigclock_status_title_pane

0xeb94,	// (0x0009be99) fs_bigclock_status_signal_pane_g1

0xeb9d,	// (0x0009bea2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0009d167) fs_bigclock_status_signal_pane_g

0xeba5,	// (0x0009beaa) fs_bigclock_status_battery_pane_g1

0xebae,	// (0x0009beb3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0009d16c) fs_bigclock_status_battery_pane_g

0xebb6,	// (0x0009bebb) fs_bigclock_status_title_pane_t1

0xcc2f,	// (0x00099f34) main_fs_bigclock_clock_pane_g1

0xebc4,	// (0x0009bec9) main_fs_bigclock_clock_pane_g2

0xebc4,	// (0x0009bec9) main_fs_bigclock_clock_pane_g3

0xebc4,	// (0x0009bec9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0009d171) main_fs_bigclock_clock_pane_g

0xebcc,	// (0x0009bed1) main_fs_bigclock_clock_pane_t1

0xebda,	// (0x0009bedf) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0009d17a) main_fs_bigclock_clock_pane_t

0x8f9f,	// (0x000962a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8f9f,	// (0x000962a4) list_single_fs_bigclock_indicator_pane

0x8fb0,	// (0x000962b5) list_single_fs_bigclock_pane_ParamLimits

0x8fb0,	// (0x000962b5) list_single_fs_bigclock_pane

0xebf2,	// (0x0009bef7) main_fs_bigclock_indicator_pane_t1

0xec01,	// (0x0009bf06) list_single_fs_bigclock_pane_g1

0xec09,	// (0x0009bf0e) list_single_fs_bigclock_pane_t1

0xcc2f,	// (0x00099f34) main_fs_bigclock_swipe_pane_g1

0xec4c,	// (0x0009bf51) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0009d18b) main_fs_bigclock_swipe_pane_g

0xec54,	// (0x0009bf59) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec54,	// (0x0009bf59) main_fs_bigclock_swipe_pane_t1

0x2fad,	// (0x000902b2) call_type_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_btmg_pane

0xab7d,	// (0x00097e82) list_single_cale_mrui_row_pane_g2_ParamLimits

0xab7d,	// (0x00097e82) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0009d0fe) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0009d0fe) list_single_cale_mrui_row_pane_g

0x8ec3,	// (0x000961c8) list_recal_vselct_arw_lo_pane

0xea92,	// (0x0009bd97) list_recal_vselct_arw_up_pane

0x8ecb,	// (0x000961d0) list_recal_vselct_pane

0x9013,	// (0x00096318) btmg_button_pane

0x901d,	// (0x00096322) main_btmg_pane_g1

0x99bc,	// (0x00096cc1) bg_button_pane_cp044

0xec71,	// (0x0009bf76) btmg_button_pane_t1

0xc7ca,	// (0x00099acf) aid_listscroll_gen

0x9a0d,	// (0x00096d12) main_cntbar_detail_pane

0xe7aa,	// (0x0009baaf) list_cmail_folder_pane

0xe7ba,	// (0x0009babf) sp_fs_scroll_pane_cp03_ParamLimits

0xab89,	// (0x00097e8e) list_single_fs_dyc_pane_cp01_ParamLimits

0xab89,	// (0x00097e8e) list_single_fs_dyc_pane_cp01

0xec7f,	// (0x0009bf84) aid_size_cmail_indent

0xaba3,	// (0x00097ea8) list_single_dyc_row_pane_cp01

0x9057,	// (0x0009635c) cntbar_detail_list_pane_ParamLimits

0x9057,	// (0x0009635c) cntbar_detail_list_pane

0x90a9,	// (0x000963ae) main_cntbar_detail_cont_pane_ParamLimits

0x90a9,	// (0x000963ae) main_cntbar_detail_cont_pane

0x2fa1,	// (0x000902a6) scroll_pane_cp032_ParamLimits

0x2fa1,	// (0x000902a6) scroll_pane_cp032

0x90bd,	// (0x000963c2) cntbar_detail_list_event_pane_ParamLimits

0x90bd,	// (0x000963c2) cntbar_detail_list_event_pane

0x9069,	// (0x0009636e) cntbar_detail_list_shct_pane

0xad37,	// (0x0009803c) aid_list_gen

0xec88,	// (0x0009bf8d) aid_scroll

0xec91,	// (0x0009bf96) aid_size_touch_scroll_bar

0x01b1,	// (0x0008d4b6) aid_list_double

0xec9a,	// (0x0009bf9f) aid_list_single

0x7865,	// (0x00094b6a) aid_list_single_lg

0xabac,	// (0x00097eb1) aid_list_z_g_a_sm

0xabb4,	// (0x00097eb9) aid_list_z_g_d

0xabbc,	// (0x00097ec1) aid_txt_z_prm

0x09b7,	// (0x0008dcbc) aid_txt_z_prm_cp01

0x09c5,	// (0x0008dcca) aid_txt_z_sec

0x90cd,	// (0x000963d2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90cd,	// (0x000963d2) main_cntbar_detail_cont_pane_g1

0x90e1,	// (0x000963e6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90e1,	// (0x000963e6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0009d190) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0009d190) main_cntbar_detail_cont_pane_g

0xeca3,	// (0x0009bfa8) main_cntbar_detail_cont_pane_t1

0xecb1,	// (0x0009bfb6) main_cntbar_detail_cont_pane_t2

0xecbf,	// (0x0009bfc4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0009d195) main_cntbar_detail_cont_pane_t

0x90f1,	// (0x000963f6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90f1,	// (0x000963f6) cell_cntbar_detail_list_shct_pane

0xeccd,	// (0x0009bfd2) cntbar_detail_list_shct_pane_g1

0xecd6,	// (0x0009bfdb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0009d19c) cntbar_detail_list_shct_pane_g

0x9103,	// (0x00096408) cntbar_detail_list_event_pane_g1_ParamLimits

0x9103,	// (0x00096408) cntbar_detail_list_event_pane_g1

0x910f,	// (0x00096414) cntbar_detail_list_event_pane_g2_ParamLimits

0x910f,	// (0x00096414) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0009d1a1) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0009d1a1) cntbar_detail_list_event_pane_g

0x917d,	// (0x00096482) cntbar_detail_list_event_pane_t1_ParamLimits

0x917d,	// (0x00096482) cntbar_detail_list_event_pane_t1

0x9192,	// (0x00096497) cntbar_detail_list_event_pane_t2_ParamLimits

0x9192,	// (0x00096497) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0009d1ae) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0009d1ae) cntbar_detail_list_event_pane_t

0xcc2f,	// (0x00099f34) cell_cntbar_detail_list_shct_pane_g1

0x3353,	// (0x00090658) navi_pane_mv_g3

0x9a0d,	// (0x00096d12) main_cntbar_detail_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_notif_wgt_pane

0xa71e,	// (0x00097a23) aid_tch_main_mp4_pane_g4

0xa8fc,	// (0x00097c01) popup_slider_window_cp02

0x8eb9,	// (0x000961be) list_recal_day_event_pane

0x9027,	// (0x0009632c) cntbar_detail_btn_pane_ParamLimits

0x9027,	// (0x0009632c) cntbar_detail_btn_pane

0x903f,	// (0x00096344) cntbar_detail_btn_pane_cp01_ParamLimits

0x903f,	// (0x00096344) cntbar_detail_btn_pane_cp01

0x9069,	// (0x0009636e) cntbar_detail_list_shct_pane_ParamLimits

0x9079,	// (0x0009637e) cntbar_detail_pane_g1_ParamLimits

0x9079,	// (0x0009637e) cntbar_detail_pane_g1

0x908d,	// (0x00096392) cntbar_detail_pane_t1_ParamLimits

0x908d,	// (0x00096392) cntbar_detail_pane_t1

0x911b,	// (0x00096420) cntbar_detail_list_event_pane_g3_ParamLimits

0x911b,	// (0x00096420) cntbar_detail_list_event_pane_g3

0x9133,	// (0x00096438) cntbar_detail_list_event_pane_g4_ParamLimits

0x9133,	// (0x00096438) cntbar_detail_list_event_pane_g4

0x914b,	// (0x00096450) cntbar_detail_list_event_pane_g5_ParamLimits

0x914b,	// (0x00096450) cntbar_detail_list_event_pane_g5

0x9163,	// (0x00096468) cntbar_detail_list_event_pane_g6_ParamLimits

0x9163,	// (0x00096468) cntbar_detail_list_event_pane_g6

0x91a7,	// (0x000964ac) cntbar_detail_list_event_pane_t3_ParamLimits

0x91a7,	// (0x000964ac) cntbar_detail_list_event_pane_t3

0x91b9,	// (0x000964be) popup_notif_wgt_window_ParamLimits

0x91b9,	// (0x000964be) popup_notif_wgt_window

0x91d2,	// (0x000964d7) popup_submenu_window_cp01_ParamLimits

0x91d2,	// (0x000964d7) popup_submenu_window_cp01

0xb3c2,	// (0x000986c7) bg_popup_window_pane_cp10

0xecdf,	// (0x0009bfe4) listscroll_notif_wgt_pane

0xecf1,	// (0x0009bff6) list_notif_wgt_window

0xecfa,	// (0x0009bfff) scroll_pane_cp033

0x91e6,	// (0x000964eb) list_notif_wgt_row_pane_ParamLimits

0x91e6,	// (0x000964eb) list_notif_wgt_row_pane

0xed03,	// (0x0009c008) aid_size_list_notif_wgt_del

0xed10,	// (0x0009c015) list_notif_wgt_row_pane_g1

0xed1c,	// (0x0009c021) list_notif_wgt_row_pane_g2

0xed28,	// (0x0009c02d) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0009d1b5) list_notif_wgt_row_pane_g

0xed35,	// (0x0009c03a) list_notif_wgt_row_pane_t1

0xed4a,	// (0x0009c04f) list_notif_wgt_row_pane_t2

0xed5c,	// (0x0009c061) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0009d1bc) list_notif_wgt_row_pane_t

0xd880,	// (0x0009ab85) list_recal_day_event_pane_g1

0xed6e,	// (0x0009c073) list_recal_day_event_pane_t1

0x99bc,	// (0x00096cc1) bg_button_pane_cp045

0xed7d,	// (0x0009c082) cntbar_detail_btn_pane_t1

0xc7de,	// (0x00099ae3) main_callh_pane_ParamLimits

0xc7de,	// (0x00099ae3) main_callh_pane

0x99bc,	// (0x00096cc1) main_coverflow0_pane

0x99bc,	// (0x00096cc1) main_wgtman_pane

0x83eb,	// (0x000956f0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83eb,	// (0x000956f0) main_fs_bigclock_unlock_btn_pane

0x8956,	// (0x00095c5b) bg_button_pane_cp16

0x8966,	// (0x00095c6b) cell_tport_appsw_pane_g3

0x91f6,	// (0x000964fb) cf0_flow_pane_ParamLimits

0x91f6,	// (0x000964fb) cf0_flow_pane

0xed8b,	// (0x0009c090) listscroll_cf0_pane

0xed96,	// (0x0009c09b) main_cf0_pane_g1

0x920b,	// (0x00096510) main_cf0_pane_t1_ParamLimits

0x920b,	// (0x00096510) main_cf0_pane_t1

0x9222,	// (0x00096527) main_cf0_pane_t2_ParamLimits

0x9222,	// (0x00096527) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0009d1c8) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0009d1c8) main_cf0_pane_t

0xeda8,	// (0x0009c0ad) scroll_pane_cp11

0x9239,	// (0x0009653e) cf0_flow_pane_g1

0x9245,	// (0x0009654a) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0009d1cd) cf0_flow_pane_g

0x9251,	// (0x00096556) cf0_flow_pane_t1

0x99bc,	// (0x00096cc1) main_call6_pane

0x99bc,	// (0x00096cc1) main_calllock_pane

0x9263,	// (0x00096568) call6_btn_grp_pane_ParamLimits

0x9263,	// (0x00096568) call6_btn_grp_pane

0x927d,	// (0x00096582) call6_pane_g1_ParamLimits

0x927d,	// (0x00096582) call6_pane_g1

0x9293,	// (0x00096598) popup_call6_1st_window_ParamLimits

0x9293,	// (0x00096598) popup_call6_1st_window

0x92a4,	// (0x000965a9) popup_call6_2nd_window_ParamLimits

0x92a4,	// (0x000965a9) popup_call6_2nd_window

0x92b5,	// (0x000965ba) cell_call6_btn_pane_ParamLimits

0x92b5,	// (0x000965ba) cell_call6_btn_pane

0xb3c2,	// (0x000986c7) bg_popup_call2_in_pane_cp03

0xedb3,	// (0x0009c0b8) popup_call6_1st_window_g1

0xedbb,	// (0x0009c0c0) popup_call6_1st_window_g2

0xedc3,	// (0x0009c0c8) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0009d1d2) popup_call6_1st_window_g

0xedcb,	// (0x0009c0d0) popup_call6_1st_window_t1

0xedda,	// (0x0009c0df) popup_call6_1st_window_t2

0xedea,	// (0x0009c0ef) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0009d1d9) popup_call6_1st_window_t

0xb3c2,	// (0x000986c7) bg_popup_call2_in_pane_cp04

0xedb3,	// (0x0009c0b8) popup_call6_2nd_window_g1

0xedbb,	// (0x0009c0c0) popup_call6_2nd_window_g2

0xedc3,	// (0x0009c0c8) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0009d1d2) popup_call6_2nd_window_g

0xedcb,	// (0x0009c0d0) popup_call6_2nd_window_t1

0x99bc,	// (0x00096cc1) bg_button_pane_cp15

0xedfa,	// (0x0009c0ff) cell_call6_btn_pane_g1

0xee03,	// (0x0009c108) cell_call6_btn_pane_t1

0x92c9,	// (0x000965ce) listscroll_wgtman_pane_ParamLimits

0x92c9,	// (0x000965ce) listscroll_wgtman_pane

0x92ea,	// (0x000965ef) wgtman_btn_pane_ParamLimits

0x92ea,	// (0x000965ef) wgtman_btn_pane

0xb288,	// (0x0009858d) aid_scroll_copy1

0xee12,	// (0x0009c117) list_wgtman_pane

0x932d,	// (0x00096632) wgtman_btn_pane_g1_ParamLimits

0x932d,	// (0x00096632) wgtman_btn_pane_g1

0x9359,	// (0x0009665e) wgtman_btn_pane_t1_ParamLimits

0x9359,	// (0x0009665e) wgtman_btn_pane_t1

0xee1c,	// (0x0009c121) wgtman_btn_pane_t2_ParamLimits

0xee1c,	// (0x0009c121) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0009d1e0) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0009d1e0) wgtman_btn_pane_t

0xaa7d,	// (0x00097d82) listrow_wgtman_pane_ParamLimits

0xaa7d,	// (0x00097d82) listrow_wgtman_pane

0x9396,	// (0x0009669b) listrow_wgtman_pane_g1

0x93a3,	// (0x000966a8) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0009d1e5) listrow_wgtman_pane_g

0x09d3,	// (0x0008dcd8) listrow_wgtman_pane_t1

0x09eb,	// (0x0008dcf0) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0009d1ea) listrow_wgtman_pane_t

0x0a11,	// (0x0008dd16) wait_bar_pane_cp09

0xee33,	// (0x0009c138) main_calllock_btn_pane

0xee3d,	// (0x0009c142) main_calllock_pane_g1

0x99bc,	// (0x00096cc1) bg_button_pane_cp17

0xee49,	// (0x0009c14e) main_calllock_btn_pane_g1

0xee52,	// (0x0009c157) main_calllock_btn_pane_t1

0x99bc,	// (0x00096cc1) main_dialer3_pane

0x99bc,	// (0x00096cc1) main_fmrd2_pane

0xcc2f,	// (0x00099f34) main_fs_bigclock_unlock_btn_pane_g1

0xee69,	// (0x0009c16e) main_fs_bigclock_unlock_btn_pane_t1

0x93c1,	// (0x000966c6) area_fmrd2_info_pane_ParamLimits

0x93c1,	// (0x000966c6) area_fmrd2_info_pane

0x93d0,	// (0x000966d5) area_fmrd2_visual_pane_ParamLimits

0x93d0,	// (0x000966d5) area_fmrd2_visual_pane

0x93de,	// (0x000966e3) fmrd2_indi_pane_ParamLimits

0x93de,	// (0x000966e3) fmrd2_indi_pane

0x93eb,	// (0x000966f0) area_fmrd2_visual_pane_g1

0x93f3,	// (0x000966f8) area_fmrd2_visual_pane_t1

0x9403,	// (0x00096708) area_fmrd2_visual_pane_t2

0x9413,	// (0x00096718) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0009d1f4) area_fmrd2_visual_pane_t

0x9423,	// (0x00096728) area_fmrd2_info_pane_g1

0x942b,	// (0x00096730) area_fmrd2_info_pane_t1

0x943b,	// (0x00096740) area_fmrd2_info_pane_t2

0x944b,	// (0x00096750) area_fmrd2_info_pane_t3

0x945b,	// (0x00096760) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0009d1fb) area_fmrd2_info_pane_t

0x946b,	// (0x00096770) fmrd2_indi_pane_t1

0x947b,	// (0x00096780) fmrd2_indi_pane_t2

0x948b,	// (0x00096790) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0009d204) fmrd2_indi_pane_t

0xe410,	// (0x0009b715) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe410,	// (0x0009b715) list_single_fs_bigclock_indicator_pane_g5

0xe4b9,	// (0x0009b7be) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4b9,	// (0x0009b7be) list_single_fs_bigclock_indicator_pane_t5

0x8b3a,	// (0x00095e3f) aid_cell_bcale_month_pane_ParamLimits

0x8b3a,	// (0x00095e3f) aid_cell_bcale_month_pane

0x8b61,	// (0x00095e66) bcale_month_pane_ParamLimits

0x8b61,	// (0x00095e66) bcale_month_pane

0x8b83,	// (0x00095e88) bcale_preview_pane_ParamLimits

0x8b83,	// (0x00095e88) bcale_preview_pane

0xec09,	// (0x0009bf0e) list_single_fs_bigclock_pane_t1_ParamLimits

0xec28,	// (0x0009bf2d) list_single_fs_bigclock_pane_t2_ParamLimits

0xec28,	// (0x0009bf2d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0009d186) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0009d186) list_single_fs_bigclock_pane_t

0xee61,	// (0x0009c166) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0009d1ef) main_fs_bigclock_unlock_btn_pane_g

0x949b,	// (0x000967a0) aid_dia3_key_size_ParamLimits

0x949b,	// (0x000967a0) aid_dia3_key_size

0x94aa,	// (0x000967af) aid_dia3_listrow_size_ParamLimits

0x94aa,	// (0x000967af) aid_dia3_listrow_size

0x94bf,	// (0x000967c4) dia3_keypad_fun_pane_ParamLimits

0x94bf,	// (0x000967c4) dia3_keypad_fun_pane

0x94db,	// (0x000967e0) dia3_keypad_num_pane_ParamLimits

0x94db,	// (0x000967e0) dia3_keypad_num_pane

0x94f4,	// (0x000967f9) dia3_listscroll_pane_ParamLimits

0x94f4,	// (0x000967f9) dia3_listscroll_pane

0x9507,	// (0x0009680c) dia3_numentry_pane_ParamLimits

0x9507,	// (0x0009680c) dia3_numentry_pane

0xee77,	// (0x0009c17c) dia3_list_pane

0xee82,	// (0x0009c187) scroll_pane_cp12

0x99bc,	// (0x00096cc1) bg_dia3_numentry_pane

0x951b,	// (0x00096820) dia3_numentry_pane_t1

0x952a,	// (0x0009682f) cell_dia3_key_num_pane

0x9532,	// (0x00096837) cell_dia3_key0_fun_pane_ParamLimits

0x9532,	// (0x00096837) cell_dia3_key0_fun_pane

0x9546,	// (0x0009684b) cell_dia3_key1_fun_pane_ParamLimits

0x9546,	// (0x0009684b) cell_dia3_key1_fun_pane

0x955e,	// (0x00096863) dia3_listrow_pane

0xe10e,	// (0x0009b413) bg_dia3_numentry_pane_g1

0x99bc,	// (0x00096cc1) bg_button_pane_cp21

0xee8d,	// (0x0009c192) cell_dia3_key_num_pane_t1

0xee9b,	// (0x0009c1a0) cell_dia3_key_num_pane_t2

0xeeaa,	// (0x0009c1af) cell_dia3_key_num_pane_t3

0xeeb9,	// (0x0009c1be) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0009d20b) cell_dia3_key_num_pane_t

0x99bc,	// (0x00096cc1) bg_button_pane_cp19

0x9570,	// (0x00096875) cell_dia3_key0_fun_pane_g1

0x99bc,	// (0x00096cc1) bg_button_pane_cp20

0x9578,	// (0x0009687d) cell_dia3_key1_fun_pane_g1

0x9580,	// (0x00096885) area_left_week_number_pane

0x958e,	// (0x00096893) area_top_day_name_pane

0x95a1,	// (0x000968a6) frame_month_view_pane

0xeec8,	// (0x0009c1cd) grid_month_view_pane

0x95b6,	// (0x000968bb) cell_top_day_name_pane_ParamLimits

0x95b6,	// (0x000968bb) cell_top_day_name_pane

0x95e5,	// (0x000968ea) cell_area_left_week_number_pane_ParamLimits

0x95e5,	// (0x000968ea) cell_area_left_week_number_pane

0x95f9,	// (0x000968fe) cell_month_view_pane_ParamLimits

0x95f9,	// (0x000968fe) cell_month_view_pane

0xeed6,	// (0x0009c1db) frm_month_g1

0x9628,	// (0x0009692d) frm_month_g2

0x963b,	// (0x00096940) frm_month_g3

0x964e,	// (0x00096953) frm_month_g4

0x9661,	// (0x00096966) frm_month_g5

0x9674,	// (0x00096979) frm_month_g6

0x9687,	// (0x0009698c) frm_month_g7

0xeee3,	// (0x0009c1e8) frm_month_g8

0x969c,	// (0x000969a1) frm_month_g9

0x96ac,	// (0x000969b1) frm_month_g10

0x96bc,	// (0x000969c1) frm_month_g11

0x96cc,	// (0x000969d1) frm_month_g12

0x96de,	// (0x000969e3) frm_month_g13

0x96f2,	// (0x000969f7) frm_month_g14

0x9706,	// (0x00096a0b) frm_month_g15

0x971a,	// (0x00096a1f) frm_month_g16

0x000f,

0xff0f,	// (0x0009d214) frm_month_g

0xeef0,	// (0x0009c1f5) cell_top_day_name_pane_t1

0x972e,	// (0x00096a33) cell_area_left_week_number_pane_g1

0x973a,	// (0x00096a3f) cell_area_left_week_number_pane_t1

0xce5f,	// (0x0009a164) cell_month_view_pane_g1

0x974d,	// (0x00096a52) cell_month_view_pane_t1

0x99bc,	// (0x00096cc1) main_fps_pane

0xe68e,	// (0x0009b993) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe68e,	// (0x0009b993) cmail_ddmenu_btn02_pane_cp1

0xe6aa,	// (0x0009b9af) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6aa,	// (0x0009b9af) cmail_ddmenu_btn02_pane_cp2

0x8e86,	// (0x0009618b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e86,	// (0x0009618b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0009d139) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0009d139) cmail_ddmenu_btn02_pane_g

0x8ea7,	// (0x000961ac) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ea7,	// (0x000961ac) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0009d13e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0009d13e) cmail_ddmenu_btn02_pane_t

0x9760,	// (0x00096a65) fps_text_pane_ParamLimits

0x9760,	// (0x00096a65) fps_text_pane

0x9777,	// (0x00096a7c) main_fps_pane_g1_ParamLimits

0x9777,	// (0x00096a7c) main_fps_pane_g1

0x978f,	// (0x00096a94) wait_bar_pane_cp010_ParamLimits

0x978f,	// (0x00096a94) wait_bar_pane_cp010

0x97a2,	// (0x00096aa7) fps_text_pane_t1_ParamLimits

0x97a2,	// (0x00096aa7) fps_text_pane_t1

0xd5ce,	// (0x0009a8d3) cam4_image_uncrop_pane_g1

0xd5d7,	// (0x0009a8dc) cam4_image_uncrop_pane_g2

0x6759,	// (0x00093a5e) cam4_image_uncrop_pane_g3

0x6762,	// (0x00093a67) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0009cbfa) cam4_image_uncrop_pane_g

0x955e,	// (0x00096863) dia3_listrow_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_phob2_pane

0x8925,	// (0x00095c2a) cell_tport_appsw_pane_cp02_ParamLimits

0x8925,	// (0x00095c2a) cell_tport_appsw_pane_cp02

0x8939,	// (0x00095c3e) cell_tport_appsw_pane_cp03_ParamLimits

0x8939,	// (0x00095c3e) cell_tport_appsw_pane_cp03

0x99bc,	// (0x00096cc1) phob2_contact_card_pane

0x99bc,	// (0x00096cc1) phob2_listscroll_pane

0xef03,	// (0x0009c208) phob2_list_pane

0xef0b,	// (0x0009c210) scroll_pane_cp034

0x97ba,	// (0x00096abf) phob2_cc_data_pane_ParamLimits

0x97ba,	// (0x00096abf) phob2_cc_data_pane

0x97db,	// (0x00096ae0) phob2_cc_listscroll_pane_ParamLimits

0x97db,	// (0x00096ae0) phob2_cc_listscroll_pane

0x97fd,	// (0x00096b02) list_double_large_graphic_phob2_pane_ParamLimits

0x97fd,	// (0x00096b02) list_double_large_graphic_phob2_pane

0x9811,	// (0x00096b16) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9811,	// (0x00096b16) list_double_large_graphic_phob2_pane_g1

0x0a23,	// (0x0008dd28) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0a23,	// (0x0008dd28) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0009d235) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0009d235) list_double_large_graphic_phob2_pane_g

0x0a2f,	// (0x0008dd34) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0a2f,	// (0x0008dd34) list_double_large_graphic_phob2_pane_t1

0x0a44,	// (0x0008dd49) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0a44,	// (0x0008dd49) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0009d23a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0009d23a) list_double_large_graphic_phob2_pane_t

0x99bc,	// (0x00096cc1) list_highlight_pane_cp024

0x9827,	// (0x00096b2c) phob2_cc_button_pane

0x982f,	// (0x00096b34) phob2_cc_data_pane_g1_ParamLimits

0x982f,	// (0x00096b34) phob2_cc_data_pane_g1

0x9845,	// (0x00096b4a) phob2_cc_data_pane_g2_ParamLimits

0x9845,	// (0x00096b4a) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0009d23f) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0009d23f) phob2_cc_data_pane_g

0x9855,	// (0x00096b5a) phob2_cc_data_pane_t1_ParamLimits

0x9855,	// (0x00096b5a) phob2_cc_data_pane_t1

0x986d,	// (0x00096b72) phob2_cc_data_pane_t2_ParamLimits

0x986d,	// (0x00096b72) phob2_cc_data_pane_t2

0x9887,	// (0x00096b8c) phob2_cc_data_pane_t3_ParamLimits

0x9887,	// (0x00096b8c) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0009d244) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0009d244) phob2_cc_data_pane_t

0xef13,	// (0x0009c218) phob2_cc_list_pane_ParamLimits

0xef13,	// (0x0009c218) phob2_cc_list_pane

0xd929,	// (0x0009ac2e) scroll_pane_cp035_ParamLimits

0xd929,	// (0x0009ac2e) scroll_pane_cp035

0x9a0d,	// (0x00096d12) bg_button_pane_cp033

0xef1f,	// (0x0009c224) phob2_cc_button_pane_g1

0xef2b,	// (0x0009c230) phob2_cc_button_pane_t1

0xef40,	// (0x0009c245) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0009d24b) phob2_cc_button_pane_t

0x98a1,	// (0x00096ba6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98a1,	// (0x00096ba6) list_double_large_graphic_phob2_cc_pane

0x98b5,	// (0x00096bba) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98b5,	// (0x00096bba) list_double_large_graphic_phob2_cc_pane_g1

0x0a56,	// (0x0008dd5b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0a56,	// (0x0008dd5b) list_double_large_graphic_phob2_cc_pane_g2

0x0a62,	// (0x0008dd67) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0a62,	// (0x0008dd67) list_double_large_graphic_phob2_cc_pane_g3

0x0a6e,	// (0x0008dd73) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0a6e,	// (0x0008dd73) list_double_large_graphic_phob2_cc_pane_g4

0x0a7a,	// (0x0008dd7f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0a7a,	// (0x0008dd7f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0009d250) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0009d250) list_double_large_graphic_phob2_cc_pane_g

0x0a86,	// (0x0008dd8b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0a86,	// (0x0008dd8b) list_double_large_graphic_phob2_cc_pane_t1

0x0aaf,	// (0x0008ddb4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0aaf,	// (0x0008ddb4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0009d25b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0009d25b) list_double_large_graphic_phob2_cc_pane_t

0xef52,	// (0x0009c257) list_highlight_pane_cp025_ParamLimits

0xef52,	// (0x0009c257) list_highlight_pane_cp025

0x9a0d,	// (0x00096d12) bg_button_pane_cp033_ParamLimits

0xef1f,	// (0x0009c224) phob2_cc_button_pane_g1_ParamLimits

0xef2b,	// (0x0009c230) phob2_cc_button_pane_t1_ParamLimits

0xef40,	// (0x0009c245) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0009d24b) phob2_cc_button_pane_t_ParamLimits

0x0d2c,	// (0x0008e031) popup_wgtman_window

0xd751,	// (0x0009aa56) scroll_pane_cp038

0x930f,	// (0x00096614) wgtman_btn_pane_cp_01_ParamLimits

0x930f,	// (0x00096614) wgtman_btn_pane_cp_01

0xef60,	// (0x0009c265) wgtman_content_pane

0xef69,	// (0x0009c26e) wgtman_heading_pane

0x99bc,	// (0x00096cc1) bg_heading_pane_cp02

0xef72,	// (0x0009c277) wgtman_heading_pane_g1

0xef7a,	// (0x0009c27f) wgtman_heading_pane_t1

0xef88,	// (0x0009c28d) scroll_pane_cp036

0xef90,	// (0x0009c295) wgtman_list_pane

0xef98,	// (0x0009c29d) wgtman_list_pane_t1_ParamLimits

0xef98,	// (0x0009c29d) wgtman_list_pane_t1

0xa95a,	// (0x00097c5f) cam4_grid_pane

0x0032,	// (0x0008d337) bg_button_pane_cp015_ParamLimits

0x741d,	// (0x00094722) bg_button_pane_cp016_ParamLimits

0x7430,	// (0x00094735) bg_button_pane_cp017_ParamLimits

0x007a,	// (0x0008d37f) popup_vitu2_query_window_g3_ParamLimits

0x007a,	// (0x0008d37f) popup_vitu2_query_window_g3

0x00f5,	// (0x0008d3fa) popup_vitu2_query_window_t6_ParamLimits

0x00f5,	// (0x0008d3fa) popup_vitu2_query_window_t6

0x0120,	// (0x0008d425) popup_vitu2_query_window_t7_ParamLimits

0x0120,	// (0x0008d425) popup_vitu2_query_window_t7

0xd5ce,	// (0x0009a8d3) cam4_grid_pane_g1

0xd5d7,	// (0x0009a8dc) cam4_grid_pane_g2

0xefb2,	// (0x0009c2b7) cam4_grid_pane_g3

0xefbb,	// (0x0009c2c0) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0009d260) cam4_grid_pane_g

0x1e18,	// (0x0008f11d) aid_placing_vt_slider_lsc_ParamLimits

0x2105,	// (0x0008f40a) vidtel_button_pane_ParamLimits

0x2105,	// (0x0008f40a) vidtel_button_pane

0xefc6,	// (0x0009c2cb) bg_button_pane_cp034

0x98c1,	// (0x00096bc6) vidtel_button_pane_g1

0xefd0,	// (0x0009c2d5) vidtel_button_pane_t1

0xd870,	// (0x0009ab75) aid_size_vtel_slider_touch

0xd929,	// (0x0009ac2e) scroll_pane_cp039

0xe14c,	// (0x0009b451) ncim_query_button_pane_cp01_ParamLimits

0xe16b,	// (0x0009b470) ncimui_query_pane_g1_ParamLimits

0x9a0d,	// (0x00096d12) input_focus_pane_cp012_ParamLimits

0xe190,	// (0x0009b495) ncim_query_entry_pane_t1_ParamLimits

0xd929,	// (0x0009ac2e) scroll_pane_cp039_ParamLimits

0x32c5,	// (0x000905ca) navi_pane_bcale_mc_g1

0x32cd,	// (0x000905d2) navi_pane_bcale_mc_t1

0xe6f3,	// (0x0009b9f8) main_sp_fs_email_pane_g1

0xe6ff,	// (0x0009ba04) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0009cff1) main_sp_fs_email_pane_g

0xe996,	// (0x0009bc9b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x0009bc9b) list_single_cale_mrui_row_pane_g3

0x09ad,	// (0x0008dcb2) list_single_recal_day_pane_g5_event_pane

0x8f17,	// (0x0009621c) list_single_recal_day_pane_g7

0xefde,	// (0x0009c2e3) list_recal_day_event_pane_cp01

0xefe7,	// (0x0009c2ec) list_recal_vselct_arw_lo_pane_cp01

0xefef,	// (0x0009c2f4) list_recal_vselct_arw_up_pane_cp01

0xeff7,	// (0x0009c2fc) list_recal_vselct_pane_cp01

0xd880,	// (0x0009ab85) list_recal_day_event_pane_cp01_g1

0xabca,	// (0x00097ecf) list_recal_day_event_pane_cp01_t1

0x8f1f,	// (0x00096224) list_single_recal_day_pane_t1_ParamLimits

0x8f31,	// (0x00096236) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0009d14e) list_single_recal_day_pane_t_ParamLimits

0xa089,	// (0x0009738e) bg_notes_pane_ParamLimits

0xa134,	// (0x00097439) list_notes_pane_ParamLimits

0x1079,	// (0x0008e37e) scroll_pane_cp06_ParamLimits

0xa170,	// (0x00097475) main_notes_pane_ParamLimits

0x99bc,	// (0x00096cc1) main_welc_pane

0x98c9,	// (0x00096bce) main_welc_body_pane_ParamLimits

0x98c9,	// (0x00096bce) main_welc_body_pane

0x98e8,	// (0x00096bed) main_welc_opti_pane_ParamLimits

0x98e8,	// (0x00096bed) main_welc_opti_pane

0x9931,	// (0x00096c36) main_welc_pane_t1_ParamLimits

0x9931,	// (0x00096c36) main_welc_pane_t1

0x9953,	// (0x00096c58) main_welc_body_row_pane_ParamLimits

0x9953,	// (0x00096c58) main_welc_body_row_pane

0x9967,	// (0x00096c6c) main_welc_opti_row_pane_ParamLimits

0x9967,	// (0x00096c6c) main_welc_opti_row_pane

0xf001,	// (0x0009c306) main_welc_opti_row_pane_g1

0xf009,	// (0x0009c30e) main_welc_opti_row_pane_t1

0xf018,	// (0x0009c31d) main_welc_body_row_pane_t1

0xece9,	// (0x0009bfee) popup_notif_wgt_heading_pane

0xed03,	// (0x0009c008) aid_size_list_notif_wgt_del_ParamLimits

0xed10,	// (0x0009c015) list_notif_wgt_row_pane_g1_ParamLimits

0xed1c,	// (0x0009c021) list_notif_wgt_row_pane_g2_ParamLimits

0xed28,	// (0x0009c02d) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0009d1b5) list_notif_wgt_row_pane_g_ParamLimits

0xed35,	// (0x0009c03a) list_notif_wgt_row_pane_t1_ParamLimits

0xed4a,	// (0x0009c04f) list_notif_wgt_row_pane_t2_ParamLimits

0xed5c,	// (0x0009c061) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0009d1bc) list_notif_wgt_row_pane_t_ParamLimits

0x9396,	// (0x0009669b) listrow_wgtman_pane_g1_ParamLimits

0x93a3,	// (0x000966a8) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0009d1e5) listrow_wgtman_pane_g_ParamLimits

0x09d3,	// (0x0008dcd8) listrow_wgtman_pane_t1_ParamLimits

0x09eb,	// (0x0008dcf0) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0009d1ea) listrow_wgtman_pane_t_ParamLimits

0x0a11,	// (0x0008dd16) wait_bar_pane_cp09_ParamLimits

0x99bc,	// (0x00096cc1) bg_popup_heading_pane_cp02

0xf027,	// (0x0009c32c) popup_notif_wgt_heading_pane_g1

0xf02f,	// (0x0009c334) popup_notif_wgt_heading_pane_t1

0x99bc,	// (0x00096cc1) main_vids_pane

0x99bc,	// (0x00096cc1) vids_listscroll_pane

0x9977,	// (0x00096c7c) scroll_pane_cp040

0x99bc,	// (0x00096cc1) vids_list_pane

0x9982,	// (0x00096c87) vids_list_double_pane_ParamLimits

0x9982,	// (0x00096c87) vids_list_double_pane

0x9993,	// (0x00096c98) vids_list_double_pane_g1

0x999c,	// (0x00096ca1) vids_list_double_pane_t1

0x99ac,	// (0x00096cb1) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0009d26e) vids_list_double_pane_t

0x9a0d,	// (0x00096d12) main_ncimui_pane_ParamLimits

0x7f87,	// (0x0009528c) main_ncimui_pane_g1_ParamLimits

0x7f93,	// (0x00095298) main_ncimui_pane_g2_ParamLimits

0x7f93,	// (0x00095298) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0009cef6) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0009cef6) main_ncimui_pane_g

0x9907,	// (0x00096c0c) main_welc_pane_g1_ParamLimits

0x9907,	// (0x00096c0c) main_welc_pane_g1

0x991c,	// (0x00096c21) main_welc_pane_g2_ParamLimits

0x991c,	// (0x00096c21) main_welc_pane_g2

0x0001,

0xff64,	// (0x0009d269) main_welc_pane_g_ParamLimits

0xff64,	// (0x0009d269) main_welc_pane_g

0xa089,	// (0x0009738e) listscroll_mce_pane_ParamLimits

0x33a5,	// (0x000906aa) wait_bar_pane_cp10

0xc7d2,	// (0x00099ad7) main_cale_day_pane_ParamLimits

0xc7d2,	// (0x00099ad7) main_cale_week_pane_ParamLimits

0xa089,	// (0x0009738e) main_messa_pane_ParamLimits

0x5a17,	// (0x00092d1c) main_clock2_btn_pane_ParamLimits

0x5a17,	// (0x00092d1c) main_clock2_btn_pane

0xcfe7,	// (0x0009a2ec) main_clock2_btn_pane_cp01_ParamLimits

0xcfe7,	// (0x0009a2ec) main_clock2_btn_pane_cp01

0xe967,	// (0x0009bc6c) list_cale_mrui_pane_ParamLimits

0xeda0,	// (0x0009c0a5) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0009d1c3) main_cf0_pane_g

0x9580,	// (0x00096885) area_left_week_number_pane_ParamLimits

0x958e,	// (0x00096893) area_top_day_name_pane_ParamLimits

0x95a1,	// (0x000968a6) frame_month_view_pane_ParamLimits

0xeec8,	// (0x0009c1cd) grid_month_view_pane_ParamLimits

0xeed6,	// (0x0009c1db) frm_month_g1_ParamLimits

0x9628,	// (0x0009692d) frm_month_g2_ParamLimits

0x963b,	// (0x00096940) frm_month_g3_ParamLimits

0x964e,	// (0x00096953) frm_month_g4_ParamLimits

0x9661,	// (0x00096966) frm_month_g5_ParamLimits

0x9674,	// (0x00096979) frm_month_g6_ParamLimits

0x9687,	// (0x0009698c) frm_month_g7_ParamLimits

0xeee3,	// (0x0009c1e8) frm_month_g8_ParamLimits

0x969c,	// (0x000969a1) frm_month_g9_ParamLimits

0x96ac,	// (0x000969b1) frm_month_g10_ParamLimits

0x96bc,	// (0x000969c1) frm_month_g11_ParamLimits

0x96cc,	// (0x000969d1) frm_month_g12_ParamLimits

0x96de,	// (0x000969e3) frm_month_g13_ParamLimits

0x96f2,	// (0x000969f7) frm_month_g14_ParamLimits

0x9706,	// (0x00096a0b) frm_month_g15_ParamLimits

0x971a,	// (0x00096a1f) frm_month_g16_ParamLimits

0xff0f,	// (0x0009d214) frm_month_g_ParamLimits

0xeef0,	// (0x0009c1f5) cell_top_day_name_pane_t1_ParamLimits

0x972e,	// (0x00096a33) cell_area_left_week_number_pane_g1_ParamLimits

0x973a,	// (0x00096a3f) cell_area_left_week_number_pane_t1_ParamLimits

0xce5f,	// (0x0009a164) cell_month_view_pane_g1_ParamLimits

0x974d,	// (0x00096a52) cell_month_view_pane_t1_ParamLimits

0xa081,	// (0x00097386) main_clock2_btn_pane_g1

0xf03d,	// (0x0009c342) main_clock2_btn_pane_t1

0x9a0d,	// (0x00096d12) listscroll_cmail_pane_ParamLimits

0xe6f3,	// (0x0009b9f8) main_sp_fs_email_pane_g1_ParamLimits

0xe6ff,	// (0x0009ba04) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0009cff1) main_sp_fs_email_pane_g_ParamLimits

0xea73,	// (0x0009bd78) list_recal_day_pane_ParamLimits

0xea84,	// (0x0009bd89) mian_recal_day_pane_t1

0x05e6,	// (0x0008d8eb) list_single_dyc_row_text_pane_t4_ParamLimits

0x05e6,	// (0x0008d8eb) list_single_dyc_row_text_pane_t4

0x062f,	// (0x0008d934) list_single_dyc_row_text_pane_t5_ParamLimits

0x062f,	// (0x0008d934) list_single_dyc_row_text_pane_t5

0x87bb,	// (0x00095ac0) list_single_dyc_row_text_pane_t6_ParamLimits

0x87bb,	// (0x00095ac0) list_single_dyc_row_text_pane_t6

0xae7c,	// (0x00098181) aid_mgn_list_cale_time_pane

0x9a0d,	// (0x00096d12) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large

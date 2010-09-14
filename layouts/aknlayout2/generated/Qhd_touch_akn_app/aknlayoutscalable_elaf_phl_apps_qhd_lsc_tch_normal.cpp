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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000d7a8 };

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
0x0e07,	// (0x0000e5af) Screen

0x0e13,	// (0x0000e5bb) application_window

0x0e4f,	// (0x0000e5f7) area_bottom_pane_ParamLimits

0x0e4f,	// (0x0000e5f7) area_bottom_pane

0x0e88,	// (0x0000e630) area_top_pane_ParamLimits

0x0e88,	// (0x0000e630) area_top_pane

0x9358,	// (0x00016b00) call_video_uplink_pane_ParamLimits

0x9358,	// (0x00016b00) call_video_uplink_pane

0x0f16,	// (0x0000e6be) main_pane_ParamLimits

0x0f16,	// (0x0000e6be) main_pane

0xbcba,	// (0x00019462) context_pane

0x3d50,	// (0x000114f8) navi_pane

0x3d82,	// (0x0001152a) popup_cale_events_window_ParamLimits

0x3d82,	// (0x0001152a) popup_cale_events_window

0xbccd,	// (0x00019475) popup_mup_playback_window

0x3d9a,	// (0x00011542) signal_pane

0x9b01,	// (0x000172a9) main_browser_pane

0x9d46,	// (0x000174ee) main_burst_pane

0x3ab0,	// (0x00011258) main_calc_pane

0xbc5a,	// (0x00019402) main_cale_day_pane

0x1426,	// (0x0000ebce) main_cale_month_pane

0xbc5a,	// (0x00019402) main_cale_week_pane

0x9d46,	// (0x000174ee) main_call_pane

0x9797,	// (0x00016f3f) main_call_poc_pane

0x9d46,	// (0x000174ee) main_camera_pane

0x9d46,	// (0x000174ee) main_chi_dic_pane

0xa5bb,	// (0x00017d63) main_clock_pane

0x9797,	// (0x00016f3f) main_fmradio_pane

0x9d46,	// (0x000174ee) main_graph_messa_pane

0x9797,	// (0x00016f3f) main_help_pane

0x9b01,	// (0x000172a9) main_im_pane

0x99f2,	// (0x0001719a) main_image_pane_ParamLimits

0x99f2,	// (0x0001719a) main_image_pane

0x9797,	// (0x00016f3f) main_location2_pane

0x9d46,	// (0x000174ee) main_location_pane

0x99f2,	// (0x0001719a) main_messa_pane

0x9797,	// (0x00016f3f) main_mp2_pane

0x9d46,	// (0x000174ee) main_mp_pane

0x9797,	// (0x00016f3f) main_msg_pane

0x9797,	// (0x00016f3f) main_mup_eq_pane

0x9797,	// (0x00016f3f) main_mup_pane

0x9b01,	// (0x000172a9) main_notes_pane

0x9797,	// (0x00016f3f) main_pec_pane

0x9797,	// (0x00016f3f) main_phob_pane

0x9797,	// (0x00016f3f) main_pinb_pane

0x9797,	// (0x00016f3f) main_postcard_pane

0x9797,	// (0x00016f3f) main_qdial_pane

0x9d46,	// (0x000174ee) main_skin_pane

0x9797,	// (0x00016f3f) main_smil2_pane

0x9d46,	// (0x000174ee) main_smil_pane

0x9d46,	// (0x000174ee) main_video_pane

0x9d46,	// (0x000174ee) main_video_tele_pane

0x99f2,	// (0x0001719a) main_viewer_pane_ParamLimits

0x99f2,	// (0x0001719a) main_viewer_pane

0x9d46,	// (0x000174ee) main_vorec_pane

0x3b04,	// (0x000112ac) popup_blid_sat_info_window_ParamLimits

0x3b04,	// (0x000112ac) popup_blid_sat_info_window

0x3b5c,	// (0x00011304) popup_dyc_status_message_window_ParamLimits

0x3b5c,	// (0x00011304) popup_dyc_status_message_window

0x3b76,	// (0x0001131e) popup_grid_large_graphic_window_ParamLimits

0x3b76,	// (0x0001131e) popup_grid_large_graphic_window

0x3c32,	// (0x000113da) popup_loc_request_window_ParamLimits

0x3c32,	// (0x000113da) popup_loc_request_window

0x3d28,	// (0x000114d0) popup_wml_address_window_ParamLimits

0x3d28,	// (0x000114d0) popup_wml_address_window

0x38ea,	// (0x00011092) call_muted_g1

0x355e,	// (0x00010d06) popup_call_audio_conf_window_ParamLimits

0x355e,	// (0x00010d06) popup_call_audio_conf_window

0x38fe,	// (0x000110a6) popup_call_audio_first_window_ParamLimits

0x38fe,	// (0x000110a6) popup_call_audio_first_window

0x3974,	// (0x0001111c) popup_call_audio_in_window_ParamLimits

0x3974,	// (0x0001111c) popup_call_audio_in_window

0x39b0,	// (0x00011158) popup_call_audio_out_window_ParamLimits

0x39b0,	// (0x00011158) popup_call_audio_out_window

0x39ea,	// (0x00011192) popup_call_audio_second_window_ParamLimits

0x39ea,	// (0x00011192) popup_call_audio_second_window

0x3a40,	// (0x000111e8) popup_call_audio_wait_window_ParamLimits

0x3a40,	// (0x000111e8) popup_call_audio_wait_window

0x3a75,	// (0x0001121d) popup_number_entry_window_ParamLimits

0x3a75,	// (0x0001121d) popup_number_entry_window

0x9384,	// (0x00016b2c) bg_popup_call_pane_cp05_ParamLimits

0x9384,	// (0x00016b2c) bg_popup_call_pane_cp05

0x93a4,	// (0x00016b4c) popup_number_entry_window_t1

0x93b7,	// (0x00016b5f) popup_number_entry_window_t2

0x93c9,	// (0x00016b71) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0001c813) popup_number_entry_window_t

0x93db,	// (0x00016b83) text_title_cp2

0x93ee,	// (0x00016b96) bg_popup_call_pane_cp_ParamLimits

0x93ee,	// (0x00016b96) bg_popup_call_pane_cp

0x93fc,	// (0x00016ba4) call_thumbnail_pane

0x9404,	// (0x00016bac) popup_call_audio_in_window_g1_ParamLimits

0x9404,	// (0x00016bac) popup_call_audio_in_window_g1

0x9410,	// (0x00016bb8) popup_call_audio_in_window_g2_ParamLimits

0x9410,	// (0x00016bb8) popup_call_audio_in_window_g2

0x941c,	// (0x00016bc4) popup_call_audio_in_window_g3_ParamLimits

0x941c,	// (0x00016bc4) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0001c81c) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0001c81c) popup_call_audio_in_window_g

0x9428,	// (0x00016bd0) popup_call_audio_in_window_t1_ParamLimits

0x9428,	// (0x00016bd0) popup_call_audio_in_window_t1

0x9444,	// (0x00016bec) popup_call_audio_in_window_t2_ParamLimits

0x9444,	// (0x00016bec) popup_call_audio_in_window_t2

0x9460,	// (0x00016c08) popup_call_audio_in_window_t3_ParamLimits

0x9460,	// (0x00016c08) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0001c823) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0001c823) popup_call_audio_in_window_t

0x93ee,	// (0x00016b96) bg_popup_call_pane_cp01_ParamLimits

0x93ee,	// (0x00016b96) bg_popup_call_pane_cp01

0x93fc,	// (0x00016ba4) call_thumbnail_pane_cp02

0x9473,	// (0x00016c1b) call_type_pane_cp022

0x947b,	// (0x00016c23) popup_call_audio_out_window_g1_ParamLimits

0x947b,	// (0x00016c23) popup_call_audio_out_window_g1

0x948d,	// (0x00016c35) popup_call_audio_out_window_g2_ParamLimits

0x948d,	// (0x00016c35) popup_call_audio_out_window_g2

0x9499,	// (0x00016c41) popup_call_audio_out_window_g3_ParamLimits

0x9499,	// (0x00016c41) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0001c82a) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0001c82a) popup_call_audio_out_window_g

0x94ab,	// (0x00016c53) popup_call_audio_out_window_t1_ParamLimits

0x94ab,	// (0x00016c53) popup_call_audio_out_window_t1

0x94c3,	// (0x00016c6b) popup_call_audio_out_window_t2_ParamLimits

0x94c3,	// (0x00016c6b) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0001c831) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0001c831) popup_call_audio_out_window_t

0x94d8,	// (0x00016c80) bg_popup_call_pane_ParamLimits

0x94d8,	// (0x00016c80) bg_popup_call_pane

0x10d2,	// (0x0000e87a) call_thumbnail_pane_cp_ParamLimits

0x10d2,	// (0x0000e87a) call_thumbnail_pane_cp

0x955c,	// (0x00016d04) call_type_pane_cp01_ParamLimits

0x955c,	// (0x00016d04) call_type_pane_cp01

0x95a0,	// (0x00016d48) popup_call_audio_first_window_g1_ParamLimits

0x95a0,	// (0x00016d48) popup_call_audio_first_window_g1

0x95ec,	// (0x00016d94) popup_call_audio_first_window_g2_ParamLimits

0x95ec,	// (0x00016d94) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0001c836) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0001c836) popup_call_audio_first_window_g

0x9630,	// (0x00016dd8) popup_call_audio_first_window_t1_ParamLimits

0x9630,	// (0x00016dd8) popup_call_audio_first_window_t1

0x96dc,	// (0x00016e84) popup_call_audio_first_window_t4_ParamLimits

0x96dc,	// (0x00016e84) popup_call_audio_first_window_t4

0x9768,	// (0x00016f10) popup_call_audio_first_window_t5_ParamLimits

0x9768,	// (0x00016f10) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0001c83b) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0001c83b) popup_call_audio_first_window_t

0x9797,	// (0x00016f3f) bg_popup_call_pane_cp02

0x97a1,	// (0x00016f49) call_type_pane_cp023

0x97a9,	// (0x00016f51) popup_call_audio_wait_window_g1

0x97b1,	// (0x00016f59) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0001c842) popup_call_audio_wait_window_g

0x97b9,	// (0x00016f61) popup_call_audio_wait_window_t3

0x97c7,	// (0x00016f6f) bg_popup_call_pane_cp03_ParamLimits

0x97c7,	// (0x00016f6f) bg_popup_call_pane_cp03

0x9827,	// (0x00016fcf) call_thumbnail_pane_cp011_ParamLimits

0x9827,	// (0x00016fcf) call_thumbnail_pane_cp011

0x9833,	// (0x00016fdb) call_type_pane_cp034_ParamLimits

0x9833,	// (0x00016fdb) call_type_pane_cp034

0x986f,	// (0x00017017) popup_call_audio_second_window_g1_ParamLimits

0x986f,	// (0x00017017) popup_call_audio_second_window_g1

0x98ab,	// (0x00017053) popup_call_audio_second_window_g2_ParamLimits

0x98ab,	// (0x00017053) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0001c847) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0001c847) popup_call_audio_second_window_g

0x98e7,	// (0x0001708f) popup_call_audio_second_window_t1_ParamLimits

0x98e7,	// (0x0001708f) popup_call_audio_second_window_t1

0x9968,	// (0x00017110) popup_call_audio_second_window_t2_ParamLimits

0x9968,	// (0x00017110) popup_call_audio_second_window_t2

0x999e,	// (0x00017146) popup_call_audio_second_window_t3_ParamLimits

0x999e,	// (0x00017146) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0001c84c) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0001c84c) popup_call_audio_second_window_t

0x9797,	// (0x00016f3f) bg_popup_call_pane_cp04

0x99d4,	// (0x0001717c) list_conf_pane

0x99dc,	// (0x00017184) popup_call_audio_conf_window_t1

0x99ea,	// (0x00017192) call_thumbnail_pane_g1

0x99f2,	// (0x0001719a) bg_pinb_pane_ParamLimits

0x99f2,	// (0x0001719a) bg_pinb_pane

0x9a00,	// (0x000171a8) find_pinb_pane

0x99f2,	// (0x0001719a) listscroll_pinb_pane_ParamLimits

0x99f2,	// (0x0001719a) listscroll_pinb_pane

0x9a0a,	// (0x000171b2) pinb_bg_pane_g1

0x9a0a,	// (0x000171b2) pinb_bg_pane_g2

0x9a0a,	// (0x000171b2) pinb_bg_pane_g3

0x9a0a,	// (0x000171b2) pinb_bg_pane_g4

0x9a0a,	// (0x000171b2) pinb_bg_pane_g5

0x9a0a,	// (0x000171b2) pinb_bg_pane_g6

0x9a0a,	// (0x000171b2) pinb_bg_pane_g7

0x9a0a,	// (0x000171b2) pinb_bg_pane_g8

0x9a0a,	// (0x000171b2) pinb_bg_pane_g9

0x9a0a,	// (0x000171b2) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0001c853) pinb_bg_pane_g

0x9307,	// (0x00016aaf) grid_pinb_pane

0x9307,	// (0x00016aaf) list_pinb_pane

0x9376,	// (0x00016b1e) scroll_pane_cp01_ParamLimits

0x9376,	// (0x00016b1e) scroll_pane_cp01

0x9a14,	// (0x000171bc) find_pinb_pane_g1_ParamLimits

0x9a14,	// (0x000171bc) find_pinb_pane_g1

0x9a2c,	// (0x000171d4) find_pinb_pane_t1

0x9a3e,	// (0x000171e6) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0001c86d) find_pinb_pane_t

0x9a53,	// (0x000171fb) input_focus_pane_cp01_ParamLimits

0x9a53,	// (0x000171fb) input_focus_pane_cp01

0x9a5f,	// (0x00017207) cell_pinb_pane_ParamLimits

0x9a5f,	// (0x00017207) cell_pinb_pane

0x9a6d,	// (0x00017215) cell_pinb_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) cell_pinb_pane_g1

0x9a7b,	// (0x00017223) cell_pinb_pane_g2_ParamLimits

0x9a7b,	// (0x00017223) cell_pinb_pane_g2

0x9a7b,	// (0x00017223) cell_pinb_pane_g3_ParamLimits

0x9a7b,	// (0x00017223) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0001c872) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0001c872) cell_pinb_pane_g

0x9797,	// (0x00016f3f) grid_highlight_pane_cp01

0x9a5f,	// (0x00017207) list_pinb_item_pane_ParamLimits

0x9a5f,	// (0x00017207) list_pinb_item_pane

0x9307,	// (0x00016aaf) list_highlight_pane_cp02

0x9a89,	// (0x00017231) list_pinb_item_pane_g1_ParamLimits

0x9a89,	// (0x00017231) list_pinb_item_pane_g1

0x9a7b,	// (0x00017223) list_pinb_item_pane_g2_ParamLimits

0x9a7b,	// (0x00017223) list_pinb_item_pane_g2

0x9a6d,	// (0x00017215) list_pinb_item_pane_g3_ParamLimits

0x9a6d,	// (0x00017215) list_pinb_item_pane_g3

0x9a7b,	// (0x00017223) list_pinb_item_pane_g4_ParamLimits

0x9a7b,	// (0x00017223) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0001c879) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0001c879) list_pinb_item_pane_g

0x9a97,	// (0x0001723f) list_pinb_item_pane_t1_ParamLimits

0x9a97,	// (0x0001723f) list_pinb_item_pane_t1

0x1114,	// (0x0000e8bc) calc_display_pane

0x1139,	// (0x0000e8e1) calc_paper_pane

0x115c,	// (0x0000e904) grid_calc_pane

0x9797,	// (0x00016f3f) bg_list_pane_cp01

0x118a,	// (0x0000e932) clock_g1

0x1192,	// (0x0000e93a) clock_g2

0x0001,

0xf0da,	// (0x0001c882) clock_g

0x119a,	// (0x0000e942) clock_t1_ParamLimits

0x119a,	// (0x0000e942) clock_t1

0x11af,	// (0x0000e957) clock_t2_ParamLimits

0x11af,	// (0x0000e957) clock_t2

0x11c1,	// (0x0000e969) clock_t3_ParamLimits

0x11c1,	// (0x0000e969) clock_t3

0x11d3,	// (0x0000e97b) clock_t4_ParamLimits

0x11d3,	// (0x0000e97b) clock_t4

0x11e5,	// (0x0000e98d) clock_t5_ParamLimits

0x11e5,	// (0x0000e98d) clock_t5

0x11fa,	// (0x0000e9a2) clock_t6_ParamLimits

0x11fa,	// (0x0000e9a2) clock_t6

0x120c,	// (0x0000e9b4) clock_t7_ParamLimits

0x120c,	// (0x0000e9b4) clock_t7

0x121e,	// (0x0000e9c6) clock_t8_ParamLimits

0x121e,	// (0x0000e9c6) clock_t8

0x1232,	// (0x0000e9da) clock_t9_ParamLimits

0x1232,	// (0x0000e9da) clock_t9

0x0008,

0xf0df,	// (0x0001c887) clock_t_ParamLimits

0xf0df,	// (0x0001c887) clock_t

0x9ab3,	// (0x0001725b) popup_clock_analogue_window_cp02

0x9ab3,	// (0x0001725b) popup_clock_digital_window_cp01

0x9797,	// (0x00016f3f) listscroll_help_pane

0x9797,	// (0x00016f3f) phob_pre_status_pane

0x9abb,	// (0x00017263) grid_qdial_pane

0x1246,	// (0x0000e9ee) listscroll_mce_pane

0x99f2,	// (0x0001719a) bg_notes_pane

0x9ac5,	// (0x0001726d) list_notes_pane

0x1260,	// (0x0000ea08) scroll_pane_cp06

0x9ad3,	// (0x0001727b) bg_calc_paper_pane

0x9ae7,	// (0x0001728f) list_calc_pane

0x9b01,	// (0x000172a9) bg_calc_display_pane

0x1274,	// (0x0000ea1c) calc_display_pane_t1

0x1289,	// (0x0000ea31) calc_display_pane_t2

0x9b0d,	// (0x000172b5) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0001c89a) calc_display_pane_t

0x129e,	// (0x0000ea46) cell_calc_pane_ParamLimits

0x129e,	// (0x0000ea46) cell_calc_pane

0x9b1f,	// (0x000172c7) bg_calc_paper_pane_g1

0x9b2b,	// (0x000172d3) bg_calc_paper_pane_g2

0x9b37,	// (0x000172df) bg_calc_paper_pane_g3

0x9b43,	// (0x000172eb) bg_calc_paper_pane_g4

0x9b4f,	// (0x000172f7) bg_calc_paper_pane_g5

0x12d3,	// (0x0000ea7b) bg_calc_paper_pane_g6

0x12e2,	// (0x0000ea8a) bg_calc_paper_pane_g7

0x12f1,	// (0x0000ea99) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0001c8a1) bg_calc_paper_pane_g

0x1304,	// (0x0000eaac) calc_bg_paper_pane_g9

0x1317,	// (0x0000eabf) list_calc_item_pane_ParamLimits

0x1317,	// (0x0000eabf) list_calc_item_pane

0x9b5b,	// (0x00017303) list_calc_item_pane_g1

0x9b68,	// (0x00017310) list_calc_item_pane_t1_ParamLimits

0x9b68,	// (0x00017310) list_calc_item_pane_t1

0x132f,	// (0x0000ead7) list_calc_item_pane_t2_ParamLimits

0x132f,	// (0x0000ead7) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0001c8b2) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0001c8b2) list_calc_item_pane_t

0x9a0a,	// (0x000171b2) cell_calc_pane_g1

0x9b7a,	// (0x00017322) grid_highlight_pane_cp02

0x9b9c,	// (0x00017344) bg_calc_display_pane_g1

0x1361,	// (0x0000eb09) bg_calc_display_pane_g2

0x136b,	// (0x0000eb13) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0001c8bc) bg_calc_display_pane_g

0x1374,	// (0x0000eb1c) cell_qdial_pane_ParamLimits

0x1374,	// (0x0000eb1c) cell_qdial_pane

0x1388,	// (0x0000eb30) cell_qdial_pane_g1_ParamLimits

0x1388,	// (0x0000eb30) cell_qdial_pane_g1

0x139e,	// (0x0000eb46) cell_qdial_pane_g2_ParamLimits

0x139e,	// (0x0000eb46) cell_qdial_pane_g2

0x9ba5,	// (0x0001734d) cell_qdial_pane_g3_ParamLimits

0x9ba5,	// (0x0001734d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0001c8c3) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0001c8c3) cell_qdial_pane_g

0x13c5,	// (0x0000eb6d) cell_qdial_pane_t1_ParamLimits

0x13c5,	// (0x0000eb6d) cell_qdial_pane_t1

0x13dd,	// (0x0000eb85) cell_qdial_pane_t2_ParamLimits

0x13dd,	// (0x0000eb85) cell_qdial_pane_t2

0x13f0,	// (0x0000eb98) cell_qdial_pane_t3_ParamLimits

0x13f0,	// (0x0000eb98) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0001c8cc) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0001c8cc) cell_qdial_pane_t

0x9797,	// (0x00016f3f) grid_highlight_pane_cp04

0x9bb1,	// (0x00017359) thumbnail_qdial_pane_ParamLimits

0x9bb1,	// (0x00017359) thumbnail_qdial_pane

0x9c0d,	// (0x000173b5) list_help_pane

0x9c16,	// (0x000173be) scroll_pane_cp02

0x9c1f,	// (0x000173c7) help_list_pane_t1_ParamLimits

0x9c1f,	// (0x000173c7) help_list_pane_t1

0x9c3d,	// (0x000173e5) bg_notes_pane_g2

0x9c45,	// (0x000173ed) bg_notes_pane_g3

0x9c4d,	// (0x000173f5) notes_bg_pane_g1

0x9c55,	// (0x000173fd) notes_bg_pane_g4

0x9c5d,	// (0x00017405) notes_bg_pane_g5

0x9c65,	// (0x0001740d) notes_bg_pane_g6

0x9c6d,	// (0x00017415) notes_bg_pane_g7

0x9c75,	// (0x0001741d) notes_bg_pane_g8

0x9c7d,	// (0x00017425) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0001c8ea) notes_bg_pane_g

0x1403,	// (0x0000ebab) list_notes_text_pane_ParamLimits

0x1403,	// (0x0000ebab) list_notes_text_pane

0x9c85,	// (0x0001742d) list_notes_text_pane_g1

0x1418,	// (0x0000ebc0) list_notes_text_pane_t1

0x1426,	// (0x0000ebce) listscroll_cale_week_pane

0x1452,	// (0x0000ebfa) bg_cale_heading_pane

0x9ca8,	// (0x00017450) bg_cale_pane_cp01

0x146a,	// (0x0000ec12) cale_week_corner_pane

0x1489,	// (0x0000ec31) cale_week_day_heading_pane

0x14a6,	// (0x0000ec4e) cale_week_scroll_pane_g1

0x14b9,	// (0x0000ec61) cale_week_scroll_pane_g2

0x14d1,	// (0x0000ec79) cale_week_scroll_pane_g3

0x14e9,	// (0x0000ec91) cale_week_scroll_pane_g4

0x1501,	// (0x0000eca9) cale_week_scroll_pane_g5

0x1521,	// (0x0000ecc9) cale_week_scroll_pane_g6

0x1541,	// (0x0000ece9) cale_week_scroll_pane_g7

0x1561,	// (0x0000ed09) cale_week_scroll_pane_g8

0x1585,	// (0x0000ed2d) cale_week_scroll_pane_g9

0x159d,	// (0x0000ed45) cale_week_scroll_pane_g10

0x15b5,	// (0x0000ed5d) cale_week_scroll_pane_g11

0x15cd,	// (0x0000ed75) cale_week_scroll_pane_g12

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g13

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g14

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0001c8f9) cale_week_scroll_pane_g

0x1621,	// (0x0000edc9) cale_week_time_pane

0x1645,	// (0x0000eded) grid_cale_week_pane

0x9cd7,	// (0x0001747f) scroll_pane_cp08

0x166b,	// (0x0000ee13) cell_cale_week_pane_ParamLimits

0x166b,	// (0x0000ee13) cell_cale_week_pane

0x16f9,	// (0x0000eea1) cale_week_day_heading_pane_t1

0x1723,	// (0x0000eecb) cale_week_day_heading_pane_t2

0x1752,	// (0x0000eefa) cale_week_day_heading_pane_t3

0x1781,	// (0x0000ef29) cale_week_day_heading_pane_t4

0x17b0,	// (0x0000ef58) cale_week_day_heading_pane_t5

0x17e7,	// (0x0000ef8f) cale_week_day_heading_pane_t6

0x181e,	// (0x0000efc6) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0001c91a) cale_week_day_heading_pane_t

0x9cf4,	// (0x0001749c) bg_cale_side_pane

0x1848,	// (0x0000eff0) cale_week_time_pane_t1

0x1862,	// (0x0000f00a) cale_week_time_pane_t2

0x187c,	// (0x0000f024) cale_week_time_pane_t3

0x1896,	// (0x0000f03e) cale_week_time_pane_t4

0x18b0,	// (0x0000f058) cale_week_time_pane_t5

0x18ca,	// (0x0000f072) cale_week_time_pane_t6

0x18e4,	// (0x0000f08c) cale_week_time_pane_t7

0x18fe,	// (0x0000f0a6) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0001c929) cale_week_time_pane_t

0x1918,	// (0x0000f0c0) cell_cale_week_pane_g2

0x1937,	// (0x0000f0df) cell_cale_week_pane_g3_ParamLimits

0x1937,	// (0x0000f0df) cell_cale_week_pane_g3

0x9d02,	// (0x000174aa) grid_highlight_pane_cp07

0x9d0a,	// (0x000174b2) listscroll_gms_pane

0x9d14,	// (0x000174bc) grid_gms_pane

0x9d1d,	// (0x000174c5) listscroll_gms_pane_g1

0x9d25,	// (0x000174cd) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0001c93a) listscroll_gms_pane_g

0x194f,	// (0x0000f0f7) scroll_pane_cp010

0x195a,	// (0x0000f102) cell_gms_pane_ParamLimits

0x195a,	// (0x0000f102) cell_gms_pane

0x196d,	// (0x0000f115) cell_gms_pane_g1

0x9d2d,	// (0x000174d5) cell_gms_pane_g2

0x9c85,	// (0x0001742d) cell_gms_pane_g3

0x9d35,	// (0x000174dd) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0001c93f) cell_gms_pane_g

0x9d3e,	// (0x000174e6) grid_highlight_pane_cp09

0x3872,	// (0x0001101a) phob_pre_status_pane_g1

0x387a,	// (0x00011022) phob_pre_status_pane_g2

0x3882,	// (0x0001102a) phob_pre_status_pane_g3

0x388a,	// (0x00011032) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x0001cd03) phob_pre_status_pane_g

0x389a,	// (0x00011042) phob_pre_status_pane_t1

0x38a8,	// (0x00011050) phob_pre_status_pane_t2

0x38b8,	// (0x00011060) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x0001cd0e) phob_pre_status_pane_t

0x9d46,	// (0x000174ee) bg_list_pane_cp05

0x197d,	// (0x0000f125) grid_vorec_pane

0x1985,	// (0x0000f12d) vorec_t1

0x1993,	// (0x0000f13b) vorec_t2

0x19a1,	// (0x0000f149) vorec_t3

0x19af,	// (0x0000f157) vorec_t4

0x8d91,	// (0x00016539) vorec_t5

0x8d9f,	// (0x00016547) vorec_t6

0x0004,

0xf1a0,	// (0x0001c948) vorec_t

0x8dad,	// (0x00016555) wait_bar_pane_cp01

0x19cb,	// (0x0000f173) cell_vorec_pane_ParamLimits

0x19cb,	// (0x0000f173) cell_vorec_pane

0x9d4e,	// (0x000174f6) cell_vorec_pane_g1

0x9797,	// (0x00016f3f) grid_highlight_pane_cp05

0x9376,	// (0x00016b1e) cams_zoom_pane

0x9376,	// (0x00016b1e) image_vga_pane

0x9a6d,	// (0x00017215) main_camera_pane_g1

0x9a6d,	// (0x00017215) main_camera_pane_g2

0x9a6d,	// (0x00017215) main_camera_pane_g3

0x9a6d,	// (0x00017215) main_camera_pane_g4

0x9a6d,	// (0x00017215) main_camera_pane_g5

0x9a6d,	// (0x00017215) main_camera_pane_g6

0x9a6d,	// (0x00017215) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0001c953) main_camera_pane_g

0x9d58,	// (0x00017500) main_camera_pane_t1

0x9d58,	// (0x00017500) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0001c964) main_camera_pane_t

0x19f2,	// (0x0000f19a) cams_zoom_pane_cp_ParamLimits

0x19f2,	// (0x0000f19a) cams_zoom_pane_cp

0x1a26,	// (0x0000f1ce) image_cif_pane_ParamLimits

0x1a26,	// (0x0000f1ce) image_cif_pane

0x9307,	// (0x00016aaf) image_subqcif_pane

0x1a38,	// (0x0000f1e0) main_video_pane_g1_ParamLimits

0x1a38,	// (0x0000f1e0) main_video_pane_g1

0x1a66,	// (0x0000f20e) main_video_pane_g2_ParamLimits

0x1a66,	// (0x0000f20e) main_video_pane_g2

0x1aa0,	// (0x0000f248) main_video_pane_g3_ParamLimits

0x1aa0,	// (0x0000f248) main_video_pane_g3

0x1aa0,	// (0x0000f248) main_video_pane_g4_ParamLimits

0x1aa0,	// (0x0000f248) main_video_pane_g4

0x1ad4,	// (0x0000f27c) main_video_pane_g5_ParamLimits

0x1ad4,	// (0x0000f27c) main_video_pane_g5

0x9d6c,	// (0x00017514) main_video_pane_g6_ParamLimits

0x9d6c,	// (0x00017514) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0001c969) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0001c969) main_video_pane_g

0x1af0,	// (0x0000f298) main_video_pane_t1_ParamLimits

0x1af0,	// (0x0000f298) main_video_pane_t1

0x9d86,	// (0x0001752e) cams_zoom_pane_g1

0x9d86,	// (0x0001752e) cams_zoom_pane_g2

0x9d86,	// (0x0001752e) cams_zoom_pane_g3

0x9d86,	// (0x0001752e) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0001c978) cams_zoom_pane_g

0x1b48,	// (0x0000f2f0) grid_cams_pane

0x1b62,	// (0x0000f30a) linegrid_cams_pane

0x1b76,	// (0x0000f31e) cell_cams_pane_ParamLimits

0x1b76,	// (0x0000f31e) cell_cams_pane

0x9d90,	// (0x00017538) cams_burst_image_pane

0x9d98,	// (0x00017540) cell_cams_pane_g1

0x9797,	// (0x00016f3f) grid_highlight_pane_cp03

0x9a0a,	// (0x000171b2) mp_bg_pane_g1

0x9307,	// (0x00016aaf) bg_list_pane_cp03

0x9307,	// (0x00016aaf) bg_mp_pane

0x9307,	// (0x00016aaf) grid_mp_pane

0x9d86,	// (0x0001752e) media_player_g1

0xa2dc,	// (0x00017a84) media_player_t1

0xa2dc,	// (0x00017a84) media_player_t2

0xa2dc,	// (0x00017a84) media_player_t3

0xa2dc,	// (0x00017a84) media_player_t4

0xa2dc,	// (0x00017a84) media_player_t5

0xa2dc,	// (0x00017a84) media_player_t6

0xa2dc,	// (0x00017a84) media_player_t7

0x0006,

0xf545,	// (0x0001cced) media_player_t

0x9307,	// (0x00016aaf) wait_bar_pane_cp02

0xf52a,	// (0x0001ccd2) main_usb_pane_t

0xa5bb,	// (0x00017d63) cell_mp_pane

0x9a0a,	// (0x000171b2) cell_mp_pane_g1

0x9797,	// (0x00016f3f) grid_highlight_pane_cp06

0x9da0,	// (0x00017548) grid_skin_colour_pane

0x9da8,	// (0x00017550) list_highlight_pane_cp03

0x1b96,	// (0x0000f33e) skin_g1

0x9db0,	// (0x00017558) skin_t1

0x9dbf,	// (0x00017567) skin_t2

0x0001,

0xf1fe,	// (0x0001c9a6) skin_t

0x1b9e,	// (0x0000f346) cell_skin_colour_pane_ParamLimits

0x1b9e,	// (0x0000f346) cell_skin_colour_pane

0x9dcd,	// (0x00017575) cell_skin_colour_pane_g1

0x1c17,	// (0x0000f3bf) call_video_g1_ParamLimits

0x1c17,	// (0x0000f3bf) call_video_g1

0x1c33,	// (0x0000f3db) call_video_g2_ParamLimits

0x1c33,	// (0x0000f3db) call_video_g2

0x0001,

0xf203,	// (0x0001c9ab) call_video_g_ParamLimits

0xf203,	// (0x0001c9ab) call_video_g

0x1c85,	// (0x0000f42d) call_video_uplink_pane_cp1_ParamLimits

0x1c85,	// (0x0000f42d) call_video_uplink_pane_cp1

0x9ddf,	// (0x00017587) call_video_uplink_pane_cp2

0x1d24,	// (0x0000f4cc) video_down_crop_pane_ParamLimits

0x1d24,	// (0x0000f4cc) video_down_crop_pane

0x1e1b,	// (0x0000f5c3) video_down_pane_ParamLimits

0x1e1b,	// (0x0000f5c3) video_down_pane

0x9de7,	// (0x0001758f) video_down_subqcif_pane_ParamLimits

0x9de7,	// (0x0001758f) video_down_subqcif_pane

0x9dff,	// (0x000175a7) video_down_subqcif_pane_cp_ParamLimits

0x9dff,	// (0x000175a7) video_down_subqcif_pane_cp

0x9e25,	// (0x000175cd) im_reading_pane_ParamLimits

0x9e25,	// (0x000175cd) im_reading_pane

0x1f2b,	// (0x0000f6d3) im_writing_pane_ParamLimits

0x1f2b,	// (0x0000f6d3) im_writing_pane

0x1f41,	// (0x0000f6e9) im_reading_pane_t1

0x9e3f,	// (0x000175e7) list_im_pane

0x9e50,	// (0x000175f8) scroll_pane_cp07

0x1f7a,	// (0x0000f722) im_writing_pane_t1_ParamLimits

0x1f7a,	// (0x0000f722) im_writing_pane_t1

0x9e69,	// (0x00017611) im_writing_pane_t2_ParamLimits

0x9e69,	// (0x00017611) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0001c9b5) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0001c9b5) im_writing_pane_t

0x9797,	// (0x00016f3f) input_focus_pane_cp04

0x9797,	// (0x00016f3f) input_focus_pane_cp05

0x1f8f,	// (0x0000f737) list_im_single_pane_ParamLimits

0x1f8f,	// (0x0000f737) list_im_single_pane

0x1fa3,	// (0x0000f74b) list_single_im_pane_t1

0x9d46,	// (0x000174ee) blid_accuracy_pane

0x9d46,	// (0x000174ee) blid_compass_pane

0xbc12,	// (0x000193ba) main_location_t1

0xbc12,	// (0x000193ba) main_location_t2

0xbc12,	// (0x000193ba) main_location_t3

0x0002,

0xf554,	// (0x0001ccfc) main_location_t

0x9797,	// (0x00016f3f) aid_levels_location

0x9a0a,	// (0x000171b2) blid_accuracy_pane_g1

0x9a0a,	// (0x000171b2) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0001ca04) blid_accuracy_pane_g

0x9eb1,	// (0x00017659) wml_content_pane

0x9eef,	// (0x00017697) wml_button_pane_ParamLimits

0x9eef,	// (0x00017697) wml_button_pane

0x1fb2,	// (0x0000f75a) wml_list_single_large_pane_ParamLimits

0x1fb2,	// (0x0000f75a) wml_list_single_large_pane

0x1fc7,	// (0x0000f76f) wml_list_single_medium_pane_ParamLimits

0x1fc7,	// (0x0000f76f) wml_list_single_medium_pane

0x1fdd,	// (0x0000f785) wml_list_single_small_pane_ParamLimits

0x1fdd,	// (0x0000f785) wml_list_single_small_pane

0x9f03,	// (0x000176ab) wml_selection_box_pane_ParamLimits

0x9f03,	// (0x000176ab) wml_selection_box_pane

0x9f16,	// (0x000176be) wml_list_single_pane_t1

0x9f25,	// (0x000176cd) wml_list_single_medium_pane_t1

0x9f34,	// (0x000176dc) wml_list_single_large_pane_t1

0x9f43,	// (0x000176eb) input_focus_pane_cp02_ParamLimits

0x9f43,	// (0x000176eb) input_focus_pane_cp02

0x9f56,	// (0x000176fe) wml_selection_box_pane_g1

0x9f5f,	// (0x00017707) wml_selection_box_pane_t1_ParamLimits

0x9f5f,	// (0x00017707) wml_selection_box_pane_t1

0x99f2,	// (0x0001719a) bg_wml_button_pane_ParamLimits

0x99f2,	// (0x0001719a) bg_wml_button_pane

0x9f77,	// (0x0001771f) wml_button_pane_g1

0x9f7f,	// (0x00017727) wml_button_pane_t1

0x9f77,	// (0x0001771f) wml_button_bg_pane_g1

0x9f8f,	// (0x00017737) wml_button_bg_pane_g2

0x9f97,	// (0x0001773f) wml_button_bg_pane_g3

0x9f9f,	// (0x00017747) wml_button_bg_pane_g4

0x9fa7,	// (0x0001774f) wml_button_bg_pane_g5

0x9faf,	// (0x00017757) wml_button_bg_pane_g6

0x9fb7,	// (0x0001775f) wml_button_bg_pane_g7

0x9fbf,	// (0x00017767) wml_button_bg_pane_g8

0x9fc7,	// (0x0001776f) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0001c9ba) wml_button_bg_pane_g

0x1ff5,	// (0x0000f79d) bg_list_pane_cp02

0x9fcf,	// (0x00017777) mce_header_pane_ParamLimits

0x9fcf,	// (0x00017777) mce_header_pane

0x9fe5,	// (0x0001778d) mce_icon_pane

0x9fe5,	// (0x0001778d) mce_image_pane

0x1ffd,	// (0x0000f7a5) mce_text_pane_ParamLimits

0x1ffd,	// (0x0000f7a5) mce_text_pane

0x2010,	// (0x0000f7b8) scroll_pane_cp03

0x9ee7,	// (0x0001768f) scroll_pane_cp04

0x9fee,	// (0x00017796) scroll_pane_cp05_ParamLimits

0x9fee,	// (0x00017796) scroll_pane_cp05

0x2018,	// (0x0000f7c0) mce_header_field_pane_ParamLimits

0x2018,	// (0x0000f7c0) mce_header_field_pane

0x202f,	// (0x0000f7d7) mce_header_field_pane_2_ParamLimits

0x202f,	// (0x0000f7d7) mce_header_field_pane_2

0x2045,	// (0x0000f7ed) mce_header_field_pane_3

0x204d,	// (0x0000f7f5) list_single_mce_message_pane_ParamLimits

0x204d,	// (0x0000f7f5) list_single_mce_message_pane

0x2059,	// (0x0000f801) list_single_mce_smart_pane_ParamLimits

0x2059,	// (0x0000f801) list_single_mce_smart_pane

0x9ffa,	// (0x000177a2) input_focus_pane_cp03

0xa003,	// (0x000177ab) list_header_data_pane

0x206d,	// (0x0000f815) mce_header_field_pane_t1

0x207b,	// (0x0000f823) list_single_mce_header_pane_ParamLimits

0x207b,	// (0x0000f823) list_single_mce_header_pane

0xa00b,	// (0x000177b3) list_single_mce_header_pane_t1

0xa01a,	// (0x000177c2) list_single_mce_message_pane_g1

0xa022,	// (0x000177ca) list_single_mce_message_pane_t1

0x20b5,	// (0x0000f85d) bg_cale_heading_pane_cp01_ParamLimits

0x20b5,	// (0x0000f85d) bg_cale_heading_pane_cp01

0xa030,	// (0x000177d8) bg_cale_pane_cp02_ParamLimits

0xa030,	// (0x000177d8) bg_cale_pane_cp02

0x20ef,	// (0x0000f897) cale_month_corner_pane

0x210e,	// (0x0000f8b6) cale_month_day_heading_pane_ParamLimits

0x210e,	// (0x0000f8b6) cale_month_day_heading_pane

0x2160,	// (0x0000f908) cale_month_pane_g1_ParamLimits

0x2160,	// (0x0000f908) cale_month_pane_g1

0x218f,	// (0x0000f937) cale_month_pane_g2_ParamLimits

0x218f,	// (0x0000f937) cale_month_pane_g2

0x21bf,	// (0x0000f967) cale_month_pane_g3_ParamLimits

0x21bf,	// (0x0000f967) cale_month_pane_g3

0x21fb,	// (0x0000f9a3) cale_month_pane_g4_ParamLimits

0x21fb,	// (0x0000f9a3) cale_month_pane_g4

0x2237,	// (0x0000f9df) cale_month_pane_g5_ParamLimits

0x2237,	// (0x0000f9df) cale_month_pane_g5

0x227f,	// (0x0000fa27) cale_month_pane_g6_ParamLimits

0x227f,	// (0x0000fa27) cale_month_pane_g6

0x22cb,	// (0x0000fa73) cale_month_pane_g7_ParamLimits

0x22cb,	// (0x0000fa73) cale_month_pane_g7

0x231f,	// (0x0000fac7) cale_month_pane_g8_ParamLimits

0x231f,	// (0x0000fac7) cale_month_pane_g8

0x2373,	// (0x0000fb1b) cale_month_pane_g9_ParamLimits

0x2373,	// (0x0000fb1b) cale_month_pane_g9

0x23c5,	// (0x0000fb6d) cale_month_pane_g10_ParamLimits

0x23c5,	// (0x0000fb6d) cale_month_pane_g10

0x2417,	// (0x0000fbbf) cale_month_pane_g11_ParamLimits

0x2417,	// (0x0000fbbf) cale_month_pane_g11

0x2469,	// (0x0000fc11) cale_month_pane_g12_ParamLimits

0x2469,	// (0x0000fc11) cale_month_pane_g12

0x24bb,	// (0x0000fc63) cale_month_pane_g13_ParamLimits

0x24bb,	// (0x0000fc63) cale_month_pane_g13

0x000c,

0xf225,	// (0x0001c9cd) cale_month_pane_g_ParamLimits

0xf225,	// (0x0001c9cd) cale_month_pane_g

0x250d,	// (0x0000fcb5) cale_month_week_pane

0x2531,	// (0x0000fcd9) grid_cale_month_pane_ParamLimits

0x2531,	// (0x0000fcd9) grid_cale_month_pane

0x257a,	// (0x0000fd22) cale_month_day_heading_pane_t1

0x2600,	// (0x0000fda8) cale_month_day_heading_pane_t2

0x2679,	// (0x0000fe21) cale_month_day_heading_pane_t3

0x26f2,	// (0x0000fe9a) cale_month_day_heading_pane_t4

0x2773,	// (0x0000ff1b) cale_month_day_heading_pane_t5

0x27fc,	// (0x0000ffa4) cale_month_day_heading_pane_t6

0x2885,	// (0x0001002d) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0001c9e8) cale_month_day_heading_pane_t

0x9cf4,	// (0x0001749c) bg_cale_side_pane_cp01

0x2916,	// (0x000100be) cale_month_week_pane_t1

0x292f,	// (0x000100d7) cale_month_week_pane_t2

0x2948,	// (0x000100f0) cale_month_week_pane_t3

0x2961,	// (0x00010109) cale_month_week_pane_t4

0x297a,	// (0x00010122) cale_month_week_pane_t5

0x2993,	// (0x0001013b) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0001c9f7) cale_month_week_pane_t

0x29ac,	// (0x00010154) cell_cale_month_pane_ParamLimits

0x29ac,	// (0x00010154) cell_cale_month_pane

0xa06f,	// (0x00017817) cell_cale_month_pane_g1

0x2ada,	// (0x00010282) cell_cale_month_pane_t1_ParamLimits

0x2ada,	// (0x00010282) cell_cale_month_pane_t1

0x9d02,	// (0x000174aa) grid_highlight_pane_cp08

0x9a0a,	// (0x000171b2) main_smil_g1

0x2b06,	// (0x000102ae) smil_status_pane

0xa07b,	// (0x00017823) smil_text_pane

0xbb2a,	// (0x000192d2) bg_popup_call3_rect_pane_g8

0xbb32,	// (0x000192da) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001cc90) bg_popup_call3_rect_pane_g

0xbd2f,	// (0x000194d7) smil_status_volume_pane_g1

0xa085,	// (0x0001782d) smil_status_pane_t1

0xbd62,	// (0x0001950a) volume_smil_pane

0xa09c,	// (0x00017844) list_smil_text_pane

0x2b19,	// (0x000102c1) scroll_pane_cp011

0x2b24,	// (0x000102cc) smil_text_list_pane_t1_ParamLimits

0x2b24,	// (0x000102cc) smil_text_list_pane_t1

0xa0a6,	// (0x0001784e) aid_volume_smil_ParamLimits

0xa0a6,	// (0x0001784e) aid_volume_smil

0x9a0a,	// (0x000171b2) smil_volume_pane_g1

0x9a0a,	// (0x000171b2) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0001ca04) smil_volume_pane_g

0x1426,	// (0x0000ebce) listscroll_cale_day_pane

0xa0c8,	// (0x00017870) bg_cale_pane

0xa0e0,	// (0x00017888) list_cale_pane

0xa103,	// (0x000178ab) scroll_pane_cp09

0xa114,	// (0x000178bc) cale_bg_pane_g1

0xa11c,	// (0x000178c4) cale_bg_pane_g2

0xa124,	// (0x000178cc) cale_bg_pane_g3

0xa12c,	// (0x000178d4) cale_bg_pane_g4

0xa134,	// (0x000178dc) cale_bg_pane_g5

0xa13c,	// (0x000178e4) cale_bg_pane_g6

0xa144,	// (0x000178ec) cale_bg_pane_g7

0xa14c,	// (0x000178f4) cale_bg_pane_g8

0xa154,	// (0x000178fc) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0001ca09) cale_bg_pane_g

0x2b60,	// (0x00010308) list_cale_time_pane_ParamLimits

0x2b60,	// (0x00010308) list_cale_time_pane

0xa164,	// (0x0001790c) list_cale_time_pane_g1_ParamLimits

0xa164,	// (0x0001790c) list_cale_time_pane_g1

0xa170,	// (0x00017918) list_cale_time_pane_g2_ParamLimits

0xa170,	// (0x00017918) list_cale_time_pane_g2

0x2b75,	// (0x0001031d) list_cale_time_pane_g3_ParamLimits

0x2b75,	// (0x0001031d) list_cale_time_pane_g3

0x2b83,	// (0x0001032b) list_cale_time_pane_g4_ParamLimits

0x2b83,	// (0x0001032b) list_cale_time_pane_g4

0x2b91,	// (0x00010339) list_cale_time_pane_g5_ParamLimits

0x2b91,	// (0x00010339) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0001ca1c) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0001ca1c) list_cale_time_pane_g

0xa18a,	// (0x00017932) list_cale_time_pane_t1_ParamLimits

0xa18a,	// (0x00017932) list_cale_time_pane_t1

0xa1b2,	// (0x0001795a) list_cale_time_pane_t2_ParamLimits

0xa1b2,	// (0x0001795a) list_cale_time_pane_t2

0x2df3,	// (0x0001059b) aid_blid_cardinal_pane

0x2e31,	// (0x000105d9) compass_pane_t4

0xa1da,	// (0x00017982) list_cale_time_pane_t4_ParamLimits

0xa1da,	// (0x00017982) list_cale_time_pane_t4

0x2e3f,	// (0x000105e7) compass_pane_t5

0x2e4d,	// (0x000105f5) compass_pane_t6

0x2e5b,	// (0x00010603) compass_pane_t7

0xa700,	// (0x00017ea8) navi_pane_cc_t1

0xa8ef,	// (0x00018097) aid_phob_thumbnail_center_pane

0x3222,	// (0x000109ca) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0001ca29) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0001ca29) list_cale_time_pane_t

0x93ee,	// (0x00016b96) bg_popup_window_pane_cp02_ParamLimits

0x93ee,	// (0x00016b96) bg_popup_window_pane_cp02

0xa202,	// (0x000179aa) heading_pane_cp01_ParamLimits

0xa202,	// (0x000179aa) heading_pane_cp01

0xa20e,	// (0x000179b6) loc_req_pane_ParamLimits

0xa20e,	// (0x000179b6) loc_req_pane

0xa21e,	// (0x000179c6) loc_type_pane_ParamLimits

0xa21e,	// (0x000179c6) loc_type_pane

0xa230,	// (0x000179d8) loc_type_pane_t1_ParamLimits

0xa230,	// (0x000179d8) loc_type_pane_t1

0xa242,	// (0x000179ea) loc_type_pane_t2_ParamLimits

0xa242,	// (0x000179ea) loc_type_pane_t2

0xa254,	// (0x000179fc) loc_type_pane_t3_ParamLimits

0xa254,	// (0x000179fc) loc_type_pane_t3

0x0002,

0xf288,	// (0x0001ca30) loc_type_pane_t_ParamLimits

0xf288,	// (0x0001ca30) loc_type_pane_t

0xa266,	// (0x00017a0e) list_loc_req_pane

0xa270,	// (0x00017a18) scroll_pane_cp012

0x2b9f,	// (0x00010347) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b9f,	// (0x00010347) list_single_loc_request_popup_menu_pane

0xa27b,	// (0x00017a23) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa27b,	// (0x00017a23) list_single_loc_request_popup_menu_pane_g1

0xa287,	// (0x00017a2f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa287,	// (0x00017a2f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0001ca37) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0001ca37) list_single_loc_request_popup_menu_pane_g

0xa293,	// (0x00017a3b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa293,	// (0x00017a3b) list_single_loc_request_popup_menu_pane_t1

0x99f2,	// (0x0001719a) bg_popup_window_pane_cp03_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_window_pane_cp03

0xa2a9,	// (0x00017a51) heading_loc_req_pane_ParamLimits

0xa2a9,	// (0x00017a51) heading_loc_req_pane

0x2bac,	// (0x00010354) popup_dyc_status_message_window_g1_ParamLimits

0x2bac,	// (0x00010354) popup_dyc_status_message_window_g1

0x2bc0,	// (0x00010368) popup_dyc_status_message_window_t1_ParamLimits

0x2bc0,	// (0x00010368) popup_dyc_status_message_window_t1

0x2bd5,	// (0x0001037d) popup_dyc_status_message_window_t2_ParamLimits

0x2bd5,	// (0x0001037d) popup_dyc_status_message_window_t2

0x2bea,	// (0x00010392) popup_dyc_status_message_window_t3_ParamLimits

0x2bea,	// (0x00010392) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0001ca3c) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0001ca3c) popup_dyc_status_message_window_t

0x9797,	// (0x00016f3f) bg_heading_pane_cp01

0xa2b5,	// (0x00017a5d) heading_loc_req_pane_g1

0xa2bd,	// (0x00017a65) heading_loc_req_pane_g2

0xa2c5,	// (0x00017a6d) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0001ca43) heading_loc_req_pane_g

0xa2cd,	// (0x00017a75) heading_loc_req_pane_t1

0xa2ec,	// (0x00017a94) bg_popup_sub_pane_cp01_ParamLimits

0xa2ec,	// (0x00017a94) bg_popup_sub_pane_cp01

0xa2fa,	// (0x00017aa2) popup_cale_events_window_g1_ParamLimits

0xa2fa,	// (0x00017aa2) popup_cale_events_window_g1

0xa31a,	// (0x00017ac2) popup_cale_events_window_g2_ParamLimits

0xa31a,	// (0x00017ac2) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0001ca65) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0001ca65) popup_cale_events_window_g

0xa33a,	// (0x00017ae2) popup_cale_events_window_t1_ParamLimits

0xa33a,	// (0x00017ae2) popup_cale_events_window_t1

0xa34c,	// (0x00017af4) popup_cale_events_window_t2_ParamLimits

0xa34c,	// (0x00017af4) popup_cale_events_window_t2

0xa38a,	// (0x00017b32) popup_cale_events_window_t3_ParamLimits

0xa38a,	// (0x00017b32) popup_cale_events_window_t3

0xa3c4,	// (0x00017b6c) popup_cale_events_window_t4_ParamLimits

0xa3c4,	// (0x00017b6c) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0001ca6a) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0001ca6a) popup_cale_events_window_t

0x2c12,	// (0x000103ba) call_type_pane

0x2c22,	// (0x000103ca) popup_call_status_window_g1

0x2c36,	// (0x000103de) popup_call_status_window_g2

0x2c4a,	// (0x000103f2) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0001ca73) popup_call_status_window_g

0xa3fa,	// (0x00017ba2) call_type_pane_g1

0xa403,	// (0x00017bab) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0001ca7a) call_type_pane_g

0x9797,	// (0x00016f3f) bg_popup_sub_pane_cp02

0xa40c,	// (0x00017bb4) listscroll_popup_wml_pane

0xa414,	// (0x00017bbc) list_wml_pane

0xa41e,	// (0x00017bc6) scroll_pane_cp013

0xa429,	// (0x00017bd1) list_single_graphic_popup_wml_pane_ParamLimits

0xa429,	// (0x00017bd1) list_single_graphic_popup_wml_pane

0x9a0a,	// (0x000171b2) list_single_graphic_popup_wml_pane_g1

0xa43d,	// (0x00017be5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0001ca7f) list_single_graphic_popup_wml_pane_g

0xa445,	// (0x00017bed) list_single_graphic_popup_wml_pane_t1

0xa45b,	// (0x00017c03) aid_call_pane

0x99ea,	// (0x00017192) popup_clock_analogue_window_g1

0x99ea,	// (0x00017192) popup_clock_analogue_window_g2

0xa463,	// (0x00017c0b) popup_clock_analogue_window_g3

0xa463,	// (0x00017c0b) popup_clock_analogue_window_g4

0x9a0a,	// (0x000171b2) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0001ca84) popup_clock_analogue_window_g

0xa46b,	// (0x00017c13) popup_clock_analogue_window_t1

0xa479,	// (0x00017c21) clock_digital_number_pane_ParamLimits

0xa479,	// (0x00017c21) clock_digital_number_pane

0xa485,	// (0x00017c2d) clock_digital_number_pane_cp02_ParamLimits

0xa485,	// (0x00017c2d) clock_digital_number_pane_cp02

0xa491,	// (0x00017c39) clock_digital_number_pane_cp03_ParamLimits

0xa491,	// (0x00017c39) clock_digital_number_pane_cp03

0xa49d,	// (0x00017c45) clock_digital_number_pane_cp04_ParamLimits

0xa49d,	// (0x00017c45) clock_digital_number_pane_cp04

0xa4ad,	// (0x00017c55) clock_digital_separator_pane_ParamLimits

0xa4ad,	// (0x00017c55) clock_digital_separator_pane

0xa4b9,	// (0x00017c61) popup_clock_digital_window_t1

0x9a0a,	// (0x000171b2) clock_digital_number_pane_g1

0x9a0a,	// (0x000171b2) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0001ca04) clock_digital_number_pane_g

0x9a0a,	// (0x000171b2) clock_digital_separator_pane_g1

0x9a0a,	// (0x000171b2) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0001ca04) clock_digital_separator_pane_g

0x9797,	// (0x00016f3f) bg_popup_window_pane_cp04

0xa4d6,	// (0x00017c7e) heading_pane_cp03

0x9d46,	// (0x000174ee) listscroll_popup_gms_pane

0x9797,	// (0x00016f3f) grid_large_graphic_popup_pane

0xa4df,	// (0x00017c87) listscroll_popup_gms_pane_g1

0xa4e8,	// (0x00017c90) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0001ca8f) listscroll_popup_gms_pane_g

0xa4f1,	// (0x00017c99) scroll_pane_cp014

0x9a5f,	// (0x00017207) cell_large_graphic_popup_pane_ParamLimits

0x9a5f,	// (0x00017207) cell_large_graphic_popup_pane

0x9a6d,	// (0x00017215) cell_large_graphic_popup_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) cell_large_graphic_popup_pane_g1

0xa4fa,	// (0x00017ca2) cell_large_graphic_popup_pane_g2_ParamLimits

0xa4fa,	// (0x00017ca2) cell_large_graphic_popup_pane_g2

0xa508,	// (0x00017cb0) cell_large_graphic_popup_pane_g3_ParamLimits

0xa508,	// (0x00017cb0) cell_large_graphic_popup_pane_g3

0xa516,	// (0x00017cbe) cell_large_graphic_popup_pane_g4_ParamLimits

0xa516,	// (0x00017cbe) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0001ca94) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0001ca94) cell_large_graphic_popup_pane_g

0x9797,	// (0x00016f3f) grid_highlight_pane_cp010

0x9a0a,	// (0x000171b2) bg_popup_call_pane_g1

0xa527,	// (0x00017ccf) list_single_graphic_popup_conf_pane_ParamLimits

0xa527,	// (0x00017ccf) list_single_graphic_popup_conf_pane

0xa53a,	// (0x00017ce2) list_highlight_pane_cp01

0xa543,	// (0x00017ceb) list_single_graphic_popup_conf_pane_g1

0xa54b,	// (0x00017cf3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0001ca9d) list_single_graphic_popup_conf_pane_g

0xa553,	// (0x00017cfb) list_single_graphic_popup_conf_pane_t1

0xa561,	// (0x00017d09) linegrid_cams_pane_g1

0x2c59,	// (0x00010401) linegrid_cams_pane_g2

0x9c85,	// (0x0001742d) linegrid_cams_pane_g3

0xa56a,	// (0x00017d12) linegrid_cams_pane_g4

0x2c62,	// (0x0001040a) linegrid_cams_pane_g5

0x2c6b,	// (0x00010413) linegrid_cams_pane_g6

0x9d35,	// (0x000174dd) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0001caa2) linegrid_cams_pane_g

0xa573,	// (0x00017d1b) popup_clock_analogue_window

0xa573,	// (0x00017d1b) popup_clock_digital_window

0x9797,	// (0x00016f3f) popup_phob_thumbnail_window

0x9a0a,	// (0x000171b2) call_video_uplink_pane_g1

0xa57c,	// (0x00017d24) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0001cab1) call_video_uplink_pane_g

0xa584,	// (0x00017d2c) video_uplink_pane

0xa58c,	// (0x00017d34) mce_image_pane_g1

0x2c76,	// (0x0001041e) mce_image_pane_g2

0x2c80,	// (0x00010428) mce_image_pane_g3

0x2c88,	// (0x00010430) mce_image_pane_g4

0x2c90,	// (0x00010438) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0001cab6) mce_image_pane_g

0xa596,	// (0x00017d3e) control_top_pane_stacon_cp01_ParamLimits

0xa596,	// (0x00017d3e) control_top_pane_stacon_cp01

0xa5aa,	// (0x00017d52) uni_indicator_pane_stacon_cp01_ParamLimits

0xa5aa,	// (0x00017d52) uni_indicator_pane_stacon_cp01

0xa5bb,	// (0x00017d63) bg_popup_sub_pane_cp03

0xa5c5,	// (0x00017d6d) chi_dic_find_pane

0x2c98,	// (0x00010440) listscroll_chi_dic_pane

0xa5cd,	// (0x00017d75) main_pane_chidic_g1

0xa5d5,	// (0x00017d7d) chi_dic_find_pane_t1

0xa5e3,	// (0x00017d8b) find_chidic_pane

0xa5ec,	// (0x00017d94) chi_dic_list_pane_ParamLimits

0xa5ec,	// (0x00017d94) chi_dic_list_pane

0xa5fd,	// (0x00017da5) scroll_pane_cp020

0xa605,	// (0x00017dad) find_chidic_pane_t1

0x9797,	// (0x00016f3f) input_focus_pane_cp06

0x2cac,	// (0x00010454) list_chi_dic_pane_ParamLimits

0x2cac,	// (0x00010454) list_chi_dic_pane

0x2cbe,	// (0x00010466) list_chi_dic_pane_t1_ParamLimits

0x2cbe,	// (0x00010466) list_chi_dic_pane_t1

0x9797,	// (0x00016f3f) list_highlight_pane_cp020

0xa614,	// (0x00017dbc) bg_cale_heading_pane_g1

0x2cd1,	// (0x00010479) bg_cale_heading_pane_g2

0x2cd9,	// (0x00010481) bg_cale_heading_pane_g3

0x2ce1,	// (0x00010489) bg_cale_heading_pane_g4

0x2ceb,	// (0x00010493) bg_cale_heading_pane_g5

0x2cf5,	// (0x0001049d) bg_cale_heading_pane_g6

0x2cfd,	// (0x000104a5) bg_cale_heading_pane_g7

0x2d05,	// (0x000104ad) bg_cale_heading_pane_g8

0x2d0f,	// (0x000104b7) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0001cac1) bg_cale_heading_pane_g

0xa614,	// (0x00017dbc) bg_cale_side_pane_g1

0x2d19,	// (0x000104c1) bg_cale_side_pane_g2

0x2d21,	// (0x000104c9) bg_cale_side_pane_g3

0x2d29,	// (0x000104d1) bg_cale_side_pane_g4

0x2d31,	// (0x000104d9) bg_cale_side_pane_g5

0x2d39,	// (0x000104e1) bg_cale_side_pane_g6

0x2d41,	// (0x000104e9) bg_cale_side_pane_g7

0x2d49,	// (0x000104f1) bg_cale_side_pane_g8

0x2d51,	// (0x000104f9) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0001cad4) bg_cale_side_pane_g

0x2d59,	// (0x00010501) popup_call_status_window_ParamLimits

0x2d59,	// (0x00010501) popup_call_status_window

0xa61c,	// (0x00017dc4) stacon_top_pane

0xa624,	// (0x00017dcc) status_pane_ParamLimits

0xa624,	// (0x00017dcc) status_pane

0xa639,	// (0x00017de1) status_small_pane

0xa641,	// (0x00017de9) control_pane

0x9797,	// (0x00016f3f) stacon_bottom_pane

0xa649,	// (0x00017df1) list_single_mce_smart_pane_t1_ParamLimits

0xa649,	// (0x00017df1) list_single_mce_smart_pane_t1

0xa65c,	// (0x00017e04) list_single_mce_smart_pane_t2_ParamLimits

0xa65c,	// (0x00017e04) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0001cae7) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0001cae7) list_single_mce_smart_pane_t

0x2da2,	// (0x0001054a) compass_pane

0x2dab,	// (0x00010553) main_location2_pane_t1

0x2dbd,	// (0x00010565) main_location2_pane_t2

0x2dcf,	// (0x00010577) main_location2_pane_t3

0x0003,

0xf344,	// (0x0001caec) main_location2_pane_t

0xa67b,	// (0x00017e23) compass_pane_g1_ParamLimits

0xa67b,	// (0x00017e23) compass_pane_g1

0x2e13,	// (0x000105bb) compass_pane_t1

0x2e22,	// (0x000105ca) compass_pane_t2

0x0005,

0xf34d,	// (0x0001caf5) compass_pane_t

0x2e69,	// (0x00010611) text_secondary_cp61

0xa6f7,	// (0x00017e9f) navi_pane_cams_g5

0xa773,	// (0x00017f1b) navi_pane_im_t1

0xa781,	// (0x00017f29) navi_pane_mp_g1_ParamLimits

0xa781,	// (0x00017f29) navi_pane_mp_g1

0xa795,	// (0x00017f3d) navi_pane_mp_g2_ParamLimits

0xa795,	// (0x00017f3d) navi_pane_mp_g2

0xa7a1,	// (0x00017f49) navi_pane_mp_g3_ParamLimits

0xa7a1,	// (0x00017f49) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0001cb09) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0001cb09) navi_pane_mp_g

0xa7ad,	// (0x00017f55) navi_pane_mp_t1

0xa7bb,	// (0x00017f63) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0001cb10) navi_pane_mp_t

0xa826,	// (0x00017fce) navi_pane_vt_g1

0xa7ad,	// (0x00017f55) navi_pane_vt_t1

0xa82e,	// (0x00017fd6) navi_slider_pane

0x9d46,	// (0x000174ee) zooming_pane

0xa83e,	// (0x00017fe6) navi_slider_pane_g1

0xa847,	// (0x00017fef) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0001cb17) navi_slider_pane_g

0xa874,	// (0x0001801c) aid_levels_zoom

0xa87c,	// (0x00018024) zooming_pane_g1

0xa884,	// (0x0001802c) zooming_pane_g2

0xa884,	// (0x0001802c) zooming_pane_g3

0x0002,

0xf37e,	// (0x0001cb26) zooming_pane_g

0xa88c,	// (0x00018034) level_10_zoom

0xa895,	// (0x0001803d) level_11_zoom

0xa89e,	// (0x00018046) level_1_zoom

0xa8a7,	// (0x0001804f) level_2_zoom

0xa8b0,	// (0x00018058) level_3_zoom

0xa8b9,	// (0x00018061) level_4_zoom

0xa8c2,	// (0x0001806a) level_5_zoom

0xa8cb,	// (0x00018073) level_6_zoom

0xa8d4,	// (0x0001807c) level_7_zoom

0xa8dd,	// (0x00018085) level_8_zoom

0xa8e6,	// (0x0001808e) level_9_zoom

0xa8f7,	// (0x0001809f) popup_phob_thumbnail_window_g1

0xa8ff,	// (0x000180a7) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0001cb2d) popup_phob_thumbnail_window_g

0x38c8,	// (0x00011070) level_1_location

0x38d0,	// (0x00011078) level_2_location

0x38d8,	// (0x00011080) level_3_location

0x38e0,	// (0x00011088) level_4_location

0x9d46,	// (0x000174ee) level_5_location

0x2eba,	// (0x00010662) mce_icon_pane_g1

0x2ec2,	// (0x0001066a) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0001cb32) mce_icon_pane_g

0xa907,	// (0x000180af) main_mup_pane_g1_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g1

0xa907,	// (0x000180af) main_mup_pane_g2_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g2

0xa907,	// (0x000180af) main_mup_pane_g3_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g3

0xa907,	// (0x000180af) main_mup_pane_g4_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g4

0xa907,	// (0x000180af) main_mup_pane_g5_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g5

0xa907,	// (0x000180af) main_mup_pane_g6_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g6

0xa907,	// (0x000180af) main_mup_pane_g7_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g7

0xa907,	// (0x000180af) main_mup_pane_g8_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g8

0xa907,	// (0x000180af) main_mup_pane_g9_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g9

0xa907,	// (0x000180af) main_mup_pane_g10_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g10

0xa907,	// (0x000180af) main_mup_pane_g11_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g11

0x9a6d,	// (0x00017215) main_mup_pane_g12_ParamLimits

0x9a6d,	// (0x00017215) main_mup_pane_g12

0xa907,	// (0x000180af) main_mup_pane_g13_ParamLimits

0xa907,	// (0x000180af) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0001cb37) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0001cb37) main_mup_pane_g

0xa915,	// (0x000180bd) main_mup_pane_t1_ParamLimits

0xa915,	// (0x000180bd) main_mup_pane_t1

0xa915,	// (0x000180bd) main_mup_pane_t2_ParamLimits

0xa915,	// (0x000180bd) main_mup_pane_t2

0xa915,	// (0x000180bd) main_mup_pane_t3_ParamLimits

0xa915,	// (0x000180bd) main_mup_pane_t3

0x9d58,	// (0x00017500) main_mup_pane_t4_ParamLimits

0x9d58,	// (0x00017500) main_mup_pane_t4

0x9d58,	// (0x00017500) main_mup_pane_t5_ParamLimits

0x9d58,	// (0x00017500) main_mup_pane_t5

0xa929,	// (0x000180d1) main_mup_pane_t6_ParamLimits

0xa929,	// (0x000180d1) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0001cb52) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0001cb52) main_mup_pane_t

0x9a5f,	// (0x00017207) mup_progress_pane_ParamLimits

0x9a5f,	// (0x00017207) mup_progress_pane

0xa93d,	// (0x000180e5) mup_visualizer_pane_ParamLimits

0xa93d,	// (0x000180e5) mup_visualizer_pane

0xa93d,	// (0x000180e5) mup_volume_pane_ParamLimits

0xa93d,	// (0x000180e5) mup_volume_pane

0x9a7b,	// (0x00017223) mup_visualizer_pane_g1_ParamLimits

0x9a7b,	// (0x00017223) mup_visualizer_pane_g1

0xa94b,	// (0x000180f3) mup_visualizer_pane_g2_ParamLimits

0xa94b,	// (0x000180f3) mup_visualizer_pane_g2

0x9a6d,	// (0x00017215) mup_visualizer_pane_g3_ParamLimits

0x9a6d,	// (0x00017215) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0001cb5f) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0001cb5f) mup_visualizer_pane_g

0x9d86,	// (0x0001752e) mup_volume_pane_g1

0x9d86,	// (0x0001752e) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) mup_volume_pane_g

0x9d86,	// (0x0001752e) mup_progress_pane_g1

0x9d86,	// (0x0001752e) mup_progress_pane_g2

0x9d86,	// (0x0001752e) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0001cb6b) mup_progress_pane_g

0x9797,	// (0x00016f3f) bg_popup_window_pane_cp05

0xa959,	// (0x00018101) heading_pane_cp02_ParamLimits

0xa959,	// (0x00018101) heading_pane_cp02

0xa973,	// (0x0001811b) list_popup_blid_pane

0xa97b,	// (0x00018123) list_blid_sat_info_pane_ParamLimits

0xa97b,	// (0x00018123) list_blid_sat_info_pane

0xa98e,	// (0x00018136) list_blid_sat_info_pane_g1

0xa996,	// (0x0001813e) list_blid_sat_info_pane_t1

0x2fc2,	// (0x0001076a) mup_equalizer_pane_ParamLimits

0x2fc2,	// (0x0001076a) mup_equalizer_pane

0x2fdb,	// (0x00010783) mup_equalizer_pane_cp1_ParamLimits

0x2fdb,	// (0x00010783) mup_equalizer_pane_cp1

0x2ff8,	// (0x000107a0) mup_equalizer_pane_cp2_ParamLimits

0x2ff8,	// (0x000107a0) mup_equalizer_pane_cp2

0x3015,	// (0x000107bd) mup_equalizer_pane_cp3_ParamLimits

0x3015,	// (0x000107bd) mup_equalizer_pane_cp3

0x3036,	// (0x000107de) mup_equalizer_pane_cp4_ParamLimits

0x3036,	// (0x000107de) mup_equalizer_pane_cp4

0x3057,	// (0x000107ff) mup_equalizer_pane_cp5

0x306b,	// (0x00010813) mup_equalizer_pane_cp6

0x307f,	// (0x00010827) mup_equalizer_pane_cp7

0xbbaa,	// (0x00019352) bg_popup_call_poc_act_pane_g9

0xbbb2,	// (0x0001935a) bg_popup_call_poc_act_pane_g10

0xbbba,	// (0x00019362) bg_popup_call_poc_act_pane_g11

0x000a,

0x99f2,	// (0x0001719a) mup_scale_pane

0x9a0a,	// (0x000171b2) mup_scale_pane_g1

0xa9a4,	// (0x0001814c) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0001cb87) mup_scale_pane_g

0xa9c8,	// (0x00018170) msg_data_pane

0xa9d0,	// (0x00018178) scroll_pane_cp017

0x30a5,	// (0x0001084d) bg_list_pane_cp04_ParamLimits

0x30a5,	// (0x0001084d) bg_list_pane_cp04

0xa9e0,	// (0x00018188) msg_data_pane_g1

0x30bd,	// (0x00010865) msg_data_pane_g2

0x30c7,	// (0x0001086f) msg_data_pane_g3

0x30cf,	// (0x00010877) msg_data_pane_g4

0x30d7,	// (0x0001087f) msg_data_pane_g5

0x30df,	// (0x00010887) msg_data_pane_g6

0x30e7,	// (0x0001088f) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0001cb96) msg_data_pane_g

0x30ef,	// (0x00010897) msg_text_pane_ParamLimits

0x30ef,	// (0x00010897) msg_text_pane

0x311a,	// (0x000108c2) qrid_highlight_pane_cp011_ParamLimits

0x311a,	// (0x000108c2) qrid_highlight_pane_cp011

0x9797,	// (0x00016f3f) msg_body_pane

0x9797,	// (0x00016f3f) msg_header_pane

0xa9f1,	// (0x00018199) input_focus_pane_cp07

0xaa06,	// (0x000181ae) msg_header_pane_t1_ParamLimits

0xaa06,	// (0x000181ae) msg_header_pane_t1

0xaa1c,	// (0x000181c4) msg_header_pane_t2_ParamLimits

0xaa1c,	// (0x000181c4) msg_header_pane_t2

0x0001,

0xf402,	// (0x0001cbaa) msg_header_pane_t_ParamLimits

0xf402,	// (0x0001cbaa) msg_header_pane_t

0xaa33,	// (0x000181db) msg_body_pane_g1

0xaa3b,	// (0x000181e3) msg_body_pane_t1_ParamLimits

0xaa3b,	// (0x000181e3) msg_body_pane_t1

0xaa6c,	// (0x00018214) msg_body_pane_t2_ParamLimits

0xaa6c,	// (0x00018214) msg_body_pane_t2

0xaa7e,	// (0x00018226) msg_body_pane_t3_ParamLimits

0xaa7e,	// (0x00018226) msg_body_pane_t3

0x0002,

0xf407,	// (0x0001cbaf) msg_body_pane_t_ParamLimits

0xf407,	// (0x0001cbaf) msg_body_pane_t

0x3178,	// (0x00010920) main_viewer_pane_g1_ParamLimits

0x3178,	// (0x00010920) main_viewer_pane_g1

0x3186,	// (0x0001092e) main_viewer_pane_g2_ParamLimits

0x3186,	// (0x0001092e) main_viewer_pane_g2

0x3194,	// (0x0001093c) main_viewer_pane_g3_ParamLimits

0x3194,	// (0x0001093c) main_viewer_pane_g3

0x31a3,	// (0x0001094b) main_viewer_pane_g4_ParamLimits

0x31a3,	// (0x0001094b) main_viewer_pane_g4

0xaaa8,	// (0x00018250) main_viewer_pane_g5_ParamLimits

0xaaa8,	// (0x00018250) main_viewer_pane_g5

0xaaa8,	// (0x00018250) main_viewer_pane_g7_ParamLimits

0xaaa8,	// (0x00018250) main_viewer_pane_g7

0xaaba,	// (0x00018262) main_viewer_pane_g8_ParamLimits

0xaaba,	// (0x00018262) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0001cbbf) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0001cbbf) main_viewer_pane_g

0xaad2,	// (0x0001827a) viewer_content_pane_ParamLimits

0xaad2,	// (0x0001827a) viewer_content_pane

0x31df,	// (0x00010987) main_postcard_pane_g1_ParamLimits

0x31df,	// (0x00010987) main_postcard_pane_g1

0x31f5,	// (0x0001099d) main_postcard_pane_g2_ParamLimits

0x31f5,	// (0x0001099d) main_postcard_pane_g2

0x320b,	// (0x000109b3) main_postcard_pane_g3_ParamLimits

0x320b,	// (0x000109b3) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0001cbd0) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0001cbd0) main_postcard_pane_g

0x3222,	// (0x000109ca) main_postcard_pane_g4

0xbd42,	// (0x000194ea) smil_status_volume_pane_g2

0x3265,	// (0x00010a0d) postcard_pane_ParamLimits

0x3265,	// (0x00010a0d) postcard_pane

0xaae0,	// (0x00018288) postcard_pane_g1_ParamLimits

0xaae0,	// (0x00018288) postcard_pane_g1

0x32a7,	// (0x00010a4f) postcard_pane_g2_ParamLimits

0x32a7,	// (0x00010a4f) postcard_pane_g2

0x32b3,	// (0x00010a5b) postcard_pane_g3_ParamLimits

0x32b3,	// (0x00010a5b) postcard_pane_g3

0xaaee,	// (0x00018296) postcard_pane_g4_ParamLimits

0xaaee,	// (0x00018296) postcard_pane_g4

0x32bf,	// (0x00010a67) postcard_pane_g5_ParamLimits

0x32bf,	// (0x00010a67) postcard_pane_g5

0x32d4,	// (0x00010a7c) postcard_pane_g6_ParamLimits

0x32d4,	// (0x00010a7c) postcard_pane_g6

0xaae0,	// (0x00018288) postcard_pane_g7_ParamLimits

0xaae0,	// (0x00018288) postcard_pane_g7

0x0006,

0xf435,	// (0x0001cbdd) postcard_pane_g_ParamLimits

0xf435,	// (0x0001cbdd) postcard_pane_g

0x32e8,	// (0x00010a90) main_mp2_pane_g1_ParamLimits

0x32e8,	// (0x00010a90) main_mp2_pane_g1

0x32f4,	// (0x00010a9c) main_mp2_pane_g2_ParamLimits

0x32f4,	// (0x00010a9c) main_mp2_pane_g2

0x3300,	// (0x00010aa8) main_mp2_pane_g3_ParamLimits

0x3300,	// (0x00010aa8) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0001cbec) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0001cbec) main_mp2_pane_g

0x330c,	// (0x00010ab4) main_mp2_pane_t1_ParamLimits

0x330c,	// (0x00010ab4) main_mp2_pane_t1

0x3321,	// (0x00010ac9) main_mp2_pane_t2_ParamLimits

0x3321,	// (0x00010ac9) main_mp2_pane_t2

0x3333,	// (0x00010adb) main_mp2_pane_t3_ParamLimits

0x3333,	// (0x00010adb) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0001cbf3) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0001cbf3) main_mp2_pane_t

0xaafc,	// (0x000182a4) pec_content_pane_ParamLimits

0xaafc,	// (0x000182a4) pec_content_pane

0x9ee7,	// (0x0001768f) scroll_pane_cp015

0xab0e,	// (0x000182b6) pec_attribute_pane_ParamLimits

0xab0e,	// (0x000182b6) pec_attribute_pane

0x3345,	// (0x00010aed) pec_content_pane_g1_ParamLimits

0x3345,	// (0x00010aed) pec_content_pane_g1

0xab1e,	// (0x000182c6) pec_content_pane_t1_ParamLimits

0xab1e,	// (0x000182c6) pec_content_pane_t1

0xab30,	// (0x000182d8) pec_content_pane_t2_ParamLimits

0xab30,	// (0x000182d8) pec_content_pane_t2

0x0001,

0xf452,	// (0x0001cbfa) pec_content_pane_t_ParamLimits

0xf452,	// (0x0001cbfa) pec_content_pane_t

0x3351,	// (0x00010af9) list_single_graphic_pane_cp01_ParamLimits

0x3351,	// (0x00010af9) list_single_graphic_pane_cp01

0x99f2,	// (0x0001719a) bg_popup_sub_pane_cp04

0xab42,	// (0x000182ea) popup_mup_playback_window_g1

0xab4e,	// (0x000182f6) popup_mup_playback_window_t1

0xab63,	// (0x0001830b) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0001cbff) popup_mup_playback_window_t

0xab9a,	// (0x00018342) main_image_pane_g1_ParamLimits

0xab9a,	// (0x00018342) main_image_pane_g1

0xabdd,	// (0x00018385) scroll_pane_cp018_ParamLimits

0xabdd,	// (0x00018385) scroll_pane_cp018

0xabf5,	// (0x0001839d) scroll_pane_cp016_ParamLimits

0xabf5,	// (0x0001839d) scroll_pane_cp016

0x341e,	// (0x00010bc6) smil2_image_pane_ParamLimits

0x341e,	// (0x00010bc6) smil2_image_pane

0x344e,	// (0x00010bf6) smil2_root_pane_ParamLimits

0x344e,	// (0x00010bf6) smil2_root_pane

0x3486,	// (0x00010c2e) smil2_text_pane_ParamLimits

0x3486,	// (0x00010c2e) smil2_text_pane

0x9797,	// (0x00016f3f) bg_list_pane_cp06

0xac31,	// (0x000183d9) grid_radio_pane

0x9797,	// (0x00016f3f) bg_popup_window_pane_cp06

0xac39,	// (0x000183e1) main_fmradio_pane_t1

0xbbc2,	// (0x0001936a) heading_pane_cp04

0xac47,	// (0x000183ef) main_fmradio_pane_t2

0xbbca,	// (0x00019372) popup_cale_lunar_info_window_g1

0xac55,	// (0x000183fd) main_fmradio_pane_t3

0xbbd2,	// (0x0001937a) popup_cale_lunar_info_window_g2

0xac63,	// (0x0001840b) main_fmradio_pane_t4

0x0001,

0xac71,	// (0x00018419) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x0001ccdf) popup_cale_lunar_info_window_g

0xf46c,	// (0x0001cc14) main_fmradio_pane_t

0xac7f,	// (0x00018427) wait_bar_pane_cp03

0xac87,	// (0x0001842f) cell_fmradio_pane_ParamLimits

0xac87,	// (0x0001842f) cell_fmradio_pane

0xaae0,	// (0x00018288) cell_fmradio_pane_g1_ParamLimits

0xaae0,	// (0x00018288) cell_fmradio_pane_g1

0x9797,	// (0x00016f3f) grid_highlight_pane_cp011

0xac9a,	// (0x00018442) poc_content_pane_ParamLimits

0xac9a,	// (0x00018442) poc_content_pane

0xacac,	// (0x00018454) scroll_pane_cp019

0x3506,	// (0x00010cae) popup_call_poc_act_window_ParamLimits

0x3506,	// (0x00010cae) popup_call_poc_act_window

0x352a,	// (0x00010cd2) popup_call_poc_inact_window_ParamLimits

0x352a,	// (0x00010cd2) popup_call_poc_inact_window

0xf50e,	// (0x0001ccb6) bg_popup_call_poc_act_pane_g

0xbb3a,	// (0x000192e2) bg_popup_call_poc_inact_pane_g1

0xbb42,	// (0x000192ea) bg_popup_call_poc_inact_pane_g2

0xacb4,	// (0x0001845c) popup_call_poc_act_window_g2

0xbb4a,	// (0x000192f2) bg_popup_call_poc_inact_pane_g3

0xbb52,	// (0x000192fa) bg_popup_call_poc_inact_pane_g4

0xbb5a,	// (0x00019302) bg_popup_call_poc_inact_pane_g5

0xacbc,	// (0x00018464) popup_call_poc_act_window_t1_ParamLimits

0xacbc,	// (0x00018464) popup_call_poc_act_window_t1

0xace4,	// (0x0001848c) popup_call_poc_act_window_t2_ParamLimits

0xace4,	// (0x0001848c) popup_call_poc_act_window_t2

0xad0c,	// (0x000184b4) popup_call_poc_act_window_t3_ParamLimits

0xad0c,	// (0x000184b4) popup_call_poc_act_window_t3

0xad34,	// (0x000184dc) popup_call_poc_act_window_t4_ParamLimits

0xad34,	// (0x000184dc) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0001cc1f) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0001cc1f) popup_call_poc_act_window_t

0xbb62,	// (0x0001930a) bg_popup_call_poc_inact_pane_g6

0xbb6a,	// (0x00019312) bg_popup_call_poc_inact_pane_g7

0xbb72,	// (0x0001931a) bg_popup_call_poc_inact_pane_g8

0xad46,	// (0x000184ee) popup_call_poc_inact_window_g2

0xbb7a,	// (0x00019322) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x0001cca3) bg_popup_call_poc_inact_pane_g

0xad4e,	// (0x000184f6) popup_call_poc_inact_window_t1_ParamLimits

0xad4e,	// (0x000184f6) popup_call_poc_inact_window_t1

0xad63,	// (0x0001850b) popup_call_poc_inact_window_t2_ParamLimits

0xad63,	// (0x0001850b) popup_call_poc_inact_window_t2

0xad78,	// (0x00018520) popup_call_poc_inact_window_t3_ParamLimits

0xad78,	// (0x00018520) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0001cc28) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0001cc28) popup_call_poc_inact_window_t

0xbcba,	// (0x00019462) context_pane_ParamLimits

0x3d9a,	// (0x00011542) signal_pane_ParamLimits

0x9d46,	// (0x000174ee) main_call2_pane

0xbc93,	// (0x0001943b) popup_phob_thumbnail2_window_ParamLimits

0xbc93,	// (0x0001943b) popup_phob_thumbnail2_window

0xaa90,	// (0x00018238) aid_hotspot_pointer_arrow_pane

0xaa98,	// (0x00018240) aid_hotspot_pointer_hand_pane

0x3892,	// (0x0001103a) phob_pre_status_pane_g5

0x9376,	// (0x00016b1e) cams_zoom_pane_ParamLimits

0x9376,	// (0x00016b1e) image_vga_pane_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g2_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g3_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g4_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g5_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g6_ParamLimits

0x9a6d,	// (0x00017215) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0001c953) main_camera_pane_g_ParamLimits

0x9d58,	// (0x00017500) main_camera_pane_t1_ParamLimits

0x9d58,	// (0x00017500) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0001c964) main_camera_pane_t_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_preview_window_pane_cp01_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_preview_window_pane_cp01

0xad8d,	// (0x00018535) popup_phob_thumbnail2_window_g1_ParamLimits

0xad8d,	// (0x00018535) popup_phob_thumbnail2_window_g1

0x9797,	// (0x00016f3f) call2_cli_visual_pane

0x355e,	// (0x00010d06) popup_call2_audio_conf_window_ParamLimits

0x355e,	// (0x00010d06) popup_call2_audio_conf_window

0x357e,	// (0x00010d26) popup_call2_audio_first_window_ParamLimits

0x357e,	// (0x00010d26) popup_call2_audio_first_window

0x3614,	// (0x00010dbc) popup_call2_audio_in_window_ParamLimits

0x3614,	// (0x00010dbc) popup_call2_audio_in_window

0x365c,	// (0x00010e04) popup_call2_audio_out_window_ParamLimits

0x365c,	// (0x00010e04) popup_call2_audio_out_window

0x36c6,	// (0x00010e6e) popup_call2_audio_second_window_ParamLimits

0x36c6,	// (0x00010e6e) popup_call2_audio_second_window

0x372c,	// (0x00010ed4) popup_call2_audio_wait_window_ParamLimits

0x372c,	// (0x00010ed4) popup_call2_audio_wait_window

0x9797,	// (0x00016f3f) bg_popup_call2_act_pane_cp03

0x99d4,	// (0x0001717c) list_conf_pane_cp

0xad99,	// (0x00018541) popup_call2_audio_conf_window_t1

0xa527,	// (0x00017ccf) list_single_graphic_popup_conf2_pane_ParamLimits

0xa527,	// (0x00017ccf) list_single_graphic_popup_conf2_pane

0xa53a,	// (0x00017ce2) list_highlight_pane_cp04

0xada7,	// (0x0001854f) list_single_graphic_popup_conf2_pane_g1

0xa54b,	// (0x00017cf3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0001cc2f) list_single_graphic_popup_conf2_pane_g

0xadb1,	// (0x00018559) list_single_graphic_popup_conf2_pane_t1

0xadbf,	// (0x00018567) bg_popup_call2_act_pane_cp01_ParamLimits

0xadbf,	// (0x00018567) bg_popup_call2_act_pane_cp01

0xae49,	// (0x000185f1) call_type_pane_cp05_ParamLimits

0xae49,	// (0x000185f1) call_type_pane_cp05

0xae9d,	// (0x00018645) popup_call2_audio_second_window_g1_ParamLimits

0xae9d,	// (0x00018645) popup_call2_audio_second_window_g1

0xaef1,	// (0x00018699) popup_call2_audio_second_window_g2_ParamLimits

0xaef1,	// (0x00018699) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0001cc34) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0001cc34) popup_call2_audio_second_window_g

0xaf56,	// (0x000186fe) popup_call2_audio_second_window_t1_ParamLimits

0xaf56,	// (0x000186fe) popup_call2_audio_second_window_t1

0xb011,	// (0x000187b9) popup_call2_audio_second_window_t2_ParamLimits

0xb011,	// (0x000187b9) popup_call2_audio_second_window_t2

0xb064,	// (0x0001880c) popup_call2_audio_second_window_t3_ParamLimits

0xb064,	// (0x0001880c) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0001cc3b) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0001cc3b) popup_call2_audio_second_window_t

0x9797,	// (0x00016f3f) bg_popup_call2_in_pane_cp02

0x97a1,	// (0x00016f49) call_type_pane_cp04

0x3766,	// (0x00010f0e) popup_call2_audio_wait_window_g1

0x376e,	// (0x00010f16) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0001cc44) popup_call2_audio_wait_window_g

0x97b9,	// (0x00016f61) popup_call2_audio_wait_window_t3

0xb157,	// (0x000188ff) bg_popup_call2_act_pane_ParamLimits

0xb157,	// (0x000188ff) bg_popup_call2_act_pane

0xb217,	// (0x000189bf) call_type_pane_cp03_ParamLimits

0xb217,	// (0x000189bf) call_type_pane_cp03

0xb27b,	// (0x00018a23) popup_call2_audio_first_window_g1_ParamLimits

0xb27b,	// (0x00018a23) popup_call2_audio_first_window_g1

0xb2eb,	// (0x00018a93) popup_call2_audio_first_window_g2_ParamLimits

0xb2eb,	// (0x00018a93) popup_call2_audio_first_window_g2

0xb34f,	// (0x00018af7) popup_call2_audio_first_window_g3_ParamLimits

0xb34f,	// (0x00018af7) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0001cc49) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0001cc49) popup_call2_audio_first_window_g

0xb3d7,	// (0x00018b7f) popup_call2_audio_first_window_t1_ParamLimits

0xb3d7,	// (0x00018b7f) popup_call2_audio_first_window_t1

0xb4da,	// (0x00018c82) popup_call2_audio_first_window_t4_ParamLimits

0xb4da,	// (0x00018c82) popup_call2_audio_first_window_t4

0xb5bd,	// (0x00018d65) popup_call2_audio_first_window_t5_ParamLimits

0xb5bd,	// (0x00018d65) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0001cc54) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0001cc54) popup_call2_audio_first_window_t

0x99ea,	// (0x00017192) bg_popup_call2_act_pane_g1

0xbbda,	// (0x00019382) popup_cale_lunar_info_window_t1

0xbbe8,	// (0x00019390) popup_cale_lunar_info_window_t2

0xbbf6,	// (0x0001939e) popup_cale_lunar_info_window_t3

0x9797,	// (0x00016f3f) bg_popup_call2_bubble_pane

0xb6be,	// (0x00018e66) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6be,	// (0x00018e66) bg_popup_call2_in_pane_cp01

0x9473,	// (0x00016c1b) call_type_pane_cp02

0x3776,	// (0x00010f1e) popup_call2_audio_out_window_g1_ParamLimits

0x3776,	// (0x00010f1e) popup_call2_audio_out_window_g1

0xb706,	// (0x00018eae) popup_call2_audio_out_window_g2_ParamLimits

0xb706,	// (0x00018eae) popup_call2_audio_out_window_g2

0x37a2,	// (0x00010f4a) popup_call2_audio_out_window_g3_ParamLimits

0x37a2,	// (0x00010f4a) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0001cc5d) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0001cc5d) popup_call2_audio_out_window_g

0xb73d,	// (0x00018ee5) popup_call2_audio_out_window_t1_ParamLimits

0xb73d,	// (0x00018ee5) popup_call2_audio_out_window_t1

0xb79c,	// (0x00018f44) popup_call2_audio_out_window_t2_ParamLimits

0xb79c,	// (0x00018f44) popup_call2_audio_out_window_t2

0xb7f0,	// (0x00018f98) popup_call2_audio_out_window_t3_ParamLimits

0xb7f0,	// (0x00018f98) popup_call2_audio_out_window_t3

0xb806,	// (0x00018fae) popup_call2_audio_out_window_t4_ParamLimits

0xb806,	// (0x00018fae) popup_call2_audio_out_window_t4

0xb81c,	// (0x00018fc4) popup_call2_audio_out_window_t5_ParamLimits

0xb81c,	// (0x00018fc4) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0001cc66) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0001cc66) popup_call2_audio_out_window_t

0xb880,	// (0x00019028) bg_popup_call2_in_pane_ParamLimits

0xb880,	// (0x00019028) bg_popup_call2_in_pane

0xb8dc,	// (0x00019084) popup_call2_audio_in_window_g1_ParamLimits

0xb8dc,	// (0x00019084) popup_call2_audio_in_window_g1

0xb914,	// (0x000190bc) popup_call2_audio_in_window_g2_ParamLimits

0xb914,	// (0x000190bc) popup_call2_audio_in_window_g2

0xb94c,	// (0x000190f4) popup_call2_audio_in_window_g3_ParamLimits

0xb94c,	// (0x000190f4) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0001cc73) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0001cc73) popup_call2_audio_in_window_g

0xb9a4,	// (0x0001914c) popup_call2_audio_in_window_t1_ParamLimits

0xb9a4,	// (0x0001914c) popup_call2_audio_in_window_t1

0xba24,	// (0x000191cc) popup_call2_audio_in_window_t2_ParamLimits

0xba24,	// (0x000191cc) popup_call2_audio_in_window_t2

0xbaa4,	// (0x0001924c) popup_call2_audio_in_window_t3_ParamLimits

0xbaa4,	// (0x0001924c) popup_call2_audio_in_window_t3

0xbabe,	// (0x00019266) popup_call2_audio_in_window_t4_ParamLimits

0xbabe,	// (0x00019266) popup_call2_audio_in_window_t4

0xbad0,	// (0x00019278) popup_call2_audio_in_window_t5_ParamLimits

0xbad0,	// (0x00019278) popup_call2_audio_in_window_t5

0xbae5,	// (0x0001928d) popup_call2_audio_in_window_t6_ParamLimits

0xbae5,	// (0x0001928d) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0001cc7c) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0001cc7c) popup_call2_audio_in_window_t

0x99ea,	// (0x00017192) bg_popup_call2_in_pane_g1

0xbc04,	// (0x000193ac) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x0001cce4) popup_cale_lunar_info_window_t

0x99f2,	// (0x0001719a) bg_popup_call2_rect_pane_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_call2_rect_pane

0x9797,	// (0x00016f3f) call2_cli_visual_graphic_pane

0x9797,	// (0x00016f3f) call2_cli_visual_text_pane

0xbd55,	// (0x000194fd) smil_status_volume_pane_g3

0x0002,

0x9a0a,	// (0x000171b2) call2_cli_visual_graphic_pane_g1

0x9a0a,	// (0x000171b2) call2_cli_visual_graphic_pane_g2

0x9a0a,	// (0x000171b2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0001cc89) call2_cli_visual_graphic_pane_g

0xbafa,	// (0x000192a2) bg_popup_call2_rect_pane_g1

0x9c05,	// (0x000173ad) bg_popup_call2_rect_pane_g2

0xbb02,	// (0x000192aa) bg_popup_call2_rect_pane_g3

0xbb0a,	// (0x000192b2) bg_popup_call2_rect_pane_g4

0xbb12,	// (0x000192ba) bg_popup_call2_rect_pane_g5

0xbb1a,	// (0x000192c2) bg_popup_call2_rect_pane_g6

0xbb22,	// (0x000192ca) bg_popup_call2_rect_pane_g7

0xbb2a,	// (0x000192d2) bg_popup_call2_rect_pane_g8

0xbb32,	// (0x000192da) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001cc90) bg_popup_call2_rect_pane_g

0xbb3a,	// (0x000192e2) bg_popup_call2_bubble_pane_g1

0xbb42,	// (0x000192ea) bg_popup_call2_bubble_pane_g2

0xbb4a,	// (0x000192f2) bg_popup_call2_bubble_pane_g3

0xbb52,	// (0x000192fa) bg_popup_call2_bubble_pane_g4

0xbb5a,	// (0x00019302) bg_popup_call2_bubble_pane_g5

0xbb62,	// (0x0001930a) bg_popup_call2_bubble_pane_g6

0xbb6a,	// (0x00019312) bg_popup_call2_bubble_pane_g7

0xbb72,	// (0x0001931a) bg_popup_call2_bubble_pane_g8

0xbb7a,	// (0x00019322) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0001cca3) bg_popup_call2_bubble_pane_g

0x1438,	// (0x0000ebe0) aid_cale_week_size_cell_pane

0x19de,	// (0x0000f186) aid_cams_cif_uncrop_pane_ParamLimits

0x19de,	// (0x0000f186) aid_cams_cif_uncrop_pane

0x1b34,	// (0x0000f2dc) aid_cams_size_cell_ParamLimits

0x1b34,	// (0x0000f2dc) aid_cams_size_cell

0x1b48,	// (0x0000f2f0) grid_cams_pane_ParamLimits

0x1b62,	// (0x0000f30a) linegrid_cams_pane_ParamLimits

0x1c49,	// (0x0000f3f1) call_video_pane_t1

0x1c67,	// (0x0000f40f) call_video_pane_t2

0x0001,

0xf208,	// (0x0001c9b0) call_video_pane_t

0x208f,	// (0x0000f837) aid_cale_month_size_cell_pane_ParamLimits

0x208f,	// (0x0000f837) aid_cale_month_size_cell_pane

0xf580,	// (0x0001cd28) smil_status_volume_pane_g

0xbd62,	// (0x0001950a) volume_smil_pane_ParamLimits

0x9319,	// (0x00016ac1) aid_popup2_width_pane

0x13af,	// (0x0000eb57) cell_qdial_pane_g4_ParamLimits

0x13af,	// (0x0000eb57) cell_qdial_pane_g4

0x2df3,	// (0x0001059b) aid_blid_cardinal_pane_ParamLimits

0x2dff,	// (0x000105a7) aid_blid_destination_pane_ParamLimits

0x2dff,	// (0x000105a7) aid_blid_destination_pane

0x99f2,	// (0x0001719a) bg_popup_call_poc_act_pane_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_call_poc_act_pane

0x99f2,	// (0x0001719a) bg_popup_call_poc_inact_pane_ParamLimits

0x99f2,	// (0x0001719a) bg_popup_call_poc_inact_pane

0xbb82,	// (0x0001932a) bg_popup_call_poc_act_pane_g1

0xbb8a,	// (0x00019332) bg_popup_call_poc_act_pane_g2

0xbb92,	// (0x0001933a) bg_popup_call_poc_act_pane_g3

0xbb52,	// (0x000192fa) bg_popup_call_poc_act_pane_g4

0xbb5a,	// (0x00019302) bg_popup_call_poc_act_pane_g5

0xbb9a,	// (0x00019342) bg_popup_call_poc_act_pane_g6

0xbb6a,	// (0x00019312) bg_popup_call_poc_act_pane_g7

0xbba2,	// (0x0001934a) bg_popup_call_poc_act_pane_g8

0x9797,	// (0x00016f3f) main_usb_pane

0xbc6e,	// (0x00019416) popup_cale_lunar_info_window

0x1f41,	// (0x0000f6e9) im_reading_pane_t1_ParamLimits

0x9e3f,	// (0x000175e7) list_im_pane_ParamLimits

0x9e50,	// (0x000175f8) scroll_pane_cp07_ParamLimits

0x9797,	// (0x00016f3f) grid_highlight_pane_cp012

0x99f2,	// (0x0001719a) mup_scale_pane_ParamLimits

0xaae0,	// (0x00018288) main_usb_pane_g1_ParamLimits

0xaae0,	// (0x00018288) main_usb_pane_g1

0x37f0,	// (0x00010f98) main_usb_pane_g2_ParamLimits

0x37f0,	// (0x00010f98) main_usb_pane_g2

0x0001,

0xf525,	// (0x0001cccd) main_usb_pane_g_ParamLimits

0xf525,	// (0x0001cccd) main_usb_pane_g

0x3806,	// (0x00010fae) main_usb_pane_t1_ParamLimits

0x3806,	// (0x00010fae) main_usb_pane_t1

0x3818,	// (0x00010fc0) main_usb_pane_t2_ParamLimits

0x3818,	// (0x00010fc0) main_usb_pane_t2

0x382a,	// (0x00010fd2) main_usb_pane_t3_ParamLimits

0x382a,	// (0x00010fd2) main_usb_pane_t3

0x383c,	// (0x00010fe4) main_usb_pane_t4_ParamLimits

0x383c,	// (0x00010fe4) main_usb_pane_t4

0x384e,	// (0x00010ff6) main_usb_pane_t5_ParamLimits

0x384e,	// (0x00010ff6) main_usb_pane_t5

0x3860,	// (0x00011008) main_usb_pane_t6_ParamLimits

0x3860,	// (0x00011008) main_usb_pane_t6

0x0005,

0xf52a,	// (0x0001ccd2) main_usb_pane_t_ParamLimits

0x2da2,	// (0x0001054a) aid_text_placing

0x2dab,	// (0x00010553) main_location2_pane_t1_ParamLimits

0x2dbd,	// (0x00010565) main_location2_pane_t2_ParamLimits

0x2dcf,	// (0x00010577) main_location2_pane_t3_ParamLimits

0x2de1,	// (0x00010589) main_location2_pane_t4_ParamLimits

0x2de1,	// (0x00010589) main_location2_pane_t4

0xf344,	// (0x0001caec) main_location2_pane_t_ParamLimits

0x9a20,	// (0x000171c8) find_pinb_pane_g2_ParamLimits

0x9a20,	// (0x000171c8) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0001c868) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0001c868) find_pinb_pane_g

0x9a2c,	// (0x000171d4) find_pinb_pane_t1_ParamLimits

0x9a3e,	// (0x000171e6) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0001c86d) find_pinb_pane_t_ParamLimits

0x9797,	// (0x00016f3f) main_call3_pane

0x257a,	// (0x0000fd22) cale_month_day_heading_pane_t1_ParamLimits

0x2600,	// (0x0000fda8) cale_month_day_heading_pane_t2_ParamLimits

0x2679,	// (0x0000fe21) cale_month_day_heading_pane_t3_ParamLimits

0x26f2,	// (0x0000fe9a) cale_month_day_heading_pane_t4_ParamLimits

0x2773,	// (0x0000ff1b) cale_month_day_heading_pane_t5_ParamLimits

0x27fc,	// (0x0000ffa4) cale_month_day_heading_pane_t6_ParamLimits

0x2885,	// (0x0001002d) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0001c9e8) cale_month_day_heading_pane_t_ParamLimits

0xa093,	// (0x0001783b) smil_status_volume_pane

0x3283,	// (0x00010a2b) postcard_address_pane_ParamLimits

0x3283,	// (0x00010a2b) postcard_address_pane

0x3295,	// (0x00010a3d) postcard_message_pane_ParamLimits

0x3295,	// (0x00010a3d) postcard_message_pane

0x37ce,	// (0x00010f76) call2_cli_visual_pane_t1_ParamLimits

0x37ce,	// (0x00010f76) call2_cli_visual_pane_t1

0xbd8f,	// (0x00019537) postcard_message_pane_t1_ParamLimits

0xbd8f,	// (0x00019537) postcard_message_pane_t1

0xbd77,	// (0x0001951f) postcard_address_pane_t1_ParamLimits

0xbd77,	// (0x0001951f) postcard_address_pane_t1

0x3f4c,	// (0x000116f4) popup_call3_audio_in_window_ParamLimits

0x3f4c,	// (0x000116f4) popup_call3_audio_in_window

0x3dd7,	// (0x0001157f) bg_popup_call3_in_pane_ParamLimits

0x3dd7,	// (0x0001157f) bg_popup_call3_in_pane

0x3e4d,	// (0x000115f5) popup_call3_audio_in_window_g1_ParamLimits

0x3e4d,	// (0x000115f5) popup_call3_audio_in_window_g1

0x3e6d,	// (0x00011615) popup_call3_audio_in_window_g2_ParamLimits

0x3e6d,	// (0x00011615) popup_call3_audio_in_window_g2

0x3e8d,	// (0x00011635) popup_call3_audio_in_window_g3_ParamLimits

0x3e8d,	// (0x00011635) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x0001cd2f) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x0001cd2f) popup_call3_audio_in_window_g

0x3ebe,	// (0x00011666) popup_call3_audio_in_window_t1_ParamLimits

0x3ebe,	// (0x00011666) popup_call3_audio_in_window_t1

0x3efc,	// (0x000116a4) popup_call3_audio_in_window_t2_ParamLimits

0x3efc,	// (0x000116a4) popup_call3_audio_in_window_t2

0x3f3a,	// (0x000116e2) popup_call3_audio_in_window_t3_ParamLimits

0x3f3a,	// (0x000116e2) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x0001cd38) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x0001cd38) popup_call3_audio_in_window_t

0x9d46,	// (0x000174ee) bg_popup_call3_rect_pane

0xbafa,	// (0x000192a2) bg_popup_call3_rect_pane_g1

0x9c05,	// (0x000173ad) bg_popup_call3_rect_pane_g2

0xbb02,	// (0x000192aa) bg_popup_call3_rect_pane_g3

0xbb0a,	// (0x000192b2) bg_popup_call3_rect_pane_g4

0xbb12,	// (0x000192ba) bg_popup_call3_rect_pane_g5

0xbb1a,	// (0x000192c2) bg_popup_call3_rect_pane_g6

0xbb22,	// (0x000192ca) bg_popup_call3_rect_pane_g7

0x9307,	// (0x00016aaf) mup_visualizer_osc_pane

0x9307,	// (0x00016aaf) mup_visualizer_spec_pane

0x3e07,	// (0x000115af) call3_video_qcif_pane_ParamLimits

0x3e07,	// (0x000115af) call3_video_qcif_pane

0x3e1a,	// (0x000115c2) call3_video_qcif_uncrop_pane_ParamLimits

0x3e1a,	// (0x000115c2) call3_video_qcif_uncrop_pane

0x3e28,	// (0x000115d0) call3_video_subqcif_pane_ParamLimits

0x3e28,	// (0x000115d0) call3_video_subqcif_pane

0x3e3c,	// (0x000115e4) call3_video_subqcif_uncrop_pane_ParamLimits

0x3e3c,	// (0x000115e4) call3_video_subqcif_uncrop_pane

0x3ead,	// (0x00011655) popup_call3_audio_in_window_g4_ParamLimits

0x3ead,	// (0x00011655) popup_call3_audio_in_window_g4

0x9307,	// (0x00016aaf) mup_spec_half_pane

0x9307,	// (0x00016aaf) mup_spec_half_pane_cp

0x9307,	// (0x00016aaf) mup_osc_middle_pane

0x9d86,	// (0x0001752e) mup_visualizer_osc_pane_g1

0xbd08,	// (0x000194b0) mup_spec_bar_pane_ParamLimits

0xbd08,	// (0x000194b0) mup_spec_bar_pane

0x9d86,	// (0x0001752e) mup_spec_bar_pane_g1

0x9d86,	// (0x0001752e) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) mup_spec_bar_pane_g

0x1438,	// (0x0000ebe0) aid_cale_week_size_cell_pane_ParamLimits

0x1452,	// (0x0000ebfa) bg_cale_heading_pane_ParamLimits

0x9ca8,	// (0x00017450) bg_cale_pane_cp01_ParamLimits

0x146a,	// (0x0000ec12) cale_week_corner_pane_ParamLimits

0x1489,	// (0x0000ec31) cale_week_day_heading_pane_ParamLimits

0x14a6,	// (0x0000ec4e) cale_week_scroll_pane_g1_ParamLimits

0x14b9,	// (0x0000ec61) cale_week_scroll_pane_g2_ParamLimits

0x14d1,	// (0x0000ec79) cale_week_scroll_pane_g3_ParamLimits

0x14e9,	// (0x0000ec91) cale_week_scroll_pane_g4_ParamLimits

0x1501,	// (0x0000eca9) cale_week_scroll_pane_g5_ParamLimits

0x1521,	// (0x0000ecc9) cale_week_scroll_pane_g6_ParamLimits

0x1541,	// (0x0000ece9) cale_week_scroll_pane_g7_ParamLimits

0x1561,	// (0x0000ed09) cale_week_scroll_pane_g8_ParamLimits

0x1585,	// (0x0000ed2d) cale_week_scroll_pane_g9_ParamLimits

0x159d,	// (0x0000ed45) cale_week_scroll_pane_g10_ParamLimits

0x15b5,	// (0x0000ed5d) cale_week_scroll_pane_g11_ParamLimits

0x15cd,	// (0x0000ed75) cale_week_scroll_pane_g12_ParamLimits

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g13_ParamLimits

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g14_ParamLimits

0x15e5,	// (0x0000ed8d) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0001c8f9) cale_week_scroll_pane_g_ParamLimits

0x1621,	// (0x0000edc9) cale_week_time_pane_ParamLimits

0x1645,	// (0x0000eded) grid_cale_week_pane_ParamLimits

0x9cc5,	// (0x0001746d) listscroll_cale_week_pane_t1

0x9cd7,	// (0x0001747f) scroll_pane_cp08_ParamLimits

0x20ef,	// (0x0000f897) cale_month_corner_pane_ParamLimits

0xa05d,	// (0x00017805) cale_month_pane_t1

0x250d,	// (0x0000fcb5) cale_month_week_pane_ParamLimits

0x2c22,	// (0x000103ca) popup_call_status_window_g1_ParamLimits

0x2c36,	// (0x000103de) popup_call_status_window_g2_ParamLimits

0x2c4a,	// (0x000103f2) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0001ca73) popup_call_status_window_g_ParamLimits

0xa453,	// (0x00017bfb) aid_call2_pane

0x3130,	// (0x000108d8) msg_header_pane_g1

0x3283,	// (0x00010a2b) postcard_address2_pane_ParamLimits

0x3283,	// (0x00010a2b) postcard_address2_pane

0x3295,	// (0x00010a3d) postcard_message2_pane_ParamLimits

0x3295,	// (0x00010a3d) postcard_message2_pane

0x3da8,	// (0x00011550) message2_row_pane_ParamLimits

0x3da8,	// (0x00011550) message2_row_pane

0x3dc4,	// (0x0001156c) address2_row_pane_ParamLimits

0x3dc4,	// (0x0001156c) address2_row_pane

0xbcd5,	// (0x0001947d) postcard_message2_row_pane_g1

0xbcdd,	// (0x00019485) postcard_message2_row_pane_t1

0xbcd5,	// (0x0001947d) address2_row_pane_g1

0xbcdd,	// (0x00019485) address2_row_pane_t1

0x1975,	// (0x0000f11d) aid_size_cell_vorec

0x9797,	// (0x00016f3f) main_rss_pane

0xbceb,	// (0x00019493) rss_list_single_pane_ParamLimits

0xbceb,	// (0x00019493) rss_list_single_pane

0xbcf9,	// (0x000194a1) rss_list_single_pane_t1

0xbcf9,	// (0x000194a1) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x0001cd23) rss_list_single_pane_t

0x9797,	// (0x00016f3f) main_camera2_pane

0x9797,	// (0x00016f3f) main_video2_pane

0xbdab,	// (0x00019553) cams_zoom_pane_cp2_ParamLimits

0xbdab,	// (0x00019553) cams_zoom_pane_cp2

0xbdab,	// (0x00019553) image2_vga_pane_ParamLimits

0xbdab,	// (0x00019553) image2_vga_pane

0xccaa,	// (0x0001a452) main_camera2_pane_g1_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g1

0xccaa,	// (0x0001a452) main_camera2_pane_g2_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g2

0xccaa,	// (0x0001a452) main_camera2_pane_g3_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g3

0xccaa,	// (0x0001a452) main_camera2_pane_g4_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g4

0xccaa,	// (0x0001a452) main_camera2_pane_g5_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g5

0xccaa,	// (0x0001a452) main_camera2_pane_g6_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g6

0xccaa,	// (0x0001a452) main_camera2_pane_g7_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g7

0xccaa,	// (0x0001a452) main_camera2_pane_g8_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g8

0x0008,

0xf597,	// (0x0001cd3f) main_camera2_pane_g_ParamLimits

0xf597,	// (0x0001cd3f) main_camera2_pane_g

0x3f6e,	// (0x00011716) main_camera2_pane_t1_ParamLimits

0x3f6e,	// (0x00011716) main_camera2_pane_t1

0x3f6e,	// (0x00011716) main_camera2_pane_t2_ParamLimits

0x3f6e,	// (0x00011716) main_camera2_pane_t2

0x3f6e,	// (0x00011716) main_camera2_pane_t3_ParamLimits

0x3f6e,	// (0x00011716) main_camera2_pane_t3

0x3f6e,	// (0x00011716) main_camera2_pane_t4_ParamLimits

0x3f6e,	// (0x00011716) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x0001cd52) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x0001cd52) main_camera2_pane_t

0xbdcd,	// (0x00019575) cams_zoom_pane_cp4_ParamLimits

0xbdcd,	// (0x00019575) cams_zoom_pane_cp4

0xbddb,	// (0x00019583) image2_cif_pane_ParamLimits

0xbddb,	// (0x00019583) image2_cif_pane

0x9376,	// (0x00016b1e) image2_subqcif_pane_ParamLimits

0x9376,	// (0x00016b1e) image2_subqcif_pane

0x3f82,	// (0x0001172a) main_video2_pane_g1_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g1

0x3f82,	// (0x0001172a) main_video2_pane_g2_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g2

0x3f82,	// (0x0001172a) main_video2_pane_g3_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g3

0x3f82,	// (0x0001172a) main_video2_pane_g4_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g4

0x3f82,	// (0x0001172a) main_video2_pane_g5_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g5

0x3f82,	// (0x0001172a) main_video2_pane_g6_ParamLimits

0x3f82,	// (0x0001172a) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x0001cd61) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x0001cd61) main_video2_pane_g

0x3f90,	// (0x00011738) main_video2_pane_t1_ParamLimits

0x3f90,	// (0x00011738) main_video2_pane_t1

0x3f90,	// (0x00011738) main_video2_pane_t2_ParamLimits

0x3f90,	// (0x00011738) main_video2_pane_t2

0x3f90,	// (0x00011738) main_video2_pane_t3_ParamLimits

0x3f90,	// (0x00011738) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0001cd6e) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0001cd6e) main_video2_pane_t

0x38f4,	// (0x0001109c) call_muted_g2

0x0001,

0xf56d,	// (0x0001cd15) call_muted_g

0x9797,	// (0x00016f3f) main_mup2_pane

0xa907,	// (0x000180af) main_mup2_pane_g1_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g1

0xa907,	// (0x000180af) main_mup2_pane_g2_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g2

0x9d86,	// (0x0001752e) main_mup_pane_g13_cp1

0x9307,	// (0x00016aaf) mup_volume_pane_cp1

0xa907,	// (0x000180af) main_mup2_pane_g4_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g4

0xa907,	// (0x000180af) main_mup2_pane_g5_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g5

0xa907,	// (0x000180af) main_mup2_pane_g6_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g6

0xa907,	// (0x000180af) main_mup2_pane_g7_ParamLimits

0xa907,	// (0x000180af) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x0001cd75) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x0001cd75) main_mup2_pane_g

0xa915,	// (0x000180bd) main_mup2_pane_t1_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t1

0xa915,	// (0x000180bd) main_mup2_pane_t2_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t2

0xa915,	// (0x000180bd) main_mup2_pane_t3_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t3

0xa915,	// (0x000180bd) main_mup2_pane_t4_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t4

0xa915,	// (0x000180bd) main_mup2_pane_t5_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t5

0xa915,	// (0x000180bd) main_mup2_pane_t6_ParamLimits

0xa915,	// (0x000180bd) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x0001cd84) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x0001cd84) main_mup2_pane_t

0xa93d,	// (0x000180e5) mup2_visualizer_pane_ParamLimits

0xa93d,	// (0x000180e5) mup2_visualizer_pane

0xa93d,	// (0x000180e5) mup_progress_pane_cp_ParamLimits

0xa93d,	// (0x000180e5) mup_progress_pane_cp

0xbde9,	// (0x00019591) mup_volume_pane_cp_ParamLimits

0xbde9,	// (0x00019591) mup_volume_pane_cp

0x9a6d,	// (0x00017215) mup2_visualizer_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) mup2_visualizer_pane_g1

0x9a7b,	// (0x00017223) mup2_visualizer_pane_g2_ParamLimits

0x9a7b,	// (0x00017223) mup2_visualizer_pane_g2

0x9a7b,	// (0x00017223) mup2_visualizer_pane_g3_ParamLimits

0x9a7b,	// (0x00017223) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0001c872) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0001c872) mup2_visualizer_pane_g

0xac29,	// (0x000183d1) aid_size_cell_fmradio

0x3aa6,	// (0x0001124e) aid_height_parent_landcape

0x9ece,	// (0x00017676) wml_content_pane_cp

0x9ed6,	// (0x0001767e) wml_tabs_pane

0x9edf,	// (0x00017687) popup_wml_miniature_window

0x9ee7,	// (0x0001768f) scroll_pane_cp021

0x9efb,	// (0x000176a3) wml_content_pane_comp8

0x9797,	// (0x00016f3f) bg_popup_sub_pane_cp05

0xbdff,	// (0x000195a7) popup_wml_miniature_window_g1

0xbe07,	// (0x000195af) wml_miniature_view_pane

0x3fa4,	// (0x0001174c) aid_size_wml_view

0x3fac,	// (0x00011754) wml_miniature_view_pane_g1

0x3fb5,	// (0x0001175d) wml_miniature_view_pane_g2

0x3fbe,	// (0x00011766) wml_miniature_view_pane_g3

0x3fc6,	// (0x0001176e) wml_miniature_view_pane_g4

0x3fce,	// (0x00011776) wml_miniature_view_pane_g5

0x3fd6,	// (0x0001177e) wml_miniature_view_pane_g6

0x3fde,	// (0x00011786) wml_miniature_view_pane_g7

0x3fe6,	// (0x0001178e) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x0001cd91) wml_miniature_view_pane_g

0xbe0f,	// (0x000195b7) background_graphic_ParamLimits

0xbe0f,	// (0x000195b7) background_graphic

0xbe1b,	// (0x000195c3) wml_tabs_2_pane

0xbe24,	// (0x000195cc) wml_tabs_3_pane_ParamLimits

0xbe24,	// (0x000195cc) wml_tabs_3_pane

0xbe36,	// (0x000195de) wml_tabs_4_pane_ParamLimits

0xbe36,	// (0x000195de) wml_tabs_4_pane

0xbe4c,	// (0x000195f4) wml_tabs_5_pane_ParamLimits

0xbe4c,	// (0x000195f4) wml_tabs_5_pane

0xbe66,	// (0x0001960e) wml_tabs_pane_g2_ParamLimits

0xbe66,	// (0x0001960e) wml_tabs_pane_g2

0xbe7b,	// (0x00019623) wml_tabs_pane_g3_ParamLimits

0xbe7b,	// (0x00019623) wml_tabs_pane_g3

0xbe90,	// (0x00019638) wml_tabs_2_active_pane_ParamLimits

0xbe90,	// (0x00019638) wml_tabs_2_active_pane

0xbe90,	// (0x00019638) wml_tabs_2_passive_pane_ParamLimits

0xbe90,	// (0x00019638) wml_tabs_2_passive_pane

0x3fee,	// (0x00011796) wml_tabs_3_active_pane_cp_ParamLimits

0x3fee,	// (0x00011796) wml_tabs_3_active_pane_cp

0x4003,	// (0x000117ab) wml_tabs_3_passive_pane_ParamLimits

0x4003,	// (0x000117ab) wml_tabs_3_passive_pane

0x4016,	// (0x000117be) wml_tabs_3_passive_pane_cp_ParamLimits

0x4016,	// (0x000117be) wml_tabs_3_passive_pane_cp

0x402d,	// (0x000117d5) tabs_4_active_pane

0x4035,	// (0x000117dd) tabs_4_passive_pane

0x403f,	// (0x000117e7) tabs_4_passive_pane_cp

0x4047,	// (0x000117ef) tabs_4_passive_pane_cp2

0x37e8,	// (0x00010f90) aid_height_text

0xa93d,	// (0x000180e5) mup_volume_cont_pane_ParamLimits

0xa93d,	// (0x000180e5) mup_volume_cont_pane

0x9307,	// (0x00016aaf) aid_size_cell_pinb

0x9307,	// (0x00016aaf) aid_size_list_pinb

0xa93d,	// (0x000180e5) mup2_volume_cont_pane_ParamLimits

0xa93d,	// (0x000180e5) mup2_volume_cont_pane

0xbe9e,	// (0x00019646) mup2_volume_cont_pane_g1_ParamLimits

0xbe9e,	// (0x00019646) mup2_volume_cont_pane_g1

0x0e1f,	// (0x0000e5c7) aid_size_cell_touch_ParamLimits

0x0e1f,	// (0x0000e5c7) aid_size_cell_touch

0x104c,	// (0x0000e7f4) touch_pane_ParamLimits

0x104c,	// (0x0000e7f4) touch_pane

0x9307,	// (0x00016aaf) main_rss2_pane

0xbebd,	// (0x00019665) listscroll_rss2_pane

0xbec6,	// (0x0001966e) rss2_navigation_pane

0xbece,	// (0x00019676) list_rss2_pane

0xa5fd,	// (0x00017da5) scroll_pane_cp22

0xbed6,	// (0x0001967e) rss2_navigation_pane_g1

0xbedf,	// (0x00019687) rss2_navigation_pane_g2

0xbee7,	// (0x0001968f) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x0001cda2) rss2_navigation_pane_g

0xbeef,	// (0x00019697) rss2_navigation_pane_t1

0x4051,	// (0x000117f9) rss2_list_single_pane_ParamLimits

0x4051,	// (0x000117f9) rss2_list_single_pane

0xbefd,	// (0x000196a5) rss2_list_single_pane_t2

0xbf0b,	// (0x000196b3) rss2_list_single_pane_t3_ParamLimits

0xbf0b,	// (0x000196b3) rss2_list_single_pane_t3

0xbf28,	// (0x000196d0) rss2_list_single_pane_t4

0x2b0f,	// (0x000102b7) smil_status_pane_g1

0x9376,	// (0x00016b1e) main_image2_pane_ParamLimits

0x9376,	// (0x00016b1e) main_image2_pane

0xccaa,	// (0x0001a452) main_camera2_pane_g9_ParamLimits

0xccaa,	// (0x0001a452) main_camera2_pane_g9

0x3f6e,	// (0x00011716) main_camera2_pane_t5_ParamLimits

0x3f6e,	// (0x00011716) main_camera2_pane_t5

0xbdb9,	// (0x00019561) main_camera2_pane_t6_ParamLimits

0xbdb9,	// (0x00019561) main_camera2_pane_t6

0x4066,	// (0x0001180e) main_image2_pane_g1_ParamLimits

0x4066,	// (0x0001180e) main_image2_pane_g1

0x34bc,	// (0x00010c64) smil2_video_pane_ParamLimits

0x34bc,	// (0x00010c64) smil2_video_pane

0x9325,	// (0x00016acd) aid_zoom_text_primary_cp

0x936c,	// (0x00016b14) popup_preview_fixed_window

0x9e37,	// (0x000175df) im_reading_pane_g1

0x3f60,	// (0x00011708) cams2_bc_adjust_pane_cp_ParamLimits

0x3f60,	// (0x00011708) cams2_bc_adjust_pane_cp

0xa93d,	// (0x000180e5) cams2_bc_adjust_pane_ParamLimits

0xa93d,	// (0x000180e5) cams2_bc_adjust_pane

0x9d86,	// (0x0001752e) cams2_bc_adjust_pane_g1

0x9307,	// (0x00016aaf) cams2_slider_pane

0x9d86,	// (0x0001752e) cams2_slider_pane_g1

0x9d86,	// (0x0001752e) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x0001cda9) cams2_slider_pane_g

0x1114,	// (0x0000e8bc) calc_display_pane_ParamLimits

0x1139,	// (0x0000e8e1) calc_paper_pane_ParamLimits

0x115c,	// (0x0000e904) grid_calc_pane_ParamLimits

0xa4b9,	// (0x00017c61) popup_clock_digital_window_t1_ParamLimits

0xabc6,	// (0x0001836e) main_image_pane_t1

0x10f6,	// (0x0000e89e) aid_size_cell_calc_ParamLimits

0x10f6,	// (0x0000e89e) aid_size_cell_calc

0x3aec,	// (0x00011294) popup_blid_sat_info2_window_ParamLimits

0x3aec,	// (0x00011294) popup_blid_sat_info2_window

0xbf36,	// (0x000196de) aid_size_cell_blid

0xbddb,	// (0x00019583) bg_popup_window_pane_cp07

0xbf53,	// (0x000196fb) grid_popup_blid_pane

0xbf5d,	// (0x00019705) heading_pane_cp05_ParamLimits

0xbf5d,	// (0x00019705) heading_pane_cp05

0xc027,	// (0x000197cf) cell_popup_blid_pane_ParamLimits

0xc027,	// (0x000197cf) cell_popup_blid_pane

0xc04b,	// (0x000197f3) cell_popup_blid_pane_g1

0xc053,	// (0x000197fb) cell_popup_blid_pane_t1

0xa93d,	// (0x000180e5) mup2_indicator_pane_ParamLimits

0xa93d,	// (0x000180e5) mup2_indicator_pane

0x9307,	// (0x00016aaf) mup2_visualizer_osc_pane

0xbde9,	// (0x00019591) mup2_visualizer_spec_pane_ParamLimits

0xbde9,	// (0x00019591) mup2_visualizer_spec_pane

0x9307,	// (0x00016aaf) mup2_spec_half_pane

0x9307,	// (0x00016aaf) mup2_spec_half_pane_cp

0xc061,	// (0x00019809) mup2_spec_bar_pane_ParamLimits

0xc061,	// (0x00019809) mup2_spec_bar_pane

0x9d86,	// (0x0001752e) mup2_spec_bar_pane_g1

0xc080,	// (0x00019828) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x0001cdcf) mup2_spec_bar_pane_g

0x9307,	// (0x00016aaf) mup2_osc_middle_pane

0x9d86,	// (0x0001752e) mup2_visualizer_osc_pane_g1

0x93a4,	// (0x00016b4c) popup_number_entry_window_t1_ParamLimits

0x93b7,	// (0x00016b5f) popup_number_entry_window_t2_ParamLimits

0x93c9,	// (0x00016b71) popup_number_entry_window_t3_ParamLimits

0x109e,	// (0x0000e846) popup_number_entry_window_t5_ParamLimits

0x109e,	// (0x0000e846) popup_number_entry_window_t5

0xf06b,	// (0x0001c813) popup_number_entry_window_t_ParamLimits

0x93db,	// (0x00016b83) text_title_cp2_ParamLimits

0xaaa0,	// (0x00018248) aid_hotspot_pointer_text2_pane

0xaac6,	// (0x0001826e) main_viewer_pane_g9_ParamLimits

0xaac6,	// (0x0001826e) main_viewer_pane_g9

0xa05d,	// (0x00017805) cale_month_pane_t1_ParamLimits

0xa0c8,	// (0x00017870) bg_cale_pane_ParamLimits

0xa0e0,	// (0x00017888) list_cale_pane_ParamLimits

0xa0f1,	// (0x00017899) listscroll_cale_day_pane_t1

0xa103,	// (0x000178ab) scroll_pane_cp09_ParamLimits

0x2eca,	// (0x00010672) main_mup_eq_pane_t1_ParamLimits

0x2eca,	// (0x00010672) main_mup_eq_pane_t1

0x2ee4,	// (0x0001068c) main_mup_eq_pane_t2_ParamLimits

0x2ee4,	// (0x0001068c) main_mup_eq_pane_t2

0x2efe,	// (0x000106a6) main_mup_eq_pane_t3_ParamLimits

0x2efe,	// (0x000106a6) main_mup_eq_pane_t3

0x2f1a,	// (0x000106c2) main_mup_eq_pane_t4_ParamLimits

0x2f1a,	// (0x000106c2) main_mup_eq_pane_t4

0x2f36,	// (0x000106de) main_mup_eq_pane_t5_ParamLimits

0x2f36,	// (0x000106de) main_mup_eq_pane_t5

0x2f52,	// (0x000106fa) main_mup_eq_pane_t6_ParamLimits

0x2f52,	// (0x000106fa) main_mup_eq_pane_t6

0x2f66,	// (0x0001070e) main_mup_eq_pane_t7_ParamLimits

0x2f66,	// (0x0001070e) main_mup_eq_pane_t7

0x2f7a,	// (0x00010722) main_mup_eq_pane_t8_ParamLimits

0x2f7a,	// (0x00010722) main_mup_eq_pane_t8

0x2f8e,	// (0x00010736) main_mup_eq_pane_t9_ParamLimits

0x2f8e,	// (0x00010736) main_mup_eq_pane_t9

0x2fa8,	// (0x00010750) main_mup_eq_pane_t10_ParamLimits

0x2fa8,	// (0x00010750) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0001cb72) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0001cb72) main_mup_eq_pane_t

0x3057,	// (0x000107ff) mup_equalizer_pane_cp5_ParamLimits

0x306b,	// (0x00010813) mup_equalizer_pane_cp6_ParamLimits

0x307f,	// (0x00010827) mup_equalizer_pane_cp7_ParamLimits

0x9307,	// (0x00016aaf) main_gallery_pane

0xbd27,	// (0x000194cf) smil2_volume_pane

0xbd2f,	// (0x000194d7) smil_status_volume_pane_g1_ParamLimits

0xbd42,	// (0x000194ea) smil_status_volume_pane_g2_ParamLimits

0xbd55,	// (0x000194fd) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x0001cd28) smil_status_volume_pane_g_ParamLimits

0xbddb,	// (0x00019583) bg_popup_window_pane_cp07_ParamLimits

0xbf3e,	// (0x000196e6) blid_firmament_pane

0x9376,	// (0x00016b1e) aid_size_cell_gallery_ParamLimits

0x9376,	// (0x00016b1e) aid_size_cell_gallery

0x9376,	// (0x00016b1e) grid_gallery_pane_ParamLimits

0x9376,	// (0x00016b1e) grid_gallery_pane

0xbddb,	// (0x00019583) cell_gallery_pane_ParamLimits

0xbddb,	// (0x00019583) cell_gallery_pane

0x9376,	// (0x00016b1e) bg_cell_gallery_focus_pane_ParamLimits

0x9376,	// (0x00016b1e) bg_cell_gallery_focus_pane

0x9a6d,	// (0x00017215) cell_gallery_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) cell_gallery_pane_g1

0x9a6d,	// (0x00017215) cell_gallery_pane_g2_ParamLimits

0x9a6d,	// (0x00017215) cell_gallery_pane_g2

0x9a6d,	// (0x00017215) cell_gallery_pane_g3_ParamLimits

0x9a6d,	// (0x00017215) cell_gallery_pane_g3

0x9a7b,	// (0x00017223) cell_gallery_pane_g4_ParamLimits

0x9a7b,	// (0x00017223) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x0001cdd4) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x0001cdd4) cell_gallery_pane_g

0xc08a,	// (0x00019832) bg_cell_gallery_focus_pane_g1

0xc092,	// (0x0001983a) bg_cell_gallery_focus_pane_g2

0xc09a,	// (0x00019842) bg_cell_gallery_focus_pane_g3

0xc0a2,	// (0x0001984a) bg_cell_gallery_focus_pane_g4

0xc0aa,	// (0x00019852) bg_cell_gallery_focus_pane_g5

0xc0b2,	// (0x0001985a) bg_cell_gallery_focus_pane_g6

0xc0ba,	// (0x00019862) bg_cell_gallery_focus_pane_g7

0xc0c2,	// (0x0001986a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x0001cddd) bg_cell_gallery_focus_pane_g

0xc0ca,	// (0x00019872) aid_firma_cardinal

0xc0de,	// (0x00019886) blid_firmament_pane_t1

0xc0f5,	// (0x0001989d) blid_firmament_pane_t2

0xc10c,	// (0x000198b4) blid_firmament_pane_t3

0xc123,	// (0x000198cb) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x0001cdee) blid_firmament_pane_t

0xc13a,	// (0x000198e2) blid_sat_info_pane

0x9d86,	// (0x0001752e) blid_sat_info_pane_g1

0x9d86,	// (0x0001752e) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) blid_sat_info_pane_g

0xc14a,	// (0x000198f2) blid_sat_info_pane_t1

0xc158,	// (0x00019900) smil2_volume_content_pane

0xc161,	// (0x00019909) smil2_volume_pane_g1

0x9b9c,	// (0x00017344) smil2_volume_content_pane_g1

0xc169,	// (0x00019911) smil2_volume_content_pane_g2

0xc172,	// (0x0001991a) smil2_volume_content_pane_g3

0xc17b,	// (0x00019923) smil2_volume_content_pane_g4

0xc184,	// (0x0001992c) smil2_volume_content_pane_g5

0xc18d,	// (0x00019935) smil2_volume_content_pane_g6

0xc196,	// (0x0001993e) smil2_volume_content_pane_g7

0xc19f,	// (0x00019947) smil2_volume_content_pane_g8

0xc1a8,	// (0x00019950) smil2_volume_content_pane_g9

0xc1b1,	// (0x00019959) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x0001cdf7) smil2_volume_content_pane_g

0x16f9,	// (0x0000eea1) cale_week_day_heading_pane_t1_ParamLimits

0x1723,	// (0x0000eecb) cale_week_day_heading_pane_t2_ParamLimits

0x1752,	// (0x0000eefa) cale_week_day_heading_pane_t3_ParamLimits

0x1781,	// (0x0000ef29) cale_week_day_heading_pane_t4_ParamLimits

0x17b0,	// (0x0000ef58) cale_week_day_heading_pane_t5_ParamLimits

0x17e7,	// (0x0000ef8f) cale_week_day_heading_pane_t6_ParamLimits

0x181e,	// (0x0000efc6) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0001c91a) cale_week_day_heading_pane_t_ParamLimits

0x9cf4,	// (0x0001749c) bg_cale_side_pane_ParamLimits

0x1848,	// (0x0000eff0) cale_week_time_pane_t1_ParamLimits

0x1862,	// (0x0000f00a) cale_week_time_pane_t2_ParamLimits

0x187c,	// (0x0000f024) cale_week_time_pane_t3_ParamLimits

0x1896,	// (0x0000f03e) cale_week_time_pane_t4_ParamLimits

0x18b0,	// (0x0000f058) cale_week_time_pane_t5_ParamLimits

0x18ca,	// (0x0000f072) cale_week_time_pane_t6_ParamLimits

0x18e4,	// (0x0000f08c) cale_week_time_pane_t7_ParamLimits

0x18fe,	// (0x0000f0a6) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0001c929) cale_week_time_pane_t_ParamLimits

0x1918,	// (0x0000f0c0) cell_cale_week_pane_g2_ParamLimits

0x9cf4,	// (0x0001749c) bg_cale_side_pane_cp01_ParamLimits

0x2916,	// (0x000100be) cale_month_week_pane_t1_ParamLimits

0x292f,	// (0x000100d7) cale_month_week_pane_t2_ParamLimits

0x2948,	// (0x000100f0) cale_month_week_pane_t3_ParamLimits

0x2961,	// (0x00010109) cale_month_week_pane_t4_ParamLimits

0x297a,	// (0x00010122) cale_month_week_pane_t5_ParamLimits

0x2993,	// (0x0001013b) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0001c9f7) cale_month_week_pane_t_ParamLimits

0xa06f,	// (0x00017817) cell_cale_month_pane_g1_ParamLimits

0x9307,	// (0x00016aaf) main_cale_event_viewer_pane

0x9307,	// (0x00016aaf) listscroll_cale_event_viewer_pane

0xc1ba,	// (0x00019962) list_cale_ev_pane

0xc1c2,	// (0x0001996a) scroll_pane_cp023

0xc1ce,	// (0x00019976) field_cale_ev_pane_ParamLimits

0xc1ce,	// (0x00019976) field_cale_ev_pane

0xc1ec,	// (0x00019994) field_cale_ev_content_pane_ParamLimits

0xc1ec,	// (0x00019994) field_cale_ev_content_pane

0xc1f8,	// (0x000199a0) field_cale_ev_pane_g1_ParamLimits

0xc1f8,	// (0x000199a0) field_cale_ev_pane_g1

0xc204,	// (0x000199ac) field_cale_ev_pane_g2_ParamLimits

0xc204,	// (0x000199ac) field_cale_ev_pane_g2

0xc21c,	// (0x000199c4) field_cale_ev_pane_g3_ParamLimits

0xc21c,	// (0x000199c4) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x0001ce0c) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x0001ce0c) field_cale_ev_pane_g

0xc234,	// (0x000199dc) field_cale_ev_pane_t1_ParamLimits

0xc234,	// (0x000199dc) field_cale_ev_pane_t1

0x9c1f,	// (0x000173c7) field_cale_ev_content_pane_t1_ParamLimits

0x9c1f,	// (0x000173c7) field_cale_ev_content_pane_t1

0xa9e8,	// (0x00018190) bg_button_pane_cp01

0x1426,	// (0x0000ebce) listscroll_cale_week_pane_ParamLimits

0x9c9f,	// (0x00017447) popup_toolbar_window_cp01

0x9cc5,	// (0x0001746d) listscroll_cale_week_pane_t1_ParamLimits

0x1426,	// (0x0000ebce) listscroll_cale_day_pane_ParamLimits

0x9c9f,	// (0x00017447) popup_toolbar_window_cp02

0xa0f1,	// (0x00017899) listscroll_cale_day_pane_t1_ParamLimits

0x1426,	// (0x0000ebce) main_cale_month_pane_ParamLimits

0xbca5,	// (0x0001944d) popup_toolbar_window_cp03_ParamLimits

0xbca5,	// (0x0001944d) popup_toolbar_window_cp03

0x3384,	// (0x00010b2c) main_image_pane_g2_ParamLimits

0x3384,	// (0x00010b2c) main_image_pane_g2

0x3395,	// (0x00010b3d) main_image_pane_g3_ParamLimits

0x3395,	// (0x00010b3d) main_image_pane_g3

0x0002,

0xf45c,	// (0x0001cc04) main_image_pane_g_ParamLimits

0xf45c,	// (0x0001cc04) main_image_pane_g

0xabc6,	// (0x0001836e) main_image_pane_t1_ParamLimits

0x33a6,	// (0x00010b4e) main_image_pane_t2_ParamLimits

0x33a6,	// (0x00010b4e) main_image_pane_t2

0x33b8,	// (0x00010b60) main_image_pane_t3_ParamLimits

0x33b8,	// (0x00010b60) main_image_pane_t3

0x33e0,	// (0x00010b88) main_image_pane_t4_ParamLimits

0x33e0,	// (0x00010b88) main_image_pane_t4

0x0003,

0xf463,	// (0x0001cc0b) main_image_pane_t_ParamLimits

0xf463,	// (0x0001cc0b) main_image_pane_t

0x3400,	// (0x00010ba8) popup_image_details_window_cp01

0x340a,	// (0x00010bb2) popup_toobar_trans_pane_cp01_ParamLimits

0x340a,	// (0x00010bb2) popup_toobar_trans_pane_cp01

0x3bcb,	// (0x00011373) popup_image_details_window_ParamLimits

0x3bcb,	// (0x00011373) popup_image_details_window

0xbc78,	// (0x00019420) popup_image_focus_window

0xbdab,	// (0x00019553) camera2_autofocus_pane_ParamLimits

0xbdab,	// (0x00019553) camera2_autofocus_pane

0x9307,	// (0x00016aaf) bg_popup_sub_pane_cp06

0xc24b,	// (0x000199f3) popup_image_focus_window_g1

0xc253,	// (0x000199fb) popup_image_focus_window_g2

0xc25b,	// (0x00019a03) popup_image_focus_window_g3

0xc263,	// (0x00019a0b) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x0001ce13) popup_image_focus_window_g

0xc26b,	// (0x00019a13) popup_image_focus_window_t1

0xc279,	// (0x00019a21) popup_image_focus_window_t2

0xc289,	// (0x00019a31) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x0001ce1c) popup_image_focus_window_t

0x9a6d,	// (0x00017215) camera2_autofocus_pane_g1

0x9376,	// (0x00016b1e) bg_tb_trans_pane_cp01

0xc297,	// (0x00019a3f) popup_image_details_window_g1

0xc2aa,	// (0x00019a52) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0001ce2e) popup_image_details_window_g

0xc2d3,	// (0x00019a7b) popup_image_details_window_t1

0xc2e5,	// (0x00019a8d) popup_image_details_window_t2

0xc2fe,	// (0x00019aa6) popup_image_details_window_t3

0xc312,	// (0x00019aba) popup_image_details_window_t4

0xc32d,	// (0x00019ad5) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x0001ce35) popup_image_details_window_t

0x9ad3,	// (0x0001727b) bg_calc_paper_pane_ParamLimits

0x9307,	// (0x00016aaf) grid_highlight_pane_cp013

0x9ae7,	// (0x0001728f) list_calc_pane_ParamLimits

0x9af9,	// (0x000172a1) scroll_pane_cp024

0x9b01,	// (0x000172a9) bg_calc_display_pane_ParamLimits

0x1274,	// (0x0000ea1c) calc_display_pane_t1_ParamLimits

0x1289,	// (0x0000ea31) calc_display_pane_t2_ParamLimits

0x9b0d,	// (0x000172b5) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0001c89a) calc_display_pane_t_ParamLimits

0x1349,	// (0x0000eaf1) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0001c8b7) cell_calc_pane_g

0x1352,	// (0x0000eafa) cell_calc_pane_t1

0x9b7a,	// (0x00017322) grid_highlight_pane_cp02_ParamLimits

0x9b90,	// (0x00017338) toolbar_button_pane_cp01_ParamLimits

0x9b90,	// (0x00017338) toolbar_button_pane_cp01

0xac0b,	// (0x000183b3) temp_image_control_pane_ParamLimits

0xac0b,	// (0x000183b3) temp_image_control_pane

0x9376,	// (0x00016b1e) main_mp3_pane

0xc347,	// (0x00019aef) temp_image_control_pane_g1_ParamLimits

0xc347,	// (0x00019aef) temp_image_control_pane_g1

0xc355,	// (0x00019afd) temp_image_control_pane_g2_ParamLimits

0xc355,	// (0x00019afd) temp_image_control_pane_g2

0xc367,	// (0x00019b0f) temp_image_control_pane_g3_ParamLimits

0xc367,	// (0x00019b0f) temp_image_control_pane_g3

0x407c,	// (0x00011824) temp_image_control_pane_g4_ParamLimits

0x407c,	// (0x00011824) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x0001ce40) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x0001ce40) temp_image_control_pane_g

0xc347,	// (0x00019aef) main_mp3_pane_g1

0x408f,	// (0x00011837) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x0001ce49) main_mp3_pane_g

0xc39c,	// (0x00019b44) main_mp3_pane_t1

0x9a7b,	// (0x00017223) main_camera_pane_g8_ParamLimits

0x9a7b,	// (0x00017223) main_camera_pane_g8

0x1ae2,	// (0x0000f28a) main_video_pane_g7_ParamLimits

0x1ae2,	// (0x0000f28a) main_video_pane_g7

0xa929,	// (0x000180d1) main_camera2_pane_t7_ParamLimits

0xa929,	// (0x000180d1) main_camera2_pane_t7

0x9e8e,	// (0x00017636) scroll_pane_cp025_ParamLimits

0x9e8e,	// (0x00017636) scroll_pane_cp025

0x9ea2,	// (0x0001764a) scroll_pane_cp026_ParamLimits

0x9ea2,	// (0x0001764a) scroll_pane_cp026

0x9eb1,	// (0x00017659) wml_content_pane_ParamLimits

0x9307,	// (0x00016aaf) main_touch_calib_pane

0x4163,	// (0x0001190b) main_touch_calib_pane_g1

0x4175,	// (0x0001191d) main_touch_calib_pane_g2

0x4187,	// (0x0001192f) main_touch_calib_pane_g3

0x4199,	// (0x00011941) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x0001ce67) main_touch_calib_pane_g

0x41ab,	// (0x00011953) main_touch_calib_pane_t1

0x41c5,	// (0x0001196d) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x0001ce70) main_touch_calib_pane_t

0xa6d9,	// (0x00017e81) mup_progress_pane_cp02

0xa70e,	// (0x00017eb6) navi_pane_g1

0xa7c9,	// (0x00017f71) navi_pane_mp_t3

0x9376,	// (0x00016b1e) main_mp3_pane_ParamLimits

0x3d50,	// (0x000114f8) navi_pane_ParamLimits

0xc347,	// (0x00019aef) main_mp3_pane_g1_ParamLimits

0x408f,	// (0x00011837) main_mp3_pane_g2_ParamLimits

0x409d,	// (0x00011845) main_mp3_pane_g3_ParamLimits

0x409d,	// (0x00011845) main_mp3_pane_g3

0x40ab,	// (0x00011853) main_mp3_pane_g4_ParamLimits

0x40ab,	// (0x00011853) main_mp3_pane_g4

0x9a6d,	// (0x00017215) main_mp3_pane_g5_ParamLimits

0x9a6d,	// (0x00017215) main_mp3_pane_g5

0xc377,	// (0x00019b1f) main_mp3_pane_g6_ParamLimits

0xc377,	// (0x00019b1f) main_mp3_pane_g6

0xc384,	// (0x00019b2c) main_mp3_pane_g7_ParamLimits

0xc384,	// (0x00019b2c) main_mp3_pane_g7

0xc390,	// (0x00019b38) main_mp3_pane_g8_ParamLimits

0xc390,	// (0x00019b38) main_mp3_pane_g8

0xf6a1,	// (0x0001ce49) main_mp3_pane_g_ParamLimits

0x40b7,	// (0x0001185f) main_mp3_pane_t2

0x40c5,	// (0x0001186d) main_mp3_pane_t3

0xc3aa,	// (0x00019b52) main_mp3_pane_t4

0xc3b8,	// (0x00019b60) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0001ce5a) main_mp3_pane_t

0xc3c6,	// (0x00019b6e) mup_progress_pane_cp01

0x9325,	// (0x00016acd) aid_zoom_text_secondary2

0xc1ba,	// (0x00019962) list_cale_ev2_pane

0xc1c2,	// (0x0001996a) scroll_pane_cp023_ParamLimits

0x421b,	// (0x000119c3) field_cale_ev2_pane_ParamLimits

0x421b,	// (0x000119c3) field_cale_ev2_pane

0x423b,	// (0x000119e3) field_cale_ev2_pane_g1_ParamLimits

0x423b,	// (0x000119e3) field_cale_ev2_pane_g1

0x4247,	// (0x000119ef) field_cale_ev2_pane_g2_ParamLimits

0x4247,	// (0x000119ef) field_cale_ev2_pane_g2

0x425f,	// (0x00011a07) field_cale_ev2_pane_g3_ParamLimits

0x425f,	// (0x00011a07) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0001ce7b) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0001ce7b) field_cale_ev2_pane_g

0x4277,	// (0x00011a1f) field_cale_ev2_pane_t1_ParamLimits

0x4277,	// (0x00011a1f) field_cale_ev2_pane_t1

0x428e,	// (0x00011a36) field_cale_ev2_pane_t2_ParamLimits

0x428e,	// (0x00011a36) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x0001ce84) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x0001ce84) field_cale_ev2_pane_t

0x3239,	// (0x000109e1) main_postcard_pane_g5_ParamLimits

0x3239,	// (0x000109e1) main_postcard_pane_g5

0x324f,	// (0x000109f7) main_postcard_pane_g6_ParamLimits

0x324f,	// (0x000109f7) main_postcard_pane_g6

0x9376,	// (0x00016b1e) camera2_autofocus_pane_cp_ParamLimits

0x9376,	// (0x00016b1e) camera2_autofocus_pane_cp

0x9376,	// (0x00016b1e) main_mup3_pane

0x42e7,	// (0x00011a8f) main_mup3_pane_g1_ParamLimits

0x42e7,	// (0x00011a8f) main_mup3_pane_g1

0x4309,	// (0x00011ab1) main_mup3_pane_g2_ParamLimits

0x4309,	// (0x00011ab1) main_mup3_pane_g2

0x4387,	// (0x00011b2f) main_mup3_pane_g3_ParamLimits

0x4387,	// (0x00011b2f) main_mup3_pane_g3

0x43cd,	// (0x00011b75) main_mup3_pane_g4_ParamLimits

0x43cd,	// (0x00011b75) main_mup3_pane_g4

0x4413,	// (0x00011bbb) main_mup3_pane_g5_ParamLimits

0x4413,	// (0x00011bbb) main_mup3_pane_g5

0x4459,	// (0x00011c01) main_mup3_pane_g6_ParamLimits

0x4459,	// (0x00011c01) main_mup3_pane_g6

0x9a7b,	// (0x00017223) main_mup3_pane_g7_ParamLimits

0x9a7b,	// (0x00017223) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x0001ce94) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x0001ce94) main_mup3_pane_g

0x44d7,	// (0x00011c7f) main_mup3_pane_t1_ParamLimits

0x44d7,	// (0x00011c7f) main_mup3_pane_t1

0x454b,	// (0x00011cf3) main_mup3_pane_t2_ParamLimits

0x454b,	// (0x00011cf3) main_mup3_pane_t2

0x461f,	// (0x00011dc7) main_mup3_pane_t4_ParamLimits

0x461f,	// (0x00011dc7) main_mup3_pane_t4

0x4675,	// (0x00011e1d) main_mup3_pane_t5_ParamLimits

0x4675,	// (0x00011e1d) main_mup3_pane_t5

0x4731,	// (0x00011ed9) main_mup3_pane_t6_ParamLimits

0x4731,	// (0x00011ed9) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x0001cea5) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x0001cea5) main_mup3_pane_t

0x47e9,	// (0x00011f91) mup3_progress_pane_ParamLimits

0x47e9,	// (0x00011f91) mup3_progress_pane

0x487f,	// (0x00012027) popup_mup3_control_window_ParamLimits

0x487f,	// (0x00012027) popup_mup3_control_window

0xc3da,	// (0x00019b82) popup_mup3_text_window

0x48b1,	// (0x00012059) mup3_progress_pane_t1

0x48d0,	// (0x00012078) mup3_progress_pane_t2

0xc3e2,	// (0x00019b8a) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x0001ceb2) mup3_progress_pane_t

0xc3ff,	// (0x00019ba7) mup_progress_pane_cp03

0x9307,	// (0x00016aaf) bg_tb_trans_pane_cp04

0x48ef,	// (0x00012097) mup3_volume_pane

0x48f7,	// (0x0001209f) popup_mup3_control_window_g1

0x4900,	// (0x000120a8) mup3_volume_pane_g1

0x4909,	// (0x000120b1) mup3_volume_pane_g2

0x4912,	// (0x000120ba) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x0001ceb9) mup3_volume_pane_g

0x9307,	// (0x00016aaf) bg_tb_trans_pane_cp03

0xc40f,	// (0x00019bb7) popup_mup3_text_window_g1

0xc417,	// (0x00019bbf) popup_mup3_text_window_t1

0x9b5b,	// (0x00017303) list_calc_item_pane_g1_ParamLimits

0xbeb4,	// (0x0001965c) mup_volume_pane_cp_g1

0x41df,	// (0x00011987) main_touch_calib_pane_t3

0x41f3,	// (0x0001199b) main_touch_calib_pane_t4

0x4207,	// (0x000119af) main_touch_calib_pane_t5

0x9311,	// (0x00016ab9) aid_cell_size_toolbar2

0x9319,	// (0x00016ac1) aid_popup3_width_pane

0x9325,	// (0x00016acd) aid_zoom_text_msg_primary

0x19bd,	// (0x0000f165) vorec_t7

0x9b1f,	// (0x000172c7) bg_calc_paper_pane_g1_ParamLimits

0x9b2b,	// (0x000172d3) bg_calc_paper_pane_g2_ParamLimits

0x9b37,	// (0x000172df) bg_calc_paper_pane_g3_ParamLimits

0x9b43,	// (0x000172eb) bg_calc_paper_pane_g4_ParamLimits

0x9b4f,	// (0x000172f7) bg_calc_paper_pane_g5_ParamLimits

0x12d3,	// (0x0000ea7b) bg_calc_paper_pane_g6_ParamLimits

0x12e2,	// (0x0000ea8a) bg_calc_paper_pane_g7_ParamLimits

0x12f1,	// (0x0000ea99) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0001c8a1) bg_calc_paper_pane_g_ParamLimits

0x1304,	// (0x0000eaac) calc_bg_paper_pane_g9_ParamLimits

0x9376,	// (0x00016b1e) image_qvga_pane_ParamLimits

0x9376,	// (0x00016b1e) image_qvga_pane

0x99f2,	// (0x0001719a) bg_popup_sub_pane_cp04_ParamLimits

0xab42,	// (0x000182ea) popup_mup_playback_window_g1_ParamLimits

0xab4e,	// (0x000182f6) popup_mup_playback_window_t1_ParamLimits

0xab63,	// (0x0001830b) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0001cbff) popup_mup_playback_window_t_ParamLimits

0x9a7b,	// (0x00017223) main_mup2_pane_g3_ParamLimits

0x9a7b,	// (0x00017223) main_mup2_pane_g3

0x1cea,	// (0x0000f492) popup_toolbar_window_cp04

0xaf45,	// (0x000186ed) popup_call2_audio_second_window_g3_ParamLimits

0xaf45,	// (0x000186ed) popup_call2_audio_second_window_g3

0xb35d,	// (0x00018b05) popup_call2_audio_first_window_g4_ParamLimits

0xb35d,	// (0x00018b05) popup_call2_audio_first_window_g4

0xb984,	// (0x0001912c) popup_call2_audio_in_window_g4_ParamLimits

0xb984,	// (0x0001912c) popup_call2_audio_in_window_g4

0x3366,	// (0x00010b0e) aid_area_sk_bg_cut_ParamLimits

0x3366,	// (0x00010b0e) aid_area_sk_bg_cut

0xab78,	// (0x00018320) aid_area_sk_bg_cut_2_ParamLimits

0xab78,	// (0x00018320) aid_area_sk_bg_cut_2

0x9307,	// (0x00016aaf) aid_placing_details_win

0x9307,	// (0x00016aaf) aid_placing_details_win_2

0x9a6d,	// (0x00017215) camera2_autofocus_pane_g1_ParamLimits

0x0fe5,	// (0x0000e78d) popup_fixed_preview_cale_window_ParamLimits

0x0fe5,	// (0x0000e78d) popup_fixed_preview_cale_window

0xa850,	// (0x00017ff8) navi_slider_pane_g3

0xa859,	// (0x00018001) navi_slider_pane_g4

0xa862,	// (0x0001800a) navi_slider_pane_g5

0xa850,	// (0x00017ff8) navi_slider_pane_g6

0xa86b,	// (0x00018013) navi_slider_pane_g7

0xa9ad,	// (0x00018155) mup_scale_pane_g3

0xa9b6,	// (0x0001815e) mup_scale_pane_g4

0xa9bf,	// (0x00018167) mup_scale_pane_g5

0x3093,	// (0x0001083b) mup_scale_pane_g6

0x309c,	// (0x00010844) mup_scale_pane_g7

0x9d86,	// (0x0001752e) cams2_slider_pane_g3

0x9d86,	// (0x0001752e) cams2_slider_pane_g4

0x9d86,	// (0x0001752e) cams2_slider_pane_g5

0x9d86,	// (0x0001752e) cams2_slider_pane_g6

0x9d86,	// (0x0001752e) cams2_slider_pane_g7

0x9d86,	// (0x0001752e) camera2_autofocus_pane_cp_g1

0xbc5a,	// (0x00019402) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc5a,	// (0x00019402) bg_popup_preview_window_pane_cp02

0xc425,	// (0x00019bcd) list_fp_cale_pane_ParamLimits

0xc425,	// (0x00019bcd) list_fp_cale_pane

0xc431,	// (0x00019bd9) popup_fixed_preview_cale_window_t1_ParamLimits

0xc431,	// (0x00019bd9) popup_fixed_preview_cale_window_t1

0x491b,	// (0x000120c3) popup_fixed_preview_cale_window_t2_ParamLimits

0x491b,	// (0x000120c3) popup_fixed_preview_cale_window_t2

0x4930,	// (0x000120d8) popup_fixed_preview_cale_window_t3_ParamLimits

0x4930,	// (0x000120d8) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x0001cec0) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x0001cec0) popup_fixed_preview_cale_window_t

0x4945,	// (0x000120ed) list_single_fp_cale_pane_ParamLimits

0x4945,	// (0x000120ed) list_single_fp_cale_pane

0xc44f,	// (0x00019bf7) list_single_fp_cale_pane_g1_ParamLimits

0xc44f,	// (0x00019bf7) list_single_fp_cale_pane_g1

0xc45b,	// (0x00019c03) list_single_fp_cale_pane_g2_ParamLimits

0xc45b,	// (0x00019c03) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x0001cec7) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x0001cec7) list_single_fp_cale_pane_g

0xc474,	// (0x00019c1c) list_single_fp_cale_pane_t1_ParamLimits

0xc474,	// (0x00019c1c) list_single_fp_cale_pane_t1

0xc486,	// (0x00019c2e) list_single_fp_cale_pane_t2_ParamLimits

0xc486,	// (0x00019c2e) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x0001cece) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x0001cece) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9307,	// (0x00016aaf) main_dialer_pane

0x9307,	// (0x00016aaf) aid_cell_size_keypad

0x9307,	// (0x00016aaf) dialer_ne_pane

0x9307,	// (0x00016aaf) grid_dialer_command_1_pane

0x9307,	// (0x00016aaf) grid_dialer_command_2_pane

0x9307,	// (0x00016aaf) grid_dialer_keypad_pane

0x495a,	// (0x00012102) bg_popup_call_pane_cp06_ParamLimits

0x495a,	// (0x00012102) bg_popup_call_pane_cp06

0x495a,	// (0x00012102) dialer_ne_clear_pane_ParamLimits

0x495a,	// (0x00012102) dialer_ne_clear_pane

0x9d86,	// (0x0001752e) dialer_ne_pane_g1

0xa929,	// (0x000180d1) dialer_ne_pane_t1_ParamLimits

0xa929,	// (0x000180d1) dialer_ne_pane_t1

0x4968,	// (0x00012110) dialer_ne_pane_t2_ParamLimits

0x4968,	// (0x00012110) dialer_ne_pane_t2

0x4990,	// (0x00012138) dialer_ne_pane_t3_ParamLimits

0x4990,	// (0x00012138) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x0001ced3) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x0001ced3) dialer_ne_pane_t

0x4990,	// (0x00012138) dialer_ne_pane_t3_copy1_ParamLimits

0x4990,	// (0x00012138) dialer_ne_pane_t3_copy1

0xc4b9,	// (0x00019c61) cell_dialer_keypad_pane_ParamLimits

0xc4b9,	// (0x00019c61) cell_dialer_keypad_pane

0x9376,	// (0x00016b1e) cell_dialer_command_1_pane_ParamLimits

0x9376,	// (0x00016b1e) cell_dialer_command_1_pane

0xc4d0,	// (0x00019c78) cell_dialer_command_2_pane_ParamLimits

0xc4d0,	// (0x00019c78) cell_dialer_command_2_pane

0x9376,	// (0x00016b1e) bg_button_pane_cp02_ParamLimits

0x9376,	// (0x00016b1e) bg_button_pane_cp02

0x9a6d,	// (0x00017215) cell_dialer_keypad_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) cell_dialer_keypad_pane_g1

0x9376,	// (0x00016b1e) bg_button_pane_cp03_ParamLimits

0x9376,	// (0x00016b1e) bg_button_pane_cp03

0x9a6d,	// (0x00017215) cell_dialer_command_1_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) cell_dialer_command_1_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp04

0x9d86,	// (0x0001752e) cell_dialer_command_2_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp06

0x9d86,	// (0x0001752e) dialer_ne_clear_pane_g1

0xa71a,	// (0x00017ec2) navi_pane_g2

0xa748,	// (0x00017ef0) navi_pane_g3

0x0002,

0xf35a,	// (0x0001cb02) navi_pane_g

0xa7d7,	// (0x00017f7f) navi_pane_mv_g2

0xa7fe,	// (0x00017fa6) navi_pane_mv_g5

0x2e78,	// (0x00010620) navi_pane_mv_t1

0x9b01,	// (0x000172a9) main_clock2_pane

0x9376,	// (0x00016b1e) main_clock2_list_pane_ParamLimits

0x9376,	// (0x00016b1e) main_clock2_list_pane

0x4a26,	// (0x000121ce) main_clock2_pane_t1_ParamLimits

0x4a26,	// (0x000121ce) main_clock2_pane_t1

0x4a61,	// (0x00012209) main_clock2_pane_t2_ParamLimits

0x4a61,	// (0x00012209) main_clock2_pane_t2

0x0004,

0xf737,	// (0x0001cedf) main_clock2_pane_t_ParamLimits

0xf737,	// (0x0001cedf) main_clock2_pane_t

0x4b01,	// (0x000122a9) popup_clock_analogue_window_cp03_ParamLimits

0x4b01,	// (0x000122a9) popup_clock_analogue_window_cp03

0x4b26,	// (0x000122ce) popup_clock_digital_window_cp02_ParamLimits

0x4b26,	// (0x000122ce) popup_clock_digital_window_cp02

0x4b9f,	// (0x00012347) main_clock2_list_single_pane_ParamLimits

0x4b9f,	// (0x00012347) main_clock2_list_single_pane

0x9d46,	// (0x000174ee) list_highlight_pane_cp05

0xc517,	// (0x00019cbf) main_clock2_list_single_pane_t1

0x1cea,	// (0x0000f492) popup_toolbar_window_cp04_ParamLimits

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g2_ParamLimits

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g2

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g3_ParamLimits

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g3

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g4_ParamLimits

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g4

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g5_ParamLimits

0x9a7b,	// (0x00017223) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x0001ce23) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x0001ce23) camera2_autofocus_pane_g

0x42a3,	// (0x00011a4b) camera2_autofocus_pane_cp_g2

0x42ab,	// (0x00011a53) camera2_autofocus_pane_cp_g3

0x42b3,	// (0x00011a5b) camera2_autofocus_pane_cp_g4

0x42bb,	// (0x00011a63) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x0001ce89) camera2_autofocus_pane_cp_g

0x9307,	// (0x00016aaf) popup_dialer_spcha_window

0x9307,	// (0x00016aaf) bg_popup_sub_pane_cp07

0x9307,	// (0x00016aaf) list_spcha_pane

0xc525,	// (0x00019ccd) list_single_spcha_pane_ParamLimits

0xc525,	// (0x00019ccd) list_single_spcha_pane

0x9307,	// (0x00016aaf) list_highlight_pane_cp06

0xa2dc,	// (0x00017a84) list_single_spcha_pane_t1

0xb72e,	// (0x00018ed6) popup_call2_audio_out_window_g4_ParamLimits

0xb72e,	// (0x00018ed6) popup_call2_audio_out_window_g4

0x9307,	// (0x00016aaf) main_imed2_pane

0xbc80,	// (0x00019428) popup_imed_adjust2_window

0x3be3,	// (0x0001138b) popup_imed_trans_window_ParamLimits

0x3be3,	// (0x0001138b) popup_imed_trans_window

0xbf89,	// (0x00019731) popup_blid_sat_info2_window_t1

0xbf97,	// (0x0001973f) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x0001cdb8) popup_blid_sat_info2_window_t

0x4c50,	// (0x000123f8) aid_size_cell_colour_35

0x4c70,	// (0x00012418) aid_size_cell_colour_112

0x4c90,	// (0x00012438) aid_size_cell_effect

0xa93d,	// (0x000180e5) bg_tb_trans_pane_cp02

0xa202,	// (0x000179aa) heading_imed_pane

0x4cb0,	// (0x00012458) listscroll_imed_pane

0xc537,	// (0x00019cdf) heading_imed_pane_g1

0xc53f,	// (0x00019ce7) heading_imed_pane_t1

0xc54d,	// (0x00019cf5) grid_imed_colour_35_pane_ParamLimits

0xc54d,	// (0x00019cf5) grid_imed_colour_35_pane

0x4cbc,	// (0x00012464) grid_imed_effect_pane

0xc564,	// (0x00019d0c) list_imed_aspect_pane

0x4cd2,	// (0x0001247a) scroll_pane_cp027_ParamLimits

0x4cd2,	// (0x0001247a) scroll_pane_cp027

0x4ce3,	// (0x0001248b) cell_imed_effect_pane_ParamLimits

0x4ce3,	// (0x0001248b) cell_imed_effect_pane

0xc56c,	// (0x00019d14) cell_imed_colour_pane_ParamLimits

0xc56c,	// (0x00019d14) cell_imed_colour_pane

0xc5ae,	// (0x00019d56) cell_imed_colour_pane_g1_ParamLimits

0xc5ae,	// (0x00019d56) cell_imed_colour_pane_g1

0xc5bf,	// (0x00019d67) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5bf,	// (0x00019d67) hgihlgiht_grid_pane_cp016

0x4d0a,	// (0x000124b2) cell_imed_effect_pane_g1

0x4d12,	// (0x000124ba) grid_highlight_pane_cp017

0xc5d0,	// (0x00019d78) list_imed_single_pane_ParamLimits

0xc5d0,	// (0x00019d78) list_imed_single_pane

0x9307,	// (0x00016aaf) list_highlight_pane_cp07

0xc5e5,	// (0x00019d8d) list_imed_aspect_pane_comp1_t1

0xa93d,	// (0x000180e5) bg_tb_trans_pane_cp05

0xc607,	// (0x00019daf) popup_imed_adjust2_window_g1

0xc62e,	// (0x00019dd6) popup_imed_adjust2_window_t1

0xc646,	// (0x00019dee) slider_imed_adjust_pane

0xc65a,	// (0x00019e02) slider_imed_adjust_pane_g1

0xc66a,	// (0x00019e12) slider_imed_adjust_pane_g2

0xc67a,	// (0x00019e22) slider_imed_adjust_pane_g3

0xc68b,	// (0x00019e33) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x0001cefc) slider_imed_adjust_pane_g

0x4d1b,	// (0x000124c3) aid_size_cell_clipart2

0x4d27,	// (0x000124cf) grid_imed_clipart_pane

0xc69c,	// (0x00019e44) scroll_pane_cp031

0x4d31,	// (0x000124d9) cell_imed_clipart_pane_ParamLimits

0x4d31,	// (0x000124d9) cell_imed_clipart_pane

0x4d53,	// (0x000124fb) cell_imed_clipart_pane_g1

0x9307,	// (0x00016aaf) grid_highlight_pane_cp014

0x4a02,	// (0x000121aa) main_clock2_pane_g1_ParamLimits

0x4a02,	// (0x000121aa) main_clock2_pane_g1

0x4b46,	// (0x000122ee) aid_call2_pane_cp10

0x4b58,	// (0x00012300) aid_call_pane_cp10

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g1

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g2

0x4b6a,	// (0x00012312) popup_clock_analogue_window_cp10_g3

0x4b6a,	// (0x00012312) popup_clock_analogue_window_cp10_g4

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x0001ceea) popup_clock_analogue_window_cp10_g

0x4b80,	// (0x00012328) popup_clock_analogue_window_cp10_t1

0x4bb1,	// (0x00012359) clock_digital_number_pane_cp10_ParamLimits

0x4bb1,	// (0x00012359) clock_digital_number_pane_cp10

0x4bc9,	// (0x00012371) clock_digital_number_pane_cp11_ParamLimits

0x4bc9,	// (0x00012371) clock_digital_number_pane_cp11

0x4be1,	// (0x00012389) clock_digital_number_pane_cp12_ParamLimits

0x4be1,	// (0x00012389) clock_digital_number_pane_cp12

0x4bfb,	// (0x000123a3) clock_digital_number_pane_cp13_ParamLimits

0x4bfb,	// (0x000123a3) clock_digital_number_pane_cp13

0x4c15,	// (0x000123bd) clock_digital_separator_pane_cp10_ParamLimits

0x4c15,	// (0x000123bd) clock_digital_separator_pane_cp10

0x4c2f,	// (0x000123d7) popup_clock_digital_window_cp02_t1_ParamLimits

0x4c2f,	// (0x000123d7) popup_clock_digital_window_cp02_t1

0x99ea,	// (0x00017192) clock_digital_number_pane_cp10_g1

0x99ea,	// (0x00017192) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x0001cf05) clock_digital_number_pane_cp10_g

0x99ea,	// (0x00017192) clock_digital_separator_pane_cp10_g1

0x99ea,	// (0x00017192) clock_digital_separator_pane_g2_cp10

0xa806,	// (0x00017fae) navi_pane_vded_g4

0xa80f,	// (0x00017fb7) navi_pane_vded_g5

0xa818,	// (0x00017fc0) navi_pane_vded_t1

0x9307,	// (0x00016aaf) main_vded_pane

0x4d5c,	// (0x00012504) main_vded_pane_g1

0x4d66,	// (0x0001250e) main_vded_pane_g2

0x4d70,	// (0x00012518) main_vded_pane_g3

0x0002,

0xf762,	// (0x0001cf0a) main_vded_pane_g

0x4d7a,	// (0x00012522) main_vded_pane_t1

0x4d88,	// (0x00012530) main_vded_pane_t2

0x0001,

0xf769,	// (0x0001cf11) main_vded_pane_t

0x4d96,	// (0x0001253e) vded_slider_pane

0x4d9e,	// (0x00012546) vded_video_pane

0xc6a4,	// (0x00019e4c) vded_video_pane_g1

0x4da6,	// (0x0001254e) vded_video_pane_g2

0x9d86,	// (0x0001752e) vded_video_pane_g3

0x0002,

0xf76e,	// (0x0001cf16) vded_video_pane_g

0xc6ae,	// (0x00019e56) vded_slider_pane_g1

0xbeb4,	// (0x0001965c) vded_slider_pane_g2

0xc6b7,	// (0x00019e5f) vded_slider_pane_g3

0xc6c0,	// (0x00019e68) vded_slider_pane_g4

0xc6c9,	// (0x00019e71) vded_slider_pane_g5

0x0004,

0xf775,	// (0x0001cf1d) vded_slider_pane_g

0x4867,	// (0x0001200f) mup3_rocker_pane_ParamLimits

0x4867,	// (0x0001200f) mup3_rocker_pane

0x4daf,	// (0x00012557) mup3_control_keys_pane_g1

0x4db7,	// (0x0001255f) mup3_control_keys_pane_g2

0x4dbf,	// (0x00012567) mup3_control_keys_pane_g3

0x4dc7,	// (0x0001256f) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x0001cf28) mup3_control_keys_pane_g

0x101c,	// (0x0000e7c4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x101c,	// (0x0000e7c4) popup_toolbar2_fixed_window_cp01

0x489b,	// (0x00012043) popup_toolbar2_fixed_window_cp02_ParamLimits

0x489b,	// (0x00012043) popup_toolbar2_fixed_window_cp02

0xb0b7,	// (0x0001885f) popup_call2_audio_second_window_t4_ParamLimits

0xb0b7,	// (0x0001885f) popup_call2_audio_second_window_t4

0xb5f3,	// (0x00018d9b) popup_call2_audio_first_window_t6_ParamLimits

0xb5f3,	// (0x00018d9b) popup_call2_audio_first_window_t6

0xb831,	// (0x00018fd9) popup_call2_audio_out_window_t6_ParamLimits

0xb831,	// (0x00018fd9) popup_call2_audio_out_window_t6

0x9307,	// (0x00016aaf) main_vitu_pane

0x9376,	// (0x00016b1e) aid_size_cell_itu_ParamLimits

0x9376,	// (0x00016b1e) aid_size_cell_itu

0x9376,	// (0x00016b1e) bg_popup_window_pane_cp08_ParamLimits

0x9376,	// (0x00016b1e) bg_popup_window_pane_cp08

0x9376,	// (0x00016b1e) field_vitu_entry_pane_ParamLimits

0x9376,	// (0x00016b1e) field_vitu_entry_pane

0x9376,	// (0x00016b1e) grid_vitu_function_pane_ParamLimits

0x9376,	// (0x00016b1e) grid_vitu_function_pane

0x9376,	// (0x00016b1e) grid_vitu_itu_pane_ParamLimits

0x9376,	// (0x00016b1e) grid_vitu_itu_pane

0x9376,	// (0x00016b1e) cell_vitu_itu_pane_ParamLimits

0x9376,	// (0x00016b1e) cell_vitu_itu_pane

0x9376,	// (0x00016b1e) cell_vitu_function_pane_ParamLimits

0x9376,	// (0x00016b1e) cell_vitu_function_pane

0x9376,	// (0x00016b1e) bg_popup_sub_pane_cp08_ParamLimits

0x9376,	// (0x00016b1e) bg_popup_sub_pane_cp08

0x9d58,	// (0x00017500) field_vitu_entry_pane_t1_ParamLimits

0x9d58,	// (0x00017500) field_vitu_entry_pane_t1

0xc6d2,	// (0x00019e7a) field_vitu_entry_pane_t2_ParamLimits

0xc6d2,	// (0x00019e7a) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x0001cf31) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x0001cf31) field_vitu_entry_pane_t

0xbddb,	// (0x00019583) bg_button_pane_cp05_ParamLimits

0xbddb,	// (0x00019583) bg_button_pane_cp05

0xc6ef,	// (0x00019e97) cell_vitu_itu_pane_g1

0xa915,	// (0x000180bd) cell_vitu_itu_pane_t1_ParamLimits

0xa915,	// (0x000180bd) cell_vitu_itu_pane_t1

0xa915,	// (0x000180bd) cell_vitu_itu_pane_t2_ParamLimits

0xa915,	// (0x000180bd) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x0001cf36) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x0001cf36) cell_vitu_itu_pane_t

0x9307,	// (0x00016aaf) bg_button_pane_cp07

0x9d86,	// (0x0001752e) cell_vitu_function_pane_g1

0x9aab,	// (0x00017253) main_calc_pane_g1

0x0e43,	// (0x0000e5eb) aid_visual_content_pane

0x9307,	// (0x00016aaf) main_vradio_pane

0x9a6d,	// (0x00017215) main_vradio_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) main_vradio_pane_g1

0x9a7b,	// (0x00017223) main_vradio_pane_g2_ParamLimits

0x9a7b,	// (0x00017223) main_vradio_pane_g2

0x0001,

0xf795,	// (0x0001cf3d) main_vradio_pane_g_ParamLimits

0xf795,	// (0x0001cf3d) main_vradio_pane_g

0x9d58,	// (0x00017500) main_vradio_pane_t1_ParamLimits

0x9d58,	// (0x00017500) main_vradio_pane_t1

0x9d58,	// (0x00017500) main_vradio_pane_t2_ParamLimits

0x9d58,	// (0x00017500) main_vradio_pane_t2

0xa929,	// (0x000180d1) main_vradio_pane_t3_ParamLimits

0xa929,	// (0x000180d1) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x0001cf42) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x0001cf42) main_vradio_pane_t

0x9376,	// (0x00016b1e) vradio_rocker_control_pane_ParamLimits

0x9376,	// (0x00016b1e) vradio_rocker_control_pane

0x9376,	// (0x00016b1e) vradio_station_info_pane_ParamLimits

0x9376,	// (0x00016b1e) vradio_station_info_pane

0x9376,	// (0x00016b1e) vradio_frequency_info_pane_ParamLimits

0x9376,	// (0x00016b1e) vradio_frequency_info_pane

0x9d86,	// (0x0001752e) vradio_station_info_pane_g1

0xa915,	// (0x000180bd) vradio_station_info_pane_t1_ParamLimits

0xa915,	// (0x000180bd) vradio_station_info_pane_t1

0xa929,	// (0x000180d1) vradio_station_info_pane_t2_ParamLimits

0xa929,	// (0x000180d1) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x0001cf49) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x0001cf49) vradio_station_info_pane_t

0x9307,	// (0x00016aaf) vradio_tuning_pane

0x4dd7,	// (0x0001257f) vradio_rocker_control_pane_g1

0xc70b,	// (0x00019eb3) vradio_rocker_control_pane_g2

0x4de1,	// (0x00012589) vradio_rocker_control_pane_g3

0x4deb,	// (0x00012593) vradio_rocker_control_pane_g4

0x4df5,	// (0x0001259d) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x0001cf4e) vradio_rocker_control_pane_g

0x9d86,	// (0x0001752e) vradio_frequency_info_pane_g1

0x9d58,	// (0x00017500) vradio_frequency_info_pane_t1_ParamLimits

0x9d58,	// (0x00017500) vradio_frequency_info_pane_t1

0x4dff,	// (0x000125a7) vradio_tuning_pane_g1

0x4e0c,	// (0x000125b4) vradio_tuning_pane_t1

0x9335,	// (0x00016add) area_side_right_pane_ParamLimits

0x9335,	// (0x00016add) area_side_right_pane

0xbc21,	// (0x000193c9) status_small_pane_g1

0xbc29,	// (0x000193d1) status_small_pane_g2

0xbc32,	// (0x000193da) status_small_pane_g3

0xbc3b,	// (0x000193e3) status_small_pane_g4

0x0003,

0xf572,	// (0x0001cd1a) status_small_pane_g

0xbc44,	// (0x000193ec) status_small_pane_t1

0x9307,	// (0x00016aaf) main_video3_pane

0xc713,	// (0x00019ebb) cams_zoom_vslider_pane

0xc71b,	// (0x00019ec3) image3_wide_pane_ParamLimits

0xc71b,	// (0x00019ec3) image3_wide_pane

0xc735,	// (0x00019edd) image3_wide_small_pane

0xc741,	// (0x00019ee9) main_video3_pane_g1_ParamLimits

0xc741,	// (0x00019ee9) main_video3_pane_g1

0xc75d,	// (0x00019f05) main_video3_pane_g2_ParamLimits

0xc75d,	// (0x00019f05) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x0001cf59) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x0001cf59) main_video3_pane_g

0xc779,	// (0x00019f21) main_video3_pane_t1_ParamLimits

0xc779,	// (0x00019f21) main_video3_pane_t1

0xc7a4,	// (0x00019f4c) main_video3_pane_t2_ParamLimits

0xc7a4,	// (0x00019f4c) main_video3_pane_t2

0xc7cf,	// (0x00019f77) main_video3_pane_t3_ParamLimits

0xc7cf,	// (0x00019f77) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x0001cf5e) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x0001cf5e) main_video3_pane_t

0xc7fc,	// (0x00019fa4) cams_zoom_vslider_pane_g1

0xc805,	// (0x00019fad) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x0001cf65) cams_zoom_vslider_pane_g

0xc80d,	// (0x00019fb5) small_slider_vertical_pane

0x9d86,	// (0x0001752e) small_slider_vertical_pane_g1

0x9d86,	// (0x0001752e) small_slider_vertical_pane_g2

0xc815,	// (0x00019fbd) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x0001cf6a) small_slider_vertical_pane_g

0x9307,	// (0x00016aaf) main_hwr_training_pane

0xc81e,	// (0x00019fc6) hwr_training_instruct_pane_ParamLimits

0xc81e,	// (0x00019fc6) hwr_training_instruct_pane

0x4e1b,	// (0x000125c3) hwr_training_navi_pane_ParamLimits

0x4e1b,	// (0x000125c3) hwr_training_navi_pane

0x4e3a,	// (0x000125e2) hwr_training_write_pane_ParamLimits

0x4e3a,	// (0x000125e2) hwr_training_write_pane

0x9307,	// (0x00016aaf) bg_frame_shadow_pane

0xc855,	// (0x00019ffd) hwr_training_write_pane_g1

0xc85d,	// (0x0001a005) hwr_training_write_pane_g2

0xc865,	// (0x0001a00d) hwr_training_write_pane_g3

0xc86d,	// (0x0001a015) hwr_training_write_pane_g4

0xc875,	// (0x0001a01d) hwr_training_write_pane_g5

0xc87d,	// (0x0001a025) hwr_training_write_pane_g6

0xc885,	// (0x0001a02d) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x0001cf71) hwr_training_write_pane_g

0xc88d,	// (0x0001a035) hwr_training_navi_pane_g1_ParamLimits

0xc88d,	// (0x0001a035) hwr_training_navi_pane_g1

0xc89f,	// (0x0001a047) hwr_training_navi_pane_g2_ParamLimits

0xc89f,	// (0x0001a047) hwr_training_navi_pane_g2

0xc8b1,	// (0x0001a059) hwr_training_navi_pane_g3_ParamLimits

0xc8b1,	// (0x0001a059) hwr_training_navi_pane_g3

0xc8c1,	// (0x0001a069) hwr_training_navi_pane_g4_ParamLimits

0xc8c1,	// (0x0001a069) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x0001cf80) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x0001cf80) hwr_training_navi_pane_g

0xc8ce,	// (0x0001a076) hwr_training_navi_pane_t1

0x4e82,	// (0x0001262a) list_single_hwr_training_instruct_pane_ParamLimits

0x4e82,	// (0x0001262a) list_single_hwr_training_instruct_pane

0xc8dc,	// (0x0001a084) list_single_hwr_training_instruct_pane_t1

0xc08a,	// (0x00019832) bg_frame_shadow_pane_g1

0xc8eb,	// (0x0001a093) bg_frame_shadow_pane_g2

0xc8f3,	// (0x0001a09b) bg_frame_shadow_pane_g3

0xc8fb,	// (0x0001a0a3) bg_frame_shadow_pane_g4

0xc903,	// (0x0001a0ab) bg_frame_shadow_pane_g5

0xc90b,	// (0x0001a0b3) bg_frame_shadow_pane_g6

0xc913,	// (0x0001a0bb) bg_frame_shadow_pane_g7

0x9bdd,	// (0x00017385) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x0001cf8b) bg_frame_shadow_pane_g

0x9307,	// (0x00016aaf) main_video_tele_dialer_pane

0x4e97,	// (0x0001263f) aid_size_cell_video_keypad_ParamLimits

0x4e97,	// (0x0001263f) aid_size_cell_video_keypad

0x4eb1,	// (0x00012659) grid_video_dialer_keypad_pane_ParamLimits

0x4eb1,	// (0x00012659) grid_video_dialer_keypad_pane

0x4efd,	// (0x000126a5) video_down_pane_cp_ParamLimits

0x4efd,	// (0x000126a5) video_down_pane_cp

0x4f2f,	// (0x000126d7) cell_video_dialer_keypad_pane_ParamLimits

0x4f2f,	// (0x000126d7) cell_video_dialer_keypad_pane

0xc91b,	// (0x0001a0c3) bg_button_pane_cp08_ParamLimits

0xc91b,	// (0x0001a0c3) bg_button_pane_cp08

0x4f51,	// (0x000126f9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4f51,	// (0x000126f9) cell_video_dialer_keypad_pane_g1

0x4851,	// (0x00011ff9) mup3_rocker2_pane_ParamLimits

0x4851,	// (0x00011ff9) mup3_rocker2_pane

0x9d86,	// (0x0001752e) mup3_rocker2_pane_g1

0x3ac4,	// (0x0001126c) main_dialer2_pane

0x9307,	// (0x00016aaf) main_mp4_pane

0xc945,	// (0x0001a0ed) main_mp4_pane_g1_ParamLimits

0xc945,	// (0x0001a0ed) main_mp4_pane_g1

0xc945,	// (0x0001a0ed) main_mp4_pane_g2_ParamLimits

0xc945,	// (0x0001a0ed) main_mp4_pane_g2

0x4f88,	// (0x00012730) main_mp4_pane_g3_ParamLimits

0x4f88,	// (0x00012730) main_mp4_pane_g3

0xc953,	// (0x0001a0fb) main_mp4_pane_g4_ParamLimits

0xc953,	// (0x0001a0fb) main_mp4_pane_g4

0xc981,	// (0x0001a129) main_mp4_pane_g5_ParamLimits

0xc981,	// (0x0001a129) main_mp4_pane_g5

0x0007,

0xf803,	// (0x0001cfab) main_mp4_pane_g_ParamLimits

0xf803,	// (0x0001cfab) main_mp4_pane_g

0xc9f5,	// (0x0001a19d) main_mp4_pane_t1_ParamLimits

0xc9f5,	// (0x0001a19d) main_mp4_pane_t1

0xca51,	// (0x0001a1f9) main_mp4_pane_t2_ParamLimits

0xca51,	// (0x0001a1f9) main_mp4_pane_t2

0xcaa3,	// (0x0001a24b) main_mp4_pane_t3_ParamLimits

0xcaa3,	// (0x0001a24b) main_mp4_pane_t3

0xcac9,	// (0x0001a271) main_mp4_pane_t4_ParamLimits

0xcac9,	// (0x0001a271) main_mp4_pane_t4

0x0003,

0xf814,	// (0x0001cfbc) main_mp4_pane_t_ParamLimits

0xf814,	// (0x0001cfbc) main_mp4_pane_t

0xcb0d,	// (0x0001a2b5) mp4_progress_pane_ParamLimits

0xcb0d,	// (0x0001a2b5) mp4_progress_pane

0xcb57,	// (0x0001a2ff) mp4_rocker_pane_ParamLimits

0xcb57,	// (0x0001a2ff) mp4_rocker_pane

0xcb7f,	// (0x0001a327) mp4_progress_pane_t1

0xcb98,	// (0x0001a340) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x0001cfc5) mp4_progress_pane_t

0xcbb1,	// (0x0001a359) mup_progress_pane_cp04

0x9d86,	// (0x0001752e) mp4_rocker_pane_g1

0x4fc4,	// (0x0001276c) aid_cell_size_keypad2_ParamLimits

0x4fc4,	// (0x0001276c) aid_cell_size_keypad2

0x4fda,	// (0x00012782) dialer2_ne_pane_ParamLimits

0x4fda,	// (0x00012782) dialer2_ne_pane

0x4ff4,	// (0x0001279c) grid_dialer2_keypad_pane_ParamLimits

0x4ff4,	// (0x0001279c) grid_dialer2_keypad_pane

0xbddb,	// (0x00019583) bg_popup_call_pane_cp07_ParamLimits

0xbddb,	// (0x00019583) bg_popup_call_pane_cp07

0x5010,	// (0x000127b8) dialer2_ne_pane_t1_ParamLimits

0x5010,	// (0x000127b8) dialer2_ne_pane_t1

0x504b,	// (0x000127f3) cell_dialer2_keypad_pane_ParamLimits

0x504b,	// (0x000127f3) cell_dialer2_keypad_pane

0xcbd6,	// (0x0001a37e) bg_button_pane_pane_cp04_ParamLimits

0xcbd6,	// (0x0001a37e) bg_button_pane_pane_cp04

0x506d,	// (0x00012815) cell_dialer2_keypad_pane_g1_ParamLimits

0x506d,	// (0x00012815) cell_dialer2_keypad_pane_g1

0x1bbe,	// (0x0000f366) aid_placing_vt_set_content_ParamLimits

0x1bbe,	// (0x0000f366) aid_placing_vt_set_content

0x1be6,	// (0x0000f38e) aid_placing_vt_set_title_ParamLimits

0x1be6,	// (0x0000f38e) aid_placing_vt_set_title

0x9307,	// (0x00016aaf) main_image3_pane

0x5133,	// (0x000128db) area_side_right_pane_cp01_ParamLimits

0x5133,	// (0x000128db) area_side_right_pane_cp01

0xc945,	// (0x0001a0ed) main_image3_pane_g1_ParamLimits

0xc945,	// (0x0001a0ed) main_image3_pane_g1

0x514a,	// (0x000128f2) main_image3_pane_g2_ParamLimits

0x514a,	// (0x000128f2) main_image3_pane_g2

0x5172,	// (0x0001291a) main_image3_pane_g3_ParamLimits

0x5172,	// (0x0001291a) main_image3_pane_g3

0x519c,	// (0x00012944) main_image3_pane_g4_ParamLimits

0x519c,	// (0x00012944) main_image3_pane_g4

0x0003,

0xf82c,	// (0x0001cfd4) main_image3_pane_g_ParamLimits

0xf82c,	// (0x0001cfd4) main_image3_pane_g

0x51c6,	// (0x0001296e) main_image3_pane_t1_ParamLimits

0x51c6,	// (0x0001296e) main_image3_pane_t1

0x521e,	// (0x000129c6) main_image3_pane_t2_ParamLimits

0x521e,	// (0x000129c6) main_image3_pane_t2

0x5270,	// (0x00012a18) main_image3_pane_t3_ParamLimits

0x5270,	// (0x00012a18) main_image3_pane_t3

0x0003,

0xf835,	// (0x0001cfdd) main_image3_pane_t_ParamLimits

0xf835,	// (0x0001cfdd) main_image3_pane_t

0x9376,	// (0x00016b1e) grid_sctrl_middle_pane_cp01_ParamLimits

0x9376,	// (0x00016b1e) grid_sctrl_middle_pane_cp01

0x52f8,	// (0x00012aa0) cell_sctrl_middle_pane_cp01_ParamLimits

0x52f8,	// (0x00012aa0) cell_sctrl_middle_pane_cp01

0x5315,	// (0x00012abd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5315,	// (0x00012abd) cell_sctrl_middle_pane_cp01_g1

0x9307,	// (0x00016aaf) main_call4_pane

0x532b,	// (0x00012ad3) aid_size_button_call4_ParamLimits

0x532b,	// (0x00012ad3) aid_size_button_call4

0x535e,	// (0x00012b06) call4_windows_pane_ParamLimits

0x535e,	// (0x00012b06) call4_windows_pane

0x537d,	// (0x00012b25) grid_call4_button_pane_ParamLimits

0x537d,	// (0x00012b25) grid_call4_button_pane

0x53b0,	// (0x00012b58) call4_windows_conf_pane

0x53c7,	// (0x00012b6f) popup_call4_audio_first_window_ParamLimits

0x53c7,	// (0x00012b6f) popup_call4_audio_first_window

0x5417,	// (0x00012bbf) popup_call4_audio_second_window_ParamLimits

0x5417,	// (0x00012bbf) popup_call4_audio_second_window

0x542e,	// (0x00012bd6) popup_call4_audio_wait_window_ParamLimits

0x542e,	// (0x00012bd6) popup_call4_audio_wait_window

0x543c,	// (0x00012be4) cell_call4_button_pane_ParamLimits

0x543c,	// (0x00012be4) cell_call4_button_pane

0x5461,	// (0x00012c09) bg_button_pane_cp09_ParamLimits

0x5461,	// (0x00012c09) bg_button_pane_cp09

0x546d,	// (0x00012c15) cell_call4_button_pane_g1_ParamLimits

0x546d,	// (0x00012c15) cell_call4_button_pane_g1

0x5493,	// (0x00012c3b) cell_call4_button_pane_t1_ParamLimits

0x5493,	// (0x00012c3b) cell_call4_button_pane_t1

0xcc4e,	// (0x0001a3f6) popup_call4_audio_conf_window_ParamLimits

0xcc4e,	// (0x0001a3f6) popup_call4_audio_conf_window

0x48b1,	// (0x00012059) mup3_progress_pane_t1_ParamLimits

0x48d0,	// (0x00012078) mup3_progress_pane_t2_ParamLimits

0xc3e2,	// (0x00019b8a) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x0001ceb2) mup3_progress_pane_t_ParamLimits

0xc3ff,	// (0x00019ba7) mup_progress_pane_cp03_ParamLimits

0x4dcf,	// (0x00012577) mup3_control_keys_pane_g4_copy1

0xcb3b,	// (0x0001a2e3) mp4_rocker2_pane_ParamLimits

0xcb3b,	// (0x0001a2e3) mp4_rocker2_pane

0xcc62,	// (0x0001a40a) mp4_rocker2_pane_g1

0xcc6a,	// (0x0001a412) mp4_rocker2_pane_g2

0xcc72,	// (0x0001a41a) mp4_rocker2_pane_g3

0xcc7a,	// (0x0001a422) mp4_rocker2_pane_g4

0xcc82,	// (0x0001a42a) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x0001cfe6) mp4_rocker2_pane_g

0x9307,	// (0x00016aaf) main_camera4_pane

0x9307,	// (0x00016aaf) main_video4_pane

0x4ecb,	// (0x00012673) main_video_tele_dialer_pane_t1_ParamLimits

0x4ecb,	// (0x00012673) main_video_tele_dialer_pane_t1

0x4ee4,	// (0x0001268c) main_video_tele_dialer_pane_t2_ParamLimits

0x4ee4,	// (0x0001268c) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x0001cf9c) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x0001cf9c) main_video_tele_dialer_pane_t

0x54d1,	// (0x00012c79) cam4_autofocus_pane_ParamLimits

0x54d1,	// (0x00012c79) cam4_autofocus_pane

0x54e7,	// (0x00012c8f) cam4_image_uncrop_pane_ParamLimits

0x54e7,	// (0x00012c8f) cam4_image_uncrop_pane

0x5501,	// (0x00012ca9) cam4_indicators_pane_ParamLimits

0x5501,	// (0x00012ca9) cam4_indicators_pane

0x552c,	// (0x00012cd4) main_camera4_pane_g1_ParamLimits

0x552c,	// (0x00012cd4) main_camera4_pane_g1

0x553e,	// (0x00012ce6) main_camera4_pane_g2_ParamLimits

0x553e,	// (0x00012ce6) main_camera4_pane_g2

0x5551,	// (0x00012cf9) main_camera4_pane_g3_ParamLimits

0x5551,	// (0x00012cf9) main_camera4_pane_g3

0x5564,	// (0x00012d0c) main_camera4_pane_g4_ParamLimits

0x5564,	// (0x00012d0c) main_camera4_pane_g4

0x5577,	// (0x00012d1f) main_camera4_pane_g5_ParamLimits

0x5577,	// (0x00012d1f) main_camera4_pane_g5

0x0005,

0xf849,	// (0x0001cff1) main_camera4_pane_g_ParamLimits

0xf849,	// (0x0001cff1) main_camera4_pane_g

0x559b,	// (0x00012d43) main_camera4_pane_t1_ParamLimits

0x559b,	// (0x00012d43) main_camera4_pane_t1

0x9a6d,	// (0x00017215) bg_tb_trans_pane_cp06

0xccc8,	// (0x0001a470) cam4_indicators_pane_g1

0xccd9,	// (0x0001a481) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x0001d00c) cam4_indicators_pane_g

0xccf7,	// (0x0001a49f) cam4_indicators_pane_t1

0x55ff,	// (0x00012da7) main_video4_pane_g1_ParamLimits

0x55ff,	// (0x00012da7) main_video4_pane_g1

0x560e,	// (0x00012db6) main_video4_pane_g2_ParamLimits

0x560e,	// (0x00012db6) main_video4_pane_g2

0x561d,	// (0x00012dc5) main_video4_pane_g3_ParamLimits

0x561d,	// (0x00012dc5) main_video4_pane_g3

0x562c,	// (0x00012dd4) main_video4_pane_g4_ParamLimits

0x562c,	// (0x00012dd4) main_video4_pane_g4

0x0004,

0xf86b,	// (0x0001d013) main_video4_pane_g_ParamLimits

0xf86b,	// (0x0001d013) main_video4_pane_g

0x564a,	// (0x00012df2) vid4_indicators_pane_ParamLimits

0x564a,	// (0x00012df2) vid4_indicators_pane

0x5678,	// (0x00012e20) video4_image_uncrop_cif_pane_ParamLimits

0x5678,	// (0x00012e20) video4_image_uncrop_cif_pane

0x5692,	// (0x00012e3a) video4_image_uncrop_nhd_pane_ParamLimits

0x5692,	// (0x00012e3a) video4_image_uncrop_nhd_pane

0x54e7,	// (0x00012c8f) video4_image_uncrop_vga_pane_ParamLimits

0x54e7,	// (0x00012c8f) video4_image_uncrop_vga_pane

0x9376,	// (0x00016b1e) bg_tb_trans_pane_cp07

0xcd23,	// (0x0001a4cb) vid4_indicators_pane_g1

0xcd37,	// (0x0001a4df) vid4_indicators_pane_g2

0xcd4b,	// (0x0001a4f3) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x0001d01e) vid4_indicators_pane_g

0xcd7a,	// (0x0001a522) vid4_indicators_pane_t1

0x56a6,	// (0x00012e4e) cam4_autofocus_pane_g1

0x56ae,	// (0x00012e56) cam4_autofocus_pane_g2

0x56b6,	// (0x00012e5e) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x0001d029) cam4_autofocus_pane_g

0x56be,	// (0x00012e66) cam4_autofocus_pane_g3_copy1

0x4f13,	// (0x000126bb) video_down_pane_cp_t1

0x4f21,	// (0x000126c9) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x0001cfa1) video_down_pane_cp_t

0x9376,	// (0x00016b1e) popup_vitu2_window_ParamLimits

0x9376,	// (0x00016b1e) popup_vitu2_window

0x56c6,	// (0x00012e6e) aid_size_cell2_itu2_ParamLimits

0x56c6,	// (0x00012e6e) aid_size_cell2_itu2

0x56ec,	// (0x00012e94) aid_size_cell_itu2_ParamLimits

0x56ec,	// (0x00012e94) aid_size_cell_itu2

0x495a,	// (0x00012102) bg_popup_window_pane_cp09_ParamLimits

0x495a,	// (0x00012102) bg_popup_window_pane_cp09

0x5748,	// (0x00012ef0) field_vitu2_entry_pane_ParamLimits

0x5748,	// (0x00012ef0) field_vitu2_entry_pane

0x576e,	// (0x00012f16) grid_vitu2_function_pane_ParamLimits

0x576e,	// (0x00012f16) grid_vitu2_function_pane

0x57bf,	// (0x00012f67) grid_vitu2_itu_pane_ParamLimits

0x57bf,	// (0x00012f67) grid_vitu2_itu_pane

0x5855,	// (0x00012ffd) cell_vitu2_itu_pane_ParamLimits

0x5855,	// (0x00012ffd) cell_vitu2_itu_pane

0x5881,	// (0x00013029) cell_vitu2_function_pane_ParamLimits

0x5881,	// (0x00013029) cell_vitu2_function_pane

0xcd91,	// (0x0001a539) bg_popup_call_pane_cp08_ParamLimits

0xcd91,	// (0x0001a539) bg_popup_call_pane_cp08

0xcda8,	// (0x0001a550) field_vitu2_entry_pane_g1

0xcdb4,	// (0x0001a55c) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x0001d030) field_vitu2_entry_pane_g

0x58c0,	// (0x00013068) field_vitu2_entry_pane_t1_ParamLimits

0x58c0,	// (0x00013068) field_vitu2_entry_pane_t1

0xcdc0,	// (0x0001a568) field_vitu2_entry_pane_t2_ParamLimits

0xcdc0,	// (0x0001a568) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x0001d037) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x0001d037) field_vitu2_entry_pane_t

0x58ef,	// (0x00013097) bg_button_pane_cp010_ParamLimits

0x58ef,	// (0x00013097) bg_button_pane_cp010

0x58fd,	// (0x000130a5) cell_vitu2_itu_pane_g1

0x5923,	// (0x000130cb) cell_vitu2_itu_pane_t1_ParamLimits

0x5923,	// (0x000130cb) cell_vitu2_itu_pane_t1

0x5981,	// (0x00013129) cell_vitu2_itu_pane_t2_ParamLimits

0x5981,	// (0x00013129) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x0001d041) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x0001d041) cell_vitu2_itu_pane_t

0x9376,	// (0x00016b1e) bg_button_pane_cp011

0x5a6d,	// (0x00013215) cell_vitu2_function_pane_g1

0x9307,	// (0x00016aaf) main_myfav_hc_pane

0x52c0,	// (0x00012a68) popup_image3_note_pane_ParamLimits

0x52c0,	// (0x00012a68) popup_image3_note_pane

0x52dc,	// (0x00012a84) popup_image3_tool_bar_pane_ParamLimits

0x52dc,	// (0x00012a84) popup_image3_tool_bar_pane

0x5a0f,	// (0x000131b7) cell_vitu2_itu_pane_t3_ParamLimits

0x5a0f,	// (0x000131b7) cell_vitu2_itu_pane_t3

0x9307,	// (0x00016aaf) bg_popup_trans_pane

0xcde5,	// (0x0001a58d) grid_image3_tool_bar_pane

0xcdef,	// (0x0001a597) bg_popup_trans_pane_g1

0x9f97,	// (0x0001773f) bg_popup_trans_pane_g2

0xcdf7,	// (0x0001a59f) bg_popup_trans_pane_g3

0xcdff,	// (0x0001a5a7) bg_popup_trans_pane_g4

0xce07,	// (0x0001a5af) bg_popup_trans_pane_g5

0xce0f,	// (0x0001a5b7) bg_popup_trans_pane_g6

0xce17,	// (0x0001a5bf) bg_popup_trans_pane_g7

0xce1f,	// (0x0001a5c7) bg_popup_trans_pane_g8

0x9f77,	// (0x0001771f) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x0001d048) bg_popup_trans_pane_g

0xce27,	// (0x0001a5cf) cell_image3_tool_bar_pane_ParamLimits

0xce27,	// (0x0001a5cf) cell_image3_tool_bar_pane

0x9d86,	// (0x0001752e) cell_image3_tool_bar_pane_g1

0x9307,	// (0x00016aaf) bg_popup_trans_pane_cp1

0xce3b,	// (0x0001a5e3) popup_image3_note_pane_t1

0xce49,	// (0x0001a5f1) popup_image3_note_pane_t2

0xce57,	// (0x0001a5ff) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x0001d05b) popup_image3_note_pane_t

0xce65,	// (0x0001a60d) popup_image3_note_pane_t3_copy1

0x5a81,	// (0x00013229) bg_myfav_hc_instruction_pane_ParamLimits

0x5a81,	// (0x00013229) bg_myfav_hc_instruction_pane

0x5a95,	// (0x0001323d) cell_myfav_contact_pane_ParamLimits

0x5a95,	// (0x0001323d) cell_myfav_contact_pane

0x5ab3,	// (0x0001325b) cell_myfav_contact_pane_cp1_ParamLimits

0x5ab3,	// (0x0001325b) cell_myfav_contact_pane_cp1

0x5acb,	// (0x00013273) cell_myfav_contact_pane_cp2_ParamLimits

0x5acb,	// (0x00013273) cell_myfav_contact_pane_cp2

0x5ae3,	// (0x0001328b) cell_myfav_contact_pane_cp3_ParamLimits

0x5ae3,	// (0x0001328b) cell_myfav_contact_pane_cp3

0x5afa,	// (0x000132a2) cell_myfav_contact_pane_cp4_ParamLimits

0x5afa,	// (0x000132a2) cell_myfav_contact_pane_cp4

0x5b12,	// (0x000132ba) cell_myfav_contact_pane_cp5_ParamLimits

0x5b12,	// (0x000132ba) cell_myfav_contact_pane_cp5

0x5b26,	// (0x000132ce) cell_myfav_contact_pane_cp6_ParamLimits

0x5b26,	// (0x000132ce) cell_myfav_contact_pane_cp6

0x5b3c,	// (0x000132e4) cell_myfav_contact_pane_cp7_ParamLimits

0x5b3c,	// (0x000132e4) cell_myfav_contact_pane_cp7

0xce73,	// (0x0001a61b) listscroll_gen_pane_cp05

0x5b56,	// (0x000132fe) main_myfav_hc_pane_g1_ParamLimits

0x5b56,	// (0x000132fe) main_myfav_hc_pane_g1

0x5b70,	// (0x00013318) main_myfav_hc_pane_g2_ParamLimits

0x5b70,	// (0x00013318) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x0001d062) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x0001d062) main_myfav_hc_pane_g

0x5ba2,	// (0x0001334a) main_myfav_hc_pane_t1_ParamLimits

0x5ba2,	// (0x0001334a) main_myfav_hc_pane_t1

0xce7c,	// (0x0001a624) main_myfav_hc_pane_t2_ParamLimits

0xce7c,	// (0x0001a624) main_myfav_hc_pane_t2

0xce8e,	// (0x0001a636) main_myfav_hc_pane_t3_ParamLimits

0xce8e,	// (0x0001a636) main_myfav_hc_pane_t3

0x5bb9,	// (0x00013361) main_myfav_hc_pane_t4_ParamLimits

0x5bb9,	// (0x00013361) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x0001d069) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x0001d069) main_myfav_hc_pane_t

0x9d86,	// (0x0001752e) bg_myfav_hc_instruction_pane_g1

0xcea0,	// (0x0001a648) cell_myfav_contact_pane_g1_ParamLimits

0xcea0,	// (0x0001a648) cell_myfav_contact_pane_g1

0xcea0,	// (0x0001a648) cell_myfav_contact_pane_g2_ParamLimits

0xcea0,	// (0x0001a648) cell_myfav_contact_pane_g2

0xceac,	// (0x0001a654) cell_myfav_contact_pane_g3_ParamLimits

0xceac,	// (0x0001a654) cell_myfav_contact_pane_g3

0x9a7b,	// (0x00017223) cell_myfav_contact_pane_g4_ParamLimits

0x9a7b,	// (0x00017223) cell_myfav_contact_pane_g4

0xceb9,	// (0x0001a661) cell_myfav_contact_pane_g5_ParamLimits

0xceb9,	// (0x0001a661) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x0001d074) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x0001d074) cell_myfav_contact_pane_g

0x5b8a,	// (0x00013332) main_myfav_hc_pane_g3_ParamLimits

0x5b8a,	// (0x00013332) main_myfav_hc_pane_g3

0x0f7e,	// (0x0000e726) popup_adpt_find_window

0x5be1,	// (0x00013389) afind_page_pane_ParamLimits

0x5be1,	// (0x00013389) afind_page_pane

0x5bf6,	// (0x0001339e) aid_size_cell_afind_ParamLimits

0x5bf6,	// (0x0001339e) aid_size_cell_afind

0x5c14,	// (0x000133bc) bg_popup_sub_pane_cp09_ParamLimits

0x5c14,	// (0x000133bc) bg_popup_sub_pane_cp09

0x5c21,	// (0x000133c9) find_pane_cp01_ParamLimits

0x5c21,	// (0x000133c9) find_pane_cp01

0xcec5,	// (0x0001a66d) grid_afind_control_pane_ParamLimits

0xcec5,	// (0x0001a66d) grid_afind_control_pane

0x5c2e,	// (0x000133d6) grid_afind_pane_ParamLimits

0x5c2e,	// (0x000133d6) grid_afind_pane

0x5c50,	// (0x000133f8) cell_afind_pane_ParamLimits

0x5c50,	// (0x000133f8) cell_afind_pane

0x9d86,	// (0x0001752e) afind_page_pane_g1

0x5cb7,	// (0x0001345f) afind_page_pane_g2

0x5cc0,	// (0x00013468) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x0001d07f) afind_page_pane_g

0x5cc9,	// (0x00013471) afind_page_pane_t1

0xced9,	// (0x0001a681) cell_afind_grid_control_pane_ParamLimits

0xced9,	// (0x0001a681) cell_afind_grid_control_pane

0xcbd6,	// (0x0001a37e) bg_button_pane_cp69_ParamLimits

0xcbd6,	// (0x0001a37e) bg_button_pane_cp69

0x5ce9,	// (0x00013491) cell_afind_pane_g1_ParamLimits

0x5ce9,	// (0x00013491) cell_afind_pane_g1

0x5cf6,	// (0x0001349e) cell_afind_pane_t1_ParamLimits

0x5cf6,	// (0x0001349e) cell_afind_pane_t1

0x9d90,	// (0x00017538) bg_button_pane_cp72

0xcee8,	// (0x0001a690) cell_afind_grid_control_pane_g1

0x3543,	// (0x00010ceb) aid_image_placing_area_ParamLimits

0x3543,	// (0x00010ceb) aid_image_placing_area

0x9a6d,	// (0x00017215) field_vitu_entry_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) field_vitu_entry_pane_g1

0x9a6d,	// (0x00017215) field_vitu_entry_pane_g2_ParamLimits

0x9a6d,	// (0x00017215) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0001c98f) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0001c98f) field_vitu_entry_pane_g

0xc6ef,	// (0x00019e97) cell_vitu_itu_pane_g1_ParamLimits

0xc6d2,	// (0x00019e7a) cell_vitu_itu_pane_t3_ParamLimits

0xc6d2,	// (0x00019e7a) cell_vitu_itu_pane_t3

0xcb7f,	// (0x0001a327) mp4_progress_pane_t1_ParamLimits

0xcb98,	// (0x0001a340) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x0001cfc5) mp4_progress_pane_t_ParamLimits

0xcbb1,	// (0x0001a359) mup_progress_pane_cp04_ParamLimits

0x5bcd,	// (0x00013375) main_myfav_hc_pane_t5_ParamLimits

0x5bcd,	// (0x00013375) main_myfav_hc_pane_t5

0x932d,	// (0x00016ad5) aid_zoom_text_primary

0x0f7e,	// (0x0000e726) popup_adpt_find_window_ParamLimits

0x9376,	// (0x00016b1e) main_cam_set_pane

0x5518,	// (0x00012cc0) cam4_zoom_pane_ParamLimits

0x5518,	// (0x00012cc0) cam4_zoom_pane

0x5d08,	// (0x000134b0) main_cam_set_pane_g1_ParamLimits

0x5d08,	// (0x000134b0) main_cam_set_pane_g1

0x5d16,	// (0x000134be) main_cam_set_pane_g2_ParamLimits

0x5d16,	// (0x000134be) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x0001d086) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x0001d086) main_cam_set_pane_g

0x5d37,	// (0x000134df) main_cam_set_pane_t1_ParamLimits

0x5d37,	// (0x000134df) main_cam_set_pane_t1

0x5d52,	// (0x000134fa) main_cset_listscroll_pane_ParamLimits

0x5d52,	// (0x000134fa) main_cset_listscroll_pane

0x5d78,	// (0x00013520) main_cset_slider_pane_ParamLimits

0x5d78,	// (0x00013520) main_cset_slider_pane

0xcef9,	// (0x0001a6a1) main_cset_list_pane_ParamLimits

0xcef9,	// (0x0001a6a1) main_cset_list_pane

0xcf09,	// (0x0001a6b1) scroll_pane_cp028

0x5d9e,	// (0x00013546) aid_area_touch_slider

0x5dba,	// (0x00013562) cset_slider_pane

0x5ddd,	// (0x00013585) main_cset_slider_pane_g1

0x5df2,	// (0x0001359a) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x0001d08b) main_cset_slider_pane_g

0xcf42,	// (0x0001a6ea) main_cset_slider_pane_t1

0x5eae,	// (0x00013656) main_cset_slider_pane_t2

0x5ec8,	// (0x00013670) main_cset_slider_pane_t3

0x5ee2,	// (0x0001368a) main_cset_slider_pane_t4

0x5efc,	// (0x000136a4) main_cset_slider_pane_t5

0x5f16,	// (0x000136be) main_cset_slider_pane_t6

0x5f2b,	// (0x000136d3) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x0001d0b0) main_cset_slider_pane_t

0x602f,	// (0x000137d7) cset_list_set_pane_ParamLimits

0x602f,	// (0x000137d7) cset_list_set_pane

0xcfdc,	// (0x0001a784) aid_position_infowindow_above

0xcfe4,	// (0x0001a78c) aid_position_infowindow_below

0xcfec,	// (0x0001a794) cset_list_set_pane_g1_ParamLimits

0xcfec,	// (0x0001a794) cset_list_set_pane_g1

0xcff8,	// (0x0001a7a0) cset_list_set_pane_g3_ParamLimits

0xcff8,	// (0x0001a7a0) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x0001d0cf) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x0001d0cf) cset_list_set_pane_g

0xd007,	// (0x0001a7af) cset_list_set_pane_t1_ParamLimits

0xd007,	// (0x0001a7af) cset_list_set_pane_t1

0x9376,	// (0x00016b1e) list_highlight_pane_cp021_ParamLimits

0x9376,	// (0x00016b1e) list_highlight_pane_cp021

0xa9ad,	// (0x00018155) cset_slider_pane_g1

0xa9bf,	// (0x00018167) cset_slider_pane_g2

0xa9b6,	// (0x0001815e) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x0001d0d4) cset_slider_pane_g

0xd01c,	// (0x0001a7c4) aid_area_touch_cam4_zoom

0xd024,	// (0x0001a7cc) cam4_zoom_cont_pane

0xd02c,	// (0x0001a7d4) cam4_zoom_pane_g1

0xd034,	// (0x0001a7dc) cam4_zoom_pane_g2

0x6041,	// (0x000137e9) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x0001d0db) cam4_zoom_pane_g

0xd03c,	// (0x0001a7e4) cam4_zoom_cont_pane_g1

0xd045,	// (0x0001a7ed) cam4_zoom_cont_pane_g2

0xd04e,	// (0x0001a7f6) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x0001d0e2) cam4_zoom_cont_pane_g

0x5349,	// (0x00012af1) call4_image_pane_ParamLimits

0x5349,	// (0x00012af1) call4_image_pane

0x53b0,	// (0x00012b58) call4_windows_conf_pane_ParamLimits

0x53f5,	// (0x00012b9d) popup_call4_audio_in_window_ParamLimits

0x53f5,	// (0x00012b9d) popup_call4_audio_in_window

0x9307,	// (0x00016aaf) bg_popup_call2_act_pane_cp02

0xcc46,	// (0x0001a3ee) call4_list_conf_pane

0x9d86,	// (0x0001752e) call4_image_pane_g1

0x9d86,	// (0x0001752e) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) call4_image_pane_g

0xd057,	// (0x0001a7ff) list_single_graphic_popup_conf4_pane_ParamLimits

0xd057,	// (0x0001a7ff) list_single_graphic_popup_conf4_pane

0x9307,	// (0x00016aaf) list_highlight_pane_cp022

0xd06a,	// (0x0001a812) list_single_graphic_popup_conf4_pane_g1

0xa54b,	// (0x00017cf3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x0001d0e9) list_single_graphic_popup_conf4_pane_g

0xd072,	// (0x0001a81a) list_single_graphic_popup_conf4_pane_t1

0x1d0a,	// (0x0000f4b2) popup_vtel_slider_window_ParamLimits

0x1d0a,	// (0x0000f4b2) popup_vtel_slider_window

0xcbc4,	// (0x0001a36c) dialer2_ne_pane_t2_ParamLimits

0xcbc4,	// (0x0001a36c) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x0001cfca) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x0001cfca) dialer2_ne_pane_t

0xbddb,	// (0x00019583) bg_popup_sub_pane_cp010_ParamLimits

0xbddb,	// (0x00019583) bg_popup_sub_pane_cp010

0x6049,	// (0x000137f1) popup_vtel_slider_window_g1_ParamLimits

0x6049,	// (0x000137f1) popup_vtel_slider_window_g1

0x605c,	// (0x00013804) popup_vtel_slider_window_g2_ParamLimits

0x605c,	// (0x00013804) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x0001d0ee) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x0001d0ee) popup_vtel_slider_window_g

0x60b2,	// (0x0001385a) vtel_slider_pane_ParamLimits

0x60b2,	// (0x0001385a) vtel_slider_pane

0x60d4,	// (0x0001387c) vtel_slider_pane_g1_ParamLimits

0x60d4,	// (0x0001387c) vtel_slider_pane_g1

0x60e8,	// (0x00013890) vtel_slider_pane_g2_ParamLimits

0x60e8,	// (0x00013890) vtel_slider_pane_g2

0x6100,	// (0x000138a8) vtel_slider_pane_g3_ParamLimits

0x6100,	// (0x000138a8) vtel_slider_pane_g3

0x60d4,	// (0x0001387c) vtel_slider_pane_g4_ParamLimits

0x60d4,	// (0x0001387c) vtel_slider_pane_g4

0x6116,	// (0x000138be) vtel_slider_pane_g5_ParamLimits

0x6116,	// (0x000138be) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x0001d0f7) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x0001d0f7) vtel_slider_pane_g

0x9376,	// (0x00016b1e) main_gallery2_pane

0x5718,	// (0x00012ec0) aid_size_row_itut2_dropdow_list_ParamLimits

0x5718,	// (0x00012ec0) aid_size_row_itut2_dropdow_list

0x5796,	// (0x00012f3e) grid_vitu2_function_top_pane_ParamLimits

0x5796,	// (0x00012f3e) grid_vitu2_function_top_pane

0x5800,	// (0x00012fa8) popup_vitu2_dropdown_list_window_ParamLimits

0x5800,	// (0x00012fa8) popup_vitu2_dropdown_list_window

0x5827,	// (0x00012fcf) popup_vitu2_match_list_window

0x612c,	// (0x000138d4) cell_vitu2_function_top_pane_ParamLimits

0x612c,	// (0x000138d4) cell_vitu2_function_top_pane

0x6144,	// (0x000138ec) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6144,	// (0x000138ec) cell_vitu2_function_top_pane_cp01

0x6160,	// (0x00013908) cell_vitu2_function_top_wide_pane_ParamLimits

0x6160,	// (0x00013908) cell_vitu2_function_top_wide_pane

0x9376,	// (0x00016b1e) bg_button_pane_cp012

0x617e,	// (0x00013926) cell_vitu2_function_top_pane_g1

0xd088,	// (0x0001a830) bg_button_pane_cp013_ParamLimits

0xd088,	// (0x0001a830) bg_button_pane_cp013

0x6192,	// (0x0001393a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6192,	// (0x0001393a) cell_vitu2_function_top_wide_pane_g1

0x9376,	// (0x00016b1e) bg_popup_sub_pane_cp20

0x61aa,	// (0x00013952) list_vitu2_match_list_pane

0xcdef,	// (0x0001a597) bg_popup_sub_pane_cp20_g1

0xcdf7,	// (0x0001a59f) bg_popup_sub_pane_cp20_g2

0x9f97,	// (0x0001773f) bg_popup_sub_pane_cp20_g3

0xcdff,	// (0x0001a5a7) bg_popup_sub_pane_cp20_g4

0x9f77,	// (0x0001771f) bg_popup_sub_pane_cp20_g5

0xd0a4,	// (0x0001a84c) bg_popup_sub_pane_cp20_g6

0xce0f,	// (0x0001a5b7) bg_popup_sub_pane_cp20_g7

0xce17,	// (0x0001a5bf) bg_popup_sub_pane_cp20_g8

0xce1f,	// (0x0001a5c7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x0001d102) bg_popup_sub_pane_cp20_g

0xd0ac,	// (0x0001a854) list_vitu2_match_list_item_pane_ParamLimits

0xd0ac,	// (0x0001a854) list_vitu2_match_list_item_pane

0xd0be,	// (0x0001a866) list_vitu2_match_list_item_pane_t1

0x9307,	// (0x00016aaf) bg_popup_sub_pane_cp21

0x9d46,	// (0x000174ee) grid_vitu2_dropdown_list_pane

0x61c2,	// (0x0001396a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x61c2,	// (0x0001396a) cell_vitu2_dropdown_list_char_pane

0x61e2,	// (0x0001398a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x61e2,	// (0x0001398a) cell_vitu2_dropdown_list_ctrl_pane

0xd0cc,	// (0x0001a874) cell_vitu2_dropdown_list_char_pane_g1

0xd0d5,	// (0x0001a87d) cell_vitu2_dropdown_list_char_pane_g2

0xd0de,	// (0x0001a886) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x0001d115) cell_vitu2_dropdown_list_char_pane_g

0x620a,	// (0x000139b2) cell_vitu2_dropdown_list_char_pane_t1

0x6218,	// (0x000139c0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6218,	// (0x000139c0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6225,	// (0x000139cd) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6225,	// (0x000139cd) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6232,	// (0x000139da) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6232,	// (0x000139da) cell_vitu2_dropdown_list_ctrl_pane_g3

0x623f,	// (0x000139e7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x623f,	// (0x000139e7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9a6d,	// (0x00017215) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9a6d,	// (0x00017215) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x0001d11c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x0001d11c) cell_vitu2_dropdown_list_ctrl_pane_g

0x625b,	// (0x00013a03) aid_size_cell_gallery2_ParamLimits

0x625b,	// (0x00013a03) aid_size_cell_gallery2

0x6279,	// (0x00013a21) grid_gallery2_pane_ParamLimits

0x6279,	// (0x00013a21) grid_gallery2_pane

0x6293,	// (0x00013a3b) scroll_pane_cp029_ParamLimits

0x6293,	// (0x00013a3b) scroll_pane_cp029

0x62a4,	// (0x00013a4c) cell_gallery2_pane_ParamLimits

0x62a4,	// (0x00013a4c) cell_gallery2_pane

0xd0e7,	// (0x0001a88f) cell_gallery2_pane_g2

0x6303,	// (0x00013aab) cell_gallery2_pane_g3

0xd0ef,	// (0x0001a897) cell_gallery2_pane_g4

0xd0f7,	// (0x0001a89f) cell_gallery2_pane_g5

0x9d46,	// (0x000174ee) grid_highlight_pane_cp10

0x5827,	// (0x00012fcf) popup_vitu2_match_list_window_ParamLimits

0x583c,	// (0x00012fe4) popup_vitu2_query_window_ParamLimits

0x583c,	// (0x00012fe4) popup_vitu2_query_window

0x9307,	// (0x00016aaf) bg_vitu2_candi_button_pane

0xd0cc,	// (0x0001a874) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0d5,	// (0x0001a87d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0de,	// (0x0001a886) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x630b,	// (0x00013ab3) bg_button_pane_cp015

0x631c,	// (0x00013ac4) bg_button_pane_cp016

0x6328,	// (0x00013ad0) bg_button_pane_cp017

0xa93d,	// (0x000180e5) bg_popup_sub_pane_cp22

0xd0ff,	// (0x0001a8a7) popup_vitu2_query_window_g1

0x6366,	// (0x00013b0e) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x0001d127) popup_vitu2_query_window_g

0x6388,	// (0x00013b30) popup_vitu2_query_window_t1_ParamLimits

0x6388,	// (0x00013b30) popup_vitu2_query_window_t1

0x63bb,	// (0x00013b63) popup_vitu2_query_window_t2_ParamLimits

0x63bb,	// (0x00013b63) popup_vitu2_query_window_t2

0x63cd,	// (0x00013b75) popup_vitu2_query_window_t3_ParamLimits

0x63cd,	// (0x00013b75) popup_vitu2_query_window_t3

0x63f5,	// (0x00013b9d) popup_vitu2_query_window_t4_ParamLimits

0x63f5,	// (0x00013b9d) popup_vitu2_query_window_t4

0x6409,	// (0x00013bb1) popup_vitu2_query_window_t5_ParamLimits

0x6409,	// (0x00013bb1) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x0001d12e) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x0001d12e) popup_vitu2_query_window_t

0xcef1,	// (0x0001a699) main_cset_text_pane

0x5d9e,	// (0x00013546) aid_area_touch_slider_ParamLimits

0x5dba,	// (0x00013562) cset_slider_pane_ParamLimits

0x5ddd,	// (0x00013585) main_cset_slider_pane_g1_ParamLimits

0x5df2,	// (0x0001359a) main_cset_slider_pane_g2_ParamLimits

0xcf12,	// (0x0001a6ba) main_cset_slider_pane_g3_ParamLimits

0xcf12,	// (0x0001a6ba) main_cset_slider_pane_g3

0x5e07,	// (0x000135af) main_cset_slider_pane_g4_ParamLimits

0x5e07,	// (0x000135af) main_cset_slider_pane_g4

0x5e16,	// (0x000135be) main_cset_slider_pane_g5_ParamLimits

0x5e16,	// (0x000135be) main_cset_slider_pane_g5

0x5e22,	// (0x000135ca) main_cset_slider_pane_g6_ParamLimits

0x5e22,	// (0x000135ca) main_cset_slider_pane_g6

0xf8e3,	// (0x0001d08b) main_cset_slider_pane_g_ParamLimits

0xcf42,	// (0x0001a6ea) main_cset_slider_pane_t1_ParamLimits

0x5eae,	// (0x00013656) main_cset_slider_pane_t2_ParamLimits

0x5ec8,	// (0x00013670) main_cset_slider_pane_t3_ParamLimits

0x5ee2,	// (0x0001368a) main_cset_slider_pane_t4_ParamLimits

0x5efc,	// (0x000136a4) main_cset_slider_pane_t5_ParamLimits

0x5f16,	// (0x000136be) main_cset_slider_pane_t6_ParamLimits

0x5f2b,	// (0x000136d3) main_cset_slider_pane_t7_ParamLimits

0x5f55,	// (0x000136fd) main_cset_slider_pane_t8_ParamLimits

0x5f55,	// (0x000136fd) main_cset_slider_pane_t8

0x5f7d,	// (0x00013725) main_cset_slider_pane_t9_ParamLimits

0x5f7d,	// (0x00013725) main_cset_slider_pane_t9

0x5fa5,	// (0x0001374d) main_cset_slider_pane_t10_ParamLimits

0x5fa5,	// (0x0001374d) main_cset_slider_pane_t10

0x5fcd,	// (0x00013775) main_cset_slider_pane_t11_ParamLimits

0x5fcd,	// (0x00013775) main_cset_slider_pane_t11

0x5ff5,	// (0x0001379d) main_cset_slider_pane_t12_ParamLimits

0x5ff5,	// (0x0001379d) main_cset_slider_pane_t12

0x6012,	// (0x000137ba) main_cset_slider_pane_t13_ParamLimits

0x6012,	// (0x000137ba) main_cset_slider_pane_t13

0xf908,	// (0x0001d0b0) main_cset_slider_pane_t_ParamLimits

0x9307,	// (0x00016aaf) bg_popup_sub_pane_cp011

0xd10b,	// (0x0001a8b3) main_cset_text_pane_g1

0xd113,	// (0x0001a8bb) main_cset_text_pane_t1

0xd121,	// (0x0001a8c9) main_cset_text_pane_t2

0xd12f,	// (0x0001a8d7) main_cset_text_pane_t3

0xd13d,	// (0x0001a8e5) main_cset_text_pane_t4

0xd14b,	// (0x0001a8f3) main_cset_text_pane_t5

0xd159,	// (0x0001a901) main_cset_text_pane_t6

0xd167,	// (0x0001a90f) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x0001d13d) main_cset_text_pane_t

0x9307,	// (0x00016aaf) main_cam4_burst_pane

0x9307,	// (0x00016aaf) main_cam5_pane

0x5cd7,	// (0x0001347f) bg_button_pane_cp019

0x5ce0,	// (0x00013488) bg_button_pane_cp020

0xcf1e,	// (0x0001a6c6) main_cset_slider_pane_g7_ParamLimits

0xcf1e,	// (0x0001a6c6) main_cset_slider_pane_g7

0xcf2a,	// (0x0001a6d2) main_cset_slider_pane_g8_ParamLimits

0xcf2a,	// (0x0001a6d2) main_cset_slider_pane_g8

0x5e36,	// (0x000135de) main_cset_slider_pane_g9_ParamLimits

0x5e36,	// (0x000135de) main_cset_slider_pane_g9

0x5e42,	// (0x000135ea) main_cset_slider_pane_g10_ParamLimits

0x5e42,	// (0x000135ea) main_cset_slider_pane_g10

0x5e4e,	// (0x000135f6) main_cset_slider_pane_g11_ParamLimits

0x5e4e,	// (0x000135f6) main_cset_slider_pane_g11

0x5e5a,	// (0x00013602) main_cset_slider_pane_g12_ParamLimits

0x5e5a,	// (0x00013602) main_cset_slider_pane_g12

0x5e66,	// (0x0001360e) main_cset_slider_pane_g13_ParamLimits

0x5e66,	// (0x0001360e) main_cset_slider_pane_g13

0x5e72,	// (0x0001361a) main_cset_slider_pane_g14_ParamLimits

0x5e72,	// (0x0001361a) main_cset_slider_pane_g14

0x5e7e,	// (0x00013626) main_cset_slider_pane_g15_ParamLimits

0x5e7e,	// (0x00013626) main_cset_slider_pane_g15

0xcf6a,	// (0x0001a712) main_cset_slider_pane_t14_ParamLimits

0xcf6a,	// (0x0001a712) main_cset_slider_pane_t14

0xcfa3,	// (0x0001a74b) main_cset_slider_pane_t15_ParamLimits

0xcfa3,	// (0x0001a74b) main_cset_slider_pane_t15

0x6473,	// (0x00013c1b) aid_cam4_burst_size_cell_ParamLimits

0x6473,	// (0x00013c1b) aid_cam4_burst_size_cell

0x6493,	// (0x00013c3b) grid_cam4_burst_pane_ParamLimits

0x6493,	// (0x00013c3b) grid_cam4_burst_pane

0x64cb,	// (0x00013c73) linegrid_cam4_burst_pane_ParamLimits

0x64cb,	// (0x00013c73) linegrid_cam4_burst_pane

0xd175,	// (0x0001a91d) scroll_pane_cp30_ParamLimits

0xd175,	// (0x0001a91d) scroll_pane_cp30

0x64ef,	// (0x00013c97) cell_cam4_burst_pane_ParamLimits

0x64ef,	// (0x00013c97) cell_cam4_burst_pane

0xd181,	// (0x0001a929) linegrid_cam4_burst_pane_g1_ParamLimits

0xd181,	// (0x0001a929) linegrid_cam4_burst_pane_g1

0x653c,	// (0x00013ce4) linegrid_cam4_burst_pane_g2_ParamLimits

0x653c,	// (0x00013ce4) linegrid_cam4_burst_pane_g2

0xd18e,	// (0x0001a936) linegrid_cam4_burst_pane_g3_ParamLimits

0xd18e,	// (0x0001a936) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x0001d14c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x0001d14c) linegrid_cam4_burst_pane_g

0x654d,	// (0x00013cf5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x654d,	// (0x00013cf5) linegrid_cam4_burst_pane_g3_copy1

0xd19b,	// (0x0001a943) linegrid_cam4_burst_pane_g4_ParamLimits

0xd19b,	// (0x0001a943) linegrid_cam4_burst_pane_g4

0x6567,	// (0x00013d0f) linegrid_cam4_burst_pane_g5_ParamLimits

0x6567,	// (0x00013d0f) linegrid_cam4_burst_pane_g5

0x6578,	// (0x00013d20) linegrid_cam4_burst_pane_g6_ParamLimits

0x6578,	// (0x00013d20) linegrid_cam4_burst_pane_g6

0xd1a8,	// (0x0001a950) linegrid_cam4_burst_pane_g7_ParamLimits

0xd1a8,	// (0x0001a950) linegrid_cam4_burst_pane_g7

0x658f,	// (0x00013d37) cell_cam4_burst_pane_g1

0xd1c1,	// (0x0001a969) main_cam5_pane_t1_ParamLimits

0xd1c1,	// (0x0001a969) main_cam5_pane_t1

0xd1d3,	// (0x0001a97b) main_cam5_pane_t2_ParamLimits

0xd1d3,	// (0x0001a97b) main_cam5_pane_t2

0xd1e5,	// (0x0001a98d) main_cam5_pane_t3_ParamLimits

0xd1e5,	// (0x0001a98d) main_cam5_pane_t3

0xd1f7,	// (0x0001a99f) main_cam5_pane_t4_ParamLimits

0xd1f7,	// (0x0001a99f) main_cam5_pane_t4

0xd20f,	// (0x0001a9b7) main_cam5_pane_t5_ParamLimits

0xd20f,	// (0x0001a9b7) main_cam5_pane_t5

0xd223,	// (0x0001a9cb) main_cam5_pane_t6_ParamLimits

0xd223,	// (0x0001a9cb) main_cam5_pane_t6

0xd237,	// (0x0001a9df) main_cam5_pane_t7_ParamLimits

0xd237,	// (0x0001a9df) main_cam5_pane_t7

0xd249,	// (0x0001a9f1) main_cam5_pane_t8_ParamLimits

0xd249,	// (0x0001a9f1) main_cam5_pane_t8

0xd265,	// (0x0001aa0d) main_cam5_pane_t9_ParamLimits

0xd265,	// (0x0001aa0d) main_cam5_pane_t9

0xd277,	// (0x0001aa1f) main_cam5_pane_t10_ParamLimits

0xd277,	// (0x0001aa1f) main_cam5_pane_t10

0xd289,	// (0x0001aa31) main_cam5_pane_t11_ParamLimits

0xd289,	// (0x0001aa31) main_cam5_pane_t11

0xd29b,	// (0x0001aa43) main_cam5_pane_t12_ParamLimits

0xd29b,	// (0x0001aa43) main_cam5_pane_t12

0xd2b0,	// (0x0001aa58) main_cam5_pane_t13_ParamLimits

0xd2b0,	// (0x0001aa58) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x0001d158) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x0001d158) main_cam5_pane_t

0x1000,	// (0x0000e7a8) popup_scut_keymap_window_ParamLimits

0x1000,	// (0x0000e7a8) popup_scut_keymap_window

0x65a2,	// (0x00013d4a) aid_size_cell_brow_shortcut

0x9d46,	// (0x000174ee) bg_popup_window_pane_cp010

0x65ae,	// (0x00013d56) grid_scut_pane

0x65ba,	// (0x00013d62) cell_scut_pane_ParamLimits

0x65ba,	// (0x00013d62) cell_scut_pane

0x65d1,	// (0x00013d79) cell_scut_pane_g1

0xd2cd,	// (0x0001aa75) cell_scut_pane_t1

0xd2dc,	// (0x0001aa84) cell_scut_pane_t2

0x65da,	// (0x00013d82) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x0001d173) cell_scut_pane_t

0x446a,	// (0x00011c12) main_mup3_pane_g8_ParamLimits

0x446a,	// (0x00011c12) main_mup3_pane_g8

0x5730,	// (0x00012ed8) area_vitu2_query_pane_ParamLimits

0x5730,	// (0x00012ed8) area_vitu2_query_pane

0x6334,	// (0x00013adc) input_focus_pane_cp08

0xd2eb,	// (0x0001aa93) area_vitu2_query_pane_g1

0x65e8,	// (0x00013d90) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x0001d17a) area_vitu2_query_pane_g

0x65f7,	// (0x00013d9f) area_vitu2_query_pane_t1_ParamLimits

0x65f7,	// (0x00013d9f) area_vitu2_query_pane_t1

0x660b,	// (0x00013db3) area_vitu2_query_pane_t2_ParamLimits

0x660b,	// (0x00013db3) area_vitu2_query_pane_t2

0x661f,	// (0x00013dc7) area_vitu2_query_pane_t3_ParamLimits

0x661f,	// (0x00013dc7) area_vitu2_query_pane_t3

0xd2f7,	// (0x0001aa9f) area_vitu2_query_pane_t4_ParamLimits

0xd2f7,	// (0x0001aa9f) area_vitu2_query_pane_t4

0xd31f,	// (0x0001aac7) area_vitu2_query_pane_t5_ParamLimits

0xd31f,	// (0x0001aac7) area_vitu2_query_pane_t5

0xd347,	// (0x0001aaef) area_vitu2_query_pane_t6_ParamLimits

0xd347,	// (0x0001aaef) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x0001d17f) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x0001d17f) area_vitu2_query_pane_t

0x6647,	// (0x00013def) bg_button_pane_cp018

0x6653,	// (0x00013dfb) bg_button_pane_cp021

0x665f,	// (0x00013e07) bg_button_pane_cp022

0x667e,	// (0x00013e26) input_focus_pane_cp09

0xa687,	// (0x00017e2f) aid_size_touch_mv_arrow_left

0xa6b0,	// (0x00017e58) aid_size_touch_mv_arrow_right

0x5e96,	// (0x0001363e) main_cset_slider_pane_g16_ParamLimits

0x5e96,	// (0x0001363e) main_cset_slider_pane_g16

0x5ea2,	// (0x0001364a) main_cset_slider_pane_g17_ParamLimits

0x5ea2,	// (0x0001364a) main_cset_slider_pane_g17

0x658f,	// (0x00013d37) cell_cam4_burst_pane_g1_ParamLimits

0x9307,	// (0x00016aaf) compa_mode_pane

0x606c,	// (0x00013814) popup_vtel_slider_window_g3_ParamLimits

0x606c,	// (0x00013814) popup_vtel_slider_window_g3

0x6083,	// (0x0001382b) popup_vtel_slider_window_g4_ParamLimits

0x6083,	// (0x0001382b) popup_vtel_slider_window_g4

0x609a,	// (0x00013842) popup_vtel_slider_window_t1_ParamLimits

0x609a,	// (0x00013842) popup_vtel_slider_window_t1

0x9307,	// (0x00016aaf) main_cl_pane

0xbc80,	// (0x00019428) popup_imed_adjust2_window_ParamLimits

0xa93d,	// (0x000180e5) bg_tb_trans_pane_cp05_ParamLimits

0xc607,	// (0x00019daf) popup_imed_adjust2_window_g1_ParamLimits

0xc616,	// (0x00019dbe) popup_imed_adjust2_window_g2_ParamLimits

0xc616,	// (0x00019dbe) popup_imed_adjust2_window_g2

0xc622,	// (0x00019dca) popup_imed_adjust2_window_g3_ParamLimits

0xc622,	// (0x00019dca) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x0001cef5) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x0001cef5) popup_imed_adjust2_window_g

0xc62e,	// (0x00019dd6) popup_imed_adjust2_window_t1_ParamLimits

0xc646,	// (0x00019dee) slider_imed_adjust_pane_ParamLimits

0xc65a,	// (0x00019e02) slider_imed_adjust_pane_g1_ParamLimits

0xc66a,	// (0x00019e12) slider_imed_adjust_pane_g2_ParamLimits

0xc67a,	// (0x00019e22) slider_imed_adjust_pane_g3_ParamLimits

0xc68b,	// (0x00019e33) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x0001cefc) slider_imed_adjust_pane_g_ParamLimits

0x54b9,	// (0x00012c61) aid_touch_area_cam4_ParamLimits

0x54b9,	// (0x00012c61) aid_touch_area_cam4

0xcc8a,	// (0x0001a432) battery_pane_cp01

0x5588,	// (0x00012d30) main_camera4_pane_g6_ParamLimits

0x5588,	// (0x00012d30) main_camera4_pane_g6

0x55b2,	// (0x00012d5a) main_camera4_pane_t2_ParamLimits

0x55b2,	// (0x00012d5a) main_camera4_pane_t2

0x0001,

0xf856,	// (0x0001cffe) main_camera4_pane_t_ParamLimits

0xf856,	// (0x0001cffe) main_camera4_pane_t

0x55e7,	// (0x00012d8f) aid_touch_area_vid4_ParamLimits

0x55e7,	// (0x00012d8f) aid_touch_area_vid4

0x563b,	// (0x00012de3) main_video4_pane_g5_ParamLimits

0x563b,	// (0x00012de3) main_video4_pane_g5

0x5660,	// (0x00012e08) vid4_progress_pane_ParamLimits

0x5660,	// (0x00012e08) vid4_progress_pane

0xcf36,	// (0x0001a6de) main_cset_slider_pane_g18_ParamLimits

0xcf36,	// (0x0001a6de) main_cset_slider_pane_g18

0xd1b5,	// (0x0001a95d) cell_cam4_burst_pane_g2_ParamLimits

0xd1b5,	// (0x0001a95d) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x0001d153) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x0001d153) cell_cam4_burst_pane_g

0x9b01,	// (0x000172a9) bg_cl_pane_ParamLimits

0x9b01,	// (0x000172a9) bg_cl_pane

0x668e,	// (0x00013e36) cl_header_pane_ParamLimits

0x668e,	// (0x00013e36) cl_header_pane

0x66a2,	// (0x00013e4a) cl_listscroll_pane_ParamLimits

0x66a2,	// (0x00013e4a) cl_listscroll_pane

0xd393,	// (0x0001ab3b) bg_cl_pane_g1

0xd39b,	// (0x0001ab43) bg_cl_pane_g2

0xd3a3,	// (0x0001ab4b) bg_cl_pane_g3

0xd3ab,	// (0x0001ab53) bg_cl_pane_g4

0xd3b3,	// (0x0001ab5b) bg_cl_pane_g5

0xd3bb,	// (0x0001ab63) bg_cl_pane_g6

0xd3c3,	// (0x0001ab6b) bg_cl_pane_g7

0xd3cb,	// (0x0001ab73) bg_cl_pane_g8

0xd3d3,	// (0x0001ab7b) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x0001d18e) bg_cl_pane_g

0x66b2,	// (0x00013e5a) aid_height_cl_leading_ParamLimits

0x66b2,	// (0x00013e5a) aid_height_cl_leading

0x66be,	// (0x00013e66) aid_height_cl_text_ParamLimits

0x66be,	// (0x00013e66) aid_height_cl_text

0x9376,	// (0x00016b1e) bg_cl_header_pane_ParamLimits

0x9376,	// (0x00016b1e) bg_cl_header_pane

0x66dd,	// (0x00013e85) cl_header_pane_g1_ParamLimits

0x66dd,	// (0x00013e85) cl_header_pane_g1

0x66f3,	// (0x00013e9b) cl_header_pane_t1_ParamLimits

0x66f3,	// (0x00013e9b) cl_header_pane_t1

0xd3db,	// (0x0001ab83) cl_list_pane

0xcf09,	// (0x0001a6b1) hc_scroll_pane_cp01

0x9f77,	// (0x0001771f) bg_cl_header_pane_g1

0xcdef,	// (0x0001a597) bg_cl_header_pane_g2

0x9f97,	// (0x0001773f) bg_cl_header_pane_g3

0xcdff,	// (0x0001a5a7) bg_cl_header_pane_g4

0xcdf7,	// (0x0001a59f) bg_cl_header_pane_g5

0xd0a4,	// (0x0001a84c) bg_cl_header_pane_g6

0xce17,	// (0x0001a5bf) bg_cl_header_pane_g7

0xce1f,	// (0x0001a5c7) bg_cl_header_pane_g8

0xce0f,	// (0x0001a5b7) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x0001d1a1) bg_cl_header_pane_g

0x670c,	// (0x00013eb4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x670c,	// (0x00013eb4) hc_cl_list_double_graphic_heading_pane

0x671d,	// (0x00013ec5) hc_cl_list_single_graphic_pane_ParamLimits

0x671d,	// (0x00013ec5) hc_cl_list_single_graphic_pane

0x6733,	// (0x00013edb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6733,	// (0x00013edb) hc_cl_list_single_graphic_pane_g1

0x673f,	// (0x00013ee7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x673f,	// (0x00013ee7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x0001d1b4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x0001d1b4) hc_cl_list_single_graphic_pane_g

0x6753,	// (0x00013efb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6753,	// (0x00013efb) hc_cl_list_single_graphic_pane_t1

0x6733,	// (0x00013edb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6733,	// (0x00013edb) hc_cl_list_double_graphic_heading_pane_g1

0x6768,	// (0x00013f10) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6768,	// (0x00013f10) hc_cl_list_double_graphic_heading_pane_g2

0x677c,	// (0x00013f24) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x677c,	// (0x00013f24) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x0001d1b9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x0001d1b9) hc_cl_list_double_graphic_heading_pane_g

0x6790,	// (0x00013f38) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6790,	// (0x00013f38) hc_cl_list_double_graphic_heading_pane_t1

0x67a5,	// (0x00013f4d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x67a5,	// (0x00013f4d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x0001d1c0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x0001d1c0) hc_cl_list_double_graphic_heading_pane_t

0xd3ec,	// (0x0001ab94) vid4_progress_pane_g1

0xd3fc,	// (0x0001aba4) vid4_progress_pane_g2

0x67ba,	// (0x00013f62) vid4_progress_pane_g3

0xd40c,	// (0x0001abb4) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x0001d1c5) vid4_progress_pane_g

0x67cc,	// (0x00013f74) vid4_progress_pane_t1

0xd424,	// (0x0001abcc) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x0001d1d0) vid4_progress_pane_t

0x67e4,	// (0x00013f8c) wait_bar_pane_cp07

0xbf3e,	// (0x000196e6) blid_firmament_pane_ParamLimits

0xbf81,	// (0x00019729) popup_blid_sat_info2_window_g1

0xbfa5,	// (0x0001974d) popup_blid_sat_info2_window_t3

0xbfb3,	// (0x0001975b) popup_blid_sat_info2_window_t4

0xbfc1,	// (0x00019769) popup_blid_sat_info2_window_t5

0xbfcf,	// (0x00019777) popup_blid_sat_info2_window_t6

0xbfdf,	// (0x00019787) popup_blid_sat_info2_window_t7

0xbfed,	// (0x00019795) popup_blid_sat_info2_window_t8

0xbffb,	// (0x000197a3) popup_blid_sat_info2_window_t9

0xc009,	// (0x000197b1) popup_blid_sat_info2_window_t10

0xc0ca,	// (0x00019872) aid_firma_cardinal_ParamLimits

0xc0de,	// (0x00019886) blid_firmament_pane_t1_ParamLimits

0xc0f5,	// (0x0001989d) blid_firmament_pane_t2_ParamLimits

0xc10c,	// (0x000198b4) blid_firmament_pane_t3_ParamLimits

0xc123,	// (0x000198cb) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x0001cdee) blid_firmament_pane_t_ParamLimits

0xc13a,	// (0x000198e2) blid_sat_info_pane_ParamLimits

0x9376,	// (0x00016b1e) main_cam_set_pane_ParamLimits

0x4c50,	// (0x000123f8) aid_size_cell_colour_35_ParamLimits

0x4c70,	// (0x00012418) aid_size_cell_colour_112_ParamLimits

0x4c90,	// (0x00012438) aid_size_cell_effect_ParamLimits

0xa93d,	// (0x000180e5) bg_tb_trans_pane_cp02_ParamLimits

0xa202,	// (0x000179aa) heading_imed_pane_ParamLimits

0x4cb0,	// (0x00012458) listscroll_imed_pane_ParamLimits

0xb36f,	// (0x00018b17) popup_call2_audio_first_window_g5_ParamLimits

0xb36f,	// (0x00018b17) popup_call2_audio_first_window_g5

0x50d5,	// (0x0001287d) aid_size_touch_image3_arrow_left_ParamLimits

0x50d5,	// (0x0001287d) aid_size_touch_image3_arrow_left

0x5101,	// (0x000128a9) aid_size_touch_image3_arrow_right_ParamLimits

0x5101,	// (0x000128a9) aid_size_touch_image3_arrow_right

0xd439,	// (0x0001abe1) vid4_progress_pane_t3

0x4e55,	// (0x000125fd) main_hwr_training_symbol_option_pane_ParamLimits

0x4e55,	// (0x000125fd) main_hwr_training_symbol_option_pane

0xc840,	// (0x00019fe8) popup_hwr_training_preview_window_ParamLimits

0xc840,	// (0x00019fe8) popup_hwr_training_preview_window

0x4e75,	// (0x0001261d) hwr_training_navi_pane_g5_ParamLimits

0x4e75,	// (0x0001261d) hwr_training_navi_pane_g5

0xcddd,	// (0x0001a585) popup_char_count_window

0x9376,	// (0x00016b1e) bg_popup_sub_pane_cp20_ParamLimits

0x61aa,	// (0x00013952) list_vitu2_match_list_pane_ParamLimits

0x61b6,	// (0x0001395e) vitu2_page_scroll_pane_ParamLimits

0x61b6,	// (0x0001395e) vitu2_page_scroll_pane

0xd470,	// (0x0001ac18) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd470,	// (0x0001ac18) list_single_hwr_training_symbol_option_pane

0xd483,	// (0x0001ac2b) list_single_hwr_training_symbol_option_pane_g1

0xd48b,	// (0x0001ac33) list_single_hwr_training_symbol_option_pane_t1

0xd499,	// (0x0001ac41) bg_button_pane_cp023

0xd4a2,	// (0x0001ac4a) bg_button_pane_cp024

0xd4d5,	// (0x0001ac7d) vitu2_page_scroll_pane_g1

0xd4dd,	// (0x0001ac85) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x0001d1d7) vitu2_page_scroll_pane_g

0xd4e5,	// (0x0001ac8d) vitu2_page_scroll_pane_t1

0xbeb4,	// (0x0001965c) popup_char_count_window_g1

0xd4f4,	// (0x0001ac9c) popup_char_count_window_g2

0xd4fd,	// (0x0001aca5) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x0001d1dc) popup_char_count_window_g

0xd506,	// (0x0001acae) popup_char_count_window_t1

0x9307,	// (0x00016aaf) main_vded2_pane

0xc5f3,	// (0x00019d9b) aid_size_cell_imed_line

0xc5fd,	// (0x00019da5) grid_imed_line_width_pane

0xcd5c,	// (0x0001a504) vid4_indicators_pane_g4

0xd514,	// (0x0001acbc) cell_imed_line_width_pane_ParamLimits

0xd514,	// (0x0001acbc) cell_imed_line_width_pane

0xd528,	// (0x0001acd0) cell_imed_line_width_pane_g1

0xd531,	// (0x0001acd9) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x0001d1e3) cell_imed_line_width_pane_g

0x680b,	// (0x00013fb3) main_vded2_pane_g1_ParamLimits

0x680b,	// (0x00013fb3) main_vded2_pane_g1

0x6821,	// (0x00013fc9) main_vded2_pane_g2_ParamLimits

0x6821,	// (0x00013fc9) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x0001d1e8) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x0001d1e8) main_vded2_pane_g

0x6833,	// (0x00013fdb) vded2_slider_pane_ParamLimits

0x6833,	// (0x00013fdb) vded2_slider_pane

0x6843,	// (0x00013feb) aid_size_touch_vded2_end

0x684d,	// (0x00013ff5) aid_size_touch_vded2_playhead

0xd539,	// (0x0001ace1) aid_size_touch_vded2_start

0xd541,	// (0x0001ace9) vded2_slider_bg_pane

0xd54a,	// (0x0001acf2) vded2_slider_pane_g1

0xd553,	// (0x0001acfb) vded2_slider_pane_g2

0x6857,	// (0x00013fff) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x0001d1ed) vded2_slider_pane_g

0xd55b,	// (0x0001ad03) vded2_slider_bg_pane_g1

0xd564,	// (0x0001ad0c) vded2_slider_bg_pane_g2

0xd56d,	// (0x0001ad15) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x0001d1f4) vded2_slider_bg_pane_g

0x31b2,	// (0x0001095a) aid_postcard_touch_down_pane_ParamLimits

0x31b2,	// (0x0001095a) aid_postcard_touch_down_pane

0x31c8,	// (0x00010970) aid_postcard_touch_up_pane_ParamLimits

0x31c8,	// (0x00010970) aid_postcard_touch_up_pane

0x9307,	// (0x00016aaf) main_blid2_pane

0xbc66,	// (0x0001940e) popup_blid2_search_window

0x9307,	// (0x00016aaf) blid2_gps_pane

0x9307,	// (0x00016aaf) blid2_navig_pane

0x9307,	// (0x00016aaf) blid2_search_pane

0x9307,	// (0x00016aaf) blid2_tripm_pane

0x6862,	// (0x0001400a) blid2_search_pane_g1_ParamLimits

0x6862,	// (0x0001400a) blid2_search_pane_g1

0x687c,	// (0x00014024) blid2_search_pane_t1_ParamLimits

0x687c,	// (0x00014024) blid2_search_pane_t1

0x688e,	// (0x00014036) aid_size_cell_blid2_gps_ParamLimits

0x688e,	// (0x00014036) aid_size_cell_blid2_gps

0x68a6,	// (0x0001404e) blid2_gps_pane_g1_ParamLimits

0x68a6,	// (0x0001404e) blid2_gps_pane_g1

0x68ba,	// (0x00014062) grid_blid2_satellite_pane_ParamLimits

0x68ba,	// (0x00014062) grid_blid2_satellite_pane

0x68d4,	// (0x0001407c) blid2_navig_pane_g1_ParamLimits

0x68d4,	// (0x0001407c) blid2_navig_pane_g1

0x68e0,	// (0x00014088) blid2_navig_pane_t1_ParamLimits

0x68e0,	// (0x00014088) blid2_navig_pane_t1

0x68fb,	// (0x000140a3) blid2_navig_pane_t2_ParamLimits

0x68fb,	// (0x000140a3) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x0001d1fb) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x0001d1fb) blid2_navig_pane_t

0x6916,	// (0x000140be) blid2_navig_ring_pane_ParamLimits

0x6916,	// (0x000140be) blid2_navig_ring_pane

0x692f,	// (0x000140d7) blid2_speed_pane_ParamLimits

0x692f,	// (0x000140d7) blid2_speed_pane

0x693b,	// (0x000140e3) blid2_tripm_pane_g1_ParamLimits

0x693b,	// (0x000140e3) blid2_tripm_pane_g1

0x6954,	// (0x000140fc) blid2_tripm_pane_g2_ParamLimits

0x6954,	// (0x000140fc) blid2_tripm_pane_g2

0x6968,	// (0x00014110) blid2_tripm_pane_g3_ParamLimits

0x6968,	// (0x00014110) blid2_tripm_pane_g3

0x697c,	// (0x00014124) blid2_tripm_pane_g4_ParamLimits

0x697c,	// (0x00014124) blid2_tripm_pane_g4

0x6990,	// (0x00014138) blid2_tripm_pane_g5_ParamLimits

0x6990,	// (0x00014138) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x0001d200) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x0001d200) blid2_tripm_pane_g

0x69b6,	// (0x0001415e) blid2_tripm_pane_t1_ParamLimits

0x69b6,	// (0x0001415e) blid2_tripm_pane_t1

0x69d1,	// (0x00014179) blid2_tripm_pane_t2_ParamLimits

0x69d1,	// (0x00014179) blid2_tripm_pane_t2

0x69ea,	// (0x00014192) blid2_tripm_pane_t3_ParamLimits

0x69ea,	// (0x00014192) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x0001d20d) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x0001d20d) blid2_tripm_pane_t

0x6a31,	// (0x000141d9) cell_blid2_satellite_pane_ParamLimits

0x6a31,	// (0x000141d9) cell_blid2_satellite_pane

0x6a4f,	// (0x000141f7) cell_blid2_satellite_pane_g1

0xd576,	// (0x0001ad1e) cell_blid2_satellite_pane_t1

0x9d86,	// (0x0001752e) blid2_speed_pane_g1

0xd584,	// (0x0001ad2c) blid2_speed_pane_t1

0xd592,	// (0x0001ad3a) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x0001d216) blid2_speed_pane_t

0x9d86,	// (0x0001752e) blid2_navig_ring_pane_g1

0x6a58,	// (0x00014200) blid2_navig_ring_pane_g2

0x6a60,	// (0x00014208) blid2_navig_ring_pane_g3

0x6a68,	// (0x00014210) blid2_navig_ring_pane_g4

0x6a70,	// (0x00014218) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x0001d21b) blid2_navig_ring_pane_g

0x9307,	// (0x00016aaf) bg_popup_window_pane_cp011

0xd5a0,	// (0x0001ad48) popup_blid2_search_window_g1

0xd5a8,	// (0x0001ad50) popup_blid2_search_window_t1

0xd5b6,	// (0x0001ad5e) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x0001d226) popup_blid2_search_window_t

0x9e86,	// (0x0001762e) main_browser_pane_g1

0x9b01,	// (0x000172a9) main_browser_pane_ParamLimits

0x9376,	// (0x00016b1e) bg_button_pane_cp011_ParamLimits

0x5a6d,	// (0x00013215) cell_vitu2_function_pane_g1_ParamLimits

0xa93d,	// (0x000180e5) bg_popup_sub_pane_cp22_ParamLimits

0x6334,	// (0x00013adc) input_focus_pane_cp08_ParamLimits

0x634f,	// (0x00013af7) popup_vitu2_query_button_pane_ParamLimits

0x634f,	// (0x00013af7) popup_vitu2_query_button_pane

0x635e,	// (0x00013b06) popup_vitu2_query_input_button_pane

0xd0ff,	// (0x0001a8a7) popup_vitu2_query_window_g1_ParamLimits

0x6366,	// (0x00013b0e) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x0001d127) popup_vitu2_query_window_g_ParamLimits

0x9307,	// (0x00016aaf) bg_button_pane_cp026

0x6a78,	// (0x00014220) popup_vitu2_query_input_button_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp025

0xd5c4,	// (0x0001ad6c) popup_vitu2_query_button_pane_t1

0x40d3,	// (0x0001187b) main_mp3_pane_t6

0x40e1,	// (0x00011889) popup_slider_window_cp01

0xccc0,	// (0x0001a468) cam4_battery_pane

0xcd19,	// (0x0001a4c1) cam4_battery_pane_cp02

0xd3e4,	// (0x0001ab8c) cam4_battery_pane_cp01

0xd3e4,	// (0x0001ab8c) cam4_battery_pane_cp03

0x9d86,	// (0x0001752e) cam4_battery_pane_g1

0xd5d2,	// (0x0001ad7a) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x0001d22b) cam4_battery_pane_g

0xc017,	// (0x000197bf) popup_blid_sat_info2_window_t11

0xa687,	// (0x00017e2f) aid_size_touch_mv_arrow_left_ParamLimits

0xa6b0,	// (0x00017e58) aid_size_touch_mv_arrow_right_ParamLimits

0xa70e,	// (0x00017eb6) navi_pane_g1_ParamLimits

0xa71a,	// (0x00017ec2) navi_pane_g2_ParamLimits

0xa748,	// (0x00017ef0) navi_pane_g3_ParamLimits

0xf35a,	// (0x0001cb02) navi_pane_g_ParamLimits

0x2e78,	// (0x00010620) navi_pane_mv_t1_ParamLimits

0x4cbc,	// (0x00012464) grid_imed_effect_pane_ParamLimits

0x1c07,	// (0x0000f3af) aid_placing_vt_slider_lsc

0x9dd5,	// (0x0001757d) aid_placing_vt_slider_prt

0x9376,	// (0x00016b1e) bg_tb_trans_pane_cp01_ParamLimits

0xc297,	// (0x00019a3f) popup_image_details_window_g1_ParamLimits

0xc2aa,	// (0x00019a52) popup_image_details_window_g2_ParamLimits

0xc2bf,	// (0x00019a67) popup_image_details_window_g3_ParamLimits

0xc2bf,	// (0x00019a67) popup_image_details_window_g3

0xf686,	// (0x0001ce2e) popup_image_details_window_g_ParamLimits

0xc2d3,	// (0x00019a7b) popup_image_details_window_t1_ParamLimits

0xc2e5,	// (0x00019a8d) popup_image_details_window_t2_ParamLimits

0xc2fe,	// (0x00019aa6) popup_image_details_window_t3_ParamLimits

0xc312,	// (0x00019aba) popup_image_details_window_t4_ParamLimits

0xc32d,	// (0x00019ad5) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x0001ce35) popup_image_details_window_t_ParamLimits

0x66ca,	// (0x00013e72) cl_header_name_pane_ParamLimits

0x66ca,	// (0x00013e72) cl_header_name_pane

0x6a80,	// (0x00014228) cl_header_name_pane_t1_ParamLimits

0x6a80,	// (0x00014228) cl_header_name_pane_t1

0x6aa1,	// (0x00014249) cl_header_name_pane_t2_ParamLimits

0x6aa1,	// (0x00014249) cl_header_name_pane_t2

0x6ae3,	// (0x0001428b) cl_header_name_pane_t3_ParamLimits

0x6ae3,	// (0x0001428b) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x0001d230) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x0001d230) cl_header_name_pane_t

0xa7d7,	// (0x00017f7f) navi_pane_mv_g2_ParamLimits

0xcda8,	// (0x0001a550) field_vitu2_entry_pane_g1_ParamLimits

0xcdb4,	// (0x0001a55c) field_vitu2_entry_pane_g2_ParamLimits

0xa907,	// (0x000180af) field_vitu2_entry_pane_g3_ParamLimits

0xa907,	// (0x000180af) field_vitu2_entry_pane_g3

0xf888,	// (0x0001d030) field_vitu2_entry_pane_g_ParamLimits

0x58fd,	// (0x000130a5) cell_vitu2_itu_pane_g1_ParamLimits

0x5915,	// (0x000130bd) cell_vitu2_itu_pane_g2_ParamLimits

0x5915,	// (0x000130bd) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x0001d03c) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x0001d03c) cell_vitu2_itu_pane_g

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp05_ParamLimits

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp05

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp03

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp04

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp10_ParamLimits

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp10

0x666e,	// (0x00013e16) bg_vkb2_func_pane_cp08

0x6647,	// (0x00013def) bg_vkb2_func_pane_cp06

0x6653,	// (0x00013dfb) bg_vkb2_func_pane_cp07

0xd4ab,	// (0x0001ac53) bg_vkb2_func_pane_cp11_ParamLimits

0xd4ab,	// (0x0001ac53) bg_vkb2_func_pane_cp11

0xd4c0,	// (0x0001ac68) bg_vkb2_func_pane_cp12_ParamLimits

0xd4c0,	// (0x0001ac68) bg_vkb2_func_pane_cp12

0x9307,	// (0x00016aaf) bg_vkb2_func_pane_cp09

0xcdef,	// (0x0001a597) bg_vkb2_func_pane_g1

0x9f97,	// (0x0001773f) bg_vkb2_func_pane_g2

0xcdf7,	// (0x0001a59f) bg_vkb2_func_pane_g3

0xcdff,	// (0x0001a5a7) bg_vkb2_func_pane_g4

0xd0a4,	// (0x0001a84c) bg_vkb2_func_pane_g5

0xce17,	// (0x0001a5bf) bg_vkb2_func_pane_g6

0xce1f,	// (0x0001a5c7) bg_vkb2_func_pane_g7

0xce0f,	// (0x0001a5b7) bg_vkb2_func_pane_g8

0x9f77,	// (0x0001771f) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x0001d237) bg_vkb2_func_pane_g

0x69a4,	// (0x0001414c) blid2_tripm_pane_g6_ParamLimits

0x69a4,	// (0x0001414c) blid2_tripm_pane_g6

0xcb77,	// (0x0001a31f) mp4_progress_pane_g1

0x6a1d,	// (0x000141c5) blid2_tripm_values_pane_ParamLimits

0x6a1d,	// (0x000141c5) blid2_tripm_values_pane

0x6b14,	// (0x000142bc) blid2_tripm_values_pane_t1

0x6b22,	// (0x000142ca) blid2_tripm_values_pane_t2

0x6b30,	// (0x000142d8) blid2_tripm_values_pane_t3

0x6b3e,	// (0x000142e6) blid2_tripm_values_pane_t4

0x6b4c,	// (0x000142f4) blid2_tripm_values_pane_t5

0x6b5a,	// (0x00014302) blid2_tripm_values_pane_t6

0x6b68,	// (0x00014310) blid2_tripm_values_pane_t7

0x6b76,	// (0x0001431e) blid2_tripm_values_pane_t8

0x6b84,	// (0x0001432c) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x0001d24a) blid2_tripm_values_pane_t

0x1c49,	// (0x0000f3f1) call_video_pane_t1_ParamLimits

0x1c67,	// (0x0000f40f) call_video_pane_t2_ParamLimits

0xf208,	// (0x0001c9b0) call_video_pane_t_ParamLimits

0x3130,	// (0x000108d8) msg_header_pane_g1_ParamLimits

0xa9fa,	// (0x000181a2) msg_header_pane_g2_ParamLimits

0xa9fa,	// (0x000181a2) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0001cba5) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0001cba5) msg_header_pane_g

0x9b01,	// (0x000172a9) main_clock2_pane_ParamLimits

0x49bd,	// (0x00012165) grid_clock2_toolbar_pane_ParamLimits

0x49bd,	// (0x00012165) grid_clock2_toolbar_pane

0x49bd,	// (0x00012165) listscroll_clock2_pane_ParamLimits

0x49bd,	// (0x00012165) listscroll_clock2_pane

0x4aa1,	// (0x00012249) main_clock2_pane_t3_ParamLimits

0x4aa1,	// (0x00012249) main_clock2_pane_t3

0x4ac5,	// (0x0001226d) main_clock2_pane_t4_ParamLimits

0x4ac5,	// (0x0001226d) main_clock2_pane_t4

0xd5dc,	// (0x0001ad84) cell_clock2_toolbar_pane

0xd5e4,	// (0x0001ad8c) cell_clock2_toolbar_pane_cp01

0xd5e4,	// (0x0001ad8c) cell_clock2_toolbar_pane_cp02

0xd5ec,	// (0x0001ad94) cell_clock2_toolbar_pane_cp03

0xd5f4,	// (0x0001ad9c) list_clock2_pane

0xa5fd,	// (0x00017da5) scroll_pane_cp10

0xd5fc,	// (0x0001ada4) list_single_clock2_pane_ParamLimits

0xd5fc,	// (0x0001ada4) list_single_clock2_pane

0x9d46,	// (0x000174ee) list_highlight_pane_cp08

0xd609,	// (0x0001adb1) list_single_clock2_pane_t1

0xd617,	// (0x0001adbf) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x0001d25d) list_single_clock2_pane_t

0x9307,	// (0x00016aaf) bg_button_pane_cp10

0xd625,	// (0x0001adcd) cell_clock2_toolbar_pane_g1

0x313e,	// (0x000108e6) aid_main_viewer_pane_g1_ParamLimits

0x313e,	// (0x000108e6) aid_main_viewer_pane_g1

0x314c,	// (0x000108f4) aid_main_viewer_pane_g2_ParamLimits

0x314c,	// (0x000108f4) aid_main_viewer_pane_g2

0x315a,	// (0x00010902) aid_main_viewer_pane_g3_ParamLimits

0x315a,	// (0x00010902) aid_main_viewer_pane_g3

0x3169,	// (0x00010911) aid_main_viewer_pane_g4_ParamLimits

0x3169,	// (0x00010911) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0001cbb6) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0001cbb6) aid_main_viewer_pane_g

0x3ab0,	// (0x00011258) main_calc_pane_ParamLimits

0x3ac4,	// (0x0001126c) main_dialer2_pane_ParamLimits

0x9307,	// (0x00016aaf) main_cam6_pane

0x9307,	// (0x00016aaf) main_vid6_pane

0x49c9,	// (0x00012171) listscroll_gen_pane_cp06_ParamLimits

0x49c9,	// (0x00012171) listscroll_gen_pane_cp06

0x4ae8,	// (0x00012290) main_clock2_pane_t5_ParamLimits

0x4ae8,	// (0x00012290) main_clock2_pane_t5

0x4b46,	// (0x000122ee) aid_call2_pane_cp10_ParamLimits

0x4b58,	// (0x00012300) aid_call_pane_cp10_ParamLimits

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4b6a,	// (0x00012312) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4b6a,	// (0x00012312) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa67b,	// (0x00017e23) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x0001ceea) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b80,	// (0x00012328) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5082,	// (0x0001282a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5082,	// (0x0001282a) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x0001cfcf) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x0001cfcf) cell_dialer2_keypad_pane_g

0x509e,	// (0x00012846) cell_dialer2_keypad_pane_t1

0x5d90,	// (0x00013538) main_cset_text2_pane_ParamLimits

0x5d90,	// (0x00013538) main_cset_text2_pane

0xd2eb,	// (0x0001aa93) area_vitu2_query_pane_g1_ParamLimits

0x65e8,	// (0x00013d90) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x0001d17a) area_vitu2_query_pane_g_ParamLimits

0xd36f,	// (0x0001ab17) area_vitu2_query_pane_t7_ParamLimits

0xd36f,	// (0x0001ab17) area_vitu2_query_pane_t7

0x6647,	// (0x00013def) bg_button_pane_cp018_ParamLimits

0x6653,	// (0x00013dfb) bg_button_pane_cp021_ParamLimits

0x665f,	// (0x00013e07) bg_button_pane_cp022_ParamLimits

0x666e,	// (0x00013e16) bg_vkb2_func_pane_cp08_ParamLimits

0x6647,	// (0x00013def) bg_vkb2_func_pane_cp06_ParamLimits

0x6653,	// (0x00013dfb) bg_vkb2_func_pane_cp07_ParamLimits

0x667e,	// (0x00013e26) input_focus_pane_cp09_ParamLimits

0xd62d,	// (0x0001add5) cam6_autofocus_pane_ParamLimits

0xd62d,	// (0x0001add5) cam6_autofocus_pane

0x6b92,	// (0x0001433a) cam6_image_uncrop_pane_ParamLimits

0x6b92,	// (0x0001433a) cam6_image_uncrop_pane

0x6ba1,	// (0x00014349) cam6_indi_pane_ParamLimits

0x6ba1,	// (0x00014349) cam6_indi_pane

0x6bb7,	// (0x0001435f) cam6_mode_pane_ParamLimits

0x6bb7,	// (0x0001435f) cam6_mode_pane

0x6bc9,	// (0x00014371) cam6_timer_pane_ParamLimits

0x6bc9,	// (0x00014371) cam6_timer_pane

0x6bd5,	// (0x0001437d) cam6_zoom_pane_ParamLimits

0x6bd5,	// (0x0001437d) cam6_zoom_pane

0x6be1,	// (0x00014389) cam6_mode_pane_g1_ParamLimits

0x6be1,	// (0x00014389) cam6_mode_pane_g1

0x6bf1,	// (0x00014399) cam6_mode_pane_g2_ParamLimits

0x6bf1,	// (0x00014399) cam6_mode_pane_g2

0x6c01,	// (0x000143a9) cam6_mode_pane_g3_ParamLimits

0x6c01,	// (0x000143a9) cam6_mode_pane_g3

0x6c11,	// (0x000143b9) cam6_mode_pane_g4_ParamLimits

0x6c11,	// (0x000143b9) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x0001d262) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x0001d262) cam6_mode_pane_g

0xbdcd,	// (0x00019575) bg_tb_trans_pane_cp08_ParamLimits

0xbdcd,	// (0x00019575) bg_tb_trans_pane_cp08

0xd63b,	// (0x0001ade3) cam6_battery_pane_ParamLimits

0xd63b,	// (0x0001ade3) cam6_battery_pane

0xd651,	// (0x0001adf9) cam6_indi_pane_g1_ParamLimits

0xd651,	// (0x0001adf9) cam6_indi_pane_g1

0xd663,	// (0x0001ae0b) cam6_indi_pane_g2_ParamLimits

0xd663,	// (0x0001ae0b) cam6_indi_pane_g2

0xd675,	// (0x0001ae1d) cam6_indi_pane_g3_ParamLimits

0xd675,	// (0x0001ae1d) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x0001d26b) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x0001d26b) cam6_indi_pane_g

0xd687,	// (0x0001ae2f) cam6_indi_pane_t1_ParamLimits

0xd687,	// (0x0001ae2f) cam6_indi_pane_t1

0x6c21,	// (0x000143c9) cam6_autofocus_pane_g1

0x6c29,	// (0x000143d1) cam6_autofocus_pane_g2

0x6c31,	// (0x000143d9) cam6_autofocus_pane_g3

0x6c39,	// (0x000143e1) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x0001d272) cam6_autofocus_pane_g

0xd6ad,	// (0x0001ae55) cam6_timer_pane_g1

0xd6b5,	// (0x0001ae5d) cam6_timer_pane_t1

0xd6c3,	// (0x0001ae6b) cam6_zoom_cont_pane

0xd6cb,	// (0x0001ae73) cam6_zoom_pane_g1

0xd6d3,	// (0x0001ae7b) cam6_zoom_pane_g2

0x6c41,	// (0x000143e9) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x0001d27b) cam6_zoom_pane_g

0x9d86,	// (0x0001752e) cam6_battery_pane_g1

0x9d86,	// (0x0001752e) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) cam6_battery_pane_g

0xd6db,	// (0x0001ae83) cam6_zoom_cont_pane_g1

0xd6e4,	// (0x0001ae8c) cam6_zoom_cont_pane_g2

0xd6ed,	// (0x0001ae95) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x0001d282) cam6_zoom_cont_pane_g

0x6c5b,	// (0x00014403) cam6_mode_pane_cp_ParamLimits

0x6c5b,	// (0x00014403) cam6_mode_pane_cp

0x6bd5,	// (0x0001437d) cam6_zoom_pane_cp_ParamLimits

0x6bd5,	// (0x0001437d) cam6_zoom_pane_cp

0x6c6d,	// (0x00014415) vid6_image_uncrop_cif_pane_ParamLimits

0x6c6d,	// (0x00014415) vid6_image_uncrop_cif_pane

0x6c7d,	// (0x00014425) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c7d,	// (0x00014425) vid6_image_uncrop_nhd_pane

0x6b92,	// (0x0001433a) vid6_image_uncrop_vga_pane_ParamLimits

0x6b92,	// (0x0001433a) vid6_image_uncrop_vga_pane

0x6c8c,	// (0x00014434) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c8c,	// (0x00014434) vid6_image_uncrop_wvga_pane

0x6c9b,	// (0x00014443) vid6_indi_pane_ParamLimits

0x6c9b,	// (0x00014443) vid6_indi_pane

0xbdcd,	// (0x00019575) bg_tb_trans_pane_cp09_ParamLimits

0xbdcd,	// (0x00019575) bg_tb_trans_pane_cp09

0xd705,	// (0x0001aead) cam6_battery_pane_cp_ParamLimits

0xd705,	// (0x0001aead) cam6_battery_pane_cp

0xd711,	// (0x0001aeb9) vid6_indi_pane_g1_ParamLimits

0xd711,	// (0x0001aeb9) vid6_indi_pane_g1

0xd723,	// (0x0001aecb) vid6_indi_pane_g2_ParamLimits

0xd723,	// (0x0001aecb) vid6_indi_pane_g2

0xd735,	// (0x0001aedd) vid6_indi_pane_g3_ParamLimits

0xd735,	// (0x0001aedd) vid6_indi_pane_g3

0xd74a,	// (0x0001aef2) vid6_indi_pane_g4_ParamLimits

0xd74a,	// (0x0001aef2) vid6_indi_pane_g4

0xd75f,	// (0x0001af07) vid6_indi_pane_g5_ParamLimits

0xd75f,	// (0x0001af07) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x0001d289) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x0001d289) vid6_indi_pane_g

0xd779,	// (0x0001af21) vid6_indi_pane_t1_ParamLimits

0xd779,	// (0x0001af21) vid6_indi_pane_t1

0xd78f,	// (0x0001af37) vid6_indi_pane_t2_ParamLimits

0xd78f,	// (0x0001af37) vid6_indi_pane_t2

0xd7b7,	// (0x0001af5f) vid6_indi_pane_t3_ParamLimits

0xd7b7,	// (0x0001af5f) vid6_indi_pane_t3

0xd7df,	// (0x0001af87) vid6_indi_pane_t4_ParamLimits

0xd7df,	// (0x0001af87) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x0001d294) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x0001d294) vid6_indi_pane_t

0xd803,	// (0x0001afab) wait_bar_pane_cp08

0x6cb3,	// (0x0001445b) main_cset_text2_pane_t1_ParamLimits

0x6cb3,	// (0x0001445b) main_cset_text2_pane_t1

0x6c49,	// (0x000143f1) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c49,	// (0x000143f1) listscroll_gen_pane_cp06_t1

0x9307,	// (0x00016aaf) main_cam6_set_pane

0x9a6d,	// (0x00017215) bg_tb_trans_pane_cp06_ParamLimits

0xccc8,	// (0x0001a470) cam4_indicators_pane_g1_ParamLimits

0xccd9,	// (0x0001a481) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x0001d00c) cam4_indicators_pane_g_ParamLimits

0xccf7,	// (0x0001a49f) cam4_indicators_pane_t1_ParamLimits

0x9376,	// (0x00016b1e) bg_tb_trans_pane_cp07_ParamLimits

0xcd23,	// (0x0001a4cb) vid4_indicators_pane_g1_ParamLimits

0xcd37,	// (0x0001a4df) vid4_indicators_pane_g2_ParamLimits

0xcd4b,	// (0x0001a4f3) vid4_indicators_pane_g3_ParamLimits

0xcd5c,	// (0x0001a504) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x0001d01e) vid4_indicators_pane_g_ParamLimits

0xcd7a,	// (0x0001a522) vid4_indicators_pane_t1_ParamLimits

0xd3ec,	// (0x0001ab94) vid4_progress_pane_g1_ParamLimits

0xd3fc,	// (0x0001aba4) vid4_progress_pane_g2_ParamLimits

0x67ba,	// (0x00013f62) vid4_progress_pane_g3_ParamLimits

0xd40c,	// (0x0001abb4) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x0001d1c5) vid4_progress_pane_g_ParamLimits

0x67cc,	// (0x00013f74) vid4_progress_pane_t1_ParamLimits

0xd424,	// (0x0001abcc) vid4_progress_pane_t2_ParamLimits

0xd439,	// (0x0001abe1) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x0001d1d0) vid4_progress_pane_t_ParamLimits

0x67e4,	// (0x00013f8c) wait_bar_pane_cp07_ParamLimits

0x6cd0,	// (0x00014478) main_cam6_set_pane_g2_ParamLimits

0x6cd0,	// (0x00014478) main_cam6_set_pane_g2

0x6cf4,	// (0x0001449c) main_cset6_listscroll_pane_ParamLimits

0x6cf4,	// (0x0001449c) main_cset6_listscroll_pane

0x6d14,	// (0x000144bc) main_cset6_slider_pane_ParamLimits

0x6d14,	// (0x000144bc) main_cset6_slider_pane

0x6d2a,	// (0x000144d2) main_cset6_text2_pane_ParamLimits

0x6d2a,	// (0x000144d2) main_cset6_text2_pane

0xd812,	// (0x0001afba) main_cset6_text_pane

0xd81a,	// (0x0001afc2) main_cset_list_pane_copy1_ParamLimits

0xd81a,	// (0x0001afc2) main_cset_list_pane_copy1

0xd82a,	// (0x0001afd2) scroll_pane_cp028_copy1

0x6d38,	// (0x000144e0) cset_list_set_pane_copy1

0x6d49,	// (0x000144f1) aid_position_infowindow_above_copy1

0x6d51,	// (0x000144f9) aid_position_infowindow_below_copy1

0x6d59,	// (0x00014501) cset_list_set_pane_g1_copy1

0x6d61,	// (0x00014509) cset_list_set_pane_g3_copy1_ParamLimits

0x6d61,	// (0x00014509) cset_list_set_pane_g3_copy1

0x6d70,	// (0x00014518) cset_list_set_pane_t1_copy1_ParamLimits

0x6d70,	// (0x00014518) cset_list_set_pane_t1_copy1

0x9376,	// (0x00016b1e) list_highlight_pane_cp021_copy1_ParamLimits

0x9376,	// (0x00016b1e) list_highlight_pane_cp021_copy1

0xd833,	// (0x0001afdb) cset6_slider_pane_ParamLimits

0xd833,	// (0x0001afdb) cset6_slider_pane

0xd85f,	// (0x0001b007) main_cset6_slider_pane_g1_ParamLimits

0xd85f,	// (0x0001b007) main_cset6_slider_pane_g1

0x6d85,	// (0x0001452d) main_cset6_slider_pane_g2_ParamLimits

0x6d85,	// (0x0001452d) main_cset6_slider_pane_g2

0xd887,	// (0x0001b02f) main_cset6_slider_pane_g3_ParamLimits

0xd887,	// (0x0001b02f) main_cset6_slider_pane_g3

0x6dad,	// (0x00014555) main_cset6_slider_pane_g4_ParamLimits

0x6dad,	// (0x00014555) main_cset6_slider_pane_g4

0x6db9,	// (0x00014561) main_cset6_slider_pane_g5_ParamLimits

0x6db9,	// (0x00014561) main_cset6_slider_pane_g5

0xcf1e,	// (0x0001a6c6) main_cset6_slider_pane_g7_ParamLimits

0xcf1e,	// (0x0001a6c6) main_cset6_slider_pane_g7

0xcf2a,	// (0x0001a6d2) main_cset6_slider_pane_g8_ParamLimits

0xcf2a,	// (0x0001a6d2) main_cset6_slider_pane_g8

0x5e36,	// (0x000135de) main_cset6_slider_pane_g9_ParamLimits

0x5e36,	// (0x000135de) main_cset6_slider_pane_g9

0x5e42,	// (0x000135ea) main_cset6_slider_pane_g10_ParamLimits

0x5e42,	// (0x000135ea) main_cset6_slider_pane_g10

0x5e4e,	// (0x000135f6) main_cset6_slider_pane_g11_ParamLimits

0x5e4e,	// (0x000135f6) main_cset6_slider_pane_g11

0x5e5a,	// (0x00013602) main_cset6_slider_pane_g12_ParamLimits

0x5e5a,	// (0x00013602) main_cset6_slider_pane_g12

0x5e66,	// (0x0001360e) main_cset6_slider_pane_g13_ParamLimits

0x5e66,	// (0x0001360e) main_cset6_slider_pane_g13

0x5e72,	// (0x0001361a) main_cset6_slider_pane_g14_ParamLimits

0x5e72,	// (0x0001361a) main_cset6_slider_pane_g14

0x6dc5,	// (0x0001456d) main_cset6_slider_pane_g15_ParamLimits

0x6dc5,	// (0x0001456d) main_cset6_slider_pane_g15

0x5e96,	// (0x0001363e) main_cset6_slider_pane_g16_ParamLimits

0x5e96,	// (0x0001363e) main_cset6_slider_pane_g16

0x5ea2,	// (0x0001364a) main_cset6_slider_pane_g17_ParamLimits

0x5ea2,	// (0x0001364a) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x0001d29d) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x0001d29d) main_cset6_slider_pane_g

0xd893,	// (0x0001b03b) main_cset6_slider_pane_t1_ParamLimits

0xd893,	// (0x0001b03b) main_cset6_slider_pane_t1

0x6df5,	// (0x0001459d) main_cset6_slider_pane_t2_ParamLimits

0x6df5,	// (0x0001459d) main_cset6_slider_pane_t2

0x6e20,	// (0x000145c8) main_cset6_slider_pane_t3_ParamLimits

0x6e20,	// (0x000145c8) main_cset6_slider_pane_t3

0x6e4b,	// (0x000145f3) main_cset6_slider_pane_t4_ParamLimits

0x6e4b,	// (0x000145f3) main_cset6_slider_pane_t4

0x6e76,	// (0x0001461e) main_cset6_slider_pane_t5_ParamLimits

0x6e76,	// (0x0001461e) main_cset6_slider_pane_t5

0xd8d4,	// (0x0001b07c) main_cset6_slider_pane_t7_ParamLimits

0xd8d4,	// (0x0001b07c) main_cset6_slider_pane_t7

0x6ea1,	// (0x00014649) main_cset6_slider_pane_t8_ParamLimits

0x6ea1,	// (0x00014649) main_cset6_slider_pane_t8

0x6ec5,	// (0x0001466d) main_cset6_slider_pane_t9_ParamLimits

0x6ec5,	// (0x0001466d) main_cset6_slider_pane_t9

0x6ee9,	// (0x00014691) main_cset6_slider_pane_t10_ParamLimits

0x6ee9,	// (0x00014691) main_cset6_slider_pane_t10

0x6f0d,	// (0x000146b5) main_cset6_slider_pane_t11_ParamLimits

0x6f0d,	// (0x000146b5) main_cset6_slider_pane_t11

0xd90a,	// (0x0001b0b2) main_cset6_slider_pane_t14_ParamLimits

0xd90a,	// (0x0001b0b2) main_cset6_slider_pane_t14

0xd943,	// (0x0001b0eb) main_cset6_slider_pane_t15_ParamLimits

0xd943,	// (0x0001b0eb) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x0001d2c2) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x0001d2c2) main_cset6_slider_pane_t

0xd03c,	// (0x0001a7e4) cset_slider_pane_g1_copy1

0xd045,	// (0x0001a7ed) cset_slider_pane_g2_copy1

0xd04e,	// (0x0001a7f6) cset_slider_pane_g3_copy1

0x9307,	// (0x00016aaf) bg_popup_sub_pane_cp011_copy1

0xd97c,	// (0x0001b124) main_cset_text_pane_g1_copy1

0xd113,	// (0x0001a8bb) main_cset_text_pane_t1_copy1

0xd121,	// (0x0001a8c9) main_cset_text_pane_t2_copy1

0xd12f,	// (0x0001a8d7) main_cset_text_pane_t3_copy1

0xd13d,	// (0x0001a8e5) main_cset_text_pane_t4_copy1

0xd14b,	// (0x0001a8f3) main_cset_text_pane_t5_copy1

0xd984,	// (0x0001b12c) main_cset_text_pane_t6_copy1

0xd992,	// (0x0001b13a) main_cset_text_pane_t7_copy1

0x6cb3,	// (0x0001445b) main_cset_text2_pane_t1_copy1

0x9376,	// (0x00016b1e) main_ncimui_pane

0x3d0e,	// (0x000114b6) popup_query_ncimui_window_ParamLimits

0x3d0e,	// (0x000114b6) popup_query_ncimui_window

0xc3ce,	// (0x00019b76) field_cale_ev2_pane_g4_ParamLimits

0xc3ce,	// (0x00019b76) field_cale_ev2_pane_g4

0x4f62,	// (0x0001270a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4f62,	// (0x0001270a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x0001cfa6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x0001cfa6) cell_video_dialer_keypad_pane_g

0x4f7a,	// (0x00012722) cell_video_dialer_keypad_pane_t1

0x9307,	// (0x00016aaf) bg_popup_window_pane_cp012

0xbbc2,	// (0x0001936a) heading_pane_cp06

0xd9be,	// (0x0001b166) ncim_query_content_pane

0x9307,	// (0x00016aaf) bg_popup_heading_pane_cp01

0xd9c6,	// (0x0001b16e) ncim_heading_pane_t1

0xd9d4,	// (0x0001b17c) ncim_indicator_popup_pane

0xd9e6,	// (0x0001b18e) ncim_query_button_pane

0xd9fa,	// (0x0001b1a2) ncim_query_content_pane_t1

0xda0c,	// (0x0001b1b4) ncim_query_content_pane_t2

0x0005,

0xfb5e,	// (0x0001d306) ncim_query_content_pane_t

0xda46,	// (0x0001b1ee) ncim_query_list_pane

0xda58,	// (0x0001b200) ncim_query_popup_pane

0xd9d4,	// (0x0001b17c) ncim_indicator_popup_pane_ParamLimits

0x7077,	// (0x0001481f) ncim_query_content_pane_g1_ParamLimits

0x7077,	// (0x0001481f) ncim_query_content_pane_g1

0xd9fa,	// (0x0001b1a2) ncim_query_content_pane_t1_ParamLimits

0xda0c,	// (0x0001b1b4) ncim_query_content_pane_t2_ParamLimits

0x7083,	// (0x0001482b) ncim_query_content_pane_t3_ParamLimits

0x7083,	// (0x0001482b) ncim_query_content_pane_t3

0x70ab,	// (0x00014853) ncim_query_content_pane_t4_ParamLimits

0x70ab,	// (0x00014853) ncim_query_content_pane_t4

0x70d3,	// (0x0001487b) ncim_query_content_pane_t5_ParamLimits

0x70d3,	// (0x0001487b) ncim_query_content_pane_t5

0xda1e,	// (0x0001b1c6) ncim_query_content_pane_t6_ParamLimits

0xda1e,	// (0x0001b1c6) ncim_query_content_pane_t6

0xfb5e,	// (0x0001d306) ncim_query_content_pane_t_ParamLimits

0xda46,	// (0x0001b1ee) ncim_query_list_pane_ParamLimits

0xda58,	// (0x0001b200) ncim_query_popup_pane_ParamLimits

0xda6c,	// (0x0001b214) wait_bar_pane_cp04

0x9307,	// (0x00016aaf) input_focus_pane_cp011

0xda74,	// (0x0001b21c) ncim_query_popup_pane_t1

0xda82,	// (0x0001b22a) ncim_list_query_list_pane_ParamLimits

0xda82,	// (0x0001b22a) ncim_list_query_list_pane

0x9307,	// (0x00016aaf) bg_button_pane_cp027

0xda8f,	// (0x0001b237) ncim_query_button_pane_g1

0x9307,	// (0x00016aaf) list_highlight_pane_cp012

0xda99,	// (0x0001b241) ncim_list_query_list_pane_g1

0xdaa1,	// (0x0001b249) ncim_list_query_list_pane_t1

0xcce8,	// (0x0001a490) cam4_indicators_pane_g3_ParamLimits

0xcce8,	// (0x0001a490) cam4_indicators_pane_g3

0xcd68,	// (0x0001a510) vid4_indicators_pane_g5_ParamLimits

0xcd68,	// (0x0001a510) vid4_indicators_pane_g5

0xd418,	// (0x0001abc0) vid4_progress_pane_g5_ParamLimits

0xd418,	// (0x0001abc0) vid4_progress_pane_g5

0x6f62,	// (0x0001470a) main_ncimui_pane_g1

0x6fcb,	// (0x00014773) ncimui_group_query_pane_ParamLimits

0x6fcb,	// (0x00014773) ncimui_group_query_pane

0x7013,	// (0x000147bb) ncimui_list_pane_ParamLimits

0x7013,	// (0x000147bb) ncimui_list_pane

0x703a,	// (0x000147e2) ncimui_text_pane_ParamLimits

0x703a,	// (0x000147e2) ncimui_text_pane

0x70fb,	// (0x000148a3) ncimui_text_pane_t1_ParamLimits

0x70fb,	// (0x000148a3) ncimui_text_pane_t1

0xdaaf,	// (0x0001b257) ncimui_list_single_graphic_pane_ParamLimits

0xdaaf,	// (0x0001b257) ncimui_list_single_graphic_pane

0x7119,	// (0x000148c1) ncimui_query_pane_ParamLimits

0x7119,	// (0x000148c1) ncimui_query_pane

0x9307,	// (0x00016aaf) list_highlight_pane_cp013

0xdabf,	// (0x0001b267) ncim_list_query_list_pane_t1_copy1

0xda99,	// (0x0001b241) ncim_list_single_graphic_pane_g1

0x712c,	// (0x000148d4) ncim_query_button_pane_cp01

0x7138,	// (0x000148e0) ncim_query_entry_pane_ParamLimits

0x7138,	// (0x000148e0) ncim_query_entry_pane

0x714b,	// (0x000148f3) ncimui_query_pane_g1

0x7157,	// (0x000148ff) ncimui_query_pane_t1_ParamLimits

0x7157,	// (0x000148ff) ncimui_query_pane_t1

0x9376,	// (0x00016b1e) input_focus_pane_cp012

0xdacd,	// (0x0001b275) ncim_query_entry_pane_t1

0x9b01,	// (0x000172a9) main_im_pane_ParamLimits

0x9376,	// (0x00016b1e) main_mobtv_pane_ParamLimits

0x9376,	// (0x00016b1e) main_mobtv_pane

0x6ddd,	// (0x00014585) main_cset6_slider_pane_g18_ParamLimits

0x6ddd,	// (0x00014585) main_cset6_slider_pane_g18

0x6de9,	// (0x00014591) main_cset6_slider_pane_g19_ParamLimits

0x6de9,	// (0x00014591) main_cset6_slider_pane_g19

0x9a89,	// (0x00017231) bg_main_mobtv_pane_ParamLimits

0x9a89,	// (0x00017231) bg_main_mobtv_pane

0x7170,	// (0x00014918) main_mobtv_info_pane

0x7179,	// (0x00014921) main_mobtv_loading_pane_ParamLimits

0x7179,	// (0x00014921) main_mobtv_loading_pane

0xdadf,	// (0x0001b287) main_mobtv_pg_channel_list_pane

0xdae9,	// (0x0001b291) main_mobtv_pg_hdr_pane

0x7186,	// (0x0001492e) main_mobtv_programe_curr_pane_ParamLimits

0x7186,	// (0x0001492e) main_mobtv_programe_curr_pane

0x7193,	// (0x0001493b) main_mobtv_programe_next_pane_ParamLimits

0x7193,	// (0x0001493b) main_mobtv_programe_next_pane

0xdaf2,	// (0x0001b29a) popup_mobtv_noti_window

0x9d86,	// (0x0001752e) main_tv_pg_hdr_pane_g1

0xdafa,	// (0x0001b2a2) main_tv_pg_hdr_pane_g2

0xdb02,	// (0x0001b2aa) main_tv_pg_hdr_pane_g3

0xdb0a,	// (0x0001b2b2) main_tv_pg_hdr_pane_g4

0xdb12,	// (0x0001b2ba) main_tv_pg_hdr_pane_g5

0xdb1c,	// (0x0001b2c4) main_tv_pg_hdr_pane_g6

0xdb26,	// (0x0001b2ce) main_tv_pg_hdr_pane_g7

0xdb30,	// (0x0001b2d8) main_tv_pg_hdr_pane_g8

0xdb3a,	// (0x0001b2e2) main_tv_pg_hdr_pane_g9

0xdb44,	// (0x0001b2ec) main_tv_pg_hdr_pane_g10

0xdb4e,	// (0x0001b2f6) main_tv_pg_hdr_pane_g11

0x000a,

0xfb6b,	// (0x0001d313) main_tv_pg_hdr_pane_g

0xdb58,	// (0x0001b300) main_tv_pg_hdr_pane_t1

0xdb66,	// (0x0001b30e) main_tv_pg_hdr_pane_t2

0xdb74,	// (0x0001b31c) main_tv_pg_hdr_pane_t3

0xdb84,	// (0x0001b32c) main_tv_pg_hdr_pane_t4

0xdb94,	// (0x0001b33c) main_tv_pg_hdr_pane_t5

0x0004,

0xfb82,	// (0x0001d32a) main_tv_pg_hdr_pane_t

0xdba4,	// (0x0001b34c) single_mobtv_pg_channel_pane_ParamLimits

0xdba4,	// (0x0001b34c) single_mobtv_pg_channel_pane

0xdbb6,	// (0x0001b35e) single_mobtv_pg_channel_table_pane

0xdbbf,	// (0x0001b367) single_mobtv_pg_channel_thumb_pane

0xdbc8,	// (0x0001b370) single_tv_pg_channel_pane_g1

0xdbd1,	// (0x0001b379) single_tv_pg_channel_pane_g2

0x0001,

0xfb8d,	// (0x0001d335) single_tv_pg_channel_pane_g

0x9a6d,	// (0x00017215) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9a6d,	// (0x00017215) bg_single_mobtv_pg_channel_thumb_pane

0xdbda,	// (0x0001b382) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdbda,	// (0x0001b382) single_mobtv_pg_channel_thumb_pane_g1

0xdbe8,	// (0x0001b390) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdbe8,	// (0x0001b390) single_mobtv_pg_channel_thumb_pane_g2

0xdbf4,	// (0x0001b39c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdbf4,	// (0x0001b39c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb92,	// (0x0001d33a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb92,	// (0x0001d33a) single_mobtv_pg_channel_thumb_pane_g

0xdc00,	// (0x0001b3a8) single_mobtv_pg_channel_thumb_pane_t1

0xdc0e,	// (0x0001b3b6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb99,	// (0x0001d341) single_mobtv_pg_channel_thumb_pane_t

0x9d86,	// (0x0001752e) bg_single_mobtv_pg_channel_table_pane_g1

0x9d86,	// (0x0001752e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0001cb66) bg_single_mobtv_pg_channel_table_pane_g

0xdc1c,	// (0x0001b3c4) single_mobtv_pg_channel_table_pane_t1

0xdc2a,	// (0x0001b3d2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9e,	// (0x0001d346) single_mobtv_pg_channel_table_pane_t

0x71a8,	// (0x00014950) main_mobtv_info_pane_g1_ParamLimits

0x71a8,	// (0x00014950) main_mobtv_info_pane_g1

0x71c6,	// (0x0001496e) main_mobtv_info_pane_t1_ParamLimits

0x71c6,	// (0x0001496e) main_mobtv_info_pane_t1

0x723e,	// (0x000149e6) main_mobtv_info_pane_t2_ParamLimits

0x723e,	// (0x000149e6) main_mobtv_info_pane_t2

0x0002,

0xfba8,	// (0x0001d350) main_mobtv_info_pane_t_ParamLimits

0xfba8,	// (0x0001d350) main_mobtv_info_pane_t

0x72cd,	// (0x00014a75) wait_bar_pane_cp05

0x72df,	// (0x00014a87) main_mobtv_loading_pane_g1_ParamLimits

0x72df,	// (0x00014a87) main_mobtv_loading_pane_g1

0x72f2,	// (0x00014a9a) main_mobtv_loading_pane_g2_ParamLimits

0x72f2,	// (0x00014a9a) main_mobtv_loading_pane_g2

0x72fe,	// (0x00014aa6) main_mobtv_loading_pane_g3_ParamLimits

0x72fe,	// (0x00014aa6) main_mobtv_loading_pane_g3

0x0002,

0xfbaf,	// (0x0001d357) main_mobtv_loading_pane_g_ParamLimits

0xfbaf,	// (0x0001d357) main_mobtv_loading_pane_g

0xdc38,	// (0x0001b3e0) main_mobtv_loading_pane_t1_ParamLimits

0xdc38,	// (0x0001b3e0) main_mobtv_loading_pane_t1

0xdc50,	// (0x0001b3f8) main_mobtv_loading_pane_t2_ParamLimits

0xdc50,	// (0x0001b3f8) main_mobtv_loading_pane_t2

0x0001,

0xfbb6,	// (0x0001d35e) main_mobtv_loading_pane_t_ParamLimits

0xfbb6,	// (0x0001d35e) main_mobtv_loading_pane_t

0x7311,	// (0x00014ab9) wait_bar_pane_cp06_ParamLimits

0x7311,	// (0x00014ab9) wait_bar_pane_cp06

0xdc74,	// (0x0001b41c) main_mobtv_programe_curr_pane_t1

0xdc82,	// (0x0001b42a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbbb,	// (0x0001d363) main_mobtv_programe_curr_pane_t

0xdc90,	// (0x0001b438) main_mobtv_programe_next_pane_t1

0xdc9e,	// (0x0001b446) main_mobtv_programe_next_pane_t2

0xdcac,	// (0x0001b454) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc0,	// (0x0001d368) main_mobtv_programe_next_pane_t

0x9307,	// (0x00016aaf) bg_popup_mobtv_noti_window_pane

0xdcba,	// (0x0001b462) popup_mobtv_noti_window_g1

0xdcc2,	// (0x0001b46a) popup_mobtv_noti_window_t1

0xdcd0,	// (0x0001b478) popup_mobtv_noti_window_t2

0x0001,

0xfbc7,	// (0x0001d36f) popup_mobtv_noti_window_t

0x9d86,	// (0x0001752e) bg_popup_mobtv_noti_window_pane_g1

0x9307,	// (0x00016aaf) sc_clock_pane

0x9307,	// (0x00016aaf) main_fs_bigclock_pane

0x6a07,	// (0x000141af) blid2_tripm_pane_t4_ParamLimits

0x6a07,	// (0x000141af) blid2_tripm_pane_t4

0x7320,	// (0x00014ac8) sc_clock_pane_g1_ParamLimits

0x7320,	// (0x00014ac8) sc_clock_pane_g1

0x7332,	// (0x00014ada) sc_clock_pane_t1_ParamLimits

0x7332,	// (0x00014ada) sc_clock_pane_t1

0x7354,	// (0x00014afc) sc_clock_pane_t2_ParamLimits

0x7354,	// (0x00014afc) sc_clock_pane_t2

0x736c,	// (0x00014b14) sc_clock_pane_t3_ParamLimits

0x736c,	// (0x00014b14) sc_clock_pane_t3

0x0004,

0xfbcc,	// (0x0001d374) sc_clock_pane_t_ParamLimits

0xfbcc,	// (0x0001d374) sc_clock_pane_t

0x8050,	// (0x000157f8) main_fs_bigclock_indicator_pane_ParamLimits

0x8050,	// (0x000157f8) main_fs_bigclock_indicator_pane

0x7412,	// (0x00014bba) main_fs_bigclock_pane_g1_ParamLimits

0x7412,	// (0x00014bba) main_fs_bigclock_pane_g1

0x805c,	// (0x00015804) main_fs_bigclock_pane_t1_ParamLimits

0x805c,	// (0x00015804) main_fs_bigclock_pane_t1

0x806e,	// (0x00015816) main_fs_bigclock_pane_t2_ParamLimits

0x806e,	// (0x00015816) main_fs_bigclock_pane_t2

0x8082,	// (0x0001582a) main_fs_bigclock_pane_t3_ParamLimits

0x8082,	// (0x0001582a) main_fs_bigclock_pane_t3

0x0002,

0xfd5d,	// (0x0001d505) main_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x0001d505) main_fs_bigclock_pane_t

0xe8af,	// (0x0001c057) main_fs_bigclock_indicator_pane_g1

0xd9ee,	// (0x0001b196) ncim_query_content_pane_g2_ParamLimits

0xd9ee,	// (0x0001b196) ncim_query_content_pane_g2

0x0001,

0xfb59,	// (0x0001d301) ncim_query_content_pane_g_ParamLimits

0xfb59,	// (0x0001d301) ncim_query_content_pane_g

0x7385,	// (0x00014b2d) sc_clock_pane_t4_ParamLimits

0x7385,	// (0x00014b2d) sc_clock_pane_t4

0x9376,	// (0x00016b1e) main_radioblah_pane

0xcc14,	// (0x0001a3bc) cell_call4_button_pane_t1_copy1_ParamLimits

0xcc14,	// (0x0001a3bc) cell_call4_button_pane_t1_copy1

0x6f7a,	// (0x00014722) main_ncimui_pane_t1_ParamLimits

0x6f7a,	// (0x00014722) main_ncimui_pane_t1

0x6f94,	// (0x0001473c) main_ncimui_pane_t2_ParamLimits

0x6f94,	// (0x0001473c) main_ncimui_pane_t2

0x0002,

0xfb52,	// (0x0001d2fa) main_ncimui_pane_t_ParamLimits

0xfb52,	// (0x0001d2fa) main_ncimui_pane_t

0xde15,	// (0x0001b5bd) main_radioblah_anim_pane_ParamLimits

0xde15,	// (0x0001b5bd) main_radioblah_anim_pane

0xde26,	// (0x0001b5ce) main_radioblah_info_pane_ParamLimits

0xde26,	// (0x0001b5ce) main_radioblah_info_pane

0xde3a,	// (0x0001b5e2) main_radioblah_pane_t1_ParamLimits

0xde3a,	// (0x0001b5e2) main_radioblah_pane_t1

0xde56,	// (0x0001b5fe) main_radioblah_pane_t2_ParamLimits

0xde56,	// (0x0001b5fe) main_radioblah_pane_t2

0x0003,

0xfbed,	// (0x0001d395) main_radioblah_pane_t_ParamLimits

0xfbed,	// (0x0001d395) main_radioblah_pane_t

0x7471,	// (0x00014c19) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7471,	// (0x00014c19) main_radioblah_rocker_ctrl_pane

0xde9e,	// (0x0001b646) main_radioblah_info_pane_t1_ParamLimits

0xde9e,	// (0x0001b646) main_radioblah_info_pane_t1

0x74c9,	// (0x00014c71) main_radioblah_info_pane_t2_ParamLimits

0x74c9,	// (0x00014c71) main_radioblah_info_pane_t2

0x0003,

0xfbf6,	// (0x0001d39e) main_radioblah_info_pane_t_ParamLimits

0xfbf6,	// (0x0001d39e) main_radioblah_info_pane_t

0x9d86,	// (0x0001752e) main_radioblah_rocker_ctrl_pane_g1

0x7579,	// (0x00014d21) main_radioblah_rocker_ctrl_pane_g2

0x7581,	// (0x00014d29) main_radioblah_rocker_ctrl_pane_g3

0x7589,	// (0x00014d31) main_radioblah_rocker_ctrl_pane_g4

0x7591,	// (0x00014d39) main_radioblah_rocker_ctrl_pane_g5

0x7599,	// (0x00014d41) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbff,	// (0x0001d3a7) main_radioblah_rocker_ctrl_pane_g

0x6cb3,	// (0x0001445b) main_cset_text2_pane_t1_copy1_ParamLimits

0xccb8,	// (0x0001a460) cam4_image_uncrop_qvga_pane

0xcd11,	// (0x0001a4b9) vid4_image_uncrop_qcif_pane

0xd62d,	// (0x0001add5) cam6_image_uncrop_qvga_pane_ParamLimits

0xd62d,	// (0x0001add5) cam6_image_uncrop_qvga_pane

0xd6f5,	// (0x0001ae9d) vid6_image_uncrop_qcif_pane_ParamLimits

0xd6f5,	// (0x0001ae9d) vid6_image_uncrop_qcif_pane

0x9307,	// (0x00016aaf) bg_popup_preview_window_pane_cp03

0xd9a0,	// (0x0001b148) list_cset_text2_pane

0xd9a8,	// (0x0001b150) main_cset6_text2_pane_g1

0xd9b0,	// (0x0001b158) main_cset6_text2_pane_t1

0x75a1,	// (0x00014d49) list_cset_text2_pane_t1_ParamLimits

0x75a1,	// (0x00014d49) list_cset_text2_pane_t1

0x9376,	// (0x00016b1e) main_radioblah_pane_ParamLimits

0x72b9,	// (0x00014a61) main_mobtv_info_pane_t3_ParamLimits

0x72b9,	// (0x00014a61) main_mobtv_info_pane_t3

0x745f,	// (0x00014c07) main_radioblah_pane_g1

0x7499,	// (0x00014c41) main_radioblah_info_pane_g1

0x751e,	// (0x00014cc6) main_radioblah_info_pane_t3_ParamLimits

0x751e,	// (0x00014cc6) main_radioblah_info_pane_t3

0x2ab4,	// (0x0001025c) highlight_cell_cale_month_pane_ParamLimits

0x2ab4,	// (0x0001025c) highlight_cell_cale_month_pane

0x9307,	// (0x00016aaf) main_phob_fisheye_pane

0xc443,	// (0x00019beb) scroll_pane_cp0031_ParamLimits

0xc443,	// (0x00019beb) scroll_pane_cp0031

0xd803,	// (0x0001afab) wait_bar_pane_cp08_ParamLimits

0x6d38,	// (0x000144e0) cset_list_set_pane_copy1_ParamLimits

0xded8,	// (0x0001b680) highlight_cell_cale_month_pane_g1

0x75ba,	// (0x00014d62) highlight_cell_cale_month_pane_t1

0xd3db,	// (0x0001ab83) list_gen_pane_cp01

0xcf09,	// (0x0001a6b1) scroll_pane_01

0x75c8,	// (0x00014d70) list_single_double_fisheye_pane

0x75d1,	// (0x00014d79) list_double_fisheye_pane_g1_ParamLimits

0x75d1,	// (0x00014d79) list_double_fisheye_pane_g1

0x75dd,	// (0x00014d85) list_double_fisheye_pane_g2_ParamLimits

0x75dd,	// (0x00014d85) list_double_fisheye_pane_g2

0x75f1,	// (0x00014d99) list_double_fisheye_pane_g3_ParamLimits

0x75f1,	// (0x00014d99) list_double_fisheye_pane_g3

0x0004,

0xfc0c,	// (0x0001d3b4) list_double_fisheye_pane_g_ParamLimits

0xfc0c,	// (0x0001d3b4) list_double_fisheye_pane_g

0x761a,	// (0x00014dc2) list_double_fisheye_pane_t1_ParamLimits

0x761a,	// (0x00014dc2) list_double_fisheye_pane_t1

0x7635,	// (0x00014ddd) list_double_fisheye_pane_t2_ParamLimits

0x7635,	// (0x00014ddd) list_double_fisheye_pane_t2

0x0001,

0xfc17,	// (0x0001d3bf) list_double_fisheye_pane_t_ParamLimits

0xfc17,	// (0x0001d3bf) list_double_fisheye_pane_t

0x9307,	// (0x00016aaf) main_call5_pane

0x73b0,	// (0x00014b58) sc_swipe_pane_ParamLimits

0x73b0,	// (0x00014b58) sc_swipe_pane

0x766a,	// (0x00014e12) call5_image_pane_ParamLimits

0x766a,	// (0x00014e12) call5_image_pane

0x7687,	// (0x00014e2f) call5_swipe_1_pane_ParamLimits

0x7687,	// (0x00014e2f) call5_swipe_1_pane

0x769a,	// (0x00014e42) call5_swipe_2_pane_ParamLimits

0x769a,	// (0x00014e42) call5_swipe_2_pane

0x76c5,	// (0x00014e6d) popup_call5_audio_first_window_ParamLimits

0x76c5,	// (0x00014e6d) popup_call5_audio_first_window

0x9a6d,	// (0x00017215) call5_swipe_1_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) call5_swipe_1_pane_g1

0xdee0,	// (0x0001b688) call5_swipe_1_pane_g2_ParamLimits

0xdee0,	// (0x0001b688) call5_swipe_1_pane_g2

0x0001,

0xfc1c,	// (0x0001d3c4) call5_swipe_1_pane_g_ParamLimits

0xfc1c,	// (0x0001d3c4) call5_swipe_1_pane_g

0xdeec,	// (0x0001b694) call5_swipe_1_pane_t1_ParamLimits

0xdeec,	// (0x0001b694) call5_swipe_1_pane_t1

0x9a6d,	// (0x00017215) call5_swipe_2_pane_g1_ParamLimits

0x9a6d,	// (0x00017215) call5_swipe_2_pane_g1

0xdf01,	// (0x0001b6a9) call5_swipe_2_pane_g2_ParamLimits

0xdf01,	// (0x0001b6a9) call5_swipe_2_pane_g2

0x0001,

0xfc21,	// (0x0001d3c9) call5_swipe_2_pane_g_ParamLimits

0xfc21,	// (0x0001d3c9) call5_swipe_2_pane_g

0xdf0d,	// (0x0001b6b5) call5_swipe_2_pane_t1_ParamLimits

0xdf0d,	// (0x0001b6b5) call5_swipe_2_pane_t1

0xdf22,	// (0x0001b6ca) sc_swipe_pane_g1_ParamLimits

0xdf22,	// (0x0001b6ca) sc_swipe_pane_g1

0xdf2f,	// (0x0001b6d7) sc_swipe_pane_g2_ParamLimits

0xdf2f,	// (0x0001b6d7) sc_swipe_pane_g2

0x0001,

0xfc26,	// (0x0001d3ce) sc_swipe_pane_g_ParamLimits

0xfc26,	// (0x0001d3ce) sc_swipe_pane_g

0xdf3b,	// (0x0001b6e3) sc_swipe_pane_t1_ParamLimits

0xdf3b,	// (0x0001b6e3) sc_swipe_pane_t1

0x9307,	// (0x00016aaf) main_cmail_launcher_pane

0x76d6,	// (0x00014e7e) aid_size_cell_cmail_l_ParamLimits

0x76d6,	// (0x00014e7e) aid_size_cell_cmail_l

0x76e4,	// (0x00014e8c) grid_cmail_l_pane_ParamLimits

0x76e4,	// (0x00014e8c) grid_cmail_l_pane

0x76fe,	// (0x00014ea6) cell_cmail_l_pane_ParamLimits

0x76fe,	// (0x00014ea6) cell_cmail_l_pane

0xdf50,	// (0x0001b6f8) cell_cmail_l_pane_g1_ParamLimits

0xdf50,	// (0x0001b6f8) cell_cmail_l_pane_g1

0xdf5c,	// (0x0001b704) cell_cmail_l_pane_t1_ParamLimits

0xdf5c,	// (0x0001b704) cell_cmail_l_pane_t1

0xdf72,	// (0x0001b71a) cell_cmail_l_pane_t2_ParamLimits

0xdf72,	// (0x0001b71a) cell_cmail_l_pane_t2

0x0001,

0xfc2b,	// (0x0001d3d3) cell_cmail_l_pane_t_ParamLimits

0xfc2b,	// (0x0001d3d3) cell_cmail_l_pane_t

0x9376,	// (0x00016b1e) grid_highlight_pane_cp018_ParamLimits

0x9376,	// (0x00016b1e) grid_highlight_pane_cp018

0x0ee5,	// (0x0000e68d) main2_pane_ParamLimits

0x0ee5,	// (0x0000e68d) main2_pane

0x9bbd,	// (0x00017365) popup_sp_fs_action_menu_bg_pane_g1

0x9bc5,	// (0x0001736d) popup_sp_fs_action_menu_bg_pane_g2

0x9bcd,	// (0x00017375) popup_sp_fs_action_menu_bg_pane_g3

0x9bd5,	// (0x0001737d) popup_sp_fs_action_menu_bg_pane_g4

0x9bdd,	// (0x00017385) popup_sp_fs_action_menu_bg_pane_g5

0x9be5,	// (0x0001738d) popup_sp_fs_action_menu_bg_pane_g6

0x9bed,	// (0x00017395) popup_sp_fs_action_menu_bg_pane_g7

0x9bf5,	// (0x0001739d) popup_sp_fs_action_menu_bg_pane_g8

0x9bfd,	// (0x000173a5) popup_sp_fs_action_menu_bg_pane_g9

0x9c05,	// (0x000173ad) popup_sp_fs_action_menu_bg_pane_g10

0x9c05,	// (0x000173ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0001c8d3) popup_sp_fs_action_menu_bg_pane_g

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g2

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001c981) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001c981) list_medium_line_x2_t3_g3_g

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t2

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g3_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t3_g2_g

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t2

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g2_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g2

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g3

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c994) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c994) list_medium_line_x2_t4_g4_g

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t2

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t3

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c99d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c99d) list_medium_line_x2_t4_g4_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g2

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g3

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0001c994) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0001c994) list_medium_line_x2_t2_g4_g

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g4_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g4_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g2

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001c981) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001c981) list_medium_line_x2_t2_g3_g

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g3_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g3_t

0x2c06,	// (0x000103ae) main_sp_fs_list_pane_ParamLimits

0x2c06,	// (0x000103ae) main_sp_fs_list_pane

0xcc9e,	// (0x0001a446) sp_fs_scroll_pane_ParamLimits

0xcc9e,	// (0x0001a446) sp_fs_scroll_pane

0xa2dc,	// (0x00017a84) list_medium_line_x2_t3_t1

0xa2dc,	// (0x00017a84) list_medium_line_x2_t3_t2

0xa2dc,	// (0x00017a84) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0001ca4a) list_medium_line_x2_t3_t

0xa2dc,	// (0x00017a84) list_medium_line_x3_t4_t1

0xa2dc,	// (0x00017a84) list_medium_line_x3_t4_t2

0xa2dc,	// (0x00017a84) list_medium_line_x3_t4_t3

0xa2dc,	// (0x00017a84) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0001ca51) list_medium_line_x3_t4_t

0xa2dc,	// (0x00017a84) list_medium_line_x4_t5_t1

0xa2dc,	// (0x00017a84) list_medium_line_x4_t5_t2

0xa2dc,	// (0x00017a84) list_medium_line_x4_t5_t3

0xa2dc,	// (0x00017a84) list_medium_line_x4_t5_t4

0xa2dc,	// (0x00017a84) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0001ca5a) list_medium_line_x4_t5_t

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g1

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g2

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g3

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c994) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c994) list_medium_line_t4_g4_g

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t1

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t2

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t3

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t4_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c99d) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c99d) list_medium_line_t4_g4_t

0x2ca1,	// (0x00010449) chi_dic_find_pane_g1

0x3ad8,	// (0x00011280) main_tport_pane

0xa2dc,	// (0x00017a84) list_medium_line_plain_t1

0x9a6d,	// (0x00017215) list_medium_line_t2_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_t2_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_t2_g2_g

0x9d58,	// (0x00017500) list_medium_line_t2_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_g2_t1

0x9d58,	// (0x00017500) list_medium_line_t2_g2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_t2_g2_t

0xd44e,	// (0x0001abf6) aid_sp_fs_list_icon_a_sm

0xd456,	// (0x0001abfe) aid_sp_fs_list_icon_d

0xd45e,	// (0x0001ac06) aid_sp_fs_text_primary

0xd467,	// (0x0001ac0f) aid_sp_fs_text_secondary

0x9307,	// (0x00016aaf) list_medium_line

0x9307,	// (0x00016aaf) list_medium_line_g2

0x9307,	// (0x00016aaf) list_medium_line_g3

0x9307,	// (0x00016aaf) list_medium_line_plain

0x9307,	// (0x00016aaf) list_medium_line_plain_t2

0x9307,	// (0x00016aaf) list_medium_line_plain_t3

0x9307,	// (0x00016aaf) list_medium_line_right_icon

0x9307,	// (0x00016aaf) list_medium_line_right_iconx2

0x9307,	// (0x00016aaf) list_medium_line_t2

0x9307,	// (0x00016aaf) list_medium_line_t2_g2

0x9307,	// (0x00016aaf) list_medium_line_t2_g3

0x9307,	// (0x00016aaf) list_medium_line_t2_right_icon

0x9307,	// (0x00016aaf) list_medium_line_t2_right_iconx2

0x9307,	// (0x00016aaf) list_medium_line_t3

0x9307,	// (0x00016aaf) list_medium_line_t3_g2

0x9307,	// (0x00016aaf) list_medium_line_t3_g3

0x9307,	// (0x00016aaf) list_medium_line_t3_right_iconx2

0x9307,	// (0x00016aaf) list_medium_line_t4_g4

0x9307,	// (0x00016aaf) list_medium_line_x2

0x9307,	// (0x00016aaf) list_medium_line_x2_t2_g2

0x9307,	// (0x00016aaf) list_medium_line_x2_t2_g3

0x9307,	// (0x00016aaf) list_medium_line_x2_t2_g4

0x9307,	// (0x00016aaf) list_medium_line_x2_t3

0x9307,	// (0x00016aaf) list_medium_line_x2_t3_g2

0x9307,	// (0x00016aaf) list_medium_line_x2_t3_g3

0x9307,	// (0x00016aaf) list_medium_line_x2_t3_g4

0x9307,	// (0x00016aaf) list_medium_line_x2_t4_g2

0x9307,	// (0x00016aaf) list_medium_line_x2_t4_g4

0x9307,	// (0x00016aaf) list_medium_line_x3

0x9307,	// (0x00016aaf) list_medium_line_x3_t4

0x9307,	// (0x00016aaf) list_medium_line_x3_t4_g4

0x9307,	// (0x00016aaf) list_medium_line_x4_t4

0x9307,	// (0x00016aaf) list_medium_line_x4_t4_g7

0x9307,	// (0x00016aaf) list_medium_line_x4_t5

0x67f7,	// (0x00013f9f) list_single_fs_dyc_pane_ParamLimits

0x67f7,	// (0x00013f9f) list_single_fs_dyc_pane

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g1

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g2

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g3

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g4

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g5

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x4_t4_g7_g6

0x9a7b,	// (0x00017223) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9a7b,	// (0x00017223) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb33,	// (0x0001d2db) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb33,	// (0x0001d2db) list_medium_line_x4_t4_g7_g

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t1

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t2

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x4_t4_g7_t3

0xa929,	// (0x000180d1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa929,	// (0x000180d1) list_medium_line_x4_t4_g7_t4

0xa929,	// (0x000180d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa929,	// (0x000180d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb42,	// (0x0001d2ea) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb42,	// (0x0001d2ea) list_medium_line_x4_t4_g7_t

0x6f31,	// (0x000146d9) list_single_dyc_row_pane_ParamLimits

0x6f31,	// (0x000146d9) list_single_dyc_row_pane

0x7657,	// (0x00014dff) call5_gesture_pane_ParamLimits

0x7657,	// (0x00014dff) call5_gesture_pane

0x76ad,	// (0x00014e55) call5_windows_pane_ParamLimits

0x76ad,	// (0x00014e55) call5_windows_pane

0x7718,	// (0x00014ec0) call5_swipe_1_pane_cp_ParamLimits

0x7718,	// (0x00014ec0) call5_swipe_1_pane_cp

0x7724,	// (0x00014ecc) call5_swipe_2_pane_cp_ParamLimits

0x7724,	// (0x00014ecc) call5_swipe_2_pane_cp

0x9d46,	// (0x000174ee) call5_image_pane_cp

0x7730,	// (0x00014ed8) popup_call5_audio_first_window_cp_ParamLimits

0x7730,	// (0x00014ed8) popup_call5_audio_first_window_cp

0xdf22,	// (0x0001b6ca) call5_swipe_1_pane_g1_cp_ParamLimits

0xdf22,	// (0x0001b6ca) call5_swipe_1_pane_g1_cp

0xdf8f,	// (0x0001b737) call5_swipe_1_pane_g2_cp

0xdf3b,	// (0x0001b6e3) call5_swipe_1_pane_t1_cp_ParamLimits

0xdf3b,	// (0x0001b6e3) call5_swipe_1_pane_t1_cp

0xdf22,	// (0x0001b6ca) call5_swipe_2_pane_g1_cp_ParamLimits

0xdf22,	// (0x0001b6ca) call5_swipe_2_pane_g1_cp

0xdf97,	// (0x0001b73f) call5_swipe_2_pane_g2_cp

0xdf9f,	// (0x0001b747) call5_swipe_2_pane_t1_cp_ParamLimits

0xdf9f,	// (0x0001b747) call5_swipe_2_pane_t1_cp

0x9376,	// (0x00016b1e) main_sp_fs_email_pane

0xdfb4,	// (0x0001b75c) main_sp_fs_listscroll_pane_te

0xdfbd,	// (0x0001b765) popup_sp_fs_action_menu_pane_ParamLimits

0xdfbd,	// (0x0001b765) popup_sp_fs_action_menu_pane

0x9d86,	// (0x0001752e) bg_sp_fs_ctrlbar_pane_g1

0xe001,	// (0x0001b7a9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe00a,	// (0x0001b7b2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe013,	// (0x0001b7bb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9d86,	// (0x0001752e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc30,	// (0x0001d3d8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbddb,	// (0x00019583) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbddb,	// (0x00019583) bg_sp_fs_ctrlbar_ddmenu_pane

0xe01c,	// (0x0001b7c4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe01c,	// (0x0001b7c4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe028,	// (0x0001b7d0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe028,	// (0x0001b7d0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc39,	// (0x0001d3e1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc39,	// (0x0001d3e1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe034,	// (0x0001b7dc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe034,	// (0x0001b7dc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9d86,	// (0x0001752e) list_medium_line_t2_right_icon_g1

0xa2dc,	// (0x00017a84) list_medium_line_t2_right_icon_t1

0xa2dc,	// (0x00017a84) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3e,	// (0x0001d3e6) list_medium_line_t2_right_icon_t

0xa93d,	// (0x000180e5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa93d,	// (0x000180e5) bg_sp_fs_ctrlbar_pane

0x7786,	// (0x00014f2e) main_sp_fs_ctrlbar_button_pane_cp01

0x7790,	// (0x00014f38) main_sp_fs_ctrlbar_ddmenu_pane

0xe086,	// (0x0001b82e) main_sp_fs_ctrlbar_pane_g1

0xe092,	// (0x0001b83a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc43,	// (0x0001d3eb) main_sp_fs_ctrlbar_pane_g

0x77ce,	// (0x00014f76) main_sp_fs_ctrlbar_pane_t1

0x780d,	// (0x00014fb5) main_sp_fs_ctrlbar_pane

0x7831,	// (0x00014fd9) main_sp_fs_listscroll_pane_te_cp01

0x7851,	// (0x00014ff9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7851,	// (0x00014ff9) popup_sp_fs_action_menu_pane_cp01

0x9376,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9376,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp01

0xe0b9,	// (0x0001b861) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0b9,	// (0x0001b861) sp_fs_action_menu_list_gene_pane_g1

0xe0c8,	// (0x0001b870) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0c8,	// (0x0001b870) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc51,	// (0x0001d3f9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc51,	// (0x0001d3f9) sp_fs_action_menu_list_gene_pane_g

0xe0d5,	// (0x0001b87d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0d5,	// (0x0001b87d) sp_fs_action_menu_list_gene_pane_t1

0xe0ed,	// (0x0001b895) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe0ed,	// (0x0001b895) sp_fs_action_menu_list_gene_pane

0xe10c,	// (0x0001b8b4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe10c,	// (0x0001b8b4) popup_sp_fs_action_menu_bg_pane

0xe11a,	// (0x0001b8c2) sp_fs_action_menu_list_pane_ParamLimits

0xe11a,	// (0x0001b8c2) sp_fs_action_menu_list_pane

0xe13a,	// (0x0001b8e2) sp_fs_scroll_pane_cp01_ParamLimits

0xe13a,	// (0x0001b8e2) sp_fs_scroll_pane_cp01

0xa2dc,	// (0x00017a84) list_medium_line_plain_t2_t1

0xa2dc,	// (0x00017a84) list_medium_line_plain_t2_t2

0x0001,

0xfc3e,	// (0x0001d3e6) list_medium_line_plain_t2_t

0xa2dc,	// (0x00017a84) list_medium_line_plain_t3_t1

0xa2dc,	// (0x00017a84) list_medium_line_plain_t3_t2

0xa2dc,	// (0x00017a84) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0001ca4a) list_medium_line_plain_t3_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t2_g2_g

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g2_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_x2_t2_g2_t

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_x2_t4_g2_g

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t2

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t3

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0001c99d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0001c99d) list_medium_line_x2_t4_g2_t

0x9d86,	// (0x0001752e) list_medium_line_t3_right_iconx2_g1

0x9d86,	// (0x0001752e) list_medium_line_t3_right_iconx2_g2

0x9d86,	// (0x0001752e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0001cb6b) list_medium_line_t3_right_iconx2_g

0xa2dc,	// (0x00017a84) list_medium_line_t3_right_iconx2_t1

0xa2dc,	// (0x00017a84) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3e,	// (0x0001d3e6) list_medium_line_t3_right_iconx2_t

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g1

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g2

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g3

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001c994) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001c994) list_medium_line_x3_t4_g4_g

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t1

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t2

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t3

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001c99d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001c99d) list_medium_line_x3_t4_g4_t

0x7876,	// (0x0001501e) list_single_dyc_row_text_pane_t1_ParamLimits

0x7876,	// (0x0001501e) list_single_dyc_row_text_pane_t1

0x78bf,	// (0x00015067) list_single_dyc_row_text_pane_t2_ParamLimits

0x78bf,	// (0x00015067) list_single_dyc_row_text_pane_t2

0xe160,	// (0x0001b908) list_single_dyc_row_text_pane_t3_ParamLimits

0xe160,	// (0x0001b908) list_single_dyc_row_text_pane_t3

0x0005,

0xfc56,	// (0x0001d3fe) list_single_dyc_row_text_pane_t_ParamLimits

0xfc56,	// (0x0001d3fe) list_single_dyc_row_text_pane_t

0xe184,	// (0x0001b92c) list_single_dyc_row_pane_g1_ParamLimits

0xe184,	// (0x0001b92c) list_single_dyc_row_pane_g1

0xe190,	// (0x0001b938) list_single_dyc_row_pane_g2_ParamLimits

0xe190,	// (0x0001b938) list_single_dyc_row_pane_g2

0xe19c,	// (0x0001b944) list_single_dyc_row_pane_g3_ParamLimits

0xe19c,	// (0x0001b944) list_single_dyc_row_pane_g3

0xe1a8,	// (0x0001b950) list_single_dyc_row_pane_g4_ParamLimits

0xe1a8,	// (0x0001b950) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x0001d40b) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x0001d40b) list_single_dyc_row_pane_g

0xe1b4,	// (0x0001b95c) list_single_dyc_row_text_pane_ParamLimits

0xe1b4,	// (0x0001b95c) list_single_dyc_row_text_pane

0x9307,	// (0x00016aaf) bg_sp_fs_scroll_pane

0xe1d3,	// (0x0001b97b) thumb_sp_fs_scroll_pane

0x9a6d,	// (0x00017215) list_medium_line_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g1

0x9d58,	// (0x00017500) list_medium_line_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t1

0x9a6d,	// (0x00017215) list_medium_line_x2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_x2_g

0x9d58,	// (0x00017500) list_medium_line_x2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t1

0x9a6d,	// (0x00017215) list_medium_line_x3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x3_g1

0xe1dc,	// (0x0001b984) list_medium_line_x3_g2_ParamLimits

0xe1dc,	// (0x0001b984) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x0001d414) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x0001d414) list_medium_line_x3_g

0xe1ea,	// (0x0001b992) list_medium_line_x3_t1_ParamLimits

0xe1ea,	// (0x0001b992) list_medium_line_x3_t1

0xe1fe,	// (0x0001b9a6) thumb_sp_fs_scroll_pane_g1

0xe207,	// (0x0001b9af) thumb_sp_fs_scroll_pane_g2

0xe210,	// (0x0001b9b8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0001d419) thumb_sp_fs_scroll_pane_g

0xe1fe,	// (0x0001b9a6) bg_sp_fs_scroll_pane_g1

0xe207,	// (0x0001b9af) bg_sp_fs_scroll_pane_g2

0xe210,	// (0x0001b9b8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0001d419) bg_sp_fs_scroll_pane_g

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g1

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g2

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g3

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0001c994) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0001c994) list_medium_line_x2_t3_g4_g

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t1

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t2

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_x2_t3_g4_t

0x9a6d,	// (0x00017215) list_medium_line_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_g2_g

0x9d58,	// (0x00017500) list_medium_line_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_g2_t1

0x9a6d,	// (0x00017215) list_medium_line_t3_g2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g2_g1

0x9a6d,	// (0x00017215) list_medium_line_t3_g2_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001c98f) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001c98f) list_medium_line_t3_g2_g

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t1

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t2

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_t3_g2_t

0x9d86,	// (0x0001752e) list_medium_line_right_icon_g1

0xa2dc,	// (0x00017a84) list_medium_line_right_icon_t1

0x9a6d,	// (0x00017215) list_medium_line_t2_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g1

0x9d58,	// (0x00017500) list_medium_line_t2_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_t1

0x9d58,	// (0x00017500) list_medium_line_t2_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_t2_t

0x9a6d,	// (0x00017215) list_medium_line_t3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g1

0x9d58,	// (0x00017500) list_medium_line_t3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_t1

0x9d58,	// (0x00017500) list_medium_line_t3_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_t2

0x9d58,	// (0x00017500) list_medium_line_t3_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_t3_t

0x9a6d,	// (0x00017215) list_medium_line_g3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g3_g1

0x9a6d,	// (0x00017215) list_medium_line_g3_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g3_g2

0x9a6d,	// (0x00017215) list_medium_line_g3_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0001c981) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0001c981) list_medium_line_g3_g

0x9d58,	// (0x00017500) list_medium_line_g3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_g3_t1

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g1

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g2

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001c981) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001c981) list_medium_line_t2_g3_g

0x9d58,	// (0x00017500) list_medium_line_t2_g3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_g3_t1

0x9d58,	// (0x00017500) list_medium_line_t2_g3_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001c964) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001c964) list_medium_line_t2_g3_t

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g1_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g1

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g2_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g2

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g3_ParamLimits

0x9a6d,	// (0x00017215) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001c981) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001c981) list_medium_line_t3_g3_g

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t1_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t1

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t2_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t2

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t3_ParamLimits

0x9d58,	// (0x00017500) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001c988) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001c988) list_medium_line_t3_g3_t

0x9d86,	// (0x0001752e) list_medium_line_right_iconx2_g1

0x9d86,	// (0x0001752e) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001cb66) list_medium_line_right_iconx2_g

0xa2dc,	// (0x00017a84) list_medium_line_right_iconx2_t1

0x9d86,	// (0x0001752e) list_medium_line_t2_right_iconx2_g1

0x9d86,	// (0x0001752e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001cb66) list_medium_line_t2_right_iconx2_g

0xa2dc,	// (0x00017a84) list_medium_line_t2_right_iconx2_t1

0xa2dc,	// (0x00017a84) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3e,	// (0x0001d3e6) list_medium_line_t2_right_iconx2_t

0xa2dc,	// (0x00017a84) list_medium_line_x4_t4_t1

0xa2dc,	// (0x00017a84) list_medium_line_x4_t4_t2

0xa2dc,	// (0x00017a84) list_medium_line_x4_t4_t3

0xa2dc,	// (0x00017a84) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0001ca51) list_medium_line_x4_t4_t

0x7a37,	// (0x000151df) tport_appsw_pane_ParamLimits

0x7a37,	// (0x000151df) tport_appsw_pane

0x7a4f,	// (0x000151f7) tport_contact_pane_ParamLimits

0x7a4f,	// (0x000151f7) tport_contact_pane

0x7a67,	// (0x0001520f) tport_listscroll_pane_ParamLimits

0x7a67,	// (0x0001520f) tport_listscroll_pane

0x7a81,	// (0x00015229) cell_tport_appsw_pane_ParamLimits

0x7a81,	// (0x00015229) cell_tport_appsw_pane

0xa907,	// (0x000180af) tport_appsw_pane_g1_ParamLimits

0xa907,	// (0x000180af) tport_appsw_pane_g1

0xe219,	// (0x0001b9c1) tport_contact_pane_g1

0xda74,	// (0x0001b21c) tport_contact_pane_t1

0xe222,	// (0x0001b9ca) tport_contact_pane_t2

0x0001,

0xfc78,	// (0x0001d420) tport_contact_pane_t

0xe230,	// (0x0001b9d8) list_tport_pane

0xe239,	// (0x0001b9e1) scroll_pane_cp_030

0x7ac9,	// (0x00015271) cell_tport_appsw_pane_g1

0x7ad9,	// (0x00015281) cell_tport_appsw_pane_t1

0x7ae7,	// (0x0001528f) grid_highlight_pane_cp019

0x7aef,	// (0x00015297) list_tport_double_graphic_pane_ParamLimits

0x7aef,	// (0x00015297) list_tport_double_graphic_pane

0x9376,	// (0x00016b1e) list_highlight_pane_cp023_ParamLimits

0x9376,	// (0x00016b1e) list_highlight_pane_cp023

0x7afc,	// (0x000152a4) list_tport_double_graphic_pane_g1_ParamLimits

0x7afc,	// (0x000152a4) list_tport_double_graphic_pane_g1

0x7b09,	// (0x000152b1) list_tport_double_graphic_pane_t1_ParamLimits

0x7b09,	// (0x000152b1) list_tport_double_graphic_pane_t1

0x7b1e,	// (0x000152c6) list_tport_double_graphic_pane_t2_ParamLimits

0x7b1e,	// (0x000152c6) list_tport_double_graphic_pane_t2

0x0001,

0xfc84,	// (0x0001d42c) list_tport_double_graphic_pane_t_ParamLimits

0xfc84,	// (0x0001d42c) list_tport_double_graphic_pane_t

0x9307,	// (0x00016aaf) main_cale_note_pane

0x58a6,	// (0x0001304e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x58a6,	// (0x0001304e) cell_vitu2_function_top_wide_pane_cp01

0x72cd,	// (0x00014a75) wait_bar_pane_cp05_ParamLimits

0x9376,	// (0x00016b1e) listscroll_cmail_pane

0xe242,	// (0x0001b9ea) list_cmail_pane

0x7b30,	// (0x000152d8) list_cmail_body_pane

0x7b45,	// (0x000152ed) list_single_cmail_header_caption_pane

0x7b5b,	// (0x00015303) list_single_cmail_header_detail_pane_ParamLimits

0x7b5b,	// (0x00015303) list_single_cmail_header_detail_pane

0xe252,	// (0x0001b9fa) list_single_cmail_header_caption_pane_t1

0x7b84,	// (0x0001532c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7b84,	// (0x0001532c) list_single_cmail_header_detail_pane_g1

0xe269,	// (0x0001ba11) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe269,	// (0x0001ba11) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc89,	// (0x0001d431) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc89,	// (0x0001d431) list_single_cmail_header_detail_pane_g

0xe282,	// (0x0001ba2a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe282,	// (0x0001ba2a) list_single_cmail_header_detail_pane_t1

0xe2ea,	// (0x0001ba92) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe2ea,	// (0x0001ba92) list_single_cmail_header_editor_pane_bg

0xdbd1,	// (0x0001b379) list_cmail_body_pane_g1

0xe301,	// (0x0001baa9) list_cmail_body_pane_t1

0xcdef,	// (0x0001a597) list_single_cmail_header_editor_pane_bg_g1

0x9f97,	// (0x0001773f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcdff,	// (0x0001a5a7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcdf7,	// (0x0001a59f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0a4,	// (0x0001a84c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xce1f,	// (0x0001a5c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce0f,	// (0x0001a5b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce17,	// (0x0001a5bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9f77,	// (0x0001771f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7b9c,	// (0x00015344) calenote_gesture_pane_ParamLimits

0x7b9c,	// (0x00015344) calenote_gesture_pane

0x7bbc,	// (0x00015364) calenote_window_pane_ParamLimits

0x7bbc,	// (0x00015364) calenote_window_pane

0xe30f,	// (0x0001bab7) popup_note_window_cp01

0x7bd8,	// (0x00015380) calenote_swipe_1_pane_ParamLimits

0x7bd8,	// (0x00015380) calenote_swipe_1_pane

0x7724,	// (0x00014ecc) calenote_swipe_2_pane_ParamLimits

0x7724,	// (0x00014ecc) calenote_swipe_2_pane

0xdf22,	// (0x0001b6ca) calenote_swipe_1_pane_g1_ParamLimits

0xdf22,	// (0x0001b6ca) calenote_swipe_1_pane_g1

0xdf2f,	// (0x0001b6d7) calenote_swipe_1_pane_g2_ParamLimits

0xdf2f,	// (0x0001b6d7) calenote_swipe_1_pane_g2

0x0001,

0xfc26,	// (0x0001d3ce) calenote_swipe_1_pane_g_ParamLimits

0xfc26,	// (0x0001d3ce) calenote_swipe_1_pane_g

0xe321,	// (0x0001bac9) calenote_swipe_1_pane_t1_ParamLimits

0xe321,	// (0x0001bac9) calenote_swipe_1_pane_t1

0xdf22,	// (0x0001b6ca) calenote_swipe_2_pane_g1_ParamLimits

0xdf22,	// (0x0001b6ca) calenote_swipe_2_pane_g1

0xe340,	// (0x0001bae8) calenote_swipe_2_pane_g2_ParamLimits

0xe340,	// (0x0001bae8) calenote_swipe_2_pane_g2

0x0001,

0xfc95,	// (0x0001d43d) calenote_swipe_2_pane_g_ParamLimits

0xfc95,	// (0x0001d43d) calenote_swipe_2_pane_g

0xe34c,	// (0x0001baf4) calenote_swipe_2_pane_t1_ParamLimits

0xe34c,	// (0x0001baf4) calenote_swipe_2_pane_t1

0x9307,	// (0x00016aaf) main_mup_navstr_pane

0x4743,	// (0x00011eeb) main_mup3_pane_t7_ParamLimits

0x4743,	// (0x00011eeb) main_mup3_pane_t7

0xc9af,	// (0x0001a157) main_mp4_pane_g6_ParamLimits

0xc9af,	// (0x0001a157) main_mp4_pane_g6

0xcc02,	// (0x0001a3aa) main_image3_pane_t4_ParamLimits

0xcc02,	// (0x0001a3aa) main_image3_pane_t4

0x7bed,	// (0x00015395) popup_navstr_preview_pane_ParamLimits

0x7bed,	// (0x00015395) popup_navstr_preview_pane

0x7c01,	// (0x000153a9) scroll_navstr_pane_ParamLimits

0x7c01,	// (0x000153a9) scroll_navstr_pane

0x9307,	// (0x00016aaf) bg_popup_preview_window_pane_cp04

0xe373,	// (0x0001bb1b) popup_navstr_preview_pane_t1

0x7c15,	// (0x000153bd) scroll_navstr_pane_g1_ParamLimits

0x7c15,	// (0x000153bd) scroll_navstr_pane_g1

0x7c29,	// (0x000153d1) scroll_navstr_pane_t1_ParamLimits

0x7c29,	// (0x000153d1) scroll_navstr_pane_t1

0xe318,	// (0x0001bac0) bg_button_pane_cp014

0xe318,	// (0x0001bac0) bg_button_pane_cp030

0x75fd,	// (0x00014da5) list_double_fisheye_pane_g4_ParamLimits

0x75fd,	// (0x00014da5) list_double_fisheye_pane_g4

0x7609,	// (0x00014db1) list_double_fisheye_pane_g5_ParamLimits

0x7609,	// (0x00014db1) list_double_fisheye_pane_g5

0xcc9e,	// (0x0001a446) sp_fs_scroll_pane_cp03

0xe086,	// (0x0001b82e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe092,	// (0x0001b83a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc43,	// (0x0001d3eb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x77ce,	// (0x00014f76) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe24a,	// (0x0001b9f2) sp_fs_scroll_pane_cp02

0x9c8e,	// (0x00017436) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9c8e,	// (0x00017436) popup_sp_fs_calendar_preview_list_single_pane

0x9307,	// (0x00016aaf) main_cam6_pano_pane

0x9376,	// (0x00016b1e) main_mup3_pane_ParamLimits

0x9307,	// (0x00016aaf) main_phacti_pane

0x71a0,	// (0x00014948) bg_button_pane_cp11

0x71ba,	// (0x00014962) main_mobtv_info_pane_g2_ParamLimits

0x71ba,	// (0x00014962) main_mobtv_info_pane_g2

0x0001,

0xfba3,	// (0x0001d34b) main_mobtv_info_pane_g_ParamLimits

0xfba3,	// (0x0001d34b) main_mobtv_info_pane_g

0x7397,	// (0x00014b3f) sc_clock_pane_t5_ParamLimits

0x7397,	// (0x00014b3f) sc_clock_pane_t5

0x745f,	// (0x00014c07) main_radioblah_pane_g1_ParamLimits

0xde6e,	// (0x0001b616) main_radioblah_pane_t3_ParamLimits

0xde6e,	// (0x0001b616) main_radioblah_pane_t3

0xde86,	// (0x0001b62e) main_radioblah_pane_t4_ParamLimits

0xde86,	// (0x0001b62e) main_radioblah_pane_t4

0x7487,	// (0x00014c2f) main_radioblah_text_pane_ParamLimits

0x7487,	// (0x00014c2f) main_radioblah_text_pane

0x7499,	// (0x00014c41) main_radioblah_info_pane_g1_ParamLimits

0x7532,	// (0x00014cda) main_radioblah_info_pane_t4_ParamLimits

0x7532,	// (0x00014cda) main_radioblah_info_pane_t4

0x9376,	// (0x00016b1e) main_sp_fs_calendar_pane

0x7c40,	// (0x000153e8) main_phacti_pane_g1

0x7c48,	// (0x000153f0) phacti_note_pane_ParamLimits

0x7c48,	// (0x000153f0) phacti_note_pane

0xe38a,	// (0x0001bb32) phacti_term_pane_ParamLimits

0xe38a,	// (0x0001bb32) phacti_term_pane

0xe39f,	// (0x0001bb47) phacti_note_pane_t1_ParamLimits

0xe39f,	// (0x0001bb47) phacti_note_pane_t1

0xe3b6,	// (0x0001bb5e) phacti_term_pane_g1

0xe3be,	// (0x0001bb66) phacti_term_pane_t1_ParamLimits

0xe3be,	// (0x0001bb66) phacti_term_pane_t1

0xe3e8,	// (0x0001bb90) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9d2d,	// (0x000174d5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9f,	// (0x0001d447) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3f0,	// (0x0001bb98) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3f0,	// (0x0001bb98) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe406,	// (0x0001bbae) aid_popup_sp_fs_bg_corner_pane

0x9d86,	// (0x0001752e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9307,	// (0x00016aaf) popup_sp_fs_calendar_preview_bg_pane

0xe40e,	// (0x0001bbb6) popup_sp_fs_calendar_preview_list_pane

0xa93d,	// (0x000180e5) bg_main_sp_fs_cale_pane_ParamLimits

0xa93d,	// (0x000180e5) bg_main_sp_fs_cale_pane

0xe41f,	// (0x0001bbc7) listscroll_cale_mrui_pane_ParamLimits

0xe41f,	// (0x0001bbc7) listscroll_cale_mrui_pane

0xe434,	// (0x0001bbdc) listscroll_sp_fs_schedule_track_pane

0xe43d,	// (0x0001bbe5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe43d,	// (0x0001bbe5) main_sp_fs_ctrlbar_pane_cp01

0xe450,	// (0x0001bbf8) main_sp_fs_ribbon_pane

0xe458,	// (0x0001bc00) popup_sp_fs_cale_preview_window

0x7cbd,	// (0x00015465) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7cbd,	// (0x00015465) list_single_sp_fs_schedule_track_pane

0x9376,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9376,	// (0x00016b1e) bg_sp_fs_highlight_list_pane_cp03

0x7cd0,	// (0x00015478) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7cd0,	// (0x00015478) list_single_sp_fs_schedule_track_pane_g1

0x7cdc,	// (0x00015484) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7cdc,	// (0x00015484) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca4,	// (0x0001d44c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca4,	// (0x0001d44c) list_single_sp_fs_schedule_track_pane_g

0x7ce8,	// (0x00015490) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7ce8,	// (0x00015490) list_single_sp_fs_schedule_track_pane_t1

0x7d02,	// (0x000154aa) sp_fs_schedule_track_pane_ParamLimits

0x7d02,	// (0x000154aa) sp_fs_schedule_track_pane

0xe46a,	// (0x0001bc12) sp_fs_schedule_track_pane_g1

0xe472,	// (0x0001bc1a) sp_fs_schedule_track_pane_g2

0xe47a,	// (0x0001bc22) sp_fs_schedule_track_pane_g3

0xe482,	// (0x0001bc2a) sp_fs_schedule_track_pane_g4

0xe48a,	// (0x0001bc32) sp_fs_schedule_track_pane_g5

0x0004,

0xfca9,	// (0x0001d451) sp_fs_schedule_track_pane_g

0xcdef,	// (0x0001a597) bg_sp_fs_schedule_viewer_highlight_g1

0x9f97,	// (0x0001773f) bg_sp_fs_schedule_viewer_highlight_g2

0xcdf7,	// (0x0001a59f) bg_sp_fs_schedule_viewer_highlight_g3

0xcdff,	// (0x0001a5a7) bg_sp_fs_schedule_viewer_highlight_g4

0xd0a4,	// (0x0001a84c) bg_sp_fs_schedule_viewer_highlight_g5

0xce0f,	// (0x0001a5b7) bg_sp_fs_schedule_viewer_highlight_g6

0xce17,	// (0x0001a5bf) bg_sp_fs_schedule_viewer_highlight_g7

0xce1f,	// (0x0001a5c7) bg_sp_fs_schedule_viewer_highlight_g8

0x9f77,	// (0x0001771f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb4,	// (0x0001d45c) bg_sp_fs_schedule_viewer_highlight_g

0x9307,	// (0x00016aaf) bg_main_sp_fs_ribbon_pane

0x7d13,	// (0x000154bb) main_sp_fs_ribbon_pane_g1

0xe492,	// (0x0001bc3a) main_sp_fs_ribbon_pane_t1

0x7d1c,	// (0x000154c4) main_sp_fs_ribbon_pane_t2

0xe4a1,	// (0x0001bc49) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc7,	// (0x0001d46f) main_sp_fs_ribbon_pane_t

0xe4b0,	// (0x0001bc58) main_sp_fs_ribbon_scheduler_pane

0xe4b8,	// (0x0001bc60) bg_main_sp_fs_ribbon_pane_g1

0xe4c1,	// (0x0001bc69) bg_main_sp_fs_ribbon_pane_g2

0xe4ca,	// (0x0001bc72) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcce,	// (0x0001d476) bg_main_sp_fs_ribbon_pane_g

0xe4d2,	// (0x0001bc7a) main_sp_fs_ribbon_scheduler_pane_g1

0xe4db,	// (0x0001bc83) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e4,	// (0x0001bc8c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd5,	// (0x0001d47d) main_sp_fs_ribbon_scheduler_pane_g

0xe4ed,	// (0x0001bc95) list_cale_mrui_pane

0x7d2b,	// (0x000154d3) sp_fs_scroll_pane_cp07_ParamLimits

0x7d2b,	// (0x000154d3) sp_fs_scroll_pane_cp07

0x7d47,	// (0x000154ef) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7d47,	// (0x000154ef) bg_sp_fs_schedule_viewer_highlight

0xe4fa,	// (0x0001bca2) list_single_sp_fs_schedule_track_pane_cp01

0xe502,	// (0x0001bcaa) list_sp_fs_schedule_track_pane

0xe50a,	// (0x0001bcb2) sp_fs_scroll_pane_cp06_ParamLimits

0xe50a,	// (0x0001bcb2) sp_fs_scroll_pane_cp06

0x9d86,	// (0x0001752e) bgmain_sp_fs_calendar_pane_g1

0x7d57,	// (0x000154ff) list_single_cale_mrui_pane_ParamLimits

0x7d57,	// (0x000154ff) list_single_cale_mrui_pane

0xe51c,	// (0x0001bcc4) list_single_cale_mrui_row_pane_ParamLimits

0xe51c,	// (0x0001bcc4) list_single_cale_mrui_row_pane

0xe529,	// (0x0001bcd1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe529,	// (0x0001bcd1) list_single_cale_mrui_row_pane_g1

0xe56e,	// (0x0001bd16) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe56e,	// (0x0001bd16) list_single_cale_mrui_row_pane_t1

0x7d77,	// (0x0001551f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7d77,	// (0x0001551f) list_single_cale_mrui_row_pane_t2

0xe580,	// (0x0001bd28) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe580,	// (0x0001bd28) list_single_cale_mrui_row_pane_t3

0xe5af,	// (0x0001bd57) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5af,	// (0x0001bd57) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce3,	// (0x0001d48b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce3,	// (0x0001d48b) list_single_cale_mrui_row_pane_t

0x7ddf,	// (0x00015587) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7ddf,	// (0x00015587) list_single_cmail_header_editor_pane_bg_cp01

0x7e05,	// (0x000155ad) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7e05,	// (0x000155ad) list_single_cmail_header_editor_pane_bg_cp02

0x7e25,	// (0x000155cd) main_radioblah_text_pane_t1_ParamLimits

0x7e25,	// (0x000155cd) main_radioblah_text_pane_t1

0xe5de,	// (0x0001bd86) cam6_indi_pane_cp01

0xe5e6,	// (0x0001bd8e) cam6_mode_pane_cp01

0xe5ee,	// (0x0001bd96) cam6_pano_pane

0xe5f7,	// (0x0001bd9f) cam6_zoom_pane_cp01

0xe5ff,	// (0x0001bda7) cam6_pano_image_pane

0xe60a,	// (0x0001bdb2) cam6_pano_pane_g1

0xdbd1,	// (0x0001b379) cam6_pano_pane_g2

0xe613,	// (0x0001bdbb) cam6_pano_pane_g3

0xe61c,	// (0x0001bdc4) cam6_pano_pane_g4

0xc6a4,	// (0x00019e4c) cam6_pano_pane_g5

0xe625,	// (0x0001bdcd) cam6_pano_pane_g6

0xe2be,	// (0x0001ba66) cam6_pano_pane_g7

0xe62f,	// (0x0001bdd7) cam6_pano_pane_g8

0xe638,	// (0x0001bde0) cam6_pano_pane_g9

0x0008,

0xfcec,	// (0x0001d494) cam6_pano_pane_g

0x9307,	// (0x00016aaf) main_browser_tag_pane

0xe36b,	// (0x0001bb13) grid_navstr_albumart_pane

0xe643,	// (0x0001bdeb) cell_navstr_albumart_pane_ParamLimits

0xe643,	// (0x0001bdeb) cell_navstr_albumart_pane

0xe663,	// (0x0001be0b) cell_navstr_albumart_pane_g1

0xbb02,	// (0x000192aa) cell_navstr_albumart_pane_g2

0xbb12,	// (0x000192ba) cell_navstr_albumart_pane_g3

0xbb0a,	// (0x000192b2) cell_navstr_albumart_pane_g4

0x0003,

0xfcff,	// (0x0001d4a7) cell_navstr_albumart_pane_g

0x7e3f,	// (0x000155e7) bt_list_pane_ParamLimits

0x7e3f,	// (0x000155e7) bt_list_pane

0x7e53,	// (0x000155fb) bt_list_pane_t1

0x7e62,	// (0x0001560a) bt_list_pane_t2

0x0001,

0xfd08,	// (0x0001d4b0) bt_list_pane_t

0x9307,	// (0x00016aaf) main_cale_prevew_pane

0x7e71,	// (0x00015619) popup_cale_preview_window_ParamLimits

0x7e71,	// (0x00015619) popup_cale_preview_window

0x9376,	// (0x00016b1e) bg_popup_preview_window_pane_cp05_ParamLimits

0x9376,	// (0x00016b1e) bg_popup_preview_window_pane_cp05

0xe66b,	// (0x0001be13) list_cale_preview_pane_ParamLimits

0xe66b,	// (0x0001be13) list_cale_preview_pane

0x7e8c,	// (0x00015634) list_double_cale_preview_pane_ParamLimits

0x7e8c,	// (0x00015634) list_double_cale_preview_pane

0x7e9e,	// (0x00015646) list_single_cale_preview_pane_ParamLimits

0x7e9e,	// (0x00015646) list_single_cale_preview_pane

0x7eb4,	// (0x0001565c) list_single_cale_preview_pane_g1

0x7ebc,	// (0x00015664) list_single_cale_preview_pane_t1_ParamLimits

0x7ebc,	// (0x00015664) list_single_cale_preview_pane_t1

0x7ed1,	// (0x00015679) list_double_cale_preview_pane_g1

0x7ed9,	// (0x00015681) list_double_cale_preview_pane_t1_ParamLimits

0x7ed9,	// (0x00015681) list_double_cale_preview_pane_t1

0x7eee,	// (0x00015696) list_double_cale_preview_pane_t2_ParamLimits

0x7eee,	// (0x00015696) list_double_cale_preview_pane_t2

0x0001,

0xfd0d,	// (0x0001d4b5) list_double_cale_preview_pane_t_ParamLimits

0xfd0d,	// (0x0001d4b5) list_double_cale_preview_pane_t

0x9307,	// (0x00016aaf) main_ezdial_pane

0x9376,	// (0x00016b1e) main_sp_fs_email_pane_ParamLimits

0x773e,	// (0x00014ee6) cmail_ddmenu_btn01_pane_ParamLimits

0x773e,	// (0x00014ee6) cmail_ddmenu_btn01_pane

0x7751,	// (0x00014ef9) cmail_ddmenu_btn02_pane_ParamLimits

0x7751,	// (0x00014ef9) cmail_ddmenu_btn02_pane

0x7774,	// (0x00014f1c) cmail_ddmenu_btn03_pane_ParamLimits

0x7774,	// (0x00014f1c) cmail_ddmenu_btn03_pane

0x780d,	// (0x00014fb5) main_sp_fs_ctrlbar_pane_ParamLimits

0x7831,	// (0x00014fd9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7b30,	// (0x000152d8) list_cmail_body_pane_ParamLimits

0xe260,	// (0x0001ba08) bg_button_pane_cp12

0xe275,	// (0x0001ba1d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe275,	// (0x0001ba1d) list_single_cmail_header_detail_pane_g3

0xe2c6,	// (0x0001ba6e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2c6,	// (0x0001ba6e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc90,	// (0x0001d438) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc90,	// (0x0001d438) list_single_cmail_header_detail_pane_t

0xe3d3,	// (0x0001bb7b) phacti_term_pane_t2_ParamLimits

0xe3d3,	// (0x0001bb7b) phacti_term_pane_t2

0x0001,

0xfc9a,	// (0x0001d442) phacti_term_pane_t_ParamLimits

0xfc9a,	// (0x0001d442) phacti_term_pane_t

0xe677,	// (0x0001be1f) aid_size_list_single_double

0x7f06,	// (0x000156ae) popup_ezdial_listscroll_window

0x7f22,	// (0x000156ca) popup_number_entry_window_cp01

0x9d46,	// (0x000174ee) bg_popup_call_pane_cp09

0xe683,	// (0x0001be2b) ezdial_list_pane

0xe68b,	// (0x0001be33) scroll_pane_cp23

0xa93d,	// (0x000180e5) bg_button_pane_cp028_ParamLimits

0xa93d,	// (0x000180e5) bg_button_pane_cp028

0x7f30,	// (0x000156d8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7f30,	// (0x000156d8) cmail_ddmenu_btn01_pane_g1

0x7f3c,	// (0x000156e4) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7f3c,	// (0x000156e4) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd12,	// (0x0001d4ba) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd12,	// (0x0001d4ba) cmail_ddmenu_btn01_pane_g

0xe693,	// (0x0001be3b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe693,	// (0x0001be3b) cmail_ddmenu_btn01_pane_t1

0xa93d,	// (0x000180e5) bg_button_pane_cp029_ParamLimits

0xa93d,	// (0x000180e5) bg_button_pane_cp029

0x7f50,	// (0x000156f8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7f50,	// (0x000156f8) cmail_ddmenu_btn02_pane_g1

0x7f68,	// (0x00015710) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7f68,	// (0x00015710) cmail_ddmenu_btn02_pane_t1

0x9376,	// (0x00016b1e) bg_button_pane_cp031_ParamLimits

0x9376,	// (0x00016b1e) bg_button_pane_cp031

0x7f50,	// (0x000156f8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7f50,	// (0x000156f8) cmail_ddmenu_btn03_pane_g1

0x7f68,	// (0x00015710) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7f68,	// (0x00015710) cmail_ddmenu_btn03_pane_t1

0x509e,	// (0x00012846) cell_dialer2_keypad_pane_t1_ParamLimits

0x50b8,	// (0x00012860) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x50b8,	// (0x00012860) cell_dialer2_keypad_pane_t1_copy1

0x6fc3,	// (0x0001476b) ncimui_group_button_pane

0x9376,	// (0x00016b1e) main_sp_fs_calendar_pane_ParamLimits

0x7b45,	// (0x000152ed) list_single_cmail_header_caption_pane_ParamLimits

0xe416,	// (0x0001bbbe) aid_recal_txt_sm_pane

0x9307,	// (0x00016aaf) mian_recal_day_pane

0xe458,	// (0x0001bc00) popup_sp_fs_cale_preview_window_ParamLimits

0xe6a9,	// (0x0001be51) list_recal_day_pane

0xe6eb,	// (0x0001be93) list_single_recal_day_pane_ParamLimits

0xe6eb,	// (0x0001be93) list_single_recal_day_pane

0xe6fd,	// (0x0001bea5) list_single_recal_day_pane_g1_ParamLimits

0xe6fd,	// (0x0001bea5) list_single_recal_day_pane_g1

0xe709,	// (0x0001beb1) list_single_recal_day_pane_g2_ParamLimits

0xe709,	// (0x0001beb1) list_single_recal_day_pane_g2

0xe715,	// (0x0001bebd) list_single_recal_day_pane_g3_ParamLimits

0xe715,	// (0x0001bebd) list_single_recal_day_pane_g3

0x7f8c,	// (0x00015734) list_single_recal_day_pane_g4_ParamLimits

0x7f8c,	// (0x00015734) list_single_recal_day_pane_g4

0xe721,	// (0x0001bec9) list_single_recal_day_pane_g5_ParamLimits

0xe721,	// (0x0001bec9) list_single_recal_day_pane_g5

0xe72d,	// (0x0001bed5) list_single_recal_day_pane_g6_ParamLimits

0xe72d,	// (0x0001bed5) list_single_recal_day_pane_g6

0x0004,

0xfd21,	// (0x0001d4c9) list_single_recal_day_pane_g_ParamLimits

0xfd21,	// (0x0001d4c9) list_single_recal_day_pane_g

0xe741,	// (0x0001bee9) list_single_recal_day_pane_t1

0xe753,	// (0x0001befb) list_single_recal_day_pane_t2

0x0001,

0xfd2c,	// (0x0001d4d4) list_single_recal_day_pane_t

0x7fa4,	// (0x0001574c) ncimui_query_button_pane_ParamLimits

0x7fa4,	// (0x0001574c) ncimui_query_button_pane

0x7fb4,	// (0x0001575c) ncimui_query_button_pane_t1_ParamLimits

0x7fb4,	// (0x0001575c) ncimui_query_button_pane_t1

0xe765,	// (0x0001bf0d) ncimui_query_button_pane_t2_ParamLimits

0xe765,	// (0x0001bf0d) ncimui_query_button_pane_t2

0x0001,

0xfd31,	// (0x0001d4d9) ncimui_query_button_pane_t_ParamLimits

0xfd31,	// (0x0001d4d9) ncimui_query_button_pane_t

0x7fc7,	// (0x0001576f) query_button_pane_ParamLimits

0x7fc7,	// (0x0001576f) query_button_pane

0x9307,	// (0x00016aaf) bg_button_pane_cp0028

0xe778,	// (0x0001bf20) query_button_pane_t1

0x3ad8,	// (0x00011280) main_tport_pane_ParamLimits

0x79f4,	// (0x0001519c) bg_popup_window_pane_cp01_ParamLimits

0x79f4,	// (0x0001519c) bg_popup_window_pane_cp01

0x7a0f,	// (0x000151b7) heading_pane_cp08_ParamLimits

0x7a0f,	// (0x000151b7) heading_pane_cp08

0x7a22,	// (0x000151ca) heading_pane_cp07_ParamLimits

0x7a22,	// (0x000151ca) heading_pane_cp07

0x7ac9,	// (0x00015271) cell_tport_appsw_pane_g2

0x0002,

0xfc7d,	// (0x0001d425) cell_tport_appsw_pane_g

0xa9d8,	// (0x00018180) input_candi_list_open_g1

0xa17d,	// (0x00017925) list_cale_time_pane_g6_ParamLimits

0xa17d,	// (0x00017925) list_cale_time_pane_g6

0x40eb,	// (0x00011893) aid_size_touch_calib_1_ParamLimits

0x40eb,	// (0x00011893) aid_size_touch_calib_1

0x40fd,	// (0x000118a5) aid_size_touch_calib_2_ParamLimits

0x40fd,	// (0x000118a5) aid_size_touch_calib_2

0x4115,	// (0x000118bd) aid_size_touch_calib_3_ParamLimits

0x4115,	// (0x000118bd) aid_size_touch_calib_3

0x4133,	// (0x000118db) aid_size_touch_calib_4_ParamLimits

0x4133,	// (0x000118db) aid_size_touch_calib_4

0x414b,	// (0x000118f3) main_touch_calib_button_group_pane_ParamLimits

0x414b,	// (0x000118f3) main_touch_calib_button_group_pane

0x4163,	// (0x0001190b) main_touch_calib_pane_g1_ParamLimits

0x4175,	// (0x0001191d) main_touch_calib_pane_g2_ParamLimits

0x4187,	// (0x0001192f) main_touch_calib_pane_g3_ParamLimits

0x4199,	// (0x00011941) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x0001ce67) main_touch_calib_pane_g_ParamLimits

0x41ab,	// (0x00011953) main_touch_calib_pane_t1_ParamLimits

0x41c5,	// (0x0001196d) main_touch_calib_pane_t2_ParamLimits

0x41df,	// (0x00011987) main_touch_calib_pane_t3_ParamLimits

0x41f3,	// (0x0001199b) main_touch_calib_pane_t4_ParamLimits

0x4207,	// (0x000119af) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x0001ce70) main_touch_calib_pane_t_ParamLimits

0xc467,	// (0x00019c0f) list_single_fp_cale_pane_g3_ParamLimits

0xc467,	// (0x00019c0f) list_single_fp_cale_pane_g3

0x9376,	// (0x00016b1e) bg_button_pane_cp012_ParamLimits

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp03_ParamLimits

0x617e,	// (0x00013926) cell_vitu2_function_top_pane_g1_ParamLimits

0x9376,	// (0x00016b1e) bg_vkb2_func_pane_cp04_ParamLimits

0x6f4e,	// (0x000146f6) main_ncimui_button_group_pane_ParamLimits

0x6f4e,	// (0x000146f6) main_ncimui_button_group_pane

0x6fae,	// (0x00014756) main_ncimui_pane_t3_ParamLimits

0x6fae,	// (0x00014756) main_ncimui_pane_t3

0xe381,	// (0x0001bb29) phacti_button_group_pane

0xe677,	// (0x0001be1f) aid_size_list_single_double_ParamLimits

0x7f06,	// (0x000156ae) popup_ezdial_listscroll_window_ParamLimits

0x7f22,	// (0x000156ca) popup_number_entry_window_cp01_ParamLimits

0x7fda,	// (0x00015782) phacti_button_pane_ParamLimits

0x7fda,	// (0x00015782) phacti_button_pane

0x9307,	// (0x00016aaf) bg_button_pane_cp14

0xe786,	// (0x0001bf2e) phacti_button_pane_t1

0x7feb,	// (0x00015793) main_touch_calib_button_pane_ParamLimits

0x7feb,	// (0x00015793) main_touch_calib_button_pane

0x9b01,	// (0x000172a9) bg_button_pane_cp18_ParamLimits

0x9b01,	// (0x000172a9) bg_button_pane_cp18

0xe794,	// (0x0001bf3c) main_touch_calib_button_pane_t1_ParamLimits

0xe794,	// (0x0001bf3c) main_touch_calib_button_pane_t1

0xe7aa,	// (0x0001bf52) main_touch_calib_button_pane_t2_ParamLimits

0xe7aa,	// (0x0001bf52) main_touch_calib_button_pane_t2

0x0001,

0xfd36,	// (0x0001d4de) main_touch_calib_button_pane_t_ParamLimits

0xfd36,	// (0x0001d4de) main_touch_calib_button_pane_t

0x9307,	// (0x00016aaf) cell_ncimui_button_pane

0x9307,	// (0x00016aaf) bg_button_pane_cp032

0xe7c8,	// (0x0001bf70) cell_ncimui_button_pane_t1

0xcbe2,	// (0x0001a38a) image3_infobar_pane_ParamLimits

0xcbe2,	// (0x0001a38a) image3_infobar_pane

0x73c3,	// (0x00014b6b) fs_bigclock_status_pane_ParamLimits

0x73c3,	// (0x00014b6b) fs_bigclock_status_pane

0x73d0,	// (0x00014b78) main_fs_bigclock_clock_pane_ParamLimits

0x73d0,	// (0x00014b78) main_fs_bigclock_clock_pane

0x73ee,	// (0x00014b96) main_fs_bigclock_indi_pane_ParamLimits

0x73ee,	// (0x00014b96) main_fs_bigclock_indi_pane

0x7420,	// (0x00014bc8) main_fs_bigclock_swipe_pane_ParamLimits

0x7420,	// (0x00014bc8) main_fs_bigclock_swipe_pane

0x9307,	// (0x00016aaf) main_fs_clock_dumped_data

0xdcde,	// (0x0001b486) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdcde,	// (0x0001b486) list_single_fs_bigclock_indicator_pane_g1

0xdcf9,	// (0x0001b4a1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdcf9,	// (0x0001b4a1) list_single_fs_bigclock_indicator_pane_g2

0xdd13,	// (0x0001b4bb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdd13,	// (0x0001b4bb) list_single_fs_bigclock_indicator_pane_g3

0xdd2d,	// (0x0001b4d5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdd2d,	// (0x0001b4d5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd7,	// (0x0001d37f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd7,	// (0x0001d37f) list_single_fs_bigclock_indicator_pane_g

0xdd58,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdd58,	// (0x0001b500) list_single_fs_bigclock_indicator_pane_t1

0xdd80,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdd80,	// (0x0001b528) list_single_fs_bigclock_indicator_pane_t2

0xdda8,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdda8,	// (0x0001b550) list_single_fs_bigclock_indicator_pane_t3

0xddd0,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xddd0,	// (0x0001b578) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe2,	// (0x0001d38a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe2,	// (0x0001d38a) list_single_fs_bigclock_indicator_pane_t

0xe7d6,	// (0x0001bf7e) image3_infobar_fav_pane_ParamLimits

0xe7d6,	// (0x0001bf7e) image3_infobar_fav_pane

0xe7e6,	// (0x0001bf8e) image3_infobar_loc_pane_ParamLimits

0xe7e6,	// (0x0001bf8e) image3_infobar_loc_pane

0xe7fa,	// (0x0001bfa2) image3_infobar_time_pane_ParamLimits

0xe7fa,	// (0x0001bfa2) image3_infobar_time_pane

0x9d86,	// (0x0001752e) image3_infobar_time_pane_g1

0xe80a,	// (0x0001bfb2) image3_infobar_time_pane_t1

0x9d86,	// (0x0001752e) image3_infobar_loc_pane_g1

0xe818,	// (0x0001bfc0) image3_infobar_loc_pane_g2

0x0001,

0xfd3b,	// (0x0001d4e3) image3_infobar_loc_pane_g

0xe820,	// (0x0001bfc8) image3_infobar_loc_pane_t1

0x9d86,	// (0x0001752e) image3_infobar_fav_pane_g1

0xe82e,	// (0x0001bfd6) image3_infobar_fav_pane_g2

0x0001,

0xfd40,	// (0x0001d4e8) image3_infobar_fav_pane_g

0xe836,	// (0x0001bfde) fs_bigclock_status_battery_pane

0xe83f,	// (0x0001bfe7) fs_bigclock_status_signal_pane

0xe848,	// (0x0001bff0) fs_bigclock_status_title_pane

0xe851,	// (0x0001bff9) fs_bigclock_status_signal_pane_g1

0xe85a,	// (0x0001c002) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd45,	// (0x0001d4ed) fs_bigclock_status_signal_pane_g

0xe862,	// (0x0001c00a) fs_bigclock_status_battery_pane_g1

0xe86b,	// (0x0001c013) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4a,	// (0x0001d4f2) fs_bigclock_status_battery_pane_g

0xe873,	// (0x0001c01b) fs_bigclock_status_title_pane_t1

0x8000,	// (0x000157a8) main_fs_bigclock_clock_pane_g1

0x8000,	// (0x000157a8) main_fs_bigclock_clock_pane_g2

0x8011,	// (0x000157b9) main_fs_bigclock_clock_pane_g3

0x8011,	// (0x000157b9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4f,	// (0x0001d4f7) main_fs_bigclock_clock_pane_g

0x8024,	// (0x000157cc) main_fs_bigclock_clock_pane_t1

0x803a,	// (0x000157e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd58,	// (0x0001d500) main_fs_bigclock_clock_pane_t

0xe881,	// (0x0001c029) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe881,	// (0x0001c029) list_single_fs_bigclock_indicator_pane

0xe892,	// (0x0001c03a) list_single_fs_bigclock_pane_ParamLimits

0xe892,	// (0x0001c03a) list_single_fs_bigclock_pane

0xe8b8,	// (0x0001c060) main_fs_bigclock_indicator_pane_t1

0xe8c7,	// (0x0001c06f) list_single_fs_bigclock_pane_g1

0xe8cf,	// (0x0001c077) list_single_fs_bigclock_pane_t1

0x9d86,	// (0x0001752e) main_fs_bigclock_swipe_pane_g1

0xe912,	// (0x0001c0ba) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd69,	// (0x0001d511) main_fs_bigclock_swipe_pane_g

0xe91a,	// (0x0001c0c2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe91a,	// (0x0001c0c2) main_fs_bigclock_swipe_pane_t1

0x2c12,	// (0x000103ba) call_type_pane_ParamLimits

0x9307,	// (0x00016aaf) main_btmg_pane

0xe555,	// (0x0001bcfd) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe555,	// (0x0001bcfd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcdc,	// (0x0001d484) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdc,	// (0x0001d484) list_single_cale_mrui_row_pane_g

0xe6d2,	// (0x0001be7a) list_recal_vselct_arw_lo_pane

0xe6da,	// (0x0001be82) list_recal_vselct_arw_up_pane

0xe6e2,	// (0x0001be8a) list_recal_vselct_pane

0x8094,	// (0x0001583c) btmg_button_pane

0x809e,	// (0x00015846) main_btmg_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp044

0xe937,	// (0x0001c0df) btmg_button_pane_t1

0xbc52,	// (0x000193fa) aid_listscroll_gen

0x9376,	// (0x00016b1e) main_cntbar_detail_pane

0xe242,	// (0x0001b9ea) list_cmail_folder_pane

0xcc9e,	// (0x0001a446) sp_fs_scroll_pane_cp03_ParamLimits

0x7b45,	// (0x000152ed) list_single_fs_dyc_pane_cp01_ParamLimits

0x7b45,	// (0x000152ed) list_single_fs_dyc_pane_cp01

0xe945,	// (0x0001c0ed) aid_size_cmail_indent

0xe94e,	// (0x0001c0f6) list_single_dyc_row_pane_cp01

0x80d4,	// (0x0001587c) cntbar_detail_list_pane_ParamLimits

0x80d4,	// (0x0001587c) cntbar_detail_list_pane

0x8120,	// (0x000158c8) main_cntbar_detail_cont_pane_ParamLimits

0x8120,	// (0x000158c8) main_cntbar_detail_cont_pane

0xcc9e,	// (0x0001a446) scroll_pane_cp032_ParamLimits

0xcc9e,	// (0x0001a446) scroll_pane_cp032

0x8134,	// (0x000158dc) cntbar_detail_list_event_pane_ParamLimits

0x8134,	// (0x000158dc) cntbar_detail_list_event_pane

0x80e4,	// (0x0001588c) cntbar_detail_list_shct_pane

0x9fe5,	// (0x0001778d) aid_list_gen

0xe957,	// (0x0001c0ff) aid_scroll

0xe960,	// (0x0001c108) aid_size_touch_scroll_bar

0x75c8,	// (0x00014d70) aid_list_double

0xe969,	// (0x0001c111) aid_list_single

0xe969,	// (0x0001c111) aid_list_single_lg

0xe972,	// (0x0001c11a) aid_list_z_g_a_sm

0xe97a,	// (0x0001c122) aid_list_z_g_d

0xe982,	// (0x0001c12a) aid_txt_z_prm

0x8144,	// (0x000158ec) aid_txt_z_prm_cp01

0x8152,	// (0x000158fa) aid_txt_z_sec

0x8160,	// (0x00015908) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8160,	// (0x00015908) main_cntbar_detail_cont_pane_g1

0x8174,	// (0x0001591c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8174,	// (0x0001591c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6e,	// (0x0001d516) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6e,	// (0x0001d516) main_cntbar_detail_cont_pane_g

0xe990,	// (0x0001c138) main_cntbar_detail_cont_pane_t1

0xe99e,	// (0x0001c146) main_cntbar_detail_cont_pane_t2

0xe9ac,	// (0x0001c154) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd73,	// (0x0001d51b) main_cntbar_detail_cont_pane_t

0x8184,	// (0x0001592c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8184,	// (0x0001592c) cell_cntbar_detail_list_shct_pane

0xe9ba,	// (0x0001c162) cntbar_detail_list_shct_pane_g1

0xe9c3,	// (0x0001c16b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7a,	// (0x0001d522) cntbar_detail_list_shct_pane_g

0x8198,	// (0x00015940) cntbar_detail_list_event_pane_g1_ParamLimits

0x8198,	// (0x00015940) cntbar_detail_list_event_pane_g1

0x81a4,	// (0x0001594c) cntbar_detail_list_event_pane_g2_ParamLimits

0x81a4,	// (0x0001594c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7f,	// (0x0001d527) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7f,	// (0x0001d527) cntbar_detail_list_event_pane_g

0x8210,	// (0x000159b8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8210,	// (0x000159b8) cntbar_detail_list_event_pane_t1

0x8225,	// (0x000159cd) cntbar_detail_list_event_pane_t2_ParamLimits

0x8225,	// (0x000159cd) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8c,	// (0x0001d534) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8c,	// (0x0001d534) cntbar_detail_list_event_pane_t

0x9d86,	// (0x0001752e) cell_cntbar_detail_list_shct_pane_g1

0xa7f6,	// (0x00017f9e) navi_pane_mv_g3

0x9376,	// (0x00016b1e) main_cntbar_detail_pane_ParamLimits

0x9307,	// (0x00016aaf) main_notif_wgt_pane

0xc93d,	// (0x0001a0e5) aid_tch_main_mp4_pane_g4

0xcb6f,	// (0x0001a317) popup_slider_window_cp02

0xe6c8,	// (0x0001be70) list_recal_day_event_pane

0x80a8,	// (0x00015850) cntbar_detail_btn_pane_ParamLimits

0x80a8,	// (0x00015850) cntbar_detail_btn_pane

0x80be,	// (0x00015866) cntbar_detail_btn_pane_cp01_ParamLimits

0x80be,	// (0x00015866) cntbar_detail_btn_pane_cp01

0x80e4,	// (0x0001588c) cntbar_detail_list_shct_pane_ParamLimits

0x80f4,	// (0x0001589c) cntbar_detail_pane_g1_ParamLimits

0x80f4,	// (0x0001589c) cntbar_detail_pane_g1

0x8104,	// (0x000158ac) cntbar_detail_pane_t1_ParamLimits

0x8104,	// (0x000158ac) cntbar_detail_pane_t1

0x81b0,	// (0x00015958) cntbar_detail_list_event_pane_g3_ParamLimits

0x81b0,	// (0x00015958) cntbar_detail_list_event_pane_g3

0x81c8,	// (0x00015970) cntbar_detail_list_event_pane_g4_ParamLimits

0x81c8,	// (0x00015970) cntbar_detail_list_event_pane_g4

0x81e0,	// (0x00015988) cntbar_detail_list_event_pane_g5_ParamLimits

0x81e0,	// (0x00015988) cntbar_detail_list_event_pane_g5

0x81f8,	// (0x000159a0) cntbar_detail_list_event_pane_g6_ParamLimits

0x81f8,	// (0x000159a0) cntbar_detail_list_event_pane_g6

0x823a,	// (0x000159e2) cntbar_detail_list_event_pane_t3_ParamLimits

0x823a,	// (0x000159e2) cntbar_detail_list_event_pane_t3

0x824c,	// (0x000159f4) popup_notif_wgt_window_ParamLimits

0x824c,	// (0x000159f4) popup_notif_wgt_window

0x8265,	// (0x00015a0d) popup_submenu_window_cp01_ParamLimits

0x8265,	// (0x00015a0d) popup_submenu_window_cp01

0x9d46,	// (0x000174ee) bg_popup_window_pane_cp10

0xe9cc,	// (0x0001c174) listscroll_notif_wgt_pane

0xe9de,	// (0x0001c186) list_notif_wgt_window

0xe9e7,	// (0x0001c18f) scroll_pane_cp033

0x827b,	// (0x00015a23) list_notif_wgt_row_pane_ParamLimits

0x827b,	// (0x00015a23) list_notif_wgt_row_pane

0xe9f0,	// (0x0001c198) aid_size_list_notif_wgt_del

0xe9fd,	// (0x0001c1a5) list_notif_wgt_row_pane_g1

0xea09,	// (0x0001c1b1) list_notif_wgt_row_pane_g2

0xea18,	// (0x0001c1c0) list_notif_wgt_row_pane_g3

0x0002,

0xfd93,	// (0x0001d53b) list_notif_wgt_row_pane_g

0xea25,	// (0x0001c1cd) list_notif_wgt_row_pane_t1

0xea3b,	// (0x0001c1e3) list_notif_wgt_row_pane_t2

0xea4d,	// (0x0001c1f5) list_notif_wgt_row_pane_t3

0x0002,

0xfd9a,	// (0x0001d542) list_notif_wgt_row_pane_t

0xd0cc,	// (0x0001a874) list_recal_day_event_pane_g1

0xea5f,	// (0x0001c207) list_recal_day_event_pane_t1

0x9307,	// (0x00016aaf) bg_button_pane_cp045

0xea6e,	// (0x0001c216) cntbar_detail_btn_pane_t1

0xa93d,	// (0x000180e5) main_callh_pane_ParamLimits

0xa93d,	// (0x000180e5) main_callh_pane

0x9307,	// (0x00016aaf) main_coverflow0_pane

0x9307,	// (0x00016aaf) main_wgtman_pane

0x7438,	// (0x00014be0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7438,	// (0x00014be0) main_fs_bigclock_unlock_btn_pane

0x7ac1,	// (0x00015269) bg_button_pane_cp16

0x7ad1,	// (0x00015279) cell_tport_appsw_pane_g3

0x828b,	// (0x00015a33) cf0_flow_pane_ParamLimits

0x828b,	// (0x00015a33) cf0_flow_pane

0xea7c,	// (0x0001c224) listscroll_cf0_pane

0xea87,	// (0x0001c22f) main_cf0_pane_g1

0x82a0,	// (0x00015a48) main_cf0_pane_t1_ParamLimits

0x82a0,	// (0x00015a48) main_cf0_pane_t1

0x82b7,	// (0x00015a5f) main_cf0_pane_t2_ParamLimits

0x82b7,	// (0x00015a5f) main_cf0_pane_t2

0x0001,

0xfda6,	// (0x0001d54e) main_cf0_pane_t_ParamLimits

0xfda6,	// (0x0001d54e) main_cf0_pane_t

0xea99,	// (0x0001c241) scroll_pane_cp11

0x82ce,	// (0x00015a76) cf0_flow_pane_g1

0x82d6,	// (0x00015a7e) cf0_flow_pane_g2

0x0001,

0xfdab,	// (0x0001d553) cf0_flow_pane_g

0x82de,	// (0x00015a86) cf0_flow_pane_t1

0x9307,	// (0x00016aaf) main_call6_pane

0x9307,	// (0x00016aaf) main_calllock_pane

0x82ec,	// (0x00015a94) call6_btn_grp_pane_ParamLimits

0x82ec,	// (0x00015a94) call6_btn_grp_pane

0x8306,	// (0x00015aae) call6_pane_g1_ParamLimits

0x8306,	// (0x00015aae) call6_pane_g1

0x831c,	// (0x00015ac4) popup_call6_1st_window_ParamLimits

0x831c,	// (0x00015ac4) popup_call6_1st_window

0x832d,	// (0x00015ad5) popup_call6_2nd_window_ParamLimits

0x832d,	// (0x00015ad5) popup_call6_2nd_window

0x833e,	// (0x00015ae6) cell_call6_btn_pane_ParamLimits

0x833e,	// (0x00015ae6) cell_call6_btn_pane

0x9d46,	// (0x000174ee) bg_popup_call2_in_pane_cp03

0xeaa4,	// (0x0001c24c) popup_call6_1st_window_g1

0xeaac,	// (0x0001c254) popup_call6_1st_window_g2

0xeab4,	// (0x0001c25c) popup_call6_1st_window_g3

0x0002,

0xfdb0,	// (0x0001d558) popup_call6_1st_window_g

0xeabc,	// (0x0001c264) popup_call6_1st_window_t1

0xeacb,	// (0x0001c273) popup_call6_1st_window_t2

0xead9,	// (0x0001c281) popup_call6_1st_window_t3

0x0002,

0xfdb7,	// (0x0001d55f) popup_call6_1st_window_t

0x9d46,	// (0x000174ee) bg_popup_call2_in_pane_cp04

0xeae7,	// (0x0001c28f) popup_call6_2nd_window_g1

0xeaef,	// (0x0001c297) popup_call6_2nd_window_g2

0xeaf7,	// (0x0001c29f) popup_call6_2nd_window_g3

0x0002,

0xfdbe,	// (0x0001d566) popup_call6_2nd_window_g

0xeaff,	// (0x0001c2a7) popup_call6_2nd_window_t1

0x9307,	// (0x00016aaf) bg_button_pane_cp15

0xeb0e,	// (0x0001c2b6) cell_call6_btn_pane_g1

0xeb17,	// (0x0001c2bf) cell_call6_btn_pane_t1

0x8351,	// (0x00015af9) listscroll_wgtman_pane_ParamLimits

0x8351,	// (0x00015af9) listscroll_wgtman_pane

0x8372,	// (0x00015b1a) wgtman_btn_pane_ParamLimits

0x8372,	// (0x00015b1a) wgtman_btn_pane

0xa5fd,	// (0x00017da5) aid_scroll_copy1

0xeb26,	// (0x0001c2ce) list_wgtman_pane

0x83b5,	// (0x00015b5d) wgtman_btn_pane_g1_ParamLimits

0x83b5,	// (0x00015b5d) wgtman_btn_pane_g1

0x83e1,	// (0x00015b89) wgtman_btn_pane_t1_ParamLimits

0x83e1,	// (0x00015b89) wgtman_btn_pane_t1

0xeb30,	// (0x0001c2d8) wgtman_btn_pane_t2_ParamLimits

0xeb30,	// (0x0001c2d8) wgtman_btn_pane_t2

0x0001,

0xfdc5,	// (0x0001d56d) wgtman_btn_pane_t_ParamLimits

0xfdc5,	// (0x0001d56d) wgtman_btn_pane_t

0x841e,	// (0x00015bc6) listrow_wgtman_pane_ParamLimits

0x841e,	// (0x00015bc6) listrow_wgtman_pane

0x8430,	// (0x00015bd8) listrow_wgtman_pane_g1

0x843d,	// (0x00015be5) listrow_wgtman_pane_g2

0x0001,

0xfdca,	// (0x0001d572) listrow_wgtman_pane_g

0x845b,	// (0x00015c03) listrow_wgtman_pane_t1

0x8473,	// (0x00015c1b) listrow_wgtman_pane_t2

0x0001,

0xfdcf,	// (0x0001d577) listrow_wgtman_pane_t

0x8499,	// (0x00015c41) wait_bar_pane_cp09

0xeb47,	// (0x0001c2ef) main_calllock_btn_pane

0xeb51,	// (0x0001c2f9) main_calllock_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp17

0xeb0e,	// (0x0001c2b6) main_calllock_btn_pane_g1

0xeb59,	// (0x0001c301) main_calllock_btn_pane_t1

0x9307,	// (0x00016aaf) main_dialer3_pane

0x9307,	// (0x00016aaf) main_fmrd2_pane

0x9d86,	// (0x0001752e) main_fs_bigclock_unlock_btn_pane_g1

0x84b3,	// (0x00015c5b) main_fs_bigclock_unlock_btn_pane_t1

0x84c1,	// (0x00015c69) area_fmrd2_info_pane_ParamLimits

0x84c1,	// (0x00015c69) area_fmrd2_info_pane

0x84d2,	// (0x00015c7a) area_fmrd2_visual_pane_ParamLimits

0x84d2,	// (0x00015c7a) area_fmrd2_visual_pane

0x84e0,	// (0x00015c88) fmrd2_indi_pane_ParamLimits

0x84e0,	// (0x00015c88) fmrd2_indi_pane

0x84ed,	// (0x00015c95) area_fmrd2_visual_pane_g1

0x84f5,	// (0x00015c9d) area_fmrd2_visual_pane_t1

0x8505,	// (0x00015cad) area_fmrd2_visual_pane_t2

0x8515,	// (0x00015cbd) area_fmrd2_visual_pane_t3

0x0002,

0xfdd9,	// (0x0001d581) area_fmrd2_visual_pane_t

0x8525,	// (0x00015ccd) area_fmrd2_info_pane_g1

0x852d,	// (0x00015cd5) area_fmrd2_info_pane_t1

0x853d,	// (0x00015ce5) area_fmrd2_info_pane_t2

0x854d,	// (0x00015cf5) area_fmrd2_info_pane_t3

0x855d,	// (0x00015d05) area_fmrd2_info_pane_t4

0x0003,

0xfde0,	// (0x0001d588) area_fmrd2_info_pane_t

0x856b,	// (0x00015d13) fmrd2_indi_pane_t1

0x857b,	// (0x00015d23) fmrd2_indi_pane_t2

0x858b,	// (0x00015d33) fmrd2_indi_pane_t3

0x0002,

0xfde9,	// (0x0001d591) fmrd2_indi_pane_t

0xdd3c,	// (0x0001b4e4) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdd3c,	// (0x0001b4e4) list_single_fs_bigclock_indicator_pane_g5

0xdded,	// (0x0001b595) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdded,	// (0x0001b595) list_single_fs_bigclock_indicator_pane_t5

0x7c5c,	// (0x00015404) aid_cell_bcale_month_pane_ParamLimits

0x7c5c,	// (0x00015404) aid_cell_bcale_month_pane

0x7c7a,	// (0x00015422) bcale_month_pane_ParamLimits

0x7c7a,	// (0x00015422) bcale_month_pane

0x7c9e,	// (0x00015446) bcale_preview_pane_ParamLimits

0x7c9e,	// (0x00015446) bcale_preview_pane

0xe8cf,	// (0x0001c077) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8ee,	// (0x0001c096) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8ee,	// (0x0001c096) list_single_fs_bigclock_pane_t2

0x0001,

0xfd64,	// (0x0001d50c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd64,	// (0x0001d50c) list_single_fs_bigclock_pane_t

0x84ab,	// (0x00015c53) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd4,	// (0x0001d57c) main_fs_bigclock_unlock_btn_pane_g

0x859b,	// (0x00015d43) aid_dia3_key_size_ParamLimits

0x859b,	// (0x00015d43) aid_dia3_key_size

0x85aa,	// (0x00015d52) aid_dia3_listrow_size_ParamLimits

0x85aa,	// (0x00015d52) aid_dia3_listrow_size

0x85bf,	// (0x00015d67) dia3_keypad_fun_pane_ParamLimits

0x85bf,	// (0x00015d67) dia3_keypad_fun_pane

0x85db,	// (0x00015d83) dia3_keypad_num_pane_ParamLimits

0x85db,	// (0x00015d83) dia3_keypad_num_pane

0x85f6,	// (0x00015d9e) dia3_listscroll_pane_ParamLimits

0x85f6,	// (0x00015d9e) dia3_listscroll_pane

0x8609,	// (0x00015db1) dia3_numentry_pane_ParamLimits

0x8609,	// (0x00015db1) dia3_numentry_pane

0xeb68,	// (0x0001c310) dia3_list_pane

0xeb73,	// (0x0001c31b) scroll_pane_cp12

0x9307,	// (0x00016aaf) bg_dia3_numentry_pane

0x8621,	// (0x00015dc9) dia3_numentry_pane_t1

0x8630,	// (0x00015dd8) cell_dia3_key_num_pane

0x8638,	// (0x00015de0) cell_dia3_key0_fun_pane_ParamLimits

0x8638,	// (0x00015de0) cell_dia3_key0_fun_pane

0x864c,	// (0x00015df4) cell_dia3_key1_fun_pane_ParamLimits

0x864c,	// (0x00015df4) cell_dia3_key1_fun_pane

0x8664,	// (0x00015e0c) dia3_listrow_pane

0xda8f,	// (0x0001b237) bg_dia3_numentry_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp21

0xeb7e,	// (0x0001c326) cell_dia3_key_num_pane_t1

0xeb8c,	// (0x0001c334) cell_dia3_key_num_pane_t2

0xeb9b,	// (0x0001c343) cell_dia3_key_num_pane_t3

0xebaa,	// (0x0001c352) cell_dia3_key_num_pane_t4

0x0003,

0xfdf0,	// (0x0001d598) cell_dia3_key_num_pane_t

0x9307,	// (0x00016aaf) bg_button_pane_cp19

0x8676,	// (0x00015e1e) cell_dia3_key0_fun_pane_g1

0x9307,	// (0x00016aaf) bg_button_pane_cp20

0x867e,	// (0x00015e26) cell_dia3_key1_fun_pane_g1

0x8686,	// (0x00015e2e) area_left_week_number_pane

0x8692,	// (0x00015e3a) area_top_day_name_pane

0x86a5,	// (0x00015e4d) frame_month_view_pane

0xebb9,	// (0x0001c361) grid_month_view_pane

0x86b8,	// (0x00015e60) cell_top_day_name_pane_ParamLimits

0x86b8,	// (0x00015e60) cell_top_day_name_pane

0x86e5,	// (0x00015e8d) cell_area_left_week_number_pane_ParamLimits

0x86e5,	// (0x00015e8d) cell_area_left_week_number_pane

0x86f9,	// (0x00015ea1) cell_month_view_pane_ParamLimits

0x86f9,	// (0x00015ea1) cell_month_view_pane

0xebc7,	// (0x0001c36f) frm_month_g1

0x8726,	// (0x00015ece) frm_month_g2

0x8739,	// (0x00015ee1) frm_month_g3

0x874c,	// (0x00015ef4) frm_month_g4

0x875f,	// (0x00015f07) frm_month_g5

0x8772,	// (0x00015f1a) frm_month_g6

0x8785,	// (0x00015f2d) frm_month_g7

0xebd4,	// (0x0001c37c) frm_month_g8

0x8798,	// (0x00015f40) frm_month_g9

0x87a8,	// (0x00015f50) frm_month_g10

0x87b8,	// (0x00015f60) frm_month_g11

0x87c8,	// (0x00015f70) frm_month_g12

0x87da,	// (0x00015f82) frm_month_g13

0x87ec,	// (0x00015f94) frm_month_g14

0x8800,	// (0x00015fa8) frm_month_g15

0x8814,	// (0x00015fbc) frm_month_g16

0x000f,

0xfdf9,	// (0x0001d5a1) frm_month_g

0xebe1,	// (0x0001c389) cell_top_day_name_pane_t1

0x8828,	// (0x00015fd0) cell_area_left_week_number_pane_g1

0x8834,	// (0x00015fdc) cell_area_left_week_number_pane_t1

0x9a6d,	// (0x00017215) cell_month_view_pane_g1

0x8847,	// (0x00015fef) cell_month_view_pane_t1

0x9307,	// (0x00016aaf) main_fps_pane

0xe04e,	// (0x0001b7f6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe04e,	// (0x0001b7f6) cmail_ddmenu_btn02_pane_cp1

0xe06a,	// (0x0001b812) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe06a,	// (0x0001b812) cmail_ddmenu_btn02_pane_cp2

0x7f5c,	// (0x00015704) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7f5c,	// (0x00015704) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd17,	// (0x0001d4bf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd17,	// (0x0001d4bf) cmail_ddmenu_btn02_pane_g

0x7f7a,	// (0x00015722) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7f7a,	// (0x00015722) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1c,	// (0x0001d4c4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1c,	// (0x0001d4c4) cmail_ddmenu_btn02_pane_t

0x885a,	// (0x00016002) fps_text_pane_ParamLimits

0x885a,	// (0x00016002) fps_text_pane

0x8871,	// (0x00016019) main_fps_pane_g1_ParamLimits

0x8871,	// (0x00016019) main_fps_pane_g1

0x888b,	// (0x00016033) wait_bar_pane_cp010_ParamLimits

0x888b,	// (0x00016033) wait_bar_pane_cp010

0x889c,	// (0x00016044) fps_text_pane_t1_ParamLimits

0x889c,	// (0x00016044) fps_text_pane_t1

0xec0c,	// (0x0001c3b4) cam4_image_uncrop_pane_g1

0xec15,	// (0x0001c3bd) cam4_image_uncrop_pane_g2

0x55d3,	// (0x00012d7b) cam4_image_uncrop_pane_g3

0x55dc,	// (0x00012d84) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x0001d003) cam4_image_uncrop_pane_g

0x8664,	// (0x00015e0c) dia3_listrow_pane_ParamLimits

0x9307,	// (0x00016aaf) main_phob2_pane

0x7a92,	// (0x0001523a) cell_tport_appsw_pane_cp02_ParamLimits

0x7a92,	// (0x0001523a) cell_tport_appsw_pane_cp02

0x7aa6,	// (0x0001524e) cell_tport_appsw_pane_cp03_ParamLimits

0x7aa6,	// (0x0001524e) cell_tport_appsw_pane_cp03

0x9307,	// (0x00016aaf) phob2_contact_card_pane

0x9307,	// (0x00016aaf) phob2_listscroll_pane

0xebf4,	// (0x0001c39c) phob2_list_pane

0xebfc,	// (0x0001c3a4) scroll_pane_cp034

0x88b4,	// (0x0001605c) phob2_cc_data_pane_ParamLimits

0x88b4,	// (0x0001605c) phob2_cc_data_pane

0x88d3,	// (0x0001607b) phob2_cc_listscroll_pane_ParamLimits

0x88d3,	// (0x0001607b) phob2_cc_listscroll_pane

0x841e,	// (0x00015bc6) list_double_large_graphic_phob2_pane_ParamLimits

0x841e,	// (0x00015bc6) list_double_large_graphic_phob2_pane

0x88f1,	// (0x00016099) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x88f1,	// (0x00016099) list_double_large_graphic_phob2_pane_g1

0x88fe,	// (0x000160a6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x88fe,	// (0x000160a6) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1a,	// (0x0001d5c2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1a,	// (0x0001d5c2) list_double_large_graphic_phob2_pane_g

0x8924,	// (0x000160cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8924,	// (0x000160cc) list_double_large_graphic_phob2_pane_t1

0x8939,	// (0x000160e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8939,	// (0x000160e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe23,	// (0x0001d5cb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe23,	// (0x0001d5cb) list_double_large_graphic_phob2_pane_t

0x9307,	// (0x00016aaf) list_highlight_pane_cp024

0xec04,	// (0x0001c3ac) phob2_cc_button_pane

0x894e,	// (0x000160f6) phob2_cc_data_pane_g1_ParamLimits

0x894e,	// (0x000160f6) phob2_cc_data_pane_g1

0x8965,	// (0x0001610d) phob2_cc_data_pane_g2_ParamLimits

0x8965,	// (0x0001610d) phob2_cc_data_pane_g2

0x0001,

0xfe28,	// (0x0001d5d0) phob2_cc_data_pane_g_ParamLimits

0xfe28,	// (0x0001d5d0) phob2_cc_data_pane_g

0x8977,	// (0x0001611f) phob2_cc_data_pane_t1_ParamLimits

0x8977,	// (0x0001611f) phob2_cc_data_pane_t1

0x898f,	// (0x00016137) phob2_cc_data_pane_t2_ParamLimits

0x898f,	// (0x00016137) phob2_cc_data_pane_t2

0x89a7,	// (0x0001614f) phob2_cc_data_pane_t3_ParamLimits

0x89a7,	// (0x0001614f) phob2_cc_data_pane_t3

0x0002,

0xfe2d,	// (0x0001d5d5) phob2_cc_data_pane_t_ParamLimits

0xfe2d,	// (0x0001d5d5) phob2_cc_data_pane_t

0xec1e,	// (0x0001c3c6) phob2_cc_list_pane_ParamLimits

0xec1e,	// (0x0001c3c6) phob2_cc_list_pane

0xd175,	// (0x0001a91d) scroll_pane_cp035_ParamLimits

0xd175,	// (0x0001a91d) scroll_pane_cp035

0x9376,	// (0x00016b1e) bg_button_pane_cp033

0xec2a,	// (0x0001c3d2) phob2_cc_button_pane_g1

0xec36,	// (0x0001c3de) phob2_cc_button_pane_t1

0xec4b,	// (0x0001c3f3) phob2_cc_button_pane_t2

0x0001,

0xfe34,	// (0x0001d5dc) phob2_cc_button_pane_t

0x89bf,	// (0x00016167) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x89bf,	// (0x00016167) list_double_large_graphic_phob2_cc_pane

0x89ef,	// (0x00016197) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x89ef,	// (0x00016197) list_double_large_graphic_phob2_cc_pane_g1

0x89fb,	// (0x000161a3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x89fb,	// (0x000161a3) list_double_large_graphic_phob2_cc_pane_g2

0x8a07,	// (0x000161af) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8a07,	// (0x000161af) list_double_large_graphic_phob2_cc_pane_g3

0x8a13,	// (0x000161bb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8a13,	// (0x000161bb) list_double_large_graphic_phob2_cc_pane_g4

0x8a1f,	// (0x000161c7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8a1f,	// (0x000161c7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe39,	// (0x0001d5e1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe39,	// (0x0001d5e1) list_double_large_graphic_phob2_cc_pane_g

0x8a2b,	// (0x000161d3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8a2b,	// (0x000161d3) list_double_large_graphic_phob2_cc_pane_t1

0x8a54,	// (0x000161fc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8a54,	// (0x000161fc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe44,	// (0x0001d5ec) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe44,	// (0x0001d5ec) list_double_large_graphic_phob2_cc_pane_t

0xec5d,	// (0x0001c405) list_highlight_pane_cp025_ParamLimits

0xec5d,	// (0x0001c405) list_highlight_pane_cp025

0x9376,	// (0x00016b1e) bg_button_pane_cp033_ParamLimits

0xec2a,	// (0x0001c3d2) phob2_cc_button_pane_g1_ParamLimits

0xec36,	// (0x0001c3de) phob2_cc_button_pane_t1_ParamLimits

0xec4b,	// (0x0001c3f3) phob2_cc_button_pane_t2_ParamLimits

0xfe34,	// (0x0001d5dc) phob2_cc_button_pane_t_ParamLimits

0x1040,	// (0x0000e7e8) popup_wgtman_window

0xcf09,	// (0x0001a6b1) scroll_pane_cp038

0x8397,	// (0x00015b3f) wgtman_btn_pane_cp_01_ParamLimits

0x8397,	// (0x00015b3f) wgtman_btn_pane_cp_01

0xec6b,	// (0x0001c413) wgtman_content_pane

0xec74,	// (0x0001c41c) wgtman_heading_pane

0x9307,	// (0x00016aaf) bg_heading_pane_cp02

0xec7d,	// (0x0001c425) wgtman_heading_pane_g1

0xec85,	// (0x0001c42d) wgtman_heading_pane_t1

0xec93,	// (0x0001c43b) scroll_pane_cp036

0xec9b,	// (0x0001c443) wgtman_list_pane

0xeca3,	// (0x0001c44b) wgtman_list_pane_t1_ParamLimits

0xeca3,	// (0x0001c44b) wgtman_list_pane_t1

0xcc92,	// (0x0001a43a) cam4_grid_pane

0x630b,	// (0x00013ab3) bg_button_pane_cp015_ParamLimits

0x631c,	// (0x00013ac4) bg_button_pane_cp016_ParamLimits

0x6328,	// (0x00013ad0) bg_button_pane_cp017_ParamLimits

0x637c,	// (0x00013b24) popup_vitu2_query_window_g3_ParamLimits

0x637c,	// (0x00013b24) popup_vitu2_query_window_g3

0x641d,	// (0x00013bc5) popup_vitu2_query_window_t6_ParamLimits

0x641d,	// (0x00013bc5) popup_vitu2_query_window_t6

0x6448,	// (0x00013bf0) popup_vitu2_query_window_t7_ParamLimits

0x6448,	// (0x00013bf0) popup_vitu2_query_window_t7

0xec0c,	// (0x0001c3b4) cam4_grid_pane_g1

0xec15,	// (0x0001c3bd) cam4_grid_pane_g2

0xecbd,	// (0x0001c465) cam4_grid_pane_g3

0xecc6,	// (0x0001c46e) cam4_grid_pane_g4

0x0003,

0xfe49,	// (0x0001d5f1) cam4_grid_pane_g

0x1c07,	// (0x0000f3af) aid_placing_vt_slider_lsc_ParamLimits

0x1f12,	// (0x0000f6ba) vidtel_button_pane_ParamLimits

0x1f12,	// (0x0000f6ba) vidtel_button_pane

0x9307,	// (0x00016aaf) bg_button_pane_cp034

0xecd1,	// (0x0001c479) vidtel_button_pane_g1

0xecd9,	// (0x0001c481) vidtel_button_pane_t1

0xd080,	// (0x0001a828) aid_size_vtel_slider_touch

0xd175,	// (0x0001a91d) scroll_pane_cp039

0x712c,	// (0x000148d4) ncim_query_button_pane_cp01_ParamLimits

0x714b,	// (0x000148f3) ncimui_query_pane_g1_ParamLimits

0x9376,	// (0x00016b1e) input_focus_pane_cp012_ParamLimits

0xdacd,	// (0x0001b275) ncim_query_entry_pane_t1_ParamLimits

0xd175,	// (0x0001a91d) scroll_pane_cp039_ParamLimits

0xa6e1,	// (0x00017e89) navi_pane_bcale_mc_g1

0xa6e9,	// (0x00017e91) navi_pane_bcale_mc_t1

0xe09e,	// (0x0001b846) main_sp_fs_email_pane_g1

0xe0aa,	// (0x0001b852) main_sp_fs_email_pane_g2

0x0001,

0xfc4c,	// (0x0001d3f4) main_sp_fs_email_pane_g

0xe561,	// (0x0001bd09) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe561,	// (0x0001bd09) list_single_cale_mrui_row_pane_g3

0x7f9a,	// (0x00015742) list_single_recal_day_pane_g5_event_pane

0xe739,	// (0x0001bee1) list_single_recal_day_pane_g7

0xecef,	// (0x0001c497) list_recal_day_event_pane_cp01

0xecf8,	// (0x0001c4a0) list_recal_vselct_arw_lo_pane_cp01

0xed00,	// (0x0001c4a8) list_recal_vselct_arw_up_pane_cp01

0xed08,	// (0x0001c4b0) list_recal_vselct_pane_cp01

0xd0cc,	// (0x0001a874) list_recal_day_event_pane_cp01_g1

0xed12,	// (0x0001c4ba) list_recal_day_event_pane_cp01_t1

0xe741,	// (0x0001bee9) list_single_recal_day_pane_t1_ParamLimits

0xe753,	// (0x0001befb) list_single_recal_day_pane_t2_ParamLimits

0xfd2c,	// (0x0001d4d4) list_single_recal_day_pane_t_ParamLimits

0x99f2,	// (0x0001719a) bg_notes_pane_ParamLimits

0x9ac5,	// (0x0001726d) list_notes_pane_ParamLimits

0x1260,	// (0x0000ea08) scroll_pane_cp06_ParamLimits

0x9b01,	// (0x000172a9) main_notes_pane_ParamLimits

0x9376,	// (0x00016b1e) main_welc_pane

0x8aac,	// (0x00016254) main_welc_body_pane_ParamLimits

0x8aac,	// (0x00016254) main_welc_body_pane

0x8aca,	// (0x00016272) main_welc_opti_pane_ParamLimits

0x8aca,	// (0x00016272) main_welc_opti_pane

0x8b45,	// (0x000162ed) main_welc_pane_t1_ParamLimits

0x8b45,	// (0x000162ed) main_welc_pane_t1

0x8d29,	// (0x000164d1) main_welc_body_row_pane_ParamLimits

0x8d29,	// (0x000164d1) main_welc_body_row_pane

0x9a5f,	// (0x00017207) main_welc_opti_row_pane_ParamLimits

0x9a5f,	// (0x00017207) main_welc_opti_row_pane

0xed30,	// (0x0001c4d8) main_welc_opti_row_pane_g1

0x8d3d,	// (0x000164e5) main_welc_opti_row_pane_t1

0xed38,	// (0x0001c4e0) main_welc_body_row_pane_t1

0xe9d6,	// (0x0001c17e) popup_notif_wgt_heading_pane

0xe9f0,	// (0x0001c198) aid_size_list_notif_wgt_del_ParamLimits

0xe9fd,	// (0x0001c1a5) list_notif_wgt_row_pane_g1_ParamLimits

0xea09,	// (0x0001c1b1) list_notif_wgt_row_pane_g2_ParamLimits

0xea18,	// (0x0001c1c0) list_notif_wgt_row_pane_g3_ParamLimits

0xfd93,	// (0x0001d53b) list_notif_wgt_row_pane_g_ParamLimits

0xea25,	// (0x0001c1cd) list_notif_wgt_row_pane_t1_ParamLimits

0xea3b,	// (0x0001c1e3) list_notif_wgt_row_pane_t2_ParamLimits

0xea4d,	// (0x0001c1f5) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9a,	// (0x0001d542) list_notif_wgt_row_pane_t_ParamLimits

0x8430,	// (0x00015bd8) listrow_wgtman_pane_g1_ParamLimits

0x843d,	// (0x00015be5) listrow_wgtman_pane_g2_ParamLimits

0xfdca,	// (0x0001d572) listrow_wgtman_pane_g_ParamLimits

0x845b,	// (0x00015c03) listrow_wgtman_pane_t1_ParamLimits

0x8473,	// (0x00015c1b) listrow_wgtman_pane_t2_ParamLimits

0xfdcf,	// (0x0001d577) listrow_wgtman_pane_t_ParamLimits

0x8499,	// (0x00015c41) wait_bar_pane_cp09_ParamLimits

0x9307,	// (0x00016aaf) bg_popup_heading_pane_cp02

0xed47,	// (0x0001c4ef) popup_notif_wgt_heading_pane_g1

0xed4f,	// (0x0001c4f7) popup_notif_wgt_heading_pane_t1

0x9307,	// (0x00016aaf) main_vids_pane

0x9307,	// (0x00016aaf) vids_listscroll_pane

0x8d4c,	// (0x000164f4) scroll_pane_cp040

0x9307,	// (0x00016aaf) vids_list_pane

0x8d57,	// (0x000164ff) vids_list_double_pane_ParamLimits

0x8d57,	// (0x000164ff) vids_list_double_pane

0x8d68,	// (0x00016510) vids_list_double_pane_g1

0x8d71,	// (0x00016519) vids_list_double_pane_t1

0x8d81,	// (0x00016529) vids_list_double_pane_t2

0x0001,

0xfe68,	// (0x0001d610) vids_list_double_pane_t

0x9376,	// (0x00016b1e) main_ncimui_pane_ParamLimits

0x6f62,	// (0x0001470a) main_ncimui_pane_g1_ParamLimits

0x6f6e,	// (0x00014716) main_ncimui_pane_g2_ParamLimits

0x6f6e,	// (0x00014716) main_ncimui_pane_g2

0x0001,

0xfb4d,	// (0x0001d2f5) main_ncimui_pane_g_ParamLimits

0xfb4d,	// (0x0001d2f5) main_ncimui_pane_g

0x8ae5,	// (0x0001628d) main_welc_pane_g1_ParamLimits

0x8ae5,	// (0x0001628d) main_welc_pane_g1

0x8afa,	// (0x000162a2) main_welc_pane_g2_ParamLimits

0x8afa,	// (0x000162a2) main_welc_pane_g2

0x0003,

0xfe52,	// (0x0001d5fa) main_welc_pane_g_ParamLimits

0xfe52,	// (0x0001d5fa) main_welc_pane_g

0x1246,	// (0x0000e9ee) listscroll_mce_pane_ParamLimits

0xa836,	// (0x00017fde) wait_bar_pane_cp10

0xbc5a,	// (0x00019402) main_cale_day_pane_ParamLimits

0xbc5a,	// (0x00019402) main_cale_week_pane_ParamLimits

0x99f2,	// (0x0001719a) main_messa_pane_ParamLimits

0x49ee,	// (0x00012196) main_clock2_btn_pane_ParamLimits

0x49ee,	// (0x00012196) main_clock2_btn_pane

0xc4e1,	// (0x00019c89) main_clock2_btn_pane_cp01_ParamLimits

0xc4e1,	// (0x00019c89) main_clock2_btn_pane_cp01

0xe4ed,	// (0x0001bc95) list_cale_mrui_pane_ParamLimits

0xea91,	// (0x0001c239) main_cf0_pane_g2

0x0001,

0xfda1,	// (0x0001d549) main_cf0_pane_g

0x8686,	// (0x00015e2e) area_left_week_number_pane_ParamLimits

0x8692,	// (0x00015e3a) area_top_day_name_pane_ParamLimits

0x86a5,	// (0x00015e4d) frame_month_view_pane_ParamLimits

0xebb9,	// (0x0001c361) grid_month_view_pane_ParamLimits

0xebc7,	// (0x0001c36f) frm_month_g1_ParamLimits

0x8726,	// (0x00015ece) frm_month_g2_ParamLimits

0x8739,	// (0x00015ee1) frm_month_g3_ParamLimits

0x874c,	// (0x00015ef4) frm_month_g4_ParamLimits

0x875f,	// (0x00015f07) frm_month_g5_ParamLimits

0x8772,	// (0x00015f1a) frm_month_g6_ParamLimits

0x8785,	// (0x00015f2d) frm_month_g7_ParamLimits

0xebd4,	// (0x0001c37c) frm_month_g8_ParamLimits

0x8798,	// (0x00015f40) frm_month_g9_ParamLimits

0x87a8,	// (0x00015f50) frm_month_g10_ParamLimits

0x87b8,	// (0x00015f60) frm_month_g11_ParamLimits

0x87c8,	// (0x00015f70) frm_month_g12_ParamLimits

0x87da,	// (0x00015f82) frm_month_g13_ParamLimits

0x87ec,	// (0x00015f94) frm_month_g14_ParamLimits

0x8800,	// (0x00015fa8) frm_month_g15_ParamLimits

0x8814,	// (0x00015fbc) frm_month_g16_ParamLimits

0xfdf9,	// (0x0001d5a1) frm_month_g_ParamLimits

0xebe1,	// (0x0001c389) cell_top_day_name_pane_t1_ParamLimits

0x8828,	// (0x00015fd0) cell_area_left_week_number_pane_g1_ParamLimits

0x8834,	// (0x00015fdc) cell_area_left_week_number_pane_t1_ParamLimits

0x9a6d,	// (0x00017215) cell_month_view_pane_g1_ParamLimits

0x8847,	// (0x00015fef) cell_month_view_pane_t1_ParamLimits

0x99ea,	// (0x00017192) main_clock2_btn_pane_g1

0xed5d,	// (0x0001c505) main_clock2_btn_pane_t1

0x9376,	// (0x00016b1e) listscroll_cmail_pane_ParamLimits

0xe09e,	// (0x0001b846) main_sp_fs_email_pane_g1_ParamLimits

0xe0aa,	// (0x0001b852) main_sp_fs_email_pane_g2_ParamLimits

0xfc4c,	// (0x0001d3f4) main_sp_fs_email_pane_g_ParamLimits

0xe6a9,	// (0x0001be51) list_recal_day_pane_ParamLimits

0xe6ba,	// (0x0001be62) mian_recal_day_pane_t1

0x7935,	// (0x000150dd) list_single_dyc_row_text_pane_t4_ParamLimits

0x7935,	// (0x000150dd) list_single_dyc_row_text_pane_t4

0x797e,	// (0x00015126) list_single_dyc_row_text_pane_t5_ParamLimits

0x797e,	// (0x00015126) list_single_dyc_row_text_pane_t5

0xe172,	// (0x0001b91a) list_single_dyc_row_text_pane_t6_ParamLimits

0xe172,	// (0x0001b91a) list_single_dyc_row_text_pane_t6

0xa15c,	// (0x00017904) aid_mgn_list_cale_time_pane

0x9376,	// (0x00016b1e) main_gallery2_pane_ParamLimits

0xc4f7,	// (0x00019c9f) main_clock2_pane_cp01_t1

0xc507,	// (0x00019caf) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x0001ceda) main_clock2_pane_cp01_t

0x15fd,	// (0x0000eda5) cale_week_scroll_pane_g16_ParamLimits

0x15fd,	// (0x0000eda5) cale_week_scroll_pane_g16

0x9d46,	// (0x000174ee) vorec_slider_pane

0xecd9,	// (0x0001c481) vidtel_button_pane_t1_ParamLimits

0x8000,	// (0x000157a8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8000,	// (0x000157a8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8011,	// (0x000157b9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8011,	// (0x000157b9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4f,	// (0x0001d4f7) main_fs_bigclock_clock_pane_g_ParamLimits

0x8024,	// (0x000157cc) main_fs_bigclock_clock_pane_t1_ParamLimits

0x803a,	// (0x000157e2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd58,	// (0x0001d500) main_fs_bigclock_clock_pane_t_ParamLimits

0x42c3,	// (0x00011a6b) main_mup3_lyrics_pane_ParamLimits

0x42c3,	// (0x00011a6b) main_mup3_lyrics_pane

0x8db7,	// (0x0001655f) main_mup3_lyrics_pane_t1_ParamLimits

0x8db7,	// (0x0001655f) main_mup3_lyrics_pane_t1

0xc927,	// (0x0001a0cf) aid_main_mp4_pane_t1_area

0xc931,	// (0x0001a0d9) aid_main_mp4_pane_t2_area

0xc9dd,	// (0x0001a185) main_mp4_pane_g7_ParamLimits

0xc9dd,	// (0x0001a185) main_mp4_pane_g7

0xc9e9,	// (0x0001a191) main_mp4_pane_g8_ParamLimits

0xc9e9,	// (0x0001a191) main_mp4_pane_g8

0x53a6,	// (0x00012b4e) aid_call6_pane_g1_size

0x89d9,	// (0x00016181) list_double_large_graphic_phob2_other_pane_ParamLimits

0x89d9,	// (0x00016181) list_double_large_graphic_phob2_other_pane

0xa114,	// (0x000178bc) list_double_large_graphic_phob2_other_pane_g1

0x9307,	// (0x00016aaf) list_highlight_pane_cp026

0x9376,	// (0x00016b1e) main_welc_pane_ParamLimits

0x779a,	// (0x00014f42) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x779a,	// (0x00014f42) main_sp_fs_ctrlbar_pane_g3

0x77b4,	// (0x00014f5c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x77b4,	// (0x00014f5c) main_sp_fs_ctrlbar_pane_g4

0x77e8,	// (0x00014f90) toolbar2_fixed_button_pane_cp01

0x77f3,	// (0x00014f9b) toolbar2_fixed_button_pane_cp02

0x7800,	// (0x00014fa8) toolbar2_fixed_button_pane_cp03

0x8a90,	// (0x00016238) list_welc_entry_pane_ParamLimits

0x8a90,	// (0x00016238) list_welc_entry_pane

0x8b0f,	// (0x000162b7) main_welc_pane_g3_ParamLimits

0x8b0f,	// (0x000162b7) main_welc_pane_g3

0x8b63,	// (0x0001630b) main_welc_pane_t2_ParamLimits

0x8b63,	// (0x0001630b) main_welc_pane_t2

0x8b7d,	// (0x00016325) main_welc_pane_t3_ParamLimits

0x8b7d,	// (0x00016325) main_welc_pane_t3

0x0005,

0xfe5b,	// (0x0001d603) main_welc_pane_t_ParamLimits

0xfe5b,	// (0x0001d603) main_welc_pane_t

0x8cac,	// (0x00016454) welc_button_pane_ParamLimits

0x8cac,	// (0x00016454) welc_button_pane

0x8d14,	// (0x000164bc) welc_service_logo_pane_ParamLimits

0x8d14,	// (0x000164bc) welc_service_logo_pane

0x8dd3,	// (0x0001657b) list_single_welc_entry_pane_ParamLimits

0x8dd3,	// (0x0001657b) list_single_welc_entry_pane

0x8de4,	// (0x0001658c) list_single_welc_entry_pane_g1

0x8dec,	// (0x00016594) list_single_welc_entry_pane_t1

0x8dfa,	// (0x000165a2) list_single_welc_entry_pane_t2

0x0001,

0xfe6d,	// (0x0001d615) list_single_welc_entry_pane_t

0x9307,	// (0x00016aaf) bg_button_pane_cp035

0xed6b,	// (0x0001c513) welc_button_pane_t1

0xed79,	// (0x0001c521) welc_service_logo_pane_g1

0xed82,	// (0x0001c52a) welc_service_logo_pane_g2

0x0001,

0xfe72,	// (0x0001d61a) welc_service_logo_pane_g

0x9307,	// (0x00016aaf) main_int_radio_pane

0x9b9c,	// (0x00017344) list_single_fs_dyc_pane_g1

0x890a,	// (0x000160b2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x890a,	// (0x000160b2) list_double_large_graphic_phob2_pane_g3

0x8916,	// (0x000160be) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8916,	// (0x000160be) list_double_large_graphic_phob2_pane_g4

0x8e08,	// (0x000165b0) main_int_radio1_pane_ParamLimits

0x8e08,	// (0x000165b0) main_int_radio1_pane

0xed8b,	// (0x0001c533) find_pane_cp02

0x8e25,	// (0x000165cd) input_focus_pane_cp12_ParamLimits

0x8e25,	// (0x000165cd) input_focus_pane_cp12

0x8e35,	// (0x000165dd) input_focus_pane_cp13_ParamLimits

0x8e35,	// (0x000165dd) input_focus_pane_cp13

0x8e49,	// (0x000165f1) input_focus_pane_cp14_ParamLimits

0x8e49,	// (0x000165f1) input_focus_pane_cp14

0xed94,	// (0x0001c53c) int_radio1_listscroll_pane

0x8e5d,	// (0x00016605) main_int_radio1_pane_g1_ParamLimits

0x8e5d,	// (0x00016605) main_int_radio1_pane_g1

0x8e75,	// (0x0001661d) main_int_radio1_pane_t1_ParamLimits

0x8e75,	// (0x0001661d) main_int_radio1_pane_t1

0x8e90,	// (0x00016638) main_int_radio1_pane_t2_ParamLimits

0x8e90,	// (0x00016638) main_int_radio1_pane_t2

0x8eab,	// (0x00016653) main_int_radio1_pane_t3_ParamLimits

0x8eab,	// (0x00016653) main_int_radio1_pane_t3

0x8ec6,	// (0x0001666e) main_int_radio1_pane_t4_ParamLimits

0x8ec6,	// (0x0001666e) main_int_radio1_pane_t4

0xed9e,	// (0x0001c546) main_int_radio1_pane_t5_ParamLimits

0xed9e,	// (0x0001c546) main_int_radio1_pane_t5

0x8ed8,	// (0x00016680) main_int_radio1_pane_t6_ParamLimits

0x8ed8,	// (0x00016680) main_int_radio1_pane_t6

0x8eed,	// (0x00016695) main_int_radio1_pane_t7_ParamLimits

0x8eed,	// (0x00016695) main_int_radio1_pane_t7

0x8f02,	// (0x000166aa) main_int_radio1_pane_t8_ParamLimits

0x8f02,	// (0x000166aa) main_int_radio1_pane_t8

0x8f21,	// (0x000166c9) main_int_radio1_pane_t9_ParamLimits

0x8f21,	// (0x000166c9) main_int_radio1_pane_t9

0x8f33,	// (0x000166db) main_int_radio1_pane_t10_ParamLimits

0x8f33,	// (0x000166db) main_int_radio1_pane_t10

0x8f59,	// (0x00016701) main_int_radio1_pane_t11_ParamLimits

0x8f59,	// (0x00016701) main_int_radio1_pane_t11

0x8f7f,	// (0x00016727) main_int_radio1_pane_t12_ParamLimits

0x8f7f,	// (0x00016727) main_int_radio1_pane_t12

0x000b,

0xfe77,	// (0x0001d61f) main_int_radio1_pane_t_ParamLimits

0xfe77,	// (0x0001d61f) main_int_radio1_pane_t

0xedb0,	// (0x0001c558) int_radio_list_pane

0xebfc,	// (0x0001c3a4) scroll_pane_cp037

0xedb8,	// (0x0001c560) list_double_large_graphic_int_radio_pane_ParamLimits

0xedb8,	// (0x0001c560) list_double_large_graphic_int_radio_pane

0xedd0,	// (0x0001c578) list_double_large_graphic_int_radio_pane_g1

0xedd9,	// (0x0001c581) list_double_large_graphic_int_radio_pane_t1

0xede7,	// (0x0001c58f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe90,	// (0x0001d638) list_double_large_graphic_int_radio_pane_t

0x9307,	// (0x00016aaf) list_highlight_pane_cp027

0xed20,	// (0x0001c4c8) main_button_pane_4

0x8b1f,	// (0x000162c7) main_welc_pane_g4_ParamLimits

0x8b1f,	// (0x000162c7) main_welc_pane_g4

0x8b95,	// (0x0001633d) main_welc_pane_t4_ParamLimits

0x8b95,	// (0x0001633d) main_welc_pane_t4

0x8bac,	// (0x00016354) main_welc_pane_t5_ParamLimits

0x8bac,	// (0x00016354) main_welc_pane_t5

0x8be9,	// (0x00016391) main_welc_pane_t6_ParamLimits

0x8be9,	// (0x00016391) main_welc_pane_t6

0x8cc3,	// (0x0001646b) welc_button_pane_2_ParamLimits

0x8cc3,	// (0x0001646b) welc_button_pane_2

0x8cdf,	// (0x00016487) welc_button_pane_3_ParamLimits

0x8cdf,	// (0x00016487) welc_button_pane_3

0xed28,	// (0x0001c4d0) welc_button_pane_4

0x8cfe,	// (0x000164a6) welc_button_pane_5_ParamLimits

0x8cfe,	// (0x000164a6) welc_button_pane_5

0x0e43,	// (0x0000e5eb) main_popup_welc_pane

0xee04,	// (0x0001c5ac) main_welc_sk_g3

0xee0e,	// (0x0001c5b6) main_welc_sk_g4

0xee18,	// (0x0001c5c0) main_welc_sk_t3

0xee28,	// (0x0001c5d0) main_welc_sk_t4

0xee38,	// (0x0001c5e0) popup_welc_pane_t4

0xee46,	// (0x0001c5ee) popup_welc_pane_t5

0xee56,	// (0x0001c5fe) popup_welc_pane_t6

0x9307,	// (0x00016aaf) main_acti_pane

0x9307,	// (0x00016aaf) main_sso_pane

0x8f91,	// (0x00016739) sso_body_pane_ParamLimits

0x8f91,	// (0x00016739) sso_body_pane

0x8fa5,	// (0x0001674d) sso_logo_pane_ParamLimits

0x8fa5,	// (0x0001674d) sso_logo_pane

0x8fd1,	// (0x00016779) sso_sk_pane_ParamLimits

0x8fd1,	// (0x00016779) sso_sk_pane

0x9d86,	// (0x0001752e) main_sso_logo_pane_g1

0x8fe3,	// (0x0001678b) sso_sk_pane_t1_ParamLimits

0x8fe3,	// (0x0001678b) sso_sk_pane_t1

0x8ffd,	// (0x000167a5) sso_sk_pane_t2_ParamLimits

0x8ffd,	// (0x000167a5) sso_sk_pane_t2

0x0001,

0xfe95,	// (0x0001d63d) sso_sk_pane_t_ParamLimits

0xfe95,	// (0x0001d63d) sso_sk_pane_t

0xee94,	// (0x0001c63c) aid_sso_gap

0xee9d,	// (0x0001c645) aid_sso_txt1

0xeea7,	// (0x0001c64f) aid_sso_txt2

0xeeb1,	// (0x0001c659) aid_sso_txt3

0x0002,

0xfe9a,	// (0x0001d642) aid_sso_txt

0xeebb,	// (0x0001c663) aid_sso_widget

0x9067,	// (0x0001680f) sso_btn_pane_ParamLimits

0x9067,	// (0x0001680f) sso_btn_pane

0x90ef,	// (0x00016897) sso_option_pane_ParamLimits

0x90ef,	// (0x00016897) sso_option_pane

0x916f,	// (0x00016917) sso_query_pane_ParamLimits

0x916f,	// (0x00016917) sso_query_pane

0x91c5,	// (0x0001696d) sso_query_pane_cp01_ParamLimits

0x91c5,	// (0x0001696d) sso_query_pane_cp01

0x921f,	// (0x000169c7) sso_t_hdr_pane_ParamLimits

0x921f,	// (0x000169c7) sso_t_hdr_pane

0x9243,	// (0x000169eb) sso_t_nml_pane_ParamLimits

0x9243,	// (0x000169eb) sso_t_nml_pane

0xeeb1,	// (0x0001c659) sso_t_sub_pane

0x8fb2,	// (0x0001675a) sso_popup_window_ParamLimits

0x8fb2,	// (0x0001675a) sso_popup_window

0x9013,	// (0x000167bb) sso_apps_pane_ParamLimits

0x9013,	// (0x000167bb) sso_apps_pane

0x903d,	// (0x000167e5) sso_body_pane_g1

0x9047,	// (0x000167ef) sso_body_pane_t1

0x9057,	// (0x000167ff) sso_body_pane_t2

0x0001,

0xfea1,	// (0x0001d649) sso_body_pane_t

0x90b9,	// (0x00016861) sso_btn_pane_cp01_ParamLimits

0x90b9,	// (0x00016861) sso_btn_pane_cp01

0x9143,	// (0x000168eb) sso_prog_pane_ParamLimits

0x9143,	// (0x000168eb) sso_prog_pane

0xeec5,	// (0x0001c66d) sso_t_hdr_pane_t1_ParamLimits

0xeec5,	// (0x0001c66d) sso_t_hdr_pane_t1

0xeed8,	// (0x0001c680) input_focus_pane_cp10_ParamLimits

0xeed8,	// (0x0001c680) input_focus_pane_cp10

0xeeee,	// (0x0001c696) sso_query_pane_t1_ParamLimits

0xeeee,	// (0x0001c696) sso_query_pane_t1

0xef01,	// (0x0001c6a9) sso_query_pane_t2_ParamLimits

0xef01,	// (0x0001c6a9) sso_query_pane_t2

0xef1c,	// (0x0001c6c4) sso_query_pane_t3_ParamLimits

0xef1c,	// (0x0001c6c4) sso_query_pane_t3

0xef46,	// (0x0001c6ee) sso_query_pane_t4_ParamLimits

0xef46,	// (0x0001c6ee) sso_query_pane_t4

0x0003,

0xfea6,	// (0x0001d64e) sso_query_pane_t_ParamLimits

0xfea6,	// (0x0001d64e) sso_query_pane_t

0x9307,	// (0x00016aaf) bg_button_pane_cp22

0xedf5,	// (0x0001c59d) sso_btn_pane_t1

0x9299,	// (0x00016a41) sso_t_nml_pane_t1_ParamLimits

0x9299,	// (0x00016a41) sso_t_nml_pane_t1

0xef6a,	// (0x0001c712) sso_option_row_pane_ParamLimits

0xef6a,	// (0x0001c712) sso_option_row_pane

0xef77,	// (0x0001c71f) sso_t_sub_pane_t1_ParamLimits

0xef77,	// (0x0001c71f) sso_t_sub_pane_t1

0x9376,	// (0x00016b1e) bg_popup_window_pane_cp11_ParamLimits

0x9376,	// (0x00016b1e) bg_popup_window_pane_cp11

0xef8a,	// (0x0001c732) popup_sk_window_cp01_ParamLimits

0xef8a,	// (0x0001c732) popup_sk_window_cp01

0xef97,	// (0x0001c73f) sso_popup_body_pane_ParamLimits

0xef97,	// (0x0001c73f) sso_popup_body_pane

0xefa4,	// (0x0001c74c) scroll_pane_cp21_ParamLimits

0xefa4,	// (0x0001c74c) scroll_pane_cp21

0xefb1,	// (0x0001c759) sso_popup_body_t_pane_ParamLimits

0xefb1,	// (0x0001c759) sso_popup_body_t_pane

0xefbe,	// (0x0001c766) sso_popup_body_t_hdr_pane_ParamLimits

0xefbe,	// (0x0001c766) sso_popup_body_t_hdr_pane

0xefcc,	// (0x0001c774) sso_popup_body_t_nml_pane_ParamLimits

0xefcc,	// (0x0001c774) sso_popup_body_t_nml_pane

0xefe7,	// (0x0001c78f) sso_popup_body_t_sub_pane_ParamLimits

0xefe7,	// (0x0001c78f) sso_popup_body_t_sub_pane

0xf00a,	// (0x0001c7b2) sso_popup_body_t_hdr_pane_t1

0x92b4,	// (0x00016a5c) sso_popup_body_t_nml_pane_t1_ParamLimits

0x92b4,	// (0x00016a5c) sso_popup_body_t_nml_pane_t1

0xf01a,	// (0x0001c7c2) sso_popup_body_t_sub_pane_t1_ParamLimits

0xf01a,	// (0x0001c7c2) sso_popup_body_t_sub_pane_t1

0x9d86,	// (0x0001752e) sso_prog_pane_g1

0x92ed,	// (0x00016a95) sso_apps_pane_comp1_ParamLimits

0x92ed,	// (0x00016a95) sso_apps_pane_comp1

0xf03f,	// (0x0001c7e7) sso_apps_pane_comp1_g1

0xf047,	// (0x0001c7ef) sso_apps_pane_comp1_t1

0xf055,	// (0x0001c7fd) sso_option_row_pane_g1

0xf05d,	// (0x0001c805) sso_option_row_pane_t1

0x8a7d,	// (0x00016225) bg_welc_area_ParamLimits

0x8a7d,	// (0x00016225) bg_welc_area

0x8c27,	// (0x000163cf) sso_t_hdr_pane_a_t1_ParamLimits

0x8c27,	// (0x000163cf) sso_t_hdr_pane_a_t1

0x8c42,	// (0x000163ea) sso_t_nml_pane_a_t1_ParamLimits

0x8c42,	// (0x000163ea) sso_t_nml_pane_a_t1

0x8c71,	// (0x00016419) sso_t_sub_pane_a_t1_ParamLimits

0x8c71,	// (0x00016419) sso_t_sub_pane_a_t1

0xedf5,	// (0x0001c59d) sso_btn_pane_t1_copy1

0x9307,	// (0x00016aaf) welc_button_pane_2_comp1

0xee64,	// (0x0001c60c) sso_t_hdr_pane_p_t1

0xee74,	// (0x0001c61c) sso_t_nml_pane_p_t1

0xee84,	// (0x0001c62c) sso_t_sub_pane_p_t1
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal

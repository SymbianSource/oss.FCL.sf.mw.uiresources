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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005be88 };

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
0x0e8e,	// (0x0005cd16) Screen

0x0e9a,	// (0x0005cd22) application_window

0x0ef6,	// (0x0005cd7e) area_bottom_pane_ParamLimits

0x0ef6,	// (0x0005cd7e) area_bottom_pane

0x0f4f,	// (0x0005cdd7) area_top_pane_ParamLimits

0x0f4f,	// (0x0005cdd7) area_top_pane

0x0fb3,	// (0x0005ce3b) call_video_uplink_pane_ParamLimits

0x0fb3,	// (0x0005ce3b) call_video_uplink_pane

0x0ff2,	// (0x0005ce7a) main_pane_ParamLimits

0x0ff2,	// (0x0005ce7a) main_pane

0xc959,	// (0x000687e1) context_pane

0x44da,	// (0x00060362) navi_pane

0x4500,	// (0x00060388) popup_cale_events_window_ParamLimits

0x4500,	// (0x00060388) popup_cale_events_window

0xc96c,	// (0x000687f4) popup_mup_playback_window

0x4518,	// (0x000603a0) signal_pane

0xa919,	// (0x000667a1) main_browser_pane

0xaae7,	// (0x0006696f) main_burst_pane

0x4358,	// (0x000601e0) main_calc_pane

0xc93f,	// (0x000687c7) main_cale_day_pane

0x175b,	// (0x0005d5e3) main_cale_month_pane

0xc93f,	// (0x000687c7) main_cale_week_pane

0xaae7,	// (0x0006696f) main_call_pane

0xa5f9,	// (0x00066481) main_call_poc_pane

0xaae7,	// (0x0006696f) main_camera_pane

0xaae7,	// (0x0006696f) main_chi_dic_pane

0xb2ca,	// (0x00067152) main_clock_pane

0xa5f9,	// (0x00066481) main_fmradio_pane

0xaae7,	// (0x0006696f) main_graph_messa_pane

0xa5f9,	// (0x00066481) main_help_pane

0xa919,	// (0x000667a1) main_im_pane

0xa854,	// (0x000666dc) main_image_pane_ParamLimits

0xa854,	// (0x000666dc) main_image_pane

0xa5f9,	// (0x00066481) main_location2_pane

0xaae7,	// (0x0006696f) main_location_pane

0xa854,	// (0x000666dc) main_messa_pane

0xa5f9,	// (0x00066481) main_mp2_pane

0xaae7,	// (0x0006696f) main_mp_pane

0xa5f9,	// (0x00066481) main_msg_pane

0xa5f9,	// (0x00066481) main_mup_eq_pane

0xa5f9,	// (0x00066481) main_mup_pane

0xa919,	// (0x000667a1) main_notes_pane

0xa5f9,	// (0x00066481) main_pec_pane

0xa5f9,	// (0x00066481) main_phob_pane

0xa5f9,	// (0x00066481) main_pinb_pane

0xa5f9,	// (0x00066481) main_postcard_pane

0xa5f9,	// (0x00066481) main_qdial_pane

0xaae7,	// (0x0006696f) main_skin_pane

0xa5f9,	// (0x00066481) main_smil2_pane

0xaae7,	// (0x0006696f) main_smil_pane

0xaae7,	// (0x0006696f) main_video_pane

0xaae7,	// (0x0006696f) main_video_tele_pane

0xa854,	// (0x000666dc) main_viewer_pane_ParamLimits

0xa854,	// (0x000666dc) main_viewer_pane

0xaae7,	// (0x0006696f) main_vorec_pane

0x43a4,	// (0x0006022c) popup_blid_sat_info_window_ParamLimits

0x43a4,	// (0x0006022c) popup_blid_sat_info_window

0x43c4,	// (0x0006024c) popup_dyc_status_message_window_ParamLimits

0x43c4,	// (0x0006024c) popup_dyc_status_message_window

0x43d4,	// (0x0006025c) popup_grid_large_graphic_window_ParamLimits

0x43d4,	// (0x0006025c) popup_grid_large_graphic_window

0x4465,	// (0x000602ed) popup_loc_request_window_ParamLimits

0x4465,	// (0x000602ed) popup_loc_request_window

0x44b2,	// (0x0006033a) popup_wml_address_window_ParamLimits

0x44b2,	// (0x0006033a) popup_wml_address_window

0x4230,	// (0x000600b8) call_muted_g1

0x3ef2,	// (0x0005fd7a) popup_call_audio_conf_window_ParamLimits

0x3ef2,	// (0x0005fd7a) popup_call_audio_conf_window

0x4240,	// (0x000600c8) popup_call_audio_first_window_ParamLimits

0x4240,	// (0x000600c8) popup_call_audio_first_window

0x4280,	// (0x00060108) popup_call_audio_in_window_ParamLimits

0x4280,	// (0x00060108) popup_call_audio_in_window

0x42a4,	// (0x0006012c) popup_call_audio_out_window_ParamLimits

0x42a4,	// (0x0006012c) popup_call_audio_out_window

0x42c6,	// (0x0006014e) popup_call_audio_second_window_ParamLimits

0x42c6,	// (0x0006014e) popup_call_audio_second_window

0x42f6,	// (0x0006017e) popup_call_audio_wait_window_ParamLimits

0x42f6,	// (0x0006017e) popup_call_audio_wait_window

0x4317,	// (0x0006019f) popup_number_entry_window_ParamLimits

0x4317,	// (0x0006019f) popup_number_entry_window

0x9cff,	// (0x00065b87) bg_popup_call_pane_cp05_ParamLimits

0x9cff,	// (0x00065b87) bg_popup_call_pane_cp05

0x9d1f,	// (0x00065ba7) popup_number_entry_window_t1

0x9d32,	// (0x00065bba) popup_number_entry_window_t2

0x9d44,	// (0x00065bcc) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006af4e) popup_number_entry_window_t

0x9d56,	// (0x00065bde) text_title_cp2

0x9d69,	// (0x00065bf1) bg_popup_call_pane_cp_ParamLimits

0x9d69,	// (0x00065bf1) bg_popup_call_pane_cp

0x9d77,	// (0x00065bff) call_thumbnail_pane

0x9d7f,	// (0x00065c07) popup_call_audio_in_window_g1_ParamLimits

0x9d7f,	// (0x00065c07) popup_call_audio_in_window_g1

0x9d8b,	// (0x00065c13) popup_call_audio_in_window_g2_ParamLimits

0x9d8b,	// (0x00065c13) popup_call_audio_in_window_g2

0x9d97,	// (0x00065c1f) popup_call_audio_in_window_g3_ParamLimits

0x9d97,	// (0x00065c1f) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006af57) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006af57) popup_call_audio_in_window_g

0x9da3,	// (0x00065c2b) popup_call_audio_in_window_t1_ParamLimits

0x9da3,	// (0x00065c2b) popup_call_audio_in_window_t1

0x9dbf,	// (0x00065c47) popup_call_audio_in_window_t2_ParamLimits

0x9dbf,	// (0x00065c47) popup_call_audio_in_window_t2

0x9ddb,	// (0x00065c63) popup_call_audio_in_window_t3_ParamLimits

0x9ddb,	// (0x00065c63) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006af5e) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006af5e) popup_call_audio_in_window_t

0x9d69,	// (0x00065bf1) bg_popup_call_pane_cp01_ParamLimits

0x9d69,	// (0x00065bf1) bg_popup_call_pane_cp01

0x9d77,	// (0x00065bff) call_thumbnail_pane_cp02

0x9dee,	// (0x00065c76) call_type_pane_cp022

0x9df6,	// (0x00065c7e) popup_call_audio_out_window_g1_ParamLimits

0x9df6,	// (0x00065c7e) popup_call_audio_out_window_g1

0x9e08,	// (0x00065c90) popup_call_audio_out_window_g2_ParamLimits

0x9e08,	// (0x00065c90) popup_call_audio_out_window_g2

0x9e14,	// (0x00065c9c) popup_call_audio_out_window_g3_ParamLimits

0x9e14,	// (0x00065c9c) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006af65) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006af65) popup_call_audio_out_window_g

0x9e26,	// (0x00065cae) popup_call_audio_out_window_t1_ParamLimits

0x9e26,	// (0x00065cae) popup_call_audio_out_window_t1

0x9e3e,	// (0x00065cc6) popup_call_audio_out_window_t2_ParamLimits

0x9e3e,	// (0x00065cc6) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006af6c) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006af6c) popup_call_audio_out_window_t

0x9e53,	// (0x00065cdb) bg_popup_call_pane_ParamLimits

0x9e53,	// (0x00065cdb) bg_popup_call_pane

0x120b,	// (0x0005d093) call_thumbnail_pane_cp_ParamLimits

0x120b,	// (0x0005d093) call_thumbnail_pane_cp

0x9ed7,	// (0x00065d5f) call_type_pane_cp01_ParamLimits

0x9ed7,	// (0x00065d5f) call_type_pane_cp01

0x9f1b,	// (0x00065da3) popup_call_audio_first_window_g1_ParamLimits

0x9f1b,	// (0x00065da3) popup_call_audio_first_window_g1

0x9f67,	// (0x00065def) popup_call_audio_first_window_g2_ParamLimits

0x9f67,	// (0x00065def) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006af71) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006af71) popup_call_audio_first_window_g

0x9fab,	// (0x00065e33) popup_call_audio_first_window_t1_ParamLimits

0x9fab,	// (0x00065e33) popup_call_audio_first_window_t1

0xa522,	// (0x000663aa) popup_call_audio_first_window_t4_ParamLimits

0xa522,	// (0x000663aa) popup_call_audio_first_window_t4

0xa5ca,	// (0x00066452) popup_call_audio_first_window_t5_ParamLimits

0xa5ca,	// (0x00066452) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006af76) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006af76) popup_call_audio_first_window_t

0xa5f9,	// (0x00066481) bg_popup_call_pane_cp02

0xa603,	// (0x0006648b) call_type_pane_cp023

0xa60b,	// (0x00066493) popup_call_audio_wait_window_g1

0xa613,	// (0x0006649b) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006af7d) popup_call_audio_wait_window_g

0xa61b,	// (0x000664a3) popup_call_audio_wait_window_t3

0xa629,	// (0x000664b1) bg_popup_call_pane_cp03_ParamLimits

0xa629,	// (0x000664b1) bg_popup_call_pane_cp03

0xa689,	// (0x00066511) call_thumbnail_pane_cp011_ParamLimits

0xa689,	// (0x00066511) call_thumbnail_pane_cp011

0xa695,	// (0x0006651d) call_type_pane_cp034_ParamLimits

0xa695,	// (0x0006651d) call_type_pane_cp034

0xa6d1,	// (0x00066559) popup_call_audio_second_window_g1_ParamLimits

0xa6d1,	// (0x00066559) popup_call_audio_second_window_g1

0xa70d,	// (0x00066595) popup_call_audio_second_window_g2_ParamLimits

0xa70d,	// (0x00066595) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006af82) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006af82) popup_call_audio_second_window_g

0xa749,	// (0x000665d1) popup_call_audio_second_window_t1_ParamLimits

0xa749,	// (0x000665d1) popup_call_audio_second_window_t1

0xa7ca,	// (0x00066652) popup_call_audio_second_window_t2_ParamLimits

0xa7ca,	// (0x00066652) popup_call_audio_second_window_t2

0xa800,	// (0x00066688) popup_call_audio_second_window_t3_ParamLimits

0xa800,	// (0x00066688) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006af87) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006af87) popup_call_audio_second_window_t

0xa5f9,	// (0x00066481) bg_popup_call_pane_cp04

0xa836,	// (0x000666be) list_conf_pane

0xa83e,	// (0x000666c6) popup_call_audio_conf_window_t1

0xa84c,	// (0x000666d4) call_thumbnail_pane_g1

0xa854,	// (0x000666dc) bg_pinb_pane_ParamLimits

0xa854,	// (0x000666dc) bg_pinb_pane

0xa862,	// (0x000666ea) find_pinb_pane

0xa86b,	// (0x000666f3) listscroll_pinb_pane_ParamLimits

0xa86b,	// (0x000666f3) listscroll_pinb_pane

0xa87a,	// (0x00066702) pinb_bg_pane_g1

0x122f,	// (0x0005d0b7) pinb_bg_pane_g2

0x123b,	// (0x0005d0c3) pinb_bg_pane_g3

0x1247,	// (0x0005d0cf) pinb_bg_pane_g4

0x1253,	// (0x0005d0db) pinb_bg_pane_g5

0x125f,	// (0x0005d0e7) pinb_bg_pane_g6

0x126a,	// (0x0005d0f2) pinb_bg_pane_g7

0x1275,	// (0x0005d0fd) pinb_bg_pane_g8

0x1280,	// (0x0005d108) pinb_bg_pane_g9

0x128a,	// (0x0005d112) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006af8e) pinb_bg_pane_g

0x12a7,	// (0x0005d12f) grid_pinb_pane

0x12b2,	// (0x0005d13a) list_pinb_pane

0x12bd,	// (0x0005d145) scroll_pane_cp01_ParamLimits

0x12bd,	// (0x0005d145) scroll_pane_cp01

0xa884,	// (0x0006670c) find_pinb_pane_g1_ParamLimits

0xa884,	// (0x0006670c) find_pinb_pane_g1

0xa89c,	// (0x00066724) find_pinb_pane_t1

0xa8ae,	// (0x00066736) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006afa8) find_pinb_pane_t

0xa8c3,	// (0x0006674b) input_focus_pane_cp01_ParamLimits

0xa8c3,	// (0x0006674b) input_focus_pane_cp01

0x12cf,	// (0x0005d157) cell_pinb_pane_ParamLimits

0x12cf,	// (0x0005d157) cell_pinb_pane

0x12f7,	// (0x0005d17f) cell_pinb_pane_g1_ParamLimits

0x12f7,	// (0x0005d17f) cell_pinb_pane_g1

0x130c,	// (0x0005d194) cell_pinb_pane_g2_ParamLimits

0x130c,	// (0x0005d194) cell_pinb_pane_g2

0xa8cf,	// (0x00066757) cell_pinb_pane_g3_ParamLimits

0xa8cf,	// (0x00066757) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006afad) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006afad) cell_pinb_pane_g

0xa5f9,	// (0x00066481) grid_highlight_pane_cp01

0x1318,	// (0x0005d1a0) list_pinb_item_pane_ParamLimits

0x1318,	// (0x0005d1a0) list_pinb_item_pane

0xa5f9,	// (0x00066481) list_highlight_pane_cp02

0x133e,	// (0x0005d1c6) list_pinb_item_pane_g1_ParamLimits

0x133e,	// (0x0005d1c6) list_pinb_item_pane_g1

0x134b,	// (0x0005d1d3) list_pinb_item_pane_g2_ParamLimits

0x134b,	// (0x0005d1d3) list_pinb_item_pane_g2

0x1357,	// (0x0005d1df) list_pinb_item_pane_g3_ParamLimits

0x1357,	// (0x0005d1df) list_pinb_item_pane_g3

0x1368,	// (0x0005d1f0) list_pinb_item_pane_g4_ParamLimits

0x1368,	// (0x0005d1f0) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006afb4) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006afb4) list_pinb_item_pane_g

0x1374,	// (0x0005d1fc) list_pinb_item_pane_t1_ParamLimits

0x1374,	// (0x0005d1fc) list_pinb_item_pane_t1

0x13a5,	// (0x0005d22d) calc_display_pane

0x13c3,	// (0x0005d24b) calc_paper_pane

0x13df,	// (0x0005d267) grid_calc_pane

0xa5f9,	// (0x00066481) bg_list_pane_cp01

0x140b,	// (0x0005d293) clock_g1

0x1413,	// (0x0005d29b) clock_g2

0x0001,

0xf135,	// (0x0006afbd) clock_g

0x141d,	// (0x0005d2a5) clock_t1_ParamLimits

0x141d,	// (0x0005d2a5) clock_t1

0x1432,	// (0x0005d2ba) clock_t2_ParamLimits

0x1432,	// (0x0005d2ba) clock_t2

0x1444,	// (0x0005d2cc) clock_t3_ParamLimits

0x1444,	// (0x0005d2cc) clock_t3

0x1456,	// (0x0005d2de) clock_t4_ParamLimits

0x1456,	// (0x0005d2de) clock_t4

0x1468,	// (0x0005d2f0) clock_t5_ParamLimits

0x1468,	// (0x0005d2f0) clock_t5

0x147d,	// (0x0005d305) clock_t6_ParamLimits

0x147d,	// (0x0005d305) clock_t6

0x148f,	// (0x0005d317) clock_t7_ParamLimits

0x148f,	// (0x0005d317) clock_t7

0x14a1,	// (0x0005d329) clock_t8_ParamLimits

0x14a1,	// (0x0005d329) clock_t8

0x14b7,	// (0x0005d33f) clock_t9_ParamLimits

0x14b7,	// (0x0005d33f) clock_t9

0x0008,

0xf13a,	// (0x0006afc2) clock_t_ParamLimits

0xf13a,	// (0x0006afc2) clock_t

0xa8db,	// (0x00066763) popup_clock_analogue_window_cp02

0xa8db,	// (0x00066763) popup_clock_digital_window_cp01

0xa8e3,	// (0x0006676b) listscroll_help_pane

0xa5f9,	// (0x00066481) phob_pre_status_pane

0xa8ed,	// (0x00066775) grid_qdial_pane

0xa854,	// (0x000666dc) listscroll_mce_pane

0xa854,	// (0x000666dc) bg_notes_pane

0xa8f7,	// (0x0006677f) list_notes_pane

0x14cd,	// (0x0005d355) scroll_pane_cp06

0xa905,	// (0x0006678d) bg_calc_paper_pane

0x14dc,	// (0x0005d364) list_calc_pane

0xa919,	// (0x000667a1) bg_calc_display_pane

0x14f6,	// (0x0005d37e) calc_display_pane_t1

0x150b,	// (0x0005d393) calc_display_pane_t2

0x1520,	// (0x0005d3a8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006afd5) calc_display_pane_t

0x1532,	// (0x0005d3ba) cell_calc_pane_ParamLimits

0x1532,	// (0x0005d3ba) cell_calc_pane

0xa925,	// (0x000667ad) bg_calc_paper_pane_g1

0xa931,	// (0x000667b9) bg_calc_paper_pane_g2

0xa93d,	// (0x000667c5) bg_calc_paper_pane_g3

0xa949,	// (0x000667d1) bg_calc_paper_pane_g4

0xa955,	// (0x000667dd) bg_calc_paper_pane_g5

0x155f,	// (0x0005d3e7) bg_calc_paper_pane_g6

0x1570,	// (0x0005d3f8) bg_calc_paper_pane_g7

0x1581,	// (0x0005d409) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006afdc) bg_calc_paper_pane_g

0x1592,	// (0x0005d41a) calc_bg_paper_pane_g9

0x15a3,	// (0x0005d42b) list_calc_item_pane_ParamLimits

0x15a3,	// (0x0005d42b) list_calc_item_pane

0xa961,	// (0x000667e9) list_calc_item_pane_g1

0x15cf,	// (0x0005d457) list_calc_item_pane_t1_ParamLimits

0x15cf,	// (0x0005d457) list_calc_item_pane_t1

0x15e1,	// (0x0005d469) list_calc_item_pane_t2_ParamLimits

0x15e1,	// (0x0005d469) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006afed) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006afed) list_calc_item_pane_t

0xa96e,	// (0x000667f6) cell_calc_pane_g1

0xa978,	// (0x00066800) grid_highlight_pane_cp02

0x1611,	// (0x0005d499) bg_calc_display_pane_g1

0x161a,	// (0x0005d4a2) bg_calc_display_pane_g2

0x1624,	// (0x0005d4ac) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006aff7) bg_calc_display_pane_g

0x162d,	// (0x0005d4b5) cell_qdial_pane_ParamLimits

0x162d,	// (0x0005d4b5) cell_qdial_pane

0x1641,	// (0x0005d4c9) cell_qdial_pane_g1_ParamLimits

0x1641,	// (0x0005d4c9) cell_qdial_pane_g1

0x164e,	// (0x0005d4d6) cell_qdial_pane_g2_ParamLimits

0x164e,	// (0x0005d4d6) cell_qdial_pane_g2

0xa99a,	// (0x00066822) cell_qdial_pane_g3_ParamLimits

0xa99a,	// (0x00066822) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006affe) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006affe) cell_qdial_pane_g

0x166c,	// (0x0005d4f4) cell_qdial_pane_t1_ParamLimits

0x166c,	// (0x0005d4f4) cell_qdial_pane_t1

0x1684,	// (0x0005d50c) cell_qdial_pane_t2_ParamLimits

0x1684,	// (0x0005d50c) cell_qdial_pane_t2

0x1697,	// (0x0005d51f) cell_qdial_pane_t3_ParamLimits

0x1697,	// (0x0005d51f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006b007) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006b007) cell_qdial_pane_t

0xa5f9,	// (0x00066481) grid_highlight_pane_cp04

0xa9a6,	// (0x0006682e) thumbnail_qdial_pane_ParamLimits

0xa9a6,	// (0x0006682e) thumbnail_qdial_pane

0xaa0b,	// (0x00066893) list_help_pane

0xaa14,	// (0x0006689c) scroll_pane_cp02

0x16aa,	// (0x0005d532) help_list_pane_t1_ParamLimits

0x16aa,	// (0x0005d532) help_list_pane_t1

0x16dd,	// (0x0005d565) bg_notes_pane_g2

0x16e5,	// (0x0005d56d) bg_notes_pane_g3

0x16ed,	// (0x0005d575) notes_bg_pane_g1

0x16f5,	// (0x0005d57d) notes_bg_pane_g4

0x16fd,	// (0x0005d585) notes_bg_pane_g5

0x1705,	// (0x0005d58d) notes_bg_pane_g6

0x170d,	// (0x0005d595) notes_bg_pane_g7

0x1715,	// (0x0005d59d) notes_bg_pane_g8

0x171d,	// (0x0005d5a5) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006b025) notes_bg_pane_g

0x1725,	// (0x0005d5ad) list_notes_text_pane_ParamLimits

0x1725,	// (0x0005d5ad) list_notes_text_pane

0xaa1d,	// (0x000668a5) list_notes_text_pane_g1

0x174d,	// (0x0005d5d5) list_notes_text_pane_t1

0x175b,	// (0x0005d5e3) listscroll_cale_week_pane

0x1780,	// (0x0005d608) bg_cale_heading_pane

0xaa40,	// (0x000668c8) bg_cale_pane_cp01

0x17a0,	// (0x0005d628) cale_week_corner_pane

0x17ba,	// (0x0005d642) cale_week_day_heading_pane

0x17da,	// (0x0005d662) cale_week_scroll_pane_g1

0x17f5,	// (0x0005d67d) cale_week_scroll_pane_g2

0x1808,	// (0x0005d690) cale_week_scroll_pane_g3

0x181b,	// (0x0005d6a3) cale_week_scroll_pane_g4

0x182e,	// (0x0005d6b6) cale_week_scroll_pane_g5

0x1841,	// (0x0005d6c9) cale_week_scroll_pane_g6

0x1854,	// (0x0005d6dc) cale_week_scroll_pane_g7

0x1869,	// (0x0005d6f1) cale_week_scroll_pane_g8

0x187e,	// (0x0005d706) cale_week_scroll_pane_g9

0x1891,	// (0x0005d719) cale_week_scroll_pane_g10

0x18a4,	// (0x0005d72c) cale_week_scroll_pane_g11

0x18b7,	// (0x0005d73f) cale_week_scroll_pane_g12

0x18ce,	// (0x0005d756) cale_week_scroll_pane_g13

0x18e9,	// (0x0005d771) cale_week_scroll_pane_g14

0x1904,	// (0x0005d78c) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006b034) cale_week_scroll_pane_g

0x1934,	// (0x0005d7bc) cale_week_time_pane

0x1949,	// (0x0005d7d1) grid_cale_week_pane

0xaa6f,	// (0x000668f7) scroll_pane_cp08

0x1968,	// (0x0005d7f0) cell_cale_week_pane_ParamLimits

0x1968,	// (0x0005d7f0) cell_cale_week_pane

0x19ca,	// (0x0005d852) cale_week_day_heading_pane_t1

0x19e5,	// (0x0005d86d) cale_week_day_heading_pane_t2

0x1a00,	// (0x0005d888) cale_week_day_heading_pane_t3

0x1a1b,	// (0x0005d8a3) cale_week_day_heading_pane_t4

0x1a36,	// (0x0005d8be) cale_week_day_heading_pane_t5

0x1a51,	// (0x0005d8d9) cale_week_day_heading_pane_t6

0x1a6c,	// (0x0005d8f4) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006b055) cale_week_day_heading_pane_t

0xaa8c,	// (0x00066914) bg_cale_side_pane

0x1a87,	// (0x0005d90f) cale_week_time_pane_t1

0x1aa1,	// (0x0005d929) cale_week_time_pane_t2

0x1abb,	// (0x0005d943) cale_week_time_pane_t3

0x1ad5,	// (0x0005d95d) cale_week_time_pane_t4

0x1aef,	// (0x0005d977) cale_week_time_pane_t5

0x1b09,	// (0x0005d991) cale_week_time_pane_t6

0x1b27,	// (0x0005d9af) cale_week_time_pane_t7

0x1b49,	// (0x0005d9d1) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006b064) cale_week_time_pane_t

0x1b6d,	// (0x0005d9f5) cell_cale_week_pane_g2

0x1b91,	// (0x0005da19) cell_cale_week_pane_g3_ParamLimits

0x1b91,	// (0x0005da19) cell_cale_week_pane_g3

0xaa9a,	// (0x00066922) grid_highlight_pane_cp07

0xaaa2,	// (0x0006692a) listscroll_gms_pane

0xaaac,	// (0x00066934) grid_gms_pane

0xaab5,	// (0x0006693d) listscroll_gms_pane_g1

0xaabd,	// (0x00066945) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006b075) listscroll_gms_pane_g

0x1ba9,	// (0x0005da31) scroll_pane_cp010

0x1bb4,	// (0x0005da3c) cell_gms_pane_ParamLimits

0x1bb4,	// (0x0005da3c) cell_gms_pane

0x1bc7,	// (0x0005da4f) cell_gms_pane_g1

0xaac5,	// (0x0006694d) cell_gms_pane_g2

0xaacd,	// (0x00066955) cell_gms_pane_g3

0xaad6,	// (0x0006695e) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006b07a) cell_gms_pane_g

0xaadf,	// (0x00066967) grid_highlight_pane_cp09

0x41d8,	// (0x00060060) phob_pre_status_pane_g1

0x41e0,	// (0x00060068) phob_pre_status_pane_g2

0x41e8,	// (0x00060070) phob_pre_status_pane_g3

0x41f0,	// (0x00060078) phob_pre_status_pane_g4

0x0004,

0xf501,	// (0x0006b389) phob_pre_status_pane_g

0x4200,	// (0x00060088) phob_pre_status_pane_t1

0x4210,	// (0x00060098) phob_pre_status_pane_t2

0x4220,	// (0x000600a8) phob_pre_status_pane_t3

0x0002,

0xf50c,	// (0x0006b394) phob_pre_status_pane_t

0xaae7,	// (0x0006696f) bg_list_pane_cp05

0x1bd7,	// (0x0005da5f) grid_vorec_pane

0x1be1,	// (0x0005da69) vorec_t1

0x1bef,	// (0x0005da77) vorec_t2

0x1bfd,	// (0x0005da85) vorec_t3

0x1c0b,	// (0x0005da93) vorec_t4

0x9c9d,	// (0x00065b25) vorec_t5

0x9cab,	// (0x00065b33) vorec_t6

0x0004,

0xf1fb,	// (0x0006b083) vorec_t

0x9cb9,	// (0x00065b41) wait_bar_pane_cp01

0x1c27,	// (0x0005daaf) cell_vorec_pane_ParamLimits

0x1c27,	// (0x0005daaf) cell_vorec_pane

0x1c3a,	// (0x0005dac2) cell_vorec_pane_g1

0xa5f9,	// (0x00066481) grid_highlight_pane_cp05

0x1c54,	// (0x0005dadc) cams_zoom_pane

0x1c60,	// (0x0005dae8) image_vga_pane

0x1c6f,	// (0x0005daf7) main_camera_pane_g1

0x1c7d,	// (0x0005db05) main_camera_pane_g2

0x1c89,	// (0x0005db11) main_camera_pane_g3

0x1c95,	// (0x0005db1d) main_camera_pane_g4

0x1ca1,	// (0x0005db29) main_camera_pane_g5

0x1cad,	// (0x0005db35) main_camera_pane_g6

0x1cb9,	// (0x0005db41) main_camera_pane_g7

0x0007,

0xf206,	// (0x0006b08e) main_camera_pane_g

0x1cc5,	// (0x0005db4d) main_camera_pane_t1

0x1cd7,	// (0x0005db5f) main_camera_pane_t2

0x0001,

0xf217,	// (0x0006b09f) main_camera_pane_t

0x1cf8,	// (0x0005db80) cams_zoom_pane_cp_ParamLimits

0x1cf8,	// (0x0005db80) cams_zoom_pane_cp

0x1d1c,	// (0x0005dba4) image_cif_pane_ParamLimits

0x1d1c,	// (0x0005dba4) image_cif_pane

0x1d3a,	// (0x0005dbc2) image_subqcif_pane

0x1d42,	// (0x0005dbca) main_video_pane_g1_ParamLimits

0x1d42,	// (0x0005dbca) main_video_pane_g1

0x1d62,	// (0x0005dbea) main_video_pane_g2_ParamLimits

0x1d62,	// (0x0005dbea) main_video_pane_g2

0x1d92,	// (0x0005dc1a) main_video_pane_g3_ParamLimits

0x1d92,	// (0x0005dc1a) main_video_pane_g3

0x1dbb,	// (0x0005dc43) main_video_pane_g4_ParamLimits

0x1dbb,	// (0x0005dc43) main_video_pane_g4

0x1de4,	// (0x0005dc6c) main_video_pane_g5_ParamLimits

0x1de4,	// (0x0005dc6c) main_video_pane_g5

0xaafb,	// (0x00066983) main_video_pane_g6_ParamLimits

0xaafb,	// (0x00066983) main_video_pane_g6

0x0006,

0xf21c,	// (0x0006b0a4) main_video_pane_g_ParamLimits

0xf21c,	// (0x0006b0a4) main_video_pane_g

0x1e06,	// (0x0005dc8e) main_video_pane_t1_ParamLimits

0x1e06,	// (0x0005dc8e) main_video_pane_t1

0xab15,	// (0x0006699d) cams_zoom_pane_g1

0xab1e,	// (0x000669a6) cams_zoom_pane_g2

0xab27,	// (0x000669af) cams_zoom_pane_g3

0xab30,	// (0x000669b8) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0006b0b3) cams_zoom_pane_g

0x1e50,	// (0x0005dcd8) grid_cams_pane

0x1e5e,	// (0x0005dce6) linegrid_cams_pane

0x1e6c,	// (0x0005dcf4) cell_cams_pane_ParamLimits

0x1e6c,	// (0x0005dcf4) cell_cams_pane

0xab39,	// (0x000669c1) cams_burst_image_pane

0xab41,	// (0x000669c9) cell_cams_pane_g1

0xa5f9,	// (0x00066481) grid_highlight_pane_cp03

0xa96e,	// (0x000667f6) mp_bg_pane_g1

0xa5f9,	// (0x00066481) bg_list_pane_cp03

0xc864,	// (0x000686ec) bg_mp_pane

0xc86c,	// (0x000686f4) grid_mp_pane

0xc874,	// (0x000686fc) media_player_g1

0xc87c,	// (0x00068704) media_player_t1

0xc88a,	// (0x00068712) media_player_t2

0xc898,	// (0x00068720) media_player_t3

0xc8a6,	// (0x0006872e) media_player_t4

0xc8b4,	// (0x0006873c) media_player_t5

0xc8c2,	// (0x0006874a) media_player_t6

0xc8d0,	// (0x00068758) media_player_t7

0x0006,

0x047c,	// (0x0005c304) media_player_t

0xc8de,	// (0x00068766) wait_bar_pane_cp02

0xf4ed,	// (0x0006b375) main_usb_pane_t

0x41cf,	// (0x00060057) cell_mp_pane

0xa96e,	// (0x000667f6) cell_mp_pane_g1

0xa5f9,	// (0x00066481) grid_highlight_pane_cp06

0xab49,	// (0x000669d1) grid_skin_colour_pane

0xab51,	// (0x000669d9) list_highlight_pane_cp03

0x1f93,	// (0x0005de1b) skin_g1

0xab59,	// (0x000669e1) skin_t1

0xab68,	// (0x000669f0) skin_t2

0x0001,

0xf260,	// (0x0006b0e8) skin_t

0x1f9d,	// (0x0005de25) cell_skin_colour_pane_ParamLimits

0x1f9d,	// (0x0005de25) cell_skin_colour_pane

0xab76,	// (0x000669fe) cell_skin_colour_pane_g1

0x2021,	// (0x0005dea9) call_video_g1_ParamLimits

0x2021,	// (0x0005dea9) call_video_g1

0x2031,	// (0x0005deb9) call_video_g2_ParamLimits

0x2031,	// (0x0005deb9) call_video_g2

0x0001,

0xf265,	// (0x0006b0ed) call_video_g_ParamLimits

0xf265,	// (0x0006b0ed) call_video_g

0x208b,	// (0x0005df13) call_video_uplink_pane_cp1_ParamLimits

0x208b,	// (0x0005df13) call_video_uplink_pane_cp1

0xab88,	// (0x00066a10) call_video_uplink_pane_cp2

0x2157,	// (0x0005dfdf) video_down_crop_pane_ParamLimits

0x2157,	// (0x0005dfdf) video_down_crop_pane

0x2255,	// (0x0005e0dd) video_down_pane_ParamLimits

0x2255,	// (0x0005e0dd) video_down_pane

0xab90,	// (0x00066a18) video_down_subqcif_pane_ParamLimits

0xab90,	// (0x00066a18) video_down_subqcif_pane

0xaba8,	// (0x00066a30) video_down_subqcif_pane_cp_ParamLimits

0xaba8,	// (0x00066a30) video_down_subqcif_pane_cp

0xabce,	// (0x00066a56) im_reading_pane_ParamLimits

0xabce,	// (0x00066a56) im_reading_pane

0x2375,	// (0x0005e1fd) im_writing_pane_ParamLimits

0x2375,	// (0x0005e1fd) im_writing_pane

0x2393,	// (0x0005e21b) im_reading_pane_t1

0xabe8,	// (0x00066a70) list_im_pane

0xabf9,	// (0x00066a81) scroll_pane_cp07

0x23e7,	// (0x0005e26f) im_writing_pane_t1_ParamLimits

0x23e7,	// (0x0005e26f) im_writing_pane_t1

0xac12,	// (0x00066a9a) im_writing_pane_t2_ParamLimits

0xac12,	// (0x00066a9a) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0006b0f7) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0006b0f7) im_writing_pane_t

0xa5f9,	// (0x00066481) input_focus_pane_cp04

0xa5f9,	// (0x00066481) input_focus_pane_cp05

0x23fc,	// (0x0005e284) list_im_single_pane_ParamLimits

0x23fc,	// (0x0005e284) list_im_single_pane

0x2420,	// (0x0005e2a8) list_single_im_pane_t1

0x4193,	// (0x0006001b) blid_accuracy_pane

0x419b,	// (0x00060023) blid_compass_pane

0x41a5,	// (0x0006002d) main_location_t1

0x41b3,	// (0x0006003b) main_location_t2

0x41c1,	// (0x00060049) main_location_t3

0x0002,

0xf4fa,	// (0x0006b382) main_location_t

0xa5f9,	// (0x00066481) aid_levels_location

0xa96e,	// (0x000667f6) blid_accuracy_pane_g1

0xa96e,	// (0x000667f6) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0006b159) blid_accuracy_pane_g

0xac5a,	// (0x00066ae2) wml_content_pane

0xac98,	// (0x00066b20) wml_button_pane_ParamLimits

0xac98,	// (0x00066b20) wml_button_pane

0x242f,	// (0x0005e2b7) wml_list_single_large_pane_ParamLimits

0x242f,	// (0x0005e2b7) wml_list_single_large_pane

0x2459,	// (0x0005e2e1) wml_list_single_medium_pane_ParamLimits

0x2459,	// (0x0005e2e1) wml_list_single_medium_pane

0x248a,	// (0x0005e312) wml_list_single_small_pane_ParamLimits

0x248a,	// (0x0005e312) wml_list_single_small_pane

0xacac,	// (0x00066b34) wml_selection_box_pane_ParamLimits

0xacac,	// (0x00066b34) wml_selection_box_pane

0xacbf,	// (0x00066b47) wml_list_single_pane_t1

0xacce,	// (0x00066b56) wml_list_single_medium_pane_t1

0xacdd,	// (0x00066b65) wml_list_single_large_pane_t1

0xacec,	// (0x00066b74) input_focus_pane_cp02_ParamLimits

0xacec,	// (0x00066b74) input_focus_pane_cp02

0xacff,	// (0x00066b87) wml_selection_box_pane_g1

0xad08,	// (0x00066b90) wml_selection_box_pane_t1_ParamLimits

0xad08,	// (0x00066b90) wml_selection_box_pane_t1

0xa854,	// (0x000666dc) bg_wml_button_pane_ParamLimits

0xa854,	// (0x000666dc) bg_wml_button_pane

0xad20,	// (0x00066ba8) wml_button_pane_g1

0xad28,	// (0x00066bb0) wml_button_pane_t1

0xad20,	// (0x00066ba8) wml_button_bg_pane_g1

0xad38,	// (0x00066bc0) wml_button_bg_pane_g2

0xad40,	// (0x00066bc8) wml_button_bg_pane_g3

0xad48,	// (0x00066bd0) wml_button_bg_pane_g4

0xad50,	// (0x00066bd8) wml_button_bg_pane_g5

0xad58,	// (0x00066be0) wml_button_bg_pane_g6

0xad60,	// (0x00066be8) wml_button_bg_pane_g7

0xad68,	// (0x00066bf0) wml_button_bg_pane_g8

0xad70,	// (0x00066bf8) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0006b0fc) wml_button_bg_pane_g

0x24c4,	// (0x0005e34c) bg_list_pane_cp02

0xad78,	// (0x00066c00) mce_header_pane_ParamLimits

0xad78,	// (0x00066c00) mce_header_pane

0xad8e,	// (0x00066c16) mce_icon_pane

0xad8e,	// (0x00066c16) mce_image_pane

0xad97,	// (0x00066c1f) mce_text_pane_ParamLimits

0xad97,	// (0x00066c1f) mce_text_pane

0x24ce,	// (0x0005e356) scroll_pane_cp03

0xac90,	// (0x00066b18) scroll_pane_cp04

0xadaa,	// (0x00066c32) scroll_pane_cp05_ParamLimits

0xadaa,	// (0x00066c32) scroll_pane_cp05

0x24d8,	// (0x0005e360) mce_header_field_pane_ParamLimits

0x24d8,	// (0x0005e360) mce_header_field_pane

0x24f8,	// (0x0005e380) mce_header_field_pane_2_ParamLimits

0x24f8,	// (0x0005e380) mce_header_field_pane_2

0x250e,	// (0x0005e396) mce_header_field_pane_3

0x2516,	// (0x0005e39e) list_single_mce_message_pane_ParamLimits

0x2516,	// (0x0005e39e) list_single_mce_message_pane

0x2541,	// (0x0005e3c9) list_single_mce_smart_pane_ParamLimits

0x2541,	// (0x0005e3c9) list_single_mce_smart_pane

0xadb6,	// (0x00066c3e) input_focus_pane_cp03

0xadbf,	// (0x00066c47) list_header_data_pane

0x2577,	// (0x0005e3ff) mce_header_field_pane_t1

0x2585,	// (0x0005e40d) list_single_mce_header_pane_ParamLimits

0x2585,	// (0x0005e40d) list_single_mce_header_pane

0xadc7,	// (0x00066c4f) list_single_mce_header_pane_t1

0xadd6,	// (0x00066c5e) list_single_mce_message_pane_g1

0xadde,	// (0x00066c66) list_single_mce_message_pane_t1

0x25d7,	// (0x0005e45f) bg_cale_heading_pane_cp01_ParamLimits

0x25d7,	// (0x0005e45f) bg_cale_heading_pane_cp01

0xadec,	// (0x00066c74) bg_cale_pane_cp02_ParamLimits

0xadec,	// (0x00066c74) bg_cale_pane_cp02

0x2625,	// (0x0005e4ad) cale_month_corner_pane

0x2644,	// (0x0005e4cc) cale_month_day_heading_pane_ParamLimits

0x2644,	// (0x0005e4cc) cale_month_day_heading_pane

0x26aa,	// (0x0005e532) cale_month_pane_g1_ParamLimits

0x26aa,	// (0x0005e532) cale_month_pane_g1

0x26ed,	// (0x0005e575) cale_month_pane_g2_ParamLimits

0x26ed,	// (0x0005e575) cale_month_pane_g2

0x2725,	// (0x0005e5ad) cale_month_pane_g3_ParamLimits

0x2725,	// (0x0005e5ad) cale_month_pane_g3

0x2771,	// (0x0005e5f9) cale_month_pane_g4_ParamLimits

0x2771,	// (0x0005e5f9) cale_month_pane_g4

0x27bd,	// (0x0005e645) cale_month_pane_g5_ParamLimits

0x27bd,	// (0x0005e645) cale_month_pane_g5

0x2809,	// (0x0005e691) cale_month_pane_g6_ParamLimits

0x2809,	// (0x0005e691) cale_month_pane_g6

0x2855,	// (0x0005e6dd) cale_month_pane_g7_ParamLimits

0x2855,	// (0x0005e6dd) cale_month_pane_g7

0x28b9,	// (0x0005e741) cale_month_pane_g8_ParamLimits

0x28b9,	// (0x0005e741) cale_month_pane_g8

0x291d,	// (0x0005e7a5) cale_month_pane_g9_ParamLimits

0x291d,	// (0x0005e7a5) cale_month_pane_g9

0x297b,	// (0x0005e803) cale_month_pane_g10_ParamLimits

0x297b,	// (0x0005e803) cale_month_pane_g10

0x29d7,	// (0x0005e85f) cale_month_pane_g11_ParamLimits

0x29d7,	// (0x0005e85f) cale_month_pane_g11

0x2a2b,	// (0x0005e8b3) cale_month_pane_g12_ParamLimits

0x2a2b,	// (0x0005e8b3) cale_month_pane_g12

0x2a81,	// (0x0005e909) cale_month_pane_g13_ParamLimits

0x2a81,	// (0x0005e909) cale_month_pane_g13

0x000c,

0xf287,	// (0x0006b10f) cale_month_pane_g_ParamLimits

0xf287,	// (0x0006b10f) cale_month_pane_g

0x2ad7,	// (0x0005e95f) cale_month_week_pane

0x2afb,	// (0x0005e983) grid_cale_month_pane_ParamLimits

0x2afb,	// (0x0005e983) grid_cale_month_pane

0x2b54,	// (0x0005e9dc) cale_month_day_heading_pane_t1

0x2bda,	// (0x0005ea62) cale_month_day_heading_pane_t2

0x2c53,	// (0x0005eadb) cale_month_day_heading_pane_t3

0x2ccc,	// (0x0005eb54) cale_month_day_heading_pane_t4

0x2d45,	// (0x0005ebcd) cale_month_day_heading_pane_t5

0x2dbe,	// (0x0005ec46) cale_month_day_heading_pane_t6

0x2e37,	// (0x0005ecbf) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0006b12a) cale_month_day_heading_pane_t

0xaa8c,	// (0x00066914) bg_cale_side_pane_cp01

0x2ec8,	// (0x0005ed50) cale_month_week_pane_t1

0x2ee1,	// (0x0005ed69) cale_month_week_pane_t2

0x2efa,	// (0x0005ed82) cale_month_week_pane_t3

0x2f13,	// (0x0005ed9b) cale_month_week_pane_t4

0x2f2c,	// (0x0005edb4) cale_month_week_pane_t5

0x2f4d,	// (0x0005edd5) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0006b139) cale_month_week_pane_t

0x2f6e,	// (0x0005edf6) cell_cale_month_pane_ParamLimits

0x2f6e,	// (0x0005edf6) cell_cale_month_pane

0x30ba,	// (0x0005ef42) cell_cale_month_pane_g1

0x30c6,	// (0x0005ef4e) cell_cale_month_pane_t1_ParamLimits

0x30c6,	// (0x0005ef4e) cell_cale_month_pane_t1

0xaa9a,	// (0x00066922) grid_highlight_pane_cp08

0xa96e,	// (0x000667f6) main_smil_g1

0x30f2,	// (0x0005ef7a) smil_status_pane

0xae2b,	// (0x00066cb3) smil_text_pane

0xc784,	// (0x0006860c) bg_popup_call3_rect_pane_g8

0xc78c,	// (0x00068614) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d5,	// (0x0006b35d) bg_popup_call3_rect_pane_g

0xc9d3,	// (0x0006885b) smil_status_volume_pane_g1

0xae35,	// (0x00066cbd) smil_status_pane_t1

0x45cb,	// (0x00060453) volume_smil_pane

0xae4c,	// (0x00066cd4) list_smil_text_pane

0x3105,	// (0x0005ef8d) scroll_pane_cp011

0x3110,	// (0x0005ef98) smil_text_list_pane_t1_ParamLimits

0x3110,	// (0x0005ef98) smil_text_list_pane_t1

0x3188,	// (0x0005f010) aid_volume_smil_ParamLimits

0x3188,	// (0x0005f010) aid_volume_smil

0xa96e,	// (0x000667f6) smil_volume_pane_g1

0xa96e,	// (0x000667f6) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0006b159) smil_volume_pane_g

0x175b,	// (0x0005d5e3) listscroll_cale_day_pane

0xae56,	// (0x00066cde) bg_cale_pane

0xae6e,	// (0x00066cf6) list_cale_pane

0xae91,	// (0x00066d19) scroll_pane_cp09

0xaea2,	// (0x00066d2a) cale_bg_pane_g1

0xaeaa,	// (0x00066d32) cale_bg_pane_g2

0xaeb2,	// (0x00066d3a) cale_bg_pane_g3

0xaeba,	// (0x00066d42) cale_bg_pane_g4

0xaec2,	// (0x00066d4a) cale_bg_pane_g5

0xaeca,	// (0x00066d52) cale_bg_pane_g6

0xaed2,	// (0x00066d5a) cale_bg_pane_g7

0xaeda,	// (0x00066d62) cale_bg_pane_g8

0xaee2,	// (0x00066d6a) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0006b15e) cale_bg_pane_g

0x31b2,	// (0x0005f03a) list_cale_time_pane_ParamLimits

0x31b2,	// (0x0005f03a) list_cale_time_pane

0xaeea,	// (0x00066d72) list_cale_time_pane_g1_ParamLimits

0xaeea,	// (0x00066d72) list_cale_time_pane_g1

0xaef6,	// (0x00066d7e) list_cale_time_pane_g2_ParamLimits

0xaef6,	// (0x00066d7e) list_cale_time_pane_g2

0x31d4,	// (0x0005f05c) list_cale_time_pane_g3_ParamLimits

0x31d4,	// (0x0005f05c) list_cale_time_pane_g3

0x31e2,	// (0x0005f06a) list_cale_time_pane_g4_ParamLimits

0x31e2,	// (0x0005f06a) list_cale_time_pane_g4

0x31f0,	// (0x0005f078) list_cale_time_pane_g5_ParamLimits

0x31f0,	// (0x0005f078) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0006b171) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0006b171) list_cale_time_pane_g

0xaf10,	// (0x00066d98) list_cale_time_pane_t1_ParamLimits

0xaf10,	// (0x00066d98) list_cale_time_pane_t1

0xaf38,	// (0x00066dc0) list_cale_time_pane_t2_ParamLimits

0xaf38,	// (0x00066dc0) list_cale_time_pane_t2

0x3586,	// (0x0005f40e) aid_blid_cardinal_pane

0x35c8,	// (0x0005f450) compass_pane_t4

0xaf60,	// (0x00066de8) list_cale_time_pane_t4_ParamLimits

0xaf60,	// (0x00066de8) list_cale_time_pane_t4

0x35d6,	// (0x0005f45e) compass_pane_t5

0x35e6,	// (0x0005f46e) compass_pane_t6

0x35f4,	// (0x0005f47c) compass_pane_t7

0xb40f,	// (0x00067297) navi_pane_cc_t1

0xb5fa,	// (0x00067482) aid_phob_thumbnail_center_pane

0x3c99,	// (0x0005fb21) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0006b17e) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0006b17e) list_cale_time_pane_t

0x9d69,	// (0x00065bf1) bg_popup_window_pane_cp02_ParamLimits

0x9d69,	// (0x00065bf1) bg_popup_window_pane_cp02

0xaf88,	// (0x00066e10) heading_pane_cp01_ParamLimits

0xaf88,	// (0x00066e10) heading_pane_cp01

0xaf94,	// (0x00066e1c) loc_req_pane_ParamLimits

0xaf94,	// (0x00066e1c) loc_req_pane

0xafa4,	// (0x00066e2c) loc_type_pane_ParamLimits

0xafa4,	// (0x00066e2c) loc_type_pane

0xafb6,	// (0x00066e3e) loc_type_pane_t1_ParamLimits

0xafb6,	// (0x00066e3e) loc_type_pane_t1

0xafc8,	// (0x00066e50) loc_type_pane_t2_ParamLimits

0xafc8,	// (0x00066e50) loc_type_pane_t2

0xafda,	// (0x00066e62) loc_type_pane_t3_ParamLimits

0xafda,	// (0x00066e62) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0006b185) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0006b185) loc_type_pane_t

0xafec,	// (0x00066e74) list_loc_req_pane

0xaff6,	// (0x00066e7e) scroll_pane_cp012

0x31fe,	// (0x0005f086) list_single_loc_request_popup_menu_pane_ParamLimits

0x31fe,	// (0x0005f086) list_single_loc_request_popup_menu_pane

0xb001,	// (0x00066e89) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb001,	// (0x00066e89) list_single_loc_request_popup_menu_pane_g1

0xb00d,	// (0x00066e95) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00d,	// (0x00066e95) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0006b18c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0006b18c) list_single_loc_request_popup_menu_pane_g

0xb019,	// (0x00066ea1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb019,	// (0x00066ea1) list_single_loc_request_popup_menu_pane_t1

0x3210,	// (0x0005f098) bg_popup_window_pane_cp03_ParamLimits

0x3210,	// (0x0005f098) bg_popup_window_pane_cp03

0x321e,	// (0x0005f0a6) heading_loc_req_pane_ParamLimits

0x321e,	// (0x0005f0a6) heading_loc_req_pane

0x322a,	// (0x0005f0b2) popup_dyc_status_message_window_g1_ParamLimits

0x322a,	// (0x0005f0b2) popup_dyc_status_message_window_g1

0x3236,	// (0x0005f0be) popup_dyc_status_message_window_t1_ParamLimits

0x3236,	// (0x0005f0be) popup_dyc_status_message_window_t1

0x3248,	// (0x0005f0d0) popup_dyc_status_message_window_t2_ParamLimits

0x3248,	// (0x0005f0d0) popup_dyc_status_message_window_t2

0x325a,	// (0x0005f0e2) popup_dyc_status_message_window_t3_ParamLimits

0x325a,	// (0x0005f0e2) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0006b191) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0006b191) popup_dyc_status_message_window_t

0xa5f9,	// (0x00066481) bg_heading_pane_cp01

0xb02f,	// (0x00066eb7) heading_loc_req_pane_g1

0xb037,	// (0x00066ebf) heading_loc_req_pane_g2

0xb03f,	// (0x00066ec7) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0006b198) heading_loc_req_pane_g

0xb047,	// (0x00066ecf) heading_loc_req_pane_t1

0xb056,	// (0x00066ede) bg_popup_sub_pane_cp01_ParamLimits

0xb056,	// (0x00066ede) bg_popup_sub_pane_cp01

0xb064,	// (0x00066eec) popup_cale_events_window_g1_ParamLimits

0xb064,	// (0x00066eec) popup_cale_events_window_g1

0xb090,	// (0x00066f18) popup_cale_events_window_g2_ParamLimits

0xb090,	// (0x00066f18) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0006b1cc) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0006b1cc) popup_cale_events_window_g

0xb0b0,	// (0x00066f38) popup_cale_events_window_t1_ParamLimits

0xb0b0,	// (0x00066f38) popup_cale_events_window_t1

0xb0c2,	// (0x00066f4a) popup_cale_events_window_t2_ParamLimits

0xb0c2,	// (0x00066f4a) popup_cale_events_window_t2

0xb100,	// (0x00066f88) popup_cale_events_window_t3_ParamLimits

0xb100,	// (0x00066f88) popup_cale_events_window_t3

0xb13a,	// (0x00066fc2) popup_cale_events_window_t4_ParamLimits

0xb13a,	// (0x00066fc2) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0006b1d1) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0006b1d1) popup_cale_events_window_t

0x3353,	// (0x0005f1db) call_type_pane

0xb592,	// (0x0006741a) popup_call_status_window_g1

0x335f,	// (0x0005f1e7) popup_call_status_window_g2

0x336b,	// (0x0005f1f3) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0006b1da) popup_call_status_window_g

0xb170,	// (0x00066ff8) call_type_pane_g1

0xb179,	// (0x00067001) call_type_pane_g2

0x0001,

0xf359,	// (0x0006b1e1) call_type_pane_g

0xa5f9,	// (0x00066481) bg_popup_sub_pane_cp02

0xb182,	// (0x0006700a) listscroll_popup_wml_pane

0xb18a,	// (0x00067012) list_wml_pane

0xb194,	// (0x0006701c) scroll_pane_cp013

0xb19f,	// (0x00067027) list_single_graphic_popup_wml_pane_ParamLimits

0xb19f,	// (0x00067027) list_single_graphic_popup_wml_pane

0xa96e,	// (0x000667f6) list_single_graphic_popup_wml_pane_g1

0xb1b3,	// (0x0006703b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0006b1e6) list_single_graphic_popup_wml_pane_g

0xb1bb,	// (0x00067043) list_single_graphic_popup_wml_pane_t1

0xb1c9,	// (0x00067051) aid_call_pane

0xa84c,	// (0x000666d4) popup_clock_analogue_window_g1

0xa84c,	// (0x000666d4) popup_clock_analogue_window_g2

0x3377,	// (0x0005f1ff) popup_clock_analogue_window_g3

0x3377,	// (0x0005f1ff) popup_clock_analogue_window_g4

0xa96e,	// (0x000667f6) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0006b1eb) popup_clock_analogue_window_g

0x337f,	// (0x0005f207) popup_clock_analogue_window_t1

0x338d,	// (0x0005f215) clock_digital_number_pane_ParamLimits

0x338d,	// (0x0005f215) clock_digital_number_pane

0x3399,	// (0x0005f221) clock_digital_number_pane_cp02_ParamLimits

0x3399,	// (0x0005f221) clock_digital_number_pane_cp02

0x33a5,	// (0x0005f22d) clock_digital_number_pane_cp03_ParamLimits

0x33a5,	// (0x0005f22d) clock_digital_number_pane_cp03

0x33b1,	// (0x0005f239) clock_digital_number_pane_cp04_ParamLimits

0x33b1,	// (0x0005f239) clock_digital_number_pane_cp04

0x33c1,	// (0x0005f249) clock_digital_separator_pane_ParamLimits

0x33c1,	// (0x0005f249) clock_digital_separator_pane

0x33cd,	// (0x0005f255) popup_clock_digital_window_t1

0xa96e,	// (0x000667f6) clock_digital_number_pane_g1

0xa96e,	// (0x000667f6) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0006b159) clock_digital_number_pane_g

0xa96e,	// (0x000667f6) clock_digital_separator_pane_g1

0xa96e,	// (0x000667f6) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0006b159) clock_digital_separator_pane_g

0xa5f9,	// (0x00066481) bg_popup_window_pane_cp04

0xb1d9,	// (0x00067061) heading_pane_cp03

0xb1e1,	// (0x00067069) listscroll_popup_gms_pane

0xb1e9,	// (0x00067071) grid_large_graphic_popup_pane

0xb1f3,	// (0x0006707b) listscroll_popup_gms_pane_g1

0xb1fb,	// (0x00067083) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0006b1f6) listscroll_popup_gms_pane_g

0xac90,	// (0x00066b18) scroll_pane_cp014

0x33ea,	// (0x0005f272) cell_large_graphic_popup_pane_ParamLimits

0x33ea,	// (0x0005f272) cell_large_graphic_popup_pane

0x3402,	// (0x0005f28a) cell_large_graphic_popup_pane_g1_ParamLimits

0x3402,	// (0x0005f28a) cell_large_graphic_popup_pane_g1

0xb203,	// (0x0006708b) cell_large_graphic_popup_pane_g2_ParamLimits

0xb203,	// (0x0006708b) cell_large_graphic_popup_pane_g2

0xb20f,	// (0x00067097) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20f,	// (0x00067097) cell_large_graphic_popup_pane_g3

0xb21c,	// (0x000670a4) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21c,	// (0x000670a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0006b1fb) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0006b1fb) cell_large_graphic_popup_pane_g

0xb22c,	// (0x000670b4) grid_highlight_pane_cp010

0xa96e,	// (0x000667f6) bg_popup_call_pane_g1

0xb236,	// (0x000670be) list_single_graphic_popup_conf_pane_ParamLimits

0xb236,	// (0x000670be) list_single_graphic_popup_conf_pane

0xb249,	// (0x000670d1) list_highlight_pane_cp01

0xb252,	// (0x000670da) list_single_graphic_popup_conf_pane_g1

0xb25a,	// (0x000670e2) list_single_graphic_popup_conf_pane_g2

0x0001,

0x0231,	// (0x0005c0b9) list_single_graphic_popup_conf_pane_g

0xb262,	// (0x000670ea) list_single_graphic_popup_conf_pane_t1

0xb270,	// (0x000670f8) linegrid_cams_pane_g1

0x340e,	// (0x0005f296) linegrid_cams_pane_g2

0xaacd,	// (0x00066955) linegrid_cams_pane_g3

0xb279,	// (0x00067101) linegrid_cams_pane_g4

0x3417,	// (0x0005f29f) linegrid_cams_pane_g5

0x3420,	// (0x0005f2a8) linegrid_cams_pane_g6

0xaad6,	// (0x0006695e) linegrid_cams_pane_g7

0x0006,

0xf37c,	// (0x0006b204) linegrid_cams_pane_g

0xb282,	// (0x0006710a) popup_clock_analogue_window

0xb282,	// (0x0006710a) popup_clock_digital_window

0xa5f9,	// (0x00066481) popup_phob_thumbnail_window

0xa96e,	// (0x000667f6) call_video_uplink_pane_g1

0xb28b,	// (0x00067113) call_video_uplink_pane_g2

0x0001,

0xf38b,	// (0x0006b213) call_video_uplink_pane_g

0xb293,	// (0x0006711b) video_uplink_pane

0xb29b,	// (0x00067123) mce_image_pane_g1

0x3429,	// (0x0005f2b1) mce_image_pane_g2

0x3433,	// (0x0005f2bb) mce_image_pane_g3

0x343b,	// (0x0005f2c3) mce_image_pane_g4

0x3443,	// (0x0005f2cb) mce_image_pane_g5

0x0004,

0xf390,	// (0x0006b218) mce_image_pane_g

0xb2a5,	// (0x0006712d) control_top_pane_stacon_cp01_ParamLimits

0xb2a5,	// (0x0006712d) control_top_pane_stacon_cp01

0xb2b9,	// (0x00067141) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b9,	// (0x00067141) uni_indicator_pane_stacon_cp01

0xb2ca,	// (0x00067152) bg_popup_sub_pane_cp03

0xb2d4,	// (0x0006715c) chi_dic_find_pane

0x344b,	// (0x0005f2d3) listscroll_chi_dic_pane

0xb2dc,	// (0x00067164) main_pane_chidic_g1

0xb2e4,	// (0x0006716c) chi_dic_find_pane_t1

0xb2f2,	// (0x0006717a) find_chidic_pane

0xb2fb,	// (0x00067183) chi_dic_list_pane_ParamLimits

0xb2fb,	// (0x00067183) chi_dic_list_pane

0xb30c,	// (0x00067194) scroll_pane_cp020

0xb314,	// (0x0006719c) find_chidic_pane_t1

0xa5f9,	// (0x00066481) input_focus_pane_cp06

0x345f,	// (0x0005f2e7) list_chi_dic_pane_ParamLimits

0x345f,	// (0x0005f2e7) list_chi_dic_pane

0x3479,	// (0x0005f301) list_chi_dic_pane_t1_ParamLimits

0x3479,	// (0x0005f301) list_chi_dic_pane_t1

0xa5f9,	// (0x00066481) list_highlight_pane_cp020

0xb323,	// (0x000671ab) bg_cale_heading_pane_g1

0x348c,	// (0x0005f314) bg_cale_heading_pane_g2

0x3494,	// (0x0005f31c) bg_cale_heading_pane_g3

0x349c,	// (0x0005f324) bg_cale_heading_pane_g4

0x34a6,	// (0x0005f32e) bg_cale_heading_pane_g5

0x34b0,	// (0x0005f338) bg_cale_heading_pane_g6

0x34b8,	// (0x0005f340) bg_cale_heading_pane_g7

0x34c0,	// (0x0005f348) bg_cale_heading_pane_g8

0x34ca,	// (0x0005f352) bg_cale_heading_pane_g9

0x0008,

0xf39b,	// (0x0006b223) bg_cale_heading_pane_g

0xb323,	// (0x000671ab) bg_cale_side_pane_g1

0x34d4,	// (0x0005f35c) bg_cale_side_pane_g2

0x34de,	// (0x0005f366) bg_cale_side_pane_g3

0x34e8,	// (0x0005f370) bg_cale_side_pane_g4

0x34f2,	// (0x0005f37a) bg_cale_side_pane_g5

0x34fc,	// (0x0005f384) bg_cale_side_pane_g6

0x3506,	// (0x0005f38e) bg_cale_side_pane_g7

0x3510,	// (0x0005f398) bg_cale_side_pane_g8

0x3518,	// (0x0005f3a0) bg_cale_side_pane_g9

0x0008,

0xf3ae,	// (0x0006b236) bg_cale_side_pane_g

0x3520,	// (0x0005f3a8) popup_call_status_window_ParamLimits

0x3520,	// (0x0005f3a8) popup_call_status_window

0xb32b,	// (0x000671b3) stacon_top_pane

0xb333,	// (0x000671bb) status_pane_ParamLimits

0xb333,	// (0x000671bb) status_pane

0xb348,	// (0x000671d0) status_small_pane

0xb350,	// (0x000671d8) control_pane

0xa5f9,	// (0x00066481) stacon_bottom_pane

0xb358,	// (0x000671e0) list_single_mce_smart_pane_t1_ParamLimits

0xb358,	// (0x000671e0) list_single_mce_smart_pane_t1

0xb36b,	// (0x000671f3) list_single_mce_smart_pane_t2_ParamLimits

0xb36b,	// (0x000671f3) list_single_mce_smart_pane_t2

0x0001,

0x027b,	// (0x0005c103) list_single_mce_smart_pane_t_ParamLimits

0x027b,	// (0x0005c103) list_single_mce_smart_pane_t

0x352c,	// (0x0005f3b4) compass_pane

0x3538,	// (0x0005f3c0) main_location2_pane_t1

0x354c,	// (0x0005f3d4) main_location2_pane_t2

0x3560,	// (0x0005f3e8) main_location2_pane_t3

0x0003,

0xf3c1,	// (0x0006b249) main_location2_pane_t

0xb38a,	// (0x00067212) compass_pane_g1_ParamLimits

0xb38a,	// (0x00067212) compass_pane_g1

0x35aa,	// (0x0005f432) compass_pane_t1

0x35b9,	// (0x0005f441) compass_pane_t2

0x0005,

0xf3ca,	// (0x0006b252) compass_pane_t

0x3604,	// (0x0005f48c) text_secondary_cp61

0xb406,	// (0x0006728e) navi_pane_cams_g5

0xb482,	// (0x0006730a) navi_pane_im_t1

0xb490,	// (0x00067318) navi_pane_mp_g1_ParamLimits

0xb490,	// (0x00067318) navi_pane_mp_g1

0xb4a4,	// (0x0006732c) navi_pane_mp_g2_ParamLimits

0xb4a4,	// (0x0006732c) navi_pane_mp_g2

0xb4b0,	// (0x00067338) navi_pane_mp_g3_ParamLimits

0xb4b0,	// (0x00067338) navi_pane_mp_g3

0x0002,

0x029d,	// (0x0005c125) navi_pane_mp_g_ParamLimits

0x029d,	// (0x0005c125) navi_pane_mp_g

0xb4bc,	// (0x00067344) navi_pane_mp_t1

0xb4ca,	// (0x00067352) navi_pane_mp_t2

0x0002,

0x02a4,	// (0x0005c12c) navi_pane_mp_t

0xb535,	// (0x000673bd) navi_pane_vt_g1

0xb4bc,	// (0x00067344) navi_pane_vt_t1

0xb53d,	// (0x000673c5) navi_slider_pane

0xaae7,	// (0x0006696f) zooming_pane

0xb54d,	// (0x000673d5) navi_slider_pane_g1

0x363f,	// (0x0005f4c7) navi_slider_pane_g2

0x0006,

0xf3d7,	// (0x0006b25f) navi_slider_pane_g

0xb571,	// (0x000673f9) aid_levels_zoom

0xb579,	// (0x00067401) zooming_pane_g1

0xb581,	// (0x00067409) zooming_pane_g2

0xb581,	// (0x00067409) zooming_pane_g3

0x0002,

0x02ba,	// (0x0005c142) zooming_pane_g

0xb589,	// (0x00067411) level_10_zoom

0xb5a0,	// (0x00067428) level_11_zoom

0xb5a9,	// (0x00067431) level_1_zoom

0xb5b2,	// (0x0006743a) level_2_zoom

0xb5bb,	// (0x00067443) level_3_zoom

0xb5c4,	// (0x0006744c) level_4_zoom

0xb5cd,	// (0x00067455) level_5_zoom

0xb5d6,	// (0x0006745e) level_6_zoom

0xb5df,	// (0x00067467) level_7_zoom

0xb5e8,	// (0x00067470) level_8_zoom

0xb5f1,	// (0x00067479) level_9_zoom

0xb602,	// (0x0006748a) popup_phob_thumbnail_window_g1

0xb60a,	// (0x00067492) popup_phob_thumbnail_window_g2

0x0001,

0xf3e6,	// (0x0006b26e) popup_phob_thumbnail_window_g

0xc8e6,	// (0x0006876e) level_1_location

0xc8ee,	// (0x00068776) level_2_location

0xc8f6,	// (0x0006877e) level_3_location

0xc8fe,	// (0x00068786) level_4_location

0xaae7,	// (0x0006696f) level_5_location

0x3651,	// (0x0005f4d9) mce_icon_pane_g1

0x3659,	// (0x0005f4e1) mce_icon_pane_g2

0x0001,

0xf3eb,	// (0x0006b273) mce_icon_pane_g

0x3661,	// (0x0005f4e9) main_mup_pane_g1_ParamLimits

0x3661,	// (0x0005f4e9) main_mup_pane_g1

0x3679,	// (0x0005f501) main_mup_pane_g2_ParamLimits

0x3679,	// (0x0005f501) main_mup_pane_g2

0x3695,	// (0x0005f51d) main_mup_pane_g3_ParamLimits

0x3695,	// (0x0005f51d) main_mup_pane_g3

0x36b1,	// (0x0005f539) main_mup_pane_g4_ParamLimits

0x36b1,	// (0x0005f539) main_mup_pane_g4

0x36cd,	// (0x0005f555) main_mup_pane_g5_ParamLimits

0x36cd,	// (0x0005f555) main_mup_pane_g5

0x36ee,	// (0x0005f576) main_mup_pane_g6_ParamLimits

0x36ee,	// (0x0005f576) main_mup_pane_g6

0x370a,	// (0x0005f592) main_mup_pane_g7_ParamLimits

0x370a,	// (0x0005f592) main_mup_pane_g7

0x3726,	// (0x0005f5ae) main_mup_pane_g8_ParamLimits

0x3726,	// (0x0005f5ae) main_mup_pane_g8

0x3746,	// (0x0005f5ce) main_mup_pane_g9_ParamLimits

0x3746,	// (0x0005f5ce) main_mup_pane_g9

0x3765,	// (0x0005f5ed) main_mup_pane_g10_ParamLimits

0x3765,	// (0x0005f5ed) main_mup_pane_g10

0x3784,	// (0x0005f60c) main_mup_pane_g11_ParamLimits

0x3784,	// (0x0005f60c) main_mup_pane_g11

0x379c,	// (0x0005f624) main_mup_pane_g12_ParamLimits

0x379c,	// (0x0005f624) main_mup_pane_g12

0x37aa,	// (0x0005f632) main_mup_pane_g13_ParamLimits

0x37aa,	// (0x0005f632) main_mup_pane_g13

0x000c,

0xf3f0,	// (0x0006b278) main_mup_pane_g_ParamLimits

0xf3f0,	// (0x0006b278) main_mup_pane_g

0x37c0,	// (0x0005f648) main_mup_pane_t1_ParamLimits

0x37c0,	// (0x0005f648) main_mup_pane_t1

0x37dd,	// (0x0005f665) main_mup_pane_t2_ParamLimits

0x37dd,	// (0x0005f665) main_mup_pane_t2

0x37f7,	// (0x0005f67f) main_mup_pane_t3_ParamLimits

0x37f7,	// (0x0005f67f) main_mup_pane_t3

0x3811,	// (0x0005f699) main_mup_pane_t4_ParamLimits

0x3811,	// (0x0005f699) main_mup_pane_t4

0x3823,	// (0x0005f6ab) main_mup_pane_t5_ParamLimits

0x3823,	// (0x0005f6ab) main_mup_pane_t5

0x3835,	// (0x0005f6bd) main_mup_pane_t6_ParamLimits

0x3835,	// (0x0005f6bd) main_mup_pane_t6

0x0005,

0xf40b,	// (0x0006b293) main_mup_pane_t_ParamLimits

0xf40b,	// (0x0006b293) main_mup_pane_t

0x384b,	// (0x0005f6d3) mup_progress_pane_ParamLimits

0x384b,	// (0x0005f6d3) mup_progress_pane

0x3857,	// (0x0005f6df) mup_visualizer_pane_ParamLimits

0x3857,	// (0x0005f6df) mup_visualizer_pane

0x3891,	// (0x0005f719) mup_volume_pane_ParamLimits

0x3891,	// (0x0005f719) mup_volume_pane

0xb592,	// (0x0006741a) mup_visualizer_pane_g1_ParamLimits

0xb592,	// (0x0006741a) mup_visualizer_pane_g1

0xb592,	// (0x0006741a) mup_visualizer_pane_g2_ParamLimits

0xb592,	// (0x0006741a) mup_visualizer_pane_g2

0xb38a,	// (0x00067212) mup_visualizer_pane_g3_ParamLimits

0xb38a,	// (0x00067212) mup_visualizer_pane_g3

0x0002,

0xf418,	// (0x0006b2a0) mup_visualizer_pane_g_ParamLimits

0xf418,	// (0x0006b2a0) mup_visualizer_pane_g

0xa96e,	// (0x000667f6) mup_volume_pane_g1

0xb61a,	// (0x000674a2) mup_volume_pane_g2

0x0001,

0xf41f,	// (0x0006b2a7) mup_volume_pane_g

0xa96e,	// (0x000667f6) mup_progress_pane_g1

0xb623,	// (0x000674ab) mup_progress_pane_g2

0xb62c,	// (0x000674b4) mup_progress_pane_g3

0x0002,

0xf424,	// (0x0006b2ac) mup_progress_pane_g

0xa5f9,	// (0x00066481) bg_popup_window_pane_cp05

0xb635,	// (0x000674bd) heading_pane_cp02_ParamLimits

0xb635,	// (0x000674bd) heading_pane_cp02

0xb64f,	// (0x000674d7) list_popup_blid_pane

0xb657,	// (0x000674df) list_blid_sat_info_pane_ParamLimits

0xb657,	// (0x000674df) list_blid_sat_info_pane

0xb66a,	// (0x000674f2) list_blid_sat_info_pane_g1

0xb672,	// (0x000674fa) list_blid_sat_info_pane_t1

0x399e,	// (0x0005f826) mup_equalizer_pane_ParamLimits

0x399e,	// (0x0005f826) mup_equalizer_pane

0x39bf,	// (0x0005f847) mup_equalizer_pane_cp1_ParamLimits

0x39bf,	// (0x0005f847) mup_equalizer_pane_cp1

0x39e0,	// (0x0005f868) mup_equalizer_pane_cp2_ParamLimits

0x39e0,	// (0x0005f868) mup_equalizer_pane_cp2

0x3a01,	// (0x0005f889) mup_equalizer_pane_cp3_ParamLimits

0x3a01,	// (0x0005f889) mup_equalizer_pane_cp3

0x3a22,	// (0x0005f8aa) mup_equalizer_pane_cp4_ParamLimits

0x3a22,	// (0x0005f8aa) mup_equalizer_pane_cp4

0x3a43,	// (0x0005f8cb) mup_equalizer_pane_cp5

0x3a59,	// (0x0005f8e1) mup_equalizer_pane_cp6

0x3a71,	// (0x0005f8f9) mup_equalizer_pane_cp7

0xc804,	// (0x0006868c) bg_popup_call_poc_act_pane_g9

0xc80c,	// (0x00068694) bg_popup_call_poc_act_pane_g10

0xc814,	// (0x0006869c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa854,	// (0x000666dc) mup_scale_pane

0xa96e,	// (0x000667f6) mup_scale_pane_g1

0xb680,	// (0x00067508) mup_scale_pane_g2

0x0006,

0xf440,	// (0x0006b2c8) mup_scale_pane_g

0xb6a4,	// (0x0006752c) msg_data_pane

0xb6ac,	// (0x00067534) scroll_pane_cp017

0x3a9b,	// (0x0005f923) bg_list_pane_cp04_ParamLimits

0x3a9b,	// (0x0005f923) bg_list_pane_cp04

0xb6b4,	// (0x0006753c) msg_data_pane_g1

0x3ab7,	// (0x0005f93f) msg_data_pane_g2

0x3ac1,	// (0x0005f949) msg_data_pane_g3

0x3ac9,	// (0x0005f951) msg_data_pane_g4

0x3ad1,	// (0x0005f959) msg_data_pane_g5

0x3ad9,	// (0x0005f961) msg_data_pane_g6

0x3ae1,	// (0x0005f969) msg_data_pane_g7

0x0006,

0xf44f,	// (0x0006b2d7) msg_data_pane_g

0x3ae9,	// (0x0005f971) msg_text_pane_ParamLimits

0x3ae9,	// (0x0005f971) msg_text_pane

0x3b3a,	// (0x0005f9c2) qrid_highlight_pane_cp011_ParamLimits

0x3b3a,	// (0x0005f9c2) qrid_highlight_pane_cp011

0xa5f9,	// (0x00066481) msg_body_pane

0xa5f9,	// (0x00066481) msg_header_pane

0xb6c5,	// (0x0006754d) input_focus_pane_cp07

0x3b60,	// (0x0005f9e8) msg_header_pane_t1_ParamLimits

0x3b60,	// (0x0005f9e8) msg_header_pane_t1

0xa05f,	// (0x00065ee7) msg_header_pane_t2_ParamLimits

0xa05f,	// (0x00065ee7) msg_header_pane_t2

0x0001,

0xf463,	// (0x0006b2eb) msg_header_pane_t_ParamLimits

0xf463,	// (0x0006b2eb) msg_header_pane_t

0xb6da,	// (0x00067562) msg_body_pane_g1

0x3b72,	// (0x0005f9fa) msg_body_pane_t1_ParamLimits

0x3b72,	// (0x0005f9fa) msg_body_pane_t1

0xa071,	// (0x00065ef9) msg_body_pane_t2_ParamLimits

0xa071,	// (0x00065ef9) msg_body_pane_t2

0xa083,	// (0x00065f0b) msg_body_pane_t3_ParamLimits

0xa083,	// (0x00065f0b) msg_body_pane_t3

0x0002,

0xf468,	// (0x0006b2f0) msg_body_pane_t_ParamLimits

0xf468,	// (0x0006b2f0) msg_body_pane_t

0x3bf5,	// (0x0005fa7d) main_viewer_pane_g1_ParamLimits

0x3bf5,	// (0x0005fa7d) main_viewer_pane_g1

0x3c01,	// (0x0005fa89) main_viewer_pane_g2_ParamLimits

0x3c01,	// (0x0005fa89) main_viewer_pane_g2

0x3c0d,	// (0x0005fa95) main_viewer_pane_g3_ParamLimits

0x3c0d,	// (0x0005fa95) main_viewer_pane_g3

0x3c1e,	// (0x0005faa6) main_viewer_pane_g4_ParamLimits

0x3c1e,	// (0x0005faa6) main_viewer_pane_g4

0x3c2f,	// (0x0005fab7) main_viewer_pane_g5_ParamLimits

0x3c2f,	// (0x0005fab7) main_viewer_pane_g5

0x3c2f,	// (0x0005fab7) main_viewer_pane_g7_ParamLimits

0x3c2f,	// (0x0005fab7) main_viewer_pane_g7

0xb001,	// (0x00066e89) main_viewer_pane_g8_ParamLimits

0xb001,	// (0x00066e89) main_viewer_pane_g8

0x0007,

0xf478,	// (0x0006b300) main_viewer_pane_g_ParamLimits

0xf478,	// (0x0006b300) main_viewer_pane_g

0xb6e2,	// (0x0006756a) viewer_content_pane_ParamLimits

0xb6e2,	// (0x0006756a) viewer_content_pane

0x3c6d,	// (0x0005faf5) main_postcard_pane_g1_ParamLimits

0x3c6d,	// (0x0005faf5) main_postcard_pane_g1

0x3c7b,	// (0x0005fb03) main_postcard_pane_g2_ParamLimits

0x3c7b,	// (0x0005fb03) main_postcard_pane_g2

0x3c89,	// (0x0005fb11) main_postcard_pane_g3_ParamLimits

0x3c89,	// (0x0005fb11) main_postcard_pane_g3

0x0005,

0xf489,	// (0x0006b311) main_postcard_pane_g_ParamLimits

0xf489,	// (0x0006b311) main_postcard_pane_g

0x3c99,	// (0x0005fb21) main_postcard_pane_g4

0xc9e6,	// (0x0006886e) smil_status_volume_pane_g2

0x3cc5,	// (0x0005fb4d) postcard_pane_ParamLimits

0x3cc5,	// (0x0005fb4d) postcard_pane

0xb592,	// (0x0006741a) postcard_pane_g1_ParamLimits

0xb592,	// (0x0006741a) postcard_pane_g1

0x3cf7,	// (0x0005fb7f) postcard_pane_g2_ParamLimits

0x3cf7,	// (0x0005fb7f) postcard_pane_g2

0x3d03,	// (0x0005fb8b) postcard_pane_g3_ParamLimits

0x3d03,	// (0x0005fb8b) postcard_pane_g3

0xb6f0,	// (0x00067578) postcard_pane_g4_ParamLimits

0xb6f0,	// (0x00067578) postcard_pane_g4

0x3d0f,	// (0x0005fb97) postcard_pane_g5_ParamLimits

0x3d0f,	// (0x0005fb97) postcard_pane_g5

0x3d1b,	// (0x0005fba3) postcard_pane_g6_ParamLimits

0x3d1b,	// (0x0005fba3) postcard_pane_g6

0xb6fe,	// (0x00067586) postcard_pane_g7_ParamLimits

0xb6fe,	// (0x00067586) postcard_pane_g7

0x0006,

0xf496,	// (0x0006b31e) postcard_pane_g_ParamLimits

0xf496,	// (0x0006b31e) postcard_pane_g

0x3d27,	// (0x0005fbaf) main_mp2_pane_g1_ParamLimits

0x3d27,	// (0x0005fbaf) main_mp2_pane_g1

0x3d33,	// (0x0005fbbb) main_mp2_pane_g2_ParamLimits

0x3d33,	// (0x0005fbbb) main_mp2_pane_g2

0x3d3f,	// (0x0005fbc7) main_mp2_pane_g3_ParamLimits

0x3d3f,	// (0x0005fbc7) main_mp2_pane_g3

0x0002,

0xf4a5,	// (0x0006b32d) main_mp2_pane_g_ParamLimits

0xf4a5,	// (0x0006b32d) main_mp2_pane_g

0x3d4b,	// (0x0005fbd3) main_mp2_pane_t1_ParamLimits

0x3d4b,	// (0x0005fbd3) main_mp2_pane_t1

0x3d62,	// (0x0005fbea) main_mp2_pane_t2_ParamLimits

0x3d62,	// (0x0005fbea) main_mp2_pane_t2

0x3d76,	// (0x0005fbfe) main_mp2_pane_t3_ParamLimits

0x3d76,	// (0x0005fbfe) main_mp2_pane_t3

0x0002,

0xf4ac,	// (0x0006b334) main_mp2_pane_t_ParamLimits

0xf4ac,	// (0x0006b334) main_mp2_pane_t

0xb70c,	// (0x00067594) pec_content_pane_ParamLimits

0xb70c,	// (0x00067594) pec_content_pane

0xac90,	// (0x00066b18) scroll_pane_cp015

0xb71e,	// (0x000675a6) pec_attribute_pane_ParamLimits

0xb71e,	// (0x000675a6) pec_attribute_pane

0x3d88,	// (0x0005fc10) pec_content_pane_g1_ParamLimits

0x3d88,	// (0x0005fc10) pec_content_pane_g1

0xb72e,	// (0x000675b6) pec_content_pane_t1_ParamLimits

0xb72e,	// (0x000675b6) pec_content_pane_t1

0xb740,	// (0x000675c8) pec_content_pane_t2_ParamLimits

0xb740,	// (0x000675c8) pec_content_pane_t2

0x0001,

0x038e,	// (0x0005c216) pec_content_pane_t_ParamLimits

0x038e,	// (0x0005c216) pec_content_pane_t

0x3d94,	// (0x0005fc1c) list_single_graphic_pane_cp01_ParamLimits

0x3d94,	// (0x0005fc1c) list_single_graphic_pane_cp01

0xa854,	// (0x000666dc) bg_popup_sub_pane_cp04

0xb752,	// (0x000675da) popup_mup_playback_window_g1

0xb75e,	// (0x000675e6) popup_mup_playback_window_t1

0xb773,	// (0x000675fb) popup_mup_playback_window_t2

0x0001,

0x0393,	// (0x0005c21b) popup_mup_playback_window_t

0xb7aa,	// (0x00067632) main_image_pane_g1_ParamLimits

0xb7aa,	// (0x00067632) main_image_pane_g1

0xb7ed,	// (0x00067675) scroll_pane_cp018_ParamLimits

0xb7ed,	// (0x00067675) scroll_pane_cp018

0xb805,	// (0x0006768d) scroll_pane_cp016_ParamLimits

0xb805,	// (0x0006768d) scroll_pane_cp016

0x3e2d,	// (0x0005fcb5) smil2_image_pane_ParamLimits

0x3e2d,	// (0x0005fcb5) smil2_image_pane

0x3e5d,	// (0x0005fce5) smil2_root_pane_ParamLimits

0x3e5d,	// (0x0005fce5) smil2_root_pane

0x3e89,	// (0x0005fd11) smil2_text_pane_ParamLimits

0x3e89,	// (0x0005fd11) smil2_text_pane

0xa5f9,	// (0x00066481) bg_list_pane_cp06

0xb841,	// (0x000676c9) grid_radio_pane

0xa5f9,	// (0x00066481) bg_popup_window_pane_cp06

0xb849,	// (0x000676d1) main_fmradio_pane_t1

0xb1d9,	// (0x00067061) heading_pane_cp04

0xb857,	// (0x000676df) main_fmradio_pane_t2

0xc81c,	// (0x000686a4) popup_cale_lunar_info_window_g1

0xb865,	// (0x000676ed) main_fmradio_pane_t3

0xc824,	// (0x000686ac) popup_cale_lunar_info_window_g2

0xb873,	// (0x000676fb) main_fmradio_pane_t4

0x0001,

0xb881,	// (0x00067709) main_fmradio_pane_t5

0x0004,

0x046e,	// (0x0005c2f6) popup_cale_lunar_info_window_g

0x03a8,	// (0x0005c230) main_fmradio_pane_t

0xb88f,	// (0x00067717) wait_bar_pane_cp03

0xb897,	// (0x0006771f) cell_fmradio_pane_ParamLimits

0xb897,	// (0x0006771f) cell_fmradio_pane

0xb6fe,	// (0x00067586) cell_fmradio_pane_g1_ParamLimits

0xb6fe,	// (0x00067586) cell_fmradio_pane_g1

0xa5f9,	// (0x00066481) grid_highlight_pane_cp011

0xb8aa,	// (0x00067732) poc_content_pane_ParamLimits

0xb8aa,	// (0x00067732) poc_content_pane

0xb8bc,	// (0x00067744) scroll_pane_cp019

0x3ec9,	// (0x0005fd51) popup_call_poc_act_window_ParamLimits

0x3ec9,	// (0x0005fd51) popup_call_poc_act_window

0x3ed6,	// (0x0005fd5e) popup_call_poc_inact_window_ParamLimits

0x3ed6,	// (0x0005fd5e) popup_call_poc_inact_window

0x0445,	// (0x0005c2cd) bg_popup_call_poc_act_pane_g

0xc794,	// (0x0006861c) bg_popup_call_poc_inact_pane_g1

0xc79c,	// (0x00068624) bg_popup_call_poc_inact_pane_g2

0xb8c4,	// (0x0006774c) popup_call_poc_act_window_g2

0xc7a4,	// (0x0006862c) bg_popup_call_poc_inact_pane_g3

0xc7ac,	// (0x00068634) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x0006863c) bg_popup_call_poc_inact_pane_g5

0xb8cc,	// (0x00067754) popup_call_poc_act_window_t1_ParamLimits

0xb8cc,	// (0x00067754) popup_call_poc_act_window_t1

0xb8f4,	// (0x0006777c) popup_call_poc_act_window_t2_ParamLimits

0xb8f4,	// (0x0006777c) popup_call_poc_act_window_t2

0xb91c,	// (0x000677a4) popup_call_poc_act_window_t3_ParamLimits

0xb91c,	// (0x000677a4) popup_call_poc_act_window_t3

0xb944,	// (0x000677cc) popup_call_poc_act_window_t4_ParamLimits

0xb944,	// (0x000677cc) popup_call_poc_act_window_t4

0x0003,

0x03b3,	// (0x0005c23b) popup_call_poc_act_window_t_ParamLimits

0x03b3,	// (0x0005c23b) popup_call_poc_act_window_t

0xc7bc,	// (0x00068644) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x0006864c) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00068654) bg_popup_call_poc_inact_pane_g8

0xb956,	// (0x000677de) popup_call_poc_inact_window_g2

0xc7d4,	// (0x0006865c) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0432,	// (0x0005c2ba) bg_popup_call_poc_inact_pane_g

0xb95e,	// (0x000677e6) popup_call_poc_inact_window_t1_ParamLimits

0xb95e,	// (0x000677e6) popup_call_poc_inact_window_t1

0xb973,	// (0x000677fb) popup_call_poc_inact_window_t2_ParamLimits

0xb973,	// (0x000677fb) popup_call_poc_inact_window_t2

0xb988,	// (0x00067810) popup_call_poc_inact_window_t3_ParamLimits

0xb988,	// (0x00067810) popup_call_poc_inact_window_t3

0x0002,

0x03bc,	// (0x0005c244) popup_call_poc_inact_window_t_ParamLimits

0x03bc,	// (0x0005c244) popup_call_poc_inact_window_t

0xc959,	// (0x000687e1) context_pane_ParamLimits

0x4518,	// (0x000603a0) signal_pane_ParamLimits

0xaae7,	// (0x0006696f) main_call2_pane

0x448b,	// (0x00060313) popup_phob_thumbnail2_window_ParamLimits

0x448b,	// (0x00060313) popup_phob_thumbnail2_window

0x3ba3,	// (0x0005fa2b) aid_hotspot_pointer_arrow_pane

0x3bab,	// (0x0005fa33) aid_hotspot_pointer_hand_pane

0x41f8,	// (0x00060080) phob_pre_status_pane_g5

0x1c54,	// (0x0005dadc) cams_zoom_pane_ParamLimits

0x1c60,	// (0x0005dae8) image_vga_pane_ParamLimits

0x1c6f,	// (0x0005daf7) main_camera_pane_g1_ParamLimits

0x1c7d,	// (0x0005db05) main_camera_pane_g2_ParamLimits

0x1c89,	// (0x0005db11) main_camera_pane_g3_ParamLimits

0x1c95,	// (0x0005db1d) main_camera_pane_g4_ParamLimits

0x1ca1,	// (0x0005db29) main_camera_pane_g5_ParamLimits

0x1cad,	// (0x0005db35) main_camera_pane_g6_ParamLimits

0x1cb9,	// (0x0005db41) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0006b08e) main_camera_pane_g_ParamLimits

0x1cc5,	// (0x0005db4d) main_camera_pane_t1_ParamLimits

0x1cd7,	// (0x0005db5f) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0006b09f) main_camera_pane_t_ParamLimits

0xa854,	// (0x000666dc) bg_popup_preview_window_pane_cp01_ParamLimits

0xa854,	// (0x000666dc) bg_popup_preview_window_pane_cp01

0xb99d,	// (0x00067825) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99d,	// (0x00067825) popup_phob_thumbnail2_window_g1

0xa5f9,	// (0x00066481) call2_cli_visual_pane

0x3ef2,	// (0x0005fd7a) popup_call2_audio_conf_window_ParamLimits

0x3ef2,	// (0x0005fd7a) popup_call2_audio_conf_window

0x3f07,	// (0x0005fd8f) popup_call2_audio_first_window_ParamLimits

0x3f07,	// (0x0005fd8f) popup_call2_audio_first_window

0x3fa5,	// (0x0005fe2d) popup_call2_audio_in_window_ParamLimits

0x3fa5,	// (0x0005fe2d) popup_call2_audio_in_window

0x3fe7,	// (0x0005fe6f) popup_call2_audio_out_window_ParamLimits

0x3fe7,	// (0x0005fe6f) popup_call2_audio_out_window

0x4049,	// (0x0005fed1) popup_call2_audio_second_window_ParamLimits

0x4049,	// (0x0005fed1) popup_call2_audio_second_window

0x40a7,	// (0x0005ff2f) popup_call2_audio_wait_window_ParamLimits

0x40a7,	// (0x0005ff2f) popup_call2_audio_wait_window

0xa5f9,	// (0x00066481) bg_popup_call2_act_pane_cp03

0xa836,	// (0x000666be) list_conf_pane_cp

0xb9a9,	// (0x00067831) popup_call2_audio_conf_window_t1

0xb236,	// (0x000670be) list_single_graphic_popup_conf2_pane_ParamLimits

0xb236,	// (0x000670be) list_single_graphic_popup_conf2_pane

0xb249,	// (0x000670d1) list_highlight_pane_cp04

0xb9b7,	// (0x0006783f) list_single_graphic_popup_conf2_pane_g1

0xb25a,	// (0x000670e2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x03c3,	// (0x0005c24b) list_single_graphic_popup_conf2_pane_g

0xb9c1,	// (0x00067849) list_single_graphic_popup_conf2_pane_t1

0xb9cf,	// (0x00067857) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9cf,	// (0x00067857) bg_popup_call2_act_pane_cp01

0xba59,	// (0x000678e1) call_type_pane_cp05_ParamLimits

0xba59,	// (0x000678e1) call_type_pane_cp05

0xbaad,	// (0x00067935) popup_call2_audio_second_window_g1_ParamLimits

0xbaad,	// (0x00067935) popup_call2_audio_second_window_g1

0xbb01,	// (0x00067989) popup_call2_audio_second_window_g2_ParamLimits

0xbb01,	// (0x00067989) popup_call2_audio_second_window_g2

0x0002,

0x03c8,	// (0x0005c250) popup_call2_audio_second_window_g_ParamLimits

0x03c8,	// (0x0005c250) popup_call2_audio_second_window_g

0xbb66,	// (0x000679ee) popup_call2_audio_second_window_t1_ParamLimits

0xbb66,	// (0x000679ee) popup_call2_audio_second_window_t1

0xbc21,	// (0x00067aa9) popup_call2_audio_second_window_t2_ParamLimits

0xbc21,	// (0x00067aa9) popup_call2_audio_second_window_t2

0xbc74,	// (0x00067afc) popup_call2_audio_second_window_t3_ParamLimits

0xbc74,	// (0x00067afc) popup_call2_audio_second_window_t3

0x0003,

0x03cf,	// (0x0005c257) popup_call2_audio_second_window_t_ParamLimits

0x03cf,	// (0x0005c257) popup_call2_audio_second_window_t

0xa5f9,	// (0x00066481) bg_popup_call2_in_pane_cp02

0xa603,	// (0x0006648b) call_type_pane_cp04

0xa60b,	// (0x00066493) popup_call2_audio_wait_window_g1

0xa613,	// (0x0006649b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006af7d) popup_call2_audio_wait_window_g

0xa61b,	// (0x000664a3) popup_call2_audio_wait_window_t3

0xbd67,	// (0x00067bef) bg_popup_call2_act_pane_ParamLimits

0xbd67,	// (0x00067bef) bg_popup_call2_act_pane

0xbe27,	// (0x00067caf) call_type_pane_cp03_ParamLimits

0xbe27,	// (0x00067caf) call_type_pane_cp03

0xbe8b,	// (0x00067d13) popup_call2_audio_first_window_g1_ParamLimits

0xbe8b,	// (0x00067d13) popup_call2_audio_first_window_g1

0xbefb,	// (0x00067d83) popup_call2_audio_first_window_g2_ParamLimits

0xbefb,	// (0x00067d83) popup_call2_audio_first_window_g2

0xb592,	// (0x0006741a) popup_call2_audio_first_window_g3_ParamLimits

0xb592,	// (0x0006741a) popup_call2_audio_first_window_g3

0x0004,

0xf4c3,	// (0x0006b34b) popup_call2_audio_first_window_g_ParamLimits

0xf4c3,	// (0x0006b34b) popup_call2_audio_first_window_g

0xbfd9,	// (0x00067e61) popup_call2_audio_first_window_t1_ParamLimits

0xbfd9,	// (0x00067e61) popup_call2_audio_first_window_t1

0xc0dc,	// (0x00067f64) popup_call2_audio_first_window_t4_ParamLimits

0xc0dc,	// (0x00067f64) popup_call2_audio_first_window_t4

0xc1bf,	// (0x00068047) popup_call2_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x00068047) popup_call2_audio_first_window_t5

0x0003,

0x03e3,	// (0x0005c26b) popup_call2_audio_first_window_t_ParamLimits

0x03e3,	// (0x0005c26b) popup_call2_audio_first_window_t

0xa84c,	// (0x000666d4) bg_popup_call2_act_pane_g1

0xc82c,	// (0x000686b4) popup_cale_lunar_info_window_t1

0xc83a,	// (0x000686c2) popup_cale_lunar_info_window_t2

0xc848,	// (0x000686d0) popup_cale_lunar_info_window_t3

0xa5f9,	// (0x00066481) bg_popup_call2_bubble_pane

0xc2c0,	// (0x00068148) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2c0,	// (0x00068148) bg_popup_call2_in_pane_cp01

0x9dee,	// (0x00065c76) call_type_pane_cp02

0xc308,	// (0x00068190) popup_call2_audio_out_window_g1_ParamLimits

0xc308,	// (0x00068190) popup_call2_audio_out_window_g1

0xc334,	// (0x000681bc) popup_call2_audio_out_window_g2_ParamLimits

0xc334,	// (0x000681bc) popup_call2_audio_out_window_g2

0xc35c,	// (0x000681e4) popup_call2_audio_out_window_g3_ParamLimits

0xc35c,	// (0x000681e4) popup_call2_audio_out_window_g3

0x0003,

0x03ec,	// (0x0005c274) popup_call2_audio_out_window_g_ParamLimits

0x03ec,	// (0x0005c274) popup_call2_audio_out_window_g

0xc397,	// (0x0006821f) popup_call2_audio_out_window_t1_ParamLimits

0xc397,	// (0x0006821f) popup_call2_audio_out_window_t1

0xc3f6,	// (0x0006827e) popup_call2_audio_out_window_t2_ParamLimits

0xc3f6,	// (0x0006827e) popup_call2_audio_out_window_t2

0xc44a,	// (0x000682d2) popup_call2_audio_out_window_t3_ParamLimits

0xc44a,	// (0x000682d2) popup_call2_audio_out_window_t3

0xc460,	// (0x000682e8) popup_call2_audio_out_window_t4_ParamLimits

0xc460,	// (0x000682e8) popup_call2_audio_out_window_t4

0xc476,	// (0x000682fe) popup_call2_audio_out_window_t5_ParamLimits

0xc476,	// (0x000682fe) popup_call2_audio_out_window_t5

0x0005,

0x03f5,	// (0x0005c27d) popup_call2_audio_out_window_t_ParamLimits

0x03f5,	// (0x0005c27d) popup_call2_audio_out_window_t

0xc4da,	// (0x00068362) bg_popup_call2_in_pane_ParamLimits

0xc4da,	// (0x00068362) bg_popup_call2_in_pane

0xc536,	// (0x000683be) popup_call2_audio_in_window_g1_ParamLimits

0xc536,	// (0x000683be) popup_call2_audio_in_window_g1

0xc56e,	// (0x000683f6) popup_call2_audio_in_window_g2_ParamLimits

0xc56e,	// (0x000683f6) popup_call2_audio_in_window_g2

0xc5a6,	// (0x0006842e) popup_call2_audio_in_window_g3_ParamLimits

0xc5a6,	// (0x0006842e) popup_call2_audio_in_window_g3

0x0003,

0x0402,	// (0x0005c28a) popup_call2_audio_in_window_g_ParamLimits

0x0402,	// (0x0005c28a) popup_call2_audio_in_window_g

0xc5fe,	// (0x00068486) popup_call2_audio_in_window_t1_ParamLimits

0xc5fe,	// (0x00068486) popup_call2_audio_in_window_t1

0xc67e,	// (0x00068506) popup_call2_audio_in_window_t2_ParamLimits

0xc67e,	// (0x00068506) popup_call2_audio_in_window_t2

0xc6fe,	// (0x00068586) popup_call2_audio_in_window_t3_ParamLimits

0xc6fe,	// (0x00068586) popup_call2_audio_in_window_t3

0xc718,	// (0x000685a0) popup_call2_audio_in_window_t4_ParamLimits

0xc718,	// (0x000685a0) popup_call2_audio_in_window_t4

0xc72a,	// (0x000685b2) popup_call2_audio_in_window_t5_ParamLimits

0xc72a,	// (0x000685b2) popup_call2_audio_in_window_t5

0xc73f,	// (0x000685c7) popup_call2_audio_in_window_t6_ParamLimits

0xc73f,	// (0x000685c7) popup_call2_audio_in_window_t6

0x0005,

0x040b,	// (0x0005c293) popup_call2_audio_in_window_t_ParamLimits

0x040b,	// (0x0005c293) popup_call2_audio_in_window_t

0xa84c,	// (0x000666d4) bg_popup_call2_in_pane_g1

0xc856,	// (0x000686de) popup_cale_lunar_info_window_t4

0x0003,

0x0473,	// (0x0005c2fb) popup_cale_lunar_info_window_t

0xa854,	// (0x000666dc) bg_popup_call2_rect_pane_ParamLimits

0xa854,	// (0x000666dc) bg_popup_call2_rect_pane

0xa5f9,	// (0x00066481) call2_cli_visual_graphic_pane

0xa5f9,	// (0x00066481) call2_cli_visual_text_pane

0x45be,	// (0x00060446) smil_status_volume_pane_g3

0x0002,

0xa96e,	// (0x000667f6) call2_cli_visual_graphic_pane_g1

0xa96e,	// (0x000667f6) call2_cli_visual_graphic_pane_g2

0xa96e,	// (0x000667f6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ce,	// (0x0006b356) call2_cli_visual_graphic_pane_g

0xc754,	// (0x000685dc) bg_popup_call2_rect_pane_g1

0xaa03,	// (0x0006688b) bg_popup_call2_rect_pane_g2

0xc75c,	// (0x000685e4) bg_popup_call2_rect_pane_g3

0xc764,	// (0x000685ec) bg_popup_call2_rect_pane_g4

0xc76c,	// (0x000685f4) bg_popup_call2_rect_pane_g5

0xc774,	// (0x000685fc) bg_popup_call2_rect_pane_g6

0xc77c,	// (0x00068604) bg_popup_call2_rect_pane_g7

0xc784,	// (0x0006860c) bg_popup_call2_rect_pane_g8

0xc78c,	// (0x00068614) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d5,	// (0x0006b35d) bg_popup_call2_rect_pane_g

0xc794,	// (0x0006861c) bg_popup_call2_bubble_pane_g1

0xc79c,	// (0x00068624) bg_popup_call2_bubble_pane_g2

0xc7a4,	// (0x0006862c) bg_popup_call2_bubble_pane_g3

0xc7ac,	// (0x00068634) bg_popup_call2_bubble_pane_g4

0xc7b4,	// (0x0006863c) bg_popup_call2_bubble_pane_g5

0xc7bc,	// (0x00068644) bg_popup_call2_bubble_pane_g6

0xc7c4,	// (0x0006864c) bg_popup_call2_bubble_pane_g7

0xc7cc,	// (0x00068654) bg_popup_call2_bubble_pane_g8

0xc7d4,	// (0x0006865c) bg_popup_call2_bubble_pane_g9

0x0008,

0x0432,	// (0x0005c2ba) bg_popup_call2_bubble_pane_g

0x176b,	// (0x0005d5f3) aid_cale_week_size_cell_pane

0x1ce9,	// (0x0005db71) aid_cams_cif_uncrop_pane_ParamLimits

0x1ce9,	// (0x0005db71) aid_cams_cif_uncrop_pane

0x1e44,	// (0x0005dccc) aid_cams_size_cell_ParamLimits

0x1e44,	// (0x0005dccc) aid_cams_size_cell

0x1e50,	// (0x0005dcd8) grid_cams_pane_ParamLimits

0x1e5e,	// (0x0005dce6) linegrid_cams_pane_ParamLimits

0x2049,	// (0x0005ded1) call_video_pane_t1

0x206a,	// (0x0005def2) call_video_pane_t2

0x0001,

0xf26a,	// (0x0006b0f2) call_video_pane_t

0x25b1,	// (0x0005e439) aid_cale_month_size_cell_pane_ParamLimits

0x25b1,	// (0x0005e439) aid_cale_month_size_cell_pane

0xf518,	// (0x0006b3a0) smil_status_volume_pane_g

0x45cb,	// (0x00060453) volume_smil_pane_ParamLimits

0x0eae,	// (0x0005cd36) aid_popup2_width_pane

0x165f,	// (0x0005d4e7) cell_qdial_pane_g4_ParamLimits

0x165f,	// (0x0005d4e7) cell_qdial_pane_g4

0x3586,	// (0x0005f40e) aid_blid_cardinal_pane_ParamLimits

0x3596,	// (0x0005f41e) aid_blid_destination_pane_ParamLimits

0x3596,	// (0x0005f41e) aid_blid_destination_pane

0xa854,	// (0x000666dc) bg_popup_call_poc_act_pane_ParamLimits

0xa854,	// (0x000666dc) bg_popup_call_poc_act_pane

0xa854,	// (0x000666dc) bg_popup_call_poc_inact_pane_ParamLimits

0xa854,	// (0x000666dc) bg_popup_call_poc_inact_pane

0xc7dc,	// (0x00068664) bg_popup_call_poc_act_pane_g1

0xc7e4,	// (0x0006866c) bg_popup_call_poc_act_pane_g2

0xc7ec,	// (0x00068674) bg_popup_call_poc_act_pane_g3

0xc7ac,	// (0x00068634) bg_popup_call_poc_act_pane_g4

0xc7b4,	// (0x0006863c) bg_popup_call_poc_act_pane_g5

0xc7f4,	// (0x0006867c) bg_popup_call_poc_act_pane_g6

0xc7c4,	// (0x0006864c) bg_popup_call_poc_act_pane_g7

0xc7fc,	// (0x00068684) bg_popup_call_poc_act_pane_g8

0xa5f9,	// (0x00066481) main_usb_pane

0x43ba,	// (0x00060242) popup_cale_lunar_info_window

0x2393,	// (0x0005e21b) im_reading_pane_t1_ParamLimits

0xabe8,	// (0x00066a70) list_im_pane_ParamLimits

0xabf9,	// (0x00066a81) scroll_pane_cp07_ParamLimits

0xa5f9,	// (0x00066481) grid_highlight_pane_cp012

0xa854,	// (0x000666dc) mup_scale_pane_ParamLimits

0xb592,	// (0x0006741a) main_usb_pane_g1_ParamLimits

0xb592,	// (0x0006741a) main_usb_pane_g1

0x411b,	// (0x0005ffa3) main_usb_pane_g2_ParamLimits

0x411b,	// (0x0005ffa3) main_usb_pane_g2

0x0001,

0xf4e8,	// (0x0006b370) main_usb_pane_g_ParamLimits

0xf4e8,	// (0x0006b370) main_usb_pane_g

0x4127,	// (0x0005ffaf) main_usb_pane_t1_ParamLimits

0x4127,	// (0x0005ffaf) main_usb_pane_t1

0x4139,	// (0x0005ffc1) main_usb_pane_t2_ParamLimits

0x4139,	// (0x0005ffc1) main_usb_pane_t2

0x414b,	// (0x0005ffd3) main_usb_pane_t3_ParamLimits

0x414b,	// (0x0005ffd3) main_usb_pane_t3

0x415d,	// (0x0005ffe5) main_usb_pane_t4_ParamLimits

0x415d,	// (0x0005ffe5) main_usb_pane_t4

0x416f,	// (0x0005fff7) main_usb_pane_t5_ParamLimits

0x416f,	// (0x0005fff7) main_usb_pane_t5

0x4181,	// (0x00060009) main_usb_pane_t6_ParamLimits

0x4181,	// (0x00060009) main_usb_pane_t6

0x0005,

0xf4ed,	// (0x0006b375) main_usb_pane_t_ParamLimits

0x352c,	// (0x0005f3b4) aid_text_placing

0x3538,	// (0x0005f3c0) main_location2_pane_t1_ParamLimits

0x354c,	// (0x0005f3d4) main_location2_pane_t2_ParamLimits

0x3560,	// (0x0005f3e8) main_location2_pane_t3_ParamLimits

0x3574,	// (0x0005f3fc) main_location2_pane_t4_ParamLimits

0x3574,	// (0x0005f3fc) main_location2_pane_t4

0xf3c1,	// (0x0006b249) main_location2_pane_t_ParamLimits

0xa890,	// (0x00066718) find_pinb_pane_g2_ParamLimits

0xa890,	// (0x00066718) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006afa3) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006afa3) find_pinb_pane_g

0xa89c,	// (0x00066724) find_pinb_pane_t1_ParamLimits

0xa8ae,	// (0x00066736) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006afa8) find_pinb_pane_t_ParamLimits

0xa5f9,	// (0x00066481) main_call3_pane

0x2b54,	// (0x0005e9dc) cale_month_day_heading_pane_t1_ParamLimits

0x2bda,	// (0x0005ea62) cale_month_day_heading_pane_t2_ParamLimits

0x2c53,	// (0x0005eadb) cale_month_day_heading_pane_t3_ParamLimits

0x2ccc,	// (0x0005eb54) cale_month_day_heading_pane_t4_ParamLimits

0x2d45,	// (0x0005ebcd) cale_month_day_heading_pane_t5_ParamLimits

0x2dbe,	// (0x0005ec46) cale_month_day_heading_pane_t6_ParamLimits

0x2e37,	// (0x0005ecbf) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0006b12a) cale_month_day_heading_pane_t_ParamLimits

0xae43,	// (0x00066ccb) smil_status_volume_pane

0x3cdf,	// (0x0005fb67) postcard_address_pane_ParamLimits

0x3cdf,	// (0x0005fb67) postcard_address_pane

0x3ceb,	// (0x0005fb73) postcard_message_pane_ParamLimits

0x3ceb,	// (0x0005fb73) postcard_message_pane

0x40e6,	// (0x0005ff6e) call2_cli_visual_pane_t1_ParamLimits

0x40e6,	// (0x0005ff6e) call2_cli_visual_pane_t1

0x4722,	// (0x000605aa) postcard_message_pane_t1_ParamLimits

0x4722,	// (0x000605aa) postcard_message_pane_t1

0x470b,	// (0x00060593) postcard_address_pane_t1_ParamLimits

0x470b,	// (0x00060593) postcard_address_pane_t1

0x46fc,	// (0x00060584) popup_call3_audio_in_window_ParamLimits

0x46fc,	// (0x00060584) popup_call3_audio_in_window

0x45e0,	// (0x00060468) bg_popup_call3_in_pane_ParamLimits

0x45e0,	// (0x00060468) bg_popup_call3_in_pane

0x4642,	// (0x000604ca) popup_call3_audio_in_window_g1_ParamLimits

0x4642,	// (0x000604ca) popup_call3_audio_in_window_g1

0x465a,	// (0x000604e2) popup_call3_audio_in_window_g2_ParamLimits

0x465a,	// (0x000604e2) popup_call3_audio_in_window_g2

0x4672,	// (0x000604fa) popup_call3_audio_in_window_g3_ParamLimits

0x4672,	// (0x000604fa) popup_call3_audio_in_window_g3

0x0003,

0xf51f,	// (0x0006b3a7) popup_call3_audio_in_window_g_ParamLimits

0xf51f,	// (0x0006b3a7) popup_call3_audio_in_window_g

0x469a,	// (0x00060522) popup_call3_audio_in_window_t1_ParamLimits

0x469a,	// (0x00060522) popup_call3_audio_in_window_t1

0x46c2,	// (0x0006054a) popup_call3_audio_in_window_t2_ParamLimits

0x46c2,	// (0x0006054a) popup_call3_audio_in_window_t2

0x46ea,	// (0x00060572) popup_call3_audio_in_window_t3_ParamLimits

0x46ea,	// (0x00060572) popup_call3_audio_in_window_t3

0x0002,

0xf528,	// (0x0006b3b0) popup_call3_audio_in_window_t_ParamLimits

0xf528,	// (0x0006b3b0) popup_call3_audio_in_window_t

0xaae7,	// (0x0006696f) bg_popup_call3_rect_pane

0xc754,	// (0x000685dc) bg_popup_call3_rect_pane_g1

0xaa03,	// (0x0006688b) bg_popup_call3_rect_pane_g2

0xc75c,	// (0x000685e4) bg_popup_call3_rect_pane_g3

0xc764,	// (0x000685ec) bg_popup_call3_rect_pane_g4

0xc76c,	// (0x000685f4) bg_popup_call3_rect_pane_g5

0xc774,	// (0x000685fc) bg_popup_call3_rect_pane_g6

0xc77c,	// (0x00068604) bg_popup_call3_rect_pane_g7

0x38ac,	// (0x0005f734) mup_visualizer_osc_pane

0xb612,	// (0x0006749a) mup_visualizer_spec_pane

0x4600,	// (0x00060488) call3_video_qcif_pane_ParamLimits

0x4600,	// (0x00060488) call3_video_qcif_pane

0x4612,	// (0x0006049a) call3_video_qcif_uncrop_pane_ParamLimits

0x4612,	// (0x0006049a) call3_video_qcif_uncrop_pane

0x4620,	// (0x000604a8) call3_video_subqcif_pane_ParamLimits

0x4620,	// (0x000604a8) call3_video_subqcif_pane

0x4632,	// (0x000604ba) call3_video_subqcif_uncrop_pane_ParamLimits

0x4632,	// (0x000604ba) call3_video_subqcif_uncrop_pane

0x468a,	// (0x00060512) popup_call3_audio_in_window_g4_ParamLimits

0x468a,	// (0x00060512) popup_call3_audio_in_window_g4

0x45ad,	// (0x00060435) mup_spec_half_pane

0x45b6,	// (0x0006043e) mup_spec_half_pane_cp

0xc9b9,	// (0x00068841) mup_osc_middle_pane

0xc9c2,	// (0x0006884a) mup_visualizer_osc_pane_g1

0x458e,	// (0x00060416) mup_spec_bar_pane_ParamLimits

0x458e,	// (0x00060416) mup_spec_bar_pane

0xc9a6,	// (0x0006882e) mup_spec_bar_pane_g1

0xc9b0,	// (0x00068838) mup_spec_bar_pane_g2

0x0001,

0x04b7,	// (0x0005c33f) mup_spec_bar_pane_g

0x176b,	// (0x0005d5f3) aid_cale_week_size_cell_pane_ParamLimits

0x1780,	// (0x0005d608) bg_cale_heading_pane_ParamLimits

0xaa40,	// (0x000668c8) bg_cale_pane_cp01_ParamLimits

0x17a0,	// (0x0005d628) cale_week_corner_pane_ParamLimits

0x17ba,	// (0x0005d642) cale_week_day_heading_pane_ParamLimits

0x17da,	// (0x0005d662) cale_week_scroll_pane_g1_ParamLimits

0x17f5,	// (0x0005d67d) cale_week_scroll_pane_g2_ParamLimits

0x1808,	// (0x0005d690) cale_week_scroll_pane_g3_ParamLimits

0x181b,	// (0x0005d6a3) cale_week_scroll_pane_g4_ParamLimits

0x182e,	// (0x0005d6b6) cale_week_scroll_pane_g5_ParamLimits

0x1841,	// (0x0005d6c9) cale_week_scroll_pane_g6_ParamLimits

0x1854,	// (0x0005d6dc) cale_week_scroll_pane_g7_ParamLimits

0x1869,	// (0x0005d6f1) cale_week_scroll_pane_g8_ParamLimits

0x187e,	// (0x0005d706) cale_week_scroll_pane_g9_ParamLimits

0x1891,	// (0x0005d719) cale_week_scroll_pane_g10_ParamLimits

0x18a4,	// (0x0005d72c) cale_week_scroll_pane_g11_ParamLimits

0x18b7,	// (0x0005d73f) cale_week_scroll_pane_g12_ParamLimits

0x18ce,	// (0x0005d756) cale_week_scroll_pane_g13_ParamLimits

0x18e9,	// (0x0005d771) cale_week_scroll_pane_g14_ParamLimits

0x1904,	// (0x0005d78c) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006b034) cale_week_scroll_pane_g_ParamLimits

0x1934,	// (0x0005d7bc) cale_week_time_pane_ParamLimits

0x1949,	// (0x0005d7d1) grid_cale_week_pane_ParamLimits

0xaa5d,	// (0x000668e5) listscroll_cale_week_pane_t1

0xaa6f,	// (0x000668f7) scroll_pane_cp08_ParamLimits

0x2625,	// (0x0005e4ad) cale_month_corner_pane_ParamLimits

0xae19,	// (0x00066ca1) cale_month_pane_t1

0x2ad7,	// (0x0005e95f) cale_month_week_pane_ParamLimits

0xb592,	// (0x0006741a) popup_call_status_window_g1_ParamLimits

0x335f,	// (0x0005f1e7) popup_call_status_window_g2_ParamLimits

0x336b,	// (0x0005f1f3) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0006b1da) popup_call_status_window_g_ParamLimits

0xb1d1,	// (0x00067059) aid_call2_pane

0x3b54,	// (0x0005f9dc) msg_header_pane_g1

0x3cdf,	// (0x0005fb67) postcard_address2_pane_ParamLimits

0x3cdf,	// (0x0005fb67) postcard_address2_pane

0x3ceb,	// (0x0005fb73) postcard_message2_pane_ParamLimits

0x3ceb,	// (0x0005fb73) postcard_message2_pane

0x4526,	// (0x000603ae) message2_row_pane_ParamLimits

0x4526,	// (0x000603ae) message2_row_pane

0x4541,	// (0x000603c9) address2_row_pane_ParamLimits

0x4541,	// (0x000603c9) address2_row_pane

0xc974,	// (0x000687fc) postcard_message2_row_pane_g1

0xc97c,	// (0x00068804) postcard_message2_row_pane_t1

0xc974,	// (0x000687fc) address2_row_pane_g1

0xc97c,	// (0x00068804) address2_row_pane_t1

0x1bcf,	// (0x0005da57) aid_size_cell_vorec

0xa5f9,	// (0x00066481) main_rss_pane

0x4554,	// (0x000603dc) rss_list_single_pane_ParamLimits

0x4554,	// (0x000603dc) rss_list_single_pane

0xc98a,	// (0x00068812) rss_list_single_pane_t1

0xc998,	// (0x00068820) rss_list_single_pane_t2

0x0001,

0x04b2,	// (0x0005c33a) rss_list_single_pane_t

0xa5f9,	// (0x00066481) main_camera2_pane

0xa5f9,	// (0x00066481) main_video2_pane

0x4786,	// (0x0006060e) cams_zoom_pane_cp2_ParamLimits

0x4786,	// (0x0006060e) cams_zoom_pane_cp2

0x4792,	// (0x0006061a) image2_vga_pane_ParamLimits

0x4792,	// (0x0006061a) image2_vga_pane

0x47a1,	// (0x00060629) main_camera2_pane_g1_ParamLimits

0x47a1,	// (0x00060629) main_camera2_pane_g1

0x47ad,	// (0x00060635) main_camera2_pane_g2_ParamLimits

0x47ad,	// (0x00060635) main_camera2_pane_g2

0x47b9,	// (0x00060641) main_camera2_pane_g3_ParamLimits

0x47b9,	// (0x00060641) main_camera2_pane_g3

0x47c5,	// (0x0006064d) main_camera2_pane_g4_ParamLimits

0x47c5,	// (0x0006064d) main_camera2_pane_g4

0x47d1,	// (0x00060659) main_camera2_pane_g5_ParamLimits

0x47d1,	// (0x00060659) main_camera2_pane_g5

0x47dd,	// (0x00060665) main_camera2_pane_g6_ParamLimits

0x47dd,	// (0x00060665) main_camera2_pane_g6

0x47e9,	// (0x00060671) main_camera2_pane_g7_ParamLimits

0x47e9,	// (0x00060671) main_camera2_pane_g7

0x47f5,	// (0x0006067d) main_camera2_pane_g8_ParamLimits

0x47f5,	// (0x0006067d) main_camera2_pane_g8

0x0008,

0xf52f,	// (0x0006b3b7) main_camera2_pane_g_ParamLimits

0xf52f,	// (0x0006b3b7) main_camera2_pane_g

0x480d,	// (0x00060695) main_camera2_pane_t1_ParamLimits

0x480d,	// (0x00060695) main_camera2_pane_t1

0x481f,	// (0x000606a7) main_camera2_pane_t2_ParamLimits

0x481f,	// (0x000606a7) main_camera2_pane_t2

0x4831,	// (0x000606b9) main_camera2_pane_t3_ParamLimits

0x4831,	// (0x000606b9) main_camera2_pane_t3

0x4843,	// (0x000606cb) main_camera2_pane_t4_ParamLimits

0x4843,	// (0x000606cb) main_camera2_pane_t4

0x0006,

0xf542,	// (0x0006b3ca) main_camera2_pane_t_ParamLimits

0xf542,	// (0x0006b3ca) main_camera2_pane_t

0x48a5,	// (0x0006072d) cams_zoom_pane_cp4_ParamLimits

0x48a5,	// (0x0006072d) cams_zoom_pane_cp4

0x48b5,	// (0x0006073d) image2_cif_pane_ParamLimits

0x48b5,	// (0x0006073d) image2_cif_pane

0x48ca,	// (0x00060752) image2_subqcif_pane_ParamLimits

0x48ca,	// (0x00060752) image2_subqcif_pane

0x48d9,	// (0x00060761) main_video2_pane_g1_ParamLimits

0x48d9,	// (0x00060761) main_video2_pane_g1

0x48eb,	// (0x00060773) main_video2_pane_g2_ParamLimits

0x48eb,	// (0x00060773) main_video2_pane_g2

0x48fb,	// (0x00060783) main_video2_pane_g3_ParamLimits

0x48fb,	// (0x00060783) main_video2_pane_g3

0x490b,	// (0x00060793) main_video2_pane_g4_ParamLimits

0x490b,	// (0x00060793) main_video2_pane_g4

0x491b,	// (0x000607a3) main_video2_pane_g5_ParamLimits

0x491b,	// (0x000607a3) main_video2_pane_g5

0x492b,	// (0x000607b3) main_video2_pane_g6_ParamLimits

0x492b,	// (0x000607b3) main_video2_pane_g6

0x0005,

0xf551,	// (0x0006b3d9) main_video2_pane_g_ParamLimits

0xf551,	// (0x0006b3d9) main_video2_pane_g

0x493d,	// (0x000607c5) main_video2_pane_t1_ParamLimits

0x493d,	// (0x000607c5) main_video2_pane_t1

0x4957,	// (0x000607df) main_video2_pane_t2_ParamLimits

0x4957,	// (0x000607df) main_video2_pane_t2

0x497d,	// (0x00060805) main_video2_pane_t3_ParamLimits

0x497d,	// (0x00060805) main_video2_pane_t3

0x0002,

0xf55e,	// (0x0006b3e6) main_video2_pane_t_ParamLimits

0xf55e,	// (0x0006b3e6) main_video2_pane_t

0x4238,	// (0x000600c0) call_muted_g2

0x0001,

0xf513,	// (0x0006b39b) call_muted_g

0xa5f9,	// (0x00066481) main_mup2_pane

0xc9f9,	// (0x00068881) main_mup2_pane_g1_ParamLimits

0xc9f9,	// (0x00068881) main_mup2_pane_g1

0x49a3,	// (0x0006082b) main_mup2_pane_g2_ParamLimits

0x49a3,	// (0x0006082b) main_mup2_pane_g2

0x4c25,	// (0x00060aad) main_mup_pane_g13_cp1

0x4c2d,	// (0x00060ab5) mup_volume_pane_cp1

0x49c3,	// (0x0006084b) main_mup2_pane_g4_ParamLimits

0x49c3,	// (0x0006084b) main_mup2_pane_g4

0x49d8,	// (0x00060860) main_mup2_pane_g5_ParamLimits

0x49d8,	// (0x00060860) main_mup2_pane_g5

0x49ed,	// (0x00060875) main_mup2_pane_g6_ParamLimits

0x49ed,	// (0x00060875) main_mup2_pane_g6

0x4a02,	// (0x0006088a) main_mup2_pane_g7_ParamLimits

0x4a02,	// (0x0006088a) main_mup2_pane_g7

0x0006,

0xf565,	// (0x0006b3ed) main_mup2_pane_g_ParamLimits

0xf565,	// (0x0006b3ed) main_mup2_pane_g

0x4a1e,	// (0x000608a6) main_mup2_pane_t1_ParamLimits

0x4a1e,	// (0x000608a6) main_mup2_pane_t1

0x4a35,	// (0x000608bd) main_mup2_pane_t2_ParamLimits

0x4a35,	// (0x000608bd) main_mup2_pane_t2

0x4a4c,	// (0x000608d4) main_mup2_pane_t3_ParamLimits

0x4a4c,	// (0x000608d4) main_mup2_pane_t3

0x4a63,	// (0x000608eb) main_mup2_pane_t4_ParamLimits

0x4a63,	// (0x000608eb) main_mup2_pane_t4

0x4a7d,	// (0x00060905) main_mup2_pane_t5_ParamLimits

0x4a7d,	// (0x00060905) main_mup2_pane_t5

0x4a97,	// (0x0006091f) main_mup2_pane_t6_ParamLimits

0x4a97,	// (0x0006091f) main_mup2_pane_t6

0x0005,

0xf574,	// (0x0006b3fc) main_mup2_pane_t_ParamLimits

0xf574,	// (0x0006b3fc) main_mup2_pane_t

0x4acf,	// (0x00060957) mup2_visualizer_pane_ParamLimits

0x4acf,	// (0x00060957) mup2_visualizer_pane

0x4b05,	// (0x0006098d) mup_progress_pane_cp_ParamLimits

0x4b05,	// (0x0006098d) mup_progress_pane_cp

0x4c10,	// (0x00060a98) mup_volume_pane_cp_ParamLimits

0x4c10,	// (0x00060a98) mup_volume_pane_cp

0x4b1c,	// (0x000609a4) mup2_visualizer_pane_g1_ParamLimits

0x4b1c,	// (0x000609a4) mup2_visualizer_pane_g1

0xca05,	// (0x0006888d) mup2_visualizer_pane_g2_ParamLimits

0xca05,	// (0x0006888d) mup2_visualizer_pane_g2

0x4b31,	// (0x000609b9) mup2_visualizer_pane_g3_ParamLimits

0x4b31,	// (0x000609b9) mup2_visualizer_pane_g3

0x0002,

0xf581,	// (0x0006b409) mup2_visualizer_pane_g_ParamLimits

0xf581,	// (0x0006b409) mup2_visualizer_pane_g

0xb839,	// (0x000676c1) aid_size_cell_fmradio

0x434e,	// (0x000601d6) aid_height_parent_landcape

0xac77,	// (0x00066aff) wml_content_pane_cp

0xac7f,	// (0x00066b07) wml_tabs_pane

0xac88,	// (0x00066b10) popup_wml_miniature_window

0xac90,	// (0x00066b18) scroll_pane_cp021

0xaca4,	// (0x00066b2c) wml_content_pane_comp8

0xa5f9,	// (0x00066481) bg_popup_sub_pane_cp05

0xca23,	// (0x000688ab) popup_wml_miniature_window_g1

0xca2b,	// (0x000688b3) wml_miniature_view_pane

0x4b3f,	// (0x000609c7) aid_size_wml_view

0x4b47,	// (0x000609cf) wml_miniature_view_pane_g1

0x4b50,	// (0x000609d8) wml_miniature_view_pane_g2

0x4b59,	// (0x000609e1) wml_miniature_view_pane_g3

0x4b61,	// (0x000609e9) wml_miniature_view_pane_g4

0x4b69,	// (0x000609f1) wml_miniature_view_pane_g5

0x4b71,	// (0x000609f9) wml_miniature_view_pane_g6

0x4b79,	// (0x00060a01) wml_miniature_view_pane_g7

0x4b81,	// (0x00060a09) wml_miniature_view_pane_g8

0x0007,

0xf588,	// (0x0006b410) wml_miniature_view_pane_g

0xc9f9,	// (0x00068881) background_graphic_ParamLimits

0xc9f9,	// (0x00068881) background_graphic

0xca33,	// (0x000688bb) wml_tabs_2_pane

0xca3c,	// (0x000688c4) wml_tabs_3_pane_ParamLimits

0xca3c,	// (0x000688c4) wml_tabs_3_pane

0xca4e,	// (0x000688d6) wml_tabs_4_pane_ParamLimits

0xca4e,	// (0x000688d6) wml_tabs_4_pane

0xca64,	// (0x000688ec) wml_tabs_5_pane_ParamLimits

0xca64,	// (0x000688ec) wml_tabs_5_pane

0xca7e,	// (0x00068906) wml_tabs_pane_g2_ParamLimits

0xca7e,	// (0x00068906) wml_tabs_pane_g2

0xca92,	// (0x0006891a) wml_tabs_pane_g3_ParamLimits

0xca92,	// (0x0006891a) wml_tabs_pane_g3

0x4b89,	// (0x00060a11) wml_tabs_2_active_pane_ParamLimits

0x4b89,	// (0x00060a11) wml_tabs_2_active_pane

0x4b99,	// (0x00060a21) wml_tabs_2_passive_pane_ParamLimits

0x4b99,	// (0x00060a21) wml_tabs_2_passive_pane

0x4ba9,	// (0x00060a31) wml_tabs_3_active_pane_cp_ParamLimits

0x4ba9,	// (0x00060a31) wml_tabs_3_active_pane_cp

0x4bba,	// (0x00060a42) wml_tabs_3_passive_pane_ParamLimits

0x4bba,	// (0x00060a42) wml_tabs_3_passive_pane

0x4bcb,	// (0x00060a53) wml_tabs_3_passive_pane_cp_ParamLimits

0x4bcb,	// (0x00060a53) wml_tabs_3_passive_pane_cp

0x4bdc,	// (0x00060a64) tabs_4_active_pane

0x4be4,	// (0x00060a6c) tabs_4_passive_pane

0x4bec,	// (0x00060a74) tabs_4_passive_pane_cp

0x4bf4,	// (0x00060a7c) tabs_4_passive_pane_cp2

0x4113,	// (0x0005ff9b) aid_height_text

0x3879,	// (0x0005f701) mup_volume_cont_pane_ParamLimits

0x3879,	// (0x0005f701) mup_volume_cont_pane

0x1295,	// (0x0005d11d) aid_size_cell_pinb

0x129f,	// (0x0005d127) aid_size_list_pinb

0x4aee,	// (0x00060976) mup2_volume_cont_pane_ParamLimits

0x4aee,	// (0x00060976) mup2_volume_cont_pane

0x4bfc,	// (0x00060a84) mup2_volume_cont_pane_g1_ParamLimits

0x4bfc,	// (0x00060a84) mup2_volume_cont_pane_g1

0x0eba,	// (0x0005cd42) aid_size_cell_touch_ParamLimits

0x0eba,	// (0x0005cd42) aid_size_cell_touch

0x117b,	// (0x0005d003) touch_pane_ParamLimits

0x117b,	// (0x0005d003) touch_pane

0x1171,	// (0x0005cff9) main_rss2_pane

0xcaaf,	// (0x00068937) listscroll_rss2_pane

0xcab8,	// (0x00068940) rss2_navigation_pane

0xcac0,	// (0x00068948) list_rss2_pane

0xb30c,	// (0x00067194) scroll_pane_cp22

0xcac8,	// (0x00068950) rss2_navigation_pane_g1

0xcad1,	// (0x00068959) rss2_navigation_pane_g2

0xcad9,	// (0x00068961) rss2_navigation_pane_g3

0x0002,

0x053d,	// (0x0005c3c5) rss2_navigation_pane_g

0xcae1,	// (0x00068969) rss2_navigation_pane_t1

0x4c35,	// (0x00060abd) rss2_list_single_pane_ParamLimits

0x4c35,	// (0x00060abd) rss2_list_single_pane

0xcaef,	// (0x00068977) rss2_list_single_pane_t2

0xcafd,	// (0x00068985) rss2_list_single_pane_t3_ParamLimits

0xcafd,	// (0x00068985) rss2_list_single_pane_t3

0xcb1a,	// (0x000689a2) rss2_list_single_pane_t4

0x30fd,	// (0x0005ef85) smil_status_pane_g1

0x4365,	// (0x000601ed) main_image2_pane_ParamLimits

0x4365,	// (0x000601ed) main_image2_pane

0x4801,	// (0x00060689) main_camera2_pane_g9_ParamLimits

0x4801,	// (0x00060689) main_camera2_pane_g9

0x4855,	// (0x000606dd) main_camera2_pane_t5_ParamLimits

0x4855,	// (0x000606dd) main_camera2_pane_t5

0x4867,	// (0x000606ef) main_camera2_pane_t6_ParamLimits

0x4867,	// (0x000606ef) main_camera2_pane_t6

0x4c66,	// (0x00060aee) main_image2_pane_g1_ParamLimits

0x4c66,	// (0x00060aee) main_image2_pane_g1

0x3eb3,	// (0x0005fd3b) smil2_video_pane_ParamLimits

0x3eb3,	// (0x0005fd3b) smil2_video_pane

0x0dbe,	// (0x0005cc46) aid_zoom_text_primary_cp

0x110c,	// (0x0005cf94) popup_preview_fixed_window

0xabe0,	// (0x00066a68) im_reading_pane_g1

0x474b,	// (0x000605d3) cams2_bc_adjust_pane_cp_ParamLimits

0x474b,	// (0x000605d3) cams2_bc_adjust_pane_cp

0x4897,	// (0x0006071f) cams2_bc_adjust_pane_ParamLimits

0x4897,	// (0x0006071f) cams2_bc_adjust_pane

0xd93c,	// (0x000697c4) cams2_bc_adjust_pane_g1

0x4c72,	// (0x00060afa) cams2_slider_pane

0x4c7b,	// (0x00060b03) cams2_slider_pane_g1

0x4c84,	// (0x00060b0c) cams2_slider_pane_g2

0x0006,

0xf599,	// (0x0006b421) cams2_slider_pane_g

0x13a5,	// (0x0005d22d) calc_display_pane_ParamLimits

0x13c3,	// (0x0005d24b) calc_paper_pane_ParamLimits

0x13df,	// (0x0005d267) grid_calc_pane_ParamLimits

0x33cd,	// (0x0005f255) popup_clock_digital_window_t1_ParamLimits

0xb7d6,	// (0x0006765e) main_image_pane_t1

0x138b,	// (0x0005d213) aid_size_cell_calc_ParamLimits

0x138b,	// (0x0005d213) aid_size_cell_calc

0x4396,	// (0x0006021e) popup_blid_sat_info2_window_ParamLimits

0x4396,	// (0x0006021e) popup_blid_sat_info2_window

0xcb30,	// (0x000689b8) aid_size_cell_blid

0xcb38,	// (0x000689c0) bg_popup_window_pane_cp07

0xcb5b,	// (0x000689e3) grid_popup_blid_pane

0xcb65,	// (0x000689ed) heading_pane_cp05_ParamLimits

0xcb65,	// (0x000689ed) heading_pane_cp05

0xcc2f,	// (0x00068ab7) cell_popup_blid_pane_ParamLimits

0xcc2f,	// (0x00068ab7) cell_popup_blid_pane

0xcc53,	// (0x00068adb) cell_popup_blid_pane_g1

0xcc5b,	// (0x00068ae3) cell_popup_blid_pane_t1

0x4ab4,	// (0x0006093c) mup2_indicator_pane_ParamLimits

0x4ab4,	// (0x0006093c) mup2_indicator_pane

0xaae7,	// (0x0006696f) mup2_visualizer_osc_pane

0xca11,	// (0x00068899) mup2_visualizer_spec_pane_ParamLimits

0xca11,	// (0x00068899) mup2_visualizer_spec_pane

0x4c9e,	// (0x00060b26) mup2_spec_half_pane

0x4ca7,	// (0x00060b2f) mup2_spec_half_pane_cp

0x4cb1,	// (0x00060b39) mup2_spec_bar_pane_ParamLimits

0x4cb1,	// (0x00060b39) mup2_spec_bar_pane

0xc9a6,	// (0x0006882e) mup2_spec_bar_pane_g1

0xc9b0,	// (0x00068838) mup2_spec_bar_pane_g2

0x0001,

0x04b7,	// (0x0005c33f) mup2_spec_bar_pane_g

0x4cd0,	// (0x00060b58) mup2_osc_middle_pane

0xc9c2,	// (0x0006884a) mup2_visualizer_osc_pane_g1

0x9d1f,	// (0x00065ba7) popup_number_entry_window_t1_ParamLimits

0x9d32,	// (0x00065bba) popup_number_entry_window_t2_ParamLimits

0x9d44,	// (0x00065bcc) popup_number_entry_window_t3_ParamLimits

0x11d2,	// (0x0005d05a) popup_number_entry_window_t5_ParamLimits

0x11d2,	// (0x0005d05a) popup_number_entry_window_t5

0xf0c6,	// (0x0006af4e) popup_number_entry_window_t_ParamLimits

0x9d56,	// (0x00065bde) text_title_cp2_ParamLimits

0x3bb3,	// (0x0005fa3b) aid_hotspot_pointer_text2_pane

0x3c41,	// (0x0005fac9) main_viewer_pane_g9_ParamLimits

0x3c41,	// (0x0005fac9) main_viewer_pane_g9

0xae19,	// (0x00066ca1) cale_month_pane_t1_ParamLimits

0xae56,	// (0x00066cde) bg_cale_pane_ParamLimits

0xae6e,	// (0x00066cf6) list_cale_pane_ParamLimits

0xae7f,	// (0x00066d07) listscroll_cale_day_pane_t1

0xae91,	// (0x00066d19) scroll_pane_cp09_ParamLimits

0x38b4,	// (0x0005f73c) main_mup_eq_pane_t1_ParamLimits

0x38b4,	// (0x0005f73c) main_mup_eq_pane_t1

0x38ce,	// (0x0005f756) main_mup_eq_pane_t2_ParamLimits

0x38ce,	// (0x0005f756) main_mup_eq_pane_t2

0x38e8,	// (0x0005f770) main_mup_eq_pane_t3_ParamLimits

0x38e8,	// (0x0005f770) main_mup_eq_pane_t3

0x3900,	// (0x0005f788) main_mup_eq_pane_t4_ParamLimits

0x3900,	// (0x0005f788) main_mup_eq_pane_t4

0x3918,	// (0x0005f7a0) main_mup_eq_pane_t5_ParamLimits

0x3918,	// (0x0005f7a0) main_mup_eq_pane_t5

0x3930,	// (0x0005f7b8) main_mup_eq_pane_t6_ParamLimits

0x3930,	// (0x0005f7b8) main_mup_eq_pane_t6

0x3944,	// (0x0005f7cc) main_mup_eq_pane_t7_ParamLimits

0x3944,	// (0x0005f7cc) main_mup_eq_pane_t7

0x3958,	// (0x0005f7e0) main_mup_eq_pane_t8_ParamLimits

0x3958,	// (0x0005f7e0) main_mup_eq_pane_t8

0x396e,	// (0x0005f7f6) main_mup_eq_pane_t9_ParamLimits

0x396e,	// (0x0005f7f6) main_mup_eq_pane_t9

0x3986,	// (0x0005f80e) main_mup_eq_pane_t10_ParamLimits

0x3986,	// (0x0005f80e) main_mup_eq_pane_t10

0x0009,

0xf42b,	// (0x0006b2b3) main_mup_eq_pane_t_ParamLimits

0xf42b,	// (0x0006b2b3) main_mup_eq_pane_t

0x3a43,	// (0x0005f8cb) mup_equalizer_pane_cp5_ParamLimits

0x3a59,	// (0x0005f8e1) mup_equalizer_pane_cp6_ParamLimits

0x3a71,	// (0x0005f8f9) mup_equalizer_pane_cp7_ParamLimits

0x1171,	// (0x0005cff9) main_gallery_pane

0xc9cb,	// (0x00068853) smil2_volume_pane

0xc9d3,	// (0x0006885b) smil_status_volume_pane_g1_ParamLimits

0xc9e6,	// (0x0006886e) smil_status_volume_pane_g2_ParamLimits

0x45be,	// (0x00060446) smil_status_volume_pane_g3_ParamLimits

0xf518,	// (0x0006b3a0) smil_status_volume_pane_g_ParamLimits

0xcb38,	// (0x000689c0) bg_popup_window_pane_cp07_ParamLimits

0xcb46,	// (0x000689ce) blid_firmament_pane

0x4cd9,	// (0x00060b61) aid_size_cell_gallery_ParamLimits

0x4cd9,	// (0x00060b61) aid_size_cell_gallery

0x4ce7,	// (0x00060b6f) grid_gallery_pane_ParamLimits

0x4ce7,	// (0x00060b6f) grid_gallery_pane

0x4cf7,	// (0x00060b7f) cell_gallery_pane_ParamLimits

0x4cf7,	// (0x00060b7f) cell_gallery_pane

0xcc69,	// (0x00068af1) bg_cell_gallery_focus_pane_ParamLimits

0xcc69,	// (0x00068af1) bg_cell_gallery_focus_pane

0xcc7b,	// (0x00068b03) cell_gallery_pane_g1_ParamLimits

0xcc7b,	// (0x00068b03) cell_gallery_pane_g1

0x4d45,	// (0x00060bcd) cell_gallery_pane_g2_ParamLimits

0x4d45,	// (0x00060bcd) cell_gallery_pane_g2

0x4d52,	// (0x00060bda) cell_gallery_pane_g3_ParamLimits

0x4d52,	// (0x00060bda) cell_gallery_pane_g3

0xcc87,	// (0x00068b0f) cell_gallery_pane_g4_ParamLimits

0xcc87,	// (0x00068b0f) cell_gallery_pane_g4

0x0003,

0xf5a8,	// (0x0006b430) cell_gallery_pane_g_ParamLimits

0xf5a8,	// (0x0006b430) cell_gallery_pane_g

0xcc9f,	// (0x00068b27) bg_cell_gallery_focus_pane_g1

0xcca7,	// (0x00068b2f) bg_cell_gallery_focus_pane_g2

0xccaf,	// (0x00068b37) bg_cell_gallery_focus_pane_g3

0xccb7,	// (0x00068b3f) bg_cell_gallery_focus_pane_g4

0xccbf,	// (0x00068b47) bg_cell_gallery_focus_pane_g5

0xccc7,	// (0x00068b4f) bg_cell_gallery_focus_pane_g6

0xcccf,	// (0x00068b57) bg_cell_gallery_focus_pane_g7

0xccd7,	// (0x00068b5f) bg_cell_gallery_focus_pane_g8

0x0007,

0x0573,	// (0x0005c3fb) bg_cell_gallery_focus_pane_g

0xccdf,	// (0x00068b67) aid_firma_cardinal

0xccf3,	// (0x00068b7b) blid_firmament_pane_t1

0xcd0a,	// (0x00068b92) blid_firmament_pane_t2

0xcd21,	// (0x00068ba9) blid_firmament_pane_t3

0xcd38,	// (0x00068bc0) blid_firmament_pane_t4

0x0003,

0x0584,	// (0x0005c40c) blid_firmament_pane_t

0xcd4f,	// (0x00068bd7) blid_sat_info_pane

0xcd5f,	// (0x00068be7) blid_sat_info_pane_g1

0xcd5f,	// (0x00068be7) blid_sat_info_pane_g2

0x0001,

0x058d,	// (0x0005c415) blid_sat_info_pane_g

0xcd69,	// (0x00068bf1) blid_sat_info_pane_t1

0xcd77,	// (0x00068bff) smil2_volume_content_pane

0xcd80,	// (0x00068c08) smil2_volume_pane_g1

0xa9c2,	// (0x0006684a) smil2_volume_content_pane_g1

0xcd88,	// (0x00068c10) smil2_volume_content_pane_g2

0xcd91,	// (0x00068c19) smil2_volume_content_pane_g3

0xcd9a,	// (0x00068c22) smil2_volume_content_pane_g4

0xcda3,	// (0x00068c2b) smil2_volume_content_pane_g5

0xcdac,	// (0x00068c34) smil2_volume_content_pane_g6

0xcdb5,	// (0x00068c3d) smil2_volume_content_pane_g7

0xcdbe,	// (0x00068c46) smil2_volume_content_pane_g8

0xcdc7,	// (0x00068c4f) smil2_volume_content_pane_g9

0xcdd0,	// (0x00068c58) smil2_volume_content_pane_g10

0x0009,

0xf5b1,	// (0x0006b439) smil2_volume_content_pane_g

0x19ca,	// (0x0005d852) cale_week_day_heading_pane_t1_ParamLimits

0x19e5,	// (0x0005d86d) cale_week_day_heading_pane_t2_ParamLimits

0x1a00,	// (0x0005d888) cale_week_day_heading_pane_t3_ParamLimits

0x1a1b,	// (0x0005d8a3) cale_week_day_heading_pane_t4_ParamLimits

0x1a36,	// (0x0005d8be) cale_week_day_heading_pane_t5_ParamLimits

0x1a51,	// (0x0005d8d9) cale_week_day_heading_pane_t6_ParamLimits

0x1a6c,	// (0x0005d8f4) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006b055) cale_week_day_heading_pane_t_ParamLimits

0xaa8c,	// (0x00066914) bg_cale_side_pane_ParamLimits

0x1a87,	// (0x0005d90f) cale_week_time_pane_t1_ParamLimits

0x1aa1,	// (0x0005d929) cale_week_time_pane_t2_ParamLimits

0x1abb,	// (0x0005d943) cale_week_time_pane_t3_ParamLimits

0x1ad5,	// (0x0005d95d) cale_week_time_pane_t4_ParamLimits

0x1aef,	// (0x0005d977) cale_week_time_pane_t5_ParamLimits

0x1b09,	// (0x0005d991) cale_week_time_pane_t6_ParamLimits

0x1b27,	// (0x0005d9af) cale_week_time_pane_t7_ParamLimits

0x1b49,	// (0x0005d9d1) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006b064) cale_week_time_pane_t_ParamLimits

0x1b6d,	// (0x0005d9f5) cell_cale_week_pane_g2_ParamLimits

0xaa8c,	// (0x00066914) bg_cale_side_pane_cp01_ParamLimits

0x2ec8,	// (0x0005ed50) cale_month_week_pane_t1_ParamLimits

0x2ee1,	// (0x0005ed69) cale_month_week_pane_t2_ParamLimits

0x2efa,	// (0x0005ed82) cale_month_week_pane_t3_ParamLimits

0x2f13,	// (0x0005ed9b) cale_month_week_pane_t4_ParamLimits

0x2f2c,	// (0x0005edb4) cale_month_week_pane_t5_ParamLimits

0x2f4d,	// (0x0005edd5) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0006b139) cale_month_week_pane_t_ParamLimits

0x30ba,	// (0x0005ef42) cell_cale_month_pane_g1_ParamLimits

0x1171,	// (0x0005cff9) main_cale_event_viewer_pane

0x9cf5,	// (0x00065b7d) listscroll_cale_event_viewer_pane

0xcdd9,	// (0x00068c61) list_cale_ev_pane

0xcde1,	// (0x00068c69) scroll_pane_cp023

0xcded,	// (0x00068c75) field_cale_ev_pane_ParamLimits

0xcded,	// (0x00068c75) field_cale_ev_pane

0xce0b,	// (0x00068c93) field_cale_ev_content_pane_ParamLimits

0xce0b,	// (0x00068c93) field_cale_ev_content_pane

0xce17,	// (0x00068c9f) field_cale_ev_pane_g1_ParamLimits

0xce17,	// (0x00068c9f) field_cale_ev_pane_g1

0xce23,	// (0x00068cab) field_cale_ev_pane_g2_ParamLimits

0xce23,	// (0x00068cab) field_cale_ev_pane_g2

0xce3b,	// (0x00068cc3) field_cale_ev_pane_g3_ParamLimits

0xce3b,	// (0x00068cc3) field_cale_ev_pane_g3

0x0002,

0x05a7,	// (0x0005c42f) field_cale_ev_pane_g_ParamLimits

0x05a7,	// (0x0005c42f) field_cale_ev_pane_g

0xce53,	// (0x00068cdb) field_cale_ev_pane_t1_ParamLimits

0xce53,	// (0x00068cdb) field_cale_ev_pane_t1

0xce6a,	// (0x00068cf2) field_cale_ev_content_pane_t1_ParamLimits

0xce6a,	// (0x00068cf2) field_cale_ev_content_pane_t1

0xb6bc,	// (0x00067544) bg_button_pane_cp01

0x175b,	// (0x0005d5e3) listscroll_cale_week_pane_ParamLimits

0xaa37,	// (0x000668bf) popup_toolbar_window_cp01

0xaa5d,	// (0x000668e5) listscroll_cale_week_pane_t1_ParamLimits

0x175b,	// (0x0005d5e3) listscroll_cale_day_pane_ParamLimits

0xaa37,	// (0x000668bf) popup_toolbar_window_cp02

0xae7f,	// (0x00066d07) listscroll_cale_day_pane_t1_ParamLimits

0x175b,	// (0x0005d5e3) main_cale_month_pane_ParamLimits

0x449d,	// (0x00060325) popup_toolbar_window_cp03_ParamLimits

0x449d,	// (0x00060325) popup_toolbar_window_cp03

0x3dc9,	// (0x0005fc51) main_image_pane_g2_ParamLimits

0x3dc9,	// (0x0005fc51) main_image_pane_g2

0x3dd5,	// (0x0005fc5d) main_image_pane_g3_ParamLimits

0x3dd5,	// (0x0005fc5d) main_image_pane_g3

0x0002,

0xf4b3,	// (0x0006b33b) main_image_pane_g_ParamLimits

0xf4b3,	// (0x0006b33b) main_image_pane_g

0xb7d6,	// (0x0006765e) main_image_pane_t1_ParamLimits

0x3de1,	// (0x0005fc69) main_image_pane_t2_ParamLimits

0x3de1,	// (0x0005fc69) main_image_pane_t2

0x3df3,	// (0x0005fc7b) main_image_pane_t3_ParamLimits

0x3df3,	// (0x0005fc7b) main_image_pane_t3

0x3e05,	// (0x0005fc8d) main_image_pane_t4_ParamLimits

0x3e05,	// (0x0005fc8d) main_image_pane_t4

0x0003,

0xf4ba,	// (0x0006b342) main_image_pane_t_ParamLimits

0xf4ba,	// (0x0006b342) main_image_pane_t

0x3e17,	// (0x0005fc9f) popup_image_details_window_cp01

0x3e21,	// (0x0005fca9) popup_toobar_trans_pane_cp01_ParamLimits

0x3e21,	// (0x0005fca9) popup_toobar_trans_pane_cp01

0x43ed,	// (0x00060275) popup_image_details_window_ParamLimits

0x43ed,	// (0x00060275) popup_image_details_window

0x43fb,	// (0x00060283) popup_image_focus_window

0x473d,	// (0x000605c5) camera2_autofocus_pane_ParamLimits

0x473d,	// (0x000605c5) camera2_autofocus_pane

0x9cf5,	// (0x00065b7d) bg_popup_sub_pane_cp06

0xce88,	// (0x00068d10) popup_image_focus_window_g1

0xce90,	// (0x00068d18) popup_image_focus_window_g2

0xce98,	// (0x00068d20) popup_image_focus_window_g3

0xcea0,	// (0x00068d28) popup_image_focus_window_g4

0x0003,

0x05ae,	// (0x0005c436) popup_image_focus_window_g

0xcea8,	// (0x00068d30) popup_image_focus_window_t1

0xceb6,	// (0x00068d3e) popup_image_focus_window_t2

0xcec6,	// (0x00068d4e) popup_image_focus_window_t3

0x0002,

0x05b7,	// (0x0005c43f) popup_image_focus_window_t

0xced4,	// (0x00068d5c) camera2_autofocus_pane_g1

0xa5ae,	// (0x00066436) bg_tb_trans_pane_cp01

0xcee2,	// (0x00068d6a) popup_image_details_window_g1

0xcef5,	// (0x00068d7d) popup_image_details_window_g2

0x0002,

0x05c9,	// (0x0005c451) popup_image_details_window_g

0xcf1e,	// (0x00068da6) popup_image_details_window_t1

0xcf30,	// (0x00068db8) popup_image_details_window_t2

0xcf49,	// (0x00068dd1) popup_image_details_window_t3

0xcf5d,	// (0x00068de5) popup_image_details_window_t4

0xcf78,	// (0x00068e00) popup_image_details_window_t5

0x0004,

0x05d0,	// (0x0005c458) popup_image_details_window_t

0xa905,	// (0x0006678d) bg_calc_paper_pane_ParamLimits

0x1171,	// (0x0005cff9) grid_highlight_pane_cp013

0x14dc,	// (0x0005d364) list_calc_pane_ParamLimits

0x14ee,	// (0x0005d376) scroll_pane_cp024

0xa919,	// (0x000667a1) bg_calc_display_pane_ParamLimits

0x14f6,	// (0x0005d37e) calc_display_pane_t1_ParamLimits

0x150b,	// (0x0005d393) calc_display_pane_t2_ParamLimits

0x1520,	// (0x0005d3a8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006afd5) calc_display_pane_t_ParamLimits

0x15f9,	// (0x0005d481) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006aff2) cell_calc_pane_g

0x1602,	// (0x0005d48a) cell_calc_pane_t1

0xa978,	// (0x00066800) grid_highlight_pane_cp02_ParamLimits

0xa98e,	// (0x00066816) toolbar_button_pane_cp01_ParamLimits

0xa98e,	// (0x00066816) toolbar_button_pane_cp01

0xb81b,	// (0x000676a3) temp_image_control_pane_ParamLimits

0xb81b,	// (0x000676a3) temp_image_control_pane

0x4365,	// (0x000601ed) main_mp3_pane

0xcf92,	// (0x00068e1a) temp_image_control_pane_g1_ParamLimits

0xcf92,	// (0x00068e1a) temp_image_control_pane_g1

0xcfa0,	// (0x00068e28) temp_image_control_pane_g2_ParamLimits

0xcfa0,	// (0x00068e28) temp_image_control_pane_g2

0xcfb2,	// (0x00068e3a) temp_image_control_pane_g3_ParamLimits

0xcfb2,	// (0x00068e3a) temp_image_control_pane_g3

0x4d8f,	// (0x00060c17) temp_image_control_pane_g4_ParamLimits

0x4d8f,	// (0x00060c17) temp_image_control_pane_g4

0x0003,

0xf5d1,	// (0x0006b459) temp_image_control_pane_g_ParamLimits

0xf5d1,	// (0x0006b459) temp_image_control_pane_g

0xcf92,	// (0x00068e1a) main_mp3_pane_g1

0x4da0,	// (0x00060c28) main_mp3_pane_g2

0x0007,

0xf5da,	// (0x0006b462) main_mp3_pane_g

0xcff5,	// (0x00068e7d) main_mp3_pane_t1

0xaaef,	// (0x00066977) main_camera_pane_g8_ParamLimits

0xaaef,	// (0x00066977) main_camera_pane_g8

0x1dfa,	// (0x0005dc82) main_video_pane_g7_ParamLimits

0x1dfa,	// (0x0005dc82) main_video_pane_g7

0x4885,	// (0x0006070d) main_camera2_pane_t7_ParamLimits

0x4885,	// (0x0006070d) main_camera2_pane_t7

0xac37,	// (0x00066abf) scroll_pane_cp025_ParamLimits

0xac37,	// (0x00066abf) scroll_pane_cp025

0xac4b,	// (0x00066ad3) scroll_pane_cp026_ParamLimits

0xac4b,	// (0x00066ad3) scroll_pane_cp026

0xac5a,	// (0x00066ae2) wml_content_pane_ParamLimits

0x1171,	// (0x0005cff9) main_touch_calib_pane

0x4e44,	// (0x00060ccc) main_touch_calib_pane_g1

0x4e50,	// (0x00060cd8) main_touch_calib_pane_g2

0x4e5c,	// (0x00060ce4) main_touch_calib_pane_g3

0x4e68,	// (0x00060cf0) main_touch_calib_pane_g4

0x0003,

0xf5f8,	// (0x0006b480) main_touch_calib_pane_g

0x4e74,	// (0x00060cfc) main_touch_calib_pane_t1

0x4e8d,	// (0x00060d15) main_touch_calib_pane_t2

0x0004,

0xf601,	// (0x0006b489) main_touch_calib_pane_t

0xb3e8,	// (0x00067270) mup_progress_pane_cp02

0xb41d,	// (0x000672a5) navi_pane_g1

0xb4d8,	// (0x00067360) navi_pane_mp_t3

0x4365,	// (0x000601ed) main_mp3_pane_ParamLimits

0x44da,	// (0x00060362) navi_pane_ParamLimits

0xcf92,	// (0x00068e1a) main_mp3_pane_g1_ParamLimits

0x4da0,	// (0x00060c28) main_mp3_pane_g2_ParamLimits

0x4dac,	// (0x00060c34) main_mp3_pane_g3_ParamLimits

0x4dac,	// (0x00060c34) main_mp3_pane_g3

0x4db8,	// (0x00060c40) main_mp3_pane_g4_ParamLimits

0x4db8,	// (0x00060c40) main_mp3_pane_g4

0xcfc2,	// (0x00068e4a) main_mp3_pane_g5_ParamLimits

0xcfc2,	// (0x00068e4a) main_mp3_pane_g5

0xcfd0,	// (0x00068e58) main_mp3_pane_g6_ParamLimits

0xcfd0,	// (0x00068e58) main_mp3_pane_g6

0xcfdd,	// (0x00068e65) main_mp3_pane_g7_ParamLimits

0xcfdd,	// (0x00068e65) main_mp3_pane_g7

0xcfe9,	// (0x00068e71) main_mp3_pane_g8_ParamLimits

0xcfe9,	// (0x00068e71) main_mp3_pane_g8

0xf5da,	// (0x0006b462) main_mp3_pane_g_ParamLimits

0x4dc4,	// (0x00060c4c) main_mp3_pane_t2

0x4dd4,	// (0x00060c5c) main_mp3_pane_t3

0xd003,	// (0x00068e8b) main_mp3_pane_t4

0xd011,	// (0x00068e99) main_mp3_pane_t5

0x0005,

0xf5eb,	// (0x0006b473) main_mp3_pane_t

0xd01f,	// (0x00068ea7) mup_progress_pane_cp01

0x0dbe,	// (0x0005cc46) aid_zoom_text_secondary2

0xcdd9,	// (0x00068c61) list_cale_ev2_pane

0xcde1,	// (0x00068c69) scroll_pane_cp023_ParamLimits

0x4ee8,	// (0x00060d70) field_cale_ev2_pane_ParamLimits

0x4ee8,	// (0x00060d70) field_cale_ev2_pane

0xa095,	// (0x00065f1d) field_cale_ev2_pane_g1_ParamLimits

0xa095,	// (0x00065f1d) field_cale_ev2_pane_g1

0xa0a1,	// (0x00065f29) field_cale_ev2_pane_g2_ParamLimits

0xa0a1,	// (0x00065f29) field_cale_ev2_pane_g2

0xa0b9,	// (0x00065f41) field_cale_ev2_pane_g3_ParamLimits

0xa0b9,	// (0x00065f41) field_cale_ev2_pane_g3

0x0003,

0xf60c,	// (0x0006b494) field_cale_ev2_pane_g_ParamLimits

0xf60c,	// (0x0006b494) field_cale_ev2_pane_g

0x4f11,	// (0x00060d99) field_cale_ev2_pane_t1_ParamLimits

0x4f11,	// (0x00060d99) field_cale_ev2_pane_t1

0x4f28,	// (0x00060db0) field_cale_ev2_pane_t2_ParamLimits

0x4f28,	// (0x00060db0) field_cale_ev2_pane_t2

0x0001,

0xf615,	// (0x0006b49d) field_cale_ev2_pane_t_ParamLimits

0xf615,	// (0x0006b49d) field_cale_ev2_pane_t

0x3ca9,	// (0x0005fb31) main_postcard_pane_g5_ParamLimits

0x3ca9,	// (0x0005fb31) main_postcard_pane_g5

0x3cb7,	// (0x0005fb3f) main_postcard_pane_g6_ParamLimits

0x3cb7,	// (0x0005fb3f) main_postcard_pane_g6

0x1c44,	// (0x0005dacc) camera2_autofocus_pane_cp_ParamLimits

0x1c44,	// (0x0005dacc) camera2_autofocus_pane_cp

0x4365,	// (0x000601ed) main_mup3_pane

0x4f5c,	// (0x00060de4) main_mup3_pane_g1_ParamLimits

0x4f5c,	// (0x00060de4) main_mup3_pane_g1

0x4f7d,	// (0x00060e05) main_mup3_pane_g2_ParamLimits

0x4f7d,	// (0x00060e05) main_mup3_pane_g2

0x4ff5,	// (0x00060e7d) main_mup3_pane_g3_ParamLimits

0x4ff5,	// (0x00060e7d) main_mup3_pane_g3

0x5038,	// (0x00060ec0) main_mup3_pane_g4_ParamLimits

0x5038,	// (0x00060ec0) main_mup3_pane_g4

0x507b,	// (0x00060f03) main_mup3_pane_g5_ParamLimits

0x507b,	// (0x00060f03) main_mup3_pane_g5

0x50be,	// (0x00060f46) main_mup3_pane_g6_ParamLimits

0x50be,	// (0x00060f46) main_mup3_pane_g6

0xd047,	// (0x00068ecf) main_mup3_pane_g7_ParamLimits

0xd047,	// (0x00068ecf) main_mup3_pane_g7

0x0007,

0xf61a,	// (0x0006b4a2) main_mup3_pane_g_ParamLimits

0xf61a,	// (0x0006b4a2) main_mup3_pane_g

0x5134,	// (0x00060fbc) main_mup3_pane_t1_ParamLimits

0x5134,	// (0x00060fbc) main_mup3_pane_t1

0x51a3,	// (0x0006102b) main_mup3_pane_t2_ParamLimits

0x51a3,	// (0x0006102b) main_mup3_pane_t2

0x526c,	// (0x000610f4) main_mup3_pane_t4_ParamLimits

0x526c,	// (0x000610f4) main_mup3_pane_t4

0x52ba,	// (0x00061142) main_mup3_pane_t5_ParamLimits

0x52ba,	// (0x00061142) main_mup3_pane_t5

0x536a,	// (0x000611f2) main_mup3_pane_t6_ParamLimits

0x536a,	// (0x000611f2) main_mup3_pane_t6

0x0005,

0xf62b,	// (0x0006b4b3) main_mup3_pane_t_ParamLimits

0xf62b,	// (0x0006b4b3) main_mup3_pane_t

0x5416,	// (0x0006129e) mup3_progress_pane_ParamLimits

0x5416,	// (0x0006129e) mup3_progress_pane

0x5494,	// (0x0006131c) popup_mup3_control_window_ParamLimits

0x5494,	// (0x0006131c) popup_mup3_control_window

0xd055,	// (0x00068edd) popup_mup3_text_window

0x54ad,	// (0x00061335) mup3_progress_pane_t1

0x54cc,	// (0x00061354) mup3_progress_pane_t2

0xd05d,	// (0x00068ee5) mup3_progress_pane_t3

0x0002,

0xf638,	// (0x0006b4c0) mup3_progress_pane_t

0xd07a,	// (0x00068f02) mup_progress_pane_cp03

0x9cf5,	// (0x00065b7d) bg_tb_trans_pane_cp04

0x54eb,	// (0x00061373) mup3_volume_pane

0x54f3,	// (0x0006137b) popup_mup3_control_window_g1

0x54fc,	// (0x00061384) mup3_volume_pane_g1

0x5505,	// (0x0006138d) mup3_volume_pane_g2

0x550e,	// (0x00061396) mup3_volume_pane_g3

0x0002,

0xf63f,	// (0x0006b4c7) mup3_volume_pane_g

0x9cf5,	// (0x00065b7d) bg_tb_trans_pane_cp03

0xd08a,	// (0x00068f12) popup_mup3_text_window_g1

0xd092,	// (0x00068f1a) popup_mup3_text_window_t1

0xa961,	// (0x000667e9) list_calc_item_pane_g1_ParamLimits

0xcaa6,	// (0x0006892e) mup_volume_pane_cp_g1

0x4ea6,	// (0x00060d2e) main_touch_calib_pane_t3

0x4ebc,	// (0x00060d44) main_touch_calib_pane_t4

0x4ed2,	// (0x00060d5a) main_touch_calib_pane_t5

0x0ea6,	// (0x0005cd2e) aid_cell_size_toolbar2

0x0eae,	// (0x0005cd36) aid_popup3_width_pane

0x0db6,	// (0x0005cc3e) aid_zoom_text_msg_primary

0x1c19,	// (0x0005daa1) vorec_t7

0xa925,	// (0x000667ad) bg_calc_paper_pane_g1_ParamLimits

0xa931,	// (0x000667b9) bg_calc_paper_pane_g2_ParamLimits

0xa93d,	// (0x000667c5) bg_calc_paper_pane_g3_ParamLimits

0xa949,	// (0x000667d1) bg_calc_paper_pane_g4_ParamLimits

0xa955,	// (0x000667dd) bg_calc_paper_pane_g5_ParamLimits

0x155f,	// (0x0005d3e7) bg_calc_paper_pane_g6_ParamLimits

0x1570,	// (0x0005d3f8) bg_calc_paper_pane_g7_ParamLimits

0x1581,	// (0x0005d409) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006afdc) bg_calc_paper_pane_g_ParamLimits

0x1592,	// (0x0005d41a) calc_bg_paper_pane_g9_ParamLimits

0x1d2b,	// (0x0005dbb3) image_qvga_pane_ParamLimits

0x1d2b,	// (0x0005dbb3) image_qvga_pane

0xa854,	// (0x000666dc) bg_popup_sub_pane_cp04_ParamLimits

0xb752,	// (0x000675da) popup_mup_playback_window_g1_ParamLimits

0xb75e,	// (0x000675e6) popup_mup_playback_window_t1_ParamLimits

0xb773,	// (0x000675fb) popup_mup_playback_window_t2_ParamLimits

0x0393,	// (0x0005c21b) popup_mup_playback_window_t_ParamLimits

0x49b4,	// (0x0006083c) main_mup2_pane_g3_ParamLimits

0x49b4,	// (0x0006083c) main_mup2_pane_g3

0x20f7,	// (0x0005df7f) popup_toolbar_window_cp04

0xbb55,	// (0x000679dd) popup_call2_audio_second_window_g3_ParamLimits

0xbb55,	// (0x000679dd) popup_call2_audio_second_window_g3

0xbf5f,	// (0x00067de7) popup_call2_audio_first_window_g4_ParamLimits

0xbf5f,	// (0x00067de7) popup_call2_audio_first_window_g4

0xc5de,	// (0x00068466) popup_call2_audio_in_window_g4_ParamLimits

0xc5de,	// (0x00068466) popup_call2_audio_in_window_g4

0x3dbc,	// (0x0005fc44) aid_area_sk_bg_cut_ParamLimits

0x3dbc,	// (0x0005fc44) aid_area_sk_bg_cut

0xb788,	// (0x00067610) aid_area_sk_bg_cut_2_ParamLimits

0xb788,	// (0x00067610) aid_area_sk_bg_cut_2

0x4d35,	// (0x00060bbd) aid_placing_details_win

0x4d3d,	// (0x00060bc5) aid_placing_details_win_2

0xced4,	// (0x00068d5c) camera2_autofocus_pane_g1_ParamLimits

0x10fd,	// (0x0005cf85) popup_fixed_preview_cale_window_ParamLimits

0x10fd,	// (0x0005cf85) popup_fixed_preview_cale_window

0xb556,	// (0x000673de) navi_slider_pane_g3

0xb55f,	// (0x000673e7) navi_slider_pane_g4

0xb568,	// (0x000673f0) navi_slider_pane_g5

0xb556,	// (0x000673de) navi_slider_pane_g6

0x3648,	// (0x0005f4d0) navi_slider_pane_g7

0xb689,	// (0x00067511) mup_scale_pane_g3

0xb692,	// (0x0006751a) mup_scale_pane_g4

0xb69b,	// (0x00067523) mup_scale_pane_g5

0x3a89,	// (0x0005f911) mup_scale_pane_g6

0x3a92,	// (0x0005f91a) mup_scale_pane_g7

0xb556,	// (0x000673de) cams2_slider_pane_g3

0xcb28,	// (0x000689b0) cams2_slider_pane_g4

0x4c8d,	// (0x00060b15) cams2_slider_pane_g5

0xb556,	// (0x000673de) cams2_slider_pane_g6

0x4c95,	// (0x00060b1d) cams2_slider_pane_g7

0xcd5f,	// (0x00068be7) camera2_autofocus_pane_cp_g1

0xc93f,	// (0x000687c7) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93f,	// (0x000687c7) bg_popup_preview_window_pane_cp02

0xd0a0,	// (0x00068f28) list_fp_cale_pane_ParamLimits

0xd0a0,	// (0x00068f28) list_fp_cale_pane

0xd0ac,	// (0x00068f34) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0ac,	// (0x00068f34) popup_fixed_preview_cale_window_t1

0x5517,	// (0x0006139f) popup_fixed_preview_cale_window_t2_ParamLimits

0x5517,	// (0x0006139f) popup_fixed_preview_cale_window_t2

0x552c,	// (0x000613b4) popup_fixed_preview_cale_window_t3_ParamLimits

0x552c,	// (0x000613b4) popup_fixed_preview_cale_window_t3

0x0002,

0xf646,	// (0x0006b4ce) popup_fixed_preview_cale_window_t_ParamLimits

0xf646,	// (0x0006b4ce) popup_fixed_preview_cale_window_t

0x5541,	// (0x000613c9) list_single_fp_cale_pane_ParamLimits

0x5541,	// (0x000613c9) list_single_fp_cale_pane

0xd0ca,	// (0x00068f52) list_single_fp_cale_pane_g1_ParamLimits

0xd0ca,	// (0x00068f52) list_single_fp_cale_pane_g1

0xd0d6,	// (0x00068f5e) list_single_fp_cale_pane_g2_ParamLimits

0xd0d6,	// (0x00068f5e) list_single_fp_cale_pane_g2

0x0002,

0x0662,	// (0x0005c4ea) list_single_fp_cale_pane_g_ParamLimits

0x0662,	// (0x0005c4ea) list_single_fp_cale_pane_g

0xd0ef,	// (0x00068f77) list_single_fp_cale_pane_t1_ParamLimits

0xd0ef,	// (0x00068f77) list_single_fp_cale_pane_t1

0xd101,	// (0x00068f89) list_single_fp_cale_pane_t2_ParamLimits

0xd101,	// (0x00068f89) list_single_fp_cale_pane_t2

0x0001,

0x0669,	// (0x0005c4f1) list_single_fp_cale_pane_t_ParamLimits

0x0669,	// (0x0005c4f1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1171,	// (0x0005cff9) main_dialer_pane

0x5554,	// (0x000613dc) aid_cell_size_keypad

0x555e,	// (0x000613e6) dialer_ne_pane

0x5568,	// (0x000613f0) grid_dialer_command_1_pane

0x5570,	// (0x000613f8) grid_dialer_command_2_pane

0x5578,	// (0x00061400) grid_dialer_keypad_pane

0x558a,	// (0x00061412) bg_popup_call_pane_cp06_ParamLimits

0x558a,	// (0x00061412) bg_popup_call_pane_cp06

0x5596,	// (0x0006141e) dialer_ne_clear_pane_ParamLimits

0x5596,	// (0x0006141e) dialer_ne_clear_pane

0xd134,	// (0x00068fbc) dialer_ne_pane_g1

0xd13c,	// (0x00068fc4) dialer_ne_pane_t1_ParamLimits

0xd13c,	// (0x00068fc4) dialer_ne_pane_t1

0x55a2,	// (0x0006142a) dialer_ne_pane_t2_ParamLimits

0x55a2,	// (0x0006142a) dialer_ne_pane_t2

0x55bf,	// (0x00061447) dialer_ne_pane_t3_ParamLimits

0x55bf,	// (0x00061447) dialer_ne_pane_t3

0x0002,

0xf64d,	// (0x0006b4d5) dialer_ne_pane_t_ParamLimits

0xf64d,	// (0x0006b4d5) dialer_ne_pane_t

0x55e3,	// (0x0006146b) dialer_ne_pane_t3_copy1_ParamLimits

0x55e3,	// (0x0006146b) dialer_ne_pane_t3_copy1

0x5607,	// (0x0006148f) cell_dialer_keypad_pane_ParamLimits

0x5607,	// (0x0006148f) cell_dialer_keypad_pane

0x561e,	// (0x000614a6) cell_dialer_command_1_pane_ParamLimits

0x561e,	// (0x000614a6) cell_dialer_command_1_pane

0x5634,	// (0x000614bc) cell_dialer_command_2_pane_ParamLimits

0x5634,	// (0x000614bc) cell_dialer_command_2_pane

0xd14e,	// (0x00068fd6) bg_button_pane_cp02_ParamLimits

0xd14e,	// (0x00068fd6) bg_button_pane_cp02

0x5643,	// (0x000614cb) cell_dialer_keypad_pane_g1_ParamLimits

0x5643,	// (0x000614cb) cell_dialer_keypad_pane_g1

0xd14e,	// (0x00068fd6) bg_button_pane_cp03_ParamLimits

0xd14e,	// (0x00068fd6) bg_button_pane_cp03

0x5658,	// (0x000614e0) cell_dialer_command_1_pane_g1_ParamLimits

0x5658,	// (0x000614e0) cell_dialer_command_1_pane_g1

0xd15a,	// (0x00068fe2) bg_button_pane_cp04

0x566c,	// (0x000614f4) cell_dialer_command_2_pane_g1

0xaae7,	// (0x0006696f) bg_button_pane_cp06

0xd162,	// (0x00068fea) dialer_ne_clear_pane_g1

0xb429,	// (0x000672b1) navi_pane_g2

0xb457,	// (0x000672df) navi_pane_g3

0x0002,

0x0296,	// (0x0005c11e) navi_pane_g

0xb4e6,	// (0x0006736e) navi_pane_mv_g2

0xb50d,	// (0x00067395) navi_pane_mv_g5

0x3613,	// (0x0005f49b) navi_pane_mv_t1

0xa919,	// (0x000667a1) main_clock2_pane

0xe65c,	// (0x0006a4e4) main_clock2_list_pane_ParamLimits

0xe65c,	// (0x0006a4e4) main_clock2_list_pane

0x56c8,	// (0x00061550) main_clock2_pane_t1_ParamLimits

0x56c8,	// (0x00061550) main_clock2_pane_t1

0x56f6,	// (0x0006157e) main_clock2_pane_t2_ParamLimits

0x56f6,	// (0x0006157e) main_clock2_pane_t2

0x0004,

0xf654,	// (0x0006b4dc) main_clock2_pane_t_ParamLimits

0xf654,	// (0x0006b4dc) main_clock2_pane_t

0x575b,	// (0x000615e3) popup_clock_analogue_window_cp03_ParamLimits

0x575b,	// (0x000615e3) popup_clock_analogue_window_cp03

0x5779,	// (0x00061601) popup_clock_digital_window_cp02_ParamLimits

0x5779,	// (0x00061601) popup_clock_digital_window_cp02

0x57ee,	// (0x00061676) main_clock2_list_single_pane_ParamLimits

0x57ee,	// (0x00061676) main_clock2_list_single_pane

0xaae7,	// (0x0006696f) list_highlight_pane_cp05

0xd1a0,	// (0x00069028) main_clock2_list_single_pane_t1

0x20f7,	// (0x0005df7f) popup_toolbar_window_cp04_ParamLimits

0x4d5f,	// (0x00060be7) camera2_autofocus_pane_g2_ParamLimits

0x4d5f,	// (0x00060be7) camera2_autofocus_pane_g2

0x4d6b,	// (0x00060bf3) camera2_autofocus_pane_g3_ParamLimits

0x4d6b,	// (0x00060bf3) camera2_autofocus_pane_g3

0x4d77,	// (0x00060bff) camera2_autofocus_pane_g4_ParamLimits

0x4d77,	// (0x00060bff) camera2_autofocus_pane_g4

0x4d83,	// (0x00060c0b) camera2_autofocus_pane_g5_ParamLimits

0x4d83,	// (0x00060c0b) camera2_autofocus_pane_g5

0x0004,

0xf5c6,	// (0x0006b44e) camera2_autofocus_pane_g_ParamLimits

0xf5c6,	// (0x0006b44e) camera2_autofocus_pane_g

0xd027,	// (0x00068eaf) camera2_autofocus_pane_cp_g2

0xd02f,	// (0x00068eb7) camera2_autofocus_pane_cp_g3

0xd037,	// (0x00068ebf) camera2_autofocus_pane_cp_g4

0xd03f,	// (0x00068ec7) camera2_autofocus_pane_cp_g5

0x0004,

0x0624,	// (0x0005c4ac) camera2_autofocus_pane_cp_g

0x5582,	// (0x0006140a) popup_dialer_spcha_window

0x9cf5,	// (0x00065b7d) bg_popup_sub_pane_cp07

0xd1ae,	// (0x00069036) list_spcha_pane

0xd1b6,	// (0x0006903e) list_single_spcha_pane_ParamLimits

0xd1b6,	// (0x0006903e) list_single_spcha_pane

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp06

0xd1c7,	// (0x0006904f) list_single_spcha_pane_t1

0xc388,	// (0x00068210) popup_call2_audio_out_window_g4_ParamLimits

0xc388,	// (0x00068210) popup_call2_audio_out_window_g4

0x1171,	// (0x0005cff9) main_imed2_pane

0x4403,	// (0x0006028b) popup_imed_adjust2_window

0x4416,	// (0x0006029e) popup_imed_trans_window_ParamLimits

0x4416,	// (0x0006029e) popup_imed_trans_window

0xcb91,	// (0x00068a19) popup_blid_sat_info2_window_t1

0xcb9f,	// (0x00068a27) popup_blid_sat_info2_window_t2

0x000a,

0x0553,	// (0x0005c3db) popup_blid_sat_info2_window_t

0x58a3,	// (0x0006172b) aid_size_cell_colour_35

0x58bd,	// (0x00061745) aid_size_cell_colour_112

0x58d4,	// (0x0006175c) aid_size_cell_effect

0xa5ae,	// (0x00066436) bg_tb_trans_pane_cp02

0xb084,	// (0x00066f0c) heading_imed_pane

0x58ee,	// (0x00061776) listscroll_imed_pane

0xd1d5,	// (0x0006905d) heading_imed_pane_g1

0xd1dd,	// (0x00069065) heading_imed_pane_t1

0xd1eb,	// (0x00069073) grid_imed_colour_35_pane_ParamLimits

0xd1eb,	// (0x00069073) grid_imed_colour_35_pane

0x58fa,	// (0x00061782) grid_imed_effect_pane

0xd202,	// (0x0006908a) list_imed_aspect_pane

0x590a,	// (0x00061792) scroll_pane_cp027_ParamLimits

0x590a,	// (0x00061792) scroll_pane_cp027

0x5916,	// (0x0006179e) cell_imed_effect_pane_ParamLimits

0x5916,	// (0x0006179e) cell_imed_effect_pane

0xd20a,	// (0x00069092) cell_imed_colour_pane_ParamLimits

0xd20a,	// (0x00069092) cell_imed_colour_pane

0xd24c,	// (0x000690d4) cell_imed_colour_pane_g1_ParamLimits

0xd24c,	// (0x000690d4) cell_imed_colour_pane_g1

0xd25d,	// (0x000690e5) hgihlgiht_grid_pane_cp016_ParamLimits

0xd25d,	// (0x000690e5) hgihlgiht_grid_pane_cp016

0x592e,	// (0x000617b6) cell_imed_effect_pane_g1

0x5936,	// (0x000617be) grid_highlight_pane_cp017

0xd26e,	// (0x000690f6) list_imed_single_pane_ParamLimits

0xd26e,	// (0x000690f6) list_imed_single_pane

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp07

0xd283,	// (0x0006910b) list_imed_aspect_pane_comp1_t1

0xc94b,	// (0x000687d3) bg_tb_trans_pane_cp05

0xd2a5,	// (0x0006912d) popup_imed_adjust2_window_g1

0xd2cc,	// (0x00069154) popup_imed_adjust2_window_t1

0xd2e4,	// (0x0006916c) slider_imed_adjust_pane

0xd2f8,	// (0x00069180) slider_imed_adjust_pane_g1

0xd308,	// (0x00069190) slider_imed_adjust_pane_g2

0xd318,	// (0x000691a0) slider_imed_adjust_pane_g3

0xd329,	// (0x000691b1) slider_imed_adjust_pane_g4

0x0003,

0x0697,	// (0x0005c51f) slider_imed_adjust_pane_g

0x593f,	// (0x000617c7) aid_size_cell_clipart2

0x594b,	// (0x000617d3) grid_imed_clipart_pane

0xd33a,	// (0x000691c2) scroll_pane_cp031

0x5955,	// (0x000617dd) cell_imed_clipart_pane_ParamLimits

0x5955,	// (0x000617dd) cell_imed_clipart_pane

0x5977,	// (0x000617ff) cell_imed_clipart_pane_g1

0x9cf5,	// (0x00065b7d) grid_highlight_pane_cp014

0x56aa,	// (0x00061532) main_clock2_pane_g1_ParamLimits

0x56aa,	// (0x00061532) main_clock2_pane_g1

0x5795,	// (0x0006161d) aid_call2_pane_cp10

0x57a7,	// (0x0006162f) aid_call_pane_cp10

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g1

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g2

0x57b9,	// (0x00061641) popup_clock_analogue_window_cp10_g3

0x57b9,	// (0x00061641) popup_clock_analogue_window_cp10_g4

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g5

0x0004,

0xf65f,	// (0x0006b4e7) popup_clock_analogue_window_cp10_g

0x57cf,	// (0x00061657) popup_clock_analogue_window_cp10_t1

0x5800,	// (0x00061688) clock_digital_number_pane_cp10_ParamLimits

0x5800,	// (0x00061688) clock_digital_number_pane_cp10

0x581a,	// (0x000616a2) clock_digital_number_pane_cp11_ParamLimits

0x581a,	// (0x000616a2) clock_digital_number_pane_cp11

0x5834,	// (0x000616bc) clock_digital_number_pane_cp12_ParamLimits

0x5834,	// (0x000616bc) clock_digital_number_pane_cp12

0x584e,	// (0x000616d6) clock_digital_number_pane_cp13_ParamLimits

0x584e,	// (0x000616d6) clock_digital_number_pane_cp13

0x5868,	// (0x000616f0) clock_digital_separator_pane_cp10_ParamLimits

0x5868,	// (0x000616f0) clock_digital_separator_pane_cp10

0x5882,	// (0x0006170a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5882,	// (0x0006170a) popup_clock_digital_window_cp02_t1

0xa84c,	// (0x000666d4) clock_digital_number_pane_cp10_g1

0xa84c,	// (0x000666d4) clock_digital_number_pane_cp10_g2

0x0001,

0xf66a,	// (0x0006b4f2) clock_digital_number_pane_cp10_g

0xa84c,	// (0x000666d4) clock_digital_separator_pane_cp10_g1

0xa84c,	// (0x000666d4) clock_digital_separator_pane_g2_cp10

0xb515,	// (0x0006739d) navi_pane_vded_g4

0xb51e,	// (0x000673a6) navi_pane_vded_g5

0xb527,	// (0x000673af) navi_pane_vded_t1

0x1171,	// (0x0005cff9) main_vded_pane

0x5980,	// (0x00061808) main_vded_pane_g1

0x598c,	// (0x00061814) main_vded_pane_g2

0x5996,	// (0x0006181e) main_vded_pane_g3

0x0002,

0xf66f,	// (0x0006b4f7) main_vded_pane_g

0x59a0,	// (0x00061828) main_vded_pane_t1

0x59ae,	// (0x00061836) main_vded_pane_t2

0x0001,

0xf676,	// (0x0006b4fe) main_vded_pane_t

0x59bc,	// (0x00061844) vded_slider_pane

0x59c6,	// (0x0006184e) vded_video_pane

0xd342,	// (0x000691ca) vded_video_pane_g1

0x59d0,	// (0x00061858) vded_video_pane_g2

0xcd5f,	// (0x00068be7) vded_video_pane_g3

0x0002,

0xf67b,	// (0x0006b503) vded_video_pane_g

0xd34c,	// (0x000691d4) vded_slider_pane_g1

0xcaa6,	// (0x0006892e) vded_slider_pane_g2

0xd355,	// (0x000691dd) vded_slider_pane_g3

0xd35e,	// (0x000691e6) vded_slider_pane_g4

0xd367,	// (0x000691ef) vded_slider_pane_g5

0x0004,

0x06b8,	// (0x0005c540) vded_slider_pane_g

0x5486,	// (0x0006130e) mup3_rocker_pane_ParamLimits

0x5486,	// (0x0006130e) mup3_rocker_pane

0x59d9,	// (0x00061861) mup3_control_keys_pane_g1

0x59e1,	// (0x00061869) mup3_control_keys_pane_g2

0x59e9,	// (0x00061871) mup3_control_keys_pane_g3

0x59f1,	// (0x00061879) mup3_control_keys_pane_g4

0x0003,

0xf682,	// (0x0006b50a) mup3_control_keys_pane_g

0x1125,	// (0x0005cfad) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1125,	// (0x0005cfad) popup_toolbar2_fixed_window_cp01

0x54a0,	// (0x00061328) popup_toolbar2_fixed_window_cp02_ParamLimits

0x54a0,	// (0x00061328) popup_toolbar2_fixed_window_cp02

0xbcc7,	// (0x00067b4f) popup_call2_audio_second_window_t4_ParamLimits

0xbcc7,	// (0x00067b4f) popup_call2_audio_second_window_t4

0xc1f5,	// (0x0006807d) popup_call2_audio_first_window_t6_ParamLimits

0xc1f5,	// (0x0006807d) popup_call2_audio_first_window_t6

0xc48b,	// (0x00068313) popup_call2_audio_out_window_t6_ParamLimits

0xc48b,	// (0x00068313) popup_call2_audio_out_window_t6

0x1171,	// (0x0005cff9) main_vitu_pane

0x5a01,	// (0x00061889) aid_size_cell_itu_ParamLimits

0x5a01,	// (0x00061889) aid_size_cell_itu

0xe65c,	// (0x0006a4e4) bg_popup_window_pane_cp08_ParamLimits

0xe65c,	// (0x0006a4e4) bg_popup_window_pane_cp08

0x5a0f,	// (0x00061897) field_vitu_entry_pane_ParamLimits

0x5a0f,	// (0x00061897) field_vitu_entry_pane

0x5a1e,	// (0x000618a6) grid_vitu_function_pane_ParamLimits

0x5a1e,	// (0x000618a6) grid_vitu_function_pane

0x5a2e,	// (0x000618b6) grid_vitu_itu_pane_ParamLimits

0x5a2e,	// (0x000618b6) grid_vitu_itu_pane

0x5a3e,	// (0x000618c6) cell_vitu_itu_pane_ParamLimits

0x5a3e,	// (0x000618c6) cell_vitu_itu_pane

0x5a53,	// (0x000618db) cell_vitu_function_pane_ParamLimits

0x5a53,	// (0x000618db) cell_vitu_function_pane

0xa5ae,	// (0x00066436) bg_popup_sub_pane_cp08_ParamLimits

0xa5ae,	// (0x00066436) bg_popup_sub_pane_cp08

0x5a65,	// (0x000618ed) field_vitu_entry_pane_t1_ParamLimits

0x5a65,	// (0x000618ed) field_vitu_entry_pane_t1

0xd388,	// (0x00069210) field_vitu_entry_pane_t2_ParamLimits

0xd388,	// (0x00069210) field_vitu_entry_pane_t2

0x0001,

0xf68b,	// (0x0006b513) field_vitu_entry_pane_t_ParamLimits

0xf68b,	// (0x0006b513) field_vitu_entry_pane_t

0xd3a5,	// (0x0006922d) bg_button_pane_cp05_ParamLimits

0xd3a5,	// (0x0006922d) bg_button_pane_cp05

0x5a81,	// (0x00061909) cell_vitu_itu_pane_g1

0x5a99,	// (0x00061921) cell_vitu_itu_pane_t1_ParamLimits

0x5a99,	// (0x00061921) cell_vitu_itu_pane_t1

0x5aab,	// (0x00061933) cell_vitu_itu_pane_t2_ParamLimits

0x5aab,	// (0x00061933) cell_vitu_itu_pane_t2

0x0002,

0xf690,	// (0x0006b518) cell_vitu_itu_pane_t_ParamLimits

0xf690,	// (0x0006b518) cell_vitu_itu_pane_t

0xd3b3,	// (0x0006923b) bg_button_pane_cp07

0x5ae0,	// (0x00061968) cell_vitu_function_pane_g1

0x1403,	// (0x0005d28b) main_calc_pane_g1

0x0ee2,	// (0x0005cd6a) aid_visual_content_pane

0x1171,	// (0x0005cff9) main_vradio_pane

0x5ae9,	// (0x00061971) main_vradio_pane_g1_ParamLimits

0x5ae9,	// (0x00061971) main_vradio_pane_g1

0xd3bd,	// (0x00069245) main_vradio_pane_g2_ParamLimits

0xd3bd,	// (0x00069245) main_vradio_pane_g2

0x0001,

0xf697,	// (0x0006b51f) main_vradio_pane_g_ParamLimits

0xf697,	// (0x0006b51f) main_vradio_pane_g

0x5af9,	// (0x00061981) main_vradio_pane_t1_ParamLimits

0x5af9,	// (0x00061981) main_vradio_pane_t1

0x5b0b,	// (0x00061993) main_vradio_pane_t2_ParamLimits

0x5b0b,	// (0x00061993) main_vradio_pane_t2

0xd3ca,	// (0x00069252) main_vradio_pane_t3_ParamLimits

0xd3ca,	// (0x00069252) main_vradio_pane_t3

0x0002,

0xf69c,	// (0x0006b524) main_vradio_pane_t_ParamLimits

0xf69c,	// (0x0006b524) main_vradio_pane_t

0x5b1d,	// (0x000619a5) vradio_rocker_control_pane_ParamLimits

0x5b1d,	// (0x000619a5) vradio_rocker_control_pane

0x5b29,	// (0x000619b1) vradio_station_info_pane_ParamLimits

0x5b29,	// (0x000619b1) vradio_station_info_pane

0xd3de,	// (0x00069266) vradio_frequency_info_pane_ParamLimits

0xd3de,	// (0x00069266) vradio_frequency_info_pane

0xcd5f,	// (0x00068be7) vradio_station_info_pane_g1

0xd3ed,	// (0x00069275) vradio_station_info_pane_t1_ParamLimits

0xd3ed,	// (0x00069275) vradio_station_info_pane_t1

0xd40f,	// (0x00069297) vradio_station_info_pane_t2_ParamLimits

0xd40f,	// (0x00069297) vradio_station_info_pane_t2

0x0001,

0x06e9,	// (0x0005c571) vradio_station_info_pane_t_ParamLimits

0x06e9,	// (0x0005c571) vradio_station_info_pane_t

0xd421,	// (0x000692a9) vradio_tuning_pane

0xd429,	// (0x000692b1) vradio_rocker_control_pane_g1

0xd431,	// (0x000692b9) vradio_rocker_control_pane_g2

0xd439,	// (0x000692c1) vradio_rocker_control_pane_g3

0xd441,	// (0x000692c9) vradio_rocker_control_pane_g4

0xd449,	// (0x000692d1) vradio_rocker_control_pane_g5

0x0004,

0x06ee,	// (0x0005c576) vradio_rocker_control_pane_g

0x5b38,	// (0x000619c0) vradio_frequency_info_pane_g1

0xd451,	// (0x000692d9) vradio_frequency_info_pane_t1_ParamLimits

0xd451,	// (0x000692d9) vradio_frequency_info_pane_t1

0x5b42,	// (0x000619ca) vradio_tuning_pane_g1

0x5b4b,	// (0x000619d3) vradio_tuning_pane_t1

0x0f2b,	// (0x0005cdb3) area_side_right_pane_ParamLimits

0x0f2b,	// (0x0005cdb3) area_side_right_pane

0xc906,	// (0x0006878e) status_small_pane_g1

0xc90e,	// (0x00068796) status_small_pane_g2

0xc917,	// (0x0006879f) status_small_pane_g3

0xc920,	// (0x000687a8) status_small_pane_g4

0x0003,

0x04a9,	// (0x0005c331) status_small_pane_g

0xc929,	// (0x000687b1) status_small_pane_t1

0x1171,	// (0x0005cff9) main_video3_pane

0xd465,	// (0x000692ed) cams_zoom_vslider_pane

0xd46d,	// (0x000692f5) image3_wide_pane_ParamLimits

0xd46d,	// (0x000692f5) image3_wide_pane

0xd487,	// (0x0006930f) image3_wide_small_pane

0xd493,	// (0x0006931b) main_video3_pane_g1_ParamLimits

0xd493,	// (0x0006931b) main_video3_pane_g1

0xd4af,	// (0x00069337) main_video3_pane_g2_ParamLimits

0xd4af,	// (0x00069337) main_video3_pane_g2

0x0001,

0x06f9,	// (0x0005c581) main_video3_pane_g_ParamLimits

0x06f9,	// (0x0005c581) main_video3_pane_g

0xd4cb,	// (0x00069353) main_video3_pane_t1_ParamLimits

0xd4cb,	// (0x00069353) main_video3_pane_t1

0xd4f6,	// (0x0006937e) main_video3_pane_t2_ParamLimits

0xd4f6,	// (0x0006937e) main_video3_pane_t2

0xd521,	// (0x000693a9) main_video3_pane_t3_ParamLimits

0xd521,	// (0x000693a9) main_video3_pane_t3

0x0002,

0x06fe,	// (0x0005c586) main_video3_pane_t_ParamLimits

0x06fe,	// (0x0005c586) main_video3_pane_t

0xd54e,	// (0x000693d6) cams_zoom_vslider_pane_g1

0xd557,	// (0x000693df) cams_zoom_vslider_pane_g2

0x0001,

0x0705,	// (0x0005c58d) cams_zoom_vslider_pane_g

0xd55f,	// (0x000693e7) small_slider_vertical_pane

0xcd5f,	// (0x00068be7) small_slider_vertical_pane_g1

0xcd5f,	// (0x00068be7) small_slider_vertical_pane_g2

0xd567,	// (0x000693ef) small_slider_vertical_pane_g3

0x0002,

0x070a,	// (0x0005c592) small_slider_vertical_pane_g

0x1171,	// (0x0005cff9) main_hwr_training_pane

0xd570,	// (0x000693f8) hwr_training_instruct_pane_ParamLimits

0xd570,	// (0x000693f8) hwr_training_instruct_pane

0x5b5a,	// (0x000619e2) hwr_training_navi_pane_ParamLimits

0x5b5a,	// (0x000619e2) hwr_training_navi_pane

0x5b74,	// (0x000619fc) hwr_training_write_pane_ParamLimits

0x5b74,	// (0x000619fc) hwr_training_write_pane

0x9cf5,	// (0x00065b7d) bg_frame_shadow_pane

0xd5a7,	// (0x0006942f) hwr_training_write_pane_g1

0xd5af,	// (0x00069437) hwr_training_write_pane_g2

0xd5b7,	// (0x0006943f) hwr_training_write_pane_g3

0xd5bf,	// (0x00069447) hwr_training_write_pane_g4

0xd5c7,	// (0x0006944f) hwr_training_write_pane_g5

0xd5cf,	// (0x00069457) hwr_training_write_pane_g6

0xd5d7,	// (0x0006945f) hwr_training_write_pane_g7

0x0006,

0x0711,	// (0x0005c599) hwr_training_write_pane_g

0x5bac,	// (0x00061a34) hwr_training_navi_pane_g1_ParamLimits

0x5bac,	// (0x00061a34) hwr_training_navi_pane_g1

0x5bbe,	// (0x00061a46) hwr_training_navi_pane_g2_ParamLimits

0x5bbe,	// (0x00061a46) hwr_training_navi_pane_g2

0x5bd0,	// (0x00061a58) hwr_training_navi_pane_g3_ParamLimits

0x5bd0,	// (0x00061a58) hwr_training_navi_pane_g3

0x5be0,	// (0x00061a68) hwr_training_navi_pane_g4_ParamLimits

0x5be0,	// (0x00061a68) hwr_training_navi_pane_g4

0x0004,

0xf6a3,	// (0x0006b52b) hwr_training_navi_pane_g_ParamLimits

0xf6a3,	// (0x0006b52b) hwr_training_navi_pane_g

0x5bfa,	// (0x00061a82) hwr_training_navi_pane_t1

0x5c08,	// (0x00061a90) list_single_hwr_training_instruct_pane_ParamLimits

0x5c08,	// (0x00061a90) list_single_hwr_training_instruct_pane

0xd5df,	// (0x00069467) list_single_hwr_training_instruct_pane_t1

0xcc9f,	// (0x00068b27) bg_frame_shadow_pane_g1

0xd5ee,	// (0x00069476) bg_frame_shadow_pane_g2

0xd5f6,	// (0x0006947e) bg_frame_shadow_pane_g3

0xd5fe,	// (0x00069486) bg_frame_shadow_pane_g4

0xd606,	// (0x0006948e) bg_frame_shadow_pane_g5

0xd60e,	// (0x00069496) bg_frame_shadow_pane_g6

0xd616,	// (0x0006949e) bg_frame_shadow_pane_g7

0xa9db,	// (0x00066863) bg_frame_shadow_pane_g8

0x0007,

0xf6ae,	// (0x0006b536) bg_frame_shadow_pane_g

0x1171,	// (0x0005cff9) main_video_tele_dialer_pane

0x5c2d,	// (0x00061ab5) aid_size_cell_video_keypad_ParamLimits

0x5c2d,	// (0x00061ab5) aid_size_cell_video_keypad

0x5c3d,	// (0x00061ac5) grid_video_dialer_keypad_pane_ParamLimits

0x5c3d,	// (0x00061ac5) grid_video_dialer_keypad_pane

0x5c71,	// (0x00061af9) video_down_pane_cp_ParamLimits

0x5c71,	// (0x00061af9) video_down_pane_cp

0x5c9b,	// (0x00061b23) cell_video_dialer_keypad_pane_ParamLimits

0x5c9b,	// (0x00061b23) cell_video_dialer_keypad_pane

0xd61e,	// (0x000694a6) bg_button_pane_cp08_ParamLimits

0xd61e,	// (0x000694a6) bg_button_pane_cp08

0x5cb0,	// (0x00061b38) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cb0,	// (0x00061b38) cell_video_dialer_keypad_pane_g1

0x547a,	// (0x00061302) mup3_rocker2_pane_ParamLimits

0x547a,	// (0x00061302) mup3_rocker2_pane

0xcd5f,	// (0x00068be7) mup3_rocker2_pane_g1

0x4373,	// (0x000601fb) main_dialer2_pane

0x1171,	// (0x0005cff9) main_mp4_pane

0x5d05,	// (0x00061b8d) main_mp4_pane_g1_ParamLimits

0x5d05,	// (0x00061b8d) main_mp4_pane_g1

0x5d13,	// (0x00061b9b) main_mp4_pane_g2_ParamLimits

0x5d13,	// (0x00061b9b) main_mp4_pane_g2

0x5d21,	// (0x00061ba9) main_mp4_pane_g3_ParamLimits

0x5d21,	// (0x00061ba9) main_mp4_pane_g3

0x5d66,	// (0x00061bee) main_mp4_pane_g4_ParamLimits

0x5d66,	// (0x00061bee) main_mp4_pane_g4

0x5d94,	// (0x00061c1c) main_mp4_pane_g5_ParamLimits

0x5d94,	// (0x00061c1c) main_mp4_pane_g5

0x0007,

0xf6ce,	// (0x0006b556) main_mp4_pane_g_ParamLimits

0xf6ce,	// (0x0006b556) main_mp4_pane_g

0x5e08,	// (0x00061c90) main_mp4_pane_t1_ParamLimits

0x5e08,	// (0x00061c90) main_mp4_pane_t1

0x5e64,	// (0x00061cec) main_mp4_pane_t2_ParamLimits

0x5e64,	// (0x00061cec) main_mp4_pane_t2

0xd62a,	// (0x000694b2) main_mp4_pane_t3_ParamLimits

0xd62a,	// (0x000694b2) main_mp4_pane_t3

0x5eb6,	// (0x00061d3e) main_mp4_pane_t4_ParamLimits

0x5eb6,	// (0x00061d3e) main_mp4_pane_t4

0x0003,

0xf6df,	// (0x0006b567) main_mp4_pane_t_ParamLimits

0xf6df,	// (0x0006b567) main_mp4_pane_t

0x5efa,	// (0x00061d82) mp4_progress_pane_ParamLimits

0x5efa,	// (0x00061d82) mp4_progress_pane

0x5f44,	// (0x00061dcc) mp4_rocker_pane_ParamLimits

0x5f44,	// (0x00061dcc) mp4_rocker_pane

0xd658,	// (0x000694e0) mp4_progress_pane_t1

0xd671,	// (0x000694f9) mp4_progress_pane_t2

0x0001,

0x0765,	// (0x0005c5ed) mp4_progress_pane_t

0xd68a,	// (0x00069512) mup_progress_pane_cp04

0xd944,	// (0x000697cc) mp4_rocker_pane_g1

0x5f64,	// (0x00061dec) aid_cell_size_keypad2_ParamLimits

0x5f64,	// (0x00061dec) aid_cell_size_keypad2

0x5f74,	// (0x00061dfc) dialer2_ne_pane_ParamLimits

0x5f74,	// (0x00061dfc) dialer2_ne_pane

0x5f82,	// (0x00061e0a) grid_dialer2_keypad_pane_ParamLimits

0x5f82,	// (0x00061e0a) grid_dialer2_keypad_pane

0xdd93,	// (0x00069c1b) bg_popup_call_pane_cp07_ParamLimits

0xdd93,	// (0x00069c1b) bg_popup_call_pane_cp07

0x5f92,	// (0x00061e1a) dialer2_ne_pane_t1_ParamLimits

0x5f92,	// (0x00061e1a) dialer2_ne_pane_t1

0x5fb7,	// (0x00061e3f) cell_dialer2_keypad_pane_ParamLimits

0x5fb7,	// (0x00061e3f) cell_dialer2_keypad_pane

0xd6af,	// (0x00069537) bg_button_pane_pane_cp04_ParamLimits

0xd6af,	// (0x00069537) bg_button_pane_pane_cp04

0x5fcc,	// (0x00061e54) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fcc,	// (0x00061e54) cell_dialer2_keypad_pane_g1

0x1fb9,	// (0x0005de41) aid_placing_vt_set_content_ParamLimits

0x1fb9,	// (0x0005de41) aid_placing_vt_set_content

0x1fe5,	// (0x0005de6d) aid_placing_vt_set_title_ParamLimits

0x1fe5,	// (0x0005de6d) aid_placing_vt_set_title

0x1171,	// (0x0005cff9) main_image3_pane

0x6066,	// (0x00061eee) area_side_right_pane_cp01_ParamLimits

0x6066,	// (0x00061eee) area_side_right_pane_cp01

0x6093,	// (0x00061f1b) main_image3_pane_g1_ParamLimits

0x6093,	// (0x00061f1b) main_image3_pane_g1

0x60a1,	// (0x00061f29) main_image3_pane_g2_ParamLimits

0x60a1,	// (0x00061f29) main_image3_pane_g2

0x60ba,	// (0x00061f42) main_image3_pane_g3_ParamLimits

0x60ba,	// (0x00061f42) main_image3_pane_g3

0x60d3,	// (0x00061f5b) main_image3_pane_g4_ParamLimits

0x60d3,	// (0x00061f5b) main_image3_pane_g4

0x0003,

0xf6f2,	// (0x0006b57a) main_image3_pane_g_ParamLimits

0xf6f2,	// (0x0006b57a) main_image3_pane_g

0x60ec,	// (0x00061f74) main_image3_pane_t1_ParamLimits

0x60ec,	// (0x00061f74) main_image3_pane_t1

0x6111,	// (0x00061f99) main_image3_pane_t2_ParamLimits

0x6111,	// (0x00061f99) main_image3_pane_t2

0x6130,	// (0x00061fb8) main_image3_pane_t3_ParamLimits

0x6130,	// (0x00061fb8) main_image3_pane_t3

0x0003,

0xf6fb,	// (0x0006b583) main_image3_pane_t_ParamLimits

0xf6fb,	// (0x0006b583) main_image3_pane_t

0xe65c,	// (0x0006a4e4) grid_sctrl_middle_pane_cp01_ParamLimits

0xe65c,	// (0x0006a4e4) grid_sctrl_middle_pane_cp01

0x6191,	// (0x00062019) cell_sctrl_middle_pane_cp01_ParamLimits

0x6191,	// (0x00062019) cell_sctrl_middle_pane_cp01

0x61a2,	// (0x0006202a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x61a2,	// (0x0006202a) cell_sctrl_middle_pane_cp01_g1

0x1171,	// (0x0005cff9) main_call4_pane

0x61af,	// (0x00062037) aid_size_button_call4_ParamLimits

0x61af,	// (0x00062037) aid_size_button_call4

0x61e5,	// (0x0006206d) call4_windows_pane_ParamLimits

0x61e5,	// (0x0006206d) call4_windows_pane

0x61fa,	// (0x00062082) grid_call4_button_pane_ParamLimits

0x61fa,	// (0x00062082) grid_call4_button_pane

0x6228,	// (0x000620b0) call4_windows_conf_pane

0x623f,	// (0x000620c7) popup_call4_audio_first_window_ParamLimits

0x623f,	// (0x000620c7) popup_call4_audio_first_window

0x628f,	// (0x00062117) popup_call4_audio_second_window_ParamLimits

0x628f,	// (0x00062117) popup_call4_audio_second_window

0x62a8,	// (0x00062130) popup_call4_audio_wait_window_ParamLimits

0x62a8,	// (0x00062130) popup_call4_audio_wait_window

0x62b6,	// (0x0006213e) cell_call4_button_pane_ParamLimits

0x62b6,	// (0x0006213e) cell_call4_button_pane

0x62d9,	// (0x00062161) bg_button_pane_cp09_ParamLimits

0x62d9,	// (0x00062161) bg_button_pane_cp09

0x62e5,	// (0x0006216d) cell_call4_button_pane_g1_ParamLimits

0x62e5,	// (0x0006216d) cell_call4_button_pane_g1

0x62f2,	// (0x0006217a) cell_call4_button_pane_t1_ParamLimits

0x62f2,	// (0x0006217a) cell_call4_button_pane_t1

0xd6c3,	// (0x0006954b) popup_call4_audio_conf_window_ParamLimits

0xd6c3,	// (0x0006954b) popup_call4_audio_conf_window

0x54ad,	// (0x00061335) mup3_progress_pane_t1_ParamLimits

0x54cc,	// (0x00061354) mup3_progress_pane_t2_ParamLimits

0xd05d,	// (0x00068ee5) mup3_progress_pane_t3_ParamLimits

0xf638,	// (0x0006b4c0) mup3_progress_pane_t_ParamLimits

0xd07a,	// (0x00068f02) mup_progress_pane_cp03_ParamLimits

0x59f9,	// (0x00061881) mup3_control_keys_pane_g4_copy1

0x5f28,	// (0x00061db0) mp4_rocker2_pane_ParamLimits

0x5f28,	// (0x00061db0) mp4_rocker2_pane

0xd6d7,	// (0x0006955f) mp4_rocker2_pane_g1

0xd6df,	// (0x00069567) mp4_rocker2_pane_g2

0x6336,	// (0x000621be) mp4_rocker2_pane_g3

0x633e,	// (0x000621c6) mp4_rocker2_pane_g4

0x6346,	// (0x000621ce) mp4_rocker2_pane_g5

0x0004,

0xf704,	// (0x0006b58c) mp4_rocker2_pane_g

0x1171,	// (0x0005cff9) main_camera4_pane

0x1171,	// (0x0005cff9) main_video4_pane

0x5c4d,	// (0x00061ad5) main_video_tele_dialer_pane_t1_ParamLimits

0x5c4d,	// (0x00061ad5) main_video_tele_dialer_pane_t1

0x5c5f,	// (0x00061ae7) main_video_tele_dialer_pane_t2_ParamLimits

0x5c5f,	// (0x00061ae7) main_video_tele_dialer_pane_t2

0x0001,

0xf6bf,	// (0x0006b547) main_video_tele_dialer_pane_t_ParamLimits

0xf6bf,	// (0x0006b547) main_video_tele_dialer_pane_t

0x6366,	// (0x000621ee) cam4_autofocus_pane_ParamLimits

0x6366,	// (0x000621ee) cam4_autofocus_pane

0x6380,	// (0x00062208) cam4_image_uncrop_pane_ParamLimits

0x6380,	// (0x00062208) cam4_image_uncrop_pane

0x6397,	// (0x0006221f) cam4_indicators_pane_ParamLimits

0x6397,	// (0x0006221f) cam4_indicators_pane

0x63b3,	// (0x0006223b) main_camera4_pane_g1_ParamLimits

0x63b3,	// (0x0006223b) main_camera4_pane_g1

0x63bf,	// (0x00062247) main_camera4_pane_g2_ParamLimits

0x63bf,	// (0x00062247) main_camera4_pane_g2

0x63bf,	// (0x00062247) main_camera4_pane_g3_ParamLimits

0x63bf,	// (0x00062247) main_camera4_pane_g3

0x63cb,	// (0x00062253) main_camera4_pane_g4_ParamLimits

0x63cb,	// (0x00062253) main_camera4_pane_g4

0x63d7,	// (0x0006225f) main_camera4_pane_g5_ParamLimits

0x63d7,	// (0x0006225f) main_camera4_pane_g5

0x0005,

0xf70f,	// (0x0006b597) main_camera4_pane_g_ParamLimits

0xf70f,	// (0x0006b597) main_camera4_pane_g

0x63f1,	// (0x00062279) main_camera4_pane_t1_ParamLimits

0x63f1,	// (0x00062279) main_camera4_pane_t1

0x6439,	// (0x000622c1) bg_tb_trans_pane_cp06

0x644f,	// (0x000622d7) cam4_indicators_pane_g1

0x6460,	// (0x000622e8) cam4_indicators_pane_g2

0x0002,

0xf72a,	// (0x0006b5b2) cam4_indicators_pane_g

0x647e,	// (0x00062306) cam4_indicators_pane_t1

0x64a8,	// (0x00062330) main_video4_pane_g1_ParamLimits

0x64a8,	// (0x00062330) main_video4_pane_g1

0x64b4,	// (0x0006233c) main_video4_pane_g2_ParamLimits

0x64b4,	// (0x0006233c) main_video4_pane_g2

0x64c0,	// (0x00062348) main_video4_pane_g3_ParamLimits

0x64c0,	// (0x00062348) main_video4_pane_g3

0x64cc,	// (0x00062354) main_video4_pane_g4_ParamLimits

0x64cc,	// (0x00062354) main_video4_pane_g4

0x0004,

0xf731,	// (0x0006b5b9) main_video4_pane_g_ParamLimits

0xf731,	// (0x0006b5b9) main_video4_pane_g

0x64ec,	// (0x00062374) vid4_indicators_pane_ParamLimits

0x64ec,	// (0x00062374) vid4_indicators_pane

0x650b,	// (0x00062393) video4_image_uncrop_cif_pane_ParamLimits

0x650b,	// (0x00062393) video4_image_uncrop_cif_pane

0x651a,	// (0x000623a2) video4_image_uncrop_nhd_pane_ParamLimits

0x651a,	// (0x000623a2) video4_image_uncrop_nhd_pane

0x6380,	// (0x00062208) video4_image_uncrop_vga_pane_ParamLimits

0x6380,	// (0x00062208) video4_image_uncrop_vga_pane

0x4365,	// (0x000601ed) bg_tb_trans_pane_cp07

0x6531,	// (0x000623b9) vid4_indicators_pane_g1

0x6545,	// (0x000623cd) vid4_indicators_pane_g2

0x6559,	// (0x000623e1) vid4_indicators_pane_g3

0x0004,

0xf73c,	// (0x0006b5c4) vid4_indicators_pane_g

0x6588,	// (0x00062410) vid4_indicators_pane_t1

0x659f,	// (0x00062427) cam4_autofocus_pane_g1

0x65a7,	// (0x0006242f) cam4_autofocus_pane_g2

0x65af,	// (0x00062437) cam4_autofocus_pane_g3

0x0002,

0xf747,	// (0x0006b5cf) cam4_autofocus_pane_g

0x65b7,	// (0x0006243f) cam4_autofocus_pane_g3_copy1

0x5c7f,	// (0x00061b07) video_down_pane_cp_t1

0x5c8d,	// (0x00061b15) video_down_pane_cp_t2

0x0001,

0xf6c4,	// (0x0006b54c) video_down_pane_cp_t

0x1157,	// (0x0005cfdf) popup_vitu2_window_ParamLimits

0x1157,	// (0x0005cfdf) popup_vitu2_window

0x65bf,	// (0x00062447) aid_size_cell2_itu2_ParamLimits

0x65bf,	// (0x00062447) aid_size_cell2_itu2

0x65e1,	// (0x00062469) aid_size_cell_itu2_ParamLimits

0x65e1,	// (0x00062469) aid_size_cell_itu2

0x6625,	// (0x000624ad) bg_popup_window_pane_cp09_ParamLimits

0x6625,	// (0x000624ad) bg_popup_window_pane_cp09

0x6633,	// (0x000624bb) field_vitu2_entry_pane_ParamLimits

0x6633,	// (0x000624bb) field_vitu2_entry_pane

0x6653,	// (0x000624db) grid_vitu2_function_pane_ParamLimits

0x6653,	// (0x000624db) grid_vitu2_function_pane

0x6697,	// (0x0006251f) grid_vitu2_itu_pane_ParamLimits

0x6697,	// (0x0006251f) grid_vitu2_itu_pane

0x6713,	// (0x0006259b) cell_vitu2_itu_pane_ParamLimits

0x6713,	// (0x0006259b) cell_vitu2_itu_pane

0x672c,	// (0x000625b4) cell_vitu2_function_pane_ParamLimits

0x672c,	// (0x000625b4) cell_vitu2_function_pane

0xd6e7,	// (0x0006956f) bg_popup_call_pane_cp08_ParamLimits

0xd6e7,	// (0x0006956f) bg_popup_call_pane_cp08

0xd6fe,	// (0x00069586) field_vitu2_entry_pane_g1

0xd70a,	// (0x00069592) field_vitu2_entry_pane_g2

0x0002,

0x07d0,	// (0x0005c658) field_vitu2_entry_pane_g

0x676d,	// (0x000625f5) field_vitu2_entry_pane_t1_ParamLimits

0x676d,	// (0x000625f5) field_vitu2_entry_pane_t1

0xa0dd,	// (0x00065f65) field_vitu2_entry_pane_t2_ParamLimits

0xa0dd,	// (0x00065f65) field_vitu2_entry_pane_t2

0x0001,

0xf74e,	// (0x0006b5d6) field_vitu2_entry_pane_t_ParamLimits

0xf74e,	// (0x0006b5d6) field_vitu2_entry_pane_t

0x679f,	// (0x00062627) bg_button_pane_cp010_ParamLimits

0x679f,	// (0x00062627) bg_button_pane_cp010

0x67ad,	// (0x00062635) cell_vitu2_itu_pane_g1

0x67cd,	// (0x00062655) cell_vitu2_itu_pane_t1_ParamLimits

0x67cd,	// (0x00062655) cell_vitu2_itu_pane_t1

0x0dc6,	// (0x0005cc4e) cell_vitu2_itu_pane_t2_ParamLimits

0x0dc6,	// (0x0005cc4e) cell_vitu2_itu_pane_t2

0x0002,

0xf758,	// (0x0006b5e0) cell_vitu2_itu_pane_t_ParamLimits

0xf758,	// (0x0006b5e0) cell_vitu2_itu_pane_t

0x4365,	// (0x000601ed) bg_button_pane_cp011

0x6819,	// (0x000626a1) cell_vitu2_function_pane_g1

0x1171,	// (0x0005cff9) main_myfav_hc_pane

0x6172,	// (0x00061ffa) popup_image3_note_pane_ParamLimits

0x6172,	// (0x00061ffa) popup_image3_note_pane

0x6180,	// (0x00062008) popup_image3_tool_bar_pane_ParamLimits

0x6180,	// (0x00062008) popup_image3_tool_bar_pane

0x0e3c,	// (0x0005ccc4) cell_vitu2_itu_pane_t3_ParamLimits

0x0e3c,	// (0x0005ccc4) cell_vitu2_itu_pane_t3

0x9cf5,	// (0x00065b7d) bg_popup_trans_pane

0xd72c,	// (0x000695b4) grid_image3_tool_bar_pane

0xd736,	// (0x000695be) bg_popup_trans_pane_g1

0xad40,	// (0x00066bc8) bg_popup_trans_pane_g2

0xd73e,	// (0x000695c6) bg_popup_trans_pane_g3

0xd746,	// (0x000695ce) bg_popup_trans_pane_g4

0xd74e,	// (0x000695d6) bg_popup_trans_pane_g5

0xd756,	// (0x000695de) bg_popup_trans_pane_g6

0xd75e,	// (0x000695e6) bg_popup_trans_pane_g7

0xd766,	// (0x000695ee) bg_popup_trans_pane_g8

0xad20,	// (0x00066ba8) bg_popup_trans_pane_g9

0x0008,

0xf75f,	// (0x0006b5e7) bg_popup_trans_pane_g

0xd76e,	// (0x000695f6) cell_image3_tool_bar_pane_ParamLimits

0xd76e,	// (0x000695f6) cell_image3_tool_bar_pane

0xcd5f,	// (0x00068be7) cell_image3_tool_bar_pane_g1

0x9cf5,	// (0x00065b7d) bg_popup_trans_pane_cp1

0xd782,	// (0x0006960a) popup_image3_note_pane_t1

0xd790,	// (0x00069618) popup_image3_note_pane_t2

0xd79e,	// (0x00069626) popup_image3_note_pane_t3

0x0002,

0x07fb,	// (0x0005c683) popup_image3_note_pane_t

0xd7ac,	// (0x00069634) popup_image3_note_pane_t3_copy1

0x682d,	// (0x000626b5) bg_myfav_hc_instruction_pane_ParamLimits

0x682d,	// (0x000626b5) bg_myfav_hc_instruction_pane

0x6845,	// (0x000626cd) cell_myfav_contact_pane_ParamLimits

0x6845,	// (0x000626cd) cell_myfav_contact_pane

0x685f,	// (0x000626e7) cell_myfav_contact_pane_cp1_ParamLimits

0x685f,	// (0x000626e7) cell_myfav_contact_pane_cp1

0x6877,	// (0x000626ff) cell_myfav_contact_pane_cp2_ParamLimits

0x6877,	// (0x000626ff) cell_myfav_contact_pane_cp2

0x688f,	// (0x00062717) cell_myfav_contact_pane_cp3_ParamLimits

0x688f,	// (0x00062717) cell_myfav_contact_pane_cp3

0x68a6,	// (0x0006272e) cell_myfav_contact_pane_cp4_ParamLimits

0x68a6,	// (0x0006272e) cell_myfav_contact_pane_cp4

0x68bc,	// (0x00062744) cell_myfav_contact_pane_cp5_ParamLimits

0x68bc,	// (0x00062744) cell_myfav_contact_pane_cp5

0x68d0,	// (0x00062758) cell_myfav_contact_pane_cp6_ParamLimits

0x68d0,	// (0x00062758) cell_myfav_contact_pane_cp6

0x68e4,	// (0x0006276c) cell_myfav_contact_pane_cp7_ParamLimits

0x68e4,	// (0x0006276c) cell_myfav_contact_pane_cp7

0xd7ba,	// (0x00069642) listscroll_gen_pane_cp05

0x68fc,	// (0x00062784) main_myfav_hc_pane_g1_ParamLimits

0x68fc,	// (0x00062784) main_myfav_hc_pane_g1

0x6912,	// (0x0006279a) main_myfav_hc_pane_g2_ParamLimits

0x6912,	// (0x0006279a) main_myfav_hc_pane_g2

0x0002,

0xf772,	// (0x0006b5fa) main_myfav_hc_pane_g_ParamLimits

0xf772,	// (0x0006b5fa) main_myfav_hc_pane_g

0x6940,	// (0x000627c8) main_myfav_hc_pane_t1_ParamLimits

0x6940,	// (0x000627c8) main_myfav_hc_pane_t1

0xd7c3,	// (0x0006964b) main_myfav_hc_pane_t2_ParamLimits

0xd7c3,	// (0x0006964b) main_myfav_hc_pane_t2

0xd7d5,	// (0x0006965d) main_myfav_hc_pane_t3_ParamLimits

0xd7d5,	// (0x0006965d) main_myfav_hc_pane_t3

0x6957,	// (0x000627df) main_myfav_hc_pane_t4_ParamLimits

0x6957,	// (0x000627df) main_myfav_hc_pane_t4

0x0004,

0xf779,	// (0x0006b601) main_myfav_hc_pane_t_ParamLimits

0xf779,	// (0x0006b601) main_myfav_hc_pane_t

0xcd5f,	// (0x00068be7) bg_myfav_hc_instruction_pane_g1

0xd7e7,	// (0x0006966f) cell_myfav_contact_pane_g1_ParamLimits

0xd7e7,	// (0x0006966f) cell_myfav_contact_pane_g1

0xd7e7,	// (0x0006966f) cell_myfav_contact_pane_g2_ParamLimits

0xd7e7,	// (0x0006966f) cell_myfav_contact_pane_g2

0xd7f3,	// (0x0006967b) cell_myfav_contact_pane_g3_ParamLimits

0xd7f3,	// (0x0006967b) cell_myfav_contact_pane_g3

0xd047,	// (0x00068ecf) cell_myfav_contact_pane_g4_ParamLimits

0xd047,	// (0x00068ecf) cell_myfav_contact_pane_g4

0xd800,	// (0x00069688) cell_myfav_contact_pane_g5_ParamLimits

0xd800,	// (0x00069688) cell_myfav_contact_pane_g5

0x0004,

0x0814,	// (0x0005c69c) cell_myfav_contact_pane_g_ParamLimits

0x0814,	// (0x0005c69c) cell_myfav_contact_pane_g

0x6928,	// (0x000627b0) main_myfav_hc_pane_g3_ParamLimits

0x6928,	// (0x000627b0) main_myfav_hc_pane_g3

0x1060,	// (0x0005cee8) popup_adpt_find_window

0x6981,	// (0x00062809) afind_page_pane_ParamLimits

0x6981,	// (0x00062809) afind_page_pane

0x698e,	// (0x00062816) aid_size_cell_afind_ParamLimits

0x698e,	// (0x00062816) aid_size_cell_afind

0x69a8,	// (0x00062830) bg_popup_sub_pane_cp09_ParamLimits

0x69a8,	// (0x00062830) bg_popup_sub_pane_cp09

0x69b5,	// (0x0006283d) find_pane_cp01_ParamLimits

0x69b5,	// (0x0006283d) find_pane_cp01

0xd80c,	// (0x00069694) grid_afind_control_pane_ParamLimits

0xd80c,	// (0x00069694) grid_afind_control_pane

0x69c2,	// (0x0006284a) grid_afind_pane_ParamLimits

0x69c2,	// (0x0006284a) grid_afind_pane

0x69de,	// (0x00062866) cell_afind_pane_ParamLimits

0x69de,	// (0x00062866) cell_afind_pane

0xcd5f,	// (0x00068be7) afind_page_pane_g1

0x6a26,	// (0x000628ae) afind_page_pane_g2

0x6a2f,	// (0x000628b7) afind_page_pane_g3

0x0002,

0xf784,	// (0x0006b60c) afind_page_pane_g

0x6a38,	// (0x000628c0) afind_page_pane_t1

0xd820,	// (0x000696a8) cell_afind_grid_control_pane_ParamLimits

0xd820,	// (0x000696a8) cell_afind_grid_control_pane

0xd6af,	// (0x00069537) bg_button_pane_cp69_ParamLimits

0xd6af,	// (0x00069537) bg_button_pane_cp69

0x6a58,	// (0x000628e0) cell_afind_pane_g1_ParamLimits

0x6a58,	// (0x000628e0) cell_afind_pane_g1

0x6a65,	// (0x000628ed) cell_afind_pane_t1_ParamLimits

0x6a65,	// (0x000628ed) cell_afind_pane_t1

0xab39,	// (0x000669c1) bg_button_pane_cp72

0xd82f,	// (0x000696b7) cell_afind_grid_control_pane_g1

0x3ee3,	// (0x0005fd6b) aid_image_placing_area_ParamLimits

0x3ee3,	// (0x0005fd6b) aid_image_placing_area

0xd370,	// (0x000691f8) field_vitu_entry_pane_g1_ParamLimits

0xd370,	// (0x000691f8) field_vitu_entry_pane_g1

0xd37c,	// (0x00069204) field_vitu_entry_pane_g2_ParamLimits

0xd37c,	// (0x00069204) field_vitu_entry_pane_g2

0x0001,

0x06cc,	// (0x0005c554) field_vitu_entry_pane_g_ParamLimits

0x06cc,	// (0x0005c554) field_vitu_entry_pane_g

0x5a81,	// (0x00061909) cell_vitu_itu_pane_g1_ParamLimits

0x5ac3,	// (0x0006194b) cell_vitu_itu_pane_t3_ParamLimits

0x5ac3,	// (0x0006194b) cell_vitu_itu_pane_t3

0xd658,	// (0x000694e0) mp4_progress_pane_t1_ParamLimits

0xd671,	// (0x000694f9) mp4_progress_pane_t2_ParamLimits

0x0765,	// (0x0005c5ed) mp4_progress_pane_t_ParamLimits

0xd68a,	// (0x00069512) mup_progress_pane_cp04_ParamLimits

0x696b,	// (0x000627f3) main_myfav_hc_pane_t5_ParamLimits

0x696b,	// (0x000627f3) main_myfav_hc_pane_t5

0x0eee,	// (0x0005cd76) aid_zoom_text_primary

0x1060,	// (0x0005cee8) popup_adpt_find_window_ParamLimits

0x4365,	// (0x000601ed) main_cam_set_pane

0x63a5,	// (0x0006222d) cam4_zoom_pane_ParamLimits

0x63a5,	// (0x0006222d) cam4_zoom_pane

0x6a77,	// (0x000628ff) main_cam_set_pane_g1_ParamLimits

0x6a77,	// (0x000628ff) main_cam_set_pane_g1

0x6a85,	// (0x0006290d) main_cam_set_pane_g2_ParamLimits

0x6a85,	// (0x0006290d) main_cam_set_pane_g2

0x0001,

0xf78b,	// (0x0006b613) main_cam_set_pane_g_ParamLimits

0xf78b,	// (0x0006b613) main_cam_set_pane_g

0x6a91,	// (0x00062919) main_cam_set_pane_t1_ParamLimits

0x6a91,	// (0x00062919) main_cam_set_pane_t1

0x6aad,	// (0x00062935) main_cset_listscroll_pane_ParamLimits

0x6aad,	// (0x00062935) main_cset_listscroll_pane

0x6ad8,	// (0x00062960) main_cset_slider_pane_ParamLimits

0x6ad8,	// (0x00062960) main_cset_slider_pane

0xd840,	// (0x000696c8) main_cset_list_pane_ParamLimits

0xd840,	// (0x000696c8) main_cset_list_pane

0xd850,	// (0x000696d8) scroll_pane_cp028

0x6af7,	// (0x0006297f) aid_area_touch_slider

0x6b13,	// (0x0006299b) cset_slider_pane

0x6b3d,	// (0x000629c5) main_cset_slider_pane_g1

0x6b52,	// (0x000629da) main_cset_slider_pane_g2

0x0011,

0xf790,	// (0x0006b618) main_cset_slider_pane_g

0xd889,	// (0x00069711) main_cset_slider_pane_t1

0x6c14,	// (0x00062a9c) main_cset_slider_pane_t2

0x6c2e,	// (0x00062ab6) main_cset_slider_pane_t3

0x6c48,	// (0x00062ad0) main_cset_slider_pane_t4

0x6c62,	// (0x00062aea) main_cset_slider_pane_t5

0x6c80,	// (0x00062b08) main_cset_slider_pane_t6

0x6c97,	// (0x00062b1f) main_cset_slider_pane_t7

0x000e,

0xf7b5,	// (0x0006b63d) main_cset_slider_pane_t

0x6da3,	// (0x00062c2b) cset_list_set_pane_ParamLimits

0x6da3,	// (0x00062c2b) cset_list_set_pane

0x6db9,	// (0x00062c41) aid_position_infowindow_above

0x6dc1,	// (0x00062c49) aid_position_infowindow_below

0xa0fa,	// (0x00065f82) cset_list_set_pane_g1_ParamLimits

0xa0fa,	// (0x00065f82) cset_list_set_pane_g1

0xa106,	// (0x00065f8e) cset_list_set_pane_g3_ParamLimits

0xa106,	// (0x00065f8e) cset_list_set_pane_g3

0x0001,

0xf7d4,	// (0x0006b65c) cset_list_set_pane_g_ParamLimits

0xf7d4,	// (0x0006b65c) cset_list_set_pane_g

0xa115,	// (0x00065f9d) cset_list_set_pane_t1_ParamLimits

0xa115,	// (0x00065f9d) cset_list_set_pane_t1

0xa5ae,	// (0x00066436) list_highlight_pane_cp021_ParamLimits

0xa5ae,	// (0x00066436) list_highlight_pane_cp021

0xb689,	// (0x00067511) cset_slider_pane_g1

0xb69b,	// (0x00067523) cset_slider_pane_g2

0xb692,	// (0x0006751a) cset_slider_pane_g3

0x0002,

0x0874,	// (0x0005c6fc) cset_slider_pane_g

0x6dc9,	// (0x00062c51) aid_area_touch_cam4_zoom

0x6dd1,	// (0x00062c59) cam4_zoom_cont_pane

0x6dd9,	// (0x00062c61) cam4_zoom_pane_g1

0x6de1,	// (0x00062c69) cam4_zoom_pane_g2

0x6de9,	// (0x00062c71) cam4_zoom_pane_g3

0x0002,

0xf7d9,	// (0x0006b661) cam4_zoom_pane_g

0x6df1,	// (0x00062c79) cam4_zoom_cont_pane_g1

0x6dfa,	// (0x00062c82) cam4_zoom_cont_pane_g2

0x6e03,	// (0x00062c8b) cam4_zoom_cont_pane_g3

0x0002,

0xf7e0,	// (0x0006b668) cam4_zoom_cont_pane_g

0x61c9,	// (0x00062051) call4_image_pane_ParamLimits

0x61c9,	// (0x00062051) call4_image_pane

0x6228,	// (0x000620b0) call4_windows_conf_pane_ParamLimits

0x626d,	// (0x000620f5) popup_call4_audio_in_window_ParamLimits

0x626d,	// (0x000620f5) popup_call4_audio_in_window

0x9cf5,	// (0x00065b7d) bg_popup_call2_act_pane_cp02

0xd6bb,	// (0x00069543) call4_list_conf_pane

0xcd5f,	// (0x00068be7) call4_image_pane_g1

0xcd5f,	// (0x00068be7) call4_image_pane_g2

0x0001,

0x058d,	// (0x0005c415) call4_image_pane_g

0xd929,	// (0x000697b1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd929,	// (0x000697b1) list_single_graphic_popup_conf4_pane

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp022

0xd94e,	// (0x000697d6) list_single_graphic_popup_conf4_pane_g1

0xb25a,	// (0x000670e2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7e7,	// (0x0006b66f) list_single_graphic_popup_conf4_pane_g

0xd956,	// (0x000697de) list_single_graphic_popup_conf4_pane_t1

0x2149,	// (0x0005dfd1) popup_vtel_slider_window_ParamLimits

0x2149,	// (0x0005dfd1) popup_vtel_slider_window

0xd69d,	// (0x00069525) dialer2_ne_pane_t2_ParamLimits

0xd69d,	// (0x00069525) dialer2_ne_pane_t2

0x0001,

0xf6e8,	// (0x0006b570) dialer2_ne_pane_t_ParamLimits

0xf6e8,	// (0x0006b570) dialer2_ne_pane_t

0xa5ae,	// (0x00066436) bg_popup_sub_pane_cp010_ParamLimits

0xa5ae,	// (0x00066436) bg_popup_sub_pane_cp010

0x6e0c,	// (0x00062c94) popup_vtel_slider_window_g1_ParamLimits

0x6e0c,	// (0x00062c94) popup_vtel_slider_window_g1

0x6e18,	// (0x00062ca0) popup_vtel_slider_window_g2_ParamLimits

0x6e18,	// (0x00062ca0) popup_vtel_slider_window_g2

0x0003,

0xf7ec,	// (0x0006b674) popup_vtel_slider_window_g_ParamLimits

0xf7ec,	// (0x0006b674) popup_vtel_slider_window_g

0x6e60,	// (0x00062ce8) vtel_slider_pane_ParamLimits

0x6e60,	// (0x00062ce8) vtel_slider_pane

0x6e6f,	// (0x00062cf7) vtel_slider_pane_g1_ParamLimits

0x6e6f,	// (0x00062cf7) vtel_slider_pane_g1

0x6e7c,	// (0x00062d04) vtel_slider_pane_g2_ParamLimits

0x6e7c,	// (0x00062d04) vtel_slider_pane_g2

0x6e89,	// (0x00062d11) vtel_slider_pane_g3_ParamLimits

0x6e89,	// (0x00062d11) vtel_slider_pane_g3

0x6e6f,	// (0x00062cf7) vtel_slider_pane_g4_ParamLimits

0x6e6f,	// (0x00062cf7) vtel_slider_pane_g4

0x6e96,	// (0x00062d1e) vtel_slider_pane_g5_ParamLimits

0x6e96,	// (0x00062d1e) vtel_slider_pane_g5

0x0004,

0xf7f5,	// (0x0006b67d) vtel_slider_pane_g_ParamLimits

0xf7f5,	// (0x0006b67d) vtel_slider_pane_g

0x4365,	// (0x000601ed) main_gallery2_pane

0x6607,	// (0x0006248f) aid_size_row_itut2_dropdow_list_ParamLimits

0x6607,	// (0x0006248f) aid_size_row_itut2_dropdow_list

0x6675,	// (0x000624fd) grid_vitu2_function_top_pane_ParamLimits

0x6675,	// (0x000624fd) grid_vitu2_function_top_pane

0x66cf,	// (0x00062557) popup_vitu2_dropdown_list_window_ParamLimits

0x66cf,	// (0x00062557) popup_vitu2_dropdown_list_window

0x66ef,	// (0x00062577) popup_vitu2_match_list_window

0x6eb1,	// (0x00062d39) cell_vitu2_function_top_pane_ParamLimits

0x6eb1,	// (0x00062d39) cell_vitu2_function_top_pane

0x6ecb,	// (0x00062d53) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ecb,	// (0x00062d53) cell_vitu2_function_top_pane_cp01

0x6ee7,	// (0x00062d6f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ee7,	// (0x00062d6f) cell_vitu2_function_top_wide_pane

0x4365,	// (0x000601ed) bg_button_pane_cp012

0x6f03,	// (0x00062d8b) cell_vitu2_function_top_pane_g1

0x6f17,	// (0x00062d9f) bg_button_pane_cp013_ParamLimits

0x6f17,	// (0x00062d9f) bg_button_pane_cp013

0x6f33,	// (0x00062dbb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f33,	// (0x00062dbb) cell_vitu2_function_top_wide_pane_g1

0x1157,	// (0x0005cfdf) bg_popup_sub_pane_cp20

0x6f4b,	// (0x00062dd3) list_vitu2_match_list_pane

0xd736,	// (0x000695be) bg_popup_sub_pane_cp20_g1

0xd73e,	// (0x000695c6) bg_popup_sub_pane_cp20_g2

0xad40,	// (0x00066bc8) bg_popup_sub_pane_cp20_g3

0xd746,	// (0x000695ce) bg_popup_sub_pane_cp20_g4

0xad20,	// (0x00066ba8) bg_popup_sub_pane_cp20_g5

0xd96c,	// (0x000697f4) bg_popup_sub_pane_cp20_g6

0xd756,	// (0x000695de) bg_popup_sub_pane_cp20_g7

0xd75e,	// (0x000695e6) bg_popup_sub_pane_cp20_g8

0xd766,	// (0x000695ee) bg_popup_sub_pane_cp20_g9

0x0008,

0xf800,	// (0x0006b688) bg_popup_sub_pane_cp20_g

0x6f63,	// (0x00062deb) list_vitu2_match_list_item_pane_ParamLimits

0x6f63,	// (0x00062deb) list_vitu2_match_list_item_pane

0x6f75,	// (0x00062dfd) list_vitu2_match_list_item_pane_t1

0x1171,	// (0x0005cff9) bg_popup_sub_pane_cp21

0x6fcb,	// (0x00062e53) grid_vitu2_dropdown_list_pane

0x6fd3,	// (0x00062e5b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fd3,	// (0x00062e5b) cell_vitu2_dropdown_list_char_pane

0x6ff4,	// (0x00062e7c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ff4,	// (0x00062e7c) cell_vitu2_dropdown_list_ctrl_pane

0xd974,	// (0x000697fc) cell_vitu2_dropdown_list_char_pane_g1

0xd97d,	// (0x00069805) cell_vitu2_dropdown_list_char_pane_g2

0xd986,	// (0x0006980e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf81d,	// (0x0006b6a5) cell_vitu2_dropdown_list_char_pane_g

0x7020,	// (0x00062ea8) cell_vitu2_dropdown_list_char_pane_t1

0x702e,	// (0x00062eb6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x702e,	// (0x00062eb6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x703e,	// (0x00062ec6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x703e,	// (0x00062ec6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x704f,	// (0x00062ed7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x704f,	// (0x00062ed7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x705f,	// (0x00062ee7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x705f,	// (0x00062ee7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6439,	// (0x000622c1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6439,	// (0x000622c1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf824,	// (0x0006b6ac) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf824,	// (0x0006b6ac) cell_vitu2_dropdown_list_ctrl_pane_g

0x707b,	// (0x00062f03) aid_size_cell_gallery2_ParamLimits

0x707b,	// (0x00062f03) aid_size_cell_gallery2

0x7095,	// (0x00062f1d) grid_gallery2_pane_ParamLimits

0x7095,	// (0x00062f1d) grid_gallery2_pane

0x70ac,	// (0x00062f34) scroll_pane_cp029_ParamLimits

0x70ac,	// (0x00062f34) scroll_pane_cp029

0x70bc,	// (0x00062f44) cell_gallery2_pane_ParamLimits

0x70bc,	// (0x00062f44) cell_gallery2_pane

0xd98f,	// (0x00069817) cell_gallery2_pane_g2

0xea34,	// (0x0006a8bc) cell_gallery2_pane_g3

0xd9c4,	// (0x0006984c) cell_gallery2_pane_g4

0xd9cc,	// (0x00069854) cell_gallery2_pane_g5

0xaae7,	// (0x0006696f) grid_highlight_pane_cp10

0x66ef,	// (0x00062577) popup_vitu2_match_list_window_ParamLimits

0x6703,	// (0x0006258b) popup_vitu2_query_window_ParamLimits

0x6703,	// (0x0006258b) popup_vitu2_query_window

0x1171,	// (0x0005cff9) bg_vitu2_candi_button_pane

0xd974,	// (0x000697fc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd97d,	// (0x00069805) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd986,	// (0x0006980e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7111,	// (0x00062f99) bg_button_pane_cp015

0x7123,	// (0x00062fab) bg_button_pane_cp016

0x7136,	// (0x00062fbe) bg_button_pane_cp017

0xc94b,	// (0x000687d3) bg_popup_sub_pane_cp22

0xd9d4,	// (0x0006985c) popup_vitu2_query_window_g1

0x717b,	// (0x00063003) popup_vitu2_query_window_g2

0x0002,

0xf82f,	// (0x0006b6b7) popup_vitu2_query_window_g

0x7198,	// (0x00063020) popup_vitu2_query_window_t1_ParamLimits

0x7198,	// (0x00063020) popup_vitu2_query_window_t1

0x71cb,	// (0x00063053) popup_vitu2_query_window_t2_ParamLimits

0x71cb,	// (0x00063053) popup_vitu2_query_window_t2

0x71dd,	// (0x00063065) popup_vitu2_query_window_t3_ParamLimits

0x71dd,	// (0x00063065) popup_vitu2_query_window_t3

0x7205,	// (0x0006308d) popup_vitu2_query_window_t4_ParamLimits

0x7205,	// (0x0006308d) popup_vitu2_query_window_t4

0x7226,	// (0x000630ae) popup_vitu2_query_window_t5_ParamLimits

0x7226,	// (0x000630ae) popup_vitu2_query_window_t5

0x0006,

0xf836,	// (0x0006b6be) popup_vitu2_query_window_t_ParamLimits

0xf836,	// (0x0006b6be) popup_vitu2_query_window_t

0xd838,	// (0x000696c0) main_cset_text_pane

0x6af7,	// (0x0006297f) aid_area_touch_slider_ParamLimits

0x6b13,	// (0x0006299b) cset_slider_pane_ParamLimits

0x6b3d,	// (0x000629c5) main_cset_slider_pane_g1_ParamLimits

0x6b52,	// (0x000629da) main_cset_slider_pane_g2_ParamLimits

0xd859,	// (0x000696e1) main_cset_slider_pane_g3_ParamLimits

0xd859,	// (0x000696e1) main_cset_slider_pane_g3

0x6b67,	// (0x000629ef) main_cset_slider_pane_g4_ParamLimits

0x6b67,	// (0x000629ef) main_cset_slider_pane_g4

0x6b76,	// (0x000629fe) main_cset_slider_pane_g5_ParamLimits

0x6b76,	// (0x000629fe) main_cset_slider_pane_g5

0x6b84,	// (0x00062a0c) main_cset_slider_pane_g6_ParamLimits

0x6b84,	// (0x00062a0c) main_cset_slider_pane_g6

0xf790,	// (0x0006b618) main_cset_slider_pane_g_ParamLimits

0xd889,	// (0x00069711) main_cset_slider_pane_t1_ParamLimits

0x6c14,	// (0x00062a9c) main_cset_slider_pane_t2_ParamLimits

0x6c2e,	// (0x00062ab6) main_cset_slider_pane_t3_ParamLimits

0x6c48,	// (0x00062ad0) main_cset_slider_pane_t4_ParamLimits

0x6c62,	// (0x00062aea) main_cset_slider_pane_t5_ParamLimits

0x6c80,	// (0x00062b08) main_cset_slider_pane_t6_ParamLimits

0x6c97,	// (0x00062b1f) main_cset_slider_pane_t7_ParamLimits

0x6cc5,	// (0x00062b4d) main_cset_slider_pane_t8_ParamLimits

0x6cc5,	// (0x00062b4d) main_cset_slider_pane_t8

0x6ced,	// (0x00062b75) main_cset_slider_pane_t9_ParamLimits

0x6ced,	// (0x00062b75) main_cset_slider_pane_t9

0x6d15,	// (0x00062b9d) main_cset_slider_pane_t10_ParamLimits

0x6d15,	// (0x00062b9d) main_cset_slider_pane_t10

0x6d3d,	// (0x00062bc5) main_cset_slider_pane_t11_ParamLimits

0x6d3d,	// (0x00062bc5) main_cset_slider_pane_t11

0x6d67,	// (0x00062bef) main_cset_slider_pane_t12_ParamLimits

0x6d67,	// (0x00062bef) main_cset_slider_pane_t12

0x6d84,	// (0x00062c0c) main_cset_slider_pane_t13_ParamLimits

0x6d84,	// (0x00062c0c) main_cset_slider_pane_t13

0xf7b5,	// (0x0006b63d) main_cset_slider_pane_t_ParamLimits

0x9cf5,	// (0x00065b7d) bg_popup_sub_pane_cp011

0xd9e0,	// (0x00069868) main_cset_text_pane_g1

0xd9e8,	// (0x00069870) main_cset_text_pane_t1

0xd9f6,	// (0x0006987e) main_cset_text_pane_t2

0xda04,	// (0x0006988c) main_cset_text_pane_t3

0xda12,	// (0x0006989a) main_cset_text_pane_t4

0xda20,	// (0x000698a8) main_cset_text_pane_t5

0xda2e,	// (0x000698b6) main_cset_text_pane_t6

0xda3c,	// (0x000698c4) main_cset_text_pane_t7

0x0006,

0x08e7,	// (0x0005c76f) main_cset_text_pane_t

0x1171,	// (0x0005cff9) main_cam4_burst_pane

0x1171,	// (0x0005cff9) main_cam5_pane

0x6a46,	// (0x000628ce) bg_button_pane_cp019

0x6a4f,	// (0x000628d7) bg_button_pane_cp020

0xd865,	// (0x000696ed) main_cset_slider_pane_g7_ParamLimits

0xd865,	// (0x000696ed) main_cset_slider_pane_g7

0xd871,	// (0x000696f9) main_cset_slider_pane_g8_ParamLimits

0xd871,	// (0x000696f9) main_cset_slider_pane_g8

0x6b98,	// (0x00062a20) main_cset_slider_pane_g9_ParamLimits

0x6b98,	// (0x00062a20) main_cset_slider_pane_g9

0x6ba4,	// (0x00062a2c) main_cset_slider_pane_g10_ParamLimits

0x6ba4,	// (0x00062a2c) main_cset_slider_pane_g10

0x6bb0,	// (0x00062a38) main_cset_slider_pane_g11_ParamLimits

0x6bb0,	// (0x00062a38) main_cset_slider_pane_g11

0x6bbc,	// (0x00062a44) main_cset_slider_pane_g12_ParamLimits

0x6bbc,	// (0x00062a44) main_cset_slider_pane_g12

0x6bc8,	// (0x00062a50) main_cset_slider_pane_g13_ParamLimits

0x6bc8,	// (0x00062a50) main_cset_slider_pane_g13

0x6bd4,	// (0x00062a5c) main_cset_slider_pane_g14_ParamLimits

0x6bd4,	// (0x00062a5c) main_cset_slider_pane_g14

0x6be0,	// (0x00062a68) main_cset_slider_pane_g15_ParamLimits

0x6be0,	// (0x00062a68) main_cset_slider_pane_g15

0xd8b7,	// (0x0006973f) main_cset_slider_pane_t14_ParamLimits

0xd8b7,	// (0x0006973f) main_cset_slider_pane_t14

0xd8f0,	// (0x00069778) main_cset_slider_pane_t15_ParamLimits

0xd8f0,	// (0x00069778) main_cset_slider_pane_t15

0x729d,	// (0x00063125) aid_cam4_burst_size_cell_ParamLimits

0x729d,	// (0x00063125) aid_cam4_burst_size_cell

0x72b9,	// (0x00063141) grid_cam4_burst_pane_ParamLimits

0x72b9,	// (0x00063141) grid_cam4_burst_pane

0x72e9,	// (0x00063171) linegrid_cam4_burst_pane_ParamLimits

0x72e9,	// (0x00063171) linegrid_cam4_burst_pane

0x7309,	// (0x00063191) scroll_pane_cp30_ParamLimits

0x7309,	// (0x00063191) scroll_pane_cp30

0x7315,	// (0x0006319d) cell_cam4_burst_pane_ParamLimits

0x7315,	// (0x0006319d) cell_cam4_burst_pane

0xda4a,	// (0x000698d2) linegrid_cam4_burst_pane_g1_ParamLimits

0xda4a,	// (0x000698d2) linegrid_cam4_burst_pane_g1

0x7351,	// (0x000631d9) linegrid_cam4_burst_pane_g2_ParamLimits

0x7351,	// (0x000631d9) linegrid_cam4_burst_pane_g2

0xda57,	// (0x000698df) linegrid_cam4_burst_pane_g3_ParamLimits

0xda57,	// (0x000698df) linegrid_cam4_burst_pane_g3

0x0002,

0xf845,	// (0x0006b6cd) linegrid_cam4_burst_pane_g_ParamLimits

0xf845,	// (0x0006b6cd) linegrid_cam4_burst_pane_g

0x7362,	// (0x000631ea) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7362,	// (0x000631ea) linegrid_cam4_burst_pane_g3_copy1

0xda64,	// (0x000698ec) linegrid_cam4_burst_pane_g4_ParamLimits

0xda64,	// (0x000698ec) linegrid_cam4_burst_pane_g4

0x737c,	// (0x00063204) linegrid_cam4_burst_pane_g5_ParamLimits

0x737c,	// (0x00063204) linegrid_cam4_burst_pane_g5

0x738d,	// (0x00063215) linegrid_cam4_burst_pane_g6_ParamLimits

0x738d,	// (0x00063215) linegrid_cam4_burst_pane_g6

0xda71,	// (0x000698f9) linegrid_cam4_burst_pane_g7_ParamLimits

0xda71,	// (0x000698f9) linegrid_cam4_burst_pane_g7

0x739e,	// (0x00063226) cell_cam4_burst_pane_g1

0xda8a,	// (0x00069912) main_cam5_pane_t1_ParamLimits

0xda8a,	// (0x00069912) main_cam5_pane_t1

0xda9c,	// (0x00069924) main_cam5_pane_t2_ParamLimits

0xda9c,	// (0x00069924) main_cam5_pane_t2

0xdaae,	// (0x00069936) main_cam5_pane_t3_ParamLimits

0xdaae,	// (0x00069936) main_cam5_pane_t3

0xdac0,	// (0x00069948) main_cam5_pane_t4_ParamLimits

0xdac0,	// (0x00069948) main_cam5_pane_t4

0xdae4,	// (0x0006996c) main_cam5_pane_t5_ParamLimits

0xdae4,	// (0x0006996c) main_cam5_pane_t5

0xdaf8,	// (0x00069980) main_cam5_pane_t6_ParamLimits

0xdaf8,	// (0x00069980) main_cam5_pane_t6

0xdb0c,	// (0x00069994) main_cam5_pane_t7_ParamLimits

0xdb0c,	// (0x00069994) main_cam5_pane_t7

0xdb1e,	// (0x000699a6) main_cam5_pane_t8_ParamLimits

0xdb1e,	// (0x000699a6) main_cam5_pane_t8

0xdb3a,	// (0x000699c2) main_cam5_pane_t9_ParamLimits

0xdb3a,	// (0x000699c2) main_cam5_pane_t9

0xdb4c,	// (0x000699d4) main_cam5_pane_t10_ParamLimits

0xdb4c,	// (0x000699d4) main_cam5_pane_t10

0xdb5e,	// (0x000699e6) main_cam5_pane_t11_ParamLimits

0xdb5e,	// (0x000699e6) main_cam5_pane_t11

0xdb70,	// (0x000699f8) main_cam5_pane_t12_ParamLimits

0xdb70,	// (0x000699f8) main_cam5_pane_t12

0xdb85,	// (0x00069a0d) main_cam5_pane_t13_ParamLimits

0xdb85,	// (0x00069a0d) main_cam5_pane_t13

0x000c,

0xf851,	// (0x0006b6d9) main_cam5_pane_t_ParamLimits

0xf851,	// (0x0006b6d9) main_cam5_pane_t

0x1116,	// (0x0005cf9e) popup_scut_keymap_window_ParamLimits

0x1116,	// (0x0005cf9e) popup_scut_keymap_window

0x73b1,	// (0x00063239) aid_size_cell_brow_shortcut

0xaae7,	// (0x0006696f) bg_popup_window_pane_cp010

0x73bd,	// (0x00063245) grid_scut_pane

0x73c9,	// (0x00063251) cell_scut_pane_ParamLimits

0x73c9,	// (0x00063251) cell_scut_pane

0x73e0,	// (0x00063268) cell_scut_pane_g1

0xdba2,	// (0x00069a2a) cell_scut_pane_t1

0xdbb1,	// (0x00069a39) cell_scut_pane_t2

0x73e9,	// (0x00063271) cell_scut_pane_t3

0x0002,

0xf86c,	// (0x0006b6f4) cell_scut_pane_t

0x50cc,	// (0x00060f54) main_mup3_pane_g8_ParamLimits

0x50cc,	// (0x00060f54) main_mup3_pane_g8

0x6615,	// (0x0006249d) area_vitu2_query_pane_ParamLimits

0x6615,	// (0x0006249d) area_vitu2_query_pane

0x7149,	// (0x00062fd1) input_focus_pane_cp08

0xdbc0,	// (0x00069a48) area_vitu2_query_pane_g1

0x73f7,	// (0x0006327f) area_vitu2_query_pane_g2

0x0001,

0xf873,	// (0x0006b6fb) area_vitu2_query_pane_g

0x7408,	// (0x00063290) area_vitu2_query_pane_t1_ParamLimits

0x7408,	// (0x00063290) area_vitu2_query_pane_t1

0x741c,	// (0x000632a4) area_vitu2_query_pane_t2_ParamLimits

0x741c,	// (0x000632a4) area_vitu2_query_pane_t2

0x7430,	// (0x000632b8) area_vitu2_query_pane_t3_ParamLimits

0x7430,	// (0x000632b8) area_vitu2_query_pane_t3

0xa12a,	// (0x00065fb2) area_vitu2_query_pane_t4_ParamLimits

0xa12a,	// (0x00065fb2) area_vitu2_query_pane_t4

0xa152,	// (0x00065fda) area_vitu2_query_pane_t5_ParamLimits

0xa152,	// (0x00065fda) area_vitu2_query_pane_t5

0xa17a,	// (0x00066002) area_vitu2_query_pane_t6_ParamLimits

0xa17a,	// (0x00066002) area_vitu2_query_pane_t6

0x0006,

0xf878,	// (0x0006b700) area_vitu2_query_pane_t_ParamLimits

0xf878,	// (0x0006b700) area_vitu2_query_pane_t

0x7458,	// (0x000632e0) bg_button_pane_cp018

0x7466,	// (0x000632ee) bg_button_pane_cp021

0x7472,	// (0x000632fa) bg_button_pane_cp022

0x7483,	// (0x0006330b) input_focus_pane_cp09

0xb396,	// (0x0006721e) aid_size_touch_mv_arrow_left

0xb3bf,	// (0x00067247) aid_size_touch_mv_arrow_right

0x6bf8,	// (0x00062a80) main_cset_slider_pane_g16_ParamLimits

0x6bf8,	// (0x00062a80) main_cset_slider_pane_g16

0x6c06,	// (0x00062a8e) main_cset_slider_pane_g17_ParamLimits

0x6c06,	// (0x00062a8e) main_cset_slider_pane_g17

0x739e,	// (0x00063226) cell_cam4_burst_pane_g1_ParamLimits

0x9cf5,	// (0x00065b7d) compa_mode_pane

0x6e24,	// (0x00062cac) popup_vtel_slider_window_g3_ParamLimits

0x6e24,	// (0x00062cac) popup_vtel_slider_window_g3

0x6e38,	// (0x00062cc0) popup_vtel_slider_window_g4_ParamLimits

0x6e38,	// (0x00062cc0) popup_vtel_slider_window_g4

0x6e4c,	// (0x00062cd4) popup_vtel_slider_window_t1_ParamLimits

0x6e4c,	// (0x00062cd4) popup_vtel_slider_window_t1

0x1171,	// (0x0005cff9) main_cl_pane

0x4403,	// (0x0006028b) popup_imed_adjust2_window_ParamLimits

0xc94b,	// (0x000687d3) bg_tb_trans_pane_cp05_ParamLimits

0xd2a5,	// (0x0006912d) popup_imed_adjust2_window_g1_ParamLimits

0xd2b4,	// (0x0006913c) popup_imed_adjust2_window_g2_ParamLimits

0xd2b4,	// (0x0006913c) popup_imed_adjust2_window_g2

0xd2c0,	// (0x00069148) popup_imed_adjust2_window_g3_ParamLimits

0xd2c0,	// (0x00069148) popup_imed_adjust2_window_g3

0x0002,

0x0690,	// (0x0005c518) popup_imed_adjust2_window_g_ParamLimits

0x0690,	// (0x0005c518) popup_imed_adjust2_window_g

0xd2cc,	// (0x00069154) popup_imed_adjust2_window_t1_ParamLimits

0xd2e4,	// (0x0006916c) slider_imed_adjust_pane_ParamLimits

0xd2f8,	// (0x00069180) slider_imed_adjust_pane_g1_ParamLimits

0xd308,	// (0x00069190) slider_imed_adjust_pane_g2_ParamLimits

0xd318,	// (0x000691a0) slider_imed_adjust_pane_g3_ParamLimits

0xd329,	// (0x000691b1) slider_imed_adjust_pane_g4_ParamLimits

0x0697,	// (0x0005c51f) slider_imed_adjust_pane_g_ParamLimits

0x634e,	// (0x000621d6) aid_touch_area_cam4_ParamLimits

0x634e,	// (0x000621d6) aid_touch_area_cam4

0x635e,	// (0x000621e6) battery_pane_cp01

0x63e5,	// (0x0006226d) main_camera4_pane_g6_ParamLimits

0x63e5,	// (0x0006226d) main_camera4_pane_g6

0x6403,	// (0x0006228b) main_camera4_pane_t2_ParamLimits

0x6403,	// (0x0006228b) main_camera4_pane_t2

0x0001,

0xf71c,	// (0x0006b5a4) main_camera4_pane_t_ParamLimits

0xf71c,	// (0x0006b5a4) main_camera4_pane_t

0x6498,	// (0x00062320) aid_touch_area_vid4_ParamLimits

0x6498,	// (0x00062320) aid_touch_area_vid4

0x64d8,	// (0x00062360) main_video4_pane_g5_ParamLimits

0x64d8,	// (0x00062360) main_video4_pane_g5

0x64fc,	// (0x00062384) vid4_progress_pane_ParamLimits

0x64fc,	// (0x00062384) vid4_progress_pane

0xd87d,	// (0x00069705) main_cset_slider_pane_g18_ParamLimits

0xd87d,	// (0x00069705) main_cset_slider_pane_g18

0xda7e,	// (0x00069906) cell_cam4_burst_pane_g2_ParamLimits

0xda7e,	// (0x00069906) cell_cam4_burst_pane_g2

0x0001,

0xf84c,	// (0x0006b6d4) cell_cam4_burst_pane_g_ParamLimits

0xf84c,	// (0x0006b6d4) cell_cam4_burst_pane_g

0x7494,	// (0x0006331c) bg_cl_pane_ParamLimits

0x7494,	// (0x0006331c) bg_cl_pane

0x74a0,	// (0x00063328) cl_header_pane_ParamLimits

0x74a0,	// (0x00063328) cl_header_pane

0x74ac,	// (0x00063334) cl_listscroll_pane_ParamLimits

0x74ac,	// (0x00063334) cl_listscroll_pane

0xdbcc,	// (0x00069a54) bg_cl_pane_g1

0xdbd4,	// (0x00069a5c) bg_cl_pane_g2

0xdbdc,	// (0x00069a64) bg_cl_pane_g3

0xdbe4,	// (0x00069a6c) bg_cl_pane_g4

0xdbec,	// (0x00069a74) bg_cl_pane_g5

0xdbf4,	// (0x00069a7c) bg_cl_pane_g6

0xdbfc,	// (0x00069a84) bg_cl_pane_g7

0xdc04,	// (0x00069a8c) bg_cl_pane_g8

0xdc0c,	// (0x00069a94) bg_cl_pane_g9

0x0008,

0x0938,	// (0x0005c7c0) bg_cl_pane_g

0x74b8,	// (0x00063340) aid_height_cl_leading_ParamLimits

0x74b8,	// (0x00063340) aid_height_cl_leading

0x74c4,	// (0x0006334c) aid_height_cl_text_ParamLimits

0x74c4,	// (0x0006334c) aid_height_cl_text

0xe65c,	// (0x0006a4e4) bg_cl_header_pane_ParamLimits

0xe65c,	// (0x0006a4e4) bg_cl_header_pane

0x74dc,	// (0x00063364) cl_header_pane_g1_ParamLimits

0x74dc,	// (0x00063364) cl_header_pane_g1

0x74e9,	// (0x00063371) cl_header_pane_t1_ParamLimits

0x74e9,	// (0x00063371) cl_header_pane_t1

0xdc14,	// (0x00069a9c) cl_list_pane

0xd850,	// (0x000696d8) hc_scroll_pane_cp01

0xad20,	// (0x00066ba8) bg_cl_header_pane_g1

0xd736,	// (0x000695be) bg_cl_header_pane_g2

0xad40,	// (0x00066bc8) bg_cl_header_pane_g3

0xd746,	// (0x000695ce) bg_cl_header_pane_g4

0xd73e,	// (0x000695c6) bg_cl_header_pane_g5

0xd96c,	// (0x000697f4) bg_cl_header_pane_g6

0xd75e,	// (0x000695e6) bg_cl_header_pane_g7

0xd766,	// (0x000695ee) bg_cl_header_pane_g8

0xd756,	// (0x000695de) bg_cl_header_pane_g9

0x0008,

0xf887,	// (0x0006b70f) bg_cl_header_pane_g

0x74fb,	// (0x00063383) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74fb,	// (0x00063383) hc_cl_list_double_graphic_heading_pane

0x750c,	// (0x00063394) hc_cl_list_single_graphic_pane_ParamLimits

0x750c,	// (0x00063394) hc_cl_list_single_graphic_pane

0x7525,	// (0x000633ad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7525,	// (0x000633ad) hc_cl_list_single_graphic_pane_g1

0x7531,	// (0x000633b9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7531,	// (0x000633b9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf89a,	// (0x0006b722) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf89a,	// (0x0006b722) hc_cl_list_single_graphic_pane_g

0x7545,	// (0x000633cd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7545,	// (0x000633cd) hc_cl_list_single_graphic_pane_t1

0x7525,	// (0x000633ad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7525,	// (0x000633ad) hc_cl_list_double_graphic_heading_pane_g1

0x755a,	// (0x000633e2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x755a,	// (0x000633e2) hc_cl_list_double_graphic_heading_pane_g2

0x756e,	// (0x000633f6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x756e,	// (0x000633f6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf89f,	// (0x0006b727) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf89f,	// (0x0006b727) hc_cl_list_double_graphic_heading_pane_g

0x7582,	// (0x0006340a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7582,	// (0x0006340a) hc_cl_list_double_graphic_heading_pane_t1

0x7597,	// (0x0006341f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7597,	// (0x0006341f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8a6,	// (0x0006b72e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8a6,	// (0x0006b72e) hc_cl_list_double_graphic_heading_pane_t

0x75b4,	// (0x0006343c) vid4_progress_pane_g1

0x75c4,	// (0x0006344c) vid4_progress_pane_g2

0x75d4,	// (0x0006345c) vid4_progress_pane_g3

0x75e6,	// (0x0006346e) vid4_progress_pane_g4

0x0004,

0xf8ab,	// (0x0006b733) vid4_progress_pane_g

0x75fe,	// (0x00063486) vid4_progress_pane_t1

0x7614,	// (0x0006349c) vid4_progress_pane_t2

0x0002,

0xf8b6,	// (0x0006b73e) vid4_progress_pane_t

0x763e,	// (0x000634c6) wait_bar_pane_cp07

0xcb46,	// (0x000689ce) blid_firmament_pane_ParamLimits

0xcb89,	// (0x00068a11) popup_blid_sat_info2_window_g1

0xcbad,	// (0x00068a35) popup_blid_sat_info2_window_t3

0xcbbb,	// (0x00068a43) popup_blid_sat_info2_window_t4

0xcbc9,	// (0x00068a51) popup_blid_sat_info2_window_t5

0xcbd7,	// (0x00068a5f) popup_blid_sat_info2_window_t6

0xcbe7,	// (0x00068a6f) popup_blid_sat_info2_window_t7

0xcbf5,	// (0x00068a7d) popup_blid_sat_info2_window_t8

0xcc03,	// (0x00068a8b) popup_blid_sat_info2_window_t9

0xcc11,	// (0x00068a99) popup_blid_sat_info2_window_t10

0xccdf,	// (0x00068b67) aid_firma_cardinal_ParamLimits

0xccf3,	// (0x00068b7b) blid_firmament_pane_t1_ParamLimits

0xcd0a,	// (0x00068b92) blid_firmament_pane_t2_ParamLimits

0xcd21,	// (0x00068ba9) blid_firmament_pane_t3_ParamLimits

0xcd38,	// (0x00068bc0) blid_firmament_pane_t4_ParamLimits

0x0584,	// (0x0005c40c) blid_firmament_pane_t_ParamLimits

0xcd4f,	// (0x00068bd7) blid_sat_info_pane_ParamLimits

0x4365,	// (0x000601ed) main_cam_set_pane_ParamLimits

0x58a3,	// (0x0006172b) aid_size_cell_colour_35_ParamLimits

0x58bd,	// (0x00061745) aid_size_cell_colour_112_ParamLimits

0x58d4,	// (0x0006175c) aid_size_cell_effect_ParamLimits

0xa5ae,	// (0x00066436) bg_tb_trans_pane_cp02_ParamLimits

0xb084,	// (0x00066f0c) heading_imed_pane_ParamLimits

0x58ee,	// (0x00061776) listscroll_imed_pane_ParamLimits

0xbf71,	// (0x00067df9) popup_call2_audio_first_window_g5_ParamLimits

0xbf71,	// (0x00067df9) popup_call2_audio_first_window_g5

0x6034,	// (0x00061ebc) aid_size_touch_image3_arrow_left_ParamLimits

0x6034,	// (0x00061ebc) aid_size_touch_image3_arrow_left

0x604a,	// (0x00061ed2) aid_size_touch_image3_arrow_right_ParamLimits

0x604a,	// (0x00061ed2) aid_size_touch_image3_arrow_right

0x7629,	// (0x000634b1) vid4_progress_pane_t3

0x5b8c,	// (0x00061a14) main_hwr_training_symbol_option_pane_ParamLimits

0x5b8c,	// (0x00061a14) main_hwr_training_symbol_option_pane

0xd592,	// (0x0006941a) popup_hwr_training_preview_window_ParamLimits

0xd592,	// (0x0006941a) popup_hwr_training_preview_window

0x5bed,	// (0x00061a75) hwr_training_navi_pane_g5_ParamLimits

0x5bed,	// (0x00061a75) hwr_training_navi_pane_g5

0xd724,	// (0x000695ac) popup_char_count_window

0x1157,	// (0x0005cfdf) bg_popup_sub_pane_cp20_ParamLimits

0x6f4b,	// (0x00062dd3) list_vitu2_match_list_pane_ParamLimits

0x6f57,	// (0x00062ddf) vitu2_page_scroll_pane_ParamLimits

0x6f57,	// (0x00062ddf) vitu2_page_scroll_pane

0xdc1d,	// (0x00069aa5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc1d,	// (0x00069aa5) list_single_hwr_training_symbol_option_pane

0xdc30,	// (0x00069ab8) list_single_hwr_training_symbol_option_pane_g1

0xdc38,	// (0x00069ac0) list_single_hwr_training_symbol_option_pane_t1

0xdc46,	// (0x00069ace) bg_button_pane_cp023

0xdc4f,	// (0x00069ad7) bg_button_pane_cp024

0x7689,	// (0x00063511) vitu2_page_scroll_pane_g1

0x7691,	// (0x00063519) vitu2_page_scroll_pane_g2

0x0001,

0xf8bd,	// (0x0006b745) vitu2_page_scroll_pane_g

0x7699,	// (0x00063521) vitu2_page_scroll_pane_t1

0xcaa6,	// (0x0006892e) popup_char_count_window_g1

0xdc82,	// (0x00069b0a) popup_char_count_window_g2

0xdc8b,	// (0x00069b13) popup_char_count_window_g3

0x0002,

0x0986,	// (0x0005c80e) popup_char_count_window_g

0xdc94,	// (0x00069b1c) popup_char_count_window_t1

0x1171,	// (0x0005cff9) main_vded2_pane

0xd291,	// (0x00069119) aid_size_cell_imed_line

0xd29b,	// (0x00069123) grid_imed_line_width_pane

0x656a,	// (0x000623f2) vid4_indicators_pane_g4

0xdca2,	// (0x00069b2a) cell_imed_line_width_pane_ParamLimits

0xdca2,	// (0x00069b2a) cell_imed_line_width_pane

0xdcb6,	// (0x00069b3e) cell_imed_line_width_pane_g1

0xd93c,	// (0x000697c4) cell_imed_line_width_pane_g2

0x0001,

0xf8c2,	// (0x0006b74a) cell_imed_line_width_pane_g

0x76a8,	// (0x00063530) main_vded2_pane_g1_ParamLimits

0x76a8,	// (0x00063530) main_vded2_pane_g1

0x76b5,	// (0x0006353d) main_vded2_pane_g2_ParamLimits

0x76b5,	// (0x0006353d) main_vded2_pane_g2

0x0001,

0xf8c7,	// (0x0006b74f) main_vded2_pane_g_ParamLimits

0xf8c7,	// (0x0006b74f) main_vded2_pane_g

0x76c3,	// (0x0006354b) vded2_slider_pane_ParamLimits

0x76c3,	// (0x0006354b) vded2_slider_pane

0x76d0,	// (0x00063558) aid_size_touch_vded2_end

0x76da,	// (0x00063562) aid_size_touch_vded2_playhead

0xdcbf,	// (0x00069b47) aid_size_touch_vded2_start

0xdcc7,	// (0x00069b4f) vded2_slider_bg_pane

0xdcd0,	// (0x00069b58) vded2_slider_pane_g1

0xdcd9,	// (0x00069b61) vded2_slider_pane_g2

0x76e2,	// (0x0006356a) vded2_slider_pane_g3

0x0002,

0xf8cc,	// (0x0006b754) vded2_slider_pane_g

0xdce1,	// (0x00069b69) vded2_slider_bg_pane_g1

0xdcea,	// (0x00069b72) vded2_slider_bg_pane_g2

0xdcf3,	// (0x00069b7b) vded2_slider_bg_pane_g3

0x0002,

0x099e,	// (0x0005c826) vded2_slider_bg_pane_g

0x3c4d,	// (0x0005fad5) aid_postcard_touch_down_pane_ParamLimits

0x3c4d,	// (0x0005fad5) aid_postcard_touch_down_pane

0x3c5d,	// (0x0005fae5) aid_postcard_touch_up_pane_ParamLimits

0x3c5d,	// (0x0005fae5) aid_postcard_touch_up_pane

0x1171,	// (0x0005cff9) main_blid2_pane

0x438e,	// (0x00060216) popup_blid2_search_window

0x9cf5,	// (0x00065b7d) blid2_gps_pane

0x9cf5,	// (0x00065b7d) blid2_navig_pane

0x9cf5,	// (0x00065b7d) blid2_search_pane

0x9cf5,	// (0x00065b7d) blid2_tripm_pane

0x76eb,	// (0x00063573) blid2_search_pane_g1_ParamLimits

0x76eb,	// (0x00063573) blid2_search_pane_g1

0x76fb,	// (0x00063583) blid2_search_pane_t1_ParamLimits

0x76fb,	// (0x00063583) blid2_search_pane_t1

0x770d,	// (0x00063595) aid_size_cell_blid2_gps_ParamLimits

0x770d,	// (0x00063595) aid_size_cell_blid2_gps

0x771d,	// (0x000635a5) blid2_gps_pane_g1_ParamLimits

0x771d,	// (0x000635a5) blid2_gps_pane_g1

0x7729,	// (0x000635b1) grid_blid2_satellite_pane_ParamLimits

0x7729,	// (0x000635b1) grid_blid2_satellite_pane

0x7739,	// (0x000635c1) blid2_navig_pane_g1_ParamLimits

0x7739,	// (0x000635c1) blid2_navig_pane_g1

0x7745,	// (0x000635cd) blid2_navig_pane_t1_ParamLimits

0x7745,	// (0x000635cd) blid2_navig_pane_t1

0x7757,	// (0x000635df) blid2_navig_pane_t2_ParamLimits

0x7757,	// (0x000635df) blid2_navig_pane_t2

0x0001,

0xf8d3,	// (0x0006b75b) blid2_navig_pane_t_ParamLimits

0xf8d3,	// (0x0006b75b) blid2_navig_pane_t

0x7769,	// (0x000635f1) blid2_navig_ring_pane_ParamLimits

0x7769,	// (0x000635f1) blid2_navig_ring_pane

0x7779,	// (0x00063601) blid2_speed_pane_ParamLimits

0x7779,	// (0x00063601) blid2_speed_pane

0x7785,	// (0x0006360d) blid2_tripm_pane_g1_ParamLimits

0x7785,	// (0x0006360d) blid2_tripm_pane_g1

0x7795,	// (0x0006361d) blid2_tripm_pane_g2_ParamLimits

0x7795,	// (0x0006361d) blid2_tripm_pane_g2

0x77a1,	// (0x00063629) blid2_tripm_pane_g3_ParamLimits

0x77a1,	// (0x00063629) blid2_tripm_pane_g3

0x77ad,	// (0x00063635) blid2_tripm_pane_g4_ParamLimits

0x77ad,	// (0x00063635) blid2_tripm_pane_g4

0x77b9,	// (0x00063641) blid2_tripm_pane_g5_ParamLimits

0x77b9,	// (0x00063641) blid2_tripm_pane_g5

0x0005,

0xf8d8,	// (0x0006b760) blid2_tripm_pane_g_ParamLimits

0xf8d8,	// (0x0006b760) blid2_tripm_pane_g

0x77d5,	// (0x0006365d) blid2_tripm_pane_t1_ParamLimits

0x77d5,	// (0x0006365d) blid2_tripm_pane_t1

0x77e9,	// (0x00063671) blid2_tripm_pane_t2_ParamLimits

0x77e9,	// (0x00063671) blid2_tripm_pane_t2

0x77fb,	// (0x00063683) blid2_tripm_pane_t3_ParamLimits

0x77fb,	// (0x00063683) blid2_tripm_pane_t3

0x0003,

0xf8e5,	// (0x0006b76d) blid2_tripm_pane_t_ParamLimits

0xf8e5,	// (0x0006b76d) blid2_tripm_pane_t

0x782d,	// (0x000636b5) cell_blid2_satellite_pane_ParamLimits

0x782d,	// (0x000636b5) cell_blid2_satellite_pane

0x7847,	// (0x000636cf) cell_blid2_satellite_pane_g1

0xdcfc,	// (0x00069b84) cell_blid2_satellite_pane_t1

0xcd5f,	// (0x00068be7) blid2_speed_pane_g1

0xdd0a,	// (0x00069b92) blid2_speed_pane_t1

0xdd18,	// (0x00069ba0) blid2_speed_pane_t2

0x0001,

0x09c0,	// (0x0005c848) blid2_speed_pane_t

0xcd5f,	// (0x00068be7) blid2_navig_ring_pane_g1

0x7850,	// (0x000636d8) blid2_navig_ring_pane_g2

0x7858,	// (0x000636e0) blid2_navig_ring_pane_g3

0x7860,	// (0x000636e8) blid2_navig_ring_pane_g4

0x7868,	// (0x000636f0) blid2_navig_ring_pane_g5

0x0004,

0xf8ee,	// (0x0006b776) blid2_navig_ring_pane_g

0x9cf5,	// (0x00065b7d) bg_popup_window_pane_cp011

0xdd26,	// (0x00069bae) popup_blid2_search_window_g1

0xdd2e,	// (0x00069bb6) popup_blid2_search_window_t1

0xdd3c,	// (0x00069bc4) popup_blid2_search_window_t2

0x0001,

0x09d0,	// (0x0005c858) popup_blid2_search_window_t

0xac2f,	// (0x00066ab7) main_browser_pane_g1

0xa919,	// (0x000667a1) main_browser_pane_ParamLimits

0x4365,	// (0x000601ed) bg_button_pane_cp011_ParamLimits

0x6819,	// (0x000626a1) cell_vitu2_function_pane_g1_ParamLimits

0xc94b,	// (0x000687d3) bg_popup_sub_pane_cp22_ParamLimits

0x7149,	// (0x00062fd1) input_focus_pane_cp08_ParamLimits

0x7160,	// (0x00062fe8) popup_vitu2_query_button_pane_ParamLimits

0x7160,	// (0x00062fe8) popup_vitu2_query_button_pane

0x7171,	// (0x00062ff9) popup_vitu2_query_input_button_pane

0xd9d4,	// (0x0006985c) popup_vitu2_query_window_g1_ParamLimits

0x717b,	// (0x00063003) popup_vitu2_query_window_g2_ParamLimits

0xf82f,	// (0x0006b6b7) popup_vitu2_query_window_g_ParamLimits

0x9cf5,	// (0x00065b7d) bg_button_pane_cp026

0x7870,	// (0x000636f8) popup_vitu2_query_input_button_pane_g1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp025

0xdd4a,	// (0x00069bd2) popup_vitu2_query_button_pane_t1

0x4de4,	// (0x00060c6c) main_mp3_pane_t6

0x4df4,	// (0x00060c7c) popup_slider_window_cp01

0x6447,	// (0x000622cf) cam4_battery_pane

0x6527,	// (0x000623af) cam4_battery_pane_cp02

0x75ac,	// (0x00063434) cam4_battery_pane_cp01

0x75ac,	// (0x00063434) cam4_battery_pane_cp03

0xd944,	// (0x000697cc) cam4_battery_pane_g1

0xcd5f,	// (0x00068be7) cam4_battery_pane_g2

0x0001,

0xf8f9,	// (0x0006b781) cam4_battery_pane_g

0xcc1f,	// (0x00068aa7) popup_blid_sat_info2_window_t11

0xb396,	// (0x0006721e) aid_size_touch_mv_arrow_left_ParamLimits

0xb3bf,	// (0x00067247) aid_size_touch_mv_arrow_right_ParamLimits

0xb41d,	// (0x000672a5) navi_pane_g1_ParamLimits

0xb429,	// (0x000672b1) navi_pane_g2_ParamLimits

0xb457,	// (0x000672df) navi_pane_g3_ParamLimits

0x0296,	// (0x0005c11e) navi_pane_g_ParamLimits

0x3613,	// (0x0005f49b) navi_pane_mv_t1_ParamLimits

0x58fa,	// (0x00061782) grid_imed_effect_pane_ParamLimits

0x2009,	// (0x0005de91) aid_placing_vt_slider_lsc

0xab7e,	// (0x00066a06) aid_placing_vt_slider_prt

0xa5ae,	// (0x00066436) bg_tb_trans_pane_cp01_ParamLimits

0xcee2,	// (0x00068d6a) popup_image_details_window_g1_ParamLimits

0xcef5,	// (0x00068d7d) popup_image_details_window_g2_ParamLimits

0xcf0a,	// (0x00068d92) popup_image_details_window_g3_ParamLimits

0xcf0a,	// (0x00068d92) popup_image_details_window_g3

0x05c9,	// (0x0005c451) popup_image_details_window_g_ParamLimits

0xcf1e,	// (0x00068da6) popup_image_details_window_t1_ParamLimits

0xcf30,	// (0x00068db8) popup_image_details_window_t2_ParamLimits

0xcf49,	// (0x00068dd1) popup_image_details_window_t3_ParamLimits

0xcf5d,	// (0x00068de5) popup_image_details_window_t4_ParamLimits

0xcf78,	// (0x00068e00) popup_image_details_window_t5_ParamLimits

0x05d0,	// (0x0005c458) popup_image_details_window_t_ParamLimits

0x74d0,	// (0x00063358) cl_header_name_pane_ParamLimits

0x74d0,	// (0x00063358) cl_header_name_pane

0x7878,	// (0x00063700) cl_header_name_pane_t1_ParamLimits

0x7878,	// (0x00063700) cl_header_name_pane_t1

0x788f,	// (0x00063717) cl_header_name_pane_t2_ParamLimits

0x788f,	// (0x00063717) cl_header_name_pane_t2

0x78b9,	// (0x00063741) cl_header_name_pane_t3_ParamLimits

0x78b9,	// (0x00063741) cl_header_name_pane_t3

0x0002,

0xf8fe,	// (0x0006b786) cl_header_name_pane_t_ParamLimits

0xf8fe,	// (0x0006b786) cl_header_name_pane_t

0xb4e6,	// (0x0006736e) navi_pane_mv_g2_ParamLimits

0xd6fe,	// (0x00069586) field_vitu2_entry_pane_g1_ParamLimits

0xd70a,	// (0x00069592) field_vitu2_entry_pane_g2_ParamLimits

0xd716,	// (0x0006959e) field_vitu2_entry_pane_g3_ParamLimits

0xd716,	// (0x0006959e) field_vitu2_entry_pane_g3

0x07d0,	// (0x0005c658) field_vitu2_entry_pane_g_ParamLimits

0x67ad,	// (0x00062635) cell_vitu2_itu_pane_g1_ParamLimits

0x67bf,	// (0x00062647) cell_vitu2_itu_pane_g2_ParamLimits

0x67bf,	// (0x00062647) cell_vitu2_itu_pane_g2

0x0001,

0xf753,	// (0x0006b5db) cell_vitu2_itu_pane_g_ParamLimits

0xf753,	// (0x0006b5db) cell_vitu2_itu_pane_g

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp05_ParamLimits

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp05

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp03

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp04

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp10_ParamLimits

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp10

0x7472,	// (0x000632fa) bg_vkb2_func_pane_cp08

0x7458,	// (0x000632e0) bg_vkb2_func_pane_cp06

0x7466,	// (0x000632ee) bg_vkb2_func_pane_cp07

0xdc58,	// (0x00069ae0) bg_vkb2_func_pane_cp11_ParamLimits

0xdc58,	// (0x00069ae0) bg_vkb2_func_pane_cp11

0xdc6d,	// (0x00069af5) bg_vkb2_func_pane_cp12_ParamLimits

0xdc6d,	// (0x00069af5) bg_vkb2_func_pane_cp12

0x9cf5,	// (0x00065b7d) bg_vkb2_func_pane_cp09

0xd736,	// (0x000695be) bg_vkb2_func_pane_g1

0xad40,	// (0x00066bc8) bg_vkb2_func_pane_g2

0xd73e,	// (0x000695c6) bg_vkb2_func_pane_g3

0xd746,	// (0x000695ce) bg_vkb2_func_pane_g4

0xd96c,	// (0x000697f4) bg_vkb2_func_pane_g5

0xd75e,	// (0x000695e6) bg_vkb2_func_pane_g6

0xd766,	// (0x000695ee) bg_vkb2_func_pane_g7

0xd756,	// (0x000695de) bg_vkb2_func_pane_g8

0xad20,	// (0x00066ba8) bg_vkb2_func_pane_g9

0x0008,

0xf905,	// (0x0006b78d) bg_vkb2_func_pane_g

0x77c7,	// (0x0006364f) blid2_tripm_pane_g6_ParamLimits

0x77c7,	// (0x0006364f) blid2_tripm_pane_g6

0xd650,	// (0x000694d8) mp4_progress_pane_g1

0x7821,	// (0x000636a9) blid2_tripm_values_pane_ParamLimits

0x7821,	// (0x000636a9) blid2_tripm_values_pane

0x78de,	// (0x00063766) blid2_tripm_values_pane_t1

0x78ec,	// (0x00063774) blid2_tripm_values_pane_t2

0x78fa,	// (0x00063782) blid2_tripm_values_pane_t3

0x7908,	// (0x00063790) blid2_tripm_values_pane_t4

0x7916,	// (0x0006379e) blid2_tripm_values_pane_t5

0x7924,	// (0x000637ac) blid2_tripm_values_pane_t6

0x7932,	// (0x000637ba) blid2_tripm_values_pane_t7

0x7940,	// (0x000637c8) blid2_tripm_values_pane_t8

0x794e,	// (0x000637d6) blid2_tripm_values_pane_t9

0x0008,

0xf918,	// (0x0006b7a0) blid2_tripm_values_pane_t

0x2049,	// (0x0005ded1) call_video_pane_t1_ParamLimits

0x206a,	// (0x0005def2) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0006b0f2) call_video_pane_t_ParamLimits

0x3b54,	// (0x0005f9dc) msg_header_pane_g1_ParamLimits

0xb6ce,	// (0x00067556) msg_header_pane_g2_ParamLimits

0xb6ce,	// (0x00067556) msg_header_pane_g2

0x0001,

0xf45e,	// (0x0006b2e6) msg_header_pane_g_ParamLimits

0xf45e,	// (0x0006b2e6) msg_header_pane_g

0xa919,	// (0x000667a1) main_clock2_pane_ParamLimits

0x5674,	// (0x000614fc) grid_clock2_toolbar_pane_ParamLimits

0x5674,	// (0x000614fc) grid_clock2_toolbar_pane

0x5674,	// (0x000614fc) listscroll_clock2_pane_ParamLimits

0x5674,	// (0x000614fc) listscroll_clock2_pane

0x5724,	// (0x000615ac) main_clock2_pane_t3_ParamLimits

0x5724,	// (0x000615ac) main_clock2_pane_t3

0x5736,	// (0x000615be) main_clock2_pane_t4_ParamLimits

0x5736,	// (0x000615be) main_clock2_pane_t4

0xdd58,	// (0x00069be0) cell_clock2_toolbar_pane

0xdd60,	// (0x00069be8) cell_clock2_toolbar_pane_cp01

0xdd60,	// (0x00069be8) cell_clock2_toolbar_pane_cp02

0xdd68,	// (0x00069bf0) cell_clock2_toolbar_pane_cp03

0xdd70,	// (0x00069bf8) list_clock2_pane

0xb30c,	// (0x00067194) scroll_pane_cp10

0xdd78,	// (0x00069c00) list_single_clock2_pane_ParamLimits

0xdd78,	// (0x00069c00) list_single_clock2_pane

0xaae7,	// (0x0006696f) list_highlight_pane_cp08

0xdd85,	// (0x00069c0d) list_single_clock2_pane_t1

0xdda1,	// (0x00069c29) list_single_clock2_pane_t2

0x0001,

0xf92b,	// (0x0006b7b3) list_single_clock2_pane_t

0x9cf5,	// (0x00065b7d) bg_button_pane_cp10

0xddaf,	// (0x00069c37) cell_clock2_toolbar_pane_g1

0x3bbb,	// (0x0005fa43) aid_main_viewer_pane_g1_ParamLimits

0x3bbb,	// (0x0005fa43) aid_main_viewer_pane_g1

0x3bc7,	// (0x0005fa4f) aid_main_viewer_pane_g2_ParamLimits

0x3bc7,	// (0x0005fa4f) aid_main_viewer_pane_g2

0x3bd3,	// (0x0005fa5b) aid_main_viewer_pane_g3_ParamLimits

0x3bd3,	// (0x0005fa5b) aid_main_viewer_pane_g3

0x3be4,	// (0x0005fa6c) aid_main_viewer_pane_g4_ParamLimits

0x3be4,	// (0x0005fa6c) aid_main_viewer_pane_g4

0x0003,

0xf46f,	// (0x0006b2f7) aid_main_viewer_pane_g_ParamLimits

0xf46f,	// (0x0006b2f7) aid_main_viewer_pane_g

0x4358,	// (0x000601e0) main_calc_pane_ParamLimits

0x4373,	// (0x000601fb) main_dialer2_pane_ParamLimits

0x1171,	// (0x0005cff9) main_cam6_pane

0x1171,	// (0x0005cff9) main_vid6_pane

0x5680,	// (0x00061508) listscroll_gen_pane_cp06_ParamLimits

0x5680,	// (0x00061508) listscroll_gen_pane_cp06

0x5748,	// (0x000615d0) main_clock2_pane_t5_ParamLimits

0x5748,	// (0x000615d0) main_clock2_pane_t5

0x5795,	// (0x0006161d) aid_call2_pane_cp10_ParamLimits

0x57a7,	// (0x0006162f) aid_call_pane_cp10_ParamLimits

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57b9,	// (0x00061641) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57b9,	// (0x00061641) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb38a,	// (0x00067212) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf65f,	// (0x0006b4e7) popup_clock_analogue_window_cp10_g_ParamLimits

0x57cf,	// (0x00061657) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5fe1,	// (0x00061e69) cell_dialer2_keypad_pane_g2_ParamLimits

0x5fe1,	// (0x00061e69) cell_dialer2_keypad_pane_g2

0x0001,

0xf6ed,	// (0x0006b575) cell_dialer2_keypad_pane_g_ParamLimits

0xf6ed,	// (0x0006b575) cell_dialer2_keypad_pane_g

0x5ffd,	// (0x00061e85) cell_dialer2_keypad_pane_t1

0x6ae4,	// (0x0006296c) main_cset_text2_pane_ParamLimits

0x6ae4,	// (0x0006296c) main_cset_text2_pane

0xdbc0,	// (0x00069a48) area_vitu2_query_pane_g1_ParamLimits

0x73f7,	// (0x0006327f) area_vitu2_query_pane_g2_ParamLimits

0xf873,	// (0x0006b6fb) area_vitu2_query_pane_g_ParamLimits

0xa1a2,	// (0x0006602a) area_vitu2_query_pane_t7_ParamLimits

0xa1a2,	// (0x0006602a) area_vitu2_query_pane_t7

0x7458,	// (0x000632e0) bg_button_pane_cp018_ParamLimits

0x7466,	// (0x000632ee) bg_button_pane_cp021_ParamLimits

0x7472,	// (0x000632fa) bg_button_pane_cp022_ParamLimits

0x7472,	// (0x000632fa) bg_vkb2_func_pane_cp08_ParamLimits

0x7458,	// (0x000632e0) bg_vkb2_func_pane_cp06_ParamLimits

0x7466,	// (0x000632ee) bg_vkb2_func_pane_cp07_ParamLimits

0x7483,	// (0x0006330b) input_focus_pane_cp09_ParamLimits

0x795c,	// (0x000637e4) cam6_autofocus_pane_ParamLimits

0x795c,	// (0x000637e4) cam6_autofocus_pane

0x797e,	// (0x00063806) cam6_image_uncrop_pane_ParamLimits

0x797e,	// (0x00063806) cam6_image_uncrop_pane

0x79ab,	// (0x00063833) cam6_indi_pane_ParamLimits

0x79ab,	// (0x00063833) cam6_indi_pane

0x79c5,	// (0x0006384d) cam6_mode_pane_ParamLimits

0x79c5,	// (0x0006384d) cam6_mode_pane

0x79d9,	// (0x00063861) cam6_timer_pane_ParamLimits

0x79d9,	// (0x00063861) cam6_timer_pane

0x79e5,	// (0x0006386d) cam6_zoom_pane_ParamLimits

0x79e5,	// (0x0006386d) cam6_zoom_pane

0x79fd,	// (0x00063885) cam6_mode_pane_g1_ParamLimits

0x79fd,	// (0x00063885) cam6_mode_pane_g1

0x7a09,	// (0x00063891) cam6_mode_pane_g2_ParamLimits

0x7a09,	// (0x00063891) cam6_mode_pane_g2

0x7a15,	// (0x0006389d) cam6_mode_pane_g3_ParamLimits

0x7a15,	// (0x0006389d) cam6_mode_pane_g3

0x7a21,	// (0x000638a9) cam6_mode_pane_g4_ParamLimits

0x7a21,	// (0x000638a9) cam6_mode_pane_g4

0x0003,

0xf930,	// (0x0006b7b8) cam6_mode_pane_g_ParamLimits

0xf930,	// (0x0006b7b8) cam6_mode_pane_g

0xdd93,	// (0x00069c1b) bg_tb_trans_pane_cp08_ParamLimits

0xdd93,	// (0x00069c1b) bg_tb_trans_pane_cp08

0xddb7,	// (0x00069c3f) cam6_battery_pane_ParamLimits

0xddb7,	// (0x00069c3f) cam6_battery_pane

0xddcd,	// (0x00069c55) cam6_indi_pane_g1_ParamLimits

0xddcd,	// (0x00069c55) cam6_indi_pane_g1

0xdddf,	// (0x00069c67) cam6_indi_pane_g2_ParamLimits

0xdddf,	// (0x00069c67) cam6_indi_pane_g2

0xddf1,	// (0x00069c79) cam6_indi_pane_g3_ParamLimits

0xddf1,	// (0x00069c79) cam6_indi_pane_g3

0x0002,

0x0a15,	// (0x0005c89d) cam6_indi_pane_g_ParamLimits

0x0a15,	// (0x0005c89d) cam6_indi_pane_g

0xde03,	// (0x00069c8b) cam6_indi_pane_t1_ParamLimits

0xde03,	// (0x00069c8b) cam6_indi_pane_t1

0x65a7,	// (0x0006242f) cam6_autofocus_pane_g1

0x659f,	// (0x00062427) cam6_autofocus_pane_g2

0x65b7,	// (0x0006243f) cam6_autofocus_pane_g3

0x65af,	// (0x00062437) cam6_autofocus_pane_g4

0x0003,

0xf939,	// (0x0006b7c1) cam6_autofocus_pane_g

0xde29,	// (0x00069cb1) cam6_timer_pane_g1

0xde31,	// (0x00069cb9) cam6_timer_pane_t1

0xde3f,	// (0x00069cc7) cam6_zoom_cont_pane

0xde47,	// (0x00069ccf) cam6_zoom_pane_g1

0xde4f,	// (0x00069cd7) cam6_zoom_pane_g2

0x7a2d,	// (0x000638b5) cam6_zoom_pane_g3

0x0002,

0xf942,	// (0x0006b7ca) cam6_zoom_pane_g

0xcd5f,	// (0x00068be7) cam6_battery_pane_g1

0xcd5f,	// (0x00068be7) cam6_battery_pane_g2

0x0001,

0x058d,	// (0x0005c415) cam6_battery_pane_g

0xde57,	// (0x00069cdf) cam6_zoom_cont_pane_g1

0xde60,	// (0x00069ce8) cam6_zoom_cont_pane_g2

0xde69,	// (0x00069cf1) cam6_zoom_cont_pane_g3

0x0002,

0x0a2c,	// (0x0005c8b4) cam6_zoom_cont_pane_g

0x7a4a,	// (0x000638d2) cam6_mode_pane_cp_ParamLimits

0x7a4a,	// (0x000638d2) cam6_mode_pane_cp

0x7a5e,	// (0x000638e6) cam6_zoom_pane_cp_ParamLimits

0x7a5e,	// (0x000638e6) cam6_zoom_pane_cp

0x7a76,	// (0x000638fe) vid6_image_uncrop_cif_pane_ParamLimits

0x7a76,	// (0x000638fe) vid6_image_uncrop_cif_pane

0x7aa2,	// (0x0006392a) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aa2,	// (0x0006392a) vid6_image_uncrop_nhd_pane

0x7abf,	// (0x00063947) vid6_image_uncrop_vga_pane_ParamLimits

0x7abf,	// (0x00063947) vid6_image_uncrop_vga_pane

0x7ade,	// (0x00063966) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ade,	// (0x00063966) vid6_image_uncrop_wvga_pane

0x7afb,	// (0x00063983) vid6_indi_pane_ParamLimits

0x7afb,	// (0x00063983) vid6_indi_pane

0xdd93,	// (0x00069c1b) bg_tb_trans_pane_cp09_ParamLimits

0xdd93,	// (0x00069c1b) bg_tb_trans_pane_cp09

0xde81,	// (0x00069d09) cam6_battery_pane_cp_ParamLimits

0xde81,	// (0x00069d09) cam6_battery_pane_cp

0xde8d,	// (0x00069d15) vid6_indi_pane_g1_ParamLimits

0xde8d,	// (0x00069d15) vid6_indi_pane_g1

0xde9f,	// (0x00069d27) vid6_indi_pane_g2_ParamLimits

0xde9f,	// (0x00069d27) vid6_indi_pane_g2

0xdeb1,	// (0x00069d39) vid6_indi_pane_g3_ParamLimits

0xdeb1,	// (0x00069d39) vid6_indi_pane_g3

0xdec6,	// (0x00069d4e) vid6_indi_pane_g4_ParamLimits

0xdec6,	// (0x00069d4e) vid6_indi_pane_g4

0xdedb,	// (0x00069d63) vid6_indi_pane_g5_ParamLimits

0xdedb,	// (0x00069d63) vid6_indi_pane_g5

0x0004,

0x0a33,	// (0x0005c8bb) vid6_indi_pane_g_ParamLimits

0x0a33,	// (0x0005c8bb) vid6_indi_pane_g

0xdef5,	// (0x00069d7d) vid6_indi_pane_t1_ParamLimits

0xdef5,	// (0x00069d7d) vid6_indi_pane_t1

0xdf0b,	// (0x00069d93) vid6_indi_pane_t2_ParamLimits

0xdf0b,	// (0x00069d93) vid6_indi_pane_t2

0xdf33,	// (0x00069dbb) vid6_indi_pane_t3_ParamLimits

0xdf33,	// (0x00069dbb) vid6_indi_pane_t3

0xdf5b,	// (0x00069de3) vid6_indi_pane_t4_ParamLimits

0xdf5b,	// (0x00069de3) vid6_indi_pane_t4

0x0003,

0x0a3e,	// (0x0005c8c6) vid6_indi_pane_t_ParamLimits

0x0a3e,	// (0x0005c8c6) vid6_indi_pane_t

0xdf7f,	// (0x00069e07) wait_bar_pane_cp08

0x7b20,	// (0x000639a8) main_cset_text2_pane_t1_ParamLimits

0x7b20,	// (0x000639a8) main_cset_text2_pane_t1

0x7a35,	// (0x000638bd) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a35,	// (0x000638bd) listscroll_gen_pane_cp06_t1

0x1171,	// (0x0005cff9) main_cam6_set_pane

0x6439,	// (0x000622c1) bg_tb_trans_pane_cp06_ParamLimits

0x644f,	// (0x000622d7) cam4_indicators_pane_g1_ParamLimits

0x6460,	// (0x000622e8) cam4_indicators_pane_g2_ParamLimits

0xf72a,	// (0x0006b5b2) cam4_indicators_pane_g_ParamLimits

0x647e,	// (0x00062306) cam4_indicators_pane_t1_ParamLimits

0x4365,	// (0x000601ed) bg_tb_trans_pane_cp07_ParamLimits

0x6531,	// (0x000623b9) vid4_indicators_pane_g1_ParamLimits

0x6545,	// (0x000623cd) vid4_indicators_pane_g2_ParamLimits

0x6559,	// (0x000623e1) vid4_indicators_pane_g3_ParamLimits

0x656a,	// (0x000623f2) vid4_indicators_pane_g4_ParamLimits

0xf73c,	// (0x0006b5c4) vid4_indicators_pane_g_ParamLimits

0x6588,	// (0x00062410) vid4_indicators_pane_t1_ParamLimits

0x75b4,	// (0x0006343c) vid4_progress_pane_g1_ParamLimits

0x75c4,	// (0x0006344c) vid4_progress_pane_g2_ParamLimits

0x75d4,	// (0x0006345c) vid4_progress_pane_g3_ParamLimits

0x75e6,	// (0x0006346e) vid4_progress_pane_g4_ParamLimits

0xf8ab,	// (0x0006b733) vid4_progress_pane_g_ParamLimits

0x75fe,	// (0x00063486) vid4_progress_pane_t1_ParamLimits

0x7614,	// (0x0006349c) vid4_progress_pane_t2_ParamLimits

0x7629,	// (0x000634b1) vid4_progress_pane_t3_ParamLimits

0xf8b6,	// (0x0006b73e) vid4_progress_pane_t_ParamLimits

0x763e,	// (0x000634c6) wait_bar_pane_cp07_ParamLimits

0x7b53,	// (0x000639db) main_cam6_set_pane_g2_ParamLimits

0x7b53,	// (0x000639db) main_cam6_set_pane_g2

0x7b5f,	// (0x000639e7) main_cset6_listscroll_pane_ParamLimits

0x7b5f,	// (0x000639e7) main_cset6_listscroll_pane

0x7b8a,	// (0x00063a12) main_cset6_slider_pane_ParamLimits

0x7b8a,	// (0x00063a12) main_cset6_slider_pane

0x7b96,	// (0x00063a1e) main_cset6_text2_pane_ParamLimits

0x7b96,	// (0x00063a1e) main_cset6_text2_pane

0xdf8e,	// (0x00069e16) main_cset6_text_pane

0xdf96,	// (0x00069e1e) main_cset_list_pane_copy1_ParamLimits

0xdf96,	// (0x00069e1e) main_cset_list_pane_copy1

0xdfa6,	// (0x00069e2e) scroll_pane_cp028_copy1

0x7ba9,	// (0x00063a31) cset_list_set_pane_copy1

0x7bbc,	// (0x00063a44) aid_position_infowindow_above_copy1

0x7bc4,	// (0x00063a4c) aid_position_infowindow_below_copy1

0x7bcc,	// (0x00063a54) cset_list_set_pane_g1_copy1

0xa106,	// (0x00065f8e) cset_list_set_pane_g3_copy1_ParamLimits

0xa106,	// (0x00065f8e) cset_list_set_pane_g3_copy1

0xa115,	// (0x00065f9d) cset_list_set_pane_t1_copy1_ParamLimits

0xa115,	// (0x00065f9d) cset_list_set_pane_t1_copy1

0xa5ae,	// (0x00066436) list_highlight_pane_cp021_copy1_ParamLimits

0xa5ae,	// (0x00066436) list_highlight_pane_cp021_copy1

0xdfaf,	// (0x00069e37) cset6_slider_pane_ParamLimits

0xdfaf,	// (0x00069e37) cset6_slider_pane

0xdfdb,	// (0x00069e63) main_cset6_slider_pane_g1_ParamLimits

0xdfdb,	// (0x00069e63) main_cset6_slider_pane_g1

0x7bd4,	// (0x00063a5c) main_cset6_slider_pane_g2_ParamLimits

0x7bd4,	// (0x00063a5c) main_cset6_slider_pane_g2

0xe003,	// (0x00069e8b) main_cset6_slider_pane_g3_ParamLimits

0xe003,	// (0x00069e8b) main_cset6_slider_pane_g3

0x7bfc,	// (0x00063a84) main_cset6_slider_pane_g4_ParamLimits

0x7bfc,	// (0x00063a84) main_cset6_slider_pane_g4

0x7c08,	// (0x00063a90) main_cset6_slider_pane_g5_ParamLimits

0x7c08,	// (0x00063a90) main_cset6_slider_pane_g5

0xd865,	// (0x000696ed) main_cset6_slider_pane_g7_ParamLimits

0xd865,	// (0x000696ed) main_cset6_slider_pane_g7

0xd871,	// (0x000696f9) main_cset6_slider_pane_g8_ParamLimits

0xd871,	// (0x000696f9) main_cset6_slider_pane_g8

0x7c16,	// (0x00063a9e) main_cset6_slider_pane_g9_ParamLimits

0x7c16,	// (0x00063a9e) main_cset6_slider_pane_g9

0x7c22,	// (0x00063aaa) main_cset6_slider_pane_g10_ParamLimits

0x7c22,	// (0x00063aaa) main_cset6_slider_pane_g10

0x7c2e,	// (0x00063ab6) main_cset6_slider_pane_g11_ParamLimits

0x7c2e,	// (0x00063ab6) main_cset6_slider_pane_g11

0x7c3a,	// (0x00063ac2) main_cset6_slider_pane_g12_ParamLimits

0x7c3a,	// (0x00063ac2) main_cset6_slider_pane_g12

0x7c46,	// (0x00063ace) main_cset6_slider_pane_g13_ParamLimits

0x7c46,	// (0x00063ace) main_cset6_slider_pane_g13

0x7c52,	// (0x00063ada) main_cset6_slider_pane_g14_ParamLimits

0x7c52,	// (0x00063ada) main_cset6_slider_pane_g14

0x7c5e,	// (0x00063ae6) main_cset6_slider_pane_g15_ParamLimits

0x7c5e,	// (0x00063ae6) main_cset6_slider_pane_g15

0x7c76,	// (0x00063afe) main_cset6_slider_pane_g16_ParamLimits

0x7c76,	// (0x00063afe) main_cset6_slider_pane_g16

0x7c84,	// (0x00063b0c) main_cset6_slider_pane_g17_ParamLimits

0x7c84,	// (0x00063b0c) main_cset6_slider_pane_g17

0x0011,

0xf949,	// (0x0006b7d1) main_cset6_slider_pane_g_ParamLimits

0xf949,	// (0x0006b7d1) main_cset6_slider_pane_g

0xe00f,	// (0x00069e97) main_cset6_slider_pane_t1_ParamLimits

0xe00f,	// (0x00069e97) main_cset6_slider_pane_t1

0x7caa,	// (0x00063b32) main_cset6_slider_pane_t2_ParamLimits

0x7caa,	// (0x00063b32) main_cset6_slider_pane_t2

0x7cd5,	// (0x00063b5d) main_cset6_slider_pane_t3_ParamLimits

0x7cd5,	// (0x00063b5d) main_cset6_slider_pane_t3

0x7d00,	// (0x00063b88) main_cset6_slider_pane_t4_ParamLimits

0x7d00,	// (0x00063b88) main_cset6_slider_pane_t4

0x7d2b,	// (0x00063bb3) main_cset6_slider_pane_t5_ParamLimits

0x7d2b,	// (0x00063bb3) main_cset6_slider_pane_t5

0xe050,	// (0x00069ed8) main_cset6_slider_pane_t7_ParamLimits

0xe050,	// (0x00069ed8) main_cset6_slider_pane_t7

0x7d58,	// (0x00063be0) main_cset6_slider_pane_t8_ParamLimits

0x7d58,	// (0x00063be0) main_cset6_slider_pane_t8

0x7d7c,	// (0x00063c04) main_cset6_slider_pane_t9_ParamLimits

0x7d7c,	// (0x00063c04) main_cset6_slider_pane_t9

0x7da0,	// (0x00063c28) main_cset6_slider_pane_t10_ParamLimits

0x7da0,	// (0x00063c28) main_cset6_slider_pane_t10

0x7dc4,	// (0x00063c4c) main_cset6_slider_pane_t11_ParamLimits

0x7dc4,	// (0x00063c4c) main_cset6_slider_pane_t11

0xe086,	// (0x00069f0e) main_cset6_slider_pane_t14_ParamLimits

0xe086,	// (0x00069f0e) main_cset6_slider_pane_t14

0xe0bf,	// (0x00069f47) main_cset6_slider_pane_t15_ParamLimits

0xe0bf,	// (0x00069f47) main_cset6_slider_pane_t15

0x000b,

0xf96e,	// (0x0006b7f6) main_cset6_slider_pane_t_ParamLimits

0xf96e,	// (0x0006b7f6) main_cset6_slider_pane_t

0xd997,	// (0x0006981f) cset_slider_pane_g1_copy1

0xd9a0,	// (0x00069828) cset_slider_pane_g2_copy1

0xd9a9,	// (0x00069831) cset_slider_pane_g3_copy1

0x9cf5,	// (0x00065b7d) bg_popup_sub_pane_cp011_copy1

0xe0f8,	// (0x00069f80) main_cset_text_pane_g1_copy1

0xd9e8,	// (0x00069870) main_cset_text_pane_t1_copy1

0xd9f6,	// (0x0006987e) main_cset_text_pane_t2_copy1

0xda04,	// (0x0006988c) main_cset_text_pane_t3_copy1

0xda12,	// (0x0006989a) main_cset_text_pane_t4_copy1

0xda20,	// (0x000698a8) main_cset_text_pane_t5_copy1

0xe100,	// (0x00069f88) main_cset_text_pane_t6_copy1

0xe10e,	// (0x00069f96) main_cset_text_pane_t7_copy1

0x7ec0,	// (0x00063d48) main_cset_text2_pane_t1_copy1

0x4365,	// (0x000601ed) main_ncimui_pane

0x43c4,	// (0x0006024c) popup_query_ncimui_window_ParamLimits

0x43c4,	// (0x0006024c) popup_query_ncimui_window

0xa0d1,	// (0x00065f59) field_cale_ev2_pane_g4_ParamLimits

0xa0d1,	// (0x00065f59) field_cale_ev2_pane_g4

0x5cc1,	// (0x00061b49) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cc1,	// (0x00061b49) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c9,	// (0x0006b551) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c9,	// (0x0006b551) cell_video_dialer_keypad_pane_g

0x5cd9,	// (0x00061b61) cell_video_dialer_keypad_pane_t1

0x9cf5,	// (0x00065b7d) bg_popup_window_pane_cp012

0xb1d9,	// (0x00067061) heading_pane_cp06

0xe13a,	// (0x00069fc2) ncim_query_content_pane

0x9cf5,	// (0x00065b7d) bg_popup_heading_pane_cp01

0xe142,	// (0x00069fca) ncim_heading_pane_t1

0xe150,	// (0x00069fd8) ncim_indicator_popup_pane

0xe162,	// (0x00069fea) ncim_query_button_pane

0xe176,	// (0x00069ffe) ncim_query_content_pane_t1

0xe188,	// (0x0006a010) ncim_query_content_pane_t2

0x0005,

0xf9b2,	// (0x0006b83a) ncim_query_content_pane_t

0xe1c2,	// (0x0006a04a) ncim_query_list_pane

0xe1d4,	// (0x0006a05c) ncim_query_popup_pane

0xe150,	// (0x00069fd8) ncim_indicator_popup_pane_ParamLimits

0x8013,	// (0x00063e9b) ncim_query_content_pane_g1_ParamLimits

0x8013,	// (0x00063e9b) ncim_query_content_pane_g1

0xe176,	// (0x00069ffe) ncim_query_content_pane_t1_ParamLimits

0xe188,	// (0x0006a010) ncim_query_content_pane_t2_ParamLimits

0x801f,	// (0x00063ea7) ncim_query_content_pane_t3_ParamLimits

0x801f,	// (0x00063ea7) ncim_query_content_pane_t3

0x803c,	// (0x00063ec4) ncim_query_content_pane_t4_ParamLimits

0x803c,	// (0x00063ec4) ncim_query_content_pane_t4

0x8059,	// (0x00063ee1) ncim_query_content_pane_t5_ParamLimits

0x8059,	// (0x00063ee1) ncim_query_content_pane_t5

0xe19a,	// (0x0006a022) ncim_query_content_pane_t6_ParamLimits

0xe19a,	// (0x0006a022) ncim_query_content_pane_t6

0xf9b2,	// (0x0006b83a) ncim_query_content_pane_t_ParamLimits

0xe1c2,	// (0x0006a04a) ncim_query_list_pane_ParamLimits

0xe1d4,	// (0x0006a05c) ncim_query_popup_pane_ParamLimits

0xe1e8,	// (0x0006a070) wait_bar_pane_cp04

0x9cf5,	// (0x00065b7d) input_focus_pane_cp011

0xe1f0,	// (0x0006a078) ncim_query_popup_pane_t1

0xe1fe,	// (0x0006a086) ncim_list_query_list_pane_ParamLimits

0xe1fe,	// (0x0006a086) ncim_list_query_list_pane

0x9cf5,	// (0x00065b7d) bg_button_pane_cp027

0xe20b,	// (0x0006a093) ncim_query_button_pane_g1

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp012

0xe215,	// (0x0006a09d) ncim_list_query_list_pane_g1

0xe21d,	// (0x0006a0a5) ncim_list_query_list_pane_t1

0x646f,	// (0x000622f7) cam4_indicators_pane_g3_ParamLimits

0x646f,	// (0x000622f7) cam4_indicators_pane_g3

0x6576,	// (0x000623fe) vid4_indicators_pane_g5_ParamLimits

0x6576,	// (0x000623fe) vid4_indicators_pane_g5

0x75f2,	// (0x0006347a) vid4_progress_pane_g5_ParamLimits

0x75f2,	// (0x0006347a) vid4_progress_pane_g5

0x7eff,	// (0x00063d87) main_ncimui_pane_g1

0x7f67,	// (0x00063def) ncimui_group_query_pane_ParamLimits

0x7f67,	// (0x00063def) ncimui_group_query_pane

0x7faf,	// (0x00063e37) ncimui_list_pane_ParamLimits

0x7faf,	// (0x00063e37) ncimui_list_pane

0x7fd6,	// (0x00063e5e) ncimui_text_pane_ParamLimits

0x7fd6,	// (0x00063e5e) ncimui_text_pane

0x8076,	// (0x00063efe) ncimui_text_pane_t1_ParamLimits

0x8076,	// (0x00063efe) ncimui_text_pane_t1

0xe22b,	// (0x0006a0b3) ncimui_list_single_graphic_pane_ParamLimits

0xe22b,	// (0x0006a0b3) ncimui_list_single_graphic_pane

0x8095,	// (0x00063f1d) ncimui_query_pane_ParamLimits

0x8095,	// (0x00063f1d) ncimui_query_pane

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp013

0xe23b,	// (0x0006a0c3) ncim_list_query_list_pane_t1_copy1

0xe215,	// (0x0006a09d) ncim_list_single_graphic_pane_g1

0x80a8,	// (0x00063f30) ncim_query_button_pane_cp01

0x80b4,	// (0x00063f3c) ncim_query_entry_pane_ParamLimits

0x80b4,	// (0x00063f3c) ncim_query_entry_pane

0x80c7,	// (0x00063f4f) ncimui_query_pane_g1

0x80d3,	// (0x00063f5b) ncimui_query_pane_t1_ParamLimits

0x80d3,	// (0x00063f5b) ncimui_query_pane_t1

0xa5ae,	// (0x00066436) input_focus_pane_cp012

0xe249,	// (0x0006a0d1) ncim_query_entry_pane_t1

0xa919,	// (0x000667a1) main_im_pane_ParamLimits

0x4365,	// (0x000601ed) main_mobtv_pane_ParamLimits

0x4365,	// (0x000601ed) main_mobtv_pane

0x7c92,	// (0x00063b1a) main_cset6_slider_pane_g18_ParamLimits

0x7c92,	// (0x00063b1a) main_cset6_slider_pane_g18

0x7c9e,	// (0x00063b26) main_cset6_slider_pane_g19_ParamLimits

0x7c9e,	// (0x00063b26) main_cset6_slider_pane_g19

0xd716,	// (0x0006959e) bg_main_mobtv_pane_ParamLimits

0xd716,	// (0x0006959e) bg_main_mobtv_pane

0x80ec,	// (0x00063f74) main_mobtv_info_pane

0x80f7,	// (0x00063f7f) main_mobtv_loading_pane_ParamLimits

0x80f7,	// (0x00063f7f) main_mobtv_loading_pane

0xe25b,	// (0x0006a0e3) main_mobtv_pg_channel_list_pane

0xe265,	// (0x0006a0ed) main_mobtv_pg_hdr_pane

0x8104,	// (0x00063f8c) main_mobtv_programe_curr_pane_ParamLimits

0x8104,	// (0x00063f8c) main_mobtv_programe_curr_pane

0x8111,	// (0x00063f99) main_mobtv_programe_next_pane_ParamLimits

0x8111,	// (0x00063f99) main_mobtv_programe_next_pane

0xe26e,	// (0x0006a0f6) popup_mobtv_noti_window

0xcd5f,	// (0x00068be7) main_tv_pg_hdr_pane_g1

0xe276,	// (0x0006a0fe) main_tv_pg_hdr_pane_g2

0xe27e,	// (0x0006a106) main_tv_pg_hdr_pane_g3

0xe286,	// (0x0006a10e) main_tv_pg_hdr_pane_g4

0xe28e,	// (0x0006a116) main_tv_pg_hdr_pane_g5

0xe298,	// (0x0006a120) main_tv_pg_hdr_pane_g6

0xe2a2,	// (0x0006a12a) main_tv_pg_hdr_pane_g7

0xe2ac,	// (0x0006a134) main_tv_pg_hdr_pane_g8

0xe2b6,	// (0x0006a13e) main_tv_pg_hdr_pane_g9

0xe2c0,	// (0x0006a148) main_tv_pg_hdr_pane_g10

0xe2ca,	// (0x0006a152) main_tv_pg_hdr_pane_g11

0x000a,

0x0abd,	// (0x0005c945) main_tv_pg_hdr_pane_g

0xe2d4,	// (0x0006a15c) main_tv_pg_hdr_pane_t1

0xe2e2,	// (0x0006a16a) main_tv_pg_hdr_pane_t2

0xe2f0,	// (0x0006a178) main_tv_pg_hdr_pane_t3

0xe300,	// (0x0006a188) main_tv_pg_hdr_pane_t4

0xe310,	// (0x0006a198) main_tv_pg_hdr_pane_t5

0x0004,

0x0ad4,	// (0x0005c95c) main_tv_pg_hdr_pane_t

0xe320,	// (0x0006a1a8) single_mobtv_pg_channel_pane_ParamLimits

0xe320,	// (0x0006a1a8) single_mobtv_pg_channel_pane

0xe332,	// (0x0006a1ba) single_mobtv_pg_channel_table_pane

0xe33b,	// (0x0006a1c3) single_mobtv_pg_channel_thumb_pane

0xe344,	// (0x0006a1cc) single_tv_pg_channel_pane_g1

0xe34d,	// (0x0006a1d5) single_tv_pg_channel_pane_g2

0x0001,

0x0adf,	// (0x0005c967) single_tv_pg_channel_pane_g

0xcfc2,	// (0x00068e4a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfc2,	// (0x00068e4a) bg_single_mobtv_pg_channel_thumb_pane

0xe356,	// (0x0006a1de) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe356,	// (0x0006a1de) single_mobtv_pg_channel_thumb_pane_g1

0xe364,	// (0x0006a1ec) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe364,	// (0x0006a1ec) single_mobtv_pg_channel_thumb_pane_g2

0xe370,	// (0x0006a1f8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe370,	// (0x0006a1f8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0ae4,	// (0x0005c96c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0ae4,	// (0x0005c96c) single_mobtv_pg_channel_thumb_pane_g

0xe37c,	// (0x0006a204) single_mobtv_pg_channel_thumb_pane_t1

0xe38a,	// (0x0006a212) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0aeb,	// (0x0005c973) single_mobtv_pg_channel_thumb_pane_t

0xcd5f,	// (0x00068be7) bg_single_mobtv_pg_channel_table_pane_g1

0xcd5f,	// (0x00068be7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x058d,	// (0x0005c415) bg_single_mobtv_pg_channel_table_pane_g

0xe398,	// (0x0006a220) single_mobtv_pg_channel_table_pane_t1

0xe3a6,	// (0x0006a22e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0af0,	// (0x0005c978) single_mobtv_pg_channel_table_pane_t

0x8126,	// (0x00063fae) main_mobtv_info_pane_g1_ParamLimits

0x8126,	// (0x00063fae) main_mobtv_info_pane_g1

0x8142,	// (0x00063fca) main_mobtv_info_pane_t1_ParamLimits

0x8142,	// (0x00063fca) main_mobtv_info_pane_t1

0x81ba,	// (0x00064042) main_mobtv_info_pane_t2_ParamLimits

0x81ba,	// (0x00064042) main_mobtv_info_pane_t2

0x0002,

0xf9c4,	// (0x0006b84c) main_mobtv_info_pane_t_ParamLimits

0xf9c4,	// (0x0006b84c) main_mobtv_info_pane_t

0x8249,	// (0x000640d1) wait_bar_pane_cp05

0x825b,	// (0x000640e3) main_mobtv_loading_pane_g1_ParamLimits

0x825b,	// (0x000640e3) main_mobtv_loading_pane_g1

0x8269,	// (0x000640f1) main_mobtv_loading_pane_g2_ParamLimits

0x8269,	// (0x000640f1) main_mobtv_loading_pane_g2

0x8275,	// (0x000640fd) main_mobtv_loading_pane_g3_ParamLimits

0x8275,	// (0x000640fd) main_mobtv_loading_pane_g3

0x0002,

0xf9cb,	// (0x0006b853) main_mobtv_loading_pane_g_ParamLimits

0xf9cb,	// (0x0006b853) main_mobtv_loading_pane_g

0xe3b4,	// (0x0006a23c) main_mobtv_loading_pane_t1_ParamLimits

0xe3b4,	// (0x0006a23c) main_mobtv_loading_pane_t1

0xe3cc,	// (0x0006a254) main_mobtv_loading_pane_t2_ParamLimits

0xe3cc,	// (0x0006a254) main_mobtv_loading_pane_t2

0x0001,

0x0b08,	// (0x0005c990) main_mobtv_loading_pane_t_ParamLimits

0x0b08,	// (0x0005c990) main_mobtv_loading_pane_t

0x8283,	// (0x0006410b) wait_bar_pane_cp06_ParamLimits

0x8283,	// (0x0006410b) wait_bar_pane_cp06

0xe3f0,	// (0x0006a278) main_mobtv_programe_curr_pane_t1

0xe3fe,	// (0x0006a286) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b0d,	// (0x0005c995) main_mobtv_programe_curr_pane_t

0xe40c,	// (0x0006a294) main_mobtv_programe_next_pane_t1

0xe41a,	// (0x0006a2a2) main_mobtv_programe_next_pane_t2

0xe428,	// (0x0006a2b0) main_mobtv_programe_next_pane_t3

0x0002,

0x0b12,	// (0x0005c99a) main_mobtv_programe_next_pane_t

0x9cf5,	// (0x00065b7d) bg_popup_mobtv_noti_window_pane

0xe436,	// (0x0006a2be) popup_mobtv_noti_window_g1

0xe43e,	// (0x0006a2c6) popup_mobtv_noti_window_t1

0xe44c,	// (0x0006a2d4) popup_mobtv_noti_window_t2

0x0001,

0x0b19,	// (0x0005c9a1) popup_mobtv_noti_window_t

0xcd5f,	// (0x00068be7) bg_popup_mobtv_noti_window_pane_g1

0x1171,	// (0x0005cff9) sc_clock_pane

0x1171,	// (0x0005cff9) main_fs_bigclock_pane

0x780f,	// (0x00063697) blid2_tripm_pane_t4_ParamLimits

0x780f,	// (0x00063697) blid2_tripm_pane_t4

0x828f,	// (0x00064117) sc_clock_pane_g1_ParamLimits

0x828f,	// (0x00064117) sc_clock_pane_g1

0x829d,	// (0x00064125) sc_clock_pane_t1_ParamLimits

0x829d,	// (0x00064125) sc_clock_pane_t1

0x82b0,	// (0x00064138) sc_clock_pane_t2_ParamLimits

0x82b0,	// (0x00064138) sc_clock_pane_t2

0x82c2,	// (0x0006414a) sc_clock_pane_t3_ParamLimits

0x82c2,	// (0x0006414a) sc_clock_pane_t3

0x0004,

0xf9d2,	// (0x0006b85a) sc_clock_pane_t_ParamLimits

0xf9d2,	// (0x0006b85a) sc_clock_pane_t

0x9204,	// (0x0006508c) main_fs_bigclock_indicator_pane_ParamLimits

0x9204,	// (0x0006508c) main_fs_bigclock_indicator_pane

0x8345,	// (0x000641cd) main_fs_bigclock_pane_g1_ParamLimits

0x8345,	// (0x000641cd) main_fs_bigclock_pane_g1

0x9210,	// (0x00065098) main_fs_bigclock_pane_t1_ParamLimits

0x9210,	// (0x00065098) main_fs_bigclock_pane_t1

0x9222,	// (0x000650aa) main_fs_bigclock_pane_t2_ParamLimits

0x9222,	// (0x000650aa) main_fs_bigclock_pane_t2

0x9236,	// (0x000650be) main_fs_bigclock_pane_t3_ParamLimits

0x9236,	// (0x000650be) main_fs_bigclock_pane_t3

0x0002,

0xfb75,	// (0x0006b9fd) main_fs_bigclock_pane_t_ParamLimits

0xfb75,	// (0x0006b9fd) main_fs_bigclock_pane_t

0xecb2,	// (0x0006ab3a) main_fs_bigclock_indicator_pane_g1

0xe16a,	// (0x00069ff2) ncim_query_content_pane_g2_ParamLimits

0xe16a,	// (0x00069ff2) ncim_query_content_pane_g2

0x0001,

0xf9ad,	// (0x0006b835) ncim_query_content_pane_g_ParamLimits

0xf9ad,	// (0x0006b835) ncim_query_content_pane_g

0x82d6,	// (0x0006415e) sc_clock_pane_t4_ParamLimits

0x82d6,	// (0x0006415e) sc_clock_pane_t4

0x4365,	// (0x000601ed) main_radioblah_pane

0x6304,	// (0x0006218c) cell_call4_button_pane_t1_copy1_ParamLimits

0x6304,	// (0x0006218c) cell_call4_button_pane_t1_copy1

0x7f19,	// (0x00063da1) main_ncimui_pane_t1_ParamLimits

0x7f19,	// (0x00063da1) main_ncimui_pane_t1

0x7f33,	// (0x00063dbb) main_ncimui_pane_t2_ParamLimits

0x7f33,	// (0x00063dbb) main_ncimui_pane_t2

0x0002,

0xf9a6,	// (0x0006b82e) main_ncimui_pane_t_ParamLimits

0xf9a6,	// (0x0006b82e) main_ncimui_pane_t

0xe591,	// (0x0006a419) main_radioblah_anim_pane_ParamLimits

0xe591,	// (0x0006a419) main_radioblah_anim_pane

0xe5a2,	// (0x0006a42a) main_radioblah_info_pane_ParamLimits

0xe5a2,	// (0x0006a42a) main_radioblah_info_pane

0xe5b6,	// (0x0006a43e) main_radioblah_pane_t1_ParamLimits

0xe5b6,	// (0x0006a43e) main_radioblah_pane_t1

0xe5d2,	// (0x0006a45a) main_radioblah_pane_t2_ParamLimits

0xe5d2,	// (0x0006a45a) main_radioblah_pane_t2

0x0003,

0x0b3f,	// (0x0005c9c7) main_radioblah_pane_t_ParamLimits

0x0b3f,	// (0x0005c9c7) main_radioblah_pane_t

0x839b,	// (0x00064223) main_radioblah_rocker_ctrl_pane_ParamLimits

0x839b,	// (0x00064223) main_radioblah_rocker_ctrl_pane

0xe61a,	// (0x0006a4a2) main_radioblah_info_pane_t1_ParamLimits

0xe61a,	// (0x0006a4a2) main_radioblah_info_pane_t1

0x83e0,	// (0x00064268) main_radioblah_info_pane_t2_ParamLimits

0x83e0,	// (0x00064268) main_radioblah_info_pane_t2

0x0003,

0xf9dd,	// (0x0006b865) main_radioblah_info_pane_t_ParamLimits

0xf9dd,	// (0x0006b865) main_radioblah_info_pane_t

0xcd5f,	// (0x00068be7) main_radioblah_rocker_ctrl_pane_g1

0x8490,	// (0x00064318) main_radioblah_rocker_ctrl_pane_g2

0x8498,	// (0x00064320) main_radioblah_rocker_ctrl_pane_g3

0x84a0,	// (0x00064328) main_radioblah_rocker_ctrl_pane_g4

0x84a8,	// (0x00064330) main_radioblah_rocker_ctrl_pane_g5

0x84b0,	// (0x00064338) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9e6,	// (0x0006b86e) main_radioblah_rocker_ctrl_pane_g

0x7ec0,	// (0x00063d48) main_cset_text2_pane_t1_copy1_ParamLimits

0x638f,	// (0x00062217) cam4_image_uncrop_qvga_pane

0x64e4,	// (0x0006236c) vid4_image_uncrop_qcif_pane

0x799d,	// (0x00063825) cam6_image_uncrop_qvga_pane_ParamLimits

0x799d,	// (0x00063825) cam6_image_uncrop_qvga_pane

0xde71,	// (0x00069cf9) vid6_image_uncrop_qcif_pane_ParamLimits

0xde71,	// (0x00069cf9) vid6_image_uncrop_qcif_pane

0x9cf5,	// (0x00065b7d) bg_popup_preview_window_pane_cp03

0xe11c,	// (0x00069fa4) list_cset_text2_pane

0xe124,	// (0x00069fac) main_cset6_text2_pane_g1

0xe12c,	// (0x00069fb4) main_cset6_text2_pane_t1

0x84b8,	// (0x00064340) list_cset_text2_pane_t1_ParamLimits

0x84b8,	// (0x00064340) list_cset_text2_pane_t1

0x4365,	// (0x000601ed) main_radioblah_pane_ParamLimits

0x8235,	// (0x000640bd) main_mobtv_info_pane_t3_ParamLimits

0x8235,	// (0x000640bd) main_mobtv_info_pane_t3

0x8389,	// (0x00064211) main_radioblah_pane_g1

0x83b4,	// (0x0006423c) main_radioblah_info_pane_g1

0x8435,	// (0x000642bd) main_radioblah_info_pane_t3_ParamLimits

0x8435,	// (0x000642bd) main_radioblah_info_pane_t3

0x306a,	// (0x0005eef2) highlight_cell_cale_month_pane_ParamLimits

0x306a,	// (0x0005eef2) highlight_cell_cale_month_pane

0x1171,	// (0x0005cff9) main_phob_fisheye_pane

0xd0be,	// (0x00068f46) scroll_pane_cp0031_ParamLimits

0xd0be,	// (0x00068f46) scroll_pane_cp0031

0xdf7f,	// (0x00069e07) wait_bar_pane_cp08_ParamLimits

0x7ba9,	// (0x00063a31) cset_list_set_pane_copy1_ParamLimits

0xe654,	// (0x0006a4dc) highlight_cell_cale_month_pane_g1

0x84d5,	// (0x0006435d) highlight_cell_cale_month_pane_t1

0xdc14,	// (0x00069a9c) list_gen_pane_cp01

0xd850,	// (0x000696d8) scroll_pane_01

0x84e3,	// (0x0006436b) list_single_double_fisheye_pane

0x84ec,	// (0x00064374) list_double_fisheye_pane_g1_ParamLimits

0x84ec,	// (0x00064374) list_double_fisheye_pane_g1

0x84f8,	// (0x00064380) list_double_fisheye_pane_g2_ParamLimits

0x84f8,	// (0x00064380) list_double_fisheye_pane_g2

0x850c,	// (0x00064394) list_double_fisheye_pane_g3_ParamLimits

0x850c,	// (0x00064394) list_double_fisheye_pane_g3

0x0004,

0xf9f3,	// (0x0006b87b) list_double_fisheye_pane_g_ParamLimits

0xf9f3,	// (0x0006b87b) list_double_fisheye_pane_g

0x8535,	// (0x000643bd) list_double_fisheye_pane_t1_ParamLimits

0x8535,	// (0x000643bd) list_double_fisheye_pane_t1

0x8550,	// (0x000643d8) list_double_fisheye_pane_t2_ParamLimits

0x8550,	// (0x000643d8) list_double_fisheye_pane_t2

0x0001,

0xf9fe,	// (0x0006b886) list_double_fisheye_pane_t_ParamLimits

0xf9fe,	// (0x0006b886) list_double_fisheye_pane_t

0x1171,	// (0x0005cff9) main_call5_pane

0x82fc,	// (0x00064184) sc_swipe_pane_ParamLimits

0x82fc,	// (0x00064184) sc_swipe_pane

0x857e,	// (0x00064406) call5_image_pane_ParamLimits

0x857e,	// (0x00064406) call5_image_pane

0x858e,	// (0x00064416) call5_swipe_1_pane_ParamLimits

0x858e,	// (0x00064416) call5_swipe_1_pane

0x859a,	// (0x00064422) call5_swipe_2_pane_ParamLimits

0x859a,	// (0x00064422) call5_swipe_2_pane

0x85b4,	// (0x0006443c) popup_call5_audio_first_window_ParamLimits

0x85b4,	// (0x0006443c) popup_call5_audio_first_window

0xcfc2,	// (0x00068e4a) call5_swipe_1_pane_g1_ParamLimits

0xcfc2,	// (0x00068e4a) call5_swipe_1_pane_g1

0xe673,	// (0x0006a4fb) call5_swipe_1_pane_g2_ParamLimits

0xe673,	// (0x0006a4fb) call5_swipe_1_pane_g2

0x0001,

0xfa03,	// (0x0006b88b) call5_swipe_1_pane_g_ParamLimits

0xfa03,	// (0x0006b88b) call5_swipe_1_pane_g

0xe67f,	// (0x0006a507) call5_swipe_1_pane_t1_ParamLimits

0xe67f,	// (0x0006a507) call5_swipe_1_pane_t1

0xcfc2,	// (0x00068e4a) call5_swipe_2_pane_g1_ParamLimits

0xcfc2,	// (0x00068e4a) call5_swipe_2_pane_g1

0xe694,	// (0x0006a51c) call5_swipe_2_pane_g2_ParamLimits

0xe694,	// (0x0006a51c) call5_swipe_2_pane_g2

0x0001,

0xfa08,	// (0x0006b890) call5_swipe_2_pane_g_ParamLimits

0xfa08,	// (0x0006b890) call5_swipe_2_pane_g

0xe6a0,	// (0x0006a528) call5_swipe_2_pane_t1_ParamLimits

0xe6a0,	// (0x0006a528) call5_swipe_2_pane_t1

0xe6b5,	// (0x0006a53d) sc_swipe_pane_g1_ParamLimits

0xe6b5,	// (0x0006a53d) sc_swipe_pane_g1

0xe6c2,	// (0x0006a54a) sc_swipe_pane_g2_ParamLimits

0xe6c2,	// (0x0006a54a) sc_swipe_pane_g2

0x0001,

0x0b78,	// (0x0005ca00) sc_swipe_pane_g_ParamLimits

0x0b78,	// (0x0005ca00) sc_swipe_pane_g

0xe6ce,	// (0x0006a556) sc_swipe_pane_t1_ParamLimits

0xe6ce,	// (0x0006a556) sc_swipe_pane_t1

0x1171,	// (0x0005cff9) main_cmail_launcher_pane

0x85c2,	// (0x0006444a) aid_size_cell_cmail_l_ParamLimits

0x85c2,	// (0x0006444a) aid_size_cell_cmail_l

0x85d0,	// (0x00064458) grid_cmail_l_pane_ParamLimits

0x85d0,	// (0x00064458) grid_cmail_l_pane

0x85e0,	// (0x00064468) cell_cmail_l_pane_ParamLimits

0x85e0,	// (0x00064468) cell_cmail_l_pane

0xe6e3,	// (0x0006a56b) cell_cmail_l_pane_g1_ParamLimits

0xe6e3,	// (0x0006a56b) cell_cmail_l_pane_g1

0xe6ef,	// (0x0006a577) cell_cmail_l_pane_t1_ParamLimits

0xe6ef,	// (0x0006a577) cell_cmail_l_pane_t1

0xe705,	// (0x0006a58d) cell_cmail_l_pane_t2_ParamLimits

0xe705,	// (0x0006a58d) cell_cmail_l_pane_t2

0x0001,

0x0b7d,	// (0x0005ca05) cell_cmail_l_pane_t_ParamLimits

0x0b7d,	// (0x0005ca05) cell_cmail_l_pane_t

0xa5ae,	// (0x00066436) grid_highlight_pane_cp018_ParamLimits

0xa5ae,	// (0x00066436) grid_highlight_pane_cp018

0x0fc7,	// (0x0005ce4f) main2_pane_ParamLimits

0x0fc7,	// (0x0005ce4f) main2_pane

0xa9b2,	// (0x0006683a) popup_sp_fs_action_menu_bg_pane_g1

0xa9ba,	// (0x00066842) popup_sp_fs_action_menu_bg_pane_g2

0xa9cb,	// (0x00066853) popup_sp_fs_action_menu_bg_pane_g3

0xa9d3,	// (0x0006685b) popup_sp_fs_action_menu_bg_pane_g4

0xa9db,	// (0x00066863) popup_sp_fs_action_menu_bg_pane_g5

0xa9e3,	// (0x0006686b) popup_sp_fs_action_menu_bg_pane_g6

0xa9eb,	// (0x00066873) popup_sp_fs_action_menu_bg_pane_g7

0xa9f3,	// (0x0006687b) popup_sp_fs_action_menu_bg_pane_g8

0xa9fb,	// (0x00066883) popup_sp_fs_action_menu_bg_pane_g9

0xaa03,	// (0x0006688b) popup_sp_fs_action_menu_bg_pane_g10

0xaa03,	// (0x0006688b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006b00e) popup_sp_fs_action_menu_bg_pane_g

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g3_g1

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t3_g3_g2

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0006b0bc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0006b0bc) list_medium_line_x2_t3_g3_g

0x1ea3,	// (0x0005dd2b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ea3,	// (0x0005dd2b) list_medium_line_x2_t3_g3_t1

0x1eb8,	// (0x0005dd40) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1eb8,	// (0x0005dd40) list_medium_line_x2_t3_g3_t2

0x1eca,	// (0x0005dd52) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0006b0c3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0006b0c3) list_medium_line_x2_t3_g3_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g2_g1

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0006b0ca) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0006b0ca) list_medium_line_x2_t3_g2_g

0x1edf,	// (0x0005dd67) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1edf,	// (0x0005dd67) list_medium_line_x2_t3_g2_t1

0x1ef5,	// (0x0005dd7d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ef5,	// (0x0005dd7d) list_medium_line_x2_t3_g2_t2

0x1f07,	// (0x0005dd8f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f07,	// (0x0005dd8f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0006b0cf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0006b0cf) list_medium_line_x2_t3_g2_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t4_g4_g1

0x1f24,	// (0x0005ddac) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f24,	// (0x0005ddac) list_medium_line_x2_t4_g4_g2

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t4_g4_g3

0x1f30,	// (0x0005ddb8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1f30,	// (0x0005ddb8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0006b0d6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0006b0d6) list_medium_line_x2_t4_g4_g

0x1f3c,	// (0x0005ddc4) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1f3c,	// (0x0005ddc4) list_medium_line_x2_t4_g4_t1

0x1f56,	// (0x0005ddde) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1f56,	// (0x0005ddde) list_medium_line_x2_t4_g4_t2

0x1f6c,	// (0x0005ddf4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f6c,	// (0x0005ddf4) list_medium_line_x2_t4_g4_t3

0x1f81,	// (0x0005de09) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f81,	// (0x0005de09) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0006b0df) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0006b0df) list_medium_line_x2_t4_g4_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g4_g1

0x1f24,	// (0x0005ddac) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f24,	// (0x0005ddac) list_medium_line_x2_t2_g4_g2

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t2_g4_g3

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0006b146) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0006b146) list_medium_line_x2_t2_g4_g

0x3090,	// (0x0005ef18) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3090,	// (0x0005ef18) list_medium_line_x2_t2_g4_t1

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0006b14f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0006b14f) list_medium_line_x2_t2_g4_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g3_g1

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t2_g3_g2

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0006b0bc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0006b0bc) list_medium_line_x2_t2_g3_g

0x30a5,	// (0x0005ef2d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30a5,	// (0x0005ef2d) list_medium_line_x2_t2_g3_t1

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0006b154) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0006b154) list_medium_line_x2_t2_g3_t

0x326c,	// (0x0005f0f4) main_sp_fs_list_pane_ParamLimits

0x326c,	// (0x0005f0f4) main_sp_fs_list_pane

0x3278,	// (0x0005f100) sp_fs_scroll_pane_ParamLimits

0x3278,	// (0x0005f100) sp_fs_scroll_pane

0x3284,	// (0x0005f10c) list_medium_line_x2_t3_t1

0x3294,	// (0x0005f11c) list_medium_line_x2_t3_t2

0x32a2,	// (0x0005f12a) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0006b19f) list_medium_line_x2_t3_t

0x32b0,	// (0x0005f138) list_medium_line_x3_t4_t1

0x32c0,	// (0x0005f148) list_medium_line_x3_t4_t2

0x32ce,	// (0x0005f156) list_medium_line_x3_t4_t3

0x32a2,	// (0x0005f12a) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0006b1a6) list_medium_line_x3_t4_t

0x32dc,	// (0x0005f164) list_medium_line_x4_t5_t1

0x32ec,	// (0x0005f174) list_medium_line_x4_t5_t2

0x32ce,	// (0x0005f156) list_medium_line_x4_t5_t3

0x32fa,	// (0x0005f182) list_medium_line_x4_t5_t4

0x32a2,	// (0x0005f12a) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0006b1af) list_medium_line_x4_t5_t

0x1e7f,	// (0x0005dd07) list_medium_line_t4_g4_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_t4_g4_g1

0x1f30,	// (0x0005ddb8) list_medium_line_t4_g4_g2_ParamLimits

0x1f30,	// (0x0005ddb8) list_medium_line_t4_g4_g2

0x3308,	// (0x0005f190) list_medium_line_t4_g4_g3_ParamLimits

0x3308,	// (0x0005f190) list_medium_line_t4_g4_g3

0x1e97,	// (0x0005dd1f) list_medium_line_t4_g4_g4_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0006b1ba) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0006b1ba) list_medium_line_t4_g4_g

0x3314,	// (0x0005f19c) list_medium_line_t4_g4_t1_ParamLimits

0x3314,	// (0x0005f19c) list_medium_line_t4_g4_t1

0x3329,	// (0x0005f1b1) list_medium_line_t4_g4_t2_ParamLimits

0x3329,	// (0x0005f1b1) list_medium_line_t4_g4_t2

0x333e,	// (0x0005f1c6) list_medium_line_t4_g4_t3_ParamLimits

0x333e,	// (0x0005f1c6) list_medium_line_t4_g4_t3

0x1eca,	// (0x0005dd52) list_medium_line_t4_g4_t4_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0006b1c3) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0006b1c3) list_medium_line_t4_g4_t

0x3454,	// (0x0005f2dc) chi_dic_find_pane_g1

0x4381,	// (0x00060209) main_tport_pane

0x6ea3,	// (0x00062d2b) list_medium_line_plain_t1

0x6f83,	// (0x00062e0b) list_medium_line_t2_g2_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t2_g2_g1

0x6f8f,	// (0x00062e17) list_medium_line_t2_g2_g2_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_t2_g2_g2

0x0001,

0xf813,	// (0x0006b69b) list_medium_line_t2_g2_g_ParamLimits

0xf813,	// (0x0006b69b) list_medium_line_t2_g2_g

0x6f9b,	// (0x00062e23) list_medium_line_t2_g2_t1_ParamLimits

0x6f9b,	// (0x00062e23) list_medium_line_t2_g2_t1

0x6fb5,	// (0x00062e3d) list_medium_line_t2_g2_t2_ParamLimits

0x6fb5,	// (0x00062e3d) list_medium_line_t2_g2_t2

0x0001,

0xf818,	// (0x0006b6a0) list_medium_line_t2_g2_t_ParamLimits

0xf818,	// (0x0006b6a0) list_medium_line_t2_g2_t

0xa1c6,	// (0x0006604e) aid_sp_fs_list_icon_a_sm

0xa1ce,	// (0x00066056) aid_sp_fs_list_icon_d

0xa1d6,	// (0x0006605e) aid_sp_fs_text_primary

0xe66a,	// (0x0006a4f2) aid_sp_fs_text_secondary

0x7651,	// (0x000634d9) list_medium_line

0x7651,	// (0x000634d9) list_medium_line_g2

0x7651,	// (0x000634d9) list_medium_line_g3

0x7651,	// (0x000634d9) list_medium_line_plain

0x7651,	// (0x000634d9) list_medium_line_plain_t2

0x7651,	// (0x000634d9) list_medium_line_plain_t3

0x7651,	// (0x000634d9) list_medium_line_right_icon

0x7651,	// (0x000634d9) list_medium_line_right_iconx2

0x7651,	// (0x000634d9) list_medium_line_t2

0x7651,	// (0x000634d9) list_medium_line_t2_g2

0x7651,	// (0x000634d9) list_medium_line_t2_g3

0x7651,	// (0x000634d9) list_medium_line_t2_right_icon

0x7651,	// (0x000634d9) list_medium_line_t2_right_iconx2

0x7651,	// (0x000634d9) list_medium_line_t3

0x7651,	// (0x000634d9) list_medium_line_t3_g2

0x7651,	// (0x000634d9) list_medium_line_t3_g3

0x7651,	// (0x000634d9) list_medium_line_t3_right_iconx2

0x765a,	// (0x000634e2) list_medium_line_t4_g4

0x7663,	// (0x000634eb) list_medium_line_x2

0x7663,	// (0x000634eb) list_medium_line_x2_t2_g2

0x7663,	// (0x000634eb) list_medium_line_x2_t2_g3

0x7663,	// (0x000634eb) list_medium_line_x2_t2_g4

0x7663,	// (0x000634eb) list_medium_line_x2_t3

0x7663,	// (0x000634eb) list_medium_line_x2_t3_g2

0x7663,	// (0x000634eb) list_medium_line_x2_t3_g3

0x7663,	// (0x000634eb) list_medium_line_x2_t3_g4

0x7663,	// (0x000634eb) list_medium_line_x2_t4_g2

0x7663,	// (0x000634eb) list_medium_line_x2_t4_g4

0x766c,	// (0x000634f4) list_medium_line_x3

0x766c,	// (0x000634f4) list_medium_line_x3_t4

0x766c,	// (0x000634f4) list_medium_line_x3_t4_g4

0x765a,	// (0x000634e2) list_medium_line_x4_t4

0x765a,	// (0x000634e2) list_medium_line_x4_t4_g7

0x765a,	// (0x000634e2) list_medium_line_x4_t5

0x7675,	// (0x000634fd) list_single_fs_dyc_pane_ParamLimits

0x7675,	// (0x000634fd) list_single_fs_dyc_pane

0x1e7f,	// (0x0005dd07) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x4_t4_g7_g1

0x7de8,	// (0x00063c70) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7de8,	// (0x00063c70) list_medium_line_x4_t4_g7_g2

0x7df4,	// (0x00063c7c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7df4,	// (0x00063c7c) list_medium_line_x4_t4_g7_g3

0x7e03,	// (0x00063c8b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e03,	// (0x00063c8b) list_medium_line_x4_t4_g7_g4

0x7e0f,	// (0x00063c97) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e0f,	// (0x00063c97) list_medium_line_x4_t4_g7_g5

0x7e1e,	// (0x00063ca6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e1e,	// (0x00063ca6) list_medium_line_x4_t4_g7_g6

0x7e2d,	// (0x00063cb5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e2d,	// (0x00063cb5) list_medium_line_x4_t4_g7_g7

0x0006,

0xf987,	// (0x0006b80f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf987,	// (0x0006b80f) list_medium_line_x4_t4_g7_g

0x7e39,	// (0x00063cc1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e39,	// (0x00063cc1) list_medium_line_x4_t4_g7_t1

0x7e4e,	// (0x00063cd6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e4e,	// (0x00063cd6) list_medium_line_x4_t4_g7_t2

0x7e63,	// (0x00063ceb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e63,	// (0x00063ceb) list_medium_line_x4_t4_g7_t3

0x7e78,	// (0x00063d00) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e78,	// (0x00063d00) list_medium_line_x4_t4_g7_t4

0x7e8a,	// (0x00063d12) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e8a,	// (0x00063d12) list_medium_line_x4_t4_g7_t5

0x0004,

0xf996,	// (0x0006b81e) list_medium_line_x4_t4_g7_t_ParamLimits

0xf996,	// (0x0006b81e) list_medium_line_x4_t4_g7_t

0x7e9c,	// (0x00063d24) list_single_dyc_row_pane_ParamLimits

0x7e9c,	// (0x00063d24) list_single_dyc_row_pane

0x8572,	// (0x000643fa) call5_gesture_pane_ParamLimits

0x8572,	// (0x000643fa) call5_gesture_pane

0x85a6,	// (0x0006442e) call5_windows_pane_ParamLimits

0x85a6,	// (0x0006442e) call5_windows_pane

0x85f9,	// (0x00064481) call5_swipe_1_pane_cp_ParamLimits

0x85f9,	// (0x00064481) call5_swipe_1_pane_cp

0x8605,	// (0x0006448d) call5_swipe_2_pane_cp_ParamLimits

0x8605,	// (0x0006448d) call5_swipe_2_pane_cp

0xaae7,	// (0x0006696f) call5_image_pane_cp

0x8611,	// (0x00064499) popup_call5_audio_first_window_cp_ParamLimits

0x8611,	// (0x00064499) popup_call5_audio_first_window_cp

0xe6b5,	// (0x0006a53d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6b5,	// (0x0006a53d) call5_swipe_1_pane_g1_cp

0xe722,	// (0x0006a5aa) call5_swipe_1_pane_g2_cp

0xe6ce,	// (0x0006a556) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6ce,	// (0x0006a556) call5_swipe_1_pane_t1_cp

0xe6b5,	// (0x0006a53d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6b5,	// (0x0006a53d) call5_swipe_2_pane_g1_cp

0xe72a,	// (0x0006a5b2) call5_swipe_2_pane_g2_cp

0xe732,	// (0x0006a5ba) call5_swipe_2_pane_t1_cp_ParamLimits

0xe732,	// (0x0006a5ba) call5_swipe_2_pane_t1_cp

0xa5ae,	// (0x00066436) main_sp_fs_email_pane

0xe747,	// (0x0006a5cf) main_sp_fs_listscroll_pane_te

0x861f,	// (0x000644a7) popup_sp_fs_action_menu_pane_ParamLimits

0x861f,	// (0x000644a7) popup_sp_fs_action_menu_pane

0xcd5f,	// (0x00068be7) bg_sp_fs_ctrlbar_pane_g1

0xe750,	// (0x0006a5d8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe759,	// (0x0006a5e1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe762,	// (0x0006a5ea) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd5f,	// (0x00068be7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0b82,	// (0x0005ca0a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb38,	// (0x000689c0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb38,	// (0x000689c0) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76b,	// (0x0006a5f3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76b,	// (0x0006a5f3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe777,	// (0x0006a5ff) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe777,	// (0x0006a5ff) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b8b,	// (0x0005ca13) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b8b,	// (0x0005ca13) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe783,	// (0x0006a60b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe783,	// (0x0006a60b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8661,	// (0x000644e9) list_medium_line_t2_right_icon_g1

0x8669,	// (0x000644f1) list_medium_line_t2_right_icon_t1

0x8679,	// (0x00064501) list_medium_line_t2_right_icon_t2

0x0001,

0xfa0d,	// (0x0006b895) list_medium_line_t2_right_icon_t

0xc94b,	// (0x000687d3) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc94b,	// (0x000687d3) bg_sp_fs_ctrlbar_pane

0x86de,	// (0x00064566) main_sp_fs_ctrlbar_button_pane_cp01

0x86e6,	// (0x0006456e) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d5,	// (0x0006a65d) main_sp_fs_ctrlbar_pane_g1

0xe7e1,	// (0x0006a669) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0b95,	// (0x0005ca1d) main_sp_fs_ctrlbar_pane_g

0xe7ed,	// (0x0006a675) main_sp_fs_ctrlbar_pane_t1

0x86f0,	// (0x00064578) main_sp_fs_ctrlbar_pane

0x8706,	// (0x0006458e) main_sp_fs_listscroll_pane_te_cp01

0x8717,	// (0x0006459f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8717,	// (0x0006459f) popup_sp_fs_action_menu_pane_cp01

0xa5ae,	// (0x00066436) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa5ae,	// (0x00066436) bg_sp_fs_highlight_list_pane_cp01

0xa1df,	// (0x00066067) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa1df,	// (0x00066067) sp_fs_action_menu_list_gene_pane_g1

0xe81d,	// (0x0006a6a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81d,	// (0x0006a6a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa12,	// (0x0006b89a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa12,	// (0x0006b89a) sp_fs_action_menu_list_gene_pane_g

0xa1ee,	// (0x00066076) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa1ee,	// (0x00066076) sp_fs_action_menu_list_gene_pane_t1

0xa206,	// (0x0006608e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa206,	// (0x0006608e) sp_fs_action_menu_list_gene_pane

0xe82a,	// (0x0006a6b2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82a,	// (0x0006a6b2) popup_sp_fs_action_menu_bg_pane

0xa225,	// (0x000660ad) sp_fs_action_menu_list_pane_ParamLimits

0xa225,	// (0x000660ad) sp_fs_action_menu_list_pane

0x8741,	// (0x000645c9) sp_fs_scroll_pane_cp01_ParamLimits

0x8741,	// (0x000645c9) sp_fs_scroll_pane_cp01

0x8767,	// (0x000645ef) list_medium_line_plain_t2_t1

0x8777,	// (0x000645ff) list_medium_line_plain_t2_t2

0x0001,

0xfa17,	// (0x0006b89f) list_medium_line_plain_t2_t

0x8785,	// (0x0006460d) list_medium_line_plain_t3_t1

0x8795,	// (0x0006461d) list_medium_line_plain_t3_t2

0x87a3,	// (0x0006462b) list_medium_line_plain_t3_t3

0x0002,

0xfa1c,	// (0x0006b8a4) list_medium_line_plain_t3_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t2_g2_g1

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0006b0ca) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0006b0ca) list_medium_line_x2_t2_g2_g

0x3314,	// (0x0005f19c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3314,	// (0x0005f19c) list_medium_line_x2_t2_g2_t1

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa23,	// (0x0006b8ab) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa23,	// (0x0006b8ab) list_medium_line_x2_t2_g2_t

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t4_g2_g1

0x87b1,	// (0x00064639) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87b1,	// (0x00064639) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa28,	// (0x0006b8b0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa28,	// (0x0006b8b0) list_medium_line_x2_t4_g2_g

0x87c3,	// (0x0006464b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87c3,	// (0x0006464b) list_medium_line_x2_t4_g2_t1

0x87dd,	// (0x00064665) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87dd,	// (0x00064665) list_medium_line_x2_t4_g2_t2

0x87f3,	// (0x0006467b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87f3,	// (0x0006467b) list_medium_line_x2_t4_g2_t3

0x1eca,	// (0x0005dd52) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa2d,	// (0x0006b8b5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa2d,	// (0x0006b8b5) list_medium_line_x2_t4_g2_t

0x8808,	// (0x00064690) list_medium_line_t3_right_iconx2_g1

0x8661,	// (0x000644e9) list_medium_line_t3_right_iconx2_g2

0x8810,	// (0x00064698) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa36,	// (0x0006b8be) list_medium_line_t3_right_iconx2_g

0x8818,	// (0x000646a0) list_medium_line_t3_right_iconx2_t1

0x8828,	// (0x000646b0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa3d,	// (0x0006b8c5) list_medium_line_t3_right_iconx2_t

0x1e7f,	// (0x0005dd07) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x3_t4_g4_g1

0x1e8b,	// (0x0005dd13) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x3_t4_g4_g2

0x1f30,	// (0x0005ddb8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1f30,	// (0x0005ddb8) list_medium_line_x3_t4_g4_g3

0x8836,	// (0x000646be) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8836,	// (0x000646be) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa42,	// (0x0006b8ca) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa42,	// (0x0006b8ca) list_medium_line_x3_t4_g4_g

0x8842,	// (0x000646ca) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8842,	// (0x000646ca) list_medium_line_x3_t4_g4_t1

0x8859,	// (0x000646e1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8859,	// (0x000646e1) list_medium_line_x3_t4_g4_t2

0x3329,	// (0x0005f1b1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3329,	// (0x0005f1b1) list_medium_line_x3_t4_g4_t3

0x886e,	// (0x000646f6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x886e,	// (0x000646f6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa4b,	// (0x0006b8d3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa4b,	// (0x0006b8d3) list_medium_line_x3_t4_g4_t

0x888b,	// (0x00064713) list_single_dyc_row_text_pane_t1_ParamLimits

0x888b,	// (0x00064713) list_single_dyc_row_text_pane_t1

0x88c2,	// (0x0006474a) list_single_dyc_row_text_pane_t2_ParamLimits

0x88c2,	// (0x0006474a) list_single_dyc_row_text_pane_t2

0xa245,	// (0x000660cd) list_single_dyc_row_text_pane_t3_ParamLimits

0xa245,	// (0x000660cd) list_single_dyc_row_text_pane_t3

0x0005,

0xfa54,	// (0x0006b8dc) list_single_dyc_row_text_pane_t_ParamLimits

0xfa54,	// (0x0006b8dc) list_single_dyc_row_text_pane_t

0xa269,	// (0x000660f1) list_single_dyc_row_pane_g1_ParamLimits

0xa269,	// (0x000660f1) list_single_dyc_row_pane_g1

0xa275,	// (0x000660fd) list_single_dyc_row_pane_g2_ParamLimits

0xa275,	// (0x000660fd) list_single_dyc_row_pane_g2

0xa281,	// (0x00066109) list_single_dyc_row_pane_g3_ParamLimits

0xa281,	// (0x00066109) list_single_dyc_row_pane_g3

0xa28d,	// (0x00066115) list_single_dyc_row_pane_g4_ParamLimits

0xa28d,	// (0x00066115) list_single_dyc_row_pane_g4

0x0003,

0xfa61,	// (0x0006b8e9) list_single_dyc_row_pane_g_ParamLimits

0xfa61,	// (0x0006b8e9) list_single_dyc_row_pane_g

0xa299,	// (0x00066121) list_single_dyc_row_text_pane_ParamLimits

0xa299,	// (0x00066121) list_single_dyc_row_text_pane

0x9cf5,	// (0x00065b7d) bg_sp_fs_scroll_pane

0xe838,	// (0x0006a6c0) thumb_sp_fs_scroll_pane

0x6f83,	// (0x00062e0b) list_medium_line_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_g1

0x89e5,	// (0x0006486d) list_medium_line_t1_ParamLimits

0x89e5,	// (0x0006486d) list_medium_line_t1

0x1e7f,	// (0x0005dd07) list_medium_line_x2_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_g1

0x1e8b,	// (0x0005dd13) list_medium_line_x2_g2_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_g2

0x0001,

0xfa6a,	// (0x0006b8f2) list_medium_line_x2_g_ParamLimits

0xfa6a,	// (0x0006b8f2) list_medium_line_x2_g

0xa2b8,	// (0x00066140) list_medium_line_x2_t1_ParamLimits

0xa2b8,	// (0x00066140) list_medium_line_x2_t1

0x1e7f,	// (0x0005dd07) list_medium_line_x3_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x3_g1

0x1e8b,	// (0x0005dd13) list_medium_line_x3_g2_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x3_g2

0x0001,

0xfa6a,	// (0x0006b8f2) list_medium_line_x3_g_ParamLimits

0xfa6a,	// (0x0006b8f2) list_medium_line_x3_g

0xa2b8,	// (0x00066140) list_medium_line_x3_t1_ParamLimits

0xa2b8,	// (0x00066140) list_medium_line_x3_t1

0xe841,	// (0x0006a6c9) thumb_sp_fs_scroll_pane_g1

0xe84a,	// (0x0006a6d2) thumb_sp_fs_scroll_pane_g2

0xe853,	// (0x0006a6db) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0bfc,	// (0x0005ca84) thumb_sp_fs_scroll_pane_g

0xe841,	// (0x0006a6c9) bg_sp_fs_scroll_pane_g1

0xe84a,	// (0x0006a6d2) bg_sp_fs_scroll_pane_g2

0xe853,	// (0x0006a6db) bg_sp_fs_scroll_pane_g3

0x0002,

0x0bfc,	// (0x0005ca84) bg_sp_fs_scroll_pane_g

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e7f,	// (0x0005dd07) list_medium_line_x2_t3_g4_g1

0x1f24,	// (0x0005ddac) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f24,	// (0x0005ddac) list_medium_line_x2_t3_g4_g2

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e8b,	// (0x0005dd13) list_medium_line_x2_t3_g4_g3

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e97,	// (0x0005dd1f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0006b146) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0006b146) list_medium_line_x2_t3_g4_g

0x89fa,	// (0x00064882) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89fa,	// (0x00064882) list_medium_line_x2_t3_g4_t1

0x8a10,	// (0x00064898) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a10,	// (0x00064898) list_medium_line_x2_t3_g4_t2

0x1eca,	// (0x0005dd52) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1eca,	// (0x0005dd52) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa6f,	// (0x0006b8f7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa6f,	// (0x0006b8f7) list_medium_line_x2_t3_g4_t

0x6f83,	// (0x00062e0b) list_medium_line_g2_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_g2_g1

0x6f8f,	// (0x00062e17) list_medium_line_g2_g2_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_g2_g2

0x0001,

0xf813,	// (0x0006b69b) list_medium_line_g2_g_ParamLimits

0xf813,	// (0x0006b69b) list_medium_line_g2_g

0x8a2a,	// (0x000648b2) list_medium_line_g2_t1_ParamLimits

0x8a2a,	// (0x000648b2) list_medium_line_g2_t1

0x6f83,	// (0x00062e0b) list_medium_line_t3_g2_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t3_g2_g1

0x6f8f,	// (0x00062e17) list_medium_line_t3_g2_g2_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_t3_g2_g2

0x0001,

0xf813,	// (0x0006b69b) list_medium_line_t3_g2_g_ParamLimits

0xf813,	// (0x0006b69b) list_medium_line_t3_g2_g

0x8a3f,	// (0x000648c7) list_medium_line_t3_g2_t1_ParamLimits

0x8a3f,	// (0x000648c7) list_medium_line_t3_g2_t1

0x8a59,	// (0x000648e1) list_medium_line_t3_g2_t2_ParamLimits

0x8a59,	// (0x000648e1) list_medium_line_t3_g2_t2

0x8a6f,	// (0x000648f7) list_medium_line_t3_g2_t3_ParamLimits

0x8a6f,	// (0x000648f7) list_medium_line_t3_g2_t3

0x0002,

0xfa76,	// (0x0006b8fe) list_medium_line_t3_g2_t_ParamLimits

0xfa76,	// (0x0006b8fe) list_medium_line_t3_g2_t

0x8661,	// (0x000644e9) list_medium_line_right_icon_g1

0x8a85,	// (0x0006490d) list_medium_line_right_icon_t1

0x6f83,	// (0x00062e0b) list_medium_line_t2_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t2_g1

0x8a93,	// (0x0006491b) list_medium_line_t2_t1_ParamLimits

0x8a93,	// (0x0006491b) list_medium_line_t2_t1

0x8aad,	// (0x00064935) list_medium_line_t2_t2_ParamLimits

0x8aad,	// (0x00064935) list_medium_line_t2_t2

0x0001,

0xfa7d,	// (0x0006b905) list_medium_line_t2_t_ParamLimits

0xfa7d,	// (0x0006b905) list_medium_line_t2_t

0x6f83,	// (0x00062e0b) list_medium_line_t3_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t3_g1

0x8ac2,	// (0x0006494a) list_medium_line_t3_t1_ParamLimits

0x8ac2,	// (0x0006494a) list_medium_line_t3_t1

0x8adc,	// (0x00064964) list_medium_line_t3_t2_ParamLimits

0x8adc,	// (0x00064964) list_medium_line_t3_t2

0x8af2,	// (0x0006497a) list_medium_line_t3_t3_ParamLimits

0x8af2,	// (0x0006497a) list_medium_line_t3_t3

0x0002,

0xfa82,	// (0x0006b90a) list_medium_line_t3_t_ParamLimits

0xfa82,	// (0x0006b90a) list_medium_line_t3_t

0x6f83,	// (0x00062e0b) list_medium_line_g3_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_g3_g1

0x8b07,	// (0x0006498f) list_medium_line_g3_g2_ParamLimits

0x8b07,	// (0x0006498f) list_medium_line_g3_g2

0x6f8f,	// (0x00062e17) list_medium_line_g3_g3_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_g3_g3

0x0002,

0xfa89,	// (0x0006b911) list_medium_line_g3_g_ParamLimits

0xfa89,	// (0x0006b911) list_medium_line_g3_g

0x8b13,	// (0x0006499b) list_medium_line_g3_t1_ParamLimits

0x8b13,	// (0x0006499b) list_medium_line_g3_t1

0x6f83,	// (0x00062e0b) list_medium_line_t2_g3_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t2_g3_g1

0x8b07,	// (0x0006498f) list_medium_line_t2_g3_g2_ParamLimits

0x8b07,	// (0x0006498f) list_medium_line_t2_g3_g2

0x6f8f,	// (0x00062e17) list_medium_line_t2_g3_g3_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_t2_g3_g3

0x0002,

0xfa89,	// (0x0006b911) list_medium_line_t2_g3_g_ParamLimits

0xfa89,	// (0x0006b911) list_medium_line_t2_g3_g

0x8b28,	// (0x000649b0) list_medium_line_t2_g3_t1_ParamLimits

0x8b28,	// (0x000649b0) list_medium_line_t2_g3_t1

0x8b42,	// (0x000649ca) list_medium_line_t2_g3_t2_ParamLimits

0x8b42,	// (0x000649ca) list_medium_line_t2_g3_t2

0x0001,

0xfa90,	// (0x0006b918) list_medium_line_t2_g3_t_ParamLimits

0xfa90,	// (0x0006b918) list_medium_line_t2_g3_t

0x6f83,	// (0x00062e0b) list_medium_line_t3_g3_g1_ParamLimits

0x6f83,	// (0x00062e0b) list_medium_line_t3_g3_g1

0x8b07,	// (0x0006498f) list_medium_line_t3_g3_g2_ParamLimits

0x8b07,	// (0x0006498f) list_medium_line_t3_g3_g2

0x6f8f,	// (0x00062e17) list_medium_line_t3_g3_g3_ParamLimits

0x6f8f,	// (0x00062e17) list_medium_line_t3_g3_g3

0x0002,

0xfa89,	// (0x0006b911) list_medium_line_t3_g3_g_ParamLimits

0xfa89,	// (0x0006b911) list_medium_line_t3_g3_g

0x8b58,	// (0x000649e0) list_medium_line_t3_g3_t1_ParamLimits

0x8b58,	// (0x000649e0) list_medium_line_t3_g3_t1

0x8b71,	// (0x000649f9) list_medium_line_t3_g3_t2_ParamLimits

0x8b71,	// (0x000649f9) list_medium_line_t3_g3_t2

0x8b87,	// (0x00064a0f) list_medium_line_t3_g3_t3_ParamLimits

0x8b87,	// (0x00064a0f) list_medium_line_t3_g3_t3

0x0002,

0xfa95,	// (0x0006b91d) list_medium_line_t3_g3_t_ParamLimits

0xfa95,	// (0x0006b91d) list_medium_line_t3_g3_t

0x8808,	// (0x00064690) list_medium_line_right_iconx2_g1

0x8661,	// (0x000644e9) list_medium_line_right_iconx2_g2

0x0001,

0xfa9c,	// (0x0006b924) list_medium_line_right_iconx2_g

0x8b9d,	// (0x00064a25) list_medium_line_right_iconx2_t1

0x8808,	// (0x00064690) list_medium_line_t2_right_iconx2_g1

0x8661,	// (0x000644e9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa9c,	// (0x0006b924) list_medium_line_t2_right_iconx2_g

0x8bab,	// (0x00064a33) list_medium_line_t2_right_iconx2_t1

0x8bbb,	// (0x00064a43) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaa1,	// (0x0006b929) list_medium_line_t2_right_iconx2_t

0x8bc9,	// (0x00064a51) list_medium_line_x4_t4_t1

0x8bd7,	// (0x00064a5f) list_medium_line_x4_t4_t2

0x8be7,	// (0x00064a6f) list_medium_line_x4_t4_t3

0x8bf7,	// (0x00064a7f) list_medium_line_x4_t4_t4

0x0003,

0xfaa6,	// (0x0006b92e) list_medium_line_x4_t4_t

0x8c31,	// (0x00064ab9) tport_appsw_pane_ParamLimits

0x8c31,	// (0x00064ab9) tport_appsw_pane

0x8c3f,	// (0x00064ac7) tport_contact_pane_ParamLimits

0x8c3f,	// (0x00064ac7) tport_contact_pane

0x8c4f,	// (0x00064ad7) tport_listscroll_pane_ParamLimits

0x8c4f,	// (0x00064ad7) tport_listscroll_pane

0x8c5f,	// (0x00064ae7) cell_tport_appsw_pane_ParamLimits

0x8c5f,	// (0x00064ae7) cell_tport_appsw_pane

0xd047,	// (0x00068ecf) tport_appsw_pane_g1_ParamLimits

0xd047,	// (0x00068ecf) tport_appsw_pane_g1

0xe85c,	// (0x0006a6e4) tport_contact_pane_g1

0xe1f0,	// (0x0006a078) tport_contact_pane_t1

0xe865,	// (0x0006a6ed) tport_contact_pane_t2

0x0001,

0x0c43,	// (0x0005cacb) tport_contact_pane_t

0xe873,	// (0x0006a6fb) list_tport_pane

0xe87c,	// (0x0006a704) scroll_pane_cp_030

0x8c92,	// (0x00064b1a) cell_tport_appsw_pane_g1

0x8ca2,	// (0x00064b2a) cell_tport_appsw_pane_t1

0x8cb0,	// (0x00064b38) grid_highlight_pane_cp019

0x8cb8,	// (0x00064b40) list_tport_double_graphic_pane_ParamLimits

0x8cb8,	// (0x00064b40) list_tport_double_graphic_pane

0xa5ae,	// (0x00066436) list_highlight_pane_cp023_ParamLimits

0xa5ae,	// (0x00066436) list_highlight_pane_cp023

0x8cc9,	// (0x00064b51) list_tport_double_graphic_pane_g1_ParamLimits

0x8cc9,	// (0x00064b51) list_tport_double_graphic_pane_g1

0x8cd6,	// (0x00064b5e) list_tport_double_graphic_pane_t1_ParamLimits

0x8cd6,	// (0x00064b5e) list_tport_double_graphic_pane_t1

0x8ceb,	// (0x00064b73) list_tport_double_graphic_pane_t2_ParamLimits

0x8ceb,	// (0x00064b73) list_tport_double_graphic_pane_t2

0x0001,

0xfab6,	// (0x0006b93e) list_tport_double_graphic_pane_t_ParamLimits

0xfab6,	// (0x0006b93e) list_tport_double_graphic_pane_t

0x9cf5,	// (0x00065b7d) main_cale_note_pane

0x6753,	// (0x000625db) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6753,	// (0x000625db) cell_vitu2_function_top_wide_pane_cp01

0x8249,	// (0x000640d1) wait_bar_pane_cp05_ParamLimits

0xa5ae,	// (0x00066436) listscroll_cmail_pane

0xe885,	// (0x0006a70d) list_cmail_pane

0x8cfd,	// (0x00064b85) list_cmail_body_pane

0x8d24,	// (0x00064bac) list_single_cmail_header_caption_pane

0x8d4f,	// (0x00064bd7) list_single_cmail_header_detail_pane_ParamLimits

0x8d4f,	// (0x00064bd7) list_single_cmail_header_detail_pane

0xe895,	// (0x0006a71d) list_single_cmail_header_caption_pane_t1

0x8d85,	// (0x00064c0d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d85,	// (0x00064c0d) list_single_cmail_header_detail_pane_g1

0xa2ce,	// (0x00066156) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2ce,	// (0x00066156) list_single_cmail_header_detail_pane_g2

0x0002,

0xfabb,	// (0x0006b943) list_single_cmail_header_detail_pane_g_ParamLimits

0xfabb,	// (0x0006b943) list_single_cmail_header_detail_pane_g

0xa2da,	// (0x00066162) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa2da,	// (0x00066162) list_single_cmail_header_detail_pane_t1

0xa33a,	// (0x000661c2) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa33a,	// (0x000661c2) list_single_cmail_header_editor_pane_bg

0xe34d,	// (0x0006a1d5) list_cmail_body_pane_g1

0xe8b9,	// (0x0006a741) list_cmail_body_pane_t1

0xd736,	// (0x000695be) list_single_cmail_header_editor_pane_bg_g1

0xad40,	// (0x00066bc8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd746,	// (0x000695ce) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd73e,	// (0x000695c6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd96c,	// (0x000697f4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd766,	// (0x000695ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd756,	// (0x000695de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd75e,	// (0x000695e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad20,	// (0x00066ba8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d9b,	// (0x00064c23) calenote_gesture_pane_ParamLimits

0x8d9b,	// (0x00064c23) calenote_gesture_pane

0x8db5,	// (0x00064c3d) calenote_window_pane_ParamLimits

0x8db5,	// (0x00064c3d) calenote_window_pane

0xe8c7,	// (0x0006a74f) popup_note_window_cp01

0x8dcd,	// (0x00064c55) calenote_swipe_1_pane_ParamLimits

0x8dcd,	// (0x00064c55) calenote_swipe_1_pane

0x8605,	// (0x0006448d) calenote_swipe_2_pane_ParamLimits

0x8605,	// (0x0006448d) calenote_swipe_2_pane

0xe6b5,	// (0x0006a53d) calenote_swipe_1_pane_g1_ParamLimits

0xe6b5,	// (0x0006a53d) calenote_swipe_1_pane_g1

0xe6c2,	// (0x0006a54a) calenote_swipe_1_pane_g2_ParamLimits

0xe6c2,	// (0x0006a54a) calenote_swipe_1_pane_g2

0x0001,

0x0b78,	// (0x0005ca00) calenote_swipe_1_pane_g_ParamLimits

0x0b78,	// (0x0005ca00) calenote_swipe_1_pane_g

0xe8d9,	// (0x0006a761) calenote_swipe_1_pane_t1_ParamLimits

0xe8d9,	// (0x0006a761) calenote_swipe_1_pane_t1

0xe6b5,	// (0x0006a53d) calenote_swipe_2_pane_g1_ParamLimits

0xe6b5,	// (0x0006a53d) calenote_swipe_2_pane_g1

0xe8f8,	// (0x0006a780) calenote_swipe_2_pane_g2_ParamLimits

0xe8f8,	// (0x0006a780) calenote_swipe_2_pane_g2

0x0001,

0x0c60,	// (0x0005cae8) calenote_swipe_2_pane_g_ParamLimits

0x0c60,	// (0x0005cae8) calenote_swipe_2_pane_g

0xe904,	// (0x0006a78c) calenote_swipe_2_pane_t1_ParamLimits

0xe904,	// (0x0006a78c) calenote_swipe_2_pane_t1

0x9cf5,	// (0x00065b7d) main_mup_navstr_pane

0x537c,	// (0x00061204) main_mup3_pane_t7_ParamLimits

0x537c,	// (0x00061204) main_mup3_pane_t7

0x5dc2,	// (0x00061c4a) main_mp4_pane_g6_ParamLimits

0x5dc2,	// (0x00061c4a) main_mp4_pane_g6

0x6160,	// (0x00061fe8) main_image3_pane_t4_ParamLimits

0x6160,	// (0x00061fe8) main_image3_pane_t4

0x8de0,	// (0x00064c68) popup_navstr_preview_pane_ParamLimits

0x8de0,	// (0x00064c68) popup_navstr_preview_pane

0x8dec,	// (0x00064c74) scroll_navstr_pane_ParamLimits

0x8dec,	// (0x00064c74) scroll_navstr_pane

0x9cf5,	// (0x00065b7d) bg_popup_preview_window_pane_cp04

0xe92b,	// (0x0006a7b3) popup_navstr_preview_pane_t1

0x8df8,	// (0x00064c80) scroll_navstr_pane_g1_ParamLimits

0x8df8,	// (0x00064c80) scroll_navstr_pane_g1

0x8e05,	// (0x00064c8d) scroll_navstr_pane_t1_ParamLimits

0x8e05,	// (0x00064c8d) scroll_navstr_pane_t1

0xe8d0,	// (0x0006a758) bg_button_pane_cp014

0xe8d0,	// (0x0006a758) bg_button_pane_cp030

0x8518,	// (0x000643a0) list_double_fisheye_pane_g4_ParamLimits

0x8518,	// (0x000643a0) list_double_fisheye_pane_g4

0x8524,	// (0x000643ac) list_double_fisheye_pane_g5_ParamLimits

0x8524,	// (0x000643ac) list_double_fisheye_pane_g5

0xcc93,	// (0x00068b1b) sp_fs_scroll_pane_cp03

0xe7d5,	// (0x0006a65d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e1,	// (0x0006a669) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0b95,	// (0x0005ca1d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ed,	// (0x0006a675) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe88d,	// (0x0006a715) sp_fs_scroll_pane_cp02

0xaa26,	// (0x000668ae) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa26,	// (0x000668ae) popup_sp_fs_calendar_preview_list_single_pane

0x9cf5,	// (0x00065b7d) main_cam6_pano_pane

0x4365,	// (0x000601ed) main_mup3_pane_ParamLimits

0x9cf5,	// (0x00065b7d) main_phacti_pane

0x811e,	// (0x00063fa6) bg_button_pane_cp11

0x8136,	// (0x00063fbe) main_mobtv_info_pane_g2_ParamLimits

0x8136,	// (0x00063fbe) main_mobtv_info_pane_g2

0x0001,

0xf9bf,	// (0x0006b847) main_mobtv_info_pane_g_ParamLimits

0xf9bf,	// (0x0006b847) main_mobtv_info_pane_g

0x82e8,	// (0x00064170) sc_clock_pane_t5_ParamLimits

0x82e8,	// (0x00064170) sc_clock_pane_t5

0x8389,	// (0x00064211) main_radioblah_pane_g1_ParamLimits

0xe5ea,	// (0x0006a472) main_radioblah_pane_t3_ParamLimits

0xe5ea,	// (0x0006a472) main_radioblah_pane_t3

0xe602,	// (0x0006a48a) main_radioblah_pane_t4_ParamLimits

0xe602,	// (0x0006a48a) main_radioblah_pane_t4

0x83a7,	// (0x0006422f) main_radioblah_text_pane_ParamLimits

0x83a7,	// (0x0006422f) main_radioblah_text_pane

0x83b4,	// (0x0006423c) main_radioblah_info_pane_g1_ParamLimits

0x8449,	// (0x000642d1) main_radioblah_info_pane_t4_ParamLimits

0x8449,	// (0x000642d1) main_radioblah_info_pane_t4

0xa5ae,	// (0x00066436) main_sp_fs_calendar_pane

0x8e17,	// (0x00064c9f) main_phacti_pane_g1

0x8e1f,	// (0x00064ca7) phacti_note_pane_ParamLimits

0x8e1f,	// (0x00064ca7) phacti_note_pane

0xe942,	// (0x0006a7ca) phacti_term_pane_ParamLimits

0xe942,	// (0x0006a7ca) phacti_term_pane

0xe957,	// (0x0006a7df) phacti_note_pane_t1_ParamLimits

0xe957,	// (0x0006a7df) phacti_note_pane_t1

0xa351,	// (0x000661d9) phacti_term_pane_g1

0xa359,	// (0x000661e1) phacti_term_pane_t1_ParamLimits

0xa359,	// (0x000661e1) phacti_term_pane_t1

0xe96e,	// (0x0006a7f6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaac5,	// (0x0006694d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfacc,	// (0x0006b954) popup_sp_fs_calendar_preview_list_single_pane_g

0xe976,	// (0x0006a7fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe976,	// (0x0006a7fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe98c,	// (0x0006a814) aid_popup_sp_fs_bg_corner_pane

0xcd5f,	// (0x00068be7) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cf5,	// (0x00065b7d) popup_sp_fs_calendar_preview_bg_pane

0xe994,	// (0x0006a81c) popup_sp_fs_calendar_preview_list_pane

0xc94b,	// (0x000687d3) bg_main_sp_fs_cale_pane_ParamLimits

0xc94b,	// (0x000687d3) bg_main_sp_fs_cale_pane

0xa38c,	// (0x00066214) listscroll_cale_mrui_pane_ParamLimits

0xa38c,	// (0x00066214) listscroll_cale_mrui_pane

0xa3a1,	// (0x00066229) listscroll_sp_fs_schedule_track_pane

0xa3aa,	// (0x00066232) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa3aa,	// (0x00066232) main_sp_fs_ctrlbar_pane_cp01

0xe99c,	// (0x0006a824) main_sp_fs_ribbon_pane

0xa3bd,	// (0x00066245) popup_sp_fs_cale_preview_window

0x8e82,	// (0x00064d0a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e82,	// (0x00064d0a) list_single_sp_fs_schedule_track_pane

0xe65c,	// (0x0006a4e4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe65c,	// (0x0006a4e4) bg_sp_fs_highlight_list_pane_cp03

0x8ea4,	// (0x00064d2c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ea4,	// (0x00064d2c) list_single_sp_fs_schedule_track_pane_g1

0x8eb0,	// (0x00064d38) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8eb0,	// (0x00064d38) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfad1,	// (0x0006b959) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfad1,	// (0x0006b959) list_single_sp_fs_schedule_track_pane_g

0x8ebc,	// (0x00064d44) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ebc,	// (0x00064d44) list_single_sp_fs_schedule_track_pane_t1

0x8ed4,	// (0x00064d5c) sp_fs_schedule_track_pane_ParamLimits

0x8ed4,	// (0x00064d5c) sp_fs_schedule_track_pane

0xe9a4,	// (0x0006a82c) sp_fs_schedule_track_pane_g1

0xe9ac,	// (0x0006a834) sp_fs_schedule_track_pane_g2

0xe9b4,	// (0x0006a83c) sp_fs_schedule_track_pane_g3

0xe9bc,	// (0x0006a844) sp_fs_schedule_track_pane_g4

0xe9c4,	// (0x0006a84c) sp_fs_schedule_track_pane_g5

0x0004,

0x0c74,	// (0x0005cafc) sp_fs_schedule_track_pane_g

0xd736,	// (0x000695be) bg_sp_fs_schedule_viewer_highlight_g1

0xad40,	// (0x00066bc8) bg_sp_fs_schedule_viewer_highlight_g2

0xd73e,	// (0x000695c6) bg_sp_fs_schedule_viewer_highlight_g3

0xd746,	// (0x000695ce) bg_sp_fs_schedule_viewer_highlight_g4

0xd96c,	// (0x000697f4) bg_sp_fs_schedule_viewer_highlight_g5

0xd756,	// (0x000695de) bg_sp_fs_schedule_viewer_highlight_g6

0xd75e,	// (0x000695e6) bg_sp_fs_schedule_viewer_highlight_g7

0xd766,	// (0x000695ee) bg_sp_fs_schedule_viewer_highlight_g8

0xad20,	// (0x00066ba8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfad6,	// (0x0006b95e) bg_sp_fs_schedule_viewer_highlight_g

0x9cf5,	// (0x00065b7d) bg_main_sp_fs_ribbon_pane

0x8ee4,	// (0x00064d6c) main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0006a854) main_sp_fs_ribbon_pane_t1

0x8eed,	// (0x00064d75) main_sp_fs_ribbon_pane_t2

0xe9db,	// (0x0006a863) main_sp_fs_ribbon_pane_t3

0x0002,

0xfae9,	// (0x0006b971) main_sp_fs_ribbon_pane_t

0xe9ea,	// (0x0006a872) main_sp_fs_ribbon_scheduler_pane

0xe9f2,	// (0x0006a87a) bg_main_sp_fs_ribbon_pane_g1

0xe9fb,	// (0x0006a883) bg_main_sp_fs_ribbon_pane_g2

0xea04,	// (0x0006a88c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfaf0,	// (0x0006b978) bg_main_sp_fs_ribbon_pane_g

0xea0c,	// (0x0006a894) main_sp_fs_ribbon_scheduler_pane_g1

0xea15,	// (0x0006a89d) main_sp_fs_ribbon_scheduler_pane_g2

0xea1e,	// (0x0006a8a6) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfaf7,	// (0x0006b97f) main_sp_fs_ribbon_scheduler_pane_g

0xea27,	// (0x0006a8af) list_cale_mrui_pane

0x8efc,	// (0x00064d84) sp_fs_scroll_pane_cp07_ParamLimits

0x8efc,	// (0x00064d84) sp_fs_scroll_pane_cp07

0x8f18,	// (0x00064da0) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f18,	// (0x00064da0) bg_sp_fs_schedule_viewer_highlight

0xea3c,	// (0x0006a8c4) list_single_sp_fs_schedule_track_pane_cp01

0xea44,	// (0x0006a8cc) list_sp_fs_schedule_track_pane

0xea4c,	// (0x0006a8d4) sp_fs_scroll_pane_cp06_ParamLimits

0xea4c,	// (0x0006a8d4) sp_fs_scroll_pane_cp06

0xcd5f,	// (0x00068be7) bgmain_sp_fs_calendar_pane_g1

0x8f25,	// (0x00064dad) list_single_cale_mrui_pane_ParamLimits

0x8f25,	// (0x00064dad) list_single_cale_mrui_pane

0xa3cf,	// (0x00066257) list_single_cale_mrui_row_pane_ParamLimits

0xa3cf,	// (0x00066257) list_single_cale_mrui_row_pane

0xa3dc,	// (0x00066264) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3dc,	// (0x00066264) list_single_cale_mrui_row_pane_g1

0xa414,	// (0x0006629c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa414,	// (0x0006629c) list_single_cale_mrui_row_pane_t1

0x8f53,	// (0x00064ddb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f53,	// (0x00064ddb) list_single_cale_mrui_row_pane_t2

0xa426,	// (0x000662ae) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa426,	// (0x000662ae) list_single_cale_mrui_row_pane_t3

0xa455,	// (0x000662dd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa455,	// (0x000662dd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb05,	// (0x0006b98d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb05,	// (0x0006b98d) list_single_cale_mrui_row_pane_t

0x8fb9,	// (0x00064e41) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fb9,	// (0x00064e41) list_single_cmail_header_editor_pane_bg_cp01

0x8fd9,	// (0x00064e61) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fd9,	// (0x00064e61) list_single_cmail_header_editor_pane_bg_cp02

0x8ff5,	// (0x00064e7d) main_radioblah_text_pane_t1_ParamLimits

0x8ff5,	// (0x00064e7d) main_radioblah_text_pane_t1

0xea6b,	// (0x0006a8f3) cam6_indi_pane_cp01

0xea73,	// (0x0006a8fb) cam6_mode_pane_cp01

0xea7b,	// (0x0006a903) cam6_pano_pane

0xea84,	// (0x0006a90c) cam6_zoom_pane_cp01

0xea8c,	// (0x0006a914) cam6_pano_image_pane

0xea97,	// (0x0006a91f) cam6_pano_pane_g1

0xe34d,	// (0x0006a1d5) cam6_pano_pane_g2

0xeaa0,	// (0x0006a928) cam6_pano_pane_g3

0xeaa9,	// (0x0006a931) cam6_pano_pane_g4

0xd342,	// (0x000691ca) cam6_pano_pane_g5

0xeab2,	// (0x0006a93a) cam6_pano_pane_g6

0xea34,	// (0x0006a8bc) cam6_pano_pane_g7

0xeabc,	// (0x0006a944) cam6_pano_pane_g8

0xeac5,	// (0x0006a94d) cam6_pano_pane_g9

0x0008,

0xfb0e,	// (0x0006b996) cam6_pano_pane_g

0x9cf5,	// (0x00065b7d) main_browser_tag_pane

0xe923,	// (0x0006a7ab) grid_navstr_albumart_pane

0xead0,	// (0x0006a958) cell_navstr_albumart_pane_ParamLimits

0xead0,	// (0x0006a958) cell_navstr_albumart_pane

0xeaf0,	// (0x0006a978) cell_navstr_albumart_pane_g1

0xc75c,	// (0x000685e4) cell_navstr_albumart_pane_g2

0xc76c,	// (0x000685f4) cell_navstr_albumart_pane_g3

0xc764,	// (0x000685ec) cell_navstr_albumart_pane_g4

0x0003,

0xfb21,	// (0x0006b9a9) cell_navstr_albumart_pane_g

0x9010,	// (0x00064e98) bt_list_pane_ParamLimits

0x9010,	// (0x00064e98) bt_list_pane

0x9030,	// (0x00064eb8) bt_list_pane_t1

0x903f,	// (0x00064ec7) bt_list_pane_t2

0x0001,

0xfb2a,	// (0x0006b9b2) bt_list_pane_t

0x9cf5,	// (0x00065b7d) main_cale_prevew_pane

0x904e,	// (0x00064ed6) popup_cale_preview_window_ParamLimits

0x904e,	// (0x00064ed6) popup_cale_preview_window

0xa5ae,	// (0x00066436) bg_popup_preview_window_pane_cp05_ParamLimits

0xa5ae,	// (0x00066436) bg_popup_preview_window_pane_cp05

0xeaf8,	// (0x0006a980) list_cale_preview_pane_ParamLimits

0xeaf8,	// (0x0006a980) list_cale_preview_pane

0x9067,	// (0x00064eef) list_double_cale_preview_pane_ParamLimits

0x9067,	// (0x00064eef) list_double_cale_preview_pane

0x9079,	// (0x00064f01) list_single_cale_preview_pane_ParamLimits

0x9079,	// (0x00064f01) list_single_cale_preview_pane

0x908f,	// (0x00064f17) list_single_cale_preview_pane_g1

0x9097,	// (0x00064f1f) list_single_cale_preview_pane_t1_ParamLimits

0x9097,	// (0x00064f1f) list_single_cale_preview_pane_t1

0x90ac,	// (0x00064f34) list_double_cale_preview_pane_g1

0x90b4,	// (0x00064f3c) list_double_cale_preview_pane_t1_ParamLimits

0x90b4,	// (0x00064f3c) list_double_cale_preview_pane_t1

0x90c9,	// (0x00064f51) list_double_cale_preview_pane_t2_ParamLimits

0x90c9,	// (0x00064f51) list_double_cale_preview_pane_t2

0x0001,

0xfb2f,	// (0x0006b9b7) list_double_cale_preview_pane_t_ParamLimits

0xfb2f,	// (0x0006b9b7) list_double_cale_preview_pane_t

0x9cf5,	// (0x00065b7d) main_ezdial_pane

0xa5ae,	// (0x00066436) main_sp_fs_email_pane_ParamLimits

0x8687,	// (0x0006450f) cmail_ddmenu_btn01_pane_ParamLimits

0x8687,	// (0x0006450f) cmail_ddmenu_btn01_pane

0x86a4,	// (0x0006452c) cmail_ddmenu_btn02_pane_ParamLimits

0x86a4,	// (0x0006452c) cmail_ddmenu_btn02_pane

0x86c2,	// (0x0006454a) cmail_ddmenu_btn03_pane_ParamLimits

0x86c2,	// (0x0006454a) cmail_ddmenu_btn03_pane

0x86f0,	// (0x00064578) main_sp_fs_ctrlbar_pane_ParamLimits

0x8706,	// (0x0006458e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cfd,	// (0x00064b85) list_cmail_body_pane_ParamLimits

0xe8a3,	// (0x0006a72b) bg_button_pane_cp12

0xe8ac,	// (0x0006a734) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ac,	// (0x0006a734) list_single_cmail_header_detail_pane_g3

0xa316,	// (0x0006619e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa316,	// (0x0006619e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfac2,	// (0x0006b94a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfac2,	// (0x0006b94a) list_single_cmail_header_detail_pane_t

0xa36e,	// (0x000661f6) phacti_term_pane_t2_ParamLimits

0xa36e,	// (0x000661f6) phacti_term_pane_t2

0x0001,

0xfac7,	// (0x0006b94f) phacti_term_pane_t_ParamLimits

0xfac7,	// (0x0006b94f) phacti_term_pane_t

0xeb04,	// (0x0006a98c) aid_size_list_single_double

0x90e1,	// (0x00064f69) popup_ezdial_listscroll_window

0x9102,	// (0x00064f8a) popup_number_entry_window_cp01

0xaae7,	// (0x0006696f) bg_popup_call_pane_cp09

0xeb10,	// (0x0006a998) ezdial_list_pane

0xeb18,	// (0x0006a9a0) scroll_pane_cp23

0xcb38,	// (0x000689c0) bg_button_pane_cp028_ParamLimits

0xcb38,	// (0x000689c0) bg_button_pane_cp028

0x9110,	// (0x00064f98) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9110,	// (0x00064f98) cmail_ddmenu_btn01_pane_g1

0x9120,	// (0x00064fa8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9120,	// (0x00064fa8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb34,	// (0x0006b9bc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb34,	// (0x0006b9bc) cmail_ddmenu_btn01_pane_g

0xeb20,	// (0x0006a9a8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb20,	// (0x0006a9a8) cmail_ddmenu_btn01_pane_t1

0xc94b,	// (0x000687d3) bg_button_pane_cp029_ParamLimits

0xc94b,	// (0x000687d3) bg_button_pane_cp029

0x9120,	// (0x00064fa8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9120,	// (0x00064fa8) cmail_ddmenu_btn02_pane_g1

0x9138,	// (0x00064fc0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9138,	// (0x00064fc0) cmail_ddmenu_btn02_pane_t1

0xe65c,	// (0x0006a4e4) bg_button_pane_cp031_ParamLimits

0xe65c,	// (0x0006a4e4) bg_button_pane_cp031

0x9120,	// (0x00064fa8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9120,	// (0x00064fa8) cmail_ddmenu_btn03_pane_g1

0x9138,	// (0x00064fc0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9138,	// (0x00064fc0) cmail_ddmenu_btn03_pane_t1

0x5ffd,	// (0x00061e85) cell_dialer2_keypad_pane_t1_ParamLimits

0x6017,	// (0x00061e9f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6017,	// (0x00061e9f) cell_dialer2_keypad_pane_t1_copy1

0x7f5f,	// (0x00063de7) ncimui_group_button_pane

0xa5ae,	// (0x00066436) main_sp_fs_calendar_pane_ParamLimits

0x8d24,	// (0x00064bac) list_single_cmail_header_caption_pane_ParamLimits

0xa383,	// (0x0006620b) aid_recal_txt_sm_pane

0x9cf5,	// (0x00065b7d) mian_recal_day_pane

0xa3bd,	// (0x00066245) popup_sp_fs_cale_preview_window_ParamLimits

0xeb35,	// (0x0006a9bd) list_recal_day_pane

0xa49f,	// (0x00066327) list_single_recal_day_pane_ParamLimits

0xa49f,	// (0x00066327) list_single_recal_day_pane

0xeb5c,	// (0x0006a9e4) list_single_recal_day_pane_g1_ParamLimits

0xeb5c,	// (0x0006a9e4) list_single_recal_day_pane_g1

0xa4b1,	// (0x00066339) list_single_recal_day_pane_g2_ParamLimits

0xa4b1,	// (0x00066339) list_single_recal_day_pane_g2

0xa4bd,	// (0x00066345) list_single_recal_day_pane_g3_ParamLimits

0xa4bd,	// (0x00066345) list_single_recal_day_pane_g3

0x915c,	// (0x00064fe4) list_single_recal_day_pane_g4_ParamLimits

0x915c,	// (0x00064fe4) list_single_recal_day_pane_g4

0xa4c9,	// (0x00066351) list_single_recal_day_pane_g5_ParamLimits

0xa4c9,	// (0x00066351) list_single_recal_day_pane_g5

0xa4d5,	// (0x0006635d) list_single_recal_day_pane_g6_ParamLimits

0xa4d5,	// (0x0006635d) list_single_recal_day_pane_g6

0x0004,

0xfb43,	// (0x0006b9cb) list_single_recal_day_pane_g_ParamLimits

0xfb43,	// (0x0006b9cb) list_single_recal_day_pane_g

0xa4e9,	// (0x00066371) list_single_recal_day_pane_t1

0xa4fb,	// (0x00066383) list_single_recal_day_pane_t2

0x0001,

0xfb4e,	// (0x0006b9d6) list_single_recal_day_pane_t

0x9174,	// (0x00064ffc) ncimui_query_button_pane_ParamLimits

0x9174,	// (0x00064ffc) ncimui_query_button_pane

0x9184,	// (0x0006500c) ncimui_query_button_pane_t1_ParamLimits

0x9184,	// (0x0006500c) ncimui_query_button_pane_t1

0xeb68,	// (0x0006a9f0) ncimui_query_button_pane_t2_ParamLimits

0xeb68,	// (0x0006a9f0) ncimui_query_button_pane_t2

0x0001,

0xfb53,	// (0x0006b9db) ncimui_query_button_pane_t_ParamLimits

0xfb53,	// (0x0006b9db) ncimui_query_button_pane_t

0x9197,	// (0x0006501f) query_button_pane_ParamLimits

0x9197,	// (0x0006501f) query_button_pane

0x9cf5,	// (0x00065b7d) bg_button_pane_cp0028

0xeb7b,	// (0x0006aa03) query_button_pane_t1

0x4381,	// (0x00060209) main_tport_pane_ParamLimits

0x8c07,	// (0x00064a8f) bg_popup_window_pane_cp01_ParamLimits

0x8c07,	// (0x00064a8f) bg_popup_window_pane_cp01

0x8c15,	// (0x00064a9d) heading_pane_cp08_ParamLimits

0x8c15,	// (0x00064a9d) heading_pane_cp08

0x8c23,	// (0x00064aab) heading_pane_cp07_ParamLimits

0x8c23,	// (0x00064aab) heading_pane_cp07

0x8c92,	// (0x00064b1a) cell_tport_appsw_pane_g2

0x0002,

0xfaaf,	// (0x0006b937) cell_tport_appsw_pane_g

0xa057,	// (0x00065edf) input_candi_list_open_g1

0xaf03,	// (0x00066d8b) list_cale_time_pane_g6_ParamLimits

0xaf03,	// (0x00066d8b) list_cale_time_pane_g6

0x4dfe,	// (0x00060c86) aid_size_touch_calib_1_ParamLimits

0x4dfe,	// (0x00060c86) aid_size_touch_calib_1

0x4e0a,	// (0x00060c92) aid_size_touch_calib_2_ParamLimits

0x4e0a,	// (0x00060c92) aid_size_touch_calib_2

0x4e18,	// (0x00060ca0) aid_size_touch_calib_3_ParamLimits

0x4e18,	// (0x00060ca0) aid_size_touch_calib_3

0x4e28,	// (0x00060cb0) aid_size_touch_calib_4_ParamLimits

0x4e28,	// (0x00060cb0) aid_size_touch_calib_4

0x4e36,	// (0x00060cbe) main_touch_calib_button_group_pane_ParamLimits

0x4e36,	// (0x00060cbe) main_touch_calib_button_group_pane

0x4e44,	// (0x00060ccc) main_touch_calib_pane_g1_ParamLimits

0x4e50,	// (0x00060cd8) main_touch_calib_pane_g2_ParamLimits

0x4e5c,	// (0x00060ce4) main_touch_calib_pane_g3_ParamLimits

0x4e68,	// (0x00060cf0) main_touch_calib_pane_g4_ParamLimits

0xf5f8,	// (0x0006b480) main_touch_calib_pane_g_ParamLimits

0x4e74,	// (0x00060cfc) main_touch_calib_pane_t1_ParamLimits

0x4e8d,	// (0x00060d15) main_touch_calib_pane_t2_ParamLimits

0x4ea6,	// (0x00060d2e) main_touch_calib_pane_t3_ParamLimits

0x4ebc,	// (0x00060d44) main_touch_calib_pane_t4_ParamLimits

0x4ed2,	// (0x00060d5a) main_touch_calib_pane_t5_ParamLimits

0xf601,	// (0x0006b489) main_touch_calib_pane_t_ParamLimits

0xd0e2,	// (0x00068f6a) list_single_fp_cale_pane_g3_ParamLimits

0xd0e2,	// (0x00068f6a) list_single_fp_cale_pane_g3

0x4365,	// (0x000601ed) bg_button_pane_cp012_ParamLimits

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp03_ParamLimits

0x6f03,	// (0x00062d8b) cell_vitu2_function_top_pane_g1_ParamLimits

0x4365,	// (0x000601ed) bg_vkb2_func_pane_cp04_ParamLimits

0x7ee7,	// (0x00063d6f) main_ncimui_button_group_pane_ParamLimits

0x7ee7,	// (0x00063d6f) main_ncimui_button_group_pane

0x7f4d,	// (0x00063dd5) main_ncimui_pane_t3_ParamLimits

0x7f4d,	// (0x00063dd5) main_ncimui_pane_t3

0xe939,	// (0x0006a7c1) phacti_button_group_pane

0xeb04,	// (0x0006a98c) aid_size_list_single_double_ParamLimits

0x90e1,	// (0x00064f69) popup_ezdial_listscroll_window_ParamLimits

0x9102,	// (0x00064f8a) popup_number_entry_window_cp01_ParamLimits

0x91a4,	// (0x0006502c) phacti_button_pane_ParamLimits

0x91a4,	// (0x0006502c) phacti_button_pane

0x9cf5,	// (0x00065b7d) bg_button_pane_cp14

0xeb89,	// (0x0006aa11) phacti_button_pane_t1

0x91b5,	// (0x0006503d) main_touch_calib_button_pane_ParamLimits

0x91b5,	// (0x0006503d) main_touch_calib_button_pane

0xa919,	// (0x000667a1) bg_button_pane_cp18_ParamLimits

0xa919,	// (0x000667a1) bg_button_pane_cp18

0xeb97,	// (0x0006aa1f) main_touch_calib_button_pane_t1_ParamLimits

0xeb97,	// (0x0006aa1f) main_touch_calib_button_pane_t1

0xebad,	// (0x0006aa35) main_touch_calib_button_pane_t2_ParamLimits

0xebad,	// (0x0006aa35) main_touch_calib_button_pane_t2

0x0001,

0xfb58,	// (0x0006b9e0) main_touch_calib_button_pane_t_ParamLimits

0xfb58,	// (0x0006b9e0) main_touch_calib_button_pane_t

0x9cf5,	// (0x00065b7d) cell_ncimui_button_pane

0x9cf5,	// (0x00065b7d) bg_button_pane_cp032

0xebcb,	// (0x0006aa53) cell_ncimui_button_pane_t1

0x6073,	// (0x00061efb) image3_infobar_pane_ParamLimits

0x6073,	// (0x00061efb) image3_infobar_pane

0x830a,	// (0x00064192) fs_bigclock_status_pane_ParamLimits

0x830a,	// (0x00064192) fs_bigclock_status_pane

0x8317,	// (0x0006419f) main_fs_bigclock_clock_pane_ParamLimits

0x8317,	// (0x0006419f) main_fs_bigclock_clock_pane

0x832b,	// (0x000641b3) main_fs_bigclock_indi_pane_ParamLimits

0x832b,	// (0x000641b3) main_fs_bigclock_indi_pane

0x8353,	// (0x000641db) main_fs_bigclock_swipe_pane_ParamLimits

0x8353,	// (0x000641db) main_fs_bigclock_swipe_pane

0x9cf5,	// (0x00065b7d) main_fs_clock_dumped_data

0xe45a,	// (0x0006a2e2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45a,	// (0x0006a2e2) list_single_fs_bigclock_indicator_pane_g1

0xe475,	// (0x0006a2fd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe475,	// (0x0006a2fd) list_single_fs_bigclock_indicator_pane_g2

0xe48f,	// (0x0006a317) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48f,	// (0x0006a317) list_single_fs_bigclock_indicator_pane_g3

0xe4a9,	// (0x0006a331) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a9,	// (0x0006a331) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b29,	// (0x0005c9b1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b29,	// (0x0005c9b1) list_single_fs_bigclock_indicator_pane_g

0xe4d4,	// (0x0006a35c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d4,	// (0x0006a35c) list_single_fs_bigclock_indicator_pane_t1

0xe4fc,	// (0x0006a384) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fc,	// (0x0006a384) list_single_fs_bigclock_indicator_pane_t2

0xe524,	// (0x0006a3ac) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe524,	// (0x0006a3ac) list_single_fs_bigclock_indicator_pane_t3

0xe54c,	// (0x0006a3d4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54c,	// (0x0006a3d4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b34,	// (0x0005c9bc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b34,	// (0x0005c9bc) list_single_fs_bigclock_indicator_pane_t

0xebd9,	// (0x0006aa61) image3_infobar_fav_pane_ParamLimits

0xebd9,	// (0x0006aa61) image3_infobar_fav_pane

0xebe9,	// (0x0006aa71) image3_infobar_loc_pane_ParamLimits

0xebe9,	// (0x0006aa71) image3_infobar_loc_pane

0xebfd,	// (0x0006aa85) image3_infobar_time_pane_ParamLimits

0xebfd,	// (0x0006aa85) image3_infobar_time_pane

0xcd5f,	// (0x00068be7) image3_infobar_time_pane_g1

0xec0d,	// (0x0006aa95) image3_infobar_time_pane_t1

0xcd5f,	// (0x00068be7) image3_infobar_loc_pane_g1

0xec1b,	// (0x0006aaa3) image3_infobar_loc_pane_g2

0x0001,

0x0cea,	// (0x0005cb72) image3_infobar_loc_pane_g

0xec23,	// (0x0006aaab) image3_infobar_loc_pane_t1

0xcd5f,	// (0x00068be7) image3_infobar_fav_pane_g1

0xec31,	// (0x0006aab9) image3_infobar_fav_pane_g2

0x0001,

0x0cef,	// (0x0005cb77) image3_infobar_fav_pane_g

0xec39,	// (0x0006aac1) fs_bigclock_status_battery_pane

0xec42,	// (0x0006aaca) fs_bigclock_status_signal_pane

0xec4b,	// (0x0006aad3) fs_bigclock_status_title_pane

0xec54,	// (0x0006aadc) fs_bigclock_status_signal_pane_g1

0xec5d,	// (0x0006aae5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb5d,	// (0x0006b9e5) fs_bigclock_status_signal_pane_g

0xec65,	// (0x0006aaed) fs_bigclock_status_battery_pane_g1

0xec6e,	// (0x0006aaf6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb62,	// (0x0006b9ea) fs_bigclock_status_battery_pane_g

0xec76,	// (0x0006aafe) fs_bigclock_status_title_pane_t1

0x91c5,	// (0x0006504d) main_fs_bigclock_clock_pane_g1

0x91c5,	// (0x0006504d) main_fs_bigclock_clock_pane_g2

0x91d2,	// (0x0006505a) main_fs_bigclock_clock_pane_g3

0x91d2,	// (0x0006505a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb67,	// (0x0006b9ef) main_fs_bigclock_clock_pane_g

0x91de,	// (0x00065066) main_fs_bigclock_clock_pane_t1

0x91f1,	// (0x00065079) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb70,	// (0x0006b9f8) main_fs_bigclock_clock_pane_t

0xec84,	// (0x0006ab0c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec84,	// (0x0006ab0c) list_single_fs_bigclock_indicator_pane

0xec95,	// (0x0006ab1d) list_single_fs_bigclock_pane_ParamLimits

0xec95,	// (0x0006ab1d) list_single_fs_bigclock_pane

0xecbb,	// (0x0006ab43) main_fs_bigclock_indicator_pane_t1

0xecca,	// (0x0006ab52) list_single_fs_bigclock_pane_g1

0xecd2,	// (0x0006ab5a) list_single_fs_bigclock_pane_t1

0xcd5f,	// (0x00068be7) main_fs_bigclock_swipe_pane_g1

0xed15,	// (0x0006ab9d) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0d09,	// (0x0005cb91) main_fs_bigclock_swipe_pane_g

0xed1d,	// (0x0006aba5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1d,	// (0x0006aba5) main_fs_bigclock_swipe_pane_t1

0x3353,	// (0x0005f1db) call_type_pane_ParamLimits

0x9cf5,	// (0x00065b7d) main_btmg_pane

0xa408,	// (0x00066290) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa408,	// (0x00066290) list_single_cale_mrui_row_pane_g2

0x0002,

0xfafe,	// (0x0006b986) list_single_cale_mrui_row_pane_g_ParamLimits

0xfafe,	// (0x0006b986) list_single_cale_mrui_row_pane_g

0xa48e,	// (0x00066316) list_recal_vselct_arw_lo_pane

0xeb54,	// (0x0006a9dc) list_recal_vselct_arw_up_pane

0xa496,	// (0x0006631e) list_recal_vselct_pane

0x9248,	// (0x000650d0) btmg_button_pane

0x9254,	// (0x000650dc) main_btmg_pane_g1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp044

0xed3a,	// (0x0006abc2) btmg_button_pane_t1

0xc937,	// (0x000687bf) aid_listscroll_gen

0xa5ae,	// (0x00066436) main_cntbar_detail_pane

0xe885,	// (0x0006a70d) list_cmail_folder_pane

0xcc93,	// (0x00068b1b) sp_fs_scroll_pane_cp03_ParamLimits

0x925c,	// (0x000650e4) list_single_fs_dyc_pane_cp01_ParamLimits

0x925c,	// (0x000650e4) list_single_fs_dyc_pane_cp01

0xed48,	// (0x0006abd0) aid_size_cmail_indent

0xa50d,	// (0x00066395) list_single_dyc_row_pane_cp01

0x92a8,	// (0x00065130) cntbar_detail_list_pane_ParamLimits

0x92a8,	// (0x00065130) cntbar_detail_list_pane

0x92e2,	// (0x0006516a) main_cntbar_detail_cont_pane_ParamLimits

0x92e2,	// (0x0006516a) main_cntbar_detail_cont_pane

0x3278,	// (0x0005f100) scroll_pane_cp032_ParamLimits

0x3278,	// (0x0005f100) scroll_pane_cp032

0x92ee,	// (0x00065176) cntbar_detail_list_event_pane_ParamLimits

0x92ee,	// (0x00065176) cntbar_detail_list_event_pane

0x92b4,	// (0x0006513c) cntbar_detail_list_shct_pane

0xad8e,	// (0x00066c16) aid_list_gen

0xed51,	// (0x0006abd9) aid_scroll

0xed5a,	// (0x0006abe2) aid_size_touch_scroll_bar

0x7663,	// (0x000634eb) aid_list_double

0x9302,	// (0x0006518a) aid_list_single

0x7651,	// (0x000634d9) aid_list_single_lg

0x930b,	// (0x00065193) aid_list_z_g_a_sm

0x9313,	// (0x0006519b) aid_list_z_g_d

0x931b,	// (0x000651a3) aid_txt_z_prm

0x9329,	// (0x000651b1) aid_txt_z_prm_cp01

0x9337,	// (0x000651bf) aid_txt_z_sec

0x9345,	// (0x000651cd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9345,	// (0x000651cd) main_cntbar_detail_cont_pane_g1

0x9352,	// (0x000651da) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9352,	// (0x000651da) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb81,	// (0x0006ba09) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb81,	// (0x0006ba09) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0006abeb) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0006abf9) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0006ac07) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb86,	// (0x0006ba0e) main_cntbar_detail_cont_pane_t

0x935e,	// (0x000651e6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x935e,	// (0x000651e6) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0006ac15) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0006ac1e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb8d,	// (0x0006ba15) cntbar_detail_list_shct_pane_g

0x9372,	// (0x000651fa) cntbar_detail_list_event_pane_g1_ParamLimits

0x9372,	// (0x000651fa) cntbar_detail_list_event_pane_g1

0x937e,	// (0x00065206) cntbar_detail_list_event_pane_g2_ParamLimits

0x937e,	// (0x00065206) cntbar_detail_list_event_pane_g2

0x0005,

0xfb92,	// (0x0006ba1a) cntbar_detail_list_event_pane_g_ParamLimits

0xfb92,	// (0x0006ba1a) cntbar_detail_list_event_pane_g

0x93ea,	// (0x00065272) cntbar_detail_list_event_pane_t1_ParamLimits

0x93ea,	// (0x00065272) cntbar_detail_list_event_pane_t1

0x93ff,	// (0x00065287) cntbar_detail_list_event_pane_t2_ParamLimits

0x93ff,	// (0x00065287) cntbar_detail_list_event_pane_t2

0x0002,

0xfb9f,	// (0x0006ba27) cntbar_detail_list_event_pane_t_ParamLimits

0xfb9f,	// (0x0006ba27) cntbar_detail_list_event_pane_t

0xcd5f,	// (0x00068be7) cell_cntbar_detail_list_shct_pane_g1

0xb505,	// (0x0006738d) navi_pane_mv_g3

0xa5ae,	// (0x00066436) main_cntbar_detail_pane_ParamLimits

0x9cf5,	// (0x00065b7d) main_notif_wgt_pane

0x5cfd,	// (0x00061b85) aid_tch_main_mp4_pane_g4

0x5f5c,	// (0x00061de4) popup_slider_window_cp02

0xa484,	// (0x0006630c) list_recal_day_event_pane

0x9288,	// (0x00065110) cntbar_detail_btn_pane_ParamLimits

0x9288,	// (0x00065110) cntbar_detail_btn_pane

0x9298,	// (0x00065120) cntbar_detail_btn_pane_cp01_ParamLimits

0x9298,	// (0x00065120) cntbar_detail_btn_pane_cp01

0x92b4,	// (0x0006513c) cntbar_detail_list_shct_pane_ParamLimits

0x92c0,	// (0x00065148) cntbar_detail_pane_g1_ParamLimits

0x92c0,	// (0x00065148) cntbar_detail_pane_g1

0x92cc,	// (0x00065154) cntbar_detail_pane_t1_ParamLimits

0x92cc,	// (0x00065154) cntbar_detail_pane_t1

0x938a,	// (0x00065212) cntbar_detail_list_event_pane_g3_ParamLimits

0x938a,	// (0x00065212) cntbar_detail_list_event_pane_g3

0x93a2,	// (0x0006522a) cntbar_detail_list_event_pane_g4_ParamLimits

0x93a2,	// (0x0006522a) cntbar_detail_list_event_pane_g4

0x93ba,	// (0x00065242) cntbar_detail_list_event_pane_g5_ParamLimits

0x93ba,	// (0x00065242) cntbar_detail_list_event_pane_g5

0x93d2,	// (0x0006525a) cntbar_detail_list_event_pane_g6_ParamLimits

0x93d2,	// (0x0006525a) cntbar_detail_list_event_pane_g6

0x9414,	// (0x0006529c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9414,	// (0x0006529c) cntbar_detail_list_event_pane_t3

0x9426,	// (0x000652ae) popup_notif_wgt_window_ParamLimits

0x9426,	// (0x000652ae) popup_notif_wgt_window

0x9436,	// (0x000652be) popup_submenu_window_cp01_ParamLimits

0x9436,	// (0x000652be) popup_submenu_window_cp01

0xaae7,	// (0x0006696f) bg_popup_window_pane_cp10

0xed9f,	// (0x0006ac27) listscroll_notif_wgt_pane

0xedb1,	// (0x0006ac39) list_notif_wgt_window

0xedba,	// (0x0006ac42) scroll_pane_cp033

0x9448,	// (0x000652d0) list_notif_wgt_row_pane_ParamLimits

0x9448,	// (0x000652d0) list_notif_wgt_row_pane

0xedc3,	// (0x0006ac4b) aid_size_list_notif_wgt_del

0xedd0,	// (0x0006ac58) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0006ac64) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0006ac73) list_notif_wgt_row_pane_g3

0x0002,

0xfba6,	// (0x0006ba2e) list_notif_wgt_row_pane_g

0xedf8,	// (0x0006ac80) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0006ac96) list_notif_wgt_row_pane_t2

0xee20,	// (0x0006aca8) list_notif_wgt_row_pane_t3

0x0002,

0xfbad,	// (0x0006ba35) list_notif_wgt_row_pane_t

0xd986,	// (0x0006980e) list_recal_day_event_pane_g1

0xee32,	// (0x0006acba) list_recal_day_event_pane_t1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp045

0x945a,	// (0x000652e2) cntbar_detail_btn_pane_t1

0xc94b,	// (0x000687d3) main_callh_pane_ParamLimits

0xc94b,	// (0x000687d3) main_callh_pane

0x9cf5,	// (0x00065b7d) main_coverflow0_pane

0x9cf5,	// (0x00065b7d) main_wgtman_pane

0x836b,	// (0x000641f3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x836b,	// (0x000641f3) main_fs_bigclock_unlock_btn_pane

0x8c8a,	// (0x00064b12) bg_button_pane_cp16

0x8c9a,	// (0x00064b22) cell_tport_appsw_pane_g3

0x9468,	// (0x000652f0) cf0_flow_pane_ParamLimits

0x9468,	// (0x000652f0) cf0_flow_pane

0xee41,	// (0x0006acc9) listscroll_cf0_pane

0xee4c,	// (0x0006acd4) main_cf0_pane_g1

0x9477,	// (0x000652ff) main_cf0_pane_t1_ParamLimits

0x9477,	// (0x000652ff) main_cf0_pane_t1

0x948b,	// (0x00065313) main_cf0_pane_t2_ParamLimits

0x948b,	// (0x00065313) main_cf0_pane_t2

0x0001,

0xfbb9,	// (0x0006ba41) main_cf0_pane_t_ParamLimits

0xfbb9,	// (0x0006ba41) main_cf0_pane_t

0xee5e,	// (0x0006ace6) scroll_pane_cp11

0x949f,	// (0x00065327) cf0_flow_pane_g1

0x94a7,	// (0x0006532f) cf0_flow_pane_g2

0x0001,

0xfbbe,	// (0x0006ba46) cf0_flow_pane_g

0x94af,	// (0x00065337) cf0_flow_pane_t1

0x9cf5,	// (0x00065b7d) main_call6_pane

0x9cf5,	// (0x00065b7d) main_calllock_pane

0x94bd,	// (0x00065345) call6_btn_grp_pane_ParamLimits

0x94bd,	// (0x00065345) call6_btn_grp_pane

0x94cc,	// (0x00065354) call6_pane_g1_ParamLimits

0x94cc,	// (0x00065354) call6_pane_g1

0x94dc,	// (0x00065364) popup_call6_1st_window_ParamLimits

0x94dc,	// (0x00065364) popup_call6_1st_window

0x94ea,	// (0x00065372) popup_call6_2nd_window_ParamLimits

0x94ea,	// (0x00065372) popup_call6_2nd_window

0x94f8,	// (0x00065380) cell_call6_btn_pane_ParamLimits

0x94f8,	// (0x00065380) cell_call6_btn_pane

0xaae7,	// (0x0006696f) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0006acf1) popup_call6_1st_window_g1

0xee71,	// (0x0006acf9) popup_call6_1st_window_g2

0xee79,	// (0x0006ad01) popup_call6_1st_window_g3

0x0002,

0xfbc3,	// (0x0006ba4b) popup_call6_1st_window_g

0xee81,	// (0x0006ad09) popup_call6_1st_window_t1

0xee90,	// (0x0006ad18) popup_call6_1st_window_t2

0xee9e,	// (0x0006ad26) popup_call6_1st_window_t3

0x0002,

0xfbca,	// (0x0006ba52) popup_call6_1st_window_t

0xaae7,	// (0x0006696f) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0006acf1) popup_call6_2nd_window_g1

0xee71,	// (0x0006acf9) popup_call6_2nd_window_g2

0xee79,	// (0x0006ad01) popup_call6_2nd_window_g3

0x0002,

0xfbc3,	// (0x0006ba4b) popup_call6_2nd_window_g

0xee81,	// (0x0006ad09) popup_call6_2nd_window_t1

0x1171,	// (0x0005cff9) bg_button_pane_cp15

0x9507,	// (0x0006538f) cell_call6_btn_pane_g1

0x9510,	// (0x00065398) cell_call6_btn_pane_t1

0x951f,	// (0x000653a7) listscroll_wgtman_pane_ParamLimits

0x951f,	// (0x000653a7) listscroll_wgtman_pane

0x953b,	// (0x000653c3) wgtman_btn_pane_ParamLimits

0x953b,	// (0x000653c3) wgtman_btn_pane

0xb30c,	// (0x00067194) aid_scroll_copy1

0xeeac,	// (0x0006ad34) list_wgtman_pane

0x9570,	// (0x000653f8) wgtman_btn_pane_g1_ParamLimits

0x9570,	// (0x000653f8) wgtman_btn_pane_g1

0x9598,	// (0x00065420) wgtman_btn_pane_t1_ParamLimits

0x9598,	// (0x00065420) wgtman_btn_pane_t1

0xeeb6,	// (0x0006ad3e) wgtman_btn_pane_t2_ParamLimits

0xeeb6,	// (0x0006ad3e) wgtman_btn_pane_t2

0x0001,

0xfbd1,	// (0x0006ba59) wgtman_btn_pane_t_ParamLimits

0xfbd1,	// (0x0006ba59) wgtman_btn_pane_t

0x95cf,	// (0x00065457) listrow_wgtman_pane_ParamLimits

0x95cf,	// (0x00065457) listrow_wgtman_pane

0x95ea,	// (0x00065472) listrow_wgtman_pane_g1

0x95f7,	// (0x0006547f) listrow_wgtman_pane_g2

0x0001,

0xfbd6,	// (0x0006ba5e) listrow_wgtman_pane_g

0x9615,	// (0x0006549d) listrow_wgtman_pane_t1

0x962d,	// (0x000654b5) listrow_wgtman_pane_t2

0x0001,

0xfbdb,	// (0x0006ba63) listrow_wgtman_pane_t

0x9653,	// (0x000654db) wait_bar_pane_cp09

0xeecd,	// (0x0006ad55) main_calllock_btn_pane

0xeed7,	// (0x0006ad5f) main_calllock_pane_g1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp17

0xeee3,	// (0x0006ad6b) main_calllock_btn_pane_g1

0xeeec,	// (0x0006ad74) main_calllock_btn_pane_t1

0x9cf5,	// (0x00065b7d) main_dialer3_pane

0x9cf5,	// (0x00065b7d) main_fmrd2_pane

0xcd5f,	// (0x00068be7) main_fs_bigclock_unlock_btn_pane_g1

0x966d,	// (0x000654f5) main_fs_bigclock_unlock_btn_pane_t1

0x967b,	// (0x00065503) area_fmrd2_info_pane_ParamLimits

0x967b,	// (0x00065503) area_fmrd2_info_pane

0x9689,	// (0x00065511) area_fmrd2_visual_pane_ParamLimits

0x9689,	// (0x00065511) area_fmrd2_visual_pane

0x9697,	// (0x0006551f) fmrd2_indi_pane_ParamLimits

0x9697,	// (0x0006551f) fmrd2_indi_pane

0x96a4,	// (0x0006552c) area_fmrd2_visual_pane_g1

0x96ac,	// (0x00065534) area_fmrd2_visual_pane_t1

0x96bc,	// (0x00065544) area_fmrd2_visual_pane_t2

0x96cc,	// (0x00065554) area_fmrd2_visual_pane_t3

0x0002,

0xfbe5,	// (0x0006ba6d) area_fmrd2_visual_pane_t

0x96dc,	// (0x00065564) area_fmrd2_info_pane_g1

0x96e4,	// (0x0006556c) area_fmrd2_info_pane_t1

0x96f4,	// (0x0006557c) area_fmrd2_info_pane_t2

0x9704,	// (0x0006558c) area_fmrd2_info_pane_t3

0x9714,	// (0x0006559c) area_fmrd2_info_pane_t4

0x0003,

0xfbec,	// (0x0006ba74) area_fmrd2_info_pane_t

0x9722,	// (0x000655aa) fmrd2_indi_pane_t1

0x9732,	// (0x000655ba) fmrd2_indi_pane_t2

0x9742,	// (0x000655ca) fmrd2_indi_pane_t3

0x0002,

0xfbf5,	// (0x0006ba7d) fmrd2_indi_pane_t

0xe4b8,	// (0x0006a340) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b8,	// (0x0006a340) list_single_fs_bigclock_indicator_pane_g5

0xe569,	// (0x0006a3f1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe569,	// (0x0006a3f1) list_single_fs_bigclock_indicator_pane_t5

0x8e35,	// (0x00064cbd) aid_cell_bcale_month_pane_ParamLimits

0x8e35,	// (0x00064cbd) aid_cell_bcale_month_pane

0x8e53,	// (0x00064cdb) bcale_month_pane_ParamLimits

0x8e53,	// (0x00064cdb) bcale_month_pane

0x8e71,	// (0x00064cf9) bcale_preview_pane_ParamLimits

0x8e71,	// (0x00064cf9) bcale_preview_pane

0xecd2,	// (0x0006ab5a) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf1,	// (0x0006ab79) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf1,	// (0x0006ab79) list_single_fs_bigclock_pane_t2

0x0001,

0xfb7c,	// (0x0006ba04) list_single_fs_bigclock_pane_t_ParamLimits

0xfb7c,	// (0x0006ba04) list_single_fs_bigclock_pane_t

0x9665,	// (0x000654ed) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbe0,	// (0x0006ba68) main_fs_bigclock_unlock_btn_pane_g

0x9750,	// (0x000655d8) aid_dia3_key_size_ParamLimits

0x9750,	// (0x000655d8) aid_dia3_key_size

0x975c,	// (0x000655e4) aid_dia3_listrow_size_ParamLimits

0x975c,	// (0x000655e4) aid_dia3_listrow_size

0x976c,	// (0x000655f4) dia3_keypad_fun_pane_ParamLimits

0x976c,	// (0x000655f4) dia3_keypad_fun_pane

0x977e,	// (0x00065606) dia3_keypad_num_pane_ParamLimits

0x977e,	// (0x00065606) dia3_keypad_num_pane

0x9790,	// (0x00065618) dia3_listscroll_pane_ParamLimits

0x9790,	// (0x00065618) dia3_listscroll_pane

0x979e,	// (0x00065626) dia3_numentry_pane_ParamLimits

0x979e,	// (0x00065626) dia3_numentry_pane

0xeefb,	// (0x0006ad83) dia3_list_pane

0xef06,	// (0x0006ad8e) scroll_pane_cp12

0x9cf5,	// (0x00065b7d) bg_dia3_numentry_pane

0x97ac,	// (0x00065634) dia3_numentry_pane_t1

0x97bb,	// (0x00065643) cell_dia3_key_num_pane

0x97c3,	// (0x0006564b) cell_dia3_key0_fun_pane_ParamLimits

0x97c3,	// (0x0006564b) cell_dia3_key0_fun_pane

0x97d0,	// (0x00065658) cell_dia3_key1_fun_pane_ParamLimits

0x97d0,	// (0x00065658) cell_dia3_key1_fun_pane

0x97dd,	// (0x00065665) dia3_listrow_pane

0xe20b,	// (0x0006a093) bg_dia3_numentry_pane_g1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp21

0xef11,	// (0x0006ad99) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0006ada7) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0006adb6) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0006adc5) cell_dia3_key_num_pane_t4

0x0003,

0xfbfc,	// (0x0006ba84) cell_dia3_key_num_pane_t

0x9cf5,	// (0x00065b7d) bg_button_pane_cp19

0x97ea,	// (0x00065672) cell_dia3_key0_fun_pane_g1

0x9cf5,	// (0x00065b7d) bg_button_pane_cp20

0x97f2,	// (0x0006567a) cell_dia3_key1_fun_pane_g1

0x97fa,	// (0x00065682) area_left_week_number_pane

0x980d,	// (0x00065695) area_top_day_name_pane

0x981b,	// (0x000656a3) frame_month_view_pane

0xef4c,	// (0x0006add4) grid_month_view_pane

0x9830,	// (0x000656b8) cell_top_day_name_pane_ParamLimits

0x9830,	// (0x000656b8) cell_top_day_name_pane

0x984a,	// (0x000656d2) cell_area_left_week_number_pane_ParamLimits

0x984a,	// (0x000656d2) cell_area_left_week_number_pane

0x986d,	// (0x000656f5) cell_month_view_pane_ParamLimits

0x986d,	// (0x000656f5) cell_month_view_pane

0xef5a,	// (0x0006ade2) frm_month_g1

0x9899,	// (0x00065721) frm_month_g2

0x98aa,	// (0x00065732) frm_month_g3

0x98bb,	// (0x00065743) frm_month_g4

0x98cc,	// (0x00065754) frm_month_g5

0x98df,	// (0x00065767) frm_month_g6

0x98f2,	// (0x0006577a) frm_month_g7

0xef67,	// (0x0006adef) frm_month_g8

0x9905,	// (0x0006578d) frm_month_g9

0x9912,	// (0x0006579a) frm_month_g10

0x991f,	// (0x000657a7) frm_month_g11

0x992c,	// (0x000657b4) frm_month_g12

0x9939,	// (0x000657c1) frm_month_g13

0x9946,	// (0x000657ce) frm_month_g14

0x9955,	// (0x000657dd) frm_month_g15

0x9964,	// (0x000657ec) frm_month_g16

0x000f,

0xfc05,	// (0x0006ba8d) frm_month_g

0xef74,	// (0x0006adfc) cell_top_day_name_pane_t1

0x9973,	// (0x000657fb) cell_area_left_week_number_pane_g1

0x9982,	// (0x0006580a) cell_area_left_week_number_pane_t1

0xcfc2,	// (0x00068e4a) cell_month_view_pane_g1

0x9998,	// (0x00065820) cell_month_view_pane_t1

0x9cf5,	// (0x00065b7d) main_fps_pane

0xe79d,	// (0x0006a625) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79d,	// (0x0006a625) cmail_ddmenu_btn02_pane_cp1

0xe7b9,	// (0x0006a641) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b9,	// (0x0006a641) cmail_ddmenu_btn02_pane_cp2

0x912c,	// (0x00064fb4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x912c,	// (0x00064fb4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb39,	// (0x0006b9c1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb39,	// (0x0006b9c1) cmail_ddmenu_btn02_pane_g

0x914a,	// (0x00064fd2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x914a,	// (0x00064fd2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb3e,	// (0x0006b9c6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb3e,	// (0x0006b9c6) cmail_ddmenu_btn02_pane_t

0x99ae,	// (0x00065836) fps_text_pane_ParamLimits

0x99ae,	// (0x00065836) fps_text_pane

0x99bb,	// (0x00065843) main_fps_pane_g1_ParamLimits

0x99bb,	// (0x00065843) main_fps_pane_g1

0x99c9,	// (0x00065851) wait_bar_pane_cp010_ParamLimits

0x99c9,	// (0x00065851) wait_bar_pane_cp010

0x99d5,	// (0x0006585d) fps_text_pane_t1_ParamLimits

0x99d5,	// (0x0006585d) fps_text_pane_t1

0x6415,	// (0x0006229d) cam4_image_uncrop_pane_g1

0x641e,	// (0x000622a6) cam4_image_uncrop_pane_g2

0x6427,	// (0x000622af) cam4_image_uncrop_pane_g3

0x6430,	// (0x000622b8) cam4_image_uncrop_pane_g4

0x0003,

0xf721,	// (0x0006b5a9) cam4_image_uncrop_pane_g

0x97dd,	// (0x00065665) dia3_listrow_pane_ParamLimits

0x9cf5,	// (0x00065b7d) main_phob2_pane

0x8c6c,	// (0x00064af4) cell_tport_appsw_pane_cp02_ParamLimits

0x8c6c,	// (0x00064af4) cell_tport_appsw_pane_cp02

0x8c7b,	// (0x00064b03) cell_tport_appsw_pane_cp03_ParamLimits

0x8c7b,	// (0x00064b03) cell_tport_appsw_pane_cp03

0x9cf5,	// (0x00065b7d) phob2_contact_card_pane

0x9cf5,	// (0x00065b7d) phob2_listscroll_pane

0xef87,	// (0x0006ae0f) phob2_list_pane

0xef8f,	// (0x0006ae17) scroll_pane_cp034

0x99ee,	// (0x00065876) phob2_cc_data_pane_ParamLimits

0x99ee,	// (0x00065876) phob2_cc_data_pane

0x9a08,	// (0x00065890) phob2_cc_listscroll_pane_ParamLimits

0x9a08,	// (0x00065890) phob2_cc_listscroll_pane

0x95cf,	// (0x00065457) list_double_large_graphic_phob2_pane_ParamLimits

0x95cf,	// (0x00065457) list_double_large_graphic_phob2_pane

0x9a22,	// (0x000658aa) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a22,	// (0x000658aa) list_double_large_graphic_phob2_pane_g1

0x9a38,	// (0x000658c0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a38,	// (0x000658c0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc26,	// (0x0006baae) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc26,	// (0x0006baae) list_double_large_graphic_phob2_pane_g

0x9a44,	// (0x000658cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a44,	// (0x000658cc) list_double_large_graphic_phob2_pane_t1

0x9a59,	// (0x000658e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a59,	// (0x000658e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc2b,	// (0x0006bab3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc2b,	// (0x0006bab3) list_double_large_graphic_phob2_pane_t

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp024

0x9a6b,	// (0x000658f3) phob2_cc_button_pane

0x9a73,	// (0x000658fb) phob2_cc_data_pane_g1_ParamLimits

0x9a73,	// (0x000658fb) phob2_cc_data_pane_g1

0x9a7f,	// (0x00065907) phob2_cc_data_pane_g2_ParamLimits

0x9a7f,	// (0x00065907) phob2_cc_data_pane_g2

0x0001,

0xfc30,	// (0x0006bab8) phob2_cc_data_pane_g_ParamLimits

0xfc30,	// (0x0006bab8) phob2_cc_data_pane_g

0x9a8b,	// (0x00065913) phob2_cc_data_pane_t1_ParamLimits

0x9a8b,	// (0x00065913) phob2_cc_data_pane_t1

0x9a9d,	// (0x00065925) phob2_cc_data_pane_t2_ParamLimits

0x9a9d,	// (0x00065925) phob2_cc_data_pane_t2

0x9aaf,	// (0x00065937) phob2_cc_data_pane_t3_ParamLimits

0x9aaf,	// (0x00065937) phob2_cc_data_pane_t3

0x0002,

0xfc35,	// (0x0006babd) phob2_cc_data_pane_t_ParamLimits

0xfc35,	// (0x0006babd) phob2_cc_data_pane_t

0xef97,	// (0x0006ae1f) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0006ae1f) phob2_cc_list_pane

0xdad8,	// (0x00069960) scroll_pane_cp035_ParamLimits

0xdad8,	// (0x00069960) scroll_pane_cp035

0xa5ae,	// (0x00066436) bg_button_pane_cp033

0xefa3,	// (0x0006ae2b) phob2_cc_button_pane_g1

0xefaf,	// (0x0006ae37) phob2_cc_button_pane_t1

0xefc4,	// (0x0006ae4c) phob2_cc_button_pane_t2

0x0001,

0xfc3c,	// (0x0006bac4) phob2_cc_button_pane_t

0x9ac1,	// (0x00065949) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ac1,	// (0x00065949) list_double_large_graphic_phob2_cc_pane

0x9b2f,	// (0x000659b7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b2f,	// (0x000659b7) list_double_large_graphic_phob2_cc_pane_g1

0xa516,	// (0x0006639e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa516,	// (0x0006639e) list_double_large_graphic_phob2_cc_pane_g2

0x9b40,	// (0x000659c8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b40,	// (0x000659c8) list_double_large_graphic_phob2_cc_pane_g3

0x9b4c,	// (0x000659d4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b4c,	// (0x000659d4) list_double_large_graphic_phob2_cc_pane_g4

0x9b58,	// (0x000659e0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b58,	// (0x000659e0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc41,	// (0x0006bac9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc41,	// (0x0006bac9) list_double_large_graphic_phob2_cc_pane_g

0x9b64,	// (0x000659ec) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b64,	// (0x000659ec) list_double_large_graphic_phob2_cc_pane_t1

0x9b8d,	// (0x00065a15) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b8d,	// (0x00065a15) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc4c,	// (0x0006bad4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc4c,	// (0x0006bad4) list_double_large_graphic_phob2_cc_pane_t

0xefd6,	// (0x0006ae5e) list_highlight_pane_cp025_ParamLimits

0xefd6,	// (0x0006ae5e) list_highlight_pane_cp025

0xa5ae,	// (0x00066436) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0006ae2b) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0006ae37) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0006ae4c) phob2_cc_button_pane_t2_ParamLimits

0xfc3c,	// (0x0006bac4) phob2_cc_button_pane_t_ParamLimits

0x1165,	// (0x0005cfed) popup_wgtman_window

0xd850,	// (0x000696d8) scroll_pane_cp038

0x9558,	// (0x000653e0) wgtman_btn_pane_cp_01_ParamLimits

0x9558,	// (0x000653e0) wgtman_btn_pane_cp_01

0xefe4,	// (0x0006ae6c) wgtman_content_pane

0xefed,	// (0x0006ae75) wgtman_heading_pane

0x9cf5,	// (0x00065b7d) bg_heading_pane_cp02

0xeff6,	// (0x0006ae7e) wgtman_heading_pane_g1

0xeffe,	// (0x0006ae86) wgtman_heading_pane_t1

0xf00c,	// (0x0006ae94) scroll_pane_cp036

0xf014,	// (0x0006ae9c) wgtman_list_pane

0xf01c,	// (0x0006aea4) wgtman_list_pane_t1_ParamLimits

0xf01c,	// (0x0006aea4) wgtman_list_pane_t1

0x6374,	// (0x000621fc) cam4_grid_pane

0x7111,	// (0x00062f99) bg_button_pane_cp015_ParamLimits

0x7123,	// (0x00062fab) bg_button_pane_cp016_ParamLimits

0x7136,	// (0x00062fbe) bg_button_pane_cp017_ParamLimits

0x718c,	// (0x00063014) popup_vitu2_query_window_g3_ParamLimits

0x718c,	// (0x00063014) popup_vitu2_query_window_g3

0x7247,	// (0x000630cf) popup_vitu2_query_window_t6_ParamLimits

0x7247,	// (0x000630cf) popup_vitu2_query_window_t6

0x7272,	// (0x000630fa) popup_vitu2_query_window_t7_ParamLimits

0x7272,	// (0x000630fa) popup_vitu2_query_window_t7

0xd9b2,	// (0x0006983a) cam4_grid_pane_g1

0xd9bb,	// (0x00069843) cam4_grid_pane_g2

0xf036,	// (0x0006aebe) cam4_grid_pane_g3

0xf03f,	// (0x0006aec7) cam4_grid_pane_g4

0x0003,

0xfc51,	// (0x0006bad9) cam4_grid_pane_g

0x2009,	// (0x0005de91) aid_placing_vt_slider_lsc_ParamLimits

0x2355,	// (0x0005e1dd) vidtel_button_pane_ParamLimits

0x2355,	// (0x0005e1dd) vidtel_button_pane

0x9cf5,	// (0x00065b7d) bg_button_pane_cp034

0xf04a,	// (0x0006aed2) vidtel_button_pane_g1

0xf052,	// (0x0006aeda) vidtel_button_pane_t1

0xd964,	// (0x000697ec) aid_size_vtel_slider_touch

0xdad8,	// (0x00069960) scroll_pane_cp039

0x80a8,	// (0x00063f30) ncim_query_button_pane_cp01_ParamLimits

0x80c7,	// (0x00063f4f) ncimui_query_pane_g1_ParamLimits

0xa5ae,	// (0x00066436) input_focus_pane_cp012_ParamLimits

0xe249,	// (0x0006a0d1) ncim_query_entry_pane_t1_ParamLimits

0xdad8,	// (0x00069960) scroll_pane_cp039_ParamLimits

0xb3f0,	// (0x00067278) navi_pane_bcale_mc_g1

0xb3f8,	// (0x00067280) navi_pane_bcale_mc_t1

0xe802,	// (0x0006a68a) main_sp_fs_email_pane_g1

0xe80e,	// (0x0006a696) main_sp_fs_email_pane_g2

0x0001,

0x0b9a,	// (0x0005ca22) main_sp_fs_email_pane_g

0xea5e,	// (0x0006a8e6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea5e,	// (0x0006a8e6) list_single_cale_mrui_row_pane_g3

0x916a,	// (0x00064ff2) list_single_recal_day_pane_g5_event_pane

0xa4e1,	// (0x00066369) list_single_recal_day_pane_g7

0xf068,	// (0x0006aef0) list_recal_day_event_pane_cp01

0xf071,	// (0x0006aef9) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0006af01) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0006af09) list_recal_vselct_pane_cp01

0xd986,	// (0x0006980e) list_recal_day_event_pane_cp01_g1

0xa5bc,	// (0x00066444) list_recal_day_event_pane_cp01_t1

0xa4e9,	// (0x00066371) list_single_recal_day_pane_t1_ParamLimits

0xa4fb,	// (0x00066383) list_single_recal_day_pane_t2_ParamLimits

0xfb4e,	// (0x0006b9d6) list_single_recal_day_pane_t_ParamLimits

0xa854,	// (0x000666dc) bg_notes_pane_ParamLimits

0xa8f7,	// (0x0006677f) list_notes_pane_ParamLimits

0x14cd,	// (0x0005d355) scroll_pane_cp06_ParamLimits

0xa919,	// (0x000667a1) main_notes_pane_ParamLimits

0x9cf5,	// (0x00065b7d) main_welc_pane

0x9bb6,	// (0x00065a3e) main_welc_body_pane_ParamLimits

0x9bb6,	// (0x00065a3e) main_welc_body_pane

0x9bd0,	// (0x00065a58) main_welc_opti_pane_ParamLimits

0x9bd0,	// (0x00065a58) main_welc_opti_pane

0x9c03,	// (0x00065a8b) main_welc_pane_t1_ParamLimits

0x9c03,	// (0x00065a8b) main_welc_pane_t1

0x9c1d,	// (0x00065aa5) main_welc_body_row_pane_ParamLimits

0x9c1d,	// (0x00065aa5) main_welc_body_row_pane

0xe65c,	// (0x0006a4e4) main_welc_opti_row_pane_ParamLimits

0xe65c,	// (0x0006a4e4) main_welc_opti_row_pane

0xf08b,	// (0x0006af13) main_welc_opti_row_pane_g1

0x9c42,	// (0x00065aca) main_welc_opti_row_pane_t1

0xf093,	// (0x0006af1b) main_welc_body_row_pane_t1

0xeda9,	// (0x0006ac31) popup_notif_wgt_heading_pane

0xedc3,	// (0x0006ac4b) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0006ac58) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0006ac64) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0006ac73) list_notif_wgt_row_pane_g3_ParamLimits

0xfba6,	// (0x0006ba2e) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0006ac80) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0006ac96) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0006aca8) list_notif_wgt_row_pane_t3_ParamLimits

0xfbad,	// (0x0006ba35) list_notif_wgt_row_pane_t_ParamLimits

0x95ea,	// (0x00065472) listrow_wgtman_pane_g1_ParamLimits

0x95f7,	// (0x0006547f) listrow_wgtman_pane_g2_ParamLimits

0xfbd6,	// (0x0006ba5e) listrow_wgtman_pane_g_ParamLimits

0x9615,	// (0x0006549d) listrow_wgtman_pane_t1_ParamLimits

0x962d,	// (0x000654b5) listrow_wgtman_pane_t2_ParamLimits

0xfbdb,	// (0x0006ba63) listrow_wgtman_pane_t_ParamLimits

0x9653,	// (0x000654db) wait_bar_pane_cp09_ParamLimits

0x9cf5,	// (0x00065b7d) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006af2a) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006af32) popup_notif_wgt_heading_pane_t1

0x9cf5,	// (0x00065b7d) main_vids_pane

0x9cf5,	// (0x00065b7d) vids_listscroll_pane

0x9c51,	// (0x00065ad9) scroll_pane_cp040

0x9cf5,	// (0x00065b7d) vids_list_pane

0x9c5c,	// (0x00065ae4) vids_list_double_pane_ParamLimits

0x9c5c,	// (0x00065ae4) vids_list_double_pane

0x9c76,	// (0x00065afe) vids_list_double_pane_g1

0x9c7f,	// (0x00065b07) vids_list_double_pane_t1

0x9c8f,	// (0x00065b17) vids_list_double_pane_t2

0x0001,

0xfc5f,	// (0x0006bae7) vids_list_double_pane_t

0x4365,	// (0x000601ed) main_ncimui_pane_ParamLimits

0x7eff,	// (0x00063d87) main_ncimui_pane_g1_ParamLimits

0x7f0b,	// (0x00063d93) main_ncimui_pane_g2_ParamLimits

0x7f0b,	// (0x00063d93) main_ncimui_pane_g2

0x0001,

0xf9a1,	// (0x0006b829) main_ncimui_pane_g_ParamLimits

0xf9a1,	// (0x0006b829) main_ncimui_pane_g

0x9be9,	// (0x00065a71) main_welc_pane_g1_ParamLimits

0x9be9,	// (0x00065a71) main_welc_pane_g1

0x9bf5,	// (0x00065a7d) main_welc_pane_g2_ParamLimits

0x9bf5,	// (0x00065a7d) main_welc_pane_g2

0x0001,

0xfc5a,	// (0x0006bae2) main_welc_pane_g_ParamLimits

0xfc5a,	// (0x0006bae2) main_welc_pane_g

0xa854,	// (0x000666dc) listscroll_mce_pane_ParamLimits

0xb545,	// (0x000673cd) wait_bar_pane_cp10

0xc93f,	// (0x000687c7) main_cale_day_pane_ParamLimits

0xc93f,	// (0x000687c7) main_cale_week_pane_ParamLimits

0xa854,	// (0x000666dc) main_messa_pane_ParamLimits

0x569e,	// (0x00061526) main_clock2_btn_pane_ParamLimits

0x569e,	// (0x00061526) main_clock2_btn_pane

0xd16a,	// (0x00068ff2) main_clock2_btn_pane_cp01_ParamLimits

0xd16a,	// (0x00068ff2) main_clock2_btn_pane_cp01

0xea27,	// (0x0006a8af) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0006acde) main_cf0_pane_g2

0x0001,

0xfbb4,	// (0x0006ba3c) main_cf0_pane_g

0x97fa,	// (0x00065682) area_left_week_number_pane_ParamLimits

0x980d,	// (0x00065695) area_top_day_name_pane_ParamLimits

0x981b,	// (0x000656a3) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0006add4) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0006ade2) frm_month_g1_ParamLimits

0x9899,	// (0x00065721) frm_month_g2_ParamLimits

0x98aa,	// (0x00065732) frm_month_g3_ParamLimits

0x98bb,	// (0x00065743) frm_month_g4_ParamLimits

0x98cc,	// (0x00065754) frm_month_g5_ParamLimits

0x98df,	// (0x00065767) frm_month_g6_ParamLimits

0x98f2,	// (0x0006577a) frm_month_g7_ParamLimits

0xef67,	// (0x0006adef) frm_month_g8_ParamLimits

0x9905,	// (0x0006578d) frm_month_g9_ParamLimits

0x9912,	// (0x0006579a) frm_month_g10_ParamLimits

0x991f,	// (0x000657a7) frm_month_g11_ParamLimits

0x992c,	// (0x000657b4) frm_month_g12_ParamLimits

0x9939,	// (0x000657c1) frm_month_g13_ParamLimits

0x9946,	// (0x000657ce) frm_month_g14_ParamLimits

0x9955,	// (0x000657dd) frm_month_g15_ParamLimits

0x9964,	// (0x000657ec) frm_month_g16_ParamLimits

0xfc05,	// (0x0006ba8d) frm_month_g_ParamLimits

0xef74,	// (0x0006adfc) cell_top_day_name_pane_t1_ParamLimits

0x9973,	// (0x000657fb) cell_area_left_week_number_pane_g1_ParamLimits

0x9982,	// (0x0006580a) cell_area_left_week_number_pane_t1_ParamLimits

0xcfc2,	// (0x00068e4a) cell_month_view_pane_g1_ParamLimits

0x9998,	// (0x00065820) cell_month_view_pane_t1_ParamLimits

0xa84c,	// (0x000666d4) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006af40) main_clock2_btn_pane_t1

0xa5ae,	// (0x00066436) listscroll_cmail_pane_ParamLimits

0xe802,	// (0x0006a68a) main_sp_fs_email_pane_g1_ParamLimits

0xe80e,	// (0x0006a696) main_sp_fs_email_pane_g2_ParamLimits

0x0b9a,	// (0x0005ca22) main_sp_fs_email_pane_g_ParamLimits

0xeb35,	// (0x0006a9bd) list_recal_day_pane_ParamLimits

0xeb46,	// (0x0006a9ce) mian_recal_day_pane_t1

0x8938,	// (0x000647c0) list_single_dyc_row_text_pane_t4_ParamLimits

0x8938,	// (0x000647c0) list_single_dyc_row_text_pane_t4

0x896f,	// (0x000647f7) list_single_dyc_row_text_pane_t5_ParamLimits

0x896f,	// (0x000647f7) list_single_dyc_row_text_pane_t5

0xa257,	// (0x000660df) list_single_dyc_row_text_pane_t6_ParamLimits

0xa257,	// (0x000660df) list_single_dyc_row_text_pane_t6

0x31aa,	// (0x0005f032) aid_mgn_list_cale_time_pane

0x4365,	// (0x000601ed) main_gallery2_pane_ParamLimits

0xd180,	// (0x00069008) main_clock2_pane_cp01_t1

0xd190,	// (0x00069018) main_clock2_pane_cp01_t3

0x0001,

0x0675,	// (0x0005c4fd) main_clock2_pane_cp01_t

0x191f,	// (0x0005d7a7) cale_week_scroll_pane_g16_ParamLimits

0x191f,	// (0x0005d7a7) cale_week_scroll_pane_g16

0xaae7,	// (0x0006696f) vorec_slider_pane

0xf052,	// (0x0006aeda) vidtel_button_pane_t1_ParamLimits

0x91c5,	// (0x0006504d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91c5,	// (0x0006504d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91d2,	// (0x0006505a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91d2,	// (0x0006505a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb67,	// (0x0006b9ef) main_fs_bigclock_clock_pane_g_ParamLimits

0x91de,	// (0x00065066) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91f1,	// (0x00065079) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb70,	// (0x0006b9f8) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f3d,	// (0x00060dc5) main_mup3_lyrics_pane_ParamLimits

0x4f3d,	// (0x00060dc5) main_mup3_lyrics_pane

0x9cc3,	// (0x00065b4b) main_mup3_lyrics_pane_t1_ParamLimits

0x9cc3,	// (0x00065b4b) main_mup3_lyrics_pane_t1

0x5ce7,	// (0x00061b6f) aid_main_mp4_pane_t1_area

0x5cf1,	// (0x00061b79) aid_main_mp4_pane_t2_area

0x5df0,	// (0x00061c78) main_mp4_pane_g7_ParamLimits

0x5df0,	// (0x00061c78) main_mp4_pane_g7

0x5dfc,	// (0x00061c84) main_mp4_pane_g8_ParamLimits

0x5dfc,	// (0x00061c84) main_mp4_pane_g8

0x621c,	// (0x000620a4) aid_call6_pane_g1_size

0x9b03,	// (0x0006598b) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b03,	// (0x0006598b) list_double_large_graphic_phob2_other_pane

0xaea2,	// (0x00066d2a) list_double_large_graphic_phob2_other_pane_g1

0x9cf5,	// (0x00065b7d) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

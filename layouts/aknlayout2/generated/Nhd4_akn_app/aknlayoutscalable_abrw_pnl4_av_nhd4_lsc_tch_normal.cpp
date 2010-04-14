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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000f32d };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0xc8d9,	// (0x0001bc06) Screen

0xc8e5,	// (0x0001bc12) application_window_ParamLimits

0xc8e5,	// (0x0001bc12) application_window

0x2751,	// (0x00011a7e) screen_g1

0xb764,	// (0x0001aa91) area_bottom_pane_ParamLimits

0xb764,	// (0x0001aa91) area_bottom_pane

0x02c7,	// (0x0000f5f4) area_top_pane_ParamLimits

0x02c7,	// (0x0000f5f4) area_top_pane

0x0365,	// (0x0000f692) main_pane_ParamLimits

0x0365,	// (0x0000f692) main_pane

0x275b,	// (0x00011a88) misc_graphics

0xd5bc,	// (0x0001c8e9) battery_pane_ParamLimits

0xd5bc,	// (0x0001c8e9) battery_pane

0x55f3,	// (0x00014920) bg_status_flat_pane_g8

0x55fb,	// (0x00014928) bg_status_flat_pane_g9

0x48d7,	// (0x00013c04) context_pane_ParamLimits

0x48d7,	// (0x00013c04) context_pane

0xd727,	// (0x0001ca54) navi_pane_ParamLimits

0xd727,	// (0x0001ca54) navi_pane

0xd7a5,	// (0x0001cad2) signal_pane_ParamLimits

0xd7a5,	// (0x0001cad2) signal_pane

0x0008,

0xf86f,	// (0x0001eb9c) bg_status_flat_pane_g

0xd835,	// (0x0001cb62) status_pane_g1_ParamLimits

0xd835,	// (0x0001cb62) status_pane_g1

0xd84b,	// (0x0001cb78) status_pane_g2_ParamLimits

0xd84b,	// (0x0001cb78) status_pane_g2

0x4af6,	// (0x00013e23) status_pane_g3_ParamLimits

0x4af6,	// (0x00013e23) status_pane_g3

0x0004,

0xf79b,	// (0x0001eac8) status_pane_g_ParamLimits

0xf79b,	// (0x0001eac8) status_pane_g

0xd857,	// (0x0001cb84) title_pane_ParamLimits

0xd857,	// (0x0001cb84) title_pane

0xd8ba,	// (0x0001cbe7) uni_indicator_pane_ParamLimits

0xd8ba,	// (0x0001cbe7) uni_indicator_pane

0x472d,	// (0x00013a5a) bg_list_pane_ParamLimits

0x472d,	// (0x00013a5a) bg_list_pane

0x474d,	// (0x00013a7a) find_pane

0xbab3,	// (0x0001ade0) listscroll_app_pane_ParamLimits

0xbab3,	// (0x0001ade0) listscroll_app_pane

0x4761,	// (0x00013a8e) listscroll_form_pane

0x0c21,	// (0x0000ff4e) listscroll_gen_pane_ParamLimits

0x0c21,	// (0x0000ff4e) listscroll_gen_pane

0x0c35,	// (0x0000ff62) listscroll_set_pane

0x6181,	// (0x000154ae) main_idle_act_pane

0x4439,	// (0x00013766) main_idle_trad_pane

0x4439,	// (0x00013766) main_list_empty_pane

0x477b,	// (0x00013aa8) main_midp_pane

0x4787,	// (0x00013ab4) main_pane_g1_ParamLimits

0x4787,	// (0x00013ab4) main_pane_g1

0xbac3,	// (0x0001adf0) popup_ai_message_window_ParamLimits

0xbac3,	// (0x0001adf0) popup_ai_message_window

0xbb54,	// (0x0001ae81) popup_fep_china_uni_window_ParamLimits

0xbb54,	// (0x0001ae81) popup_fep_china_uni_window

0x0d49,	// (0x00010076) popup_fep_japan_candidate_window_ParamLimits

0x0d49,	// (0x00010076) popup_fep_japan_candidate_window

0x0d67,	// (0x00010094) popup_fep_japan_predictive_window_ParamLimits

0x0d67,	// (0x00010094) popup_fep_japan_predictive_window

0xbbae,	// (0x0001aedb) popup_find_window

0xbbcb,	// (0x0001aef8) popup_grid_graphic_window_ParamLimits

0xbbcb,	// (0x0001aef8) popup_grid_graphic_window

0x0dcc,	// (0x000100f9) popup_large_graphic_colour_window

0xbc63,	// (0x0001af90) popup_menu_window_ParamLimits

0xbc63,	// (0x0001af90) popup_menu_window

0xbe2f,	// (0x0001b15c) popup_note_image_window

0xbdf5,	// (0x0001b122) popup_note_wait_window_ParamLimits

0xbdf5,	// (0x0001b122) popup_note_wait_window

0xbe47,	// (0x0001b174) popup_note_window_ParamLimits

0xbe47,	// (0x0001b174) popup_note_window

0xbeed,	// (0x0001b21a) popup_query_code_window_ParamLimits

0xbeed,	// (0x0001b21a) popup_query_code_window

0x1016,	// (0x00010343) popup_query_data_code_window_ParamLimits

0x1016,	// (0x00010343) popup_query_data_code_window

0xbf27,	// (0x0001b254) popup_query_data_window_ParamLimits

0xbf27,	// (0x0001b254) popup_query_data_window

0xbfa3,	// (0x0001b2d0) popup_query_sat_info_window_ParamLimits

0xbfa3,	// (0x0001b2d0) popup_query_sat_info_window

0xc03a,	// (0x0001b367) popup_snote_single_graphic_window_ParamLimits

0xc03a,	// (0x0001b367) popup_snote_single_graphic_window

0xc03a,	// (0x0001b367) popup_snote_single_text_window_ParamLimits

0xc03a,	// (0x0001b367) popup_snote_single_text_window

0x1099,	// (0x000103c6) popup_sub_window_general

0x11c7,	// (0x000104f4) popup_window_general_ParamLimits

0x11c7,	// (0x000104f4) popup_window_general

0x479d,	// (0x00013aca) power_save_pane

0xb942,	// (0x0001ac6f) control_pane_g1_ParamLimits

0xb942,	// (0x0001ac6f) control_pane_g1

0xb96b,	// (0x0001ac98) control_pane_g2_ParamLimits

0xb96b,	// (0x0001ac98) control_pane_g2

0x46f0,	// (0x00013a1d) control_pane_g3_ParamLimits

0x46f0,	// (0x00013a1d) control_pane_g3

0x0007,

0xf783,	// (0x0001eab0) control_pane_g_ParamLimits

0xf783,	// (0x0001eab0) control_pane_g

0xb9ac,	// (0x0001acd9) control_pane_t1_ParamLimits

0xb9ac,	// (0x0001acd9) control_pane_t1

0xba0a,	// (0x0001ad37) control_pane_t2_ParamLimits

0xba0a,	// (0x0001ad37) control_pane_t2

0x0002,

0xf794,	// (0x0001eac1) control_pane_t_ParamLimits

0xf794,	// (0x0001eac1) control_pane_t

0xd441,	// (0x0001c76e) navi_navi_volume_pane_cp1

0xd449,	// (0x0001c776) status_small_icon_pane

0x4625,	// (0x00013952) status_small_pane_g1_ParamLimits

0x4625,	// (0x00013952) status_small_pane_g1

0xd451,	// (0x0001c77e) status_small_pane_g2_ParamLimits

0xd451,	// (0x0001c77e) status_small_pane_g2

0xd45d,	// (0x0001c78a) status_small_pane_g3_ParamLimits

0xd45d,	// (0x0001c78a) status_small_pane_g3

0xd469,	// (0x0001c796) status_small_pane_g4_ParamLimits

0xd469,	// (0x0001c796) status_small_pane_g4

0xd475,	// (0x0001c7a2) status_small_pane_g5_ParamLimits

0xd475,	// (0x0001c7a2) status_small_pane_g5

0xd483,	// (0x0001c7b0) status_small_pane_g6_ParamLimits

0xd483,	// (0x0001c7b0) status_small_pane_g6

0x0007,

0xf772,	// (0x0001ea9f) status_small_pane_g_ParamLimits

0xf772,	// (0x0001ea9f) status_small_pane_g

0xd4b2,	// (0x0001c7df) status_small_pane_t1

0xd4d4,	// (0x0001c801) status_small_wait_pane_ParamLimits

0xd4d4,	// (0x0001c801) status_small_wait_pane

0xd266,	// (0x0001c593) aid_levels_signal_ParamLimits

0xd266,	// (0x0001c593) aid_levels_signal

0xd27e,	// (0x0001c5ab) signal_pane_g1_ParamLimits

0xd27e,	// (0x0001c5ab) signal_pane_g1

0xd299,	// (0x0001c5c6) signal_pane_g2_ParamLimits

0xd299,	// (0x0001c5c6) signal_pane_g2

0x0003,

0xf703,	// (0x0001ea30) signal_pane_g_ParamLimits

0xf703,	// (0x0001ea30) signal_pane_g

0x3e8d,	// (0x000131ba) context_pane_g1

0xc8f5,	// (0x0001bc22) title_pane_g1

0xc92c,	// (0x0001bc59) title_pane_t1

0x2803,	// (0x00011b30) title_pane_t2

0x2829,	// (0x00011b56) title_pane_t3

0x0002,

0xf557,	// (0x0001e884) title_pane_t

0xd8e2,	// (0x0001cc0f) aid_levels_battery_ParamLimits

0xd8e2,	// (0x0001cc0f) aid_levels_battery

0xd8fe,	// (0x0001cc2b) battery_pane_g1_ParamLimits

0xd8fe,	// (0x0001cc2b) battery_pane_g1

0xd91b,	// (0x0001cc48) battery_pane_g2_ParamLimits

0xd91b,	// (0x0001cc48) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001ead3) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001ead3) battery_pane_g

0xdb1a,	// (0x0001ce47) uni_indicator_pane_g1

0xdb30,	// (0x0001ce5d) uni_indicator_pane_g2

0xdb46,	// (0x0001ce73) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001ec44) uni_indicator_pane_g

0x42b7,	// (0x000135e4) navi_icon_pane_ParamLimits

0x42b7,	// (0x000135e4) navi_icon_pane

0x41f5,	// (0x00013522) navi_midp_pane

0x42d3,	// (0x00013600) navi_navi_pane

0x42dd,	// (0x0001360a) navi_text_pane_ParamLimits

0x42dd,	// (0x0001360a) navi_text_pane

0x2751,	// (0x00011a7e) status_small_wait_pane_g1

0x2c66,	// (0x00011f93) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001ec3f) status_small_wait_pane_g

0x5c4e,	// (0x00014f7b) navi_navi_icon_text_pane

0x5c56,	// (0x00014f83) navi_navi_pane_g1_ParamLimits

0x5c56,	// (0x00014f83) navi_navi_pane_g1

0x5c68,	// (0x00014f95) navi_navi_pane_g2_ParamLimits

0x5c68,	// (0x00014f95) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001ec0d) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001ec0d) navi_navi_pane_g

0x5c7a,	// (0x00014fa7) navi_navi_tabs_pane

0x5c83,	// (0x00014fb0) navi_navi_text_pane

0x5c4e,	// (0x00014f7b) navi_navi_volume_pane

0x5c2a,	// (0x00014f57) navi_text_pane_t1

0x5c1e,	// (0x00014f4b) navi_icon_pane_g1

0x5b71,	// (0x00014e9e) navi_navi_text_pane_t1

0x14d5,	// (0x00010802) navi_navi_volume_pane_g1

0xc2b1,	// (0x0001b5de) volume_small_pane

0xda57,	// (0x0001cd84) navi_navi_icon_text_pane_g1

0x5adf,	// (0x00014e0c) navi_navi_icon_text_pane_t1

0x42d3,	// (0x00013600) navi_tabs_2_long_pane

0x42d3,	// (0x00013600) navi_tabs_2_pane

0x42d3,	// (0x00013600) navi_tabs_3_long_pane

0x42d3,	// (0x00013600) navi_tabs_3_pane

0x42d3,	// (0x00013600) navi_tabs_4_pane

0xc291,	// (0x0001b5be) tabs_2_active_pane_ParamLimits

0xc291,	// (0x0001b5be) tabs_2_active_pane

0xc2a1,	// (0x0001b5ce) tabs_2_passive_pane_ParamLimits

0xc2a1,	// (0x0001b5ce) tabs_2_passive_pane

0xc25f,	// (0x0001b58c) tabs_3_active_pane_ParamLimits

0xc25f,	// (0x0001b58c) tabs_3_active_pane

0xc26f,	// (0x0001b59c) tabs_3_passive_pane_ParamLimits

0xc26f,	// (0x0001b59c) tabs_3_passive_pane

0xc280,	// (0x0001b5ad) tabs_3_passive_pane_cp_ParamLimits

0xc280,	// (0x0001b5ad) tabs_3_passive_pane_cp

0xc22c,	// (0x0001b559) tabs_4_active_pane_ParamLimits

0xc22c,	// (0x0001b559) tabs_4_active_pane

0xc23d,	// (0x0001b56a) tabs_4_passive_pane_ParamLimits

0xc23d,	// (0x0001b56a) tabs_4_passive_pane

0x1461,	// (0x0001078e) tabs_4_passive_pane_cp_ParamLimits

0x1461,	// (0x0001078e) tabs_4_passive_pane_cp

0xc24e,	// (0x0001b57b) tabs_4_passive_pane_cp2_ParamLimits

0xc24e,	// (0x0001b57b) tabs_4_passive_pane_cp2

0xc208,	// (0x0001b535) tabs_2_long_active_pane_ParamLimits

0xc208,	// (0x0001b535) tabs_2_long_active_pane

0xc21a,	// (0x0001b547) tabs_2_long_passive_pane_ParamLimits

0xc21a,	// (0x0001b547) tabs_2_long_passive_pane

0xc1c9,	// (0x0001b4f6) tabs_3_long_active_pane_ParamLimits

0xc1c9,	// (0x0001b4f6) tabs_3_long_active_pane

0xc1dc,	// (0x0001b509) tabs_3_long_passive_pane_ParamLimits

0xc1dc,	// (0x0001b509) tabs_3_long_passive_pane

0xc1f5,	// (0x0001b522) tabs_3_long_passive_pane_cp_ParamLimits

0xc1f5,	// (0x0001b522) tabs_3_long_passive_pane_cp

0x1388,	// (0x000106b5) volume_small_pane_g1

0x1391,	// (0x000106be) volume_small_pane_g2

0x139a,	// (0x000106c7) volume_small_pane_g3

0x13a3,	// (0x000106d0) volume_small_pane_g4

0x13ac,	// (0x000106d9) volume_small_pane_g5

0x13b5,	// (0x000106e2) volume_small_pane_g6

0x13be,	// (0x000106eb) volume_small_pane_g7

0x13c7,	// (0x000106f4) volume_small_pane_g8

0x13d0,	// (0x000106fd) volume_small_pane_g9

0x13d9,	// (0x00010706) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001ebd9) volume_small_pane_g

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp2_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp2

0x2849,	// (0x00011b76) tabs_3_active_pane_g1

0xc9b8,	// (0x0001bce5) tabs_3_active_pane_t1

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp2_ParamLimits

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp2

0x2849,	// (0x00011b76) tabs_3_passive_pane_g1

0xc9b8,	// (0x0001bce5) tabs_3_passive_pane_t1

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp3_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp3

0x2863,	// (0x00011b90) tabs_4_active_pane_g1

0xc9ca,	// (0x0001bcf7) tabs_4_active_pane_t1

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp3_ParamLimits

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp3

0x2863,	// (0x00011b90) tabs_4_1_passive_pane_g1

0xc9ca,	// (0x0001bcf7) tabs_4_1_passive_pane_t1

0x477b,	// (0x00013aa8) list_highlight_pane_cp2

0xdbcf,	// (0x0001cefc) list_set_pane_ParamLimits

0xdbcf,	// (0x0001cefc) list_set_pane

0xdc69,	// (0x0001cf96) main_pane_set_t1_ParamLimits

0xdc69,	// (0x0001cf96) main_pane_set_t1

0xdc89,	// (0x0001cfb6) main_pane_set_t2_ParamLimits

0xdc89,	// (0x0001cfb6) main_pane_set_t2

0xdc9d,	// (0x0001cfca) main_pane_set_t3_ParamLimits

0xdc9d,	// (0x0001cfca) main_pane_set_t3

0xdcaf,	// (0x0001cfdc) main_pane_set_t4_ParamLimits

0xdcaf,	// (0x0001cfdc) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001eca9) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001eca9) main_pane_set_t

0xdcc1,	// (0x0001cfee) setting_code_pane

0xdcc9,	// (0x0001cff6) setting_slider_graphic_pane

0xdcc9,	// (0x0001cff6) setting_slider_pane

0xdcc9,	// (0x0001cff6) setting_text_pane

0xdcc9,	// (0x0001cff6) setting_volume_pane

0x05a6,	// (0x0000f8d3) volume_set_pane

0x283b,	// (0x00011b68) bg_set_opt_pane_cp

0x05ae,	// (0x0000f8db) setting_slider_pane_t1

0x05c7,	// (0x0000f8f4) setting_slider_pane_t2

0x05e1,	// (0x0000f90e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001e88b) setting_slider_pane_t

0x05f9,	// (0x0000f926) slider_set_pane

0x275b,	// (0x00011a88) bg_set_opt_pane_cp2

0x287d,	// (0x00011baa) setting_slider_graphic_pane_g1

0x060f,	// (0x0000f93c) setting_slider_graphic_pane_t1

0x061f,	// (0x0000f94c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001e892) setting_slider_graphic_pane_t

0x062f,	// (0x0000f95c) slider_set_pane_cp

0x275b,	// (0x00011a88) input_focus_pane_cp1

0x6168,	// (0x00015495) list_set_text_pane

0x2751,	// (0x00011a7e) setting_text_pane_g1

0x275b,	// (0x00011a88) input_focus_pane_cp2

0x2751,	// (0x00011a7e) setting_code_pane_g1

0x2886,	// (0x00011bb3) setting_code_pane_t1

0x2894,	// (0x00011bc1) set_text_pane_t1_ParamLimits

0x2894,	// (0x00011bc1) set_text_pane_t1

0x3727,	// (0x00012a54) set_opt_bg_pane_g1

0x372f,	// (0x00012a5c) set_opt_bg_pane_g2

0x6148,	// (0x00015475) set_opt_bg_pane_g3

0x373f,	// (0x00012a6c) set_opt_bg_pane_g4

0x3747,	// (0x00012a74) set_opt_bg_pane_g5

0x374f,	// (0x00012a7c) set_opt_bg_pane_g6

0x6150,	// (0x0001547d) set_opt_bg_pane_g7

0x6158,	// (0x00015485) set_opt_bg_pane_g8

0x6160,	// (0x0001548d) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001ec96) set_opt_bg_pane_g

0x613b,	// (0x00015468) slider_set_pane_g1

0x154a,	// (0x00010877) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001ec87) slider_set_pane_g

0x14e6,	// (0x00010813) volume_set_pane_g1

0x14ee,	// (0x0001081b) volume_set_pane_g2

0x14f6,	// (0x00010823) volume_set_pane_g3

0x14fe,	// (0x0001082b) volume_set_pane_g4

0x1506,	// (0x00010833) volume_set_pane_g5

0x150e,	// (0x0001083b) volume_set_pane_g6

0x1516,	// (0x00010843) volume_set_pane_g7

0x151e,	// (0x0001084b) volume_set_pane_g8

0x1526,	// (0x00010853) volume_set_pane_g9

0x152e,	// (0x0001085b) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001ec5f) volume_set_pane_g

0xc9dc,	// (0x0001bd09) indicator_pane_ParamLimits

0xc9dc,	// (0x0001bd09) indicator_pane

0xca04,	// (0x0001bd31) main_idle_pane_g2_ParamLimits

0xca04,	// (0x0001bd31) main_idle_pane_g2

0xca3c,	// (0x0001bd69) main_pane_idle_g1_ParamLimits

0xca3c,	// (0x0001bd69) main_pane_idle_g1

0x28ef,	// (0x00011c1c) popup_clock_digital_analogue_window_ParamLimits

0x28ef,	// (0x00011c1c) popup_clock_digital_analogue_window

0xca63,	// (0x0001bd90) soft_indicator_pane_ParamLimits

0xca63,	// (0x0001bd90) soft_indicator_pane

0xca7d,	// (0x0001bdaa) wallpaper_pane_ParamLimits

0xca7d,	// (0x0001bdaa) wallpaper_pane

0x2751,	// (0x00011a7e) wallpaper_pane_g1

0xca8f,	// (0x0001bdbc) indicator_pane_g1_ParamLimits

0xca8f,	// (0x0001bdbc) indicator_pane_g1

0x6649,	// (0x00015976) navi_navi_icon_text_pane_srt_g1

0x2941,	// (0x00011c6e) soft_indicator_pane_t1

0x295b,	// (0x00011c88) aid_ps_area_pane

0xcaa5,	// (0x0001bdd2) aid_ps_clock_pane

0x297a,	// (0x00011ca7) aid_ps_indicator_pane

0x2986,	// (0x00011cb3) indicator_ps_pane_ParamLimits

0x2986,	// (0x00011cb3) indicator_ps_pane

0x2995,	// (0x00011cc2) power_save_pane_g1_ParamLimits

0x2995,	// (0x00011cc2) power_save_pane_g1

0x29a1,	// (0x00011cce) power_save_pane_g2_ParamLimits

0x29a1,	// (0x00011cce) power_save_pane_g2

0x01bb,	// (0x0000f4e8) aid_navinavi_width_pane

0x295b,	// (0x00011c88) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001e897) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001e897) power_save_pane_g

0x29af,	// (0x00011cdc) power_save_pane_t1_ParamLimits

0x29af,	// (0x00011cdc) power_save_pane_t1

0xcaa5,	// (0x0001bdd2) aid_ps_clock_pane_ParamLimits

0x297a,	// (0x00011ca7) aid_ps_indicator_pane_ParamLimits

0x29c1,	// (0x00011cee) power_save_pane_t4_ParamLimits

0x29c1,	// (0x00011cee) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001e89c) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001e89c) power_save_pane_t

0x29eb,	// (0x00011d18) power_save_t3_ParamLimits

0x29eb,	// (0x00011d18) power_save_t3

0x29d6,	// (0x00011d03) power_save_t2_ParamLimits

0x29d6,	// (0x00011d03) power_save_t2

0x2a00,	// (0x00011d2d) indicator_ps_pane_g1

0xcab3,	// (0x0001bde0) ai_gene_pane_ParamLimits

0xcab3,	// (0x0001bde0) ai_gene_pane

0xcaca,	// (0x0001bdf7) ai_links_pane_ParamLimits

0xcaca,	// (0x0001bdf7) ai_links_pane

0xcae2,	// (0x0001be0f) indicator_pane_cp1_ParamLimits

0xcae2,	// (0x0001be0f) indicator_pane_cp1

0xcaf1,	// (0x0001be1e) main_pane_idle_g1_cp_ParamLimits

0xcaf1,	// (0x0001be1e) main_pane_idle_g1_cp

0x2a39,	// (0x00011d66) popup_ai_links_title_window

0xcb09,	// (0x0001be36) soft_indicator_pane_cp1_ParamLimits

0xcb09,	// (0x0001be36) soft_indicator_pane_cp1

0x5f15,	// (0x00015242) ai_links_pane_g1

0x5f1e,	// (0x0001524b) grid_ai_links_pane

0xdb11,	// (0x0001ce3e) ai_gene_pane_1

0x5f03,	// (0x00015230) ai_gene_pane_2

0x5f0c,	// (0x00015239) list_highlight_pane_cp4

0xdaed,	// (0x0001ce1a) cell_ai_link_pane_ParamLimits

0xdaed,	// (0x0001ce1a) cell_ai_link_pane

0x5ed4,	// (0x00015201) cell_ai_link_pane_g1

0x2c66,	// (0x00011f93) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001ec3a) cell_ai_link_pane_g

0x275b,	// (0x00011a88) grid_highlight_cp2

0x275b,	// (0x00011a88) bg_popup_sub_pane_cp1

0x2a5c,	// (0x00011d89) popup_ai_links_title_window_t1

0x5e24,	// (0x00015151) ai_gene_pane_1_g1_ParamLimits

0x5e24,	// (0x00015151) ai_gene_pane_1_g1

0x5e30,	// (0x0001515d) ai_gene_pane_1_g2_ParamLimits

0x5e30,	// (0x0001515d) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001ec30) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001ec30) ai_gene_pane_1_g

0x5e3d,	// (0x0001516a) ai_gene_pane_1_t1_ParamLimits

0x5e3d,	// (0x0001516a) ai_gene_pane_1_t1

0x5e71,	// (0x0001519e) grid_ai_soft_ind_pane

0x5e0f,	// (0x0001513c) ai_gene_pane_2_t1_ParamLimits

0x5e0f,	// (0x0001513c) ai_gene_pane_2_t1

0xcb1d,	// (0x0001be4a) main_pane_empty_t1_ParamLimits

0xcb1d,	// (0x0001be4a) main_pane_empty_t1

0xcb35,	// (0x0001be62) main_pane_empty_t2_ParamLimits

0xcb35,	// (0x0001be62) main_pane_empty_t2

0xcb4a,	// (0x0001be77) main_pane_empty_t3_ParamLimits

0xcb4a,	// (0x0001be77) main_pane_empty_t3

0xcb5c,	// (0x0001be89) main_pane_empty_t4_ParamLimits

0xcb5c,	// (0x0001be89) main_pane_empty_t4

0xcb6e,	// (0x0001be9b) main_pane_empty_t5_ParamLimits

0xcb6e,	// (0x0001be9b) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001e8a1) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001e8a1) main_pane_empty_t

0x3806,	// (0x00012b33) bg_popup_window_pane_ParamLimits

0x3806,	// (0x00012b33) bg_popup_window_pane

0x5b7f,	// (0x00014eac) find_popup_pane_cp2_ParamLimits

0x5b7f,	// (0x00014eac) find_popup_pane_cp2

0x5b8b,	// (0x00014eb8) heading_pane_ParamLimits

0x5b8b,	// (0x00014eb8) heading_pane

0x275b,	// (0x00011a88) bg_popup_sub_pane

0xda6e,	// (0x0001cd9b) bg_popup_window_pane_g1_ParamLimits

0xda6e,	// (0x0001cd9b) bg_popup_window_pane_g1

0xda7d,	// (0x0001cdaa) bg_popup_window_pane_g2_ParamLimits

0xda7d,	// (0x0001cdaa) bg_popup_window_pane_g2

0xda89,	// (0x0001cdb6) bg_popup_window_pane_g3_ParamLimits

0xda89,	// (0x0001cdb6) bg_popup_window_pane_g3

0xda95,	// (0x0001cdc2) bg_popup_window_pane_g4_ParamLimits

0xda95,	// (0x0001cdc2) bg_popup_window_pane_g4

0xdaa4,	// (0x0001cdd1) bg_popup_window_pane_g5_ParamLimits

0xdaa4,	// (0x0001cdd1) bg_popup_window_pane_g5

0xdab4,	// (0x0001cde1) bg_popup_window_pane_g6_ParamLimits

0xdab4,	// (0x0001cde1) bg_popup_window_pane_g6

0xdac0,	// (0x0001cded) bg_popup_window_pane_g7_ParamLimits

0xdac0,	// (0x0001cded) bg_popup_window_pane_g7

0xdacf,	// (0x0001cdfc) bg_popup_window_pane_g8_ParamLimits

0xdacf,	// (0x0001cdfc) bg_popup_window_pane_g8

0xdade,	// (0x0001ce0b) bg_popup_window_pane_g9_ParamLimits

0xdade,	// (0x0001ce0b) bg_popup_window_pane_g9

0x5b65,	// (0x00014e92) bg_popup_window_pane_g10_ParamLimits

0x5b65,	// (0x00014e92) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001ebf8) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001ebf8) bg_popup_window_pane_g

0x5a8e,	// (0x00014dbb) bg_popup_heading_pane_ParamLimits

0x5a8e,	// (0x00014dbb) bg_popup_heading_pane

0x15d2,	// (0x000108ff) tabs_4_passive_pane_cp_srt_ParamLimits

0x15d2,	// (0x000108ff) tabs_4_passive_pane_cp_srt

0x15e4,	// (0x00010911) tabs_4_passive_pane_srt_ParamLimits

0x5aa2,	// (0x00014dcf) heading_pane_g2

0x15e4,	// (0x00010911) tabs_4_passive_pane_srt

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp3_srt

0x5aaa,	// (0x00014dd7) heading_pane_t1_ParamLimits

0x5aaa,	// (0x00014dd7) heading_pane_t1

0x5ac1,	// (0x00014dee) heading_pane_t2_ParamLimits

0x5ac1,	// (0x00014dee) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001ebf3) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001ebf3) heading_pane_t

0x55bb,	// (0x000148e8) bg_popup_heading_pane_g1

0x566a,	// (0x00014997) bg_popup_heading_pane_g2

0x5674,	// (0x000149a1) bg_popup_heading_pane_g3

0x567e,	// (0x000149ab) bg_popup_heading_pane_g4

0x5688,	// (0x000149b5) bg_popup_heading_pane_g5

0x5692,	// (0x000149bf) bg_popup_heading_pane_g6

0x569a,	// (0x000149c7) bg_popup_heading_pane_g7

0x56a2,	// (0x000149cf) bg_popup_heading_pane_g8

0x56ac,	// (0x000149d9) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001ebaf) bg_popup_heading_pane_g

0x4c97,	// (0x00013fc4) bg_popup_sub_pane_g1

0x4ca7,	// (0x00013fd4) bg_popup_sub_pane_g2

0x4c9f,	// (0x00013fcc) bg_popup_sub_pane_g3

0x4cb7,	// (0x00013fe4) bg_popup_sub_pane_g4

0x4caf,	// (0x00013fdc) bg_popup_sub_pane_g5

0x4cbf,	// (0x00013fec) bg_popup_sub_pane_g6

0x4cc7,	// (0x00013ff4) bg_popup_sub_pane_g7

0x4cd7,	// (0x00014004) bg_popup_sub_pane_g8

0x4ccf,	// (0x00013ffc) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001eb89) bg_popup_sub_pane_g

0x2ad0,	// (0x00011dfd) bg_popup_window_pane_cp5_ParamLimits

0x2ad0,	// (0x00011dfd) bg_popup_window_pane_cp5

0x2aec,	// (0x00011e19) popup_note_window_g1_ParamLimits

0x2aec,	// (0x00011e19) popup_note_window_g1

0x2af8,	// (0x00011e25) popup_note_window_t1_ParamLimits

0x2af8,	// (0x00011e25) popup_note_window_t1

0x2b0a,	// (0x00011e37) popup_note_window_t2_ParamLimits

0x2b0a,	// (0x00011e37) popup_note_window_t2

0x2b1c,	// (0x00011e49) popup_note_window_t3_ParamLimits

0x2b1c,	// (0x00011e49) popup_note_window_t3

0x2b2e,	// (0x00011e5b) popup_note_window_t4_ParamLimits

0x2b2e,	// (0x00011e5b) popup_note_window_t4

0x2b56,	// (0x00011e83) popup_note_window_t5_ParamLimits

0x2b56,	// (0x00011e83) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001e8ac) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001e8ac) popup_note_window_t

0x2b7a,	// (0x00011ea7) bg_popup_window_pane_cp6_ParamLimits

0x2b7a,	// (0x00011ea7) bg_popup_window_pane_cp6

0x552f,	// (0x0001485c) popup_note_image_window_g1_ParamLimits

0x552f,	// (0x0001485c) popup_note_image_window_g1

0x553b,	// (0x00014868) popup_note_image_window_g2_ParamLimits

0x553b,	// (0x00014868) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001eb7d) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001eb7d) popup_note_image_window_g

0x5554,	// (0x00014881) popup_note_image_window_t1_ParamLimits

0x5554,	// (0x00014881) popup_note_image_window_t1

0x556d,	// (0x0001489a) popup_note_image_window_t2_ParamLimits

0x556d,	// (0x0001489a) popup_note_image_window_t2

0x5586,	// (0x000148b3) popup_note_image_window_t3_ParamLimits

0x5586,	// (0x000148b3) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001eb82) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001eb82) popup_note_image_window_t

0x53f0,	// (0x0001471d) bg_popup_window_pane_cp7_ParamLimits

0x53f0,	// (0x0001471d) bg_popup_window_pane_cp7

0x5420,	// (0x0001474d) popup_note_wait_window_g1_ParamLimits

0x5420,	// (0x0001474d) popup_note_wait_window_g1

0x542c,	// (0x00014759) popup_note_wait_window_g2_ParamLimits

0x542c,	// (0x00014759) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001eb6b) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001eb6b) popup_note_wait_window_g

0x5444,	// (0x00014771) popup_note_wait_window_t1_ParamLimits

0x5444,	// (0x00014771) popup_note_wait_window_t1

0x546b,	// (0x00014798) popup_note_wait_window_t2_ParamLimits

0x546b,	// (0x00014798) popup_note_wait_window_t2

0x5488,	// (0x000147b5) popup_note_wait_window_t3_ParamLimits

0x5488,	// (0x000147b5) popup_note_wait_window_t3

0x549b,	// (0x000147c8) popup_note_wait_window_t4_ParamLimits

0x549b,	// (0x000147c8) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001eb72) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001eb72) popup_note_wait_window_t

0x54c0,	// (0x000147ed) wait_bar_pane_ParamLimits

0x54c0,	// (0x000147ed) wait_bar_pane

0x275b,	// (0x00011a88) wait_anim_pane

0x275b,	// (0x00011a88) wait_border_pane

0x2751,	// (0x00011a7e) wait_anim_pane_g1

0x2751,	// (0x00011a7e) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001ea2b) wait_anim_pane_g

0x5394,	// (0x000146c1) wait_border_pane_g1

0x539f,	// (0x000146cc) wait_border_pane_g2

0x53a8,	// (0x000146d5) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001eb64) wait_border_pane_g

0x5204,	// (0x00014531) bg_popup_window_pane_cp16_ParamLimits

0x5204,	// (0x00014531) bg_popup_window_pane_cp16

0x5304,	// (0x00014631) indicator_popup_pane_cp4_ParamLimits

0x5304,	// (0x00014631) indicator_popup_pane_cp4

0x5318,	// (0x00014645) popup_query_data_window_t1_ParamLimits

0x5318,	// (0x00014645) popup_query_data_window_t1

0x532a,	// (0x00014657) popup_query_data_window_t2_ParamLimits

0x532a,	// (0x00014657) popup_query_data_window_t2

0x5343,	// (0x00014670) popup_query_data_window_t3_ParamLimits

0x5343,	// (0x00014670) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001eb5d) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001eb5d) popup_query_data_window_t

0x535d,	// (0x0001468a) query_popup_data_pane_ParamLimits

0x535d,	// (0x0001468a) query_popup_data_pane

0x5371,	// (0x0001469e) query_popup_data_pane_cp1_ParamLimits

0x5371,	// (0x0001469e) query_popup_data_pane_cp1

0x5204,	// (0x00014531) bg_popup_window_pane_cp10_ParamLimits

0x5204,	// (0x00014531) bg_popup_window_pane_cp10

0x5236,	// (0x00014563) indicator_popup_pane_ParamLimits

0x5236,	// (0x00014563) indicator_popup_pane

0x5258,	// (0x00014585) popup_query_code_window_t1_ParamLimits

0x5258,	// (0x00014585) popup_query_code_window_t1

0x5272,	// (0x0001459f) popup_query_code_window_t2_ParamLimits

0x5272,	// (0x0001459f) popup_query_code_window_t2

0x52bb,	// (0x000145e8) popup_query_code_window_t3_ParamLimits

0x52bb,	// (0x000145e8) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001eb56) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001eb56) popup_query_code_window_t

0x52ea,	// (0x00014617) query_popup_pane_ParamLimits

0x52ea,	// (0x00014617) query_popup_pane

0x2b7a,	// (0x00011ea7) bg_popup_window_pane_cp15_ParamLimits

0x2b7a,	// (0x00011ea7) bg_popup_window_pane_cp15

0x2b98,	// (0x00011ec5) indicator_popup_pane_cp1_ParamLimits

0x2b98,	// (0x00011ec5) indicator_popup_pane_cp1

0x2bab,	// (0x00011ed8) indicator_popup_pane_cp2_ParamLimits

0x2bab,	// (0x00011ed8) indicator_popup_pane_cp2

0x2bbe,	// (0x00011eeb) popup_query_data_code_window_g1_ParamLimits

0x2bbe,	// (0x00011eeb) popup_query_data_code_window_g1

0x2bd1,	// (0x00011efe) popup_query_data_code_window_t1_ParamLimits

0x2bd1,	// (0x00011efe) popup_query_data_code_window_t1

0x2be3,	// (0x00011f10) popup_query_data_code_window_t2_ParamLimits

0x2be3,	// (0x00011f10) popup_query_data_code_window_t2

0x2bf5,	// (0x00011f22) popup_query_data_code_window_t3_ParamLimits

0x2bf5,	// (0x00011f22) popup_query_data_code_window_t3

0x2c0b,	// (0x00011f38) popup_query_data_code_window_t4_ParamLimits

0x2c0b,	// (0x00011f38) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001e8b7) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001e8b7) popup_query_data_code_window_t

0x129b,	// (0x000105c8) list_single_midp_graphic_pane_g3

0x2c23,	// (0x00011f50) query_popup_data_pane_cp2_ParamLimits

0x2c36,	// (0x00011f63) query_popup_pane_cp2_ParamLimits

0x2c36,	// (0x00011f63) query_popup_pane_cp2

0x275b,	// (0x00011a88) bg_popup_window_pane_cp11

0x51fc,	// (0x00014529) heading_pane_cp5

0x2d21,	// (0x0001204e) listscroll_popup_info_pane

0x275b,	// (0x00011a88) input_focus_pane_cp3

0x2c49,	// (0x00011f76) query_popup_pane_t1

0x2c57,	// (0x00011f84) list_popup_info_pane_ParamLimits

0x2c57,	// (0x00011f84) list_popup_info_pane

0x2c66,	// (0x00011f93) listscroll_popup_info_pane_g1

0x2c6e,	// (0x00011f9b) scroll_pane_cp7

0x2c78,	// (0x00011fa5) popup_info_list_pane_t1_ParamLimits

0x2c78,	// (0x00011fa5) popup_info_list_pane_t1

0x2c92,	// (0x00011fbf) popup_info_list_pane_t2_ParamLimits

0x2c92,	// (0x00011fbf) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001e8c0) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001e8c0) popup_info_list_pane_t

0x275b,	// (0x00011a88) bg_popup_window_pane_cp12

0x6663,	// (0x00015990) find_popup_pane

0x283b,	// (0x00011b68) bg_popup_window_pane_cp3

0x2cac,	// (0x00011fd9) heading_pane_cp3

0x2cb8,	// (0x00011fe5) listscroll_popup_graphic_pane

0x275b,	// (0x00011a88) bg_popup_window_pane_cp4

0xcbd0,	// (0x0001befd) heading_pane_cp4

0x2d21,	// (0x0001204e) listscroll_popup_colour_pane

0x2d29,	// (0x00012056) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2d29,	// (0x00012056) cell_large_graphic_colour_none_popup_pane

0xcbd8,	// (0x0001bf05) grid_large_graphic_colour_popup_pane_ParamLimits

0xcbd8,	// (0x0001bf05) grid_large_graphic_colour_popup_pane

0x2d65,	// (0x00012092) listscroll_popup_colour_pane_g1_ParamLimits

0x2d65,	// (0x00012092) listscroll_popup_colour_pane_g1

0x2d7c,	// (0x000120a9) listscroll_popup_colour_pane_g2_ParamLimits

0x2d7c,	// (0x000120a9) listscroll_popup_colour_pane_g2

0x2d93,	// (0x000120c0) listscroll_popup_colour_pane_g3_ParamLimits

0x2d93,	// (0x000120c0) listscroll_popup_colour_pane_g3

0xcbfc,	// (0x0001bf29) listscroll_popup_colour_pane_g4_ParamLimits

0xcbfc,	// (0x0001bf29) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001e8c5) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001e8c5) listscroll_popup_colour_pane_g

0x2db2,	// (0x000120df) scroll_pane_cp6_ParamLimits

0x2db2,	// (0x000120df) scroll_pane_cp6

0xcc0b,	// (0x0001bf38) cell_large_graphic_colour_popup_pane_ParamLimits

0xcc0b,	// (0x0001bf38) cell_large_graphic_colour_popup_pane

0x2de3,	// (0x00012110) cell_large_graphic_colour_none_popup_pane_t1

0x275b,	// (0x00011a88) grid_highlight_pane_cp5

0x2df2,	// (0x0001211f) cell_large_graphic_colour_popup_pane_g1

0x2dfa,	// (0x00012127) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001e8ce) cell_large_graphic_colour_popup_pane_g

0x2e02,	// (0x0001212f) cell_large_graphic_colour_popup_pane_g2_copy1

0x2e0b,	// (0x00012138) grid_highlight_pane_cp4

0x2e13,	// (0x00012140) bg_popup_window_pane_cp8_ParamLimits

0x2e13,	// (0x00012140) bg_popup_window_pane_cp8

0x2e2e,	// (0x0001215b) popup_snote_single_text_window_g1_ParamLimits

0x2e2e,	// (0x0001215b) popup_snote_single_text_window_g1

0x2e40,	// (0x0001216d) popup_snote_single_text_window_t1_ParamLimits

0x2e40,	// (0x0001216d) popup_snote_single_text_window_t1

0x2e53,	// (0x00012180) popup_snote_single_text_window_t2_ParamLimits

0x2e53,	// (0x00012180) popup_snote_single_text_window_t2

0x2e66,	// (0x00012193) popup_snote_single_text_window_t3_ParamLimits

0x2e66,	// (0x00012193) popup_snote_single_text_window_t3

0x2e9f,	// (0x000121cc) popup_snote_single_text_window_t4_ParamLimits

0x2e9f,	// (0x000121cc) popup_snote_single_text_window_t4

0x2ed3,	// (0x00012200) popup_snote_single_text_window_t5_ParamLimits

0x2ed3,	// (0x00012200) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001e8d3) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001e8d3) popup_snote_single_text_window_t

0x2f02,	// (0x0001222f) bg_popup_window_pane_cp9_ParamLimits

0x2f02,	// (0x0001222f) bg_popup_window_pane_cp9

0x2e2e,	// (0x0001215b) popup_snote_single_graphic_window_g1_ParamLimits

0x2e2e,	// (0x0001215b) popup_snote_single_graphic_window_g1

0x2f10,	// (0x0001223d) popup_snote_single_graphic_window_g2_ParamLimits

0x2f10,	// (0x0001223d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001e8de) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001e8de) popup_snote_single_graphic_window_g

0x2f1c,	// (0x00012249) popup_snote_single_graphic_window_t1_ParamLimits

0x2f1c,	// (0x00012249) popup_snote_single_graphic_window_t1

0x2f2f,	// (0x0001225c) popup_snote_single_graphic_window_t2_ParamLimits

0x2f2f,	// (0x0001225c) popup_snote_single_graphic_window_t2

0x2f42,	// (0x0001226f) popup_snote_single_graphic_window_t3_ParamLimits

0x2f42,	// (0x0001226f) popup_snote_single_graphic_window_t3

0x2f7b,	// (0x000122a8) popup_snote_single_graphic_window_t4_ParamLimits

0x2f7b,	// (0x000122a8) popup_snote_single_graphic_window_t4

0x2faf,	// (0x000122dc) popup_snote_single_graphic_window_t5_ParamLimits

0x2faf,	// (0x000122dc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001e8e3) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001e8e3) popup_snote_single_graphic_window_t

0xde13,	// (0x0001d140) grid_graphic_popup_pane_ParamLimits

0xde13,	// (0x0001d140) grid_graphic_popup_pane

0x65cf,	// (0x000158fc) listscroll_popup_graphic_pane_g1_ParamLimits

0x65cf,	// (0x000158fc) listscroll_popup_graphic_pane_g1

0xde32,	// (0x0001d15f) listscroll_popup_graphic_pane_g2_ParamLimits

0xde32,	// (0x0001d15f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001ecd3) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001ecd3) listscroll_popup_graphic_pane_g

0x65f7,	// (0x00015924) scroll_pane_cp5

0xddce,	// (0x0001d0fb) cell_graphic_popup_pane_ParamLimits

0xddce,	// (0x0001d0fb) cell_graphic_popup_pane

0x6527,	// (0x00015854) cell_graphic_popup_pane_g1

0x652f,	// (0x0001585c) cell_graphic_popup_pane_g2

0x2e02,	// (0x0001212f) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001eccc) cell_graphic_popup_pane_g

0x6538,	// (0x00015865) cell_graphic_popup_pane_t2

0x2e0b,	// (0x00012138) grid_highlight_pane_cp3

0x2ff0,	// (0x0001231d) list_gen_pane_ParamLimits

0x2ff0,	// (0x0001231d) list_gen_pane

0x3022,	// (0x0001234f) scroll_pane

0xdd89,	// (0x0001d0b6) bg_list_pane_g1_ParamLimits

0xdd89,	// (0x0001d0b6) bg_list_pane_g1

0x64a4,	// (0x000157d1) bg_list_pane_g2_ParamLimits

0x64a4,	// (0x000157d1) bg_list_pane_g2

0x64b7,	// (0x000157e4) bg_list_pane_g3_ParamLimits

0x64b7,	// (0x000157e4) bg_list_pane_g3

0x64c9,	// (0x000157f6) bg_list_pane_g4_ParamLimits

0x64c9,	// (0x000157f6) bg_list_pane_g4

0xdda4,	// (0x0001d0d1) bg_list_pane_g5_ParamLimits

0xdda4,	// (0x0001d0d1) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001ecc1) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001ecc1) bg_list_pane_g

0xdd18,	// (0x0001d045) list_double2_graphic_large_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double2_graphic_large_graphic_pane

0xdd18,	// (0x0001d045) list_double2_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double2_graphic_pane

0xdd18,	// (0x0001d045) list_double2_large_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double2_large_graphic_pane

0xdd2b,	// (0x0001d058) list_double2_pane_ParamLimits

0xdd2b,	// (0x0001d058) list_double2_pane

0xdd18,	// (0x0001d045) list_double_graphic_heading_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_graphic_heading_pane

0xdd18,	// (0x0001d045) list_double_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_graphic_pane

0xdd18,	// (0x0001d045) list_double_heading_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_heading_pane

0xdd18,	// (0x0001d045) list_double_large_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_large_graphic_pane

0xdd18,	// (0x0001d045) list_double_number_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_number_pane

0xdd18,	// (0x0001d045) list_double_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_pane

0xdd18,	// (0x0001d045) list_double_time_pane_ParamLimits

0xdd18,	// (0x0001d045) list_double_time_pane

0xdd18,	// (0x0001d045) list_setting_number_pane_ParamLimits

0xdd18,	// (0x0001d045) list_setting_number_pane

0xdd18,	// (0x0001d045) list_setting_pane_ParamLimits

0xdd18,	// (0x0001d045) list_setting_pane

0xdd3d,	// (0x0001d06a) list_single_2graphic_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_2graphic_pane

0xdd3d,	// (0x0001d06a) list_single_graphic_heading_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_graphic_heading_pane

0xdd3d,	// (0x0001d06a) list_single_graphic_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_graphic_pane

0xdd3d,	// (0x0001d06a) list_single_heading_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_heading_pane

0xdd18,	// (0x0001d045) list_single_large_graphic_pane_ParamLimits

0xdd18,	// (0x0001d045) list_single_large_graphic_pane

0xdd3d,	// (0x0001d06a) list_single_number_heading_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_number_heading_pane

0xdd3d,	// (0x0001d06a) list_single_number_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_number_pane

0xdd3d,	// (0x0001d06a) list_single_pane_ParamLimits

0xdd3d,	// (0x0001d06a) list_single_pane

0x275b,	// (0x00011a88) list_highlight_pane_cp1

0x3062,	// (0x0001238f) list_single_pane_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_pane_g1

0x306e,	// (0x0001239b) list_single_pane_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_pane_g

0x631d,	// (0x0001564a) list_single_pane_t1_ParamLimits

0x631d,	// (0x0001564a) list_single_pane_t1

0x3062,	// (0x0001238f) list_single_number_pane_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_number_pane_g1

0x306e,	// (0x0001239b) list_single_number_pane_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_number_pane_g

0x4c25,	// (0x00013f52) list_single_number_pane_t1_ParamLimits

0x4c25,	// (0x00013f52) list_single_number_pane_t1

0x60cd,	// (0x000153fa) list_single_number_pane_t2_ParamLimits

0x60cd,	// (0x000153fa) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001ec82) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001ec82) list_single_number_pane_t

0x3056,	// (0x00012383) list_single_graphic_pane_g1_ParamLimits

0x3056,	// (0x00012383) list_single_graphic_pane_g1

0x3062,	// (0x0001238f) list_single_graphic_pane_g2_ParamLimits

0x3062,	// (0x0001238f) list_single_graphic_pane_g2

0x306e,	// (0x0001239b) list_single_graphic_pane_g3_ParamLimits

0x306e,	// (0x0001239b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001e8ee) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001e8ee) list_single_graphic_pane_g

0x307a,	// (0x000123a7) list_single_graphic_pane_t1_ParamLimits

0x307a,	// (0x000123a7) list_single_graphic_pane_t1

0x3062,	// (0x0001238f) list_single_heading_pane_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_heading_pane_g1

0x306e,	// (0x0001239b) list_single_heading_pane_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_heading_pane_g

0x3090,	// (0x000123bd) list_single_heading_pane_t1_ParamLimits

0x3090,	// (0x000123bd) list_single_heading_pane_t1

0x30a6,	// (0x000123d3) list_single_heading_pane_t2_ParamLimits

0x30a6,	// (0x000123d3) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001e8fa) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001e8fa) list_single_heading_pane_t

0x3062,	// (0x0001238f) list_single_number_heading_pane_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_number_heading_pane_g1

0x306e,	// (0x0001239b) list_single_number_heading_pane_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_number_heading_pane_g

0x3090,	// (0x000123bd) list_single_number_heading_pane_t1_ParamLimits

0x3090,	// (0x000123bd) list_single_number_heading_pane_t1

0x30b8,	// (0x000123e5) list_single_number_heading_pane_t2_ParamLimits

0x30b8,	// (0x000123e5) list_single_number_heading_pane_t2

0x30ca,	// (0x000123f7) list_single_number_heading_pane_t3_ParamLimits

0x30ca,	// (0x000123f7) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001e8ff) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001e8ff) list_single_number_heading_pane_t

0x30dc,	// (0x00012409) list_single_graphic_heading_pane_g1_ParamLimits

0x30dc,	// (0x00012409) list_single_graphic_heading_pane_g1

0xcc34,	// (0x0001bf61) list_single_graphic_heading_pane_g4_ParamLimits

0xcc34,	// (0x0001bf61) list_single_graphic_heading_pane_g4

0x306e,	// (0x0001239b) list_single_graphic_heading_pane_g5_ParamLimits

0x306e,	// (0x0001239b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001e906) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001e906) list_single_graphic_heading_pane_g

0x3090,	// (0x000123bd) list_single_graphic_heading_pane_t1_ParamLimits

0x3090,	// (0x000123bd) list_single_graphic_heading_pane_t1

0x30f9,	// (0x00012426) list_single_graphic_heading_pane_t2_ParamLimits

0x30f9,	// (0x00012426) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001e90d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001e90d) list_single_graphic_heading_pane_t

0x6c2f,	// (0x00015f5c) list_single_large_graphic_pane_g1_ParamLimits

0x6c2f,	// (0x00015f5c) list_single_large_graphic_pane_g1

0x6c3b,	// (0x00015f68) list_single_large_graphic_pane_g2_ParamLimits

0x6c3b,	// (0x00015f68) list_single_large_graphic_pane_g2

0x6c47,	// (0x00015f74) list_single_large_graphic_pane_g3_ParamLimits

0x6c47,	// (0x00015f74) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001e912) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001e912) list_single_large_graphic_pane_g

0x539f,	// (0x000146cc) wait_border_pane_g2_copy1

0x312f,	// (0x0001245c) list_single_large_graphic_pane_g4_cp2

0x6c53,	// (0x00015f80) list_single_large_graphic_pane_t1_ParamLimits

0x6c53,	// (0x00015f80) list_single_large_graphic_pane_t1

0x4269,	// (0x00013596) list_double_pane_g1_ParamLimits

0x4269,	// (0x00013596) list_double_pane_g1

0xcc45,	// (0x0001bf72) list_double_pane_g2_ParamLimits

0xcc45,	// (0x0001bf72) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001e919) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001e919) list_double_pane_g

0xcc51,	// (0x0001bf7e) list_double_pane_t1_ParamLimits

0xcc51,	// (0x0001bf7e) list_double_pane_t1

0xcc67,	// (0x0001bf94) list_double_pane_t2_ParamLimits

0xcc67,	// (0x0001bf94) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001e91e) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001e91e) list_double_pane_t

0xcc79,	// (0x0001bfa6) list_double2_pane_g1_ParamLimits

0xcc79,	// (0x0001bfa6) list_double2_pane_g1

0x3159,	// (0x00012486) list_double2_pane_g2_ParamLimits

0x3159,	// (0x00012486) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001e923) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001e923) list_double2_pane_g

0x3165,	// (0x00012492) list_double2_pane_t1_ParamLimits

0x3165,	// (0x00012492) list_double2_pane_t1

0xcc8a,	// (0x0001bfb7) list_double2_pane_t2_ParamLimits

0xcc8a,	// (0x0001bfb7) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001e928) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001e928) list_double2_pane_t

0x4269,	// (0x00013596) list_double_number_pane_g1_ParamLimits

0x4269,	// (0x00013596) list_double_number_pane_g1

0xcc45,	// (0x0001bf72) list_double_number_pane_g2_ParamLimits

0xcc45,	// (0x0001bf72) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001e919) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001e919) list_double_number_pane_g

0xcc9c,	// (0x0001bfc9) list_double_number_pane_t1_ParamLimits

0xcc9c,	// (0x0001bfc9) list_double_number_pane_t1

0xccae,	// (0x0001bfdb) list_double_number_pane_t2_ParamLimits

0xccae,	// (0x0001bfdb) list_double_number_pane_t2

0xccc4,	// (0x0001bff1) list_double_number_pane_t3_ParamLimits

0xccc4,	// (0x0001bff1) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001e92d) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001e92d) list_double_number_pane_t

0x5a22,	// (0x00014d4f) list_double_graphic_pane_g1_ParamLimits

0x5a22,	// (0x00014d4f) list_double_graphic_pane_g1

0xccd6,	// (0x0001c003) list_double_graphic_pane_g2_ParamLimits

0xccd6,	// (0x0001c003) list_double_graphic_pane_g2

0xcce5,	// (0x0001c012) list_double_graphic_pane_g3_ParamLimits

0xcce5,	// (0x0001c012) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001e934) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001e934) list_double_graphic_pane_g

0xccfd,	// (0x0001c02a) list_double_graphic_pane_t1_ParamLimits

0xccfd,	// (0x0001c02a) list_double_graphic_pane_t1

0xcd13,	// (0x0001c040) list_double_graphic_pane_t2_ParamLimits

0xcd13,	// (0x0001c040) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001e93d) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001e93d) list_double_graphic_pane_t

0xcd25,	// (0x0001c052) list_double2_graphic_pane_g1_ParamLimits

0xcd25,	// (0x0001c052) list_double2_graphic_pane_g1

0xcd31,	// (0x0001c05e) list_double2_graphic_pane_g2_ParamLimits

0xcd31,	// (0x0001c05e) list_double2_graphic_pane_g2

0xcd3d,	// (0x0001c06a) list_double2_graphic_pane_g3_ParamLimits

0xcd3d,	// (0x0001c06a) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001e942) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001e942) list_double2_graphic_pane_g

0xcd49,	// (0x0001c076) list_double2_graphic_pane_t1_ParamLimits

0xcd49,	// (0x0001c076) list_double2_graphic_pane_t1

0xcd5f,	// (0x0001c08c) list_double2_graphic_pane_t2_ParamLimits

0xcd5f,	// (0x0001c08c) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001e949) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001e949) list_double2_graphic_pane_t

0xcd71,	// (0x0001c09e) list_double_large_graphic_pane_g1_ParamLimits

0xcd71,	// (0x0001c09e) list_double_large_graphic_pane_g1

0xcd90,	// (0x0001c0bd) list_double_large_graphic_pane_g2_ParamLimits

0xcd90,	// (0x0001c0bd) list_double_large_graphic_pane_g2

0xcc45,	// (0x0001bf72) list_double_large_graphic_pane_g3_ParamLimits

0xcc45,	// (0x0001bf72) list_double_large_graphic_pane_g3

0xcda1,	// (0x0001c0ce) list_double_large_graphic_pane_g4_ParamLimits

0xcda1,	// (0x0001c0ce) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001e94e) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001e94e) list_double_large_graphic_pane_g

0xcdb4,	// (0x0001c0e1) list_double_large_graphic_pane_t1_ParamLimits

0xcdb4,	// (0x0001c0e1) list_double_large_graphic_pane_t1

0xcdcd,	// (0x0001c0fa) list_double_large_graphic_pane_t2_ParamLimits

0xcdcd,	// (0x0001c0fa) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001e959) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001e959) list_double_large_graphic_pane_t

0xcddf,	// (0x0001c10c) list_double2_large_graphic_pane_g1_ParamLimits

0xcddf,	// (0x0001c10c) list_double2_large_graphic_pane_g1

0xcdeb,	// (0x0001c118) list_double2_large_graphic_pane_g2_ParamLimits

0xcdeb,	// (0x0001c118) list_double2_large_graphic_pane_g2

0xcd3d,	// (0x0001c06a) list_double2_large_graphic_pane_g3_ParamLimits

0xcd3d,	// (0x0001c06a) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001e95e) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001e95e) list_double2_large_graphic_pane_g

0xcdfc,	// (0x0001c129) list_double2_large_graphic_pane_t1_ParamLimits

0xcdfc,	// (0x0001c129) list_double2_large_graphic_pane_t1

0xce12,	// (0x0001c13f) list_double2_large_graphic_pane_t2_ParamLimits

0xce12,	// (0x0001c13f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001e965) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001e965) list_double2_large_graphic_pane_t

0xce24,	// (0x0001c151) list_double_heading_pane_g1_ParamLimits

0xce24,	// (0x0001c151) list_double_heading_pane_g1

0xce35,	// (0x0001c162) list_double_heading_pane_g2_ParamLimits

0xce35,	// (0x0001c162) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001e96a) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001e96a) list_double_heading_pane_g

0xce41,	// (0x0001c16e) list_double_heading_pane_t1_ParamLimits

0xce41,	// (0x0001c16e) list_double_heading_pane_t1

0xce57,	// (0x0001c184) list_double_heading_pane_t2_ParamLimits

0xce57,	// (0x0001c184) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001e96f) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001e96f) list_double_heading_pane_t

0x3267,	// (0x00012594) list_double_graphic_heading_pane_g1_ParamLimits

0x3267,	// (0x00012594) list_double_graphic_heading_pane_g1

0xce24,	// (0x0001c151) list_double_graphic_heading_pane_g2_ParamLimits

0xce24,	// (0x0001c151) list_double_graphic_heading_pane_g2

0xce35,	// (0x0001c162) list_double_graphic_heading_pane_g3_ParamLimits

0xce35,	// (0x0001c162) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001e974) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001e974) list_double_graphic_heading_pane_g

0xce69,	// (0x0001c196) list_double_graphic_heading_pane_t1_ParamLimits

0xce69,	// (0x0001c196) list_double_graphic_heading_pane_t1

0xce7f,	// (0x0001c1ac) list_double_graphic_heading_pane_t2_ParamLimits

0xce7f,	// (0x0001c1ac) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001e97b) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001e97b) list_double_graphic_heading_pane_t

0xcd90,	// (0x0001c0bd) list_double_time_pane_g1_ParamLimits

0xcd90,	// (0x0001c0bd) list_double_time_pane_g1

0xcc45,	// (0x0001bf72) list_double_time_pane_g2_ParamLimits

0xcc45,	// (0x0001bf72) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001e980) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001e980) list_double_time_pane_g

0xce91,	// (0x0001c1be) list_double_time_pane_t1_ParamLimits

0xce91,	// (0x0001c1be) list_double_time_pane_t1

0xcea7,	// (0x0001c1d4) list_double_time_pane_t2_ParamLimits

0xcea7,	// (0x0001c1d4) list_double_time_pane_t2

0xceb9,	// (0x0001c1e6) list_double_time_pane_t3_ParamLimits

0xceb9,	// (0x0001c1e6) list_double_time_pane_t3

0xcecb,	// (0x0001c1f8) list_double_time_pane_t4_ParamLimits

0xcecb,	// (0x0001c1f8) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001e985) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001e985) list_double_time_pane_t

0xcd31,	// (0x0001c05e) list_setting_pane_g1_ParamLimits

0xcd31,	// (0x0001c05e) list_setting_pane_g1

0xcd3d,	// (0x0001c06a) list_setting_pane_g2_ParamLimits

0xcd3d,	// (0x0001c06a) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001e98e) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001e98e) list_setting_pane_g

0xcedd,	// (0x0001c20a) list_setting_pane_t1_ParamLimits

0xcedd,	// (0x0001c20a) list_setting_pane_t1

0xcef4,	// (0x0001c221) list_setting_pane_t2_ParamLimits

0xcef4,	// (0x0001c221) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001e993) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001e993) list_setting_pane_t

0xcf31,	// (0x0001c25e) set_value_pane_cp_ParamLimits

0xcf31,	// (0x0001c25e) set_value_pane_cp

0xcd31,	// (0x0001c05e) list_setting_number_pane_g1_ParamLimits

0xcd31,	// (0x0001c05e) list_setting_number_pane_g1

0xcd3d,	// (0x0001c06a) list_setting_number_pane_g2_ParamLimits

0xcd3d,	// (0x0001c06a) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001e98e) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001e98e) list_setting_number_pane_g

0xcf3d,	// (0x0001c26a) list_setting_number_pane_t1_ParamLimits

0xcf3d,	// (0x0001c26a) list_setting_number_pane_t1

0xcf51,	// (0x0001c27e) list_setting_number_pane_t2_ParamLimits

0xcf51,	// (0x0001c27e) list_setting_number_pane_t2

0xcf68,	// (0x0001c295) list_setting_number_pane_t3_ParamLimits

0xcf68,	// (0x0001c295) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001e99a) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001e99a) list_setting_number_pane_t

0xcf31,	// (0x0001c25e) set_value_pane_ParamLimits

0xcf31,	// (0x0001c25e) set_value_pane

0x34cd,	// (0x000127fa) bg_set_opt_pane_ParamLimits

0x34cd,	// (0x000127fa) bg_set_opt_pane

0x34ee,	// (0x0001281b) set_value_pane_t1

0x34fc,	// (0x00012829) slider_set_pane_cp3

0x3505,	// (0x00012832) volume_small_pane_cp

0x350e,	// (0x0001283b) list_form_gen_pane

0x3517,	// (0x00012844) scroll_pane_cp8

0xcfab,	// (0x0001c2d8) form_field_data_pane_ParamLimits

0xcfab,	// (0x0001c2d8) form_field_data_pane

0xcfc2,	// (0x0001c2ef) form_field_data_wide_pane_ParamLimits

0xcfc2,	// (0x0001c2ef) form_field_data_wide_pane

0xcfe2,	// (0x0001c30f) form_field_popup_pane_ParamLimits

0xcfe2,	// (0x0001c30f) form_field_popup_pane

0xcffa,	// (0x0001c327) form_field_popup_wide_pane_ParamLimits

0xcffa,	// (0x0001c327) form_field_popup_wide_pane

0x35a4,	// (0x000128d1) form_field_slider_pane_ParamLimits

0x35a4,	// (0x000128d1) form_field_slider_pane

0x35b7,	// (0x000128e4) form_field_slider_wide_pane_ParamLimits

0x35b7,	// (0x000128e4) form_field_slider_wide_pane

0x35ca,	// (0x000128f7) data_form_pane

0xd021,	// (0x0001c34e) form_field_data_pane_t1

0x35fa,	// (0x00012927) input_focus_pane

0x3608,	// (0x00012935) data_form_wide_pane

0x3634,	// (0x00012961) form_field_data_wide_pane_t1

0x2e20,	// (0x0001214d) input_focus_pane_cp6

0xd03b,	// (0x0001c368) form_field_popup_pane_t1

0x35fa,	// (0x00012927) input_focus_pane_cp7

0x366d,	// (0x0001299a) list_form_pane

0x3681,	// (0x000129ae) form_field_popup_wide_pane_t1

0x35fa,	// (0x00012927) input_focus_pane_cp8

0x3696,	// (0x000129c3) list_form_wide_pane

0xd05d,	// (0x0001c38a) form_field_slider_pane_t1_ParamLimits

0xd05d,	// (0x0001c38a) form_field_slider_pane_t1

0xd075,	// (0x0001c3a2) form_field_slider_pane_t2_ParamLimits

0xd075,	// (0x0001c3a2) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001e9aa) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001e9aa) form_field_slider_pane_t

0x2ad0,	// (0x00011dfd) input_focus_pane_cp9_ParamLimits

0x2ad0,	// (0x00011dfd) input_focus_pane_cp9

0xd08a,	// (0x0001c3b7) slider_cont_pane_ParamLimits

0xd08a,	// (0x0001c3b7) slider_cont_pane

0x36e7,	// (0x00012a14) form_field_slider_wide_pane_t1_ParamLimits

0x36e7,	// (0x00012a14) form_field_slider_wide_pane_t1

0x36f9,	// (0x00012a26) form_field_slider_wide_pane_t2_ParamLimits

0x36f9,	// (0x00012a26) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001e9af) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001e9af) form_field_slider_wide_pane_t

0x2ad0,	// (0x00011dfd) input_focus_pane_cp10_ParamLimits

0x2ad0,	// (0x00011dfd) input_focus_pane_cp10

0xd09e,	// (0x0001c3cb) slider_cont_pane_cp1_ParamLimits

0xd09e,	// (0x0001c3cb) slider_cont_pane_cp1

0xd0b2,	// (0x0001c3df) slider_form_pane_cp

0x3727,	// (0x00012a54) input_focus_pane_g1

0x372f,	// (0x00012a5c) input_focus_pane_g2

0x3737,	// (0x00012a64) input_focus_pane_g3

0x373f,	// (0x00012a6c) input_focus_pane_g4

0x3747,	// (0x00012a74) input_focus_pane_g5

0x374f,	// (0x00012a7c) input_focus_pane_g6

0x3757,	// (0x00012a84) input_focus_pane_g7

0x375f,	// (0x00012a8c) input_focus_pane_g8

0x3767,	// (0x00012a94) input_focus_pane_g9

0x2751,	// (0x00011a7e) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001e9b4) input_focus_pane_g

0x53a8,	// (0x000146d5) wait_border_pane_g3_copy1

0xd0ba,	// (0x0001c3e7) data_form_pane_t1

0x2751,	// (0x00011a7e) wait_anim_pane_g1_copy1

0xdcfc,	// (0x0001d029) data_form_wide_pane_t1

0xd0d4,	// (0x0001c401) list_form_graphic_pane_cp_ParamLimits

0xd0d4,	// (0x0001c401) list_form_graphic_pane_cp

0x62d5,	// (0x00015602) slider_form_pane_g1

0x62de,	// (0x0001560b) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001ecb2) slider_form_pane_g

0xd0e7,	// (0x0001c414) list_form_graphic_pane_ParamLimits

0xd0e7,	// (0x0001c414) list_form_graphic_pane

0x37a1,	// (0x00012ace) list_form_graphic_pane_g1

0x37a9,	// (0x00012ad6) list_form_graphic_pane_t1_ParamLimits

0x37a9,	// (0x00012ad6) list_form_graphic_pane_t1

0x283b,	// (0x00011b68) list_highlight_pane_cp5_ParamLimits

0x283b,	// (0x00011b68) list_highlight_pane_cp5

0x37be,	// (0x00012aeb) find_pane_g1

0x37c7,	// (0x00012af4) input_find_pane

0x37d0,	// (0x00012afd) input_find_pane_g1_ParamLimits

0x37d0,	// (0x00012afd) input_find_pane_g1

0x37dc,	// (0x00012b09) input_find_pane_t1_ParamLimits

0x37dc,	// (0x00012b09) input_find_pane_t1

0x37f1,	// (0x00012b1e) input_find_pane_t2_ParamLimits

0x37f1,	// (0x00012b1e) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001e9c9) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001e9c9) input_find_pane_t

0x3806,	// (0x00012b33) input_focus_pane_cp5_ParamLimits

0x3806,	// (0x00012b33) input_focus_pane_cp5

0x3820,	// (0x00012b4d) bg_popup_window_pane_cp2_ParamLimits

0x3820,	// (0x00012b4d) bg_popup_window_pane_cp2

0x382d,	// (0x00012b5a) listscroll_menu_pane_ParamLimits

0x382d,	// (0x00012b5a) listscroll_menu_pane

0xd105,	// (0x0001c432) popup_submenu_window_ParamLimits

0xd105,	// (0x0001c432) popup_submenu_window

0x3861,	// (0x00012b8e) find_popup_pane_g1

0x3869,	// (0x00012b96) input_popup_find_pane_cp

0x3806,	// (0x00012b33) input_focus_pane_cp4_ParamLimits

0x3806,	// (0x00012b33) input_focus_pane_cp4

0x3881,	// (0x00012bae) input_popup_find_pane_t1_ParamLimits

0x3881,	// (0x00012bae) input_popup_find_pane_t1

0x275b,	// (0x00011a88) bg_popup_sub_pane_cp

0x38af,	// (0x00012bdc) listscroll_popup_sub_pane

0x38b7,	// (0x00012be4) list_submenu_pane_ParamLimits

0x38b7,	// (0x00012be4) list_submenu_pane

0x38c8,	// (0x00012bf5) scroll_pane_cp4

0x38d0,	// (0x00012bfd) list_single_popup_submenu_pane_ParamLimits

0x38d0,	// (0x00012bfd) list_single_popup_submenu_pane

0x38e4,	// (0x00012c11) list_single_popup_submenu_pane_g1

0x38ec,	// (0x00012c19) list_single_popup_submenu_pane_t1_ParamLimits

0x38ec,	// (0x00012c19) list_single_popup_submenu_pane_t1

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp1_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp1

0xd13b,	// (0x0001c468) tabs_2_active_pane_g1

0xd143,	// (0x0001c470) tabs_2_active_pane_t1

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp1_ParamLimits

0x2ad0,	// (0x00011dfd) bg_passive_tab_pane_cp1

0xd13b,	// (0x0001c468) tabs_2_passive_pane_g1

0xd143,	// (0x0001c470) tabs_2_passive_pane_t1

0x283b,	// (0x00011b68) bg_active_tab_pane_cp4

0xd155,	// (0x0001c482) tabs_2_long_active_pane_t1

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp4

0x12a3,	// (0x000105d0) list_single_midp_graphic_pane_g4_ParamLimits

0x283b,	// (0x00011b68) bg_active_tab_pane_cp5

0xd168,	// (0x0001c495) tabs_3_long_active_pane_t1

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp5

0x12a3,	// (0x000105d0) list_single_midp_graphic_pane_g4

0x283b,	// (0x00011b68) bg_popup_window_pane_cp13_ParamLimits

0x283b,	// (0x00011b68) bg_popup_window_pane_cp13

0x3963,	// (0x00012c90) listscroll_popup_fast_pane_ParamLimits

0x3963,	// (0x00012c90) listscroll_popup_fast_pane

0x396f,	// (0x00012c9c) grid_popup_fast_pane_ParamLimits

0x396f,	// (0x00012c9c) grid_popup_fast_pane

0x3981,	// (0x00012cae) scroll_pane_cp9_ParamLimits

0x3981,	// (0x00012cae) scroll_pane_cp9

0x81d6,	// (0x00017503) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x81d6,	// (0x00017503) list_single_graphic_hl_pane_t1_cp2

0x39a5,	// (0x00012cd2) input_focus_pane_cp20_ParamLimits

0x39a5,	// (0x00012cd2) input_focus_pane_cp20

0x39b3,	// (0x00012ce0) query_popup_data_pane_t1_ParamLimits

0x39b3,	// (0x00012ce0) query_popup_data_pane_t1

0x39c6,	// (0x00012cf3) query_popup_data_pane_t2_ParamLimits

0x39c6,	// (0x00012cf3) query_popup_data_pane_t2

0x3a0c,	// (0x00012d39) query_popup_data_pane_t3_ParamLimits

0x3a0c,	// (0x00012d39) query_popup_data_pane_t3

0x3a4d,	// (0x00012d7a) query_popup_data_pane_t4_ParamLimits

0x3a4d,	// (0x00012d7a) query_popup_data_pane_t4

0x3a89,	// (0x00012db6) query_popup_data_pane_t5_ParamLimits

0x3a89,	// (0x00012db6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001e9ce) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001e9ce) query_popup_data_pane_t

0x3727,	// (0x00012a54) bg_set_opt_pane_g1

0x372f,	// (0x00012a5c) bg_set_opt_pane_g2

0x3737,	// (0x00012a64) bg_set_opt_pane_g3

0x373f,	// (0x00012a6c) bg_set_opt_pane_g4

0x3747,	// (0x00012a74) bg_set_opt_pane_g5

0x374f,	// (0x00012a7c) bg_set_opt_pane_g6

0x3757,	// (0x00012a84) bg_set_opt_pane_g7

0x375f,	// (0x00012a8c) bg_set_opt_pane_g8

0x3767,	// (0x00012a94) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001e9d9) bg_set_opt_pane_g

0x08cd,	// (0x0000fbfa) control_top_pane_stacon_ParamLimits

0x08cd,	// (0x0000fbfa) control_top_pane_stacon

0x0920,	// (0x0000fc4d) signal_pane_stacon_ParamLimits

0x0920,	// (0x0000fc4d) signal_pane_stacon

0x40d6,	// (0x00013403) stacon_top_pane_g1_ParamLimits

0x40d6,	// (0x00013403) stacon_top_pane_g1

0x0945,	// (0x0000fc72) title_pane_stacon_ParamLimits

0x0945,	// (0x0000fc72) title_pane_stacon

0x096f,	// (0x0000fc9c) uni_indicator_pane_stacon_ParamLimits

0x096f,	// (0x0000fc9c) uni_indicator_pane_stacon

0x0984,	// (0x0000fcb1) battery_pane_stacon_ParamLimits

0x0984,	// (0x0000fcb1) battery_pane_stacon

0x09c8,	// (0x0000fcf5) control_bottom_pane_stacon_ParamLimits

0x09c8,	// (0x0000fcf5) control_bottom_pane_stacon

0x09eb,	// (0x0000fd18) navi_pane_stacon_ParamLimits

0x09eb,	// (0x0000fd18) navi_pane_stacon

0x40f8,	// (0x00013425) stacon_bottom_pane_g1_ParamLimits

0x40f8,	// (0x00013425) stacon_bottom_pane_g1

0x0637,	// (0x0000f964) aid_levels_signal_lsc_ParamLimits

0x0637,	// (0x0000f964) aid_levels_signal_lsc

0x064e,	// (0x0000f97b) signal_pane_stacon_g1_ParamLimits

0x064e,	// (0x0000f97b) signal_pane_stacon_g1

0x0662,	// (0x0000f98f) signal_pane_stacon_g2_ParamLimits

0x0662,	// (0x0000f98f) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001e9ec) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001e9ec) signal_pane_stacon_g

0x0697,	// (0x0000f9c4) title_pane_stacon_t1_ParamLimits

0x0697,	// (0x0000f9c4) title_pane_stacon_t1

0x3acd,	// (0x00012dfa) uni_indicator_pane_stacon_g1

0x3ad7,	// (0x00012e04) uni_indicator_pane_stacon_g2

0x3ae1,	// (0x00012e0e) uni_indicator_pane_stacon_g3

0x3aeb,	// (0x00012e18) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001e9f8) uni_indicator_pane_stacon_g

0x06bc,	// (0x0000f9e9) control_top_pane_stacon_g1

0x06c4,	// (0x0000f9f1) control_top_pane_stacon_t1_ParamLimits

0x06c4,	// (0x0000f9f1) control_top_pane_stacon_t1

0x06fb,	// (0x0000fa28) aid_levels_battery_lsc_ParamLimits

0x06fb,	// (0x0000fa28) aid_levels_battery_lsc

0x0713,	// (0x0000fa40) battery_pane_stacon_g1_ParamLimits

0x0713,	// (0x0000fa40) battery_pane_stacon_g1

0x0726,	// (0x0000fa53) battery_pane_stacon_g2_ParamLimits

0x0726,	// (0x0000fa53) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001ea01) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001ea01) battery_pane_stacon_g

0x0764,	// (0x0000fa91) navi_icon_pane_stacon

0x0778,	// (0x0000faa5) navi_navi_pane_stacon

0x0764,	// (0x0000fa91) navi_text_pane_stacon

0x06bc,	// (0x0000f9e9) control_bottom_pane_stacon_g1

0x078c,	// (0x0000fab9) control_bottom_pane_stacon_t1_ParamLimits

0x078c,	// (0x0000fab9) control_bottom_pane_stacon_t1

0xd17a,	// (0x0001c4a7) grid_app_pane_ParamLimits

0xd17a,	// (0x0001c4a7) grid_app_pane

0xd1b0,	// (0x0001c4dd) scroll_pane_cp15_ParamLimits

0xd1b0,	// (0x0001c4dd) scroll_pane_cp15

0xd1c5,	// (0x0001c4f2) cell_app_pane_ParamLimits

0xd1c5,	// (0x0001c4f2) cell_app_pane

0xd20c,	// (0x0001c539) cell_app_pane_g1_ParamLimits

0xd20c,	// (0x0001c539) cell_app_pane_g1

0x3b8a,	// (0x00012eb7) cell_app_pane_g2_ParamLimits

0x3b8a,	// (0x00012eb7) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001ea06) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001ea06) cell_app_pane_g

0xd22c,	// (0x0001c559) cell_app_pane_t1_ParamLimits

0xd22c,	// (0x0001c559) cell_app_pane_t1

0x3bad,	// (0x00012eda) grid_highlight_pane_ParamLimits

0x3bad,	// (0x00012eda) grid_highlight_pane

0x3727,	// (0x00012a54) cell_highlight_pane_g1

0x372f,	// (0x00012a5c) cell_highlight_pane_g2

0x3737,	// (0x00012a64) cell_highlight_pane_g3

0x373f,	// (0x00012a6c) cell_highlight_pane_g4

0x3747,	// (0x00012a74) cell_highlight_pane_g5

0x374f,	// (0x00012a7c) cell_highlight_pane_g6

0x3757,	// (0x00012a84) cell_highlight_pane_g7

0x375f,	// (0x00012a8c) cell_highlight_pane_g8

0x3767,	// (0x00012a94) cell_highlight_pane_g9

0x2751,	// (0x00011a7e) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001e9b4) cell_highlight_pane_g

0x3bbe,	// (0x00012eeb) bg_scroll_pane

0x07d6,	// (0x0000fb03) scroll_handle_pane

0x3c05,	// (0x00012f32) scroll_bg_pane_g1

0x3c1a,	// (0x00012f47) scroll_bg_pane_g2

0x3c32,	// (0x00012f5f) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001ea0b) scroll_bg_pane_g

0x3c47,	// (0x00012f74) scroll_handle_focus_pane_ParamLimits

0x3c47,	// (0x00012f74) scroll_handle_focus_pane

0x3c05,	// (0x00012f32) scroll_handle_pane_g1

0x3c54,	// (0x00012f81) scroll_handle_pane_g2

0x3c32,	// (0x00012f5f) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001ea12) scroll_handle_pane_g

0x3806,	// (0x00012b33) bg_popup_sub_pane_cp21_ParamLimits

0x3806,	// (0x00012b33) bg_popup_sub_pane_cp21

0x3c68,	// (0x00012f95) popup_fep_japan_predictive_window_t1_ParamLimits

0x3c68,	// (0x00012f95) popup_fep_japan_predictive_window_t1

0x3c82,	// (0x00012faf) popup_fep_japan_predictive_window_t2_ParamLimits

0x3c82,	// (0x00012faf) popup_fep_japan_predictive_window_t2

0x3cb5,	// (0x00012fe2) popup_fep_japan_predictive_window_t3_ParamLimits

0x3cb5,	// (0x00012fe2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001ea19) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001ea19) popup_fep_japan_predictive_window_t

0x275b,	// (0x00011a88) bg_popup_sub_pane_cp23

0x3cec,	// (0x00013019) listscroll_japin_cand_pane

0x3cf4,	// (0x00013021) popup_fep_japan_candidate_window_t1

0x3d02,	// (0x0001302f) candidate_pane_ParamLimits

0x3d02,	// (0x0001302f) candidate_pane

0x3d14,	// (0x00013041) scroll_pane_cp30

0x3d1c,	// (0x00013049) list_single_popup_jap_candidate_pane_ParamLimits

0x3d1c,	// (0x00013049) list_single_popup_jap_candidate_pane

0x275b,	// (0x00011a88) list_highlight_pane_cp30

0x3d30,	// (0x0001305d) list_single_popup_jap_candidate_pane_t1

0x3d3f,	// (0x0001306c) level_1_signal

0x3d4c,	// (0x00013079) level_2_signal

0x3d59,	// (0x00013086) level_3_signal

0x3d66,	// (0x00013093) level_4_signal

0x3d73,	// (0x000130a0) level_5_signal

0x3d80,	// (0x000130ad) level_6_signal

0x3d8d,	// (0x000130ba) level_7_signal

0x3d3f,	// (0x0001306c) level_1_battery

0x3d4c,	// (0x00013079) level_2_battery

0x3d59,	// (0x00013086) level_3_battery

0x3d66,	// (0x00013093) level_4_battery

0x3d73,	// (0x000130a0) level_5_battery

0x3d80,	// (0x000130ad) level_6_battery

0x3d8d,	// (0x000130ba) level_7_battery

0x3db2,	// (0x000130df) list_menu_pane_ParamLimits

0x3db2,	// (0x000130df) list_menu_pane

0x3dc8,	// (0x000130f5) scroll_pane_cp25_ParamLimits

0x3dc8,	// (0x000130f5) scroll_pane_cp25

0x3de1,	// (0x0001310e) list_double2_graphic_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double2_graphic_pane_cp2

0x3de1,	// (0x0001310e) list_double2_large_graphic_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double2_large_graphic_pane_cp2

0x3de1,	// (0x0001310e) list_double2_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double2_pane_cp2

0x3de1,	// (0x0001310e) list_double_graphic_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double_graphic_pane_cp2

0x3de1,	// (0x0001310e) list_double_large_graphic_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double_large_graphic_pane_cp2

0x3de1,	// (0x0001310e) list_double_number_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double_number_pane_cp2

0x3de1,	// (0x0001310e) list_double_pane_cp2_ParamLimits

0x3de1,	// (0x0001310e) list_double_pane_cp2

0xd254,	// (0x0001c581) list_single_2graphic_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_2graphic_pane_cp2

0xd254,	// (0x0001c581) list_single_graphic_heading_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_graphic_heading_pane_cp2

0xd254,	// (0x0001c581) list_single_graphic_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_graphic_pane_cp2

0xd254,	// (0x0001c581) list_single_heading_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_heading_pane_cp2

0x3e1b,	// (0x00013148) list_single_large_graphic_pane_cp2_ParamLimits

0x3e1b,	// (0x00013148) list_single_large_graphic_pane_cp2

0xd254,	// (0x0001c581) list_single_number_heading_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_number_heading_pane_cp2

0xd254,	// (0x0001c581) list_single_number_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_number_pane_cp2

0xd254,	// (0x0001c581) list_single_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_pane_cp2

0x3e96,	// (0x000131c3) bg_popup_sub_pane_cp22

0x0885,	// (0x0000fbb2) popup_side_volume_key_window_g1

0x08a9,	// (0x0000fbd6) popup_side_volume_key_window_t1

0x08c5,	// (0x0000fbf2) volume_small_pane_cp1

0x2ad0,	// (0x00011dfd) bg_popup_sub_pane_cp24_ParamLimits

0x2ad0,	// (0x00011dfd) bg_popup_sub_pane_cp24

0x3eac,	// (0x000131d9) fep_china_uni_candidate_pane_ParamLimits

0x3eac,	// (0x000131d9) fep_china_uni_candidate_pane

0x3ec0,	// (0x000131ed) fep_china_uni_entry_pane

0x3ed0,	// (0x000131fd) popup_fep_china_uni_window_g1

0x3eec,	// (0x00013219) fep_china_uni_entry_pane_g1

0x3ef4,	// (0x00013221) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001ea4a) fep_china_uni_entry_pane_g

0x3efc,	// (0x00013229) fep_entry_item_pane

0x3f06,	// (0x00013233) fep_candidate_item_pane

0x3f0e,	// (0x0001323b) fep_china_uni_candidate_pane_g1

0x3f16,	// (0x00013243) fep_china_uni_candidate_pane_g2

0x3f1e,	// (0x0001324b) fep_china_uni_candidate_pane_g3

0x3f26,	// (0x00013253) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001ea4f) fep_china_uni_candidate_pane_g

0x2751,	// (0x00011a7e) fep_entry_item_pane_g1

0x3f2e,	// (0x0001325b) fep_entry_item_pane_t1_ParamLimits

0x3f2e,	// (0x0001325b) fep_entry_item_pane_t1

0x3f44,	// (0x00013271) fep_candidate_item_pane_t1_ParamLimits

0x3f44,	// (0x00013271) fep_candidate_item_pane_t1

0x3f59,	// (0x00013286) fep_candidate_item_pane_t2_ParamLimits

0x3f59,	// (0x00013286) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001ea58) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001ea58) fep_candidate_item_pane_t

0x283b,	// (0x00011b68) list_highlight_pane_cp31_ParamLimits

0x283b,	// (0x00011b68) list_highlight_pane_cp31

0x3f6b,	// (0x00013298) level_1_signal_lsc

0x3f74,	// (0x000132a1) level_2_signal_lsc

0x3f7d,	// (0x000132aa) level_3_signal_lsc

0x3f86,	// (0x000132b3) level_4_signal_lsc

0x3f8f,	// (0x000132bc) level_5_signal_lsc

0x3f98,	// (0x000132c5) level_6_signal_lsc

0x3fa1,	// (0x000132ce) level_7_signal_lsc

0x3fa1,	// (0x000132ce) level_1_battery_lsc

0x3faa,	// (0x000132d7) level_2_battery_lsc

0x3fb3,	// (0x000132e0) level_3_battery_lsc

0x3fbc,	// (0x000132e9) level_4_battery_lsc

0x3fc5,	// (0x000132f2) level_5_battery_lsc

0x3fce,	// (0x000132fb) level_6_battery_lsc

0x3f6b,	// (0x00013298) level_7_battery_lsc

0x3fd7,	// (0x00013304) scroll_handle_focus_pane_g1

0x3fe0,	// (0x0001330d) scroll_handle_focus_pane_g2

0x3fe9,	// (0x00013316) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001ea5d) scroll_handle_focus_pane_g

0x3ff2,	// (0x0001331f) list_single_2graphic_pane_g1_ParamLimits

0x3ff2,	// (0x0001331f) list_single_2graphic_pane_g1

0xcc34,	// (0x0001bf61) list_single_2graphic_pane_g2_ParamLimits

0xcc34,	// (0x0001bf61) list_single_2graphic_pane_g2

0x306e,	// (0x0001239b) list_single_2graphic_pane_g3_ParamLimits

0x306e,	// (0x0001239b) list_single_2graphic_pane_g3

0x3ffe,	// (0x0001332b) list_single_2graphic_pane_g4_ParamLimits

0x3ffe,	// (0x0001332b) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001ea64) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001ea64) list_single_2graphic_pane_g

0x400f,	// (0x0001333c) list_single_2graphic_pane_t1_ParamLimits

0x400f,	// (0x0001333c) list_single_2graphic_pane_t1

0xd2e1,	// (0x0001c60e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd2e1,	// (0x0001c60e) list_double2_graphic_large_graphic_pane_g1

0xcdeb,	// (0x0001c118) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xcdeb,	// (0x0001c118) list_double2_graphic_large_graphic_pane_g2

0xcd3d,	// (0x0001c06a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xcd3d,	// (0x0001c06a) list_double2_graphic_large_graphic_pane_g3

0xd2f3,	// (0x0001c620) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd2f3,	// (0x0001c620) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001ea6d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001ea6d) list_double2_graphic_large_graphic_pane_g

0xd2ff,	// (0x0001c62c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd2ff,	// (0x0001c62c) list_double2_graphic_large_graphic_pane_t1

0xd315,	// (0x0001c642) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd315,	// (0x0001c642) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001ea76) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001ea76) list_double2_graphic_large_graphic_pane_t

0x41bf,	// (0x000134ec) popup_fast_swap_window_ParamLimits

0x41bf,	// (0x000134ec) popup_fast_swap_window

0x41db,	// (0x00013508) popup_side_volume_key_window

0x41f5,	// (0x00013522) stacon_top_pane

0x41ff,	// (0x0001352c) status_pane_ParamLimits

0x41ff,	// (0x0001352c) status_pane

0xd38f,	// (0x0001c6bc) status_small_pane

0x275b,	// (0x00011a88) control_pane

0x275b,	// (0x00011a88) stacon_bottom_pane

0x3517,	// (0x00012844) scroll_pane_cp121

0x350e,	// (0x0001283b) set_content_pane

0xd327,	// (0x0001c654) bg_active_tab_pane_g1_cp1

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp1

0xd330,	// (0x0001c65d) bg_active_tab_pane_g3_cp1

0xd327,	// (0x0001c654) bg_passive_tab_pane_g1_cp1

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp1

0xd330,	// (0x0001c65d) bg_passive_tab_pane_g3_cp1

0xd339,	// (0x0001c666) bg_active_tab_pane_g1_cp2

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp2

0xd342,	// (0x0001c66f) bg_active_tab_pane_g3_cp2

0xd339,	// (0x0001c666) bg_passive_tab_pane_g1_cp2

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp2

0xd342,	// (0x0001c66f) bg_passive_tab_pane_g3_cp2

0x40ae,	// (0x000133db) bg_active_tab_pane_g1_cp3

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp3

0x40b7,	// (0x000133e4) bg_active_tab_pane_g3_cp3

0x40ae,	// (0x000133db) bg_passive_tab_pane_g1_cp3

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp3

0x40b7,	// (0x000133e4) bg_passive_tab_pane_g3_cp3

0xd34b,	// (0x0001c678) bg_active_tab_pane_g1_cp4

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp4

0xd356,	// (0x0001c683) bg_active_tab_pane_g3_cp4

0xd34b,	// (0x0001c678) bg_passive_tab_pane_g1_cp4

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp4

0xd356,	// (0x0001c683) bg_passive_tab_pane_g3_cp4

0x4114,	// (0x00013441) bg_active_tab_pane_g1_cp5

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp5

0x411d,	// (0x0001344a) bg_active_tab_pane_g3_cp5

0x4114,	// (0x00013441) bg_passive_tab_pane_g1_cp5

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp5

0x411d,	// (0x0001344a) bg_passive_tab_pane_g3_cp5

0x6a01,	// (0x00015d2e) list_set_graphic_pane_ParamLimits

0x6a01,	// (0x00015d2e) list_set_graphic_pane

0x275b,	// (0x00011a88) bg_set_opt_pane_cp4

0xd361,	// (0x0001c68e) list_set_graphic_pane_g1_ParamLimits

0xd361,	// (0x0001c68e) list_set_graphic_pane_g1

0xd36d,	// (0x0001c69a) list_set_graphic_pane_g2_ParamLimits

0xd36d,	// (0x0001c69a) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001ea7b) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001ea7b) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x0001ee05) volume_small_pane_cp_g

0x4172,	// (0x0001349f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4172,	// (0x0001349f) list_double2_large_graphic_pane_g1_cp2

0x417e,	// (0x000134ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x417e,	// (0x000134ab) list_double2_large_graphic_pane_g2_cp2

0x418f,	// (0x000134bc) list_double2_large_graphic_pane_g3_cp2

0x4197,	// (0x000134c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4197,	// (0x000134c4) list_double2_large_graphic_pane_t1_cp2

0x41ad,	// (0x000134da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41ad,	// (0x000134da) list_double2_large_graphic_pane_t2_cp2

0x5e81,	// (0x000151ae) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e81,	// (0x000151ae) list_double_large_graphic_pane_g1_cp2

0x5e92,	// (0x000151bf) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e92,	// (0x000151bf) list_double_large_graphic_pane_g2_cp2

0x4326,	// (0x00013653) list_double_large_graphic_pane_g3_cp2

0x5ea3,	// (0x000151d0) list_double_large_graphic_pane_g4_cp

0x5eab,	// (0x000151d8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5eab,	// (0x000151d8) list_double_large_graphic_pane_t1_cp2

0x5ec2,	// (0x000151ef) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5ec2,	// (0x000151ef) list_double_large_graphic_pane_t2_cp2

0x4218,	// (0x00013545) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4218,	// (0x00013545) list_double2_graphic_pane_g1_cp2

0x4226,	// (0x00013553) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4226,	// (0x00013553) list_double2_graphic_pane_g2_cp2

0x4237,	// (0x00013564) list_double2_graphic_pane_g3_cp2

0x4241,	// (0x0001356e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4241,	// (0x0001356e) list_double2_graphic_pane_t1_cp2

0x4257,	// (0x00013584) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4257,	// (0x00013584) list_double2_graphic_pane_t2_cp2

0x4269,	// (0x00013596) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4269,	// (0x00013596) list_single_number_heading_pane_g1_cp2

0x4275,	// (0x000135a2) list_single_number_heading_pane_g2_cp2

0x427d,	// (0x000135aa) list_single_number_heading_pane_t1_cp2_ParamLimits

0x427d,	// (0x000135aa) list_single_number_heading_pane_t1_cp2

0x4293,	// (0x000135c0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4293,	// (0x000135c0) list_single_number_heading_pane_t2_cp2

0x42a5,	// (0x000135d2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42a5,	// (0x000135d2) list_single_number_heading_pane_t3_cp2

0x4269,	// (0x00013596) list_single_heading_pane_g1_cp2_ParamLimits

0x4269,	// (0x00013596) list_single_heading_pane_g1_cp2

0x4275,	// (0x000135a2) list_single_heading_pane_g2_cp2

0x427d,	// (0x000135aa) list_single_heading_pane_t1_cp2_ParamLimits

0x427d,	// (0x000135aa) list_single_heading_pane_t1_cp2

0x5c8b,	// (0x00014fb8) list_single_heading_pane_t2_cp2_ParamLimits

0x5c8b,	// (0x00014fb8) list_single_heading_pane_t2_cp2

0x5bd3,	// (0x00014f00) list_double_graphic_pane_g1_cp2_ParamLimits

0x5bd3,	// (0x00014f00) list_double_graphic_pane_g1_cp2

0x5bdf,	// (0x00014f0c) list_double_graphic_pane_g2_cp2_ParamLimits

0x5bdf,	// (0x00014f0c) list_double_graphic_pane_g2_cp2

0x5bee,	// (0x00014f1b) list_double_graphic_pane_g3_cp2

0x5bf6,	// (0x00014f23) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bf6,	// (0x00014f23) list_double_graphic_pane_t1_cp2

0x5c0c,	// (0x00014f39) list_double_graphic_pane_t2_cp2_ParamLimits

0x5c0c,	// (0x00014f39) list_double_graphic_pane_t2_cp2

0x431a,	// (0x00013647) list_double_number_pane_g1_cp2_ParamLimits

0x431a,	// (0x00013647) list_double_number_pane_g1_cp2

0x4326,	// (0x00013653) list_double_number_pane_g2_cp2

0x5b97,	// (0x00014ec4) list_double_number_pane_t1_cp2_ParamLimits

0x5b97,	// (0x00014ec4) list_double_number_pane_t1_cp2

0x5bab,	// (0x00014ed8) list_double_number_pane_t2_cp2_ParamLimits

0x5bab,	// (0x00014ed8) list_double_number_pane_t2_cp2

0x5bc1,	// (0x00014eee) list_double_number_pane_t3_cp2_ParamLimits

0x5bc1,	// (0x00014eee) list_double_number_pane_t3_cp2

0x5a80,	// (0x00014dad) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a80,	// (0x00014dad) list_single_graphic_pane_g1_cp2

0x3062,	// (0x0001238f) list_single_graphic_pane_g2_cp2_ParamLimits

0x3062,	// (0x0001238f) list_single_graphic_pane_g2_cp2

0x437e,	// (0x000136ab) list_single_graphic_pane_g3_cp2

0x5a56,	// (0x00014d83) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a56,	// (0x00014d83) list_single_graphic_pane_t1_cp2

0x3062,	// (0x0001238f) list_single_number_pane_g1_cp2_ParamLimits

0x3062,	// (0x0001238f) list_single_number_pane_g1_cp2

0x437e,	// (0x000136ab) list_single_number_pane_g2_cp2

0x5a56,	// (0x00014d83) list_single_number_pane_t1_cp2_ParamLimits

0x5a56,	// (0x00014d83) list_single_number_pane_t1_cp2

0x5a6c,	// (0x00014d99) list_single_number_pane_t2_cp2_ParamLimits

0x5a6c,	// (0x00014d99) list_single_number_pane_t2_cp2

0x417e,	// (0x000134ab) list_double2_pane_g1_cp2_ParamLimits

0x417e,	// (0x000134ab) list_double2_pane_g1_cp2

0x418f,	// (0x000134bc) list_double2_pane_g2_cp2

0x42f2,	// (0x0001361f) list_double2_pane_t1_cp2_ParamLimits

0x42f2,	// (0x0001361f) list_double2_pane_t1_cp2

0x4308,	// (0x00013635) list_double2_pane_t2_cp2_ParamLimits

0x4308,	// (0x00013635) list_double2_pane_t2_cp2

0x431a,	// (0x00013647) list_double_pane_g1_cp2_ParamLimits

0x431a,	// (0x00013647) list_double_pane_g1_cp2

0x4326,	// (0x00013653) list_double_pane_g2_cp2

0x432e,	// (0x0001365b) list_double_pane_t1_cp2_ParamLimits

0x432e,	// (0x0001365b) list_double_pane_t1_cp2

0x4344,	// (0x00013671) list_double_pane_t2_cp2_ParamLimits

0x4344,	// (0x00013671) list_double_pane_t2_cp2

0x436e,	// (0x0001369b) list_single_pane_cp2_g3

0x3062,	// (0x0001238f) list_single_pane_g1_cp2_ParamLimits

0x3062,	// (0x0001238f) list_single_pane_g1_cp2

0x437e,	// (0x000136ab) list_single_pane_g2_cp2

0x4386,	// (0x000136b3) list_single_pane_t1_cp2_ParamLimits

0x4386,	// (0x000136b3) list_single_pane_t1_cp2

0x439e,	// (0x000136cb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x439e,	// (0x000136cb) list_single_large_graphic_pane_g1_cp2

0x43aa,	// (0x000136d7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43aa,	// (0x000136d7) list_single_large_graphic_pane_g2_cp2

0x43b6,	// (0x000136e3) list_single_large_graphic_pane_g3_cp2

0x43be,	// (0x000136eb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x43be,	// (0x000136eb) list_single_large_graphic_pane_g4_cp1

0x43d8,	// (0x00013705) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x43d8,	// (0x00013705) list_single_large_graphic_pane_t1_cp2

0x5a22,	// (0x00014d4f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5a22,	// (0x00014d4f) list_single_graphic_heading_pane_g1_cp2

0x59ef,	// (0x00014d1c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x59ef,	// (0x00014d1c) list_single_graphic_heading_pane_g4_cp2

0x437e,	// (0x000136ab) list_single_graphic_heading_pane_g5_cp2

0x5a2e,	// (0x00014d5b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5a2e,	// (0x00014d5b) list_single_graphic_heading_pane_t1_cp2

0x5a44,	// (0x00014d71) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5a44,	// (0x00014d71) list_single_graphic_heading_pane_t2_cp2

0x59e3,	// (0x00014d10) list_single_2graphic_pane_g1_cp2_ParamLimits

0x59e3,	// (0x00014d10) list_single_2graphic_pane_g1_cp2

0x59ef,	// (0x00014d1c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x59ef,	// (0x00014d1c) list_single_2graphic_pane_g2_cp2

0x437e,	// (0x000136ab) list_single_2graphic_pane_g3_cp2

0x5a00,	// (0x00014d2d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5a00,	// (0x00014d2d) list_single_2graphic_pane_g4_cp2

0x5a0c,	// (0x00014d39) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5a0c,	// (0x00014d39) list_single_2graphic_pane_t1_cp2

0x2751,	// (0x00011a7e) list_highlight_pane_g10_cp1

0x55bb,	// (0x000148e8) list_highlight_pane_g1_cp1

0x55c3,	// (0x000148f0) list_highlight_pane_g2_cp1

0x55cb,	// (0x000148f8) list_highlight_pane_g3_cp1

0x55d3,	// (0x00014900) list_highlight_pane_g4_cp1

0x55db,	// (0x00014908) list_highlight_pane_g5_cp1

0x55e3,	// (0x00014910) list_highlight_pane_g6_cp1

0x55eb,	// (0x00014918) list_highlight_pane_g7_cp1

0x55f3,	// (0x00014920) list_highlight_pane_g8_cp1

0x55fb,	// (0x00014928) list_highlight_pane_g9_cp1

0xda19,	// (0x0001cd46) form_field_slider_pane_t3

0xda29,	// (0x0001cd56) form_field_slider_pane_t4

0x54ef,	// (0x0001481c) slider_form_pane_ParamLimits

0x54ef,	// (0x0001481c) slider_form_pane

0x275b,	// (0x00011a88) control_abbreviations

0x275b,	// (0x00011a88) control_conventions

0x275b,	// (0x00011a88) control_definitions

0x275b,	// (0x00011a88) format_table_attribute

0x5cd5,	// (0x00015002) bg_popup_preview_window_pane_g9

0x275b,	// (0x00011a88) format_table_data2

0x275b,	// (0x00011a88) format_table_data3

0x275b,	// (0x00011a88) format_table_data_example

0x0008,

0x275b,	// (0x00011a88) intro_purpose

0xf8e5,	// (0x0001ec12) bg_popup_preview_window_pane_g

0x275b,	// (0x00011a88) texts_category

0x275b,	// (0x00011a88) texts_graphics

0x43ee,	// (0x0001371b) text_digital

0x43fd,	// (0x0001372a) text_primary

0x440c,	// (0x00013739) text_primary_small

0x441b,	// (0x00013748) text_secondary

0x442a,	// (0x00013757) text_title

0x64fb,	// (0x00015828) bg_passive_tab_pane_g1_cp3_srt

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp3_srt

0x6504,	// (0x00015831) bg_passive_tab_pane_g3_cp3_srt

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp3_srt_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp3_srt

0x650d,	// (0x0001583a) tabs_4_active_pane_srt_g1

0xddb8,	// (0x0001d0e5) tabs_4_active_pane_srt_t1_ParamLimits

0xddb8,	// (0x0001d0e5) tabs_4_active_pane_srt_t1

0x64fb,	// (0x00015828) bg_active_tab_pane_g1_cp3_copy1

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp3_copy1

0x6504,	// (0x00015831) bg_active_tab_pane_g3_cp3_copy1

0x283b,	// (0x00011b68) tabs_2_long_active_pane_srt_ParamLimits

0x283b,	// (0x00011b68) tabs_2_long_active_pane_srt

0x283b,	// (0x00011b68) tabs_2_long_passive_pane_srt_ParamLimits

0x283b,	// (0x00011b68) tabs_2_long_passive_pane_srt

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp4_srt

0x6116,	// (0x00015443) bg_passive_tab_pane_g1_cp4_srt

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp4_srt

0x611f,	// (0x0001544c) bg_passive_tab_pane_g3_cp4_srt

0x283b,	// (0x00011b68) bg_active_tab_pane_cp4_srt_ParamLimits

0x283b,	// (0x00011b68) bg_active_tab_pane_cp4_srt

0xdb93,	// (0x0001cec0) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb93,	// (0x0001cec0) tabs_2_long_active_pane_srt_t1

0x6116,	// (0x00015443) bg_active_tab_pane_g1_cp4_srt

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp4_srt

0x611f,	// (0x0001544c) bg_active_tab_pane_g3_cp4_srt

0x2ad0,	// (0x00011dfd) tabs_3_long_active_pane_srt_ParamLimits

0x2ad0,	// (0x00011dfd) tabs_3_long_active_pane_srt

0x2ad0,	// (0x00011dfd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2ad0,	// (0x00011dfd) tabs_3_long_passive_pane_cp_srt

0x2ad0,	// (0x00011dfd) tabs_3_long_passive_pane_srt_ParamLimits

0x2ad0,	// (0x00011dfd) tabs_3_long_passive_pane_srt

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp5_srt

0x4114,	// (0x00013441) bg_passive_tab_pane_g1_cp5_srt

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp5_srt

0x411d,	// (0x0001344a) bg_passive_tab_pane_g3_cp5_srt

0x283b,	// (0x00011b68) bg_active_tab_pane_cp5_srt_ParamLimits

0x283b,	// (0x00011b68) bg_active_tab_pane_cp5_srt

0xdb7d,	// (0x0001ceaa) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb7d,	// (0x0001ceaa) tabs_3_long_active_pane_srt_t1

0x4114,	// (0x00013441) bg_active_tab_pane_g1_cp5_srt

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp5_srt

0x411d,	// (0x0001344a) bg_active_tab_pane_g3_cp5_srt

0x60f6,	// (0x00015423) navi_text_pane_srt_t1

0x60ee,	// (0x0001541b) navi_icon_pane_srt_g1

0x45ef,	// (0x0001391c) midp_editing_number_pane_srt

0x4439,	// (0x00013766) midp_ticker_pane_srt

0x45f7,	// (0x00013924) midp_ticker_pane_srt_g1

0x45ff,	// (0x0001392c) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001ea9a) midp_ticker_pane_srt_g

0x4607,	// (0x00013934) midp_ticker_pane_srt_t1

0x60df,	// (0x0001540c) midp_editing_number_pane_t1_copy1

0x477b,	// (0x00013aa8) listscroll_midp_pane

0x477b,	// (0x00013aa8) midp_form_pane

0x44a7,	// (0x000137d4) midp_info_popup_window_ParamLimits

0x44a7,	// (0x000137d4) midp_info_popup_window

0x3806,	// (0x00012b33) bg_popup_sub_pane_cp50_ParamLimits

0x3806,	// (0x00012b33) bg_popup_sub_pane_cp50

0x51f0,	// (0x0001451d) listscroll_midp_info_pane_ParamLimits

0x51f0,	// (0x0001451d) listscroll_midp_info_pane

0x51d8,	// (0x00014505) listscroll_form_midp_pane_ParamLimits

0x51d8,	// (0x00014505) listscroll_form_midp_pane

0x51e4,	// (0x00014511) scroll_bar_cp050

0xda0d,	// (0x0001cd3a) list_midp_pane

0x7217,	// (0x00016544) signal_pane_g2_cp

0x50f2,	// (0x0001441f) listscroll_midp_info_pane_t1_ParamLimits

0x50f2,	// (0x0001441f) listscroll_midp_info_pane_t1

0x510a,	// (0x00014437) listscroll_midp_info_pane_t2_ParamLimits

0x510a,	// (0x00014437) listscroll_midp_info_pane_t2

0x5148,	// (0x00014475) listscroll_midp_info_pane_t3_ParamLimits

0x5148,	// (0x00014475) listscroll_midp_info_pane_t3

0x5182,	// (0x000144af) listscroll_midp_info_pane_t4_ParamLimits

0x5182,	// (0x000144af) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001eb4d) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001eb4d) listscroll_midp_info_pane_t

0x38c8,	// (0x00012bf5) scroll_pane_cp21

0x5094,	// (0x000143c1) form_midp_field_choice_group_pane

0x509d,	// (0x000143ca) form_midp_field_text_pane

0x50d8,	// (0x00014405) form_midp_field_time_pane

0x50e0,	// (0x0001440d) form_midp_gauge_slider_pane

0x50e9,	// (0x00014416) form_midp_gauge_wait_pane

0x275b,	// (0x00011a88) form_midp_image_pane

0xd9f3,	// (0x0001cd20) list_single_midp_pane_ParamLimits

0xd9f3,	// (0x0001cd20) list_single_midp_pane

0xd9d0,	// (0x0001ccfd) form_midp_field_text_pane_t1

0x4dbb,	// (0x000140e8) input_focus_pane_cp050

0x504d,	// (0x0001437a) list_midp_form_text_pane

0x4fe1,	// (0x0001430e) form_midp_field_choice_group_pane_t1

0x4fef,	// (0x0001431c) input_focus_pane_cp051

0x5003,	// (0x00014330) list_midp_choice_pane

0x275b,	// (0x00011a88) status_idle_pane

0x4fc5,	// (0x000142f2) form_midp_field_time_pane_t1

0x2751,	// (0x00011a7e) wait_anim_pane_g2_copy1

0x4fd3,	// (0x00014300) form_midp_field_time_pane_t2

0x0001,

0x4557,	// (0x00013884) aid_navinavi_width_2_pane

0xf81b,	// (0x0001eb48) form_midp_field_time_pane_t

0x275b,	// (0x00011a88) input_focus_pane_cp052

0x275b,	// (0x00011a88) bg_input_focus_pane_cp040

0x4f85,	// (0x000142b2) form_midp_gauge_slider_pane_t1

0x4f93,	// (0x000142c0) form_midp_gauge_slider_pane_t2

0xd9b0,	// (0x0001ccdd) form_midp_gauge_slider_pane_t3

0xd9c0,	// (0x0001cced) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001eb3f) form_midp_gauge_slider_pane_t

0x4fbd,	// (0x000142ea) form_midp_slider_pane

0x283b,	// (0x00011b68) bg_input_focus_pane_cp041_ParamLimits

0x283b,	// (0x00011b68) bg_input_focus_pane_cp041

0x4f52,	// (0x0001427f) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f52,	// (0x0001427f) form_midp_gauge_wait_pane_t1

0x4f64,	// (0x00014291) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f64,	// (0x00014291) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001eb3a) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001eb3a) form_midp_gauge_wait_pane_t

0x4f76,	// (0x000142a3) form_midp_wait_pane_ParamLimits

0x4f76,	// (0x000142a3) form_midp_wait_pane

0x4f1c,	// (0x00014249) form_midp_image_pane_g1

0x4f25,	// (0x00014252) form_midp_image_pane_t1

0x4f34,	// (0x00014261) form_midp_image_pane_t2

0x4f43,	// (0x00014270) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001eb33) form_midp_image_pane_t

0x4f04,	// (0x00014231) list_single_midp_pane_g1

0x4f0d,	// (0x0001423a) list_single_midp_pane_t1

0xd99a,	// (0x0001ccc7) list_midp_form_item_pane_ParamLimits

0xd99a,	// (0x0001ccc7) list_midp_form_item_pane

0x44ff,	// (0x0001382c) list_midp_form_item_pane_t1

0x450e,	// (0x0001383b) midp_ticker_pane_g1

0x451a,	// (0x00013847) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001ea80) midp_ticker_pane_g

0x4526,	// (0x00013853) midp_ticker_pane_t1

0x6355,	// (0x00015682) midp_editing_number_pane_t1

0x6333,	// (0x00015660) midp_editing_number_pane

0x6342,	// (0x0001566f) midp_ticker_pane

0x60bd,	// (0x000153ea) ai_message_heading_pane

0x275b,	// (0x00011a88) bg_popup_window_pane_cp14

0x60c5,	// (0x000153f2) listscroll_ai_message_pane

0x6047,	// (0x00015374) ai_message_heading_pane_g1_ParamLimits

0x6047,	// (0x00015374) ai_message_heading_pane_g1

0x6053,	// (0x00015380) ai_message_heading_pane_g2_ParamLimits

0x6053,	// (0x00015380) ai_message_heading_pane_g2

0x605f,	// (0x0001538c) ai_message_heading_pane_g3_ParamLimits

0x605f,	// (0x0001538c) ai_message_heading_pane_g3

0x606b,	// (0x00015398) ai_message_heading_pane_g4_ParamLimits

0x606b,	// (0x00015398) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001ec74) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001ec74) ai_message_heading_pane_g

0x6077,	// (0x000153a4) ai_message_heading_pane_t1_ParamLimits

0x6077,	// (0x000153a4) ai_message_heading_pane_t1

0x6091,	// (0x000153be) ai_message_heading_pane_t2_ParamLimits

0x6091,	// (0x000153be) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001ec7d) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001ec7d) ai_message_heading_pane_t

0x60a3,	// (0x000153d0) bg_popup_heading_pane_cp1_ParamLimits

0x60a3,	// (0x000153d0) bg_popup_heading_pane_cp1

0x6035,	// (0x00015362) list_ai_message_pane_ParamLimits

0x6035,	// (0x00015362) list_ai_message_pane

0x38c8,	// (0x00012bf5) scroll_pane_cp10

0x5fd1,	// (0x000152fe) list_ai_message_pane_g1

0x5fd9,	// (0x00015306) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001ec51) list_ai_message_pane_g

0x5fe1,	// (0x0001530e) list_ai_message_pane_t1_ParamLimits

0x5fe1,	// (0x0001530e) list_ai_message_pane_t1

0x5ff6,	// (0x00015323) list_ai_message_pane_t2_ParamLimits

0x5ff6,	// (0x00015323) list_ai_message_pane_t2

0x600b,	// (0x00015338) list_ai_message_pane_t3_ParamLimits

0x600b,	// (0x00015338) list_ai_message_pane_t3

0x6020,	// (0x0001534d) list_ai_message_pane_t4_ParamLimits

0x6020,	// (0x0001534d) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001ec56) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001ec56) list_ai_message_pane_t

0xdb5b,	// (0x0001ce88) cell_ai_soft_ind_pane_ParamLimits

0xdb5b,	// (0x0001ce88) cell_ai_soft_ind_pane

0x4538,	// (0x00013865) cell_ai_soft_ind_pane_g1_ParamLimits

0x4538,	// (0x00013865) cell_ai_soft_ind_pane_g1

0x275b,	// (0x00011a88) grid_highlight_cp1

0x4545,	// (0x00013872) text_secondary_cp56_ParamLimits

0x4545,	// (0x00013872) text_secondary_cp56

0x5f90,	// (0x000152bd) example_general_pane_ParamLimits

0x5f90,	// (0x000152bd) example_general_pane

0x5f9c,	// (0x000152c9) example_parent_pane_g1_ParamLimits

0x5f9c,	// (0x000152c9) example_parent_pane_g1

0x5fa8,	// (0x000152d5) example_parent_pane_t1_ParamLimits

0x5fa8,	// (0x000152d5) example_parent_pane_t1

0xbe79,	// (0x0001b1a6) popup_preview_text_window_ParamLimits

0xbe79,	// (0x0001b1a6) popup_preview_text_window

0x4376,	// (0x000136a3) list_single_pane_cp2_g4

0x2b7a,	// (0x00011ea7) bg_popup_preview_window_pane_ParamLimits

0x2b7a,	// (0x00011ea7) bg_popup_preview_window_pane

0x5cdd,	// (0x0001500a) popup_preview_text_window_t1_ParamLimits

0x5cdd,	// (0x0001500a) popup_preview_text_window_t1

0x5cfb,	// (0x00015028) popup_preview_text_window_t2_ParamLimits

0x5cfb,	// (0x00015028) popup_preview_text_window_t2

0x5d44,	// (0x00015071) popup_preview_text_window_t3_ParamLimits

0x5d44,	// (0x00015071) popup_preview_text_window_t3

0x5d89,	// (0x000150b6) popup_preview_text_window_t4_ParamLimits

0x5d89,	// (0x000150b6) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001ec25) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001ec25) popup_preview_text_window_t

0x5e07,	// (0x00015134) scroll_pane_cp11

0x4c97,	// (0x00013fc4) bg_popup_preview_window_pane_g1

0x5c9d,	// (0x00014fca) bg_popup_preview_window_pane_g2

0x5ca5,	// (0x00014fd2) bg_popup_preview_window_pane_g3

0x5cad,	// (0x00014fda) bg_popup_preview_window_pane_g4

0x5cb5,	// (0x00014fe2) bg_popup_preview_window_pane_g5

0x5cbd,	// (0x00014fea) bg_popup_preview_window_pane_g6

0x5cc5,	// (0x00014ff2) bg_popup_preview_window_pane_g7

0x5ccd,	// (0x00014ffa) bg_popup_preview_window_pane_g8

0x01c7,	// (0x0000f4f4) aid_popup_width_pane

0xbdf5,	// (0x0001b122) popup_midp_note_alarm_window_ParamLimits

0xbdf5,	// (0x0001b122) popup_midp_note_alarm_window

0x35ca,	// (0x000128f7) data_form_pane_ParamLimits

0xd017,	// (0x0001c344) form_field_data_pane_g1

0xd021,	// (0x0001c34e) form_field_data_pane_t1_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_ParamLimits

0x3608,	// (0x00012935) data_form_wide_pane_ParamLimits

0x3614,	// (0x00012941) form_field_data_wide_pane_g1

0x3634,	// (0x00012961) form_field_data_wide_pane_t1_ParamLimits

0x2e20,	// (0x0001214d) input_focus_pane_cp6_ParamLimits

0xd12d,	// (0x0001c45a) input_popup_find_pane_g1_ParamLimits

0xd12d,	// (0x0001c45a) input_popup_find_pane_g1

0x0737,	// (0x0000fa64) aid_navi_side_left_pane

0x074c,	// (0x0000fa79) aid_navi_side_right_pane

0x56b6,	// (0x000149e3) bg_popup_window_pane_cp30_ParamLimits

0x56b6,	// (0x000149e3) bg_popup_window_pane_cp30

0x5730,	// (0x00014a5d) popup_midp_note_alarm_window_g1_ParamLimits

0x5730,	// (0x00014a5d) popup_midp_note_alarm_window_g1

0x5760,	// (0x00014a8d) popup_midp_note_alarm_window_t1_ParamLimits

0x5760,	// (0x00014a8d) popup_midp_note_alarm_window_t1

0x5801,	// (0x00014b2e) popup_midp_note_alarm_window_t2_ParamLimits

0x5801,	// (0x00014b2e) popup_midp_note_alarm_window_t2

0x58af,	// (0x00014bdc) popup_midp_note_alarm_window_t3_ParamLimits

0x58af,	// (0x00014bdc) popup_midp_note_alarm_window_t3

0x58e1,	// (0x00014c0e) popup_midp_note_alarm_window_t4_ParamLimits

0x58e1,	// (0x00014c0e) popup_midp_note_alarm_window_t4

0x5907,	// (0x00014c34) popup_midp_note_alarm_window_t5_ParamLimits

0x5907,	// (0x00014c34) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001ebc2) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001ebc2) popup_midp_note_alarm_window_t

0x59b3,	// (0x00014ce0) wait_bar_pane_cp1_ParamLimits

0x59b3,	// (0x00014ce0) wait_bar_pane_cp1

0x275b,	// (0x00011a88) wait_anim_pane_copy1

0x275b,	// (0x00011a88) wait_border_pane_copy1

0x5394,	// (0x000146c1) wait_border_pane_g1_copy1

0x364b,	// (0x00012978) form_field_popup_pane_g1

0xd03b,	// (0x0001c368) form_field_popup_pane_t1_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_cp7_ParamLimits

0x366d,	// (0x0001299a) list_form_pane_ParamLimits

0x3679,	// (0x000129a6) form_field_popup_wide_pane_g1

0x3681,	// (0x000129ae) form_field_popup_wide_pane_t1_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_cp8_ParamLimits

0x3696,	// (0x000129c3) list_form_wide_pane_ParamLimits

0x6590,	// (0x000158bd) aid_size_cell_graphic_pane

0xd0ba,	// (0x0001c3e7) data_form_pane_t1_ParamLimits

0xdcfc,	// (0x0001d029) data_form_wide_pane_t1_ParamLimits

0xd61b,	// (0x0001c948) bg_status_flat_pane

0xc92c,	// (0x0001bc59) title_pane_t1_ParamLimits

0x2803,	// (0x00011b30) title_pane_t2_ParamLimits

0x2829,	// (0x00011b56) title_pane_t3_ParamLimits

0xf557,	// (0x0001e884) title_pane_t_ParamLimits

0x3d3f,	// (0x0001306c) level_1_signal_ParamLimits

0x3d4c,	// (0x00013079) level_2_signal_ParamLimits

0x3d59,	// (0x00013086) level_3_signal_ParamLimits

0x3d66,	// (0x00013093) level_4_signal_ParamLimits

0x3d73,	// (0x000130a0) level_5_signal_ParamLimits

0x3d80,	// (0x000130ad) level_6_signal_ParamLimits

0x3d8d,	// (0x000130ba) level_7_signal_ParamLimits

0x3d3f,	// (0x0001306c) level_1_battery_ParamLimits

0x3d4c,	// (0x00013079) level_2_battery_ParamLimits

0x3d59,	// (0x00013086) level_3_battery_ParamLimits

0x3d66,	// (0x00013093) level_4_battery_ParamLimits

0x3d73,	// (0x000130a0) level_5_battery_ParamLimits

0x3d80,	// (0x000130ad) level_6_battery_ParamLimits

0x3d8d,	// (0x000130ba) level_7_battery_ParamLimits

0x55bb,	// (0x000148e8) bg_status_flat_pane_g1

0x55c3,	// (0x000148f0) bg_status_flat_pane_g2

0x55cb,	// (0x000148f8) bg_status_flat_pane_g3

0x55d3,	// (0x00014900) bg_status_flat_pane_g4

0x55db,	// (0x00014908) bg_status_flat_pane_g5

0x55e3,	// (0x00014910) bg_status_flat_pane_g6

0x55eb,	// (0x00014918) bg_status_flat_pane_g7

0xc9b8,	// (0x0001bce5) tabs_3_active_pane_t1_ParamLimits

0xc9b8,	// (0x0001bce5) tabs_3_passive_pane_t1_ParamLimits

0xc9ca,	// (0x0001bcf7) tabs_4_active_pane_t1_ParamLimits

0xc9ca,	// (0x0001bcf7) tabs_4_1_passive_pane_t1_ParamLimits

0xd143,	// (0x0001c470) tabs_2_active_pane_t1_ParamLimits

0xd143,	// (0x0001c470) tabs_2_passive_pane_t1_ParamLimits

0x283b,	// (0x00011b68) bg_active_tab_pane_cp4_ParamLimits

0xd155,	// (0x0001c482) tabs_2_long_active_pane_t1_ParamLimits

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp4_ParamLimits

0x12d5,	// (0x00010602) list_single_midp_graphic_pane_t1_ParamLimits

0x283b,	// (0x00011b68) bg_active_tab_pane_cp5_ParamLimits

0xd168,	// (0x0001c495) tabs_3_long_active_pane_t1_ParamLimits

0x477b,	// (0x00013aa8) bg_passive_tab_pane_cp5_ParamLimits

0x12d5,	// (0x00010602) list_single_midp_graphic_pane_t1

0xd61b,	// (0x0001c948) bg_status_flat_pane_ParamLimits

0x4919,	// (0x00013c46) indicator_pane_cp2_ParamLimits

0x4919,	// (0x00013c46) indicator_pane_cp2

0xd799,	// (0x0001cac6) navi_pane_srt_ParamLimits

0xd799,	// (0x0001cac6) navi_pane_srt

0x4a68,	// (0x00013d95) popup_clock_digital_analogue_window_cp1

0x2932,	// (0x00011c5f) indicator_pane_t1

0x4439,	// (0x00013766) copy_highlight_pane

0x4439,	// (0x00013766) cursor_graphics_pane

0x4439,	// (0x00013766) graphic_within_text_pane

0x4439,	// (0x00013766) link_highlight_pane

0x5dca,	// (0x000150f7) popup_preview_text_window_t5_ParamLimits

0x5dca,	// (0x000150f7) popup_preview_text_window_t5

0x455f,	// (0x0001388c) cursor_digital_pane

0x455f,	// (0x0001388c) cursor_primary_pane

0x4570,	// (0x0001389d) cursor_primary_small_pane

0x4578,	// (0x000138a5) cursor_secondary_pane

0x4580,	// (0x000138ad) cursor_title_pane

0x455f,	// (0x0001388c) link_highlight_digital_pane

0x4567,	// (0x00013894) link_highlight_primary_pane

0x4570,	// (0x0001389d) link_highlight_primary_small_pane

0x4578,	// (0x000138a5) link_highlight_secondary_pane

0x4580,	// (0x000138ad) link_highlight_title_pane

0x455f,	// (0x0001388c) copy_highlight_digital_pane

0x455f,	// (0x0001388c) copy_highlight_primary_pane

0x4570,	// (0x0001389d) copy_highlight_primary_small_pane

0x4578,	// (0x000138a5) copy_highlight_secondary_pane

0x4580,	// (0x000138ad) copy_highlight_title_pane

0x4578,	// (0x000138a5) graphic_text_digital_pane

0x5659,	// (0x00014986) graphic_text_primary_pane

0x5662,	// (0x0001498f) graphic_text_primary_small_pane

0x4570,	// (0x0001389d) graphic_text_secondary_pane

0x455f,	// (0x0001388c) graphic_text_title_pane

0xd437,	// (0x0001c764) cursor_primary_pane_g1

0x564b,	// (0x00014978) cursor_text_primary_t1

0xda4d,	// (0x0001cd7a) cursor_primary_small_pane_g1

0x563d,	// (0x0001496a) cursor_text_primary_small_t1

0xda43,	// (0x0001cd70) cursor_primary_small_pane_g1_copy1

0x5625,	// (0x00014952) cursor_text_primary_small_t1_copy1

0x5603,	// (0x00014930) cursor_text_title_t1

0xda39,	// (0x0001cd66) cursor_title_pane_g1

0xd437,	// (0x0001c764) cursor_digital_pane_g1

0x4592,	// (0x000138bf) cursor_text_digital_t1

0x55a4,	// (0x000148d1) link_highlight_primary_pane_g1

0x55ac,	// (0x000148d9) link_highlight_primary_pane_t1

0x45a0,	// (0x000138cd) link_highlight_primary_small_pane_g1

0x45a8,	// (0x000138d5) link_highlight_primary_small_pane_t1

0x45a0,	// (0x000138cd) link_highlight_secondary_pane_g1

0x45b7,	// (0x000138e4) link_highlight_secondary_pane_t1

0x5518,	// (0x00014845) link_highlight_title_pane_g1

0x5520,	// (0x0001484d) link_highlight_title_pane_t1

0x5501,	// (0x0001482e) link_highlight_digital_pane_g1

0x5509,	// (0x00014836) link_highlight_digital_pane_t1

0x53d9,	// (0x00014706) copy_highlight_primary_pane_g1

0x53e1,	// (0x0001470e) copy_highlight_primary_pane_t1

0x53b3,	// (0x000146e0) copy_highlight_primary_small_pane_g1

0x53ca,	// (0x000146f7) copy_highlight_primary_small_pane_t1

0x45c6,	// (0x000138f3) copy_highlight_secondary_pane_g1

0x45ce,	// (0x000138fb) copy_highlight_secondary_pane_t1

0x53b3,	// (0x000146e0) copy_highlight_title_pane_g1

0x53bb,	// (0x000146e8) copy_highlight_title_pane_t1

0x53d9,	// (0x00014706) copy_highlight_digital_pane_g1

0x675b,	// (0x00015a88) copy_highlight_digital_pane_t1

0x66af,	// (0x000159dc) graphic_text_primary_pane_g1

0x673f,	// (0x00015a6c) graphic_text_primary_pane_t1

0x674d,	// (0x00015a7a) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001ecf1) graphic_text_primary_pane_t

0x671b,	// (0x00015a48) graphic_text_primary_small_pane_g1

0x6723,	// (0x00015a50) graphic_text_primary_small_pane_t1

0x6731,	// (0x00015a5e) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001ecec) graphic_text_primary_small_pane_t

0x66f7,	// (0x00015a24) graphic_text_secondary_pane_g1

0x66ff,	// (0x00015a2c) graphic_text_secondary_pane_t1

0x670d,	// (0x00015a3a) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001ece7) graphic_text_secondary_pane_t

0x66d3,	// (0x00015a00) graphic_text_title_pane_g1

0x66db,	// (0x00015a08) graphic_text_title_pane_t1

0x66e9,	// (0x00015a16) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001ece2) graphic_text_title_pane_t

0x66af,	// (0x000159dc) graphic_text_digital_pane_g1

0x66b7,	// (0x000159e4) graphic_text_digital_pane_t1

0x66c5,	// (0x000159f2) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001ecdd) graphic_text_digital_pane_t

0x283b,	// (0x00011b68) navi_icon_pane_srt_ParamLimits

0x283b,	// (0x00011b68) navi_icon_pane_srt

0x275b,	// (0x00011a88) navi_midp_pane_srt

0x275b,	// (0x00011a88) navi_navi_pane_srt

0x283b,	// (0x00011b68) navi_text_pane_srt_ParamLimits

0x283b,	// (0x00011b68) navi_text_pane_srt

0x667a,	// (0x000159a7) navi_navi_icon_text_pane_srt

0x6682,	// (0x000159af) navi_navi_pane_srt_g1_ParamLimits

0x6682,	// (0x000159af) navi_navi_pane_srt_g1

0x6694,	// (0x000159c1) navi_navi_pane_srt_g2_ParamLimits

0x6694,	// (0x000159c1) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001ecd8) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001ecd8) navi_navi_pane_srt_g

0x66a6,	// (0x000159d3) navi_navi_tabs_pane_srt

0x667a,	// (0x000159a7) navi_navi_text_pane_srt

0x667a,	// (0x000159a7) navi_navi_volume_pane_srt

0x666b,	// (0x00015998) navi_navi_text_pane_srt_t1

0x1649,	// (0x00010976) navi_navi_volume_pane_srt_g1

0x1651,	// (0x0001097e) volume_small_pane_srt_ParamLimits

0x1651,	// (0x0001097e) volume_small_pane_srt

0x0a0e,	// (0x0000fd3b) volume_small_pane_srt_g1_ParamLimits

0x0a0e,	// (0x0000fd3b) volume_small_pane_srt_g1

0x0a1e,	// (0x0000fd4b) volume_small_pane_srt_g2_ParamLimits

0x0a1e,	// (0x0000fd4b) volume_small_pane_srt_g2

0x0a2f,	// (0x0000fd5c) volume_small_pane_srt_g3_ParamLimits

0x0a2f,	// (0x0000fd5c) volume_small_pane_srt_g3

0x0a40,	// (0x0000fd6d) volume_small_pane_srt_g4_ParamLimits

0x0a40,	// (0x0000fd6d) volume_small_pane_srt_g4

0x0a51,	// (0x0000fd7e) volume_small_pane_srt_g5_ParamLimits

0x0a51,	// (0x0000fd7e) volume_small_pane_srt_g5

0x0a62,	// (0x0000fd8f) volume_small_pane_srt_g6_ParamLimits

0x0a62,	// (0x0000fd8f) volume_small_pane_srt_g6

0x0a73,	// (0x0000fda0) volume_small_pane_srt_g7_ParamLimits

0x0a73,	// (0x0000fda0) volume_small_pane_srt_g7

0x0a84,	// (0x0000fdb1) volume_small_pane_srt_g8_ParamLimits

0x0a84,	// (0x0000fdb1) volume_small_pane_srt_g8

0x0a95,	// (0x0000fdc2) volume_small_pane_srt_g9_ParamLimits

0x0a95,	// (0x0000fdc2) volume_small_pane_srt_g9

0x0aa6,	// (0x0000fdd3) volume_small_pane_srt_g10_ParamLimits

0x0aa6,	// (0x0000fdd3) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001ea85) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001ea85) volume_small_pane_srt_g

0x2c23,	// (0x00011f50) query_popup_data_pane_cp2

0x6651,	// (0x0001597e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6651,	// (0x0001597e) navi_navi_icon_text_pane_srt_t1

0x5659,	// (0x00014986) navi_tabs_2_long_pane_srt

0x5659,	// (0x00014986) navi_tabs_2_pane_srt

0x5659,	// (0x00014986) navi_tabs_3_long_pane_srt

0x5659,	// (0x00014986) navi_tabs_3_pane_srt

0x5659,	// (0x00014986) navi_tabs_4_pane_srt

0x1629,	// (0x00010956) tabs_2_active_pane_srt_ParamLimits

0x1629,	// (0x00010956) tabs_2_active_pane_srt

0x1639,	// (0x00010966) tabs_2_passive_pane_srt_ParamLimits

0x1639,	// (0x00010966) tabs_2_passive_pane_srt

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp1_srt

0x661d,	// (0x0001594a) bg_passive_tab_pane_g1_cp1_srt

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp1_srt

0x6626,	// (0x00015953) bg_passive_tab_pane_g3_cp1_srt

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp1_srt_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp1_srt

0x662f,	// (0x0001595c) tabs_2_active_pane_srt_g1

0xde5c,	// (0x0001d189) tabs_2_active_pane_srt_t1_ParamLimits

0xde5c,	// (0x0001d189) tabs_2_active_pane_srt_t1

0x661d,	// (0x0001594a) bg_active_tab_pane_g1_cp1_srt

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp1_srt

0x6626,	// (0x00015953) bg_active_tab_pane_g3_cp1_srt

0x15f6,	// (0x00010923) tabs_3_active_pane_srt_ParamLimits

0x15f6,	// (0x00010923) tabs_3_active_pane_srt

0x1607,	// (0x00010934) tabs_3_passive_pane_cp_srt_ParamLimits

0x1607,	// (0x00010934) tabs_3_passive_pane_cp_srt

0x1618,	// (0x00010945) tabs_3_passive_pane_srt_ParamLimits

0x1618,	// (0x00010945) tabs_3_passive_pane_srt

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4dbb,	// (0x000140e8) bg_passive_tab_pane_cp2_srt

0x45dd,	// (0x0001390a) bg_passive_tab_pane_g1_cp2_srt

0x408a,	// (0x000133b7) bg_passive_tab_pane_g2_cp2_srt

0x45e6,	// (0x00013913) bg_passive_tab_pane_g3_cp2_srt

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp2_srt_ParamLimits

0x2ad0,	// (0x00011dfd) bg_active_tab_pane_cp2_srt

0x6603,	// (0x00015930) tabs_3_active_pane_srt_g1

0xde46,	// (0x0001d173) tabs_3_active_pane_srt_t1_ParamLimits

0xde46,	// (0x0001d173) tabs_3_active_pane_srt_t1

0x45dd,	// (0x0001390a) bg_active_tab_pane_g1_cp2_srt

0x408a,	// (0x000133b7) bg_active_tab_pane_g2_cp2_srt

0x45e6,	// (0x00013913) bg_active_tab_pane_g3_cp2_srt

0x15ae,	// (0x000108db) tabs_4_active_pane_srt_ParamLimits

0x15ae,	// (0x000108db) tabs_4_active_pane_srt

0x15c0,	// (0x000108ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0x15c0,	// (0x000108ed) tabs_4_passive_pane_cp2_srt

0x0c09,	// (0x0000ff36) aid_size_cell_toolbar

0x6181,	// (0x000154ae) main_idle_act_pane_ParamLimits

0x0dcc,	// (0x000100f9) popup_large_graphic_colour_window_ParamLimits

0xc0ff,	// (0x0001b42c) popup_toolbar_window_ParamLimits

0xc0ff,	// (0x0001b42c) popup_toolbar_window

0x6380,	// (0x000156ad) list_single_graphic_2heading_pane_ParamLimits

0x6380,	// (0x000156ad) list_single_graphic_2heading_pane

0x3af5,	// (0x00012e22) aid_size_cell_apps_grid_lsc_pane

0x3b07,	// (0x00012e34) aid_size_cell_apps_grid_prt_pane

0x477b,	// (0x00013aa8) bg_wml_button_pane_cp1_ParamLimits

0x477b,	// (0x00013aa8) bg_wml_button_pane_cp1

0xd9d0,	// (0x0001ccfd) form_midp_field_text_pane_t1_ParamLimits

0x4dbb,	// (0x000140e8) input_focus_pane_cp050_ParamLimits

0x504d,	// (0x0001437a) list_midp_form_text_pane_ParamLimits

0x4fef,	// (0x0001431c) input_focus_pane_cp051_ParamLimits

0x5003,	// (0x00014330) list_midp_choice_pane_ParamLimits

0xd964,	// (0x0001cc91) list_single_2graphic_pane_cp3_ParamLimits

0xd964,	// (0x0001cc91) list_single_2graphic_pane_cp3

0xd979,	// (0x0001cca6) list_single_midp_graphic_pane_ParamLimits

0xd979,	// (0x0001cca6) list_single_midp_graphic_pane

0x11dc,	// (0x00010509) list_single_graphic_2heading_pane_g1_ParamLimits

0x11dc,	// (0x00010509) list_single_graphic_2heading_pane_g1

0x11e8,	// (0x00010515) list_single_graphic_2heading_pane_g4_ParamLimits

0x11e8,	// (0x00010515) list_single_graphic_2heading_pane_g4

0x11f4,	// (0x00010521) list_single_graphic_2heading_pane_g5_ParamLimits

0x11f4,	// (0x00010521) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001ead8) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001ead8) list_single_graphic_2heading_pane_g

0x1200,	// (0x0001052d) list_single_graphic_2heading_pane_t1_ParamLimits

0x1200,	// (0x0001052d) list_single_graphic_2heading_pane_t1

0x1214,	// (0x00010541) list_single_graphic_2heading_pane_t2_ParamLimits

0x1214,	// (0x00010541) list_single_graphic_2heading_pane_t2

0x122e,	// (0x0001055b) list_single_graphic_2heading_pane_t3_ParamLimits

0x122e,	// (0x0001055b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001eadf) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001eadf) list_single_graphic_2heading_pane_t

0x4bbf,	// (0x00013eec) bg_popup_sub_pane_cp2

0x4be9,	// (0x00013f16) grid_toobar_pane

0x1246,	// (0x00010573) cell_toolbar_pane_ParamLimits

0x1246,	// (0x00010573) cell_toolbar_pane

0x4c3b,	// (0x00013f68) cell_toolbar_pane_g1_ParamLimits

0x4c3b,	// (0x00013f68) cell_toolbar_pane_g1

0x4c4f,	// (0x00013f7c) cell_toolbar_pane_g2_ParamLimits

0x4c4f,	// (0x00013f7c) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001eaed) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001eaed) cell_toolbar_pane_g

0x4c71,	// (0x00013f9e) grid_highlight_pane_cp2_ParamLimits

0x4c71,	// (0x00013f9e) grid_highlight_pane_cp2

0x4c8b,	// (0x00013fb8) toolbar_button_pane

0x4c97,	// (0x00013fc4) toolbar_button_pane_g1

0x4c9f,	// (0x00013fcc) toolbar_button_pane_g2

0x4ca7,	// (0x00013fd4) toolbar_button_pane_g3

0x4caf,	// (0x00013fdc) toolbar_button_pane_g4

0x4cb7,	// (0x00013fe4) toolbar_button_pane_g5

0x4cbf,	// (0x00013fec) toolbar_button_pane_g6

0x4cc7,	// (0x00013ff4) toolbar_button_pane_g7

0x4ccf,	// (0x00013ffc) toolbar_button_pane_g8

0x4cd7,	// (0x00014004) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001eaf2) toolbar_button_pane_g

0x127e,	// (0x000105ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x127e,	// (0x000105ab) list_single_2graphic_pane_g1_cp3

0xc157,	// (0x0001b484) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc157,	// (0x0001b484) list_single_2graphic_pane_g2_cp3

0x129b,	// (0x000105c8) list_single_2graphic_pane_g3_cp3

0x12a3,	// (0x000105d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x12a3,	// (0x000105d0) list_single_2graphic_pane_g4_cp3

0x12af,	// (0x000105dc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x12af,	// (0x000105dc) list_single_2graphic_pane_t1_cp3

0x12c9,	// (0x000105f6) list_single_midp_graphic_pane_g2_ParamLimits

0x12c9,	// (0x000105f6) list_single_midp_graphic_pane_g2

0x0c11,	// (0x0000ff3e) aid_zoom_text_primary

0x0c19,	// (0x0000ff46) aid_zoom_text_secondary

0xd48f,	// (0x0001c7bc) status_small_pane_g7_ParamLimits

0xd48f,	// (0x0001c7bc) status_small_pane_g7

0xd4b2,	// (0x0001c7df) status_small_pane_t1_ParamLimits

0xc908,	// (0x0001bc35) title_pane_g2

0x0003,

0xf54e,	// (0x0001e87b) title_pane_g

0xcb80,	// (0x0001bead) aid_size_cell_colour_1_pane_ParamLimits

0xcb80,	// (0x0001bead) aid_size_cell_colour_1_pane

0xcb94,	// (0x0001bec1) aid_size_cell_colour_2_pane_ParamLimits

0xcb94,	// (0x0001bec1) aid_size_cell_colour_2_pane

0xcba8,	// (0x0001bed5) aid_size_cell_colour_3_pane_ParamLimits

0xcba8,	// (0x0001bed5) aid_size_cell_colour_3_pane

0xcbbc,	// (0x0001bee9) aid_size_cell_colour_4_pane_ParamLimits

0xcbbc,	// (0x0001bee9) aid_size_cell_colour_4_pane

0x0673,	// (0x0000f9a0) title_pane_stacon_g1_ParamLimits

0x0673,	// (0x0000f9a0) title_pane_stacon_g1

0x5438,	// (0x00014765) popup_note_wait_window_g3_ParamLimits

0x5438,	// (0x00014765) popup_note_wait_window_g3

0x54ae,	// (0x000147db) popup_note_wait_window_t5_ParamLimits

0x54ae,	// (0x000147db) popup_note_wait_window_t5

0x275b,	// (0x00011a88) main_feb_china_hwr_fs_writing_pane

0xbb1b,	// (0x0001ae48) popup_feb_china_hwr_fs_window_ParamLimits

0xbb1b,	// (0x0001ae48) popup_feb_china_hwr_fs_window

0xc168,	// (0x0001b495) aid_size_cell_hwr_fs_ParamLimits

0xc168,	// (0x0001b495) aid_size_cell_hwr_fs

0x4dbb,	// (0x000140e8) bg_popup_sub_pane_cp3_ParamLimits

0x4dbb,	// (0x000140e8) bg_popup_sub_pane_cp3

0xc17d,	// (0x0001b4aa) grid_hwr_fs_pane_ParamLimits

0xc17d,	// (0x0001b4aa) grid_hwr_fs_pane

0x1318,	// (0x00010645) linegrid_hwr_fs_pane_ParamLimits

0x1318,	// (0x00010645) linegrid_hwr_fs_pane

0xc195,	// (0x0001b4c2) cell_hwr_fs_pane_ParamLimits

0xc195,	// (0x0001b4c2) cell_hwr_fs_pane

0x4dc7,	// (0x000140f4) linegrid_hwr_fs_pane_g1_ParamLimits

0x4dc7,	// (0x000140f4) linegrid_hwr_fs_pane_g1

0xd938,	// (0x0001cc65) linegrid_hwr_fs_pane_g2_ParamLimits

0xd938,	// (0x0001cc65) linegrid_hwr_fs_pane_g2

0x4de5,	// (0x00014112) linegrid_hwr_fs_pane_g3_ParamLimits

0x4de5,	// (0x00014112) linegrid_hwr_fs_pane_g3

0x134a,	// (0x00010677) linegrid_hwr_fs_pane_g4_ParamLimits

0x134a,	// (0x00010677) linegrid_hwr_fs_pane_g4

0x1364,	// (0x00010691) linegrid_hwr_fs_pane_g5_ParamLimits

0x1364,	// (0x00010691) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001eb18) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001eb18) linegrid_hwr_fs_pane_g

0x4df1,	// (0x0001411e) cell_hwr_fs_pane_g1_ParamLimits

0x4df1,	// (0x0001411e) cell_hwr_fs_pane_g1

0x4af6,	// (0x00013e23) cell_hwr_fs_pane_g2_ParamLimits

0x4af6,	// (0x00013e23) cell_hwr_fs_pane_g2

0xd94a,	// (0x0001cc77) cell_hwr_fs_pane_g3_ParamLimits

0xd94a,	// (0x0001cc77) cell_hwr_fs_pane_g3

0xd957,	// (0x0001cc84) cell_hwr_fs_pane_g4_ParamLimits

0xd957,	// (0x0001cc84) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001eb23) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001eb23) cell_hwr_fs_pane_g

0xc1bb,	// (0x0001b4e8) cell_hwr_fs_pane_t1

0x275b,	// (0x00011a88) grid_highlight_pane_cp6

0x275b,	// (0x00011a88) main_idle_act2_pane

0x38af,	// (0x00012bdc) aid_inside_area_popup_secondary

0xda5f,	// (0x0001cd8c) aid_inside_area_window_primary_ParamLimits

0xda5f,	// (0x0001cd8c) aid_inside_area_window_primary

0x676a,	// (0x00015a97) ai2_news_ticker_pane

0x6772,	// (0x00015a9f) aid_size_cell_ai1_link_ParamLimits

0x6772,	// (0x00015a9f) aid_size_cell_ai1_link

0x678c,	// (0x00015ab9) popup_ai2_data_window_ParamLimits

0x678c,	// (0x00015ab9) popup_ai2_data_window

0x67a0,	// (0x00015acd) popup_ai2_link_window_ParamLimits

0x67a0,	// (0x00015acd) popup_ai2_link_window

0x4dbb,	// (0x000140e8) bg_popup_sub_pane_cp4_ParamLimits

0x4dbb,	// (0x000140e8) bg_popup_sub_pane_cp4

0x67b4,	// (0x00015ae1) grid_ai2_link_pane_ParamLimits

0x67b4,	// (0x00015ae1) grid_ai2_link_pane

0x67cb,	// (0x00015af8) popup_ai2_link_window_g1_ParamLimits

0x67cb,	// (0x00015af8) popup_ai2_link_window_g1

0x67d7,	// (0x00015b04) popup_ai2_link_window_g2_ParamLimits

0x67d7,	// (0x00015b04) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001ecf6) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001ecf6) popup_ai2_link_window_g

0x67e6,	// (0x00015b13) ai2_mp_button_pane

0x67ee,	// (0x00015b1b) ai2_mp_volume_pane

0x4fef,	// (0x0001431c) bg_popup_sub_pane_cp5_ParamLimits

0x4fef,	// (0x0001431c) bg_popup_sub_pane_cp5

0x67f6,	// (0x00015b23) heading_ai2_gene_pane_ParamLimits

0x67f6,	// (0x00015b23) heading_ai2_gene_pane

0x6802,	// (0x00015b2f) list_ai2_gene_pane_ParamLimits

0x6802,	// (0x00015b2f) list_ai2_gene_pane

0x684a,	// (0x00015b77) cell_ai2_link_pane_ParamLimits

0x684a,	// (0x00015b77) cell_ai2_link_pane

0x6860,	// (0x00015b8d) cell_ai2_link_pane_g1

0x275b,	// (0x00011a88) grid_highlight_pane_cp7

0x1666,	// (0x00010993) ai2_mp_volume_pane_g1

0x6931,	// (0x00015c5e) ai2_mp_volume_pane_g2

0x68a6,	// (0x00015bd3) list_ai2_gene_pane_t1

0x6939,	// (0x00015c66) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001ed0f) ai2_mp_volume_pane_g

0x166e,	// (0x0001099b) volume_small_pane_cp3

0x6941,	// (0x00015c6e) aid_size_cell_ai2_button

0x6949,	// (0x00015c76) grid_ai2_button_pane

0x6952,	// (0x00015c7f) cell_ai2_button_pane_ParamLimits

0x6952,	// (0x00015c7f) cell_ai2_button_pane

0x2751,	// (0x00011a7e) cell_ai2_button_pane_g1

0x275b,	// (0x00011a88) grid_highlight_pane_cp8

0x68f1,	// (0x00015c1e) ai2_gene_pane_t1_ParamLimits

0x68f1,	// (0x00015c1e) ai2_gene_pane_t1

0xbaa9,	// (0x0001add6) aid_height_parent_landscape

0xdbaa,	// (0x0001ced7) aid_height_set_list

0x6181,	// (0x000154ae) aid_size_parent

0x6590,	// (0x000158bd) aid_size_cell_graphic_pane_ParamLimits

0x6812,	// (0x00015b3f) popup_ai2_data_window_g1_ParamLimits

0x6812,	// (0x00015b3f) popup_ai2_data_window_g1

0x681e,	// (0x00015b4b) ai2_news_ticker_pane_g1

0x6826,	// (0x00015b53) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001ecfb) ai2_news_ticker_pane_g

0x682e,	// (0x00015b5b) ai2_news_ticker_pane_t1

0x683c,	// (0x00015b69) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001ed00) ai2_news_ticker_pane_t

0x6869,	// (0x00015b96) heading_ai2_gene_pane_g1

0x6871,	// (0x00015b9e) heading_ai2_gene_pane_t1_ParamLimits

0x6871,	// (0x00015b9e) heading_ai2_gene_pane_t1

0x6886,	// (0x00015bb3) list_highlight_pane_cp6

0x688e,	// (0x00015bbb) ai2_gene_pane_ParamLimits

0x688e,	// (0x00015bbb) ai2_gene_pane

0x68b4,	// (0x00015be1) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001ed05) list_ai2_gene_pane_t

0x68c2,	// (0x00015bef) list_highlight_pane_cp8_ParamLimits

0x68c2,	// (0x00015bef) list_highlight_pane_cp8

0x68d3,	// (0x00015c00) ai2_gene_pane_g1_ParamLimits

0x68d3,	// (0x00015c00) ai2_gene_pane_g1

0x68e5,	// (0x00015c12) ai2_gene_pane_g2_ParamLimits

0x68e5,	// (0x00015c12) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001ed0a) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001ed0a) ai2_gene_pane_g

0x3045,	// (0x00012372) scroll_pane_cp12

0xba68,	// (0x0001ad95) control_pane_t3_ParamLimits

0xba68,	// (0x0001ad95) control_pane_t3

0xd4a3,	// (0x0001c7d0) status_small_pane_g8_ParamLimits

0xd4a3,	// (0x0001c7d0) status_small_pane_g8

0xbbae,	// (0x0001aedb) popup_find_window_ParamLimits

0xbe2f,	// (0x0001b15c) popup_note_image_window_ParamLimits

0x30dc,	// (0x00012409) list_double2_graphic_pane_vc_g1_ParamLimits

0x30dc,	// (0x00012409) list_double2_graphic_pane_vc_g1

0x3062,	// (0x0001238f) list_double2_graphic_pane_vc_g2_ParamLimits

0x3062,	// (0x0001238f) list_double2_graphic_pane_vc_g2

0x306e,	// (0x0001239b) list_double2_graphic_pane_vc_g3_ParamLimits

0x306e,	// (0x0001239b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001eae6) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eae6) list_double2_graphic_pane_vc_g

0x4c25,	// (0x00013f52) list_double2_graphic_pane_vc_t1_ParamLimits

0x4c25,	// (0x00013f52) list_double2_graphic_pane_vc_t1

0x3062,	// (0x0001238f) list_single_heading_pane_vc_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_heading_pane_vc_g1

0x306e,	// (0x0001239b) list_single_heading_pane_vc_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_heading_pane_vc_g

0x4cdf,	// (0x0001400c) list_single_heading_pane_vc_t1_ParamLimits

0x4cdf,	// (0x0001400c) list_single_heading_pane_vc_t1

0x4cf5,	// (0x00014022) list_single_heading_pane_vc_t2_ParamLimits

0x4cf5,	// (0x00014022) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001eb07) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001eb07) list_single_heading_pane_vc_t

0x4d11,	// (0x0001403e) list_setting_number_pane_vc_g1_ParamLimits

0x4d11,	// (0x0001403e) list_setting_number_pane_vc_g1

0x4d1d,	// (0x0001404a) list_setting_number_pane_vc_g2_ParamLimits

0x4d1d,	// (0x0001404a) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb0c) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb0c) list_setting_number_pane_vc_g

0x4d29,	// (0x00014056) list_setting_number_pane_vc_t1_ParamLimits

0x4d29,	// (0x00014056) list_setting_number_pane_vc_t1

0x4d3d,	// (0x0001406a) list_setting_number_pane_vc_t2_ParamLimits

0x4d3d,	// (0x0001406a) list_setting_number_pane_vc_t2

0x4d57,	// (0x00014084) list_setting_number_pane_vc_t3_ParamLimits

0x4d57,	// (0x00014084) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001eb11) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001eb11) list_setting_number_pane_vc_t

0x4d7f,	// (0x000140ac) set_value_pane_vc_ParamLimits

0x4d7f,	// (0x000140ac) set_value_pane_vc

0x6380,	// (0x000156ad) list_double2_graphic_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double2_graphic_pane_vc

0x6393,	// (0x000156c0) list_double2_large_graphic_pane_vc_ParamLimits

0x6393,	// (0x000156c0) list_double2_large_graphic_pane_vc

0x6380,	// (0x000156ad) list_double2_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double2_pane_vc

0x6380,	// (0x000156ad) list_double_graphic_heading_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_graphic_heading_pane_vc

0x6380,	// (0x000156ad) list_double_graphic_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_graphic_pane_vc

0x6380,	// (0x000156ad) list_double_heading_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_heading_pane_vc

0x63a5,	// (0x000156d2) list_double_large_graphic_pane_vc_ParamLimits

0x63a5,	// (0x000156d2) list_double_large_graphic_pane_vc

0x6380,	// (0x000156ad) list_double_number_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_number_pane_vc

0x6380,	// (0x000156ad) list_double_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_pane_vc

0x6380,	// (0x000156ad) list_double_time_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_double_time_pane_vc

0x6380,	// (0x000156ad) list_setting_number_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_setting_number_pane_vc

0x6380,	// (0x000156ad) list_setting_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_setting_pane_vc

0x6380,	// (0x000156ad) list_single_graphic_heading_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_single_graphic_heading_pane_vc

0x6380,	// (0x000156ad) list_single_heading_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_single_heading_pane_vc

0x6380,	// (0x000156ad) list_single_number_heading_pane_vc_ParamLimits

0x6380,	// (0x000156ad) list_single_number_heading_pane_vc

0x6985,	// (0x00015cb2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6985,	// (0x00015cb2) list_double_graphic_heading_pane_vc_g1

0x6991,	// (0x00015cbe) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6991,	// (0x00015cbe) list_double_graphic_heading_pane_vc_g2

0x699d,	// (0x00015cca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x699d,	// (0x00015cca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001ed16) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001ed16) list_double_graphic_heading_pane_vc_g

0x69a9,	// (0x00015cd6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x69a9,	// (0x00015cd6) list_double_graphic_heading_pane_vc_t1

0x69c5,	// (0x00015cf2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x69c5,	// (0x00015cf2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001ed1d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001ed1d) list_double_graphic_heading_pane_vc_t

0x4d11,	// (0x0001403e) list_setting_pane_vc_g1_ParamLimits

0x4d11,	// (0x0001403e) list_setting_pane_vc_g1

0x4d1d,	// (0x0001404a) list_setting_pane_vc_g2_ParamLimits

0x4d1d,	// (0x0001404a) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001eb0c) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001eb0c) list_setting_pane_vc_g

0x6bd5,	// (0x00015f02) list_setting_pane_vc_t1_ParamLimits

0x6bd5,	// (0x00015f02) list_setting_pane_vc_t1

0x6bef,	// (0x00015f1c) list_setting_pane_vc_t2_ParamLimits

0x6bef,	// (0x00015f1c) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0001ed60) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0001ed60) list_setting_pane_vc_t

0x4d7f,	// (0x000140ac) set_value_pane_cp_vc_ParamLimits

0x4d7f,	// (0x000140ac) set_value_pane_cp_vc

0x3062,	// (0x0001238f) list_single_number_heading_pane_vc_g1_ParamLimits

0x3062,	// (0x0001238f) list_single_number_heading_pane_vc_g1

0x306e,	// (0x0001239b) list_single_number_heading_pane_vc_g2_ParamLimits

0x306e,	// (0x0001239b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_single_number_heading_pane_vc_g

0x4cdf,	// (0x0001400c) list_single_number_heading_pane_vc_t1_ParamLimits

0x4cdf,	// (0x0001400c) list_single_number_heading_pane_vc_t1

0x6c07,	// (0x00015f34) list_single_number_heading_pane_vc_t2_ParamLimits

0x6c07,	// (0x00015f34) list_single_number_heading_pane_vc_t2

0x30ca,	// (0x000123f7) list_single_number_heading_pane_vc_t3_ParamLimits

0x30ca,	// (0x000123f7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0001ed65) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001ed65) list_single_number_heading_pane_vc_t

0x30dc,	// (0x00012409) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x30dc,	// (0x00012409) list_single_graphic_heading_pane_vc_g1

0x3062,	// (0x0001238f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x3062,	// (0x0001238f) list_single_graphic_heading_pane_vc_g4

0x306e,	// (0x0001239b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x306e,	// (0x0001239b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001eae6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001eae6) list_single_graphic_heading_pane_vc_g

0x4cdf,	// (0x0001400c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4cdf,	// (0x0001400c) list_single_graphic_heading_pane_vc_t1

0x6c1b,	// (0x00015f48) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6c1b,	// (0x00015f48) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0001ed6c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0001ed6c) list_single_graphic_heading_pane_vc_t

0x3062,	// (0x0001238f) list_double2_pane_vc_g1_ParamLimits

0x3062,	// (0x0001238f) list_double2_pane_vc_g1

0x306e,	// (0x0001239b) list_double2_pane_vc_g2_ParamLimits

0x306e,	// (0x0001239b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_double2_pane_vc_g

0x631d,	// (0x0001564a) list_double2_pane_vc_t1_ParamLimits

0x631d,	// (0x0001564a) list_double2_pane_vc_t1

0x6c2f,	// (0x00015f5c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6c2f,	// (0x00015f5c) list_double2_large_graphic_pane_vc_g1

0x6c3b,	// (0x00015f68) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6c3b,	// (0x00015f68) list_double2_large_graphic_pane_vc_g2

0x6c47,	// (0x00015f74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6c47,	// (0x00015f74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001e912) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001e912) list_double2_large_graphic_pane_vc_g

0x6c53,	// (0x00015f80) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6c53,	// (0x00015f80) list_double2_large_graphic_pane_vc_t1

0x6c69,	// (0x00015f96) list_double_time_pane_vc_g1_ParamLimits

0x6c69,	// (0x00015f96) list_double_time_pane_vc_g1

0x6c75,	// (0x00015fa2) list_double_time_pane_vc_g2_ParamLimits

0x6c75,	// (0x00015fa2) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x0001ed71) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x0001ed71) list_double_time_pane_vc_g

0x6c81,	// (0x00015fae) list_double_time_pane_vc_t1_ParamLimits

0x6c81,	// (0x00015fae) list_double_time_pane_vc_t1

0x6c9f,	// (0x00015fcc) list_double_time_pane_vc_t2_ParamLimits

0x6c9f,	// (0x00015fcc) list_double_time_pane_vc_t2

0x6cc9,	// (0x00015ff6) list_double_time_pane_vc_t3_ParamLimits

0x6cc9,	// (0x00015ff6) list_double_time_pane_vc_t3

0x6cdb,	// (0x00016008) list_double_time_pane_vc_t4_ParamLimits

0x6cdb,	// (0x00016008) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x0001ed76) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ed76) list_double_time_pane_vc_t

0x3062,	// (0x0001238f) list_double_pane_vc_g1_ParamLimits

0x3062,	// (0x0001238f) list_double_pane_vc_g1

0x306e,	// (0x0001239b) list_double_pane_vc_g2_ParamLimits

0x306e,	// (0x0001239b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_double_pane_vc_g

0x6cef,	// (0x0001601c) list_double_pane_vc_t1_ParamLimits

0x6cef,	// (0x0001601c) list_double_pane_vc_t1

0x6d01,	// (0x0001602e) list_double_pane_vc_t2_ParamLimits

0x6d01,	// (0x0001602e) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x0001ed7f) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x0001ed7f) list_double_pane_vc_t

0x3062,	// (0x0001238f) list_double_number_pane_vc_g1_ParamLimits

0x3062,	// (0x0001238f) list_double_number_pane_vc_g1

0x306e,	// (0x0001239b) list_double_number_pane_vc_g2_ParamLimits

0x306e,	// (0x0001239b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001e8f5) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001e8f5) list_double_number_pane_vc_g

0x6d19,	// (0x00016046) list_double_number_pane_vc_t1_ParamLimits

0x6d19,	// (0x00016046) list_double_number_pane_vc_t1

0x6d2b,	// (0x00016058) list_double_number_pane_vc_t2_ParamLimits

0x6d2b,	// (0x00016058) list_double_number_pane_vc_t2

0x6d3d,	// (0x0001606a) list_double_number_pane_vc_t3_ParamLimits

0x6d3d,	// (0x0001606a) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x0001ed84) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x0001ed84) list_double_number_pane_vc_t

0x6d55,	// (0x00016082) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6d55,	// (0x00016082) list_double_large_graphic_pane_vc_g1

0x6d71,	// (0x0001609e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6d71,	// (0x0001609e) list_double_large_graphic_pane_vc_g2

0x6d85,	// (0x000160b2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6d85,	// (0x000160b2) list_double_large_graphic_pane_vc_g3

0x6d94,	// (0x000160c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6d94,	// (0x000160c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x0001ed8b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x0001ed8b) list_double_large_graphic_pane_vc_g

0x6da3,	// (0x000160d0) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6da3,	// (0x000160d0) list_double_large_graphic_pane_vc_t1

0x6dbd,	// (0x000160ea) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6dbd,	// (0x000160ea) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x0001ed94) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x0001ed94) list_double_large_graphic_pane_vc_t

0x6991,	// (0x00015cbe) list_double_heading_pane_vc_g1_ParamLimits

0x6991,	// (0x00015cbe) list_double_heading_pane_vc_g1

0x699d,	// (0x00015cca) list_double_heading_pane_vc_g2_ParamLimits

0x699d,	// (0x00015cca) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x0001ed99) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x0001ed99) list_double_heading_pane_vc_g

0x6ddf,	// (0x0001610c) list_double_heading_pane_vc_t1_ParamLimits

0x6ddf,	// (0x0001610c) list_double_heading_pane_vc_t1

0x4cdf,	// (0x0001400c) list_double_heading_pane_vc_t2_ParamLimits

0x4cdf,	// (0x0001400c) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001ed9e) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001ed9e) list_double_heading_pane_vc_t

0x6df3,	// (0x00016120) list_double_graphic_pane_vc_g1_ParamLimits

0x6df3,	// (0x00016120) list_double_graphic_pane_vc_g1

0x6dff,	// (0x0001612c) list_double_graphic_pane_vc_g2_ParamLimits

0x6dff,	// (0x0001612c) list_double_graphic_pane_vc_g2

0x3062,	// (0x0001238f) list_double_graphic_pane_vc_g3_ParamLimits

0x3062,	// (0x0001238f) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0001eda3) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0001eda3) list_double_graphic_pane_vc_g

0x6e1c,	// (0x00016149) list_double_graphic_pane_vc_t1_ParamLimits

0x6e1c,	// (0x00016149) list_double_graphic_pane_vc_t1

0x6e3a,	// (0x00016167) list_double_graphic_pane_vc_t2_ParamLimits

0x6e3a,	// (0x00016167) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x0001edac) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x0001edac) list_double_graphic_pane_vc_t

0x01d3,	// (0x0000f500) aid_size_cell_fastswap

0xb73c,	// (0x0001aa69) aid_size_cell_touch_ParamLimits

0xb73c,	// (0x0001aa69) aid_size_cell_touch

0x0440,	// (0x0000f76d) popup_fast_swap_wide_window_ParamLimits

0x0440,	// (0x0000f76d) popup_fast_swap_wide_window

0xb8ec,	// (0x0001ac19) touch_pane_ParamLimits

0xb8ec,	// (0x0001ac19) touch_pane

0x3520,	// (0x0001284d) button_value_adjust_pane_cp2

0x3520,	// (0x0001284d) button_value_adjust_pane_cp4

0x3540,	// (0x0001286d) form_field_data_pane_cp2

0xcfd8,	// (0x0001c305) form_field_data_wide_pane_cp2

0x3bbe,	// (0x00012eeb) bg_scroll_pane_ParamLimits

0x07d6,	// (0x0000fb03) scroll_handle_pane_ParamLimits

0x07ea,	// (0x0000fb17) scroll_sc2_down_pane_ParamLimits

0x07ea,	// (0x0000fb17) scroll_sc2_down_pane

0x3bef,	// (0x00012f1c) scroll_sc2_up_pane_ParamLimits

0x3bef,	// (0x00012f1c) scroll_sc2_up_pane

0xdf84,	// (0x0001d2b1) grid_wheel_folder_pane_g1_ParamLimits

0xdf84,	// (0x0001d2b1) grid_wheel_folder_pane_g1

0x09a6,	// (0x0000fcd3) clock_nsta_pane_cp2_ParamLimits

0x09a6,	// (0x0000fcd3) clock_nsta_pane_cp2

0x477b,	// (0x00013aa8) listscroll_midp_pane_ParamLimits

0xd39a,	// (0x0001c6c7) midp_canvas_pane

0x4725,	// (0x00013a52) nsta_clock_indic_pane

0x4761,	// (0x00013a8e) listscroll_form_pane_vc

0x4769,	// (0x00013a96) listscroll_set_pane_vc_ParamLimits

0x4769,	// (0x00013a96) listscroll_set_pane_vc

0xd643,	// (0x0001c970) clock_nsta_pane

0xd66d,	// (0x0001c99a) indicator_nsta_pane

0x4bbf,	// (0x00013eec) bg_popup_sub_pane_cp2_ParamLimits

0x4bd3,	// (0x00013f00) find_pane_cp2_ParamLimits

0x4bd3,	// (0x00013f00) find_pane_cp2

0x4be9,	// (0x00013f16) grid_toobar_pane_ParamLimits

0x4d8f,	// (0x000140bc) list_form_gen_pane_vc_ParamLimits

0x4d8f,	// (0x000140bc) list_form_gen_pane_vc

0x4da5,	// (0x000140d2) scroll_pane_cp8_vc_ParamLimits

0x4da5,	// (0x000140d2) scroll_pane_cp8_vc

0x4e21,	// (0x0001414e) data_form_wide_pane_vc_ParamLimits

0x4e21,	// (0x0001414e) data_form_wide_pane_vc

0x4e2d,	// (0x0001415a) form_field_data_wide_pane_vc_g1

0x4e35,	// (0x00014162) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e35,	// (0x00014162) form_field_data_wide_pane_vc_t1

0x35fa,	// (0x00012927) input_focus_pane_cp6_vc_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_cp6_vc

0xda0d,	// (0x0001cd3a) list_midp_pane_ParamLimits

0x65f7,	// (0x00015924) scroll_pane_cp16_ParamLimits

0x65f7,	// (0x00015924) scroll_pane_cp16

0x5212,	// (0x0001453f) button_value_adjust_pane_ParamLimits

0x5212,	// (0x0001453f) button_value_adjust_pane

0xdbbb,	// (0x0001cee8) button_value_adjust_pane_cp6_ParamLimits

0xdbbb,	// (0x0001cee8) button_value_adjust_pane_cp6

0xdcd1,	// (0x0001cffe) settings_code_pane_cp_ParamLimits

0xdcd1,	// (0x0001cffe) settings_code_pane_cp

0x2751,	// (0x00011a7e) cell_touch_pane_g1

0x2751,	// (0x00011a7e) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001ea2b) cell_touch_pane_g

0xde72,	// (0x0001d19f) cell_touch_pane_cp_ParamLimits

0xde72,	// (0x0001d19f) cell_touch_pane_cp

0xde8e,	// (0x0001d1bb) cell_touch_pane_ParamLimits

0xde8e,	// (0x0001d1bb) cell_touch_pane

0x2751,	// (0x00011a7e) scroll_sc2_down_pane_g1

0x2751,	// (0x00011a7e) scroll_sc2_up_pane_g1

0x275b,	// (0x00011a88) bg_set_opt_pane_cp4_vc

0x69dd,	// (0x00015d0a) list_set_graphic_pane_vc_g1_ParamLimits

0x69dd,	// (0x00015d0a) list_set_graphic_pane_vc_g1

0x3227,	// (0x00012554) list_set_graphic_pane_vc_g2_ParamLimits

0x3227,	// (0x00012554) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001ed22) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001ed22) list_set_graphic_pane_vc_g

0x69e9,	// (0x00015d16) text_primary_small_cp13_vc_ParamLimits

0x69e9,	// (0x00015d16) text_primary_small_cp13_vc

0x6a01,	// (0x00015d2e) list_set_graphic_pane_vc_ParamLimits

0x6a01,	// (0x00015d2e) list_set_graphic_pane_vc

0x275b,	// (0x00011a88) input_focus_pane_cp2_vc

0x2751,	// (0x00011a7e) setting_code_pane_vc_g1

0x2886,	// (0x00011bb3) setting_code_pane_vc_t1

0x6a15,	// (0x00015d42) set_text_pane_vc_t1_ParamLimits

0x6a15,	// (0x00015d42) set_text_pane_vc_t1

0x275b,	// (0x00011a88) input_focus_pane_cp1_vc

0x6a32,	// (0x00015d5f) list_set_text_pane_vc

0x2751,	// (0x00011a7e) setting_text_pane_vc_g1

0x275b,	// (0x00011a88) bg_set_opt_pane_cp2_vc

0x287d,	// (0x00011baa) setting_slider_graphic_pane_vc_g1

0x6a3c,	// (0x00015d69) setting_slider_graphic_pane_vc_t1

0x6a4c,	// (0x00015d79) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001ed27) setting_slider_graphic_pane_vc_t

0x6a5c,	// (0x00015d89) slider_set_pane_cp_vc

0x6a64,	// (0x00015d91) slider_set_pane_vc_g1

0x6a6d,	// (0x00015d9a) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001ed2c) slider_set_pane_vc_g

0x3727,	// (0x00012a54) set_opt_bg_pane_g1_copy1

0x372f,	// (0x00012a5c) set_opt_bg_pane_g2_copy1

0x6a99,	// (0x00015dc6) set_opt_bg_pane_g3_copy1

0x373f,	// (0x00012a6c) set_opt_bg_pane_g4_copy1

0x3747,	// (0x00012a74) set_opt_bg_pane_g5_copy1

0x374f,	// (0x00012a7c) set_opt_bg_pane_g6_copy1

0x6aa1,	// (0x00015dce) set_opt_bg_pane_g7_copy1

0x6aab,	// (0x00015dd8) set_opt_bg_pane_g8_copy1

0x6ab3,	// (0x00015de0) set_opt_bg_pane_g9_copy1

0x275b,	// (0x00011a88) bg_set_opt_pane_cp_vc

0x6abb,	// (0x00015de8) setting_slider_pane_vc_t1

0x6aca,	// (0x00015df7) setting_slider_pane_vc_t2

0x6ada,	// (0x00015e07) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001ed3b) setting_slider_pane_vc_t

0x6aea,	// (0x00015e17) slider_set_pane_vc

0x1388,	// (0x000106b5) volume_set_pane_vc_g1

0x1677,	// (0x000109a4) volume_set_pane_vc_g2

0x1680,	// (0x000109ad) volume_set_pane_vc_g3

0x1689,	// (0x000109b6) volume_set_pane_vc_g4

0x1692,	// (0x000109bf) volume_set_pane_vc_g5

0x169b,	// (0x000109c8) volume_set_pane_vc_g6

0x13b5,	// (0x000106e2) volume_set_pane_vc_g7

0x16a4,	// (0x000109d1) volume_set_pane_vc_g8

0x16ad,	// (0x000109da) volume_set_pane_vc_g9

0x16b6,	// (0x000109e3) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0001ed42) volume_set_pane_vc_g

0x6af2,	// (0x00015e1f) volume_set_pane_vc

0x6afa,	// (0x00015e27) button_value_adjust_pane_cp1_vc

0x6b04,	// (0x00015e31) list_highlight_pane_cp2_vc

0x6b0d,	// (0x00015e3a) list_set_pane_vc_ParamLimits

0x6b0d,	// (0x00015e3a) list_set_pane_vc

0x6b6b,	// (0x00015e98) main_pane_set_vc_t1_ParamLimits

0x6b6b,	// (0x00015e98) main_pane_set_vc_t1

0x6b80,	// (0x00015ead) main_pane_set_vc_t2_ParamLimits

0x6b80,	// (0x00015ead) main_pane_set_vc_t2

0x6b92,	// (0x00015ebf) main_pane_set_vc_t3_ParamLimits

0x6b92,	// (0x00015ebf) main_pane_set_vc_t3

0x6ba4,	// (0x00015ed1) main_pane_set_vc_t4_ParamLimits

0x6ba4,	// (0x00015ed1) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0001ed57) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0001ed57) main_pane_set_vc_t

0x6bb6,	// (0x00015ee3) setting_code_pane_vc_ParamLimits

0x6bb6,	// (0x00015ee3) setting_code_pane_vc

0x6bc5,	// (0x00015ef2) setting_slider_graphic_pane_vc

0x6bc5,	// (0x00015ef2) setting_slider_pane_vc

0x6bc5,	// (0x00015ef2) setting_text_pane_vc

0x6bc5,	// (0x00015ef2) setting_volume_pane_vc

0x6bcd,	// (0x00015efa) scroll_pane_cp121_vc

0x350e,	// (0x0001283b) set_content_pane_vc

0x6e64,	// (0x00016191) button_value_adjust_pane_g1

0x6e6d,	// (0x0001619a) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0001edb1) button_value_adjust_pane_g

0x6e76,	// (0x000161a3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6e76,	// (0x000161a3) form_field_slider_wide_pane_vc_t1

0x6e8a,	// (0x000161b7) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6e8a,	// (0x000161b7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x0001edb6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0001edb6) form_field_slider_wide_pane_vc_t

0x2ad0,	// (0x00011dfd) input_focus_pane_cp10_vc_ParamLimits

0x2ad0,	// (0x00011dfd) input_focus_pane_cp10_vc

0x6eb6,	// (0x000161e3) slider_cont_pane_cp1_vc_ParamLimits

0x6eb6,	// (0x000161e3) slider_cont_pane_cp1_vc

0x6ec6,	// (0x000161f3) slider_form_pane_g1_cp2

0x6a6d,	// (0x00015d9a) slider_form_pane_g2_cp2

0x6ef3,	// (0x00016220) form_field_slider_pane_vc_t3

0x6f01,	// (0x0001622e) form_field_slider_pane_vc_t4

0x6f0f,	// (0x0001623c) slider_form_pane_vc_ParamLimits

0x6f0f,	// (0x0001623c) slider_form_pane_vc

0x6f1c,	// (0x00016249) form_field_slider_pane_vc_t1_ParamLimits

0x6f1c,	// (0x00016249) form_field_slider_pane_vc_t1

0x6e8a,	// (0x000161b7) form_field_slider_pane_vc_t2_ParamLimits

0x6e8a,	// (0x000161b7) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x0001edc8) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001edc8) form_field_slider_pane_vc_t

0x2ad0,	// (0x00011dfd) input_focus_pane_cp9_vc_ParamLimits

0x2ad0,	// (0x00011dfd) input_focus_pane_cp9_vc

0x6f38,	// (0x00016265) slider_cont_pane_vc_ParamLimits

0x6f38,	// (0x00016265) slider_cont_pane_vc

0x6f4a,	// (0x00016277) list_form_graphic_pane_cp_vc_ParamLimits

0x6f4a,	// (0x00016277) list_form_graphic_pane_cp_vc

0x4e2d,	// (0x0001415a) form_field_popup_wide_pane_vc_g1

0x6f5f,	// (0x0001628c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6f5f,	// (0x0001628c) form_field_popup_wide_pane_vc_t1

0x35fa,	// (0x00012927) input_focus_pane_cp8_vc_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_cp8_vc

0x6fa4,	// (0x000162d1) list_form_wide_pane_vc_ParamLimits

0x6fa4,	// (0x000162d1) list_form_wide_pane_vc

0x6fb0,	// (0x000162dd) list_form_graphic_pane_vc_g1

0x6fb8,	// (0x000162e5) list_form_graphic_pane_vc_t1_ParamLimits

0x6fb8,	// (0x000162e5) list_form_graphic_pane_vc_t1

0x283b,	// (0x00011b68) list_highlight_pane_cp5_vc_ParamLimits

0x283b,	// (0x00011b68) list_highlight_pane_cp5_vc

0x6fd4,	// (0x00016301) list_form_graphic_pane_vc_ParamLimits

0x6fd4,	// (0x00016301) list_form_graphic_pane_vc

0x4e2d,	// (0x0001415a) form_field_popup_pane_vc_g1

0x6fea,	// (0x00016317) form_field_popup_pane_vc_t1_ParamLimits

0x6fea,	// (0x00016317) form_field_popup_pane_vc_t1

0x35fa,	// (0x00012927) input_focus_pane_cp7_vc_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_cp7_vc

0x7001,	// (0x0001632e) list_form_pane_vc_ParamLimits

0x7001,	// (0x0001632e) list_form_pane_vc

0x700d,	// (0x0001633a) data_form_pane_vc_t1_ParamLimits

0x700d,	// (0x0001633a) data_form_pane_vc_t1

0x3727,	// (0x00012a54) input_focus_pane_vc_g1

0x372f,	// (0x00012a5c) input_focus_pane_vc_g2

0x3737,	// (0x00012a64) input_focus_pane_vc_g3

0x373f,	// (0x00012a6c) input_focus_pane_vc_g4

0x3747,	// (0x00012a74) input_focus_pane_vc_g5

0x374f,	// (0x00012a7c) input_focus_pane_vc_g6

0x3757,	// (0x00012a84) input_focus_pane_vc_g7

0x375f,	// (0x00012a8c) input_focus_pane_vc_g8

0x3767,	// (0x00012a94) input_focus_pane_vc_g9

0x2751,	// (0x00011a7e) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001e9b4) input_focus_pane_vc_g

0x4e21,	// (0x0001414e) data_form_pane_vc_ParamLimits

0x4e21,	// (0x0001414e) data_form_pane_vc

0x4e2d,	// (0x0001415a) form_field_data_pane_vc_g1

0x7028,	// (0x00016355) form_field_data_pane_vc_t1_ParamLimits

0x7028,	// (0x00016355) form_field_data_pane_vc_t1

0x35fa,	// (0x00012927) input_focus_pane_vc_ParamLimits

0x35fa,	// (0x00012927) input_focus_pane_vc

0x7042,	// (0x0001636f) button_value_adjust_pane_cp3_vc

0x704a,	// (0x00016377) button_value_adjust_pane_cp5_vc

0x7052,	// (0x0001637f) form_field_data_pane_vc_ParamLimits

0x7052,	// (0x0001637f) form_field_data_pane_vc

0x7069,	// (0x00016396) form_field_data_pane_vc_cp2

0x7071,	// (0x0001639e) form_field_data_wide_pane_vc_ParamLimits

0x7071,	// (0x0001639e) form_field_data_wide_pane_vc

0x7087,	// (0x000163b4) form_field_data_wide_pane_vc_cp2

0x708f,	// (0x000163bc) form_field_popup_pane_vc_ParamLimits

0x708f,	// (0x000163bc) form_field_popup_pane_vc

0x70a6,	// (0x000163d3) form_field_popup_wide_pane_vc_ParamLimits

0x70a6,	// (0x000163d3) form_field_popup_wide_pane_vc

0x70bc,	// (0x000163e9) form_field_slider_pane_vc_ParamLimits

0x70bc,	// (0x000163e9) form_field_slider_pane_vc

0x70cf,	// (0x000163fc) form_field_slider_wide_pane_vc_ParamLimits

0x70cf,	// (0x000163fc) form_field_slider_wide_pane_vc

0xdeac,	// (0x0001d1d9) grid_touch_1_pane_ParamLimits

0xdeac,	// (0x0001d1d9) grid_touch_1_pane

0xdec0,	// (0x0001d1ed) grid_touch_2_pane_ParamLimits

0xdec0,	// (0x0001d1ed) grid_touch_2_pane

0x719d,	// (0x000164ca) touch_pane_g1_ParamLimits

0x719d,	// (0x000164ca) touch_pane_g1

0x7106,	// (0x00016433) cell_app_pane_cp_wide_ParamLimits

0x7106,	// (0x00016433) cell_app_pane_cp_wide

0x7117,	// (0x00016444) grid_popup_fast_wide_pane_ParamLimits

0x7117,	// (0x00016444) grid_popup_fast_wide_pane

0x712b,	// (0x00016458) scroll_pane_cp19_ParamLimits

0x712b,	// (0x00016458) scroll_pane_cp19

0x275b,	// (0x00011a88) bg_popup_window_pane_cp20

0x713f,	// (0x0001646c) listscroll_popup_fast_wide_pane

0x391b,	// (0x00012c48) grid_indicator_nsta_pane

0x7147,	// (0x00016474) clock_nsta_pane_g1

0x7150,	// (0x0001647d) clock_nsta_pane_t1

0xdeea,	// (0x0001d217) cell_indicator_nsta_pane_ParamLimits

0xdeea,	// (0x0001d217) cell_indicator_nsta_pane

0x719d,	// (0x000164ca) cell_indicator_nsta_pane_g1

0xdf01,	// (0x0001d22e) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x0001edd9) cell_indicator_nsta_pane_g

0x71b8,	// (0x000164e5) clock_nsta_pane_cp

0x71c0,	// (0x000164ed) indicator_nsta_pane_cp

0x71c8,	// (0x000164f5) nsta_clock_indic_pane_g1

0x291e,	// (0x00011c4b) grid_indicator_pane

0x3ce4,	// (0x00013011) scroll_pane_cp29

0x08f5,	// (0x0000fc22) indicator_nsta_pane_cp2_ParamLimits

0x08f5,	// (0x0000fc22) indicator_nsta_pane_cp2

0x283b,	// (0x00011b68) main_apps_wheel_pane

0x509d,	// (0x000143ca) form_midp_field_text_pane_ParamLimits

0x51e4,	// (0x00014511) scroll_bar_cp050_ParamLimits

0x7229,	// (0x00016556) cell_indicator_pane_ParamLimits

0x7229,	// (0x00016556) cell_indicator_pane

0x7244,	// (0x00016571) cell_indicator_pane_g1

0xdf0e,	// (0x0001d23b) grid_wheel_folder_pane_ParamLimits

0xdf0e,	// (0x0001d23b) grid_wheel_folder_pane

0xdf1c,	// (0x0001d249) list_wheel_apps_pane_ParamLimits

0xdf1c,	// (0x0001d249) list_wheel_apps_pane

0xdf2a,	// (0x0001d257) main_apps_wheel_pane_g1_ParamLimits

0xdf2a,	// (0x0001d257) main_apps_wheel_pane_g1

0xdf36,	// (0x0001d263) main_apps_wheel_pane_g2_ParamLimits

0xdf36,	// (0x0001d263) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x0001edf5) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x0001edf5) main_apps_wheel_pane_g

0xdf44,	// (0x0001d271) main_apps_wheel_pane_t1_ParamLimits

0xdf44,	// (0x0001d271) main_apps_wheel_pane_t1

0xdf58,	// (0x0001d285) list_wheel_apps_pane_g1

0xdf60,	// (0x0001d28d) list_wheel_apps_pane_g2

0xdf68,	// (0x0001d295) list_wheel_apps_pane_g3

0xdf70,	// (0x0001d29d) list_wheel_apps_pane_g4

0xdf7a,	// (0x0001d2a7) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x0001edfa) list_wheel_apps_pane_g

0x42c5,	// (0x000135f2) navi_icon_text_pane

0xd537,	// (0x0001c864) aid_fill_nsta

0x730b,	// (0x00016638) navi_icon_text_pane_g1

0x7317,	// (0x00016644) navi_icon_text_pane_t1

0xd379,	// (0x0001c6a6) list_set_graphic_pane_t1_ParamLimits

0xd379,	// (0x0001c6a6) list_set_graphic_pane_t1

0x5936,	// (0x00014c63) popup_midp_note_alarm_window_t6_ParamLimits

0x5936,	// (0x00014c63) popup_midp_note_alarm_window_t6

0x5948,	// (0x00014c75) popup_midp_note_alarm_window_t7_ParamLimits

0x5948,	// (0x00014c75) popup_midp_note_alarm_window_t7

0x595a,	// (0x00014c87) popup_midp_note_alarm_window_t8_ParamLimits

0x595a,	// (0x00014c87) popup_midp_note_alarm_window_t8

0x596c,	// (0x00014c99) popup_midp_note_alarm_window_t9_ParamLimits

0x596c,	// (0x00014c99) popup_midp_note_alarm_window_t9

0x597e,	// (0x00014cab) popup_midp_note_alarm_window_t10_ParamLimits

0x597e,	// (0x00014cab) popup_midp_note_alarm_window_t10

0x5990,	// (0x00014cbd) popup_midp_note_alarm_window_t11_ParamLimits

0x5990,	// (0x00014cbd) popup_midp_note_alarm_window_t11

0x59a2,	// (0x00014ccf) scroll_pane_cp17_ParamLimits

0x59a2,	// (0x00014ccf) scroll_pane_cp17

0x1388,	// (0x000106b5) volume_small_pane_cp_g1

0x16bf,	// (0x000109ec) volume_small_pane_cp_g2

0x16c8,	// (0x000109f5) volume_small_pane_cp_g3

0x139a,	// (0x000106c7) volume_small_pane_cp_g4

0x16d1,	// (0x000109fe) volume_small_pane_cp_g5

0x1692,	// (0x000109bf) volume_small_pane_cp_g6

0x13ac,	// (0x000106d9) volume_small_pane_cp_g7

0x16da,	// (0x00010a07) volume_small_pane_cp_g8

0x16e3,	// (0x00010a10) volume_small_pane_cp_g9

0x13be,	// (0x000106eb) volume_small_pane_cp_g10

0x450e,	// (0x0001383b) midp_ticker_pane_g1_ParamLimits

0x451a,	// (0x00013847) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001ea80) midp_ticker_pane_g_ParamLimits

0x4526,	// (0x00013853) midp_ticker_pane_t1_ParamLimits

0xd55b,	// (0x0001c888) aid_fill_nsta_2

0x51d0,	// (0x000144fd) list_form2_midp_pane

0x6333,	// (0x00015660) midp_editing_number_pane_ParamLimits

0x6342,	// (0x0001566f) midp_ticker_pane_ParamLimits

0x7329,	// (0x00016656) form2_midp_field_pane

0x734d,	// (0x0001667a) scroll_pane_cp51

0x736d,	// (0x0001669a) form2_midp_button_pane_ParamLimits

0x736d,	// (0x0001669a) form2_midp_button_pane

0x737f,	// (0x000166ac) form2_midp_content_pane_ParamLimits

0x737f,	// (0x000166ac) form2_midp_content_pane

0x7399,	// (0x000166c6) form2_midp_field_choice_group_pane

0x73a1,	// (0x000166ce) form2_midp_field_pane_g1

0x73a9,	// (0x000166d6) form2_midp_field_pane_g2

0x73b1,	// (0x000166de) form2_midp_field_pane_g3

0x73b9,	// (0x000166e6) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0001ee1f) form2_midp_field_pane_g

0x73c1,	// (0x000166ee) form2_midp_gauge_slider_pane

0x73c9,	// (0x000166f6) form2_midp_gauge_wait_pane

0x73d1,	// (0x000166fe) form2_midp_image_pane_ParamLimits

0x73d1,	// (0x000166fe) form2_midp_image_pane

0x73ec,	// (0x00016719) form2_midp_label_pane_ParamLimits

0x73ec,	// (0x00016719) form2_midp_label_pane

0xdfad,	// (0x0001d2da) form2_midp_label_pane_cp_ParamLimits

0xdfad,	// (0x0001d2da) form2_midp_label_pane_cp

0x7426,	// (0x00016753) form2_midp_string_pane_ParamLimits

0x7426,	// (0x00016753) form2_midp_string_pane

0x7438,	// (0x00016765) form2_midp_text_pane_ParamLimits

0x7438,	// (0x00016765) form2_midp_text_pane

0x7453,	// (0x00016780) form2_midp_time_pane

0x7463,	// (0x00016790) input_focus_pane_cp51_ParamLimits

0x7463,	// (0x00016790) input_focus_pane_cp51

0x747b,	// (0x000167a8) form2_midp_label_pane_t1_ParamLimits

0x747b,	// (0x000167a8) form2_midp_label_pane_t1

0x74bb,	// (0x000167e8) form2_mdip_text_pane_t1_ParamLimits

0x74bb,	// (0x000167e8) form2_mdip_text_pane_t1

0x74d7,	// (0x00016804) form2_midp_time_pane_t1

0x74f2,	// (0x0001681f) form2_midp_gauge_slider_pane_t1

0xdfce,	// (0x0001d2fb) form2_midp_gauge_slider_pane_t2

0xdfe2,	// (0x0001d30f) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x0001ee28) form2_midp_gauge_slider_pane_t

0x7528,	// (0x00016855) form2_midp_slider_pane

0x7534,	// (0x00016861) form2_midp_gauge_wait_pane_t1

0x7542,	// (0x0001686f) form2_midp_wait_pane_ParamLimits

0x7542,	// (0x0001686f) form2_midp_wait_pane

0xdff6,	// (0x0001d323) list_single_2graphic_pane_cp4_ParamLimits

0xdff6,	// (0x0001d323) list_single_2graphic_pane_cp4

0xd979,	// (0x0001cca6) list_single_midp_graphic_pane_cp_ParamLimits

0xd979,	// (0x0001cca6) list_single_midp_graphic_pane_cp

0x275b,	// (0x00011a88) list_highlight_pane_cp20

0x759c,	// (0x000168c9) list_single_2graphic_pane_g1_cp4

0x6869,	// (0x00015b96) list_single_2graphic_pane_g2_cp4

0x75a4,	// (0x000168d1) list_single_2graphic_pane_t1_cp4

0x283b,	// (0x00011b68) list_highlight_pane_cp21

0x75b3,	// (0x000168e0) list_single_midp_graphic_pane_g4_cp

0x75c2,	// (0x000168ef) list_single_midp_graphic_pane_t1_cp

0xe00c,	// (0x0001d339) form2_mdip_string_pane_t1_ParamLimits

0xe00c,	// (0x0001d339) form2_mdip_string_pane_t1

0x275b,	// (0x00011a88) bg_wml_button_pane_cp2

0x2751,	// (0x00011a7e) form2_midp_image_pane_g1

0x32ea,	// (0x00012617) list_double_large_graphic_pane_g5_ParamLimits

0x32ea,	// (0x00012617) list_double_large_graphic_pane_g5

0x477b,	// (0x00013aa8) midp_form_pane_ParamLimits

0x283b,	// (0x00011b68) main_apps_wheel_pane_ParamLimits

0xbead,	// (0x0001b1da) popup_preview_window_ParamLimits

0xbead,	// (0x0001b1da) popup_preview_window

0x1189,	// (0x000104b6) popup_touch_info_window_ParamLimits

0x1189,	// (0x000104b6) popup_touch_info_window

0x11a7,	// (0x000104d4) popup_touch_menu_window_ParamLimits

0x11a7,	// (0x000104d4) popup_touch_menu_window

0x2747,	// (0x00011a74) bg_popup_sub_pane_cp6

0x76fa,	// (0x00016a27) list_touch_menu_pane

0x7702,	// (0x00016a2f) list_single_touch_menu_pane_ParamLimits

0x7702,	// (0x00016a2f) list_single_touch_menu_pane

0x7716,	// (0x00016a43) list_single_touch_menu_pane_t1

0x283b,	// (0x00011b68) bg_popup_sub_pane_cp7_ParamLimits

0x283b,	// (0x00011b68) bg_popup_sub_pane_cp7

0x7724,	// (0x00016a51) heading_sub_pane

0x772c,	// (0x00016a59) list_touch_info_pane_ParamLimits

0x772c,	// (0x00016a59) list_touch_info_pane

0x773b,	// (0x00016a68) list_single_touch_info_pane_ParamLimits

0x773b,	// (0x00016a68) list_single_touch_info_pane

0x774d,	// (0x00016a7a) list_single_touch_info_pane_t1

0x775b,	// (0x00016a88) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x0001ee36) list_single_touch_info_pane_t

0x4439,	// (0x00013766) bg_popup_heading_pane_cp

0x7769,	// (0x00016a96) heading_sub_pane_t1

0x4dbb,	// (0x000140e8) bg_popup_preview_window_pane_cp_ParamLimits

0x4dbb,	// (0x000140e8) bg_popup_preview_window_pane_cp

0x7724,	// (0x00016a51) heading_preview_pane

0x772c,	// (0x00016a59) list_preview_pane_ParamLimits

0x772c,	// (0x00016a59) list_preview_pane

0x7777,	// (0x00016aa4) popup_preview_window_g1

0x773b,	// (0x00016a68) list_single_preview_pane_ParamLimits

0x773b,	// (0x00016a68) list_single_preview_pane

0x777f,	// (0x00016aac) list_single_preview_pane_g1

0x7787,	// (0x00016ab4) list_single_preview_pane_t1

0x774d,	// (0x00016a7a) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x0001ee3b) list_single_preview_pane_t

0x7795,	// (0x00016ac2) bg_popup_heading_pane_cp2_ParamLimits

0x7795,	// (0x00016ac2) bg_popup_heading_pane_cp2

0x77ab,	// (0x00016ad8) heading_preview_pane_g1

0x77b3,	// (0x00016ae0) heading_preview_pane_t1_ParamLimits

0x77b3,	// (0x00016ae0) heading_preview_pane_t1

0x2941,	// (0x00011c6e) soft_indicator_pane_t1_ParamLimits

0x3022,	// (0x0001234f) scroll_pane_ParamLimits

0x3bdd,	// (0x00012f0a) scroll_sc2_left_pane

0x3be6,	// (0x00012f13) scroll_sc2_right_pane

0x3c05,	// (0x00012f32) scroll_bg_pane_g1_ParamLimits

0x3c1a,	// (0x00012f47) scroll_bg_pane_g2_ParamLimits

0x3c32,	// (0x00012f5f) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001ea0b) scroll_bg_pane_g_ParamLimits

0x3c05,	// (0x00012f32) scroll_handle_pane_g1_ParamLimits

0x3c54,	// (0x00012f81) scroll_handle_pane_g2_ParamLimits

0x3c32,	// (0x00012f5f) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001ea12) scroll_handle_pane_g_ParamLimits

0x0c59,	// (0x0000ff86) popup_choice_list_window_ParamLimits

0x0c59,	// (0x0000ff86) popup_choice_list_window

0x4bcb,	// (0x00013ef8) choice_list_pane

0x4c63,	// (0x00013f90) cell_toolbar_pane_t1

0x4c8b,	// (0x00013fb8) toolbar_button_pane_ParamLimits

0x5e5c,	// (0x00015189) ai_gene_pane_1_t2_ParamLimits

0x5e5c,	// (0x00015189) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001ec35) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001ec35) ai_gene_pane_1_t

0x77d0,	// (0x00016afd) scroll_sc2_left_pane_g1

0x77d0,	// (0x00016afd) scroll_sc2_right_pane_g1

0x477b,	// (0x00013aa8) bg_popup_sub_pane_cp10

0x77da,	// (0x00016b07) list_choice_list_pane

0x77f3,	// (0x00016b20) list_single_choice_list_pane_ParamLimits

0x77f3,	// (0x00016b20) list_single_choice_list_pane

0x7806,	// (0x00016b33) list_single_choice_list_pane_g1

0x38ec,	// (0x00012c19) list_single_choice_list_pane_t1_ParamLimits

0x38ec,	// (0x00012c19) list_single_choice_list_pane_t1

0x780e,	// (0x00016b3b) choice_list_pane_g1

0x7816,	// (0x00016b43) choice_list_pane_t1

0x2747,	// (0x00011a74) input_focus_pane_cp11

0x3ac0,	// (0x00012ded) title_pane_stacon_g2_ParamLimits

0x3ac0,	// (0x00012ded) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001e9f1) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001e9f1) title_pane_stacon_g

0x4439,	// (0x00013766) cursor_press_pane

0xbb66,	// (0x0001ae93) popup_fep_hwr_window_ParamLimits

0xbb66,	// (0x0001ae93) popup_fep_hwr_window

0x0d79,	// (0x000100a6) popup_fep_vkb_window_ParamLimits

0x0d79,	// (0x000100a6) popup_fep_vkb_window

0x7824,	// (0x00016b51) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x0001ee64) fep_vkb_side_pane_g_ParamLimits

0x1725,	// (0x00010a52) fep_hwr_candidate_pane_ParamLimits

0x1725,	// (0x00010a52) fep_hwr_candidate_pane

0x174f,	// (0x00010a7c) fep_hwr_side_pane_ParamLimits

0x174f,	// (0x00010a7c) fep_hwr_side_pane

0x176f,	// (0x00010a9c) fep_hwr_top_pane_ParamLimits

0x176f,	// (0x00010a9c) fep_hwr_top_pane

0x1787,	// (0x00010ab4) fep_hwr_write_pane_ParamLimits

0x1787,	// (0x00010ab4) fep_hwr_write_pane

0xfb37,	// (0x0001ee64) fep_vkb_side_pane_g

0x782c,	// (0x00016b59) fep_hwr_top_pane_g1

0x783e,	// (0x00016b6b) fep_hwr_top_pane_g2

0x17c1,	// (0x00010aee) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x0001ee40) fep_hwr_top_pane_g

0x17d6,	// (0x00010b03) fep_hwr_top_text_pane

0x3daa,	// (0x000130d7) fep_hwr_top_text_pane_g1

0x7874,	// (0x00016ba1) fep_hwr_top_text_pane_t1

0x18cc,	// (0x00010bf9) fep_hwr_candidate_pane_g1

0x7ab7,	// (0x00016de4) fep_vkb_keypad_pane_g3_ParamLimits

0x7ab7,	// (0x00016de4) fep_vkb_keypad_pane_g3

0x7adf,	// (0x00016e0c) fep_vkb_keypad_pane_g4_ParamLimits

0x7adf,	// (0x00016e0c) fep_vkb_keypad_pane_g4

0x7b4e,	// (0x00016e7b) fep_vkb_bottom_pane_g2_ParamLimits

0x7b4e,	// (0x00016e7b) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x0001ee6b) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x0001ee6b) fep_vkb_bottom_pane_g

0x77d0,	// (0x00016afd) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x0001ee75) cell_vkb_side_pane_g

0x7bd9,	// (0x00016f06) cell_vkb_side_pane_t1

0x7be7,	// (0x00016f14) cell_vkb_side_pane_t1_copy1

0x77d0,	// (0x00016afd) bg_fep_vkb_candidate_pane_g2

0x7d13,	// (0x00017040) cell_vkb_candidate_pane_ParamLimits

0x7882,	// (0x00016baf) aid_size_cell_vkb_ParamLimits

0x7882,	// (0x00016baf) aid_size_cell_vkb

0x7d13,	// (0x00017040) cell_vkb_candidate_pane

0x18f3,	// (0x00010c20) bg_popup_fep_shadow_pane_g1

0xe09c,	// (0x0001d3c9) fep_vkb_bottom_pane_ParamLimits

0xe09c,	// (0x0001d3c9) fep_vkb_bottom_pane

0x7944,	// (0x00016c71) fep_vkb_candidate_pane_ParamLimits

0x7944,	// (0x00016c71) fep_vkb_candidate_pane

0xe0c1,	// (0x0001d3ee) fep_vkb_keypad_pane_ParamLimits

0xe0c1,	// (0x0001d3ee) fep_vkb_keypad_pane

0xe0f6,	// (0x0001d423) fep_vkb_side_pane_ParamLimits

0xe0f6,	// (0x0001d423) fep_vkb_side_pane

0xe132,	// (0x0001d45f) fep_vkb_top_pane_ParamLimits

0xe132,	// (0x0001d45f) fep_vkb_top_pane

0x7a10,	// (0x00016d3d) fep_vkb_top_pane_g1_ParamLimits

0x7a10,	// (0x00016d3d) fep_vkb_top_pane_g1

0x7a1f,	// (0x00016d4c) fep_vkb_top_pane_g2_ParamLimits

0x7a1f,	// (0x00016d4c) fep_vkb_top_pane_g2

0x7a2e,	// (0x00016d5b) fep_vkb_top_pane_g3_ParamLimits

0x7a2e,	// (0x00016d5b) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x0001ee5b) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x0001ee5b) fep_vkb_top_pane_g

0x7a4c,	// (0x00016d79) fep_vkb_top_text_pane_ParamLimits

0x7a4c,	// (0x00016d79) fep_vkb_top_text_pane

0xe167,	// (0x0001d494) fep_vkb_side_pane_g1_ParamLimits

0xe167,	// (0x0001d494) fep_vkb_side_pane_g1

0x7aa6,	// (0x00016dd3) grid_vkb_side_pane_ParamLimits

0x7aa6,	// (0x00016dd3) grid_vkb_side_pane

0x18fb,	// (0x00010c28) bg_popup_fep_shadow_pane_g2

0x1904,	// (0x00010c31) bg_popup_fep_shadow_pane_g3

0x190c,	// (0x00010c39) bg_popup_fep_shadow_pane_g4

0x1915,	// (0x00010c42) bg_popup_fep_shadow_pane_g5

0x191f,	// (0x00010c4c) bg_popup_fep_shadow_pane_g6

0x1927,	// (0x00010c54) bg_popup_fep_shadow_pane_g7

0x373f,	// (0x00012a6c) bg_popup_fep_shadow_pane_g8

0x7afd,	// (0x00016e2a) grid_vkb_keypad_number_pane_ParamLimits

0x7afd,	// (0x00016e2a) grid_vkb_keypad_number_pane

0x7b0d,	// (0x00016e3a) grid_vkb_keypad_pane_ParamLimits

0x7b0d,	// (0x00016e3a) grid_vkb_keypad_pane

0x7b33,	// (0x00016e60) fep_vkb_bottom_pane_g1_ParamLimits

0x7b33,	// (0x00016e60) fep_vkb_bottom_pane_g1

0x7b5c,	// (0x00016e89) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b5c,	// (0x00016e89) grid_vkb_keypad_bottom_left_pane

0x7b71,	// (0x00016e9e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7b71,	// (0x00016e9e) grid_vkb_keypad_bottom_right_pane

0x7b86,	// (0x00016eb3) fep_vkb_top_text_pane_g1

0xe1ae,	// (0x0001d4db) fep_vkb_top_text_pane_t1

0xe1c0,	// (0x0001d4ed) cell_vkb_side_pane_ParamLimits

0xe1c0,	// (0x0001d4ed) cell_vkb_side_pane

0x77d0,	// (0x00016afd) cell_vkb_side_pane_g1

0x7bf5,	// (0x00016f22) cell_vkb_keypad_pane_ParamLimits

0x7bf5,	// (0x00016f22) cell_vkb_keypad_pane

0x7c6a,	// (0x00016f97) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x0001ee88) bg_popup_fep_shadow_pane_g

0x1939,	// (0x00010c66) cell_hwr_side_pane_g1

0x1939,	// (0x00010c66) cell_hwr_side_pane_g2

0x7c74,	// (0x00016fa1) cell_vkb_keypad_pane_t1

0xe1d6,	// (0x0001d503) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe1d6,	// (0x0001d503) cell_vkb_keypad_bottom_left_pane

0xe1eb,	// (0x0001d518) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe1eb,	// (0x0001d518) cell_vkb_keypad_bottom_right_pane

0x77d0,	// (0x00016afd) cell_vkb_keypad_bottom_left_pane_g1

0x77d0,	// (0x00016afd) cell_vkb_keypad_bottom_right_pane_g1

0x7cd8,	// (0x00017005) cell_vkb_keypad_number_pane_ParamLimits

0x7cd8,	// (0x00017005) cell_vkb_keypad_number_pane

0x7cf7,	// (0x00017024) cell_vkb_keypad_number_pane_g1

0x7d01,	// (0x0001702e) cell_vkb_keypad_number_pane_g2

0x7d0a,	// (0x00017037) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x0001ee7a) cell_vkb_keypad_number_pane_g

0x7c74,	// (0x00016fa1) cell_vkb_keypad_number_pane_t1

0x7d2e,	// (0x0001705b) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x0001ee9b) cell_hwr_side_pane_g

0x7d47,	// (0x00017074) cell_hwr_side_pane_t1

0x1943,	// (0x00010c70) cell_hwr_side_pane_t1_copy1

0x1951,	// (0x00010c7e) cell_hwr_candidate_pane_g1

0x1980,	// (0x00010cad) cell_hwr_candidate_pane_t1

0x77d0,	// (0x00016afd) cell_vkb_candidate_pane_g2

0x7d8b,	// (0x000170b8) cell_vkb_candidate_pane_t1

0x16ec,	// (0x00010a19) bg_popup_fep_shadow_pane_ParamLimits

0x16ec,	// (0x00010a19) bg_popup_fep_shadow_pane

0x17a1,	// (0x00010ace) bg_fep_hwr_top_pane_g4

0x7850,	// (0x00016b7d) bg_hwr_side_pane_g1_ParamLimits

0x7850,	// (0x00016b7d) bg_hwr_side_pane_g1

0xc2d2,	// (0x0001b5ff) cell_hwr_side_pane_ParamLimits

0xc2d2,	// (0x0001b5ff) cell_hwr_side_pane

0x184d,	// (0x00010b7a) fep_hwr_write_pane_g1_ParamLimits

0x184d,	// (0x00010b7a) fep_hwr_write_pane_g1

0x185a,	// (0x00010b87) fep_hwr_write_pane_g2_ParamLimits

0x185a,	// (0x00010b87) fep_hwr_write_pane_g2

0x1867,	// (0x00010b94) fep_hwr_write_pane_g3_ParamLimits

0x1867,	// (0x00010b94) fep_hwr_write_pane_g3

0xc2f2,	// (0x0001b61f) fep_hwr_write_pane_g4_ParamLimits

0xc2f2,	// (0x0001b61f) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x0001ee47) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x0001ee47) fep_hwr_write_pane_g

0x17a1,	// (0x00010ace) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x17a1,	// (0x00010ace) bg_fep_hwr_candidate_pane_g2

0x188a,	// (0x00010bb7) cell_hwr_candidate_pane_ParamLimits

0x188a,	// (0x00010bb7) cell_hwr_candidate_pane

0x18cc,	// (0x00010bf9) fep_hwr_candidate_pane_g1_ParamLimits

0x78b0,	// (0x00016bdd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78b0,	// (0x00016bdd) bg_popup_fep_shadow_pane_cp2

0x7a3e,	// (0x00016d6b) fep_vkb_top_pane_g4_ParamLimits

0x7a3e,	// (0x00016d6b) fep_vkb_top_pane_g4

0x7a84,	// (0x00016db1) fep_vkb_side_pane_g2_ParamLimits

0x7a84,	// (0x00016db1) fep_vkb_side_pane_g2

0xcf06,	// (0x0001c233) list_setting_pane_t4_ParamLimits

0xcf06,	// (0x0001c233) list_setting_pane_t4

0xcf80,	// (0x0001c2ad) list_setting_number_pane_t5_ParamLimits

0xcf80,	// (0x0001c2ad) list_setting_number_pane_t5

0xd243,	// (0x0001c570) list_double_heading_pane_cp2_ParamLimits

0xd243,	// (0x0001c570) list_double_heading_pane_cp2

0x3273,	// (0x000125a0) list_double_heading_pane_g1_cp2_ParamLimits

0x3273,	// (0x000125a0) list_double_heading_pane_g1_cp2

0x3620,	// (0x0001294d) list_double_heading_pane_g2_cp2_ParamLimits

0x3620,	// (0x0001294d) list_double_heading_pane_g2_cp2

0x7d99,	// (0x000170c6) list_double_heading_pane_t1_cp2_ParamLimits

0x7d99,	// (0x000170c6) list_double_heading_pane_t1_cp2

0x7daf,	// (0x000170dc) list_double_heading_pane_t2_cp2_ParamLimits

0x7daf,	// (0x000170dc) list_double_heading_pane_t2_cp2

0x272f,	// (0x00011a5c) aid_value_unit2

0x048c,	// (0x0000f7b9) popup_preview_fixed_window

0x2ade,	// (0x00011e0b) bg_popup_preview_window_pane_cp02

0x7dc1,	// (0x000170ee) list_preview_fixed_pane

0x7e07,	// (0x00017134) list_empty_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_empty_pane_fp

0x7e07,	// (0x00017134) list_single_cale_day_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_cale_day_pane_fp

0x7e07,	// (0x00017134) list_single_graphic_heading_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_graphic_heading_pane_fp

0x7e07,	// (0x00017134) list_single_graphic_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_graphic_pane_fp

0x7e07,	// (0x00017134) list_single_heading_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_heading_pane_fp

0x7e07,	// (0x00017134) list_single_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_pane_fp

0x7e1d,	// (0x0001714a) list_single_pane_fp_g1_ParamLimits

0x7e1d,	// (0x0001714a) list_single_pane_fp_g1

0x3273,	// (0x000125a0) list_single_pane_fp_g2_ParamLimits

0x3273,	// (0x000125a0) list_single_pane_fp_g2

0x3620,	// (0x0001294d) list_single_pane_fp_g3_ParamLimits

0x3620,	// (0x0001294d) list_single_pane_fp_g3

0x7e29,	// (0x00017156) list_single_pane_fp_g4_ParamLimits

0x7e29,	// (0x00017156) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0001eeae) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0001eeae) list_single_pane_fp_g

0x7e35,	// (0x00017162) list_single_pane_fp_t1_ParamLimits

0x7e35,	// (0x00017162) list_single_pane_fp_t1

0x7e4c,	// (0x00017179) list_single_graphic_pane_fp_g1_ParamLimits

0x7e4c,	// (0x00017179) list_single_graphic_pane_fp_g1

0x7e1d,	// (0x0001714a) list_single_graphic_pane_fp_g2_ParamLimits

0x7e1d,	// (0x0001714a) list_single_graphic_pane_fp_g2

0x3273,	// (0x000125a0) list_single_graphic_pane_fp_g3_ParamLimits

0x3273,	// (0x000125a0) list_single_graphic_pane_fp_g3

0x3620,	// (0x0001294d) list_single_graphic_pane_fp_g4_ParamLimits

0x3620,	// (0x0001294d) list_single_graphic_pane_fp_g4

0x7e29,	// (0x00017156) list_single_graphic_pane_fp_g5_ParamLimits

0x7e29,	// (0x00017156) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeb7) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeb7) list_single_graphic_pane_fp_g

0x7e58,	// (0x00017185) list_single_graphic_pane_fp_t1_ParamLimits

0x7e58,	// (0x00017185) list_single_graphic_pane_fp_t1

0x7e4c,	// (0x00017179) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7e4c,	// (0x00017179) list_single_graphic_heading_pane_fp_g1

0x7e1d,	// (0x0001714a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e1d,	// (0x0001714a) list_single_graphic_heading_pane_fp_g2

0x3273,	// (0x000125a0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3273,	// (0x000125a0) list_single_graphic_heading_pane_fp_g3

0x3620,	// (0x0001294d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3620,	// (0x0001294d) list_single_graphic_heading_pane_fp_g4

0x7e29,	// (0x00017156) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e29,	// (0x00017156) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeb7) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeb7) list_single_graphic_heading_pane_fp_g

0x7e6e,	// (0x0001719b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e6e,	// (0x0001719b) list_single_graphic_heading_pane_fp_t1

0x7e84,	// (0x000171b1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e84,	// (0x000171b1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0001eec2) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0001eec2) list_single_graphic_heading_pane_fp_t

0x7e96,	// (0x000171c3) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e96,	// (0x000171c3) list_single_cale_day_pane_fp_g1

0x7ece,	// (0x000171fb) list_single_cale_day_pane_fp_g2_ParamLimits

0x7ece,	// (0x000171fb) list_single_cale_day_pane_fp_g2

0x7eda,	// (0x00017207) list_single_cale_day_pane_fp_g3_ParamLimits

0x7eda,	// (0x00017207) list_single_cale_day_pane_fp_g3

0x7f02,	// (0x0001722f) list_single_cale_day_pane_fp_g4_ParamLimits

0x7f02,	// (0x0001722f) list_single_cale_day_pane_fp_g4

0x7f26,	// (0x00017253) list_single_cale_day_pane_fp_g5_ParamLimits

0x7f26,	// (0x00017253) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001eec7) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001eec7) list_single_cale_day_pane_fp_g

0x7f4a,	// (0x00017277) list_single_cale_day_pane_fp_t1_ParamLimits

0x7f4a,	// (0x00017277) list_single_cale_day_pane_fp_t1

0x7f70,	// (0x0001729d) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f70,	// (0x0001729d) list_single_cale_day_pane_fp_t2

0x7f89,	// (0x000172b6) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f89,	// (0x000172b6) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0001eed2) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0001eed2) list_single_cale_day_pane_fp_t

0x7e1d,	// (0x0001714a) list_empty_pane_fp_g1_ParamLimits

0x7e1d,	// (0x0001714a) list_empty_pane_fp_g1

0x7fa2,	// (0x000172cf) list_empty_pane_fp_t1

0x7fb0,	// (0x000172dd) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0001eed9) list_empty_pane_fp_t

0x7e1d,	// (0x0001714a) list_single_heading_pane_fp_g1_ParamLimits

0x7e1d,	// (0x0001714a) list_single_heading_pane_fp_g1

0x3273,	// (0x000125a0) list_single_heading_pane_fp_g2_ParamLimits

0x3273,	// (0x000125a0) list_single_heading_pane_fp_g2

0x3620,	// (0x0001294d) list_single_heading_pane_fp_g3_ParamLimits

0x3620,	// (0x0001294d) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0001eede) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001eede) list_single_heading_pane_fp_g

0x7fbe,	// (0x000172eb) list_single_heading_pane_fp_t1_ParamLimits

0x7fbe,	// (0x000172eb) list_single_heading_pane_fp_t1

0x7fd0,	// (0x000172fd) list_single_heading_pane_fp_t2_ParamLimits

0x7fd0,	// (0x000172fd) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0001eee5) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0001eee5) list_single_heading_pane_fp_t

0x395a,	// (0x00012c87) aid_size_cell_fast

0x2a4e,	// (0x00011d7b) soft_indicator_pane_cp1_t1

0x3994,	// (0x00012cc1) cell_app_pane_cp2_ParamLimits

0x3994,	// (0x00012cc1) cell_app_pane_cp2

0x170e,	// (0x00010a3b) fep_hwr_candidate_drop_down_list_pane

0x18e6,	// (0x00010c13) fep_hwr_candidate_pane_g3_ParamLimits

0x18e6,	// (0x00010c13) fep_hwr_candidate_pane_g3

0xedb2,	// (0x0001e0df) fep_hwr_candidate_pane_g4_ParamLimits

0xedb2,	// (0x0001e0df) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x0001ee54) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x0001ee54) fep_hwr_candidate_pane_g

0x7933,	// (0x00016c60) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7933,	// (0x00016c60) fep_vkb_candidate_drop_down_list_pane

0x7d36,	// (0x00017063) fep_vkb_candidate_pane_g3

0x7d3e,	// (0x0001706b) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x0001ee81) fep_vkb_candidate_pane_g

0x1951,	// (0x00010c7e) cell_hwr_candidate_pane_g1_ParamLimits

0x195f,	// (0x00010c8c) cell_hwr_candidate_pane_g3_ParamLimits

0x195f,	// (0x00010c8c) cell_hwr_candidate_pane_g3

0x99a0,	// (0x00018ccd) cell_hwr_candidate_pane_g4_ParamLimits

0x99a0,	// (0x00018ccd) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0001eea0) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0001eea0) cell_hwr_candidate_pane_g

0x7d55,	// (0x00017082) cell_vkb_candidate_pane_g3_ParamLimits

0x7d55,	// (0x00017082) cell_vkb_candidate_pane_g3

0x7d70,	// (0x0001709d) cell_vkb_candidate_pane_g4_ParamLimits

0x7d70,	// (0x0001709d) cell_vkb_candidate_pane_g4

0x7fe6,	// (0x00017313) cell_app_pane_cp2_g1_ParamLimits

0x7fe6,	// (0x00017313) cell_app_pane_cp2_g1

0x8004,	// (0x00017331) cell_app_pane_cp2_g2_ParamLimits

0x8004,	// (0x00017331) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0001eeea) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0001eeea) cell_app_pane_cp2_g

0x8010,	// (0x0001733d) cell_app_pane_cp2_t1_ParamLimits

0x8010,	// (0x0001733d) cell_app_pane_cp2_t1

0x35fa,	// (0x00012927) grid_highlight_pane_cp1_ParamLimits

0x35fa,	// (0x00012927) grid_highlight_pane_cp1

0x199e,	// (0x00010ccb) cell_hwr_candidate_pane_cp1_ParamLimits

0x199e,	// (0x00010ccb) cell_hwr_candidate_pane_cp1

0x1951,	// (0x00010c7e) fep_hwr_candidate_drop_down_list_pane_g1

0x19bd,	// (0x00010cea) fep_hwr_candidate_drop_down_list_pane_g2

0x19ca,	// (0x00010cf7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0001eeef) fep_hwr_candidate_drop_down_list_pane_g

0x19d7,	// (0x00010d04) fep_hwr_candidate_drop_down_list_scroll_pane

0x19e0,	// (0x00010d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x19e0,	// (0x00010d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x19ed,	// (0x00010d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x19ed,	// (0x00010d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x19fa,	// (0x00010d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x19fa,	// (0x00010d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1a07,	// (0x00010d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a07,	// (0x00010d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1a22,	// (0x00010d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a22,	// (0x00010d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1a3d,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a3d,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1a58,	// (0x00010d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1a58,	// (0x00010d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1a73,	// (0x00010da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1a73,	// (0x00010da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0001eef6) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0001eef6) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8022,	// (0x0001734f) cell_vkb_candidate_pane_cp1_ParamLimits

0x8022,	// (0x0001734f) cell_vkb_candidate_pane_cp1

0x7a3e,	// (0x00016d6b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a3e,	// (0x00016d6b) fep_vkb_candidate_drop_down_list_pane_g1

0x8042,	// (0x0001736f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8042,	// (0x0001736f) fep_vkb_candidate_drop_down_list_pane_g2

0x804f,	// (0x0001737c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x804f,	// (0x0001737c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x0001ef07) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x0001ef07) fep_vkb_candidate_drop_down_list_pane_g

0x805c,	// (0x00017389) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x805c,	// (0x00017389) fep_vkb_candidate_drop_down_list_scroll_pane

0x8069,	// (0x00017396) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8069,	// (0x00017396) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8076,	// (0x000173a3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8076,	// (0x000173a3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8082,	// (0x000173af) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8082,	// (0x000173af) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x808e,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x808e,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x80af,	// (0x000173dc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x80af,	// (0x000173dc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x80d0,	// (0x000173fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x80d0,	// (0x000173fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x80f1,	// (0x0001741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x80f1,	// (0x0001741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8112,	// (0x0001743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8112,	// (0x0001743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0001ef0e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0001ef0e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xc8f5,	// (0x0001bc22) title_pane_g1_ParamLimits

0xc908,	// (0x0001bc35) title_pane_g2_ParamLimits

0xf54e,	// (0x0001e87b) title_pane_g_ParamLimits

0x3d9a,	// (0x000130c7) aid_call2_pane

0x3da2,	// (0x000130cf) aid_call_pane

0x3daa,	// (0x000130d7) popup_clock_analogue_window_g1

0x3daa,	// (0x000130d7) popup_clock_analogue_window_g2

0x07ff,	// (0x0000fb2c) popup_clock_analogue_window_g3

0x0808,	// (0x0000fb35) popup_clock_analogue_window_g4

0x2751,	// (0x00011a7e) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001ea20) popup_clock_analogue_window_g

0x0810,	// (0x0000fb3d) popup_clock_analogue_window_t1

0x081e,	// (0x0000fb4b) clock_digital_number_pane_ParamLimits

0x081e,	// (0x0000fb4b) clock_digital_number_pane

0x082a,	// (0x0000fb57) clock_digital_number_pane_cp02_ParamLimits

0x082a,	// (0x0000fb57) clock_digital_number_pane_cp02

0x0836,	// (0x0000fb63) clock_digital_number_pane_cp03_ParamLimits

0x0836,	// (0x0000fb63) clock_digital_number_pane_cp03

0x0842,	// (0x0000fb6f) clock_digital_number_pane_cp04_ParamLimits

0x0842,	// (0x0000fb6f) clock_digital_number_pane_cp04

0x084e,	// (0x0000fb7b) clock_digital_separator_pane_ParamLimits

0x084e,	// (0x0000fb7b) clock_digital_separator_pane

0x085a,	// (0x0000fb87) popup_clock_digital_window_t1_ParamLimits

0x085a,	// (0x0000fb87) popup_clock_digital_window_t1

0x2751,	// (0x00011a7e) clock_digital_number_pane_g1

0x2751,	// (0x00011a7e) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001ea2b) clock_digital_number_pane_g

0x2751,	// (0x00011a7e) clock_digital_separator_pane_g1

0x2751,	// (0x00011a7e) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001ea2b) clock_digital_separator_pane_g

0xd537,	// (0x0001c864) aid_fill_nsta_ParamLimits

0xd66d,	// (0x0001c99a) indicator_nsta_pane_ParamLimits

0x4a60,	// (0x00013d8d) popup_clock_analogue_window

0x4a60,	// (0x00013d8d) popup_clock_digital_window

0x391b,	// (0x00012c48) grid_indicator_nsta_pane_ParamLimits

0x715e,	// (0x0001648b) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x0001edd4) clock_nsta_pane_t

0x07c3,	// (0x0000faf0) aid_size_max_handle

0x07cd,	// (0x0000fafa) aid_size_min_handle

0x4439,	// (0x00013766) editor_scroll_pane

0x812d,	// (0x0001745a) ex_editor_pane

0x38c8,	// (0x00012bf5) scroll_pane_cp13

0x304e,	// (0x0001237b) scroll_pane_cp14

0x3dd9,	// (0x00013106) scroll_pane_cp36

0xd254,	// (0x0001c581) list_single_graphic_hl_pane_cp2_ParamLimits

0xd254,	// (0x0001c581) list_single_graphic_hl_pane_cp2

0xdd65,	// (0x0001d092) list_single_graphic_hl_pane_ParamLimits

0xdd65,	// (0x0001d092) list_single_graphic_hl_pane

0x8135,	// (0x00017462) aid_size_min_hl_cp1

0x813e,	// (0x0001746b) list_highlight_pane_cp34_ParamLimits

0x813e,	// (0x0001746b) list_highlight_pane_cp34

0x814f,	// (0x0001747c) list_single_graphic_hl_pane_g1_ParamLimits

0x814f,	// (0x0001747c) list_single_graphic_hl_pane_g1

0xe206,	// (0x0001d533) list_single_graphic_hl_pane_g2_ParamLimits

0xe206,	// (0x0001d533) list_single_graphic_hl_pane_g2

0xe206,	// (0x0001d533) list_single_graphic_hl_pane_g3_ParamLimits

0xe206,	// (0x0001d533) list_single_graphic_hl_pane_g3

0x43aa,	// (0x000136d7) list_single_graphic_hl_pane_g4_ParamLimits

0x43aa,	// (0x000136d7) list_single_graphic_hl_pane_g4

0xe212,	// (0x0001d53f) list_single_graphic_hl_pane_g5_ParamLimits

0xe212,	// (0x0001d53f) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0001ef1f) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0001ef1f) list_single_graphic_hl_pane_g

0xe226,	// (0x0001d553) list_single_graphic_hl_pane_t1_ParamLimits

0xe226,	// (0x0001d553) list_single_graphic_hl_pane_t1

0x8192,	// (0x000174bf) aid_size_min_hl_cp2

0x819b,	// (0x000174c8) list_highlight_pane_cp34_cp2_ParamLimits

0x819b,	// (0x000174c8) list_highlight_pane_cp34_cp2

0x814f,	// (0x0001747c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x814f,	// (0x0001747c) list_single_graphic_hl_pane_g1_cp2

0x81a8,	// (0x000174d5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81a8,	// (0x000174d5) list_single_graphic_hl_pane_g2_cp2

0x81b4,	// (0x000174e1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81b4,	// (0x000174e1) list_single_graphic_hl_pane_g3_cp2

0x3062,	// (0x0001238f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3062,	// (0x0001238f) list_single_graphic_hl_pane_g4_cp2

0x81c2,	// (0x000174ef) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81c2,	// (0x000174ef) list_single_graphic_hl_pane_g5_cp2

0xb994,	// (0x0001acc1) control_pane_g4_ParamLimits

0xb994,	// (0x0001acc1) control_pane_g4

0x477b,	// (0x00013aa8) bg_popup_sub_pane_cp10_ParamLimits

0x77da,	// (0x00016b07) list_choice_list_pane_ParamLimits

0x77e9,	// (0x00016b16) scroll_pane_cp23

0x2ade,	// (0x00011e0b) bg_popup_preview_window_pane_cp02_ParamLimits

0x7dc1,	// (0x000170ee) list_preview_fixed_pane_ParamLimits

0x7dd7,	// (0x00017104) list_preview_fixed_pane_cp_ParamLimits

0x7dd7,	// (0x00017104) list_preview_fixed_pane_cp

0x7de3,	// (0x00017110) popup_preview_fixed_window_g1_ParamLimits

0x7de3,	// (0x00017110) popup_preview_fixed_window_g1

0x7def,	// (0x0001711c) popup_preview_fixed_window_g2_ParamLimits

0x7def,	// (0x0001711c) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0001eea7) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0001eea7) popup_preview_fixed_window_g

0x0737,	// (0x0000fa64) aid_navi_side_left_pane_ParamLimits

0x074c,	// (0x0000fa79) aid_navi_side_right_pane_ParamLimits

0x0764,	// (0x0000fa91) navi_icon_pane_stacon_ParamLimits

0x0778,	// (0x0000faa5) navi_navi_pane_stacon_ParamLimits

0x0764,	// (0x0000fa91) navi_text_pane_stacon_ParamLimits

0x035b,	// (0x0000f688) main_text_info_pane

0x81ec,	// (0x00017519) listscroll_text_info_pane

0x81f4,	// (0x00017521) list_text_info_pane_ParamLimits

0x81f4,	// (0x00017521) list_text_info_pane

0x8203,	// (0x00017530) scroll_pane_cp24_ParamLimits

0x8203,	// (0x00017530) scroll_pane_cp24

0xe23c,	// (0x0001d569) list_text_info_pane_t1_ParamLimits

0xe23c,	// (0x0001d569) list_text_info_pane_t1

0xbadb,	// (0x0001ae08) popup_fast_swap2_window_ParamLimits

0xbadb,	// (0x0001ae08) popup_fast_swap2_window

0x8256,	// (0x00017583) aid_size_cell_fast2

0x2747,	// (0x00011a74) bg_popup_window_pane_cp17

0x51fc,	// (0x00014529) heading_pane_cp2

0x2d21,	// (0x0001204e) listscroll_fast2_pane

0x8260,	// (0x0001758d) grid_fast2_pane

0x826a,	// (0x00017597) listscroll_fast2_pane_g1

0x8272,	// (0x0001759f) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x0001ef2a) listscroll_fast2_pane_g

0x38c8,	// (0x00012bf5) scroll_pane_cp26

0x827c,	// (0x000175a9) cell_fast2_pane_ParamLimits

0x827c,	// (0x000175a9) cell_fast2_pane

0x8291,	// (0x000175be) cell_fast2_pane_g1

0x829a,	// (0x000175c7) cell_fast2_pane_g2

0x82a3,	// (0x000175d0) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0001ef2f) cell_fast2_pane_g

0x2e0b,	// (0x00012138) grid_highlight_pane_cp9

0x0c3d,	// (0x0000ff6a) main_eswt_pane_ParamLimits

0x0c3d,	// (0x0000ff6a) main_eswt_pane

0x8218,	// (0x00017545) list_single_text_info_pane

0x82ab,	// (0x000175d8) eswt_ctrl_button_pane

0x82ab,	// (0x000175d8) eswt_ctrl_canvas_pane

0x82b3,	// (0x000175e0) eswt_ctrl_combo_pane

0x82ab,	// (0x000175d8) eswt_ctrl_default_pane

0x82ab,	// (0x000175d8) eswt_ctrl_label_pane

0x82bb,	// (0x000175e8) eswt_ctrl_wait_pane

0x82c3,	// (0x000175f0) eswt_shell_pane

0x2747,	// (0x00011a74) listscroll_eswt_app_pane

0x82e3,	// (0x00017610) popup_eswt_tasktip_window_ParamLimits

0x82e3,	// (0x00017610) popup_eswt_tasktip_window

0x4dbb,	// (0x000140e8) bg_popup_window_pane_cp18

0x82f4,	// (0x00017621) eswt_control_pane_g1_ParamLimits

0x82f4,	// (0x00017621) eswt_control_pane_g1

0x8301,	// (0x0001762e) eswt_control_pane_g2_ParamLimits

0x8301,	// (0x0001762e) eswt_control_pane_g2

0x830e,	// (0x0001763b) eswt_control_pane_g3_ParamLimits

0x830e,	// (0x0001763b) eswt_control_pane_g3

0x831b,	// (0x00017648) eswt_control_pane_g4_ParamLimits

0x831b,	// (0x00017648) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x0001ef36) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x0001ef36) eswt_control_pane_g

0x35fa,	// (0x00012927) bg_button_pane_ParamLimits

0x35fa,	// (0x00012927) bg_button_pane

0x2e20,	// (0x0001214d) common_borders_pane_copy2_ParamLimits

0x2e20,	// (0x0001214d) common_borders_pane_copy2

0x8328,	// (0x00017655) control_button_pane_g1_ParamLimits

0x8328,	// (0x00017655) control_button_pane_g1

0x8334,	// (0x00017661) control_button_pane_g2_ParamLimits

0x8334,	// (0x00017661) control_button_pane_g2

0x8340,	// (0x0001766d) control_button_pane_g3_ParamLimits

0x8340,	// (0x0001766d) control_button_pane_g3

0x0002,

0xfc12,	// (0x0001ef3f) control_button_pane_g_ParamLimits

0xfc12,	// (0x0001ef3f) control_button_pane_g

0x8354,	// (0x00017681) control_button_pane_t1

0x8362,	// (0x0001768f) control_button_pane_t2

0x0001,

0xfc19,	// (0x0001ef46) control_button_pane_t

0x4c97,	// (0x00013fc4) bg_button_pane_g1

0x4ca7,	// (0x00013fd4) bg_button_pane_g2

0x4c9f,	// (0x00013fcc) bg_button_pane_g3

0x4cb7,	// (0x00013fe4) bg_button_pane_g4

0x4caf,	// (0x00013fdc) bg_button_pane_g5

0x4cbf,	// (0x00013fec) bg_button_pane_g6

0x4cc7,	// (0x00013ff4) bg_button_pane_g7

0x4cd7,	// (0x00014004) bg_button_pane_g8

0x4ccf,	// (0x00013ffc) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001eb89) bg_button_pane_g

0x7795,	// (0x00016ac2) common_borders_pane_ParamLimits

0x7795,	// (0x00016ac2) common_borders_pane

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy1_ParamLimits

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy1

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy1_ParamLimits

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy1

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy1_ParamLimits

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy1

0x831b,	// (0x00017648) eswt_control_pane_g4_copy1_ParamLimits

0x831b,	// (0x00017648) eswt_control_pane_g4_copy1

0x77d0,	// (0x00016afd) bg_eswt_ctrl_canvas_pane_g1

0x7795,	// (0x00016ac2) common_borders_pane_cp2_ParamLimits

0x7795,	// (0x00016ac2) common_borders_pane_cp2

0x7795,	// (0x00016ac2) common_borders_pane_cp3_ParamLimits

0x7795,	// (0x00016ac2) common_borders_pane_cp3

0x8370,	// (0x0001769d) separator_horizontal_pane

0x8378,	// (0x000176a5) separator_vertical_pane

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy2_ParamLimits

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy2

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy2_ParamLimits

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy2

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy2_ParamLimits

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy2

0x831b,	// (0x00017648) eswt_control_pane_g4_copy2_ParamLimits

0x831b,	// (0x00017648) eswt_control_pane_g4_copy2

0x2747,	// (0x00011a74) common_borders_pane_cp4

0x8381,	// (0x000176ae) separator_horizontal_pane_g1

0x838a,	// (0x000176b7) separator_horizontal_pane_g2

0x8393,	// (0x000176c0) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x0001ef4b) separator_horizontal_pane_g

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy3_ParamLimits

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy3

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy3_ParamLimits

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy3

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy3_ParamLimits

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy3

0x831b,	// (0x00017648) eswt_control_pane_g4_copy3_ParamLimits

0x831b,	// (0x00017648) eswt_control_pane_g4_copy3

0x2747,	// (0x00011a74) common_borders_pane_cp5

0x839c,	// (0x000176c9) separator_vertical_pane_g1

0x83a5,	// (0x000176d2) separator_vertical_pane_g2

0x83ae,	// (0x000176db) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x0001ef52) separator_vertical_pane_g

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy4_ParamLimits

0x82f4,	// (0x00017621) eswt_control_pane_g1_copy4

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy4_ParamLimits

0x8301,	// (0x0001762e) eswt_control_pane_g2_copy4

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy4_ParamLimits

0x830e,	// (0x0001763b) eswt_control_pane_g3_copy4

0x831b,	// (0x00017648) eswt_control_pane_g4_copy4_ParamLimits

0x831b,	// (0x00017648) eswt_control_pane_g4_copy4

0x83b7,	// (0x000176e4) eswt_ctrl_combo_button_pane

0x83bf,	// (0x000176ec) eswt_ctrl_input_pane

0x83c7,	// (0x000176f4) popup_choice_list_window_cp70

0x83cf,	// (0x000176fc) eswt_ctrl_input_pane_t1

0x2747,	// (0x00011a74) input_focus_pane_cp70

0x7795,	// (0x00016ac2) bg_button_pane_cp70_ParamLimits

0x7795,	// (0x00016ac2) bg_button_pane_cp70

0x83dd,	// (0x0001770a) eswt_ctrl_combo_button_pane_g1

0x83e5,	// (0x00017712) wait_bar_pane_cp70

0x4dbb,	// (0x000140e8) bg_popup_window_pane_cp70_ParamLimits

0x4dbb,	// (0x000140e8) bg_popup_window_pane_cp70

0x83ed,	// (0x0001771a) popup_eswt_tasktip_window_t1

0x8403,	// (0x00017730) wait_bar_pane_cp71_ParamLimits

0x8403,	// (0x00017730) wait_bar_pane_cp71

0x840f,	// (0x0001773c) grid_eswt_app_pane

0x3bdd,	// (0x00012f0a) scroll_pane_cp70

0xe259,	// (0x0001d586) cell_eswt_app_pane_ParamLimits

0xe259,	// (0x0001d586) cell_eswt_app_pane

0xe283,	// (0x0001d5b0) cell_eswt_app_pane_g1_ParamLimits

0xe283,	// (0x0001d5b0) cell_eswt_app_pane_g1

0xe2b2,	// (0x0001d5df) cell_eswt_app_pane_g2_ParamLimits

0xe2b2,	// (0x0001d5df) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x0001ef59) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x0001ef59) cell_eswt_app_pane_g

0xe2d6,	// (0x0001d603) cell_eswt_app_pane_t1_ParamLimits

0xe2d6,	// (0x0001d603) cell_eswt_app_pane_t1

0x84d1,	// (0x000177fe) grid_highlight_pane_cp70_ParamLimits

0x84d1,	// (0x000177fe) grid_highlight_pane_cp70

0x431a,	// (0x00013647) set_content_pane_g1

0xd4cc,	// (0x0001c7f9) status_small_volume_pane

0x1a8e,	// (0x00010dbb) status_small_volume_pane_g1

0x1a96,	// (0x00010dc3) volume_small2_pane

0x1a9f,	// (0x00010dcc) volume_small2_pane_g1

0x1aa8,	// (0x00010dd5) volume_small2_pane_g2

0x1ab1,	// (0x00010dde) volume_small2_pane_g3

0x1aba,	// (0x00010de7) volume_small2_pane_g4

0x1ac3,	// (0x00010df0) volume_small2_pane_g5

0x1acc,	// (0x00010df9) volume_small2_pane_g6

0x1ad5,	// (0x00010e02) volume_small2_pane_g7

0x1ade,	// (0x00010e0b) volume_small2_pane_g8

0x1ae7,	// (0x00010e14) volume_small2_pane_g9

0x1af0,	// (0x00010e1d) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x0001ef5e) volume_small2_pane_g

0x7b86,	// (0x00016eb3) fep_vkb_top_text_pane_g1_ParamLimits

0xe1ae,	// (0x0001d4db) fep_vkb_top_text_pane_t1_ParamLimits

0x7dfb,	// (0x00017128) popup_preview_fixed_window_g3_ParamLimits

0x7dfb,	// (0x00017128) popup_preview_fixed_window_g3

0xc0ea,	// (0x0001b417) popup_toolbar_trans_pane

0xdbaa,	// (0x0001ced7) aid_height_set_list_ParamLimits

0x6181,	// (0x000154ae) aid_size_parent_ParamLimits

0x477b,	// (0x00013aa8) list_highlight_pane_cp2_ParamLimits

0x431a,	// (0x00013647) set_content_pane_g1_ParamLimits

0xdd77,	// (0x0001d0a4) list_single_image_pane_ParamLimits

0xdd77,	// (0x0001d0a4) list_single_image_pane

0xe308,	// (0x0001d635) aid_size_cell_image_ParamLimits

0xe308,	// (0x0001d635) aid_size_cell_image

0xe315,	// (0x0001d642) grid_single_image_pane_ParamLimits

0xe315,	// (0x0001d642) grid_single_image_pane

0x84f6,	// (0x00017823) list_single_image_pane_g1_ParamLimits

0x84f6,	// (0x00017823) list_single_image_pane_g1

0x8502,	// (0x0001782f) list_single_image_pane_g2_ParamLimits

0x8502,	// (0x0001782f) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x0001ef73) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x0001ef73) list_single_image_pane_g

0x8516,	// (0x00017843) list_single_image_pane_t1_ParamLimits

0x8516,	// (0x00017843) list_single_image_pane_t1

0xe321,	// (0x0001d64e) cell_image_list_pane_ParamLimits

0xe321,	// (0x0001d64e) cell_image_list_pane

0xe335,	// (0x0001d662) cell_image_list_pane_g1

0xe33e,	// (0x0001d66b) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x0001ef78) cell_image_list_pane_g

0x8552,	// (0x0001787f) aid_size_cell_tb_trans_pane

0x35fa,	// (0x00012927) bg_tb_trans_pane

0x8564,	// (0x00017891) grid_tb_trans_pane

0x4c97,	// (0x00013fc4) bg_tb_trans_pane_g1

0x4ca7,	// (0x00013fd4) bg_tb_trans_pane_g2

0x4c9f,	// (0x00013fcc) bg_tb_trans_pane_g3

0x4cb7,	// (0x00013fe4) bg_tb_trans_pane_g4

0x4caf,	// (0x00013fdc) bg_tb_trans_pane_g5

0x4cd7,	// (0x00014004) bg_tb_trans_pane_g6

0x4ccf,	// (0x00013ffc) bg_tb_trans_pane_g7

0x4cbf,	// (0x00013fec) bg_tb_trans_pane_g8

0x4cc7,	// (0x00013ff4) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x0001ef7d) bg_tb_trans_pane_g

0x8578,	// (0x000178a5) cell_toolbar_trans_pane_ParamLimits

0x8578,	// (0x000178a5) cell_toolbar_trans_pane

0x77d0,	// (0x00016afd) cell_toolbar_trans_pane_g1

0xdf91,	// (0x0001d2be) list_form2_midp_pane_t1

0xdf9f,	// (0x0001d2cc) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x0001ee1a) list_form2_midp_pane_t

0x734d,	// (0x0001667a) scroll_pane_cp51_ParamLimits

0x7553,	// (0x00016880) form2_midp_wait_pane_g1

0x755c,	// (0x00016889) form2_midp_wait_pane_g2

0x7565,	// (0x00016892) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0001ee2f) form2_midp_wait_pane_g

0x283b,	// (0x00011b68) list_highlight_pane_cp21_ParamLimits

0x75b3,	// (0x000168e0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x75c2,	// (0x000168ef) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6380,	// (0x000156ad) list_single_2graphic_im_pane_ParamLimits

0x6380,	// (0x000156ad) list_single_2graphic_im_pane

0x859e,	// (0x000178cb) list_single_2graphic_im_pane_g1_ParamLimits

0x859e,	// (0x000178cb) list_single_2graphic_im_pane_g1

0x85af,	// (0x000178dc) list_single_2graphic_im_pane_g2_ParamLimits

0x85af,	// (0x000178dc) list_single_2graphic_im_pane_g2

0x85bb,	// (0x000178e8) list_single_2graphic_im_pane_g3_ParamLimits

0x85bb,	// (0x000178e8) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x0001ef90) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x0001ef90) list_single_2graphic_im_pane_g

0x85db,	// (0x00017908) list_single_2graphic_im_pane_t1_ParamLimits

0x85db,	// (0x00017908) list_single_2graphic_im_pane_t1

0x7e07,	// (0x00017134) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e07,	// (0x00017134) list_single_graphic_2heading_pane_fp

0x7e4c,	// (0x00017179) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7e4c,	// (0x00017179) list_single_graphic_2heading_pane_fp_g1

0x7e1d,	// (0x0001714a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e1d,	// (0x0001714a) list_single_graphic_2heading_pane_fp_g2

0x3273,	// (0x000125a0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3273,	// (0x000125a0) list_single_graphic_2heading_pane_fp_g3

0x3620,	// (0x0001294d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3620,	// (0x0001294d) list_single_graphic_2heading_pane_fp_g4

0x7e29,	// (0x00017156) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e29,	// (0x00017156) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001eeb7) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001eeb7) list_single_graphic_2heading_pane_fp_g

0x860c,	// (0x00017939) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x860c,	// (0x00017939) list_single_graphic_2heading_pane_fp_t1

0x7e84,	// (0x000171b1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e84,	// (0x000171b1) list_single_graphic_2heading_pane_fp_t2

0x8622,	// (0x0001794f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8622,	// (0x0001794f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x0001ef99) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x0001ef99) list_single_graphic_2heading_pane_fp_t

0x785c,	// (0x00016b89) fep_hwr_write_pane_g5_ParamLimits

0x785c,	// (0x00016b89) fep_hwr_write_pane_g5

0x7868,	// (0x00016b95) fep_hwr_write_pane_g6_ParamLimits

0x7868,	// (0x00016b95) fep_hwr_write_pane_g6

0x82c3,	// (0x000175f0) eswt_shell_pane_ParamLimits

0x4dbb,	// (0x000140e8) bg_popup_window_pane_cp18_ParamLimits

0x60bd,	// (0x000153ea) heading_pane_cp70

0x83ed,	// (0x0001771a) popup_eswt_tasktip_window_t1_ParamLimits

0xd592,	// (0x0001c8bf) aid_touch_tab_arrow_left

0xd5a8,	// (0x0001c8d5) aid_touch_tab_arrow_right

0xc920,	// (0x0001bc4d) title_pane_g3_ParamLimits

0xc920,	// (0x0001bc4d) title_pane_g3

0x34e5,	// (0x00012812) set_value_pane_g1

0xc0ea,	// (0x0001b417) popup_toolbar_trans_pane_ParamLimits

0x8552,	// (0x0001787f) aid_size_cell_tb_trans_pane_ParamLimits

0x35fa,	// (0x00012927) bg_tb_trans_pane_ParamLimits

0x8564,	// (0x00017891) grid_tb_trans_pane_ParamLimits

0x2ade,	// (0x00011e0b) cont_note_pane_ParamLimits

0x2ade,	// (0x00011e0b) cont_note_pane

0x2e20,	// (0x0001214d) cont_snote2_single_text_pane_ParamLimits

0x2e20,	// (0x0001214d) cont_snote2_single_text_pane

0x2e20,	// (0x0001214d) cont_snote2_single_graphic_pane_ParamLimits

0x2e20,	// (0x0001214d) cont_snote2_single_graphic_pane

0x5412,	// (0x0001473f) cont_note_wait_pane_ParamLimits

0x5412,	// (0x0001473f) cont_note_wait_pane

0x5412,	// (0x0001473f) cont_note_image_pane_ParamLimits

0x5412,	// (0x0001473f) cont_note_image_pane

0x8638,	// (0x00017965) popup_note2_window_g1_ParamLimits

0x8638,	// (0x00017965) popup_note2_window_g1

0x8669,	// (0x00017996) popup_note2_window_t1_ParamLimits

0x8669,	// (0x00017996) popup_note2_window_t1

0x86ae,	// (0x000179db) popup_note2_window_t2_ParamLimits

0x86ae,	// (0x000179db) popup_note2_window_t2

0x86f3,	// (0x00017a20) popup_note2_window_t3_ParamLimits

0x86f3,	// (0x00017a20) popup_note2_window_t3

0x8738,	// (0x00017a65) popup_note2_window_t4_ParamLimits

0x8738,	// (0x00017a65) popup_note2_window_t4

0x2b56,	// (0x00011e83) popup_note2_window_t5_ParamLimits

0x2b56,	// (0x00011e83) popup_note2_window_t5

0x0004,

0xfc78,	// (0x0001efa5) popup_note2_window_t_ParamLimits

0xfc78,	// (0x0001efa5) popup_note2_window_t

0x8767,	// (0x00017a94) popup_note2_image_window_g1_ParamLimits

0x8767,	// (0x00017a94) popup_note2_image_window_g1

0x8773,	// (0x00017aa0) popup_note2_image_window_g2_ParamLimits

0x8773,	// (0x00017aa0) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0001efb0) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0001efb0) popup_note2_image_window_g

0x8785,	// (0x00017ab2) popup_note2_image_window_t1_ParamLimits

0x8785,	// (0x00017ab2) popup_note2_image_window_t1

0x879d,	// (0x00017aca) popup_note2_image_window_t2_ParamLimits

0x879d,	// (0x00017aca) popup_note2_image_window_t2

0x87b5,	// (0x00017ae2) popup_note2_image_window_t3_ParamLimits

0x87b5,	// (0x00017ae2) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x0001efb5) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x0001efb5) popup_note2_image_window_t

0x5420,	// (0x0001474d) popup_note2_wait_window_g1_ParamLimits

0x5420,	// (0x0001474d) popup_note2_wait_window_g1

0x87d1,	// (0x00017afe) popup_note2_wait_window_g2_ParamLimits

0x87d1,	// (0x00017afe) popup_note2_wait_window_g2

0x5438,	// (0x00014765) popup_note2_wait_window_g3_ParamLimits

0x5438,	// (0x00014765) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x0001efbc) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x0001efbc) popup_note2_wait_window_g

0x87dd,	// (0x00017b0a) popup_note2_wait_window_t1_ParamLimits

0x87dd,	// (0x00017b0a) popup_note2_wait_window_t1

0x87fb,	// (0x00017b28) popup_note2_wait_window_t2_ParamLimits

0x87fb,	// (0x00017b28) popup_note2_wait_window_t2

0x8819,	// (0x00017b46) popup_note2_wait_window_t3_ParamLimits

0x8819,	// (0x00017b46) popup_note2_wait_window_t3

0x882b,	// (0x00017b58) popup_note2_wait_window_t4_ParamLimits

0x882b,	// (0x00017b58) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x0001efc3) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x0001efc3) popup_note2_wait_window_t

0x883d,	// (0x00017b6a) wait_bar2_pane_ParamLimits

0x883d,	// (0x00017b6a) wait_bar2_pane

0x8855,	// (0x00017b82) popup_snote2_single_text_window_g1_ParamLimits

0x8855,	// (0x00017b82) popup_snote2_single_text_window_g1

0x887d,	// (0x00017baa) popup_snote2_single_text_window_t1_ParamLimits

0x887d,	// (0x00017baa) popup_snote2_single_text_window_t1

0x88c9,	// (0x00017bf6) popup_snote2_single_text_window_t2_ParamLimits

0x88c9,	// (0x00017bf6) popup_snote2_single_text_window_t2

0x8915,	// (0x00017c42) popup_snote2_single_text_window_t3_ParamLimits

0x8915,	// (0x00017c42) popup_snote2_single_text_window_t3

0x8956,	// (0x00017c83) popup_snote2_single_text_window_t4_ParamLimits

0x8956,	// (0x00017c83) popup_snote2_single_text_window_t4

0x898c,	// (0x00017cb9) popup_snote2_single_text_window_t5_ParamLimits

0x898c,	// (0x00017cb9) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x0001efcc) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x0001efcc) popup_snote2_single_text_window_t

0x89b7,	// (0x00017ce4) popup_snote2_single_graphic_window_g1_ParamLimits

0x89b7,	// (0x00017ce4) popup_snote2_single_graphic_window_g1

0x89df,	// (0x00017d0c) popup_snote2_single_graphic_window_g2_ParamLimits

0x89df,	// (0x00017d0c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x0001efd7) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x0001efd7) popup_snote2_single_graphic_window_g

0x8a07,	// (0x00017d34) popup_snote2_single_graphic_window_t1_ParamLimits

0x8a07,	// (0x00017d34) popup_snote2_single_graphic_window_t1

0x8a53,	// (0x00017d80) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a53,	// (0x00017d80) popup_snote2_single_graphic_window_t2

0x8915,	// (0x00017c42) popup_snote2_single_graphic_window_t3_ParamLimits

0x8915,	// (0x00017c42) popup_snote2_single_graphic_window_t3

0x8956,	// (0x00017c83) popup_snote2_single_graphic_window_t4_ParamLimits

0x8956,	// (0x00017c83) popup_snote2_single_graphic_window_t4

0x898c,	// (0x00017cb9) popup_snote2_single_graphic_window_t5_ParamLimits

0x898c,	// (0x00017cb9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x0001efdc) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x0001efdc) popup_snote2_single_graphic_window_t

0x7208,	// (0x00016535) clock_nsta_pane_cp2_t1

0x7208,	// (0x00016535) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0001edf0) clock_nsta_pane_cp2_t

0x3614,	// (0x00012941) form_field_data_wide_pane_g1_ParamLimits

0x3273,	// (0x000125a0) form_field_data_wide_pane_g2_ParamLimits

0x3273,	// (0x000125a0) form_field_data_wide_pane_g2

0x3620,	// (0x0001294d) form_field_data_wide_pane_g3_ParamLimits

0x3620,	// (0x0001294d) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001e9a3) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001e9a3) form_field_data_wide_pane_g

0xded4,	// (0x0001d201) grid_touch_3_pane_ParamLimits

0xded4,	// (0x0001d201) grid_touch_3_pane

0xe347,	// (0x0001d674) cell_touch_3_pane_ParamLimits

0xe347,	// (0x0001d674) cell_touch_3_pane

0x77d0,	// (0x00016afd) cell_touch_3_pane_g1

0x77d0,	// (0x00016afd) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x0001ee75) cell_touch_3_pane_g

0x2b88,	// (0x00011eb5) cont_query_data_pane

0x2b90,	// (0x00011ebd) cont_query_data_pane_cp1

0x8ad0,	// (0x00017dfd) button_value_adjust_pane_cp7

0x8ad8,	// (0x00017e05) query_popup_pane_cp3

0x3e96,	// (0x000131c3) bg_popup_sub_pane_cp22_ParamLimits

0x0879,	// (0x0000fba6) navi_navi_volume_pane_cp2

0x0891,	// (0x0000fbbe) popup_side_volume_key_window_g2

0x089d,	// (0x0000fbca) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001ea39) popup_side_volume_key_window_g

0x08b7,	// (0x0000fbe4) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001ea40) popup_side_volume_key_window_t

0x41db,	// (0x00013508) popup_side_volume_key_window_ParamLimits

0xccf1,	// (0x0001c01e) list_double_graphic_pane_g4_ParamLimits

0xccf1,	// (0x0001c01e) list_double_graphic_pane_g4

0xdd51,	// (0x0001d07e) list_single_2heading_msg_pane_ParamLimits

0xdd51,	// (0x0001d07e) list_single_2heading_msg_pane

0xe390,	// (0x0001d6bd) list_single_2heading_msg_pane_g1_ParamLimits

0xe390,	// (0x0001d6bd) list_single_2heading_msg_pane_g1

0xe39c,	// (0x0001d6c9) list_single_2heading_msg_pane_g2_ParamLimits

0xe39c,	// (0x0001d6c9) list_single_2heading_msg_pane_g2

0xe3af,	// (0x0001d6dc) list_single_2heading_msg_pane_g3_ParamLimits

0xe3af,	// (0x0001d6dc) list_single_2heading_msg_pane_g3

0x8b13,	// (0x00017e40) list_single_2heading_msg_pane_g4_ParamLimits

0x8b13,	// (0x00017e40) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x0001efe7) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x0001efe7) list_single_2heading_msg_pane_g

0x8b2b,	// (0x00017e58) list_single_2heading_msg_pane_t1_ParamLimits

0x8b2b,	// (0x00017e58) list_single_2heading_msg_pane_t1

0xe3bb,	// (0x0001d6e8) list_single_2heading_msg_pane_t2_ParamLimits

0xe3bb,	// (0x0001d6e8) list_single_2heading_msg_pane_t2

0xe426,	// (0x0001d753) list_single_2heading_msg_pane_t3_ParamLimits

0xe426,	// (0x0001d753) list_single_2heading_msg_pane_t3

0x8bc0,	// (0x00017eed) list_single_2heading_msg_pane_t4_ParamLimits

0x8bc0,	// (0x00017eed) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0001eff0) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0001eff0) list_single_2heading_msg_pane_t

0x278f,	// (0x00011abc) title_pane_g4_ParamLimits

0x278f,	// (0x00011abc) title_pane_g4

0x0687,	// (0x0000f9b4) title_pane_stacon_g3_ParamLimits

0x0687,	// (0x0000f9b4) title_pane_stacon_g3

0x85cf,	// (0x000178fc) list_single_2graphic_im_pane_g4_ParamLimits

0x85cf,	// (0x000178fc) list_single_2graphic_im_pane_g4

0x5e79,	// (0x000151a6) popup_side_volume_key_window_cp

0x677e,	// (0x00015aab) main_idle_act2_pane_t1

0x1276,	// (0x000105a3) toolbar_button_pane_g10

0xcc2a,	// (0x0001bf57) popup_toolbar_window_cp1

0x71f9,	// (0x00016526) clock_nsta_pane_cp_t1

0x71f9,	// (0x00016526) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x0001edeb) clock_nsta_pane_cp_t

0x0879,	// (0x0000fba6) navi_navi_volume_pane_cp2_ParamLimits

0x0885,	// (0x0000fbb2) popup_side_volume_key_window_g1_ParamLimits

0x0891,	// (0x0000fbbe) popup_side_volume_key_window_g2_ParamLimits

0x089d,	// (0x0000fbca) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001ea39) popup_side_volume_key_window_g_ParamLimits

0x16fa,	// (0x00010a27) fep_hwr_aid_pane

0x17a1,	// (0x00010ace) bg_fep_hwr_top_pane_g4_ParamLimits

0x782c,	// (0x00016b59) fep_hwr_top_pane_g1_ParamLimits

0x783e,	// (0x00016b6b) fep_hwr_top_pane_g2_ParamLimits

0x17c1,	// (0x00010aee) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x0001ee40) fep_hwr_top_pane_g_ParamLimits

0x17d6,	// (0x00010b03) fep_hwr_top_text_pane_ParamLimits

0x5c3c,	// (0x00014f69) aid_touch_tab_arrow_arrow_2

0x5c45,	// (0x00014f72) aid_touch_tab_arrow_left_2

0x170e,	// (0x00010a3b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1745,	// (0x00010a72) fep_hwr_prediction_pane

0x7995,	// (0x00016cc2) fep_vkb_prediction_pane

0xe18e,	// (0x0001d4bb) fep_vkb_side_pane_g3_ParamLimits

0xe18e,	// (0x0001d4bb) fep_vkb_side_pane_g3

0x1951,	// (0x00010c7e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x19bd,	// (0x00010cea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x19ca,	// (0x00010cf7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0001eeef) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1af9,	// (0x00010e26) fep_hwr_prediction_pane_g1

0x1b03,	// (0x00010e30) fep_hwr_prediction_pane_g2

0x1b0b,	// (0x00010e38) fep_hwr_prediction_pane_g3

0x1b13,	// (0x00010e40) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x0001eff9) fep_hwr_prediction_pane_g

0x8be5,	// (0x00017f12) fep_vkb_prediction_pane_g1

0x8bef,	// (0x00017f1c) fep_vkb_prediction_pane_g2

0x8bf7,	// (0x00017f24) fep_vkb_prediction_pane_g3

0x8bff,	// (0x00017f2c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0001f002) fep_vkb_prediction_pane_g

0x1556,	// (0x00010883) slider_set_pane_g3

0x156a,	// (0x00010897) slider_set_pane_g4

0x1582,	// (0x000108af) slider_set_pane_g5

0x1556,	// (0x00010883) slider_set_pane_g6

0x1598,	// (0x000108c5) slider_set_pane_g7

0x62de,	// (0x0001560b) slider_form_pane_g3

0x62e7,	// (0x00015614) slider_form_pane_g4

0x62ef,	// (0x0001561c) slider_form_pane_g5

0x62de,	// (0x0001560b) slider_form_pane_g6

0xdcf1,	// (0x0001d01e) slider_form_pane_g7

0x6a75,	// (0x00015da2) slider_set_pane_vc_g3

0x6a7e,	// (0x00015dab) slider_set_pane_vc_g4

0x6a87,	// (0x00015db4) slider_set_pane_vc_g5

0x6a75,	// (0x00015da2) slider_set_pane_vc_g6

0x6a90,	// (0x00015dbd) slider_set_pane_vc_g7

0x6ecf,	// (0x000161fc) slider_form_pane_vc_g1

0x6ed8,	// (0x00016205) slider_form_pane_vc_g2

0x6ee1,	// (0x0001620e) slider_form_pane_vc_g3

0x6ecf,	// (0x000161fc) slider_form_pane_vc_g4

0x6eea,	// (0x00016217) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x0001edbd) slider_form_pane_vc_g

0x035b,	// (0x0000f688) main_idle_act3_pane

0x8c07,	// (0x00017f34) ai3_links_pane

0xe494,	// (0x0001d7c1) popup_ai3_data_window_ParamLimits

0xe494,	// (0x0001d7c1) popup_ai3_data_window

0x2747,	// (0x00011a74) grid_ai3_links_pane

0xe4ac,	// (0x0001d7d9) cell_ai3_links_pane_ParamLimits

0xe4ac,	// (0x0001d7d9) cell_ai3_links_pane

0x8c40,	// (0x00017f6d) bg_popup_sub_pane_cp11

0x8c4d,	// (0x00017f7a) cell_ai3_links_pane_g1

0x2747,	// (0x00011a74) bg_popup_sub_pane_cp12

0x8c72,	// (0x00017f9f) heading_ai3_data_pane

0x8c7a,	// (0x00017fa7) list_ai3_gene_pane

0x8c86,	// (0x00017fb3) popup_ai3_data_window_g1

0x8c8e,	// (0x00017fbb) heading_ai3_data_pane_g1

0x8c96,	// (0x00017fc3) heading_ai3_data_pane_t1

0x8ca4,	// (0x00017fd1) list_double_ai3_gene_pane_ParamLimits

0x8ca4,	// (0x00017fd1) list_double_ai3_gene_pane

0x8cb1,	// (0x00017fde) list_single_ai3_gene_pane_ParamLimits

0x8cb1,	// (0x00017fde) list_single_ai3_gene_pane

0x7795,	// (0x00016ac2) list_highlight_pane_cp7_ParamLimits

0x7795,	// (0x00016ac2) list_highlight_pane_cp7

0x8cbe,	// (0x00017feb) list_single_a13_gene_pane_t1_ParamLimits

0x8cbe,	// (0x00017feb) list_single_a13_gene_pane_t1

0x8cd5,	// (0x00018002) list_single_ai3_gene_pane_g1

0x8cde,	// (0x0001800b) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x0001f00b) list_single_ai3_gene_pane_g

0x8ce6,	// (0x00018013) list_double_ai3_gene_pane_g1_ParamLimits

0x8ce6,	// (0x00018013) list_double_ai3_gene_pane_g1

0x8cf2,	// (0x0001801f) list_double_ai3_gene_pane_t1_ParamLimits

0x8cf2,	// (0x0001801f) list_double_ai3_gene_pane_t1

0x8d0e,	// (0x0001803b) list_double_ai3_gene_pane_t2_ParamLimits

0x8d0e,	// (0x0001803b) list_double_ai3_gene_pane_t2

0x8d23,	// (0x00018050) list_double_ai3_gene_pane_t3_ParamLimits

0x8d23,	// (0x00018050) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0001f010) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0001f010) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8ae9,	// (0x00017e16) aid_size_min_col_2

0xe37a,	// (0x0001d6a7) aid_size_min_msg_ParamLimits

0xe37a,	// (0x0001d6a7) aid_size_min_msg

0xe1a2,	// (0x0001d4cf) fep_vkb_top_text_pane_g2_ParamLimits

0xe1a2,	// (0x0001d4cf) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x0001ee70) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x0001ee70) fep_vkb_top_text_pane_g

0x035b,	// (0x0000f688) main_hc_apps_shell_pane

0x8d40,	// (0x0001806d) grid_hc_apps_pane_ParamLimits

0x8d40,	// (0x0001806d) grid_hc_apps_pane

0x8d4f,	// (0x0001807c) list_hc_apps_pane

0x8d57,	// (0x00018084) scroll_pane_cp37_ParamLimits

0x8d57,	// (0x00018084) scroll_pane_cp37

0xe4c6,	// (0x0001d7f3) cell_hc_apps_pane_ParamLimits

0xe4c6,	// (0x0001d7f3) cell_hc_apps_pane

0xe584,	// (0x0001d8b1) cell_hc_apps_pane_g1_ParamLimits

0xe584,	// (0x0001d8b1) cell_hc_apps_pane_g1

0x8e42,	// (0x0001816f) cell_hc_apps_pane_g2_ParamLimits

0x8e42,	// (0x0001816f) cell_hc_apps_pane_g2

0x8e5e,	// (0x0001818b) cell_hc_apps_pane_g3_ParamLimits

0x8e5e,	// (0x0001818b) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x0001f017) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x0001f017) cell_hc_apps_pane_g

0xe5b1,	// (0x0001d8de) cell_hc_apps_pane_t1_ParamLimits

0xe5b1,	// (0x0001d8de) cell_hc_apps_pane_t1

0x2ade,	// (0x00011e0b) grid_highlight_pane_cp10_ParamLimits

0x2ade,	// (0x00011e0b) grid_highlight_pane_cp10

0xe5ef,	// (0x0001d91c) list_single_hc_apps_pane_ParamLimits

0xe5ef,	// (0x0001d91c) list_single_hc_apps_pane

0xe620,	// (0x0001d94d) list_single_hc_apps_pane_g1

0xe639,	// (0x0001d966) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0001f01e) list_single_hc_apps_pane_g

0xe652,	// (0x0001d97f) list_single_hc_apps_pane_g2_copy1

0xe66e,	// (0x0001d99b) list_single_hc_apps_pane_t1

0x283b,	// (0x00011b68) bg_set_opt_pane_cp_ParamLimits

0x05ae,	// (0x0000f8db) setting_slider_pane_t1_ParamLimits

0x05c7,	// (0x0000f8f4) setting_slider_pane_t2_ParamLimits

0x05e1,	// (0x0000f90e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001e88b) setting_slider_pane_t_ParamLimits

0x05f9,	// (0x0000f926) slider_set_pane_ParamLimits

0x0b19,	// (0x0000fe46) control_pane_g5_ParamLimits

0x0b19,	// (0x0000fe46) control_pane_g5

0x613b,	// (0x00015468) slider_set_pane_g1_ParamLimits

0x154a,	// (0x00010877) slider_set_pane_g2_ParamLimits

0x1556,	// (0x00010883) slider_set_pane_g3_ParamLimits

0x156a,	// (0x00010897) slider_set_pane_g4_ParamLimits

0x1582,	// (0x000108af) slider_set_pane_g5_ParamLimits

0x1556,	// (0x00010883) slider_set_pane_g6_ParamLimits

0x1598,	// (0x000108c5) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001ec87) slider_set_pane_g_ParamLimits

0x42c5,	// (0x000135f2) navi_icon_text_pane_ParamLimits

0xd55b,	// (0x0001c888) aid_fill_nsta_2_ParamLimits

0xd592,	// (0x0001c8bf) aid_touch_tab_arrow_left_ParamLimits

0xd5a8,	// (0x0001c8d5) aid_touch_tab_arrow_right_ParamLimits

0xd643,	// (0x0001c970) clock_nsta_pane_ParamLimits

0x5c1e,	// (0x00014f4b) navi_icon_pane_g1_ParamLimits

0x5c2a,	// (0x00014f57) navi_text_pane_t1_ParamLimits

0x730b,	// (0x00016638) navi_icon_text_pane_g1_ParamLimits

0x7317,	// (0x00016644) navi_icon_text_pane_t1_ParamLimits

0xe620,	// (0x0001d94d) list_single_hc_apps_pane_g1_ParamLimits

0xe639,	// (0x0001d966) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0001f01e) list_single_hc_apps_pane_g_ParamLimits

0xe652,	// (0x0001d97f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xe66e,	// (0x0001d99b) list_single_hc_apps_pane_t1_ParamLimits

0xb872,	// (0x0001ab9f) popup_toolbar2_fixed_window_ParamLimits

0xb872,	// (0x0001ab9f) popup_toolbar2_fixed_window

0xc0e0,	// (0x0001b40d) popup_toolbar2_float_window

0x2747,	// (0x00011a74) bg_popup_sub_pane_cp27

0x8fa4,	// (0x000182d1) grid_toolbar2_float_pane

0x2747,	// (0x00011a74) bg_popup_sub_pane_cp26

0x8fa4,	// (0x000182d1) grid_toolbar2_fixed_pane

0xe69c,	// (0x0001d9c9) cell_toolbar2_fixed_pane_ParamLimits

0xe69c,	// (0x0001d9c9) cell_toolbar2_fixed_pane

0xe6b7,	// (0x0001d9e4) cell_toolbar2_fixed_pane_g1

0x0fe8,	// (0x00010315) toolbar2_fixed_button_pane

0x4c97,	// (0x00013fc4) toolbar2_fixed_button_pane_g1

0x4ca7,	// (0x00013fd4) toolbar2_fixed_button_pane_g2

0x4c9f,	// (0x00013fcc) toolbar2_fixed_button_pane_g3

0x4cb7,	// (0x00013fe4) toolbar2_fixed_button_pane_g4

0x4caf,	// (0x00013fdc) toolbar2_fixed_button_pane_g5

0x4cbf,	// (0x00013fec) toolbar2_fixed_button_pane_g6

0x4cc7,	// (0x00013ff4) toolbar2_fixed_button_pane_g7

0x4cd7,	// (0x00014004) toolbar2_fixed_button_pane_g8

0x4ccf,	// (0x00013ffc) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001eb89) toolbar2_fixed_button_pane_g

0x8fc6,	// (0x000182f3) cell_toolbar2_float_pane_ParamLimits

0x8fc6,	// (0x000182f3) cell_toolbar2_float_pane

0x8fda,	// (0x00018307) cell_toolbar2_float_pane_g1

0x0fe8,	// (0x00010315) toolbar2_fixed_button_pane_cp

0xe08a,	// (0x0001d3b7) fep_vkb_accented_list_pane_ParamLimits

0xe08a,	// (0x0001d3b7) fep_vkb_accented_list_pane

0x1931,	// (0x00010c5e) bg_popup_fep_shadow_pane_g9

0x4439,	// (0x00013766) bg_popup_fep_shadow_pane_cp3

0x38af,	// (0x00012bdc) list_accented_list_pane

0x8fe3,	// (0x00018310) list_single_accented_list_pane_ParamLimits

0x8fe3,	// (0x00018310) list_single_accented_list_pane

0x4439,	// (0x00013766) list_highlight_pane_cp10

0x8ff4,	// (0x00018321) list_single_accented_list_pane_t1

0xc00a,	// (0x0001b337) popup_slider_window_ParamLimits

0xc00a,	// (0x0001b337) popup_slider_window

0x8ae0,	// (0x00017e0d) aid_indentation_list_msg

0xe7b0,	// (0x0001dadd) bg_popup_window_pane_cp19

0x9118,	// (0x00018445) popup_slider_window_g1

0x9134,	// (0x00018461) popup_slider_window_g2

0x9150,	// (0x0001847d) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0001f023) popup_slider_window_g

0x91ac,	// (0x000184d9) popup_slider_window_t1

0x9220,	// (0x0001854d) small_volume_slider_vertical_pane

0x77d0,	// (0x00016afd) small_volume_slider_vertical_pane_g1

0x77d0,	// (0x00016afd) small_volume_slider_vertical_pane_g2

0x923c,	// (0x00018569) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x0001f035) small_volume_slider_vertical_pane_g

0xb7e0,	// (0x0001ab0d) area_side_right_pane_ParamLimits

0xb7e0,	// (0x0001ab0d) area_side_right_pane

0xc307,	// (0x0001b634) aid_size_side_button_ParamLimits

0xc307,	// (0x0001b634) aid_size_side_button

0xc320,	// (0x0001b64d) grid_sctrl_middle_pane_ParamLimits

0xc320,	// (0x0001b64d) grid_sctrl_middle_pane

0x1b4e,	// (0x00010e7b) sctrl_sk_bottom_pane

0x1b5f,	// (0x00010e8c) sctrl_sk_top_pane

0x1b71,	// (0x00010e9e) aid_touch_sctrl_top

0x1b7e,	// (0x00010eab) bg_sctrl_sk_pane_ParamLimits

0x1b7e,	// (0x00010eab) bg_sctrl_sk_pane

0x1b8c,	// (0x00010eb9) sctrl_sk_top_pane_g1

0x1b99,	// (0x00010ec6) sctrl_sk_top_pane_t1

0x1b71,	// (0x00010e9e) aid_touch_sctrl_bottom

0x1b7e,	// (0x00010eab) bg_sctrl_sk_pane_cp_ParamLimits

0x1b7e,	// (0x00010eab) bg_sctrl_sk_pane_cp

0x1bb4,	// (0x00010ee1) sctrl_sk_bottom_pane_g1

0x1b99,	// (0x00010ec6) sctrl_sk_bottom_pane_t1

0xc33a,	// (0x0001b667) cell_sctrl_middle_pane_ParamLimits

0xc33a,	// (0x0001b667) cell_sctrl_middle_pane

0xc34b,	// (0x0001b678) aid_touch_sctrl_middle_ParamLimits

0xc34b,	// (0x0001b678) aid_touch_sctrl_middle

0xc358,	// (0x0001b685) bg_sctrl_middle_pane_ParamLimits

0xc358,	// (0x0001b685) bg_sctrl_middle_pane

0x2225,	// (0x00011552) cell_sctrl_middle_pane_g1_ParamLimits

0x2225,	// (0x00011552) cell_sctrl_middle_pane_g1

0xc366,	// (0x0001b693) cell_sctrl_middle_pane_g2_ParamLimits

0xc366,	// (0x0001b693) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x0001f041) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x0001f041) cell_sctrl_middle_pane_g

0x4c97,	// (0x00013fc4) bg_sctrl_middle_pane_g1

0x4c9f,	// (0x00013fcc) bg_sctrl_middle_pane_g2

0x4ca7,	// (0x00013fd4) bg_sctrl_middle_pane_g3

0x4caf,	// (0x00013fdc) bg_sctrl_middle_pane_g4

0x4cb7,	// (0x00013fe4) bg_sctrl_middle_pane_g5

0x4cbf,	// (0x00013fec) bg_sctrl_middle_pane_g6

0x4cc7,	// (0x00013ff4) bg_sctrl_middle_pane_g7

0x4ccf,	// (0x00013ffc) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x0001f046) bg_sctrl_middle_pane_g

0x4cd7,	// (0x00014004) bg_sctrl_middle_pane_g8_copy1

0x4c97,	// (0x00013fc4) bg_sctrl_sk_pane_g1

0x4ca7,	// (0x00013fd4) bg_sctrl_sk_pane_g2

0x4c9f,	// (0x00013fcc) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001eb89) bg_sctrl_sk_pane_g

0x2fde,	// (0x0001230b) aid_size_touch_scroll_bar

0x4cb7,	// (0x00013fe4) bg_sctrl_sk_pane_g4

0x4caf,	// (0x00013fdc) bg_sctrl_sk_pane_g5

0x4cbf,	// (0x00013fec) bg_sctrl_sk_pane_g6

0x4cc7,	// (0x00013ff4) bg_sctrl_sk_pane_g7

0x4cd7,	// (0x00014004) bg_sctrl_sk_pane_g8

0x4ccf,	// (0x00013ffc) bg_sctrl_sk_pane_g9

0x0cd3,	// (0x00010000) popup_fep_china_hwr2_fs_candidate_window

0xbb38,	// (0x0001ae65) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbb38,	// (0x0001ae65) popup_fep_china_hwr2_fs_control_window

0x1951,	// (0x00010c7e) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x0001f03c) sctrl_sk_top_pane_g

0xe868,	// (0x0001db95) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe868,	// (0x0001db95) aid_fep_china_hwr2_fs_cell

0xe87c,	// (0x0001dba9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe87c,	// (0x0001dba9) bg_popup_fep_shadow_pane_cp4

0xe893,	// (0x0001dbc0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe893,	// (0x0001dbc0) bg_popup_fep_shadow_pane_cp5

0xe8a5,	// (0x0001dbd2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe8a5,	// (0x0001dbd2) popup_fep_china_hwr2_fs_control_bar_grid

0xe8b9,	// (0x0001dbe6) popup_fep_china_hwr2_fs_control_funtion_grid

0x9298,	// (0x000185c5) aid_fep_china_hwr2_fs_candi_cell

0x2747,	// (0x00011a74) bg_popup_fep_shadow_pane_cp6

0x92a2,	// (0x000185cf) popup_fep_china_hwr2_fs_candidate_grid

0xe8c1,	// (0x0001dbee) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe8c1,	// (0x0001dbee) cell_fep_china_hwr2_fs_funtion_grid

0x77d0,	// (0x00016afd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x92c4,	// (0x000185f1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x92c4,	// (0x000185f1) cell_fep_china_hwr2_fs_funtion_grid_g1

0x92d2,	// (0x000185ff) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x92d2,	// (0x000185ff) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x0001f057) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x0001f057) cell_fep_china_hwr2_fs_funtion_grid_g

0xe8d9,	// (0x0001dc06) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe8d9,	// (0x0001dc06) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe8ee,	// (0x0001dc1b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe8ee,	// (0x0001dc1b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x0001f05c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x0001f05c) cell_fep_china_hwr2_fs_funtion_grid_t

0x9319,	// (0x00018646) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9321,	// (0x0001864e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9329,	// (0x00018656) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x0001f061) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9331,	// (0x0001865e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9331,	// (0x0001865e) cell_fep_china_hwr2_fs_candidate_grid

0x934a,	// (0x00018677) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9352,	// (0x0001867f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77d0,	// (0x00016afd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77d0,	// (0x00016afd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x0001ee75) cell_fep_china_hwr2_fs_candidate_grid_g

0x935a,	// (0x00018687) cell_fep_china_hwr2_fs_candidate_grid_t1

0x487f,	// (0x00013bac) clock_nsta_pane_cp_24_ParamLimits

0x487f,	// (0x00013bac) clock_nsta_pane_cp_24

0x48fd,	// (0x00013c2a) indicator_nsta_pane_cp_24_ParamLimits

0x48fd,	// (0x00013c2a) indicator_nsta_pane_cp_24

0x5a9a,	// (0x00014dc7) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001ebee) heading_pane_g

0x65c7,	// (0x000158f4) grid_sct_catagory_button_pane

0x65f7,	// (0x00015924) scroll_pane_cp5_ParamLimits

0x7359,	// (0x00016686) button_value_adjust_pane_cp5_ParamLimits

0x7359,	// (0x00016686) button_value_adjust_pane_cp5

0x7453,	// (0x00016780) form2_midp_time_pane_ParamLimits

0x9368,	// (0x00018695) cell_sct_catagory_button_pane_ParamLimits

0x9368,	// (0x00018695) cell_sct_catagory_button_pane

0x7795,	// (0x00016ac2) bg_button_pane_cp01_ParamLimits

0x7795,	// (0x00016ac2) bg_button_pane_cp01

0x77d0,	// (0x00016afd) cell_sct_catagory_button_pane_g1

0xc083,	// (0x0001b3b0) popup_tb_extension_window

0xe90a,	// (0x0001dc37) aid_size_cell_ext_ParamLimits

0xe90a,	// (0x0001dc37) aid_size_cell_ext

0x2e20,	// (0x0001214d) bg_tb_trans_pane_cp1_ParamLimits

0x2e20,	// (0x0001214d) bg_tb_trans_pane_cp1

0xe930,	// (0x0001dc5d) grid_tb_ext_pane_ParamLimits

0xe930,	// (0x0001dc5d) grid_tb_ext_pane

0xe972,	// (0x0001dc9f) cell_tb_ext_pane_ParamLimits

0xe972,	// (0x0001dc9f) cell_tb_ext_pane

0xe99a,	// (0x0001dcc7) cell_tb_ext_pane_g1_ParamLimits

0xe99a,	// (0x0001dcc7) cell_tb_ext_pane_g1

0x9400,	// (0x0001872d) cell_tb_ext_pane_t1

0x2ade,	// (0x00011e0b) list_highlight_pane_cp11_ParamLimits

0x2ade,	// (0x00011e0b) list_highlight_pane_cp11

0xb887,	// (0x0001abb4) popup_uni_indicator_window_ParamLimits

0xb887,	// (0x0001abb4) popup_uni_indicator_window

0x35fa,	// (0x00012927) bg_popup_sub_pane_cp14

0x941b,	// (0x00018748) list_uniindi_pane

0x9427,	// (0x00018754) uniindi_top_pane

0x2ade,	// (0x00011e0b) bg_uniindi_top_pane

0x9446,	// (0x00018773) uniindi_top_pane_g1

0x945c,	// (0x00018789) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x0001f068) uniindi_top_pane_g

0x9486,	// (0x000187b3) uniindi_top_pane_t1

0x94b0,	// (0x000187dd) list_single_uniindi_pane_ParamLimits

0x94b0,	// (0x000187dd) list_single_uniindi_pane

0x77d0,	// (0x00016afd) bg_uniindi_top_pane_g1

0x94c3,	// (0x000187f0) list_single_uniindi_pane_g1

0x94d6,	// (0x00018803) list_single_uniindi_pane_t1

0x035b,	// (0x0000f688) control_bg_pane

0x94fb,	// (0x00018828) bg_sctrl_sk_pane_cp1

0x9504,	// (0x00018831) bg_sctrl_sk_pane_cp2

0x950d,	// (0x0001883a) control_bg_pane_g1

0x9516,	// (0x00018843) control_bg_pane_g2

0x0001,

0xfd44,	// (0x0001f071) control_bg_pane_g

0x719d,	// (0x000164ca) cell_indicator_nsta_pane_g1_ParamLimits

0xdf01,	// (0x0001d22e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x0001edd9) cell_indicator_nsta_pane_g_ParamLimits

0x74d7,	// (0x00016804) form2_midp_time_pane_t1_ParamLimits

0x16ec,	// (0x00010a19) main_idle_act4_pane_ParamLimits

0x16ec,	// (0x00010a19) main_idle_act4_pane

0xc083,	// (0x0001b3b0) popup_tb_extension_window_ParamLimits

0xe958,	// (0x0001dc85) tb_ext_find_pane_ParamLimits

0xe958,	// (0x0001dc85) tb_ext_find_pane

0x951f,	// (0x0001884c) ai_gene_pane_1_cp1

0x4578,	// (0x000138a5) ai_gene_pane_2_cp1

0x9527,	// (0x00018854) list_single_idle_plugin_calendar_pane

0x9530,	// (0x0001885d) list_single_idle_plugin_notification_pane

0x9539,	// (0x00018866) list_single_idle_plugin_player_pane

0xe9b7,	// (0x0001dce4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe9b7,	// (0x0001dce4) list_single_idle_plugin_shortcut_pane

0xe9df,	// (0x0001dd0c) main_idle_act4_pane_t1

0xe9f5,	// (0x0001dd22) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x0001f076) main_idle_act4_pane_t

0xea0d,	// (0x0001dd3a) middle_sk_idle_act4_pane_ParamLimits

0xea0d,	// (0x0001dd3a) middle_sk_idle_act4_pane

0xea29,	// (0x0001dd56) popup_clock_digital_analogue_window_cp2

0xea50,	// (0x0001dd7d) shortcut_wheel_idle_act4_pane_ParamLimits

0xea50,	// (0x0001dd7d) shortcut_wheel_idle_act4_pane

0x77d0,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g1

0x77d0,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g2

0x77d0,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g3

0x77d0,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g4

0x77d0,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g5

0x95cc,	// (0x000188f9) shortcut_wheel_idle_act4_pane_g6

0x95d4,	// (0x00018901) shortcut_wheel_idle_act4_pane_g7

0x95dc,	// (0x00018909) shortcut_wheel_idle_act4_pane_g8

0x95e4,	// (0x00018911) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x0001f07b) shortcut_wheel_idle_act4_pane_g

0xd50f,	// (0x0001c83c) middle_sk_idle_act4_pane_g1_ParamLimits

0xd50f,	// (0x0001c83c) middle_sk_idle_act4_pane_g1

0xeacd,	// (0x0001ddfa) middle_sk_idle_act4_pane_g2_ParamLimits

0xeacd,	// (0x0001ddfa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0001f09e) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0001f09e) middle_sk_idle_act4_pane_g

0xeae5,	// (0x0001de12) middle_sk_idle_act4_pane_t1_ParamLimits

0xeae5,	// (0x0001de12) middle_sk_idle_act4_pane_t1

0xeb14,	// (0x0001de41) grid_ai_shortcut_pane_ParamLimits

0xeb14,	// (0x0001de41) grid_ai_shortcut_pane

0xeb31,	// (0x0001de5e) list_highlight_pane_cp16_ParamLimits

0xeb31,	// (0x0001de5e) list_highlight_pane_cp16

0xeb3e,	// (0x0001de6b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xeb3e,	// (0x0001de6b) list_single_idle_plugin_shortcut_pane_g1

0xeb4a,	// (0x0001de77) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xeb4a,	// (0x0001de77) list_single_idle_plugin_shortcut_pane_g2

0xeb66,	// (0x0001de93) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xeb66,	// (0x0001de93) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0001f0a3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0001f0a3) list_single_idle_plugin_shortcut_pane_g

0xeb7b,	// (0x0001dea8) cell_ai_shortcut_pane_ParamLimits

0xeb7b,	// (0x0001dea8) cell_ai_shortcut_pane

0xeb91,	// (0x0001debe) cell_ai_shortcut_pane_g1_ParamLimits

0xeb91,	// (0x0001debe) cell_ai_shortcut_pane_g1

0x951f,	// (0x0001884c) ai_gene_pane_1_cp2

0x9711,	// (0x00018a3e) ai_gene_pane_2_cp2

0x9719,	// (0x00018a46) list_highlight_pane_cp15

0x9722,	// (0x00018a4f) list_single_idle_plugin_calendar_pane_g1

0x9719,	// (0x00018a46) list_highlight_pane_cp17

0x972a,	// (0x00018a57) list_single_idle_plugin_calendar_pane_g1_copy1

0x9732,	// (0x00018a5f) list_single_idle_plugin_player_pane_g1

0x681e,	// (0x00015b4b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x0001f0aa) list_single_idle_plugin_player_pane_g

0x973a,	// (0x00018a67) list_single_idle_plugin_player_pane_t1

0x9748,	// (0x00018a75) list_single_idle_plugin_player_pane_t2

0x9756,	// (0x00018a83) list_single_idle_plugin_player_pane_t3

0x9764,	// (0x00018a91) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0001f0af) list_single_idle_plugin_player_pane_t

0x9772,	// (0x00018a9f) wait_bar_pane_cp15

0x977a,	// (0x00018aa7) grid_ai_notification_pane

0x681e,	// (0x00015b4b) list_single_idle_plugin_notification_pane_g1

0xebb3,	// (0x0001dee0) cell_ai_notification_pane_ParamLimits

0xebb3,	// (0x0001dee0) cell_ai_notification_pane

0x9790,	// (0x00018abd) cell_ai_notification_pane_g1

0x9798,	// (0x00018ac5) cell_ai_notification_pane_t1

0xebc0,	// (0x0001deed) tb_ext_find_button_pane

0xebc8,	// (0x0001def5) tb_ext_find_pane_g1

0xebd0,	// (0x0001defd) tb_ext_find_pane_t1

0x3daa,	// (0x000130d7) tb_ext_find_button_pane_g1

0x97c4,	// (0x00018af1) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x0001f0b8) tb_ext_find_button_pane_g

0xe9df,	// (0x0001dd0c) main_idle_act4_pane_t1_ParamLimits

0xe9f5,	// (0x0001dd22) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x0001f076) main_idle_act4_pane_t_ParamLimits

0xea29,	// (0x0001dd56) popup_clock_digital_analogue_window_cp2_ParamLimits

0xea40,	// (0x0001dd6d) sat_plugin_idle_act4_pane_ParamLimits

0xea40,	// (0x0001dd6d) sat_plugin_idle_act4_pane

0xebde,	// (0x0001df0b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xebde,	// (0x0001df0b) sat_plugin_idle_act4_pane_t1

0xebf6,	// (0x0001df23) sat_plugin_idle_act4_pane_t2_ParamLimits

0xebf6,	// (0x0001df23) sat_plugin_idle_act4_pane_t2

0xec0e,	// (0x0001df3b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xec0e,	// (0x0001df3b) sat_plugin_idle_act4_pane_t3

0xec26,	// (0x0001df53) sat_plugin_idle_act4_pane_t4_ParamLimits

0xec26,	// (0x0001df53) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x0001f0bd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x0001f0bd) sat_plugin_idle_act4_pane_t

0x0420,	// (0x0000f74d) popup_battery_window_ParamLimits

0x0420,	// (0x0000f74d) popup_battery_window

0x2ade,	// (0x00011e0b) bg_popup_sub_pane_cp25_ParamLimits

0x2ade,	// (0x00011e0b) bg_popup_sub_pane_cp25

0x9819,	// (0x00018b46) popup_battery_window_g1_ParamLimits

0x9819,	// (0x00018b46) popup_battery_window_g1

0x9825,	// (0x00018b52) popup_battery_window_t1_ParamLimits

0x9825,	// (0x00018b52) popup_battery_window_t1

0x9837,	// (0x00018b64) popup_battery_window_t2_ParamLimits

0x9837,	// (0x00018b64) popup_battery_window_t2

0x0001,

0xfd99,	// (0x0001f0c6) popup_battery_window_t_ParamLimits

0xfd99,	// (0x0001f0c6) popup_battery_window_t

0xd39a,	// (0x0001c6c7) midp_canvas_pane_ParamLimits

0xd3f9,	// (0x0001c726) midp_keypad_pane_ParamLimits

0xd3f9,	// (0x0001c726) midp_keypad_pane

0x477b,	// (0x00013aa8) main_midp_pane_ParamLimits

0x7217,	// (0x00016544) signal_pane_g2_cp_ParamLimits

0xec3e,	// (0x0001df6b) aid_size_cell_midp_keypad_ParamLimits

0xec3e,	// (0x0001df6b) aid_size_cell_midp_keypad

0xec5c,	// (0x0001df89) midp_keyp_game_grid_pane_ParamLimits

0xec5c,	// (0x0001df89) midp_keyp_game_grid_pane

0xec83,	// (0x0001dfb0) midp_keyp_rocker_pane_ParamLimits

0xec83,	// (0x0001dfb0) midp_keyp_rocker_pane

0xecd4,	// (0x0001e001) midp_keyp_sk_left_pane_ParamLimits

0xecd4,	// (0x0001e001) midp_keyp_sk_left_pane

0xed28,	// (0x0001e055) midp_keyp_sk_right_pane_ParamLimits

0xed28,	// (0x0001e055) midp_keyp_sk_right_pane

0x2747,	// (0x00011a74) bg_button_pane_cp03

0xed7c,	// (0x0001e0a9) midp_keyp_sk_left_pane_g1

0x2747,	// (0x00011a74) bg_button_pane_cp04

0xed7c,	// (0x0001e0a9) midp_keyp_sk_right_pane_g1

0x77d0,	// (0x00016afd) midp_keyp_rocker_pane_g1

0xed85,	// (0x0001e0b2) keyp_game_cell_pane_ParamLimits

0xed85,	// (0x0001e0b2) keyp_game_cell_pane

0x2747,	// (0x00011a74) bg_button_pane_cp02

0xeda9,	// (0x0001e0d6) keyp_game_cell_pane_g1

0xb822,	// (0x0001ab4f) popup_fep_vkb2_window_ParamLimits

0xb822,	// (0x0001ab4f) popup_fep_vkb2_window

0xc372,	// (0x0001b69f) aid_size_cell_vkb2_ParamLimits

0xc372,	// (0x0001b69f) aid_size_cell_vkb2

0xc3a8,	// (0x0001b6d5) popup_fep_vkb2_window_g1_ParamLimits

0xc3a8,	// (0x0001b6d5) popup_fep_vkb2_window_g1

0xc3f8,	// (0x0001b725) vkb2_area_bottom_pane_ParamLimits

0xc3f8,	// (0x0001b725) vkb2_area_bottom_pane

0xc44c,	// (0x0001b779) vkb2_area_keypad_pane_ParamLimits

0xc44c,	// (0x0001b779) vkb2_area_keypad_pane

0xc494,	// (0x0001b7c1) vkb2_area_top_pane_ParamLimits

0xc494,	// (0x0001b7c1) vkb2_area_top_pane

0xc51a,	// (0x0001b847) vkb2_top_entry_pane_ParamLimits

0xc51a,	// (0x0001b847) vkb2_top_entry_pane

0xc547,	// (0x0001b874) vkb2_top_grid_left_pane_ParamLimits

0xc547,	// (0x0001b874) vkb2_top_grid_left_pane

0xc567,	// (0x0001b894) vkb2_top_grid_right_pane_ParamLimits

0xc567,	// (0x0001b894) vkb2_top_grid_right_pane

0x1e20,	// (0x0001114d) vkb2_cell_keypad_pane_ParamLimits

0x1e20,	// (0x0001114d) vkb2_cell_keypad_pane

0xc5ad,	// (0x0001b8da) vkb2_area_bottom_grid_pane_ParamLimits

0xc5ad,	// (0x0001b8da) vkb2_area_bottom_grid_pane

0xc5d7,	// (0x0001b904) vkb2_area_bottom_pane_g1_ParamLimits

0xc5d7,	// (0x0001b904) vkb2_area_bottom_pane_g1

0xc5fd,	// (0x0001b92a) vkb2_area_bottom_pane_g2_ParamLimits

0xc5fd,	// (0x0001b92a) vkb2_area_bottom_pane_g2

0xc62e,	// (0x0001b95b) vkb2_area_bottom_pane_g3_ParamLimits

0xc62e,	// (0x0001b95b) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x0001f0cb) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x0001f0cb) vkb2_area_bottom_pane_g

0x1fca,	// (0x000112f7) vkb2_top_cell_left_pane_ParamLimits

0x1fca,	// (0x000112f7) vkb2_top_cell_left_pane

0xedbf,	// (0x0001e0ec) vkb2_top_entry_pane_g1_ParamLimits

0xedbf,	// (0x0001e0ec) vkb2_top_entry_pane_g1

0xedcd,	// (0x0001e0fa) vkb2_top_entry_pane_t1_ParamLimits

0xedcd,	// (0x0001e0fa) vkb2_top_entry_pane_t1

0x9a09,	// (0x00018d36) vkb2_top_entry_pane_t2_ParamLimits

0x9a09,	// (0x00018d36) vkb2_top_entry_pane_t2

0x9a3b,	// (0x00018d68) vkb2_top_entry_pane_t3_ParamLimits

0x9a3b,	// (0x00018d68) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0001f0d2) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0001f0d2) vkb2_top_entry_pane_t

0xc698,	// (0x0001b9c5) vkb2_top_grid_right_pane_g1_ParamLimits

0xc698,	// (0x0001b9c5) vkb2_top_grid_right_pane_g1

0x202d,	// (0x0001135a) vkb2_top_grid_right_pane_g2_ParamLimits

0x202d,	// (0x0001135a) vkb2_top_grid_right_pane_g2

0x2045,	// (0x00011372) vkb2_top_grid_right_pane_g3_ParamLimits

0x2045,	// (0x00011372) vkb2_top_grid_right_pane_g3

0xc6ae,	// (0x0001b9db) vkb2_top_grid_right_pane_g4_ParamLimits

0xc6ae,	// (0x0001b9db) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x0001f0d9) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x0001f0d9) vkb2_top_grid_right_pane_g

0x2073,	// (0x000113a0) vkb2_top_cell_left_pane_g1

0x208a,	// (0x000113b7) vkb2_cell_keypad_pane_g1_ParamLimits

0x208a,	// (0x000113b7) vkb2_cell_keypad_pane_g1

0x9a5f,	// (0x00018d8c) vkb2_cell_keypad_pane_t1_ParamLimits

0x9a5f,	// (0x00018d8c) vkb2_cell_keypad_pane_t1

0x2098,	// (0x000113c5) vkb2_cell_bottom_grid_pane_ParamLimits

0x2098,	// (0x000113c5) vkb2_cell_bottom_grid_pane

0x20d1,	// (0x000113fe) vkb2_cell_bottom_grid_pane_g1

0xea71,	// (0x0001dd9e) aid_call2_pane_cp02

0xea79,	// (0x0001dda6) aid_call_pane_cp02

0xea81,	// (0x0001ddae) clock_digital_number_pane_cp10

0xea89,	// (0x0001ddb6) clock_digital_number_pane_cp11

0xea91,	// (0x0001ddbe) clock_digital_number_pane_cp12

0xea99,	// (0x0001ddc6) clock_digital_number_pane_cp13

0xeaa1,	// (0x0001ddce) clock_digital_separator_pane_cp10

0x3daa,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g1

0x3daa,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g2

0xeaa9,	// (0x0001ddd6) popup_clock_digital_analogue_window_cp2_g3

0x3daa,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g4

0xeaa9,	// (0x0001ddd6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x0001f08e) popup_clock_digital_analogue_window_cp2_g

0xeab1,	// (0x0001ddde) popup_clock_digital_analogue_window_cp2_t1

0xeabf,	// (0x0001ddec) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x0001f099) popup_clock_digital_analogue_window_cp2_t

0x77d0,	// (0x00016afd) clock_digital_number_pane_cp10_g1

0x77d0,	// (0x00016afd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001ee75) clock_digital_number_pane_cp10_g

0x77d0,	// (0x00016afd) clock_digital_separator_pane_cp10_g1

0x77d0,	// (0x00016afd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x0001ee75) clock_digital_separator_pane_cp10_g

0x9468,	// (0x00018795) uniindi_top_pane_g3

0x9479,	// (0x000187a6) uniindi_top_pane_g4

0x1eab,	// (0x000111d8) vkb2_row_keypad_pane_ParamLimits

0x1eab,	// (0x000111d8) vkb2_row_keypad_pane

0x20f1,	// (0x0001141e) vkb2_cell_t_keypad_pane_ParamLimits

0x20f1,	// (0x0001141e) vkb2_cell_t_keypad_pane

0x2101,	// (0x0001142e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2101,	// (0x0001142e) vkb2_cell_t_keypad_pane_cp08

0x2114,	// (0x00011441) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2114,	// (0x00011441) vkb2_cell_t_keypad_pane_cp09

0x2128,	// (0x00011455) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2128,	// (0x00011455) vkb2_cell_t_keypad_pane_cp01

0x2139,	// (0x00011466) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2139,	// (0x00011466) vkb2_cell_t_keypad_pane_cp02

0x214a,	// (0x00011477) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x214a,	// (0x00011477) vkb2_cell_t_keypad_pane_cp03

0x215b,	// (0x00011488) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x215b,	// (0x00011488) vkb2_cell_t_keypad_pane_cp04

0x216c,	// (0x00011499) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x216c,	// (0x00011499) vkb2_cell_t_keypad_pane_cp05

0x217d,	// (0x000114aa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x217d,	// (0x000114aa) vkb2_cell_t_keypad_pane_cp06

0x218e,	// (0x000114bb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x218e,	// (0x000114bb) vkb2_cell_t_keypad_pane_cp07

0x219f,	// (0x000114cc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x219f,	// (0x000114cc) vkb2_cell_t_keypad_pane_cp10

0x1951,	// (0x00010c7e) vkb2_cell_t_keypad_pane_g1

0x9a76,	// (0x00018da3) vkb2_cell_t_keypad_pane_t1

0x035b,	// (0x0000f688) popup_grid_graphic2_window

0xee06,	// (0x0001e133) aid_size_cell_graphic2_ParamLimits

0xee06,	// (0x0001e133) aid_size_cell_graphic2

0xee44,	// (0x0001e171) bg_popup_window_pane_cp21_ParamLimits

0xee44,	// (0x0001e171) bg_popup_window_pane_cp21

0xee52,	// (0x0001e17f) graphic2_pages_pane_ParamLimits

0xee52,	// (0x0001e17f) graphic2_pages_pane

0xeea8,	// (0x0001e1d5) grid_graphic2_control_pane_ParamLimits

0xeea8,	// (0x0001e1d5) grid_graphic2_control_pane

0xeef0,	// (0x0001e21d) grid_graphic2_pane_ParamLimits

0xeef0,	// (0x0001e21d) grid_graphic2_pane

0xef77,	// (0x0001e2a4) cell_graphic2_pane

0x035b,	// (0x0000f688) main_comp_mode_pane

0x8c7a,	// (0x00017fa7) list_ai3_gene_pane_ParamLimits

0xe7b0,	// (0x0001dadd) bg_popup_window_pane_cp19_ParamLimits

0x90ba,	// (0x000183e7) bg_touch_area_indi_pane_ParamLimits

0x90ba,	// (0x000183e7) bg_touch_area_indi_pane

0x90d0,	// (0x000183fd) bg_touch_area_indi_pane_cp01_ParamLimits

0x90d0,	// (0x000183fd) bg_touch_area_indi_pane_cp01

0x90e6,	// (0x00018413) bg_touch_area_indi_pane_cp02_ParamLimits

0x90e6,	// (0x00018413) bg_touch_area_indi_pane_cp02

0x90fe,	// (0x0001842b) bg_touch_area_indi_pane_cp03_ParamLimits

0x90fe,	// (0x0001842b) bg_touch_area_indi_pane_cp03

0x9118,	// (0x00018445) popup_slider_window_g1_ParamLimits

0x9134,	// (0x00018461) popup_slider_window_g2_ParamLimits

0x9150,	// (0x0001847d) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0001f023) popup_slider_window_g_ParamLimits

0x91ac,	// (0x000184d9) popup_slider_window_t1_ParamLimits

0x9220,	// (0x0001854d) small_volume_slider_vertical_pane_ParamLimits

0xef77,	// (0x0001e2a4) cell_graphic2_pane_ParamLimits

0xefd4,	// (0x0001e301) bg_button_pane_cp10_ParamLimits

0xefd4,	// (0x0001e301) bg_button_pane_cp10

0xefe7,	// (0x0001e314) bg_button_pane_cp11_ParamLimits

0xefe7,	// (0x0001e314) bg_button_pane_cp11

0xeffa,	// (0x0001e327) graphic2_pages_pane_g1_ParamLimits

0xeffa,	// (0x0001e327) graphic2_pages_pane_g1

0xf015,	// (0x0001e342) graphic2_pages_pane_g2_ParamLimits

0xf015,	// (0x0001e342) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x0001f0e7) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x0001f0e7) graphic2_pages_pane_g

0xf02d,	// (0x0001e35a) graphic2_pages_pane_t1_ParamLimits

0xf02d,	// (0x0001e35a) graphic2_pages_pane_t1

0xf045,	// (0x0001e372) cell_graphic2_control_pane_ParamLimits

0xf045,	// (0x0001e372) cell_graphic2_control_pane

0xf077,	// (0x0001e3a4) cell_graphic2_pane_g1_ParamLimits

0xf077,	// (0x0001e3a4) cell_graphic2_pane_g1

0xd51d,	// (0x0001c84a) cell_graphic2_pane_g2_ParamLimits

0xd51d,	// (0x0001c84a) cell_graphic2_pane_g2

0xedb2,	// (0x0001e0df) cell_graphic2_pane_g3_ParamLimits

0xedb2,	// (0x0001e0df) cell_graphic2_pane_g3

0xd52a,	// (0x0001c857) cell_graphic2_pane_g4_ParamLimits

0xd52a,	// (0x0001c857) cell_graphic2_pane_g4

0xf084,	// (0x0001e3b1) cell_graphic2_pane_g5_ParamLimits

0xf084,	// (0x0001e3b1) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x0001f0ec) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x0001f0ec) cell_graphic2_pane_g

0xf0a4,	// (0x0001e3d1) cell_graphic2_pane_t1_ParamLimits

0xf0a4,	// (0x0001e3d1) cell_graphic2_pane_t1

0x5a8e,	// (0x00014dbb) grid_highlight_pane_cp11_ParamLimits

0x5a8e,	// (0x00014dbb) grid_highlight_pane_cp11

0x2ade,	// (0x00011e0b) bg_button_pane_cp05

0xf0d8,	// (0x0001e405) cell_graphic2_control_pane_g1

0x77d0,	// (0x00016afd) bg_touch_area_indi_pane_g1

0x9d44,	// (0x00019071) aid_cmod_rocker_key_size

0x9d4e,	// (0x0001907b) aid_cmode_itu_key_size

0x9d58,	// (0x00019085) main_cmode_video_pane

0x9d62,	// (0x0001908f) main_comp_mode_itu_pane

0x9d6e,	// (0x0001909b) main_comp_mode_rocker_pane

0x9d7a,	// (0x000190a7) cell_cmode_rocker_pane_ParamLimits

0x9d7a,	// (0x000190a7) cell_cmode_rocker_pane

0x9d8c,	// (0x000190b9) cell_cmode_itu_pane_ParamLimits

0x9d8c,	// (0x000190b9) cell_cmode_itu_pane

0x35fa,	// (0x00012927) bg_button_pane_cp06_ParamLimits

0x35fa,	// (0x00012927) bg_button_pane_cp06

0x7a3e,	// (0x00016d6b) cell_cmode_rocker_pane_g1_ParamLimits

0x7a3e,	// (0x00016d6b) cell_cmode_rocker_pane_g1

0x92c4,	// (0x000185f1) cell_cmode_rocker_pane_g2_ParamLimits

0x92c4,	// (0x000185f1) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x0001f0fc) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x0001f0fc) cell_cmode_rocker_pane_g

0x2747,	// (0x00011a74) bg_button_pane_cp07

0x9da1,	// (0x000190ce) cell_cmode_itu_pane_g1

0x9daa,	// (0x000190d7) cell_cmode_itu_pane_t1

0x9db8,	// (0x000190e5) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0001f101) cell_cmode_itu_pane_t

0x94eb,	// (0x00018818) aid_touch_ctrl_left

0x94f3,	// (0x00018820) aid_touch_ctrl_right

0x2747,	// (0x00011a74) compa_mode_pane

0xf0fc,	// (0x0001e429) aid_cmod_rocker_key_size_cp

0xf106,	// (0x0001e433) aid_cmode_itu_key_size_cp

0x9dda,	// (0x00019107) compa_mode_pane_g1

0x9de2,	// (0x0001910f) compa_mode_pane_g2

0x9dea,	// (0x00019117) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x0001f106) compa_mode_pane_g

0xf110,	// (0x0001e43d) main_comp_mode_itu_pane_cp

0xf118,	// (0x0001e445) main_comp_mode_rocker_pane_cp

0xf120,	// (0x0001e44d) cell_cmode_itu_pane_cp_ParamLimits

0xf120,	// (0x0001e44d) cell_cmode_itu_pane_cp

0xf135,	// (0x0001e462) cell_cmode_rocker_pane_cp_ParamLimits

0xf135,	// (0x0001e462) cell_cmode_rocker_pane_cp

0x35fa,	// (0x00012927) bg_button_pane_cp06_cp_ParamLimits

0x35fa,	// (0x00012927) bg_button_pane_cp06_cp

0x7a3e,	// (0x00016d6b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a3e,	// (0x00016d6b) cell_cmode_rocker_pane_g1_cp

0x77d0,	// (0x00016afd) cell_cmode_rocker_pane_g2_cp

0x2747,	// (0x00011a74) bg_button_pane_cp07_cp

0xf147,	// (0x0001e474) cell_cmode_itu_pane_g1_cp

0xf150,	// (0x0001e47d) cell_cmode_itu_pane_t1_cp

0xf150,	// (0x0001e47d) cell_cmode_itu_pane_t2_cp

0xdce7,	// (0x0001d014) settings_code_pane_cp2

0x283b,	// (0x00011b68) bg_popup_window_pane_cp3_ParamLimits

0x2cac,	// (0x00011fd9) heading_pane_cp3_ParamLimits

0x2cb8,	// (0x00011fe5) listscroll_popup_graphic_pane_ParamLimits

0x16fa,	// (0x00010a27) fep_hwr_aid_pane_ParamLimits

0x1b71,	// (0x00010e9e) aid_touch_sctrl_top_ParamLimits

0x1b8c,	// (0x00010eb9) sctrl_sk_top_pane_g1_ParamLimits

0x1951,	// (0x00010c7e) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x0001f03c) sctrl_sk_top_pane_g_ParamLimits

0x1b99,	// (0x00010ec6) sctrl_sk_top_pane_t1_ParamLimits

0x1b71,	// (0x00010e9e) aid_touch_sctrl_bottom_ParamLimits

0x1b99,	// (0x00010ec6) sctrl_sk_bottom_pane_t1_ParamLimits

0x9434,	// (0x00018761) aid_area_touch_clock

0xc4dc,	// (0x0001b809) aid_vkb2_area_top_pane_cell_ParamLimits

0xc4dc,	// (0x0001b809) aid_vkb2_area_top_pane_cell

0xc587,	// (0x0001b8b4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc587,	// (0x0001b8b4) aid_vkb2_area_bottom_pane_cell

0x99c1,	// (0x00018cee) popup_char_count_window

0x9e40,	// (0x0001916d) popup_char_count_window_g1

0x9e49,	// (0x00019176) popup_char_count_window_g2

0x9e52,	// (0x0001917f) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x0001f10d) popup_char_count_window_g

0x9e5b,	// (0x00019188) popup_char_count_window_t1

0x1c48,	// (0x00010f75) popup_fep_char_preview_window_ParamLimits

0x1c48,	// (0x00010f75) popup_fep_char_preview_window

0xc4fc,	// (0x0001b829) vkb2_top_candi_pane_ParamLimits

0xc4fc,	// (0x0001b829) vkb2_top_candi_pane

0xf15e,	// (0x0001e48b) cell_vkb2_top_candi_pane_ParamLimits

0xf15e,	// (0x0001e48b) cell_vkb2_top_candi_pane

0x21b4,	// (0x000114e1) bg_popup_fep_char_preview_window_ParamLimits

0x21b4,	// (0x000114e1) bg_popup_fep_char_preview_window

0x21c2,	// (0x000114ef) popup_fep_char_preview_window_t1_ParamLimits

0x21c2,	// (0x000114ef) popup_fep_char_preview_window_t1

0x9eb6,	// (0x000191e3) bg_popup_fep_char_preview_window_g1

0x9ebe,	// (0x000191eb) bg_popup_fep_char_preview_window_g2

0x9ec6,	// (0x000191f3) bg_popup_fep_char_preview_window_g3

0x9ece,	// (0x000191fb) bg_popup_fep_char_preview_window_g4

0x9ed6,	// (0x00019203) bg_popup_fep_char_preview_window_g5

0x21fc,	// (0x00011529) bg_popup_fep_char_preview_window_g6

0x9ede,	// (0x0001920b) bg_popup_fep_char_preview_window_g7

0x9ee6,	// (0x00019213) bg_popup_fep_char_preview_window_g8

0x9eee,	// (0x0001921b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x0001f114) bg_popup_fep_char_preview_window_g

0x1951,	// (0x00010c7e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1951,	// (0x00010c7e) cell_vkb2_top_candi_pane_g1

0x195f,	// (0x00010c8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x195f,	// (0x00010c8c) cell_vkb2_top_candi_pane_g2

0x99a0,	// (0x00018ccd) cell_vkb2_top_candi_pane_g3_ParamLimits

0x99a0,	// (0x00018ccd) cell_vkb2_top_candi_pane_g3

0x2204,	// (0x00011531) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2204,	// (0x00011531) cell_vkb2_top_candi_pane_g4

0x80af,	// (0x000173dc) cell_vkb2_top_candi_pane_g5_ParamLimits

0x80af,	// (0x000173dc) cell_vkb2_top_candi_pane_g5

0x2225,	// (0x00011552) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2225,	// (0x00011552) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x0001f127) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x0001f127) cell_vkb2_top_candi_pane_g

0x2233,	// (0x00011560) cell_vkb2_top_candi_pane_t1

0x1536,	// (0x00010863) aid_size_touch_slider_mark_ParamLimits

0x1536,	// (0x00010863) aid_size_touch_slider_mark

0xee8e,	// (0x0001e1bb) grid_graphic2_catg_pane_ParamLimits

0xee8e,	// (0x0001e1bb) grid_graphic2_catg_pane

0xef4a,	// (0x0001e277) popup_grid_graphic2_window_t1_ParamLimits

0xef4a,	// (0x0001e277) popup_grid_graphic2_window_t1

0xef60,	// (0x0001e28d) popup_grid_graphic2_window_t2_ParamLimits

0xef60,	// (0x0001e28d) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0001f0e2) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0001f0e2) popup_grid_graphic2_window_t

0x2ade,	// (0x00011e0b) bg_button_pane_cp05_ParamLimits

0xf0d8,	// (0x0001e405) cell_graphic2_control_pane_g1_ParamLimits

0xf1c4,	// (0x0001e4f1) cell_graphic2_catg_pane_ParamLimits

0xf1c4,	// (0x0001e4f1) cell_graphic2_catg_pane

0x2747,	// (0x00011a74) bg_button_pane_cp12

0xf1d6,	// (0x0001e503) cell_graphic2_catg_pane_g1

0x9400,	// (0x0001872d) cell_tb_ext_pane_t1_ParamLimits

0x1fea,	// (0x00011317) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1fea,	// (0x00011317) vkb2_top_cell_right_narrow_pane

0x2002,	// (0x0001132f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2002,	// (0x0001132f) vkb2_top_cell_right_wide_pane

0x16ec,	// (0x00010a19) bg_vkb2_func_pane_ParamLimits

0x16ec,	// (0x00010a19) bg_vkb2_func_pane

0x2073,	// (0x000113a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp03_ParamLimits

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp03

0x20d1,	// (0x000113fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c9f,	// (0x00013fcc) bg_vkb2_func_pane_g1

0x4ca7,	// (0x00013fd4) bg_vkb2_func_pane_g2

0x4cb7,	// (0x00013fe4) bg_vkb2_func_pane_g3

0x4caf,	// (0x00013fdc) bg_vkb2_func_pane_g4

0x4cbf,	// (0x00013fec) bg_vkb2_func_pane_g5

0x4cc7,	// (0x00013ff4) bg_vkb2_func_pane_g6

0x4ccf,	// (0x00013ffc) bg_vkb2_func_pane_g7

0x4cd7,	// (0x00014004) bg_vkb2_func_pane_g8

0x4c97,	// (0x00013fc4) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x0001f134) bg_vkb2_func_pane_g

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp01_ParamLimits

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp01

0x2073,	// (0x000113a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2073,	// (0x000113a0) vkb2_top_cell_right_wide_pane_g1

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp02_ParamLimits

0x16ec,	// (0x00010a19) bg_vkb2_fuc_pane_cp02

0x20d1,	// (0x000113fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x20d1,	// (0x000113fe) vkb2_top_cell_right_narrow_pane_g1

0xe6ea,	// (0x0001da17) aid_touch_area_decrease_ParamLimits

0xe6ea,	// (0x0001da17) aid_touch_area_decrease

0xe724,	// (0x0001da51) aid_touch_area_increase_ParamLimits

0xe724,	// (0x0001da51) aid_touch_area_increase

0xe74c,	// (0x0001da79) aid_touch_area_mute_ParamLimits

0xe74c,	// (0x0001da79) aid_touch_area_mute

0xe77c,	// (0x0001daa9) aid_touch_area_slider_ParamLimits

0xe77c,	// (0x0001daa9) aid_touch_area_slider

0xe7bc,	// (0x0001dae9) popup_slider_window_g4_ParamLimits

0xe7bc,	// (0x0001dae9) popup_slider_window_g4

0xe7e4,	// (0x0001db11) popup_slider_window_g5_ParamLimits

0xe7e4,	// (0x0001db11) popup_slider_window_g5

0xe818,	// (0x0001db45) popup_slider_window_g6_ParamLimits

0xe818,	// (0x0001db45) popup_slider_window_g6

0x91da,	// (0x00018507) popup_slider_window_t2_ParamLimits

0x91da,	// (0x00018507) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0001f030) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0001f030) popup_slider_window_t

0xe834,	// (0x0001db61) slider_pane_ParamLimits

0xe834,	// (0x0001db61) slider_pane

0x9f11,	// (0x0001923e) slider_pane_g1_ParamLimits

0x9f11,	// (0x0001923e) slider_pane_g1

0x9f25,	// (0x00019252) slider_pane_g2_ParamLimits

0x9f25,	// (0x00019252) slider_pane_g2

0x9f3b,	// (0x00019268) slider_pane_g3_ParamLimits

0x9f3b,	// (0x00019268) slider_pane_g3

0x0003,

0xfe1a,	// (0x0001f147) slider_pane_g_ParamLimits

0xfe1a,	// (0x0001f147) slider_pane_g

0xc0cb,	// (0x0001b3f8) popup_tb_float_extension_window_ParamLimits

0xc0cb,	// (0x0001b3f8) popup_tb_float_extension_window

0x9f67,	// (0x00019294) aid_size_cell_tb_float_ext

0x2747,	// (0x00011a74) bg_popup_sub_window_cp28

0x9f73,	// (0x000192a0) grid_tb_float_ext_pane

0x9f7d,	// (0x000192aa) cell_tb_float_ext_pane_ParamLimits

0x9f7d,	// (0x000192aa) cell_tb_float_ext_pane

0x9f97,	// (0x000192c4) cell_tb_float_ext_pane_g1

0x9fa0,	// (0x000192cd) grid_highlight_pane_cp12

0xc2e5,	// (0x0001b612) cell_last_hwr_side_pane_ParamLimits

0xc2e5,	// (0x0001b612) cell_last_hwr_side_pane

0x77d0,	// (0x00016afd) cell_last_hwr_side_pane_g1

0x9fa9,	// (0x000192d6) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x0001f150) cell_last_hwr_side_pane_g

0xc663,	// (0x0001b990) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc663,	// (0x0001b990) vkb2_area_bottom_space_btn_pane

0x1951,	// (0x00010c7e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9a76,	// (0x00018da3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2233,	// (0x00011560) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2252,	// (0x0001157f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2252,	// (0x0001157f) vkb2_area_bottom_space_btn_pane_g1

0x228c,	// (0x000115b9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x228c,	// (0x000115b9) vkb2_area_bottom_space_btn_pane_g2

0x22c2,	// (0x000115ef) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x22c2,	// (0x000115ef) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x0001f155) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x0001f155) vkb2_area_bottom_space_btn_pane_g

0x17af,	// (0x00010adc) cel_fep_hwr_func_pane_ParamLimits

0x17af,	// (0x00010adc) cel_fep_hwr_func_pane

0xc2ba,	// (0x0001b5e7) cell_hwr_side_button_pane_ParamLimits

0xc2ba,	// (0x0001b5e7) cell_hwr_side_button_pane

0x9434,	// (0x00018761) aid_area_touch_clock_ParamLimits

0x2ade,	// (0x00011e0b) bg_uniindi_top_pane_ParamLimits

0x9446,	// (0x00018773) uniindi_top_pane_g1_ParamLimits

0x945c,	// (0x00018789) uniindi_top_pane_g2_ParamLimits

0x9468,	// (0x00018795) uniindi_top_pane_g3_ParamLimits

0x9479,	// (0x000187a6) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x0001f068) uniindi_top_pane_g_ParamLimits

0x9486,	// (0x000187b3) uniindi_top_pane_t1_ParamLimits

0x2ade,	// (0x00011e0b) bg_vkb2_func_pane_cp01_ParamLimits

0x2ade,	// (0x00011e0b) bg_vkb2_func_pane_cp01

0x9fb2,	// (0x000192df) cel_fep_hwr_func_pane_g1_ParamLimits

0x9fb2,	// (0x000192df) cel_fep_hwr_func_pane_g1

0x2ade,	// (0x00011e0b) bg_vkb2_func_pane_cp02_ParamLimits

0x2ade,	// (0x00011e0b) bg_vkb2_func_pane_cp02

0x9fb2,	// (0x000192df) cell_hwr_side_button_pane_g1_ParamLimits

0x9fb2,	// (0x000192df) cell_hwr_side_button_pane_g1

0x4b02,	// (0x00013e2f) status_pane_g4_ParamLimits

0x4b02,	// (0x00013e2f) status_pane_g4

0x4b1c,	// (0x00013e49) status_pane_t1

0x74ea,	// (0x00016817) form2_midp_gauge_slider_cont_pane

0x74f2,	// (0x0001681f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdfce,	// (0x0001d2fb) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdfe2,	// (0x0001d30f) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x0001ee28) form2_midp_gauge_slider_pane_t_ParamLimits

0x7528,	// (0x00016855) form2_midp_slider_pane_ParamLimits

0x1c08,	// (0x00010f35) aid_size_cell_func_vkb2_ParamLimits

0x1c08,	// (0x00010f35) aid_size_cell_func_vkb2

0x9f53,	// (0x00019280) slider_pane_g4_ParamLimits

0x9f53,	// (0x00019280) slider_pane_g4

0xc6c4,	// (0x0001b9f1) form2_midp_gauge_slider_pane_t2_cp01

0xc6d4,	// (0x0001ba01) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc6d4,	// (0x0001ba01) form2_midp_gauge_slider_pane_t3_cp01

0x2337,	// (0x00011664) form2_midp_slider_pane_cp01

0x2747,	// (0x00011a74) navi_smil_pane

0x9feb,	// (0x00019318) navi_smil_pane_g1

0x9ff3,	// (0x00019320) navi_smil_pane_t1

0x9fc0,	// (0x000192ed) form2_midp_slider_pane_g1

0x9fc9,	// (0x000192f6) form2_midp_slider_pane_g2

0x9fd1,	// (0x000192fe) form2_midp_slider_pane_g3

0x9fc0,	// (0x000192ed) form2_midp_slider_pane_g4

0xf1df,	// (0x0001e50c) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x0001f15e) form2_midp_slider_pane_g

0x22fc,	// (0x00011629) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x22fc,	// (0x00011629) vkb2_area_bottom_space_btn_pane_g4

0xd68e,	// (0x0001c9bb) lc0_navi_pane_ParamLimits

0xd68e,	// (0x0001c9bb) lc0_navi_pane

0xd6f8,	// (0x0001ca25) lc0_stat_indi_pane_ParamLimits

0xd6f8,	// (0x0001ca25) lc0_stat_indi_pane

0xd70d,	// (0x0001ca3a) ls0_title_pane_ParamLimits

0xd70d,	// (0x0001ca3a) ls0_title_pane

0x35fa,	// (0x00012927) bg_popup_sub_pane_cp14_ParamLimits

0x941b,	// (0x00018748) list_uniindi_pane_ParamLimits

0x9427,	// (0x00018754) uniindi_top_pane_ParamLimits

0x94c3,	// (0x000187f0) list_single_uniindi_pane_g1_ParamLimits

0x94d6,	// (0x00018803) list_single_uniindi_pane_t1_ParamLimits

0xc6f3,	// (0x0001ba20) lc0_stat_clock_pane_ParamLimits

0xc6f3,	// (0x0001ba20) lc0_stat_clock_pane

0xf1ea,	// (0x0001e517) lc0_stat_indi_pane_g1_ParamLimits

0xf1ea,	// (0x0001e517) lc0_stat_indi_pane_g1

0xf1f7,	// (0x0001e524) lc0_stat_indi_pane_g2_ParamLimits

0xf1f7,	// (0x0001e524) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x0001f169) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x0001f169) lc0_stat_indi_pane_g

0xc700,	// (0x0001ba2d) lc0_uni_indicator_pane_ParamLimits

0xc700,	// (0x0001ba2d) lc0_uni_indicator_pane

0xf204,	// (0x0001e531) ls0_title_pane_g1_ParamLimits

0xf204,	// (0x0001e531) ls0_title_pane_g1

0xf218,	// (0x0001e545) ls0_title_pane_t1_ParamLimits

0xf218,	// (0x0001e545) ls0_title_pane_t1

0xc70d,	// (0x0001ba3a) lc0_uni_indicator_pane_g1_ParamLimits

0xc70d,	// (0x0001ba3a) lc0_uni_indicator_pane_g1

0xa065,	// (0x00019392) lc0_stat_clock_pane_t1

0x035b,	// (0x0000f688) main_ai5_pane

0xa073,	// (0x000193a0) ai5_sk_pane_ParamLimits

0xa073,	// (0x000193a0) ai5_sk_pane

0xf246,	// (0x0001e573) cell_ai5_widget_pane_ParamLimits

0xf246,	// (0x0001e573) cell_ai5_widget_pane

0xa14a,	// (0x00019477) aid_size_cell_widget_grid

0xa160,	// (0x0001948d) bg_ai5_widget_pane_ParamLimits

0xa160,	// (0x0001948d) bg_ai5_widget_pane

0xa1d4,	// (0x00019501) cell_ai5_widget_pane_g2

0xa1e4,	// (0x00019511) cell_ai5_widget_pane_g3

0xa1fb,	// (0x00019528) cell_ai5_widget_pane_g4

0xa207,	// (0x00019534) cell_ai5_widget_pane_g5

0xa213,	// (0x00019540) cell_ai5_widget_pane_g6

0xa21f,	// (0x0001954c) cell_ai5_widget_pane_g7

0xa267,	// (0x00019594) cell_ai5_widget_pane_t1_ParamLimits

0xa267,	// (0x00019594) cell_ai5_widget_pane_t1

0xa284,	// (0x000195b1) cell_ai5_widget_pane_t2_ParamLimits

0xa284,	// (0x000195b1) cell_ai5_widget_pane_t2

0xa29c,	// (0x000195c9) cell_ai5_widget_pane_t3_ParamLimits

0xa29c,	// (0x000195c9) cell_ai5_widget_pane_t3

0xa2b4,	// (0x000195e1) cell_ai5_widget_pane_t4_ParamLimits

0xa2b4,	// (0x000195e1) cell_ai5_widget_pane_t4

0xa2d1,	// (0x000195fe) cell_ai5_widget_pane_t5_ParamLimits

0xa2d1,	// (0x000195fe) cell_ai5_widget_pane_t5

0xa2f0,	// (0x0001961d) cell_ai5_widget_pane_t6_ParamLimits

0xa2f0,	// (0x0001961d) cell_ai5_widget_pane_t6

0xa302,	// (0x0001962f) cell_ai5_widget_pane_t7_ParamLimits

0xa302,	// (0x0001962f) cell_ai5_widget_pane_t7

0xa31b,	// (0x00019648) cell_ai5_widget_pane_t8_ParamLimits

0xa31b,	// (0x00019648) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x0001f183) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x0001f183) cell_ai5_widget_pane_t

0xa36f,	// (0x0001969c) grid_ai5_widget_pane

0x35fa,	// (0x00012927) highlight_cell_ai5_widget_pane_ParamLimits

0x35fa,	// (0x00012927) highlight_cell_ai5_widget_pane

0xf2b0,	// (0x0001e5dd) ai5_sk_left_pane

0xf2ba,	// (0x0001e5e7) ai5_sk_middle_pane

0xf2c4,	// (0x0001e5f1) ai5_sk_right_pane

0xa3a5,	// (0x000196d2) bg_ai5_widget_pane_g1_ParamLimits

0xa3a5,	// (0x000196d2) bg_ai5_widget_pane_g1

0xa3b1,	// (0x000196de) bg_ai5_widget_pane_g2_ParamLimits

0xa3b1,	// (0x000196de) bg_ai5_widget_pane_g2

0xa3bd,	// (0x000196ea) bg_ai5_widget_pane_g3_ParamLimits

0xa3bd,	// (0x000196ea) bg_ai5_widget_pane_g3

0xa3c9,	// (0x000196f6) bg_ai5_widget_pane_g4_ParamLimits

0xa3c9,	// (0x000196f6) bg_ai5_widget_pane_g4

0xa3d5,	// (0x00019702) bg_ai5_widget_pane_g5_ParamLimits

0xa3d5,	// (0x00019702) bg_ai5_widget_pane_g5

0xa3e1,	// (0x0001970e) bg_ai5_widget_pane_g6_ParamLimits

0xa3e1,	// (0x0001970e) bg_ai5_widget_pane_g6

0xa3ed,	// (0x0001971a) bg_ai5_widget_pane_g7_ParamLimits

0xa3ed,	// (0x0001971a) bg_ai5_widget_pane_g7

0xa3f9,	// (0x00019726) bg_ai5_widget_pane_g8_ParamLimits

0xa3f9,	// (0x00019726) bg_ai5_widget_pane_g8

0xa405,	// (0x00019732) bg_ai5_widget_pane_g9_ParamLimits

0xa405,	// (0x00019732) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x0001f198) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x0001f198) bg_ai5_widget_pane_g

0xa437,	// (0x00019764) cell_shortcut_ai5_widget_pane_ParamLimits

0xa437,	// (0x00019764) cell_shortcut_ai5_widget_pane

0x4439,	// (0x00013766) bg_cell_shortcut_ai5_widget_pane

0xa448,	// (0x00019775) cell_grid_ai5_widget_pane_g1

0x4439,	// (0x00013766) highlight_cell_shortcut_ai5_widget_pane

0x4c9f,	// (0x00013fcc) ai5_sk_left_pane_g1

0xa451,	// (0x0001977e) ai5_sk_left_pane_g2

0xa459,	// (0x00019786) ai5_sk_left_pane_g3

0xa461,	// (0x0001978e) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x0001f1ab) ai5_sk_left_pane_g

0xa469,	// (0x00019796) ai5_sk_left_pane_t1

0x4ca7,	// (0x00013fd4) ai5_sk_right_pane_g1

0xa477,	// (0x000197a4) ai5_sk_right_pane_g2

0xa47f,	// (0x000197ac) ai5_sk_right_pane_g3

0xa487,	// (0x000197b4) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x0001f1b4) ai5_sk_right_pane_g

0xa48f,	// (0x000197bc) ai5_sk_right_pane_t1

0x4ca7,	// (0x00013fd4) ai5_sk_middle_pane_g1

0x4c9f,	// (0x00013fcc) ai5_sk_middle_pane_g2

0x4cbf,	// (0x00013fec) ai5_sk_middle_pane_g3

0xa47f,	// (0x000197ac) ai5_sk_middle_pane_g4

0xa459,	// (0x00019786) ai5_sk_middle_pane_g5

0xa49d,	// (0x000197ca) ai5_sk_middle_pane_g6

0xf2ce,	// (0x0001e5fb) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x0001f1bd) ai5_sk_middle_pane_g

0xd57a,	// (0x0001c8a7) aid_touch_area_size_lc0_ParamLimits

0xd57a,	// (0x0001c8a7) aid_touch_area_size_lc0

0x1980,	// (0x00010cad) cell_hwr_candidate_pane_t1_ParamLimits

0x47e5,	// (0x00013b12) aid_touch_navi_pane

0xd806,	// (0x0001cb33) status_dt_navi_pane_ParamLimits

0xd806,	// (0x0001cb33) status_dt_navi_pane

0xd81e,	// (0x0001cb4b) status_dt_sta_pane_ParamLimits

0xd81e,	// (0x0001cb4b) status_dt_sta_pane

0xf2d6,	// (0x0001e603) dt_sta_controll_pane

0xf2e3,	// (0x0001e610) dt_sta_indi_pane

0xf2f0,	// (0x0001e61d) dt_sta_title_pane

0x2ade,	// (0x00011e0b) bg_dt_sta_indi_pane_ParamLimits

0x2ade,	// (0x00011e0b) bg_dt_sta_indi_pane

0xa4de,	// (0x0001980b) dt_sta_battery_pane

0xf302,	// (0x0001e62f) dt_sta_indi_pane_g1

0xf30b,	// (0x0001e638) dt_sta_indi_pane_g2

0xf314,	// (0x0001e641) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x0001f1cc) dt_sta_indi_pane_g

0xf31d,	// (0x0001e64a) dt_sta_signal_pane

0x35fa,	// (0x00012927) bg_dt_sta_title_pane_ParamLimits

0x35fa,	// (0x00012927) bg_dt_sta_title_pane

0xa50a,	// (0x00019837) dt_sta_title_pane_g1

0xf326,	// (0x0001e653) dt_sta_title_pane_t1_ParamLimits

0xf326,	// (0x0001e653) dt_sta_title_pane_t1

0x2747,	// (0x00011a74) bg_dt_sta_control_pane

0xf33b,	// (0x0001e668) dt_sta_controll_pane_g1

0xa530,	// (0x0001985d) bg_dt_sta_title_pane_g1

0xa539,	// (0x00019866) bg_dt_sta_title_pane_g2

0xa542,	// (0x0001986f) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x0001f1d3) bg_dt_sta_title_pane_g

0x77d0,	// (0x00016afd) bg_dt_sta_indi_pane_g1

0xa54b,	// (0x00019878) dt_sta_signal_pane_g1

0xa553,	// (0x00019880) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x0001f1da) dt_sta_signal_pane_g

0xa55b,	// (0x00019888) dt_sta_battery_pane_g1

0xa564,	// (0x00019891) dt_sta_battery_pane_t1

0x77d0,	// (0x00016afd) bg_dt_sta_control_pane_g1

0x3eb8,	// (0x000131e5) fep_china_uni_eep_pane

0x3ec0,	// (0x000131ed) fep_china_uni_entry_pane_ParamLimits

0x3ed0,	// (0x000131fd) popup_fep_china_uni_window_g1_ParamLimits

0x3ee0,	// (0x0001320d) popup_fep_china_uni_window_g2_ParamLimits

0x3ee0,	// (0x0001320d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001ea45) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001ea45) popup_fep_china_uni_window_g

0xa573,	// (0x000198a0) fep_china_uni_eep_pane_g1

0xa57b,	// (0x000198a8) fep_china_uni_eep_pane_t1

0x9fe2,	// (0x0001930f) aid_touch_area_size_smil_player

0x4931,	// (0x00013c5e) lc0_clock_pane

0x4b10,	// (0x00013e3d) status_pane_g5_ParamLimits

0x4b10,	// (0x00013e3d) status_pane_g5

0xbc59,	// (0x0001af86) popup_keymap_window

0x4ad6,	// (0x00013e03) status_icon_pane

0xa1e4,	// (0x00019511) cell_ai5_widget_pane_g3_ParamLimits

0xa1fb,	// (0x00019528) cell_ai5_widget_pane_g4_ParamLimits

0xa207,	// (0x00019534) cell_ai5_widget_pane_g5_ParamLimits

0xa22b,	// (0x00019558) cell_ai5_widget_pane_g8_ParamLimits

0xa22b,	// (0x00019558) cell_ai5_widget_pane_g8

0xa23f,	// (0x0001956c) cell_ai5_widget_pane_g9_ParamLimits

0xa23f,	// (0x0001956c) cell_ai5_widget_pane_g9

0xa253,	// (0x00019580) cell_ai5_widget_pane_g10_ParamLimits

0xa253,	// (0x00019580) cell_ai5_widget_pane_g10

0xa58a,	// (0x000198b7) status_icon_pane_g1

0x2747,	// (0x00011a74) bg_popup_sub_pane_cp13

0xa592,	// (0x000198bf) popup_keymap_window_t1

0xd4e8,	// (0x0001c815) control_pane_g6_ParamLimits

0xd4e8,	// (0x0001c815) control_pane_g6

0xd4f5,	// (0x0001c822) control_pane_g7_ParamLimits

0xd4f5,	// (0x0001c822) control_pane_g7

0xd502,	// (0x0001c82f) control_pane_g8_ParamLimits

0xd502,	// (0x0001c82f) control_pane_g8

0xf2d6,	// (0x0001e603) dt_sta_controll_pane_ParamLimits

0xf2e3,	// (0x0001e610) dt_sta_indi_pane_ParamLimits

0xf2f0,	// (0x0001e61d) dt_sta_title_pane_ParamLimits

0x2fe7,	// (0x00012314) aid_size_touch_scroll_bar_cale

0x0434,	// (0x0000f761) popup_discreet_window_ParamLimits

0x0434,	// (0x0000f761) popup_discreet_window

0xb868,	// (0x0001ab95) popup_sk_window

0x5412,	// (0x0001473f) bg_popup_sub_pane_cp28_ParamLimits

0x5412,	// (0x0001473f) bg_popup_sub_pane_cp28

0xa5a0,	// (0x000198cd) popup_discreet_window_g1_ParamLimits

0xa5a0,	// (0x000198cd) popup_discreet_window_g1

0xa5c0,	// (0x000198ed) popup_discreet_window_t1_ParamLimits

0xa5c0,	// (0x000198ed) popup_discreet_window_t1

0xa5de,	// (0x0001990b) popup_discreet_window_t2_ParamLimits

0xa5de,	// (0x0001990b) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0001f1df) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0001f1df) popup_discreet_window_t

0x236f,	// (0x0001169c) popup_sk_window_g1

0x2379,	// (0x000116a6) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x0001f1e6) popup_sk_window_g

0x2383,	// (0x000116b0) popup_sk_window_t1

0x2391,	// (0x000116be) popup_sk_window_t1_copy1

0xa1d4,	// (0x00019501) cell_ai5_widget_pane_g2_ParamLimits

0xa32d,	// (0x0001965a) cell_ai5_widget_pane_t9_ParamLimits

0xa32d,	// (0x0001965a) cell_ai5_widget_pane_t9

0x2747,	// (0x00011a74) main_fep_fshwr2_pane

0xc73b,	// (0x0001ba68) aid_fshwr2_btn_pane

0xc74c,	// (0x0001ba79) aid_fshwr2_syb_pane

0xc75d,	// (0x0001ba8a) aid_fshwr2_txt_pane

0xc769,	// (0x0001ba96) fshwr2_func_candi_pane

0xc788,	// (0x0001bab5) fshwr2_hwr_syb_pane

0xc7a3,	// (0x0001bad0) fshwr2_icf_pane

0x035b,	// (0x0000f688) fshwr2_icf_bg_pane

0xc7cc,	// (0x0001baf9) fshwr2_icf_pane_t1_ParamLimits

0xc7cc,	// (0x0001baf9) fshwr2_icf_pane_t1

0x3daa,	// (0x000130d7) fshwr2_func_candi_pane_g1

0xf344,	// (0x0001e671) fshwr2_func_candi_row_pane_ParamLimits

0xf344,	// (0x0001e671) fshwr2_func_candi_row_pane

0xc7e5,	// (0x0001bb12) cell_fshwr2_syb_pane_ParamLimits

0xc7e5,	// (0x0001bb12) cell_fshwr2_syb_pane

0x1951,	// (0x00010c7e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1951,	// (0x00010c7e) fshwr2_hwr_syb_pane_g1

0x035b,	// (0x0000f688) bg_popup_call_pane_cp01

0xc7fb,	// (0x0001bb28) fshwr2_func_candi_cell_pane_ParamLimits

0xc7fb,	// (0x0001bb28) fshwr2_func_candi_cell_pane

0xf354,	// (0x0001e681) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf354,	// (0x0001e681) fshwr2_func_candi_cell_bg_pane

0xc830,	// (0x0001bb5d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc830,	// (0x0001bb5d) fshwr2_func_candi_cell_pane_g1

0xc85f,	// (0x0001bb8c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc85f,	// (0x0001bb8c) fshwr2_func_candi_cell_pane_t1

0x035b,	// (0x0000f688) bg_button_pane_cp08

0x6886,	// (0x00015bb3) cell_fshwr2_syb_bg_pane

0xc872,	// (0x0001bb9f) cell_fshwr2_syb_bg_pane_g1

0xc87a,	// (0x0001bba7) cell_fshwr2_syb_bg_pane_t1

0x35fa,	// (0x00012927) main_tmo_pane

0xdb1a,	// (0x0001ce47) uni_indicator_pane_g1_ParamLimits

0xdb30,	// (0x0001ce5d) uni_indicator_pane_g2_ParamLimits

0xdb46,	// (0x0001ce73) uni_indicator_pane_g3_ParamLimits

0x5f68,	// (0x00015295) uni_indicator_pane_g4_ParamLimits

0x5f68,	// (0x00015295) uni_indicator_pane_g4

0x5f7c,	// (0x000152a9) uni_indicator_pane_g5_ParamLimits

0x5f7c,	// (0x000152a9) uni_indicator_pane_g5

0x5f7c,	// (0x000152a9) uni_indicator_pane_g6_ParamLimits

0x5f7c,	// (0x000152a9) uni_indicator_pane_g6

0xf917,	// (0x0001ec44) uni_indicator_pane_g_ParamLimits

0xe6cc,	// (0x0001d9f9) popup_tmo_note_window_ParamLimits

0xe6cc,	// (0x0001d9f9) popup_tmo_note_window

0x1bea,	// (0x00010f17) fshwr2_bg_pane

0xc850,	// (0x0001bb7d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc850,	// (0x0001bb7d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x0001f1eb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x0001f1eb) fshwr2_func_candi_cell_pane_g

0x1939,	// (0x00010c66) bg_popup_window_pane_cp01

0x24be,	// (0x000117eb) bg_popup_window_pane_g1_cp01

0xa640,	// (0x0001996d) bg_popup_window_pane_cp22_ParamLimits

0xa640,	// (0x0001996d) bg_popup_window_pane_cp22

0xa64e,	// (0x0001997b) listscroll_tmo_link_pane_ParamLimits

0xa64e,	// (0x0001997b) listscroll_tmo_link_pane

0xa68e,	// (0x000199bb) popup_tmo_note_window_g1_ParamLimits

0xa68e,	// (0x000199bb) popup_tmo_note_window_g1

0xa69b,	// (0x000199c8) tmo_note_info_pane_ParamLimits

0xa69b,	// (0x000199c8) tmo_note_info_pane

0xf360,	// (0x0001e68d) list_tmo_note_info_pane_g1_ParamLimits

0xf360,	// (0x0001e68d) list_tmo_note_info_pane_g1

0xa6cc,	// (0x000199f9) list_tmo_note_info_pane_g2_ParamLimits

0xa6cc,	// (0x000199f9) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0001f1f0) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0001f1f0) list_tmo_note_info_pane_g

0xa6e8,	// (0x00019a15) list_tmo_note_info_text_pane_ParamLimits

0xa6e8,	// (0x00019a15) list_tmo_note_info_text_pane

0xa76b,	// (0x00019a98) list_tmo_link_pane

0xa778,	// (0x00019aa5) scroll_pane_cp20

0xa785,	// (0x00019ab2) list_single_tmo_link_pane_ParamLimits

0xa785,	// (0x00019ab2) list_single_tmo_link_pane

0xa795,	// (0x00019ac2) list_single_tmo_link_pane_t1

0xa7a3,	// (0x00019ad0) list_tmo_note_info_text_pane_t1_ParamLimits

0xa7a3,	// (0x00019ad0) list_tmo_note_info_text_pane_t1

0xd0f9,	// (0x0001c426) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd0f9,	// (0x0001c426) aid_size_touch_scroll_bar_cp01

0xd055,	// (0x0001c382) aid_size_touch_slider_marker

0xb858,	// (0x0001ab85) popup_settings_window_ParamLimits

0xb858,	// (0x0001ab85) popup_settings_window

0x4795,	// (0x00013ac2) popup_candi_list_indi_window

0x47e5,	// (0x00013b12) aid_touch_navi_pane_ParamLimits

0x1b45,	// (0x00010e72) rs_clock_indi_pane

0x1b4e,	// (0x00010e7b) sctrl_sk_bottom_pane_ParamLimits

0x1b5f,	// (0x00010e8c) sctrl_sk_top_pane_ParamLimits

0x1c62,	// (0x00010f8f) popup_fep_tooltip_window

0xa14a,	// (0x00019477) aid_size_cell_widget_grid_ParamLimits

0xa1bf,	// (0x000194ec) cell_ai5_widget_pane_g1_ParamLimits

0xa1bf,	// (0x000194ec) cell_ai5_widget_pane_g1

0xa213,	// (0x00019540) cell_ai5_widget_pane_g6_ParamLimits

0xa21f,	// (0x0001954c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x0001f16e) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x0001f16e) cell_ai5_widget_pane_g

0xa351,	// (0x0001967e) cell_ai5_widget_pane_t10_ParamLimits

0xa351,	// (0x0001967e) cell_ai5_widget_pane_t10

0xa36f,	// (0x0001969c) grid_ai5_widget_pane_ParamLimits

0xa411,	// (0x0001973e) cell_contacts_ai5_widget_pane_ParamLimits

0xa411,	// (0x0001973e) cell_contacts_ai5_widget_pane

0xa5f3,	// (0x00019920) popup_discreet_window_t3_ParamLimits

0xa5f3,	// (0x00019920) popup_discreet_window_t3

0xc7b8,	// (0x0001bae5) popup_fshwr2_char_preview_window_ParamLimits

0xc7b8,	// (0x0001bae5) popup_fshwr2_char_preview_window

0xf377,	// (0x0001e6a4) tmo_note_info_pane_t1

0xf38c,	// (0x0001e6b9) tmo_note_info_pane_t2

0xf3a5,	// (0x0001e6d2) tmo_note_info_pane_t3

0xa747,	// (0x00019a74) tmo_note_info_pane_t4

0xa759,	// (0x00019a86) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x0001f1f5) tmo_note_info_pane_t

0xa76b,	// (0x00019a98) list_tmo_link_pane_ParamLimits

0xa778,	// (0x00019aa5) scroll_pane_cp20_ParamLimits

0x035b,	// (0x0000f688) bg_popup_fep_char_preview_window_cp01

0xa7bc,	// (0x00019ae9) popup_fshwr2_char_preview_window_t1

0xa7ca,	// (0x00019af7) popup_candi_list_indi_window_g1

0xa7d3,	// (0x00019b00) bg_cell_contacts_ai5_widget_pane

0xa7df,	// (0x00019b0c) cell_contacts_ai5_widget_pane_g1

0xa7f4,	// (0x00019b21) cell_contacts_ai5_widget_pane_g2

0xa800,	// (0x00019b2d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0001f200) cell_contacts_ai5_widget_pane_g

0xa80c,	// (0x00019b39) cell_contacts_ai5_widget_pane_t1

0x35fa,	// (0x00012927) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf3ba,	// (0x0001e6e7) settings_container_pane

0x4439,	// (0x00013766) listscroll_set_pane_copy1

0x6bcd,	// (0x00015efa) scroll_pane_cp121_copy1

0xa88f,	// (0x00019bbc) set_content_pane_copy1

0xf3c6,	// (0x0001e6f3) aid_height_set_list_copy1_ParamLimits

0xf3c6,	// (0x0001e6f3) aid_height_set_list_copy1

0x6181,	// (0x000154ae) aid_size_parent_copy1_ParamLimits

0x6181,	// (0x000154ae) aid_size_parent_copy1

0xf3d2,	// (0x0001e6ff) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf3d2,	// (0x0001e6ff) button_value_adjust_pane_cp6_copy1

0x477b,	// (0x00013aa8) list_highlight_pane_cp2_copy1_ParamLimits

0x477b,	// (0x00013aa8) list_highlight_pane_cp2_copy1

0xf3e6,	// (0x0001e713) list_set_pane_copy1_ParamLimits

0xf3e6,	// (0x0001e713) list_set_pane_copy1

0xa81e,	// (0x00019b4b) main_pane_set_t1_copy1_ParamLimits

0xa81e,	// (0x00019b4b) main_pane_set_t1_copy1

0xa858,	// (0x00019b85) main_pane_set_t2_copy1_ParamLimits

0xa858,	// (0x00019b85) main_pane_set_t2_copy1

0xa964,	// (0x00019c91) main_pane_set_t3_copy1

0xa972,	// (0x00019c9f) main_pane_set_t4_copy1

0xa877,	// (0x00019ba4) set_content_pane_g1_copy1_ParamLimits

0xa877,	// (0x00019ba4) set_content_pane_g1_copy1

0xf493,	// (0x0001e7c0) setting_code_pane_copy1

0xa988,	// (0x00019cb5) setting_slider_graphic_pane_copy1

0xa988,	// (0x00019cb5) setting_slider_pane_copy1

0xa988,	// (0x00019cb5) setting_text_pane_copy1

0xa988,	// (0x00019cb5) setting_volume_pane_copy1

0xf493,	// (0x0001e7c0) settings_code_pane_cp2_copy1

0xf49b,	// (0x0001e7c8) settings_code_pane_cp_copy1_ParamLimits

0xf49b,	// (0x0001e7c8) settings_code_pane_cp_copy1

0xc889,	// (0x0001bbb6) volume_set_pane_copy1

0xf4af,	// (0x0001e7dc) volume_set_pane_g10_copy1

0xf4b7,	// (0x0001e7e4) volume_set_pane_g1_copy1

0xf4bf,	// (0x0001e7ec) volume_set_pane_g2_copy1

0xf4c7,	// (0x0001e7f4) volume_set_pane_g3_copy1

0xf4cf,	// (0x0001e7fc) volume_set_pane_g4_copy1

0xf4d7,	// (0x0001e804) volume_set_pane_g5_copy1

0xf4df,	// (0x0001e80c) volume_set_pane_g6_copy1

0xf4e7,	// (0x0001e814) volume_set_pane_g7_copy1

0xf4ef,	// (0x0001e81c) volume_set_pane_g8_copy1

0xf4f7,	// (0x0001e824) volume_set_pane_g9_copy1

0x283b,	// (0x00011b68) bg_set_opt_pane_cp_copy1_ParamLimits

0x283b,	// (0x00011b68) bg_set_opt_pane_cp_copy1

0x24cf,	// (0x000117fc) setting_slider_pane_t1_copy1_ParamLimits

0x24cf,	// (0x000117fc) setting_slider_pane_t1_copy1

0xc891,	// (0x0001bbbe) setting_slider_pane_t2_copy1_ParamLimits

0xc891,	// (0x0001bbbe) setting_slider_pane_t2_copy1

0xc8ab,	// (0x0001bbd8) setting_slider_pane_t3_copy1_ParamLimits

0xc8ab,	// (0x0001bbd8) setting_slider_pane_t3_copy1

0xc8c3,	// (0x0001bbf0) slider_set_pane_copy1_ParamLimits

0xc8c3,	// (0x0001bbf0) slider_set_pane_copy1

0x3727,	// (0x00012a54) set_opt_bg_pane_g1_copy2

0x372f,	// (0x00012a5c) set_opt_bg_pane_g2_copy2

0xa9f4,	// (0x00019d21) set_opt_bg_pane_g3_copy2

0x373f,	// (0x00012a6c) set_opt_bg_pane_g4_copy2

0x3747,	// (0x00012a74) set_opt_bg_pane_g5_copy2

0x374f,	// (0x00012a7c) set_opt_bg_pane_g6_copy2

0xf4ff,	// (0x0001e82c) set_opt_bg_pane_g7_copy2

0xaa06,	// (0x00019d33) set_opt_bg_pane_g8_copy2

0xaa10,	// (0x00019d3d) set_opt_bg_pane_g9_copy2

0x2535,	// (0x00011862) aid_size_touch_slider_mark_copy1_ParamLimits

0x2535,	// (0x00011862) aid_size_touch_slider_mark_copy1

0xaa1a,	// (0x00019d47) slider_set_pane_g1_copy1

0x2549,	// (0x00011876) slider_set_pane_g2_copy1

0x1556,	// (0x00010883) slider_set_pane_g3_copy1_ParamLimits

0x1556,	// (0x00010883) slider_set_pane_g3_copy1

0x156a,	// (0x00010897) slider_set_pane_g4_copy1_ParamLimits

0x156a,	// (0x00010897) slider_set_pane_g4_copy1

0x1582,	// (0x000108af) slider_set_pane_g5_copy1_ParamLimits

0x1582,	// (0x000108af) slider_set_pane_g5_copy1

0x1556,	// (0x00010883) slider_set_pane_g6_copy1_ParamLimits

0x1556,	// (0x00010883) slider_set_pane_g6_copy1

0x2551,	// (0x0001187e) slider_set_pane_g7_copy1_ParamLimits

0x2551,	// (0x0001187e) slider_set_pane_g7_copy1

0x275b,	// (0x00011a88) bg_set_opt_pane_cp2_copy1

0xaa23,	// (0x00019d50) setting_slider_graphic_pane_g1_copy1

0xf507,	// (0x0001e834) setting_slider_graphic_pane_t1_copy1

0xf517,	// (0x0001e844) setting_slider_graphic_pane_t2_copy1

0xf527,	// (0x0001e854) slider_set_pane_cp_copy1

0xaa5c,	// (0x00019d89) input_focus_pane_cp1_copy1

0xaa65,	// (0x00019d92) list_set_text_pane_copy1

0xaa6d,	// (0x00019d9a) setting_text_pane_g1_copy1

0xaa76,	// (0x00019da3) set_text_pane_t1_copy1

0xaa5c,	// (0x00019d89) input_focus_pane_cp2_copy1

0xaa6d,	// (0x00019d9a) setting_code_pane_g1_copy1

0xf52f,	// (0x0001e85c) setting_code_pane_t1_copy1

0x6a01,	// (0x00015d2e) list_set_graphic_pane_copy1

0x275b,	// (0x00011a88) bg_set_opt_pane_cp4_copy1

0xd361,	// (0x0001c68e) list_set_graphic_pane_g1_copy1_ParamLimits

0xd361,	// (0x0001c68e) list_set_graphic_pane_g1_copy1

0xf53d,	// (0x0001e86a) list_set_graphic_pane_g2_copy1

0xd379,	// (0x0001c6a6) list_set_graphic_pane_t1_copy1_ParamLimits

0xd379,	// (0x0001c6a6) list_set_graphic_pane_t1_copy1

0x77d0,	// (0x00016afd) rs_clock_indi_pane_g1

0xaabc,	// (0x00019de9) rs_clock_indi_pane_t1

0xaaca,	// (0x00019df7) rs_indi_pane

0xaad2,	// (0x00019dff) rs_indi_pane_g1

0xaadb,	// (0x00019e08) rs_indi_pane_g2

0xaae4,	// (0x00019e11) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x0001f207) rs_indi_pane_g

0x4439,	// (0x00013766) bg_popup_preview_window_pane_cp03

0xaaed,	// (0x00019e1a) popup_fep_tooltip_window_t1

0x865c,	// (0x00017989) popup_note2_window_g2_ParamLimits

0x865c,	// (0x00017989) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0001efa0) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0001efa0) popup_note2_window_g

0x8c40,	// (0x00017f6d) bg_popup_sub_pane_cp11_ParamLimits

0x8c4d,	// (0x00017f7a) cell_ai3_links_pane_g1_ParamLimits

0x8c64,	// (0x00017f91) cell_ai3_links_pane_t1

0xaa76,	// (0x00019da3) set_text_pane_t1_copy1_ParamLimits

0x4356,	// (0x00013683) cell_graphic_popup_pane_cp2_ParamLimits

0x4356,	// (0x00013683) cell_graphic_popup_pane_cp2

0xaafb,	// (0x00019e28) cell_graphic_popup_pane_g1_cp2

0x2dfa,	// (0x00012127) cell_graphic_popup_pane_g2_cp2

0xab03,	// (0x00019e30) cell_graphic_popup_pane_g3_cp2

0xab0b,	// (0x00019e38) cell_graphic_popup_pane_t2_cp2

0x2e0b,	// (0x00012138) grid_highlight_pane_cp3_cp2

0x3af5,	// (0x00012e22) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35fa,	// (0x00012927) main_tmo_pane_ParamLimits

0xe6c0,	// (0x0001d9ed) popup_tmo_big_image_note_window

0xa1ae,	// (0x000194db) cell_ai5_widget_list_pane

0xa1b6,	// (0x000194e3) cell_ai5_widget_lrg_icon_pane

0xf377,	// (0x0001e6a4) tmo_note_info_pane_t1_ParamLimits

0xf38c,	// (0x0001e6b9) tmo_note_info_pane_t2_ParamLimits

0xf3a5,	// (0x0001e6d2) tmo_note_info_pane_t3_ParamLimits

0xa747,	// (0x00019a74) tmo_note_info_pane_t4_ParamLimits

0xa759,	// (0x00019a86) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x0001f1f5) tmo_note_info_pane_t_ParamLimits

0xf3ba,	// (0x0001e6e7) settings_container_pane_ParamLimits

0xaa54,	// (0x00019d81) indicator_popup_pane_cp5

0xaa54,	// (0x00019d81) indicator_popup_pane_cp6

0x6a01,	// (0x00015d2e) list_set_graphic_pane_copy1_ParamLimits

0x2747,	// (0x00011a74) bg_popup_window_pane_cp23

0xab19,	// (0x00019e46) popup_tmo_big_image_note_window_g1

0xab22,	// (0x00019e4f) popup_tmo_big_image_note_window_t1

0xab32,	// (0x00019e5f) popup_tmo_big_image_note_window_t2

0xab42,	// (0x00019e6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0001f20e) popup_tmo_big_image_note_window_t

0x77d0,	// (0x00016afd) cell_ai5_widget_lrg_icon_pane_g1

0xab52,	// (0x00019e7f) cell_ai5_widget_lrg_icon_pane_t1

0xab60,	// (0x00019e8d) cell_ai5_widget_list_row_pane_ParamLimits

0xab60,	// (0x00019e8d) cell_ai5_widget_list_row_pane

0xab77,	// (0x00019ea4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xab77,	// (0x00019ea4) cell_ai5_widget_list_row_pane_g1

0xab84,	// (0x00019eb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xab84,	// (0x00019eb1) cell_ai5_widget_list_row_pane_t1

0xabb2,	// (0x00019edf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xabb2,	// (0x00019edf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x0001f215) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x0001f215) cell_ai5_widget_list_row_pane_t

0x035b,	// (0x0000f688) main_fep_vtchi_ss_pane

0x2583,	// (0x000118b0) popup_fep_char_pre_window

0x258b,	// (0x000118b8) popup_fep_ituss_window

0x25ac,	// (0x000118d9) popup_fep_vkbss_window

0xabda,	// (0x00019f07) grid_vkbss_keypad_pane_ParamLimits

0xabda,	// (0x00019f07) grid_vkbss_keypad_pane

0xabea,	// (0x00019f17) ituss_keypad_pane

0x25d7,	// (0x00011904) aid_vkbss_key_offset_ParamLimits

0x25d7,	// (0x00011904) aid_vkbss_key_offset

0x25e3,	// (0x00011910) cell_vkbss_key_pane_ParamLimits

0x25e3,	// (0x00011910) cell_vkbss_key_pane

0x4aea,	// (0x00013e17) bg_cell_vkbss_key_g1_ParamLimits

0x4aea,	// (0x00013e17) bg_cell_vkbss_key_g1

0xabf9,	// (0x00019f26) cell_vkbss_key_3p_pane_ParamLimits

0xabf9,	// (0x00019f26) cell_vkbss_key_3p_pane

0xac13,	// (0x00019f40) cell_vkbss_key_g1_ParamLimits

0xac13,	// (0x00019f40) cell_vkbss_key_g1

0xac2d,	// (0x00019f5a) cell_vkbss_key_t1_ParamLimits

0xac2d,	// (0x00019f5a) cell_vkbss_key_t1

0x25f9,	// (0x00011926) cell_ituss_key_pane_ParamLimits

0x25f9,	// (0x00011926) cell_ituss_key_pane

0xac58,	// (0x00019f85) bg_cell_ituss_key_g1_ParamLimits

0xac58,	// (0x00019f85) bg_cell_ituss_key_g1

0xac64,	// (0x00019f91) cell_ituss_key_pane_g1_ParamLimits

0xac64,	// (0x00019f91) cell_ituss_key_pane_g1

0x260a,	// (0x00011937) cell_ituss_key_pane_g2_ParamLimits

0x260a,	// (0x00011937) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x0001f21c) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x0001f21c) cell_ituss_key_pane_g

0x2636,	// (0x00011963) cell_ituss_key_t1_ParamLimits

0x2636,	// (0x00011963) cell_ituss_key_t1

0x2670,	// (0x0001199d) cell_ituss_key_t2_ParamLimits

0x2670,	// (0x0001199d) cell_ituss_key_t2

0x26a1,	// (0x000119ce) cell_ituss_key_t3_ParamLimits

0x26a1,	// (0x000119ce) cell_ituss_key_t3

0x2670,	// (0x0001199d) cell_ituss_key_t4_ParamLimits

0x2670,	// (0x0001199d) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0001f223) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0001f223) cell_ituss_key_t

0xac8a,	// (0x00019fb7) cell_vkbss_key_3p_pane_g1

0xac92,	// (0x00019fbf) cell_vkbss_key_3p_pane_g2

0xac9a,	// (0x00019fc7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0001f22e) cell_vkbss_key_3p_pane_g

0x035b,	// (0x0000f688) bg_popup_fep_char_preview_window_cp02

0x26e4,	// (0x00011a11) popup_fep_char_pre_window_t1

0xf2a6,	// (0x0001e5d3) main_ai5_sk_pane

0xa7d3,	// (0x00019b00) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7df,	// (0x00019b0c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7f4,	// (0x00019b21) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa800,	// (0x00019b2d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0001f200) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa80c,	// (0x00019b39) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35fa,	// (0x00012927) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf545,	// (0x0001e872) main_ai5_sk_pane_g1

0x5250,	// (0x0001457d) popup_query_code_window_g1

0x25a1,	// (0x000118ce) popup_fep_vkb_icf_pane

0x25b5,	// (0x000118e2) popup_fep_vtchi_icf_pane

0xacab,	// (0x00019fd8) bg_icf_pane

0xacb7,	// (0x00019fe4) list_vkb_icf_pane

0x477b,	// (0x00013aa8) bg_icf_pane_cp01

0xacc3,	// (0x00019ff0) vtchi_icf_list_pane

0xacd4,	// (0x0001a001) list_vkb_icf_pane_t1_ParamLimits

0xacd4,	// (0x0001a001) list_vkb_icf_pane_t1

0xacec,	// (0x0001a019) vtchi_icf_list_pane_t1_ParamLimits

0xacec,	// (0x0001a019) vtchi_icf_list_pane_t1

0x258b,	// (0x000118b8) popup_fep_ituss_window_ParamLimits

0x25b5,	// (0x000118e2) popup_fep_vtchi_icf_pane_ParamLimits

0xabea,	// (0x00019f17) ituss_keypad_pane_ParamLimits

0x25cb,	// (0x000118f8) ituss_sks_pane

0xacab,	// (0x00019fd8) bg_icf_pane_ParamLimits

0x2567,	// (0x00011894) icf_edit_indi_pane_ParamLimits

0x2567,	// (0x00011894) icf_edit_indi_pane

0xacb7,	// (0x00019fe4) list_vkb_icf_pane_ParamLimits

0x477b,	// (0x00013aa8) bg_icf_pane_cp01_ParamLimits

0x2576,	// (0x000118a3) icf_edit_indi_pane_cp01_ParamLimits

0x2576,	// (0x000118a3) icf_edit_indi_pane_cp01

0xaccb,	// (0x00019ff8) vtchi_query_pane

0x1951,	// (0x00010c7e) icf_edit_indi_pane_g1_ParamLimits

0x1951,	// (0x00010c7e) icf_edit_indi_pane_g1

0x2706,	// (0x00011a33) icf_edit_indi_pane_g2_ParamLimits

0x2706,	// (0x00011a33) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0001f246) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0001f246) icf_edit_indi_pane_g

0x2715,	// (0x00011a42) icf_edit_indi_pane_t1

0xad0e,	// (0x0001a03b) bg_input_focus_pane_cp042

0x2fde,	// (0x0001230b) vtchi_button_pane

0xad17,	// (0x0001a044) vtchi_query_pane_t1

0xad25,	// (0x0001a052) vtchi_query_pane_t2

0xad33,	// (0x0001a060) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x0001f235) vtchi_query_pane_t

0x035b,	// (0x0000f688) bg_button_pane_cp13

0xad41,	// (0x0001a06e) vtchi_button_pane_g1

0x26f3,	// (0x00011a20) ituss_sks_pane_g1

0x26fe,	// (0x00011a2b) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x0001f23c) ituss_sks_pane_g

0xad49,	// (0x0001a076) ituss_sks_pane_t1

0xad57,	// (0x0001a084) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x0001f241) ituss_sks_pane_t

0x71d0,	// (0x000164fd) indicator_nsta_pane_cp_g1

0x71d9,	// (0x00016506) indicator_nsta_pane_cp_g2

0x71e1,	// (0x0001650e) indicator_nsta_pane_cp_g3

0x71e9,	// (0x00016516) indicator_nsta_pane_cp_g4

0x71f1,	// (0x0001651e) indicator_nsta_pane_cp_g5

0x71f1,	// (0x0001651e) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0001edde) indicator_nsta_pane_cp_g

0xf0bb,	// (0x0001e3e8) cell_graphic2_pane_t2_ParamLimits

0xf0bb,	// (0x0001e3e8) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x0001f0f7) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x0001f0f7) cell_graphic2_pane_t

0xf0ee,	// (0x0001e41b) cell_graphic2_control_pane_t1

0xd2b5,	// (0x0001c5e2) signal_pane_g3_ParamLimits

0xd2b5,	// (0x0001c5e2) signal_pane_g3

0xd2c9,	// (0x0001c5f6) signal_pane_g4_ParamLimits

0xd2c9,	// (0x0001c5f6) signal_pane_g4

0xabc4,	// (0x00019ef1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xabc4,	// (0x00019ef1) cell_ai5_widget_list_row_pane_t3

0xac78,	// (0x00019fa5) cell_ituss_key_pane_t1_ParamLimits

0xac78,	// (0x00019fa5) cell_ituss_key_pane_t1

0x4e49,	// (0x00014176) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e49,	// (0x00014176) form_field_data_wide_pane_vc_t2

0x4e5d,	// (0x0001418a) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e5d,	// (0x0001418a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001eb2c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001eb2c) form_field_data_wide_pane_vc_t

0x6e9c,	// (0x000161c9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6e9c,	// (0x000161c9) form_field_slider_wide_pane_vc_t3

0x6f76,	// (0x000162a3) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6f76,	// (0x000162a3) form_field_popup_wide_pane_vc_t2

0x6f8d,	// (0x000162ba) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6f8d,	// (0x000162ba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x0001edcd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001edcd) form_field_popup_wide_pane_vc_t

0xc73b,	// (0x0001ba68) aid_fshwr2_btn_pane_ParamLimits

0xc74c,	// (0x0001ba79) aid_fshwr2_syb_pane_ParamLimits

0xc75d,	// (0x0001ba8a) aid_fshwr2_txt_pane_ParamLimits

0x1bea,	// (0x00010f17) fshwr2_bg_pane_ParamLimits

0xc769,	// (0x0001ba96) fshwr2_func_candi_pane_ParamLimits

0xc788,	// (0x0001bab5) fshwr2_hwr_syb_pane_ParamLimits

0xc7a3,	// (0x0001bad0) fshwr2_icf_pane_ParamLimits

0x6e10,	// (0x0001613d) list_double_graphic_pane_vc_g4_ParamLimits

0x6e10,	// (0x0001613d) list_double_graphic_pane_vc_g4

0x262a,	// (0x00011957) cell_ituss_key_pane_g3_ParamLimits

0x262a,	// (0x00011957) cell_ituss_key_pane_g3

0x26d2,	// (0x000119ff) cell_ituss_key_t5_ParamLimits

0x26d2,	// (0x000119ff) cell_ituss_key_t5
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineCVR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0005865f };

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
0x9c00,	// (0x0006225f) Screen

0x9c0c,	// (0x0006226b) application_window_ParamLimits

0x9c0c,	// (0x0006226b) application_window

0x8a25,	// (0x00061084) screen_g1

0x9c44,	// (0x000622a3) area_bottom_pane_ParamLimits

0x9c44,	// (0x000622a3) area_bottom_pane

0xedd4,	// (0x00067433) area_top_pane_ParamLimits

0xedd4,	// (0x00067433) area_top_pane

0xee72,	// (0x000674d1) main_pane_ParamLimits

0xee72,	// (0x000674d1) main_pane

0x8a2f,	// (0x0006108e) misc_graphics

0xc075,	// (0x000646d4) battery_pane_ParamLimits

0xc075,	// (0x000646d4) battery_pane

0x35bf,	// (0x0005bc1e) bg_status_flat_pane_g8

0x35c7,	// (0x0005bc26) bg_status_flat_pane_g9

0x29a7,	// (0x0005b006) context_pane_ParamLimits

0x29a7,	// (0x0005b006) context_pane

0xc1ec,	// (0x0006484b) navi_pane_ParamLimits

0xc1ec,	// (0x0006484b) navi_pane

0xc276,	// (0x000648d5) signal_pane_ParamLimits

0xc276,	// (0x000648d5) signal_pane

0x0008,

0xf854,	// (0x00067eb3) bg_status_flat_pane_g

0xc306,	// (0x00064965) status_pane_g1_ParamLimits

0xc306,	// (0x00064965) status_pane_g1

0xc31c,	// (0x0006497b) status_pane_g2_ParamLimits

0xc31c,	// (0x0006497b) status_pane_g2

0x2be0,	// (0x0005b23f) status_pane_g3_ParamLimits

0x2be0,	// (0x0005b23f) status_pane_g3

0x0004,

0xf780,	// (0x00067ddf) status_pane_g_ParamLimits

0xf780,	// (0x00067ddf) status_pane_g

0xc328,	// (0x00064987) title_pane_ParamLimits

0xc328,	// (0x00064987) title_pane

0xc38f,	// (0x000649ee) uni_indicator_pane_ParamLimits

0xc38f,	// (0x000649ee) uni_indicator_pane

0x2811,	// (0x0005ae70) bg_list_pane_ParamLimits

0x2811,	// (0x0005ae70) bg_list_pane

0xae68,	// (0x000634c7) find_pane

0x2df3,	// (0x0005b452) listscroll_app_pane_ParamLimits

0x2df3,	// (0x0005b452) listscroll_app_pane

0x283d,	// (0x0005ae9c) listscroll_form_pane

0x9bec,	// (0x0006224b) listscroll_gen_pane_ParamLimits

0x9bec,	// (0x0006224b) listscroll_gen_pane

0x0157,	// (0x000587b6) listscroll_set_pane

0x431f,	// (0x0005c97e) main_idle_act_pane

0x250a,	// (0x0005ab69) main_idle_trad_pane

0x250a,	// (0x0005ab69) main_list_empty_pane

0x2831,	// (0x0005ae90) main_midp_pane

0x2857,	// (0x0005aeb6) main_pane_g1_ParamLimits

0x2857,	// (0x0005aeb6) main_pane_g1

0xae70,	// (0x000634cf) popup_ai_message_window_ParamLimits

0xae70,	// (0x000634cf) popup_ai_message_window

0xaf10,	// (0x0006356f) popup_fep_china_uni_window_ParamLimits

0xaf10,	// (0x0006356f) popup_fep_china_uni_window

0x0281,	// (0x000588e0) popup_fep_japan_candidate_window_ParamLimits

0x0281,	// (0x000588e0) popup_fep_japan_candidate_window

0x02ab,	// (0x0005890a) popup_fep_japan_predictive_window_ParamLimits

0x02ab,	// (0x0005890a) popup_fep_japan_predictive_window

0xaf70,	// (0x000635cf) popup_find_window

0xaf8d,	// (0x000635ec) popup_grid_graphic_window_ParamLimits

0xaf8d,	// (0x000635ec) popup_grid_graphic_window

0x031e,	// (0x0005897d) popup_large_graphic_colour_window

0xb037,	// (0x00063696) popup_menu_window_ParamLimits

0xb037,	// (0x00063696) popup_menu_window

0xb227,	// (0x00063886) popup_note_image_window

0xb1e7,	// (0x00063846) popup_note_wait_window_ParamLimits

0xb1e7,	// (0x00063846) popup_note_wait_window

0xb23f,	// (0x0006389e) popup_note_window_ParamLimits

0xb23f,	// (0x0006389e) popup_note_window

0xb2ed,	// (0x0006394c) popup_query_code_window_ParamLimits

0xb2ed,	// (0x0006394c) popup_query_code_window

0x058a,	// (0x00058be9) popup_query_data_code_window_ParamLimits

0x058a,	// (0x00058be9) popup_query_data_code_window

0xb32d,	// (0x0006398c) popup_query_data_window_ParamLimits

0xb32d,	// (0x0006398c) popup_query_data_window

0xb3c1,	// (0x00063a20) popup_query_sat_info_window_ParamLimits

0xb3c1,	// (0x00063a20) popup_query_sat_info_window

0xb46a,	// (0x00063ac9) popup_snote_single_graphic_window_ParamLimits

0xb46a,	// (0x00063ac9) popup_snote_single_graphic_window

0xb46a,	// (0x00063ac9) popup_snote_single_text_window_ParamLimits

0xb46a,	// (0x00063ac9) popup_snote_single_text_window

0x0625,	// (0x00058c84) popup_sub_window_general

0x076b,	// (0x00058dca) popup_window_general_ParamLimits

0x076b,	// (0x00058dca) popup_window_general

0x2865,	// (0x0005aec4) power_save_pane

0xacc8,	// (0x00063327) control_pane_g1_ParamLimits

0xacc8,	// (0x00063327) control_pane_g1

0xacf1,	// (0x00063350) control_pane_g2_ParamLimits

0xacf1,	// (0x00063350) control_pane_g2

0x27d4,	// (0x0005ae33) control_pane_g3_ParamLimits

0x27d4,	// (0x0005ae33) control_pane_g3

0x0007,

0xf768,	// (0x00067dc7) control_pane_g_ParamLimits

0xf768,	// (0x00067dc7) control_pane_g

0xad57,	// (0x000633b6) control_pane_t1_ParamLimits

0xad57,	// (0x000633b6) control_pane_t1

0xadbd,	// (0x0006341c) control_pane_t2_ParamLimits

0xadbd,	// (0x0006341c) control_pane_t2

0x0002,

0xf779,	// (0x00067dd8) control_pane_t_ParamLimits

0xf779,	// (0x00067dd8) control_pane_t

0xac21,	// (0x00063280) navi_navi_volume_pane_cp1

0xac29,	// (0x00063288) status_small_icon_pane

0x2709,	// (0x0005ad68) status_small_pane_g1_ParamLimits

0x2709,	// (0x0005ad68) status_small_pane_g1

0xac31,	// (0x00063290) status_small_pane_g2_ParamLimits

0xac31,	// (0x00063290) status_small_pane_g2

0xac3d,	// (0x0006329c) status_small_pane_g3_ParamLimits

0xac3d,	// (0x0006329c) status_small_pane_g3

0xac49,	// (0x000632a8) status_small_pane_g4_ParamLimits

0xac49,	// (0x000632a8) status_small_pane_g4

0xac55,	// (0x000632b4) status_small_pane_g5_ParamLimits

0xac55,	// (0x000632b4) status_small_pane_g5

0xac63,	// (0x000632c2) status_small_pane_g6_ParamLimits

0xac63,	// (0x000632c2) status_small_pane_g6

0x0007,

0xf757,	// (0x00067db6) status_small_pane_g_ParamLimits

0xf757,	// (0x00067db6) status_small_pane_g

0xac92,	// (0x000632f1) status_small_pane_t1

0xacb4,	// (0x00063313) status_small_wait_pane_ParamLimits

0xacb4,	// (0x00063313) status_small_wait_pane

0xa9e0,	// (0x0006303f) aid_levels_signal_ParamLimits

0xa9e0,	// (0x0006303f) aid_levels_signal

0xa9f8,	// (0x00063057) signal_pane_g1_ParamLimits

0xa9f8,	// (0x00063057) signal_pane_g1

0xaa13,	// (0x00063072) signal_pane_g2_ParamLimits

0xaa13,	// (0x00063072) signal_pane_g2

0x0003,

0xf6e8,	// (0x00067d47) signal_pane_g_ParamLimits

0xf6e8,	// (0x00067d47) signal_pane_g

0x1fdd,	// (0x0005a63c) context_pane_g1

0x9e30,	// (0x0006248f) title_pane_g1

0x9e73,	// (0x000624d2) title_pane_t1

0x8a45,	// (0x000610a4) title_pane_t2

0x8a6b,	// (0x000610ca) title_pane_t3

0x0002,

0xf532,	// (0x00067b91) title_pane_t

0xc3b7,	// (0x00064a16) aid_levels_battery_ParamLimits

0xc3b7,	// (0x00064a16) aid_levels_battery

0xc3d3,	// (0x00064a32) battery_pane_g1_ParamLimits

0xc3d3,	// (0x00064a32) battery_pane_g1

0xc3f0,	// (0x00064a4f) battery_pane_g2_ParamLimits

0xc3f0,	// (0x00064a4f) battery_pane_g2

0x0001,

0xf78b,	// (0x00067dea) battery_pane_g_ParamLimits

0xf78b,	// (0x00067dea) battery_pane_g

0xc5f1,	// (0x00064c50) uni_indicator_pane_g1

0xc607,	// (0x00064c66) uni_indicator_pane_g2

0xc61d,	// (0x00064c7c) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x00067f5b) uni_indicator_pane_g

0x2378,	// (0x0005a9d7) navi_icon_pane_ParamLimits

0x2378,	// (0x0005a9d7) navi_icon_pane

0x22c0,	// (0x0005a91f) navi_midp_pane

0x2394,	// (0x0005a9f3) navi_navi_pane

0x239e,	// (0x0005a9fd) navi_text_pane_ParamLimits

0x239e,	// (0x0005a9fd) navi_text_pane

0x8a25,	// (0x00061084) status_small_wait_pane_g1

0x8e1a,	// (0x00061479) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x00067f56) status_small_wait_pane_g

0xc590,	// (0x00064bef) navi_navi_icon_text_pane

0xc598,	// (0x00064bf7) navi_navi_pane_g1_ParamLimits

0xc598,	// (0x00064bf7) navi_navi_pane_g1

0xc5aa,	// (0x00064c09) navi_navi_pane_g2_ParamLimits

0xc5aa,	// (0x00064c09) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x00067f24) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x00067f24) navi_navi_pane_g

0x3e0b,	// (0x0005c46a) navi_navi_tabs_pane

0xc5bc,	// (0x00064c1b) navi_navi_text_pane

0xc590,	// (0x00064bef) navi_navi_volume_pane

0xc57e,	// (0x00064bdd) navi_text_pane_t1

0xc572,	// (0x00064bd1) navi_icon_pane_g1

0x3d02,	// (0x0005c361) navi_navi_text_pane_t1

0xb777,	// (0x00063dd6) navi_navi_volume_pane_g1

0xb77f,	// (0x00063dde) volume_small_pane

0xc4ce,	// (0x00064b2d) navi_navi_icon_text_pane_g1

0xc4d6,	// (0x00064b35) navi_navi_icon_text_pane_t1

0x2394,	// (0x0005a9f3) navi_tabs_2_long_pane

0x2394,	// (0x0005a9f3) navi_tabs_2_pane

0x2394,	// (0x0005a9f3) navi_tabs_3_long_pane

0x2394,	// (0x0005a9f3) navi_tabs_3_pane

0x2394,	// (0x0005a9f3) navi_tabs_4_pane

0xb757,	// (0x00063db6) tabs_2_active_pane_ParamLimits

0xb757,	// (0x00063db6) tabs_2_active_pane

0xb767,	// (0x00063dc6) tabs_2_passive_pane_ParamLimits

0xb767,	// (0x00063dc6) tabs_2_passive_pane

0xb725,	// (0x00063d84) tabs_3_active_pane_ParamLimits

0xb725,	// (0x00063d84) tabs_3_active_pane

0xb735,	// (0x00063d94) tabs_3_passive_pane_ParamLimits

0xb735,	// (0x00063d94) tabs_3_passive_pane

0xb746,	// (0x00063da5) tabs_3_passive_pane_cp_ParamLimits

0xb746,	// (0x00063da5) tabs_3_passive_pane_cp

0xb6e1,	// (0x00063d40) tabs_4_active_pane_ParamLimits

0xb6e1,	// (0x00063d40) tabs_4_active_pane

0xb6f2,	// (0x00063d51) tabs_4_passive_pane_ParamLimits

0xb6f2,	// (0x00063d51) tabs_4_passive_pane

0xb703,	// (0x00063d62) tabs_4_passive_pane_cp_ParamLimits

0xb703,	// (0x00063d62) tabs_4_passive_pane_cp

0xb714,	// (0x00063d73) tabs_4_passive_pane_cp2_ParamLimits

0xb714,	// (0x00063d73) tabs_4_passive_pane_cp2

0xb6bd,	// (0x00063d1c) tabs_2_long_active_pane_ParamLimits

0xb6bd,	// (0x00063d1c) tabs_2_long_active_pane

0xb6cf,	// (0x00063d2e) tabs_2_long_passive_pane_ParamLimits

0xb6cf,	// (0x00063d2e) tabs_2_long_passive_pane

0xb672,	// (0x00063cd1) tabs_3_long_active_pane_ParamLimits

0xb672,	// (0x00063cd1) tabs_3_long_active_pane

0xb68b,	// (0x00063cea) tabs_3_long_passive_pane_ParamLimits

0xb68b,	// (0x00063cea) tabs_3_long_passive_pane

0xb6a4,	// (0x00063d03) tabs_3_long_passive_pane_cp_ParamLimits

0xb6a4,	// (0x00063d03) tabs_3_long_passive_pane_cp

0x08ec,	// (0x00058f4b) volume_small_pane_g1

0xb621,	// (0x00063c80) volume_small_pane_g2

0xb62a,	// (0x00063c89) volume_small_pane_g3

0xb633,	// (0x00063c92) volume_small_pane_g4

0xb63c,	// (0x00063c9b) volume_small_pane_g5

0xb645,	// (0x00063ca4) volume_small_pane_g6

0xb64e,	// (0x00063cad) volume_small_pane_g7

0xb657,	// (0x00063cb6) volume_small_pane_g8

0xb660,	// (0x00063cbf) volume_small_pane_g9

0xb669,	// (0x00063cc8) volume_small_pane_g10

0x0009,

0xf891,	// (0x00067ef0) volume_small_pane_g

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp2_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp2

0x9eff,	// (0x0006255e) tabs_3_active_pane_g1

0x9f07,	// (0x00062566) tabs_3_active_pane_t1

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp2_ParamLimits

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp2

0x9eff,	// (0x0006255e) tabs_3_passive_pane_g1

0x9f07,	// (0x00062566) tabs_3_passive_pane_t1

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp3_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp3

0x9f19,	// (0x00062578) tabs_4_active_pane_g1

0x9f21,	// (0x00062580) tabs_4_active_pane_t1

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp3_ParamLimits

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp3

0x9f19,	// (0x00062578) tabs_4_1_passive_pane_g1

0x9f21,	// (0x00062580) tabs_4_1_passive_pane_t1

0x2831,	// (0x0005ae90) list_highlight_pane_cp2

0xc6b0,	// (0x00064d0f) list_set_pane_ParamLimits

0xc6b0,	// (0x00064d0f) list_set_pane

0xc772,	// (0x00064dd1) main_pane_set_t1_ParamLimits

0xc772,	// (0x00064dd1) main_pane_set_t1

0xc792,	// (0x00064df1) main_pane_set_t2_ParamLimits

0xc792,	// (0x00064df1) main_pane_set_t2

0xc7a6,	// (0x00064e05) main_pane_set_t3_ParamLimits

0xc7a6,	// (0x00064e05) main_pane_set_t3

0xc7ba,	// (0x00064e19) main_pane_set_t4_ParamLimits

0xc7ba,	// (0x00064e19) main_pane_set_t4

0x0003,

0xf961,	// (0x00067fc0) main_pane_set_t_ParamLimits

0xf961,	// (0x00067fc0) main_pane_set_t

0xc7ce,	// (0x00064e2d) setting_code_pane

0x446d,	// (0x0005cacc) setting_slider_graphic_pane

0x446d,	// (0x0005cacc) setting_slider_pane

0x446d,	// (0x0005cacc) setting_text_pane

0x446d,	// (0x0005cacc) setting_volume_pane

0xef81,	// (0x000675e0) volume_set_pane

0x8a7d,	// (0x000610dc) bg_set_opt_pane_cp

0xef8b,	// (0x000675ea) setting_slider_pane_t1

0xefa4,	// (0x00067603) setting_slider_pane_t2

0xefbe,	// (0x0006761d) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00067b98) setting_slider_pane_t

0xefd6,	// (0x00067635) slider_set_pane

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp2

0x8a8b,	// (0x000610ea) setting_slider_graphic_pane_g1

0xefec,	// (0x0006764b) setting_slider_graphic_pane_t1

0xeffc,	// (0x0006765b) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00067b9f) setting_slider_graphic_pane_t

0xf00c,	// (0x0006766b) slider_set_pane_cp

0x8a2f,	// (0x0006108e) input_focus_pane_cp1

0x4306,	// (0x0005c965) list_set_text_pane

0x8a25,	// (0x00061084) setting_text_pane_g1

0x8a2f,	// (0x0006108e) input_focus_pane_cp2

0x8a25,	// (0x00061084) setting_code_pane_g1

0x8a94,	// (0x000610f3) setting_code_pane_t1

0xdad9,	// (0x00066138) set_text_pane_t1_ParamLimits

0xdad9,	// (0x00066138) set_text_pane_t1

0x91b3,	// (0x00061812) set_opt_bg_pane_g1

0x91bb,	// (0x0006181a) set_opt_bg_pane_g2

0x42de,	// (0x0005c93d) set_opt_bg_pane_g3

0x91cb,	// (0x0006182a) set_opt_bg_pane_g4

0x91d3,	// (0x00061832) set_opt_bg_pane_g5

0x91db,	// (0x0006183a) set_opt_bg_pane_g6

0x42e8,	// (0x0005c947) set_opt_bg_pane_g7

0x42f2,	// (0x0005c951) set_opt_bg_pane_g8

0x42fc,	// (0x0005c95b) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x00067fad) set_opt_bg_pane_g

0x42d1,	// (0x0005c930) slider_set_pane_g1

0x0af8,	// (0x00059157) slider_set_pane_g2

0x0006,

0xf93f,	// (0x00067f9e) slider_set_pane_g

0x0a58,	// (0x000590b7) volume_set_pane_g1

0x0a62,	// (0x000590c1) volume_set_pane_g2

0x0a6c,	// (0x000590cb) volume_set_pane_g3

0x0a76,	// (0x000590d5) volume_set_pane_g4

0x0a80,	// (0x000590df) volume_set_pane_g5

0x0a8a,	// (0x000590e9) volume_set_pane_g6

0x0a94,	// (0x000590f3) volume_set_pane_g7

0x0a9e,	// (0x000590fd) volume_set_pane_g8

0x0aa8,	// (0x00059107) volume_set_pane_g9

0x0ab2,	// (0x00059111) volume_set_pane_g10

0x0009,

0xf917,	// (0x00067f76) volume_set_pane_g

0x9f33,	// (0x00062592) indicator_pane_ParamLimits

0x9f33,	// (0x00062592) indicator_pane

0x9f5f,	// (0x000625be) main_idle_pane_g2_ParamLimits

0x9f5f,	// (0x000625be) main_idle_pane_g2

0x9f97,	// (0x000625f6) main_pane_idle_g1_ParamLimits

0x9f97,	// (0x000625f6) main_pane_idle_g1

0x8aa2,	// (0x00061101) popup_clock_digital_analogue_window_ParamLimits

0x8aa2,	// (0x00061101) popup_clock_digital_analogue_window

0x9fc1,	// (0x00062620) soft_indicator_pane_ParamLimits

0x9fc1,	// (0x00062620) soft_indicator_pane

0x9fdd,	// (0x0006263c) wallpaper_pane_ParamLimits

0x9fdd,	// (0x0006263c) wallpaper_pane

0x8a25,	// (0x00061084) wallpaper_pane_g1

0x9fef,	// (0x0006264e) indicator_pane_g1_ParamLimits

0x9fef,	// (0x0006264e) indicator_pane_g1

0x46fa,	// (0x0005cd59) navi_navi_icon_text_pane_srt_g1

0x8ad0,	// (0x0006112f) soft_indicator_pane_t1

0x8aea,	// (0x00061149) aid_ps_area_pane

0xa008,	// (0x00062667) aid_ps_clock_pane

0x8afb,	// (0x0006115a) aid_ps_indicator_pane

0x8b07,	// (0x00061166) indicator_ps_pane_ParamLimits

0x8b07,	// (0x00061166) indicator_ps_pane

0x8b16,	// (0x00061175) power_save_pane_g1_ParamLimits

0x8b16,	// (0x00061175) power_save_pane_g1

0x8b22,	// (0x00061181) power_save_pane_g2_ParamLimits

0x8b22,	// (0x00061181) power_save_pane_g2

0xedb4,	// (0x00067413) aid_navinavi_width_pane

0x8aea,	// (0x00061149) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00067ba4) power_save_pane_g_ParamLimits

0xf545,	// (0x00067ba4) power_save_pane_g

0x8b30,	// (0x0006118f) power_save_pane_t1_ParamLimits

0x8b30,	// (0x0006118f) power_save_pane_t1

0xa008,	// (0x00062667) aid_ps_clock_pane_ParamLimits

0x8afb,	// (0x0006115a) aid_ps_indicator_pane_ParamLimits

0x8b42,	// (0x000611a1) power_save_pane_t4_ParamLimits

0x8b42,	// (0x000611a1) power_save_pane_t4

0x0001,

0xf54a,	// (0x00067ba9) power_save_pane_t_ParamLimits

0xf54a,	// (0x00067ba9) power_save_pane_t

0x8b6c,	// (0x000611cb) power_save_t3_ParamLimits

0x8b6c,	// (0x000611cb) power_save_t3

0x8b57,	// (0x000611b6) power_save_t2_ParamLimits

0x8b57,	// (0x000611b6) power_save_t2

0x8b81,	// (0x000611e0) indicator_ps_pane_g1

0xa016,	// (0x00062675) ai_gene_pane_ParamLimits

0xa016,	// (0x00062675) ai_gene_pane

0xa02d,	// (0x0006268c) ai_links_pane_ParamLimits

0xa02d,	// (0x0006268c) ai_links_pane

0xa045,	// (0x000626a4) indicator_pane_cp1_ParamLimits

0xa045,	// (0x000626a4) indicator_pane_cp1

0xa054,	// (0x000626b3) main_pane_idle_g1_cp_ParamLimits

0xa054,	// (0x000626b3) main_pane_idle_g1_cp

0x8b8a,	// (0x000611e9) popup_ai_links_title_window

0xa06c,	// (0x000626cb) soft_indicator_pane_cp1_ParamLimits

0xa06c,	// (0x000626cb) soft_indicator_pane_cp1

0x40ba,	// (0x0005c719) ai_links_pane_g1

0x40c3,	// (0x0005c722) grid_ai_links_pane

0xc5e8,	// (0x00064c47) ai_gene_pane_1

0x40a8,	// (0x0005c707) ai_gene_pane_2

0x40b1,	// (0x0005c710) list_highlight_pane_cp4

0xc5c4,	// (0x00064c23) cell_ai_link_pane_ParamLimits

0xc5c4,	// (0x00064c23) cell_ai_link_pane

0x4077,	// (0x0005c6d6) cell_ai_link_pane_g1

0x8e1a,	// (0x00061479) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x00067f51) cell_ai_link_pane_g

0x8a2f,	// (0x0006108e) grid_highlight_cp2

0x8a2f,	// (0x0006108e) bg_popup_sub_pane_cp1

0x8ba1,	// (0x00061200) popup_ai_links_title_window_t1

0x3fc3,	// (0x0005c622) ai_gene_pane_1_g1_ParamLimits

0x3fc3,	// (0x0005c622) ai_gene_pane_1_g1

0x3fcf,	// (0x0005c62e) ai_gene_pane_1_g2_ParamLimits

0x3fcf,	// (0x0005c62e) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x00067f47) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x00067f47) ai_gene_pane_1_g

0x3fdc,	// (0x0005c63b) ai_gene_pane_1_t1_ParamLimits

0x3fdc,	// (0x0005c63b) ai_gene_pane_1_t1

0x4010,	// (0x0005c66f) grid_ai_soft_ind_pane

0x3fae,	// (0x0005c60d) ai_gene_pane_2_t1_ParamLimits

0x3fae,	// (0x0005c60d) ai_gene_pane_2_t1

0xa080,	// (0x000626df) main_pane_empty_t1_ParamLimits

0xa080,	// (0x000626df) main_pane_empty_t1

0xa098,	// (0x000626f7) main_pane_empty_t2_ParamLimits

0xa098,	// (0x000626f7) main_pane_empty_t2

0xa0ad,	// (0x0006270c) main_pane_empty_t3_ParamLimits

0xa0ad,	// (0x0006270c) main_pane_empty_t3

0xa0bf,	// (0x0006271e) main_pane_empty_t4_ParamLimits

0xa0bf,	// (0x0006271e) main_pane_empty_t4

0xa0d1,	// (0x00062730) main_pane_empty_t5_ParamLimits

0xa0d1,	// (0x00062730) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00067bae) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00067bae) main_pane_empty_t

0xdc81,	// (0x000662e0) bg_popup_window_pane_ParamLimits

0xdc81,	// (0x000662e0) bg_popup_window_pane

0x3d10,	// (0x0005c36f) find_popup_pane_cp2_ParamLimits

0x3d10,	// (0x0005c36f) find_popup_pane_cp2

0x3d1c,	// (0x0005c37b) heading_pane_ParamLimits

0x3d1c,	// (0x0005c37b) heading_pane

0x8a2f,	// (0x0006108e) bg_popup_sub_pane

0xc4f3,	// (0x00064b52) bg_popup_window_pane_g1_ParamLimits

0xc4f3,	// (0x00064b52) bg_popup_window_pane_g1

0xc502,	// (0x00064b61) bg_popup_window_pane_g2_ParamLimits

0xc502,	// (0x00064b61) bg_popup_window_pane_g2

0xc50e,	// (0x00064b6d) bg_popup_window_pane_g3_ParamLimits

0xc50e,	// (0x00064b6d) bg_popup_window_pane_g3

0xc51a,	// (0x00064b79) bg_popup_window_pane_g4_ParamLimits

0xc51a,	// (0x00064b79) bg_popup_window_pane_g4

0xc529,	// (0x00064b88) bg_popup_window_pane_g5_ParamLimits

0xc529,	// (0x00064b88) bg_popup_window_pane_g5

0xc539,	// (0x00064b98) bg_popup_window_pane_g6_ParamLimits

0xc539,	// (0x00064b98) bg_popup_window_pane_g6

0xc545,	// (0x00064ba4) bg_popup_window_pane_g7_ParamLimits

0xc545,	// (0x00064ba4) bg_popup_window_pane_g7

0xc554,	// (0x00064bb3) bg_popup_window_pane_g8_ParamLimits

0xc554,	// (0x00064bb3) bg_popup_window_pane_g8

0xc563,	// (0x00064bc2) bg_popup_window_pane_g9_ParamLimits

0xc563,	// (0x00064bc2) bg_popup_window_pane_g9

0x3cf6,	// (0x0005c355) bg_popup_window_pane_g10_ParamLimits

0x3cf6,	// (0x0005c355) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x00067f0f) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x00067f0f) bg_popup_window_pane_g

0x3c1f,	// (0x0005c27e) bg_popup_heading_pane_ParamLimits

0x3c1f,	// (0x0005c27e) bg_popup_heading_pane

0x0be0,	// (0x0005923f) tabs_4_passive_pane_cp_srt_ParamLimits

0x0be0,	// (0x0005923f) tabs_4_passive_pane_cp_srt

0x0bf2,	// (0x00059251) tabs_4_passive_pane_srt_ParamLimits

0x3c33,	// (0x0005c292) heading_pane_g2

0x0bf2,	// (0x00059251) tabs_4_passive_pane_srt

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp3_srt

0x3c3b,	// (0x0005c29a) heading_pane_t1_ParamLimits

0x3c3b,	// (0x0005c29a) heading_pane_t1

0x3c52,	// (0x0005c2b1) heading_pane_t2_ParamLimits

0x3c52,	// (0x0005c2b1) heading_pane_t2

0x0001,

0xf8ab,	// (0x00067f0a) heading_pane_t_ParamLimits

0xf8ab,	// (0x00067f0a) heading_pane_t

0x3587,	// (0x0005bbe6) bg_popup_heading_pane_g1

0x3636,	// (0x0005bc95) bg_popup_heading_pane_g2

0x3640,	// (0x0005bc9f) bg_popup_heading_pane_g3

0x364a,	// (0x0005bca9) bg_popup_heading_pane_g4

0x3654,	// (0x0005bcb3) bg_popup_heading_pane_g5

0x365e,	// (0x0005bcbd) bg_popup_heading_pane_g6

0x3666,	// (0x0005bcc5) bg_popup_heading_pane_g7

0x366e,	// (0x0005bccd) bg_popup_heading_pane_g8

0x3678,	// (0x0005bcd7) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x00067ec6) bg_popup_heading_pane_g

0x2d7f,	// (0x0005b3de) bg_popup_sub_pane_g1

0x2d8f,	// (0x0005b3ee) bg_popup_sub_pane_g2

0x2d87,	// (0x0005b3e6) bg_popup_sub_pane_g3

0x2d9f,	// (0x0005b3fe) bg_popup_sub_pane_g4

0x2d97,	// (0x0005b3f6) bg_popup_sub_pane_g5

0x2da7,	// (0x0005b406) bg_popup_sub_pane_g6

0x2daf,	// (0x0005b40e) bg_popup_sub_pane_g7

0x2dbf,	// (0x0005b41e) bg_popup_sub_pane_g8

0x2db7,	// (0x0005b416) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x00067ea0) bg_popup_sub_pane_g

0x8bb0,	// (0x0006120f) bg_popup_window_pane_cp5_ParamLimits

0x8bb0,	// (0x0006120f) bg_popup_window_pane_cp5

0x8bcc,	// (0x0006122b) popup_note_window_g1_ParamLimits

0x8bcc,	// (0x0006122b) popup_note_window_g1

0x8bd8,	// (0x00061237) popup_note_window_t1_ParamLimits

0x8bd8,	// (0x00061237) popup_note_window_t1

0x8bee,	// (0x0006124d) popup_note_window_t2_ParamLimits

0x8bee,	// (0x0006124d) popup_note_window_t2

0x8c04,	// (0x00061263) popup_note_window_t3_ParamLimits

0x8c04,	// (0x00061263) popup_note_window_t3

0x8c1a,	// (0x00061279) popup_note_window_t4_ParamLimits

0x8c1a,	// (0x00061279) popup_note_window_t4

0x8c42,	// (0x000612a1) popup_note_window_t5_ParamLimits

0x8c42,	// (0x000612a1) popup_note_window_t5

0x0004,

0xf55a,	// (0x00067bb9) popup_note_window_t_ParamLimits

0xf55a,	// (0x00067bb9) popup_note_window_t

0x8c8c,	// (0x000612eb) bg_popup_window_pane_cp6_ParamLimits

0x8c8c,	// (0x000612eb) bg_popup_window_pane_cp6

0x3503,	// (0x0005bb62) popup_note_image_window_g1_ParamLimits

0x3503,	// (0x0005bb62) popup_note_image_window_g1

0x350f,	// (0x0005bb6e) popup_note_image_window_g2_ParamLimits

0x350f,	// (0x0005bb6e) popup_note_image_window_g2

0x0001,

0xf835,	// (0x00067e94) popup_note_image_window_g_ParamLimits

0xf835,	// (0x00067e94) popup_note_image_window_g

0x3528,	// (0x0005bb87) popup_note_image_window_t1_ParamLimits

0x3528,	// (0x0005bb87) popup_note_image_window_t1

0x3541,	// (0x0005bba0) popup_note_image_window_t2_ParamLimits

0x3541,	// (0x0005bba0) popup_note_image_window_t2

0x355a,	// (0x0005bbb9) popup_note_image_window_t3_ParamLimits

0x355a,	// (0x0005bbb9) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x00067e99) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x00067e99) popup_note_image_window_t

0x33c3,	// (0x0005ba22) bg_popup_window_pane_cp7_ParamLimits

0x33c3,	// (0x0005ba22) bg_popup_window_pane_cp7

0x33f3,	// (0x0005ba52) popup_note_wait_window_g1_ParamLimits

0x33f3,	// (0x0005ba52) popup_note_wait_window_g1

0x33ff,	// (0x0005ba5e) popup_note_wait_window_g2_ParamLimits

0x33ff,	// (0x0005ba5e) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x00067e82) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x00067e82) popup_note_wait_window_g

0x3417,	// (0x0005ba76) popup_note_wait_window_t1_ParamLimits

0x3417,	// (0x0005ba76) popup_note_wait_window_t1

0x343e,	// (0x0005ba9d) popup_note_wait_window_t2_ParamLimits

0x343e,	// (0x0005ba9d) popup_note_wait_window_t2

0x345c,	// (0x0005babb) popup_note_wait_window_t3_ParamLimits

0x345c,	// (0x0005babb) popup_note_wait_window_t3

0x346f,	// (0x0005bace) popup_note_wait_window_t4_ParamLimits

0x346f,	// (0x0005bace) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x00067e89) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x00067e89) popup_note_wait_window_t

0x3494,	// (0x0005baf3) wait_bar_pane_ParamLimits

0x3494,	// (0x0005baf3) wait_bar_pane

0x8a2f,	// (0x0006108e) wait_anim_pane

0x8a2f,	// (0x0006108e) wait_border_pane

0x8a25,	// (0x00061084) wait_anim_pane_g1

0x8a25,	// (0x00061084) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x00067d42) wait_anim_pane_g

0x3367,	// (0x0005b9c6) wait_border_pane_g1

0x3372,	// (0x0005b9d1) wait_border_pane_g2

0x337b,	// (0x0005b9da) wait_border_pane_g3

0x0002,

0xf81c,	// (0x00067e7b) wait_border_pane_g

0x31d1,	// (0x0005b830) bg_popup_window_pane_cp16_ParamLimits

0x31d1,	// (0x0005b830) bg_popup_window_pane_cp16

0x32d1,	// (0x0005b930) indicator_popup_pane_cp4_ParamLimits

0x32d1,	// (0x0005b930) indicator_popup_pane_cp4

0x32e5,	// (0x0005b944) popup_query_data_window_t1_ParamLimits

0x32e5,	// (0x0005b944) popup_query_data_window_t1

0x32f7,	// (0x0005b956) popup_query_data_window_t2_ParamLimits

0x32f7,	// (0x0005b956) popup_query_data_window_t2

0x3310,	// (0x0005b96f) popup_query_data_window_t3_ParamLimits

0x3310,	// (0x0005b96f) popup_query_data_window_t3

0x0002,

0xf815,	// (0x00067e74) popup_query_data_window_t_ParamLimits

0xf815,	// (0x00067e74) popup_query_data_window_t

0x332a,	// (0x0005b989) query_popup_data_pane_ParamLimits

0x332a,	// (0x0005b989) query_popup_data_pane

0x333e,	// (0x0005b99d) query_popup_data_pane_cp1_ParamLimits

0x333e,	// (0x0005b99d) query_popup_data_pane_cp1

0x31d1,	// (0x0005b830) bg_popup_window_pane_cp10_ParamLimits

0x31d1,	// (0x0005b830) bg_popup_window_pane_cp10

0x3203,	// (0x0005b862) indicator_popup_pane_ParamLimits

0x3203,	// (0x0005b862) indicator_popup_pane

0x3225,	// (0x0005b884) popup_query_code_window_t1_ParamLimits

0x3225,	// (0x0005b884) popup_query_code_window_t1

0x323f,	// (0x0005b89e) popup_query_code_window_t2_ParamLimits

0x323f,	// (0x0005b89e) popup_query_code_window_t2

0x3288,	// (0x0005b8e7) popup_query_code_window_t3_ParamLimits

0x3288,	// (0x0005b8e7) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x00067e6d) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x00067e6d) popup_query_code_window_t

0x32b7,	// (0x0005b916) query_popup_pane_ParamLimits

0x32b7,	// (0x0005b916) query_popup_pane

0x8c8c,	// (0x000612eb) bg_popup_window_pane_cp15_ParamLimits

0x8c8c,	// (0x000612eb) bg_popup_window_pane_cp15

0x8cac,	// (0x0006130b) indicator_popup_pane_cp1_ParamLimits

0x8cac,	// (0x0006130b) indicator_popup_pane_cp1

0x8cbf,	// (0x0006131e) indicator_popup_pane_cp2_ParamLimits

0x8cbf,	// (0x0006131e) indicator_popup_pane_cp2

0x8cda,	// (0x00061339) popup_query_data_code_window_g1_ParamLimits

0x8cda,	// (0x00061339) popup_query_data_code_window_g1

0x8ced,	// (0x0006134c) popup_query_data_code_window_t1_ParamLimits

0x8ced,	// (0x0006134c) popup_query_data_code_window_t1

0x8d8d,	// (0x000613ec) popup_query_data_code_window_t2_ParamLimits

0x8d8d,	// (0x000613ec) popup_query_data_code_window_t2

0x8d9f,	// (0x000613fe) popup_query_data_code_window_t3_ParamLimits

0x8d9f,	// (0x000613fe) popup_query_data_code_window_t3

0x8db5,	// (0x00061414) popup_query_data_code_window_t4_ParamLimits

0x8db5,	// (0x00061414) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00067bc4) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00067bc4) popup_query_data_code_window_t

0x07d9,	// (0x00058e38) list_single_midp_graphic_pane_g3

0x8dcf,	// (0x0006142e) query_popup_data_pane_cp2_ParamLimits

0x8de2,	// (0x00061441) query_popup_pane_cp2_ParamLimits

0x8de2,	// (0x00061441) query_popup_pane_cp2

0x8a2f,	// (0x0006108e) bg_popup_window_pane_cp11

0x31b5,	// (0x0005b814) heading_pane_cp5

0x31bd,	// (0x0005b81c) listscroll_popup_info_pane

0x8a2f,	// (0x0006108e) input_focus_pane_cp3

0x8dfd,	// (0x0006145c) query_popup_pane_t1

0x8e0b,	// (0x0006146a) list_popup_info_pane_ParamLimits

0x8e0b,	// (0x0006146a) list_popup_info_pane

0x8e1a,	// (0x00061479) listscroll_popup_info_pane_g1

0x8e22,	// (0x00061481) scroll_pane_cp7

0x8e2c,	// (0x0006148b) popup_info_list_pane_t1_ParamLimits

0x8e2c,	// (0x0006148b) popup_info_list_pane_t1

0x8e46,	// (0x000614a5) popup_info_list_pane_t2_ParamLimits

0x8e46,	// (0x000614a5) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00067bcd) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00067bcd) popup_info_list_pane_t

0x8a2f,	// (0x0006108e) bg_popup_window_pane_cp12

0x4714,	// (0x0005cd73) find_popup_pane

0x8a7d,	// (0x000610dc) bg_popup_window_pane_cp3

0x8e60,	// (0x000614bf) heading_pane_cp3

0x8e6f,	// (0x000614ce) listscroll_popup_graphic_pane

0x8a2f,	// (0x0006108e) bg_popup_window_pane_cp4

0xa133,	// (0x00062792) heading_pane_cp4

0x8e7f,	// (0x000614de) listscroll_popup_colour_pane

0xa13d,	// (0x0006279c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa13d,	// (0x0006279c) cell_large_graphic_colour_none_popup_pane

0xa151,	// (0x000627b0) grid_large_graphic_colour_popup_pane_ParamLimits

0xa151,	// (0x000627b0) grid_large_graphic_colour_popup_pane

0xa175,	// (0x000627d4) listscroll_popup_colour_pane_g1_ParamLimits

0xa175,	// (0x000627d4) listscroll_popup_colour_pane_g1

0xa18c,	// (0x000627eb) listscroll_popup_colour_pane_g2_ParamLimits

0xa18c,	// (0x000627eb) listscroll_popup_colour_pane_g2

0xa1a3,	// (0x00062802) listscroll_popup_colour_pane_g3_ParamLimits

0xa1a3,	// (0x00062802) listscroll_popup_colour_pane_g3

0xa1b3,	// (0x00062812) listscroll_popup_colour_pane_g4_ParamLimits

0xa1b3,	// (0x00062812) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00067bd2) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00067bd2) listscroll_popup_colour_pane_g

0x8e87,	// (0x000614e6) scroll_pane_cp6_ParamLimits

0x8e87,	// (0x000614e6) scroll_pane_cp6

0xa1c3,	// (0x00062822) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1c3,	// (0x00062822) cell_large_graphic_colour_popup_pane

0x8e99,	// (0x000614f8) cell_large_graphic_colour_none_popup_pane_t1

0x8a2f,	// (0x0006108e) grid_highlight_pane_cp5

0x8ea8,	// (0x00061507) cell_large_graphic_colour_popup_pane_g1

0x8eb0,	// (0x0006150f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00067bdb) cell_large_graphic_colour_popup_pane_g

0x8eb8,	// (0x00061517) cell_large_graphic_colour_popup_pane_g2_copy1

0x8ec1,	// (0x00061520) grid_highlight_pane_cp4

0x8ec9,	// (0x00061528) bg_popup_window_pane_cp8_ParamLimits

0x8ec9,	// (0x00061528) bg_popup_window_pane_cp8

0x8ee4,	// (0x00061543) popup_snote_single_text_window_g1_ParamLimits

0x8ee4,	// (0x00061543) popup_snote_single_text_window_g1

0x8ef6,	// (0x00061555) popup_snote_single_text_window_t1_ParamLimits

0x8ef6,	// (0x00061555) popup_snote_single_text_window_t1

0x8f09,	// (0x00061568) popup_snote_single_text_window_t2_ParamLimits

0x8f09,	// (0x00061568) popup_snote_single_text_window_t2

0x8f1c,	// (0x0006157b) popup_snote_single_text_window_t3_ParamLimits

0x8f1c,	// (0x0006157b) popup_snote_single_text_window_t3

0x8f55,	// (0x000615b4) popup_snote_single_text_window_t4_ParamLimits

0x8f55,	// (0x000615b4) popup_snote_single_text_window_t4

0x8f89,	// (0x000615e8) popup_snote_single_text_window_t5_ParamLimits

0x8f89,	// (0x000615e8) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00067be0) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00067be0) popup_snote_single_text_window_t

0x8fb8,	// (0x00061617) bg_popup_window_pane_cp9_ParamLimits

0x8fb8,	// (0x00061617) bg_popup_window_pane_cp9

0x8ee4,	// (0x00061543) popup_snote_single_graphic_window_g1_ParamLimits

0x8ee4,	// (0x00061543) popup_snote_single_graphic_window_g1

0x8fc6,	// (0x00061625) popup_snote_single_graphic_window_g2_ParamLimits

0x8fc6,	// (0x00061625) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00067beb) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00067beb) popup_snote_single_graphic_window_g

0x8fd2,	// (0x00061631) popup_snote_single_graphic_window_t1_ParamLimits

0x8fd2,	// (0x00061631) popup_snote_single_graphic_window_t1

0x8fe5,	// (0x00061644) popup_snote_single_graphic_window_t2_ParamLimits

0x8fe5,	// (0x00061644) popup_snote_single_graphic_window_t2

0x8ff8,	// (0x00061657) popup_snote_single_graphic_window_t3_ParamLimits

0x8ff8,	// (0x00061657) popup_snote_single_graphic_window_t3

0x9031,	// (0x00061690) popup_snote_single_graphic_window_t4_ParamLimits

0x9031,	// (0x00061690) popup_snote_single_graphic_window_t4

0x9065,	// (0x000616c4) popup_snote_single_graphic_window_t5_ParamLimits

0x9065,	// (0x000616c4) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00067bf0) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00067bf0) popup_snote_single_graphic_window_t

0x4652,	// (0x0005ccb1) grid_graphic_popup_pane_ParamLimits

0x4652,	// (0x0005ccb1) grid_graphic_popup_pane

0x4680,	// (0x0005ccdf) listscroll_popup_graphic_pane_g1_ParamLimits

0x4680,	// (0x0005ccdf) listscroll_popup_graphic_pane_g1

0xc903,	// (0x00064f62) listscroll_popup_graphic_pane_g2_ParamLimits

0xc903,	// (0x00064f62) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x00067fea) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x00067fea) listscroll_popup_graphic_pane_g

0x46a8,	// (0x0005cd07) scroll_pane_cp5

0xc8bb,	// (0x00064f1a) cell_graphic_popup_pane_ParamLimits

0xc8bb,	// (0x00064f1a) cell_graphic_popup_pane

0x45cb,	// (0x0005cc2a) cell_graphic_popup_pane_g1

0x45d3,	// (0x0005cc32) cell_graphic_popup_pane_g2

0x8eb8,	// (0x00061517) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x00067fe3) cell_graphic_popup_pane_g

0x45dc,	// (0x0005cc3b) cell_graphic_popup_pane_t2

0x8ec1,	// (0x00061520) grid_highlight_pane_cp3

0x90a6,	// (0x00061705) list_gen_pane_ParamLimits

0x90a6,	// (0x00061705) list_gen_pane

0x90ce,	// (0x0006172d) scroll_pane

0xc872,	// (0x00064ed1) bg_list_pane_g1_ParamLimits

0xc872,	// (0x00064ed1) bg_list_pane_g1

0x4540,	// (0x0005cb9f) bg_list_pane_g2_ParamLimits

0x4540,	// (0x0005cb9f) bg_list_pane_g2

0x4555,	// (0x0005cbb4) bg_list_pane_g3_ParamLimits

0x4555,	// (0x0005cbb4) bg_list_pane_g3

0x4569,	// (0x0005cbc8) bg_list_pane_g4_ParamLimits

0x4569,	// (0x0005cbc8) bg_list_pane_g4

0xc88f,	// (0x00064eee) bg_list_pane_g5_ParamLimits

0xc88f,	// (0x00064eee) bg_list_pane_g5

0x0004,

0xf979,	// (0x00067fd8) bg_list_pane_g_ParamLimits

0xf979,	// (0x00067fd8) bg_list_pane_g

0xc80c,	// (0x00064e6b) list_double2_graphic_large_graphic_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double2_graphic_large_graphic_pane

0xc80c,	// (0x00064e6b) list_double2_graphic_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double2_graphic_pane

0xc80c,	// (0x00064e6b) list_double2_large_graphic_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double2_large_graphic_pane

0xc80c,	// (0x00064e6b) list_double2_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double2_pane

0xc80c,	// (0x00064e6b) list_double_graphic_heading_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_graphic_heading_pane

0xc80c,	// (0x00064e6b) list_double_graphic_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_graphic_pane

0xc80c,	// (0x00064e6b) list_double_heading_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_heading_pane

0xc80c,	// (0x00064e6b) list_double_large_graphic_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_large_graphic_pane

0xc80c,	// (0x00064e6b) list_double_number_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_number_pane

0xc80c,	// (0x00064e6b) list_double_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_pane

0xc80c,	// (0x00064e6b) list_double_time_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_double_time_pane

0xc80c,	// (0x00064e6b) list_setting_number_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_setting_number_pane

0xc80c,	// (0x00064e6b) list_setting_pane_ParamLimits

0xc80c,	// (0x00064e6b) list_setting_pane

0xc820,	// (0x00064e7f) list_single_2graphic_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_2graphic_pane

0xc820,	// (0x00064e7f) list_single_graphic_heading_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_graphic_heading_pane

0xc820,	// (0x00064e7f) list_single_graphic_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_graphic_pane

0xc820,	// (0x00064e7f) list_single_heading_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_heading_pane

0xc820,	// (0x00064e7f) list_single_large_graphic_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_large_graphic_pane

0xc820,	// (0x00064e7f) list_single_number_heading_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_number_heading_pane

0xc820,	// (0x00064e7f) list_single_number_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_number_pane

0xc820,	// (0x00064e7f) list_single_pane_ParamLimits

0xc820,	// (0x00064e7f) list_single_pane

0x8a2f,	// (0x0006108e) list_highlight_pane_cp1

0x2d0b,	// (0x0005b36a) list_single_pane_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_pane_g1

0x2d17,	// (0x0005b376) list_single_pane_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_pane_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_single_pane_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_single_pane_g

0xe15e,	// (0x000667bd) list_single_pane_t1_ParamLimits

0xe15e,	// (0x000667bd) list_single_pane_t1

0x2d0b,	// (0x0005b36a) list_single_number_pane_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_number_pane_g1

0x2d17,	// (0x0005b376) list_single_number_pane_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_single_number_pane_g

0xe079,	// (0x000666d8) list_single_number_pane_t1_ParamLimits

0xe079,	// (0x000666d8) list_single_number_pane_t1

0xe14c,	// (0x000667ab) list_single_number_pane_t2_ParamLimits

0xe14c,	// (0x000667ab) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x00067f99) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x00067f99) list_single_number_pane_t

0xa1ee,	// (0x0006284d) list_single_graphic_pane_g1_ParamLimits

0xa1ee,	// (0x0006284d) list_single_graphic_pane_g1

0x2d0b,	// (0x0005b36a) list_single_graphic_pane_g2_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_graphic_pane_g2

0x2d17,	// (0x0005b376) list_single_graphic_pane_g3_ParamLimits

0x2d17,	// (0x0005b376) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00067bfb) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00067bfb) list_single_graphic_pane_g

0xa1fa,	// (0x00062859) list_single_graphic_pane_t1_ParamLimits

0xa1fa,	// (0x00062859) list_single_graphic_pane_t1

0xa210,	// (0x0006286f) list_single_heading_pane_g1_ParamLimits

0xa210,	// (0x0006286f) list_single_heading_pane_g1

0x2d17,	// (0x0005b376) list_single_heading_pane_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00067c02) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00067c02) list_single_heading_pane_g

0xa223,	// (0x00062882) list_single_heading_pane_t1_ParamLimits

0xa223,	// (0x00062882) list_single_heading_pane_t1

0xa239,	// (0x00062898) list_single_heading_pane_t2_ParamLimits

0xa239,	// (0x00062898) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00067c07) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00067c07) list_single_heading_pane_t

0x2d0b,	// (0x0005b36a) list_single_number_heading_pane_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_number_heading_pane_g1

0x2d17,	// (0x0005b376) list_single_number_heading_pane_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_single_number_heading_pane_g

0xa24b,	// (0x000628aa) list_single_number_heading_pane_t1_ParamLimits

0xa24b,	// (0x000628aa) list_single_number_heading_pane_t1

0xdaf2,	// (0x00066151) list_single_number_heading_pane_t2_ParamLimits

0xdaf2,	// (0x00066151) list_single_number_heading_pane_t2

0xdb04,	// (0x00066163) list_single_number_heading_pane_t3_ParamLimits

0xdb04,	// (0x00066163) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x00067c11) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x00067c11) list_single_number_heading_pane_t

0xa261,	// (0x000628c0) list_single_graphic_heading_pane_g1_ParamLimits

0xa261,	// (0x000628c0) list_single_graphic_heading_pane_g1

0xa279,	// (0x000628d8) list_single_graphic_heading_pane_g4_ParamLimits

0xa279,	// (0x000628d8) list_single_graphic_heading_pane_g4

0x2d17,	// (0x0005b376) list_single_graphic_heading_pane_g5_ParamLimits

0x2d17,	// (0x0005b376) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x00067c18) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x00067c18) list_single_graphic_heading_pane_g

0xa24b,	// (0x000628aa) list_single_graphic_heading_pane_t1_ParamLimits

0xa24b,	// (0x000628aa) list_single_graphic_heading_pane_t1

0xa28a,	// (0x000628e9) list_single_graphic_heading_pane_t2_ParamLimits

0xa28a,	// (0x000628e9) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x00067c1f) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x00067c1f) list_single_graphic_heading_pane_t

0x385e,	// (0x0005bebd) list_single_large_graphic_pane_g1_ParamLimits

0x385e,	// (0x0005bebd) list_single_large_graphic_pane_g1

0x2d0b,	// (0x0005b36a) list_single_large_graphic_pane_g2_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_large_graphic_pane_g2

0x2d17,	// (0x0005b376) list_single_large_graphic_pane_g3_ParamLimits

0x2d17,	// (0x0005b376) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x00067c24) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x00067c24) list_single_large_graphic_pane_g

0x3372,	// (0x0005b9d1) wait_border_pane_g2_copy1

0xa2a2,	// (0x00062901) list_single_large_graphic_pane_g4_cp2

0xdb16,	// (0x00066175) list_single_large_graphic_pane_t1_ParamLimits

0xdb16,	// (0x00066175) list_single_large_graphic_pane_t1

0xa2aa,	// (0x00062909) list_double_pane_g1_ParamLimits

0xa2aa,	// (0x00062909) list_double_pane_g1

0xa2b6,	// (0x00062915) list_double_pane_g2_ParamLimits

0xa2b6,	// (0x00062915) list_double_pane_g2

0x0001,

0xf5cc,	// (0x00067c2b) list_double_pane_g_ParamLimits

0xf5cc,	// (0x00067c2b) list_double_pane_g

0xa2c2,	// (0x00062921) list_double_pane_t1_ParamLimits

0xa2c2,	// (0x00062921) list_double_pane_t1

0xa2d8,	// (0x00062937) list_double_pane_t2_ParamLimits

0xa2d8,	// (0x00062937) list_double_pane_t2

0x0001,

0xf5d1,	// (0x00067c30) list_double_pane_t_ParamLimits

0xf5d1,	// (0x00067c30) list_double_pane_t

0xa2ea,	// (0x00062949) list_double2_pane_g1_ParamLimits

0xa2ea,	// (0x00062949) list_double2_pane_g1

0xa2fb,	// (0x0006295a) list_double2_pane_g2_ParamLimits

0xa2fb,	// (0x0006295a) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x00067c35) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x00067c35) list_double2_pane_g

0xa307,	// (0x00062966) list_double2_pane_t1_ParamLimits

0xa307,	// (0x00062966) list_double2_pane_t1

0xa31d,	// (0x0006297c) list_double2_pane_t2_ParamLimits

0xa31d,	// (0x0006297c) list_double2_pane_t2

0x0001,

0xf5db,	// (0x00067c3a) list_double2_pane_t_ParamLimits

0xf5db,	// (0x00067c3a) list_double2_pane_t

0xa2aa,	// (0x00062909) list_double_number_pane_g1_ParamLimits

0xa2aa,	// (0x00062909) list_double_number_pane_g1

0xa2b6,	// (0x00062915) list_double_number_pane_g2_ParamLimits

0xa2b6,	// (0x00062915) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x00067c2b) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x00067c2b) list_double_number_pane_g

0xa32f,	// (0x0006298e) list_double_number_pane_t1_ParamLimits

0xa32f,	// (0x0006298e) list_double_number_pane_t1

0xa341,	// (0x000629a0) list_double_number_pane_t2_ParamLimits

0xa341,	// (0x000629a0) list_double_number_pane_t2

0xa357,	// (0x000629b6) list_double_number_pane_t3_ParamLimits

0xa357,	// (0x000629b6) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x00067c3f) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x00067c3f) list_double_number_pane_t

0xa369,	// (0x000629c8) list_double_graphic_pane_g1_ParamLimits

0xa369,	// (0x000629c8) list_double_graphic_pane_g1

0xa375,	// (0x000629d4) list_double_graphic_pane_g2_ParamLimits

0xa375,	// (0x000629d4) list_double_graphic_pane_g2

0x4a52,	// (0x0005d0b1) list_double_graphic_pane_g3_ParamLimits

0x4a52,	// (0x0005d0b1) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x00067c46) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x00067c46) list_double_graphic_pane_g

0xa390,	// (0x000629ef) list_double_graphic_pane_t1_ParamLimits

0xa390,	// (0x000629ef) list_double_graphic_pane_t1

0xa3a6,	// (0x00062a05) list_double_graphic_pane_t2_ParamLimits

0xa3a6,	// (0x00062a05) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x00067c4f) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x00067c4f) list_double_graphic_pane_t

0xa3b8,	// (0x00062a17) list_double2_graphic_pane_g1_ParamLimits

0xa3b8,	// (0x00062a17) list_double2_graphic_pane_g1

0xa3c4,	// (0x00062a23) list_double2_graphic_pane_g2_ParamLimits

0xa3c4,	// (0x00062a23) list_double2_graphic_pane_g2

0xa3d0,	// (0x00062a2f) list_double2_graphic_pane_g3_ParamLimits

0xa3d0,	// (0x00062a2f) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x00067c54) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x00067c54) list_double2_graphic_pane_g

0xa3dc,	// (0x00062a3b) list_double2_graphic_pane_t1_ParamLimits

0xa3dc,	// (0x00062a3b) list_double2_graphic_pane_t1

0xa3f2,	// (0x00062a51) list_double2_graphic_pane_t2_ParamLimits

0xa3f2,	// (0x00062a51) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x00067c5b) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x00067c5b) list_double2_graphic_pane_t

0xa404,	// (0x00062a63) list_double_large_graphic_pane_g1_ParamLimits

0xa404,	// (0x00062a63) list_double_large_graphic_pane_g1

0xa423,	// (0x00062a82) list_double_large_graphic_pane_g2_ParamLimits

0xa423,	// (0x00062a82) list_double_large_graphic_pane_g2

0xa2b6,	// (0x00062915) list_double_large_graphic_pane_g3_ParamLimits

0xa2b6,	// (0x00062915) list_double_large_graphic_pane_g3

0xa439,	// (0x00062a98) list_double_large_graphic_pane_g4_ParamLimits

0xa439,	// (0x00062a98) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x00067c60) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00067c60) list_double_large_graphic_pane_g

0xa44c,	// (0x00062aab) list_double_large_graphic_pane_t1_ParamLimits

0xa44c,	// (0x00062aab) list_double_large_graphic_pane_t1

0xa465,	// (0x00062ac4) list_double_large_graphic_pane_t2_ParamLimits

0xa465,	// (0x00062ac4) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x00067c6b) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x00067c6b) list_double_large_graphic_pane_t

0xa477,	// (0x00062ad6) list_double2_large_graphic_pane_g1_ParamLimits

0xa477,	// (0x00062ad6) list_double2_large_graphic_pane_g1

0xa483,	// (0x00062ae2) list_double2_large_graphic_pane_g2_ParamLimits

0xa483,	// (0x00062ae2) list_double2_large_graphic_pane_g2

0xa3d0,	// (0x00062a2f) list_double2_large_graphic_pane_g3_ParamLimits

0xa3d0,	// (0x00062a2f) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x00067c70) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x00067c70) list_double2_large_graphic_pane_g

0xa494,	// (0x00062af3) list_double2_large_graphic_pane_t1_ParamLimits

0xa494,	// (0x00062af3) list_double2_large_graphic_pane_t1

0xa4aa,	// (0x00062b09) list_double2_large_graphic_pane_t2_ParamLimits

0xa4aa,	// (0x00062b09) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x00067c77) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x00067c77) list_double2_large_graphic_pane_t

0xa4bc,	// (0x00062b1b) list_double_heading_pane_g1_ParamLimits

0xa4bc,	// (0x00062b1b) list_double_heading_pane_g1

0xdb2c,	// (0x0006618b) list_double_heading_pane_g2_ParamLimits

0xdb2c,	// (0x0006618b) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x00067c7c) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x00067c7c) list_double_heading_pane_g

0xa4cd,	// (0x00062b2c) list_double_heading_pane_t1_ParamLimits

0xa4cd,	// (0x00062b2c) list_double_heading_pane_t1

0xa31d,	// (0x0006297c) list_double_heading_pane_t2_ParamLimits

0xa31d,	// (0x0006297c) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x00067c81) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x00067c81) list_double_heading_pane_t

0xa369,	// (0x000629c8) list_double_graphic_heading_pane_g1_ParamLimits

0xa369,	// (0x000629c8) list_double_graphic_heading_pane_g1

0xa4bc,	// (0x00062b1b) list_double_graphic_heading_pane_g2_ParamLimits

0xa4bc,	// (0x00062b1b) list_double_graphic_heading_pane_g2

0xdb2c,	// (0x0006618b) list_double_graphic_heading_pane_g3_ParamLimits

0xdb2c,	// (0x0006618b) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x00067c86) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x00067c86) list_double_graphic_heading_pane_g

0xa4e3,	// (0x00062b42) list_double_graphic_heading_pane_t1_ParamLimits

0xa4e3,	// (0x00062b42) list_double_graphic_heading_pane_t1

0xa3f2,	// (0x00062a51) list_double_graphic_heading_pane_t2_ParamLimits

0xa3f2,	// (0x00062a51) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x00067c8d) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x00067c8d) list_double_graphic_heading_pane_t

0xa4f9,	// (0x00062b58) list_double_time_pane_g1_ParamLimits

0xa4f9,	// (0x00062b58) list_double_time_pane_g1

0xa50a,	// (0x00062b69) list_double_time_pane_g2_ParamLimits

0xa50a,	// (0x00062b69) list_double_time_pane_g2

0x0001,

0xf633,	// (0x00067c92) list_double_time_pane_g_ParamLimits

0xf633,	// (0x00067c92) list_double_time_pane_g

0xa516,	// (0x00062b75) list_double_time_pane_t1_ParamLimits

0xa516,	// (0x00062b75) list_double_time_pane_t1

0xa52c,	// (0x00062b8b) list_double_time_pane_t2_ParamLimits

0xa52c,	// (0x00062b8b) list_double_time_pane_t2

0xa53e,	// (0x00062b9d) list_double_time_pane_t3_ParamLimits

0xa53e,	// (0x00062b9d) list_double_time_pane_t3

0xa550,	// (0x00062baf) list_double_time_pane_t4_ParamLimits

0xa550,	// (0x00062baf) list_double_time_pane_t4

0x0003,

0xf638,	// (0x00067c97) list_double_time_pane_t_ParamLimits

0xf638,	// (0x00067c97) list_double_time_pane_t

0xa562,	// (0x00062bc1) list_setting_pane_g1_ParamLimits

0xa562,	// (0x00062bc1) list_setting_pane_g1

0xa56e,	// (0x00062bcd) list_setting_pane_g2_ParamLimits

0xa56e,	// (0x00062bcd) list_setting_pane_g2

0x0001,

0xf641,	// (0x00067ca0) list_setting_pane_g_ParamLimits

0xf641,	// (0x00067ca0) list_setting_pane_g

0xa57a,	// (0x00062bd9) list_setting_pane_t1_ParamLimits

0xa57a,	// (0x00062bd9) list_setting_pane_t1

0xa594,	// (0x00062bf3) list_setting_pane_t2_ParamLimits

0xa594,	// (0x00062bf3) list_setting_pane_t2

0x0002,

0xf646,	// (0x00067ca5) list_setting_pane_t_ParamLimits

0xf646,	// (0x00067ca5) list_setting_pane_t

0xa5d3,	// (0x00062c32) set_value_pane_cp_ParamLimits

0xa5d3,	// (0x00062c32) set_value_pane_cp

0xa5e1,	// (0x00062c40) list_setting_number_pane_g1_ParamLimits

0xa5e1,	// (0x00062c40) list_setting_number_pane_g1

0xa5ed,	// (0x00062c4c) list_setting_number_pane_g2_ParamLimits

0xa5ed,	// (0x00062c4c) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x00067cac) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x00067cac) list_setting_number_pane_g

0xa5f9,	// (0x00062c58) list_setting_number_pane_t1_ParamLimits

0xa5f9,	// (0x00062c58) list_setting_number_pane_t1

0xa612,	// (0x00062c71) list_setting_number_pane_t2_ParamLimits

0xa612,	// (0x00062c71) list_setting_number_pane_t2

0xa62c,	// (0x00062c8b) list_setting_number_pane_t3_ParamLimits

0xa62c,	// (0x00062c8b) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x00067cb1) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x00067cb1) list_setting_number_pane_t

0xa5d3,	// (0x00062c32) set_value_pane_ParamLimits

0xa5d3,	// (0x00062c32) set_value_pane

0x9102,	// (0x00061761) bg_set_opt_pane_ParamLimits

0x9102,	// (0x00061761) bg_set_opt_pane

0xdb38,	// (0x00066197) set_value_pane_t1

0x9123,	// (0x00061782) slider_set_pane_cp3

0x912c,	// (0x0006178b) volume_small_pane_cp

0x9135,	// (0x00061794) list_form_gen_pane

0x913e,	// (0x0006179d) scroll_pane_cp8

0xa66f,	// (0x00062cce) form_field_data_pane_ParamLimits

0xa66f,	// (0x00062cce) form_field_data_pane

0xa68c,	// (0x00062ceb) form_field_data_wide_pane_ParamLimits

0xa68c,	// (0x00062ceb) form_field_data_wide_pane

0xa6b0,	// (0x00062d0f) form_field_popup_pane_ParamLimits

0xa6b0,	// (0x00062d0f) form_field_popup_pane

0xdb56,	// (0x000661b5) form_field_popup_wide_pane_ParamLimits

0xdb56,	// (0x000661b5) form_field_popup_wide_pane

0xdb77,	// (0x000661d6) form_field_slider_pane_ParamLimits

0xdb77,	// (0x000661d6) form_field_slider_pane

0xdb8a,	// (0x000661e9) form_field_slider_wide_pane_ParamLimits

0xdb8a,	// (0x000661e9) form_field_slider_wide_pane

0x914f,	// (0x000617ae) data_form_pane

0xa6dc,	// (0x00062d3b) form_field_data_pane_t1

0x915b,	// (0x000617ba) input_focus_pane

0xdb9d,	// (0x000661fc) data_form_wide_pane

0xdbba,	// (0x00066219) form_field_data_wide_pane_t1

0x8ed6,	// (0x00061535) input_focus_pane_cp6

0xa6f6,	// (0x00062d55) form_field_popup_pane_t1

0x915b,	// (0x000617ba) input_focus_pane_cp7

0x9189,	// (0x000617e8) list_form_pane

0xdbe4,	// (0x00066243) form_field_popup_wide_pane_t1

0x915b,	// (0x000617ba) input_focus_pane_cp8

0x9195,	// (0x000617f4) list_form_wide_pane

0xa718,	// (0x00062d77) form_field_slider_pane_t1_ParamLimits

0xa718,	// (0x00062d77) form_field_slider_pane_t1

0xa730,	// (0x00062d8f) form_field_slider_pane_t2_ParamLimits

0xa730,	// (0x00062d8f) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x00067cc1) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x00067cc1) form_field_slider_pane_t

0x8bb0,	// (0x0006120f) input_focus_pane_cp9_ParamLimits

0x8bb0,	// (0x0006120f) input_focus_pane_cp9

0xa745,	// (0x00062da4) slider_cont_pane_ParamLimits

0xa745,	// (0x00062da4) slider_cont_pane

0x91a1,	// (0x00061800) form_field_slider_wide_pane_t1_ParamLimits

0x91a1,	// (0x00061800) form_field_slider_wide_pane_t1

0xdbf9,	// (0x00066258) form_field_slider_wide_pane_t2_ParamLimits

0xdbf9,	// (0x00066258) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x00067cc6) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x00067cc6) form_field_slider_wide_pane_t

0x8bb0,	// (0x0006120f) input_focus_pane_cp10_ParamLimits

0x8bb0,	// (0x0006120f) input_focus_pane_cp10

0xa759,	// (0x00062db8) slider_cont_pane_cp1_ParamLimits

0xa759,	// (0x00062db8) slider_cont_pane_cp1

0xa76d,	// (0x00062dcc) slider_form_pane_cp

0x91b3,	// (0x00061812) input_focus_pane_g1

0x91bb,	// (0x0006181a) input_focus_pane_g2

0x91c3,	// (0x00061822) input_focus_pane_g3

0x91cb,	// (0x0006182a) input_focus_pane_g4

0x91d3,	// (0x00061832) input_focus_pane_g5

0x91db,	// (0x0006183a) input_focus_pane_g6

0x91e3,	// (0x00061842) input_focus_pane_g7

0x91eb,	// (0x0006184a) input_focus_pane_g8

0x91f3,	// (0x00061852) input_focus_pane_g9

0x8a25,	// (0x00061084) input_focus_pane_g10

0x0009,

0xf66c,	// (0x00067ccb) input_focus_pane_g

0x337b,	// (0x0005b9da) wait_border_pane_g3_copy1

0xa775,	// (0x00062dd4) data_form_pane_t1

0x8a25,	// (0x00061084) wait_anim_pane_g1_copy1

0xb788,	// (0x00063de7) data_form_wide_pane_t1

0xdc0b,	// (0x0006626a) list_form_graphic_pane_cp_ParamLimits

0xdc0b,	// (0x0006626a) list_form_graphic_pane_cp

0x4495,	// (0x0005caf4) slider_form_pane_g1

0x449e,	// (0x0005cafd) slider_form_pane_g2

0x0006,

0xf96a,	// (0x00067fc9) slider_form_pane_g

0xa791,	// (0x00062df0) list_form_graphic_pane_ParamLimits

0xa791,	// (0x00062df0) list_form_graphic_pane

0xdc1d,	// (0x0006627c) list_form_graphic_pane_g1

0xdc25,	// (0x00066284) list_form_graphic_pane_t1_ParamLimits

0xdc25,	// (0x00066284) list_form_graphic_pane_t1

0x8a7d,	// (0x000610dc) list_highlight_pane_cp5_ParamLimits

0x8a7d,	// (0x000610dc) list_highlight_pane_cp5

0xa7a2,	// (0x00062e01) find_pane_g1

0xdc3a,	// (0x00066299) input_find_pane

0xa7ab,	// (0x00062e0a) input_find_pane_g1_ParamLimits

0xa7ab,	// (0x00062e0a) input_find_pane_g1

0xa7b7,	// (0x00062e16) input_find_pane_t1_ParamLimits

0xa7b7,	// (0x00062e16) input_find_pane_t1

0xa7cc,	// (0x00062e2b) input_find_pane_t2_ParamLimits

0xa7cc,	// (0x00062e2b) input_find_pane_t2

0x0001,

0xf681,	// (0x00067ce0) input_find_pane_t_ParamLimits

0xf681,	// (0x00067ce0) input_find_pane_t

0xdc43,	// (0x000662a2) input_focus_pane_cp5_ParamLimits

0xdc43,	// (0x000662a2) input_focus_pane_cp5

0xdc56,	// (0x000662b5) bg_popup_window_pane_cp2_ParamLimits

0xdc56,	// (0x000662b5) bg_popup_window_pane_cp2

0xdc63,	// (0x000662c2) listscroll_menu_pane_ParamLimits

0xdc63,	// (0x000662c2) listscroll_menu_pane

0xa7ed,	// (0x00062e4c) popup_submenu_window_ParamLimits

0xa7ed,	// (0x00062e4c) popup_submenu_window

0xdc6f,	// (0x000662ce) find_popup_pane_g1

0xdc77,	// (0x000662d6) input_popup_find_pane_cp

0xdc81,	// (0x000662e0) input_focus_pane_cp4_ParamLimits

0xdc81,	// (0x000662e0) input_focus_pane_cp4

0xdc8f,	// (0x000662ee) input_popup_find_pane_t1_ParamLimits

0xdc8f,	// (0x000662ee) input_popup_find_pane_t1

0x8a2f,	// (0x0006108e) bg_popup_sub_pane_cp

0xdcbd,	// (0x0006631c) listscroll_popup_sub_pane

0xdcc5,	// (0x00066324) list_submenu_pane_ParamLimits

0xdcc5,	// (0x00066324) list_submenu_pane

0xdcd6,	// (0x00066335) scroll_pane_cp4

0xdcde,	// (0x0006633d) list_single_popup_submenu_pane_ParamLimits

0xdcde,	// (0x0006633d) list_single_popup_submenu_pane

0xdcf3,	// (0x00066352) list_single_popup_submenu_pane_g1

0xdcfb,	// (0x0006635a) list_single_popup_submenu_pane_t1_ParamLimits

0xdcfb,	// (0x0006635a) list_single_popup_submenu_pane_t1

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp1_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp1

0xa82b,	// (0x00062e8a) tabs_2_active_pane_g1

0xa833,	// (0x00062e92) tabs_2_active_pane_t1

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp1_ParamLimits

0x8bb0,	// (0x0006120f) bg_passive_tab_pane_cp1

0xa82b,	// (0x00062e8a) tabs_2_passive_pane_g1

0xa833,	// (0x00062e92) tabs_2_passive_pane_t1

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp4

0xa845,	// (0x00062ea4) tabs_2_long_active_pane_t1

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp4

0x07e1,	// (0x00058e40) list_single_midp_graphic_pane_g4_ParamLimits

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp5

0xa858,	// (0x00062eb7) tabs_3_long_active_pane_t1

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp5

0x07e1,	// (0x00058e40) list_single_midp_graphic_pane_g4

0x8a7d,	// (0x000610dc) bg_popup_window_pane_cp13_ParamLimits

0x8a7d,	// (0x000610dc) bg_popup_window_pane_cp13

0xdd19,	// (0x00066378) listscroll_popup_fast_pane_ParamLimits

0xdd19,	// (0x00066378) listscroll_popup_fast_pane

0xdd28,	// (0x00066387) grid_popup_fast_pane_ParamLimits

0xdd28,	// (0x00066387) grid_popup_fast_pane

0xdd3a,	// (0x00066399) scroll_pane_cp9_ParamLimits

0xdd3a,	// (0x00066399) scroll_pane_cp9

0x5dce,	// (0x0005e42d) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5dce,	// (0x0005e42d) list_single_graphic_hl_pane_t1_cp2

0xdd5e,	// (0x000663bd) input_focus_pane_cp20_ParamLimits

0xdd5e,	// (0x000663bd) input_focus_pane_cp20

0xdd6c,	// (0x000663cb) query_popup_data_pane_t1_ParamLimits

0xdd6c,	// (0x000663cb) query_popup_data_pane_t1

0xdd7f,	// (0x000663de) query_popup_data_pane_t2_ParamLimits

0xdd7f,	// (0x000663de) query_popup_data_pane_t2

0xddc5,	// (0x00066424) query_popup_data_pane_t3_ParamLimits

0xddc5,	// (0x00066424) query_popup_data_pane_t3

0xde06,	// (0x00066465) query_popup_data_pane_t4_ParamLimits

0xde06,	// (0x00066465) query_popup_data_pane_t4

0xde42,	// (0x000664a1) query_popup_data_pane_t5_ParamLimits

0xde42,	// (0x000664a1) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x00067ce5) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x00067ce5) query_popup_data_pane_t

0x91b3,	// (0x00061812) bg_set_opt_pane_g1

0x91bb,	// (0x0006181a) bg_set_opt_pane_g2

0x91c3,	// (0x00061822) bg_set_opt_pane_g3

0x91cb,	// (0x0006182a) bg_set_opt_pane_g4

0x91d3,	// (0x00061832) bg_set_opt_pane_g5

0x91db,	// (0x0006183a) bg_set_opt_pane_g6

0x91e3,	// (0x00061842) bg_set_opt_pane_g7

0x91eb,	// (0x0006184a) bg_set_opt_pane_g8

0x91f3,	// (0x00061852) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x00067cf0) bg_set_opt_pane_g

0xf33f,	// (0x0006799e) control_top_pane_stacon_ParamLimits

0xf33f,	// (0x0006799e) control_top_pane_stacon

0xf392,	// (0x000679f1) signal_pane_stacon_ParamLimits

0xf392,	// (0x000679f1) signal_pane_stacon

0x219f,	// (0x0005a7fe) stacon_top_pane_g1_ParamLimits

0x219f,	// (0x0005a7fe) stacon_top_pane_g1

0xf3b7,	// (0x00067a16) title_pane_stacon_ParamLimits

0xf3b7,	// (0x00067a16) title_pane_stacon

0xf3e1,	// (0x00067a40) uni_indicator_pane_stacon_ParamLimits

0xf3e1,	// (0x00067a40) uni_indicator_pane_stacon

0xf3f6,	// (0x00067a55) battery_pane_stacon_ParamLimits

0xf3f6,	// (0x00067a55) battery_pane_stacon

0xf43a,	// (0x00067a99) control_bottom_pane_stacon_ParamLimits

0xf43a,	// (0x00067a99) control_bottom_pane_stacon

0xf45d,	// (0x00067abc) navi_pane_stacon_ParamLimits

0xf45d,	// (0x00067abc) navi_pane_stacon

0x21c1,	// (0x0005a820) stacon_bottom_pane_g1_ParamLimits

0x21c1,	// (0x0005a820) stacon_bottom_pane_g1

0xf0a5,	// (0x00067704) aid_levels_signal_lsc_ParamLimits

0xf0a5,	// (0x00067704) aid_levels_signal_lsc

0xf0bc,	// (0x0006771b) signal_pane_stacon_g1_ParamLimits

0xf0bc,	// (0x0006771b) signal_pane_stacon_g1

0xf0d0,	// (0x0006772f) signal_pane_stacon_g2_ParamLimits

0xf0d0,	// (0x0006772f) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x00067d03) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00067d03) signal_pane_stacon_g

0xf105,	// (0x00067764) title_pane_stacon_t1_ParamLimits

0xf105,	// (0x00067764) title_pane_stacon_t1

0xde86,	// (0x000664e5) uni_indicator_pane_stacon_g1

0xde90,	// (0x000664ef) uni_indicator_pane_stacon_g2

0xde9a,	// (0x000664f9) uni_indicator_pane_stacon_g3

0xdea4,	// (0x00066503) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x00067d0f) uni_indicator_pane_stacon_g

0xf12a,	// (0x00067789) control_top_pane_stacon_g1

0xf132,	// (0x00067791) control_top_pane_stacon_t1_ParamLimits

0xf132,	// (0x00067791) control_top_pane_stacon_t1

0xf169,	// (0x000677c8) aid_levels_battery_lsc_ParamLimits

0xf169,	// (0x000677c8) aid_levels_battery_lsc

0xf181,	// (0x000677e0) battery_pane_stacon_g1_ParamLimits

0xf181,	// (0x000677e0) battery_pane_stacon_g1

0xf194,	// (0x000677f3) battery_pane_stacon_g2_ParamLimits

0xf194,	// (0x000677f3) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x00067d18) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x00067d18) battery_pane_stacon_g

0xf1d2,	// (0x00067831) navi_icon_pane_stacon

0xf1e6,	// (0x00067845) navi_navi_pane_stacon

0xf1d2,	// (0x00067831) navi_text_pane_stacon

0xf12a,	// (0x00067789) control_bottom_pane_stacon_g1

0xf1fc,	// (0x0006785b) control_bottom_pane_stacon_t1_ParamLimits

0xf1fc,	// (0x0006785b) control_bottom_pane_stacon_t1

0xa86a,	// (0x00062ec9) grid_app_pane_ParamLimits

0xa86a,	// (0x00062ec9) grid_app_pane

0xa8a2,	// (0x00062f01) scroll_pane_cp15_ParamLimits

0xa8a2,	// (0x00062f01) scroll_pane_cp15

0xa8b7,	// (0x00062f16) cell_app_pane_ParamLimits

0xa8b7,	// (0x00062f16) cell_app_pane

0xa904,	// (0x00062f63) cell_app_pane_g1_ParamLimits

0xa904,	// (0x00062f63) cell_app_pane_g1

0xdec8,	// (0x00066527) cell_app_pane_g2_ParamLimits

0xdec8,	// (0x00066527) cell_app_pane_g2

0x0001,

0xf6be,	// (0x00067d1d) cell_app_pane_g_ParamLimits

0xf6be,	// (0x00067d1d) cell_app_pane_g

0xa928,	// (0x00062f87) cell_app_pane_t1_ParamLimits

0xa928,	// (0x00062f87) cell_app_pane_t1

0xded4,	// (0x00066533) grid_highlight_pane_ParamLimits

0xded4,	// (0x00066533) grid_highlight_pane

0x91b3,	// (0x00061812) cell_highlight_pane_g1

0x91bb,	// (0x0006181a) cell_highlight_pane_g2

0x91c3,	// (0x00061822) cell_highlight_pane_g3

0x91cb,	// (0x0006182a) cell_highlight_pane_g4

0x91d3,	// (0x00061832) cell_highlight_pane_g5

0x91db,	// (0x0006183a) cell_highlight_pane_g6

0x91e3,	// (0x00061842) cell_highlight_pane_g7

0x91eb,	// (0x0006184a) cell_highlight_pane_g8

0x91f3,	// (0x00061852) cell_highlight_pane_g9

0x8a25,	// (0x00061084) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x00067ccb) cell_highlight_pane_g

0xdee5,	// (0x00066544) bg_scroll_pane

0xf23d,	// (0x0006789c) scroll_handle_pane

0xdf2c,	// (0x0006658b) scroll_bg_pane_g1

0xdf41,	// (0x000665a0) scroll_bg_pane_g2

0xdf59,	// (0x000665b8) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x00067d22) scroll_bg_pane_g

0xdf6e,	// (0x000665cd) scroll_handle_focus_pane_ParamLimits

0xdf6e,	// (0x000665cd) scroll_handle_focus_pane

0xdf2c,	// (0x0006658b) scroll_handle_pane_g1

0xdf7b,	// (0x000665da) scroll_handle_pane_g2

0xdf59,	// (0x000665b8) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x00067d29) scroll_handle_pane_g

0xdc81,	// (0x000662e0) bg_popup_sub_pane_cp21_ParamLimits

0xdc81,	// (0x000662e0) bg_popup_sub_pane_cp21

0xdf8f,	// (0x000665ee) popup_fep_japan_predictive_window_t1_ParamLimits

0xdf8f,	// (0x000665ee) popup_fep_japan_predictive_window_t1

0xdfa6,	// (0x00066605) popup_fep_japan_predictive_window_t2_ParamLimits

0xdfa6,	// (0x00066605) popup_fep_japan_predictive_window_t2

0xdfd9,	// (0x00066638) popup_fep_japan_predictive_window_t3_ParamLimits

0xdfd9,	// (0x00066638) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x00067d30) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x00067d30) popup_fep_japan_predictive_window_t

0x8a2f,	// (0x0006108e) bg_popup_sub_pane_cp23

0xe010,	// (0x0006666f) listscroll_japin_cand_pane

0xe018,	// (0x00066677) popup_fep_japan_candidate_window_t1

0xe026,	// (0x00066685) candidate_pane_ParamLimits

0xe026,	// (0x00066685) candidate_pane

0xe038,	// (0x00066697) scroll_pane_cp30

0xe042,	// (0x000666a1) list_single_popup_jap_candidate_pane_ParamLimits

0xe042,	// (0x000666a1) list_single_popup_jap_candidate_pane

0x8a2f,	// (0x0006108e) list_highlight_pane_cp30

0xe056,	// (0x000666b5) list_single_popup_jap_candidate_pane_t1

0xa948,	// (0x00062fa7) level_1_signal

0xa95a,	// (0x00062fb9) level_2_signal

0xa96d,	// (0x00062fcc) level_3_signal

0xa980,	// (0x00062fdf) level_4_signal

0xa993,	// (0x00062ff2) level_5_signal

0xa9a6,	// (0x00063005) level_6_signal

0xa9b9,	// (0x00063018) level_7_signal

0xa948,	// (0x00062fa7) level_1_battery

0xa95a,	// (0x00062fb9) level_2_battery

0xa96d,	// (0x00062fcc) level_3_battery

0xa980,	// (0x00062fdf) level_4_battery

0xa993,	// (0x00062ff2) level_5_battery

0xa9a6,	// (0x00063005) level_6_battery

0xa9b9,	// (0x00063018) level_7_battery

0x1f06,	// (0x0005a565) list_menu_pane_ParamLimits

0x1f06,	// (0x0005a565) list_menu_pane

0x1f1c,	// (0x0005a57b) scroll_pane_cp25_ParamLimits

0x1f1c,	// (0x0005a57b) scroll_pane_cp25

0x1f35,	// (0x0005a594) list_double2_graphic_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double2_graphic_pane_cp2

0x1f35,	// (0x0005a594) list_double2_large_graphic_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double2_large_graphic_pane_cp2

0x1f35,	// (0x0005a594) list_double2_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double2_pane_cp2

0x1f35,	// (0x0005a594) list_double_graphic_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double_graphic_pane_cp2

0x1f35,	// (0x0005a594) list_double_large_graphic_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double_large_graphic_pane_cp2

0x1f35,	// (0x0005a594) list_double_number_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double_number_pane_cp2

0x1f35,	// (0x0005a594) list_double_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double_pane_cp2

0xa9cc,	// (0x0006302b) list_single_2graphic_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_2graphic_pane_cp2

0xa9cc,	// (0x0006302b) list_single_graphic_heading_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_graphic_heading_pane_cp2

0xa9cc,	// (0x0006302b) list_single_graphic_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_graphic_pane_cp2

0xa9cc,	// (0x0006302b) list_single_heading_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_heading_pane_cp2

0x1f78,	// (0x0005a5d7) list_single_large_graphic_pane_cp2_ParamLimits

0x1f78,	// (0x0005a5d7) list_single_large_graphic_pane_cp2

0xa9cc,	// (0x0006302b) list_single_number_heading_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_number_heading_pane_cp2

0xa9cc,	// (0x0006302b) list_single_number_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_number_pane_cp2

0xa9cc,	// (0x0006302b) list_single_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_pane_cp2

0x1fe6,	// (0x0005a645) bg_popup_sub_pane_cp22

0xf2ef,	// (0x0006794e) popup_side_volume_key_window_g1

0xf319,	// (0x00067978) popup_side_volume_key_window_t1

0xf337,	// (0x00067996) volume_small_pane_cp1

0x8bb0,	// (0x0006120f) bg_popup_sub_pane_cp24_ParamLimits

0x8bb0,	// (0x0006120f) bg_popup_sub_pane_cp24

0x1ffc,	// (0x0005a65b) fep_china_uni_candidate_pane_ParamLimits

0x1ffc,	// (0x0005a65b) fep_china_uni_candidate_pane

0x2010,	// (0x0005a66f) fep_china_uni_entry_pane

0x2020,	// (0x0005a67f) popup_fep_china_uni_window_g1

0x203c,	// (0x0005a69b) fep_china_uni_entry_pane_g1

0x2046,	// (0x0005a6a5) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x00067d61) fep_china_uni_entry_pane_g

0x2050,	// (0x0005a6af) fep_entry_item_pane

0x205a,	// (0x0005a6b9) fep_candidate_item_pane

0x2062,	// (0x0005a6c1) fep_china_uni_candidate_pane_g1

0x206c,	// (0x0005a6cb) fep_china_uni_candidate_pane_g2

0x2074,	// (0x0005a6d3) fep_china_uni_candidate_pane_g3

0x207c,	// (0x0005a6db) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x00067d66) fep_china_uni_candidate_pane_g

0x8a25,	// (0x00061084) fep_entry_item_pane_g1

0x2086,	// (0x0005a6e5) fep_entry_item_pane_t1_ParamLimits

0x2086,	// (0x0005a6e5) fep_entry_item_pane_t1

0x209c,	// (0x0005a6fb) fep_candidate_item_pane_t1_ParamLimits

0x209c,	// (0x0005a6fb) fep_candidate_item_pane_t1

0x20b1,	// (0x0005a710) fep_candidate_item_pane_t2_ParamLimits

0x20b1,	// (0x0005a710) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x00067d6f) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x00067d6f) fep_candidate_item_pane_t

0x8a7d,	// (0x000610dc) list_highlight_pane_cp31_ParamLimits

0x8a7d,	// (0x000610dc) list_highlight_pane_cp31

0x20c3,	// (0x0005a722) level_1_signal_lsc

0x20cc,	// (0x0005a72b) level_2_signal_lsc

0x20d5,	// (0x0005a734) level_3_signal_lsc

0x20de,	// (0x0005a73d) level_4_signal_lsc

0x20e7,	// (0x0005a746) level_5_signal_lsc

0x20f0,	// (0x0005a74f) level_6_signal_lsc

0x20f9,	// (0x0005a758) level_7_signal_lsc

0x20f9,	// (0x0005a758) level_1_battery_lsc

0x2102,	// (0x0005a761) level_2_battery_lsc

0x210b,	// (0x0005a76a) level_3_battery_lsc

0x2114,	// (0x0005a773) level_4_battery_lsc

0x211d,	// (0x0005a77c) level_5_battery_lsc

0x2126,	// (0x0005a785) level_6_battery_lsc

0x20c3,	// (0x0005a722) level_7_battery_lsc

0x212f,	// (0x0005a78e) scroll_handle_focus_pane_g1

0x2138,	// (0x0005a797) scroll_handle_focus_pane_g2

0x2141,	// (0x0005a7a0) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x00067d74) scroll_handle_focus_pane_g

0xaa5b,	// (0x000630ba) list_single_2graphic_pane_g1_ParamLimits

0xaa5b,	// (0x000630ba) list_single_2graphic_pane_g1

0xa279,	// (0x000628d8) list_single_2graphic_pane_g2_ParamLimits

0xa279,	// (0x000628d8) list_single_2graphic_pane_g2

0x2d17,	// (0x0005b376) list_single_2graphic_pane_g3_ParamLimits

0x2d17,	// (0x0005b376) list_single_2graphic_pane_g3

0xaa67,	// (0x000630c6) list_single_2graphic_pane_g4_ParamLimits

0xaa67,	// (0x000630c6) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x00067d7b) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x00067d7b) list_single_2graphic_pane_g

0xaa73,	// (0x000630d2) list_single_2graphic_pane_t1_ParamLimits

0xaa73,	// (0x000630d2) list_single_2graphic_pane_t1

0xaaa1,	// (0x00063100) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xaaa1,	// (0x00063100) list_double2_graphic_large_graphic_pane_g1

0xa483,	// (0x00062ae2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa483,	// (0x00062ae2) list_double2_graphic_large_graphic_pane_g2

0xa3d0,	// (0x00062a2f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa3d0,	// (0x00062a2f) list_double2_graphic_large_graphic_pane_g3

0xaab3,	// (0x00063112) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xaab3,	// (0x00063112) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x00067d84) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x00067d84) list_double2_graphic_large_graphic_pane_g

0xaabf,	// (0x0006311e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xaabf,	// (0x0006311e) list_double2_graphic_large_graphic_pane_t1

0xaad5,	// (0x00063134) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xaad5,	// (0x00063134) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x00067d8d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x00067d8d) list_double2_graphic_large_graphic_pane_t

0x2284,	// (0x0005a8e3) popup_fast_swap_window_ParamLimits

0x2284,	// (0x0005a8e3) popup_fast_swap_window

0x22a2,	// (0x0005a901) popup_side_volume_key_window

0x22c0,	// (0x0005a91f) stacon_top_pane

0x22ca,	// (0x0005a929) status_pane_ParamLimits

0x22ca,	// (0x0005a929) status_pane

0xab2f,	// (0x0006318e) status_small_pane

0x8a2f,	// (0x0006108e) control_pane

0x8a2f,	// (0x0006108e) stacon_bottom_pane

0x913e,	// (0x0006179d) scroll_pane_cp121

0x9135,	// (0x00061794) set_content_pane

0xaae7,	// (0x00063146) bg_active_tab_pane_g1_cp1

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp1

0xaaf0,	// (0x0006314f) bg_active_tab_pane_g3_cp1

0xaae7,	// (0x00063146) bg_passive_tab_pane_g1_cp1

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp1

0xaaf0,	// (0x0006314f) bg_passive_tab_pane_g3_cp1

0xaaf9,	// (0x00063158) bg_active_tab_pane_g1_cp2

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp2

0xab02,	// (0x00063161) bg_active_tab_pane_g3_cp2

0xaaf9,	// (0x00063158) bg_passive_tab_pane_g1_cp2

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp2

0xab02,	// (0x00063161) bg_passive_tab_pane_g3_cp2

0xab0b,	// (0x0006316a) bg_active_tab_pane_g1_cp3

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp3

0xab14,	// (0x00063173) bg_active_tab_pane_g3_cp3

0xab0b,	// (0x0006316a) bg_passive_tab_pane_g1_cp3

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp3

0xab14,	// (0x00063173) bg_passive_tab_pane_g3_cp3

0xab1d,	// (0x0006317c) bg_active_tab_pane_g1_cp4

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp4

0xab26,	// (0x00063185) bg_active_tab_pane_g3_cp4

0xab1d,	// (0x0006317c) bg_passive_tab_pane_g1_cp4

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp4

0xab26,	// (0x00063185) bg_passive_tab_pane_g3_cp4

0x21dd,	// (0x0005a83c) bg_active_tab_pane_g1_cp5

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp5

0x21e6,	// (0x0005a845) bg_active_tab_pane_g3_cp5

0x21dd,	// (0x0005a83c) bg_passive_tab_pane_g1_cp5

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp5

0x21e6,	// (0x0005a845) bg_passive_tab_pane_g3_cp5

0x4a76,	// (0x0005d0d5) list_set_graphic_pane_ParamLimits

0x4a76,	// (0x0005d0d5) list_set_graphic_pane

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp4

0x2205,	// (0x0005a864) list_set_graphic_pane_g1_ParamLimits

0x2205,	// (0x0005a864) list_set_graphic_pane_g1

0x2211,	// (0x0005a870) list_set_graphic_pane_g2_ParamLimits

0x2211,	// (0x0005a870) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x00067d92) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x00067d92) list_set_graphic_pane_g

0x0009,

0xfab8,	// (0x00068117) volume_small_pane_cp_g

0x2235,	// (0x0005a894) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2235,	// (0x0005a894) list_double2_large_graphic_pane_g1_cp2

0x2243,	// (0x0005a8a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2243,	// (0x0005a8a2) list_double2_large_graphic_pane_g2_cp2

0x2254,	// (0x0005a8b3) list_double2_large_graphic_pane_g3_cp2

0x225c,	// (0x0005a8bb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x225c,	// (0x0005a8bb) list_double2_large_graphic_pane_t1_cp2

0x2272,	// (0x0005a8d1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2272,	// (0x0005a8d1) list_double2_large_graphic_pane_t2_cp2

0x4022,	// (0x0005c681) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4022,	// (0x0005c681) list_double_large_graphic_pane_g1_cp2

0x4035,	// (0x0005c694) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4035,	// (0x0005c694) list_double_large_graphic_pane_g2_cp2

0x23e7,	// (0x0005aa46) list_double_large_graphic_pane_g3_cp2

0x4046,	// (0x0005c6a5) list_double_large_graphic_pane_g4_cp

0x404e,	// (0x0005c6ad) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x404e,	// (0x0005c6ad) list_double_large_graphic_pane_t1_cp2

0x4065,	// (0x0005c6c4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4065,	// (0x0005c6c4) list_double_large_graphic_pane_t2_cp2

0x22e3,	// (0x0005a942) list_double2_graphic_pane_g1_cp2_ParamLimits

0x22e3,	// (0x0005a942) list_double2_graphic_pane_g1_cp2

0x22f1,	// (0x0005a950) list_double2_graphic_pane_g2_cp2_ParamLimits

0x22f1,	// (0x0005a950) list_double2_graphic_pane_g2_cp2

0x2302,	// (0x0005a961) list_double2_graphic_pane_g3_cp2

0x230c,	// (0x0005a96b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x230c,	// (0x0005a96b) list_double2_graphic_pane_t1_cp2

0x2322,	// (0x0005a981) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2322,	// (0x0005a981) list_double2_graphic_pane_t2_cp2

0x1ebb,	// (0x0005a51a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1ebb,	// (0x0005a51a) list_single_number_heading_pane_g1_cp2

0x2334,	// (0x0005a993) list_single_number_heading_pane_g2_cp2

0x233c,	// (0x0005a99b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x233c,	// (0x0005a99b) list_single_number_heading_pane_t1_cp2

0x2352,	// (0x0005a9b1) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2352,	// (0x0005a9b1) list_single_number_heading_pane_t2_cp2

0x2366,	// (0x0005a9c5) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2366,	// (0x0005a9c5) list_single_number_heading_pane_t3_cp2

0x1ebb,	// (0x0005a51a) list_single_heading_pane_g1_cp2_ParamLimits

0x1ebb,	// (0x0005a51a) list_single_heading_pane_g1_cp2

0x2334,	// (0x0005a993) list_single_heading_pane_g2_cp2

0x233c,	// (0x0005a99b) list_single_heading_pane_t1_cp2_ParamLimits

0x233c,	// (0x0005a99b) list_single_heading_pane_t1_cp2

0x3e1c,	// (0x0005c47b) list_single_heading_pane_t2_cp2_ParamLimits

0x3e1c,	// (0x0005c47b) list_single_heading_pane_t2_cp2

0x3d64,	// (0x0005c3c3) list_double_graphic_pane_g1_cp2_ParamLimits

0x3d64,	// (0x0005c3c3) list_double_graphic_pane_g1_cp2

0x3d70,	// (0x0005c3cf) list_double_graphic_pane_g2_cp2_ParamLimits

0x3d70,	// (0x0005c3cf) list_double_graphic_pane_g2_cp2

0x3d7f,	// (0x0005c3de) list_double_graphic_pane_g3_cp2

0x3d87,	// (0x0005c3e6) list_double_graphic_pane_t1_cp2_ParamLimits

0x3d87,	// (0x0005c3e6) list_double_graphic_pane_t1_cp2

0x3d9d,	// (0x0005c3fc) list_double_graphic_pane_t2_cp2_ParamLimits

0x3d9d,	// (0x0005c3fc) list_double_graphic_pane_t2_cp2

0x23db,	// (0x0005aa3a) list_double_number_pane_g1_cp2_ParamLimits

0x23db,	// (0x0005aa3a) list_double_number_pane_g1_cp2

0x23e7,	// (0x0005aa46) list_double_number_pane_g2_cp2

0x3d28,	// (0x0005c387) list_double_number_pane_t1_cp2_ParamLimits

0x3d28,	// (0x0005c387) list_double_number_pane_t1_cp2

0x3d3c,	// (0x0005c39b) list_double_number_pane_t2_cp2_ParamLimits

0x3d3c,	// (0x0005c39b) list_double_number_pane_t2_cp2

0x3d52,	// (0x0005c3b1) list_double_number_pane_t3_cp2_ParamLimits

0x3d52,	// (0x0005c3b1) list_double_number_pane_t3_cp2

0x3c11,	// (0x0005c270) list_single_graphic_pane_g1_cp2_ParamLimits

0x3c11,	// (0x0005c270) list_single_graphic_pane_g1_cp2

0x2441,	// (0x0005aaa0) list_single_graphic_pane_g2_cp2_ParamLimits

0x2441,	// (0x0005aaa0) list_single_graphic_pane_g2_cp2

0x244d,	// (0x0005aaac) list_single_graphic_pane_g3_cp2

0x3be7,	// (0x0005c246) list_single_graphic_pane_t1_cp2_ParamLimits

0x3be7,	// (0x0005c246) list_single_graphic_pane_t1_cp2

0x2441,	// (0x0005aaa0) list_single_number_pane_g1_cp2_ParamLimits

0x2441,	// (0x0005aaa0) list_single_number_pane_g1_cp2

0x244d,	// (0x0005aaac) list_single_number_pane_g2_cp2

0x3be7,	// (0x0005c246) list_single_number_pane_t1_cp2_ParamLimits

0x3be7,	// (0x0005c246) list_single_number_pane_t1_cp2

0x3bfd,	// (0x0005c25c) list_single_number_pane_t2_cp2_ParamLimits

0x3bfd,	// (0x0005c25c) list_single_number_pane_t2_cp2

0x2243,	// (0x0005a8a2) list_double2_pane_g1_cp2_ParamLimits

0x2243,	// (0x0005a8a2) list_double2_pane_g1_cp2

0x2254,	// (0x0005a8b3) list_double2_pane_g2_cp2

0x23b3,	// (0x0005aa12) list_double2_pane_t1_cp2_ParamLimits

0x23b3,	// (0x0005aa12) list_double2_pane_t1_cp2

0x23c9,	// (0x0005aa28) list_double2_pane_t2_cp2_ParamLimits

0x23c9,	// (0x0005aa28) list_double2_pane_t2_cp2

0x23db,	// (0x0005aa3a) list_double_pane_g1_cp2_ParamLimits

0x23db,	// (0x0005aa3a) list_double_pane_g1_cp2

0x23e7,	// (0x0005aa46) list_double_pane_g2_cp2

0x23ef,	// (0x0005aa4e) list_double_pane_t1_cp2_ParamLimits

0x23ef,	// (0x0005aa4e) list_double_pane_t1_cp2

0x2405,	// (0x0005aa64) list_double_pane_t2_cp2_ParamLimits

0x2405,	// (0x0005aa64) list_double_pane_t2_cp2

0x2431,	// (0x0005aa90) list_single_pane_cp2_g3

0x2441,	// (0x0005aaa0) list_single_pane_g1_cp2_ParamLimits

0x2441,	// (0x0005aaa0) list_single_pane_g1_cp2

0x244d,	// (0x0005aaac) list_single_pane_g2_cp2

0x2455,	// (0x0005aab4) list_single_pane_t1_cp2_ParamLimits

0x2455,	// (0x0005aab4) list_single_pane_t1_cp2

0x246d,	// (0x0005aacc) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x246d,	// (0x0005aacc) list_single_large_graphic_pane_g1_cp2

0x247b,	// (0x0005aada) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x247b,	// (0x0005aada) list_single_large_graphic_pane_g2_cp2

0x2487,	// (0x0005aae6) list_single_large_graphic_pane_g3_cp2

0x248f,	// (0x0005aaee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x248f,	// (0x0005aaee) list_single_large_graphic_pane_g4_cp1

0x24a9,	// (0x0005ab08) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x24a9,	// (0x0005ab08) list_single_large_graphic_pane_t1_cp2

0x3bb1,	// (0x0005c210) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3bb1,	// (0x0005c210) list_single_graphic_heading_pane_g1_cp2

0x3b7e,	// (0x0005c1dd) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3b7e,	// (0x0005c1dd) list_single_graphic_heading_pane_g4_cp2

0x244d,	// (0x0005aaac) list_single_graphic_heading_pane_g5_cp2

0x3bbd,	// (0x0005c21c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x3bbd,	// (0x0005c21c) list_single_graphic_heading_pane_t1_cp2

0x3bd3,	// (0x0005c232) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3bd3,	// (0x0005c232) list_single_graphic_heading_pane_t2_cp2

0x3b72,	// (0x0005c1d1) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3b72,	// (0x0005c1d1) list_single_2graphic_pane_g1_cp2

0x3b7e,	// (0x0005c1dd) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3b7e,	// (0x0005c1dd) list_single_2graphic_pane_g2_cp2

0x244d,	// (0x0005aaac) list_single_2graphic_pane_g3_cp2

0x3b8f,	// (0x0005c1ee) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3b8f,	// (0x0005c1ee) list_single_2graphic_pane_g4_cp2

0x3b9b,	// (0x0005c1fa) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3b9b,	// (0x0005c1fa) list_single_2graphic_pane_t1_cp2

0x8a25,	// (0x00061084) list_highlight_pane_g10_cp1

0x3587,	// (0x0005bbe6) list_highlight_pane_g1_cp1

0x358f,	// (0x0005bbee) list_highlight_pane_g2_cp1

0x3597,	// (0x0005bbf6) list_highlight_pane_g3_cp1

0x359f,	// (0x0005bbfe) list_highlight_pane_g4_cp1

0x35a7,	// (0x0005bc06) list_highlight_pane_g5_cp1

0x35af,	// (0x0005bc0e) list_highlight_pane_g6_cp1

0x35b7,	// (0x0005bc16) list_highlight_pane_g7_cp1

0x35bf,	// (0x0005bc1e) list_highlight_pane_g8_cp1

0x35c7,	// (0x0005bc26) list_highlight_pane_g9_cp1

0xc494,	// (0x00064af3) form_field_slider_pane_t3

0xc4a2,	// (0x00064b01) form_field_slider_pane_t4

0x34c3,	// (0x0005bb22) slider_form_pane_ParamLimits

0x34c3,	// (0x0005bb22) slider_form_pane

0x8a2f,	// (0x0006108e) control_abbreviations

0x8a2f,	// (0x0006108e) control_conventions

0x8a2f,	// (0x0006108e) control_definitions

0x8a2f,	// (0x0006108e) format_table_attribute

0x3e72,	// (0x0005c4d1) bg_popup_preview_window_pane_g9

0x8a2f,	// (0x0006108e) format_table_data2

0x8a2f,	// (0x0006108e) format_table_data3

0x8a2f,	// (0x0006108e) format_table_data_example

0x0008,

0x8a2f,	// (0x0006108e) intro_purpose

0xf8ca,	// (0x00067f29) bg_popup_preview_window_pane_g

0x8a2f,	// (0x0006108e) texts_category

0x8a2f,	// (0x0006108e) texts_graphics

0x24bf,	// (0x0005ab1e) text_digital

0x24ce,	// (0x0005ab2d) text_primary

0x24dd,	// (0x0005ab3c) text_primary_small

0x24ec,	// (0x0005ab4b) text_secondary

0x24fb,	// (0x0005ab5a) text_title

0x459f,	// (0x0005cbfe) bg_passive_tab_pane_g1_cp3_srt

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp3_srt

0x45a8,	// (0x0005cc07) bg_passive_tab_pane_g3_cp3_srt

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp3_srt_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp3_srt

0x45b1,	// (0x0005cc10) tabs_4_active_pane_srt_g1

0xc8a5,	// (0x00064f04) tabs_4_active_pane_srt_t1_ParamLimits

0xc8a5,	// (0x00064f04) tabs_4_active_pane_srt_t1

0x459f,	// (0x0005cbfe) bg_active_tab_pane_g1_cp3_copy1

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp3_copy1

0x45a8,	// (0x0005cc07) bg_active_tab_pane_g3_cp3_copy1

0x8a7d,	// (0x000610dc) tabs_2_long_active_pane_srt_ParamLimits

0x8a7d,	// (0x000610dc) tabs_2_long_active_pane_srt

0x8a7d,	// (0x000610dc) tabs_2_long_passive_pane_srt_ParamLimits

0x8a7d,	// (0x000610dc) tabs_2_long_passive_pane_srt

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp4_srt

0x42ac,	// (0x0005c90b) bg_passive_tab_pane_g1_cp4_srt

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp4_srt

0x42b5,	// (0x0005c914) bg_passive_tab_pane_g3_cp4_srt

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp4_srt_ParamLimits

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp4_srt

0xc674,	// (0x00064cd3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc674,	// (0x00064cd3) tabs_2_long_active_pane_srt_t1

0x42ac,	// (0x0005c90b) bg_active_tab_pane_g1_cp4_srt

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp4_srt

0x42b5,	// (0x0005c914) bg_active_tab_pane_g3_cp4_srt

0x8bb0,	// (0x0006120f) tabs_3_long_active_pane_srt_ParamLimits

0x8bb0,	// (0x0006120f) tabs_3_long_active_pane_srt

0x8bb0,	// (0x0006120f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8bb0,	// (0x0006120f) tabs_3_long_passive_pane_cp_srt

0x8bb0,	// (0x0006120f) tabs_3_long_passive_pane_srt_ParamLimits

0x8bb0,	// (0x0006120f) tabs_3_long_passive_pane_srt

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp5_srt

0x21dd,	// (0x0005a83c) bg_passive_tab_pane_g1_cp5_srt

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp5_srt

0x21e6,	// (0x0005a845) bg_passive_tab_pane_g3_cp5_srt

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp5_srt_ParamLimits

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp5_srt

0xc65e,	// (0x00064cbd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc65e,	// (0x00064cbd) tabs_3_long_active_pane_srt_t1

0x21dd,	// (0x0005a83c) bg_active_tab_pane_g1_cp5_srt

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp5_srt

0x21e6,	// (0x0005a845) bg_active_tab_pane_g3_cp5_srt

0x428c,	// (0x0005c8eb) navi_text_pane_srt_t1

0x4284,	// (0x0005c8e3) navi_icon_pane_srt_g1

0x26d3,	// (0x0005ad32) midp_editing_number_pane_srt

0x250a,	// (0x0005ab69) midp_ticker_pane_srt

0x26db,	// (0x0005ad3a) midp_ticker_pane_srt_g1

0x26e3,	// (0x0005ad42) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x00067db1) midp_ticker_pane_srt_g

0x26eb,	// (0x0005ad4a) midp_ticker_pane_srt_t1

0x4275,	// (0x0005c8d4) midp_editing_number_pane_t1_copy1

0xab61,	// (0x000631c0) listscroll_midp_pane

0xab61,	// (0x000631c0) midp_form_pane

0x2581,	// (0x0005abe0) midp_info_popup_window_ParamLimits

0x2581,	// (0x0005abe0) midp_info_popup_window

0xdc81,	// (0x000662e0) bg_popup_sub_pane_cp50_ParamLimits

0xdc81,	// (0x000662e0) bg_popup_sub_pane_cp50

0x31a9,	// (0x0005b808) listscroll_midp_info_pane_ParamLimits

0x31a9,	// (0x0005b808) listscroll_midp_info_pane

0x3189,	// (0x0005b7e8) listscroll_form_midp_pane_ParamLimits

0x3189,	// (0x0005b7e8) listscroll_form_midp_pane

0x3195,	// (0x0005b7f4) scroll_bar_cp050

0x3189,	// (0x0005b7e8) list_midp_pane

0x5053,	// (0x0005d6b2) signal_pane_g2_cp

0x30a3,	// (0x0005b702) listscroll_midp_info_pane_t1_ParamLimits

0x30a3,	// (0x0005b702) listscroll_midp_info_pane_t1

0x30bb,	// (0x0005b71a) listscroll_midp_info_pane_t2_ParamLimits

0x30bb,	// (0x0005b71a) listscroll_midp_info_pane_t2

0x30f9,	// (0x0005b758) listscroll_midp_info_pane_t3_ParamLimits

0x30f9,	// (0x0005b758) listscroll_midp_info_pane_t3

0x3133,	// (0x0005b792) listscroll_midp_info_pane_t4_ParamLimits

0x3133,	// (0x0005b792) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x00067e64) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x00067e64) listscroll_midp_info_pane_t

0xdcd6,	// (0x00066335) scroll_pane_cp21

0x303d,	// (0x0005b69c) form_midp_field_choice_group_pane

0x3046,	// (0x0005b6a5) form_midp_field_text_pane

0x3089,	// (0x0005b6e8) form_midp_field_time_pane

0x3091,	// (0x0005b6f0) form_midp_gauge_slider_pane

0x309a,	// (0x0005b6f9) form_midp_gauge_wait_pane

0x8a2f,	// (0x0006108e) form_midp_image_pane

0xb605,	// (0x00063c64) list_single_midp_pane_ParamLimits

0xb605,	// (0x00063c64) list_single_midp_pane

0xc46c,	// (0x00064acb) form_midp_field_text_pane_t1

0x2df3,	// (0x0005b452) input_focus_pane_cp050

0x302c,	// (0x0005b68b) list_midp_form_text_pane

0x2fd0,	// (0x0005b62f) form_midp_field_choice_group_pane_t1

0x2fde,	// (0x0005b63d) input_focus_pane_cp051

0x2ff2,	// (0x0005b651) list_midp_choice_pane

0x8a2f,	// (0x0006108e) status_idle_pane

0x2fb4,	// (0x0005b613) form_midp_field_time_pane_t1

0x8a25,	// (0x00061084) wait_anim_pane_g2_copy1

0x2fc2,	// (0x0005b621) form_midp_field_time_pane_t2

0x0001,

0x2631,	// (0x0005ac90) aid_navinavi_width_2_pane

0xf800,	// (0x00067e5f) form_midp_field_time_pane_t

0x8a2f,	// (0x0006108e) input_focus_pane_cp052

0x8a2f,	// (0x0006108e) bg_input_focus_pane_cp040

0x2f74,	// (0x0005b5d3) form_midp_gauge_slider_pane_t1

0x2f82,	// (0x0005b5e1) form_midp_gauge_slider_pane_t2

0xc450,	// (0x00064aaf) form_midp_gauge_slider_pane_t3

0xc45e,	// (0x00064abd) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x00067e56) form_midp_gauge_slider_pane_t

0x2fac,	// (0x0005b60b) form_midp_slider_pane

0x8a7d,	// (0x000610dc) bg_input_focus_pane_cp041_ParamLimits

0x8a7d,	// (0x000610dc) bg_input_focus_pane_cp041

0x2f41,	// (0x0005b5a0) form_midp_gauge_wait_pane_t1_ParamLimits

0x2f41,	// (0x0005b5a0) form_midp_gauge_wait_pane_t1

0x2f53,	// (0x0005b5b2) form_midp_gauge_wait_pane_t2_ParamLimits

0x2f53,	// (0x0005b5b2) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x00067e51) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x00067e51) form_midp_gauge_wait_pane_t

0x2f65,	// (0x0005b5c4) form_midp_wait_pane_ParamLimits

0x2f65,	// (0x0005b5c4) form_midp_wait_pane

0x2f09,	// (0x0005b568) form_midp_image_pane_g1

0x2f12,	// (0x0005b571) form_midp_image_pane_t1

0x2f21,	// (0x0005b580) form_midp_image_pane_t2

0x2f30,	// (0x0005b58f) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x00067e4a) form_midp_image_pane_t

0x2f00,	// (0x0005b55f) list_single_midp_pane_g1

0xe13d,	// (0x0006679c) list_single_midp_pane_t1

0xc439,	// (0x00064a98) list_midp_form_item_pane_ParamLimits

0xc439,	// (0x00064a98) list_midp_form_item_pane

0x25d9,	// (0x0005ac38) list_midp_form_item_pane_t1

0x25e8,	// (0x0005ac47) midp_ticker_pane_g1

0x25f4,	// (0x0005ac53) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x00067d97) midp_ticker_pane_g

0xac05,	// (0x00063264) midp_ticker_pane_t1

0xc7fd,	// (0x00064e5c) midp_editing_number_pane_t1

0x44c0,	// (0x0005cb1f) midp_editing_number_pane

0x44cf,	// (0x0005cb2e) midp_ticker_pane

0x4265,	// (0x0005c8c4) ai_message_heading_pane

0x8a2f,	// (0x0006108e) bg_popup_window_pane_cp14

0x426d,	// (0x0005c8cc) listscroll_ai_message_pane

0x41eb,	// (0x0005c84a) ai_message_heading_pane_g1_ParamLimits

0x41eb,	// (0x0005c84a) ai_message_heading_pane_g1

0x41f7,	// (0x0005c856) ai_message_heading_pane_g2_ParamLimits

0x41f7,	// (0x0005c856) ai_message_heading_pane_g2

0x4205,	// (0x0005c864) ai_message_heading_pane_g3_ParamLimits

0x4205,	// (0x0005c864) ai_message_heading_pane_g3

0x4211,	// (0x0005c870) ai_message_heading_pane_g4_ParamLimits

0x4211,	// (0x0005c870) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x00067f8b) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x00067f8b) ai_message_heading_pane_g

0x421d,	// (0x0005c87c) ai_message_heading_pane_t1_ParamLimits

0x421d,	// (0x0005c87c) ai_message_heading_pane_t1

0x4237,	// (0x0005c896) ai_message_heading_pane_t2_ParamLimits

0x4237,	// (0x0005c896) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x00067f94) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x00067f94) ai_message_heading_pane_t

0x424b,	// (0x0005c8aa) bg_popup_heading_pane_cp1_ParamLimits

0x424b,	// (0x0005c8aa) bg_popup_heading_pane_cp1

0x41d9,	// (0x0005c838) list_ai_message_pane_ParamLimits

0x41d9,	// (0x0005c838) list_ai_message_pane

0xdcd6,	// (0x00066335) scroll_pane_cp10

0x4175,	// (0x0005c7d4) list_ai_message_pane_g1

0x417d,	// (0x0005c7dc) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x00067f68) list_ai_message_pane_g

0x4185,	// (0x0005c7e4) list_ai_message_pane_t1_ParamLimits

0x4185,	// (0x0005c7e4) list_ai_message_pane_t1

0x419a,	// (0x0005c7f9) list_ai_message_pane_t2_ParamLimits

0x419a,	// (0x0005c7f9) list_ai_message_pane_t2

0x41af,	// (0x0005c80e) list_ai_message_pane_t3_ParamLimits

0x41af,	// (0x0005c80e) list_ai_message_pane_t3

0x41c4,	// (0x0005c823) list_ai_message_pane_t4_ParamLimits

0x41c4,	// (0x0005c823) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x00067f6d) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x00067f6d) list_ai_message_pane_t

0xc644,	// (0x00064ca3) cell_ai_soft_ind_pane_ParamLimits

0xc644,	// (0x00064ca3) cell_ai_soft_ind_pane

0x2612,	// (0x0005ac71) cell_ai_soft_ind_pane_g1_ParamLimits

0x2612,	// (0x0005ac71) cell_ai_soft_ind_pane_g1

0x8a2f,	// (0x0006108e) grid_highlight_cp1

0x261f,	// (0x0005ac7e) text_secondary_cp56_ParamLimits

0x261f,	// (0x0005ac7e) text_secondary_cp56

0x4133,	// (0x0005c792) example_general_pane_ParamLimits

0x4133,	// (0x0005c792) example_general_pane

0x413f,	// (0x0005c79e) example_parent_pane_g1_ParamLimits

0x413f,	// (0x0005c79e) example_parent_pane_g1

0x414b,	// (0x0005c7aa) example_parent_pane_t1_ParamLimits

0x414b,	// (0x0005c7aa) example_parent_pane_t1

0xb277,	// (0x000638d6) popup_preview_text_window_ParamLimits

0xb277,	// (0x000638d6) popup_preview_text_window

0x2439,	// (0x0005aa98) list_single_pane_cp2_g4

0x8c8c,	// (0x000612eb) bg_popup_preview_window_pane_ParamLimits

0x8c8c,	// (0x000612eb) bg_popup_preview_window_pane

0x3e7c,	// (0x0005c4db) popup_preview_text_window_t1_ParamLimits

0x3e7c,	// (0x0005c4db) popup_preview_text_window_t1

0x3e9a,	// (0x0005c4f9) popup_preview_text_window_t2_ParamLimits

0x3e9a,	// (0x0005c4f9) popup_preview_text_window_t2

0x3ee3,	// (0x0005c542) popup_preview_text_window_t3_ParamLimits

0x3ee3,	// (0x0005c542) popup_preview_text_window_t3

0x3f28,	// (0x0005c587) popup_preview_text_window_t4_ParamLimits

0x3f28,	// (0x0005c587) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x00067f3c) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x00067f3c) popup_preview_text_window_t

0x3fa6,	// (0x0005c605) scroll_pane_cp11

0x2d7f,	// (0x0005b3de) bg_popup_preview_window_pane_g1

0x3e30,	// (0x0005c48f) bg_popup_preview_window_pane_g2

0x3e3a,	// (0x0005c499) bg_popup_preview_window_pane_g3

0x3e44,	// (0x0005c4a3) bg_popup_preview_window_pane_g4

0x3e4e,	// (0x0005c4ad) bg_popup_preview_window_pane_g5

0x3e58,	// (0x0005c4b7) bg_popup_preview_window_pane_g6

0x3e60,	// (0x0005c4bf) bg_popup_preview_window_pane_g7

0x3e68,	// (0x0005c4c7) bg_popup_preview_window_pane_g8

0xedc0,	// (0x0006741f) aid_popup_width_pane

0xb1e7,	// (0x00063846) popup_midp_note_alarm_window_ParamLimits

0xb1e7,	// (0x00063846) popup_midp_note_alarm_window

0x914f,	// (0x000617ae) data_form_pane_ParamLimits

0xa6d2,	// (0x00062d31) form_field_data_pane_g1

0xa6dc,	// (0x00062d3b) form_field_data_pane_t1_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_ParamLimits

0xdb9d,	// (0x000661fc) data_form_wide_pane_ParamLimits

0xdbae,	// (0x0006620d) form_field_data_wide_pane_g1

0xdbba,	// (0x00066219) form_field_data_wide_pane_t1_ParamLimits

0x8ed6,	// (0x00061535) input_focus_pane_cp6_ParamLimits

0xa81d,	// (0x00062e7c) input_popup_find_pane_g1_ParamLimits

0xa81d,	// (0x00062e7c) input_popup_find_pane_g1

0xf1a5,	// (0x00067804) aid_navi_side_left_pane

0xf1ba,	// (0x00067819) aid_navi_side_right_pane

0x3682,	// (0x0005bce1) bg_popup_window_pane_cp30_ParamLimits

0x3682,	// (0x0005bce1) bg_popup_window_pane_cp30

0x36fc,	// (0x0005bd5b) popup_midp_note_alarm_window_g1_ParamLimits

0x36fc,	// (0x0005bd5b) popup_midp_note_alarm_window_g1

0x372c,	// (0x0005bd8b) popup_midp_note_alarm_window_t1_ParamLimits

0x372c,	// (0x0005bd8b) popup_midp_note_alarm_window_t1

0x3990,	// (0x0005bfef) popup_midp_note_alarm_window_t2_ParamLimits

0x3990,	// (0x0005bfef) popup_midp_note_alarm_window_t2

0x3a3e,	// (0x0005c09d) popup_midp_note_alarm_window_t3_ParamLimits

0x3a3e,	// (0x0005c09d) popup_midp_note_alarm_window_t3

0x3a70,	// (0x0005c0cf) popup_midp_note_alarm_window_t4_ParamLimits

0x3a70,	// (0x0005c0cf) popup_midp_note_alarm_window_t4

0x3a96,	// (0x0005c0f5) popup_midp_note_alarm_window_t5_ParamLimits

0x3a96,	// (0x0005c0f5) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x00067ed9) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x00067ed9) popup_midp_note_alarm_window_t

0x3b42,	// (0x0005c1a1) wait_bar_pane_cp1_ParamLimits

0x3b42,	// (0x0005c1a1) wait_bar_pane_cp1

0x8a2f,	// (0x0006108e) wait_anim_pane_copy1

0x8a2f,	// (0x0006108e) wait_border_pane_copy1

0x3367,	// (0x0005b9c6) wait_border_pane_g1_copy1

0xdbd4,	// (0x00066233) form_field_popup_pane_g1

0xa6f6,	// (0x00062d55) form_field_popup_pane_t1_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_cp7_ParamLimits

0x9189,	// (0x000617e8) list_form_pane_ParamLimits

0xdbdc,	// (0x0006623b) form_field_popup_wide_pane_g1

0xdbe4,	// (0x00066243) form_field_popup_wide_pane_t1_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_cp8_ParamLimits

0x9195,	// (0x000617f4) list_form_wide_pane_ParamLimits

0x463a,	// (0x0005cc99) aid_size_cell_graphic_pane

0xa775,	// (0x00062dd4) data_form_pane_t1_ParamLimits

0xb788,	// (0x00063de7) data_form_wide_pane_t1_ParamLimits

0xc0d4,	// (0x00064733) bg_status_flat_pane

0x9e73,	// (0x000624d2) title_pane_t1_ParamLimits

0x8a45,	// (0x000610a4) title_pane_t2_ParamLimits

0x8a6b,	// (0x000610ca) title_pane_t3_ParamLimits

0xf532,	// (0x00067b91) title_pane_t_ParamLimits

0xa948,	// (0x00062fa7) level_1_signal_ParamLimits

0xa95a,	// (0x00062fb9) level_2_signal_ParamLimits

0xa96d,	// (0x00062fcc) level_3_signal_ParamLimits

0xa980,	// (0x00062fdf) level_4_signal_ParamLimits

0xa993,	// (0x00062ff2) level_5_signal_ParamLimits

0xa9a6,	// (0x00063005) level_6_signal_ParamLimits

0xa9b9,	// (0x00063018) level_7_signal_ParamLimits

0xa948,	// (0x00062fa7) level_1_battery_ParamLimits

0xa95a,	// (0x00062fb9) level_2_battery_ParamLimits

0xa96d,	// (0x00062fcc) level_3_battery_ParamLimits

0xa980,	// (0x00062fdf) level_4_battery_ParamLimits

0xa993,	// (0x00062ff2) level_5_battery_ParamLimits

0xa9a6,	// (0x00063005) level_6_battery_ParamLimits

0xa9b9,	// (0x00063018) level_7_battery_ParamLimits

0x3587,	// (0x0005bbe6) bg_status_flat_pane_g1

0x358f,	// (0x0005bbee) bg_status_flat_pane_g2

0x3597,	// (0x0005bbf6) bg_status_flat_pane_g3

0x359f,	// (0x0005bbfe) bg_status_flat_pane_g4

0x35a7,	// (0x0005bc06) bg_status_flat_pane_g5

0x35af,	// (0x0005bc0e) bg_status_flat_pane_g6

0x35b7,	// (0x0005bc16) bg_status_flat_pane_g7

0x9f07,	// (0x00062566) tabs_3_active_pane_t1_ParamLimits

0x9f07,	// (0x00062566) tabs_3_passive_pane_t1_ParamLimits

0x9f21,	// (0x00062580) tabs_4_active_pane_t1_ParamLimits

0x9f21,	// (0x00062580) tabs_4_1_passive_pane_t1_ParamLimits

0xa833,	// (0x00062e92) tabs_2_active_pane_t1_ParamLimits

0xa833,	// (0x00062e92) tabs_2_passive_pane_t1_ParamLimits

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp4_ParamLimits

0xa845,	// (0x00062ea4) tabs_2_long_active_pane_t1_ParamLimits

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp4_ParamLimits

0x0814,	// (0x00058e73) list_single_midp_graphic_pane_t1_ParamLimits

0x8a7d,	// (0x000610dc) bg_active_tab_pane_cp5_ParamLimits

0xa858,	// (0x00062eb7) tabs_3_long_active_pane_t1_ParamLimits

0x2831,	// (0x0005ae90) bg_passive_tab_pane_cp5_ParamLimits

0x0814,	// (0x00058e73) list_single_midp_graphic_pane_t1

0xc0d4,	// (0x00064733) bg_status_flat_pane_ParamLimits

0x29eb,	// (0x0005b04a) indicator_pane_cp2_ParamLimits

0x29eb,	// (0x0005b04a) indicator_pane_cp2

0xc26a,	// (0x000648c9) navi_pane_srt_ParamLimits

0xc26a,	// (0x000648c9) navi_pane_srt

0x2b52,	// (0x0005b1b1) popup_clock_digital_analogue_window_cp1

0x8ac1,	// (0x00061120) indicator_pane_t1

0x250a,	// (0x0005ab69) copy_highlight_pane

0x250a,	// (0x0005ab69) cursor_graphics_pane

0x250a,	// (0x0005ab69) graphic_within_text_pane

0x250a,	// (0x0005ab69) link_highlight_pane

0x3f69,	// (0x0005c5c8) popup_preview_text_window_t5_ParamLimits

0x3f69,	// (0x0005c5c8) popup_preview_text_window_t5

0x263b,	// (0x0005ac9a) cursor_digital_pane

0x263b,	// (0x0005ac9a) cursor_primary_pane

0x264c,	// (0x0005acab) cursor_primary_small_pane

0x2654,	// (0x0005acb3) cursor_secondary_pane

0x265c,	// (0x0005acbb) cursor_title_pane

0x263b,	// (0x0005ac9a) link_highlight_digital_pane

0x2643,	// (0x0005aca2) link_highlight_primary_pane

0x264c,	// (0x0005acab) link_highlight_primary_small_pane

0x2654,	// (0x0005acb3) link_highlight_secondary_pane

0x265c,	// (0x0005acbb) link_highlight_title_pane

0x263b,	// (0x0005ac9a) copy_highlight_digital_pane

0x263b,	// (0x0005ac9a) copy_highlight_primary_pane

0x264c,	// (0x0005acab) copy_highlight_primary_small_pane

0x2654,	// (0x0005acb3) copy_highlight_secondary_pane

0x265c,	// (0x0005acbb) copy_highlight_title_pane

0x2654,	// (0x0005acb3) graphic_text_digital_pane

0x3625,	// (0x0005bc84) graphic_text_primary_pane

0x362e,	// (0x0005bc8d) graphic_text_primary_small_pane

0x264c,	// (0x0005acab) graphic_text_secondary_pane

0x263b,	// (0x0005ac9a) graphic_text_title_pane

0xac17,	// (0x00063276) cursor_primary_pane_g1

0x3617,	// (0x0005bc76) cursor_text_primary_t1

0xc4c4,	// (0x00064b23) cursor_primary_small_pane_g1

0x3609,	// (0x0005bc68) cursor_text_primary_small_t1

0xc4ba,	// (0x00064b19) cursor_primary_small_pane_g1_copy1

0x35f1,	// (0x0005bc50) cursor_text_primary_small_t1_copy1

0x35cf,	// (0x0005bc2e) cursor_text_title_t1

0xc4b0,	// (0x00064b0f) cursor_title_pane_g1

0xac17,	// (0x00063276) cursor_digital_pane_g1

0x266e,	// (0x0005accd) cursor_text_digital_t1

0x267c,	// (0x0005acdb) link_highlight_primary_pane_g1

0x3578,	// (0x0005bbd7) link_highlight_primary_pane_t1

0x267c,	// (0x0005acdb) link_highlight_primary_small_pane_g1

0x2684,	// (0x0005ace3) link_highlight_primary_small_pane_t1

0x2693,	// (0x0005acf2) link_highlight_secondary_pane_g1

0x269b,	// (0x0005acfa) link_highlight_secondary_pane_t1

0x34ec,	// (0x0005bb4b) link_highlight_title_pane_g1

0x34f4,	// (0x0005bb53) link_highlight_title_pane_t1

0x34d5,	// (0x0005bb34) link_highlight_digital_pane_g1

0x34dd,	// (0x0005bb3c) link_highlight_digital_pane_t1

0x339d,	// (0x0005b9fc) copy_highlight_primary_pane_g1

0x33b4,	// (0x0005ba13) copy_highlight_primary_pane_t1

0x339d,	// (0x0005b9fc) copy_highlight_primary_small_pane_g1

0x33a5,	// (0x0005ba04) copy_highlight_primary_small_pane_t1

0x26aa,	// (0x0005ad09) copy_highlight_secondary_pane_g1

0x26b2,	// (0x0005ad11) copy_highlight_secondary_pane_t1

0x3386,	// (0x0005b9e5) copy_highlight_title_pane_g1

0x338e,	// (0x0005b9ed) copy_highlight_title_pane_t1

0x339d,	// (0x0005b9fc) copy_highlight_digital_pane_g1

0x480c,	// (0x0005ce6b) copy_highlight_digital_pane_t1

0x4760,	// (0x0005cdbf) graphic_text_primary_pane_g1

0x47f0,	// (0x0005ce4f) graphic_text_primary_pane_t1

0x47fe,	// (0x0005ce5d) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x00068008) graphic_text_primary_pane_t

0x47cc,	// (0x0005ce2b) graphic_text_primary_small_pane_g1

0x47d4,	// (0x0005ce33) graphic_text_primary_small_pane_t1

0x47e2,	// (0x0005ce41) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x00068003) graphic_text_primary_small_pane_t

0x47a8,	// (0x0005ce07) graphic_text_secondary_pane_g1

0x47b0,	// (0x0005ce0f) graphic_text_secondary_pane_t1

0x47be,	// (0x0005ce1d) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x00067ffe) graphic_text_secondary_pane_t

0x4784,	// (0x0005cde3) graphic_text_title_pane_g1

0x478c,	// (0x0005cdeb) graphic_text_title_pane_t1

0x479a,	// (0x0005cdf9) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x00067ff9) graphic_text_title_pane_t

0x4760,	// (0x0005cdbf) graphic_text_digital_pane_g1

0x4768,	// (0x0005cdc7) graphic_text_digital_pane_t1

0x4776,	// (0x0005cdd5) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x00067ff4) graphic_text_digital_pane_t

0x8a7d,	// (0x000610dc) navi_icon_pane_srt_ParamLimits

0x8a7d,	// (0x000610dc) navi_icon_pane_srt

0x8a2f,	// (0x0006108e) navi_midp_pane_srt

0x8a2f,	// (0x0006108e) navi_navi_pane_srt

0x8a7d,	// (0x000610dc) navi_text_pane_srt_ParamLimits

0x8a7d,	// (0x000610dc) navi_text_pane_srt

0x472b,	// (0x0005cd8a) navi_navi_icon_text_pane_srt

0x4733,	// (0x0005cd92) navi_navi_pane_srt_g1_ParamLimits

0x4733,	// (0x0005cd92) navi_navi_pane_srt_g1

0x4745,	// (0x0005cda4) navi_navi_pane_srt_g2_ParamLimits

0x4745,	// (0x0005cda4) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x00067fef) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x00067fef) navi_navi_pane_srt_g

0x4757,	// (0x0005cdb6) navi_navi_tabs_pane_srt

0x472b,	// (0x0005cd8a) navi_navi_text_pane_srt

0x472b,	// (0x0005cd8a) navi_navi_volume_pane_srt

0x471c,	// (0x0005cd7b) navi_navi_text_pane_srt_t1

0x0c57,	// (0x000592b6) navi_navi_volume_pane_srt_g1

0x0c5f,	// (0x000592be) volume_small_pane_srt_ParamLimits

0x0c5f,	// (0x000592be) volume_small_pane_srt

0xf480,	// (0x00067adf) volume_small_pane_srt_g1_ParamLimits

0xf480,	// (0x00067adf) volume_small_pane_srt_g1

0xf490,	// (0x00067aef) volume_small_pane_srt_g2_ParamLimits

0xf490,	// (0x00067aef) volume_small_pane_srt_g2

0xf4a1,	// (0x00067b00) volume_small_pane_srt_g3_ParamLimits

0xf4a1,	// (0x00067b00) volume_small_pane_srt_g3

0xf4b2,	// (0x00067b11) volume_small_pane_srt_g4_ParamLimits

0xf4b2,	// (0x00067b11) volume_small_pane_srt_g4

0xf4c3,	// (0x00067b22) volume_small_pane_srt_g5_ParamLimits

0xf4c3,	// (0x00067b22) volume_small_pane_srt_g5

0xf4d4,	// (0x00067b33) volume_small_pane_srt_g6_ParamLimits

0xf4d4,	// (0x00067b33) volume_small_pane_srt_g6

0xf4e5,	// (0x00067b44) volume_small_pane_srt_g7_ParamLimits

0xf4e5,	// (0x00067b44) volume_small_pane_srt_g7

0xf4f6,	// (0x00067b55) volume_small_pane_srt_g8_ParamLimits

0xf4f6,	// (0x00067b55) volume_small_pane_srt_g8

0xf507,	// (0x00067b66) volume_small_pane_srt_g9_ParamLimits

0xf507,	// (0x00067b66) volume_small_pane_srt_g9

0xf518,	// (0x00067b77) volume_small_pane_srt_g10_ParamLimits

0xf518,	// (0x00067b77) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x00067d9c) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x00067d9c) volume_small_pane_srt_g

0x8dcf,	// (0x0006142e) query_popup_data_pane_cp2

0x4702,	// (0x0005cd61) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4702,	// (0x0005cd61) navi_navi_icon_text_pane_srt_t1

0x3625,	// (0x0005bc84) navi_tabs_2_long_pane_srt

0x3625,	// (0x0005bc84) navi_tabs_2_pane_srt

0x3625,	// (0x0005bc84) navi_tabs_3_long_pane_srt

0x3625,	// (0x0005bc84) navi_tabs_3_pane_srt

0x3625,	// (0x0005bc84) navi_tabs_4_pane_srt

0x0c37,	// (0x00059296) tabs_2_active_pane_srt_ParamLimits

0x0c37,	// (0x00059296) tabs_2_active_pane_srt

0x0c47,	// (0x000592a6) tabs_2_passive_pane_srt_ParamLimits

0x0c47,	// (0x000592a6) tabs_2_passive_pane_srt

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp1_srt

0x46ce,	// (0x0005cd2d) bg_passive_tab_pane_g1_cp1_srt

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp1_srt

0x46d7,	// (0x0005cd36) bg_passive_tab_pane_g3_cp1_srt

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp1_srt_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp1_srt

0x46e0,	// (0x0005cd3f) tabs_2_active_pane_srt_g1

0xc92d,	// (0x00064f8c) tabs_2_active_pane_srt_t1_ParamLimits

0xc92d,	// (0x00064f8c) tabs_2_active_pane_srt_t1

0x46ce,	// (0x0005cd2d) bg_active_tab_pane_g1_cp1_srt

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp1_srt

0x46d7,	// (0x0005cd36) bg_active_tab_pane_g3_cp1_srt

0x0c04,	// (0x00059263) tabs_3_active_pane_srt_ParamLimits

0x0c04,	// (0x00059263) tabs_3_active_pane_srt

0x0c15,	// (0x00059274) tabs_3_passive_pane_cp_srt_ParamLimits

0x0c15,	// (0x00059274) tabs_3_passive_pane_cp_srt

0x0c26,	// (0x00059285) tabs_3_passive_pane_srt_ParamLimits

0x0c26,	// (0x00059285) tabs_3_passive_pane_srt

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2df3,	// (0x0005b452) bg_passive_tab_pane_cp2_srt

0x26c1,	// (0x0005ad20) bg_passive_tab_pane_g1_cp2_srt

0x2153,	// (0x0005a7b2) bg_passive_tab_pane_g2_cp2_srt

0x26ca,	// (0x0005ad29) bg_passive_tab_pane_g3_cp2_srt

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp2_srt_ParamLimits

0x8bb0,	// (0x0006120f) bg_active_tab_pane_cp2_srt

0x46b4,	// (0x0005cd13) tabs_3_active_pane_srt_g1

0xc917,	// (0x00064f76) tabs_3_active_pane_srt_t1_ParamLimits

0xc917,	// (0x00064f76) tabs_3_active_pane_srt_t1

0x26c1,	// (0x0005ad20) bg_active_tab_pane_g1_cp2_srt

0x2153,	// (0x0005a7b2) bg_active_tab_pane_g2_cp2_srt

0x26ca,	// (0x0005ad29) bg_active_tab_pane_g3_cp2_srt

0x0bbc,	// (0x0005921b) tabs_4_active_pane_srt_ParamLimits

0x0bbc,	// (0x0005921b) tabs_4_active_pane_srt

0x0bce,	// (0x0005922d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0bce,	// (0x0005922d) tabs_4_passive_pane_cp2_srt

0x0133,	// (0x00058792) aid_size_cell_toolbar

0x431f,	// (0x0005c97e) main_idle_act_pane_ParamLimits

0x031e,	// (0x0005897d) popup_large_graphic_colour_window_ParamLimits

0xb53b,	// (0x00063b9a) popup_toolbar_window_ParamLimits

0xb53b,	// (0x00063b9a) popup_toolbar_window

0x37cd,	// (0x0005be2c) list_single_graphic_2heading_pane_ParamLimits

0x37cd,	// (0x0005be2c) list_single_graphic_2heading_pane

0xdeae,	// (0x0006650d) aid_size_cell_apps_grid_lsc_pane

0xdec0,	// (0x0006651f) aid_size_cell_apps_grid_prt_pane

0x2831,	// (0x0005ae90) bg_wml_button_pane_cp1_ParamLimits

0x2831,	// (0x0005ae90) bg_wml_button_pane_cp1

0xc46c,	// (0x00064acb) form_midp_field_text_pane_t1_ParamLimits

0x2df3,	// (0x0005b452) input_focus_pane_cp050_ParamLimits

0x302c,	// (0x0005b68b) list_midp_form_text_pane_ParamLimits

0x2fde,	// (0x0005b63d) input_focus_pane_cp051_ParamLimits

0x2ff2,	// (0x0005b651) list_midp_choice_pane_ParamLimits

0x2eac,	// (0x0005b50b) list_single_2graphic_pane_cp3_ParamLimits

0x2eac,	// (0x0005b50b) list_single_2graphic_pane_cp3

0x2ec2,	// (0x0005b521) list_single_midp_graphic_pane_ParamLimits

0x2ec2,	// (0x0005b521) list_single_midp_graphic_pane

0xf039,	// (0x00067698) list_single_graphic_2heading_pane_g1_ParamLimits

0xf039,	// (0x00067698) list_single_graphic_2heading_pane_g1

0xf045,	// (0x000676a4) list_single_graphic_2heading_pane_g4_ParamLimits

0xf045,	// (0x000676a4) list_single_graphic_2heading_pane_g4

0xf051,	// (0x000676b0) list_single_graphic_2heading_pane_g5_ParamLimits

0xf051,	// (0x000676b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x00067def) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x00067def) list_single_graphic_2heading_pane_g

0xf05d,	// (0x000676bc) list_single_graphic_2heading_pane_t1_ParamLimits

0xf05d,	// (0x000676bc) list_single_graphic_2heading_pane_t1

0xf071,	// (0x000676d0) list_single_graphic_2heading_pane_t2_ParamLimits

0xf071,	// (0x000676d0) list_single_graphic_2heading_pane_t2

0xf08d,	// (0x000676ec) list_single_graphic_2heading_pane_t3_ParamLimits

0xf08d,	// (0x000676ec) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x00067df6) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x00067df6) list_single_graphic_2heading_pane_t

0x2ca5,	// (0x0005b304) bg_popup_sub_pane_cp2

0x2ccf,	// (0x0005b32e) grid_toobar_pane

0x0784,	// (0x00058de3) cell_toolbar_pane_ParamLimits

0x0784,	// (0x00058de3) cell_toolbar_pane

0x2d23,	// (0x0005b382) cell_toolbar_pane_g1_ParamLimits

0x2d23,	// (0x0005b382) cell_toolbar_pane_g1

0x2d37,	// (0x0005b396) cell_toolbar_pane_g2_ParamLimits

0x2d37,	// (0x0005b396) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x00067e04) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x00067e04) cell_toolbar_pane_g

0x2d59,	// (0x0005b3b8) grid_highlight_pane_cp2_ParamLimits

0x2d59,	// (0x0005b3b8) grid_highlight_pane_cp2

0x2d73,	// (0x0005b3d2) toolbar_button_pane

0x2d7f,	// (0x0005b3de) toolbar_button_pane_g1

0x2d87,	// (0x0005b3e6) toolbar_button_pane_g2

0x2d8f,	// (0x0005b3ee) toolbar_button_pane_g3

0x2d97,	// (0x0005b3f6) toolbar_button_pane_g4

0x2d9f,	// (0x0005b3fe) toolbar_button_pane_g5

0x2da7,	// (0x0005b406) toolbar_button_pane_g6

0x2daf,	// (0x0005b40e) toolbar_button_pane_g7

0x2db7,	// (0x0005b416) toolbar_button_pane_g8

0x2dbf,	// (0x0005b41e) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x00067e09) toolbar_button_pane_g

0x07bc,	// (0x00058e1b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x07bc,	// (0x00058e1b) list_single_2graphic_pane_g1_cp3

0xb593,	// (0x00063bf2) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb593,	// (0x00063bf2) list_single_2graphic_pane_g2_cp3

0x07d9,	// (0x00058e38) list_single_2graphic_pane_g3_cp3

0x07e1,	// (0x00058e40) list_single_2graphic_pane_g4_cp3_ParamLimits

0x07e1,	// (0x00058e40) list_single_2graphic_pane_g4_cp3

0x07ed,	// (0x00058e4c) list_single_2graphic_pane_t1_cp3_ParamLimits

0x07ed,	// (0x00058e4c) list_single_2graphic_pane_t1_cp3

0x0808,	// (0x00058e67) list_single_midp_graphic_pane_g2_ParamLimits

0x0808,	// (0x00058e67) list_single_midp_graphic_pane_g2

0xf029,	// (0x00067688) aid_zoom_text_primary

0xf031,	// (0x00067690) aid_zoom_text_secondary

0xac6f,	// (0x000632ce) status_small_pane_g7_ParamLimits

0xac6f,	// (0x000632ce) status_small_pane_g7

0xac92,	// (0x000632f1) status_small_pane_t1_ParamLimits

0x9e43,	// (0x000624a2) title_pane_g2

0x0003,

0xf529,	// (0x00067b88) title_pane_g

0xa0e3,	// (0x00062742) aid_size_cell_colour_1_pane_ParamLimits

0xa0e3,	// (0x00062742) aid_size_cell_colour_1_pane

0xa0f7,	// (0x00062756) aid_size_cell_colour_2_pane_ParamLimits

0xa0f7,	// (0x00062756) aid_size_cell_colour_2_pane

0xa10b,	// (0x0006276a) aid_size_cell_colour_3_pane_ParamLimits

0xa10b,	// (0x0006276a) aid_size_cell_colour_3_pane

0xa11f,	// (0x0006277e) aid_size_cell_colour_4_pane_ParamLimits

0xa11f,	// (0x0006277e) aid_size_cell_colour_4_pane

0xf0e1,	// (0x00067740) title_pane_stacon_g1_ParamLimits

0xf0e1,	// (0x00067740) title_pane_stacon_g1

0x340b,	// (0x0005ba6a) popup_note_wait_window_g3_ParamLimits

0x340b,	// (0x0005ba6a) popup_note_wait_window_g3

0x3482,	// (0x0005bae1) popup_note_wait_window_t5_ParamLimits

0x3482,	// (0x0005bae1) popup_note_wait_window_t5

0x8a2f,	// (0x0006108e) main_feb_china_hwr_fs_writing_pane

0xaece,	// (0x0006352d) popup_feb_china_hwr_fs_window_ParamLimits

0xaece,	// (0x0006352d) popup_feb_china_hwr_fs_window

0xb5a4,	// (0x00063c03) aid_size_cell_hwr_fs_ParamLimits

0xb5a4,	// (0x00063c03) aid_size_cell_hwr_fs

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp3_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp3

0xb5b9,	// (0x00063c18) grid_hwr_fs_pane_ParamLimits

0xb5b9,	// (0x00063c18) grid_hwr_fs_pane

0x0857,	// (0x00058eb6) linegrid_hwr_fs_pane_ParamLimits

0x0857,	// (0x00058eb6) linegrid_hwr_fs_pane

0xb5d1,	// (0x00063c30) cell_hwr_fs_pane_ParamLimits

0xb5d1,	// (0x00063c30) cell_hwr_fs_pane

0x2dff,	// (0x0005b45e) linegrid_hwr_fs_pane_g1_ParamLimits

0x2dff,	// (0x0005b45e) linegrid_hwr_fs_pane_g1

0xc40d,	// (0x00064a6c) linegrid_hwr_fs_pane_g2_ParamLimits

0xc40d,	// (0x00064a6c) linegrid_hwr_fs_pane_g2

0x2e1d,	// (0x0005b47c) linegrid_hwr_fs_pane_g3_ParamLimits

0x2e1d,	// (0x0005b47c) linegrid_hwr_fs_pane_g3

0x088b,	// (0x00058eea) linegrid_hwr_fs_pane_g4_ParamLimits

0x088b,	// (0x00058eea) linegrid_hwr_fs_pane_g4

0x08a9,	// (0x00058f08) linegrid_hwr_fs_pane_g5_ParamLimits

0x08a9,	// (0x00058f08) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x00067e2f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x00067e2f) linegrid_hwr_fs_pane_g

0x2e29,	// (0x0005b488) cell_hwr_fs_pane_g1_ParamLimits

0x2e29,	// (0x0005b488) cell_hwr_fs_pane_g1

0x2be0,	// (0x0005b23f) cell_hwr_fs_pane_g2_ParamLimits

0x2be0,	// (0x0005b23f) cell_hwr_fs_pane_g2

0xc41f,	// (0x00064a7e) cell_hwr_fs_pane_g3_ParamLimits

0xc41f,	// (0x00064a7e) cell_hwr_fs_pane_g3

0xc42c,	// (0x00064a8b) cell_hwr_fs_pane_g4_ParamLimits

0xc42c,	// (0x00064a8b) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x00067e3a) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x00067e3a) cell_hwr_fs_pane_g

0xb5f7,	// (0x00063c56) cell_hwr_fs_pane_t1

0x8a2f,	// (0x0006108e) grid_highlight_pane_cp6

0x8a2f,	// (0x0006108e) main_idle_act2_pane

0xdcbd,	// (0x0006631c) aid_inside_area_popup_secondary

0xc4e4,	// (0x00064b43) aid_inside_area_window_primary_ParamLimits

0xc4e4,	// (0x00064b43) aid_inside_area_window_primary

0x481b,	// (0x0005ce7a) ai2_news_ticker_pane

0x4823,	// (0x0005ce82) aid_size_cell_ai1_link_ParamLimits

0x4823,	// (0x0005ce82) aid_size_cell_ai1_link

0x483d,	// (0x0005ce9c) popup_ai2_data_window_ParamLimits

0x483d,	// (0x0005ce9c) popup_ai2_data_window

0x485b,	// (0x0005ceba) popup_ai2_link_window_ParamLimits

0x485b,	// (0x0005ceba) popup_ai2_link_window

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp4_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp4

0x4871,	// (0x0005ced0) grid_ai2_link_pane_ParamLimits

0x4871,	// (0x0005ced0) grid_ai2_link_pane

0x4888,	// (0x0005cee7) popup_ai2_link_window_g1_ParamLimits

0x4888,	// (0x0005cee7) popup_ai2_link_window_g1

0x4894,	// (0x0005cef3) popup_ai2_link_window_g2_ParamLimits

0x4894,	// (0x0005cef3) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0006800d) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0006800d) popup_ai2_link_window_g

0x48a5,	// (0x0005cf04) ai2_mp_button_pane

0x48ad,	// (0x0005cf0c) ai2_mp_volume_pane

0x2fde,	// (0x0005b63d) bg_popup_sub_pane_cp5_ParamLimits

0x2fde,	// (0x0005b63d) bg_popup_sub_pane_cp5

0x48b5,	// (0x0005cf14) heading_ai2_gene_pane_ParamLimits

0x48b5,	// (0x0005cf14) heading_ai2_gene_pane

0x48c1,	// (0x0005cf20) list_ai2_gene_pane_ParamLimits

0x48c1,	// (0x0005cf20) list_ai2_gene_pane

0x4909,	// (0x0005cf68) cell_ai2_link_pane_ParamLimits

0x4909,	// (0x0005cf68) cell_ai2_link_pane

0x491f,	// (0x0005cf7e) cell_ai2_link_pane_g1

0x8a2f,	// (0x0006108e) grid_highlight_pane_cp7

0x0c74,	// (0x000592d3) ai2_mp_volume_pane_g1

0x49f2,	// (0x0005d051) ai2_mp_volume_pane_g2

0x4967,	// (0x0005cfc6) list_ai2_gene_pane_t1

0x49fa,	// (0x0005d059) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x00068026) ai2_mp_volume_pane_g

0x0c7c,	// (0x000592db) volume_small_pane_cp3

0x4a02,	// (0x0005d061) aid_size_cell_ai2_button

0x4a0a,	// (0x0005d069) grid_ai2_button_pane

0x4a13,	// (0x0005d072) cell_ai2_button_pane_ParamLimits

0x4a13,	// (0x0005d072) cell_ai2_button_pane

0x8a25,	// (0x00061084) cell_ai2_button_pane_g1

0x8a2f,	// (0x0006108e) grid_highlight_pane_cp8

0x49b2,	// (0x0005d011) ai2_gene_pane_t1_ParamLimits

0x49b2,	// (0x0005d011) ai2_gene_pane_t1

0xae5e,	// (0x000634bd) aid_height_parent_landscape

0xc68b,	// (0x00064cea) aid_height_set_list

0x431f,	// (0x0005c97e) aid_size_parent

0x463a,	// (0x0005cc99) aid_size_cell_graphic_pane_ParamLimits

0x48d1,	// (0x0005cf30) popup_ai2_data_window_g1_ParamLimits

0x48d1,	// (0x0005cf30) popup_ai2_data_window_g1

0x48dd,	// (0x0005cf3c) ai2_news_ticker_pane_g1

0x48e5,	// (0x0005cf44) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x00068012) ai2_news_ticker_pane_g

0x48ed,	// (0x0005cf4c) ai2_news_ticker_pane_t1

0x48fb,	// (0x0005cf5a) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x00068017) ai2_news_ticker_pane_t

0x4928,	// (0x0005cf87) heading_ai2_gene_pane_g1

0x4930,	// (0x0005cf8f) heading_ai2_gene_pane_t1_ParamLimits

0x4930,	// (0x0005cf8f) heading_ai2_gene_pane_t1

0x4945,	// (0x0005cfa4) list_highlight_pane_cp6

0x494d,	// (0x0005cfac) ai2_gene_pane_ParamLimits

0x494d,	// (0x0005cfac) ai2_gene_pane

0x4975,	// (0x0005cfd4) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0006801c) list_ai2_gene_pane_t

0x4983,	// (0x0005cfe2) list_highlight_pane_cp8_ParamLimits

0x4983,	// (0x0005cfe2) list_highlight_pane_cp8

0x4994,	// (0x0005cff3) ai2_gene_pane_g1_ParamLimits

0x4994,	// (0x0005cff3) ai2_gene_pane_g1

0x49a6,	// (0x0005d005) ai2_gene_pane_g2_ParamLimits

0x49a6,	// (0x0005d005) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x00068021) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x00068021) ai2_gene_pane_g

0x90f1,	// (0x00061750) scroll_pane_cp12

0xae1b,	// (0x0006347a) control_pane_t3_ParamLimits

0xae1b,	// (0x0006347a) control_pane_t3

0xac83,	// (0x000632e2) status_small_pane_g8_ParamLimits

0xac83,	// (0x000632e2) status_small_pane_g8

0xaf70,	// (0x000635cf) popup_find_window_ParamLimits

0xb227,	// (0x00063886) popup_note_image_window_ParamLimits

0xe06d,	// (0x000666cc) list_double2_graphic_pane_vc_g1_ParamLimits

0xe06d,	// (0x000666cc) list_double2_graphic_pane_vc_g1

0x2d0b,	// (0x0005b36a) list_double2_graphic_pane_vc_g2_ParamLimits

0x2d0b,	// (0x0005b36a) list_double2_graphic_pane_vc_g2

0x2d17,	// (0x0005b376) list_double2_graphic_pane_vc_g3_ParamLimits

0x2d17,	// (0x0005b376) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x00067dfd) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x00067dfd) list_double2_graphic_pane_vc_g

0xe079,	// (0x000666d8) list_double2_graphic_pane_vc_t1_ParamLimits

0xe079,	// (0x000666d8) list_double2_graphic_pane_vc_t1

0x2d0b,	// (0x0005b36a) list_single_heading_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_heading_pane_vc_g1

0x2d17,	// (0x0005b376) list_single_heading_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_single_heading_pane_vc_g

0xe08f,	// (0x000666ee) list_single_heading_pane_vc_t1_ParamLimits

0xe08f,	// (0x000666ee) list_single_heading_pane_vc_t1

0xe0a5,	// (0x00066704) list_single_heading_pane_vc_t2_ParamLimits

0xe0a5,	// (0x00066704) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x00067e1e) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x00067e1e) list_single_heading_pane_vc_t

0xe0b7,	// (0x00066716) list_setting_number_pane_vc_g1_ParamLimits

0xe0b7,	// (0x00066716) list_setting_number_pane_vc_g1

0xe0c3,	// (0x00066722) list_setting_number_pane_vc_g2_ParamLimits

0xe0c3,	// (0x00066722) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x00067e23) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x00067e23) list_setting_number_pane_vc_g

0xe0cf,	// (0x0006672e) list_setting_number_pane_vc_t1_ParamLimits

0xe0cf,	// (0x0006672e) list_setting_number_pane_vc_t1

0xe0e3,	// (0x00066742) list_setting_number_pane_vc_t2_ParamLimits

0xe0e3,	// (0x00066742) list_setting_number_pane_vc_t2

0xe0ff,	// (0x0006675e) list_setting_number_pane_vc_t3_ParamLimits

0xe0ff,	// (0x0006675e) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x00067e28) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x00067e28) list_setting_number_pane_vc_t

0xe12b,	// (0x0006678a) set_value_pane_vc_ParamLimits

0xe12b,	// (0x0006678a) set_value_pane_vc

0x37cd,	// (0x0005be2c) list_double2_graphic_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double2_graphic_pane_vc

0x37cd,	// (0x0005be2c) list_double2_large_graphic_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double2_large_graphic_pane_vc

0x37cd,	// (0x0005be2c) list_double2_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double2_pane_vc

0x37cd,	// (0x0005be2c) list_double_graphic_heading_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_graphic_heading_pane_vc

0x37cd,	// (0x0005be2c) list_double_graphic_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_graphic_pane_vc

0x37cd,	// (0x0005be2c) list_double_heading_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_heading_pane_vc

0x37e1,	// (0x0005be40) list_double_large_graphic_pane_vc_ParamLimits

0x37e1,	// (0x0005be40) list_double_large_graphic_pane_vc

0x37cd,	// (0x0005be2c) list_double_number_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_number_pane_vc

0x37cd,	// (0x0005be2c) list_double_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_pane_vc

0x37cd,	// (0x0005be2c) list_double_time_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_double_time_pane_vc

0x37cd,	// (0x0005be2c) list_setting_number_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_setting_number_pane_vc

0x37cd,	// (0x0005be2c) list_setting_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_setting_pane_vc

0x37cd,	// (0x0005be2c) list_single_graphic_heading_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_single_graphic_heading_pane_vc

0x37cd,	// (0x0005be2c) list_single_heading_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_single_heading_pane_vc

0x37cd,	// (0x0005be2c) list_single_number_heading_pane_vc_ParamLimits

0x37cd,	// (0x0005be2c) list_single_number_heading_pane_vc

0xe174,	// (0x000667d3) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe174,	// (0x000667d3) list_double_graphic_heading_pane_vc_g1

0x2d0b,	// (0x0005b36a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x2d0b,	// (0x0005b36a) list_double_graphic_heading_pane_vc_g2

0x2d17,	// (0x0005b376) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2d17,	// (0x0005b376) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ce,	// (0x0006802d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ce,	// (0x0006802d) list_double_graphic_heading_pane_vc_g

0xe180,	// (0x000667df) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe180,	// (0x000667df) list_double_graphic_heading_pane_vc_t1

0xe196,	// (0x000667f5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe196,	// (0x000667f5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d5,	// (0x00068034) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d5,	// (0x00068034) list_double_graphic_heading_pane_vc_t

0xe0b7,	// (0x00066716) list_setting_pane_vc_g1_ParamLimits

0xe0b7,	// (0x00066716) list_setting_pane_vc_g1

0xe0c3,	// (0x00066722) list_setting_pane_vc_g2_ParamLimits

0xe0c3,	// (0x00066722) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x00067e23) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x00067e23) list_setting_pane_vc_g

0xe1b4,	// (0x00066813) list_setting_pane_vc_t1_ParamLimits

0xe1b4,	// (0x00066813) list_setting_pane_vc_t1

0xe1d0,	// (0x0006682f) list_setting_pane_vc_t2_ParamLimits

0xe1d0,	// (0x0006682f) list_setting_pane_vc_t2

0x0001,

0xfa18,	// (0x00068077) list_setting_pane_vc_t_ParamLimits

0xfa18,	// (0x00068077) list_setting_pane_vc_t

0xe12b,	// (0x0006678a) set_value_pane_cp_vc_ParamLimits

0xe12b,	// (0x0006678a) set_value_pane_cp_vc

0x2d0b,	// (0x0005b36a) list_single_number_heading_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_number_heading_pane_vc_g1

0x2d17,	// (0x0005b376) list_single_number_heading_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_single_number_heading_pane_vc_g

0xe1ec,	// (0x0006684b) list_single_number_heading_pane_vc_t1_ParamLimits

0xe1ec,	// (0x0006684b) list_single_number_heading_pane_vc_t1

0xdaf2,	// (0x00066151) list_single_number_heading_pane_vc_t2_ParamLimits

0xdaf2,	// (0x00066151) list_single_number_heading_pane_vc_t2

0xdb04,	// (0x00066163) list_single_number_heading_pane_vc_t3_ParamLimits

0xdb04,	// (0x00066163) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1d,	// (0x0006807c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1d,	// (0x0006807c) list_single_number_heading_pane_vc_t

0xe06d,	// (0x000666cc) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe06d,	// (0x000666cc) list_single_graphic_heading_pane_vc_g1

0x2d0b,	// (0x0005b36a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2d0b,	// (0x0005b36a) list_single_graphic_heading_pane_vc_g4

0x2d17,	// (0x0005b376) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2d17,	// (0x0005b376) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x00067dfd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x00067dfd) list_single_graphic_heading_pane_vc_g

0xe202,	// (0x00066861) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe202,	// (0x00066861) list_single_graphic_heading_pane_vc_t1

0xe218,	// (0x00066877) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe218,	// (0x00066877) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00068083) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00068083) list_single_graphic_heading_pane_vc_t

0x2d0b,	// (0x0005b36a) list_double2_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_double2_pane_vc_g1

0x2d17,	// (0x0005b376) list_double2_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_double2_pane_vc_g

0xe15e,	// (0x000667bd) list_double2_pane_vc_t1_ParamLimits

0xe15e,	// (0x000667bd) list_double2_pane_vc_t1

0x385e,	// (0x0005bebd) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x385e,	// (0x0005bebd) list_double2_large_graphic_pane_vc_g1

0x2d0b,	// (0x0005b36a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2d0b,	// (0x0005b36a) list_double2_large_graphic_pane_vc_g2

0x2d17,	// (0x0005b376) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2d17,	// (0x0005b376) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c5,	// (0x00067c24) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c5,	// (0x00067c24) list_double2_large_graphic_pane_vc_g

0xdb16,	// (0x00066175) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xdb16,	// (0x00066175) list_double2_large_graphic_pane_vc_t1

0xe22a,	// (0x00066889) list_double_time_pane_vc_g1_ParamLimits

0xe22a,	// (0x00066889) list_double_time_pane_vc_g1

0xe236,	// (0x00066895) list_double_time_pane_vc_g2_ParamLimits

0xe236,	// (0x00066895) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x00068088) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x00068088) list_double_time_pane_vc_g

0xe242,	// (0x000668a1) list_double_time_pane_vc_t1_ParamLimits

0xe242,	// (0x000668a1) list_double_time_pane_vc_t1

0xe26c,	// (0x000668cb) list_double_time_pane_vc_t2_ParamLimits

0xe26c,	// (0x000668cb) list_double_time_pane_vc_t2

0xe2b5,	// (0x00066914) list_double_time_pane_vc_t3_ParamLimits

0xe2b5,	// (0x00066914) list_double_time_pane_vc_t3

0xe2c7,	// (0x00066926) list_double_time_pane_vc_t4_ParamLimits

0xe2c7,	// (0x00066926) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x0006808d) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x0006808d) list_double_time_pane_vc_t

0x2d0b,	// (0x0005b36a) list_double_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_double_pane_vc_g1

0x2d17,	// (0x0005b376) list_double_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_double_pane_vc_g

0xe2db,	// (0x0006693a) list_double_pane_vc_t1_ParamLimits

0xe2db,	// (0x0006693a) list_double_pane_vc_t1

0xe2ef,	// (0x0006694e) list_double_pane_vc_t2_ParamLimits

0xe2ef,	// (0x0006694e) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00068096) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00068096) list_double_pane_vc_t

0x2d0b,	// (0x0005b36a) list_double_number_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_double_number_pane_vc_g1

0x2d17,	// (0x0005b376) list_double_number_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_double_number_pane_vc_g

0xe14c,	// (0x000667ab) list_double_number_pane_vc_t1_ParamLimits

0xe14c,	// (0x000667ab) list_double_number_pane_vc_t1

0xe305,	// (0x00066964) list_double_number_pane_vc_t2_ParamLimits

0xe305,	// (0x00066964) list_double_number_pane_vc_t2

0xe2ef,	// (0x0006694e) list_double_number_pane_vc_t3_ParamLimits

0xe2ef,	// (0x0006694e) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x0006809b) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x0006809b) list_double_number_pane_vc_t

0x386a,	// (0x0005bec9) list_double_large_graphic_pane_vc_g1_ParamLimits

0x386a,	// (0x0005bec9) list_double_large_graphic_pane_vc_g1

0x388c,	// (0x0005beeb) list_double_large_graphic_pane_vc_g2_ParamLimits

0x388c,	// (0x0005beeb) list_double_large_graphic_pane_vc_g2

0x38a0,	// (0x0005beff) list_double_large_graphic_pane_vc_g3_ParamLimits

0x38a0,	// (0x0005beff) list_double_large_graphic_pane_vc_g3

0xe319,	// (0x00066978) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe319,	// (0x00066978) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x000680a2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x000680a2) list_double_large_graphic_pane_vc_g

0xe325,	// (0x00066984) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe325,	// (0x00066984) list_double_large_graphic_pane_vc_t1

0xe341,	// (0x000669a0) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe341,	// (0x000669a0) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x000680ab) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x000680ab) list_double_large_graphic_pane_vc_t

0x2d0b,	// (0x0005b36a) list_double_heading_pane_vc_g1_ParamLimits

0x2d0b,	// (0x0005b36a) list_double_heading_pane_vc_g1

0x2d17,	// (0x0005b376) list_double_heading_pane_vc_g2_ParamLimits

0x2d17,	// (0x0005b376) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x00067c0c) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x00067c0c) list_double_heading_pane_vc_g

0xe361,	// (0x000669c0) list_double_heading_pane_vc_t1_ParamLimits

0xe361,	// (0x000669c0) list_double_heading_pane_vc_t1

0xe373,	// (0x000669d2) list_double_heading_pane_vc_t2_ParamLimits

0xe373,	// (0x000669d2) list_double_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x000680b0) list_double_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x000680b0) list_double_heading_pane_vc_t

0xe38b,	// (0x000669ea) list_double_graphic_pane_vc_g1_ParamLimits

0xe38b,	// (0x000669ea) list_double_graphic_pane_vc_g1

0xe397,	// (0x000669f6) list_double_graphic_pane_vc_g2_ParamLimits

0xe397,	// (0x000669f6) list_double_graphic_pane_vc_g2

0x2d0b,	// (0x0005b36a) list_double_graphic_pane_vc_g3_ParamLimits

0x2d0b,	// (0x0005b36a) list_double_graphic_pane_vc_g3

0x0003,

0xfa56,	// (0x000680b5) list_double_graphic_pane_vc_g_ParamLimits

0xfa56,	// (0x000680b5) list_double_graphic_pane_vc_g

0xe3b4,	// (0x00066a13) list_double_graphic_pane_vc_t1_ParamLimits

0xe3b4,	// (0x00066a13) list_double_graphic_pane_vc_t1

0xe3de,	// (0x00066a3d) list_double_graphic_pane_vc_t2_ParamLimits

0xe3de,	// (0x00066a3d) list_double_graphic_pane_vc_t2

0x0001,

0xfa5f,	// (0x000680be) list_double_graphic_pane_vc_t_ParamLimits

0xfa5f,	// (0x000680be) list_double_graphic_pane_vc_t

0xedcc,	// (0x0006742b) aid_size_cell_fastswap

0x9c1c,	// (0x0006227b) aid_size_cell_touch_ParamLimits

0x9c1c,	// (0x0006227b) aid_size_cell_touch

0xef53,	// (0x000675b2) popup_fast_swap_wide_window_ParamLimits

0xef53,	// (0x000675b2) popup_fast_swap_wide_window

0x9dda,	// (0x00062439) touch_pane_ParamLimits

0x9dda,	// (0x00062439) touch_pane

0x9147,	// (0x000617a6) button_value_adjust_pane_cp2

0xdb46,	// (0x000661a5) button_value_adjust_pane_cp4

0xdb4e,	// (0x000661ad) form_field_data_pane_cp2

0xa6a6,	// (0x00062d05) form_field_data_wide_pane_cp2

0xdee5,	// (0x00066544) bg_scroll_pane_ParamLimits

0xf23d,	// (0x0006789c) scroll_handle_pane_ParamLimits

0xf251,	// (0x000678b0) scroll_sc2_down_pane_ParamLimits

0xf251,	// (0x000678b0) scroll_sc2_down_pane

0xdf16,	// (0x00066575) scroll_sc2_up_pane_ParamLimits

0xdf16,	// (0x00066575) scroll_sc2_up_pane

0xca6f,	// (0x000650ce) grid_wheel_folder_pane_g1_ParamLimits

0xca6f,	// (0x000650ce) grid_wheel_folder_pane_g1

0xf418,	// (0x00067a77) clock_nsta_pane_cp2_ParamLimits

0xf418,	// (0x00067a77) clock_nsta_pane_cp2

0xab61,	// (0x000631c0) listscroll_midp_pane_ParamLimits

0xab6d,	// (0x000631cc) midp_canvas_pane

0x2809,	// (0x0005ae68) nsta_clock_indic_pane

0x283d,	// (0x0005ae9c) listscroll_form_pane_vc

0x2845,	// (0x0005aea4) listscroll_set_pane_vc_ParamLimits

0x2845,	// (0x0005aea4) listscroll_set_pane_vc

0xc0fc,	// (0x0006475b) clock_nsta_pane

0xc126,	// (0x00064785) indicator_nsta_pane

0x2ca5,	// (0x0005b304) bg_popup_sub_pane_cp2_ParamLimits

0x2cb9,	// (0x0005b318) find_pane_cp2_ParamLimits

0x2cb9,	// (0x0005b318) find_pane_cp2

0x2ccf,	// (0x0005b32e) grid_toobar_pane_ParamLimits

0x2dc7,	// (0x0005b426) list_form_gen_pane_vc_ParamLimits

0x2dc7,	// (0x0005b426) list_form_gen_pane_vc

0x2ddd,	// (0x0005b43c) scroll_pane_cp8_vc_ParamLimits

0x2ddd,	// (0x0005b43c) scroll_pane_cp8_vc

0x2e59,	// (0x0005b4b8) data_form_wide_pane_vc_ParamLimits

0x2e59,	// (0x0005b4b8) data_form_wide_pane_vc

0x2e65,	// (0x0005b4c4) form_field_data_wide_pane_vc_g1

0x2e6d,	// (0x0005b4cc) form_field_data_wide_pane_vc_t1_ParamLimits

0x2e6d,	// (0x0005b4cc) form_field_data_wide_pane_vc_t1

0x915b,	// (0x000617ba) input_focus_pane_cp6_vc_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_cp6_vc

0x3189,	// (0x0005b7e8) list_midp_pane_ParamLimits

0x46a8,	// (0x0005cd07) scroll_pane_cp16_ParamLimits

0x46a8,	// (0x0005cd07) scroll_pane_cp16

0x31df,	// (0x0005b83e) button_value_adjust_pane_ParamLimits

0x31df,	// (0x0005b83e) button_value_adjust_pane

0xc69c,	// (0x00064cfb) button_value_adjust_pane_cp6_ParamLimits

0xc69c,	// (0x00064cfb) button_value_adjust_pane_cp6

0xc7d8,	// (0x00064e37) settings_code_pane_cp_ParamLimits

0xc7d8,	// (0x00064e37) settings_code_pane_cp

0x8a25,	// (0x00061084) cell_touch_pane_g1

0x8a25,	// (0x00061084) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x00067d42) cell_touch_pane_g

0xc943,	// (0x00064fa2) cell_touch_pane_cp_ParamLimits

0xc943,	// (0x00064fa2) cell_touch_pane_cp

0xc95f,	// (0x00064fbe) cell_touch_pane_ParamLimits

0xc95f,	// (0x00064fbe) cell_touch_pane

0x8a25,	// (0x00061084) scroll_sc2_down_pane_g1

0x8a25,	// (0x00061084) scroll_sc2_up_pane_g1

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp4_vc

0x4a46,	// (0x0005d0a5) list_set_graphic_pane_vc_g1_ParamLimits

0x4a46,	// (0x0005d0a5) list_set_graphic_pane_vc_g1

0x4a52,	// (0x0005d0b1) list_set_graphic_pane_vc_g2_ParamLimits

0x4a52,	// (0x0005d0b1) list_set_graphic_pane_vc_g2

0x0001,

0xf9da,	// (0x00068039) list_set_graphic_pane_vc_g_ParamLimits

0xf9da,	// (0x00068039) list_set_graphic_pane_vc_g

0x4a5e,	// (0x0005d0bd) text_primary_small_cp13_vc_ParamLimits

0x4a5e,	// (0x0005d0bd) text_primary_small_cp13_vc

0x4a76,	// (0x0005d0d5) list_set_graphic_pane_vc_ParamLimits

0x4a76,	// (0x0005d0d5) list_set_graphic_pane_vc

0x8a2f,	// (0x0006108e) input_focus_pane_cp2_vc

0x8a25,	// (0x00061084) setting_code_pane_vc_g1

0x8a94,	// (0x000610f3) setting_code_pane_vc_t1

0x4a89,	// (0x0005d0e8) set_text_pane_vc_t1_ParamLimits

0x4a89,	// (0x0005d0e8) set_text_pane_vc_t1

0x8a2f,	// (0x0006108e) input_focus_pane_cp1_vc

0x4aaa,	// (0x0005d109) list_set_text_pane_vc

0x8a25,	// (0x00061084) setting_text_pane_vc_g1

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp2_vc

0x8a8b,	// (0x000610ea) setting_slider_graphic_pane_vc_g1

0x4ab4,	// (0x0005d113) setting_slider_graphic_pane_vc_t1

0x4ac6,	// (0x0005d125) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9df,	// (0x0006803e) setting_slider_graphic_pane_vc_t

0x4ad8,	// (0x0005d137) slider_set_pane_cp_vc

0x4ae2,	// (0x0005d141) slider_set_pane_vc_g1

0x4aeb,	// (0x0005d14a) slider_set_pane_vc_g2

0x0006,

0xf9e4,	// (0x00068043) slider_set_pane_vc_g

0x91b3,	// (0x00061812) set_opt_bg_pane_g1_copy1

0x91bb,	// (0x0006181a) set_opt_bg_pane_g2_copy1

0x4b17,	// (0x0005d176) set_opt_bg_pane_g3_copy1

0x91cb,	// (0x0006182a) set_opt_bg_pane_g4_copy1

0x91d3,	// (0x00061832) set_opt_bg_pane_g5_copy1

0x91db,	// (0x0006183a) set_opt_bg_pane_g6_copy1

0x4b21,	// (0x0005d180) set_opt_bg_pane_g7_copy1

0x4b2b,	// (0x0005d18a) set_opt_bg_pane_g8_copy1

0x4b35,	// (0x0005d194) set_opt_bg_pane_g9_copy1

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp_vc

0x4b3f,	// (0x0005d19e) setting_slider_pane_vc_t1

0x4b4e,	// (0x0005d1ad) setting_slider_pane_vc_t2

0x4b60,	// (0x0005d1bf) setting_slider_pane_vc_t3

0x0002,

0xf9f3,	// (0x00068052) setting_slider_pane_vc_t

0x4b72,	// (0x0005d1d1) slider_set_pane_vc

0x08ec,	// (0x00058f4b) volume_set_pane_vc_g1

0x08f5,	// (0x00058f54) volume_set_pane_vc_g2

0x08fe,	// (0x00058f5d) volume_set_pane_vc_g3

0x0907,	// (0x00058f66) volume_set_pane_vc_g4

0x0910,	// (0x00058f6f) volume_set_pane_vc_g5

0x0919,	// (0x00058f78) volume_set_pane_vc_g6

0x0922,	// (0x00058f81) volume_set_pane_vc_g7

0x092b,	// (0x00058f8a) volume_set_pane_vc_g8

0x0934,	// (0x00058f93) volume_set_pane_vc_g9

0x093d,	// (0x00058f9c) volume_set_pane_vc_g10

0x0009,

0xf9fa,	// (0x00068059) volume_set_pane_vc_g

0x4b7c,	// (0x0005d1db) volume_set_pane_vc

0x4b86,	// (0x0005d1e5) button_value_adjust_pane_cp1_vc

0x4b90,	// (0x0005d1ef) list_highlight_pane_cp2_vc

0x4b99,	// (0x0005d1f8) list_set_pane_vc_ParamLimits

0x4b99,	// (0x0005d1f8) list_set_pane_vc

0x4c07,	// (0x0005d266) main_pane_set_vc_t1_ParamLimits

0x4c07,	// (0x0005d266) main_pane_set_vc_t1

0x4c1c,	// (0x0005d27b) main_pane_set_vc_t2_ParamLimits

0x4c1c,	// (0x0005d27b) main_pane_set_vc_t2

0x4c2e,	// (0x0005d28d) main_pane_set_vc_t3_ParamLimits

0x4c2e,	// (0x0005d28d) main_pane_set_vc_t3

0x4c42,	// (0x0005d2a1) main_pane_set_vc_t4_ParamLimits

0x4c42,	// (0x0005d2a1) main_pane_set_vc_t4

0x0003,

0xfa0f,	// (0x0006806e) main_pane_set_vc_t_ParamLimits

0xfa0f,	// (0x0006806e) main_pane_set_vc_t

0x4c56,	// (0x0005d2b5) setting_code_pane_vc_ParamLimits

0x4c56,	// (0x0005d2b5) setting_code_pane_vc

0x4c67,	// (0x0005d2c6) setting_slider_graphic_pane_vc

0x4c67,	// (0x0005d2c6) setting_slider_pane_vc

0x4c67,	// (0x0005d2c6) setting_text_pane_vc

0x4c67,	// (0x0005d2c6) setting_volume_pane_vc

0x4c71,	// (0x0005d2d0) scroll_pane_cp121_vc

0x9135,	// (0x00061794) set_content_pane_vc

0x4c79,	// (0x0005d2d8) button_value_adjust_pane_g1

0x4c82,	// (0x0005d2e1) button_value_adjust_pane_g2

0x0001,

0xfa64,	// (0x000680c3) button_value_adjust_pane_g

0x4c8b,	// (0x0005d2ea) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4c8b,	// (0x0005d2ea) form_field_slider_wide_pane_vc_t1

0x4c9d,	// (0x0005d2fc) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4c9d,	// (0x0005d2fc) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa69,	// (0x000680c8) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa69,	// (0x000680c8) form_field_slider_wide_pane_vc_t

0x8bb0,	// (0x0006120f) input_focus_pane_cp10_vc_ParamLimits

0x8bb0,	// (0x0006120f) input_focus_pane_cp10_vc

0x4cc9,	// (0x0005d328) slider_cont_pane_cp1_vc_ParamLimits

0x4cc9,	// (0x0005d328) slider_cont_pane_cp1_vc

0x4cdb,	// (0x0005d33a) slider_form_pane_g1_cp2

0x4aeb,	// (0x0005d14a) slider_form_pane_g2_cp2

0x4d08,	// (0x0005d367) form_field_slider_pane_vc_t3

0x4d16,	// (0x0005d375) form_field_slider_pane_vc_t4

0x4d24,	// (0x0005d383) slider_form_pane_vc_ParamLimits

0x4d24,	// (0x0005d383) slider_form_pane_vc

0x4d31,	// (0x0005d390) form_field_slider_pane_vc_t1_ParamLimits

0x4d31,	// (0x0005d390) form_field_slider_pane_vc_t1

0x4c9d,	// (0x0005d2fc) form_field_slider_pane_vc_t2_ParamLimits

0x4c9d,	// (0x0005d2fc) form_field_slider_pane_vc_t2

0x0001,

0xfa7b,	// (0x000680da) form_field_slider_pane_vc_t_ParamLimits

0xfa7b,	// (0x000680da) form_field_slider_pane_vc_t

0x8bb0,	// (0x0006120f) input_focus_pane_cp9_vc_ParamLimits

0x8bb0,	// (0x0006120f) input_focus_pane_cp9_vc

0x4d47,	// (0x0005d3a6) slider_cont_pane_vc_ParamLimits

0x4d47,	// (0x0005d3a6) slider_cont_pane_vc

0x4d5b,	// (0x0005d3ba) list_form_graphic_pane_cp_vc_ParamLimits

0x4d5b,	// (0x0005d3ba) list_form_graphic_pane_cp_vc

0x2e65,	// (0x0005b4c4) form_field_popup_wide_pane_vc_g1

0x4d70,	// (0x0005d3cf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4d70,	// (0x0005d3cf) form_field_popup_wide_pane_vc_t1

0x915b,	// (0x000617ba) input_focus_pane_cp8_vc_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_cp8_vc

0x4db5,	// (0x0005d414) list_form_wide_pane_vc_ParamLimits

0x4db5,	// (0x0005d414) list_form_wide_pane_vc

0x4dc1,	// (0x0005d420) list_form_graphic_pane_vc_g1

0x4dc9,	// (0x0005d428) list_form_graphic_pane_vc_t1_ParamLimits

0x4dc9,	// (0x0005d428) list_form_graphic_pane_vc_t1

0x8a7d,	// (0x000610dc) list_highlight_pane_cp5_vc_ParamLimits

0x8a7d,	// (0x000610dc) list_highlight_pane_cp5_vc

0x4de5,	// (0x0005d444) list_form_graphic_pane_vc_ParamLimits

0x4de5,	// (0x0005d444) list_form_graphic_pane_vc

0x2e65,	// (0x0005b4c4) form_field_popup_pane_vc_g1

0x4dfb,	// (0x0005d45a) form_field_popup_pane_vc_t1_ParamLimits

0x4dfb,	// (0x0005d45a) form_field_popup_pane_vc_t1

0x915b,	// (0x000617ba) input_focus_pane_cp7_vc_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_cp7_vc

0x4e12,	// (0x0005d471) list_form_pane_vc_ParamLimits

0x4e12,	// (0x0005d471) list_form_pane_vc

0x4e1e,	// (0x0005d47d) data_form_pane_vc_t1_ParamLimits

0x4e1e,	// (0x0005d47d) data_form_pane_vc_t1

0x91b3,	// (0x00061812) input_focus_pane_vc_g1

0x91bb,	// (0x0006181a) input_focus_pane_vc_g2

0x91c3,	// (0x00061822) input_focus_pane_vc_g3

0x91cb,	// (0x0006182a) input_focus_pane_vc_g4

0x91d3,	// (0x00061832) input_focus_pane_vc_g5

0x91db,	// (0x0006183a) input_focus_pane_vc_g6

0x91e3,	// (0x00061842) input_focus_pane_vc_g7

0x91eb,	// (0x0006184a) input_focus_pane_vc_g8

0x91f3,	// (0x00061852) input_focus_pane_vc_g9

0x8a25,	// (0x00061084) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x00067ccb) input_focus_pane_vc_g

0x2e59,	// (0x0005b4b8) data_form_pane_vc_ParamLimits

0x2e59,	// (0x0005b4b8) data_form_pane_vc

0x2e65,	// (0x0005b4c4) form_field_data_pane_vc_g1

0x4e3b,	// (0x0005d49a) form_field_data_pane_vc_t1_ParamLimits

0x4e3b,	// (0x0005d49a) form_field_data_pane_vc_t1

0x915b,	// (0x000617ba) input_focus_pane_vc_ParamLimits

0x915b,	// (0x000617ba) input_focus_pane_vc

0x4e55,	// (0x0005d4b4) button_value_adjust_pane_cp3_vc

0x4e5d,	// (0x0005d4bc) button_value_adjust_pane_cp5_vc

0x4e65,	// (0x0005d4c4) form_field_data_pane_vc_ParamLimits

0x4e65,	// (0x0005d4c4) form_field_data_pane_vc

0x4e80,	// (0x0005d4df) form_field_data_pane_vc_cp2

0x4e88,	// (0x0005d4e7) form_field_data_wide_pane_vc_ParamLimits

0x4e88,	// (0x0005d4e7) form_field_data_wide_pane_vc

0x4ea2,	// (0x0005d501) form_field_data_wide_pane_vc_cp2

0x4eaa,	// (0x0005d509) form_field_popup_pane_vc_ParamLimits

0x4eaa,	// (0x0005d509) form_field_popup_pane_vc

0x4ec5,	// (0x0005d524) form_field_popup_wide_pane_vc_ParamLimits

0x4ec5,	// (0x0005d524) form_field_popup_wide_pane_vc

0x4edf,	// (0x0005d53e) form_field_slider_pane_vc_ParamLimits

0x4edf,	// (0x0005d53e) form_field_slider_pane_vc

0x4ef2,	// (0x0005d551) form_field_slider_wide_pane_vc_ParamLimits

0x4ef2,	// (0x0005d551) form_field_slider_wide_pane_vc

0xc97d,	// (0x00064fdc) grid_touch_1_pane_ParamLimits

0xc97d,	// (0x00064fdc) grid_touch_1_pane

0xc991,	// (0x00064ff0) grid_touch_2_pane_ParamLimits

0xc991,	// (0x00064ff0) grid_touch_2_pane

0x4fd8,	// (0x0005d637) touch_pane_g1_ParamLimits

0x4fd8,	// (0x0005d637) touch_pane_g1

0x4f2b,	// (0x0005d58a) cell_app_pane_cp_wide_ParamLimits

0x4f2b,	// (0x0005d58a) cell_app_pane_cp_wide

0x4f3c,	// (0x0005d59b) grid_popup_fast_wide_pane_ParamLimits

0x4f3c,	// (0x0005d59b) grid_popup_fast_wide_pane

0x4f50,	// (0x0005d5af) scroll_pane_cp19_ParamLimits

0x4f50,	// (0x0005d5af) scroll_pane_cp19

0x8a2f,	// (0x0006108e) bg_popup_window_pane_cp20

0x4f64,	// (0x0005d5c3) listscroll_popup_fast_wide_pane

0xc9bd,	// (0x0006501c) grid_indicator_nsta_pane

0x4f7e,	// (0x0005d5dd) clock_nsta_pane_g1

0x4f87,	// (0x0005d5e6) clock_nsta_pane_t1

0xc9c9,	// (0x00065028) cell_indicator_nsta_pane_ParamLimits

0xc9c9,	// (0x00065028) cell_indicator_nsta_pane

0x4fd8,	// (0x0005d637) cell_indicator_nsta_pane_g1

0xc9e4,	// (0x00065043) cell_indicator_nsta_pane_g2

0x0001,

0xfa8c,	// (0x000680eb) cell_indicator_nsta_pane_g

0x4ff9,	// (0x0005d658) clock_nsta_pane_cp

0x5002,	// (0x0005d661) indicator_nsta_pane_cp

0x500c,	// (0x0005d66b) nsta_clock_indic_pane_g1

0x8ab9,	// (0x00061118) grid_indicator_pane

0xe008,	// (0x00066667) scroll_pane_cp29

0xf367,	// (0x000679c6) indicator_nsta_pane_cp2_ParamLimits

0xf367,	// (0x000679c6) indicator_nsta_pane_cp2

0x8a7d,	// (0x000610dc) main_apps_wheel_pane

0x3046,	// (0x0005b6a5) form_midp_field_text_pane_ParamLimits

0x3195,	// (0x0005b7f4) scroll_bar_cp050_ParamLimits

0x5065,	// (0x0005d6c4) cell_indicator_pane_ParamLimits

0x5065,	// (0x0005d6c4) cell_indicator_pane

0x507d,	// (0x0005d6dc) cell_indicator_pane_g1

0xc9f1,	// (0x00065050) grid_wheel_folder_pane_ParamLimits

0xc9f1,	// (0x00065050) grid_wheel_folder_pane

0xc9ff,	// (0x0006505e) list_wheel_apps_pane_ParamLimits

0xc9ff,	// (0x0006505e) list_wheel_apps_pane

0xca0d,	// (0x0006506c) main_apps_wheel_pane_g1_ParamLimits

0xca0d,	// (0x0006506c) main_apps_wheel_pane_g1

0xca1d,	// (0x0006507c) main_apps_wheel_pane_g2_ParamLimits

0xca1d,	// (0x0006507c) main_apps_wheel_pane_g2

0x0001,

0xfaa8,	// (0x00068107) main_apps_wheel_pane_g_ParamLimits

0xfaa8,	// (0x00068107) main_apps_wheel_pane_g

0xca2d,	// (0x0006508c) main_apps_wheel_pane_t1_ParamLimits

0xca2d,	// (0x0006508c) main_apps_wheel_pane_t1

0xca45,	// (0x000650a4) list_wheel_apps_pane_g1

0xca4d,	// (0x000650ac) list_wheel_apps_pane_g2

0xca55,	// (0x000650b4) list_wheel_apps_pane_g3

0xca5d,	// (0x000650bc) list_wheel_apps_pane_g4

0xca65,	// (0x000650c4) list_wheel_apps_pane_g5

0x0004,

0xfaad,	// (0x0006810c) list_wheel_apps_pane_g

0x2386,	// (0x0005a9e5) navi_icon_text_pane

0xbfee,	// (0x0006464d) aid_fill_nsta

0xca82,	// (0x000650e1) navi_icon_text_pane_g1

0xca8e,	// (0x000650ed) navi_icon_text_pane_t1

0x221d,	// (0x0005a87c) list_set_graphic_pane_t1_ParamLimits

0x221d,	// (0x0005a87c) list_set_graphic_pane_t1

0x3ac5,	// (0x0005c124) popup_midp_note_alarm_window_t6_ParamLimits

0x3ac5,	// (0x0005c124) popup_midp_note_alarm_window_t6

0x3ad7,	// (0x0005c136) popup_midp_note_alarm_window_t7_ParamLimits

0x3ad7,	// (0x0005c136) popup_midp_note_alarm_window_t7

0x3ae9,	// (0x0005c148) popup_midp_note_alarm_window_t8_ParamLimits

0x3ae9,	// (0x0005c148) popup_midp_note_alarm_window_t8

0x3afb,	// (0x0005c15a) popup_midp_note_alarm_window_t9_ParamLimits

0x3afb,	// (0x0005c15a) popup_midp_note_alarm_window_t9

0x3b0d,	// (0x0005c16c) popup_midp_note_alarm_window_t10_ParamLimits

0x3b0d,	// (0x0005c16c) popup_midp_note_alarm_window_t10

0x3b1f,	// (0x0005c17e) popup_midp_note_alarm_window_t11_ParamLimits

0x3b1f,	// (0x0005c17e) popup_midp_note_alarm_window_t11

0x3b31,	// (0x0005c190) scroll_pane_cp17_ParamLimits

0x3b31,	// (0x0005c190) scroll_pane_cp17

0x08ec,	// (0x00058f4b) volume_small_pane_cp_g1

0x0c85,	// (0x000592e4) volume_small_pane_cp_g2

0x0c8e,	// (0x000592ed) volume_small_pane_cp_g3

0x0c97,	// (0x000592f6) volume_small_pane_cp_g4

0x0ca0,	// (0x000592ff) volume_small_pane_cp_g5

0x0ca9,	// (0x00059308) volume_small_pane_cp_g6

0x0cb2,	// (0x00059311) volume_small_pane_cp_g7

0x0cbb,	// (0x0005931a) volume_small_pane_cp_g8

0x0cc4,	// (0x00059323) volume_small_pane_cp_g9

0x0ccd,	// (0x0005932c) volume_small_pane_cp_g10

0x25e8,	// (0x0005ac47) midp_ticker_pane_g1_ParamLimits

0x25f4,	// (0x0005ac53) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x00067d97) midp_ticker_pane_g_ParamLimits

0xac05,	// (0x00063264) midp_ticker_pane_t1_ParamLimits

0xc012,	// (0x00064671) aid_fill_nsta_2

0x3181,	// (0x0005b7e0) list_form2_midp_pane

0x44c0,	// (0x0005cb1f) midp_editing_number_pane_ParamLimits

0x44cf,	// (0x0005cb2e) midp_ticker_pane_ParamLimits

0x5170,	// (0x0005d7cf) form2_midp_field_pane

0x5194,	// (0x0005d7f3) scroll_pane_cp51

0x51b4,	// (0x0005d813) form2_midp_button_pane_ParamLimits

0x51b4,	// (0x0005d813) form2_midp_button_pane

0x51c6,	// (0x0005d825) form2_midp_content_pane_ParamLimits

0x51c6,	// (0x0005d825) form2_midp_content_pane

0x51e0,	// (0x0005d83f) form2_midp_field_choice_group_pane

0x51e8,	// (0x0005d847) form2_midp_field_pane_g1

0x51f0,	// (0x0005d84f) form2_midp_field_pane_g2

0x51f8,	// (0x0005d857) form2_midp_field_pane_g3

0x5200,	// (0x0005d85f) form2_midp_field_pane_g4

0x0003,

0xfad2,	// (0x00068131) form2_midp_field_pane_g

0x5208,	// (0x0005d867) form2_midp_gauge_slider_pane

0x5210,	// (0x0005d86f) form2_midp_gauge_wait_pane

0x5218,	// (0x0005d877) form2_midp_image_pane_ParamLimits

0x5218,	// (0x0005d877) form2_midp_image_pane

0x5233,	// (0x0005d892) form2_midp_label_pane_ParamLimits

0x5233,	// (0x0005d892) form2_midp_label_pane

0xcabc,	// (0x0006511b) form2_midp_label_pane_cp_ParamLimits

0xcabc,	// (0x0006511b) form2_midp_label_pane_cp

0x5273,	// (0x0005d8d2) form2_midp_string_pane_ParamLimits

0x5273,	// (0x0005d8d2) form2_midp_string_pane

0xb7b8,	// (0x00063e17) form2_midp_text_pane_ParamLimits

0xb7b8,	// (0x00063e17) form2_midp_text_pane

0x5285,	// (0x0005d8e4) form2_midp_time_pane

0x5295,	// (0x0005d8f4) input_focus_pane_cp51_ParamLimits

0x5295,	// (0x0005d8f4) input_focus_pane_cp51

0x52ad,	// (0x0005d90c) form2_midp_label_pane_t1_ParamLimits

0x52ad,	// (0x0005d90c) form2_midp_label_pane_t1

0xb7db,	// (0x00063e3a) form2_mdip_text_pane_t1_ParamLimits

0xb7db,	// (0x00063e3a) form2_mdip_text_pane_t1

0xe3fc,	// (0x00066a5b) form2_midp_time_pane_t1

0x52fb,	// (0x0005d95a) form2_midp_gauge_slider_pane_t1

0xcadd,	// (0x0006513c) form2_midp_gauge_slider_pane_t2

0xcaef,	// (0x0006514e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfadb,	// (0x0006813a) form2_midp_gauge_slider_pane_t

0x5331,	// (0x0005d990) form2_midp_slider_pane

0x533d,	// (0x0005d99c) form2_midp_gauge_wait_pane_t1

0x534b,	// (0x0005d9aa) form2_midp_wait_pane_ParamLimits

0x534b,	// (0x0005d9aa) form2_midp_wait_pane

0x2eac,	// (0x0005b50b) list_single_2graphic_pane_cp4_ParamLimits

0x2eac,	// (0x0005b50b) list_single_2graphic_pane_cp4

0xcb01,	// (0x00065160) list_single_midp_graphic_pane_cp_ParamLimits

0xcb01,	// (0x00065160) list_single_midp_graphic_pane_cp

0x8a2f,	// (0x0006108e) list_highlight_pane_cp20

0x538f,	// (0x0005d9ee) list_single_2graphic_pane_g1_cp4

0x4928,	// (0x0005cf87) list_single_2graphic_pane_g2_cp4

0x5397,	// (0x0005d9f6) list_single_2graphic_pane_t1_cp4

0x8a7d,	// (0x000610dc) list_highlight_pane_cp21

0x53a6,	// (0x0005da05) list_single_midp_graphic_pane_g4_cp

0x53b5,	// (0x0005da14) list_single_midp_graphic_pane_t1_cp

0xcb22,	// (0x00065181) form2_mdip_string_pane_t1_ParamLimits

0xcb22,	// (0x00065181) form2_mdip_string_pane_t1

0x8a2f,	// (0x0006108e) bg_wml_button_pane_cp2

0x8a25,	// (0x00061084) form2_midp_image_pane_g1

0xf014,	// (0x00067673) list_double_large_graphic_pane_g5_ParamLimits

0xf014,	// (0x00067673) list_double_large_graphic_pane_g5

0xab61,	// (0x000631c0) midp_form_pane_ParamLimits

0x8a7d,	// (0x000610dc) main_apps_wheel_pane_ParamLimits

0xb2ad,	// (0x0006390c) popup_preview_window_ParamLimits

0xb2ad,	// (0x0006390c) popup_preview_window

0x071d,	// (0x00058d7c) popup_touch_info_window_ParamLimits

0x071d,	// (0x00058d7c) popup_touch_info_window

0x073f,	// (0x00058d9e) popup_touch_menu_window_ParamLimits

0x073f,	// (0x00058d9e) popup_touch_menu_window

0x8a1b,	// (0x0006107a) bg_popup_sub_pane_cp6

0x5466,	// (0x0005dac5) list_touch_menu_pane

0x546e,	// (0x0005dacd) list_single_touch_menu_pane_ParamLimits

0x546e,	// (0x0005dacd) list_single_touch_menu_pane

0x5486,	// (0x0005dae5) list_single_touch_menu_pane_t1

0x8a7d,	// (0x000610dc) bg_popup_sub_pane_cp7_ParamLimits

0x8a7d,	// (0x000610dc) bg_popup_sub_pane_cp7

0x5494,	// (0x0005daf3) heading_sub_pane

0x549c,	// (0x0005dafb) list_touch_info_pane_ParamLimits

0x549c,	// (0x0005dafb) list_touch_info_pane

0x54ab,	// (0x0005db0a) list_single_touch_info_pane_ParamLimits

0x54ab,	// (0x0005db0a) list_single_touch_info_pane

0x54bd,	// (0x0005db1c) list_single_touch_info_pane_t1

0x54cb,	// (0x0005db2a) list_single_touch_info_pane_t2

0x0001,

0xfae9,	// (0x00068148) list_single_touch_info_pane_t

0x250a,	// (0x0005ab69) bg_popup_heading_pane_cp

0x54d9,	// (0x0005db38) heading_sub_pane_t1

0x2df3,	// (0x0005b452) bg_popup_preview_window_pane_cp_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_preview_window_pane_cp

0x5494,	// (0x0005daf3) heading_preview_pane

0x549c,	// (0x0005dafb) list_preview_pane_ParamLimits

0x549c,	// (0x0005dafb) list_preview_pane

0x54e7,	// (0x0005db46) popup_preview_window_g1

0x54ab,	// (0x0005db0a) list_single_preview_pane_ParamLimits

0x54ab,	// (0x0005db0a) list_single_preview_pane

0x54ef,	// (0x0005db4e) list_single_preview_pane_g1

0x54f7,	// (0x0005db56) list_single_preview_pane_t1

0x54bd,	// (0x0005db1c) list_single_preview_pane_t2

0x0001,

0xfaee,	// (0x0006814d) list_single_preview_pane_t

0x5505,	// (0x0005db64) bg_popup_heading_pane_cp2_ParamLimits

0x5505,	// (0x0005db64) bg_popup_heading_pane_cp2

0x551b,	// (0x0005db7a) heading_preview_pane_g1

0x5523,	// (0x0005db82) heading_preview_pane_t1_ParamLimits

0x5523,	// (0x0005db82) heading_preview_pane_t1

0x8ad0,	// (0x0006112f) soft_indicator_pane_t1_ParamLimits

0x90ce,	// (0x0006172d) scroll_pane_ParamLimits

0xdf04,	// (0x00066563) scroll_sc2_left_pane

0xdf0d,	// (0x0006656c) scroll_sc2_right_pane

0xdf2c,	// (0x0006658b) scroll_bg_pane_g1_ParamLimits

0xdf41,	// (0x000665a0) scroll_bg_pane_g2_ParamLimits

0xdf59,	// (0x000665b8) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x00067d22) scroll_bg_pane_g_ParamLimits

0xdf2c,	// (0x0006658b) scroll_handle_pane_g1_ParamLimits

0xdf7b,	// (0x000665da) scroll_handle_pane_g2_ParamLimits

0xdf59,	// (0x000665b8) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x00067d29) scroll_handle_pane_g_ParamLimits

0x017b,	// (0x000587da) popup_choice_list_window_ParamLimits

0x017b,	// (0x000587da) popup_choice_list_window

0x2cb1,	// (0x0005b310) choice_list_pane

0x2d4b,	// (0x0005b3aa) cell_toolbar_pane_t1

0x2d73,	// (0x0005b3d2) toolbar_button_pane_ParamLimits

0x3ffb,	// (0x0005c65a) ai_gene_pane_1_t2_ParamLimits

0x3ffb,	// (0x0005c65a) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x00067f4c) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x00067f4c) ai_gene_pane_1_t

0x5540,	// (0x0005db9f) scroll_sc2_left_pane_g1

0x5540,	// (0x0005db9f) scroll_sc2_right_pane_g1

0x2831,	// (0x0005ae90) bg_popup_sub_pane_cp10

0x554a,	// (0x0005dba9) list_choice_list_pane

0x5563,	// (0x0005dbc2) list_single_choice_list_pane_ParamLimits

0x5563,	// (0x0005dbc2) list_single_choice_list_pane

0x557b,	// (0x0005dbda) list_single_choice_list_pane_g1

0xdcfb,	// (0x0006635a) list_single_choice_list_pane_t1_ParamLimits

0xdcfb,	// (0x0006635a) list_single_choice_list_pane_t1

0x5583,	// (0x0005dbe2) choice_list_pane_g1

0x558b,	// (0x0005dbea) choice_list_pane_t1

0x8a1b,	// (0x0006107a) input_focus_pane_cp11

0xde79,	// (0x000664d8) title_pane_stacon_g2_ParamLimits

0xde79,	// (0x000664d8) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x00067d08) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x00067d08) title_pane_stacon_g

0x250a,	// (0x0005ab69) cursor_press_pane

0xaf24,	// (0x00063583) popup_fep_hwr_window_ParamLimits

0xaf24,	// (0x00063583) popup_fep_hwr_window

0x02bf,	// (0x0005891e) popup_fep_vkb_window_ParamLimits

0x02bf,	// (0x0005891e) popup_fep_vkb_window

0x5599,	// (0x0005dbf8) cursor_press_pane_g1

0x0002,

0xfb17,	// (0x00068176) fep_vkb_side_pane_g_ParamLimits

0x0d51,	// (0x000593b0) fep_hwr_candidate_pane_ParamLimits

0x0d51,	// (0x000593b0) fep_hwr_candidate_pane

0x0d7b,	// (0x000593da) fep_hwr_side_pane_ParamLimits

0x0d7b,	// (0x000593da) fep_hwr_side_pane

0x0d9d,	// (0x000593fc) fep_hwr_top_pane_ParamLimits

0x0d9d,	// (0x000593fc) fep_hwr_top_pane

0x0db5,	// (0x00059414) fep_hwr_write_pane_ParamLimits

0x0db5,	// (0x00059414) fep_hwr_write_pane

0xfb17,	// (0x00068176) fep_vkb_side_pane_g

0x55a1,	// (0x0005dc00) fep_hwr_top_pane_g1

0x55b3,	// (0x0005dc12) fep_hwr_top_pane_g2

0x0def,	// (0x0005944e) fep_hwr_top_pane_g3

0x0002,

0xfaf3,	// (0x00068152) fep_hwr_top_pane_g

0x0e04,	// (0x00059463) fep_hwr_top_text_pane

0x1efe,	// (0x0005a55d) fep_hwr_top_text_pane_g1

0x55e9,	// (0x0005dc48) fep_hwr_top_text_pane_t1

0x0f0e,	// (0x0005956d) fep_hwr_candidate_pane_g1

0x5834,	// (0x0005de93) fep_vkb_keypad_pane_g3_ParamLimits

0x5834,	// (0x0005de93) fep_vkb_keypad_pane_g3

0x5860,	// (0x0005debf) fep_vkb_keypad_pane_g4_ParamLimits

0x5860,	// (0x0005debf) fep_vkb_keypad_pane_g4

0x58d7,	// (0x0005df36) fep_vkb_bottom_pane_g2_ParamLimits

0x58d7,	// (0x0005df36) fep_vkb_bottom_pane_g2

0x0001,

0xfb1e,	// (0x0006817d) fep_vkb_bottom_pane_g_ParamLimits

0xfb1e,	// (0x0006817d) fep_vkb_bottom_pane_g

0x5540,	// (0x0005db9f) cell_vkb_side_pane_g2

0x0001,

0xfb28,	// (0x00068187) cell_vkb_side_pane_g

0x5962,	// (0x0005dfc1) cell_vkb_side_pane_t1

0x5970,	// (0x0005dfcf) cell_vkb_side_pane_t1_copy1

0x5540,	// (0x0005db9f) bg_fep_vkb_candidate_pane_g2

0x5ab4,	// (0x0005e113) cell_vkb_candidate_pane_ParamLimits

0x55f7,	// (0x0005dc56) aid_size_cell_vkb_ParamLimits

0x55f7,	// (0x0005dc56) aid_size_cell_vkb

0x5ab4,	// (0x0005e113) cell_vkb_candidate_pane

0x0f35,	// (0x00059594) bg_popup_fep_shadow_pane_g1

0xcbbe,	// (0x0006521d) fep_vkb_bottom_pane_ParamLimits

0xcbbe,	// (0x0006521d) fep_vkb_bottom_pane

0x56c6,	// (0x0005dd25) fep_vkb_candidate_pane_ParamLimits

0x56c6,	// (0x0005dd25) fep_vkb_candidate_pane

0xcbea,	// (0x00065249) fep_vkb_keypad_pane_ParamLimits

0xcbea,	// (0x00065249) fep_vkb_keypad_pane

0xcc11,	// (0x00065270) fep_vkb_side_pane_ParamLimits

0xcc11,	// (0x00065270) fep_vkb_side_pane

0xcc4d,	// (0x000652ac) fep_vkb_top_pane_ParamLimits

0xcc4d,	// (0x000652ac) fep_vkb_top_pane

0x578d,	// (0x0005ddec) fep_vkb_top_pane_g1_ParamLimits

0x578d,	// (0x0005ddec) fep_vkb_top_pane_g1

0x579c,	// (0x0005ddfb) fep_vkb_top_pane_g2_ParamLimits

0x579c,	// (0x0005ddfb) fep_vkb_top_pane_g2

0x57ab,	// (0x0005de0a) fep_vkb_top_pane_g3_ParamLimits

0x57ab,	// (0x0005de0a) fep_vkb_top_pane_g3

0x0003,

0xfb0e,	// (0x0006816d) fep_vkb_top_pane_g_ParamLimits

0xfb0e,	// (0x0006816d) fep_vkb_top_pane_g

0x57c9,	// (0x0005de28) fep_vkb_top_text_pane_ParamLimits

0x57c9,	// (0x0005de28) fep_vkb_top_text_pane

0xcc89,	// (0x000652e8) fep_vkb_side_pane_g1_ParamLimits

0xcc89,	// (0x000652e8) fep_vkb_side_pane_g1

0x5823,	// (0x0005de82) grid_vkb_side_pane_ParamLimits

0x5823,	// (0x0005de82) grid_vkb_side_pane

0x0f3d,	// (0x0005959c) bg_popup_fep_shadow_pane_g2

0x0f46,	// (0x000595a5) bg_popup_fep_shadow_pane_g3

0x0f4e,	// (0x000595ad) bg_popup_fep_shadow_pane_g4

0x0f57,	// (0x000595b6) bg_popup_fep_shadow_pane_g5

0x0f61,	// (0x000595c0) bg_popup_fep_shadow_pane_g6

0x0f69,	// (0x000595c8) bg_popup_fep_shadow_pane_g7

0x91cb,	// (0x0006182a) bg_popup_fep_shadow_pane_g8

0x5882,	// (0x0005dee1) grid_vkb_keypad_number_pane_ParamLimits

0x5882,	// (0x0005dee1) grid_vkb_keypad_number_pane

0x5896,	// (0x0005def5) grid_vkb_keypad_pane_ParamLimits

0x5896,	// (0x0005def5) grid_vkb_keypad_pane

0x58bc,	// (0x0005df1b) fep_vkb_bottom_pane_g1_ParamLimits

0x58bc,	// (0x0005df1b) fep_vkb_bottom_pane_g1

0x58e5,	// (0x0005df44) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x58e5,	// (0x0005df44) grid_vkb_keypad_bottom_left_pane

0x58fa,	// (0x0005df59) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x58fa,	// (0x0005df59) grid_vkb_keypad_bottom_right_pane

0x590f,	// (0x0005df6e) fep_vkb_top_text_pane_g1

0xccd0,	// (0x0006532f) fep_vkb_top_text_pane_t1

0xcce2,	// (0x00065341) cell_vkb_side_pane_ParamLimits

0xcce2,	// (0x00065341) cell_vkb_side_pane

0x5540,	// (0x0005db9f) cell_vkb_side_pane_g1

0x597e,	// (0x0005dfdd) cell_vkb_keypad_pane_ParamLimits

0x597e,	// (0x0005dfdd) cell_vkb_keypad_pane

0x5a0b,	// (0x0005e06a) cell_vkb_keypad_pane_g1

0x0008,

0xfb3b,	// (0x0006819a) bg_popup_fep_shadow_pane_g

0x0f7b,	// (0x000595da) cell_hwr_side_pane_g1

0x0f7b,	// (0x000595da) cell_hwr_side_pane_g2

0x5a15,	// (0x0005e074) cell_vkb_keypad_pane_t1

0xccf8,	// (0x00065357) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xccf8,	// (0x00065357) cell_vkb_keypad_bottom_left_pane

0xcd0d,	// (0x0006536c) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcd0d,	// (0x0006536c) cell_vkb_keypad_bottom_right_pane

0x5540,	// (0x0005db9f) cell_vkb_keypad_bottom_left_pane_g1

0x5540,	// (0x0005db9f) cell_vkb_keypad_bottom_right_pane_g1

0x5a79,	// (0x0005e0d8) cell_vkb_keypad_number_pane_ParamLimits

0x5a79,	// (0x0005e0d8) cell_vkb_keypad_number_pane

0x5a98,	// (0x0005e0f7) cell_vkb_keypad_number_pane_g1

0x5aa2,	// (0x0005e101) cell_vkb_keypad_number_pane_g2

0x5aab,	// (0x0005e10a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2d,	// (0x0006818c) cell_vkb_keypad_number_pane_g

0x5a15,	// (0x0005e074) cell_vkb_keypad_number_pane_t1

0x5ad5,	// (0x0005e134) fep_vkb_candidate_pane_g1

0x0001,

0xfb4e,	// (0x000681ad) cell_hwr_side_pane_g

0x5aee,	// (0x0005e14d) cell_hwr_side_pane_t1

0x0f85,	// (0x000595e4) cell_hwr_side_pane_t1_copy1

0x0f93,	// (0x000595f2) cell_hwr_candidate_pane_g1

0x0fc2,	// (0x00059621) cell_hwr_candidate_pane_t1

0x5540,	// (0x0005db9f) cell_vkb_candidate_pane_g2

0x5b32,	// (0x0005e191) cell_vkb_candidate_pane_t1

0x0d18,	// (0x00059377) bg_popup_fep_shadow_pane_ParamLimits

0x0d18,	// (0x00059377) bg_popup_fep_shadow_pane

0x0dcf,	// (0x0005942e) bg_fep_hwr_top_pane_g4

0x55c5,	// (0x0005dc24) bg_hwr_side_pane_g1_ParamLimits

0x55c5,	// (0x0005dc24) bg_hwr_side_pane_g1

0xb80f,	// (0x00063e6e) cell_hwr_side_pane_ParamLimits

0xb80f,	// (0x00063e6e) cell_hwr_side_pane

0x0e7f,	// (0x000594de) fep_hwr_write_pane_g1_ParamLimits

0x0e7f,	// (0x000594de) fep_hwr_write_pane_g1

0x0e8c,	// (0x000594eb) fep_hwr_write_pane_g2_ParamLimits

0x0e8c,	// (0x000594eb) fep_hwr_write_pane_g2

0x0e99,	// (0x000594f8) fep_hwr_write_pane_g3_ParamLimits

0x0e99,	// (0x000594f8) fep_hwr_write_pane_g3

0xb82f,	// (0x00063e8e) fep_hwr_write_pane_g4_ParamLimits

0xb82f,	// (0x00063e8e) fep_hwr_write_pane_g4

0x0005,

0xfafa,	// (0x00068159) fep_hwr_write_pane_g_ParamLimits

0xfafa,	// (0x00068159) fep_hwr_write_pane_g

0x0dcf,	// (0x0005942e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0dcf,	// (0x0005942e) bg_fep_hwr_candidate_pane_g2

0x0ebc,	// (0x0005951b) cell_hwr_candidate_pane_ParamLimits

0x0ebc,	// (0x0005951b) cell_hwr_candidate_pane

0x0f0e,	// (0x0005956d) fep_hwr_candidate_pane_g1_ParamLimits

0x5625,	// (0x0005dc84) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5625,	// (0x0005dc84) bg_popup_fep_shadow_pane_cp2

0x57bb,	// (0x0005de1a) fep_vkb_top_pane_g4_ParamLimits

0x57bb,	// (0x0005de1a) fep_vkb_top_pane_g4

0x5801,	// (0x0005de60) fep_vkb_side_pane_g2_ParamLimits

0x5801,	// (0x0005de60) fep_vkb_side_pane_g2

0xa5a8,	// (0x00062c07) list_setting_pane_t4_ParamLimits

0xa5a8,	// (0x00062c07) list_setting_pane_t4

0xa644,	// (0x00062ca3) list_setting_number_pane_t5_ParamLimits

0xa644,	// (0x00062ca3) list_setting_number_pane_t5

0x1f35,	// (0x0005a594) list_double_heading_pane_cp2_ParamLimits

0x1f35,	// (0x0005a594) list_double_heading_pane_cp2

0x5b40,	// (0x0005e19f) list_double_heading_pane_g1_cp2_ParamLimits

0x5b40,	// (0x0005e19f) list_double_heading_pane_g1_cp2

0x5b4c,	// (0x0005e1ab) list_double_heading_pane_g2_cp2_ParamLimits

0x5b4c,	// (0x0005e1ab) list_double_heading_pane_g2_cp2

0x5b60,	// (0x0005e1bf) list_double_heading_pane_t1_cp2_ParamLimits

0x5b60,	// (0x0005e1bf) list_double_heading_pane_t1_cp2

0x5b76,	// (0x0005e1d5) list_double_heading_pane_t2_cp2_ParamLimits

0x5b76,	// (0x0005e1d5) list_double_heading_pane_t2_cp2

0x8a13,	// (0x00061072) aid_value_unit2

0xef77,	// (0x000675d6) popup_preview_fixed_window

0x8bbe,	// (0x0006121d) bg_popup_preview_window_pane_cp02

0x5b88,	// (0x0005e1e7) list_preview_fixed_pane

0x5bce,	// (0x0005e22d) list_empty_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_empty_pane_fp

0x5bce,	// (0x0005e22d) list_single_cale_day_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_cale_day_pane_fp

0x5bce,	// (0x0005e22d) list_single_graphic_heading_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_graphic_heading_pane_fp

0x5bce,	// (0x0005e22d) list_single_graphic_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_graphic_pane_fp

0x5bce,	// (0x0005e22d) list_single_heading_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_heading_pane_fp

0x5bce,	// (0x0005e22d) list_single_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_pane_fp

0x5be7,	// (0x0005e246) list_single_pane_fp_g1_ParamLimits

0x5be7,	// (0x0005e246) list_single_pane_fp_g1

0x5b40,	// (0x0005e19f) list_single_pane_fp_g2_ParamLimits

0x5b40,	// (0x0005e19f) list_single_pane_fp_g2

0x5b4c,	// (0x0005e1ab) list_single_pane_fp_g3_ParamLimits

0x5b4c,	// (0x0005e1ab) list_single_pane_fp_g3

0x5bf3,	// (0x0005e252) list_single_pane_fp_g4_ParamLimits

0x5bf3,	// (0x0005e252) list_single_pane_fp_g4

0x0003,

0xfb61,	// (0x000681c0) list_single_pane_fp_g_ParamLimits

0xfb61,	// (0x000681c0) list_single_pane_fp_g

0xe41c,	// (0x00066a7b) list_single_pane_fp_t1_ParamLimits

0xe41c,	// (0x00066a7b) list_single_pane_fp_t1

0xe433,	// (0x00066a92) list_single_graphic_pane_fp_g1_ParamLimits

0xe433,	// (0x00066a92) list_single_graphic_pane_fp_g1

0x5be7,	// (0x0005e246) list_single_graphic_pane_fp_g2_ParamLimits

0x5be7,	// (0x0005e246) list_single_graphic_pane_fp_g2

0x5b40,	// (0x0005e19f) list_single_graphic_pane_fp_g3_ParamLimits

0x5b40,	// (0x0005e19f) list_single_graphic_pane_fp_g3

0x5b4c,	// (0x0005e1ab) list_single_graphic_pane_fp_g4_ParamLimits

0x5b4c,	// (0x0005e1ab) list_single_graphic_pane_fp_g4

0x5bf3,	// (0x0005e252) list_single_graphic_pane_fp_g5_ParamLimits

0x5bf3,	// (0x0005e252) list_single_graphic_pane_fp_g5

0x0004,

0xfb6a,	// (0x000681c9) list_single_graphic_pane_fp_g_ParamLimits

0xfb6a,	// (0x000681c9) list_single_graphic_pane_fp_g

0xe43f,	// (0x00066a9e) list_single_graphic_pane_fp_t1_ParamLimits

0xe43f,	// (0x00066a9e) list_single_graphic_pane_fp_t1

0xe433,	// (0x00066a92) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe433,	// (0x00066a92) list_single_graphic_heading_pane_fp_g1

0x5be7,	// (0x0005e246) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5be7,	// (0x0005e246) list_single_graphic_heading_pane_fp_g2

0x5b40,	// (0x0005e19f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5b40,	// (0x0005e19f) list_single_graphic_heading_pane_fp_g3

0x5b4c,	// (0x0005e1ab) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5b4c,	// (0x0005e1ab) list_single_graphic_heading_pane_fp_g4

0x5bf3,	// (0x0005e252) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5bf3,	// (0x0005e252) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000681c9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000681c9) list_single_graphic_heading_pane_fp_g

0xe455,	// (0x00066ab4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe455,	// (0x00066ab4) list_single_graphic_heading_pane_fp_t1

0xe46b,	// (0x00066aca) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe46b,	// (0x00066aca) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb75,	// (0x000681d4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb75,	// (0x000681d4) list_single_graphic_heading_pane_fp_t

0xe47d,	// (0x00066adc) list_single_cale_day_pane_fp_g1_ParamLimits

0xe47d,	// (0x00066adc) list_single_cale_day_pane_fp_g1

0x5bff,	// (0x0005e25e) list_single_cale_day_pane_fp_g2_ParamLimits

0x5bff,	// (0x0005e25e) list_single_cale_day_pane_fp_g2

0x38af,	// (0x0005bf0e) list_single_cale_day_pane_fp_g3_ParamLimits

0x38af,	// (0x0005bf0e) list_single_cale_day_pane_fp_g3

0x38d7,	// (0x0005bf36) list_single_cale_day_pane_fp_g4_ParamLimits

0x38d7,	// (0x0005bf36) list_single_cale_day_pane_fp_g4

0x38fb,	// (0x0005bf5a) list_single_cale_day_pane_fp_g5_ParamLimits

0x38fb,	// (0x0005bf5a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7a,	// (0x000681d9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7a,	// (0x000681d9) list_single_cale_day_pane_fp_g

0xe4b5,	// (0x00066b14) list_single_cale_day_pane_fp_t1_ParamLimits

0xe4b5,	// (0x00066b14) list_single_cale_day_pane_fp_t1

0xe4db,	// (0x00066b3a) list_single_cale_day_pane_fp_t2_ParamLimits

0xe4db,	// (0x00066b3a) list_single_cale_day_pane_fp_t2

0xe4f4,	// (0x00066b53) list_single_cale_day_pane_fp_t3_ParamLimits

0xe4f4,	// (0x00066b53) list_single_cale_day_pane_fp_t3

0x0002,

0xfb85,	// (0x000681e4) list_single_cale_day_pane_fp_t_ParamLimits

0xfb85,	// (0x000681e4) list_single_cale_day_pane_fp_t

0x5be7,	// (0x0005e246) list_empty_pane_fp_g1_ParamLimits

0x5be7,	// (0x0005e246) list_empty_pane_fp_g1

0xe50d,	// (0x00066b6c) list_empty_pane_fp_t1

0xe51b,	// (0x00066b7a) list_empty_pane_fp_t2

0x0001,

0xfb8c,	// (0x000681eb) list_empty_pane_fp_t

0x5be7,	// (0x0005e246) list_single_heading_pane_fp_g1_ParamLimits

0x5be7,	// (0x0005e246) list_single_heading_pane_fp_g1

0x5b40,	// (0x0005e19f) list_single_heading_pane_fp_g2_ParamLimits

0x5b40,	// (0x0005e19f) list_single_heading_pane_fp_g2

0x5b4c,	// (0x0005e1ab) list_single_heading_pane_fp_g3_ParamLimits

0x5b4c,	// (0x0005e1ab) list_single_heading_pane_fp_g3

0x0002,

0xfb91,	// (0x000681f0) list_single_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x000681f0) list_single_heading_pane_fp_g

0xe529,	// (0x00066b88) list_single_heading_pane_fp_t1_ParamLimits

0xe529,	// (0x00066b88) list_single_heading_pane_fp_t1

0xe53b,	// (0x00066b9a) list_single_heading_pane_fp_t2_ParamLimits

0xe53b,	// (0x00066b9a) list_single_heading_pane_fp_t2

0x0001,

0xfb98,	// (0x000681f7) list_single_heading_pane_fp_t_ParamLimits

0xfb98,	// (0x000681f7) list_single_heading_pane_fp_t

0xdd10,	// (0x0006636f) aid_size_cell_fast

0x8b93,	// (0x000611f2) soft_indicator_pane_cp1_t1

0xdd4d,	// (0x000663ac) cell_app_pane_cp2_ParamLimits

0xdd4d,	// (0x000663ac) cell_app_pane_cp2

0x0d3a,	// (0x00059399) fep_hwr_candidate_drop_down_list_pane

0x0f28,	// (0x00059587) fep_hwr_candidate_pane_g3_ParamLimits

0x0f28,	// (0x00059587) fep_hwr_candidate_pane_g3

0xe40f,	// (0x00066a6e) fep_hwr_candidate_pane_g4_ParamLimits

0xe40f,	// (0x00066a6e) fep_hwr_candidate_pane_g4

0x0002,

0xfb07,	// (0x00068166) fep_hwr_candidate_pane_g_ParamLimits

0xfb07,	// (0x00068166) fep_hwr_candidate_pane_g

0x56b5,	// (0x0005dd14) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x56b5,	// (0x0005dd14) fep_vkb_candidate_drop_down_list_pane

0x5add,	// (0x0005e13c) fep_vkb_candidate_pane_g3

0x5ae5,	// (0x0005e144) fep_vkb_candidate_pane_g4

0x0002,

0xfb34,	// (0x00068193) fep_vkb_candidate_pane_g

0x0f93,	// (0x000595f2) cell_hwr_candidate_pane_g1_ParamLimits

0x0fa1,	// (0x00059600) cell_hwr_candidate_pane_g3_ParamLimits

0x0fa1,	// (0x00059600) cell_hwr_candidate_pane_g3

0x6f39,	// (0x0005f598) cell_hwr_candidate_pane_g4_ParamLimits

0x6f39,	// (0x0005f598) cell_hwr_candidate_pane_g4

0x0002,

0xfb53,	// (0x000681b2) cell_hwr_candidate_pane_g_ParamLimits

0xfb53,	// (0x000681b2) cell_hwr_candidate_pane_g

0x5afc,	// (0x0005e15b) cell_vkb_candidate_pane_g3_ParamLimits

0x5afc,	// (0x0005e15b) cell_vkb_candidate_pane_g3

0x5b17,	// (0x0005e176) cell_vkb_candidate_pane_g4_ParamLimits

0x5b17,	// (0x0005e176) cell_vkb_candidate_pane_g4

0x5c0b,	// (0x0005e26a) cell_app_pane_cp2_g1_ParamLimits

0x5c0b,	// (0x0005e26a) cell_app_pane_cp2_g1

0x5c29,	// (0x0005e288) cell_app_pane_cp2_g2_ParamLimits

0x5c29,	// (0x0005e288) cell_app_pane_cp2_g2

0x0001,

0xfb9d,	// (0x000681fc) cell_app_pane_cp2_g_ParamLimits

0xfb9d,	// (0x000681fc) cell_app_pane_cp2_g

0x5c35,	// (0x0005e294) cell_app_pane_cp2_t1_ParamLimits

0x5c35,	// (0x0005e294) cell_app_pane_cp2_t1

0x915b,	// (0x000617ba) grid_highlight_pane_cp1_ParamLimits

0x915b,	// (0x000617ba) grid_highlight_pane_cp1

0x0fe0,	// (0x0005963f) cell_hwr_candidate_pane_cp1_ParamLimits

0x0fe0,	// (0x0005963f) cell_hwr_candidate_pane_cp1

0x0f93,	// (0x000595f2) fep_hwr_candidate_drop_down_list_pane_g1

0x1004,	// (0x00059663) fep_hwr_candidate_drop_down_list_pane_g2

0x1011,	// (0x00059670) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x00068201) fep_hwr_candidate_drop_down_list_pane_g

0x101e,	// (0x0005967d) fep_hwr_candidate_drop_down_list_scroll_pane

0x1027,	// (0x00059686) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1027,	// (0x00059686) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1034,	// (0x00059693) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1034,	// (0x00059693) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1041,	// (0x000596a0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1041,	// (0x000596a0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x104e,	// (0x000596ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x104e,	// (0x000596ad) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1069,	// (0x000596c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1069,	// (0x000596c8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1084,	// (0x000596e3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1084,	// (0x000596e3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x109f,	// (0x000596fe) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x109f,	// (0x000596fe) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x10ba,	// (0x00059719) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x10ba,	// (0x00059719) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x00068208) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x00068208) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5c47,	// (0x0005e2a6) cell_vkb_candidate_pane_cp1_ParamLimits

0x5c47,	// (0x0005e2a6) cell_vkb_candidate_pane_cp1

0x57bb,	// (0x0005de1a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x57bb,	// (0x0005de1a) fep_vkb_candidate_drop_down_list_pane_g1

0x5c6d,	// (0x0005e2cc) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5c6d,	// (0x0005e2cc) fep_vkb_candidate_drop_down_list_pane_g2

0x5c7a,	// (0x0005e2d9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5c7a,	// (0x0005e2d9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbba,	// (0x00068219) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbba,	// (0x00068219) fep_vkb_candidate_drop_down_list_pane_g

0x5c87,	// (0x0005e2e6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5c87,	// (0x0005e2e6) fep_vkb_candidate_drop_down_list_scroll_pane

0x5c94,	// (0x0005e2f3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c94,	// (0x0005e2f3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ca1,	// (0x0005e300) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ca1,	// (0x0005e300) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5cad,	// (0x0005e30c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5cad,	// (0x0005e30c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5cb9,	// (0x0005e318) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5cb9,	// (0x0005e318) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5cda,	// (0x0005e339) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5cda,	// (0x0005e339) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5cfb,	// (0x0005e35a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5cfb,	// (0x0005e35a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5d1c,	// (0x0005e37b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d1c,	// (0x0005e37b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5d3d,	// (0x0005e39c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d3d,	// (0x0005e39c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc1,	// (0x00068220) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc1,	// (0x00068220) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9e30,	// (0x0006248f) title_pane_g1_ParamLimits

0x9e43,	// (0x000624a2) title_pane_g2_ParamLimits

0xf529,	// (0x00067b88) title_pane_g_ParamLimits

0x1eee,	// (0x0005a54d) aid_call2_pane

0x1ef6,	// (0x0005a555) aid_call_pane

0x1efe,	// (0x0005a55d) popup_clock_analogue_window_g1

0x1efe,	// (0x0005a55d) popup_clock_analogue_window_g2

0xf266,	// (0x000678c5) popup_clock_analogue_window_g3

0xf26f,	// (0x000678ce) popup_clock_analogue_window_g4

0x8a25,	// (0x00061084) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x00067d37) popup_clock_analogue_window_g

0xf277,	// (0x000678d6) popup_clock_analogue_window_t1

0xf285,	// (0x000678e4) clock_digital_number_pane_ParamLimits

0xf285,	// (0x000678e4) clock_digital_number_pane

0xf291,	// (0x000678f0) clock_digital_number_pane_cp02_ParamLimits

0xf291,	// (0x000678f0) clock_digital_number_pane_cp02

0xf29d,	// (0x000678fc) clock_digital_number_pane_cp03_ParamLimits

0xf29d,	// (0x000678fc) clock_digital_number_pane_cp03

0xf2a9,	// (0x00067908) clock_digital_number_pane_cp04_ParamLimits

0xf2a9,	// (0x00067908) clock_digital_number_pane_cp04

0xf2b5,	// (0x00067914) clock_digital_separator_pane_ParamLimits

0xf2b5,	// (0x00067914) clock_digital_separator_pane

0xf2c1,	// (0x00067920) popup_clock_digital_window_t1_ParamLimits

0xf2c1,	// (0x00067920) popup_clock_digital_window_t1

0x8a25,	// (0x00061084) clock_digital_number_pane_g1

0x8a25,	// (0x00061084) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x00067d42) clock_digital_number_pane_g

0x8a25,	// (0x00061084) clock_digital_separator_pane_g1

0x8a25,	// (0x00061084) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x00067d42) clock_digital_separator_pane_g

0xbfee,	// (0x0006464d) aid_fill_nsta_ParamLimits

0xc126,	// (0x00064785) indicator_nsta_pane_ParamLimits

0x2b4a,	// (0x0005b1a9) popup_clock_analogue_window

0x2b4a,	// (0x0005b1a9) popup_clock_digital_window

0xc9bd,	// (0x0006501c) grid_indicator_nsta_pane_ParamLimits

0x4f95,	// (0x0005d5f4) clock_nsta_pane_t2

0x0001,

0xfa87,	// (0x000680e6) clock_nsta_pane_t

0xf233,	// (0x00067892) aid_size_max_handle

0xa93f,	// (0x00062f9e) aid_size_min_handle

0x250a,	// (0x0005ab69) editor_scroll_pane

0x5d58,	// (0x0005e3b7) ex_editor_pane

0xdcd6,	// (0x00066335) scroll_pane_cp13

0x90fa,	// (0x00061759) scroll_pane_cp14

0x1f2d,	// (0x0005a58c) scroll_pane_cp36

0xa9cc,	// (0x0006302b) list_single_graphic_hl_pane_cp2_ParamLimits

0xa9cc,	// (0x0006302b) list_single_graphic_hl_pane_cp2

0xc84a,	// (0x00064ea9) list_single_graphic_hl_pane_ParamLimits

0xc84a,	// (0x00064ea9) list_single_graphic_hl_pane

0xe551,	// (0x00066bb0) aid_size_min_hl_cp1

0x5d60,	// (0x0005e3bf) list_highlight_pane_cp34_ParamLimits

0x5d60,	// (0x0005e3bf) list_highlight_pane_cp34

0x5d71,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_ParamLimits

0x5d71,	// (0x0005e3d0) list_single_graphic_hl_pane_g1

0xb844,	// (0x00063ea3) list_single_graphic_hl_pane_g2_ParamLimits

0xb844,	// (0x00063ea3) list_single_graphic_hl_pane_g2

0xb844,	// (0x00063ea3) list_single_graphic_hl_pane_g3_ParamLimits

0xb844,	// (0x00063ea3) list_single_graphic_hl_pane_g3

0x392b,	// (0x0005bf8a) list_single_graphic_hl_pane_g4_ParamLimits

0x392b,	// (0x0005bf8a) list_single_graphic_hl_pane_g4

0xcd28,	// (0x00065387) list_single_graphic_hl_pane_g5_ParamLimits

0xcd28,	// (0x00065387) list_single_graphic_hl_pane_g5

0x0004,

0xfbd2,	// (0x00068231) list_single_graphic_hl_pane_g_ParamLimits

0xfbd2,	// (0x00068231) list_single_graphic_hl_pane_g

0xb850,	// (0x00063eaf) list_single_graphic_hl_pane_t1_ParamLimits

0xb850,	// (0x00063eaf) list_single_graphic_hl_pane_t1

0x5d7e,	// (0x0005e3dd) aid_size_min_hl_cp2

0x5d87,	// (0x0005e3e6) list_highlight_pane_cp34_cp2_ParamLimits

0x5d87,	// (0x0005e3e6) list_highlight_pane_cp34_cp2

0x5d71,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5d71,	// (0x0005e3d0) list_single_graphic_hl_pane_g1_cp2

0x5d94,	// (0x0005e3f3) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5d94,	// (0x0005e3f3) list_single_graphic_hl_pane_g2_cp2

0x5da0,	// (0x0005e3ff) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5da0,	// (0x0005e3ff) list_single_graphic_hl_pane_g3_cp2

0x5dae,	// (0x0005e40d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5dae,	// (0x0005e40d) list_single_graphic_hl_pane_g4_cp2

0x5dba,	// (0x0005e419) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5dba,	// (0x0005e419) list_single_graphic_hl_pane_g5_cp2

0xad1a,	// (0x00063379) control_pane_g4_ParamLimits

0xad1a,	// (0x00063379) control_pane_g4

0x2831,	// (0x0005ae90) bg_popup_sub_pane_cp10_ParamLimits

0x554a,	// (0x0005dba9) list_choice_list_pane_ParamLimits

0x5559,	// (0x0005dbb8) scroll_pane_cp23

0x8bbe,	// (0x0006121d) bg_popup_preview_window_pane_cp02_ParamLimits

0x5b88,	// (0x0005e1e7) list_preview_fixed_pane_ParamLimits

0x5b9e,	// (0x0005e1fd) list_preview_fixed_pane_cp_ParamLimits

0x5b9e,	// (0x0005e1fd) list_preview_fixed_pane_cp

0x5baa,	// (0x0005e209) popup_preview_fixed_window_g1_ParamLimits

0x5baa,	// (0x0005e209) popup_preview_fixed_window_g1

0x5bb6,	// (0x0005e215) popup_preview_fixed_window_g2_ParamLimits

0x5bb6,	// (0x0005e215) popup_preview_fixed_window_g2

0x0002,

0xfb5a,	// (0x000681b9) popup_preview_fixed_window_g_ParamLimits

0xfb5a,	// (0x000681b9) popup_preview_fixed_window_g

0xf1a5,	// (0x00067804) aid_navi_side_left_pane_ParamLimits

0xf1ba,	// (0x00067819) aid_navi_side_right_pane_ParamLimits

0xf1d2,	// (0x00067831) navi_icon_pane_stacon_ParamLimits

0xf1e6,	// (0x00067845) navi_navi_pane_stacon_ParamLimits

0xf1d2,	// (0x00067831) navi_text_pane_stacon_ParamLimits

0xee68,	// (0x000674c7) main_text_info_pane

0x5de4,	// (0x0005e443) listscroll_text_info_pane

0x5dec,	// (0x0005e44b) list_text_info_pane_ParamLimits

0x5dec,	// (0x0005e44b) list_text_info_pane

0x5dfb,	// (0x0005e45a) scroll_pane_cp24_ParamLimits

0x5dfb,	// (0x0005e45a) scroll_pane_cp24

0xcd3c,	// (0x0006539b) list_text_info_pane_t1_ParamLimits

0xcd3c,	// (0x0006539b) list_text_info_pane_t1

0xae88,	// (0x000634e7) popup_fast_swap2_window_ParamLimits

0xae88,	// (0x000634e7) popup_fast_swap2_window

0x5e3e,	// (0x0005e49d) aid_size_cell_fast2

0x8a1b,	// (0x0006107a) bg_popup_window_pane_cp17

0x31b5,	// (0x0005b814) heading_pane_cp2

0x31bd,	// (0x0005b81c) listscroll_fast2_pane

0x5e48,	// (0x0005e4a7) grid_fast2_pane

0x5e52,	// (0x0005e4b1) listscroll_fast2_pane_g1

0x5e5c,	// (0x0005e4bb) listscroll_fast2_pane_g2

0x0001,

0xfbdd,	// (0x0006823c) listscroll_fast2_pane_g

0xdcd6,	// (0x00066335) scroll_pane_cp26

0x5e66,	// (0x0005e4c5) cell_fast2_pane_ParamLimits

0x5e66,	// (0x0005e4c5) cell_fast2_pane

0x5e7d,	// (0x0005e4dc) cell_fast2_pane_g1

0x5e86,	// (0x0005e4e5) cell_fast2_pane_g2

0x5e8f,	// (0x0005e4ee) cell_fast2_pane_g3

0x0002,

0xfbe2,	// (0x00068241) cell_fast2_pane_g

0x8ec1,	// (0x00061520) grid_highlight_pane_cp9

0x015f,	// (0x000587be) main_eswt_pane_ParamLimits

0x015f,	// (0x000587be) main_eswt_pane

0x5e10,	// (0x0005e46f) list_single_text_info_pane

0x5e97,	// (0x0005e4f6) eswt_ctrl_button_pane

0x5e97,	// (0x0005e4f6) eswt_ctrl_canvas_pane

0x5e9f,	// (0x0005e4fe) eswt_ctrl_combo_pane

0x5e97,	// (0x0005e4f6) eswt_ctrl_default_pane

0x5e97,	// (0x0005e4f6) eswt_ctrl_label_pane

0x5ea7,	// (0x0005e506) eswt_ctrl_wait_pane

0x5eaf,	// (0x0005e50e) eswt_shell_pane

0x8a1b,	// (0x0006107a) listscroll_eswt_app_pane

0x5ecf,	// (0x0005e52e) popup_eswt_tasktip_window_ParamLimits

0x5ecf,	// (0x0005e52e) popup_eswt_tasktip_window

0x2df3,	// (0x0005b452) bg_popup_window_pane_cp18

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_ParamLimits

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_ParamLimits

0x5eed,	// (0x0005e54c) eswt_control_pane_g2

0x5efa,	// (0x0005e559) eswt_control_pane_g3_ParamLimits

0x5efa,	// (0x0005e559) eswt_control_pane_g3

0x5f07,	// (0x0005e566) eswt_control_pane_g4_ParamLimits

0x5f07,	// (0x0005e566) eswt_control_pane_g4

0x0003,

0xfbe9,	// (0x00068248) eswt_control_pane_g_ParamLimits

0xfbe9,	// (0x00068248) eswt_control_pane_g

0x915b,	// (0x000617ba) bg_button_pane_ParamLimits

0x915b,	// (0x000617ba) bg_button_pane

0x8ed6,	// (0x00061535) common_borders_pane_copy2_ParamLimits

0x8ed6,	// (0x00061535) common_borders_pane_copy2

0x5f14,	// (0x0005e573) control_button_pane_g1_ParamLimits

0x5f14,	// (0x0005e573) control_button_pane_g1

0x5f20,	// (0x0005e57f) control_button_pane_g2_ParamLimits

0x5f20,	// (0x0005e57f) control_button_pane_g2

0x5f2c,	// (0x0005e58b) control_button_pane_g3_ParamLimits

0x5f2c,	// (0x0005e58b) control_button_pane_g3

0x0002,

0xfbf2,	// (0x00068251) control_button_pane_g_ParamLimits

0xfbf2,	// (0x00068251) control_button_pane_g

0x5f40,	// (0x0005e59f) control_button_pane_t1

0x5f4e,	// (0x0005e5ad) control_button_pane_t2

0x0001,

0xfbf9,	// (0x00068258) control_button_pane_t

0x2d7f,	// (0x0005b3de) bg_button_pane_g1

0x2d8f,	// (0x0005b3ee) bg_button_pane_g2

0x2d87,	// (0x0005b3e6) bg_button_pane_g3

0x2d9f,	// (0x0005b3fe) bg_button_pane_g4

0x2d97,	// (0x0005b3f6) bg_button_pane_g5

0x2da7,	// (0x0005b406) bg_button_pane_g6

0x2daf,	// (0x0005b40e) bg_button_pane_g7

0x2dbf,	// (0x0005b41e) bg_button_pane_g8

0x2db7,	// (0x0005b416) bg_button_pane_g9

0x0008,

0xf841,	// (0x00067ea0) bg_button_pane_g

0x5505,	// (0x0005db64) common_borders_pane_ParamLimits

0x5505,	// (0x0005db64) common_borders_pane

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy1_ParamLimits

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy1

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy1_ParamLimits

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy1

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy1_ParamLimits

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy1

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy1_ParamLimits

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy1

0x5540,	// (0x0005db9f) bg_eswt_ctrl_canvas_pane_g1

0x5505,	// (0x0005db64) common_borders_pane_cp2_ParamLimits

0x5505,	// (0x0005db64) common_borders_pane_cp2

0x5505,	// (0x0005db64) common_borders_pane_cp3_ParamLimits

0x5505,	// (0x0005db64) common_borders_pane_cp3

0x5f5c,	// (0x0005e5bb) separator_horizontal_pane

0x5f64,	// (0x0005e5c3) separator_vertical_pane

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy2_ParamLimits

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy2

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy2_ParamLimits

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy2

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy2_ParamLimits

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy2

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy2_ParamLimits

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy2

0x8a1b,	// (0x0006107a) common_borders_pane_cp4

0x5f6d,	// (0x0005e5cc) separator_horizontal_pane_g1

0x5f76,	// (0x0005e5d5) separator_horizontal_pane_g2

0x5f7f,	// (0x0005e5de) separator_horizontal_pane_g3

0x0002,

0xfbfe,	// (0x0006825d) separator_horizontal_pane_g

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy3_ParamLimits

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy3

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy3_ParamLimits

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy3

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy3_ParamLimits

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy3

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy3_ParamLimits

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy3

0x8a1b,	// (0x0006107a) common_borders_pane_cp5

0x5f88,	// (0x0005e5e7) separator_vertical_pane_g1

0x5f91,	// (0x0005e5f0) separator_vertical_pane_g2

0x5f9a,	// (0x0005e5f9) separator_vertical_pane_g3

0x0002,

0xfc05,	// (0x00068264) separator_vertical_pane_g

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy4_ParamLimits

0x5ee0,	// (0x0005e53f) eswt_control_pane_g1_copy4

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy4_ParamLimits

0x5eed,	// (0x0005e54c) eswt_control_pane_g2_copy4

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy4_ParamLimits

0x5efa,	// (0x0005e559) eswt_control_pane_g3_copy4

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy4_ParamLimits

0x5f07,	// (0x0005e566) eswt_control_pane_g4_copy4

0xcd5e,	// (0x000653bd) eswt_ctrl_combo_button_pane

0xcd66,	// (0x000653c5) eswt_ctrl_input_pane

0xcd6e,	// (0x000653cd) popup_choice_list_window_cp70

0xcd76,	// (0x000653d5) eswt_ctrl_input_pane_t1

0x8a1b,	// (0x0006107a) input_focus_pane_cp70

0x5505,	// (0x0005db64) bg_button_pane_cp70_ParamLimits

0x5505,	// (0x0005db64) bg_button_pane_cp70

0xcd84,	// (0x000653e3) eswt_ctrl_combo_button_pane_g1

0x5fd1,	// (0x0005e630) wait_bar_pane_cp70

0x2df3,	// (0x0005b452) bg_popup_window_pane_cp70_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_window_pane_cp70

0x5fd9,	// (0x0005e638) popup_eswt_tasktip_window_t1

0x5fef,	// (0x0005e64e) wait_bar_pane_cp71_ParamLimits

0x5fef,	// (0x0005e64e) wait_bar_pane_cp71

0x5ffb,	// (0x0005e65a) grid_eswt_app_pane

0xdf04,	// (0x00066563) scroll_pane_cp70

0xcd8c,	// (0x000653eb) cell_eswt_app_pane_ParamLimits

0xcd8c,	// (0x000653eb) cell_eswt_app_pane

0xcdbe,	// (0x0006541d) cell_eswt_app_pane_g1_ParamLimits

0xcdbe,	// (0x0006541d) cell_eswt_app_pane_g1

0xcded,	// (0x0006544c) cell_eswt_app_pane_g2_ParamLimits

0xcded,	// (0x0006544c) cell_eswt_app_pane_g2

0x0001,

0xfc0c,	// (0x0006826b) cell_eswt_app_pane_g_ParamLimits

0xfc0c,	// (0x0006826b) cell_eswt_app_pane_g

0xce16,	// (0x00065475) cell_eswt_app_pane_t1_ParamLimits

0xce16,	// (0x00065475) cell_eswt_app_pane_t1

0x60c0,	// (0x0005e71f) grid_highlight_pane_cp70_ParamLimits

0x60c0,	// (0x0005e71f) grid_highlight_pane_cp70

0x23db,	// (0x0005aa3a) set_content_pane_g1

0xacac,	// (0x0006330b) status_small_volume_pane

0x110b,	// (0x0005976a) status_small_volume_pane_g1

0x1113,	// (0x00059772) volume_small2_pane

0x111c,	// (0x0005977b) volume_small2_pane_g1

0x1125,	// (0x00059784) volume_small2_pane_g2

0x112e,	// (0x0005978d) volume_small2_pane_g3

0x1137,	// (0x00059796) volume_small2_pane_g4

0x1140,	// (0x0005979f) volume_small2_pane_g5

0x1149,	// (0x000597a8) volume_small2_pane_g6

0x1152,	// (0x000597b1) volume_small2_pane_g7

0x115b,	// (0x000597ba) volume_small2_pane_g8

0x1164,	// (0x000597c3) volume_small2_pane_g9

0x116d,	// (0x000597cc) volume_small2_pane_g10

0x0009,

0xfc11,	// (0x00068270) volume_small2_pane_g

0x590f,	// (0x0005df6e) fep_vkb_top_text_pane_g1_ParamLimits

0xccd0,	// (0x0006532f) fep_vkb_top_text_pane_t1_ParamLimits

0x5bc2,	// (0x0005e221) popup_preview_fixed_window_g3_ParamLimits

0x5bc2,	// (0x0005e221) popup_preview_fixed_window_g3

0xb526,	// (0x00063b85) popup_toolbar_trans_pane

0xc68b,	// (0x00064cea) aid_height_set_list_ParamLimits

0x431f,	// (0x0005c97e) aid_size_parent_ParamLimits

0x2831,	// (0x0005ae90) list_highlight_pane_cp2_ParamLimits

0x23db,	// (0x0005aa3a) set_content_pane_g1_ParamLimits

0xc85e,	// (0x00064ebd) list_single_image_pane_ParamLimits

0xc85e,	// (0x00064ebd) list_single_image_pane

0xce48,	// (0x000654a7) aid_size_cell_image_ParamLimits

0xce48,	// (0x000654a7) aid_size_cell_image

0xce55,	// (0x000654b4) grid_single_image_pane_ParamLimits

0xce55,	// (0x000654b4) grid_single_image_pane

0x9169,	// (0x000617c8) list_single_image_pane_g1_ParamLimits

0x9169,	// (0x000617c8) list_single_image_pane_g1

0x9175,	// (0x000617d4) list_single_image_pane_g2_ParamLimits

0x9175,	// (0x000617d4) list_single_image_pane_g2

0x0001,

0xfc26,	// (0x00068285) list_single_image_pane_g_ParamLimits

0xfc26,	// (0x00068285) list_single_image_pane_g

0x60e7,	// (0x0005e746) list_single_image_pane_t1_ParamLimits

0x60e7,	// (0x0005e746) list_single_image_pane_t1

0xce63,	// (0x000654c2) cell_image_list_pane_ParamLimits

0xce63,	// (0x000654c2) cell_image_list_pane

0xce79,	// (0x000654d8) cell_image_list_pane_g1

0xce82,	// (0x000654e1) cell_image_list_pane_g2

0x0001,

0xfc2b,	// (0x0006828a) cell_image_list_pane_g

0x6127,	// (0x0005e786) aid_size_cell_tb_trans_pane

0x915b,	// (0x000617ba) bg_tb_trans_pane

0x6139,	// (0x0005e798) grid_tb_trans_pane

0x2d7f,	// (0x0005b3de) bg_tb_trans_pane_g1

0x2d8f,	// (0x0005b3ee) bg_tb_trans_pane_g2

0x2d87,	// (0x0005b3e6) bg_tb_trans_pane_g3

0x2d9f,	// (0x0005b3fe) bg_tb_trans_pane_g4

0x2d97,	// (0x0005b3f6) bg_tb_trans_pane_g5

0x2dbf,	// (0x0005b41e) bg_tb_trans_pane_g6

0x2db7,	// (0x0005b416) bg_tb_trans_pane_g7

0x2da7,	// (0x0005b406) bg_tb_trans_pane_g8

0x2daf,	// (0x0005b40e) bg_tb_trans_pane_g9

0x0008,

0xfc30,	// (0x0006828f) bg_tb_trans_pane_g

0x614d,	// (0x0005e7ac) cell_toolbar_trans_pane_ParamLimits

0x614d,	// (0x0005e7ac) cell_toolbar_trans_pane

0x5540,	// (0x0005db9f) cell_toolbar_trans_pane_g1

0xcaa0,	// (0x000650ff) list_form2_midp_pane_t1

0xcaae,	// (0x0006510d) list_form2_midp_pane_t2

0x0001,

0xfacd,	// (0x0006812c) list_form2_midp_pane_t

0x5194,	// (0x0005d7f3) scroll_pane_cp51_ParamLimits

0x535b,	// (0x0005d9ba) form2_midp_wait_pane_g1

0x5364,	// (0x0005d9c3) form2_midp_wait_pane_g2

0x536d,	// (0x0005d9cc) form2_midp_wait_pane_g3

0x0002,

0xfae2,	// (0x00068141) form2_midp_wait_pane_g

0x8a7d,	// (0x000610dc) list_highlight_pane_cp21_ParamLimits

0x53a6,	// (0x0005da05) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x53b5,	// (0x0005da14) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x37cd,	// (0x0005be2c) list_single_2graphic_im_pane_ParamLimits

0x37cd,	// (0x0005be2c) list_single_2graphic_im_pane

0xce8b,	// (0x000654ea) list_single_2graphic_im_pane_g1_ParamLimits

0xce8b,	// (0x000654ea) list_single_2graphic_im_pane_g1

0xce9c,	// (0x000654fb) list_single_2graphic_im_pane_g2_ParamLimits

0xce9c,	// (0x000654fb) list_single_2graphic_im_pane_g2

0xcea8,	// (0x00065507) list_single_2graphic_im_pane_g3_ParamLimits

0xcea8,	// (0x00065507) list_single_2graphic_im_pane_g3

0x0003,

0xfc43,	// (0x000682a2) list_single_2graphic_im_pane_g_ParamLimits

0xfc43,	// (0x000682a2) list_single_2graphic_im_pane_g

0xcebc,	// (0x0006551b) list_single_2graphic_im_pane_t1_ParamLimits

0xcebc,	// (0x0006551b) list_single_2graphic_im_pane_t1

0x5bce,	// (0x0005e22d) list_single_graphic_2heading_pane_fp_ParamLimits

0x5bce,	// (0x0005e22d) list_single_graphic_2heading_pane_fp

0xe433,	// (0x00066a92) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe433,	// (0x00066a92) list_single_graphic_2heading_pane_fp_g1

0x5be7,	// (0x0005e246) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5be7,	// (0x0005e246) list_single_graphic_2heading_pane_fp_g2

0x5b40,	// (0x0005e19f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5b40,	// (0x0005e19f) list_single_graphic_2heading_pane_fp_g3

0x5b4c,	// (0x0005e1ab) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5b4c,	// (0x0005e1ab) list_single_graphic_2heading_pane_fp_g4

0x5bf3,	// (0x0005e252) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5bf3,	// (0x0005e252) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000681c9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000681c9) list_single_graphic_2heading_pane_fp_g

0xe55a,	// (0x00066bb9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe55a,	// (0x00066bb9) list_single_graphic_2heading_pane_fp_t1

0xe46b,	// (0x00066aca) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe46b,	// (0x00066aca) list_single_graphic_2heading_pane_fp_t2

0xe570,	// (0x00066bcf) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe570,	// (0x00066bcf) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4c,	// (0x000682ab) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4c,	// (0x000682ab) list_single_graphic_2heading_pane_fp_t

0x55d1,	// (0x0005dc30) fep_hwr_write_pane_g5_ParamLimits

0x55d1,	// (0x0005dc30) fep_hwr_write_pane_g5

0x55dd,	// (0x0005dc3c) fep_hwr_write_pane_g6_ParamLimits

0x55dd,	// (0x0005dc3c) fep_hwr_write_pane_g6

0x5eaf,	// (0x0005e50e) eswt_shell_pane_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_window_pane_cp18_ParamLimits

0x4265,	// (0x0005c8c4) heading_pane_cp70

0x5fd9,	// (0x0005e638) popup_eswt_tasktip_window_t1_ParamLimits

0xc04b,	// (0x000646aa) aid_touch_tab_arrow_left

0xc061,	// (0x000646c0) aid_touch_tab_arrow_right

0x9e67,	// (0x000624c6) title_pane_g3_ParamLimits

0x9e67,	// (0x000624c6) title_pane_g3

0x911a,	// (0x00061779) set_value_pane_g1

0xb526,	// (0x00063b85) popup_toolbar_trans_pane_ParamLimits

0x6127,	// (0x0005e786) aid_size_cell_tb_trans_pane_ParamLimits

0x915b,	// (0x000617ba) bg_tb_trans_pane_ParamLimits

0x6139,	// (0x0005e798) grid_tb_trans_pane_ParamLimits

0x8bbe,	// (0x0006121d) cont_note_pane_ParamLimits

0x8bbe,	// (0x0006121d) cont_note_pane

0x8ed6,	// (0x00061535) cont_snote2_single_text_pane_ParamLimits

0x8ed6,	// (0x00061535) cont_snote2_single_text_pane

0x8ed6,	// (0x00061535) cont_snote2_single_graphic_pane_ParamLimits

0x8ed6,	// (0x00061535) cont_snote2_single_graphic_pane

0x33e5,	// (0x0005ba44) cont_note_wait_pane_ParamLimits

0x33e5,	// (0x0005ba44) cont_note_wait_pane

0x33e5,	// (0x0005ba44) cont_note_image_pane_ParamLimits

0x33e5,	// (0x0005ba44) cont_note_image_pane

0x61e1,	// (0x0005e840) popup_note2_window_g1_ParamLimits

0x61e1,	// (0x0005e840) popup_note2_window_g1

0x6212,	// (0x0005e871) popup_note2_window_t1_ParamLimits

0x6212,	// (0x0005e871) popup_note2_window_t1

0x6257,	// (0x0005e8b6) popup_note2_window_t2_ParamLimits

0x6257,	// (0x0005e8b6) popup_note2_window_t2

0x629c,	// (0x0005e8fb) popup_note2_window_t3_ParamLimits

0x629c,	// (0x0005e8fb) popup_note2_window_t3

0x62e1,	// (0x0005e940) popup_note2_window_t4_ParamLimits

0x62e1,	// (0x0005e940) popup_note2_window_t4

0x8c42,	// (0x000612a1) popup_note2_window_t5_ParamLimits

0x8c42,	// (0x000612a1) popup_note2_window_t5

0x0004,

0xfc58,	// (0x000682b7) popup_note2_window_t_ParamLimits

0xfc58,	// (0x000682b7) popup_note2_window_t

0x6310,	// (0x0005e96f) popup_note2_image_window_g1_ParamLimits

0x6310,	// (0x0005e96f) popup_note2_image_window_g1

0x631c,	// (0x0005e97b) popup_note2_image_window_g2_ParamLimits

0x631c,	// (0x0005e97b) popup_note2_image_window_g2

0x0001,

0xfc63,	// (0x000682c2) popup_note2_image_window_g_ParamLimits

0xfc63,	// (0x000682c2) popup_note2_image_window_g

0x632e,	// (0x0005e98d) popup_note2_image_window_t1_ParamLimits

0x632e,	// (0x0005e98d) popup_note2_image_window_t1

0x6346,	// (0x0005e9a5) popup_note2_image_window_t2_ParamLimits

0x6346,	// (0x0005e9a5) popup_note2_image_window_t2

0x635e,	// (0x0005e9bd) popup_note2_image_window_t3_ParamLimits

0x635e,	// (0x0005e9bd) popup_note2_image_window_t3

0x0002,

0xfc68,	// (0x000682c7) popup_note2_image_window_t_ParamLimits

0xfc68,	// (0x000682c7) popup_note2_image_window_t

0x33f3,	// (0x0005ba52) popup_note2_wait_window_g1_ParamLimits

0x33f3,	// (0x0005ba52) popup_note2_wait_window_g1

0x637a,	// (0x0005e9d9) popup_note2_wait_window_g2_ParamLimits

0x637a,	// (0x0005e9d9) popup_note2_wait_window_g2

0x340b,	// (0x0005ba6a) popup_note2_wait_window_g3_ParamLimits

0x340b,	// (0x0005ba6a) popup_note2_wait_window_g3

0x0002,

0xfc6f,	// (0x000682ce) popup_note2_wait_window_g_ParamLimits

0xfc6f,	// (0x000682ce) popup_note2_wait_window_g

0x6386,	// (0x0005e9e5) popup_note2_wait_window_t1_ParamLimits

0x6386,	// (0x0005e9e5) popup_note2_wait_window_t1

0x63a4,	// (0x0005ea03) popup_note2_wait_window_t2_ParamLimits

0x63a4,	// (0x0005ea03) popup_note2_wait_window_t2

0x63c2,	// (0x0005ea21) popup_note2_wait_window_t3_ParamLimits

0x63c2,	// (0x0005ea21) popup_note2_wait_window_t3

0x63d4,	// (0x0005ea33) popup_note2_wait_window_t4_ParamLimits

0x63d4,	// (0x0005ea33) popup_note2_wait_window_t4

0x0003,

0xfc76,	// (0x000682d5) popup_note2_wait_window_t_ParamLimits

0xfc76,	// (0x000682d5) popup_note2_wait_window_t

0x63e6,	// (0x0005ea45) wait_bar2_pane_ParamLimits

0x63e6,	// (0x0005ea45) wait_bar2_pane

0x63fe,	// (0x0005ea5d) popup_snote2_single_text_window_g1_ParamLimits

0x63fe,	// (0x0005ea5d) popup_snote2_single_text_window_g1

0x6426,	// (0x0005ea85) popup_snote2_single_text_window_t1_ParamLimits

0x6426,	// (0x0005ea85) popup_snote2_single_text_window_t1

0x6472,	// (0x0005ead1) popup_snote2_single_text_window_t2_ParamLimits

0x6472,	// (0x0005ead1) popup_snote2_single_text_window_t2

0x64be,	// (0x0005eb1d) popup_snote2_single_text_window_t3_ParamLimits

0x64be,	// (0x0005eb1d) popup_snote2_single_text_window_t3

0x64ff,	// (0x0005eb5e) popup_snote2_single_text_window_t4_ParamLimits

0x64ff,	// (0x0005eb5e) popup_snote2_single_text_window_t4

0x6535,	// (0x0005eb94) popup_snote2_single_text_window_t5_ParamLimits

0x6535,	// (0x0005eb94) popup_snote2_single_text_window_t5

0x0004,

0xfc7f,	// (0x000682de) popup_snote2_single_text_window_t_ParamLimits

0xfc7f,	// (0x000682de) popup_snote2_single_text_window_t

0x6560,	// (0x0005ebbf) popup_snote2_single_graphic_window_g1_ParamLimits

0x6560,	// (0x0005ebbf) popup_snote2_single_graphic_window_g1

0x6588,	// (0x0005ebe7) popup_snote2_single_graphic_window_g2_ParamLimits

0x6588,	// (0x0005ebe7) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8a,	// (0x000682e9) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8a,	// (0x000682e9) popup_snote2_single_graphic_window_g

0x65b0,	// (0x0005ec0f) popup_snote2_single_graphic_window_t1_ParamLimits

0x65b0,	// (0x0005ec0f) popup_snote2_single_graphic_window_t1

0x65fc,	// (0x0005ec5b) popup_snote2_single_graphic_window_t2_ParamLimits

0x65fc,	// (0x0005ec5b) popup_snote2_single_graphic_window_t2

0x64be,	// (0x0005eb1d) popup_snote2_single_graphic_window_t3_ParamLimits

0x64be,	// (0x0005eb1d) popup_snote2_single_graphic_window_t3

0x64ff,	// (0x0005eb5e) popup_snote2_single_graphic_window_t4_ParamLimits

0x64ff,	// (0x0005eb5e) popup_snote2_single_graphic_window_t4

0x6535,	// (0x0005eb94) popup_snote2_single_graphic_window_t5_ParamLimits

0x6535,	// (0x0005eb94) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8f,	// (0x000682ee) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8f,	// (0x000682ee) popup_snote2_single_graphic_window_t

0x5044,	// (0x0005d6a3) clock_nsta_pane_cp2_t1

0x5044,	// (0x0005d6a3) clock_nsta_pane_cp2_t2

0x0001,

0xfaa3,	// (0x00068102) clock_nsta_pane_cp2_t

0xdbae,	// (0x0006620d) form_field_data_wide_pane_g1_ParamLimits

0x9169,	// (0x000617c8) form_field_data_wide_pane_g2_ParamLimits

0x9169,	// (0x000617c8) form_field_data_wide_pane_g2

0x9175,	// (0x000617d4) form_field_data_wide_pane_g3_ParamLimits

0x9175,	// (0x000617d4) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x00067cba) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x00067cba) form_field_data_wide_pane_g

0xc9a7,	// (0x00065006) grid_touch_3_pane_ParamLimits

0xc9a7,	// (0x00065006) grid_touch_3_pane

0xceed,	// (0x0006554c) cell_touch_3_pane_ParamLimits

0xceed,	// (0x0006554c) cell_touch_3_pane

0x5540,	// (0x0005db9f) cell_touch_3_pane_g1

0x5540,	// (0x0005db9f) cell_touch_3_pane_g2

0x0001,

0xfb28,	// (0x00068187) cell_touch_3_pane_g

0x8c9a,	// (0x000612f9) cont_query_data_pane

0x8ca2,	// (0x00061301) cont_query_data_pane_cp1

0x667b,	// (0x0005ecda) button_value_adjust_pane_cp7

0x6683,	// (0x0005ece2) query_popup_pane_cp3

0x1fe6,	// (0x0005a645) bg_popup_sub_pane_cp22_ParamLimits

0xf2e0,	// (0x0006793f) navi_navi_volume_pane_cp2

0xf2fb,	// (0x0006795a) popup_side_volume_key_window_g2

0xf30a,	// (0x00067969) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x00067d50) popup_side_volume_key_window_g

0xf327,	// (0x00067986) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x00067d57) popup_side_volume_key_window_t

0x22a2,	// (0x0005a901) popup_side_volume_key_window_ParamLimits

0xa384,	// (0x000629e3) list_double_graphic_pane_g4_ParamLimits

0xa384,	// (0x000629e3) list_double_graphic_pane_g4

0xc835,	// (0x00064e94) list_single_2heading_msg_pane_ParamLimits

0xc835,	// (0x00064e94) list_single_2heading_msg_pane

0xb866,	// (0x00063ec5) list_single_2heading_msg_pane_g1_ParamLimits

0xb866,	// (0x00063ec5) list_single_2heading_msg_pane_g1

0xb872,	// (0x00063ed1) list_single_2heading_msg_pane_g2_ParamLimits

0xb872,	// (0x00063ed1) list_single_2heading_msg_pane_g2

0xb885,	// (0x00063ee4) list_single_2heading_msg_pane_g3_ParamLimits

0xb885,	// (0x00063ee4) list_single_2heading_msg_pane_g3

0xb891,	// (0x00063ef0) list_single_2heading_msg_pane_g4_ParamLimits

0xb891,	// (0x00063ef0) list_single_2heading_msg_pane_g4

0x0003,

0xfc9a,	// (0x000682f9) list_single_2heading_msg_pane_g_ParamLimits

0xfc9a,	// (0x000682f9) list_single_2heading_msg_pane_g

0xb8a9,	// (0x00063f08) list_single_2heading_msg_pane_t1_ParamLimits

0xb8a9,	// (0x00063f08) list_single_2heading_msg_pane_t1

0xb8d1,	// (0x00063f30) list_single_2heading_msg_pane_t2_ParamLimits

0xb8d1,	// (0x00063f30) list_single_2heading_msg_pane_t2

0xb93c,	// (0x00063f9b) list_single_2heading_msg_pane_t3_ParamLimits

0xb93c,	// (0x00063f9b) list_single_2heading_msg_pane_t3

0xe590,	// (0x00066bef) list_single_2heading_msg_pane_t4_ParamLimits

0xe590,	// (0x00066bef) list_single_2heading_msg_pane_t4

0x0003,

0xfca3,	// (0x00068302) list_single_2heading_msg_pane_t_ParamLimits

0xfca3,	// (0x00068302) list_single_2heading_msg_pane_t

0x8a39,	// (0x00061098) title_pane_g4_ParamLimits

0x8a39,	// (0x00061098) title_pane_g4

0xf0f5,	// (0x00067754) title_pane_stacon_g3_ParamLimits

0xf0f5,	// (0x00067754) title_pane_stacon_g3

0x61a4,	// (0x0005e803) list_single_2graphic_im_pane_g4_ParamLimits

0x61a4,	// (0x0005e803) list_single_2graphic_im_pane_g4

0x4018,	// (0x0005c677) popup_side_volume_key_window_cp

0x482f,	// (0x0005ce8e) main_idle_act2_pane_t1

0x07b4,	// (0x00058e13) toolbar_button_pane_g10

0xa1e4,	// (0x00062843) popup_toolbar_window_cp1

0x5035,	// (0x0005d694) clock_nsta_pane_cp_t1

0x5035,	// (0x0005d694) clock_nsta_pane_cp_t2

0x0001,

0xfa9e,	// (0x000680fd) clock_nsta_pane_cp_t

0xf2e0,	// (0x0006793f) navi_navi_volume_pane_cp2_ParamLimits

0xf2ef,	// (0x0006794e) popup_side_volume_key_window_g1_ParamLimits

0xf2fb,	// (0x0006795a) popup_side_volume_key_window_g2_ParamLimits

0xf30a,	// (0x00067969) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x00067d50) popup_side_volume_key_window_g_ParamLimits

0x0d26,	// (0x00059385) fep_hwr_aid_pane

0x0dcf,	// (0x0005942e) bg_fep_hwr_top_pane_g4_ParamLimits

0x55a1,	// (0x0005dc00) fep_hwr_top_pane_g1_ParamLimits

0x55b3,	// (0x0005dc12) fep_hwr_top_pane_g2_ParamLimits

0x0def,	// (0x0005944e) fep_hwr_top_pane_g3_ParamLimits

0xfaf3,	// (0x00068152) fep_hwr_top_pane_g_ParamLimits

0x0e04,	// (0x00059463) fep_hwr_top_text_pane_ParamLimits

0x3dcd,	// (0x0005c42c) aid_touch_tab_arrow_arrow_2

0x3dd6,	// (0x0005c435) aid_touch_tab_arrow_left_2

0x0d3a,	// (0x00059399) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d71,	// (0x000593d0) fep_hwr_prediction_pane

0x5709,	// (0x0005dd68) fep_vkb_prediction_pane

0xccb0,	// (0x0006530f) fep_vkb_side_pane_g3_ParamLimits

0xccb0,	// (0x0006530f) fep_vkb_side_pane_g3

0x0f93,	// (0x000595f2) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1004,	// (0x00059663) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1011,	// (0x00059670) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba2,	// (0x00068201) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1206,	// (0x00059865) fep_hwr_prediction_pane_g1

0x1210,	// (0x0005986f) fep_hwr_prediction_pane_g2

0x1218,	// (0x00059877) fep_hwr_prediction_pane_g3

0x1220,	// (0x0005987f) fep_hwr_prediction_pane_g4

0x0003,

0xfcac,	// (0x0006830b) fep_hwr_prediction_pane_g

0x66aa,	// (0x0005ed09) fep_vkb_prediction_pane_g1

0x66b4,	// (0x0005ed13) fep_vkb_prediction_pane_g2

0x66bc,	// (0x0005ed1b) fep_vkb_prediction_pane_g3

0x66c4,	// (0x0005ed23) fep_vkb_prediction_pane_g4

0x0003,

0xfcb5,	// (0x00068314) fep_vkb_prediction_pane_g

0x0b04,	// (0x00059163) slider_set_pane_g3

0x0b18,	// (0x00059177) slider_set_pane_g4

0x0b30,	// (0x0005918f) slider_set_pane_g5

0x0b04,	// (0x00059163) slider_set_pane_g6

0x0b46,	// (0x000591a5) slider_set_pane_g7

0x449e,	// (0x0005cafd) slider_form_pane_g3

0x44a7,	// (0x0005cb06) slider_form_pane_g4

0x44af,	// (0x0005cb0e) slider_form_pane_g5

0x449e,	// (0x0005cafd) slider_form_pane_g6

0xc7f4,	// (0x00064e53) slider_form_pane_g7

0x4af3,	// (0x0005d152) slider_set_pane_vc_g3

0x4afc,	// (0x0005d15b) slider_set_pane_vc_g4

0x4b05,	// (0x0005d164) slider_set_pane_vc_g5

0x4af3,	// (0x0005d152) slider_set_pane_vc_g6

0x4b0e,	// (0x0005d16d) slider_set_pane_vc_g7

0x4ce4,	// (0x0005d343) slider_form_pane_vc_g1

0x4ced,	// (0x0005d34c) slider_form_pane_vc_g2

0x4cf6,	// (0x0005d355) slider_form_pane_vc_g3

0x4ce4,	// (0x0005d343) slider_form_pane_vc_g4

0x4cff,	// (0x0005d35e) slider_form_pane_vc_g5

0x0004,

0xfa70,	// (0x000680cf) slider_form_pane_vc_g

0xee68,	// (0x000674c7) main_idle_act3_pane

0x66cc,	// (0x0005ed2b) ai3_links_pane

0xcf39,	// (0x00065598) popup_ai3_data_window_ParamLimits

0xcf39,	// (0x00065598) popup_ai3_data_window

0x8a1b,	// (0x0006107a) grid_ai3_links_pane

0xcf57,	// (0x000655b6) cell_ai3_links_pane_ParamLimits

0xcf57,	// (0x000655b6) cell_ai3_links_pane

0x670d,	// (0x0005ed6c) bg_popup_sub_pane_cp11

0x671a,	// (0x0005ed79) cell_ai3_links_pane_g1

0x8a1b,	// (0x0006107a) bg_popup_sub_pane_cp12

0x673f,	// (0x0005ed9e) heading_ai3_data_pane

0x6747,	// (0x0005eda6) list_ai3_gene_pane

0x6753,	// (0x0005edb2) popup_ai3_data_window_g1

0x675b,	// (0x0005edba) heading_ai3_data_pane_g1

0x6763,	// (0x0005edc2) heading_ai3_data_pane_t1

0x6771,	// (0x0005edd0) list_double_ai3_gene_pane_ParamLimits

0x6771,	// (0x0005edd0) list_double_ai3_gene_pane

0x677e,	// (0x0005eddd) list_single_ai3_gene_pane_ParamLimits

0x677e,	// (0x0005eddd) list_single_ai3_gene_pane

0x5505,	// (0x0005db64) list_highlight_pane_cp7_ParamLimits

0x5505,	// (0x0005db64) list_highlight_pane_cp7

0x678b,	// (0x0005edea) list_single_a13_gene_pane_t1_ParamLimits

0x678b,	// (0x0005edea) list_single_a13_gene_pane_t1

0x67a2,	// (0x0005ee01) list_single_ai3_gene_pane_g1

0x67ab,	// (0x0005ee0a) list_single_ai3_gene_pane_g2

0x0001,

0xfcbe,	// (0x0006831d) list_single_ai3_gene_pane_g

0x67b3,	// (0x0005ee12) list_double_ai3_gene_pane_g1_ParamLimits

0x67b3,	// (0x0005ee12) list_double_ai3_gene_pane_g1

0x67bf,	// (0x0005ee1e) list_double_ai3_gene_pane_t1_ParamLimits

0x67bf,	// (0x0005ee1e) list_double_ai3_gene_pane_t1

0x67db,	// (0x0005ee3a) list_double_ai3_gene_pane_t2_ParamLimits

0x67db,	// (0x0005ee3a) list_double_ai3_gene_pane_t2

0x67f0,	// (0x0005ee4f) list_double_ai3_gene_pane_t3_ParamLimits

0x67f0,	// (0x0005ee4f) list_double_ai3_gene_pane_t3

0x0002,

0xfcc3,	// (0x00068322) list_double_ai3_gene_pane_t_ParamLimits

0xfcc3,	// (0x00068322) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe586,	// (0x00066be5) aid_size_min_col_2

0xcf23,	// (0x00065582) aid_size_min_msg_ParamLimits

0xcf23,	// (0x00065582) aid_size_min_msg

0xccc4,	// (0x00065323) fep_vkb_top_text_pane_g2_ParamLimits

0xccc4,	// (0x00065323) fep_vkb_top_text_pane_g2

0x0001,

0xfb23,	// (0x00068182) fep_vkb_top_text_pane_g_ParamLimits

0xfb23,	// (0x00068182) fep_vkb_top_text_pane_g

0xee68,	// (0x000674c7) main_hc_apps_shell_pane

0x680d,	// (0x0005ee6c) grid_hc_apps_pane_ParamLimits

0x680d,	// (0x0005ee6c) grid_hc_apps_pane

0x681f,	// (0x0005ee7e) list_hc_apps_pane

0x6827,	// (0x0005ee86) scroll_pane_cp37_ParamLimits

0x6827,	// (0x0005ee86) scroll_pane_cp37

0xcf71,	// (0x000655d0) cell_hc_apps_pane_ParamLimits

0xcf71,	// (0x000655d0) cell_hc_apps_pane

0xd039,	// (0x00065698) cell_hc_apps_pane_g1_ParamLimits

0xd039,	// (0x00065698) cell_hc_apps_pane_g1

0x6915,	// (0x0005ef74) cell_hc_apps_pane_g2_ParamLimits

0x6915,	// (0x0005ef74) cell_hc_apps_pane_g2

0x6931,	// (0x0005ef90) cell_hc_apps_pane_g3_ParamLimits

0x6931,	// (0x0005ef90) cell_hc_apps_pane_g3

0x0002,

0xfcca,	// (0x00068329) cell_hc_apps_pane_g_ParamLimits

0xfcca,	// (0x00068329) cell_hc_apps_pane_g

0xd065,	// (0x000656c4) cell_hc_apps_pane_t1_ParamLimits

0xd065,	// (0x000656c4) cell_hc_apps_pane_t1

0x8bbe,	// (0x0006121d) grid_highlight_pane_cp10_ParamLimits

0x8bbe,	// (0x0006121d) grid_highlight_pane_cp10

0xd0a5,	// (0x00065704) list_single_hc_apps_pane_ParamLimits

0xd0a5,	// (0x00065704) list_single_hc_apps_pane

0xd0df,	// (0x0006573e) list_single_hc_apps_pane_g1

0xd0f8,	// (0x00065757) list_single_hc_apps_pane_g2

0x0001,

0xfcd1,	// (0x00068330) list_single_hc_apps_pane_g

0xd111,	// (0x00065770) list_single_hc_apps_pane_g2_copy1

0xb9aa,	// (0x00064009) list_single_hc_apps_pane_t1

0x8a7d,	// (0x000610dc) bg_set_opt_pane_cp_ParamLimits

0xef8b,	// (0x000675ea) setting_slider_pane_t1_ParamLimits

0xefa4,	// (0x00067603) setting_slider_pane_t2_ParamLimits

0xefbe,	// (0x0006761d) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00067b98) setting_slider_pane_t_ParamLimits

0xefd6,	// (0x00067635) slider_set_pane_ParamLimits

0x002b,	// (0x0005868a) control_pane_g5_ParamLimits

0x002b,	// (0x0005868a) control_pane_g5

0x42d1,	// (0x0005c930) slider_set_pane_g1_ParamLimits

0x0af8,	// (0x00059157) slider_set_pane_g2_ParamLimits

0x0b04,	// (0x00059163) slider_set_pane_g3_ParamLimits

0x0b18,	// (0x00059177) slider_set_pane_g4_ParamLimits

0x0b30,	// (0x0005918f) slider_set_pane_g5_ParamLimits

0x0b04,	// (0x00059163) slider_set_pane_g6_ParamLimits

0x0b46,	// (0x000591a5) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x00067f9e) slider_set_pane_g_ParamLimits

0x2386,	// (0x0005a9e5) navi_icon_text_pane_ParamLimits

0xc012,	// (0x00064671) aid_fill_nsta_2_ParamLimits

0xc04b,	// (0x000646aa) aid_touch_tab_arrow_left_ParamLimits

0xc061,	// (0x000646c0) aid_touch_tab_arrow_right_ParamLimits

0xc0fc,	// (0x0006475b) clock_nsta_pane_ParamLimits

0xc572,	// (0x00064bd1) navi_icon_pane_g1_ParamLimits

0xc57e,	// (0x00064bdd) navi_text_pane_t1_ParamLimits

0xca82,	// (0x000650e1) navi_icon_text_pane_g1_ParamLimits

0xca8e,	// (0x000650ed) navi_icon_text_pane_t1_ParamLimits

0xd0df,	// (0x0006573e) list_single_hc_apps_pane_g1_ParamLimits

0xd0f8,	// (0x00065757) list_single_hc_apps_pane_g2_ParamLimits

0xfcd1,	// (0x00068330) list_single_hc_apps_pane_g_ParamLimits

0xd111,	// (0x00065770) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb9aa,	// (0x00064009) list_single_hc_apps_pane_t1_ParamLimits

0x9d56,	// (0x000623b5) popup_toolbar2_fixed_window_ParamLimits

0x9d56,	// (0x000623b5) popup_toolbar2_fixed_window

0xb51c,	// (0x00063b7b) popup_toolbar2_float_window

0x8a1b,	// (0x0006107a) bg_popup_sub_pane_cp27

0x69eb,	// (0x0005f04a) grid_toolbar2_float_pane

0x8a1b,	// (0x0006107a) bg_popup_sub_pane_cp26

0x69eb,	// (0x0005f04a) grid_toolbar2_fixed_pane

0xd12d,	// (0x0006578c) cell_toolbar2_fixed_pane_ParamLimits

0xd12d,	// (0x0006578c) cell_toolbar2_fixed_pane

0xd147,	// (0x000657a6) cell_toolbar2_fixed_pane_g1

0x6a0c,	// (0x0005f06b) toolbar2_fixed_button_pane

0x2d7f,	// (0x0005b3de) toolbar2_fixed_button_pane_g1

0x2d8f,	// (0x0005b3ee) toolbar2_fixed_button_pane_g2

0x2d87,	// (0x0005b3e6) toolbar2_fixed_button_pane_g3

0x2d9f,	// (0x0005b3fe) toolbar2_fixed_button_pane_g4

0x2d97,	// (0x0005b3f6) toolbar2_fixed_button_pane_g5

0x2da7,	// (0x0005b406) toolbar2_fixed_button_pane_g6

0x2daf,	// (0x0005b40e) toolbar2_fixed_button_pane_g7

0x2dbf,	// (0x0005b41e) toolbar2_fixed_button_pane_g8

0x2db7,	// (0x0005b416) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x00067ea0) toolbar2_fixed_button_pane_g

0x6a14,	// (0x0005f073) cell_toolbar2_float_pane_ParamLimits

0x6a14,	// (0x0005f073) cell_toolbar2_float_pane

0x6a25,	// (0x0005f084) cell_toolbar2_float_pane_g1

0x6a0c,	// (0x0005f06b) toolbar2_fixed_button_pane_cp

0xcbac,	// (0x0006520b) fep_vkb_accented_list_pane_ParamLimits

0xcbac,	// (0x0006520b) fep_vkb_accented_list_pane

0x0f73,	// (0x000595d2) bg_popup_fep_shadow_pane_g9

0x250a,	// (0x0005ab69) bg_popup_fep_shadow_pane_cp3

0xdcbd,	// (0x0006631c) list_accented_list_pane

0x6a2e,	// (0x0005f08d) list_single_accented_list_pane_ParamLimits

0x6a2e,	// (0x0005f08d) list_single_accented_list_pane

0x250a,	// (0x0005ab69) list_highlight_pane_cp10

0x6a3f,	// (0x0005f09e) list_single_accented_list_pane_t1

0xb43a,	// (0x00063a99) popup_slider_window_ParamLimits

0xb43a,	// (0x00063a99) popup_slider_window

0x668b,	// (0x0005ecea) aid_indentation_list_msg

0xd24a,	// (0x000658a9) bg_popup_window_pane_cp19

0x6b7b,	// (0x0005f1da) popup_slider_window_g1

0x6b97,	// (0x0005f1f6) popup_slider_window_g2

0x6bb3,	// (0x0005f212) popup_slider_window_g3

0x0005,

0xfcd6,	// (0x00068335) popup_slider_window_g

0x6c19,	// (0x0005f278) popup_slider_window_t1

0x6c8d,	// (0x0005f2ec) small_volume_slider_vertical_pane

0x5540,	// (0x0005db9f) small_volume_slider_vertical_pane_g1

0x5540,	// (0x0005db9f) small_volume_slider_vertical_pane_g2

0x6ca9,	// (0x0005f308) small_volume_slider_vertical_pane_g3

0x0002,

0xfce8,	// (0x00068347) small_volume_slider_vertical_pane_g

0x9cc0,	// (0x0006231f) area_side_right_pane_ParamLimits

0x9cc0,	// (0x0006231f) area_side_right_pane

0xb9d8,	// (0x00064037) aid_size_side_button_ParamLimits

0xb9d8,	// (0x00064037) aid_size_side_button

0xb9f1,	// (0x00064050) grid_sctrl_middle_pane_ParamLimits

0xb9f1,	// (0x00064050) grid_sctrl_middle_pane

0x1289,	// (0x000598e8) sctrl_sk_bottom_pane

0x129a,	// (0x000598f9) sctrl_sk_top_pane

0x12ac,	// (0x0005990b) aid_touch_sctrl_top

0x12b9,	// (0x00059918) bg_sctrl_sk_pane_ParamLimits

0x12b9,	// (0x00059918) bg_sctrl_sk_pane

0x12c7,	// (0x00059926) sctrl_sk_top_pane_g1

0x12d4,	// (0x00059933) sctrl_sk_top_pane_t1

0x12ac,	// (0x0005990b) aid_touch_sctrl_bottom

0x12b9,	// (0x00059918) bg_sctrl_sk_pane_cp_ParamLimits

0x12b9,	// (0x00059918) bg_sctrl_sk_pane_cp

0x12ef,	// (0x0005994e) sctrl_sk_bottom_pane_g1

0x12d4,	// (0x00059933) sctrl_sk_bottom_pane_t1

0xba0b,	// (0x0006406a) cell_sctrl_middle_pane_ParamLimits

0xba0b,	// (0x0006406a) cell_sctrl_middle_pane

0xba1e,	// (0x0006407d) aid_touch_sctrl_middle_ParamLimits

0xba1e,	// (0x0006407d) aid_touch_sctrl_middle

0xba2b,	// (0x0006408a) bg_sctrl_middle_pane_ParamLimits

0xba2b,	// (0x0006408a) bg_sctrl_middle_pane

0x1972,	// (0x00059fd1) cell_sctrl_middle_pane_g1_ParamLimits

0x1972,	// (0x00059fd1) cell_sctrl_middle_pane_g1

0xba39,	// (0x00064098) cell_sctrl_middle_pane_g2_ParamLimits

0xba39,	// (0x00064098) cell_sctrl_middle_pane_g2

0x0001,

0xfcf4,	// (0x00068353) cell_sctrl_middle_pane_g_ParamLimits

0xfcf4,	// (0x00068353) cell_sctrl_middle_pane_g

0x2d7f,	// (0x0005b3de) bg_sctrl_middle_pane_g1

0x2d87,	// (0x0005b3e6) bg_sctrl_middle_pane_g2

0x2d8f,	// (0x0005b3ee) bg_sctrl_middle_pane_g3

0x2d97,	// (0x0005b3f6) bg_sctrl_middle_pane_g4

0x2d9f,	// (0x0005b3fe) bg_sctrl_middle_pane_g5

0x2da7,	// (0x0005b406) bg_sctrl_middle_pane_g6

0x2daf,	// (0x0005b40e) bg_sctrl_middle_pane_g7

0x2db7,	// (0x0005b416) bg_sctrl_middle_pane_g8

0x0007,

0xfcf9,	// (0x00068358) bg_sctrl_middle_pane_g

0x2dbf,	// (0x0005b41e) bg_sctrl_middle_pane_g8_copy1

0x2d7f,	// (0x0005b3de) bg_sctrl_sk_pane_g1

0x2d8f,	// (0x0005b3ee) bg_sctrl_sk_pane_g2

0x2d87,	// (0x0005b3e6) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x00067ea0) bg_sctrl_sk_pane_g

0x9094,	// (0x000616f3) aid_size_touch_scroll_bar

0x2d9f,	// (0x0005b3fe) bg_sctrl_sk_pane_g4

0x2d97,	// (0x0005b3f6) bg_sctrl_sk_pane_g5

0x2da7,	// (0x0005b406) bg_sctrl_sk_pane_g6

0x2daf,	// (0x0005b40e) bg_sctrl_sk_pane_g7

0x2dbf,	// (0x0005b41e) bg_sctrl_sk_pane_g8

0x2db7,	// (0x0005b416) bg_sctrl_sk_pane_g9

0x0201,	// (0x00058860) popup_fep_china_hwr2_fs_candidate_window

0xaeec,	// (0x0006354b) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xaeec,	// (0x0006354b) popup_fep_china_hwr2_fs_control_window

0x0f93,	// (0x000595f2) sctrl_sk_top_pane_g2

0x0001,

0xfcef,	// (0x0006834e) sctrl_sk_top_pane_g

0xd302,	// (0x00065961) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd302,	// (0x00065961) aid_fep_china_hwr2_fs_cell

0xd318,	// (0x00065977) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd318,	// (0x00065977) bg_popup_fep_shadow_pane_cp4

0xd32f,	// (0x0006598e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd32f,	// (0x0006598e) bg_popup_fep_shadow_pane_cp5

0xd341,	// (0x000659a0) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd341,	// (0x000659a0) popup_fep_china_hwr2_fs_control_bar_grid

0xd355,	// (0x000659b4) popup_fep_china_hwr2_fs_control_funtion_grid

0x6d08,	// (0x0005f367) aid_fep_china_hwr2_fs_candi_cell

0x8a1b,	// (0x0006107a) bg_popup_fep_shadow_pane_cp6

0x6d12,	// (0x0005f371) popup_fep_china_hwr2_fs_candidate_grid

0xd35d,	// (0x000659bc) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd35d,	// (0x000659bc) cell_fep_china_hwr2_fs_funtion_grid

0x5540,	// (0x0005db9f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x6d34,	// (0x0005f393) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x6d34,	// (0x0005f393) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6d42,	// (0x0005f3a1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6d42,	// (0x0005f3a1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0a,	// (0x00068369) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0a,	// (0x00068369) cell_fep_china_hwr2_fs_funtion_grid_g

0xd375,	// (0x000659d4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd375,	// (0x000659d4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd38a,	// (0x000659e9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd38a,	// (0x000659e9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0f,	// (0x0006836e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0f,	// (0x0006836e) cell_fep_china_hwr2_fs_funtion_grid_t

0x6d89,	// (0x0005f3e8) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6d91,	// (0x0005f3f0) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6d99,	// (0x0005f3f8) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd14,	// (0x00068373) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6da1,	// (0x0005f400) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6da1,	// (0x0005f400) cell_fep_china_hwr2_fs_candidate_grid

0x6dc0,	// (0x0005f41f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6dc8,	// (0x0005f427) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5540,	// (0x0005db9f) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5540,	// (0x0005db9f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb28,	// (0x00068187) cell_fep_china_hwr2_fs_candidate_grid_g

0x6dd0,	// (0x0005f42f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x294f,	// (0x0005afae) clock_nsta_pane_cp_24_ParamLimits

0x294f,	// (0x0005afae) clock_nsta_pane_cp_24

0x29cf,	// (0x0005b02e) indicator_nsta_pane_cp_24_ParamLimits

0x29cf,	// (0x0005b02e) indicator_nsta_pane_cp_24

0x3c2b,	// (0x0005c28a) heading_pane_g1

0x0001,

0xf8a6,	// (0x00067f05) heading_pane_g

0x4676,	// (0x0005ccd5) grid_sct_catagory_button_pane

0x46a8,	// (0x0005cd07) scroll_pane_cp5_ParamLimits

0x51a0,	// (0x0005d7ff) button_value_adjust_pane_cp5_ParamLimits

0x51a0,	// (0x0005d7ff) button_value_adjust_pane_cp5

0x5285,	// (0x0005d8e4) form2_midp_time_pane_ParamLimits

0x6dde,	// (0x0005f43d) cell_sct_catagory_button_pane_ParamLimits

0x6dde,	// (0x0005f43d) cell_sct_catagory_button_pane

0x5505,	// (0x0005db64) bg_button_pane_cp01_ParamLimits

0x5505,	// (0x0005db64) bg_button_pane_cp01

0x5540,	// (0x0005db9f) cell_sct_catagory_button_pane_g1

0xb4b9,	// (0x00063b18) popup_tb_extension_window

0xd3a6,	// (0x00065a05) aid_size_cell_ext_ParamLimits

0xd3a6,	// (0x00065a05) aid_size_cell_ext

0x8ed6,	// (0x00061535) bg_tb_trans_pane_cp1_ParamLimits

0x8ed6,	// (0x00061535) bg_tb_trans_pane_cp1

0xd3cc,	// (0x00065a2b) grid_tb_ext_pane_ParamLimits

0xd3cc,	// (0x00065a2b) grid_tb_ext_pane

0xd409,	// (0x00065a68) cell_tb_ext_pane_ParamLimits

0xd409,	// (0x00065a68) cell_tb_ext_pane

0xd431,	// (0x00065a90) cell_tb_ext_pane_g1_ParamLimits

0xd431,	// (0x00065a90) cell_tb_ext_pane_g1

0x6e72,	// (0x0005f4d1) cell_tb_ext_pane_t1

0x8bbe,	// (0x0006121d) list_highlight_pane_cp11_ParamLimits

0x8bbe,	// (0x0006121d) list_highlight_pane_cp11

0x9d6b,	// (0x000623ca) popup_uni_indicator_window_ParamLimits

0x9d6b,	// (0x000623ca) popup_uni_indicator_window

0x915b,	// (0x000617ba) bg_popup_sub_pane_cp14

0x6e8d,	// (0x0005f4ec) list_uniindi_pane

0x6e99,	// (0x0005f4f8) uniindi_top_pane

0x8bbe,	// (0x0006121d) bg_uniindi_top_pane

0x6eba,	// (0x0005f519) uniindi_top_pane_g1

0x6ed0,	// (0x0005f52f) uniindi_top_pane_g2

0x0003,

0xfd1b,	// (0x0006837a) uniindi_top_pane_g

0x6efa,	// (0x0005f559) uniindi_top_pane_t1

0x6f26,	// (0x0005f585) list_single_uniindi_pane_ParamLimits

0x6f26,	// (0x0005f585) list_single_uniindi_pane

0x5540,	// (0x0005db9f) bg_uniindi_top_pane_g1

0x6f5a,	// (0x0005f5b9) list_single_uniindi_pane_g1

0x6f6d,	// (0x0005f5cc) list_single_uniindi_pane_t1

0xee68,	// (0x000674c7) control_bg_pane

0x6f92,	// (0x0005f5f1) bg_sctrl_sk_pane_cp1

0x6f9b,	// (0x0005f5fa) bg_sctrl_sk_pane_cp2

0x6fa4,	// (0x0005f603) control_bg_pane_g1

0x6fad,	// (0x0005f60c) control_bg_pane_g2

0x0001,

0xfd24,	// (0x00068383) control_bg_pane_g

0x4fd8,	// (0x0005d637) cell_indicator_nsta_pane_g1_ParamLimits

0xc9e4,	// (0x00065043) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8c,	// (0x000680eb) cell_indicator_nsta_pane_g_ParamLimits

0xe3fc,	// (0x00066a5b) form2_midp_time_pane_t1_ParamLimits

0x0d18,	// (0x00059377) main_idle_act4_pane_ParamLimits

0x0d18,	// (0x00059377) main_idle_act4_pane

0xb4b9,	// (0x00063b18) popup_tb_extension_window_ParamLimits

0xd3f1,	// (0x00065a50) tb_ext_find_pane_ParamLimits

0xd3f1,	// (0x00065a50) tb_ext_find_pane

0x6fb6,	// (0x0005f615) ai_gene_pane_1_cp1

0x2654,	// (0x0005acb3) ai_gene_pane_2_cp1

0x6fbe,	// (0x0005f61d) list_single_idle_plugin_calendar_pane

0x6fc7,	// (0x0005f626) list_single_idle_plugin_notification_pane

0x6fd0,	// (0x0005f62f) list_single_idle_plugin_player_pane

0xd44e,	// (0x00065aad) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd44e,	// (0x00065aad) list_single_idle_plugin_shortcut_pane

0xd476,	// (0x00065ad5) main_idle_act4_pane_t1

0xd48e,	// (0x00065aed) main_idle_act4_pane_t2

0x0001,

0xfd29,	// (0x00068388) main_idle_act4_pane_t

0xd4a6,	// (0x00065b05) middle_sk_idle_act4_pane_ParamLimits

0xd4a6,	// (0x00065b05) middle_sk_idle_act4_pane

0xd4c2,	// (0x00065b21) popup_clock_digital_analogue_window_cp2

0xd4e9,	// (0x00065b48) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4e9,	// (0x00065b48) shortcut_wheel_idle_act4_pane

0x5540,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g1

0x5540,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g2

0x5540,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g3

0x5540,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g4

0x5540,	// (0x0005db9f) shortcut_wheel_idle_act4_pane_g5

0x7063,	// (0x0005f6c2) shortcut_wheel_idle_act4_pane_g6

0x706b,	// (0x0005f6ca) shortcut_wheel_idle_act4_pane_g7

0x7073,	// (0x0005f6d2) shortcut_wheel_idle_act4_pane_g8

0x707b,	// (0x0005f6da) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2e,	// (0x0006838d) shortcut_wheel_idle_act4_pane_g

0xd566,	// (0x00065bc5) middle_sk_idle_act4_pane_g1_ParamLimits

0xd566,	// (0x00065bc5) middle_sk_idle_act4_pane_g1

0xd574,	// (0x00065bd3) middle_sk_idle_act4_pane_g2_ParamLimits

0xd574,	// (0x00065bd3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd51,	// (0x000683b0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd51,	// (0x000683b0) middle_sk_idle_act4_pane_g

0xd58c,	// (0x00065beb) middle_sk_idle_act4_pane_t1_ParamLimits

0xd58c,	// (0x00065beb) middle_sk_idle_act4_pane_t1

0xd5bb,	// (0x00065c1a) grid_ai_shortcut_pane_ParamLimits

0xd5bb,	// (0x00065c1a) grid_ai_shortcut_pane

0xd5d8,	// (0x00065c37) list_highlight_pane_cp16_ParamLimits

0xd5d8,	// (0x00065c37) list_highlight_pane_cp16

0xd5e5,	// (0x00065c44) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5e5,	// (0x00065c44) list_single_idle_plugin_shortcut_pane_g1

0xd5f1,	// (0x00065c50) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5f1,	// (0x00065c50) list_single_idle_plugin_shortcut_pane_g2

0xd60f,	// (0x00065c6e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd60f,	// (0x00065c6e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd56,	// (0x000683b5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd56,	// (0x000683b5) list_single_idle_plugin_shortcut_pane_g

0xd624,	// (0x00065c83) cell_ai_shortcut_pane_ParamLimits

0xd624,	// (0x00065c83) cell_ai_shortcut_pane

0xd63a,	// (0x00065c99) cell_ai_shortcut_pane_g1_ParamLimits

0xd63a,	// (0x00065c99) cell_ai_shortcut_pane_g1

0x6fb6,	// (0x0005f615) ai_gene_pane_1_cp2

0x71ac,	// (0x0005f80b) ai_gene_pane_2_cp2

0x71b4,	// (0x0005f813) list_highlight_pane_cp15

0x71bd,	// (0x0005f81c) list_single_idle_plugin_calendar_pane_g1

0x71b4,	// (0x0005f813) list_highlight_pane_cp17

0x71c5,	// (0x0005f824) list_single_idle_plugin_calendar_pane_g1_copy1

0x71cd,	// (0x0005f82c) list_single_idle_plugin_player_pane_g1

0x48dd,	// (0x0005cf3c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5d,	// (0x000683bc) list_single_idle_plugin_player_pane_g

0x71d5,	// (0x0005f834) list_single_idle_plugin_player_pane_t1

0x71e3,	// (0x0005f842) list_single_idle_plugin_player_pane_t2

0x71f1,	// (0x0005f850) list_single_idle_plugin_player_pane_t3

0x71ff,	// (0x0005f85e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd62,	// (0x000683c1) list_single_idle_plugin_player_pane_t

0x720d,	// (0x0005f86c) wait_bar_pane_cp15

0x7215,	// (0x0005f874) grid_ai_notification_pane

0x48dd,	// (0x0005cf3c) list_single_idle_plugin_notification_pane_g1

0xd65c,	// (0x00065cbb) cell_ai_notification_pane_ParamLimits

0xd65c,	// (0x00065cbb) cell_ai_notification_pane

0x722b,	// (0x0005f88a) cell_ai_notification_pane_g1

0x7233,	// (0x0005f892) cell_ai_notification_pane_t1

0xd669,	// (0x00065cc8) tb_ext_find_button_pane

0xd671,	// (0x00065cd0) tb_ext_find_pane_g1

0xd679,	// (0x00065cd8) tb_ext_find_pane_t1

0x1efe,	// (0x0005a55d) tb_ext_find_button_pane_g1

0x725f,	// (0x0005f8be) tb_ext_find_button_pane_g2

0x0001,

0xfd6b,	// (0x000683ca) tb_ext_find_button_pane_g

0xd476,	// (0x00065ad5) main_idle_act4_pane_t1_ParamLimits

0xd48e,	// (0x00065aed) main_idle_act4_pane_t2_ParamLimits

0xfd29,	// (0x00068388) main_idle_act4_pane_t_ParamLimits

0xd4c2,	// (0x00065b21) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4d9,	// (0x00065b38) sat_plugin_idle_act4_pane_ParamLimits

0xd4d9,	// (0x00065b38) sat_plugin_idle_act4_pane

0xd687,	// (0x00065ce6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd687,	// (0x00065ce6) sat_plugin_idle_act4_pane_t1

0xd69f,	// (0x00065cfe) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd69f,	// (0x00065cfe) sat_plugin_idle_act4_pane_t2

0xd6b7,	// (0x00065d16) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd6b7,	// (0x00065d16) sat_plugin_idle_act4_pane_t3

0xd6cf,	// (0x00065d2e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd6cf,	// (0x00065d2e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd70,	// (0x000683cf) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd70,	// (0x000683cf) sat_plugin_idle_act4_pane_t

0xef2d,	// (0x0006758c) popup_battery_window_ParamLimits

0xef2d,	// (0x0006758c) popup_battery_window

0x8bbe,	// (0x0006121d) bg_popup_sub_pane_cp25_ParamLimits

0x8bbe,	// (0x0006121d) bg_popup_sub_pane_cp25

0x72b4,	// (0x0005f913) popup_battery_window_g1_ParamLimits

0x72b4,	// (0x0005f913) popup_battery_window_g1

0x72c0,	// (0x0005f91f) popup_battery_window_t1_ParamLimits

0x72c0,	// (0x0005f91f) popup_battery_window_t1

0x72d2,	// (0x0005f931) popup_battery_window_t2_ParamLimits

0x72d2,	// (0x0005f931) popup_battery_window_t2

0x0001,

0xfd79,	// (0x000683d8) popup_battery_window_t_ParamLimits

0xfd79,	// (0x000683d8) popup_battery_window_t

0xab6d,	// (0x000631cc) midp_canvas_pane_ParamLimits

0xabc9,	// (0x00063228) midp_keypad_pane_ParamLimits

0xabc9,	// (0x00063228) midp_keypad_pane

0x2831,	// (0x0005ae90) main_midp_pane_ParamLimits

0x5053,	// (0x0005d6b2) signal_pane_g2_cp_ParamLimits

0xd6e7,	// (0x00065d46) aid_size_cell_midp_keypad_ParamLimits

0xd6e7,	// (0x00065d46) aid_size_cell_midp_keypad

0xd705,	// (0x00065d64) midp_keyp_game_grid_pane_ParamLimits

0xd705,	// (0x00065d64) midp_keyp_game_grid_pane

0xd72c,	// (0x00065d8b) midp_keyp_rocker_pane_ParamLimits

0xd72c,	// (0x00065d8b) midp_keyp_rocker_pane

0xd77b,	// (0x00065dda) midp_keyp_sk_left_pane_ParamLimits

0xd77b,	// (0x00065dda) midp_keyp_sk_left_pane

0xd7d1,	// (0x00065e30) midp_keyp_sk_right_pane_ParamLimits

0xd7d1,	// (0x00065e30) midp_keyp_sk_right_pane

0x8a1b,	// (0x0006107a) bg_button_pane_cp03

0xd827,	// (0x00065e86) midp_keyp_sk_left_pane_g1

0x8a1b,	// (0x0006107a) bg_button_pane_cp04

0xd827,	// (0x00065e86) midp_keyp_sk_right_pane_g1

0x5540,	// (0x0005db9f) midp_keyp_rocker_pane_g1

0xd82f,	// (0x00065e8e) keyp_game_cell_pane_ParamLimits

0xd82f,	// (0x00065e8e) keyp_game_cell_pane

0x8a1b,	// (0x0006107a) bg_button_pane_cp02

0xd855,	// (0x00065eb4) keyp_game_cell_pane_g1

0x9d02,	// (0x00062361) popup_fep_vkb2_window_ParamLimits

0x9d02,	// (0x00062361) popup_fep_vkb2_window

0xba45,	// (0x000640a4) aid_size_cell_vkb2_ParamLimits

0xba45,	// (0x000640a4) aid_size_cell_vkb2

0xba7b,	// (0x000640da) popup_fep_vkb2_window_g1_ParamLimits

0xba7b,	// (0x000640da) popup_fep_vkb2_window_g1

0xbacb,	// (0x0006412a) vkb2_area_bottom_pane_ParamLimits

0xbacb,	// (0x0006412a) vkb2_area_bottom_pane

0xbb27,	// (0x00064186) vkb2_area_keypad_pane_ParamLimits

0xbb27,	// (0x00064186) vkb2_area_keypad_pane

0xbb75,	// (0x000641d4) vkb2_area_top_pane_ParamLimits

0xbb75,	// (0x000641d4) vkb2_area_top_pane

0xbbfb,	// (0x0006425a) vkb2_top_entry_pane_ParamLimits

0xbbfb,	// (0x0006425a) vkb2_top_entry_pane

0xbc28,	// (0x00064287) vkb2_top_grid_left_pane_ParamLimits

0xbc28,	// (0x00064287) vkb2_top_grid_left_pane

0xbc48,	// (0x000642a7) vkb2_top_grid_right_pane_ParamLimits

0xbc48,	// (0x000642a7) vkb2_top_grid_right_pane

0x1569,	// (0x00059bc8) vkb2_cell_keypad_pane_ParamLimits

0x1569,	// (0x00059bc8) vkb2_cell_keypad_pane

0xbc8e,	// (0x000642ed) vkb2_area_bottom_grid_pane_ParamLimits

0xbc8e,	// (0x000642ed) vkb2_area_bottom_grid_pane

0xbcb8,	// (0x00064317) vkb2_area_bottom_pane_g1_ParamLimits

0xbcb8,	// (0x00064317) vkb2_area_bottom_pane_g1

0xbcde,	// (0x0006433d) vkb2_area_bottom_pane_g2_ParamLimits

0xbcde,	// (0x0006433d) vkb2_area_bottom_pane_g2

0xbd0f,	// (0x0006436e) vkb2_area_bottom_pane_g3_ParamLimits

0xbd0f,	// (0x0006436e) vkb2_area_bottom_pane_g3

0x0002,

0xfd7e,	// (0x000683dd) vkb2_area_bottom_pane_g_ParamLimits

0xfd7e,	// (0x000683dd) vkb2_area_bottom_pane_g

0x1713,	// (0x00059d72) vkb2_top_cell_left_pane_ParamLimits

0x1713,	// (0x00059d72) vkb2_top_cell_left_pane

0xd85e,	// (0x00065ebd) vkb2_top_entry_pane_g1_ParamLimits

0xd85e,	// (0x00065ebd) vkb2_top_entry_pane_g1

0xd86c,	// (0x00065ecb) vkb2_top_entry_pane_t1_ParamLimits

0xd86c,	// (0x00065ecb) vkb2_top_entry_pane_t1

0x747c,	// (0x0005fadb) vkb2_top_entry_pane_t2_ParamLimits

0x747c,	// (0x0005fadb) vkb2_top_entry_pane_t2

0x74ae,	// (0x0005fb0d) vkb2_top_entry_pane_t3_ParamLimits

0x74ae,	// (0x0005fb0d) vkb2_top_entry_pane_t3

0x0002,

0xfd85,	// (0x000683e4) vkb2_top_entry_pane_t_ParamLimits

0xfd85,	// (0x000683e4) vkb2_top_entry_pane_t

0xbd79,	// (0x000643d8) vkb2_top_grid_right_pane_g1_ParamLimits

0xbd79,	// (0x000643d8) vkb2_top_grid_right_pane_g1

0x1776,	// (0x00059dd5) vkb2_top_grid_right_pane_g2_ParamLimits

0x1776,	// (0x00059dd5) vkb2_top_grid_right_pane_g2

0x178e,	// (0x00059ded) vkb2_top_grid_right_pane_g3_ParamLimits

0x178e,	// (0x00059ded) vkb2_top_grid_right_pane_g3

0xbd8f,	// (0x000643ee) vkb2_top_grid_right_pane_g4_ParamLimits

0xbd8f,	// (0x000643ee) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8c,	// (0x000683eb) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8c,	// (0x000683eb) vkb2_top_grid_right_pane_g

0x17bc,	// (0x00059e1b) vkb2_top_cell_left_pane_g1

0x17d3,	// (0x00059e32) vkb2_cell_keypad_pane_g1_ParamLimits

0x17d3,	// (0x00059e32) vkb2_cell_keypad_pane_g1

0x74d2,	// (0x0005fb31) vkb2_cell_keypad_pane_t1_ParamLimits

0x74d2,	// (0x0005fb31) vkb2_cell_keypad_pane_t1

0x17e1,	// (0x00059e40) vkb2_cell_bottom_grid_pane_ParamLimits

0x17e1,	// (0x00059e40) vkb2_cell_bottom_grid_pane

0x181a,	// (0x00059e79) vkb2_cell_bottom_grid_pane_g1

0xd50a,	// (0x00065b69) aid_call2_pane_cp02

0xd512,	// (0x00065b71) aid_call_pane_cp02

0xd51a,	// (0x00065b79) clock_digital_number_pane_cp10

0xd522,	// (0x00065b81) clock_digital_number_pane_cp11

0xd52a,	// (0x00065b89) clock_digital_number_pane_cp12

0xd532,	// (0x00065b91) clock_digital_number_pane_cp13

0xd53a,	// (0x00065b99) clock_digital_separator_pane_cp10

0x1efe,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g1

0x1efe,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g2

0xd542,	// (0x00065ba1) popup_clock_digital_analogue_window_cp2_g3

0x1efe,	// (0x0005a55d) popup_clock_digital_analogue_window_cp2_g4

0xd542,	// (0x00065ba1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd41,	// (0x000683a0) popup_clock_digital_analogue_window_cp2_g

0xd54a,	// (0x00065ba9) popup_clock_digital_analogue_window_cp2_t1

0xd558,	// (0x00065bb7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4c,	// (0x000683ab) popup_clock_digital_analogue_window_cp2_t

0x5540,	// (0x0005db9f) clock_digital_number_pane_cp10_g1

0x5540,	// (0x0005db9f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb28,	// (0x00068187) clock_digital_number_pane_cp10_g

0x5540,	// (0x0005db9f) clock_digital_separator_pane_cp10_g1

0x5540,	// (0x0005db9f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb28,	// (0x00068187) clock_digital_separator_pane_cp10_g

0x6edc,	// (0x0005f53b) uniindi_top_pane_g3

0x6eed,	// (0x0005f54c) uniindi_top_pane_g4

0x15f4,	// (0x00059c53) vkb2_row_keypad_pane_ParamLimits

0x15f4,	// (0x00059c53) vkb2_row_keypad_pane

0x1836,	// (0x00059e95) vkb2_cell_t_keypad_pane_ParamLimits

0x1836,	// (0x00059e95) vkb2_cell_t_keypad_pane

0x1846,	// (0x00059ea5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1846,	// (0x00059ea5) vkb2_cell_t_keypad_pane_cp08

0x185b,	// (0x00059eba) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x185b,	// (0x00059eba) vkb2_cell_t_keypad_pane_cp09

0x186f,	// (0x00059ece) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x186f,	// (0x00059ece) vkb2_cell_t_keypad_pane_cp01

0x1880,	// (0x00059edf) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1880,	// (0x00059edf) vkb2_cell_t_keypad_pane_cp02

0x1891,	// (0x00059ef0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1891,	// (0x00059ef0) vkb2_cell_t_keypad_pane_cp03

0x18a2,	// (0x00059f01) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x18a2,	// (0x00059f01) vkb2_cell_t_keypad_pane_cp04

0x18b3,	// (0x00059f12) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x18b3,	// (0x00059f12) vkb2_cell_t_keypad_pane_cp05

0x18c4,	// (0x00059f23) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x18c4,	// (0x00059f23) vkb2_cell_t_keypad_pane_cp06

0x18d7,	// (0x00059f36) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x18d7,	// (0x00059f36) vkb2_cell_t_keypad_pane_cp07

0x18ec,	// (0x00059f4b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x18ec,	// (0x00059f4b) vkb2_cell_t_keypad_pane_cp10

0x0f93,	// (0x000595f2) vkb2_cell_t_keypad_pane_g1

0x74e9,	// (0x0005fb48) vkb2_cell_t_keypad_pane_t1

0xee68,	// (0x000674c7) popup_grid_graphic2_window

0xd8a5,	// (0x00065f04) aid_size_cell_graphic2_ParamLimits

0xd8a5,	// (0x00065f04) aid_size_cell_graphic2

0xd8e3,	// (0x00065f42) bg_popup_window_pane_cp21_ParamLimits

0xd8e3,	// (0x00065f42) bg_popup_window_pane_cp21

0xd8f1,	// (0x00065f50) graphic2_pages_pane_ParamLimits

0xd8f1,	// (0x00065f50) graphic2_pages_pane

0xd949,	// (0x00065fa8) grid_graphic2_control_pane_ParamLimits

0xd949,	// (0x00065fa8) grid_graphic2_control_pane

0xd991,	// (0x00065ff0) grid_graphic2_pane_ParamLimits

0xd991,	// (0x00065ff0) grid_graphic2_pane

0xda1c,	// (0x0006607b) cell_graphic2_pane

0xee68,	// (0x000674c7) main_comp_mode_pane

0x6747,	// (0x0005eda6) list_ai3_gene_pane_ParamLimits

0xd24a,	// (0x000658a9) bg_popup_window_pane_cp19_ParamLimits

0x6b1b,	// (0x0005f17a) bg_touch_area_indi_pane_ParamLimits

0x6b1b,	// (0x0005f17a) bg_touch_area_indi_pane

0x6b31,	// (0x0005f190) bg_touch_area_indi_pane_cp01_ParamLimits

0x6b31,	// (0x0005f190) bg_touch_area_indi_pane_cp01

0x6b47,	// (0x0005f1a6) bg_touch_area_indi_pane_cp02_ParamLimits

0x6b47,	// (0x0005f1a6) bg_touch_area_indi_pane_cp02

0x6b61,	// (0x0005f1c0) bg_touch_area_indi_pane_cp03_ParamLimits

0x6b61,	// (0x0005f1c0) bg_touch_area_indi_pane_cp03

0x6b7b,	// (0x0005f1da) popup_slider_window_g1_ParamLimits

0x6b97,	// (0x0005f1f6) popup_slider_window_g2_ParamLimits

0x6bb3,	// (0x0005f212) popup_slider_window_g3_ParamLimits

0xfcd6,	// (0x00068335) popup_slider_window_g_ParamLimits

0x6c19,	// (0x0005f278) popup_slider_window_t1_ParamLimits

0x6c8d,	// (0x0005f2ec) small_volume_slider_vertical_pane_ParamLimits

0xda1c,	// (0x0006607b) cell_graphic2_pane_ParamLimits

0xda7e,	// (0x000660dd) bg_button_pane_cp10_ParamLimits

0xda7e,	// (0x000660dd) bg_button_pane_cp10

0xda91,	// (0x000660f0) bg_button_pane_cp11_ParamLimits

0xda91,	// (0x000660f0) bg_button_pane_cp11

0xdaa4,	// (0x00066103) graphic2_pages_pane_g1_ParamLimits

0xdaa4,	// (0x00066103) graphic2_pages_pane_g1

0xe5b5,	// (0x00066c14) graphic2_pages_pane_g2_ParamLimits

0xe5b5,	// (0x00066c14) graphic2_pages_pane_g2

0x0001,

0xfd9a,	// (0x000683f9) graphic2_pages_pane_g_ParamLimits

0xfd9a,	// (0x000683f9) graphic2_pages_pane_g

0xe5cd,	// (0x00066c2c) graphic2_pages_pane_t1_ParamLimits

0xe5cd,	// (0x00066c2c) graphic2_pages_pane_t1

0xe5e5,	// (0x00066c44) cell_graphic2_control_pane_ParamLimits

0xe5e5,	// (0x00066c44) cell_graphic2_control_pane

0xe613,	// (0x00066c72) cell_graphic2_pane_g1_ParamLimits

0xe613,	// (0x00066c72) cell_graphic2_pane_g1

0xdabf,	// (0x0006611e) cell_graphic2_pane_g2_ParamLimits

0xdabf,	// (0x0006611e) cell_graphic2_pane_g2

0xe40f,	// (0x00066a6e) cell_graphic2_pane_g3_ParamLimits

0xe40f,	// (0x00066a6e) cell_graphic2_pane_g3

0xdacc,	// (0x0006612b) cell_graphic2_pane_g4_ParamLimits

0xdacc,	// (0x0006612b) cell_graphic2_pane_g4

0xe620,	// (0x00066c7f) cell_graphic2_pane_g5_ParamLimits

0xe620,	// (0x00066c7f) cell_graphic2_pane_g5

0x0004,

0xfd9f,	// (0x000683fe) cell_graphic2_pane_g_ParamLimits

0xfd9f,	// (0x000683fe) cell_graphic2_pane_g

0xe63c,	// (0x00066c9b) cell_graphic2_pane_t1_ParamLimits

0xe63c,	// (0x00066c9b) cell_graphic2_pane_t1

0x3c1f,	// (0x0005c27e) grid_highlight_pane_cp11_ParamLimits

0x3c1f,	// (0x0005c27e) grid_highlight_pane_cp11

0x8bbe,	// (0x0006121d) bg_button_pane_cp05

0xe685,	// (0x00066ce4) cell_graphic2_control_pane_g1

0x5540,	// (0x0005db9f) bg_touch_area_indi_pane_g1

0x77cc,	// (0x0005fe2b) aid_cmod_rocker_key_size

0x77d6,	// (0x0005fe35) aid_cmode_itu_key_size

0x77e0,	// (0x0005fe3f) main_cmode_video_pane

0x77ea,	// (0x0005fe49) main_comp_mode_itu_pane

0x77f6,	// (0x0005fe55) main_comp_mode_rocker_pane

0x7802,	// (0x0005fe61) cell_cmode_rocker_pane_ParamLimits

0x7802,	// (0x0005fe61) cell_cmode_rocker_pane

0x7816,	// (0x0005fe75) cell_cmode_itu_pane_ParamLimits

0x7816,	// (0x0005fe75) cell_cmode_itu_pane

0x915b,	// (0x000617ba) bg_button_pane_cp06_ParamLimits

0x915b,	// (0x000617ba) bg_button_pane_cp06

0x57bb,	// (0x0005de1a) cell_cmode_rocker_pane_g1_ParamLimits

0x57bb,	// (0x0005de1a) cell_cmode_rocker_pane_g1

0x6d34,	// (0x0005f393) cell_cmode_rocker_pane_g2_ParamLimits

0x6d34,	// (0x0005f393) cell_cmode_rocker_pane_g2

0x0001,

0xfdaf,	// (0x0006840e) cell_cmode_rocker_pane_g_ParamLimits

0xfdaf,	// (0x0006840e) cell_cmode_rocker_pane_g

0x8a1b,	// (0x0006107a) bg_button_pane_cp07

0x782d,	// (0x0005fe8c) cell_cmode_itu_pane_g1

0x7836,	// (0x0005fe95) cell_cmode_itu_pane_t1

0x7844,	// (0x0005fea3) cell_cmode_itu_pane_t2

0x0001,

0xfdb4,	// (0x00068413) cell_cmode_itu_pane_t

0x6f82,	// (0x0005f5e1) aid_touch_ctrl_left

0x6f8a,	// (0x0005f5e9) aid_touch_ctrl_right

0x8a1b,	// (0x0006107a) compa_mode_pane

0xe6ad,	// (0x00066d0c) aid_cmod_rocker_key_size_cp

0xe6b7,	// (0x00066d16) aid_cmode_itu_key_size_cp

0x7866,	// (0x0005fec5) compa_mode_pane_g1

0x786e,	// (0x0005fecd) compa_mode_pane_g2

0x7876,	// (0x0005fed5) compa_mode_pane_g3

0x0002,

0xfdb9,	// (0x00068418) compa_mode_pane_g

0xe6c1,	// (0x00066d20) main_comp_mode_itu_pane_cp

0xe6c9,	// (0x00066d28) main_comp_mode_rocker_pane_cp

0xe6d1,	// (0x00066d30) cell_cmode_itu_pane_cp_ParamLimits

0xe6d1,	// (0x00066d30) cell_cmode_itu_pane_cp

0xe6e6,	// (0x00066d45) cell_cmode_rocker_pane_cp_ParamLimits

0xe6e6,	// (0x00066d45) cell_cmode_rocker_pane_cp

0x915b,	// (0x000617ba) bg_button_pane_cp06_cp_ParamLimits

0x915b,	// (0x000617ba) bg_button_pane_cp06_cp

0x57bb,	// (0x0005de1a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x57bb,	// (0x0005de1a) cell_cmode_rocker_pane_g1_cp

0x5540,	// (0x0005db9f) cell_cmode_rocker_pane_g2_cp

0x8a1b,	// (0x0006107a) bg_button_pane_cp07_cp

0xe6f8,	// (0x00066d57) cell_cmode_itu_pane_g1_cp

0xe701,	// (0x00066d60) cell_cmode_itu_pane_t1_cp

0xe701,	// (0x00066d60) cell_cmode_itu_pane_t2_cp

0xc7ec,	// (0x00064e4b) settings_code_pane_cp2

0x8a7d,	// (0x000610dc) bg_popup_window_pane_cp3_ParamLimits

0x8e60,	// (0x000614bf) heading_pane_cp3_ParamLimits

0x8e6f,	// (0x000614ce) listscroll_popup_graphic_pane_ParamLimits

0x0d26,	// (0x00059385) fep_hwr_aid_pane_ParamLimits

0x12ac,	// (0x0005990b) aid_touch_sctrl_top_ParamLimits

0x12c7,	// (0x00059926) sctrl_sk_top_pane_g1_ParamLimits

0x0f93,	// (0x000595f2) sctrl_sk_top_pane_g2_ParamLimits

0xfcef,	// (0x0006834e) sctrl_sk_top_pane_g_ParamLimits

0x12d4,	// (0x00059933) sctrl_sk_top_pane_t1_ParamLimits

0x12ac,	// (0x0005990b) aid_touch_sctrl_bottom_ParamLimits

0x12d4,	// (0x00059933) sctrl_sk_bottom_pane_t1_ParamLimits

0x6ea6,	// (0x0005f505) aid_area_touch_clock

0xbbbd,	// (0x0006421c) aid_vkb2_area_top_pane_cell_ParamLimits

0xbbbd,	// (0x0006421c) aid_vkb2_area_top_pane_cell

0xbc68,	// (0x000642c7) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbc68,	// (0x000642c7) aid_vkb2_area_bottom_pane_cell

0x7434,	// (0x0005fa93) popup_char_count_window

0x78cc,	// (0x0005ff2b) popup_char_count_window_g1

0x78d5,	// (0x0005ff34) popup_char_count_window_g2

0x78de,	// (0x0005ff3d) popup_char_count_window_g3

0x0002,

0xfdc0,	// (0x0006841f) popup_char_count_window_g

0x78e7,	// (0x0005ff46) popup_char_count_window_t1

0x1385,	// (0x000599e4) popup_fep_char_preview_window_ParamLimits

0x1385,	// (0x000599e4) popup_fep_char_preview_window

0xbbdd,	// (0x0006423c) vkb2_top_candi_pane_ParamLimits

0xbbdd,	// (0x0006423c) vkb2_top_candi_pane

0xe70f,	// (0x00066d6e) cell_vkb2_top_candi_pane_ParamLimits

0xe70f,	// (0x00066d6e) cell_vkb2_top_candi_pane

0x1901,	// (0x00059f60) bg_popup_fep_char_preview_window_ParamLimits

0x1901,	// (0x00059f60) bg_popup_fep_char_preview_window

0x190f,	// (0x00059f6e) popup_fep_char_preview_window_t1_ParamLimits

0x190f,	// (0x00059f6e) popup_fep_char_preview_window_t1

0x7946,	// (0x0005ffa5) bg_popup_fep_char_preview_window_g1

0x794e,	// (0x0005ffad) bg_popup_fep_char_preview_window_g2

0x7956,	// (0x0005ffb5) bg_popup_fep_char_preview_window_g3

0x795e,	// (0x0005ffbd) bg_popup_fep_char_preview_window_g4

0x7966,	// (0x0005ffc5) bg_popup_fep_char_preview_window_g5

0x796e,	// (0x0005ffcd) bg_popup_fep_char_preview_window_g6

0x7976,	// (0x0005ffd5) bg_popup_fep_char_preview_window_g7

0x797e,	// (0x0005ffdd) bg_popup_fep_char_preview_window_g8

0x7986,	// (0x0005ffe5) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc7,	// (0x00068426) bg_popup_fep_char_preview_window_g

0x0f93,	// (0x000595f2) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f93,	// (0x000595f2) cell_vkb2_top_candi_pane_g1

0x0fa1,	// (0x00059600) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0fa1,	// (0x00059600) cell_vkb2_top_candi_pane_g2

0x6f39,	// (0x0005f598) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6f39,	// (0x0005f598) cell_vkb2_top_candi_pane_g3

0x1951,	// (0x00059fb0) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1951,	// (0x00059fb0) cell_vkb2_top_candi_pane_g4

0x5cda,	// (0x0005e339) cell_vkb2_top_candi_pane_g5_ParamLimits

0x5cda,	// (0x0005e339) cell_vkb2_top_candi_pane_g5

0x1972,	// (0x00059fd1) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1972,	// (0x00059fd1) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddc,	// (0x0006843b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddc,	// (0x0006843b) cell_vkb2_top_candi_pane_g

0x1980,	// (0x00059fdf) cell_vkb2_top_candi_pane_t1

0x0ae4,	// (0x00059143) aid_size_touch_slider_mark_ParamLimits

0x0ae4,	// (0x00059143) aid_size_touch_slider_mark

0xd92d,	// (0x00065f8c) grid_graphic2_catg_pane_ParamLimits

0xd92d,	// (0x00065f8c) grid_graphic2_catg_pane

0xd9eb,	// (0x0006604a) popup_grid_graphic2_window_t1_ParamLimits

0xd9eb,	// (0x0006604a) popup_grid_graphic2_window_t1

0xda01,	// (0x00066060) popup_grid_graphic2_window_t2_ParamLimits

0xda01,	// (0x00066060) popup_grid_graphic2_window_t2

0x0001,

0xfd95,	// (0x000683f4) popup_grid_graphic2_window_t_ParamLimits

0xfd95,	// (0x000683f4) popup_grid_graphic2_window_t

0x8bbe,	// (0x0006121d) bg_button_pane_cp05_ParamLimits

0xe685,	// (0x00066ce4) cell_graphic2_control_pane_g1_ParamLimits

0xe779,	// (0x00066dd8) cell_graphic2_catg_pane_ParamLimits

0xe779,	// (0x00066dd8) cell_graphic2_catg_pane

0x8a1b,	// (0x0006107a) bg_button_pane_cp12

0xe78b,	// (0x00066dea) cell_graphic2_catg_pane_g1

0x6e72,	// (0x0005f4d1) cell_tb_ext_pane_t1_ParamLimits

0x1733,	// (0x00059d92) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1733,	// (0x00059d92) vkb2_top_cell_right_narrow_pane

0x174b,	// (0x00059daa) vkb2_top_cell_right_wide_pane_ParamLimits

0x174b,	// (0x00059daa) vkb2_top_cell_right_wide_pane

0x0d18,	// (0x00059377) bg_vkb2_func_pane_ParamLimits

0x0d18,	// (0x00059377) bg_vkb2_func_pane

0x17bc,	// (0x00059e1b) vkb2_top_cell_left_pane_g1_ParamLimits

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp03

0x181a,	// (0x00059e79) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2d87,	// (0x0005b3e6) bg_vkb2_func_pane_g1

0x2d8f,	// (0x0005b3ee) bg_vkb2_func_pane_g2

0x2d9f,	// (0x0005b3fe) bg_vkb2_func_pane_g3

0x2d97,	// (0x0005b3f6) bg_vkb2_func_pane_g4

0x2da7,	// (0x0005b406) bg_vkb2_func_pane_g5

0x2daf,	// (0x0005b40e) bg_vkb2_func_pane_g6

0x2db7,	// (0x0005b416) bg_vkb2_func_pane_g7

0x2dbf,	// (0x0005b41e) bg_vkb2_func_pane_g8

0x2d7f,	// (0x0005b3de) bg_vkb2_func_pane_g9

0x0008,

0xfde9,	// (0x00068448) bg_vkb2_func_pane_g

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp01

0x17bc,	// (0x00059e1b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x17bc,	// (0x00059e1b) vkb2_top_cell_right_wide_pane_g1

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0d18,	// (0x00059377) bg_vkb2_fuc_pane_cp02

0x181a,	// (0x00059e79) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x181a,	// (0x00059e79) vkb2_top_cell_right_narrow_pane_g1

0xd18c,	// (0x000657eb) aid_touch_area_decrease_ParamLimits

0xd18c,	// (0x000657eb) aid_touch_area_decrease

0xd1c6,	// (0x00065825) aid_touch_area_increase_ParamLimits

0xd1c6,	// (0x00065825) aid_touch_area_increase

0xd1ee,	// (0x0006584d) aid_touch_area_mute_ParamLimits

0xd1ee,	// (0x0006584d) aid_touch_area_mute

0xd216,	// (0x00065875) aid_touch_area_slider_ParamLimits

0xd216,	// (0x00065875) aid_touch_area_slider

0xd256,	// (0x000658b5) popup_slider_window_g4_ParamLimits

0xd256,	// (0x000658b5) popup_slider_window_g4

0xd27e,	// (0x000658dd) popup_slider_window_g5_ParamLimits

0xd27e,	// (0x000658dd) popup_slider_window_g5

0xd2b2,	// (0x00065911) popup_slider_window_g6_ParamLimits

0xd2b2,	// (0x00065911) popup_slider_window_g6

0x6c47,	// (0x0005f2a6) popup_slider_window_t2_ParamLimits

0x6c47,	// (0x0005f2a6) popup_slider_window_t2

0x0001,

0xfce3,	// (0x00068342) popup_slider_window_t_ParamLimits

0xfce3,	// (0x00068342) popup_slider_window_t

0xd2ce,	// (0x0006592d) slider_pane_ParamLimits

0xd2ce,	// (0x0006592d) slider_pane

0x79a9,	// (0x00060008) slider_pane_g1_ParamLimits

0x79a9,	// (0x00060008) slider_pane_g1

0x79bd,	// (0x0006001c) slider_pane_g2_ParamLimits

0x79bd,	// (0x0006001c) slider_pane_g2

0x79d3,	// (0x00060032) slider_pane_g3_ParamLimits

0x79d3,	// (0x00060032) slider_pane_g3

0x0003,

0xfdfc,	// (0x0006845b) slider_pane_g_ParamLimits

0xfdfc,	// (0x0006845b) slider_pane_g

0xb505,	// (0x00063b64) popup_tb_float_extension_window_ParamLimits

0xb505,	// (0x00063b64) popup_tb_float_extension_window

0x79ff,	// (0x0006005e) aid_size_cell_tb_float_ext

0x8a1b,	// (0x0006107a) bg_popup_sub_window_cp28

0x7a0b,	// (0x0006006a) grid_tb_float_ext_pane

0x7a17,	// (0x00060076) cell_tb_float_ext_pane_ParamLimits

0x7a17,	// (0x00060076) cell_tb_float_ext_pane

0x7a33,	// (0x00060092) cell_tb_float_ext_pane_g1

0x7a3c,	// (0x0006009b) grid_highlight_pane_cp12

0xb822,	// (0x00063e81) cell_last_hwr_side_pane_ParamLimits

0xb822,	// (0x00063e81) cell_last_hwr_side_pane

0x5540,	// (0x0005db9f) cell_last_hwr_side_pane_g1

0x7a45,	// (0x000600a4) cell_last_hwr_side_pane_g2

0x0001,

0xfe05,	// (0x00068464) cell_last_hwr_side_pane_g

0xbd44,	// (0x000643a3) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbd44,	// (0x000643a3) vkb2_area_bottom_space_btn_pane

0x0f93,	// (0x000595f2) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x74e9,	// (0x0005fb48) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1980,	// (0x00059fdf) cell_vkb2_top_candi_pane_t1_ParamLimits

0x199e,	// (0x00059ffd) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x199e,	// (0x00059ffd) vkb2_area_bottom_space_btn_pane_g1

0x19d8,	// (0x0005a037) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x19d8,	// (0x0005a037) vkb2_area_bottom_space_btn_pane_g2

0x1a0e,	// (0x0005a06d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1a0e,	// (0x0005a06d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0a,	// (0x00068469) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0a,	// (0x00068469) vkb2_area_bottom_space_btn_pane_g

0x0ddd,	// (0x0005943c) cel_fep_hwr_func_pane_ParamLimits

0x0ddd,	// (0x0005943c) cel_fep_hwr_func_pane

0xb7f7,	// (0x00063e56) cell_hwr_side_button_pane_ParamLimits

0xb7f7,	// (0x00063e56) cell_hwr_side_button_pane

0x6ea6,	// (0x0005f505) aid_area_touch_clock_ParamLimits

0x8bbe,	// (0x0006121d) bg_uniindi_top_pane_ParamLimits

0x6eba,	// (0x0005f519) uniindi_top_pane_g1_ParamLimits

0x6ed0,	// (0x0005f52f) uniindi_top_pane_g2_ParamLimits

0x6edc,	// (0x0005f53b) uniindi_top_pane_g3_ParamLimits

0x6eed,	// (0x0005f54c) uniindi_top_pane_g4_ParamLimits

0xfd1b,	// (0x0006837a) uniindi_top_pane_g_ParamLimits

0x6efa,	// (0x0005f559) uniindi_top_pane_t1_ParamLimits

0x8bbe,	// (0x0006121d) bg_vkb2_func_pane_cp01_ParamLimits

0x8bbe,	// (0x0006121d) bg_vkb2_func_pane_cp01

0x7a4e,	// (0x000600ad) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a4e,	// (0x000600ad) cel_fep_hwr_func_pane_g1

0x8bbe,	// (0x0006121d) bg_vkb2_func_pane_cp02_ParamLimits

0x8bbe,	// (0x0006121d) bg_vkb2_func_pane_cp02

0x7a4e,	// (0x000600ad) cell_hwr_side_button_pane_g1_ParamLimits

0x7a4e,	// (0x000600ad) cell_hwr_side_button_pane_g1

0x2bec,	// (0x0005b24b) status_pane_g4_ParamLimits

0x2bec,	// (0x0005b24b) status_pane_g4

0x2c06,	// (0x0005b265) status_pane_t1

0x52f3,	// (0x0005d952) form2_midp_gauge_slider_cont_pane

0x52fb,	// (0x0005d95a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcadd,	// (0x0006513c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcaef,	// (0x0006514e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfadb,	// (0x0006813a) form2_midp_gauge_slider_pane_t_ParamLimits

0x5331,	// (0x0005d990) form2_midp_slider_pane_ParamLimits

0x1345,	// (0x000599a4) aid_size_cell_func_vkb2_ParamLimits

0x1345,	// (0x000599a4) aid_size_cell_func_vkb2

0x79eb,	// (0x0006004a) slider_pane_g4_ParamLimits

0x79eb,	// (0x0006004a) slider_pane_g4

0xbdad,	// (0x0006440c) form2_midp_gauge_slider_pane_t2_cp01

0xbdbb,	// (0x0006441a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbdbb,	// (0x0006441a) form2_midp_gauge_slider_pane_t3_cp01

0x1a83,	// (0x0005a0e2) form2_midp_slider_pane_cp01

0x8a1b,	// (0x0006107a) navi_smil_pane

0x7a87,	// (0x000600e6) navi_smil_pane_g1

0x7a8f,	// (0x000600ee) navi_smil_pane_t1

0x7a5c,	// (0x000600bb) form2_midp_slider_pane_g1

0x7a65,	// (0x000600c4) form2_midp_slider_pane_g2

0x7a6d,	// (0x000600cc) form2_midp_slider_pane_g3

0x7a5c,	// (0x000600bb) form2_midp_slider_pane_g4

0xe794,	// (0x00066df3) form2_midp_slider_pane_g5

0x0004,

0xfe13,	// (0x00068472) form2_midp_slider_pane_g

0x1a48,	// (0x0005a0a7) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1a48,	// (0x0005a0a7) vkb2_area_bottom_space_btn_pane_g4

0xc147,	// (0x000647a6) lc0_navi_pane_ParamLimits

0xc147,	// (0x000647a6) lc0_navi_pane

0xc1b7,	// (0x00064816) lc0_stat_indi_pane_ParamLimits

0xc1b7,	// (0x00064816) lc0_stat_indi_pane

0xc1cc,	// (0x0006482b) ls0_title_pane_ParamLimits

0xc1cc,	// (0x0006482b) ls0_title_pane

0x915b,	// (0x000617ba) bg_popup_sub_pane_cp14_ParamLimits

0x6e8d,	// (0x0005f4ec) list_uniindi_pane_ParamLimits

0x6e99,	// (0x0005f4f8) uniindi_top_pane_ParamLimits

0x6f5a,	// (0x0005f5b9) list_single_uniindi_pane_g1_ParamLimits

0x6f6d,	// (0x0005f5cc) list_single_uniindi_pane_t1_ParamLimits

0xbdd8,	// (0x00064437) lc0_stat_clock_pane_ParamLimits

0xbdd8,	// (0x00064437) lc0_stat_clock_pane

0xe79d,	// (0x00066dfc) lc0_stat_indi_pane_g1_ParamLimits

0xe79d,	// (0x00066dfc) lc0_stat_indi_pane_g1

0xe7aa,	// (0x00066e09) lc0_stat_indi_pane_g2_ParamLimits

0xe7aa,	// (0x00066e09) lc0_stat_indi_pane_g2

0x0001,

0xfe1e,	// (0x0006847d) lc0_stat_indi_pane_g_ParamLimits

0xfe1e,	// (0x0006847d) lc0_stat_indi_pane_g

0xbde5,	// (0x00064444) lc0_uni_indicator_pane_ParamLimits

0xbde5,	// (0x00064444) lc0_uni_indicator_pane

0xe7b7,	// (0x00066e16) ls0_title_pane_g1_ParamLimits

0xe7b7,	// (0x00066e16) ls0_title_pane_g1

0xe7cb,	// (0x00066e2a) ls0_title_pane_t1_ParamLimits

0xe7cb,	// (0x00066e2a) ls0_title_pane_t1

0xbdf2,	// (0x00064451) lc0_uni_indicator_pane_g1_ParamLimits

0xbdf2,	// (0x00064451) lc0_uni_indicator_pane_g1

0x7b01,	// (0x00060160) lc0_stat_clock_pane_t1

0xee68,	// (0x000674c7) main_ai5_pane

0x7b0f,	// (0x0006016e) ai5_sk_pane_ParamLimits

0x7b0f,	// (0x0006016e) ai5_sk_pane

0xe7f9,	// (0x00066e58) cell_ai5_widget_pane_ParamLimits

0xe7f9,	// (0x00066e58) cell_ai5_widget_pane

0xe868,	// (0x00066ec7) aid_size_cell_widget_grid

0x7bcd,	// (0x0006022c) bg_ai5_widget_pane_ParamLimits

0x7bcd,	// (0x0006022c) bg_ai5_widget_pane

0xe89c,	// (0x00066efb) cell_ai5_widget_pane_g2

0xe8b0,	// (0x00066f0f) cell_ai5_widget_pane_g3

0xe8ca,	// (0x00066f29) cell_ai5_widget_pane_g4

0xe8da,	// (0x00066f39) cell_ai5_widget_pane_g5

0xe8ea,	// (0x00066f49) cell_ai5_widget_pane_g6

0xe8f6,	// (0x00066f55) cell_ai5_widget_pane_g7

0xe91a,	// (0x00066f79) cell_ai5_widget_pane_t1_ParamLimits

0xe91a,	// (0x00066f79) cell_ai5_widget_pane_t1

0x7d2c,	// (0x0006038b) cell_ai5_widget_pane_t2_ParamLimits

0x7d2c,	// (0x0006038b) cell_ai5_widget_pane_t2

0x7d44,	// (0x000603a3) cell_ai5_widget_pane_t3_ParamLimits

0x7d44,	// (0x000603a3) cell_ai5_widget_pane_t3

0xe937,	// (0x00066f96) cell_ai5_widget_pane_t4_ParamLimits

0xe937,	// (0x00066f96) cell_ai5_widget_pane_t4

0xe95d,	// (0x00066fbc) cell_ai5_widget_pane_t5_ParamLimits

0xe95d,	// (0x00066fbc) cell_ai5_widget_pane_t5

0x7da2,	// (0x00060401) cell_ai5_widget_pane_t6_ParamLimits

0x7da2,	// (0x00060401) cell_ai5_widget_pane_t6

0x7db4,	// (0x00060413) cell_ai5_widget_pane_t7_ParamLimits

0x7db4,	// (0x00060413) cell_ai5_widget_pane_t7

0x7dd3,	// (0x00060432) cell_ai5_widget_pane_t8_ParamLimits

0x7dd3,	// (0x00060432) cell_ai5_widget_pane_t8

0x000b,

0xfe3e,	// (0x0006849d) cell_ai5_widget_pane_t_ParamLimits

0xfe3e,	// (0x0006849d) cell_ai5_widget_pane_t

0xe9ef,	// (0x0006704e) grid_ai5_widget_pane

0x915b,	// (0x000617ba) highlight_cell_ai5_widget_pane_ParamLimits

0x915b,	// (0x000617ba) highlight_cell_ai5_widget_pane

0xe9fd,	// (0x0006705c) ai5_sk_left_pane

0xea07,	// (0x00067066) ai5_sk_middle_pane

0xea11,	// (0x00067070) ai5_sk_right_pane

0x7e83,	// (0x000604e2) bg_ai5_widget_pane_g1_ParamLimits

0x7e83,	// (0x000604e2) bg_ai5_widget_pane_g1

0x7e8f,	// (0x000604ee) bg_ai5_widget_pane_g2_ParamLimits

0x7e8f,	// (0x000604ee) bg_ai5_widget_pane_g2

0x7e9b,	// (0x000604fa) bg_ai5_widget_pane_g3_ParamLimits

0x7e9b,	// (0x000604fa) bg_ai5_widget_pane_g3

0x7ea7,	// (0x00060506) bg_ai5_widget_pane_g4_ParamLimits

0x7ea7,	// (0x00060506) bg_ai5_widget_pane_g4

0x7eb3,	// (0x00060512) bg_ai5_widget_pane_g5_ParamLimits

0x7eb3,	// (0x00060512) bg_ai5_widget_pane_g5

0x7ebf,	// (0x0006051e) bg_ai5_widget_pane_g6_ParamLimits

0x7ebf,	// (0x0006051e) bg_ai5_widget_pane_g6

0x7ecb,	// (0x0006052a) bg_ai5_widget_pane_g7_ParamLimits

0x7ecb,	// (0x0006052a) bg_ai5_widget_pane_g7

0x7ed7,	// (0x00060536) bg_ai5_widget_pane_g8_ParamLimits

0x7ed7,	// (0x00060536) bg_ai5_widget_pane_g8

0x7ee3,	// (0x00060542) bg_ai5_widget_pane_g9_ParamLimits

0x7ee3,	// (0x00060542) bg_ai5_widget_pane_g9

0x0008,

0xfe57,	// (0x000684b6) bg_ai5_widget_pane_g_ParamLimits

0xfe57,	// (0x000684b6) bg_ai5_widget_pane_g

0xea47,	// (0x000670a6) cell_shortcut_ai5_widget_pane_ParamLimits

0xea47,	// (0x000670a6) cell_shortcut_ai5_widget_pane

0x250a,	// (0x0005ab69) bg_cell_shortcut_ai5_widget_pane

0x7f2e,	// (0x0006058d) cell_grid_ai5_widget_pane_g1

0x250a,	// (0x0005ab69) highlight_cell_shortcut_ai5_widget_pane

0x2d87,	// (0x0005b3e6) ai5_sk_left_pane_g1

0x7f37,	// (0x00060596) ai5_sk_left_pane_g2

0x7f3f,	// (0x0006059e) ai5_sk_left_pane_g3

0x7f47,	// (0x000605a6) ai5_sk_left_pane_g4

0x0003,

0xfe6a,	// (0x000684c9) ai5_sk_left_pane_g

0x7f4f,	// (0x000605ae) ai5_sk_left_pane_t1

0x2d8f,	// (0x0005b3ee) ai5_sk_right_pane_g1

0x7f5d,	// (0x000605bc) ai5_sk_right_pane_g2

0x7f65,	// (0x000605c4) ai5_sk_right_pane_g3

0x7f6d,	// (0x000605cc) ai5_sk_right_pane_g4

0x0003,

0xfe73,	// (0x000684d2) ai5_sk_right_pane_g

0x7f75,	// (0x000605d4) ai5_sk_right_pane_t1

0x2d8f,	// (0x0005b3ee) ai5_sk_middle_pane_g1

0x2d87,	// (0x0005b3e6) ai5_sk_middle_pane_g2

0x2da7,	// (0x0005b406) ai5_sk_middle_pane_g3

0x7f65,	// (0x000605c4) ai5_sk_middle_pane_g4

0x7f3f,	// (0x0006059e) ai5_sk_middle_pane_g5

0x7f83,	// (0x000605e2) ai5_sk_middle_pane_g6

0xea5a,	// (0x000670b9) ai5_sk_middle_pane_g7

0x0006,

0xfe7c,	// (0x000684db) ai5_sk_middle_pane_g

0xc031,	// (0x00064690) aid_touch_area_size_lc0_ParamLimits

0xc031,	// (0x00064690) aid_touch_area_size_lc0

0x0fc2,	// (0x00059621) cell_hwr_candidate_pane_t1_ParamLimits

0x28af,	// (0x0005af0e) aid_touch_navi_pane

0xc2d7,	// (0x00064936) status_dt_navi_pane_ParamLimits

0xc2d7,	// (0x00064936) status_dt_navi_pane

0xc2ef,	// (0x0006494e) status_dt_sta_pane_ParamLimits

0xc2ef,	// (0x0006494e) status_dt_sta_pane

0xea62,	// (0x000670c1) dt_sta_controll_pane

0xea6f,	// (0x000670ce) dt_sta_indi_pane

0xea7c,	// (0x000670db) dt_sta_title_pane

0x8bbe,	// (0x0006121d) bg_dt_sta_indi_pane_ParamLimits

0x8bbe,	// (0x0006121d) bg_dt_sta_indi_pane

0xea8e,	// (0x000670ed) dt_sta_battery_pane

0xea96,	// (0x000670f5) dt_sta_indi_pane_g1

0xea9f,	// (0x000670fe) dt_sta_indi_pane_g2

0xeaa8,	// (0x00067107) dt_sta_indi_pane_g3

0x0002,

0xfe8b,	// (0x000684ea) dt_sta_indi_pane_g

0xeab1,	// (0x00067110) dt_sta_signal_pane

0x915b,	// (0x000617ba) bg_dt_sta_title_pane_ParamLimits

0x915b,	// (0x000617ba) bg_dt_sta_title_pane

0xeaba,	// (0x00067119) dt_sta_title_pane_g1

0xeac2,	// (0x00067121) dt_sta_title_pane_t1_ParamLimits

0xeac2,	// (0x00067121) dt_sta_title_pane_t1

0x8a1b,	// (0x0006107a) bg_dt_sta_control_pane

0xead7,	// (0x00067136) dt_sta_controll_pane_g1

0xeae0,	// (0x0006713f) bg_dt_sta_title_pane_g1

0xeae9,	// (0x00067148) bg_dt_sta_title_pane_g2

0xeaf2,	// (0x00067151) bg_dt_sta_title_pane_g3

0x0002,

0xfe92,	// (0x000684f1) bg_dt_sta_title_pane_g

0x5540,	// (0x0005db9f) bg_dt_sta_indi_pane_g1

0x8031,	// (0x00060690) dt_sta_signal_pane_g1

0x8039,	// (0x00060698) dt_sta_signal_pane_g2

0x0001,

0xfe99,	// (0x000684f8) dt_sta_signal_pane_g

0x8041,	// (0x000606a0) dt_sta_battery_pane_g1

0x804a,	// (0x000606a9) dt_sta_battery_pane_t1

0x5540,	// (0x0005db9f) bg_dt_sta_control_pane_g1

0x2008,	// (0x0005a667) fep_china_uni_eep_pane

0x2010,	// (0x0005a66f) fep_china_uni_entry_pane_ParamLimits

0x2020,	// (0x0005a67f) popup_fep_china_uni_window_g1_ParamLimits

0x2030,	// (0x0005a68f) popup_fep_china_uni_window_g2_ParamLimits

0x2030,	// (0x0005a68f) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x00067d5c) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x00067d5c) popup_fep_china_uni_window_g

0x8059,	// (0x000606b8) fep_china_uni_eep_pane_g1

0x8061,	// (0x000606c0) fep_china_uni_eep_pane_t1

0x7a7e,	// (0x000600dd) aid_touch_area_size_smil_player

0x2a03,	// (0x0005b062) lc0_clock_pane

0x2bfa,	// (0x0005b259) status_pane_g5_ParamLimits

0x2bfa,	// (0x0005b259) status_pane_g5

0xb02d,	// (0x0006368c) popup_keymap_window

0x2bc0,	// (0x0005b21f) status_icon_pane

0xe8b0,	// (0x00066f0f) cell_ai5_widget_pane_g3_ParamLimits

0xe8ca,	// (0x00066f29) cell_ai5_widget_pane_g4_ParamLimits

0xe8da,	// (0x00066f39) cell_ai5_widget_pane_g5_ParamLimits

0x7caf,	// (0x0006030e) cell_ai5_widget_pane_g8_ParamLimits

0x7caf,	// (0x0006030e) cell_ai5_widget_pane_g8

0x7cc3,	// (0x00060322) cell_ai5_widget_pane_g9_ParamLimits

0x7cc3,	// (0x00060322) cell_ai5_widget_pane_g9

0x7cd7,	// (0x00060336) cell_ai5_widget_pane_g10_ParamLimits

0x7cd7,	// (0x00060336) cell_ai5_widget_pane_g10

0x8070,	// (0x000606cf) status_icon_pane_g1

0x8a1b,	// (0x0006107a) bg_popup_sub_pane_cp13

0x8078,	// (0x000606d7) popup_keymap_window_t1

0xad30,	// (0x0006338f) control_pane_g6_ParamLimits

0xad30,	// (0x0006338f) control_pane_g6

0xad3d,	// (0x0006339c) control_pane_g7_ParamLimits

0xad3d,	// (0x0006339c) control_pane_g7

0xad4a,	// (0x000633a9) control_pane_g8_ParamLimits

0xad4a,	// (0x000633a9) control_pane_g8

0xea62,	// (0x000670c1) dt_sta_controll_pane_ParamLimits

0xea6f,	// (0x000670ce) dt_sta_indi_pane_ParamLimits

0xea7c,	// (0x000670db) dt_sta_title_pane_ParamLimits

0x909d,	// (0x000616fc) aid_size_touch_scroll_bar_cale

0xef45,	// (0x000675a4) popup_discreet_window_ParamLimits

0xef45,	// (0x000675a4) popup_discreet_window

0x9d4c,	// (0x000623ab) popup_sk_window

0x33e5,	// (0x0005ba44) bg_popup_sub_pane_cp28_ParamLimits

0x33e5,	// (0x0005ba44) bg_popup_sub_pane_cp28

0x8086,	// (0x000606e5) popup_discreet_window_g1_ParamLimits

0x8086,	// (0x000606e5) popup_discreet_window_g1

0x80a6,	// (0x00060705) popup_discreet_window_t1_ParamLimits

0x80a6,	// (0x00060705) popup_discreet_window_t1

0x80c4,	// (0x00060723) popup_discreet_window_t2_ParamLimits

0x80c4,	// (0x00060723) popup_discreet_window_t2

0x0002,

0xfe9e,	// (0x000684fd) popup_discreet_window_t_ParamLimits

0xfe9e,	// (0x000684fd) popup_discreet_window_t

0x1ab9,	// (0x0005a118) popup_sk_window_g1

0x1ac3,	// (0x0005a122) popup_sk_window_g2

0x0001,

0xfea5,	// (0x00068504) popup_sk_window_g

0x1acb,	// (0x0005a12a) popup_sk_window_t1

0x1ad9,	// (0x0005a138) popup_sk_window_t1_copy1

0xe89c,	// (0x00066efb) cell_ai5_widget_pane_g2_ParamLimits

0xe97d,	// (0x00066fdc) cell_ai5_widget_pane_t9_ParamLimits

0xe97d,	// (0x00066fdc) cell_ai5_widget_pane_t9

0x8a1b,	// (0x0006107a) main_fep_fshwr2_pane

0xbe11,	// (0x00064470) aid_fshwr2_btn_pane

0xbe25,	// (0x00064484) aid_fshwr2_syb_pane

0xbe39,	// (0x00064498) aid_fshwr2_txt_pane

0xbe49,	// (0x000644a8) fshwr2_func_candi_pane

0xbe6b,	// (0x000644ca) fshwr2_hwr_syb_pane

0xbe8f,	// (0x000644ee) fshwr2_icf_pane

0xee68,	// (0x000674c7) fshwr2_icf_bg_pane

0x1b73,	// (0x0005a1d2) fshwr2_icf_pane_t1_ParamLimits

0x1b73,	// (0x0005a1d2) fshwr2_icf_pane_t1

0x1efe,	// (0x0005a55d) fshwr2_func_candi_pane_g1

0xeafb,	// (0x0006715a) fshwr2_func_candi_row_pane_ParamLimits

0xeafb,	// (0x0006715a) fshwr2_func_candi_row_pane

0xbebf,	// (0x0006451e) cell_fshwr2_syb_pane_ParamLimits

0xbebf,	// (0x0006451e) cell_fshwr2_syb_pane

0x1bac,	// (0x0005a20b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x1bac,	// (0x0005a20b) fshwr2_hwr_syb_pane_g1

0xee68,	// (0x000674c7) bg_popup_call_pane_cp01

0xbee7,	// (0x00064546) fshwr2_func_candi_cell_pane_ParamLimits

0xbee7,	// (0x00064546) fshwr2_func_candi_cell_pane

0x31c5,	// (0x0005b824) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x31c5,	// (0x0005b824) fshwr2_func_candi_cell_bg_pane

0xbf32,	// (0x00064591) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xbf32,	// (0x00064591) fshwr2_func_candi_cell_pane_g1

0xbf69,	// (0x000645c8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbf69,	// (0x000645c8) fshwr2_func_candi_cell_pane_t1

0xee68,	// (0x000674c7) bg_button_pane_cp08

0x2831,	// (0x0005ae90) cell_fshwr2_syb_bg_pane

0xbf84,	// (0x000645e3) cell_fshwr2_syb_bg_pane_g1

0xbf98,	// (0x000645f7) cell_fshwr2_syb_bg_pane_t1

0x915b,	// (0x000617ba) main_tmo_pane

0xc5f1,	// (0x00064c50) uni_indicator_pane_g1_ParamLimits

0xc607,	// (0x00064c66) uni_indicator_pane_g2_ParamLimits

0xc61d,	// (0x00064c7c) uni_indicator_pane_g3_ParamLimits

0xc630,	// (0x00064c8f) uni_indicator_pane_g4_ParamLimits

0xc630,	// (0x00064c8f) uni_indicator_pane_g4

0x411f,	// (0x0005c77e) uni_indicator_pane_g5_ParamLimits

0x411f,	// (0x0005c77e) uni_indicator_pane_g5

0x411f,	// (0x0005c77e) uni_indicator_pane_g6_ParamLimits

0x411f,	// (0x0005c77e) uni_indicator_pane_g6

0xf8fc,	// (0x00067f5b) uni_indicator_pane_g_ParamLimits

0xd15c,	// (0x000657bb) popup_tmo_note_window_ParamLimits

0xd15c,	// (0x000657bb) popup_tmo_note_window

0x1327,	// (0x00059986) fshwr2_bg_pane

0xbf5a,	// (0x000645b9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xbf5a,	// (0x000645b9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeaa,	// (0x00068509) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeaa,	// (0x00068509) fshwr2_func_candi_cell_pane_g

0x0f7b,	// (0x000595da) bg_popup_window_pane_cp01

0x1c65,	// (0x0005a2c4) bg_popup_window_pane_g1_cp01

0x8139,	// (0x00060798) bg_popup_window_pane_cp22_ParamLimits

0x8139,	// (0x00060798) bg_popup_window_pane_cp22

0x8147,	// (0x000607a6) listscroll_tmo_link_pane_ParamLimits

0x8147,	// (0x000607a6) listscroll_tmo_link_pane

0x8187,	// (0x000607e6) popup_tmo_note_window_g1_ParamLimits

0x8187,	// (0x000607e6) popup_tmo_note_window_g1

0x8194,	// (0x000607f3) tmo_note_info_pane_ParamLimits

0x8194,	// (0x000607f3) tmo_note_info_pane

0xeb22,	// (0x00067181) list_tmo_note_info_pane_g1_ParamLimits

0xeb22,	// (0x00067181) list_tmo_note_info_pane_g1

0x81c5,	// (0x00060824) list_tmo_note_info_pane_g2_ParamLimits

0x81c5,	// (0x00060824) list_tmo_note_info_pane_g2

0x0001,

0xfeaf,	// (0x0006850e) list_tmo_note_info_pane_g_ParamLimits

0xfeaf,	// (0x0006850e) list_tmo_note_info_pane_g

0x81e1,	// (0x00060840) list_tmo_note_info_text_pane_ParamLimits

0x81e1,	// (0x00060840) list_tmo_note_info_text_pane

0x8266,	// (0x000608c5) list_tmo_link_pane

0x8273,	// (0x000608d2) scroll_pane_cp20

0x8280,	// (0x000608df) list_single_tmo_link_pane_ParamLimits

0x8280,	// (0x000608df) list_single_tmo_link_pane

0x8290,	// (0x000608ef) list_single_tmo_link_pane_t1

0x829e,	// (0x000608fd) list_tmo_note_info_text_pane_t1_ParamLimits

0x829e,	// (0x000608fd) list_tmo_note_info_text_pane_t1

0xa7e1,	// (0x00062e40) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa7e1,	// (0x00062e40) aid_size_touch_scroll_bar_cp01

0xa710,	// (0x00062d6f) aid_size_touch_slider_marker

0x9d3c,	// (0x0006239b) popup_settings_window_ParamLimits

0x9d3c,	// (0x0006239b) popup_settings_window

0xe065,	// (0x000666c4) popup_candi_list_indi_window

0x28af,	// (0x0005af0e) aid_touch_navi_pane_ParamLimits

0x1280,	// (0x000598df) rs_clock_indi_pane

0x1289,	// (0x000598e8) sctrl_sk_bottom_pane_ParamLimits

0x129a,	// (0x000598f9) sctrl_sk_top_pane_ParamLimits

0x139f,	// (0x000599fe) popup_fep_tooltip_window

0xe868,	// (0x00066ec7) aid_size_cell_widget_grid_ParamLimits

0xe887,	// (0x00066ee6) cell_ai5_widget_pane_g1_ParamLimits

0xe887,	// (0x00066ee6) cell_ai5_widget_pane_g1

0xe8ea,	// (0x00066f49) cell_ai5_widget_pane_g6_ParamLimits

0xe8f6,	// (0x00066f55) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe23,	// (0x00068482) cell_ai5_widget_pane_g_ParamLimits

0xfe23,	// (0x00068482) cell_ai5_widget_pane_g

0xe9ac,	// (0x0006700b) cell_ai5_widget_pane_t10_ParamLimits

0xe9ac,	// (0x0006700b) cell_ai5_widget_pane_t10

0xe9ef,	// (0x0006704e) grid_ai5_widget_pane_ParamLimits

0xea1b,	// (0x0006707a) cell_contacts_ai5_widget_pane_ParamLimits

0xea1b,	// (0x0006707a) cell_contacts_ai5_widget_pane

0x80d9,	// (0x00060738) popup_discreet_window_t3_ParamLimits

0x80d9,	// (0x00060738) popup_discreet_window_t3

0xbeab,	// (0x0006450a) popup_fshwr2_char_preview_window_ParamLimits

0xbeab,	// (0x0006450a) popup_fshwr2_char_preview_window

0xeb39,	// (0x00067198) tmo_note_info_pane_t1

0xeb4e,	// (0x000671ad) tmo_note_info_pane_t2

0xeb67,	// (0x000671c6) tmo_note_info_pane_t3

0x8242,	// (0x000608a1) tmo_note_info_pane_t4

0x8254,	// (0x000608b3) tmo_note_info_pane_t5

0x0004,

0xfeb4,	// (0x00068513) tmo_note_info_pane_t

0x8266,	// (0x000608c5) list_tmo_link_pane_ParamLimits

0x8273,	// (0x000608d2) scroll_pane_cp20_ParamLimits

0xee68,	// (0x000674c7) bg_popup_fep_char_preview_window_cp01

0x82b7,	// (0x00060916) popup_fshwr2_char_preview_window_t1

0x82c5,	// (0x00060924) popup_candi_list_indi_window_g1

0x82ce,	// (0x0006092d) bg_cell_contacts_ai5_widget_pane

0x82da,	// (0x00060939) cell_contacts_ai5_widget_pane_g1

0x82ef,	// (0x0006094e) cell_contacts_ai5_widget_pane_g2

0x82fb,	// (0x0006095a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebf,	// (0x0006851e) cell_contacts_ai5_widget_pane_g

0x8307,	// (0x00060966) cell_contacts_ai5_widget_pane_t1

0x915b,	// (0x000617ba) highlight_cell_shortcut_ai5_widget_pane_cp01

0x837e,	// (0x000609dd) settings_container_pane

0x250a,	// (0x0005ab69) listscroll_set_pane_copy1

0x4c71,	// (0x0005d2d0) scroll_pane_cp121_copy1

0x838a,	// (0x000609e9) set_content_pane_copy1

0x8392,	// (0x000609f1) aid_height_set_list_copy1_ParamLimits

0x8392,	// (0x000609f1) aid_height_set_list_copy1

0x431f,	// (0x0005c97e) aid_size_parent_copy1_ParamLimits

0x431f,	// (0x0005c97e) aid_size_parent_copy1

0x839e,	// (0x000609fd) button_value_adjust_pane_cp6_copy1_ParamLimits

0x839e,	// (0x000609fd) button_value_adjust_pane_cp6_copy1

0x2831,	// (0x0005ae90) list_highlight_pane_cp2_copy1_ParamLimits

0x2831,	// (0x0005ae90) list_highlight_pane_cp2_copy1

0x83b2,	// (0x00060a11) list_set_pane_copy1_ParamLimits

0x83b2,	// (0x00060a11) list_set_pane_copy1

0x8319,	// (0x00060978) main_pane_set_t1_copy1_ParamLimits

0x8319,	// (0x00060978) main_pane_set_t1_copy1

0x8353,	// (0x000609b2) main_pane_set_t2_copy1_ParamLimits

0x8353,	// (0x000609b2) main_pane_set_t2_copy1

0x8473,	// (0x00060ad2) main_pane_set_t3_copy1

0x8481,	// (0x00060ae0) main_pane_set_t4_copy1

0x8372,	// (0x000609d1) set_content_pane_g1_copy1_ParamLimits

0x8372,	// (0x000609d1) set_content_pane_g1_copy1

0x848f,	// (0x00060aee) setting_code_pane_copy1

0x8497,	// (0x00060af6) setting_slider_graphic_pane_copy1

0x8497,	// (0x00060af6) setting_slider_pane_copy1

0x849f,	// (0x00060afe) setting_text_pane_copy1

0x849f,	// (0x00060afe) setting_volume_pane_copy1

0x848f,	// (0x00060aee) settings_code_pane_cp2_copy1

0x84a7,	// (0x00060b06) settings_code_pane_cp_copy1_ParamLimits

0x84a7,	// (0x00060b06) settings_code_pane_cp_copy1

0x1c6e,	// (0x0005a2cd) volume_set_pane_copy1

0x84bb,	// (0x00060b1a) volume_set_pane_g10_copy1

0x84c7,	// (0x00060b26) volume_set_pane_g1_copy1

0x84d1,	// (0x00060b30) volume_set_pane_g2_copy1

0x84db,	// (0x00060b3a) volume_set_pane_g3_copy1

0x84e5,	// (0x00060b44) volume_set_pane_g4_copy1

0x84ef,	// (0x00060b4e) volume_set_pane_g5_copy1

0x84f9,	// (0x00060b58) volume_set_pane_g6_copy1

0x8503,	// (0x00060b62) volume_set_pane_g7_copy1

0x850d,	// (0x00060b6c) volume_set_pane_g8_copy1

0x8517,	// (0x00060b76) volume_set_pane_g9_copy1

0x8a7d,	// (0x000610dc) bg_set_opt_pane_cp_copy1_ParamLimits

0x8a7d,	// (0x000610dc) bg_set_opt_pane_cp_copy1

0x1c7a,	// (0x0005a2d9) setting_slider_pane_t1_copy1_ParamLimits

0x1c7a,	// (0x0005a2d9) setting_slider_pane_t1_copy1

0x1c99,	// (0x0005a2f8) setting_slider_pane_t2_copy1_ParamLimits

0x1c99,	// (0x0005a2f8) setting_slider_pane_t2_copy1

0x1cb3,	// (0x0005a312) setting_slider_pane_t3_copy1_ParamLimits

0x1cb3,	// (0x0005a312) setting_slider_pane_t3_copy1

0x1ccb,	// (0x0005a32a) slider_set_pane_copy1_ParamLimits

0x1ccb,	// (0x0005a32a) slider_set_pane_copy1

0x91b3,	// (0x00061812) set_opt_bg_pane_g1_copy2

0x91bb,	// (0x0006181a) set_opt_bg_pane_g2_copy2

0x8523,	// (0x00060b82) set_opt_bg_pane_g3_copy2

0x91cb,	// (0x0006182a) set_opt_bg_pane_g4_copy2

0x91d3,	// (0x00061832) set_opt_bg_pane_g5_copy2

0x91db,	// (0x0006183a) set_opt_bg_pane_g6_copy2

0x852d,	// (0x00060b8c) set_opt_bg_pane_g7_copy2

0x8537,	// (0x00060b96) set_opt_bg_pane_g8_copy2

0x8541,	// (0x00060ba0) set_opt_bg_pane_g9_copy2

0x1ce1,	// (0x0005a340) aid_size_touch_slider_mark_copy1_ParamLimits

0x1ce1,	// (0x0005a340) aid_size_touch_slider_mark_copy1

0x854b,	// (0x00060baa) slider_set_pane_g1_copy1

0x1cf5,	// (0x0005a354) slider_set_pane_g2_copy1

0x0b04,	// (0x00059163) slider_set_pane_g3_copy1_ParamLimits

0x0b04,	// (0x00059163) slider_set_pane_g3_copy1

0x0b18,	// (0x00059177) slider_set_pane_g4_copy1_ParamLimits

0x0b18,	// (0x00059177) slider_set_pane_g4_copy1

0x0b30,	// (0x0005918f) slider_set_pane_g5_copy1_ParamLimits

0x0b30,	// (0x0005918f) slider_set_pane_g5_copy1

0x0b04,	// (0x00059163) slider_set_pane_g6_copy1_ParamLimits

0x0b04,	// (0x00059163) slider_set_pane_g6_copy1

0x1cfd,	// (0x0005a35c) slider_set_pane_g7_copy1_ParamLimits

0x1cfd,	// (0x0005a35c) slider_set_pane_g7_copy1

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp2_copy1

0x8554,	// (0x00060bb3) setting_slider_graphic_pane_g1_copy1

0x855d,	// (0x00060bbc) setting_slider_graphic_pane_t1_copy1

0x856d,	// (0x00060bcc) setting_slider_graphic_pane_t2_copy1

0x857d,	// (0x00060bdc) slider_set_pane_cp_copy1

0x858d,	// (0x00060bec) input_focus_pane_cp1_copy1

0x8596,	// (0x00060bf5) list_set_text_pane_copy1

0x859e,	// (0x00060bfd) setting_text_pane_g1_copy1

0xdad9,	// (0x00066138) set_text_pane_t1_copy1

0x858d,	// (0x00060bec) input_focus_pane_cp2_copy1

0x859e,	// (0x00060bfd) setting_code_pane_g1_copy1

0x85a7,	// (0x00060c06) setting_code_pane_t1_copy1

0x4a76,	// (0x0005d0d5) list_set_graphic_pane_copy1

0x8a2f,	// (0x0006108e) bg_set_opt_pane_cp4_copy1

0x2205,	// (0x0005a864) list_set_graphic_pane_g1_copy1_ParamLimits

0x2205,	// (0x0005a864) list_set_graphic_pane_g1_copy1

0x85b5,	// (0x00060c14) list_set_graphic_pane_g2_copy1

0x221d,	// (0x0005a87c) list_set_graphic_pane_t1_copy1_ParamLimits

0x221d,	// (0x0005a87c) list_set_graphic_pane_t1_copy1

0x5540,	// (0x0005db9f) rs_clock_indi_pane_g1

0x85bd,	// (0x00060c1c) rs_clock_indi_pane_t1

0x85cb,	// (0x00060c2a) rs_indi_pane

0x85d3,	// (0x00060c32) rs_indi_pane_g1

0x85dc,	// (0x00060c3b) rs_indi_pane_g2

0x85e5,	// (0x00060c44) rs_indi_pane_g3

0x0002,

0xfec6,	// (0x00068525) rs_indi_pane_g

0x250a,	// (0x0005ab69) bg_popup_preview_window_pane_cp03

0x85ee,	// (0x00060c4d) popup_fep_tooltip_window_t1

0x6205,	// (0x0005e864) popup_note2_window_g2_ParamLimits

0x6205,	// (0x0005e864) popup_note2_window_g2

0x0001,

0xfc53,	// (0x000682b2) popup_note2_window_g_ParamLimits

0xfc53,	// (0x000682b2) popup_note2_window_g

0x670d,	// (0x0005ed6c) bg_popup_sub_pane_cp11_ParamLimits

0x671a,	// (0x0005ed79) cell_ai3_links_pane_g1_ParamLimits

0x6731,	// (0x0005ed90) cell_ai3_links_pane_t1

0xdad9,	// (0x00066138) set_text_pane_t1_copy1_ParamLimits

0xab3a,	// (0x00063199) cell_graphic_popup_pane_cp2_ParamLimits

0xab3a,	// (0x00063199) cell_graphic_popup_pane_cp2

0x85fc,	// (0x00060c5b) cell_graphic_popup_pane_g1_cp2

0x8eb0,	// (0x0006150f) cell_graphic_popup_pane_g2_cp2

0x8604,	// (0x00060c63) cell_graphic_popup_pane_g3_cp2

0x860c,	// (0x00060c6b) cell_graphic_popup_pane_t2_cp2

0x8ec1,	// (0x00061520) grid_highlight_pane_cp3_cp2

0xdeae,	// (0x0006650d) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x915b,	// (0x000617ba) main_tmo_pane_ParamLimits

0xd150,	// (0x000657af) popup_tmo_big_image_note_window

0xe876,	// (0x00066ed5) cell_ai5_widget_list_pane

0xe87e,	// (0x00066edd) cell_ai5_widget_lrg_icon_pane

0xeb39,	// (0x00067198) tmo_note_info_pane_t1_ParamLimits

0xeb4e,	// (0x000671ad) tmo_note_info_pane_t2_ParamLimits

0xeb67,	// (0x000671c6) tmo_note_info_pane_t3_ParamLimits

0x8242,	// (0x000608a1) tmo_note_info_pane_t4_ParamLimits

0x8254,	// (0x000608b3) tmo_note_info_pane_t5_ParamLimits

0xfeb4,	// (0x00068513) tmo_note_info_pane_t_ParamLimits

0x837e,	// (0x000609dd) settings_container_pane_ParamLimits

0x8585,	// (0x00060be4) indicator_popup_pane_cp5

0x8585,	// (0x00060be4) indicator_popup_pane_cp6

0x4a76,	// (0x0005d0d5) list_set_graphic_pane_copy1_ParamLimits

0x8a1b,	// (0x0006107a) bg_popup_window_pane_cp23

0x861a,	// (0x00060c79) popup_tmo_big_image_note_window_g1

0x8626,	// (0x00060c85) popup_tmo_big_image_note_window_t1

0x8636,	// (0x00060c95) popup_tmo_big_image_note_window_t2

0x8646,	// (0x00060ca5) popup_tmo_big_image_note_window_t3

0x0002,

0xfecd,	// (0x0006852c) popup_tmo_big_image_note_window_t

0x5540,	// (0x0005db9f) cell_ai5_widget_lrg_icon_pane_g1

0xeb7c,	// (0x000671db) cell_ai5_widget_lrg_icon_pane_t1

0xeb8a,	// (0x000671e9) cell_ai5_widget_list_row_pane_ParamLimits

0xeb8a,	// (0x000671e9) cell_ai5_widget_list_row_pane

0xeba2,	// (0x00067201) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeba2,	// (0x00067201) cell_ai5_widget_list_row_pane_g1

0xebaf,	// (0x0006720e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xebaf,	// (0x0006720e) cell_ai5_widget_list_row_pane_t1

0xebda,	// (0x00067239) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xebda,	// (0x00067239) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed4,	// (0x00068533) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed4,	// (0x00068533) cell_ai5_widget_list_row_pane_t

0xee68,	// (0x000674c7) main_fep_vtchi_ss_pane

0x8704,	// (0x00060d63) popup_fep_char_pre_window

0x870c,	// (0x00060d6b) popup_fep_ituss_window

0xec2c,	// (0x0006728b) popup_fep_vkbss_window

0x2831,	// (0x0005ae90) grid_vkbss_keypad_pane_ParamLimits

0x2831,	// (0x0005ae90) grid_vkbss_keypad_pane

0x877a,	// (0x00060dd9) ituss_keypad_pane

0x1d1f,	// (0x0005a37e) aid_vkbss_key_offset_ParamLimits

0x1d1f,	// (0x0005a37e) aid_vkbss_key_offset

0xbfae,	// (0x0006460d) cell_vkbss_key_pane_ParamLimits

0xbfae,	// (0x0006460d) cell_vkbss_key_pane

0x8786,	// (0x00060de5) bg_cell_vkbss_key_g1_ParamLimits

0x8786,	// (0x00060de5) bg_cell_vkbss_key_g1

0xec3b,	// (0x0006729a) cell_vkbss_key_3p_pane_ParamLimits

0xec3b,	// (0x0006729a) cell_vkbss_key_3p_pane

0xec71,	// (0x000672d0) cell_vkbss_key_g1_ParamLimits

0xec71,	// (0x000672d0) cell_vkbss_key_g1

0xeca7,	// (0x00067306) cell_vkbss_key_t1_ParamLimits

0xeca7,	// (0x00067306) cell_vkbss_key_t1

0x1d65,	// (0x0005a3c4) cell_ituss_key_pane_ParamLimits

0x1d65,	// (0x0005a3c4) cell_ituss_key_pane

0x885a,	// (0x00060eb9) bg_cell_ituss_key_g1_ParamLimits

0x885a,	// (0x00060eb9) bg_cell_ituss_key_g1

0x8866,	// (0x00060ec5) cell_ituss_key_pane_g1_ParamLimits

0x8866,	// (0x00060ec5) cell_ituss_key_pane_g1

0x1d76,	// (0x0005a3d5) cell_ituss_key_pane_g2_ParamLimits

0x1d76,	// (0x0005a3d5) cell_ituss_key_pane_g2

0x0005,

0xfedb,	// (0x0006853a) cell_ituss_key_pane_g_ParamLimits

0xfedb,	// (0x0006853a) cell_ituss_key_pane_g

0x1dfa,	// (0x0005a459) cell_ituss_key_t1_ParamLimits

0x1dfa,	// (0x0005a459) cell_ituss_key_t1

0x1e34,	// (0x0005a493) cell_ituss_key_t2_ParamLimits

0x1e34,	// (0x0005a493) cell_ituss_key_t2

0x1e65,	// (0x0005a4c4) cell_ituss_key_t3_ParamLimits

0x1e65,	// (0x0005a4c4) cell_ituss_key_t3

0x1e34,	// (0x0005a493) cell_ituss_key_t4_ParamLimits

0x1e34,	// (0x0005a493) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x00068547) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x00068547) cell_ituss_key_t

0xed03,	// (0x00067362) cell_vkbss_key_3p_pane_g1

0xed0b,	// (0x0006736a) cell_vkbss_key_3p_pane_g2

0xed13,	// (0x00067372) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00068552) cell_vkbss_key_3p_pane_g

0x250a,	// (0x0005ab69) bg_popup_fep_char_preview_window_cp02

0x88a4,	// (0x00060f03) popup_fep_char_pre_window_t1

0xe855,	// (0x00066eb4) main_ai5_sk_pane

0x82ce,	// (0x0006092d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x82da,	// (0x00060939) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x82ef,	// (0x0006094e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x82fb,	// (0x0006095a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebf,	// (0x0006851e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8307,	// (0x00060966) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x915b,	// (0x000617ba) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xed1b,	// (0x0006737a) main_ai5_sk_pane_g1

0x321d,	// (0x0005b87c) popup_query_code_window_g1

0xec1d,	// (0x0006727c) popup_fep_vkb_icf_pane

0x8751,	// (0x00060db0) popup_fep_vtchi_icf_pane

0x2831,	// (0x0005ae90) bg_icf_pane

0x2831,	// (0x0005ae90) list_vkb_icf_pane

0x88bb,	// (0x00060f1a) bg_icf_pane_cp01

0x88ce,	// (0x00060f2d) vtchi_icf_list_pane

0xed70,	// (0x000673cf) list_vkb_icf_pane_t1_ParamLimits

0xed70,	// (0x000673cf) list_vkb_icf_pane_t1

0x8952,	// (0x00060fb1) vtchi_icf_list_pane_t1_ParamLimits

0x8952,	// (0x00060fb1) vtchi_icf_list_pane_t1

0x870c,	// (0x00060d6b) popup_fep_ituss_window_ParamLimits

0x8751,	// (0x00060db0) popup_fep_vtchi_icf_pane_ParamLimits

0x877a,	// (0x00060dd9) ituss_keypad_pane_ParamLimits

0x1d13,	// (0x0005a372) ituss_sks_pane

0x2831,	// (0x0005ae90) bg_icf_pane_ParamLimits

0xec02,	// (0x00067261) icf_edit_indi_pane_ParamLimits

0xec02,	// (0x00067261) icf_edit_indi_pane

0x2831,	// (0x0005ae90) list_vkb_icf_pane_ParamLimits

0x88bb,	// (0x00060f1a) bg_icf_pane_cp01_ParamLimits

0x86f7,	// (0x00060d56) icf_edit_indi_pane_cp01_ParamLimits

0x86f7,	// (0x00060d56) icf_edit_indi_pane_cp01

0x88d6,	// (0x00060f35) vtchi_query_pane

0x7a4e,	// (0x000600ad) icf_edit_indi_pane_g1_ParamLimits

0x7a4e,	// (0x000600ad) icf_edit_indi_pane_g1

0xed87,	// (0x000673e6) icf_edit_indi_pane_g2_ParamLimits

0xed87,	// (0x000673e6) icf_edit_indi_pane_g2

0x0001,

0xff1e,	// (0x0006857d) icf_edit_indi_pane_g_ParamLimits

0xff1e,	// (0x0006857d) icf_edit_indi_pane_g

0xed9b,	// (0x000673fa) icf_edit_indi_pane_t1

0x896b,	// (0x00060fca) bg_input_focus_pane_cp042

0x9094,	// (0x000616f3) vtchi_button_pane

0x8974,	// (0x00060fd3) vtchi_query_pane_t1

0x8982,	// (0x00060fe1) vtchi_query_pane_t2

0x8990,	// (0x00060fef) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x0006856c) vtchi_query_pane_t

0xee68,	// (0x000674c7) bg_button_pane_cp13

0x899e,	// (0x00060ffd) vtchi_button_pane_g1

0x1ea8,	// (0x0005a507) ituss_sks_pane_g1

0x1eb3,	// (0x0005a512) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00068573) ituss_sks_pane_g

0x89a6,	// (0x00061005) ituss_sks_pane_t1

0x89b4,	// (0x00061013) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x00068578) ituss_sks_pane_t

0x5014,	// (0x0005d673) indicator_nsta_pane_cp_g1

0x501d,	// (0x0005d67c) indicator_nsta_pane_cp_g2

0x5025,	// (0x0005d684) indicator_nsta_pane_cp_g3

0x502d,	// (0x0005d68c) indicator_nsta_pane_cp_g4

0x501d,	// (0x0005d67c) indicator_nsta_pane_cp_g5

0x5025,	// (0x0005d684) indicator_nsta_pane_cp_g6

0x0005,

0xfa91,	// (0x000680f0) indicator_nsta_pane_cp_g

0xe667,	// (0x00066cc6) cell_graphic2_pane_t2_ParamLimits

0xe667,	// (0x00066cc6) cell_graphic2_pane_t2

0x0001,

0xfdaa,	// (0x00068409) cell_graphic2_pane_t_ParamLimits

0xfdaa,	// (0x00068409) cell_graphic2_pane_t

0xe69f,	// (0x00066cfe) cell_graphic2_control_pane_t1

0xaa2f,	// (0x0006308e) signal_pane_g3_ParamLimits

0xaa2f,	// (0x0006308e) signal_pane_g3

0xaa43,	// (0x000630a2) signal_pane_g4_ParamLimits

0xaa43,	// (0x000630a2) signal_pane_g4

0xebec,	// (0x0006724b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xebec,	// (0x0006724b) cell_ai5_widget_list_row_pane_t3

0x887a,	// (0x00060ed9) cell_ituss_key_pane_t1_ParamLimits

0x887a,	// (0x00060ed9) cell_ituss_key_pane_t1

0x2e84,	// (0x0005b4e3) form_field_data_wide_pane_vc_t2_ParamLimits

0x2e84,	// (0x0005b4e3) form_field_data_wide_pane_vc_t2

0x2e98,	// (0x0005b4f7) form_field_data_wide_pane_vc_t3_ParamLimits

0x2e98,	// (0x0005b4f7) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x00067e43) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x00067e43) form_field_data_wide_pane_vc_t

0x4cb1,	// (0x0005d310) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4cb1,	// (0x0005d310) form_field_slider_wide_pane_vc_t3

0x4d87,	// (0x0005d3e6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4d87,	// (0x0005d3e6) form_field_popup_wide_pane_vc_t2

0x4d9e,	// (0x0005d3fd) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4d9e,	// (0x0005d3fd) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa80,	// (0x000680df) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x000680df) form_field_popup_wide_pane_vc_t

0xbe11,	// (0x00064470) aid_fshwr2_btn_pane_ParamLimits

0xbe25,	// (0x00064484) aid_fshwr2_syb_pane_ParamLimits

0xbe39,	// (0x00064498) aid_fshwr2_txt_pane_ParamLimits

0x1327,	// (0x00059986) fshwr2_bg_pane_ParamLimits

0xbe49,	// (0x000644a8) fshwr2_func_candi_pane_ParamLimits

0xbe6b,	// (0x000644ca) fshwr2_hwr_syb_pane_ParamLimits

0xbe8f,	// (0x000644ee) fshwr2_icf_pane_ParamLimits

0xe3a8,	// (0x00066a07) list_double_graphic_pane_vc_g4_ParamLimits

0xe3a8,	// (0x00066a07) list_double_graphic_pane_vc_g4

0x1d96,	// (0x0005a3f5) cell_ituss_key_pane_g3_ParamLimits

0x1d96,	// (0x0005a3f5) cell_ituss_key_pane_g3

0x1e96,	// (0x0005a4f5) cell_ituss_key_t5_ParamLimits

0x1e96,	// (0x0005a4f5) cell_ituss_key_t5

0xec2c,	// (0x0006728b) popup_fep_vkbss_window_ParamLimits

0xe85f,	// (0x00066ebe) aid_cell_ai5_quarter

0xed9b,	// (0x000673fa) icf_edit_indi_pane_t1_ParamLimits

0x8c66,	// (0x000612c5) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8c66,	// (0x000612c5) aid_tch_indicator_popup_pane_cp2

0x8c79,	// (0x000612d8) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8c79,	// (0x000612d8) aid_tch_query_popup_data_pane_cp2

0x31c5,	// (0x0005b824) aid_tch_query_popup_pane_ParamLimits

0x31c5,	// (0x0005b824) aid_tch_query_popup_pane

0x31c5,	// (0x0005b824) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x31c5,	// (0x0005b824) aid_tch_query_popup_data_pane_cp1

0x2831,	// (0x0005ae90) cell_fshwr2_syb_bg_pane_ParamLimits

0xbf84,	// (0x000645e3) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xbf98,	// (0x000645f7) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xec1d,	// (0x0006727c) popup_fep_vkb_icf_pane_ParamLimits

0xbda5,	// (0x00064404) bg_popup_fep_char_preview_window_g10

0xe902,	// (0x00066f61) cell_ai5_widget_pane_g11_ParamLimits

0xe902,	// (0x00066f61) cell_ai5_widget_pane_g11

0x7cf7,	// (0x00060356) cell_ai5_widget_pane_g12_ParamLimits

0x7cf7,	// (0x00060356) cell_ai5_widget_pane_g12

0xe90e,	// (0x00066f6d) cell_ai5_widget_pane_g13_ParamLimits

0xe90e,	// (0x00066f6d) cell_ai5_widget_pane_g13

0xe9cb,	// (0x0006702a) cell_ai5_widget_pane_t11_ParamLimits

0xe9cb,	// (0x0006702a) cell_ai5_widget_pane_t11

0xe9dd,	// (0x0006703c) cell_ai5_widget_pane_t12_ParamLimits

0xe9dd,	// (0x0006703c) cell_ai5_widget_pane_t12

0x1da2,	// (0x0005a401) cell_ituss_key_pane_g4_ParamLimits

0x1da2,	// (0x0005a401) cell_ituss_key_pane_g4

0x1dbe,	// (0x0005a41d) cell_ituss_key_pane_g5_ParamLimits

0x1dbe,	// (0x0005a41d) cell_ituss_key_pane_g5

0x1dda,	// (0x0005a439) cell_ituss_key_pane_g6_ParamLimits

0x1dda,	// (0x0005a439) cell_ituss_key_pane_g6

0x2d7f,	// (0x0005b3de) bg_icf_pane_g1

0xed24,	// (0x00067383) bg_icf_pane_g2

0xed2e,	// (0x0006738d) bg_icf_pane_g3

0xed36,	// (0x00067395) bg_icf_pane_g4

0xed40,	// (0x0006739f) bg_icf_pane_g5

0xed4a,	// (0x000673a9) bg_icf_pane_g6

0xed54,	// (0x000673b3) bg_icf_pane_g7

0xed5c,	// (0x000673bb) bg_icf_pane_g8

0xed66,	// (0x000673c5) bg_icf_pane_g9

0x0008,

0xfefa,	// (0x00068559) bg_icf_pane_g

0x8767,	// (0x00060dc6) popup_hyb_candi_window_ParamLimits

0x8767,	// (0x00060dc6) popup_hyb_candi_window

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp01_ParamLimits

0x2df3,	// (0x0005b452) bg_popup_sub_pane_cp01

0x89ef,	// (0x0006104e) entry_hyb_candi_pane_ParamLimits

0x89ef,	// (0x0006104e) entry_hyb_candi_pane

0x89fe,	// (0x0006105d) grid_hyb_candi_pane_ParamLimits

0x89fe,	// (0x0006105d) grid_hyb_candi_pane

0x8cff,	// (0x0006135e) grid_hyb_phrase_pane_ParamLimits

0x8cff,	// (0x0006135e) grid_hyb_phrase_pane

0x8d0e,	// (0x0006136d) cell_hyb_candi_pane_ParamLimits

0x8d0e,	// (0x0006136d) cell_hyb_candi_pane

0x909d,	// (0x000616fc) cell_hyb_candi_scroll_pane

0x1efe,	// (0x0005a55d) cell_hyb_candi_pane_g1

0x8d2a,	// (0x00061389) cell_hyb_candi_pane_t1

0x8d38,	// (0x00061397) cell_hyb_phrase_pane

0x1efe,	// (0x0005a55d) cell_hyb_phrase_pane_g1

0x8d41,	// (0x000613a0) cell_hyb_phrase_pane_t1

0x8d4f,	// (0x000613ae) entry_hyb_candi_pane_t1

0x250a,	// (0x0005ab69) input_focus_pane_cp06

0x8d5d,	// (0x000613bc) cell_hyb_candi_scroll_pane_g1

0x8d65,	// (0x000613c4) cell_hyb_candi_scroll_pane_g1_aid

0x8d6d,	// (0x000613cc) cell_hyb_candi_scroll_pane_g2

0x8d75,	// (0x000613d4) cell_hyb_candi_scroll_pane_g2_aid

0x8d7d,	// (0x000613dc) cell_hyb_candi_scroll_pane_g3

0x8d85,	// (0x000613e4) cell_hyb_candi_scroll_pane_g4
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Large

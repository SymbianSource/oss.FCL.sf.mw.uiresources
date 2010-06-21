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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004a600 };

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
0x74e7,	// (0x00051ae7) Screen

0x74fb,	// (0x00051afb) application_window_ParamLimits

0x74fb,	// (0x00051afb) application_window

0x7515,	// (0x00051b15) screen_g1

0x47fc,	// (0x0004edfc) area_bottom_pane_ParamLimits

0x47fc,	// (0x0004edfc) area_bottom_pane

0x48bc,	// (0x0004eebc) area_top_pane_ParamLimits

0x48bc,	// (0x0004eebc) area_top_pane

0x495a,	// (0x0004ef5a) main_pane_ParamLimits

0x495a,	// (0x0004ef5a) main_pane

0x751f,	// (0x00051b1f) misc_graphics

0x982f,	// (0x00053e2f) battery_pane_ParamLimits

0x982f,	// (0x00053e2f) battery_pane

0xa503,	// (0x00054b03) bg_status_flat_pane_g8

0xa50b,	// (0x00054b0b) bg_status_flat_pane_g9

0x98f1,	// (0x00053ef1) context_pane_ParamLimits

0x98f1,	// (0x00053ef1) context_pane

0x9a07,	// (0x00054007) navi_pane_ParamLimits

0x9a07,	// (0x00054007) navi_pane

0x9a8b,	// (0x0005408b) signal_pane_ParamLimits

0x9a8b,	// (0x0005408b) signal_pane

0x0008,

0xf87e,	// (0x00059e7e) bg_status_flat_pane_g

0x9af8,	// (0x000540f8) status_pane_g1_ParamLimits

0x9af8,	// (0x000540f8) status_pane_g1

0x9b0c,	// (0x0005410c) status_pane_g2_ParamLimits

0x9b0c,	// (0x0005410c) status_pane_g2

0x9b18,	// (0x00054118) status_pane_g3_ParamLimits

0x9b18,	// (0x00054118) status_pane_g3

0x0004,

0xf7a5,	// (0x00059da5) status_pane_g_ParamLimits

0xf7a5,	// (0x00059da5) status_pane_g

0x9b4c,	// (0x0005414c) title_pane_ParamLimits

0x9b4c,	// (0x0005414c) title_pane

0x9b89,	// (0x00054189) uni_indicator_pane_ParamLimits

0x9b89,	// (0x00054189) uni_indicator_pane

0x975f,	// (0x00053d5f) bg_list_pane_ParamLimits

0x975f,	// (0x00053d5f) bg_list_pane

0x768f,	// (0x00051c8f) find_pane

0x977f,	// (0x00053d7f) listscroll_app_pane_ParamLimits

0x977f,	// (0x00053d7f) listscroll_app_pane

0x978b,	// (0x00053d8b) listscroll_form_pane

0x5989,	// (0x0004ff89) listscroll_gen_pane_ParamLimits

0x5989,	// (0x0004ff89) listscroll_gen_pane

0x599d,	// (0x0004ff9d) listscroll_set_pane

0x899b,	// (0x00052f9b) main_idle_act_pane

0x945b,	// (0x00053a5b) main_idle_trad_pane

0x945b,	// (0x00053a5b) main_list_empty_pane

0x977f,	// (0x00053d7f) main_midp_pane

0x97a5,	// (0x00053da5) main_pane_g1_ParamLimits

0x97a5,	// (0x00053da5) main_pane_g1

0x59b3,	// (0x0004ffb3) popup_ai_message_window_ParamLimits

0x59b3,	// (0x0004ffb3) popup_ai_message_window

0x5a61,	// (0x00050061) popup_fep_china_uni_window_ParamLimits

0x5a61,	// (0x00050061) popup_fep_china_uni_window

0x5abd,	// (0x000500bd) popup_fep_japan_candidate_window_ParamLimits

0x5abd,	// (0x000500bd) popup_fep_japan_candidate_window

0x5add,	// (0x000500dd) popup_fep_japan_predictive_window_ParamLimits

0x5add,	// (0x000500dd) popup_fep_japan_predictive_window

0x5b0d,	// (0x0005010d) popup_find_window

0x5b1a,	// (0x0005011a) popup_grid_graphic_window_ParamLimits

0x5b1a,	// (0x0005011a) popup_grid_graphic_window

0x5b44,	// (0x00050144) popup_large_graphic_colour_window

0x5b6a,	// (0x0005016a) popup_menu_window_ParamLimits

0x5b6a,	// (0x0005016a) popup_menu_window

0x5d22,	// (0x00050322) popup_note_image_window

0x5d0e,	// (0x0005030e) popup_note_wait_window_ParamLimits

0x5d0e,	// (0x0005030e) popup_note_wait_window

0x5d0e,	// (0x0005030e) popup_note_window_ParamLimits

0x5d0e,	// (0x0005030e) popup_note_window

0x5d78,	// (0x00050378) popup_query_code_window_ParamLimits

0x5d78,	// (0x00050378) popup_query_code_window

0x5d8c,	// (0x0005038c) popup_query_data_code_window_ParamLimits

0x5d8c,	// (0x0005038c) popup_query_data_code_window

0x5da9,	// (0x000503a9) popup_query_data_window_ParamLimits

0x5da9,	// (0x000503a9) popup_query_data_window

0x5dc5,	// (0x000503c5) popup_query_sat_info_window_ParamLimits

0x5dc5,	// (0x000503c5) popup_query_sat_info_window

0x5dfe,	// (0x000503fe) popup_snote_single_graphic_window_ParamLimits

0x5dfe,	// (0x000503fe) popup_snote_single_graphic_window

0x5dfe,	// (0x000503fe) popup_snote_single_text_window_ParamLimits

0x5dfe,	// (0x000503fe) popup_snote_single_text_window

0x5e13,	// (0x00050413) popup_sub_window_general

0x5f43,	// (0x00050543) popup_window_general_ParamLimits

0x5f43,	// (0x00050543) popup_window_general

0x97b3,	// (0x00053db3) power_save_pane

0x581b,	// (0x0004fe1b) control_pane_g1_ParamLimits

0x581b,	// (0x0004fe1b) control_pane_g1

0x5842,	// (0x0004fe42) control_pane_g2_ParamLimits

0x5842,	// (0x0004fe42) control_pane_g2

0x9722,	// (0x00053d22) control_pane_g3_ParamLimits

0x9722,	// (0x00053d22) control_pane_g3

0x0007,

0xf78d,	// (0x00059d8d) control_pane_g_ParamLimits

0xf78d,	// (0x00059d8d) control_pane_g

0x588c,	// (0x0004fe8c) control_pane_t1_ParamLimits

0x588c,	// (0x0004fe8c) control_pane_t1

0x58e0,	// (0x0004fee0) control_pane_t2_ParamLimits

0x58e0,	// (0x0004fee0) control_pane_t2

0x0002,

0xf79e,	// (0x00059d9e) control_pane_t_ParamLimits

0xf79e,	// (0x00059d9e) control_pane_t

0x9647,	// (0x00053c47) navi_navi_volume_pane_cp1

0x964f,	// (0x00053c4f) status_small_icon_pane

0x9657,	// (0x00053c57) status_small_pane_g1_ParamLimits

0x9657,	// (0x00053c57) status_small_pane_g1

0x968b,	// (0x00053c8b) status_small_pane_g2_ParamLimits

0x968b,	// (0x00053c8b) status_small_pane_g2

0x9697,	// (0x00053c97) status_small_pane_g3_ParamLimits

0x9697,	// (0x00053c97) status_small_pane_g3

0x96a3,	// (0x00053ca3) status_small_pane_g4_ParamLimits

0x96a3,	// (0x00053ca3) status_small_pane_g4

0x96af,	// (0x00053caf) status_small_pane_g5_ParamLimits

0x96af,	// (0x00053caf) status_small_pane_g5

0x96bd,	// (0x00053cbd) status_small_pane_g6_ParamLimits

0x96bd,	// (0x00053cbd) status_small_pane_g6

0x0007,

0xf77c,	// (0x00059d7c) status_small_pane_g_ParamLimits

0xf77c,	// (0x00059d7c) status_small_pane_g

0x96ec,	// (0x00053cec) status_small_pane_t1

0x970e,	// (0x00053d0e) status_small_wait_pane_ParamLimits

0x970e,	// (0x00053d0e) status_small_wait_pane

0x8ec1,	// (0x000534c1) aid_levels_signal_ParamLimits

0x8ec1,	// (0x000534c1) aid_levels_signal

0x8ed3,	// (0x000534d3) signal_pane_g1_ParamLimits

0x8ed3,	// (0x000534d3) signal_pane_g1

0x8ee8,	// (0x000534e8) signal_pane_g2_ParamLimits

0x8ee8,	// (0x000534e8) signal_pane_g2

0x0003,

0xf70d,	// (0x00059d0d) signal_pane_g_ParamLimits

0xf70d,	// (0x00059d0d) signal_pane_g

0x8f23,	// (0x00053523) context_pane_g1

0x7529,	// (0x00051b29) title_pane_g1

0x755f,	// (0x00051b5f) title_pane_t1

0x7eed,	// (0x000524ed) title_pane_t2

0x7f13,	// (0x00052513) title_pane_t3

0x0002,

0xf557,	// (0x00059b57) title_pane_t

0x9ba1,	// (0x000541a1) aid_levels_battery_ParamLimits

0x9ba1,	// (0x000541a1) aid_levels_battery

0x9bb5,	// (0x000541b5) battery_pane_g1_ParamLimits

0x9bb5,	// (0x000541b5) battery_pane_g1

0x9bcb,	// (0x000541cb) battery_pane_g2_ParamLimits

0x9bcb,	// (0x000541cb) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059db0) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059db0) battery_pane_g

0xae39,	// (0x00055439) uni_indicator_pane_g1

0xae4c,	// (0x0005544c) uni_indicator_pane_g2

0xae5e,	// (0x0005545e) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00059f26) uni_indicator_pane_g

0x92cd,	// (0x000538cd) navi_icon_pane_ParamLimits

0x92cd,	// (0x000538cd) navi_icon_pane

0x91ff,	// (0x000537ff) navi_midp_pane

0x92e9,	// (0x000538e9) navi_navi_pane

0x92f3,	// (0x000538f3) navi_text_pane_ParamLimits

0x92f3,	// (0x000538f3) navi_text_pane

0x7515,	// (0x00051b15) status_small_wait_pane_g1

0x8368,	// (0x00052968) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00059f21) status_small_wait_pane_g

0xab5e,	// (0x0005515e) navi_navi_icon_text_pane

0xab66,	// (0x00055166) navi_navi_pane_g1_ParamLimits

0xab66,	// (0x00055166) navi_navi_pane_g1

0xab78,	// (0x00055178) navi_navi_pane_g2_ParamLimits

0xab78,	// (0x00055178) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00059eef) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00059eef) navi_navi_pane_g

0xab8a,	// (0x0005518a) navi_navi_tabs_pane

0xab93,	// (0x00055193) navi_navi_text_pane

0xab5e,	// (0x0005515e) navi_navi_volume_pane

0xab3a,	// (0x0005513a) navi_text_pane_t1

0xab2e,	// (0x0005512e) navi_icon_pane_g1

0xaa81,	// (0x00055081) navi_navi_text_pane_t1

0x62de,	// (0x000508de) navi_navi_volume_pane_g1

0x62e6,	// (0x000508e6) volume_small_pane

0xa9e7,	// (0x00054fe7) navi_navi_icon_text_pane_g1

0xa9ef,	// (0x00054fef) navi_navi_icon_text_pane_t1

0x92e9,	// (0x000538e9) navi_tabs_2_long_pane

0x92e9,	// (0x000538e9) navi_tabs_2_pane

0x92e9,	// (0x000538e9) navi_tabs_3_long_pane

0x92e9,	// (0x000538e9) navi_tabs_3_pane

0x92e9,	// (0x000538e9) navi_tabs_4_pane

0x62be,	// (0x000508be) tabs_2_active_pane_ParamLimits

0x62be,	// (0x000508be) tabs_2_active_pane

0x62ce,	// (0x000508ce) tabs_2_passive_pane_ParamLimits

0x62ce,	// (0x000508ce) tabs_2_passive_pane

0x628c,	// (0x0005088c) tabs_3_active_pane_ParamLimits

0x628c,	// (0x0005088c) tabs_3_active_pane

0x629c,	// (0x0005089c) tabs_3_passive_pane_ParamLimits

0x629c,	// (0x0005089c) tabs_3_passive_pane

0x62ad,	// (0x000508ad) tabs_3_passive_pane_cp_ParamLimits

0x62ad,	// (0x000508ad) tabs_3_passive_pane_cp

0x6248,	// (0x00050848) tabs_4_active_pane_ParamLimits

0x6248,	// (0x00050848) tabs_4_active_pane

0x6259,	// (0x00050859) tabs_4_passive_pane_ParamLimits

0x6259,	// (0x00050859) tabs_4_passive_pane

0x626a,	// (0x0005086a) tabs_4_passive_pane_cp_ParamLimits

0x626a,	// (0x0005086a) tabs_4_passive_pane_cp

0x627b,	// (0x0005087b) tabs_4_passive_pane_cp2_ParamLimits

0x627b,	// (0x0005087b) tabs_4_passive_pane_cp2

0x6224,	// (0x00050824) tabs_2_long_active_pane_ParamLimits

0x6224,	// (0x00050824) tabs_2_long_active_pane

0x6236,	// (0x00050836) tabs_2_long_passive_pane_ParamLimits

0x6236,	// (0x00050836) tabs_2_long_passive_pane

0x61e5,	// (0x000507e5) tabs_3_long_active_pane_ParamLimits

0x61e5,	// (0x000507e5) tabs_3_long_active_pane

0x61f8,	// (0x000507f8) tabs_3_long_passive_pane_ParamLimits

0x61f8,	// (0x000507f8) tabs_3_long_passive_pane

0x6211,	// (0x00050811) tabs_3_long_passive_pane_cp_ParamLimits

0x6211,	// (0x00050811) tabs_3_long_passive_pane_cp

0x618b,	// (0x0005078b) volume_small_pane_g1

0x6194,	// (0x00050794) volume_small_pane_g2

0x619d,	// (0x0005079d) volume_small_pane_g3

0x61a6,	// (0x000507a6) volume_small_pane_g4

0x61af,	// (0x000507af) volume_small_pane_g5

0x61b8,	// (0x000507b8) volume_small_pane_g6

0x61c1,	// (0x000507c1) volume_small_pane_g7

0x61ca,	// (0x000507ca) volume_small_pane_g8

0x61d3,	// (0x000507d3) volume_small_pane_g9

0x61dc,	// (0x000507dc) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00059ebb) volume_small_pane_g

0x7f25,	// (0x00052525) bg_active_tab_pane_cp2_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp2

0x7f33,	// (0x00052533) tabs_3_active_pane_g1

0x7f3b,	// (0x0005253b) tabs_3_active_pane_t1

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp2_ParamLimits

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp2

0x7f33,	// (0x00052533) tabs_3_passive_pane_g1

0x7f3b,	// (0x0005253b) tabs_3_passive_pane_t1

0x7f25,	// (0x00052525) bg_active_tab_pane_cp3_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp3

0x7f4d,	// (0x0005254d) tabs_4_active_pane_g1

0x7f55,	// (0x00052555) tabs_4_active_pane_t1

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp3_ParamLimits

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp3

0x7f4d,	// (0x0005254d) tabs_4_1_passive_pane_g1

0x7f55,	// (0x00052555) tabs_4_1_passive_pane_t1

0x977f,	// (0x00053d7f) list_highlight_pane_cp2

0xb0a1,	// (0x000556a1) list_set_pane_ParamLimits

0xb0a1,	// (0x000556a1) list_set_pane

0xb147,	// (0x00055747) main_pane_set_t1_ParamLimits

0xb147,	// (0x00055747) main_pane_set_t1

0xb167,	// (0x00055767) main_pane_set_t2_ParamLimits

0xb167,	// (0x00055767) main_pane_set_t2

0xb17b,	// (0x0005577b) main_pane_set_t3_ParamLimits

0xb17b,	// (0x0005577b) main_pane_set_t3

0xb18d,	// (0x0005578d) main_pane_set_t4_ParamLimits

0xb18d,	// (0x0005578d) main_pane_set_t4

0x0003,

0xf98b,	// (0x00059f8b) main_pane_set_t_ParamLimits

0xf98b,	// (0x00059f8b) main_pane_set_t

0xb19f,	// (0x0005579f) setting_code_pane

0xb1ab,	// (0x000557ab) setting_slider_graphic_pane

0xb1ab,	// (0x000557ab) setting_slider_pane

0xb1ab,	// (0x000557ab) setting_text_pane

0xb1ab,	// (0x000557ab) setting_volume_pane

0x4ba9,	// (0x0004f1a9) volume_set_pane

0x7f25,	// (0x00052525) bg_set_opt_pane_cp

0x4bb1,	// (0x0004f1b1) setting_slider_pane_t1

0x4bca,	// (0x0004f1ca) setting_slider_pane_t2

0x4be4,	// (0x0004f1e4) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00059b5e) setting_slider_pane_t

0x4bfc,	// (0x0004f1fc) slider_set_pane

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp2

0x7f67,	// (0x00052567) setting_slider_graphic_pane_g1

0x4c12,	// (0x0004f212) setting_slider_graphic_pane_t1

0x4c22,	// (0x0004f222) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00059b65) setting_slider_graphic_pane_t

0x4c32,	// (0x0004f232) slider_set_pane_cp

0x751f,	// (0x00051b1f) input_focus_pane_cp1

0xb060,	// (0x00055660) list_set_text_pane

0x7515,	// (0x00051b15) setting_text_pane_g1

0x751f,	// (0x00051b1f) input_focus_pane_cp2

0x7515,	// (0x00051b15) setting_code_pane_g1

0x7f70,	// (0x00052570) setting_code_pane_t1

0x4c3a,	// (0x0004f23a) set_text_pane_t1_ParamLimits

0x4c3a,	// (0x0004f23a) set_text_pane_t1

0x8812,	// (0x00052e12) set_opt_bg_pane_g1

0x881a,	// (0x00052e1a) set_opt_bg_pane_g2

0xb03a,	// (0x0005563a) set_opt_bg_pane_g3

0x882a,	// (0x00052e2a) set_opt_bg_pane_g4

0x8832,	// (0x00052e32) set_opt_bg_pane_g5

0x883a,	// (0x00052e3a) set_opt_bg_pane_g6

0xb044,	// (0x00055644) set_opt_bg_pane_g7

0xb04c,	// (0x0005564c) set_opt_bg_pane_g8

0xb056,	// (0x00055656) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00059f78) set_opt_bg_pane_g

0xb02d,	// (0x0005562d) slider_set_pane_g1

0x637b,	// (0x0005097b) slider_set_pane_g2

0x0006,

0xf969,	// (0x00059f69) slider_set_pane_g

0x62ef,	// (0x000508ef) volume_set_pane_g1

0x62f7,	// (0x000508f7) volume_set_pane_g2

0x62ff,	// (0x000508ff) volume_set_pane_g3

0x6307,	// (0x00050907) volume_set_pane_g4

0x630f,	// (0x0005090f) volume_set_pane_g5

0x6317,	// (0x00050917) volume_set_pane_g6

0x631f,	// (0x0005091f) volume_set_pane_g7

0x6327,	// (0x00050927) volume_set_pane_g8

0x632f,	// (0x0005092f) volume_set_pane_g9

0x6337,	// (0x00050937) volume_set_pane_g10

0x0009,

0xf941,	// (0x00059f41) volume_set_pane_g

0x7f7e,	// (0x0005257e) indicator_pane_ParamLimits

0x7f7e,	// (0x0005257e) indicator_pane

0x7f8a,	// (0x0005258a) main_idle_pane_g2_ParamLimits

0x7f8a,	// (0x0005258a) main_idle_pane_g2

0x7fb2,	// (0x000525b2) main_pane_idle_g1_ParamLimits

0x7fb2,	// (0x000525b2) main_pane_idle_g1

0x7fbf,	// (0x000525bf) popup_clock_digital_analogue_window_ParamLimits

0x7fbf,	// (0x000525bf) popup_clock_digital_analogue_window

0x7fd6,	// (0x000525d6) soft_indicator_pane_ParamLimits

0x7fd6,	// (0x000525d6) soft_indicator_pane

0x7fe2,	// (0x000525e2) wallpaper_pane_ParamLimits

0x7fe2,	// (0x000525e2) wallpaper_pane

0x7515,	// (0x00051b15) wallpaper_pane_g1

0x7ff6,	// (0x000525f6) indicator_pane_g1_ParamLimits

0x7ff6,	// (0x000525f6) indicator_pane_g1

0xb40f,	// (0x00055a0f) navi_navi_icon_text_pane_srt_g1

0x8011,	// (0x00052611) soft_indicator_pane_t1

0x802b,	// (0x0005262b) aid_ps_area_pane

0x803c,	// (0x0005263c) aid_ps_clock_pane

0x804a,	// (0x0005264a) aid_ps_indicator_pane

0x8056,	// (0x00052656) indicator_ps_pane_ParamLimits

0x8056,	// (0x00052656) indicator_ps_pane

0x8065,	// (0x00052665) power_save_pane_g1_ParamLimits

0x8065,	// (0x00052665) power_save_pane_g1

0x8071,	// (0x00052671) power_save_pane_g2_ParamLimits

0x8071,	// (0x00052671) power_save_pane_g2

0x47b0,	// (0x0004edb0) aid_navinavi_width_pane

0x802b,	// (0x0005262b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00059b6a) power_save_pane_g_ParamLimits

0xf56a,	// (0x00059b6a) power_save_pane_g

0x807f,	// (0x0005267f) power_save_pane_t1_ParamLimits

0x807f,	// (0x0005267f) power_save_pane_t1

0x803c,	// (0x0005263c) aid_ps_clock_pane_ParamLimits

0x804a,	// (0x0005264a) aid_ps_indicator_pane_ParamLimits

0x8091,	// (0x00052691) power_save_pane_t4_ParamLimits

0x8091,	// (0x00052691) power_save_pane_t4

0x0001,

0xf56f,	// (0x00059b6f) power_save_pane_t_ParamLimits

0xf56f,	// (0x00059b6f) power_save_pane_t

0x80bb,	// (0x000526bb) power_save_t3_ParamLimits

0x80bb,	// (0x000526bb) power_save_t3

0x80a6,	// (0x000526a6) power_save_t2_ParamLimits

0x80a6,	// (0x000526a6) power_save_t2

0x80d0,	// (0x000526d0) indicator_ps_pane_g1

0x80d9,	// (0x000526d9) ai_gene_pane_ParamLimits

0x80d9,	// (0x000526d9) ai_gene_pane

0x80e5,	// (0x000526e5) ai_links_pane_ParamLimits

0x80e5,	// (0x000526e5) ai_links_pane

0x80f1,	// (0x000526f1) indicator_pane_cp1_ParamLimits

0x80f1,	// (0x000526f1) indicator_pane_cp1

0x80fd,	// (0x000526fd) main_pane_idle_g1_cp_ParamLimits

0x80fd,	// (0x000526fd) main_pane_idle_g1_cp

0x8109,	// (0x00052709) popup_ai_links_title_window

0x8112,	// (0x00052712) soft_indicator_pane_cp1_ParamLimits

0x8112,	// (0x00052712) soft_indicator_pane_cp1

0xae27,	// (0x00055427) ai_links_pane_g1

0xae30,	// (0x00055430) grid_ai_links_pane

0xae0a,	// (0x0005540a) ai_gene_pane_1

0xae15,	// (0x00055415) ai_gene_pane_2

0xae1e,	// (0x0005541e) list_highlight_pane_cp4

0xadee,	// (0x000553ee) cell_ai_link_pane_ParamLimits

0xadee,	// (0x000553ee) cell_ai_link_pane

0xade6,	// (0x000553e6) cell_ai_link_pane_g1

0x8368,	// (0x00052968) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00059f1c) cell_ai_link_pane_g

0x751f,	// (0x00051b1f) grid_highlight_cp2

0x751f,	// (0x00051b1f) bg_popup_sub_pane_cp1

0x812c,	// (0x0005272c) popup_ai_links_title_window_t1

0xad34,	// (0x00055334) ai_gene_pane_1_g1_ParamLimits

0xad34,	// (0x00055334) ai_gene_pane_1_g1

0xad40,	// (0x00055340) ai_gene_pane_1_g2_ParamLimits

0xad40,	// (0x00055340) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00059f12) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00059f12) ai_gene_pane_1_g

0xad4d,	// (0x0005534d) ai_gene_pane_1_t1_ParamLimits

0xad4d,	// (0x0005534d) ai_gene_pane_1_t1

0xad81,	// (0x00055381) grid_ai_soft_ind_pane

0xad1f,	// (0x0005531f) ai_gene_pane_2_t1_ParamLimits

0xad1f,	// (0x0005531f) ai_gene_pane_2_t1

0x813b,	// (0x0005273b) main_pane_empty_t1_ParamLimits

0x813b,	// (0x0005273b) main_pane_empty_t1

0x8153,	// (0x00052753) main_pane_empty_t2_ParamLimits

0x8153,	// (0x00052753) main_pane_empty_t2

0x8168,	// (0x00052768) main_pane_empty_t3_ParamLimits

0x8168,	// (0x00052768) main_pane_empty_t3

0x817a,	// (0x0005277a) main_pane_empty_t4_ParamLimits

0x817a,	// (0x0005277a) main_pane_empty_t4

0x818c,	// (0x0005278c) main_pane_empty_t5_ParamLimits

0x818c,	// (0x0005278c) main_pane_empty_t5

0x0004,

0xf574,	// (0x00059b74) main_pane_empty_t_ParamLimits

0xf574,	// (0x00059b74) main_pane_empty_t

0x8863,	// (0x00052e63) bg_popup_window_pane_ParamLimits

0x8863,	// (0x00052e63) bg_popup_window_pane

0xaa8f,	// (0x0005508f) find_popup_pane_cp2_ParamLimits

0xaa8f,	// (0x0005508f) find_popup_pane_cp2

0xaa9b,	// (0x0005509b) heading_pane_ParamLimits

0xaa9b,	// (0x0005509b) heading_pane

0x751f,	// (0x00051b1f) bg_popup_sub_pane

0xaa09,	// (0x00055009) bg_popup_window_pane_g1_ParamLimits

0xaa09,	// (0x00055009) bg_popup_window_pane_g1

0xaa15,	// (0x00055015) bg_popup_window_pane_g2_ParamLimits

0xaa15,	// (0x00055015) bg_popup_window_pane_g2

0xaa21,	// (0x00055021) bg_popup_window_pane_g3_ParamLimits

0xaa21,	// (0x00055021) bg_popup_window_pane_g3

0xaa2d,	// (0x0005502d) bg_popup_window_pane_g4_ParamLimits

0xaa2d,	// (0x0005502d) bg_popup_window_pane_g4

0xaa39,	// (0x00055039) bg_popup_window_pane_g5_ParamLimits

0xaa39,	// (0x00055039) bg_popup_window_pane_g5

0xaa45,	// (0x00055045) bg_popup_window_pane_g6_ParamLimits

0xaa45,	// (0x00055045) bg_popup_window_pane_g6

0xaa51,	// (0x00055051) bg_popup_window_pane_g7_ParamLimits

0xaa51,	// (0x00055051) bg_popup_window_pane_g7

0xaa5d,	// (0x0005505d) bg_popup_window_pane_g8_ParamLimits

0xaa5d,	// (0x0005505d) bg_popup_window_pane_g8

0xaa69,	// (0x00055069) bg_popup_window_pane_g9_ParamLimits

0xaa69,	// (0x00055069) bg_popup_window_pane_g9

0xaa75,	// (0x00055075) bg_popup_window_pane_g10_ParamLimits

0xaa75,	// (0x00055075) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00059eda) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00059eda) bg_popup_window_pane_g

0xa99e,	// (0x00054f9e) bg_popup_heading_pane_ParamLimits

0xa99e,	// (0x00054f9e) bg_popup_heading_pane

0x6433,	// (0x00050a33) tabs_4_passive_pane_cp_srt_ParamLimits

0x6433,	// (0x00050a33) tabs_4_passive_pane_cp_srt

0x6445,	// (0x00050a45) tabs_4_passive_pane_srt_ParamLimits

0xa9b2,	// (0x00054fb2) heading_pane_g2

0x6445,	// (0x00050a45) tabs_4_passive_pane_srt

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp3_srt

0xa9ba,	// (0x00054fba) heading_pane_t1_ParamLimits

0xa9ba,	// (0x00054fba) heading_pane_t1

0xa9d1,	// (0x00054fd1) heading_pane_t2_ParamLimits

0xa9d1,	// (0x00054fd1) heading_pane_t2

0x0001,

0xf8d5,	// (0x00059ed5) heading_pane_t_ParamLimits

0xf8d5,	// (0x00059ed5) heading_pane_t

0xa4cb,	// (0x00054acb) bg_popup_heading_pane_g1

0xa57a,	// (0x00054b7a) bg_popup_heading_pane_g2

0xa584,	// (0x00054b84) bg_popup_heading_pane_g3

0xa58e,	// (0x00054b8e) bg_popup_heading_pane_g4

0xa598,	// (0x00054b98) bg_popup_heading_pane_g5

0xa5a2,	// (0x00054ba2) bg_popup_heading_pane_g6

0xa5aa,	// (0x00054baa) bg_popup_heading_pane_g7

0xa5b2,	// (0x00054bb2) bg_popup_heading_pane_g8

0xa5bc,	// (0x00054bbc) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00059e91) bg_popup_heading_pane_g

0x9ca3,	// (0x000542a3) bg_popup_sub_pane_g1

0x9cb3,	// (0x000542b3) bg_popup_sub_pane_g2

0x9cab,	// (0x000542ab) bg_popup_sub_pane_g3

0x9cc3,	// (0x000542c3) bg_popup_sub_pane_g4

0x9cbb,	// (0x000542bb) bg_popup_sub_pane_g5

0x9ccb,	// (0x000542cb) bg_popup_sub_pane_g6

0x9cd3,	// (0x000542d3) bg_popup_sub_pane_g7

0x9ce3,	// (0x000542e3) bg_popup_sub_pane_g8

0x9cdb,	// (0x000542db) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00059e6b) bg_popup_sub_pane_g

0x81a0,	// (0x000527a0) bg_popup_window_pane_cp5_ParamLimits

0x81a0,	// (0x000527a0) bg_popup_window_pane_cp5

0x81bc,	// (0x000527bc) popup_note_window_g1_ParamLimits

0x81bc,	// (0x000527bc) popup_note_window_g1

0x81c8,	// (0x000527c8) popup_note_window_t1_ParamLimits

0x81c8,	// (0x000527c8) popup_note_window_t1

0x81de,	// (0x000527de) popup_note_window_t2_ParamLimits

0x81de,	// (0x000527de) popup_note_window_t2

0x81f4,	// (0x000527f4) popup_note_window_t3_ParamLimits

0x81f4,	// (0x000527f4) popup_note_window_t3

0x820a,	// (0x0005280a) popup_note_window_t4_ParamLimits

0x820a,	// (0x0005280a) popup_note_window_t4

0x8232,	// (0x00052832) popup_note_window_t5_ParamLimits

0x8232,	// (0x00052832) popup_note_window_t5

0x0004,

0xf57f,	// (0x00059b7f) popup_note_window_t_ParamLimits

0xf57f,	// (0x00059b7f) popup_note_window_t

0x827c,	// (0x0005287c) bg_popup_window_pane_cp6_ParamLimits

0x827c,	// (0x0005287c) bg_popup_window_pane_cp6

0xa447,	// (0x00054a47) popup_note_image_window_g1_ParamLimits

0xa447,	// (0x00054a47) popup_note_image_window_g1

0xa453,	// (0x00054a53) popup_note_image_window_g2_ParamLimits

0xa453,	// (0x00054a53) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00059e5f) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00059e5f) popup_note_image_window_g

0xa46c,	// (0x00054a6c) popup_note_image_window_t1_ParamLimits

0xa46c,	// (0x00054a6c) popup_note_image_window_t1

0xa485,	// (0x00054a85) popup_note_image_window_t2_ParamLimits

0xa485,	// (0x00054a85) popup_note_image_window_t2

0xa49e,	// (0x00054a9e) popup_note_image_window_t3_ParamLimits

0xa49e,	// (0x00054a9e) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00059e64) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00059e64) popup_note_image_window_t

0xa308,	// (0x00054908) bg_popup_window_pane_cp7_ParamLimits

0xa308,	// (0x00054908) bg_popup_window_pane_cp7

0xa338,	// (0x00054938) popup_note_wait_window_g1_ParamLimits

0xa338,	// (0x00054938) popup_note_wait_window_g1

0xa344,	// (0x00054944) popup_note_wait_window_g2_ParamLimits

0xa344,	// (0x00054944) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00059e4d) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00059e4d) popup_note_wait_window_g

0xa35c,	// (0x0005495c) popup_note_wait_window_t1_ParamLimits

0xa35c,	// (0x0005495c) popup_note_wait_window_t1

0xa383,	// (0x00054983) popup_note_wait_window_t2_ParamLimits

0xa383,	// (0x00054983) popup_note_wait_window_t2

0xa3a0,	// (0x000549a0) popup_note_wait_window_t3_ParamLimits

0xa3a0,	// (0x000549a0) popup_note_wait_window_t3

0xa3b3,	// (0x000549b3) popup_note_wait_window_t4_ParamLimits

0xa3b3,	// (0x000549b3) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00059e54) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00059e54) popup_note_wait_window_t

0xa3d8,	// (0x000549d8) wait_bar_pane_ParamLimits

0xa3d8,	// (0x000549d8) wait_bar_pane

0x751f,	// (0x00051b1f) wait_anim_pane

0x751f,	// (0x00051b1f) wait_border_pane

0x7515,	// (0x00051b15) wait_anim_pane_g1

0x7515,	// (0x00051b15) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059d08) wait_anim_pane_g

0xa2ac,	// (0x000548ac) wait_border_pane_g1

0xa2b7,	// (0x000548b7) wait_border_pane_g2

0xa2c0,	// (0x000548c0) wait_border_pane_g3

0x0002,

0xf846,	// (0x00059e46) wait_border_pane_g

0xa117,	// (0x00054717) bg_popup_window_pane_cp16_ParamLimits

0xa117,	// (0x00054717) bg_popup_window_pane_cp16

0xa217,	// (0x00054817) indicator_popup_pane_cp4_ParamLimits

0xa217,	// (0x00054817) indicator_popup_pane_cp4

0xa22b,	// (0x0005482b) popup_query_data_window_t1_ParamLimits

0xa22b,	// (0x0005482b) popup_query_data_window_t1

0xa23d,	// (0x0005483d) popup_query_data_window_t2_ParamLimits

0xa23d,	// (0x0005483d) popup_query_data_window_t2

0xa256,	// (0x00054856) popup_query_data_window_t3_ParamLimits

0xa256,	// (0x00054856) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00059e3f) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00059e3f) popup_query_data_window_t

0xa270,	// (0x00054870) query_popup_data_pane_ParamLimits

0xa270,	// (0x00054870) query_popup_data_pane

0xa284,	// (0x00054884) query_popup_data_pane_cp1_ParamLimits

0xa284,	// (0x00054884) query_popup_data_pane_cp1

0xa117,	// (0x00054717) bg_popup_window_pane_cp10_ParamLimits

0xa117,	// (0x00054717) bg_popup_window_pane_cp10

0xa149,	// (0x00054749) indicator_popup_pane_ParamLimits

0xa149,	// (0x00054749) indicator_popup_pane

0xa16b,	// (0x0005476b) popup_query_code_window_t1_ParamLimits

0xa16b,	// (0x0005476b) popup_query_code_window_t1

0xa185,	// (0x00054785) popup_query_code_window_t2_ParamLimits

0xa185,	// (0x00054785) popup_query_code_window_t2

0xa1ce,	// (0x000547ce) popup_query_code_window_t3_ParamLimits

0xa1ce,	// (0x000547ce) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00059e38) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00059e38) popup_query_code_window_t

0xa1fd,	// (0x000547fd) query_popup_pane_ParamLimits

0xa1fd,	// (0x000547fd) query_popup_pane

0x827c,	// (0x0005287c) bg_popup_window_pane_cp15_ParamLimits

0x827c,	// (0x0005287c) bg_popup_window_pane_cp15

0x829a,	// (0x0005289a) indicator_popup_pane_cp1_ParamLimits

0x829a,	// (0x0005289a) indicator_popup_pane_cp1

0x82ad,	// (0x000528ad) indicator_popup_pane_cp2_ParamLimits

0x82ad,	// (0x000528ad) indicator_popup_pane_cp2

0x82c0,	// (0x000528c0) popup_query_data_code_window_g1_ParamLimits

0x82c0,	// (0x000528c0) popup_query_data_code_window_g1

0x82d3,	// (0x000528d3) popup_query_data_code_window_t1_ParamLimits

0x82d3,	// (0x000528d3) popup_query_data_code_window_t1

0x82e5,	// (0x000528e5) popup_query_data_code_window_t2_ParamLimits

0x82e5,	// (0x000528e5) popup_query_data_code_window_t2

0x82f7,	// (0x000528f7) popup_query_data_code_window_t3_ParamLimits

0x82f7,	// (0x000528f7) popup_query_data_code_window_t3

0x830d,	// (0x0005290d) popup_query_data_code_window_t4_ParamLimits

0x830d,	// (0x0005290d) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00059b8a) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00059b8a) popup_query_data_code_window_t

0x5fcf,	// (0x000505cf) list_single_midp_graphic_pane_g3

0x8325,	// (0x00052925) query_popup_data_pane_cp2_ParamLimits

0x8338,	// (0x00052938) query_popup_pane_cp2_ParamLimits

0x8338,	// (0x00052938) query_popup_pane_cp2

0x751f,	// (0x00051b1f) bg_popup_window_pane_cp11

0xa103,	// (0x00054703) heading_pane_cp5

0x8423,	// (0x00052a23) listscroll_popup_info_pane

0x751f,	// (0x00051b1f) input_focus_pane_cp3

0x834b,	// (0x0005294b) query_popup_pane_t1

0x8359,	// (0x00052959) list_popup_info_pane_ParamLimits

0x8359,	// (0x00052959) list_popup_info_pane

0x8368,	// (0x00052968) listscroll_popup_info_pane_g1

0x8370,	// (0x00052970) scroll_pane_cp7

0x837a,	// (0x0005297a) popup_info_list_pane_t1_ParamLimits

0x837a,	// (0x0005297a) popup_info_list_pane_t1

0x8394,	// (0x00052994) popup_info_list_pane_t2_ParamLimits

0x8394,	// (0x00052994) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00059b93) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00059b93) popup_info_list_pane_t

0x751f,	// (0x00051b1f) bg_popup_window_pane_cp12

0xb429,	// (0x00055a29) find_popup_pane

0x7f25,	// (0x00052525) bg_popup_window_pane_cp3

0x83ae,	// (0x000529ae) heading_pane_cp3

0x83ba,	// (0x000529ba) listscroll_popup_graphic_pane

0x751f,	// (0x00051b1f) bg_popup_window_pane_cp4

0x8419,	// (0x00052a19) heading_pane_cp4

0x8423,	// (0x00052a23) listscroll_popup_colour_pane

0x842b,	// (0x00052a2b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x842b,	// (0x00052a2b) cell_large_graphic_colour_none_popup_pane

0x843f,	// (0x00052a3f) grid_large_graphic_colour_popup_pane_ParamLimits

0x843f,	// (0x00052a3f) grid_large_graphic_colour_popup_pane

0x846b,	// (0x00052a6b) listscroll_popup_colour_pane_g1_ParamLimits

0x846b,	// (0x00052a6b) listscroll_popup_colour_pane_g1

0x8482,	// (0x00052a82) listscroll_popup_colour_pane_g2_ParamLimits

0x8482,	// (0x00052a82) listscroll_popup_colour_pane_g2

0x8499,	// (0x00052a99) listscroll_popup_colour_pane_g3_ParamLimits

0x8499,	// (0x00052a99) listscroll_popup_colour_pane_g3

0x84a9,	// (0x00052aa9) listscroll_popup_colour_pane_g4_ParamLimits

0x84a9,	// (0x00052aa9) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00059b98) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00059b98) listscroll_popup_colour_pane_g

0x84bd,	// (0x00052abd) scroll_pane_cp6_ParamLimits

0x84bd,	// (0x00052abd) scroll_pane_cp6

0x84cf,	// (0x00052acf) cell_large_graphic_colour_popup_pane_ParamLimits

0x84cf,	// (0x00052acf) cell_large_graphic_colour_popup_pane

0x84ee,	// (0x00052aee) cell_large_graphic_colour_none_popup_pane_t1

0x751f,	// (0x00051b1f) grid_highlight_pane_cp5

0x84fd,	// (0x00052afd) cell_large_graphic_colour_popup_pane_g1

0x8505,	// (0x00052b05) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059ba1) cell_large_graphic_colour_popup_pane_g

0x850d,	// (0x00052b0d) cell_large_graphic_colour_popup_pane_g2_copy1

0x8516,	// (0x00052b16) grid_highlight_pane_cp4

0x851e,	// (0x00052b1e) bg_popup_window_pane_cp8_ParamLimits

0x851e,	// (0x00052b1e) bg_popup_window_pane_cp8

0x8539,	// (0x00052b39) popup_snote_single_text_window_g1_ParamLimits

0x8539,	// (0x00052b39) popup_snote_single_text_window_g1

0x854b,	// (0x00052b4b) popup_snote_single_text_window_t1_ParamLimits

0x854b,	// (0x00052b4b) popup_snote_single_text_window_t1

0x855e,	// (0x00052b5e) popup_snote_single_text_window_t2_ParamLimits

0x855e,	// (0x00052b5e) popup_snote_single_text_window_t2

0x8571,	// (0x00052b71) popup_snote_single_text_window_t3_ParamLimits

0x8571,	// (0x00052b71) popup_snote_single_text_window_t3

0x85aa,	// (0x00052baa) popup_snote_single_text_window_t4_ParamLimits

0x85aa,	// (0x00052baa) popup_snote_single_text_window_t4

0x85de,	// (0x00052bde) popup_snote_single_text_window_t5_ParamLimits

0x85de,	// (0x00052bde) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00059ba6) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00059ba6) popup_snote_single_text_window_t

0x860d,	// (0x00052c0d) bg_popup_window_pane_cp9_ParamLimits

0x860d,	// (0x00052c0d) bg_popup_window_pane_cp9

0x8539,	// (0x00052b39) popup_snote_single_graphic_window_g1_ParamLimits

0x8539,	// (0x00052b39) popup_snote_single_graphic_window_g1

0x861b,	// (0x00052c1b) popup_snote_single_graphic_window_g2_ParamLimits

0x861b,	// (0x00052c1b) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059bb1) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059bb1) popup_snote_single_graphic_window_g

0x8627,	// (0x00052c27) popup_snote_single_graphic_window_t1_ParamLimits

0x8627,	// (0x00052c27) popup_snote_single_graphic_window_t1

0x863a,	// (0x00052c3a) popup_snote_single_graphic_window_t2_ParamLimits

0x863a,	// (0x00052c3a) popup_snote_single_graphic_window_t2

0x864d,	// (0x00052c4d) popup_snote_single_graphic_window_t3_ParamLimits

0x864d,	// (0x00052c4d) popup_snote_single_graphic_window_t3

0x8686,	// (0x00052c86) popup_snote_single_graphic_window_t4_ParamLimits

0x8686,	// (0x00052c86) popup_snote_single_graphic_window_t4

0x86ba,	// (0x00052cba) popup_snote_single_graphic_window_t5_ParamLimits

0x86ba,	// (0x00052cba) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00059bb6) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00059bb6) popup_snote_single_graphic_window_t

0xb36b,	// (0x0005596b) grid_graphic_popup_pane_ParamLimits

0xb36b,	// (0x0005596b) grid_graphic_popup_pane

0xb395,	// (0x00055995) listscroll_popup_graphic_pane_g1_ParamLimits

0xb395,	// (0x00055995) listscroll_popup_graphic_pane_g1

0xb3a9,	// (0x000559a9) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3a9,	// (0x000559a9) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00059fb5) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00059fb5) listscroll_popup_graphic_pane_g

0xb3bd,	// (0x000559bd) scroll_pane_cp5

0xb30a,	// (0x0005590a) cell_graphic_popup_pane_ParamLimits

0xb30a,	// (0x0005590a) cell_graphic_popup_pane

0xb2eb,	// (0x000558eb) cell_graphic_popup_pane_g1

0xb2f3,	// (0x000558f3) cell_graphic_popup_pane_g2

0x850d,	// (0x00052b0d) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00059fae) cell_graphic_popup_pane_g

0xb2fc,	// (0x000558fc) cell_graphic_popup_pane_t2

0x8516,	// (0x00052b16) grid_highlight_pane_cp3

0x86fb,	// (0x00052cfb) list_gen_pane_ParamLimits

0x86fb,	// (0x00052cfb) list_gen_pane

0x872d,	// (0x00052d2d) scroll_pane

0xb243,	// (0x00055843) bg_list_pane_g1_ParamLimits

0xb243,	// (0x00055843) bg_list_pane_g1

0xb260,	// (0x00055860) bg_list_pane_g2_ParamLimits

0xb260,	// (0x00055860) bg_list_pane_g2

0xb275,	// (0x00055875) bg_list_pane_g3_ParamLimits

0xb275,	// (0x00055875) bg_list_pane_g3

0xb289,	// (0x00055889) bg_list_pane_g4_ParamLimits

0xb289,	// (0x00055889) bg_list_pane_g4

0xb29d,	// (0x0005589d) bg_list_pane_g5_ParamLimits

0xb29d,	// (0x0005589d) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00059fa3) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00059fa3) bg_list_pane_g

0x76d1,	// (0x00051cd1) list_double2_graphic_large_graphic_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double2_graphic_large_graphic_pane

0x76d1,	// (0x00051cd1) list_double2_graphic_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double2_graphic_pane

0x76d1,	// (0x00051cd1) list_double2_large_graphic_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double2_large_graphic_pane

0x76d1,	// (0x00051cd1) list_double2_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double2_pane

0x76d1,	// (0x00051cd1) list_double_graphic_heading_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_graphic_heading_pane

0x76d1,	// (0x00051cd1) list_double_graphic_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_graphic_pane

0x76d1,	// (0x00051cd1) list_double_heading_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_heading_pane

0x76d1,	// (0x00051cd1) list_double_large_graphic_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_large_graphic_pane

0x76d1,	// (0x00051cd1) list_double_number_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_number_pane

0x76d1,	// (0x00051cd1) list_double_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_pane

0x76d1,	// (0x00051cd1) list_double_time_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_double_time_pane

0x76d1,	// (0x00051cd1) list_setting_number_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_setting_number_pane

0x76d1,	// (0x00051cd1) list_setting_pane_ParamLimits

0x76d1,	// (0x00051cd1) list_setting_pane

0x7737,	// (0x00051d37) list_single_2graphic_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_2graphic_pane

0x7737,	// (0x00051d37) list_single_graphic_heading_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_graphic_heading_pane

0x7737,	// (0x00051d37) list_single_graphic_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_graphic_pane

0x7737,	// (0x00051d37) list_single_heading_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_heading_pane

0x77a8,	// (0x00051da8) list_single_large_graphic_pane_ParamLimits

0x77a8,	// (0x00051da8) list_single_large_graphic_pane

0x7737,	// (0x00051d37) list_single_number_heading_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_number_heading_pane

0x7737,	// (0x00051d37) list_single_number_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_number_pane

0x7737,	// (0x00051d37) list_single_pane_ParamLimits

0x7737,	// (0x00051d37) list_single_pane

0x751f,	// (0x00051b1f) list_highlight_pane_cp1

0x75c7,	// (0x00051bc7) list_single_pane_g1_ParamLimits

0x75c7,	// (0x00051bc7) list_single_pane_g1

0x75d3,	// (0x00051bd3) list_single_pane_g2_ParamLimits

0x75d3,	// (0x00051bd3) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00059bd2) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00059bd2) list_single_pane_g

0x76bb,	// (0x00051cbb) list_single_pane_t1_ParamLimits

0x76bb,	// (0x00051cbb) list_single_pane_t1

0x75c7,	// (0x00051bc7) list_single_number_pane_g1_ParamLimits

0x75c7,	// (0x00051bc7) list_single_number_pane_g1

0x75d3,	// (0x00051bd3) list_single_number_pane_g2_ParamLimits

0x75d3,	// (0x00051bd3) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00059bd2) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00059bd2) list_single_number_pane_g

0x633f,	// (0x0005093f) list_single_number_pane_t1_ParamLimits

0x633f,	// (0x0005093f) list_single_number_pane_t1

0x6355,	// (0x00050955) list_single_number_pane_t2_ParamLimits

0x6355,	// (0x00050955) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00059f64) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00059f64) list_single_number_pane_t

0x4c53,	// (0x0004f253) list_single_graphic_pane_g1_ParamLimits

0x4c53,	// (0x0004f253) list_single_graphic_pane_g1

0x75c7,	// (0x00051bc7) list_single_graphic_pane_g2_ParamLimits

0x75c7,	// (0x00051bc7) list_single_graphic_pane_g2

0x75d3,	// (0x00051bd3) list_single_graphic_pane_g3_ParamLimits

0x75d3,	// (0x00051bd3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00059bc1) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00059bc1) list_single_graphic_pane_g

0x4c5f,	// (0x0004f25f) list_single_graphic_pane_t1_ParamLimits

0x4c5f,	// (0x0004f25f) list_single_graphic_pane_t1

0x4c75,	// (0x0004f275) list_single_heading_pane_g1_ParamLimits

0x4c75,	// (0x0004f275) list_single_heading_pane_g1

0x75d3,	// (0x00051bd3) list_single_heading_pane_g2_ParamLimits

0x75d3,	// (0x00051bd3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00059bc8) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00059bc8) list_single_heading_pane_g

0x4c88,	// (0x0004f288) list_single_heading_pane_t1_ParamLimits

0x4c88,	// (0x0004f288) list_single_heading_pane_t1

0x75df,	// (0x00051bdf) list_single_heading_pane_t2_ParamLimits

0x75df,	// (0x00051bdf) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00059bcd) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00059bcd) list_single_heading_pane_t

0x75c7,	// (0x00051bc7) list_single_number_heading_pane_g1_ParamLimits

0x75c7,	// (0x00051bc7) list_single_number_heading_pane_g1

0x75d3,	// (0x00051bd3) list_single_number_heading_pane_g2_ParamLimits

0x75d3,	// (0x00051bd3) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00059bd2) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00059bd2) list_single_number_heading_pane_g

0x4c9e,	// (0x0004f29e) list_single_number_heading_pane_t1_ParamLimits

0x4c9e,	// (0x0004f29e) list_single_number_heading_pane_t1

0x4cb4,	// (0x0004f2b4) list_single_number_heading_pane_t2_ParamLimits

0x4cb4,	// (0x0004f2b4) list_single_number_heading_pane_t2

0x4cc6,	// (0x0004f2c6) list_single_number_heading_pane_t3_ParamLimits

0x4cc6,	// (0x0004f2c6) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00059bd7) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00059bd7) list_single_number_heading_pane_t

0x4cd8,	// (0x0004f2d8) list_single_graphic_heading_pane_g1_ParamLimits

0x4cd8,	// (0x0004f2d8) list_single_graphic_heading_pane_g1

0x75f1,	// (0x00051bf1) list_single_graphic_heading_pane_g4_ParamLimits

0x75f1,	// (0x00051bf1) list_single_graphic_heading_pane_g4

0x75d3,	// (0x00051bd3) list_single_graphic_heading_pane_g5_ParamLimits

0x75d3,	// (0x00051bd3) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00059bde) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00059bde) list_single_graphic_heading_pane_g

0x4c9e,	// (0x0004f29e) list_single_graphic_heading_pane_t1_ParamLimits

0x4c9e,	// (0x0004f29e) list_single_graphic_heading_pane_t1

0x4cf0,	// (0x0004f2f0) list_single_graphic_heading_pane_t2_ParamLimits

0x4cf0,	// (0x0004f2f0) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059be5) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059be5) list_single_graphic_heading_pane_t

0x7602,	// (0x00051c02) list_single_large_graphic_pane_g1_ParamLimits

0x7602,	// (0x00051c02) list_single_large_graphic_pane_g1

0x760e,	// (0x00051c0e) list_single_large_graphic_pane_g2_ParamLimits

0x760e,	// (0x00051c0e) list_single_large_graphic_pane_g2

0x761a,	// (0x00051c1a) list_single_large_graphic_pane_g3_ParamLimits

0x761a,	// (0x00051c1a) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00059bea) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00059bea) list_single_large_graphic_pane_g

0xa2b7,	// (0x000548b7) wait_border_pane_g2_copy1

0x7626,	// (0x00051c26) list_single_large_graphic_pane_g4_cp2

0x4d06,	// (0x0004f306) list_single_large_graphic_pane_t1_ParamLimits

0x4d06,	// (0x0004f306) list_single_large_graphic_pane_t1

0x8761,	// (0x00052d61) list_double_pane_g1_ParamLimits

0x8761,	// (0x00052d61) list_double_pane_g1

0x762e,	// (0x00051c2e) list_double_pane_g2_ParamLimits

0x762e,	// (0x00051c2e) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00059bf1) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00059bf1) list_double_pane_g

0x4d1c,	// (0x0004f31c) list_double_pane_t1_ParamLimits

0x4d1c,	// (0x0004f31c) list_double_pane_t1

0x4d32,	// (0x0004f332) list_double_pane_t2_ParamLimits

0x4d32,	// (0x0004f332) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00059bf6) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00059bf6) list_double_pane_t

0x4d44,	// (0x0004f344) list_double2_pane_g1_ParamLimits

0x4d44,	// (0x0004f344) list_double2_pane_g1

0x4d55,	// (0x0004f355) list_double2_pane_g2_ParamLimits

0x4d55,	// (0x0004f355) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00059bfb) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00059bfb) list_double2_pane_g

0x4d61,	// (0x0004f361) list_double2_pane_t1_ParamLimits

0x4d61,	// (0x0004f361) list_double2_pane_t1

0x4d77,	// (0x0004f377) list_double2_pane_t2_ParamLimits

0x4d77,	// (0x0004f377) list_double2_pane_t2

0x0001,

0xf600,	// (0x00059c00) list_double2_pane_t_ParamLimits

0xf600,	// (0x00059c00) list_double2_pane_t

0x8761,	// (0x00052d61) list_double_number_pane_g1_ParamLimits

0x8761,	// (0x00052d61) list_double_number_pane_g1

0x762e,	// (0x00051c2e) list_double_number_pane_g2_ParamLimits

0x762e,	// (0x00051c2e) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00059bf1) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00059bf1) list_double_number_pane_g

0x4d89,	// (0x0004f389) list_double_number_pane_t1_ParamLimits

0x4d89,	// (0x0004f389) list_double_number_pane_t1

0x4d9b,	// (0x0004f39b) list_double_number_pane_t2_ParamLimits

0x4d9b,	// (0x0004f39b) list_double_number_pane_t2

0x4db1,	// (0x0004f3b1) list_double_number_pane_t3_ParamLimits

0x4db1,	// (0x0004f3b1) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00059c05) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00059c05) list_double_number_pane_t

0x4dc3,	// (0x0004f3c3) list_double_graphic_pane_g1_ParamLimits

0x4dc3,	// (0x0004f3c3) list_double_graphic_pane_g1

0x4dcf,	// (0x0004f3cf) list_double_graphic_pane_g2_ParamLimits

0x4dcf,	// (0x0004f3cf) list_double_graphic_pane_g2

0x4dde,	// (0x0004f3de) list_double_graphic_pane_g3_ParamLimits

0x4dde,	// (0x0004f3de) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00059c0c) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00059c0c) list_double_graphic_pane_g

0x4df6,	// (0x0004f3f6) list_double_graphic_pane_t1_ParamLimits

0x4df6,	// (0x0004f3f6) list_double_graphic_pane_t1

0x4e0c,	// (0x0004f40c) list_double_graphic_pane_t2_ParamLimits

0x4e0c,	// (0x0004f40c) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00059c15) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00059c15) list_double_graphic_pane_t

0x4e1e,	// (0x0004f41e) list_double2_graphic_pane_g1_ParamLimits

0x4e1e,	// (0x0004f41e) list_double2_graphic_pane_g1

0x927f,	// (0x0005387f) list_double2_graphic_pane_g2_ParamLimits

0x927f,	// (0x0005387f) list_double2_graphic_pane_g2

0x763a,	// (0x00051c3a) list_double2_graphic_pane_g3_ParamLimits

0x763a,	// (0x00051c3a) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00059c1a) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00059c1a) list_double2_graphic_pane_g

0x4e2a,	// (0x0004f42a) list_double2_graphic_pane_t1_ParamLimits

0x4e2a,	// (0x0004f42a) list_double2_graphic_pane_t1

0x4e40,	// (0x0004f440) list_double2_graphic_pane_t2_ParamLimits

0x4e40,	// (0x0004f440) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00059c21) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00059c21) list_double2_graphic_pane_t

0x4e52,	// (0x0004f452) list_double_large_graphic_pane_g1_ParamLimits

0x4e52,	// (0x0004f452) list_double_large_graphic_pane_g1

0x4e71,	// (0x0004f471) list_double_large_graphic_pane_g2_ParamLimits

0x4e71,	// (0x0004f471) list_double_large_graphic_pane_g2

0x762e,	// (0x00051c2e) list_double_large_graphic_pane_g3_ParamLimits

0x762e,	// (0x00051c2e) list_double_large_graphic_pane_g3

0x4e87,	// (0x0004f487) list_double_large_graphic_pane_g4_ParamLimits

0x4e87,	// (0x0004f487) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00059c26) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00059c26) list_double_large_graphic_pane_g

0x4e98,	// (0x0004f498) list_double_large_graphic_pane_t1_ParamLimits

0x4e98,	// (0x0004f498) list_double_large_graphic_pane_t1

0x4eb1,	// (0x0004f4b1) list_double_large_graphic_pane_t2_ParamLimits

0x4eb1,	// (0x0004f4b1) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00059c31) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00059c31) list_double_large_graphic_pane_t

0x765b,	// (0x00051c5b) list_double2_large_graphic_pane_g1_ParamLimits

0x765b,	// (0x00051c5b) list_double2_large_graphic_pane_g1

0x4ec3,	// (0x0004f4c3) list_double2_large_graphic_pane_g2_ParamLimits

0x4ec3,	// (0x0004f4c3) list_double2_large_graphic_pane_g2

0x763a,	// (0x00051c3a) list_double2_large_graphic_pane_g3_ParamLimits

0x763a,	// (0x00051c3a) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00059c36) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00059c36) list_double2_large_graphic_pane_g

0x4ed4,	// (0x0004f4d4) list_double2_large_graphic_pane_t1_ParamLimits

0x4ed4,	// (0x0004f4d4) list_double2_large_graphic_pane_t1

0x4eea,	// (0x0004f4ea) list_double2_large_graphic_pane_t2_ParamLimits

0x4eea,	// (0x0004f4ea) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059c3d) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059c3d) list_double2_large_graphic_pane_t

0x4efc,	// (0x0004f4fc) list_double_heading_pane_g1_ParamLimits

0x4efc,	// (0x0004f4fc) list_double_heading_pane_g1

0x7667,	// (0x00051c67) list_double_heading_pane_g2_ParamLimits

0x7667,	// (0x00051c67) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00059c42) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00059c42) list_double_heading_pane_g

0x4f0d,	// (0x0004f50d) list_double_heading_pane_t1_ParamLimits

0x4f0d,	// (0x0004f50d) list_double_heading_pane_t1

0x4d77,	// (0x0004f377) list_double_heading_pane_t2_ParamLimits

0x4d77,	// (0x0004f377) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00059c47) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00059c47) list_double_heading_pane_t

0x4f23,	// (0x0004f523) list_double_graphic_heading_pane_g1_ParamLimits

0x4f23,	// (0x0004f523) list_double_graphic_heading_pane_g1

0x4efc,	// (0x0004f4fc) list_double_graphic_heading_pane_g2_ParamLimits

0x4efc,	// (0x0004f4fc) list_double_graphic_heading_pane_g2

0x7667,	// (0x00051c67) list_double_graphic_heading_pane_g3_ParamLimits

0x7667,	// (0x00051c67) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00059c4c) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00059c4c) list_double_graphic_heading_pane_g

0x4f2f,	// (0x0004f52f) list_double_graphic_heading_pane_t1_ParamLimits

0x4f2f,	// (0x0004f52f) list_double_graphic_heading_pane_t1

0x4e40,	// (0x0004f440) list_double_graphic_heading_pane_t2_ParamLimits

0x4e40,	// (0x0004f440) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00059c53) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00059c53) list_double_graphic_heading_pane_t

0x4f45,	// (0x0004f545) list_double_time_pane_g1_ParamLimits

0x4f45,	// (0x0004f545) list_double_time_pane_g1

0x4f56,	// (0x0004f556) list_double_time_pane_g2_ParamLimits

0x4f56,	// (0x0004f556) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00059c58) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00059c58) list_double_time_pane_g

0x4f62,	// (0x0004f562) list_double_time_pane_t1_ParamLimits

0x4f62,	// (0x0004f562) list_double_time_pane_t1

0x4f78,	// (0x0004f578) list_double_time_pane_t2_ParamLimits

0x4f78,	// (0x0004f578) list_double_time_pane_t2

0x4f8a,	// (0x0004f58a) list_double_time_pane_t3_ParamLimits

0x4f8a,	// (0x0004f58a) list_double_time_pane_t3

0x4f9c,	// (0x0004f59c) list_double_time_pane_t4_ParamLimits

0x4f9c,	// (0x0004f59c) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00059c5d) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00059c5d) list_double_time_pane_t

0x4fae,	// (0x0004f5ae) list_setting_pane_g1_ParamLimits

0x4fae,	// (0x0004f5ae) list_setting_pane_g1

0x4d55,	// (0x0004f355) list_setting_pane_g2_ParamLimits

0x4d55,	// (0x0004f355) list_setting_pane_g2

0x0001,

0xf666,	// (0x00059c66) list_setting_pane_g_ParamLimits

0xf666,	// (0x00059c66) list_setting_pane_g

0x4fba,	// (0x0004f5ba) list_setting_pane_t1_ParamLimits

0x4fba,	// (0x0004f5ba) list_setting_pane_t1

0x4fd4,	// (0x0004f5d4) list_setting_pane_t2_ParamLimits

0x4fd4,	// (0x0004f5d4) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00059c6b) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00059c6b) list_setting_pane_t

0x5013,	// (0x0004f613) set_value_pane_cp_ParamLimits

0x5013,	// (0x0004f613) set_value_pane_cp

0x501f,	// (0x0004f61f) list_setting_number_pane_g1_ParamLimits

0x501f,	// (0x0004f61f) list_setting_number_pane_g1

0x502b,	// (0x0004f62b) list_setting_number_pane_g2_ParamLimits

0x502b,	// (0x0004f62b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00059c72) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00059c72) list_setting_number_pane_g

0x5037,	// (0x0004f637) list_setting_number_pane_t1_ParamLimits

0x5037,	// (0x0004f637) list_setting_number_pane_t1

0x5050,	// (0x0004f650) list_setting_number_pane_t2_ParamLimits

0x5050,	// (0x0004f650) list_setting_number_pane_t2

0x506a,	// (0x0004f66a) list_setting_number_pane_t3_ParamLimits

0x506a,	// (0x0004f66a) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00059c77) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00059c77) list_setting_number_pane_t

0x5013,	// (0x0004f613) set_value_pane_ParamLimits

0x5013,	// (0x0004f613) set_value_pane

0x876d,	// (0x00052d6d) bg_set_opt_pane_ParamLimits

0x876d,	// (0x00052d6d) bg_set_opt_pane

0x50ad,	// (0x0004f6ad) set_value_pane_t1

0x878e,	// (0x00052d8e) slider_set_pane_cp3

0x8797,	// (0x00052d97) volume_small_pane_cp

0x87a0,	// (0x00052da0) list_form_gen_pane

0x87a9,	// (0x00052da9) scroll_pane_cp8

0x50c3,	// (0x0004f6c3) form_field_data_pane_ParamLimits

0x50c3,	// (0x0004f6c3) form_field_data_pane

0x50e7,	// (0x0004f6e7) form_field_data_wide_pane_ParamLimits

0x50e7,	// (0x0004f6e7) form_field_data_wide_pane

0x510a,	// (0x0004f70a) form_field_popup_pane_ParamLimits

0x510a,	// (0x0004f70a) form_field_popup_pane

0x512a,	// (0x0004f72a) form_field_popup_wide_pane_ParamLimits

0x512a,	// (0x0004f72a) form_field_popup_wide_pane

0x5149,	// (0x0004f749) form_field_slider_pane_ParamLimits

0x5149,	// (0x0004f749) form_field_slider_pane

0x515c,	// (0x0004f75c) form_field_slider_wide_pane_ParamLimits

0x515c,	// (0x0004f75c) form_field_slider_wide_pane

0x87ba,	// (0x00052dba) data_form_pane

0x5179,	// (0x0004f779) form_field_data_pane_t1

0x87c6,	// (0x00052dc6) input_focus_pane

0x5191,	// (0x0004f791) data_form_wide_pane

0x51ae,	// (0x0004f7ae) form_field_data_wide_pane_t1

0x852b,	// (0x00052b2b) input_focus_pane_cp6

0x51d0,	// (0x0004f7d0) form_field_popup_pane_t1

0x87c6,	// (0x00052dc6) input_focus_pane_cp7

0x87e8,	// (0x00052de8) list_form_pane

0x51f0,	// (0x0004f7f0) form_field_popup_wide_pane_t1

0x87c6,	// (0x00052dc6) input_focus_pane_cp8

0x87f4,	// (0x00052df4) list_form_wide_pane

0x520d,	// (0x0004f80d) form_field_slider_pane_t1_ParamLimits

0x520d,	// (0x0004f80d) form_field_slider_pane_t1

0x5223,	// (0x0004f823) form_field_slider_pane_t2_ParamLimits

0x5223,	// (0x0004f823) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00059c87) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00059c87) form_field_slider_pane_t

0x81a0,	// (0x000527a0) input_focus_pane_cp9_ParamLimits

0x81a0,	// (0x000527a0) input_focus_pane_cp9

0x5238,	// (0x0004f838) slider_cont_pane_ParamLimits

0x5238,	// (0x0004f838) slider_cont_pane

0x8800,	// (0x00052e00) form_field_slider_wide_pane_t1_ParamLimits

0x8800,	// (0x00052e00) form_field_slider_wide_pane_t1

0x524c,	// (0x0004f84c) form_field_slider_wide_pane_t2_ParamLimits

0x524c,	// (0x0004f84c) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00059c8c) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00059c8c) form_field_slider_wide_pane_t

0x81a0,	// (0x000527a0) input_focus_pane_cp10_ParamLimits

0x81a0,	// (0x000527a0) input_focus_pane_cp10

0x525e,	// (0x0004f85e) slider_cont_pane_cp1_ParamLimits

0x525e,	// (0x0004f85e) slider_cont_pane_cp1

0x5272,	// (0x0004f872) slider_form_pane_cp

0x8812,	// (0x00052e12) input_focus_pane_g1

0x881a,	// (0x00052e1a) input_focus_pane_g2

0x8822,	// (0x00052e22) input_focus_pane_g3

0x882a,	// (0x00052e2a) input_focus_pane_g4

0x8832,	// (0x00052e32) input_focus_pane_g5

0x883a,	// (0x00052e3a) input_focus_pane_g6

0x8842,	// (0x00052e42) input_focus_pane_g7

0x884a,	// (0x00052e4a) input_focus_pane_g8

0x8852,	// (0x00052e52) input_focus_pane_g9

0x7515,	// (0x00051b15) input_focus_pane_g10

0x0009,

0xf691,	// (0x00059c91) input_focus_pane_g

0xa2c0,	// (0x000548c0) wait_border_pane_g3_copy1

0x527a,	// (0x0004f87a) data_form_pane_t1

0x7515,	// (0x00051b15) wait_anim_pane_g1_copy1

0x63df,	// (0x000509df) data_form_wide_pane_t1

0x5295,	// (0x0004f895) list_form_graphic_pane_cp_ParamLimits

0x5295,	// (0x0004f895) list_form_graphic_pane_cp

0xb1d5,	// (0x000557d5) slider_form_pane_g1

0xb1de,	// (0x000557de) slider_form_pane_g2

0x0006,

0xf994,	// (0x00059f94) slider_form_pane_g

0x52ae,	// (0x0004f8ae) list_form_graphic_pane_ParamLimits

0x52ae,	// (0x0004f8ae) list_form_graphic_pane

0x52ca,	// (0x0004f8ca) list_form_graphic_pane_g1

0x52d2,	// (0x0004f8d2) list_form_graphic_pane_t1_ParamLimits

0x52d2,	// (0x0004f8d2) list_form_graphic_pane_t1

0x7f25,	// (0x00052525) list_highlight_pane_cp5_ParamLimits

0x7f25,	// (0x00052525) list_highlight_pane_cp5

0x52e7,	// (0x0004f8e7) find_pane_g1

0x885a,	// (0x00052e5a) input_find_pane

0x52f0,	// (0x0004f8f0) input_find_pane_g1_ParamLimits

0x52f0,	// (0x0004f8f0) input_find_pane_g1

0x52fc,	// (0x0004f8fc) input_find_pane_t1_ParamLimits

0x52fc,	// (0x0004f8fc) input_find_pane_t1

0x5311,	// (0x0004f911) input_find_pane_t2_ParamLimits

0x5311,	// (0x0004f911) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00059ca6) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00059ca6) input_find_pane_t

0x8863,	// (0x00052e63) input_focus_pane_cp5_ParamLimits

0x8863,	// (0x00052e63) input_focus_pane_cp5

0x887d,	// (0x00052e7d) bg_popup_window_pane_cp2_ParamLimits

0x887d,	// (0x00052e7d) bg_popup_window_pane_cp2

0x888a,	// (0x00052e8a) listscroll_menu_pane_ParamLimits

0x888a,	// (0x00052e8a) listscroll_menu_pane

0x8896,	// (0x00052e96) popup_submenu_window_ParamLimits

0x8896,	// (0x00052e96) popup_submenu_window

0x88c2,	// (0x00052ec2) find_popup_pane_g1

0x88ca,	// (0x00052eca) input_popup_find_pane_cp

0x8863,	// (0x00052e63) input_focus_pane_cp4_ParamLimits

0x8863,	// (0x00052e63) input_focus_pane_cp4

0x88e0,	// (0x00052ee0) input_popup_find_pane_t1_ParamLimits

0x88e0,	// (0x00052ee0) input_popup_find_pane_t1

0x751f,	// (0x00051b1f) bg_popup_sub_pane_cp

0x890e,	// (0x00052f0e) listscroll_popup_sub_pane

0x8916,	// (0x00052f16) list_submenu_pane_ParamLimits

0x8916,	// (0x00052f16) list_submenu_pane

0x8927,	// (0x00052f27) scroll_pane_cp4

0x892f,	// (0x00052f2f) list_single_popup_submenu_pane_ParamLimits

0x892f,	// (0x00052f2f) list_single_popup_submenu_pane

0x8943,	// (0x00052f43) list_single_popup_submenu_pane_g1

0x894b,	// (0x00052f4b) list_single_popup_submenu_pane_t1_ParamLimits

0x894b,	// (0x00052f4b) list_single_popup_submenu_pane_t1

0x7f25,	// (0x00052525) bg_active_tab_pane_cp1_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp1

0x8960,	// (0x00052f60) tabs_2_active_pane_g1

0x8968,	// (0x00052f68) tabs_2_active_pane_t1

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp1_ParamLimits

0x7f25,	// (0x00052525) bg_passive_tab_pane_cp1

0x8960,	// (0x00052f60) tabs_2_passive_pane_g1

0x8968,	// (0x00052f68) tabs_2_passive_pane_t1

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp4

0x8988,	// (0x00052f88) tabs_2_long_active_pane_t1

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp4

0x5fd7,	// (0x000505d7) list_single_midp_graphic_pane_g4_ParamLimits

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp5

0x89a7,	// (0x00052fa7) tabs_3_long_active_pane_t1

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp5

0x5fd7,	// (0x000505d7) list_single_midp_graphic_pane_g4

0x7f25,	// (0x00052525) bg_popup_window_pane_cp13_ParamLimits

0x7f25,	// (0x00052525) bg_popup_window_pane_cp13

0x89c2,	// (0x00052fc2) listscroll_popup_fast_pane_ParamLimits

0x89c2,	// (0x00052fc2) listscroll_popup_fast_pane

0x89d1,	// (0x00052fd1) grid_popup_fast_pane_ParamLimits

0x89d1,	// (0x00052fd1) grid_popup_fast_pane

0x89e3,	// (0x00052fe3) scroll_pane_cp9_ParamLimits

0x89e3,	// (0x00052fe3) scroll_pane_cp9

0xca7f,	// (0x0005707f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca7f,	// (0x0005707f) list_single_graphic_hl_pane_t1_cp2

0x8a07,	// (0x00053007) input_focus_pane_cp20_ParamLimits

0x8a07,	// (0x00053007) input_focus_pane_cp20

0x8a15,	// (0x00053015) query_popup_data_pane_t1_ParamLimits

0x8a15,	// (0x00053015) query_popup_data_pane_t1

0x8a28,	// (0x00053028) query_popup_data_pane_t2_ParamLimits

0x8a28,	// (0x00053028) query_popup_data_pane_t2

0x8a6e,	// (0x0005306e) query_popup_data_pane_t3_ParamLimits

0x8a6e,	// (0x0005306e) query_popup_data_pane_t3

0x8aaf,	// (0x000530af) query_popup_data_pane_t4_ParamLimits

0x8aaf,	// (0x000530af) query_popup_data_pane_t4

0x8aeb,	// (0x000530eb) query_popup_data_pane_t5_ParamLimits

0x8aeb,	// (0x000530eb) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00059cab) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00059cab) query_popup_data_pane_t

0x8812,	// (0x00052e12) bg_set_opt_pane_g1

0x881a,	// (0x00052e1a) bg_set_opt_pane_g2

0x8822,	// (0x00052e22) bg_set_opt_pane_g3

0x882a,	// (0x00052e2a) bg_set_opt_pane_g4

0x8832,	// (0x00052e32) bg_set_opt_pane_g5

0x883a,	// (0x00052e3a) bg_set_opt_pane_g6

0x8842,	// (0x00052e42) bg_set_opt_pane_g7

0x884a,	// (0x00052e4a) bg_set_opt_pane_g8

0x8852,	// (0x00052e52) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00059cb6) bg_set_opt_pane_g

0x5631,	// (0x0004fc31) control_top_pane_stacon_ParamLimits

0x5631,	// (0x0004fc31) control_top_pane_stacon

0x5684,	// (0x0004fc84) signal_pane_stacon_ParamLimits

0x5684,	// (0x0004fc84) signal_pane_stacon

0x90dd,	// (0x000536dd) stacon_top_pane_g1_ParamLimits

0x90dd,	// (0x000536dd) stacon_top_pane_g1

0x56a9,	// (0x0004fca9) title_pane_stacon_ParamLimits

0x56a9,	// (0x0004fca9) title_pane_stacon

0x56d3,	// (0x0004fcd3) uni_indicator_pane_stacon_ParamLimits

0x56d3,	// (0x0004fcd3) uni_indicator_pane_stacon

0x56e8,	// (0x0004fce8) battery_pane_stacon_ParamLimits

0x56e8,	// (0x0004fce8) battery_pane_stacon

0x572c,	// (0x0004fd2c) control_bottom_pane_stacon_ParamLimits

0x572c,	// (0x0004fd2c) control_bottom_pane_stacon

0x574f,	// (0x0004fd4f) navi_pane_stacon_ParamLimits

0x574f,	// (0x0004fd4f) navi_pane_stacon

0x90ff,	// (0x000536ff) stacon_bottom_pane_g1_ParamLimits

0x90ff,	// (0x000536ff) stacon_bottom_pane_g1

0x5326,	// (0x0004f926) aid_levels_signal_lsc_ParamLimits

0x5326,	// (0x0004f926) aid_levels_signal_lsc

0x533c,	// (0x0004f93c) signal_pane_stacon_g1_ParamLimits

0x533c,	// (0x0004f93c) signal_pane_stacon_g1

0x5350,	// (0x0004f950) signal_pane_stacon_g2_ParamLimits

0x5350,	// (0x0004f950) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00059cc9) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00059cc9) signal_pane_stacon_g

0x5385,	// (0x0004f985) title_pane_stacon_t1_ParamLimits

0x5385,	// (0x0004f985) title_pane_stacon_t1

0x8b2f,	// (0x0005312f) uni_indicator_pane_stacon_g1

0x8b39,	// (0x00053139) uni_indicator_pane_stacon_g2

0x8b43,	// (0x00053143) uni_indicator_pane_stacon_g3

0x8b4d,	// (0x0005314d) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00059cd5) uni_indicator_pane_stacon_g

0x53aa,	// (0x0004f9aa) control_top_pane_stacon_g1

0x53b2,	// (0x0004f9b2) control_top_pane_stacon_t1_ParamLimits

0x53b2,	// (0x0004f9b2) control_top_pane_stacon_t1

0x53e9,	// (0x0004f9e9) aid_levels_battery_lsc_ParamLimits

0x53e9,	// (0x0004f9e9) aid_levels_battery_lsc

0x5400,	// (0x0004fa00) battery_pane_stacon_g1_ParamLimits

0x5400,	// (0x0004fa00) battery_pane_stacon_g1

0x5413,	// (0x0004fa13) battery_pane_stacon_g2_ParamLimits

0x5413,	// (0x0004fa13) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00059cde) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00059cde) battery_pane_stacon_g

0x5451,	// (0x0004fa51) navi_icon_pane_stacon

0x5465,	// (0x0004fa65) navi_navi_pane_stacon

0x5451,	// (0x0004fa51) navi_text_pane_stacon

0x53aa,	// (0x0004f9aa) control_bottom_pane_stacon_g1

0x5479,	// (0x0004fa79) control_bottom_pane_stacon_t1_ParamLimits

0x5479,	// (0x0004fa79) control_bottom_pane_stacon_t1

0x8b71,	// (0x00053171) grid_app_pane_ParamLimits

0x8b71,	// (0x00053171) grid_app_pane

0x8b93,	// (0x00053193) scroll_pane_cp15_ParamLimits

0x8b93,	// (0x00053193) scroll_pane_cp15

0x8ba6,	// (0x000531a6) cell_app_pane_ParamLimits

0x8ba6,	// (0x000531a6) cell_app_pane

0x8bce,	// (0x000531ce) cell_app_pane_g1_ParamLimits

0x8bce,	// (0x000531ce) cell_app_pane_g1

0x8bf2,	// (0x000531f2) cell_app_pane_g2_ParamLimits

0x8bf2,	// (0x000531f2) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00059ce3) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00059ce3) cell_app_pane_g

0x8bfe,	// (0x000531fe) cell_app_pane_t1_ParamLimits

0x8bfe,	// (0x000531fe) cell_app_pane_t1

0x8c15,	// (0x00053215) grid_highlight_pane_ParamLimits

0x8c15,	// (0x00053215) grid_highlight_pane

0x8812,	// (0x00052e12) cell_highlight_pane_g1

0x881a,	// (0x00052e1a) cell_highlight_pane_g2

0x8822,	// (0x00052e22) cell_highlight_pane_g3

0x882a,	// (0x00052e2a) cell_highlight_pane_g4

0x8832,	// (0x00052e32) cell_highlight_pane_g5

0x883a,	// (0x00052e3a) cell_highlight_pane_g6

0x8842,	// (0x00052e42) cell_highlight_pane_g7

0x884a,	// (0x00052e4a) cell_highlight_pane_g8

0x8852,	// (0x00052e52) cell_highlight_pane_g9

0x7515,	// (0x00051b15) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00059c91) cell_highlight_pane_g

0x8c26,	// (0x00053226) bg_scroll_pane

0x54c3,	// (0x0004fac3) scroll_handle_pane

0x8c6d,	// (0x0005326d) scroll_bg_pane_g1

0x8c82,	// (0x00053282) scroll_bg_pane_g2

0x8c9a,	// (0x0005329a) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00059ce8) scroll_bg_pane_g

0x8caf,	// (0x000532af) scroll_handle_focus_pane_ParamLimits

0x8caf,	// (0x000532af) scroll_handle_focus_pane

0x8c6d,	// (0x0005326d) scroll_handle_pane_g1

0x8cbc,	// (0x000532bc) scroll_handle_pane_g2

0x8c9a,	// (0x0005329a) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00059cef) scroll_handle_pane_g

0x8863,	// (0x00052e63) bg_popup_sub_pane_cp21_ParamLimits

0x8863,	// (0x00052e63) bg_popup_sub_pane_cp21

0x8cd0,	// (0x000532d0) popup_fep_japan_predictive_window_t1_ParamLimits

0x8cd0,	// (0x000532d0) popup_fep_japan_predictive_window_t1

0x8cea,	// (0x000532ea) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cea,	// (0x000532ea) popup_fep_japan_predictive_window_t2

0x8d1d,	// (0x0005331d) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d1d,	// (0x0005331d) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059cf6) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059cf6) popup_fep_japan_predictive_window_t

0x751f,	// (0x00051b1f) bg_popup_sub_pane_cp23

0x8d54,	// (0x00053354) listscroll_japin_cand_pane

0x8d5c,	// (0x0005335c) popup_fep_japan_candidate_window_t1

0x8d6a,	// (0x0005336a) candidate_pane_ParamLimits

0x8d6a,	// (0x0005336a) candidate_pane

0x8d7c,	// (0x0005337c) scroll_pane_cp30

0x8d84,	// (0x00053384) list_single_popup_jap_candidate_pane_ParamLimits

0x8d84,	// (0x00053384) list_single_popup_jap_candidate_pane

0x751f,	// (0x00051b1f) list_highlight_pane_cp30

0x8d99,	// (0x00053399) list_single_popup_jap_candidate_pane_t1

0x8da8,	// (0x000533a8) level_1_signal

0x8dba,	// (0x000533ba) level_2_signal

0x8dcd,	// (0x000533cd) level_3_signal

0x8de0,	// (0x000533e0) level_4_signal

0x8df3,	// (0x000533f3) level_5_signal

0x8e06,	// (0x00053406) level_6_signal

0x8e19,	// (0x00053419) level_7_signal

0x8da8,	// (0x000533a8) level_1_battery

0x8dba,	// (0x000533ba) level_2_battery

0x8dcd,	// (0x000533cd) level_3_battery

0x8de0,	// (0x000533e0) level_4_battery

0x8df3,	// (0x000533f3) level_5_battery

0x8e06,	// (0x00053406) level_6_battery

0x8e19,	// (0x00053419) level_7_battery

0x8e44,	// (0x00053444) list_menu_pane_ParamLimits

0x8e44,	// (0x00053444) list_menu_pane

0x8e5a,	// (0x0005345a) scroll_pane_cp25_ParamLimits

0x8e5a,	// (0x0005345a) scroll_pane_cp25

0x8e73,	// (0x00053473) list_double2_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double2_graphic_pane_cp2

0x8e73,	// (0x00053473) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double2_large_graphic_pane_cp2

0x8e73,	// (0x00053473) list_double2_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double2_pane_cp2

0x8e73,	// (0x00053473) list_double_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double_graphic_pane_cp2

0x8e73,	// (0x00053473) list_double_large_graphic_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double_large_graphic_pane_cp2

0x8e73,	// (0x00053473) list_double_number_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double_number_pane_cp2

0x8e73,	// (0x00053473) list_double_pane_cp2_ParamLimits

0x8e73,	// (0x00053473) list_double_pane_cp2

0x8e97,	// (0x00053497) list_single_2graphic_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_2graphic_pane_cp2

0x8e97,	// (0x00053497) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_graphic_heading_pane_cp2

0x8e97,	// (0x00053497) list_single_graphic_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_graphic_pane_cp2

0x8e97,	// (0x00053497) list_single_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_heading_pane_cp2

0x8eb0,	// (0x000534b0) list_single_large_graphic_pane_cp2_ParamLimits

0x8eb0,	// (0x000534b0) list_single_large_graphic_pane_cp2

0x8e97,	// (0x00053497) list_single_number_heading_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_number_heading_pane_cp2

0x8e97,	// (0x00053497) list_single_number_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_number_pane_cp2

0x8e97,	// (0x00053497) list_single_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_pane_cp2

0x8f2c,	// (0x0005352c) bg_popup_sub_pane_cp22

0x5575,	// (0x0004fb75) popup_side_volume_key_window_g1

0x559f,	// (0x0004fb9f) popup_side_volume_key_window_t1

0x55bb,	// (0x0004fbbb) volume_small_pane_cp1

0x81a0,	// (0x000527a0) bg_popup_sub_pane_cp24_ParamLimits

0x81a0,	// (0x000527a0) bg_popup_sub_pane_cp24

0x8f42,	// (0x00053542) fep_china_uni_candidate_pane_ParamLimits

0x8f42,	// (0x00053542) fep_china_uni_candidate_pane

0x8f56,	// (0x00053556) fep_china_uni_entry_pane

0x8f66,	// (0x00053566) popup_fep_china_uni_window_g1

0x8f82,	// (0x00053582) fep_china_uni_entry_pane_g1

0x8f8a,	// (0x0005358a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059d27) fep_china_uni_entry_pane_g

0x8f92,	// (0x00053592) fep_entry_item_pane

0x8f9c,	// (0x0005359c) fep_candidate_item_pane

0x8fa4,	// (0x000535a4) fep_china_uni_candidate_pane_g1

0x8fac,	// (0x000535ac) fep_china_uni_candidate_pane_g2

0x8fb4,	// (0x000535b4) fep_china_uni_candidate_pane_g3

0x8fbc,	// (0x000535bc) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00059d2c) fep_china_uni_candidate_pane_g

0x7515,	// (0x00051b15) fep_entry_item_pane_g1

0x8fc4,	// (0x000535c4) fep_entry_item_pane_t1_ParamLimits

0x8fc4,	// (0x000535c4) fep_entry_item_pane_t1

0x8fda,	// (0x000535da) fep_candidate_item_pane_t1_ParamLimits

0x8fda,	// (0x000535da) fep_candidate_item_pane_t1

0x8fef,	// (0x000535ef) fep_candidate_item_pane_t2_ParamLimits

0x8fef,	// (0x000535ef) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059d35) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059d35) fep_candidate_item_pane_t

0x7f25,	// (0x00052525) list_highlight_pane_cp31_ParamLimits

0x7f25,	// (0x00052525) list_highlight_pane_cp31

0x9001,	// (0x00053601) level_1_signal_lsc

0x900a,	// (0x0005360a) level_2_signal_lsc

0x9013,	// (0x00053613) level_3_signal_lsc

0x901c,	// (0x0005361c) level_4_signal_lsc

0x9025,	// (0x00053625) level_5_signal_lsc

0x902e,	// (0x0005362e) level_6_signal_lsc

0x9037,	// (0x00053637) level_7_signal_lsc

0x9037,	// (0x00053637) level_1_battery_lsc

0x9040,	// (0x00053640) level_2_battery_lsc

0x9049,	// (0x00053649) level_3_battery_lsc

0x9052,	// (0x00053652) level_4_battery_lsc

0x905b,	// (0x0005365b) level_5_battery_lsc

0x9064,	// (0x00053664) level_6_battery_lsc

0x9001,	// (0x00053601) level_7_battery_lsc

0x906d,	// (0x0005366d) scroll_handle_focus_pane_g1

0x9076,	// (0x00053676) scroll_handle_focus_pane_g2

0x907f,	// (0x0005367f) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00059d3a) scroll_handle_focus_pane_g

0x55c3,	// (0x0004fbc3) list_single_2graphic_pane_g1_ParamLimits

0x55c3,	// (0x0004fbc3) list_single_2graphic_pane_g1

0x75f1,	// (0x00051bf1) list_single_2graphic_pane_g2_ParamLimits

0x75f1,	// (0x00051bf1) list_single_2graphic_pane_g2

0x75d3,	// (0x00051bd3) list_single_2graphic_pane_g3_ParamLimits

0x75d3,	// (0x00051bd3) list_single_2graphic_pane_g3

0x55cf,	// (0x0004fbcf) list_single_2graphic_pane_g4_ParamLimits

0x55cf,	// (0x0004fbcf) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00059d41) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00059d41) list_single_2graphic_pane_g

0x55db,	// (0x0004fbdb) list_single_2graphic_pane_t1_ParamLimits

0x55db,	// (0x0004fbdb) list_single_2graphic_pane_t1

0x7673,	// (0x00051c73) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7673,	// (0x00051c73) list_double2_graphic_large_graphic_pane_g1

0x4ec3,	// (0x0004f4c3) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ec3,	// (0x0004f4c3) list_double2_graphic_large_graphic_pane_g2

0x763a,	// (0x00051c3a) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x763a,	// (0x00051c3a) list_double2_graphic_large_graphic_pane_g3

0x7683,	// (0x00051c83) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7683,	// (0x00051c83) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00059d4a) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00059d4a) list_double2_graphic_large_graphic_pane_g

0x5609,	// (0x0004fc09) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5609,	// (0x0004fc09) list_double2_graphic_large_graphic_pane_t1

0x561f,	// (0x0004fc1f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x561f,	// (0x0004fc1f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00059d53) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00059d53) list_double2_graphic_large_graphic_pane_t

0x91c7,	// (0x000537c7) popup_fast_swap_window_ParamLimits

0x91c7,	// (0x000537c7) popup_fast_swap_window

0x91e3,	// (0x000537e3) popup_side_volume_key_window

0x91ff,	// (0x000537ff) stacon_top_pane

0x9209,	// (0x00053809) status_pane_ParamLimits

0x9209,	// (0x00053809) status_pane

0x9217,	// (0x00053817) status_small_pane

0x751f,	// (0x00051b1f) control_pane

0x751f,	// (0x00051b1f) stacon_bottom_pane

0x87a9,	// (0x00052da9) scroll_pane_cp121

0x87a0,	// (0x00052da0) set_content_pane

0x9088,	// (0x00053688) bg_active_tab_pane_g1_cp1

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp1

0x909a,	// (0x0005369a) bg_active_tab_pane_g3_cp1

0x9088,	// (0x00053688) bg_passive_tab_pane_g1_cp1

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp1

0x909a,	// (0x0005369a) bg_passive_tab_pane_g3_cp1

0x90a3,	// (0x000536a3) bg_active_tab_pane_g1_cp2

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp2

0x90ac,	// (0x000536ac) bg_active_tab_pane_g3_cp2

0x90a3,	// (0x000536a3) bg_passive_tab_pane_g1_cp2

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp2

0x90ac,	// (0x000536ac) bg_passive_tab_pane_g3_cp2

0x90b5,	// (0x000536b5) bg_active_tab_pane_g1_cp3

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp3

0x90be,	// (0x000536be) bg_active_tab_pane_g3_cp3

0x90b5,	// (0x000536b5) bg_passive_tab_pane_g1_cp3

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp3

0x90be,	// (0x000536be) bg_passive_tab_pane_g3_cp3

0x90c7,	// (0x000536c7) bg_active_tab_pane_g1_cp4

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp4

0x90d2,	// (0x000536d2) bg_active_tab_pane_g3_cp4

0x90c7,	// (0x000536c7) bg_passive_tab_pane_g1_cp4

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp4

0x90d2,	// (0x000536d2) bg_passive_tab_pane_g3_cp4

0x911b,	// (0x0005371b) bg_active_tab_pane_g1_cp5

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp5

0x9124,	// (0x00053724) bg_active_tab_pane_g3_cp5

0x911b,	// (0x0005371b) bg_passive_tab_pane_g1_cp5

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp5

0x9124,	// (0x00053724) bg_passive_tab_pane_g3_cp5

0x912d,	// (0x0005372d) list_set_graphic_pane_ParamLimits

0x912d,	// (0x0005372d) list_set_graphic_pane

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp4

0x914a,	// (0x0005374a) list_set_graphic_pane_g1_ParamLimits

0x914a,	// (0x0005374a) list_set_graphic_pane_g1

0x9156,	// (0x00053756) list_set_graphic_pane_g2_ParamLimits

0x9156,	// (0x00053756) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00059d58) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00059d58) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0005a0cd) volume_small_pane_cp_g

0x917a,	// (0x0005377a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x917a,	// (0x0005377a) list_double2_large_graphic_pane_g1_cp2

0x9186,	// (0x00053786) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9186,	// (0x00053786) list_double2_large_graphic_pane_g2_cp2

0x9197,	// (0x00053797) list_double2_large_graphic_pane_g3_cp2

0x919f,	// (0x0005379f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x919f,	// (0x0005379f) list_double2_large_graphic_pane_t1_cp2

0x91b5,	// (0x000537b5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91b5,	// (0x000537b5) list_double2_large_graphic_pane_t2_cp2

0xad93,	// (0x00055393) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad93,	// (0x00055393) list_double_large_graphic_pane_g1_cp2

0xada4,	// (0x000553a4) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xada4,	// (0x000553a4) list_double_large_graphic_pane_g2_cp2

0x933c,	// (0x0005393c) list_double_large_graphic_pane_g3_cp2

0xadb5,	// (0x000553b5) list_double_large_graphic_pane_g4_cp

0xadbd,	// (0x000553bd) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadbd,	// (0x000553bd) list_double_large_graphic_pane_t1_cp2

0xadd4,	// (0x000553d4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xadd4,	// (0x000553d4) list_double_large_graphic_pane_t2_cp2

0x9222,	// (0x00053822) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9222,	// (0x00053822) list_double2_graphic_pane_g1_cp2

0x9230,	// (0x00053830) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9230,	// (0x00053830) list_double2_graphic_pane_g2_cp2

0x9241,	// (0x00053841) list_double2_graphic_pane_g3_cp2

0x924b,	// (0x0005384b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x924b,	// (0x0005384b) list_double2_graphic_pane_t1_cp2

0x9261,	// (0x00053861) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9261,	// (0x00053861) list_double2_graphic_pane_t2_cp2

0x9273,	// (0x00053873) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9273,	// (0x00053873) list_single_number_heading_pane_g1_cp2

0x928b,	// (0x0005388b) list_single_number_heading_pane_g2_cp2

0x9293,	// (0x00053893) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9293,	// (0x00053893) list_single_number_heading_pane_t1_cp2

0x92a9,	// (0x000538a9) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92a9,	// (0x000538a9) list_single_number_heading_pane_t2_cp2

0x92bb,	// (0x000538bb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92bb,	// (0x000538bb) list_single_number_heading_pane_t3_cp2

0x9273,	// (0x00053873) list_single_heading_pane_g1_cp2_ParamLimits

0x9273,	// (0x00053873) list_single_heading_pane_g1_cp2

0x928b,	// (0x0005388b) list_single_heading_pane_g2_cp2

0x9293,	// (0x00053893) list_single_heading_pane_t1_cp2_ParamLimits

0x9293,	// (0x00053893) list_single_heading_pane_t1_cp2

0xab9b,	// (0x0005519b) list_single_heading_pane_t2_cp2_ParamLimits

0xab9b,	// (0x0005519b) list_single_heading_pane_t2_cp2

0xaae3,	// (0x000550e3) list_double_graphic_pane_g1_cp2_ParamLimits

0xaae3,	// (0x000550e3) list_double_graphic_pane_g1_cp2

0xaaef,	// (0x000550ef) list_double_graphic_pane_g2_cp2_ParamLimits

0xaaef,	// (0x000550ef) list_double_graphic_pane_g2_cp2

0xaafe,	// (0x000550fe) list_double_graphic_pane_g3_cp2

0xab06,	// (0x00055106) list_double_graphic_pane_t1_cp2_ParamLimits

0xab06,	// (0x00055106) list_double_graphic_pane_t1_cp2

0xab1c,	// (0x0005511c) list_double_graphic_pane_t2_cp2_ParamLimits

0xab1c,	// (0x0005511c) list_double_graphic_pane_t2_cp2

0x9330,	// (0x00053930) list_double_number_pane_g1_cp2_ParamLimits

0x9330,	// (0x00053930) list_double_number_pane_g1_cp2

0x933c,	// (0x0005393c) list_double_number_pane_g2_cp2

0xaaa7,	// (0x000550a7) list_double_number_pane_t1_cp2_ParamLimits

0xaaa7,	// (0x000550a7) list_double_number_pane_t1_cp2

0xaabb,	// (0x000550bb) list_double_number_pane_t2_cp2_ParamLimits

0xaabb,	// (0x000550bb) list_double_number_pane_t2_cp2

0xaad1,	// (0x000550d1) list_double_number_pane_t3_cp2_ParamLimits

0xaad1,	// (0x000550d1) list_double_number_pane_t3_cp2

0xa990,	// (0x00054f90) list_single_graphic_pane_g1_cp2_ParamLimits

0xa990,	// (0x00054f90) list_single_graphic_pane_g1_cp2

0x9394,	// (0x00053994) list_single_graphic_pane_g2_cp2_ParamLimits

0x9394,	// (0x00053994) list_single_graphic_pane_g2_cp2

0x93a0,	// (0x000539a0) list_single_graphic_pane_g3_cp2

0xa966,	// (0x00054f66) list_single_graphic_pane_t1_cp2_ParamLimits

0xa966,	// (0x00054f66) list_single_graphic_pane_t1_cp2

0x9394,	// (0x00053994) list_single_number_pane_g1_cp2_ParamLimits

0x9394,	// (0x00053994) list_single_number_pane_g1_cp2

0x93a0,	// (0x000539a0) list_single_number_pane_g2_cp2

0xa966,	// (0x00054f66) list_single_number_pane_t1_cp2_ParamLimits

0xa966,	// (0x00054f66) list_single_number_pane_t1_cp2

0xa97c,	// (0x00054f7c) list_single_number_pane_t2_cp2_ParamLimits

0xa97c,	// (0x00054f7c) list_single_number_pane_t2_cp2

0x9186,	// (0x00053786) list_double2_pane_g1_cp2_ParamLimits

0x9186,	// (0x00053786) list_double2_pane_g1_cp2

0x9197,	// (0x00053797) list_double2_pane_g2_cp2

0x9308,	// (0x00053908) list_double2_pane_t1_cp2_ParamLimits

0x9308,	// (0x00053908) list_double2_pane_t1_cp2

0x931e,	// (0x0005391e) list_double2_pane_t2_cp2_ParamLimits

0x931e,	// (0x0005391e) list_double2_pane_t2_cp2

0x9330,	// (0x00053930) list_double_pane_g1_cp2_ParamLimits

0x9330,	// (0x00053930) list_double_pane_g1_cp2

0x933c,	// (0x0005393c) list_double_pane_g2_cp2

0x9344,	// (0x00053944) list_double_pane_t1_cp2_ParamLimits

0x9344,	// (0x00053944) list_double_pane_t1_cp2

0x935a,	// (0x0005395a) list_double_pane_t2_cp2_ParamLimits

0x935a,	// (0x0005395a) list_double_pane_t2_cp2

0x9384,	// (0x00053984) list_single_pane_cp2_g3

0x9394,	// (0x00053994) list_single_pane_g1_cp2_ParamLimits

0x9394,	// (0x00053994) list_single_pane_g1_cp2

0x93a0,	// (0x000539a0) list_single_pane_g2_cp2

0x93a8,	// (0x000539a8) list_single_pane_t1_cp2_ParamLimits

0x93a8,	// (0x000539a8) list_single_pane_t1_cp2

0x93c0,	// (0x000539c0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93c0,	// (0x000539c0) list_single_large_graphic_pane_g1_cp2

0x93cc,	// (0x000539cc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x93cc,	// (0x000539cc) list_single_large_graphic_pane_g2_cp2

0x93d8,	// (0x000539d8) list_single_large_graphic_pane_g3_cp2

0x93e0,	// (0x000539e0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93e0,	// (0x000539e0) list_single_large_graphic_pane_g4_cp1

0x93fa,	// (0x000539fa) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93fa,	// (0x000539fa) list_single_large_graphic_pane_t1_cp2

0xa932,	// (0x00054f32) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa932,	// (0x00054f32) list_single_graphic_heading_pane_g1_cp2

0xa8ff,	// (0x00054eff) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8ff,	// (0x00054eff) list_single_graphic_heading_pane_g4_cp2

0x93a0,	// (0x000539a0) list_single_graphic_heading_pane_g5_cp2

0xa93e,	// (0x00054f3e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa93e,	// (0x00054f3e) list_single_graphic_heading_pane_t1_cp2

0xa954,	// (0x00054f54) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa954,	// (0x00054f54) list_single_graphic_heading_pane_t2_cp2

0xa8f3,	// (0x00054ef3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8f3,	// (0x00054ef3) list_single_2graphic_pane_g1_cp2

0xa8ff,	// (0x00054eff) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8ff,	// (0x00054eff) list_single_2graphic_pane_g2_cp2

0x93a0,	// (0x000539a0) list_single_2graphic_pane_g3_cp2

0xa910,	// (0x00054f10) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa910,	// (0x00054f10) list_single_2graphic_pane_g4_cp2

0xa91c,	// (0x00054f1c) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa91c,	// (0x00054f1c) list_single_2graphic_pane_t1_cp2

0x7515,	// (0x00051b15) list_highlight_pane_g10_cp1

0xa4cb,	// (0x00054acb) list_highlight_pane_g1_cp1

0xa4d3,	// (0x00054ad3) list_highlight_pane_g2_cp1

0xa4db,	// (0x00054adb) list_highlight_pane_g3_cp1

0xa4e3,	// (0x00054ae3) list_highlight_pane_g4_cp1

0xa4eb,	// (0x00054aeb) list_highlight_pane_g5_cp1

0xa4f3,	// (0x00054af3) list_highlight_pane_g6_cp1

0xa4fb,	// (0x00054afb) list_highlight_pane_g7_cp1

0xa503,	// (0x00054b03) list_highlight_pane_g8_cp1

0xa50b,	// (0x00054b0b) list_highlight_pane_g9_cp1

0xa3eb,	// (0x000549eb) form_field_slider_pane_t3

0xa3f9,	// (0x000549f9) form_field_slider_pane_t4

0xa407,	// (0x00054a07) slider_form_pane_ParamLimits

0xa407,	// (0x00054a07) slider_form_pane

0x751f,	// (0x00051b1f) control_abbreviations

0x751f,	// (0x00051b1f) control_conventions

0x751f,	// (0x00051b1f) control_definitions

0x751f,	// (0x00051b1f) format_table_attribute

0xabe5,	// (0x000551e5) bg_popup_preview_window_pane_g9

0x751f,	// (0x00051b1f) format_table_data2

0x751f,	// (0x00051b1f) format_table_data3

0x751f,	// (0x00051b1f) format_table_data_example

0x0008,

0x751f,	// (0x00051b1f) intro_purpose

0xf8f4,	// (0x00059ef4) bg_popup_preview_window_pane_g

0x751f,	// (0x00051b1f) texts_category

0x751f,	// (0x00051b1f) texts_graphics

0x9410,	// (0x00053a10) text_digital

0x941f,	// (0x00053a1f) text_primary

0x942e,	// (0x00053a2e) text_primary_small

0x943d,	// (0x00053a3d) text_secondary

0x944c,	// (0x00053a4c) text_title

0xb2bf,	// (0x000558bf) bg_passive_tab_pane_g1_cp3_srt

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp3_srt

0xb2c8,	// (0x000558c8) bg_passive_tab_pane_g3_cp3_srt

0x7f25,	// (0x00052525) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp3_srt

0xb2d1,	// (0x000558d1) tabs_4_active_pane_srt_g1

0xb2d9,	// (0x000558d9) tabs_4_active_pane_srt_t1_ParamLimits

0xb2d9,	// (0x000558d9) tabs_4_active_pane_srt_t1

0xb2bf,	// (0x000558bf) bg_active_tab_pane_g1_cp3_copy1

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp3_copy1

0xb2c8,	// (0x000558c8) bg_active_tab_pane_g3_cp3_copy1

0x7f25,	// (0x00052525) tabs_2_long_active_pane_srt_ParamLimits

0x7f25,	// (0x00052525) tabs_2_long_active_pane_srt

0x7f25,	// (0x00052525) tabs_2_long_passive_pane_srt_ParamLimits

0x7f25,	// (0x00052525) tabs_2_long_passive_pane_srt

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp4_srt

0xb008,	// (0x00055608) bg_passive_tab_pane_g1_cp4_srt

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp4_srt

0xb011,	// (0x00055611) bg_passive_tab_pane_g3_cp4_srt

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp4_srt_ParamLimits

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp4_srt

0xb01a,	// (0x0005561a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb01a,	// (0x0005561a) tabs_2_long_active_pane_srt_t1

0xb008,	// (0x00055608) bg_active_tab_pane_g1_cp4_srt

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp4_srt

0xb011,	// (0x00055611) bg_active_tab_pane_g3_cp4_srt

0x81a0,	// (0x000527a0) tabs_3_long_active_pane_srt_ParamLimits

0x81a0,	// (0x000527a0) tabs_3_long_active_pane_srt

0x81a0,	// (0x000527a0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x81a0,	// (0x000527a0) tabs_3_long_passive_pane_cp_srt

0x81a0,	// (0x000527a0) tabs_3_long_passive_pane_srt_ParamLimits

0x81a0,	// (0x000527a0) tabs_3_long_passive_pane_srt

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp5_srt

0x911b,	// (0x0005371b) bg_passive_tab_pane_g1_cp5_srt

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp5_srt

0x9124,	// (0x00053724) bg_passive_tab_pane_g3_cp5_srt

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp5_srt_ParamLimits

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp5_srt

0xaff6,	// (0x000555f6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaff6,	// (0x000555f6) tabs_3_long_active_pane_srt_t1

0x911b,	// (0x0005371b) bg_active_tab_pane_g1_cp5_srt

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp5_srt

0x9124,	// (0x00053724) bg_active_tab_pane_g3_cp5_srt

0xafe8,	// (0x000555e8) navi_text_pane_srt_t1

0xafe0,	// (0x000555e0) navi_icon_pane_srt_g1

0x9621,	// (0x00053c21) midp_editing_number_pane_srt

0x945b,	// (0x00053a5b) midp_ticker_pane_srt

0x9629,	// (0x00053c29) midp_ticker_pane_srt_g1

0x9631,	// (0x00053c31) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00059d77) midp_ticker_pane_srt_g

0x9639,	// (0x00053c39) midp_ticker_pane_srt_t1

0xafd1,	// (0x000555d1) midp_editing_number_pane_t1_copy1

0x9463,	// (0x00053a63) listscroll_midp_pane

0x9463,	// (0x00053a63) midp_form_pane

0x94d3,	// (0x00053ad3) midp_info_popup_window_ParamLimits

0x94d3,	// (0x00053ad3) midp_info_popup_window

0x8863,	// (0x00052e63) bg_popup_sub_pane_cp50_ParamLimits

0x8863,	// (0x00052e63) bg_popup_sub_pane_cp50

0xa0f7,	// (0x000546f7) listscroll_midp_info_pane_ParamLimits

0xa0f7,	// (0x000546f7) listscroll_midp_info_pane

0xa0d7,	// (0x000546d7) listscroll_form_midp_pane_ParamLimits

0xa0d7,	// (0x000546d7) listscroll_form_midp_pane

0xa0e3,	// (0x000546e3) scroll_bar_cp050

0xa0b7,	// (0x000546b7) list_midp_pane

0xbd03,	// (0x00056303) signal_pane_g2_cp

0x9ff1,	// (0x000545f1) listscroll_midp_info_pane_t1_ParamLimits

0x9ff1,	// (0x000545f1) listscroll_midp_info_pane_t1

0xa009,	// (0x00054609) listscroll_midp_info_pane_t2_ParamLimits

0xa009,	// (0x00054609) listscroll_midp_info_pane_t2

0xa047,	// (0x00054647) listscroll_midp_info_pane_t3_ParamLimits

0xa047,	// (0x00054647) listscroll_midp_info_pane_t3

0xa081,	// (0x00054681) listscroll_midp_info_pane_t4_ParamLimits

0xa081,	// (0x00054681) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00059e2f) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00059e2f) listscroll_midp_info_pane_t

0x8927,	// (0x00052f27) scroll_pane_cp21

0x9f8f,	// (0x0005458f) form_midp_field_choice_group_pane

0x9f98,	// (0x00054598) form_midp_field_text_pane

0x9fd7,	// (0x000545d7) form_midp_field_time_pane

0x9fdf,	// (0x000545df) form_midp_gauge_slider_pane

0x9fe8,	// (0x000545e8) form_midp_gauge_wait_pane

0x751f,	// (0x00051b1f) form_midp_image_pane

0x6161,	// (0x00050761) list_single_midp_pane_ParamLimits

0x6161,	// (0x00050761) list_single_midp_pane

0x9f47,	// (0x00054547) form_midp_field_text_pane_t1

0x9d17,	// (0x00054317) input_focus_pane_cp050

0x9f7e,	// (0x0005457e) list_midp_form_text_pane

0x9f16,	// (0x00054516) form_midp_field_choice_group_pane_t1

0x9f24,	// (0x00054524) input_focus_pane_cp051

0x9f38,	// (0x00054538) list_midp_choice_pane

0x751f,	// (0x00051b1f) status_idle_pane

0x9efa,	// (0x000544fa) form_midp_field_time_pane_t1

0x7515,	// (0x00051b15) wait_anim_pane_g2_copy1

0x9f08,	// (0x00054508) form_midp_field_time_pane_t2

0x0001,

0x9581,	// (0x00053b81) aid_navinavi_width_2_pane

0xf82a,	// (0x00059e2a) form_midp_field_time_pane_t

0x751f,	// (0x00051b1f) input_focus_pane_cp052

0x751f,	// (0x00051b1f) bg_input_focus_pane_cp040

0x9eba,	// (0x000544ba) form_midp_gauge_slider_pane_t1

0x9ec8,	// (0x000544c8) form_midp_gauge_slider_pane_t2

0x9ed6,	// (0x000544d6) form_midp_gauge_slider_pane_t3

0x9ee4,	// (0x000544e4) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00059e21) form_midp_gauge_slider_pane_t

0x9ef2,	// (0x000544f2) form_midp_slider_pane

0x7f25,	// (0x00052525) bg_input_focus_pane_cp041_ParamLimits

0x7f25,	// (0x00052525) bg_input_focus_pane_cp041

0x9e87,	// (0x00054487) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e87,	// (0x00054487) form_midp_gauge_wait_pane_t1

0x9e99,	// (0x00054499) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e99,	// (0x00054499) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00059e1c) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00059e1c) form_midp_gauge_wait_pane_t

0x9eab,	// (0x000544ab) form_midp_wait_pane_ParamLimits

0x9eab,	// (0x000544ab) form_midp_wait_pane

0x9e51,	// (0x00054451) form_midp_image_pane_g1

0x9e5a,	// (0x0005445a) form_midp_image_pane_t1

0x9e69,	// (0x00054469) form_midp_image_pane_t2

0x9e78,	// (0x00054478) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00059e15) form_midp_image_pane_t

0x9e48,	// (0x00054448) list_single_midp_pane_g1

0x6152,	// (0x00050752) list_single_midp_pane_t1

0x9e20,	// (0x00054420) list_midp_form_item_pane_ParamLimits

0x9e20,	// (0x00054420) list_midp_form_item_pane

0x9529,	// (0x00053b29) list_midp_form_item_pane_t1

0x9538,	// (0x00053b38) midp_ticker_pane_g1

0x9544,	// (0x00053b44) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00059d5d) midp_ticker_pane_g

0x9550,	// (0x00053b50) midp_ticker_pane_t1

0xb222,	// (0x00055822) midp_editing_number_pane_t1

0xb200,	// (0x00055800) midp_editing_number_pane

0xb20f,	// (0x0005580f) midp_ticker_pane

0xafc1,	// (0x000555c1) ai_message_heading_pane

0x751f,	// (0x00051b1f) bg_popup_window_pane_cp14

0xafc9,	// (0x000555c9) listscroll_ai_message_pane

0xaf4b,	// (0x0005554b) ai_message_heading_pane_g1_ParamLimits

0xaf4b,	// (0x0005554b) ai_message_heading_pane_g1

0xaf57,	// (0x00055557) ai_message_heading_pane_g2_ParamLimits

0xaf57,	// (0x00055557) ai_message_heading_pane_g2

0xaf63,	// (0x00055563) ai_message_heading_pane_g3_ParamLimits

0xaf63,	// (0x00055563) ai_message_heading_pane_g3

0xaf6f,	// (0x0005556f) ai_message_heading_pane_g4_ParamLimits

0xaf6f,	// (0x0005556f) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00059f56) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00059f56) ai_message_heading_pane_g

0xaf7b,	// (0x0005557b) ai_message_heading_pane_t1_ParamLimits

0xaf7b,	// (0x0005557b) ai_message_heading_pane_t1

0xaf95,	// (0x00055595) ai_message_heading_pane_t2_ParamLimits

0xaf95,	// (0x00055595) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00059f5f) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00059f5f) ai_message_heading_pane_t

0xafa7,	// (0x000555a7) bg_popup_heading_pane_cp1_ParamLimits

0xafa7,	// (0x000555a7) bg_popup_heading_pane_cp1

0xaf39,	// (0x00055539) list_ai_message_pane_ParamLimits

0xaf39,	// (0x00055539) list_ai_message_pane

0x8927,	// (0x00052f27) scroll_pane_cp10

0xaed5,	// (0x000554d5) list_ai_message_pane_g1

0xaedd,	// (0x000554dd) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00059f33) list_ai_message_pane_g

0xaee5,	// (0x000554e5) list_ai_message_pane_t1_ParamLimits

0xaee5,	// (0x000554e5) list_ai_message_pane_t1

0xaefa,	// (0x000554fa) list_ai_message_pane_t2_ParamLimits

0xaefa,	// (0x000554fa) list_ai_message_pane_t2

0xaf0f,	// (0x0005550f) list_ai_message_pane_t3_ParamLimits

0xaf0f,	// (0x0005550f) list_ai_message_pane_t3

0xaf24,	// (0x00055524) list_ai_message_pane_t4_ParamLimits

0xaf24,	// (0x00055524) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00059f38) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00059f38) list_ai_message_pane_t

0xaec0,	// (0x000554c0) cell_ai_soft_ind_pane_ParamLimits

0xaec0,	// (0x000554c0) cell_ai_soft_ind_pane

0x9562,	// (0x00053b62) cell_ai_soft_ind_pane_g1_ParamLimits

0x9562,	// (0x00053b62) cell_ai_soft_ind_pane_g1

0x751f,	// (0x00051b1f) grid_highlight_cp1

0x956f,	// (0x00053b6f) text_secondary_cp56_ParamLimits

0x956f,	// (0x00053b6f) text_secondary_cp56

0xae95,	// (0x00055495) example_general_pane_ParamLimits

0xae95,	// (0x00055495) example_general_pane

0xaea1,	// (0x000554a1) example_parent_pane_g1_ParamLimits

0xaea1,	// (0x000554a1) example_parent_pane_g1

0xaead,	// (0x000554ad) example_parent_pane_t1_ParamLimits

0xaead,	// (0x000554ad) example_parent_pane_t1

0x5d30,	// (0x00050330) popup_preview_text_window_ParamLimits

0x5d30,	// (0x00050330) popup_preview_text_window

0x938c,	// (0x0005398c) list_single_pane_cp2_g4

0x827c,	// (0x0005287c) bg_popup_preview_window_pane_ParamLimits

0x827c,	// (0x0005287c) bg_popup_preview_window_pane

0xabed,	// (0x000551ed) popup_preview_text_window_t1_ParamLimits

0xabed,	// (0x000551ed) popup_preview_text_window_t1

0xac0b,	// (0x0005520b) popup_preview_text_window_t2_ParamLimits

0xac0b,	// (0x0005520b) popup_preview_text_window_t2

0xac54,	// (0x00055254) popup_preview_text_window_t3_ParamLimits

0xac54,	// (0x00055254) popup_preview_text_window_t3

0xac99,	// (0x00055299) popup_preview_text_window_t4_ParamLimits

0xac99,	// (0x00055299) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00059f07) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00059f07) popup_preview_text_window_t

0xad17,	// (0x00055317) scroll_pane_cp11

0x9ca3,	// (0x000542a3) bg_popup_preview_window_pane_g1

0xabad,	// (0x000551ad) bg_popup_preview_window_pane_g2

0xabb5,	// (0x000551b5) bg_popup_preview_window_pane_g3

0xabbd,	// (0x000551bd) bg_popup_preview_window_pane_g4

0xabc5,	// (0x000551c5) bg_popup_preview_window_pane_g5

0xabcd,	// (0x000551cd) bg_popup_preview_window_pane_g6

0xabd5,	// (0x000551d5) bg_popup_preview_window_pane_g7

0xabdd,	// (0x000551dd) bg_popup_preview_window_pane_g8

0x47bc,	// (0x0004edbc) aid_popup_width_pane

0x5d0e,	// (0x0005030e) popup_midp_note_alarm_window_ParamLimits

0x5d0e,	// (0x0005030e) popup_midp_note_alarm_window

0x87ba,	// (0x00052dba) data_form_pane_ParamLimits

0x516f,	// (0x0004f76f) form_field_data_pane_g1

0x5179,	// (0x0004f779) form_field_data_pane_t1_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_ParamLimits

0x5191,	// (0x0004f791) data_form_wide_pane_ParamLimits

0x51a2,	// (0x0004f7a2) form_field_data_wide_pane_g1

0x51ae,	// (0x0004f7ae) form_field_data_wide_pane_t1_ParamLimits

0x852b,	// (0x00052b2b) input_focus_pane_cp6_ParamLimits

0x88d4,	// (0x00052ed4) input_popup_find_pane_g1_ParamLimits

0x88d4,	// (0x00052ed4) input_popup_find_pane_g1

0x5424,	// (0x0004fa24) aid_navi_side_left_pane

0x5439,	// (0x0004fa39) aid_navi_side_right_pane

0xa5c6,	// (0x00054bc6) bg_popup_window_pane_cp30_ParamLimits

0xa5c6,	// (0x00054bc6) bg_popup_window_pane_cp30

0xa640,	// (0x00054c40) popup_midp_note_alarm_window_g1_ParamLimits

0xa640,	// (0x00054c40) popup_midp_note_alarm_window_g1

0xa670,	// (0x00054c70) popup_midp_note_alarm_window_t1_ParamLimits

0xa670,	// (0x00054c70) popup_midp_note_alarm_window_t1

0xa711,	// (0x00054d11) popup_midp_note_alarm_window_t2_ParamLimits

0xa711,	// (0x00054d11) popup_midp_note_alarm_window_t2

0xa7bf,	// (0x00054dbf) popup_midp_note_alarm_window_t3_ParamLimits

0xa7bf,	// (0x00054dbf) popup_midp_note_alarm_window_t3

0xa7f1,	// (0x00054df1) popup_midp_note_alarm_window_t4_ParamLimits

0xa7f1,	// (0x00054df1) popup_midp_note_alarm_window_t4

0xa817,	// (0x00054e17) popup_midp_note_alarm_window_t5_ParamLimits

0xa817,	// (0x00054e17) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00059ea4) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00059ea4) popup_midp_note_alarm_window_t

0xa8c3,	// (0x00054ec3) wait_bar_pane_cp1_ParamLimits

0xa8c3,	// (0x00054ec3) wait_bar_pane_cp1

0x751f,	// (0x00051b1f) wait_anim_pane_copy1

0x751f,	// (0x00051b1f) wait_border_pane_copy1

0xa2ac,	// (0x000548ac) wait_border_pane_g1_copy1

0x51c8,	// (0x0004f7c8) form_field_popup_pane_g1

0x51d0,	// (0x0004f7d0) form_field_popup_pane_t1_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_cp7_ParamLimits

0x87e8,	// (0x00052de8) list_form_pane_ParamLimits

0x51e8,	// (0x0004f7e8) form_field_popup_wide_pane_g1

0x51f0,	// (0x0004f7f0) form_field_popup_wide_pane_t1_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_cp8_ParamLimits

0x87f4,	// (0x00052df4) list_form_wide_pane_ParamLimits

0xb353,	// (0x00055953) aid_size_cell_graphic_pane

0x527a,	// (0x0004f87a) data_form_pane_t1_ParamLimits

0x63df,	// (0x000509df) data_form_wide_pane_t1_ParamLimits

0x9870,	// (0x00053e70) bg_status_flat_pane

0x755f,	// (0x00051b5f) title_pane_t1_ParamLimits

0x7eed,	// (0x000524ed) title_pane_t2_ParamLimits

0x7f13,	// (0x00052513) title_pane_t3_ParamLimits

0xf557,	// (0x00059b57) title_pane_t_ParamLimits

0x8da8,	// (0x000533a8) level_1_signal_ParamLimits

0x8dba,	// (0x000533ba) level_2_signal_ParamLimits

0x8dcd,	// (0x000533cd) level_3_signal_ParamLimits

0x8de0,	// (0x000533e0) level_4_signal_ParamLimits

0x8df3,	// (0x000533f3) level_5_signal_ParamLimits

0x8e06,	// (0x00053406) level_6_signal_ParamLimits

0x8e19,	// (0x00053419) level_7_signal_ParamLimits

0x8da8,	// (0x000533a8) level_1_battery_ParamLimits

0x8dba,	// (0x000533ba) level_2_battery_ParamLimits

0x8dcd,	// (0x000533cd) level_3_battery_ParamLimits

0x8de0,	// (0x000533e0) level_4_battery_ParamLimits

0x8df3,	// (0x000533f3) level_5_battery_ParamLimits

0x8e06,	// (0x00053406) level_6_battery_ParamLimits

0x8e19,	// (0x00053419) level_7_battery_ParamLimits

0xa4cb,	// (0x00054acb) bg_status_flat_pane_g1

0xa4d3,	// (0x00054ad3) bg_status_flat_pane_g2

0xa4db,	// (0x00054adb) bg_status_flat_pane_g3

0xa4e3,	// (0x00054ae3) bg_status_flat_pane_g4

0xa4eb,	// (0x00054aeb) bg_status_flat_pane_g5

0xa4f3,	// (0x00054af3) bg_status_flat_pane_g6

0xa4fb,	// (0x00054afb) bg_status_flat_pane_g7

0x7f3b,	// (0x0005253b) tabs_3_active_pane_t1_ParamLimits

0x7f3b,	// (0x0005253b) tabs_3_passive_pane_t1_ParamLimits

0x7f55,	// (0x00052555) tabs_4_active_pane_t1_ParamLimits

0x7f55,	// (0x00052555) tabs_4_1_passive_pane_t1_ParamLimits

0x8968,	// (0x00052f68) tabs_2_active_pane_t1_ParamLimits

0x8968,	// (0x00052f68) tabs_2_passive_pane_t1_ParamLimits

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp4_ParamLimits

0x8988,	// (0x00052f88) tabs_2_long_active_pane_t1_ParamLimits

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp4_ParamLimits

0x6033,	// (0x00050633) list_single_midp_graphic_pane_t1_ParamLimits

0x897a,	// (0x00052f7a) bg_active_tab_pane_cp5_ParamLimits

0x89a7,	// (0x00052fa7) tabs_3_long_active_pane_t1_ParamLimits

0x899b,	// (0x00052f9b) bg_passive_tab_pane_cp5_ParamLimits

0x6033,	// (0x00050633) list_single_midp_graphic_pane_t1

0x9870,	// (0x00053e70) bg_status_flat_pane_ParamLimits

0x9933,	// (0x00053f33) indicator_pane_cp2_ParamLimits

0x9933,	// (0x00053f33) indicator_pane_cp2

0x9a5e,	// (0x0005405e) navi_pane_srt_ParamLimits

0x9a5e,	// (0x0005405e) navi_pane_srt

0x9a82,	// (0x00054082) popup_clock_digital_analogue_window_cp1

0x8002,	// (0x00052602) indicator_pane_t1

0x945b,	// (0x00053a5b) copy_highlight_pane

0x945b,	// (0x00053a5b) cursor_graphics_pane

0x945b,	// (0x00053a5b) graphic_within_text_pane

0x945b,	// (0x00053a5b) link_highlight_pane

0xacda,	// (0x000552da) popup_preview_text_window_t5_ParamLimits

0xacda,	// (0x000552da) popup_preview_text_window_t5

0x9589,	// (0x00053b89) cursor_digital_pane

0x9589,	// (0x00053b89) cursor_primary_pane

0x959a,	// (0x00053b9a) cursor_primary_small_pane

0x95a2,	// (0x00053ba2) cursor_secondary_pane

0x95aa,	// (0x00053baa) cursor_title_pane

0x9589,	// (0x00053b89) link_highlight_digital_pane

0x9591,	// (0x00053b91) link_highlight_primary_pane

0x959a,	// (0x00053b9a) link_highlight_primary_small_pane

0x95a2,	// (0x00053ba2) link_highlight_secondary_pane

0x95aa,	// (0x00053baa) link_highlight_title_pane

0x9589,	// (0x00053b89) copy_highlight_digital_pane

0x9589,	// (0x00053b89) copy_highlight_primary_pane

0x959a,	// (0x00053b9a) copy_highlight_primary_small_pane

0x95a2,	// (0x00053ba2) copy_highlight_secondary_pane

0x95aa,	// (0x00053baa) copy_highlight_title_pane

0x95a2,	// (0x00053ba2) graphic_text_digital_pane

0xa569,	// (0x00054b69) graphic_text_primary_pane

0xa572,	// (0x00054b72) graphic_text_primary_small_pane

0x959a,	// (0x00053b9a) graphic_text_secondary_pane

0x9589,	// (0x00053b89) graphic_text_title_pane

0x95b2,	// (0x00053bb2) cursor_primary_pane_g1

0xa55b,	// (0x00054b5b) cursor_text_primary_t1

0xa543,	// (0x00054b43) cursor_primary_small_pane_g1

0xa54d,	// (0x00054b4d) cursor_text_primary_small_t1

0xa52b,	// (0x00054b2b) cursor_primary_small_pane_g1_copy1

0xa535,	// (0x00054b35) cursor_text_primary_small_t1_copy1

0xa513,	// (0x00054b13) cursor_text_title_t1

0xa521,	// (0x00054b21) cursor_title_pane_g1

0x95b2,	// (0x00053bb2) cursor_digital_pane_g1

0x95bc,	// (0x00053bbc) cursor_text_digital_t1

0x95e1,	// (0x00053be1) link_highlight_primary_pane_g1

0xa4bc,	// (0x00054abc) link_highlight_primary_pane_t1

0x95ca,	// (0x00053bca) link_highlight_primary_small_pane_g1

0x95d2,	// (0x00053bd2) link_highlight_primary_small_pane_t1

0x95e1,	// (0x00053be1) link_highlight_secondary_pane_g1

0x95e9,	// (0x00053be9) link_highlight_secondary_pane_t1

0xa430,	// (0x00054a30) link_highlight_title_pane_g1

0xa438,	// (0x00054a38) link_highlight_title_pane_t1

0xa419,	// (0x00054a19) link_highlight_digital_pane_g1

0xa421,	// (0x00054a21) link_highlight_digital_pane_t1

0xa2f1,	// (0x000548f1) copy_highlight_primary_pane_g1

0xa2f9,	// (0x000548f9) copy_highlight_primary_pane_t1

0xa2cb,	// (0x000548cb) copy_highlight_primary_small_pane_g1

0xa2e2,	// (0x000548e2) copy_highlight_primary_small_pane_t1

0x95f8,	// (0x00053bf8) copy_highlight_secondary_pane_g1

0x9600,	// (0x00053c00) copy_highlight_secondary_pane_t1

0xa2cb,	// (0x000548cb) copy_highlight_title_pane_g1

0xa2d3,	// (0x000548d3) copy_highlight_title_pane_t1

0xa2f1,	// (0x000548f1) copy_highlight_digital_pane_g1

0xb521,	// (0x00055b21) copy_highlight_digital_pane_t1

0xb475,	// (0x00055a75) graphic_text_primary_pane_g1

0xb505,	// (0x00055b05) graphic_text_primary_pane_t1

0xb513,	// (0x00055b13) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00059fd3) graphic_text_primary_pane_t

0xb4e1,	// (0x00055ae1) graphic_text_primary_small_pane_g1

0xb4e9,	// (0x00055ae9) graphic_text_primary_small_pane_t1

0xb4f7,	// (0x00055af7) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00059fce) graphic_text_primary_small_pane_t

0xb4bd,	// (0x00055abd) graphic_text_secondary_pane_g1

0xb4c5,	// (0x00055ac5) graphic_text_secondary_pane_t1

0xb4d3,	// (0x00055ad3) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00059fc9) graphic_text_secondary_pane_t

0xb499,	// (0x00055a99) graphic_text_title_pane_g1

0xb4a1,	// (0x00055aa1) graphic_text_title_pane_t1

0xb4af,	// (0x00055aaf) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00059fc4) graphic_text_title_pane_t

0xb475,	// (0x00055a75) graphic_text_digital_pane_g1

0xb47d,	// (0x00055a7d) graphic_text_digital_pane_t1

0xb48b,	// (0x00055a8b) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00059fbf) graphic_text_digital_pane_t

0x7f25,	// (0x00052525) navi_icon_pane_srt_ParamLimits

0x7f25,	// (0x00052525) navi_icon_pane_srt

0x751f,	// (0x00051b1f) navi_midp_pane_srt

0x751f,	// (0x00051b1f) navi_navi_pane_srt

0x7f25,	// (0x00052525) navi_text_pane_srt_ParamLimits

0x7f25,	// (0x00052525) navi_text_pane_srt

0xb440,	// (0x00055a40) navi_navi_icon_text_pane_srt

0xb448,	// (0x00055a48) navi_navi_pane_srt_g1_ParamLimits

0xb448,	// (0x00055a48) navi_navi_pane_srt_g1

0xb45a,	// (0x00055a5a) navi_navi_pane_srt_g2_ParamLimits

0xb45a,	// (0x00055a5a) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00059fba) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00059fba) navi_navi_pane_srt_g

0xb46c,	// (0x00055a6c) navi_navi_tabs_pane_srt

0xb440,	// (0x00055a40) navi_navi_text_pane_srt

0xb440,	// (0x00055a40) navi_navi_volume_pane_srt

0xb431,	// (0x00055a31) navi_navi_text_pane_srt_t1

0x64aa,	// (0x00050aaa) navi_navi_volume_pane_srt_g1

0x64b2,	// (0x00050ab2) volume_small_pane_srt_ParamLimits

0x64b2,	// (0x00050ab2) volume_small_pane_srt

0x5772,	// (0x0004fd72) volume_small_pane_srt_g1_ParamLimits

0x5772,	// (0x0004fd72) volume_small_pane_srt_g1

0x5782,	// (0x0004fd82) volume_small_pane_srt_g2_ParamLimits

0x5782,	// (0x0004fd82) volume_small_pane_srt_g2

0x5793,	// (0x0004fd93) volume_small_pane_srt_g3_ParamLimits

0x5793,	// (0x0004fd93) volume_small_pane_srt_g3

0x57a4,	// (0x0004fda4) volume_small_pane_srt_g4_ParamLimits

0x57a4,	// (0x0004fda4) volume_small_pane_srt_g4

0x57b5,	// (0x0004fdb5) volume_small_pane_srt_g5_ParamLimits

0x57b5,	// (0x0004fdb5) volume_small_pane_srt_g5

0x57c6,	// (0x0004fdc6) volume_small_pane_srt_g6_ParamLimits

0x57c6,	// (0x0004fdc6) volume_small_pane_srt_g6

0x57d7,	// (0x0004fdd7) volume_small_pane_srt_g7_ParamLimits

0x57d7,	// (0x0004fdd7) volume_small_pane_srt_g7

0x57e8,	// (0x0004fde8) volume_small_pane_srt_g8_ParamLimits

0x57e8,	// (0x0004fde8) volume_small_pane_srt_g8

0x57f9,	// (0x0004fdf9) volume_small_pane_srt_g9_ParamLimits

0x57f9,	// (0x0004fdf9) volume_small_pane_srt_g9

0x580a,	// (0x0004fe0a) volume_small_pane_srt_g10_ParamLimits

0x580a,	// (0x0004fe0a) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00059d62) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00059d62) volume_small_pane_srt_g

0x8325,	// (0x00052925) query_popup_data_pane_cp2

0xb417,	// (0x00055a17) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb417,	// (0x00055a17) navi_navi_icon_text_pane_srt_t1

0xa569,	// (0x00054b69) navi_tabs_2_long_pane_srt

0xa569,	// (0x00054b69) navi_tabs_2_pane_srt

0xa569,	// (0x00054b69) navi_tabs_3_long_pane_srt

0xa569,	// (0x00054b69) navi_tabs_3_pane_srt

0xa569,	// (0x00054b69) navi_tabs_4_pane_srt

0x648a,	// (0x00050a8a) tabs_2_active_pane_srt_ParamLimits

0x648a,	// (0x00050a8a) tabs_2_active_pane_srt

0x649a,	// (0x00050a9a) tabs_2_passive_pane_srt_ParamLimits

0x649a,	// (0x00050a9a) tabs_2_passive_pane_srt

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp1_srt

0xb3e3,	// (0x000559e3) bg_passive_tab_pane_g1_cp1_srt

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp1_srt

0xb3ec,	// (0x000559ec) bg_passive_tab_pane_g3_cp1_srt

0x7f25,	// (0x00052525) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp1_srt

0xb3f5,	// (0x000559f5) tabs_2_active_pane_srt_g1

0xb3fd,	// (0x000559fd) tabs_2_active_pane_srt_t1_ParamLimits

0xb3fd,	// (0x000559fd) tabs_2_active_pane_srt_t1

0xb3e3,	// (0x000559e3) bg_active_tab_pane_g1_cp1_srt

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp1_srt

0xb3ec,	// (0x000559ec) bg_active_tab_pane_g3_cp1_srt

0x6457,	// (0x00050a57) tabs_3_active_pane_srt_ParamLimits

0x6457,	// (0x00050a57) tabs_3_active_pane_srt

0x6468,	// (0x00050a68) tabs_3_passive_pane_cp_srt_ParamLimits

0x6468,	// (0x00050a68) tabs_3_passive_pane_cp_srt

0x6479,	// (0x00050a79) tabs_3_passive_pane_srt_ParamLimits

0x6479,	// (0x00050a79) tabs_3_passive_pane_srt

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x977f,	// (0x00053d7f) bg_passive_tab_pane_cp2_srt

0x960f,	// (0x00053c0f) bg_passive_tab_pane_g1_cp2_srt

0x9091,	// (0x00053691) bg_passive_tab_pane_g2_cp2_srt

0x9618,	// (0x00053c18) bg_passive_tab_pane_g3_cp2_srt

0x7f25,	// (0x00052525) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f25,	// (0x00052525) bg_active_tab_pane_cp2_srt

0xb3c9,	// (0x000559c9) tabs_3_active_pane_srt_g1

0xb3d1,	// (0x000559d1) tabs_3_active_pane_srt_t1_ParamLimits

0xb3d1,	// (0x000559d1) tabs_3_active_pane_srt_t1

0x960f,	// (0x00053c0f) bg_active_tab_pane_g1_cp2_srt

0x9091,	// (0x00053691) bg_active_tab_pane_g2_cp2_srt

0x9618,	// (0x00053c18) bg_active_tab_pane_g3_cp2_srt

0x640f,	// (0x00050a0f) tabs_4_active_pane_srt_ParamLimits

0x640f,	// (0x00050a0f) tabs_4_active_pane_srt

0x6421,	// (0x00050a21) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6421,	// (0x00050a21) tabs_4_passive_pane_cp2_srt

0x5979,	// (0x0004ff79) aid_size_cell_toolbar

0x899b,	// (0x00052f9b) main_idle_act_pane_ParamLimits

0x5b44,	// (0x00050144) popup_large_graphic_colour_window_ParamLimits

0x5eab,	// (0x000504ab) popup_toolbar_window_ParamLimits

0x5eab,	// (0x000504ab) popup_toolbar_window

0xb231,	// (0x00055831) list_single_graphic_2heading_pane_ParamLimits

0xb231,	// (0x00055831) list_single_graphic_2heading_pane

0x8b57,	// (0x00053157) aid_size_cell_apps_grid_lsc_pane

0x8b69,	// (0x00053169) aid_size_cell_apps_grid_prt_pane

0x977f,	// (0x00053d7f) bg_wml_button_pane_cp1_ParamLimits

0x977f,	// (0x00053d7f) bg_wml_button_pane_cp1

0x9f47,	// (0x00054547) form_midp_field_text_pane_t1_ParamLimits

0x9d17,	// (0x00054317) input_focus_pane_cp050_ParamLimits

0x9f7e,	// (0x0005457e) list_midp_form_text_pane_ParamLimits

0x9f24,	// (0x00054524) input_focus_pane_cp051_ParamLimits

0x9f38,	// (0x00054538) list_midp_choice_pane_ParamLimits

0x9dd0,	// (0x000543d0) list_single_2graphic_pane_cp3_ParamLimits

0x9dd0,	// (0x000543d0) list_single_2graphic_pane_cp3

0x9df1,	// (0x000543f1) list_single_midp_graphic_pane_ParamLimits

0x9df1,	// (0x000543f1) list_single_midp_graphic_pane

0x4744,	// (0x0004ed44) list_single_graphic_2heading_pane_g1_ParamLimits

0x4744,	// (0x0004ed44) list_single_graphic_2heading_pane_g1

0x4750,	// (0x0004ed50) list_single_graphic_2heading_pane_g4_ParamLimits

0x4750,	// (0x0004ed50) list_single_graphic_2heading_pane_g4

0x475c,	// (0x0004ed5c) list_single_graphic_2heading_pane_g5_ParamLimits

0x475c,	// (0x0004ed5c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00059db5) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00059db5) list_single_graphic_2heading_pane_g

0x4768,	// (0x0004ed68) list_single_graphic_2heading_pane_t1_ParamLimits

0x4768,	// (0x0004ed68) list_single_graphic_2heading_pane_t1

0x477c,	// (0x0004ed7c) list_single_graphic_2heading_pane_t2_ParamLimits

0x477c,	// (0x0004ed7c) list_single_graphic_2heading_pane_t2

0x4798,	// (0x0004ed98) list_single_graphic_2heading_pane_t3_ParamLimits

0x4798,	// (0x0004ed98) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00059dbc) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00059dbc) list_single_graphic_2heading_pane_t

0x9be1,	// (0x000541e1) bg_popup_sub_pane_cp2

0x9c0b,	// (0x0005420b) grid_toobar_pane

0x5f58,	// (0x00050558) cell_toolbar_pane_ParamLimits

0x5f58,	// (0x00050558) cell_toolbar_pane

0x9c47,	// (0x00054247) cell_toolbar_pane_g1_ParamLimits

0x9c47,	// (0x00054247) cell_toolbar_pane_g1

0x9c5b,	// (0x0005425b) cell_toolbar_pane_g2_ParamLimits

0x9c5b,	// (0x0005425b) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059dca) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059dca) cell_toolbar_pane_g

0x9c7d,	// (0x0005427d) grid_highlight_pane_cp2_ParamLimits

0x9c7d,	// (0x0005427d) grid_highlight_pane_cp2

0x9c97,	// (0x00054297) toolbar_button_pane

0x9ca3,	// (0x000542a3) toolbar_button_pane_g1

0x9cab,	// (0x000542ab) toolbar_button_pane_g2

0x9cb3,	// (0x000542b3) toolbar_button_pane_g3

0x9cbb,	// (0x000542bb) toolbar_button_pane_g4

0x9cc3,	// (0x000542c3) toolbar_button_pane_g5

0x9ccb,	// (0x000542cb) toolbar_button_pane_g6

0x9cd3,	// (0x000542d3) toolbar_button_pane_g7

0x9cdb,	// (0x000542db) toolbar_button_pane_g8

0x9ce3,	// (0x000542e3) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00059dcf) toolbar_button_pane_g

0x5fb2,	// (0x000505b2) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5fb2,	// (0x000505b2) list_single_2graphic_pane_g1_cp3

0x5fbe,	// (0x000505be) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5fbe,	// (0x000505be) list_single_2graphic_pane_g2_cp3

0x5fcf,	// (0x000505cf) list_single_2graphic_pane_g3_cp3

0x5fd7,	// (0x000505d7) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5fd7,	// (0x000505d7) list_single_2graphic_pane_g4_cp3

0x5fe3,	// (0x000505e3) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5fe3,	// (0x000505e3) list_single_2graphic_pane_t1_cp3

0x6027,	// (0x00050627) list_single_midp_graphic_pane_g2_ParamLimits

0x6027,	// (0x00050627) list_single_midp_graphic_pane_g2

0x473c,	// (0x0004ed3c) aid_zoom_text_primary

0x5981,	// (0x0004ff81) aid_zoom_text_secondary

0x96c9,	// (0x00053cc9) status_small_pane_g7_ParamLimits

0x96c9,	// (0x00053cc9) status_small_pane_g7

0x96ec,	// (0x00053cec) status_small_pane_t1_ParamLimits

0x7536,	// (0x00051b36) title_pane_g2

0x0003,

0xf54e,	// (0x00059b4e) title_pane_g

0x83c9,	// (0x000529c9) aid_size_cell_colour_1_pane_ParamLimits

0x83c9,	// (0x000529c9) aid_size_cell_colour_1_pane

0x83dd,	// (0x000529dd) aid_size_cell_colour_2_pane_ParamLimits

0x83dd,	// (0x000529dd) aid_size_cell_colour_2_pane

0x83f1,	// (0x000529f1) aid_size_cell_colour_3_pane_ParamLimits

0x83f1,	// (0x000529f1) aid_size_cell_colour_3_pane

0x8405,	// (0x00052a05) aid_size_cell_colour_4_pane_ParamLimits

0x8405,	// (0x00052a05) aid_size_cell_colour_4_pane

0x5361,	// (0x0004f961) title_pane_stacon_g1_ParamLimits

0x5361,	// (0x0004f961) title_pane_stacon_g1

0xa350,	// (0x00054950) popup_note_wait_window_g3_ParamLimits

0xa350,	// (0x00054950) popup_note_wait_window_g3

0xa3c6,	// (0x000549c6) popup_note_wait_window_t5_ParamLimits

0xa3c6,	// (0x000549c6) popup_note_wait_window_t5

0x751f,	// (0x00051b1f) main_feb_china_hwr_fs_writing_pane

0x5a27,	// (0x00050027) popup_feb_china_hwr_fs_window_ParamLimits

0x5a27,	// (0x00050027) popup_feb_china_hwr_fs_window

0x60b5,	// (0x000506b5) aid_size_cell_hwr_fs_ParamLimits

0x60b5,	// (0x000506b5) aid_size_cell_hwr_fs

0x9d17,	// (0x00054317) bg_popup_sub_pane_cp3_ParamLimits

0x9d17,	// (0x00054317) bg_popup_sub_pane_cp3

0x60ca,	// (0x000506ca) grid_hwr_fs_pane_ParamLimits

0x60ca,	// (0x000506ca) grid_hwr_fs_pane

0x60e2,	// (0x000506e2) linegrid_hwr_fs_pane_ParamLimits

0x60e2,	// (0x000506e2) linegrid_hwr_fs_pane

0x60f2,	// (0x000506f2) cell_hwr_fs_pane_ParamLimits

0x60f2,	// (0x000506f2) cell_hwr_fs_pane

0x9d23,	// (0x00054323) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d23,	// (0x00054323) linegrid_hwr_fs_pane_g1

0x9d2f,	// (0x0005432f) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d2f,	// (0x0005432f) linegrid_hwr_fs_pane_g2

0x9d41,	// (0x00054341) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d41,	// (0x00054341) linegrid_hwr_fs_pane_g3

0x6114,	// (0x00050714) linegrid_hwr_fs_pane_g4_ParamLimits

0x6114,	// (0x00050714) linegrid_hwr_fs_pane_g4

0x612e,	// (0x0005072e) linegrid_hwr_fs_pane_g5_ParamLimits

0x612e,	// (0x0005072e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00059dfa) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00059dfa) linegrid_hwr_fs_pane_g

0x9d4d,	// (0x0005434d) cell_hwr_fs_pane_g1_ParamLimits

0x9d4d,	// (0x0005434d) cell_hwr_fs_pane_g1

0x9b18,	// (0x00054118) cell_hwr_fs_pane_g2_ParamLimits

0x9b18,	// (0x00054118) cell_hwr_fs_pane_g2

0x9d63,	// (0x00054363) cell_hwr_fs_pane_g3_ParamLimits

0x9d63,	// (0x00054363) cell_hwr_fs_pane_g3

0x9d70,	// (0x00054370) cell_hwr_fs_pane_g4_ParamLimits

0x9d70,	// (0x00054370) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00059e05) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00059e05) cell_hwr_fs_pane_g

0x6144,	// (0x00050744) cell_hwr_fs_pane_t1

0x751f,	// (0x00051b1f) grid_highlight_pane_cp6

0x751f,	// (0x00051b1f) main_idle_act2_pane

0x890e,	// (0x00052f0e) aid_inside_area_popup_secondary

0xa9fd,	// (0x00054ffd) aid_inside_area_window_primary_ParamLimits

0xa9fd,	// (0x00054ffd) aid_inside_area_window_primary

0xb530,	// (0x00055b30) ai2_news_ticker_pane

0xb538,	// (0x00055b38) aid_size_cell_ai1_link_ParamLimits

0xb538,	// (0x00055b38) aid_size_cell_ai1_link

0xb552,	// (0x00055b52) popup_ai2_data_window_ParamLimits

0xb552,	// (0x00055b52) popup_ai2_data_window

0xb568,	// (0x00055b68) popup_ai2_link_window_ParamLimits

0xb568,	// (0x00055b68) popup_ai2_link_window

0x9d17,	// (0x00054317) bg_popup_sub_pane_cp4_ParamLimits

0x9d17,	// (0x00054317) bg_popup_sub_pane_cp4

0xb57c,	// (0x00055b7c) grid_ai2_link_pane_ParamLimits

0xb57c,	// (0x00055b7c) grid_ai2_link_pane

0xb593,	// (0x00055b93) popup_ai2_link_window_g1_ParamLimits

0xb593,	// (0x00055b93) popup_ai2_link_window_g1

0xb59f,	// (0x00055b9f) popup_ai2_link_window_g2_ParamLimits

0xb59f,	// (0x00055b9f) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00059fd8) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00059fd8) popup_ai2_link_window_g

0xb5ae,	// (0x00055bae) ai2_mp_button_pane

0xb5b6,	// (0x00055bb6) ai2_mp_volume_pane

0x9f24,	// (0x00054524) bg_popup_sub_pane_cp5_ParamLimits

0x9f24,	// (0x00054524) bg_popup_sub_pane_cp5

0xb5be,	// (0x00055bbe) heading_ai2_gene_pane_ParamLimits

0xb5be,	// (0x00055bbe) heading_ai2_gene_pane

0xb5ca,	// (0x00055bca) list_ai2_gene_pane_ParamLimits

0xb5ca,	// (0x00055bca) list_ai2_gene_pane

0xb612,	// (0x00055c12) cell_ai2_link_pane_ParamLimits

0xb612,	// (0x00055c12) cell_ai2_link_pane

0xb628,	// (0x00055c28) cell_ai2_link_pane_g1

0x751f,	// (0x00051b1f) grid_highlight_pane_cp7

0x64c7,	// (0x00050ac7) ai2_mp_volume_pane_g1

0xb6f8,	// (0x00055cf8) ai2_mp_volume_pane_g2

0xb66d,	// (0x00055c6d) list_ai2_gene_pane_t1

0xb700,	// (0x00055d00) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00059ff1) ai2_mp_volume_pane_g

0x64cf,	// (0x00050acf) volume_small_pane_cp3

0xb708,	// (0x00055d08) aid_size_cell_ai2_button

0xb710,	// (0x00055d10) grid_ai2_button_pane

0xb719,	// (0x00055d19) cell_ai2_button_pane_ParamLimits

0xb719,	// (0x00055d19) cell_ai2_button_pane

0x7515,	// (0x00051b15) cell_ai2_button_pane_g1

0x751f,	// (0x00051b1f) grid_highlight_pane_cp8

0xb6b8,	// (0x00055cb8) ai2_gene_pane_t1_ParamLimits

0xb6b8,	// (0x00055cb8) ai2_gene_pane_t1

0x596f,	// (0x0004ff6f) aid_height_parent_landscape

0xb068,	// (0x00055668) aid_height_set_list

0xb079,	// (0x00055679) aid_size_parent

0xb353,	// (0x00055953) aid_size_cell_graphic_pane_ParamLimits

0xb5da,	// (0x00055bda) popup_ai2_data_window_g1_ParamLimits

0xb5da,	// (0x00055bda) popup_ai2_data_window_g1

0xb5e6,	// (0x00055be6) ai2_news_ticker_pane_g1

0xb5ee,	// (0x00055bee) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00059fdd) ai2_news_ticker_pane_g

0xb5f6,	// (0x00055bf6) ai2_news_ticker_pane_t1

0xb604,	// (0x00055c04) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00059fe2) ai2_news_ticker_pane_t

0xb631,	// (0x00055c31) heading_ai2_gene_pane_g1

0xb639,	// (0x00055c39) heading_ai2_gene_pane_t1_ParamLimits

0xb639,	// (0x00055c39) heading_ai2_gene_pane_t1

0xb64e,	// (0x00055c4e) list_highlight_pane_cp6

0xb656,	// (0x00055c56) ai2_gene_pane_ParamLimits

0xb656,	// (0x00055c56) ai2_gene_pane

0xb67b,	// (0x00055c7b) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00059fe7) list_ai2_gene_pane_t

0xb689,	// (0x00055c89) list_highlight_pane_cp8_ParamLimits

0xb689,	// (0x00055c89) list_highlight_pane_cp8

0xb69a,	// (0x00055c9a) ai2_gene_pane_g1_ParamLimits

0xb69a,	// (0x00055c9a) ai2_gene_pane_g1

0xb6ac,	// (0x00055cac) ai2_gene_pane_g2_ParamLimits

0xb6ac,	// (0x00055cac) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00059fec) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00059fec) ai2_gene_pane_g

0x8750,	// (0x00052d50) scroll_pane_cp12

0x592c,	// (0x0004ff2c) control_pane_t3_ParamLimits

0x592c,	// (0x0004ff2c) control_pane_t3

0x96dd,	// (0x00053cdd) status_small_pane_g8_ParamLimits

0x96dd,	// (0x00053cdd) status_small_pane_g8

0x5b0d,	// (0x0005010d) popup_find_window_ParamLimits

0x5d22,	// (0x00050322) popup_note_image_window_ParamLimits

0x5f88,	// (0x00050588) list_double2_graphic_pane_vc_g1_ParamLimits

0x5f88,	// (0x00050588) list_double2_graphic_pane_vc_g1

0x9394,	// (0x00053994) list_double2_graphic_pane_vc_g2_ParamLimits

0x9394,	// (0x00053994) list_double2_graphic_pane_vc_g2

0x7697,	// (0x00051c97) list_double2_graphic_pane_vc_g3_ParamLimits

0x7697,	// (0x00051c97) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059dc3) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059dc3) list_double2_graphic_pane_vc_g

0x5f94,	// (0x00050594) list_double2_graphic_pane_vc_t1_ParamLimits

0x5f94,	// (0x00050594) list_double2_graphic_pane_vc_t1

0x9394,	// (0x00053994) list_single_heading_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_single_heading_pane_vc_g1

0x7697,	// (0x00051c97) list_single_heading_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_single_heading_pane_vc_g

0x5fff,	// (0x000505ff) list_single_heading_pane_vc_t1_ParamLimits

0x5fff,	// (0x000505ff) list_single_heading_pane_vc_t1

0x6015,	// (0x00050615) list_single_heading_pane_vc_t2_ParamLimits

0x6015,	// (0x00050615) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00059de9) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00059de9) list_single_heading_pane_vc_t

0x76a3,	// (0x00051ca3) list_setting_number_pane_vc_g1_ParamLimits

0x76a3,	// (0x00051ca3) list_setting_number_pane_vc_g1

0x76af,	// (0x00051caf) list_setting_number_pane_vc_g2_ParamLimits

0x76af,	// (0x00051caf) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059dee) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059dee) list_setting_number_pane_vc_g

0x6049,	// (0x00050649) list_setting_number_pane_vc_t1_ParamLimits

0x6049,	// (0x00050649) list_setting_number_pane_vc_t1

0x605d,	// (0x0005065d) list_setting_number_pane_vc_t2_ParamLimits

0x605d,	// (0x0005065d) list_setting_number_pane_vc_t2

0x6079,	// (0x00050679) list_setting_number_pane_vc_t3_ParamLimits

0x6079,	// (0x00050679) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00059df3) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00059df3) list_setting_number_pane_vc_t

0x60a5,	// (0x000506a5) set_value_pane_vc_ParamLimits

0x60a5,	// (0x000506a5) set_value_pane_vc

0xb231,	// (0x00055831) list_double2_graphic_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double2_graphic_pane_vc

0x76ec,	// (0x00051cec) list_double2_large_graphic_pane_vc_ParamLimits

0x76ec,	// (0x00051cec) list_double2_large_graphic_pane_vc

0xb231,	// (0x00055831) list_double2_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double2_pane_vc

0xb231,	// (0x00055831) list_double_graphic_heading_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_graphic_heading_pane_vc

0xb231,	// (0x00055831) list_double_graphic_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_graphic_pane_vc

0xb231,	// (0x00055831) list_double_heading_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_heading_pane_vc

0x76fd,	// (0x00051cfd) list_double_large_graphic_pane_vc_ParamLimits

0x76fd,	// (0x00051cfd) list_double_large_graphic_pane_vc

0xb231,	// (0x00055831) list_double_number_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_number_pane_vc

0xb231,	// (0x00055831) list_double_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_pane_vc

0xb231,	// (0x00055831) list_double_time_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_double_time_pane_vc

0xb231,	// (0x00055831) list_setting_number_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_setting_number_pane_vc

0xb231,	// (0x00055831) list_setting_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_setting_pane_vc

0xb231,	// (0x00055831) list_single_graphic_heading_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_single_graphic_heading_pane_vc

0xb231,	// (0x00055831) list_single_heading_pane_vc_ParamLimits

0xb231,	// (0x00055831) list_single_heading_pane_vc

0x7719,	// (0x00051d19) list_single_number_heading_pane_vc_ParamLimits

0x7719,	// (0x00051d19) list_single_number_heading_pane_vc

0x5f88,	// (0x00050588) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5f88,	// (0x00050588) list_double_graphic_heading_pane_vc_g1

0x9394,	// (0x00053994) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9394,	// (0x00053994) list_double_graphic_heading_pane_vc_g2

0x7697,	// (0x00051c97) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7697,	// (0x00051c97) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059dc3) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059dc3) list_double_graphic_heading_pane_vc_g

0x77c7,	// (0x00051dc7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x77c7,	// (0x00051dc7) list_double_graphic_heading_pane_vc_t1

0x77e3,	// (0x00051de3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x77e3,	// (0x00051de3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00059ff8) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00059ff8) list_double_graphic_heading_pane_vc_t

0x76a3,	// (0x00051ca3) list_setting_pane_vc_g1_ParamLimits

0x76a3,	// (0x00051ca3) list_setting_pane_vc_g1

0x76af,	// (0x00051caf) list_setting_pane_vc_g2_ParamLimits

0x76af,	// (0x00051caf) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059dee) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059dee) list_setting_pane_vc_g

0x7801,	// (0x00051e01) list_setting_pane_vc_t1_ParamLimits

0x7801,	// (0x00051e01) list_setting_pane_vc_t1

0x781d,	// (0x00051e1d) list_setting_pane_vc_t2_ParamLimits

0x781d,	// (0x00051e1d) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0005a026) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0005a026) list_setting_pane_vc_t

0x60a5,	// (0x000506a5) set_value_pane_cp_vc_ParamLimits

0x60a5,	// (0x000506a5) set_value_pane_cp_vc

0x9394,	// (0x00053994) list_single_number_heading_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_single_number_heading_pane_vc_g1

0x7697,	// (0x00051c97) list_single_number_heading_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_single_number_heading_pane_vc_g

0x7839,	// (0x00051e39) list_single_number_heading_pane_vc_t1_ParamLimits

0x7839,	// (0x00051e39) list_single_number_heading_pane_vc_t1

0x784f,	// (0x00051e4f) list_single_number_heading_pane_vc_t2_ParamLimits

0x784f,	// (0x00051e4f) list_single_number_heading_pane_vc_t2

0x7861,	// (0x00051e61) list_single_number_heading_pane_vc_t3_ParamLimits

0x7861,	// (0x00051e61) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0005a02b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0005a02b) list_single_number_heading_pane_vc_t

0x5f88,	// (0x00050588) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5f88,	// (0x00050588) list_single_graphic_heading_pane_vc_g1

0x9394,	// (0x00053994) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9394,	// (0x00053994) list_single_graphic_heading_pane_vc_g4

0x7697,	// (0x00051c97) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7697,	// (0x00051c97) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00059dc3) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059dc3) list_single_graphic_heading_pane_vc_g

0x7839,	// (0x00051e39) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x7839,	// (0x00051e39) list_single_graphic_heading_pane_vc_t1

0x7873,	// (0x00051e73) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7873,	// (0x00051e73) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0005a032) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0005a032) list_single_graphic_heading_pane_vc_t

0x9394,	// (0x00053994) list_double2_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_double2_pane_vc_g1

0x7697,	// (0x00051c97) list_double2_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_double2_pane_vc_g

0x7885,	// (0x00051e85) list_double2_pane_vc_t1_ParamLimits

0x7885,	// (0x00051e85) list_double2_pane_vc_t1

0x789b,	// (0x00051e9b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x789b,	// (0x00051e9b) list_double2_large_graphic_pane_vc_g1

0x78a7,	// (0x00051ea7) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x78a7,	// (0x00051ea7) list_double2_large_graphic_pane_vc_g2

0x78b3,	// (0x00051eb3) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x78b3,	// (0x00051eb3) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0005a037) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0005a037) list_double2_large_graphic_pane_vc_g

0x78bf,	// (0x00051ebf) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x78bf,	// (0x00051ebf) list_double2_large_graphic_pane_vc_t1

0x78d5,	// (0x00051ed5) list_double_time_pane_vc_g1_ParamLimits

0x78d5,	// (0x00051ed5) list_double_time_pane_vc_g1

0x78e1,	// (0x00051ee1) list_double_time_pane_vc_g2_ParamLimits

0x78e1,	// (0x00051ee1) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0005a03e) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005a03e) list_double_time_pane_vc_g

0x78ed,	// (0x00051eed) list_double_time_pane_vc_t1_ParamLimits

0x78ed,	// (0x00051eed) list_double_time_pane_vc_t1

0x7911,	// (0x00051f11) list_double_time_pane_vc_t2_ParamLimits

0x7911,	// (0x00051f11) list_double_time_pane_vc_t2

0x7960,	// (0x00051f60) list_double_time_pane_vc_t3_ParamLimits

0x7960,	// (0x00051f60) list_double_time_pane_vc_t3

0x7972,	// (0x00051f72) list_double_time_pane_vc_t4_ParamLimits

0x7972,	// (0x00051f72) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0005a043) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a043) list_double_time_pane_vc_t

0x9394,	// (0x00053994) list_double_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_double_pane_vc_g1

0x7697,	// (0x00051c97) list_double_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_double_pane_vc_g

0x7986,	// (0x00051f86) list_double_pane_vc_t1_ParamLimits

0x7986,	// (0x00051f86) list_double_pane_vc_t1

0x799a,	// (0x00051f9a) list_double_pane_vc_t2_ParamLimits

0x799a,	// (0x00051f9a) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005a04c) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005a04c) list_double_pane_vc_t

0x9394,	// (0x00053994) list_double_number_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_double_number_pane_vc_g1

0x7697,	// (0x00051c97) list_double_number_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_double_number_pane_vc_g

0x79b2,	// (0x00051fb2) list_double_number_pane_vc_t1_ParamLimits

0x79b2,	// (0x00051fb2) list_double_number_pane_vc_t1

0x79c4,	// (0x00051fc4) list_double_number_pane_vc_t2_ParamLimits

0x79c4,	// (0x00051fc4) list_double_number_pane_vc_t2

0x79d8,	// (0x00051fd8) list_double_number_pane_vc_t3_ParamLimits

0x79d8,	// (0x00051fd8) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0005a051) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0005a051) list_double_number_pane_vc_t

0x79f0,	// (0x00051ff0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x79f0,	// (0x00051ff0) list_double_large_graphic_pane_vc_g1

0x7a12,	// (0x00052012) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7a12,	// (0x00052012) list_double_large_graphic_pane_vc_g2

0x7a26,	// (0x00052026) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7a26,	// (0x00052026) list_double_large_graphic_pane_vc_g3

0x7a35,	// (0x00052035) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7a35,	// (0x00052035) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0005a058) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0005a058) list_double_large_graphic_pane_vc_g

0x7a41,	// (0x00052041) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7a41,	// (0x00052041) list_double_large_graphic_pane_vc_t1

0x7a5d,	// (0x0005205d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7a5d,	// (0x0005205d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0005a061) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0005a061) list_double_large_graphic_pane_vc_t

0x9394,	// (0x00053994) list_double_heading_pane_vc_g1_ParamLimits

0x9394,	// (0x00053994) list_double_heading_pane_vc_g1

0x7697,	// (0x00051c97) list_double_heading_pane_vc_g2_ParamLimits

0x7697,	// (0x00051c97) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059de4) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059de4) list_double_heading_pane_vc_g

0x7a7f,	// (0x0005207f) list_double_heading_pane_vc_t1_ParamLimits

0x7a7f,	// (0x0005207f) list_double_heading_pane_vc_t1

0x7a93,	// (0x00052093) list_double_heading_pane_vc_t2_ParamLimits

0x7a93,	// (0x00052093) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0005a066) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0005a066) list_double_heading_pane_vc_t

0x7aab,	// (0x000520ab) list_double_graphic_pane_vc_g1_ParamLimits

0x7aab,	// (0x000520ab) list_double_graphic_pane_vc_g1

0x7ab7,	// (0x000520b7) list_double_graphic_pane_vc_g2_ParamLimits

0x7ab7,	// (0x000520b7) list_double_graphic_pane_vc_g2

0x9394,	// (0x00053994) list_double_graphic_pane_vc_g3_ParamLimits

0x9394,	// (0x00053994) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0005a06b) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0005a06b) list_double_graphic_pane_vc_g

0x7ad4,	// (0x000520d4) list_double_graphic_pane_vc_t1_ParamLimits

0x7ad4,	// (0x000520d4) list_double_graphic_pane_vc_t1

0x7afe,	// (0x000520fe) list_double_graphic_pane_vc_t2_ParamLimits

0x7afe,	// (0x000520fe) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0005a074) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0005a074) list_double_graphic_pane_vc_t

0x47c8,	// (0x0004edc8) aid_size_cell_fastswap

0x47d0,	// (0x0004edd0) aid_size_cell_touch_ParamLimits

0x47d0,	// (0x0004edd0) aid_size_cell_touch

0x4a35,	// (0x0004f035) popup_fast_swap_wide_window_ParamLimits

0x4a35,	// (0x0004f035) popup_fast_swap_wide_window

0x4b49,	// (0x0004f149) touch_pane_ParamLimits

0x4b49,	// (0x0004f149) touch_pane

0x87b2,	// (0x00052db2) button_value_adjust_pane_cp2

0x50bb,	// (0x0004f6bb) button_value_adjust_pane_cp4

0x50df,	// (0x0004f6df) form_field_data_pane_cp2

0x5100,	// (0x0004f700) form_field_data_wide_pane_cp2

0x8c26,	// (0x00053226) bg_scroll_pane_ParamLimits

0x54c3,	// (0x0004fac3) scroll_handle_pane_ParamLimits

0x54d7,	// (0x0004fad7) scroll_sc2_down_pane_ParamLimits

0x54d7,	// (0x0004fad7) scroll_sc2_down_pane

0x8c57,	// (0x00053257) scroll_sc2_up_pane_ParamLimits

0x8c57,	// (0x00053257) scroll_sc2_up_pane

0xbdd8,	// (0x000563d8) grid_wheel_folder_pane_g1_ParamLimits

0xbdd8,	// (0x000563d8) grid_wheel_folder_pane_g1

0x570a,	// (0x0004fd0a) clock_nsta_pane_cp2_ParamLimits

0x570a,	// (0x0004fd0a) clock_nsta_pane_cp2

0x9463,	// (0x00053a63) listscroll_midp_pane_ParamLimits

0x946f,	// (0x00053a6f) midp_canvas_pane

0x9757,	// (0x00053d57) nsta_clock_indic_pane

0x978b,	// (0x00053d8b) listscroll_form_pane_vc

0x9793,	// (0x00053d93) listscroll_set_pane_vc_ParamLimits

0x9793,	// (0x00053d93) listscroll_set_pane_vc

0x988c,	// (0x00053e8c) clock_nsta_pane

0x9901,	// (0x00053f01) indicator_nsta_pane

0x9be1,	// (0x000541e1) bg_popup_sub_pane_cp2_ParamLimits

0x9bf5,	// (0x000541f5) find_pane_cp2_ParamLimits

0x9bf5,	// (0x000541f5) find_pane_cp2

0x9c0b,	// (0x0005420b) grid_toobar_pane_ParamLimits

0x9ceb,	// (0x000542eb) list_form_gen_pane_vc_ParamLimits

0x9ceb,	// (0x000542eb) list_form_gen_pane_vc

0x9d01,	// (0x00054301) scroll_pane_cp8_vc_ParamLimits

0x9d01,	// (0x00054301) scroll_pane_cp8_vc

0x9d7d,	// (0x0005437d) data_form_wide_pane_vc_ParamLimits

0x9d7d,	// (0x0005437d) data_form_wide_pane_vc

0x9d89,	// (0x00054389) form_field_data_wide_pane_vc_g1

0x9d91,	// (0x00054391) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d91,	// (0x00054391) form_field_data_wide_pane_vc_t1

0x87c6,	// (0x00052dc6) input_focus_pane_cp6_vc_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_cp6_vc

0xa0b7,	// (0x000546b7) list_midp_pane_ParamLimits

0xa0c3,	// (0x000546c3) scroll_pane_cp16_ParamLimits

0xa0c3,	// (0x000546c3) scroll_pane_cp16

0xa125,	// (0x00054725) button_value_adjust_pane_ParamLimits

0xa125,	// (0x00054725) button_value_adjust_pane

0xb08b,	// (0x0005568b) button_value_adjust_pane_cp6_ParamLimits

0xb08b,	// (0x0005568b) button_value_adjust_pane_cp6

0xb1b5,	// (0x000557b5) settings_code_pane_cp_ParamLimits

0xb1b5,	// (0x000557b5) settings_code_pane_cp

0x7515,	// (0x00051b15) cell_touch_pane_g1

0x7515,	// (0x00051b15) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059d08) cell_touch_pane_g

0xb72b,	// (0x00055d2b) cell_touch_pane_cp_ParamLimits

0xb72b,	// (0x00055d2b) cell_touch_pane_cp

0xb73b,	// (0x00055d3b) cell_touch_pane_ParamLimits

0xb73b,	// (0x00055d3b) cell_touch_pane

0x7515,	// (0x00051b15) scroll_sc2_down_pane_g1

0x7515,	// (0x00051b15) scroll_sc2_up_pane_g1

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp4_vc

0xb74d,	// (0x00055d4d) list_set_graphic_pane_vc_g1_ParamLimits

0xb74d,	// (0x00055d4d) list_set_graphic_pane_vc_g1

0xb759,	// (0x00055d59) list_set_graphic_pane_vc_g2_ParamLimits

0xb759,	// (0x00055d59) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00059ffd) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00059ffd) list_set_graphic_pane_vc_g

0xb765,	// (0x00055d65) text_primary_small_cp13_vc_ParamLimits

0xb765,	// (0x00055d65) text_primary_small_cp13_vc

0xb77d,	// (0x00055d7d) list_set_graphic_pane_vc_ParamLimits

0xb77d,	// (0x00055d7d) list_set_graphic_pane_vc

0x751f,	// (0x00051b1f) input_focus_pane_cp2_vc

0x7515,	// (0x00051b15) setting_code_pane_vc_g1

0x7f70,	// (0x00052570) setting_code_pane_vc_t1

0xb78f,	// (0x00055d8f) set_text_pane_vc_t1_ParamLimits

0xb78f,	// (0x00055d8f) set_text_pane_vc_t1

0x751f,	// (0x00051b1f) input_focus_pane_cp1_vc

0xb7ab,	// (0x00055dab) list_set_text_pane_vc

0x7515,	// (0x00051b15) setting_text_pane_vc_g1

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp2_vc

0x7f67,	// (0x00052567) setting_slider_graphic_pane_vc_g1

0xb7b5,	// (0x00055db5) setting_slider_graphic_pane_vc_t1

0xb7c5,	// (0x00055dc5) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0005a002) setting_slider_graphic_pane_vc_t

0xb7d5,	// (0x00055dd5) slider_set_pane_cp_vc

0xb7dd,	// (0x00055ddd) slider_set_pane_vc_g1

0xb7e6,	// (0x00055de6) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0005a007) slider_set_pane_vc_g

0x8812,	// (0x00052e12) set_opt_bg_pane_g1_copy1

0x881a,	// (0x00052e1a) set_opt_bg_pane_g2_copy1

0xb812,	// (0x00055e12) set_opt_bg_pane_g3_copy1

0x882a,	// (0x00052e2a) set_opt_bg_pane_g4_copy1

0x8832,	// (0x00052e32) set_opt_bg_pane_g5_copy1

0x883a,	// (0x00052e3a) set_opt_bg_pane_g6_copy1

0xb81c,	// (0x00055e1c) set_opt_bg_pane_g7_copy1

0xb824,	// (0x00055e24) set_opt_bg_pane_g8_copy1

0xb82e,	// (0x00055e2e) set_opt_bg_pane_g9_copy1

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp_vc

0xb838,	// (0x00055e38) setting_slider_pane_vc_t1

0xb847,	// (0x00055e47) setting_slider_pane_vc_t2

0xb857,	// (0x00055e57) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0005a016) setting_slider_pane_vc_t

0xb867,	// (0x00055e67) slider_set_pane_vc

0x618b,	// (0x0005078b) volume_set_pane_vc_g1

0x6194,	// (0x00050794) volume_set_pane_vc_g2

0x619d,	// (0x0005079d) volume_set_pane_vc_g3

0x61a6,	// (0x000507a6) volume_set_pane_vc_g4

0x61af,	// (0x000507af) volume_set_pane_vc_g5

0x61b8,	// (0x000507b8) volume_set_pane_vc_g6

0x61c1,	// (0x000507c1) volume_set_pane_vc_g7

0x61ca,	// (0x000507ca) volume_set_pane_vc_g8

0x61d3,	// (0x000507d3) volume_set_pane_vc_g9

0x61dc,	// (0x000507dc) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00059ebb) volume_set_pane_vc_g

0xb86f,	// (0x00055e6f) volume_set_pane_vc

0xb877,	// (0x00055e77) button_value_adjust_pane_cp1_vc

0xb881,	// (0x00055e81) list_highlight_pane_cp2_vc

0xb88a,	// (0x00055e8a) list_set_pane_vc_ParamLimits

0xb88a,	// (0x00055e8a) list_set_pane_vc

0xb8e8,	// (0x00055ee8) main_pane_set_vc_t1_ParamLimits

0xb8e8,	// (0x00055ee8) main_pane_set_vc_t1

0xb8fd,	// (0x00055efd) main_pane_set_vc_t2_ParamLimits

0xb8fd,	// (0x00055efd) main_pane_set_vc_t2

0xb90f,	// (0x00055f0f) main_pane_set_vc_t3_ParamLimits

0xb90f,	// (0x00055f0f) main_pane_set_vc_t3

0xb923,	// (0x00055f23) main_pane_set_vc_t4_ParamLimits

0xb923,	// (0x00055f23) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0005a01d) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0005a01d) main_pane_set_vc_t

0xb937,	// (0x00055f37) setting_code_pane_vc_ParamLimits

0xb937,	// (0x00055f37) setting_code_pane_vc

0xb948,	// (0x00055f48) setting_slider_graphic_pane_vc

0xb948,	// (0x00055f48) setting_slider_pane_vc

0xb948,	// (0x00055f48) setting_text_pane_vc

0xb948,	// (0x00055f48) setting_volume_pane_vc

0xb952,	// (0x00055f52) scroll_pane_cp121_vc

0x87a0,	// (0x00052da0) set_content_pane_vc

0xb95a,	// (0x00055f5a) button_value_adjust_pane_g1

0xb963,	// (0x00055f63) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0005a079) button_value_adjust_pane_g

0xb96c,	// (0x00055f6c) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb96c,	// (0x00055f6c) form_field_slider_wide_pane_vc_t1

0xb980,	// (0x00055f80) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb980,	// (0x00055f80) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0005a07e) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0005a07e) form_field_slider_wide_pane_vc_t

0x81a0,	// (0x000527a0) input_focus_pane_cp10_vc_ParamLimits

0x81a0,	// (0x000527a0) input_focus_pane_cp10_vc

0xb9ae,	// (0x00055fae) slider_cont_pane_cp1_vc_ParamLimits

0xb9ae,	// (0x00055fae) slider_cont_pane_cp1_vc

0xb9c0,	// (0x00055fc0) slider_form_pane_g1_cp2

0xb7e6,	// (0x00055de6) slider_form_pane_g2_cp2

0xb9ed,	// (0x00055fed) form_field_slider_pane_vc_t3

0xb9fb,	// (0x00055ffb) form_field_slider_pane_vc_t4

0xba09,	// (0x00056009) slider_form_pane_vc_ParamLimits

0xba09,	// (0x00056009) slider_form_pane_vc

0xba16,	// (0x00056016) form_field_slider_pane_vc_t1_ParamLimits

0xba16,	// (0x00056016) form_field_slider_pane_vc_t1

0xb980,	// (0x00055f80) form_field_slider_pane_vc_t2_ParamLimits

0xb980,	// (0x00055f80) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0005a090) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0005a090) form_field_slider_pane_vc_t

0x81a0,	// (0x000527a0) input_focus_pane_cp9_vc_ParamLimits

0x81a0,	// (0x000527a0) input_focus_pane_cp9_vc

0xba32,	// (0x00056032) slider_cont_pane_vc_ParamLimits

0xba32,	// (0x00056032) slider_cont_pane_vc

0xba46,	// (0x00056046) list_form_graphic_pane_cp_vc_ParamLimits

0xba46,	// (0x00056046) list_form_graphic_pane_cp_vc

0x9d89,	// (0x00054389) form_field_popup_wide_pane_vc_g1

0xba5b,	// (0x0005605b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba5b,	// (0x0005605b) form_field_popup_wide_pane_vc_t1

0x87c6,	// (0x00052dc6) input_focus_pane_cp8_vc_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_cp8_vc

0xbaa0,	// (0x000560a0) list_form_wide_pane_vc_ParamLimits

0xbaa0,	// (0x000560a0) list_form_wide_pane_vc

0xbaac,	// (0x000560ac) list_form_graphic_pane_vc_g1

0xbab4,	// (0x000560b4) list_form_graphic_pane_vc_t1_ParamLimits

0xbab4,	// (0x000560b4) list_form_graphic_pane_vc_t1

0x7f25,	// (0x00052525) list_highlight_pane_cp5_vc_ParamLimits

0x7f25,	// (0x00052525) list_highlight_pane_cp5_vc

0xbad0,	// (0x000560d0) list_form_graphic_pane_vc_ParamLimits

0xbad0,	// (0x000560d0) list_form_graphic_pane_vc

0x9d89,	// (0x00054389) form_field_popup_pane_vc_g1

0xbae6,	// (0x000560e6) form_field_popup_pane_vc_t1_ParamLimits

0xbae6,	// (0x000560e6) form_field_popup_pane_vc_t1

0x87c6,	// (0x00052dc6) input_focus_pane_cp7_vc_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_cp7_vc

0xbafd,	// (0x000560fd) list_form_pane_vc_ParamLimits

0xbafd,	// (0x000560fd) list_form_pane_vc

0xbb09,	// (0x00056109) data_form_pane_vc_t1_ParamLimits

0xbb09,	// (0x00056109) data_form_pane_vc_t1

0x8812,	// (0x00052e12) input_focus_pane_vc_g1

0x881a,	// (0x00052e1a) input_focus_pane_vc_g2

0x8822,	// (0x00052e22) input_focus_pane_vc_g3

0x882a,	// (0x00052e2a) input_focus_pane_vc_g4

0x8832,	// (0x00052e32) input_focus_pane_vc_g5

0x883a,	// (0x00052e3a) input_focus_pane_vc_g6

0x8842,	// (0x00052e42) input_focus_pane_vc_g7

0x884a,	// (0x00052e4a) input_focus_pane_vc_g8

0x8852,	// (0x00052e52) input_focus_pane_vc_g9

0x7515,	// (0x00051b15) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00059c91) input_focus_pane_vc_g

0x9d7d,	// (0x0005437d) data_form_pane_vc_ParamLimits

0x9d7d,	// (0x0005437d) data_form_pane_vc

0x9d89,	// (0x00054389) form_field_data_pane_vc_g1

0xbb24,	// (0x00056124) form_field_data_pane_vc_t1_ParamLimits

0xbb24,	// (0x00056124) form_field_data_pane_vc_t1

0x87c6,	// (0x00052dc6) input_focus_pane_vc_ParamLimits

0x87c6,	// (0x00052dc6) input_focus_pane_vc

0xbb3e,	// (0x0005613e) button_value_adjust_pane_cp3_vc

0xbb46,	// (0x00056146) button_value_adjust_pane_cp5_vc

0xbb4e,	// (0x0005614e) form_field_data_pane_vc_ParamLimits

0xbb4e,	// (0x0005614e) form_field_data_pane_vc

0xbb65,	// (0x00056165) form_field_data_pane_vc_cp2

0xbb6d,	// (0x0005616d) form_field_data_wide_pane_vc_ParamLimits

0xbb6d,	// (0x0005616d) form_field_data_wide_pane_vc

0xbb83,	// (0x00056183) form_field_data_wide_pane_vc_cp2

0xbb8b,	// (0x0005618b) form_field_popup_pane_vc_ParamLimits

0xbb8b,	// (0x0005618b) form_field_popup_pane_vc

0xbba2,	// (0x000561a2) form_field_popup_wide_pane_vc_ParamLimits

0xbba2,	// (0x000561a2) form_field_popup_wide_pane_vc

0xbbb8,	// (0x000561b8) form_field_slider_pane_vc_ParamLimits

0xbbb8,	// (0x000561b8) form_field_slider_pane_vc

0xbbcb,	// (0x000561cb) form_field_slider_wide_pane_vc_ParamLimits

0xbbcb,	// (0x000561cb) form_field_slider_wide_pane_vc

0xbbde,	// (0x000561de) grid_touch_1_pane_ParamLimits

0xbbde,	// (0x000561de) grid_touch_1_pane

0xbbea,	// (0x000561ea) grid_touch_2_pane_ParamLimits

0xbbea,	// (0x000561ea) grid_touch_2_pane

0x9722,	// (0x00053d22) touch_pane_g1_ParamLimits

0x9722,	// (0x00053d22) touch_pane_g1

0xbc02,	// (0x00056202) cell_app_pane_cp_wide_ParamLimits

0xbc02,	// (0x00056202) cell_app_pane_cp_wide

0xbc13,	// (0x00056213) grid_popup_fast_wide_pane_ParamLimits

0xbc13,	// (0x00056213) grid_popup_fast_wide_pane

0xbc27,	// (0x00056227) scroll_pane_cp19_ParamLimits

0xbc27,	// (0x00056227) scroll_pane_cp19

0x751f,	// (0x00051b1f) bg_popup_window_pane_cp20

0xbc3b,	// (0x0005623b) listscroll_popup_fast_wide_pane

0x7f25,	// (0x00052525) grid_indicator_nsta_pane

0xbc43,	// (0x00056243) clock_nsta_pane_g1

0xbc4c,	// (0x0005624c) clock_nsta_pane_t1

0xbc68,	// (0x00056268) cell_indicator_nsta_pane_ParamLimits

0xbc68,	// (0x00056268) cell_indicator_nsta_pane

0xbc99,	// (0x00056299) cell_indicator_nsta_pane_g1

0xbca7,	// (0x000562a7) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0005a0a1) cell_indicator_nsta_pane_g

0xbcb4,	// (0x000562b4) clock_nsta_pane_cp

0xbcbd,	// (0x000562bd) indicator_nsta_pane_cp

0xbcc5,	// (0x000562c5) nsta_clock_indic_pane_g1

0x7fee,	// (0x000525ee) grid_indicator_pane

0x8d4c,	// (0x0005334c) scroll_pane_cp29

0x5659,	// (0x0004fc59) indicator_nsta_pane_cp2_ParamLimits

0x5659,	// (0x0004fc59) indicator_nsta_pane_cp2

0x7f25,	// (0x00052525) main_apps_wheel_pane

0x9f98,	// (0x00054598) form_midp_field_text_pane_ParamLimits

0xa0e3,	// (0x000546e3) scroll_bar_cp050_ParamLimits

0xbd15,	// (0x00056315) cell_indicator_pane_ParamLimits

0xbd15,	// (0x00056315) cell_indicator_pane

0xbd2c,	// (0x0005632c) cell_indicator_pane_g1

0xbd36,	// (0x00056336) grid_wheel_folder_pane_ParamLimits

0xbd36,	// (0x00056336) grid_wheel_folder_pane

0xbd4c,	// (0x0005634c) list_wheel_apps_pane_ParamLimits

0xbd4c,	// (0x0005634c) list_wheel_apps_pane

0xbd5d,	// (0x0005635d) main_apps_wheel_pane_g1_ParamLimits

0xbd5d,	// (0x0005635d) main_apps_wheel_pane_g1

0xbd71,	// (0x00056371) main_apps_wheel_pane_g2_ParamLimits

0xbd71,	// (0x00056371) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0005a0bd) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0005a0bd) main_apps_wheel_pane_g

0xbd89,	// (0x00056389) main_apps_wheel_pane_t1_ParamLimits

0xbd89,	// (0x00056389) main_apps_wheel_pane_t1

0xbdac,	// (0x000563ac) list_wheel_apps_pane_g1

0xbdb4,	// (0x000563b4) list_wheel_apps_pane_g2

0xbdbc,	// (0x000563bc) list_wheel_apps_pane_g3

0xbdc4,	// (0x000563c4) list_wheel_apps_pane_g4

0xbdce,	// (0x000563ce) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0005a0c2) list_wheel_apps_pane_g

0x92db,	// (0x000538db) navi_icon_text_pane

0x97bb,	// (0x00053dbb) aid_fill_nsta

0xbdf1,	// (0x000563f1) navi_icon_text_pane_g1

0xbdfd,	// (0x000563fd) navi_icon_text_pane_t1

0x9162,	// (0x00053762) list_set_graphic_pane_t1_ParamLimits

0x9162,	// (0x00053762) list_set_graphic_pane_t1

0xa846,	// (0x00054e46) popup_midp_note_alarm_window_t6_ParamLimits

0xa846,	// (0x00054e46) popup_midp_note_alarm_window_t6

0xa858,	// (0x00054e58) popup_midp_note_alarm_window_t7_ParamLimits

0xa858,	// (0x00054e58) popup_midp_note_alarm_window_t7

0xa86a,	// (0x00054e6a) popup_midp_note_alarm_window_t8_ParamLimits

0xa86a,	// (0x00054e6a) popup_midp_note_alarm_window_t8

0xa87c,	// (0x00054e7c) popup_midp_note_alarm_window_t9_ParamLimits

0xa87c,	// (0x00054e7c) popup_midp_note_alarm_window_t9

0xa88e,	// (0x00054e8e) popup_midp_note_alarm_window_t10_ParamLimits

0xa88e,	// (0x00054e8e) popup_midp_note_alarm_window_t10

0xa8a0,	// (0x00054ea0) popup_midp_note_alarm_window_t11_ParamLimits

0xa8a0,	// (0x00054ea0) popup_midp_note_alarm_window_t11

0xa8b2,	// (0x00054eb2) scroll_pane_cp17_ParamLimits

0xa8b2,	// (0x00054eb2) scroll_pane_cp17

0x618b,	// (0x0005078b) volume_small_pane_cp_g1

0x64d8,	// (0x00050ad8) volume_small_pane_cp_g2

0x64e1,	// (0x00050ae1) volume_small_pane_cp_g3

0x64ea,	// (0x00050aea) volume_small_pane_cp_g4

0x64f3,	// (0x00050af3) volume_small_pane_cp_g5

0x64fc,	// (0x00050afc) volume_small_pane_cp_g6

0x6505,	// (0x00050b05) volume_small_pane_cp_g7

0x650e,	// (0x00050b0e) volume_small_pane_cp_g8

0x6517,	// (0x00050b17) volume_small_pane_cp_g9

0x6520,	// (0x00050b20) volume_small_pane_cp_g10

0x9538,	// (0x00053b38) midp_ticker_pane_g1_ParamLimits

0x9544,	// (0x00053b44) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00059d5d) midp_ticker_pane_g_ParamLimits

0x9550,	// (0x00053b50) midp_ticker_pane_t1_ParamLimits

0x97d1,	// (0x00053dd1) aid_fill_nsta_2

0xa0cf,	// (0x000546cf) list_form2_midp_pane

0xb200,	// (0x00055800) midp_editing_number_pane_ParamLimits

0xb20f,	// (0x0005580f) midp_ticker_pane_ParamLimits

0xbe0f,	// (0x0005640f) form2_midp_field_pane

0xbe33,	// (0x00056433) scroll_pane_cp51

0xbe53,	// (0x00056453) form2_midp_button_pane_ParamLimits

0xbe53,	// (0x00056453) form2_midp_button_pane

0xbe65,	// (0x00056465) form2_midp_content_pane_ParamLimits

0xbe65,	// (0x00056465) form2_midp_content_pane

0xbe7f,	// (0x0005647f) form2_midp_field_choice_group_pane

0xbe87,	// (0x00056487) form2_midp_field_pane_g1

0xbe8f,	// (0x0005648f) form2_midp_field_pane_g2

0xbe97,	// (0x00056497) form2_midp_field_pane_g3

0xbe9f,	// (0x0005649f) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0005a0e7) form2_midp_field_pane_g

0xbea7,	// (0x000564a7) form2_midp_gauge_slider_pane

0xbeaf,	// (0x000564af) form2_midp_gauge_wait_pane

0xbeb7,	// (0x000564b7) form2_midp_image_pane_ParamLimits

0xbeb7,	// (0x000564b7) form2_midp_image_pane

0xbed2,	// (0x000564d2) form2_midp_label_pane_ParamLimits

0xbed2,	// (0x000564d2) form2_midp_label_pane

0xbeeb,	// (0x000564eb) form2_midp_label_pane_cp_ParamLimits

0xbeeb,	// (0x000564eb) form2_midp_label_pane_cp

0xbf0c,	// (0x0005650c) form2_midp_string_pane_ParamLimits

0xbf0c,	// (0x0005650c) form2_midp_string_pane

0x7b28,	// (0x00052128) form2_midp_text_pane_ParamLimits

0x7b28,	// (0x00052128) form2_midp_text_pane

0xbf1e,	// (0x0005651e) form2_midp_time_pane

0xbf2e,	// (0x0005652e) input_focus_pane_cp51_ParamLimits

0xbf2e,	// (0x0005652e) input_focus_pane_cp51

0xbf46,	// (0x00056546) form2_midp_label_pane_t1_ParamLimits

0xbf46,	// (0x00056546) form2_midp_label_pane_t1

0x7b47,	// (0x00052147) form2_mdip_text_pane_t1_ParamLimits

0x7b47,	// (0x00052147) form2_mdip_text_pane_t1

0x7b65,	// (0x00052165) form2_midp_time_pane_t1

0xbf8f,	// (0x0005658f) form2_midp_gauge_slider_pane_t1

0xbfa1,	// (0x000565a1) form2_midp_gauge_slider_pane_t2

0xbfb3,	// (0x000565b3) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0005a0f0) form2_midp_gauge_slider_pane_t

0xbfc5,	// (0x000565c5) form2_midp_slider_pane

0xbfd1,	// (0x000565d1) form2_midp_gauge_wait_pane_t1

0xbfdf,	// (0x000565df) form2_midp_wait_pane_ParamLimits

0xbfdf,	// (0x000565df) form2_midp_wait_pane

0xc00a,	// (0x0005660a) list_single_2graphic_pane_cp4_ParamLimits

0xc00a,	// (0x0005660a) list_single_2graphic_pane_cp4

0x9df1,	// (0x000543f1) list_single_midp_graphic_pane_cp_ParamLimits

0x9df1,	// (0x000543f1) list_single_midp_graphic_pane_cp

0x751f,	// (0x00051b1f) list_highlight_pane_cp20

0xc02e,	// (0x0005662e) list_single_2graphic_pane_g1_cp4

0xc036,	// (0x00056636) list_single_2graphic_pane_g2_cp4

0xc03e,	// (0x0005663e) list_single_2graphic_pane_t1_cp4

0x7f25,	// (0x00052525) list_highlight_pane_cp21

0xc04d,	// (0x0005664d) list_single_midp_graphic_pane_g4_cp

0xc05c,	// (0x0005665c) list_single_midp_graphic_pane_t1_cp

0xc071,	// (0x00056671) form2_mdip_string_pane_t1_ParamLimits

0xc071,	// (0x00056671) form2_mdip_string_pane_t1

0x751f,	// (0x00051b1f) bg_wml_button_pane_cp2

0x7515,	// (0x00051b15) form2_midp_image_pane_g1

0x7646,	// (0x00051c46) list_double_large_graphic_pane_g5_ParamLimits

0x7646,	// (0x00051c46) list_double_large_graphic_pane_g5

0x9463,	// (0x00053a63) midp_form_pane_ParamLimits

0x7f25,	// (0x00052525) main_apps_wheel_pane_ParamLimits

0x5d48,	// (0x00050348) popup_preview_window_ParamLimits

0x5d48,	// (0x00050348) popup_preview_window

0x5f03,	// (0x00050503) popup_touch_info_window_ParamLimits

0x5f03,	// (0x00050503) popup_touch_info_window

0x5f21,	// (0x00050521) popup_touch_menu_window_ParamLimits

0x5f21,	// (0x00050521) popup_touch_menu_window

0x750b,	// (0x00051b0b) bg_popup_sub_pane_cp6

0xc16a,	// (0x0005676a) list_touch_menu_pane

0xc172,	// (0x00056772) list_single_touch_menu_pane_ParamLimits

0xc172,	// (0x00056772) list_single_touch_menu_pane

0xc188,	// (0x00056788) list_single_touch_menu_pane_t1

0x7f25,	// (0x00052525) bg_popup_sub_pane_cp7_ParamLimits

0x7f25,	// (0x00052525) bg_popup_sub_pane_cp7

0xc196,	// (0x00056796) heading_sub_pane

0xc19e,	// (0x0005679e) list_touch_info_pane_ParamLimits

0xc19e,	// (0x0005679e) list_touch_info_pane

0xc1ad,	// (0x000567ad) list_single_touch_info_pane_ParamLimits

0xc1ad,	// (0x000567ad) list_single_touch_info_pane

0xc1bf,	// (0x000567bf) list_single_touch_info_pane_t1

0xc1cd,	// (0x000567cd) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0005a0fe) list_single_touch_info_pane_t

0x945b,	// (0x00053a5b) bg_popup_heading_pane_cp

0xc1db,	// (0x000567db) heading_sub_pane_t1

0x9d17,	// (0x00054317) bg_popup_preview_window_pane_cp_ParamLimits

0x9d17,	// (0x00054317) bg_popup_preview_window_pane_cp

0xc196,	// (0x00056796) heading_preview_pane

0xc19e,	// (0x0005679e) list_preview_pane_ParamLimits

0xc19e,	// (0x0005679e) list_preview_pane

0xc1e9,	// (0x000567e9) popup_preview_window_g1

0xc1ad,	// (0x000567ad) list_single_preview_pane_ParamLimits

0xc1ad,	// (0x000567ad) list_single_preview_pane

0xc1f1,	// (0x000567f1) list_single_preview_pane_g1

0xc1f9,	// (0x000567f9) list_single_preview_pane_t1

0xc1bf,	// (0x000567bf) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0005a103) list_single_preview_pane_t

0xc207,	// (0x00056807) bg_popup_heading_pane_cp2_ParamLimits

0xc207,	// (0x00056807) bg_popup_heading_pane_cp2

0xc21d,	// (0x0005681d) heading_preview_pane_g1

0xc225,	// (0x00056825) heading_preview_pane_t1_ParamLimits

0xc225,	// (0x00056825) heading_preview_pane_t1

0x8011,	// (0x00052611) soft_indicator_pane_t1_ParamLimits

0x872d,	// (0x00052d2d) scroll_pane_ParamLimits

0x8c45,	// (0x00053245) scroll_sc2_left_pane

0x8c4e,	// (0x0005324e) scroll_sc2_right_pane

0x8c6d,	// (0x0005326d) scroll_bg_pane_g1_ParamLimits

0x8c82,	// (0x00053282) scroll_bg_pane_g2_ParamLimits

0x8c9a,	// (0x0005329a) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00059ce8) scroll_bg_pane_g_ParamLimits

0x8c6d,	// (0x0005326d) scroll_handle_pane_g1_ParamLimits

0x8cbc,	// (0x000532bc) scroll_handle_pane_g2_ParamLimits

0x8c9a,	// (0x0005329a) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00059cef) scroll_handle_pane_g_ParamLimits

0x59c9,	// (0x0004ffc9) popup_choice_list_window_ParamLimits

0x59c9,	// (0x0004ffc9) popup_choice_list_window

0x9bed,	// (0x000541ed) choice_list_pane

0x9c6f,	// (0x0005426f) cell_toolbar_pane_t1

0x9c97,	// (0x00054297) toolbar_button_pane_ParamLimits

0xad6c,	// (0x0005536c) ai_gene_pane_1_t2_ParamLimits

0xad6c,	// (0x0005536c) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00059f17) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00059f17) ai_gene_pane_1_t

0xc242,	// (0x00056842) scroll_sc2_left_pane_g1

0xc242,	// (0x00056842) scroll_sc2_right_pane_g1

0x977f,	// (0x00053d7f) bg_popup_sub_pane_cp10

0xc24c,	// (0x0005684c) list_choice_list_pane

0xc265,	// (0x00056865) list_single_choice_list_pane_ParamLimits

0xc265,	// (0x00056865) list_single_choice_list_pane

0xc278,	// (0x00056878) list_single_choice_list_pane_g1

0x894b,	// (0x00052f4b) list_single_choice_list_pane_t1_ParamLimits

0x894b,	// (0x00052f4b) list_single_choice_list_pane_t1

0xc280,	// (0x00056880) choice_list_pane_g1

0xc288,	// (0x00056888) choice_list_pane_t1

0x750b,	// (0x00051b0b) input_focus_pane_cp11

0x8b22,	// (0x00053122) title_pane_stacon_g2_ParamLimits

0x8b22,	// (0x00053122) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00059cce) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00059cce) title_pane_stacon_g

0x945b,	// (0x00053a5b) cursor_press_pane

0x5a75,	// (0x00050075) popup_fep_hwr_window_ParamLimits

0x5a75,	// (0x00050075) popup_fep_hwr_window

0x5aef,	// (0x000500ef) popup_fep_vkb_window_ParamLimits

0x5aef,	// (0x000500ef) popup_fep_vkb_window

0xc296,	// (0x00056896) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0005a12c) fep_vkb_side_pane_g_ParamLimits

0x6562,	// (0x00050b62) fep_hwr_candidate_pane_ParamLimits

0x6562,	// (0x00050b62) fep_hwr_candidate_pane

0x658c,	// (0x00050b8c) fep_hwr_side_pane_ParamLimits

0x658c,	// (0x00050b8c) fep_hwr_side_pane

0x65ac,	// (0x00050bac) fep_hwr_top_pane_ParamLimits

0x65ac,	// (0x00050bac) fep_hwr_top_pane

0x65c4,	// (0x00050bc4) fep_hwr_write_pane_ParamLimits

0x65c4,	// (0x00050bc4) fep_hwr_write_pane

0xfb2c,	// (0x0005a12c) fep_vkb_side_pane_g

0xc29e,	// (0x0005689e) fep_hwr_top_pane_g1

0xc2b0,	// (0x000568b0) fep_hwr_top_pane_g2

0x65fe,	// (0x00050bfe) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0005a108) fep_hwr_top_pane_g

0x6613,	// (0x00050c13) fep_hwr_top_text_pane

0x8e3c,	// (0x0005343c) fep_hwr_top_text_pane_g1

0xc2e6,	// (0x000568e6) fep_hwr_top_text_pane_t1

0x6709,	// (0x00050d09) fep_hwr_candidate_pane_g1

0xc539,	// (0x00056b39) fep_vkb_keypad_pane_g3_ParamLimits

0xc539,	// (0x00056b39) fep_vkb_keypad_pane_g3

0xc561,	// (0x00056b61) fep_vkb_keypad_pane_g4_ParamLimits

0xc561,	// (0x00056b61) fep_vkb_keypad_pane_g4

0xc5d0,	// (0x00056bd0) fep_vkb_bottom_pane_g2_ParamLimits

0xc5d0,	// (0x00056bd0) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0005a133) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0005a133) fep_vkb_bottom_pane_g

0xc242,	// (0x00056842) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0005a13d) cell_vkb_side_pane_g

0xc65b,	// (0x00056c5b) cell_vkb_side_pane_t1

0xc669,	// (0x00056c69) cell_vkb_side_pane_t1_copy1

0xc242,	// (0x00056842) bg_fep_vkb_candidate_pane_g2

0xc795,	// (0x00056d95) cell_vkb_candidate_pane_ParamLimits

0xc2f4,	// (0x000568f4) aid_size_cell_vkb_ParamLimits

0xc2f4,	// (0x000568f4) aid_size_cell_vkb

0xc795,	// (0x00056d95) cell_vkb_candidate_pane

0x6730,	// (0x00050d30) bg_popup_fep_shadow_pane_g1

0xc382,	// (0x00056982) fep_vkb_bottom_pane_ParamLimits

0xc382,	// (0x00056982) fep_vkb_bottom_pane

0xc3b8,	// (0x000569b8) fep_vkb_candidate_pane_ParamLimits

0xc3b8,	// (0x000569b8) fep_vkb_candidate_pane

0xc3d4,	// (0x000569d4) fep_vkb_keypad_pane_ParamLimits

0xc3d4,	// (0x000569d4) fep_vkb_keypad_pane

0xc41a,	// (0x00056a1a) fep_vkb_side_pane_ParamLimits

0xc41a,	// (0x00056a1a) fep_vkb_side_pane

0xc456,	// (0x00056a56) fep_vkb_top_pane_ParamLimits

0xc456,	// (0x00056a56) fep_vkb_top_pane

0xc492,	// (0x00056a92) fep_vkb_top_pane_g1_ParamLimits

0xc492,	// (0x00056a92) fep_vkb_top_pane_g1

0xc4a1,	// (0x00056aa1) fep_vkb_top_pane_g2_ParamLimits

0xc4a1,	// (0x00056aa1) fep_vkb_top_pane_g2

0xc4b0,	// (0x00056ab0) fep_vkb_top_pane_g3_ParamLimits

0xc4b0,	// (0x00056ab0) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0005a123) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0005a123) fep_vkb_top_pane_g

0xc4ce,	// (0x00056ace) fep_vkb_top_text_pane_ParamLimits

0xc4ce,	// (0x00056ace) fep_vkb_top_text_pane

0xc4df,	// (0x00056adf) fep_vkb_side_pane_g1_ParamLimits

0xc4df,	// (0x00056adf) fep_vkb_side_pane_g1

0xc528,	// (0x00056b28) grid_vkb_side_pane_ParamLimits

0xc528,	// (0x00056b28) grid_vkb_side_pane

0x6738,	// (0x00050d38) bg_popup_fep_shadow_pane_g2

0x6741,	// (0x00050d41) bg_popup_fep_shadow_pane_g3

0x6749,	// (0x00050d49) bg_popup_fep_shadow_pane_g4

0x6752,	// (0x00050d52) bg_popup_fep_shadow_pane_g5

0x675c,	// (0x00050d5c) bg_popup_fep_shadow_pane_g6

0x6764,	// (0x00050d64) bg_popup_fep_shadow_pane_g7

0x882a,	// (0x00052e2a) bg_popup_fep_shadow_pane_g8

0xc57f,	// (0x00056b7f) grid_vkb_keypad_number_pane_ParamLimits

0xc57f,	// (0x00056b7f) grid_vkb_keypad_number_pane

0xc58f,	// (0x00056b8f) grid_vkb_keypad_pane_ParamLimits

0xc58f,	// (0x00056b8f) grid_vkb_keypad_pane

0xc5b5,	// (0x00056bb5) fep_vkb_bottom_pane_g1_ParamLimits

0xc5b5,	// (0x00056bb5) fep_vkb_bottom_pane_g1

0xc5de,	// (0x00056bde) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5de,	// (0x00056bde) grid_vkb_keypad_bottom_left_pane

0xc5f3,	// (0x00056bf3) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5f3,	// (0x00056bf3) grid_vkb_keypad_bottom_right_pane

0xc608,	// (0x00056c08) fep_vkb_top_text_pane_g1

0xc623,	// (0x00056c23) fep_vkb_top_text_pane_t1

0xc638,	// (0x00056c38) cell_vkb_side_pane_ParamLimits

0xc638,	// (0x00056c38) cell_vkb_side_pane

0xc242,	// (0x00056842) cell_vkb_side_pane_g1

0xc677,	// (0x00056c77) cell_vkb_keypad_pane_ParamLimits

0xc677,	// (0x00056c77) cell_vkb_keypad_pane

0xc6ec,	// (0x00056cec) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0005a150) bg_popup_fep_shadow_pane_g

0x6776,	// (0x00050d76) cell_hwr_side_pane_g1

0x6776,	// (0x00050d76) cell_hwr_side_pane_g2

0xc6f6,	// (0x00056cf6) cell_vkb_keypad_pane_t1

0xc704,	// (0x00056d04) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc704,	// (0x00056d04) cell_vkb_keypad_bottom_left_pane

0xc721,	// (0x00056d21) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc721,	// (0x00056d21) cell_vkb_keypad_bottom_right_pane

0xc242,	// (0x00056842) cell_vkb_keypad_bottom_left_pane_g1

0xc242,	// (0x00056842) cell_vkb_keypad_bottom_right_pane_g1

0xc75a,	// (0x00056d5a) cell_vkb_keypad_number_pane_ParamLimits

0xc75a,	// (0x00056d5a) cell_vkb_keypad_number_pane

0xc779,	// (0x00056d79) cell_vkb_keypad_number_pane_g1

0xc783,	// (0x00056d83) cell_vkb_keypad_number_pane_g2

0xc78c,	// (0x00056d8c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0005a142) cell_vkb_keypad_number_pane_g

0xc6f6,	// (0x00056cf6) cell_vkb_keypad_number_pane_t1

0xc7b0,	// (0x00056db0) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x0005a163) cell_hwr_side_pane_g

0xc7c9,	// (0x00056dc9) cell_hwr_side_pane_t1

0x6780,	// (0x00050d80) cell_hwr_side_pane_t1_copy1

0x678e,	// (0x00050d8e) cell_hwr_candidate_pane_g1

0x67bd,	// (0x00050dbd) cell_hwr_candidate_pane_t1

0xc242,	// (0x00056842) cell_vkb_candidate_pane_g2

0xc80d,	// (0x00056e0d) cell_vkb_candidate_pane_t1

0x6529,	// (0x00050b29) bg_popup_fep_shadow_pane_ParamLimits

0x6529,	// (0x00050b29) bg_popup_fep_shadow_pane

0x65de,	// (0x00050bde) bg_fep_hwr_top_pane_g4

0xc2c2,	// (0x000568c2) bg_hwr_side_pane_g1_ParamLimits

0xc2c2,	// (0x000568c2) bg_hwr_side_pane_g1

0x664f,	// (0x00050c4f) cell_hwr_side_pane_ParamLimits

0x664f,	// (0x00050c4f) cell_hwr_side_pane

0x668a,	// (0x00050c8a) fep_hwr_write_pane_g1_ParamLimits

0x668a,	// (0x00050c8a) fep_hwr_write_pane_g1

0x6697,	// (0x00050c97) fep_hwr_write_pane_g2_ParamLimits

0x6697,	// (0x00050c97) fep_hwr_write_pane_g2

0x66a4,	// (0x00050ca4) fep_hwr_write_pane_g3_ParamLimits

0x66a4,	// (0x00050ca4) fep_hwr_write_pane_g3

0x66b2,	// (0x00050cb2) fep_hwr_write_pane_g4_ParamLimits

0x66b2,	// (0x00050cb2) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0005a10f) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0005a10f) fep_hwr_write_pane_g

0x65de,	// (0x00050bde) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x65de,	// (0x00050bde) bg_fep_hwr_candidate_pane_g2

0x66c7,	// (0x00050cc7) cell_hwr_candidate_pane_ParamLimits

0x66c7,	// (0x00050cc7) cell_hwr_candidate_pane

0x6709,	// (0x00050d09) fep_hwr_candidate_pane_g1_ParamLimits

0xc322,	// (0x00056922) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc322,	// (0x00056922) bg_popup_fep_shadow_pane_cp2

0xc4c0,	// (0x00056ac0) fep_vkb_top_pane_g4_ParamLimits

0xc4c0,	// (0x00056ac0) fep_vkb_top_pane_g4

0xc506,	// (0x00056b06) fep_vkb_side_pane_g2_ParamLimits

0xc506,	// (0x00056b06) fep_vkb_side_pane_g2

0x4fe8,	// (0x0004f5e8) list_setting_pane_t4_ParamLimits

0x4fe8,	// (0x0004f5e8) list_setting_pane_t4

0x5082,	// (0x0004f682) list_setting_number_pane_t5_ParamLimits

0x5082,	// (0x0004f682) list_setting_number_pane_t5

0x8e83,	// (0x00053483) list_double_heading_pane_cp2_ParamLimits

0x8e83,	// (0x00053483) list_double_heading_pane_cp2

0x8761,	// (0x00052d61) list_double_heading_pane_g1_cp2_ParamLimits

0x8761,	// (0x00052d61) list_double_heading_pane_g1_cp2

0x87d4,	// (0x00052dd4) list_double_heading_pane_g2_cp2_ParamLimits

0x87d4,	// (0x00052dd4) list_double_heading_pane_g2_cp2

0xc81b,	// (0x00056e1b) list_double_heading_pane_t1_cp2_ParamLimits

0xc81b,	// (0x00056e1b) list_double_heading_pane_t1_cp2

0xc831,	// (0x00056e31) list_double_heading_pane_t2_cp2_ParamLimits

0xc831,	// (0x00056e31) list_double_heading_pane_t2_cp2

0x74f3,	// (0x00051af3) aid_value_unit2

0x4a8f,	// (0x0004f08f) popup_preview_fixed_window

0x81ae,	// (0x000527ae) bg_popup_preview_window_pane_cp02

0xc843,	// (0x00056e43) list_preview_fixed_pane

0xc889,	// (0x00056e89) list_empty_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_empty_pane_fp

0xc889,	// (0x00056e89) list_single_cale_day_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_cale_day_pane_fp

0xc889,	// (0x00056e89) list_single_graphic_heading_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_graphic_heading_pane_fp

0xc889,	// (0x00056e89) list_single_graphic_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_graphic_pane_fp

0xc889,	// (0x00056e89) list_single_heading_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_heading_pane_fp

0xc889,	// (0x00056e89) list_single_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_pane_fp

0xc89e,	// (0x00056e9e) list_single_pane_fp_g1_ParamLimits

0xc89e,	// (0x00056e9e) list_single_pane_fp_g1

0x8761,	// (0x00052d61) list_single_pane_fp_g2_ParamLimits

0x8761,	// (0x00052d61) list_single_pane_fp_g2

0x87d4,	// (0x00052dd4) list_single_pane_fp_g3_ParamLimits

0x87d4,	// (0x00052dd4) list_single_pane_fp_g3

0xc8aa,	// (0x00056eaa) list_single_pane_fp_g4_ParamLimits

0xc8aa,	// (0x00056eaa) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0005a176) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0005a176) list_single_pane_fp_g

0x7b78,	// (0x00052178) list_single_pane_fp_t1_ParamLimits

0x7b78,	// (0x00052178) list_single_pane_fp_t1

0x7b8f,	// (0x0005218f) list_single_graphic_pane_fp_g1_ParamLimits

0x7b8f,	// (0x0005218f) list_single_graphic_pane_fp_g1

0xc89e,	// (0x00056e9e) list_single_graphic_pane_fp_g2_ParamLimits

0xc89e,	// (0x00056e9e) list_single_graphic_pane_fp_g2

0x8761,	// (0x00052d61) list_single_graphic_pane_fp_g3_ParamLimits

0x8761,	// (0x00052d61) list_single_graphic_pane_fp_g3

0x87d4,	// (0x00052dd4) list_single_graphic_pane_fp_g4_ParamLimits

0x87d4,	// (0x00052dd4) list_single_graphic_pane_fp_g4

0xc8aa,	// (0x00056eaa) list_single_graphic_pane_fp_g5_ParamLimits

0xc8aa,	// (0x00056eaa) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a17f) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a17f) list_single_graphic_pane_fp_g

0x7b9b,	// (0x0005219b) list_single_graphic_pane_fp_t1_ParamLimits

0x7b9b,	// (0x0005219b) list_single_graphic_pane_fp_t1

0x7b8f,	// (0x0005218f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7b8f,	// (0x0005218f) list_single_graphic_heading_pane_fp_g1

0xc89e,	// (0x00056e9e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc89e,	// (0x00056e9e) list_single_graphic_heading_pane_fp_g2

0x8761,	// (0x00052d61) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8761,	// (0x00052d61) list_single_graphic_heading_pane_fp_g3

0x87d4,	// (0x00052dd4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x87d4,	// (0x00052dd4) list_single_graphic_heading_pane_fp_g4

0xc8aa,	// (0x00056eaa) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8aa,	// (0x00056eaa) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a17f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a17f) list_single_graphic_heading_pane_fp_g

0x7bb1,	// (0x000521b1) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7bb1,	// (0x000521b1) list_single_graphic_heading_pane_fp_t1

0x7bc7,	// (0x000521c7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7bc7,	// (0x000521c7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0005a18a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0005a18a) list_single_graphic_heading_pane_fp_t

0x7bd9,	// (0x000521d9) list_single_cale_day_pane_fp_g1_ParamLimits

0x7bd9,	// (0x000521d9) list_single_cale_day_pane_fp_g1

0xc8b6,	// (0x00056eb6) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8b6,	// (0x00056eb6) list_single_cale_day_pane_fp_g2

0x7c11,	// (0x00052211) list_single_cale_day_pane_fp_g3_ParamLimits

0x7c11,	// (0x00052211) list_single_cale_day_pane_fp_g3

0x7c39,	// (0x00052239) list_single_cale_day_pane_fp_g4_ParamLimits

0x7c39,	// (0x00052239) list_single_cale_day_pane_fp_g4

0x7c5d,	// (0x0005225d) list_single_cale_day_pane_fp_g5_ParamLimits

0x7c5d,	// (0x0005225d) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0005a18f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0005a18f) list_single_cale_day_pane_fp_g

0x7c81,	// (0x00052281) list_single_cale_day_pane_fp_t1_ParamLimits

0x7c81,	// (0x00052281) list_single_cale_day_pane_fp_t1

0x7ca7,	// (0x000522a7) list_single_cale_day_pane_fp_t2_ParamLimits

0x7ca7,	// (0x000522a7) list_single_cale_day_pane_fp_t2

0x7cc0,	// (0x000522c0) list_single_cale_day_pane_fp_t3_ParamLimits

0x7cc0,	// (0x000522c0) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0005a19a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005a19a) list_single_cale_day_pane_fp_t

0xc89e,	// (0x00056e9e) list_empty_pane_fp_g1_ParamLimits

0xc89e,	// (0x00056e9e) list_empty_pane_fp_g1

0x7cd9,	// (0x000522d9) list_empty_pane_fp_t1

0x7ce7,	// (0x000522e7) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0005a1a1) list_empty_pane_fp_t

0xc89e,	// (0x00056e9e) list_single_heading_pane_fp_g1_ParamLimits

0xc89e,	// (0x00056e9e) list_single_heading_pane_fp_g1

0x8761,	// (0x00052d61) list_single_heading_pane_fp_g2_ParamLimits

0x8761,	// (0x00052d61) list_single_heading_pane_fp_g2

0x87d4,	// (0x00052dd4) list_single_heading_pane_fp_g3_ParamLimits

0x87d4,	// (0x00052dd4) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0005a1a6) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0005a1a6) list_single_heading_pane_fp_g

0x7cf5,	// (0x000522f5) list_single_heading_pane_fp_t1_ParamLimits

0x7cf5,	// (0x000522f5) list_single_heading_pane_fp_t1

0x7d07,	// (0x00052307) list_single_heading_pane_fp_t2_ParamLimits

0x7d07,	// (0x00052307) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0005a1ad) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0005a1ad) list_single_heading_pane_fp_t

0x89b9,	// (0x00052fb9) aid_size_cell_fast

0x811e,	// (0x0005271e) soft_indicator_pane_cp1_t1

0x89f6,	// (0x00052ff6) cell_app_pane_cp2_ParamLimits

0x89f6,	// (0x00052ff6) cell_app_pane_cp2

0x654b,	// (0x00050b4b) fep_hwr_candidate_drop_down_list_pane

0x6723,	// (0x00050d23) fep_hwr_candidate_pane_g3_ParamLimits

0x6723,	// (0x00050d23) fep_hwr_candidate_pane_g3

0x39ae,	// (0x0004dfae) fep_hwr_candidate_pane_g4_ParamLimits

0x39ae,	// (0x0004dfae) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0005a11c) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0005a11c) fep_hwr_candidate_pane_g

0xc3a7,	// (0x000569a7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc3a7,	// (0x000569a7) fep_vkb_candidate_drop_down_list_pane

0xc7b8,	// (0x00056db8) fep_vkb_candidate_pane_g3

0xc7c0,	// (0x00056dc0) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005a149) fep_vkb_candidate_pane_g

0x678e,	// (0x00050d8e) cell_hwr_candidate_pane_g1_ParamLimits

0x679c,	// (0x00050d9c) cell_hwr_candidate_pane_g3_ParamLimits

0x679c,	// (0x00050d9c) cell_hwr_candidate_pane_g3

0xe0c3,	// (0x000586c3) cell_hwr_candidate_pane_g4_ParamLimits

0xe0c3,	// (0x000586c3) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0005a168) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0005a168) cell_hwr_candidate_pane_g

0xc7d7,	// (0x00056dd7) cell_vkb_candidate_pane_g3_ParamLimits

0xc7d7,	// (0x00056dd7) cell_vkb_candidate_pane_g3

0xc7f2,	// (0x00056df2) cell_vkb_candidate_pane_g4_ParamLimits

0xc7f2,	// (0x00056df2) cell_vkb_candidate_pane_g4

0xc8c2,	// (0x00056ec2) cell_app_pane_cp2_g1_ParamLimits

0xc8c2,	// (0x00056ec2) cell_app_pane_cp2_g1

0xc8e0,	// (0x00056ee0) cell_app_pane_cp2_g2_ParamLimits

0xc8e0,	// (0x00056ee0) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0005a1b2) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0005a1b2) cell_app_pane_cp2_g

0xc8ec,	// (0x00056eec) cell_app_pane_cp2_t1_ParamLimits

0xc8ec,	// (0x00056eec) cell_app_pane_cp2_t1

0x87c6,	// (0x00052dc6) grid_highlight_pane_cp1_ParamLimits

0x87c6,	// (0x00052dc6) grid_highlight_pane_cp1

0x67db,	// (0x00050ddb) cell_hwr_candidate_pane_cp1_ParamLimits

0x67db,	// (0x00050ddb) cell_hwr_candidate_pane_cp1

0x678e,	// (0x00050d8e) fep_hwr_candidate_drop_down_list_pane_g1

0x67fa,	// (0x00050dfa) fep_hwr_candidate_drop_down_list_pane_g2

0x6807,	// (0x00050e07) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0005a1b7) fep_hwr_candidate_drop_down_list_pane_g

0x6814,	// (0x00050e14) fep_hwr_candidate_drop_down_list_scroll_pane

0x681d,	// (0x00050e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x681d,	// (0x00050e1d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x682a,	// (0x00050e2a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x682a,	// (0x00050e2a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6837,	// (0x00050e37) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6837,	// (0x00050e37) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6844,	// (0x00050e44) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6844,	// (0x00050e44) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x685f,	// (0x00050e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x685f,	// (0x00050e5f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x687a,	// (0x00050e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x687a,	// (0x00050e7a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6895,	// (0x00050e95) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6895,	// (0x00050e95) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x68b0,	// (0x00050eb0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x68b0,	// (0x00050eb0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0005a1be) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0005a1be) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc8fe,	// (0x00056efe) cell_vkb_candidate_pane_cp1_ParamLimits

0xc8fe,	// (0x00056efe) cell_vkb_candidate_pane_cp1

0xc4c0,	// (0x00056ac0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc4c0,	// (0x00056ac0) fep_vkb_candidate_drop_down_list_pane_g1

0xc91e,	// (0x00056f1e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc91e,	// (0x00056f1e) fep_vkb_candidate_drop_down_list_pane_g2

0xc92b,	// (0x00056f2b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc92b,	// (0x00056f2b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0005a1cf) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x0005a1cf) fep_vkb_candidate_drop_down_list_pane_g

0xc938,	// (0x00056f38) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc938,	// (0x00056f38) fep_vkb_candidate_drop_down_list_scroll_pane

0xc945,	// (0x00056f45) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc945,	// (0x00056f45) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc952,	// (0x00056f52) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc952,	// (0x00056f52) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc95e,	// (0x00056f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc95e,	// (0x00056f5e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc96a,	// (0x00056f6a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc96a,	// (0x00056f6a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc98b,	// (0x00056f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc98b,	// (0x00056f8b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc9ac,	// (0x00056fac) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc9ac,	// (0x00056fac) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9cd,	// (0x00056fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9cd,	// (0x00056fcd) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9ee,	// (0x00056fee) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9ee,	// (0x00056fee) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0005a1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0005a1d6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7529,	// (0x00051b29) title_pane_g1_ParamLimits

0x7536,	// (0x00051b36) title_pane_g2_ParamLimits

0xf54e,	// (0x00059b4e) title_pane_g_ParamLimits

0x8e2c,	// (0x0005342c) aid_call2_pane

0x8e34,	// (0x00053434) aid_call_pane

0x8e3c,	// (0x0005343c) popup_clock_analogue_window_g1

0x8e3c,	// (0x0005343c) popup_clock_analogue_window_g2

0x54ec,	// (0x0004faec) popup_clock_analogue_window_g3

0x54f5,	// (0x0004faf5) popup_clock_analogue_window_g4

0x7515,	// (0x00051b15) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00059cfd) popup_clock_analogue_window_g

0x54fd,	// (0x0004fafd) popup_clock_analogue_window_t1

0x550b,	// (0x0004fb0b) clock_digital_number_pane_ParamLimits

0x550b,	// (0x0004fb0b) clock_digital_number_pane

0x5517,	// (0x0004fb17) clock_digital_number_pane_cp02_ParamLimits

0x5517,	// (0x0004fb17) clock_digital_number_pane_cp02

0x5523,	// (0x0004fb23) clock_digital_number_pane_cp03_ParamLimits

0x5523,	// (0x0004fb23) clock_digital_number_pane_cp03

0x552f,	// (0x0004fb2f) clock_digital_number_pane_cp04_ParamLimits

0x552f,	// (0x0004fb2f) clock_digital_number_pane_cp04

0x553b,	// (0x0004fb3b) clock_digital_separator_pane_ParamLimits

0x553b,	// (0x0004fb3b) clock_digital_separator_pane

0x5547,	// (0x0004fb47) popup_clock_digital_window_t1_ParamLimits

0x5547,	// (0x0004fb47) popup_clock_digital_window_t1

0x7515,	// (0x00051b15) clock_digital_number_pane_g1

0x7515,	// (0x00051b15) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059d08) clock_digital_number_pane_g

0x7515,	// (0x00051b15) clock_digital_separator_pane_g1

0x7515,	// (0x00051b15) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059d08) clock_digital_separator_pane_g

0x97bb,	// (0x00053dbb) aid_fill_nsta_ParamLimits

0x9901,	// (0x00053f01) indicator_nsta_pane_ParamLimits

0x9a7a,	// (0x0005407a) popup_clock_analogue_window

0x9a7a,	// (0x0005407a) popup_clock_digital_window

0x7f25,	// (0x00052525) grid_indicator_nsta_pane_ParamLimits

0xbc5a,	// (0x0005625a) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0005a09c) clock_nsta_pane_t

0x54b0,	// (0x0004fab0) aid_size_max_handle

0x54ba,	// (0x0004faba) aid_size_min_handle

0x945b,	// (0x00053a5b) editor_scroll_pane

0xca09,	// (0x00057009) ex_editor_pane

0x8927,	// (0x00052f27) scroll_pane_cp13

0x8759,	// (0x00052d59) scroll_pane_cp14

0x8e6b,	// (0x0005346b) scroll_pane_cp36

0x8e97,	// (0x00053497) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e97,	// (0x00053497) list_single_graphic_hl_pane_cp2

0x7775,	// (0x00051d75) list_single_graphic_hl_pane_ParamLimits

0x7775,	// (0x00051d75) list_single_graphic_hl_pane

0x7d1d,	// (0x0005231d) aid_size_min_hl_cp1

0xca11,	// (0x00057011) list_highlight_pane_cp34_ParamLimits

0xca11,	// (0x00057011) list_highlight_pane_cp34

0xca22,	// (0x00057022) list_single_graphic_hl_pane_g1_ParamLimits

0xca22,	// (0x00057022) list_single_graphic_hl_pane_g1

0x7d26,	// (0x00052326) list_single_graphic_hl_pane_g2_ParamLimits

0x7d26,	// (0x00052326) list_single_graphic_hl_pane_g2

0x7d26,	// (0x00052326) list_single_graphic_hl_pane_g3_ParamLimits

0x7d26,	// (0x00052326) list_single_graphic_hl_pane_g3

0x93cc,	// (0x000539cc) list_single_graphic_hl_pane_g4_ParamLimits

0x93cc,	// (0x000539cc) list_single_graphic_hl_pane_g4

0x7d32,	// (0x00052332) list_single_graphic_hl_pane_g5_ParamLimits

0x7d32,	// (0x00052332) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0005a1e7) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0005a1e7) list_single_graphic_hl_pane_g

0x7d46,	// (0x00052346) list_single_graphic_hl_pane_t1_ParamLimits

0x7d46,	// (0x00052346) list_single_graphic_hl_pane_t1

0xca2f,	// (0x0005702f) aid_size_min_hl_cp2

0xca38,	// (0x00057038) list_highlight_pane_cp34_cp2_ParamLimits

0xca38,	// (0x00057038) list_highlight_pane_cp34_cp2

0xca22,	// (0x00057022) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca22,	// (0x00057022) list_single_graphic_hl_pane_g1_cp2

0xca45,	// (0x00057045) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca45,	// (0x00057045) list_single_graphic_hl_pane_g2_cp2

0xca51,	// (0x00057051) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca51,	// (0x00057051) list_single_graphic_hl_pane_g3_cp2

0xca5f,	// (0x0005705f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xca5f,	// (0x0005705f) list_single_graphic_hl_pane_g4_cp2

0xca6b,	// (0x0005706b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca6b,	// (0x0005706b) list_single_graphic_hl_pane_g5_cp2

0x5869,	// (0x0004fe69) control_pane_g4_ParamLimits

0x5869,	// (0x0004fe69) control_pane_g4

0x977f,	// (0x00053d7f) bg_popup_sub_pane_cp10_ParamLimits

0xc24c,	// (0x0005684c) list_choice_list_pane_ParamLimits

0xc25b,	// (0x0005685b) scroll_pane_cp23

0x81ae,	// (0x000527ae) bg_popup_preview_window_pane_cp02_ParamLimits

0xc843,	// (0x00056e43) list_preview_fixed_pane_ParamLimits

0xc859,	// (0x00056e59) list_preview_fixed_pane_cp_ParamLimits

0xc859,	// (0x00056e59) list_preview_fixed_pane_cp

0xc865,	// (0x00056e65) popup_preview_fixed_window_g1_ParamLimits

0xc865,	// (0x00056e65) popup_preview_fixed_window_g1

0xc871,	// (0x00056e71) popup_preview_fixed_window_g2_ParamLimits

0xc871,	// (0x00056e71) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0005a16f) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0005a16f) popup_preview_fixed_window_g

0x5424,	// (0x0004fa24) aid_navi_side_left_pane_ParamLimits

0x5439,	// (0x0004fa39) aid_navi_side_right_pane_ParamLimits

0x5451,	// (0x0004fa51) navi_icon_pane_stacon_ParamLimits

0x5465,	// (0x0004fa65) navi_navi_pane_stacon_ParamLimits

0x5451,	// (0x0004fa51) navi_text_pane_stacon_ParamLimits

0x4950,	// (0x0004ef50) main_text_info_pane

0xca95,	// (0x00057095) listscroll_text_info_pane

0xca9d,	// (0x0005709d) list_text_info_pane_ParamLimits

0xca9d,	// (0x0005709d) list_text_info_pane

0xcaac,	// (0x000570ac) scroll_pane_cp24_ParamLimits

0xcaac,	// (0x000570ac) scroll_pane_cp24

0xcaca,	// (0x000570ca) list_text_info_pane_t1_ParamLimits

0xcaca,	// (0x000570ca) list_text_info_pane_t1

0x59e7,	// (0x0004ffe7) popup_fast_swap2_window_ParamLimits

0x59e7,	// (0x0004ffe7) popup_fast_swap2_window

0xcafb,	// (0x000570fb) aid_size_cell_fast2

0x750b,	// (0x00051b0b) bg_popup_window_pane_cp17

0xa103,	// (0x00054703) heading_pane_cp2

0x8423,	// (0x00052a23) listscroll_fast2_pane

0xcb05,	// (0x00057105) grid_fast2_pane

0xcb0f,	// (0x0005710f) listscroll_fast2_pane_g1

0xcb17,	// (0x00057117) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0005a1f2) listscroll_fast2_pane_g

0x8927,	// (0x00052f27) scroll_pane_cp26

0xcb21,	// (0x00057121) cell_fast2_pane_ParamLimits

0xcb21,	// (0x00057121) cell_fast2_pane

0xcb36,	// (0x00057136) cell_fast2_pane_g1

0xcb3f,	// (0x0005713f) cell_fast2_pane_g2

0xcb48,	// (0x00057148) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0005a1f7) cell_fast2_pane_g

0x8516,	// (0x00052b16) grid_highlight_pane_cp9

0x59a5,	// (0x0004ffa5) main_eswt_pane_ParamLimits

0x59a5,	// (0x0004ffa5) main_eswt_pane

0xcac1,	// (0x000570c1) list_single_text_info_pane

0xcb50,	// (0x00057150) eswt_ctrl_button_pane

0xcb50,	// (0x00057150) eswt_ctrl_canvas_pane

0xcb58,	// (0x00057158) eswt_ctrl_combo_pane

0xcb50,	// (0x00057150) eswt_ctrl_default_pane

0xcb50,	// (0x00057150) eswt_ctrl_label_pane

0xcb60,	// (0x00057160) eswt_ctrl_wait_pane

0xcb68,	// (0x00057168) eswt_shell_pane

0x750b,	// (0x00051b0b) listscroll_eswt_app_pane

0xcb88,	// (0x00057188) popup_eswt_tasktip_window_ParamLimits

0xcb88,	// (0x00057188) popup_eswt_tasktip_window

0x9d17,	// (0x00054317) bg_popup_window_pane_cp18

0xcb99,	// (0x00057199) eswt_control_pane_g1_ParamLimits

0xcb99,	// (0x00057199) eswt_control_pane_g1

0xcba6,	// (0x000571a6) eswt_control_pane_g2_ParamLimits

0xcba6,	// (0x000571a6) eswt_control_pane_g2

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_ParamLimits

0xcbb3,	// (0x000571b3) eswt_control_pane_g3

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_ParamLimits

0xcbc0,	// (0x000571c0) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0005a1fe) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0005a1fe) eswt_control_pane_g

0x87c6,	// (0x00052dc6) bg_button_pane_ParamLimits

0x87c6,	// (0x00052dc6) bg_button_pane

0x852b,	// (0x00052b2b) common_borders_pane_copy2_ParamLimits

0x852b,	// (0x00052b2b) common_borders_pane_copy2

0xcbcd,	// (0x000571cd) control_button_pane_g1_ParamLimits

0xcbcd,	// (0x000571cd) control_button_pane_g1

0xcbd9,	// (0x000571d9) control_button_pane_g2_ParamLimits

0xcbd9,	// (0x000571d9) control_button_pane_g2

0xcbe5,	// (0x000571e5) control_button_pane_g3_ParamLimits

0xcbe5,	// (0x000571e5) control_button_pane_g3

0x0002,

0xfc07,	// (0x0005a207) control_button_pane_g_ParamLimits

0xfc07,	// (0x0005a207) control_button_pane_g

0xcbf9,	// (0x000571f9) control_button_pane_t1

0xcc07,	// (0x00057207) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0005a20e) control_button_pane_t

0x9ca3,	// (0x000542a3) bg_button_pane_g1

0x9cb3,	// (0x000542b3) bg_button_pane_g2

0x9cab,	// (0x000542ab) bg_button_pane_g3

0x9cc3,	// (0x000542c3) bg_button_pane_g4

0x9cbb,	// (0x000542bb) bg_button_pane_g5

0x9ccb,	// (0x000542cb) bg_button_pane_g6

0x9cd3,	// (0x000542d3) bg_button_pane_g7

0x9ce3,	// (0x000542e3) bg_button_pane_g8

0x9cdb,	// (0x000542db) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00059e6b) bg_button_pane_g

0xc207,	// (0x00056807) common_borders_pane_ParamLimits

0xc207,	// (0x00056807) common_borders_pane

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy1_ParamLimits

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy1

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy1_ParamLimits

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy1

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy1_ParamLimits

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy1

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy1_ParamLimits

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy1

0xc242,	// (0x00056842) bg_eswt_ctrl_canvas_pane_g1

0xc207,	// (0x00056807) common_borders_pane_cp2_ParamLimits

0xc207,	// (0x00056807) common_borders_pane_cp2

0xc207,	// (0x00056807) common_borders_pane_cp3_ParamLimits

0xc207,	// (0x00056807) common_borders_pane_cp3

0xcc15,	// (0x00057215) separator_horizontal_pane

0xcc1d,	// (0x0005721d) separator_vertical_pane

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy2_ParamLimits

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy2

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy2_ParamLimits

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy2

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy2_ParamLimits

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy2

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy2_ParamLimits

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy2

0x750b,	// (0x00051b0b) common_borders_pane_cp4

0xcc26,	// (0x00057226) separator_horizontal_pane_g1

0xcc2f,	// (0x0005722f) separator_horizontal_pane_g2

0xcc38,	// (0x00057238) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0005a213) separator_horizontal_pane_g

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy3_ParamLimits

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy3

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy3_ParamLimits

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy3

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy3_ParamLimits

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy3

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy3_ParamLimits

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy3

0x750b,	// (0x00051b0b) common_borders_pane_cp5

0xcc41,	// (0x00057241) separator_vertical_pane_g1

0xcc4a,	// (0x0005724a) separator_vertical_pane_g2

0xcc53,	// (0x00057253) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0005a21a) separator_vertical_pane_g

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy4_ParamLimits

0xcb99,	// (0x00057199) eswt_control_pane_g1_copy4

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy4_ParamLimits

0xcba6,	// (0x000571a6) eswt_control_pane_g2_copy4

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy4_ParamLimits

0xcbb3,	// (0x000571b3) eswt_control_pane_g3_copy4

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy4_ParamLimits

0xcbc0,	// (0x000571c0) eswt_control_pane_g4_copy4

0xcc5c,	// (0x0005725c) eswt_ctrl_combo_button_pane

0xcc64,	// (0x00057264) eswt_ctrl_input_pane

0xcc6c,	// (0x0005726c) popup_choice_list_window_cp70

0xcc74,	// (0x00057274) eswt_ctrl_input_pane_t1

0x750b,	// (0x00051b0b) input_focus_pane_cp70

0xc207,	// (0x00056807) bg_button_pane_cp70_ParamLimits

0xc207,	// (0x00056807) bg_button_pane_cp70

0xcc82,	// (0x00057282) eswt_ctrl_combo_button_pane_g1

0xcc8a,	// (0x0005728a) wait_bar_pane_cp70

0x9d17,	// (0x00054317) bg_popup_window_pane_cp70_ParamLimits

0x9d17,	// (0x00054317) bg_popup_window_pane_cp70

0xcc92,	// (0x00057292) popup_eswt_tasktip_window_t1

0xcca8,	// (0x000572a8) wait_bar_pane_cp71_ParamLimits

0xcca8,	// (0x000572a8) wait_bar_pane_cp71

0xccb4,	// (0x000572b4) grid_eswt_app_pane

0x8c45,	// (0x00053245) scroll_pane_cp70

0xccbd,	// (0x000572bd) cell_eswt_app_pane_ParamLimits

0xccbd,	// (0x000572bd) cell_eswt_app_pane

0xcced,	// (0x000572ed) cell_eswt_app_pane_g1_ParamLimits

0xcced,	// (0x000572ed) cell_eswt_app_pane_g1

0xcd1c,	// (0x0005731c) cell_eswt_app_pane_g2_ParamLimits

0xcd1c,	// (0x0005731c) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0005a221) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0005a221) cell_eswt_app_pane_g

0xcd45,	// (0x00057345) cell_eswt_app_pane_t1_ParamLimits

0xcd45,	// (0x00057345) cell_eswt_app_pane_t1

0xcd77,	// (0x00057377) grid_highlight_pane_cp70_ParamLimits

0xcd77,	// (0x00057377) grid_highlight_pane_cp70

0x9330,	// (0x00053930) set_content_pane_g1

0x9706,	// (0x00053d06) status_small_volume_pane

0x68cb,	// (0x00050ecb) status_small_volume_pane_g1

0x68d3,	// (0x00050ed3) volume_small2_pane

0x68dc,	// (0x00050edc) volume_small2_pane_g1

0x68e5,	// (0x00050ee5) volume_small2_pane_g2

0x68ee,	// (0x00050eee) volume_small2_pane_g3

0x68f7,	// (0x00050ef7) volume_small2_pane_g4

0x6900,	// (0x00050f00) volume_small2_pane_g5

0x6909,	// (0x00050f09) volume_small2_pane_g6

0x6912,	// (0x00050f12) volume_small2_pane_g7

0x691b,	// (0x00050f1b) volume_small2_pane_g8

0x6924,	// (0x00050f24) volume_small2_pane_g9

0x692d,	// (0x00050f2d) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0005a226) volume_small2_pane_g

0xc608,	// (0x00056c08) fep_vkb_top_text_pane_g1_ParamLimits

0xc623,	// (0x00056c23) fep_vkb_top_text_pane_t1_ParamLimits

0xc87d,	// (0x00056e7d) popup_preview_fixed_window_g3_ParamLimits

0xc87d,	// (0x00056e7d) popup_preview_fixed_window_g3

0x5e96,	// (0x00050496) popup_toolbar_trans_pane

0xb068,	// (0x00055668) aid_height_set_list_ParamLimits

0xb079,	// (0x00055679) aid_size_parent_ParamLimits

0x977f,	// (0x00053d7f) list_highlight_pane_cp2_ParamLimits

0x9330,	// (0x00053930) set_content_pane_g1_ParamLimits

0x7790,	// (0x00051d90) list_single_image_pane_ParamLimits

0x7790,	// (0x00051d90) list_single_image_pane

0xcd83,	// (0x00057383) aid_size_cell_image_ParamLimits

0xcd83,	// (0x00057383) aid_size_cell_image

0xcd90,	// (0x00057390) grid_single_image_pane_ParamLimits

0xcd90,	// (0x00057390) grid_single_image_pane

0x927f,	// (0x0005387f) list_single_image_pane_g1_ParamLimits

0x927f,	// (0x0005387f) list_single_image_pane_g1

0xcd9c,	// (0x0005739c) list_single_image_pane_g2_ParamLimits

0xcd9c,	// (0x0005739c) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0005a23b) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0005a23b) list_single_image_pane_g

0xcdb0,	// (0x000573b0) list_single_image_pane_t1_ParamLimits

0xcdb0,	// (0x000573b0) list_single_image_pane_t1

0xcdc6,	// (0x000573c6) cell_image_list_pane_ParamLimits

0xcdc6,	// (0x000573c6) cell_image_list_pane

0xcdda,	// (0x000573da) cell_image_list_pane_g1

0xcde3,	// (0x000573e3) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0005a240) cell_image_list_pane_g

0xcdec,	// (0x000573ec) aid_size_cell_tb_trans_pane

0x87c6,	// (0x00052dc6) bg_tb_trans_pane

0xcdfe,	// (0x000573fe) grid_tb_trans_pane

0x9ca3,	// (0x000542a3) bg_tb_trans_pane_g1

0x9cb3,	// (0x000542b3) bg_tb_trans_pane_g2

0x9cab,	// (0x000542ab) bg_tb_trans_pane_g3

0x9cc3,	// (0x000542c3) bg_tb_trans_pane_g4

0x9cbb,	// (0x000542bb) bg_tb_trans_pane_g5

0x9ce3,	// (0x000542e3) bg_tb_trans_pane_g6

0x9cdb,	// (0x000542db) bg_tb_trans_pane_g7

0x9ccb,	// (0x000542cb) bg_tb_trans_pane_g8

0x9cd3,	// (0x000542d3) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0005a245) bg_tb_trans_pane_g

0xce12,	// (0x00057412) cell_toolbar_trans_pane_ParamLimits

0xce12,	// (0x00057412) cell_toolbar_trans_pane

0xc242,	// (0x00056842) cell_toolbar_trans_pane_g1

0xbe17,	// (0x00056417) list_form2_midp_pane_t1

0xbe25,	// (0x00056425) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0005a0e2) list_form2_midp_pane_t

0xbe33,	// (0x00056433) scroll_pane_cp51_ParamLimits

0xbfef,	// (0x000565ef) form2_midp_wait_pane_g1

0xbff8,	// (0x000565f8) form2_midp_wait_pane_g2

0xc001,	// (0x00056601) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0005a0f7) form2_midp_wait_pane_g

0x7f25,	// (0x00052525) list_highlight_pane_cp21_ParamLimits

0xc04d,	// (0x0005664d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc05c,	// (0x0005665c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7719,	// (0x00051d19) list_single_2graphic_im_pane_ParamLimits

0x7719,	// (0x00051d19) list_single_2graphic_im_pane

0xce38,	// (0x00057438) list_single_2graphic_im_pane_g1_ParamLimits

0xce38,	// (0x00057438) list_single_2graphic_im_pane_g1

0xce49,	// (0x00057449) list_single_2graphic_im_pane_g2_ParamLimits

0xce49,	// (0x00057449) list_single_2graphic_im_pane_g2

0xce55,	// (0x00057455) list_single_2graphic_im_pane_g3_ParamLimits

0xce55,	// (0x00057455) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0005a258) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0005a258) list_single_2graphic_im_pane_g

0xce75,	// (0x00057475) list_single_2graphic_im_pane_t1_ParamLimits

0xce75,	// (0x00057475) list_single_2graphic_im_pane_t1

0xc889,	// (0x00056e89) list_single_graphic_2heading_pane_fp_ParamLimits

0xc889,	// (0x00056e89) list_single_graphic_2heading_pane_fp

0x7b8f,	// (0x0005218f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7b8f,	// (0x0005218f) list_single_graphic_2heading_pane_fp_g1

0xc89e,	// (0x00056e9e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc89e,	// (0x00056e9e) list_single_graphic_2heading_pane_fp_g2

0x8761,	// (0x00052d61) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8761,	// (0x00052d61) list_single_graphic_2heading_pane_fp_g3

0x87d4,	// (0x00052dd4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x87d4,	// (0x00052dd4) list_single_graphic_2heading_pane_fp_g4

0xc8aa,	// (0x00056eaa) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8aa,	// (0x00056eaa) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005a17f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005a17f) list_single_graphic_2heading_pane_fp_g

0x7d5c,	// (0x0005235c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7d5c,	// (0x0005235c) list_single_graphic_2heading_pane_fp_t1

0x7bc7,	// (0x000521c7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7bc7,	// (0x000521c7) list_single_graphic_2heading_pane_fp_t2

0x7d72,	// (0x00052372) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d72,	// (0x00052372) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0005a261) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0005a261) list_single_graphic_2heading_pane_fp_t

0xc2ce,	// (0x000568ce) fep_hwr_write_pane_g5_ParamLimits

0xc2ce,	// (0x000568ce) fep_hwr_write_pane_g5

0xc2da,	// (0x000568da) fep_hwr_write_pane_g6_ParamLimits

0xc2da,	// (0x000568da) fep_hwr_write_pane_g6

0xcb68,	// (0x00057168) eswt_shell_pane_ParamLimits

0x9d17,	// (0x00054317) bg_popup_window_pane_cp18_ParamLimits

0xafc1,	// (0x000555c1) heading_pane_cp70

0xcc92,	// (0x00057292) popup_eswt_tasktip_window_t1_ParamLimits

0x9810,	// (0x00053e10) aid_touch_tab_arrow_left

0x981f,	// (0x00053e1f) aid_touch_tab_arrow_right

0x7547,	// (0x00051b47) title_pane_g3_ParamLimits

0x7547,	// (0x00051b47) title_pane_g3

0x8785,	// (0x00052d85) set_value_pane_g1

0x5e96,	// (0x00050496) popup_toolbar_trans_pane_ParamLimits

0xcdec,	// (0x000573ec) aid_size_cell_tb_trans_pane_ParamLimits

0x87c6,	// (0x00052dc6) bg_tb_trans_pane_ParamLimits

0xcdfe,	// (0x000573fe) grid_tb_trans_pane_ParamLimits

0x81ae,	// (0x000527ae) cont_note_pane_ParamLimits

0x81ae,	// (0x000527ae) cont_note_pane

0x852b,	// (0x00052b2b) cont_snote2_single_text_pane_ParamLimits

0x852b,	// (0x00052b2b) cont_snote2_single_text_pane

0x852b,	// (0x00052b2b) cont_snote2_single_graphic_pane_ParamLimits

0x852b,	// (0x00052b2b) cont_snote2_single_graphic_pane

0xa32a,	// (0x0005492a) cont_note_wait_pane_ParamLimits

0xa32a,	// (0x0005492a) cont_note_wait_pane

0xa32a,	// (0x0005492a) cont_note_image_pane_ParamLimits

0xa32a,	// (0x0005492a) cont_note_image_pane

0xcea6,	// (0x000574a6) popup_note2_window_g1_ParamLimits

0xcea6,	// (0x000574a6) popup_note2_window_g1

0xced7,	// (0x000574d7) popup_note2_window_t1_ParamLimits

0xced7,	// (0x000574d7) popup_note2_window_t1

0xcf1c,	// (0x0005751c) popup_note2_window_t2_ParamLimits

0xcf1c,	// (0x0005751c) popup_note2_window_t2

0xcf61,	// (0x00057561) popup_note2_window_t3_ParamLimits

0xcf61,	// (0x00057561) popup_note2_window_t3

0xcfa6,	// (0x000575a6) popup_note2_window_t4_ParamLimits

0xcfa6,	// (0x000575a6) popup_note2_window_t4

0x8232,	// (0x00052832) popup_note2_window_t5_ParamLimits

0x8232,	// (0x00052832) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0005a26d) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0005a26d) popup_note2_window_t

0xcfd5,	// (0x000575d5) popup_note2_image_window_g1_ParamLimits

0xcfd5,	// (0x000575d5) popup_note2_image_window_g1

0xcfe1,	// (0x000575e1) popup_note2_image_window_g2_ParamLimits

0xcfe1,	// (0x000575e1) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005a278) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005a278) popup_note2_image_window_g

0xcff3,	// (0x000575f3) popup_note2_image_window_t1_ParamLimits

0xcff3,	// (0x000575f3) popup_note2_image_window_t1

0xd00b,	// (0x0005760b) popup_note2_image_window_t2_ParamLimits

0xd00b,	// (0x0005760b) popup_note2_image_window_t2

0xd023,	// (0x00057623) popup_note2_image_window_t3_ParamLimits

0xd023,	// (0x00057623) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0005a27d) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0005a27d) popup_note2_image_window_t

0xa338,	// (0x00054938) popup_note2_wait_window_g1_ParamLimits

0xa338,	// (0x00054938) popup_note2_wait_window_g1

0xd03f,	// (0x0005763f) popup_note2_wait_window_g2_ParamLimits

0xd03f,	// (0x0005763f) popup_note2_wait_window_g2

0xa350,	// (0x00054950) popup_note2_wait_window_g3_ParamLimits

0xa350,	// (0x00054950) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x0005a284) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x0005a284) popup_note2_wait_window_g

0xd04b,	// (0x0005764b) popup_note2_wait_window_t1_ParamLimits

0xd04b,	// (0x0005764b) popup_note2_wait_window_t1

0xd069,	// (0x00057669) popup_note2_wait_window_t2_ParamLimits

0xd069,	// (0x00057669) popup_note2_wait_window_t2

0xd087,	// (0x00057687) popup_note2_wait_window_t3_ParamLimits

0xd087,	// (0x00057687) popup_note2_wait_window_t3

0xd099,	// (0x00057699) popup_note2_wait_window_t4_ParamLimits

0xd099,	// (0x00057699) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0005a28b) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0005a28b) popup_note2_wait_window_t

0xd0ab,	// (0x000576ab) wait_bar2_pane_ParamLimits

0xd0ab,	// (0x000576ab) wait_bar2_pane

0xd0c3,	// (0x000576c3) popup_snote2_single_text_window_g1_ParamLimits

0xd0c3,	// (0x000576c3) popup_snote2_single_text_window_g1

0xd0eb,	// (0x000576eb) popup_snote2_single_text_window_t1_ParamLimits

0xd0eb,	// (0x000576eb) popup_snote2_single_text_window_t1

0xd137,	// (0x00057737) popup_snote2_single_text_window_t2_ParamLimits

0xd137,	// (0x00057737) popup_snote2_single_text_window_t2

0xd183,	// (0x00057783) popup_snote2_single_text_window_t3_ParamLimits

0xd183,	// (0x00057783) popup_snote2_single_text_window_t3

0xd1c4,	// (0x000577c4) popup_snote2_single_text_window_t4_ParamLimits

0xd1c4,	// (0x000577c4) popup_snote2_single_text_window_t4

0xd1fa,	// (0x000577fa) popup_snote2_single_text_window_t5_ParamLimits

0xd1fa,	// (0x000577fa) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x0005a294) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x0005a294) popup_snote2_single_text_window_t

0xd225,	// (0x00057825) popup_snote2_single_graphic_window_g1_ParamLimits

0xd225,	// (0x00057825) popup_snote2_single_graphic_window_g1

0xd24d,	// (0x0005784d) popup_snote2_single_graphic_window_g2_ParamLimits

0xd24d,	// (0x0005784d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0005a29f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0005a29f) popup_snote2_single_graphic_window_g

0xd275,	// (0x00057875) popup_snote2_single_graphic_window_t1_ParamLimits

0xd275,	// (0x00057875) popup_snote2_single_graphic_window_t1

0xd2c1,	// (0x000578c1) popup_snote2_single_graphic_window_t2_ParamLimits

0xd2c1,	// (0x000578c1) popup_snote2_single_graphic_window_t2

0xd183,	// (0x00057783) popup_snote2_single_graphic_window_t3_ParamLimits

0xd183,	// (0x00057783) popup_snote2_single_graphic_window_t3

0xd1c4,	// (0x000577c4) popup_snote2_single_graphic_window_t4_ParamLimits

0xd1c4,	// (0x000577c4) popup_snote2_single_graphic_window_t4

0xd1fa,	// (0x000577fa) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1fa,	// (0x000577fa) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x0005a2a4) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x0005a2a4) popup_snote2_single_graphic_window_t

0xbcf4,	// (0x000562f4) clock_nsta_pane_cp2_t1

0xbcf4,	// (0x000562f4) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0005a0b8) clock_nsta_pane_cp2_t

0x51a2,	// (0x0004f7a2) form_field_data_wide_pane_g1_ParamLimits

0x8761,	// (0x00052d61) form_field_data_wide_pane_g2_ParamLimits

0x8761,	// (0x00052d61) form_field_data_wide_pane_g2

0x87d4,	// (0x00052dd4) form_field_data_wide_pane_g3_ParamLimits

0x87d4,	// (0x00052dd4) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00059c80) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00059c80) form_field_data_wide_pane_g

0xbbf6,	// (0x000561f6) grid_touch_3_pane_ParamLimits

0xbbf6,	// (0x000561f6) grid_touch_3_pane

0xd30d,	// (0x0005790d) cell_touch_3_pane_ParamLimits

0xd30d,	// (0x0005790d) cell_touch_3_pane

0xc242,	// (0x00056842) cell_touch_3_pane_g1

0xc242,	// (0x00056842) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0005a13d) cell_touch_3_pane_g

0x828a,	// (0x0005288a) cont_query_data_pane

0x8292,	// (0x00052892) cont_query_data_pane_cp1

0xd33b,	// (0x0005793b) button_value_adjust_pane_cp7

0xd343,	// (0x00057943) query_popup_pane_cp3

0x8f2c,	// (0x0005352c) bg_popup_sub_pane_cp22_ParamLimits

0x5566,	// (0x0004fb66) navi_navi_volume_pane_cp2

0x5581,	// (0x0004fb81) popup_side_volume_key_window_g2

0x5590,	// (0x0004fb90) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059d16) popup_side_volume_key_window_g

0x55ad,	// (0x0004fbad) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00059d1d) popup_side_volume_key_window_t

0x91e3,	// (0x000537e3) popup_side_volume_key_window_ParamLimits

0x4dea,	// (0x0004f3ea) list_double_graphic_pane_g4_ParamLimits

0x4dea,	// (0x0004f3ea) list_double_graphic_pane_g4

0x7756,	// (0x00051d56) list_single_2heading_msg_pane_ParamLimits

0x7756,	// (0x00051d56) list_single_2heading_msg_pane

0x7d92,	// (0x00052392) list_single_2heading_msg_pane_g1_ParamLimits

0x7d92,	// (0x00052392) list_single_2heading_msg_pane_g1

0x9394,	// (0x00053994) list_single_2heading_msg_pane_g2_ParamLimits

0x9394,	// (0x00053994) list_single_2heading_msg_pane_g2

0x78d5,	// (0x00051ed5) list_single_2heading_msg_pane_g3_ParamLimits

0x78d5,	// (0x00051ed5) list_single_2heading_msg_pane_g3

0x7d9e,	// (0x0005239e) list_single_2heading_msg_pane_g4_ParamLimits

0x7d9e,	// (0x0005239e) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0005a2af) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0005a2af) list_single_2heading_msg_pane_g

0x7db6,	// (0x000523b6) list_single_2heading_msg_pane_t1_ParamLimits

0x7db6,	// (0x000523b6) list_single_2heading_msg_pane_t1

0x7dde,	// (0x000523de) list_single_2heading_msg_pane_t2_ParamLimits

0x7dde,	// (0x000523de) list_single_2heading_msg_pane_t2

0x7e12,	// (0x00052412) list_single_2heading_msg_pane_t3_ParamLimits

0x7e12,	// (0x00052412) list_single_2heading_msg_pane_t3

0x7e4b,	// (0x0005244b) list_single_2heading_msg_pane_t4_ParamLimits

0x7e4b,	// (0x0005244b) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005a2b8) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005a2b8) list_single_2heading_msg_pane_t

0x7553,	// (0x00051b53) title_pane_g4_ParamLimits

0x7553,	// (0x00051b53) title_pane_g4

0x5375,	// (0x0004f975) title_pane_stacon_g3_ParamLimits

0x5375,	// (0x0004f975) title_pane_stacon_g3

0xce69,	// (0x00057469) list_single_2graphic_im_pane_g4_ParamLimits

0xce69,	// (0x00057469) list_single_2graphic_im_pane_g4

0xad89,	// (0x00055389) popup_side_volume_key_window_cp

0xb544,	// (0x00055b44) main_idle_act2_pane_t1

0x5faa,	// (0x000505aa) toolbar_button_pane_g10

0x8723,	// (0x00052d23) popup_toolbar_window_cp1

0xbce5,	// (0x000562e5) clock_nsta_pane_cp_t1

0xbce5,	// (0x000562e5) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0005a0b3) clock_nsta_pane_cp_t

0x5566,	// (0x0004fb66) navi_navi_volume_pane_cp2_ParamLimits

0x5575,	// (0x0004fb75) popup_side_volume_key_window_g1_ParamLimits

0x5581,	// (0x0004fb81) popup_side_volume_key_window_g2_ParamLimits

0x5590,	// (0x0004fb90) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059d16) popup_side_volume_key_window_g_ParamLimits

0x6537,	// (0x00050b37) fep_hwr_aid_pane

0x65de,	// (0x00050bde) bg_fep_hwr_top_pane_g4_ParamLimits

0xc29e,	// (0x0005689e) fep_hwr_top_pane_g1_ParamLimits

0xc2b0,	// (0x000568b0) fep_hwr_top_pane_g2_ParamLimits

0x65fe,	// (0x00050bfe) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0005a108) fep_hwr_top_pane_g_ParamLimits

0x6613,	// (0x00050c13) fep_hwr_top_text_pane_ParamLimits

0xab4c,	// (0x0005514c) aid_touch_tab_arrow_arrow_2

0xab55,	// (0x00055155) aid_touch_tab_arrow_left_2

0x654b,	// (0x00050b4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6582,	// (0x00050b82) fep_hwr_prediction_pane

0xc410,	// (0x00056a10) fep_vkb_prediction_pane

0xc514,	// (0x00056b14) fep_vkb_side_pane_g3_ParamLimits

0xc514,	// (0x00056b14) fep_vkb_side_pane_g3

0x678e,	// (0x00050d8e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x67fa,	// (0x00050dfa) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6807,	// (0x00050e07) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0005a1b7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6936,	// (0x00050f36) fep_hwr_prediction_pane_g1

0x6940,	// (0x00050f40) fep_hwr_prediction_pane_g2

0x6948,	// (0x00050f48) fep_hwr_prediction_pane_g3

0x6950,	// (0x00050f50) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0005a2c1) fep_hwr_prediction_pane_g

0xd368,	// (0x00057968) fep_vkb_prediction_pane_g1

0xd372,	// (0x00057972) fep_vkb_prediction_pane_g2

0xd37a,	// (0x0005797a) fep_vkb_prediction_pane_g3

0xd382,	// (0x00057982) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005a2ca) fep_vkb_prediction_pane_g

0x6387,	// (0x00050987) slider_set_pane_g3

0x639b,	// (0x0005099b) slider_set_pane_g4

0x63b3,	// (0x000509b3) slider_set_pane_g5

0x6387,	// (0x00050987) slider_set_pane_g6

0x63c9,	// (0x000509c9) slider_set_pane_g7

0xb1de,	// (0x000557de) slider_form_pane_g3

0xb1e7,	// (0x000557e7) slider_form_pane_g4

0xb1ef,	// (0x000557ef) slider_form_pane_g5

0xb1de,	// (0x000557de) slider_form_pane_g6

0xb1f7,	// (0x000557f7) slider_form_pane_g7

0xb7ee,	// (0x00055dee) slider_set_pane_vc_g3

0xb7f7,	// (0x00055df7) slider_set_pane_vc_g4

0xb800,	// (0x00055e00) slider_set_pane_vc_g5

0xb7ee,	// (0x00055dee) slider_set_pane_vc_g6

0xb809,	// (0x00055e09) slider_set_pane_vc_g7

0xb9c9,	// (0x00055fc9) slider_form_pane_vc_g1

0xb9d2,	// (0x00055fd2) slider_form_pane_vc_g2

0xb9db,	// (0x00055fdb) slider_form_pane_vc_g3

0xb9c9,	// (0x00055fc9) slider_form_pane_vc_g4

0xb9e4,	// (0x00055fe4) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0005a085) slider_form_pane_vc_g

0x4950,	// (0x0004ef50) main_idle_act3_pane

0xd38a,	// (0x0005798a) ai3_links_pane

0xd393,	// (0x00057993) popup_ai3_data_window_ParamLimits

0xd393,	// (0x00057993) popup_ai3_data_window

0x750b,	// (0x00051b0b) grid_ai3_links_pane

0xd3ad,	// (0x000579ad) cell_ai3_links_pane_ParamLimits

0xd3ad,	// (0x000579ad) cell_ai3_links_pane

0xd3c5,	// (0x000579c5) bg_popup_sub_pane_cp11

0xd3d2,	// (0x000579d2) cell_ai3_links_pane_g1

0x750b,	// (0x00051b0b) bg_popup_sub_pane_cp12

0xd3f7,	// (0x000579f7) heading_ai3_data_pane

0xd3ff,	// (0x000579ff) list_ai3_gene_pane

0xd40b,	// (0x00057a0b) popup_ai3_data_window_g1

0xd413,	// (0x00057a13) heading_ai3_data_pane_g1

0xd41b,	// (0x00057a1b) heading_ai3_data_pane_t1

0xd429,	// (0x00057a29) list_double_ai3_gene_pane_ParamLimits

0xd429,	// (0x00057a29) list_double_ai3_gene_pane

0xd436,	// (0x00057a36) list_single_ai3_gene_pane_ParamLimits

0xd436,	// (0x00057a36) list_single_ai3_gene_pane

0xc207,	// (0x00056807) list_highlight_pane_cp7_ParamLimits

0xc207,	// (0x00056807) list_highlight_pane_cp7

0xd443,	// (0x00057a43) list_single_a13_gene_pane_t1_ParamLimits

0xd443,	// (0x00057a43) list_single_a13_gene_pane_t1

0xd45a,	// (0x00057a5a) list_single_ai3_gene_pane_g1

0xd463,	// (0x00057a63) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x0005a2d3) list_single_ai3_gene_pane_g

0xd46b,	// (0x00057a6b) list_double_ai3_gene_pane_g1_ParamLimits

0xd46b,	// (0x00057a6b) list_double_ai3_gene_pane_g1

0xd477,	// (0x00057a77) list_double_ai3_gene_pane_t1_ParamLimits

0xd477,	// (0x00057a77) list_double_ai3_gene_pane_t1

0xd493,	// (0x00057a93) list_double_ai3_gene_pane_t2_ParamLimits

0xd493,	// (0x00057a93) list_double_ai3_gene_pane_t2

0xd4a9,	// (0x00057aa9) list_double_ai3_gene_pane_t3_ParamLimits

0xd4a9,	// (0x00057aa9) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005a2d8) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005a2d8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d88,	// (0x00052388) aid_size_min_col_2

0xd354,	// (0x00057954) aid_size_min_msg_ParamLimits

0xd354,	// (0x00057954) aid_size_min_msg

0xc614,	// (0x00056c14) fep_vkb_top_text_pane_g2_ParamLimits

0xc614,	// (0x00056c14) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0005a138) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0005a138) fep_vkb_top_text_pane_g

0x4950,	// (0x0004ef50) main_hc_apps_shell_pane

0xd4c6,	// (0x00057ac6) grid_hc_apps_pane_ParamLimits

0xd4c6,	// (0x00057ac6) grid_hc_apps_pane

0xd4d5,	// (0x00057ad5) list_hc_apps_pane

0xd4dd,	// (0x00057add) scroll_pane_cp37_ParamLimits

0xd4dd,	// (0x00057add) scroll_pane_cp37

0xd4e9,	// (0x00057ae9) cell_hc_apps_pane_ParamLimits

0xd4e9,	// (0x00057ae9) cell_hc_apps_pane

0xd597,	// (0x00057b97) cell_hc_apps_pane_g1_ParamLimits

0xd597,	// (0x00057b97) cell_hc_apps_pane_g1

0xd5c8,	// (0x00057bc8) cell_hc_apps_pane_g2_ParamLimits

0xd5c8,	// (0x00057bc8) cell_hc_apps_pane_g2

0xd5e4,	// (0x00057be4) cell_hc_apps_pane_g3_ParamLimits

0xd5e4,	// (0x00057be4) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0005a2df) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0005a2df) cell_hc_apps_pane_g

0xd606,	// (0x00057c06) cell_hc_apps_pane_t1_ParamLimits

0xd606,	// (0x00057c06) cell_hc_apps_pane_t1

0x81ae,	// (0x000527ae) grid_highlight_pane_cp10_ParamLimits

0x81ae,	// (0x000527ae) grid_highlight_pane_cp10

0xd646,	// (0x00057c46) list_single_hc_apps_pane_ParamLimits

0xd646,	// (0x00057c46) list_single_hc_apps_pane

0xd6a2,	// (0x00057ca2) list_single_hc_apps_pane_g1

0x7e70,	// (0x00052470) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005a2e6) list_single_hc_apps_pane_g

0x7e89,	// (0x00052489) list_single_hc_apps_pane_g2_copy1

0x7ea5,	// (0x000524a5) list_single_hc_apps_pane_t1

0x7f25,	// (0x00052525) bg_set_opt_pane_cp_ParamLimits

0x4bb1,	// (0x0004f1b1) setting_slider_pane_t1_ParamLimits

0x4bca,	// (0x0004f1ca) setting_slider_pane_t2_ParamLimits

0x4be4,	// (0x0004f1e4) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00059b5e) setting_slider_pane_t_ParamLimits

0x4bfc,	// (0x0004f1fc) slider_set_pane_ParamLimits

0x587d,	// (0x0004fe7d) control_pane_g5_ParamLimits

0x587d,	// (0x0004fe7d) control_pane_g5

0xb02d,	// (0x0005562d) slider_set_pane_g1_ParamLimits

0x637b,	// (0x0005097b) slider_set_pane_g2_ParamLimits

0x6387,	// (0x00050987) slider_set_pane_g3_ParamLimits

0x639b,	// (0x0005099b) slider_set_pane_g4_ParamLimits

0x63b3,	// (0x000509b3) slider_set_pane_g5_ParamLimits

0x6387,	// (0x00050987) slider_set_pane_g6_ParamLimits

0x63c9,	// (0x000509c9) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00059f69) slider_set_pane_g_ParamLimits

0x92db,	// (0x000538db) navi_icon_text_pane_ParamLimits

0x97d1,	// (0x00053dd1) aid_fill_nsta_2_ParamLimits

0x9810,	// (0x00053e10) aid_touch_tab_arrow_left_ParamLimits

0x981f,	// (0x00053e1f) aid_touch_tab_arrow_right_ParamLimits

0x988c,	// (0x00053e8c) clock_nsta_pane_ParamLimits

0xab2e,	// (0x0005512e) navi_icon_pane_g1_ParamLimits

0xab3a,	// (0x0005513a) navi_text_pane_t1_ParamLimits

0xbdf1,	// (0x000563f1) navi_icon_text_pane_g1_ParamLimits

0xbdfd,	// (0x000563fd) navi_icon_text_pane_t1_ParamLimits

0xd6a2,	// (0x00057ca2) list_single_hc_apps_pane_g1_ParamLimits

0x7e70,	// (0x00052470) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005a2e6) list_single_hc_apps_pane_g_ParamLimits

0x7e89,	// (0x00052489) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7ea5,	// (0x000524a5) list_single_hc_apps_pane_t1_ParamLimits

0x4abb,	// (0x0004f0bb) popup_toolbar2_fixed_window_ParamLimits

0x4abb,	// (0x0004f0bb) popup_toolbar2_fixed_window

0x5e8c,	// (0x0005048c) popup_toolbar2_float_window

0x750b,	// (0x00051b0b) bg_popup_sub_pane_cp27

0xd6bb,	// (0x00057cbb) grid_toolbar2_float_pane

0x750b,	// (0x00051b0b) bg_popup_sub_pane_cp26

0xd6bb,	// (0x00057cbb) grid_toolbar2_fixed_pane

0xd6c3,	// (0x00057cc3) cell_toolbar2_fixed_pane_ParamLimits

0xd6c3,	// (0x00057cc3) cell_toolbar2_fixed_pane

0xd6d3,	// (0x00057cd3) cell_toolbar2_fixed_pane_g1

0xd6dc,	// (0x00057cdc) toolbar2_fixed_button_pane

0x9ca3,	// (0x000542a3) toolbar2_fixed_button_pane_g1

0x9cb3,	// (0x000542b3) toolbar2_fixed_button_pane_g2

0x9cab,	// (0x000542ab) toolbar2_fixed_button_pane_g3

0x9cc3,	// (0x000542c3) toolbar2_fixed_button_pane_g4

0x9cbb,	// (0x000542bb) toolbar2_fixed_button_pane_g5

0x9ccb,	// (0x000542cb) toolbar2_fixed_button_pane_g6

0x9cd3,	// (0x000542d3) toolbar2_fixed_button_pane_g7

0x9ce3,	// (0x000542e3) toolbar2_fixed_button_pane_g8

0x9cdb,	// (0x000542db) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00059e6b) toolbar2_fixed_button_pane_g

0xd6e4,	// (0x00057ce4) cell_toolbar2_float_pane_ParamLimits

0xd6e4,	// (0x00057ce4) cell_toolbar2_float_pane

0xd6f5,	// (0x00057cf5) cell_toolbar2_float_pane_g1

0xd6dc,	// (0x00057cdc) toolbar2_fixed_button_pane_cp

0xc370,	// (0x00056970) fep_vkb_accented_list_pane_ParamLimits

0xc370,	// (0x00056970) fep_vkb_accented_list_pane

0x676e,	// (0x00050d6e) bg_popup_fep_shadow_pane_g9

0x945b,	// (0x00053a5b) bg_popup_fep_shadow_pane_cp3

0x890e,	// (0x00052f0e) list_accented_list_pane

0xd6fe,	// (0x00057cfe) list_single_accented_list_pane_ParamLimits

0xd6fe,	// (0x00057cfe) list_single_accented_list_pane

0x945b,	// (0x00053a5b) list_highlight_pane_cp10

0xd70f,	// (0x00057d0f) list_single_accented_list_pane_t1

0x5ddc,	// (0x000503dc) popup_slider_window_ParamLimits

0x5ddc,	// (0x000503dc) popup_slider_window

0xd34b,	// (0x0005794b) aid_indentation_list_msg

0xd7d3,	// (0x00057dd3) bg_popup_window_pane_cp19

0xd83b,	// (0x00057e3b) popup_slider_window_g1

0xd857,	// (0x00057e57) popup_slider_window_g2

0xd873,	// (0x00057e73) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0005a2eb) popup_slider_window_g

0xd8d9,	// (0x00057ed9) popup_slider_window_t1

0xd94d,	// (0x00057f4d) small_volume_slider_vertical_pane

0xc242,	// (0x00056842) small_volume_slider_vertical_pane_g1

0xc242,	// (0x00056842) small_volume_slider_vertical_pane_g2

0xd969,	// (0x00057f69) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0005a2fd) small_volume_slider_vertical_pane_g

0x4873,	// (0x0004ee73) area_side_right_pane_ParamLimits

0x4873,	// (0x0004ee73) area_side_right_pane

0x6958,	// (0x00050f58) aid_size_side_button_ParamLimits

0x6958,	// (0x00050f58) aid_size_side_button

0x696c,	// (0x00050f6c) grid_sctrl_middle_pane_ParamLimits

0x696c,	// (0x00050f6c) grid_sctrl_middle_pane

0x698b,	// (0x00050f8b) sctrl_sk_bottom_pane

0x699c,	// (0x00050f9c) sctrl_sk_top_pane

0x69ae,	// (0x00050fae) aid_touch_sctrl_top

0x69bb,	// (0x00050fbb) bg_sctrl_sk_pane_ParamLimits

0x69bb,	// (0x00050fbb) bg_sctrl_sk_pane

0x69c9,	// (0x00050fc9) sctrl_sk_top_pane_g1

0x69d6,	// (0x00050fd6) sctrl_sk_top_pane_t1

0x69ae,	// (0x00050fae) aid_touch_sctrl_bottom

0x69bb,	// (0x00050fbb) bg_sctrl_sk_pane_cp_ParamLimits

0x69bb,	// (0x00050fbb) bg_sctrl_sk_pane_cp

0x69f1,	// (0x00050ff1) sctrl_sk_bottom_pane_g1

0x69d6,	// (0x00050fd6) sctrl_sk_bottom_pane_t1

0x69fa,	// (0x00050ffa) cell_sctrl_middle_pane_ParamLimits

0x69fa,	// (0x00050ffa) cell_sctrl_middle_pane

0x6a15,	// (0x00051015) aid_touch_sctrl_middle_ParamLimits

0x6a15,	// (0x00051015) aid_touch_sctrl_middle

0x6a27,	// (0x00051027) bg_sctrl_middle_pane_ParamLimits

0x6a27,	// (0x00051027) bg_sctrl_middle_pane

0x678e,	// (0x00050d8e) cell_sctrl_middle_pane_g1_ParamLimits

0x678e,	// (0x00050d8e) cell_sctrl_middle_pane_g1

0x6a35,	// (0x00051035) cell_sctrl_middle_pane_g2_ParamLimits

0x6a35,	// (0x00051035) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005a309) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005a309) cell_sctrl_middle_pane_g

0x9ca3,	// (0x000542a3) bg_sctrl_middle_pane_g1

0x9cab,	// (0x000542ab) bg_sctrl_middle_pane_g2

0x9cb3,	// (0x000542b3) bg_sctrl_middle_pane_g3

0x9cbb,	// (0x000542bb) bg_sctrl_middle_pane_g4

0x9cc3,	// (0x000542c3) bg_sctrl_middle_pane_g5

0x9ccb,	// (0x000542cb) bg_sctrl_middle_pane_g6

0x9cd3,	// (0x000542d3) bg_sctrl_middle_pane_g7

0x9cdb,	// (0x000542db) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0005a30e) bg_sctrl_middle_pane_g

0x9ce3,	// (0x000542e3) bg_sctrl_middle_pane_g8_copy1

0x9ca3,	// (0x000542a3) bg_sctrl_sk_pane_g1

0x9cb3,	// (0x000542b3) bg_sctrl_sk_pane_g2

0x9cab,	// (0x000542ab) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00059e6b) bg_sctrl_sk_pane_g

0x86e9,	// (0x00052ce9) aid_size_touch_scroll_bar

0x9cc3,	// (0x000542c3) bg_sctrl_sk_pane_g4

0x9cbb,	// (0x000542bb) bg_sctrl_sk_pane_g5

0x9ccb,	// (0x000542cb) bg_sctrl_sk_pane_g6

0x9cd3,	// (0x000542d3) bg_sctrl_sk_pane_g7

0x9ce3,	// (0x000542e3) bg_sctrl_sk_pane_g8

0x9cdb,	// (0x000542db) bg_sctrl_sk_pane_g9

0x5a45,	// (0x00050045) popup_fep_china_hwr2_fs_candidate_window

0x5a4f,	// (0x0005004f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5a4f,	// (0x0005004f) popup_fep_china_hwr2_fs_control_window

0x678e,	// (0x00050d8e) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x0005a304) sctrl_sk_top_pane_g

0xd972,	// (0x00057f72) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd972,	// (0x00057f72) aid_fep_china_hwr2_fs_cell

0xd984,	// (0x00057f84) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd984,	// (0x00057f84) bg_popup_fep_shadow_pane_cp4

0xd99b,	// (0x00057f9b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd99b,	// (0x00057f9b) bg_popup_fep_shadow_pane_cp5

0xd9ad,	// (0x00057fad) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9ad,	// (0x00057fad) popup_fep_china_hwr2_fs_control_bar_grid

0xd9bd,	// (0x00057fbd) popup_fep_china_hwr2_fs_control_funtion_grid

0xd9c5,	// (0x00057fc5) aid_fep_china_hwr2_fs_candi_cell

0x750b,	// (0x00051b0b) bg_popup_fep_shadow_pane_cp6

0xd9cf,	// (0x00057fcf) popup_fep_china_hwr2_fs_candidate_grid

0xd9d9,	// (0x00057fd9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9d9,	// (0x00057fd9) cell_fep_china_hwr2_fs_funtion_grid

0xc242,	// (0x00056842) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9f1,	// (0x00057ff1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9f1,	// (0x00057ff1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9ff,	// (0x00057fff) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9ff,	// (0x00057fff) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0005a31f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0005a31f) cell_fep_china_hwr2_fs_funtion_grid_g

0xda15,	// (0x00058015) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda15,	// (0x00058015) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda2a,	// (0x0005802a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda2a,	// (0x0005802a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x0005a324) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x0005a324) cell_fep_china_hwr2_fs_funtion_grid_t

0xda46,	// (0x00058046) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda4e,	// (0x0005804e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda56,	// (0x00058056) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0005a329) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda5e,	// (0x0005805e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda5e,	// (0x0005805e) cell_fep_china_hwr2_fs_candidate_grid

0xda77,	// (0x00058077) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda7f,	// (0x0005807f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc242,	// (0x00056842) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc242,	// (0x00056842) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0005a13d) cell_fep_china_hwr2_fs_candidate_grid_g

0xda87,	// (0x00058087) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9899,	// (0x00053e99) clock_nsta_pane_cp_24_ParamLimits

0x9899,	// (0x00053e99) clock_nsta_pane_cp_24

0x9917,	// (0x00053f17) indicator_nsta_pane_cp_24_ParamLimits

0x9917,	// (0x00053f17) indicator_nsta_pane_cp_24

0xa9aa,	// (0x00054faa) heading_pane_g1

0x0001,

0xf8d0,	// (0x00059ed0) heading_pane_g

0xb38d,	// (0x0005598d) grid_sct_catagory_button_pane

0xb3bd,	// (0x000559bd) scroll_pane_cp5_ParamLimits

0xbe3f,	// (0x0005643f) button_value_adjust_pane_cp5_ParamLimits

0xbe3f,	// (0x0005643f) button_value_adjust_pane_cp5

0xbf1e,	// (0x0005651e) form2_midp_time_pane_ParamLimits

0xda95,	// (0x00058095) cell_sct_catagory_button_pane_ParamLimits

0xda95,	// (0x00058095) cell_sct_catagory_button_pane

0xc207,	// (0x00056807) bg_button_pane_cp01_ParamLimits

0xc207,	// (0x00056807) bg_button_pane_cp01

0xc242,	// (0x00056842) cell_sct_catagory_button_pane_g1

0x5e1b,	// (0x0005041b) popup_tb_extension_window

0xdaa7,	// (0x000580a7) aid_size_cell_ext_ParamLimits

0xdaa7,	// (0x000580a7) aid_size_cell_ext

0x81ae,	// (0x000527ae) bg_tb_trans_pane_cp1_ParamLimits

0x81ae,	// (0x000527ae) bg_tb_trans_pane_cp1

0xdac7,	// (0x000580c7) grid_tb_ext_pane_ParamLimits

0xdac7,	// (0x000580c7) grid_tb_ext_pane

0xdaf5,	// (0x000580f5) cell_tb_ext_pane_ParamLimits

0xdaf5,	// (0x000580f5) cell_tb_ext_pane

0xdb0c,	// (0x0005810c) cell_tb_ext_pane_g1_ParamLimits

0xdb0c,	// (0x0005810c) cell_tb_ext_pane_g1

0xdb29,	// (0x00058129) cell_tb_ext_pane_t1

0x81ae,	// (0x000527ae) list_highlight_pane_cp11_ParamLimits

0x81ae,	// (0x000527ae) list_highlight_pane_cp11

0x4ada,	// (0x0004f0da) popup_uni_indicator_window_ParamLimits

0x4ada,	// (0x0004f0da) popup_uni_indicator_window

0x87c6,	// (0x00052dc6) bg_popup_sub_pane_cp14

0xdb44,	// (0x00058144) list_uniindi_pane

0xdb50,	// (0x00058150) uniindi_top_pane

0x81ae,	// (0x000527ae) bg_uniindi_top_pane

0xdb6f,	// (0x0005816f) uniindi_top_pane_g1

0xdb85,	// (0x00058185) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0005a330) uniindi_top_pane_g

0xdbaf,	// (0x000581af) uniindi_top_pane_t1

0xdbd9,	// (0x000581d9) list_single_uniindi_pane_ParamLimits

0xdbd9,	// (0x000581d9) list_single_uniindi_pane

0xc242,	// (0x00056842) bg_uniindi_top_pane_g1

0xdbec,	// (0x000581ec) list_single_uniindi_pane_g1

0xdbff,	// (0x000581ff) list_single_uniindi_pane_t1

0x4950,	// (0x0004ef50) control_bg_pane

0xdc24,	// (0x00058224) bg_sctrl_sk_pane_cp1

0xdc2d,	// (0x0005822d) bg_sctrl_sk_pane_cp2

0xdc36,	// (0x00058236) control_bg_pane_g1

0xdc3f,	// (0x0005823f) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0005a339) control_bg_pane_g

0xbc99,	// (0x00056299) cell_indicator_nsta_pane_g1_ParamLimits

0xbca7,	// (0x000562a7) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0005a0a1) cell_indicator_nsta_pane_g_ParamLimits

0x7b65,	// (0x00052165) form2_midp_time_pane_t1_ParamLimits

0x59a5,	// (0x0004ffa5) main_idle_act4_pane_ParamLimits

0x59a5,	// (0x0004ffa5) main_idle_act4_pane

0x5e1b,	// (0x0005041b) popup_tb_extension_window_ParamLimits

0xdae5,	// (0x000580e5) tb_ext_find_pane_ParamLimits

0xdae5,	// (0x000580e5) tb_ext_find_pane

0xdc48,	// (0x00058248) ai_gene_pane_1_cp1

0x95a2,	// (0x00053ba2) ai_gene_pane_2_cp1

0xdc50,	// (0x00058250) list_single_idle_plugin_calendar_pane

0xdc59,	// (0x00058259) list_single_idle_plugin_notification_pane

0xdc62,	// (0x00058262) list_single_idle_plugin_player_pane

0xdc6b,	// (0x0005826b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc6b,	// (0x0005826b) list_single_idle_plugin_shortcut_pane

0xdc8d,	// (0x0005828d) main_idle_act4_pane_t1

0xdc9f,	// (0x0005829f) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0005a33e) main_idle_act4_pane_t

0xdcb1,	// (0x000582b1) middle_sk_idle_act4_pane_ParamLimits

0xdcb1,	// (0x000582b1) middle_sk_idle_act4_pane

0xdcc7,	// (0x000582c7) popup_clock_digital_analogue_window_cp2

0xdce1,	// (0x000582e1) shortcut_wheel_idle_act4_pane_ParamLimits

0xdce1,	// (0x000582e1) shortcut_wheel_idle_act4_pane

0xc242,	// (0x00056842) shortcut_wheel_idle_act4_pane_g1

0xc242,	// (0x00056842) shortcut_wheel_idle_act4_pane_g2

0xc242,	// (0x00056842) shortcut_wheel_idle_act4_pane_g3

0xc242,	// (0x00056842) shortcut_wheel_idle_act4_pane_g4

0xc242,	// (0x00056842) shortcut_wheel_idle_act4_pane_g5

0xdcf5,	// (0x000582f5) shortcut_wheel_idle_act4_pane_g6

0xdcfd,	// (0x000582fd) shortcut_wheel_idle_act4_pane_g7

0xdd05,	// (0x00058305) shortcut_wheel_idle_act4_pane_g8

0xdd0d,	// (0x0005830d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x0005a343) shortcut_wheel_idle_act4_pane_g

0xc4c0,	// (0x00056ac0) middle_sk_idle_act4_pane_g1_ParamLimits

0xc4c0,	// (0x00056ac0) middle_sk_idle_act4_pane_g1

0xdd71,	// (0x00058371) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd71,	// (0x00058371) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x0005a366) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x0005a366) middle_sk_idle_act4_pane_g

0xdd7d,	// (0x0005837d) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd7d,	// (0x0005837d) middle_sk_idle_act4_pane_t1

0xdd9a,	// (0x0005839a) grid_ai_shortcut_pane_ParamLimits

0xdd9a,	// (0x0005839a) grid_ai_shortcut_pane

0xddb3,	// (0x000583b3) list_highlight_pane_cp16_ParamLimits

0xddb3,	// (0x000583b3) list_highlight_pane_cp16

0xddc0,	// (0x000583c0) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xddc0,	// (0x000583c0) list_single_idle_plugin_shortcut_pane_g1

0xddcc,	// (0x000583cc) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddcc,	// (0x000583cc) list_single_idle_plugin_shortcut_pane_g2

0xdde4,	// (0x000583e4) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdde4,	// (0x000583e4) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x0005a36b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x0005a36b) list_single_idle_plugin_shortcut_pane_g

0xddf7,	// (0x000583f7) cell_ai_shortcut_pane_ParamLimits

0xddf7,	// (0x000583f7) cell_ai_shortcut_pane

0xde1b,	// (0x0005841b) cell_ai_shortcut_pane_g1_ParamLimits

0xde1b,	// (0x0005841b) cell_ai_shortcut_pane_g1

0xdc48,	// (0x00058248) ai_gene_pane_1_cp2

0xde3d,	// (0x0005843d) ai_gene_pane_2_cp2

0xde45,	// (0x00058445) list_highlight_pane_cp15

0xde4e,	// (0x0005844e) list_single_idle_plugin_calendar_pane_g1

0xde45,	// (0x00058445) list_highlight_pane_cp17

0xde56,	// (0x00058456) list_single_idle_plugin_calendar_pane_g1_copy1

0xde5e,	// (0x0005845e) list_single_idle_plugin_player_pane_g1

0xb5e6,	// (0x00055be6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0005a372) list_single_idle_plugin_player_pane_g

0xde66,	// (0x00058466) list_single_idle_plugin_player_pane_t1

0xde74,	// (0x00058474) list_single_idle_plugin_player_pane_t2

0xde82,	// (0x00058482) list_single_idle_plugin_player_pane_t3

0xde90,	// (0x00058490) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005a377) list_single_idle_plugin_player_pane_t

0xde9e,	// (0x0005849e) wait_bar_pane_cp15

0xdea6,	// (0x000584a6) grid_ai_notification_pane

0xb5e6,	// (0x00055be6) list_single_idle_plugin_notification_pane_g1

0xdeaf,	// (0x000584af) cell_ai_notification_pane_ParamLimits

0xdeaf,	// (0x000584af) cell_ai_notification_pane

0xdebc,	// (0x000584bc) cell_ai_notification_pane_g1

0xdec4,	// (0x000584c4) cell_ai_notification_pane_t1

0xded2,	// (0x000584d2) tb_ext_find_button_pane

0xdeda,	// (0x000584da) tb_ext_find_pane_g1

0xdee2,	// (0x000584e2) tb_ext_find_pane_t1

0x8e3c,	// (0x0005343c) tb_ext_find_button_pane_g1

0xdef0,	// (0x000584f0) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0005a380) tb_ext_find_button_pane_g

0xdc8d,	// (0x0005828d) main_idle_act4_pane_t1_ParamLimits

0xdc9f,	// (0x0005829f) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0005a33e) main_idle_act4_pane_t_ParamLimits

0xdcc7,	// (0x000582c7) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdcd5,	// (0x000582d5) sat_plugin_idle_act4_pane_ParamLimits

0xdcd5,	// (0x000582d5) sat_plugin_idle_act4_pane

0xdef9,	// (0x000584f9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdef9,	// (0x000584f9) sat_plugin_idle_act4_pane_t1

0xdf0c,	// (0x0005850c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf0c,	// (0x0005850c) sat_plugin_idle_act4_pane_t2

0xdf1f,	// (0x0005851f) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf1f,	// (0x0005851f) sat_plugin_idle_act4_pane_t3

0xdf32,	// (0x00058532) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf32,	// (0x00058532) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005a385) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005a385) sat_plugin_idle_act4_pane_t

0x4a15,	// (0x0004f015) popup_battery_window_ParamLimits

0x4a15,	// (0x0004f015) popup_battery_window

0x81ae,	// (0x000527ae) bg_popup_sub_pane_cp25_ParamLimits

0x81ae,	// (0x000527ae) bg_popup_sub_pane_cp25

0xdf45,	// (0x00058545) popup_battery_window_g1_ParamLimits

0xdf45,	// (0x00058545) popup_battery_window_g1

0xdf51,	// (0x00058551) popup_battery_window_t1_ParamLimits

0xdf51,	// (0x00058551) popup_battery_window_t1

0xdf63,	// (0x00058563) popup_battery_window_t2_ParamLimits

0xdf63,	// (0x00058563) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0005a38e) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0005a38e) popup_battery_window_t

0x946f,	// (0x00053a6f) midp_canvas_pane_ParamLimits

0x94e6,	// (0x00053ae6) midp_keypad_pane_ParamLimits

0x94e6,	// (0x00053ae6) midp_keypad_pane

0x977f,	// (0x00053d7f) main_midp_pane_ParamLimits

0xbd03,	// (0x00056303) signal_pane_g2_cp_ParamLimits

0xdf80,	// (0x00058580) aid_size_cell_midp_keypad_ParamLimits

0xdf80,	// (0x00058580) aid_size_cell_midp_keypad

0xdf9a,	// (0x0005859a) midp_keyp_game_grid_pane_ParamLimits

0xdf9a,	// (0x0005859a) midp_keyp_game_grid_pane

0xdfba,	// (0x000585ba) midp_keyp_rocker_pane_ParamLimits

0xdfba,	// (0x000585ba) midp_keyp_rocker_pane

0xdff3,	// (0x000585f3) midp_keyp_sk_left_pane_ParamLimits

0xdff3,	// (0x000585f3) midp_keyp_sk_left_pane

0xe04d,	// (0x0005864d) midp_keyp_sk_right_pane_ParamLimits

0xe04d,	// (0x0005864d) midp_keyp_sk_right_pane

0x750b,	// (0x00051b0b) bg_button_pane_cp03

0xe0a7,	// (0x000586a7) midp_keyp_sk_left_pane_g1

0x750b,	// (0x00051b0b) bg_button_pane_cp04

0xe0a7,	// (0x000586a7) midp_keyp_sk_right_pane_g1

0xc242,	// (0x00056842) midp_keyp_rocker_pane_g1

0xe0b0,	// (0x000586b0) keyp_game_cell_pane_ParamLimits

0xe0b0,	// (0x000586b0) keyp_game_cell_pane

0x750b,	// (0x00051b0b) bg_button_pane_cp02

0xe0e4,	// (0x000586e4) keyp_game_cell_pane_g1

0x4a59,	// (0x0004f059) popup_fep_vkb2_window_ParamLimits

0x4a59,	// (0x0004f059) popup_fep_vkb2_window

0x6a53,	// (0x00051053) aid_size_cell_vkb2_ParamLimits

0x6a53,	// (0x00051053) aid_size_cell_vkb2

0x6aa7,	// (0x000510a7) popup_fep_vkb2_window_g1_ParamLimits

0x6aa7,	// (0x000510a7) popup_fep_vkb2_window_g1

0x6aef,	// (0x000510ef) vkb2_area_bottom_pane_ParamLimits

0x6aef,	// (0x000510ef) vkb2_area_bottom_pane

0x6b3b,	// (0x0005113b) vkb2_area_keypad_pane_ParamLimits

0x6b3b,	// (0x0005113b) vkb2_area_keypad_pane

0x6b7d,	// (0x0005117d) vkb2_area_top_pane_ParamLimits

0x6b7d,	// (0x0005117d) vkb2_area_top_pane

0x6bf7,	// (0x000511f7) vkb2_top_entry_pane_ParamLimits

0x6bf7,	// (0x000511f7) vkb2_top_entry_pane

0x6c21,	// (0x00051221) vkb2_top_grid_left_pane_ParamLimits

0x6c21,	// (0x00051221) vkb2_top_grid_left_pane

0x6c3f,	// (0x0005123f) vkb2_top_grid_right_pane_ParamLimits

0x6c3f,	// (0x0005123f) vkb2_top_grid_right_pane

0x6c5d,	// (0x0005125d) vkb2_cell_keypad_pane_ParamLimits

0x6c5d,	// (0x0005125d) vkb2_cell_keypad_pane

0x6d2e,	// (0x0005132e) vkb2_area_bottom_grid_pane_ParamLimits

0x6d2e,	// (0x0005132e) vkb2_area_bottom_grid_pane

0x6d54,	// (0x00051354) vkb2_area_bottom_pane_g1_ParamLimits

0x6d54,	// (0x00051354) vkb2_area_bottom_pane_g1

0x6d78,	// (0x00051378) vkb2_area_bottom_pane_g2_ParamLimits

0x6d78,	// (0x00051378) vkb2_area_bottom_pane_g2

0x6da6,	// (0x000513a6) vkb2_area_bottom_pane_g3_ParamLimits

0x6da6,	// (0x000513a6) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x0005a393) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x0005a393) vkb2_area_bottom_pane_g

0x6e07,	// (0x00051407) vkb2_top_cell_left_pane_ParamLimits

0x6e07,	// (0x00051407) vkb2_top_cell_left_pane

0xe0f5,	// (0x000586f5) vkb2_top_entry_pane_g1_ParamLimits

0xe0f5,	// (0x000586f5) vkb2_top_entry_pane_g1

0xe103,	// (0x00058703) vkb2_top_entry_pane_t1_ParamLimits

0xe103,	// (0x00058703) vkb2_top_entry_pane_t1

0xe135,	// (0x00058735) vkb2_top_entry_pane_t2_ParamLimits

0xe135,	// (0x00058735) vkb2_top_entry_pane_t2

0xe167,	// (0x00058767) vkb2_top_entry_pane_t3_ParamLimits

0xe167,	// (0x00058767) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005a39a) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005a39a) vkb2_top_entry_pane_t

0x6e54,	// (0x00051454) vkb2_top_grid_right_pane_g1_ParamLimits

0x6e54,	// (0x00051454) vkb2_top_grid_right_pane_g1

0x6e6a,	// (0x0005146a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e6a,	// (0x0005146a) vkb2_top_grid_right_pane_g2

0x6e82,	// (0x00051482) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e82,	// (0x00051482) vkb2_top_grid_right_pane_g3

0x6e9a,	// (0x0005149a) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e9a,	// (0x0005149a) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005a3a1) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005a3a1) vkb2_top_grid_right_pane_g

0x6eb0,	// (0x000514b0) vkb2_top_cell_left_pane_g1

0x6ec7,	// (0x000514c7) vkb2_cell_keypad_pane_g1_ParamLimits

0x6ec7,	// (0x000514c7) vkb2_cell_keypad_pane_g1

0xe18b,	// (0x0005878b) vkb2_cell_keypad_pane_t1_ParamLimits

0xe18b,	// (0x0005878b) vkb2_cell_keypad_pane_t1

0x6ed5,	// (0x000514d5) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ed5,	// (0x000514d5) vkb2_cell_bottom_grid_pane

0x6f0e,	// (0x0005150e) vkb2_cell_bottom_grid_pane_g1

0xdd15,	// (0x00058315) aid_call2_pane_cp02

0xdd1d,	// (0x0005831d) aid_call_pane_cp02

0xdd25,	// (0x00058325) clock_digital_number_pane_cp10

0xdd2d,	// (0x0005832d) clock_digital_number_pane_cp11

0xdd35,	// (0x00058335) clock_digital_number_pane_cp12

0xdd3d,	// (0x0005833d) clock_digital_number_pane_cp13

0xdd45,	// (0x00058345) clock_digital_separator_pane_cp10

0x8e3c,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g1

0x8e3c,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g2

0xdd4d,	// (0x0005834d) popup_clock_digital_analogue_window_cp2_g3

0x8e3c,	// (0x0005343c) popup_clock_digital_analogue_window_cp2_g4

0xdd4d,	// (0x0005834d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x0005a356) popup_clock_digital_analogue_window_cp2_g

0xdd55,	// (0x00058355) popup_clock_digital_analogue_window_cp2_t1

0xdd63,	// (0x00058363) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0005a361) popup_clock_digital_analogue_window_cp2_t

0xc242,	// (0x00056842) clock_digital_number_pane_cp10_g1

0xc242,	// (0x00056842) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a13d) clock_digital_number_pane_cp10_g

0xc242,	// (0x00056842) clock_digital_separator_pane_cp10_g1

0xc242,	// (0x00056842) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005a13d) clock_digital_separator_pane_cp10_g

0xdb91,	// (0x00058191) uniindi_top_pane_g3

0xdba2,	// (0x000581a2) uniindi_top_pane_g4

0x6ce8,	// (0x000512e8) vkb2_row_keypad_pane_ParamLimits

0x6ce8,	// (0x000512e8) vkb2_row_keypad_pane

0x6f2a,	// (0x0005152a) vkb2_cell_t_keypad_pane_ParamLimits

0x6f2a,	// (0x0005152a) vkb2_cell_t_keypad_pane

0x6f3a,	// (0x0005153a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f3a,	// (0x0005153a) vkb2_cell_t_keypad_pane_cp08

0x6f4d,	// (0x0005154d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f4d,	// (0x0005154d) vkb2_cell_t_keypad_pane_cp09

0x6f61,	// (0x00051561) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f61,	// (0x00051561) vkb2_cell_t_keypad_pane_cp01

0x6f72,	// (0x00051572) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f72,	// (0x00051572) vkb2_cell_t_keypad_pane_cp02

0x6f83,	// (0x00051583) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f83,	// (0x00051583) vkb2_cell_t_keypad_pane_cp03

0x6f94,	// (0x00051594) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f94,	// (0x00051594) vkb2_cell_t_keypad_pane_cp04

0x6fa5,	// (0x000515a5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6fa5,	// (0x000515a5) vkb2_cell_t_keypad_pane_cp05

0x6fb6,	// (0x000515b6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6fb6,	// (0x000515b6) vkb2_cell_t_keypad_pane_cp06

0x6fc7,	// (0x000515c7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6fc7,	// (0x000515c7) vkb2_cell_t_keypad_pane_cp07

0x6fd8,	// (0x000515d8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fd8,	// (0x000515d8) vkb2_cell_t_keypad_pane_cp10

0x678e,	// (0x00050d8e) vkb2_cell_t_keypad_pane_g1

0xe1a2,	// (0x000587a2) vkb2_cell_t_keypad_pane_t1

0x4950,	// (0x0004ef50) popup_grid_graphic2_window

0xe1b4,	// (0x000587b4) aid_size_cell_graphic2_ParamLimits

0xe1b4,	// (0x000587b4) aid_size_cell_graphic2

0xe1ec,	// (0x000587ec) bg_popup_window_pane_cp21_ParamLimits

0xe1ec,	// (0x000587ec) bg_popup_window_pane_cp21

0xe1fa,	// (0x000587fa) graphic2_pages_pane_ParamLimits

0xe1fa,	// (0x000587fa) graphic2_pages_pane

0xe240,	// (0x00058840) grid_graphic2_control_pane_ParamLimits

0xe240,	// (0x00058840) grid_graphic2_control_pane

0xe27e,	// (0x0005887e) grid_graphic2_pane_ParamLimits

0xe27e,	// (0x0005887e) grid_graphic2_pane

0xe2f2,	// (0x000588f2) cell_graphic2_pane

0x4950,	// (0x0004ef50) main_comp_mode_pane

0xd3ff,	// (0x000579ff) list_ai3_gene_pane_ParamLimits

0xd7d3,	// (0x00057dd3) bg_popup_window_pane_cp19_ParamLimits

0xd7df,	// (0x00057ddf) bg_touch_area_indi_pane_ParamLimits

0xd7df,	// (0x00057ddf) bg_touch_area_indi_pane

0xd7f5,	// (0x00057df5) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7f5,	// (0x00057df5) bg_touch_area_indi_pane_cp01

0xd80b,	// (0x00057e0b) bg_touch_area_indi_pane_cp02_ParamLimits

0xd80b,	// (0x00057e0b) bg_touch_area_indi_pane_cp02

0xd821,	// (0x00057e21) bg_touch_area_indi_pane_cp03_ParamLimits

0xd821,	// (0x00057e21) bg_touch_area_indi_pane_cp03

0xd83b,	// (0x00057e3b) popup_slider_window_g1_ParamLimits

0xd857,	// (0x00057e57) popup_slider_window_g2_ParamLimits

0xd873,	// (0x00057e73) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0005a2eb) popup_slider_window_g_ParamLimits

0xd8d9,	// (0x00057ed9) popup_slider_window_t1_ParamLimits

0xd94d,	// (0x00057f4d) small_volume_slider_vertical_pane_ParamLimits

0xe2f2,	// (0x000588f2) cell_graphic2_pane_ParamLimits

0xe341,	// (0x00058941) bg_button_pane_cp10_ParamLimits

0xe341,	// (0x00058941) bg_button_pane_cp10

0xe354,	// (0x00058954) bg_button_pane_cp11_ParamLimits

0xe354,	// (0x00058954) bg_button_pane_cp11

0xe367,	// (0x00058967) graphic2_pages_pane_g1_ParamLimits

0xe367,	// (0x00058967) graphic2_pages_pane_g1

0xe382,	// (0x00058982) graphic2_pages_pane_g2_ParamLimits

0xe382,	// (0x00058982) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005a3af) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005a3af) graphic2_pages_pane_g

0xe39a,	// (0x0005899a) graphic2_pages_pane_t1_ParamLimits

0xe39a,	// (0x0005899a) graphic2_pages_pane_t1

0xe3b2,	// (0x000589b2) cell_graphic2_control_pane_ParamLimits

0xe3b2,	// (0x000589b2) cell_graphic2_control_pane

0xe3d0,	// (0x000589d0) cell_graphic2_pane_g1_ParamLimits

0xe3d0,	// (0x000589d0) cell_graphic2_pane_g1

0xe3dd,	// (0x000589dd) cell_graphic2_pane_g2_ParamLimits

0xe3dd,	// (0x000589dd) cell_graphic2_pane_g2

0xe3ea,	// (0x000589ea) cell_graphic2_pane_g3_ParamLimits

0xe3ea,	// (0x000589ea) cell_graphic2_pane_g3

0xe3f7,	// (0x000589f7) cell_graphic2_pane_g4_ParamLimits

0xe3f7,	// (0x000589f7) cell_graphic2_pane_g4

0xe404,	// (0x00058a04) cell_graphic2_pane_g5_ParamLimits

0xe404,	// (0x00058a04) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005a3b4) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005a3b4) cell_graphic2_pane_g

0xe41f,	// (0x00058a1f) cell_graphic2_pane_t1_ParamLimits

0xe41f,	// (0x00058a1f) cell_graphic2_pane_t1

0x9d17,	// (0x00054317) grid_highlight_pane_cp11_ParamLimits

0x9d17,	// (0x00054317) grid_highlight_pane_cp11

0x81ae,	// (0x000527ae) bg_button_pane_cp05

0xe456,	// (0x00058a56) cell_graphic2_control_pane_g1

0xc242,	// (0x00056842) bg_touch_area_indi_pane_g1

0xe47e,	// (0x00058a7e) aid_cmod_rocker_key_size

0xe488,	// (0x00058a88) aid_cmode_itu_key_size

0xe492,	// (0x00058a92) main_cmode_video_pane

0xe49c,	// (0x00058a9c) main_comp_mode_itu_pane

0xe4a8,	// (0x00058aa8) main_comp_mode_rocker_pane

0xe4b4,	// (0x00058ab4) cell_cmode_rocker_pane_ParamLimits

0xe4b4,	// (0x00058ab4) cell_cmode_rocker_pane

0xe4c6,	// (0x00058ac6) cell_cmode_itu_pane_ParamLimits

0xe4c6,	// (0x00058ac6) cell_cmode_itu_pane

0x87c6,	// (0x00052dc6) bg_button_pane_cp06_ParamLimits

0x87c6,	// (0x00052dc6) bg_button_pane_cp06

0xc4c0,	// (0x00056ac0) cell_cmode_rocker_pane_g1_ParamLimits

0xc4c0,	// (0x00056ac0) cell_cmode_rocker_pane_g1

0xd9f1,	// (0x00057ff1) cell_cmode_rocker_pane_g2_ParamLimits

0xd9f1,	// (0x00057ff1) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005a3c4) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005a3c4) cell_cmode_rocker_pane_g

0x750b,	// (0x00051b0b) bg_button_pane_cp07

0xe4db,	// (0x00058adb) cell_cmode_itu_pane_g1

0xe4e4,	// (0x00058ae4) cell_cmode_itu_pane_t1

0xe4f2,	// (0x00058af2) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005a3c9) cell_cmode_itu_pane_t

0xdc14,	// (0x00058214) aid_touch_ctrl_left

0xdc1c,	// (0x0005821c) aid_touch_ctrl_right

0x750b,	// (0x00051b0b) compa_mode_pane

0xe500,	// (0x00058b00) aid_cmod_rocker_key_size_cp

0xe50a,	// (0x00058b0a) aid_cmode_itu_key_size_cp

0xe514,	// (0x00058b14) compa_mode_pane_g1

0xe51c,	// (0x00058b1c) compa_mode_pane_g2

0xe524,	// (0x00058b24) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005a3ce) compa_mode_pane_g

0xe52c,	// (0x00058b2c) main_comp_mode_itu_pane_cp

0xe534,	// (0x00058b34) main_comp_mode_rocker_pane_cp

0xe53c,	// (0x00058b3c) cell_cmode_itu_pane_cp_ParamLimits

0xe53c,	// (0x00058b3c) cell_cmode_itu_pane_cp

0xe551,	// (0x00058b51) cell_cmode_rocker_pane_cp_ParamLimits

0xe551,	// (0x00058b51) cell_cmode_rocker_pane_cp

0x87c6,	// (0x00052dc6) bg_button_pane_cp06_cp_ParamLimits

0x87c6,	// (0x00052dc6) bg_button_pane_cp06_cp

0xc4c0,	// (0x00056ac0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc4c0,	// (0x00056ac0) cell_cmode_rocker_pane_g1_cp

0xc242,	// (0x00056842) cell_cmode_rocker_pane_g2_cp

0x750b,	// (0x00051b0b) bg_button_pane_cp07_cp

0xb1de,	// (0x000557de) cell_cmode_itu_pane_g1_cp

0xe563,	// (0x00058b63) cell_cmode_itu_pane_t1_cp

0xe563,	// (0x00058b63) cell_cmode_itu_pane_t2_cp

0xb1cb,	// (0x000557cb) settings_code_pane_cp2

0x7f25,	// (0x00052525) bg_popup_window_pane_cp3_ParamLimits

0x83ae,	// (0x000529ae) heading_pane_cp3_ParamLimits

0x83ba,	// (0x000529ba) listscroll_popup_graphic_pane_ParamLimits

0x6537,	// (0x00050b37) fep_hwr_aid_pane_ParamLimits

0x69ae,	// (0x00050fae) aid_touch_sctrl_top_ParamLimits

0x69c9,	// (0x00050fc9) sctrl_sk_top_pane_g1_ParamLimits

0x678e,	// (0x00050d8e) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x0005a304) sctrl_sk_top_pane_g_ParamLimits

0x69d6,	// (0x00050fd6) sctrl_sk_top_pane_t1_ParamLimits

0x69ae,	// (0x00050fae) aid_touch_sctrl_bottom_ParamLimits

0x69d6,	// (0x00050fd6) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb5d,	// (0x0005815d) aid_area_touch_clock

0x6bbf,	// (0x000511bf) aid_vkb2_area_top_pane_cell_ParamLimits

0x6bbf,	// (0x000511bf) aid_vkb2_area_top_pane_cell

0x6d0a,	// (0x0005130a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6d0a,	// (0x0005130a) aid_vkb2_area_bottom_pane_cell

0xe0ed,	// (0x000586ed) popup_char_count_window

0xe571,	// (0x00058b71) popup_char_count_window_g1

0xe57a,	// (0x00058b7a) popup_char_count_window_g2

0xe583,	// (0x00058b83) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005a3d5) popup_char_count_window_g

0xe58c,	// (0x00058b8c) popup_char_count_window_t1

0x6a85,	// (0x00051085) popup_fep_char_preview_window_ParamLimits

0x6a85,	// (0x00051085) popup_fep_char_preview_window

0x6bdd,	// (0x000511dd) vkb2_top_candi_pane_ParamLimits

0x6bdd,	// (0x000511dd) vkb2_top_candi_pane

0xe59a,	// (0x00058b9a) cell_vkb2_top_candi_pane_ParamLimits

0xe59a,	// (0x00058b9a) cell_vkb2_top_candi_pane

0x6fed,	// (0x000515ed) bg_popup_fep_char_preview_window_ParamLimits

0x6fed,	// (0x000515ed) bg_popup_fep_char_preview_window

0x6ffb,	// (0x000515fb) popup_fep_char_preview_window_t1_ParamLimits

0x6ffb,	// (0x000515fb) popup_fep_char_preview_window_t1

0xe5e7,	// (0x00058be7) bg_popup_fep_char_preview_window_g1

0xe5ef,	// (0x00058bef) bg_popup_fep_char_preview_window_g2

0xe5f7,	// (0x00058bf7) bg_popup_fep_char_preview_window_g3

0xe5ff,	// (0x00058bff) bg_popup_fep_char_preview_window_g4

0xe607,	// (0x00058c07) bg_popup_fep_char_preview_window_g5

0x7035,	// (0x00051635) bg_popup_fep_char_preview_window_g6

0xe60f,	// (0x00058c0f) bg_popup_fep_char_preview_window_g7

0xe617,	// (0x00058c17) bg_popup_fep_char_preview_window_g8

0xe61f,	// (0x00058c1f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005a3dc) bg_popup_fep_char_preview_window_g

0x678e,	// (0x00050d8e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x678e,	// (0x00050d8e) cell_vkb2_top_candi_pane_g1

0x679c,	// (0x00050d9c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x679c,	// (0x00050d9c) cell_vkb2_top_candi_pane_g2

0xe0c3,	// (0x000586c3) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe0c3,	// (0x000586c3) cell_vkb2_top_candi_pane_g3

0x703d,	// (0x0005163d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x703d,	// (0x0005163d) cell_vkb2_top_candi_pane_g4

0xc98b,	// (0x00056f8b) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc98b,	// (0x00056f8b) cell_vkb2_top_candi_pane_g5

0x705e,	// (0x0005165e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x705e,	// (0x0005165e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005a3ef) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005a3ef) cell_vkb2_top_candi_pane_g

0x706c,	// (0x0005166c) cell_vkb2_top_candi_pane_t1

0x6367,	// (0x00050967) aid_size_touch_slider_mark_ParamLimits

0x6367,	// (0x00050967) aid_size_touch_slider_mark

0xe230,	// (0x00058830) grid_graphic2_catg_pane_ParamLimits

0xe230,	// (0x00058830) grid_graphic2_catg_pane

0xe2ce,	// (0x000588ce) popup_grid_graphic2_window_t1_ParamLimits

0xe2ce,	// (0x000588ce) popup_grid_graphic2_window_t1

0xe2e0,	// (0x000588e0) popup_grid_graphic2_window_t2_ParamLimits

0xe2e0,	// (0x000588e0) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005a3aa) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005a3aa) popup_grid_graphic2_window_t

0x81ae,	// (0x000527ae) bg_button_pane_cp05_ParamLimits

0xe456,	// (0x00058a56) cell_graphic2_control_pane_g1_ParamLimits

0xe627,	// (0x00058c27) cell_graphic2_catg_pane_ParamLimits

0xe627,	// (0x00058c27) cell_graphic2_catg_pane

0x750b,	// (0x00051b0b) bg_button_pane_cp12

0xe639,	// (0x00058c39) cell_graphic2_catg_pane_g1

0xdb29,	// (0x00058129) cell_tb_ext_pane_t1_ParamLimits

0x6e27,	// (0x00051427) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e27,	// (0x00051427) vkb2_top_cell_right_narrow_pane

0x6e3f,	// (0x0005143f) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e3f,	// (0x0005143f) vkb2_top_cell_right_wide_pane

0x6529,	// (0x00050b29) bg_vkb2_func_pane_ParamLimits

0x6529,	// (0x00050b29) bg_vkb2_func_pane

0x6eb0,	// (0x000514b0) vkb2_top_cell_left_pane_g1_ParamLimits

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp03

0x6f0e,	// (0x0005150e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cab,	// (0x000542ab) bg_vkb2_func_pane_g1

0x9cb3,	// (0x000542b3) bg_vkb2_func_pane_g2

0x9cc3,	// (0x000542c3) bg_vkb2_func_pane_g3

0x9cbb,	// (0x000542bb) bg_vkb2_func_pane_g4

0x9ccb,	// (0x000542cb) bg_vkb2_func_pane_g5

0x9cd3,	// (0x000542d3) bg_vkb2_func_pane_g6

0x9cdb,	// (0x000542db) bg_vkb2_func_pane_g7

0x9ce3,	// (0x000542e3) bg_vkb2_func_pane_g8

0x9ca3,	// (0x000542a3) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005a3fc) bg_vkb2_func_pane_g

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp01

0x6eb0,	// (0x000514b0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6eb0,	// (0x000514b0) vkb2_top_cell_right_wide_pane_g1

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6529,	// (0x00050b29) bg_vkb2_fuc_pane_cp02

0x6f0e,	// (0x0005150e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f0e,	// (0x0005150e) vkb2_top_cell_right_narrow_pane_g1

0xd74d,	// (0x00057d4d) aid_touch_area_decrease_ParamLimits

0xd74d,	// (0x00057d4d) aid_touch_area_decrease

0xd771,	// (0x00057d71) aid_touch_area_increase_ParamLimits

0xd771,	// (0x00057d71) aid_touch_area_increase

0xd789,	// (0x00057d89) aid_touch_area_mute_ParamLimits

0xd789,	// (0x00057d89) aid_touch_area_mute

0xd7a5,	// (0x00057da5) aid_touch_area_slider_ParamLimits

0xd7a5,	// (0x00057da5) aid_touch_area_slider

0xd88f,	// (0x00057e8f) popup_slider_window_g4_ParamLimits

0xd88f,	// (0x00057e8f) popup_slider_window_g4

0xd8a7,	// (0x00057ea7) popup_slider_window_g5_ParamLimits

0xd8a7,	// (0x00057ea7) popup_slider_window_g5

0xd8c9,	// (0x00057ec9) popup_slider_window_g6_ParamLimits

0xd8c9,	// (0x00057ec9) popup_slider_window_g6

0xd907,	// (0x00057f07) popup_slider_window_t2_ParamLimits

0xd907,	// (0x00057f07) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005a2f8) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005a2f8) popup_slider_window_t

0xd91f,	// (0x00057f1f) slider_pane_ParamLimits

0xd91f,	// (0x00057f1f) slider_pane

0xe642,	// (0x00058c42) slider_pane_g1_ParamLimits

0xe642,	// (0x00058c42) slider_pane_g1

0xe656,	// (0x00058c56) slider_pane_g2_ParamLimits

0xe656,	// (0x00058c56) slider_pane_g2

0xe66c,	// (0x00058c6c) slider_pane_g3_ParamLimits

0xe66c,	// (0x00058c6c) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005a40f) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005a40f) slider_pane_g

0x5e77,	// (0x00050477) popup_tb_float_extension_window_ParamLimits

0x5e77,	// (0x00050477) popup_tb_float_extension_window

0xe698,	// (0x00058c98) aid_size_cell_tb_float_ext

0x750b,	// (0x00051b0b) bg_popup_sub_window_cp28

0xe6a4,	// (0x00058ca4) grid_tb_float_ext_pane

0xe6ae,	// (0x00058cae) cell_tb_float_ext_pane_ParamLimits

0xe6ae,	// (0x00058cae) cell_tb_float_ext_pane

0xe6c8,	// (0x00058cc8) cell_tb_float_ext_pane_g1

0xe6d1,	// (0x00058cd1) grid_highlight_pane_cp12

0x6678,	// (0x00050c78) cell_last_hwr_side_pane_ParamLimits

0x6678,	// (0x00050c78) cell_last_hwr_side_pane

0xc242,	// (0x00056842) cell_last_hwr_side_pane_g1

0xe6da,	// (0x00058cda) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005a418) cell_last_hwr_side_pane_g

0x6dd6,	// (0x000513d6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6dd6,	// (0x000513d6) vkb2_area_bottom_space_btn_pane

0x678e,	// (0x00050d8e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1a2,	// (0x000587a2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x706c,	// (0x0005166c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x708b,	// (0x0005168b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x708b,	// (0x0005168b) vkb2_area_bottom_space_btn_pane_g1

0x70c5,	// (0x000516c5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x70c5,	// (0x000516c5) vkb2_area_bottom_space_btn_pane_g2

0x70fb,	// (0x000516fb) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x70fb,	// (0x000516fb) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005a41d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005a41d) vkb2_area_bottom_space_btn_pane_g

0x65ec,	// (0x00050bec) cel_fep_hwr_func_pane_ParamLimits

0x65ec,	// (0x00050bec) cel_fep_hwr_func_pane

0x6628,	// (0x00050c28) cell_hwr_side_button_pane_ParamLimits

0x6628,	// (0x00050c28) cell_hwr_side_button_pane

0xdb5d,	// (0x0005815d) aid_area_touch_clock_ParamLimits

0x81ae,	// (0x000527ae) bg_uniindi_top_pane_ParamLimits

0xdb6f,	// (0x0005816f) uniindi_top_pane_g1_ParamLimits

0xdb85,	// (0x00058185) uniindi_top_pane_g2_ParamLimits

0xdb91,	// (0x00058191) uniindi_top_pane_g3_ParamLimits

0xdba2,	// (0x000581a2) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0005a330) uniindi_top_pane_g_ParamLimits

0xdbaf,	// (0x000581af) uniindi_top_pane_t1_ParamLimits

0x81ae,	// (0x000527ae) bg_vkb2_func_pane_cp01_ParamLimits

0x81ae,	// (0x000527ae) bg_vkb2_func_pane_cp01

0xe6e3,	// (0x00058ce3) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6e3,	// (0x00058ce3) cel_fep_hwr_func_pane_g1

0x81ae,	// (0x000527ae) bg_vkb2_func_pane_cp02_ParamLimits

0x81ae,	// (0x000527ae) bg_vkb2_func_pane_cp02

0xe6e3,	// (0x00058ce3) cell_hwr_side_button_pane_g1_ParamLimits

0xe6e3,	// (0x00058ce3) cell_hwr_side_button_pane_g1

0x9b24,	// (0x00054124) status_pane_g4_ParamLimits

0x9b24,	// (0x00054124) status_pane_g4

0x9b3e,	// (0x0005413e) status_pane_t1

0xbf87,	// (0x00056587) form2_midp_gauge_slider_cont_pane

0xbf8f,	// (0x0005658f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbfa1,	// (0x000565a1) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbfb3,	// (0x000565b3) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0005a0f0) form2_midp_gauge_slider_pane_t_ParamLimits

0xbfc5,	// (0x000565c5) form2_midp_slider_pane_ParamLimits

0x6a45,	// (0x00051045) aid_size_cell_func_vkb2_ParamLimits

0x6a45,	// (0x00051045) aid_size_cell_func_vkb2

0xe684,	// (0x00058c84) slider_pane_g4_ParamLimits

0xe684,	// (0x00058c84) slider_pane_g4

0x7145,	// (0x00051745) form2_midp_gauge_slider_pane_t2_cp01

0x7153,	// (0x00051753) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7153,	// (0x00051753) form2_midp_gauge_slider_pane_t3_cp01

0x7170,	// (0x00051770) form2_midp_slider_pane_cp01

0x750b,	// (0x00051b0b) navi_smil_pane

0xe71c,	// (0x00058d1c) navi_smil_pane_g1

0xe724,	// (0x00058d24) navi_smil_pane_t1

0xe6f1,	// (0x00058cf1) form2_midp_slider_pane_g1

0xe6fa,	// (0x00058cfa) form2_midp_slider_pane_g2

0xe702,	// (0x00058d02) form2_midp_slider_pane_g3

0xe6f1,	// (0x00058cf1) form2_midp_slider_pane_g4

0xe70a,	// (0x00058d0a) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005a426) form2_midp_slider_pane_g

0x7135,	// (0x00051735) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7135,	// (0x00051735) vkb2_area_bottom_space_btn_pane_g4

0x9953,	// (0x00053f53) lc0_navi_pane_ParamLimits

0x9953,	// (0x00053f53) lc0_navi_pane

0x99c9,	// (0x00053fc9) lc0_stat_indi_pane_ParamLimits

0x99c9,	// (0x00053fc9) lc0_stat_indi_pane

0x99e0,	// (0x00053fe0) ls0_title_pane_ParamLimits

0x99e0,	// (0x00053fe0) ls0_title_pane

0x87c6,	// (0x00052dc6) bg_popup_sub_pane_cp14_ParamLimits

0xdb44,	// (0x00058144) list_uniindi_pane_ParamLimits

0xdb50,	// (0x00058150) uniindi_top_pane_ParamLimits

0xdbec,	// (0x000581ec) list_single_uniindi_pane_g1_ParamLimits

0xdbff,	// (0x000581ff) list_single_uniindi_pane_t1_ParamLimits

0x7179,	// (0x00051779) lc0_stat_clock_pane_ParamLimits

0x7179,	// (0x00051779) lc0_stat_clock_pane

0xe732,	// (0x00058d32) lc0_stat_indi_pane_g1_ParamLimits

0xe732,	// (0x00058d32) lc0_stat_indi_pane_g1

0xe73f,	// (0x00058d3f) lc0_stat_indi_pane_g2_ParamLimits

0xe73f,	// (0x00058d3f) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005a431) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005a431) lc0_stat_indi_pane_g

0x7186,	// (0x00051786) lc0_uni_indicator_pane_ParamLimits

0x7186,	// (0x00051786) lc0_uni_indicator_pane

0xe74c,	// (0x00058d4c) ls0_title_pane_g1_ParamLimits

0xe74c,	// (0x00058d4c) ls0_title_pane_g1

0xe760,	// (0x00058d60) ls0_title_pane_t1_ParamLimits

0xe760,	// (0x00058d60) ls0_title_pane_t1

0x7193,	// (0x00051793) lc0_uni_indicator_pane_g1_ParamLimits

0x7193,	// (0x00051793) lc0_uni_indicator_pane_g1

0xe796,	// (0x00058d96) lc0_stat_clock_pane_t1

0x4950,	// (0x0004ef50) main_ai5_pane

0xe7a4,	// (0x00058da4) ai5_sk_pane_ParamLimits

0xe7a4,	// (0x00058da4) ai5_sk_pane

0xe7b1,	// (0x00058db1) cell_ai5_widget_pane_ParamLimits

0xe7b1,	// (0x00058db1) cell_ai5_widget_pane

0xe86c,	// (0x00058e6c) aid_size_cell_widget_grid

0xe882,	// (0x00058e82) bg_ai5_widget_pane_ParamLimits

0xe882,	// (0x00058e82) bg_ai5_widget_pane

0xe8fa,	// (0x00058efa) cell_ai5_widget_pane_g2

0xe90e,	// (0x00058f0e) cell_ai5_widget_pane_g3

0xe928,	// (0x00058f28) cell_ai5_widget_pane_g4

0xe938,	// (0x00058f38) cell_ai5_widget_pane_g5

0xe948,	// (0x00058f48) cell_ai5_widget_pane_g6

0xe954,	// (0x00058f54) cell_ai5_widget_pane_g7

0xe99c,	// (0x00058f9c) cell_ai5_widget_pane_t1_ParamLimits

0xe99c,	// (0x00058f9c) cell_ai5_widget_pane_t1

0xe9b9,	// (0x00058fb9) cell_ai5_widget_pane_t2_ParamLimits

0xe9b9,	// (0x00058fb9) cell_ai5_widget_pane_t2

0xe9d1,	// (0x00058fd1) cell_ai5_widget_pane_t3_ParamLimits

0xe9d1,	// (0x00058fd1) cell_ai5_widget_pane_t3

0xe9e9,	// (0x00058fe9) cell_ai5_widget_pane_t4_ParamLimits

0xe9e9,	// (0x00058fe9) cell_ai5_widget_pane_t4

0xea0f,	// (0x0005900f) cell_ai5_widget_pane_t5_ParamLimits

0xea0f,	// (0x0005900f) cell_ai5_widget_pane_t5

0xea2f,	// (0x0005902f) cell_ai5_widget_pane_t6_ParamLimits

0xea2f,	// (0x0005902f) cell_ai5_widget_pane_t6

0xea41,	// (0x00059041) cell_ai5_widget_pane_t7_ParamLimits

0xea41,	// (0x00059041) cell_ai5_widget_pane_t7

0xea5a,	// (0x0005905a) cell_ai5_widget_pane_t8_ParamLimits

0xea5a,	// (0x0005905a) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005a44b) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005a44b) cell_ai5_widget_pane_t

0xeab9,	// (0x000590b9) grid_ai5_widget_pane

0x87c6,	// (0x00052dc6) highlight_cell_ai5_widget_pane_ParamLimits

0x87c6,	// (0x00052dc6) highlight_cell_ai5_widget_pane

0xead0,	// (0x000590d0) ai5_sk_left_pane

0xeada,	// (0x000590da) ai5_sk_middle_pane

0xeae4,	// (0x000590e4) ai5_sk_right_pane

0xeaee,	// (0x000590ee) bg_ai5_widget_pane_g1_ParamLimits

0xeaee,	// (0x000590ee) bg_ai5_widget_pane_g1

0xeafa,	// (0x000590fa) bg_ai5_widget_pane_g2_ParamLimits

0xeafa,	// (0x000590fa) bg_ai5_widget_pane_g2

0xeb06,	// (0x00059106) bg_ai5_widget_pane_g3_ParamLimits

0xeb06,	// (0x00059106) bg_ai5_widget_pane_g3

0xeb12,	// (0x00059112) bg_ai5_widget_pane_g4_ParamLimits

0xeb12,	// (0x00059112) bg_ai5_widget_pane_g4

0xeb1e,	// (0x0005911e) bg_ai5_widget_pane_g5_ParamLimits

0xeb1e,	// (0x0005911e) bg_ai5_widget_pane_g5

0xeb2a,	// (0x0005912a) bg_ai5_widget_pane_g6_ParamLimits

0xeb2a,	// (0x0005912a) bg_ai5_widget_pane_g6

0xeb36,	// (0x00059136) bg_ai5_widget_pane_g7_ParamLimits

0xeb36,	// (0x00059136) bg_ai5_widget_pane_g7

0xeb42,	// (0x00059142) bg_ai5_widget_pane_g8_ParamLimits

0xeb42,	// (0x00059142) bg_ai5_widget_pane_g8

0xeb4e,	// (0x0005914e) bg_ai5_widget_pane_g9_ParamLimits

0xeb4e,	// (0x0005914e) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005a460) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005a460) bg_ai5_widget_pane_g

0xeb80,	// (0x00059180) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb80,	// (0x00059180) cell_shortcut_ai5_widget_pane

0x945b,	// (0x00053a5b) bg_cell_shortcut_ai5_widget_pane

0xeb91,	// (0x00059191) cell_grid_ai5_widget_pane_g1

0x945b,	// (0x00053a5b) highlight_cell_shortcut_ai5_widget_pane

0x9cab,	// (0x000542ab) ai5_sk_left_pane_g1

0xeb9a,	// (0x0005919a) ai5_sk_left_pane_g2

0xeba2,	// (0x000591a2) ai5_sk_left_pane_g3

0xebaa,	// (0x000591aa) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005a473) ai5_sk_left_pane_g

0xebb2,	// (0x000591b2) ai5_sk_left_pane_t1

0x9cb3,	// (0x000542b3) ai5_sk_right_pane_g1

0xebc0,	// (0x000591c0) ai5_sk_right_pane_g2

0xebc8,	// (0x000591c8) ai5_sk_right_pane_g3

0xebd0,	// (0x000591d0) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005a47c) ai5_sk_right_pane_g

0xebd8,	// (0x000591d8) ai5_sk_right_pane_t1

0x9cb3,	// (0x000542b3) ai5_sk_middle_pane_g1

0x9cab,	// (0x000542ab) ai5_sk_middle_pane_g2

0x9ccb,	// (0x000542cb) ai5_sk_middle_pane_g3

0xebc8,	// (0x000591c8) ai5_sk_middle_pane_g4

0xeba2,	// (0x000591a2) ai5_sk_middle_pane_g5

0xebe6,	// (0x000591e6) ai5_sk_middle_pane_g6

0xebee,	// (0x000591ee) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005a485) ai5_sk_middle_pane_g

0x97df,	// (0x00053ddf) aid_touch_area_size_lc0_ParamLimits

0x97df,	// (0x00053ddf) aid_touch_area_size_lc0

0x67bd,	// (0x00050dbd) cell_hwr_candidate_pane_t1_ParamLimits

0x97fb,	// (0x00053dfb) aid_touch_navi_pane

0x9ace,	// (0x000540ce) status_dt_navi_pane_ParamLimits

0x9ace,	// (0x000540ce) status_dt_navi_pane

0x9adb,	// (0x000540db) status_dt_sta_pane_ParamLimits

0x9adb,	// (0x000540db) status_dt_sta_pane

0xebf6,	// (0x000591f6) dt_sta_controll_pane

0xec03,	// (0x00059203) dt_sta_indi_pane

0xec14,	// (0x00059214) dt_sta_title_pane

0x81ae,	// (0x000527ae) bg_dt_sta_indi_pane_ParamLimits

0x81ae,	// (0x000527ae) bg_dt_sta_indi_pane

0xec27,	// (0x00059227) dt_sta_battery_pane

0xec2f,	// (0x0005922f) dt_sta_indi_pane_g1

0xec38,	// (0x00059238) dt_sta_indi_pane_g2

0xec41,	// (0x00059241) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005a494) dt_sta_indi_pane_g

0xec4a,	// (0x0005924a) dt_sta_signal_pane

0x87c6,	// (0x00052dc6) bg_dt_sta_title_pane_ParamLimits

0x87c6,	// (0x00052dc6) bg_dt_sta_title_pane

0xec53,	// (0x00059253) dt_sta_title_pane_g1

0xec5b,	// (0x0005925b) dt_sta_title_pane_t1_ParamLimits

0xec5b,	// (0x0005925b) dt_sta_title_pane_t1

0x750b,	// (0x00051b0b) bg_dt_sta_control_pane

0xec70,	// (0x00059270) dt_sta_controll_pane_g1

0xec79,	// (0x00059279) bg_dt_sta_title_pane_g1

0xec82,	// (0x00059282) bg_dt_sta_title_pane_g2

0xec8b,	// (0x0005928b) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005a49b) bg_dt_sta_title_pane_g

0xc242,	// (0x00056842) bg_dt_sta_indi_pane_g1

0xec94,	// (0x00059294) dt_sta_signal_pane_g1

0xec9c,	// (0x0005929c) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005a4a2) dt_sta_signal_pane_g

0xeca4,	// (0x000592a4) dt_sta_battery_pane_g1

0xecad,	// (0x000592ad) dt_sta_battery_pane_t1

0xc242,	// (0x00056842) bg_dt_sta_control_pane_g1

0x8f4e,	// (0x0005354e) fep_china_uni_eep_pane

0x8f56,	// (0x00053556) fep_china_uni_entry_pane_ParamLimits

0x8f66,	// (0x00053566) popup_fep_china_uni_window_g1_ParamLimits

0x8f76,	// (0x00053576) popup_fep_china_uni_window_g2_ParamLimits

0x8f76,	// (0x00053576) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00059d22) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00059d22) popup_fep_china_uni_window_g

0xecbc,	// (0x000592bc) fep_china_uni_eep_pane_g1

0xecc4,	// (0x000592c4) fep_china_uni_eep_pane_t1

0xe713,	// (0x00058d13) aid_touch_area_size_smil_player

0x994b,	// (0x00053f4b) lc0_clock_pane

0x9b32,	// (0x00054132) status_pane_g5_ParamLimits

0x9b32,	// (0x00054132) status_pane_g5

0x5b3c,	// (0x0005013c) popup_keymap_window

0x9af0,	// (0x000540f0) status_icon_pane

0xe90e,	// (0x00058f0e) cell_ai5_widget_pane_g3_ParamLimits

0xe928,	// (0x00058f28) cell_ai5_widget_pane_g4_ParamLimits

0xe938,	// (0x00058f38) cell_ai5_widget_pane_g5_ParamLimits

0xe960,	// (0x00058f60) cell_ai5_widget_pane_g8_ParamLimits

0xe960,	// (0x00058f60) cell_ai5_widget_pane_g8

0xe974,	// (0x00058f74) cell_ai5_widget_pane_g9_ParamLimits

0xe974,	// (0x00058f74) cell_ai5_widget_pane_g9

0xe988,	// (0x00058f88) cell_ai5_widget_pane_g10_ParamLimits

0xe988,	// (0x00058f88) cell_ai5_widget_pane_g10

0xecd3,	// (0x000592d3) status_icon_pane_g1

0x750b,	// (0x00051b0b) bg_popup_sub_pane_cp13

0xecdb,	// (0x000592db) popup_keymap_window_t1

0x9730,	// (0x00053d30) control_pane_g6_ParamLimits

0x9730,	// (0x00053d30) control_pane_g6

0x973d,	// (0x00053d3d) control_pane_g7_ParamLimits

0x973d,	// (0x00053d3d) control_pane_g7

0x974a,	// (0x00053d4a) control_pane_g8_ParamLimits

0x974a,	// (0x00053d4a) control_pane_g8

0xebf6,	// (0x000591f6) dt_sta_controll_pane_ParamLimits

0xec03,	// (0x00059203) dt_sta_indi_pane_ParamLimits

0xec14,	// (0x00059214) dt_sta_title_pane_ParamLimits

0x86f2,	// (0x00052cf2) aid_size_touch_scroll_bar_cale

0x4a29,	// (0x0004f029) popup_discreet_window_ParamLimits

0x4a29,	// (0x0004f029) popup_discreet_window

0x4ab1,	// (0x0004f0b1) popup_sk_window

0xa32a,	// (0x0005492a) bg_popup_sub_pane_cp28_ParamLimits

0xa32a,	// (0x0005492a) bg_popup_sub_pane_cp28

0xece9,	// (0x000592e9) popup_discreet_window_g1_ParamLimits

0xece9,	// (0x000592e9) popup_discreet_window_g1

0xed09,	// (0x00059309) popup_discreet_window_t1_ParamLimits

0xed09,	// (0x00059309) popup_discreet_window_t1

0xed27,	// (0x00059327) popup_discreet_window_t2_ParamLimits

0xed27,	// (0x00059327) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005a4a7) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005a4a7) popup_discreet_window_t

0x71a7,	// (0x000517a7) popup_sk_window_g1

0x71b1,	// (0x000517b1) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005a4ae) popup_sk_window_g

0x71b9,	// (0x000517b9) popup_sk_window_t1

0x71c7,	// (0x000517c7) popup_sk_window_t1_copy1

0xe8fa,	// (0x00058efa) cell_ai5_widget_pane_g2_ParamLimits

0xea6c,	// (0x0005906c) cell_ai5_widget_pane_t9_ParamLimits

0xea6c,	// (0x0005906c) cell_ai5_widget_pane_t9

0x750b,	// (0x00051b0b) main_fep_fshwr2_pane

0x71d5,	// (0x000517d5) aid_fshwr2_btn_pane

0x71e1,	// (0x000517e1) aid_fshwr2_syb_pane

0x71ed,	// (0x000517ed) aid_fshwr2_txt_pane

0x71f9,	// (0x000517f9) fshwr2_func_candi_pane

0x720e,	// (0x0005180e) fshwr2_hwr_syb_pane

0x721e,	// (0x0005181e) fshwr2_icf_pane

0x4950,	// (0x0004ef50) fshwr2_icf_bg_pane

0x7247,	// (0x00051847) fshwr2_icf_pane_t1_ParamLimits

0x7247,	// (0x00051847) fshwr2_icf_pane_t1

0x8e3c,	// (0x0005343c) fshwr2_func_candi_pane_g1

0xed79,	// (0x00059379) fshwr2_func_candi_row_pane_ParamLimits

0xed79,	// (0x00059379) fshwr2_func_candi_row_pane

0x725f,	// (0x0005185f) cell_fshwr2_syb_pane_ParamLimits

0x725f,	// (0x0005185f) cell_fshwr2_syb_pane

0x678e,	// (0x00050d8e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x678e,	// (0x00050d8e) fshwr2_hwr_syb_pane_g1

0x4950,	// (0x0004ef50) bg_popup_call_pane_cp01

0x7275,	// (0x00051875) fshwr2_func_candi_cell_pane_ParamLimits

0x7275,	// (0x00051875) fshwr2_func_candi_cell_pane

0xed89,	// (0x00059389) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed89,	// (0x00059389) fshwr2_func_candi_cell_bg_pane

0x72c0,	// (0x000518c0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x72c0,	// (0x000518c0) fshwr2_func_candi_cell_pane_g1

0x72e8,	// (0x000518e8) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x72e8,	// (0x000518e8) fshwr2_func_candi_cell_pane_t1

0x4950,	// (0x0004ef50) bg_button_pane_cp08

0xed95,	// (0x00059395) cell_fshwr2_syb_bg_pane

0x72fb,	// (0x000518fb) cell_fshwr2_syb_bg_pane_g1

0x7303,	// (0x00051903) cell_fshwr2_syb_bg_pane_t1

0x87c6,	// (0x00052dc6) main_tmo_pane

0xae39,	// (0x00055439) uni_indicator_pane_g1_ParamLimits

0xae4c,	// (0x0005544c) uni_indicator_pane_g2_ParamLimits

0xae5e,	// (0x0005545e) uni_indicator_pane_g3_ParamLimits

0xae6d,	// (0x0005546d) uni_indicator_pane_g4_ParamLimits

0xae6d,	// (0x0005546d) uni_indicator_pane_g4

0xae81,	// (0x00055481) uni_indicator_pane_g5_ParamLimits

0xae81,	// (0x00055481) uni_indicator_pane_g5

0xae81,	// (0x00055481) uni_indicator_pane_g6_ParamLimits

0xae81,	// (0x00055481) uni_indicator_pane_g6

0xf926,	// (0x00059f26) uni_indicator_pane_g_ParamLimits

0xd729,	// (0x00057d29) popup_tmo_note_window_ParamLimits

0xd729,	// (0x00057d29) popup_tmo_note_window

0x6a27,	// (0x00051027) fshwr2_bg_pane

0x72d9,	// (0x000518d9) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x72d9,	// (0x000518d9) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005a4b3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005a4b3) fshwr2_func_candi_cell_pane_g

0x6776,	// (0x00050d76) bg_popup_window_pane_cp01

0x7312,	// (0x00051912) bg_popup_window_pane_g1_cp01

0xed9d,	// (0x0005939d) bg_popup_window_pane_cp22_ParamLimits

0xed9d,	// (0x0005939d) bg_popup_window_pane_cp22

0xedab,	// (0x000593ab) listscroll_tmo_link_pane_ParamLimits

0xedab,	// (0x000593ab) listscroll_tmo_link_pane

0xedeb,	// (0x000593eb) popup_tmo_note_window_g1_ParamLimits

0xedeb,	// (0x000593eb) popup_tmo_note_window_g1

0xedf8,	// (0x000593f8) tmo_note_info_pane_ParamLimits

0xedf8,	// (0x000593f8) tmo_note_info_pane

0xee12,	// (0x00059412) list_tmo_note_info_pane_g1_ParamLimits

0xee12,	// (0x00059412) list_tmo_note_info_pane_g1

0xee29,	// (0x00059429) list_tmo_note_info_pane_g2_ParamLimits

0xee29,	// (0x00059429) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005a4b8) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005a4b8) list_tmo_note_info_pane_g

0xee45,	// (0x00059445) list_tmo_note_info_text_pane_ParamLimits

0xee45,	// (0x00059445) list_tmo_note_info_text_pane

0xeec6,	// (0x000594c6) list_tmo_link_pane

0xeed3,	// (0x000594d3) scroll_pane_cp20

0xeee0,	// (0x000594e0) list_single_tmo_link_pane_ParamLimits

0xeee0,	// (0x000594e0) list_single_tmo_link_pane

0xeef0,	// (0x000594f0) list_single_tmo_link_pane_t1

0xeefe,	// (0x000594fe) list_tmo_note_info_text_pane_t1_ParamLimits

0xeefe,	// (0x000594fe) list_tmo_note_info_text_pane_t1

0x8871,	// (0x00052e71) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8871,	// (0x00052e71) aid_size_touch_scroll_bar_cp01

0x5205,	// (0x0004f805) aid_size_touch_slider_marker

0x4a99,	// (0x0004f099) popup_settings_window_ParamLimits

0x4a99,	// (0x0004f099) popup_settings_window

0x59c1,	// (0x0004ffc1) popup_candi_list_indi_window

0x97fb,	// (0x00053dfb) aid_touch_navi_pane_ParamLimits

0x6982,	// (0x00050f82) rs_clock_indi_pane

0x698b,	// (0x00050f8b) sctrl_sk_bottom_pane_ParamLimits

0x699c,	// (0x00050f9c) sctrl_sk_top_pane_ParamLimits

0x6a9f,	// (0x0005109f) popup_fep_tooltip_window

0xe86c,	// (0x00058e6c) aid_size_cell_widget_grid_ParamLimits

0xe8e5,	// (0x00058ee5) cell_ai5_widget_pane_g1_ParamLimits

0xe8e5,	// (0x00058ee5) cell_ai5_widget_pane_g1

0xe948,	// (0x00058f48) cell_ai5_widget_pane_g6_ParamLimits

0xe954,	// (0x00058f54) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005a436) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005a436) cell_ai5_widget_pane_g

0xea9b,	// (0x0005909b) cell_ai5_widget_pane_t10_ParamLimits

0xea9b,	// (0x0005909b) cell_ai5_widget_pane_t10

0xeab9,	// (0x000590b9) grid_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0005915a) cell_contacts_ai5_widget_pane_ParamLimits

0xeb5a,	// (0x0005915a) cell_contacts_ai5_widget_pane

0xed3c,	// (0x0005933c) popup_discreet_window_t3_ParamLimits

0xed3c,	// (0x0005933c) popup_discreet_window_t3

0x7233,	// (0x00051833) popup_fshwr2_char_preview_window_ParamLimits

0x7233,	// (0x00051833) popup_fshwr2_char_preview_window

0xee63,	// (0x00059463) tmo_note_info_pane_t1

0xee78,	// (0x00059478) tmo_note_info_pane_t2

0xee8d,	// (0x0005948d) tmo_note_info_pane_t3

0xeea2,	// (0x000594a2) tmo_note_info_pane_t4

0xeeb4,	// (0x000594b4) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005a4bd) tmo_note_info_pane_t

0xeec6,	// (0x000594c6) list_tmo_link_pane_ParamLimits

0xeed3,	// (0x000594d3) scroll_pane_cp20_ParamLimits

0x4950,	// (0x0004ef50) bg_popup_fep_char_preview_window_cp01

0xef17,	// (0x00059517) popup_fshwr2_char_preview_window_t1

0xef25,	// (0x00059525) popup_candi_list_indi_window_g1

0xef2e,	// (0x0005952e) bg_cell_contacts_ai5_widget_pane

0xef3a,	// (0x0005953a) cell_contacts_ai5_widget_pane_g1

0xc8e0,	// (0x00056ee0) cell_contacts_ai5_widget_pane_g2

0xef4f,	// (0x0005954f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005a4c8) cell_contacts_ai5_widget_pane_g

0xef5b,	// (0x0005955b) cell_contacts_ai5_widget_pane_t1

0x87c6,	// (0x00052dc6) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefd2,	// (0x000595d2) settings_container_pane

0x945b,	// (0x00053a5b) listscroll_set_pane_copy1

0xb952,	// (0x00055f52) scroll_pane_cp121_copy1

0xa0cf,	// (0x000546cf) set_content_pane_copy1

0xefde,	// (0x000595de) aid_height_set_list_copy1_ParamLimits

0xefde,	// (0x000595de) aid_height_set_list_copy1

0xb079,	// (0x00055679) aid_size_parent_copy1_ParamLimits

0xb079,	// (0x00055679) aid_size_parent_copy1

0xefea,	// (0x000595ea) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefea,	// (0x000595ea) button_value_adjust_pane_cp6_copy1

0x977f,	// (0x00053d7f) list_highlight_pane_cp2_copy1_ParamLimits

0x977f,	// (0x00053d7f) list_highlight_pane_cp2_copy1

0xeffe,	// (0x000595fe) list_set_pane_copy1_ParamLimits

0xeffe,	// (0x000595fe) list_set_pane_copy1

0xef6d,	// (0x0005956d) main_pane_set_t1_copy1_ParamLimits

0xef6d,	// (0x0005956d) main_pane_set_t1_copy1

0xefa7,	// (0x000595a7) main_pane_set_t2_copy1_ParamLimits

0xefa7,	// (0x000595a7) main_pane_set_t2_copy1

0xf0ab,	// (0x000596ab) main_pane_set_t3_copy1

0xf0b9,	// (0x000596b9) main_pane_set_t4_copy1

0xefc6,	// (0x000595c6) set_content_pane_g1_copy1_ParamLimits

0xefc6,	// (0x000595c6) set_content_pane_g1_copy1

0xf0c7,	// (0x000596c7) setting_code_pane_copy1

0xf0cf,	// (0x000596cf) setting_slider_graphic_pane_copy1

0xf0cf,	// (0x000596cf) setting_slider_pane_copy1

0xf0cf,	// (0x000596cf) setting_text_pane_copy1

0xf0cf,	// (0x000596cf) setting_volume_pane_copy1

0xf0c7,	// (0x000596c7) settings_code_pane_cp2_copy1

0xf0d7,	// (0x000596d7) settings_code_pane_cp_copy1_ParamLimits

0xf0d7,	// (0x000596d7) settings_code_pane_cp_copy1

0x731b,	// (0x0005191b) volume_set_pane_copy1

0xf0eb,	// (0x000596eb) volume_set_pane_g10_copy1

0xf0f3,	// (0x000596f3) volume_set_pane_g1_copy1

0xf0fb,	// (0x000596fb) volume_set_pane_g2_copy1

0xf103,	// (0x00059703) volume_set_pane_g3_copy1

0xf10b,	// (0x0005970b) volume_set_pane_g4_copy1

0xf113,	// (0x00059713) volume_set_pane_g5_copy1

0xf11b,	// (0x0005971b) volume_set_pane_g6_copy1

0xf123,	// (0x00059723) volume_set_pane_g7_copy1

0xf12b,	// (0x0005972b) volume_set_pane_g8_copy1

0xf133,	// (0x00059733) volume_set_pane_g9_copy1

0x7f25,	// (0x00052525) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f25,	// (0x00052525) bg_set_opt_pane_cp_copy1

0x7323,	// (0x00051923) setting_slider_pane_t1_copy1_ParamLimits

0x7323,	// (0x00051923) setting_slider_pane_t1_copy1

0x7341,	// (0x00051941) setting_slider_pane_t2_copy1_ParamLimits

0x7341,	// (0x00051941) setting_slider_pane_t2_copy1

0x735b,	// (0x0005195b) setting_slider_pane_t3_copy1_ParamLimits

0x735b,	// (0x0005195b) setting_slider_pane_t3_copy1

0x7373,	// (0x00051973) slider_set_pane_copy1_ParamLimits

0x7373,	// (0x00051973) slider_set_pane_copy1

0x8812,	// (0x00052e12) set_opt_bg_pane_g1_copy2

0x881a,	// (0x00052e1a) set_opt_bg_pane_g2_copy2

0xf13b,	// (0x0005973b) set_opt_bg_pane_g3_copy2

0x882a,	// (0x00052e2a) set_opt_bg_pane_g4_copy2

0x8832,	// (0x00052e32) set_opt_bg_pane_g5_copy2

0x883a,	// (0x00052e3a) set_opt_bg_pane_g6_copy2

0xf145,	// (0x00059745) set_opt_bg_pane_g7_copy2

0xf14d,	// (0x0005974d) set_opt_bg_pane_g8_copy2

0xf157,	// (0x00059757) set_opt_bg_pane_g9_copy2

0x7389,	// (0x00051989) aid_size_touch_slider_mark_copy1_ParamLimits

0x7389,	// (0x00051989) aid_size_touch_slider_mark_copy1

0xf161,	// (0x00059761) slider_set_pane_g1_copy1

0x739d,	// (0x0005199d) slider_set_pane_g2_copy1

0x6387,	// (0x00050987) slider_set_pane_g3_copy1_ParamLimits

0x6387,	// (0x00050987) slider_set_pane_g3_copy1

0x639b,	// (0x0005099b) slider_set_pane_g4_copy1_ParamLimits

0x639b,	// (0x0005099b) slider_set_pane_g4_copy1

0x63b3,	// (0x000509b3) slider_set_pane_g5_copy1_ParamLimits

0x63b3,	// (0x000509b3) slider_set_pane_g5_copy1

0x6387,	// (0x00050987) slider_set_pane_g6_copy1_ParamLimits

0x6387,	// (0x00050987) slider_set_pane_g6_copy1

0x73a5,	// (0x000519a5) slider_set_pane_g7_copy1_ParamLimits

0x73a5,	// (0x000519a5) slider_set_pane_g7_copy1

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp2_copy1

0xf16a,	// (0x0005976a) setting_slider_graphic_pane_g1_copy1

0xf173,	// (0x00059773) setting_slider_graphic_pane_t1_copy1

0xf183,	// (0x00059783) setting_slider_graphic_pane_t2_copy1

0xf193,	// (0x00059793) slider_set_pane_cp_copy1

0xf1a3,	// (0x000597a3) input_focus_pane_cp1_copy1

0xf1ac,	// (0x000597ac) list_set_text_pane_copy1

0xf1b4,	// (0x000597b4) setting_text_pane_g1_copy1

0x7ed3,	// (0x000524d3) set_text_pane_t1_copy1

0xf1a3,	// (0x000597a3) input_focus_pane_cp2_copy1

0xf1b4,	// (0x000597b4) setting_code_pane_g1_copy1

0xf1bd,	// (0x000597bd) setting_code_pane_t1_copy1

0xf1cb,	// (0x000597cb) list_set_graphic_pane_copy1

0x751f,	// (0x00051b1f) bg_set_opt_pane_cp4_copy1

0x914a,	// (0x0005374a) list_set_graphic_pane_g1_copy1_ParamLimits

0x914a,	// (0x0005374a) list_set_graphic_pane_g1_copy1

0xf1de,	// (0x000597de) list_set_graphic_pane_g2_copy1

0x9162,	// (0x00053762) list_set_graphic_pane_t1_copy1_ParamLimits

0x9162,	// (0x00053762) list_set_graphic_pane_t1_copy1

0xc242,	// (0x00056842) rs_clock_indi_pane_g1

0xf1e6,	// (0x000597e6) rs_clock_indi_pane_t1

0xf1f4,	// (0x000597f4) rs_indi_pane

0xf1fc,	// (0x000597fc) rs_indi_pane_g1

0xf205,	// (0x00059805) rs_indi_pane_g2

0xf20e,	// (0x0005980e) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005a4cf) rs_indi_pane_g

0x945b,	// (0x00053a5b) bg_popup_preview_window_pane_cp03

0xf217,	// (0x00059817) popup_fep_tooltip_window_t1

0xceca,	// (0x000574ca) popup_note2_window_g2_ParamLimits

0xceca,	// (0x000574ca) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0005a268) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0005a268) popup_note2_window_g

0xd3c5,	// (0x000579c5) bg_popup_sub_pane_cp11_ParamLimits

0xd3d2,	// (0x000579d2) cell_ai3_links_pane_g1_ParamLimits

0xd3e9,	// (0x000579e9) cell_ai3_links_pane_t1

0x7ed3,	// (0x000524d3) set_text_pane_t1_copy1_ParamLimits

0x936c,	// (0x0005396c) cell_graphic_popup_pane_cp2_ParamLimits

0x936c,	// (0x0005396c) cell_graphic_popup_pane_cp2

0xf225,	// (0x00059825) cell_graphic_popup_pane_g1_cp2

0x8505,	// (0x00052b05) cell_graphic_popup_pane_g2_cp2

0xf22d,	// (0x0005982d) cell_graphic_popup_pane_g3_cp2

0xf235,	// (0x00059835) cell_graphic_popup_pane_t2_cp2

0x8516,	// (0x00052b16) grid_highlight_pane_cp3_cp2

0x8b57,	// (0x00053157) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x87c6,	// (0x00052dc6) main_tmo_pane_ParamLimits

0xd71d,	// (0x00057d1d) popup_tmo_big_image_note_window

0xe8d4,	// (0x00058ed4) cell_ai5_widget_list_pane

0xe8dc,	// (0x00058edc) cell_ai5_widget_lrg_icon_pane

0xee63,	// (0x00059463) tmo_note_info_pane_t1_ParamLimits

0xee78,	// (0x00059478) tmo_note_info_pane_t2_ParamLimits

0xee8d,	// (0x0005948d) tmo_note_info_pane_t3_ParamLimits

0xeea2,	// (0x000594a2) tmo_note_info_pane_t4_ParamLimits

0xeeb4,	// (0x000594b4) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005a4bd) tmo_note_info_pane_t_ParamLimits

0xefd2,	// (0x000595d2) settings_container_pane_ParamLimits

0xf19b,	// (0x0005979b) indicator_popup_pane_cp5

0xf19b,	// (0x0005979b) indicator_popup_pane_cp6

0xf1cb,	// (0x000597cb) list_set_graphic_pane_copy1_ParamLimits

0x750b,	// (0x00051b0b) bg_popup_window_pane_cp23

0xf243,	// (0x00059843) popup_tmo_big_image_note_window_g1

0xf24d,	// (0x0005984d) popup_tmo_big_image_note_window_t1

0xf25d,	// (0x0005985d) popup_tmo_big_image_note_window_t2

0xf26d,	// (0x0005986d) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005a4d6) popup_tmo_big_image_note_window_t

0xc242,	// (0x00056842) cell_ai5_widget_lrg_icon_pane_g1

0xf27d,	// (0x0005987d) cell_ai5_widget_lrg_icon_pane_t1

0xf28b,	// (0x0005988b) cell_ai5_widget_list_row_pane_ParamLimits

0xf28b,	// (0x0005988b) cell_ai5_widget_list_row_pane

0xf2a2,	// (0x000598a2) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2a2,	// (0x000598a2) cell_ai5_widget_list_row_pane_g1

0xf2af,	// (0x000598af) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2af,	// (0x000598af) cell_ai5_widget_list_row_pane_t1

0xf2e0,	// (0x000598e0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2e0,	// (0x000598e0) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005a4dd) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005a4dd) cell_ai5_widget_list_row_pane_t

0x4950,	// (0x0004ef50) main_fep_vtchi_ss_pane

0xf328,	// (0x00059928) popup_fep_char_pre_window

0xf330,	// (0x00059930) popup_fep_ituss_window

0xf351,	// (0x00059951) popup_fep_vkbss_window

0xf37b,	// (0x0005997b) grid_vkbss_keypad_pane_ParamLimits

0xf37b,	// (0x0005997b) grid_vkbss_keypad_pane

0xf38b,	// (0x0005998b) ituss_keypad_pane

0x73c7,	// (0x000519c7) aid_vkbss_key_offset_ParamLimits

0x73c7,	// (0x000519c7) aid_vkbss_key_offset

0x73d3,	// (0x000519d3) cell_vkbss_key_pane_ParamLimits

0x73d3,	// (0x000519d3) cell_vkbss_key_pane

0xf39a,	// (0x0005999a) bg_cell_vkbss_key_g1_ParamLimits

0xf39a,	// (0x0005999a) bg_cell_vkbss_key_g1

0xf3a6,	// (0x000599a6) cell_vkbss_key_3p_pane_ParamLimits

0xf3a6,	// (0x000599a6) cell_vkbss_key_3p_pane

0xf3ba,	// (0x000599ba) cell_vkbss_key_g1_ParamLimits

0xf3ba,	// (0x000599ba) cell_vkbss_key_g1

0xf3ce,	// (0x000599ce) cell_vkbss_key_t1_ParamLimits

0xf3ce,	// (0x000599ce) cell_vkbss_key_t1

0x73e9,	// (0x000519e9) cell_ituss_key_pane_ParamLimits

0x73e9,	// (0x000519e9) cell_ituss_key_pane

0xf3f9,	// (0x000599f9) bg_cell_ituss_key_g1_ParamLimits

0xf3f9,	// (0x000599f9) bg_cell_ituss_key_g1

0xf405,	// (0x00059a05) cell_ituss_key_pane_g1_ParamLimits

0xf405,	// (0x00059a05) cell_ituss_key_pane_g1

0x73fa,	// (0x000519fa) cell_ituss_key_pane_g2_ParamLimits

0x73fa,	// (0x000519fa) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005a4e4) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005a4e4) cell_ituss_key_pane_g

0x7426,	// (0x00051a26) cell_ituss_key_t1_ParamLimits

0x7426,	// (0x00051a26) cell_ituss_key_t1

0x7460,	// (0x00051a60) cell_ituss_key_t2_ParamLimits

0x7460,	// (0x00051a60) cell_ituss_key_t2

0x7491,	// (0x00051a91) cell_ituss_key_t3_ParamLimits

0x7491,	// (0x00051a91) cell_ituss_key_t3

0x7460,	// (0x00051a60) cell_ituss_key_t4_ParamLimits

0x7460,	// (0x00051a60) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005a4eb) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005a4eb) cell_ituss_key_t

0xf431,	// (0x00059a31) cell_vkbss_key_3p_pane_g1

0xf439,	// (0x00059a39) cell_vkbss_key_3p_pane_g2

0xf441,	// (0x00059a41) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005a4f6) cell_vkbss_key_3p_pane_g

0x945b,	// (0x00053a5b) bg_popup_fep_char_preview_window_cp02

0xf449,	// (0x00059a49) popup_fep_char_pre_window_t1

0xe859,	// (0x00058e59) main_ai5_sk_pane

0xef2e,	// (0x0005952e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef3a,	// (0x0005953a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8e0,	// (0x00056ee0) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef4f,	// (0x0005954f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005a4c8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef5b,	// (0x0005955b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x87c6,	// (0x00052dc6) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf457,	// (0x00059a57) main_ai5_sk_pane_g1

0xa163,	// (0x00054763) popup_query_code_window_g1

0xf346,	// (0x00059946) popup_fep_vkb_icf_pane

0xf365,	// (0x00059965) popup_fep_vtchi_icf_pane

0xf460,	// (0x00059a60) bg_icf_pane

0xf46c,	// (0x00059a6c) list_vkb_icf_pane

0xf47b,	// (0x00059a7b) bg_icf_pane_cp01

0xf48e,	// (0x00059a8e) vtchi_icf_list_pane

0xf49e,	// (0x00059a9e) list_vkb_icf_pane_t1_ParamLimits

0xf49e,	// (0x00059a9e) list_vkb_icf_pane_t1

0xf4b4,	// (0x00059ab4) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x00059ab4) vtchi_icf_list_pane_t1

0xf330,	// (0x00059930) popup_fep_ituss_window_ParamLimits

0xf365,	// (0x00059965) popup_fep_vtchi_icf_pane_ParamLimits

0xf38b,	// (0x0005998b) ituss_keypad_pane_ParamLimits

0x73bb,	// (0x000519bb) ituss_sks_pane

0xf460,	// (0x00059a60) bg_icf_pane_ParamLimits

0xf308,	// (0x00059908) icf_edit_indi_pane_ParamLimits

0xf308,	// (0x00059908) icf_edit_indi_pane

0xf46c,	// (0x00059a6c) list_vkb_icf_pane_ParamLimits

0xf47b,	// (0x00059a7b) bg_icf_pane_cp01_ParamLimits

0xf31b,	// (0x0005991b) icf_edit_indi_pane_cp01_ParamLimits

0xf31b,	// (0x0005991b) icf_edit_indi_pane_cp01

0xf496,	// (0x00059a96) vtchi_query_pane

0xe6e3,	// (0x00058ce3) icf_edit_indi_pane_g1_ParamLimits

0xe6e3,	// (0x00058ce3) icf_edit_indi_pane_g1

0xf525,	// (0x00059b25) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x00059b25) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005a50e) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005a50e) icf_edit_indi_pane_g

0xf537,	// (0x00059b37) icf_edit_indi_pane_t1

0xf4ce,	// (0x00059ace) bg_input_focus_pane_cp042

0x86e9,	// (0x00052ce9) vtchi_button_pane

0xf4d7,	// (0x00059ad7) vtchi_query_pane_t1

0xf4e5,	// (0x00059ae5) vtchi_query_pane_t2

0xf4f3,	// (0x00059af3) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005a4fd) vtchi_query_pane_t

0x4950,	// (0x0004ef50) bg_button_pane_cp13

0xf501,	// (0x00059b01) vtchi_button_pane_g1

0x74d4,	// (0x00051ad4) ituss_sks_pane_g1

0x74df,	// (0x00051adf) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005a504) ituss_sks_pane_g

0xf509,	// (0x00059b09) ituss_sks_pane_t1

0xf517,	// (0x00059b17) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005a509) ituss_sks_pane_t

0xbccd,	// (0x000562cd) indicator_nsta_pane_cp_g1

0xbcd5,	// (0x000562d5) indicator_nsta_pane_cp_g2

0xbcdd,	// (0x000562dd) indicator_nsta_pane_cp_g3

0xbccd,	// (0x000562cd) indicator_nsta_pane_cp_g4

0xbcd5,	// (0x000562d5) indicator_nsta_pane_cp_g5

0xbcdd,	// (0x000562dd) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0005a0a6) indicator_nsta_pane_cp_g

0xe443,	// (0x00058a43) cell_graphic2_pane_t2_ParamLimits

0xe443,	// (0x00058a43) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005a3bf) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005a3bf) cell_graphic2_pane_t

0xe470,	// (0x00058a70) cell_graphic2_control_pane_t1

0x8efd,	// (0x000534fd) signal_pane_g3_ParamLimits

0x8efd,	// (0x000534fd) signal_pane_g3

0x8f0f,	// (0x0005350f) signal_pane_g4_ParamLimits

0x8f0f,	// (0x0005350f) signal_pane_g4

0xf2f2,	// (0x000598f2) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2f2,	// (0x000598f2) cell_ai5_widget_list_row_pane_t3

0xf41f,	// (0x00059a1f) cell_ituss_key_pane_t1_ParamLimits

0xf41f,	// (0x00059a1f) cell_ituss_key_pane_t1

0x9da8,	// (0x000543a8) form_field_data_wide_pane_vc_t2_ParamLimits

0x9da8,	// (0x000543a8) form_field_data_wide_pane_vc_t2

0x9dbc,	// (0x000543bc) form_field_data_wide_pane_vc_t3_ParamLimits

0x9dbc,	// (0x000543bc) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00059e0e) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00059e0e) form_field_data_wide_pane_vc_t

0xb994,	// (0x00055f94) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb994,	// (0x00055f94) form_field_slider_wide_pane_vc_t3

0xba72,	// (0x00056072) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba72,	// (0x00056072) form_field_popup_wide_pane_vc_t2

0xba89,	// (0x00056089) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba89,	// (0x00056089) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0005a095) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0005a095) form_field_popup_wide_pane_vc_t

0x71d5,	// (0x000517d5) aid_fshwr2_btn_pane_ParamLimits

0x71e1,	// (0x000517e1) aid_fshwr2_syb_pane_ParamLimits

0x71ed,	// (0x000517ed) aid_fshwr2_txt_pane_ParamLimits

0x6a27,	// (0x00051027) fshwr2_bg_pane_ParamLimits

0x71f9,	// (0x000517f9) fshwr2_func_candi_pane_ParamLimits

0x720e,	// (0x0005180e) fshwr2_hwr_syb_pane_ParamLimits

0x721e,	// (0x0005181e) fshwr2_icf_pane_ParamLimits

0x7ac8,	// (0x000520c8) list_double_graphic_pane_vc_g4_ParamLimits

0x7ac8,	// (0x000520c8) list_double_graphic_pane_vc_g4

0x741a,	// (0x00051a1a) cell_ituss_key_pane_g3_ParamLimits

0x741a,	// (0x00051a1a) cell_ituss_key_pane_g3

0x74c2,	// (0x00051ac2) cell_ituss_key_t5_ParamLimits

0x74c2,	// (0x00051ac2) cell_ituss_key_t5

0xf351,	// (0x00059951) popup_fep_vkbss_window_ParamLimits

0xe863,	// (0x00058e63) aid_cell_ai5_quarter

0xf537,	// (0x00059b37) icf_edit_indi_pane_t1_ParamLimits

0x8256,	// (0x00052856) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8256,	// (0x00052856) aid_tch_indicator_popup_pane_cp2

0x8269,	// (0x00052869) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x8269,	// (0x00052869) aid_tch_query_popup_data_pane_cp2

0xa10b,	// (0x0005470b) aid_tch_query_popup_pane_ParamLimits

0xa10b,	// (0x0005470b) aid_tch_query_popup_pane

0xa10b,	// (0x0005470b) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa10b,	// (0x0005470b) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

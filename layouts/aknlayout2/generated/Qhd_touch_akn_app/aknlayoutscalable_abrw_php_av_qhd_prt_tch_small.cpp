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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a454 };

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
0x7707,	// (0x00031b5b) Screen

0x771b,	// (0x00031b6f) application_window_ParamLimits

0x771b,	// (0x00031b6f) application_window

0x7735,	// (0x00031b89) screen_g1

0x4bdb,	// (0x0002f02f) area_bottom_pane_ParamLimits

0x4bdb,	// (0x0002f02f) area_bottom_pane

0x4c9b,	// (0x0002f0ef) area_top_pane_ParamLimits

0x4c9b,	// (0x0002f0ef) area_top_pane

0x4d39,	// (0x0002f18d) main_pane_ParamLimits

0x4d39,	// (0x0002f18d) main_pane

0x773f,	// (0x00031b93) misc_graphics

0x967f,	// (0x00033ad3) battery_pane_ParamLimits

0x967f,	// (0x00033ad3) battery_pane

0xa392,	// (0x000347e6) bg_status_flat_pane_g8

0xa39a,	// (0x000347ee) bg_status_flat_pane_g9

0x9741,	// (0x00033b95) context_pane_ParamLimits

0x9741,	// (0x00033b95) context_pane

0x9857,	// (0x00033cab) navi_pane_ParamLimits

0x9857,	// (0x00033cab) navi_pane

0x98d4,	// (0x00033d28) signal_pane_ParamLimits

0x98d4,	// (0x00033d28) signal_pane

0x0008,

0xf88a,	// (0x00039cde) bg_status_flat_pane_g

0x9941,	// (0x00033d95) status_pane_g1_ParamLimits

0x9941,	// (0x00033d95) status_pane_g1

0x9955,	// (0x00033da9) status_pane_g2_ParamLimits

0x9955,	// (0x00033da9) status_pane_g2

0x9961,	// (0x00033db5) status_pane_g3_ParamLimits

0x9961,	// (0x00033db5) status_pane_g3

0x0004,

0xf7b8,	// (0x00039c0c) status_pane_g_ParamLimits

0xf7b8,	// (0x00039c0c) status_pane_g

0x9995,	// (0x00033de9) title_pane_ParamLimits

0x9995,	// (0x00033de9) title_pane

0x99d2,	// (0x00033e26) uni_indicator_pane_ParamLimits

0x99d2,	// (0x00033e26) uni_indicator_pane

0x9010,	// (0x00033464) bg_list_pane_ParamLimits

0x9010,	// (0x00033464) bg_list_pane

0x6f12,	// (0x00031366) find_pane

0x9030,	// (0x00033484) listscroll_app_pane_ParamLimits

0x9030,	// (0x00033484) listscroll_app_pane

0x903c,	// (0x00033490) listscroll_form_pane

0x6f1a,	// (0x0003136e) listscroll_gen_pane_ParamLimits

0x6f1a,	// (0x0003136e) listscroll_gen_pane

0x903c,	// (0x00033490) listscroll_set_pane

0x8279,	// (0x000326cd) main_idle_act_pane

0x8cf0,	// (0x00033144) main_idle_trad_pane

0x8cf0,	// (0x00033144) main_list_empty_pane

0x9056,	// (0x000334aa) main_midp_pane

0x9062,	// (0x000334b6) main_pane_g1_ParamLimits

0x9062,	// (0x000334b6) main_pane_g1

0x9070,	// (0x000334c4) popup_ai_message_window_ParamLimits

0x9070,	// (0x000334c4) popup_ai_message_window

0x9112,	// (0x00033566) popup_fep_china_uni_window_ParamLimits

0x9112,	// (0x00033566) popup_fep_china_uni_window

0x916e,	// (0x000335c2) popup_fep_japan_candidate_window_ParamLimits

0x916e,	// (0x000335c2) popup_fep_japan_candidate_window

0x918e,	// (0x000335e2) popup_fep_japan_predictive_window_ParamLimits

0x918e,	// (0x000335e2) popup_fep_japan_predictive_window

0x91be,	// (0x00033612) popup_find_window

0x91cb,	// (0x0003361f) popup_grid_graphic_window_ParamLimits

0x91cb,	// (0x0003361f) popup_grid_graphic_window

0x91f3,	// (0x00033647) popup_large_graphic_colour_window

0x9219,	// (0x0003366d) popup_menu_window_ParamLimits

0x9219,	// (0x0003366d) popup_menu_window

0x93d1,	// (0x00033825) popup_note_image_window

0x93bd,	// (0x00033811) popup_note_wait_window_ParamLimits

0x93bd,	// (0x00033811) popup_note_wait_window

0x93bd,	// (0x00033811) popup_note_window_ParamLimits

0x93bd,	// (0x00033811) popup_note_window

0x9427,	// (0x0003387b) popup_query_code_window_ParamLimits

0x9427,	// (0x0003387b) popup_query_code_window

0x943b,	// (0x0003388f) popup_query_data_code_window_ParamLimits

0x943b,	// (0x0003388f) popup_query_data_code_window

0x9458,	// (0x000338ac) popup_query_data_window_ParamLimits

0x9458,	// (0x000338ac) popup_query_data_window

0x9474,	// (0x000338c8) popup_query_sat_info_window_ParamLimits

0x9474,	// (0x000338c8) popup_query_sat_info_window

0x94ad,	// (0x00033901) popup_snote_single_graphic_window_ParamLimits

0x94ad,	// (0x00033901) popup_snote_single_graphic_window

0x94ad,	// (0x00033901) popup_snote_single_text_window_ParamLimits

0x94ad,	// (0x00033901) popup_snote_single_text_window

0x94c2,	// (0x00033916) popup_sub_window_general

0x95f2,	// (0x00033a46) popup_window_general_ParamLimits

0x95f2,	// (0x00033a46) popup_window_general

0x9607,	// (0x00033a5b) power_save_pane

0x5bc4,	// (0x00030018) control_pane_g1_ParamLimits

0x5bc4,	// (0x00030018) control_pane_g1

0x5bed,	// (0x00030041) control_pane_g2_ParamLimits

0x5bed,	// (0x00030041) control_pane_g2

0x8fb9,	// (0x0003340d) control_pane_g3_ParamLimits

0x8fb9,	// (0x0003340d) control_pane_g3

0x0007,

0xf7a0,	// (0x00039bf4) control_pane_g_ParamLimits

0xf7a0,	// (0x00039bf4) control_pane_g

0x5c34,	// (0x00030088) control_pane_t1_ParamLimits

0x5c34,	// (0x00030088) control_pane_t1

0x5c86,	// (0x000300da) control_pane_t2_ParamLimits

0x5c86,	// (0x000300da) control_pane_t2

0x0002,

0xf7b1,	// (0x00039c05) control_pane_t_ParamLimits

0xf7b1,	// (0x00039c05) control_pane_t

0x8eda,	// (0x0003332e) navi_navi_volume_pane_cp1

0x8ee3,	// (0x00033337) status_small_icon_pane

0x8eeb,	// (0x0003333f) status_small_pane_g1_ParamLimits

0x8eeb,	// (0x0003333f) status_small_pane_g1

0x8f1f,	// (0x00033373) status_small_pane_g2_ParamLimits

0x8f1f,	// (0x00033373) status_small_pane_g2

0x8f2b,	// (0x0003337f) status_small_pane_g3_ParamLimits

0x8f2b,	// (0x0003337f) status_small_pane_g3

0x8f37,	// (0x0003338b) status_small_pane_g4_ParamLimits

0x8f37,	// (0x0003338b) status_small_pane_g4

0x8f43,	// (0x00033397) status_small_pane_g5_ParamLimits

0x8f43,	// (0x00033397) status_small_pane_g5

0x8f52,	// (0x000333a6) status_small_pane_g6_ParamLimits

0x8f52,	// (0x000333a6) status_small_pane_g6

0x0007,

0xf78f,	// (0x00039be3) status_small_pane_g_ParamLimits

0xf78f,	// (0x00039be3) status_small_pane_g

0x8f82,	// (0x000333d6) status_small_pane_t1

0x8fa5,	// (0x000333f9) status_small_wait_pane_ParamLimits

0x8fa5,	// (0x000333f9) status_small_wait_pane

0x8793,	// (0x00032be7) aid_levels_signal_ParamLimits

0x8793,	// (0x00032be7) aid_levels_signal

0x87a5,	// (0x00032bf9) signal_pane_g1_ParamLimits

0x87a5,	// (0x00032bf9) signal_pane_g1

0x87ba,	// (0x00032c0e) signal_pane_g2_ParamLimits

0x87ba,	// (0x00032c0e) signal_pane_g2

0x0001,

0xf724,	// (0x00039b78) signal_pane_g_ParamLimits

0xf724,	// (0x00039b78) signal_pane_g

0x87cf,	// (0x00032c23) context_pane_g1

0x7749,	// (0x00031b9d) title_pane_g1

0x777f,	// (0x00031bd3) title_pane_t1

0x77e7,	// (0x00031c3b) title_pane_t2

0x780d,	// (0x00031c61) title_pane_t3

0x0002,

0xf573,	// (0x000399c7) title_pane_t

0x99ea,	// (0x00033e3e) aid_levels_battery_ParamLimits

0x99ea,	// (0x00033e3e) aid_levels_battery

0x99fe,	// (0x00033e52) battery_pane_g1_ParamLimits

0x99fe,	// (0x00033e52) battery_pane_g1

0x9a14,	// (0x00033e68) battery_pane_g2_ParamLimits

0x9a14,	// (0x00033e68) battery_pane_g2

0x0001,

0xf7c3,	// (0x00039c17) battery_pane_g_ParamLimits

0xf7c3,	// (0x00039c17) battery_pane_g

0xacda,	// (0x0003512e) uni_indicator_pane_g1

0xacef,	// (0x00035143) uni_indicator_pane_g2

0xad05,	// (0x00035159) uni_indicator_pane_g3

0x0005,

0xf932,	// (0x00039d86) uni_indicator_pane_g

0x8b62,	// (0x00032fb6) navi_icon_pane_ParamLimits

0x8b62,	// (0x00032fb6) navi_icon_pane

0x8aab,	// (0x00032eff) navi_midp_pane

0x8b7e,	// (0x00032fd2) navi_navi_pane

0x8b88,	// (0x00032fdc) navi_text_pane_ParamLimits

0x8b88,	// (0x00032fdc) navi_text_pane

0x7735,	// (0x00031b89) status_small_wait_pane_g1

0x7c3c,	// (0x00032090) status_small_wait_pane_g2

0x0001,

0xf92d,	// (0x00039d81) status_small_wait_pane_g

0xa9ff,	// (0x00034e53) navi_navi_icon_text_pane

0xaa07,	// (0x00034e5b) navi_navi_pane_g1_ParamLimits

0xaa07,	// (0x00034e5b) navi_navi_pane_g1

0xaa19,	// (0x00034e6d) navi_navi_pane_g2_ParamLimits

0xaa19,	// (0x00034e6d) navi_navi_pane_g2

0x0001,

0xf8fb,	// (0x00039d4f) navi_navi_pane_g_ParamLimits

0xf8fb,	// (0x00039d4f) navi_navi_pane_g

0xaa2b,	// (0x00034e7f) navi_navi_tabs_pane

0xaa34,	// (0x00034e88) navi_navi_text_pane

0xa9ff,	// (0x00034e53) navi_navi_volume_pane

0xa9d8,	// (0x00034e2c) navi_text_pane_t1

0xa9c9,	// (0x00034e1d) navi_icon_pane_g1

0xa91c,	// (0x00034d70) navi_navi_text_pane_t1

0x5fb0,	// (0x00030404) navi_navi_volume_pane_g1

0x5fb8,	// (0x0003040c) volume_small_pane

0xa882,	// (0x00034cd6) navi_navi_icon_text_pane_g1

0xa88a,	// (0x00034cde) navi_navi_icon_text_pane_t1

0x8b7e,	// (0x00032fd2) navi_tabs_2_long_pane

0x8b7e,	// (0x00032fd2) navi_tabs_2_pane

0x8b7e,	// (0x00032fd2) navi_tabs_3_long_pane

0x8b7e,	// (0x00032fd2) navi_tabs_3_pane

0x8b7e,	// (0x00032fd2) navi_tabs_4_pane

0x5f90,	// (0x000303e4) tabs_2_active_pane_ParamLimits

0x5f90,	// (0x000303e4) tabs_2_active_pane

0x5fa0,	// (0x000303f4) tabs_2_passive_pane_ParamLimits

0x5fa0,	// (0x000303f4) tabs_2_passive_pane

0x5f5e,	// (0x000303b2) tabs_3_active_pane_ParamLimits

0x5f5e,	// (0x000303b2) tabs_3_active_pane

0x5f6e,	// (0x000303c2) tabs_3_passive_pane_ParamLimits

0x5f6e,	// (0x000303c2) tabs_3_passive_pane

0x5f7f,	// (0x000303d3) tabs_3_passive_pane_cp_ParamLimits

0x5f7f,	// (0x000303d3) tabs_3_passive_pane_cp

0x5f1a,	// (0x0003036e) tabs_4_active_pane_ParamLimits

0x5f1a,	// (0x0003036e) tabs_4_active_pane

0x5f2b,	// (0x0003037f) tabs_4_passive_pane_ParamLimits

0x5f2b,	// (0x0003037f) tabs_4_passive_pane

0x5f3c,	// (0x00030390) tabs_4_passive_pane_cp_ParamLimits

0x5f3c,	// (0x00030390) tabs_4_passive_pane_cp

0x5f4d,	// (0x000303a1) tabs_4_passive_pane_cp2_ParamLimits

0x5f4d,	// (0x000303a1) tabs_4_passive_pane_cp2

0x5ef6,	// (0x0003034a) tabs_2_long_active_pane_ParamLimits

0x5ef6,	// (0x0003034a) tabs_2_long_active_pane

0x5f08,	// (0x0003035c) tabs_2_long_passive_pane_ParamLimits

0x5f08,	// (0x0003035c) tabs_2_long_passive_pane

0x5eb7,	// (0x0003030b) tabs_3_long_active_pane_ParamLimits

0x5eb7,	// (0x0003030b) tabs_3_long_active_pane

0x5eca,	// (0x0003031e) tabs_3_long_passive_pane_ParamLimits

0x5eca,	// (0x0003031e) tabs_3_long_passive_pane

0x5ee3,	// (0x00030337) tabs_3_long_passive_pane_cp_ParamLimits

0x5ee3,	// (0x00030337) tabs_3_long_passive_pane_cp

0x5e5d,	// (0x000302b1) volume_small_pane_g1

0x5e66,	// (0x000302ba) volume_small_pane_g2

0x5e6f,	// (0x000302c3) volume_small_pane_g3

0x5e78,	// (0x000302cc) volume_small_pane_g4

0x5e81,	// (0x000302d5) volume_small_pane_g5

0x5e8a,	// (0x000302de) volume_small_pane_g6

0x5e93,	// (0x000302e7) volume_small_pane_g7

0x5e9c,	// (0x000302f0) volume_small_pane_g8

0x5ea5,	// (0x000302f9) volume_small_pane_g9

0x5eae,	// (0x00030302) volume_small_pane_g10

0x0009,

0xf8c7,	// (0x00039d1b) volume_small_pane_g

0x781f,	// (0x00031c73) bg_active_tab_pane_cp2_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp2

0x782d,	// (0x00031c81) tabs_3_active_pane_g1

0x7835,	// (0x00031c89) tabs_3_active_pane_t1

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp2_ParamLimits

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp2

0x782d,	// (0x00031c81) tabs_3_passive_pane_g1

0x7835,	// (0x00031c89) tabs_3_passive_pane_t1

0x781f,	// (0x00031c73) bg_active_tab_pane_cp3_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp3

0x7847,	// (0x00031c9b) tabs_4_active_pane_g1

0x784f,	// (0x00031ca3) tabs_4_active_pane_t1

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp3_ParamLimits

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp3

0x7847,	// (0x00031c9b) tabs_4_1_passive_pane_g1

0x784f,	// (0x00031ca3) tabs_4_1_passive_pane_t1

0x9056,	// (0x000334aa) list_highlight_pane_cp2

0xaf63,	// (0x000353b7) list_set_pane_ParamLimits

0xaf63,	// (0x000353b7) list_set_pane

0xb009,	// (0x0003545d) main_pane_set_t1_ParamLimits

0xb009,	// (0x0003545d) main_pane_set_t1

0xb029,	// (0x0003547d) main_pane_set_t2_ParamLimits

0xb029,	// (0x0003547d) main_pane_set_t2

0xb03d,	// (0x00035491) main_pane_set_t3_ParamLimits

0xb03d,	// (0x00035491) main_pane_set_t3

0xb04f,	// (0x000354a3) main_pane_set_t4_ParamLimits

0xb04f,	// (0x000354a3) main_pane_set_t4

0x0003,

0xf997,	// (0x00039deb) main_pane_set_t_ParamLimits

0xf997,	// (0x00039deb) main_pane_set_t

0xb061,	// (0x000354b5) setting_code_pane

0xb06d,	// (0x000354c1) setting_slider_graphic_pane

0xb06d,	// (0x000354c1) setting_slider_pane

0xb06d,	// (0x000354c1) setting_text_pane

0xb06d,	// (0x000354c1) setting_volume_pane

0x4f7e,	// (0x0002f3d2) volume_set_pane

0x781f,	// (0x00031c73) bg_set_opt_pane_cp

0x4f86,	// (0x0002f3da) setting_slider_pane_t1

0x4f9f,	// (0x0002f3f3) setting_slider_pane_t2

0x4fb9,	// (0x0002f40d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000399ce) setting_slider_pane_t

0x4fd1,	// (0x0002f425) slider_set_pane

0x773f,	// (0x00031b93) bg_set_opt_pane_cp2

0x7861,	// (0x00031cb5) setting_slider_graphic_pane_g1

0x4fe7,	// (0x0002f43b) setting_slider_graphic_pane_t1

0x4ff7,	// (0x0002f44b) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000399d5) setting_slider_graphic_pane_t

0x5007,	// (0x0002f45b) slider_set_pane_cp

0x773f,	// (0x00031b93) input_focus_pane_cp1

0xaf22,	// (0x00035376) list_set_text_pane

0x7735,	// (0x00031b89) setting_text_pane_g1

0x773f,	// (0x00031b93) input_focus_pane_cp2

0x7735,	// (0x00031b89) setting_code_pane_g1

0x786a,	// (0x00031cbe) setting_code_pane_t1

0x500f,	// (0x0002f463) set_text_pane_t1_ParamLimits

0x500f,	// (0x0002f463) set_text_pane_t1

0x80f2,	// (0x00032546) set_opt_bg_pane_g1

0x80fa,	// (0x0003254e) set_opt_bg_pane_g2

0xaefc,	// (0x00035350) set_opt_bg_pane_g3

0x810a,	// (0x0003255e) set_opt_bg_pane_g4

0x8112,	// (0x00032566) set_opt_bg_pane_g5

0x811a,	// (0x0003256e) set_opt_bg_pane_g6

0xaf06,	// (0x0003535a) set_opt_bg_pane_g7

0xaf0e,	// (0x00035362) set_opt_bg_pane_g8

0xaf18,	// (0x0003536c) set_opt_bg_pane_g9

0x0008,

0xf984,	// (0x00039dd8) set_opt_bg_pane_g

0xaeef,	// (0x00035343) slider_set_pane_g1

0x6025,	// (0x00030479) slider_set_pane_g2

0x0006,

0xf975,	// (0x00039dc9) slider_set_pane_g

0x5fc1,	// (0x00030415) volume_set_pane_g1

0x5fc9,	// (0x0003041d) volume_set_pane_g2

0x5fd1,	// (0x00030425) volume_set_pane_g3

0x5fd9,	// (0x0003042d) volume_set_pane_g4

0x5fe1,	// (0x00030435) volume_set_pane_g5

0x5fe9,	// (0x0003043d) volume_set_pane_g6

0x5ff1,	// (0x00030445) volume_set_pane_g7

0x5ff9,	// (0x0003044d) volume_set_pane_g8

0x6001,	// (0x00030455) volume_set_pane_g9

0x6009,	// (0x0003045d) volume_set_pane_g10

0x0009,

0xf94d,	// (0x00039da1) volume_set_pane_g

0x7878,	// (0x00031ccc) indicator_pane_ParamLimits

0x7878,	// (0x00031ccc) indicator_pane

0x7884,	// (0x00031cd8) main_idle_pane_g2_ParamLimits

0x7884,	// (0x00031cd8) main_idle_pane_g2

0x78ac,	// (0x00031d00) main_pane_idle_g1_ParamLimits

0x78ac,	// (0x00031d00) main_pane_idle_g1

0x78b9,	// (0x00031d0d) popup_clock_digital_analogue_window_ParamLimits

0x78b9,	// (0x00031d0d) popup_clock_digital_analogue_window

0x78d0,	// (0x00031d24) soft_indicator_pane_ParamLimits

0x78d0,	// (0x00031d24) soft_indicator_pane

0x78dc,	// (0x00031d30) wallpaper_pane_ParamLimits

0x78dc,	// (0x00031d30) wallpaper_pane

0x7735,	// (0x00031b89) wallpaper_pane_g1

0x78f0,	// (0x00031d44) indicator_pane_g1_ParamLimits

0x78f0,	// (0x00031d44) indicator_pane_g1

0xb2f2,	// (0x00035746) navi_navi_icon_text_pane_srt_g1

0x790b,	// (0x00031d5f) soft_indicator_pane_t1

0x7925,	// (0x00031d79) aid_ps_area_pane

0x7936,	// (0x00031d8a) aid_ps_clock_pane

0x7944,	// (0x00031d98) aid_ps_indicator_pane

0x7950,	// (0x00031da4) indicator_ps_pane_ParamLimits

0x7950,	// (0x00031da4) indicator_ps_pane

0x795f,	// (0x00031db3) power_save_pane_g1_ParamLimits

0x795f,	// (0x00031db3) power_save_pane_g1

0x796b,	// (0x00031dbf) power_save_pane_g2_ParamLimits

0x796b,	// (0x00031dbf) power_save_pane_g2

0x4b8f,	// (0x0002efe3) aid_navinavi_width_pane

0x7925,	// (0x00031d79) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x000399da) power_save_pane_g_ParamLimits

0xf586,	// (0x000399da) power_save_pane_g

0x7979,	// (0x00031dcd) power_save_pane_t1_ParamLimits

0x7979,	// (0x00031dcd) power_save_pane_t1

0x7936,	// (0x00031d8a) aid_ps_clock_pane_ParamLimits

0x7944,	// (0x00031d98) aid_ps_indicator_pane_ParamLimits

0x798b,	// (0x00031ddf) power_save_pane_t4_ParamLimits

0x798b,	// (0x00031ddf) power_save_pane_t4

0x0001,

0xf58b,	// (0x000399df) power_save_pane_t_ParamLimits

0xf58b,	// (0x000399df) power_save_pane_t

0x79b5,	// (0x00031e09) power_save_t3_ParamLimits

0x79b5,	// (0x00031e09) power_save_t3

0x79a0,	// (0x00031df4) power_save_t2_ParamLimits

0x79a0,	// (0x00031df4) power_save_t2

0x79ca,	// (0x00031e1e) indicator_ps_pane_g1

0x79d3,	// (0x00031e27) ai_gene_pane_ParamLimits

0x79d3,	// (0x00031e27) ai_gene_pane

0x79df,	// (0x00031e33) ai_links_pane_ParamLimits

0x79df,	// (0x00031e33) ai_links_pane

0x79eb,	// (0x00031e3f) indicator_pane_cp1_ParamLimits

0x79eb,	// (0x00031e3f) indicator_pane_cp1

0x79f7,	// (0x00031e4b) main_pane_idle_g1_cp_ParamLimits

0x79f7,	// (0x00031e4b) main_pane_idle_g1_cp

0x7a03,	// (0x00031e57) popup_ai_links_title_window

0x7a0c,	// (0x00031e60) soft_indicator_pane_cp1_ParamLimits

0x7a0c,	// (0x00031e60) soft_indicator_pane_cp1

0xacc8,	// (0x0003511c) ai_links_pane_g1

0xacd1,	// (0x00035125) grid_ai_links_pane

0xacab,	// (0x000350ff) ai_gene_pane_1

0xacb6,	// (0x0003510a) ai_gene_pane_2

0xacbf,	// (0x00035113) list_highlight_pane_cp4

0xac8f,	// (0x000350e3) cell_ai_link_pane_ParamLimits

0xac8f,	// (0x000350e3) cell_ai_link_pane

0xac87,	// (0x000350db) cell_ai_link_pane_g1

0x7c3c,	// (0x00032090) cell_ai_link_pane_g2

0x0001,

0xf928,	// (0x00039d7c) cell_ai_link_pane_g

0x773f,	// (0x00031b93) grid_highlight_cp2

0x773f,	// (0x00031b93) bg_popup_sub_pane_cp1

0x7a26,	// (0x00031e7a) popup_ai_links_title_window_t1

0xabd5,	// (0x00035029) ai_gene_pane_1_g1_ParamLimits

0xabd5,	// (0x00035029) ai_gene_pane_1_g1

0xabe1,	// (0x00035035) ai_gene_pane_1_g2_ParamLimits

0xabe1,	// (0x00035035) ai_gene_pane_1_g2

0x0001,

0xf91e,	// (0x00039d72) ai_gene_pane_1_g_ParamLimits

0xf91e,	// (0x00039d72) ai_gene_pane_1_g

0xabee,	// (0x00035042) ai_gene_pane_1_t1_ParamLimits

0xabee,	// (0x00035042) ai_gene_pane_1_t1

0xac22,	// (0x00035076) grid_ai_soft_ind_pane

0xabc0,	// (0x00035014) ai_gene_pane_2_t1_ParamLimits

0xabc0,	// (0x00035014) ai_gene_pane_2_t1

0x7a35,	// (0x00031e89) main_pane_empty_t1_ParamLimits

0x7a35,	// (0x00031e89) main_pane_empty_t1

0x7a4d,	// (0x00031ea1) main_pane_empty_t2_ParamLimits

0x7a4d,	// (0x00031ea1) main_pane_empty_t2

0x7a62,	// (0x00031eb6) main_pane_empty_t3_ParamLimits

0x7a62,	// (0x00031eb6) main_pane_empty_t3

0x7a74,	// (0x00031ec8) main_pane_empty_t4_ParamLimits

0x7a74,	// (0x00031ec8) main_pane_empty_t4

0x7a86,	// (0x00031eda) main_pane_empty_t5_ParamLimits

0x7a86,	// (0x00031eda) main_pane_empty_t5

0x0004,

0xf590,	// (0x000399e4) main_pane_empty_t_ParamLimits

0xf590,	// (0x000399e4) main_pane_empty_t

0x8143,	// (0x00032597) bg_popup_window_pane_ParamLimits

0x8143,	// (0x00032597) bg_popup_window_pane

0xa92a,	// (0x00034d7e) find_popup_pane_cp2_ParamLimits

0xa92a,	// (0x00034d7e) find_popup_pane_cp2

0xa936,	// (0x00034d8a) heading_pane_ParamLimits

0xa936,	// (0x00034d8a) heading_pane

0x773f,	// (0x00031b93) bg_popup_sub_pane

0xa8a4,	// (0x00034cf8) bg_popup_window_pane_g1_ParamLimits

0xa8a4,	// (0x00034cf8) bg_popup_window_pane_g1

0xa8b0,	// (0x00034d04) bg_popup_window_pane_g2_ParamLimits

0xa8b0,	// (0x00034d04) bg_popup_window_pane_g2

0xa8bc,	// (0x00034d10) bg_popup_window_pane_g3_ParamLimits

0xa8bc,	// (0x00034d10) bg_popup_window_pane_g3

0xa8c8,	// (0x00034d1c) bg_popup_window_pane_g4_ParamLimits

0xa8c8,	// (0x00034d1c) bg_popup_window_pane_g4

0xa8d4,	// (0x00034d28) bg_popup_window_pane_g5_ParamLimits

0xa8d4,	// (0x00034d28) bg_popup_window_pane_g5

0xa8e0,	// (0x00034d34) bg_popup_window_pane_g6_ParamLimits

0xa8e0,	// (0x00034d34) bg_popup_window_pane_g6

0xa8ec,	// (0x00034d40) bg_popup_window_pane_g7_ParamLimits

0xa8ec,	// (0x00034d40) bg_popup_window_pane_g7

0xa8f8,	// (0x00034d4c) bg_popup_window_pane_g8_ParamLimits

0xa8f8,	// (0x00034d4c) bg_popup_window_pane_g8

0xa904,	// (0x00034d58) bg_popup_window_pane_g9_ParamLimits

0xa904,	// (0x00034d58) bg_popup_window_pane_g9

0xa910,	// (0x00034d64) bg_popup_window_pane_g10_ParamLimits

0xa910,	// (0x00034d64) bg_popup_window_pane_g10

0x0009,

0xf8e6,	// (0x00039d3a) bg_popup_window_pane_g_ParamLimits

0xf8e6,	// (0x00039d3a) bg_popup_window_pane_g

0xa839,	// (0x00034c8d) bg_popup_heading_pane_ParamLimits

0xa839,	// (0x00034c8d) bg_popup_heading_pane

0x60ad,	// (0x00030501) tabs_4_passive_pane_cp_srt_ParamLimits

0x60ad,	// (0x00030501) tabs_4_passive_pane_cp_srt

0x60bf,	// (0x00030513) tabs_4_passive_pane_srt_ParamLimits

0xa84d,	// (0x00034ca1) heading_pane_g2

0x60bf,	// (0x00030513) tabs_4_passive_pane_srt

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp3_srt

0xa855,	// (0x00034ca9) heading_pane_t1_ParamLimits

0xa855,	// (0x00034ca9) heading_pane_t1

0xa86c,	// (0x00034cc0) heading_pane_t2_ParamLimits

0xa86c,	// (0x00034cc0) heading_pane_t2

0x0001,

0xf8e1,	// (0x00039d35) heading_pane_t_ParamLimits

0xf8e1,	// (0x00039d35) heading_pane_t

0xa35a,	// (0x000347ae) bg_popup_heading_pane_g1

0xa409,	// (0x0003485d) bg_popup_heading_pane_g2

0xa413,	// (0x00034867) bg_popup_heading_pane_g3

0xa41d,	// (0x00034871) bg_popup_heading_pane_g4

0xa427,	// (0x0003487b) bg_popup_heading_pane_g5

0xa431,	// (0x00034885) bg_popup_heading_pane_g6

0xa439,	// (0x0003488d) bg_popup_heading_pane_g7

0xa441,	// (0x00034895) bg_popup_heading_pane_g8

0xa44b,	// (0x0003489f) bg_popup_heading_pane_g9

0x0008,

0xf89d,	// (0x00039cf1) bg_popup_heading_pane_g

0x9aec,	// (0x00033f40) bg_popup_sub_pane_g1

0x9afc,	// (0x00033f50) bg_popup_sub_pane_g2

0x9af4,	// (0x00033f48) bg_popup_sub_pane_g3

0x9b0c,	// (0x00033f60) bg_popup_sub_pane_g4

0x9b04,	// (0x00033f58) bg_popup_sub_pane_g5

0x9b14,	// (0x00033f68) bg_popup_sub_pane_g6

0x9b1c,	// (0x00033f70) bg_popup_sub_pane_g7

0x9b2c,	// (0x00033f80) bg_popup_sub_pane_g8

0x9b24,	// (0x00033f78) bg_popup_sub_pane_g9

0x0008,

0xf877,	// (0x00039ccb) bg_popup_sub_pane_g

0x7a9a,	// (0x00031eee) bg_popup_window_pane_cp5_ParamLimits

0x7a9a,	// (0x00031eee) bg_popup_window_pane_cp5

0x7ab6,	// (0x00031f0a) popup_note_window_g1_ParamLimits

0x7ab6,	// (0x00031f0a) popup_note_window_g1

0x7ac2,	// (0x00031f16) popup_note_window_t1_ParamLimits

0x7ac2,	// (0x00031f16) popup_note_window_t1

0x7ad8,	// (0x00031f2c) popup_note_window_t2_ParamLimits

0x7ad8,	// (0x00031f2c) popup_note_window_t2

0x7aee,	// (0x00031f42) popup_note_window_t3_ParamLimits

0x7aee,	// (0x00031f42) popup_note_window_t3

0x7b04,	// (0x00031f58) popup_note_window_t4_ParamLimits

0x7b04,	// (0x00031f58) popup_note_window_t4

0x7b2c,	// (0x00031f80) popup_note_window_t5_ParamLimits

0x7b2c,	// (0x00031f80) popup_note_window_t5

0x0004,

0xf59b,	// (0x000399ef) popup_note_window_t_ParamLimits

0xf59b,	// (0x000399ef) popup_note_window_t

0x7b50,	// (0x00031fa4) bg_popup_window_pane_cp6_ParamLimits

0x7b50,	// (0x00031fa4) bg_popup_window_pane_cp6

0xa2d6,	// (0x0003472a) popup_note_image_window_g1_ParamLimits

0xa2d6,	// (0x0003472a) popup_note_image_window_g1

0xa2e2,	// (0x00034736) popup_note_image_window_g2_ParamLimits

0xa2e2,	// (0x00034736) popup_note_image_window_g2

0x0001,

0xf86b,	// (0x00039cbf) popup_note_image_window_g_ParamLimits

0xf86b,	// (0x00039cbf) popup_note_image_window_g

0xa2fb,	// (0x0003474f) popup_note_image_window_t1_ParamLimits

0xa2fb,	// (0x0003474f) popup_note_image_window_t1

0xa314,	// (0x00034768) popup_note_image_window_t2_ParamLimits

0xa314,	// (0x00034768) popup_note_image_window_t2

0xa32d,	// (0x00034781) popup_note_image_window_t3_ParamLimits

0xa32d,	// (0x00034781) popup_note_image_window_t3

0x0002,

0xf870,	// (0x00039cc4) popup_note_image_window_t_ParamLimits

0xf870,	// (0x00039cc4) popup_note_image_window_t

0xa197,	// (0x000345eb) bg_popup_window_pane_cp7_ParamLimits

0xa197,	// (0x000345eb) bg_popup_window_pane_cp7

0xa1c7,	// (0x0003461b) popup_note_wait_window_g1_ParamLimits

0xa1c7,	// (0x0003461b) popup_note_wait_window_g1

0xa1d3,	// (0x00034627) popup_note_wait_window_g2_ParamLimits

0xa1d3,	// (0x00034627) popup_note_wait_window_g2

0x0002,

0xf859,	// (0x00039cad) popup_note_wait_window_g_ParamLimits

0xf859,	// (0x00039cad) popup_note_wait_window_g

0xa1eb,	// (0x0003463f) popup_note_wait_window_t1_ParamLimits

0xa1eb,	// (0x0003463f) popup_note_wait_window_t1

0xa212,	// (0x00034666) popup_note_wait_window_t2_ParamLimits

0xa212,	// (0x00034666) popup_note_wait_window_t2

0xa22f,	// (0x00034683) popup_note_wait_window_t3_ParamLimits

0xa22f,	// (0x00034683) popup_note_wait_window_t3

0xa242,	// (0x00034696) popup_note_wait_window_t4_ParamLimits

0xa242,	// (0x00034696) popup_note_wait_window_t4

0x0004,

0xf860,	// (0x00039cb4) popup_note_wait_window_t_ParamLimits

0xf860,	// (0x00039cb4) popup_note_wait_window_t

0xa267,	// (0x000346bb) wait_bar_pane_ParamLimits

0xa267,	// (0x000346bb) wait_bar_pane

0x773f,	// (0x00031b93) wait_anim_pane

0x773f,	// (0x00031b93) wait_border_pane

0x7735,	// (0x00031b89) wait_anim_pane_g1

0x7735,	// (0x00031b89) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x00039b73) wait_anim_pane_g

0xa13b,	// (0x0003458f) wait_border_pane_g1

0xa146,	// (0x0003459a) wait_border_pane_g2

0xa14f,	// (0x000345a3) wait_border_pane_g3

0x0002,

0xf852,	// (0x00039ca6) wait_border_pane_g

0x9fa6,	// (0x000343fa) bg_popup_window_pane_cp16_ParamLimits

0x9fa6,	// (0x000343fa) bg_popup_window_pane_cp16

0xa0a6,	// (0x000344fa) indicator_popup_pane_cp4_ParamLimits

0xa0a6,	// (0x000344fa) indicator_popup_pane_cp4

0xa0ba,	// (0x0003450e) popup_query_data_window_t1_ParamLimits

0xa0ba,	// (0x0003450e) popup_query_data_window_t1

0xa0cc,	// (0x00034520) popup_query_data_window_t2_ParamLimits

0xa0cc,	// (0x00034520) popup_query_data_window_t2

0xa0e5,	// (0x00034539) popup_query_data_window_t3_ParamLimits

0xa0e5,	// (0x00034539) popup_query_data_window_t3

0x0002,

0xf84b,	// (0x00039c9f) popup_query_data_window_t_ParamLimits

0xf84b,	// (0x00039c9f) popup_query_data_window_t

0xa0ff,	// (0x00034553) query_popup_data_pane_ParamLimits

0xa0ff,	// (0x00034553) query_popup_data_pane

0xa113,	// (0x00034567) query_popup_data_pane_cp1_ParamLimits

0xa113,	// (0x00034567) query_popup_data_pane_cp1

0x9fa6,	// (0x000343fa) bg_popup_window_pane_cp10_ParamLimits

0x9fa6,	// (0x000343fa) bg_popup_window_pane_cp10

0x9fd8,	// (0x0003442c) indicator_popup_pane_ParamLimits

0x9fd8,	// (0x0003442c) indicator_popup_pane

0x9ffa,	// (0x0003444e) popup_query_code_window_t1_ParamLimits

0x9ffa,	// (0x0003444e) popup_query_code_window_t1

0xa014,	// (0x00034468) popup_query_code_window_t2_ParamLimits

0xa014,	// (0x00034468) popup_query_code_window_t2

0xa05d,	// (0x000344b1) popup_query_code_window_t3_ParamLimits

0xa05d,	// (0x000344b1) popup_query_code_window_t3

0x0002,

0xf844,	// (0x00039c98) popup_query_code_window_t_ParamLimits

0xf844,	// (0x00039c98) popup_query_code_window_t

0xa08c,	// (0x000344e0) query_popup_pane_ParamLimits

0xa08c,	// (0x000344e0) query_popup_pane

0x7b50,	// (0x00031fa4) bg_popup_window_pane_cp15_ParamLimits

0x7b50,	// (0x00031fa4) bg_popup_window_pane_cp15

0x7b6e,	// (0x00031fc2) indicator_popup_pane_cp1_ParamLimits

0x7b6e,	// (0x00031fc2) indicator_popup_pane_cp1

0x7b81,	// (0x00031fd5) indicator_popup_pane_cp2_ParamLimits

0x7b81,	// (0x00031fd5) indicator_popup_pane_cp2

0x7b94,	// (0x00031fe8) popup_query_data_code_window_g1_ParamLimits

0x7b94,	// (0x00031fe8) popup_query_data_code_window_g1

0x7ba7,	// (0x00031ffb) popup_query_data_code_window_t1_ParamLimits

0x7ba7,	// (0x00031ffb) popup_query_data_code_window_t1

0x7bb9,	// (0x0003200d) popup_query_data_code_window_t2_ParamLimits

0x7bb9,	// (0x0003200d) popup_query_data_code_window_t2

0x7bcb,	// (0x0003201f) popup_query_data_code_window_t3_ParamLimits

0x7bcb,	// (0x0003201f) popup_query_data_code_window_t3

0x7be1,	// (0x00032035) popup_query_data_code_window_t4_ParamLimits

0x7be1,	// (0x00032035) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000399fa) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000399fa) popup_query_data_code_window_t

0x5d6e,	// (0x000301c2) list_single_midp_graphic_pane_g3

0x7bf9,	// (0x0003204d) query_popup_data_pane_cp2_ParamLimits

0x7c0c,	// (0x00032060) query_popup_pane_cp2_ParamLimits

0x7c0c,	// (0x00032060) query_popup_pane_cp2

0x773f,	// (0x00031b93) bg_popup_window_pane_cp11

0x9f9e,	// (0x000343f2) heading_pane_cp5

0x7cf4,	// (0x00032148) listscroll_popup_info_pane

0x773f,	// (0x00031b93) input_focus_pane_cp3

0x7c1f,	// (0x00032073) query_popup_pane_t1

0x7c2d,	// (0x00032081) list_popup_info_pane_ParamLimits

0x7c2d,	// (0x00032081) list_popup_info_pane

0x7c3c,	// (0x00032090) listscroll_popup_info_pane_g1

0x7c44,	// (0x00032098) scroll_pane_cp7

0x7c4e,	// (0x000320a2) popup_info_list_pane_t1_ParamLimits

0x7c4e,	// (0x000320a2) popup_info_list_pane_t1

0x7c68,	// (0x000320bc) popup_info_list_pane_t2_ParamLimits

0x7c68,	// (0x000320bc) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00039a03) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00039a03) popup_info_list_pane_t

0x773f,	// (0x00031b93) bg_popup_window_pane_cp12

0xb30c,	// (0x00035760) find_popup_pane

0x781f,	// (0x00031c73) bg_popup_window_pane_cp3

0x7c82,	// (0x000320d6) heading_pane_cp3

0x7c8e,	// (0x000320e2) listscroll_popup_graphic_pane

0x773f,	// (0x00031b93) bg_popup_window_pane_cp4

0x7cea,	// (0x0003213e) heading_pane_cp4

0x7cf4,	// (0x00032148) listscroll_popup_colour_pane

0x7cfc,	// (0x00032150) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7cfc,	// (0x00032150) cell_large_graphic_colour_none_popup_pane

0x7d10,	// (0x00032164) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d10,	// (0x00032164) grid_large_graphic_colour_popup_pane

0x7d3c,	// (0x00032190) listscroll_popup_colour_pane_g1_ParamLimits

0x7d3c,	// (0x00032190) listscroll_popup_colour_pane_g1

0x7d53,	// (0x000321a7) listscroll_popup_colour_pane_g2_ParamLimits

0x7d53,	// (0x000321a7) listscroll_popup_colour_pane_g2

0x7d6a,	// (0x000321be) listscroll_popup_colour_pane_g3_ParamLimits

0x7d6a,	// (0x000321be) listscroll_popup_colour_pane_g3

0x7d7a,	// (0x000321ce) listscroll_popup_colour_pane_g4_ParamLimits

0x7d7a,	// (0x000321ce) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00039a08) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00039a08) listscroll_popup_colour_pane_g

0x7d8e,	// (0x000321e2) scroll_pane_cp6_ParamLimits

0x7d8e,	// (0x000321e2) scroll_pane_cp6

0x7da0,	// (0x000321f4) cell_large_graphic_colour_popup_pane_ParamLimits

0x7da0,	// (0x000321f4) cell_large_graphic_colour_popup_pane

0x7dbf,	// (0x00032213) cell_large_graphic_colour_none_popup_pane_t1

0x773f,	// (0x00031b93) grid_highlight_pane_cp5

0x7dce,	// (0x00032222) cell_large_graphic_colour_popup_pane_g1

0x7dd6,	// (0x0003222a) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00039a11) cell_large_graphic_colour_popup_pane_g

0x7dde,	// (0x00032232) cell_large_graphic_colour_popup_pane_g2_copy1

0x7de7,	// (0x0003223b) grid_highlight_pane_cp4

0x7def,	// (0x00032243) bg_popup_window_pane_cp8_ParamLimits

0x7def,	// (0x00032243) bg_popup_window_pane_cp8

0x7e0a,	// (0x0003225e) popup_snote_single_text_window_g1_ParamLimits

0x7e0a,	// (0x0003225e) popup_snote_single_text_window_g1

0x7e1c,	// (0x00032270) popup_snote_single_text_window_t1_ParamLimits

0x7e1c,	// (0x00032270) popup_snote_single_text_window_t1

0x7e2f,	// (0x00032283) popup_snote_single_text_window_t2_ParamLimits

0x7e2f,	// (0x00032283) popup_snote_single_text_window_t2

0x7e42,	// (0x00032296) popup_snote_single_text_window_t3_ParamLimits

0x7e42,	// (0x00032296) popup_snote_single_text_window_t3

0x7e7b,	// (0x000322cf) popup_snote_single_text_window_t4_ParamLimits

0x7e7b,	// (0x000322cf) popup_snote_single_text_window_t4

0x7eaf,	// (0x00032303) popup_snote_single_text_window_t5_ParamLimits

0x7eaf,	// (0x00032303) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00039a16) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00039a16) popup_snote_single_text_window_t

0x7ede,	// (0x00032332) bg_popup_window_pane_cp9_ParamLimits

0x7ede,	// (0x00032332) bg_popup_window_pane_cp9

0x7e0a,	// (0x0003225e) popup_snote_single_graphic_window_g1_ParamLimits

0x7e0a,	// (0x0003225e) popup_snote_single_graphic_window_g1

0x7eec,	// (0x00032340) popup_snote_single_graphic_window_g2_ParamLimits

0x7eec,	// (0x00032340) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00039a21) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00039a21) popup_snote_single_graphic_window_g

0x7ef8,	// (0x0003234c) popup_snote_single_graphic_window_t1_ParamLimits

0x7ef8,	// (0x0003234c) popup_snote_single_graphic_window_t1

0x7f0b,	// (0x0003235f) popup_snote_single_graphic_window_t2_ParamLimits

0x7f0b,	// (0x0003235f) popup_snote_single_graphic_window_t2

0x7f1e,	// (0x00032372) popup_snote_single_graphic_window_t3_ParamLimits

0x7f1e,	// (0x00032372) popup_snote_single_graphic_window_t3

0x7f57,	// (0x000323ab) popup_snote_single_graphic_window_t4_ParamLimits

0x7f57,	// (0x000323ab) popup_snote_single_graphic_window_t4

0x7f8b,	// (0x000323df) popup_snote_single_graphic_window_t5_ParamLimits

0x7f8b,	// (0x000323df) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00039a26) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00039a26) popup_snote_single_graphic_window_t

0xb250,	// (0x000356a4) grid_graphic_popup_pane_ParamLimits

0xb250,	// (0x000356a4) grid_graphic_popup_pane

0xb278,	// (0x000356cc) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x000356cc) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x000356e0) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x000356e0) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c1,	// (0x00039e15) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c1,	// (0x00039e15) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x000356f4) scroll_pane_cp5

0xb1f9,	// (0x0003564d) cell_graphic_popup_pane_ParamLimits

0xb1f9,	// (0x0003564d) cell_graphic_popup_pane

0xb1da,	// (0x0003562e) cell_graphic_popup_pane_g1

0xb1e2,	// (0x00035636) cell_graphic_popup_pane_g2

0x7dde,	// (0x00032232) cell_graphic_popup_pane_g3

0x0002,

0xf9ba,	// (0x00039e0e) cell_graphic_popup_pane_g

0xb1eb,	// (0x0003563f) cell_graphic_popup_pane_t2

0x7de7,	// (0x0003223b) grid_highlight_pane_cp3

0x7fcc,	// (0x00032420) list_gen_pane_ParamLimits

0x7fcc,	// (0x00032420) list_gen_pane

0x7ffe,	// (0x00032452) scroll_pane

0xb13c,	// (0x00035590) bg_list_pane_g1_ParamLimits

0xb13c,	// (0x00035590) bg_list_pane_g1

0xb157,	// (0x000355ab) bg_list_pane_g2_ParamLimits

0xb157,	// (0x000355ab) bg_list_pane_g2

0xb16a,	// (0x000355be) bg_list_pane_g3_ParamLimits

0xb16a,	// (0x000355be) bg_list_pane_g3

0xb17c,	// (0x000355d0) bg_list_pane_g4_ParamLimits

0xb17c,	// (0x000355d0) bg_list_pane_g4

0xb18e,	// (0x000355e2) bg_list_pane_g5_ParamLimits

0xb18e,	// (0x000355e2) bg_list_pane_g5

0x0004,

0xf9af,	// (0x00039e03) bg_list_pane_g_ParamLimits

0xf9af,	// (0x00039e03) bg_list_pane_g

0xb0f3,	// (0x00035547) list_double2_graphic_large_graphic_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double2_graphic_large_graphic_pane

0xb0f3,	// (0x00035547) list_double2_graphic_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double2_graphic_pane

0xb0f3,	// (0x00035547) list_double2_large_graphic_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double2_large_graphic_pane

0x705f,	// (0x000314b3) list_double2_pane_ParamLimits

0x705f,	// (0x000314b3) list_double2_pane

0xb0f3,	// (0x00035547) list_double_graphic_heading_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_graphic_heading_pane

0xb0f3,	// (0x00035547) list_double_graphic_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_graphic_pane

0xb0f3,	// (0x00035547) list_double_heading_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_heading_pane

0xb0f3,	// (0x00035547) list_double_large_graphic_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_large_graphic_pane

0xb0f3,	// (0x00035547) list_double_number_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_number_pane

0xb0f3,	// (0x00035547) list_double_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_pane

0xb0f3,	// (0x00035547) list_double_time_pane_ParamLimits

0xb0f3,	// (0x00035547) list_double_time_pane

0xb0f3,	// (0x00035547) list_setting_number_pane_ParamLimits

0xb0f3,	// (0x00035547) list_setting_number_pane

0xb0f3,	// (0x00035547) list_setting_pane_ParamLimits

0xb0f3,	// (0x00035547) list_setting_pane

0x709a,	// (0x000314ee) list_single_2graphic_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_2graphic_pane

0x709a,	// (0x000314ee) list_single_graphic_heading_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_graphic_heading_pane

0x709a,	// (0x000314ee) list_single_graphic_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_graphic_pane

0x709a,	// (0x000314ee) list_single_heading_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_heading_pane

0x70f5,	// (0x00031549) list_single_large_graphic_pane_ParamLimits

0x70f5,	// (0x00031549) list_single_large_graphic_pane

0x709a,	// (0x000314ee) list_single_number_heading_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_number_heading_pane

0x709a,	// (0x000314ee) list_single_number_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_number_pane

0x709a,	// (0x000314ee) list_single_pane_ParamLimits

0x709a,	// (0x000314ee) list_single_pane

0x773f,	// (0x00031b93) list_highlight_pane_cp1

0x5036,	// (0x0002f48a) list_single_pane_g1_ParamLimits

0x5036,	// (0x0002f48a) list_single_pane_g1

0x5042,	// (0x0002f496) list_single_pane_g2_ParamLimits

0x5042,	// (0x0002f496) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00039a38) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00039a38) list_single_pane_g

0x7049,	// (0x0003149d) list_single_pane_t1_ParamLimits

0x7049,	// (0x0003149d) list_single_pane_t1

0x5036,	// (0x0002f48a) list_single_number_pane_g1_ParamLimits

0x5036,	// (0x0002f48a) list_single_number_pane_g1

0x5042,	// (0x0002f496) list_single_number_pane_g2_ParamLimits

0x5042,	// (0x0002f496) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00039a38) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00039a38) list_single_number_pane_g

0x6ff3,	// (0x00031447) list_single_number_pane_t1_ParamLimits

0x6ff3,	// (0x00031447) list_single_number_pane_t1

0x7009,	// (0x0003145d) list_single_number_pane_t2_ParamLimits

0x7009,	// (0x0003145d) list_single_number_pane_t2

0x0001,

0xf970,	// (0x00039dc4) list_single_number_pane_t_ParamLimits

0xf970,	// (0x00039dc4) list_single_number_pane_t

0x502a,	// (0x0002f47e) list_single_graphic_pane_g1_ParamLimits

0x502a,	// (0x0002f47e) list_single_graphic_pane_g1

0x5036,	// (0x0002f48a) list_single_graphic_pane_g2_ParamLimits

0x5036,	// (0x0002f48a) list_single_graphic_pane_g2

0x5042,	// (0x0002f496) list_single_graphic_pane_g3_ParamLimits

0x5042,	// (0x0002f496) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00039a31) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00039a31) list_single_graphic_pane_g

0x504e,	// (0x0002f4a2) list_single_graphic_pane_t1_ParamLimits

0x504e,	// (0x0002f4a2) list_single_graphic_pane_t1

0x5036,	// (0x0002f48a) list_single_heading_pane_g1_ParamLimits

0x5036,	// (0x0002f48a) list_single_heading_pane_g1

0x5042,	// (0x0002f496) list_single_heading_pane_g2_ParamLimits

0x5042,	// (0x0002f496) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00039a38) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00039a38) list_single_heading_pane_g

0x5064,	// (0x0002f4b8) list_single_heading_pane_t1_ParamLimits

0x5064,	// (0x0002f4b8) list_single_heading_pane_t1

0x507a,	// (0x0002f4ce) list_single_heading_pane_t2_ParamLimits

0x507a,	// (0x0002f4ce) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00039a3d) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00039a3d) list_single_heading_pane_t

0x5036,	// (0x0002f48a) list_single_number_heading_pane_g1_ParamLimits

0x5036,	// (0x0002f48a) list_single_number_heading_pane_g1

0x5042,	// (0x0002f496) list_single_number_heading_pane_g2_ParamLimits

0x5042,	// (0x0002f496) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00039a38) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00039a38) list_single_number_heading_pane_g

0x5064,	// (0x0002f4b8) list_single_number_heading_pane_t1_ParamLimits

0x5064,	// (0x0002f4b8) list_single_number_heading_pane_t1

0x508c,	// (0x0002f4e0) list_single_number_heading_pane_t2_ParamLimits

0x508c,	// (0x0002f4e0) list_single_number_heading_pane_t2

0x509e,	// (0x0002f4f2) list_single_number_heading_pane_t3_ParamLimits

0x509e,	// (0x0002f4f2) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00039a42) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00039a42) list_single_number_heading_pane_t

0x50b0,	// (0x0002f504) list_single_graphic_heading_pane_g1_ParamLimits

0x50b0,	// (0x0002f504) list_single_graphic_heading_pane_g1

0x50bc,	// (0x0002f510) list_single_graphic_heading_pane_g4_ParamLimits

0x50bc,	// (0x0002f510) list_single_graphic_heading_pane_g4

0x5042,	// (0x0002f496) list_single_graphic_heading_pane_g5_ParamLimits

0x5042,	// (0x0002f496) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00039a49) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00039a49) list_single_graphic_heading_pane_g

0x5064,	// (0x0002f4b8) list_single_graphic_heading_pane_t1_ParamLimits

0x5064,	// (0x0002f4b8) list_single_graphic_heading_pane_t1

0x50cd,	// (0x0002f521) list_single_graphic_heading_pane_t2_ParamLimits

0x50cd,	// (0x0002f521) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00039a50) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00039a50) list_single_graphic_heading_pane_t

0x50df,	// (0x0002f533) list_single_large_graphic_pane_g1_ParamLimits

0x50df,	// (0x0002f533) list_single_large_graphic_pane_g1

0x50eb,	// (0x0002f53f) list_single_large_graphic_pane_g2_ParamLimits

0x50eb,	// (0x0002f53f) list_single_large_graphic_pane_g2

0x50f7,	// (0x0002f54b) list_single_large_graphic_pane_g3_ParamLimits

0x50f7,	// (0x0002f54b) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00039a55) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00039a55) list_single_large_graphic_pane_g

0xa146,	// (0x0003459a) wait_border_pane_g2_copy1

0x5103,	// (0x0002f557) list_single_large_graphic_pane_g4_cp2

0x510b,	// (0x0002f55f) list_single_large_graphic_pane_t1_ParamLimits

0x510b,	// (0x0002f55f) list_single_large_graphic_pane_t1

0x5121,	// (0x0002f575) list_double_pane_g1_ParamLimits

0x5121,	// (0x0002f575) list_double_pane_g1

0x512d,	// (0x0002f581) list_double_pane_g2_ParamLimits

0x512d,	// (0x0002f581) list_double_pane_g2

0x0001,

0xf608,	// (0x00039a5c) list_double_pane_g_ParamLimits

0xf608,	// (0x00039a5c) list_double_pane_g

0x5139,	// (0x0002f58d) list_double_pane_t1_ParamLimits

0x5139,	// (0x0002f58d) list_double_pane_t1

0x514f,	// (0x0002f5a3) list_double_pane_t2_ParamLimits

0x514f,	// (0x0002f5a3) list_double_pane_t2

0x0001,

0xf60d,	// (0x00039a61) list_double_pane_t_ParamLimits

0xf60d,	// (0x00039a61) list_double_pane_t

0x5161,	// (0x0002f5b5) list_double2_pane_g1_ParamLimits

0x5161,	// (0x0002f5b5) list_double2_pane_g1

0x5172,	// (0x0002f5c6) list_double2_pane_g2_ParamLimits

0x5172,	// (0x0002f5c6) list_double2_pane_g2

0x0001,

0xf612,	// (0x00039a66) list_double2_pane_g_ParamLimits

0xf612,	// (0x00039a66) list_double2_pane_g

0x517e,	// (0x0002f5d2) list_double2_pane_t1_ParamLimits

0x517e,	// (0x0002f5d2) list_double2_pane_t1

0x5194,	// (0x0002f5e8) list_double2_pane_t2_ParamLimits

0x5194,	// (0x0002f5e8) list_double2_pane_t2

0x0001,

0xf617,	// (0x00039a6b) list_double2_pane_t_ParamLimits

0xf617,	// (0x00039a6b) list_double2_pane_t

0x5121,	// (0x0002f575) list_double_number_pane_g1_ParamLimits

0x5121,	// (0x0002f575) list_double_number_pane_g1

0x512d,	// (0x0002f581) list_double_number_pane_g2_ParamLimits

0x512d,	// (0x0002f581) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00039a5c) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00039a5c) list_double_number_pane_g

0x51a6,	// (0x0002f5fa) list_double_number_pane_t1_ParamLimits

0x51a6,	// (0x0002f5fa) list_double_number_pane_t1

0x51b8,	// (0x0002f60c) list_double_number_pane_t2_ParamLimits

0x51b8,	// (0x0002f60c) list_double_number_pane_t2

0x51ce,	// (0x0002f622) list_double_number_pane_t3_ParamLimits

0x51ce,	// (0x0002f622) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00039a70) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00039a70) list_double_number_pane_t

0x51e0,	// (0x0002f634) list_double_graphic_pane_g1_ParamLimits

0x51e0,	// (0x0002f634) list_double_graphic_pane_g1

0x51ec,	// (0x0002f640) list_double_graphic_pane_g2_ParamLimits

0x51ec,	// (0x0002f640) list_double_graphic_pane_g2

0x51fb,	// (0x0002f64f) list_double_graphic_pane_g3_ParamLimits

0x51fb,	// (0x0002f64f) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00039a77) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00039a77) list_double_graphic_pane_g

0x5213,	// (0x0002f667) list_double_graphic_pane_t1_ParamLimits

0x5213,	// (0x0002f667) list_double_graphic_pane_t1

0x5229,	// (0x0002f67d) list_double_graphic_pane_t2_ParamLimits

0x5229,	// (0x0002f67d) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00039a80) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00039a80) list_double_graphic_pane_t

0x523b,	// (0x0002f68f) list_double2_graphic_pane_g1_ParamLimits

0x523b,	// (0x0002f68f) list_double2_graphic_pane_g1

0x5247,	// (0x0002f69b) list_double2_graphic_pane_g2_ParamLimits

0x5247,	// (0x0002f69b) list_double2_graphic_pane_g2

0x5253,	// (0x0002f6a7) list_double2_graphic_pane_g3_ParamLimits

0x5253,	// (0x0002f6a7) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00039a85) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00039a85) list_double2_graphic_pane_g

0x525f,	// (0x0002f6b3) list_double2_graphic_pane_t1_ParamLimits

0x525f,	// (0x0002f6b3) list_double2_graphic_pane_t1

0x5275,	// (0x0002f6c9) list_double2_graphic_pane_t2_ParamLimits

0x5275,	// (0x0002f6c9) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00039a8c) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00039a8c) list_double2_graphic_pane_t

0x5287,	// (0x0002f6db) list_double_large_graphic_pane_g1_ParamLimits

0x5287,	// (0x0002f6db) list_double_large_graphic_pane_g1

0x52b0,	// (0x0002f704) list_double_large_graphic_pane_g2_ParamLimits

0x52b0,	// (0x0002f704) list_double_large_graphic_pane_g2

0x512d,	// (0x0002f581) list_double_large_graphic_pane_g3_ParamLimits

0x512d,	// (0x0002f581) list_double_large_graphic_pane_g3

0x52c1,	// (0x0002f715) list_double_large_graphic_pane_g4_ParamLimits

0x52c1,	// (0x0002f715) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00039a91) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00039a91) list_double_large_graphic_pane_g

0x52e6,	// (0x0002f73a) list_double_large_graphic_pane_t1_ParamLimits

0x52e6,	// (0x0002f73a) list_double_large_graphic_pane_t1

0x52ff,	// (0x0002f753) list_double_large_graphic_pane_t2_ParamLimits

0x52ff,	// (0x0002f753) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00039a9c) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00039a9c) list_double_large_graphic_pane_t

0x5311,	// (0x0002f765) list_double2_large_graphic_pane_g1_ParamLimits

0x5311,	// (0x0002f765) list_double2_large_graphic_pane_g1

0x531d,	// (0x0002f771) list_double2_large_graphic_pane_g2_ParamLimits

0x531d,	// (0x0002f771) list_double2_large_graphic_pane_g2

0x5253,	// (0x0002f6a7) list_double2_large_graphic_pane_g3_ParamLimits

0x5253,	// (0x0002f6a7) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00039aa1) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00039aa1) list_double2_large_graphic_pane_g

0x532e,	// (0x0002f782) list_double2_large_graphic_pane_t1_ParamLimits

0x532e,	// (0x0002f782) list_double2_large_graphic_pane_t1

0x5344,	// (0x0002f798) list_double2_large_graphic_pane_t2_ParamLimits

0x5344,	// (0x0002f798) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00039aa8) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00039aa8) list_double2_large_graphic_pane_t

0x5356,	// (0x0002f7aa) list_double_heading_pane_g1_ParamLimits

0x5356,	// (0x0002f7aa) list_double_heading_pane_g1

0x5367,	// (0x0002f7bb) list_double_heading_pane_g2_ParamLimits

0x5367,	// (0x0002f7bb) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00039aad) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00039aad) list_double_heading_pane_g

0x5373,	// (0x0002f7c7) list_double_heading_pane_t1_ParamLimits

0x5373,	// (0x0002f7c7) list_double_heading_pane_t1

0x5389,	// (0x0002f7dd) list_double_heading_pane_t2_ParamLimits

0x5389,	// (0x0002f7dd) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00039ab2) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00039ab2) list_double_heading_pane_t

0x523b,	// (0x0002f68f) list_double_graphic_heading_pane_g1_ParamLimits

0x523b,	// (0x0002f68f) list_double_graphic_heading_pane_g1

0x5356,	// (0x0002f7aa) list_double_graphic_heading_pane_g2_ParamLimits

0x5356,	// (0x0002f7aa) list_double_graphic_heading_pane_g2

0x5367,	// (0x0002f7bb) list_double_graphic_heading_pane_g3_ParamLimits

0x5367,	// (0x0002f7bb) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00039ab7) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00039ab7) list_double_graphic_heading_pane_g

0x539b,	// (0x0002f7ef) list_double_graphic_heading_pane_t1_ParamLimits

0x539b,	// (0x0002f7ef) list_double_graphic_heading_pane_t1

0x5275,	// (0x0002f6c9) list_double_graphic_heading_pane_t2_ParamLimits

0x5275,	// (0x0002f6c9) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00039abe) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00039abe) list_double_graphic_heading_pane_t

0x52b0,	// (0x0002f704) list_double_time_pane_g1_ParamLimits

0x52b0,	// (0x0002f704) list_double_time_pane_g1

0x512d,	// (0x0002f581) list_double_time_pane_g2_ParamLimits

0x512d,	// (0x0002f581) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00039ac3) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00039ac3) list_double_time_pane_g

0x53b1,	// (0x0002f805) list_double_time_pane_t1_ParamLimits

0x53b1,	// (0x0002f805) list_double_time_pane_t1

0x53c7,	// (0x0002f81b) list_double_time_pane_t2_ParamLimits

0x53c7,	// (0x0002f81b) list_double_time_pane_t2

0x53d9,	// (0x0002f82d) list_double_time_pane_t3_ParamLimits

0x53d9,	// (0x0002f82d) list_double_time_pane_t3

0x53eb,	// (0x0002f83f) list_double_time_pane_t4_ParamLimits

0x53eb,	// (0x0002f83f) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00039ac8) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00039ac8) list_double_time_pane_t

0x5247,	// (0x0002f69b) list_setting_pane_g1_ParamLimits

0x5247,	// (0x0002f69b) list_setting_pane_g1

0x5253,	// (0x0002f6a7) list_setting_pane_g2_ParamLimits

0x5253,	// (0x0002f6a7) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00039ad1) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00039ad1) list_setting_pane_g

0x53fd,	// (0x0002f851) list_setting_pane_t1_ParamLimits

0x53fd,	// (0x0002f851) list_setting_pane_t1

0x5417,	// (0x0002f86b) list_setting_pane_t2_ParamLimits

0x5417,	// (0x0002f86b) list_setting_pane_t2

0x0002,

0xf682,	// (0x00039ad6) list_setting_pane_t_ParamLimits

0xf682,	// (0x00039ad6) list_setting_pane_t

0x5456,	// (0x0002f8aa) set_value_pane_cp_ParamLimits

0x5456,	// (0x0002f8aa) set_value_pane_cp

0x5462,	// (0x0002f8b6) list_setting_number_pane_g1_ParamLimits

0x5462,	// (0x0002f8b6) list_setting_number_pane_g1

0x546e,	// (0x0002f8c2) list_setting_number_pane_g2_ParamLimits

0x546e,	// (0x0002f8c2) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x00039add) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x00039add) list_setting_number_pane_g

0x547a,	// (0x0002f8ce) list_setting_number_pane_t1_ParamLimits

0x547a,	// (0x0002f8ce) list_setting_number_pane_t1

0x5493,	// (0x0002f8e7) list_setting_number_pane_t2_ParamLimits

0x5493,	// (0x0002f8e7) list_setting_number_pane_t2

0x54ad,	// (0x0002f901) list_setting_number_pane_t3_ParamLimits

0x54ad,	// (0x0002f901) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00039ae2) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00039ae2) list_setting_number_pane_t

0x5456,	// (0x0002f8aa) set_value_pane_ParamLimits

0x5456,	// (0x0002f8aa) set_value_pane

0x8032,	// (0x00032486) bg_set_opt_pane_ParamLimits

0x8032,	// (0x00032486) bg_set_opt_pane

0x54f0,	// (0x0002f944) set_value_pane_t1

0x8053,	// (0x000324a7) slider_set_pane_cp3

0x805c,	// (0x000324b0) volume_small_pane_cp

0x8065,	// (0x000324b9) list_form_gen_pane

0x806e,	// (0x000324c2) scroll_pane_cp8

0x5506,	// (0x0002f95a) form_field_data_pane_ParamLimits

0x5506,	// (0x0002f95a) form_field_data_pane

0x5526,	// (0x0002f97a) form_field_data_wide_pane_ParamLimits

0x5526,	// (0x0002f97a) form_field_data_wide_pane

0x5547,	// (0x0002f99b) form_field_popup_pane_ParamLimits

0x5547,	// (0x0002f99b) form_field_popup_pane

0x5567,	// (0x0002f9bb) form_field_popup_wide_pane_ParamLimits

0x5567,	// (0x0002f9bb) form_field_popup_wide_pane

0x5584,	// (0x0002f9d8) form_field_slider_pane_ParamLimits

0x5584,	// (0x0002f9d8) form_field_slider_pane

0x5597,	// (0x0002f9eb) form_field_slider_wide_pane_ParamLimits

0x5597,	// (0x0002f9eb) form_field_slider_wide_pane

0x807f,	// (0x000324d3) data_form_pane

0x55b4,	// (0x0002fa08) form_field_data_pane_t1

0x808b,	// (0x000324df) input_focus_pane

0x8099,	// (0x000324ed) data_form_wide_pane

0x55d8,	// (0x0002fa2c) form_field_data_wide_pane_t1

0x7dfc,	// (0x00032250) input_focus_pane_cp6

0x55fa,	// (0x0002fa4e) form_field_popup_pane_t1

0x808b,	// (0x000324df) input_focus_pane_cp7

0x80c5,	// (0x00032519) list_form_pane

0x561a,	// (0x0002fa6e) form_field_popup_wide_pane_t1

0x808b,	// (0x000324df) input_focus_pane_cp8

0x80d1,	// (0x00032525) list_form_wide_pane

0x5637,	// (0x0002fa8b) form_field_slider_pane_t1_ParamLimits

0x5637,	// (0x0002fa8b) form_field_slider_pane_t1

0x564d,	// (0x0002faa1) form_field_slider_pane_t2_ParamLimits

0x564d,	// (0x0002faa1) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00039af2) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00039af2) form_field_slider_pane_t

0x7a9a,	// (0x00031eee) input_focus_pane_cp9_ParamLimits

0x7a9a,	// (0x00031eee) input_focus_pane_cp9

0x5662,	// (0x0002fab6) slider_cont_pane_ParamLimits

0x5662,	// (0x0002fab6) slider_cont_pane

0x80e0,	// (0x00032534) form_field_slider_wide_pane_t1_ParamLimits

0x80e0,	// (0x00032534) form_field_slider_wide_pane_t1

0x5676,	// (0x0002faca) form_field_slider_wide_pane_t2_ParamLimits

0x5676,	// (0x0002faca) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00039af7) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00039af7) form_field_slider_wide_pane_t

0x7a9a,	// (0x00031eee) input_focus_pane_cp10_ParamLimits

0x7a9a,	// (0x00031eee) input_focus_pane_cp10

0x5688,	// (0x0002fadc) slider_cont_pane_cp1_ParamLimits

0x5688,	// (0x0002fadc) slider_cont_pane_cp1

0x569c,	// (0x0002faf0) slider_form_pane_cp

0x80f2,	// (0x00032546) input_focus_pane_g1

0x80fa,	// (0x0003254e) input_focus_pane_g2

0x8102,	// (0x00032556) input_focus_pane_g3

0x810a,	// (0x0003255e) input_focus_pane_g4

0x8112,	// (0x00032566) input_focus_pane_g5

0x811a,	// (0x0003256e) input_focus_pane_g6

0x8122,	// (0x00032576) input_focus_pane_g7

0x812a,	// (0x0003257e) input_focus_pane_g8

0x8132,	// (0x00032586) input_focus_pane_g9

0x7735,	// (0x00031b89) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x00039afc) input_focus_pane_g

0xa14f,	// (0x000345a3) wait_border_pane_g3_copy1

0x56a4,	// (0x0002faf8) data_form_pane_t1

0x7735,	// (0x00031b89) wait_anim_pane_g1_copy1

0x701b,	// (0x0003146f) data_form_wide_pane_t1

0x56bf,	// (0x0002fb13) list_form_graphic_pane_cp_ParamLimits

0x56bf,	// (0x0002fb13) list_form_graphic_pane_cp

0xb097,	// (0x000354eb) slider_form_pane_g1

0xb0a0,	// (0x000354f4) slider_form_pane_g2

0x0006,

0xf9a0,	// (0x00039df4) slider_form_pane_g

0x56d8,	// (0x0002fb2c) list_form_graphic_pane_ParamLimits

0x56d8,	// (0x0002fb2c) list_form_graphic_pane

0x56f4,	// (0x0002fb48) list_form_graphic_pane_g1

0x56fc,	// (0x0002fb50) list_form_graphic_pane_t1_ParamLimits

0x56fc,	// (0x0002fb50) list_form_graphic_pane_t1

0x781f,	// (0x00031c73) list_highlight_pane_cp5_ParamLimits

0x781f,	// (0x00031c73) list_highlight_pane_cp5

0x5711,	// (0x0002fb65) find_pane_g1

0x813a,	// (0x0003258e) input_find_pane

0x571a,	// (0x0002fb6e) input_find_pane_g1_ParamLimits

0x571a,	// (0x0002fb6e) input_find_pane_g1

0x5726,	// (0x0002fb7a) input_find_pane_t1_ParamLimits

0x5726,	// (0x0002fb7a) input_find_pane_t1

0x6e6b,	// (0x000312bf) input_find_pane_t2_ParamLimits

0x6e6b,	// (0x000312bf) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00039b11) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00039b11) input_find_pane_t

0x8143,	// (0x00032597) input_focus_pane_cp5_ParamLimits

0x8143,	// (0x00032597) input_focus_pane_cp5

0x815d,	// (0x000325b1) bg_popup_window_pane_cp2_ParamLimits

0x815d,	// (0x000325b1) bg_popup_window_pane_cp2

0x816a,	// (0x000325be) listscroll_menu_pane_ParamLimits

0x816a,	// (0x000325be) listscroll_menu_pane

0x8176,	// (0x000325ca) popup_submenu_window_ParamLimits

0x8176,	// (0x000325ca) popup_submenu_window

0x81a0,	// (0x000325f4) find_popup_pane_g1

0x81a8,	// (0x000325fc) input_popup_find_pane_cp

0x8143,	// (0x00032597) input_focus_pane_cp4_ParamLimits

0x8143,	// (0x00032597) input_focus_pane_cp4

0x81be,	// (0x00032612) input_popup_find_pane_t1_ParamLimits

0x81be,	// (0x00032612) input_popup_find_pane_t1

0x773f,	// (0x00031b93) bg_popup_sub_pane_cp

0x81ec,	// (0x00032640) listscroll_popup_sub_pane

0x81f4,	// (0x00032648) list_submenu_pane_ParamLimits

0x81f4,	// (0x00032648) list_submenu_pane

0x8205,	// (0x00032659) scroll_pane_cp4

0x820d,	// (0x00032661) list_single_popup_submenu_pane_ParamLimits

0x820d,	// (0x00032661) list_single_popup_submenu_pane

0x8221,	// (0x00032675) list_single_popup_submenu_pane_g1

0x8229,	// (0x0003267d) list_single_popup_submenu_pane_t1_ParamLimits

0x8229,	// (0x0003267d) list_single_popup_submenu_pane_t1

0x781f,	// (0x00031c73) bg_active_tab_pane_cp1_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp1

0x823e,	// (0x00032692) tabs_2_active_pane_g1

0x8246,	// (0x0003269a) tabs_2_active_pane_t1

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp1_ParamLimits

0x781f,	// (0x00031c73) bg_passive_tab_pane_cp1

0x823e,	// (0x00032692) tabs_2_passive_pane_g1

0x8246,	// (0x0003269a) tabs_2_passive_pane_t1

0x8258,	// (0x000326ac) bg_active_tab_pane_cp4

0x8266,	// (0x000326ba) tabs_2_long_active_pane_t1

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp4

0x5d76,	// (0x000301ca) list_single_midp_graphic_pane_g4_ParamLimits

0x8258,	// (0x000326ac) bg_active_tab_pane_cp5

0x8285,	// (0x000326d9) tabs_3_long_active_pane_t1

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp5

0x5d76,	// (0x000301ca) list_single_midp_graphic_pane_g4

0x781f,	// (0x00031c73) bg_popup_window_pane_cp13_ParamLimits

0x781f,	// (0x00031c73) bg_popup_window_pane_cp13

0x82a0,	// (0x000326f4) listscroll_popup_fast_pane_ParamLimits

0x82a0,	// (0x000326f4) listscroll_popup_fast_pane

0x82af,	// (0x00032703) grid_popup_fast_pane_ParamLimits

0x82af,	// (0x00032703) grid_popup_fast_pane

0x82c1,	// (0x00032715) scroll_pane_cp9_ParamLimits

0x82c1,	// (0x00032715) scroll_pane_cp9

0xc95e,	// (0x00036db2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc95e,	// (0x00036db2) list_single_graphic_hl_pane_t1_cp2

0x82e5,	// (0x00032739) input_focus_pane_cp20_ParamLimits

0x82e5,	// (0x00032739) input_focus_pane_cp20

0x82f3,	// (0x00032747) query_popup_data_pane_t1_ParamLimits

0x82f3,	// (0x00032747) query_popup_data_pane_t1

0x8306,	// (0x0003275a) query_popup_data_pane_t2_ParamLimits

0x8306,	// (0x0003275a) query_popup_data_pane_t2

0x834c,	// (0x000327a0) query_popup_data_pane_t3_ParamLimits

0x834c,	// (0x000327a0) query_popup_data_pane_t3

0x838d,	// (0x000327e1) query_popup_data_pane_t4_ParamLimits

0x838d,	// (0x000327e1) query_popup_data_pane_t4

0x83c9,	// (0x0003281d) query_popup_data_pane_t5_ParamLimits

0x83c9,	// (0x0003281d) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00039b16) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00039b16) query_popup_data_pane_t

0x80f2,	// (0x00032546) bg_set_opt_pane_g1

0x80fa,	// (0x0003254e) bg_set_opt_pane_g2

0x8102,	// (0x00032556) bg_set_opt_pane_g3

0x810a,	// (0x0003255e) bg_set_opt_pane_g4

0x8112,	// (0x00032566) bg_set_opt_pane_g5

0x811a,	// (0x0003256e) bg_set_opt_pane_g6

0x8122,	// (0x00032576) bg_set_opt_pane_g7

0x812a,	// (0x0003257e) bg_set_opt_pane_g8

0x8132,	// (0x00032586) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00039b21) bg_set_opt_pane_g

0x59da,	// (0x0002fe2e) control_top_pane_stacon_ParamLimits

0x59da,	// (0x0002fe2e) control_top_pane_stacon

0x5a2d,	// (0x0002fe81) signal_pane_stacon_ParamLimits

0x5a2d,	// (0x0002fe81) signal_pane_stacon

0x8989,	// (0x00032ddd) stacon_top_pane_g1_ParamLimits

0x8989,	// (0x00032ddd) stacon_top_pane_g1

0x5a52,	// (0x0002fea6) title_pane_stacon_ParamLimits

0x5a52,	// (0x0002fea6) title_pane_stacon

0x5a7c,	// (0x0002fed0) uni_indicator_pane_stacon_ParamLimits

0x5a7c,	// (0x0002fed0) uni_indicator_pane_stacon

0x5a91,	// (0x0002fee5) battery_pane_stacon_ParamLimits

0x5a91,	// (0x0002fee5) battery_pane_stacon

0x5ad5,	// (0x0002ff29) control_bottom_pane_stacon_ParamLimits

0x5ad5,	// (0x0002ff29) control_bottom_pane_stacon

0x5af8,	// (0x0002ff4c) navi_pane_stacon_ParamLimits

0x5af8,	// (0x0002ff4c) navi_pane_stacon

0x89ab,	// (0x00032dff) stacon_bottom_pane_g1_ParamLimits

0x89ab,	// (0x00032dff) stacon_bottom_pane_g1

0x573b,	// (0x0002fb8f) aid_levels_signal_lsc_ParamLimits

0x573b,	// (0x0002fb8f) aid_levels_signal_lsc

0x5752,	// (0x0002fba6) signal_pane_stacon_g1_ParamLimits

0x5752,	// (0x0002fba6) signal_pane_stacon_g1

0x5766,	// (0x0002fbba) signal_pane_stacon_g2_ParamLimits

0x5766,	// (0x0002fbba) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00039b34) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00039b34) signal_pane_stacon_g

0x579b,	// (0x0002fbef) title_pane_stacon_t1_ParamLimits

0x579b,	// (0x0002fbef) title_pane_stacon_t1

0x840d,	// (0x00032861) uni_indicator_pane_stacon_g1

0x8417,	// (0x0003286b) uni_indicator_pane_stacon_g2

0x8421,	// (0x00032875) uni_indicator_pane_stacon_g3

0x842b,	// (0x0003287f) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00039b40) uni_indicator_pane_stacon_g

0x57c0,	// (0x0002fc14) control_top_pane_stacon_g1

0x57c8,	// (0x0002fc1c) control_top_pane_stacon_t1_ParamLimits

0x57c8,	// (0x0002fc1c) control_top_pane_stacon_t1

0x57ff,	// (0x0002fc53) aid_levels_battery_lsc_ParamLimits

0x57ff,	// (0x0002fc53) aid_levels_battery_lsc

0x5817,	// (0x0002fc6b) battery_pane_stacon_g1_ParamLimits

0x5817,	// (0x0002fc6b) battery_pane_stacon_g1

0x582a,	// (0x0002fc7e) battery_pane_stacon_g2_ParamLimits

0x582a,	// (0x0002fc7e) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x00039b49) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x00039b49) battery_pane_stacon_g

0x5868,	// (0x0002fcbc) navi_icon_pane_stacon

0x587c,	// (0x0002fcd0) navi_navi_pane_stacon

0x5868,	// (0x0002fcbc) navi_text_pane_stacon

0x57c0,	// (0x0002fc14) control_bottom_pane_stacon_g1

0x5890,	// (0x0002fce4) control_bottom_pane_stacon_t1_ParamLimits

0x5890,	// (0x0002fce4) control_bottom_pane_stacon_t1

0x844f,	// (0x000328a3) grid_app_pane_ParamLimits

0x844f,	// (0x000328a3) grid_app_pane

0x8473,	// (0x000328c7) scroll_pane_cp15_ParamLimits

0x8473,	// (0x000328c7) scroll_pane_cp15

0x8488,	// (0x000328dc) cell_app_pane_ParamLimits

0x8488,	// (0x000328dc) cell_app_pane

0x84ac,	// (0x00032900) cell_app_pane_g1_ParamLimits

0x84ac,	// (0x00032900) cell_app_pane_g1

0x84d0,	// (0x00032924) cell_app_pane_g2_ParamLimits

0x84d0,	// (0x00032924) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x00039b4e) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x00039b4e) cell_app_pane_g

0x84dc,	// (0x00032930) cell_app_pane_t1_ParamLimits

0x84dc,	// (0x00032930) cell_app_pane_t1

0x84f3,	// (0x00032947) grid_highlight_pane_ParamLimits

0x84f3,	// (0x00032947) grid_highlight_pane

0x80f2,	// (0x00032546) cell_highlight_pane_g1

0x80fa,	// (0x0003254e) cell_highlight_pane_g2

0x8102,	// (0x00032556) cell_highlight_pane_g3

0x810a,	// (0x0003255e) cell_highlight_pane_g4

0x8112,	// (0x00032566) cell_highlight_pane_g5

0x811a,	// (0x0003256e) cell_highlight_pane_g6

0x8122,	// (0x00032576) cell_highlight_pane_g7

0x812a,	// (0x0003257e) cell_highlight_pane_g8

0x8132,	// (0x00032586) cell_highlight_pane_g9

0x7735,	// (0x00031b89) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x00039afc) cell_highlight_pane_g

0x8504,	// (0x00032958) bg_scroll_pane

0x58da,	// (0x0002fd2e) scroll_handle_pane

0x854b,	// (0x0003299f) scroll_bg_pane_g1

0x8560,	// (0x000329b4) scroll_bg_pane_g2

0x8578,	// (0x000329cc) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00039b53) scroll_bg_pane_g

0x858d,	// (0x000329e1) scroll_handle_focus_pane_ParamLimits

0x858d,	// (0x000329e1) scroll_handle_focus_pane

0x854b,	// (0x0003299f) scroll_handle_pane_g1

0x859a,	// (0x000329ee) scroll_handle_pane_g2

0x8578,	// (0x000329cc) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x00039b5a) scroll_handle_pane_g

0x8143,	// (0x00032597) bg_popup_sub_pane_cp21_ParamLimits

0x8143,	// (0x00032597) bg_popup_sub_pane_cp21

0x85ae,	// (0x00032a02) popup_fep_japan_predictive_window_t1_ParamLimits

0x85ae,	// (0x00032a02) popup_fep_japan_predictive_window_t1

0x85c8,	// (0x00032a1c) popup_fep_japan_predictive_window_t2_ParamLimits

0x85c8,	// (0x00032a1c) popup_fep_japan_predictive_window_t2

0x85fb,	// (0x00032a4f) popup_fep_japan_predictive_window_t3_ParamLimits

0x85fb,	// (0x00032a4f) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x00039b61) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x00039b61) popup_fep_japan_predictive_window_t

0x773f,	// (0x00031b93) bg_popup_sub_pane_cp23

0x8632,	// (0x00032a86) listscroll_japin_cand_pane

0x863a,	// (0x00032a8e) popup_fep_japan_candidate_window_t1

0x8648,	// (0x00032a9c) candidate_pane_ParamLimits

0x8648,	// (0x00032a9c) candidate_pane

0x865a,	// (0x00032aae) scroll_pane_cp30

0x8662,	// (0x00032ab6) list_single_popup_jap_candidate_pane_ParamLimits

0x8662,	// (0x00032ab6) list_single_popup_jap_candidate_pane

0x773f,	// (0x00031b93) list_highlight_pane_cp30

0x8677,	// (0x00032acb) list_single_popup_jap_candidate_pane_t1

0x8686,	// (0x00032ada) level_1_signal

0x8693,	// (0x00032ae7) level_2_signal

0x86a0,	// (0x00032af4) level_3_signal

0x86ad,	// (0x00032b01) level_4_signal

0x86ba,	// (0x00032b0e) level_5_signal

0x86c7,	// (0x00032b1b) level_6_signal

0x86d4,	// (0x00032b28) level_7_signal

0x8686,	// (0x00032ada) level_1_battery

0x8693,	// (0x00032ae7) level_2_battery

0x86a0,	// (0x00032af4) level_3_battery

0x86ad,	// (0x00032b01) level_4_battery

0x86ba,	// (0x00032b0e) level_5_battery

0x86c7,	// (0x00032b1b) level_6_battery

0x86d4,	// (0x00032b28) level_7_battery

0x871b,	// (0x00032b6f) list_menu_pane_ParamLimits

0x871b,	// (0x00032b6f) list_menu_pane

0x872c,	// (0x00032b80) scroll_pane_cp25_ParamLimits

0x872c,	// (0x00032b80) scroll_pane_cp25

0x8745,	// (0x00032b99) list_double2_graphic_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double2_graphic_pane_cp2

0x8745,	// (0x00032b99) list_double2_large_graphic_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double2_large_graphic_pane_cp2

0x8745,	// (0x00032b99) list_double2_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double2_pane_cp2

0x8745,	// (0x00032b99) list_double_graphic_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double_graphic_pane_cp2

0x8745,	// (0x00032b99) list_double_large_graphic_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double_large_graphic_pane_cp2

0x8745,	// (0x00032b99) list_double_number_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double_number_pane_cp2

0x8745,	// (0x00032b99) list_double_pane_cp2_ParamLimits

0x8745,	// (0x00032b99) list_double_pane_cp2

0x8769,	// (0x00032bbd) list_single_2graphic_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_2graphic_pane_cp2

0x8769,	// (0x00032bbd) list_single_graphic_heading_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_graphic_heading_pane_cp2

0x8769,	// (0x00032bbd) list_single_graphic_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_graphic_pane_cp2

0x8769,	// (0x00032bbd) list_single_heading_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_heading_pane_cp2

0x8782,	// (0x00032bd6) list_single_large_graphic_pane_cp2_ParamLimits

0x8782,	// (0x00032bd6) list_single_large_graphic_pane_cp2

0x8769,	// (0x00032bbd) list_single_number_heading_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_number_heading_pane_cp2

0x8769,	// (0x00032bbd) list_single_number_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_number_pane_cp2

0x8769,	// (0x00032bbd) list_single_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_pane_cp2

0x87d8,	// (0x00032c2c) bg_popup_sub_pane_cp22

0x598c,	// (0x0002fde0) popup_side_volume_key_window_g1

0x59b6,	// (0x0002fe0a) popup_side_volume_key_window_t1

0x59d2,	// (0x0002fe26) volume_small_pane_cp1

0x7a9a,	// (0x00031eee) bg_popup_sub_pane_cp24_ParamLimits

0x7a9a,	// (0x00031eee) bg_popup_sub_pane_cp24

0x87ee,	// (0x00032c42) fep_china_uni_candidate_pane_ParamLimits

0x87ee,	// (0x00032c42) fep_china_uni_candidate_pane

0x8802,	// (0x00032c56) fep_china_uni_entry_pane

0x8812,	// (0x00032c66) popup_fep_china_uni_window_g1

0x882e,	// (0x00032c82) fep_china_uni_entry_pane_g1

0x8836,	// (0x00032c8a) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x00039b8e) fep_china_uni_entry_pane_g

0x883e,	// (0x00032c92) fep_entry_item_pane

0x8848,	// (0x00032c9c) fep_candidate_item_pane

0x8850,	// (0x00032ca4) fep_china_uni_candidate_pane_g1

0x8858,	// (0x00032cac) fep_china_uni_candidate_pane_g2

0x8860,	// (0x00032cb4) fep_china_uni_candidate_pane_g3

0x8868,	// (0x00032cbc) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x00039b93) fep_china_uni_candidate_pane_g

0x7735,	// (0x00031b89) fep_entry_item_pane_g1

0x8870,	// (0x00032cc4) fep_entry_item_pane_t1_ParamLimits

0x8870,	// (0x00032cc4) fep_entry_item_pane_t1

0x8886,	// (0x00032cda) fep_candidate_item_pane_t1_ParamLimits

0x8886,	// (0x00032cda) fep_candidate_item_pane_t1

0x889b,	// (0x00032cef) fep_candidate_item_pane_t2_ParamLimits

0x889b,	// (0x00032cef) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x00039b9c) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x00039b9c) fep_candidate_item_pane_t

0x781f,	// (0x00031c73) list_highlight_pane_cp31_ParamLimits

0x781f,	// (0x00031c73) list_highlight_pane_cp31

0x88ad,	// (0x00032d01) level_1_signal_lsc

0x88b6,	// (0x00032d0a) level_2_signal_lsc

0x88bf,	// (0x00032d13) level_3_signal_lsc

0x88c8,	// (0x00032d1c) level_4_signal_lsc

0x88d1,	// (0x00032d25) level_5_signal_lsc

0x88da,	// (0x00032d2e) level_6_signal_lsc

0x88e3,	// (0x00032d37) level_7_signal_lsc

0x88e3,	// (0x00032d37) level_1_battery_lsc

0x88ec,	// (0x00032d40) level_2_battery_lsc

0x88f5,	// (0x00032d49) level_3_battery_lsc

0x88fe,	// (0x00032d52) level_4_battery_lsc

0x8907,	// (0x00032d5b) level_5_battery_lsc

0x8910,	// (0x00032d64) level_6_battery_lsc

0x88ad,	// (0x00032d01) level_7_battery_lsc

0x8919,	// (0x00032d6d) scroll_handle_focus_pane_g1

0x8922,	// (0x00032d76) scroll_handle_focus_pane_g2

0x892b,	// (0x00032d7f) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x00039ba1) scroll_handle_focus_pane_g

0x6e80,	// (0x000312d4) list_single_2graphic_pane_g1_ParamLimits

0x6e80,	// (0x000312d4) list_single_2graphic_pane_g1

0x50bc,	// (0x0002f510) list_single_2graphic_pane_g2_ParamLimits

0x50bc,	// (0x0002f510) list_single_2graphic_pane_g2

0x5042,	// (0x0002f496) list_single_2graphic_pane_g3_ParamLimits

0x5042,	// (0x0002f496) list_single_2graphic_pane_g3

0x6e8c,	// (0x000312e0) list_single_2graphic_pane_g4_ParamLimits

0x6e8c,	// (0x000312e0) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x00039ba8) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x00039ba8) list_single_2graphic_pane_g

0x6e98,	// (0x000312ec) list_single_2graphic_pane_t1_ParamLimits

0x6e98,	// (0x000312ec) list_single_2graphic_pane_t1

0x6ec6,	// (0x0003131a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6ec6,	// (0x0003131a) list_double2_graphic_large_graphic_pane_g1

0x531d,	// (0x0002f771) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x531d,	// (0x0002f771) list_double2_graphic_large_graphic_pane_g2

0x5253,	// (0x0002f6a7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5253,	// (0x0002f6a7) list_double2_graphic_large_graphic_pane_g3

0x6ed6,	// (0x0003132a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6ed6,	// (0x0003132a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x00039bb1) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x00039bb1) list_double2_graphic_large_graphic_pane_g

0x6ee2,	// (0x00031336) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6ee2,	// (0x00031336) list_double2_graphic_large_graphic_pane_t1

0x6ef8,	// (0x0003134c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6ef8,	// (0x0003134c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x00039bba) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x00039bba) list_double2_graphic_large_graphic_pane_t

0x8a73,	// (0x00032ec7) popup_fast_swap_window_ParamLimits

0x8a73,	// (0x00032ec7) popup_fast_swap_window

0x8a8f,	// (0x00032ee3) popup_side_volume_key_window

0x8aab,	// (0x00032eff) stacon_top_pane

0x8ab5,	// (0x00032f09) status_pane_ParamLimits

0x8ab5,	// (0x00032f09) status_pane

0x8aab,	// (0x00032eff) status_small_pane

0x773f,	// (0x00031b93) control_pane

0x773f,	// (0x00031b93) stacon_bottom_pane

0x806e,	// (0x000324c2) scroll_pane_cp121

0x8065,	// (0x000324b9) set_content_pane

0x8934,	// (0x00032d88) bg_active_tab_pane_g1_cp1

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp1

0x8946,	// (0x00032d9a) bg_active_tab_pane_g3_cp1

0x8934,	// (0x00032d88) bg_passive_tab_pane_g1_cp1

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp1

0x8946,	// (0x00032d9a) bg_passive_tab_pane_g3_cp1

0x894f,	// (0x00032da3) bg_active_tab_pane_g1_cp2

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp2

0x8958,	// (0x00032dac) bg_active_tab_pane_g3_cp2

0x894f,	// (0x00032da3) bg_passive_tab_pane_g1_cp2

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp2

0x8958,	// (0x00032dac) bg_passive_tab_pane_g3_cp2

0x8961,	// (0x00032db5) bg_active_tab_pane_g1_cp3

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp3

0x896a,	// (0x00032dbe) bg_active_tab_pane_g3_cp3

0x8961,	// (0x00032db5) bg_passive_tab_pane_g1_cp3

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp3

0x896a,	// (0x00032dbe) bg_passive_tab_pane_g3_cp3

0x8973,	// (0x00032dc7) bg_active_tab_pane_g1_cp4

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp4

0x897e,	// (0x00032dd2) bg_active_tab_pane_g3_cp4

0x8973,	// (0x00032dc7) bg_passive_tab_pane_g1_cp4

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp4

0x897e,	// (0x00032dd2) bg_passive_tab_pane_g3_cp4

0x89c7,	// (0x00032e1b) bg_active_tab_pane_g1_cp5

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp5

0x89d0,	// (0x00032e24) bg_active_tab_pane_g3_cp5

0x89c7,	// (0x00032e1b) bg_passive_tab_pane_g1_cp5

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp5

0x89d0,	// (0x00032e24) bg_passive_tab_pane_g3_cp5

0x89d9,	// (0x00032e2d) list_set_graphic_pane_ParamLimits

0x89d9,	// (0x00032e2d) list_set_graphic_pane

0x773f,	// (0x00031b93) bg_set_opt_pane_cp4

0x89f6,	// (0x00032e4a) list_set_graphic_pane_g1_ParamLimits

0x89f6,	// (0x00032e4a) list_set_graphic_pane_g1

0x8a02,	// (0x00032e56) list_set_graphic_pane_g2_ParamLimits

0x8a02,	// (0x00032e56) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00039bbf) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00039bbf) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00039f30) volume_small_pane_cp_g

0x8a26,	// (0x00032e7a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a26,	// (0x00032e7a) list_double2_large_graphic_pane_g1_cp2

0x8a32,	// (0x00032e86) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a32,	// (0x00032e86) list_double2_large_graphic_pane_g2_cp2

0x8a43,	// (0x00032e97) list_double2_large_graphic_pane_g3_cp2

0x8a4b,	// (0x00032e9f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a4b,	// (0x00032e9f) list_double2_large_graphic_pane_t1_cp2

0x8a61,	// (0x00032eb5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a61,	// (0x00032eb5) list_double2_large_graphic_pane_t2_cp2

0xac34,	// (0x00035088) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac34,	// (0x00035088) list_double_large_graphic_pane_g1_cp2

0xac45,	// (0x00035099) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac45,	// (0x00035099) list_double_large_graphic_pane_g2_cp2

0x8bd1,	// (0x00033025) list_double_large_graphic_pane_g3_cp2

0xac56,	// (0x000350aa) list_double_large_graphic_pane_g4_cp

0xac5e,	// (0x000350b2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac5e,	// (0x000350b2) list_double_large_graphic_pane_t1_cp2

0xac75,	// (0x000350c9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac75,	// (0x000350c9) list_double_large_graphic_pane_t2_cp2

0x8ac3,	// (0x00032f17) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ac3,	// (0x00032f17) list_double2_graphic_pane_g1_cp2

0x8ad1,	// (0x00032f25) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8ad1,	// (0x00032f25) list_double2_graphic_pane_g2_cp2

0x8ae2,	// (0x00032f36) list_double2_graphic_pane_g3_cp2

0x8aec,	// (0x00032f40) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8aec,	// (0x00032f40) list_double2_graphic_pane_t1_cp2

0x8b02,	// (0x00032f56) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b02,	// (0x00032f56) list_double2_graphic_pane_t2_cp2

0x8b14,	// (0x00032f68) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b14,	// (0x00032f68) list_single_number_heading_pane_g1_cp2

0x8b20,	// (0x00032f74) list_single_number_heading_pane_g2_cp2

0x8b28,	// (0x00032f7c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b28,	// (0x00032f7c) list_single_number_heading_pane_t1_cp2

0x8b3e,	// (0x00032f92) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b3e,	// (0x00032f92) list_single_number_heading_pane_t2_cp2

0x8b50,	// (0x00032fa4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b50,	// (0x00032fa4) list_single_number_heading_pane_t3_cp2

0x8b14,	// (0x00032f68) list_single_heading_pane_g1_cp2_ParamLimits

0x8b14,	// (0x00032f68) list_single_heading_pane_g1_cp2

0x8b20,	// (0x00032f74) list_single_heading_pane_g2_cp2

0x8b28,	// (0x00032f7c) list_single_heading_pane_t1_cp2_ParamLimits

0x8b28,	// (0x00032f7c) list_single_heading_pane_t1_cp2

0xaa3c,	// (0x00034e90) list_single_heading_pane_t2_cp2_ParamLimits

0xaa3c,	// (0x00034e90) list_single_heading_pane_t2_cp2

0xa97e,	// (0x00034dd2) list_double_graphic_pane_g1_cp2_ParamLimits

0xa97e,	// (0x00034dd2) list_double_graphic_pane_g1_cp2

0xa98a,	// (0x00034dde) list_double_graphic_pane_g2_cp2_ParamLimits

0xa98a,	// (0x00034dde) list_double_graphic_pane_g2_cp2

0xa999,	// (0x00034ded) list_double_graphic_pane_g3_cp2

0xa9a1,	// (0x00034df5) list_double_graphic_pane_t1_cp2_ParamLimits

0xa9a1,	// (0x00034df5) list_double_graphic_pane_t1_cp2

0xa9b7,	// (0x00034e0b) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9b7,	// (0x00034e0b) list_double_graphic_pane_t2_cp2

0x8bc5,	// (0x00033019) list_double_number_pane_g1_cp2_ParamLimits

0x8bc5,	// (0x00033019) list_double_number_pane_g1_cp2

0x8bd1,	// (0x00033025) list_double_number_pane_g2_cp2

0xa942,	// (0x00034d96) list_double_number_pane_t1_cp2_ParamLimits

0xa942,	// (0x00034d96) list_double_number_pane_t1_cp2

0xa956,	// (0x00034daa) list_double_number_pane_t2_cp2_ParamLimits

0xa956,	// (0x00034daa) list_double_number_pane_t2_cp2

0xa96c,	// (0x00034dc0) list_double_number_pane_t3_cp2_ParamLimits

0xa96c,	// (0x00034dc0) list_double_number_pane_t3_cp2

0xa82b,	// (0x00034c7f) list_single_graphic_pane_g1_cp2_ParamLimits

0xa82b,	// (0x00034c7f) list_single_graphic_pane_g1_cp2

0x8c29,	// (0x0003307d) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c29,	// (0x0003307d) list_single_graphic_pane_g2_cp2

0x8c35,	// (0x00033089) list_single_graphic_pane_g3_cp2

0xa801,	// (0x00034c55) list_single_graphic_pane_t1_cp2_ParamLimits

0xa801,	// (0x00034c55) list_single_graphic_pane_t1_cp2

0x8c29,	// (0x0003307d) list_single_number_pane_g1_cp2_ParamLimits

0x8c29,	// (0x0003307d) list_single_number_pane_g1_cp2

0x8c35,	// (0x00033089) list_single_number_pane_g2_cp2

0xa801,	// (0x00034c55) list_single_number_pane_t1_cp2_ParamLimits

0xa801,	// (0x00034c55) list_single_number_pane_t1_cp2

0xa817,	// (0x00034c6b) list_single_number_pane_t2_cp2_ParamLimits

0xa817,	// (0x00034c6b) list_single_number_pane_t2_cp2

0x8a32,	// (0x00032e86) list_double2_pane_g1_cp2_ParamLimits

0x8a32,	// (0x00032e86) list_double2_pane_g1_cp2

0x8a43,	// (0x00032e97) list_double2_pane_g2_cp2

0x8b9d,	// (0x00032ff1) list_double2_pane_t1_cp2_ParamLimits

0x8b9d,	// (0x00032ff1) list_double2_pane_t1_cp2

0x8bb3,	// (0x00033007) list_double2_pane_t2_cp2_ParamLimits

0x8bb3,	// (0x00033007) list_double2_pane_t2_cp2

0x8bc5,	// (0x00033019) list_double_pane_g1_cp2_ParamLimits

0x8bc5,	// (0x00033019) list_double_pane_g1_cp2

0x8bd1,	// (0x00033025) list_double_pane_g2_cp2

0x8bd9,	// (0x0003302d) list_double_pane_t1_cp2_ParamLimits

0x8bd9,	// (0x0003302d) list_double_pane_t1_cp2

0x8bef,	// (0x00033043) list_double_pane_t2_cp2_ParamLimits

0x8bef,	// (0x00033043) list_double_pane_t2_cp2

0x8c19,	// (0x0003306d) list_single_pane_cp2_g3

0x8c29,	// (0x0003307d) list_single_pane_g1_cp2_ParamLimits

0x8c29,	// (0x0003307d) list_single_pane_g1_cp2

0x8c35,	// (0x00033089) list_single_pane_g2_cp2

0x8c3d,	// (0x00033091) list_single_pane_t1_cp2_ParamLimits

0x8c3d,	// (0x00033091) list_single_pane_t1_cp2

0x8c55,	// (0x000330a9) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c55,	// (0x000330a9) list_single_large_graphic_pane_g1_cp2

0x8c61,	// (0x000330b5) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c61,	// (0x000330b5) list_single_large_graphic_pane_g2_cp2

0x8c6d,	// (0x000330c1) list_single_large_graphic_pane_g3_cp2

0x8c75,	// (0x000330c9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c75,	// (0x000330c9) list_single_large_graphic_pane_g4_cp1

0x8c8f,	// (0x000330e3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c8f,	// (0x000330e3) list_single_large_graphic_pane_t1_cp2

0xa7cd,	// (0x00034c21) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7cd,	// (0x00034c21) list_single_graphic_heading_pane_g1_cp2

0xa79a,	// (0x00034bee) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa79a,	// (0x00034bee) list_single_graphic_heading_pane_g4_cp2

0x8c35,	// (0x00033089) list_single_graphic_heading_pane_g5_cp2

0xa7d9,	// (0x00034c2d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa7d9,	// (0x00034c2d) list_single_graphic_heading_pane_t1_cp2

0xa7ef,	// (0x00034c43) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7ef,	// (0x00034c43) list_single_graphic_heading_pane_t2_cp2

0xa78e,	// (0x00034be2) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa78e,	// (0x00034be2) list_single_2graphic_pane_g1_cp2

0xa79a,	// (0x00034bee) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa79a,	// (0x00034bee) list_single_2graphic_pane_g2_cp2

0x8c35,	// (0x00033089) list_single_2graphic_pane_g3_cp2

0xa7ab,	// (0x00034bff) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa7ab,	// (0x00034bff) list_single_2graphic_pane_g4_cp2

0xa7b7,	// (0x00034c0b) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7b7,	// (0x00034c0b) list_single_2graphic_pane_t1_cp2

0x7735,	// (0x00031b89) list_highlight_pane_g10_cp1

0xa35a,	// (0x000347ae) list_highlight_pane_g1_cp1

0xa362,	// (0x000347b6) list_highlight_pane_g2_cp1

0xa36a,	// (0x000347be) list_highlight_pane_g3_cp1

0xa372,	// (0x000347c6) list_highlight_pane_g4_cp1

0xa37a,	// (0x000347ce) list_highlight_pane_g5_cp1

0xa382,	// (0x000347d6) list_highlight_pane_g6_cp1

0xa38a,	// (0x000347de) list_highlight_pane_g7_cp1

0xa392,	// (0x000347e6) list_highlight_pane_g8_cp1

0xa39a,	// (0x000347ee) list_highlight_pane_g9_cp1

0xa27a,	// (0x000346ce) form_field_slider_pane_t3

0xa288,	// (0x000346dc) form_field_slider_pane_t4

0xa296,	// (0x000346ea) slider_form_pane_ParamLimits

0xa296,	// (0x000346ea) slider_form_pane

0x773f,	// (0x00031b93) control_abbreviations

0x773f,	// (0x00031b93) control_conventions

0x773f,	// (0x00031b93) control_definitions

0x773f,	// (0x00031b93) format_table_attribute

0xaa86,	// (0x00034eda) bg_popup_preview_window_pane_g9

0x773f,	// (0x00031b93) format_table_data2

0x773f,	// (0x00031b93) format_table_data3

0x773f,	// (0x00031b93) format_table_data_example

0x0008,

0x773f,	// (0x00031b93) intro_purpose

0xf900,	// (0x00039d54) bg_popup_preview_window_pane_g

0x773f,	// (0x00031b93) texts_category

0x773f,	// (0x00031b93) texts_graphics

0x8ca5,	// (0x000330f9) text_digital

0x8cb4,	// (0x00033108) text_primary

0x8cc3,	// (0x00033117) text_primary_small

0x8cd2,	// (0x00033126) text_secondary

0x8ce1,	// (0x00033135) text_title

0xb1ae,	// (0x00035602) bg_passive_tab_pane_g1_cp3_srt

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp3_srt

0xb1b7,	// (0x0003560b) bg_passive_tab_pane_g3_cp3_srt

0x781f,	// (0x00031c73) bg_active_tab_pane_cp3_srt_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp3_srt

0xb1c0,	// (0x00035614) tabs_4_active_pane_srt_g1

0xb1c8,	// (0x0003561c) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c8,	// (0x0003561c) tabs_4_active_pane_srt_t1

0xb1ae,	// (0x00035602) bg_active_tab_pane_g1_cp3_copy1

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp3_copy1

0xb1b7,	// (0x0003560b) bg_active_tab_pane_g3_cp3_copy1

0x781f,	// (0x00031c73) tabs_2_long_active_pane_srt_ParamLimits

0x781f,	// (0x00031c73) tabs_2_long_active_pane_srt

0x781f,	// (0x00031c73) tabs_2_long_passive_pane_srt_ParamLimits

0x781f,	// (0x00031c73) tabs_2_long_passive_pane_srt

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp4_srt

0xaeca,	// (0x0003531e) bg_passive_tab_pane_g1_cp4_srt

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp4_srt

0xaed3,	// (0x00035327) bg_passive_tab_pane_g3_cp4_srt

0x8258,	// (0x000326ac) bg_active_tab_pane_cp4_srt_ParamLimits

0x8258,	// (0x000326ac) bg_active_tab_pane_cp4_srt

0xaedc,	// (0x00035330) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaedc,	// (0x00035330) tabs_2_long_active_pane_srt_t1

0xaeca,	// (0x0003531e) bg_active_tab_pane_g1_cp4_srt

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp4_srt

0xaed3,	// (0x00035327) bg_active_tab_pane_g3_cp4_srt

0x7a9a,	// (0x00031eee) tabs_3_long_active_pane_srt_ParamLimits

0x7a9a,	// (0x00031eee) tabs_3_long_active_pane_srt

0x7a9a,	// (0x00031eee) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7a9a,	// (0x00031eee) tabs_3_long_passive_pane_cp_srt

0x7a9a,	// (0x00031eee) tabs_3_long_passive_pane_srt_ParamLimits

0x7a9a,	// (0x00031eee) tabs_3_long_passive_pane_srt

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp5_srt

0x89c7,	// (0x00032e1b) bg_passive_tab_pane_g1_cp5_srt

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp5_srt

0x89d0,	// (0x00032e24) bg_passive_tab_pane_g3_cp5_srt

0x8258,	// (0x000326ac) bg_active_tab_pane_cp5_srt_ParamLimits

0x8258,	// (0x000326ac) bg_active_tab_pane_cp5_srt

0xaeb8,	// (0x0003530c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaeb8,	// (0x0003530c) tabs_3_long_active_pane_srt_t1

0x89c7,	// (0x00032e1b) bg_active_tab_pane_g1_cp5_srt

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp5_srt

0x89d0,	// (0x00032e24) bg_active_tab_pane_g3_cp5_srt

0xaeaa,	// (0x000352fe) navi_text_pane_srt_t1

0xaea2,	// (0x000352f6) navi_icon_pane_srt_g1

0x8eb4,	// (0x00033308) midp_editing_number_pane_srt

0x8cf0,	// (0x00033144) midp_ticker_pane_srt

0x8ebc,	// (0x00033310) midp_ticker_pane_srt_g1

0x8ec4,	// (0x00033318) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x00039bde) midp_ticker_pane_srt_g

0x8ecc,	// (0x00033320) midp_ticker_pane_srt_t1

0xae93,	// (0x000352e7) midp_editing_number_pane_t1_copy1

0x8cf8,	// (0x0003314c) listscroll_midp_pane

0x8cf8,	// (0x0003314c) midp_form_pane

0x8d66,	// (0x000331ba) midp_info_popup_window_ParamLimits

0x8d66,	// (0x000331ba) midp_info_popup_window

0x8143,	// (0x00032597) bg_popup_sub_pane_cp50_ParamLimits

0x8143,	// (0x00032597) bg_popup_sub_pane_cp50

0x9f92,	// (0x000343e6) listscroll_midp_info_pane_ParamLimits

0x9f92,	// (0x000343e6) listscroll_midp_info_pane

0x9f7a,	// (0x000343ce) listscroll_form_midp_pane_ParamLimits

0x9f7a,	// (0x000343ce) listscroll_form_midp_pane

0x9f86,	// (0x000343da) scroll_bar_cp050

0x9f5a,	// (0x000343ae) list_midp_pane

0xbbca,	// (0x0003601e) signal_pane_g2_cp

0x9e94,	// (0x000342e8) listscroll_midp_info_pane_t1_ParamLimits

0x9e94,	// (0x000342e8) listscroll_midp_info_pane_t1

0x9eac,	// (0x00034300) listscroll_midp_info_pane_t2_ParamLimits

0x9eac,	// (0x00034300) listscroll_midp_info_pane_t2

0x9eea,	// (0x0003433e) listscroll_midp_info_pane_t3_ParamLimits

0x9eea,	// (0x0003433e) listscroll_midp_info_pane_t3

0x9f24,	// (0x00034378) listscroll_midp_info_pane_t4_ParamLimits

0x9f24,	// (0x00034378) listscroll_midp_info_pane_t4

0x0003,

0xf83b,	// (0x00039c8f) listscroll_midp_info_pane_t_ParamLimits

0xf83b,	// (0x00039c8f) listscroll_midp_info_pane_t

0x8205,	// (0x00032659) scroll_pane_cp21

0x9e32,	// (0x00034286) form_midp_field_choice_group_pane

0x9e3b,	// (0x0003428f) form_midp_field_text_pane

0x9e7a,	// (0x000342ce) form_midp_field_time_pane

0x9e82,	// (0x000342d6) form_midp_gauge_slider_pane

0x9e8b,	// (0x000342df) form_midp_gauge_wait_pane

0x773f,	// (0x00031b93) form_midp_image_pane

0x6fc1,	// (0x00031415) list_single_midp_pane_ParamLimits

0x6fc1,	// (0x00031415) list_single_midp_pane

0x9dea,	// (0x0003423e) form_midp_field_text_pane_t1

0x9bdc,	// (0x00034030) input_focus_pane_cp050

0x9e21,	// (0x00034275) list_midp_form_text_pane

0x9db9,	// (0x0003420d) form_midp_field_choice_group_pane_t1

0x9dc7,	// (0x0003421b) input_focus_pane_cp051

0x9ddb,	// (0x0003422f) list_midp_choice_pane

0x773f,	// (0x00031b93) status_idle_pane

0x9d9d,	// (0x000341f1) form_midp_field_time_pane_t1

0x7735,	// (0x00031b89) wait_anim_pane_g2_copy1

0x9dab,	// (0x000341ff) form_midp_field_time_pane_t2

0x0001,

0x8e14,	// (0x00033268) aid_navinavi_width_2_pane

0xf836,	// (0x00039c8a) form_midp_field_time_pane_t

0x773f,	// (0x00031b93) input_focus_pane_cp052

0x773f,	// (0x00031b93) bg_input_focus_pane_cp040

0x9d5d,	// (0x000341b1) form_midp_gauge_slider_pane_t1

0x9d6b,	// (0x000341bf) form_midp_gauge_slider_pane_t2

0x9d79,	// (0x000341cd) form_midp_gauge_slider_pane_t3

0x9d87,	// (0x000341db) form_midp_gauge_slider_pane_t4

0x0003,

0xf82d,	// (0x00039c81) form_midp_gauge_slider_pane_t

0x9d95,	// (0x000341e9) form_midp_slider_pane

0x781f,	// (0x00031c73) bg_input_focus_pane_cp041_ParamLimits

0x781f,	// (0x00031c73) bg_input_focus_pane_cp041

0x9d2a,	// (0x0003417e) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d2a,	// (0x0003417e) form_midp_gauge_wait_pane_t1

0x9d3c,	// (0x00034190) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d3c,	// (0x00034190) form_midp_gauge_wait_pane_t2

0x0001,

0xf828,	// (0x00039c7c) form_midp_gauge_wait_pane_t_ParamLimits

0xf828,	// (0x00039c7c) form_midp_gauge_wait_pane_t

0x9d4e,	// (0x000341a2) form_midp_wait_pane_ParamLimits

0x9d4e,	// (0x000341a2) form_midp_wait_pane

0x9cf4,	// (0x00034148) form_midp_image_pane_g1

0x9cfd,	// (0x00034151) form_midp_image_pane_t1

0x9d0c,	// (0x00034160) form_midp_image_pane_t2

0x9d1b,	// (0x0003416f) form_midp_image_pane_t3

0x0002,

0xf821,	// (0x00039c75) form_midp_image_pane_t

0x9ceb,	// (0x0003413f) list_single_midp_pane_g1

0x6fb2,	// (0x00031406) list_single_midp_pane_t1

0x9cc3,	// (0x00034117) list_midp_form_item_pane_ParamLimits

0x9cc3,	// (0x00034117) list_midp_form_item_pane

0x8dbc,	// (0x00033210) list_midp_form_item_pane_t1

0x8dcb,	// (0x0003321f) midp_ticker_pane_g1

0x8dd7,	// (0x0003322b) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00039bc4) midp_ticker_pane_g

0x8de3,	// (0x00033237) midp_ticker_pane_t1

0xb0e4,	// (0x00035538) midp_editing_number_pane_t1

0xb0c2,	// (0x00035516) midp_editing_number_pane

0xb0d1,	// (0x00035525) midp_ticker_pane

0xae83,	// (0x000352d7) ai_message_heading_pane

0x773f,	// (0x00031b93) bg_popup_window_pane_cp14

0xae8b,	// (0x000352df) listscroll_ai_message_pane

0xae0d,	// (0x00035261) ai_message_heading_pane_g1_ParamLimits

0xae0d,	// (0x00035261) ai_message_heading_pane_g1

0xae19,	// (0x0003526d) ai_message_heading_pane_g2_ParamLimits

0xae19,	// (0x0003526d) ai_message_heading_pane_g2

0xae25,	// (0x00035279) ai_message_heading_pane_g3_ParamLimits

0xae25,	// (0x00035279) ai_message_heading_pane_g3

0xae31,	// (0x00035285) ai_message_heading_pane_g4_ParamLimits

0xae31,	// (0x00035285) ai_message_heading_pane_g4

0x0003,

0xf962,	// (0x00039db6) ai_message_heading_pane_g_ParamLimits

0xf962,	// (0x00039db6) ai_message_heading_pane_g

0xae3d,	// (0x00035291) ai_message_heading_pane_t1_ParamLimits

0xae3d,	// (0x00035291) ai_message_heading_pane_t1

0xae57,	// (0x000352ab) ai_message_heading_pane_t2_ParamLimits

0xae57,	// (0x000352ab) ai_message_heading_pane_t2

0x0001,

0xf96b,	// (0x00039dbf) ai_message_heading_pane_t_ParamLimits

0xf96b,	// (0x00039dbf) ai_message_heading_pane_t

0xae69,	// (0x000352bd) bg_popup_heading_pane_cp1_ParamLimits

0xae69,	// (0x000352bd) bg_popup_heading_pane_cp1

0xadfb,	// (0x0003524f) list_ai_message_pane_ParamLimits

0xadfb,	// (0x0003524f) list_ai_message_pane

0x8205,	// (0x00032659) scroll_pane_cp10

0xad97,	// (0x000351eb) list_ai_message_pane_g1

0xad9f,	// (0x000351f3) list_ai_message_pane_g2

0x0001,

0xf93f,	// (0x00039d93) list_ai_message_pane_g

0xada7,	// (0x000351fb) list_ai_message_pane_t1_ParamLimits

0xada7,	// (0x000351fb) list_ai_message_pane_t1

0xadbc,	// (0x00035210) list_ai_message_pane_t2_ParamLimits

0xadbc,	// (0x00035210) list_ai_message_pane_t2

0xadd1,	// (0x00035225) list_ai_message_pane_t3_ParamLimits

0xadd1,	// (0x00035225) list_ai_message_pane_t3

0xade6,	// (0x0003523a) list_ai_message_pane_t4_ParamLimits

0xade6,	// (0x0003523a) list_ai_message_pane_t4

0x0003,

0xf944,	// (0x00039d98) list_ai_message_pane_t_ParamLimits

0xf944,	// (0x00039d98) list_ai_message_pane_t

0xad82,	// (0x000351d6) cell_ai_soft_ind_pane_ParamLimits

0xad82,	// (0x000351d6) cell_ai_soft_ind_pane

0x8df5,	// (0x00033249) cell_ai_soft_ind_pane_g1_ParamLimits

0x8df5,	// (0x00033249) cell_ai_soft_ind_pane_g1

0x773f,	// (0x00031b93) grid_highlight_cp1

0x8e02,	// (0x00033256) text_secondary_cp56_ParamLimits

0x8e02,	// (0x00033256) text_secondary_cp56

0xad57,	// (0x000351ab) example_general_pane_ParamLimits

0xad57,	// (0x000351ab) example_general_pane

0xad63,	// (0x000351b7) example_parent_pane_g1_ParamLimits

0xad63,	// (0x000351b7) example_parent_pane_g1

0xad6f,	// (0x000351c3) example_parent_pane_t1_ParamLimits

0xad6f,	// (0x000351c3) example_parent_pane_t1

0x93df,	// (0x00033833) popup_preview_text_window_ParamLimits

0x93df,	// (0x00033833) popup_preview_text_window

0x8c21,	// (0x00033075) list_single_pane_cp2_g4

0x7b50,	// (0x00031fa4) bg_popup_preview_window_pane_ParamLimits

0x7b50,	// (0x00031fa4) bg_popup_preview_window_pane

0xaa8e,	// (0x00034ee2) popup_preview_text_window_t1_ParamLimits

0xaa8e,	// (0x00034ee2) popup_preview_text_window_t1

0xaaac,	// (0x00034f00) popup_preview_text_window_t2_ParamLimits

0xaaac,	// (0x00034f00) popup_preview_text_window_t2

0xaaf5,	// (0x00034f49) popup_preview_text_window_t3_ParamLimits

0xaaf5,	// (0x00034f49) popup_preview_text_window_t3

0xab3a,	// (0x00034f8e) popup_preview_text_window_t4_ParamLimits

0xab3a,	// (0x00034f8e) popup_preview_text_window_t4

0x0004,

0xf913,	// (0x00039d67) popup_preview_text_window_t_ParamLimits

0xf913,	// (0x00039d67) popup_preview_text_window_t

0xabb8,	// (0x0003500c) scroll_pane_cp11

0x9aec,	// (0x00033f40) bg_popup_preview_window_pane_g1

0xaa4e,	// (0x00034ea2) bg_popup_preview_window_pane_g2

0xaa56,	// (0x00034eaa) bg_popup_preview_window_pane_g3

0xaa5e,	// (0x00034eb2) bg_popup_preview_window_pane_g4

0xaa66,	// (0x00034eba) bg_popup_preview_window_pane_g5

0xaa6e,	// (0x00034ec2) bg_popup_preview_window_pane_g6

0xaa76,	// (0x00034eca) bg_popup_preview_window_pane_g7

0xaa7e,	// (0x00034ed2) bg_popup_preview_window_pane_g8

0x4b9b,	// (0x0002efef) aid_popup_width_pane

0x93bd,	// (0x00033811) popup_midp_note_alarm_window_ParamLimits

0x93bd,	// (0x00033811) popup_midp_note_alarm_window

0x807f,	// (0x000324d3) data_form_pane_ParamLimits

0x55aa,	// (0x0002f9fe) form_field_data_pane_g1

0x55b4,	// (0x0002fa08) form_field_data_pane_t1_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_ParamLimits

0x8099,	// (0x000324ed) data_form_wide_pane_ParamLimits

0x55cc,	// (0x0002fa20) form_field_data_wide_pane_g1

0x55d8,	// (0x0002fa2c) form_field_data_wide_pane_t1_ParamLimits

0x7dfc,	// (0x00032250) input_focus_pane_cp6_ParamLimits

0x81b2,	// (0x00032606) input_popup_find_pane_g1_ParamLimits

0x81b2,	// (0x00032606) input_popup_find_pane_g1

0x583b,	// (0x0002fc8f) aid_navi_side_left_pane

0x5850,	// (0x0002fca4) aid_navi_side_right_pane

0xa455,	// (0x000348a9) bg_popup_window_pane_cp30_ParamLimits

0xa455,	// (0x000348a9) bg_popup_window_pane_cp30

0xa4cf,	// (0x00034923) popup_midp_note_alarm_window_g1_ParamLimits

0xa4cf,	// (0x00034923) popup_midp_note_alarm_window_g1

0xa4ff,	// (0x00034953) popup_midp_note_alarm_window_t1_ParamLimits

0xa4ff,	// (0x00034953) popup_midp_note_alarm_window_t1

0xa5a0,	// (0x000349f4) popup_midp_note_alarm_window_t2_ParamLimits

0xa5a0,	// (0x000349f4) popup_midp_note_alarm_window_t2

0xa64e,	// (0x00034aa2) popup_midp_note_alarm_window_t3_ParamLimits

0xa64e,	// (0x00034aa2) popup_midp_note_alarm_window_t3

0xa680,	// (0x00034ad4) popup_midp_note_alarm_window_t4_ParamLimits

0xa680,	// (0x00034ad4) popup_midp_note_alarm_window_t4

0xa6a6,	// (0x00034afa) popup_midp_note_alarm_window_t5_ParamLimits

0xa6a6,	// (0x00034afa) popup_midp_note_alarm_window_t5

0x000a,

0xf8b0,	// (0x00039d04) popup_midp_note_alarm_window_t_ParamLimits

0xf8b0,	// (0x00039d04) popup_midp_note_alarm_window_t

0xa75e,	// (0x00034bb2) wait_bar_pane_cp1_ParamLimits

0xa75e,	// (0x00034bb2) wait_bar_pane_cp1

0x773f,	// (0x00031b93) wait_anim_pane_copy1

0x773f,	// (0x00031b93) wait_border_pane_copy1

0xa13b,	// (0x0003458f) wait_border_pane_g1_copy1

0x55f2,	// (0x0002fa46) form_field_popup_pane_g1

0x55fa,	// (0x0002fa4e) form_field_popup_pane_t1_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_cp7_ParamLimits

0x80c5,	// (0x00032519) list_form_pane_ParamLimits

0x5612,	// (0x0002fa66) form_field_popup_wide_pane_g1

0x561a,	// (0x0002fa6e) form_field_popup_wide_pane_t1_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_cp8_ParamLimits

0x80d1,	// (0x00032525) list_form_wide_pane_ParamLimits

0xb23a,	// (0x0003568e) aid_size_cell_graphic_pane

0x56a4,	// (0x0002faf8) data_form_pane_t1_ParamLimits

0x701b,	// (0x0003146f) data_form_wide_pane_t1_ParamLimits

0x96c0,	// (0x00033b14) bg_status_flat_pane

0x777f,	// (0x00031bd3) title_pane_t1_ParamLimits

0x77e7,	// (0x00031c3b) title_pane_t2_ParamLimits

0x780d,	// (0x00031c61) title_pane_t3_ParamLimits

0xf573,	// (0x000399c7) title_pane_t_ParamLimits

0x8686,	// (0x00032ada) level_1_signal_ParamLimits

0x8693,	// (0x00032ae7) level_2_signal_ParamLimits

0x86a0,	// (0x00032af4) level_3_signal_ParamLimits

0x86ad,	// (0x00032b01) level_4_signal_ParamLimits

0x86ba,	// (0x00032b0e) level_5_signal_ParamLimits

0x86c7,	// (0x00032b1b) level_6_signal_ParamLimits

0x86d4,	// (0x00032b28) level_7_signal_ParamLimits

0x8686,	// (0x00032ada) level_1_battery_ParamLimits

0x8693,	// (0x00032ae7) level_2_battery_ParamLimits

0x86a0,	// (0x00032af4) level_3_battery_ParamLimits

0x86ad,	// (0x00032b01) level_4_battery_ParamLimits

0x86ba,	// (0x00032b0e) level_5_battery_ParamLimits

0x86c7,	// (0x00032b1b) level_6_battery_ParamLimits

0x86d4,	// (0x00032b28) level_7_battery_ParamLimits

0xa35a,	// (0x000347ae) bg_status_flat_pane_g1

0xa362,	// (0x000347b6) bg_status_flat_pane_g2

0xa36a,	// (0x000347be) bg_status_flat_pane_g3

0xa372,	// (0x000347c6) bg_status_flat_pane_g4

0xa37a,	// (0x000347ce) bg_status_flat_pane_g5

0xa382,	// (0x000347d6) bg_status_flat_pane_g6

0xa38a,	// (0x000347de) bg_status_flat_pane_g7

0x7835,	// (0x00031c89) tabs_3_active_pane_t1_ParamLimits

0x7835,	// (0x00031c89) tabs_3_passive_pane_t1_ParamLimits

0x784f,	// (0x00031ca3) tabs_4_active_pane_t1_ParamLimits

0x784f,	// (0x00031ca3) tabs_4_1_passive_pane_t1_ParamLimits

0x8246,	// (0x0003269a) tabs_2_active_pane_t1_ParamLimits

0x8246,	// (0x0003269a) tabs_2_passive_pane_t1_ParamLimits

0x8258,	// (0x000326ac) bg_active_tab_pane_cp4_ParamLimits

0x8266,	// (0x000326ba) tabs_2_long_active_pane_t1_ParamLimits

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp4_ParamLimits

0x5daa,	// (0x000301fe) list_single_midp_graphic_pane_t1_ParamLimits

0x8258,	// (0x000326ac) bg_active_tab_pane_cp5_ParamLimits

0x8285,	// (0x000326d9) tabs_3_long_active_pane_t1_ParamLimits

0x8279,	// (0x000326cd) bg_passive_tab_pane_cp5_ParamLimits

0x5daa,	// (0x000301fe) list_single_midp_graphic_pane_t1

0x96c0,	// (0x00033b14) bg_status_flat_pane_ParamLimits

0x9783,	// (0x00033bd7) indicator_pane_cp2_ParamLimits

0x9783,	// (0x00033bd7) indicator_pane_cp2

0x98a7,	// (0x00033cfb) navi_pane_srt_ParamLimits

0x98a7,	// (0x00033cfb) navi_pane_srt

0x98cb,	// (0x00033d1f) popup_clock_digital_analogue_window_cp1

0x78fc,	// (0x00031d50) indicator_pane_t1

0x8cf0,	// (0x00033144) copy_highlight_pane

0x8cf0,	// (0x00033144) cursor_graphics_pane

0x8cf0,	// (0x00033144) graphic_within_text_pane

0x8cf0,	// (0x00033144) link_highlight_pane

0xab7b,	// (0x00034fcf) popup_preview_text_window_t5_ParamLimits

0xab7b,	// (0x00034fcf) popup_preview_text_window_t5

0x8e1c,	// (0x00033270) cursor_digital_pane

0x8e1c,	// (0x00033270) cursor_primary_pane

0x8e2d,	// (0x00033281) cursor_primary_small_pane

0x8e35,	// (0x00033289) cursor_secondary_pane

0x8e3d,	// (0x00033291) cursor_title_pane

0x8e1c,	// (0x00033270) link_highlight_digital_pane

0x8e24,	// (0x00033278) link_highlight_primary_pane

0x8e2d,	// (0x00033281) link_highlight_primary_small_pane

0x8e35,	// (0x00033289) link_highlight_secondary_pane

0x8e3d,	// (0x00033291) link_highlight_title_pane

0x8e1c,	// (0x00033270) copy_highlight_digital_pane

0x8e1c,	// (0x00033270) copy_highlight_primary_pane

0x8e2d,	// (0x00033281) copy_highlight_primary_small_pane

0x8e35,	// (0x00033289) copy_highlight_secondary_pane

0x8e3d,	// (0x00033291) copy_highlight_title_pane

0x8e35,	// (0x00033289) graphic_text_digital_pane

0xa3f8,	// (0x0003484c) graphic_text_primary_pane

0xa401,	// (0x00034855) graphic_text_primary_small_pane

0x8e2d,	// (0x00033281) graphic_text_secondary_pane

0x8e1c,	// (0x00033270) graphic_text_title_pane

0x8e45,	// (0x00033299) cursor_primary_pane_g1

0xa3ea,	// (0x0003483e) cursor_text_primary_t1

0xa3d2,	// (0x00034826) cursor_primary_small_pane_g1

0xa3dc,	// (0x00034830) cursor_text_primary_small_t1

0xa3ba,	// (0x0003480e) cursor_primary_small_pane_g1_copy1

0xa3c4,	// (0x00034818) cursor_text_primary_small_t1_copy1

0xa3a2,	// (0x000347f6) cursor_text_title_t1

0xa3b0,	// (0x00034804) cursor_title_pane_g1

0x8e45,	// (0x00033299) cursor_digital_pane_g1

0x8e4f,	// (0x000332a3) cursor_text_digital_t1

0x8e74,	// (0x000332c8) link_highlight_primary_pane_g1

0xa34b,	// (0x0003479f) link_highlight_primary_pane_t1

0x8e5d,	// (0x000332b1) link_highlight_primary_small_pane_g1

0x8e65,	// (0x000332b9) link_highlight_primary_small_pane_t1

0x8e74,	// (0x000332c8) link_highlight_secondary_pane_g1

0x8e7c,	// (0x000332d0) link_highlight_secondary_pane_t1

0xa2bf,	// (0x00034713) link_highlight_title_pane_g1

0xa2c7,	// (0x0003471b) link_highlight_title_pane_t1

0xa2a8,	// (0x000346fc) link_highlight_digital_pane_g1

0xa2b0,	// (0x00034704) link_highlight_digital_pane_t1

0xa180,	// (0x000345d4) copy_highlight_primary_pane_g1

0xa188,	// (0x000345dc) copy_highlight_primary_pane_t1

0xa15a,	// (0x000345ae) copy_highlight_primary_small_pane_g1

0xa171,	// (0x000345c5) copy_highlight_primary_small_pane_t1

0x8e8b,	// (0x000332df) copy_highlight_secondary_pane_g1

0x8e93,	// (0x000332e7) copy_highlight_secondary_pane_t1

0xa15a,	// (0x000345ae) copy_highlight_title_pane_g1

0xa162,	// (0x000345b6) copy_highlight_title_pane_t1

0xa180,	// (0x000345d4) copy_highlight_digital_pane_g1

0xb404,	// (0x00035858) copy_highlight_digital_pane_t1

0xb358,	// (0x000357ac) graphic_text_primary_pane_g1

0xb3e8,	// (0x0003583c) graphic_text_primary_pane_t1

0xb3f6,	// (0x0003584a) graphic_text_primary_pane_t2

0x0001,

0xf9df,	// (0x00039e33) graphic_text_primary_pane_t

0xb3c4,	// (0x00035818) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x00035820) graphic_text_primary_small_pane_t1

0xb3da,	// (0x0003582e) graphic_text_primary_small_pane_t2

0x0001,

0xf9da,	// (0x00039e2e) graphic_text_primary_small_pane_t

0xb3a0,	// (0x000357f4) graphic_text_secondary_pane_g1

0xb3a8,	// (0x000357fc) graphic_text_secondary_pane_t1

0xb3b6,	// (0x0003580a) graphic_text_secondary_pane_t2

0x0001,

0xf9d5,	// (0x00039e29) graphic_text_secondary_pane_t

0xb37c,	// (0x000357d0) graphic_text_title_pane_g1

0xb384,	// (0x000357d8) graphic_text_title_pane_t1

0xb392,	// (0x000357e6) graphic_text_title_pane_t2

0x0001,

0xf9d0,	// (0x00039e24) graphic_text_title_pane_t

0xb358,	// (0x000357ac) graphic_text_digital_pane_g1

0xb360,	// (0x000357b4) graphic_text_digital_pane_t1

0xb36e,	// (0x000357c2) graphic_text_digital_pane_t2

0x0001,

0xf9cb,	// (0x00039e1f) graphic_text_digital_pane_t

0x781f,	// (0x00031c73) navi_icon_pane_srt_ParamLimits

0x781f,	// (0x00031c73) navi_icon_pane_srt

0x773f,	// (0x00031b93) navi_midp_pane_srt

0x773f,	// (0x00031b93) navi_navi_pane_srt

0x781f,	// (0x00031c73) navi_text_pane_srt_ParamLimits

0x781f,	// (0x00031c73) navi_text_pane_srt

0xb323,	// (0x00035777) navi_navi_icon_text_pane_srt

0xb32b,	// (0x0003577f) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x0003577f) navi_navi_pane_srt_g1

0xb33d,	// (0x00035791) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00035791) navi_navi_pane_srt_g2

0x0001,

0xf9c6,	// (0x00039e1a) navi_navi_pane_srt_g_ParamLimits

0xf9c6,	// (0x00039e1a) navi_navi_pane_srt_g

0xb34f,	// (0x000357a3) navi_navi_tabs_pane_srt

0xb323,	// (0x00035777) navi_navi_text_pane_srt

0xb323,	// (0x00035777) navi_navi_volume_pane_srt

0xb314,	// (0x00035768) navi_navi_text_pane_srt_t1

0x6124,	// (0x00030578) navi_navi_volume_pane_srt_g1

0x612c,	// (0x00030580) volume_small_pane_srt_ParamLimits

0x612c,	// (0x00030580) volume_small_pane_srt

0x5b1b,	// (0x0002ff6f) volume_small_pane_srt_g1_ParamLimits

0x5b1b,	// (0x0002ff6f) volume_small_pane_srt_g1

0x5b2b,	// (0x0002ff7f) volume_small_pane_srt_g2_ParamLimits

0x5b2b,	// (0x0002ff7f) volume_small_pane_srt_g2

0x5b3c,	// (0x0002ff90) volume_small_pane_srt_g3_ParamLimits

0x5b3c,	// (0x0002ff90) volume_small_pane_srt_g3

0x5b4d,	// (0x0002ffa1) volume_small_pane_srt_g4_ParamLimits

0x5b4d,	// (0x0002ffa1) volume_small_pane_srt_g4

0x5b5e,	// (0x0002ffb2) volume_small_pane_srt_g5_ParamLimits

0x5b5e,	// (0x0002ffb2) volume_small_pane_srt_g5

0x5b6f,	// (0x0002ffc3) volume_small_pane_srt_g6_ParamLimits

0x5b6f,	// (0x0002ffc3) volume_small_pane_srt_g6

0x5b80,	// (0x0002ffd4) volume_small_pane_srt_g7_ParamLimits

0x5b80,	// (0x0002ffd4) volume_small_pane_srt_g7

0x5b91,	// (0x0002ffe5) volume_small_pane_srt_g8_ParamLimits

0x5b91,	// (0x0002ffe5) volume_small_pane_srt_g8

0x5ba2,	// (0x0002fff6) volume_small_pane_srt_g9_ParamLimits

0x5ba2,	// (0x0002fff6) volume_small_pane_srt_g9

0x5bb3,	// (0x00030007) volume_small_pane_srt_g10_ParamLimits

0x5bb3,	// (0x00030007) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x00039bc9) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x00039bc9) volume_small_pane_srt_g

0x7bf9,	// (0x0003204d) query_popup_data_pane_cp2

0xb2fa,	// (0x0003574e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x0003574e) navi_navi_icon_text_pane_srt_t1

0xa3f8,	// (0x0003484c) navi_tabs_2_long_pane_srt

0xa3f8,	// (0x0003484c) navi_tabs_2_pane_srt

0xa3f8,	// (0x0003484c) navi_tabs_3_long_pane_srt

0xa3f8,	// (0x0003484c) navi_tabs_3_pane_srt

0xa3f8,	// (0x0003484c) navi_tabs_4_pane_srt

0x6104,	// (0x00030558) tabs_2_active_pane_srt_ParamLimits

0x6104,	// (0x00030558) tabs_2_active_pane_srt

0x6114,	// (0x00030568) tabs_2_passive_pane_srt_ParamLimits

0x6114,	// (0x00030568) tabs_2_passive_pane_srt

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x0003571a) bg_passive_tab_pane_g1_cp1_srt

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00035723) bg_passive_tab_pane_g3_cp1_srt

0x781f,	// (0x00031c73) bg_active_tab_pane_cp1_srt_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x0003572c) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x00035734) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x00035734) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x0003571a) bg_active_tab_pane_g1_cp1_srt

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00035723) bg_active_tab_pane_g3_cp1_srt

0x60d1,	// (0x00030525) tabs_3_active_pane_srt_ParamLimits

0x60d1,	// (0x00030525) tabs_3_active_pane_srt

0x60e2,	// (0x00030536) tabs_3_passive_pane_cp_srt_ParamLimits

0x60e2,	// (0x00030536) tabs_3_passive_pane_cp_srt

0x60f3,	// (0x00030547) tabs_3_passive_pane_srt_ParamLimits

0x60f3,	// (0x00030547) tabs_3_passive_pane_srt

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9056,	// (0x000334aa) bg_passive_tab_pane_cp2_srt

0x8ea2,	// (0x000332f6) bg_passive_tab_pane_g1_cp2_srt

0x893d,	// (0x00032d91) bg_passive_tab_pane_g2_cp2_srt

0x8eab,	// (0x000332ff) bg_passive_tab_pane_g3_cp2_srt

0x781f,	// (0x00031c73) bg_active_tab_pane_cp2_srt_ParamLimits

0x781f,	// (0x00031c73) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x00035700) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x00035708) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x00035708) tabs_3_active_pane_srt_t1

0x8ea2,	// (0x000332f6) bg_active_tab_pane_g1_cp2_srt

0x893d,	// (0x00032d91) bg_active_tab_pane_g2_cp2_srt

0x8eab,	// (0x000332ff) bg_active_tab_pane_g3_cp2_srt

0x6089,	// (0x000304dd) tabs_4_active_pane_srt_ParamLimits

0x6089,	// (0x000304dd) tabs_4_active_pane_srt

0x609b,	// (0x000304ef) tabs_4_passive_pane_cp2_srt_ParamLimits

0x609b,	// (0x000304ef) tabs_4_passive_pane_cp2_srt

0x9000,	// (0x00033454) aid_size_cell_toolbar

0x8279,	// (0x000326cd) main_idle_act_pane_ParamLimits

0x91f3,	// (0x00033647) popup_large_graphic_colour_window_ParamLimits

0x955a,	// (0x000339ae) popup_toolbar_window_ParamLimits

0x955a,	// (0x000339ae) popup_toolbar_window

0xb10e,	// (0x00035562) list_single_graphic_2heading_pane_ParamLimits

0xb10e,	// (0x00035562) list_single_graphic_2heading_pane

0x8435,	// (0x00032889) aid_size_cell_apps_grid_lsc_pane

0x8447,	// (0x0003289b) aid_size_cell_apps_grid_prt_pane

0x9056,	// (0x000334aa) bg_wml_button_pane_cp1_ParamLimits

0x9056,	// (0x000334aa) bg_wml_button_pane_cp1

0x9dea,	// (0x0003423e) form_midp_field_text_pane_t1_ParamLimits

0x9bdc,	// (0x00034030) input_focus_pane_cp050_ParamLimits

0x9e21,	// (0x00034275) list_midp_form_text_pane_ParamLimits

0x9dc7,	// (0x0003421b) input_focus_pane_cp051_ParamLimits

0x9ddb,	// (0x0003422f) list_midp_choice_pane_ParamLimits

0x9c6d,	// (0x000340c1) list_single_2graphic_pane_cp3_ParamLimits

0x9c6d,	// (0x000340c1) list_single_2graphic_pane_cp3

0x9c91,	// (0x000340e5) list_single_midp_graphic_pane_ParamLimits

0x9c91,	// (0x000340e5) list_single_midp_graphic_pane

0x4b23,	// (0x0002ef77) list_single_graphic_2heading_pane_g1_ParamLimits

0x4b23,	// (0x0002ef77) list_single_graphic_2heading_pane_g1

0x4b2f,	// (0x0002ef83) list_single_graphic_2heading_pane_g4_ParamLimits

0x4b2f,	// (0x0002ef83) list_single_graphic_2heading_pane_g4

0x4b3b,	// (0x0002ef8f) list_single_graphic_2heading_pane_g5_ParamLimits

0x4b3b,	// (0x0002ef8f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x00039c1c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x00039c1c) list_single_graphic_2heading_pane_g

0x4b47,	// (0x0002ef9b) list_single_graphic_2heading_pane_t1_ParamLimits

0x4b47,	// (0x0002ef9b) list_single_graphic_2heading_pane_t1

0x4b5b,	// (0x0002efaf) list_single_graphic_2heading_pane_t2_ParamLimits

0x4b5b,	// (0x0002efaf) list_single_graphic_2heading_pane_t2

0x4b77,	// (0x0002efcb) list_single_graphic_2heading_pane_t3_ParamLimits

0x4b77,	// (0x0002efcb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00039c23) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00039c23) list_single_graphic_2heading_pane_t

0x9a2a,	// (0x00033e7e) bg_popup_sub_pane_cp2

0x9a54,	// (0x00033ea8) grid_toobar_pane

0x5d19,	// (0x0003016d) cell_toolbar_pane_ParamLimits

0x5d19,	// (0x0003016d) cell_toolbar_pane

0x9a90,	// (0x00033ee4) cell_toolbar_pane_g1_ParamLimits

0x9a90,	// (0x00033ee4) cell_toolbar_pane_g1

0x9aa4,	// (0x00033ef8) cell_toolbar_pane_g2_ParamLimits

0x9aa4,	// (0x00033ef8) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00039c31) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00039c31) cell_toolbar_pane_g

0x9ac6,	// (0x00033f1a) grid_highlight_pane_cp2_ParamLimits

0x9ac6,	// (0x00033f1a) grid_highlight_pane_cp2

0x9ae0,	// (0x00033f34) toolbar_button_pane

0x9aec,	// (0x00033f40) toolbar_button_pane_g1

0x9af4,	// (0x00033f48) toolbar_button_pane_g2

0x9afc,	// (0x00033f50) toolbar_button_pane_g3

0x9b04,	// (0x00033f58) toolbar_button_pane_g4

0x9b0c,	// (0x00033f60) toolbar_button_pane_g5

0x9b14,	// (0x00033f68) toolbar_button_pane_g6

0x9b1c,	// (0x00033f70) toolbar_button_pane_g7

0x9b24,	// (0x00033f78) toolbar_button_pane_g8

0x9b2c,	// (0x00033f80) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00039c36) toolbar_button_pane_g

0x5d51,	// (0x000301a5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d51,	// (0x000301a5) list_single_2graphic_pane_g1_cp3

0x5d5d,	// (0x000301b1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d5d,	// (0x000301b1) list_single_2graphic_pane_g2_cp3

0x5d6e,	// (0x000301c2) list_single_2graphic_pane_g3_cp3

0x5d76,	// (0x000301ca) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d76,	// (0x000301ca) list_single_2graphic_pane_g4_cp3

0x5d82,	// (0x000301d6) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d82,	// (0x000301d6) list_single_2graphic_pane_t1_cp3

0x5d9e,	// (0x000301f2) list_single_midp_graphic_pane_g2_ParamLimits

0x5d9e,	// (0x000301f2) list_single_midp_graphic_pane_g2

0x9008,	// (0x0003345c) aid_zoom_text_primary

0x6f0a,	// (0x0003135e) aid_zoom_text_secondary

0x8f5f,	// (0x000333b3) status_small_pane_g7_ParamLimits

0x8f5f,	// (0x000333b3) status_small_pane_g7

0x8f82,	// (0x000333d6) status_small_pane_t1_ParamLimits

0x7756,	// (0x00031baa) title_pane_g2

0x0003,

0xf56a,	// (0x000399be) title_pane_g

0x7c9a,	// (0x000320ee) aid_size_cell_colour_1_pane_ParamLimits

0x7c9a,	// (0x000320ee) aid_size_cell_colour_1_pane

0x7cae,	// (0x00032102) aid_size_cell_colour_2_pane_ParamLimits

0x7cae,	// (0x00032102) aid_size_cell_colour_2_pane

0x7cc2,	// (0x00032116) aid_size_cell_colour_3_pane_ParamLimits

0x7cc2,	// (0x00032116) aid_size_cell_colour_3_pane

0x7cd6,	// (0x0003212a) aid_size_cell_colour_4_pane_ParamLimits

0x7cd6,	// (0x0003212a) aid_size_cell_colour_4_pane

0x5777,	// (0x0002fbcb) title_pane_stacon_g1_ParamLimits

0x5777,	// (0x0002fbcb) title_pane_stacon_g1

0xa1df,	// (0x00034633) popup_note_wait_window_g3_ParamLimits

0xa1df,	// (0x00034633) popup_note_wait_window_g3

0xa255,	// (0x000346a9) popup_note_wait_window_t5_ParamLimits

0xa255,	// (0x000346a9) popup_note_wait_window_t5

0x773f,	// (0x00031b93) main_feb_china_hwr_fs_writing_pane

0x90d8,	// (0x0003352c) popup_feb_china_hwr_fs_window_ParamLimits

0x90d8,	// (0x0003352c) popup_feb_china_hwr_fs_window

0x5dc0,	// (0x00030214) aid_size_cell_hwr_fs_ParamLimits

0x5dc0,	// (0x00030214) aid_size_cell_hwr_fs

0x9bdc,	// (0x00034030) bg_popup_sub_pane_cp3_ParamLimits

0x9bdc,	// (0x00034030) bg_popup_sub_pane_cp3

0x5dd5,	// (0x00030229) grid_hwr_fs_pane_ParamLimits

0x5dd5,	// (0x00030229) grid_hwr_fs_pane

0x5ded,	// (0x00030241) linegrid_hwr_fs_pane_ParamLimits

0x5ded,	// (0x00030241) linegrid_hwr_fs_pane

0x5dfd,	// (0x00030251) cell_hwr_fs_pane_ParamLimits

0x5dfd,	// (0x00030251) cell_hwr_fs_pane

0x9be8,	// (0x0003403c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9be8,	// (0x0003403c) linegrid_hwr_fs_pane_g1

0x9bf4,	// (0x00034048) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bf4,	// (0x00034048) linegrid_hwr_fs_pane_g2

0x9c06,	// (0x0003405a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9c06,	// (0x0003405a) linegrid_hwr_fs_pane_g3

0x5e1f,	// (0x00030273) linegrid_hwr_fs_pane_g4_ParamLimits

0x5e1f,	// (0x00030273) linegrid_hwr_fs_pane_g4

0x5e39,	// (0x0003028d) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e39,	// (0x0003028d) linegrid_hwr_fs_pane_g5

0x0004,

0xf80d,	// (0x00039c61) linegrid_hwr_fs_pane_g_ParamLimits

0xf80d,	// (0x00039c61) linegrid_hwr_fs_pane_g

0x9c12,	// (0x00034066) cell_hwr_fs_pane_g1_ParamLimits

0x9c12,	// (0x00034066) cell_hwr_fs_pane_g1

0x9961,	// (0x00033db5) cell_hwr_fs_pane_g2_ParamLimits

0x9961,	// (0x00033db5) cell_hwr_fs_pane_g2

0x9c28,	// (0x0003407c) cell_hwr_fs_pane_g3_ParamLimits

0x9c28,	// (0x0003407c) cell_hwr_fs_pane_g3

0x9c35,	// (0x00034089) cell_hwr_fs_pane_g4_ParamLimits

0x9c35,	// (0x00034089) cell_hwr_fs_pane_g4

0x0003,

0xf818,	// (0x00039c6c) cell_hwr_fs_pane_g_ParamLimits

0xf818,	// (0x00039c6c) cell_hwr_fs_pane_g

0x5e4f,	// (0x000302a3) cell_hwr_fs_pane_t1

0x773f,	// (0x00031b93) grid_highlight_pane_cp6

0x773f,	// (0x00031b93) main_idle_act2_pane

0x81ec,	// (0x00032640) aid_inside_area_popup_secondary

0xa898,	// (0x00034cec) aid_inside_area_window_primary_ParamLimits

0xa898,	// (0x00034cec) aid_inside_area_window_primary

0xb413,	// (0x00035867) ai2_news_ticker_pane

0xb41b,	// (0x0003586f) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x0003586f) aid_size_cell_ai1_link

0xb435,	// (0x00035889) popup_ai2_data_window_ParamLimits

0xb435,	// (0x00035889) popup_ai2_data_window

0xb44b,	// (0x0003589f) popup_ai2_link_window_ParamLimits

0xb44b,	// (0x0003589f) popup_ai2_link_window

0x9bdc,	// (0x00034030) bg_popup_sub_pane_cp4_ParamLimits

0x9bdc,	// (0x00034030) bg_popup_sub_pane_cp4

0xb45f,	// (0x000358b3) grid_ai2_link_pane_ParamLimits

0xb45f,	// (0x000358b3) grid_ai2_link_pane

0xb476,	// (0x000358ca) popup_ai2_link_window_g1_ParamLimits

0xb476,	// (0x000358ca) popup_ai2_link_window_g1

0xb482,	// (0x000358d6) popup_ai2_link_window_g2_ParamLimits

0xb482,	// (0x000358d6) popup_ai2_link_window_g2

0x0001,

0xf9e4,	// (0x00039e38) popup_ai2_link_window_g_ParamLimits

0xf9e4,	// (0x00039e38) popup_ai2_link_window_g

0xb491,	// (0x000358e5) ai2_mp_button_pane

0xb499,	// (0x000358ed) ai2_mp_volume_pane

0x9dc7,	// (0x0003421b) bg_popup_sub_pane_cp5_ParamLimits

0x9dc7,	// (0x0003421b) bg_popup_sub_pane_cp5

0xb4a1,	// (0x000358f5) heading_ai2_gene_pane_ParamLimits

0xb4a1,	// (0x000358f5) heading_ai2_gene_pane

0xb4ad,	// (0x00035901) list_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x00035901) list_ai2_gene_pane

0xb4f5,	// (0x00035949) cell_ai2_link_pane_ParamLimits

0xb4f5,	// (0x00035949) cell_ai2_link_pane

0xb50b,	// (0x0003595f) cell_ai2_link_pane_g1

0x773f,	// (0x00031b93) grid_highlight_pane_cp7

0x6141,	// (0x00030595) ai2_mp_volume_pane_g1

0xb5db,	// (0x00035a2f) ai2_mp_volume_pane_g2

0xb550,	// (0x000359a4) list_ai2_gene_pane_t1

0xb5e3,	// (0x00035a37) ai2_mp_volume_pane_g3

0x0002,

0xf9fd,	// (0x00039e51) ai2_mp_volume_pane_g

0x6149,	// (0x0003059d) volume_small_pane_cp3

0xb5eb,	// (0x00035a3f) aid_size_cell_ai2_button

0xb5f3,	// (0x00035a47) grid_ai2_button_pane

0xb5fc,	// (0x00035a50) cell_ai2_button_pane_ParamLimits

0xb5fc,	// (0x00035a50) cell_ai2_button_pane

0x7735,	// (0x00031b89) cell_ai2_button_pane_g1

0x773f,	// (0x00031b93) grid_highlight_pane_cp8

0xb59b,	// (0x000359ef) ai2_gene_pane_t1_ParamLimits

0xb59b,	// (0x000359ef) ai2_gene_pane_t1

0x8ff6,	// (0x0003344a) aid_height_parent_landscape

0xaf2a,	// (0x0003537e) aid_height_set_list

0xaf3b,	// (0x0003538f) aid_size_parent

0xb23a,	// (0x0003568e) aid_size_cell_graphic_pane_ParamLimits

0xb4bd,	// (0x00035911) popup_ai2_data_window_g1_ParamLimits

0xb4bd,	// (0x00035911) popup_ai2_data_window_g1

0xb4c9,	// (0x0003591d) ai2_news_ticker_pane_g1

0xb4d1,	// (0x00035925) ai2_news_ticker_pane_g2

0x0001,

0xf9e9,	// (0x00039e3d) ai2_news_ticker_pane_g

0xb4d9,	// (0x0003592d) ai2_news_ticker_pane_t1

0xb4e7,	// (0x0003593b) ai2_news_ticker_pane_t2

0x0001,

0xf9ee,	// (0x00039e42) ai2_news_ticker_pane_t

0xb514,	// (0x00035968) heading_ai2_gene_pane_g1

0xb51c,	// (0x00035970) heading_ai2_gene_pane_t1_ParamLimits

0xb51c,	// (0x00035970) heading_ai2_gene_pane_t1

0xb531,	// (0x00035985) list_highlight_pane_cp6

0xb539,	// (0x0003598d) ai2_gene_pane_ParamLimits

0xb539,	// (0x0003598d) ai2_gene_pane

0xb55e,	// (0x000359b2) list_ai2_gene_pane_t2

0x0001,

0xf9f3,	// (0x00039e47) list_ai2_gene_pane_t

0xb56c,	// (0x000359c0) list_highlight_pane_cp8_ParamLimits

0xb56c,	// (0x000359c0) list_highlight_pane_cp8

0xb57d,	// (0x000359d1) ai2_gene_pane_g1_ParamLimits

0xb57d,	// (0x000359d1) ai2_gene_pane_g1

0xb58f,	// (0x000359e3) ai2_gene_pane_g2_ParamLimits

0xb58f,	// (0x000359e3) ai2_gene_pane_g2

0x0001,

0xf9f8,	// (0x00039e4c) ai2_gene_pane_g_ParamLimits

0xf9f8,	// (0x00039e4c) ai2_gene_pane_g

0x8021,	// (0x00032475) scroll_pane_cp12

0x5cd8,	// (0x0003012c) control_pane_t3_ParamLimits

0x5cd8,	// (0x0003012c) control_pane_t3

0x8f73,	// (0x000333c7) status_small_pane_g8_ParamLimits

0x8f73,	// (0x000333c7) status_small_pane_g8

0x91be,	// (0x00033612) popup_find_window_ParamLimits

0x93d1,	// (0x00033825) popup_note_image_window_ParamLimits

0x6f36,	// (0x0003138a) list_double2_graphic_pane_vc_g1_ParamLimits

0x6f36,	// (0x0003138a) list_double2_graphic_pane_vc_g1

0x6f42,	// (0x00031396) list_double2_graphic_pane_vc_g2_ParamLimits

0x6f42,	// (0x00031396) list_double2_graphic_pane_vc_g2

0x6f4e,	// (0x000313a2) list_double2_graphic_pane_vc_g3_ParamLimits

0x6f4e,	// (0x000313a2) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x00039c2a) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x00039c2a) list_double2_graphic_pane_vc_g

0x6f5a,	// (0x000313ae) list_double2_graphic_pane_vc_t1_ParamLimits

0x6f5a,	// (0x000313ae) list_double2_graphic_pane_vc_t1

0x6f70,	// (0x000313c4) list_single_heading_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_single_heading_pane_vc_g1

0x6f7c,	// (0x000313d0) list_single_heading_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_single_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_single_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_single_heading_pane_vc_g

0x6f88,	// (0x000313dc) list_single_heading_pane_vc_t1_ParamLimits

0x6f88,	// (0x000313dc) list_single_heading_pane_vc_t1

0x6f9e,	// (0x000313f2) list_single_heading_pane_vc_t2_ParamLimits

0x6f9e,	// (0x000313f2) list_single_heading_pane_vc_t2

0x0001,

0xf7fc,	// (0x00039c50) list_single_heading_pane_vc_t_ParamLimits

0xf7fc,	// (0x00039c50) list_single_heading_pane_vc_t

0x9b34,	// (0x00033f88) list_setting_number_pane_vc_g1_ParamLimits

0x9b34,	// (0x00033f88) list_setting_number_pane_vc_g1

0x9b40,	// (0x00033f94) list_setting_number_pane_vc_g2_ParamLimits

0x9b40,	// (0x00033f94) list_setting_number_pane_vc_g2

0x0001,

0xf801,	// (0x00039c55) list_setting_number_pane_vc_g_ParamLimits

0xf801,	// (0x00039c55) list_setting_number_pane_vc_g

0x9b4c,	// (0x00033fa0) list_setting_number_pane_vc_t1_ParamLimits

0x9b4c,	// (0x00033fa0) list_setting_number_pane_vc_t1

0x9b60,	// (0x00033fb4) list_setting_number_pane_vc_t2_ParamLimits

0x9b60,	// (0x00033fb4) list_setting_number_pane_vc_t2

0x9b7c,	// (0x00033fd0) list_setting_number_pane_vc_t3_ParamLimits

0x9b7c,	// (0x00033fd0) list_setting_number_pane_vc_t3

0x0002,

0xf806,	// (0x00039c5a) list_setting_number_pane_vc_t_ParamLimits

0xf806,	// (0x00039c5a) list_setting_number_pane_vc_t

0x9ba2,	// (0x00033ff6) set_value_pane_vc_ParamLimits

0x9ba2,	// (0x00033ff6) set_value_pane_vc

0xb10e,	// (0x00035562) list_double2_graphic_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double2_graphic_pane_vc

0xb10e,	// (0x00035562) list_double2_large_graphic_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double2_large_graphic_pane_vc

0xb10e,	// (0x00035562) list_double2_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double2_pane_vc

0xb10e,	// (0x00035562) list_double_graphic_heading_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_graphic_heading_pane_vc

0xb10e,	// (0x00035562) list_double_graphic_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_graphic_pane_vc

0xb10e,	// (0x00035562) list_double_heading_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_heading_pane_vc

0xb10e,	// (0x00035562) list_double_large_graphic_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_large_graphic_pane_vc

0xb10e,	// (0x00035562) list_double_number_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_number_pane_vc

0xb10e,	// (0x00035562) list_double_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_pane_vc

0xb10e,	// (0x00035562) list_double_time_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_double_time_pane_vc

0xb10e,	// (0x00035562) list_setting_number_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_setting_number_pane_vc

0xb10e,	// (0x00035562) list_setting_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_setting_pane_vc

0xb10e,	// (0x00035562) list_single_graphic_heading_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_single_graphic_heading_pane_vc

0xb10e,	// (0x00035562) list_single_heading_pane_vc_ParamLimits

0xb10e,	// (0x00035562) list_single_heading_pane_vc

0x707b,	// (0x000314cf) list_single_number_heading_pane_vc_ParamLimits

0x707b,	// (0x000314cf) list_single_number_heading_pane_vc

0x7117,	// (0x0003156b) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7117,	// (0x0003156b) list_double_graphic_heading_pane_vc_g1

0x6f70,	// (0x000313c4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x6f70,	// (0x000313c4) list_double_graphic_heading_pane_vc_g2

0x6f7c,	// (0x000313d0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6f7c,	// (0x000313d0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa04,	// (0x00039e58) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x00039e58) list_double_graphic_heading_pane_vc_g

0x7123,	// (0x00031577) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7123,	// (0x00031577) list_double_graphic_heading_pane_vc_t1

0x6f88,	// (0x000313dc) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6f88,	// (0x000313dc) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x00039e5f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x00039e5f) list_double_graphic_heading_pane_vc_t

0x9b34,	// (0x00033f88) list_setting_pane_vc_g1_ParamLimits

0x9b34,	// (0x00033f88) list_setting_pane_vc_g1

0x9b40,	// (0x00033f94) list_setting_pane_vc_g2_ParamLimits

0x9b40,	// (0x00033f94) list_setting_pane_vc_g2

0x0001,

0xf801,	// (0x00039c55) list_setting_pane_vc_g_ParamLimits

0xf801,	// (0x00039c55) list_setting_pane_vc_g

0xb834,	// (0x00035c88) list_setting_pane_vc_t1_ParamLimits

0xb834,	// (0x00035c88) list_setting_pane_vc_t1

0xb848,	// (0x00035c9c) list_setting_pane_vc_t2_ParamLimits

0xb848,	// (0x00035c9c) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x00039e8d) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x00039e8d) list_setting_pane_vc_t

0x9ba2,	// (0x00033ff6) set_value_pane_cp_vc_ParamLimits

0x9ba2,	// (0x00033ff6) set_value_pane_cp_vc

0x6f70,	// (0x000313c4) list_single_number_heading_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_single_number_heading_pane_vc_g1

0x6f7c,	// (0x000313d0) list_single_number_heading_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_single_number_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_single_number_heading_pane_vc_g

0x6f88,	// (0x000313dc) list_single_number_heading_pane_vc_t1_ParamLimits

0x6f88,	// (0x000313dc) list_single_number_heading_pane_vc_t1

0x7137,	// (0x0003158b) list_single_number_heading_pane_vc_t2_ParamLimits

0x7137,	// (0x0003158b) list_single_number_heading_pane_vc_t2

0x714b,	// (0x0003159f) list_single_number_heading_pane_vc_t3_ParamLimits

0x714b,	// (0x0003159f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x00039e92) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00039e92) list_single_number_heading_pane_vc_t

0x6f36,	// (0x0003138a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6f36,	// (0x0003138a) list_single_graphic_heading_pane_vc_g1

0x6f70,	// (0x000313c4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x6f70,	// (0x000313c4) list_single_graphic_heading_pane_vc_g4

0x6f7c,	// (0x000313d0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6f7c,	// (0x000313d0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa45,	// (0x00039e99) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa45,	// (0x00039e99) list_single_graphic_heading_pane_vc_g

0x6f88,	// (0x000313dc) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6f88,	// (0x000313dc) list_single_graphic_heading_pane_vc_t1

0x715d,	// (0x000315b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x715d,	// (0x000315b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4c,	// (0x00039ea0) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4c,	// (0x00039ea0) list_single_graphic_heading_pane_vc_t

0x6f70,	// (0x000313c4) list_double2_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_double2_pane_vc_g1

0x6f7c,	// (0x000313d0) list_double2_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_double2_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_double2_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_double2_pane_vc_g

0x7171,	// (0x000315c5) list_double2_pane_vc_t1_ParamLimits

0x7171,	// (0x000315c5) list_double2_pane_vc_t1

0x7187,	// (0x000315db) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7187,	// (0x000315db) list_double2_large_graphic_pane_vc_g1

0x6f70,	// (0x000313c4) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6f70,	// (0x000313c4) list_double2_large_graphic_pane_vc_g2

0x6f7c,	// (0x000313d0) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6f7c,	// (0x000313d0) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa51,	// (0x00039ea5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa51,	// (0x00039ea5) list_double2_large_graphic_pane_vc_g

0x7193,	// (0x000315e7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7193,	// (0x000315e7) list_double2_large_graphic_pane_vc_t1

0x71a9,	// (0x000315fd) list_double_time_pane_vc_g1_ParamLimits

0x71a9,	// (0x000315fd) list_double_time_pane_vc_g1

0x71b5,	// (0x00031609) list_double_time_pane_vc_g2_ParamLimits

0x71b5,	// (0x00031609) list_double_time_pane_vc_g2

0x0001,

0xfa58,	// (0x00039eac) list_double_time_pane_vc_g_ParamLimits

0xfa58,	// (0x00039eac) list_double_time_pane_vc_g

0x71c1,	// (0x00031615) list_double_time_pane_vc_t1_ParamLimits

0x71c1,	// (0x00031615) list_double_time_pane_vc_t1

0x71da,	// (0x0003162e) list_double_time_pane_vc_t2_ParamLimits

0x71da,	// (0x0003162e) list_double_time_pane_vc_t2

0x7215,	// (0x00031669) list_double_time_pane_vc_t3_ParamLimits

0x7215,	// (0x00031669) list_double_time_pane_vc_t3

0x722d,	// (0x00031681) list_double_time_pane_vc_t4_ParamLimits

0x722d,	// (0x00031681) list_double_time_pane_vc_t4

0x0003,

0xfa5d,	// (0x00039eb1) list_double_time_pane_vc_t_ParamLimits

0xfa5d,	// (0x00039eb1) list_double_time_pane_vc_t

0x6f70,	// (0x000313c4) list_double_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_double_pane_vc_g1

0x6f7c,	// (0x000313d0) list_double_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_double_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_double_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_double_pane_vc_g

0x7241,	// (0x00031695) list_double_pane_vc_t1_ParamLimits

0x7241,	// (0x00031695) list_double_pane_vc_t1

0x7253,	// (0x000316a7) list_double_pane_vc_t2_ParamLimits

0x7253,	// (0x000316a7) list_double_pane_vc_t2

0x0001,

0xfa66,	// (0x00039eba) list_double_pane_vc_t_ParamLimits

0xfa66,	// (0x00039eba) list_double_pane_vc_t

0x6f70,	// (0x000313c4) list_double_number_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_double_number_pane_vc_g1

0x6f7c,	// (0x000313d0) list_double_number_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_double_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_double_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_double_number_pane_vc_g

0x726b,	// (0x000316bf) list_double_number_pane_vc_t1_ParamLimits

0x726b,	// (0x000316bf) list_double_number_pane_vc_t1

0x727f,	// (0x000316d3) list_double_number_pane_vc_t2_ParamLimits

0x727f,	// (0x000316d3) list_double_number_pane_vc_t2

0x7253,	// (0x000316a7) list_double_number_pane_vc_t3_ParamLimits

0x7253,	// (0x000316a7) list_double_number_pane_vc_t3

0x0002,

0xfa6b,	// (0x00039ebf) list_double_number_pane_vc_t_ParamLimits

0xfa6b,	// (0x00039ebf) list_double_number_pane_vc_t

0x7291,	// (0x000316e5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7291,	// (0x000316e5) list_double_large_graphic_pane_vc_g1

0x729d,	// (0x000316f1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x729d,	// (0x000316f1) list_double_large_graphic_pane_vc_g2

0x6f7c,	// (0x000313d0) list_double_large_graphic_pane_vc_g3_ParamLimits

0x6f7c,	// (0x000313d0) list_double_large_graphic_pane_vc_g3

0x72ac,	// (0x00031700) list_double_large_graphic_pane_vc_g4_ParamLimits

0x72ac,	// (0x00031700) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa72,	// (0x00039ec6) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa72,	// (0x00039ec6) list_double_large_graphic_pane_vc_g

0x72b8,	// (0x0003170c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x72b8,	// (0x0003170c) list_double_large_graphic_pane_vc_t1

0x72ca,	// (0x0003171e) list_double_large_graphic_pane_vc_t2_ParamLimits

0x72ca,	// (0x0003171e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7b,	// (0x00039ecf) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7b,	// (0x00039ecf) list_double_large_graphic_pane_vc_t

0x6f70,	// (0x000313c4) list_double_heading_pane_vc_g1_ParamLimits

0x6f70,	// (0x000313c4) list_double_heading_pane_vc_g1

0x6f7c,	// (0x000313d0) list_double_heading_pane_vc_g2_ParamLimits

0x6f7c,	// (0x000313d0) list_double_heading_pane_vc_g2

0x0001,

0xf7f7,	// (0x00039c4b) list_double_heading_pane_vc_g_ParamLimits

0xf7f7,	// (0x00039c4b) list_double_heading_pane_vc_g

0x72e3,	// (0x00031737) list_double_heading_pane_vc_t1_ParamLimits

0x72e3,	// (0x00031737) list_double_heading_pane_vc_t1

0x6f88,	// (0x000313dc) list_double_heading_pane_vc_t2_ParamLimits

0x6f88,	// (0x000313dc) list_double_heading_pane_vc_t2

0x0001,

0xfa80,	// (0x00039ed4) list_double_heading_pane_vc_t_ParamLimits

0xfa80,	// (0x00039ed4) list_double_heading_pane_vc_t

0x72f7,	// (0x0003174b) list_double_graphic_pane_vc_g1_ParamLimits

0x72f7,	// (0x0003174b) list_double_graphic_pane_vc_g1

0x7307,	// (0x0003175b) list_double_graphic_pane_vc_g2_ParamLimits

0x7307,	// (0x0003175b) list_double_graphic_pane_vc_g2

0x7316,	// (0x0003176a) list_double_graphic_pane_vc_g3_ParamLimits

0x7316,	// (0x0003176a) list_double_graphic_pane_vc_g3

0x0002,

0xfa85,	// (0x00039ed9) list_double_graphic_pane_vc_g_ParamLimits

0xfa85,	// (0x00039ed9) list_double_graphic_pane_vc_g

0x7322,	// (0x00031776) list_double_graphic_pane_vc_t1_ParamLimits

0x7322,	// (0x00031776) list_double_graphic_pane_vc_t1

0x7253,	// (0x000316a7) list_double_graphic_pane_vc_t2_ParamLimits

0x7253,	// (0x000316a7) list_double_graphic_pane_vc_t2

0x0001,

0xfa8c,	// (0x00039ee0) list_double_graphic_pane_vc_t_ParamLimits

0xfa8c,	// (0x00039ee0) list_double_graphic_pane_vc_t

0x4ba7,	// (0x0002effb) aid_size_cell_fastswap

0x4baf,	// (0x0002f003) aid_size_cell_touch_ParamLimits

0x4baf,	// (0x0002f003) aid_size_cell_touch

0x4e14,	// (0x0002f268) popup_fast_swap_wide_window_ParamLimits

0x4e14,	// (0x0002f268) popup_fast_swap_wide_window

0x4f1e,	// (0x0002f372) touch_pane_ParamLimits

0x4f1e,	// (0x0002f372) touch_pane

0x8077,	// (0x000324cb) button_value_adjust_pane_cp2

0x54fe,	// (0x0002f952) button_value_adjust_pane_cp4

0x551e,	// (0x0002f972) form_field_data_pane_cp2

0x553d,	// (0x0002f991) form_field_data_wide_pane_cp2

0x8504,	// (0x00032958) bg_scroll_pane_ParamLimits

0x58da,	// (0x0002fd2e) scroll_handle_pane_ParamLimits

0x58ee,	// (0x0002fd42) scroll_sc2_down_pane_ParamLimits

0x58ee,	// (0x0002fd42) scroll_sc2_down_pane

0x8535,	// (0x00032989) scroll_sc2_up_pane_ParamLimits

0x8535,	// (0x00032989) scroll_sc2_up_pane

0xbc9d,	// (0x000360f1) grid_wheel_folder_pane_g1_ParamLimits

0xbc9d,	// (0x000360f1) grid_wheel_folder_pane_g1

0x5ab3,	// (0x0002ff07) clock_nsta_pane_cp2_ParamLimits

0x5ab3,	// (0x0002ff07) clock_nsta_pane_cp2

0x8cf8,	// (0x0003314c) listscroll_midp_pane_ParamLimits

0x8d04,	// (0x00033158) midp_canvas_pane

0x8fee,	// (0x00033442) nsta_clock_indic_pane

0x903c,	// (0x00033490) listscroll_form_pane_vc

0x9044,	// (0x00033498) listscroll_set_pane_vc_ParamLimits

0x9044,	// (0x00033498) listscroll_set_pane_vc

0x96dc,	// (0x00033b30) clock_nsta_pane

0x9751,	// (0x00033ba5) indicator_nsta_pane

0x9a2a,	// (0x00033e7e) bg_popup_sub_pane_cp2_ParamLimits

0x9a3e,	// (0x00033e92) find_pane_cp2_ParamLimits

0x9a3e,	// (0x00033e92) find_pane_cp2

0x9a54,	// (0x00033ea8) grid_toobar_pane_ParamLimits

0x9bb0,	// (0x00034004) list_form_gen_pane_vc_ParamLimits

0x9bb0,	// (0x00034004) list_form_gen_pane_vc

0x9bc6,	// (0x0003401a) scroll_pane_cp8_vc_ParamLimits

0x9bc6,	// (0x0003401a) scroll_pane_cp8_vc

0x9c42,	// (0x00034096) data_form_wide_pane_vc_ParamLimits

0x9c42,	// (0x00034096) data_form_wide_pane_vc

0x9c4e,	// (0x000340a2) form_field_data_wide_pane_vc_g1

0x9c56,	// (0x000340aa) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c56,	// (0x000340aa) form_field_data_wide_pane_vc_t1

0x808b,	// (0x000324df) input_focus_pane_cp6_vc_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_cp6_vc

0x9f5a,	// (0x000343ae) list_midp_pane_ParamLimits

0x9f66,	// (0x000343ba) scroll_pane_cp16_ParamLimits

0x9f66,	// (0x000343ba) scroll_pane_cp16

0x9fb4,	// (0x00034408) button_value_adjust_pane_ParamLimits

0x9fb4,	// (0x00034408) button_value_adjust_pane

0xaf4d,	// (0x000353a1) button_value_adjust_pane_cp6_ParamLimits

0xaf4d,	// (0x000353a1) button_value_adjust_pane_cp6

0xb077,	// (0x000354cb) settings_code_pane_cp_ParamLimits

0xb077,	// (0x000354cb) settings_code_pane_cp

0x7735,	// (0x00031b89) cell_touch_pane_g1

0x7735,	// (0x00031b89) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x00039b73) cell_touch_pane_g

0xb60e,	// (0x00035a62) cell_touch_pane_cp_ParamLimits

0xb60e,	// (0x00035a62) cell_touch_pane_cp

0xb61e,	// (0x00035a72) cell_touch_pane_ParamLimits

0xb61e,	// (0x00035a72) cell_touch_pane

0x7735,	// (0x00031b89) scroll_sc2_down_pane_g1

0x7735,	// (0x00031b89) scroll_sc2_up_pane_g1

0x773f,	// (0x00031b93) bg_set_opt_pane_cp4_vc

0xb630,	// (0x00035a84) list_set_graphic_pane_vc_g1_ParamLimits

0xb630,	// (0x00035a84) list_set_graphic_pane_vc_g1

0xb63c,	// (0x00035a90) list_set_graphic_pane_vc_g2_ParamLimits

0xb63c,	// (0x00035a90) list_set_graphic_pane_vc_g2

0x0001,

0xfa10,	// (0x00039e64) list_set_graphic_pane_vc_g_ParamLimits

0xfa10,	// (0x00039e64) list_set_graphic_pane_vc_g

0xb648,	// (0x00035a9c) text_primary_small_cp13_vc_ParamLimits

0xb648,	// (0x00035a9c) text_primary_small_cp13_vc

0xb660,	// (0x00035ab4) list_set_graphic_pane_vc_ParamLimits

0xb660,	// (0x00035ab4) list_set_graphic_pane_vc

0x773f,	// (0x00031b93) input_focus_pane_cp2_vc

0x7735,	// (0x00031b89) setting_code_pane_vc_g1

0xb674,	// (0x00035ac8) setting_code_pane_vc_t1

0xb682,	// (0x00035ad6) set_text_pane_vc_t1_ParamLimits

0xb682,	// (0x00035ad6) set_text_pane_vc_t1

0x773f,	// (0x00031b93) input_focus_pane_cp1_vc

0xb69d,	// (0x00035af1) list_set_text_pane_vc

0x7735,	// (0x00031b89) setting_text_pane_vc_g1

0x773f,	// (0x00031b93) bg_set_opt_pane_cp2_vc

0xb6a7,	// (0x00035afb) setting_slider_graphic_pane_vc_g1

0xb6af,	// (0x00035b03) setting_slider_graphic_pane_vc_t1

0xb6bd,	// (0x00035b11) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa15,	// (0x00039e69) setting_slider_graphic_pane_vc_t

0xb6cb,	// (0x00035b1f) slider_set_pane_cp_vc

0xb6d3,	// (0x00035b27) slider_set_pane_vc_g1

0xb6dc,	// (0x00035b30) slider_set_pane_vc_g2

0x0006,

0xfa1a,	// (0x00039e6e) slider_set_pane_vc_g

0x80f2,	// (0x00032546) set_opt_bg_pane_g1_copy1

0x80fa,	// (0x0003254e) set_opt_bg_pane_g2_copy1

0xb708,	// (0x00035b5c) set_opt_bg_pane_g3_copy1

0x810a,	// (0x0003255e) set_opt_bg_pane_g4_copy1

0x8112,	// (0x00032566) set_opt_bg_pane_g5_copy1

0x811a,	// (0x0003256e) set_opt_bg_pane_g6_copy1

0xb712,	// (0x00035b66) set_opt_bg_pane_g7_copy1

0xb71a,	// (0x00035b6e) set_opt_bg_pane_g8_copy1

0xb724,	// (0x00035b78) set_opt_bg_pane_g9_copy1

0x773f,	// (0x00031b93) bg_set_opt_pane_cp_vc

0xb72e,	// (0x00035b82) setting_slider_pane_vc_t1

0xb6af,	// (0x00035b03) setting_slider_pane_vc_t2

0xb6bd,	// (0x00035b11) setting_slider_pane_vc_t3

0x0002,

0xfa29,	// (0x00039e7d) setting_slider_pane_vc_t

0xb6cb,	// (0x00035b1f) slider_set_pane_vc

0x5e5d,	// (0x000302b1) volume_set_pane_vc_g1

0x5e66,	// (0x000302ba) volume_set_pane_vc_g2

0x5e6f,	// (0x000302c3) volume_set_pane_vc_g3

0x5e78,	// (0x000302cc) volume_set_pane_vc_g4

0x5e81,	// (0x000302d5) volume_set_pane_vc_g5

0x5e8a,	// (0x000302de) volume_set_pane_vc_g6

0x5e93,	// (0x000302e7) volume_set_pane_vc_g7

0x5e9c,	// (0x000302f0) volume_set_pane_vc_g8

0x5ea5,	// (0x000302f9) volume_set_pane_vc_g9

0x5eae,	// (0x00030302) volume_set_pane_vc_g10

0x0009,

0xf8c7,	// (0x00039d1b) volume_set_pane_vc_g

0xb73d,	// (0x00035b91) volume_set_pane_vc

0xb745,	// (0x00035b99) button_value_adjust_pane_cp1_vc

0xb74f,	// (0x00035ba3) list_highlight_pane_cp2_vc

0xb758,	// (0x00035bac) list_set_pane_vc_ParamLimits

0xb758,	// (0x00035bac) list_set_pane_vc

0xb7c2,	// (0x00035c16) main_pane_set_vc_t1_ParamLimits

0xb7c2,	// (0x00035c16) main_pane_set_vc_t1

0xb7d7,	// (0x00035c2b) main_pane_set_vc_t2_ParamLimits

0xb7d7,	// (0x00035c2b) main_pane_set_vc_t2

0xb7e9,	// (0x00035c3d) main_pane_set_vc_t3_ParamLimits

0xb7e9,	// (0x00035c3d) main_pane_set_vc_t3

0xb7fd,	// (0x00035c51) main_pane_set_vc_t4_ParamLimits

0xb7fd,	// (0x00035c51) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x00039e84) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x00039e84) main_pane_set_vc_t

0xb811,	// (0x00035c65) setting_code_pane_vc_ParamLimits

0xb811,	// (0x00035c65) setting_code_pane_vc

0xb822,	// (0x00035c76) setting_slider_graphic_pane_vc

0xb822,	// (0x00035c76) setting_slider_pane_vc

0xb822,	// (0x00035c76) setting_text_pane_vc

0xb822,	// (0x00035c76) setting_volume_pane_vc

0xb82c,	// (0x00035c80) scroll_pane_cp121_vc

0x8065,	// (0x000324b9) set_content_pane_vc

0xb86a,	// (0x00035cbe) button_value_adjust_pane_g1

0xb873,	// (0x00035cc7) button_value_adjust_pane_g2

0x0001,

0xfa91,	// (0x00039ee5) button_value_adjust_pane_g

0xb87c,	// (0x00035cd0) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb87c,	// (0x00035cd0) form_field_slider_wide_pane_vc_t1

0xb890,	// (0x00035ce4) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb890,	// (0x00035ce4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa96,	// (0x00039eea) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa96,	// (0x00039eea) form_field_slider_wide_pane_vc_t

0x7a9a,	// (0x00031eee) input_focus_pane_cp10_vc_ParamLimits

0x7a9a,	// (0x00031eee) input_focus_pane_cp10_vc

0xb8a2,	// (0x00035cf6) slider_cont_pane_cp1_vc_ParamLimits

0xb8a2,	// (0x00035cf6) slider_cont_pane_cp1_vc

0xb6d3,	// (0x00035b27) slider_form_pane_g1_cp2

0xb6dc,	// (0x00035b30) slider_form_pane_g2_cp2

0xb8bb,	// (0x00035d0f) form_field_slider_pane_vc_t3

0xb8c9,	// (0x00035d1d) form_field_slider_pane_vc_t4

0xb8d7,	// (0x00035d2b) slider_form_pane_vc_ParamLimits

0xb8d7,	// (0x00035d2b) slider_form_pane_vc

0xb8e4,	// (0x00035d38) form_field_slider_pane_vc_t1_ParamLimits

0xb8e4,	// (0x00035d38) form_field_slider_pane_vc_t1

0xb890,	// (0x00035ce4) form_field_slider_pane_vc_t2_ParamLimits

0xb890,	// (0x00035ce4) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x00039efa) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x00039efa) form_field_slider_pane_vc_t

0x7a9a,	// (0x00031eee) input_focus_pane_cp9_vc_ParamLimits

0x7a9a,	// (0x00031eee) input_focus_pane_cp9_vc

0xb900,	// (0x00035d54) slider_cont_pane_vc_ParamLimits

0xb900,	// (0x00035d54) slider_cont_pane_vc

0xb912,	// (0x00035d66) list_form_graphic_pane_cp_vc_ParamLimits

0xb912,	// (0x00035d66) list_form_graphic_pane_cp_vc

0x9c4e,	// (0x000340a2) form_field_popup_wide_pane_vc_g1

0xb927,	// (0x00035d7b) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb927,	// (0x00035d7b) form_field_popup_wide_pane_vc_t1

0x808b,	// (0x000324df) input_focus_pane_cp8_vc_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_cp8_vc

0xb93e,	// (0x00035d92) list_form_wide_pane_vc_ParamLimits

0xb93e,	// (0x00035d92) list_form_wide_pane_vc

0xb94a,	// (0x00035d9e) list_form_graphic_pane_vc_g1

0xb952,	// (0x00035da6) list_form_graphic_pane_vc_t1_ParamLimits

0xb952,	// (0x00035da6) list_form_graphic_pane_vc_t1

0x781f,	// (0x00031c73) list_highlight_pane_cp5_vc_ParamLimits

0x781f,	// (0x00031c73) list_highlight_pane_cp5_vc

0xb96e,	// (0x00035dc2) list_form_graphic_pane_vc_ParamLimits

0xb96e,	// (0x00035dc2) list_form_graphic_pane_vc

0x9c4e,	// (0x000340a2) form_field_popup_pane_vc_g1

0xb984,	// (0x00035dd8) form_field_popup_pane_vc_t1_ParamLimits

0xb984,	// (0x00035dd8) form_field_popup_pane_vc_t1

0x808b,	// (0x000324df) input_focus_pane_cp7_vc_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_cp7_vc

0xb99b,	// (0x00035def) list_form_pane_vc_ParamLimits

0xb99b,	// (0x00035def) list_form_pane_vc

0xb9a7,	// (0x00035dfb) data_form_pane_vc_t1_ParamLimits

0xb9a7,	// (0x00035dfb) data_form_pane_vc_t1

0x80f2,	// (0x00032546) input_focus_pane_vc_g1

0x80fa,	// (0x0003254e) input_focus_pane_vc_g2

0x8102,	// (0x00032556) input_focus_pane_vc_g3

0x810a,	// (0x0003255e) input_focus_pane_vc_g4

0x8112,	// (0x00032566) input_focus_pane_vc_g5

0x811a,	// (0x0003256e) input_focus_pane_vc_g6

0x8122,	// (0x00032576) input_focus_pane_vc_g7

0x812a,	// (0x0003257e) input_focus_pane_vc_g8

0x8132,	// (0x00032586) input_focus_pane_vc_g9

0x7735,	// (0x00031b89) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x00039afc) input_focus_pane_vc_g

0x9c42,	// (0x00034096) data_form_pane_vc_ParamLimits

0x9c42,	// (0x00034096) data_form_pane_vc

0x9c4e,	// (0x000340a2) form_field_data_pane_vc_g1

0xb9c2,	// (0x00035e16) form_field_data_pane_vc_t1_ParamLimits

0xb9c2,	// (0x00035e16) form_field_data_pane_vc_t1

0x808b,	// (0x000324df) input_focus_pane_vc_ParamLimits

0x808b,	// (0x000324df) input_focus_pane_vc

0xb9dc,	// (0x00035e30) button_value_adjust_pane_cp3_vc

0xb9e4,	// (0x00035e38) button_value_adjust_pane_cp5_vc

0xb9ec,	// (0x00035e40) form_field_data_pane_vc_ParamLimits

0xb9ec,	// (0x00035e40) form_field_data_pane_vc

0xba03,	// (0x00035e57) form_field_data_pane_vc_cp2

0xba0b,	// (0x00035e5f) form_field_data_wide_pane_vc_ParamLimits

0xba0b,	// (0x00035e5f) form_field_data_wide_pane_vc

0xba21,	// (0x00035e75) form_field_data_wide_pane_vc_cp2

0xba29,	// (0x00035e7d) form_field_popup_pane_vc_ParamLimits

0xba29,	// (0x00035e7d) form_field_popup_pane_vc

0xba40,	// (0x00035e94) form_field_popup_wide_pane_vc_ParamLimits

0xba40,	// (0x00035e94) form_field_popup_wide_pane_vc

0xba56,	// (0x00035eaa) form_field_slider_pane_vc_ParamLimits

0xba56,	// (0x00035eaa) form_field_slider_pane_vc

0xba69,	// (0x00035ebd) form_field_slider_wide_pane_vc_ParamLimits

0xba69,	// (0x00035ebd) form_field_slider_wide_pane_vc

0xba7c,	// (0x00035ed0) grid_touch_1_pane_ParamLimits

0xba7c,	// (0x00035ed0) grid_touch_1_pane

0xba88,	// (0x00035edc) grid_touch_2_pane_ParamLimits

0xba88,	// (0x00035edc) grid_touch_2_pane

0x8fb9,	// (0x0003340d) touch_pane_g1_ParamLimits

0x8fb9,	// (0x0003340d) touch_pane_g1

0xbaa0,	// (0x00035ef4) cell_app_pane_cp_wide_ParamLimits

0xbaa0,	// (0x00035ef4) cell_app_pane_cp_wide

0xbab1,	// (0x00035f05) grid_popup_fast_wide_pane_ParamLimits

0xbab1,	// (0x00035f05) grid_popup_fast_wide_pane

0xbac5,	// (0x00035f19) scroll_pane_cp19_ParamLimits

0xbac5,	// (0x00035f19) scroll_pane_cp19

0x773f,	// (0x00031b93) bg_popup_window_pane_cp20

0xbad9,	// (0x00035f2d) listscroll_popup_fast_wide_pane

0x781f,	// (0x00031c73) grid_indicator_nsta_pane

0xbae1,	// (0x00035f35) clock_nsta_pane_g1

0xbaea,	// (0x00035f3e) clock_nsta_pane_t1

0xbb06,	// (0x00035f5a) cell_indicator_nsta_pane_ParamLimits

0xbb06,	// (0x00035f5a) cell_indicator_nsta_pane

0xbb3e,	// (0x00035f92) cell_indicator_nsta_pane_g1

0xbb4c,	// (0x00035fa0) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00039f04) cell_indicator_nsta_pane_g

0xbb62,	// (0x00035fb6) clock_nsta_pane_cp

0xbb6a,	// (0x00035fbe) indicator_nsta_pane_cp

0xbb73,	// (0x00035fc7) nsta_clock_indic_pane_g1

0x78e8,	// (0x00031d3c) grid_indicator_pane

0x862a,	// (0x00032a7e) scroll_pane_cp29

0x5a02,	// (0x0002fe56) indicator_nsta_pane_cp2_ParamLimits

0x5a02,	// (0x0002fe56) indicator_nsta_pane_cp2

0x781f,	// (0x00031c73) main_apps_wheel_pane

0x9e3b,	// (0x0003428f) form_midp_field_text_pane_ParamLimits

0x9f86,	// (0x000343da) scroll_bar_cp050_ParamLimits

0xbbdc,	// (0x00036030) cell_indicator_pane_ParamLimits

0xbbdc,	// (0x00036030) cell_indicator_pane

0xbbf3,	// (0x00036047) cell_indicator_pane_g1

0xbbfd,	// (0x00036051) grid_wheel_folder_pane_ParamLimits

0xbbfd,	// (0x00036051) grid_wheel_folder_pane

0xbc11,	// (0x00036065) list_wheel_apps_pane_ParamLimits

0xbc11,	// (0x00036065) list_wheel_apps_pane

0xbc22,	// (0x00036076) main_apps_wheel_pane_g1_ParamLimits

0xbc22,	// (0x00036076) main_apps_wheel_pane_g1

0xbc36,	// (0x0003608a) main_apps_wheel_pane_g2_ParamLimits

0xbc36,	// (0x0003608a) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00039f20) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00039f20) main_apps_wheel_pane_g

0xbc4e,	// (0x000360a2) main_apps_wheel_pane_t1_ParamLimits

0xbc4e,	// (0x000360a2) main_apps_wheel_pane_t1

0xbc71,	// (0x000360c5) list_wheel_apps_pane_g1

0xbc79,	// (0x000360cd) list_wheel_apps_pane_g2

0xbc81,	// (0x000360d5) list_wheel_apps_pane_g3

0xbc89,	// (0x000360dd) list_wheel_apps_pane_g4

0xbc93,	// (0x000360e7) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00039f25) list_wheel_apps_pane_g

0x8b70,	// (0x00032fc4) navi_icon_text_pane

0x960f,	// (0x00033a63) aid_fill_nsta

0xbcb6,	// (0x0003610a) navi_icon_text_pane_g1

0xbcc5,	// (0x00036119) navi_icon_text_pane_t1

0x8a0e,	// (0x00032e62) list_set_graphic_pane_t1_ParamLimits

0x8a0e,	// (0x00032e62) list_set_graphic_pane_t1

0xa6d5,	// (0x00034b29) popup_midp_note_alarm_window_t6_ParamLimits

0xa6d5,	// (0x00034b29) popup_midp_note_alarm_window_t6

0xa6e7,	// (0x00034b3b) popup_midp_note_alarm_window_t7_ParamLimits

0xa6e7,	// (0x00034b3b) popup_midp_note_alarm_window_t7

0xa6f9,	// (0x00034b4d) popup_midp_note_alarm_window_t8_ParamLimits

0xa6f9,	// (0x00034b4d) popup_midp_note_alarm_window_t8

0xa70b,	// (0x00034b5f) popup_midp_note_alarm_window_t9_ParamLimits

0xa70b,	// (0x00034b5f) popup_midp_note_alarm_window_t9

0xa71d,	// (0x00034b71) popup_midp_note_alarm_window_t10_ParamLimits

0xa71d,	// (0x00034b71) popup_midp_note_alarm_window_t10

0xa72f,	// (0x00034b83) popup_midp_note_alarm_window_t11_ParamLimits

0xa72f,	// (0x00034b83) popup_midp_note_alarm_window_t11

0xa74d,	// (0x00034ba1) scroll_pane_cp17_ParamLimits

0xa74d,	// (0x00034ba1) scroll_pane_cp17

0x5e5d,	// (0x000302b1) volume_small_pane_cp_g1

0x6152,	// (0x000305a6) volume_small_pane_cp_g2

0x615b,	// (0x000305af) volume_small_pane_cp_g3

0x6164,	// (0x000305b8) volume_small_pane_cp_g4

0x616d,	// (0x000305c1) volume_small_pane_cp_g5

0x6176,	// (0x000305ca) volume_small_pane_cp_g6

0x617f,	// (0x000305d3) volume_small_pane_cp_g7

0x6188,	// (0x000305dc) volume_small_pane_cp_g8

0x6191,	// (0x000305e5) volume_small_pane_cp_g9

0x619a,	// (0x000305ee) volume_small_pane_cp_g10

0x8dcb,	// (0x0003321f) midp_ticker_pane_g1_ParamLimits

0x8dd7,	// (0x0003322b) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00039bc4) midp_ticker_pane_g_ParamLimits

0x8de3,	// (0x00033237) midp_ticker_pane_t1_ParamLimits

0x9625,	// (0x00033a79) aid_fill_nsta_2

0x9f72,	// (0x000343c6) list_form2_midp_pane

0xb0c2,	// (0x00035516) midp_editing_number_pane_ParamLimits

0xb0d1,	// (0x00035525) midp_ticker_pane_ParamLimits

0xbcda,	// (0x0003612e) form2_midp_field_pane

0xbcfe,	// (0x00036152) scroll_pane_cp51

0xbd1e,	// (0x00036172) form2_midp_button_pane_ParamLimits

0xbd1e,	// (0x00036172) form2_midp_button_pane

0xbd30,	// (0x00036184) form2_midp_content_pane_ParamLimits

0xbd30,	// (0x00036184) form2_midp_content_pane

0xbd4a,	// (0x0003619e) form2_midp_field_choice_group_pane

0xbd52,	// (0x000361a6) form2_midp_field_pane_g1

0xbd5a,	// (0x000361ae) form2_midp_field_pane_g2

0xbd62,	// (0x000361b6) form2_midp_field_pane_g3

0xbd6a,	// (0x000361be) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00039f4a) form2_midp_field_pane_g

0xbd72,	// (0x000361c6) form2_midp_gauge_slider_pane

0xbd7a,	// (0x000361ce) form2_midp_gauge_wait_pane

0xbd82,	// (0x000361d6) form2_midp_image_pane_ParamLimits

0xbd82,	// (0x000361d6) form2_midp_image_pane

0xbd9d,	// (0x000361f1) form2_midp_label_pane_ParamLimits

0xbd9d,	// (0x000361f1) form2_midp_label_pane

0xbdb6,	// (0x0003620a) form2_midp_label_pane_cp_ParamLimits

0xbdb6,	// (0x0003620a) form2_midp_label_pane_cp

0xbdd7,	// (0x0003622b) form2_midp_string_pane_ParamLimits

0xbdd7,	// (0x0003622b) form2_midp_string_pane

0x7334,	// (0x00031788) form2_midp_text_pane_ParamLimits

0x7334,	// (0x00031788) form2_midp_text_pane

0xbde9,	// (0x0003623d) form2_midp_time_pane

0xbdf9,	// (0x0003624d) input_focus_pane_cp51_ParamLimits

0xbdf9,	// (0x0003624d) input_focus_pane_cp51

0xbe11,	// (0x00036265) form2_midp_label_pane_t1_ParamLimits

0xbe11,	// (0x00036265) form2_midp_label_pane_t1

0x734f,	// (0x000317a3) form2_mdip_text_pane_t1_ParamLimits

0x734f,	// (0x000317a3) form2_mdip_text_pane_t1

0x736d,	// (0x000317c1) form2_midp_time_pane_t1

0xbe5a,	// (0x000362ae) form2_midp_gauge_slider_pane_t1

0xbe6c,	// (0x000362c0) form2_midp_gauge_slider_pane_t2

0xbe7e,	// (0x000362d2) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00039f53) form2_midp_gauge_slider_pane_t

0xbe90,	// (0x000362e4) form2_midp_slider_pane

0xbe9c,	// (0x000362f0) form2_midp_gauge_wait_pane_t1

0xbeaa,	// (0x000362fe) form2_midp_wait_pane_ParamLimits

0xbeaa,	// (0x000362fe) form2_midp_wait_pane

0x9c6d,	// (0x000340c1) list_single_2graphic_pane_cp4_ParamLimits

0x9c6d,	// (0x000340c1) list_single_2graphic_pane_cp4

0xbed5,	// (0x00036329) list_single_midp_graphic_pane_cp_ParamLimits

0xbed5,	// (0x00036329) list_single_midp_graphic_pane_cp

0x773f,	// (0x00031b93) list_highlight_pane_cp20

0xbf04,	// (0x00036358) list_single_2graphic_pane_g1_cp4

0xbf0c,	// (0x00036360) list_single_2graphic_pane_g2_cp4

0xbf14,	// (0x00036368) list_single_2graphic_pane_t1_cp4

0x781f,	// (0x00031c73) list_highlight_pane_cp21

0xbf23,	// (0x00036377) list_single_midp_graphic_pane_g4_cp

0xbf32,	// (0x00036386) list_single_midp_graphic_pane_t1_cp

0xbf47,	// (0x0003639b) form2_mdip_string_pane_t1_ParamLimits

0xbf47,	// (0x0003639b) form2_mdip_string_pane_t1

0x773f,	// (0x00031b93) bg_wml_button_pane_cp2

0x7735,	// (0x00031b89) form2_midp_image_pane_g1

0x52d1,	// (0x0002f725) list_double_large_graphic_pane_g5_ParamLimits

0x52d1,	// (0x0002f725) list_double_large_graphic_pane_g5

0x8cf8,	// (0x0003314c) midp_form_pane_ParamLimits

0x781f,	// (0x00031c73) main_apps_wheel_pane_ParamLimits

0x93f7,	// (0x0003384b) popup_preview_window_ParamLimits

0x93f7,	// (0x0003384b) popup_preview_window

0x95b2,	// (0x00033a06) popup_touch_info_window_ParamLimits

0x95b2,	// (0x00033a06) popup_touch_info_window

0x95d0,	// (0x00033a24) popup_touch_menu_window_ParamLimits

0x95d0,	// (0x00033a24) popup_touch_menu_window

0x772b,	// (0x00031b7f) bg_popup_sub_pane_cp6

0xc040,	// (0x00036494) list_touch_menu_pane

0xc048,	// (0x0003649c) list_single_touch_menu_pane_ParamLimits

0xc048,	// (0x0003649c) list_single_touch_menu_pane

0xc05f,	// (0x000364b3) list_single_touch_menu_pane_t1

0x781f,	// (0x00031c73) bg_popup_sub_pane_cp7_ParamLimits

0x781f,	// (0x00031c73) bg_popup_sub_pane_cp7

0xc06d,	// (0x000364c1) heading_sub_pane

0xc075,	// (0x000364c9) list_touch_info_pane_ParamLimits

0xc075,	// (0x000364c9) list_touch_info_pane

0xc084,	// (0x000364d8) list_single_touch_info_pane_ParamLimits

0xc084,	// (0x000364d8) list_single_touch_info_pane

0xc096,	// (0x000364ea) list_single_touch_info_pane_t1

0xc0a4,	// (0x000364f8) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00039f61) list_single_touch_info_pane_t

0x8cf0,	// (0x00033144) bg_popup_heading_pane_cp

0xc0b2,	// (0x00036506) heading_sub_pane_t1

0x9bdc,	// (0x00034030) bg_popup_preview_window_pane_cp_ParamLimits

0x9bdc,	// (0x00034030) bg_popup_preview_window_pane_cp

0xc06d,	// (0x000364c1) heading_preview_pane

0xc075,	// (0x000364c9) list_preview_pane_ParamLimits

0xc075,	// (0x000364c9) list_preview_pane

0xc0c0,	// (0x00036514) popup_preview_window_g1

0xc084,	// (0x000364d8) list_single_preview_pane_ParamLimits

0xc084,	// (0x000364d8) list_single_preview_pane

0xc0c8,	// (0x0003651c) list_single_preview_pane_g1

0xc0d0,	// (0x00036524) list_single_preview_pane_t1

0xc096,	// (0x000364ea) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00039f66) list_single_preview_pane_t

0xc0de,	// (0x00036532) bg_popup_heading_pane_cp2_ParamLimits

0xc0de,	// (0x00036532) bg_popup_heading_pane_cp2

0xc0f4,	// (0x00036548) heading_preview_pane_g1

0xc0fc,	// (0x00036550) heading_preview_pane_t1_ParamLimits

0xc0fc,	// (0x00036550) heading_preview_pane_t1

0x790b,	// (0x00031d5f) soft_indicator_pane_t1_ParamLimits

0x7ffe,	// (0x00032452) scroll_pane_ParamLimits

0x8523,	// (0x00032977) scroll_sc2_left_pane

0x852c,	// (0x00032980) scroll_sc2_right_pane

0x854b,	// (0x0003299f) scroll_bg_pane_g1_ParamLimits

0x8560,	// (0x000329b4) scroll_bg_pane_g2_ParamLimits

0x8578,	// (0x000329cc) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00039b53) scroll_bg_pane_g_ParamLimits

0x854b,	// (0x0003299f) scroll_handle_pane_g1_ParamLimits

0x859a,	// (0x000329ee) scroll_handle_pane_g2_ParamLimits

0x8578,	// (0x000329cc) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x00039b5a) scroll_handle_pane_g_ParamLimits

0x907e,	// (0x000334d2) popup_choice_list_window_ParamLimits

0x907e,	// (0x000334d2) popup_choice_list_window

0x9a36,	// (0x00033e8a) choice_list_pane

0x9ab8,	// (0x00033f0c) cell_toolbar_pane_t1

0x9ae0,	// (0x00033f34) toolbar_button_pane_ParamLimits

0xac0d,	// (0x00035061) ai_gene_pane_1_t2_ParamLimits

0xac0d,	// (0x00035061) ai_gene_pane_1_t2

0x0001,

0xf923,	// (0x00039d77) ai_gene_pane_1_t_ParamLimits

0xf923,	// (0x00039d77) ai_gene_pane_1_t

0xc119,	// (0x0003656d) scroll_sc2_left_pane_g1

0xc119,	// (0x0003656d) scroll_sc2_right_pane_g1

0x9056,	// (0x000334aa) bg_popup_sub_pane_cp10

0xc123,	// (0x00036577) list_choice_list_pane

0xc13a,	// (0x0003658e) list_single_choice_list_pane_ParamLimits

0xc13a,	// (0x0003658e) list_single_choice_list_pane

0xc14e,	// (0x000365a2) list_single_choice_list_pane_g1

0xc156,	// (0x000365aa) list_single_choice_list_pane_t1_ParamLimits

0xc156,	// (0x000365aa) list_single_choice_list_pane_t1

0xc16b,	// (0x000365bf) choice_list_pane_g1

0xc173,	// (0x000365c7) choice_list_pane_t1

0x772b,	// (0x00031b7f) input_focus_pane_cp11

0x8400,	// (0x00032854) title_pane_stacon_g2_ParamLimits

0x8400,	// (0x00032854) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x00039b39) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x00039b39) title_pane_stacon_g

0x8cf0,	// (0x00033144) cursor_press_pane

0x9126,	// (0x0003357a) popup_fep_hwr_window_ParamLimits

0x9126,	// (0x0003357a) popup_fep_hwr_window

0x91a0,	// (0x000335f4) popup_fep_vkb_window_ParamLimits

0x91a0,	// (0x000335f4) popup_fep_vkb_window

0xc181,	// (0x000365d5) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00039f8f) fep_vkb_side_pane_g_ParamLimits

0x61dc,	// (0x00030630) fep_hwr_candidate_pane_ParamLimits

0x61dc,	// (0x00030630) fep_hwr_candidate_pane

0x6206,	// (0x0003065a) fep_hwr_side_pane_ParamLimits

0x6206,	// (0x0003065a) fep_hwr_side_pane

0x6226,	// (0x0003067a) fep_hwr_top_pane_ParamLimits

0x6226,	// (0x0003067a) fep_hwr_top_pane

0x623e,	// (0x00030692) fep_hwr_write_pane_ParamLimits

0x623e,	// (0x00030692) fep_hwr_write_pane

0xfb3b,	// (0x00039f8f) fep_vkb_side_pane_g

0xc189,	// (0x000365dd) fep_hwr_top_pane_g1

0xc19b,	// (0x000365ef) fep_hwr_top_pane_g2

0x6278,	// (0x000306cc) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00039f6b) fep_hwr_top_pane_g

0x628d,	// (0x000306e1) fep_hwr_top_text_pane

0x8713,	// (0x00032b67) fep_hwr_top_text_pane_g1

0xc1d1,	// (0x00036625) fep_hwr_top_text_pane_t1

0x6383,	// (0x000307d7) fep_hwr_candidate_pane_g1

0xc424,	// (0x00036878) fep_vkb_keypad_pane_g3_ParamLimits

0xc424,	// (0x00036878) fep_vkb_keypad_pane_g3

0xc44c,	// (0x000368a0) fep_vkb_keypad_pane_g4_ParamLimits

0xc44c,	// (0x000368a0) fep_vkb_keypad_pane_g4

0xc4bb,	// (0x0003690f) fep_vkb_bottom_pane_g2_ParamLimits

0xc4bb,	// (0x0003690f) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00039f96) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00039f96) fep_vkb_bottom_pane_g

0xc119,	// (0x0003656d) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00039fa0) cell_vkb_side_pane_g

0xc546,	// (0x0003699a) cell_vkb_side_pane_t1

0xc554,	// (0x000369a8) cell_vkb_side_pane_t1_copy1

0xc119,	// (0x0003656d) bg_fep_vkb_candidate_pane_g2

0xc680,	// (0x00036ad4) cell_vkb_candidate_pane_ParamLimits

0xc1df,	// (0x00036633) aid_size_cell_vkb_ParamLimits

0xc1df,	// (0x00036633) aid_size_cell_vkb

0xc680,	// (0x00036ad4) cell_vkb_candidate_pane

0x63aa,	// (0x000307fe) bg_popup_fep_shadow_pane_g1

0xc26d,	// (0x000366c1) fep_vkb_bottom_pane_ParamLimits

0xc26d,	// (0x000366c1) fep_vkb_bottom_pane

0xc2a3,	// (0x000366f7) fep_vkb_candidate_pane_ParamLimits

0xc2a3,	// (0x000366f7) fep_vkb_candidate_pane

0xc2bf,	// (0x00036713) fep_vkb_keypad_pane_ParamLimits

0xc2bf,	// (0x00036713) fep_vkb_keypad_pane

0xc305,	// (0x00036759) fep_vkb_side_pane_ParamLimits

0xc305,	// (0x00036759) fep_vkb_side_pane

0xc341,	// (0x00036795) fep_vkb_top_pane_ParamLimits

0xc341,	// (0x00036795) fep_vkb_top_pane

0xc37d,	// (0x000367d1) fep_vkb_top_pane_g1_ParamLimits

0xc37d,	// (0x000367d1) fep_vkb_top_pane_g1

0xc38c,	// (0x000367e0) fep_vkb_top_pane_g2_ParamLimits

0xc38c,	// (0x000367e0) fep_vkb_top_pane_g2

0xc39b,	// (0x000367ef) fep_vkb_top_pane_g3_ParamLimits

0xc39b,	// (0x000367ef) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00039f86) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00039f86) fep_vkb_top_pane_g

0xc3b9,	// (0x0003680d) fep_vkb_top_text_pane_ParamLimits

0xc3b9,	// (0x0003680d) fep_vkb_top_text_pane

0xc3ca,	// (0x0003681e) fep_vkb_side_pane_g1_ParamLimits

0xc3ca,	// (0x0003681e) fep_vkb_side_pane_g1

0xc413,	// (0x00036867) grid_vkb_side_pane_ParamLimits

0xc413,	// (0x00036867) grid_vkb_side_pane

0x63b2,	// (0x00030806) bg_popup_fep_shadow_pane_g2

0x63bb,	// (0x0003080f) bg_popup_fep_shadow_pane_g3

0x63c3,	// (0x00030817) bg_popup_fep_shadow_pane_g4

0x63cc,	// (0x00030820) bg_popup_fep_shadow_pane_g5

0x63d6,	// (0x0003082a) bg_popup_fep_shadow_pane_g6

0x63de,	// (0x00030832) bg_popup_fep_shadow_pane_g7

0x810a,	// (0x0003255e) bg_popup_fep_shadow_pane_g8

0xc46a,	// (0x000368be) grid_vkb_keypad_number_pane_ParamLimits

0xc46a,	// (0x000368be) grid_vkb_keypad_number_pane

0xc47a,	// (0x000368ce) grid_vkb_keypad_pane_ParamLimits

0xc47a,	// (0x000368ce) grid_vkb_keypad_pane

0xc4a0,	// (0x000368f4) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a0,	// (0x000368f4) fep_vkb_bottom_pane_g1

0xc4c9,	// (0x0003691d) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c9,	// (0x0003691d) grid_vkb_keypad_bottom_left_pane

0xc4de,	// (0x00036932) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4de,	// (0x00036932) grid_vkb_keypad_bottom_right_pane

0xc4f3,	// (0x00036947) fep_vkb_top_text_pane_g1

0xc50e,	// (0x00036962) fep_vkb_top_text_pane_t1

0xc523,	// (0x00036977) cell_vkb_side_pane_ParamLimits

0xc523,	// (0x00036977) cell_vkb_side_pane

0xc119,	// (0x0003656d) cell_vkb_side_pane_g1

0xc562,	// (0x000369b6) cell_vkb_keypad_pane_ParamLimits

0xc562,	// (0x000369b6) cell_vkb_keypad_pane

0xc5d7,	// (0x00036a2b) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00039fb3) bg_popup_fep_shadow_pane_g

0x63f0,	// (0x00030844) cell_hwr_side_pane_g1

0x63f0,	// (0x00030844) cell_hwr_side_pane_g2

0xc5e1,	// (0x00036a35) cell_vkb_keypad_pane_t1

0xc5ef,	// (0x00036a43) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ef,	// (0x00036a43) cell_vkb_keypad_bottom_left_pane

0xc60c,	// (0x00036a60) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc60c,	// (0x00036a60) cell_vkb_keypad_bottom_right_pane

0xc119,	// (0x0003656d) cell_vkb_keypad_bottom_left_pane_g1

0xc119,	// (0x0003656d) cell_vkb_keypad_bottom_right_pane_g1

0xc645,	// (0x00036a99) cell_vkb_keypad_number_pane_ParamLimits

0xc645,	// (0x00036a99) cell_vkb_keypad_number_pane

0xc664,	// (0x00036ab8) cell_vkb_keypad_number_pane_g1

0xc66e,	// (0x00036ac2) cell_vkb_keypad_number_pane_g2

0xc677,	// (0x00036acb) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00039fa5) cell_vkb_keypad_number_pane_g

0xc5e1,	// (0x00036a35) cell_vkb_keypad_number_pane_t1

0xc69b,	// (0x00036aef) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00039fc6) cell_hwr_side_pane_g

0xc6b4,	// (0x00036b08) cell_hwr_side_pane_t1

0x63fa,	// (0x0003084e) cell_hwr_side_pane_t1_copy1

0x6408,	// (0x0003085c) cell_hwr_candidate_pane_g1

0x6437,	// (0x0003088b) cell_hwr_candidate_pane_t1

0xc119,	// (0x0003656d) cell_vkb_candidate_pane_g2

0xc719,	// (0x00036b6d) cell_vkb_candidate_pane_t1

0x61a3,	// (0x000305f7) bg_popup_fep_shadow_pane_ParamLimits

0x61a3,	// (0x000305f7) bg_popup_fep_shadow_pane

0x6258,	// (0x000306ac) bg_fep_hwr_top_pane_g4

0xc1ad,	// (0x00036601) bg_hwr_side_pane_g1_ParamLimits

0xc1ad,	// (0x00036601) bg_hwr_side_pane_g1

0x62c9,	// (0x0003071d) cell_hwr_side_pane_ParamLimits

0x62c9,	// (0x0003071d) cell_hwr_side_pane

0x6304,	// (0x00030758) fep_hwr_write_pane_g1_ParamLimits

0x6304,	// (0x00030758) fep_hwr_write_pane_g1

0x6311,	// (0x00030765) fep_hwr_write_pane_g2_ParamLimits

0x6311,	// (0x00030765) fep_hwr_write_pane_g2

0x631e,	// (0x00030772) fep_hwr_write_pane_g3_ParamLimits

0x631e,	// (0x00030772) fep_hwr_write_pane_g3

0x632c,	// (0x00030780) fep_hwr_write_pane_g4_ParamLimits

0x632c,	// (0x00030780) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00039f72) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00039f72) fep_hwr_write_pane_g

0x6258,	// (0x000306ac) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6258,	// (0x000306ac) bg_fep_hwr_candidate_pane_g2

0x6341,	// (0x00030795) cell_hwr_candidate_pane_ParamLimits

0x6341,	// (0x00030795) cell_hwr_candidate_pane

0x6383,	// (0x000307d7) fep_hwr_candidate_pane_g1_ParamLimits

0xc20d,	// (0x00036661) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc20d,	// (0x00036661) bg_popup_fep_shadow_pane_cp2

0xc3ab,	// (0x000367ff) fep_vkb_top_pane_g4_ParamLimits

0xc3ab,	// (0x000367ff) fep_vkb_top_pane_g4

0xc3f1,	// (0x00036845) fep_vkb_side_pane_g2_ParamLimits

0xc3f1,	// (0x00036845) fep_vkb_side_pane_g2

0x542b,	// (0x0002f87f) list_setting_pane_t4_ParamLimits

0x542b,	// (0x0002f87f) list_setting_pane_t4

0x54c5,	// (0x0002f919) list_setting_number_pane_t5_ParamLimits

0x54c5,	// (0x0002f919) list_setting_number_pane_t5

0x8755,	// (0x00032ba9) list_double_heading_pane_cp2_ParamLimits

0x8755,	// (0x00032ba9) list_double_heading_pane_cp2

0x80a5,	// (0x000324f9) list_double_heading_pane_g1_cp2_ParamLimits

0x80a5,	// (0x000324f9) list_double_heading_pane_g1_cp2

0x80b1,	// (0x00032505) list_double_heading_pane_g2_cp2_ParamLimits

0x80b1,	// (0x00032505) list_double_heading_pane_g2_cp2

0xc727,	// (0x00036b7b) list_double_heading_pane_t1_cp2_ParamLimits

0xc727,	// (0x00036b7b) list_double_heading_pane_t1_cp2

0xc73d,	// (0x00036b91) list_double_heading_pane_t2_cp2_ParamLimits

0xc73d,	// (0x00036b91) list_double_heading_pane_t2_cp2

0x7713,	// (0x00031b67) aid_value_unit2

0x4e6e,	// (0x0002f2c2) popup_preview_fixed_window

0x7aa8,	// (0x00031efc) bg_popup_preview_window_pane_cp02

0xc74f,	// (0x00036ba3) list_preview_fixed_pane

0xc795,	// (0x00036be9) list_empty_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_empty_pane_fp

0xc795,	// (0x00036be9) list_single_cale_day_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_cale_day_pane_fp

0xc795,	// (0x00036be9) list_single_graphic_heading_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_graphic_heading_pane_fp

0xc795,	// (0x00036be9) list_single_graphic_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_graphic_pane_fp

0xc795,	// (0x00036be9) list_single_heading_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_heading_pane_fp

0xc795,	// (0x00036be9) list_single_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_pane_fp

0xc7aa,	// (0x00036bfe) list_single_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00036bfe) list_single_pane_fp_g1

0x7380,	// (0x000317d4) list_single_pane_fp_g2_ParamLimits

0x7380,	// (0x000317d4) list_single_pane_fp_g2

0x738c,	// (0x000317e0) list_single_pane_fp_g3_ParamLimits

0x738c,	// (0x000317e0) list_single_pane_fp_g3

0xc7b6,	// (0x00036c0a) list_single_pane_fp_g4_ParamLimits

0xc7b6,	// (0x00036c0a) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00039fd9) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00039fd9) list_single_pane_fp_g

0x73a0,	// (0x000317f4) list_single_pane_fp_t1_ParamLimits

0x73a0,	// (0x000317f4) list_single_pane_fp_t1

0x73b7,	// (0x0003180b) list_single_graphic_pane_fp_g1_ParamLimits

0x73b7,	// (0x0003180b) list_single_graphic_pane_fp_g1

0xc7aa,	// (0x00036bfe) list_single_graphic_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00036bfe) list_single_graphic_pane_fp_g2

0x7380,	// (0x000317d4) list_single_graphic_pane_fp_g3_ParamLimits

0x7380,	// (0x000317d4) list_single_graphic_pane_fp_g3

0x738c,	// (0x000317e0) list_single_graphic_pane_fp_g4_ParamLimits

0x738c,	// (0x000317e0) list_single_graphic_pane_fp_g4

0xc7b6,	// (0x00036c0a) list_single_graphic_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00036c0a) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00039fe2) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00039fe2) list_single_graphic_pane_fp_g

0x73c3,	// (0x00031817) list_single_graphic_pane_fp_t1_ParamLimits

0x73c3,	// (0x00031817) list_single_graphic_pane_fp_t1

0x73b7,	// (0x0003180b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x73b7,	// (0x0003180b) list_single_graphic_heading_pane_fp_g1

0xc7aa,	// (0x00036bfe) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00036bfe) list_single_graphic_heading_pane_fp_g2

0x7380,	// (0x000317d4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7380,	// (0x000317d4) list_single_graphic_heading_pane_fp_g3

0x738c,	// (0x000317e0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x738c,	// (0x000317e0) list_single_graphic_heading_pane_fp_g4

0xc7b6,	// (0x00036c0a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00036c0a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00039fe2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00039fe2) list_single_graphic_heading_pane_fp_g

0x73d9,	// (0x0003182d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x73d9,	// (0x0003182d) list_single_graphic_heading_pane_fp_t1

0x73ef,	// (0x00031843) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x73ef,	// (0x00031843) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00039fed) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00039fed) list_single_graphic_heading_pane_fp_t

0x7401,	// (0x00031855) list_single_cale_day_pane_fp_g1_ParamLimits

0x7401,	// (0x00031855) list_single_cale_day_pane_fp_g1

0xc7c2,	// (0x00036c16) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7c2,	// (0x00036c16) list_single_cale_day_pane_fp_g2

0x7439,	// (0x0003188d) list_single_cale_day_pane_fp_g3_ParamLimits

0x7439,	// (0x0003188d) list_single_cale_day_pane_fp_g3

0x7461,	// (0x000318b5) list_single_cale_day_pane_fp_g4_ParamLimits

0x7461,	// (0x000318b5) list_single_cale_day_pane_fp_g4

0x7485,	// (0x000318d9) list_single_cale_day_pane_fp_g5_ParamLimits

0x7485,	// (0x000318d9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00039ff2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00039ff2) list_single_cale_day_pane_fp_g

0x74a9,	// (0x000318fd) list_single_cale_day_pane_fp_t1_ParamLimits

0x74a9,	// (0x000318fd) list_single_cale_day_pane_fp_t1

0x74cf,	// (0x00031923) list_single_cale_day_pane_fp_t2_ParamLimits

0x74cf,	// (0x00031923) list_single_cale_day_pane_fp_t2

0x74e8,	// (0x0003193c) list_single_cale_day_pane_fp_t3_ParamLimits

0x74e8,	// (0x0003193c) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00039ffd) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00039ffd) list_single_cale_day_pane_fp_t

0xc7aa,	// (0x00036bfe) list_empty_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00036bfe) list_empty_pane_fp_g1

0x7501,	// (0x00031955) list_empty_pane_fp_t1

0x750f,	// (0x00031963) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0003a004) list_empty_pane_fp_t

0xc7aa,	// (0x00036bfe) list_single_heading_pane_fp_g1_ParamLimits

0xc7aa,	// (0x00036bfe) list_single_heading_pane_fp_g1

0x7380,	// (0x000317d4) list_single_heading_pane_fp_g2_ParamLimits

0x7380,	// (0x000317d4) list_single_heading_pane_fp_g2

0x738c,	// (0x000317e0) list_single_heading_pane_fp_g3_ParamLimits

0x738c,	// (0x000317e0) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0003a009) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0003a009) list_single_heading_pane_fp_g

0x751d,	// (0x00031971) list_single_heading_pane_fp_t1_ParamLimits

0x751d,	// (0x00031971) list_single_heading_pane_fp_t1

0x752f,	// (0x00031983) list_single_heading_pane_fp_t2_ParamLimits

0x752f,	// (0x00031983) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0003a010) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0003a010) list_single_heading_pane_fp_t

0x8297,	// (0x000326eb) aid_size_cell_fast

0x7a18,	// (0x00031e6c) soft_indicator_pane_cp1_t1

0x82d4,	// (0x00032728) cell_app_pane_cp2_ParamLimits

0x82d4,	// (0x00032728) cell_app_pane_cp2

0x61c5,	// (0x00030619) fep_hwr_candidate_drop_down_list_pane

0x639d,	// (0x000307f1) fep_hwr_candidate_pane_g3_ParamLimits

0x639d,	// (0x000307f1) fep_hwr_candidate_pane_g3

0x39c1,	// (0x0002de15) fep_hwr_candidate_pane_g4_ParamLimits

0x39c1,	// (0x0002de15) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00039f7f) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00039f7f) fep_hwr_candidate_pane_g

0xc292,	// (0x000366e6) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc292,	// (0x000366e6) fep_vkb_candidate_drop_down_list_pane

0xc6a3,	// (0x00036af7) fep_vkb_candidate_pane_g3

0xc6ab,	// (0x00036aff) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00039fac) fep_vkb_candidate_pane_g

0x6408,	// (0x0003085c) cell_hwr_candidate_pane_g1_ParamLimits

0x6416,	// (0x0003086a) cell_hwr_candidate_pane_g3_ParamLimits

0x6416,	// (0x0003086a) cell_hwr_candidate_pane_g3

0xdf13,	// (0x00038367) cell_hwr_candidate_pane_g4_ParamLimits

0xdf13,	// (0x00038367) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00039fcb) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00039fcb) cell_hwr_candidate_pane_g

0xc6c2,	// (0x00036b16) cell_vkb_candidate_pane_g3_ParamLimits

0xc6c2,	// (0x00036b16) cell_vkb_candidate_pane_g3

0xc6dd,	// (0x00036b31) cell_vkb_candidate_pane_g4_ParamLimits

0xc6dd,	// (0x00036b31) cell_vkb_candidate_pane_g4

0xc7ce,	// (0x00036c22) cell_app_pane_cp2_g1_ParamLimits

0xc7ce,	// (0x00036c22) cell_app_pane_cp2_g1

0xc7ec,	// (0x00036c40) cell_app_pane_cp2_g2_ParamLimits

0xc7ec,	// (0x00036c40) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0003a015) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0003a015) cell_app_pane_cp2_g

0xc7f8,	// (0x00036c4c) cell_app_pane_cp2_t1_ParamLimits

0xc7f8,	// (0x00036c4c) cell_app_pane_cp2_t1

0x808b,	// (0x000324df) grid_highlight_pane_cp1_ParamLimits

0x808b,	// (0x000324df) grid_highlight_pane_cp1

0x6455,	// (0x000308a9) cell_hwr_candidate_pane_cp1_ParamLimits

0x6455,	// (0x000308a9) cell_hwr_candidate_pane_cp1

0x6408,	// (0x0003085c) fep_hwr_candidate_drop_down_list_pane_g1

0x6474,	// (0x000308c8) fep_hwr_candidate_drop_down_list_pane_g2

0x6481,	// (0x000308d5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0003a01a) fep_hwr_candidate_drop_down_list_pane_g

0x648e,	// (0x000308e2) fep_hwr_candidate_drop_down_list_scroll_pane

0x6497,	// (0x000308eb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6497,	// (0x000308eb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x64a4,	// (0x000308f8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x64a4,	// (0x000308f8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x64b1,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x64b1,	// (0x00030905) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x64be,	// (0x00030912) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x64be,	// (0x00030912) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x64d9,	// (0x0003092d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x64d9,	// (0x0003092d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x64f4,	// (0x00030948) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x64f4,	// (0x00030948) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x650f,	// (0x00030963) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x650f,	// (0x00030963) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x652a,	// (0x0003097e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x652a,	// (0x0003097e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0003a021) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0003a021) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc80a,	// (0x00036c5e) cell_vkb_candidate_pane_cp1_ParamLimits

0xc80a,	// (0x00036c5e) cell_vkb_candidate_pane_cp1

0xc3ab,	// (0x000367ff) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3ab,	// (0x000367ff) fep_vkb_candidate_drop_down_list_pane_g1

0xc82a,	// (0x00036c7e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc82a,	// (0x00036c7e) fep_vkb_candidate_drop_down_list_pane_g2

0xc837,	// (0x00036c8b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc837,	// (0x00036c8b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0003a032) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0003a032) fep_vkb_candidate_drop_down_list_pane_g

0xc844,	// (0x00036c98) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc844,	// (0x00036c98) fep_vkb_candidate_drop_down_list_scroll_pane

0xc851,	// (0x00036ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc851,	// (0x00036ca5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc85e,	// (0x00036cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc85e,	// (0x00036cb2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc86a,	// (0x00036cbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc86a,	// (0x00036cbe) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc6f8,	// (0x00036b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc6f8,	// (0x00036b4c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc876,	// (0x00036cca) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc876,	// (0x00036cca) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc897,	// (0x00036ceb) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc897,	// (0x00036ceb) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8b8,	// (0x00036d0c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8b8,	// (0x00036d0c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8d9,	// (0x00036d2d) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8d9,	// (0x00036d2d) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0003a039) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0003a039) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7749,	// (0x00031b9d) title_pane_g1_ParamLimits

0x7756,	// (0x00031baa) title_pane_g2_ParamLimits

0xf56a,	// (0x000399be) title_pane_g_ParamLimits

0x8703,	// (0x00032b57) aid_call2_pane

0x870b,	// (0x00032b5f) aid_call_pane

0x8713,	// (0x00032b67) popup_clock_analogue_window_g1

0x8713,	// (0x00032b67) popup_clock_analogue_window_g2

0x5903,	// (0x0002fd57) popup_clock_analogue_window_g3

0x590c,	// (0x0002fd60) popup_clock_analogue_window_g4

0x7735,	// (0x00031b89) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x00039b68) popup_clock_analogue_window_g

0x5914,	// (0x0002fd68) popup_clock_analogue_window_t1

0x5922,	// (0x0002fd76) clock_digital_number_pane_ParamLimits

0x5922,	// (0x0002fd76) clock_digital_number_pane

0x592e,	// (0x0002fd82) clock_digital_number_pane_cp02_ParamLimits

0x592e,	// (0x0002fd82) clock_digital_number_pane_cp02

0x593a,	// (0x0002fd8e) clock_digital_number_pane_cp03_ParamLimits

0x593a,	// (0x0002fd8e) clock_digital_number_pane_cp03

0x5946,	// (0x0002fd9a) clock_digital_number_pane_cp04_ParamLimits

0x5946,	// (0x0002fd9a) clock_digital_number_pane_cp04

0x5952,	// (0x0002fda6) clock_digital_separator_pane_ParamLimits

0x5952,	// (0x0002fda6) clock_digital_separator_pane

0x595e,	// (0x0002fdb2) popup_clock_digital_window_t1_ParamLimits

0x595e,	// (0x0002fdb2) popup_clock_digital_window_t1

0x7735,	// (0x00031b89) clock_digital_number_pane_g1

0x7735,	// (0x00031b89) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x00039b73) clock_digital_number_pane_g

0x7735,	// (0x00031b89) clock_digital_separator_pane_g1

0x7735,	// (0x00031b89) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x00039b73) clock_digital_separator_pane_g

0x960f,	// (0x00033a63) aid_fill_nsta_ParamLimits

0x9751,	// (0x00033ba5) indicator_nsta_pane_ParamLimits

0x98c3,	// (0x00033d17) popup_clock_analogue_window

0x98c3,	// (0x00033d17) popup_clock_digital_window

0x781f,	// (0x00031c73) grid_indicator_nsta_pane_ParamLimits

0xbaf8,	// (0x00035f4c) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00039eff) clock_nsta_pane_t

0x58c7,	// (0x0002fd1b) aid_size_max_handle

0x58d1,	// (0x0002fd25) aid_size_min_handle

0x8cf0,	// (0x00033144) editor_scroll_pane

0xc8f4,	// (0x00036d48) ex_editor_pane

0x8205,	// (0x00032659) scroll_pane_cp13

0x802a,	// (0x0003247e) scroll_pane_cp14

0x873d,	// (0x00032b91) scroll_pane_cp36

0x8769,	// (0x00032bbd) list_single_graphic_hl_pane_cp2_ParamLimits

0x8769,	// (0x00032bbd) list_single_graphic_hl_pane_cp2

0xb120,	// (0x00035574) list_single_graphic_hl_pane_ParamLimits

0xb120,	// (0x00035574) list_single_graphic_hl_pane

0x7545,	// (0x00031999) aid_size_min_hl_cp1

0xc8fc,	// (0x00036d50) list_highlight_pane_cp34_ParamLimits

0xc8fc,	// (0x00036d50) list_highlight_pane_cp34

0xc90d,	// (0x00036d61) list_single_graphic_hl_pane_g1_ParamLimits

0xc90d,	// (0x00036d61) list_single_graphic_hl_pane_g1

0x754e,	// (0x000319a2) list_single_graphic_hl_pane_g2_ParamLimits

0x754e,	// (0x000319a2) list_single_graphic_hl_pane_g2

0x754e,	// (0x000319a2) list_single_graphic_hl_pane_g3_ParamLimits

0x754e,	// (0x000319a2) list_single_graphic_hl_pane_g3

0x6f42,	// (0x00031396) list_single_graphic_hl_pane_g4_ParamLimits

0x6f42,	// (0x00031396) list_single_graphic_hl_pane_g4

0x755a,	// (0x000319ae) list_single_graphic_hl_pane_g5_ParamLimits

0x755a,	// (0x000319ae) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0003a04a) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0003a04a) list_single_graphic_hl_pane_g

0x756e,	// (0x000319c2) list_single_graphic_hl_pane_t1_ParamLimits

0x756e,	// (0x000319c2) list_single_graphic_hl_pane_t1

0xc91a,	// (0x00036d6e) aid_size_min_hl_cp2

0xc923,	// (0x00036d77) list_highlight_pane_cp34_cp2_ParamLimits

0xc923,	// (0x00036d77) list_highlight_pane_cp34_cp2

0xc90d,	// (0x00036d61) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc90d,	// (0x00036d61) list_single_graphic_hl_pane_g1_cp2

0xc930,	// (0x00036d84) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc930,	// (0x00036d84) list_single_graphic_hl_pane_g2_cp2

0xc93c,	// (0x00036d90) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc93c,	// (0x00036d90) list_single_graphic_hl_pane_g3_cp2

0xa741,	// (0x00034b95) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xa741,	// (0x00034b95) list_single_graphic_hl_pane_g4_cp2

0xc94a,	// (0x00036d9e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc94a,	// (0x00036d9e) list_single_graphic_hl_pane_g5_cp2

0x5c10,	// (0x00030064) control_pane_g4_ParamLimits

0x5c10,	// (0x00030064) control_pane_g4

0x9056,	// (0x000334aa) bg_popup_sub_pane_cp10_ParamLimits

0xc123,	// (0x00036577) list_choice_list_pane_ParamLimits

0xc132,	// (0x00036586) scroll_pane_cp23

0x7aa8,	// (0x00031efc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc74f,	// (0x00036ba3) list_preview_fixed_pane_ParamLimits

0xc765,	// (0x00036bb9) list_preview_fixed_pane_cp_ParamLimits

0xc765,	// (0x00036bb9) list_preview_fixed_pane_cp

0xc771,	// (0x00036bc5) popup_preview_fixed_window_g1_ParamLimits

0xc771,	// (0x00036bc5) popup_preview_fixed_window_g1

0xc77d,	// (0x00036bd1) popup_preview_fixed_window_g2_ParamLimits

0xc77d,	// (0x00036bd1) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00039fd2) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00039fd2) popup_preview_fixed_window_g

0x583b,	// (0x0002fc8f) aid_navi_side_left_pane_ParamLimits

0x5850,	// (0x0002fca4) aid_navi_side_right_pane_ParamLimits

0x5868,	// (0x0002fcbc) navi_icon_pane_stacon_ParamLimits

0x587c,	// (0x0002fcd0) navi_navi_pane_stacon_ParamLimits

0x5868,	// (0x0002fcbc) navi_text_pane_stacon_ParamLimits

0x772b,	// (0x00031b7f) main_text_info_pane

0xc974,	// (0x00036dc8) listscroll_text_info_pane

0xc97c,	// (0x00036dd0) list_text_info_pane_ParamLimits

0xc97c,	// (0x00036dd0) list_text_info_pane

0xc98b,	// (0x00036ddf) scroll_pane_cp24_ParamLimits

0xc98b,	// (0x00036ddf) scroll_pane_cp24

0xc9a9,	// (0x00036dfd) list_text_info_pane_t1_ParamLimits

0xc9a9,	// (0x00036dfd) list_text_info_pane_t1

0x9098,	// (0x000334ec) popup_fast_swap2_window_ParamLimits

0x9098,	// (0x000334ec) popup_fast_swap2_window

0xc9da,	// (0x00036e2e) aid_size_cell_fast2

0x772b,	// (0x00031b7f) bg_popup_window_pane_cp17

0x9f9e,	// (0x000343f2) heading_pane_cp2

0x7cf4,	// (0x00032148) listscroll_fast2_pane

0xc9e4,	// (0x00036e38) grid_fast2_pane

0xc9ee,	// (0x00036e42) listscroll_fast2_pane_g1

0xc9f6,	// (0x00036e4a) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0003a055) listscroll_fast2_pane_g

0x8205,	// (0x00032659) scroll_pane_cp26

0xca00,	// (0x00036e54) cell_fast2_pane_ParamLimits

0xca00,	// (0x00036e54) cell_fast2_pane

0xca15,	// (0x00036e69) cell_fast2_pane_g1

0xca1e,	// (0x00036e72) cell_fast2_pane_g2

0xca27,	// (0x00036e7b) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0003a05a) cell_fast2_pane_g

0x7de7,	// (0x0003223b) grid_highlight_pane_cp9

0x7dfc,	// (0x00032250) main_eswt_pane_ParamLimits

0x7dfc,	// (0x00032250) main_eswt_pane

0xc9a0,	// (0x00036df4) list_single_text_info_pane

0xca2f,	// (0x00036e83) eswt_ctrl_button_pane

0xca2f,	// (0x00036e83) eswt_ctrl_canvas_pane

0xca37,	// (0x00036e8b) eswt_ctrl_combo_pane

0xca2f,	// (0x00036e83) eswt_ctrl_default_pane

0xca2f,	// (0x00036e83) eswt_ctrl_label_pane

0xca3f,	// (0x00036e93) eswt_ctrl_wait_pane

0xca47,	// (0x00036e9b) eswt_shell_pane

0x772b,	// (0x00031b7f) listscroll_eswt_app_pane

0xca67,	// (0x00036ebb) popup_eswt_tasktip_window_ParamLimits

0xca67,	// (0x00036ebb) popup_eswt_tasktip_window

0x9bdc,	// (0x00034030) bg_popup_window_pane_cp18

0xca78,	// (0x00036ecc) eswt_control_pane_g1_ParamLimits

0xca78,	// (0x00036ecc) eswt_control_pane_g1

0xca85,	// (0x00036ed9) eswt_control_pane_g2_ParamLimits

0xca85,	// (0x00036ed9) eswt_control_pane_g2

0xca92,	// (0x00036ee6) eswt_control_pane_g3_ParamLimits

0xca92,	// (0x00036ee6) eswt_control_pane_g3

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_ParamLimits

0xca9f,	// (0x00036ef3) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0003a061) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0003a061) eswt_control_pane_g

0x808b,	// (0x000324df) bg_button_pane_ParamLimits

0x808b,	// (0x000324df) bg_button_pane

0x7dfc,	// (0x00032250) common_borders_pane_copy2_ParamLimits

0x7dfc,	// (0x00032250) common_borders_pane_copy2

0xcaac,	// (0x00036f00) control_button_pane_g1_ParamLimits

0xcaac,	// (0x00036f00) control_button_pane_g1

0xcab8,	// (0x00036f0c) control_button_pane_g2_ParamLimits

0xcab8,	// (0x00036f0c) control_button_pane_g2

0xcac4,	// (0x00036f18) control_button_pane_g3_ParamLimits

0xcac4,	// (0x00036f18) control_button_pane_g3

0x0002,

0xfc16,	// (0x0003a06a) control_button_pane_g_ParamLimits

0xfc16,	// (0x0003a06a) control_button_pane_g

0xcad8,	// (0x00036f2c) control_button_pane_t1

0xcae6,	// (0x00036f3a) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0003a071) control_button_pane_t

0x9aec,	// (0x00033f40) bg_button_pane_g1

0x9afc,	// (0x00033f50) bg_button_pane_g2

0x9af4,	// (0x00033f48) bg_button_pane_g3

0x9b0c,	// (0x00033f60) bg_button_pane_g4

0x9b04,	// (0x00033f58) bg_button_pane_g5

0x9b14,	// (0x00033f68) bg_button_pane_g6

0x9b1c,	// (0x00033f70) bg_button_pane_g7

0x9b2c,	// (0x00033f80) bg_button_pane_g8

0x9b24,	// (0x00033f78) bg_button_pane_g9

0x0008,

0xf877,	// (0x00039ccb) bg_button_pane_g

0xc0de,	// (0x00036532) common_borders_pane_ParamLimits

0xc0de,	// (0x00036532) common_borders_pane

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy1_ParamLimits

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy1

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy1_ParamLimits

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy1

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy1_ParamLimits

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy1

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy1_ParamLimits

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy1

0xc119,	// (0x0003656d) bg_eswt_ctrl_canvas_pane_g1

0xc0de,	// (0x00036532) common_borders_pane_cp2_ParamLimits

0xc0de,	// (0x00036532) common_borders_pane_cp2

0xc0de,	// (0x00036532) common_borders_pane_cp3_ParamLimits

0xc0de,	// (0x00036532) common_borders_pane_cp3

0xcaf4,	// (0x00036f48) separator_horizontal_pane

0xcafc,	// (0x00036f50) separator_vertical_pane

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy2_ParamLimits

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy2

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy2_ParamLimits

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy2

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy2_ParamLimits

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy2

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy2_ParamLimits

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy2

0x772b,	// (0x00031b7f) common_borders_pane_cp4

0xcb05,	// (0x00036f59) separator_horizontal_pane_g1

0xcb0e,	// (0x00036f62) separator_horizontal_pane_g2

0xcb17,	// (0x00036f6b) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0003a076) separator_horizontal_pane_g

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy3_ParamLimits

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy3

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy3_ParamLimits

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy3

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy3_ParamLimits

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy3

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy3_ParamLimits

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy3

0x772b,	// (0x00031b7f) common_borders_pane_cp5

0xcb20,	// (0x00036f74) separator_vertical_pane_g1

0xcb29,	// (0x00036f7d) separator_vertical_pane_g2

0xcb32,	// (0x00036f86) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0003a07d) separator_vertical_pane_g

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy4_ParamLimits

0xca78,	// (0x00036ecc) eswt_control_pane_g1_copy4

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy4_ParamLimits

0xca85,	// (0x00036ed9) eswt_control_pane_g2_copy4

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy4_ParamLimits

0xca92,	// (0x00036ee6) eswt_control_pane_g3_copy4

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy4_ParamLimits

0xca9f,	// (0x00036ef3) eswt_control_pane_g4_copy4

0xcb3b,	// (0x00036f8f) eswt_ctrl_combo_button_pane

0xcb43,	// (0x00036f97) eswt_ctrl_input_pane

0xcb4b,	// (0x00036f9f) popup_choice_list_window_cp70

0xcb53,	// (0x00036fa7) eswt_ctrl_input_pane_t1

0x772b,	// (0x00031b7f) input_focus_pane_cp70

0xc0de,	// (0x00036532) bg_button_pane_cp70_ParamLimits

0xc0de,	// (0x00036532) bg_button_pane_cp70

0xcb61,	// (0x00036fb5) eswt_ctrl_combo_button_pane_g1

0xcb69,	// (0x00036fbd) wait_bar_pane_cp70

0x9bdc,	// (0x00034030) bg_popup_window_pane_cp70_ParamLimits

0x9bdc,	// (0x00034030) bg_popup_window_pane_cp70

0xcb71,	// (0x00036fc5) popup_eswt_tasktip_window_t1

0xcb87,	// (0x00036fdb) wait_bar_pane_cp71_ParamLimits

0xcb87,	// (0x00036fdb) wait_bar_pane_cp71

0xcb93,	// (0x00036fe7) grid_eswt_app_pane

0x8523,	// (0x00032977) scroll_pane_cp70

0xcb9c,	// (0x00036ff0) cell_eswt_app_pane_ParamLimits

0xcb9c,	// (0x00036ff0) cell_eswt_app_pane

0xcbcc,	// (0x00037020) cell_eswt_app_pane_g1_ParamLimits

0xcbcc,	// (0x00037020) cell_eswt_app_pane_g1

0xcbfb,	// (0x0003704f) cell_eswt_app_pane_g2_ParamLimits

0xcbfb,	// (0x0003704f) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0003a084) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0003a084) cell_eswt_app_pane_g

0xcc24,	// (0x00037078) cell_eswt_app_pane_t1_ParamLimits

0xcc24,	// (0x00037078) cell_eswt_app_pane_t1

0xcc56,	// (0x000370aa) grid_highlight_pane_cp70_ParamLimits

0xcc56,	// (0x000370aa) grid_highlight_pane_cp70

0x8bc5,	// (0x00033019) set_content_pane_g1

0x8f9c,	// (0x000333f0) status_small_volume_pane

0x6545,	// (0x00030999) status_small_volume_pane_g1

0x654d,	// (0x000309a1) volume_small2_pane

0x6556,	// (0x000309aa) volume_small2_pane_g1

0x655f,	// (0x000309b3) volume_small2_pane_g2

0x6568,	// (0x000309bc) volume_small2_pane_g3

0x6571,	// (0x000309c5) volume_small2_pane_g4

0x657a,	// (0x000309ce) volume_small2_pane_g5

0x6583,	// (0x000309d7) volume_small2_pane_g6

0x658c,	// (0x000309e0) volume_small2_pane_g7

0x6595,	// (0x000309e9) volume_small2_pane_g8

0x659e,	// (0x000309f2) volume_small2_pane_g9

0x65a7,	// (0x000309fb) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0003a089) volume_small2_pane_g

0xc4f3,	// (0x00036947) fep_vkb_top_text_pane_g1_ParamLimits

0xc50e,	// (0x00036962) fep_vkb_top_text_pane_t1_ParamLimits

0xc789,	// (0x00036bdd) popup_preview_fixed_window_g3_ParamLimits

0xc789,	// (0x00036bdd) popup_preview_fixed_window_g3

0x9545,	// (0x00033999) popup_toolbar_trans_pane

0xaf2a,	// (0x0003537e) aid_height_set_list_ParamLimits

0xaf3b,	// (0x0003538f) aid_size_parent_ParamLimits

0x9056,	// (0x000334aa) list_highlight_pane_cp2_ParamLimits

0x8bc5,	// (0x00033019) set_content_pane_g1_ParamLimits

0x70da,	// (0x0003152e) list_single_image_pane_ParamLimits

0x70da,	// (0x0003152e) list_single_image_pane

0xcc62,	// (0x000370b6) aid_size_cell_image_ParamLimits

0xcc62,	// (0x000370b6) aid_size_cell_image

0xcc6f,	// (0x000370c3) grid_single_image_pane_ParamLimits

0xcc6f,	// (0x000370c3) grid_single_image_pane

0x86e1,	// (0x00032b35) list_single_image_pane_g1_ParamLimits

0x86e1,	// (0x00032b35) list_single_image_pane_g1

0xcc7d,	// (0x000370d1) list_single_image_pane_g2_ParamLimits

0xcc7d,	// (0x000370d1) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0003a09e) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0003a09e) list_single_image_pane_g

0x86ed,	// (0x00032b41) list_single_image_pane_t1_ParamLimits

0x86ed,	// (0x00032b41) list_single_image_pane_t1

0xcc91,	// (0x000370e5) cell_image_list_pane_ParamLimits

0xcc91,	// (0x000370e5) cell_image_list_pane

0xcca4,	// (0x000370f8) cell_image_list_pane_g1

0xccad,	// (0x00037101) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0003a0a3) cell_image_list_pane_g

0xccb6,	// (0x0003710a) aid_size_cell_tb_trans_pane

0x808b,	// (0x000324df) bg_tb_trans_pane

0xccc8,	// (0x0003711c) grid_tb_trans_pane

0x9aec,	// (0x00033f40) bg_tb_trans_pane_g1

0x9afc,	// (0x00033f50) bg_tb_trans_pane_g2

0x9af4,	// (0x00033f48) bg_tb_trans_pane_g3

0x9b0c,	// (0x00033f60) bg_tb_trans_pane_g4

0x9b04,	// (0x00033f58) bg_tb_trans_pane_g5

0x9b2c,	// (0x00033f80) bg_tb_trans_pane_g6

0x9b24,	// (0x00033f78) bg_tb_trans_pane_g7

0x9b14,	// (0x00033f68) bg_tb_trans_pane_g8

0x9b1c,	// (0x00033f70) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0003a0a8) bg_tb_trans_pane_g

0xccdc,	// (0x00037130) cell_toolbar_trans_pane_ParamLimits

0xccdc,	// (0x00037130) cell_toolbar_trans_pane

0xc119,	// (0x0003656d) cell_toolbar_trans_pane_g1

0xbce2,	// (0x00036136) list_form2_midp_pane_t1

0xbcf0,	// (0x00036144) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00039f45) list_form2_midp_pane_t

0xbcfe,	// (0x00036152) scroll_pane_cp51_ParamLimits

0xbeba,	// (0x0003630e) form2_midp_wait_pane_g1

0xbec3,	// (0x00036317) form2_midp_wait_pane_g2

0xbecc,	// (0x00036320) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00039f5a) form2_midp_wait_pane_g

0x781f,	// (0x00031c73) list_highlight_pane_cp21_ParamLimits

0xbf23,	// (0x00036377) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf32,	// (0x00036386) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x707b,	// (0x000314cf) list_single_2graphic_im_pane_ParamLimits

0x707b,	// (0x000314cf) list_single_2graphic_im_pane

0xcd02,	// (0x00037156) list_single_2graphic_im_pane_g1_ParamLimits

0xcd02,	// (0x00037156) list_single_2graphic_im_pane_g1

0xcd13,	// (0x00037167) list_single_2graphic_im_pane_g2_ParamLimits

0xcd13,	// (0x00037167) list_single_2graphic_im_pane_g2

0xcd1f,	// (0x00037173) list_single_2graphic_im_pane_g3_ParamLimits

0xcd1f,	// (0x00037173) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0003a0bb) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0003a0bb) list_single_2graphic_im_pane_g

0xcd3f,	// (0x00037193) list_single_2graphic_im_pane_t1_ParamLimits

0xcd3f,	// (0x00037193) list_single_2graphic_im_pane_t1

0xc795,	// (0x00036be9) list_single_graphic_2heading_pane_fp_ParamLimits

0xc795,	// (0x00036be9) list_single_graphic_2heading_pane_fp

0x73b7,	// (0x0003180b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x73b7,	// (0x0003180b) list_single_graphic_2heading_pane_fp_g1

0xc7aa,	// (0x00036bfe) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc7aa,	// (0x00036bfe) list_single_graphic_2heading_pane_fp_g2

0x7380,	// (0x000317d4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7380,	// (0x000317d4) list_single_graphic_2heading_pane_fp_g3

0x738c,	// (0x000317e0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x738c,	// (0x000317e0) list_single_graphic_2heading_pane_fp_g4

0xc7b6,	// (0x00036c0a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7b6,	// (0x00036c0a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00039fe2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00039fe2) list_single_graphic_2heading_pane_fp_g

0x7584,	// (0x000319d8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7584,	// (0x000319d8) list_single_graphic_2heading_pane_fp_t1

0x73ef,	// (0x00031843) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x73ef,	// (0x00031843) list_single_graphic_2heading_pane_fp_t2

0x759a,	// (0x000319ee) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x759a,	// (0x000319ee) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0003a0c4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0003a0c4) list_single_graphic_2heading_pane_fp_t

0xc1b9,	// (0x0003660d) fep_hwr_write_pane_g5_ParamLimits

0xc1b9,	// (0x0003660d) fep_hwr_write_pane_g5

0xc1c5,	// (0x00036619) fep_hwr_write_pane_g6_ParamLimits

0xc1c5,	// (0x00036619) fep_hwr_write_pane_g6

0xca47,	// (0x00036e9b) eswt_shell_pane_ParamLimits

0x9bdc,	// (0x00034030) bg_popup_window_pane_cp18_ParamLimits

0xae83,	// (0x000352d7) heading_pane_cp70

0xcb71,	// (0x00036fc5) popup_eswt_tasktip_window_t1_ParamLimits

0x9664,	// (0x00033ab8) aid_touch_tab_arrow_left

0x9670,	// (0x00033ac4) aid_touch_tab_arrow_right

0x7767,	// (0x00031bbb) title_pane_g3_ParamLimits

0x7767,	// (0x00031bbb) title_pane_g3

0x804a,	// (0x0003249e) set_value_pane_g1

0x9545,	// (0x00033999) popup_toolbar_trans_pane_ParamLimits

0xccb6,	// (0x0003710a) aid_size_cell_tb_trans_pane_ParamLimits

0x808b,	// (0x000324df) bg_tb_trans_pane_ParamLimits

0xccc8,	// (0x0003711c) grid_tb_trans_pane_ParamLimits

0x7aa8,	// (0x00031efc) cont_note_pane_ParamLimits

0x7aa8,	// (0x00031efc) cont_note_pane

0x7dfc,	// (0x00032250) cont_snote2_single_text_pane_ParamLimits

0x7dfc,	// (0x00032250) cont_snote2_single_text_pane

0x7dfc,	// (0x00032250) cont_snote2_single_graphic_pane_ParamLimits

0x7dfc,	// (0x00032250) cont_snote2_single_graphic_pane

0xa1b9,	// (0x0003460d) cont_note_wait_pane_ParamLimits

0xa1b9,	// (0x0003460d) cont_note_wait_pane

0xa1b9,	// (0x0003460d) cont_note_image_pane_ParamLimits

0xa1b9,	// (0x0003460d) cont_note_image_pane

0xcd70,	// (0x000371c4) popup_note2_window_g1_ParamLimits

0xcd70,	// (0x000371c4) popup_note2_window_g1

0xcda1,	// (0x000371f5) popup_note2_window_t1_ParamLimits

0xcda1,	// (0x000371f5) popup_note2_window_t1

0xcde6,	// (0x0003723a) popup_note2_window_t2_ParamLimits

0xcde6,	// (0x0003723a) popup_note2_window_t2

0xce2b,	// (0x0003727f) popup_note2_window_t3_ParamLimits

0xce2b,	// (0x0003727f) popup_note2_window_t3

0xce70,	// (0x000372c4) popup_note2_window_t4_ParamLimits

0xce70,	// (0x000372c4) popup_note2_window_t4

0x7b2c,	// (0x00031f80) popup_note2_window_t5_ParamLimits

0x7b2c,	// (0x00031f80) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0003a0d0) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0003a0d0) popup_note2_window_t

0xce9f,	// (0x000372f3) popup_note2_image_window_g1_ParamLimits

0xce9f,	// (0x000372f3) popup_note2_image_window_g1

0xceab,	// (0x000372ff) popup_note2_image_window_g2_ParamLimits

0xceab,	// (0x000372ff) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0003a0db) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0003a0db) popup_note2_image_window_g

0xcebd,	// (0x00037311) popup_note2_image_window_t1_ParamLimits

0xcebd,	// (0x00037311) popup_note2_image_window_t1

0xced5,	// (0x00037329) popup_note2_image_window_t2_ParamLimits

0xced5,	// (0x00037329) popup_note2_image_window_t2

0xceed,	// (0x00037341) popup_note2_image_window_t3_ParamLimits

0xceed,	// (0x00037341) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0003a0e0) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0003a0e0) popup_note2_image_window_t

0xa1c7,	// (0x0003461b) popup_note2_wait_window_g1_ParamLimits

0xa1c7,	// (0x0003461b) popup_note2_wait_window_g1

0xcf17,	// (0x0003736b) popup_note2_wait_window_g2_ParamLimits

0xcf17,	// (0x0003736b) popup_note2_wait_window_g2

0xa1df,	// (0x00034633) popup_note2_wait_window_g3_ParamLimits

0xa1df,	// (0x00034633) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x0003a0e7) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x0003a0e7) popup_note2_wait_window_g

0xcf23,	// (0x00037377) popup_note2_wait_window_t1_ParamLimits

0xcf23,	// (0x00037377) popup_note2_wait_window_t1

0xcf41,	// (0x00037395) popup_note2_wait_window_t2_ParamLimits

0xcf41,	// (0x00037395) popup_note2_wait_window_t2

0xcf5f,	// (0x000373b3) popup_note2_wait_window_t3_ParamLimits

0xcf5f,	// (0x000373b3) popup_note2_wait_window_t3

0xcf71,	// (0x000373c5) popup_note2_wait_window_t4_ParamLimits

0xcf71,	// (0x000373c5) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x0003a0ee) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x0003a0ee) popup_note2_wait_window_t

0xcf83,	// (0x000373d7) wait_bar2_pane_ParamLimits

0xcf83,	// (0x000373d7) wait_bar2_pane

0xcf9b,	// (0x000373ef) popup_snote2_single_text_window_g1_ParamLimits

0xcf9b,	// (0x000373ef) popup_snote2_single_text_window_g1

0xcfc3,	// (0x00037417) popup_snote2_single_text_window_t1_ParamLimits

0xcfc3,	// (0x00037417) popup_snote2_single_text_window_t1

0xd00f,	// (0x00037463) popup_snote2_single_text_window_t2_ParamLimits

0xd00f,	// (0x00037463) popup_snote2_single_text_window_t2

0xd05b,	// (0x000374af) popup_snote2_single_text_window_t3_ParamLimits

0xd05b,	// (0x000374af) popup_snote2_single_text_window_t3

0xd09c,	// (0x000374f0) popup_snote2_single_text_window_t4_ParamLimits

0xd09c,	// (0x000374f0) popup_snote2_single_text_window_t4

0xd0d2,	// (0x00037526) popup_snote2_single_text_window_t5_ParamLimits

0xd0d2,	// (0x00037526) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x0003a0f7) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x0003a0f7) popup_snote2_single_text_window_t

0xd0fd,	// (0x00037551) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0fd,	// (0x00037551) popup_snote2_single_graphic_window_g1

0xd125,	// (0x00037579) popup_snote2_single_graphic_window_g2_ParamLimits

0xd125,	// (0x00037579) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x0003a102) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x0003a102) popup_snote2_single_graphic_window_g

0xd14d,	// (0x000375a1) popup_snote2_single_graphic_window_t1_ParamLimits

0xd14d,	// (0x000375a1) popup_snote2_single_graphic_window_t1

0xd199,	// (0x000375ed) popup_snote2_single_graphic_window_t2_ParamLimits

0xd199,	// (0x000375ed) popup_snote2_single_graphic_window_t2

0xd05b,	// (0x000374af) popup_snote2_single_graphic_window_t3_ParamLimits

0xd05b,	// (0x000374af) popup_snote2_single_graphic_window_t3

0xd09c,	// (0x000374f0) popup_snote2_single_graphic_window_t4_ParamLimits

0xd09c,	// (0x000374f0) popup_snote2_single_graphic_window_t4

0xd0d2,	// (0x00037526) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d2,	// (0x00037526) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x0003a107) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x0003a107) popup_snote2_single_graphic_window_t

0xbbbb,	// (0x0003600f) clock_nsta_pane_cp2_t1

0xbbbb,	// (0x0003600f) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00039f1b) clock_nsta_pane_cp2_t

0x55cc,	// (0x0002fa20) form_field_data_wide_pane_g1_ParamLimits

0x80a5,	// (0x000324f9) form_field_data_wide_pane_g2_ParamLimits

0x80a5,	// (0x000324f9) form_field_data_wide_pane_g2

0x80b1,	// (0x00032505) form_field_data_wide_pane_g3_ParamLimits

0x80b1,	// (0x00032505) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x00039aeb) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x00039aeb) form_field_data_wide_pane_g

0xba94,	// (0x00035ee8) grid_touch_3_pane_ParamLimits

0xba94,	// (0x00035ee8) grid_touch_3_pane

0xd1e5,	// (0x00037639) cell_touch_3_pane_ParamLimits

0xd1e5,	// (0x00037639) cell_touch_3_pane

0xc119,	// (0x0003656d) cell_touch_3_pane_g1

0xc119,	// (0x0003656d) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00039fa0) cell_touch_3_pane_g

0x7b5e,	// (0x00031fb2) cont_query_data_pane

0x7b66,	// (0x00031fba) cont_query_data_pane_cp1

0xd213,	// (0x00037667) button_value_adjust_pane_cp7

0xd21b,	// (0x0003766f) query_popup_pane_cp3

0x87d8,	// (0x00032c2c) bg_popup_sub_pane_cp22_ParamLimits

0x597d,	// (0x0002fdd1) navi_navi_volume_pane_cp2

0x5998,	// (0x0002fdec) popup_side_volume_key_window_g2

0x59a7,	// (0x0002fdfb) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x00039b7d) popup_side_volume_key_window_g

0x59c4,	// (0x0002fe18) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x00039b84) popup_side_volume_key_window_t

0x8a8f,	// (0x00032ee3) popup_side_volume_key_window_ParamLimits

0x5207,	// (0x0002f65b) list_double_graphic_pane_g4_ParamLimits

0x5207,	// (0x0002f65b) list_double_graphic_pane_g4

0x70ba,	// (0x0003150e) list_single_2heading_msg_pane_ParamLimits

0x70ba,	// (0x0003150e) list_single_2heading_msg_pane

0x75ba,	// (0x00031a0e) list_single_2heading_msg_pane_g1_ParamLimits

0x75ba,	// (0x00031a0e) list_single_2heading_msg_pane_g1

0x5036,	// (0x0002f48a) list_single_2heading_msg_pane_g2_ParamLimits

0x5036,	// (0x0002f48a) list_single_2heading_msg_pane_g2

0x75c6,	// (0x00031a1a) list_single_2heading_msg_pane_g3_ParamLimits

0x75c6,	// (0x00031a1a) list_single_2heading_msg_pane_g3

0x75d2,	// (0x00031a26) list_single_2heading_msg_pane_g4_ParamLimits

0x75d2,	// (0x00031a26) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x0003a112) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x0003a112) list_single_2heading_msg_pane_g

0x75ea,	// (0x00031a3e) list_single_2heading_msg_pane_t1_ParamLimits

0x75ea,	// (0x00031a3e) list_single_2heading_msg_pane_t1

0x7612,	// (0x00031a66) list_single_2heading_msg_pane_t2_ParamLimits

0x7612,	// (0x00031a66) list_single_2heading_msg_pane_t2

0x7646,	// (0x00031a9a) list_single_2heading_msg_pane_t3_ParamLimits

0x7646,	// (0x00031a9a) list_single_2heading_msg_pane_t3

0x767f,	// (0x00031ad3) list_single_2heading_msg_pane_t4_ParamLimits

0x767f,	// (0x00031ad3) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x0003a11b) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x0003a11b) list_single_2heading_msg_pane_t

0x7773,	// (0x00031bc7) title_pane_g4_ParamLimits

0x7773,	// (0x00031bc7) title_pane_g4

0x578b,	// (0x0002fbdf) title_pane_stacon_g3_ParamLimits

0x578b,	// (0x0002fbdf) title_pane_stacon_g3

0xcd33,	// (0x00037187) list_single_2graphic_im_pane_g4_ParamLimits

0xcd33,	// (0x00037187) list_single_2graphic_im_pane_g4

0xac2a,	// (0x0003507e) popup_side_volume_key_window_cp

0xb427,	// (0x0003587b) main_idle_act2_pane_t1

0x5d49,	// (0x0003019d) toolbar_button_pane_g10

0x7ff4,	// (0x00032448) popup_toolbar_window_cp1

0xbbac,	// (0x00036000) clock_nsta_pane_cp_t1

0xbbac,	// (0x00036000) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00039f16) clock_nsta_pane_cp_t

0x597d,	// (0x0002fdd1) navi_navi_volume_pane_cp2_ParamLimits

0x598c,	// (0x0002fde0) popup_side_volume_key_window_g1_ParamLimits

0x5998,	// (0x0002fdec) popup_side_volume_key_window_g2_ParamLimits

0x59a7,	// (0x0002fdfb) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x00039b7d) popup_side_volume_key_window_g_ParamLimits

0x61b1,	// (0x00030605) fep_hwr_aid_pane

0x6258,	// (0x000306ac) bg_fep_hwr_top_pane_g4_ParamLimits

0xc189,	// (0x000365dd) fep_hwr_top_pane_g1_ParamLimits

0xc19b,	// (0x000365ef) fep_hwr_top_pane_g2_ParamLimits

0x6278,	// (0x000306cc) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00039f6b) fep_hwr_top_pane_g_ParamLimits

0x628d,	// (0x000306e1) fep_hwr_top_text_pane_ParamLimits

0xa9ed,	// (0x00034e41) aid_touch_tab_arrow_arrow_2

0xa9f6,	// (0x00034e4a) aid_touch_tab_arrow_left_2

0x61c5,	// (0x00030619) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x61fc,	// (0x00030650) fep_hwr_prediction_pane

0xc2fb,	// (0x0003674f) fep_vkb_prediction_pane

0xc3ff,	// (0x00036853) fep_vkb_side_pane_g3_ParamLimits

0xc3ff,	// (0x00036853) fep_vkb_side_pane_g3

0x6408,	// (0x0003085c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6474,	// (0x000308c8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6481,	// (0x000308d5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0003a01a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x65b0,	// (0x00030a04) fep_hwr_prediction_pane_g1

0x65ba,	// (0x00030a0e) fep_hwr_prediction_pane_g2

0x65c2,	// (0x00030a16) fep_hwr_prediction_pane_g3

0x65ca,	// (0x00030a1e) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0003a124) fep_hwr_prediction_pane_g

0xd240,	// (0x00037694) fep_vkb_prediction_pane_g1

0xd24a,	// (0x0003769e) fep_vkb_prediction_pane_g2

0xd252,	// (0x000376a6) fep_vkb_prediction_pane_g3

0xd25a,	// (0x000376ae) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x0003a12d) fep_vkb_prediction_pane_g

0x6031,	// (0x00030485) slider_set_pane_g3

0x6045,	// (0x00030499) slider_set_pane_g4

0x605d,	// (0x000304b1) slider_set_pane_g5

0x6031,	// (0x00030485) slider_set_pane_g6

0x6073,	// (0x000304c7) slider_set_pane_g7

0xb0a0,	// (0x000354f4) slider_form_pane_g3

0xb0a9,	// (0x000354fd) slider_form_pane_g4

0xb0b1,	// (0x00035505) slider_form_pane_g5

0xb0a0,	// (0x000354f4) slider_form_pane_g6

0xb0b9,	// (0x0003550d) slider_form_pane_g7

0xb6e4,	// (0x00035b38) slider_set_pane_vc_g3

0xb6ed,	// (0x00035b41) slider_set_pane_vc_g4

0xb6f6,	// (0x00035b4a) slider_set_pane_vc_g5

0xb6e4,	// (0x00035b38) slider_set_pane_vc_g6

0xb6ff,	// (0x00035b53) slider_set_pane_vc_g7

0xb6e4,	// (0x00035b38) slider_form_pane_vc_g1

0xb6ed,	// (0x00035b41) slider_form_pane_vc_g2

0xb6f6,	// (0x00035b4a) slider_form_pane_vc_g3

0xb6e4,	// (0x00035b38) slider_form_pane_vc_g4

0xb8b2,	// (0x00035d06) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x00039eef) slider_form_pane_vc_g

0x772b,	// (0x00031b7f) main_idle_act3_pane

0xd262,	// (0x000376b6) ai3_links_pane

0xd26b,	// (0x000376bf) popup_ai3_data_window_ParamLimits

0xd26b,	// (0x000376bf) popup_ai3_data_window

0x772b,	// (0x00031b7f) grid_ai3_links_pane

0xd285,	// (0x000376d9) cell_ai3_links_pane_ParamLimits

0xd285,	// (0x000376d9) cell_ai3_links_pane

0xd29d,	// (0x000376f1) bg_popup_sub_pane_cp11

0xd2aa,	// (0x000376fe) cell_ai3_links_pane_g1

0x772b,	// (0x00031b7f) bg_popup_sub_pane_cp12

0xd2cf,	// (0x00037723) heading_ai3_data_pane

0xd2d7,	// (0x0003772b) list_ai3_gene_pane

0xd2e3,	// (0x00037737) popup_ai3_data_window_g1

0xd2eb,	// (0x0003773f) heading_ai3_data_pane_g1

0xd2f3,	// (0x00037747) heading_ai3_data_pane_t1

0xd301,	// (0x00037755) list_double_ai3_gene_pane_ParamLimits

0xd301,	// (0x00037755) list_double_ai3_gene_pane

0xd30e,	// (0x00037762) list_single_ai3_gene_pane_ParamLimits

0xd30e,	// (0x00037762) list_single_ai3_gene_pane

0xc0de,	// (0x00036532) list_highlight_pane_cp7_ParamLimits

0xc0de,	// (0x00036532) list_highlight_pane_cp7

0xd31b,	// (0x0003776f) list_single_a13_gene_pane_t1_ParamLimits

0xd31b,	// (0x0003776f) list_single_a13_gene_pane_t1

0xd332,	// (0x00037786) list_single_ai3_gene_pane_g1

0xd33b,	// (0x0003778f) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x0003a136) list_single_ai3_gene_pane_g

0xd343,	// (0x00037797) list_double_ai3_gene_pane_g1_ParamLimits

0xd343,	// (0x00037797) list_double_ai3_gene_pane_g1

0xd34f,	// (0x000377a3) list_double_ai3_gene_pane_t1_ParamLimits

0xd34f,	// (0x000377a3) list_double_ai3_gene_pane_t1

0xd36b,	// (0x000377bf) list_double_ai3_gene_pane_t2_ParamLimits

0xd36b,	// (0x000377bf) list_double_ai3_gene_pane_t2

0xd381,	// (0x000377d5) list_double_ai3_gene_pane_t3_ParamLimits

0xd381,	// (0x000377d5) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x0003a13b) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x0003a13b) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x75b0,	// (0x00031a04) aid_size_min_col_2

0xd22c,	// (0x00037680) aid_size_min_msg_ParamLimits

0xd22c,	// (0x00037680) aid_size_min_msg

0xc4ff,	// (0x00036953) fep_vkb_top_text_pane_g2_ParamLimits

0xc4ff,	// (0x00036953) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00039f9b) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00039f9b) fep_vkb_top_text_pane_g

0x772b,	// (0x00031b7f) main_hc_apps_shell_pane

0xd39e,	// (0x000377f2) grid_hc_apps_pane_ParamLimits

0xd39e,	// (0x000377f2) grid_hc_apps_pane

0xd3ad,	// (0x00037801) list_hc_apps_pane

0xd3b5,	// (0x00037809) scroll_pane_cp37_ParamLimits

0xd3b5,	// (0x00037809) scroll_pane_cp37

0xd3c1,	// (0x00037815) cell_hc_apps_pane_ParamLimits

0xd3c1,	// (0x00037815) cell_hc_apps_pane

0xd46f,	// (0x000378c3) cell_hc_apps_pane_g1_ParamLimits

0xd46f,	// (0x000378c3) cell_hc_apps_pane_g1

0xd4a0,	// (0x000378f4) cell_hc_apps_pane_g2_ParamLimits

0xd4a0,	// (0x000378f4) cell_hc_apps_pane_g2

0xd4bc,	// (0x00037910) cell_hc_apps_pane_g3_ParamLimits

0xd4bc,	// (0x00037910) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x0003a142) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x0003a142) cell_hc_apps_pane_g

0xd4de,	// (0x00037932) cell_hc_apps_pane_t1_ParamLimits

0xd4de,	// (0x00037932) cell_hc_apps_pane_t1

0x7aa8,	// (0x00031efc) grid_highlight_pane_cp10_ParamLimits

0x7aa8,	// (0x00031efc) grid_highlight_pane_cp10

0xd51e,	// (0x00037972) list_single_hc_apps_pane_ParamLimits

0xd51e,	// (0x00037972) list_single_hc_apps_pane

0xd57a,	// (0x000379ce) list_single_hc_apps_pane_g1

0x76a4,	// (0x00031af8) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x0003a149) list_single_hc_apps_pane_g

0x76bd,	// (0x00031b11) list_single_hc_apps_pane_g2_copy1

0x76d9,	// (0x00031b2d) list_single_hc_apps_pane_t1

0x781f,	// (0x00031c73) bg_set_opt_pane_cp_ParamLimits

0x4f86,	// (0x0002f3da) setting_slider_pane_t1_ParamLimits

0x4f9f,	// (0x0002f3f3) setting_slider_pane_t2_ParamLimits

0x4fb9,	// (0x0002f40d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000399ce) setting_slider_pane_t_ParamLimits

0x4fd1,	// (0x0002f425) slider_set_pane_ParamLimits

0x5c25,	// (0x00030079) control_pane_g5_ParamLimits

0x5c25,	// (0x00030079) control_pane_g5

0xaeef,	// (0x00035343) slider_set_pane_g1_ParamLimits

0x6025,	// (0x00030479) slider_set_pane_g2_ParamLimits

0x6031,	// (0x00030485) slider_set_pane_g3_ParamLimits

0x6045,	// (0x00030499) slider_set_pane_g4_ParamLimits

0x605d,	// (0x000304b1) slider_set_pane_g5_ParamLimits

0x6031,	// (0x00030485) slider_set_pane_g6_ParamLimits

0x6073,	// (0x000304c7) slider_set_pane_g7_ParamLimits

0xf975,	// (0x00039dc9) slider_set_pane_g_ParamLimits

0x8b70,	// (0x00032fc4) navi_icon_text_pane_ParamLimits

0x9625,	// (0x00033a79) aid_fill_nsta_2_ParamLimits

0x9664,	// (0x00033ab8) aid_touch_tab_arrow_left_ParamLimits

0x9670,	// (0x00033ac4) aid_touch_tab_arrow_right_ParamLimits

0x96dc,	// (0x00033b30) clock_nsta_pane_ParamLimits

0xa9c9,	// (0x00034e1d) navi_icon_pane_g1_ParamLimits

0xa9d8,	// (0x00034e2c) navi_text_pane_t1_ParamLimits

0xbcb6,	// (0x0003610a) navi_icon_text_pane_g1_ParamLimits

0xbcc5,	// (0x00036119) navi_icon_text_pane_t1_ParamLimits

0xd57a,	// (0x000379ce) list_single_hc_apps_pane_g1_ParamLimits

0x76a4,	// (0x00031af8) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x0003a149) list_single_hc_apps_pane_g_ParamLimits

0x76bd,	// (0x00031b11) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x76d9,	// (0x00031b2d) list_single_hc_apps_pane_t1_ParamLimits

0x4e9a,	// (0x0002f2ee) popup_toolbar2_fixed_window_ParamLimits

0x4e9a,	// (0x0002f2ee) popup_toolbar2_fixed_window

0x953b,	// (0x0003398f) popup_toolbar2_float_window

0x772b,	// (0x00031b7f) bg_popup_sub_pane_cp27

0xd593,	// (0x000379e7) grid_toolbar2_float_pane

0x772b,	// (0x00031b7f) bg_popup_sub_pane_cp26

0xd593,	// (0x000379e7) grid_toolbar2_fixed_pane

0xd59b,	// (0x000379ef) cell_toolbar2_fixed_pane_ParamLimits

0xd59b,	// (0x000379ef) cell_toolbar2_fixed_pane

0xd5ab,	// (0x000379ff) cell_toolbar2_fixed_pane_g1

0xd5b4,	// (0x00037a08) toolbar2_fixed_button_pane

0x9aec,	// (0x00033f40) toolbar2_fixed_button_pane_g1

0x9afc,	// (0x00033f50) toolbar2_fixed_button_pane_g2

0x9af4,	// (0x00033f48) toolbar2_fixed_button_pane_g3

0x9b0c,	// (0x00033f60) toolbar2_fixed_button_pane_g4

0x9b04,	// (0x00033f58) toolbar2_fixed_button_pane_g5

0x9b14,	// (0x00033f68) toolbar2_fixed_button_pane_g6

0x9b1c,	// (0x00033f70) toolbar2_fixed_button_pane_g7

0x9b2c,	// (0x00033f80) toolbar2_fixed_button_pane_g8

0x9b24,	// (0x00033f78) toolbar2_fixed_button_pane_g9

0x0008,

0xf877,	// (0x00039ccb) toolbar2_fixed_button_pane_g

0xd5bc,	// (0x00037a10) cell_toolbar2_float_pane_ParamLimits

0xd5bc,	// (0x00037a10) cell_toolbar2_float_pane

0xd5cd,	// (0x00037a21) cell_toolbar2_float_pane_g1

0xd5b4,	// (0x00037a08) toolbar2_fixed_button_pane_cp

0xc25b,	// (0x000366af) fep_vkb_accented_list_pane_ParamLimits

0xc25b,	// (0x000366af) fep_vkb_accented_list_pane

0x63e8,	// (0x0003083c) bg_popup_fep_shadow_pane_g9

0x8cf0,	// (0x00033144) bg_popup_fep_shadow_pane_cp3

0x81ec,	// (0x00032640) list_accented_list_pane

0xd5d6,	// (0x00037a2a) list_single_accented_list_pane_ParamLimits

0xd5d6,	// (0x00037a2a) list_single_accented_list_pane

0x8cf0,	// (0x00033144) list_highlight_pane_cp10

0xd5e7,	// (0x00037a3b) list_single_accented_list_pane_t1

0x948b,	// (0x000338df) popup_slider_window_ParamLimits

0x948b,	// (0x000338df) popup_slider_window

0xd223,	// (0x00037677) aid_indentation_list_msg

0xd6a1,	// (0x00037af5) bg_popup_window_pane_cp19

0xd70b,	// (0x00037b5f) popup_slider_window_g1

0xd727,	// (0x00037b7b) popup_slider_window_g2

0xd743,	// (0x00037b97) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x0003a14e) popup_slider_window_g

0xd79f,	// (0x00037bf3) popup_slider_window_t1

0xd813,	// (0x00037c67) small_volume_slider_vertical_pane

0xc119,	// (0x0003656d) small_volume_slider_vertical_pane_g1

0xc119,	// (0x0003656d) small_volume_slider_vertical_pane_g2

0xd82f,	// (0x00037c83) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x0003a160) small_volume_slider_vertical_pane_g

0x4c52,	// (0x0002f0a6) area_side_right_pane_ParamLimits

0x4c52,	// (0x0002f0a6) area_side_right_pane

0x65d2,	// (0x00030a26) aid_size_side_button_ParamLimits

0x65d2,	// (0x00030a26) aid_size_side_button

0x65e6,	// (0x00030a3a) grid_sctrl_middle_pane_ParamLimits

0x65e6,	// (0x00030a3a) grid_sctrl_middle_pane

0x6606,	// (0x00030a5a) sctrl_sk_bottom_pane

0x6617,	// (0x00030a6b) sctrl_sk_top_pane

0x6629,	// (0x00030a7d) aid_touch_sctrl_top

0x6636,	// (0x00030a8a) bg_sctrl_sk_pane_ParamLimits

0x6636,	// (0x00030a8a) bg_sctrl_sk_pane

0x6644,	// (0x00030a98) sctrl_sk_top_pane_g1

0x6651,	// (0x00030aa5) sctrl_sk_top_pane_t1

0x6629,	// (0x00030a7d) aid_touch_sctrl_bottom

0x6636,	// (0x00030a8a) bg_sctrl_sk_pane_cp_ParamLimits

0x6636,	// (0x00030a8a) bg_sctrl_sk_pane_cp

0x666c,	// (0x00030ac0) sctrl_sk_bottom_pane_g1

0x6651,	// (0x00030aa5) sctrl_sk_bottom_pane_t1

0x6675,	// (0x00030ac9) cell_sctrl_middle_pane_ParamLimits

0x6675,	// (0x00030ac9) cell_sctrl_middle_pane

0x6690,	// (0x00030ae4) aid_touch_sctrl_middle_ParamLimits

0x6690,	// (0x00030ae4) aid_touch_sctrl_middle

0x66a2,	// (0x00030af6) bg_sctrl_middle_pane_ParamLimits

0x66a2,	// (0x00030af6) bg_sctrl_middle_pane

0x6408,	// (0x0003085c) cell_sctrl_middle_pane_g1_ParamLimits

0x6408,	// (0x0003085c) cell_sctrl_middle_pane_g1

0x66b0,	// (0x00030b04) cell_sctrl_middle_pane_g2_ParamLimits

0x66b0,	// (0x00030b04) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x0003a16c) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x0003a16c) cell_sctrl_middle_pane_g

0x9aec,	// (0x00033f40) bg_sctrl_middle_pane_g1

0x9af4,	// (0x00033f48) bg_sctrl_middle_pane_g2

0x9afc,	// (0x00033f50) bg_sctrl_middle_pane_g3

0x9b04,	// (0x00033f58) bg_sctrl_middle_pane_g4

0x9b0c,	// (0x00033f60) bg_sctrl_middle_pane_g5

0x9b14,	// (0x00033f68) bg_sctrl_middle_pane_g6

0x9b1c,	// (0x00033f70) bg_sctrl_middle_pane_g7

0x9b24,	// (0x00033f78) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x0003a171) bg_sctrl_middle_pane_g

0x9b2c,	// (0x00033f80) bg_sctrl_middle_pane_g8_copy1

0x9aec,	// (0x00033f40) bg_sctrl_sk_pane_g1

0x9afc,	// (0x00033f50) bg_sctrl_sk_pane_g2

0x9af4,	// (0x00033f48) bg_sctrl_sk_pane_g3

0x0008,

0xf877,	// (0x00039ccb) bg_sctrl_sk_pane_g

0x7fba,	// (0x0003240e) aid_size_touch_scroll_bar

0x9b0c,	// (0x00033f60) bg_sctrl_sk_pane_g4

0x9b04,	// (0x00033f58) bg_sctrl_sk_pane_g5

0x9b14,	// (0x00033f68) bg_sctrl_sk_pane_g6

0x9b1c,	// (0x00033f70) bg_sctrl_sk_pane_g7

0x9b2c,	// (0x00033f80) bg_sctrl_sk_pane_g8

0x9b24,	// (0x00033f78) bg_sctrl_sk_pane_g9

0x90f6,	// (0x0003354a) popup_fep_china_hwr2_fs_candidate_window

0x9100,	// (0x00033554) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9100,	// (0x00033554) popup_fep_china_hwr2_fs_control_window

0x6408,	// (0x0003085c) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x0003a167) sctrl_sk_top_pane_g

0xd838,	// (0x00037c8c) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd838,	// (0x00037c8c) aid_fep_china_hwr2_fs_cell

0xd84a,	// (0x00037c9e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd84a,	// (0x00037c9e) bg_popup_fep_shadow_pane_cp4

0xd861,	// (0x00037cb5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd861,	// (0x00037cb5) bg_popup_fep_shadow_pane_cp5

0xd873,	// (0x00037cc7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd873,	// (0x00037cc7) popup_fep_china_hwr2_fs_control_bar_grid

0xd883,	// (0x00037cd7) popup_fep_china_hwr2_fs_control_funtion_grid

0xd88b,	// (0x00037cdf) aid_fep_china_hwr2_fs_candi_cell

0x772b,	// (0x00031b7f) bg_popup_fep_shadow_pane_cp6

0xd895,	// (0x00037ce9) popup_fep_china_hwr2_fs_candidate_grid

0xd89f,	// (0x00037cf3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd89f,	// (0x00037cf3) cell_fep_china_hwr2_fs_funtion_grid

0xc119,	// (0x0003656d) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8b7,	// (0x00037d0b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8b7,	// (0x00037d0b) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8c5,	// (0x00037d19) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8c5,	// (0x00037d19) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x0003a182) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x0003a182) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x00037d2f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x00037d2f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00037d44) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00037d44) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x0003a187) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x0003a187) cell_fep_china_hwr2_fs_funtion_grid_t

0xd90c,	// (0x00037d60) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd914,	// (0x00037d68) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd91c,	// (0x00037d70) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x0003a18c) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd924,	// (0x00037d78) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd924,	// (0x00037d78) cell_fep_china_hwr2_fs_candidate_grid

0xd93d,	// (0x00037d91) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd945,	// (0x00037d99) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc119,	// (0x0003656d) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc119,	// (0x0003656d) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00039fa0) cell_fep_china_hwr2_fs_candidate_grid_g

0xd94d,	// (0x00037da1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96e9,	// (0x00033b3d) clock_nsta_pane_cp_24_ParamLimits

0x96e9,	// (0x00033b3d) clock_nsta_pane_cp_24

0x9767,	// (0x00033bbb) indicator_nsta_pane_cp_24_ParamLimits

0x9767,	// (0x00033bbb) indicator_nsta_pane_cp_24

0xa845,	// (0x00034c99) heading_pane_g1

0x0001,

0xf8dc,	// (0x00039d30) heading_pane_g

0xb270,	// (0x000356c4) grid_sct_catagory_button_pane

0xb2a0,	// (0x000356f4) scroll_pane_cp5_ParamLimits

0xbd0a,	// (0x0003615e) button_value_adjust_pane_cp5_ParamLimits

0xbd0a,	// (0x0003615e) button_value_adjust_pane_cp5

0xbde9,	// (0x0003623d) form2_midp_time_pane_ParamLimits

0xd95b,	// (0x00037daf) cell_sct_catagory_button_pane_ParamLimits

0xd95b,	// (0x00037daf) cell_sct_catagory_button_pane

0xc0de,	// (0x00036532) bg_button_pane_cp01_ParamLimits

0xc0de,	// (0x00036532) bg_button_pane_cp01

0xc119,	// (0x0003656d) cell_sct_catagory_button_pane_g1

0x94ca,	// (0x0003391e) popup_tb_extension_window

0xd96d,	// (0x00037dc1) aid_size_cell_ext_ParamLimits

0xd96d,	// (0x00037dc1) aid_size_cell_ext

0x7aa8,	// (0x00031efc) bg_tb_trans_pane_cp1_ParamLimits

0x7aa8,	// (0x00031efc) bg_tb_trans_pane_cp1

0xd98d,	// (0x00037de1) grid_tb_ext_pane_ParamLimits

0xd98d,	// (0x00037de1) grid_tb_ext_pane

0xd9bb,	// (0x00037e0f) cell_tb_ext_pane_ParamLimits

0xd9bb,	// (0x00037e0f) cell_tb_ext_pane

0xd9d2,	// (0x00037e26) cell_tb_ext_pane_g1_ParamLimits

0xd9d2,	// (0x00037e26) cell_tb_ext_pane_g1

0xd9ef,	// (0x00037e43) cell_tb_ext_pane_t1

0x7aa8,	// (0x00031efc) list_highlight_pane_cp11_ParamLimits

0x7aa8,	// (0x00031efc) list_highlight_pane_cp11

0x4eb9,	// (0x0002f30d) popup_uni_indicator_window_ParamLimits

0x4eb9,	// (0x0002f30d) popup_uni_indicator_window

0x808b,	// (0x000324df) bg_popup_sub_pane_cp14

0xda0a,	// (0x00037e5e) list_uniindi_pane

0xda16,	// (0x00037e6a) uniindi_top_pane

0x7aa8,	// (0x00031efc) bg_uniindi_top_pane

0xda35,	// (0x00037e89) uniindi_top_pane_g1

0xda4b,	// (0x00037e9f) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x0003a193) uniindi_top_pane_g

0xda75,	// (0x00037ec9) uniindi_top_pane_t1

0xda9f,	// (0x00037ef3) list_single_uniindi_pane_ParamLimits

0xda9f,	// (0x00037ef3) list_single_uniindi_pane

0xc119,	// (0x0003656d) bg_uniindi_top_pane_g1

0xdab2,	// (0x00037f06) list_single_uniindi_pane_g1

0xdac5,	// (0x00037f19) list_single_uniindi_pane_t1

0x4d2f,	// (0x0002f183) control_bg_pane

0xdaea,	// (0x00037f3e) bg_sctrl_sk_pane_cp1

0xdaf3,	// (0x00037f47) bg_sctrl_sk_pane_cp2

0xdafc,	// (0x00037f50) control_bg_pane_g1

0xdb05,	// (0x00037f59) control_bg_pane_g2

0x0001,

0xfd48,	// (0x0003a19c) control_bg_pane_g

0xbb3e,	// (0x00035f92) cell_indicator_nsta_pane_g1_ParamLimits

0xbb4c,	// (0x00035fa0) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00039f04) cell_indicator_nsta_pane_g_ParamLimits

0x736d,	// (0x000317c1) form2_midp_time_pane_t1_ParamLimits

0x7dfc,	// (0x00032250) main_idle_act4_pane_ParamLimits

0x7dfc,	// (0x00032250) main_idle_act4_pane

0x94ca,	// (0x0003391e) popup_tb_extension_window_ParamLimits

0xd9ab,	// (0x00037dff) tb_ext_find_pane_ParamLimits

0xd9ab,	// (0x00037dff) tb_ext_find_pane

0xdb0e,	// (0x00037f62) ai_gene_pane_1_cp1

0x8e35,	// (0x00033289) ai_gene_pane_2_cp1

0xdb16,	// (0x00037f6a) list_single_idle_plugin_calendar_pane

0xdb1f,	// (0x00037f73) list_single_idle_plugin_notification_pane

0xdb28,	// (0x00037f7c) list_single_idle_plugin_player_pane

0xdb31,	// (0x00037f85) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb31,	// (0x00037f85) list_single_idle_plugin_shortcut_pane

0xdb53,	// (0x00037fa7) main_idle_act4_pane_t1

0xdb65,	// (0x00037fb9) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x0003a1a1) main_idle_act4_pane_t

0xdb77,	// (0x00037fcb) middle_sk_idle_act4_pane_ParamLimits

0xdb77,	// (0x00037fcb) middle_sk_idle_act4_pane

0xdb8d,	// (0x00037fe1) popup_clock_digital_analogue_window_cp2

0xdba7,	// (0x00037ffb) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba7,	// (0x00037ffb) shortcut_wheel_idle_act4_pane

0xc119,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g1

0xc119,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g2

0xc119,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g3

0xc119,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g4

0xc119,	// (0x0003656d) shortcut_wheel_idle_act4_pane_g5

0xdbbb,	// (0x0003800f) shortcut_wheel_idle_act4_pane_g6

0xdbc3,	// (0x00038017) shortcut_wheel_idle_act4_pane_g7

0xdbcb,	// (0x0003801f) shortcut_wheel_idle_act4_pane_g8

0xdbd3,	// (0x00038027) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x0003a1a6) shortcut_wheel_idle_act4_pane_g

0xc3ab,	// (0x000367ff) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3ab,	// (0x000367ff) middle_sk_idle_act4_pane_g1

0xdc37,	// (0x0003808b) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc37,	// (0x0003808b) middle_sk_idle_act4_pane_g2

0x0001,

0x000d,	// (0x0002a461) middle_sk_idle_act4_pane_g_ParamLimits

0x000d,	// (0x0002a461) middle_sk_idle_act4_pane_g

0xdc43,	// (0x00038097) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc43,	// (0x00038097) middle_sk_idle_act4_pane_t1

0xdc60,	// (0x000380b4) grid_ai_shortcut_pane_ParamLimits

0xdc60,	// (0x000380b4) grid_ai_shortcut_pane

0xdc79,	// (0x000380cd) list_highlight_pane_cp16_ParamLimits

0xdc79,	// (0x000380cd) list_highlight_pane_cp16

0xdc86,	// (0x000380da) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x000380da) list_single_idle_plugin_shortcut_pane_g1

0xdc92,	// (0x000380e6) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc92,	// (0x000380e6) list_single_idle_plugin_shortcut_pane_g2

0xdcaa,	// (0x000380fe) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcaa,	// (0x000380fe) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0012,	// (0x0002a466) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0012,	// (0x0002a466) list_single_idle_plugin_shortcut_pane_g

0xdcbd,	// (0x00038111) cell_ai_shortcut_pane_ParamLimits

0xdcbd,	// (0x00038111) cell_ai_shortcut_pane

0xdce1,	// (0x00038135) cell_ai_shortcut_pane_g1_ParamLimits

0xdce1,	// (0x00038135) cell_ai_shortcut_pane_g1

0xdb0e,	// (0x00037f62) ai_gene_pane_1_cp2

0xdd03,	// (0x00038157) ai_gene_pane_2_cp2

0xdd0b,	// (0x0003815f) list_highlight_pane_cp15

0xdd14,	// (0x00038168) list_single_idle_plugin_calendar_pane_g1

0xdd0b,	// (0x0003815f) list_highlight_pane_cp17

0xdd1c,	// (0x00038170) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd24,	// (0x00038178) list_single_idle_plugin_player_pane_g1

0xb4c9,	// (0x0003591d) list_single_idle_plugin_player_pane_g2

0x0001,

0x0019,	// (0x0002a46d) list_single_idle_plugin_player_pane_g

0xdd2c,	// (0x00038180) list_single_idle_plugin_player_pane_t1

0xdd3a,	// (0x0003818e) list_single_idle_plugin_player_pane_t2

0xdd48,	// (0x0003819c) list_single_idle_plugin_player_pane_t3

0xdd56,	// (0x000381aa) list_single_idle_plugin_player_pane_t4

0x0003,

0x001e,	// (0x0002a472) list_single_idle_plugin_player_pane_t

0xdd64,	// (0x000381b8) wait_bar_pane_cp15

0xdd6c,	// (0x000381c0) grid_ai_notification_pane

0xb4c9,	// (0x0003591d) list_single_idle_plugin_notification_pane_g1

0xdd75,	// (0x000381c9) cell_ai_notification_pane_ParamLimits

0xdd75,	// (0x000381c9) cell_ai_notification_pane

0xdd82,	// (0x000381d6) cell_ai_notification_pane_g1

0xdd8a,	// (0x000381de) cell_ai_notification_pane_t1

0xdd98,	// (0x000381ec) tb_ext_find_button_pane

0xdda0,	// (0x000381f4) tb_ext_find_pane_g1

0xdda8,	// (0x000381fc) tb_ext_find_pane_t1

0x8713,	// (0x00032b67) tb_ext_find_button_pane_g1

0xddb6,	// (0x0003820a) tb_ext_find_button_pane_g2

0x0001,

0xfd70,	// (0x0003a1c4) tb_ext_find_button_pane_g

0xdb53,	// (0x00037fa7) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x00037fb9) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x0003a1a1) main_idle_act4_pane_t_ParamLimits

0xdb8d,	// (0x00037fe1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb9b,	// (0x00037fef) sat_plugin_idle_act4_pane_ParamLimits

0xdb9b,	// (0x00037fef) sat_plugin_idle_act4_pane

0xddbf,	// (0x00038213) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddbf,	// (0x00038213) sat_plugin_idle_act4_pane_t1

0xddd2,	// (0x00038226) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddd2,	// (0x00038226) sat_plugin_idle_act4_pane_t2

0xdde5,	// (0x00038239) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdde5,	// (0x00038239) sat_plugin_idle_act4_pane_t3

0xddf8,	// (0x0003824c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xddf8,	// (0x0003824c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd75,	// (0x0003a1c9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd75,	// (0x0003a1c9) sat_plugin_idle_act4_pane_t

0x4df4,	// (0x0002f248) popup_battery_window_ParamLimits

0x4df4,	// (0x0002f248) popup_battery_window

0x7aa8,	// (0x00031efc) bg_popup_sub_pane_cp25_ParamLimits

0x7aa8,	// (0x00031efc) bg_popup_sub_pane_cp25

0xde0b,	// (0x0003825f) popup_battery_window_g1_ParamLimits

0xde0b,	// (0x0003825f) popup_battery_window_g1

0xde17,	// (0x0003826b) popup_battery_window_t1_ParamLimits

0xde17,	// (0x0003826b) popup_battery_window_t1

0xde29,	// (0x0003827d) popup_battery_window_t2_ParamLimits

0xde29,	// (0x0003827d) popup_battery_window_t2

0x0001,

0xfd7e,	// (0x0003a1d2) popup_battery_window_t_ParamLimits

0xfd7e,	// (0x0003a1d2) popup_battery_window_t

0x8d04,	// (0x00033158) midp_canvas_pane_ParamLimits

0x8d79,	// (0x000331cd) midp_keypad_pane_ParamLimits

0x8d79,	// (0x000331cd) midp_keypad_pane

0x9056,	// (0x000334aa) main_midp_pane_ParamLimits

0xbbca,	// (0x0003601e) signal_pane_g2_cp_ParamLimits

0xde46,	// (0x0003829a) aid_size_cell_midp_keypad_ParamLimits

0xde46,	// (0x0003829a) aid_size_cell_midp_keypad

0xde60,	// (0x000382b4) midp_keyp_game_grid_pane_ParamLimits

0xde60,	// (0x000382b4) midp_keyp_game_grid_pane

0xde80,	// (0x000382d4) midp_keyp_rocker_pane_ParamLimits

0xde80,	// (0x000382d4) midp_keyp_rocker_pane

0xdeb9,	// (0x0003830d) midp_keyp_sk_left_pane_ParamLimits

0xdeb9,	// (0x0003830d) midp_keyp_sk_left_pane

0xdf34,	// (0x00038388) midp_keyp_sk_right_pane_ParamLimits

0xdf34,	// (0x00038388) midp_keyp_sk_right_pane

0x772b,	// (0x00031b7f) bg_button_pane_cp03

0xdf8e,	// (0x000383e2) midp_keyp_sk_left_pane_g1

0x772b,	// (0x00031b7f) bg_button_pane_cp04

0xdf8e,	// (0x000383e2) midp_keyp_sk_right_pane_g1

0xc119,	// (0x0003656d) midp_keyp_rocker_pane_g1

0xdf97,	// (0x000383eb) keyp_game_cell_pane_ParamLimits

0xdf97,	// (0x000383eb) keyp_game_cell_pane

0x772b,	// (0x00031b7f) bg_button_pane_cp02

0xdfaa,	// (0x000383fe) keyp_game_cell_pane_g1

0x4e38,	// (0x0002f28c) popup_fep_vkb2_window_ParamLimits

0x4e38,	// (0x0002f28c) popup_fep_vkb2_window

0x66d1,	// (0x00030b25) aid_size_cell_vkb2_ParamLimits

0x66d1,	// (0x00030b25) aid_size_cell_vkb2

0x6725,	// (0x00030b79) popup_fep_vkb2_window_g1_ParamLimits

0x6725,	// (0x00030b79) popup_fep_vkb2_window_g1

0x676d,	// (0x00030bc1) vkb2_area_bottom_pane_ParamLimits

0x676d,	// (0x00030bc1) vkb2_area_bottom_pane

0x67b9,	// (0x00030c0d) vkb2_area_keypad_pane_ParamLimits

0x67b9,	// (0x00030c0d) vkb2_area_keypad_pane

0x67fb,	// (0x00030c4f) vkb2_area_top_pane_ParamLimits

0x67fb,	// (0x00030c4f) vkb2_area_top_pane

0x6875,	// (0x00030cc9) vkb2_top_entry_pane_ParamLimits

0x6875,	// (0x00030cc9) vkb2_top_entry_pane

0x689f,	// (0x00030cf3) vkb2_top_grid_left_pane_ParamLimits

0x689f,	// (0x00030cf3) vkb2_top_grid_left_pane

0x68bd,	// (0x00030d11) vkb2_top_grid_right_pane_ParamLimits

0x68bd,	// (0x00030d11) vkb2_top_grid_right_pane

0x68db,	// (0x00030d2f) vkb2_cell_keypad_pane_ParamLimits

0x68db,	// (0x00030d2f) vkb2_cell_keypad_pane

0x69ac,	// (0x00030e00) vkb2_area_bottom_grid_pane_ParamLimits

0x69ac,	// (0x00030e00) vkb2_area_bottom_grid_pane

0x69d2,	// (0x00030e26) vkb2_area_bottom_pane_g1_ParamLimits

0x69d2,	// (0x00030e26) vkb2_area_bottom_pane_g1

0x69f6,	// (0x00030e4a) vkb2_area_bottom_pane_g2_ParamLimits

0x69f6,	// (0x00030e4a) vkb2_area_bottom_pane_g2

0x6a24,	// (0x00030e78) vkb2_area_bottom_pane_g3_ParamLimits

0x6a24,	// (0x00030e78) vkb2_area_bottom_pane_g3

0x0002,

0xfd83,	// (0x0003a1d7) vkb2_area_bottom_pane_g_ParamLimits

0xfd83,	// (0x0003a1d7) vkb2_area_bottom_pane_g

0x6a85,	// (0x00030ed9) vkb2_top_cell_left_pane_ParamLimits

0x6a85,	// (0x00030ed9) vkb2_top_cell_left_pane

0xdfbb,	// (0x0003840f) vkb2_top_entry_pane_g1_ParamLimits

0xdfbb,	// (0x0003840f) vkb2_top_entry_pane_g1

0xdfc9,	// (0x0003841d) vkb2_top_entry_pane_t1_ParamLimits

0xdfc9,	// (0x0003841d) vkb2_top_entry_pane_t1

0xdffb,	// (0x0003844f) vkb2_top_entry_pane_t2_ParamLimits

0xdffb,	// (0x0003844f) vkb2_top_entry_pane_t2

0xe02d,	// (0x00038481) vkb2_top_entry_pane_t3_ParamLimits

0xe02d,	// (0x00038481) vkb2_top_entry_pane_t3

0x0002,

0xfd8a,	// (0x0003a1de) vkb2_top_entry_pane_t_ParamLimits

0xfd8a,	// (0x0003a1de) vkb2_top_entry_pane_t

0x6ad2,	// (0x00030f26) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ad2,	// (0x00030f26) vkb2_top_grid_right_pane_g1

0x6ae8,	// (0x00030f3c) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ae8,	// (0x00030f3c) vkb2_top_grid_right_pane_g2

0x6b00,	// (0x00030f54) vkb2_top_grid_right_pane_g3_ParamLimits

0x6b00,	// (0x00030f54) vkb2_top_grid_right_pane_g3

0x6b18,	// (0x00030f6c) vkb2_top_grid_right_pane_g4_ParamLimits

0x6b18,	// (0x00030f6c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd91,	// (0x0003a1e5) vkb2_top_grid_right_pane_g_ParamLimits

0xfd91,	// (0x0003a1e5) vkb2_top_grid_right_pane_g

0x6b2e,	// (0x00030f82) vkb2_top_cell_left_pane_g1

0x6b45,	// (0x00030f99) vkb2_cell_keypad_pane_g1_ParamLimits

0x6b45,	// (0x00030f99) vkb2_cell_keypad_pane_g1

0xe051,	// (0x000384a5) vkb2_cell_keypad_pane_t1_ParamLimits

0xe051,	// (0x000384a5) vkb2_cell_keypad_pane_t1

0x6b53,	// (0x00030fa7) vkb2_cell_bottom_grid_pane_ParamLimits

0x6b53,	// (0x00030fa7) vkb2_cell_bottom_grid_pane

0x6b8c,	// (0x00030fe0) vkb2_cell_bottom_grid_pane_g1

0xdbdb,	// (0x0003802f) aid_call2_pane_cp02

0xdbe3,	// (0x00038037) aid_call_pane_cp02

0xdbeb,	// (0x0003803f) clock_digital_number_pane_cp10

0xdbf3,	// (0x00038047) clock_digital_number_pane_cp11

0xdbfb,	// (0x0003804f) clock_digital_number_pane_cp12

0xdc03,	// (0x00038057) clock_digital_number_pane_cp13

0xdc0b,	// (0x0003805f) clock_digital_separator_pane_cp10

0x8713,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g1

0x8713,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g2

0xdc13,	// (0x00038067) popup_clock_digital_analogue_window_cp2_g3

0x8713,	// (0x00032b67) popup_clock_digital_analogue_window_cp2_g4

0xdc13,	// (0x00038067) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x0003a1b9) popup_clock_digital_analogue_window_cp2_g

0xdc1b,	// (0x0003806f) popup_clock_digital_analogue_window_cp2_t1

0xdc29,	// (0x0003807d) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0008,	// (0x0002a45c) popup_clock_digital_analogue_window_cp2_t

0xc119,	// (0x0003656d) clock_digital_number_pane_cp10_g1

0xc119,	// (0x0003656d) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00039fa0) clock_digital_number_pane_cp10_g

0xc119,	// (0x0003656d) clock_digital_separator_pane_cp10_g1

0xc119,	// (0x0003656d) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00039fa0) clock_digital_separator_pane_cp10_g

0xda57,	// (0x00037eab) uniindi_top_pane_g3

0xda68,	// (0x00037ebc) uniindi_top_pane_g4

0x6966,	// (0x00030dba) vkb2_row_keypad_pane_ParamLimits

0x6966,	// (0x00030dba) vkb2_row_keypad_pane

0x6ba8,	// (0x00030ffc) vkb2_cell_t_keypad_pane_ParamLimits

0x6ba8,	// (0x00030ffc) vkb2_cell_t_keypad_pane

0x6bb8,	// (0x0003100c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6bb8,	// (0x0003100c) vkb2_cell_t_keypad_pane_cp08

0x6bcb,	// (0x0003101f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6bcb,	// (0x0003101f) vkb2_cell_t_keypad_pane_cp09

0x6bdf,	// (0x00031033) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6bdf,	// (0x00031033) vkb2_cell_t_keypad_pane_cp01

0x6bf0,	// (0x00031044) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6bf0,	// (0x00031044) vkb2_cell_t_keypad_pane_cp02

0x6c01,	// (0x00031055) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6c01,	// (0x00031055) vkb2_cell_t_keypad_pane_cp03

0x6c12,	// (0x00031066) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6c12,	// (0x00031066) vkb2_cell_t_keypad_pane_cp04

0x6c23,	// (0x00031077) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6c23,	// (0x00031077) vkb2_cell_t_keypad_pane_cp05

0x6c34,	// (0x00031088) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6c34,	// (0x00031088) vkb2_cell_t_keypad_pane_cp06

0x6c45,	// (0x00031099) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6c45,	// (0x00031099) vkb2_cell_t_keypad_pane_cp07

0x6c56,	// (0x000310aa) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6c56,	// (0x000310aa) vkb2_cell_t_keypad_pane_cp10

0x6408,	// (0x0003085c) vkb2_cell_t_keypad_pane_g1

0xe068,	// (0x000384bc) vkb2_cell_t_keypad_pane_t1

0x4d2f,	// (0x0002f183) popup_grid_graphic2_window

0xe07a,	// (0x000384ce) aid_size_cell_graphic2_ParamLimits

0xe07a,	// (0x000384ce) aid_size_cell_graphic2

0xcf09,	// (0x0003735d) bg_popup_window_pane_cp21_ParamLimits

0xcf09,	// (0x0003735d) bg_popup_window_pane_cp21

0xe0a6,	// (0x000384fa) graphic2_pages_pane_ParamLimits

0xe0a6,	// (0x000384fa) graphic2_pages_pane

0xe0ec,	// (0x00038540) grid_graphic2_control_pane_ParamLimits

0xe0ec,	// (0x00038540) grid_graphic2_control_pane

0xe11a,	// (0x0003856e) grid_graphic2_pane_ParamLimits

0xe11a,	// (0x0003856e) grid_graphic2_pane

0xe17a,	// (0x000385ce) cell_graphic2_pane

0x772b,	// (0x00031b7f) main_comp_mode_pane

0xd2d7,	// (0x0003772b) list_ai3_gene_pane_ParamLimits

0xd6a1,	// (0x00037af5) bg_popup_window_pane_cp19_ParamLimits

0xd6ad,	// (0x00037b01) bg_touch_area_indi_pane_ParamLimits

0xd6ad,	// (0x00037b01) bg_touch_area_indi_pane

0xd6c3,	// (0x00037b17) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6c3,	// (0x00037b17) bg_touch_area_indi_pane_cp01

0xd6d9,	// (0x00037b2d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6d9,	// (0x00037b2d) bg_touch_area_indi_pane_cp02

0xd6f1,	// (0x00037b45) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6f1,	// (0x00037b45) bg_touch_area_indi_pane_cp03

0xd70b,	// (0x00037b5f) popup_slider_window_g1_ParamLimits

0xd727,	// (0x00037b7b) popup_slider_window_g2_ParamLimits

0xd743,	// (0x00037b97) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x0003a14e) popup_slider_window_g_ParamLimits

0xd79f,	// (0x00037bf3) popup_slider_window_t1_ParamLimits

0xd813,	// (0x00037c67) small_volume_slider_vertical_pane_ParamLimits

0xe17a,	// (0x000385ce) cell_graphic2_pane_ParamLimits

0xe1c9,	// (0x0003861d) bg_button_pane_cp10_ParamLimits

0xe1c9,	// (0x0003861d) bg_button_pane_cp10

0xe1dc,	// (0x00038630) bg_button_pane_cp11_ParamLimits

0xe1dc,	// (0x00038630) bg_button_pane_cp11

0xe1ef,	// (0x00038643) graphic2_pages_pane_g1_ParamLimits

0xe1ef,	// (0x00038643) graphic2_pages_pane_g1

0xe20a,	// (0x0003865e) graphic2_pages_pane_g2_ParamLimits

0xe20a,	// (0x0003865e) graphic2_pages_pane_g2

0x0001,

0xfd9f,	// (0x0003a1f3) graphic2_pages_pane_g_ParamLimits

0xfd9f,	// (0x0003a1f3) graphic2_pages_pane_g

0xe222,	// (0x00038676) graphic2_pages_pane_t1_ParamLimits

0xe222,	// (0x00038676) graphic2_pages_pane_t1

0xe23a,	// (0x0003868e) cell_graphic2_control_pane_ParamLimits

0xe23a,	// (0x0003868e) cell_graphic2_control_pane

0xe254,	// (0x000386a8) cell_graphic2_pane_g1_ParamLimits

0xe254,	// (0x000386a8) cell_graphic2_pane_g1

0xe261,	// (0x000386b5) cell_graphic2_pane_g2_ParamLimits

0xe261,	// (0x000386b5) cell_graphic2_pane_g2

0xe26e,	// (0x000386c2) cell_graphic2_pane_g3_ParamLimits

0xe26e,	// (0x000386c2) cell_graphic2_pane_g3

0xe27b,	// (0x000386cf) cell_graphic2_pane_g4_ParamLimits

0xe27b,	// (0x000386cf) cell_graphic2_pane_g4

0xe288,	// (0x000386dc) cell_graphic2_pane_g5_ParamLimits

0xe288,	// (0x000386dc) cell_graphic2_pane_g5

0x0004,

0xfda4,	// (0x0003a1f8) cell_graphic2_pane_g_ParamLimits

0xfda4,	// (0x0003a1f8) cell_graphic2_pane_g

0xe2a3,	// (0x000386f7) cell_graphic2_pane_t1_ParamLimits

0xe2a3,	// (0x000386f7) cell_graphic2_pane_t1

0x9bdc,	// (0x00034030) grid_highlight_pane_cp11_ParamLimits

0x9bdc,	// (0x00034030) grid_highlight_pane_cp11

0x808b,	// (0x000324df) bg_button_pane_cp05

0xe2cc,	// (0x00038720) cell_graphic2_control_pane_g1

0xc119,	// (0x0003656d) bg_touch_area_indi_pane_g1

0xe2d9,	// (0x0003872d) aid_cmod_rocker_key_size

0xe2e3,	// (0x00038737) aid_cmode_itu_key_size

0xe2ed,	// (0x00038741) main_cmode_video_pane

0xe2f7,	// (0x0003874b) main_comp_mode_itu_pane

0xe303,	// (0x00038757) main_comp_mode_rocker_pane

0xe30f,	// (0x00038763) cell_cmode_rocker_pane_ParamLimits

0xe30f,	// (0x00038763) cell_cmode_rocker_pane

0xe321,	// (0x00038775) cell_cmode_itu_pane_ParamLimits

0xe321,	// (0x00038775) cell_cmode_itu_pane

0x808b,	// (0x000324df) bg_button_pane_cp06_ParamLimits

0x808b,	// (0x000324df) bg_button_pane_cp06

0xc3ab,	// (0x000367ff) cell_cmode_rocker_pane_g1_ParamLimits

0xc3ab,	// (0x000367ff) cell_cmode_rocker_pane_g1

0xd8b7,	// (0x00037d0b) cell_cmode_rocker_pane_g2_ParamLimits

0xd8b7,	// (0x00037d0b) cell_cmode_rocker_pane_g2

0x0001,

0x003c,	// (0x0002a490) cell_cmode_rocker_pane_g_ParamLimits

0x003c,	// (0x0002a490) cell_cmode_rocker_pane_g

0x772b,	// (0x00031b7f) bg_button_pane_cp07

0xe336,	// (0x0003878a) cell_cmode_itu_pane_g1

0xe33f,	// (0x00038793) cell_cmode_itu_pane_t1

0xe34d,	// (0x000387a1) cell_cmode_itu_pane_t2

0x0001,

0xfdb4,	// (0x0003a208) cell_cmode_itu_pane_t

0xdada,	// (0x00037f2e) aid_touch_ctrl_left

0xdae2,	// (0x00037f36) aid_touch_ctrl_right

0x772b,	// (0x00031b7f) compa_mode_pane

0xe35b,	// (0x000387af) aid_cmod_rocker_key_size_cp

0xe365,	// (0x000387b9) aid_cmode_itu_key_size_cp

0xe36f,	// (0x000387c3) compa_mode_pane_g1

0xe377,	// (0x000387cb) compa_mode_pane_g2

0xe37f,	// (0x000387d3) compa_mode_pane_g3

0x0002,

0xfdb9,	// (0x0003a20d) compa_mode_pane_g

0xe387,	// (0x000387db) main_comp_mode_itu_pane_cp

0xe38f,	// (0x000387e3) main_comp_mode_rocker_pane_cp

0xe397,	// (0x000387eb) cell_cmode_itu_pane_cp_ParamLimits

0xe397,	// (0x000387eb) cell_cmode_itu_pane_cp

0xe3ac,	// (0x00038800) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ac,	// (0x00038800) cell_cmode_rocker_pane_cp

0x808b,	// (0x000324df) bg_button_pane_cp06_cp_ParamLimits

0x808b,	// (0x000324df) bg_button_pane_cp06_cp

0xc3ab,	// (0x000367ff) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3ab,	// (0x000367ff) cell_cmode_rocker_pane_g1_cp

0xc119,	// (0x0003656d) cell_cmode_rocker_pane_g2_cp

0x772b,	// (0x00031b7f) bg_button_pane_cp07_cp

0xb0a0,	// (0x000354f4) cell_cmode_itu_pane_g1_cp

0xe3be,	// (0x00038812) cell_cmode_itu_pane_t1_cp

0xe3be,	// (0x00038812) cell_cmode_itu_pane_t2_cp

0xb08d,	// (0x000354e1) settings_code_pane_cp2

0x781f,	// (0x00031c73) bg_popup_window_pane_cp3_ParamLimits

0x7c82,	// (0x000320d6) heading_pane_cp3_ParamLimits

0x7c8e,	// (0x000320e2) listscroll_popup_graphic_pane_ParamLimits

0x61b1,	// (0x00030605) fep_hwr_aid_pane_ParamLimits

0x6629,	// (0x00030a7d) aid_touch_sctrl_top_ParamLimits

0x6644,	// (0x00030a98) sctrl_sk_top_pane_g1_ParamLimits

0x6408,	// (0x0003085c) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x0003a167) sctrl_sk_top_pane_g_ParamLimits

0x6651,	// (0x00030aa5) sctrl_sk_top_pane_t1_ParamLimits

0x6629,	// (0x00030a7d) aid_touch_sctrl_bottom_ParamLimits

0x6651,	// (0x00030aa5) sctrl_sk_bottom_pane_t1_ParamLimits

0xda23,	// (0x00037e77) aid_area_touch_clock

0x683d,	// (0x00030c91) aid_vkb2_area_top_pane_cell_ParamLimits

0x683d,	// (0x00030c91) aid_vkb2_area_top_pane_cell

0x6988,	// (0x00030ddc) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6988,	// (0x00030ddc) aid_vkb2_area_bottom_pane_cell

0xdfb3,	// (0x00038407) popup_char_count_window

0xe3cc,	// (0x00038820) popup_char_count_window_g1

0xe3d5,	// (0x00038829) popup_char_count_window_g2

0xe3de,	// (0x00038832) popup_char_count_window_g3

0x0002,

0xfdc0,	// (0x0003a214) popup_char_count_window_g

0xe3e7,	// (0x0003883b) popup_char_count_window_t1

0x6703,	// (0x00030b57) popup_fep_char_preview_window_ParamLimits

0x6703,	// (0x00030b57) popup_fep_char_preview_window

0x685b,	// (0x00030caf) vkb2_top_candi_pane_ParamLimits

0x685b,	// (0x00030caf) vkb2_top_candi_pane

0xe3f5,	// (0x00038849) cell_vkb2_top_candi_pane_ParamLimits

0xe3f5,	// (0x00038849) cell_vkb2_top_candi_pane

0x6c6b,	// (0x000310bf) bg_popup_fep_char_preview_window_ParamLimits

0x6c6b,	// (0x000310bf) bg_popup_fep_char_preview_window

0x6c79,	// (0x000310cd) popup_fep_char_preview_window_t1_ParamLimits

0x6c79,	// (0x000310cd) popup_fep_char_preview_window_t1

0xe442,	// (0x00038896) bg_popup_fep_char_preview_window_g1

0xe44a,	// (0x0003889e) bg_popup_fep_char_preview_window_g2

0xe452,	// (0x000388a6) bg_popup_fep_char_preview_window_g3

0xe45a,	// (0x000388ae) bg_popup_fep_char_preview_window_g4

0xe462,	// (0x000388b6) bg_popup_fep_char_preview_window_g5

0x6cb3,	// (0x00031107) bg_popup_fep_char_preview_window_g6

0xe46a,	// (0x000388be) bg_popup_fep_char_preview_window_g7

0xe472,	// (0x000388c6) bg_popup_fep_char_preview_window_g8

0xe47a,	// (0x000388ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc7,	// (0x0003a21b) bg_popup_fep_char_preview_window_g

0x6408,	// (0x0003085c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6408,	// (0x0003085c) cell_vkb2_top_candi_pane_g1

0x6416,	// (0x0003086a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6416,	// (0x0003086a) cell_vkb2_top_candi_pane_g2

0xdf13,	// (0x00038367) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdf13,	// (0x00038367) cell_vkb2_top_candi_pane_g3

0x6cbb,	// (0x0003110f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6cbb,	// (0x0003110f) cell_vkb2_top_candi_pane_g4

0xc876,	// (0x00036cca) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc876,	// (0x00036cca) cell_vkb2_top_candi_pane_g5

0x6cdc,	// (0x00031130) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6cdc,	// (0x00031130) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdda,	// (0x0003a22e) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdda,	// (0x0003a22e) cell_vkb2_top_candi_pane_g

0x6cea,	// (0x0003113e) cell_vkb2_top_candi_pane_t1

0x6011,	// (0x00030465) aid_size_touch_slider_mark_ParamLimits

0x6011,	// (0x00030465) aid_size_touch_slider_mark

0xe0dc,	// (0x00038530) grid_graphic2_catg_pane_ParamLimits

0xe0dc,	// (0x00038530) grid_graphic2_catg_pane

0xe156,	// (0x000385aa) popup_grid_graphic2_window_t1_ParamLimits

0xe156,	// (0x000385aa) popup_grid_graphic2_window_t1

0xe168,	// (0x000385bc) popup_grid_graphic2_window_t2_ParamLimits

0xe168,	// (0x000385bc) popup_grid_graphic2_window_t2

0x0001,

0xfd9a,	// (0x0003a1ee) popup_grid_graphic2_window_t_ParamLimits

0xfd9a,	// (0x0003a1ee) popup_grid_graphic2_window_t

0x808b,	// (0x000324df) bg_button_pane_cp05_ParamLimits

0xe2cc,	// (0x00038720) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x000388d6) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x000388d6) cell_graphic2_catg_pane

0x772b,	// (0x00031b7f) bg_button_pane_cp12

0xe494,	// (0x000388e8) cell_graphic2_catg_pane_g1

0xd9ef,	// (0x00037e43) cell_tb_ext_pane_t1_ParamLimits

0x6aa5,	// (0x00030ef9) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6aa5,	// (0x00030ef9) vkb2_top_cell_right_narrow_pane

0x6abd,	// (0x00030f11) vkb2_top_cell_right_wide_pane_ParamLimits

0x6abd,	// (0x00030f11) vkb2_top_cell_right_wide_pane

0x61a3,	// (0x000305f7) bg_vkb2_func_pane_ParamLimits

0x61a3,	// (0x000305f7) bg_vkb2_func_pane

0x6b2e,	// (0x00030f82) vkb2_top_cell_left_pane_g1_ParamLimits

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp03_ParamLimits

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp03

0x6b8c,	// (0x00030fe0) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9af4,	// (0x00033f48) bg_vkb2_func_pane_g1

0x9afc,	// (0x00033f50) bg_vkb2_func_pane_g2

0x9b0c,	// (0x00033f60) bg_vkb2_func_pane_g3

0x9b04,	// (0x00033f58) bg_vkb2_func_pane_g4

0x9b14,	// (0x00033f68) bg_vkb2_func_pane_g5

0x9b1c,	// (0x00033f70) bg_vkb2_func_pane_g6

0x9b24,	// (0x00033f78) bg_vkb2_func_pane_g7

0x9b2c,	// (0x00033f80) bg_vkb2_func_pane_g8

0x9aec,	// (0x00033f40) bg_vkb2_func_pane_g9

0x0008,

0x0074,	// (0x0002a4c8) bg_vkb2_func_pane_g

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp01_ParamLimits

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp01

0x6b2e,	// (0x00030f82) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6b2e,	// (0x00030f82) vkb2_top_cell_right_wide_pane_g1

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp02_ParamLimits

0x61a3,	// (0x000305f7) bg_vkb2_fuc_pane_cp02

0x6b8c,	// (0x00030fe0) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6b8c,	// (0x00030fe0) vkb2_top_cell_right_narrow_pane_g1

0xd625,	// (0x00037a79) aid_touch_area_decrease_ParamLimits

0xd625,	// (0x00037a79) aid_touch_area_decrease

0xd643,	// (0x00037a97) aid_touch_area_increase_ParamLimits

0xd643,	// (0x00037a97) aid_touch_area_increase

0xd64f,	// (0x00037aa3) aid_touch_area_mute_ParamLimits

0xd64f,	// (0x00037aa3) aid_touch_area_mute

0xd673,	// (0x00037ac7) aid_touch_area_slider_ParamLimits

0xd673,	// (0x00037ac7) aid_touch_area_slider

0xd75f,	// (0x00037bb3) popup_slider_window_g4_ParamLimits

0xd75f,	// (0x00037bb3) popup_slider_window_g4

0xd76b,	// (0x00037bbf) popup_slider_window_g5_ParamLimits

0xd76b,	// (0x00037bbf) popup_slider_window_g5

0xd78d,	// (0x00037be1) popup_slider_window_g6_ParamLimits

0xd78d,	// (0x00037be1) popup_slider_window_g6

0xd7cd,	// (0x00037c21) popup_slider_window_t2_ParamLimits

0xd7cd,	// (0x00037c21) popup_slider_window_t2

0x0001,

0xfd07,	// (0x0003a15b) popup_slider_window_t_ParamLimits

0xfd07,	// (0x0003a15b) popup_slider_window_t

0xd7e5,	// (0x00037c39) slider_pane_ParamLimits

0xd7e5,	// (0x00037c39) slider_pane

0xe49d,	// (0x000388f1) slider_pane_g1_ParamLimits

0xe49d,	// (0x000388f1) slider_pane_g1

0xe4b1,	// (0x00038905) slider_pane_g2_ParamLimits

0xe4b1,	// (0x00038905) slider_pane_g2

0xe4c7,	// (0x0003891b) slider_pane_g3_ParamLimits

0xe4c7,	// (0x0003891b) slider_pane_g3

0x0003,

0xfde7,	// (0x0003a23b) slider_pane_g_ParamLimits

0xfde7,	// (0x0003a23b) slider_pane_g

0x9526,	// (0x0003397a) popup_tb_float_extension_window_ParamLimits

0x9526,	// (0x0003397a) popup_tb_float_extension_window

0xe4f3,	// (0x00038947) aid_size_cell_tb_float_ext

0x772b,	// (0x00031b7f) bg_popup_sub_window_cp28

0xe4ff,	// (0x00038953) grid_tb_float_ext_pane

0xe509,	// (0x0003895d) cell_tb_float_ext_pane_ParamLimits

0xe509,	// (0x0003895d) cell_tb_float_ext_pane

0xe523,	// (0x00038977) cell_tb_float_ext_pane_g1

0xe52c,	// (0x00038980) grid_highlight_pane_cp12

0x62f2,	// (0x00030746) cell_last_hwr_side_pane_ParamLimits

0x62f2,	// (0x00030746) cell_last_hwr_side_pane

0xc119,	// (0x0003656d) cell_last_hwr_side_pane_g1

0xe535,	// (0x00038989) cell_last_hwr_side_pane_g2

0x0001,

0x0087,	// (0x0002a4db) cell_last_hwr_side_pane_g

0x6a54,	// (0x00030ea8) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6a54,	// (0x00030ea8) vkb2_area_bottom_space_btn_pane

0x6408,	// (0x0003085c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe068,	// (0x000384bc) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6cea,	// (0x0003113e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6d09,	// (0x0003115d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6d09,	// (0x0003115d) vkb2_area_bottom_space_btn_pane_g1

0x6d43,	// (0x00031197) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d43,	// (0x00031197) vkb2_area_bottom_space_btn_pane_g2

0x6d79,	// (0x000311cd) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d79,	// (0x000311cd) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x0003a244) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x0003a244) vkb2_area_bottom_space_btn_pane_g

0x6266,	// (0x000306ba) cel_fep_hwr_func_pane_ParamLimits

0x6266,	// (0x000306ba) cel_fep_hwr_func_pane

0x62a2,	// (0x000306f6) cell_hwr_side_button_pane_ParamLimits

0x62a2,	// (0x000306f6) cell_hwr_side_button_pane

0xda23,	// (0x00037e77) aid_area_touch_clock_ParamLimits

0x7aa8,	// (0x00031efc) bg_uniindi_top_pane_ParamLimits

0xda35,	// (0x00037e89) uniindi_top_pane_g1_ParamLimits

0xda4b,	// (0x00037e9f) uniindi_top_pane_g2_ParamLimits

0xda57,	// (0x00037eab) uniindi_top_pane_g3_ParamLimits

0xda68,	// (0x00037ebc) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x0003a193) uniindi_top_pane_g_ParamLimits

0xda75,	// (0x00037ec9) uniindi_top_pane_t1_ParamLimits

0x7aa8,	// (0x00031efc) bg_vkb2_func_pane_cp01_ParamLimits

0x7aa8,	// (0x00031efc) bg_vkb2_func_pane_cp01

0xe53e,	// (0x00038992) cel_fep_hwr_func_pane_g1_ParamLimits

0xe53e,	// (0x00038992) cel_fep_hwr_func_pane_g1

0x7aa8,	// (0x00031efc) bg_vkb2_func_pane_cp02_ParamLimits

0x7aa8,	// (0x00031efc) bg_vkb2_func_pane_cp02

0xe53e,	// (0x00038992) cell_hwr_side_button_pane_g1_ParamLimits

0xe53e,	// (0x00038992) cell_hwr_side_button_pane_g1

0x996d,	// (0x00033dc1) status_pane_g4_ParamLimits

0x996d,	// (0x00033dc1) status_pane_g4

0x9987,	// (0x00033ddb) status_pane_t1

0xbe52,	// (0x000362a6) form2_midp_gauge_slider_cont_pane

0xbe5a,	// (0x000362ae) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe6c,	// (0x000362c0) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe7e,	// (0x000362d2) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00039f53) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe90,	// (0x000362e4) form2_midp_slider_pane_ParamLimits

0x66c3,	// (0x00030b17) aid_size_cell_func_vkb2_ParamLimits

0x66c3,	// (0x00030b17) aid_size_cell_func_vkb2

0xe4df,	// (0x00038933) slider_pane_g4_ParamLimits

0xe4df,	// (0x00038933) slider_pane_g4

0x6dc3,	// (0x00031217) form2_midp_gauge_slider_pane_t2_cp01

0x6dd1,	// (0x00031225) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6dd1,	// (0x00031225) form2_midp_gauge_slider_pane_t3_cp01

0x6dee,	// (0x00031242) form2_midp_slider_pane_cp01

0x772b,	// (0x00031b7f) navi_smil_pane

0xe577,	// (0x000389cb) navi_smil_pane_g1

0xe57f,	// (0x000389d3) navi_smil_pane_t1

0xe54c,	// (0x000389a0) form2_midp_slider_pane_g1

0xe555,	// (0x000389a9) form2_midp_slider_pane_g2

0xe55d,	// (0x000389b1) form2_midp_slider_pane_g3

0xe54c,	// (0x000389a0) form2_midp_slider_pane_g4

0xe565,	// (0x000389b9) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0003a24d) form2_midp_slider_pane_g

0x6db3,	// (0x00031207) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6db3,	// (0x00031207) vkb2_area_bottom_space_btn_pane_g4

0x97a3,	// (0x00033bf7) lc0_navi_pane_ParamLimits

0x97a3,	// (0x00033bf7) lc0_navi_pane

0x9819,	// (0x00033c6d) lc0_stat_indi_pane_ParamLimits

0x9819,	// (0x00033c6d) lc0_stat_indi_pane

0x9830,	// (0x00033c84) ls0_title_pane_ParamLimits

0x9830,	// (0x00033c84) ls0_title_pane

0x808b,	// (0x000324df) bg_popup_sub_pane_cp14_ParamLimits

0xda0a,	// (0x00037e5e) list_uniindi_pane_ParamLimits

0xda16,	// (0x00037e6a) uniindi_top_pane_ParamLimits

0xdab2,	// (0x00037f06) list_single_uniindi_pane_g1_ParamLimits

0xdac5,	// (0x00037f19) list_single_uniindi_pane_t1_ParamLimits

0x6df7,	// (0x0003124b) lc0_stat_clock_pane_ParamLimits

0x6df7,	// (0x0003124b) lc0_stat_clock_pane

0xe58d,	// (0x000389e1) lc0_stat_indi_pane_g1_ParamLimits

0xe58d,	// (0x000389e1) lc0_stat_indi_pane_g1

0xe59a,	// (0x000389ee) lc0_stat_indi_pane_g2_ParamLimits

0xe59a,	// (0x000389ee) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x0003a258) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x0003a258) lc0_stat_indi_pane_g

0x6e04,	// (0x00031258) lc0_uni_indicator_pane_ParamLimits

0x6e04,	// (0x00031258) lc0_uni_indicator_pane

0xe5a7,	// (0x000389fb) ls0_title_pane_g1_ParamLimits

0xe5a7,	// (0x000389fb) ls0_title_pane_g1

0xe5bb,	// (0x00038a0f) ls0_title_pane_t1_ParamLimits

0xe5bb,	// (0x00038a0f) ls0_title_pane_t1

0x6e11,	// (0x00031265) lc0_uni_indicator_pane_g1_ParamLimits

0x6e11,	// (0x00031265) lc0_uni_indicator_pane_g1

0xe5f1,	// (0x00038a45) lc0_stat_clock_pane_t1

0x772b,	// (0x00031b7f) main_ai5_pane

0xe5ff,	// (0x00038a53) ai5_sk_pane_ParamLimits

0xe5ff,	// (0x00038a53) ai5_sk_pane

0xe60c,	// (0x00038a60) cell_ai5_widget_pane_ParamLimits

0xe60c,	// (0x00038a60) cell_ai5_widget_pane

0xe68e,	// (0x00038ae2) aid_size_cell_widget_grid

0xe6a2,	// (0x00038af6) bg_ai5_widget_pane_ParamLimits

0xe6a2,	// (0x00038af6) bg_ai5_widget_pane

0xe6ca,	// (0x00038b1e) cell_ai5_widget_pane_g2

0xe6da,	// (0x00038b2e) cell_ai5_widget_pane_g3

0xe6f9,	// (0x00038b4d) cell_ai5_widget_pane_g4

0xe705,	// (0x00038b59) cell_ai5_widget_pane_g5

0xe711,	// (0x00038b65) cell_ai5_widget_pane_g6

0xe71d,	// (0x00038b71) cell_ai5_widget_pane_g7

0xe765,	// (0x00038bb9) cell_ai5_widget_pane_t1_ParamLimits

0xe765,	// (0x00038bb9) cell_ai5_widget_pane_t1

0xe782,	// (0x00038bd6) cell_ai5_widget_pane_t2_ParamLimits

0xe782,	// (0x00038bd6) cell_ai5_widget_pane_t2

0xe79a,	// (0x00038bee) cell_ai5_widget_pane_t3_ParamLimits

0xe79a,	// (0x00038bee) cell_ai5_widget_pane_t3

0xe7b2,	// (0x00038c06) cell_ai5_widget_pane_t4_ParamLimits

0xe7b2,	// (0x00038c06) cell_ai5_widget_pane_t4

0xe7cc,	// (0x00038c20) cell_ai5_widget_pane_t5_ParamLimits

0xe7cc,	// (0x00038c20) cell_ai5_widget_pane_t5

0xe7eb,	// (0x00038c3f) cell_ai5_widget_pane_t6_ParamLimits

0xe7eb,	// (0x00038c3f) cell_ai5_widget_pane_t6

0xe7fd,	// (0x00038c51) cell_ai5_widget_pane_t7_ParamLimits

0xe7fd,	// (0x00038c51) cell_ai5_widget_pane_t7

0xe816,	// (0x00038c6a) cell_ai5_widget_pane_t8_ParamLimits

0xe816,	// (0x00038c6a) cell_ai5_widget_pane_t8

0x0009,

0xfe1e,	// (0x0003a272) cell_ai5_widget_pane_t_ParamLimits

0xfe1e,	// (0x0003a272) cell_ai5_widget_pane_t

0xe862,	// (0x00038cb6) grid_ai5_widget_pane

0x808b,	// (0x000324df) highlight_cell_ai5_widget_pane_ParamLimits

0x808b,	// (0x000324df) highlight_cell_ai5_widget_pane

0xe87a,	// (0x00038cce) ai5_sk_left_pane

0xe884,	// (0x00038cd8) ai5_sk_middle_pane

0xe88e,	// (0x00038ce2) ai5_sk_right_pane

0xe898,	// (0x00038cec) bg_ai5_widget_pane_g1_ParamLimits

0xe898,	// (0x00038cec) bg_ai5_widget_pane_g1

0xe8a4,	// (0x00038cf8) bg_ai5_widget_pane_g2_ParamLimits

0xe8a4,	// (0x00038cf8) bg_ai5_widget_pane_g2

0xe8b0,	// (0x00038d04) bg_ai5_widget_pane_g3_ParamLimits

0xe8b0,	// (0x00038d04) bg_ai5_widget_pane_g3

0xe8bc,	// (0x00038d10) bg_ai5_widget_pane_g4_ParamLimits

0xe8bc,	// (0x00038d10) bg_ai5_widget_pane_g4

0xe8c8,	// (0x00038d1c) bg_ai5_widget_pane_g5_ParamLimits

0xe8c8,	// (0x00038d1c) bg_ai5_widget_pane_g5

0xe8d4,	// (0x00038d28) bg_ai5_widget_pane_g6_ParamLimits

0xe8d4,	// (0x00038d28) bg_ai5_widget_pane_g6

0xe8e0,	// (0x00038d34) bg_ai5_widget_pane_g7_ParamLimits

0xe8e0,	// (0x00038d34) bg_ai5_widget_pane_g7

0xe8ec,	// (0x00038d40) bg_ai5_widget_pane_g8_ParamLimits

0xe8ec,	// (0x00038d40) bg_ai5_widget_pane_g8

0xe8f8,	// (0x00038d4c) bg_ai5_widget_pane_g9_ParamLimits

0xe8f8,	// (0x00038d4c) bg_ai5_widget_pane_g9

0x0008,

0xfe33,	// (0x0003a287) bg_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x0003a287) bg_ai5_widget_pane_g

0xe92b,	// (0x00038d7f) cell_shortcut_ai5_widget_pane_ParamLimits

0xe92b,	// (0x00038d7f) cell_shortcut_ai5_widget_pane

0x78e8,	// (0x00031d3c) bg_cell_shortcut_ai5_widget_pane

0xe93c,	// (0x00038d90) cell_grid_ai5_widget_pane_g1

0xe945,	// (0x00038d99) highlight_cell_shortcut_ai5_widget_pane

0x9af4,	// (0x00033f48) ai5_sk_left_pane_g1

0xe94d,	// (0x00038da1) ai5_sk_left_pane_g2

0xe955,	// (0x00038da9) ai5_sk_left_pane_g3

0xe95d,	// (0x00038db1) ai5_sk_left_pane_g4

0x0003,

0xfe46,	// (0x0003a29a) ai5_sk_left_pane_g

0xe965,	// (0x00038db9) ai5_sk_left_pane_t1

0x9afc,	// (0x00033f50) ai5_sk_right_pane_g1

0xe973,	// (0x00038dc7) ai5_sk_right_pane_g2

0xe97b,	// (0x00038dcf) ai5_sk_right_pane_g3

0xe983,	// (0x00038dd7) ai5_sk_right_pane_g4

0x0003,

0xfe4f,	// (0x0003a2a3) ai5_sk_right_pane_g

0xe98b,	// (0x00038ddf) ai5_sk_right_pane_t1

0x9afc,	// (0x00033f50) ai5_sk_middle_pane_g1

0x9af4,	// (0x00033f48) ai5_sk_middle_pane_g2

0x9b14,	// (0x00033f68) ai5_sk_middle_pane_g3

0xe97b,	// (0x00038dcf) ai5_sk_middle_pane_g4

0xe955,	// (0x00038da9) ai5_sk_middle_pane_g5

0xe999,	// (0x00038ded) ai5_sk_middle_pane_g6

0xe9a1,	// (0x00038df5) ai5_sk_middle_pane_g7

0x0006,

0xfe58,	// (0x0003a2ac) ai5_sk_middle_pane_g

0x9633,	// (0x00033a87) aid_touch_area_size_lc0_ParamLimits

0x9633,	// (0x00033a87) aid_touch_area_size_lc0

0x6437,	// (0x0003088b) cell_hwr_candidate_pane_t1_ParamLimits

0x964f,	// (0x00033aa3) aid_touch_navi_pane

0x9917,	// (0x00033d6b) status_dt_navi_pane_ParamLimits

0x9917,	// (0x00033d6b) status_dt_navi_pane

0x9924,	// (0x00033d78) status_dt_sta_pane_ParamLimits

0x9924,	// (0x00033d78) status_dt_sta_pane

0xe9a9,	// (0x00038dfd) dt_sta_controll_pane

0xe9b6,	// (0x00038e0a) dt_sta_indi_pane

0xe9c7,	// (0x00038e1b) dt_sta_title_pane

0x7aa8,	// (0x00031efc) bg_dt_sta_indi_pane_ParamLimits

0x7aa8,	// (0x00031efc) bg_dt_sta_indi_pane

0xe9da,	// (0x00038e2e) dt_sta_battery_pane

0xe9e2,	// (0x00038e36) dt_sta_indi_pane_g1

0xe9eb,	// (0x00038e3f) dt_sta_indi_pane_g2

0xe9f4,	// (0x00038e48) dt_sta_indi_pane_g3

0x0002,

0xfe67,	// (0x0003a2bb) dt_sta_indi_pane_g

0xe9fd,	// (0x00038e51) dt_sta_signal_pane

0x808b,	// (0x000324df) bg_dt_sta_title_pane_ParamLimits

0x808b,	// (0x000324df) bg_dt_sta_title_pane

0xea06,	// (0x00038e5a) dt_sta_title_pane_g1

0xea0e,	// (0x00038e62) dt_sta_title_pane_t1_ParamLimits

0xea0e,	// (0x00038e62) dt_sta_title_pane_t1

0x772b,	// (0x00031b7f) bg_dt_sta_control_pane

0xea23,	// (0x00038e77) dt_sta_controll_pane_g1

0xea2c,	// (0x00038e80) bg_dt_sta_title_pane_g1

0xea35,	// (0x00038e89) bg_dt_sta_title_pane_g2

0xea3e,	// (0x00038e92) bg_dt_sta_title_pane_g3

0x0002,

0xfe6e,	// (0x0003a2c2) bg_dt_sta_title_pane_g

0xc119,	// (0x0003656d) bg_dt_sta_indi_pane_g1

0xea47,	// (0x00038e9b) dt_sta_signal_pane_g1

0xea4f,	// (0x00038ea3) dt_sta_signal_pane_g2

0x0001,

0xfe75,	// (0x0003a2c9) dt_sta_signal_pane_g

0xea57,	// (0x00038eab) dt_sta_battery_pane_g1

0xea60,	// (0x00038eb4) dt_sta_battery_pane_t1

0xc119,	// (0x0003656d) bg_dt_sta_control_pane_g1

0x87fa,	// (0x00032c4e) fep_china_uni_eep_pane

0x8802,	// (0x00032c56) fep_china_uni_entry_pane_ParamLimits

0x8812,	// (0x00032c66) popup_fep_china_uni_window_g1_ParamLimits

0x8822,	// (0x00032c76) popup_fep_china_uni_window_g2_ParamLimits

0x8822,	// (0x00032c76) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x00039b89) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x00039b89) popup_fep_china_uni_window_g

0xea6f,	// (0x00038ec3) fep_china_uni_eep_pane_g1

0xea77,	// (0x00038ecb) fep_china_uni_eep_pane_t1

0xe56e,	// (0x000389c2) aid_touch_area_size_smil_player

0x979b,	// (0x00033bef) lc0_clock_pane

0x997b,	// (0x00033dcf) status_pane_g5_ParamLimits

0x997b,	// (0x00033dcf) status_pane_g5

0x91eb,	// (0x0003363f) popup_keymap_window

0x9939,	// (0x00033d8d) status_icon_pane

0xe6da,	// (0x00038b2e) cell_ai5_widget_pane_g3_ParamLimits

0xe6f9,	// (0x00038b4d) cell_ai5_widget_pane_g4_ParamLimits

0xe705,	// (0x00038b59) cell_ai5_widget_pane_g5_ParamLimits

0xe729,	// (0x00038b7d) cell_ai5_widget_pane_g8_ParamLimits

0xe729,	// (0x00038b7d) cell_ai5_widget_pane_g8

0xe73d,	// (0x00038b91) cell_ai5_widget_pane_g9_ParamLimits

0xe73d,	// (0x00038b91) cell_ai5_widget_pane_g9

0xe751,	// (0x00038ba5) cell_ai5_widget_pane_g10_ParamLimits

0xe751,	// (0x00038ba5) cell_ai5_widget_pane_g10

0xea86,	// (0x00038eda) status_icon_pane_g1

0x772b,	// (0x00031b7f) bg_popup_sub_pane_cp13

0xea8e,	// (0x00038ee2) popup_keymap_window_t1

0x8fc7,	// (0x0003341b) control_pane_g6_ParamLimits

0x8fc7,	// (0x0003341b) control_pane_g6

0x8fd4,	// (0x00033428) control_pane_g7_ParamLimits

0x8fd4,	// (0x00033428) control_pane_g7

0x8fe1,	// (0x00033435) control_pane_g8_ParamLimits

0x8fe1,	// (0x00033435) control_pane_g8

0xe9a9,	// (0x00038dfd) dt_sta_controll_pane_ParamLimits

0xe9b6,	// (0x00038e0a) dt_sta_indi_pane_ParamLimits

0xe9c7,	// (0x00038e1b) dt_sta_title_pane_ParamLimits

0x7fc3,	// (0x00032417) aid_size_touch_scroll_bar_cale

0x4e08,	// (0x0002f25c) popup_discreet_window_ParamLimits

0x4e08,	// (0x0002f25c) popup_discreet_window

0x4e90,	// (0x0002f2e4) popup_sk_window

0xa1b9,	// (0x0003460d) bg_popup_sub_pane_cp28_ParamLimits

0xa1b9,	// (0x0003460d) bg_popup_sub_pane_cp28

0xea9c,	// (0x00038ef0) popup_discreet_window_g1_ParamLimits

0xea9c,	// (0x00038ef0) popup_discreet_window_g1

0xeabc,	// (0x00038f10) popup_discreet_window_t1_ParamLimits

0xeabc,	// (0x00038f10) popup_discreet_window_t1

0xeada,	// (0x00038f2e) popup_discreet_window_t2_ParamLimits

0xeada,	// (0x00038f2e) popup_discreet_window_t2

0x0002,

0xfe7a,	// (0x0003a2ce) popup_discreet_window_t_ParamLimits

0xfe7a,	// (0x0003a2ce) popup_discreet_window_t

0x6e25,	// (0x00031279) popup_sk_window_g1

0x6e2f,	// (0x00031283) popup_sk_window_g2

0x0001,

0xfe81,	// (0x0003a2d5) popup_sk_window_g

0xeb2c,	// (0x00038f80) popup_sk_window_t1

0xeb3a,	// (0x00038f8e) popup_sk_window_t1_copy1

0xe6ca,	// (0x00038b1e) cell_ai5_widget_pane_g2_ParamLimits

0xe828,	// (0x00038c7c) cell_ai5_widget_pane_t9_ParamLimits

0xe828,	// (0x00038c7c) cell_ai5_widget_pane_t9

0x772b,	// (0x00031b7f) main_fep_fshwr2_pane

0xeb48,	// (0x00038f9c) aid_fshwr2_btn_pane

0xeb50,	// (0x00038fa4) aid_fshwr2_syb_pane

0xeb58,	// (0x00038fac) aid_fshwr2_txt_pane

0xeb60,	// (0x00038fb4) fshwr2_func_candi_pane

0xeb6c,	// (0x00038fc0) fshwr2_hwr_syb_pane

0xeb78,	// (0x00038fcc) fshwr2_icf_pane

0x772b,	// (0x00031b7f) fshwr2_icf_bg_pane

0xeb96,	// (0x00038fea) fshwr2_icf_pane_t1_ParamLimits

0xeb96,	// (0x00038fea) fshwr2_icf_pane_t1

0xc119,	// (0x0003656d) fshwr2_func_candi_pane_g1

0xebad,	// (0x00039001) fshwr2_func_candi_row_pane_ParamLimits

0xebad,	// (0x00039001) fshwr2_func_candi_row_pane

0xebbe,	// (0x00039012) cell_fshwr2_syb_pane_ParamLimits

0xebbe,	// (0x00039012) cell_fshwr2_syb_pane

0xc3ab,	// (0x000367ff) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3ab,	// (0x000367ff) fshwr2_hwr_syb_pane_g1

0x772b,	// (0x00031b7f) bg_popup_call_pane_cp01

0xebd8,	// (0x0003902c) fshwr2_func_candi_cell_pane_ParamLimits

0xebd8,	// (0x0003902c) fshwr2_func_candi_cell_pane

0xec09,	// (0x0003905d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec09,	// (0x0003905d) fshwr2_func_candi_cell_bg_pane

0xec23,	// (0x00039077) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec23,	// (0x00039077) fshwr2_func_candi_cell_pane_g1

0xec4b,	// (0x0003909f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec4b,	// (0x0003909f) fshwr2_func_candi_cell_pane_t1

0x772b,	// (0x00031b7f) bg_button_pane_cp08

0x8cf0,	// (0x00033144) cell_fshwr2_syb_bg_pane

0xec5e,	// (0x000390b2) cell_fshwr2_syb_bg_pane_g1

0xec66,	// (0x000390ba) cell_fshwr2_syb_bg_pane_t1

0x808b,	// (0x000324df) main_tmo_pane

0xacda,	// (0x0003512e) uni_indicator_pane_g1_ParamLimits

0xacef,	// (0x00035143) uni_indicator_pane_g2_ParamLimits

0xad05,	// (0x00035159) uni_indicator_pane_g3_ParamLimits

0xad1b,	// (0x0003516f) uni_indicator_pane_g4_ParamLimits

0xad1b,	// (0x0003516f) uni_indicator_pane_g4

0xad2f,	// (0x00035183) uni_indicator_pane_g5_ParamLimits

0xad2f,	// (0x00035183) uni_indicator_pane_g5

0xad43,	// (0x00035197) uni_indicator_pane_g6_ParamLimits

0xad43,	// (0x00035197) uni_indicator_pane_g6

0xf932,	// (0x00039d86) uni_indicator_pane_g_ParamLimits

0xd601,	// (0x00037a55) popup_tmo_note_window_ParamLimits

0xd601,	// (0x00037a55) popup_tmo_note_window

0x772b,	// (0x00031b7f) fshwr2_bg_pane

0xec3c,	// (0x00039090) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec3c,	// (0x00039090) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe86,	// (0x0003a2da) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe86,	// (0x0003a2da) fshwr2_func_candi_cell_pane_g

0xc119,	// (0x0003656d) bg_popup_window_pane_cp01

0xec75,	// (0x000390c9) bg_popup_window_pane_g1_cp01

0xec7e,	// (0x000390d2) bg_popup_window_pane_cp22_ParamLimits

0xec7e,	// (0x000390d2) bg_popup_window_pane_cp22

0xec8c,	// (0x000390e0) listscroll_tmo_link_pane_ParamLimits

0xec8c,	// (0x000390e0) listscroll_tmo_link_pane

0xeccc,	// (0x00039120) popup_tmo_note_window_g1_ParamLimits

0xeccc,	// (0x00039120) popup_tmo_note_window_g1

0xecd9,	// (0x0003912d) tmo_note_info_pane_ParamLimits

0xecd9,	// (0x0003912d) tmo_note_info_pane

0xecf3,	// (0x00039147) list_tmo_note_info_pane_g1_ParamLimits

0xecf3,	// (0x00039147) list_tmo_note_info_pane_g1

0xed0a,	// (0x0003915e) list_tmo_note_info_pane_g2_ParamLimits

0xed0a,	// (0x0003915e) list_tmo_note_info_pane_g2

0x0001,

0xfe8b,	// (0x0003a2df) list_tmo_note_info_pane_g_ParamLimits

0xfe8b,	// (0x0003a2df) list_tmo_note_info_pane_g

0xed26,	// (0x0003917a) list_tmo_note_info_text_pane_ParamLimits

0xed26,	// (0x0003917a) list_tmo_note_info_text_pane

0xeda7,	// (0x000391fb) list_tmo_link_pane

0xedb4,	// (0x00039208) scroll_pane_cp20

0xedc1,	// (0x00039215) list_single_tmo_link_pane_ParamLimits

0xedc1,	// (0x00039215) list_single_tmo_link_pane

0xedd1,	// (0x00039225) list_single_tmo_link_pane_t1

0xeddf,	// (0x00039233) list_tmo_note_info_text_pane_t1_ParamLimits

0xeddf,	// (0x00039233) list_tmo_note_info_text_pane_t1

0x8151,	// (0x000325a5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8151,	// (0x000325a5) aid_size_touch_scroll_bar_cp01

0x562f,	// (0x0002fa83) aid_size_touch_slider_marker

0x4e78,	// (0x0002f2cc) popup_settings_window_ParamLimits

0x4e78,	// (0x0002f2cc) popup_settings_window

0x6f2e,	// (0x00031382) popup_candi_list_indi_window

0x964f,	// (0x00033aa3) aid_touch_navi_pane_ParamLimits

0x65fd,	// (0x00030a51) rs_clock_indi_pane

0x6606,	// (0x00030a5a) sctrl_sk_bottom_pane_ParamLimits

0x6617,	// (0x00030a6b) sctrl_sk_top_pane_ParamLimits

0x671d,	// (0x00030b71) popup_fep_tooltip_window

0xe68e,	// (0x00038ae2) aid_size_cell_widget_grid_ParamLimits

0xe6be,	// (0x00038b12) cell_ai5_widget_pane_g1_ParamLimits

0xe6be,	// (0x00038b12) cell_ai5_widget_pane_g1

0xe711,	// (0x00038b65) cell_ai5_widget_pane_g6_ParamLimits

0xe71d,	// (0x00038b71) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe09,	// (0x0003a25d) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0003a25d) cell_ai5_widget_pane_g

0xe84c,	// (0x00038ca0) cell_ai5_widget_pane_t10_ParamLimits

0xe84c,	// (0x00038ca0) cell_ai5_widget_pane_t10

0xe862,	// (0x00038cb6) grid_ai5_widget_pane_ParamLimits

0xe904,	// (0x00038d58) cell_contacts_ai5_widget_pane_ParamLimits

0xe904,	// (0x00038d58) cell_contacts_ai5_widget_pane

0xeaef,	// (0x00038f43) popup_discreet_window_t3_ParamLimits

0xeaef,	// (0x00038f43) popup_discreet_window_t3

0xeb82,	// (0x00038fd6) popup_fshwr2_char_preview_window_ParamLimits

0xeb82,	// (0x00038fd6) popup_fshwr2_char_preview_window

0xed44,	// (0x00039198) tmo_note_info_pane_t1

0xed59,	// (0x000391ad) tmo_note_info_pane_t2

0xed6e,	// (0x000391c2) tmo_note_info_pane_t3

0xed83,	// (0x000391d7) tmo_note_info_pane_t4

0xed95,	// (0x000391e9) tmo_note_info_pane_t5

0x0004,

0xfe90,	// (0x0003a2e4) tmo_note_info_pane_t

0xeda7,	// (0x000391fb) list_tmo_link_pane_ParamLimits

0xedb4,	// (0x00039208) scroll_pane_cp20_ParamLimits

0x772b,	// (0x00031b7f) bg_popup_fep_char_preview_window_cp01

0xedf8,	// (0x0003924c) popup_fshwr2_char_preview_window_t1

0xee06,	// (0x0003925a) popup_candi_list_indi_window_g1

0xee0f,	// (0x00039263) bg_cell_contacts_ai5_widget_pane

0xee1b,	// (0x0003926f) cell_contacts_ai5_widget_pane_g1

0xee2f,	// (0x00039283) cell_contacts_ai5_widget_pane_g2

0xee3e,	// (0x00039292) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9b,	// (0x0003a2ef) cell_contacts_ai5_widget_pane_g

0xee51,	// (0x000392a5) cell_contacts_ai5_widget_pane_t1

0x808b,	// (0x000324df) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeecb,	// (0x0003931f) settings_container_pane

0x8cf0,	// (0x00033144) listscroll_set_pane_copy1

0xb82c,	// (0x00035c80) scroll_pane_cp121_copy1

0xeed7,	// (0x0003932b) set_content_pane_copy1

0xeedf,	// (0x00039333) aid_height_set_list_copy1_ParamLimits

0xeedf,	// (0x00039333) aid_height_set_list_copy1

0xaf3b,	// (0x0003538f) aid_size_parent_copy1_ParamLimits

0xaf3b,	// (0x0003538f) aid_size_parent_copy1

0xeeeb,	// (0x0003933f) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeeb,	// (0x0003933f) button_value_adjust_pane_cp6_copy1

0x9056,	// (0x000334aa) list_highlight_pane_cp2_copy1_ParamLimits

0x9056,	// (0x000334aa) list_highlight_pane_cp2_copy1

0xeeff,	// (0x00039353) list_set_pane_copy1_ParamLimits

0xeeff,	// (0x00039353) list_set_pane_copy1

0xee66,	// (0x000392ba) main_pane_set_t1_copy1_ParamLimits

0xee66,	// (0x000392ba) main_pane_set_t1_copy1

0xeea0,	// (0x000392f4) main_pane_set_t2_copy1_ParamLimits

0xeea0,	// (0x000392f4) main_pane_set_t2_copy1

0xefac,	// (0x00039400) main_pane_set_t3_copy1

0xefba,	// (0x0003940e) main_pane_set_t4_copy1

0xeebf,	// (0x00039313) set_content_pane_g1_copy1_ParamLimits

0xeebf,	// (0x00039313) set_content_pane_g1_copy1

0xefc8,	// (0x0003941c) setting_code_pane_copy1

0xefd2,	// (0x00039426) setting_slider_graphic_pane_copy1

0xefd2,	// (0x00039426) setting_slider_pane_copy1

0xefd2,	// (0x00039426) setting_text_pane_copy1

0xefdc,	// (0x00039430) setting_volume_pane_copy1

0xefe5,	// (0x00039439) settings_code_pane_cp2_copy1

0xefed,	// (0x00039441) settings_code_pane_cp_copy1_ParamLimits

0xefed,	// (0x00039441) settings_code_pane_cp_copy1

0xf001,	// (0x00039455) volume_set_pane_copy1

0xf009,	// (0x0003945d) volume_set_pane_g10_copy1

0xf011,	// (0x00039465) volume_set_pane_g1_copy1

0xf019,	// (0x0003946d) volume_set_pane_g2_copy1

0xf021,	// (0x00039475) volume_set_pane_g3_copy1

0xf029,	// (0x0003947d) volume_set_pane_g4_copy1

0xf031,	// (0x00039485) volume_set_pane_g5_copy1

0xf039,	// (0x0003948d) volume_set_pane_g6_copy1

0xf041,	// (0x00039495) volume_set_pane_g7_copy1

0xf049,	// (0x0003949d) volume_set_pane_g8_copy1

0xf051,	// (0x000394a5) volume_set_pane_g9_copy1

0x781f,	// (0x00031c73) bg_set_opt_pane_cp_copy1_ParamLimits

0x781f,	// (0x00031c73) bg_set_opt_pane_cp_copy1

0xf059,	// (0x000394ad) setting_slider_pane_t1_copy1_ParamLimits

0xf059,	// (0x000394ad) setting_slider_pane_t1_copy1

0xf077,	// (0x000394cb) setting_slider_pane_t2_copy1_ParamLimits

0xf077,	// (0x000394cb) setting_slider_pane_t2_copy1

0xf091,	// (0x000394e5) setting_slider_pane_t3_copy1_ParamLimits

0xf091,	// (0x000394e5) setting_slider_pane_t3_copy1

0xf0a9,	// (0x000394fd) slider_set_pane_copy1_ParamLimits

0xf0a9,	// (0x000394fd) slider_set_pane_copy1

0x80f2,	// (0x00032546) set_opt_bg_pane_g1_copy2

0x80fa,	// (0x0003254e) set_opt_bg_pane_g2_copy2

0xf0bf,	// (0x00039513) set_opt_bg_pane_g3_copy2

0x810a,	// (0x0003255e) set_opt_bg_pane_g4_copy2

0x8112,	// (0x00032566) set_opt_bg_pane_g5_copy2

0x811a,	// (0x0003256e) set_opt_bg_pane_g6_copy2

0xf0c9,	// (0x0003951d) set_opt_bg_pane_g7_copy2

0xf0d1,	// (0x00039525) set_opt_bg_pane_g8_copy2

0xf0db,	// (0x0003952f) set_opt_bg_pane_g9_copy2

0x6e39,	// (0x0003128d) aid_size_touch_slider_mark_copy1_ParamLimits

0x6e39,	// (0x0003128d) aid_size_touch_slider_mark_copy1

0xf0e5,	// (0x00039539) slider_set_pane_g1_copy1

0x6e4d,	// (0x000312a1) slider_set_pane_g2_copy1

0x6031,	// (0x00030485) slider_set_pane_g3_copy1_ParamLimits

0x6031,	// (0x00030485) slider_set_pane_g3_copy1

0x6045,	// (0x00030499) slider_set_pane_g4_copy1_ParamLimits

0x6045,	// (0x00030499) slider_set_pane_g4_copy1

0x605d,	// (0x000304b1) slider_set_pane_g5_copy1_ParamLimits

0x605d,	// (0x000304b1) slider_set_pane_g5_copy1

0x6031,	// (0x00030485) slider_set_pane_g6_copy1_ParamLimits

0x6031,	// (0x00030485) slider_set_pane_g6_copy1

0x6e55,	// (0x000312a9) slider_set_pane_g7_copy1_ParamLimits

0x6e55,	// (0x000312a9) slider_set_pane_g7_copy1

0x773f,	// (0x00031b93) bg_set_opt_pane_cp2_copy1

0xf0ee,	// (0x00039542) setting_slider_graphic_pane_g1_copy1

0xf0f7,	// (0x0003954b) setting_slider_graphic_pane_t1_copy1

0xf107,	// (0x0003955b) setting_slider_graphic_pane_t2_copy1

0xf117,	// (0x0003956b) slider_set_pane_cp_copy1

0xf127,	// (0x0003957b) input_focus_pane_cp1_copy1

0xf130,	// (0x00039584) list_set_text_pane_copy1

0xf138,	// (0x0003958c) setting_text_pane_g1_copy1

0x500f,	// (0x0002f463) set_text_pane_t1_copy1

0xf127,	// (0x0003957b) input_focus_pane_cp2_copy1

0xf138,	// (0x0003958c) setting_code_pane_g1_copy1

0xf141,	// (0x00039595) setting_code_pane_t1_copy1

0xf14f,	// (0x000395a3) list_set_graphic_pane_copy1

0x773f,	// (0x00031b93) bg_set_opt_pane_cp4_copy1

0x89f6,	// (0x00032e4a) list_set_graphic_pane_g1_copy1_ParamLimits

0x89f6,	// (0x00032e4a) list_set_graphic_pane_g1_copy1

0xf161,	// (0x000395b5) list_set_graphic_pane_g2_copy1

0x8a0e,	// (0x00032e62) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a0e,	// (0x00032e62) list_set_graphic_pane_t1_copy1

0xc119,	// (0x0003656d) rs_clock_indi_pane_g1

0xf169,	// (0x000395bd) rs_clock_indi_pane_t1

0xe9da,	// (0x00038e2e) rs_indi_pane

0xf177,	// (0x000395cb) rs_indi_pane_g1

0xf180,	// (0x000395d4) rs_indi_pane_g2

0xf189,	// (0x000395dd) rs_indi_pane_g3

0x0002,

0xfea2,	// (0x0003a2f6) rs_indi_pane_g

0x8cf0,	// (0x00033144) bg_popup_preview_window_pane_cp03

0xf192,	// (0x000395e6) popup_fep_tooltip_window_t1

0xcd94,	// (0x000371e8) popup_note2_window_g2_ParamLimits

0xcd94,	// (0x000371e8) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0003a0cb) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0003a0cb) popup_note2_window_g

0xd29d,	// (0x000376f1) bg_popup_sub_pane_cp11_ParamLimits

0xd2aa,	// (0x000376fe) cell_ai3_links_pane_g1_ParamLimits

0xd2c1,	// (0x00037715) cell_ai3_links_pane_t1

0x500f,	// (0x0002f463) set_text_pane_t1_copy1_ParamLimits

0x8c01,	// (0x00033055) cell_graphic_popup_pane_cp2_ParamLimits

0x8c01,	// (0x00033055) cell_graphic_popup_pane_cp2

0xf1a0,	// (0x000395f4) cell_graphic_popup_pane_g1_cp2

0x7dd6,	// (0x0003222a) cell_graphic_popup_pane_g2_cp2

0xf1a8,	// (0x000395fc) cell_graphic_popup_pane_g3_cp2

0xf1b0,	// (0x00039604) cell_graphic_popup_pane_t2_cp2

0x7de7,	// (0x0003223b) grid_highlight_pane_cp3_cp2

0x8435,	// (0x00032889) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x808b,	// (0x000324df) main_tmo_pane_ParamLimits

0xd5f5,	// (0x00037a49) popup_tmo_big_image_note_window

0xe6ae,	// (0x00038b02) cell_ai5_widget_list_pane

0xe6b6,	// (0x00038b0a) cell_ai5_widget_lrg_icon_pane

0xed44,	// (0x00039198) tmo_note_info_pane_t1_ParamLimits

0xed59,	// (0x000391ad) tmo_note_info_pane_t2_ParamLimits

0xed6e,	// (0x000391c2) tmo_note_info_pane_t3_ParamLimits

0xed83,	// (0x000391d7) tmo_note_info_pane_t4_ParamLimits

0xed95,	// (0x000391e9) tmo_note_info_pane_t5_ParamLimits

0xfe90,	// (0x0003a2e4) tmo_note_info_pane_t_ParamLimits

0xeecb,	// (0x0003931f) settings_container_pane_ParamLimits

0xf11f,	// (0x00039573) indicator_popup_pane_cp5

0xf11f,	// (0x00039573) indicator_popup_pane_cp6

0xf14f,	// (0x000395a3) list_set_graphic_pane_copy1_ParamLimits

0x772b,	// (0x00031b7f) bg_popup_window_pane_cp23

0xf1be,	// (0x00039612) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x0003961c) popup_tmo_big_image_note_window_t1

0xf1d8,	// (0x0003962c) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x0003963c) popup_tmo_big_image_note_window_t3

0x0002,

0xfea9,	// (0x0003a2fd) popup_tmo_big_image_note_window_t

0xf1f8,	// (0x0003964c) cell_ai5_widget_lrg_icon_pane_g1

0xf200,	// (0x00039654) cell_ai5_widget_lrg_icon_pane_t1

0xf20e,	// (0x00039662) cell_ai5_widget_list_row_pane_ParamLimits

0xf20e,	// (0x00039662) cell_ai5_widget_list_row_pane

0xf227,	// (0x0003967b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x0003967b) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x00039688) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x00039688) cell_ai5_widget_list_row_pane_t1

0xf24c,	// (0x000396a0) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24c,	// (0x000396a0) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeb0,	// (0x0003a304) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb0,	// (0x0003a304) cell_ai5_widget_list_row_pane_t

0x4d2f,	// (0x0002f183) main_fep_vtchi_ss_pane

0xf25e,	// (0x000396b2) popup_fep_char_pre_window

0xf266,	// (0x000396ba) popup_fep_ituss_window

0xf287,	// (0x000396db) popup_fep_vkbss_window

0xf2a6,	// (0x000396fa) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x000396fa) grid_vkbss_keypad_pane

0xf2b6,	// (0x0003970a) ituss_keypad_pane

0xf2cf,	// (0x00039723) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x00039723) aid_vkbss_key_offset

0xf2db,	// (0x0003972f) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x0003972f) cell_vkbss_key_pane

0xf2f1,	// (0x00039745) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x00039745) bg_cell_vkbss_key_g1

0xf2fd,	// (0x00039751) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x00039751) cell_vkbss_key_3p_pane

0xf317,	// (0x0003976b) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0003976b) cell_vkbss_key_g1

0xf331,	// (0x00039785) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x00039785) cell_vkbss_key_t1

0xf35c,	// (0x000397b0) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x000397b0) cell_ituss_key_pane

0xf36c,	// (0x000397c0) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x000397c0) bg_cell_ituss_key_g1

0xf378,	// (0x000397cc) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x000397cc) cell_ituss_key_pane_g1

0xf384,	// (0x000397d8) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x000397d8) cell_ituss_key_pane_g2

0x0001,

0xfeb5,	// (0x0003a309) cell_ituss_key_pane_g_ParamLimits

0xfeb5,	// (0x0003a309) cell_ituss_key_pane_g

0xf39d,	// (0x000397f1) cell_ituss_key_t1_ParamLimits

0xf39d,	// (0x000397f1) cell_ituss_key_t1

0xf3cb,	// (0x0003981f) cell_ituss_key_t2_ParamLimits

0xf3cb,	// (0x0003981f) cell_ituss_key_t2

0xf3fc,	// (0x00039850) cell_ituss_key_t3_ParamLimits

0xf3fc,	// (0x00039850) cell_ituss_key_t3

0xf42d,	// (0x00039881) cell_ituss_key_t4_ParamLimits

0xf42d,	// (0x00039881) cell_ituss_key_t4

0x0003,

0xfeba,	// (0x0003a30e) cell_ituss_key_t_ParamLimits

0xfeba,	// (0x0003a30e) cell_ituss_key_t

0xf45e,	// (0x000398b2) cell_vkbss_key_3p_pane_g1

0xf466,	// (0x000398ba) cell_vkbss_key_3p_pane_g2

0xf46e,	// (0x000398c2) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec3,	// (0x0003a317) cell_vkbss_key_3p_pane_g

0x772b,	// (0x00031b7f) bg_popup_fep_char_preview_window_cp02

0xf476,	// (0x000398ca) popup_fep_char_pre_window_t1

0xe684,	// (0x00038ad8) main_ai5_sk_pane

0xee0f,	// (0x00039263) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee1b,	// (0x0003926f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee2f,	// (0x00039283) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee3e,	// (0x00039292) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9b,	// (0x0003a2ef) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee51,	// (0x000392a5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x808b,	// (0x000324df) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf485,	// (0x000398d9) main_ai5_sk_pane_g1

0x9ff2,	// (0x00034446) popup_query_code_window_g1

0xf27c,	// (0x000396d0) popup_fep_vkb_icf_pane

0xf290,	// (0x000396e4) popup_fep_vtchi_icf_pane

0x808b,	// (0x000324df) bg_icf_pane

0xf49d,	// (0x000398f1) list_vkb_icf_pane

0x808b,	// (0x000324df) bg_icf_pane_cp01

0xd5b4,	// (0x00037a08) vtchi_icf_list_pane

0xf4bd,	// (0x00039911) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x00039911) list_vkb_icf_pane_t1

0xf4d4,	// (0x00039928) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x00039928) vtchi_icf_list_pane_t1

0xf266,	// (0x000396ba) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x000396e4) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x0003970a) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x0003971a) ituss_sks_pane

0x808b,	// (0x000324df) bg_icf_pane_ParamLimits

0xf48e,	// (0x000398e2) icf_edit_indi_pane_ParamLimits

0xf48e,	// (0x000398e2) icf_edit_indi_pane

0xf49d,	// (0x000398f1) list_vkb_icf_pane_ParamLimits

0x808b,	// (0x000324df) bg_icf_pane_cp01_ParamLimits

0xf4a9,	// (0x000398fd) icf_edit_indi_pane_cp01_ParamLimits

0xf4a9,	// (0x000398fd) icf_edit_indi_pane_cp01

0xf4b5,	// (0x00039909) vtchi_query_pane

0xc3ab,	// (0x000367ff) icf_edit_indi_pane_g1_ParamLimits

0xc3ab,	// (0x000367ff) icf_edit_indi_pane_g1

0xf4f0,	// (0x00039944) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00039944) icf_edit_indi_pane_g2

0x0001,

0x00bb,	// (0x0002a50f) icf_edit_indi_pane_g_ParamLimits

0x00bb,	// (0x0002a50f) icf_edit_indi_pane_g

0xf4fc,	// (0x00039950) icf_edit_indi_pane_t1

0xf50a,	// (0x0003995e) bg_input_focus_pane_cp042

0x7fba,	// (0x0003240e) vtchi_button_pane

0xf513,	// (0x00039967) vtchi_query_pane_t1

0xf521,	// (0x00039975) vtchi_query_pane_t2

0xf52f,	// (0x00039983) vtchi_query_pane_t3

0x0002,

0xfeca,	// (0x0003a31e) vtchi_query_pane_t

0x772b,	// (0x00031b7f) bg_button_pane_cp13

0xf53d,	// (0x00039991) vtchi_button_pane_g1

0xdafc,	// (0x00037f50) ituss_sks_pane_g1

0xf545,	// (0x00039999) ituss_sks_pane_g2

0x0001,

0xfed1,	// (0x0003a325) ituss_sks_pane_g

0xf54e,	// (0x000399a2) ituss_sks_pane_t1

0xf55c,	// (0x000399b0) ituss_sks_pane_t2

0x0001,

0xfed6,	// (0x0003a32a) ituss_sks_pane_t

0xbb7b,	// (0x00035fcf) indicator_nsta_pane_cp_g1

0xbb84,	// (0x00035fd8) indicator_nsta_pane_cp_g2

0xbb8c,	// (0x00035fe0) indicator_nsta_pane_cp_g3

0xbb94,	// (0x00035fe8) indicator_nsta_pane_cp_g4

0xbb9c,	// (0x00035ff0) indicator_nsta_pane_cp_g5

0xbba4,	// (0x00035ff8) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00039f09) indicator_nsta_pane_cp_g

0xe2b9,	// (0x0003870d) cell_graphic2_pane_t2_ParamLimits

0xe2b9,	// (0x0003870d) cell_graphic2_pane_t2

0x0001,

0xfdaf,	// (0x0003a203) cell_graphic2_pane_t_ParamLimits

0xfdaf,	// (0x0003a203) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

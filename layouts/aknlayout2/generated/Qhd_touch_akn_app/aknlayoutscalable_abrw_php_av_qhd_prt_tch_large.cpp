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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004a260 };

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
0x7e83,	// (0x000520e3) Screen

0x7e97,	// (0x000520f7) application_window_ParamLimits

0x7e97,	// (0x000520f7) application_window

0x7eb1,	// (0x00052111) screen_g1

0x4863,	// (0x0004eac3) area_bottom_pane_ParamLimits

0x4863,	// (0x0004eac3) area_bottom_pane

0x4923,	// (0x0004eb83) area_top_pane_ParamLimits

0x4923,	// (0x0004eb83) area_top_pane

0x49c1,	// (0x0004ec21) main_pane_ParamLimits

0x49c1,	// (0x0004ec21) main_pane

0x7ebb,	// (0x0005211b) misc_graphics

0x9886,	// (0x00053ae6) battery_pane_ParamLimits

0x9886,	// (0x00053ae6) battery_pane

0xa55a,	// (0x000547ba) bg_status_flat_pane_g8

0xa562,	// (0x000547c2) bg_status_flat_pane_g9

0x9954,	// (0x00053bb4) context_pane_ParamLimits

0x9954,	// (0x00053bb4) context_pane

0x9a6a,	// (0x00053cca) navi_pane_ParamLimits

0x9a6a,	// (0x00053cca) navi_pane

0x9aee,	// (0x00053d4e) signal_pane_ParamLimits

0x9aee,	// (0x00053d4e) signal_pane

0x0008,

0xf87e,	// (0x00059ade) bg_status_flat_pane_g

0x9b5b,	// (0x00053dbb) status_pane_g1_ParamLimits

0x9b5b,	// (0x00053dbb) status_pane_g1

0x9b6f,	// (0x00053dcf) status_pane_g2_ParamLimits

0x9b6f,	// (0x00053dcf) status_pane_g2

0x9b7b,	// (0x00053ddb) status_pane_g3_ParamLimits

0x9b7b,	// (0x00053ddb) status_pane_g3

0x0004,

0xf7a5,	// (0x00059a05) status_pane_g_ParamLimits

0xf7a5,	// (0x00059a05) status_pane_g

0x9baf,	// (0x00053e0f) title_pane_ParamLimits

0x9baf,	// (0x00053e0f) title_pane

0x9bec,	// (0x00053e4c) uni_indicator_pane_ParamLimits

0x9bec,	// (0x00053e4c) uni_indicator_pane

0x97a5,	// (0x00053a05) bg_list_pane_ParamLimits

0x97a5,	// (0x00053a05) bg_list_pane

0x7558,	// (0x000517b8) find_pane

0x97c5,	// (0x00053a25) listscroll_app_pane_ParamLimits

0x97c5,	// (0x00053a25) listscroll_app_pane

0x97d6,	// (0x00053a36) listscroll_form_pane

0x59f0,	// (0x0004fc50) listscroll_gen_pane_ParamLimits

0x59f0,	// (0x0004fc50) listscroll_gen_pane

0x5a04,	// (0x0004fc64) listscroll_set_pane

0x89eb,	// (0x00052c4b) main_idle_act_pane

0x94a1,	// (0x00053701) main_idle_trad_pane

0x94a1,	// (0x00053701) main_list_empty_pane

0x97f0,	// (0x00053a50) main_midp_pane

0x97fc,	// (0x00053a5c) main_pane_g1_ParamLimits

0x97fc,	// (0x00053a5c) main_pane_g1

0x5a1a,	// (0x0004fc7a) popup_ai_message_window_ParamLimits

0x5a1a,	// (0x0004fc7a) popup_ai_message_window

0x5ac8,	// (0x0004fd28) popup_fep_china_uni_window_ParamLimits

0x5ac8,	// (0x0004fd28) popup_fep_china_uni_window

0x5b24,	// (0x0004fd84) popup_fep_japan_candidate_window_ParamLimits

0x5b24,	// (0x0004fd84) popup_fep_japan_candidate_window

0x5b44,	// (0x0004fda4) popup_fep_japan_predictive_window_ParamLimits

0x5b44,	// (0x0004fda4) popup_fep_japan_predictive_window

0x5b74,	// (0x0004fdd4) popup_find_window

0x5b81,	// (0x0004fde1) popup_grid_graphic_window_ParamLimits

0x5b81,	// (0x0004fde1) popup_grid_graphic_window

0x5bab,	// (0x0004fe0b) popup_large_graphic_colour_window

0x5bd1,	// (0x0004fe31) popup_menu_window_ParamLimits

0x5bd1,	// (0x0004fe31) popup_menu_window

0x5d89,	// (0x0004ffe9) popup_note_image_window

0x5d75,	// (0x0004ffd5) popup_note_wait_window_ParamLimits

0x5d75,	// (0x0004ffd5) popup_note_wait_window

0x5d75,	// (0x0004ffd5) popup_note_window_ParamLimits

0x5d75,	// (0x0004ffd5) popup_note_window

0x5ddf,	// (0x0005003f) popup_query_code_window_ParamLimits

0x5ddf,	// (0x0005003f) popup_query_code_window

0x5df3,	// (0x00050053) popup_query_data_code_window_ParamLimits

0x5df3,	// (0x00050053) popup_query_data_code_window

0x5e10,	// (0x00050070) popup_query_data_window_ParamLimits

0x5e10,	// (0x00050070) popup_query_data_window

0x5e2c,	// (0x0005008c) popup_query_sat_info_window_ParamLimits

0x5e2c,	// (0x0005008c) popup_query_sat_info_window

0x5e65,	// (0x000500c5) popup_snote_single_graphic_window_ParamLimits

0x5e65,	// (0x000500c5) popup_snote_single_graphic_window

0x5e65,	// (0x000500c5) popup_snote_single_text_window_ParamLimits

0x5e65,	// (0x000500c5) popup_snote_single_text_window

0x5e7a,	// (0x000500da) popup_sub_window_general

0x5faa,	// (0x0005020a) popup_window_general_ParamLimits

0x5faa,	// (0x0005020a) popup_window_general

0x980a,	// (0x00053a6a) power_save_pane

0x5882,	// (0x0004fae2) control_pane_g1_ParamLimits

0x5882,	// (0x0004fae2) control_pane_g1

0x58a9,	// (0x0004fb09) control_pane_g2_ParamLimits

0x58a9,	// (0x0004fb09) control_pane_g2

0x9768,	// (0x000539c8) control_pane_g3_ParamLimits

0x9768,	// (0x000539c8) control_pane_g3

0x0007,

0xf78d,	// (0x000599ed) control_pane_g_ParamLimits

0xf78d,	// (0x000599ed) control_pane_g

0x58f3,	// (0x0004fb53) control_pane_t1_ParamLimits

0x58f3,	// (0x0004fb53) control_pane_t1

0x5947,	// (0x0004fba7) control_pane_t2_ParamLimits

0x5947,	// (0x0004fba7) control_pane_t2

0x0002,

0xf79e,	// (0x000599fe) control_pane_t_ParamLimits

0xf79e,	// (0x000599fe) control_pane_t

0x968d,	// (0x000538ed) navi_navi_volume_pane_cp1

0x9695,	// (0x000538f5) status_small_icon_pane

0x969d,	// (0x000538fd) status_small_pane_g1_ParamLimits

0x969d,	// (0x000538fd) status_small_pane_g1

0x96d1,	// (0x00053931) status_small_pane_g2_ParamLimits

0x96d1,	// (0x00053931) status_small_pane_g2

0x96dd,	// (0x0005393d) status_small_pane_g3_ParamLimits

0x96dd,	// (0x0005393d) status_small_pane_g3

0x96e9,	// (0x00053949) status_small_pane_g4_ParamLimits

0x96e9,	// (0x00053949) status_small_pane_g4

0x96f5,	// (0x00053955) status_small_pane_g5_ParamLimits

0x96f5,	// (0x00053955) status_small_pane_g5

0x9703,	// (0x00053963) status_small_pane_g6_ParamLimits

0x9703,	// (0x00053963) status_small_pane_g6

0x0007,

0xf77c,	// (0x000599dc) status_small_pane_g_ParamLimits

0xf77c,	// (0x000599dc) status_small_pane_g

0x9732,	// (0x00053992) status_small_pane_t1

0x9754,	// (0x000539b4) status_small_wait_pane_ParamLimits

0x9754,	// (0x000539b4) status_small_wait_pane

0x8f13,	// (0x00053173) aid_levels_signal_ParamLimits

0x8f13,	// (0x00053173) aid_levels_signal

0x8f25,	// (0x00053185) signal_pane_g1_ParamLimits

0x8f25,	// (0x00053185) signal_pane_g1

0x8f3a,	// (0x0005319a) signal_pane_g2_ParamLimits

0x8f3a,	// (0x0005319a) signal_pane_g2

0x0003,

0xf70d,	// (0x0005996d) signal_pane_g_ParamLimits

0xf70d,	// (0x0005996d) signal_pane_g

0x8f75,	// (0x000531d5) context_pane_g1

0x7ec5,	// (0x00052125) title_pane_g1

0x7efb,	// (0x0005215b) title_pane_t1

0x7f63,	// (0x000521c3) title_pane_t2

0x7f89,	// (0x000521e9) title_pane_t3

0x0002,

0xf557,	// (0x000597b7) title_pane_t

0x9c04,	// (0x00053e64) aid_levels_battery_ParamLimits

0x9c04,	// (0x00053e64) aid_levels_battery

0x9c18,	// (0x00053e78) battery_pane_g1_ParamLimits

0x9c18,	// (0x00053e78) battery_pane_g1

0x9c2e,	// (0x00053e8e) battery_pane_g2_ParamLimits

0x9c2e,	// (0x00053e8e) battery_pane_g2

0x0001,

0xf7b0,	// (0x00059a10) battery_pane_g_ParamLimits

0xf7b0,	// (0x00059a10) battery_pane_g

0xae90,	// (0x000550f0) uni_indicator_pane_g1

0xaea6,	// (0x00055106) uni_indicator_pane_g2

0xaebc,	// (0x0005511c) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00059b86) uni_indicator_pane_g

0x9313,	// (0x00053573) navi_icon_pane_ParamLimits

0x9313,	// (0x00053573) navi_icon_pane

0x9251,	// (0x000534b1) navi_midp_pane

0x932f,	// (0x0005358f) navi_navi_pane

0x9339,	// (0x00053599) navi_text_pane_ParamLimits

0x9339,	// (0x00053599) navi_text_pane

0x7eb1,	// (0x00052111) status_small_wait_pane_g1

0x83b8,	// (0x00052618) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00059b81) status_small_wait_pane_g

0xabb5,	// (0x00054e15) navi_navi_icon_text_pane

0xabbd,	// (0x00054e1d) navi_navi_pane_g1_ParamLimits

0xabbd,	// (0x00054e1d) navi_navi_pane_g1

0xabcf,	// (0x00054e2f) navi_navi_pane_g2_ParamLimits

0xabcf,	// (0x00054e2f) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00059b4f) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00059b4f) navi_navi_pane_g

0xabe1,	// (0x00054e41) navi_navi_tabs_pane

0xabea,	// (0x00054e4a) navi_navi_text_pane

0xabb5,	// (0x00054e15) navi_navi_volume_pane

0xab91,	// (0x00054df1) navi_text_pane_t1

0xab85,	// (0x00054de5) navi_icon_pane_g1

0xaad8,	// (0x00054d38) navi_navi_text_pane_t1

0x62d0,	// (0x00050530) navi_navi_volume_pane_g1

0x62d8,	// (0x00050538) volume_small_pane

0xaa3e,	// (0x00054c9e) navi_navi_icon_text_pane_g1

0xaa46,	// (0x00054ca6) navi_navi_icon_text_pane_t1

0x932f,	// (0x0005358f) navi_tabs_2_long_pane

0x932f,	// (0x0005358f) navi_tabs_2_pane

0x932f,	// (0x0005358f) navi_tabs_3_long_pane

0x932f,	// (0x0005358f) navi_tabs_3_pane

0x932f,	// (0x0005358f) navi_tabs_4_pane

0x62b0,	// (0x00050510) tabs_2_active_pane_ParamLimits

0x62b0,	// (0x00050510) tabs_2_active_pane

0x62c0,	// (0x00050520) tabs_2_passive_pane_ParamLimits

0x62c0,	// (0x00050520) tabs_2_passive_pane

0x627e,	// (0x000504de) tabs_3_active_pane_ParamLimits

0x627e,	// (0x000504de) tabs_3_active_pane

0x628e,	// (0x000504ee) tabs_3_passive_pane_ParamLimits

0x628e,	// (0x000504ee) tabs_3_passive_pane

0x629f,	// (0x000504ff) tabs_3_passive_pane_cp_ParamLimits

0x629f,	// (0x000504ff) tabs_3_passive_pane_cp

0x623a,	// (0x0005049a) tabs_4_active_pane_ParamLimits

0x623a,	// (0x0005049a) tabs_4_active_pane

0x624b,	// (0x000504ab) tabs_4_passive_pane_ParamLimits

0x624b,	// (0x000504ab) tabs_4_passive_pane

0x625c,	// (0x000504bc) tabs_4_passive_pane_cp_ParamLimits

0x625c,	// (0x000504bc) tabs_4_passive_pane_cp

0x626d,	// (0x000504cd) tabs_4_passive_pane_cp2_ParamLimits

0x626d,	// (0x000504cd) tabs_4_passive_pane_cp2

0x6216,	// (0x00050476) tabs_2_long_active_pane_ParamLimits

0x6216,	// (0x00050476) tabs_2_long_active_pane

0x6228,	// (0x00050488) tabs_2_long_passive_pane_ParamLimits

0x6228,	// (0x00050488) tabs_2_long_passive_pane

0x61d7,	// (0x00050437) tabs_3_long_active_pane_ParamLimits

0x61d7,	// (0x00050437) tabs_3_long_active_pane

0x61ea,	// (0x0005044a) tabs_3_long_passive_pane_ParamLimits

0x61ea,	// (0x0005044a) tabs_3_long_passive_pane

0x6203,	// (0x00050463) tabs_3_long_passive_pane_cp_ParamLimits

0x6203,	// (0x00050463) tabs_3_long_passive_pane_cp

0x617d,	// (0x000503dd) volume_small_pane_g1

0x6186,	// (0x000503e6) volume_small_pane_g2

0x618f,	// (0x000503ef) volume_small_pane_g3

0x6198,	// (0x000503f8) volume_small_pane_g4

0x61a1,	// (0x00050401) volume_small_pane_g5

0x61aa,	// (0x0005040a) volume_small_pane_g6

0x61b3,	// (0x00050413) volume_small_pane_g7

0x61bc,	// (0x0005041c) volume_small_pane_g8

0x61c5,	// (0x00050425) volume_small_pane_g9

0x61ce,	// (0x0005042e) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00059b1b) volume_small_pane_g

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp2_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp2

0x7fa9,	// (0x00052209) tabs_3_active_pane_g1

0x7fb1,	// (0x00052211) tabs_3_active_pane_t1

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp2_ParamLimits

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp2

0x7fa9,	// (0x00052209) tabs_3_passive_pane_g1

0x7fb1,	// (0x00052211) tabs_3_passive_pane_t1

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp3_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp3

0x7fc3,	// (0x00052223) tabs_4_active_pane_g1

0x7fcb,	// (0x0005222b) tabs_4_active_pane_t1

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp3_ParamLimits

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp3

0x7fc3,	// (0x00052223) tabs_4_1_passive_pane_g1

0x7fcb,	// (0x0005222b) tabs_4_1_passive_pane_t1

0x97f0,	// (0x00053a50) list_highlight_pane_cp2

0xb103,	// (0x00055363) list_set_pane_ParamLimits

0xb103,	// (0x00055363) list_set_pane

0xb1a9,	// (0x00055409) main_pane_set_t1_ParamLimits

0xb1a9,	// (0x00055409) main_pane_set_t1

0xb1c9,	// (0x00055429) main_pane_set_t2_ParamLimits

0xb1c9,	// (0x00055429) main_pane_set_t2

0xb1dd,	// (0x0005543d) main_pane_set_t3_ParamLimits

0xb1dd,	// (0x0005543d) main_pane_set_t3

0xb1ef,	// (0x0005544f) main_pane_set_t4_ParamLimits

0xb1ef,	// (0x0005544f) main_pane_set_t4

0x0003,

0xf98b,	// (0x00059beb) main_pane_set_t_ParamLimits

0xf98b,	// (0x00059beb) main_pane_set_t

0xb201,	// (0x00055461) setting_code_pane

0xb20d,	// (0x0005546d) setting_slider_graphic_pane

0xb20d,	// (0x0005546d) setting_slider_pane

0xb20d,	// (0x0005546d) setting_text_pane

0xb20d,	// (0x0005546d) setting_volume_pane

0x4c10,	// (0x0004ee70) volume_set_pane

0x7f9b,	// (0x000521fb) bg_set_opt_pane_cp

0x4c18,	// (0x0004ee78) setting_slider_pane_t1

0x4c31,	// (0x0004ee91) setting_slider_pane_t2

0x4c4b,	// (0x0004eeab) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000597be) setting_slider_pane_t

0x4c63,	// (0x0004eec3) slider_set_pane

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp2

0x7fdd,	// (0x0005223d) setting_slider_graphic_pane_g1

0x4c79,	// (0x0004eed9) setting_slider_graphic_pane_t1

0x4c89,	// (0x0004eee9) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000597c5) setting_slider_graphic_pane_t

0x4c99,	// (0x0004eef9) slider_set_pane_cp

0x7ebb,	// (0x0005211b) input_focus_pane_cp1

0xb0c2,	// (0x00055322) list_set_text_pane

0x7eb1,	// (0x00052111) setting_text_pane_g1

0x7ebb,	// (0x0005211b) input_focus_pane_cp2

0x7eb1,	// (0x00052111) setting_code_pane_g1

0x7fe6,	// (0x00052246) setting_code_pane_t1

0x4ca1,	// (0x0004ef01) set_text_pane_t1_ParamLimits

0x4ca1,	// (0x0004ef01) set_text_pane_t1

0x8862,	// (0x00052ac2) set_opt_bg_pane_g1

0x886a,	// (0x00052aca) set_opt_bg_pane_g2

0xb09c,	// (0x000552fc) set_opt_bg_pane_g3

0x887a,	// (0x00052ada) set_opt_bg_pane_g4

0x8882,	// (0x00052ae2) set_opt_bg_pane_g5

0x888a,	// (0x00052aea) set_opt_bg_pane_g6

0xb0a6,	// (0x00055306) set_opt_bg_pane_g7

0xb0ae,	// (0x0005530e) set_opt_bg_pane_g8

0xb0b8,	// (0x00055318) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00059bd8) set_opt_bg_pane_g

0xb08f,	// (0x000552ef) slider_set_pane_g1

0x6345,	// (0x000505a5) slider_set_pane_g2

0x0006,

0xf969,	// (0x00059bc9) slider_set_pane_g

0x62e1,	// (0x00050541) volume_set_pane_g1

0x62e9,	// (0x00050549) volume_set_pane_g2

0x62f1,	// (0x00050551) volume_set_pane_g3

0x62f9,	// (0x00050559) volume_set_pane_g4

0x6301,	// (0x00050561) volume_set_pane_g5

0x6309,	// (0x00050569) volume_set_pane_g6

0x6311,	// (0x00050571) volume_set_pane_g7

0x6319,	// (0x00050579) volume_set_pane_g8

0x6321,	// (0x00050581) volume_set_pane_g9

0x6329,	// (0x00050589) volume_set_pane_g10

0x0009,

0xf941,	// (0x00059ba1) volume_set_pane_g

0x7ff4,	// (0x00052254) indicator_pane_ParamLimits

0x7ff4,	// (0x00052254) indicator_pane

0x8000,	// (0x00052260) main_idle_pane_g2_ParamLimits

0x8000,	// (0x00052260) main_idle_pane_g2

0x8028,	// (0x00052288) main_pane_idle_g1_ParamLimits

0x8028,	// (0x00052288) main_pane_idle_g1

0x8035,	// (0x00052295) popup_clock_digital_analogue_window_ParamLimits

0x8035,	// (0x00052295) popup_clock_digital_analogue_window

0x804c,	// (0x000522ac) soft_indicator_pane_ParamLimits

0x804c,	// (0x000522ac) soft_indicator_pane

0x8058,	// (0x000522b8) wallpaper_pane_ParamLimits

0x8058,	// (0x000522b8) wallpaper_pane

0x7eb1,	// (0x00052111) wallpaper_pane_g1

0x806c,	// (0x000522cc) indicator_pane_g1_ParamLimits

0x806c,	// (0x000522cc) indicator_pane_g1

0xb471,	// (0x000556d1) navi_navi_icon_text_pane_srt_g1

0x8087,	// (0x000522e7) soft_indicator_pane_t1

0x80a1,	// (0x00052301) aid_ps_area_pane

0x80b2,	// (0x00052312) aid_ps_clock_pane

0x80c0,	// (0x00052320) aid_ps_indicator_pane

0x80cc,	// (0x0005232c) indicator_ps_pane_ParamLimits

0x80cc,	// (0x0005232c) indicator_ps_pane

0x80db,	// (0x0005233b) power_save_pane_g1_ParamLimits

0x80db,	// (0x0005233b) power_save_pane_g1

0x80e7,	// (0x00052347) power_save_pane_g2_ParamLimits

0x80e7,	// (0x00052347) power_save_pane_g2

0x4817,	// (0x0004ea77) aid_navinavi_width_pane

0x80a1,	// (0x00052301) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000597ca) power_save_pane_g_ParamLimits

0xf56a,	// (0x000597ca) power_save_pane_g

0x80f5,	// (0x00052355) power_save_pane_t1_ParamLimits

0x80f5,	// (0x00052355) power_save_pane_t1

0x80b2,	// (0x00052312) aid_ps_clock_pane_ParamLimits

0x80c0,	// (0x00052320) aid_ps_indicator_pane_ParamLimits

0x8107,	// (0x00052367) power_save_pane_t4_ParamLimits

0x8107,	// (0x00052367) power_save_pane_t4

0x0001,

0xf56f,	// (0x000597cf) power_save_pane_t_ParamLimits

0xf56f,	// (0x000597cf) power_save_pane_t

0x8131,	// (0x00052391) power_save_t3_ParamLimits

0x8131,	// (0x00052391) power_save_t3

0x811c,	// (0x0005237c) power_save_t2_ParamLimits

0x811c,	// (0x0005237c) power_save_t2

0x8146,	// (0x000523a6) indicator_ps_pane_g1

0x814f,	// (0x000523af) ai_gene_pane_ParamLimits

0x814f,	// (0x000523af) ai_gene_pane

0x815b,	// (0x000523bb) ai_links_pane_ParamLimits

0x815b,	// (0x000523bb) ai_links_pane

0x8167,	// (0x000523c7) indicator_pane_cp1_ParamLimits

0x8167,	// (0x000523c7) indicator_pane_cp1

0x8173,	// (0x000523d3) main_pane_idle_g1_cp_ParamLimits

0x8173,	// (0x000523d3) main_pane_idle_g1_cp

0x817f,	// (0x000523df) popup_ai_links_title_window

0x8188,	// (0x000523e8) soft_indicator_pane_cp1_ParamLimits

0x8188,	// (0x000523e8) soft_indicator_pane_cp1

0xae7e,	// (0x000550de) ai_links_pane_g1

0xae87,	// (0x000550e7) grid_ai_links_pane

0xae61,	// (0x000550c1) ai_gene_pane_1

0xae6c,	// (0x000550cc) ai_gene_pane_2

0xae75,	// (0x000550d5) list_highlight_pane_cp4

0xae45,	// (0x000550a5) cell_ai_link_pane_ParamLimits

0xae45,	// (0x000550a5) cell_ai_link_pane

0xae3d,	// (0x0005509d) cell_ai_link_pane_g1

0x83b8,	// (0x00052618) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00059b7c) cell_ai_link_pane_g

0x7ebb,	// (0x0005211b) grid_highlight_cp2

0x7ebb,	// (0x0005211b) bg_popup_sub_pane_cp1

0x81a2,	// (0x00052402) popup_ai_links_title_window_t1

0xad8b,	// (0x00054feb) ai_gene_pane_1_g1_ParamLimits

0xad8b,	// (0x00054feb) ai_gene_pane_1_g1

0xad97,	// (0x00054ff7) ai_gene_pane_1_g2_ParamLimits

0xad97,	// (0x00054ff7) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00059b72) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00059b72) ai_gene_pane_1_g

0xada4,	// (0x00055004) ai_gene_pane_1_t1_ParamLimits

0xada4,	// (0x00055004) ai_gene_pane_1_t1

0xadd8,	// (0x00055038) grid_ai_soft_ind_pane

0xad76,	// (0x00054fd6) ai_gene_pane_2_t1_ParamLimits

0xad76,	// (0x00054fd6) ai_gene_pane_2_t1

0x81b1,	// (0x00052411) main_pane_empty_t1_ParamLimits

0x81b1,	// (0x00052411) main_pane_empty_t1

0x81c9,	// (0x00052429) main_pane_empty_t2_ParamLimits

0x81c9,	// (0x00052429) main_pane_empty_t2

0x81de,	// (0x0005243e) main_pane_empty_t3_ParamLimits

0x81de,	// (0x0005243e) main_pane_empty_t3

0x81f0,	// (0x00052450) main_pane_empty_t4_ParamLimits

0x81f0,	// (0x00052450) main_pane_empty_t4

0x8202,	// (0x00052462) main_pane_empty_t5_ParamLimits

0x8202,	// (0x00052462) main_pane_empty_t5

0x0004,

0xf574,	// (0x000597d4) main_pane_empty_t_ParamLimits

0xf574,	// (0x000597d4) main_pane_empty_t

0x88b3,	// (0x00052b13) bg_popup_window_pane_ParamLimits

0x88b3,	// (0x00052b13) bg_popup_window_pane

0xaae6,	// (0x00054d46) find_popup_pane_cp2_ParamLimits

0xaae6,	// (0x00054d46) find_popup_pane_cp2

0xaaf2,	// (0x00054d52) heading_pane_ParamLimits

0xaaf2,	// (0x00054d52) heading_pane

0x7ebb,	// (0x0005211b) bg_popup_sub_pane

0xaa60,	// (0x00054cc0) bg_popup_window_pane_g1_ParamLimits

0xaa60,	// (0x00054cc0) bg_popup_window_pane_g1

0xaa6c,	// (0x00054ccc) bg_popup_window_pane_g2_ParamLimits

0xaa6c,	// (0x00054ccc) bg_popup_window_pane_g2

0xaa78,	// (0x00054cd8) bg_popup_window_pane_g3_ParamLimits

0xaa78,	// (0x00054cd8) bg_popup_window_pane_g3

0xaa84,	// (0x00054ce4) bg_popup_window_pane_g4_ParamLimits

0xaa84,	// (0x00054ce4) bg_popup_window_pane_g4

0xaa90,	// (0x00054cf0) bg_popup_window_pane_g5_ParamLimits

0xaa90,	// (0x00054cf0) bg_popup_window_pane_g5

0xaa9c,	// (0x00054cfc) bg_popup_window_pane_g6_ParamLimits

0xaa9c,	// (0x00054cfc) bg_popup_window_pane_g6

0xaaa8,	// (0x00054d08) bg_popup_window_pane_g7_ParamLimits

0xaaa8,	// (0x00054d08) bg_popup_window_pane_g7

0xaab4,	// (0x00054d14) bg_popup_window_pane_g8_ParamLimits

0xaab4,	// (0x00054d14) bg_popup_window_pane_g8

0xaac0,	// (0x00054d20) bg_popup_window_pane_g9_ParamLimits

0xaac0,	// (0x00054d20) bg_popup_window_pane_g9

0xaacc,	// (0x00054d2c) bg_popup_window_pane_g10_ParamLimits

0xaacc,	// (0x00054d2c) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00059b3a) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00059b3a) bg_popup_window_pane_g

0xa9f5,	// (0x00054c55) bg_popup_heading_pane_ParamLimits

0xa9f5,	// (0x00054c55) bg_popup_heading_pane

0x63cd,	// (0x0005062d) tabs_4_passive_pane_cp_srt_ParamLimits

0x63cd,	// (0x0005062d) tabs_4_passive_pane_cp_srt

0x63df,	// (0x0005063f) tabs_4_passive_pane_srt_ParamLimits

0xaa09,	// (0x00054c69) heading_pane_g2

0x63df,	// (0x0005063f) tabs_4_passive_pane_srt

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp3_srt

0xaa11,	// (0x00054c71) heading_pane_t1_ParamLimits

0xaa11,	// (0x00054c71) heading_pane_t1

0xaa28,	// (0x00054c88) heading_pane_t2_ParamLimits

0xaa28,	// (0x00054c88) heading_pane_t2

0x0001,

0xf8d5,	// (0x00059b35) heading_pane_t_ParamLimits

0xf8d5,	// (0x00059b35) heading_pane_t

0xa522,	// (0x00054782) bg_popup_heading_pane_g1

0xa5d1,	// (0x00054831) bg_popup_heading_pane_g2

0xa5db,	// (0x0005483b) bg_popup_heading_pane_g3

0xa5e5,	// (0x00054845) bg_popup_heading_pane_g4

0xa5ef,	// (0x0005484f) bg_popup_heading_pane_g5

0xa5f9,	// (0x00054859) bg_popup_heading_pane_g6

0xa601,	// (0x00054861) bg_popup_heading_pane_g7

0xa609,	// (0x00054869) bg_popup_heading_pane_g8

0xa613,	// (0x00054873) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00059af1) bg_popup_heading_pane_g

0x9d06,	// (0x00053f66) bg_popup_sub_pane_g1

0x9d16,	// (0x00053f76) bg_popup_sub_pane_g2

0x9d0e,	// (0x00053f6e) bg_popup_sub_pane_g3

0x9d26,	// (0x00053f86) bg_popup_sub_pane_g4

0x9d1e,	// (0x00053f7e) bg_popup_sub_pane_g5

0x9d2e,	// (0x00053f8e) bg_popup_sub_pane_g6

0x9d36,	// (0x00053f96) bg_popup_sub_pane_g7

0x9d46,	// (0x00053fa6) bg_popup_sub_pane_g8

0x9d3e,	// (0x00053f9e) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00059acb) bg_popup_sub_pane_g

0x8216,	// (0x00052476) bg_popup_window_pane_cp5_ParamLimits

0x8216,	// (0x00052476) bg_popup_window_pane_cp5

0x8232,	// (0x00052492) popup_note_window_g1_ParamLimits

0x8232,	// (0x00052492) popup_note_window_g1

0x823e,	// (0x0005249e) popup_note_window_t1_ParamLimits

0x823e,	// (0x0005249e) popup_note_window_t1

0x8254,	// (0x000524b4) popup_note_window_t2_ParamLimits

0x8254,	// (0x000524b4) popup_note_window_t2

0x826a,	// (0x000524ca) popup_note_window_t3_ParamLimits

0x826a,	// (0x000524ca) popup_note_window_t3

0x8280,	// (0x000524e0) popup_note_window_t4_ParamLimits

0x8280,	// (0x000524e0) popup_note_window_t4

0x82a8,	// (0x00052508) popup_note_window_t5_ParamLimits

0x82a8,	// (0x00052508) popup_note_window_t5

0x0004,

0xf57f,	// (0x000597df) popup_note_window_t_ParamLimits

0xf57f,	// (0x000597df) popup_note_window_t

0x82cc,	// (0x0005252c) bg_popup_window_pane_cp6_ParamLimits

0x82cc,	// (0x0005252c) bg_popup_window_pane_cp6

0xa49e,	// (0x000546fe) popup_note_image_window_g1_ParamLimits

0xa49e,	// (0x000546fe) popup_note_image_window_g1

0xa4aa,	// (0x0005470a) popup_note_image_window_g2_ParamLimits

0xa4aa,	// (0x0005470a) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00059abf) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00059abf) popup_note_image_window_g

0xa4c3,	// (0x00054723) popup_note_image_window_t1_ParamLimits

0xa4c3,	// (0x00054723) popup_note_image_window_t1

0xa4dc,	// (0x0005473c) popup_note_image_window_t2_ParamLimits

0xa4dc,	// (0x0005473c) popup_note_image_window_t2

0xa4f5,	// (0x00054755) popup_note_image_window_t3_ParamLimits

0xa4f5,	// (0x00054755) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00059ac4) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00059ac4) popup_note_image_window_t

0xa35f,	// (0x000545bf) bg_popup_window_pane_cp7_ParamLimits

0xa35f,	// (0x000545bf) bg_popup_window_pane_cp7

0xa38f,	// (0x000545ef) popup_note_wait_window_g1_ParamLimits

0xa38f,	// (0x000545ef) popup_note_wait_window_g1

0xa39b,	// (0x000545fb) popup_note_wait_window_g2_ParamLimits

0xa39b,	// (0x000545fb) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00059aad) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00059aad) popup_note_wait_window_g

0xa3b3,	// (0x00054613) popup_note_wait_window_t1_ParamLimits

0xa3b3,	// (0x00054613) popup_note_wait_window_t1

0xa3da,	// (0x0005463a) popup_note_wait_window_t2_ParamLimits

0xa3da,	// (0x0005463a) popup_note_wait_window_t2

0xa3f7,	// (0x00054657) popup_note_wait_window_t3_ParamLimits

0xa3f7,	// (0x00054657) popup_note_wait_window_t3

0xa40a,	// (0x0005466a) popup_note_wait_window_t4_ParamLimits

0xa40a,	// (0x0005466a) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00059ab4) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00059ab4) popup_note_wait_window_t

0xa42f,	// (0x0005468f) wait_bar_pane_ParamLimits

0xa42f,	// (0x0005468f) wait_bar_pane

0x7ebb,	// (0x0005211b) wait_anim_pane

0x7ebb,	// (0x0005211b) wait_border_pane

0x7eb1,	// (0x00052111) wait_anim_pane_g1

0x7eb1,	// (0x00052111) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00059968) wait_anim_pane_g

0xa303,	// (0x00054563) wait_border_pane_g1

0xa30e,	// (0x0005456e) wait_border_pane_g2

0xa317,	// (0x00054577) wait_border_pane_g3

0x0002,

0xf846,	// (0x00059aa6) wait_border_pane_g

0xa16e,	// (0x000543ce) bg_popup_window_pane_cp16_ParamLimits

0xa16e,	// (0x000543ce) bg_popup_window_pane_cp16

0xa26e,	// (0x000544ce) indicator_popup_pane_cp4_ParamLimits

0xa26e,	// (0x000544ce) indicator_popup_pane_cp4

0xa282,	// (0x000544e2) popup_query_data_window_t1_ParamLimits

0xa282,	// (0x000544e2) popup_query_data_window_t1

0xa294,	// (0x000544f4) popup_query_data_window_t2_ParamLimits

0xa294,	// (0x000544f4) popup_query_data_window_t2

0xa2ad,	// (0x0005450d) popup_query_data_window_t3_ParamLimits

0xa2ad,	// (0x0005450d) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00059a9f) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00059a9f) popup_query_data_window_t

0xa2c7,	// (0x00054527) query_popup_data_pane_ParamLimits

0xa2c7,	// (0x00054527) query_popup_data_pane

0xa2db,	// (0x0005453b) query_popup_data_pane_cp1_ParamLimits

0xa2db,	// (0x0005453b) query_popup_data_pane_cp1

0xa16e,	// (0x000543ce) bg_popup_window_pane_cp10_ParamLimits

0xa16e,	// (0x000543ce) bg_popup_window_pane_cp10

0xa1a0,	// (0x00054400) indicator_popup_pane_ParamLimits

0xa1a0,	// (0x00054400) indicator_popup_pane

0xa1c2,	// (0x00054422) popup_query_code_window_t1_ParamLimits

0xa1c2,	// (0x00054422) popup_query_code_window_t1

0xa1dc,	// (0x0005443c) popup_query_code_window_t2_ParamLimits

0xa1dc,	// (0x0005443c) popup_query_code_window_t2

0xa225,	// (0x00054485) popup_query_code_window_t3_ParamLimits

0xa225,	// (0x00054485) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00059a98) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00059a98) popup_query_code_window_t

0xa254,	// (0x000544b4) query_popup_pane_ParamLimits

0xa254,	// (0x000544b4) query_popup_pane

0x82cc,	// (0x0005252c) bg_popup_window_pane_cp15_ParamLimits

0x82cc,	// (0x0005252c) bg_popup_window_pane_cp15

0x82ea,	// (0x0005254a) indicator_popup_pane_cp1_ParamLimits

0x82ea,	// (0x0005254a) indicator_popup_pane_cp1

0x82fd,	// (0x0005255d) indicator_popup_pane_cp2_ParamLimits

0x82fd,	// (0x0005255d) indicator_popup_pane_cp2

0x8310,	// (0x00052570) popup_query_data_code_window_g1_ParamLimits

0x8310,	// (0x00052570) popup_query_data_code_window_g1

0x8323,	// (0x00052583) popup_query_data_code_window_t1_ParamLimits

0x8323,	// (0x00052583) popup_query_data_code_window_t1

0x8335,	// (0x00052595) popup_query_data_code_window_t2_ParamLimits

0x8335,	// (0x00052595) popup_query_data_code_window_t2

0x8347,	// (0x000525a7) popup_query_data_code_window_t3_ParamLimits

0x8347,	// (0x000525a7) popup_query_data_code_window_t3

0x835d,	// (0x000525bd) popup_query_data_code_window_t4_ParamLimits

0x835d,	// (0x000525bd) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000597ea) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000597ea) popup_query_data_code_window_t

0x6036,	// (0x00050296) list_single_midp_graphic_pane_g3

0x8375,	// (0x000525d5) query_popup_data_pane_cp2_ParamLimits

0x8388,	// (0x000525e8) query_popup_pane_cp2_ParamLimits

0x8388,	// (0x000525e8) query_popup_pane_cp2

0x7ebb,	// (0x0005211b) bg_popup_window_pane_cp11

0xa166,	// (0x000543c6) heading_pane_cp5

0x8473,	// (0x000526d3) listscroll_popup_info_pane

0x7ebb,	// (0x0005211b) input_focus_pane_cp3

0x839b,	// (0x000525fb) query_popup_pane_t1

0x83a9,	// (0x00052609) list_popup_info_pane_ParamLimits

0x83a9,	// (0x00052609) list_popup_info_pane

0x83b8,	// (0x00052618) listscroll_popup_info_pane_g1

0x83c0,	// (0x00052620) scroll_pane_cp7

0x83ca,	// (0x0005262a) popup_info_list_pane_t1_ParamLimits

0x83ca,	// (0x0005262a) popup_info_list_pane_t1

0x83e4,	// (0x00052644) popup_info_list_pane_t2_ParamLimits

0x83e4,	// (0x00052644) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000597f3) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000597f3) popup_info_list_pane_t

0x7ebb,	// (0x0005211b) bg_popup_window_pane_cp12

0xb48b,	// (0x000556eb) find_popup_pane

0x7f9b,	// (0x000521fb) bg_popup_window_pane_cp3

0x83fe,	// (0x0005265e) heading_pane_cp3

0x840a,	// (0x0005266a) listscroll_popup_graphic_pane

0x7ebb,	// (0x0005211b) bg_popup_window_pane_cp4

0x8469,	// (0x000526c9) heading_pane_cp4

0x8473,	// (0x000526d3) listscroll_popup_colour_pane

0x847b,	// (0x000526db) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x847b,	// (0x000526db) cell_large_graphic_colour_none_popup_pane

0x848f,	// (0x000526ef) grid_large_graphic_colour_popup_pane_ParamLimits

0x848f,	// (0x000526ef) grid_large_graphic_colour_popup_pane

0x84bb,	// (0x0005271b) listscroll_popup_colour_pane_g1_ParamLimits

0x84bb,	// (0x0005271b) listscroll_popup_colour_pane_g1

0x84d2,	// (0x00052732) listscroll_popup_colour_pane_g2_ParamLimits

0x84d2,	// (0x00052732) listscroll_popup_colour_pane_g2

0x84e9,	// (0x00052749) listscroll_popup_colour_pane_g3_ParamLimits

0x84e9,	// (0x00052749) listscroll_popup_colour_pane_g3

0x84f9,	// (0x00052759) listscroll_popup_colour_pane_g4_ParamLimits

0x84f9,	// (0x00052759) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000597f8) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000597f8) listscroll_popup_colour_pane_g

0x850d,	// (0x0005276d) scroll_pane_cp6_ParamLimits

0x850d,	// (0x0005276d) scroll_pane_cp6

0x851f,	// (0x0005277f) cell_large_graphic_colour_popup_pane_ParamLimits

0x851f,	// (0x0005277f) cell_large_graphic_colour_popup_pane

0x853e,	// (0x0005279e) cell_large_graphic_colour_none_popup_pane_t1

0x7ebb,	// (0x0005211b) grid_highlight_pane_cp5

0x854d,	// (0x000527ad) cell_large_graphic_colour_popup_pane_g1

0x8555,	// (0x000527b5) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00059801) cell_large_graphic_colour_popup_pane_g

0x855d,	// (0x000527bd) cell_large_graphic_colour_popup_pane_g2_copy1

0x8566,	// (0x000527c6) grid_highlight_pane_cp4

0x856e,	// (0x000527ce) bg_popup_window_pane_cp8_ParamLimits

0x856e,	// (0x000527ce) bg_popup_window_pane_cp8

0x8589,	// (0x000527e9) popup_snote_single_text_window_g1_ParamLimits

0x8589,	// (0x000527e9) popup_snote_single_text_window_g1

0x859b,	// (0x000527fb) popup_snote_single_text_window_t1_ParamLimits

0x859b,	// (0x000527fb) popup_snote_single_text_window_t1

0x85ae,	// (0x0005280e) popup_snote_single_text_window_t2_ParamLimits

0x85ae,	// (0x0005280e) popup_snote_single_text_window_t2

0x85c1,	// (0x00052821) popup_snote_single_text_window_t3_ParamLimits

0x85c1,	// (0x00052821) popup_snote_single_text_window_t3

0x85fa,	// (0x0005285a) popup_snote_single_text_window_t4_ParamLimits

0x85fa,	// (0x0005285a) popup_snote_single_text_window_t4

0x862e,	// (0x0005288e) popup_snote_single_text_window_t5_ParamLimits

0x862e,	// (0x0005288e) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00059806) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00059806) popup_snote_single_text_window_t

0x865d,	// (0x000528bd) bg_popup_window_pane_cp9_ParamLimits

0x865d,	// (0x000528bd) bg_popup_window_pane_cp9

0x8589,	// (0x000527e9) popup_snote_single_graphic_window_g1_ParamLimits

0x8589,	// (0x000527e9) popup_snote_single_graphic_window_g1

0x866b,	// (0x000528cb) popup_snote_single_graphic_window_g2_ParamLimits

0x866b,	// (0x000528cb) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00059811) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00059811) popup_snote_single_graphic_window_g

0x8677,	// (0x000528d7) popup_snote_single_graphic_window_t1_ParamLimits

0x8677,	// (0x000528d7) popup_snote_single_graphic_window_t1

0x868a,	// (0x000528ea) popup_snote_single_graphic_window_t2_ParamLimits

0x868a,	// (0x000528ea) popup_snote_single_graphic_window_t2

0x869d,	// (0x000528fd) popup_snote_single_graphic_window_t3_ParamLimits

0x869d,	// (0x000528fd) popup_snote_single_graphic_window_t3

0x86d6,	// (0x00052936) popup_snote_single_graphic_window_t4_ParamLimits

0x86d6,	// (0x00052936) popup_snote_single_graphic_window_t4

0x870a,	// (0x0005296a) popup_snote_single_graphic_window_t5_ParamLimits

0x870a,	// (0x0005296a) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00059816) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00059816) popup_snote_single_graphic_window_t

0xb3cd,	// (0x0005562d) grid_graphic_popup_pane_ParamLimits

0xb3cd,	// (0x0005562d) grid_graphic_popup_pane

0xb3f7,	// (0x00055657) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3f7,	// (0x00055657) listscroll_popup_graphic_pane_g1

0xb40b,	// (0x0005566b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb40b,	// (0x0005566b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00059c15) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00059c15) listscroll_popup_graphic_pane_g

0xb41f,	// (0x0005567f) scroll_pane_cp5

0xb36c,	// (0x000555cc) cell_graphic_popup_pane_ParamLimits

0xb36c,	// (0x000555cc) cell_graphic_popup_pane

0xb34d,	// (0x000555ad) cell_graphic_popup_pane_g1

0xb355,	// (0x000555b5) cell_graphic_popup_pane_g2

0x855d,	// (0x000527bd) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00059c0e) cell_graphic_popup_pane_g

0xb35e,	// (0x000555be) cell_graphic_popup_pane_t2

0x8566,	// (0x000527c6) grid_highlight_pane_cp3

0x874b,	// (0x000529ab) list_gen_pane_ParamLimits

0x874b,	// (0x000529ab) list_gen_pane

0x877d,	// (0x000529dd) scroll_pane

0xb2a5,	// (0x00055505) bg_list_pane_g1_ParamLimits

0xb2a5,	// (0x00055505) bg_list_pane_g1

0xb2c2,	// (0x00055522) bg_list_pane_g2_ParamLimits

0xb2c2,	// (0x00055522) bg_list_pane_g2

0xb2d7,	// (0x00055537) bg_list_pane_g3_ParamLimits

0xb2d7,	// (0x00055537) bg_list_pane_g3

0xb2eb,	// (0x0005554b) bg_list_pane_g4_ParamLimits

0xb2eb,	// (0x0005554b) bg_list_pane_g4

0xb2ff,	// (0x0005555f) bg_list_pane_g5_ParamLimits

0xb2ff,	// (0x0005555f) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00059c03) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00059c03) bg_list_pane_g

0x7667,	// (0x000518c7) list_double2_graphic_large_graphic_pane_ParamLimits

0x7667,	// (0x000518c7) list_double2_graphic_large_graphic_pane

0x7667,	// (0x000518c7) list_double2_graphic_pane_ParamLimits

0x7667,	// (0x000518c7) list_double2_graphic_pane

0x7667,	// (0x000518c7) list_double2_large_graphic_pane_ParamLimits

0x7667,	// (0x000518c7) list_double2_large_graphic_pane

0x7667,	// (0x000518c7) list_double2_pane_ParamLimits

0x7667,	// (0x000518c7) list_double2_pane

0x7667,	// (0x000518c7) list_double_graphic_heading_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_graphic_heading_pane

0x7667,	// (0x000518c7) list_double_graphic_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_graphic_pane

0x7667,	// (0x000518c7) list_double_heading_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_heading_pane

0x7667,	// (0x000518c7) list_double_large_graphic_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_large_graphic_pane

0x7667,	// (0x000518c7) list_double_number_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_number_pane

0x7667,	// (0x000518c7) list_double_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_pane

0x7667,	// (0x000518c7) list_double_time_pane_ParamLimits

0x7667,	// (0x000518c7) list_double_time_pane

0x7667,	// (0x000518c7) list_setting_number_pane_ParamLimits

0x7667,	// (0x000518c7) list_setting_number_pane

0x7667,	// (0x000518c7) list_setting_pane_ParamLimits

0x7667,	// (0x000518c7) list_setting_pane

0x76cd,	// (0x0005192d) list_single_2graphic_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_2graphic_pane

0x76cd,	// (0x0005192d) list_single_graphic_heading_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_graphic_heading_pane

0x76cd,	// (0x0005192d) list_single_graphic_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_graphic_pane

0x76cd,	// (0x0005192d) list_single_heading_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_heading_pane

0x773e,	// (0x0005199e) list_single_large_graphic_pane_ParamLimits

0x773e,	// (0x0005199e) list_single_large_graphic_pane

0x76cd,	// (0x0005192d) list_single_number_heading_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_number_heading_pane

0x76cd,	// (0x0005192d) list_single_number_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_number_pane

0x76cd,	// (0x0005192d) list_single_pane_ParamLimits

0x76cd,	// (0x0005192d) list_single_pane

0x7ebb,	// (0x0005211b) list_highlight_pane_cp1

0x7490,	// (0x000516f0) list_single_pane_g1_ParamLimits

0x7490,	// (0x000516f0) list_single_pane_g1

0x749c,	// (0x000516fc) list_single_pane_g2_ParamLimits

0x749c,	// (0x000516fc) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00059832) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00059832) list_single_pane_g

0x7651,	// (0x000518b1) list_single_pane_t1_ParamLimits

0x7651,	// (0x000518b1) list_single_pane_t1

0x7490,	// (0x000516f0) list_single_number_pane_g1_ParamLimits

0x7490,	// (0x000516f0) list_single_number_pane_g1

0x749c,	// (0x000516fc) list_single_number_pane_g2_ParamLimits

0x749c,	// (0x000516fc) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00059832) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00059832) list_single_number_pane_g

0x75f9,	// (0x00051859) list_single_number_pane_t1_ParamLimits

0x75f9,	// (0x00051859) list_single_number_pane_t1

0x760f,	// (0x0005186f) list_single_number_pane_t2_ParamLimits

0x760f,	// (0x0005186f) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00059bc4) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00059bc4) list_single_number_pane_t

0x4cba,	// (0x0004ef1a) list_single_graphic_pane_g1_ParamLimits

0x4cba,	// (0x0004ef1a) list_single_graphic_pane_g1

0x7490,	// (0x000516f0) list_single_graphic_pane_g2_ParamLimits

0x7490,	// (0x000516f0) list_single_graphic_pane_g2

0x749c,	// (0x000516fc) list_single_graphic_pane_g3_ParamLimits

0x749c,	// (0x000516fc) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00059821) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00059821) list_single_graphic_pane_g

0x4cc6,	// (0x0004ef26) list_single_graphic_pane_t1_ParamLimits

0x4cc6,	// (0x0004ef26) list_single_graphic_pane_t1

0x4cdc,	// (0x0004ef3c) list_single_heading_pane_g1_ParamLimits

0x4cdc,	// (0x0004ef3c) list_single_heading_pane_g1

0x749c,	// (0x000516fc) list_single_heading_pane_g2_ParamLimits

0x749c,	// (0x000516fc) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00059828) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00059828) list_single_heading_pane_g

0x4cef,	// (0x0004ef4f) list_single_heading_pane_t1_ParamLimits

0x4cef,	// (0x0004ef4f) list_single_heading_pane_t1

0x74a8,	// (0x00051708) list_single_heading_pane_t2_ParamLimits

0x74a8,	// (0x00051708) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005982d) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005982d) list_single_heading_pane_t

0x7490,	// (0x000516f0) list_single_number_heading_pane_g1_ParamLimits

0x7490,	// (0x000516f0) list_single_number_heading_pane_g1

0x749c,	// (0x000516fc) list_single_number_heading_pane_g2_ParamLimits

0x749c,	// (0x000516fc) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00059832) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00059832) list_single_number_heading_pane_g

0x4d05,	// (0x0004ef65) list_single_number_heading_pane_t1_ParamLimits

0x4d05,	// (0x0004ef65) list_single_number_heading_pane_t1

0x4d1b,	// (0x0004ef7b) list_single_number_heading_pane_t2_ParamLimits

0x4d1b,	// (0x0004ef7b) list_single_number_heading_pane_t2

0x4d2d,	// (0x0004ef8d) list_single_number_heading_pane_t3_ParamLimits

0x4d2d,	// (0x0004ef8d) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00059837) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00059837) list_single_number_heading_pane_t

0x4d3f,	// (0x0004ef9f) list_single_graphic_heading_pane_g1_ParamLimits

0x4d3f,	// (0x0004ef9f) list_single_graphic_heading_pane_g1

0x74ba,	// (0x0005171a) list_single_graphic_heading_pane_g4_ParamLimits

0x74ba,	// (0x0005171a) list_single_graphic_heading_pane_g4

0x749c,	// (0x000516fc) list_single_graphic_heading_pane_g5_ParamLimits

0x749c,	// (0x000516fc) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005983e) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005983e) list_single_graphic_heading_pane_g

0x4d05,	// (0x0004ef65) list_single_graphic_heading_pane_t1_ParamLimits

0x4d05,	// (0x0004ef65) list_single_graphic_heading_pane_t1

0x4d57,	// (0x0004efb7) list_single_graphic_heading_pane_t2_ParamLimits

0x4d57,	// (0x0004efb7) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x00059845) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x00059845) list_single_graphic_heading_pane_t

0x74cb,	// (0x0005172b) list_single_large_graphic_pane_g1_ParamLimits

0x74cb,	// (0x0005172b) list_single_large_graphic_pane_g1

0x74d7,	// (0x00051737) list_single_large_graphic_pane_g2_ParamLimits

0x74d7,	// (0x00051737) list_single_large_graphic_pane_g2

0x74e3,	// (0x00051743) list_single_large_graphic_pane_g3_ParamLimits

0x74e3,	// (0x00051743) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005984a) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005984a) list_single_large_graphic_pane_g

0xa30e,	// (0x0005456e) wait_border_pane_g2_copy1

0x74ef,	// (0x0005174f) list_single_large_graphic_pane_g4_cp2

0x4d6d,	// (0x0004efcd) list_single_large_graphic_pane_t1_ParamLimits

0x4d6d,	// (0x0004efcd) list_single_large_graphic_pane_t1

0x87b1,	// (0x00052a11) list_double_pane_g1_ParamLimits

0x87b1,	// (0x00052a11) list_double_pane_g1

0x74f7,	// (0x00051757) list_double_pane_g2_ParamLimits

0x74f7,	// (0x00051757) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00059851) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00059851) list_double_pane_g

0x4d83,	// (0x0004efe3) list_double_pane_t1_ParamLimits

0x4d83,	// (0x0004efe3) list_double_pane_t1

0x4d99,	// (0x0004eff9) list_double_pane_t2_ParamLimits

0x4d99,	// (0x0004eff9) list_double_pane_t2

0x0001,

0xf5f6,	// (0x00059856) list_double_pane_t_ParamLimits

0xf5f6,	// (0x00059856) list_double_pane_t

0x4dab,	// (0x0004f00b) list_double2_pane_g1_ParamLimits

0x4dab,	// (0x0004f00b) list_double2_pane_g1

0x4dbc,	// (0x0004f01c) list_double2_pane_g2_ParamLimits

0x4dbc,	// (0x0004f01c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005985b) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005985b) list_double2_pane_g

0x4dc8,	// (0x0004f028) list_double2_pane_t1_ParamLimits

0x4dc8,	// (0x0004f028) list_double2_pane_t1

0x4dde,	// (0x0004f03e) list_double2_pane_t2_ParamLimits

0x4dde,	// (0x0004f03e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00059860) list_double2_pane_t_ParamLimits

0xf600,	// (0x00059860) list_double2_pane_t

0x87b1,	// (0x00052a11) list_double_number_pane_g1_ParamLimits

0x87b1,	// (0x00052a11) list_double_number_pane_g1

0x74f7,	// (0x00051757) list_double_number_pane_g2_ParamLimits

0x74f7,	// (0x00051757) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00059851) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00059851) list_double_number_pane_g

0x4df0,	// (0x0004f050) list_double_number_pane_t1_ParamLimits

0x4df0,	// (0x0004f050) list_double_number_pane_t1

0x4e02,	// (0x0004f062) list_double_number_pane_t2_ParamLimits

0x4e02,	// (0x0004f062) list_double_number_pane_t2

0x4e18,	// (0x0004f078) list_double_number_pane_t3_ParamLimits

0x4e18,	// (0x0004f078) list_double_number_pane_t3

0x0002,

0xf605,	// (0x00059865) list_double_number_pane_t_ParamLimits

0xf605,	// (0x00059865) list_double_number_pane_t

0x4e2a,	// (0x0004f08a) list_double_graphic_pane_g1_ParamLimits

0x4e2a,	// (0x0004f08a) list_double_graphic_pane_g1

0x4e36,	// (0x0004f096) list_double_graphic_pane_g2_ParamLimits

0x4e36,	// (0x0004f096) list_double_graphic_pane_g2

0x4e45,	// (0x0004f0a5) list_double_graphic_pane_g3_ParamLimits

0x4e45,	// (0x0004f0a5) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005986c) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005986c) list_double_graphic_pane_g

0x4e5d,	// (0x0004f0bd) list_double_graphic_pane_t1_ParamLimits

0x4e5d,	// (0x0004f0bd) list_double_graphic_pane_t1

0x4e73,	// (0x0004f0d3) list_double_graphic_pane_t2_ParamLimits

0x4e73,	// (0x0004f0d3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x00059875) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x00059875) list_double_graphic_pane_t

0x4e85,	// (0x0004f0e5) list_double2_graphic_pane_g1_ParamLimits

0x4e85,	// (0x0004f0e5) list_double2_graphic_pane_g1

0x9948,	// (0x00053ba8) list_double2_graphic_pane_g2_ParamLimits

0x9948,	// (0x00053ba8) list_double2_graphic_pane_g2

0x7503,	// (0x00051763) list_double2_graphic_pane_g3_ParamLimits

0x7503,	// (0x00051763) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005987a) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005987a) list_double2_graphic_pane_g

0x4e91,	// (0x0004f0f1) list_double2_graphic_pane_t1_ParamLimits

0x4e91,	// (0x0004f0f1) list_double2_graphic_pane_t1

0x4ea7,	// (0x0004f107) list_double2_graphic_pane_t2_ParamLimits

0x4ea7,	// (0x0004f107) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00059881) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00059881) list_double2_graphic_pane_t

0x4eb9,	// (0x0004f119) list_double_large_graphic_pane_g1_ParamLimits

0x4eb9,	// (0x0004f119) list_double_large_graphic_pane_g1

0x4ed8,	// (0x0004f138) list_double_large_graphic_pane_g2_ParamLimits

0x4ed8,	// (0x0004f138) list_double_large_graphic_pane_g2

0x74f7,	// (0x00051757) list_double_large_graphic_pane_g3_ParamLimits

0x74f7,	// (0x00051757) list_double_large_graphic_pane_g3

0x4eee,	// (0x0004f14e) list_double_large_graphic_pane_g4_ParamLimits

0x4eee,	// (0x0004f14e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x00059886) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x00059886) list_double_large_graphic_pane_g

0x4eff,	// (0x0004f15f) list_double_large_graphic_pane_t1_ParamLimits

0x4eff,	// (0x0004f15f) list_double_large_graphic_pane_t1

0x4f18,	// (0x0004f178) list_double_large_graphic_pane_t2_ParamLimits

0x4f18,	// (0x0004f178) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00059891) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00059891) list_double_large_graphic_pane_t

0x7524,	// (0x00051784) list_double2_large_graphic_pane_g1_ParamLimits

0x7524,	// (0x00051784) list_double2_large_graphic_pane_g1

0x4f2a,	// (0x0004f18a) list_double2_large_graphic_pane_g2_ParamLimits

0x4f2a,	// (0x0004f18a) list_double2_large_graphic_pane_g2

0x7503,	// (0x00051763) list_double2_large_graphic_pane_g3_ParamLimits

0x7503,	// (0x00051763) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00059896) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00059896) list_double2_large_graphic_pane_g

0x4f3b,	// (0x0004f19b) list_double2_large_graphic_pane_t1_ParamLimits

0x4f3b,	// (0x0004f19b) list_double2_large_graphic_pane_t1

0x4f51,	// (0x0004f1b1) list_double2_large_graphic_pane_t2_ParamLimits

0x4f51,	// (0x0004f1b1) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005989d) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005989d) list_double2_large_graphic_pane_t

0x4f63,	// (0x0004f1c3) list_double_heading_pane_g1_ParamLimits

0x4f63,	// (0x0004f1c3) list_double_heading_pane_g1

0x7530,	// (0x00051790) list_double_heading_pane_g2_ParamLimits

0x7530,	// (0x00051790) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000598a2) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000598a2) list_double_heading_pane_g

0x4f74,	// (0x0004f1d4) list_double_heading_pane_t1_ParamLimits

0x4f74,	// (0x0004f1d4) list_double_heading_pane_t1

0x4dde,	// (0x0004f03e) list_double_heading_pane_t2_ParamLimits

0x4dde,	// (0x0004f03e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000598a7) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000598a7) list_double_heading_pane_t

0x4f8a,	// (0x0004f1ea) list_double_graphic_heading_pane_g1_ParamLimits

0x4f8a,	// (0x0004f1ea) list_double_graphic_heading_pane_g1

0x4f63,	// (0x0004f1c3) list_double_graphic_heading_pane_g2_ParamLimits

0x4f63,	// (0x0004f1c3) list_double_graphic_heading_pane_g2

0x7530,	// (0x00051790) list_double_graphic_heading_pane_g3_ParamLimits

0x7530,	// (0x00051790) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000598ac) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000598ac) list_double_graphic_heading_pane_g

0x4f96,	// (0x0004f1f6) list_double_graphic_heading_pane_t1_ParamLimits

0x4f96,	// (0x0004f1f6) list_double_graphic_heading_pane_t1

0x4ea7,	// (0x0004f107) list_double_graphic_heading_pane_t2_ParamLimits

0x4ea7,	// (0x0004f107) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000598b3) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000598b3) list_double_graphic_heading_pane_t

0x4fac,	// (0x0004f20c) list_double_time_pane_g1_ParamLimits

0x4fac,	// (0x0004f20c) list_double_time_pane_g1

0x4fbd,	// (0x0004f21d) list_double_time_pane_g2_ParamLimits

0x4fbd,	// (0x0004f21d) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000598b8) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000598b8) list_double_time_pane_g

0x4fc9,	// (0x0004f229) list_double_time_pane_t1_ParamLimits

0x4fc9,	// (0x0004f229) list_double_time_pane_t1

0x4fdf,	// (0x0004f23f) list_double_time_pane_t2_ParamLimits

0x4fdf,	// (0x0004f23f) list_double_time_pane_t2

0x4ff1,	// (0x0004f251) list_double_time_pane_t3_ParamLimits

0x4ff1,	// (0x0004f251) list_double_time_pane_t3

0x5003,	// (0x0004f263) list_double_time_pane_t4_ParamLimits

0x5003,	// (0x0004f263) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000598bd) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000598bd) list_double_time_pane_t

0x5015,	// (0x0004f275) list_setting_pane_g1_ParamLimits

0x5015,	// (0x0004f275) list_setting_pane_g1

0x4dbc,	// (0x0004f01c) list_setting_pane_g2_ParamLimits

0x4dbc,	// (0x0004f01c) list_setting_pane_g2

0x0001,

0xf666,	// (0x000598c6) list_setting_pane_g_ParamLimits

0xf666,	// (0x000598c6) list_setting_pane_g

0x5021,	// (0x0004f281) list_setting_pane_t1_ParamLimits

0x5021,	// (0x0004f281) list_setting_pane_t1

0x503b,	// (0x0004f29b) list_setting_pane_t2_ParamLimits

0x503b,	// (0x0004f29b) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000598cb) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000598cb) list_setting_pane_t

0x507a,	// (0x0004f2da) set_value_pane_cp_ParamLimits

0x507a,	// (0x0004f2da) set_value_pane_cp

0x5086,	// (0x0004f2e6) list_setting_number_pane_g1_ParamLimits

0x5086,	// (0x0004f2e6) list_setting_number_pane_g1

0x5092,	// (0x0004f2f2) list_setting_number_pane_g2_ParamLimits

0x5092,	// (0x0004f2f2) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000598d2) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000598d2) list_setting_number_pane_g

0x509e,	// (0x0004f2fe) list_setting_number_pane_t1_ParamLimits

0x509e,	// (0x0004f2fe) list_setting_number_pane_t1

0x50b7,	// (0x0004f317) list_setting_number_pane_t2_ParamLimits

0x50b7,	// (0x0004f317) list_setting_number_pane_t2

0x50d1,	// (0x0004f331) list_setting_number_pane_t3_ParamLimits

0x50d1,	// (0x0004f331) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000598d7) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000598d7) list_setting_number_pane_t

0x507a,	// (0x0004f2da) set_value_pane_ParamLimits

0x507a,	// (0x0004f2da) set_value_pane

0x87bd,	// (0x00052a1d) bg_set_opt_pane_ParamLimits

0x87bd,	// (0x00052a1d) bg_set_opt_pane

0x5114,	// (0x0004f374) set_value_pane_t1

0x87de,	// (0x00052a3e) slider_set_pane_cp3

0x87e7,	// (0x00052a47) volume_small_pane_cp

0x87f0,	// (0x00052a50) list_form_gen_pane

0x87f9,	// (0x00052a59) scroll_pane_cp8

0x512a,	// (0x0004f38a) form_field_data_pane_ParamLimits

0x512a,	// (0x0004f38a) form_field_data_pane

0x514e,	// (0x0004f3ae) form_field_data_wide_pane_ParamLimits

0x514e,	// (0x0004f3ae) form_field_data_wide_pane

0x5171,	// (0x0004f3d1) form_field_popup_pane_ParamLimits

0x5171,	// (0x0004f3d1) form_field_popup_pane

0x5191,	// (0x0004f3f1) form_field_popup_wide_pane_ParamLimits

0x5191,	// (0x0004f3f1) form_field_popup_wide_pane

0x51b0,	// (0x0004f410) form_field_slider_pane_ParamLimits

0x51b0,	// (0x0004f410) form_field_slider_pane

0x51c3,	// (0x0004f423) form_field_slider_wide_pane_ParamLimits

0x51c3,	// (0x0004f423) form_field_slider_wide_pane

0x880a,	// (0x00052a6a) data_form_pane

0x51e0,	// (0x0004f440) form_field_data_pane_t1

0x8816,	// (0x00052a76) input_focus_pane

0x51f8,	// (0x0004f458) data_form_wide_pane

0x5215,	// (0x0004f475) form_field_data_wide_pane_t1

0x857b,	// (0x000527db) input_focus_pane_cp6

0x5237,	// (0x0004f497) form_field_popup_pane_t1

0x8816,	// (0x00052a76) input_focus_pane_cp7

0x8838,	// (0x00052a98) list_form_pane

0x5257,	// (0x0004f4b7) form_field_popup_wide_pane_t1

0x8816,	// (0x00052a76) input_focus_pane_cp8

0x8844,	// (0x00052aa4) list_form_wide_pane

0x5274,	// (0x0004f4d4) form_field_slider_pane_t1_ParamLimits

0x5274,	// (0x0004f4d4) form_field_slider_pane_t1

0x528a,	// (0x0004f4ea) form_field_slider_pane_t2_ParamLimits

0x528a,	// (0x0004f4ea) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000598e7) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000598e7) form_field_slider_pane_t

0x8216,	// (0x00052476) input_focus_pane_cp9_ParamLimits

0x8216,	// (0x00052476) input_focus_pane_cp9

0x529f,	// (0x0004f4ff) slider_cont_pane_ParamLimits

0x529f,	// (0x0004f4ff) slider_cont_pane

0x8850,	// (0x00052ab0) form_field_slider_wide_pane_t1_ParamLimits

0x8850,	// (0x00052ab0) form_field_slider_wide_pane_t1

0x52b3,	// (0x0004f513) form_field_slider_wide_pane_t2_ParamLimits

0x52b3,	// (0x0004f513) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000598ec) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000598ec) form_field_slider_wide_pane_t

0x8216,	// (0x00052476) input_focus_pane_cp10_ParamLimits

0x8216,	// (0x00052476) input_focus_pane_cp10

0x52c5,	// (0x0004f525) slider_cont_pane_cp1_ParamLimits

0x52c5,	// (0x0004f525) slider_cont_pane_cp1

0x52d9,	// (0x0004f539) slider_form_pane_cp

0x8862,	// (0x00052ac2) input_focus_pane_g1

0x886a,	// (0x00052aca) input_focus_pane_g2

0x8872,	// (0x00052ad2) input_focus_pane_g3

0x887a,	// (0x00052ada) input_focus_pane_g4

0x8882,	// (0x00052ae2) input_focus_pane_g5

0x888a,	// (0x00052aea) input_focus_pane_g6

0x8892,	// (0x00052af2) input_focus_pane_g7

0x889a,	// (0x00052afa) input_focus_pane_g8

0x88a2,	// (0x00052b02) input_focus_pane_g9

0x7eb1,	// (0x00052111) input_focus_pane_g10

0x0009,

0xf691,	// (0x000598f1) input_focus_pane_g

0xa317,	// (0x00054577) wait_border_pane_g3_copy1

0x52e1,	// (0x0004f541) data_form_pane_t1

0x7eb1,	// (0x00052111) wait_anim_pane_g1_copy1

0x7621,	// (0x00051881) data_form_wide_pane_t1

0x52fc,	// (0x0004f55c) list_form_graphic_pane_cp_ParamLimits

0x52fc,	// (0x0004f55c) list_form_graphic_pane_cp

0xb237,	// (0x00055497) slider_form_pane_g1

0xb240,	// (0x000554a0) slider_form_pane_g2

0x0006,

0xf994,	// (0x00059bf4) slider_form_pane_g

0x5315,	// (0x0004f575) list_form_graphic_pane_ParamLimits

0x5315,	// (0x0004f575) list_form_graphic_pane

0x5331,	// (0x0004f591) list_form_graphic_pane_g1

0x5339,	// (0x0004f599) list_form_graphic_pane_t1_ParamLimits

0x5339,	// (0x0004f599) list_form_graphic_pane_t1

0x7f9b,	// (0x000521fb) list_highlight_pane_cp5_ParamLimits

0x7f9b,	// (0x000521fb) list_highlight_pane_cp5

0x534e,	// (0x0004f5ae) find_pane_g1

0x88aa,	// (0x00052b0a) input_find_pane

0x5357,	// (0x0004f5b7) input_find_pane_g1_ParamLimits

0x5357,	// (0x0004f5b7) input_find_pane_g1

0x5363,	// (0x0004f5c3) input_find_pane_t1_ParamLimits

0x5363,	// (0x0004f5c3) input_find_pane_t1

0x5378,	// (0x0004f5d8) input_find_pane_t2_ParamLimits

0x5378,	// (0x0004f5d8) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00059906) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00059906) input_find_pane_t

0x88b3,	// (0x00052b13) input_focus_pane_cp5_ParamLimits

0x88b3,	// (0x00052b13) input_focus_pane_cp5

0x88cd,	// (0x00052b2d) bg_popup_window_pane_cp2_ParamLimits

0x88cd,	// (0x00052b2d) bg_popup_window_pane_cp2

0x88da,	// (0x00052b3a) listscroll_menu_pane_ParamLimits

0x88da,	// (0x00052b3a) listscroll_menu_pane

0x88e6,	// (0x00052b46) popup_submenu_window_ParamLimits

0x88e6,	// (0x00052b46) popup_submenu_window

0x8912,	// (0x00052b72) find_popup_pane_g1

0x891a,	// (0x00052b7a) input_popup_find_pane_cp

0x88b3,	// (0x00052b13) input_focus_pane_cp4_ParamLimits

0x88b3,	// (0x00052b13) input_focus_pane_cp4

0x8930,	// (0x00052b90) input_popup_find_pane_t1_ParamLimits

0x8930,	// (0x00052b90) input_popup_find_pane_t1

0x7ebb,	// (0x0005211b) bg_popup_sub_pane_cp

0x895e,	// (0x00052bbe) listscroll_popup_sub_pane

0x8966,	// (0x00052bc6) list_submenu_pane_ParamLimits

0x8966,	// (0x00052bc6) list_submenu_pane

0x8977,	// (0x00052bd7) scroll_pane_cp4

0x897f,	// (0x00052bdf) list_single_popup_submenu_pane_ParamLimits

0x897f,	// (0x00052bdf) list_single_popup_submenu_pane

0x8993,	// (0x00052bf3) list_single_popup_submenu_pane_g1

0x899b,	// (0x00052bfb) list_single_popup_submenu_pane_t1_ParamLimits

0x899b,	// (0x00052bfb) list_single_popup_submenu_pane_t1

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp1_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp1

0x89b0,	// (0x00052c10) tabs_2_active_pane_g1

0x89b8,	// (0x00052c18) tabs_2_active_pane_t1

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp1_ParamLimits

0x7f9b,	// (0x000521fb) bg_passive_tab_pane_cp1

0x89b0,	// (0x00052c10) tabs_2_passive_pane_g1

0x89b8,	// (0x00052c18) tabs_2_passive_pane_t1

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp4

0x89d8,	// (0x00052c38) tabs_2_long_active_pane_t1

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp4

0x603e,	// (0x0005029e) list_single_midp_graphic_pane_g4_ParamLimits

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp5

0x89f7,	// (0x00052c57) tabs_3_long_active_pane_t1

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp5

0x603e,	// (0x0005029e) list_single_midp_graphic_pane_g4

0x7f9b,	// (0x000521fb) bg_popup_window_pane_cp13_ParamLimits

0x7f9b,	// (0x000521fb) bg_popup_window_pane_cp13

0x8a12,	// (0x00052c72) listscroll_popup_fast_pane_ParamLimits

0x8a12,	// (0x00052c72) listscroll_popup_fast_pane

0x8a21,	// (0x00052c81) grid_popup_fast_pane_ParamLimits

0x8a21,	// (0x00052c81) grid_popup_fast_pane

0x8a33,	// (0x00052c93) scroll_pane_cp9_ParamLimits

0x8a33,	// (0x00052c93) scroll_pane_cp9

0xcae0,	// (0x00056d40) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x00056d40) list_single_graphic_hl_pane_t1_cp2

0x8a57,	// (0x00052cb7) input_focus_pane_cp20_ParamLimits

0x8a57,	// (0x00052cb7) input_focus_pane_cp20

0x8a65,	// (0x00052cc5) query_popup_data_pane_t1_ParamLimits

0x8a65,	// (0x00052cc5) query_popup_data_pane_t1

0x8a78,	// (0x00052cd8) query_popup_data_pane_t2_ParamLimits

0x8a78,	// (0x00052cd8) query_popup_data_pane_t2

0x8abe,	// (0x00052d1e) query_popup_data_pane_t3_ParamLimits

0x8abe,	// (0x00052d1e) query_popup_data_pane_t3

0x8aff,	// (0x00052d5f) query_popup_data_pane_t4_ParamLimits

0x8aff,	// (0x00052d5f) query_popup_data_pane_t4

0x8b3b,	// (0x00052d9b) query_popup_data_pane_t5_ParamLimits

0x8b3b,	// (0x00052d9b) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005990b) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005990b) query_popup_data_pane_t

0x8862,	// (0x00052ac2) bg_set_opt_pane_g1

0x886a,	// (0x00052aca) bg_set_opt_pane_g2

0x8872,	// (0x00052ad2) bg_set_opt_pane_g3

0x887a,	// (0x00052ada) bg_set_opt_pane_g4

0x8882,	// (0x00052ae2) bg_set_opt_pane_g5

0x888a,	// (0x00052aea) bg_set_opt_pane_g6

0x8892,	// (0x00052af2) bg_set_opt_pane_g7

0x889a,	// (0x00052afa) bg_set_opt_pane_g8

0x88a2,	// (0x00052b02) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00059916) bg_set_opt_pane_g

0x5698,	// (0x0004f8f8) control_top_pane_stacon_ParamLimits

0x5698,	// (0x0004f8f8) control_top_pane_stacon

0x56eb,	// (0x0004f94b) signal_pane_stacon_ParamLimits

0x56eb,	// (0x0004f94b) signal_pane_stacon

0x912f,	// (0x0005338f) stacon_top_pane_g1_ParamLimits

0x912f,	// (0x0005338f) stacon_top_pane_g1

0x5710,	// (0x0004f970) title_pane_stacon_ParamLimits

0x5710,	// (0x0004f970) title_pane_stacon

0x573a,	// (0x0004f99a) uni_indicator_pane_stacon_ParamLimits

0x573a,	// (0x0004f99a) uni_indicator_pane_stacon

0x574f,	// (0x0004f9af) battery_pane_stacon_ParamLimits

0x574f,	// (0x0004f9af) battery_pane_stacon

0x5793,	// (0x0004f9f3) control_bottom_pane_stacon_ParamLimits

0x5793,	// (0x0004f9f3) control_bottom_pane_stacon

0x57b6,	// (0x0004fa16) navi_pane_stacon_ParamLimits

0x57b6,	// (0x0004fa16) navi_pane_stacon

0x9151,	// (0x000533b1) stacon_bottom_pane_g1_ParamLimits

0x9151,	// (0x000533b1) stacon_bottom_pane_g1

0x538d,	// (0x0004f5ed) aid_levels_signal_lsc_ParamLimits

0x538d,	// (0x0004f5ed) aid_levels_signal_lsc

0x53a3,	// (0x0004f603) signal_pane_stacon_g1_ParamLimits

0x53a3,	// (0x0004f603) signal_pane_stacon_g1

0x53b7,	// (0x0004f617) signal_pane_stacon_g2_ParamLimits

0x53b7,	// (0x0004f617) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00059929) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00059929) signal_pane_stacon_g

0x53ec,	// (0x0004f64c) title_pane_stacon_t1_ParamLimits

0x53ec,	// (0x0004f64c) title_pane_stacon_t1

0x8b7f,	// (0x00052ddf) uni_indicator_pane_stacon_g1

0x8b89,	// (0x00052de9) uni_indicator_pane_stacon_g2

0x8b93,	// (0x00052df3) uni_indicator_pane_stacon_g3

0x8b9d,	// (0x00052dfd) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00059935) uni_indicator_pane_stacon_g

0x5411,	// (0x0004f671) control_top_pane_stacon_g1

0x5419,	// (0x0004f679) control_top_pane_stacon_t1_ParamLimits

0x5419,	// (0x0004f679) control_top_pane_stacon_t1

0x5450,	// (0x0004f6b0) aid_levels_battery_lsc_ParamLimits

0x5450,	// (0x0004f6b0) aid_levels_battery_lsc

0x5467,	// (0x0004f6c7) battery_pane_stacon_g1_ParamLimits

0x5467,	// (0x0004f6c7) battery_pane_stacon_g1

0x547a,	// (0x0004f6da) battery_pane_stacon_g2_ParamLimits

0x547a,	// (0x0004f6da) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005993e) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005993e) battery_pane_stacon_g

0x54b8,	// (0x0004f718) navi_icon_pane_stacon

0x54cc,	// (0x0004f72c) navi_navi_pane_stacon

0x54b8,	// (0x0004f718) navi_text_pane_stacon

0x5411,	// (0x0004f671) control_bottom_pane_stacon_g1

0x54e0,	// (0x0004f740) control_bottom_pane_stacon_t1_ParamLimits

0x54e0,	// (0x0004f740) control_bottom_pane_stacon_t1

0x8bc1,	// (0x00052e21) grid_app_pane_ParamLimits

0x8bc1,	// (0x00052e21) grid_app_pane

0x8be5,	// (0x00052e45) scroll_pane_cp15_ParamLimits

0x8be5,	// (0x00052e45) scroll_pane_cp15

0x8bf8,	// (0x00052e58) cell_app_pane_ParamLimits

0x8bf8,	// (0x00052e58) cell_app_pane

0x8c20,	// (0x00052e80) cell_app_pane_g1_ParamLimits

0x8c20,	// (0x00052e80) cell_app_pane_g1

0x8c44,	// (0x00052ea4) cell_app_pane_g2_ParamLimits

0x8c44,	// (0x00052ea4) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00059943) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00059943) cell_app_pane_g

0x8c50,	// (0x00052eb0) cell_app_pane_t1_ParamLimits

0x8c50,	// (0x00052eb0) cell_app_pane_t1

0x8c67,	// (0x00052ec7) grid_highlight_pane_ParamLimits

0x8c67,	// (0x00052ec7) grid_highlight_pane

0x8862,	// (0x00052ac2) cell_highlight_pane_g1

0x886a,	// (0x00052aca) cell_highlight_pane_g2

0x8872,	// (0x00052ad2) cell_highlight_pane_g3

0x887a,	// (0x00052ada) cell_highlight_pane_g4

0x8882,	// (0x00052ae2) cell_highlight_pane_g5

0x888a,	// (0x00052aea) cell_highlight_pane_g6

0x8892,	// (0x00052af2) cell_highlight_pane_g7

0x889a,	// (0x00052afa) cell_highlight_pane_g8

0x88a2,	// (0x00052b02) cell_highlight_pane_g9

0x7eb1,	// (0x00052111) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000598f1) cell_highlight_pane_g

0x8c78,	// (0x00052ed8) bg_scroll_pane

0x552a,	// (0x0004f78a) scroll_handle_pane

0x8cbf,	// (0x00052f1f) scroll_bg_pane_g1

0x8cd4,	// (0x00052f34) scroll_bg_pane_g2

0x8cec,	// (0x00052f4c) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00059948) scroll_bg_pane_g

0x8d01,	// (0x00052f61) scroll_handle_focus_pane_ParamLimits

0x8d01,	// (0x00052f61) scroll_handle_focus_pane

0x8cbf,	// (0x00052f1f) scroll_handle_pane_g1

0x8d0e,	// (0x00052f6e) scroll_handle_pane_g2

0x8cec,	// (0x00052f4c) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005994f) scroll_handle_pane_g

0x88b3,	// (0x00052b13) bg_popup_sub_pane_cp21_ParamLimits

0x88b3,	// (0x00052b13) bg_popup_sub_pane_cp21

0x8d22,	// (0x00052f82) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d22,	// (0x00052f82) popup_fep_japan_predictive_window_t1

0x8d3c,	// (0x00052f9c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d3c,	// (0x00052f9c) popup_fep_japan_predictive_window_t2

0x8d6f,	// (0x00052fcf) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d6f,	// (0x00052fcf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00059956) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00059956) popup_fep_japan_predictive_window_t

0x7ebb,	// (0x0005211b) bg_popup_sub_pane_cp23

0x8da6,	// (0x00053006) listscroll_japin_cand_pane

0x8dae,	// (0x0005300e) popup_fep_japan_candidate_window_t1

0x8dbc,	// (0x0005301c) candidate_pane_ParamLimits

0x8dbc,	// (0x0005301c) candidate_pane

0x8dce,	// (0x0005302e) scroll_pane_cp30

0x8dd6,	// (0x00053036) list_single_popup_jap_candidate_pane_ParamLimits

0x8dd6,	// (0x00053036) list_single_popup_jap_candidate_pane

0x7ebb,	// (0x0005211b) list_highlight_pane_cp30

0x8deb,	// (0x0005304b) list_single_popup_jap_candidate_pane_t1

0x8dfa,	// (0x0005305a) level_1_signal

0x8e0c,	// (0x0005306c) level_2_signal

0x8e1f,	// (0x0005307f) level_3_signal

0x8e32,	// (0x00053092) level_4_signal

0x8e45,	// (0x000530a5) level_5_signal

0x8e58,	// (0x000530b8) level_6_signal

0x8e6b,	// (0x000530cb) level_7_signal

0x8dfa,	// (0x0005305a) level_1_battery

0x8e0c,	// (0x0005306c) level_2_battery

0x8e1f,	// (0x0005307f) level_3_battery

0x8e32,	// (0x00053092) level_4_battery

0x8e45,	// (0x000530a5) level_5_battery

0x8e58,	// (0x000530b8) level_6_battery

0x8e6b,	// (0x000530cb) level_7_battery

0x8e96,	// (0x000530f6) list_menu_pane_ParamLimits

0x8e96,	// (0x000530f6) list_menu_pane

0x8eac,	// (0x0005310c) scroll_pane_cp25_ParamLimits

0x8eac,	// (0x0005310c) scroll_pane_cp25

0x8ec5,	// (0x00053125) list_double2_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double2_graphic_pane_cp2

0x8ec5,	// (0x00053125) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double2_large_graphic_pane_cp2

0x8ec5,	// (0x00053125) list_double2_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double2_pane_cp2

0x8ec5,	// (0x00053125) list_double_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double_graphic_pane_cp2

0x8ec5,	// (0x00053125) list_double_large_graphic_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double_large_graphic_pane_cp2

0x8ec5,	// (0x00053125) list_double_number_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double_number_pane_cp2

0x8ec5,	// (0x00053125) list_double_pane_cp2_ParamLimits

0x8ec5,	// (0x00053125) list_double_pane_cp2

0x8ee9,	// (0x00053149) list_single_2graphic_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_2graphic_pane_cp2

0x8ee9,	// (0x00053149) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_graphic_heading_pane_cp2

0x8ee9,	// (0x00053149) list_single_graphic_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_graphic_pane_cp2

0x8ee9,	// (0x00053149) list_single_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_heading_pane_cp2

0x8f02,	// (0x00053162) list_single_large_graphic_pane_cp2_ParamLimits

0x8f02,	// (0x00053162) list_single_large_graphic_pane_cp2

0x8ee9,	// (0x00053149) list_single_number_heading_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_number_heading_pane_cp2

0x8ee9,	// (0x00053149) list_single_number_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_number_pane_cp2

0x8ee9,	// (0x00053149) list_single_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_pane_cp2

0x8f7e,	// (0x000531de) bg_popup_sub_pane_cp22

0x55dc,	// (0x0004f83c) popup_side_volume_key_window_g1

0x5606,	// (0x0004f866) popup_side_volume_key_window_t1

0x5622,	// (0x0004f882) volume_small_pane_cp1

0x8216,	// (0x00052476) bg_popup_sub_pane_cp24_ParamLimits

0x8216,	// (0x00052476) bg_popup_sub_pane_cp24

0x8f94,	// (0x000531f4) fep_china_uni_candidate_pane_ParamLimits

0x8f94,	// (0x000531f4) fep_china_uni_candidate_pane

0x8fa8,	// (0x00053208) fep_china_uni_entry_pane

0x8fb8,	// (0x00053218) popup_fep_china_uni_window_g1

0x8fd4,	// (0x00053234) fep_china_uni_entry_pane_g1

0x8fdc,	// (0x0005323c) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00059987) fep_china_uni_entry_pane_g

0x8fe4,	// (0x00053244) fep_entry_item_pane

0x8fee,	// (0x0005324e) fep_candidate_item_pane

0x8ff6,	// (0x00053256) fep_china_uni_candidate_pane_g1

0x8ffe,	// (0x0005325e) fep_china_uni_candidate_pane_g2

0x9006,	// (0x00053266) fep_china_uni_candidate_pane_g3

0x900e,	// (0x0005326e) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005998c) fep_china_uni_candidate_pane_g

0x7eb1,	// (0x00052111) fep_entry_item_pane_g1

0x9016,	// (0x00053276) fep_entry_item_pane_t1_ParamLimits

0x9016,	// (0x00053276) fep_entry_item_pane_t1

0x902c,	// (0x0005328c) fep_candidate_item_pane_t1_ParamLimits

0x902c,	// (0x0005328c) fep_candidate_item_pane_t1

0x9041,	// (0x000532a1) fep_candidate_item_pane_t2_ParamLimits

0x9041,	// (0x000532a1) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00059995) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00059995) fep_candidate_item_pane_t

0x7f9b,	// (0x000521fb) list_highlight_pane_cp31_ParamLimits

0x7f9b,	// (0x000521fb) list_highlight_pane_cp31

0x9053,	// (0x000532b3) level_1_signal_lsc

0x905c,	// (0x000532bc) level_2_signal_lsc

0x9065,	// (0x000532c5) level_3_signal_lsc

0x906e,	// (0x000532ce) level_4_signal_lsc

0x9077,	// (0x000532d7) level_5_signal_lsc

0x9080,	// (0x000532e0) level_6_signal_lsc

0x9089,	// (0x000532e9) level_7_signal_lsc

0x9089,	// (0x000532e9) level_1_battery_lsc

0x9092,	// (0x000532f2) level_2_battery_lsc

0x909b,	// (0x000532fb) level_3_battery_lsc

0x90a4,	// (0x00053304) level_4_battery_lsc

0x90ad,	// (0x0005330d) level_5_battery_lsc

0x90b6,	// (0x00053316) level_6_battery_lsc

0x9053,	// (0x000532b3) level_7_battery_lsc

0x90bf,	// (0x0005331f) scroll_handle_focus_pane_g1

0x90c8,	// (0x00053328) scroll_handle_focus_pane_g2

0x90d1,	// (0x00053331) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005999a) scroll_handle_focus_pane_g

0x562a,	// (0x0004f88a) list_single_2graphic_pane_g1_ParamLimits

0x562a,	// (0x0004f88a) list_single_2graphic_pane_g1

0x74ba,	// (0x0005171a) list_single_2graphic_pane_g2_ParamLimits

0x74ba,	// (0x0005171a) list_single_2graphic_pane_g2

0x749c,	// (0x000516fc) list_single_2graphic_pane_g3_ParamLimits

0x749c,	// (0x000516fc) list_single_2graphic_pane_g3

0x5636,	// (0x0004f896) list_single_2graphic_pane_g4_ParamLimits

0x5636,	// (0x0004f896) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000599a1) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000599a1) list_single_2graphic_pane_g

0x5642,	// (0x0004f8a2) list_single_2graphic_pane_t1_ParamLimits

0x5642,	// (0x0004f8a2) list_single_2graphic_pane_t1

0x753c,	// (0x0005179c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x753c,	// (0x0005179c) list_double2_graphic_large_graphic_pane_g1

0x4f2a,	// (0x0004f18a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f2a,	// (0x0004f18a) list_double2_graphic_large_graphic_pane_g2

0x7503,	// (0x00051763) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7503,	// (0x00051763) list_double2_graphic_large_graphic_pane_g3

0x754c,	// (0x000517ac) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x754c,	// (0x000517ac) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000599aa) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000599aa) list_double2_graphic_large_graphic_pane_g

0x5670,	// (0x0004f8d0) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5670,	// (0x0004f8d0) list_double2_graphic_large_graphic_pane_t1

0x5686,	// (0x0004f8e6) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5686,	// (0x0004f8e6) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000599b3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000599b3) list_double2_graphic_large_graphic_pane_t

0x9219,	// (0x00053479) popup_fast_swap_window_ParamLimits

0x9219,	// (0x00053479) popup_fast_swap_window

0x9235,	// (0x00053495) popup_side_volume_key_window

0x9251,	// (0x000534b1) stacon_top_pane

0x925b,	// (0x000534bb) status_pane_ParamLimits

0x925b,	// (0x000534bb) status_pane

0x9269,	// (0x000534c9) status_small_pane

0x7ebb,	// (0x0005211b) control_pane

0x7ebb,	// (0x0005211b) stacon_bottom_pane

0x87f9,	// (0x00052a59) scroll_pane_cp121

0x87f0,	// (0x00052a50) set_content_pane

0x90da,	// (0x0005333a) bg_active_tab_pane_g1_cp1

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp1

0x90ec,	// (0x0005334c) bg_active_tab_pane_g3_cp1

0x90da,	// (0x0005333a) bg_passive_tab_pane_g1_cp1

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp1

0x90ec,	// (0x0005334c) bg_passive_tab_pane_g3_cp1

0x90f5,	// (0x00053355) bg_active_tab_pane_g1_cp2

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp2

0x90fe,	// (0x0005335e) bg_active_tab_pane_g3_cp2

0x90f5,	// (0x00053355) bg_passive_tab_pane_g1_cp2

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp2

0x90fe,	// (0x0005335e) bg_passive_tab_pane_g3_cp2

0x9107,	// (0x00053367) bg_active_tab_pane_g1_cp3

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp3

0x9110,	// (0x00053370) bg_active_tab_pane_g3_cp3

0x9107,	// (0x00053367) bg_passive_tab_pane_g1_cp3

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp3

0x9110,	// (0x00053370) bg_passive_tab_pane_g3_cp3

0x9119,	// (0x00053379) bg_active_tab_pane_g1_cp4

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp4

0x9124,	// (0x00053384) bg_active_tab_pane_g3_cp4

0x9119,	// (0x00053379) bg_passive_tab_pane_g1_cp4

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp4

0x9124,	// (0x00053384) bg_passive_tab_pane_g3_cp4

0x916d,	// (0x000533cd) bg_active_tab_pane_g1_cp5

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp5

0x9176,	// (0x000533d6) bg_active_tab_pane_g3_cp5

0x916d,	// (0x000533cd) bg_passive_tab_pane_g1_cp5

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp5

0x9176,	// (0x000533d6) bg_passive_tab_pane_g3_cp5

0x917f,	// (0x000533df) list_set_graphic_pane_ParamLimits

0x917f,	// (0x000533df) list_set_graphic_pane

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp4

0x919c,	// (0x000533fc) list_set_graphic_pane_g1_ParamLimits

0x919c,	// (0x000533fc) list_set_graphic_pane_g1

0x91a8,	// (0x00053408) list_set_graphic_pane_g2_ParamLimits

0x91a8,	// (0x00053408) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000599b8) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000599b8) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x00059d2d) volume_small_pane_cp_g

0x91cc,	// (0x0005342c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91cc,	// (0x0005342c) list_double2_large_graphic_pane_g1_cp2

0x91d8,	// (0x00053438) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91d8,	// (0x00053438) list_double2_large_graphic_pane_g2_cp2

0x91e9,	// (0x00053449) list_double2_large_graphic_pane_g3_cp2

0x91f1,	// (0x00053451) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91f1,	// (0x00053451) list_double2_large_graphic_pane_t1_cp2

0x9207,	// (0x00053467) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9207,	// (0x00053467) list_double2_large_graphic_pane_t2_cp2

0xadea,	// (0x0005504a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadea,	// (0x0005504a) list_double_large_graphic_pane_g1_cp2

0xadfb,	// (0x0005505b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xadfb,	// (0x0005505b) list_double_large_graphic_pane_g2_cp2

0x9382,	// (0x000535e2) list_double_large_graphic_pane_g3_cp2

0xae0c,	// (0x0005506c) list_double_large_graphic_pane_g4_cp

0xae14,	// (0x00055074) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae14,	// (0x00055074) list_double_large_graphic_pane_t1_cp2

0xae2b,	// (0x0005508b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae2b,	// (0x0005508b) list_double_large_graphic_pane_t2_cp2

0x9274,	// (0x000534d4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9274,	// (0x000534d4) list_double2_graphic_pane_g1_cp2

0x9282,	// (0x000534e2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9282,	// (0x000534e2) list_double2_graphic_pane_g2_cp2

0x9293,	// (0x000534f3) list_double2_graphic_pane_g3_cp2

0x929d,	// (0x000534fd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x929d,	// (0x000534fd) list_double2_graphic_pane_t1_cp2

0x92b3,	// (0x00053513) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92b3,	// (0x00053513) list_double2_graphic_pane_t2_cp2

0x92c5,	// (0x00053525) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92c5,	// (0x00053525) list_single_number_heading_pane_g1_cp2

0x92d1,	// (0x00053531) list_single_number_heading_pane_g2_cp2

0x92d9,	// (0x00053539) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92d9,	// (0x00053539) list_single_number_heading_pane_t1_cp2

0x92ef,	// (0x0005354f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92ef,	// (0x0005354f) list_single_number_heading_pane_t2_cp2

0x9301,	// (0x00053561) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9301,	// (0x00053561) list_single_number_heading_pane_t3_cp2

0x92c5,	// (0x00053525) list_single_heading_pane_g1_cp2_ParamLimits

0x92c5,	// (0x00053525) list_single_heading_pane_g1_cp2

0x92d1,	// (0x00053531) list_single_heading_pane_g2_cp2

0x92d9,	// (0x00053539) list_single_heading_pane_t1_cp2_ParamLimits

0x92d9,	// (0x00053539) list_single_heading_pane_t1_cp2

0xabf2,	// (0x00054e52) list_single_heading_pane_t2_cp2_ParamLimits

0xabf2,	// (0x00054e52) list_single_heading_pane_t2_cp2

0xab3a,	// (0x00054d9a) list_double_graphic_pane_g1_cp2_ParamLimits

0xab3a,	// (0x00054d9a) list_double_graphic_pane_g1_cp2

0xab46,	// (0x00054da6) list_double_graphic_pane_g2_cp2_ParamLimits

0xab46,	// (0x00054da6) list_double_graphic_pane_g2_cp2

0xab55,	// (0x00054db5) list_double_graphic_pane_g3_cp2

0xab5d,	// (0x00054dbd) list_double_graphic_pane_t1_cp2_ParamLimits

0xab5d,	// (0x00054dbd) list_double_graphic_pane_t1_cp2

0xab73,	// (0x00054dd3) list_double_graphic_pane_t2_cp2_ParamLimits

0xab73,	// (0x00054dd3) list_double_graphic_pane_t2_cp2

0x9376,	// (0x000535d6) list_double_number_pane_g1_cp2_ParamLimits

0x9376,	// (0x000535d6) list_double_number_pane_g1_cp2

0x9382,	// (0x000535e2) list_double_number_pane_g2_cp2

0xaafe,	// (0x00054d5e) list_double_number_pane_t1_cp2_ParamLimits

0xaafe,	// (0x00054d5e) list_double_number_pane_t1_cp2

0xab12,	// (0x00054d72) list_double_number_pane_t2_cp2_ParamLimits

0xab12,	// (0x00054d72) list_double_number_pane_t2_cp2

0xab28,	// (0x00054d88) list_double_number_pane_t3_cp2_ParamLimits

0xab28,	// (0x00054d88) list_double_number_pane_t3_cp2

0xa9e7,	// (0x00054c47) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9e7,	// (0x00054c47) list_single_graphic_pane_g1_cp2

0x93da,	// (0x0005363a) list_single_graphic_pane_g2_cp2_ParamLimits

0x93da,	// (0x0005363a) list_single_graphic_pane_g2_cp2

0x93e6,	// (0x00053646) list_single_graphic_pane_g3_cp2

0xa9bd,	// (0x00054c1d) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x00054c1d) list_single_graphic_pane_t1_cp2

0x93da,	// (0x0005363a) list_single_number_pane_g1_cp2_ParamLimits

0x93da,	// (0x0005363a) list_single_number_pane_g1_cp2

0x93e6,	// (0x00053646) list_single_number_pane_g2_cp2

0xa9bd,	// (0x00054c1d) list_single_number_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x00054c1d) list_single_number_pane_t1_cp2

0xa9d3,	// (0x00054c33) list_single_number_pane_t2_cp2_ParamLimits

0xa9d3,	// (0x00054c33) list_single_number_pane_t2_cp2

0x91d8,	// (0x00053438) list_double2_pane_g1_cp2_ParamLimits

0x91d8,	// (0x00053438) list_double2_pane_g1_cp2

0x91e9,	// (0x00053449) list_double2_pane_g2_cp2

0x934e,	// (0x000535ae) list_double2_pane_t1_cp2_ParamLimits

0x934e,	// (0x000535ae) list_double2_pane_t1_cp2

0x9364,	// (0x000535c4) list_double2_pane_t2_cp2_ParamLimits

0x9364,	// (0x000535c4) list_double2_pane_t2_cp2

0x9376,	// (0x000535d6) list_double_pane_g1_cp2_ParamLimits

0x9376,	// (0x000535d6) list_double_pane_g1_cp2

0x9382,	// (0x000535e2) list_double_pane_g2_cp2

0x938a,	// (0x000535ea) list_double_pane_t1_cp2_ParamLimits

0x938a,	// (0x000535ea) list_double_pane_t1_cp2

0x93a0,	// (0x00053600) list_double_pane_t2_cp2_ParamLimits

0x93a0,	// (0x00053600) list_double_pane_t2_cp2

0x93ca,	// (0x0005362a) list_single_pane_cp2_g3

0x93da,	// (0x0005363a) list_single_pane_g1_cp2_ParamLimits

0x93da,	// (0x0005363a) list_single_pane_g1_cp2

0x93e6,	// (0x00053646) list_single_pane_g2_cp2

0x93ee,	// (0x0005364e) list_single_pane_t1_cp2_ParamLimits

0x93ee,	// (0x0005364e) list_single_pane_t1_cp2

0x9406,	// (0x00053666) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9406,	// (0x00053666) list_single_large_graphic_pane_g1_cp2

0x9412,	// (0x00053672) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9412,	// (0x00053672) list_single_large_graphic_pane_g2_cp2

0x941e,	// (0x0005367e) list_single_large_graphic_pane_g3_cp2

0x9426,	// (0x00053686) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9426,	// (0x00053686) list_single_large_graphic_pane_g4_cp1

0x9440,	// (0x000536a0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9440,	// (0x000536a0) list_single_large_graphic_pane_t1_cp2

0xa989,	// (0x00054be9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa989,	// (0x00054be9) list_single_graphic_heading_pane_g1_cp2

0xa956,	// (0x00054bb6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa956,	// (0x00054bb6) list_single_graphic_heading_pane_g4_cp2

0x93e6,	// (0x00053646) list_single_graphic_heading_pane_g5_cp2

0xa995,	// (0x00054bf5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa995,	// (0x00054bf5) list_single_graphic_heading_pane_t1_cp2

0xa9ab,	// (0x00054c0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9ab,	// (0x00054c0b) list_single_graphic_heading_pane_t2_cp2

0xa94a,	// (0x00054baa) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa94a,	// (0x00054baa) list_single_2graphic_pane_g1_cp2

0xa956,	// (0x00054bb6) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa956,	// (0x00054bb6) list_single_2graphic_pane_g2_cp2

0x93e6,	// (0x00053646) list_single_2graphic_pane_g3_cp2

0xa967,	// (0x00054bc7) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa967,	// (0x00054bc7) list_single_2graphic_pane_g4_cp2

0xa973,	// (0x00054bd3) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa973,	// (0x00054bd3) list_single_2graphic_pane_t1_cp2

0x7eb1,	// (0x00052111) list_highlight_pane_g10_cp1

0xa522,	// (0x00054782) list_highlight_pane_g1_cp1

0xa52a,	// (0x0005478a) list_highlight_pane_g2_cp1

0xa532,	// (0x00054792) list_highlight_pane_g3_cp1

0xa53a,	// (0x0005479a) list_highlight_pane_g4_cp1

0xa542,	// (0x000547a2) list_highlight_pane_g5_cp1

0xa54a,	// (0x000547aa) list_highlight_pane_g6_cp1

0xa552,	// (0x000547b2) list_highlight_pane_g7_cp1

0xa55a,	// (0x000547ba) list_highlight_pane_g8_cp1

0xa562,	// (0x000547c2) list_highlight_pane_g9_cp1

0xa442,	// (0x000546a2) form_field_slider_pane_t3

0xa450,	// (0x000546b0) form_field_slider_pane_t4

0xa45e,	// (0x000546be) slider_form_pane_ParamLimits

0xa45e,	// (0x000546be) slider_form_pane

0x7ebb,	// (0x0005211b) control_abbreviations

0x7ebb,	// (0x0005211b) control_conventions

0x7ebb,	// (0x0005211b) control_definitions

0x7ebb,	// (0x0005211b) format_table_attribute

0xac3c,	// (0x00054e9c) bg_popup_preview_window_pane_g9

0x7ebb,	// (0x0005211b) format_table_data2

0x7ebb,	// (0x0005211b) format_table_data3

0x7ebb,	// (0x0005211b) format_table_data_example

0x0008,

0x7ebb,	// (0x0005211b) intro_purpose

0xf8f4,	// (0x00059b54) bg_popup_preview_window_pane_g

0x7ebb,	// (0x0005211b) texts_category

0x7ebb,	// (0x0005211b) texts_graphics

0x9456,	// (0x000536b6) text_digital

0x9465,	// (0x000536c5) text_primary

0x9474,	// (0x000536d4) text_primary_small

0x9483,	// (0x000536e3) text_secondary

0x9492,	// (0x000536f2) text_title

0xb321,	// (0x00055581) bg_passive_tab_pane_g1_cp3_srt

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp3_srt

0xb32a,	// (0x0005558a) bg_passive_tab_pane_g3_cp3_srt

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp3_srt_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp3_srt

0xb333,	// (0x00055593) tabs_4_active_pane_srt_g1

0xb33b,	// (0x0005559b) tabs_4_active_pane_srt_t1_ParamLimits

0xb33b,	// (0x0005559b) tabs_4_active_pane_srt_t1

0xb321,	// (0x00055581) bg_active_tab_pane_g1_cp3_copy1

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp3_copy1

0xb32a,	// (0x0005558a) bg_active_tab_pane_g3_cp3_copy1

0x7f9b,	// (0x000521fb) tabs_2_long_active_pane_srt_ParamLimits

0x7f9b,	// (0x000521fb) tabs_2_long_active_pane_srt

0x7f9b,	// (0x000521fb) tabs_2_long_passive_pane_srt_ParamLimits

0x7f9b,	// (0x000521fb) tabs_2_long_passive_pane_srt

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp4_srt

0xb06a,	// (0x000552ca) bg_passive_tab_pane_g1_cp4_srt

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp4_srt

0xb073,	// (0x000552d3) bg_passive_tab_pane_g3_cp4_srt

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp4_srt

0xb07c,	// (0x000552dc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb07c,	// (0x000552dc) tabs_2_long_active_pane_srt_t1

0xb06a,	// (0x000552ca) bg_active_tab_pane_g1_cp4_srt

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp4_srt

0xb073,	// (0x000552d3) bg_active_tab_pane_g3_cp4_srt

0x8216,	// (0x00052476) tabs_3_long_active_pane_srt_ParamLimits

0x8216,	// (0x00052476) tabs_3_long_active_pane_srt

0x8216,	// (0x00052476) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8216,	// (0x00052476) tabs_3_long_passive_pane_cp_srt

0x8216,	// (0x00052476) tabs_3_long_passive_pane_srt_ParamLimits

0x8216,	// (0x00052476) tabs_3_long_passive_pane_srt

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp5_srt

0x916d,	// (0x000533cd) bg_passive_tab_pane_g1_cp5_srt

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp5_srt

0x9176,	// (0x000533d6) bg_passive_tab_pane_g3_cp5_srt

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp5_srt

0xb058,	// (0x000552b8) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb058,	// (0x000552b8) tabs_3_long_active_pane_srt_t1

0x916d,	// (0x000533cd) bg_active_tab_pane_g1_cp5_srt

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp5_srt

0x9176,	// (0x000533d6) bg_active_tab_pane_g3_cp5_srt

0xb04a,	// (0x000552aa) navi_text_pane_srt_t1

0xb042,	// (0x000552a2) navi_icon_pane_srt_g1

0x9667,	// (0x000538c7) midp_editing_number_pane_srt

0x94a1,	// (0x00053701) midp_ticker_pane_srt

0x966f,	// (0x000538cf) midp_ticker_pane_srt_g1

0x9677,	// (0x000538d7) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000599d7) midp_ticker_pane_srt_g

0x967f,	// (0x000538df) midp_ticker_pane_srt_t1

0xb033,	// (0x00055293) midp_editing_number_pane_t1_copy1

0x94a9,	// (0x00053709) listscroll_midp_pane

0x94a9,	// (0x00053709) midp_form_pane

0x9519,	// (0x00053779) midp_info_popup_window_ParamLimits

0x9519,	// (0x00053779) midp_info_popup_window

0x88b3,	// (0x00052b13) bg_popup_sub_pane_cp50_ParamLimits

0x88b3,	// (0x00052b13) bg_popup_sub_pane_cp50

0xa15a,	// (0x000543ba) listscroll_midp_info_pane_ParamLimits

0xa15a,	// (0x000543ba) listscroll_midp_info_pane

0xa13a,	// (0x0005439a) listscroll_form_midp_pane_ParamLimits

0xa13a,	// (0x0005439a) listscroll_form_midp_pane

0xa146,	// (0x000543a6) scroll_bar_cp050

0xa11a,	// (0x0005437a) list_midp_pane

0xbd64,	// (0x00055fc4) signal_pane_g2_cp

0xa054,	// (0x000542b4) listscroll_midp_info_pane_t1_ParamLimits

0xa054,	// (0x000542b4) listscroll_midp_info_pane_t1

0xa06c,	// (0x000542cc) listscroll_midp_info_pane_t2_ParamLimits

0xa06c,	// (0x000542cc) listscroll_midp_info_pane_t2

0xa0aa,	// (0x0005430a) listscroll_midp_info_pane_t3_ParamLimits

0xa0aa,	// (0x0005430a) listscroll_midp_info_pane_t3

0xa0e4,	// (0x00054344) listscroll_midp_info_pane_t4_ParamLimits

0xa0e4,	// (0x00054344) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00059a8f) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00059a8f) listscroll_midp_info_pane_t

0x8977,	// (0x00052bd7) scroll_pane_cp21

0x9ff2,	// (0x00054252) form_midp_field_choice_group_pane

0x9ffb,	// (0x0005425b) form_midp_field_text_pane

0xa03a,	// (0x0005429a) form_midp_field_time_pane

0xa042,	// (0x000542a2) form_midp_gauge_slider_pane

0xa04b,	// (0x000542ab) form_midp_gauge_wait_pane

0x7ebb,	// (0x0005211b) form_midp_image_pane

0x75cf,	// (0x0005182f) list_single_midp_pane_ParamLimits

0x75cf,	// (0x0005182f) list_single_midp_pane

0x9faa,	// (0x0005420a) form_midp_field_text_pane_t1

0x9d7a,	// (0x00053fda) input_focus_pane_cp050

0x9fe1,	// (0x00054241) list_midp_form_text_pane

0x9f79,	// (0x000541d9) form_midp_field_choice_group_pane_t1

0x9f87,	// (0x000541e7) input_focus_pane_cp051

0x9f9b,	// (0x000541fb) list_midp_choice_pane

0x7ebb,	// (0x0005211b) status_idle_pane

0x9f5d,	// (0x000541bd) form_midp_field_time_pane_t1

0x7eb1,	// (0x00052111) wait_anim_pane_g2_copy1

0x9f6b,	// (0x000541cb) form_midp_field_time_pane_t2

0x0001,

0x95c7,	// (0x00053827) aid_navinavi_width_2_pane

0xf82a,	// (0x00059a8a) form_midp_field_time_pane_t

0x7ebb,	// (0x0005211b) input_focus_pane_cp052

0x7ebb,	// (0x0005211b) bg_input_focus_pane_cp040

0x9f1d,	// (0x0005417d) form_midp_gauge_slider_pane_t1

0x9f2b,	// (0x0005418b) form_midp_gauge_slider_pane_t2

0x9f39,	// (0x00054199) form_midp_gauge_slider_pane_t3

0x9f47,	// (0x000541a7) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00059a81) form_midp_gauge_slider_pane_t

0x9f55,	// (0x000541b5) form_midp_slider_pane

0x7f9b,	// (0x000521fb) bg_input_focus_pane_cp041_ParamLimits

0x7f9b,	// (0x000521fb) bg_input_focus_pane_cp041

0x9eea,	// (0x0005414a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9eea,	// (0x0005414a) form_midp_gauge_wait_pane_t1

0x9efc,	// (0x0005415c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9efc,	// (0x0005415c) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00059a7c) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00059a7c) form_midp_gauge_wait_pane_t

0x9f0e,	// (0x0005416e) form_midp_wait_pane_ParamLimits

0x9f0e,	// (0x0005416e) form_midp_wait_pane

0x9eb4,	// (0x00054114) form_midp_image_pane_g1

0x9ebd,	// (0x0005411d) form_midp_image_pane_t1

0x9ecc,	// (0x0005412c) form_midp_image_pane_t2

0x9edb,	// (0x0005413b) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00059a75) form_midp_image_pane_t

0x9eab,	// (0x0005410b) list_single_midp_pane_g1

0x75c0,	// (0x00051820) list_single_midp_pane_t1

0x9e83,	// (0x000540e3) list_midp_form_item_pane_ParamLimits

0x9e83,	// (0x000540e3) list_midp_form_item_pane

0x956f,	// (0x000537cf) list_midp_form_item_pane_t1

0x957e,	// (0x000537de) midp_ticker_pane_g1

0x958a,	// (0x000537ea) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000599bd) midp_ticker_pane_g

0x9596,	// (0x000537f6) midp_ticker_pane_t1

0xb284,	// (0x000554e4) midp_editing_number_pane_t1

0xb262,	// (0x000554c2) midp_editing_number_pane

0xb271,	// (0x000554d1) midp_ticker_pane

0xb023,	// (0x00055283) ai_message_heading_pane

0x7ebb,	// (0x0005211b) bg_popup_window_pane_cp14

0xb02b,	// (0x0005528b) listscroll_ai_message_pane

0xafad,	// (0x0005520d) ai_message_heading_pane_g1_ParamLimits

0xafad,	// (0x0005520d) ai_message_heading_pane_g1

0xafb9,	// (0x00055219) ai_message_heading_pane_g2_ParamLimits

0xafb9,	// (0x00055219) ai_message_heading_pane_g2

0xafc5,	// (0x00055225) ai_message_heading_pane_g3_ParamLimits

0xafc5,	// (0x00055225) ai_message_heading_pane_g3

0xafd1,	// (0x00055231) ai_message_heading_pane_g4_ParamLimits

0xafd1,	// (0x00055231) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00059bb6) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00059bb6) ai_message_heading_pane_g

0xafdd,	// (0x0005523d) ai_message_heading_pane_t1_ParamLimits

0xafdd,	// (0x0005523d) ai_message_heading_pane_t1

0xaff7,	// (0x00055257) ai_message_heading_pane_t2_ParamLimits

0xaff7,	// (0x00055257) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00059bbf) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00059bbf) ai_message_heading_pane_t

0xb009,	// (0x00055269) bg_popup_heading_pane_cp1_ParamLimits

0xb009,	// (0x00055269) bg_popup_heading_pane_cp1

0xaf9b,	// (0x000551fb) list_ai_message_pane_ParamLimits

0xaf9b,	// (0x000551fb) list_ai_message_pane

0x8977,	// (0x00052bd7) scroll_pane_cp10

0xaf37,	// (0x00055197) list_ai_message_pane_g1

0xaf3f,	// (0x0005519f) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00059b93) list_ai_message_pane_g

0xaf47,	// (0x000551a7) list_ai_message_pane_t1_ParamLimits

0xaf47,	// (0x000551a7) list_ai_message_pane_t1

0xaf5c,	// (0x000551bc) list_ai_message_pane_t2_ParamLimits

0xaf5c,	// (0x000551bc) list_ai_message_pane_t2

0xaf71,	// (0x000551d1) list_ai_message_pane_t3_ParamLimits

0xaf71,	// (0x000551d1) list_ai_message_pane_t3

0xaf86,	// (0x000551e6) list_ai_message_pane_t4_ParamLimits

0xaf86,	// (0x000551e6) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00059b98) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00059b98) list_ai_message_pane_t

0xaf22,	// (0x00055182) cell_ai_soft_ind_pane_ParamLimits

0xaf22,	// (0x00055182) cell_ai_soft_ind_pane

0x95a8,	// (0x00053808) cell_ai_soft_ind_pane_g1_ParamLimits

0x95a8,	// (0x00053808) cell_ai_soft_ind_pane_g1

0x7ebb,	// (0x0005211b) grid_highlight_cp1

0x95b5,	// (0x00053815) text_secondary_cp56_ParamLimits

0x95b5,	// (0x00053815) text_secondary_cp56

0xaef7,	// (0x00055157) example_general_pane_ParamLimits

0xaef7,	// (0x00055157) example_general_pane

0xaf03,	// (0x00055163) example_parent_pane_g1_ParamLimits

0xaf03,	// (0x00055163) example_parent_pane_g1

0xaf0f,	// (0x0005516f) example_parent_pane_t1_ParamLimits

0xaf0f,	// (0x0005516f) example_parent_pane_t1

0x5d97,	// (0x0004fff7) popup_preview_text_window_ParamLimits

0x5d97,	// (0x0004fff7) popup_preview_text_window

0x93d2,	// (0x00053632) list_single_pane_cp2_g4

0x82cc,	// (0x0005252c) bg_popup_preview_window_pane_ParamLimits

0x82cc,	// (0x0005252c) bg_popup_preview_window_pane

0xac44,	// (0x00054ea4) popup_preview_text_window_t1_ParamLimits

0xac44,	// (0x00054ea4) popup_preview_text_window_t1

0xac62,	// (0x00054ec2) popup_preview_text_window_t2_ParamLimits

0xac62,	// (0x00054ec2) popup_preview_text_window_t2

0xacab,	// (0x00054f0b) popup_preview_text_window_t3_ParamLimits

0xacab,	// (0x00054f0b) popup_preview_text_window_t3

0xacf0,	// (0x00054f50) popup_preview_text_window_t4_ParamLimits

0xacf0,	// (0x00054f50) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00059b67) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00059b67) popup_preview_text_window_t

0xad6e,	// (0x00054fce) scroll_pane_cp11

0x9d06,	// (0x00053f66) bg_popup_preview_window_pane_g1

0xac04,	// (0x00054e64) bg_popup_preview_window_pane_g2

0xac0c,	// (0x00054e6c) bg_popup_preview_window_pane_g3

0xac14,	// (0x00054e74) bg_popup_preview_window_pane_g4

0xac1c,	// (0x00054e7c) bg_popup_preview_window_pane_g5

0xac24,	// (0x00054e84) bg_popup_preview_window_pane_g6

0xac2c,	// (0x00054e8c) bg_popup_preview_window_pane_g7

0xac34,	// (0x00054e94) bg_popup_preview_window_pane_g8

0x4823,	// (0x0004ea83) aid_popup_width_pane

0x5d75,	// (0x0004ffd5) popup_midp_note_alarm_window_ParamLimits

0x5d75,	// (0x0004ffd5) popup_midp_note_alarm_window

0x880a,	// (0x00052a6a) data_form_pane_ParamLimits

0x51d6,	// (0x0004f436) form_field_data_pane_g1

0x51e0,	// (0x0004f440) form_field_data_pane_t1_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_ParamLimits

0x51f8,	// (0x0004f458) data_form_wide_pane_ParamLimits

0x5209,	// (0x0004f469) form_field_data_wide_pane_g1

0x5215,	// (0x0004f475) form_field_data_wide_pane_t1_ParamLimits

0x857b,	// (0x000527db) input_focus_pane_cp6_ParamLimits

0x8924,	// (0x00052b84) input_popup_find_pane_g1_ParamLimits

0x8924,	// (0x00052b84) input_popup_find_pane_g1

0x548b,	// (0x0004f6eb) aid_navi_side_left_pane

0x54a0,	// (0x0004f700) aid_navi_side_right_pane

0xa61d,	// (0x0005487d) bg_popup_window_pane_cp30_ParamLimits

0xa61d,	// (0x0005487d) bg_popup_window_pane_cp30

0xa697,	// (0x000548f7) popup_midp_note_alarm_window_g1_ParamLimits

0xa697,	// (0x000548f7) popup_midp_note_alarm_window_g1

0xa6c7,	// (0x00054927) popup_midp_note_alarm_window_t1_ParamLimits

0xa6c7,	// (0x00054927) popup_midp_note_alarm_window_t1

0xa768,	// (0x000549c8) popup_midp_note_alarm_window_t2_ParamLimits

0xa768,	// (0x000549c8) popup_midp_note_alarm_window_t2

0xa816,	// (0x00054a76) popup_midp_note_alarm_window_t3_ParamLimits

0xa816,	// (0x00054a76) popup_midp_note_alarm_window_t3

0xa848,	// (0x00054aa8) popup_midp_note_alarm_window_t4_ParamLimits

0xa848,	// (0x00054aa8) popup_midp_note_alarm_window_t4

0xa86e,	// (0x00054ace) popup_midp_note_alarm_window_t5_ParamLimits

0xa86e,	// (0x00054ace) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00059b04) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00059b04) popup_midp_note_alarm_window_t

0xa91a,	// (0x00054b7a) wait_bar_pane_cp1_ParamLimits

0xa91a,	// (0x00054b7a) wait_bar_pane_cp1

0x7ebb,	// (0x0005211b) wait_anim_pane_copy1

0x7ebb,	// (0x0005211b) wait_border_pane_copy1

0xa303,	// (0x00054563) wait_border_pane_g1_copy1

0x522f,	// (0x0004f48f) form_field_popup_pane_g1

0x5237,	// (0x0004f497) form_field_popup_pane_t1_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_cp7_ParamLimits

0x8838,	// (0x00052a98) list_form_pane_ParamLimits

0x524f,	// (0x0004f4af) form_field_popup_wide_pane_g1

0x5257,	// (0x0004f4b7) form_field_popup_wide_pane_t1_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_cp8_ParamLimits

0x8844,	// (0x00052aa4) list_form_wide_pane_ParamLimits

0xb3b5,	// (0x00055615) aid_size_cell_graphic_pane

0x52e1,	// (0x0004f541) data_form_pane_t1_ParamLimits

0x7621,	// (0x00051881) data_form_wide_pane_t1_ParamLimits

0x98c7,	// (0x00053b27) bg_status_flat_pane

0x7efb,	// (0x0005215b) title_pane_t1_ParamLimits

0x7f63,	// (0x000521c3) title_pane_t2_ParamLimits

0x7f89,	// (0x000521e9) title_pane_t3_ParamLimits

0xf557,	// (0x000597b7) title_pane_t_ParamLimits

0x8dfa,	// (0x0005305a) level_1_signal_ParamLimits

0x8e0c,	// (0x0005306c) level_2_signal_ParamLimits

0x8e1f,	// (0x0005307f) level_3_signal_ParamLimits

0x8e32,	// (0x00053092) level_4_signal_ParamLimits

0x8e45,	// (0x000530a5) level_5_signal_ParamLimits

0x8e58,	// (0x000530b8) level_6_signal_ParamLimits

0x8e6b,	// (0x000530cb) level_7_signal_ParamLimits

0x8dfa,	// (0x0005305a) level_1_battery_ParamLimits

0x8e0c,	// (0x0005306c) level_2_battery_ParamLimits

0x8e1f,	// (0x0005307f) level_3_battery_ParamLimits

0x8e32,	// (0x00053092) level_4_battery_ParamLimits

0x8e45,	// (0x000530a5) level_5_battery_ParamLimits

0x8e58,	// (0x000530b8) level_6_battery_ParamLimits

0x8e6b,	// (0x000530cb) level_7_battery_ParamLimits

0xa522,	// (0x00054782) bg_status_flat_pane_g1

0xa52a,	// (0x0005478a) bg_status_flat_pane_g2

0xa532,	// (0x00054792) bg_status_flat_pane_g3

0xa53a,	// (0x0005479a) bg_status_flat_pane_g4

0xa542,	// (0x000547a2) bg_status_flat_pane_g5

0xa54a,	// (0x000547aa) bg_status_flat_pane_g6

0xa552,	// (0x000547b2) bg_status_flat_pane_g7

0x7fb1,	// (0x00052211) tabs_3_active_pane_t1_ParamLimits

0x7fb1,	// (0x00052211) tabs_3_passive_pane_t1_ParamLimits

0x7fcb,	// (0x0005222b) tabs_4_active_pane_t1_ParamLimits

0x7fcb,	// (0x0005222b) tabs_4_1_passive_pane_t1_ParamLimits

0x89b8,	// (0x00052c18) tabs_2_active_pane_t1_ParamLimits

0x89b8,	// (0x00052c18) tabs_2_passive_pane_t1_ParamLimits

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp4_ParamLimits

0x89d8,	// (0x00052c38) tabs_2_long_active_pane_t1_ParamLimits

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp4_ParamLimits

0x609a,	// (0x000502fa) list_single_midp_graphic_pane_t1_ParamLimits

0x89ca,	// (0x00052c2a) bg_active_tab_pane_cp5_ParamLimits

0x89f7,	// (0x00052c57) tabs_3_long_active_pane_t1_ParamLimits

0x89eb,	// (0x00052c4b) bg_passive_tab_pane_cp5_ParamLimits

0x609a,	// (0x000502fa) list_single_midp_graphic_pane_t1

0x98c7,	// (0x00053b27) bg_status_flat_pane_ParamLimits

0x9996,	// (0x00053bf6) indicator_pane_cp2_ParamLimits

0x9996,	// (0x00053bf6) indicator_pane_cp2

0x9ac1,	// (0x00053d21) navi_pane_srt_ParamLimits

0x9ac1,	// (0x00053d21) navi_pane_srt

0x9ae5,	// (0x00053d45) popup_clock_digital_analogue_window_cp1

0x8078,	// (0x000522d8) indicator_pane_t1

0x94a1,	// (0x00053701) copy_highlight_pane

0x94a1,	// (0x00053701) cursor_graphics_pane

0x94a1,	// (0x00053701) graphic_within_text_pane

0x94a1,	// (0x00053701) link_highlight_pane

0xad31,	// (0x00054f91) popup_preview_text_window_t5_ParamLimits

0xad31,	// (0x00054f91) popup_preview_text_window_t5

0x95cf,	// (0x0005382f) cursor_digital_pane

0x95cf,	// (0x0005382f) cursor_primary_pane

0x95e0,	// (0x00053840) cursor_primary_small_pane

0x95e8,	// (0x00053848) cursor_secondary_pane

0x95f0,	// (0x00053850) cursor_title_pane

0x95cf,	// (0x0005382f) link_highlight_digital_pane

0x95d7,	// (0x00053837) link_highlight_primary_pane

0x95e0,	// (0x00053840) link_highlight_primary_small_pane

0x95e8,	// (0x00053848) link_highlight_secondary_pane

0x95f0,	// (0x00053850) link_highlight_title_pane

0x95cf,	// (0x0005382f) copy_highlight_digital_pane

0x95cf,	// (0x0005382f) copy_highlight_primary_pane

0x95e0,	// (0x00053840) copy_highlight_primary_small_pane

0x95e8,	// (0x00053848) copy_highlight_secondary_pane

0x95f0,	// (0x00053850) copy_highlight_title_pane

0x95e8,	// (0x00053848) graphic_text_digital_pane

0xa5c0,	// (0x00054820) graphic_text_primary_pane

0xa5c9,	// (0x00054829) graphic_text_primary_small_pane

0x95e0,	// (0x00053840) graphic_text_secondary_pane

0x95cf,	// (0x0005382f) graphic_text_title_pane

0x95f8,	// (0x00053858) cursor_primary_pane_g1

0xa5b2,	// (0x00054812) cursor_text_primary_t1

0xa59a,	// (0x000547fa) cursor_primary_small_pane_g1

0xa5a4,	// (0x00054804) cursor_text_primary_small_t1

0xa582,	// (0x000547e2) cursor_primary_small_pane_g1_copy1

0xa58c,	// (0x000547ec) cursor_text_primary_small_t1_copy1

0xa56a,	// (0x000547ca) cursor_text_title_t1

0xa578,	// (0x000547d8) cursor_title_pane_g1

0x95f8,	// (0x00053858) cursor_digital_pane_g1

0x9602,	// (0x00053862) cursor_text_digital_t1

0x9627,	// (0x00053887) link_highlight_primary_pane_g1

0xa513,	// (0x00054773) link_highlight_primary_pane_t1

0x9610,	// (0x00053870) link_highlight_primary_small_pane_g1

0x9618,	// (0x00053878) link_highlight_primary_small_pane_t1

0x9627,	// (0x00053887) link_highlight_secondary_pane_g1

0x962f,	// (0x0005388f) link_highlight_secondary_pane_t1

0xa487,	// (0x000546e7) link_highlight_title_pane_g1

0xa48f,	// (0x000546ef) link_highlight_title_pane_t1

0xa470,	// (0x000546d0) link_highlight_digital_pane_g1

0xa478,	// (0x000546d8) link_highlight_digital_pane_t1

0xa348,	// (0x000545a8) copy_highlight_primary_pane_g1

0xa350,	// (0x000545b0) copy_highlight_primary_pane_t1

0xa322,	// (0x00054582) copy_highlight_primary_small_pane_g1

0xa339,	// (0x00054599) copy_highlight_primary_small_pane_t1

0x963e,	// (0x0005389e) copy_highlight_secondary_pane_g1

0x9646,	// (0x000538a6) copy_highlight_secondary_pane_t1

0xa322,	// (0x00054582) copy_highlight_title_pane_g1

0xa32a,	// (0x0005458a) copy_highlight_title_pane_t1

0xa348,	// (0x000545a8) copy_highlight_digital_pane_g1

0xb583,	// (0x000557e3) copy_highlight_digital_pane_t1

0xb4d7,	// (0x00055737) graphic_text_primary_pane_g1

0xb567,	// (0x000557c7) graphic_text_primary_pane_t1

0xb575,	// (0x000557d5) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00059c33) graphic_text_primary_pane_t

0xb543,	// (0x000557a3) graphic_text_primary_small_pane_g1

0xb54b,	// (0x000557ab) graphic_text_primary_small_pane_t1

0xb559,	// (0x000557b9) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00059c2e) graphic_text_primary_small_pane_t

0xb51f,	// (0x0005577f) graphic_text_secondary_pane_g1

0xb527,	// (0x00055787) graphic_text_secondary_pane_t1

0xb535,	// (0x00055795) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00059c29) graphic_text_secondary_pane_t

0xb4fb,	// (0x0005575b) graphic_text_title_pane_g1

0xb503,	// (0x00055763) graphic_text_title_pane_t1

0xb511,	// (0x00055771) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00059c24) graphic_text_title_pane_t

0xb4d7,	// (0x00055737) graphic_text_digital_pane_g1

0xb4df,	// (0x0005573f) graphic_text_digital_pane_t1

0xb4ed,	// (0x0005574d) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00059c1f) graphic_text_digital_pane_t

0x7f9b,	// (0x000521fb) navi_icon_pane_srt_ParamLimits

0x7f9b,	// (0x000521fb) navi_icon_pane_srt

0x7ebb,	// (0x0005211b) navi_midp_pane_srt

0x7ebb,	// (0x0005211b) navi_navi_pane_srt

0x7f9b,	// (0x000521fb) navi_text_pane_srt_ParamLimits

0x7f9b,	// (0x000521fb) navi_text_pane_srt

0xb4a2,	// (0x00055702) navi_navi_icon_text_pane_srt

0xb4aa,	// (0x0005570a) navi_navi_pane_srt_g1_ParamLimits

0xb4aa,	// (0x0005570a) navi_navi_pane_srt_g1

0xb4bc,	// (0x0005571c) navi_navi_pane_srt_g2_ParamLimits

0xb4bc,	// (0x0005571c) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00059c1a) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00059c1a) navi_navi_pane_srt_g

0xb4ce,	// (0x0005572e) navi_navi_tabs_pane_srt

0xb4a2,	// (0x00055702) navi_navi_text_pane_srt

0xb4a2,	// (0x00055702) navi_navi_volume_pane_srt

0xb493,	// (0x000556f3) navi_navi_text_pane_srt_t1

0x6444,	// (0x000506a4) navi_navi_volume_pane_srt_g1

0x644c,	// (0x000506ac) volume_small_pane_srt_ParamLimits

0x644c,	// (0x000506ac) volume_small_pane_srt

0x57d9,	// (0x0004fa39) volume_small_pane_srt_g1_ParamLimits

0x57d9,	// (0x0004fa39) volume_small_pane_srt_g1

0x57e9,	// (0x0004fa49) volume_small_pane_srt_g2_ParamLimits

0x57e9,	// (0x0004fa49) volume_small_pane_srt_g2

0x57fa,	// (0x0004fa5a) volume_small_pane_srt_g3_ParamLimits

0x57fa,	// (0x0004fa5a) volume_small_pane_srt_g3

0x580b,	// (0x0004fa6b) volume_small_pane_srt_g4_ParamLimits

0x580b,	// (0x0004fa6b) volume_small_pane_srt_g4

0x581c,	// (0x0004fa7c) volume_small_pane_srt_g5_ParamLimits

0x581c,	// (0x0004fa7c) volume_small_pane_srt_g5

0x582d,	// (0x0004fa8d) volume_small_pane_srt_g6_ParamLimits

0x582d,	// (0x0004fa8d) volume_small_pane_srt_g6

0x583e,	// (0x0004fa9e) volume_small_pane_srt_g7_ParamLimits

0x583e,	// (0x0004fa9e) volume_small_pane_srt_g7

0x584f,	// (0x0004faaf) volume_small_pane_srt_g8_ParamLimits

0x584f,	// (0x0004faaf) volume_small_pane_srt_g8

0x5860,	// (0x0004fac0) volume_small_pane_srt_g9_ParamLimits

0x5860,	// (0x0004fac0) volume_small_pane_srt_g9

0x5871,	// (0x0004fad1) volume_small_pane_srt_g10_ParamLimits

0x5871,	// (0x0004fad1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000599c2) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000599c2) volume_small_pane_srt_g

0x8375,	// (0x000525d5) query_popup_data_pane_cp2

0xb479,	// (0x000556d9) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb479,	// (0x000556d9) navi_navi_icon_text_pane_srt_t1

0xa5c0,	// (0x00054820) navi_tabs_2_long_pane_srt

0xa5c0,	// (0x00054820) navi_tabs_2_pane_srt

0xa5c0,	// (0x00054820) navi_tabs_3_long_pane_srt

0xa5c0,	// (0x00054820) navi_tabs_3_pane_srt

0xa5c0,	// (0x00054820) navi_tabs_4_pane_srt

0x6424,	// (0x00050684) tabs_2_active_pane_srt_ParamLimits

0x6424,	// (0x00050684) tabs_2_active_pane_srt

0x6434,	// (0x00050694) tabs_2_passive_pane_srt_ParamLimits

0x6434,	// (0x00050694) tabs_2_passive_pane_srt

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp1_srt

0xb445,	// (0x000556a5) bg_passive_tab_pane_g1_cp1_srt

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp1_srt

0xb44e,	// (0x000556ae) bg_passive_tab_pane_g3_cp1_srt

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp1_srt_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp1_srt

0xb457,	// (0x000556b7) tabs_2_active_pane_srt_g1

0xb45f,	// (0x000556bf) tabs_2_active_pane_srt_t1_ParamLimits

0xb45f,	// (0x000556bf) tabs_2_active_pane_srt_t1

0xb445,	// (0x000556a5) bg_active_tab_pane_g1_cp1_srt

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp1_srt

0xb44e,	// (0x000556ae) bg_active_tab_pane_g3_cp1_srt

0x63f1,	// (0x00050651) tabs_3_active_pane_srt_ParamLimits

0x63f1,	// (0x00050651) tabs_3_active_pane_srt

0x6402,	// (0x00050662) tabs_3_passive_pane_cp_srt_ParamLimits

0x6402,	// (0x00050662) tabs_3_passive_pane_cp_srt

0x6413,	// (0x00050673) tabs_3_passive_pane_srt_ParamLimits

0x6413,	// (0x00050673) tabs_3_passive_pane_srt

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97f0,	// (0x00053a50) bg_passive_tab_pane_cp2_srt

0x9655,	// (0x000538b5) bg_passive_tab_pane_g1_cp2_srt

0x90e3,	// (0x00053343) bg_passive_tab_pane_g2_cp2_srt

0x965e,	// (0x000538be) bg_passive_tab_pane_g3_cp2_srt

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp2_srt_ParamLimits

0x7f9b,	// (0x000521fb) bg_active_tab_pane_cp2_srt

0xb42b,	// (0x0005568b) tabs_3_active_pane_srt_g1

0xb433,	// (0x00055693) tabs_3_active_pane_srt_t1_ParamLimits

0xb433,	// (0x00055693) tabs_3_active_pane_srt_t1

0x9655,	// (0x000538b5) bg_active_tab_pane_g1_cp2_srt

0x90e3,	// (0x00053343) bg_active_tab_pane_g2_cp2_srt

0x965e,	// (0x000538be) bg_active_tab_pane_g3_cp2_srt

0x63a9,	// (0x00050609) tabs_4_active_pane_srt_ParamLimits

0x63a9,	// (0x00050609) tabs_4_active_pane_srt

0x63bb,	// (0x0005061b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63bb,	// (0x0005061b) tabs_4_passive_pane_cp2_srt

0x59e0,	// (0x0004fc40) aid_size_cell_toolbar

0x89eb,	// (0x00052c4b) main_idle_act_pane_ParamLimits

0x5bab,	// (0x0004fe0b) popup_large_graphic_colour_window_ParamLimits

0x5f12,	// (0x00050172) popup_toolbar_window_ParamLimits

0x5f12,	// (0x00050172) popup_toolbar_window

0xb293,	// (0x000554f3) list_single_graphic_2heading_pane_ParamLimits

0xb293,	// (0x000554f3) list_single_graphic_2heading_pane

0x8ba7,	// (0x00052e07) aid_size_cell_apps_grid_lsc_pane

0x8bb9,	// (0x00052e19) aid_size_cell_apps_grid_prt_pane

0x97f0,	// (0x00053a50) bg_wml_button_pane_cp1_ParamLimits

0x97f0,	// (0x00053a50) bg_wml_button_pane_cp1

0x9faa,	// (0x0005420a) form_midp_field_text_pane_t1_ParamLimits

0x9d7a,	// (0x00053fda) input_focus_pane_cp050_ParamLimits

0x9fe1,	// (0x00054241) list_midp_form_text_pane_ParamLimits

0x9f87,	// (0x000541e7) input_focus_pane_cp051_ParamLimits

0x9f9b,	// (0x000541fb) list_midp_choice_pane_ParamLimits

0x9e33,	// (0x00054093) list_single_2graphic_pane_cp3_ParamLimits

0x9e33,	// (0x00054093) list_single_2graphic_pane_cp3

0x9e54,	// (0x000540b4) list_single_midp_graphic_pane_ParamLimits

0x9e54,	// (0x000540b4) list_single_midp_graphic_pane

0x47ab,	// (0x0004ea0b) list_single_graphic_2heading_pane_g1_ParamLimits

0x47ab,	// (0x0004ea0b) list_single_graphic_2heading_pane_g1

0x47b7,	// (0x0004ea17) list_single_graphic_2heading_pane_g4_ParamLimits

0x47b7,	// (0x0004ea17) list_single_graphic_2heading_pane_g4

0x47c3,	// (0x0004ea23) list_single_graphic_2heading_pane_g5_ParamLimits

0x47c3,	// (0x0004ea23) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00059a15) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00059a15) list_single_graphic_2heading_pane_g

0x47cf,	// (0x0004ea2f) list_single_graphic_2heading_pane_t1_ParamLimits

0x47cf,	// (0x0004ea2f) list_single_graphic_2heading_pane_t1

0x47e3,	// (0x0004ea43) list_single_graphic_2heading_pane_t2_ParamLimits

0x47e3,	// (0x0004ea43) list_single_graphic_2heading_pane_t2

0x47ff,	// (0x0004ea5f) list_single_graphic_2heading_pane_t3_ParamLimits

0x47ff,	// (0x0004ea5f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00059a1c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00059a1c) list_single_graphic_2heading_pane_t

0x9c44,	// (0x00053ea4) bg_popup_sub_pane_cp2

0x9c6e,	// (0x00053ece) grid_toobar_pane

0x5fbf,	// (0x0005021f) cell_toolbar_pane_ParamLimits

0x5fbf,	// (0x0005021f) cell_toolbar_pane

0x9caa,	// (0x00053f0a) cell_toolbar_pane_g1_ParamLimits

0x9caa,	// (0x00053f0a) cell_toolbar_pane_g1

0x9cbe,	// (0x00053f1e) cell_toolbar_pane_g2_ParamLimits

0x9cbe,	// (0x00053f1e) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00059a2a) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00059a2a) cell_toolbar_pane_g

0x9ce0,	// (0x00053f40) grid_highlight_pane_cp2_ParamLimits

0x9ce0,	// (0x00053f40) grid_highlight_pane_cp2

0x9cfa,	// (0x00053f5a) toolbar_button_pane

0x9d06,	// (0x00053f66) toolbar_button_pane_g1

0x9d0e,	// (0x00053f6e) toolbar_button_pane_g2

0x9d16,	// (0x00053f76) toolbar_button_pane_g3

0x9d1e,	// (0x00053f7e) toolbar_button_pane_g4

0x9d26,	// (0x00053f86) toolbar_button_pane_g5

0x9d2e,	// (0x00053f8e) toolbar_button_pane_g6

0x9d36,	// (0x00053f96) toolbar_button_pane_g7

0x9d3e,	// (0x00053f9e) toolbar_button_pane_g8

0x9d46,	// (0x00053fa6) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00059a2f) toolbar_button_pane_g

0x6019,	// (0x00050279) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6019,	// (0x00050279) list_single_2graphic_pane_g1_cp3

0x6025,	// (0x00050285) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6025,	// (0x00050285) list_single_2graphic_pane_g2_cp3

0x6036,	// (0x00050296) list_single_2graphic_pane_g3_cp3

0x603e,	// (0x0005029e) list_single_2graphic_pane_g4_cp3_ParamLimits

0x603e,	// (0x0005029e) list_single_2graphic_pane_g4_cp3

0x604a,	// (0x000502aa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x604a,	// (0x000502aa) list_single_2graphic_pane_t1_cp3

0x608e,	// (0x000502ee) list_single_midp_graphic_pane_g2_ParamLimits

0x608e,	// (0x000502ee) list_single_midp_graphic_pane_g2

0x47a3,	// (0x0004ea03) aid_zoom_text_primary

0x59e8,	// (0x0004fc48) aid_zoom_text_secondary

0x970f,	// (0x0005396f) status_small_pane_g7_ParamLimits

0x970f,	// (0x0005396f) status_small_pane_g7

0x9732,	// (0x00053992) status_small_pane_t1_ParamLimits

0x7ed2,	// (0x00052132) title_pane_g2

0x0003,

0xf54e,	// (0x000597ae) title_pane_g

0x8419,	// (0x00052679) aid_size_cell_colour_1_pane_ParamLimits

0x8419,	// (0x00052679) aid_size_cell_colour_1_pane

0x842d,	// (0x0005268d) aid_size_cell_colour_2_pane_ParamLimits

0x842d,	// (0x0005268d) aid_size_cell_colour_2_pane

0x8441,	// (0x000526a1) aid_size_cell_colour_3_pane_ParamLimits

0x8441,	// (0x000526a1) aid_size_cell_colour_3_pane

0x8455,	// (0x000526b5) aid_size_cell_colour_4_pane_ParamLimits

0x8455,	// (0x000526b5) aid_size_cell_colour_4_pane

0x53c8,	// (0x0004f628) title_pane_stacon_g1_ParamLimits

0x53c8,	// (0x0004f628) title_pane_stacon_g1

0xa3a7,	// (0x00054607) popup_note_wait_window_g3_ParamLimits

0xa3a7,	// (0x00054607) popup_note_wait_window_g3

0xa41d,	// (0x0005467d) popup_note_wait_window_t5_ParamLimits

0xa41d,	// (0x0005467d) popup_note_wait_window_t5

0x7ebb,	// (0x0005211b) main_feb_china_hwr_fs_writing_pane

0x5a8e,	// (0x0004fcee) popup_feb_china_hwr_fs_window_ParamLimits

0x5a8e,	// (0x0004fcee) popup_feb_china_hwr_fs_window

0x60e0,	// (0x00050340) aid_size_cell_hwr_fs_ParamLimits

0x60e0,	// (0x00050340) aid_size_cell_hwr_fs

0x9d7a,	// (0x00053fda) bg_popup_sub_pane_cp3_ParamLimits

0x9d7a,	// (0x00053fda) bg_popup_sub_pane_cp3

0x60f5,	// (0x00050355) grid_hwr_fs_pane_ParamLimits

0x60f5,	// (0x00050355) grid_hwr_fs_pane

0x610d,	// (0x0005036d) linegrid_hwr_fs_pane_ParamLimits

0x610d,	// (0x0005036d) linegrid_hwr_fs_pane

0x611d,	// (0x0005037d) cell_hwr_fs_pane_ParamLimits

0x611d,	// (0x0005037d) cell_hwr_fs_pane

0x9d86,	// (0x00053fe6) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d86,	// (0x00053fe6) linegrid_hwr_fs_pane_g1

0x9d92,	// (0x00053ff2) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d92,	// (0x00053ff2) linegrid_hwr_fs_pane_g2

0x9da4,	// (0x00054004) linegrid_hwr_fs_pane_g3_ParamLimits

0x9da4,	// (0x00054004) linegrid_hwr_fs_pane_g3

0x613f,	// (0x0005039f) linegrid_hwr_fs_pane_g4_ParamLimits

0x613f,	// (0x0005039f) linegrid_hwr_fs_pane_g4

0x6159,	// (0x000503b9) linegrid_hwr_fs_pane_g5_ParamLimits

0x6159,	// (0x000503b9) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00059a5a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00059a5a) linegrid_hwr_fs_pane_g

0x9db0,	// (0x00054010) cell_hwr_fs_pane_g1_ParamLimits

0x9db0,	// (0x00054010) cell_hwr_fs_pane_g1

0x9b7b,	// (0x00053ddb) cell_hwr_fs_pane_g2_ParamLimits

0x9b7b,	// (0x00053ddb) cell_hwr_fs_pane_g2

0x9dc6,	// (0x00054026) cell_hwr_fs_pane_g3_ParamLimits

0x9dc6,	// (0x00054026) cell_hwr_fs_pane_g3

0x9dd3,	// (0x00054033) cell_hwr_fs_pane_g4_ParamLimits

0x9dd3,	// (0x00054033) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00059a65) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00059a65) cell_hwr_fs_pane_g

0x616f,	// (0x000503cf) cell_hwr_fs_pane_t1

0x7ebb,	// (0x0005211b) grid_highlight_pane_cp6

0x7ebb,	// (0x0005211b) main_idle_act2_pane

0x895e,	// (0x00052bbe) aid_inside_area_popup_secondary

0xaa54,	// (0x00054cb4) aid_inside_area_window_primary_ParamLimits

0xaa54,	// (0x00054cb4) aid_inside_area_window_primary

0xb592,	// (0x000557f2) ai2_news_ticker_pane

0xb59a,	// (0x000557fa) aid_size_cell_ai1_link_ParamLimits

0xb59a,	// (0x000557fa) aid_size_cell_ai1_link

0xb5b4,	// (0x00055814) popup_ai2_data_window_ParamLimits

0xb5b4,	// (0x00055814) popup_ai2_data_window

0xb5ca,	// (0x0005582a) popup_ai2_link_window_ParamLimits

0xb5ca,	// (0x0005582a) popup_ai2_link_window

0x9d7a,	// (0x00053fda) bg_popup_sub_pane_cp4_ParamLimits

0x9d7a,	// (0x00053fda) bg_popup_sub_pane_cp4

0xb5de,	// (0x0005583e) grid_ai2_link_pane_ParamLimits

0xb5de,	// (0x0005583e) grid_ai2_link_pane

0xb5f5,	// (0x00055855) popup_ai2_link_window_g1_ParamLimits

0xb5f5,	// (0x00055855) popup_ai2_link_window_g1

0xb601,	// (0x00055861) popup_ai2_link_window_g2_ParamLimits

0xb601,	// (0x00055861) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00059c38) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00059c38) popup_ai2_link_window_g

0xb610,	// (0x00055870) ai2_mp_button_pane

0xb618,	// (0x00055878) ai2_mp_volume_pane

0x9f87,	// (0x000541e7) bg_popup_sub_pane_cp5_ParamLimits

0x9f87,	// (0x000541e7) bg_popup_sub_pane_cp5

0xb620,	// (0x00055880) heading_ai2_gene_pane_ParamLimits

0xb620,	// (0x00055880) heading_ai2_gene_pane

0xb62c,	// (0x0005588c) list_ai2_gene_pane_ParamLimits

0xb62c,	// (0x0005588c) list_ai2_gene_pane

0xb674,	// (0x000558d4) cell_ai2_link_pane_ParamLimits

0xb674,	// (0x000558d4) cell_ai2_link_pane

0xb68a,	// (0x000558ea) cell_ai2_link_pane_g1

0x7ebb,	// (0x0005211b) grid_highlight_pane_cp7

0x6461,	// (0x000506c1) ai2_mp_volume_pane_g1

0xb75a,	// (0x000559ba) ai2_mp_volume_pane_g2

0xb6cf,	// (0x0005592f) list_ai2_gene_pane_t1

0xb762,	// (0x000559c2) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00059c51) ai2_mp_volume_pane_g

0x6469,	// (0x000506c9) volume_small_pane_cp3

0xb76a,	// (0x000559ca) aid_size_cell_ai2_button

0xb772,	// (0x000559d2) grid_ai2_button_pane

0xb77b,	// (0x000559db) cell_ai2_button_pane_ParamLimits

0xb77b,	// (0x000559db) cell_ai2_button_pane

0x7eb1,	// (0x00052111) cell_ai2_button_pane_g1

0x7ebb,	// (0x0005211b) grid_highlight_pane_cp8

0xb71a,	// (0x0005597a) ai2_gene_pane_t1_ParamLimits

0xb71a,	// (0x0005597a) ai2_gene_pane_t1

0x59d6,	// (0x0004fc36) aid_height_parent_landscape

0xb0ca,	// (0x0005532a) aid_height_set_list

0xb0db,	// (0x0005533b) aid_size_parent

0xb3b5,	// (0x00055615) aid_size_cell_graphic_pane_ParamLimits

0xb63c,	// (0x0005589c) popup_ai2_data_window_g1_ParamLimits

0xb63c,	// (0x0005589c) popup_ai2_data_window_g1

0xb648,	// (0x000558a8) ai2_news_ticker_pane_g1

0xb650,	// (0x000558b0) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00059c3d) ai2_news_ticker_pane_g

0xb658,	// (0x000558b8) ai2_news_ticker_pane_t1

0xb666,	// (0x000558c6) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00059c42) ai2_news_ticker_pane_t

0xb693,	// (0x000558f3) heading_ai2_gene_pane_g1

0xb69b,	// (0x000558fb) heading_ai2_gene_pane_t1_ParamLimits

0xb69b,	// (0x000558fb) heading_ai2_gene_pane_t1

0xb6b0,	// (0x00055910) list_highlight_pane_cp6

0xb6b8,	// (0x00055918) ai2_gene_pane_ParamLimits

0xb6b8,	// (0x00055918) ai2_gene_pane

0xb6dd,	// (0x0005593d) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00059c47) list_ai2_gene_pane_t

0xb6eb,	// (0x0005594b) list_highlight_pane_cp8_ParamLimits

0xb6eb,	// (0x0005594b) list_highlight_pane_cp8

0xb6fc,	// (0x0005595c) ai2_gene_pane_g1_ParamLimits

0xb6fc,	// (0x0005595c) ai2_gene_pane_g1

0xb70e,	// (0x0005596e) ai2_gene_pane_g2_ParamLimits

0xb70e,	// (0x0005596e) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00059c4c) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00059c4c) ai2_gene_pane_g

0x87a0,	// (0x00052a00) scroll_pane_cp12

0x5993,	// (0x0004fbf3) control_pane_t3_ParamLimits

0x5993,	// (0x0004fbf3) control_pane_t3

0x9723,	// (0x00053983) status_small_pane_g8_ParamLimits

0x9723,	// (0x00053983) status_small_pane_g8

0x5b74,	// (0x0004fdd4) popup_find_window_ParamLimits

0x5d89,	// (0x0004ffe9) popup_note_image_window_ParamLimits

0x5fef,	// (0x0005024f) list_double2_graphic_pane_vc_g1_ParamLimits

0x5fef,	// (0x0005024f) list_double2_graphic_pane_vc_g1

0x93da,	// (0x0005363a) list_double2_graphic_pane_vc_g2_ParamLimits

0x93da,	// (0x0005363a) list_double2_graphic_pane_vc_g2

0x7560,	// (0x000517c0) list_double2_graphic_pane_vc_g3_ParamLimits

0x7560,	// (0x000517c0) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059a23) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059a23) list_double2_graphic_pane_vc_g

0x5ffb,	// (0x0005025b) list_double2_graphic_pane_vc_t1_ParamLimits

0x5ffb,	// (0x0005025b) list_double2_graphic_pane_vc_t1

0x93da,	// (0x0005363a) list_single_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_single_heading_pane_vc_g1

0x7560,	// (0x000517c0) list_single_heading_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_single_heading_pane_vc_g

0x6066,	// (0x000502c6) list_single_heading_pane_vc_t1_ParamLimits

0x6066,	// (0x000502c6) list_single_heading_pane_vc_t1

0x607c,	// (0x000502dc) list_single_heading_pane_vc_t2_ParamLimits

0x607c,	// (0x000502dc) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00059a49) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00059a49) list_single_heading_pane_vc_t

0x756c,	// (0x000517cc) list_setting_number_pane_vc_g1_ParamLimits

0x756c,	// (0x000517cc) list_setting_number_pane_vc_g1

0x7578,	// (0x000517d8) list_setting_number_pane_vc_g2_ParamLimits

0x7578,	// (0x000517d8) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059a4e) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059a4e) list_setting_number_pane_vc_g

0x60b0,	// (0x00050310) list_setting_number_pane_vc_t1_ParamLimits

0x60b0,	// (0x00050310) list_setting_number_pane_vc_t1

0x60c4,	// (0x00050324) list_setting_number_pane_vc_t2_ParamLimits

0x60c4,	// (0x00050324) list_setting_number_pane_vc_t2

0x7584,	// (0x000517e4) list_setting_number_pane_vc_t3_ParamLimits

0x7584,	// (0x000517e4) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00059a53) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00059a53) list_setting_number_pane_vc_t

0x75b0,	// (0x00051810) set_value_pane_vc_ParamLimits

0x75b0,	// (0x00051810) set_value_pane_vc

0xb293,	// (0x000554f3) list_double2_graphic_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double2_graphic_pane_vc

0x7682,	// (0x000518e2) list_double2_large_graphic_pane_vc_ParamLimits

0x7682,	// (0x000518e2) list_double2_large_graphic_pane_vc

0xb293,	// (0x000554f3) list_double2_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double2_pane_vc

0xb293,	// (0x000554f3) list_double_graphic_heading_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_graphic_heading_pane_vc

0xb293,	// (0x000554f3) list_double_graphic_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_graphic_pane_vc

0xb293,	// (0x000554f3) list_double_heading_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_heading_pane_vc

0x7693,	// (0x000518f3) list_double_large_graphic_pane_vc_ParamLimits

0x7693,	// (0x000518f3) list_double_large_graphic_pane_vc

0xb293,	// (0x000554f3) list_double_number_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_number_pane_vc

0xb293,	// (0x000554f3) list_double_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_pane_vc

0xb293,	// (0x000554f3) list_double_time_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_double_time_pane_vc

0xb293,	// (0x000554f3) list_setting_number_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_setting_number_pane_vc

0xb293,	// (0x000554f3) list_setting_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_setting_pane_vc

0xb293,	// (0x000554f3) list_single_graphic_heading_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_single_graphic_heading_pane_vc

0xb293,	// (0x000554f3) list_single_heading_pane_vc_ParamLimits

0xb293,	// (0x000554f3) list_single_heading_pane_vc

0x76af,	// (0x0005190f) list_single_number_heading_pane_vc_ParamLimits

0x76af,	// (0x0005190f) list_single_number_heading_pane_vc

0x5fef,	// (0x0005024f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5fef,	// (0x0005024f) list_double_graphic_heading_pane_vc_g1

0x93da,	// (0x0005363a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93da,	// (0x0005363a) list_double_graphic_heading_pane_vc_g2

0x7560,	// (0x000517c0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7560,	// (0x000517c0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00059a23) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059a23) list_double_graphic_heading_pane_vc_g

0x775d,	// (0x000519bd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x775d,	// (0x000519bd) list_double_graphic_heading_pane_vc_t1

0x7779,	// (0x000519d9) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7779,	// (0x000519d9) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00059c58) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00059c58) list_double_graphic_heading_pane_vc_t

0x756c,	// (0x000517cc) list_setting_pane_vc_g1_ParamLimits

0x756c,	// (0x000517cc) list_setting_pane_vc_g1

0x7578,	// (0x000517d8) list_setting_pane_vc_g2_ParamLimits

0x7578,	// (0x000517d8) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00059a4e) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00059a4e) list_setting_pane_vc_g

0x7797,	// (0x000519f7) list_setting_pane_vc_t1_ParamLimits

0x7797,	// (0x000519f7) list_setting_pane_vc_t1

0x77b3,	// (0x00051a13) list_setting_pane_vc_t2_ParamLimits

0x77b3,	// (0x00051a13) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x00059c86) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x00059c86) list_setting_pane_vc_t

0x75b0,	// (0x00051810) set_value_pane_cp_vc_ParamLimits

0x75b0,	// (0x00051810) set_value_pane_cp_vc

0x93da,	// (0x0005363a) list_single_number_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_single_number_heading_pane_vc_g1

0x7560,	// (0x000517c0) list_single_number_heading_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_single_number_heading_pane_vc_g

0x77cf,	// (0x00051a2f) list_single_number_heading_pane_vc_t1_ParamLimits

0x77cf,	// (0x00051a2f) list_single_number_heading_pane_vc_t1

0x77e5,	// (0x00051a45) list_single_number_heading_pane_vc_t2_ParamLimits

0x77e5,	// (0x00051a45) list_single_number_heading_pane_vc_t2

0x77f7,	// (0x00051a57) list_single_number_heading_pane_vc_t3_ParamLimits

0x77f7,	// (0x00051a57) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x00059c8b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x00059c8b) list_single_number_heading_pane_vc_t

0x5fef,	// (0x0005024f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5fef,	// (0x0005024f) list_single_graphic_heading_pane_vc_g1

0x93da,	// (0x0005363a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93da,	// (0x0005363a) list_single_graphic_heading_pane_vc_g4

0x7560,	// (0x000517c0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7560,	// (0x000517c0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00059a23) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00059a23) list_single_graphic_heading_pane_vc_g

0x77cf,	// (0x00051a2f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x77cf,	// (0x00051a2f) list_single_graphic_heading_pane_vc_t1

0x7809,	// (0x00051a69) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7809,	// (0x00051a69) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x00059c92) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00059c92) list_single_graphic_heading_pane_vc_t

0x93da,	// (0x0005363a) list_double2_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_double2_pane_vc_g1

0x7560,	// (0x000517c0) list_double2_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_double2_pane_vc_g

0x781b,	// (0x00051a7b) list_double2_pane_vc_t1_ParamLimits

0x781b,	// (0x00051a7b) list_double2_pane_vc_t1

0x7831,	// (0x00051a91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7831,	// (0x00051a91) list_double2_large_graphic_pane_vc_g1

0x783d,	// (0x00051a9d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x783d,	// (0x00051a9d) list_double2_large_graphic_pane_vc_g2

0x7849,	// (0x00051aa9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x7849,	// (0x00051aa9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x00059c97) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x00059c97) list_double2_large_graphic_pane_vc_g

0x7855,	// (0x00051ab5) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7855,	// (0x00051ab5) list_double2_large_graphic_pane_vc_t1

0x786b,	// (0x00051acb) list_double_time_pane_vc_g1_ParamLimits

0x786b,	// (0x00051acb) list_double_time_pane_vc_g1

0x7877,	// (0x00051ad7) list_double_time_pane_vc_g2_ParamLimits

0x7877,	// (0x00051ad7) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x00059c9e) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x00059c9e) list_double_time_pane_vc_g

0x7883,	// (0x00051ae3) list_double_time_pane_vc_t1_ParamLimits

0x7883,	// (0x00051ae3) list_double_time_pane_vc_t1

0x78a7,	// (0x00051b07) list_double_time_pane_vc_t2_ParamLimits

0x78a7,	// (0x00051b07) list_double_time_pane_vc_t2

0x78f6,	// (0x00051b56) list_double_time_pane_vc_t3_ParamLimits

0x78f6,	// (0x00051b56) list_double_time_pane_vc_t3

0x7908,	// (0x00051b68) list_double_time_pane_vc_t4_ParamLimits

0x7908,	// (0x00051b68) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x00059ca3) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x00059ca3) list_double_time_pane_vc_t

0x93da,	// (0x0005363a) list_double_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_double_pane_vc_g1

0x7560,	// (0x000517c0) list_double_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_double_pane_vc_g

0x791c,	// (0x00051b7c) list_double_pane_vc_t1_ParamLimits

0x791c,	// (0x00051b7c) list_double_pane_vc_t1

0x7930,	// (0x00051b90) list_double_pane_vc_t2_ParamLimits

0x7930,	// (0x00051b90) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x00059cac) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x00059cac) list_double_pane_vc_t

0x93da,	// (0x0005363a) list_double_number_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_double_number_pane_vc_g1

0x7560,	// (0x000517c0) list_double_number_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_double_number_pane_vc_g

0x7948,	// (0x00051ba8) list_double_number_pane_vc_t1_ParamLimits

0x7948,	// (0x00051ba8) list_double_number_pane_vc_t1

0x795a,	// (0x00051bba) list_double_number_pane_vc_t2_ParamLimits

0x795a,	// (0x00051bba) list_double_number_pane_vc_t2

0x796e,	// (0x00051bce) list_double_number_pane_vc_t3_ParamLimits

0x796e,	// (0x00051bce) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x00059cb1) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x00059cb1) list_double_number_pane_vc_t

0x7986,	// (0x00051be6) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7986,	// (0x00051be6) list_double_large_graphic_pane_vc_g1

0x79a8,	// (0x00051c08) list_double_large_graphic_pane_vc_g2_ParamLimits

0x79a8,	// (0x00051c08) list_double_large_graphic_pane_vc_g2

0x79bc,	// (0x00051c1c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x79bc,	// (0x00051c1c) list_double_large_graphic_pane_vc_g3

0x79cb,	// (0x00051c2b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x79cb,	// (0x00051c2b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x00059cb8) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x00059cb8) list_double_large_graphic_pane_vc_g

0x79d7,	// (0x00051c37) list_double_large_graphic_pane_vc_t1_ParamLimits

0x79d7,	// (0x00051c37) list_double_large_graphic_pane_vc_t1

0x79f3,	// (0x00051c53) list_double_large_graphic_pane_vc_t2_ParamLimits

0x79f3,	// (0x00051c53) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x00059cc1) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x00059cc1) list_double_large_graphic_pane_vc_t

0x93da,	// (0x0005363a) list_double_heading_pane_vc_g1_ParamLimits

0x93da,	// (0x0005363a) list_double_heading_pane_vc_g1

0x7560,	// (0x000517c0) list_double_heading_pane_vc_g2_ParamLimits

0x7560,	// (0x000517c0) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00059a44) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00059a44) list_double_heading_pane_vc_g

0x7a15,	// (0x00051c75) list_double_heading_pane_vc_t1_ParamLimits

0x7a15,	// (0x00051c75) list_double_heading_pane_vc_t1

0x7a29,	// (0x00051c89) list_double_heading_pane_vc_t2_ParamLimits

0x7a29,	// (0x00051c89) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x00059cc6) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x00059cc6) list_double_heading_pane_vc_t

0x7a41,	// (0x00051ca1) list_double_graphic_pane_vc_g1_ParamLimits

0x7a41,	// (0x00051ca1) list_double_graphic_pane_vc_g1

0x7a4d,	// (0x00051cad) list_double_graphic_pane_vc_g2_ParamLimits

0x7a4d,	// (0x00051cad) list_double_graphic_pane_vc_g2

0x93da,	// (0x0005363a) list_double_graphic_pane_vc_g3_ParamLimits

0x93da,	// (0x0005363a) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x00059ccb) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00059ccb) list_double_graphic_pane_vc_g

0x7a6a,	// (0x00051cca) list_double_graphic_pane_vc_t1_ParamLimits

0x7a6a,	// (0x00051cca) list_double_graphic_pane_vc_t1

0x7a94,	// (0x00051cf4) list_double_graphic_pane_vc_t2_ParamLimits

0x7a94,	// (0x00051cf4) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00059cd4) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00059cd4) list_double_graphic_pane_vc_t

0x482f,	// (0x0004ea8f) aid_size_cell_fastswap

0x4837,	// (0x0004ea97) aid_size_cell_touch_ParamLimits

0x4837,	// (0x0004ea97) aid_size_cell_touch

0x4a9c,	// (0x0004ecfc) popup_fast_swap_wide_window_ParamLimits

0x4a9c,	// (0x0004ecfc) popup_fast_swap_wide_window

0x4bb0,	// (0x0004ee10) touch_pane_ParamLimits

0x4bb0,	// (0x0004ee10) touch_pane

0x8802,	// (0x00052a62) button_value_adjust_pane_cp2

0x5122,	// (0x0004f382) button_value_adjust_pane_cp4

0x5146,	// (0x0004f3a6) form_field_data_pane_cp2

0x5167,	// (0x0004f3c7) form_field_data_wide_pane_cp2

0x8c78,	// (0x00052ed8) bg_scroll_pane_ParamLimits

0x552a,	// (0x0004f78a) scroll_handle_pane_ParamLimits

0x553e,	// (0x0004f79e) scroll_sc2_down_pane_ParamLimits

0x553e,	// (0x0004f79e) scroll_sc2_down_pane

0x8ca9,	// (0x00052f09) scroll_sc2_up_pane_ParamLimits

0x8ca9,	// (0x00052f09) scroll_sc2_up_pane

0xbe39,	// (0x00056099) grid_wheel_folder_pane_g1_ParamLimits

0xbe39,	// (0x00056099) grid_wheel_folder_pane_g1

0x5771,	// (0x0004f9d1) clock_nsta_pane_cp2_ParamLimits

0x5771,	// (0x0004f9d1) clock_nsta_pane_cp2

0x94a9,	// (0x00053709) listscroll_midp_pane_ParamLimits

0x94b5,	// (0x00053715) midp_canvas_pane

0x979d,	// (0x000539fd) nsta_clock_indic_pane

0x97d6,	// (0x00053a36) listscroll_form_pane_vc

0x97de,	// (0x00053a3e) listscroll_set_pane_vc_ParamLimits

0x97de,	// (0x00053a3e) listscroll_set_pane_vc

0x98e3,	// (0x00053b43) clock_nsta_pane

0x9964,	// (0x00053bc4) indicator_nsta_pane

0x9c44,	// (0x00053ea4) bg_popup_sub_pane_cp2_ParamLimits

0x9c58,	// (0x00053eb8) find_pane_cp2_ParamLimits

0x9c58,	// (0x00053eb8) find_pane_cp2

0x9c6e,	// (0x00053ece) grid_toobar_pane_ParamLimits

0x9d4e,	// (0x00053fae) list_form_gen_pane_vc_ParamLimits

0x9d4e,	// (0x00053fae) list_form_gen_pane_vc

0x9d64,	// (0x00053fc4) scroll_pane_cp8_vc_ParamLimits

0x9d64,	// (0x00053fc4) scroll_pane_cp8_vc

0x9de0,	// (0x00054040) data_form_wide_pane_vc_ParamLimits

0x9de0,	// (0x00054040) data_form_wide_pane_vc

0x9dec,	// (0x0005404c) form_field_data_wide_pane_vc_g1

0x9df4,	// (0x00054054) form_field_data_wide_pane_vc_t1_ParamLimits

0x9df4,	// (0x00054054) form_field_data_wide_pane_vc_t1

0x8816,	// (0x00052a76) input_focus_pane_cp6_vc_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_cp6_vc

0xa11a,	// (0x0005437a) list_midp_pane_ParamLimits

0xa126,	// (0x00054386) scroll_pane_cp16_ParamLimits

0xa126,	// (0x00054386) scroll_pane_cp16

0xa17c,	// (0x000543dc) button_value_adjust_pane_ParamLimits

0xa17c,	// (0x000543dc) button_value_adjust_pane

0xb0ed,	// (0x0005534d) button_value_adjust_pane_cp6_ParamLimits

0xb0ed,	// (0x0005534d) button_value_adjust_pane_cp6

0xb217,	// (0x00055477) settings_code_pane_cp_ParamLimits

0xb217,	// (0x00055477) settings_code_pane_cp

0x7eb1,	// (0x00052111) cell_touch_pane_g1

0x7eb1,	// (0x00052111) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00059968) cell_touch_pane_g

0xb78d,	// (0x000559ed) cell_touch_pane_cp_ParamLimits

0xb78d,	// (0x000559ed) cell_touch_pane_cp

0xb79d,	// (0x000559fd) cell_touch_pane_ParamLimits

0xb79d,	// (0x000559fd) cell_touch_pane

0x7eb1,	// (0x00052111) scroll_sc2_down_pane_g1

0x7eb1,	// (0x00052111) scroll_sc2_up_pane_g1

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp4_vc

0xb7af,	// (0x00055a0f) list_set_graphic_pane_vc_g1_ParamLimits

0xb7af,	// (0x00055a0f) list_set_graphic_pane_vc_g1

0xb7bb,	// (0x00055a1b) list_set_graphic_pane_vc_g2_ParamLimits

0xb7bb,	// (0x00055a1b) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00059c5d) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00059c5d) list_set_graphic_pane_vc_g

0xb7c7,	// (0x00055a27) text_primary_small_cp13_vc_ParamLimits

0xb7c7,	// (0x00055a27) text_primary_small_cp13_vc

0xb7df,	// (0x00055a3f) list_set_graphic_pane_vc_ParamLimits

0xb7df,	// (0x00055a3f) list_set_graphic_pane_vc

0x7ebb,	// (0x0005211b) input_focus_pane_cp2_vc

0x7eb1,	// (0x00052111) setting_code_pane_vc_g1

0x7fe6,	// (0x00052246) setting_code_pane_vc_t1

0xb7f1,	// (0x00055a51) set_text_pane_vc_t1_ParamLimits

0xb7f1,	// (0x00055a51) set_text_pane_vc_t1

0x7ebb,	// (0x0005211b) input_focus_pane_cp1_vc

0xb80d,	// (0x00055a6d) list_set_text_pane_vc

0x7eb1,	// (0x00052111) setting_text_pane_vc_g1

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp2_vc

0x7fdd,	// (0x0005223d) setting_slider_graphic_pane_vc_g1

0xb817,	// (0x00055a77) setting_slider_graphic_pane_vc_t1

0xb827,	// (0x00055a87) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00059c62) setting_slider_graphic_pane_vc_t

0xb837,	// (0x00055a97) slider_set_pane_cp_vc

0xb83f,	// (0x00055a9f) slider_set_pane_vc_g1

0xb848,	// (0x00055aa8) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00059c67) slider_set_pane_vc_g

0x8862,	// (0x00052ac2) set_opt_bg_pane_g1_copy1

0x886a,	// (0x00052aca) set_opt_bg_pane_g2_copy1

0xb874,	// (0x00055ad4) set_opt_bg_pane_g3_copy1

0x887a,	// (0x00052ada) set_opt_bg_pane_g4_copy1

0x8882,	// (0x00052ae2) set_opt_bg_pane_g5_copy1

0x888a,	// (0x00052aea) set_opt_bg_pane_g6_copy1

0xb87e,	// (0x00055ade) set_opt_bg_pane_g7_copy1

0xb886,	// (0x00055ae6) set_opt_bg_pane_g8_copy1

0xb890,	// (0x00055af0) set_opt_bg_pane_g9_copy1

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp_vc

0xb89a,	// (0x00055afa) setting_slider_pane_vc_t1

0xb8a9,	// (0x00055b09) setting_slider_pane_vc_t2

0xb8b9,	// (0x00055b19) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00059c76) setting_slider_pane_vc_t

0xb8c9,	// (0x00055b29) slider_set_pane_vc

0x617d,	// (0x000503dd) volume_set_pane_vc_g1

0x6186,	// (0x000503e6) volume_set_pane_vc_g2

0x618f,	// (0x000503ef) volume_set_pane_vc_g3

0x6198,	// (0x000503f8) volume_set_pane_vc_g4

0x61a1,	// (0x00050401) volume_set_pane_vc_g5

0x61aa,	// (0x0005040a) volume_set_pane_vc_g6

0x61b3,	// (0x00050413) volume_set_pane_vc_g7

0x61bc,	// (0x0005041c) volume_set_pane_vc_g8

0x61c5,	// (0x00050425) volume_set_pane_vc_g9

0x61ce,	// (0x0005042e) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00059b1b) volume_set_pane_vc_g

0xb8d1,	// (0x00055b31) volume_set_pane_vc

0xb8d9,	// (0x00055b39) button_value_adjust_pane_cp1_vc

0xb8e3,	// (0x00055b43) list_highlight_pane_cp2_vc

0xb8ec,	// (0x00055b4c) list_set_pane_vc_ParamLimits

0xb8ec,	// (0x00055b4c) list_set_pane_vc

0xb94a,	// (0x00055baa) main_pane_set_vc_t1_ParamLimits

0xb94a,	// (0x00055baa) main_pane_set_vc_t1

0xb95f,	// (0x00055bbf) main_pane_set_vc_t2_ParamLimits

0xb95f,	// (0x00055bbf) main_pane_set_vc_t2

0xb971,	// (0x00055bd1) main_pane_set_vc_t3_ParamLimits

0xb971,	// (0x00055bd1) main_pane_set_vc_t3

0xb985,	// (0x00055be5) main_pane_set_vc_t4_ParamLimits

0xb985,	// (0x00055be5) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x00059c7d) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x00059c7d) main_pane_set_vc_t

0xb999,	// (0x00055bf9) setting_code_pane_vc_ParamLimits

0xb999,	// (0x00055bf9) setting_code_pane_vc

0xb9aa,	// (0x00055c0a) setting_slider_graphic_pane_vc

0xb9aa,	// (0x00055c0a) setting_slider_pane_vc

0xb9aa,	// (0x00055c0a) setting_text_pane_vc

0xb9aa,	// (0x00055c0a) setting_volume_pane_vc

0xb9b4,	// (0x00055c14) scroll_pane_cp121_vc

0x87f0,	// (0x00052a50) set_content_pane_vc

0xb9bc,	// (0x00055c1c) button_value_adjust_pane_g1

0xb9c5,	// (0x00055c25) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x00059cd9) button_value_adjust_pane_g

0xb9ce,	// (0x00055c2e) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9ce,	// (0x00055c2e) form_field_slider_wide_pane_vc_t1

0xb9e2,	// (0x00055c42) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00055c42) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x00059cde) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00059cde) form_field_slider_wide_pane_vc_t

0x8216,	// (0x00052476) input_focus_pane_cp10_vc_ParamLimits

0x8216,	// (0x00052476) input_focus_pane_cp10_vc

0xba10,	// (0x00055c70) slider_cont_pane_cp1_vc_ParamLimits

0xba10,	// (0x00055c70) slider_cont_pane_cp1_vc

0xba22,	// (0x00055c82) slider_form_pane_g1_cp2

0xb848,	// (0x00055aa8) slider_form_pane_g2_cp2

0xba4f,	// (0x00055caf) form_field_slider_pane_vc_t3

0xba5d,	// (0x00055cbd) form_field_slider_pane_vc_t4

0xba6b,	// (0x00055ccb) slider_form_pane_vc_ParamLimits

0xba6b,	// (0x00055ccb) slider_form_pane_vc

0xba78,	// (0x00055cd8) form_field_slider_pane_vc_t1_ParamLimits

0xba78,	// (0x00055cd8) form_field_slider_pane_vc_t1

0xb9e2,	// (0x00055c42) form_field_slider_pane_vc_t2_ParamLimits

0xb9e2,	// (0x00055c42) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x00059cf0) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x00059cf0) form_field_slider_pane_vc_t

0x8216,	// (0x00052476) input_focus_pane_cp9_vc_ParamLimits

0x8216,	// (0x00052476) input_focus_pane_cp9_vc

0xba94,	// (0x00055cf4) slider_cont_pane_vc_ParamLimits

0xba94,	// (0x00055cf4) slider_cont_pane_vc

0xbaa8,	// (0x00055d08) list_form_graphic_pane_cp_vc_ParamLimits

0xbaa8,	// (0x00055d08) list_form_graphic_pane_cp_vc

0x9dec,	// (0x0005404c) form_field_popup_wide_pane_vc_g1

0xbabd,	// (0x00055d1d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbabd,	// (0x00055d1d) form_field_popup_wide_pane_vc_t1

0x8816,	// (0x00052a76) input_focus_pane_cp8_vc_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_cp8_vc

0xbb02,	// (0x00055d62) list_form_wide_pane_vc_ParamLimits

0xbb02,	// (0x00055d62) list_form_wide_pane_vc

0xbb0e,	// (0x00055d6e) list_form_graphic_pane_vc_g1

0xbb16,	// (0x00055d76) list_form_graphic_pane_vc_t1_ParamLimits

0xbb16,	// (0x00055d76) list_form_graphic_pane_vc_t1

0x7f9b,	// (0x000521fb) list_highlight_pane_cp5_vc_ParamLimits

0x7f9b,	// (0x000521fb) list_highlight_pane_cp5_vc

0xbb32,	// (0x00055d92) list_form_graphic_pane_vc_ParamLimits

0xbb32,	// (0x00055d92) list_form_graphic_pane_vc

0x9dec,	// (0x0005404c) form_field_popup_pane_vc_g1

0xbb48,	// (0x00055da8) form_field_popup_pane_vc_t1_ParamLimits

0xbb48,	// (0x00055da8) form_field_popup_pane_vc_t1

0x8816,	// (0x00052a76) input_focus_pane_cp7_vc_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_cp7_vc

0xbb5f,	// (0x00055dbf) list_form_pane_vc_ParamLimits

0xbb5f,	// (0x00055dbf) list_form_pane_vc

0xbb6b,	// (0x00055dcb) data_form_pane_vc_t1_ParamLimits

0xbb6b,	// (0x00055dcb) data_form_pane_vc_t1

0x8862,	// (0x00052ac2) input_focus_pane_vc_g1

0x886a,	// (0x00052aca) input_focus_pane_vc_g2

0x8872,	// (0x00052ad2) input_focus_pane_vc_g3

0x887a,	// (0x00052ada) input_focus_pane_vc_g4

0x8882,	// (0x00052ae2) input_focus_pane_vc_g5

0x888a,	// (0x00052aea) input_focus_pane_vc_g6

0x8892,	// (0x00052af2) input_focus_pane_vc_g7

0x889a,	// (0x00052afa) input_focus_pane_vc_g8

0x88a2,	// (0x00052b02) input_focus_pane_vc_g9

0x7eb1,	// (0x00052111) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000598f1) input_focus_pane_vc_g

0x9de0,	// (0x00054040) data_form_pane_vc_ParamLimits

0x9de0,	// (0x00054040) data_form_pane_vc

0x9dec,	// (0x0005404c) form_field_data_pane_vc_g1

0xbb86,	// (0x00055de6) form_field_data_pane_vc_t1_ParamLimits

0xbb86,	// (0x00055de6) form_field_data_pane_vc_t1

0x8816,	// (0x00052a76) input_focus_pane_vc_ParamLimits

0x8816,	// (0x00052a76) input_focus_pane_vc

0xbba0,	// (0x00055e00) button_value_adjust_pane_cp3_vc

0xbba8,	// (0x00055e08) button_value_adjust_pane_cp5_vc

0xbbb0,	// (0x00055e10) form_field_data_pane_vc_ParamLimits

0xbbb0,	// (0x00055e10) form_field_data_pane_vc

0xbbc7,	// (0x00055e27) form_field_data_pane_vc_cp2

0xbbcf,	// (0x00055e2f) form_field_data_wide_pane_vc_ParamLimits

0xbbcf,	// (0x00055e2f) form_field_data_wide_pane_vc

0xbbe5,	// (0x00055e45) form_field_data_wide_pane_vc_cp2

0xbbed,	// (0x00055e4d) form_field_popup_pane_vc_ParamLimits

0xbbed,	// (0x00055e4d) form_field_popup_pane_vc

0xbc04,	// (0x00055e64) form_field_popup_wide_pane_vc_ParamLimits

0xbc04,	// (0x00055e64) form_field_popup_wide_pane_vc

0xbc1a,	// (0x00055e7a) form_field_slider_pane_vc_ParamLimits

0xbc1a,	// (0x00055e7a) form_field_slider_pane_vc

0xbc2d,	// (0x00055e8d) form_field_slider_wide_pane_vc_ParamLimits

0xbc2d,	// (0x00055e8d) form_field_slider_wide_pane_vc

0xbc40,	// (0x00055ea0) grid_touch_1_pane_ParamLimits

0xbc40,	// (0x00055ea0) grid_touch_1_pane

0xbc4c,	// (0x00055eac) grid_touch_2_pane_ParamLimits

0xbc4c,	// (0x00055eac) grid_touch_2_pane

0x9768,	// (0x000539c8) touch_pane_g1_ParamLimits

0x9768,	// (0x000539c8) touch_pane_g1

0xbc64,	// (0x00055ec4) cell_app_pane_cp_wide_ParamLimits

0xbc64,	// (0x00055ec4) cell_app_pane_cp_wide

0xbc75,	// (0x00055ed5) grid_popup_fast_wide_pane_ParamLimits

0xbc75,	// (0x00055ed5) grid_popup_fast_wide_pane

0xbc89,	// (0x00055ee9) scroll_pane_cp19_ParamLimits

0xbc89,	// (0x00055ee9) scroll_pane_cp19

0x7ebb,	// (0x0005211b) bg_popup_window_pane_cp20

0xbc9d,	// (0x00055efd) listscroll_popup_fast_wide_pane

0x7f9b,	// (0x000521fb) grid_indicator_nsta_pane

0xbca5,	// (0x00055f05) clock_nsta_pane_g1

0xbcae,	// (0x00055f0e) clock_nsta_pane_t1

0xbcca,	// (0x00055f2a) cell_indicator_nsta_pane_ParamLimits

0xbcca,	// (0x00055f2a) cell_indicator_nsta_pane

0xbcfb,	// (0x00055f5b) cell_indicator_nsta_pane_g1

0xbd09,	// (0x00055f69) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x00059d01) cell_indicator_nsta_pane_g

0xbd16,	// (0x00055f76) clock_nsta_pane_cp

0xbd1e,	// (0x00055f7e) indicator_nsta_pane_cp

0xbd26,	// (0x00055f86) nsta_clock_indic_pane_g1

0x8064,	// (0x000522c4) grid_indicator_pane

0x8d9e,	// (0x00052ffe) scroll_pane_cp29

0x56c0,	// (0x0004f920) indicator_nsta_pane_cp2_ParamLimits

0x56c0,	// (0x0004f920) indicator_nsta_pane_cp2

0x7f9b,	// (0x000521fb) main_apps_wheel_pane

0x9ffb,	// (0x0005425b) form_midp_field_text_pane_ParamLimits

0xa146,	// (0x000543a6) scroll_bar_cp050_ParamLimits

0xbd76,	// (0x00055fd6) cell_indicator_pane_ParamLimits

0xbd76,	// (0x00055fd6) cell_indicator_pane

0xbd8d,	// (0x00055fed) cell_indicator_pane_g1

0xbd97,	// (0x00055ff7) grid_wheel_folder_pane_ParamLimits

0xbd97,	// (0x00055ff7) grid_wheel_folder_pane

0xbdad,	// (0x0005600d) list_wheel_apps_pane_ParamLimits

0xbdad,	// (0x0005600d) list_wheel_apps_pane

0xbdbe,	// (0x0005601e) main_apps_wheel_pane_g1_ParamLimits

0xbdbe,	// (0x0005601e) main_apps_wheel_pane_g1

0xbdd2,	// (0x00056032) main_apps_wheel_pane_g2_ParamLimits

0xbdd2,	// (0x00056032) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x00059d1d) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x00059d1d) main_apps_wheel_pane_g

0xbdea,	// (0x0005604a) main_apps_wheel_pane_t1_ParamLimits

0xbdea,	// (0x0005604a) main_apps_wheel_pane_t1

0xbe0d,	// (0x0005606d) list_wheel_apps_pane_g1

0xbe15,	// (0x00056075) list_wheel_apps_pane_g2

0xbe1d,	// (0x0005607d) list_wheel_apps_pane_g3

0xbe25,	// (0x00056085) list_wheel_apps_pane_g4

0xbe2f,	// (0x0005608f) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x00059d22) list_wheel_apps_pane_g

0x9321,	// (0x00053581) navi_icon_text_pane

0x9812,	// (0x00053a72) aid_fill_nsta

0xbe52,	// (0x000560b2) navi_icon_text_pane_g1

0xbe5e,	// (0x000560be) navi_icon_text_pane_t1

0x91b4,	// (0x00053414) list_set_graphic_pane_t1_ParamLimits

0x91b4,	// (0x00053414) list_set_graphic_pane_t1

0xa89d,	// (0x00054afd) popup_midp_note_alarm_window_t6_ParamLimits

0xa89d,	// (0x00054afd) popup_midp_note_alarm_window_t6

0xa8af,	// (0x00054b0f) popup_midp_note_alarm_window_t7_ParamLimits

0xa8af,	// (0x00054b0f) popup_midp_note_alarm_window_t7

0xa8c1,	// (0x00054b21) popup_midp_note_alarm_window_t8_ParamLimits

0xa8c1,	// (0x00054b21) popup_midp_note_alarm_window_t8

0xa8d3,	// (0x00054b33) popup_midp_note_alarm_window_t9_ParamLimits

0xa8d3,	// (0x00054b33) popup_midp_note_alarm_window_t9

0xa8e5,	// (0x00054b45) popup_midp_note_alarm_window_t10_ParamLimits

0xa8e5,	// (0x00054b45) popup_midp_note_alarm_window_t10

0xa8f7,	// (0x00054b57) popup_midp_note_alarm_window_t11_ParamLimits

0xa8f7,	// (0x00054b57) popup_midp_note_alarm_window_t11

0xa909,	// (0x00054b69) scroll_pane_cp17_ParamLimits

0xa909,	// (0x00054b69) scroll_pane_cp17

0x617d,	// (0x000503dd) volume_small_pane_cp_g1

0x6472,	// (0x000506d2) volume_small_pane_cp_g2

0x647b,	// (0x000506db) volume_small_pane_cp_g3

0x6484,	// (0x000506e4) volume_small_pane_cp_g4

0x648d,	// (0x000506ed) volume_small_pane_cp_g5

0x6496,	// (0x000506f6) volume_small_pane_cp_g6

0x649f,	// (0x000506ff) volume_small_pane_cp_g7

0x64a8,	// (0x00050708) volume_small_pane_cp_g8

0x64b1,	// (0x00050711) volume_small_pane_cp_g9

0x64ba,	// (0x0005071a) volume_small_pane_cp_g10

0x957e,	// (0x000537de) midp_ticker_pane_g1_ParamLimits

0x958a,	// (0x000537ea) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000599bd) midp_ticker_pane_g_ParamLimits

0x9596,	// (0x000537f6) midp_ticker_pane_t1_ParamLimits

0x9828,	// (0x00053a88) aid_fill_nsta_2

0xa132,	// (0x00054392) list_form2_midp_pane

0xb262,	// (0x000554c2) midp_editing_number_pane_ParamLimits

0xb271,	// (0x000554d1) midp_ticker_pane_ParamLimits

0xbe70,	// (0x000560d0) form2_midp_field_pane

0xbe94,	// (0x000560f4) scroll_pane_cp51

0xbeb4,	// (0x00056114) form2_midp_button_pane_ParamLimits

0xbeb4,	// (0x00056114) form2_midp_button_pane

0xbec6,	// (0x00056126) form2_midp_content_pane_ParamLimits

0xbec6,	// (0x00056126) form2_midp_content_pane

0xbee0,	// (0x00056140) form2_midp_field_choice_group_pane

0xbee8,	// (0x00056148) form2_midp_field_pane_g1

0xbef0,	// (0x00056150) form2_midp_field_pane_g2

0xbef8,	// (0x00056158) form2_midp_field_pane_g3

0xbf00,	// (0x00056160) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x00059d47) form2_midp_field_pane_g

0xbf08,	// (0x00056168) form2_midp_gauge_slider_pane

0xbf10,	// (0x00056170) form2_midp_gauge_wait_pane

0xbf18,	// (0x00056178) form2_midp_image_pane_ParamLimits

0xbf18,	// (0x00056178) form2_midp_image_pane

0xbf33,	// (0x00056193) form2_midp_label_pane_ParamLimits

0xbf33,	// (0x00056193) form2_midp_label_pane

0xbf4c,	// (0x000561ac) form2_midp_label_pane_cp_ParamLimits

0xbf4c,	// (0x000561ac) form2_midp_label_pane_cp

0xbf6d,	// (0x000561cd) form2_midp_string_pane_ParamLimits

0xbf6d,	// (0x000561cd) form2_midp_string_pane

0x7abe,	// (0x00051d1e) form2_midp_text_pane_ParamLimits

0x7abe,	// (0x00051d1e) form2_midp_text_pane

0xbf7f,	// (0x000561df) form2_midp_time_pane

0xbf8f,	// (0x000561ef) input_focus_pane_cp51_ParamLimits

0xbf8f,	// (0x000561ef) input_focus_pane_cp51

0xbfa7,	// (0x00056207) form2_midp_label_pane_t1_ParamLimits

0xbfa7,	// (0x00056207) form2_midp_label_pane_t1

0x7add,	// (0x00051d3d) form2_mdip_text_pane_t1_ParamLimits

0x7add,	// (0x00051d3d) form2_mdip_text_pane_t1

0x7afb,	// (0x00051d5b) form2_midp_time_pane_t1

0xbff0,	// (0x00056250) form2_midp_gauge_slider_pane_t1

0xc002,	// (0x00056262) form2_midp_gauge_slider_pane_t2

0xc014,	// (0x00056274) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x00059d50) form2_midp_gauge_slider_pane_t

0xc026,	// (0x00056286) form2_midp_slider_pane

0xc032,	// (0x00056292) form2_midp_gauge_wait_pane_t1

0xc040,	// (0x000562a0) form2_midp_wait_pane_ParamLimits

0xc040,	// (0x000562a0) form2_midp_wait_pane

0xc06b,	// (0x000562cb) list_single_2graphic_pane_cp4_ParamLimits

0xc06b,	// (0x000562cb) list_single_2graphic_pane_cp4

0x9e54,	// (0x000540b4) list_single_midp_graphic_pane_cp_ParamLimits

0x9e54,	// (0x000540b4) list_single_midp_graphic_pane_cp

0x7ebb,	// (0x0005211b) list_highlight_pane_cp20

0xc08f,	// (0x000562ef) list_single_2graphic_pane_g1_cp4

0xc097,	// (0x000562f7) list_single_2graphic_pane_g2_cp4

0xc09f,	// (0x000562ff) list_single_2graphic_pane_t1_cp4

0x7f9b,	// (0x000521fb) list_highlight_pane_cp21

0xc0ae,	// (0x0005630e) list_single_midp_graphic_pane_g4_cp

0xc0bd,	// (0x0005631d) list_single_midp_graphic_pane_t1_cp

0xc0d2,	// (0x00056332) form2_mdip_string_pane_t1_ParamLimits

0xc0d2,	// (0x00056332) form2_mdip_string_pane_t1

0x7ebb,	// (0x0005211b) bg_wml_button_pane_cp2

0x7eb1,	// (0x00052111) form2_midp_image_pane_g1

0x750f,	// (0x0005176f) list_double_large_graphic_pane_g5_ParamLimits

0x750f,	// (0x0005176f) list_double_large_graphic_pane_g5

0x94a9,	// (0x00053709) midp_form_pane_ParamLimits

0x7f9b,	// (0x000521fb) main_apps_wheel_pane_ParamLimits

0x5daf,	// (0x0005000f) popup_preview_window_ParamLimits

0x5daf,	// (0x0005000f) popup_preview_window

0x5f6a,	// (0x000501ca) popup_touch_info_window_ParamLimits

0x5f6a,	// (0x000501ca) popup_touch_info_window

0x5f88,	// (0x000501e8) popup_touch_menu_window_ParamLimits

0x5f88,	// (0x000501e8) popup_touch_menu_window

0x7ea7,	// (0x00052107) bg_popup_sub_pane_cp6

0xc1cb,	// (0x0005642b) list_touch_menu_pane

0xc1d3,	// (0x00056433) list_single_touch_menu_pane_ParamLimits

0xc1d3,	// (0x00056433) list_single_touch_menu_pane

0xc1e9,	// (0x00056449) list_single_touch_menu_pane_t1

0x7f9b,	// (0x000521fb) bg_popup_sub_pane_cp7_ParamLimits

0x7f9b,	// (0x000521fb) bg_popup_sub_pane_cp7

0xc1f7,	// (0x00056457) heading_sub_pane

0xc1ff,	// (0x0005645f) list_touch_info_pane_ParamLimits

0xc1ff,	// (0x0005645f) list_touch_info_pane

0xc20e,	// (0x0005646e) list_single_touch_info_pane_ParamLimits

0xc20e,	// (0x0005646e) list_single_touch_info_pane

0xc220,	// (0x00056480) list_single_touch_info_pane_t1

0xc22e,	// (0x0005648e) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x00059d5e) list_single_touch_info_pane_t

0x94a1,	// (0x00053701) bg_popup_heading_pane_cp

0xc23c,	// (0x0005649c) heading_sub_pane_t1

0x9d7a,	// (0x00053fda) bg_popup_preview_window_pane_cp_ParamLimits

0x9d7a,	// (0x00053fda) bg_popup_preview_window_pane_cp

0xc1f7,	// (0x00056457) heading_preview_pane

0xc1ff,	// (0x0005645f) list_preview_pane_ParamLimits

0xc1ff,	// (0x0005645f) list_preview_pane

0xc24a,	// (0x000564aa) popup_preview_window_g1

0xc20e,	// (0x0005646e) list_single_preview_pane_ParamLimits

0xc20e,	// (0x0005646e) list_single_preview_pane

0xc252,	// (0x000564b2) list_single_preview_pane_g1

0xc25a,	// (0x000564ba) list_single_preview_pane_t1

0xc220,	// (0x00056480) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x00059d63) list_single_preview_pane_t

0xc268,	// (0x000564c8) bg_popup_heading_pane_cp2_ParamLimits

0xc268,	// (0x000564c8) bg_popup_heading_pane_cp2

0xc27e,	// (0x000564de) heading_preview_pane_g1

0xc286,	// (0x000564e6) heading_preview_pane_t1_ParamLimits

0xc286,	// (0x000564e6) heading_preview_pane_t1

0x8087,	// (0x000522e7) soft_indicator_pane_t1_ParamLimits

0x877d,	// (0x000529dd) scroll_pane_ParamLimits

0x8c97,	// (0x00052ef7) scroll_sc2_left_pane

0x8ca0,	// (0x00052f00) scroll_sc2_right_pane

0x8cbf,	// (0x00052f1f) scroll_bg_pane_g1_ParamLimits

0x8cd4,	// (0x00052f34) scroll_bg_pane_g2_ParamLimits

0x8cec,	// (0x00052f4c) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00059948) scroll_bg_pane_g_ParamLimits

0x8cbf,	// (0x00052f1f) scroll_handle_pane_g1_ParamLimits

0x8d0e,	// (0x00052f6e) scroll_handle_pane_g2_ParamLimits

0x8cec,	// (0x00052f4c) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005994f) scroll_handle_pane_g_ParamLimits

0x5a30,	// (0x0004fc90) popup_choice_list_window_ParamLimits

0x5a30,	// (0x0004fc90) popup_choice_list_window

0x9c50,	// (0x00053eb0) choice_list_pane

0x9cd2,	// (0x00053f32) cell_toolbar_pane_t1

0x9cfa,	// (0x00053f5a) toolbar_button_pane_ParamLimits

0xadc3,	// (0x00055023) ai_gene_pane_1_t2_ParamLimits

0xadc3,	// (0x00055023) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00059b77) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00059b77) ai_gene_pane_1_t

0xc2a3,	// (0x00056503) scroll_sc2_left_pane_g1

0xc2a3,	// (0x00056503) scroll_sc2_right_pane_g1

0x97f0,	// (0x00053a50) bg_popup_sub_pane_cp10

0xc2ad,	// (0x0005650d) list_choice_list_pane

0xc2c6,	// (0x00056526) list_single_choice_list_pane_ParamLimits

0xc2c6,	// (0x00056526) list_single_choice_list_pane

0xc2d9,	// (0x00056539) list_single_choice_list_pane_g1

0x899b,	// (0x00052bfb) list_single_choice_list_pane_t1_ParamLimits

0x899b,	// (0x00052bfb) list_single_choice_list_pane_t1

0xc2e1,	// (0x00056541) choice_list_pane_g1

0xc2e9,	// (0x00056549) choice_list_pane_t1

0x7ea7,	// (0x00052107) input_focus_pane_cp11

0x8b72,	// (0x00052dd2) title_pane_stacon_g2_ParamLimits

0x8b72,	// (0x00052dd2) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005992e) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005992e) title_pane_stacon_g

0x94a1,	// (0x00053701) cursor_press_pane

0x5adc,	// (0x0004fd3c) popup_fep_hwr_window_ParamLimits

0x5adc,	// (0x0004fd3c) popup_fep_hwr_window

0x5b56,	// (0x0004fdb6) popup_fep_vkb_window_ParamLimits

0x5b56,	// (0x0004fdb6) popup_fep_vkb_window

0xc2f7,	// (0x00056557) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x00059d8c) fep_vkb_side_pane_g_ParamLimits

0x64fc,	// (0x0005075c) fep_hwr_candidate_pane_ParamLimits

0x64fc,	// (0x0005075c) fep_hwr_candidate_pane

0x6526,	// (0x00050786) fep_hwr_side_pane_ParamLimits

0x6526,	// (0x00050786) fep_hwr_side_pane

0x6546,	// (0x000507a6) fep_hwr_top_pane_ParamLimits

0x6546,	// (0x000507a6) fep_hwr_top_pane

0x655e,	// (0x000507be) fep_hwr_write_pane_ParamLimits

0x655e,	// (0x000507be) fep_hwr_write_pane

0xfb2c,	// (0x00059d8c) fep_vkb_side_pane_g

0xc2ff,	// (0x0005655f) fep_hwr_top_pane_g1

0xc311,	// (0x00056571) fep_hwr_top_pane_g2

0x6598,	// (0x000507f8) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x00059d68) fep_hwr_top_pane_g

0x65ad,	// (0x0005080d) fep_hwr_top_text_pane

0x8e8e,	// (0x000530ee) fep_hwr_top_text_pane_g1

0xc347,	// (0x000565a7) fep_hwr_top_text_pane_t1

0x66a3,	// (0x00050903) fep_hwr_candidate_pane_g1

0xc59a,	// (0x000567fa) fep_vkb_keypad_pane_g3_ParamLimits

0xc59a,	// (0x000567fa) fep_vkb_keypad_pane_g3

0xc5c2,	// (0x00056822) fep_vkb_keypad_pane_g4_ParamLimits

0xc5c2,	// (0x00056822) fep_vkb_keypad_pane_g4

0xc63d,	// (0x0005689d) fep_vkb_bottom_pane_g2_ParamLimits

0xc63d,	// (0x0005689d) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x00059d93) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x00059d93) fep_vkb_bottom_pane_g

0xc2a3,	// (0x00056503) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x00059d9d) cell_vkb_side_pane_g

0xc6c8,	// (0x00056928) cell_vkb_side_pane_t1

0xc6d6,	// (0x00056936) cell_vkb_side_pane_t1_copy1

0xc2a3,	// (0x00056503) bg_fep_vkb_candidate_pane_g2

0xc802,	// (0x00056a62) cell_vkb_candidate_pane_ParamLimits

0xc355,	// (0x000565b5) aid_size_cell_vkb_ParamLimits

0xc355,	// (0x000565b5) aid_size_cell_vkb

0xc802,	// (0x00056a62) cell_vkb_candidate_pane

0x66ca,	// (0x0005092a) bg_popup_fep_shadow_pane_g1

0xc3e3,	// (0x00056643) fep_vkb_bottom_pane_ParamLimits

0xc3e3,	// (0x00056643) fep_vkb_bottom_pane

0xc419,	// (0x00056679) fep_vkb_candidate_pane_ParamLimits

0xc419,	// (0x00056679) fep_vkb_candidate_pane

0xc435,	// (0x00056695) fep_vkb_keypad_pane_ParamLimits

0xc435,	// (0x00056695) fep_vkb_keypad_pane

0xc47b,	// (0x000566db) fep_vkb_side_pane_ParamLimits

0xc47b,	// (0x000566db) fep_vkb_side_pane

0xc4b7,	// (0x00056717) fep_vkb_top_pane_ParamLimits

0xc4b7,	// (0x00056717) fep_vkb_top_pane

0xc4f3,	// (0x00056753) fep_vkb_top_pane_g1_ParamLimits

0xc4f3,	// (0x00056753) fep_vkb_top_pane_g1

0xc502,	// (0x00056762) fep_vkb_top_pane_g2_ParamLimits

0xc502,	// (0x00056762) fep_vkb_top_pane_g2

0xc511,	// (0x00056771) fep_vkb_top_pane_g3_ParamLimits

0xc511,	// (0x00056771) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x00059d83) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x00059d83) fep_vkb_top_pane_g

0xc52f,	// (0x0005678f) fep_vkb_top_text_pane_ParamLimits

0xc52f,	// (0x0005678f) fep_vkb_top_text_pane

0xc540,	// (0x000567a0) fep_vkb_side_pane_g1_ParamLimits

0xc540,	// (0x000567a0) fep_vkb_side_pane_g1

0xc589,	// (0x000567e9) grid_vkb_side_pane_ParamLimits

0xc589,	// (0x000567e9) grid_vkb_side_pane

0x66d2,	// (0x00050932) bg_popup_fep_shadow_pane_g2

0x66db,	// (0x0005093b) bg_popup_fep_shadow_pane_g3

0x66e3,	// (0x00050943) bg_popup_fep_shadow_pane_g4

0x66ec,	// (0x0005094c) bg_popup_fep_shadow_pane_g5

0x66f6,	// (0x00050956) bg_popup_fep_shadow_pane_g6

0x66fe,	// (0x0005095e) bg_popup_fep_shadow_pane_g7

0x887a,	// (0x00052ada) bg_popup_fep_shadow_pane_g8

0xc5ec,	// (0x0005684c) grid_vkb_keypad_number_pane_ParamLimits

0xc5ec,	// (0x0005684c) grid_vkb_keypad_number_pane

0xc5fc,	// (0x0005685c) grid_vkb_keypad_pane_ParamLimits

0xc5fc,	// (0x0005685c) grid_vkb_keypad_pane

0xc622,	// (0x00056882) fep_vkb_bottom_pane_g1_ParamLimits

0xc622,	// (0x00056882) fep_vkb_bottom_pane_g1

0xc64b,	// (0x000568ab) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64b,	// (0x000568ab) grid_vkb_keypad_bottom_left_pane

0xc660,	// (0x000568c0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc660,	// (0x000568c0) grid_vkb_keypad_bottom_right_pane

0xc675,	// (0x000568d5) fep_vkb_top_text_pane_g1

0xc690,	// (0x000568f0) fep_vkb_top_text_pane_t1

0xc6a5,	// (0x00056905) cell_vkb_side_pane_ParamLimits

0xc6a5,	// (0x00056905) cell_vkb_side_pane

0xc2a3,	// (0x00056503) cell_vkb_side_pane_g1

0xc6e4,	// (0x00056944) cell_vkb_keypad_pane_ParamLimits

0xc6e4,	// (0x00056944) cell_vkb_keypad_pane

0xc759,	// (0x000569b9) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x00059db0) bg_popup_fep_shadow_pane_g

0x6710,	// (0x00050970) cell_hwr_side_pane_g1

0x6710,	// (0x00050970) cell_hwr_side_pane_g2

0xc763,	// (0x000569c3) cell_vkb_keypad_pane_t1

0xc771,	// (0x000569d1) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc771,	// (0x000569d1) cell_vkb_keypad_bottom_left_pane

0xc78e,	// (0x000569ee) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc78e,	// (0x000569ee) cell_vkb_keypad_bottom_right_pane

0xc2a3,	// (0x00056503) cell_vkb_keypad_bottom_left_pane_g1

0xc2a3,	// (0x00056503) cell_vkb_keypad_bottom_right_pane_g1

0xc7c7,	// (0x00056a27) cell_vkb_keypad_number_pane_ParamLimits

0xc7c7,	// (0x00056a27) cell_vkb_keypad_number_pane

0xc7e6,	// (0x00056a46) cell_vkb_keypad_number_pane_g1

0xc7f0,	// (0x00056a50) cell_vkb_keypad_number_pane_g2

0xc7f9,	// (0x00056a59) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x00059da2) cell_vkb_keypad_number_pane_g

0xc763,	// (0x000569c3) cell_vkb_keypad_number_pane_t1

0xc81d,	// (0x00056a7d) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x00059dc3) cell_hwr_side_pane_g

0xc836,	// (0x00056a96) cell_hwr_side_pane_t1

0x671a,	// (0x0005097a) cell_hwr_side_pane_t1_copy1

0x6728,	// (0x00050988) cell_hwr_candidate_pane_g1

0x6757,	// (0x000509b7) cell_hwr_candidate_pane_t1

0xc2a3,	// (0x00056503) cell_vkb_candidate_pane_g2

0xc87a,	// (0x00056ada) cell_vkb_candidate_pane_t1

0x64c3,	// (0x00050723) bg_popup_fep_shadow_pane_ParamLimits

0x64c3,	// (0x00050723) bg_popup_fep_shadow_pane

0x6578,	// (0x000507d8) bg_fep_hwr_top_pane_g4

0xc323,	// (0x00056583) bg_hwr_side_pane_g1_ParamLimits

0xc323,	// (0x00056583) bg_hwr_side_pane_g1

0x65e9,	// (0x00050849) cell_hwr_side_pane_ParamLimits

0x65e9,	// (0x00050849) cell_hwr_side_pane

0x6624,	// (0x00050884) fep_hwr_write_pane_g1_ParamLimits

0x6624,	// (0x00050884) fep_hwr_write_pane_g1

0x6631,	// (0x00050891) fep_hwr_write_pane_g2_ParamLimits

0x6631,	// (0x00050891) fep_hwr_write_pane_g2

0x663e,	// (0x0005089e) fep_hwr_write_pane_g3_ParamLimits

0x663e,	// (0x0005089e) fep_hwr_write_pane_g3

0x664c,	// (0x000508ac) fep_hwr_write_pane_g4_ParamLimits

0x664c,	// (0x000508ac) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x00059d6f) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x00059d6f) fep_hwr_write_pane_g

0x6578,	// (0x000507d8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6578,	// (0x000507d8) bg_fep_hwr_candidate_pane_g2

0x6661,	// (0x000508c1) cell_hwr_candidate_pane_ParamLimits

0x6661,	// (0x000508c1) cell_hwr_candidate_pane

0x66a3,	// (0x00050903) fep_hwr_candidate_pane_g1_ParamLimits

0xc383,	// (0x000565e3) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc383,	// (0x000565e3) bg_popup_fep_shadow_pane_cp2

0xc521,	// (0x00056781) fep_vkb_top_pane_g4_ParamLimits

0xc521,	// (0x00056781) fep_vkb_top_pane_g4

0xc567,	// (0x000567c7) fep_vkb_side_pane_g2_ParamLimits

0xc567,	// (0x000567c7) fep_vkb_side_pane_g2

0x504f,	// (0x0004f2af) list_setting_pane_t4_ParamLimits

0x504f,	// (0x0004f2af) list_setting_pane_t4

0x50e9,	// (0x0004f349) list_setting_number_pane_t5_ParamLimits

0x50e9,	// (0x0004f349) list_setting_number_pane_t5

0x8ed5,	// (0x00053135) list_double_heading_pane_cp2_ParamLimits

0x8ed5,	// (0x00053135) list_double_heading_pane_cp2

0x87b1,	// (0x00052a11) list_double_heading_pane_g1_cp2_ParamLimits

0x87b1,	// (0x00052a11) list_double_heading_pane_g1_cp2

0x8824,	// (0x00052a84) list_double_heading_pane_g2_cp2_ParamLimits

0x8824,	// (0x00052a84) list_double_heading_pane_g2_cp2

0xc888,	// (0x00056ae8) list_double_heading_pane_t1_cp2_ParamLimits

0xc888,	// (0x00056ae8) list_double_heading_pane_t1_cp2

0xc89e,	// (0x00056afe) list_double_heading_pane_t2_cp2_ParamLimits

0xc89e,	// (0x00056afe) list_double_heading_pane_t2_cp2

0x7e8f,	// (0x000520ef) aid_value_unit2

0x4af6,	// (0x0004ed56) popup_preview_fixed_window

0x8224,	// (0x00052484) bg_popup_preview_window_pane_cp02

0xc8b0,	// (0x00056b10) list_preview_fixed_pane

0xc8f6,	// (0x00056b56) list_empty_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_empty_pane_fp

0xc8f6,	// (0x00056b56) list_single_cale_day_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_cale_day_pane_fp

0xc8f6,	// (0x00056b56) list_single_graphic_heading_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_graphic_heading_pane_fp

0xc8f6,	// (0x00056b56) list_single_graphic_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_graphic_pane_fp

0xc8f6,	// (0x00056b56) list_single_heading_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_heading_pane_fp

0xc8f6,	// (0x00056b56) list_single_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_pane_fp

0xc90b,	// (0x00056b6b) list_single_pane_fp_g1_ParamLimits

0xc90b,	// (0x00056b6b) list_single_pane_fp_g1

0x87b1,	// (0x00052a11) list_single_pane_fp_g2_ParamLimits

0x87b1,	// (0x00052a11) list_single_pane_fp_g2

0x8824,	// (0x00052a84) list_single_pane_fp_g3_ParamLimits

0x8824,	// (0x00052a84) list_single_pane_fp_g3

0xc917,	// (0x00056b77) list_single_pane_fp_g4_ParamLimits

0xc917,	// (0x00056b77) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x00059dd6) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x00059dd6) list_single_pane_fp_g

0x7b0e,	// (0x00051d6e) list_single_pane_fp_t1_ParamLimits

0x7b0e,	// (0x00051d6e) list_single_pane_fp_t1

0x7b25,	// (0x00051d85) list_single_graphic_pane_fp_g1_ParamLimits

0x7b25,	// (0x00051d85) list_single_graphic_pane_fp_g1

0xc90b,	// (0x00056b6b) list_single_graphic_pane_fp_g2_ParamLimits

0xc90b,	// (0x00056b6b) list_single_graphic_pane_fp_g2

0x87b1,	// (0x00052a11) list_single_graphic_pane_fp_g3_ParamLimits

0x87b1,	// (0x00052a11) list_single_graphic_pane_fp_g3

0x8824,	// (0x00052a84) list_single_graphic_pane_fp_g4_ParamLimits

0x8824,	// (0x00052a84) list_single_graphic_pane_fp_g4

0xc917,	// (0x00056b77) list_single_graphic_pane_fp_g5_ParamLimits

0xc917,	// (0x00056b77) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059ddf) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059ddf) list_single_graphic_pane_fp_g

0x7b31,	// (0x00051d91) list_single_graphic_pane_fp_t1_ParamLimits

0x7b31,	// (0x00051d91) list_single_graphic_pane_fp_t1

0x7b25,	// (0x00051d85) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7b25,	// (0x00051d85) list_single_graphic_heading_pane_fp_g1

0xc90b,	// (0x00056b6b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00056b6b) list_single_graphic_heading_pane_fp_g2

0x87b1,	// (0x00052a11) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87b1,	// (0x00052a11) list_single_graphic_heading_pane_fp_g3

0x8824,	// (0x00052a84) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8824,	// (0x00052a84) list_single_graphic_heading_pane_fp_g4

0xc917,	// (0x00056b77) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc917,	// (0x00056b77) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059ddf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059ddf) list_single_graphic_heading_pane_fp_g

0x7b47,	// (0x00051da7) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7b47,	// (0x00051da7) list_single_graphic_heading_pane_fp_t1

0x7b5d,	// (0x00051dbd) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7b5d,	// (0x00051dbd) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x00059dea) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x00059dea) list_single_graphic_heading_pane_fp_t

0x7b6f,	// (0x00051dcf) list_single_cale_day_pane_fp_g1_ParamLimits

0x7b6f,	// (0x00051dcf) list_single_cale_day_pane_fp_g1

0xc923,	// (0x00056b83) list_single_cale_day_pane_fp_g2_ParamLimits

0xc923,	// (0x00056b83) list_single_cale_day_pane_fp_g2

0x7ba7,	// (0x00051e07) list_single_cale_day_pane_fp_g3_ParamLimits

0x7ba7,	// (0x00051e07) list_single_cale_day_pane_fp_g3

0x7bcf,	// (0x00051e2f) list_single_cale_day_pane_fp_g4_ParamLimits

0x7bcf,	// (0x00051e2f) list_single_cale_day_pane_fp_g4

0x7bf3,	// (0x00051e53) list_single_cale_day_pane_fp_g5_ParamLimits

0x7bf3,	// (0x00051e53) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x00059def) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x00059def) list_single_cale_day_pane_fp_g

0x7c17,	// (0x00051e77) list_single_cale_day_pane_fp_t1_ParamLimits

0x7c17,	// (0x00051e77) list_single_cale_day_pane_fp_t1

0x7c3d,	// (0x00051e9d) list_single_cale_day_pane_fp_t2_ParamLimits

0x7c3d,	// (0x00051e9d) list_single_cale_day_pane_fp_t2

0x7c56,	// (0x00051eb6) list_single_cale_day_pane_fp_t3_ParamLimits

0x7c56,	// (0x00051eb6) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x00059dfa) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x00059dfa) list_single_cale_day_pane_fp_t

0xc90b,	// (0x00056b6b) list_empty_pane_fp_g1_ParamLimits

0xc90b,	// (0x00056b6b) list_empty_pane_fp_g1

0x7c6f,	// (0x00051ecf) list_empty_pane_fp_t1

0x7c7d,	// (0x00051edd) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x00059e01) list_empty_pane_fp_t

0xc90b,	// (0x00056b6b) list_single_heading_pane_fp_g1_ParamLimits

0xc90b,	// (0x00056b6b) list_single_heading_pane_fp_g1

0x87b1,	// (0x00052a11) list_single_heading_pane_fp_g2_ParamLimits

0x87b1,	// (0x00052a11) list_single_heading_pane_fp_g2

0x8824,	// (0x00052a84) list_single_heading_pane_fp_g3_ParamLimits

0x8824,	// (0x00052a84) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x00059e06) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x00059e06) list_single_heading_pane_fp_g

0x7c8b,	// (0x00051eeb) list_single_heading_pane_fp_t1_ParamLimits

0x7c8b,	// (0x00051eeb) list_single_heading_pane_fp_t1

0x7c9d,	// (0x00051efd) list_single_heading_pane_fp_t2_ParamLimits

0x7c9d,	// (0x00051efd) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x00059e0d) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x00059e0d) list_single_heading_pane_fp_t

0x8a09,	// (0x00052c69) aid_size_cell_fast

0x8194,	// (0x000523f4) soft_indicator_pane_cp1_t1

0x8a46,	// (0x00052ca6) cell_app_pane_cp2_ParamLimits

0x8a46,	// (0x00052ca6) cell_app_pane_cp2

0x64e5,	// (0x00050745) fep_hwr_candidate_drop_down_list_pane

0x66bd,	// (0x0005091d) fep_hwr_candidate_pane_g3_ParamLimits

0x66bd,	// (0x0005091d) fep_hwr_candidate_pane_g3

0x399f,	// (0x0004dbff) fep_hwr_candidate_pane_g4_ParamLimits

0x399f,	// (0x0004dbff) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x00059d7c) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x00059d7c) fep_hwr_candidate_pane_g

0xc408,	// (0x00056668) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc408,	// (0x00056668) fep_vkb_candidate_drop_down_list_pane

0xc825,	// (0x00056a85) fep_vkb_candidate_pane_g3

0xc82d,	// (0x00056a8d) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x00059da9) fep_vkb_candidate_pane_g

0x6728,	// (0x00050988) cell_hwr_candidate_pane_g1_ParamLimits

0x6736,	// (0x00050996) cell_hwr_candidate_pane_g3_ParamLimits

0x6736,	// (0x00050996) cell_hwr_candidate_pane_g3

0xe0f6,	// (0x00058356) cell_hwr_candidate_pane_g4_ParamLimits

0xe0f6,	// (0x00058356) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x00059dc8) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x00059dc8) cell_hwr_candidate_pane_g

0xc844,	// (0x00056aa4) cell_vkb_candidate_pane_g3_ParamLimits

0xc844,	// (0x00056aa4) cell_vkb_candidate_pane_g3

0xc85f,	// (0x00056abf) cell_vkb_candidate_pane_g4_ParamLimits

0xc85f,	// (0x00056abf) cell_vkb_candidate_pane_g4

0xc92f,	// (0x00056b8f) cell_app_pane_cp2_g1_ParamLimits

0xc92f,	// (0x00056b8f) cell_app_pane_cp2_g1

0xc94d,	// (0x00056bad) cell_app_pane_cp2_g2_ParamLimits

0xc94d,	// (0x00056bad) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x00059e12) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x00059e12) cell_app_pane_cp2_g

0xc959,	// (0x00056bb9) cell_app_pane_cp2_t1_ParamLimits

0xc959,	// (0x00056bb9) cell_app_pane_cp2_t1

0x8816,	// (0x00052a76) grid_highlight_pane_cp1_ParamLimits

0x8816,	// (0x00052a76) grid_highlight_pane_cp1

0x6775,	// (0x000509d5) cell_hwr_candidate_pane_cp1_ParamLimits

0x6775,	// (0x000509d5) cell_hwr_candidate_pane_cp1

0x6728,	// (0x00050988) fep_hwr_candidate_drop_down_list_pane_g1

0x6794,	// (0x000509f4) fep_hwr_candidate_drop_down_list_pane_g2

0x67a1,	// (0x00050a01) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x00059e17) fep_hwr_candidate_drop_down_list_pane_g

0x67ae,	// (0x00050a0e) fep_hwr_candidate_drop_down_list_scroll_pane

0x67b7,	// (0x00050a17) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67b7,	// (0x00050a17) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67c4,	// (0x00050a24) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67c4,	// (0x00050a24) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67d1,	// (0x00050a31) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67d1,	// (0x00050a31) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67de,	// (0x00050a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67de,	// (0x00050a3e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x67f9,	// (0x00050a59) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x67f9,	// (0x00050a59) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6814,	// (0x00050a74) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6814,	// (0x00050a74) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x682f,	// (0x00050a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x682f,	// (0x00050a8f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x684a,	// (0x00050aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x684a,	// (0x00050aaa) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x00059e1e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x00059e1e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc96b,	// (0x00056bcb) cell_vkb_candidate_pane_cp1_ParamLimits

0xc96b,	// (0x00056bcb) cell_vkb_candidate_pane_cp1

0xc521,	// (0x00056781) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc521,	// (0x00056781) fep_vkb_candidate_drop_down_list_pane_g1

0xc98b,	// (0x00056beb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc98b,	// (0x00056beb) fep_vkb_candidate_drop_down_list_pane_g2

0xc998,	// (0x00056bf8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc998,	// (0x00056bf8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x00059e2f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x00059e2f) fep_vkb_candidate_drop_down_list_pane_g

0xc9a5,	// (0x00056c05) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9a5,	// (0x00056c05) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9b2,	// (0x00056c12) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9b2,	// (0x00056c12) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9bf,	// (0x00056c1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9bf,	// (0x00056c1f) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc9cb,	// (0x00056c2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc9cb,	// (0x00056c2b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc9d7,	// (0x00056c37) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc9d7,	// (0x00056c37) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc9f8,	// (0x00056c58) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc9f8,	// (0x00056c58) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca19,	// (0x00056c79) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca19,	// (0x00056c79) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3a,	// (0x00056c9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3a,	// (0x00056c9a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5b,	// (0x00056cbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5b,	// (0x00056cbb) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00059e36) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00059e36) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ec5,	// (0x00052125) title_pane_g1_ParamLimits

0x7ed2,	// (0x00052132) title_pane_g2_ParamLimits

0xf54e,	// (0x000597ae) title_pane_g_ParamLimits

0x8e7e,	// (0x000530de) aid_call2_pane

0x8e86,	// (0x000530e6) aid_call_pane

0x8e8e,	// (0x000530ee) popup_clock_analogue_window_g1

0x8e8e,	// (0x000530ee) popup_clock_analogue_window_g2

0x5553,	// (0x0004f7b3) popup_clock_analogue_window_g3

0x555c,	// (0x0004f7bc) popup_clock_analogue_window_g4

0x7eb1,	// (0x00052111) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005995d) popup_clock_analogue_window_g

0x5564,	// (0x0004f7c4) popup_clock_analogue_window_t1

0x5572,	// (0x0004f7d2) clock_digital_number_pane_ParamLimits

0x5572,	// (0x0004f7d2) clock_digital_number_pane

0x557e,	// (0x0004f7de) clock_digital_number_pane_cp02_ParamLimits

0x557e,	// (0x0004f7de) clock_digital_number_pane_cp02

0x558a,	// (0x0004f7ea) clock_digital_number_pane_cp03_ParamLimits

0x558a,	// (0x0004f7ea) clock_digital_number_pane_cp03

0x5596,	// (0x0004f7f6) clock_digital_number_pane_cp04_ParamLimits

0x5596,	// (0x0004f7f6) clock_digital_number_pane_cp04

0x55a2,	// (0x0004f802) clock_digital_separator_pane_ParamLimits

0x55a2,	// (0x0004f802) clock_digital_separator_pane

0x55ae,	// (0x0004f80e) popup_clock_digital_window_t1_ParamLimits

0x55ae,	// (0x0004f80e) popup_clock_digital_window_t1

0x7eb1,	// (0x00052111) clock_digital_number_pane_g1

0x7eb1,	// (0x00052111) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00059968) clock_digital_number_pane_g

0x7eb1,	// (0x00052111) clock_digital_separator_pane_g1

0x7eb1,	// (0x00052111) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00059968) clock_digital_separator_pane_g

0x9812,	// (0x00053a72) aid_fill_nsta_ParamLimits

0x9964,	// (0x00053bc4) indicator_nsta_pane_ParamLimits

0x9add,	// (0x00053d3d) popup_clock_analogue_window

0x9add,	// (0x00053d3d) popup_clock_digital_window

0x7f9b,	// (0x000521fb) grid_indicator_nsta_pane_ParamLimits

0xbcbc,	// (0x00055f1c) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x00059cfc) clock_nsta_pane_t

0x5517,	// (0x0004f777) aid_size_max_handle

0x5521,	// (0x0004f781) aid_size_min_handle

0x94a1,	// (0x00053701) editor_scroll_pane

0xca76,	// (0x00056cd6) ex_editor_pane

0x8977,	// (0x00052bd7) scroll_pane_cp13

0x87a9,	// (0x00052a09) scroll_pane_cp14

0x8ebd,	// (0x0005311d) scroll_pane_cp36

0x8ee9,	// (0x00053149) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ee9,	// (0x00053149) list_single_graphic_hl_pane_cp2

0x770b,	// (0x0005196b) list_single_graphic_hl_pane_ParamLimits

0x770b,	// (0x0005196b) list_single_graphic_hl_pane

0x7cb3,	// (0x00051f13) aid_size_min_hl_cp1

0xca7e,	// (0x00056cde) list_highlight_pane_cp34_ParamLimits

0xca7e,	// (0x00056cde) list_highlight_pane_cp34

0xca8f,	// (0x00056cef) list_single_graphic_hl_pane_g1_ParamLimits

0xca8f,	// (0x00056cef) list_single_graphic_hl_pane_g1

0x7cbc,	// (0x00051f1c) list_single_graphic_hl_pane_g2_ParamLimits

0x7cbc,	// (0x00051f1c) list_single_graphic_hl_pane_g2

0x7cbc,	// (0x00051f1c) list_single_graphic_hl_pane_g3_ParamLimits

0x7cbc,	// (0x00051f1c) list_single_graphic_hl_pane_g3

0x9412,	// (0x00053672) list_single_graphic_hl_pane_g4_ParamLimits

0x9412,	// (0x00053672) list_single_graphic_hl_pane_g4

0x7cc8,	// (0x00051f28) list_single_graphic_hl_pane_g5_ParamLimits

0x7cc8,	// (0x00051f28) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00059e47) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00059e47) list_single_graphic_hl_pane_g

0x7cdc,	// (0x00051f3c) list_single_graphic_hl_pane_t1_ParamLimits

0x7cdc,	// (0x00051f3c) list_single_graphic_hl_pane_t1

0xca9c,	// (0x00056cfc) aid_size_min_hl_cp2

0xcaa5,	// (0x00056d05) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa5,	// (0x00056d05) list_highlight_pane_cp34_cp2

0xca8f,	// (0x00056cef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca8f,	// (0x00056cef) list_single_graphic_hl_pane_g1_cp2

0xcab2,	// (0x00056d12) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab2,	// (0x00056d12) list_single_graphic_hl_pane_g2_cp2

0xcabe,	// (0x00056d1e) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcabe,	// (0x00056d1e) list_single_graphic_hl_pane_g3_cp2

0xc5e0,	// (0x00056840) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc5e0,	// (0x00056840) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00056d2c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00056d2c) list_single_graphic_hl_pane_g5_cp2

0x58d0,	// (0x0004fb30) control_pane_g4_ParamLimits

0x58d0,	// (0x0004fb30) control_pane_g4

0x97f0,	// (0x00053a50) bg_popup_sub_pane_cp10_ParamLimits

0xc2ad,	// (0x0005650d) list_choice_list_pane_ParamLimits

0xc2bc,	// (0x0005651c) scroll_pane_cp23

0x8224,	// (0x00052484) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8b0,	// (0x00056b10) list_preview_fixed_pane_ParamLimits

0xc8c6,	// (0x00056b26) list_preview_fixed_pane_cp_ParamLimits

0xc8c6,	// (0x00056b26) list_preview_fixed_pane_cp

0xc8d2,	// (0x00056b32) popup_preview_fixed_window_g1_ParamLimits

0xc8d2,	// (0x00056b32) popup_preview_fixed_window_g1

0xc8de,	// (0x00056b3e) popup_preview_fixed_window_g2_ParamLimits

0xc8de,	// (0x00056b3e) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x00059dcf) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x00059dcf) popup_preview_fixed_window_g

0x548b,	// (0x0004f6eb) aid_navi_side_left_pane_ParamLimits

0x54a0,	// (0x0004f700) aid_navi_side_right_pane_ParamLimits

0x54b8,	// (0x0004f718) navi_icon_pane_stacon_ParamLimits

0x54cc,	// (0x0004f72c) navi_navi_pane_stacon_ParamLimits

0x54b8,	// (0x0004f718) navi_text_pane_stacon_ParamLimits

0x49b7,	// (0x0004ec17) main_text_info_pane

0xcaf6,	// (0x00056d56) listscroll_text_info_pane

0xcafe,	// (0x00056d5e) list_text_info_pane_ParamLimits

0xcafe,	// (0x00056d5e) list_text_info_pane

0xcb0d,	// (0x00056d6d) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00056d6d) scroll_pane_cp24

0xcb2b,	// (0x00056d8b) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x00056d8b) list_text_info_pane_t1

0x5a4e,	// (0x0004fcae) popup_fast_swap2_window_ParamLimits

0x5a4e,	// (0x0004fcae) popup_fast_swap2_window

0xcb5c,	// (0x00056dbc) aid_size_cell_fast2

0x7ea7,	// (0x00052107) bg_popup_window_pane_cp17

0xa166,	// (0x000543c6) heading_pane_cp2

0x8473,	// (0x000526d3) listscroll_fast2_pane

0xcb66,	// (0x00056dc6) grid_fast2_pane

0xcb70,	// (0x00056dd0) listscroll_fast2_pane_g1

0xcb78,	// (0x00056dd8) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00059e52) listscroll_fast2_pane_g

0x8977,	// (0x00052bd7) scroll_pane_cp26

0xcb82,	// (0x00056de2) cell_fast2_pane_ParamLimits

0xcb82,	// (0x00056de2) cell_fast2_pane

0xcb97,	// (0x00056df7) cell_fast2_pane_g1

0xcba0,	// (0x00056e00) cell_fast2_pane_g2

0xcba9,	// (0x00056e09) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00059e57) cell_fast2_pane_g

0x8566,	// (0x000527c6) grid_highlight_pane_cp9

0x5a0c,	// (0x0004fc6c) main_eswt_pane_ParamLimits

0x5a0c,	// (0x0004fc6c) main_eswt_pane

0xcb22,	// (0x00056d82) list_single_text_info_pane

0xcbb1,	// (0x00056e11) eswt_ctrl_button_pane

0xcbb1,	// (0x00056e11) eswt_ctrl_canvas_pane

0xcbb9,	// (0x00056e19) eswt_ctrl_combo_pane

0xcbb1,	// (0x00056e11) eswt_ctrl_default_pane

0xcbb1,	// (0x00056e11) eswt_ctrl_label_pane

0xcbc1,	// (0x00056e21) eswt_ctrl_wait_pane

0xcbc9,	// (0x00056e29) eswt_shell_pane

0x7ea7,	// (0x00052107) listscroll_eswt_app_pane

0xcbe9,	// (0x00056e49) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x00056e49) popup_eswt_tasktip_window

0x9d7a,	// (0x00053fda) bg_popup_window_pane_cp18

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1

0xcc07,	// (0x00056e67) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00056e67) eswt_control_pane_g2

0xcc14,	// (0x00056e74) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x00056e74) eswt_control_pane_g3

0xcc21,	// (0x00056e81) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x00056e81) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00059e5e) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00059e5e) eswt_control_pane_g

0x8816,	// (0x00052a76) bg_button_pane_ParamLimits

0x8816,	// (0x00052a76) bg_button_pane

0x857b,	// (0x000527db) common_borders_pane_copy2_ParamLimits

0x857b,	// (0x000527db) common_borders_pane_copy2

0xcc2e,	// (0x00056e8e) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x00056e8e) control_button_pane_g1

0xcc3a,	// (0x00056e9a) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00056e9a) control_button_pane_g2

0xcc46,	// (0x00056ea6) control_button_pane_g3_ParamLimits

0xcc46,	// (0x00056ea6) control_button_pane_g3

0x0002,

0xfc07,	// (0x00059e67) control_button_pane_g_ParamLimits

0xfc07,	// (0x00059e67) control_button_pane_g

0xcc5a,	// (0x00056eba) control_button_pane_t1

0xcc68,	// (0x00056ec8) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00059e6e) control_button_pane_t

0x9d06,	// (0x00053f66) bg_button_pane_g1

0x9d16,	// (0x00053f76) bg_button_pane_g2

0x9d0e,	// (0x00053f6e) bg_button_pane_g3

0x9d26,	// (0x00053f86) bg_button_pane_g4

0x9d1e,	// (0x00053f7e) bg_button_pane_g5

0x9d2e,	// (0x00053f8e) bg_button_pane_g6

0x9d36,	// (0x00053f96) bg_button_pane_g7

0x9d46,	// (0x00053fa6) bg_button_pane_g8

0x9d3e,	// (0x00053f9e) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00059acb) bg_button_pane_g

0xc268,	// (0x000564c8) common_borders_pane_ParamLimits

0xc268,	// (0x000564c8) common_borders_pane

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy1

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy1

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy1

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy1

0xc2a3,	// (0x00056503) bg_eswt_ctrl_canvas_pane_g1

0xc268,	// (0x000564c8) common_borders_pane_cp2_ParamLimits

0xc268,	// (0x000564c8) common_borders_pane_cp2

0xc268,	// (0x000564c8) common_borders_pane_cp3_ParamLimits

0xc268,	// (0x000564c8) common_borders_pane_cp3

0xcc76,	// (0x00056ed6) separator_horizontal_pane

0xcc7e,	// (0x00056ede) separator_vertical_pane

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy2

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy2

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy2

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy2

0x7ea7,	// (0x00052107) common_borders_pane_cp4

0xcc87,	// (0x00056ee7) separator_horizontal_pane_g1

0xcc90,	// (0x00056ef0) separator_horizontal_pane_g2

0xcc99,	// (0x00056ef9) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00059e73) separator_horizontal_pane_g

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy3

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy3

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy3

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy3

0x7ea7,	// (0x00052107) common_borders_pane_cp5

0xcca2,	// (0x00056f02) separator_vertical_pane_g1

0xccab,	// (0x00056f0b) separator_vertical_pane_g2

0xccb4,	// (0x00056f14) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00059e7a) separator_vertical_pane_g

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00056e5a) eswt_control_pane_g1_copy4

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00056e67) eswt_control_pane_g2_copy4

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x00056e74) eswt_control_pane_g3_copy4

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x00056e81) eswt_control_pane_g4_copy4

0xccbd,	// (0x00056f1d) eswt_ctrl_combo_button_pane

0xccc5,	// (0x00056f25) eswt_ctrl_input_pane

0xcccd,	// (0x00056f2d) popup_choice_list_window_cp70

0xccd5,	// (0x00056f35) eswt_ctrl_input_pane_t1

0x7ea7,	// (0x00052107) input_focus_pane_cp70

0xc268,	// (0x000564c8) bg_button_pane_cp70_ParamLimits

0xc268,	// (0x000564c8) bg_button_pane_cp70

0xcce3,	// (0x00056f43) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x00056f4b) wait_bar_pane_cp70

0x9d7a,	// (0x00053fda) bg_popup_window_pane_cp70_ParamLimits

0x9d7a,	// (0x00053fda) bg_popup_window_pane_cp70

0xccf3,	// (0x00056f53) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00056f69) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00056f69) wait_bar_pane_cp71

0xcd15,	// (0x00056f75) grid_eswt_app_pane

0x8c97,	// (0x00052ef7) scroll_pane_cp70

0xcd1e,	// (0x00056f7e) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x00056f7e) cell_eswt_app_pane

0xcd4e,	// (0x00056fae) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x00056fae) cell_eswt_app_pane_g1

0xcd7d,	// (0x00056fdd) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00056fdd) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00059e81) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00059e81) cell_eswt_app_pane_g

0xcda6,	// (0x00057006) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00057006) cell_eswt_app_pane_t1

0xcdd8,	// (0x00057038) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00057038) grid_highlight_pane_cp70

0x9376,	// (0x000535d6) set_content_pane_g1

0x974c,	// (0x000539ac) status_small_volume_pane

0x6865,	// (0x00050ac5) status_small_volume_pane_g1

0x686d,	// (0x00050acd) volume_small2_pane

0x6876,	// (0x00050ad6) volume_small2_pane_g1

0x687f,	// (0x00050adf) volume_small2_pane_g2

0x6888,	// (0x00050ae8) volume_small2_pane_g3

0x6891,	// (0x00050af1) volume_small2_pane_g4

0x689a,	// (0x00050afa) volume_small2_pane_g5

0x68a3,	// (0x00050b03) volume_small2_pane_g6

0x68ac,	// (0x00050b0c) volume_small2_pane_g7

0x68b5,	// (0x00050b15) volume_small2_pane_g8

0x68be,	// (0x00050b1e) volume_small2_pane_g9

0x68c7,	// (0x00050b27) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00059e86) volume_small2_pane_g

0xc675,	// (0x000568d5) fep_vkb_top_text_pane_g1_ParamLimits

0xc690,	// (0x000568f0) fep_vkb_top_text_pane_t1_ParamLimits

0xc8ea,	// (0x00056b4a) popup_preview_fixed_window_g3_ParamLimits

0xc8ea,	// (0x00056b4a) popup_preview_fixed_window_g3

0x5efd,	// (0x0005015d) popup_toolbar_trans_pane

0xb0ca,	// (0x0005532a) aid_height_set_list_ParamLimits

0xb0db,	// (0x0005533b) aid_size_parent_ParamLimits

0x97f0,	// (0x00053a50) list_highlight_pane_cp2_ParamLimits

0x9376,	// (0x000535d6) set_content_pane_g1_ParamLimits

0x7726,	// (0x00051986) list_single_image_pane_ParamLimits

0x7726,	// (0x00051986) list_single_image_pane

0xcde4,	// (0x00057044) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00057044) aid_size_cell_image

0xcdf1,	// (0x00057051) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00057051) grid_single_image_pane

0x9948,	// (0x00053ba8) list_single_image_pane_g1_ParamLimits

0x9948,	// (0x00053ba8) list_single_image_pane_g1

0xcdfd,	// (0x0005705d) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x0005705d) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00059e9b) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00059e9b) list_single_image_pane_g

0xce11,	// (0x00057071) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00057071) list_single_image_pane_t1

0xce27,	// (0x00057087) cell_image_list_pane_ParamLimits

0xce27,	// (0x00057087) cell_image_list_pane

0xce3b,	// (0x0005709b) cell_image_list_pane_g1

0xce44,	// (0x000570a4) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00059ea0) cell_image_list_pane_g

0xce4d,	// (0x000570ad) aid_size_cell_tb_trans_pane

0x8816,	// (0x00052a76) bg_tb_trans_pane

0xce5f,	// (0x000570bf) grid_tb_trans_pane

0x9d06,	// (0x00053f66) bg_tb_trans_pane_g1

0x9d16,	// (0x00053f76) bg_tb_trans_pane_g2

0x9d0e,	// (0x00053f6e) bg_tb_trans_pane_g3

0x9d26,	// (0x00053f86) bg_tb_trans_pane_g4

0x9d1e,	// (0x00053f7e) bg_tb_trans_pane_g5

0x9d46,	// (0x00053fa6) bg_tb_trans_pane_g6

0x9d3e,	// (0x00053f9e) bg_tb_trans_pane_g7

0x9d2e,	// (0x00053f8e) bg_tb_trans_pane_g8

0x9d36,	// (0x00053f96) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00059ea5) bg_tb_trans_pane_g

0xce73,	// (0x000570d3) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x000570d3) cell_toolbar_trans_pane

0xc2a3,	// (0x00056503) cell_toolbar_trans_pane_g1

0xbe78,	// (0x000560d8) list_form2_midp_pane_t1

0xbe86,	// (0x000560e6) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x00059d42) list_form2_midp_pane_t

0xbe94,	// (0x000560f4) scroll_pane_cp51_ParamLimits

0xc050,	// (0x000562b0) form2_midp_wait_pane_g1

0xc059,	// (0x000562b9) form2_midp_wait_pane_g2

0xc062,	// (0x000562c2) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x00059d57) form2_midp_wait_pane_g

0x7f9b,	// (0x000521fb) list_highlight_pane_cp21_ParamLimits

0xc0ae,	// (0x0005630e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0bd,	// (0x0005631d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x76af,	// (0x0005190f) list_single_2graphic_im_pane_ParamLimits

0x76af,	// (0x0005190f) list_single_2graphic_im_pane

0xce99,	// (0x000570f9) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x000570f9) list_single_2graphic_im_pane_g1

0xceaa,	// (0x0005710a) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x0005710a) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00057116) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00057116) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00059eb8) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00059eb8) list_single_2graphic_im_pane_g

0xced6,	// (0x00057136) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00057136) list_single_2graphic_im_pane_t1

0xc8f6,	// (0x00056b56) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8f6,	// (0x00056b56) list_single_graphic_2heading_pane_fp

0x7b25,	// (0x00051d85) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7b25,	// (0x00051d85) list_single_graphic_2heading_pane_fp_g1

0xc90b,	// (0x00056b6b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc90b,	// (0x00056b6b) list_single_graphic_2heading_pane_fp_g2

0x87b1,	// (0x00052a11) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87b1,	// (0x00052a11) list_single_graphic_2heading_pane_fp_g3

0x8824,	// (0x00052a84) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8824,	// (0x00052a84) list_single_graphic_2heading_pane_fp_g4

0xc917,	// (0x00056b77) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc917,	// (0x00056b77) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x00059ddf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x00059ddf) list_single_graphic_2heading_pane_fp_g

0x7cf2,	// (0x00051f52) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7cf2,	// (0x00051f52) list_single_graphic_2heading_pane_fp_t1

0x7b5d,	// (0x00051dbd) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7b5d,	// (0x00051dbd) list_single_graphic_2heading_pane_fp_t2

0x7d08,	// (0x00051f68) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7d08,	// (0x00051f68) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00059ec1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00059ec1) list_single_graphic_2heading_pane_fp_t

0xc32f,	// (0x0005658f) fep_hwr_write_pane_g5_ParamLimits

0xc32f,	// (0x0005658f) fep_hwr_write_pane_g5

0xc33b,	// (0x0005659b) fep_hwr_write_pane_g6_ParamLimits

0xc33b,	// (0x0005659b) fep_hwr_write_pane_g6

0xcbc9,	// (0x00056e29) eswt_shell_pane_ParamLimits

0x9d7a,	// (0x00053fda) bg_popup_window_pane_cp18_ParamLimits

0xb023,	// (0x00055283) heading_pane_cp70

0xccf3,	// (0x00056f53) popup_eswt_tasktip_window_t1_ParamLimits

0x9867,	// (0x00053ac7) aid_touch_tab_arrow_left

0x9876,	// (0x00053ad6) aid_touch_tab_arrow_right

0x7ee3,	// (0x00052143) title_pane_g3_ParamLimits

0x7ee3,	// (0x00052143) title_pane_g3

0x87d5,	// (0x00052a35) set_value_pane_g1

0x5efd,	// (0x0005015d) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x000570ad) aid_size_cell_tb_trans_pane_ParamLimits

0x8816,	// (0x00052a76) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x000570bf) grid_tb_trans_pane_ParamLimits

0x8224,	// (0x00052484) cont_note_pane_ParamLimits

0x8224,	// (0x00052484) cont_note_pane

0x857b,	// (0x000527db) cont_snote2_single_text_pane_ParamLimits

0x857b,	// (0x000527db) cont_snote2_single_text_pane

0x857b,	// (0x000527db) cont_snote2_single_graphic_pane_ParamLimits

0x857b,	// (0x000527db) cont_snote2_single_graphic_pane

0xa381,	// (0x000545e1) cont_note_wait_pane_ParamLimits

0xa381,	// (0x000545e1) cont_note_wait_pane

0xa381,	// (0x000545e1) cont_note_image_pane_ParamLimits

0xa381,	// (0x000545e1) cont_note_image_pane

0xcf07,	// (0x00057167) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00057167) popup_note2_window_g1

0xcf38,	// (0x00057198) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00057198) popup_note2_window_t1

0xcf7d,	// (0x000571dd) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x000571dd) popup_note2_window_t2

0xcfc2,	// (0x00057222) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00057222) popup_note2_window_t3

0xd007,	// (0x00057267) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00057267) popup_note2_window_t4

0x82a8,	// (0x00052508) popup_note2_window_t5_ParamLimits

0x82a8,	// (0x00052508) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00059ecd) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00059ecd) popup_note2_window_t

0xd036,	// (0x00057296) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00057296) popup_note2_image_window_g1

0xd042,	// (0x000572a2) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x000572a2) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00059ed8) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00059ed8) popup_note2_image_window_g

0xd054,	// (0x000572b4) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x000572b4) popup_note2_image_window_t1

0xd06c,	// (0x000572cc) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x000572cc) popup_note2_image_window_t2

0xd084,	// (0x000572e4) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x000572e4) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00059edd) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00059edd) popup_note2_image_window_t

0xa38f,	// (0x000545ef) popup_note2_wait_window_g1_ParamLimits

0xa38f,	// (0x000545ef) popup_note2_wait_window_g1

0xd0a0,	// (0x00057300) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00057300) popup_note2_wait_window_g2

0xa3a7,	// (0x00054607) popup_note2_wait_window_g3_ParamLimits

0xa3a7,	// (0x00054607) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00059ee4) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00059ee4) popup_note2_wait_window_g

0xd0ac,	// (0x0005730c) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x0005730c) popup_note2_wait_window_t1

0xd0ca,	// (0x0005732a) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x0005732a) popup_note2_wait_window_t2

0xd0e8,	// (0x00057348) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x00057348) popup_note2_wait_window_t3

0xd0fa,	// (0x0005735a) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x0005735a) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00059eeb) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00059eeb) popup_note2_wait_window_t

0xd10c,	// (0x0005736c) wait_bar2_pane_ParamLimits

0xd10c,	// (0x0005736c) wait_bar2_pane

0xd124,	// (0x00057384) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x00057384) popup_snote2_single_text_window_g1

0xd14c,	// (0x000573ac) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x000573ac) popup_snote2_single_text_window_t1

0xd198,	// (0x000573f8) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x000573f8) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00057444) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00057444) popup_snote2_single_text_window_t3

0xd225,	// (0x00057485) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x00057485) popup_snote2_single_text_window_t4

0xd25b,	// (0x000574bb) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x000574bb) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00059ef4) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00059ef4) popup_snote2_single_text_window_t

0xd286,	// (0x000574e6) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x000574e6) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x0005750e) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x0005750e) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00059eff) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00059eff) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00057536) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00057536) popup_snote2_single_graphic_window_t1

0xd322,	// (0x00057582) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x00057582) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00057444) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00057444) popup_snote2_single_graphic_window_t3

0xd225,	// (0x00057485) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x00057485) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x000574bb) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x000574bb) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00059f04) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00059f04) popup_snote2_single_graphic_window_t

0xbd55,	// (0x00055fb5) clock_nsta_pane_cp2_t1

0xbd55,	// (0x00055fb5) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x00059d18) clock_nsta_pane_cp2_t

0x5209,	// (0x0004f469) form_field_data_wide_pane_g1_ParamLimits

0x87b1,	// (0x00052a11) form_field_data_wide_pane_g2_ParamLimits

0x87b1,	// (0x00052a11) form_field_data_wide_pane_g2

0x8824,	// (0x00052a84) form_field_data_wide_pane_g3_ParamLimits

0x8824,	// (0x00052a84) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000598e0) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000598e0) form_field_data_wide_pane_g

0xbc58,	// (0x00055eb8) grid_touch_3_pane_ParamLimits

0xbc58,	// (0x00055eb8) grid_touch_3_pane

0xd36e,	// (0x000575ce) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x000575ce) cell_touch_3_pane

0xc2a3,	// (0x00056503) cell_touch_3_pane_g1

0xc2a3,	// (0x00056503) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x00059d9d) cell_touch_3_pane_g

0x82da,	// (0x0005253a) cont_query_data_pane

0x82e2,	// (0x00052542) cont_query_data_pane_cp1

0xd39c,	// (0x000575fc) button_value_adjust_pane_cp7

0xd3a4,	// (0x00057604) query_popup_pane_cp3

0x8f7e,	// (0x000531de) bg_popup_sub_pane_cp22_ParamLimits

0x55cd,	// (0x0004f82d) navi_navi_volume_pane_cp2

0x55e8,	// (0x0004f848) popup_side_volume_key_window_g2

0x55f7,	// (0x0004f857) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00059976) popup_side_volume_key_window_g

0x5614,	// (0x0004f874) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005997d) popup_side_volume_key_window_t

0x9235,	// (0x00053495) popup_side_volume_key_window_ParamLimits

0x4e51,	// (0x0004f0b1) list_double_graphic_pane_g4_ParamLimits

0x4e51,	// (0x0004f0b1) list_double_graphic_pane_g4

0x76ec,	// (0x0005194c) list_single_2heading_msg_pane_ParamLimits

0x76ec,	// (0x0005194c) list_single_2heading_msg_pane

0x7d28,	// (0x00051f88) list_single_2heading_msg_pane_g1_ParamLimits

0x7d28,	// (0x00051f88) list_single_2heading_msg_pane_g1

0x93da,	// (0x0005363a) list_single_2heading_msg_pane_g2_ParamLimits

0x93da,	// (0x0005363a) list_single_2heading_msg_pane_g2

0x786b,	// (0x00051acb) list_single_2heading_msg_pane_g3_ParamLimits

0x786b,	// (0x00051acb) list_single_2heading_msg_pane_g3

0x7d34,	// (0x00051f94) list_single_2heading_msg_pane_g4_ParamLimits

0x7d34,	// (0x00051f94) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00059f0f) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00059f0f) list_single_2heading_msg_pane_g

0x7d4c,	// (0x00051fac) list_single_2heading_msg_pane_t1_ParamLimits

0x7d4c,	// (0x00051fac) list_single_2heading_msg_pane_t1

0x7d74,	// (0x00051fd4) list_single_2heading_msg_pane_t2_ParamLimits

0x7d74,	// (0x00051fd4) list_single_2heading_msg_pane_t2

0x7da8,	// (0x00052008) list_single_2heading_msg_pane_t3_ParamLimits

0x7da8,	// (0x00052008) list_single_2heading_msg_pane_t3

0x7de1,	// (0x00052041) list_single_2heading_msg_pane_t4_ParamLimits

0x7de1,	// (0x00052041) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00059f18) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00059f18) list_single_2heading_msg_pane_t

0x7eef,	// (0x0005214f) title_pane_g4_ParamLimits

0x7eef,	// (0x0005214f) title_pane_g4

0x53dc,	// (0x0004f63c) title_pane_stacon_g3_ParamLimits

0x53dc,	// (0x0004f63c) title_pane_stacon_g3

0xceca,	// (0x0005712a) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x0005712a) list_single_2graphic_im_pane_g4

0xade0,	// (0x00055040) popup_side_volume_key_window_cp

0xb5a6,	// (0x00055806) main_idle_act2_pane_t1

0x6011,	// (0x00050271) toolbar_button_pane_g10

0x8773,	// (0x000529d3) popup_toolbar_window_cp1

0xbd46,	// (0x00055fa6) clock_nsta_pane_cp_t1

0xbd46,	// (0x00055fa6) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x00059d13) clock_nsta_pane_cp_t

0x55cd,	// (0x0004f82d) navi_navi_volume_pane_cp2_ParamLimits

0x55dc,	// (0x0004f83c) popup_side_volume_key_window_g1_ParamLimits

0x55e8,	// (0x0004f848) popup_side_volume_key_window_g2_ParamLimits

0x55f7,	// (0x0004f857) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00059976) popup_side_volume_key_window_g_ParamLimits

0x64d1,	// (0x00050731) fep_hwr_aid_pane

0x6578,	// (0x000507d8) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2ff,	// (0x0005655f) fep_hwr_top_pane_g1_ParamLimits

0xc311,	// (0x00056571) fep_hwr_top_pane_g2_ParamLimits

0x6598,	// (0x000507f8) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x00059d68) fep_hwr_top_pane_g_ParamLimits

0x65ad,	// (0x0005080d) fep_hwr_top_text_pane_ParamLimits

0xaba3,	// (0x00054e03) aid_touch_tab_arrow_arrow_2

0xabac,	// (0x00054e0c) aid_touch_tab_arrow_left_2

0x64e5,	// (0x00050745) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x651c,	// (0x0005077c) fep_hwr_prediction_pane

0xc471,	// (0x000566d1) fep_vkb_prediction_pane

0xc575,	// (0x000567d5) fep_vkb_side_pane_g3_ParamLimits

0xc575,	// (0x000567d5) fep_vkb_side_pane_g3

0x6728,	// (0x00050988) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6794,	// (0x000509f4) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x67a1,	// (0x00050a01) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x00059e17) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x68d0,	// (0x00050b30) fep_hwr_prediction_pane_g1

0x68da,	// (0x00050b3a) fep_hwr_prediction_pane_g2

0x68e2,	// (0x00050b42) fep_hwr_prediction_pane_g3

0x68ea,	// (0x00050b4a) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00059f21) fep_hwr_prediction_pane_g

0xd3c9,	// (0x00057629) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x00057633) fep_vkb_prediction_pane_g2

0xd3db,	// (0x0005763b) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x00057643) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00059f2a) fep_vkb_prediction_pane_g

0x6351,	// (0x000505b1) slider_set_pane_g3

0x6365,	// (0x000505c5) slider_set_pane_g4

0x637d,	// (0x000505dd) slider_set_pane_g5

0x6351,	// (0x000505b1) slider_set_pane_g6

0x6393,	// (0x000505f3) slider_set_pane_g7

0xb240,	// (0x000554a0) slider_form_pane_g3

0xb249,	// (0x000554a9) slider_form_pane_g4

0xb251,	// (0x000554b1) slider_form_pane_g5

0xb240,	// (0x000554a0) slider_form_pane_g6

0xb259,	// (0x000554b9) slider_form_pane_g7

0xb850,	// (0x00055ab0) slider_set_pane_vc_g3

0xb859,	// (0x00055ab9) slider_set_pane_vc_g4

0xb862,	// (0x00055ac2) slider_set_pane_vc_g5

0xb850,	// (0x00055ab0) slider_set_pane_vc_g6

0xb86b,	// (0x00055acb) slider_set_pane_vc_g7

0xba2b,	// (0x00055c8b) slider_form_pane_vc_g1

0xba34,	// (0x00055c94) slider_form_pane_vc_g2

0xba3d,	// (0x00055c9d) slider_form_pane_vc_g3

0xba2b,	// (0x00055c8b) slider_form_pane_vc_g4

0xba46,	// (0x00055ca6) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x00059ce5) slider_form_pane_vc_g

0x49b7,	// (0x0004ec17) main_idle_act3_pane

0xd3eb,	// (0x0005764b) ai3_links_pane

0xd3f4,	// (0x00057654) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00057654) popup_ai3_data_window

0x7ea7,	// (0x00052107) grid_ai3_links_pane

0xd40e,	// (0x0005766e) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x0005766e) cell_ai3_links_pane

0xd426,	// (0x00057686) bg_popup_sub_pane_cp11

0xd433,	// (0x00057693) cell_ai3_links_pane_g1

0x7ea7,	// (0x00052107) bg_popup_sub_pane_cp12

0xd458,	// (0x000576b8) heading_ai3_data_pane

0xd460,	// (0x000576c0) list_ai3_gene_pane

0xd46c,	// (0x000576cc) popup_ai3_data_window_g1

0xd474,	// (0x000576d4) heading_ai3_data_pane_g1

0xd47c,	// (0x000576dc) heading_ai3_data_pane_t1

0xd48a,	// (0x000576ea) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x000576ea) list_double_ai3_gene_pane

0xd497,	// (0x000576f7) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x000576f7) list_single_ai3_gene_pane

0xc268,	// (0x000564c8) list_highlight_pane_cp7_ParamLimits

0xc268,	// (0x000564c8) list_highlight_pane_cp7

0xd4a4,	// (0x00057704) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x00057704) list_single_a13_gene_pane_t1

0xd4bb,	// (0x0005771b) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x00057724) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00059f33) list_single_ai3_gene_pane_g

0xd4cc,	// (0x0005772c) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x0005772c) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x00057738) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x00057738) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00057754) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00057754) list_double_ai3_gene_pane_t2

0xd50a,	// (0x0005776a) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x0005776a) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00059f38) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00059f38) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d1e,	// (0x00051f7e) aid_size_min_col_2

0xd3b5,	// (0x00057615) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x00057615) aid_size_min_msg

0xc681,	// (0x000568e1) fep_vkb_top_text_pane_g2_ParamLimits

0xc681,	// (0x000568e1) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x00059d98) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x00059d98) fep_vkb_top_text_pane_g

0x49b7,	// (0x0004ec17) main_hc_apps_shell_pane

0xd527,	// (0x00057787) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x00057787) grid_hc_apps_pane

0xd536,	// (0x00057796) list_hc_apps_pane

0xd53e,	// (0x0005779e) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x0005779e) scroll_pane_cp37

0xd54a,	// (0x000577aa) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x000577aa) cell_hc_apps_pane

0xd5f8,	// (0x00057858) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x00057858) cell_hc_apps_pane_g1

0xd629,	// (0x00057889) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x00057889) cell_hc_apps_pane_g2

0xd645,	// (0x000578a5) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x000578a5) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00059f3f) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00059f3f) cell_hc_apps_pane_g

0xd667,	// (0x000578c7) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x000578c7) cell_hc_apps_pane_t1

0x8224,	// (0x00052484) grid_highlight_pane_cp10_ParamLimits

0x8224,	// (0x00052484) grid_highlight_pane_cp10

0xd6a7,	// (0x00057907) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00057907) list_single_hc_apps_pane

0xd703,	// (0x00057963) list_single_hc_apps_pane_g1

0x7e06,	// (0x00052066) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00059f46) list_single_hc_apps_pane_g

0x7e1f,	// (0x0005207f) list_single_hc_apps_pane_g2_copy1

0x7e3b,	// (0x0005209b) list_single_hc_apps_pane_t1

0x7f9b,	// (0x000521fb) bg_set_opt_pane_cp_ParamLimits

0x4c18,	// (0x0004ee78) setting_slider_pane_t1_ParamLimits

0x4c31,	// (0x0004ee91) setting_slider_pane_t2_ParamLimits

0x4c4b,	// (0x0004eeab) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000597be) setting_slider_pane_t_ParamLimits

0x4c63,	// (0x0004eec3) slider_set_pane_ParamLimits

0x58e4,	// (0x0004fb44) control_pane_g5_ParamLimits

0x58e4,	// (0x0004fb44) control_pane_g5

0xb08f,	// (0x000552ef) slider_set_pane_g1_ParamLimits

0x6345,	// (0x000505a5) slider_set_pane_g2_ParamLimits

0x6351,	// (0x000505b1) slider_set_pane_g3_ParamLimits

0x6365,	// (0x000505c5) slider_set_pane_g4_ParamLimits

0x637d,	// (0x000505dd) slider_set_pane_g5_ParamLimits

0x6351,	// (0x000505b1) slider_set_pane_g6_ParamLimits

0x6393,	// (0x000505f3) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00059bc9) slider_set_pane_g_ParamLimits

0x9321,	// (0x00053581) navi_icon_text_pane_ParamLimits

0x9828,	// (0x00053a88) aid_fill_nsta_2_ParamLimits

0x9867,	// (0x00053ac7) aid_touch_tab_arrow_left_ParamLimits

0x9876,	// (0x00053ad6) aid_touch_tab_arrow_right_ParamLimits

0x98e3,	// (0x00053b43) clock_nsta_pane_ParamLimits

0xab85,	// (0x00054de5) navi_icon_pane_g1_ParamLimits

0xab91,	// (0x00054df1) navi_text_pane_t1_ParamLimits

0xbe52,	// (0x000560b2) navi_icon_text_pane_g1_ParamLimits

0xbe5e,	// (0x000560be) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x00057963) list_single_hc_apps_pane_g1_ParamLimits

0x7e06,	// (0x00052066) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00059f46) list_single_hc_apps_pane_g_ParamLimits

0x7e1f,	// (0x0005207f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7e3b,	// (0x0005209b) list_single_hc_apps_pane_t1_ParamLimits

0x4b22,	// (0x0004ed82) popup_toolbar2_fixed_window_ParamLimits

0x4b22,	// (0x0004ed82) popup_toolbar2_fixed_window

0x5ef3,	// (0x00050153) popup_toolbar2_float_window

0x7ea7,	// (0x00052107) bg_popup_sub_pane_cp27

0xd71c,	// (0x0005797c) grid_toolbar2_float_pane

0x7ea7,	// (0x00052107) bg_popup_sub_pane_cp26

0xd71c,	// (0x0005797c) grid_toolbar2_fixed_pane

0xd724,	// (0x00057984) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x00057984) cell_toolbar2_fixed_pane

0xd734,	// (0x00057994) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x0005799d) toolbar2_fixed_button_pane

0x9d06,	// (0x00053f66) toolbar2_fixed_button_pane_g1

0x9d16,	// (0x00053f76) toolbar2_fixed_button_pane_g2

0x9d0e,	// (0x00053f6e) toolbar2_fixed_button_pane_g3

0x9d26,	// (0x00053f86) toolbar2_fixed_button_pane_g4

0x9d1e,	// (0x00053f7e) toolbar2_fixed_button_pane_g5

0x9d2e,	// (0x00053f8e) toolbar2_fixed_button_pane_g6

0x9d36,	// (0x00053f96) toolbar2_fixed_button_pane_g7

0x9d46,	// (0x00053fa6) toolbar2_fixed_button_pane_g8

0x9d3e,	// (0x00053f9e) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00059acb) toolbar2_fixed_button_pane_g

0xd745,	// (0x000579a5) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x000579a5) cell_toolbar2_float_pane

0xd756,	// (0x000579b6) cell_toolbar2_float_pane_g1

0xd73d,	// (0x0005799d) toolbar2_fixed_button_pane_cp

0xc3d1,	// (0x00056631) fep_vkb_accented_list_pane_ParamLimits

0xc3d1,	// (0x00056631) fep_vkb_accented_list_pane

0x6708,	// (0x00050968) bg_popup_fep_shadow_pane_g9

0x94a1,	// (0x00053701) bg_popup_fep_shadow_pane_cp3

0x895e,	// (0x00052bbe) list_accented_list_pane

0xd75f,	// (0x000579bf) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x000579bf) list_single_accented_list_pane

0x94a1,	// (0x00053701) list_highlight_pane_cp10

0xd770,	// (0x000579d0) list_single_accented_list_pane_t1

0x5e43,	// (0x000500a3) popup_slider_window_ParamLimits

0x5e43,	// (0x000500a3) popup_slider_window

0xd3ac,	// (0x0005760c) aid_indentation_list_msg

0xd82a,	// (0x00057a8a) bg_popup_window_pane_cp19

0xd894,	// (0x00057af4) popup_slider_window_g1

0xd8b0,	// (0x00057b10) popup_slider_window_g2

0xd8cc,	// (0x00057b2c) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00059f4b) popup_slider_window_g

0xd928,	// (0x00057b88) popup_slider_window_t1

0xd99c,	// (0x00057bfc) small_volume_slider_vertical_pane

0xc2a3,	// (0x00056503) small_volume_slider_vertical_pane_g1

0xc2a3,	// (0x00056503) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x00057c18) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00059f5d) small_volume_slider_vertical_pane_g

0x48da,	// (0x0004eb3a) area_side_right_pane_ParamLimits

0x48da,	// (0x0004eb3a) area_side_right_pane

0x68f2,	// (0x00050b52) aid_size_side_button_ParamLimits

0x68f2,	// (0x00050b52) aid_size_side_button

0x6906,	// (0x00050b66) grid_sctrl_middle_pane_ParamLimits

0x6906,	// (0x00050b66) grid_sctrl_middle_pane

0x6925,	// (0x00050b85) sctrl_sk_bottom_pane

0x6936,	// (0x00050b96) sctrl_sk_top_pane

0x6948,	// (0x00050ba8) aid_touch_sctrl_top

0x6955,	// (0x00050bb5) bg_sctrl_sk_pane_ParamLimits

0x6955,	// (0x00050bb5) bg_sctrl_sk_pane

0x6963,	// (0x00050bc3) sctrl_sk_top_pane_g1

0x6970,	// (0x00050bd0) sctrl_sk_top_pane_t1

0x6948,	// (0x00050ba8) aid_touch_sctrl_bottom

0x6955,	// (0x00050bb5) bg_sctrl_sk_pane_cp_ParamLimits

0x6955,	// (0x00050bb5) bg_sctrl_sk_pane_cp

0x698b,	// (0x00050beb) sctrl_sk_bottom_pane_g1

0x6970,	// (0x00050bd0) sctrl_sk_bottom_pane_t1

0x6994,	// (0x00050bf4) cell_sctrl_middle_pane_ParamLimits

0x6994,	// (0x00050bf4) cell_sctrl_middle_pane

0x69af,	// (0x00050c0f) aid_touch_sctrl_middle_ParamLimits

0x69af,	// (0x00050c0f) aid_touch_sctrl_middle

0x69c1,	// (0x00050c21) bg_sctrl_middle_pane_ParamLimits

0x69c1,	// (0x00050c21) bg_sctrl_middle_pane

0x6728,	// (0x00050988) cell_sctrl_middle_pane_g1_ParamLimits

0x6728,	// (0x00050988) cell_sctrl_middle_pane_g1

0x69cf,	// (0x00050c2f) cell_sctrl_middle_pane_g2_ParamLimits

0x69cf,	// (0x00050c2f) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00059f69) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00059f69) cell_sctrl_middle_pane_g

0x9d06,	// (0x00053f66) bg_sctrl_middle_pane_g1

0x9d0e,	// (0x00053f6e) bg_sctrl_middle_pane_g2

0x9d16,	// (0x00053f76) bg_sctrl_middle_pane_g3

0x9d1e,	// (0x00053f7e) bg_sctrl_middle_pane_g4

0x9d26,	// (0x00053f86) bg_sctrl_middle_pane_g5

0x9d2e,	// (0x00053f8e) bg_sctrl_middle_pane_g6

0x9d36,	// (0x00053f96) bg_sctrl_middle_pane_g7

0x9d3e,	// (0x00053f9e) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00059f6e) bg_sctrl_middle_pane_g

0x9d46,	// (0x00053fa6) bg_sctrl_middle_pane_g8_copy1

0x9d06,	// (0x00053f66) bg_sctrl_sk_pane_g1

0x9d16,	// (0x00053f76) bg_sctrl_sk_pane_g2

0x9d0e,	// (0x00053f6e) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00059acb) bg_sctrl_sk_pane_g

0x8739,	// (0x00052999) aid_size_touch_scroll_bar

0x9d26,	// (0x00053f86) bg_sctrl_sk_pane_g4

0x9d1e,	// (0x00053f7e) bg_sctrl_sk_pane_g5

0x9d2e,	// (0x00053f8e) bg_sctrl_sk_pane_g6

0x9d36,	// (0x00053f96) bg_sctrl_sk_pane_g7

0x9d46,	// (0x00053fa6) bg_sctrl_sk_pane_g8

0x9d3e,	// (0x00053f9e) bg_sctrl_sk_pane_g9

0x5aac,	// (0x0004fd0c) popup_fep_china_hwr2_fs_candidate_window

0x5ab6,	// (0x0004fd16) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ab6,	// (0x0004fd16) popup_fep_china_hwr2_fs_control_window

0x6728,	// (0x00050988) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00059f64) sctrl_sk_top_pane_g

0xd9c1,	// (0x00057c21) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x00057c21) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x00057c33) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x00057c33) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x00057c4a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x00057c4a) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x00057c5c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x00057c5c) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x00057c6c) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x00057c74) aid_fep_china_hwr2_fs_candi_cell

0x7ea7,	// (0x00052107) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x00057c7e) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x00057c88) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x00057c88) cell_fep_china_hwr2_fs_funtion_grid

0xc2a3,	// (0x00056503) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x00057ca0) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x00057ca0) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x00057cae) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x00057cae) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00059f7f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00059f7f) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00057cc4) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00057cc4) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00057cd9) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00057cd9) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00059f84) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00059f84) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x00057cf5) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00057cfd) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x00057d05) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00059f89) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00057d0d) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00057d0d) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x00057d26) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00057d2e) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a3,	// (0x00056503) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a3,	// (0x00056503) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x00059d9d) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x00057d36) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98f0,	// (0x00053b50) clock_nsta_pane_cp_24_ParamLimits

0x98f0,	// (0x00053b50) clock_nsta_pane_cp_24

0x997a,	// (0x00053bda) indicator_nsta_pane_cp_24_ParamLimits

0x997a,	// (0x00053bda) indicator_nsta_pane_cp_24

0xaa01,	// (0x00054c61) heading_pane_g1

0x0001,

0xf8d0,	// (0x00059b30) heading_pane_g

0xb3ef,	// (0x0005564f) grid_sct_catagory_button_pane

0xb41f,	// (0x0005567f) scroll_pane_cp5_ParamLimits

0xbea0,	// (0x00056100) button_value_adjust_pane_cp5_ParamLimits

0xbea0,	// (0x00056100) button_value_adjust_pane_cp5

0xbf7f,	// (0x000561df) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x00057d44) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x00057d44) cell_sct_catagory_button_pane

0xc268,	// (0x000564c8) bg_button_pane_cp01_ParamLimits

0xc268,	// (0x000564c8) bg_button_pane_cp01

0xc2a3,	// (0x00056503) cell_sct_catagory_button_pane_g1

0x5e82,	// (0x000500e2) popup_tb_extension_window

0xdaf6,	// (0x00057d56) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x00057d56) aid_size_cell_ext

0x8224,	// (0x00052484) bg_tb_trans_pane_cp1_ParamLimits

0x8224,	// (0x00052484) bg_tb_trans_pane_cp1

0xdb16,	// (0x00057d76) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x00057d76) grid_tb_ext_pane

0xdb44,	// (0x00057da4) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x00057da4) cell_tb_ext_pane

0xdb5b,	// (0x00057dbb) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00057dbb) cell_tb_ext_pane_g1

0xdb78,	// (0x00057dd8) cell_tb_ext_pane_t1

0x8224,	// (0x00052484) list_highlight_pane_cp11_ParamLimits

0x8224,	// (0x00052484) list_highlight_pane_cp11

0x4b41,	// (0x0004eda1) popup_uni_indicator_window_ParamLimits

0x4b41,	// (0x0004eda1) popup_uni_indicator_window

0x8816,	// (0x00052a76) bg_popup_sub_pane_cp14

0xdb93,	// (0x00057df3) list_uniindi_pane

0xdb9f,	// (0x00057dff) uniindi_top_pane

0x8224,	// (0x00052484) bg_uniindi_top_pane

0xdbbe,	// (0x00057e1e) uniindi_top_pane_g1

0xdbd4,	// (0x00057e34) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00059f90) uniindi_top_pane_g

0xdbfe,	// (0x00057e5e) uniindi_top_pane_t1

0xdc28,	// (0x00057e88) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00057e88) list_single_uniindi_pane

0xc2a3,	// (0x00056503) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00057e9b) list_single_uniindi_pane_g1

0xdc4e,	// (0x00057eae) list_single_uniindi_pane_t1

0x49b7,	// (0x0004ec17) control_bg_pane

0xdc73,	// (0x00057ed3) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00057edc) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00057ee5) control_bg_pane_g1

0xdc8e,	// (0x00057eee) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00059f99) control_bg_pane_g

0xbcfb,	// (0x00055f5b) cell_indicator_nsta_pane_g1_ParamLimits

0xbd09,	// (0x00055f69) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x00059d01) cell_indicator_nsta_pane_g_ParamLimits

0x7afb,	// (0x00051d5b) form2_midp_time_pane_t1_ParamLimits

0x5a0c,	// (0x0004fc6c) main_idle_act4_pane_ParamLimits

0x5a0c,	// (0x0004fc6c) main_idle_act4_pane

0x5e82,	// (0x000500e2) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x00057d94) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x00057d94) tb_ext_find_pane

0xdc97,	// (0x00057ef7) ai_gene_pane_1_cp1

0x95e8,	// (0x00053848) ai_gene_pane_2_cp1

0xdc9f,	// (0x00057eff) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00057f08) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x00057f11) list_single_idle_plugin_player_pane

0xdcba,	// (0x00057f1a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00057f1a) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00057f3c) main_idle_act4_pane_t1

0xdcee,	// (0x00057f4e) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00059f9e) main_idle_act4_pane_t

0xdd00,	// (0x00057f60) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x00057f60) middle_sk_idle_act4_pane

0xdd16,	// (0x00057f76) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00057f90) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00057f90) shortcut_wheel_idle_act4_pane

0xc2a3,	// (0x00056503) shortcut_wheel_idle_act4_pane_g1

0xc2a3,	// (0x00056503) shortcut_wheel_idle_act4_pane_g2

0xc2a3,	// (0x00056503) shortcut_wheel_idle_act4_pane_g3

0xc2a3,	// (0x00056503) shortcut_wheel_idle_act4_pane_g4

0xc2a3,	// (0x00056503) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00057fa4) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00057fac) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00057fb4) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00057fbc) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00059fa3) shortcut_wheel_idle_act4_pane_g

0xc521,	// (0x00056781) middle_sk_idle_act4_pane_g1_ParamLimits

0xc521,	// (0x00056781) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00058020) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00058020) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00059fc6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00059fc6) middle_sk_idle_act4_pane_g

0xddcc,	// (0x0005802c) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x0005802c) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00058049) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00058049) grid_ai_shortcut_pane

0xde02,	// (0x00058062) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00058062) list_highlight_pane_cp16

0xde0f,	// (0x0005806f) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x0005806f) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x0005807b) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x0005807b) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00058093) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00058093) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00059fcb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00059fcb) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x000580a6) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x000580a6) cell_ai_shortcut_pane

0xde6a,	// (0x000580ca) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x000580ca) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00057ef7) ai_gene_pane_1_cp2

0xde8c,	// (0x000580ec) ai_gene_pane_2_cp2

0xde94,	// (0x000580f4) list_highlight_pane_cp15

0xde9d,	// (0x000580fd) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x000580f4) list_highlight_pane_cp17

0xdea5,	// (0x00058105) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x0005810d) list_single_idle_plugin_player_pane_g1

0xb648,	// (0x000558a8) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00059fd2) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00058115) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00058123) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00058131) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x0005813f) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00059fd7) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x0005814d) wait_bar_pane_cp15

0xdef5,	// (0x00058155) grid_ai_notification_pane

0xb648,	// (0x000558a8) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x0005815e) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x0005815e) cell_ai_notification_pane

0xdf0b,	// (0x0005816b) cell_ai_notification_pane_g1

0xdf13,	// (0x00058173) cell_ai_notification_pane_t1

0xdf21,	// (0x00058181) tb_ext_find_button_pane

0xdf29,	// (0x00058189) tb_ext_find_pane_g1

0xdf31,	// (0x00058191) tb_ext_find_pane_t1

0x8e8e,	// (0x000530ee) tb_ext_find_button_pane_g1

0xdf3f,	// (0x0005819f) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00059fe0) tb_ext_find_button_pane_g

0xdcdc,	// (0x00057f3c) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00057f4e) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00059f9e) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00057f76) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00057f84) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00057f84) sat_plugin_idle_act4_pane

0xdf48,	// (0x000581a8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x000581a8) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x000581bb) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x000581bb) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x000581ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x000581ce) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x000581e1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x000581e1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00059fe5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00059fe5) sat_plugin_idle_act4_pane_t

0x4a7c,	// (0x0004ecdc) popup_battery_window_ParamLimits

0x4a7c,	// (0x0004ecdc) popup_battery_window

0x8224,	// (0x00052484) bg_popup_sub_pane_cp25_ParamLimits

0x8224,	// (0x00052484) bg_popup_sub_pane_cp25

0xdf94,	// (0x000581f4) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x000581f4) popup_battery_window_g1

0xdfa0,	// (0x00058200) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00058200) popup_battery_window_t1

0xdfb2,	// (0x00058212) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00058212) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00059fee) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00059fee) popup_battery_window_t

0x94b5,	// (0x00053715) midp_canvas_pane_ParamLimits

0x952c,	// (0x0005378c) midp_keypad_pane_ParamLimits

0x952c,	// (0x0005378c) midp_keypad_pane

0x97f0,	// (0x00053a50) main_midp_pane_ParamLimits

0xbd64,	// (0x00055fc4) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x0005822f) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x0005822f) aid_size_cell_midp_keypad

0xdfe9,	// (0x00058249) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00058249) midp_keyp_game_grid_pane

0xe009,	// (0x00058269) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00058269) midp_keyp_rocker_pane

0xe042,	// (0x000582a2) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x000582a2) midp_keyp_sk_left_pane

0xe09c,	// (0x000582fc) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x000582fc) midp_keyp_sk_right_pane

0x7ea7,	// (0x00052107) bg_button_pane_cp03

0xe117,	// (0x00058377) midp_keyp_sk_left_pane_g1

0x7ea7,	// (0x00052107) bg_button_pane_cp04

0xe117,	// (0x00058377) midp_keyp_sk_right_pane_g1

0xc2a3,	// (0x00056503) midp_keyp_rocker_pane_g1

0xe120,	// (0x00058380) keyp_game_cell_pane_ParamLimits

0xe120,	// (0x00058380) keyp_game_cell_pane

0x7ea7,	// (0x00052107) bg_button_pane_cp02

0xe133,	// (0x00058393) keyp_game_cell_pane_g1

0x4ac0,	// (0x0004ed20) popup_fep_vkb2_window_ParamLimits

0x4ac0,	// (0x0004ed20) popup_fep_vkb2_window

0x69ed,	// (0x00050c4d) aid_size_cell_vkb2_ParamLimits

0x69ed,	// (0x00050c4d) aid_size_cell_vkb2

0x6a41,	// (0x00050ca1) popup_fep_vkb2_window_g1_ParamLimits

0x6a41,	// (0x00050ca1) popup_fep_vkb2_window_g1

0x6a89,	// (0x00050ce9) vkb2_area_bottom_pane_ParamLimits

0x6a89,	// (0x00050ce9) vkb2_area_bottom_pane

0x6ad5,	// (0x00050d35) vkb2_area_keypad_pane_ParamLimits

0x6ad5,	// (0x00050d35) vkb2_area_keypad_pane

0x6b17,	// (0x00050d77) vkb2_area_top_pane_ParamLimits

0x6b17,	// (0x00050d77) vkb2_area_top_pane

0x6b91,	// (0x00050df1) vkb2_top_entry_pane_ParamLimits

0x6b91,	// (0x00050df1) vkb2_top_entry_pane

0x6bbb,	// (0x00050e1b) vkb2_top_grid_left_pane_ParamLimits

0x6bbb,	// (0x00050e1b) vkb2_top_grid_left_pane

0x6bd9,	// (0x00050e39) vkb2_top_grid_right_pane_ParamLimits

0x6bd9,	// (0x00050e39) vkb2_top_grid_right_pane

0x6bf7,	// (0x00050e57) vkb2_cell_keypad_pane_ParamLimits

0x6bf7,	// (0x00050e57) vkb2_cell_keypad_pane

0x6cc8,	// (0x00050f28) vkb2_area_bottom_grid_pane_ParamLimits

0x6cc8,	// (0x00050f28) vkb2_area_bottom_grid_pane

0x6cee,	// (0x00050f4e) vkb2_area_bottom_pane_g1_ParamLimits

0x6cee,	// (0x00050f4e) vkb2_area_bottom_pane_g1

0x6d12,	// (0x00050f72) vkb2_area_bottom_pane_g2_ParamLimits

0x6d12,	// (0x00050f72) vkb2_area_bottom_pane_g2

0x6d40,	// (0x00050fa0) vkb2_area_bottom_pane_g3_ParamLimits

0x6d40,	// (0x00050fa0) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00059ff3) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00059ff3) vkb2_area_bottom_pane_g

0x6da1,	// (0x00051001) vkb2_top_cell_left_pane_ParamLimits

0x6da1,	// (0x00051001) vkb2_top_cell_left_pane

0xe144,	// (0x000583a4) vkb2_top_entry_pane_g1_ParamLimits

0xe144,	// (0x000583a4) vkb2_top_entry_pane_g1

0xe152,	// (0x000583b2) vkb2_top_entry_pane_t1_ParamLimits

0xe152,	// (0x000583b2) vkb2_top_entry_pane_t1

0xe184,	// (0x000583e4) vkb2_top_entry_pane_t2_ParamLimits

0xe184,	// (0x000583e4) vkb2_top_entry_pane_t2

0xe1b6,	// (0x00058416) vkb2_top_entry_pane_t3_ParamLimits

0xe1b6,	// (0x00058416) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00059ffa) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00059ffa) vkb2_top_entry_pane_t

0x6dee,	// (0x0005104e) vkb2_top_grid_right_pane_g1_ParamLimits

0x6dee,	// (0x0005104e) vkb2_top_grid_right_pane_g1

0x6e04,	// (0x00051064) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e04,	// (0x00051064) vkb2_top_grid_right_pane_g2

0x6e1c,	// (0x0005107c) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e1c,	// (0x0005107c) vkb2_top_grid_right_pane_g3

0x6e34,	// (0x00051094) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e34,	// (0x00051094) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005a001) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005a001) vkb2_top_grid_right_pane_g

0x6e4a,	// (0x000510aa) vkb2_top_cell_left_pane_g1

0x6e61,	// (0x000510c1) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e61,	// (0x000510c1) vkb2_cell_keypad_pane_g1

0xe1da,	// (0x0005843a) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1da,	// (0x0005843a) vkb2_cell_keypad_pane_t1

0x6e6f,	// (0x000510cf) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e6f,	// (0x000510cf) vkb2_cell_bottom_grid_pane

0x6ea8,	// (0x00051108) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00057fc4) aid_call2_pane_cp02

0xdd6c,	// (0x00057fcc) aid_call_pane_cp02

0xdd74,	// (0x00057fd4) clock_digital_number_pane_cp10

0xdd7c,	// (0x00057fdc) clock_digital_number_pane_cp11

0xdd84,	// (0x00057fe4) clock_digital_number_pane_cp12

0xdd8c,	// (0x00057fec) clock_digital_number_pane_cp13

0xdd94,	// (0x00057ff4) clock_digital_separator_pane_cp10

0x8e8e,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g1

0x8e8e,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00057ffc) popup_clock_digital_analogue_window_cp2_g3

0x8e8e,	// (0x000530ee) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00057ffc) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00059fb6) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00058004) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00058012) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00059fc1) popup_clock_digital_analogue_window_cp2_t

0xc2a3,	// (0x00056503) clock_digital_number_pane_cp10_g1

0xc2a3,	// (0x00056503) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00059d9d) clock_digital_number_pane_cp10_g

0xc2a3,	// (0x00056503) clock_digital_separator_pane_cp10_g1

0xc2a3,	// (0x00056503) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00059d9d) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x00057e40) uniindi_top_pane_g3

0xdbf1,	// (0x00057e51) uniindi_top_pane_g4

0x6c82,	// (0x00050ee2) vkb2_row_keypad_pane_ParamLimits

0x6c82,	// (0x00050ee2) vkb2_row_keypad_pane

0x6ec4,	// (0x00051124) vkb2_cell_t_keypad_pane_ParamLimits

0x6ec4,	// (0x00051124) vkb2_cell_t_keypad_pane

0x6ed4,	// (0x00051134) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6ed4,	// (0x00051134) vkb2_cell_t_keypad_pane_cp08

0x6ee7,	// (0x00051147) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ee7,	// (0x00051147) vkb2_cell_t_keypad_pane_cp09

0x6efb,	// (0x0005115b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6efb,	// (0x0005115b) vkb2_cell_t_keypad_pane_cp01

0x6f0c,	// (0x0005116c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f0c,	// (0x0005116c) vkb2_cell_t_keypad_pane_cp02

0x6f1d,	// (0x0005117d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f1d,	// (0x0005117d) vkb2_cell_t_keypad_pane_cp03

0x6f2e,	// (0x0005118e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f2e,	// (0x0005118e) vkb2_cell_t_keypad_pane_cp04

0x6f3f,	// (0x0005119f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f3f,	// (0x0005119f) vkb2_cell_t_keypad_pane_cp05

0x6f50,	// (0x000511b0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f50,	// (0x000511b0) vkb2_cell_t_keypad_pane_cp06

0x6f61,	// (0x000511c1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f61,	// (0x000511c1) vkb2_cell_t_keypad_pane_cp07

0x6f72,	// (0x000511d2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f72,	// (0x000511d2) vkb2_cell_t_keypad_pane_cp10

0x6728,	// (0x00050988) vkb2_cell_t_keypad_pane_g1

0xe1f1,	// (0x00058451) vkb2_cell_t_keypad_pane_t1

0x49b7,	// (0x0004ec17) popup_grid_graphic2_window

0xe203,	// (0x00058463) aid_size_cell_graphic2_ParamLimits

0xe203,	// (0x00058463) aid_size_cell_graphic2

0xe23b,	// (0x0005849b) bg_popup_window_pane_cp21_ParamLimits

0xe23b,	// (0x0005849b) bg_popup_window_pane_cp21

0xe249,	// (0x000584a9) graphic2_pages_pane_ParamLimits

0xe249,	// (0x000584a9) graphic2_pages_pane

0xe28f,	// (0x000584ef) grid_graphic2_control_pane_ParamLimits

0xe28f,	// (0x000584ef) grid_graphic2_control_pane

0xe2cd,	// (0x0005852d) grid_graphic2_pane_ParamLimits

0xe2cd,	// (0x0005852d) grid_graphic2_pane

0xe341,	// (0x000585a1) cell_graphic2_pane

0x49b7,	// (0x0004ec17) main_comp_mode_pane

0xd460,	// (0x000576c0) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x00057a8a) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x00057a96) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x00057a96) bg_touch_area_indi_pane

0xd84c,	// (0x00057aac) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x00057aac) bg_touch_area_indi_pane_cp01

0xd862,	// (0x00057ac2) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x00057ac2) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x00057ada) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x00057ada) bg_touch_area_indi_pane_cp03

0xd894,	// (0x00057af4) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00057b10) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x00057b2c) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00059f4b) popup_slider_window_g_ParamLimits

0xd928,	// (0x00057b88) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x00057bfc) small_volume_slider_vertical_pane_ParamLimits

0xe341,	// (0x000585a1) cell_graphic2_pane_ParamLimits

0xe390,	// (0x000585f0) bg_button_pane_cp10_ParamLimits

0xe390,	// (0x000585f0) bg_button_pane_cp10

0xe3a3,	// (0x00058603) bg_button_pane_cp11_ParamLimits

0xe3a3,	// (0x00058603) bg_button_pane_cp11

0xe3b6,	// (0x00058616) graphic2_pages_pane_g1_ParamLimits

0xe3b6,	// (0x00058616) graphic2_pages_pane_g1

0xe3d1,	// (0x00058631) graphic2_pages_pane_g2_ParamLimits

0xe3d1,	// (0x00058631) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005a00f) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005a00f) graphic2_pages_pane_g

0xe3e9,	// (0x00058649) graphic2_pages_pane_t1_ParamLimits

0xe3e9,	// (0x00058649) graphic2_pages_pane_t1

0xe401,	// (0x00058661) cell_graphic2_control_pane_ParamLimits

0xe401,	// (0x00058661) cell_graphic2_control_pane

0xe41f,	// (0x0005867f) cell_graphic2_pane_g1_ParamLimits

0xe41f,	// (0x0005867f) cell_graphic2_pane_g1

0xe42c,	// (0x0005868c) cell_graphic2_pane_g2_ParamLimits

0xe42c,	// (0x0005868c) cell_graphic2_pane_g2

0xe439,	// (0x00058699) cell_graphic2_pane_g3_ParamLimits

0xe439,	// (0x00058699) cell_graphic2_pane_g3

0xe446,	// (0x000586a6) cell_graphic2_pane_g4_ParamLimits

0xe446,	// (0x000586a6) cell_graphic2_pane_g4

0xe453,	// (0x000586b3) cell_graphic2_pane_g5_ParamLimits

0xe453,	// (0x000586b3) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005a014) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005a014) cell_graphic2_pane_g

0xe46e,	// (0x000586ce) cell_graphic2_pane_t1_ParamLimits

0xe46e,	// (0x000586ce) cell_graphic2_pane_t1

0x9d7a,	// (0x00053fda) grid_highlight_pane_cp11_ParamLimits

0x9d7a,	// (0x00053fda) grid_highlight_pane_cp11

0x8224,	// (0x00052484) bg_button_pane_cp05

0xe4a5,	// (0x00058705) cell_graphic2_control_pane_g1

0xc2a3,	// (0x00056503) bg_touch_area_indi_pane_g1

0xe4cd,	// (0x0005872d) aid_cmod_rocker_key_size

0xe4d7,	// (0x00058737) aid_cmode_itu_key_size

0xe4e1,	// (0x00058741) main_cmode_video_pane

0xe4eb,	// (0x0005874b) main_comp_mode_itu_pane

0xe4f7,	// (0x00058757) main_comp_mode_rocker_pane

0xe503,	// (0x00058763) cell_cmode_rocker_pane_ParamLimits

0xe503,	// (0x00058763) cell_cmode_rocker_pane

0xe515,	// (0x00058775) cell_cmode_itu_pane_ParamLimits

0xe515,	// (0x00058775) cell_cmode_itu_pane

0x8816,	// (0x00052a76) bg_button_pane_cp06_ParamLimits

0x8816,	// (0x00052a76) bg_button_pane_cp06

0xc521,	// (0x00056781) cell_cmode_rocker_pane_g1_ParamLimits

0xc521,	// (0x00056781) cell_cmode_rocker_pane_g1

0xda40,	// (0x00057ca0) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x00057ca0) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005a024) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005a024) cell_cmode_rocker_pane_g

0x7ea7,	// (0x00052107) bg_button_pane_cp07

0xe52a,	// (0x0005878a) cell_cmode_itu_pane_g1

0xe533,	// (0x00058793) cell_cmode_itu_pane_t1

0xe541,	// (0x000587a1) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005a029) cell_cmode_itu_pane_t

0xdc63,	// (0x00057ec3) aid_touch_ctrl_left

0xdc6b,	// (0x00057ecb) aid_touch_ctrl_right

0x7ea7,	// (0x00052107) compa_mode_pane

0xe54f,	// (0x000587af) aid_cmod_rocker_key_size_cp

0xe559,	// (0x000587b9) aid_cmode_itu_key_size_cp

0xe563,	// (0x000587c3) compa_mode_pane_g1

0xe56b,	// (0x000587cb) compa_mode_pane_g2

0xe573,	// (0x000587d3) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005a02e) compa_mode_pane_g

0xe57b,	// (0x000587db) main_comp_mode_itu_pane_cp

0xe583,	// (0x000587e3) main_comp_mode_rocker_pane_cp

0xe58b,	// (0x000587eb) cell_cmode_itu_pane_cp_ParamLimits

0xe58b,	// (0x000587eb) cell_cmode_itu_pane_cp

0xe5a0,	// (0x00058800) cell_cmode_rocker_pane_cp_ParamLimits

0xe5a0,	// (0x00058800) cell_cmode_rocker_pane_cp

0x8816,	// (0x00052a76) bg_button_pane_cp06_cp_ParamLimits

0x8816,	// (0x00052a76) bg_button_pane_cp06_cp

0xc521,	// (0x00056781) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc521,	// (0x00056781) cell_cmode_rocker_pane_g1_cp

0xc2a3,	// (0x00056503) cell_cmode_rocker_pane_g2_cp

0x7ea7,	// (0x00052107) bg_button_pane_cp07_cp

0xb240,	// (0x000554a0) cell_cmode_itu_pane_g1_cp

0xe5b2,	// (0x00058812) cell_cmode_itu_pane_t1_cp

0xe5b2,	// (0x00058812) cell_cmode_itu_pane_t2_cp

0xb22d,	// (0x0005548d) settings_code_pane_cp2

0x7f9b,	// (0x000521fb) bg_popup_window_pane_cp3_ParamLimits

0x83fe,	// (0x0005265e) heading_pane_cp3_ParamLimits

0x840a,	// (0x0005266a) listscroll_popup_graphic_pane_ParamLimits

0x64d1,	// (0x00050731) fep_hwr_aid_pane_ParamLimits

0x6948,	// (0x00050ba8) aid_touch_sctrl_top_ParamLimits

0x6963,	// (0x00050bc3) sctrl_sk_top_pane_g1_ParamLimits

0x6728,	// (0x00050988) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00059f64) sctrl_sk_top_pane_g_ParamLimits

0x6970,	// (0x00050bd0) sctrl_sk_top_pane_t1_ParamLimits

0x6948,	// (0x00050ba8) aid_touch_sctrl_bottom_ParamLimits

0x6970,	// (0x00050bd0) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00057e0c) aid_area_touch_clock

0x6b59,	// (0x00050db9) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b59,	// (0x00050db9) aid_vkb2_area_top_pane_cell

0x6ca4,	// (0x00050f04) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6ca4,	// (0x00050f04) aid_vkb2_area_bottom_pane_cell

0xe13c,	// (0x0005839c) popup_char_count_window

0xe5c0,	// (0x00058820) popup_char_count_window_g1

0xe5c9,	// (0x00058829) popup_char_count_window_g2

0xe5d2,	// (0x00058832) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005a035) popup_char_count_window_g

0xe5db,	// (0x0005883b) popup_char_count_window_t1

0x6a1f,	// (0x00050c7f) popup_fep_char_preview_window_ParamLimits

0x6a1f,	// (0x00050c7f) popup_fep_char_preview_window

0x6b77,	// (0x00050dd7) vkb2_top_candi_pane_ParamLimits

0x6b77,	// (0x00050dd7) vkb2_top_candi_pane

0xe5e9,	// (0x00058849) cell_vkb2_top_candi_pane_ParamLimits

0xe5e9,	// (0x00058849) cell_vkb2_top_candi_pane

0x6f87,	// (0x000511e7) bg_popup_fep_char_preview_window_ParamLimits

0x6f87,	// (0x000511e7) bg_popup_fep_char_preview_window

0x6f95,	// (0x000511f5) popup_fep_char_preview_window_t1_ParamLimits

0x6f95,	// (0x000511f5) popup_fep_char_preview_window_t1

0xe636,	// (0x00058896) bg_popup_fep_char_preview_window_g1

0xe63e,	// (0x0005889e) bg_popup_fep_char_preview_window_g2

0xe646,	// (0x000588a6) bg_popup_fep_char_preview_window_g3

0xe64e,	// (0x000588ae) bg_popup_fep_char_preview_window_g4

0xe656,	// (0x000588b6) bg_popup_fep_char_preview_window_g5

0x6fcf,	// (0x0005122f) bg_popup_fep_char_preview_window_g6

0xe65e,	// (0x000588be) bg_popup_fep_char_preview_window_g7

0xe666,	// (0x000588c6) bg_popup_fep_char_preview_window_g8

0xe66e,	// (0x000588ce) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005a03c) bg_popup_fep_char_preview_window_g

0x6728,	// (0x00050988) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6728,	// (0x00050988) cell_vkb2_top_candi_pane_g1

0x6736,	// (0x00050996) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6736,	// (0x00050996) cell_vkb2_top_candi_pane_g2

0xe0f6,	// (0x00058356) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe0f6,	// (0x00058356) cell_vkb2_top_candi_pane_g3

0x6fd7,	// (0x00051237) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6fd7,	// (0x00051237) cell_vkb2_top_candi_pane_g4

0xc9f8,	// (0x00056c58) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc9f8,	// (0x00056c58) cell_vkb2_top_candi_pane_g5

0x6ff8,	// (0x00051258) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6ff8,	// (0x00051258) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005a04f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005a04f) cell_vkb2_top_candi_pane_g

0x7006,	// (0x00051266) cell_vkb2_top_candi_pane_t1

0x6331,	// (0x00050591) aid_size_touch_slider_mark_ParamLimits

0x6331,	// (0x00050591) aid_size_touch_slider_mark

0xe27f,	// (0x000584df) grid_graphic2_catg_pane_ParamLimits

0xe27f,	// (0x000584df) grid_graphic2_catg_pane

0xe31d,	// (0x0005857d) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x0005857d) popup_grid_graphic2_window_t1

0xe32f,	// (0x0005858f) popup_grid_graphic2_window_t2_ParamLimits

0xe32f,	// (0x0005858f) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005a00a) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005a00a) popup_grid_graphic2_window_t

0x8224,	// (0x00052484) bg_button_pane_cp05_ParamLimits

0xe4a5,	// (0x00058705) cell_graphic2_control_pane_g1_ParamLimits

0xe676,	// (0x000588d6) cell_graphic2_catg_pane_ParamLimits

0xe676,	// (0x000588d6) cell_graphic2_catg_pane

0x7ea7,	// (0x00052107) bg_button_pane_cp12

0xe688,	// (0x000588e8) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00057dd8) cell_tb_ext_pane_t1_ParamLimits

0x6dc1,	// (0x00051021) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dc1,	// (0x00051021) vkb2_top_cell_right_narrow_pane

0x6dd9,	// (0x00051039) vkb2_top_cell_right_wide_pane_ParamLimits

0x6dd9,	// (0x00051039) vkb2_top_cell_right_wide_pane

0x64c3,	// (0x00050723) bg_vkb2_func_pane_ParamLimits

0x64c3,	// (0x00050723) bg_vkb2_func_pane

0x6e4a,	// (0x000510aa) vkb2_top_cell_left_pane_g1_ParamLimits

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp03

0x6ea8,	// (0x00051108) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d0e,	// (0x00053f6e) bg_vkb2_func_pane_g1

0x9d16,	// (0x00053f76) bg_vkb2_func_pane_g2

0x9d26,	// (0x00053f86) bg_vkb2_func_pane_g3

0x9d1e,	// (0x00053f7e) bg_vkb2_func_pane_g4

0x9d2e,	// (0x00053f8e) bg_vkb2_func_pane_g5

0x9d36,	// (0x00053f96) bg_vkb2_func_pane_g6

0x9d3e,	// (0x00053f9e) bg_vkb2_func_pane_g7

0x9d46,	// (0x00053fa6) bg_vkb2_func_pane_g8

0x9d06,	// (0x00053f66) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005a05c) bg_vkb2_func_pane_g

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp01

0x6e4a,	// (0x000510aa) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e4a,	// (0x000510aa) vkb2_top_cell_right_wide_pane_g1

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64c3,	// (0x00050723) bg_vkb2_fuc_pane_cp02

0x6ea8,	// (0x00051108) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ea8,	// (0x00051108) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00057a0e) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00057a0e) aid_touch_area_decrease

0xd7cc,	// (0x00057a2c) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x00057a2c) aid_touch_area_increase

0xd7d8,	// (0x00057a38) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x00057a38) aid_touch_area_mute

0xd7fc,	// (0x00057a5c) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x00057a5c) aid_touch_area_slider

0xd8e8,	// (0x00057b48) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x00057b48) popup_slider_window_g4

0xd8f4,	// (0x00057b54) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x00057b54) popup_slider_window_g5

0xd916,	// (0x00057b76) popup_slider_window_g6_ParamLimits

0xd916,	// (0x00057b76) popup_slider_window_g6

0xd956,	// (0x00057bb6) popup_slider_window_t2_ParamLimits

0xd956,	// (0x00057bb6) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00059f58) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00059f58) popup_slider_window_t

0xd96e,	// (0x00057bce) slider_pane_ParamLimits

0xd96e,	// (0x00057bce) slider_pane

0xe691,	// (0x000588f1) slider_pane_g1_ParamLimits

0xe691,	// (0x000588f1) slider_pane_g1

0xe6a5,	// (0x00058905) slider_pane_g2_ParamLimits

0xe6a5,	// (0x00058905) slider_pane_g2

0xe6bb,	// (0x0005891b) slider_pane_g3_ParamLimits

0xe6bb,	// (0x0005891b) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005a06f) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005a06f) slider_pane_g

0x5ede,	// (0x0005013e) popup_tb_float_extension_window_ParamLimits

0x5ede,	// (0x0005013e) popup_tb_float_extension_window

0xe6e7,	// (0x00058947) aid_size_cell_tb_float_ext

0x7ea7,	// (0x00052107) bg_popup_sub_window_cp28

0xe6f3,	// (0x00058953) grid_tb_float_ext_pane

0xe6fd,	// (0x0005895d) cell_tb_float_ext_pane_ParamLimits

0xe6fd,	// (0x0005895d) cell_tb_float_ext_pane

0xe717,	// (0x00058977) cell_tb_float_ext_pane_g1

0xe720,	// (0x00058980) grid_highlight_pane_cp12

0x6612,	// (0x00050872) cell_last_hwr_side_pane_ParamLimits

0x6612,	// (0x00050872) cell_last_hwr_side_pane

0xc2a3,	// (0x00056503) cell_last_hwr_side_pane_g1

0xe729,	// (0x00058989) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005a078) cell_last_hwr_side_pane_g

0x6d70,	// (0x00050fd0) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d70,	// (0x00050fd0) vkb2_area_bottom_space_btn_pane

0x6728,	// (0x00050988) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f1,	// (0x00058451) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7006,	// (0x00051266) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7025,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7025,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g1

0x705f,	// (0x000512bf) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x705f,	// (0x000512bf) vkb2_area_bottom_space_btn_pane_g2

0x7095,	// (0x000512f5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7095,	// (0x000512f5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005a07d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005a07d) vkb2_area_bottom_space_btn_pane_g

0x6586,	// (0x000507e6) cel_fep_hwr_func_pane_ParamLimits

0x6586,	// (0x000507e6) cel_fep_hwr_func_pane

0x65c2,	// (0x00050822) cell_hwr_side_button_pane_ParamLimits

0x65c2,	// (0x00050822) cell_hwr_side_button_pane

0xdbac,	// (0x00057e0c) aid_area_touch_clock_ParamLimits

0x8224,	// (0x00052484) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00057e1e) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00057e34) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x00057e40) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00057e51) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00059f90) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x00057e5e) uniindi_top_pane_t1_ParamLimits

0x8224,	// (0x00052484) bg_vkb2_func_pane_cp01_ParamLimits

0x8224,	// (0x00052484) bg_vkb2_func_pane_cp01

0xe732,	// (0x00058992) cel_fep_hwr_func_pane_g1_ParamLimits

0xe732,	// (0x00058992) cel_fep_hwr_func_pane_g1

0x8224,	// (0x00052484) bg_vkb2_func_pane_cp02_ParamLimits

0x8224,	// (0x00052484) bg_vkb2_func_pane_cp02

0xe732,	// (0x00058992) cell_hwr_side_button_pane_g1_ParamLimits

0xe732,	// (0x00058992) cell_hwr_side_button_pane_g1

0x9b87,	// (0x00053de7) status_pane_g4_ParamLimits

0x9b87,	// (0x00053de7) status_pane_g4

0x9ba1,	// (0x00053e01) status_pane_t1

0xbfe8,	// (0x00056248) form2_midp_gauge_slider_cont_pane

0xbff0,	// (0x00056250) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc002,	// (0x00056262) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc014,	// (0x00056274) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x00059d50) form2_midp_gauge_slider_pane_t_ParamLimits

0xc026,	// (0x00056286) form2_midp_slider_pane_ParamLimits

0x69df,	// (0x00050c3f) aid_size_cell_func_vkb2_ParamLimits

0x69df,	// (0x00050c3f) aid_size_cell_func_vkb2

0xe6d3,	// (0x00058933) slider_pane_g4_ParamLimits

0xe6d3,	// (0x00058933) slider_pane_g4

0x70df,	// (0x0005133f) form2_midp_gauge_slider_pane_t2_cp01

0x70ed,	// (0x0005134d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x70ed,	// (0x0005134d) form2_midp_gauge_slider_pane_t3_cp01

0x710a,	// (0x0005136a) form2_midp_slider_pane_cp01

0x7ea7,	// (0x00052107) navi_smil_pane

0xe76b,	// (0x000589cb) navi_smil_pane_g1

0xe773,	// (0x000589d3) navi_smil_pane_t1

0xe740,	// (0x000589a0) form2_midp_slider_pane_g1

0xe749,	// (0x000589a9) form2_midp_slider_pane_g2

0xe751,	// (0x000589b1) form2_midp_slider_pane_g3

0xe740,	// (0x000589a0) form2_midp_slider_pane_g4

0xe759,	// (0x000589b9) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005a086) form2_midp_slider_pane_g

0x70cf,	// (0x0005132f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x70cf,	// (0x0005132f) vkb2_area_bottom_space_btn_pane_g4

0x99b6,	// (0x00053c16) lc0_navi_pane_ParamLimits

0x99b6,	// (0x00053c16) lc0_navi_pane

0x9a2c,	// (0x00053c8c) lc0_stat_indi_pane_ParamLimits

0x9a2c,	// (0x00053c8c) lc0_stat_indi_pane

0x9a43,	// (0x00053ca3) ls0_title_pane_ParamLimits

0x9a43,	// (0x00053ca3) ls0_title_pane

0x8816,	// (0x00052a76) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x00057df3) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00057dff) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00057e9b) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x00057eae) list_single_uniindi_pane_t1_ParamLimits

0x7113,	// (0x00051373) lc0_stat_clock_pane_ParamLimits

0x7113,	// (0x00051373) lc0_stat_clock_pane

0xe781,	// (0x000589e1) lc0_stat_indi_pane_g1_ParamLimits

0xe781,	// (0x000589e1) lc0_stat_indi_pane_g1

0xe78e,	// (0x000589ee) lc0_stat_indi_pane_g2_ParamLimits

0xe78e,	// (0x000589ee) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005a091) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005a091) lc0_stat_indi_pane_g

0x7120,	// (0x00051380) lc0_uni_indicator_pane_ParamLimits

0x7120,	// (0x00051380) lc0_uni_indicator_pane

0xe79b,	// (0x000589fb) ls0_title_pane_g1_ParamLimits

0xe79b,	// (0x000589fb) ls0_title_pane_g1

0xe7af,	// (0x00058a0f) ls0_title_pane_t1_ParamLimits

0xe7af,	// (0x00058a0f) ls0_title_pane_t1

0x712d,	// (0x0005138d) lc0_uni_indicator_pane_g1_ParamLimits

0x712d,	// (0x0005138d) lc0_uni_indicator_pane_g1

0xe7e5,	// (0x00058a45) lc0_stat_clock_pane_t1

0x49b7,	// (0x0004ec17) main_ai5_pane

0xe7f3,	// (0x00058a53) ai5_sk_pane_ParamLimits

0xe7f3,	// (0x00058a53) ai5_sk_pane

0xe800,	// (0x00058a60) cell_ai5_widget_pane_ParamLimits

0xe800,	// (0x00058a60) cell_ai5_widget_pane

0xe8b2,	// (0x00058b12) aid_size_cell_widget_grid

0xe8c8,	// (0x00058b28) bg_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x00058b28) bg_ai5_widget_pane

0xe93c,	// (0x00058b9c) cell_ai5_widget_pane_g2

0xe94c,	// (0x00058bac) cell_ai5_widget_pane_g3

0xe963,	// (0x00058bc3) cell_ai5_widget_pane_g4

0xe96f,	// (0x00058bcf) cell_ai5_widget_pane_g5

0xe97b,	// (0x00058bdb) cell_ai5_widget_pane_g6

0xe987,	// (0x00058be7) cell_ai5_widget_pane_g7

0xe9cf,	// (0x00058c2f) cell_ai5_widget_pane_t1_ParamLimits

0xe9cf,	// (0x00058c2f) cell_ai5_widget_pane_t1

0xe9ec,	// (0x00058c4c) cell_ai5_widget_pane_t2_ParamLimits

0xe9ec,	// (0x00058c4c) cell_ai5_widget_pane_t2

0xea04,	// (0x00058c64) cell_ai5_widget_pane_t3_ParamLimits

0xea04,	// (0x00058c64) cell_ai5_widget_pane_t3

0xea1c,	// (0x00058c7c) cell_ai5_widget_pane_t4_ParamLimits

0xea1c,	// (0x00058c7c) cell_ai5_widget_pane_t4

0xea39,	// (0x00058c99) cell_ai5_widget_pane_t5_ParamLimits

0xea39,	// (0x00058c99) cell_ai5_widget_pane_t5

0xea58,	// (0x00058cb8) cell_ai5_widget_pane_t6_ParamLimits

0xea58,	// (0x00058cb8) cell_ai5_widget_pane_t6

0xea6a,	// (0x00058cca) cell_ai5_widget_pane_t7_ParamLimits

0xea6a,	// (0x00058cca) cell_ai5_widget_pane_t7

0xea83,	// (0x00058ce3) cell_ai5_widget_pane_t8_ParamLimits

0xea83,	// (0x00058ce3) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005a0ab) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005a0ab) cell_ai5_widget_pane_t

0xead7,	// (0x00058d37) grid_ai5_widget_pane

0x8816,	// (0x00052a76) highlight_cell_ai5_widget_pane_ParamLimits

0x8816,	// (0x00052a76) highlight_cell_ai5_widget_pane

0xeaee,	// (0x00058d4e) ai5_sk_left_pane

0xeaf8,	// (0x00058d58) ai5_sk_middle_pane

0xeb02,	// (0x00058d62) ai5_sk_right_pane

0xeb0c,	// (0x00058d6c) bg_ai5_widget_pane_g1_ParamLimits

0xeb0c,	// (0x00058d6c) bg_ai5_widget_pane_g1

0xeb18,	// (0x00058d78) bg_ai5_widget_pane_g2_ParamLimits

0xeb18,	// (0x00058d78) bg_ai5_widget_pane_g2

0xeb24,	// (0x00058d84) bg_ai5_widget_pane_g3_ParamLimits

0xeb24,	// (0x00058d84) bg_ai5_widget_pane_g3

0xeb30,	// (0x00058d90) bg_ai5_widget_pane_g4_ParamLimits

0xeb30,	// (0x00058d90) bg_ai5_widget_pane_g4

0xeb3c,	// (0x00058d9c) bg_ai5_widget_pane_g5_ParamLimits

0xeb3c,	// (0x00058d9c) bg_ai5_widget_pane_g5

0xeb48,	// (0x00058da8) bg_ai5_widget_pane_g6_ParamLimits

0xeb48,	// (0x00058da8) bg_ai5_widget_pane_g6

0xeb54,	// (0x00058db4) bg_ai5_widget_pane_g7_ParamLimits

0xeb54,	// (0x00058db4) bg_ai5_widget_pane_g7

0xeb60,	// (0x00058dc0) bg_ai5_widget_pane_g8_ParamLimits

0xeb60,	// (0x00058dc0) bg_ai5_widget_pane_g8

0xeb6c,	// (0x00058dcc) bg_ai5_widget_pane_g9_ParamLimits

0xeb6c,	// (0x00058dcc) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005a0c0) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005a0c0) bg_ai5_widget_pane_g

0xeb9e,	// (0x00058dfe) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb9e,	// (0x00058dfe) cell_shortcut_ai5_widget_pane

0x94a1,	// (0x00053701) bg_cell_shortcut_ai5_widget_pane

0xebaf,	// (0x00058e0f) cell_grid_ai5_widget_pane_g1

0x94a1,	// (0x00053701) highlight_cell_shortcut_ai5_widget_pane

0x9d0e,	// (0x00053f6e) ai5_sk_left_pane_g1

0xebb8,	// (0x00058e18) ai5_sk_left_pane_g2

0xebc0,	// (0x00058e20) ai5_sk_left_pane_g3

0xebc8,	// (0x00058e28) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005a0d3) ai5_sk_left_pane_g

0xebd0,	// (0x00058e30) ai5_sk_left_pane_t1

0x9d16,	// (0x00053f76) ai5_sk_right_pane_g1

0xebde,	// (0x00058e3e) ai5_sk_right_pane_g2

0xebe6,	// (0x00058e46) ai5_sk_right_pane_g3

0xebee,	// (0x00058e4e) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005a0dc) ai5_sk_right_pane_g

0xebf6,	// (0x00058e56) ai5_sk_right_pane_t1

0x9d16,	// (0x00053f76) ai5_sk_middle_pane_g1

0x9d0e,	// (0x00053f6e) ai5_sk_middle_pane_g2

0x9d2e,	// (0x00053f8e) ai5_sk_middle_pane_g3

0xebe6,	// (0x00058e46) ai5_sk_middle_pane_g4

0xebc0,	// (0x00058e20) ai5_sk_middle_pane_g5

0xec04,	// (0x00058e64) ai5_sk_middle_pane_g6

0xec0c,	// (0x00058e6c) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005a0e5) ai5_sk_middle_pane_g

0x9836,	// (0x00053a96) aid_touch_area_size_lc0_ParamLimits

0x9836,	// (0x00053a96) aid_touch_area_size_lc0

0x6757,	// (0x000509b7) cell_hwr_candidate_pane_t1_ParamLimits

0x9852,	// (0x00053ab2) aid_touch_navi_pane

0x9b31,	// (0x00053d91) status_dt_navi_pane_ParamLimits

0x9b31,	// (0x00053d91) status_dt_navi_pane

0x9b3e,	// (0x00053d9e) status_dt_sta_pane_ParamLimits

0x9b3e,	// (0x00053d9e) status_dt_sta_pane

0xec14,	// (0x00058e74) dt_sta_controll_pane

0xec21,	// (0x00058e81) dt_sta_indi_pane

0xec32,	// (0x00058e92) dt_sta_title_pane

0x8224,	// (0x00052484) bg_dt_sta_indi_pane_ParamLimits

0x8224,	// (0x00052484) bg_dt_sta_indi_pane

0xec45,	// (0x00058ea5) dt_sta_battery_pane

0xec4d,	// (0x00058ead) dt_sta_indi_pane_g1

0xec56,	// (0x00058eb6) dt_sta_indi_pane_g2

0xec5f,	// (0x00058ebf) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005a0f4) dt_sta_indi_pane_g

0xec68,	// (0x00058ec8) dt_sta_signal_pane

0x8816,	// (0x00052a76) bg_dt_sta_title_pane_ParamLimits

0x8816,	// (0x00052a76) bg_dt_sta_title_pane

0xec71,	// (0x00058ed1) dt_sta_title_pane_g1

0xec79,	// (0x00058ed9) dt_sta_title_pane_t1_ParamLimits

0xec79,	// (0x00058ed9) dt_sta_title_pane_t1

0x7ea7,	// (0x00052107) bg_dt_sta_control_pane

0xec8e,	// (0x00058eee) dt_sta_controll_pane_g1

0xec97,	// (0x00058ef7) bg_dt_sta_title_pane_g1

0xeca0,	// (0x00058f00) bg_dt_sta_title_pane_g2

0xeca9,	// (0x00058f09) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005a0fb) bg_dt_sta_title_pane_g

0xc2a3,	// (0x00056503) bg_dt_sta_indi_pane_g1

0xecb2,	// (0x00058f12) dt_sta_signal_pane_g1

0xecba,	// (0x00058f1a) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005a102) dt_sta_signal_pane_g

0xecc2,	// (0x00058f22) dt_sta_battery_pane_g1

0xeccb,	// (0x00058f2b) dt_sta_battery_pane_t1

0xc2a3,	// (0x00056503) bg_dt_sta_control_pane_g1

0x8fa0,	// (0x00053200) fep_china_uni_eep_pane

0x8fa8,	// (0x00053208) fep_china_uni_entry_pane_ParamLimits

0x8fb8,	// (0x00053218) popup_fep_china_uni_window_g1_ParamLimits

0x8fc8,	// (0x00053228) popup_fep_china_uni_window_g2_ParamLimits

0x8fc8,	// (0x00053228) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00059982) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00059982) popup_fep_china_uni_window_g

0xecda,	// (0x00058f3a) fep_china_uni_eep_pane_g1

0xece2,	// (0x00058f42) fep_china_uni_eep_pane_t1

0xe762,	// (0x000589c2) aid_touch_area_size_smil_player

0x99ae,	// (0x00053c0e) lc0_clock_pane

0x9b95,	// (0x00053df5) status_pane_g5_ParamLimits

0x9b95,	// (0x00053df5) status_pane_g5

0x5ba3,	// (0x0004fe03) popup_keymap_window

0x9b53,	// (0x00053db3) status_icon_pane

0xe94c,	// (0x00058bac) cell_ai5_widget_pane_g3_ParamLimits

0xe963,	// (0x00058bc3) cell_ai5_widget_pane_g4_ParamLimits

0xe96f,	// (0x00058bcf) cell_ai5_widget_pane_g5_ParamLimits

0xe993,	// (0x00058bf3) cell_ai5_widget_pane_g8_ParamLimits

0xe993,	// (0x00058bf3) cell_ai5_widget_pane_g8

0xe9a7,	// (0x00058c07) cell_ai5_widget_pane_g9_ParamLimits

0xe9a7,	// (0x00058c07) cell_ai5_widget_pane_g9

0xe9bb,	// (0x00058c1b) cell_ai5_widget_pane_g10_ParamLimits

0xe9bb,	// (0x00058c1b) cell_ai5_widget_pane_g10

0xecf1,	// (0x00058f51) status_icon_pane_g1

0x7ea7,	// (0x00052107) bg_popup_sub_pane_cp13

0xecf9,	// (0x00058f59) popup_keymap_window_t1

0x9776,	// (0x000539d6) control_pane_g6_ParamLimits

0x9776,	// (0x000539d6) control_pane_g6

0x9783,	// (0x000539e3) control_pane_g7_ParamLimits

0x9783,	// (0x000539e3) control_pane_g7

0x9790,	// (0x000539f0) control_pane_g8_ParamLimits

0x9790,	// (0x000539f0) control_pane_g8

0xec14,	// (0x00058e74) dt_sta_controll_pane_ParamLimits

0xec21,	// (0x00058e81) dt_sta_indi_pane_ParamLimits

0xec32,	// (0x00058e92) dt_sta_title_pane_ParamLimits

0x8742,	// (0x000529a2) aid_size_touch_scroll_bar_cale

0x4a90,	// (0x0004ecf0) popup_discreet_window_ParamLimits

0x4a90,	// (0x0004ecf0) popup_discreet_window

0x4b18,	// (0x0004ed78) popup_sk_window

0xa381,	// (0x000545e1) bg_popup_sub_pane_cp28_ParamLimits

0xa381,	// (0x000545e1) bg_popup_sub_pane_cp28

0xed07,	// (0x00058f67) popup_discreet_window_g1_ParamLimits

0xed07,	// (0x00058f67) popup_discreet_window_g1

0xed27,	// (0x00058f87) popup_discreet_window_t1_ParamLimits

0xed27,	// (0x00058f87) popup_discreet_window_t1

0xed45,	// (0x00058fa5) popup_discreet_window_t2_ParamLimits

0xed45,	// (0x00058fa5) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005a107) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005a107) popup_discreet_window_t

0x7141,	// (0x000513a1) popup_sk_window_g1

0x714b,	// (0x000513ab) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005a10e) popup_sk_window_g

0x7153,	// (0x000513b3) popup_sk_window_t1

0x7161,	// (0x000513c1) popup_sk_window_t1_copy1

0xe93c,	// (0x00058b9c) cell_ai5_widget_pane_g2_ParamLimits

0xea95,	// (0x00058cf5) cell_ai5_widget_pane_t9_ParamLimits

0xea95,	// (0x00058cf5) cell_ai5_widget_pane_t9

0x7ea7,	// (0x00052107) main_fep_fshwr2_pane

0x716f,	// (0x000513cf) aid_fshwr2_btn_pane

0x717b,	// (0x000513db) aid_fshwr2_syb_pane

0x7187,	// (0x000513e7) aid_fshwr2_txt_pane

0x7193,	// (0x000513f3) fshwr2_func_candi_pane

0x71a8,	// (0x00051408) fshwr2_hwr_syb_pane

0x71b8,	// (0x00051418) fshwr2_icf_pane

0x49b7,	// (0x0004ec17) fshwr2_icf_bg_pane

0x71e1,	// (0x00051441) fshwr2_icf_pane_t1_ParamLimits

0x71e1,	// (0x00051441) fshwr2_icf_pane_t1

0x8e8e,	// (0x000530ee) fshwr2_func_candi_pane_g1

0xed97,	// (0x00058ff7) fshwr2_func_candi_row_pane_ParamLimits

0xed97,	// (0x00058ff7) fshwr2_func_candi_row_pane

0x71f9,	// (0x00051459) cell_fshwr2_syb_pane_ParamLimits

0x71f9,	// (0x00051459) cell_fshwr2_syb_pane

0x6728,	// (0x00050988) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6728,	// (0x00050988) fshwr2_hwr_syb_pane_g1

0x49b7,	// (0x0004ec17) bg_popup_call_pane_cp01

0x720f,	// (0x0005146f) fshwr2_func_candi_cell_pane_ParamLimits

0x720f,	// (0x0005146f) fshwr2_func_candi_cell_pane

0xeda7,	// (0x00059007) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xeda7,	// (0x00059007) fshwr2_func_candi_cell_bg_pane

0x725a,	// (0x000514ba) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x725a,	// (0x000514ba) fshwr2_func_candi_cell_pane_g1

0x7282,	// (0x000514e2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7282,	// (0x000514e2) fshwr2_func_candi_cell_pane_t1

0x49b7,	// (0x0004ec17) bg_button_pane_cp08

0xedb3,	// (0x00059013) cell_fshwr2_syb_bg_pane

0x7295,	// (0x000514f5) cell_fshwr2_syb_bg_pane_g1

0x729d,	// (0x000514fd) cell_fshwr2_syb_bg_pane_t1

0x8816,	// (0x00052a76) main_tmo_pane

0xae90,	// (0x000550f0) uni_indicator_pane_g1_ParamLimits

0xaea6,	// (0x00055106) uni_indicator_pane_g2_ParamLimits

0xaebc,	// (0x0005511c) uni_indicator_pane_g3_ParamLimits

0xaecf,	// (0x0005512f) uni_indicator_pane_g4_ParamLimits

0xaecf,	// (0x0005512f) uni_indicator_pane_g4

0xaee3,	// (0x00055143) uni_indicator_pane_g5_ParamLimits

0xaee3,	// (0x00055143) uni_indicator_pane_g5

0xaee3,	// (0x00055143) uni_indicator_pane_g6_ParamLimits

0xaee3,	// (0x00055143) uni_indicator_pane_g6

0xf926,	// (0x00059b86) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x000579ea) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x000579ea) popup_tmo_note_window

0x69c1,	// (0x00050c21) fshwr2_bg_pane

0x7273,	// (0x000514d3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7273,	// (0x000514d3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005a113) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005a113) fshwr2_func_candi_cell_pane_g

0x6710,	// (0x00050970) bg_popup_window_pane_cp01

0x72ac,	// (0x0005150c) bg_popup_window_pane_g1_cp01

0xedbb,	// (0x0005901b) bg_popup_window_pane_cp22_ParamLimits

0xedbb,	// (0x0005901b) bg_popup_window_pane_cp22

0xedc9,	// (0x00059029) listscroll_tmo_link_pane_ParamLimits

0xedc9,	// (0x00059029) listscroll_tmo_link_pane

0xee09,	// (0x00059069) popup_tmo_note_window_g1_ParamLimits

0xee09,	// (0x00059069) popup_tmo_note_window_g1

0xee16,	// (0x00059076) tmo_note_info_pane_ParamLimits

0xee16,	// (0x00059076) tmo_note_info_pane

0xee30,	// (0x00059090) list_tmo_note_info_pane_g1_ParamLimits

0xee30,	// (0x00059090) list_tmo_note_info_pane_g1

0xee47,	// (0x000590a7) list_tmo_note_info_pane_g2_ParamLimits

0xee47,	// (0x000590a7) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005a118) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005a118) list_tmo_note_info_pane_g

0xee63,	// (0x000590c3) list_tmo_note_info_text_pane_ParamLimits

0xee63,	// (0x000590c3) list_tmo_note_info_text_pane

0xeee4,	// (0x00059144) list_tmo_link_pane

0xeef1,	// (0x00059151) scroll_pane_cp20

0xeefe,	// (0x0005915e) list_single_tmo_link_pane_ParamLimits

0xeefe,	// (0x0005915e) list_single_tmo_link_pane

0xef0e,	// (0x0005916e) list_single_tmo_link_pane_t1

0xef1c,	// (0x0005917c) list_tmo_note_info_text_pane_t1_ParamLimits

0xef1c,	// (0x0005917c) list_tmo_note_info_text_pane_t1

0x88c1,	// (0x00052b21) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88c1,	// (0x00052b21) aid_size_touch_scroll_bar_cp01

0x526c,	// (0x0004f4cc) aid_size_touch_slider_marker

0x4b00,	// (0x0004ed60) popup_settings_window_ParamLimits

0x4b00,	// (0x0004ed60) popup_settings_window

0x5a28,	// (0x0004fc88) popup_candi_list_indi_window

0x9852,	// (0x00053ab2) aid_touch_navi_pane_ParamLimits

0x691c,	// (0x00050b7c) rs_clock_indi_pane

0x6925,	// (0x00050b85) sctrl_sk_bottom_pane_ParamLimits

0x6936,	// (0x00050b96) sctrl_sk_top_pane_ParamLimits

0x6a39,	// (0x00050c99) popup_fep_tooltip_window

0xe8b2,	// (0x00058b12) aid_size_cell_widget_grid_ParamLimits

0xe927,	// (0x00058b87) cell_ai5_widget_pane_g1_ParamLimits

0xe927,	// (0x00058b87) cell_ai5_widget_pane_g1

0xe97b,	// (0x00058bdb) cell_ai5_widget_pane_g6_ParamLimits

0xe987,	// (0x00058be7) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005a096) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005a096) cell_ai5_widget_pane_g

0xeab9,	// (0x00058d19) cell_ai5_widget_pane_t10_ParamLimits

0xeab9,	// (0x00058d19) cell_ai5_widget_pane_t10

0xead7,	// (0x00058d37) grid_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00058dd8) cell_contacts_ai5_widget_pane_ParamLimits

0xeb78,	// (0x00058dd8) cell_contacts_ai5_widget_pane

0xed5a,	// (0x00058fba) popup_discreet_window_t3_ParamLimits

0xed5a,	// (0x00058fba) popup_discreet_window_t3

0x71cd,	// (0x0005142d) popup_fshwr2_char_preview_window_ParamLimits

0x71cd,	// (0x0005142d) popup_fshwr2_char_preview_window

0xee81,	// (0x000590e1) tmo_note_info_pane_t1

0xee96,	// (0x000590f6) tmo_note_info_pane_t2

0xeeab,	// (0x0005910b) tmo_note_info_pane_t3

0xeec0,	// (0x00059120) tmo_note_info_pane_t4

0xeed2,	// (0x00059132) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005a11d) tmo_note_info_pane_t

0xeee4,	// (0x00059144) list_tmo_link_pane_ParamLimits

0xeef1,	// (0x00059151) scroll_pane_cp20_ParamLimits

0x49b7,	// (0x0004ec17) bg_popup_fep_char_preview_window_cp01

0xef35,	// (0x00059195) popup_fshwr2_char_preview_window_t1

0xef43,	// (0x000591a3) popup_candi_list_indi_window_g1

0xef4c,	// (0x000591ac) bg_cell_contacts_ai5_widget_pane

0xef58,	// (0x000591b8) cell_contacts_ai5_widget_pane_g1

0xc94d,	// (0x00056bad) cell_contacts_ai5_widget_pane_g2

0xef6d,	// (0x000591cd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005a128) cell_contacts_ai5_widget_pane_g

0xef79,	// (0x000591d9) cell_contacts_ai5_widget_pane_t1

0x8816,	// (0x00052a76) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff0,	// (0x00059250) settings_container_pane

0x94a1,	// (0x00053701) listscroll_set_pane_copy1

0xb9b4,	// (0x00055c14) scroll_pane_cp121_copy1

0xa132,	// (0x00054392) set_content_pane_copy1

0xeffc,	// (0x0005925c) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x0005925c) aid_height_set_list_copy1

0xb0db,	// (0x0005533b) aid_size_parent_copy1_ParamLimits

0xb0db,	// (0x0005533b) aid_size_parent_copy1

0xf008,	// (0x00059268) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00059268) button_value_adjust_pane_cp6_copy1

0x97f0,	// (0x00053a50) list_highlight_pane_cp2_copy1_ParamLimits

0x97f0,	// (0x00053a50) list_highlight_pane_cp2_copy1

0xf01c,	// (0x0005927c) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x0005927c) list_set_pane_copy1

0xef8b,	// (0x000591eb) main_pane_set_t1_copy1_ParamLimits

0xef8b,	// (0x000591eb) main_pane_set_t1_copy1

0xefc5,	// (0x00059225) main_pane_set_t2_copy1_ParamLimits

0xefc5,	// (0x00059225) main_pane_set_t2_copy1

0xf0c9,	// (0x00059329) main_pane_set_t3_copy1

0xf0d7,	// (0x00059337) main_pane_set_t4_copy1

0xefe4,	// (0x00059244) set_content_pane_g1_copy1_ParamLimits

0xefe4,	// (0x00059244) set_content_pane_g1_copy1

0xf0e5,	// (0x00059345) setting_code_pane_copy1

0xf0ed,	// (0x0005934d) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x0005934d) setting_slider_pane_copy1

0xf0ed,	// (0x0005934d) setting_text_pane_copy1

0xf0ed,	// (0x0005934d) setting_volume_pane_copy1

0xf0e5,	// (0x00059345) settings_code_pane_cp2_copy1

0xf0f5,	// (0x00059355) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x00059355) settings_code_pane_cp_copy1

0x72b5,	// (0x00051515) volume_set_pane_copy1

0xf109,	// (0x00059369) volume_set_pane_g10_copy1

0xf111,	// (0x00059371) volume_set_pane_g1_copy1

0xf119,	// (0x00059379) volume_set_pane_g2_copy1

0xf121,	// (0x00059381) volume_set_pane_g3_copy1

0xf129,	// (0x00059389) volume_set_pane_g4_copy1

0xf131,	// (0x00059391) volume_set_pane_g5_copy1

0xf139,	// (0x00059399) volume_set_pane_g6_copy1

0xf141,	// (0x000593a1) volume_set_pane_g7_copy1

0xf149,	// (0x000593a9) volume_set_pane_g8_copy1

0xf151,	// (0x000593b1) volume_set_pane_g9_copy1

0x7f9b,	// (0x000521fb) bg_set_opt_pane_cp_copy1_ParamLimits

0x7f9b,	// (0x000521fb) bg_set_opt_pane_cp_copy1

0x72bd,	// (0x0005151d) setting_slider_pane_t1_copy1_ParamLimits

0x72bd,	// (0x0005151d) setting_slider_pane_t1_copy1

0x72db,	// (0x0005153b) setting_slider_pane_t2_copy1_ParamLimits

0x72db,	// (0x0005153b) setting_slider_pane_t2_copy1

0x72f5,	// (0x00051555) setting_slider_pane_t3_copy1_ParamLimits

0x72f5,	// (0x00051555) setting_slider_pane_t3_copy1

0x730d,	// (0x0005156d) slider_set_pane_copy1_ParamLimits

0x730d,	// (0x0005156d) slider_set_pane_copy1

0x8862,	// (0x00052ac2) set_opt_bg_pane_g1_copy2

0x886a,	// (0x00052aca) set_opt_bg_pane_g2_copy2

0xf159,	// (0x000593b9) set_opt_bg_pane_g3_copy2

0x887a,	// (0x00052ada) set_opt_bg_pane_g4_copy2

0x8882,	// (0x00052ae2) set_opt_bg_pane_g5_copy2

0x888a,	// (0x00052aea) set_opt_bg_pane_g6_copy2

0xf163,	// (0x000593c3) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x000593cb) set_opt_bg_pane_g8_copy2

0xf175,	// (0x000593d5) set_opt_bg_pane_g9_copy2

0x7323,	// (0x00051583) aid_size_touch_slider_mark_copy1_ParamLimits

0x7323,	// (0x00051583) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x000593df) slider_set_pane_g1_copy1

0x7337,	// (0x00051597) slider_set_pane_g2_copy1

0x6351,	// (0x000505b1) slider_set_pane_g3_copy1_ParamLimits

0x6351,	// (0x000505b1) slider_set_pane_g3_copy1

0x6365,	// (0x000505c5) slider_set_pane_g4_copy1_ParamLimits

0x6365,	// (0x000505c5) slider_set_pane_g4_copy1

0x637d,	// (0x000505dd) slider_set_pane_g5_copy1_ParamLimits

0x637d,	// (0x000505dd) slider_set_pane_g5_copy1

0x6351,	// (0x000505b1) slider_set_pane_g6_copy1_ParamLimits

0x6351,	// (0x000505b1) slider_set_pane_g6_copy1

0x733f,	// (0x0005159f) slider_set_pane_g7_copy1_ParamLimits

0x733f,	// (0x0005159f) slider_set_pane_g7_copy1

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x000593e8) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x000593f1) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x00059401) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x00059411) slider_set_pane_cp_copy1

0xf1c1,	// (0x00059421) input_focus_pane_cp1_copy1

0xf1ca,	// (0x0005942a) list_set_text_pane_copy1

0xf1d2,	// (0x00059432) setting_text_pane_g1_copy1

0x7e69,	// (0x000520c9) set_text_pane_t1_copy1

0xf1c1,	// (0x00059421) input_focus_pane_cp2_copy1

0xf1d2,	// (0x00059432) setting_code_pane_g1_copy1

0xf1db,	// (0x0005943b) setting_code_pane_t1_copy1

0xf1e9,	// (0x00059449) list_set_graphic_pane_copy1

0x7ebb,	// (0x0005211b) bg_set_opt_pane_cp4_copy1

0x919c,	// (0x000533fc) list_set_graphic_pane_g1_copy1_ParamLimits

0x919c,	// (0x000533fc) list_set_graphic_pane_g1_copy1

0xf1fc,	// (0x0005945c) list_set_graphic_pane_g2_copy1

0x91b4,	// (0x00053414) list_set_graphic_pane_t1_copy1_ParamLimits

0x91b4,	// (0x00053414) list_set_graphic_pane_t1_copy1

0xc2a3,	// (0x00056503) rs_clock_indi_pane_g1

0xf204,	// (0x00059464) rs_clock_indi_pane_t1

0xf212,	// (0x00059472) rs_indi_pane

0xf21a,	// (0x0005947a) rs_indi_pane_g1

0xf223,	// (0x00059483) rs_indi_pane_g2

0xf22c,	// (0x0005948c) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005a12f) rs_indi_pane_g

0x94a1,	// (0x00053701) bg_popup_preview_window_pane_cp03

0xf235,	// (0x00059495) popup_fep_tooltip_window_t1

0xcf2b,	// (0x0005718b) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x0005718b) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00059ec8) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00059ec8) popup_note2_window_g

0xd426,	// (0x00057686) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x00057693) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x000576aa) cell_ai3_links_pane_t1

0x7e69,	// (0x000520c9) set_text_pane_t1_copy1_ParamLimits

0x93b2,	// (0x00053612) cell_graphic_popup_pane_cp2_ParamLimits

0x93b2,	// (0x00053612) cell_graphic_popup_pane_cp2

0xf243,	// (0x000594a3) cell_graphic_popup_pane_g1_cp2

0x8555,	// (0x000527b5) cell_graphic_popup_pane_g2_cp2

0xf24b,	// (0x000594ab) cell_graphic_popup_pane_g3_cp2

0xf253,	// (0x000594b3) cell_graphic_popup_pane_t2_cp2

0x8566,	// (0x000527c6) grid_highlight_pane_cp3_cp2

0x8ba7,	// (0x00052e07) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8816,	// (0x00052a76) main_tmo_pane_ParamLimits

0xd77e,	// (0x000579de) popup_tmo_big_image_note_window

0xe916,	// (0x00058b76) cell_ai5_widget_list_pane

0xe91e,	// (0x00058b7e) cell_ai5_widget_lrg_icon_pane

0xee81,	// (0x000590e1) tmo_note_info_pane_t1_ParamLimits

0xee96,	// (0x000590f6) tmo_note_info_pane_t2_ParamLimits

0xeeab,	// (0x0005910b) tmo_note_info_pane_t3_ParamLimits

0xeec0,	// (0x00059120) tmo_note_info_pane_t4_ParamLimits

0xeed2,	// (0x00059132) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005a11d) tmo_note_info_pane_t_ParamLimits

0xeff0,	// (0x00059250) settings_container_pane_ParamLimits

0xf1b9,	// (0x00059419) indicator_popup_pane_cp5

0xf1b9,	// (0x00059419) indicator_popup_pane_cp6

0xf1e9,	// (0x00059449) list_set_graphic_pane_copy1_ParamLimits

0x7ea7,	// (0x00052107) bg_popup_window_pane_cp23

0xf261,	// (0x000594c1) popup_tmo_big_image_note_window_g1

0xf26b,	// (0x000594cb) popup_tmo_big_image_note_window_t1

0xf27b,	// (0x000594db) popup_tmo_big_image_note_window_t2

0xf28b,	// (0x000594eb) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005a136) popup_tmo_big_image_note_window_t

0xc2a3,	// (0x00056503) cell_ai5_widget_lrg_icon_pane_g1

0xf29b,	// (0x000594fb) cell_ai5_widget_lrg_icon_pane_t1

0xf2a9,	// (0x00059509) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a9,	// (0x00059509) cell_ai5_widget_list_row_pane

0xf2c0,	// (0x00059520) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c0,	// (0x00059520) cell_ai5_widget_list_row_pane_g1

0xf2cd,	// (0x0005952d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cd,	// (0x0005952d) cell_ai5_widget_list_row_pane_t1

0xf2fe,	// (0x0005955e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fe,	// (0x0005955e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005a13d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005a13d) cell_ai5_widget_list_row_pane_t

0x49b7,	// (0x0004ec17) main_fep_vtchi_ss_pane

0xf342,	// (0x000595a2) popup_fep_char_pre_window

0xf34a,	// (0x000595aa) popup_fep_ituss_window

0xf36b,	// (0x000595cb) popup_fep_vkbss_window

0xf395,	// (0x000595f5) grid_vkbss_keypad_pane_ParamLimits

0xf395,	// (0x000595f5) grid_vkbss_keypad_pane

0xf3a5,	// (0x00059605) ituss_keypad_pane

0x7361,	// (0x000515c1) aid_vkbss_key_offset_ParamLimits

0x7361,	// (0x000515c1) aid_vkbss_key_offset

0x736d,	// (0x000515cd) cell_vkbss_key_pane_ParamLimits

0x736d,	// (0x000515cd) cell_vkbss_key_pane

0xf3b4,	// (0x00059614) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x00059614) bg_cell_vkbss_key_g1

0xf3c0,	// (0x00059620) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x00059620) cell_vkbss_key_3p_pane

0xf3d4,	// (0x00059634) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x00059634) cell_vkbss_key_g1

0xf3e8,	// (0x00059648) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x00059648) cell_vkbss_key_t1

0x7383,	// (0x000515e3) cell_ituss_key_pane_ParamLimits

0x7383,	// (0x000515e3) cell_ituss_key_pane

0xf413,	// (0x00059673) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00059673) bg_cell_ituss_key_g1

0xf41f,	// (0x0005967f) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0005967f) cell_ituss_key_pane_g1

0x7394,	// (0x000515f4) cell_ituss_key_pane_g2_ParamLimits

0x7394,	// (0x000515f4) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005a144) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005a144) cell_ituss_key_pane_g

0x73c0,	// (0x00051620) cell_ituss_key_t1_ParamLimits

0x73c0,	// (0x00051620) cell_ituss_key_t1

0x73fa,	// (0x0005165a) cell_ituss_key_t2_ParamLimits

0x73fa,	// (0x0005165a) cell_ituss_key_t2

0x742b,	// (0x0005168b) cell_ituss_key_t3_ParamLimits

0x742b,	// (0x0005168b) cell_ituss_key_t3

0x73fa,	// (0x0005165a) cell_ituss_key_t4_ParamLimits

0x73fa,	// (0x0005165a) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005a14b) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005a14b) cell_ituss_key_t

0xf44b,	// (0x000596ab) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x000596b3) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x000596bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005a156) cell_vkbss_key_3p_pane_g

0x49b7,	// (0x0004ec17) bg_popup_fep_char_preview_window_cp02

0x746e,	// (0x000516ce) popup_fep_char_pre_window_t1

0xe8a8,	// (0x00058b08) main_ai5_sk_pane

0xef4c,	// (0x000591ac) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef58,	// (0x000591b8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc94d,	// (0x00056bad) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef6d,	// (0x000591cd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005a128) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef79,	// (0x000591d9) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8816,	// (0x00052a76) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x000596c3) main_ai5_sk_pane_g1

0xa1ba,	// (0x0005441a) popup_query_code_window_g1

0xf360,	// (0x000595c0) popup_fep_vkb_icf_pane

0xf37f,	// (0x000595df) popup_fep_vtchi_icf_pane

0xf46c,	// (0x000596cc) bg_icf_pane

0xf478,	// (0x000596d8) list_vkb_icf_pane

0xf487,	// (0x000596e7) bg_icf_pane_cp01

0xf49a,	// (0x000596fa) vtchi_icf_list_pane

0xf4aa,	// (0x0005970a) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0005970a) list_vkb_icf_pane_t1

0xf4c0,	// (0x00059720) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x00059720) vtchi_icf_list_pane_t1

0xf34a,	// (0x000595aa) popup_fep_ituss_window_ParamLimits

0xf37f,	// (0x000595df) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x00059605) ituss_keypad_pane_ParamLimits

0x7355,	// (0x000515b5) ituss_sks_pane

0xf46c,	// (0x000596cc) bg_icf_pane_ParamLimits

0xf326,	// (0x00059586) icf_edit_indi_pane_ParamLimits

0xf326,	// (0x00059586) icf_edit_indi_pane

0xf478,	// (0x000596d8) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x000596e7) bg_icf_pane_cp01_ParamLimits

0xf335,	// (0x00059595) icf_edit_indi_pane_cp01_ParamLimits

0xf335,	// (0x00059595) icf_edit_indi_pane_cp01

0xf4a2,	// (0x00059702) vtchi_query_pane

0xc521,	// (0x00056781) icf_edit_indi_pane_g1_ParamLimits

0xc521,	// (0x00056781) icf_edit_indi_pane_g1

0xf531,	// (0x00059791) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00059791) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005a16e) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005a16e) icf_edit_indi_pane_g

0xf540,	// (0x000597a0) icf_edit_indi_pane_t1

0xf4da,	// (0x0005973a) bg_input_focus_pane_cp042

0x8739,	// (0x00052999) vtchi_button_pane

0xf4e3,	// (0x00059743) vtchi_query_pane_t1

0xf4f1,	// (0x00059751) vtchi_query_pane_t2

0xf4ff,	// (0x0005975f) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005a15d) vtchi_query_pane_t

0x49b7,	// (0x0004ec17) bg_button_pane_cp13

0xf50d,	// (0x0005976d) vtchi_button_pane_g1

0x747d,	// (0x000516dd) ituss_sks_pane_g1

0x7488,	// (0x000516e8) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005a164) ituss_sks_pane_g

0xf515,	// (0x00059775) ituss_sks_pane_t1

0xf523,	// (0x00059783) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005a169) ituss_sks_pane_t

0xbd2e,	// (0x00055f8e) indicator_nsta_pane_cp_g1

0xbd36,	// (0x00055f96) indicator_nsta_pane_cp_g2

0xbd3e,	// (0x00055f9e) indicator_nsta_pane_cp_g3

0xbd2e,	// (0x00055f8e) indicator_nsta_pane_cp_g4

0xbd36,	// (0x00055f96) indicator_nsta_pane_cp_g5

0xbd3e,	// (0x00055f9e) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x00059d06) indicator_nsta_pane_cp_g

0xe492,	// (0x000586f2) cell_graphic2_pane_t2_ParamLimits

0xe492,	// (0x000586f2) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005a01f) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005a01f) cell_graphic2_pane_t

0xe4bf,	// (0x0005871f) cell_graphic2_control_pane_t1

0x8f4f,	// (0x000531af) signal_pane_g3_ParamLimits

0x8f4f,	// (0x000531af) signal_pane_g3

0x8f61,	// (0x000531c1) signal_pane_g4_ParamLimits

0x8f61,	// (0x000531c1) signal_pane_g4

0xf310,	// (0x00059570) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf310,	// (0x00059570) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x00059699) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x00059699) cell_ituss_key_pane_t1

0x9e0b,	// (0x0005406b) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e0b,	// (0x0005406b) form_field_data_wide_pane_vc_t2

0x9e1f,	// (0x0005407f) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e1f,	// (0x0005407f) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00059a6e) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00059a6e) form_field_data_wide_pane_vc_t

0xb9f6,	// (0x00055c56) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9f6,	// (0x00055c56) form_field_slider_wide_pane_vc_t3

0xbad4,	// (0x00055d34) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbad4,	// (0x00055d34) form_field_popup_wide_pane_vc_t2

0xbaeb,	// (0x00055d4b) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbaeb,	// (0x00055d4b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x00059cf5) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x00059cf5) form_field_popup_wide_pane_vc_t

0x716f,	// (0x000513cf) aid_fshwr2_btn_pane_ParamLimits

0x717b,	// (0x000513db) aid_fshwr2_syb_pane_ParamLimits

0x7187,	// (0x000513e7) aid_fshwr2_txt_pane_ParamLimits

0x69c1,	// (0x00050c21) fshwr2_bg_pane_ParamLimits

0x7193,	// (0x000513f3) fshwr2_func_candi_pane_ParamLimits

0x71a8,	// (0x00051408) fshwr2_hwr_syb_pane_ParamLimits

0x71b8,	// (0x00051418) fshwr2_icf_pane_ParamLimits

0x7a5e,	// (0x00051cbe) list_double_graphic_pane_vc_g4_ParamLimits

0x7a5e,	// (0x00051cbe) list_double_graphic_pane_vc_g4

0x73b4,	// (0x00051614) cell_ituss_key_pane_g3_ParamLimits

0x73b4,	// (0x00051614) cell_ituss_key_pane_g3

0x745c,	// (0x000516bc) cell_ituss_key_t5_ParamLimits

0x745c,	// (0x000516bc) cell_ituss_key_t5

0xf36b,	// (0x000595cb) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

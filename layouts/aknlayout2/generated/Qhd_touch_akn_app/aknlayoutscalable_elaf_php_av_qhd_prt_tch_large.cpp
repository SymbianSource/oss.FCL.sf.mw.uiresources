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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003ab71 };

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
0x7dde,	// (0x0004294f) Screen

0x7df2,	// (0x00042963) application_window_ParamLimits

0x7df2,	// (0x00042963) application_window

0x7e0c,	// (0x0004297d) screen_g1

0x57de,	// (0x0004034f) area_bottom_pane_ParamLimits

0x57de,	// (0x0004034f) area_bottom_pane

0x589e,	// (0x0004040f) area_top_pane_ParamLimits

0x589e,	// (0x0004040f) area_top_pane

0x5932,	// (0x000404a3) main_pane_ParamLimits

0x5932,	// (0x000404a3) main_pane

0x7e16,	// (0x00042987) misc_graphics

0x97f4,	// (0x00044365) battery_pane_ParamLimits

0x97f4,	// (0x00044365) battery_pane

0xa4d4,	// (0x00045045) bg_status_flat_pane_g8

0xa4dc,	// (0x0004504d) bg_status_flat_pane_g9

0x98b6,	// (0x00044427) context_pane_ParamLimits

0x98b6,	// (0x00044427) context_pane

0x99cc,	// (0x0004453d) navi_pane_ParamLimits

0x99cc,	// (0x0004453d) navi_pane

0x9a50,	// (0x000445c1) signal_pane_ParamLimits

0x9a50,	// (0x000445c1) signal_pane

0x0008,

0xf87e,	// (0x0004a3ef) bg_status_flat_pane_g

0x9abd,	// (0x0004462e) status_pane_g1_ParamLimits

0x9abd,	// (0x0004462e) status_pane_g1

0x9ad1,	// (0x00044642) status_pane_g2_ParamLimits

0x9ad1,	// (0x00044642) status_pane_g2

0x9add,	// (0x0004464e) status_pane_g3_ParamLimits

0x9add,	// (0x0004464e) status_pane_g3

0x0004,

0xf7a5,	// (0x0004a316) status_pane_g_ParamLimits

0xf7a5,	// (0x0004a316) status_pane_g

0x9b11,	// (0x00044682) title_pane_ParamLimits

0x9b11,	// (0x00044682) title_pane

0x9b4e,	// (0x000446bf) uni_indicator_pane_ParamLimits

0x9b4e,	// (0x000446bf) uni_indicator_pane

0x9724,	// (0x00044295) bg_list_pane_ParamLimits

0x9724,	// (0x00044295) bg_list_pane

0x62cf,	// (0x00040e40) find_pane

0x9744,	// (0x000442b5) listscroll_app_pane_ParamLimits

0x9744,	// (0x000442b5) listscroll_app_pane

0x9750,	// (0x000442c1) listscroll_form_pane

0x62d7,	// (0x00040e48) listscroll_gen_pane_ParamLimits

0x62d7,	// (0x00040e48) listscroll_gen_pane

0x62eb,	// (0x00040e5c) listscroll_set_pane

0x896c,	// (0x000434dd) main_idle_act_pane

0x9420,	// (0x00043f91) main_idle_trad_pane

0x9420,	// (0x00043f91) main_list_empty_pane

0x9744,	// (0x000442b5) main_midp_pane

0x976a,	// (0x000442db) main_pane_g1_ParamLimits

0x976a,	// (0x000442db) main_pane_g1

0x62f3,	// (0x00040e64) popup_ai_message_window_ParamLimits

0x62f3,	// (0x00040e64) popup_ai_message_window

0x6399,	// (0x00040f0a) popup_fep_china_uni_window_ParamLimits

0x6399,	// (0x00040f0a) popup_fep_china_uni_window

0x63f5,	// (0x00040f66) popup_fep_japan_candidate_window_ParamLimits

0x63f5,	// (0x00040f66) popup_fep_japan_candidate_window

0x6415,	// (0x00040f86) popup_fep_japan_predictive_window_ParamLimits

0x6415,	// (0x00040f86) popup_fep_japan_predictive_window

0x6445,	// (0x00040fb6) popup_find_window

0x6452,	// (0x00040fc3) popup_grid_graphic_window_ParamLimits

0x6452,	// (0x00040fc3) popup_grid_graphic_window

0x647c,	// (0x00040fed) popup_large_graphic_colour_window

0x64a2,	// (0x00041013) popup_menu_window_ParamLimits

0x64a2,	// (0x00041013) popup_menu_window

0x665a,	// (0x000411cb) popup_note_image_window

0x6646,	// (0x000411b7) popup_note_wait_window_ParamLimits

0x6646,	// (0x000411b7) popup_note_wait_window

0x6646,	// (0x000411b7) popup_note_window_ParamLimits

0x6646,	// (0x000411b7) popup_note_window

0x66b0,	// (0x00041221) popup_query_code_window_ParamLimits

0x66b0,	// (0x00041221) popup_query_code_window

0x66c4,	// (0x00041235) popup_query_data_code_window_ParamLimits

0x66c4,	// (0x00041235) popup_query_data_code_window

0x66e1,	// (0x00041252) popup_query_data_window_ParamLimits

0x66e1,	// (0x00041252) popup_query_data_window

0x66fd,	// (0x0004126e) popup_query_sat_info_window_ParamLimits

0x66fd,	// (0x0004126e) popup_query_sat_info_window

0x6736,	// (0x000412a7) popup_snote_single_graphic_window_ParamLimits

0x6736,	// (0x000412a7) popup_snote_single_graphic_window

0x6736,	// (0x000412a7) popup_snote_single_text_window_ParamLimits

0x6736,	// (0x000412a7) popup_snote_single_text_window

0x674b,	// (0x000412bc) popup_sub_window_general

0x687b,	// (0x000413ec) popup_window_general_ParamLimits

0x687b,	// (0x000413ec) popup_window_general

0x9778,	// (0x000442e9) power_save_pane

0x6161,	// (0x00040cd2) control_pane_g1_ParamLimits

0x6161,	// (0x00040cd2) control_pane_g1

0x6188,	// (0x00040cf9) control_pane_g2_ParamLimits

0x6188,	// (0x00040cf9) control_pane_g2

0x96e7,	// (0x00044258) control_pane_g3_ParamLimits

0x96e7,	// (0x00044258) control_pane_g3

0x0007,

0xf78d,	// (0x0004a2fe) control_pane_g_ParamLimits

0xf78d,	// (0x0004a2fe) control_pane_g

0x61d2,	// (0x00040d43) control_pane_t1_ParamLimits

0x61d2,	// (0x00040d43) control_pane_t1

0x6226,	// (0x00040d97) control_pane_t2_ParamLimits

0x6226,	// (0x00040d97) control_pane_t2

0x0002,

0xf79e,	// (0x0004a30f) control_pane_t_ParamLimits

0xf79e,	// (0x0004a30f) control_pane_t

0x960c,	// (0x0004417d) navi_navi_volume_pane_cp1

0x9614,	// (0x00044185) status_small_icon_pane

0x961c,	// (0x0004418d) status_small_pane_g1_ParamLimits

0x961c,	// (0x0004418d) status_small_pane_g1

0x9650,	// (0x000441c1) status_small_pane_g2_ParamLimits

0x9650,	// (0x000441c1) status_small_pane_g2

0x965c,	// (0x000441cd) status_small_pane_g3_ParamLimits

0x965c,	// (0x000441cd) status_small_pane_g3

0x9668,	// (0x000441d9) status_small_pane_g4_ParamLimits

0x9668,	// (0x000441d9) status_small_pane_g4

0x9674,	// (0x000441e5) status_small_pane_g5_ParamLimits

0x9674,	// (0x000441e5) status_small_pane_g5

0x9682,	// (0x000441f3) status_small_pane_g6_ParamLimits

0x9682,	// (0x000441f3) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004a2ed) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004a2ed) status_small_pane_g

0x96b1,	// (0x00044222) status_small_pane_t1

0x96d3,	// (0x00044244) status_small_wait_pane_ParamLimits

0x96d3,	// (0x00044244) status_small_wait_pane

0x8e92,	// (0x00043a03) aid_levels_signal_ParamLimits

0x8e92,	// (0x00043a03) aid_levels_signal

0x8ea4,	// (0x00043a15) signal_pane_g1_ParamLimits

0x8ea4,	// (0x00043a15) signal_pane_g1

0x8eb9,	// (0x00043a2a) signal_pane_g2_ParamLimits

0x8eb9,	// (0x00043a2a) signal_pane_g2

0x0003,

0xf70d,	// (0x0004a27e) signal_pane_g_ParamLimits

0xf70d,	// (0x0004a27e) signal_pane_g

0x8ef4,	// (0x00043a65) context_pane_g1

0x7e20,	// (0x00042991) title_pane_g1

0x7e56,	// (0x000429c7) title_pane_t1

0x7ebe,	// (0x00042a2f) title_pane_t2

0x7ee4,	// (0x00042a55) title_pane_t3

0x0002,

0xf557,	// (0x0004a0c8) title_pane_t

0x9b66,	// (0x000446d7) aid_levels_battery_ParamLimits

0x9b66,	// (0x000446d7) aid_levels_battery

0x9b7a,	// (0x000446eb) battery_pane_g1_ParamLimits

0x9b7a,	// (0x000446eb) battery_pane_g1

0x9b90,	// (0x00044701) battery_pane_g2_ParamLimits

0x9b90,	// (0x00044701) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004a321) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004a321) battery_pane_g

0xae0a,	// (0x0004597b) uni_indicator_pane_g1

0xae1d,	// (0x0004598e) uni_indicator_pane_g2

0xae2f,	// (0x000459a0) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0004a497) uni_indicator_pane_g

0x9292,	// (0x00043e03) navi_icon_pane_ParamLimits

0x9292,	// (0x00043e03) navi_icon_pane

0x91d0,	// (0x00043d41) navi_midp_pane

0x92ae,	// (0x00043e1f) navi_navi_pane

0x92b8,	// (0x00043e29) navi_text_pane_ParamLimits

0x92b8,	// (0x00043e29) navi_text_pane

0x7e0c,	// (0x0004297d) status_small_wait_pane_g1

0x8339,	// (0x00042eaa) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0004a492) status_small_wait_pane_g

0xab2f,	// (0x000456a0) navi_navi_icon_text_pane

0xab37,	// (0x000456a8) navi_navi_pane_g1_ParamLimits

0xab37,	// (0x000456a8) navi_navi_pane_g1

0xab49,	// (0x000456ba) navi_navi_pane_g2_ParamLimits

0xab49,	// (0x000456ba) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0004a460) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0004a460) navi_navi_pane_g

0xab5b,	// (0x000456cc) navi_navi_tabs_pane

0xab64,	// (0x000456d5) navi_navi_text_pane

0xab2f,	// (0x000456a0) navi_navi_volume_pane

0xab0b,	// (0x0004567c) navi_text_pane_t1

0xaaff,	// (0x00045670) navi_icon_pane_g1

0xaa52,	// (0x000455c3) navi_navi_text_pane_t1

0x6b33,	// (0x000416a4) navi_navi_volume_pane_g1

0x6b3b,	// (0x000416ac) volume_small_pane

0xa9b8,	// (0x00045529) navi_navi_icon_text_pane_g1

0xa9c0,	// (0x00045531) navi_navi_icon_text_pane_t1

0x92ae,	// (0x00043e1f) navi_tabs_2_long_pane

0x92ae,	// (0x00043e1f) navi_tabs_2_pane

0x92ae,	// (0x00043e1f) navi_tabs_3_long_pane

0x92ae,	// (0x00043e1f) navi_tabs_3_pane

0x92ae,	// (0x00043e1f) navi_tabs_4_pane

0x6b13,	// (0x00041684) tabs_2_active_pane_ParamLimits

0x6b13,	// (0x00041684) tabs_2_active_pane

0x6b23,	// (0x00041694) tabs_2_passive_pane_ParamLimits

0x6b23,	// (0x00041694) tabs_2_passive_pane

0x6ae1,	// (0x00041652) tabs_3_active_pane_ParamLimits

0x6ae1,	// (0x00041652) tabs_3_active_pane

0x6af1,	// (0x00041662) tabs_3_passive_pane_ParamLimits

0x6af1,	// (0x00041662) tabs_3_passive_pane

0x6b02,	// (0x00041673) tabs_3_passive_pane_cp_ParamLimits

0x6b02,	// (0x00041673) tabs_3_passive_pane_cp

0x6a9d,	// (0x0004160e) tabs_4_active_pane_ParamLimits

0x6a9d,	// (0x0004160e) tabs_4_active_pane

0x6aae,	// (0x0004161f) tabs_4_passive_pane_ParamLimits

0x6aae,	// (0x0004161f) tabs_4_passive_pane

0x6abf,	// (0x00041630) tabs_4_passive_pane_cp_ParamLimits

0x6abf,	// (0x00041630) tabs_4_passive_pane_cp

0x6ad0,	// (0x00041641) tabs_4_passive_pane_cp2_ParamLimits

0x6ad0,	// (0x00041641) tabs_4_passive_pane_cp2

0x6a79,	// (0x000415ea) tabs_2_long_active_pane_ParamLimits

0x6a79,	// (0x000415ea) tabs_2_long_active_pane

0x6a8b,	// (0x000415fc) tabs_2_long_passive_pane_ParamLimits

0x6a8b,	// (0x000415fc) tabs_2_long_passive_pane

0x6a3a,	// (0x000415ab) tabs_3_long_active_pane_ParamLimits

0x6a3a,	// (0x000415ab) tabs_3_long_active_pane

0x6a4d,	// (0x000415be) tabs_3_long_passive_pane_ParamLimits

0x6a4d,	// (0x000415be) tabs_3_long_passive_pane

0x6a66,	// (0x000415d7) tabs_3_long_passive_pane_cp_ParamLimits

0x6a66,	// (0x000415d7) tabs_3_long_passive_pane_cp

0x69e0,	// (0x00041551) volume_small_pane_g1

0x69e9,	// (0x0004155a) volume_small_pane_g2

0x69f2,	// (0x00041563) volume_small_pane_g3

0x69fb,	// (0x0004156c) volume_small_pane_g4

0x6a04,	// (0x00041575) volume_small_pane_g5

0x6a0d,	// (0x0004157e) volume_small_pane_g6

0x6a16,	// (0x00041587) volume_small_pane_g7

0x6a1f,	// (0x00041590) volume_small_pane_g8

0x6a28,	// (0x00041599) volume_small_pane_g9

0x6a31,	// (0x000415a2) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0004a42c) volume_small_pane_g

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp2_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp2

0x7f04,	// (0x00042a75) tabs_3_active_pane_g1

0x7f0c,	// (0x00042a7d) tabs_3_active_pane_t1

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp2_ParamLimits

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp2

0x7f04,	// (0x00042a75) tabs_3_passive_pane_g1

0x7f0c,	// (0x00042a7d) tabs_3_passive_pane_t1

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp3_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp3

0x7f1e,	// (0x00042a8f) tabs_4_active_pane_g1

0x7f26,	// (0x00042a97) tabs_4_active_pane_t1

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp3_ParamLimits

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp3

0x7f1e,	// (0x00042a8f) tabs_4_1_passive_pane_g1

0x7f26,	// (0x00042a97) tabs_4_1_passive_pane_t1

0x9744,	// (0x000442b5) list_highlight_pane_cp2

0xb072,	// (0x00045be3) list_set_pane_ParamLimits

0xb072,	// (0x00045be3) list_set_pane

0xb118,	// (0x00045c89) main_pane_set_t1_ParamLimits

0xb118,	// (0x00045c89) main_pane_set_t1

0xb138,	// (0x00045ca9) main_pane_set_t2_ParamLimits

0xb138,	// (0x00045ca9) main_pane_set_t2

0xb14c,	// (0x00045cbd) main_pane_set_t3_ParamLimits

0xb14c,	// (0x00045cbd) main_pane_set_t3

0xb15e,	// (0x00045ccf) main_pane_set_t4_ParamLimits

0xb15e,	// (0x00045ccf) main_pane_set_t4

0x0003,

0xf98b,	// (0x0004a4fc) main_pane_set_t_ParamLimits

0xf98b,	// (0x0004a4fc) main_pane_set_t

0xb170,	// (0x00045ce1) setting_code_pane

0xb17c,	// (0x00045ced) setting_slider_graphic_pane

0xb17c,	// (0x00045ced) setting_slider_pane

0xb17c,	// (0x00045ced) setting_text_pane

0xb17c,	// (0x00045ced) setting_volume_pane

0x5b81,	// (0x000406f2) volume_set_pane

0x7ef6,	// (0x00042a67) bg_set_opt_pane_cp

0x5b89,	// (0x000406fa) setting_slider_pane_t1

0x5ba2,	// (0x00040713) setting_slider_pane_t2

0x5bbc,	// (0x0004072d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004a0cf) setting_slider_pane_t

0x5bd4,	// (0x00040745) slider_set_pane

0x7e16,	// (0x00042987) bg_set_opt_pane_cp2

0x7f38,	// (0x00042aa9) setting_slider_graphic_pane_g1

0x5bea,	// (0x0004075b) setting_slider_graphic_pane_t1

0x5bfa,	// (0x0004076b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004a0d6) setting_slider_graphic_pane_t

0x5c0a,	// (0x0004077b) slider_set_pane_cp

0x7e16,	// (0x00042987) input_focus_pane_cp1

0xb031,	// (0x00045ba2) list_set_text_pane

0x7e0c,	// (0x0004297d) setting_text_pane_g1

0x7e16,	// (0x00042987) input_focus_pane_cp2

0x7e0c,	// (0x0004297d) setting_code_pane_g1

0x7f41,	// (0x00042ab2) setting_code_pane_t1

0x47eb,	// (0x0003f35c) set_text_pane_t1_ParamLimits

0x47eb,	// (0x0003f35c) set_text_pane_t1

0x87e3,	// (0x00043354) set_opt_bg_pane_g1

0x87eb,	// (0x0004335c) set_opt_bg_pane_g2

0xb00b,	// (0x00045b7c) set_opt_bg_pane_g3

0x87fb,	// (0x0004336c) set_opt_bg_pane_g4

0x8803,	// (0x00043374) set_opt_bg_pane_g5

0x880b,	// (0x0004337c) set_opt_bg_pane_g6

0xb015,	// (0x00045b86) set_opt_bg_pane_g7

0xb01d,	// (0x00045b8e) set_opt_bg_pane_g8

0xb027,	// (0x00045b98) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0004a4e9) set_opt_bg_pane_g

0xaffe,	// (0x00045b6f) slider_set_pane_g1

0x6ba8,	// (0x00041719) slider_set_pane_g2

0x0006,

0xf969,	// (0x0004a4da) slider_set_pane_g

0x6b44,	// (0x000416b5) volume_set_pane_g1

0x6b4c,	// (0x000416bd) volume_set_pane_g2

0x6b54,	// (0x000416c5) volume_set_pane_g3

0x6b5c,	// (0x000416cd) volume_set_pane_g4

0x6b64,	// (0x000416d5) volume_set_pane_g5

0x6b6c,	// (0x000416dd) volume_set_pane_g6

0x6b74,	// (0x000416e5) volume_set_pane_g7

0x6b7c,	// (0x000416ed) volume_set_pane_g8

0x6b84,	// (0x000416f5) volume_set_pane_g9

0x6b8c,	// (0x000416fd) volume_set_pane_g10

0x0009,

0xf941,	// (0x0004a4b2) volume_set_pane_g

0x7f4f,	// (0x00042ac0) indicator_pane_ParamLimits

0x7f4f,	// (0x00042ac0) indicator_pane

0x7f5b,	// (0x00042acc) main_idle_pane_g2_ParamLimits

0x7f5b,	// (0x00042acc) main_idle_pane_g2

0x7f83,	// (0x00042af4) main_pane_idle_g1_ParamLimits

0x7f83,	// (0x00042af4) main_pane_idle_g1

0x7f90,	// (0x00042b01) popup_clock_digital_analogue_window_ParamLimits

0x7f90,	// (0x00042b01) popup_clock_digital_analogue_window

0x7fa7,	// (0x00042b18) soft_indicator_pane_ParamLimits

0x7fa7,	// (0x00042b18) soft_indicator_pane

0x7fb3,	// (0x00042b24) wallpaper_pane_ParamLimits

0x7fb3,	// (0x00042b24) wallpaper_pane

0x7e0c,	// (0x0004297d) wallpaper_pane_g1

0x7fc7,	// (0x00042b38) indicator_pane_g1_ParamLimits

0x7fc7,	// (0x00042b38) indicator_pane_g1

0xb3e0,	// (0x00045f51) navi_navi_icon_text_pane_srt_g1

0x7fe2,	// (0x00042b53) soft_indicator_pane_t1

0x7ffc,	// (0x00042b6d) aid_ps_area_pane

0x800d,	// (0x00042b7e) aid_ps_clock_pane

0x801b,	// (0x00042b8c) aid_ps_indicator_pane

0x8027,	// (0x00042b98) indicator_ps_pane_ParamLimits

0x8027,	// (0x00042b98) indicator_ps_pane

0x8036,	// (0x00042ba7) power_save_pane_g1_ParamLimits

0x8036,	// (0x00042ba7) power_save_pane_g1

0x8042,	// (0x00042bb3) power_save_pane_g2_ParamLimits

0x8042,	// (0x00042bb3) power_save_pane_g2

0x5792,	// (0x00040303) aid_navinavi_width_pane

0x7ffc,	// (0x00042b6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004a0db) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004a0db) power_save_pane_g

0x8050,	// (0x00042bc1) power_save_pane_t1_ParamLimits

0x8050,	// (0x00042bc1) power_save_pane_t1

0x800d,	// (0x00042b7e) aid_ps_clock_pane_ParamLimits

0x801b,	// (0x00042b8c) aid_ps_indicator_pane_ParamLimits

0x8062,	// (0x00042bd3) power_save_pane_t4_ParamLimits

0x8062,	// (0x00042bd3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004a0e0) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004a0e0) power_save_pane_t

0x808c,	// (0x00042bfd) power_save_t3_ParamLimits

0x808c,	// (0x00042bfd) power_save_t3

0x8077,	// (0x00042be8) power_save_t2_ParamLimits

0x8077,	// (0x00042be8) power_save_t2

0x80a1,	// (0x00042c12) indicator_ps_pane_g1

0x80aa,	// (0x00042c1b) ai_gene_pane_ParamLimits

0x80aa,	// (0x00042c1b) ai_gene_pane

0x80b6,	// (0x00042c27) ai_links_pane_ParamLimits

0x80b6,	// (0x00042c27) ai_links_pane

0x80c2,	// (0x00042c33) indicator_pane_cp1_ParamLimits

0x80c2,	// (0x00042c33) indicator_pane_cp1

0x80ce,	// (0x00042c3f) main_pane_idle_g1_cp_ParamLimits

0x80ce,	// (0x00042c3f) main_pane_idle_g1_cp

0x80da,	// (0x00042c4b) popup_ai_links_title_window

0x80e3,	// (0x00042c54) soft_indicator_pane_cp1_ParamLimits

0x80e3,	// (0x00042c54) soft_indicator_pane_cp1

0xadf8,	// (0x00045969) ai_links_pane_g1

0xae01,	// (0x00045972) grid_ai_links_pane

0xaddb,	// (0x0004594c) ai_gene_pane_1

0xade6,	// (0x00045957) ai_gene_pane_2

0xadef,	// (0x00045960) list_highlight_pane_cp4

0xadbf,	// (0x00045930) cell_ai_link_pane_ParamLimits

0xadbf,	// (0x00045930) cell_ai_link_pane

0xadb7,	// (0x00045928) cell_ai_link_pane_g1

0x8339,	// (0x00042eaa) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0004a48d) cell_ai_link_pane_g

0x7e16,	// (0x00042987) grid_highlight_cp2

0x7e16,	// (0x00042987) bg_popup_sub_pane_cp1

0x80fd,	// (0x00042c6e) popup_ai_links_title_window_t1

0xad05,	// (0x00045876) ai_gene_pane_1_g1_ParamLimits

0xad05,	// (0x00045876) ai_gene_pane_1_g1

0xad11,	// (0x00045882) ai_gene_pane_1_g2_ParamLimits

0xad11,	// (0x00045882) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0004a483) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0004a483) ai_gene_pane_1_g

0xad1e,	// (0x0004588f) ai_gene_pane_1_t1_ParamLimits

0xad1e,	// (0x0004588f) ai_gene_pane_1_t1

0xad52,	// (0x000458c3) grid_ai_soft_ind_pane

0xacf0,	// (0x00045861) ai_gene_pane_2_t1_ParamLimits

0xacf0,	// (0x00045861) ai_gene_pane_2_t1

0x810c,	// (0x00042c7d) main_pane_empty_t1_ParamLimits

0x810c,	// (0x00042c7d) main_pane_empty_t1

0x8124,	// (0x00042c95) main_pane_empty_t2_ParamLimits

0x8124,	// (0x00042c95) main_pane_empty_t2

0x8139,	// (0x00042caa) main_pane_empty_t3_ParamLimits

0x8139,	// (0x00042caa) main_pane_empty_t3

0x814b,	// (0x00042cbc) main_pane_empty_t4_ParamLimits

0x814b,	// (0x00042cbc) main_pane_empty_t4

0x815d,	// (0x00042cce) main_pane_empty_t5_ParamLimits

0x815d,	// (0x00042cce) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004a0e5) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004a0e5) main_pane_empty_t

0x8834,	// (0x000433a5) bg_popup_window_pane_ParamLimits

0x8834,	// (0x000433a5) bg_popup_window_pane

0xaa60,	// (0x000455d1) find_popup_pane_cp2_ParamLimits

0xaa60,	// (0x000455d1) find_popup_pane_cp2

0xaa6c,	// (0x000455dd) heading_pane_ParamLimits

0xaa6c,	// (0x000455dd) heading_pane

0x7e16,	// (0x00042987) bg_popup_sub_pane

0xa9da,	// (0x0004554b) bg_popup_window_pane_g1_ParamLimits

0xa9da,	// (0x0004554b) bg_popup_window_pane_g1

0xa9e6,	// (0x00045557) bg_popup_window_pane_g2_ParamLimits

0xa9e6,	// (0x00045557) bg_popup_window_pane_g2

0xa9f2,	// (0x00045563) bg_popup_window_pane_g3_ParamLimits

0xa9f2,	// (0x00045563) bg_popup_window_pane_g3

0xa9fe,	// (0x0004556f) bg_popup_window_pane_g4_ParamLimits

0xa9fe,	// (0x0004556f) bg_popup_window_pane_g4

0xaa0a,	// (0x0004557b) bg_popup_window_pane_g5_ParamLimits

0xaa0a,	// (0x0004557b) bg_popup_window_pane_g5

0xaa16,	// (0x00045587) bg_popup_window_pane_g6_ParamLimits

0xaa16,	// (0x00045587) bg_popup_window_pane_g6

0xaa22,	// (0x00045593) bg_popup_window_pane_g7_ParamLimits

0xaa22,	// (0x00045593) bg_popup_window_pane_g7

0xaa2e,	// (0x0004559f) bg_popup_window_pane_g8_ParamLimits

0xaa2e,	// (0x0004559f) bg_popup_window_pane_g8

0xaa3a,	// (0x000455ab) bg_popup_window_pane_g9_ParamLimits

0xaa3a,	// (0x000455ab) bg_popup_window_pane_g9

0xaa46,	// (0x000455b7) bg_popup_window_pane_g10_ParamLimits

0xaa46,	// (0x000455b7) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0004a44b) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0004a44b) bg_popup_window_pane_g

0xa96f,	// (0x000454e0) bg_popup_heading_pane_ParamLimits

0xa96f,	// (0x000454e0) bg_popup_heading_pane

0x6cc6,	// (0x00041837) tabs_4_passive_pane_cp_srt_ParamLimits

0x6cc6,	// (0x00041837) tabs_4_passive_pane_cp_srt

0x6cd8,	// (0x00041849) tabs_4_passive_pane_srt_ParamLimits

0xa983,	// (0x000454f4) heading_pane_g2

0x6cd8,	// (0x00041849) tabs_4_passive_pane_srt

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp3_srt

0xa98b,	// (0x000454fc) heading_pane_t1_ParamLimits

0xa98b,	// (0x000454fc) heading_pane_t1

0xa9a2,	// (0x00045513) heading_pane_t2_ParamLimits

0xa9a2,	// (0x00045513) heading_pane_t2

0x0001,

0xf8d5,	// (0x0004a446) heading_pane_t_ParamLimits

0xf8d5,	// (0x0004a446) heading_pane_t

0xa49c,	// (0x0004500d) bg_popup_heading_pane_g1

0xa54b,	// (0x000450bc) bg_popup_heading_pane_g2

0xa555,	// (0x000450c6) bg_popup_heading_pane_g3

0xa55f,	// (0x000450d0) bg_popup_heading_pane_g4

0xa569,	// (0x000450da) bg_popup_heading_pane_g5

0xa573,	// (0x000450e4) bg_popup_heading_pane_g6

0xa57b,	// (0x000450ec) bg_popup_heading_pane_g7

0xa583,	// (0x000450f4) bg_popup_heading_pane_g8

0xa58d,	// (0x000450fe) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0004a402) bg_popup_heading_pane_g

0x9c68,	// (0x000447d9) bg_popup_sub_pane_g1

0x9c70,	// (0x000447e1) bg_popup_sub_pane_g2

0x9c78,	// (0x000447e9) bg_popup_sub_pane_g3

0x9c80,	// (0x000447f1) bg_popup_sub_pane_g4

0x9c88,	// (0x000447f9) bg_popup_sub_pane_g5

0x9c90,	// (0x00044801) bg_popup_sub_pane_g6

0x9c98,	// (0x00044809) bg_popup_sub_pane_g7

0x9ca0,	// (0x00044811) bg_popup_sub_pane_g8

0x9ca8,	// (0x00044819) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0004a3dc) bg_popup_sub_pane_g

0x8171,	// (0x00042ce2) bg_popup_window_pane_cp5_ParamLimits

0x8171,	// (0x00042ce2) bg_popup_window_pane_cp5

0x818d,	// (0x00042cfe) popup_note_window_g1_ParamLimits

0x818d,	// (0x00042cfe) popup_note_window_g1

0x8199,	// (0x00042d0a) popup_note_window_t1_ParamLimits

0x8199,	// (0x00042d0a) popup_note_window_t1

0x81af,	// (0x00042d20) popup_note_window_t2_ParamLimits

0x81af,	// (0x00042d20) popup_note_window_t2

0x81c5,	// (0x00042d36) popup_note_window_t3_ParamLimits

0x81c5,	// (0x00042d36) popup_note_window_t3

0x81db,	// (0x00042d4c) popup_note_window_t4_ParamLimits

0x81db,	// (0x00042d4c) popup_note_window_t4

0x8203,	// (0x00042d74) popup_note_window_t5_ParamLimits

0x8203,	// (0x00042d74) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004a0f0) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004a0f0) popup_note_window_t

0x824d,	// (0x00042dbe) bg_popup_window_pane_cp6_ParamLimits

0x824d,	// (0x00042dbe) bg_popup_window_pane_cp6

0xa418,	// (0x00044f89) popup_note_image_window_g1_ParamLimits

0xa418,	// (0x00044f89) popup_note_image_window_g1

0xa424,	// (0x00044f95) popup_note_image_window_g2_ParamLimits

0xa424,	// (0x00044f95) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0004a3d0) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0004a3d0) popup_note_image_window_g

0xa43d,	// (0x00044fae) popup_note_image_window_t1_ParamLimits

0xa43d,	// (0x00044fae) popup_note_image_window_t1

0xa456,	// (0x00044fc7) popup_note_image_window_t2_ParamLimits

0xa456,	// (0x00044fc7) popup_note_image_window_t2

0xa46f,	// (0x00044fe0) popup_note_image_window_t3_ParamLimits

0xa46f,	// (0x00044fe0) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0004a3d5) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0004a3d5) popup_note_image_window_t

0xa2d9,	// (0x00044e4a) bg_popup_window_pane_cp7_ParamLimits

0xa2d9,	// (0x00044e4a) bg_popup_window_pane_cp7

0xa309,	// (0x00044e7a) popup_note_wait_window_g1_ParamLimits

0xa309,	// (0x00044e7a) popup_note_wait_window_g1

0xa315,	// (0x00044e86) popup_note_wait_window_g2_ParamLimits

0xa315,	// (0x00044e86) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0004a3be) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0004a3be) popup_note_wait_window_g

0xa32d,	// (0x00044e9e) popup_note_wait_window_t1_ParamLimits

0xa32d,	// (0x00044e9e) popup_note_wait_window_t1

0xa354,	// (0x00044ec5) popup_note_wait_window_t2_ParamLimits

0xa354,	// (0x00044ec5) popup_note_wait_window_t2

0xa371,	// (0x00044ee2) popup_note_wait_window_t3_ParamLimits

0xa371,	// (0x00044ee2) popup_note_wait_window_t3

0xa384,	// (0x00044ef5) popup_note_wait_window_t4_ParamLimits

0xa384,	// (0x00044ef5) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0004a3c5) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0004a3c5) popup_note_wait_window_t

0xa3a9,	// (0x00044f1a) wait_bar_pane_ParamLimits

0xa3a9,	// (0x00044f1a) wait_bar_pane

0x7e16,	// (0x00042987) wait_anim_pane

0x7e16,	// (0x00042987) wait_border_pane

0x7e0c,	// (0x0004297d) wait_anim_pane_g1

0x7e0c,	// (0x0004297d) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004a279) wait_anim_pane_g

0xa27d,	// (0x00044dee) wait_border_pane_g1

0xa288,	// (0x00044df9) wait_border_pane_g2

0xa291,	// (0x00044e02) wait_border_pane_g3

0x0002,

0xf846,	// (0x0004a3b7) wait_border_pane_g

0xa0e8,	// (0x00044c59) bg_popup_window_pane_cp16_ParamLimits

0xa0e8,	// (0x00044c59) bg_popup_window_pane_cp16

0xa1e8,	// (0x00044d59) indicator_popup_pane_cp4_ParamLimits

0xa1e8,	// (0x00044d59) indicator_popup_pane_cp4

0xa1fc,	// (0x00044d6d) popup_query_data_window_t1_ParamLimits

0xa1fc,	// (0x00044d6d) popup_query_data_window_t1

0xa20e,	// (0x00044d7f) popup_query_data_window_t2_ParamLimits

0xa20e,	// (0x00044d7f) popup_query_data_window_t2

0xa227,	// (0x00044d98) popup_query_data_window_t3_ParamLimits

0xa227,	// (0x00044d98) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0004a3b0) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0004a3b0) popup_query_data_window_t

0xa241,	// (0x00044db2) query_popup_data_pane_ParamLimits

0xa241,	// (0x00044db2) query_popup_data_pane

0xa255,	// (0x00044dc6) query_popup_data_pane_cp1_ParamLimits

0xa255,	// (0x00044dc6) query_popup_data_pane_cp1

0xa0e8,	// (0x00044c59) bg_popup_window_pane_cp10_ParamLimits

0xa0e8,	// (0x00044c59) bg_popup_window_pane_cp10

0xa11a,	// (0x00044c8b) indicator_popup_pane_ParamLimits

0xa11a,	// (0x00044c8b) indicator_popup_pane

0xa13c,	// (0x00044cad) popup_query_code_window_t1_ParamLimits

0xa13c,	// (0x00044cad) popup_query_code_window_t1

0xa156,	// (0x00044cc7) popup_query_code_window_t2_ParamLimits

0xa156,	// (0x00044cc7) popup_query_code_window_t2

0xa19f,	// (0x00044d10) popup_query_code_window_t3_ParamLimits

0xa19f,	// (0x00044d10) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0004a3a9) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0004a3a9) popup_query_code_window_t

0xa1ce,	// (0x00044d3f) query_popup_pane_ParamLimits

0xa1ce,	// (0x00044d3f) query_popup_pane

0x824d,	// (0x00042dbe) bg_popup_window_pane_cp15_ParamLimits

0x824d,	// (0x00042dbe) bg_popup_window_pane_cp15

0x826b,	// (0x00042ddc) indicator_popup_pane_cp1_ParamLimits

0x826b,	// (0x00042ddc) indicator_popup_pane_cp1

0x827e,	// (0x00042def) indicator_popup_pane_cp2_ParamLimits

0x827e,	// (0x00042def) indicator_popup_pane_cp2

0x8291,	// (0x00042e02) popup_query_data_code_window_g1_ParamLimits

0x8291,	// (0x00042e02) popup_query_data_code_window_g1

0x82a4,	// (0x00042e15) popup_query_data_code_window_t1_ParamLimits

0x82a4,	// (0x00042e15) popup_query_data_code_window_t1

0x82b6,	// (0x00042e27) popup_query_data_code_window_t2_ParamLimits

0x82b6,	// (0x00042e27) popup_query_data_code_window_t2

0x82c8,	// (0x00042e39) popup_query_data_code_window_t3_ParamLimits

0x82c8,	// (0x00042e39) popup_query_data_code_window_t3

0x82de,	// (0x00042e4f) popup_query_data_code_window_t4_ParamLimits

0x82de,	// (0x00042e4f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004a0fb) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004a0fb) popup_query_data_code_window_t

0x68f1,	// (0x00041462) list_single_midp_graphic_pane_g3

0x82f6,	// (0x00042e67) query_popup_data_pane_cp2_ParamLimits

0x8309,	// (0x00042e7a) query_popup_pane_cp2_ParamLimits

0x8309,	// (0x00042e7a) query_popup_pane_cp2

0x7e16,	// (0x00042987) bg_popup_window_pane_cp11

0xa0d4,	// (0x00044c45) heading_pane_cp5

0x83f4,	// (0x00042f65) listscroll_popup_info_pane

0x7e16,	// (0x00042987) input_focus_pane_cp3

0x831c,	// (0x00042e8d) query_popup_pane_t1

0x832a,	// (0x00042e9b) list_popup_info_pane_ParamLimits

0x832a,	// (0x00042e9b) list_popup_info_pane

0x8339,	// (0x00042eaa) listscroll_popup_info_pane_g1

0x8341,	// (0x00042eb2) scroll_pane_cp7

0x834b,	// (0x00042ebc) popup_info_list_pane_t1_ParamLimits

0x834b,	// (0x00042ebc) popup_info_list_pane_t1

0x8365,	// (0x00042ed6) popup_info_list_pane_t2_ParamLimits

0x8365,	// (0x00042ed6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004a104) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004a104) popup_info_list_pane_t

0x7e16,	// (0x00042987) bg_popup_window_pane_cp12

0xb3fa,	// (0x00045f6b) find_popup_pane

0x7ef6,	// (0x00042a67) bg_popup_window_pane_cp3

0x837f,	// (0x00042ef0) heading_pane_cp3

0x838b,	// (0x00042efc) listscroll_popup_graphic_pane

0x7e16,	// (0x00042987) bg_popup_window_pane_cp4

0x83ea,	// (0x00042f5b) heading_pane_cp4

0x83f4,	// (0x00042f65) listscroll_popup_colour_pane

0x83fc,	// (0x00042f6d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x83fc,	// (0x00042f6d) cell_large_graphic_colour_none_popup_pane

0x8410,	// (0x00042f81) grid_large_graphic_colour_popup_pane_ParamLimits

0x8410,	// (0x00042f81) grid_large_graphic_colour_popup_pane

0x843c,	// (0x00042fad) listscroll_popup_colour_pane_g1_ParamLimits

0x843c,	// (0x00042fad) listscroll_popup_colour_pane_g1

0x8453,	// (0x00042fc4) listscroll_popup_colour_pane_g2_ParamLimits

0x8453,	// (0x00042fc4) listscroll_popup_colour_pane_g2

0x846a,	// (0x00042fdb) listscroll_popup_colour_pane_g3_ParamLimits

0x846a,	// (0x00042fdb) listscroll_popup_colour_pane_g3

0x847a,	// (0x00042feb) listscroll_popup_colour_pane_g4_ParamLimits

0x847a,	// (0x00042feb) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004a109) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004a109) listscroll_popup_colour_pane_g

0x848e,	// (0x00042fff) scroll_pane_cp6_ParamLimits

0x848e,	// (0x00042fff) scroll_pane_cp6

0x84a0,	// (0x00043011) cell_large_graphic_colour_popup_pane_ParamLimits

0x84a0,	// (0x00043011) cell_large_graphic_colour_popup_pane

0x84bf,	// (0x00043030) cell_large_graphic_colour_none_popup_pane_t1

0x7e16,	// (0x00042987) grid_highlight_pane_cp5

0x84ce,	// (0x0004303f) cell_large_graphic_colour_popup_pane_g1

0x84d6,	// (0x00043047) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004a112) cell_large_graphic_colour_popup_pane_g

0x84de,	// (0x0004304f) cell_large_graphic_colour_popup_pane_g2_copy1

0x84e7,	// (0x00043058) grid_highlight_pane_cp4

0x84ef,	// (0x00043060) bg_popup_window_pane_cp8_ParamLimits

0x84ef,	// (0x00043060) bg_popup_window_pane_cp8

0x850a,	// (0x0004307b) popup_snote_single_text_window_g1_ParamLimits

0x850a,	// (0x0004307b) popup_snote_single_text_window_g1

0x851c,	// (0x0004308d) popup_snote_single_text_window_t1_ParamLimits

0x851c,	// (0x0004308d) popup_snote_single_text_window_t1

0x852f,	// (0x000430a0) popup_snote_single_text_window_t2_ParamLimits

0x852f,	// (0x000430a0) popup_snote_single_text_window_t2

0x8542,	// (0x000430b3) popup_snote_single_text_window_t3_ParamLimits

0x8542,	// (0x000430b3) popup_snote_single_text_window_t3

0x857b,	// (0x000430ec) popup_snote_single_text_window_t4_ParamLimits

0x857b,	// (0x000430ec) popup_snote_single_text_window_t4

0x85af,	// (0x00043120) popup_snote_single_text_window_t5_ParamLimits

0x85af,	// (0x00043120) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004a117) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004a117) popup_snote_single_text_window_t

0x85de,	// (0x0004314f) bg_popup_window_pane_cp9_ParamLimits

0x85de,	// (0x0004314f) bg_popup_window_pane_cp9

0x850a,	// (0x0004307b) popup_snote_single_graphic_window_g1_ParamLimits

0x850a,	// (0x0004307b) popup_snote_single_graphic_window_g1

0x85ec,	// (0x0004315d) popup_snote_single_graphic_window_g2_ParamLimits

0x85ec,	// (0x0004315d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004a122) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004a122) popup_snote_single_graphic_window_g

0x85f8,	// (0x00043169) popup_snote_single_graphic_window_t1_ParamLimits

0x85f8,	// (0x00043169) popup_snote_single_graphic_window_t1

0x860b,	// (0x0004317c) popup_snote_single_graphic_window_t2_ParamLimits

0x860b,	// (0x0004317c) popup_snote_single_graphic_window_t2

0x861e,	// (0x0004318f) popup_snote_single_graphic_window_t3_ParamLimits

0x861e,	// (0x0004318f) popup_snote_single_graphic_window_t3

0x8657,	// (0x000431c8) popup_snote_single_graphic_window_t4_ParamLimits

0x8657,	// (0x000431c8) popup_snote_single_graphic_window_t4

0x868b,	// (0x000431fc) popup_snote_single_graphic_window_t5_ParamLimits

0x868b,	// (0x000431fc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004a127) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004a127) popup_snote_single_graphic_window_t

0xb33c,	// (0x00045ead) grid_graphic_popup_pane_ParamLimits

0xb33c,	// (0x00045ead) grid_graphic_popup_pane

0xb366,	// (0x00045ed7) listscroll_popup_graphic_pane_g1_ParamLimits

0xb366,	// (0x00045ed7) listscroll_popup_graphic_pane_g1

0xb37a,	// (0x00045eeb) listscroll_popup_graphic_pane_g2_ParamLimits

0xb37a,	// (0x00045eeb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0004a526) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0004a526) listscroll_popup_graphic_pane_g

0xb38e,	// (0x00045eff) scroll_pane_cp5

0xb2db,	// (0x00045e4c) cell_graphic_popup_pane_ParamLimits

0xb2db,	// (0x00045e4c) cell_graphic_popup_pane

0xb2bc,	// (0x00045e2d) cell_graphic_popup_pane_g1

0xb2c4,	// (0x00045e35) cell_graphic_popup_pane_g2

0x84de,	// (0x0004304f) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0004a51f) cell_graphic_popup_pane_g

0xb2cd,	// (0x00045e3e) cell_graphic_popup_pane_t2

0x84e7,	// (0x00043058) grid_highlight_pane_cp3

0x86cc,	// (0x0004323d) list_gen_pane_ParamLimits

0x86cc,	// (0x0004323d) list_gen_pane

0x86fe,	// (0x0004326f) scroll_pane

0xb214,	// (0x00045d85) bg_list_pane_g1_ParamLimits

0xb214,	// (0x00045d85) bg_list_pane_g1

0xb231,	// (0x00045da2) bg_list_pane_g2_ParamLimits

0xb231,	// (0x00045da2) bg_list_pane_g2

0xb246,	// (0x00045db7) bg_list_pane_g3_ParamLimits

0xb246,	// (0x00045db7) bg_list_pane_g3

0xb25a,	// (0x00045dcb) bg_list_pane_g4_ParamLimits

0xb25a,	// (0x00045dcb) bg_list_pane_g4

0xb26e,	// (0x00045ddf) bg_list_pane_g5_ParamLimits

0xb26e,	// (0x00045ddf) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0004a514) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0004a514) bg_list_pane_g

0x6c0c,	// (0x0004177d) list_double2_graphic_large_graphic_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double2_graphic_large_graphic_pane

0x6c0c,	// (0x0004177d) list_double2_graphic_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double2_graphic_pane

0x6c0c,	// (0x0004177d) list_double2_large_graphic_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double2_large_graphic_pane

0x6c0c,	// (0x0004177d) list_double2_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double2_pane

0x6c0c,	// (0x0004177d) list_double_graphic_heading_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_graphic_heading_pane

0x6c0c,	// (0x0004177d) list_double_graphic_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_graphic_pane

0x6c0c,	// (0x0004177d) list_double_heading_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_heading_pane

0x6c0c,	// (0x0004177d) list_double_large_graphic_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_large_graphic_pane

0x6c0c,	// (0x0004177d) list_double_number_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_number_pane

0x6c0c,	// (0x0004177d) list_double_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_pane

0x6c0c,	// (0x0004177d) list_double_time_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_double_time_pane

0x6c0c,	// (0x0004177d) list_setting_number_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_setting_number_pane

0x6c0c,	// (0x0004177d) list_setting_pane_ParamLimits

0x6c0c,	// (0x0004177d) list_setting_pane

0x6c45,	// (0x000417b6) list_single_2graphic_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_2graphic_pane

0x6c45,	// (0x000417b6) list_single_graphic_heading_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_graphic_heading_pane

0x6c45,	// (0x000417b6) list_single_graphic_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_graphic_pane

0x6c45,	// (0x000417b6) list_single_heading_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_heading_pane

0x6c83,	// (0x000417f4) list_single_large_graphic_pane_ParamLimits

0x6c83,	// (0x000417f4) list_single_large_graphic_pane

0x6c45,	// (0x000417b6) list_single_number_heading_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_number_heading_pane

0x6c45,	// (0x000417b6) list_single_number_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_number_pane

0x6c45,	// (0x000417b6) list_single_pane_ParamLimits

0x6c45,	// (0x000417b6) list_single_pane

0x7e16,	// (0x00042987) list_highlight_pane_cp1

0x5c12,	// (0x00040783) list_single_pane_g1_ParamLimits

0x5c12,	// (0x00040783) list_single_pane_g1

0x5c1e,	// (0x0004078f) list_single_pane_g2_ParamLimits

0x5c1e,	// (0x0004078f) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004a143) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004a143) list_single_pane_g

0x5108,	// (0x0003fc79) list_single_pane_t1_ParamLimits

0x5108,	// (0x0003fc79) list_single_pane_t1

0x5c12,	// (0x00040783) list_single_number_pane_g1_ParamLimits

0x5c12,	// (0x00040783) list_single_number_pane_g1

0x5c1e,	// (0x0004078f) list_single_number_pane_g2_ParamLimits

0x5c1e,	// (0x0004078f) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004a143) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004a143) list_single_number_pane_g

0x50b0,	// (0x0003fc21) list_single_number_pane_t1_ParamLimits

0x50b0,	// (0x0003fc21) list_single_number_pane_t1

0x50c6,	// (0x0003fc37) list_single_number_pane_t2_ParamLimits

0x50c6,	// (0x0003fc37) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0004a4d5) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0004a4d5) list_single_number_pane_t

0x4804,	// (0x0003f375) list_single_graphic_pane_g1_ParamLimits

0x4804,	// (0x0003f375) list_single_graphic_pane_g1

0x5c12,	// (0x00040783) list_single_graphic_pane_g2_ParamLimits

0x5c12,	// (0x00040783) list_single_graphic_pane_g2

0x5c1e,	// (0x0004078f) list_single_graphic_pane_g3_ParamLimits

0x5c1e,	// (0x0004078f) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004a132) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004a132) list_single_graphic_pane_g

0x4810,	// (0x0003f381) list_single_graphic_pane_t1_ParamLimits

0x4810,	// (0x0003f381) list_single_graphic_pane_t1

0x4826,	// (0x0003f397) list_single_heading_pane_g1_ParamLimits

0x4826,	// (0x0003f397) list_single_heading_pane_g1

0x5c1e,	// (0x0004078f) list_single_heading_pane_g2_ParamLimits

0x5c1e,	// (0x0004078f) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004a139) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004a139) list_single_heading_pane_g

0x4839,	// (0x0003f3aa) list_single_heading_pane_t1_ParamLimits

0x4839,	// (0x0003f3aa) list_single_heading_pane_t1

0x5c2a,	// (0x0004079b) list_single_heading_pane_t2_ParamLimits

0x5c2a,	// (0x0004079b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004a13e) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004a13e) list_single_heading_pane_t

0x5c12,	// (0x00040783) list_single_number_heading_pane_g1_ParamLimits

0x5c12,	// (0x00040783) list_single_number_heading_pane_g1

0x5c1e,	// (0x0004078f) list_single_number_heading_pane_g2_ParamLimits

0x5c1e,	// (0x0004078f) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004a143) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004a143) list_single_number_heading_pane_g

0x484f,	// (0x0003f3c0) list_single_number_heading_pane_t1_ParamLimits

0x484f,	// (0x0003f3c0) list_single_number_heading_pane_t1

0x4865,	// (0x0003f3d6) list_single_number_heading_pane_t2_ParamLimits

0x4865,	// (0x0003f3d6) list_single_number_heading_pane_t2

0x4877,	// (0x0003f3e8) list_single_number_heading_pane_t3_ParamLimits

0x4877,	// (0x0003f3e8) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004a148) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004a148) list_single_number_heading_pane_t

0x4889,	// (0x0003f3fa) list_single_graphic_heading_pane_g1_ParamLimits

0x4889,	// (0x0003f3fa) list_single_graphic_heading_pane_g1

0x5c3c,	// (0x000407ad) list_single_graphic_heading_pane_g4_ParamLimits

0x5c3c,	// (0x000407ad) list_single_graphic_heading_pane_g4

0x5c1e,	// (0x0004078f) list_single_graphic_heading_pane_g5_ParamLimits

0x5c1e,	// (0x0004078f) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004a14f) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004a14f) list_single_graphic_heading_pane_g

0x484f,	// (0x0003f3c0) list_single_graphic_heading_pane_t1_ParamLimits

0x484f,	// (0x0003f3c0) list_single_graphic_heading_pane_t1

0x48a1,	// (0x0003f412) list_single_graphic_heading_pane_t2_ParamLimits

0x48a1,	// (0x0003f412) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004a156) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004a156) list_single_graphic_heading_pane_t

0x5c4d,	// (0x000407be) list_single_large_graphic_pane_g1_ParamLimits

0x5c4d,	// (0x000407be) list_single_large_graphic_pane_g1

0x5c59,	// (0x000407ca) list_single_large_graphic_pane_g2_ParamLimits

0x5c59,	// (0x000407ca) list_single_large_graphic_pane_g2

0x5c65,	// (0x000407d6) list_single_large_graphic_pane_g3_ParamLimits

0x5c65,	// (0x000407d6) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004a15b) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004a15b) list_single_large_graphic_pane_g

0xa288,	// (0x00044df9) wait_border_pane_g2_copy1

0x5c71,	// (0x000407e2) list_single_large_graphic_pane_g4_cp2

0x48b7,	// (0x0003f428) list_single_large_graphic_pane_t1_ParamLimits

0x48b7,	// (0x0003f428) list_single_large_graphic_pane_t1

0x8732,	// (0x000432a3) list_double_pane_g1_ParamLimits

0x8732,	// (0x000432a3) list_double_pane_g1

0x5c79,	// (0x000407ea) list_double_pane_g2_ParamLimits

0x5c79,	// (0x000407ea) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004a162) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004a162) list_double_pane_g

0x48cd,	// (0x0003f43e) list_double_pane_t1_ParamLimits

0x48cd,	// (0x0003f43e) list_double_pane_t1

0x48e3,	// (0x0003f454) list_double_pane_t2_ParamLimits

0x48e3,	// (0x0003f454) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004a167) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004a167) list_double_pane_t

0x48f5,	// (0x0003f466) list_double2_pane_g1_ParamLimits

0x48f5,	// (0x0003f466) list_double2_pane_g1

0x4906,	// (0x0003f477) list_double2_pane_g2_ParamLimits

0x4906,	// (0x0003f477) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004a16c) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004a16c) list_double2_pane_g

0x4912,	// (0x0003f483) list_double2_pane_t1_ParamLimits

0x4912,	// (0x0003f483) list_double2_pane_t1

0x4928,	// (0x0003f499) list_double2_pane_t2_ParamLimits

0x4928,	// (0x0003f499) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004a171) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004a171) list_double2_pane_t

0x8732,	// (0x000432a3) list_double_number_pane_g1_ParamLimits

0x8732,	// (0x000432a3) list_double_number_pane_g1

0x5c79,	// (0x000407ea) list_double_number_pane_g2_ParamLimits

0x5c79,	// (0x000407ea) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004a162) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004a162) list_double_number_pane_g

0x493a,	// (0x0003f4ab) list_double_number_pane_t1_ParamLimits

0x493a,	// (0x0003f4ab) list_double_number_pane_t1

0x494c,	// (0x0003f4bd) list_double_number_pane_t2_ParamLimits

0x494c,	// (0x0003f4bd) list_double_number_pane_t2

0x4962,	// (0x0003f4d3) list_double_number_pane_t3_ParamLimits

0x4962,	// (0x0003f4d3) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004a176) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004a176) list_double_number_pane_t

0x4974,	// (0x0003f4e5) list_double_graphic_pane_g1_ParamLimits

0x4974,	// (0x0003f4e5) list_double_graphic_pane_g1

0x4980,	// (0x0003f4f1) list_double_graphic_pane_g2_ParamLimits

0x4980,	// (0x0003f4f1) list_double_graphic_pane_g2

0x498f,	// (0x0003f500) list_double_graphic_pane_g3_ParamLimits

0x498f,	// (0x0003f500) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004a17d) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004a17d) list_double_graphic_pane_g

0x49a7,	// (0x0003f518) list_double_graphic_pane_t1_ParamLimits

0x49a7,	// (0x0003f518) list_double_graphic_pane_t1

0x49bd,	// (0x0003f52e) list_double_graphic_pane_t2_ParamLimits

0x49bd,	// (0x0003f52e) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004a186) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004a186) list_double_graphic_pane_t

0x49cf,	// (0x0003f540) list_double2_graphic_pane_g1_ParamLimits

0x49cf,	// (0x0003f540) list_double2_graphic_pane_g1

0x9de5,	// (0x00044956) list_double2_graphic_pane_g2_ParamLimits

0x9de5,	// (0x00044956) list_double2_graphic_pane_g2

0x5c85,	// (0x000407f6) list_double2_graphic_pane_g3_ParamLimits

0x5c85,	// (0x000407f6) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004a18b) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004a18b) list_double2_graphic_pane_g

0x49db,	// (0x0003f54c) list_double2_graphic_pane_t1_ParamLimits

0x49db,	// (0x0003f54c) list_double2_graphic_pane_t1

0x49f1,	// (0x0003f562) list_double2_graphic_pane_t2_ParamLimits

0x49f1,	// (0x0003f562) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004a192) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004a192) list_double2_graphic_pane_t

0x4a03,	// (0x0003f574) list_double_large_graphic_pane_g1_ParamLimits

0x4a03,	// (0x0003f574) list_double_large_graphic_pane_g1

0x4a22,	// (0x0003f593) list_double_large_graphic_pane_g2_ParamLimits

0x4a22,	// (0x0003f593) list_double_large_graphic_pane_g2

0x5c79,	// (0x000407ea) list_double_large_graphic_pane_g3_ParamLimits

0x5c79,	// (0x000407ea) list_double_large_graphic_pane_g3

0x4a38,	// (0x0003f5a9) list_double_large_graphic_pane_g4_ParamLimits

0x4a38,	// (0x0003f5a9) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004a197) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004a197) list_double_large_graphic_pane_g

0x4a49,	// (0x0003f5ba) list_double_large_graphic_pane_t1_ParamLimits

0x4a49,	// (0x0003f5ba) list_double_large_graphic_pane_t1

0x4a62,	// (0x0003f5d3) list_double_large_graphic_pane_t2_ParamLimits

0x4a62,	// (0x0003f5d3) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004a1a2) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004a1a2) list_double_large_graphic_pane_t

0x5ca6,	// (0x00040817) list_double2_large_graphic_pane_g1_ParamLimits

0x5ca6,	// (0x00040817) list_double2_large_graphic_pane_g1

0x4a74,	// (0x0003f5e5) list_double2_large_graphic_pane_g2_ParamLimits

0x4a74,	// (0x0003f5e5) list_double2_large_graphic_pane_g2

0x5c85,	// (0x000407f6) list_double2_large_graphic_pane_g3_ParamLimits

0x5c85,	// (0x000407f6) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004a1a7) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004a1a7) list_double2_large_graphic_pane_g

0x4a85,	// (0x0003f5f6) list_double2_large_graphic_pane_t1_ParamLimits

0x4a85,	// (0x0003f5f6) list_double2_large_graphic_pane_t1

0x4a9b,	// (0x0003f60c) list_double2_large_graphic_pane_t2_ParamLimits

0x4a9b,	// (0x0003f60c) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004a1ae) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004a1ae) list_double2_large_graphic_pane_t

0x4aad,	// (0x0003f61e) list_double_heading_pane_g1_ParamLimits

0x4aad,	// (0x0003f61e) list_double_heading_pane_g1

0x5cb2,	// (0x00040823) list_double_heading_pane_g2_ParamLimits

0x5cb2,	// (0x00040823) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004a1b3) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004a1b3) list_double_heading_pane_g

0x4abe,	// (0x0003f62f) list_double_heading_pane_t1_ParamLimits

0x4abe,	// (0x0003f62f) list_double_heading_pane_t1

0x4928,	// (0x0003f499) list_double_heading_pane_t2_ParamLimits

0x4928,	// (0x0003f499) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004a1b8) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004a1b8) list_double_heading_pane_t

0x4ad4,	// (0x0003f645) list_double_graphic_heading_pane_g1_ParamLimits

0x4ad4,	// (0x0003f645) list_double_graphic_heading_pane_g1

0x4aad,	// (0x0003f61e) list_double_graphic_heading_pane_g2_ParamLimits

0x4aad,	// (0x0003f61e) list_double_graphic_heading_pane_g2

0x5cb2,	// (0x00040823) list_double_graphic_heading_pane_g3_ParamLimits

0x5cb2,	// (0x00040823) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004a1bd) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004a1bd) list_double_graphic_heading_pane_g

0x4ae0,	// (0x0003f651) list_double_graphic_heading_pane_t1_ParamLimits

0x4ae0,	// (0x0003f651) list_double_graphic_heading_pane_t1

0x49f1,	// (0x0003f562) list_double_graphic_heading_pane_t2_ParamLimits

0x49f1,	// (0x0003f562) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004a1c4) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004a1c4) list_double_graphic_heading_pane_t

0x4af6,	// (0x0003f667) list_double_time_pane_g1_ParamLimits

0x4af6,	// (0x0003f667) list_double_time_pane_g1

0x4b07,	// (0x0003f678) list_double_time_pane_g2_ParamLimits

0x4b07,	// (0x0003f678) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004a1c9) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004a1c9) list_double_time_pane_g

0x4b13,	// (0x0003f684) list_double_time_pane_t1_ParamLimits

0x4b13,	// (0x0003f684) list_double_time_pane_t1

0x4b29,	// (0x0003f69a) list_double_time_pane_t2_ParamLimits

0x4b29,	// (0x0003f69a) list_double_time_pane_t2

0x4b3b,	// (0x0003f6ac) list_double_time_pane_t3_ParamLimits

0x4b3b,	// (0x0003f6ac) list_double_time_pane_t3

0x4b4d,	// (0x0003f6be) list_double_time_pane_t4_ParamLimits

0x4b4d,	// (0x0003f6be) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004a1ce) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004a1ce) list_double_time_pane_t

0x4b5f,	// (0x0003f6d0) list_setting_pane_g1_ParamLimits

0x4b5f,	// (0x0003f6d0) list_setting_pane_g1

0x4906,	// (0x0003f477) list_setting_pane_g2_ParamLimits

0x4906,	// (0x0003f477) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004a1d7) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004a1d7) list_setting_pane_g

0x4b6b,	// (0x0003f6dc) list_setting_pane_t1_ParamLimits

0x4b6b,	// (0x0003f6dc) list_setting_pane_t1

0x4b85,	// (0x0003f6f6) list_setting_pane_t2_ParamLimits

0x4b85,	// (0x0003f6f6) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004a1dc) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004a1dc) list_setting_pane_t

0x4bc4,	// (0x0003f735) set_value_pane_cp_ParamLimits

0x4bc4,	// (0x0003f735) set_value_pane_cp

0x4bd0,	// (0x0003f741) list_setting_number_pane_g1_ParamLimits

0x4bd0,	// (0x0003f741) list_setting_number_pane_g1

0x4bdc,	// (0x0003f74d) list_setting_number_pane_g2_ParamLimits

0x4bdc,	// (0x0003f74d) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004a1e3) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004a1e3) list_setting_number_pane_g

0x4be8,	// (0x0003f759) list_setting_number_pane_t1_ParamLimits

0x4be8,	// (0x0003f759) list_setting_number_pane_t1

0x4c01,	// (0x0003f772) list_setting_number_pane_t2_ParamLimits

0x4c01,	// (0x0003f772) list_setting_number_pane_t2

0x4c1b,	// (0x0003f78c) list_setting_number_pane_t3_ParamLimits

0x4c1b,	// (0x0003f78c) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004a1e8) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004a1e8) list_setting_number_pane_t

0x4bc4,	// (0x0003f735) set_value_pane_ParamLimits

0x4bc4,	// (0x0003f735) set_value_pane

0x873e,	// (0x000432af) bg_set_opt_pane_ParamLimits

0x873e,	// (0x000432af) bg_set_opt_pane

0x4c5e,	// (0x0003f7cf) set_value_pane_t1

0x875f,	// (0x000432d0) slider_set_pane_cp3

0x8768,	// (0x000432d9) volume_small_pane_cp

0x8771,	// (0x000432e2) list_form_gen_pane

0x877a,	// (0x000432eb) scroll_pane_cp8

0x4c74,	// (0x0003f7e5) form_field_data_pane_ParamLimits

0x4c74,	// (0x0003f7e5) form_field_data_pane

0x4c98,	// (0x0003f809) form_field_data_wide_pane_ParamLimits

0x4c98,	// (0x0003f809) form_field_data_wide_pane

0x4cbb,	// (0x0003f82c) form_field_popup_pane_ParamLimits

0x4cbb,	// (0x0003f82c) form_field_popup_pane

0x4cdb,	// (0x0003f84c) form_field_popup_wide_pane_ParamLimits

0x4cdb,	// (0x0003f84c) form_field_popup_wide_pane

0x4cfa,	// (0x0003f86b) form_field_slider_pane_ParamLimits

0x4cfa,	// (0x0003f86b) form_field_slider_pane

0x4d0d,	// (0x0003f87e) form_field_slider_wide_pane_ParamLimits

0x4d0d,	// (0x0003f87e) form_field_slider_wide_pane

0x878b,	// (0x000432fc) data_form_pane

0x4d2a,	// (0x0003f89b) form_field_data_pane_t1

0x8797,	// (0x00043308) input_focus_pane

0x4d42,	// (0x0003f8b3) data_form_wide_pane

0x4d5f,	// (0x0003f8d0) form_field_data_wide_pane_t1

0x84fc,	// (0x0004306d) input_focus_pane_cp6

0x4d81,	// (0x0003f8f2) form_field_popup_pane_t1

0x8797,	// (0x00043308) input_focus_pane_cp7

0x87b9,	// (0x0004332a) list_form_pane

0x4da1,	// (0x0003f912) form_field_popup_wide_pane_t1

0x8797,	// (0x00043308) input_focus_pane_cp8

0x87c5,	// (0x00043336) list_form_wide_pane

0x4dbe,	// (0x0003f92f) form_field_slider_pane_t1_ParamLimits

0x4dbe,	// (0x0003f92f) form_field_slider_pane_t1

0x4dd4,	// (0x0003f945) form_field_slider_pane_t2_ParamLimits

0x4dd4,	// (0x0003f945) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004a1f8) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004a1f8) form_field_slider_pane_t

0x8171,	// (0x00042ce2) input_focus_pane_cp9_ParamLimits

0x8171,	// (0x00042ce2) input_focus_pane_cp9

0x4de9,	// (0x0003f95a) slider_cont_pane_ParamLimits

0x4de9,	// (0x0003f95a) slider_cont_pane

0x87d1,	// (0x00043342) form_field_slider_wide_pane_t1_ParamLimits

0x87d1,	// (0x00043342) form_field_slider_wide_pane_t1

0x4dfd,	// (0x0003f96e) form_field_slider_wide_pane_t2_ParamLimits

0x4dfd,	// (0x0003f96e) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004a1fd) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004a1fd) form_field_slider_wide_pane_t

0x8171,	// (0x00042ce2) input_focus_pane_cp10_ParamLimits

0x8171,	// (0x00042ce2) input_focus_pane_cp10

0x4e0f,	// (0x0003f980) slider_cont_pane_cp1_ParamLimits

0x4e0f,	// (0x0003f980) slider_cont_pane_cp1

0x4e23,	// (0x0003f994) slider_form_pane_cp

0x87e3,	// (0x00043354) input_focus_pane_g1

0x87eb,	// (0x0004335c) input_focus_pane_g2

0x87f3,	// (0x00043364) input_focus_pane_g3

0x87fb,	// (0x0004336c) input_focus_pane_g4

0x8803,	// (0x00043374) input_focus_pane_g5

0x880b,	// (0x0004337c) input_focus_pane_g6

0x8813,	// (0x00043384) input_focus_pane_g7

0x881b,	// (0x0004338c) input_focus_pane_g8

0x8823,	// (0x00043394) input_focus_pane_g9

0x7e0c,	// (0x0004297d) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004a202) input_focus_pane_g

0xa291,	// (0x00044e02) wait_border_pane_g3_copy1

0x4e2b,	// (0x0003f99c) data_form_pane_t1

0x7e0c,	// (0x0004297d) wait_anim_pane_g1_copy1

0x50d8,	// (0x0003fc49) data_form_wide_pane_t1

0x4e46,	// (0x0003f9b7) list_form_graphic_pane_cp_ParamLimits

0x4e46,	// (0x0003f9b7) list_form_graphic_pane_cp

0xb1a6,	// (0x00045d17) slider_form_pane_g1

0xb1af,	// (0x00045d20) slider_form_pane_g2

0x0006,

0xf994,	// (0x0004a505) slider_form_pane_g

0x4e5f,	// (0x0003f9d0) list_form_graphic_pane_ParamLimits

0x4e5f,	// (0x0003f9d0) list_form_graphic_pane

0x4e7b,	// (0x0003f9ec) list_form_graphic_pane_g1

0x4e83,	// (0x0003f9f4) list_form_graphic_pane_t1_ParamLimits

0x4e83,	// (0x0003f9f4) list_form_graphic_pane_t1

0x7ef6,	// (0x00042a67) list_highlight_pane_cp5_ParamLimits

0x7ef6,	// (0x00042a67) list_highlight_pane_cp5

0x4e98,	// (0x0003fa09) find_pane_g1

0x882b,	// (0x0004339c) input_find_pane

0x4ea1,	// (0x0003fa12) input_find_pane_g1_ParamLimits

0x4ea1,	// (0x0003fa12) input_find_pane_g1

0x4ead,	// (0x0003fa1e) input_find_pane_t1_ParamLimits

0x4ead,	// (0x0003fa1e) input_find_pane_t1

0x4ec2,	// (0x0003fa33) input_find_pane_t2_ParamLimits

0x4ec2,	// (0x0003fa33) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004a217) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004a217) input_find_pane_t

0x8834,	// (0x000433a5) input_focus_pane_cp5_ParamLimits

0x8834,	// (0x000433a5) input_focus_pane_cp5

0x884e,	// (0x000433bf) bg_popup_window_pane_cp2_ParamLimits

0x884e,	// (0x000433bf) bg_popup_window_pane_cp2

0x885b,	// (0x000433cc) listscroll_menu_pane_ParamLimits

0x885b,	// (0x000433cc) listscroll_menu_pane

0x8867,	// (0x000433d8) popup_submenu_window_ParamLimits

0x8867,	// (0x000433d8) popup_submenu_window

0x8893,	// (0x00043404) find_popup_pane_g1

0x889b,	// (0x0004340c) input_popup_find_pane_cp

0x8834,	// (0x000433a5) input_focus_pane_cp4_ParamLimits

0x8834,	// (0x000433a5) input_focus_pane_cp4

0x88b1,	// (0x00043422) input_popup_find_pane_t1_ParamLimits

0x88b1,	// (0x00043422) input_popup_find_pane_t1

0x7e16,	// (0x00042987) bg_popup_sub_pane_cp

0x88df,	// (0x00043450) listscroll_popup_sub_pane

0x88e7,	// (0x00043458) list_submenu_pane_ParamLimits

0x88e7,	// (0x00043458) list_submenu_pane

0x88f8,	// (0x00043469) scroll_pane_cp4

0x8900,	// (0x00043471) list_single_popup_submenu_pane_ParamLimits

0x8900,	// (0x00043471) list_single_popup_submenu_pane

0x8914,	// (0x00043485) list_single_popup_submenu_pane_g1

0x891c,	// (0x0004348d) list_single_popup_submenu_pane_t1_ParamLimits

0x891c,	// (0x0004348d) list_single_popup_submenu_pane_t1

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp1_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp1

0x8931,	// (0x000434a2) tabs_2_active_pane_g1

0x8939,	// (0x000434aa) tabs_2_active_pane_t1

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp1_ParamLimits

0x7ef6,	// (0x00042a67) bg_passive_tab_pane_cp1

0x8931,	// (0x000434a2) tabs_2_passive_pane_g1

0x8939,	// (0x000434aa) tabs_2_passive_pane_t1

0x894b,	// (0x000434bc) bg_active_tab_pane_cp4

0x8959,	// (0x000434ca) tabs_2_long_active_pane_t1

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp4

0x5f6b,	// (0x00040adc) list_single_midp_graphic_pane_g4_ParamLimits

0x894b,	// (0x000434bc) bg_active_tab_pane_cp5

0x8978,	// (0x000434e9) tabs_3_long_active_pane_t1

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp5

0x5f6b,	// (0x00040adc) list_single_midp_graphic_pane_g4

0x7ef6,	// (0x00042a67) bg_popup_window_pane_cp13_ParamLimits

0x7ef6,	// (0x00042a67) bg_popup_window_pane_cp13

0x8993,	// (0x00043504) listscroll_popup_fast_pane_ParamLimits

0x8993,	// (0x00043504) listscroll_popup_fast_pane

0x89a2,	// (0x00043513) grid_popup_fast_pane_ParamLimits

0x89a2,	// (0x00043513) grid_popup_fast_pane

0x89b4,	// (0x00043525) scroll_pane_cp9_ParamLimits

0x89b4,	// (0x00043525) scroll_pane_cp9

0xca50,	// (0x000475c1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xca50,	// (0x000475c1) list_single_graphic_hl_pane_t1_cp2

0x89d8,	// (0x00043549) input_focus_pane_cp20_ParamLimits

0x89d8,	// (0x00043549) input_focus_pane_cp20

0x89e6,	// (0x00043557) query_popup_data_pane_t1_ParamLimits

0x89e6,	// (0x00043557) query_popup_data_pane_t1

0x89f9,	// (0x0004356a) query_popup_data_pane_t2_ParamLimits

0x89f9,	// (0x0004356a) query_popup_data_pane_t2

0x8a3f,	// (0x000435b0) query_popup_data_pane_t3_ParamLimits

0x8a3f,	// (0x000435b0) query_popup_data_pane_t3

0x8a80,	// (0x000435f1) query_popup_data_pane_t4_ParamLimits

0x8a80,	// (0x000435f1) query_popup_data_pane_t4

0x8abc,	// (0x0004362d) query_popup_data_pane_t5_ParamLimits

0x8abc,	// (0x0004362d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004a21c) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004a21c) query_popup_data_pane_t

0x87e3,	// (0x00043354) bg_set_opt_pane_g1

0x87eb,	// (0x0004335c) bg_set_opt_pane_g2

0x87f3,	// (0x00043364) bg_set_opt_pane_g3

0x87fb,	// (0x0004336c) bg_set_opt_pane_g4

0x8803,	// (0x00043374) bg_set_opt_pane_g5

0x880b,	// (0x0004337c) bg_set_opt_pane_g6

0x8813,	// (0x00043384) bg_set_opt_pane_g7

0x881b,	// (0x0004338c) bg_set_opt_pane_g8

0x8823,	// (0x00043394) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004a227) bg_set_opt_pane_g

0x5f77,	// (0x00040ae8) control_top_pane_stacon_ParamLimits

0x5f77,	// (0x00040ae8) control_top_pane_stacon

0x5fca,	// (0x00040b3b) signal_pane_stacon_ParamLimits

0x5fca,	// (0x00040b3b) signal_pane_stacon

0x90ae,	// (0x00043c1f) stacon_top_pane_g1_ParamLimits

0x90ae,	// (0x00043c1f) stacon_top_pane_g1

0x5fef,	// (0x00040b60) title_pane_stacon_ParamLimits

0x5fef,	// (0x00040b60) title_pane_stacon

0x6019,	// (0x00040b8a) uni_indicator_pane_stacon_ParamLimits

0x6019,	// (0x00040b8a) uni_indicator_pane_stacon

0x602e,	// (0x00040b9f) battery_pane_stacon_ParamLimits

0x602e,	// (0x00040b9f) battery_pane_stacon

0x6072,	// (0x00040be3) control_bottom_pane_stacon_ParamLimits

0x6072,	// (0x00040be3) control_bottom_pane_stacon

0x6095,	// (0x00040c06) navi_pane_stacon_ParamLimits

0x6095,	// (0x00040c06) navi_pane_stacon

0x90d0,	// (0x00043c41) stacon_bottom_pane_g1_ParamLimits

0x90d0,	// (0x00043c41) stacon_bottom_pane_g1

0x5cbe,	// (0x0004082f) aid_levels_signal_lsc_ParamLimits

0x5cbe,	// (0x0004082f) aid_levels_signal_lsc

0x5cd4,	// (0x00040845) signal_pane_stacon_g1_ParamLimits

0x5cd4,	// (0x00040845) signal_pane_stacon_g1

0x5ce8,	// (0x00040859) signal_pane_stacon_g2_ParamLimits

0x5ce8,	// (0x00040859) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004a23a) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004a23a) signal_pane_stacon_g

0x5d1d,	// (0x0004088e) title_pane_stacon_t1_ParamLimits

0x5d1d,	// (0x0004088e) title_pane_stacon_t1

0x8b00,	// (0x00043671) uni_indicator_pane_stacon_g1

0x8b0a,	// (0x0004367b) uni_indicator_pane_stacon_g2

0x8b14,	// (0x00043685) uni_indicator_pane_stacon_g3

0x8b1e,	// (0x0004368f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004a246) uni_indicator_pane_stacon_g

0x5d42,	// (0x000408b3) control_top_pane_stacon_g1

0x5d4a,	// (0x000408bb) control_top_pane_stacon_t1_ParamLimits

0x5d4a,	// (0x000408bb) control_top_pane_stacon_t1

0x5d81,	// (0x000408f2) aid_levels_battery_lsc_ParamLimits

0x5d81,	// (0x000408f2) aid_levels_battery_lsc

0x5d98,	// (0x00040909) battery_pane_stacon_g1_ParamLimits

0x5d98,	// (0x00040909) battery_pane_stacon_g1

0x5dab,	// (0x0004091c) battery_pane_stacon_g2_ParamLimits

0x5dab,	// (0x0004091c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004a24f) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004a24f) battery_pane_stacon_g

0x5de9,	// (0x0004095a) navi_icon_pane_stacon

0x5dfd,	// (0x0004096e) navi_navi_pane_stacon

0x5de9,	// (0x0004095a) navi_text_pane_stacon

0x5d42,	// (0x000408b3) control_bottom_pane_stacon_g1

0x5e11,	// (0x00040982) control_bottom_pane_stacon_t1_ParamLimits

0x5e11,	// (0x00040982) control_bottom_pane_stacon_t1

0x8b42,	// (0x000436b3) grid_app_pane_ParamLimits

0x8b42,	// (0x000436b3) grid_app_pane

0x8b64,	// (0x000436d5) scroll_pane_cp15_ParamLimits

0x8b64,	// (0x000436d5) scroll_pane_cp15

0x8b77,	// (0x000436e8) cell_app_pane_ParamLimits

0x8b77,	// (0x000436e8) cell_app_pane

0x8b9f,	// (0x00043710) cell_app_pane_g1_ParamLimits

0x8b9f,	// (0x00043710) cell_app_pane_g1

0x8bc3,	// (0x00043734) cell_app_pane_g2_ParamLimits

0x8bc3,	// (0x00043734) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004a254) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004a254) cell_app_pane_g

0x8bcf,	// (0x00043740) cell_app_pane_t1_ParamLimits

0x8bcf,	// (0x00043740) cell_app_pane_t1

0x8be6,	// (0x00043757) grid_highlight_pane_ParamLimits

0x8be6,	// (0x00043757) grid_highlight_pane

0x87e3,	// (0x00043354) cell_highlight_pane_g1

0x87eb,	// (0x0004335c) cell_highlight_pane_g2

0x87f3,	// (0x00043364) cell_highlight_pane_g3

0x87fb,	// (0x0004336c) cell_highlight_pane_g4

0x8803,	// (0x00043374) cell_highlight_pane_g5

0x880b,	// (0x0004337c) cell_highlight_pane_g6

0x8813,	// (0x00043384) cell_highlight_pane_g7

0x881b,	// (0x0004338c) cell_highlight_pane_g8

0x8823,	// (0x00043394) cell_highlight_pane_g9

0x7e0c,	// (0x0004297d) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004a202) cell_highlight_pane_g

0x8bf7,	// (0x00043768) bg_scroll_pane

0x5e5b,	// (0x000409cc) scroll_handle_pane

0x8c3e,	// (0x000437af) scroll_bg_pane_g1

0x8c53,	// (0x000437c4) scroll_bg_pane_g2

0x8c6b,	// (0x000437dc) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004a259) scroll_bg_pane_g

0x8c80,	// (0x000437f1) scroll_handle_focus_pane_ParamLimits

0x8c80,	// (0x000437f1) scroll_handle_focus_pane

0x8c3e,	// (0x000437af) scroll_handle_pane_g1

0x8c8d,	// (0x000437fe) scroll_handle_pane_g2

0x8c6b,	// (0x000437dc) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004a260) scroll_handle_pane_g

0x8834,	// (0x000433a5) bg_popup_sub_pane_cp21_ParamLimits

0x8834,	// (0x000433a5) bg_popup_sub_pane_cp21

0x8ca1,	// (0x00043812) popup_fep_japan_predictive_window_t1_ParamLimits

0x8ca1,	// (0x00043812) popup_fep_japan_predictive_window_t1

0x8cbb,	// (0x0004382c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8cbb,	// (0x0004382c) popup_fep_japan_predictive_window_t2

0x8cee,	// (0x0004385f) popup_fep_japan_predictive_window_t3_ParamLimits

0x8cee,	// (0x0004385f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004a267) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004a267) popup_fep_japan_predictive_window_t

0x7e16,	// (0x00042987) bg_popup_sub_pane_cp23

0x8d25,	// (0x00043896) listscroll_japin_cand_pane

0x8d2d,	// (0x0004389e) popup_fep_japan_candidate_window_t1

0x8d3b,	// (0x000438ac) candidate_pane_ParamLimits

0x8d3b,	// (0x000438ac) candidate_pane

0x8d4d,	// (0x000438be) scroll_pane_cp30

0x8d55,	// (0x000438c6) list_single_popup_jap_candidate_pane_ParamLimits

0x8d55,	// (0x000438c6) list_single_popup_jap_candidate_pane

0x7e16,	// (0x00042987) list_highlight_pane_cp30

0x8d6a,	// (0x000438db) list_single_popup_jap_candidate_pane_t1

0x8d79,	// (0x000438ea) level_1_signal

0x8d8b,	// (0x000438fc) level_2_signal

0x8d9e,	// (0x0004390f) level_3_signal

0x8db1,	// (0x00043922) level_4_signal

0x8dc4,	// (0x00043935) level_5_signal

0x8dd7,	// (0x00043948) level_6_signal

0x8dea,	// (0x0004395b) level_7_signal

0x8d79,	// (0x000438ea) level_1_battery

0x8d8b,	// (0x000438fc) level_2_battery

0x8d9e,	// (0x0004390f) level_3_battery

0x8db1,	// (0x00043922) level_4_battery

0x8dc4,	// (0x00043935) level_5_battery

0x8dd7,	// (0x00043948) level_6_battery

0x8dea,	// (0x0004395b) level_7_battery

0x8e15,	// (0x00043986) list_menu_pane_ParamLimits

0x8e15,	// (0x00043986) list_menu_pane

0x8e2b,	// (0x0004399c) scroll_pane_cp25_ParamLimits

0x8e2b,	// (0x0004399c) scroll_pane_cp25

0x8e44,	// (0x000439b5) list_double2_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double2_graphic_pane_cp2

0x8e44,	// (0x000439b5) list_double2_large_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double2_large_graphic_pane_cp2

0x8e44,	// (0x000439b5) list_double2_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double2_pane_cp2

0x8e44,	// (0x000439b5) list_double_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double_graphic_pane_cp2

0x8e44,	// (0x000439b5) list_double_large_graphic_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double_large_graphic_pane_cp2

0x8e44,	// (0x000439b5) list_double_number_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double_number_pane_cp2

0x8e44,	// (0x000439b5) list_double_pane_cp2_ParamLimits

0x8e44,	// (0x000439b5) list_double_pane_cp2

0x8e68,	// (0x000439d9) list_single_2graphic_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_2graphic_pane_cp2

0x8e68,	// (0x000439d9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_graphic_heading_pane_cp2

0x8e68,	// (0x000439d9) list_single_graphic_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_graphic_pane_cp2

0x8e68,	// (0x000439d9) list_single_heading_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_heading_pane_cp2

0x8e81,	// (0x000439f2) list_single_large_graphic_pane_cp2_ParamLimits

0x8e81,	// (0x000439f2) list_single_large_graphic_pane_cp2

0x8e68,	// (0x000439d9) list_single_number_heading_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_number_heading_pane_cp2

0x8e68,	// (0x000439d9) list_single_number_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_number_pane_cp2

0x8e68,	// (0x000439d9) list_single_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_pane_cp2

0x8efd,	// (0x00043a6e) bg_popup_sub_pane_cp22

0x5f0d,	// (0x00040a7e) popup_side_volume_key_window_g1

0x5f37,	// (0x00040aa8) popup_side_volume_key_window_t1

0x5f53,	// (0x00040ac4) volume_small_pane_cp1

0x8171,	// (0x00042ce2) bg_popup_sub_pane_cp24_ParamLimits

0x8171,	// (0x00042ce2) bg_popup_sub_pane_cp24

0x8f13,	// (0x00043a84) fep_china_uni_candidate_pane_ParamLimits

0x8f13,	// (0x00043a84) fep_china_uni_candidate_pane

0x8f27,	// (0x00043a98) fep_china_uni_entry_pane

0x8f37,	// (0x00043aa8) popup_fep_china_uni_window_g1

0x8f53,	// (0x00043ac4) fep_china_uni_entry_pane_g1

0x8f5b,	// (0x00043acc) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004a298) fep_china_uni_entry_pane_g

0x8f63,	// (0x00043ad4) fep_entry_item_pane

0x8f6d,	// (0x00043ade) fep_candidate_item_pane

0x8f75,	// (0x00043ae6) fep_china_uni_candidate_pane_g1

0x8f7d,	// (0x00043aee) fep_china_uni_candidate_pane_g2

0x8f85,	// (0x00043af6) fep_china_uni_candidate_pane_g3

0x8f8d,	// (0x00043afe) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004a29d) fep_china_uni_candidate_pane_g

0x7e0c,	// (0x0004297d) fep_entry_item_pane_g1

0x8f95,	// (0x00043b06) fep_entry_item_pane_t1_ParamLimits

0x8f95,	// (0x00043b06) fep_entry_item_pane_t1

0x8fab,	// (0x00043b1c) fep_candidate_item_pane_t1_ParamLimits

0x8fab,	// (0x00043b1c) fep_candidate_item_pane_t1

0x8fc0,	// (0x00043b31) fep_candidate_item_pane_t2_ParamLimits

0x8fc0,	// (0x00043b31) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004a2a6) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004a2a6) fep_candidate_item_pane_t

0x7ef6,	// (0x00042a67) list_highlight_pane_cp31_ParamLimits

0x7ef6,	// (0x00042a67) list_highlight_pane_cp31

0x8fd2,	// (0x00043b43) level_1_signal_lsc

0x8fdb,	// (0x00043b4c) level_2_signal_lsc

0x8fe4,	// (0x00043b55) level_3_signal_lsc

0x8fed,	// (0x00043b5e) level_4_signal_lsc

0x8ff6,	// (0x00043b67) level_5_signal_lsc

0x8fff,	// (0x00043b70) level_6_signal_lsc

0x9008,	// (0x00043b79) level_7_signal_lsc

0x9008,	// (0x00043b79) level_1_battery_lsc

0x9011,	// (0x00043b82) level_2_battery_lsc

0x901a,	// (0x00043b8b) level_3_battery_lsc

0x9023,	// (0x00043b94) level_4_battery_lsc

0x902c,	// (0x00043b9d) level_5_battery_lsc

0x9035,	// (0x00043ba6) level_6_battery_lsc

0x8fd2,	// (0x00043b43) level_7_battery_lsc

0x903e,	// (0x00043baf) scroll_handle_focus_pane_g1

0x9047,	// (0x00043bb8) scroll_handle_focus_pane_g2

0x9050,	// (0x00043bc1) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004a2ab) scroll_handle_focus_pane_g

0x4ed7,	// (0x0003fa48) list_single_2graphic_pane_g1_ParamLimits

0x4ed7,	// (0x0003fa48) list_single_2graphic_pane_g1

0x5c3c,	// (0x000407ad) list_single_2graphic_pane_g2_ParamLimits

0x5c3c,	// (0x000407ad) list_single_2graphic_pane_g2

0x5c1e,	// (0x0004078f) list_single_2graphic_pane_g3_ParamLimits

0x5c1e,	// (0x0004078f) list_single_2graphic_pane_g3

0x4ee3,	// (0x0003fa54) list_single_2graphic_pane_g4_ParamLimits

0x4ee3,	// (0x0003fa54) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004a2b2) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004a2b2) list_single_2graphic_pane_g

0x4eef,	// (0x0003fa60) list_single_2graphic_pane_t1_ParamLimits

0x4eef,	// (0x0003fa60) list_single_2graphic_pane_t1

0x5f5b,	// (0x00040acc) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5f5b,	// (0x00040acc) list_double2_graphic_large_graphic_pane_g1

0x4a74,	// (0x0003f5e5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4a74,	// (0x0003f5e5) list_double2_graphic_large_graphic_pane_g2

0x5c85,	// (0x000407f6) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5c85,	// (0x000407f6) list_double2_graphic_large_graphic_pane_g3

0x5f6b,	// (0x00040adc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5f6b,	// (0x00040adc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004a2bb) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004a2bb) list_double2_graphic_large_graphic_pane_g

0x4f1d,	// (0x0003fa8e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4f1d,	// (0x0003fa8e) list_double2_graphic_large_graphic_pane_t1

0x4f33,	// (0x0003faa4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4f33,	// (0x0003faa4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004a2c4) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004a2c4) list_double2_graphic_large_graphic_pane_t

0x9198,	// (0x00043d09) popup_fast_swap_window_ParamLimits

0x9198,	// (0x00043d09) popup_fast_swap_window

0x91b4,	// (0x00043d25) popup_side_volume_key_window

0x91d0,	// (0x00043d41) stacon_top_pane

0x91da,	// (0x00043d4b) status_pane_ParamLimits

0x91da,	// (0x00043d4b) status_pane

0x91e8,	// (0x00043d59) status_small_pane

0x7e16,	// (0x00042987) control_pane

0x7e16,	// (0x00042987) stacon_bottom_pane

0x877a,	// (0x000432eb) scroll_pane_cp121

0x8771,	// (0x000432e2) set_content_pane

0x9059,	// (0x00043bca) bg_active_tab_pane_g1_cp1

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp1

0x906b,	// (0x00043bdc) bg_active_tab_pane_g3_cp1

0x9059,	// (0x00043bca) bg_passive_tab_pane_g1_cp1

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp1

0x906b,	// (0x00043bdc) bg_passive_tab_pane_g3_cp1

0x9074,	// (0x00043be5) bg_active_tab_pane_g1_cp2

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp2

0x907d,	// (0x00043bee) bg_active_tab_pane_g3_cp2

0x9074,	// (0x00043be5) bg_passive_tab_pane_g1_cp2

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp2

0x907d,	// (0x00043bee) bg_passive_tab_pane_g3_cp2

0x9086,	// (0x00043bf7) bg_active_tab_pane_g1_cp3

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp3

0x908f,	// (0x00043c00) bg_active_tab_pane_g3_cp3

0x9086,	// (0x00043bf7) bg_passive_tab_pane_g1_cp3

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp3

0x908f,	// (0x00043c00) bg_passive_tab_pane_g3_cp3

0x9098,	// (0x00043c09) bg_active_tab_pane_g1_cp4

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp4

0x90a3,	// (0x00043c14) bg_active_tab_pane_g3_cp4

0x9098,	// (0x00043c09) bg_passive_tab_pane_g1_cp4

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp4

0x90a3,	// (0x00043c14) bg_passive_tab_pane_g3_cp4

0x90ec,	// (0x00043c5d) bg_active_tab_pane_g1_cp5

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp5

0x90f5,	// (0x00043c66) bg_active_tab_pane_g3_cp5

0x90ec,	// (0x00043c5d) bg_passive_tab_pane_g1_cp5

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp5

0x90f5,	// (0x00043c66) bg_passive_tab_pane_g3_cp5

0x90fe,	// (0x00043c6f) list_set_graphic_pane_ParamLimits

0x90fe,	// (0x00043c6f) list_set_graphic_pane

0x7e16,	// (0x00042987) bg_set_opt_pane_cp4

0x911b,	// (0x00043c8c) list_set_graphic_pane_g1_ParamLimits

0x911b,	// (0x00043c8c) list_set_graphic_pane_g1

0x9127,	// (0x00043c98) list_set_graphic_pane_g2_ParamLimits

0x9127,	// (0x00043c98) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004a2c9) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004a2c9) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0004a63e) volume_small_pane_cp_g

0x914b,	// (0x00043cbc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x914b,	// (0x00043cbc) list_double2_large_graphic_pane_g1_cp2

0x9157,	// (0x00043cc8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9157,	// (0x00043cc8) list_double2_large_graphic_pane_g2_cp2

0x9168,	// (0x00043cd9) list_double2_large_graphic_pane_g3_cp2

0x9170,	// (0x00043ce1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9170,	// (0x00043ce1) list_double2_large_graphic_pane_t1_cp2

0x9186,	// (0x00043cf7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9186,	// (0x00043cf7) list_double2_large_graphic_pane_t2_cp2

0xad64,	// (0x000458d5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xad64,	// (0x000458d5) list_double_large_graphic_pane_g1_cp2

0xad75,	// (0x000458e6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xad75,	// (0x000458e6) list_double_large_graphic_pane_g2_cp2

0x9301,	// (0x00043e72) list_double_large_graphic_pane_g3_cp2

0xad86,	// (0x000458f7) list_double_large_graphic_pane_g4_cp

0xad8e,	// (0x000458ff) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xad8e,	// (0x000458ff) list_double_large_graphic_pane_t1_cp2

0xada5,	// (0x00045916) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xada5,	// (0x00045916) list_double_large_graphic_pane_t2_cp2

0x91f3,	// (0x00043d64) list_double2_graphic_pane_g1_cp2_ParamLimits

0x91f3,	// (0x00043d64) list_double2_graphic_pane_g1_cp2

0x9201,	// (0x00043d72) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9201,	// (0x00043d72) list_double2_graphic_pane_g2_cp2

0x9212,	// (0x00043d83) list_double2_graphic_pane_g3_cp2

0x921c,	// (0x00043d8d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x921c,	// (0x00043d8d) list_double2_graphic_pane_t1_cp2

0x9232,	// (0x00043da3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x9232,	// (0x00043da3) list_double2_graphic_pane_t2_cp2

0x9244,	// (0x00043db5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x9244,	// (0x00043db5) list_single_number_heading_pane_g1_cp2

0x9250,	// (0x00043dc1) list_single_number_heading_pane_g2_cp2

0x9258,	// (0x00043dc9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9258,	// (0x00043dc9) list_single_number_heading_pane_t1_cp2

0x926e,	// (0x00043ddf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x926e,	// (0x00043ddf) list_single_number_heading_pane_t2_cp2

0x9280,	// (0x00043df1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9280,	// (0x00043df1) list_single_number_heading_pane_t3_cp2

0x9244,	// (0x00043db5) list_single_heading_pane_g1_cp2_ParamLimits

0x9244,	// (0x00043db5) list_single_heading_pane_g1_cp2

0x9250,	// (0x00043dc1) list_single_heading_pane_g2_cp2

0x9258,	// (0x00043dc9) list_single_heading_pane_t1_cp2_ParamLimits

0x9258,	// (0x00043dc9) list_single_heading_pane_t1_cp2

0xab6c,	// (0x000456dd) list_single_heading_pane_t2_cp2_ParamLimits

0xab6c,	// (0x000456dd) list_single_heading_pane_t2_cp2

0xaab4,	// (0x00045625) list_double_graphic_pane_g1_cp2_ParamLimits

0xaab4,	// (0x00045625) list_double_graphic_pane_g1_cp2

0xaac0,	// (0x00045631) list_double_graphic_pane_g2_cp2_ParamLimits

0xaac0,	// (0x00045631) list_double_graphic_pane_g2_cp2

0xaacf,	// (0x00045640) list_double_graphic_pane_g3_cp2

0xaad7,	// (0x00045648) list_double_graphic_pane_t1_cp2_ParamLimits

0xaad7,	// (0x00045648) list_double_graphic_pane_t1_cp2

0xaaed,	// (0x0004565e) list_double_graphic_pane_t2_cp2_ParamLimits

0xaaed,	// (0x0004565e) list_double_graphic_pane_t2_cp2

0x92f5,	// (0x00043e66) list_double_number_pane_g1_cp2_ParamLimits

0x92f5,	// (0x00043e66) list_double_number_pane_g1_cp2

0x9301,	// (0x00043e72) list_double_number_pane_g2_cp2

0xaa78,	// (0x000455e9) list_double_number_pane_t1_cp2_ParamLimits

0xaa78,	// (0x000455e9) list_double_number_pane_t1_cp2

0xaa8c,	// (0x000455fd) list_double_number_pane_t2_cp2_ParamLimits

0xaa8c,	// (0x000455fd) list_double_number_pane_t2_cp2

0xaaa2,	// (0x00045613) list_double_number_pane_t3_cp2_ParamLimits

0xaaa2,	// (0x00045613) list_double_number_pane_t3_cp2

0xa961,	// (0x000454d2) list_single_graphic_pane_g1_cp2_ParamLimits

0xa961,	// (0x000454d2) list_single_graphic_pane_g1_cp2

0x9359,	// (0x00043eca) list_single_graphic_pane_g2_cp2_ParamLimits

0x9359,	// (0x00043eca) list_single_graphic_pane_g2_cp2

0x9365,	// (0x00043ed6) list_single_graphic_pane_g3_cp2

0xa937,	// (0x000454a8) list_single_graphic_pane_t1_cp2_ParamLimits

0xa937,	// (0x000454a8) list_single_graphic_pane_t1_cp2

0x9359,	// (0x00043eca) list_single_number_pane_g1_cp2_ParamLimits

0x9359,	// (0x00043eca) list_single_number_pane_g1_cp2

0x9365,	// (0x00043ed6) list_single_number_pane_g2_cp2

0xa937,	// (0x000454a8) list_single_number_pane_t1_cp2_ParamLimits

0xa937,	// (0x000454a8) list_single_number_pane_t1_cp2

0xa94d,	// (0x000454be) list_single_number_pane_t2_cp2_ParamLimits

0xa94d,	// (0x000454be) list_single_number_pane_t2_cp2

0x9157,	// (0x00043cc8) list_double2_pane_g1_cp2_ParamLimits

0x9157,	// (0x00043cc8) list_double2_pane_g1_cp2

0x9168,	// (0x00043cd9) list_double2_pane_g2_cp2

0x92cd,	// (0x00043e3e) list_double2_pane_t1_cp2_ParamLimits

0x92cd,	// (0x00043e3e) list_double2_pane_t1_cp2

0x92e3,	// (0x00043e54) list_double2_pane_t2_cp2_ParamLimits

0x92e3,	// (0x00043e54) list_double2_pane_t2_cp2

0x92f5,	// (0x00043e66) list_double_pane_g1_cp2_ParamLimits

0x92f5,	// (0x00043e66) list_double_pane_g1_cp2

0x9301,	// (0x00043e72) list_double_pane_g2_cp2

0x9309,	// (0x00043e7a) list_double_pane_t1_cp2_ParamLimits

0x9309,	// (0x00043e7a) list_double_pane_t1_cp2

0x931f,	// (0x00043e90) list_double_pane_t2_cp2_ParamLimits

0x931f,	// (0x00043e90) list_double_pane_t2_cp2

0x9349,	// (0x00043eba) list_single_pane_cp2_g3

0x9359,	// (0x00043eca) list_single_pane_g1_cp2_ParamLimits

0x9359,	// (0x00043eca) list_single_pane_g1_cp2

0x9365,	// (0x00043ed6) list_single_pane_g2_cp2

0x936d,	// (0x00043ede) list_single_pane_t1_cp2_ParamLimits

0x936d,	// (0x00043ede) list_single_pane_t1_cp2

0x9385,	// (0x00043ef6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9385,	// (0x00043ef6) list_single_large_graphic_pane_g1_cp2

0x9391,	// (0x00043f02) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9391,	// (0x00043f02) list_single_large_graphic_pane_g2_cp2

0x939d,	// (0x00043f0e) list_single_large_graphic_pane_g3_cp2

0x93a5,	// (0x00043f16) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x93a5,	// (0x00043f16) list_single_large_graphic_pane_g4_cp1

0x93bf,	// (0x00043f30) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x93bf,	// (0x00043f30) list_single_large_graphic_pane_t1_cp2

0xa903,	// (0x00045474) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa903,	// (0x00045474) list_single_graphic_heading_pane_g1_cp2

0xa8d0,	// (0x00045441) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa8d0,	// (0x00045441) list_single_graphic_heading_pane_g4_cp2

0x9365,	// (0x00043ed6) list_single_graphic_heading_pane_g5_cp2

0xa90f,	// (0x00045480) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa90f,	// (0x00045480) list_single_graphic_heading_pane_t1_cp2

0xa925,	// (0x00045496) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa925,	// (0x00045496) list_single_graphic_heading_pane_t2_cp2

0xa8c4,	// (0x00045435) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa8c4,	// (0x00045435) list_single_2graphic_pane_g1_cp2

0xa8d0,	// (0x00045441) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa8d0,	// (0x00045441) list_single_2graphic_pane_g2_cp2

0x9365,	// (0x00043ed6) list_single_2graphic_pane_g3_cp2

0xa8e1,	// (0x00045452) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa8e1,	// (0x00045452) list_single_2graphic_pane_g4_cp2

0xa8ed,	// (0x0004545e) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa8ed,	// (0x0004545e) list_single_2graphic_pane_t1_cp2

0x7e0c,	// (0x0004297d) list_highlight_pane_g10_cp1

0xa49c,	// (0x0004500d) list_highlight_pane_g1_cp1

0xa4a4,	// (0x00045015) list_highlight_pane_g2_cp1

0xa4ac,	// (0x0004501d) list_highlight_pane_g3_cp1

0xa4b4,	// (0x00045025) list_highlight_pane_g4_cp1

0xa4bc,	// (0x0004502d) list_highlight_pane_g5_cp1

0xa4c4,	// (0x00045035) list_highlight_pane_g6_cp1

0xa4cc,	// (0x0004503d) list_highlight_pane_g7_cp1

0xa4d4,	// (0x00045045) list_highlight_pane_g8_cp1

0xa4dc,	// (0x0004504d) list_highlight_pane_g9_cp1

0xa3bc,	// (0x00044f2d) form_field_slider_pane_t3

0xa3ca,	// (0x00044f3b) form_field_slider_pane_t4

0xa3d8,	// (0x00044f49) slider_form_pane_ParamLimits

0xa3d8,	// (0x00044f49) slider_form_pane

0x7e16,	// (0x00042987) control_abbreviations

0x7e16,	// (0x00042987) control_conventions

0x7e16,	// (0x00042987) control_definitions

0x7e16,	// (0x00042987) format_table_attribute

0xabb6,	// (0x00045727) bg_popup_preview_window_pane_g9

0x7e16,	// (0x00042987) format_table_data2

0x7e16,	// (0x00042987) format_table_data3

0x7e16,	// (0x00042987) format_table_data_example

0x0008,

0x7e16,	// (0x00042987) intro_purpose

0xf8f4,	// (0x0004a465) bg_popup_preview_window_pane_g

0x7e16,	// (0x00042987) texts_category

0x7e16,	// (0x00042987) texts_graphics

0x93d5,	// (0x00043f46) text_digital

0x93e4,	// (0x00043f55) text_primary

0x93f3,	// (0x00043f64) text_primary_small

0x9402,	// (0x00043f73) text_secondary

0x9411,	// (0x00043f82) text_title

0xb290,	// (0x00045e01) bg_passive_tab_pane_g1_cp3_srt

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp3_srt

0xb299,	// (0x00045e0a) bg_passive_tab_pane_g3_cp3_srt

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp3_srt_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp3_srt

0xb2a2,	// (0x00045e13) tabs_4_active_pane_srt_g1

0xb2aa,	// (0x00045e1b) tabs_4_active_pane_srt_t1_ParamLimits

0xb2aa,	// (0x00045e1b) tabs_4_active_pane_srt_t1

0xb290,	// (0x00045e01) bg_active_tab_pane_g1_cp3_copy1

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp3_copy1

0xb299,	// (0x00045e0a) bg_active_tab_pane_g3_cp3_copy1

0x7ef6,	// (0x00042a67) tabs_2_long_active_pane_srt_ParamLimits

0x7ef6,	// (0x00042a67) tabs_2_long_active_pane_srt

0x7ef6,	// (0x00042a67) tabs_2_long_passive_pane_srt_ParamLimits

0x7ef6,	// (0x00042a67) tabs_2_long_passive_pane_srt

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp4_srt

0xafd9,	// (0x00045b4a) bg_passive_tab_pane_g1_cp4_srt

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp4_srt

0xafe2,	// (0x00045b53) bg_passive_tab_pane_g3_cp4_srt

0x894b,	// (0x000434bc) bg_active_tab_pane_cp4_srt_ParamLimits

0x894b,	// (0x000434bc) bg_active_tab_pane_cp4_srt

0xafeb,	// (0x00045b5c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xafeb,	// (0x00045b5c) tabs_2_long_active_pane_srt_t1

0xafd9,	// (0x00045b4a) bg_active_tab_pane_g1_cp4_srt

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp4_srt

0xafe2,	// (0x00045b53) bg_active_tab_pane_g3_cp4_srt

0x8171,	// (0x00042ce2) tabs_3_long_active_pane_srt_ParamLimits

0x8171,	// (0x00042ce2) tabs_3_long_active_pane_srt

0x8171,	// (0x00042ce2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8171,	// (0x00042ce2) tabs_3_long_passive_pane_cp_srt

0x8171,	// (0x00042ce2) tabs_3_long_passive_pane_srt_ParamLimits

0x8171,	// (0x00042ce2) tabs_3_long_passive_pane_srt

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp5_srt

0x90ec,	// (0x00043c5d) bg_passive_tab_pane_g1_cp5_srt

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp5_srt

0x90f5,	// (0x00043c66) bg_passive_tab_pane_g3_cp5_srt

0x894b,	// (0x000434bc) bg_active_tab_pane_cp5_srt_ParamLimits

0x894b,	// (0x000434bc) bg_active_tab_pane_cp5_srt

0xafc7,	// (0x00045b38) tabs_3_long_active_pane_srt_t1_ParamLimits

0xafc7,	// (0x00045b38) tabs_3_long_active_pane_srt_t1

0x90ec,	// (0x00043c5d) bg_active_tab_pane_g1_cp5_srt

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp5_srt

0x90f5,	// (0x00043c66) bg_active_tab_pane_g3_cp5_srt

0xafb9,	// (0x00045b2a) navi_text_pane_srt_t1

0xafb1,	// (0x00045b22) navi_icon_pane_srt_g1

0x95e6,	// (0x00044157) midp_editing_number_pane_srt

0x9420,	// (0x00043f91) midp_ticker_pane_srt

0x95ee,	// (0x0004415f) midp_ticker_pane_srt_g1

0x95f6,	// (0x00044167) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004a2e8) midp_ticker_pane_srt_g

0x95fe,	// (0x0004416f) midp_ticker_pane_srt_t1

0xafa2,	// (0x00045b13) midp_editing_number_pane_t1_copy1

0x9428,	// (0x00043f99) listscroll_midp_pane

0x9428,	// (0x00043f99) midp_form_pane

0x9498,	// (0x00044009) midp_info_popup_window_ParamLimits

0x9498,	// (0x00044009) midp_info_popup_window

0x8834,	// (0x000433a5) bg_popup_sub_pane_cp50_ParamLimits

0x8834,	// (0x000433a5) bg_popup_sub_pane_cp50

0xa0c8,	// (0x00044c39) listscroll_midp_info_pane_ParamLimits

0xa0c8,	// (0x00044c39) listscroll_midp_info_pane

0xa0a8,	// (0x00044c19) listscroll_form_midp_pane_ParamLimits

0xa0a8,	// (0x00044c19) listscroll_form_midp_pane

0xa0b4,	// (0x00044c25) scroll_bar_cp050

0xa088,	// (0x00044bf9) list_midp_pane

0xbcd4,	// (0x00046845) signal_pane_g2_cp

0x9fc2,	// (0x00044b33) listscroll_midp_info_pane_t1_ParamLimits

0x9fc2,	// (0x00044b33) listscroll_midp_info_pane_t1

0x9fda,	// (0x00044b4b) listscroll_midp_info_pane_t2_ParamLimits

0x9fda,	// (0x00044b4b) listscroll_midp_info_pane_t2

0xa018,	// (0x00044b89) listscroll_midp_info_pane_t3_ParamLimits

0xa018,	// (0x00044b89) listscroll_midp_info_pane_t3

0xa052,	// (0x00044bc3) listscroll_midp_info_pane_t4_ParamLimits

0xa052,	// (0x00044bc3) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0004a3a0) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0004a3a0) listscroll_midp_info_pane_t

0x88f8,	// (0x00043469) scroll_pane_cp21

0x9f60,	// (0x00044ad1) form_midp_field_choice_group_pane

0x9f69,	// (0x00044ada) form_midp_field_text_pane

0x9fa8,	// (0x00044b19) form_midp_field_time_pane

0x9fb0,	// (0x00044b21) form_midp_gauge_slider_pane

0x9fb9,	// (0x00044b2a) form_midp_gauge_wait_pane

0x7e16,	// (0x00042987) form_midp_image_pane

0x5086,	// (0x0003fbf7) list_single_midp_pane_ParamLimits

0x5086,	// (0x0003fbf7) list_single_midp_pane

0x9f18,	// (0x00044a89) form_midp_field_text_pane_t1

0x9cdc,	// (0x0004484d) input_focus_pane_cp050

0x9f4f,	// (0x00044ac0) list_midp_form_text_pane

0x9ee7,	// (0x00044a58) form_midp_field_choice_group_pane_t1

0x9ef5,	// (0x00044a66) input_focus_pane_cp051

0x9f09,	// (0x00044a7a) list_midp_choice_pane

0x7e16,	// (0x00042987) status_idle_pane

0x9ecb,	// (0x00044a3c) form_midp_field_time_pane_t1

0x7e0c,	// (0x0004297d) wait_anim_pane_g2_copy1

0x9ed9,	// (0x00044a4a) form_midp_field_time_pane_t2

0x0001,

0x9546,	// (0x000440b7) aid_navinavi_width_2_pane

0xf82a,	// (0x0004a39b) form_midp_field_time_pane_t

0x7e16,	// (0x00042987) input_focus_pane_cp052

0x7e16,	// (0x00042987) bg_input_focus_pane_cp040

0x9e8b,	// (0x000449fc) form_midp_gauge_slider_pane_t1

0x9e99,	// (0x00044a0a) form_midp_gauge_slider_pane_t2

0x9ea7,	// (0x00044a18) form_midp_gauge_slider_pane_t3

0x9eb5,	// (0x00044a26) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0004a392) form_midp_gauge_slider_pane_t

0x9ec3,	// (0x00044a34) form_midp_slider_pane

0x7ef6,	// (0x00042a67) bg_input_focus_pane_cp041_ParamLimits

0x7ef6,	// (0x00042a67) bg_input_focus_pane_cp041

0x9e58,	// (0x000449c9) form_midp_gauge_wait_pane_t1_ParamLimits

0x9e58,	// (0x000449c9) form_midp_gauge_wait_pane_t1

0x9e6a,	// (0x000449db) form_midp_gauge_wait_pane_t2_ParamLimits

0x9e6a,	// (0x000449db) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0004a38d) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0004a38d) form_midp_gauge_wait_pane_t

0x9e7c,	// (0x000449ed) form_midp_wait_pane_ParamLimits

0x9e7c,	// (0x000449ed) form_midp_wait_pane

0x9e22,	// (0x00044993) form_midp_image_pane_g1

0x9e2b,	// (0x0004499c) form_midp_image_pane_t1

0x9e3a,	// (0x000449ab) form_midp_image_pane_t2

0x9e49,	// (0x000449ba) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0004a386) form_midp_image_pane_t

0x9e19,	// (0x0004498a) list_single_midp_pane_g1

0x5077,	// (0x0003fbe8) list_single_midp_pane_t1

0x9df1,	// (0x00044962) list_midp_form_item_pane_ParamLimits

0x9df1,	// (0x00044962) list_midp_form_item_pane

0x94ee,	// (0x0004405f) list_midp_form_item_pane_t1

0x94fd,	// (0x0004406e) midp_ticker_pane_g1

0x9509,	// (0x0004407a) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004a2ce) midp_ticker_pane_g

0x9515,	// (0x00044086) midp_ticker_pane_t1

0xb1f3,	// (0x00045d64) midp_editing_number_pane_t1

0xb1d1,	// (0x00045d42) midp_editing_number_pane

0xb1e0,	// (0x00045d51) midp_ticker_pane

0xaf92,	// (0x00045b03) ai_message_heading_pane

0x7e16,	// (0x00042987) bg_popup_window_pane_cp14

0xaf9a,	// (0x00045b0b) listscroll_ai_message_pane

0xaf1c,	// (0x00045a8d) ai_message_heading_pane_g1_ParamLimits

0xaf1c,	// (0x00045a8d) ai_message_heading_pane_g1

0xaf28,	// (0x00045a99) ai_message_heading_pane_g2_ParamLimits

0xaf28,	// (0x00045a99) ai_message_heading_pane_g2

0xaf34,	// (0x00045aa5) ai_message_heading_pane_g3_ParamLimits

0xaf34,	// (0x00045aa5) ai_message_heading_pane_g3

0xaf40,	// (0x00045ab1) ai_message_heading_pane_g4_ParamLimits

0xaf40,	// (0x00045ab1) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0004a4c7) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0004a4c7) ai_message_heading_pane_g

0xaf4c,	// (0x00045abd) ai_message_heading_pane_t1_ParamLimits

0xaf4c,	// (0x00045abd) ai_message_heading_pane_t1

0xaf66,	// (0x00045ad7) ai_message_heading_pane_t2_ParamLimits

0xaf66,	// (0x00045ad7) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0004a4d0) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0004a4d0) ai_message_heading_pane_t

0xaf78,	// (0x00045ae9) bg_popup_heading_pane_cp1_ParamLimits

0xaf78,	// (0x00045ae9) bg_popup_heading_pane_cp1

0xaf0a,	// (0x00045a7b) list_ai_message_pane_ParamLimits

0xaf0a,	// (0x00045a7b) list_ai_message_pane

0x88f8,	// (0x00043469) scroll_pane_cp10

0xaea6,	// (0x00045a17) list_ai_message_pane_g1

0xaeae,	// (0x00045a1f) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0004a4a4) list_ai_message_pane_g

0xaeb6,	// (0x00045a27) list_ai_message_pane_t1_ParamLimits

0xaeb6,	// (0x00045a27) list_ai_message_pane_t1

0xaecb,	// (0x00045a3c) list_ai_message_pane_t2_ParamLimits

0xaecb,	// (0x00045a3c) list_ai_message_pane_t2

0xaee0,	// (0x00045a51) list_ai_message_pane_t3_ParamLimits

0xaee0,	// (0x00045a51) list_ai_message_pane_t3

0xaef5,	// (0x00045a66) list_ai_message_pane_t4_ParamLimits

0xaef5,	// (0x00045a66) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0004a4a9) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0004a4a9) list_ai_message_pane_t

0xae91,	// (0x00045a02) cell_ai_soft_ind_pane_ParamLimits

0xae91,	// (0x00045a02) cell_ai_soft_ind_pane

0x9527,	// (0x00044098) cell_ai_soft_ind_pane_g1_ParamLimits

0x9527,	// (0x00044098) cell_ai_soft_ind_pane_g1

0x7e16,	// (0x00042987) grid_highlight_cp1

0x9534,	// (0x000440a5) text_secondary_cp56_ParamLimits

0x9534,	// (0x000440a5) text_secondary_cp56

0xae66,	// (0x000459d7) example_general_pane_ParamLimits

0xae66,	// (0x000459d7) example_general_pane

0xae72,	// (0x000459e3) example_parent_pane_g1_ParamLimits

0xae72,	// (0x000459e3) example_parent_pane_g1

0xae7e,	// (0x000459ef) example_parent_pane_t1_ParamLimits

0xae7e,	// (0x000459ef) example_parent_pane_t1

0x6668,	// (0x000411d9) popup_preview_text_window_ParamLimits

0x6668,	// (0x000411d9) popup_preview_text_window

0x9351,	// (0x00043ec2) list_single_pane_cp2_g4

0x824d,	// (0x00042dbe) bg_popup_preview_window_pane_ParamLimits

0x824d,	// (0x00042dbe) bg_popup_preview_window_pane

0xabbe,	// (0x0004572f) popup_preview_text_window_t1_ParamLimits

0xabbe,	// (0x0004572f) popup_preview_text_window_t1

0xabdc,	// (0x0004574d) popup_preview_text_window_t2_ParamLimits

0xabdc,	// (0x0004574d) popup_preview_text_window_t2

0xac25,	// (0x00045796) popup_preview_text_window_t3_ParamLimits

0xac25,	// (0x00045796) popup_preview_text_window_t3

0xac6a,	// (0x000457db) popup_preview_text_window_t4_ParamLimits

0xac6a,	// (0x000457db) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0004a478) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0004a478) popup_preview_text_window_t

0xace8,	// (0x00045859) scroll_pane_cp11

0x9c68,	// (0x000447d9) bg_popup_preview_window_pane_g1

0xab7e,	// (0x000456ef) bg_popup_preview_window_pane_g2

0xab86,	// (0x000456f7) bg_popup_preview_window_pane_g3

0xab8e,	// (0x000456ff) bg_popup_preview_window_pane_g4

0xab96,	// (0x00045707) bg_popup_preview_window_pane_g5

0xab9e,	// (0x0004570f) bg_popup_preview_window_pane_g6

0xaba6,	// (0x00045717) bg_popup_preview_window_pane_g7

0xabae,	// (0x0004571f) bg_popup_preview_window_pane_g8

0x579e,	// (0x0004030f) aid_popup_width_pane

0x6646,	// (0x000411b7) popup_midp_note_alarm_window_ParamLimits

0x6646,	// (0x000411b7) popup_midp_note_alarm_window

0x878b,	// (0x000432fc) data_form_pane_ParamLimits

0x4d20,	// (0x0003f891) form_field_data_pane_g1

0x4d2a,	// (0x0003f89b) form_field_data_pane_t1_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_ParamLimits

0x4d42,	// (0x0003f8b3) data_form_wide_pane_ParamLimits

0x4d53,	// (0x0003f8c4) form_field_data_wide_pane_g1

0x4d5f,	// (0x0003f8d0) form_field_data_wide_pane_t1_ParamLimits

0x84fc,	// (0x0004306d) input_focus_pane_cp6_ParamLimits

0x88a5,	// (0x00043416) input_popup_find_pane_g1_ParamLimits

0x88a5,	// (0x00043416) input_popup_find_pane_g1

0x5dbc,	// (0x0004092d) aid_navi_side_left_pane

0x5dd1,	// (0x00040942) aid_navi_side_right_pane

0xa597,	// (0x00045108) bg_popup_window_pane_cp30_ParamLimits

0xa597,	// (0x00045108) bg_popup_window_pane_cp30

0xa611,	// (0x00045182) popup_midp_note_alarm_window_g1_ParamLimits

0xa611,	// (0x00045182) popup_midp_note_alarm_window_g1

0xa641,	// (0x000451b2) popup_midp_note_alarm_window_t1_ParamLimits

0xa641,	// (0x000451b2) popup_midp_note_alarm_window_t1

0xa6e2,	// (0x00045253) popup_midp_note_alarm_window_t2_ParamLimits

0xa6e2,	// (0x00045253) popup_midp_note_alarm_window_t2

0xa790,	// (0x00045301) popup_midp_note_alarm_window_t3_ParamLimits

0xa790,	// (0x00045301) popup_midp_note_alarm_window_t3

0xa7c2,	// (0x00045333) popup_midp_note_alarm_window_t4_ParamLimits

0xa7c2,	// (0x00045333) popup_midp_note_alarm_window_t4

0xa7e8,	// (0x00045359) popup_midp_note_alarm_window_t5_ParamLimits

0xa7e8,	// (0x00045359) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0004a415) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0004a415) popup_midp_note_alarm_window_t

0xa894,	// (0x00045405) wait_bar_pane_cp1_ParamLimits

0xa894,	// (0x00045405) wait_bar_pane_cp1

0x7e16,	// (0x00042987) wait_anim_pane_copy1

0x7e16,	// (0x00042987) wait_border_pane_copy1

0xa27d,	// (0x00044dee) wait_border_pane_g1_copy1

0x4d79,	// (0x0003f8ea) form_field_popup_pane_g1

0x4d81,	// (0x0003f8f2) form_field_popup_pane_t1_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_cp7_ParamLimits

0x87b9,	// (0x0004332a) list_form_pane_ParamLimits

0x4d99,	// (0x0003f90a) form_field_popup_wide_pane_g1

0x4da1,	// (0x0003f912) form_field_popup_wide_pane_t1_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_cp8_ParamLimits

0x87c5,	// (0x00043336) list_form_wide_pane_ParamLimits

0xb324,	// (0x00045e95) aid_size_cell_graphic_pane

0x4e2b,	// (0x0003f99c) data_form_pane_t1_ParamLimits

0x50d8,	// (0x0003fc49) data_form_wide_pane_t1_ParamLimits

0x9835,	// (0x000443a6) bg_status_flat_pane

0x7e56,	// (0x000429c7) title_pane_t1_ParamLimits

0x7ebe,	// (0x00042a2f) title_pane_t2_ParamLimits

0x7ee4,	// (0x00042a55) title_pane_t3_ParamLimits

0xf557,	// (0x0004a0c8) title_pane_t_ParamLimits

0x8d79,	// (0x000438ea) level_1_signal_ParamLimits

0x8d8b,	// (0x000438fc) level_2_signal_ParamLimits

0x8d9e,	// (0x0004390f) level_3_signal_ParamLimits

0x8db1,	// (0x00043922) level_4_signal_ParamLimits

0x8dc4,	// (0x00043935) level_5_signal_ParamLimits

0x8dd7,	// (0x00043948) level_6_signal_ParamLimits

0x8dea,	// (0x0004395b) level_7_signal_ParamLimits

0x8d79,	// (0x000438ea) level_1_battery_ParamLimits

0x8d8b,	// (0x000438fc) level_2_battery_ParamLimits

0x8d9e,	// (0x0004390f) level_3_battery_ParamLimits

0x8db1,	// (0x00043922) level_4_battery_ParamLimits

0x8dc4,	// (0x00043935) level_5_battery_ParamLimits

0x8dd7,	// (0x00043948) level_6_battery_ParamLimits

0x8dea,	// (0x0004395b) level_7_battery_ParamLimits

0xa49c,	// (0x0004500d) bg_status_flat_pane_g1

0xa4a4,	// (0x00045015) bg_status_flat_pane_g2

0xa4ac,	// (0x0004501d) bg_status_flat_pane_g3

0xa4b4,	// (0x00045025) bg_status_flat_pane_g4

0xa4bc,	// (0x0004502d) bg_status_flat_pane_g5

0xa4c4,	// (0x00045035) bg_status_flat_pane_g6

0xa4cc,	// (0x0004503d) bg_status_flat_pane_g7

0x7f0c,	// (0x00042a7d) tabs_3_active_pane_t1_ParamLimits

0x7f0c,	// (0x00042a7d) tabs_3_passive_pane_t1_ParamLimits

0x7f26,	// (0x00042a97) tabs_4_active_pane_t1_ParamLimits

0x7f26,	// (0x00042a97) tabs_4_1_passive_pane_t1_ParamLimits

0x8939,	// (0x000434aa) tabs_2_active_pane_t1_ParamLimits

0x8939,	// (0x000434aa) tabs_2_passive_pane_t1_ParamLimits

0x894b,	// (0x000434bc) bg_active_tab_pane_cp4_ParamLimits

0x8959,	// (0x000434ca) tabs_2_long_active_pane_t1_ParamLimits

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp4_ParamLimits

0x6915,	// (0x00041486) list_single_midp_graphic_pane_t1_ParamLimits

0x894b,	// (0x000434bc) bg_active_tab_pane_cp5_ParamLimits

0x8978,	// (0x000434e9) tabs_3_long_active_pane_t1_ParamLimits

0x896c,	// (0x000434dd) bg_passive_tab_pane_cp5_ParamLimits

0x6915,	// (0x00041486) list_single_midp_graphic_pane_t1

0x9835,	// (0x000443a6) bg_status_flat_pane_ParamLimits

0x98f8,	// (0x00044469) indicator_pane_cp2_ParamLimits

0x98f8,	// (0x00044469) indicator_pane_cp2

0x9a23,	// (0x00044594) navi_pane_srt_ParamLimits

0x9a23,	// (0x00044594) navi_pane_srt

0x9a47,	// (0x000445b8) popup_clock_digital_analogue_window_cp1

0x7fd3,	// (0x00042b44) indicator_pane_t1

0x9420,	// (0x00043f91) copy_highlight_pane

0x9420,	// (0x00043f91) cursor_graphics_pane

0x9420,	// (0x00043f91) graphic_within_text_pane

0x9420,	// (0x00043f91) link_highlight_pane

0xacab,	// (0x0004581c) popup_preview_text_window_t5_ParamLimits

0xacab,	// (0x0004581c) popup_preview_text_window_t5

0x954e,	// (0x000440bf) cursor_digital_pane

0x954e,	// (0x000440bf) cursor_primary_pane

0x955f,	// (0x000440d0) cursor_primary_small_pane

0x9567,	// (0x000440d8) cursor_secondary_pane

0x956f,	// (0x000440e0) cursor_title_pane

0x954e,	// (0x000440bf) link_highlight_digital_pane

0x9556,	// (0x000440c7) link_highlight_primary_pane

0x955f,	// (0x000440d0) link_highlight_primary_small_pane

0x9567,	// (0x000440d8) link_highlight_secondary_pane

0x956f,	// (0x000440e0) link_highlight_title_pane

0x954e,	// (0x000440bf) copy_highlight_digital_pane

0x954e,	// (0x000440bf) copy_highlight_primary_pane

0x955f,	// (0x000440d0) copy_highlight_primary_small_pane

0x9567,	// (0x000440d8) copy_highlight_secondary_pane

0x956f,	// (0x000440e0) copy_highlight_title_pane

0x9567,	// (0x000440d8) graphic_text_digital_pane

0xa53a,	// (0x000450ab) graphic_text_primary_pane

0xa543,	// (0x000450b4) graphic_text_primary_small_pane

0x955f,	// (0x000440d0) graphic_text_secondary_pane

0x954e,	// (0x000440bf) graphic_text_title_pane

0x9577,	// (0x000440e8) cursor_primary_pane_g1

0xa52c,	// (0x0004509d) cursor_text_primary_t1

0xa514,	// (0x00045085) cursor_primary_small_pane_g1

0xa51e,	// (0x0004508f) cursor_text_primary_small_t1

0xa4fc,	// (0x0004506d) cursor_primary_small_pane_g1_copy1

0xa506,	// (0x00045077) cursor_text_primary_small_t1_copy1

0xa4e4,	// (0x00045055) cursor_text_title_t1

0xa4f2,	// (0x00045063) cursor_title_pane_g1

0x9577,	// (0x000440e8) cursor_digital_pane_g1

0x9581,	// (0x000440f2) cursor_text_digital_t1

0x95a6,	// (0x00044117) link_highlight_primary_pane_g1

0xa48d,	// (0x00044ffe) link_highlight_primary_pane_t1

0x958f,	// (0x00044100) link_highlight_primary_small_pane_g1

0x9597,	// (0x00044108) link_highlight_primary_small_pane_t1

0x95a6,	// (0x00044117) link_highlight_secondary_pane_g1

0x95ae,	// (0x0004411f) link_highlight_secondary_pane_t1

0xa401,	// (0x00044f72) link_highlight_title_pane_g1

0xa409,	// (0x00044f7a) link_highlight_title_pane_t1

0xa3ea,	// (0x00044f5b) link_highlight_digital_pane_g1

0xa3f2,	// (0x00044f63) link_highlight_digital_pane_t1

0xa2c2,	// (0x00044e33) copy_highlight_primary_pane_g1

0xa2ca,	// (0x00044e3b) copy_highlight_primary_pane_t1

0xa29c,	// (0x00044e0d) copy_highlight_primary_small_pane_g1

0xa2b3,	// (0x00044e24) copy_highlight_primary_small_pane_t1

0x95bd,	// (0x0004412e) copy_highlight_secondary_pane_g1

0x95c5,	// (0x00044136) copy_highlight_secondary_pane_t1

0xa29c,	// (0x00044e0d) copy_highlight_title_pane_g1

0xa2a4,	// (0x00044e15) copy_highlight_title_pane_t1

0xa2c2,	// (0x00044e33) copy_highlight_digital_pane_g1

0xb4f2,	// (0x00046063) copy_highlight_digital_pane_t1

0xb446,	// (0x00045fb7) graphic_text_primary_pane_g1

0xb4d6,	// (0x00046047) graphic_text_primary_pane_t1

0xb4e4,	// (0x00046055) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0004a544) graphic_text_primary_pane_t

0xb4b2,	// (0x00046023) graphic_text_primary_small_pane_g1

0xb4ba,	// (0x0004602b) graphic_text_primary_small_pane_t1

0xb4c8,	// (0x00046039) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0004a53f) graphic_text_primary_small_pane_t

0xb48e,	// (0x00045fff) graphic_text_secondary_pane_g1

0xb496,	// (0x00046007) graphic_text_secondary_pane_t1

0xb4a4,	// (0x00046015) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0004a53a) graphic_text_secondary_pane_t

0xb46a,	// (0x00045fdb) graphic_text_title_pane_g1

0xb472,	// (0x00045fe3) graphic_text_title_pane_t1

0xb480,	// (0x00045ff1) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0004a535) graphic_text_title_pane_t

0xb446,	// (0x00045fb7) graphic_text_digital_pane_g1

0xb44e,	// (0x00045fbf) graphic_text_digital_pane_t1

0xb45c,	// (0x00045fcd) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0004a530) graphic_text_digital_pane_t

0x7ef6,	// (0x00042a67) navi_icon_pane_srt_ParamLimits

0x7ef6,	// (0x00042a67) navi_icon_pane_srt

0x7e16,	// (0x00042987) navi_midp_pane_srt

0x7e16,	// (0x00042987) navi_navi_pane_srt

0x7ef6,	// (0x00042a67) navi_text_pane_srt_ParamLimits

0x7ef6,	// (0x00042a67) navi_text_pane_srt

0xb411,	// (0x00045f82) navi_navi_icon_text_pane_srt

0xb419,	// (0x00045f8a) navi_navi_pane_srt_g1_ParamLimits

0xb419,	// (0x00045f8a) navi_navi_pane_srt_g1

0xb42b,	// (0x00045f9c) navi_navi_pane_srt_g2_ParamLimits

0xb42b,	// (0x00045f9c) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0004a52b) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0004a52b) navi_navi_pane_srt_g

0xb43d,	// (0x00045fae) navi_navi_tabs_pane_srt

0xb411,	// (0x00045f82) navi_navi_text_pane_srt

0xb411,	// (0x00045f82) navi_navi_volume_pane_srt

0xb402,	// (0x00045f73) navi_navi_text_pane_srt_t1

0x6d3d,	// (0x000418ae) navi_navi_volume_pane_srt_g1

0x6d45,	// (0x000418b6) volume_small_pane_srt_ParamLimits

0x6d45,	// (0x000418b6) volume_small_pane_srt

0x60b8,	// (0x00040c29) volume_small_pane_srt_g1_ParamLimits

0x60b8,	// (0x00040c29) volume_small_pane_srt_g1

0x60c8,	// (0x00040c39) volume_small_pane_srt_g2_ParamLimits

0x60c8,	// (0x00040c39) volume_small_pane_srt_g2

0x60d9,	// (0x00040c4a) volume_small_pane_srt_g3_ParamLimits

0x60d9,	// (0x00040c4a) volume_small_pane_srt_g3

0x60ea,	// (0x00040c5b) volume_small_pane_srt_g4_ParamLimits

0x60ea,	// (0x00040c5b) volume_small_pane_srt_g4

0x60fb,	// (0x00040c6c) volume_small_pane_srt_g5_ParamLimits

0x60fb,	// (0x00040c6c) volume_small_pane_srt_g5

0x610c,	// (0x00040c7d) volume_small_pane_srt_g6_ParamLimits

0x610c,	// (0x00040c7d) volume_small_pane_srt_g6

0x611d,	// (0x00040c8e) volume_small_pane_srt_g7_ParamLimits

0x611d,	// (0x00040c8e) volume_small_pane_srt_g7

0x612e,	// (0x00040c9f) volume_small_pane_srt_g8_ParamLimits

0x612e,	// (0x00040c9f) volume_small_pane_srt_g8

0x613f,	// (0x00040cb0) volume_small_pane_srt_g9_ParamLimits

0x613f,	// (0x00040cb0) volume_small_pane_srt_g9

0x6150,	// (0x00040cc1) volume_small_pane_srt_g10_ParamLimits

0x6150,	// (0x00040cc1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004a2d3) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004a2d3) volume_small_pane_srt_g

0x82f6,	// (0x00042e67) query_popup_data_pane_cp2

0xb3e8,	// (0x00045f59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb3e8,	// (0x00045f59) navi_navi_icon_text_pane_srt_t1

0xa53a,	// (0x000450ab) navi_tabs_2_long_pane_srt

0xa53a,	// (0x000450ab) navi_tabs_2_pane_srt

0xa53a,	// (0x000450ab) navi_tabs_3_long_pane_srt

0xa53a,	// (0x000450ab) navi_tabs_3_pane_srt

0xa53a,	// (0x000450ab) navi_tabs_4_pane_srt

0x6d1d,	// (0x0004188e) tabs_2_active_pane_srt_ParamLimits

0x6d1d,	// (0x0004188e) tabs_2_active_pane_srt

0x6d2d,	// (0x0004189e) tabs_2_passive_pane_srt_ParamLimits

0x6d2d,	// (0x0004189e) tabs_2_passive_pane_srt

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp1_srt

0xb3b4,	// (0x00045f25) bg_passive_tab_pane_g1_cp1_srt

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00045f2e) bg_passive_tab_pane_g3_cp1_srt

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp1_srt_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp1_srt

0xb3c6,	// (0x00045f37) tabs_2_active_pane_srt_g1

0xb3ce,	// (0x00045f3f) tabs_2_active_pane_srt_t1_ParamLimits

0xb3ce,	// (0x00045f3f) tabs_2_active_pane_srt_t1

0xb3b4,	// (0x00045f25) bg_active_tab_pane_g1_cp1_srt

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp1_srt

0xb3bd,	// (0x00045f2e) bg_active_tab_pane_g3_cp1_srt

0x6cea,	// (0x0004185b) tabs_3_active_pane_srt_ParamLimits

0x6cea,	// (0x0004185b) tabs_3_active_pane_srt

0x6cfb,	// (0x0004186c) tabs_3_passive_pane_cp_srt_ParamLimits

0x6cfb,	// (0x0004186c) tabs_3_passive_pane_cp_srt

0x6d0c,	// (0x0004187d) tabs_3_passive_pane_srt_ParamLimits

0x6d0c,	// (0x0004187d) tabs_3_passive_pane_srt

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9744,	// (0x000442b5) bg_passive_tab_pane_cp2_srt

0x95d4,	// (0x00044145) bg_passive_tab_pane_g1_cp2_srt

0x9062,	// (0x00043bd3) bg_passive_tab_pane_g2_cp2_srt

0x95dd,	// (0x0004414e) bg_passive_tab_pane_g3_cp2_srt

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp2_srt_ParamLimits

0x7ef6,	// (0x00042a67) bg_active_tab_pane_cp2_srt

0xb39a,	// (0x00045f0b) tabs_3_active_pane_srt_g1

0xb3a2,	// (0x00045f13) tabs_3_active_pane_srt_t1_ParamLimits

0xb3a2,	// (0x00045f13) tabs_3_active_pane_srt_t1

0x95d4,	// (0x00044145) bg_active_tab_pane_g1_cp2_srt

0x9062,	// (0x00043bd3) bg_active_tab_pane_g2_cp2_srt

0x95dd,	// (0x0004414e) bg_active_tab_pane_g3_cp2_srt

0x6ca2,	// (0x00041813) tabs_4_active_pane_srt_ParamLimits

0x6ca2,	// (0x00041813) tabs_4_active_pane_srt

0x6cb4,	// (0x00041825) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6cb4,	// (0x00041825) tabs_4_passive_pane_cp2_srt

0x62bf,	// (0x00040e30) aid_size_cell_toolbar

0x896c,	// (0x000434dd) main_idle_act_pane_ParamLimits

0x647c,	// (0x00040fed) popup_large_graphic_colour_window_ParamLimits

0x67e3,	// (0x00041354) popup_toolbar_window_ParamLimits

0x67e3,	// (0x00041354) popup_toolbar_window

0xb202,	// (0x00045d73) list_single_graphic_2heading_pane_ParamLimits

0xb202,	// (0x00045d73) list_single_graphic_2heading_pane

0x8b28,	// (0x00043699) aid_size_cell_apps_grid_lsc_pane

0x8b3a,	// (0x000436ab) aid_size_cell_apps_grid_prt_pane

0x9744,	// (0x000442b5) bg_wml_button_pane_cp1_ParamLimits

0x9744,	// (0x000442b5) bg_wml_button_pane_cp1

0x9f18,	// (0x00044a89) form_midp_field_text_pane_t1_ParamLimits

0x9cdc,	// (0x0004484d) input_focus_pane_cp050_ParamLimits

0x9f4f,	// (0x00044ac0) list_midp_form_text_pane_ParamLimits

0x9ef5,	// (0x00044a66) input_focus_pane_cp051_ParamLimits

0x9f09,	// (0x00044a7a) list_midp_choice_pane_ParamLimits

0x9d95,	// (0x00044906) list_single_2graphic_pane_cp3_ParamLimits

0x9d95,	// (0x00044906) list_single_2graphic_pane_cp3

0x9db6,	// (0x00044927) list_single_midp_graphic_pane_ParamLimits

0x9db6,	// (0x00044927) list_single_midp_graphic_pane

0x4f55,	// (0x0003fac6) list_single_graphic_2heading_pane_g1_ParamLimits

0x4f55,	// (0x0003fac6) list_single_graphic_2heading_pane_g1

0x4f61,	// (0x0003fad2) list_single_graphic_2heading_pane_g4_ParamLimits

0x4f61,	// (0x0003fad2) list_single_graphic_2heading_pane_g4

0x4f6d,	// (0x0003fade) list_single_graphic_2heading_pane_g5_ParamLimits

0x4f6d,	// (0x0003fade) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004a326) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004a326) list_single_graphic_2heading_pane_g

0x4f79,	// (0x0003faea) list_single_graphic_2heading_pane_t1_ParamLimits

0x4f79,	// (0x0003faea) list_single_graphic_2heading_pane_t1

0x4f8d,	// (0x0003fafe) list_single_graphic_2heading_pane_t2_ParamLimits

0x4f8d,	// (0x0003fafe) list_single_graphic_2heading_pane_t2

0x4fa9,	// (0x0003fb1a) list_single_graphic_2heading_pane_t3_ParamLimits

0x4fa9,	// (0x0003fb1a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004a32d) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004a32d) list_single_graphic_2heading_pane_t

0x9ba6,	// (0x00044717) bg_popup_sub_pane_cp2

0x9bd0,	// (0x00044741) grid_toobar_pane

0x6890,	// (0x00041401) cell_toolbar_pane_ParamLimits

0x6890,	// (0x00041401) cell_toolbar_pane

0x9c0c,	// (0x0004477d) cell_toolbar_pane_g1_ParamLimits

0x9c0c,	// (0x0004477d) cell_toolbar_pane_g1

0x9c20,	// (0x00044791) cell_toolbar_pane_g2_ParamLimits

0x9c20,	// (0x00044791) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004a33b) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004a33b) cell_toolbar_pane_g

0x9c42,	// (0x000447b3) grid_highlight_pane_cp2_ParamLimits

0x9c42,	// (0x000447b3) grid_highlight_pane_cp2

0x9c5c,	// (0x000447cd) toolbar_button_pane

0x9c68,	// (0x000447d9) toolbar_button_pane_g1

0x9c70,	// (0x000447e1) toolbar_button_pane_g2

0x9c78,	// (0x000447e9) toolbar_button_pane_g3

0x9c80,	// (0x000447f1) toolbar_button_pane_g4

0x9c88,	// (0x000447f9) toolbar_button_pane_g5

0x9c90,	// (0x00044801) toolbar_button_pane_g6

0x9c98,	// (0x00044809) toolbar_button_pane_g7

0x9ca0,	// (0x00044811) toolbar_button_pane_g8

0x9ca8,	// (0x00044819) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004a340) toolbar_button_pane_g

0x68d4,	// (0x00041445) list_single_2graphic_pane_g1_cp3_ParamLimits

0x68d4,	// (0x00041445) list_single_2graphic_pane_g1_cp3

0x68e0,	// (0x00041451) list_single_2graphic_pane_g2_cp3_ParamLimits

0x68e0,	// (0x00041451) list_single_2graphic_pane_g2_cp3

0x68f1,	// (0x00041462) list_single_2graphic_pane_g3_cp3

0x5f6b,	// (0x00040adc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5f6b,	// (0x00040adc) list_single_2graphic_pane_g4_cp3

0x68f9,	// (0x0004146a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x68f9,	// (0x0004146a) list_single_2graphic_pane_t1_cp3

0x9de5,	// (0x00044956) list_single_midp_graphic_pane_g2_ParamLimits

0x9de5,	// (0x00044956) list_single_midp_graphic_pane_g2

0x4f45,	// (0x0003fab6) aid_zoom_text_primary

0x62c7,	// (0x00040e38) aid_zoom_text_secondary

0x968e,	// (0x000441ff) status_small_pane_g7_ParamLimits

0x968e,	// (0x000441ff) status_small_pane_g7

0x96b1,	// (0x00044222) status_small_pane_t1_ParamLimits

0x7e2d,	// (0x0004299e) title_pane_g2

0x0003,

0xf54e,	// (0x0004a0bf) title_pane_g

0x839a,	// (0x00042f0b) aid_size_cell_colour_1_pane_ParamLimits

0x839a,	// (0x00042f0b) aid_size_cell_colour_1_pane

0x83ae,	// (0x00042f1f) aid_size_cell_colour_2_pane_ParamLimits

0x83ae,	// (0x00042f1f) aid_size_cell_colour_2_pane

0x83c2,	// (0x00042f33) aid_size_cell_colour_3_pane_ParamLimits

0x83c2,	// (0x00042f33) aid_size_cell_colour_3_pane

0x83d6,	// (0x00042f47) aid_size_cell_colour_4_pane_ParamLimits

0x83d6,	// (0x00042f47) aid_size_cell_colour_4_pane

0x5cf9,	// (0x0004086a) title_pane_stacon_g1_ParamLimits

0x5cf9,	// (0x0004086a) title_pane_stacon_g1

0xa321,	// (0x00044e92) popup_note_wait_window_g3_ParamLimits

0xa321,	// (0x00044e92) popup_note_wait_window_g3

0xa397,	// (0x00044f08) popup_note_wait_window_t5_ParamLimits

0xa397,	// (0x00044f08) popup_note_wait_window_t5

0x7e16,	// (0x00042987) main_feb_china_hwr_fs_writing_pane

0x635f,	// (0x00040ed0) popup_feb_china_hwr_fs_window_ParamLimits

0x635f,	// (0x00040ed0) popup_feb_china_hwr_fs_window

0x6943,	// (0x000414b4) aid_size_cell_hwr_fs_ParamLimits

0x6943,	// (0x000414b4) aid_size_cell_hwr_fs

0x9cdc,	// (0x0004484d) bg_popup_sub_pane_cp3_ParamLimits

0x9cdc,	// (0x0004484d) bg_popup_sub_pane_cp3

0x6958,	// (0x000414c9) grid_hwr_fs_pane_ParamLimits

0x6958,	// (0x000414c9) grid_hwr_fs_pane

0x6970,	// (0x000414e1) linegrid_hwr_fs_pane_ParamLimits

0x6970,	// (0x000414e1) linegrid_hwr_fs_pane

0x6980,	// (0x000414f1) cell_hwr_fs_pane_ParamLimits

0x6980,	// (0x000414f1) cell_hwr_fs_pane

0x9ce8,	// (0x00044859) linegrid_hwr_fs_pane_g1_ParamLimits

0x9ce8,	// (0x00044859) linegrid_hwr_fs_pane_g1

0x9cf4,	// (0x00044865) linegrid_hwr_fs_pane_g2_ParamLimits

0x9cf4,	// (0x00044865) linegrid_hwr_fs_pane_g2

0x9d06,	// (0x00044877) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d06,	// (0x00044877) linegrid_hwr_fs_pane_g3

0x69a2,	// (0x00041513) linegrid_hwr_fs_pane_g4_ParamLimits

0x69a2,	// (0x00041513) linegrid_hwr_fs_pane_g4

0x69bc,	// (0x0004152d) linegrid_hwr_fs_pane_g5_ParamLimits

0x69bc,	// (0x0004152d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0004a36b) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0004a36b) linegrid_hwr_fs_pane_g

0x9d12,	// (0x00044883) cell_hwr_fs_pane_g1_ParamLimits

0x9d12,	// (0x00044883) cell_hwr_fs_pane_g1

0x9add,	// (0x0004464e) cell_hwr_fs_pane_g2_ParamLimits

0x9add,	// (0x0004464e) cell_hwr_fs_pane_g2

0x9d28,	// (0x00044899) cell_hwr_fs_pane_g3_ParamLimits

0x9d28,	// (0x00044899) cell_hwr_fs_pane_g3

0x9d35,	// (0x000448a6) cell_hwr_fs_pane_g4_ParamLimits

0x9d35,	// (0x000448a6) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0004a376) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0004a376) cell_hwr_fs_pane_g

0x69d2,	// (0x00041543) cell_hwr_fs_pane_t1

0x7e16,	// (0x00042987) grid_highlight_pane_cp6

0x7e16,	// (0x00042987) main_idle_act2_pane

0x88df,	// (0x00043450) aid_inside_area_popup_secondary

0xa9ce,	// (0x0004553f) aid_inside_area_window_primary_ParamLimits

0xa9ce,	// (0x0004553f) aid_inside_area_window_primary

0xb501,	// (0x00046072) ai2_news_ticker_pane

0xb509,	// (0x0004607a) aid_size_cell_ai1_link_ParamLimits

0xb509,	// (0x0004607a) aid_size_cell_ai1_link

0xb523,	// (0x00046094) popup_ai2_data_window_ParamLimits

0xb523,	// (0x00046094) popup_ai2_data_window

0xb539,	// (0x000460aa) popup_ai2_link_window_ParamLimits

0xb539,	// (0x000460aa) popup_ai2_link_window

0x9cdc,	// (0x0004484d) bg_popup_sub_pane_cp4_ParamLimits

0x9cdc,	// (0x0004484d) bg_popup_sub_pane_cp4

0xb54d,	// (0x000460be) grid_ai2_link_pane_ParamLimits

0xb54d,	// (0x000460be) grid_ai2_link_pane

0xb564,	// (0x000460d5) popup_ai2_link_window_g1_ParamLimits

0xb564,	// (0x000460d5) popup_ai2_link_window_g1

0xb570,	// (0x000460e1) popup_ai2_link_window_g2_ParamLimits

0xb570,	// (0x000460e1) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0004a549) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0004a549) popup_ai2_link_window_g

0xb57f,	// (0x000460f0) ai2_mp_button_pane

0xb587,	// (0x000460f8) ai2_mp_volume_pane

0x9ef5,	// (0x00044a66) bg_popup_sub_pane_cp5_ParamLimits

0x9ef5,	// (0x00044a66) bg_popup_sub_pane_cp5

0xb58f,	// (0x00046100) heading_ai2_gene_pane_ParamLimits

0xb58f,	// (0x00046100) heading_ai2_gene_pane

0xb59b,	// (0x0004610c) list_ai2_gene_pane_ParamLimits

0xb59b,	// (0x0004610c) list_ai2_gene_pane

0xb5e3,	// (0x00046154) cell_ai2_link_pane_ParamLimits

0xb5e3,	// (0x00046154) cell_ai2_link_pane

0xb5f9,	// (0x0004616a) cell_ai2_link_pane_g1

0x7e16,	// (0x00042987) grid_highlight_pane_cp7

0x6d5a,	// (0x000418cb) ai2_mp_volume_pane_g1

0xb6c9,	// (0x0004623a) ai2_mp_volume_pane_g2

0xb63e,	// (0x000461af) list_ai2_gene_pane_t1

0xb6d1,	// (0x00046242) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0004a562) ai2_mp_volume_pane_g

0x6d62,	// (0x000418d3) volume_small_pane_cp3

0xb6d9,	// (0x0004624a) aid_size_cell_ai2_button

0xb6e1,	// (0x00046252) grid_ai2_button_pane

0xb6ea,	// (0x0004625b) cell_ai2_button_pane_ParamLimits

0xb6ea,	// (0x0004625b) cell_ai2_button_pane

0x7e0c,	// (0x0004297d) cell_ai2_button_pane_g1

0x7e16,	// (0x00042987) grid_highlight_pane_cp8

0xb689,	// (0x000461fa) ai2_gene_pane_t1_ParamLimits

0xb689,	// (0x000461fa) ai2_gene_pane_t1

0x62b5,	// (0x00040e26) aid_height_parent_landscape

0xb039,	// (0x00045baa) aid_height_set_list

0xb04a,	// (0x00045bbb) aid_size_parent

0xb324,	// (0x00045e95) aid_size_cell_graphic_pane_ParamLimits

0xb5ab,	// (0x0004611c) popup_ai2_data_window_g1_ParamLimits

0xb5ab,	// (0x0004611c) popup_ai2_data_window_g1

0xb5b7,	// (0x00046128) ai2_news_ticker_pane_g1

0xb5bf,	// (0x00046130) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0004a54e) ai2_news_ticker_pane_g

0xb5c7,	// (0x00046138) ai2_news_ticker_pane_t1

0xb5d5,	// (0x00046146) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0004a553) ai2_news_ticker_pane_t

0xb602,	// (0x00046173) heading_ai2_gene_pane_g1

0xb60a,	// (0x0004617b) heading_ai2_gene_pane_t1_ParamLimits

0xb60a,	// (0x0004617b) heading_ai2_gene_pane_t1

0xb61f,	// (0x00046190) list_highlight_pane_cp6

0xb627,	// (0x00046198) ai2_gene_pane_ParamLimits

0xb627,	// (0x00046198) ai2_gene_pane

0xb64c,	// (0x000461bd) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0004a558) list_ai2_gene_pane_t

0xb65a,	// (0x000461cb) list_highlight_pane_cp8_ParamLimits

0xb65a,	// (0x000461cb) list_highlight_pane_cp8

0xb66b,	// (0x000461dc) ai2_gene_pane_g1_ParamLimits

0xb66b,	// (0x000461dc) ai2_gene_pane_g1

0xb67d,	// (0x000461ee) ai2_gene_pane_g2_ParamLimits

0xb67d,	// (0x000461ee) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0004a55d) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0004a55d) ai2_gene_pane_g

0x8721,	// (0x00043292) scroll_pane_cp12

0x6272,	// (0x00040de3) control_pane_t3_ParamLimits

0x6272,	// (0x00040de3) control_pane_t3

0x96a2,	// (0x00044213) status_small_pane_g8_ParamLimits

0x96a2,	// (0x00044213) status_small_pane_g8

0x6445,	// (0x00040fb6) popup_find_window_ParamLimits

0x665a,	// (0x000411cb) popup_note_image_window_ParamLimits

0x4fc1,	// (0x0003fb32) list_double2_graphic_pane_vc_g1_ParamLimits

0x4fc1,	// (0x0003fb32) list_double2_graphic_pane_vc_g1

0x9359,	// (0x00043eca) list_double2_graphic_pane_vc_g2_ParamLimits

0x9359,	// (0x00043eca) list_double2_graphic_pane_vc_g2

0x68c0,	// (0x00041431) list_double2_graphic_pane_vc_g3_ParamLimits

0x68c0,	// (0x00041431) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a334) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a334) list_double2_graphic_pane_vc_g

0x4fcd,	// (0x0003fb3e) list_double2_graphic_pane_vc_t1_ParamLimits

0x4fcd,	// (0x0003fb3e) list_double2_graphic_pane_vc_t1

0x9359,	// (0x00043eca) list_single_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_single_heading_pane_vc_g1

0x68c0,	// (0x00041431) list_single_heading_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_single_heading_pane_vc_g

0x4fe3,	// (0x0003fb54) list_single_heading_pane_vc_t1_ParamLimits

0x4fe3,	// (0x0003fb54) list_single_heading_pane_vc_t1

0x4ff9,	// (0x0003fb6a) list_single_heading_pane_vc_t2_ParamLimits

0x4ff9,	// (0x0003fb6a) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0004a35a) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004a35a) list_single_heading_pane_vc_t

0x692b,	// (0x0004149c) list_setting_number_pane_vc_g1_ParamLimits

0x692b,	// (0x0004149c) list_setting_number_pane_vc_g1

0x6937,	// (0x000414a8) list_setting_number_pane_vc_g2_ParamLimits

0x6937,	// (0x000414a8) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a35f) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a35f) list_setting_number_pane_vc_g

0x500b,	// (0x0003fb7c) list_setting_number_pane_vc_t1_ParamLimits

0x500b,	// (0x0003fb7c) list_setting_number_pane_vc_t1

0x501f,	// (0x0003fb90) list_setting_number_pane_vc_t2_ParamLimits

0x501f,	// (0x0003fb90) list_setting_number_pane_vc_t2

0x503b,	// (0x0003fbac) list_setting_number_pane_vc_t3_ParamLimits

0x503b,	// (0x0003fbac) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0004a364) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0004a364) list_setting_number_pane_vc_t

0x5067,	// (0x0003fbd8) set_value_pane_vc_ParamLimits

0x5067,	// (0x0003fbd8) set_value_pane_vc

0xb202,	// (0x00045d73) list_double2_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double2_graphic_pane_vc

0x511e,	// (0x0003fc8f) list_double2_large_graphic_pane_vc_ParamLimits

0x511e,	// (0x0003fc8f) list_double2_large_graphic_pane_vc

0xb202,	// (0x00045d73) list_double2_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double2_pane_vc

0xb202,	// (0x00045d73) list_double_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_graphic_heading_pane_vc

0xb202,	// (0x00045d73) list_double_graphic_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_graphic_pane_vc

0xb202,	// (0x00045d73) list_double_heading_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_heading_pane_vc

0x512f,	// (0x0003fca0) list_double_large_graphic_pane_vc_ParamLimits

0x512f,	// (0x0003fca0) list_double_large_graphic_pane_vc

0xb202,	// (0x00045d73) list_double_number_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_number_pane_vc

0xb202,	// (0x00045d73) list_double_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_pane_vc

0xb202,	// (0x00045d73) list_double_time_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_double_time_pane_vc

0xb202,	// (0x00045d73) list_setting_number_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_setting_number_pane_vc

0xb202,	// (0x00045d73) list_setting_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_setting_pane_vc

0xb202,	// (0x00045d73) list_single_graphic_heading_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_single_graphic_heading_pane_vc

0xb202,	// (0x00045d73) list_single_heading_pane_vc_ParamLimits

0xb202,	// (0x00045d73) list_single_heading_pane_vc

0x6c27,	// (0x00041798) list_single_number_heading_pane_vc_ParamLimits

0x6c27,	// (0x00041798) list_single_number_heading_pane_vc

0x4fc1,	// (0x0003fb32) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4fc1,	// (0x0003fb32) list_double_graphic_heading_pane_vc_g1

0x9359,	// (0x00043eca) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9359,	// (0x00043eca) list_double_graphic_heading_pane_vc_g2

0x68c0,	// (0x00041431) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x68c0,	// (0x00041431) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004a334) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a334) list_double_graphic_heading_pane_vc_g

0x517e,	// (0x0003fcef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x517e,	// (0x0003fcef) list_double_graphic_heading_pane_vc_t1

0x519a,	// (0x0003fd0b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x519a,	// (0x0003fd0b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0004a569) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0004a569) list_double_graphic_heading_pane_vc_t

0x692b,	// (0x0004149c) list_setting_pane_vc_g1_ParamLimits

0x692b,	// (0x0004149c) list_setting_pane_vc_g1

0x6937,	// (0x000414a8) list_setting_pane_vc_g2_ParamLimits

0x6937,	// (0x000414a8) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0004a35f) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0004a35f) list_setting_pane_vc_g

0x51b8,	// (0x0003fd29) list_setting_pane_vc_t1_ParamLimits

0x51b8,	// (0x0003fd29) list_setting_pane_vc_t1

0x51d4,	// (0x0003fd45) list_setting_pane_vc_t2_ParamLimits

0x51d4,	// (0x0003fd45) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0004a597) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0004a597) list_setting_pane_vc_t

0x5067,	// (0x0003fbd8) set_value_pane_cp_vc_ParamLimits

0x5067,	// (0x0003fbd8) set_value_pane_cp_vc

0x9359,	// (0x00043eca) list_single_number_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_single_number_heading_pane_vc_g1

0x68c0,	// (0x00041431) list_single_number_heading_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_single_number_heading_pane_vc_g

0x51f0,	// (0x0003fd61) list_single_number_heading_pane_vc_t1_ParamLimits

0x51f0,	// (0x0003fd61) list_single_number_heading_pane_vc_t1

0x5206,	// (0x0003fd77) list_single_number_heading_pane_vc_t2_ParamLimits

0x5206,	// (0x0003fd77) list_single_number_heading_pane_vc_t2

0x5218,	// (0x0003fd89) list_single_number_heading_pane_vc_t3_ParamLimits

0x5218,	// (0x0003fd89) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0004a59c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0004a59c) list_single_number_heading_pane_vc_t

0x4fc1,	// (0x0003fb32) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4fc1,	// (0x0003fb32) list_single_graphic_heading_pane_vc_g1

0x9359,	// (0x00043eca) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9359,	// (0x00043eca) list_single_graphic_heading_pane_vc_g4

0x68c0,	// (0x00041431) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x68c0,	// (0x00041431) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004a334) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004a334) list_single_graphic_heading_pane_vc_g

0x51f0,	// (0x0003fd61) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x51f0,	// (0x0003fd61) list_single_graphic_heading_pane_vc_t1

0x522a,	// (0x0003fd9b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x522a,	// (0x0003fd9b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0004a5a3) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0004a5a3) list_single_graphic_heading_pane_vc_t

0x9359,	// (0x00043eca) list_double2_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_double2_pane_vc_g1

0x68c0,	// (0x00041431) list_double2_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_double2_pane_vc_g

0x523c,	// (0x0003fdad) list_double2_pane_vc_t1_ParamLimits

0x523c,	// (0x0003fdad) list_double2_pane_vc_t1

0x5252,	// (0x0003fdc3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5252,	// (0x0003fdc3) list_double2_large_graphic_pane_vc_g1

0x525e,	// (0x0003fdcf) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x525e,	// (0x0003fdcf) list_double2_large_graphic_pane_vc_g2

0x526a,	// (0x0003fddb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x526a,	// (0x0003fddb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0004a5a8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0004a5a8) list_double2_large_graphic_pane_vc_g

0x5276,	// (0x0003fde7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5276,	// (0x0003fde7) list_double2_large_graphic_pane_vc_t1

0x6d6b,	// (0x000418dc) list_double_time_pane_vc_g1_ParamLimits

0x6d6b,	// (0x000418dc) list_double_time_pane_vc_g1

0x6d77,	// (0x000418e8) list_double_time_pane_vc_g2_ParamLimits

0x6d77,	// (0x000418e8) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0004a5af) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0004a5af) list_double_time_pane_vc_g

0x528c,	// (0x0003fdfd) list_double_time_pane_vc_t1_ParamLimits

0x528c,	// (0x0003fdfd) list_double_time_pane_vc_t1

0x52b0,	// (0x0003fe21) list_double_time_pane_vc_t2_ParamLimits

0x52b0,	// (0x0003fe21) list_double_time_pane_vc_t2

0x52ff,	// (0x0003fe70) list_double_time_pane_vc_t3_ParamLimits

0x52ff,	// (0x0003fe70) list_double_time_pane_vc_t3

0x5311,	// (0x0003fe82) list_double_time_pane_vc_t4_ParamLimits

0x5311,	// (0x0003fe82) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0004a5b4) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0004a5b4) list_double_time_pane_vc_t

0x9359,	// (0x00043eca) list_double_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_double_pane_vc_g1

0x68c0,	// (0x00041431) list_double_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_double_pane_vc_g

0x5325,	// (0x0003fe96) list_double_pane_vc_t1_ParamLimits

0x5325,	// (0x0003fe96) list_double_pane_vc_t1

0x5339,	// (0x0003feaa) list_double_pane_vc_t2_ParamLimits

0x5339,	// (0x0003feaa) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0004a5bd) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0004a5bd) list_double_pane_vc_t

0x9359,	// (0x00043eca) list_double_number_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_double_number_pane_vc_g1

0x68c0,	// (0x00041431) list_double_number_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_double_number_pane_vc_g

0x5351,	// (0x0003fec2) list_double_number_pane_vc_t1_ParamLimits

0x5351,	// (0x0003fec2) list_double_number_pane_vc_t1

0x5363,	// (0x0003fed4) list_double_number_pane_vc_t2_ParamLimits

0x5363,	// (0x0003fed4) list_double_number_pane_vc_t2

0x5377,	// (0x0003fee8) list_double_number_pane_vc_t3_ParamLimits

0x5377,	// (0x0003fee8) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0004a5c2) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0004a5c2) list_double_number_pane_vc_t

0x538f,	// (0x0003ff00) list_double_large_graphic_pane_vc_g1_ParamLimits

0x538f,	// (0x0003ff00) list_double_large_graphic_pane_vc_g1

0x53b1,	// (0x0003ff22) list_double_large_graphic_pane_vc_g2_ParamLimits

0x53b1,	// (0x0003ff22) list_double_large_graphic_pane_vc_g2

0x53c5,	// (0x0003ff36) list_double_large_graphic_pane_vc_g3_ParamLimits

0x53c5,	// (0x0003ff36) list_double_large_graphic_pane_vc_g3

0x53d4,	// (0x0003ff45) list_double_large_graphic_pane_vc_g4_ParamLimits

0x53d4,	// (0x0003ff45) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0004a5c9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0004a5c9) list_double_large_graphic_pane_vc_g

0x53e0,	// (0x0003ff51) list_double_large_graphic_pane_vc_t1_ParamLimits

0x53e0,	// (0x0003ff51) list_double_large_graphic_pane_vc_t1

0x53fc,	// (0x0003ff6d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x53fc,	// (0x0003ff6d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0004a5d2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0004a5d2) list_double_large_graphic_pane_vc_t

0x9359,	// (0x00043eca) list_double_heading_pane_vc_g1_ParamLimits

0x9359,	// (0x00043eca) list_double_heading_pane_vc_g1

0x68c0,	// (0x00041431) list_double_heading_pane_vc_g2_ParamLimits

0x68c0,	// (0x00041431) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0004a355) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0004a355) list_double_heading_pane_vc_g

0x541e,	// (0x0003ff8f) list_double_heading_pane_vc_t1_ParamLimits

0x541e,	// (0x0003ff8f) list_double_heading_pane_vc_t1

0x5432,	// (0x0003ffa3) list_double_heading_pane_vc_t2_ParamLimits

0x5432,	// (0x0003ffa3) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0004a5d7) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0004a5d7) list_double_heading_pane_vc_t

0x544a,	// (0x0003ffbb) list_double_graphic_pane_vc_g1_ParamLimits

0x544a,	// (0x0003ffbb) list_double_graphic_pane_vc_g1

0x6d83,	// (0x000418f4) list_double_graphic_pane_vc_g2_ParamLimits

0x6d83,	// (0x000418f4) list_double_graphic_pane_vc_g2

0x9359,	// (0x00043eca) list_double_graphic_pane_vc_g3_ParamLimits

0x9359,	// (0x00043eca) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0004a5dc) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0004a5dc) list_double_graphic_pane_vc_g

0x5456,	// (0x0003ffc7) list_double_graphic_pane_vc_t1_ParamLimits

0x5456,	// (0x0003ffc7) list_double_graphic_pane_vc_t1

0x5480,	// (0x0003fff1) list_double_graphic_pane_vc_t2_ParamLimits

0x5480,	// (0x0003fff1) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0004a5e5) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0004a5e5) list_double_graphic_pane_vc_t

0x57aa,	// (0x0004031b) aid_size_cell_fastswap

0x57b2,	// (0x00040323) aid_size_cell_touch_ParamLimits

0x57b2,	// (0x00040323) aid_size_cell_touch

0x5a0d,	// (0x0004057e) popup_fast_swap_wide_window_ParamLimits

0x5a0d,	// (0x0004057e) popup_fast_swap_wide_window

0x5b21,	// (0x00040692) touch_pane_ParamLimits

0x5b21,	// (0x00040692) touch_pane

0x8783,	// (0x000432f4) button_value_adjust_pane_cp2

0x4c6c,	// (0x0003f7dd) button_value_adjust_pane_cp4

0x4c90,	// (0x0003f801) form_field_data_pane_cp2

0x4cb1,	// (0x0003f822) form_field_data_wide_pane_cp2

0x8bf7,	// (0x00043768) bg_scroll_pane_ParamLimits

0x5e5b,	// (0x000409cc) scroll_handle_pane_ParamLimits

0x5e6f,	// (0x000409e0) scroll_sc2_down_pane_ParamLimits

0x5e6f,	// (0x000409e0) scroll_sc2_down_pane

0x8c28,	// (0x00043799) scroll_sc2_up_pane_ParamLimits

0x8c28,	// (0x00043799) scroll_sc2_up_pane

0xbda9,	// (0x0004691a) grid_wheel_folder_pane_g1_ParamLimits

0xbda9,	// (0x0004691a) grid_wheel_folder_pane_g1

0x6050,	// (0x00040bc1) clock_nsta_pane_cp2_ParamLimits

0x6050,	// (0x00040bc1) clock_nsta_pane_cp2

0x9428,	// (0x00043f99) listscroll_midp_pane_ParamLimits

0x9434,	// (0x00043fa5) midp_canvas_pane

0x971c,	// (0x0004428d) nsta_clock_indic_pane

0x9750,	// (0x000442c1) listscroll_form_pane_vc

0x9758,	// (0x000442c9) listscroll_set_pane_vc_ParamLimits

0x9758,	// (0x000442c9) listscroll_set_pane_vc

0x9851,	// (0x000443c2) clock_nsta_pane

0x98c6,	// (0x00044437) indicator_nsta_pane

0x9ba6,	// (0x00044717) bg_popup_sub_pane_cp2_ParamLimits

0x9bba,	// (0x0004472b) find_pane_cp2_ParamLimits

0x9bba,	// (0x0004472b) find_pane_cp2

0x9bd0,	// (0x00044741) grid_toobar_pane_ParamLimits

0x9cb0,	// (0x00044821) list_form_gen_pane_vc_ParamLimits

0x9cb0,	// (0x00044821) list_form_gen_pane_vc

0x9cc6,	// (0x00044837) scroll_pane_cp8_vc_ParamLimits

0x9cc6,	// (0x00044837) scroll_pane_cp8_vc

0x9d42,	// (0x000448b3) data_form_wide_pane_vc_ParamLimits

0x9d42,	// (0x000448b3) data_form_wide_pane_vc

0x9d4e,	// (0x000448bf) form_field_data_wide_pane_vc_g1

0x9d56,	// (0x000448c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x9d56,	// (0x000448c7) form_field_data_wide_pane_vc_t1

0x8797,	// (0x00043308) input_focus_pane_cp6_vc_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_cp6_vc

0xa088,	// (0x00044bf9) list_midp_pane_ParamLimits

0xa094,	// (0x00044c05) scroll_pane_cp16_ParamLimits

0xa094,	// (0x00044c05) scroll_pane_cp16

0xa0f6,	// (0x00044c67) button_value_adjust_pane_ParamLimits

0xa0f6,	// (0x00044c67) button_value_adjust_pane

0xb05c,	// (0x00045bcd) button_value_adjust_pane_cp6_ParamLimits

0xb05c,	// (0x00045bcd) button_value_adjust_pane_cp6

0xb186,	// (0x00045cf7) settings_code_pane_cp_ParamLimits

0xb186,	// (0x00045cf7) settings_code_pane_cp

0x7e0c,	// (0x0004297d) cell_touch_pane_g1

0x7e0c,	// (0x0004297d) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004a279) cell_touch_pane_g

0xb6fc,	// (0x0004626d) cell_touch_pane_cp_ParamLimits

0xb6fc,	// (0x0004626d) cell_touch_pane_cp

0xb70c,	// (0x0004627d) cell_touch_pane_ParamLimits

0xb70c,	// (0x0004627d) cell_touch_pane

0x7e0c,	// (0x0004297d) scroll_sc2_down_pane_g1

0x7e0c,	// (0x0004297d) scroll_sc2_up_pane_g1

0x7e16,	// (0x00042987) bg_set_opt_pane_cp4_vc

0xb71e,	// (0x0004628f) list_set_graphic_pane_vc_g1_ParamLimits

0xb71e,	// (0x0004628f) list_set_graphic_pane_vc_g1

0xb72a,	// (0x0004629b) list_set_graphic_pane_vc_g2_ParamLimits

0xb72a,	// (0x0004629b) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0004a56e) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0004a56e) list_set_graphic_pane_vc_g

0xb736,	// (0x000462a7) text_primary_small_cp13_vc_ParamLimits

0xb736,	// (0x000462a7) text_primary_small_cp13_vc

0xb74e,	// (0x000462bf) list_set_graphic_pane_vc_ParamLimits

0xb74e,	// (0x000462bf) list_set_graphic_pane_vc

0x7e16,	// (0x00042987) input_focus_pane_cp2_vc

0x7e0c,	// (0x0004297d) setting_code_pane_vc_g1

0x7f41,	// (0x00042ab2) setting_code_pane_vc_t1

0xb760,	// (0x000462d1) set_text_pane_vc_t1_ParamLimits

0xb760,	// (0x000462d1) set_text_pane_vc_t1

0x7e16,	// (0x00042987) input_focus_pane_cp1_vc

0xb77c,	// (0x000462ed) list_set_text_pane_vc

0x7e0c,	// (0x0004297d) setting_text_pane_vc_g1

0x7e16,	// (0x00042987) bg_set_opt_pane_cp2_vc

0x7f38,	// (0x00042aa9) setting_slider_graphic_pane_vc_g1

0xb786,	// (0x000462f7) setting_slider_graphic_pane_vc_t1

0xb796,	// (0x00046307) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0004a573) setting_slider_graphic_pane_vc_t

0xb7a6,	// (0x00046317) slider_set_pane_cp_vc

0xb7ae,	// (0x0004631f) slider_set_pane_vc_g1

0xb7b7,	// (0x00046328) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0004a578) slider_set_pane_vc_g

0x87e3,	// (0x00043354) set_opt_bg_pane_g1_copy1

0x87eb,	// (0x0004335c) set_opt_bg_pane_g2_copy1

0xb7e3,	// (0x00046354) set_opt_bg_pane_g3_copy1

0x87fb,	// (0x0004336c) set_opt_bg_pane_g4_copy1

0x8803,	// (0x00043374) set_opt_bg_pane_g5_copy1

0x880b,	// (0x0004337c) set_opt_bg_pane_g6_copy1

0xb7ed,	// (0x0004635e) set_opt_bg_pane_g7_copy1

0xb7f5,	// (0x00046366) set_opt_bg_pane_g8_copy1

0xb7ff,	// (0x00046370) set_opt_bg_pane_g9_copy1

0x7e16,	// (0x00042987) bg_set_opt_pane_cp_vc

0xb809,	// (0x0004637a) setting_slider_pane_vc_t1

0xb818,	// (0x00046389) setting_slider_pane_vc_t2

0xb828,	// (0x00046399) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0004a587) setting_slider_pane_vc_t

0xb838,	// (0x000463a9) slider_set_pane_vc

0x69e0,	// (0x00041551) volume_set_pane_vc_g1

0x69e9,	// (0x0004155a) volume_set_pane_vc_g2

0x69f2,	// (0x00041563) volume_set_pane_vc_g3

0x69fb,	// (0x0004156c) volume_set_pane_vc_g4

0x6a04,	// (0x00041575) volume_set_pane_vc_g5

0x6a0d,	// (0x0004157e) volume_set_pane_vc_g6

0x6a16,	// (0x00041587) volume_set_pane_vc_g7

0x6a1f,	// (0x00041590) volume_set_pane_vc_g8

0x6a28,	// (0x00041599) volume_set_pane_vc_g9

0x6a31,	// (0x000415a2) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0004a42c) volume_set_pane_vc_g

0xb840,	// (0x000463b1) volume_set_pane_vc

0xb848,	// (0x000463b9) button_value_adjust_pane_cp1_vc

0xb852,	// (0x000463c3) list_highlight_pane_cp2_vc

0xb85b,	// (0x000463cc) list_set_pane_vc_ParamLimits

0xb85b,	// (0x000463cc) list_set_pane_vc

0xb8b9,	// (0x0004642a) main_pane_set_vc_t1_ParamLimits

0xb8b9,	// (0x0004642a) main_pane_set_vc_t1

0xb8ce,	// (0x0004643f) main_pane_set_vc_t2_ParamLimits

0xb8ce,	// (0x0004643f) main_pane_set_vc_t2

0xb8e0,	// (0x00046451) main_pane_set_vc_t3_ParamLimits

0xb8e0,	// (0x00046451) main_pane_set_vc_t3

0xb8f4,	// (0x00046465) main_pane_set_vc_t4_ParamLimits

0xb8f4,	// (0x00046465) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0004a58e) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0004a58e) main_pane_set_vc_t

0xb908,	// (0x00046479) setting_code_pane_vc_ParamLimits

0xb908,	// (0x00046479) setting_code_pane_vc

0xb919,	// (0x0004648a) setting_slider_graphic_pane_vc

0xb919,	// (0x0004648a) setting_slider_pane_vc

0xb919,	// (0x0004648a) setting_text_pane_vc

0xb919,	// (0x0004648a) setting_volume_pane_vc

0xb923,	// (0x00046494) scroll_pane_cp121_vc

0x8771,	// (0x000432e2) set_content_pane_vc

0xb92b,	// (0x0004649c) button_value_adjust_pane_g1

0xb934,	// (0x000464a5) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0004a5ea) button_value_adjust_pane_g

0xb93d,	// (0x000464ae) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb93d,	// (0x000464ae) form_field_slider_wide_pane_vc_t1

0xb951,	// (0x000464c2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb951,	// (0x000464c2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0004a5ef) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0004a5ef) form_field_slider_wide_pane_vc_t

0x8171,	// (0x00042ce2) input_focus_pane_cp10_vc_ParamLimits

0x8171,	// (0x00042ce2) input_focus_pane_cp10_vc

0xb97f,	// (0x000464f0) slider_cont_pane_cp1_vc_ParamLimits

0xb97f,	// (0x000464f0) slider_cont_pane_cp1_vc

0xb991,	// (0x00046502) slider_form_pane_g1_cp2

0xb7b7,	// (0x00046328) slider_form_pane_g2_cp2

0xb9be,	// (0x0004652f) form_field_slider_pane_vc_t3

0xb9cc,	// (0x0004653d) form_field_slider_pane_vc_t4

0xb9da,	// (0x0004654b) slider_form_pane_vc_ParamLimits

0xb9da,	// (0x0004654b) slider_form_pane_vc

0xb9e7,	// (0x00046558) form_field_slider_pane_vc_t1_ParamLimits

0xb9e7,	// (0x00046558) form_field_slider_pane_vc_t1

0xb951,	// (0x000464c2) form_field_slider_pane_vc_t2_ParamLimits

0xb951,	// (0x000464c2) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0004a601) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0004a601) form_field_slider_pane_vc_t

0x8171,	// (0x00042ce2) input_focus_pane_cp9_vc_ParamLimits

0x8171,	// (0x00042ce2) input_focus_pane_cp9_vc

0xba03,	// (0x00046574) slider_cont_pane_vc_ParamLimits

0xba03,	// (0x00046574) slider_cont_pane_vc

0xba17,	// (0x00046588) list_form_graphic_pane_cp_vc_ParamLimits

0xba17,	// (0x00046588) list_form_graphic_pane_cp_vc

0x9d4e,	// (0x000448bf) form_field_popup_wide_pane_vc_g1

0xba2c,	// (0x0004659d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xba2c,	// (0x0004659d) form_field_popup_wide_pane_vc_t1

0x8797,	// (0x00043308) input_focus_pane_cp8_vc_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_cp8_vc

0xba71,	// (0x000465e2) list_form_wide_pane_vc_ParamLimits

0xba71,	// (0x000465e2) list_form_wide_pane_vc

0xba7d,	// (0x000465ee) list_form_graphic_pane_vc_g1

0xba85,	// (0x000465f6) list_form_graphic_pane_vc_t1_ParamLimits

0xba85,	// (0x000465f6) list_form_graphic_pane_vc_t1

0x7ef6,	// (0x00042a67) list_highlight_pane_cp5_vc_ParamLimits

0x7ef6,	// (0x00042a67) list_highlight_pane_cp5_vc

0xbaa1,	// (0x00046612) list_form_graphic_pane_vc_ParamLimits

0xbaa1,	// (0x00046612) list_form_graphic_pane_vc

0x9d4e,	// (0x000448bf) form_field_popup_pane_vc_g1

0xbab7,	// (0x00046628) form_field_popup_pane_vc_t1_ParamLimits

0xbab7,	// (0x00046628) form_field_popup_pane_vc_t1

0x8797,	// (0x00043308) input_focus_pane_cp7_vc_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_cp7_vc

0xbace,	// (0x0004663f) list_form_pane_vc_ParamLimits

0xbace,	// (0x0004663f) list_form_pane_vc

0xbada,	// (0x0004664b) data_form_pane_vc_t1_ParamLimits

0xbada,	// (0x0004664b) data_form_pane_vc_t1

0x87e3,	// (0x00043354) input_focus_pane_vc_g1

0x87eb,	// (0x0004335c) input_focus_pane_vc_g2

0x87f3,	// (0x00043364) input_focus_pane_vc_g3

0x87fb,	// (0x0004336c) input_focus_pane_vc_g4

0x8803,	// (0x00043374) input_focus_pane_vc_g5

0x880b,	// (0x0004337c) input_focus_pane_vc_g6

0x8813,	// (0x00043384) input_focus_pane_vc_g7

0x881b,	// (0x0004338c) input_focus_pane_vc_g8

0x8823,	// (0x00043394) input_focus_pane_vc_g9

0x7e0c,	// (0x0004297d) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004a202) input_focus_pane_vc_g

0x9d42,	// (0x000448b3) data_form_pane_vc_ParamLimits

0x9d42,	// (0x000448b3) data_form_pane_vc

0x9d4e,	// (0x000448bf) form_field_data_pane_vc_g1

0xbaf5,	// (0x00046666) form_field_data_pane_vc_t1_ParamLimits

0xbaf5,	// (0x00046666) form_field_data_pane_vc_t1

0x8797,	// (0x00043308) input_focus_pane_vc_ParamLimits

0x8797,	// (0x00043308) input_focus_pane_vc

0xbb0f,	// (0x00046680) button_value_adjust_pane_cp3_vc

0xbb17,	// (0x00046688) button_value_adjust_pane_cp5_vc

0xbb1f,	// (0x00046690) form_field_data_pane_vc_ParamLimits

0xbb1f,	// (0x00046690) form_field_data_pane_vc

0xbb36,	// (0x000466a7) form_field_data_pane_vc_cp2

0xbb3e,	// (0x000466af) form_field_data_wide_pane_vc_ParamLimits

0xbb3e,	// (0x000466af) form_field_data_wide_pane_vc

0xbb54,	// (0x000466c5) form_field_data_wide_pane_vc_cp2

0xbb5c,	// (0x000466cd) form_field_popup_pane_vc_ParamLimits

0xbb5c,	// (0x000466cd) form_field_popup_pane_vc

0xbb73,	// (0x000466e4) form_field_popup_wide_pane_vc_ParamLimits

0xbb73,	// (0x000466e4) form_field_popup_wide_pane_vc

0xbb89,	// (0x000466fa) form_field_slider_pane_vc_ParamLimits

0xbb89,	// (0x000466fa) form_field_slider_pane_vc

0xbb9c,	// (0x0004670d) form_field_slider_wide_pane_vc_ParamLimits

0xbb9c,	// (0x0004670d) form_field_slider_wide_pane_vc

0xbbaf,	// (0x00046720) grid_touch_1_pane_ParamLimits

0xbbaf,	// (0x00046720) grid_touch_1_pane

0xbbbb,	// (0x0004672c) grid_touch_2_pane_ParamLimits

0xbbbb,	// (0x0004672c) grid_touch_2_pane

0x96e7,	// (0x00044258) touch_pane_g1_ParamLimits

0x96e7,	// (0x00044258) touch_pane_g1

0xbbd3,	// (0x00046744) cell_app_pane_cp_wide_ParamLimits

0xbbd3,	// (0x00046744) cell_app_pane_cp_wide

0xbbe4,	// (0x00046755) grid_popup_fast_wide_pane_ParamLimits

0xbbe4,	// (0x00046755) grid_popup_fast_wide_pane

0xbbf8,	// (0x00046769) scroll_pane_cp19_ParamLimits

0xbbf8,	// (0x00046769) scroll_pane_cp19

0x7e16,	// (0x00042987) bg_popup_window_pane_cp20

0xbc0c,	// (0x0004677d) listscroll_popup_fast_wide_pane

0x7ef6,	// (0x00042a67) grid_indicator_nsta_pane

0xbc14,	// (0x00046785) clock_nsta_pane_g1

0xbc1d,	// (0x0004678e) clock_nsta_pane_t1

0xbc39,	// (0x000467aa) cell_indicator_nsta_pane_ParamLimits

0xbc39,	// (0x000467aa) cell_indicator_nsta_pane

0xbc6a,	// (0x000467db) cell_indicator_nsta_pane_g1

0xbc78,	// (0x000467e9) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0004a612) cell_indicator_nsta_pane_g

0xbc85,	// (0x000467f6) clock_nsta_pane_cp

0xbc8e,	// (0x000467ff) indicator_nsta_pane_cp

0xbc96,	// (0x00046807) nsta_clock_indic_pane_g1

0x7fbf,	// (0x00042b30) grid_indicator_pane

0x8d1d,	// (0x0004388e) scroll_pane_cp29

0x5f9f,	// (0x00040b10) indicator_nsta_pane_cp2_ParamLimits

0x5f9f,	// (0x00040b10) indicator_nsta_pane_cp2

0x7ef6,	// (0x00042a67) main_apps_wheel_pane

0x9f69,	// (0x00044ada) form_midp_field_text_pane_ParamLimits

0xa0b4,	// (0x00044c25) scroll_bar_cp050_ParamLimits

0xbce6,	// (0x00046857) cell_indicator_pane_ParamLimits

0xbce6,	// (0x00046857) cell_indicator_pane

0xbcfd,	// (0x0004686e) cell_indicator_pane_g1

0xbd07,	// (0x00046878) grid_wheel_folder_pane_ParamLimits

0xbd07,	// (0x00046878) grid_wheel_folder_pane

0xbd1d,	// (0x0004688e) list_wheel_apps_pane_ParamLimits

0xbd1d,	// (0x0004688e) list_wheel_apps_pane

0xbd2e,	// (0x0004689f) main_apps_wheel_pane_g1_ParamLimits

0xbd2e,	// (0x0004689f) main_apps_wheel_pane_g1

0xbd42,	// (0x000468b3) main_apps_wheel_pane_g2_ParamLimits

0xbd42,	// (0x000468b3) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0004a62e) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0004a62e) main_apps_wheel_pane_g

0xbd5a,	// (0x000468cb) main_apps_wheel_pane_t1_ParamLimits

0xbd5a,	// (0x000468cb) main_apps_wheel_pane_t1

0xbd7d,	// (0x000468ee) list_wheel_apps_pane_g1

0xbd85,	// (0x000468f6) list_wheel_apps_pane_g2

0xbd8d,	// (0x000468fe) list_wheel_apps_pane_g3

0xbd95,	// (0x00046906) list_wheel_apps_pane_g4

0xbd9f,	// (0x00046910) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0004a633) list_wheel_apps_pane_g

0x92a0,	// (0x00043e11) navi_icon_text_pane

0x9780,	// (0x000442f1) aid_fill_nsta

0xbdc2,	// (0x00046933) navi_icon_text_pane_g1

0xbdce,	// (0x0004693f) navi_icon_text_pane_t1

0x9133,	// (0x00043ca4) list_set_graphic_pane_t1_ParamLimits

0x9133,	// (0x00043ca4) list_set_graphic_pane_t1

0xa817,	// (0x00045388) popup_midp_note_alarm_window_t6_ParamLimits

0xa817,	// (0x00045388) popup_midp_note_alarm_window_t6

0xa829,	// (0x0004539a) popup_midp_note_alarm_window_t7_ParamLimits

0xa829,	// (0x0004539a) popup_midp_note_alarm_window_t7

0xa83b,	// (0x000453ac) popup_midp_note_alarm_window_t8_ParamLimits

0xa83b,	// (0x000453ac) popup_midp_note_alarm_window_t8

0xa84d,	// (0x000453be) popup_midp_note_alarm_window_t9_ParamLimits

0xa84d,	// (0x000453be) popup_midp_note_alarm_window_t9

0xa85f,	// (0x000453d0) popup_midp_note_alarm_window_t10_ParamLimits

0xa85f,	// (0x000453d0) popup_midp_note_alarm_window_t10

0xa871,	// (0x000453e2) popup_midp_note_alarm_window_t11_ParamLimits

0xa871,	// (0x000453e2) popup_midp_note_alarm_window_t11

0xa883,	// (0x000453f4) scroll_pane_cp17_ParamLimits

0xa883,	// (0x000453f4) scroll_pane_cp17

0x69e0,	// (0x00041551) volume_small_pane_cp_g1

0x6da0,	// (0x00041911) volume_small_pane_cp_g2

0x6da9,	// (0x0004191a) volume_small_pane_cp_g3

0x6db2,	// (0x00041923) volume_small_pane_cp_g4

0x6dbb,	// (0x0004192c) volume_small_pane_cp_g5

0x6dc4,	// (0x00041935) volume_small_pane_cp_g6

0x6dcd,	// (0x0004193e) volume_small_pane_cp_g7

0x6dd6,	// (0x00041947) volume_small_pane_cp_g8

0x6ddf,	// (0x00041950) volume_small_pane_cp_g9

0x6de8,	// (0x00041959) volume_small_pane_cp_g10

0x94fd,	// (0x0004406e) midp_ticker_pane_g1_ParamLimits

0x9509,	// (0x0004407a) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004a2ce) midp_ticker_pane_g_ParamLimits

0x9515,	// (0x00044086) midp_ticker_pane_t1_ParamLimits

0x9796,	// (0x00044307) aid_fill_nsta_2

0xa0a0,	// (0x00044c11) list_form2_midp_pane

0xb1d1,	// (0x00045d42) midp_editing_number_pane_ParamLimits

0xb1e0,	// (0x00045d51) midp_ticker_pane_ParamLimits

0xbde0,	// (0x00046951) form2_midp_field_pane

0xbe04,	// (0x00046975) scroll_pane_cp51

0xbe24,	// (0x00046995) form2_midp_button_pane_ParamLimits

0xbe24,	// (0x00046995) form2_midp_button_pane

0xbe36,	// (0x000469a7) form2_midp_content_pane_ParamLimits

0xbe36,	// (0x000469a7) form2_midp_content_pane

0xbe50,	// (0x000469c1) form2_midp_field_choice_group_pane

0xbe58,	// (0x000469c9) form2_midp_field_pane_g1

0xbe60,	// (0x000469d1) form2_midp_field_pane_g2

0xbe68,	// (0x000469d9) form2_midp_field_pane_g3

0xbe70,	// (0x000469e1) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0004a658) form2_midp_field_pane_g

0xbe78,	// (0x000469e9) form2_midp_gauge_slider_pane

0xbe80,	// (0x000469f1) form2_midp_gauge_wait_pane

0xbe88,	// (0x000469f9) form2_midp_image_pane_ParamLimits

0xbe88,	// (0x000469f9) form2_midp_image_pane

0xbea3,	// (0x00046a14) form2_midp_label_pane_ParamLimits

0xbea3,	// (0x00046a14) form2_midp_label_pane

0xbebc,	// (0x00046a2d) form2_midp_label_pane_cp_ParamLimits

0xbebc,	// (0x00046a2d) form2_midp_label_pane_cp

0xbedd,	// (0x00046a4e) form2_midp_string_pane_ParamLimits

0xbedd,	// (0x00046a4e) form2_midp_string_pane

0x54aa,	// (0x0004001b) form2_midp_text_pane_ParamLimits

0x54aa,	// (0x0004001b) form2_midp_text_pane

0xbeef,	// (0x00046a60) form2_midp_time_pane

0xbeff,	// (0x00046a70) input_focus_pane_cp51_ParamLimits

0xbeff,	// (0x00046a70) input_focus_pane_cp51

0xbf17,	// (0x00046a88) form2_midp_label_pane_t1_ParamLimits

0xbf17,	// (0x00046a88) form2_midp_label_pane_t1

0x54c9,	// (0x0004003a) form2_mdip_text_pane_t1_ParamLimits

0x54c9,	// (0x0004003a) form2_mdip_text_pane_t1

0x54e7,	// (0x00040058) form2_midp_time_pane_t1

0xbf60,	// (0x00046ad1) form2_midp_gauge_slider_pane_t1

0xbf72,	// (0x00046ae3) form2_midp_gauge_slider_pane_t2

0xbf84,	// (0x00046af5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0004a661) form2_midp_gauge_slider_pane_t

0xbf96,	// (0x00046b07) form2_midp_slider_pane

0xbfa2,	// (0x00046b13) form2_midp_gauge_wait_pane_t1

0xbfb0,	// (0x00046b21) form2_midp_wait_pane_ParamLimits

0xbfb0,	// (0x00046b21) form2_midp_wait_pane

0xbfdb,	// (0x00046b4c) list_single_2graphic_pane_cp4_ParamLimits

0xbfdb,	// (0x00046b4c) list_single_2graphic_pane_cp4

0x9db6,	// (0x00044927) list_single_midp_graphic_pane_cp_ParamLimits

0x9db6,	// (0x00044927) list_single_midp_graphic_pane_cp

0x7e16,	// (0x00042987) list_highlight_pane_cp20

0xbfff,	// (0x00046b70) list_single_2graphic_pane_g1_cp4

0xc007,	// (0x00046b78) list_single_2graphic_pane_g2_cp4

0xc00f,	// (0x00046b80) list_single_2graphic_pane_t1_cp4

0x7ef6,	// (0x00042a67) list_highlight_pane_cp21

0xc01e,	// (0x00046b8f) list_single_midp_graphic_pane_g4_cp

0xc02d,	// (0x00046b9e) list_single_midp_graphic_pane_t1_cp

0xc042,	// (0x00046bb3) form2_mdip_string_pane_t1_ParamLimits

0xc042,	// (0x00046bb3) form2_mdip_string_pane_t1

0x7e16,	// (0x00042987) bg_wml_button_pane_cp2

0x7e0c,	// (0x0004297d) form2_midp_image_pane_g1

0x5c91,	// (0x00040802) list_double_large_graphic_pane_g5_ParamLimits

0x5c91,	// (0x00040802) list_double_large_graphic_pane_g5

0x9428,	// (0x00043f99) midp_form_pane_ParamLimits

0x7ef6,	// (0x00042a67) main_apps_wheel_pane_ParamLimits

0x6680,	// (0x000411f1) popup_preview_window_ParamLimits

0x6680,	// (0x000411f1) popup_preview_window

0x683b,	// (0x000413ac) popup_touch_info_window_ParamLimits

0x683b,	// (0x000413ac) popup_touch_info_window

0x6859,	// (0x000413ca) popup_touch_menu_window_ParamLimits

0x6859,	// (0x000413ca) popup_touch_menu_window

0x7e02,	// (0x00042973) bg_popup_sub_pane_cp6

0xc13b,	// (0x00046cac) list_touch_menu_pane

0xc143,	// (0x00046cb4) list_single_touch_menu_pane_ParamLimits

0xc143,	// (0x00046cb4) list_single_touch_menu_pane

0xc159,	// (0x00046cca) list_single_touch_menu_pane_t1

0x7ef6,	// (0x00042a67) bg_popup_sub_pane_cp7_ParamLimits

0x7ef6,	// (0x00042a67) bg_popup_sub_pane_cp7

0xc167,	// (0x00046cd8) heading_sub_pane

0xc16f,	// (0x00046ce0) list_touch_info_pane_ParamLimits

0xc16f,	// (0x00046ce0) list_touch_info_pane

0xc17e,	// (0x00046cef) list_single_touch_info_pane_ParamLimits

0xc17e,	// (0x00046cef) list_single_touch_info_pane

0xc190,	// (0x00046d01) list_single_touch_info_pane_t1

0xc19e,	// (0x00046d0f) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0004a66f) list_single_touch_info_pane_t

0x9420,	// (0x00043f91) bg_popup_heading_pane_cp

0xc1ac,	// (0x00046d1d) heading_sub_pane_t1

0x9cdc,	// (0x0004484d) bg_popup_preview_window_pane_cp_ParamLimits

0x9cdc,	// (0x0004484d) bg_popup_preview_window_pane_cp

0xc167,	// (0x00046cd8) heading_preview_pane

0xc16f,	// (0x00046ce0) list_preview_pane_ParamLimits

0xc16f,	// (0x00046ce0) list_preview_pane

0xc1ba,	// (0x00046d2b) popup_preview_window_g1

0xc17e,	// (0x00046cef) list_single_preview_pane_ParamLimits

0xc17e,	// (0x00046cef) list_single_preview_pane

0xc1c2,	// (0x00046d33) list_single_preview_pane_g1

0xc1ca,	// (0x00046d3b) list_single_preview_pane_t1

0xc190,	// (0x00046d01) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0004a674) list_single_preview_pane_t

0xc1d8,	// (0x00046d49) bg_popup_heading_pane_cp2_ParamLimits

0xc1d8,	// (0x00046d49) bg_popup_heading_pane_cp2

0xc1ee,	// (0x00046d5f) heading_preview_pane_g1

0xc1f6,	// (0x00046d67) heading_preview_pane_t1_ParamLimits

0xc1f6,	// (0x00046d67) heading_preview_pane_t1

0x7fe2,	// (0x00042b53) soft_indicator_pane_t1_ParamLimits

0x86fe,	// (0x0004326f) scroll_pane_ParamLimits

0x8c16,	// (0x00043787) scroll_sc2_left_pane

0x8c1f,	// (0x00043790) scroll_sc2_right_pane

0x8c3e,	// (0x000437af) scroll_bg_pane_g1_ParamLimits

0x8c53,	// (0x000437c4) scroll_bg_pane_g2_ParamLimits

0x8c6b,	// (0x000437dc) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004a259) scroll_bg_pane_g_ParamLimits

0x8c3e,	// (0x000437af) scroll_handle_pane_g1_ParamLimits

0x8c8d,	// (0x000437fe) scroll_handle_pane_g2_ParamLimits

0x8c6b,	// (0x000437dc) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004a260) scroll_handle_pane_g_ParamLimits

0x6301,	// (0x00040e72) popup_choice_list_window_ParamLimits

0x6301,	// (0x00040e72) popup_choice_list_window

0x9bb2,	// (0x00044723) choice_list_pane

0x9c34,	// (0x000447a5) cell_toolbar_pane_t1

0x9c5c,	// (0x000447cd) toolbar_button_pane_ParamLimits

0xad3d,	// (0x000458ae) ai_gene_pane_1_t2_ParamLimits

0xad3d,	// (0x000458ae) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0004a488) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0004a488) ai_gene_pane_1_t

0xc213,	// (0x00046d84) scroll_sc2_left_pane_g1

0xc213,	// (0x00046d84) scroll_sc2_right_pane_g1

0x9744,	// (0x000442b5) bg_popup_sub_pane_cp10

0xc21d,	// (0x00046d8e) list_choice_list_pane

0xc236,	// (0x00046da7) list_single_choice_list_pane_ParamLimits

0xc236,	// (0x00046da7) list_single_choice_list_pane

0xc249,	// (0x00046dba) list_single_choice_list_pane_g1

0x891c,	// (0x0004348d) list_single_choice_list_pane_t1_ParamLimits

0x891c,	// (0x0004348d) list_single_choice_list_pane_t1

0xc251,	// (0x00046dc2) choice_list_pane_g1

0xc259,	// (0x00046dca) choice_list_pane_t1

0x7e02,	// (0x00042973) input_focus_pane_cp11

0x8af3,	// (0x00043664) title_pane_stacon_g2_ParamLimits

0x8af3,	// (0x00043664) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004a23f) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004a23f) title_pane_stacon_g

0x9420,	// (0x00043f91) cursor_press_pane

0x63ad,	// (0x00040f1e) popup_fep_hwr_window_ParamLimits

0x63ad,	// (0x00040f1e) popup_fep_hwr_window

0x6427,	// (0x00040f98) popup_fep_vkb_window_ParamLimits

0x6427,	// (0x00040f98) popup_fep_vkb_window

0xc267,	// (0x00046dd8) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0004a69d) fep_vkb_side_pane_g_ParamLimits

0x6e2a,	// (0x0004199b) fep_hwr_candidate_pane_ParamLimits

0x6e2a,	// (0x0004199b) fep_hwr_candidate_pane

0x6e54,	// (0x000419c5) fep_hwr_side_pane_ParamLimits

0x6e54,	// (0x000419c5) fep_hwr_side_pane

0x6e74,	// (0x000419e5) fep_hwr_top_pane_ParamLimits

0x6e74,	// (0x000419e5) fep_hwr_top_pane

0x6e8c,	// (0x000419fd) fep_hwr_write_pane_ParamLimits

0x6e8c,	// (0x000419fd) fep_hwr_write_pane

0xfb2c,	// (0x0004a69d) fep_vkb_side_pane_g

0xc26f,	// (0x00046de0) fep_hwr_top_pane_g1

0xc281,	// (0x00046df2) fep_hwr_top_pane_g2

0x6eb8,	// (0x00041a29) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0004a679) fep_hwr_top_pane_g

0x6ecd,	// (0x00041a3e) fep_hwr_top_text_pane

0x8e0d,	// (0x0004397e) fep_hwr_top_text_pane_g1

0xc2b7,	// (0x00046e28) fep_hwr_top_text_pane_t1

0x6fc3,	// (0x00041b34) fep_hwr_candidate_pane_g1

0xc50a,	// (0x0004707b) fep_vkb_keypad_pane_g3_ParamLimits

0xc50a,	// (0x0004707b) fep_vkb_keypad_pane_g3

0xc532,	// (0x000470a3) fep_vkb_keypad_pane_g4_ParamLimits

0xc532,	// (0x000470a3) fep_vkb_keypad_pane_g4

0xc5a1,	// (0x00047112) fep_vkb_bottom_pane_g2_ParamLimits

0xc5a1,	// (0x00047112) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0004a6a4) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0004a6a4) fep_vkb_bottom_pane_g

0xc213,	// (0x00046d84) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0004a6ae) cell_vkb_side_pane_g

0xc62c,	// (0x0004719d) cell_vkb_side_pane_t1

0xc63a,	// (0x000471ab) cell_vkb_side_pane_t1_copy1

0xc213,	// (0x00046d84) bg_fep_vkb_candidate_pane_g2

0xc772,	// (0x000472e3) cell_vkb_candidate_pane_ParamLimits

0xc2c5,	// (0x00046e36) aid_size_cell_vkb_ParamLimits

0xc2c5,	// (0x00046e36) aid_size_cell_vkb

0xc772,	// (0x000472e3) cell_vkb_candidate_pane

0x6fdd,	// (0x00041b4e) bg_popup_fep_shadow_pane_g1

0xc353,	// (0x00046ec4) fep_vkb_bottom_pane_ParamLimits

0xc353,	// (0x00046ec4) fep_vkb_bottom_pane

0xc389,	// (0x00046efa) fep_vkb_candidate_pane_ParamLimits

0xc389,	// (0x00046efa) fep_vkb_candidate_pane

0xc3a5,	// (0x00046f16) fep_vkb_keypad_pane_ParamLimits

0xc3a5,	// (0x00046f16) fep_vkb_keypad_pane

0xc3eb,	// (0x00046f5c) fep_vkb_side_pane_ParamLimits

0xc3eb,	// (0x00046f5c) fep_vkb_side_pane

0xc427,	// (0x00046f98) fep_vkb_top_pane_ParamLimits

0xc427,	// (0x00046f98) fep_vkb_top_pane

0xc463,	// (0x00046fd4) fep_vkb_top_pane_g1_ParamLimits

0xc463,	// (0x00046fd4) fep_vkb_top_pane_g1

0xc472,	// (0x00046fe3) fep_vkb_top_pane_g2_ParamLimits

0xc472,	// (0x00046fe3) fep_vkb_top_pane_g2

0xc481,	// (0x00046ff2) fep_vkb_top_pane_g3_ParamLimits

0xc481,	// (0x00046ff2) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0004a694) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0004a694) fep_vkb_top_pane_g

0xc49f,	// (0x00047010) fep_vkb_top_text_pane_ParamLimits

0xc49f,	// (0x00047010) fep_vkb_top_text_pane

0xc4b0,	// (0x00047021) fep_vkb_side_pane_g1_ParamLimits

0xc4b0,	// (0x00047021) fep_vkb_side_pane_g1

0xc4f9,	// (0x0004706a) grid_vkb_side_pane_ParamLimits

0xc4f9,	// (0x0004706a) grid_vkb_side_pane

0x6fe5,	// (0x00041b56) bg_popup_fep_shadow_pane_g2

0x6fee,	// (0x00041b5f) bg_popup_fep_shadow_pane_g3

0x6ff6,	// (0x00041b67) bg_popup_fep_shadow_pane_g4

0x6fff,	// (0x00041b70) bg_popup_fep_shadow_pane_g5

0x7009,	// (0x00041b7a) bg_popup_fep_shadow_pane_g6

0x7011,	// (0x00041b82) bg_popup_fep_shadow_pane_g7

0x8803,	// (0x00043374) bg_popup_fep_shadow_pane_g8

0xc550,	// (0x000470c1) grid_vkb_keypad_number_pane_ParamLimits

0xc550,	// (0x000470c1) grid_vkb_keypad_number_pane

0xc560,	// (0x000470d1) grid_vkb_keypad_pane_ParamLimits

0xc560,	// (0x000470d1) grid_vkb_keypad_pane

0xc586,	// (0x000470f7) fep_vkb_bottom_pane_g1_ParamLimits

0xc586,	// (0x000470f7) fep_vkb_bottom_pane_g1

0xc5af,	// (0x00047120) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc5af,	// (0x00047120) grid_vkb_keypad_bottom_left_pane

0xc5c4,	// (0x00047135) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc5c4,	// (0x00047135) grid_vkb_keypad_bottom_right_pane

0xc5d9,	// (0x0004714a) fep_vkb_top_text_pane_g1

0xc5f4,	// (0x00047165) fep_vkb_top_text_pane_t1

0xc609,	// (0x0004717a) cell_vkb_side_pane_ParamLimits

0xc609,	// (0x0004717a) cell_vkb_side_pane

0xc213,	// (0x00046d84) cell_vkb_side_pane_g1

0xc648,	// (0x000471b9) cell_vkb_keypad_pane_ParamLimits

0xc648,	// (0x000471b9) cell_vkb_keypad_pane

0xc6bd,	// (0x0004722e) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0004a6c1) bg_popup_fep_shadow_pane_g

0xc213,	// (0x00046d84) cell_hwr_side_pane_g1

0xc213,	// (0x00046d84) cell_hwr_side_pane_g2

0xc6c7,	// (0x00047238) cell_vkb_keypad_pane_t1

0xc6d5,	// (0x00047246) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6d5,	// (0x00047246) cell_vkb_keypad_bottom_left_pane

0xc6f2,	// (0x00047263) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6f2,	// (0x00047263) cell_vkb_keypad_bottom_right_pane

0xc213,	// (0x00046d84) cell_vkb_keypad_bottom_left_pane_g1

0xc213,	// (0x00046d84) cell_vkb_keypad_bottom_right_pane_g1

0xc72b,	// (0x0004729c) cell_vkb_keypad_number_pane_ParamLimits

0xc72b,	// (0x0004729c) cell_vkb_keypad_number_pane

0xc74a,	// (0x000472bb) cell_vkb_keypad_number_pane_g1

0xc760,	// (0x000472d1) cell_vkb_keypad_number_pane_g2

0xc769,	// (0x000472da) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0004a6b3) cell_vkb_keypad_number_pane_g

0xc6c7,	// (0x00047238) cell_vkb_keypad_number_pane_t1

0xc78d,	// (0x000472fe) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x0004a6ae) cell_hwr_side_pane_g

0xc7a6,	// (0x00047317) cell_hwr_side_pane_t1

0x7023,	// (0x00041b94) cell_hwr_side_pane_t1_copy1

0xc491,	// (0x00047002) cell_hwr_candidate_pane_g1

0x7031,	// (0x00041ba2) cell_hwr_candidate_pane_t1

0xc213,	// (0x00046d84) cell_vkb_candidate_pane_g2

0xc82c,	// (0x0004739d) cell_vkb_candidate_pane_t1

0x6df1,	// (0x00041962) bg_popup_fep_shadow_pane_ParamLimits

0x6df1,	// (0x00041962) bg_popup_fep_shadow_pane

0x2d83,	// (0x0003d8f4) bg_fep_hwr_top_pane_g4

0xc293,	// (0x00046e04) bg_hwr_side_pane_g1_ParamLimits

0xc293,	// (0x00046e04) bg_hwr_side_pane_g1

0x6f09,	// (0x00041a7a) cell_hwr_side_pane_ParamLimits

0x6f09,	// (0x00041a7a) cell_hwr_side_pane

0x6f44,	// (0x00041ab5) fep_hwr_write_pane_g1_ParamLimits

0x6f44,	// (0x00041ab5) fep_hwr_write_pane_g1

0x6f51,	// (0x00041ac2) fep_hwr_write_pane_g2_ParamLimits

0x6f51,	// (0x00041ac2) fep_hwr_write_pane_g2

0x6f5e,	// (0x00041acf) fep_hwr_write_pane_g3_ParamLimits

0x6f5e,	// (0x00041acf) fep_hwr_write_pane_g3

0x6f6c,	// (0x00041add) fep_hwr_write_pane_g4_ParamLimits

0x6f6c,	// (0x00041add) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0004a680) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0004a680) fep_hwr_write_pane_g

0x2d83,	// (0x0003d8f4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2d83,	// (0x0003d8f4) bg_fep_hwr_candidate_pane_g2

0x6f81,	// (0x00041af2) cell_hwr_candidate_pane_ParamLimits

0x6f81,	// (0x00041af2) cell_hwr_candidate_pane

0x6fc3,	// (0x00041b34) fep_hwr_candidate_pane_g1_ParamLimits

0xc2f3,	// (0x00046e64) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc2f3,	// (0x00046e64) bg_popup_fep_shadow_pane_cp2

0xc491,	// (0x00047002) fep_vkb_top_pane_g4_ParamLimits

0xc491,	// (0x00047002) fep_vkb_top_pane_g4

0xc4d7,	// (0x00047048) fep_vkb_side_pane_g2_ParamLimits

0xc4d7,	// (0x00047048) fep_vkb_side_pane_g2

0x4b99,	// (0x0003f70a) list_setting_pane_t4_ParamLimits

0x4b99,	// (0x0003f70a) list_setting_pane_t4

0x4c33,	// (0x0003f7a4) list_setting_number_pane_t5_ParamLimits

0x4c33,	// (0x0003f7a4) list_setting_number_pane_t5

0x8e54,	// (0x000439c5) list_double_heading_pane_cp2_ParamLimits

0x8e54,	// (0x000439c5) list_double_heading_pane_cp2

0x8732,	// (0x000432a3) list_double_heading_pane_g1_cp2_ParamLimits

0x8732,	// (0x000432a3) list_double_heading_pane_g1_cp2

0x87a5,	// (0x00043316) list_double_heading_pane_g2_cp2_ParamLimits

0x87a5,	// (0x00043316) list_double_heading_pane_g2_cp2

0xc83a,	// (0x000473ab) list_double_heading_pane_t1_cp2_ParamLimits

0xc83a,	// (0x000473ab) list_double_heading_pane_t1_cp2

0xc850,	// (0x000473c1) list_double_heading_pane_t2_cp2_ParamLimits

0xc850,	// (0x000473c1) list_double_heading_pane_t2_cp2

0x7dea,	// (0x0004295b) aid_value_unit2

0x5a67,	// (0x000405d8) popup_preview_fixed_window

0x817f,	// (0x00042cf0) bg_popup_preview_window_pane_cp02

0xc862,	// (0x000473d3) list_preview_fixed_pane

0xc8a8,	// (0x00047419) list_empty_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_empty_pane_fp

0xc8a8,	// (0x00047419) list_single_cale_day_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_cale_day_pane_fp

0xc8a8,	// (0x00047419) list_single_graphic_heading_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_graphic_heading_pane_fp

0xc8a8,	// (0x00047419) list_single_graphic_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_graphic_pane_fp

0xc8a8,	// (0x00047419) list_single_heading_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_heading_pane_fp

0xc8a8,	// (0x00047419) list_single_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_pane_fp

0xc8bd,	// (0x0004742e) list_single_pane_fp_g1_ParamLimits

0xc8bd,	// (0x0004742e) list_single_pane_fp_g1

0x8732,	// (0x000432a3) list_single_pane_fp_g2_ParamLimits

0x8732,	// (0x000432a3) list_single_pane_fp_g2

0x87a5,	// (0x00043316) list_single_pane_fp_g3_ParamLimits

0x87a5,	// (0x00043316) list_single_pane_fp_g3

0xc8c9,	// (0x0004743a) list_single_pane_fp_g4_ParamLimits

0xc8c9,	// (0x0004743a) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0004a6e2) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0004a6e2) list_single_pane_fp_g

0x54fa,	// (0x0004006b) list_single_pane_fp_t1_ParamLimits

0x54fa,	// (0x0004006b) list_single_pane_fp_t1

0x5511,	// (0x00040082) list_single_graphic_pane_fp_g1_ParamLimits

0x5511,	// (0x00040082) list_single_graphic_pane_fp_g1

0xc8bd,	// (0x0004742e) list_single_graphic_pane_fp_g2_ParamLimits

0xc8bd,	// (0x0004742e) list_single_graphic_pane_fp_g2

0x8732,	// (0x000432a3) list_single_graphic_pane_fp_g3_ParamLimits

0x8732,	// (0x000432a3) list_single_graphic_pane_fp_g3

0x87a5,	// (0x00043316) list_single_graphic_pane_fp_g4_ParamLimits

0x87a5,	// (0x00043316) list_single_graphic_pane_fp_g4

0xc8c9,	// (0x0004743a) list_single_graphic_pane_fp_g5_ParamLimits

0xc8c9,	// (0x0004743a) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a6eb) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a6eb) list_single_graphic_pane_fp_g

0x551d,	// (0x0004008e) list_single_graphic_pane_fp_t1_ParamLimits

0x551d,	// (0x0004008e) list_single_graphic_pane_fp_t1

0x5511,	// (0x00040082) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5511,	// (0x00040082) list_single_graphic_heading_pane_fp_g1

0xc8bd,	// (0x0004742e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8bd,	// (0x0004742e) list_single_graphic_heading_pane_fp_g2

0x8732,	// (0x000432a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8732,	// (0x000432a3) list_single_graphic_heading_pane_fp_g3

0x87a5,	// (0x00043316) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x87a5,	// (0x00043316) list_single_graphic_heading_pane_fp_g4

0xc8c9,	// (0x0004743a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc8c9,	// (0x0004743a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a6eb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a6eb) list_single_graphic_heading_pane_fp_g

0x5533,	// (0x000400a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5533,	// (0x000400a4) list_single_graphic_heading_pane_fp_t1

0x5549,	// (0x000400ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5549,	// (0x000400ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0004a6f6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0004a6f6) list_single_graphic_heading_pane_fp_t

0x555b,	// (0x000400cc) list_single_cale_day_pane_fp_g1_ParamLimits

0x555b,	// (0x000400cc) list_single_cale_day_pane_fp_g1

0xc8d5,	// (0x00047446) list_single_cale_day_pane_fp_g2_ParamLimits

0xc8d5,	// (0x00047446) list_single_cale_day_pane_fp_g2

0x704f,	// (0x00041bc0) list_single_cale_day_pane_fp_g3_ParamLimits

0x704f,	// (0x00041bc0) list_single_cale_day_pane_fp_g3

0x7077,	// (0x00041be8) list_single_cale_day_pane_fp_g4_ParamLimits

0x7077,	// (0x00041be8) list_single_cale_day_pane_fp_g4

0x709b,	// (0x00041c0c) list_single_cale_day_pane_fp_g5_ParamLimits

0x709b,	// (0x00041c0c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0004a6fb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0004a6fb) list_single_cale_day_pane_fp_g

0x5593,	// (0x00040104) list_single_cale_day_pane_fp_t1_ParamLimits

0x5593,	// (0x00040104) list_single_cale_day_pane_fp_t1

0x55b9,	// (0x0004012a) list_single_cale_day_pane_fp_t2_ParamLimits

0x55b9,	// (0x0004012a) list_single_cale_day_pane_fp_t2

0x55d2,	// (0x00040143) list_single_cale_day_pane_fp_t3_ParamLimits

0x55d2,	// (0x00040143) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0004a706) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0004a706) list_single_cale_day_pane_fp_t

0xc8bd,	// (0x0004742e) list_empty_pane_fp_g1_ParamLimits

0xc8bd,	// (0x0004742e) list_empty_pane_fp_g1

0x55eb,	// (0x0004015c) list_empty_pane_fp_t1

0x55f9,	// (0x0004016a) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004a70d) list_empty_pane_fp_t

0xc8bd,	// (0x0004742e) list_single_heading_pane_fp_g1_ParamLimits

0xc8bd,	// (0x0004742e) list_single_heading_pane_fp_g1

0x8732,	// (0x000432a3) list_single_heading_pane_fp_g2_ParamLimits

0x8732,	// (0x000432a3) list_single_heading_pane_fp_g2

0x87a5,	// (0x00043316) list_single_heading_pane_fp_g3_ParamLimits

0x87a5,	// (0x00043316) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x0004a712) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0004a712) list_single_heading_pane_fp_g

0x5607,	// (0x00040178) list_single_heading_pane_fp_t1_ParamLimits

0x5607,	// (0x00040178) list_single_heading_pane_fp_t1

0x5619,	// (0x0004018a) list_single_heading_pane_fp_t2_ParamLimits

0x5619,	// (0x0004018a) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x0004a719) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x0004a719) list_single_heading_pane_fp_t

0x898a,	// (0x000434fb) aid_size_cell_fast

0x80ef,	// (0x00042c60) soft_indicator_pane_cp1_t1

0x89c7,	// (0x00043538) cell_app_pane_cp2_ParamLimits

0x89c7,	// (0x00043538) cell_app_pane_cp2

0x6e13,	// (0x00041984) fep_hwr_candidate_drop_down_list_pane

0x2d91,	// (0x0003d902) fep_hwr_candidate_pane_g3_ParamLimits

0x2d91,	// (0x0003d902) fep_hwr_candidate_pane_g3

0x2d9e,	// (0x0003d90f) fep_hwr_candidate_pane_g4_ParamLimits

0x2d9e,	// (0x0003d90f) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0004a68d) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0004a68d) fep_hwr_candidate_pane_g

0xc378,	// (0x00046ee9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc378,	// (0x00046ee9) fep_vkb_candidate_drop_down_list_pane

0xc795,	// (0x00047306) fep_vkb_candidate_pane_g3

0xc79d,	// (0x0004730e) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0004a6ba) fep_vkb_candidate_pane_g

0xc491,	// (0x00047002) cell_hwr_candidate_pane_g1_ParamLimits

0xc7b4,	// (0x00047325) cell_hwr_candidate_pane_g3_ParamLimits

0xc7b4,	// (0x00047325) cell_hwr_candidate_pane_g3

0xc7d5,	// (0x00047346) cell_hwr_candidate_pane_g4_ParamLimits

0xc7d5,	// (0x00047346) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0004a6d4) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0004a6d4) cell_hwr_candidate_pane_g

0xc7f6,	// (0x00047367) cell_vkb_candidate_pane_g3_ParamLimits

0xc7f6,	// (0x00047367) cell_vkb_candidate_pane_g3

0xc811,	// (0x00047382) cell_vkb_candidate_pane_g4_ParamLimits

0xc811,	// (0x00047382) cell_vkb_candidate_pane_g4

0xc8e1,	// (0x00047452) cell_app_pane_cp2_g1_ParamLimits

0xc8e1,	// (0x00047452) cell_app_pane_cp2_g1

0xc8ff,	// (0x00047470) cell_app_pane_cp2_g2_ParamLimits

0xc8ff,	// (0x00047470) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x0004a71e) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x0004a71e) cell_app_pane_cp2_g

0xc90b,	// (0x0004747c) cell_app_pane_cp2_t1_ParamLimits

0xc90b,	// (0x0004747c) cell_app_pane_cp2_t1

0x8797,	// (0x00043308) grid_highlight_pane_cp1_ParamLimits

0x8797,	// (0x00043308) grid_highlight_pane_cp1

0x70bf,	// (0x00041c30) cell_hwr_candidate_pane_cp1_ParamLimits

0x70bf,	// (0x00041c30) cell_hwr_candidate_pane_cp1

0xc491,	// (0x00047002) fep_hwr_candidate_drop_down_list_pane_g1

0xc91d,	// (0x0004748e) fep_hwr_candidate_drop_down_list_pane_g2

0xc92a,	// (0x0004749b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a723) fep_hwr_candidate_drop_down_list_pane_g

0x70de,	// (0x00041c4f) fep_hwr_candidate_drop_down_list_scroll_pane

0x70e7,	// (0x00041c58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x70e7,	// (0x00041c58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x70f4,	// (0x00041c65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x70f4,	// (0x00041c65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7101,	// (0x00041c72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7101,	// (0x00041c72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc7f6,	// (0x00047367) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7f6,	// (0x00047367) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc811,	// (0x00047382) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc811,	// (0x00047382) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x710e,	// (0x00041c7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x710e,	// (0x00041c7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7129,	// (0x00041c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7129,	// (0x00041c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7144,	// (0x00041cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7144,	// (0x00041cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x0004a72a) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x0004a72a) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc937,	// (0x000474a8) cell_vkb_candidate_pane_cp1_ParamLimits

0xc937,	// (0x000474a8) cell_vkb_candidate_pane_cp1

0xc491,	// (0x00047002) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc491,	// (0x00047002) fep_vkb_candidate_drop_down_list_pane_g1

0xc91d,	// (0x0004748e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc91d,	// (0x0004748e) fep_vkb_candidate_drop_down_list_pane_g2

0xc92a,	// (0x0004749b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc92a,	// (0x0004749b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x0004a723) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x0004a723) fep_vkb_candidate_drop_down_list_pane_g

0xc957,	// (0x000474c8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc957,	// (0x000474c8) fep_vkb_candidate_drop_down_list_scroll_pane

0xc964,	// (0x000474d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc964,	// (0x000474d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc971,	// (0x000474e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc971,	// (0x000474e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc97d,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc97d,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc7b4,	// (0x00047325) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc7b4,	// (0x00047325) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc7d5,	// (0x00047346) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc7d5,	// (0x00047346) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc989,	// (0x000474fa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc989,	// (0x000474fa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc9aa,	// (0x0004751b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc9aa,	// (0x0004751b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc9cb,	// (0x0004753c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc9cb,	// (0x0004753c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0004a73b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0004a73b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7e20,	// (0x00042991) title_pane_g1_ParamLimits

0x7e2d,	// (0x0004299e) title_pane_g2_ParamLimits

0xf54e,	// (0x0004a0bf) title_pane_g_ParamLimits

0x8dfd,	// (0x0004396e) aid_call2_pane

0x8e05,	// (0x00043976) aid_call_pane

0x8e0d,	// (0x0004397e) popup_clock_analogue_window_g1

0x8e0d,	// (0x0004397e) popup_clock_analogue_window_g2

0x5e84,	// (0x000409f5) popup_clock_analogue_window_g3

0x5e8d,	// (0x000409fe) popup_clock_analogue_window_g4

0x7e0c,	// (0x0004297d) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004a26e) popup_clock_analogue_window_g

0x5e95,	// (0x00040a06) popup_clock_analogue_window_t1

0x5ea3,	// (0x00040a14) clock_digital_number_pane_ParamLimits

0x5ea3,	// (0x00040a14) clock_digital_number_pane

0x5eaf,	// (0x00040a20) clock_digital_number_pane_cp02_ParamLimits

0x5eaf,	// (0x00040a20) clock_digital_number_pane_cp02

0x5ebb,	// (0x00040a2c) clock_digital_number_pane_cp03_ParamLimits

0x5ebb,	// (0x00040a2c) clock_digital_number_pane_cp03

0x5ec7,	// (0x00040a38) clock_digital_number_pane_cp04_ParamLimits

0x5ec7,	// (0x00040a38) clock_digital_number_pane_cp04

0x5ed3,	// (0x00040a44) clock_digital_separator_pane_ParamLimits

0x5ed3,	// (0x00040a44) clock_digital_separator_pane

0x5edf,	// (0x00040a50) popup_clock_digital_window_t1_ParamLimits

0x5edf,	// (0x00040a50) popup_clock_digital_window_t1

0x7e0c,	// (0x0004297d) clock_digital_number_pane_g1

0x7e0c,	// (0x0004297d) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004a279) clock_digital_number_pane_g

0x7e0c,	// (0x0004297d) clock_digital_separator_pane_g1

0x7e0c,	// (0x0004297d) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004a279) clock_digital_separator_pane_g

0x9780,	// (0x000442f1) aid_fill_nsta_ParamLimits

0x98c6,	// (0x00044437) indicator_nsta_pane_ParamLimits

0x9a3f,	// (0x000445b0) popup_clock_analogue_window

0x9a3f,	// (0x000445b0) popup_clock_digital_window

0x7ef6,	// (0x00042a67) grid_indicator_nsta_pane_ParamLimits

0xbc2b,	// (0x0004679c) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0004a60d) clock_nsta_pane_t

0x5e48,	// (0x000409b9) aid_size_max_handle

0x5e52,	// (0x000409c3) aid_size_min_handle

0x9420,	// (0x00043f91) editor_scroll_pane

0xc9e6,	// (0x00047557) ex_editor_pane

0x88f8,	// (0x00043469) scroll_pane_cp13

0x872a,	// (0x0004329b) scroll_pane_cp14

0x8e3c,	// (0x000439ad) scroll_pane_cp36

0x8e68,	// (0x000439d9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8e68,	// (0x000439d9) list_single_graphic_hl_pane_cp2

0x514b,	// (0x0003fcbc) list_single_graphic_hl_pane_ParamLimits

0x514b,	// (0x0003fcbc) list_single_graphic_hl_pane

0x562f,	// (0x000401a0) aid_size_min_hl_cp1

0xc9ee,	// (0x0004755f) list_highlight_pane_cp34_ParamLimits

0xc9ee,	// (0x0004755f) list_highlight_pane_cp34

0xc9ff,	// (0x00047570) list_single_graphic_hl_pane_g1_ParamLimits

0xc9ff,	// (0x00047570) list_single_graphic_hl_pane_g1

0x5638,	// (0x000401a9) list_single_graphic_hl_pane_g2_ParamLimits

0x5638,	// (0x000401a9) list_single_graphic_hl_pane_g2

0x5638,	// (0x000401a9) list_single_graphic_hl_pane_g3_ParamLimits

0x5638,	// (0x000401a9) list_single_graphic_hl_pane_g3

0x9391,	// (0x00043f02) list_single_graphic_hl_pane_g4_ParamLimits

0x9391,	// (0x00043f02) list_single_graphic_hl_pane_g4

0x715f,	// (0x00041cd0) list_single_graphic_hl_pane_g5_ParamLimits

0x715f,	// (0x00041cd0) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0004a74c) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0004a74c) list_single_graphic_hl_pane_g

0x5644,	// (0x000401b5) list_single_graphic_hl_pane_t1_ParamLimits

0x5644,	// (0x000401b5) list_single_graphic_hl_pane_t1

0xca0c,	// (0x0004757d) aid_size_min_hl_cp2

0xca15,	// (0x00047586) list_highlight_pane_cp34_cp2_ParamLimits

0xca15,	// (0x00047586) list_highlight_pane_cp34_cp2

0xc9ff,	// (0x00047570) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc9ff,	// (0x00047570) list_single_graphic_hl_pane_g1_cp2

0xca22,	// (0x00047593) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xca22,	// (0x00047593) list_single_graphic_hl_pane_g2_cp2

0xca2e,	// (0x0004759f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xca2e,	// (0x0004759f) list_single_graphic_hl_pane_g3_cp2

0xc754,	// (0x000472c5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc754,	// (0x000472c5) list_single_graphic_hl_pane_g4_cp2

0xca3c,	// (0x000475ad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xca3c,	// (0x000475ad) list_single_graphic_hl_pane_g5_cp2

0x61af,	// (0x00040d20) control_pane_g4_ParamLimits

0x61af,	// (0x00040d20) control_pane_g4

0x9744,	// (0x000442b5) bg_popup_sub_pane_cp10_ParamLimits

0xc21d,	// (0x00046d8e) list_choice_list_pane_ParamLimits

0xc22c,	// (0x00046d9d) scroll_pane_cp23

0x817f,	// (0x00042cf0) bg_popup_preview_window_pane_cp02_ParamLimits

0xc862,	// (0x000473d3) list_preview_fixed_pane_ParamLimits

0xc878,	// (0x000473e9) list_preview_fixed_pane_cp_ParamLimits

0xc878,	// (0x000473e9) list_preview_fixed_pane_cp

0xc884,	// (0x000473f5) popup_preview_fixed_window_g1_ParamLimits

0xc884,	// (0x000473f5) popup_preview_fixed_window_g1

0xc890,	// (0x00047401) popup_preview_fixed_window_g2_ParamLimits

0xc890,	// (0x00047401) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0004a6db) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0004a6db) popup_preview_fixed_window_g

0x5dbc,	// (0x0004092d) aid_navi_side_left_pane_ParamLimits

0x5dd1,	// (0x00040942) aid_navi_side_right_pane_ParamLimits

0x5de9,	// (0x0004095a) navi_icon_pane_stacon_ParamLimits

0x5dfd,	// (0x0004096e) navi_navi_pane_stacon_ParamLimits

0x5de9,	// (0x0004095a) navi_text_pane_stacon_ParamLimits

0x7e02,	// (0x00042973) main_text_info_pane

0xca66,	// (0x000475d7) listscroll_text_info_pane

0xca6e,	// (0x000475df) list_text_info_pane_ParamLimits

0xca6e,	// (0x000475df) list_text_info_pane

0xca7d,	// (0x000475ee) scroll_pane_cp24_ParamLimits

0xca7d,	// (0x000475ee) scroll_pane_cp24

0xca9b,	// (0x0004760c) list_text_info_pane_t1_ParamLimits

0xca9b,	// (0x0004760c) list_text_info_pane_t1

0x631f,	// (0x00040e90) popup_fast_swap2_window_ParamLimits

0x631f,	// (0x00040e90) popup_fast_swap2_window

0xcacc,	// (0x0004763d) aid_size_cell_fast2

0x7e02,	// (0x00042973) bg_popup_window_pane_cp17

0xa0d4,	// (0x00044c45) heading_pane_cp2

0x83f4,	// (0x00042f65) listscroll_fast2_pane

0xcad6,	// (0x00047647) grid_fast2_pane

0xcae0,	// (0x00047651) listscroll_fast2_pane_g1

0xcae8,	// (0x00047659) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0004a757) listscroll_fast2_pane_g

0x88f8,	// (0x00043469) scroll_pane_cp26

0xcaf2,	// (0x00047663) cell_fast2_pane_ParamLimits

0xcaf2,	// (0x00047663) cell_fast2_pane

0xcb07,	// (0x00047678) cell_fast2_pane_g1

0xcb10,	// (0x00047681) cell_fast2_pane_g2

0xcb19,	// (0x0004768a) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0004a75c) cell_fast2_pane_g

0x84e7,	// (0x00043058) grid_highlight_pane_cp9

0x84fc,	// (0x0004306d) main_eswt_pane_ParamLimits

0x84fc,	// (0x0004306d) main_eswt_pane

0xca92,	// (0x00047603) list_single_text_info_pane

0xcb21,	// (0x00047692) eswt_ctrl_button_pane

0xcb21,	// (0x00047692) eswt_ctrl_canvas_pane

0xcb29,	// (0x0004769a) eswt_ctrl_combo_pane

0xcb21,	// (0x00047692) eswt_ctrl_default_pane

0xcb21,	// (0x00047692) eswt_ctrl_label_pane

0xcb31,	// (0x000476a2) eswt_ctrl_wait_pane

0xcb39,	// (0x000476aa) eswt_shell_pane

0x7e02,	// (0x00042973) listscroll_eswt_app_pane

0xcb59,	// (0x000476ca) popup_eswt_tasktip_window_ParamLimits

0xcb59,	// (0x000476ca) popup_eswt_tasktip_window

0x9cdc,	// (0x0004484d) bg_popup_window_pane_cp18

0xcb6a,	// (0x000476db) eswt_control_pane_g1_ParamLimits

0xcb6a,	// (0x000476db) eswt_control_pane_g1

0xcb77,	// (0x000476e8) eswt_control_pane_g2_ParamLimits

0xcb77,	// (0x000476e8) eswt_control_pane_g2

0xcb84,	// (0x000476f5) eswt_control_pane_g3_ParamLimits

0xcb84,	// (0x000476f5) eswt_control_pane_g3

0xcb91,	// (0x00047702) eswt_control_pane_g4_ParamLimits

0xcb91,	// (0x00047702) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0004a763) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0004a763) eswt_control_pane_g

0x8797,	// (0x00043308) bg_button_pane_ParamLimits

0x8797,	// (0x00043308) bg_button_pane

0x84fc,	// (0x0004306d) common_borders_pane_copy2_ParamLimits

0x84fc,	// (0x0004306d) common_borders_pane_copy2

0xcb9e,	// (0x0004770f) control_button_pane_g1_ParamLimits

0xcb9e,	// (0x0004770f) control_button_pane_g1

0xcbaa,	// (0x0004771b) control_button_pane_g2_ParamLimits

0xcbaa,	// (0x0004771b) control_button_pane_g2

0xcbb6,	// (0x00047727) control_button_pane_g3_ParamLimits

0xcbb6,	// (0x00047727) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0004a76c) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0004a76c) control_button_pane_g

0xcbca,	// (0x0004773b) control_button_pane_t1

0xcbd8,	// (0x00047749) control_button_pane_t2

0x0001,

0xfc02,	// (0x0004a773) control_button_pane_t

0x9c68,	// (0x000447d9) bg_button_pane_g1

0x9c70,	// (0x000447e1) bg_button_pane_g2

0x9c78,	// (0x000447e9) bg_button_pane_g3

0x9c80,	// (0x000447f1) bg_button_pane_g4

0x9c88,	// (0x000447f9) bg_button_pane_g5

0x9c90,	// (0x00044801) bg_button_pane_g6

0x9c98,	// (0x00044809) bg_button_pane_g7

0x9ca0,	// (0x00044811) bg_button_pane_g8

0x9ca8,	// (0x00044819) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0004a3dc) bg_button_pane_g

0xc1d8,	// (0x00046d49) common_borders_pane_ParamLimits

0xc1d8,	// (0x00046d49) common_borders_pane

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy1_ParamLimits

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy1

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy1_ParamLimits

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy1

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy1_ParamLimits

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy1

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy1_ParamLimits

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy1

0xc213,	// (0x00046d84) bg_eswt_ctrl_canvas_pane_g1

0xc1d8,	// (0x00046d49) common_borders_pane_cp2_ParamLimits

0xc1d8,	// (0x00046d49) common_borders_pane_cp2

0xc1d8,	// (0x00046d49) common_borders_pane_cp3_ParamLimits

0xc1d8,	// (0x00046d49) common_borders_pane_cp3

0xcbe6,	// (0x00047757) separator_horizontal_pane

0xcbee,	// (0x0004775f) separator_vertical_pane

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy2_ParamLimits

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy2

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy2_ParamLimits

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy2

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy2_ParamLimits

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy2

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy2_ParamLimits

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy2

0x7e02,	// (0x00042973) common_borders_pane_cp4

0xcbf7,	// (0x00047768) separator_horizontal_pane_g1

0xcc00,	// (0x00047771) separator_horizontal_pane_g2

0xcc09,	// (0x0004777a) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0004a778) separator_horizontal_pane_g

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy3_ParamLimits

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy3

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy3_ParamLimits

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy3

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy3_ParamLimits

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy3

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy3_ParamLimits

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy3

0x7e02,	// (0x00042973) common_borders_pane_cp5

0xcc12,	// (0x00047783) separator_vertical_pane_g1

0xcc1b,	// (0x0004778c) separator_vertical_pane_g2

0xcc24,	// (0x00047795) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0004a77f) separator_vertical_pane_g

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy4_ParamLimits

0xcb6a,	// (0x000476db) eswt_control_pane_g1_copy4

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy4_ParamLimits

0xcb77,	// (0x000476e8) eswt_control_pane_g2_copy4

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy4_ParamLimits

0xcb84,	// (0x000476f5) eswt_control_pane_g3_copy4

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy4_ParamLimits

0xcb91,	// (0x00047702) eswt_control_pane_g4_copy4

0xcc2d,	// (0x0004779e) eswt_ctrl_combo_button_pane

0xcc35,	// (0x000477a6) eswt_ctrl_input_pane

0xcc3d,	// (0x000477ae) popup_choice_list_window_cp70

0xcc45,	// (0x000477b6) eswt_ctrl_input_pane_t1

0x7e02,	// (0x00042973) input_focus_pane_cp70

0xc1d8,	// (0x00046d49) bg_button_pane_cp70_ParamLimits

0xc1d8,	// (0x00046d49) bg_button_pane_cp70

0xcc53,	// (0x000477c4) eswt_ctrl_combo_button_pane_g1

0xcc5b,	// (0x000477cc) wait_bar_pane_cp70

0x9cdc,	// (0x0004484d) bg_popup_window_pane_cp70_ParamLimits

0x9cdc,	// (0x0004484d) bg_popup_window_pane_cp70

0xcc63,	// (0x000477d4) popup_eswt_tasktip_window_t1

0xcc79,	// (0x000477ea) wait_bar_pane_cp71_ParamLimits

0xcc79,	// (0x000477ea) wait_bar_pane_cp71

0xcc85,	// (0x000477f6) grid_eswt_app_pane

0x8c1f,	// (0x00043790) scroll_pane_cp70

0xcc8e,	// (0x000477ff) cell_eswt_app_pane_ParamLimits

0xcc8e,	// (0x000477ff) cell_eswt_app_pane

0xccbe,	// (0x0004782f) cell_eswt_app_pane_g1_ParamLimits

0xccbe,	// (0x0004782f) cell_eswt_app_pane_g1

0xcced,	// (0x0004785e) cell_eswt_app_pane_g2_ParamLimits

0xcced,	// (0x0004785e) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0004a786) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0004a786) cell_eswt_app_pane_g

0xcd16,	// (0x00047887) cell_eswt_app_pane_t1_ParamLimits

0xcd16,	// (0x00047887) cell_eswt_app_pane_t1

0xcd48,	// (0x000478b9) grid_highlight_pane_cp70_ParamLimits

0xcd48,	// (0x000478b9) grid_highlight_pane_cp70

0x92f5,	// (0x00043e66) set_content_pane_g1

0x96cb,	// (0x0004423c) status_small_volume_pane

0x7173,	// (0x00041ce4) status_small_volume_pane_g1

0x717b,	// (0x00041cec) volume_small2_pane

0x7184,	// (0x00041cf5) volume_small2_pane_g1

0x718d,	// (0x00041cfe) volume_small2_pane_g2

0x7196,	// (0x00041d07) volume_small2_pane_g3

0x719f,	// (0x00041d10) volume_small2_pane_g4

0x71a8,	// (0x00041d19) volume_small2_pane_g5

0x71b1,	// (0x00041d22) volume_small2_pane_g6

0x71ba,	// (0x00041d2b) volume_small2_pane_g7

0x71c3,	// (0x00041d34) volume_small2_pane_g8

0x71cc,	// (0x00041d3d) volume_small2_pane_g9

0x71d5,	// (0x00041d46) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0004a78b) volume_small2_pane_g

0xc5d9,	// (0x0004714a) fep_vkb_top_text_pane_g1_ParamLimits

0xc5f4,	// (0x00047165) fep_vkb_top_text_pane_t1_ParamLimits

0xc89c,	// (0x0004740d) popup_preview_fixed_window_g3_ParamLimits

0xc89c,	// (0x0004740d) popup_preview_fixed_window_g3

0x67ce,	// (0x0004133f) popup_toolbar_trans_pane

0xb039,	// (0x00045baa) aid_height_set_list_ParamLimits

0xb04a,	// (0x00045bbb) aid_size_parent_ParamLimits

0x9744,	// (0x000442b5) list_highlight_pane_cp2_ParamLimits

0x92f5,	// (0x00043e66) set_content_pane_g1_ParamLimits

0x5166,	// (0x0003fcd7) list_single_image_pane_ParamLimits

0x5166,	// (0x0003fcd7) list_single_image_pane

0xcd54,	// (0x000478c5) aid_size_cell_image_ParamLimits

0xcd54,	// (0x000478c5) aid_size_cell_image

0xcd61,	// (0x000478d2) grid_single_image_pane_ParamLimits

0xcd61,	// (0x000478d2) grid_single_image_pane

0x9de5,	// (0x00044956) list_single_image_pane_g1_ParamLimits

0x9de5,	// (0x00044956) list_single_image_pane_g1

0xcd6d,	// (0x000478de) list_single_image_pane_g2_ParamLimits

0xcd6d,	// (0x000478de) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0004a7a0) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0004a7a0) list_single_image_pane_g

0xcd81,	// (0x000478f2) list_single_image_pane_t1_ParamLimits

0xcd81,	// (0x000478f2) list_single_image_pane_t1

0xcd97,	// (0x00047908) cell_image_list_pane_ParamLimits

0xcd97,	// (0x00047908) cell_image_list_pane

0xcdab,	// (0x0004791c) cell_image_list_pane_g1

0xcdb4,	// (0x00047925) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0004a7a5) cell_image_list_pane_g

0xcdbd,	// (0x0004792e) aid_size_cell_tb_trans_pane

0x8797,	// (0x00043308) bg_tb_trans_pane

0xcdcf,	// (0x00047940) grid_tb_trans_pane

0x9c68,	// (0x000447d9) bg_tb_trans_pane_g1

0x9c70,	// (0x000447e1) bg_tb_trans_pane_g2

0x9c78,	// (0x000447e9) bg_tb_trans_pane_g3

0x9c80,	// (0x000447f1) bg_tb_trans_pane_g4

0x9c88,	// (0x000447f9) bg_tb_trans_pane_g5

0x9ca0,	// (0x00044811) bg_tb_trans_pane_g6

0x9ca8,	// (0x00044819) bg_tb_trans_pane_g7

0x9c90,	// (0x00044801) bg_tb_trans_pane_g8

0x9c98,	// (0x00044809) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0004a7aa) bg_tb_trans_pane_g

0xcde3,	// (0x00047954) cell_toolbar_trans_pane_ParamLimits

0xcde3,	// (0x00047954) cell_toolbar_trans_pane

0xc213,	// (0x00046d84) cell_toolbar_trans_pane_g1

0xbde8,	// (0x00046959) list_form2_midp_pane_t1

0xbdf6,	// (0x00046967) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0004a653) list_form2_midp_pane_t

0xbe04,	// (0x00046975) scroll_pane_cp51_ParamLimits

0xbfc0,	// (0x00046b31) form2_midp_wait_pane_g1

0xbfc9,	// (0x00046b3a) form2_midp_wait_pane_g2

0xbfd2,	// (0x00046b43) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0004a668) form2_midp_wait_pane_g

0x7ef6,	// (0x00042a67) list_highlight_pane_cp21_ParamLimits

0xc01e,	// (0x00046b8f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc02d,	// (0x00046b9e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6c27,	// (0x00041798) list_single_2graphic_im_pane_ParamLimits

0x6c27,	// (0x00041798) list_single_2graphic_im_pane

0xce09,	// (0x0004797a) list_single_2graphic_im_pane_g1_ParamLimits

0xce09,	// (0x0004797a) list_single_2graphic_im_pane_g1

0xce1a,	// (0x0004798b) list_single_2graphic_im_pane_g2_ParamLimits

0xce1a,	// (0x0004798b) list_single_2graphic_im_pane_g2

0xce26,	// (0x00047997) list_single_2graphic_im_pane_g3_ParamLimits

0xce26,	// (0x00047997) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0004a7bd) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0004a7bd) list_single_2graphic_im_pane_g

0xce46,	// (0x000479b7) list_single_2graphic_im_pane_t1_ParamLimits

0xce46,	// (0x000479b7) list_single_2graphic_im_pane_t1

0xc8a8,	// (0x00047419) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8a8,	// (0x00047419) list_single_graphic_2heading_pane_fp

0x5511,	// (0x00040082) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5511,	// (0x00040082) list_single_graphic_2heading_pane_fp_g1

0xc8bd,	// (0x0004742e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8bd,	// (0x0004742e) list_single_graphic_2heading_pane_fp_g2

0x8732,	// (0x000432a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8732,	// (0x000432a3) list_single_graphic_2heading_pane_fp_g3

0x87a5,	// (0x00043316) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x87a5,	// (0x00043316) list_single_graphic_2heading_pane_fp_g4

0xc8c9,	// (0x0004743a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc8c9,	// (0x0004743a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0004a6eb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0004a6eb) list_single_graphic_2heading_pane_fp_g

0x565a,	// (0x000401cb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x565a,	// (0x000401cb) list_single_graphic_2heading_pane_fp_t1

0x5549,	// (0x000400ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5549,	// (0x000400ba) list_single_graphic_2heading_pane_fp_t2

0x5670,	// (0x000401e1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5670,	// (0x000401e1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0004a7c6) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0004a7c6) list_single_graphic_2heading_pane_fp_t

0xc29f,	// (0x00046e10) fep_hwr_write_pane_g5_ParamLimits

0xc29f,	// (0x00046e10) fep_hwr_write_pane_g5

0xc2ab,	// (0x00046e1c) fep_hwr_write_pane_g6_ParamLimits

0xc2ab,	// (0x00046e1c) fep_hwr_write_pane_g6

0xcb39,	// (0x000476aa) eswt_shell_pane_ParamLimits

0x9cdc,	// (0x0004484d) bg_popup_window_pane_cp18_ParamLimits

0xaf92,	// (0x00045b03) heading_pane_cp70

0xcc63,	// (0x000477d4) popup_eswt_tasktip_window_t1_ParamLimits

0x97d5,	// (0x00044346) aid_touch_tab_arrow_left

0x97e4,	// (0x00044355) aid_touch_tab_arrow_right

0x7e3e,	// (0x000429af) title_pane_g3_ParamLimits

0x7e3e,	// (0x000429af) title_pane_g3

0x8756,	// (0x000432c7) set_value_pane_g1

0x67ce,	// (0x0004133f) popup_toolbar_trans_pane_ParamLimits

0xcdbd,	// (0x0004792e) aid_size_cell_tb_trans_pane_ParamLimits

0x8797,	// (0x00043308) bg_tb_trans_pane_ParamLimits

0xcdcf,	// (0x00047940) grid_tb_trans_pane_ParamLimits

0x817f,	// (0x00042cf0) cont_note_pane_ParamLimits

0x817f,	// (0x00042cf0) cont_note_pane

0x84fc,	// (0x0004306d) cont_snote2_single_text_pane_ParamLimits

0x84fc,	// (0x0004306d) cont_snote2_single_text_pane

0x84fc,	// (0x0004306d) cont_snote2_single_graphic_pane_ParamLimits

0x84fc,	// (0x0004306d) cont_snote2_single_graphic_pane

0xa2fb,	// (0x00044e6c) cont_note_wait_pane_ParamLimits

0xa2fb,	// (0x00044e6c) cont_note_wait_pane

0xa2fb,	// (0x00044e6c) cont_note_image_pane_ParamLimits

0xa2fb,	// (0x00044e6c) cont_note_image_pane

0xce77,	// (0x000479e8) popup_note2_window_g1_ParamLimits

0xce77,	// (0x000479e8) popup_note2_window_g1

0xcea8,	// (0x00047a19) popup_note2_window_t1_ParamLimits

0xcea8,	// (0x00047a19) popup_note2_window_t1

0xceed,	// (0x00047a5e) popup_note2_window_t2_ParamLimits

0xceed,	// (0x00047a5e) popup_note2_window_t2

0xcf32,	// (0x00047aa3) popup_note2_window_t3_ParamLimits

0xcf32,	// (0x00047aa3) popup_note2_window_t3

0xcf77,	// (0x00047ae8) popup_note2_window_t4_ParamLimits

0xcf77,	// (0x00047ae8) popup_note2_window_t4

0x8203,	// (0x00042d74) popup_note2_window_t5_ParamLimits

0x8203,	// (0x00042d74) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0004a7d2) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0004a7d2) popup_note2_window_t

0xcfa6,	// (0x00047b17) popup_note2_image_window_g1_ParamLimits

0xcfa6,	// (0x00047b17) popup_note2_image_window_g1

0xcfb2,	// (0x00047b23) popup_note2_image_window_g2_ParamLimits

0xcfb2,	// (0x00047b23) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0004a7dd) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0004a7dd) popup_note2_image_window_g

0xcfc4,	// (0x00047b35) popup_note2_image_window_t1_ParamLimits

0xcfc4,	// (0x00047b35) popup_note2_image_window_t1

0xcfdc,	// (0x00047b4d) popup_note2_image_window_t2_ParamLimits

0xcfdc,	// (0x00047b4d) popup_note2_image_window_t2

0xcff4,	// (0x00047b65) popup_note2_image_window_t3_ParamLimits

0xcff4,	// (0x00047b65) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0004a7e2) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0004a7e2) popup_note2_image_window_t

0xa309,	// (0x00044e7a) popup_note2_wait_window_g1_ParamLimits

0xa309,	// (0x00044e7a) popup_note2_wait_window_g1

0xd010,	// (0x00047b81) popup_note2_wait_window_g2_ParamLimits

0xd010,	// (0x00047b81) popup_note2_wait_window_g2

0xa321,	// (0x00044e92) popup_note2_wait_window_g3_ParamLimits

0xa321,	// (0x00044e92) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0004a7e9) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0004a7e9) popup_note2_wait_window_g

0xd01c,	// (0x00047b8d) popup_note2_wait_window_t1_ParamLimits

0xd01c,	// (0x00047b8d) popup_note2_wait_window_t1

0xd03a,	// (0x00047bab) popup_note2_wait_window_t2_ParamLimits

0xd03a,	// (0x00047bab) popup_note2_wait_window_t2

0xd058,	// (0x00047bc9) popup_note2_wait_window_t3_ParamLimits

0xd058,	// (0x00047bc9) popup_note2_wait_window_t3

0xd06a,	// (0x00047bdb) popup_note2_wait_window_t4_ParamLimits

0xd06a,	// (0x00047bdb) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0004a7f0) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0004a7f0) popup_note2_wait_window_t

0xd07c,	// (0x00047bed) wait_bar2_pane_ParamLimits

0xd07c,	// (0x00047bed) wait_bar2_pane

0xd094,	// (0x00047c05) popup_snote2_single_text_window_g1_ParamLimits

0xd094,	// (0x00047c05) popup_snote2_single_text_window_g1

0xd0bc,	// (0x00047c2d) popup_snote2_single_text_window_t1_ParamLimits

0xd0bc,	// (0x00047c2d) popup_snote2_single_text_window_t1

0xd108,	// (0x00047c79) popup_snote2_single_text_window_t2_ParamLimits

0xd108,	// (0x00047c79) popup_snote2_single_text_window_t2

0xd154,	// (0x00047cc5) popup_snote2_single_text_window_t3_ParamLimits

0xd154,	// (0x00047cc5) popup_snote2_single_text_window_t3

0xd195,	// (0x00047d06) popup_snote2_single_text_window_t4_ParamLimits

0xd195,	// (0x00047d06) popup_snote2_single_text_window_t4

0xd1cb,	// (0x00047d3c) popup_snote2_single_text_window_t5_ParamLimits

0xd1cb,	// (0x00047d3c) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0004a7f9) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0004a7f9) popup_snote2_single_text_window_t

0xd1f6,	// (0x00047d67) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1f6,	// (0x00047d67) popup_snote2_single_graphic_window_g1

0xd21e,	// (0x00047d8f) popup_snote2_single_graphic_window_g2_ParamLimits

0xd21e,	// (0x00047d8f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0004a804) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0004a804) popup_snote2_single_graphic_window_g

0xd246,	// (0x00047db7) popup_snote2_single_graphic_window_t1_ParamLimits

0xd246,	// (0x00047db7) popup_snote2_single_graphic_window_t1

0xd292,	// (0x00047e03) popup_snote2_single_graphic_window_t2_ParamLimits

0xd292,	// (0x00047e03) popup_snote2_single_graphic_window_t2

0xd154,	// (0x00047cc5) popup_snote2_single_graphic_window_t3_ParamLimits

0xd154,	// (0x00047cc5) popup_snote2_single_graphic_window_t3

0xd195,	// (0x00047d06) popup_snote2_single_graphic_window_t4_ParamLimits

0xd195,	// (0x00047d06) popup_snote2_single_graphic_window_t4

0xd1cb,	// (0x00047d3c) popup_snote2_single_graphic_window_t5_ParamLimits

0xd1cb,	// (0x00047d3c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0004a809) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0004a809) popup_snote2_single_graphic_window_t

0xbcc5,	// (0x00046836) clock_nsta_pane_cp2_t1

0xbcc5,	// (0x00046836) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0004a629) clock_nsta_pane_cp2_t

0x4d53,	// (0x0003f8c4) form_field_data_wide_pane_g1_ParamLimits

0x8732,	// (0x000432a3) form_field_data_wide_pane_g2_ParamLimits

0x8732,	// (0x000432a3) form_field_data_wide_pane_g2

0x87a5,	// (0x00043316) form_field_data_wide_pane_g3_ParamLimits

0x87a5,	// (0x00043316) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004a1f1) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004a1f1) form_field_data_wide_pane_g

0xbbc7,	// (0x00046738) grid_touch_3_pane_ParamLimits

0xbbc7,	// (0x00046738) grid_touch_3_pane

0xd2de,	// (0x00047e4f) cell_touch_3_pane_ParamLimits

0xd2de,	// (0x00047e4f) cell_touch_3_pane

0xc213,	// (0x00046d84) cell_touch_3_pane_g1

0xc213,	// (0x00046d84) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0004a6ae) cell_touch_3_pane_g

0x825b,	// (0x00042dcc) cont_query_data_pane

0x8263,	// (0x00042dd4) cont_query_data_pane_cp1

0xd30c,	// (0x00047e7d) button_value_adjust_pane_cp7

0xd314,	// (0x00047e85) query_popup_pane_cp3

0x8efd,	// (0x00043a6e) bg_popup_sub_pane_cp22_ParamLimits

0x5efe,	// (0x00040a6f) navi_navi_volume_pane_cp2

0x5f19,	// (0x00040a8a) popup_side_volume_key_window_g2

0x5f28,	// (0x00040a99) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004a287) popup_side_volume_key_window_g

0x5f45,	// (0x00040ab6) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004a28e) popup_side_volume_key_window_t

0x91b4,	// (0x00043d25) popup_side_volume_key_window_ParamLimits

0x499b,	// (0x0003f50c) list_double_graphic_pane_g4_ParamLimits

0x499b,	// (0x0003f50c) list_double_graphic_pane_g4

0x6c64,	// (0x000417d5) list_single_2heading_msg_pane_ParamLimits

0x6c64,	// (0x000417d5) list_single_2heading_msg_pane

0x71de,	// (0x00041d4f) list_single_2heading_msg_pane_g1_ParamLimits

0x71de,	// (0x00041d4f) list_single_2heading_msg_pane_g1

0x9359,	// (0x00043eca) list_single_2heading_msg_pane_g2_ParamLimits

0x9359,	// (0x00043eca) list_single_2heading_msg_pane_g2

0x6d6b,	// (0x000418dc) list_single_2heading_msg_pane_g3_ParamLimits

0x6d6b,	// (0x000418dc) list_single_2heading_msg_pane_g3

0x71ea,	// (0x00041d5b) list_single_2heading_msg_pane_g4_ParamLimits

0x71ea,	// (0x00041d5b) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0004a814) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0004a814) list_single_2heading_msg_pane_g

0x5690,	// (0x00040201) list_single_2heading_msg_pane_t1_ParamLimits

0x5690,	// (0x00040201) list_single_2heading_msg_pane_t1

0x56b8,	// (0x00040229) list_single_2heading_msg_pane_t2_ParamLimits

0x56b8,	// (0x00040229) list_single_2heading_msg_pane_t2

0x56ec,	// (0x0004025d) list_single_2heading_msg_pane_t3_ParamLimits

0x56ec,	// (0x0004025d) list_single_2heading_msg_pane_t3

0x5725,	// (0x00040296) list_single_2heading_msg_pane_t4_ParamLimits

0x5725,	// (0x00040296) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0004a81d) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0004a81d) list_single_2heading_msg_pane_t

0x7e4a,	// (0x000429bb) title_pane_g4_ParamLimits

0x7e4a,	// (0x000429bb) title_pane_g4

0x5d0d,	// (0x0004087e) title_pane_stacon_g3_ParamLimits

0x5d0d,	// (0x0004087e) title_pane_stacon_g3

0xce3a,	// (0x000479ab) list_single_2graphic_im_pane_g4_ParamLimits

0xce3a,	// (0x000479ab) list_single_2graphic_im_pane_g4

0xad5a,	// (0x000458cb) popup_side_volume_key_window_cp

0xb515,	// (0x00046086) main_idle_act2_pane_t1

0x68cc,	// (0x0004143d) toolbar_button_pane_g10

0x86f4,	// (0x00043265) popup_toolbar_window_cp1

0xbcb6,	// (0x00046827) clock_nsta_pane_cp_t1

0xbcb6,	// (0x00046827) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0004a624) clock_nsta_pane_cp_t

0x5efe,	// (0x00040a6f) navi_navi_volume_pane_cp2_ParamLimits

0x5f0d,	// (0x00040a7e) popup_side_volume_key_window_g1_ParamLimits

0x5f19,	// (0x00040a8a) popup_side_volume_key_window_g2_ParamLimits

0x5f28,	// (0x00040a99) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004a287) popup_side_volume_key_window_g_ParamLimits

0x6dff,	// (0x00041970) fep_hwr_aid_pane

0x2d83,	// (0x0003d8f4) bg_fep_hwr_top_pane_g4_ParamLimits

0xc26f,	// (0x00046de0) fep_hwr_top_pane_g1_ParamLimits

0xc281,	// (0x00046df2) fep_hwr_top_pane_g2_ParamLimits

0x6eb8,	// (0x00041a29) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0004a679) fep_hwr_top_pane_g_ParamLimits

0x6ecd,	// (0x00041a3e) fep_hwr_top_text_pane_ParamLimits

0xab1d,	// (0x0004568e) aid_touch_tab_arrow_arrow_2

0xab26,	// (0x00045697) aid_touch_tab_arrow_left_2

0x6e13,	// (0x00041984) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6e4a,	// (0x000419bb) fep_hwr_prediction_pane

0xc3e1,	// (0x00046f52) fep_vkb_prediction_pane

0xc4e5,	// (0x00047056) fep_vkb_side_pane_g3_ParamLimits

0xc4e5,	// (0x00047056) fep_vkb_side_pane_g3

0xc491,	// (0x00047002) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc91d,	// (0x0004748e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc92a,	// (0x0004749b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x0004a723) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd339,	// (0x00047eaa) fep_hwr_prediction_pane_g1

0x7202,	// (0x00041d73) fep_hwr_prediction_pane_g2

0x720a,	// (0x00041d7b) fep_hwr_prediction_pane_g3

0x7212,	// (0x00041d83) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0004a826) fep_hwr_prediction_pane_g

0xd339,	// (0x00047eaa) fep_vkb_prediction_pane_g1

0xd343,	// (0x00047eb4) fep_vkb_prediction_pane_g2

0xd34b,	// (0x00047ebc) fep_vkb_prediction_pane_g3

0xd353,	// (0x00047ec4) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0004a82f) fep_vkb_prediction_pane_g

0x6bb4,	// (0x00041725) slider_set_pane_g3

0x6bc8,	// (0x00041739) slider_set_pane_g4

0x6be0,	// (0x00041751) slider_set_pane_g5

0x6bb4,	// (0x00041725) slider_set_pane_g6

0x6bf6,	// (0x00041767) slider_set_pane_g7

0xb1af,	// (0x00045d20) slider_form_pane_g3

0xb1b8,	// (0x00045d29) slider_form_pane_g4

0xb1c0,	// (0x00045d31) slider_form_pane_g5

0xb1af,	// (0x00045d20) slider_form_pane_g6

0xb1c8,	// (0x00045d39) slider_form_pane_g7

0xb7bf,	// (0x00046330) slider_set_pane_vc_g3

0xb7c8,	// (0x00046339) slider_set_pane_vc_g4

0xb7d1,	// (0x00046342) slider_set_pane_vc_g5

0xb7bf,	// (0x00046330) slider_set_pane_vc_g6

0xb7da,	// (0x0004634b) slider_set_pane_vc_g7

0xb99a,	// (0x0004650b) slider_form_pane_vc_g1

0xb9a3,	// (0x00046514) slider_form_pane_vc_g2

0xb9ac,	// (0x0004651d) slider_form_pane_vc_g3

0xb99a,	// (0x0004650b) slider_form_pane_vc_g4

0xb9b5,	// (0x00046526) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0004a5f6) slider_form_pane_vc_g

0x7e02,	// (0x00042973) main_idle_act3_pane

0xd35b,	// (0x00047ecc) ai3_links_pane

0xd364,	// (0x00047ed5) popup_ai3_data_window_ParamLimits

0xd364,	// (0x00047ed5) popup_ai3_data_window

0x7e02,	// (0x00042973) grid_ai3_links_pane

0xd37e,	// (0x00047eef) cell_ai3_links_pane_ParamLimits

0xd37e,	// (0x00047eef) cell_ai3_links_pane

0xd396,	// (0x00047f07) bg_popup_sub_pane_cp11

0xd3a3,	// (0x00047f14) cell_ai3_links_pane_g1

0x7e02,	// (0x00042973) bg_popup_sub_pane_cp12

0xd3c8,	// (0x00047f39) heading_ai3_data_pane

0xd3d0,	// (0x00047f41) list_ai3_gene_pane

0xd3dc,	// (0x00047f4d) popup_ai3_data_window_g1

0xd3e4,	// (0x00047f55) heading_ai3_data_pane_g1

0xd3ec,	// (0x00047f5d) heading_ai3_data_pane_t1

0xd3fa,	// (0x00047f6b) list_double_ai3_gene_pane_ParamLimits

0xd3fa,	// (0x00047f6b) list_double_ai3_gene_pane

0xd407,	// (0x00047f78) list_single_ai3_gene_pane_ParamLimits

0xd407,	// (0x00047f78) list_single_ai3_gene_pane

0xc1d8,	// (0x00046d49) list_highlight_pane_cp7_ParamLimits

0xc1d8,	// (0x00046d49) list_highlight_pane_cp7

0xd414,	// (0x00047f85) list_single_a13_gene_pane_t1_ParamLimits

0xd414,	// (0x00047f85) list_single_a13_gene_pane_t1

0xd42b,	// (0x00047f9c) list_single_ai3_gene_pane_g1

0xd434,	// (0x00047fa5) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0004a838) list_single_ai3_gene_pane_g

0xd43c,	// (0x00047fad) list_double_ai3_gene_pane_g1_ParamLimits

0xd43c,	// (0x00047fad) list_double_ai3_gene_pane_g1

0xd448,	// (0x00047fb9) list_double_ai3_gene_pane_t1_ParamLimits

0xd448,	// (0x00047fb9) list_double_ai3_gene_pane_t1

0xd464,	// (0x00047fd5) list_double_ai3_gene_pane_t2_ParamLimits

0xd464,	// (0x00047fd5) list_double_ai3_gene_pane_t2

0xd47a,	// (0x00047feb) list_double_ai3_gene_pane_t3_ParamLimits

0xd47a,	// (0x00047feb) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a83d) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a83d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5686,	// (0x000401f7) aid_size_min_col_2

0xd325,	// (0x00047e96) aid_size_min_msg_ParamLimits

0xd325,	// (0x00047e96) aid_size_min_msg

0xc5e5,	// (0x00047156) fep_vkb_top_text_pane_g2_ParamLimits

0xc5e5,	// (0x00047156) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0004a6a9) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0004a6a9) fep_vkb_top_text_pane_g

0x7e02,	// (0x00042973) main_hc_apps_shell_pane

0xd497,	// (0x00048008) grid_hc_apps_pane_ParamLimits

0xd497,	// (0x00048008) grid_hc_apps_pane

0xd4a6,	// (0x00048017) list_hc_apps_pane

0xd4ae,	// (0x0004801f) scroll_pane_cp37_ParamLimits

0xd4ae,	// (0x0004801f) scroll_pane_cp37

0xd4ba,	// (0x0004802b) cell_hc_apps_pane_ParamLimits

0xd4ba,	// (0x0004802b) cell_hc_apps_pane

0xd568,	// (0x000480d9) cell_hc_apps_pane_g1_ParamLimits

0xd568,	// (0x000480d9) cell_hc_apps_pane_g1

0xd599,	// (0x0004810a) cell_hc_apps_pane_g2_ParamLimits

0xd599,	// (0x0004810a) cell_hc_apps_pane_g2

0xd5b5,	// (0x00048126) cell_hc_apps_pane_g3_ParamLimits

0xd5b5,	// (0x00048126) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a844) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a844) cell_hc_apps_pane_g

0xd5d7,	// (0x00048148) cell_hc_apps_pane_t1_ParamLimits

0xd5d7,	// (0x00048148) cell_hc_apps_pane_t1

0x817f,	// (0x00042cf0) grid_highlight_pane_cp10_ParamLimits

0x817f,	// (0x00042cf0) grid_highlight_pane_cp10

0xd617,	// (0x00048188) list_single_hc_apps_pane_ParamLimits

0xd617,	// (0x00048188) list_single_hc_apps_pane

0xd673,	// (0x000481e4) list_single_hc_apps_pane_g1

0x721a,	// (0x00041d8b) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a84b) list_single_hc_apps_pane_g

0x7233,	// (0x00041da4) list_single_hc_apps_pane_g2_copy1

0x574a,	// (0x000402bb) list_single_hc_apps_pane_t1

0x7ef6,	// (0x00042a67) bg_set_opt_pane_cp_ParamLimits

0x5b89,	// (0x000406fa) setting_slider_pane_t1_ParamLimits

0x5ba2,	// (0x00040713) setting_slider_pane_t2_ParamLimits

0x5bbc,	// (0x0004072d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004a0cf) setting_slider_pane_t_ParamLimits

0x5bd4,	// (0x00040745) slider_set_pane_ParamLimits

0x61c3,	// (0x00040d34) control_pane_g5_ParamLimits

0x61c3,	// (0x00040d34) control_pane_g5

0xaffe,	// (0x00045b6f) slider_set_pane_g1_ParamLimits

0x6ba8,	// (0x00041719) slider_set_pane_g2_ParamLimits

0x6bb4,	// (0x00041725) slider_set_pane_g3_ParamLimits

0x6bc8,	// (0x00041739) slider_set_pane_g4_ParamLimits

0x6be0,	// (0x00041751) slider_set_pane_g5_ParamLimits

0x6bb4,	// (0x00041725) slider_set_pane_g6_ParamLimits

0x6bf6,	// (0x00041767) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0004a4da) slider_set_pane_g_ParamLimits

0x92a0,	// (0x00043e11) navi_icon_text_pane_ParamLimits

0x9796,	// (0x00044307) aid_fill_nsta_2_ParamLimits

0x97d5,	// (0x00044346) aid_touch_tab_arrow_left_ParamLimits

0x97e4,	// (0x00044355) aid_touch_tab_arrow_right_ParamLimits

0x9851,	// (0x000443c2) clock_nsta_pane_ParamLimits

0xaaff,	// (0x00045670) navi_icon_pane_g1_ParamLimits

0xab0b,	// (0x0004567c) navi_text_pane_t1_ParamLimits

0xbdc2,	// (0x00046933) navi_icon_text_pane_g1_ParamLimits

0xbdce,	// (0x0004693f) navi_icon_text_pane_t1_ParamLimits

0xd673,	// (0x000481e4) list_single_hc_apps_pane_g1_ParamLimits

0x721a,	// (0x00041d8b) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a84b) list_single_hc_apps_pane_g_ParamLimits

0x7233,	// (0x00041da4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x574a,	// (0x000402bb) list_single_hc_apps_pane_t1_ParamLimits

0x5a93,	// (0x00040604) popup_toolbar2_fixed_window_ParamLimits

0x5a93,	// (0x00040604) popup_toolbar2_fixed_window

0x67c4,	// (0x00041335) popup_toolbar2_float_window

0x7e02,	// (0x00042973) bg_popup_sub_pane_cp27

0xd68c,	// (0x000481fd) grid_toolbar2_float_pane

0x7e02,	// (0x00042973) bg_popup_sub_pane_cp26

0xd68c,	// (0x000481fd) grid_toolbar2_fixed_pane

0xd694,	// (0x00048205) cell_toolbar2_fixed_pane_ParamLimits

0xd694,	// (0x00048205) cell_toolbar2_fixed_pane

0xd6a4,	// (0x00048215) cell_toolbar2_fixed_pane_g1

0xd6ad,	// (0x0004821e) toolbar2_fixed_button_pane

0x9c68,	// (0x000447d9) toolbar2_fixed_button_pane_g1

0x9c70,	// (0x000447e1) toolbar2_fixed_button_pane_g2

0x9c78,	// (0x000447e9) toolbar2_fixed_button_pane_g3

0x9c80,	// (0x000447f1) toolbar2_fixed_button_pane_g4

0x9c88,	// (0x000447f9) toolbar2_fixed_button_pane_g5

0x9c90,	// (0x00044801) toolbar2_fixed_button_pane_g6

0x9c98,	// (0x00044809) toolbar2_fixed_button_pane_g7

0x9ca0,	// (0x00044811) toolbar2_fixed_button_pane_g8

0x9ca8,	// (0x00044819) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0004a3dc) toolbar2_fixed_button_pane_g

0xd6b5,	// (0x00048226) cell_toolbar2_float_pane_ParamLimits

0xd6b5,	// (0x00048226) cell_toolbar2_float_pane

0xd6c6,	// (0x00048237) cell_toolbar2_float_pane_g1

0xd6ad,	// (0x0004821e) toolbar2_fixed_button_pane_cp

0xc341,	// (0x00046eb2) fep_vkb_accented_list_pane_ParamLimits

0xc341,	// (0x00046eb2) fep_vkb_accented_list_pane

0x701b,	// (0x00041b8c) bg_popup_fep_shadow_pane_g9

0x9420,	// (0x00043f91) bg_popup_fep_shadow_pane_cp3

0x88df,	// (0x00043450) list_accented_list_pane

0xd6cf,	// (0x00048240) list_single_accented_list_pane_ParamLimits

0xd6cf,	// (0x00048240) list_single_accented_list_pane

0x9420,	// (0x00043f91) list_highlight_pane_cp10

0xd6e0,	// (0x00048251) list_single_accented_list_pane_t1

0x6714,	// (0x00041285) popup_slider_window_ParamLimits

0x6714,	// (0x00041285) popup_slider_window

0xd31c,	// (0x00047e8d) aid_indentation_list_msg

0xd7a4,	// (0x00048315) bg_popup_window_pane_cp19

0xd80c,	// (0x0004837d) popup_slider_window_g1

0xd828,	// (0x00048399) popup_slider_window_g2

0xd844,	// (0x000483b5) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a850) popup_slider_window_g

0xd8aa,	// (0x0004841b) popup_slider_window_t1

0xd91e,	// (0x0004848f) small_volume_slider_vertical_pane

0xc213,	// (0x00046d84) small_volume_slider_vertical_pane_g1

0xc213,	// (0x00046d84) small_volume_slider_vertical_pane_g2

0xd93a,	// (0x000484ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a862) small_volume_slider_vertical_pane_g

0x5855,	// (0x000403c6) area_side_right_pane_ParamLimits

0x5855,	// (0x000403c6) area_side_right_pane

0x724f,	// (0x00041dc0) aid_size_side_button_ParamLimits

0x724f,	// (0x00041dc0) aid_size_side_button

0x7263,	// (0x00041dd4) grid_sctrl_middle_pane_ParamLimits

0x7263,	// (0x00041dd4) grid_sctrl_middle_pane

0x7282,	// (0x00041df3) sctrl_sk_bottom_pane

0x7293,	// (0x00041e04) sctrl_sk_top_pane

0x72a5,	// (0x00041e16) aid_touch_sctrl_top

0x817f,	// (0x00042cf0) bg_sctrl_sk_pane_ParamLimits

0x817f,	// (0x00042cf0) bg_sctrl_sk_pane

0x72b2,	// (0x00041e23) sctrl_sk_top_pane_g1

0x72bf,	// (0x00041e30) sctrl_sk_top_pane_t1

0x72a5,	// (0x00041e16) aid_touch_sctrl_bottom

0x817f,	// (0x00042cf0) bg_sctrl_sk_pane_cp_ParamLimits

0x817f,	// (0x00042cf0) bg_sctrl_sk_pane_cp

0x72da,	// (0x00041e4b) sctrl_sk_bottom_pane_g1

0x72bf,	// (0x00041e30) sctrl_sk_bottom_pane_t1

0x72e3,	// (0x00041e54) cell_sctrl_middle_pane_ParamLimits

0x72e3,	// (0x00041e54) cell_sctrl_middle_pane

0x72fe,	// (0x00041e6f) aid_touch_sctrl_middle_ParamLimits

0x72fe,	// (0x00041e6f) aid_touch_sctrl_middle

0x8797,	// (0x00043308) bg_sctrl_middle_pane_ParamLimits

0x8797,	// (0x00043308) bg_sctrl_middle_pane

0xc491,	// (0x00047002) cell_sctrl_middle_pane_g1_ParamLimits

0xc491,	// (0x00047002) cell_sctrl_middle_pane_g1

0x7310,	// (0x00041e81) cell_sctrl_middle_pane_g2_ParamLimits

0x7310,	// (0x00041e81) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a86e) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a86e) cell_sctrl_middle_pane_g

0x9c68,	// (0x000447d9) bg_sctrl_middle_pane_g1

0x9c70,	// (0x000447e1) bg_sctrl_middle_pane_g2

0x9c78,	// (0x000447e9) bg_sctrl_middle_pane_g3

0x9c80,	// (0x000447f1) bg_sctrl_middle_pane_g4

0x9c88,	// (0x000447f9) bg_sctrl_middle_pane_g5

0x9c90,	// (0x00044801) bg_sctrl_middle_pane_g6

0x9c98,	// (0x00044809) bg_sctrl_middle_pane_g7

0x9ca0,	// (0x00044811) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a873) bg_sctrl_middle_pane_g

0x9ca8,	// (0x00044819) bg_sctrl_middle_pane_g8_copy1

0x9c68,	// (0x000447d9) bg_sctrl_sk_pane_g1

0x9c70,	// (0x000447e1) bg_sctrl_sk_pane_g2

0x9c78,	// (0x000447e9) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0004a3dc) bg_sctrl_sk_pane_g

0x86ba,	// (0x0004322b) aid_size_touch_scroll_bar

0x9c80,	// (0x000447f1) bg_sctrl_sk_pane_g4

0x9c88,	// (0x000447f9) bg_sctrl_sk_pane_g5

0x9c90,	// (0x00044801) bg_sctrl_sk_pane_g6

0x9c98,	// (0x00044809) bg_sctrl_sk_pane_g7

0x9ca0,	// (0x00044811) bg_sctrl_sk_pane_g8

0x9ca8,	// (0x00044819) bg_sctrl_sk_pane_g9

0x637d,	// (0x00040eee) popup_fep_china_hwr2_fs_candidate_window

0x6387,	// (0x00040ef8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6387,	// (0x00040ef8) popup_fep_china_hwr2_fs_control_window

0xc491,	// (0x00047002) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a869) sctrl_sk_top_pane_g

0xd943,	// (0x000484b4) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd943,	// (0x000484b4) aid_fep_china_hwr2_fs_cell

0xd955,	// (0x000484c6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd955,	// (0x000484c6) bg_popup_fep_shadow_pane_cp4

0xd96c,	// (0x000484dd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd96c,	// (0x000484dd) bg_popup_fep_shadow_pane_cp5

0xd97e,	// (0x000484ef) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd97e,	// (0x000484ef) popup_fep_china_hwr2_fs_control_bar_grid

0xd98e,	// (0x000484ff) popup_fep_china_hwr2_fs_control_funtion_grid

0xd996,	// (0x00048507) aid_fep_china_hwr2_fs_candi_cell

0x7e02,	// (0x00042973) bg_popup_fep_shadow_pane_cp6

0xd9a0,	// (0x00048511) popup_fep_china_hwr2_fs_candidate_grid

0xd9aa,	// (0x0004851b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd9aa,	// (0x0004851b) cell_fep_china_hwr2_fs_funtion_grid

0xc213,	// (0x00046d84) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd9c2,	// (0x00048533) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd9c2,	// (0x00048533) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd9d0,	// (0x00048541) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd9d0,	// (0x00048541) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a884) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a884) cell_fep_china_hwr2_fs_funtion_grid_g

0xd9e6,	// (0x00048557) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd9e6,	// (0x00048557) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd9fb,	// (0x0004856c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd9fb,	// (0x0004856c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a889) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a889) cell_fep_china_hwr2_fs_funtion_grid_t

0xda17,	// (0x00048588) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda1f,	// (0x00048590) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda27,	// (0x00048598) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a88e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda2f,	// (0x000485a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda2f,	// (0x000485a0) cell_fep_china_hwr2_fs_candidate_grid

0xda48,	// (0x000485b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda50,	// (0x000485c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc213,	// (0x00046d84) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc213,	// (0x00046d84) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0004a6ae) cell_fep_china_hwr2_fs_candidate_grid_g

0xda58,	// (0x000485c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x985e,	// (0x000443cf) clock_nsta_pane_cp_24_ParamLimits

0x985e,	// (0x000443cf) clock_nsta_pane_cp_24

0x98dc,	// (0x0004444d) indicator_nsta_pane_cp_24_ParamLimits

0x98dc,	// (0x0004444d) indicator_nsta_pane_cp_24

0xa97b,	// (0x000454ec) heading_pane_g1

0x0001,

0xf8d0,	// (0x0004a441) heading_pane_g

0xb35e,	// (0x00045ecf) grid_sct_catagory_button_pane

0xb38e,	// (0x00045eff) scroll_pane_cp5_ParamLimits

0xbe10,	// (0x00046981) button_value_adjust_pane_cp5_ParamLimits

0xbe10,	// (0x00046981) button_value_adjust_pane_cp5

0xbeef,	// (0x00046a60) form2_midp_time_pane_ParamLimits

0xda66,	// (0x000485d7) cell_sct_catagory_button_pane_ParamLimits

0xda66,	// (0x000485d7) cell_sct_catagory_button_pane

0xc1d8,	// (0x00046d49) bg_button_pane_cp01_ParamLimits

0xc1d8,	// (0x00046d49) bg_button_pane_cp01

0xc213,	// (0x00046d84) cell_sct_catagory_button_pane_g1

0x6753,	// (0x000412c4) popup_tb_extension_window

0xda78,	// (0x000485e9) aid_size_cell_ext_ParamLimits

0xda78,	// (0x000485e9) aid_size_cell_ext

0x817f,	// (0x00042cf0) bg_tb_trans_pane_cp1_ParamLimits

0x817f,	// (0x00042cf0) bg_tb_trans_pane_cp1

0xda98,	// (0x00048609) grid_tb_ext_pane_ParamLimits

0xda98,	// (0x00048609) grid_tb_ext_pane

0xdac6,	// (0x00048637) cell_tb_ext_pane_ParamLimits

0xdac6,	// (0x00048637) cell_tb_ext_pane

0xdadd,	// (0x0004864e) cell_tb_ext_pane_g1_ParamLimits

0xdadd,	// (0x0004864e) cell_tb_ext_pane_g1

0xdafa,	// (0x0004866b) cell_tb_ext_pane_t1

0x817f,	// (0x00042cf0) list_highlight_pane_cp11_ParamLimits

0x817f,	// (0x00042cf0) list_highlight_pane_cp11

0x5ab2,	// (0x00040623) popup_uni_indicator_window_ParamLimits

0x5ab2,	// (0x00040623) popup_uni_indicator_window

0x8797,	// (0x00043308) bg_popup_sub_pane_cp14

0xdb15,	// (0x00048686) list_uniindi_pane

0xdb21,	// (0x00048692) uniindi_top_pane

0x817f,	// (0x00042cf0) bg_uniindi_top_pane

0xdb40,	// (0x000486b1) uniindi_top_pane_g1

0xdb56,	// (0x000486c7) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a895) uniindi_top_pane_g

0xdb80,	// (0x000486f1) uniindi_top_pane_t1

0xdbaa,	// (0x0004871b) list_single_uniindi_pane_ParamLimits

0xdbaa,	// (0x0004871b) list_single_uniindi_pane

0xc213,	// (0x00046d84) bg_uniindi_top_pane_g1

0xdbbd,	// (0x0004872e) list_single_uniindi_pane_g1

0xdbd0,	// (0x00048741) list_single_uniindi_pane_t1

0x7e02,	// (0x00042973) control_bg_pane

0xdbf5,	// (0x00048766) bg_sctrl_sk_pane_cp1

0xdbfe,	// (0x0004876f) bg_sctrl_sk_pane_cp2

0xdc07,	// (0x00048778) control_bg_pane_g1

0xdc10,	// (0x00048781) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a89e) control_bg_pane_g

0xbc6a,	// (0x000467db) cell_indicator_nsta_pane_g1_ParamLimits

0xbc78,	// (0x000467e9) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0004a612) cell_indicator_nsta_pane_g_ParamLimits

0x54e7,	// (0x00040058) form2_midp_time_pane_t1_ParamLimits

0x84fc,	// (0x0004306d) main_idle_act4_pane_ParamLimits

0x84fc,	// (0x0004306d) main_idle_act4_pane

0x6753,	// (0x000412c4) popup_tb_extension_window_ParamLimits

0xdab6,	// (0x00048627) tb_ext_find_pane_ParamLimits

0xdab6,	// (0x00048627) tb_ext_find_pane

0xdc19,	// (0x0004878a) ai_gene_pane_1_cp1

0x9567,	// (0x000440d8) ai_gene_pane_2_cp1

0xdc21,	// (0x00048792) list_single_idle_plugin_calendar_pane

0xdc2a,	// (0x0004879b) list_single_idle_plugin_notification_pane

0xdc33,	// (0x000487a4) list_single_idle_plugin_player_pane

0xdc3c,	// (0x000487ad) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc3c,	// (0x000487ad) list_single_idle_plugin_shortcut_pane

0xdc5e,	// (0x000487cf) main_idle_act4_pane_t1

0xdc70,	// (0x000487e1) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a8a3) main_idle_act4_pane_t

0xdc82,	// (0x000487f3) middle_sk_idle_act4_pane_ParamLimits

0xdc82,	// (0x000487f3) middle_sk_idle_act4_pane

0xdc98,	// (0x00048809) popup_clock_digital_analogue_window_cp2

0xdcb2,	// (0x00048823) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb2,	// (0x00048823) shortcut_wheel_idle_act4_pane

0xc213,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g1

0xc213,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g2

0xc213,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g3

0xc213,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g4

0xc213,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g5

0xdcc6,	// (0x00048837) shortcut_wheel_idle_act4_pane_g6

0xdcce,	// (0x0004883f) shortcut_wheel_idle_act4_pane_g7

0xdcd6,	// (0x00048847) shortcut_wheel_idle_act4_pane_g8

0xdcde,	// (0x0004884f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a8a8) shortcut_wheel_idle_act4_pane_g

0xc491,	// (0x00047002) middle_sk_idle_act4_pane_g1_ParamLimits

0xc491,	// (0x00047002) middle_sk_idle_act4_pane_g1

0xdd42,	// (0x000488b3) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd42,	// (0x000488b3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0004a8cb) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0004a8cb) middle_sk_idle_act4_pane_g

0xdd4e,	// (0x000488bf) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4e,	// (0x000488bf) middle_sk_idle_act4_pane_t1

0xdd6b,	// (0x000488dc) grid_ai_shortcut_pane_ParamLimits

0xdd6b,	// (0x000488dc) grid_ai_shortcut_pane

0xdd84,	// (0x000488f5) list_highlight_pane_cp16_ParamLimits

0xdd84,	// (0x000488f5) list_highlight_pane_cp16

0xdd91,	// (0x00048902) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd91,	// (0x00048902) list_single_idle_plugin_shortcut_pane_g1

0xdd9d,	// (0x0004890e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd9d,	// (0x0004890e) list_single_idle_plugin_shortcut_pane_g2

0xddb5,	// (0x00048926) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddb5,	// (0x00048926) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0004a8d0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0004a8d0) list_single_idle_plugin_shortcut_pane_g

0xddc8,	// (0x00048939) cell_ai_shortcut_pane_ParamLimits

0xddc8,	// (0x00048939) cell_ai_shortcut_pane

0xddec,	// (0x0004895d) cell_ai_shortcut_pane_g1_ParamLimits

0xddec,	// (0x0004895d) cell_ai_shortcut_pane_g1

0xdc19,	// (0x0004878a) ai_gene_pane_1_cp2

0xde0e,	// (0x0004897f) ai_gene_pane_2_cp2

0xde16,	// (0x00048987) list_highlight_pane_cp15

0xde1f,	// (0x00048990) list_single_idle_plugin_calendar_pane_g1

0xde16,	// (0x00048987) list_highlight_pane_cp17

0xde27,	// (0x00048998) list_single_idle_plugin_calendar_pane_g1_copy1

0xde2f,	// (0x000489a0) list_single_idle_plugin_player_pane_g1

0xb5b7,	// (0x00046128) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0004a8d7) list_single_idle_plugin_player_pane_g

0xde37,	// (0x000489a8) list_single_idle_plugin_player_pane_t1

0xde45,	// (0x000489b6) list_single_idle_plugin_player_pane_t2

0xde53,	// (0x000489c4) list_single_idle_plugin_player_pane_t3

0xde61,	// (0x000489d2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0004a8dc) list_single_idle_plugin_player_pane_t

0xde6f,	// (0x000489e0) wait_bar_pane_cp15

0xde77,	// (0x000489e8) grid_ai_notification_pane

0xb5b7,	// (0x00046128) list_single_idle_plugin_notification_pane_g1

0xde80,	// (0x000489f1) cell_ai_notification_pane_ParamLimits

0xde80,	// (0x000489f1) cell_ai_notification_pane

0xde8d,	// (0x000489fe) cell_ai_notification_pane_g1

0xde95,	// (0x00048a06) cell_ai_notification_pane_t1

0xdea3,	// (0x00048a14) tb_ext_find_button_pane

0xdeab,	// (0x00048a1c) tb_ext_find_pane_g1

0xdeb3,	// (0x00048a24) tb_ext_find_pane_t1

0x8e0d,	// (0x0004397e) tb_ext_find_button_pane_g1

0xdec1,	// (0x00048a32) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0004a8e5) tb_ext_find_button_pane_g

0xdc5e,	// (0x000487cf) main_idle_act4_pane_t1_ParamLimits

0xdc70,	// (0x000487e1) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a8a3) main_idle_act4_pane_t_ParamLimits

0xdc98,	// (0x00048809) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca6,	// (0x00048817) sat_plugin_idle_act4_pane_ParamLimits

0xdca6,	// (0x00048817) sat_plugin_idle_act4_pane

0xdeca,	// (0x00048a3b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdeca,	// (0x00048a3b) sat_plugin_idle_act4_pane_t1

0xdedd,	// (0x00048a4e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdedd,	// (0x00048a4e) sat_plugin_idle_act4_pane_t2

0xdef0,	// (0x00048a61) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdef0,	// (0x00048a61) sat_plugin_idle_act4_pane_t3

0xdf03,	// (0x00048a74) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf03,	// (0x00048a74) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0004a8ea) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0004a8ea) sat_plugin_idle_act4_pane_t

0x59ed,	// (0x0004055e) popup_battery_window_ParamLimits

0x59ed,	// (0x0004055e) popup_battery_window

0x817f,	// (0x00042cf0) bg_popup_sub_pane_cp25_ParamLimits

0x817f,	// (0x00042cf0) bg_popup_sub_pane_cp25

0xdf16,	// (0x00048a87) popup_battery_window_g1_ParamLimits

0xdf16,	// (0x00048a87) popup_battery_window_g1

0xdf22,	// (0x00048a93) popup_battery_window_t1_ParamLimits

0xdf22,	// (0x00048a93) popup_battery_window_t1

0xdf34,	// (0x00048aa5) popup_battery_window_t2_ParamLimits

0xdf34,	// (0x00048aa5) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0004a8f3) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0004a8f3) popup_battery_window_t

0x9434,	// (0x00043fa5) midp_canvas_pane_ParamLimits

0x94ab,	// (0x0004401c) midp_keypad_pane_ParamLimits

0x94ab,	// (0x0004401c) midp_keypad_pane

0x9744,	// (0x000442b5) main_midp_pane_ParamLimits

0xbcd4,	// (0x00046845) signal_pane_g2_cp_ParamLimits

0xdf51,	// (0x00048ac2) aid_size_cell_midp_keypad_ParamLimits

0xdf51,	// (0x00048ac2) aid_size_cell_midp_keypad

0xdf6b,	// (0x00048adc) midp_keyp_game_grid_pane_ParamLimits

0xdf6b,	// (0x00048adc) midp_keyp_game_grid_pane

0xdf8b,	// (0x00048afc) midp_keyp_rocker_pane_ParamLimits

0xdf8b,	// (0x00048afc) midp_keyp_rocker_pane

0xdfc4,	// (0x00048b35) midp_keyp_sk_left_pane_ParamLimits

0xdfc4,	// (0x00048b35) midp_keyp_sk_left_pane

0xe01e,	// (0x00048b8f) midp_keyp_sk_right_pane_ParamLimits

0xe01e,	// (0x00048b8f) midp_keyp_sk_right_pane

0x7e02,	// (0x00042973) bg_button_pane_cp03

0xe078,	// (0x00048be9) midp_keyp_sk_left_pane_g1

0x7e02,	// (0x00042973) bg_button_pane_cp04

0xe078,	// (0x00048be9) midp_keyp_sk_right_pane_g1

0xc213,	// (0x00046d84) midp_keyp_rocker_pane_g1

0xe081,	// (0x00048bf2) keyp_game_cell_pane_ParamLimits

0xe081,	// (0x00048bf2) keyp_game_cell_pane

0x7e02,	// (0x00042973) bg_button_pane_cp02

0xe094,	// (0x00048c05) keyp_game_cell_pane_g1

0x5a31,	// (0x000405a2) popup_fep_vkb2_window_ParamLimits

0x5a31,	// (0x000405a2) popup_fep_vkb2_window

0x732e,	// (0x00041e9f) aid_size_cell_vkb2_ParamLimits

0x732e,	// (0x00041e9f) aid_size_cell_vkb2

0x7382,	// (0x00041ef3) popup_fep_vkb2_window_g1_ParamLimits

0x7382,	// (0x00041ef3) popup_fep_vkb2_window_g1

0x73ca,	// (0x00041f3b) vkb2_area_bottom_pane_ParamLimits

0x73ca,	// (0x00041f3b) vkb2_area_bottom_pane

0x7416,	// (0x00041f87) vkb2_area_keypad_pane_ParamLimits

0x7416,	// (0x00041f87) vkb2_area_keypad_pane

0x7458,	// (0x00041fc9) vkb2_area_top_pane_ParamLimits

0x7458,	// (0x00041fc9) vkb2_area_top_pane

0x74d2,	// (0x00042043) vkb2_top_entry_pane_ParamLimits

0x74d2,	// (0x00042043) vkb2_top_entry_pane

0x74fc,	// (0x0004206d) vkb2_top_grid_left_pane_ParamLimits

0x74fc,	// (0x0004206d) vkb2_top_grid_left_pane

0x751a,	// (0x0004208b) vkb2_top_grid_right_pane_ParamLimits

0x751a,	// (0x0004208b) vkb2_top_grid_right_pane

0x7538,	// (0x000420a9) vkb2_cell_keypad_pane_ParamLimits

0x7538,	// (0x000420a9) vkb2_cell_keypad_pane

0x7609,	// (0x0004217a) vkb2_area_bottom_grid_pane_ParamLimits

0x7609,	// (0x0004217a) vkb2_area_bottom_grid_pane

0x762f,	// (0x000421a0) vkb2_area_bottom_pane_g1_ParamLimits

0x762f,	// (0x000421a0) vkb2_area_bottom_pane_g1

0x7653,	// (0x000421c4) vkb2_area_bottom_pane_g2_ParamLimits

0x7653,	// (0x000421c4) vkb2_area_bottom_pane_g2

0x7681,	// (0x000421f2) vkb2_area_bottom_pane_g3_ParamLimits

0x7681,	// (0x000421f2) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0004a8f8) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0004a8f8) vkb2_area_bottom_pane_g

0x76e2,	// (0x00042253) vkb2_top_cell_left_pane_ParamLimits

0x76e2,	// (0x00042253) vkb2_top_cell_left_pane

0xe0a5,	// (0x00048c16) vkb2_top_entry_pane_g1_ParamLimits

0xe0a5,	// (0x00048c16) vkb2_top_entry_pane_g1

0xe0b3,	// (0x00048c24) vkb2_top_entry_pane_t1_ParamLimits

0xe0b3,	// (0x00048c24) vkb2_top_entry_pane_t1

0xe0e5,	// (0x00048c56) vkb2_top_entry_pane_t2_ParamLimits

0xe0e5,	// (0x00048c56) vkb2_top_entry_pane_t2

0xe117,	// (0x00048c88) vkb2_top_entry_pane_t3_ParamLimits

0xe117,	// (0x00048c88) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0004a8ff) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0004a8ff) vkb2_top_entry_pane_t

0x772f,	// (0x000422a0) vkb2_top_grid_right_pane_g1_ParamLimits

0x772f,	// (0x000422a0) vkb2_top_grid_right_pane_g1

0x7745,	// (0x000422b6) vkb2_top_grid_right_pane_g2_ParamLimits

0x7745,	// (0x000422b6) vkb2_top_grid_right_pane_g2

0x775d,	// (0x000422ce) vkb2_top_grid_right_pane_g3_ParamLimits

0x775d,	// (0x000422ce) vkb2_top_grid_right_pane_g3

0x7775,	// (0x000422e6) vkb2_top_grid_right_pane_g4_ParamLimits

0x7775,	// (0x000422e6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0004a906) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0004a906) vkb2_top_grid_right_pane_g

0x778b,	// (0x000422fc) vkb2_top_cell_left_pane_g1

0x77a2,	// (0x00042313) vkb2_cell_keypad_pane_g1_ParamLimits

0x77a2,	// (0x00042313) vkb2_cell_keypad_pane_g1

0xe13b,	// (0x00048cac) vkb2_cell_keypad_pane_t1_ParamLimits

0xe13b,	// (0x00048cac) vkb2_cell_keypad_pane_t1

0x77b0,	// (0x00042321) vkb2_cell_bottom_grid_pane_ParamLimits

0x77b0,	// (0x00042321) vkb2_cell_bottom_grid_pane

0x77e9,	// (0x0004235a) vkb2_cell_bottom_grid_pane_g1

0xdce6,	// (0x00048857) aid_call2_pane_cp02

0xdcee,	// (0x0004885f) aid_call_pane_cp02

0xdcf6,	// (0x00048867) clock_digital_number_pane_cp10

0xdcfe,	// (0x0004886f) clock_digital_number_pane_cp11

0xdd06,	// (0x00048877) clock_digital_number_pane_cp12

0xdd0e,	// (0x0004887f) clock_digital_number_pane_cp13

0xdd16,	// (0x00048887) clock_digital_separator_pane_cp10

0x8e0d,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g1

0x8e0d,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g2

0xdd1e,	// (0x0004888f) popup_clock_digital_analogue_window_cp2_g3

0x8e0d,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g4

0xdd1e,	// (0x0004888f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a8bb) popup_clock_digital_analogue_window_cp2_g

0xdd26,	// (0x00048897) popup_clock_digital_analogue_window_cp2_t1

0xdd34,	// (0x000488a5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0004a8c6) popup_clock_digital_analogue_window_cp2_t

0xc213,	// (0x00046d84) clock_digital_number_pane_cp10_g1

0xc213,	// (0x00046d84) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a6ae) clock_digital_number_pane_cp10_g

0xc213,	// (0x00046d84) clock_digital_separator_pane_cp10_g1

0xc213,	// (0x00046d84) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0004a6ae) clock_digital_separator_pane_cp10_g

0xdb62,	// (0x000486d3) uniindi_top_pane_g3

0xdb73,	// (0x000486e4) uniindi_top_pane_g4

0x75c3,	// (0x00042134) vkb2_row_keypad_pane_ParamLimits

0x75c3,	// (0x00042134) vkb2_row_keypad_pane

0x7805,	// (0x00042376) vkb2_cell_t_keypad_pane_ParamLimits

0x7805,	// (0x00042376) vkb2_cell_t_keypad_pane

0x7815,	// (0x00042386) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7815,	// (0x00042386) vkb2_cell_t_keypad_pane_cp08

0x7828,	// (0x00042399) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7828,	// (0x00042399) vkb2_cell_t_keypad_pane_cp09

0x783c,	// (0x000423ad) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x783c,	// (0x000423ad) vkb2_cell_t_keypad_pane_cp01

0x784d,	// (0x000423be) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x784d,	// (0x000423be) vkb2_cell_t_keypad_pane_cp02

0x785e,	// (0x000423cf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x785e,	// (0x000423cf) vkb2_cell_t_keypad_pane_cp03

0x786f,	// (0x000423e0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x786f,	// (0x000423e0) vkb2_cell_t_keypad_pane_cp04

0x7880,	// (0x000423f1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7880,	// (0x000423f1) vkb2_cell_t_keypad_pane_cp05

0x7891,	// (0x00042402) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7891,	// (0x00042402) vkb2_cell_t_keypad_pane_cp06

0x78a2,	// (0x00042413) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x78a2,	// (0x00042413) vkb2_cell_t_keypad_pane_cp07

0x78b3,	// (0x00042424) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x78b3,	// (0x00042424) vkb2_cell_t_keypad_pane_cp10

0xc491,	// (0x00047002) vkb2_cell_t_keypad_pane_g1

0xe152,	// (0x00048cc3) vkb2_cell_t_keypad_pane_t1

0x7e02,	// (0x00042973) popup_grid_graphic2_window

0xe164,	// (0x00048cd5) aid_size_cell_graphic2_ParamLimits

0xe164,	// (0x00048cd5) aid_size_cell_graphic2

0xe19c,	// (0x00048d0d) bg_popup_window_pane_cp21_ParamLimits

0xe19c,	// (0x00048d0d) bg_popup_window_pane_cp21

0xe1aa,	// (0x00048d1b) graphic2_pages_pane_ParamLimits

0xe1aa,	// (0x00048d1b) graphic2_pages_pane

0xe1f0,	// (0x00048d61) grid_graphic2_control_pane_ParamLimits

0xe1f0,	// (0x00048d61) grid_graphic2_control_pane

0xe22e,	// (0x00048d9f) grid_graphic2_pane_ParamLimits

0xe22e,	// (0x00048d9f) grid_graphic2_pane

0xe2a2,	// (0x00048e13) cell_graphic2_pane

0x7e02,	// (0x00042973) main_comp_mode_pane

0xd3d0,	// (0x00047f41) list_ai3_gene_pane_ParamLimits

0xd7a4,	// (0x00048315) bg_popup_window_pane_cp19_ParamLimits

0xd7b0,	// (0x00048321) bg_touch_area_indi_pane_ParamLimits

0xd7b0,	// (0x00048321) bg_touch_area_indi_pane

0xd7c6,	// (0x00048337) bg_touch_area_indi_pane_cp01_ParamLimits

0xd7c6,	// (0x00048337) bg_touch_area_indi_pane_cp01

0xd7dc,	// (0x0004834d) bg_touch_area_indi_pane_cp02_ParamLimits

0xd7dc,	// (0x0004834d) bg_touch_area_indi_pane_cp02

0xd7f2,	// (0x00048363) bg_touch_area_indi_pane_cp03_ParamLimits

0xd7f2,	// (0x00048363) bg_touch_area_indi_pane_cp03

0xd80c,	// (0x0004837d) popup_slider_window_g1_ParamLimits

0xd828,	// (0x00048399) popup_slider_window_g2_ParamLimits

0xd844,	// (0x000483b5) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a850) popup_slider_window_g_ParamLimits

0xd8aa,	// (0x0004841b) popup_slider_window_t1_ParamLimits

0xd91e,	// (0x0004848f) small_volume_slider_vertical_pane_ParamLimits

0xe2a2,	// (0x00048e13) cell_graphic2_pane_ParamLimits

0xe2f1,	// (0x00048e62) bg_button_pane_cp10_ParamLimits

0xe2f1,	// (0x00048e62) bg_button_pane_cp10

0xe304,	// (0x00048e75) bg_button_pane_cp11_ParamLimits

0xe304,	// (0x00048e75) bg_button_pane_cp11

0xe317,	// (0x00048e88) graphic2_pages_pane_g1_ParamLimits

0xe317,	// (0x00048e88) graphic2_pages_pane_g1

0xe332,	// (0x00048ea3) graphic2_pages_pane_g2_ParamLimits

0xe332,	// (0x00048ea3) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0004a914) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0004a914) graphic2_pages_pane_g

0xe34a,	// (0x00048ebb) graphic2_pages_pane_t1_ParamLimits

0xe34a,	// (0x00048ebb) graphic2_pages_pane_t1

0xe362,	// (0x00048ed3) cell_graphic2_control_pane_ParamLimits

0xe362,	// (0x00048ed3) cell_graphic2_control_pane

0xe380,	// (0x00048ef1) cell_graphic2_pane_g1_ParamLimits

0xe380,	// (0x00048ef1) cell_graphic2_pane_g1

0xe38d,	// (0x00048efe) cell_graphic2_pane_g2_ParamLimits

0xe38d,	// (0x00048efe) cell_graphic2_pane_g2

0xe39a,	// (0x00048f0b) cell_graphic2_pane_g3_ParamLimits

0xe39a,	// (0x00048f0b) cell_graphic2_pane_g3

0xe3a7,	// (0x00048f18) cell_graphic2_pane_g4_ParamLimits

0xe3a7,	// (0x00048f18) cell_graphic2_pane_g4

0xe3b4,	// (0x00048f25) cell_graphic2_pane_g5_ParamLimits

0xe3b4,	// (0x00048f25) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0004a919) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0004a919) cell_graphic2_pane_g

0xe3cf,	// (0x00048f40) cell_graphic2_pane_t1_ParamLimits

0xe3cf,	// (0x00048f40) cell_graphic2_pane_t1

0x9cdc,	// (0x0004484d) grid_highlight_pane_cp11_ParamLimits

0x9cdc,	// (0x0004484d) grid_highlight_pane_cp11

0x817f,	// (0x00042cf0) bg_button_pane_cp05

0xe406,	// (0x00048f77) cell_graphic2_control_pane_g1

0xc213,	// (0x00046d84) bg_touch_area_indi_pane_g1

0xe42e,	// (0x00048f9f) aid_cmod_rocker_key_size

0xe438,	// (0x00048fa9) aid_cmode_itu_key_size

0xe442,	// (0x00048fb3) main_cmode_video_pane

0xe44c,	// (0x00048fbd) main_comp_mode_itu_pane

0xe458,	// (0x00048fc9) main_comp_mode_rocker_pane

0xe464,	// (0x00048fd5) cell_cmode_rocker_pane_ParamLimits

0xe464,	// (0x00048fd5) cell_cmode_rocker_pane

0xe476,	// (0x00048fe7) cell_cmode_itu_pane_ParamLimits

0xe476,	// (0x00048fe7) cell_cmode_itu_pane

0x8797,	// (0x00043308) bg_button_pane_cp06_ParamLimits

0x8797,	// (0x00043308) bg_button_pane_cp06

0xc491,	// (0x00047002) cell_cmode_rocker_pane_g1_ParamLimits

0xc491,	// (0x00047002) cell_cmode_rocker_pane_g1

0xd9c2,	// (0x00048533) cell_cmode_rocker_pane_g2_ParamLimits

0xd9c2,	// (0x00048533) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0004a929) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0004a929) cell_cmode_rocker_pane_g

0x7e02,	// (0x00042973) bg_button_pane_cp07

0xe48b,	// (0x00048ffc) cell_cmode_itu_pane_g1

0xe494,	// (0x00049005) cell_cmode_itu_pane_t1

0xe4a2,	// (0x00049013) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0004a92e) cell_cmode_itu_pane_t

0xdbe5,	// (0x00048756) aid_touch_ctrl_left

0xdbed,	// (0x0004875e) aid_touch_ctrl_right

0x7e02,	// (0x00042973) compa_mode_pane

0xe4b0,	// (0x00049021) aid_cmod_rocker_key_size_cp

0xe4ba,	// (0x0004902b) aid_cmode_itu_key_size_cp

0xe4c4,	// (0x00049035) compa_mode_pane_g1

0xe4cc,	// (0x0004903d) compa_mode_pane_g2

0xe4d4,	// (0x00049045) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0004a933) compa_mode_pane_g

0xe4dc,	// (0x0004904d) main_comp_mode_itu_pane_cp

0xe4e4,	// (0x00049055) main_comp_mode_rocker_pane_cp

0xe4ec,	// (0x0004905d) cell_cmode_itu_pane_cp_ParamLimits

0xe4ec,	// (0x0004905d) cell_cmode_itu_pane_cp

0xe501,	// (0x00049072) cell_cmode_rocker_pane_cp_ParamLimits

0xe501,	// (0x00049072) cell_cmode_rocker_pane_cp

0x8797,	// (0x00043308) bg_button_pane_cp06_cp_ParamLimits

0x8797,	// (0x00043308) bg_button_pane_cp06_cp

0xc491,	// (0x00047002) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc491,	// (0x00047002) cell_cmode_rocker_pane_g1_cp

0xc213,	// (0x00046d84) cell_cmode_rocker_pane_g2_cp

0x7e02,	// (0x00042973) bg_button_pane_cp07_cp

0xb1af,	// (0x00045d20) cell_cmode_itu_pane_g1_cp

0xe513,	// (0x00049084) cell_cmode_itu_pane_t1_cp

0xe513,	// (0x00049084) cell_cmode_itu_pane_t2_cp

0xb19c,	// (0x00045d0d) settings_code_pane_cp2

0x7ef6,	// (0x00042a67) bg_popup_window_pane_cp3_ParamLimits

0x837f,	// (0x00042ef0) heading_pane_cp3_ParamLimits

0x838b,	// (0x00042efc) listscroll_popup_graphic_pane_ParamLimits

0x6dff,	// (0x00041970) fep_hwr_aid_pane_ParamLimits

0x72a5,	// (0x00041e16) aid_touch_sctrl_top_ParamLimits

0x72b2,	// (0x00041e23) sctrl_sk_top_pane_g1_ParamLimits

0xc491,	// (0x00047002) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a869) sctrl_sk_top_pane_g_ParamLimits

0x72bf,	// (0x00041e30) sctrl_sk_top_pane_t1_ParamLimits

0x72a5,	// (0x00041e16) aid_touch_sctrl_bottom_ParamLimits

0x72bf,	// (0x00041e30) sctrl_sk_bottom_pane_t1_ParamLimits

0xdb2e,	// (0x0004869f) aid_area_touch_clock

0x749a,	// (0x0004200b) aid_vkb2_area_top_pane_cell_ParamLimits

0x749a,	// (0x0004200b) aid_vkb2_area_top_pane_cell

0x75e5,	// (0x00042156) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x75e5,	// (0x00042156) aid_vkb2_area_bottom_pane_cell

0xe09d,	// (0x00048c0e) popup_char_count_window

0xe521,	// (0x00049092) popup_char_count_window_g1

0xe52a,	// (0x0004909b) popup_char_count_window_g2

0xe533,	// (0x000490a4) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0004a93a) popup_char_count_window_g

0xe53c,	// (0x000490ad) popup_char_count_window_t1

0x7360,	// (0x00041ed1) popup_fep_char_preview_window_ParamLimits

0x7360,	// (0x00041ed1) popup_fep_char_preview_window

0x74b8,	// (0x00042029) vkb2_top_candi_pane_ParamLimits

0x74b8,	// (0x00042029) vkb2_top_candi_pane

0xe54a,	// (0x000490bb) cell_vkb2_top_candi_pane_ParamLimits

0xe54a,	// (0x000490bb) cell_vkb2_top_candi_pane

0xa2fb,	// (0x00044e6c) bg_popup_fep_char_preview_window_ParamLimits

0xa2fb,	// (0x00044e6c) bg_popup_fep_char_preview_window

0x78c8,	// (0x00042439) popup_fep_char_preview_window_t1_ParamLimits

0x78c8,	// (0x00042439) popup_fep_char_preview_window_t1

0xe597,	// (0x00049108) bg_popup_fep_char_preview_window_g1

0xe59f,	// (0x00049110) bg_popup_fep_char_preview_window_g2

0xe5a7,	// (0x00049118) bg_popup_fep_char_preview_window_g3

0xe5af,	// (0x00049120) bg_popup_fep_char_preview_window_g4

0xe5b7,	// (0x00049128) bg_popup_fep_char_preview_window_g5

0x7902,	// (0x00042473) bg_popup_fep_char_preview_window_g6

0xe5bf,	// (0x00049130) bg_popup_fep_char_preview_window_g7

0xe5c7,	// (0x00049138) bg_popup_fep_char_preview_window_g8

0xe5cf,	// (0x00049140) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0004a941) bg_popup_fep_char_preview_window_g

0xc491,	// (0x00047002) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc491,	// (0x00047002) cell_vkb2_top_candi_pane_g1

0xc7b4,	// (0x00047325) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc7b4,	// (0x00047325) cell_vkb2_top_candi_pane_g2

0xc7d5,	// (0x00047346) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc7d5,	// (0x00047346) cell_vkb2_top_candi_pane_g3

0x790a,	// (0x0004247b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x790a,	// (0x0004247b) cell_vkb2_top_candi_pane_g4

0xe5d7,	// (0x00049148) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe5d7,	// (0x00049148) cell_vkb2_top_candi_pane_g5

0xd9c2,	// (0x00048533) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd9c2,	// (0x00048533) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0004a954) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0004a954) cell_vkb2_top_candi_pane_g

0x792b,	// (0x0004249c) cell_vkb2_top_candi_pane_t1

0x6b94,	// (0x00041705) aid_size_touch_slider_mark_ParamLimits

0x6b94,	// (0x00041705) aid_size_touch_slider_mark

0xe1e0,	// (0x00048d51) grid_graphic2_catg_pane_ParamLimits

0xe1e0,	// (0x00048d51) grid_graphic2_catg_pane

0xe27e,	// (0x00048def) popup_grid_graphic2_window_t1_ParamLimits

0xe27e,	// (0x00048def) popup_grid_graphic2_window_t1

0xe290,	// (0x00048e01) popup_grid_graphic2_window_t2_ParamLimits

0xe290,	// (0x00048e01) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0004a90f) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0004a90f) popup_grid_graphic2_window_t

0x817f,	// (0x00042cf0) bg_button_pane_cp05_ParamLimits

0xe406,	// (0x00048f77) cell_graphic2_control_pane_g1_ParamLimits

0xe5f8,	// (0x00049169) cell_graphic2_catg_pane_ParamLimits

0xe5f8,	// (0x00049169) cell_graphic2_catg_pane

0x7e02,	// (0x00042973) bg_button_pane_cp12

0xe60a,	// (0x0004917b) cell_graphic2_catg_pane_g1

0xdafa,	// (0x0004866b) cell_tb_ext_pane_t1_ParamLimits

0x7702,	// (0x00042273) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7702,	// (0x00042273) vkb2_top_cell_right_narrow_pane

0x771a,	// (0x0004228b) vkb2_top_cell_right_wide_pane_ParamLimits

0x771a,	// (0x0004228b) vkb2_top_cell_right_wide_pane

0x6df1,	// (0x00041962) bg_vkb2_func_pane_ParamLimits

0x6df1,	// (0x00041962) bg_vkb2_func_pane

0x778b,	// (0x000422fc) vkb2_top_cell_left_pane_g1_ParamLimits

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp03

0x77e9,	// (0x0004235a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9c70,	// (0x000447e1) bg_vkb2_func_pane_g1

0x9c78,	// (0x000447e9) bg_vkb2_func_pane_g2

0x9c88,	// (0x000447f9) bg_vkb2_func_pane_g3

0x9c80,	// (0x000447f1) bg_vkb2_func_pane_g4

0x9c90,	// (0x00044801) bg_vkb2_func_pane_g5

0x9c98,	// (0x00044809) bg_vkb2_func_pane_g6

0x9ca0,	// (0x00044811) bg_vkb2_func_pane_g7

0x9ca8,	// (0x00044819) bg_vkb2_func_pane_g8

0x9c68,	// (0x000447d9) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0004a961) bg_vkb2_func_pane_g

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp01

0x778b,	// (0x000422fc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x778b,	// (0x000422fc) vkb2_top_cell_right_wide_pane_g1

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6df1,	// (0x00041962) bg_vkb2_fuc_pane_cp02

0x77e9,	// (0x0004235a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x77e9,	// (0x0004235a) vkb2_top_cell_right_narrow_pane_g1

0xd71e,	// (0x0004828f) aid_touch_area_decrease_ParamLimits

0xd71e,	// (0x0004828f) aid_touch_area_decrease

0xd742,	// (0x000482b3) aid_touch_area_increase_ParamLimits

0xd742,	// (0x000482b3) aid_touch_area_increase

0xd75a,	// (0x000482cb) aid_touch_area_mute_ParamLimits

0xd75a,	// (0x000482cb) aid_touch_area_mute

0xd776,	// (0x000482e7) aid_touch_area_slider_ParamLimits

0xd776,	// (0x000482e7) aid_touch_area_slider

0xd860,	// (0x000483d1) popup_slider_window_g4_ParamLimits

0xd860,	// (0x000483d1) popup_slider_window_g4

0xd878,	// (0x000483e9) popup_slider_window_g5_ParamLimits

0xd878,	// (0x000483e9) popup_slider_window_g5

0xd89a,	// (0x0004840b) popup_slider_window_g6_ParamLimits

0xd89a,	// (0x0004840b) popup_slider_window_g6

0xd8d8,	// (0x00048449) popup_slider_window_t2_ParamLimits

0xd8d8,	// (0x00048449) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a85d) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a85d) popup_slider_window_t

0xd8f0,	// (0x00048461) slider_pane_ParamLimits

0xd8f0,	// (0x00048461) slider_pane

0xe613,	// (0x00049184) slider_pane_g1_ParamLimits

0xe613,	// (0x00049184) slider_pane_g1

0xe627,	// (0x00049198) slider_pane_g2_ParamLimits

0xe627,	// (0x00049198) slider_pane_g2

0xe63d,	// (0x000491ae) slider_pane_g3_ParamLimits

0xe63d,	// (0x000491ae) slider_pane_g3

0x0003,

0xfe03,	// (0x0004a974) slider_pane_g_ParamLimits

0xfe03,	// (0x0004a974) slider_pane_g

0x67af,	// (0x00041320) popup_tb_float_extension_window_ParamLimits

0x67af,	// (0x00041320) popup_tb_float_extension_window

0xe669,	// (0x000491da) aid_size_cell_tb_float_ext

0x7e02,	// (0x00042973) bg_popup_sub_window_cp28

0xe675,	// (0x000491e6) grid_tb_float_ext_pane

0xe67f,	// (0x000491f0) cell_tb_float_ext_pane_ParamLimits

0xe67f,	// (0x000491f0) cell_tb_float_ext_pane

0xe699,	// (0x0004920a) cell_tb_float_ext_pane_g1

0xe6a2,	// (0x00049213) grid_highlight_pane_cp12

0x6f32,	// (0x00041aa3) cell_last_hwr_side_pane_ParamLimits

0x6f32,	// (0x00041aa3) cell_last_hwr_side_pane

0xc213,	// (0x00046d84) cell_last_hwr_side_pane_g1

0xe6ab,	// (0x0004921c) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0004a97d) cell_last_hwr_side_pane_g

0x76b1,	// (0x00042222) vkb2_area_bottom_space_btn_pane_ParamLimits

0x76b1,	// (0x00042222) vkb2_area_bottom_space_btn_pane

0xc491,	// (0x00047002) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe152,	// (0x00048cc3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x792b,	// (0x0004249c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x794a,	// (0x000424bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x794a,	// (0x000424bb) vkb2_area_bottom_space_btn_pane_g1

0x7984,	// (0x000424f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7984,	// (0x000424f5) vkb2_area_bottom_space_btn_pane_g2

0x79ba,	// (0x0004252b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x79ba,	// (0x0004252b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0004a982) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0004a982) vkb2_area_bottom_space_btn_pane_g

0x6ea6,	// (0x00041a17) cel_fep_hwr_func_pane_ParamLimits

0x6ea6,	// (0x00041a17) cel_fep_hwr_func_pane

0x6ee2,	// (0x00041a53) cell_hwr_side_button_pane_ParamLimits

0x6ee2,	// (0x00041a53) cell_hwr_side_button_pane

0xdb2e,	// (0x0004869f) aid_area_touch_clock_ParamLimits

0x817f,	// (0x00042cf0) bg_uniindi_top_pane_ParamLimits

0xdb40,	// (0x000486b1) uniindi_top_pane_g1_ParamLimits

0xdb56,	// (0x000486c7) uniindi_top_pane_g2_ParamLimits

0xdb62,	// (0x000486d3) uniindi_top_pane_g3_ParamLimits

0xdb73,	// (0x000486e4) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a895) uniindi_top_pane_g_ParamLimits

0xdb80,	// (0x000486f1) uniindi_top_pane_t1_ParamLimits

0x817f,	// (0x00042cf0) bg_vkb2_func_pane_cp01_ParamLimits

0x817f,	// (0x00042cf0) bg_vkb2_func_pane_cp01

0xe6b4,	// (0x00049225) cel_fep_hwr_func_pane_g1_ParamLimits

0xe6b4,	// (0x00049225) cel_fep_hwr_func_pane_g1

0x817f,	// (0x00042cf0) bg_vkb2_func_pane_cp02_ParamLimits

0x817f,	// (0x00042cf0) bg_vkb2_func_pane_cp02

0xe6b4,	// (0x00049225) cell_hwr_side_button_pane_g1_ParamLimits

0xe6b4,	// (0x00049225) cell_hwr_side_button_pane_g1

0x9ae9,	// (0x0004465a) status_pane_g4_ParamLimits

0x9ae9,	// (0x0004465a) status_pane_g4

0x9b03,	// (0x00044674) status_pane_t1

0xbf58,	// (0x00046ac9) form2_midp_gauge_slider_cont_pane

0xbf60,	// (0x00046ad1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbf72,	// (0x00046ae3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbf84,	// (0x00046af5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0004a661) form2_midp_gauge_slider_pane_t_ParamLimits

0xbf96,	// (0x00046b07) form2_midp_slider_pane_ParamLimits

0x7320,	// (0x00041e91) aid_size_cell_func_vkb2_ParamLimits

0x7320,	// (0x00041e91) aid_size_cell_func_vkb2

0xe655,	// (0x000491c6) slider_pane_g4_ParamLimits

0xe655,	// (0x000491c6) slider_pane_g4

0x7a04,	// (0x00042575) form2_midp_gauge_slider_pane_t2_cp01

0x7a12,	// (0x00042583) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7a12,	// (0x00042583) form2_midp_gauge_slider_pane_t3_cp01

0x7a2f,	// (0x000425a0) form2_midp_slider_pane_cp01

0x7e02,	// (0x00042973) navi_smil_pane

0xe6ed,	// (0x0004925e) navi_smil_pane_g1

0xe6f5,	// (0x00049266) navi_smil_pane_t1

0xe6c2,	// (0x00049233) form2_midp_slider_pane_g1

0xe6cb,	// (0x0004923c) form2_midp_slider_pane_g2

0xe6d3,	// (0x00049244) form2_midp_slider_pane_g3

0xe6c2,	// (0x00049233) form2_midp_slider_pane_g4

0xe6db,	// (0x0004924c) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0004a98b) form2_midp_slider_pane_g

0x79f4,	// (0x00042565) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x79f4,	// (0x00042565) vkb2_area_bottom_space_btn_pane_g4

0x9918,	// (0x00044489) lc0_navi_pane_ParamLimits

0x9918,	// (0x00044489) lc0_navi_pane

0x998e,	// (0x000444ff) lc0_stat_indi_pane_ParamLimits

0x998e,	// (0x000444ff) lc0_stat_indi_pane

0x99a5,	// (0x00044516) ls0_title_pane_ParamLimits

0x99a5,	// (0x00044516) ls0_title_pane

0x8797,	// (0x00043308) bg_popup_sub_pane_cp14_ParamLimits

0xdb15,	// (0x00048686) list_uniindi_pane_ParamLimits

0xdb21,	// (0x00048692) uniindi_top_pane_ParamLimits

0xdbbd,	// (0x0004872e) list_single_uniindi_pane_g1_ParamLimits

0xdbd0,	// (0x00048741) list_single_uniindi_pane_t1_ParamLimits

0x7a38,	// (0x000425a9) lc0_stat_clock_pane_ParamLimits

0x7a38,	// (0x000425a9) lc0_stat_clock_pane

0xe703,	// (0x00049274) lc0_stat_indi_pane_g1_ParamLimits

0xe703,	// (0x00049274) lc0_stat_indi_pane_g1

0xe710,	// (0x00049281) lc0_stat_indi_pane_g2_ParamLimits

0xe710,	// (0x00049281) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0004a996) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0004a996) lc0_stat_indi_pane_g

0x7a45,	// (0x000425b6) lc0_uni_indicator_pane_ParamLimits

0x7a45,	// (0x000425b6) lc0_uni_indicator_pane

0xe71d,	// (0x0004928e) ls0_title_pane_g1_ParamLimits

0xe71d,	// (0x0004928e) ls0_title_pane_g1

0xe731,	// (0x000492a2) ls0_title_pane_t1_ParamLimits

0xe731,	// (0x000492a2) ls0_title_pane_t1

0x7a52,	// (0x000425c3) lc0_uni_indicator_pane_g1_ParamLimits

0x7a52,	// (0x000425c3) lc0_uni_indicator_pane_g1

0xe767,	// (0x000492d8) lc0_stat_clock_pane_t1

0x7e02,	// (0x00042973) main_ai5_pane

0xe775,	// (0x000492e6) ai5_sk_pane_ParamLimits

0xe775,	// (0x000492e6) ai5_sk_pane

0xe782,	// (0x000492f3) cell_ai5_widget_pane_ParamLimits

0xe782,	// (0x000492f3) cell_ai5_widget_pane

0xe83d,	// (0x000493ae) aid_size_cell_widget_grid

0xe853,	// (0x000493c4) bg_ai5_widget_pane_ParamLimits

0xe853,	// (0x000493c4) bg_ai5_widget_pane

0xe8cb,	// (0x0004943c) cell_ai5_widget_pane_g2

0xe8df,	// (0x00049450) cell_ai5_widget_pane_g3

0xe8f9,	// (0x0004946a) cell_ai5_widget_pane_g4

0xe909,	// (0x0004947a) cell_ai5_widget_pane_g5

0xe919,	// (0x0004948a) cell_ai5_widget_pane_g6

0xe925,	// (0x00049496) cell_ai5_widget_pane_g7

0xe96d,	// (0x000494de) cell_ai5_widget_pane_t1_ParamLimits

0xe96d,	// (0x000494de) cell_ai5_widget_pane_t1

0xe98a,	// (0x000494fb) cell_ai5_widget_pane_t2_ParamLimits

0xe98a,	// (0x000494fb) cell_ai5_widget_pane_t2

0xe9a2,	// (0x00049513) cell_ai5_widget_pane_t3_ParamLimits

0xe9a2,	// (0x00049513) cell_ai5_widget_pane_t3

0xe9ba,	// (0x0004952b) cell_ai5_widget_pane_t4_ParamLimits

0xe9ba,	// (0x0004952b) cell_ai5_widget_pane_t4

0xe9e0,	// (0x00049551) cell_ai5_widget_pane_t5_ParamLimits

0xe9e0,	// (0x00049551) cell_ai5_widget_pane_t5

0xea00,	// (0x00049571) cell_ai5_widget_pane_t6_ParamLimits

0xea00,	// (0x00049571) cell_ai5_widget_pane_t6

0xea12,	// (0x00049583) cell_ai5_widget_pane_t7_ParamLimits

0xea12,	// (0x00049583) cell_ai5_widget_pane_t7

0xea2b,	// (0x0004959c) cell_ai5_widget_pane_t8_ParamLimits

0xea2b,	// (0x0004959c) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0004a9b0) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0004a9b0) cell_ai5_widget_pane_t

0xea8a,	// (0x000495fb) grid_ai5_widget_pane

0x8797,	// (0x00043308) highlight_cell_ai5_widget_pane_ParamLimits

0x8797,	// (0x00043308) highlight_cell_ai5_widget_pane

0xeaa1,	// (0x00049612) ai5_sk_left_pane

0xeaab,	// (0x0004961c) ai5_sk_middle_pane

0xeab5,	// (0x00049626) ai5_sk_right_pane

0xeabf,	// (0x00049630) bg_ai5_widget_pane_g1_ParamLimits

0xeabf,	// (0x00049630) bg_ai5_widget_pane_g1

0xeacb,	// (0x0004963c) bg_ai5_widget_pane_g2_ParamLimits

0xeacb,	// (0x0004963c) bg_ai5_widget_pane_g2

0xead7,	// (0x00049648) bg_ai5_widget_pane_g3_ParamLimits

0xead7,	// (0x00049648) bg_ai5_widget_pane_g3

0xeae3,	// (0x00049654) bg_ai5_widget_pane_g4_ParamLimits

0xeae3,	// (0x00049654) bg_ai5_widget_pane_g4

0xeaef,	// (0x00049660) bg_ai5_widget_pane_g5_ParamLimits

0xeaef,	// (0x00049660) bg_ai5_widget_pane_g5

0xeafb,	// (0x0004966c) bg_ai5_widget_pane_g6_ParamLimits

0xeafb,	// (0x0004966c) bg_ai5_widget_pane_g6

0xeb07,	// (0x00049678) bg_ai5_widget_pane_g7_ParamLimits

0xeb07,	// (0x00049678) bg_ai5_widget_pane_g7

0xeb13,	// (0x00049684) bg_ai5_widget_pane_g8_ParamLimits

0xeb13,	// (0x00049684) bg_ai5_widget_pane_g8

0xeb1f,	// (0x00049690) bg_ai5_widget_pane_g9_ParamLimits

0xeb1f,	// (0x00049690) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0004a9c5) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0004a9c5) bg_ai5_widget_pane_g

0xeb51,	// (0x000496c2) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb51,	// (0x000496c2) cell_shortcut_ai5_widget_pane

0x9420,	// (0x00043f91) bg_cell_shortcut_ai5_widget_pane

0xeb62,	// (0x000496d3) cell_grid_ai5_widget_pane_g1

0x9420,	// (0x00043f91) highlight_cell_shortcut_ai5_widget_pane

0x9c78,	// (0x000447e9) ai5_sk_left_pane_g1

0xeb6b,	// (0x000496dc) ai5_sk_left_pane_g2

0xeb73,	// (0x000496e4) ai5_sk_left_pane_g3

0xeb7b,	// (0x000496ec) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0004a9d8) ai5_sk_left_pane_g

0xeb83,	// (0x000496f4) ai5_sk_left_pane_t1

0x9c70,	// (0x000447e1) ai5_sk_right_pane_g1

0xeb91,	// (0x00049702) ai5_sk_right_pane_g2

0xeb99,	// (0x0004970a) ai5_sk_right_pane_g3

0xeba1,	// (0x00049712) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0004a9e1) ai5_sk_right_pane_g

0xeba9,	// (0x0004971a) ai5_sk_right_pane_t1

0x9c70,	// (0x000447e1) ai5_sk_middle_pane_g1

0x9c78,	// (0x000447e9) ai5_sk_middle_pane_g2

0x9c90,	// (0x00044801) ai5_sk_middle_pane_g3

0xeb99,	// (0x0004970a) ai5_sk_middle_pane_g4

0xeb73,	// (0x000496e4) ai5_sk_middle_pane_g5

0xebb7,	// (0x00049728) ai5_sk_middle_pane_g6

0xebbf,	// (0x00049730) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0004a9ea) ai5_sk_middle_pane_g

0x97a4,	// (0x00044315) aid_touch_area_size_lc0_ParamLimits

0x97a4,	// (0x00044315) aid_touch_area_size_lc0

0x7031,	// (0x00041ba2) cell_hwr_candidate_pane_t1_ParamLimits

0x97c0,	// (0x00044331) aid_touch_navi_pane

0x9a93,	// (0x00044604) status_dt_navi_pane_ParamLimits

0x9a93,	// (0x00044604) status_dt_navi_pane

0x9aa0,	// (0x00044611) status_dt_sta_pane_ParamLimits

0x9aa0,	// (0x00044611) status_dt_sta_pane

0xebc7,	// (0x00049738) dt_sta_controll_pane

0xebd4,	// (0x00049745) dt_sta_indi_pane

0xebe5,	// (0x00049756) dt_sta_title_pane

0x817f,	// (0x00042cf0) bg_dt_sta_indi_pane_ParamLimits

0x817f,	// (0x00042cf0) bg_dt_sta_indi_pane

0xebf8,	// (0x00049769) dt_sta_battery_pane

0xec00,	// (0x00049771) dt_sta_indi_pane_g1

0xec09,	// (0x0004977a) dt_sta_indi_pane_g2

0xec12,	// (0x00049783) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0004a9f9) dt_sta_indi_pane_g

0xec1b,	// (0x0004978c) dt_sta_signal_pane

0x8797,	// (0x00043308) bg_dt_sta_title_pane_ParamLimits

0x8797,	// (0x00043308) bg_dt_sta_title_pane

0xec24,	// (0x00049795) dt_sta_title_pane_g1

0xec2c,	// (0x0004979d) dt_sta_title_pane_t1_ParamLimits

0xec2c,	// (0x0004979d) dt_sta_title_pane_t1

0x7e02,	// (0x00042973) bg_dt_sta_control_pane

0xec41,	// (0x000497b2) dt_sta_controll_pane_g1

0xec4a,	// (0x000497bb) bg_dt_sta_title_pane_g1

0xec53,	// (0x000497c4) bg_dt_sta_title_pane_g2

0xec5c,	// (0x000497cd) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0004aa00) bg_dt_sta_title_pane_g

0xc213,	// (0x00046d84) bg_dt_sta_indi_pane_g1

0xec65,	// (0x000497d6) dt_sta_signal_pane_g1

0xec6d,	// (0x000497de) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0004aa07) dt_sta_signal_pane_g

0xec75,	// (0x000497e6) dt_sta_battery_pane_g1

0xec7e,	// (0x000497ef) dt_sta_battery_pane_t1

0xc213,	// (0x00046d84) bg_dt_sta_control_pane_g1

0x8f1f,	// (0x00043a90) fep_china_uni_eep_pane

0x8f27,	// (0x00043a98) fep_china_uni_entry_pane_ParamLimits

0x8f37,	// (0x00043aa8) popup_fep_china_uni_window_g1_ParamLimits

0x8f47,	// (0x00043ab8) popup_fep_china_uni_window_g2_ParamLimits

0x8f47,	// (0x00043ab8) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004a293) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004a293) popup_fep_china_uni_window_g

0xec8d,	// (0x000497fe) fep_china_uni_eep_pane_g1

0xec95,	// (0x00049806) fep_china_uni_eep_pane_t1

0xe6e4,	// (0x00049255) aid_touch_area_size_smil_player

0x9910,	// (0x00044481) lc0_clock_pane

0x9af7,	// (0x00044668) status_pane_g5_ParamLimits

0x9af7,	// (0x00044668) status_pane_g5

0x6474,	// (0x00040fe5) popup_keymap_window

0x9ab5,	// (0x00044626) status_icon_pane

0xe8df,	// (0x00049450) cell_ai5_widget_pane_g3_ParamLimits

0xe8f9,	// (0x0004946a) cell_ai5_widget_pane_g4_ParamLimits

0xe909,	// (0x0004947a) cell_ai5_widget_pane_g5_ParamLimits

0xe931,	// (0x000494a2) cell_ai5_widget_pane_g8_ParamLimits

0xe931,	// (0x000494a2) cell_ai5_widget_pane_g8

0xe945,	// (0x000494b6) cell_ai5_widget_pane_g9_ParamLimits

0xe945,	// (0x000494b6) cell_ai5_widget_pane_g9

0xe959,	// (0x000494ca) cell_ai5_widget_pane_g10_ParamLimits

0xe959,	// (0x000494ca) cell_ai5_widget_pane_g10

0xeca4,	// (0x00049815) status_icon_pane_g1

0x7e02,	// (0x00042973) bg_popup_sub_pane_cp13

0xecac,	// (0x0004981d) popup_keymap_window_t1

0x96f5,	// (0x00044266) control_pane_g6_ParamLimits

0x96f5,	// (0x00044266) control_pane_g6

0x9702,	// (0x00044273) control_pane_g7_ParamLimits

0x9702,	// (0x00044273) control_pane_g7

0x970f,	// (0x00044280) control_pane_g8_ParamLimits

0x970f,	// (0x00044280) control_pane_g8

0xebc7,	// (0x00049738) dt_sta_controll_pane_ParamLimits

0xebd4,	// (0x00049745) dt_sta_indi_pane_ParamLimits

0xebe5,	// (0x00049756) dt_sta_title_pane_ParamLimits

0x86c3,	// (0x00043234) aid_size_touch_scroll_bar_cale

0x5a01,	// (0x00040572) popup_discreet_window_ParamLimits

0x5a01,	// (0x00040572) popup_discreet_window

0x5a89,	// (0x000405fa) popup_sk_window

0xa2fb,	// (0x00044e6c) bg_popup_sub_pane_cp28_ParamLimits

0xa2fb,	// (0x00044e6c) bg_popup_sub_pane_cp28

0xecba,	// (0x0004982b) popup_discreet_window_g1_ParamLimits

0xecba,	// (0x0004982b) popup_discreet_window_g1

0xecda,	// (0x0004984b) popup_discreet_window_t1_ParamLimits

0xecda,	// (0x0004984b) popup_discreet_window_t1

0xecf8,	// (0x00049869) popup_discreet_window_t2_ParamLimits

0xecf8,	// (0x00049869) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0004aa0c) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0004aa0c) popup_discreet_window_t

0x7a66,	// (0x000425d7) popup_sk_window_g1

0x7a70,	// (0x000425e1) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0004aa13) popup_sk_window_g

0x7a78,	// (0x000425e9) popup_sk_window_t1

0x7a86,	// (0x000425f7) popup_sk_window_t1_copy1

0xe8cb,	// (0x0004943c) cell_ai5_widget_pane_g2_ParamLimits

0xea3d,	// (0x000495ae) cell_ai5_widget_pane_t9_ParamLimits

0xea3d,	// (0x000495ae) cell_ai5_widget_pane_t9

0x7e02,	// (0x00042973) main_fep_fshwr2_pane

0x7a94,	// (0x00042605) aid_fshwr2_btn_pane

0x7aa0,	// (0x00042611) aid_fshwr2_syb_pane

0x7ab2,	// (0x00042623) aid_fshwr2_txt_pane

0x7abe,	// (0x0004262f) fshwr2_func_candi_pane

0x7ada,	// (0x0004264b) fshwr2_hwr_syb_pane

0x7af4,	// (0x00042665) fshwr2_icf_pane

0x7e02,	// (0x00042973) fshwr2_icf_bg_pane

0x7b20,	// (0x00042691) fshwr2_icf_pane_t1_ParamLimits

0x7b20,	// (0x00042691) fshwr2_icf_pane_t1

0x8e0d,	// (0x0004397e) fshwr2_func_candi_pane_g1

0xed4a,	// (0x000498bb) fshwr2_func_candi_row_pane_ParamLimits

0xed4a,	// (0x000498bb) fshwr2_func_candi_row_pane

0x7b38,	// (0x000426a9) cell_fshwr2_syb_pane_ParamLimits

0x7b38,	// (0x000426a9) cell_fshwr2_syb_pane

0xe6b4,	// (0x00049225) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe6b4,	// (0x00049225) fshwr2_hwr_syb_pane_g1

0x7e02,	// (0x00042973) bg_popup_call_pane_cp01

0x7b59,	// (0x000426ca) fshwr2_func_candi_cell_pane_ParamLimits

0x7b59,	// (0x000426ca) fshwr2_func_candi_cell_pane

0xed6f,	// (0x000498e0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed6f,	// (0x000498e0) fshwr2_func_candi_cell_bg_pane

0x7ba4,	// (0x00042715) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7ba4,	// (0x00042715) fshwr2_func_candi_cell_pane_g1

0x7bcc,	// (0x0004273d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7bcc,	// (0x0004273d) fshwr2_func_candi_cell_pane_t1

0x7e02,	// (0x00042973) bg_button_pane_cp08

0xed7b,	// (0x000498ec) cell_fshwr2_syb_bg_pane

0x7bdf,	// (0x00042750) cell_fshwr2_syb_bg_pane_g1

0x7bf3,	// (0x00042764) cell_fshwr2_syb_bg_pane_t1

0x8797,	// (0x00043308) main_tmo_pane

0xae0a,	// (0x0004597b) uni_indicator_pane_g1_ParamLimits

0xae1d,	// (0x0004598e) uni_indicator_pane_g2_ParamLimits

0xae2f,	// (0x000459a0) uni_indicator_pane_g3_ParamLimits

0xae3e,	// (0x000459af) uni_indicator_pane_g4_ParamLimits

0xae3e,	// (0x000459af) uni_indicator_pane_g4

0xae52,	// (0x000459c3) uni_indicator_pane_g5_ParamLimits

0xae52,	// (0x000459c3) uni_indicator_pane_g5

0xae52,	// (0x000459c3) uni_indicator_pane_g6_ParamLimits

0xae52,	// (0x000459c3) uni_indicator_pane_g6

0xf926,	// (0x0004a497) uni_indicator_pane_g_ParamLimits

0xd6fa,	// (0x0004826b) popup_tmo_note_window_ParamLimits

0xd6fa,	// (0x0004826b) popup_tmo_note_window

0x8797,	// (0x00043308) fshwr2_bg_pane

0x7bbd,	// (0x0004272e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7bbd,	// (0x0004272e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0004aa18) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0004aa18) fshwr2_func_candi_cell_pane_g

0xc213,	// (0x00046d84) bg_popup_window_pane_cp01

0x7c09,	// (0x0004277a) bg_popup_window_pane_g1_cp01

0xed87,	// (0x000498f8) bg_popup_window_pane_cp22_ParamLimits

0xed87,	// (0x000498f8) bg_popup_window_pane_cp22

0xed95,	// (0x00049906) listscroll_tmo_link_pane_ParamLimits

0xed95,	// (0x00049906) listscroll_tmo_link_pane

0xedd5,	// (0x00049946) popup_tmo_note_window_g1_ParamLimits

0xedd5,	// (0x00049946) popup_tmo_note_window_g1

0xede2,	// (0x00049953) tmo_note_info_pane_ParamLimits

0xede2,	// (0x00049953) tmo_note_info_pane

0xedfc,	// (0x0004996d) list_tmo_note_info_pane_g1_ParamLimits

0xedfc,	// (0x0004996d) list_tmo_note_info_pane_g1

0xee13,	// (0x00049984) list_tmo_note_info_pane_g2_ParamLimits

0xee13,	// (0x00049984) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0004aa1d) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0004aa1d) list_tmo_note_info_pane_g

0xee2f,	// (0x000499a0) list_tmo_note_info_text_pane_ParamLimits

0xee2f,	// (0x000499a0) list_tmo_note_info_text_pane

0xeeb0,	// (0x00049a21) list_tmo_link_pane

0xeebd,	// (0x00049a2e) scroll_pane_cp20

0xeeca,	// (0x00049a3b) list_single_tmo_link_pane_ParamLimits

0xeeca,	// (0x00049a3b) list_single_tmo_link_pane

0xeeda,	// (0x00049a4b) list_single_tmo_link_pane_t1

0xeee8,	// (0x00049a59) list_tmo_note_info_text_pane_t1_ParamLimits

0xeee8,	// (0x00049a59) list_tmo_note_info_text_pane_t1

0x8842,	// (0x000433b3) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8842,	// (0x000433b3) aid_size_touch_scroll_bar_cp01

0x4db6,	// (0x0003f927) aid_size_touch_slider_marker

0x5a71,	// (0x000405e2) popup_settings_window_ParamLimits

0x5a71,	// (0x000405e2) popup_settings_window

0x4f4d,	// (0x0003fabe) popup_candi_list_indi_window

0x97c0,	// (0x00044331) aid_touch_navi_pane_ParamLimits

0x7279,	// (0x00041dea) rs_clock_indi_pane

0x7282,	// (0x00041df3) sctrl_sk_bottom_pane_ParamLimits

0x7293,	// (0x00041e04) sctrl_sk_top_pane_ParamLimits

0x737a,	// (0x00041eeb) popup_fep_tooltip_window

0xe83d,	// (0x000493ae) aid_size_cell_widget_grid_ParamLimits

0xe8b6,	// (0x00049427) cell_ai5_widget_pane_g1_ParamLimits

0xe8b6,	// (0x00049427) cell_ai5_widget_pane_g1

0xe919,	// (0x0004948a) cell_ai5_widget_pane_g6_ParamLimits

0xe925,	// (0x00049496) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0004a99b) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0004a99b) cell_ai5_widget_pane_g

0xea6c,	// (0x000495dd) cell_ai5_widget_pane_t10_ParamLimits

0xea6c,	// (0x000495dd) cell_ai5_widget_pane_t10

0xea8a,	// (0x000495fb) grid_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x0004969c) cell_contacts_ai5_widget_pane_ParamLimits

0xeb2b,	// (0x0004969c) cell_contacts_ai5_widget_pane

0xed0d,	// (0x0004987e) popup_discreet_window_t3_ParamLimits

0xed0d,	// (0x0004987e) popup_discreet_window_t3

0x7b0c,	// (0x0004267d) popup_fshwr2_char_preview_window_ParamLimits

0x7b0c,	// (0x0004267d) popup_fshwr2_char_preview_window

0xee4d,	// (0x000499be) tmo_note_info_pane_t1

0xee62,	// (0x000499d3) tmo_note_info_pane_t2

0xee77,	// (0x000499e8) tmo_note_info_pane_t3

0xee8c,	// (0x000499fd) tmo_note_info_pane_t4

0xee9e,	// (0x00049a0f) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0004aa22) tmo_note_info_pane_t

0xeeb0,	// (0x00049a21) list_tmo_link_pane_ParamLimits

0xeebd,	// (0x00049a2e) scroll_pane_cp20_ParamLimits

0x7e02,	// (0x00042973) bg_popup_fep_char_preview_window_cp01

0xef01,	// (0x00049a72) popup_fshwr2_char_preview_window_t1

0xef0f,	// (0x00049a80) popup_candi_list_indi_window_g1

0xef18,	// (0x00049a89) bg_cell_contacts_ai5_widget_pane

0xef24,	// (0x00049a95) cell_contacts_ai5_widget_pane_g1

0xc8ff,	// (0x00047470) cell_contacts_ai5_widget_pane_g2

0xef39,	// (0x00049aaa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0004aa2d) cell_contacts_ai5_widget_pane_g

0xef45,	// (0x00049ab6) cell_contacts_ai5_widget_pane_t1

0x8797,	// (0x00043308) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefbc,	// (0x00049b2d) settings_container_pane

0x9420,	// (0x00043f91) listscroll_set_pane_copy1

0xb923,	// (0x00046494) scroll_pane_cp121_copy1

0xa0a0,	// (0x00044c11) set_content_pane_copy1

0xefc8,	// (0x00049b39) aid_height_set_list_copy1_ParamLimits

0xefc8,	// (0x00049b39) aid_height_set_list_copy1

0xb04a,	// (0x00045bbb) aid_size_parent_copy1_ParamLimits

0xb04a,	// (0x00045bbb) aid_size_parent_copy1

0xefd4,	// (0x00049b45) button_value_adjust_pane_cp6_copy1_ParamLimits

0xefd4,	// (0x00049b45) button_value_adjust_pane_cp6_copy1

0x9744,	// (0x000442b5) list_highlight_pane_cp2_copy1_ParamLimits

0x9744,	// (0x000442b5) list_highlight_pane_cp2_copy1

0xefe8,	// (0x00049b59) list_set_pane_copy1_ParamLimits

0xefe8,	// (0x00049b59) list_set_pane_copy1

0xef57,	// (0x00049ac8) main_pane_set_t1_copy1_ParamLimits

0xef57,	// (0x00049ac8) main_pane_set_t1_copy1

0xef91,	// (0x00049b02) main_pane_set_t2_copy1_ParamLimits

0xef91,	// (0x00049b02) main_pane_set_t2_copy1

0xf095,	// (0x00049c06) main_pane_set_t3_copy1

0xf0a3,	// (0x00049c14) main_pane_set_t4_copy1

0xefb0,	// (0x00049b21) set_content_pane_g1_copy1_ParamLimits

0xefb0,	// (0x00049b21) set_content_pane_g1_copy1

0xf0b1,	// (0x00049c22) setting_code_pane_copy1

0xf0b9,	// (0x00049c2a) setting_slider_graphic_pane_copy1

0xf0b9,	// (0x00049c2a) setting_slider_pane_copy1

0xf0b9,	// (0x00049c2a) setting_text_pane_copy1

0xf0b9,	// (0x00049c2a) setting_volume_pane_copy1

0xf0b1,	// (0x00049c22) settings_code_pane_cp2_copy1

0xf0c1,	// (0x00049c32) settings_code_pane_cp_copy1_ParamLimits

0xf0c1,	// (0x00049c32) settings_code_pane_cp_copy1

0x7c12,	// (0x00042783) volume_set_pane_copy1

0xf0d5,	// (0x00049c46) volume_set_pane_g10_copy1

0xf0dd,	// (0x00049c4e) volume_set_pane_g1_copy1

0xf0e5,	// (0x00049c56) volume_set_pane_g2_copy1

0xf0ed,	// (0x00049c5e) volume_set_pane_g3_copy1

0xf0f5,	// (0x00049c66) volume_set_pane_g4_copy1

0xf0fd,	// (0x00049c6e) volume_set_pane_g5_copy1

0xf105,	// (0x00049c76) volume_set_pane_g6_copy1

0xf10d,	// (0x00049c7e) volume_set_pane_g7_copy1

0xf115,	// (0x00049c86) volume_set_pane_g8_copy1

0xf11d,	// (0x00049c8e) volume_set_pane_g9_copy1

0x7ef6,	// (0x00042a67) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ef6,	// (0x00042a67) bg_set_opt_pane_cp_copy1

0x7c1a,	// (0x0004278b) setting_slider_pane_t1_copy1_ParamLimits

0x7c1a,	// (0x0004278b) setting_slider_pane_t1_copy1

0x7c38,	// (0x000427a9) setting_slider_pane_t2_copy1_ParamLimits

0x7c38,	// (0x000427a9) setting_slider_pane_t2_copy1

0x7c52,	// (0x000427c3) setting_slider_pane_t3_copy1_ParamLimits

0x7c52,	// (0x000427c3) setting_slider_pane_t3_copy1

0x7c6a,	// (0x000427db) slider_set_pane_copy1_ParamLimits

0x7c6a,	// (0x000427db) slider_set_pane_copy1

0x87e3,	// (0x00043354) set_opt_bg_pane_g1_copy2

0x87eb,	// (0x0004335c) set_opt_bg_pane_g2_copy2

0xf125,	// (0x00049c96) set_opt_bg_pane_g3_copy2

0x87fb,	// (0x0004336c) set_opt_bg_pane_g4_copy2

0x8803,	// (0x00043374) set_opt_bg_pane_g5_copy2

0x880b,	// (0x0004337c) set_opt_bg_pane_g6_copy2

0xf12f,	// (0x00049ca0) set_opt_bg_pane_g7_copy2

0xf137,	// (0x00049ca8) set_opt_bg_pane_g8_copy2

0xf141,	// (0x00049cb2) set_opt_bg_pane_g9_copy2

0x7c80,	// (0x000427f1) aid_size_touch_slider_mark_copy1_ParamLimits

0x7c80,	// (0x000427f1) aid_size_touch_slider_mark_copy1

0xf14b,	// (0x00049cbc) slider_set_pane_g1_copy1

0x7c94,	// (0x00042805) slider_set_pane_g2_copy1

0x6bb4,	// (0x00041725) slider_set_pane_g3_copy1_ParamLimits

0x6bb4,	// (0x00041725) slider_set_pane_g3_copy1

0x6bc8,	// (0x00041739) slider_set_pane_g4_copy1_ParamLimits

0x6bc8,	// (0x00041739) slider_set_pane_g4_copy1

0x6be0,	// (0x00041751) slider_set_pane_g5_copy1_ParamLimits

0x6be0,	// (0x00041751) slider_set_pane_g5_copy1

0x6bb4,	// (0x00041725) slider_set_pane_g6_copy1_ParamLimits

0x6bb4,	// (0x00041725) slider_set_pane_g6_copy1

0x7c9c,	// (0x0004280d) slider_set_pane_g7_copy1_ParamLimits

0x7c9c,	// (0x0004280d) slider_set_pane_g7_copy1

0x7e16,	// (0x00042987) bg_set_opt_pane_cp2_copy1

0xf154,	// (0x00049cc5) setting_slider_graphic_pane_g1_copy1

0xf15d,	// (0x00049cce) setting_slider_graphic_pane_t1_copy1

0xf16d,	// (0x00049cde) setting_slider_graphic_pane_t2_copy1

0xf17d,	// (0x00049cee) slider_set_pane_cp_copy1

0xf18d,	// (0x00049cfe) input_focus_pane_cp1_copy1

0xf196,	// (0x00049d07) list_set_text_pane_copy1

0xf19e,	// (0x00049d0f) setting_text_pane_g1_copy1

0x5778,	// (0x000402e9) set_text_pane_t1_copy1

0xf18d,	// (0x00049cfe) input_focus_pane_cp2_copy1

0xf19e,	// (0x00049d0f) setting_code_pane_g1_copy1

0xf1a7,	// (0x00049d18) setting_code_pane_t1_copy1

0xf1b5,	// (0x00049d26) list_set_graphic_pane_copy1

0x7e16,	// (0x00042987) bg_set_opt_pane_cp4_copy1

0x911b,	// (0x00043c8c) list_set_graphic_pane_g1_copy1_ParamLimits

0x911b,	// (0x00043c8c) list_set_graphic_pane_g1_copy1

0xf1c8,	// (0x00049d39) list_set_graphic_pane_g2_copy1

0x9133,	// (0x00043ca4) list_set_graphic_pane_t1_copy1_ParamLimits

0x9133,	// (0x00043ca4) list_set_graphic_pane_t1_copy1

0xc213,	// (0x00046d84) rs_clock_indi_pane_g1

0xf1d0,	// (0x00049d41) rs_clock_indi_pane_t1

0xf1de,	// (0x00049d4f) rs_indi_pane

0xf1e6,	// (0x00049d57) rs_indi_pane_g1

0xf1ef,	// (0x00049d60) rs_indi_pane_g2

0xf1f8,	// (0x00049d69) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0004aa34) rs_indi_pane_g

0x9420,	// (0x00043f91) bg_popup_preview_window_pane_cp03

0xf201,	// (0x00049d72) popup_fep_tooltip_window_t1

0xce9b,	// (0x00047a0c) popup_note2_window_g2_ParamLimits

0xce9b,	// (0x00047a0c) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0004a7cd) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0004a7cd) popup_note2_window_g

0xd396,	// (0x00047f07) bg_popup_sub_pane_cp11_ParamLimits

0xd3a3,	// (0x00047f14) cell_ai3_links_pane_g1_ParamLimits

0xd3ba,	// (0x00047f2b) cell_ai3_links_pane_t1

0x5778,	// (0x000402e9) set_text_pane_t1_copy1_ParamLimits

0x9331,	// (0x00043ea2) cell_graphic_popup_pane_cp2_ParamLimits

0x9331,	// (0x00043ea2) cell_graphic_popup_pane_cp2

0xf20f,	// (0x00049d80) cell_graphic_popup_pane_g1_cp2

0x84d6,	// (0x00043047) cell_graphic_popup_pane_g2_cp2

0xf217,	// (0x00049d88) cell_graphic_popup_pane_g3_cp2

0xf21f,	// (0x00049d90) cell_graphic_popup_pane_t2_cp2

0x84e7,	// (0x00043058) grid_highlight_pane_cp3_cp2

0x8b28,	// (0x00043699) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8797,	// (0x00043308) main_tmo_pane_ParamLimits

0xd6ee,	// (0x0004825f) popup_tmo_big_image_note_window

0xe8a5,	// (0x00049416) cell_ai5_widget_list_pane

0xe8ad,	// (0x0004941e) cell_ai5_widget_lrg_icon_pane

0xee4d,	// (0x000499be) tmo_note_info_pane_t1_ParamLimits

0xee62,	// (0x000499d3) tmo_note_info_pane_t2_ParamLimits

0xee77,	// (0x000499e8) tmo_note_info_pane_t3_ParamLimits

0xee8c,	// (0x000499fd) tmo_note_info_pane_t4_ParamLimits

0xee9e,	// (0x00049a0f) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0004aa22) tmo_note_info_pane_t_ParamLimits

0xefbc,	// (0x00049b2d) settings_container_pane_ParamLimits

0xf185,	// (0x00049cf6) indicator_popup_pane_cp5

0xf185,	// (0x00049cf6) indicator_popup_pane_cp6

0xf1b5,	// (0x00049d26) list_set_graphic_pane_copy1_ParamLimits

0x7e02,	// (0x00042973) bg_popup_window_pane_cp23

0xf22d,	// (0x00049d9e) popup_tmo_big_image_note_window_g1

0xf237,	// (0x00049da8) popup_tmo_big_image_note_window_t1

0xf247,	// (0x00049db8) popup_tmo_big_image_note_window_t2

0xf257,	// (0x00049dc8) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0004aa3b) popup_tmo_big_image_note_window_t

0xc213,	// (0x00046d84) cell_ai5_widget_lrg_icon_pane_g1

0xf267,	// (0x00049dd8) cell_ai5_widget_lrg_icon_pane_t1

0xf275,	// (0x00049de6) cell_ai5_widget_list_row_pane_ParamLimits

0xf275,	// (0x00049de6) cell_ai5_widget_list_row_pane

0xf28c,	// (0x00049dfd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf28c,	// (0x00049dfd) cell_ai5_widget_list_row_pane_g1

0xf299,	// (0x00049e0a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf299,	// (0x00049e0a) cell_ai5_widget_list_row_pane_t1

0xf2ca,	// (0x00049e3b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ca,	// (0x00049e3b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0004aa42) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0004aa42) cell_ai5_widget_list_row_pane_t

0x7e02,	// (0x00042973) main_fep_vtchi_ss_pane

0xf312,	// (0x00049e83) popup_fep_char_pre_window

0xf31a,	// (0x00049e8b) popup_fep_ituss_window

0xf346,	// (0x00049eb7) popup_fep_vkbss_window

0xf370,	// (0x00049ee1) grid_vkbss_keypad_pane_ParamLimits

0xf370,	// (0x00049ee1) grid_vkbss_keypad_pane

0xf380,	// (0x00049ef1) ituss_keypad_pane

0x7cbe,	// (0x0004282f) aid_vkbss_key_offset_ParamLimits

0x7cbe,	// (0x0004282f) aid_vkbss_key_offset

0x7cca,	// (0x0004283b) cell_vkbss_key_pane_ParamLimits

0x7cca,	// (0x0004283b) cell_vkbss_key_pane

0xf38f,	// (0x00049f00) bg_cell_vkbss_key_g1_ParamLimits

0xf38f,	// (0x00049f00) bg_cell_vkbss_key_g1

0xf39b,	// (0x00049f0c) cell_vkbss_key_3p_pane_ParamLimits

0xf39b,	// (0x00049f0c) cell_vkbss_key_3p_pane

0xf3af,	// (0x00049f20) cell_vkbss_key_g1_ParamLimits

0xf3af,	// (0x00049f20) cell_vkbss_key_g1

0xf3c3,	// (0x00049f34) cell_vkbss_key_t1_ParamLimits

0xf3c3,	// (0x00049f34) cell_vkbss_key_t1

0x7ce0,	// (0x00042851) cell_ituss_key_pane_ParamLimits

0x7ce0,	// (0x00042851) cell_ituss_key_pane

0xf3ee,	// (0x00049f5f) bg_cell_ituss_key_g1_ParamLimits

0xf3ee,	// (0x00049f5f) bg_cell_ituss_key_g1

0xf3fa,	// (0x00049f6b) cell_ituss_key_pane_g1_ParamLimits

0xf3fa,	// (0x00049f6b) cell_ituss_key_pane_g1

0x7cf1,	// (0x00042862) cell_ituss_key_pane_g2_ParamLimits

0x7cf1,	// (0x00042862) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0004aa49) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0004aa49) cell_ituss_key_pane_g

0x7d1d,	// (0x0004288e) cell_ituss_key_t1_ParamLimits

0x7d1d,	// (0x0004288e) cell_ituss_key_t1

0x7d57,	// (0x000428c8) cell_ituss_key_t2_ParamLimits

0x7d57,	// (0x000428c8) cell_ituss_key_t2

0x7d88,	// (0x000428f9) cell_ituss_key_t3_ParamLimits

0x7d88,	// (0x000428f9) cell_ituss_key_t3

0x7d57,	// (0x000428c8) cell_ituss_key_t4_ParamLimits

0x7d57,	// (0x000428c8) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0004aa50) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0004aa50) cell_ituss_key_t

0xf426,	// (0x00049f97) cell_vkbss_key_3p_pane_g1

0xf42e,	// (0x00049f9f) cell_vkbss_key_3p_pane_g2

0xf436,	// (0x00049fa7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0004aa5b) cell_vkbss_key_3p_pane_g

0x9420,	// (0x00043f91) bg_popup_fep_char_preview_window_cp02

0xf43e,	// (0x00049faf) popup_fep_char_pre_window_t1

0xe82a,	// (0x0004939b) main_ai5_sk_pane

0xef18,	// (0x00049a89) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef24,	// (0x00049a95) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc8ff,	// (0x00047470) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef39,	// (0x00049aaa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0004aa2d) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef45,	// (0x00049ab6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8797,	// (0x00043308) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf44c,	// (0x00049fbd) main_ai5_sk_pane_g1

0xa134,	// (0x00044ca5) popup_query_code_window_g1

0xf330,	// (0x00049ea1) popup_fep_vkb_icf_pane

0xf35a,	// (0x00049ecb) popup_fep_vtchi_icf_pane

0xf455,	// (0x00049fc6) bg_icf_pane

0xf461,	// (0x00049fd2) list_vkb_icf_pane

0xf470,	// (0x00049fe1) bg_icf_pane_cp01

0xf483,	// (0x00049ff4) vtchi_icf_list_pane

0xf493,	// (0x0004a004) list_vkb_icf_pane_t1_ParamLimits

0xf493,	// (0x0004a004) list_vkb_icf_pane_t1

0xf4b4,	// (0x0004a025) vtchi_icf_list_pane_t1_ParamLimits

0xf4b4,	// (0x0004a025) vtchi_icf_list_pane_t1

0xf31a,	// (0x00049e8b) popup_fep_ituss_window_ParamLimits

0xf35a,	// (0x00049ecb) popup_fep_vtchi_icf_pane_ParamLimits

0xf380,	// (0x00049ef1) ituss_keypad_pane_ParamLimits

0x7cb2,	// (0x00042823) ituss_sks_pane

0xf455,	// (0x00049fc6) bg_icf_pane_ParamLimits

0xf2f2,	// (0x00049e63) icf_edit_indi_pane_ParamLimits

0xf2f2,	// (0x00049e63) icf_edit_indi_pane

0xf461,	// (0x00049fd2) list_vkb_icf_pane_ParamLimits

0xf470,	// (0x00049fe1) bg_icf_pane_cp01_ParamLimits

0xf305,	// (0x00049e76) icf_edit_indi_pane_cp01_ParamLimits

0xf305,	// (0x00049e76) icf_edit_indi_pane_cp01

0xf48b,	// (0x00049ffc) vtchi_query_pane

0xe6b4,	// (0x00049225) icf_edit_indi_pane_g1_ParamLimits

0xe6b4,	// (0x00049225) icf_edit_indi_pane_g1

0xf525,	// (0x0004a096) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0004a096) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0004aa73) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0004aa73) icf_edit_indi_pane_g

0xf537,	// (0x0004a0a8) icf_edit_indi_pane_t1

0xf4ce,	// (0x0004a03f) bg_input_focus_pane_cp042

0x86ba,	// (0x0004322b) vtchi_button_pane

0xf4d7,	// (0x0004a048) vtchi_query_pane_t1

0xf4e5,	// (0x0004a056) vtchi_query_pane_t2

0xf4f3,	// (0x0004a064) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0004aa62) vtchi_query_pane_t

0x7e02,	// (0x00042973) bg_button_pane_cp13

0xf501,	// (0x0004a072) vtchi_button_pane_g1

0x7dcb,	// (0x0004293c) ituss_sks_pane_g1

0x7dd6,	// (0x00042947) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0004aa69) ituss_sks_pane_g

0xf509,	// (0x0004a07a) ituss_sks_pane_t1

0xf517,	// (0x0004a088) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0004aa6e) ituss_sks_pane_t

0xbc9e,	// (0x0004680f) indicator_nsta_pane_cp_g1

0xbca6,	// (0x00046817) indicator_nsta_pane_cp_g2

0xbcae,	// (0x0004681f) indicator_nsta_pane_cp_g3

0xbc9e,	// (0x0004680f) indicator_nsta_pane_cp_g4

0xbca6,	// (0x00046817) indicator_nsta_pane_cp_g5

0xbcae,	// (0x0004681f) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0004a617) indicator_nsta_pane_cp_g

0xe3f3,	// (0x00048f64) cell_graphic2_pane_t2_ParamLimits

0xe3f3,	// (0x00048f64) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0004a924) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0004a924) cell_graphic2_pane_t

0xe420,	// (0x00048f91) cell_graphic2_control_pane_t1

0x8ece,	// (0x00043a3f) signal_pane_g3_ParamLimits

0x8ece,	// (0x00043a3f) signal_pane_g3

0x8ee0,	// (0x00043a51) signal_pane_g4_ParamLimits

0x8ee0,	// (0x00043a51) signal_pane_g4

0xf2dc,	// (0x00049e4d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2dc,	// (0x00049e4d) cell_ai5_widget_list_row_pane_t3

0xf414,	// (0x00049f85) cell_ituss_key_pane_t1_ParamLimits

0xf414,	// (0x00049f85) cell_ituss_key_pane_t1

0x9d6d,	// (0x000448de) form_field_data_wide_pane_vc_t2_ParamLimits

0x9d6d,	// (0x000448de) form_field_data_wide_pane_vc_t2

0x9d81,	// (0x000448f2) form_field_data_wide_pane_vc_t3_ParamLimits

0x9d81,	// (0x000448f2) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0004a37f) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0004a37f) form_field_data_wide_pane_vc_t

0xb965,	// (0x000464d6) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb965,	// (0x000464d6) form_field_slider_wide_pane_vc_t3

0xba43,	// (0x000465b4) form_field_popup_wide_pane_vc_t2_ParamLimits

0xba43,	// (0x000465b4) form_field_popup_wide_pane_vc_t2

0xba5a,	// (0x000465cb) form_field_popup_wide_pane_vc_t3_ParamLimits

0xba5a,	// (0x000465cb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0004a606) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0004a606) form_field_popup_wide_pane_vc_t

0x7a94,	// (0x00042605) aid_fshwr2_btn_pane_ParamLimits

0x7aa0,	// (0x00042611) aid_fshwr2_syb_pane_ParamLimits

0x7ab2,	// (0x00042623) aid_fshwr2_txt_pane_ParamLimits

0x8797,	// (0x00043308) fshwr2_bg_pane_ParamLimits

0x7abe,	// (0x0004262f) fshwr2_func_candi_pane_ParamLimits

0x7ada,	// (0x0004264b) fshwr2_hwr_syb_pane_ParamLimits

0x7af4,	// (0x00042665) fshwr2_icf_pane_ParamLimits

0x6d94,	// (0x00041905) list_double_graphic_pane_vc_g4_ParamLimits

0x6d94,	// (0x00041905) list_double_graphic_pane_vc_g4

0x7d11,	// (0x00042882) cell_ituss_key_pane_g3_ParamLimits

0x7d11,	// (0x00042882) cell_ituss_key_pane_g3

0x7db9,	// (0x0004292a) cell_ituss_key_t5_ParamLimits

0x7db9,	// (0x0004292a) cell_ituss_key_t5

0xf346,	// (0x00049eb7) popup_fep_vkbss_window_ParamLimits

0xe834,	// (0x000493a5) aid_cell_ai5_quarter

0xf537,	// (0x0004a0a8) icf_edit_indi_pane_t1_ParamLimits

0x8227,	// (0x00042d98) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x8227,	// (0x00042d98) aid_tch_indicator_popup_pane_cp2

0x823a,	// (0x00042dab) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x823a,	// (0x00042dab) aid_tch_query_popup_data_pane_cp2

0xa0dc,	// (0x00044c4d) aid_tch_query_popup_pane_ParamLimits

0xa0dc,	// (0x00044c4d) aid_tch_query_popup_pane

0xa0dc,	// (0x00044c4d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xa0dc,	// (0x00044c4d) aid_tch_query_popup_data_pane_cp1

0xed7b,	// (0x000498ec) cell_fshwr2_syb_bg_pane_ParamLimits

0x7bdf,	// (0x00042750) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x7bf3,	// (0x00042764) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf330,	// (0x00049ea1) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

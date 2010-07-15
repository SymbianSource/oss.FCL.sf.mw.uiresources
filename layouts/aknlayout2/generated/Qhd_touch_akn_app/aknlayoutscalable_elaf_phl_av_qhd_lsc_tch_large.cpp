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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003f3b8 };

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
0xd06c,	// (0x0004c424) Screen

0xd078,	// (0x0004c430) application_window_ParamLimits

0xd078,	// (0x0004c430) application_window

0x35c5,	// (0x0004297d) screen_g1

0xbec7,	// (0x0004b27f) area_bottom_pane_ParamLimits

0xbec7,	// (0x0004b27f) area_bottom_pane

0x1057,	// (0x0004040f) area_top_pane_ParamLimits

0x1057,	// (0x0004040f) area_top_pane

0x10eb,	// (0x000404a3) main_pane_ParamLimits

0x10eb,	// (0x000404a3) main_pane

0x35cf,	// (0x00042987) misc_graphics

0xd7b4,	// (0x0004cb6c) battery_pane_ParamLimits

0xd7b4,	// (0x0004cb6c) battery_pane

0x5c8d,	// (0x00045045) bg_status_flat_pane_g8

0x5c95,	// (0x0004504d) bg_status_flat_pane_g9

0x506f,	// (0x00044427) context_pane_ParamLimits

0x506f,	// (0x00044427) context_pane

0xd91f,	// (0x0004ccd7) navi_pane_ParamLimits

0xd91f,	// (0x0004ccd7) navi_pane

0xd99d,	// (0x0004cd55) signal_pane_ParamLimits

0xd99d,	// (0x0004cd55) signal_pane

0x0008,

0xf879,	// (0x0004ec31) bg_status_flat_pane_g

0xda2d,	// (0x0004cde5) status_pane_g1_ParamLimits

0xda2d,	// (0x0004cde5) status_pane_g1

0xda43,	// (0x0004cdfb) status_pane_g2_ParamLimits

0xda43,	// (0x0004cdfb) status_pane_g2

0x5296,	// (0x0004464e) status_pane_g3_ParamLimits

0x5296,	// (0x0004464e) status_pane_g3

0x0004,

0xf7a5,	// (0x0004eb5d) status_pane_g_ParamLimits

0xf7a5,	// (0x0004eb5d) status_pane_g

0xda4f,	// (0x0004ce07) title_pane_ParamLimits

0xda4f,	// (0x0004ce07) title_pane

0xdab2,	// (0x0004ce6a) uni_indicator_pane_ParamLimits

0xdab2,	// (0x0004ce6a) uni_indicator_pane

0x4edd,	// (0x00044295) bg_list_pane_ParamLimits

0x4edd,	// (0x00044295) bg_list_pane

0xd727,	// (0x0004cadf) find_pane

0x5495,	// (0x0004484d) listscroll_app_pane_ParamLimits

0x5495,	// (0x0004484d) listscroll_app_pane

0x4f09,	// (0x000442c1) listscroll_form_pane

0xc282,	// (0x0004b63a) listscroll_gen_pane_ParamLimits

0xc282,	// (0x0004b63a) listscroll_gen_pane

0x1aa4,	// (0x00040e5c) listscroll_set_pane

0x6803,	// (0x00045bbb) main_idle_act_pane

0x4bd9,	// (0x00043f91) main_idle_trad_pane

0x4bd9,	// (0x00043f91) main_list_empty_pane

0x4efd,	// (0x000442b5) main_midp_pane

0x4f23,	// (0x000442db) main_pane_g1_ParamLimits

0x4f23,	// (0x000442db) main_pane_g1

0xc296,	// (0x0004b64e) popup_ai_message_window_ParamLimits

0xc296,	// (0x0004b64e) popup_ai_message_window

0xc327,	// (0x0004b6df) popup_fep_china_uni_window_ParamLimits

0xc327,	// (0x0004b6df) popup_fep_china_uni_window

0x1bae,	// (0x00040f66) popup_fep_japan_candidate_window_ParamLimits

0x1bae,	// (0x00040f66) popup_fep_japan_candidate_window

0x1bce,	// (0x00040f86) popup_fep_japan_predictive_window_ParamLimits

0x1bce,	// (0x00040f86) popup_fep_japan_predictive_window

0xc383,	// (0x0004b73b) popup_find_window

0xc3a0,	// (0x0004b758) popup_grid_graphic_window_ParamLimits

0xc3a0,	// (0x0004b758) popup_grid_graphic_window

0x1c35,	// (0x00040fed) popup_large_graphic_colour_window

0xc43e,	// (0x0004b7f6) popup_menu_window_ParamLimits

0xc43e,	// (0x0004b7f6) popup_menu_window

0xc610,	// (0x0004b9c8) popup_note_image_window

0xc5d6,	// (0x0004b98e) popup_note_wait_window_ParamLimits

0xc5d6,	// (0x0004b98e) popup_note_wait_window

0xc628,	// (0x0004b9e0) popup_note_window_ParamLimits

0xc628,	// (0x0004b9e0) popup_note_window

0xc6ce,	// (0x0004ba86) popup_query_code_window_ParamLimits

0xc6ce,	// (0x0004ba86) popup_query_code_window

0x1e7d,	// (0x00041235) popup_query_data_code_window_ParamLimits

0x1e7d,	// (0x00041235) popup_query_data_code_window

0xc708,	// (0x0004bac0) popup_query_data_window_ParamLimits

0xc708,	// (0x0004bac0) popup_query_data_window

0xc78a,	// (0x0004bb42) popup_query_sat_info_window_ParamLimits

0xc78a,	// (0x0004bb42) popup_query_sat_info_window

0xc821,	// (0x0004bbd9) popup_snote_single_graphic_window_ParamLimits

0xc821,	// (0x0004bbd9) popup_snote_single_graphic_window

0xc821,	// (0x0004bbd9) popup_snote_single_text_window_ParamLimits

0xc821,	// (0x0004bbd9) popup_snote_single_text_window

0x1f04,	// (0x000412bc) popup_sub_window_general

0x2034,	// (0x000413ec) popup_window_general_ParamLimits

0x2034,	// (0x000413ec) popup_window_general

0x4f31,	// (0x000442e9) power_save_pane

0xc107,	// (0x0004b4bf) control_pane_g1_ParamLimits

0xc107,	// (0x0004b4bf) control_pane_g1

0xc130,	// (0x0004b4e8) control_pane_g2_ParamLimits

0xc130,	// (0x0004b4e8) control_pane_g2

0x4ea0,	// (0x00044258) control_pane_g3_ParamLimits

0x4ea0,	// (0x00044258) control_pane_g3

0x0007,

0xf78d,	// (0x0004eb45) control_pane_g_ParamLimits

0xf78d,	// (0x0004eb45) control_pane_g

0xc171,	// (0x0004b529) control_pane_t1_ParamLimits

0xc171,	// (0x0004b529) control_pane_t1

0xc1d7,	// (0x0004b58f) control_pane_t2_ParamLimits

0xc1d7,	// (0x0004b58f) control_pane_t2

0x0002,

0xf79e,	// (0x0004eb56) control_pane_t_ParamLimits

0xf79e,	// (0x0004eb56) control_pane_t

0xd659,	// (0x0004ca11) navi_navi_volume_pane_cp1

0xd661,	// (0x0004ca19) status_small_icon_pane

0x4dd5,	// (0x0004418d) status_small_pane_g1_ParamLimits

0x4dd5,	// (0x0004418d) status_small_pane_g1

0xd669,	// (0x0004ca21) status_small_pane_g2_ParamLimits

0xd669,	// (0x0004ca21) status_small_pane_g2

0xd675,	// (0x0004ca2d) status_small_pane_g3_ParamLimits

0xd675,	// (0x0004ca2d) status_small_pane_g3

0xd681,	// (0x0004ca39) status_small_pane_g4_ParamLimits

0xd681,	// (0x0004ca39) status_small_pane_g4

0xd68d,	// (0x0004ca45) status_small_pane_g5_ParamLimits

0xd68d,	// (0x0004ca45) status_small_pane_g5

0xd69b,	// (0x0004ca53) status_small_pane_g6_ParamLimits

0xd69b,	// (0x0004ca53) status_small_pane_g6

0x0007,

0xf77c,	// (0x0004eb34) status_small_pane_g_ParamLimits

0xf77c,	// (0x0004eb34) status_small_pane_g

0xd6ca,	// (0x0004ca82) status_small_pane_t1

0xd6ec,	// (0x0004caa4) status_small_wait_pane_ParamLimits

0xd6ec,	// (0x0004caa4) status_small_wait_pane

0xd524,	// (0x0004c8dc) aid_levels_signal_ParamLimits

0xd524,	// (0x0004c8dc) aid_levels_signal

0xd53c,	// (0x0004c8f4) signal_pane_g1_ParamLimits

0xd53c,	// (0x0004c8f4) signal_pane_g1

0xd557,	// (0x0004c90f) signal_pane_g2_ParamLimits

0xd557,	// (0x0004c90f) signal_pane_g2

0x0003,

0xf70d,	// (0x0004eac5) signal_pane_g_ParamLimits

0xf70d,	// (0x0004eac5) signal_pane_g

0x46ad,	// (0x00043a65) context_pane_g1

0xd088,	// (0x0004c440) title_pane_g1

0xd0bf,	// (0x0004c477) title_pane_t1

0x3677,	// (0x00042a2f) title_pane_t2

0x369d,	// (0x00042a55) title_pane_t3

0x0002,

0xf557,	// (0x0004e90f) title_pane_t

0xdada,	// (0x0004ce92) aid_levels_battery_ParamLimits

0xdada,	// (0x0004ce92) aid_levels_battery

0xdaf6,	// (0x0004ceae) battery_pane_g1_ParamLimits

0xdaf6,	// (0x0004ceae) battery_pane_g1

0xdb13,	// (0x0004cecb) battery_pane_g2_ParamLimits

0xdb13,	// (0x0004cecb) battery_pane_g2

0x0001,

0xf7b0,	// (0x0004eb68) battery_pane_g_ParamLimits

0xf7b0,	// (0x0004eb68) battery_pane_g

0xdcd4,	// (0x0004d08c) uni_indicator_pane_g1

0xdce9,	// (0x0004d0a1) uni_indicator_pane_g2

0xdcff,	// (0x0004d0b7) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0004ecd9) uni_indicator_pane_g

0x4a4b,	// (0x00043e03) navi_icon_pane_ParamLimits

0x4a4b,	// (0x00043e03) navi_icon_pane

0x4989,	// (0x00043d41) navi_midp_pane

0x4a67,	// (0x00043e1f) navi_navi_pane

0x4a71,	// (0x00043e29) navi_text_pane_ParamLimits

0x4a71,	// (0x00043e29) navi_text_pane

0x35c5,	// (0x0004297d) status_small_wait_pane_g1

0x3af2,	// (0x00042eaa) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0004ecd4) status_small_wait_pane_g

0x62e8,	// (0x000456a0) navi_navi_icon_text_pane

0x62f0,	// (0x000456a8) navi_navi_pane_g1_ParamLimits

0x62f0,	// (0x000456a8) navi_navi_pane_g1

0x6302,	// (0x000456ba) navi_navi_pane_g2_ParamLimits

0x6302,	// (0x000456ba) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0004eca2) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0004eca2) navi_navi_pane_g

0x6314,	// (0x000456cc) navi_navi_tabs_pane

0x631d,	// (0x000456d5) navi_navi_text_pane

0x62e8,	// (0x000456a0) navi_navi_volume_pane

0x62c4,	// (0x0004567c) navi_text_pane_t1

0x62b8,	// (0x00045670) navi_icon_pane_g1

0x620b,	// (0x000455c3) navi_navi_text_pane_t1

0x22ec,	// (0x000416a4) navi_navi_volume_pane_g1

0x22f4,	// (0x000416ac) volume_small_pane

0x6171,	// (0x00045529) navi_navi_icon_text_pane_g1

0x6179,	// (0x00045531) navi_navi_icon_text_pane_t1

0x4a67,	// (0x00043e1f) navi_tabs_2_long_pane

0x4a67,	// (0x00043e1f) navi_tabs_2_pane

0x4a67,	// (0x00043e1f) navi_tabs_3_long_pane

0x4a67,	// (0x00043e1f) navi_tabs_3_pane

0x4a67,	// (0x00043e1f) navi_tabs_4_pane

0x22cc,	// (0x00041684) tabs_2_active_pane_ParamLimits

0x22cc,	// (0x00041684) tabs_2_active_pane

0x22dc,	// (0x00041694) tabs_2_passive_pane_ParamLimits

0x22dc,	// (0x00041694) tabs_2_passive_pane

0x229a,	// (0x00041652) tabs_3_active_pane_ParamLimits

0x229a,	// (0x00041652) tabs_3_active_pane

0x22aa,	// (0x00041662) tabs_3_passive_pane_ParamLimits

0x22aa,	// (0x00041662) tabs_3_passive_pane

0x22bb,	// (0x00041673) tabs_3_passive_pane_cp_ParamLimits

0x22bb,	// (0x00041673) tabs_3_passive_pane_cp

0x2256,	// (0x0004160e) tabs_4_active_pane_ParamLimits

0x2256,	// (0x0004160e) tabs_4_active_pane

0x2267,	// (0x0004161f) tabs_4_passive_pane_ParamLimits

0x2267,	// (0x0004161f) tabs_4_passive_pane

0x2278,	// (0x00041630) tabs_4_passive_pane_cp_ParamLimits

0x2278,	// (0x00041630) tabs_4_passive_pane_cp

0x2289,	// (0x00041641) tabs_4_passive_pane_cp2_ParamLimits

0x2289,	// (0x00041641) tabs_4_passive_pane_cp2

0x2232,	// (0x000415ea) tabs_2_long_active_pane_ParamLimits

0x2232,	// (0x000415ea) tabs_2_long_active_pane

0x2244,	// (0x000415fc) tabs_2_long_passive_pane_ParamLimits

0x2244,	// (0x000415fc) tabs_2_long_passive_pane

0x21f3,	// (0x000415ab) tabs_3_long_active_pane_ParamLimits

0x21f3,	// (0x000415ab) tabs_3_long_active_pane

0x2206,	// (0x000415be) tabs_3_long_passive_pane_ParamLimits

0x2206,	// (0x000415be) tabs_3_long_passive_pane

0x221f,	// (0x000415d7) tabs_3_long_passive_pane_cp_ParamLimits

0x221f,	// (0x000415d7) tabs_3_long_passive_pane_cp

0x2199,	// (0x00041551) volume_small_pane_g1

0x21a2,	// (0x0004155a) volume_small_pane_g2

0x21ab,	// (0x00041563) volume_small_pane_g3

0x21b4,	// (0x0004156c) volume_small_pane_g4

0x21bd,	// (0x00041575) volume_small_pane_g5

0x21c6,	// (0x0004157e) volume_small_pane_g6

0x21cf,	// (0x00041587) volume_small_pane_g7

0x21d8,	// (0x00041590) volume_small_pane_g8

0x21e1,	// (0x00041599) volume_small_pane_g9

0x21ea,	// (0x000415a2) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0004ec6e) volume_small_pane_g

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp2_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp2

0x36bd,	// (0x00042a75) tabs_3_active_pane_g1

0xd14b,	// (0x0004c503) tabs_3_active_pane_t1

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp2_ParamLimits

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp2

0x36bd,	// (0x00042a75) tabs_3_passive_pane_g1

0xd14b,	// (0x0004c503) tabs_3_passive_pane_t1

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp3_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp3

0x36d7,	// (0x00042a8f) tabs_4_active_pane_g1

0xd15d,	// (0x0004c515) tabs_4_active_pane_t1

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp3_ParamLimits

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp3

0x36d7,	// (0x00042a8f) tabs_4_1_passive_pane_g1

0xd15d,	// (0x0004c515) tabs_4_1_passive_pane_t1

0x4efd,	// (0x000442b5) list_highlight_pane_cp2

0xdd85,	// (0x0004d13d) list_set_pane_ParamLimits

0xdd85,	// (0x0004d13d) list_set_pane

0xde1f,	// (0x0004d1d7) main_pane_set_t1_ParamLimits

0xde1f,	// (0x0004d1d7) main_pane_set_t1

0xde3f,	// (0x0004d1f7) main_pane_set_t2_ParamLimits

0xde3f,	// (0x0004d1f7) main_pane_set_t2

0xde53,	// (0x0004d20b) main_pane_set_t3_ParamLimits

0xde53,	// (0x0004d20b) main_pane_set_t3

0xde65,	// (0x0004d21d) main_pane_set_t4_ParamLimits

0xde65,	// (0x0004d21d) main_pane_set_t4

0x0003,

0xf986,	// (0x0004ed3e) main_pane_set_t_ParamLimits

0xf986,	// (0x0004ed3e) main_pane_set_t

0xde77,	// (0x0004d22f) setting_code_pane

0xde81,	// (0x0004d239) setting_slider_graphic_pane

0xde81,	// (0x0004d239) setting_slider_pane

0xde81,	// (0x0004d239) setting_text_pane

0xde81,	// (0x0004d239) setting_volume_pane

0x133a,	// (0x000406f2) volume_set_pane

0x36af,	// (0x00042a67) bg_set_opt_pane_cp

0x1342,	// (0x000406fa) setting_slider_pane_t1

0x135b,	// (0x00040713) setting_slider_pane_t2

0x1375,	// (0x0004072d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0004e916) setting_slider_pane_t

0x138d,	// (0x00040745) slider_set_pane

0x35cf,	// (0x00042987) bg_set_opt_pane_cp2

0x36f1,	// (0x00042aa9) setting_slider_graphic_pane_g1

0x13a3,	// (0x0004075b) setting_slider_graphic_pane_t1

0x13b3,	// (0x0004076b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004e91d) setting_slider_graphic_pane_t

0x13c3,	// (0x0004077b) slider_set_pane_cp

0x35cf,	// (0x00042987) input_focus_pane_cp1

0x67ea,	// (0x00045ba2) list_set_text_pane

0x35c5,	// (0x0004297d) setting_text_pane_g1

0x35cf,	// (0x00042987) input_focus_pane_cp2

0x35c5,	// (0x0004297d) setting_code_pane_g1

0x36fa,	// (0x00042ab2) setting_code_pane_t1

0xf535,	// (0x0004e8ed) set_text_pane_t1_ParamLimits

0xf535,	// (0x0004e8ed) set_text_pane_t1

0x3f9c,	// (0x00043354) set_opt_bg_pane_g1

0x3fa4,	// (0x0004335c) set_opt_bg_pane_g2

0x67c4,	// (0x00045b7c) set_opt_bg_pane_g3

0x3fb4,	// (0x0004336c) set_opt_bg_pane_g4

0x3fbc,	// (0x00043374) set_opt_bg_pane_g5

0x3fc4,	// (0x0004337c) set_opt_bg_pane_g6

0x67ce,	// (0x00045b86) set_opt_bg_pane_g7

0x67d6,	// (0x00045b8e) set_opt_bg_pane_g8

0x67e0,	// (0x00045b98) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0004ed2b) set_opt_bg_pane_g

0x67b7,	// (0x00045b6f) slider_set_pane_g1

0x2361,	// (0x00041719) slider_set_pane_g2

0x0006,

0xf964,	// (0x0004ed1c) slider_set_pane_g

0x22fd,	// (0x000416b5) volume_set_pane_g1

0x2305,	// (0x000416bd) volume_set_pane_g2

0x230d,	// (0x000416c5) volume_set_pane_g3

0x2315,	// (0x000416cd) volume_set_pane_g4

0x231d,	// (0x000416d5) volume_set_pane_g5

0x2325,	// (0x000416dd) volume_set_pane_g6

0x232d,	// (0x000416e5) volume_set_pane_g7

0x2335,	// (0x000416ed) volume_set_pane_g8

0x233d,	// (0x000416f5) volume_set_pane_g9

0x2345,	// (0x000416fd) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0004ecf4) volume_set_pane_g

0xd16f,	// (0x0004c527) indicator_pane_ParamLimits

0xd16f,	// (0x0004c527) indicator_pane

0xd197,	// (0x0004c54f) main_idle_pane_g2_ParamLimits

0xd197,	// (0x0004c54f) main_idle_pane_g2

0xd1cf,	// (0x0004c587) main_pane_idle_g1_ParamLimits

0xd1cf,	// (0x0004c587) main_pane_idle_g1

0x3749,	// (0x00042b01) popup_clock_digital_analogue_window_ParamLimits

0x3749,	// (0x00042b01) popup_clock_digital_analogue_window

0xd1f6,	// (0x0004c5ae) soft_indicator_pane_ParamLimits

0xd1f6,	// (0x0004c5ae) soft_indicator_pane

0xd210,	// (0x0004c5c8) wallpaper_pane_ParamLimits

0xd210,	// (0x0004c5c8) wallpaper_pane

0x35c5,	// (0x0004297d) wallpaper_pane_g1

0xd222,	// (0x0004c5da) indicator_pane_g1_ParamLimits

0xd222,	// (0x0004c5da) indicator_pane_g1

0x6b99,	// (0x00045f51) navi_navi_icon_text_pane_srt_g1

0x379b,	// (0x00042b53) soft_indicator_pane_t1

0x37b5,	// (0x00042b6d) aid_ps_area_pane

0xd238,	// (0x0004c5f0) aid_ps_clock_pane

0x37d4,	// (0x00042b8c) aid_ps_indicator_pane

0x37e0,	// (0x00042b98) indicator_ps_pane_ParamLimits

0x37e0,	// (0x00042b98) indicator_ps_pane

0x37ef,	// (0x00042ba7) power_save_pane_g1_ParamLimits

0x37ef,	// (0x00042ba7) power_save_pane_g1

0x37fb,	// (0x00042bb3) power_save_pane_g2_ParamLimits

0x37fb,	// (0x00042bb3) power_save_pane_g2

0x0f4b,	// (0x00040303) aid_navinavi_width_pane

0x37b5,	// (0x00042b6d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004e922) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004e922) power_save_pane_g

0x3809,	// (0x00042bc1) power_save_pane_t1_ParamLimits

0x3809,	// (0x00042bc1) power_save_pane_t1

0xd238,	// (0x0004c5f0) aid_ps_clock_pane_ParamLimits

0x37d4,	// (0x00042b8c) aid_ps_indicator_pane_ParamLimits

0x381b,	// (0x00042bd3) power_save_pane_t4_ParamLimits

0x381b,	// (0x00042bd3) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004e927) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004e927) power_save_pane_t

0x3845,	// (0x00042bfd) power_save_t3_ParamLimits

0x3845,	// (0x00042bfd) power_save_t3

0x3830,	// (0x00042be8) power_save_t2_ParamLimits

0x3830,	// (0x00042be8) power_save_t2

0x385a,	// (0x00042c12) indicator_ps_pane_g1

0xd246,	// (0x0004c5fe) ai_gene_pane_ParamLimits

0xd246,	// (0x0004c5fe) ai_gene_pane

0xd25d,	// (0x0004c615) ai_links_pane_ParamLimits

0xd25d,	// (0x0004c615) ai_links_pane

0xd275,	// (0x0004c62d) indicator_pane_cp1_ParamLimits

0xd275,	// (0x0004c62d) indicator_pane_cp1

0xd284,	// (0x0004c63c) main_pane_idle_g1_cp_ParamLimits

0xd284,	// (0x0004c63c) main_pane_idle_g1_cp

0x3893,	// (0x00042c4b) popup_ai_links_title_window

0xd29c,	// (0x0004c654) soft_indicator_pane_cp1_ParamLimits

0xd29c,	// (0x0004c654) soft_indicator_pane_cp1

0x65b1,	// (0x00045969) ai_links_pane_g1

0x65ba,	// (0x00045972) grid_ai_links_pane

0xdccb,	// (0x0004d083) ai_gene_pane_1

0x659f,	// (0x00045957) ai_gene_pane_2

0x65a8,	// (0x00045960) list_highlight_pane_cp4

0xdca7,	// (0x0004d05f) cell_ai_link_pane_ParamLimits

0xdca7,	// (0x0004d05f) cell_ai_link_pane

0x6570,	// (0x00045928) cell_ai_link_pane_g1

0x3af2,	// (0x00042eaa) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0004eccf) cell_ai_link_pane_g

0x35cf,	// (0x00042987) grid_highlight_cp2

0x35cf,	// (0x00042987) bg_popup_sub_pane_cp1

0x38b6,	// (0x00042c6e) popup_ai_links_title_window_t1

0x64be,	// (0x00045876) ai_gene_pane_1_g1_ParamLimits

0x64be,	// (0x00045876) ai_gene_pane_1_g1

0x64ca,	// (0x00045882) ai_gene_pane_1_g2_ParamLimits

0x64ca,	// (0x00045882) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0004ecc5) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0004ecc5) ai_gene_pane_1_g

0x64d7,	// (0x0004588f) ai_gene_pane_1_t1_ParamLimits

0x64d7,	// (0x0004588f) ai_gene_pane_1_t1

0x650b,	// (0x000458c3) grid_ai_soft_ind_pane

0x64a9,	// (0x00045861) ai_gene_pane_2_t1_ParamLimits

0x64a9,	// (0x00045861) ai_gene_pane_2_t1

0xd2b0,	// (0x0004c668) main_pane_empty_t1_ParamLimits

0xd2b0,	// (0x0004c668) main_pane_empty_t1

0xd2c8,	// (0x0004c680) main_pane_empty_t2_ParamLimits

0xd2c8,	// (0x0004c680) main_pane_empty_t2

0xd2dd,	// (0x0004c695) main_pane_empty_t3_ParamLimits

0xd2dd,	// (0x0004c695) main_pane_empty_t3

0xd2ef,	// (0x0004c6a7) main_pane_empty_t4_ParamLimits

0xd2ef,	// (0x0004c6a7) main_pane_empty_t4

0xd301,	// (0x0004c6b9) main_pane_empty_t5_ParamLimits

0xd301,	// (0x0004c6b9) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004e92c) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004e92c) main_pane_empty_t

0x3fed,	// (0x000433a5) bg_popup_window_pane_ParamLimits

0x3fed,	// (0x000433a5) bg_popup_window_pane

0x6219,	// (0x000455d1) find_popup_pane_cp2_ParamLimits

0x6219,	// (0x000455d1) find_popup_pane_cp2

0x6225,	// (0x000455dd) heading_pane_ParamLimits

0x6225,	// (0x000455dd) heading_pane

0x35cf,	// (0x00042987) bg_popup_sub_pane

0xdc28,	// (0x0004cfe0) bg_popup_window_pane_g1_ParamLimits

0xdc28,	// (0x0004cfe0) bg_popup_window_pane_g1

0xdc37,	// (0x0004cfef) bg_popup_window_pane_g2_ParamLimits

0xdc37,	// (0x0004cfef) bg_popup_window_pane_g2

0xdc43,	// (0x0004cffb) bg_popup_window_pane_g3_ParamLimits

0xdc43,	// (0x0004cffb) bg_popup_window_pane_g3

0xdc4f,	// (0x0004d007) bg_popup_window_pane_g4_ParamLimits

0xdc4f,	// (0x0004d007) bg_popup_window_pane_g4

0xdc5e,	// (0x0004d016) bg_popup_window_pane_g5_ParamLimits

0xdc5e,	// (0x0004d016) bg_popup_window_pane_g5

0xdc6e,	// (0x0004d026) bg_popup_window_pane_g6_ParamLimits

0xdc6e,	// (0x0004d026) bg_popup_window_pane_g6

0xdc7a,	// (0x0004d032) bg_popup_window_pane_g7_ParamLimits

0xdc7a,	// (0x0004d032) bg_popup_window_pane_g7

0xdc89,	// (0x0004d041) bg_popup_window_pane_g8_ParamLimits

0xdc89,	// (0x0004d041) bg_popup_window_pane_g8

0xdc98,	// (0x0004d050) bg_popup_window_pane_g9_ParamLimits

0xdc98,	// (0x0004d050) bg_popup_window_pane_g9

0x61ff,	// (0x000455b7) bg_popup_window_pane_g10_ParamLimits

0x61ff,	// (0x000455b7) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0004ec8d) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0004ec8d) bg_popup_window_pane_g

0x6128,	// (0x000454e0) bg_popup_heading_pane_ParamLimits

0x6128,	// (0x000454e0) bg_popup_heading_pane

0x247f,	// (0x00041837) tabs_4_passive_pane_cp_srt_ParamLimits

0x247f,	// (0x00041837) tabs_4_passive_pane_cp_srt

0x2491,	// (0x00041849) tabs_4_passive_pane_srt_ParamLimits

0x613c,	// (0x000454f4) heading_pane_g2

0x2491,	// (0x00041849) tabs_4_passive_pane_srt

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp3_srt

0x6144,	// (0x000454fc) heading_pane_t1_ParamLimits

0x6144,	// (0x000454fc) heading_pane_t1

0x615b,	// (0x00045513) heading_pane_t2_ParamLimits

0x615b,	// (0x00045513) heading_pane_t2

0x0001,

0xf8d0,	// (0x0004ec88) heading_pane_t_ParamLimits

0xf8d0,	// (0x0004ec88) heading_pane_t

0x5c55,	// (0x0004500d) bg_popup_heading_pane_g1

0x5d04,	// (0x000450bc) bg_popup_heading_pane_g2

0x5d0e,	// (0x000450c6) bg_popup_heading_pane_g3

0x5d18,	// (0x000450d0) bg_popup_heading_pane_g4

0x5d22,	// (0x000450da) bg_popup_heading_pane_g5

0x5d2c,	// (0x000450e4) bg_popup_heading_pane_g6

0x5d34,	// (0x000450ec) bg_popup_heading_pane_g7

0x5d3c,	// (0x000450f4) bg_popup_heading_pane_g8

0x5d46,	// (0x000450fe) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0004ec44) bg_popup_heading_pane_g

0x5421,	// (0x000447d9) bg_popup_sub_pane_g1

0x5429,	// (0x000447e1) bg_popup_sub_pane_g2

0x5431,	// (0x000447e9) bg_popup_sub_pane_g3

0x5439,	// (0x000447f1) bg_popup_sub_pane_g4

0x5441,	// (0x000447f9) bg_popup_sub_pane_g5

0x5449,	// (0x00044801) bg_popup_sub_pane_g6

0x5451,	// (0x00044809) bg_popup_sub_pane_g7

0x5459,	// (0x00044811) bg_popup_sub_pane_g8

0x5461,	// (0x00044819) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0004ec1e) bg_popup_sub_pane_g

0x392a,	// (0x00042ce2) bg_popup_window_pane_cp5_ParamLimits

0x392a,	// (0x00042ce2) bg_popup_window_pane_cp5

0x3946,	// (0x00042cfe) popup_note_window_g1_ParamLimits

0x3946,	// (0x00042cfe) popup_note_window_g1

0x3952,	// (0x00042d0a) popup_note_window_t1_ParamLimits

0x3952,	// (0x00042d0a) popup_note_window_t1

0x3968,	// (0x00042d20) popup_note_window_t2_ParamLimits

0x3968,	// (0x00042d20) popup_note_window_t2

0x397e,	// (0x00042d36) popup_note_window_t3_ParamLimits

0x397e,	// (0x00042d36) popup_note_window_t3

0x3994,	// (0x00042d4c) popup_note_window_t4_ParamLimits

0x3994,	// (0x00042d4c) popup_note_window_t4

0x39bc,	// (0x00042d74) popup_note_window_t5_ParamLimits

0x39bc,	// (0x00042d74) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004e937) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004e937) popup_note_window_t

0x3a06,	// (0x00042dbe) bg_popup_window_pane_cp6_ParamLimits

0x3a06,	// (0x00042dbe) bg_popup_window_pane_cp6

0x5bd1,	// (0x00044f89) popup_note_image_window_g1_ParamLimits

0x5bd1,	// (0x00044f89) popup_note_image_window_g1

0x5bdd,	// (0x00044f95) popup_note_image_window_g2_ParamLimits

0x5bdd,	// (0x00044f95) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0004ec12) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0004ec12) popup_note_image_window_g

0x5bf6,	// (0x00044fae) popup_note_image_window_t1_ParamLimits

0x5bf6,	// (0x00044fae) popup_note_image_window_t1

0x5c0f,	// (0x00044fc7) popup_note_image_window_t2_ParamLimits

0x5c0f,	// (0x00044fc7) popup_note_image_window_t2

0x5c28,	// (0x00044fe0) popup_note_image_window_t3_ParamLimits

0x5c28,	// (0x00044fe0) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0004ec17) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0004ec17) popup_note_image_window_t

0x5a92,	// (0x00044e4a) bg_popup_window_pane_cp7_ParamLimits

0x5a92,	// (0x00044e4a) bg_popup_window_pane_cp7

0x5ac2,	// (0x00044e7a) popup_note_wait_window_g1_ParamLimits

0x5ac2,	// (0x00044e7a) popup_note_wait_window_g1

0x5ace,	// (0x00044e86) popup_note_wait_window_g2_ParamLimits

0x5ace,	// (0x00044e86) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0004ec00) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0004ec00) popup_note_wait_window_g

0x5ae6,	// (0x00044e9e) popup_note_wait_window_t1_ParamLimits

0x5ae6,	// (0x00044e9e) popup_note_wait_window_t1

0x5b0d,	// (0x00044ec5) popup_note_wait_window_t2_ParamLimits

0x5b0d,	// (0x00044ec5) popup_note_wait_window_t2

0x5b2a,	// (0x00044ee2) popup_note_wait_window_t3_ParamLimits

0x5b2a,	// (0x00044ee2) popup_note_wait_window_t3

0x5b3d,	// (0x00044ef5) popup_note_wait_window_t4_ParamLimits

0x5b3d,	// (0x00044ef5) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0004ec07) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0004ec07) popup_note_wait_window_t

0x5b62,	// (0x00044f1a) wait_bar_pane_ParamLimits

0x5b62,	// (0x00044f1a) wait_bar_pane

0x35cf,	// (0x00042987) wait_anim_pane

0x35cf,	// (0x00042987) wait_border_pane

0x35c5,	// (0x0004297d) wait_anim_pane_g1

0x35c5,	// (0x0004297d) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0004eac0) wait_anim_pane_g

0x5a36,	// (0x00044dee) wait_border_pane_g1

0x5a41,	// (0x00044df9) wait_border_pane_g2

0x5a4a,	// (0x00044e02) wait_border_pane_g3

0x0002,

0xf841,	// (0x0004ebf9) wait_border_pane_g

0x58a1,	// (0x00044c59) bg_popup_window_pane_cp16_ParamLimits

0x58a1,	// (0x00044c59) bg_popup_window_pane_cp16

0x59a1,	// (0x00044d59) indicator_popup_pane_cp4_ParamLimits

0x59a1,	// (0x00044d59) indicator_popup_pane_cp4

0x59b5,	// (0x00044d6d) popup_query_data_window_t1_ParamLimits

0x59b5,	// (0x00044d6d) popup_query_data_window_t1

0x59c7,	// (0x00044d7f) popup_query_data_window_t2_ParamLimits

0x59c7,	// (0x00044d7f) popup_query_data_window_t2

0x59e0,	// (0x00044d98) popup_query_data_window_t3_ParamLimits

0x59e0,	// (0x00044d98) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0004ebf2) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0004ebf2) popup_query_data_window_t

0x59fa,	// (0x00044db2) query_popup_data_pane_ParamLimits

0x59fa,	// (0x00044db2) query_popup_data_pane

0x5a0e,	// (0x00044dc6) query_popup_data_pane_cp1_ParamLimits

0x5a0e,	// (0x00044dc6) query_popup_data_pane_cp1

0x58a1,	// (0x00044c59) bg_popup_window_pane_cp10_ParamLimits

0x58a1,	// (0x00044c59) bg_popup_window_pane_cp10

0x58d3,	// (0x00044c8b) indicator_popup_pane_ParamLimits

0x58d3,	// (0x00044c8b) indicator_popup_pane

0x58f5,	// (0x00044cad) popup_query_code_window_t1_ParamLimits

0x58f5,	// (0x00044cad) popup_query_code_window_t1

0x590f,	// (0x00044cc7) popup_query_code_window_t2_ParamLimits

0x590f,	// (0x00044cc7) popup_query_code_window_t2

0x5958,	// (0x00044d10) popup_query_code_window_t3_ParamLimits

0x5958,	// (0x00044d10) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0004ebeb) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0004ebeb) popup_query_code_window_t

0x5987,	// (0x00044d3f) query_popup_pane_ParamLimits

0x5987,	// (0x00044d3f) query_popup_pane

0x3a06,	// (0x00042dbe) bg_popup_window_pane_cp15_ParamLimits

0x3a06,	// (0x00042dbe) bg_popup_window_pane_cp15

0x3a24,	// (0x00042ddc) indicator_popup_pane_cp1_ParamLimits

0x3a24,	// (0x00042ddc) indicator_popup_pane_cp1

0x3a37,	// (0x00042def) indicator_popup_pane_cp2_ParamLimits

0x3a37,	// (0x00042def) indicator_popup_pane_cp2

0x3a4a,	// (0x00042e02) popup_query_data_code_window_g1_ParamLimits

0x3a4a,	// (0x00042e02) popup_query_data_code_window_g1

0x3a5d,	// (0x00042e15) popup_query_data_code_window_t1_ParamLimits

0x3a5d,	// (0x00042e15) popup_query_data_code_window_t1

0x3a6f,	// (0x00042e27) popup_query_data_code_window_t2_ParamLimits

0x3a6f,	// (0x00042e27) popup_query_data_code_window_t2

0x3a81,	// (0x00042e39) popup_query_data_code_window_t3_ParamLimits

0x3a81,	// (0x00042e39) popup_query_data_code_window_t3

0x3a97,	// (0x00042e4f) popup_query_data_code_window_t4_ParamLimits

0x3a97,	// (0x00042e4f) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0004e942) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0004e942) popup_query_data_code_window_t

0x20aa,	// (0x00041462) list_single_midp_graphic_pane_g3

0x3aaf,	// (0x00042e67) query_popup_data_pane_cp2_ParamLimits

0x3ac2,	// (0x00042e7a) query_popup_pane_cp2_ParamLimits

0x3ac2,	// (0x00042e7a) query_popup_pane_cp2

0x35cf,	// (0x00042987) bg_popup_window_pane_cp11

0x588d,	// (0x00044c45) heading_pane_cp5

0x3bad,	// (0x00042f65) listscroll_popup_info_pane

0x35cf,	// (0x00042987) input_focus_pane_cp3

0x3ad5,	// (0x00042e8d) query_popup_pane_t1

0x3ae3,	// (0x00042e9b) list_popup_info_pane_ParamLimits

0x3ae3,	// (0x00042e9b) list_popup_info_pane

0x3af2,	// (0x00042eaa) listscroll_popup_info_pane_g1

0x3afa,	// (0x00042eb2) scroll_pane_cp7

0x3b04,	// (0x00042ebc) popup_info_list_pane_t1_ParamLimits

0x3b04,	// (0x00042ebc) popup_info_list_pane_t1

0x3b1e,	// (0x00042ed6) popup_info_list_pane_t2_ParamLimits

0x3b1e,	// (0x00042ed6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004e94b) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004e94b) popup_info_list_pane_t

0x35cf,	// (0x00042987) bg_popup_window_pane_cp12

0x6bb3,	// (0x00045f6b) find_popup_pane

0x36af,	// (0x00042a67) bg_popup_window_pane_cp3

0x3b38,	// (0x00042ef0) heading_pane_cp3

0x3b44,	// (0x00042efc) listscroll_popup_graphic_pane

0x35cf,	// (0x00042987) bg_popup_window_pane_cp4

0xd363,	// (0x0004c71b) heading_pane_cp4

0x3bad,	// (0x00042f65) listscroll_popup_colour_pane

0x3bb5,	// (0x00042f6d) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3bb5,	// (0x00042f6d) cell_large_graphic_colour_none_popup_pane

0xd36b,	// (0x0004c723) grid_large_graphic_colour_popup_pane_ParamLimits

0xd36b,	// (0x0004c723) grid_large_graphic_colour_popup_pane

0x3bf5,	// (0x00042fad) listscroll_popup_colour_pane_g1_ParamLimits

0x3bf5,	// (0x00042fad) listscroll_popup_colour_pane_g1

0x3c0c,	// (0x00042fc4) listscroll_popup_colour_pane_g2_ParamLimits

0x3c0c,	// (0x00042fc4) listscroll_popup_colour_pane_g2

0x3c23,	// (0x00042fdb) listscroll_popup_colour_pane_g3_ParamLimits

0x3c23,	// (0x00042fdb) listscroll_popup_colour_pane_g3

0xd38f,	// (0x0004c747) listscroll_popup_colour_pane_g4_ParamLimits

0xd38f,	// (0x0004c747) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0004e950) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0004e950) listscroll_popup_colour_pane_g

0x3c47,	// (0x00042fff) scroll_pane_cp6_ParamLimits

0x3c47,	// (0x00042fff) scroll_pane_cp6

0xd39f,	// (0x0004c757) cell_large_graphic_colour_popup_pane_ParamLimits

0xd39f,	// (0x0004c757) cell_large_graphic_colour_popup_pane

0x3c78,	// (0x00043030) cell_large_graphic_colour_none_popup_pane_t1

0x35cf,	// (0x00042987) grid_highlight_pane_cp5

0x3c87,	// (0x0004303f) cell_large_graphic_colour_popup_pane_g1

0x3c8f,	// (0x00043047) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004e959) cell_large_graphic_colour_popup_pane_g

0x3c97,	// (0x0004304f) cell_large_graphic_colour_popup_pane_g2_copy1

0x3ca0,	// (0x00043058) grid_highlight_pane_cp4

0x3ca8,	// (0x00043060) bg_popup_window_pane_cp8_ParamLimits

0x3ca8,	// (0x00043060) bg_popup_window_pane_cp8

0x3cc3,	// (0x0004307b) popup_snote_single_text_window_g1_ParamLimits

0x3cc3,	// (0x0004307b) popup_snote_single_text_window_g1

0x3cd5,	// (0x0004308d) popup_snote_single_text_window_t1_ParamLimits

0x3cd5,	// (0x0004308d) popup_snote_single_text_window_t1

0x3ce8,	// (0x000430a0) popup_snote_single_text_window_t2_ParamLimits

0x3ce8,	// (0x000430a0) popup_snote_single_text_window_t2

0x3cfb,	// (0x000430b3) popup_snote_single_text_window_t3_ParamLimits

0x3cfb,	// (0x000430b3) popup_snote_single_text_window_t3

0x3d34,	// (0x000430ec) popup_snote_single_text_window_t4_ParamLimits

0x3d34,	// (0x000430ec) popup_snote_single_text_window_t4

0x3d68,	// (0x00043120) popup_snote_single_text_window_t5_ParamLimits

0x3d68,	// (0x00043120) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0004e95e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0004e95e) popup_snote_single_text_window_t

0x3d97,	// (0x0004314f) bg_popup_window_pane_cp9_ParamLimits

0x3d97,	// (0x0004314f) bg_popup_window_pane_cp9

0x3cc3,	// (0x0004307b) popup_snote_single_graphic_window_g1_ParamLimits

0x3cc3,	// (0x0004307b) popup_snote_single_graphic_window_g1

0x3da5,	// (0x0004315d) popup_snote_single_graphic_window_g2_ParamLimits

0x3da5,	// (0x0004315d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004e969) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004e969) popup_snote_single_graphic_window_g

0x3db1,	// (0x00043169) popup_snote_single_graphic_window_t1_ParamLimits

0x3db1,	// (0x00043169) popup_snote_single_graphic_window_t1

0x3dc4,	// (0x0004317c) popup_snote_single_graphic_window_t2_ParamLimits

0x3dc4,	// (0x0004317c) popup_snote_single_graphic_window_t2

0x3dd7,	// (0x0004318f) popup_snote_single_graphic_window_t3_ParamLimits

0x3dd7,	// (0x0004318f) popup_snote_single_graphic_window_t3

0x3e10,	// (0x000431c8) popup_snote_single_graphic_window_t4_ParamLimits

0x3e10,	// (0x000431c8) popup_snote_single_graphic_window_t4

0x3e44,	// (0x000431fc) popup_snote_single_graphic_window_t5_ParamLimits

0x3e44,	// (0x000431fc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0004e96e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0004e96e) popup_snote_single_graphic_window_t

0x6af5,	// (0x00045ead) grid_graphic_popup_pane_ParamLimits

0x6af5,	// (0x00045ead) grid_graphic_popup_pane

0x6b1f,	// (0x00045ed7) listscroll_popup_graphic_pane_g1_ParamLimits

0x6b1f,	// (0x00045ed7) listscroll_popup_graphic_pane_g1

0xdf90,	// (0x0004d348) listscroll_popup_graphic_pane_g2_ParamLimits

0xdf90,	// (0x0004d348) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0004ed68) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0004ed68) listscroll_popup_graphic_pane_g

0x6b47,	// (0x00045eff) scroll_pane_cp5

0xdf35,	// (0x0004d2ed) cell_graphic_popup_pane_ParamLimits

0xdf35,	// (0x0004d2ed) cell_graphic_popup_pane

0x6a75,	// (0x00045e2d) cell_graphic_popup_pane_g1

0x6a7d,	// (0x00045e35) cell_graphic_popup_pane_g2

0x3c97,	// (0x0004304f) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0004ed61) cell_graphic_popup_pane_g

0x6a86,	// (0x00045e3e) cell_graphic_popup_pane_t2

0x3ca0,	// (0x00043058) grid_highlight_pane_cp3

0x3e85,	// (0x0004323d) list_gen_pane_ParamLimits

0x3e85,	// (0x0004323d) list_gen_pane

0x3eb7,	// (0x0004326f) scroll_pane

0xdeec,	// (0x0004d2a4) bg_list_pane_g1_ParamLimits

0xdeec,	// (0x0004d2a4) bg_list_pane_g1

0x69ea,	// (0x00045da2) bg_list_pane_g2_ParamLimits

0x69ea,	// (0x00045da2) bg_list_pane_g2

0x69ff,	// (0x00045db7) bg_list_pane_g3_ParamLimits

0x69ff,	// (0x00045db7) bg_list_pane_g3

0x6a13,	// (0x00045dcb) bg_list_pane_g4_ParamLimits

0x6a13,	// (0x00045dcb) bg_list_pane_g4

0xdf09,	// (0x0004d2c1) bg_list_pane_g5_ParamLimits

0xdf09,	// (0x0004d2c1) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0004ed56) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0004ed56) bg_list_pane_g

0xdeb4,	// (0x0004d26c) list_double2_graphic_large_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double2_graphic_large_graphic_pane

0xdeb4,	// (0x0004d26c) list_double2_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double2_graphic_pane

0xdeb4,	// (0x0004d26c) list_double2_large_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double2_large_graphic_pane

0xdeb4,	// (0x0004d26c) list_double2_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double2_pane

0xdeb4,	// (0x0004d26c) list_double_graphic_heading_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_graphic_heading_pane

0xdeb4,	// (0x0004d26c) list_double_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_graphic_pane

0xdeb4,	// (0x0004d26c) list_double_heading_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_heading_pane

0xdeb4,	// (0x0004d26c) list_double_large_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_large_graphic_pane

0xdeb4,	// (0x0004d26c) list_double_number_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_number_pane

0xdeb4,	// (0x0004d26c) list_double_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_pane

0xdeb4,	// (0x0004d26c) list_double_time_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_double_time_pane

0xdeb4,	// (0x0004d26c) list_setting_number_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_setting_number_pane

0xdeb4,	// (0x0004d26c) list_setting_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_setting_pane

0xdec6,	// (0x0004d27e) list_single_2graphic_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_2graphic_pane

0xdec6,	// (0x0004d27e) list_single_graphic_heading_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_graphic_heading_pane

0xdec6,	// (0x0004d27e) list_single_graphic_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_graphic_pane

0xdec6,	// (0x0004d27e) list_single_heading_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_heading_pane

0xdeb4,	// (0x0004d26c) list_single_large_graphic_pane_ParamLimits

0xdeb4,	// (0x0004d26c) list_single_large_graphic_pane

0xdec6,	// (0x0004d27e) list_single_number_heading_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_number_heading_pane

0xdec6,	// (0x0004d27e) list_single_number_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_number_pane

0xdec6,	// (0x0004d27e) list_single_pane_ParamLimits

0xdec6,	// (0x0004d27e) list_single_pane

0x35cf,	// (0x00042987) list_highlight_pane_cp1

0x4b12,	// (0x00043eca) list_single_pane_g1_ParamLimits

0x4b12,	// (0x00043eca) list_single_pane_g1

0x2079,	// (0x00041431) list_single_pane_g2_ParamLimits

0x2079,	// (0x00041431) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_single_pane_g

0x09f5,	// (0x0003fdad) list_single_pane_t1_ParamLimits

0x09f5,	// (0x0003fdad) list_single_pane_t1

0x4b12,	// (0x00043eca) list_single_number_pane_g1_ParamLimits

0x4b12,	// (0x00043eca) list_single_number_pane_g1

0x2079,	// (0x00041431) list_single_number_pane_g2_ParamLimits

0x2079,	// (0x00041431) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_single_number_pane_g

0x0786,	// (0x0003fb3e) list_single_number_pane_t1_ParamLimits

0x0786,	// (0x0003fb3e) list_single_number_pane_t1

0xbd0c,	// (0x0004b0c4) list_single_number_pane_t2_ParamLimits

0xbd0c,	// (0x0004b0c4) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0004ed17) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0004ed17) list_single_number_pane_t

0xb6c0,	// (0x0004aa78) list_single_graphic_pane_g1_ParamLimits

0xb6c0,	// (0x0004aa78) list_single_graphic_pane_g1

0x4b12,	// (0x00043eca) list_single_graphic_pane_g2_ParamLimits

0x4b12,	// (0x00043eca) list_single_graphic_pane_g2

0x2079,	// (0x00041431) list_single_graphic_pane_g3_ParamLimits

0x2079,	// (0x00041431) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004e979) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004e979) list_single_graphic_pane_g

0xb6cc,	// (0x0004aa84) list_single_graphic_pane_t1_ParamLimits

0xb6cc,	// (0x0004aa84) list_single_graphic_pane_t1

0xb6e2,	// (0x0004aa9a) list_single_heading_pane_g1_ParamLimits

0xb6e2,	// (0x0004aa9a) list_single_heading_pane_g1

0x2079,	// (0x00041431) list_single_heading_pane_g2_ParamLimits

0x2079,	// (0x00041431) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0004e980) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0004e980) list_single_heading_pane_g

0xb6f5,	// (0x0004aaad) list_single_heading_pane_t1_ParamLimits

0xb6f5,	// (0x0004aaad) list_single_heading_pane_t1

0xc0a5,	// (0x0004b45d) list_single_heading_pane_t2_ParamLimits

0xc0a5,	// (0x0004b45d) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0004e985) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0004e985) list_single_heading_pane_t

0x4b12,	// (0x00043eca) list_single_number_heading_pane_g1_ParamLimits

0x4b12,	// (0x00043eca) list_single_number_heading_pane_g1

0x2079,	// (0x00041431) list_single_number_heading_pane_g2_ParamLimits

0x2079,	// (0x00041431) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_single_number_heading_pane_g

0xb70b,	// (0x0004aac3) list_single_number_heading_pane_t1_ParamLimits

0xb70b,	// (0x0004aac3) list_single_number_heading_pane_t1

0x09bf,	// (0x0003fd77) list_single_number_heading_pane_t2_ParamLimits

0x09bf,	// (0x0003fd77) list_single_number_heading_pane_t2

0x09d1,	// (0x0003fd89) list_single_number_heading_pane_t3_ParamLimits

0x09d1,	// (0x0003fd89) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004e98f) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004e98f) list_single_number_heading_pane_t

0xb721,	// (0x0004aad9) list_single_graphic_heading_pane_g1_ParamLimits

0xb721,	// (0x0004aad9) list_single_graphic_heading_pane_g1

0xc0b7,	// (0x0004b46f) list_single_graphic_heading_pane_g4_ParamLimits

0xc0b7,	// (0x0004b46f) list_single_graphic_heading_pane_g4

0x2079,	// (0x00041431) list_single_graphic_heading_pane_g5_ParamLimits

0x2079,	// (0x00041431) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0004e996) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0004e996) list_single_graphic_heading_pane_g

0xb70b,	// (0x0004aac3) list_single_graphic_heading_pane_t1_ParamLimits

0xb70b,	// (0x0004aac3) list_single_graphic_heading_pane_t1

0xb739,	// (0x0004aaf1) list_single_graphic_heading_pane_t2_ParamLimits

0xb739,	// (0x0004aaf1) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004e99d) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004e99d) list_single_graphic_heading_pane_t

0x0a0b,	// (0x0003fdc3) list_single_large_graphic_pane_g1_ParamLimits

0x0a0b,	// (0x0003fdc3) list_single_large_graphic_pane_g1

0x0a17,	// (0x0003fdcf) list_single_large_graphic_pane_g2_ParamLimits

0x0a17,	// (0x0003fdcf) list_single_large_graphic_pane_g2

0x0a23,	// (0x0003fddb) list_single_large_graphic_pane_g3_ParamLimits

0x0a23,	// (0x0003fddb) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0004e9a2) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0004e9a2) list_single_large_graphic_pane_g

0x5a41,	// (0x00044df9) wait_border_pane_g2_copy1

0x142a,	// (0x000407e2) list_single_large_graphic_pane_g4_cp2

0x0a2f,	// (0x0003fde7) list_single_large_graphic_pane_t1_ParamLimits

0x0a2f,	// (0x0003fde7) list_single_large_graphic_pane_t1

0x49fd,	// (0x00043db5) list_double_pane_g1_ParamLimits

0x49fd,	// (0x00043db5) list_double_pane_g1

0xc0c8,	// (0x0004b480) list_double_pane_g2_ParamLimits

0xc0c8,	// (0x0004b480) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0004e9a9) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0004e9a9) list_double_pane_g

0xb74f,	// (0x0004ab07) list_double_pane_t1_ParamLimits

0xb74f,	// (0x0004ab07) list_double_pane_t1

0xb765,	// (0x0004ab1d) list_double_pane_t2_ParamLimits

0xb765,	// (0x0004ab1d) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004e9ae) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004e9ae) list_double_pane_t

0xb777,	// (0x0004ab2f) list_double2_pane_g1_ParamLimits

0xb777,	// (0x0004ab2f) list_double2_pane_g1

0xb788,	// (0x0004ab40) list_double2_pane_g2_ParamLimits

0xb788,	// (0x0004ab40) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0004e9b3) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0004e9b3) list_double2_pane_g

0xb794,	// (0x0004ab4c) list_double2_pane_t1_ParamLimits

0xb794,	// (0x0004ab4c) list_double2_pane_t1

0xb7aa,	// (0x0004ab62) list_double2_pane_t2_ParamLimits

0xb7aa,	// (0x0004ab62) list_double2_pane_t2

0x0001,

0xf600,	// (0x0004e9b8) list_double2_pane_t_ParamLimits

0xf600,	// (0x0004e9b8) list_double2_pane_t

0x49fd,	// (0x00043db5) list_double_number_pane_g1_ParamLimits

0x49fd,	// (0x00043db5) list_double_number_pane_g1

0xc0c8,	// (0x0004b480) list_double_number_pane_g2_ParamLimits

0xc0c8,	// (0x0004b480) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0004e9a9) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0004e9a9) list_double_number_pane_g

0xb7bc,	// (0x0004ab74) list_double_number_pane_t1_ParamLimits

0xb7bc,	// (0x0004ab74) list_double_number_pane_t1

0xb7ce,	// (0x0004ab86) list_double_number_pane_t2_ParamLimits

0xb7ce,	// (0x0004ab86) list_double_number_pane_t2

0xb7e4,	// (0x0004ab9c) list_double_number_pane_t3_ParamLimits

0xb7e4,	// (0x0004ab9c) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004e9bd) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004e9bd) list_double_number_pane_t

0xb7f6,	// (0x0004abae) list_double_graphic_pane_g1_ParamLimits

0xb7f6,	// (0x0004abae) list_double_graphic_pane_g1

0xb802,	// (0x0004abba) list_double_graphic_pane_g2_ParamLimits

0xb802,	// (0x0004abba) list_double_graphic_pane_g2

0xb811,	// (0x0004abc9) list_double_graphic_pane_g3_ParamLimits

0xb811,	// (0x0004abc9) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0004e9c4) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0004e9c4) list_double_graphic_pane_g

0xb81d,	// (0x0004abd5) list_double_graphic_pane_t1_ParamLimits

0xb81d,	// (0x0004abd5) list_double_graphic_pane_t1

0xb833,	// (0x0004abeb) list_double_graphic_pane_t2_ParamLimits

0xb833,	// (0x0004abeb) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004e9cd) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004e9cd) list_double_graphic_pane_t

0xb845,	// (0x0004abfd) list_double2_graphic_pane_g1_ParamLimits

0xb845,	// (0x0004abfd) list_double2_graphic_pane_g1

0xb851,	// (0x0004ac09) list_double2_graphic_pane_g2_ParamLimits

0xb851,	// (0x0004ac09) list_double2_graphic_pane_g2

0xc0e0,	// (0x0004b498) list_double2_graphic_pane_g3_ParamLimits

0xc0e0,	// (0x0004b498) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0004e9d2) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0004e9d2) list_double2_graphic_pane_g

0xb85d,	// (0x0004ac15) list_double2_graphic_pane_t1_ParamLimits

0xb85d,	// (0x0004ac15) list_double2_graphic_pane_t1

0xb873,	// (0x0004ac2b) list_double2_graphic_pane_t2_ParamLimits

0xb873,	// (0x0004ac2b) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0004e9d9) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0004e9d9) list_double2_graphic_pane_t

0xb885,	// (0x0004ac3d) list_double_large_graphic_pane_g1_ParamLimits

0xb885,	// (0x0004ac3d) list_double_large_graphic_pane_g1

0xb8a4,	// (0x0004ac5c) list_double_large_graphic_pane_g2_ParamLimits

0xb8a4,	// (0x0004ac5c) list_double_large_graphic_pane_g2

0xc0c8,	// (0x0004b480) list_double_large_graphic_pane_g3_ParamLimits

0xc0c8,	// (0x0004b480) list_double_large_graphic_pane_g3

0xb8ba,	// (0x0004ac72) list_double_large_graphic_pane_g4_ParamLimits

0xb8ba,	// (0x0004ac72) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004e9de) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004e9de) list_double_large_graphic_pane_g

0xb8cc,	// (0x0004ac84) list_double_large_graphic_pane_t1_ParamLimits

0xb8cc,	// (0x0004ac84) list_double_large_graphic_pane_t1

0xb8e5,	// (0x0004ac9d) list_double_large_graphic_pane_t2_ParamLimits

0xb8e5,	// (0x0004ac9d) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0004e9e9) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0004e9e9) list_double_large_graphic_pane_t

0xb8f7,	// (0x0004acaf) list_double2_large_graphic_pane_g1_ParamLimits

0xb8f7,	// (0x0004acaf) list_double2_large_graphic_pane_g1

0xb903,	// (0x0004acbb) list_double2_large_graphic_pane_g2_ParamLimits

0xb903,	// (0x0004acbb) list_double2_large_graphic_pane_g2

0xc0e0,	// (0x0004b498) list_double2_large_graphic_pane_g3_ParamLimits

0xc0e0,	// (0x0004b498) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004e9ee) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004e9ee) list_double2_large_graphic_pane_g

0xb914,	// (0x0004accc) list_double2_large_graphic_pane_t1_ParamLimits

0xb914,	// (0x0004accc) list_double2_large_graphic_pane_t1

0xb92a,	// (0x0004ace2) list_double2_large_graphic_pane_t2_ParamLimits

0xb92a,	// (0x0004ace2) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0004e9f5) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0004e9f5) list_double2_large_graphic_pane_t

0xb93c,	// (0x0004acf4) list_double_heading_pane_g1_ParamLimits

0xb93c,	// (0x0004acf4) list_double_heading_pane_g1

0xb94d,	// (0x0004ad05) list_double_heading_pane_g2_ParamLimits

0xb94d,	// (0x0004ad05) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0004e9fa) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0004e9fa) list_double_heading_pane_g

0xb959,	// (0x0004ad11) list_double_heading_pane_t1_ParamLimits

0xb959,	// (0x0004ad11) list_double_heading_pane_t1

0xb7aa,	// (0x0004ab62) list_double_heading_pane_t2_ParamLimits

0xb7aa,	// (0x0004ab62) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004e9ff) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004e9ff) list_double_heading_pane_t

0xb96f,	// (0x0004ad27) list_double_graphic_heading_pane_g1_ParamLimits

0xb96f,	// (0x0004ad27) list_double_graphic_heading_pane_g1

0xb93c,	// (0x0004acf4) list_double_graphic_heading_pane_g2_ParamLimits

0xb93c,	// (0x0004acf4) list_double_graphic_heading_pane_g2

0xb94d,	// (0x0004ad05) list_double_graphic_heading_pane_g3_ParamLimits

0xb94d,	// (0x0004ad05) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0004ea04) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0004ea04) list_double_graphic_heading_pane_g

0xb97b,	// (0x0004ad33) list_double_graphic_heading_pane_t1_ParamLimits

0xb97b,	// (0x0004ad33) list_double_graphic_heading_pane_t1

0xb873,	// (0x0004ac2b) list_double_graphic_heading_pane_t2_ParamLimits

0xb873,	// (0x0004ac2b) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0004ea0b) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0004ea0b) list_double_graphic_heading_pane_t

0xb991,	// (0x0004ad49) list_double_time_pane_g1_ParamLimits

0xb991,	// (0x0004ad49) list_double_time_pane_g1

0xb9a2,	// (0x0004ad5a) list_double_time_pane_g2_ParamLimits

0xb9a2,	// (0x0004ad5a) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004ea10) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004ea10) list_double_time_pane_g

0xb9ae,	// (0x0004ad66) list_double_time_pane_t1_ParamLimits

0xb9ae,	// (0x0004ad66) list_double_time_pane_t1

0xb9c4,	// (0x0004ad7c) list_double_time_pane_t2_ParamLimits

0xb9c4,	// (0x0004ad7c) list_double_time_pane_t2

0xb9d6,	// (0x0004ad8e) list_double_time_pane_t3_ParamLimits

0xb9d6,	// (0x0004ad8e) list_double_time_pane_t3

0xb9e8,	// (0x0004ada0) list_double_time_pane_t4_ParamLimits

0xb9e8,	// (0x0004ada0) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0004ea15) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0004ea15) list_double_time_pane_t

0xb9fa,	// (0x0004adb2) list_setting_pane_g1_ParamLimits

0xb9fa,	// (0x0004adb2) list_setting_pane_g1

0xb788,	// (0x0004ab40) list_setting_pane_g2_ParamLimits

0xb788,	// (0x0004ab40) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004ea1e) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004ea1e) list_setting_pane_g

0xba06,	// (0x0004adbe) list_setting_pane_t1_ParamLimits

0xba06,	// (0x0004adbe) list_setting_pane_t1

0xba20,	// (0x0004add8) list_setting_pane_t2_ParamLimits

0xba20,	// (0x0004add8) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0004ea23) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0004ea23) list_setting_pane_t

0xba5f,	// (0x0004ae17) set_value_pane_cp_ParamLimits

0xba5f,	// (0x0004ae17) set_value_pane_cp

0xba6b,	// (0x0004ae23) list_setting_number_pane_g1_ParamLimits

0xba6b,	// (0x0004ae23) list_setting_number_pane_g1

0xba77,	// (0x0004ae2f) list_setting_number_pane_g2_ParamLimits

0xba77,	// (0x0004ae2f) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0004ea2a) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0004ea2a) list_setting_number_pane_g

0xba83,	// (0x0004ae3b) list_setting_number_pane_t1_ParamLimits

0xba83,	// (0x0004ae3b) list_setting_number_pane_t1

0xba9c,	// (0x0004ae54) list_setting_number_pane_t2_ParamLimits

0xba9c,	// (0x0004ae54) list_setting_number_pane_t2

0xbab6,	// (0x0004ae6e) list_setting_number_pane_t3_ParamLimits

0xbab6,	// (0x0004ae6e) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0004ea2f) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0004ea2f) list_setting_number_pane_t

0xba5f,	// (0x0004ae17) set_value_pane_ParamLimits

0xba5f,	// (0x0004ae17) set_value_pane

0x3ef7,	// (0x000432af) bg_set_opt_pane_ParamLimits

0x3ef7,	// (0x000432af) bg_set_opt_pane

0x0417,	// (0x0003f7cf) set_value_pane_t1

0x3f18,	// (0x000432d0) slider_set_pane_cp3

0x3f21,	// (0x000432d9) volume_small_pane_cp

0x3f2a,	// (0x000432e2) list_form_gen_pane

0x3f33,	// (0x000432eb) scroll_pane_cp8

0xbaf9,	// (0x0004aeb1) form_field_data_pane_ParamLimits

0xbaf9,	// (0x0004aeb1) form_field_data_pane

0xbb10,	// (0x0004aec8) form_field_data_wide_pane_ParamLimits

0xbb10,	// (0x0004aec8) form_field_data_wide_pane

0xbb30,	// (0x0004aee8) form_field_popup_pane_ParamLimits

0xbb30,	// (0x0004aee8) form_field_popup_pane

0xbb48,	// (0x0004af00) form_field_popup_wide_pane_ParamLimits

0xbb48,	// (0x0004af00) form_field_popup_wide_pane

0x04b3,	// (0x0003f86b) form_field_slider_pane_ParamLimits

0x04b3,	// (0x0003f86b) form_field_slider_pane

0x04c6,	// (0x0003f87e) form_field_slider_wide_pane_ParamLimits

0x04c6,	// (0x0003f87e) form_field_slider_wide_pane

0x3f44,	// (0x000432fc) data_form_pane

0xbb69,	// (0x0004af21) form_field_data_pane_t1

0x3f50,	// (0x00043308) input_focus_pane

0x04fb,	// (0x0003f8b3) data_form_wide_pane

0x0518,	// (0x0003f8d0) form_field_data_wide_pane_t1

0x3cb5,	// (0x0004306d) input_focus_pane_cp6

0xbb83,	// (0x0004af3b) form_field_popup_pane_t1

0x3f50,	// (0x00043308) input_focus_pane_cp7

0x3f72,	// (0x0004332a) list_form_pane

0x055a,	// (0x0003f912) form_field_popup_wide_pane_t1

0x3f50,	// (0x00043308) input_focus_pane_cp8

0x3f7e,	// (0x00043336) list_form_wide_pane

0xbba5,	// (0x0004af5d) form_field_slider_pane_t1_ParamLimits

0xbba5,	// (0x0004af5d) form_field_slider_pane_t1

0xbbbd,	// (0x0004af75) form_field_slider_pane_t2_ParamLimits

0xbbbd,	// (0x0004af75) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0004ea3f) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0004ea3f) form_field_slider_pane_t

0x392a,	// (0x00042ce2) input_focus_pane_cp9_ParamLimits

0x392a,	// (0x00042ce2) input_focus_pane_cp9

0xbbd2,	// (0x0004af8a) slider_cont_pane_ParamLimits

0xbbd2,	// (0x0004af8a) slider_cont_pane

0x3f8a,	// (0x00043342) form_field_slider_wide_pane_t1_ParamLimits

0x3f8a,	// (0x00043342) form_field_slider_wide_pane_t1

0x05b6,	// (0x0003f96e) form_field_slider_wide_pane_t2_ParamLimits

0x05b6,	// (0x0003f96e) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0004ea44) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0004ea44) form_field_slider_wide_pane_t

0x392a,	// (0x00042ce2) input_focus_pane_cp10_ParamLimits

0x392a,	// (0x00042ce2) input_focus_pane_cp10

0xbbe6,	// (0x0004af9e) slider_cont_pane_cp1_ParamLimits

0xbbe6,	// (0x0004af9e) slider_cont_pane_cp1

0xbbfa,	// (0x0004afb2) slider_form_pane_cp

0x3f9c,	// (0x00043354) input_focus_pane_g1

0x3fa4,	// (0x0004335c) input_focus_pane_g2

0x3fac,	// (0x00043364) input_focus_pane_g3

0x3fb4,	// (0x0004336c) input_focus_pane_g4

0x3fbc,	// (0x00043374) input_focus_pane_g5

0x3fc4,	// (0x0004337c) input_focus_pane_g6

0x3fcc,	// (0x00043384) input_focus_pane_g7

0x3fd4,	// (0x0004338c) input_focus_pane_g8

0x3fdc,	// (0x00043394) input_focus_pane_g9

0x35c5,	// (0x0004297d) input_focus_pane_g10

0x0009,

0xf691,	// (0x0004ea49) input_focus_pane_g

0x5a4a,	// (0x00044e02) wait_border_pane_g3_copy1

0xbc02,	// (0x0004afba) data_form_pane_t1

0x35c5,	// (0x0004297d) wait_anim_pane_g1_copy1

0xbd1e,	// (0x0004b0d6) data_form_wide_pane_t1

0xbc1b,	// (0x0004afd3) list_form_graphic_pane_cp_ParamLimits

0xbc1b,	// (0x0004afd3) list_form_graphic_pane_cp

0x695f,	// (0x00045d17) slider_form_pane_g1

0x6968,	// (0x00045d20) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0004ed47) slider_form_pane_g

0xbc2c,	// (0x0004afe4) list_form_graphic_pane_ParamLimits

0xbc2c,	// (0x0004afe4) list_form_graphic_pane

0x0634,	// (0x0003f9ec) list_form_graphic_pane_g1

0x063c,	// (0x0003f9f4) list_form_graphic_pane_t1_ParamLimits

0x063c,	// (0x0003f9f4) list_form_graphic_pane_t1

0x36af,	// (0x00042a67) list_highlight_pane_cp5_ParamLimits

0x36af,	// (0x00042a67) list_highlight_pane_cp5

0xbc3e,	// (0x0004aff6) find_pane_g1

0x3fe4,	// (0x0004339c) input_find_pane

0xbc47,	// (0x0004afff) input_find_pane_g1_ParamLimits

0xbc47,	// (0x0004afff) input_find_pane_g1

0xbc53,	// (0x0004b00b) input_find_pane_t1_ParamLimits

0xbc53,	// (0x0004b00b) input_find_pane_t1

0xbc68,	// (0x0004b020) input_find_pane_t2_ParamLimits

0xbc68,	// (0x0004b020) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0004ea5e) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0004ea5e) input_find_pane_t

0x3fed,	// (0x000433a5) input_focus_pane_cp5_ParamLimits

0x3fed,	// (0x000433a5) input_focus_pane_cp5

0x4007,	// (0x000433bf) bg_popup_window_pane_cp2_ParamLimits

0x4007,	// (0x000433bf) bg_popup_window_pane_cp2

0x4014,	// (0x000433cc) listscroll_menu_pane_ParamLimits

0x4014,	// (0x000433cc) listscroll_menu_pane

0xd3d4,	// (0x0004c78c) popup_submenu_window_ParamLimits

0xd3d4,	// (0x0004c78c) popup_submenu_window

0x404c,	// (0x00043404) find_popup_pane_g1

0x4054,	// (0x0004340c) input_popup_find_pane_cp

0x3fed,	// (0x000433a5) input_focus_pane_cp4_ParamLimits

0x3fed,	// (0x000433a5) input_focus_pane_cp4

0x406a,	// (0x00043422) input_popup_find_pane_t1_ParamLimits

0x406a,	// (0x00043422) input_popup_find_pane_t1

0x35cf,	// (0x00042987) bg_popup_sub_pane_cp

0x4098,	// (0x00043450) listscroll_popup_sub_pane

0x40a0,	// (0x00043458) list_submenu_pane_ParamLimits

0x40a0,	// (0x00043458) list_submenu_pane

0x40b1,	// (0x00043469) scroll_pane_cp4

0x40b9,	// (0x00043471) list_single_popup_submenu_pane_ParamLimits

0x40b9,	// (0x00043471) list_single_popup_submenu_pane

0x40cd,	// (0x00043485) list_single_popup_submenu_pane_g1

0x40d5,	// (0x0004348d) list_single_popup_submenu_pane_t1_ParamLimits

0x40d5,	// (0x0004348d) list_single_popup_submenu_pane_t1

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp1_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp1

0x40ea,	// (0x000434a2) tabs_2_active_pane_g1

0xd40e,	// (0x0004c7c6) tabs_2_active_pane_t1

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp1_ParamLimits

0x392a,	// (0x00042ce2) bg_passive_tab_pane_cp1

0x40ea,	// (0x000434a2) tabs_2_passive_pane_g1

0xd40e,	// (0x0004c7c6) tabs_2_passive_pane_t1

0x36af,	// (0x00042a67) bg_active_tab_pane_cp4

0xd420,	// (0x0004c7d8) tabs_2_long_active_pane_t1

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp4

0x1724,	// (0x00040adc) list_single_midp_graphic_pane_g4_ParamLimits

0x36af,	// (0x00042a67) bg_active_tab_pane_cp5

0xd433,	// (0x0004c7eb) tabs_3_long_active_pane_t1

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp5

0x1724,	// (0x00040adc) list_single_midp_graphic_pane_g4

0x36af,	// (0x00042a67) bg_popup_window_pane_cp13_ParamLimits

0x36af,	// (0x00042a67) bg_popup_window_pane_cp13

0x414c,	// (0x00043504) listscroll_popup_fast_pane_ParamLimits

0x414c,	// (0x00043504) listscroll_popup_fast_pane

0x415b,	// (0x00043513) grid_popup_fast_pane_ParamLimits

0x415b,	// (0x00043513) grid_popup_fast_pane

0x416d,	// (0x00043525) scroll_pane_cp9_ParamLimits

0x416d,	// (0x00043525) scroll_pane_cp9

0x8209,	// (0x000475c1) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8209,	// (0x000475c1) list_single_graphic_hl_pane_t1_cp2

0x4191,	// (0x00043549) input_focus_pane_cp20_ParamLimits

0x4191,	// (0x00043549) input_focus_pane_cp20

0x419f,	// (0x00043557) query_popup_data_pane_t1_ParamLimits

0x419f,	// (0x00043557) query_popup_data_pane_t1

0x41b2,	// (0x0004356a) query_popup_data_pane_t2_ParamLimits

0x41b2,	// (0x0004356a) query_popup_data_pane_t2

0x41f8,	// (0x000435b0) query_popup_data_pane_t3_ParamLimits

0x41f8,	// (0x000435b0) query_popup_data_pane_t3

0x4239,	// (0x000435f1) query_popup_data_pane_t4_ParamLimits

0x4239,	// (0x000435f1) query_popup_data_pane_t4

0x4275,	// (0x0004362d) query_popup_data_pane_t5_ParamLimits

0x4275,	// (0x0004362d) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0004ea63) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0004ea63) query_popup_data_pane_t

0x3f9c,	// (0x00043354) bg_set_opt_pane_g1

0x3fa4,	// (0x0004335c) bg_set_opt_pane_g2

0x3fac,	// (0x00043364) bg_set_opt_pane_g3

0x3fb4,	// (0x0004336c) bg_set_opt_pane_g4

0x3fbc,	// (0x00043374) bg_set_opt_pane_g5

0x3fc4,	// (0x0004337c) bg_set_opt_pane_g6

0x3fcc,	// (0x00043384) bg_set_opt_pane_g7

0x3fd4,	// (0x0004338c) bg_set_opt_pane_g8

0x3fdc,	// (0x00043394) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0004ea6e) bg_set_opt_pane_g

0x1730,	// (0x00040ae8) control_top_pane_stacon_ParamLimits

0x1730,	// (0x00040ae8) control_top_pane_stacon

0x1783,	// (0x00040b3b) signal_pane_stacon_ParamLimits

0x1783,	// (0x00040b3b) signal_pane_stacon

0x4867,	// (0x00043c1f) stacon_top_pane_g1_ParamLimits

0x4867,	// (0x00043c1f) stacon_top_pane_g1

0x17a8,	// (0x00040b60) title_pane_stacon_ParamLimits

0x17a8,	// (0x00040b60) title_pane_stacon

0x17d2,	// (0x00040b8a) uni_indicator_pane_stacon_ParamLimits

0x17d2,	// (0x00040b8a) uni_indicator_pane_stacon

0x17e7,	// (0x00040b9f) battery_pane_stacon_ParamLimits

0x17e7,	// (0x00040b9f) battery_pane_stacon

0x182b,	// (0x00040be3) control_bottom_pane_stacon_ParamLimits

0x182b,	// (0x00040be3) control_bottom_pane_stacon

0x184e,	// (0x00040c06) navi_pane_stacon_ParamLimits

0x184e,	// (0x00040c06) navi_pane_stacon

0x4889,	// (0x00043c41) stacon_bottom_pane_g1_ParamLimits

0x4889,	// (0x00043c41) stacon_bottom_pane_g1

0x1477,	// (0x0004082f) aid_levels_signal_lsc_ParamLimits

0x1477,	// (0x0004082f) aid_levels_signal_lsc

0x148d,	// (0x00040845) signal_pane_stacon_g1_ParamLimits

0x148d,	// (0x00040845) signal_pane_stacon_g1

0x14a1,	// (0x00040859) signal_pane_stacon_g2_ParamLimits

0x14a1,	// (0x00040859) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0004ea81) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0004ea81) signal_pane_stacon_g

0x14d6,	// (0x0004088e) title_pane_stacon_t1_ParamLimits

0x14d6,	// (0x0004088e) title_pane_stacon_t1

0x42b9,	// (0x00043671) uni_indicator_pane_stacon_g1

0x42c3,	// (0x0004367b) uni_indicator_pane_stacon_g2

0x42cd,	// (0x00043685) uni_indicator_pane_stacon_g3

0x42d7,	// (0x0004368f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0004ea8d) uni_indicator_pane_stacon_g

0x14fb,	// (0x000408b3) control_top_pane_stacon_g1

0x1503,	// (0x000408bb) control_top_pane_stacon_t1_ParamLimits

0x1503,	// (0x000408bb) control_top_pane_stacon_t1

0x153a,	// (0x000408f2) aid_levels_battery_lsc_ParamLimits

0x153a,	// (0x000408f2) aid_levels_battery_lsc

0x1551,	// (0x00040909) battery_pane_stacon_g1_ParamLimits

0x1551,	// (0x00040909) battery_pane_stacon_g1

0x1564,	// (0x0004091c) battery_pane_stacon_g2_ParamLimits

0x1564,	// (0x0004091c) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0004ea96) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0004ea96) battery_pane_stacon_g

0x15a2,	// (0x0004095a) navi_icon_pane_stacon

0x15b6,	// (0x0004096e) navi_navi_pane_stacon

0x15a2,	// (0x0004095a) navi_text_pane_stacon

0x14fb,	// (0x000408b3) control_bottom_pane_stacon_g1

0x15ca,	// (0x00040982) control_bottom_pane_stacon_t1_ParamLimits

0x15ca,	// (0x00040982) control_bottom_pane_stacon_t1

0xd445,	// (0x0004c7fd) grid_app_pane_ParamLimits

0xd445,	// (0x0004c7fd) grid_app_pane

0xd47d,	// (0x0004c835) scroll_pane_cp15_ParamLimits

0xd47d,	// (0x0004c835) scroll_pane_cp15

0xd492,	// (0x0004c84a) cell_app_pane_ParamLimits

0xd492,	// (0x0004c84a) cell_app_pane

0xd4d7,	// (0x0004c88f) cell_app_pane_g1_ParamLimits

0xd4d7,	// (0x0004c88f) cell_app_pane_g1

0x437c,	// (0x00043734) cell_app_pane_g2_ParamLimits

0x437c,	// (0x00043734) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0004ea9b) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0004ea9b) cell_app_pane_g

0xd4fb,	// (0x0004c8b3) cell_app_pane_t1_ParamLimits

0xd4fb,	// (0x0004c8b3) cell_app_pane_t1

0x439f,	// (0x00043757) grid_highlight_pane_ParamLimits

0x439f,	// (0x00043757) grid_highlight_pane

0x3f9c,	// (0x00043354) cell_highlight_pane_g1

0x3fa4,	// (0x0004335c) cell_highlight_pane_g2

0x3fac,	// (0x00043364) cell_highlight_pane_g3

0x3fb4,	// (0x0004336c) cell_highlight_pane_g4

0x3fbc,	// (0x00043374) cell_highlight_pane_g5

0x3fc4,	// (0x0004337c) cell_highlight_pane_g6

0x3fcc,	// (0x00043384) cell_highlight_pane_g7

0x3fd4,	// (0x0004338c) cell_highlight_pane_g8

0x3fdc,	// (0x00043394) cell_highlight_pane_g9

0x35c5,	// (0x0004297d) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0004ea49) cell_highlight_pane_g

0x43b0,	// (0x00043768) bg_scroll_pane

0x1614,	// (0x000409cc) scroll_handle_pane

0x43f7,	// (0x000437af) scroll_bg_pane_g1

0x440c,	// (0x000437c4) scroll_bg_pane_g2

0x4424,	// (0x000437dc) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0004eaa0) scroll_bg_pane_g

0x4439,	// (0x000437f1) scroll_handle_focus_pane_ParamLimits

0x4439,	// (0x000437f1) scroll_handle_focus_pane

0x43f7,	// (0x000437af) scroll_handle_pane_g1

0x4446,	// (0x000437fe) scroll_handle_pane_g2

0x4424,	// (0x000437dc) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0004eaa7) scroll_handle_pane_g

0x3fed,	// (0x000433a5) bg_popup_sub_pane_cp21_ParamLimits

0x3fed,	// (0x000433a5) bg_popup_sub_pane_cp21

0x445a,	// (0x00043812) popup_fep_japan_predictive_window_t1_ParamLimits

0x445a,	// (0x00043812) popup_fep_japan_predictive_window_t1

0x4474,	// (0x0004382c) popup_fep_japan_predictive_window_t2_ParamLimits

0x4474,	// (0x0004382c) popup_fep_japan_predictive_window_t2

0x44a7,	// (0x0004385f) popup_fep_japan_predictive_window_t3_ParamLimits

0x44a7,	// (0x0004385f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0004eaae) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0004eaae) popup_fep_japan_predictive_window_t

0x35cf,	// (0x00042987) bg_popup_sub_pane_cp23

0x44de,	// (0x00043896) listscroll_japin_cand_pane

0x44e6,	// (0x0004389e) popup_fep_japan_candidate_window_t1

0x44f4,	// (0x000438ac) candidate_pane_ParamLimits

0x44f4,	// (0x000438ac) candidate_pane

0x4506,	// (0x000438be) scroll_pane_cp30

0x450e,	// (0x000438c6) list_single_popup_jap_candidate_pane_ParamLimits

0x450e,	// (0x000438c6) list_single_popup_jap_candidate_pane

0x35cf,	// (0x00042987) list_highlight_pane_cp30

0x4523,	// (0x000438db) list_single_popup_jap_candidate_pane_t1

0x4532,	// (0x000438ea) level_1_signal

0x4544,	// (0x000438fc) level_2_signal

0x4557,	// (0x0004390f) level_3_signal

0x456a,	// (0x00043922) level_4_signal

0x457d,	// (0x00043935) level_5_signal

0x4590,	// (0x00043948) level_6_signal

0x45a3,	// (0x0004395b) level_7_signal

0x4532,	// (0x000438ea) level_1_battery

0x4544,	// (0x000438fc) level_2_battery

0x4557,	// (0x0004390f) level_3_battery

0x456a,	// (0x00043922) level_4_battery

0x457d,	// (0x00043935) level_5_battery

0x4590,	// (0x00043948) level_6_battery

0x45a3,	// (0x0004395b) level_7_battery

0x45ce,	// (0x00043986) list_menu_pane_ParamLimits

0x45ce,	// (0x00043986) list_menu_pane

0x45e4,	// (0x0004399c) scroll_pane_cp25_ParamLimits

0x45e4,	// (0x0004399c) scroll_pane_cp25

0x45fd,	// (0x000439b5) list_double2_graphic_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double2_graphic_pane_cp2

0x45fd,	// (0x000439b5) list_double2_large_graphic_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double2_large_graphic_pane_cp2

0x45fd,	// (0x000439b5) list_double2_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double2_pane_cp2

0x45fd,	// (0x000439b5) list_double_graphic_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double_graphic_pane_cp2

0x45fd,	// (0x000439b5) list_double_large_graphic_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double_large_graphic_pane_cp2

0x45fd,	// (0x000439b5) list_double_number_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double_number_pane_cp2

0x45fd,	// (0x000439b5) list_double_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double_pane_cp2

0xd512,	// (0x0004c8ca) list_single_2graphic_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_2graphic_pane_cp2

0xd512,	// (0x0004c8ca) list_single_graphic_heading_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_graphic_heading_pane_cp2

0xd512,	// (0x0004c8ca) list_single_graphic_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_graphic_pane_cp2

0xd512,	// (0x0004c8ca) list_single_heading_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_heading_pane_cp2

0x463a,	// (0x000439f2) list_single_large_graphic_pane_cp2_ParamLimits

0x463a,	// (0x000439f2) list_single_large_graphic_pane_cp2

0xd512,	// (0x0004c8ca) list_single_number_heading_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_number_heading_pane_cp2

0xd512,	// (0x0004c8ca) list_single_number_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_number_pane_cp2

0xd512,	// (0x0004c8ca) list_single_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_pane_cp2

0x46b6,	// (0x00043a6e) bg_popup_sub_pane_cp22

0x16c6,	// (0x00040a7e) popup_side_volume_key_window_g1

0x16f0,	// (0x00040aa8) popup_side_volume_key_window_t1

0x170c,	// (0x00040ac4) volume_small_pane_cp1

0x392a,	// (0x00042ce2) bg_popup_sub_pane_cp24_ParamLimits

0x392a,	// (0x00042ce2) bg_popup_sub_pane_cp24

0x46cc,	// (0x00043a84) fep_china_uni_candidate_pane_ParamLimits

0x46cc,	// (0x00043a84) fep_china_uni_candidate_pane

0x46e0,	// (0x00043a98) fep_china_uni_entry_pane

0x46f0,	// (0x00043aa8) popup_fep_china_uni_window_g1

0x470c,	// (0x00043ac4) fep_china_uni_entry_pane_g1

0x4714,	// (0x00043acc) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0004eadf) fep_china_uni_entry_pane_g

0x471c,	// (0x00043ad4) fep_entry_item_pane

0x4726,	// (0x00043ade) fep_candidate_item_pane

0x472e,	// (0x00043ae6) fep_china_uni_candidate_pane_g1

0x4736,	// (0x00043aee) fep_china_uni_candidate_pane_g2

0x473e,	// (0x00043af6) fep_china_uni_candidate_pane_g3

0x4746,	// (0x00043afe) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0004eae4) fep_china_uni_candidate_pane_g

0x35c5,	// (0x0004297d) fep_entry_item_pane_g1

0x474e,	// (0x00043b06) fep_entry_item_pane_t1_ParamLimits

0x474e,	// (0x00043b06) fep_entry_item_pane_t1

0x4764,	// (0x00043b1c) fep_candidate_item_pane_t1_ParamLimits

0x4764,	// (0x00043b1c) fep_candidate_item_pane_t1

0x4779,	// (0x00043b31) fep_candidate_item_pane_t2_ParamLimits

0x4779,	// (0x00043b31) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0004eaed) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0004eaed) fep_candidate_item_pane_t

0x36af,	// (0x00042a67) list_highlight_pane_cp31_ParamLimits

0x36af,	// (0x00042a67) list_highlight_pane_cp31

0x478b,	// (0x00043b43) level_1_signal_lsc

0x4794,	// (0x00043b4c) level_2_signal_lsc

0x479d,	// (0x00043b55) level_3_signal_lsc

0x47a6,	// (0x00043b5e) level_4_signal_lsc

0x47af,	// (0x00043b67) level_5_signal_lsc

0x47b8,	// (0x00043b70) level_6_signal_lsc

0x47c1,	// (0x00043b79) level_7_signal_lsc

0x47c1,	// (0x00043b79) level_1_battery_lsc

0x47ca,	// (0x00043b82) level_2_battery_lsc

0x47d3,	// (0x00043b8b) level_3_battery_lsc

0x47dc,	// (0x00043b94) level_4_battery_lsc

0x47e5,	// (0x00043b9d) level_5_battery_lsc

0x47ee,	// (0x00043ba6) level_6_battery_lsc

0x478b,	// (0x00043b43) level_7_battery_lsc

0x47f7,	// (0x00043baf) scroll_handle_focus_pane_g1

0x4800,	// (0x00043bb8) scroll_handle_focus_pane_g2

0x4809,	// (0x00043bc1) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0004eaf2) scroll_handle_focus_pane_g

0xbc7d,	// (0x0004b035) list_single_2graphic_pane_g1_ParamLimits

0xbc7d,	// (0x0004b035) list_single_2graphic_pane_g1

0xc0b7,	// (0x0004b46f) list_single_2graphic_pane_g2_ParamLimits

0xc0b7,	// (0x0004b46f) list_single_2graphic_pane_g2

0x2079,	// (0x00041431) list_single_2graphic_pane_g3_ParamLimits

0x2079,	// (0x00041431) list_single_2graphic_pane_g3

0xbc89,	// (0x0004b041) list_single_2graphic_pane_g4_ParamLimits

0xbc89,	// (0x0004b041) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0004eaf9) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0004eaf9) list_single_2graphic_pane_g

0xbc95,	// (0x0004b04d) list_single_2graphic_pane_t1_ParamLimits

0xbc95,	// (0x0004b04d) list_single_2graphic_pane_t1

0xc0f5,	// (0x0004b4ad) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc0f5,	// (0x0004b4ad) list_double2_graphic_large_graphic_pane_g1

0xb903,	// (0x0004acbb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb903,	// (0x0004acbb) list_double2_graphic_large_graphic_pane_g2

0xc0e0,	// (0x0004b498) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xc0e0,	// (0x0004b498) list_double2_graphic_large_graphic_pane_g3

0xbcc3,	// (0x0004b07b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbcc3,	// (0x0004b07b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0004eb02) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0004eb02) list_double2_graphic_large_graphic_pane_g

0xbccf,	// (0x0004b087) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbccf,	// (0x0004b087) list_double2_graphic_large_graphic_pane_t1

0xbce5,	// (0x0004b09d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbce5,	// (0x0004b09d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0004eb0b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0004eb0b) list_double2_graphic_large_graphic_pane_t

0x4951,	// (0x00043d09) popup_fast_swap_window_ParamLimits

0x4951,	// (0x00043d09) popup_fast_swap_window

0x496d,	// (0x00043d25) popup_side_volume_key_window

0x4989,	// (0x00043d41) stacon_top_pane

0x4993,	// (0x00043d4b) status_pane_ParamLimits

0x4993,	// (0x00043d4b) status_pane

0xd59f,	// (0x0004c957) status_small_pane

0x35cf,	// (0x00042987) control_pane

0x35cf,	// (0x00042987) stacon_bottom_pane

0x3f33,	// (0x000432eb) scroll_pane_cp121

0x3f2a,	// (0x000432e2) set_content_pane

0x4812,	// (0x00043bca) bg_active_tab_pane_g1_cp1

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp1

0x4824,	// (0x00043bdc) bg_active_tab_pane_g3_cp1

0x4812,	// (0x00043bca) bg_passive_tab_pane_g1_cp1

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp1

0x4824,	// (0x00043bdc) bg_passive_tab_pane_g3_cp1

0x482d,	// (0x00043be5) bg_active_tab_pane_g1_cp2

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp2

0x4836,	// (0x00043bee) bg_active_tab_pane_g3_cp2

0x482d,	// (0x00043be5) bg_passive_tab_pane_g1_cp2

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp2

0x4836,	// (0x00043bee) bg_passive_tab_pane_g3_cp2

0x483f,	// (0x00043bf7) bg_active_tab_pane_g1_cp3

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp3

0x4848,	// (0x00043c00) bg_active_tab_pane_g3_cp3

0x483f,	// (0x00043bf7) bg_passive_tab_pane_g1_cp3

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp3

0x4848,	// (0x00043c00) bg_passive_tab_pane_g3_cp3

0x4851,	// (0x00043c09) bg_active_tab_pane_g1_cp4

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp4

0x485c,	// (0x00043c14) bg_active_tab_pane_g3_cp4

0x4851,	// (0x00043c09) bg_passive_tab_pane_g1_cp4

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp4

0x485c,	// (0x00043c14) bg_passive_tab_pane_g3_cp4

0x48a5,	// (0x00043c5d) bg_active_tab_pane_g1_cp5

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp5

0x48ae,	// (0x00043c66) bg_active_tab_pane_g3_cp5

0x48a5,	// (0x00043c5d) bg_passive_tab_pane_g1_cp5

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp5

0x48ae,	// (0x00043c66) bg_passive_tab_pane_g3_cp5

0x6f07,	// (0x000462bf) list_set_graphic_pane_ParamLimits

0x6f07,	// (0x000462bf) list_set_graphic_pane

0x35cf,	// (0x00042987) bg_set_opt_pane_cp4

0x48d4,	// (0x00043c8c) list_set_graphic_pane_g1_ParamLimits

0x48d4,	// (0x00043c8c) list_set_graphic_pane_g1

0x48e0,	// (0x00043c98) list_set_graphic_pane_g2_ParamLimits

0x48e0,	// (0x00043c98) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0004eb10) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0004eb10) list_set_graphic_pane_g

0x0009,

0xfac1,	// (0x0004ee79) volume_small_pane_cp_g

0x4904,	// (0x00043cbc) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4904,	// (0x00043cbc) list_double2_large_graphic_pane_g1_cp2

0x4910,	// (0x00043cc8) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4910,	// (0x00043cc8) list_double2_large_graphic_pane_g2_cp2

0x4921,	// (0x00043cd9) list_double2_large_graphic_pane_g3_cp2

0x4929,	// (0x00043ce1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4929,	// (0x00043ce1) list_double2_large_graphic_pane_t1_cp2

0x493f,	// (0x00043cf7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x493f,	// (0x00043cf7) list_double2_large_graphic_pane_t2_cp2

0x651d,	// (0x000458d5) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x651d,	// (0x000458d5) list_double_large_graphic_pane_g1_cp2

0x652e,	// (0x000458e6) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x652e,	// (0x000458e6) list_double_large_graphic_pane_g2_cp2

0x4aba,	// (0x00043e72) list_double_large_graphic_pane_g3_cp2

0x653f,	// (0x000458f7) list_double_large_graphic_pane_g4_cp

0x6547,	// (0x000458ff) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6547,	// (0x000458ff) list_double_large_graphic_pane_t1_cp2

0x655e,	// (0x00045916) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x655e,	// (0x00045916) list_double_large_graphic_pane_t2_cp2

0x49ac,	// (0x00043d64) list_double2_graphic_pane_g1_cp2_ParamLimits

0x49ac,	// (0x00043d64) list_double2_graphic_pane_g1_cp2

0x49ba,	// (0x00043d72) list_double2_graphic_pane_g2_cp2_ParamLimits

0x49ba,	// (0x00043d72) list_double2_graphic_pane_g2_cp2

0x49cb,	// (0x00043d83) list_double2_graphic_pane_g3_cp2

0x49d5,	// (0x00043d8d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x49d5,	// (0x00043d8d) list_double2_graphic_pane_t1_cp2

0x49eb,	// (0x00043da3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x49eb,	// (0x00043da3) list_double2_graphic_pane_t2_cp2

0x49fd,	// (0x00043db5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x49fd,	// (0x00043db5) list_single_number_heading_pane_g1_cp2

0x4a09,	// (0x00043dc1) list_single_number_heading_pane_g2_cp2

0x4a11,	// (0x00043dc9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4a11,	// (0x00043dc9) list_single_number_heading_pane_t1_cp2

0x4a27,	// (0x00043ddf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4a27,	// (0x00043ddf) list_single_number_heading_pane_t2_cp2

0x4a39,	// (0x00043df1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4a39,	// (0x00043df1) list_single_number_heading_pane_t3_cp2

0x49fd,	// (0x00043db5) list_single_heading_pane_g1_cp2_ParamLimits

0x49fd,	// (0x00043db5) list_single_heading_pane_g1_cp2

0x4a09,	// (0x00043dc1) list_single_heading_pane_g2_cp2

0x4a11,	// (0x00043dc9) list_single_heading_pane_t1_cp2_ParamLimits

0x4a11,	// (0x00043dc9) list_single_heading_pane_t1_cp2

0x6325,	// (0x000456dd) list_single_heading_pane_t2_cp2_ParamLimits

0x6325,	// (0x000456dd) list_single_heading_pane_t2_cp2

0x626d,	// (0x00045625) list_double_graphic_pane_g1_cp2_ParamLimits

0x626d,	// (0x00045625) list_double_graphic_pane_g1_cp2

0x6279,	// (0x00045631) list_double_graphic_pane_g2_cp2_ParamLimits

0x6279,	// (0x00045631) list_double_graphic_pane_g2_cp2

0x6288,	// (0x00045640) list_double_graphic_pane_g3_cp2

0x6290,	// (0x00045648) list_double_graphic_pane_t1_cp2_ParamLimits

0x6290,	// (0x00045648) list_double_graphic_pane_t1_cp2

0x62a6,	// (0x0004565e) list_double_graphic_pane_t2_cp2_ParamLimits

0x62a6,	// (0x0004565e) list_double_graphic_pane_t2_cp2

0x4aae,	// (0x00043e66) list_double_number_pane_g1_cp2_ParamLimits

0x4aae,	// (0x00043e66) list_double_number_pane_g1_cp2

0x4aba,	// (0x00043e72) list_double_number_pane_g2_cp2

0x6231,	// (0x000455e9) list_double_number_pane_t1_cp2_ParamLimits

0x6231,	// (0x000455e9) list_double_number_pane_t1_cp2

0x6245,	// (0x000455fd) list_double_number_pane_t2_cp2_ParamLimits

0x6245,	// (0x000455fd) list_double_number_pane_t2_cp2

0x625b,	// (0x00045613) list_double_number_pane_t3_cp2_ParamLimits

0x625b,	// (0x00045613) list_double_number_pane_t3_cp2

0x611a,	// (0x000454d2) list_single_graphic_pane_g1_cp2_ParamLimits

0x611a,	// (0x000454d2) list_single_graphic_pane_g1_cp2

0x4b12,	// (0x00043eca) list_single_graphic_pane_g2_cp2_ParamLimits

0x4b12,	// (0x00043eca) list_single_graphic_pane_g2_cp2

0x4b1e,	// (0x00043ed6) list_single_graphic_pane_g3_cp2

0x60f0,	// (0x000454a8) list_single_graphic_pane_t1_cp2_ParamLimits

0x60f0,	// (0x000454a8) list_single_graphic_pane_t1_cp2

0x4b12,	// (0x00043eca) list_single_number_pane_g1_cp2_ParamLimits

0x4b12,	// (0x00043eca) list_single_number_pane_g1_cp2

0x4b1e,	// (0x00043ed6) list_single_number_pane_g2_cp2

0x60f0,	// (0x000454a8) list_single_number_pane_t1_cp2_ParamLimits

0x60f0,	// (0x000454a8) list_single_number_pane_t1_cp2

0x6106,	// (0x000454be) list_single_number_pane_t2_cp2_ParamLimits

0x6106,	// (0x000454be) list_single_number_pane_t2_cp2

0x4910,	// (0x00043cc8) list_double2_pane_g1_cp2_ParamLimits

0x4910,	// (0x00043cc8) list_double2_pane_g1_cp2

0x4921,	// (0x00043cd9) list_double2_pane_g2_cp2

0x4a86,	// (0x00043e3e) list_double2_pane_t1_cp2_ParamLimits

0x4a86,	// (0x00043e3e) list_double2_pane_t1_cp2

0x4a9c,	// (0x00043e54) list_double2_pane_t2_cp2_ParamLimits

0x4a9c,	// (0x00043e54) list_double2_pane_t2_cp2

0x4aae,	// (0x00043e66) list_double_pane_g1_cp2_ParamLimits

0x4aae,	// (0x00043e66) list_double_pane_g1_cp2

0x4aba,	// (0x00043e72) list_double_pane_g2_cp2

0x4ac2,	// (0x00043e7a) list_double_pane_t1_cp2_ParamLimits

0x4ac2,	// (0x00043e7a) list_double_pane_t1_cp2

0x4ad8,	// (0x00043e90) list_double_pane_t2_cp2_ParamLimits

0x4ad8,	// (0x00043e90) list_double_pane_t2_cp2

0x4b02,	// (0x00043eba) list_single_pane_cp2_g3

0x4b12,	// (0x00043eca) list_single_pane_g1_cp2_ParamLimits

0x4b12,	// (0x00043eca) list_single_pane_g1_cp2

0x4b1e,	// (0x00043ed6) list_single_pane_g2_cp2

0x4b26,	// (0x00043ede) list_single_pane_t1_cp2_ParamLimits

0x4b26,	// (0x00043ede) list_single_pane_t1_cp2

0x4b3e,	// (0x00043ef6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4b3e,	// (0x00043ef6) list_single_large_graphic_pane_g1_cp2

0x4b4a,	// (0x00043f02) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4b4a,	// (0x00043f02) list_single_large_graphic_pane_g2_cp2

0x4b56,	// (0x00043f0e) list_single_large_graphic_pane_g3_cp2

0x4b5e,	// (0x00043f16) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4b5e,	// (0x00043f16) list_single_large_graphic_pane_g4_cp1

0x4b78,	// (0x00043f30) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b78,	// (0x00043f30) list_single_large_graphic_pane_t1_cp2

0x60bc,	// (0x00045474) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x60bc,	// (0x00045474) list_single_graphic_heading_pane_g1_cp2

0x6089,	// (0x00045441) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x6089,	// (0x00045441) list_single_graphic_heading_pane_g4_cp2

0x4b1e,	// (0x00043ed6) list_single_graphic_heading_pane_g5_cp2

0x60c8,	// (0x00045480) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x60c8,	// (0x00045480) list_single_graphic_heading_pane_t1_cp2

0x60de,	// (0x00045496) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x60de,	// (0x00045496) list_single_graphic_heading_pane_t2_cp2

0x607d,	// (0x00045435) list_single_2graphic_pane_g1_cp2_ParamLimits

0x607d,	// (0x00045435) list_single_2graphic_pane_g1_cp2

0x6089,	// (0x00045441) list_single_2graphic_pane_g2_cp2_ParamLimits

0x6089,	// (0x00045441) list_single_2graphic_pane_g2_cp2

0x4b1e,	// (0x00043ed6) list_single_2graphic_pane_g3_cp2

0x609a,	// (0x00045452) list_single_2graphic_pane_g4_cp2_ParamLimits

0x609a,	// (0x00045452) list_single_2graphic_pane_g4_cp2

0x60a6,	// (0x0004545e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x60a6,	// (0x0004545e) list_single_2graphic_pane_t1_cp2

0x35c5,	// (0x0004297d) list_highlight_pane_g10_cp1

0x5c55,	// (0x0004500d) list_highlight_pane_g1_cp1

0x5c5d,	// (0x00045015) list_highlight_pane_g2_cp1

0x5c65,	// (0x0004501d) list_highlight_pane_g3_cp1

0x5c6d,	// (0x00045025) list_highlight_pane_g4_cp1

0x5c75,	// (0x0004502d) list_highlight_pane_g5_cp1

0x5c7d,	// (0x00045035) list_highlight_pane_g6_cp1

0x5c85,	// (0x0004503d) list_highlight_pane_g7_cp1

0x5c8d,	// (0x00045045) list_highlight_pane_g8_cp1

0x5c95,	// (0x0004504d) list_highlight_pane_g9_cp1

0xdbdf,	// (0x0004cf97) form_field_slider_pane_t3

0xdbed,	// (0x0004cfa5) form_field_slider_pane_t4

0x5b91,	// (0x00044f49) slider_form_pane_ParamLimits

0x5b91,	// (0x00044f49) slider_form_pane

0x35cf,	// (0x00042987) control_abbreviations

0x35cf,	// (0x00042987) control_conventions

0x35cf,	// (0x00042987) control_definitions

0x35cf,	// (0x00042987) format_table_attribute

0x636f,	// (0x00045727) bg_popup_preview_window_pane_g9

0x35cf,	// (0x00042987) format_table_data2

0x35cf,	// (0x00042987) format_table_data3

0x35cf,	// (0x00042987) format_table_data_example

0x0008,

0x35cf,	// (0x00042987) intro_purpose

0xf8ef,	// (0x0004eca7) bg_popup_preview_window_pane_g

0x35cf,	// (0x00042987) texts_category

0x35cf,	// (0x00042987) texts_graphics

0x4b8e,	// (0x00043f46) text_digital

0x4b9d,	// (0x00043f55) text_primary

0x4bac,	// (0x00043f64) text_primary_small

0x4bbb,	// (0x00043f73) text_secondary

0x4bca,	// (0x00043f82) text_title

0x6a49,	// (0x00045e01) bg_passive_tab_pane_g1_cp3_srt

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp3_srt

0x6a52,	// (0x00045e0a) bg_passive_tab_pane_g3_cp3_srt

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp3_srt_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp3_srt

0x6a5b,	// (0x00045e13) tabs_4_active_pane_srt_g1

0xdf1f,	// (0x0004d2d7) tabs_4_active_pane_srt_t1_ParamLimits

0xdf1f,	// (0x0004d2d7) tabs_4_active_pane_srt_t1

0x6a49,	// (0x00045e01) bg_active_tab_pane_g1_cp3_copy1

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp3_copy1

0x6a52,	// (0x00045e0a) bg_active_tab_pane_g3_cp3_copy1

0x36af,	// (0x00042a67) tabs_2_long_active_pane_srt_ParamLimits

0x36af,	// (0x00042a67) tabs_2_long_active_pane_srt

0x36af,	// (0x00042a67) tabs_2_long_passive_pane_srt_ParamLimits

0x36af,	// (0x00042a67) tabs_2_long_passive_pane_srt

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp4_srt

0x6792,	// (0x00045b4a) bg_passive_tab_pane_g1_cp4_srt

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp4_srt

0x679b,	// (0x00045b53) bg_passive_tab_pane_g3_cp4_srt

0x36af,	// (0x00042a67) bg_active_tab_pane_cp4_srt_ParamLimits

0x36af,	// (0x00042a67) bg_active_tab_pane_cp4_srt

0xdd49,	// (0x0004d101) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdd49,	// (0x0004d101) tabs_2_long_active_pane_srt_t1

0x6792,	// (0x00045b4a) bg_active_tab_pane_g1_cp4_srt

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp4_srt

0x679b,	// (0x00045b53) bg_active_tab_pane_g3_cp4_srt

0x392a,	// (0x00042ce2) tabs_3_long_active_pane_srt_ParamLimits

0x392a,	// (0x00042ce2) tabs_3_long_active_pane_srt

0x392a,	// (0x00042ce2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x392a,	// (0x00042ce2) tabs_3_long_passive_pane_cp_srt

0x392a,	// (0x00042ce2) tabs_3_long_passive_pane_srt_ParamLimits

0x392a,	// (0x00042ce2) tabs_3_long_passive_pane_srt

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp5_srt

0x48a5,	// (0x00043c5d) bg_passive_tab_pane_g1_cp5_srt

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp5_srt

0x48ae,	// (0x00043c66) bg_passive_tab_pane_g3_cp5_srt

0x36af,	// (0x00042a67) bg_active_tab_pane_cp5_srt_ParamLimits

0x36af,	// (0x00042a67) bg_active_tab_pane_cp5_srt

0xdd33,	// (0x0004d0eb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd33,	// (0x0004d0eb) tabs_3_long_active_pane_srt_t1

0x48a5,	// (0x00043c5d) bg_active_tab_pane_g1_cp5_srt

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp5_srt

0x48ae,	// (0x00043c66) bg_active_tab_pane_g3_cp5_srt

0x6772,	// (0x00045b2a) navi_text_pane_srt_t1

0x676a,	// (0x00045b22) navi_icon_pane_srt_g1

0x4d9f,	// (0x00044157) midp_editing_number_pane_srt

0x4bd9,	// (0x00043f91) midp_ticker_pane_srt

0x4da7,	// (0x0004415f) midp_ticker_pane_srt_g1

0x4daf,	// (0x00044167) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0004eb2f) midp_ticker_pane_srt_g

0x4db7,	// (0x0004416f) midp_ticker_pane_srt_t1

0x675b,	// (0x00045b13) midp_editing_number_pane_t1_copy1

0xd5aa,	// (0x0004c962) listscroll_midp_pane

0xd5aa,	// (0x0004c962) midp_form_pane

0x4c51,	// (0x00044009) midp_info_popup_window_ParamLimits

0x4c51,	// (0x00044009) midp_info_popup_window

0x3fed,	// (0x000433a5) bg_popup_sub_pane_cp50_ParamLimits

0x3fed,	// (0x000433a5) bg_popup_sub_pane_cp50

0x5881,	// (0x00044c39) listscroll_midp_info_pane_ParamLimits

0x5881,	// (0x00044c39) listscroll_midp_info_pane

0x5861,	// (0x00044c19) listscroll_form_midp_pane_ParamLimits

0x5861,	// (0x00044c19) listscroll_form_midp_pane

0x586d,	// (0x00044c25) scroll_bar_cp050

0x5861,	// (0x00044c19) list_midp_pane

0x748d,	// (0x00046845) signal_pane_g2_cp

0x577b,	// (0x00044b33) listscroll_midp_info_pane_t1_ParamLimits

0x577b,	// (0x00044b33) listscroll_midp_info_pane_t1

0x5793,	// (0x00044b4b) listscroll_midp_info_pane_t2_ParamLimits

0x5793,	// (0x00044b4b) listscroll_midp_info_pane_t2

0x57d1,	// (0x00044b89) listscroll_midp_info_pane_t3_ParamLimits

0x57d1,	// (0x00044b89) listscroll_midp_info_pane_t3

0x580b,	// (0x00044bc3) listscroll_midp_info_pane_t4_ParamLimits

0x580b,	// (0x00044bc3) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0004ebe2) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0004ebe2) listscroll_midp_info_pane_t

0x40b1,	// (0x00043469) scroll_pane_cp21

0x5719,	// (0x00044ad1) form_midp_field_choice_group_pane

0x5722,	// (0x00044ada) form_midp_field_text_pane

0x5761,	// (0x00044b19) form_midp_field_time_pane

0x5769,	// (0x00044b21) form_midp_gauge_slider_pane

0x5772,	// (0x00044b2a) form_midp_gauge_wait_pane

0x35cf,	// (0x00042987) form_midp_image_pane

0xbcf7,	// (0x0004b0af) list_single_midp_pane_ParamLimits

0xbcf7,	// (0x0004b0af) list_single_midp_pane

0xdbbe,	// (0x0004cf76) form_midp_field_text_pane_t1

0x5495,	// (0x0004484d) input_focus_pane_cp050

0x5708,	// (0x00044ac0) list_midp_form_text_pane

0x56a0,	// (0x00044a58) form_midp_field_choice_group_pane_t1

0x56ae,	// (0x00044a66) input_focus_pane_cp051

0x56c2,	// (0x00044a7a) list_midp_choice_pane

0x35cf,	// (0x00042987) status_idle_pane

0x5684,	// (0x00044a3c) form_midp_field_time_pane_t1

0x35c5,	// (0x0004297d) wait_anim_pane_g2_copy1

0x5692,	// (0x00044a4a) form_midp_field_time_pane_t2

0x0001,

0x4cff,	// (0x000440b7) aid_navinavi_width_2_pane

0xf825,	// (0x0004ebdd) form_midp_field_time_pane_t

0x35cf,	// (0x00042987) input_focus_pane_cp052

0x35cf,	// (0x00042987) bg_input_focus_pane_cp040

0x5644,	// (0x000449fc) form_midp_gauge_slider_pane_t1

0x5652,	// (0x00044a0a) form_midp_gauge_slider_pane_t2

0xdba2,	// (0x0004cf5a) form_midp_gauge_slider_pane_t3

0xdbb0,	// (0x0004cf68) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0004ebd4) form_midp_gauge_slider_pane_t

0x567c,	// (0x00044a34) form_midp_slider_pane

0x36af,	// (0x00042a67) bg_input_focus_pane_cp041_ParamLimits

0x36af,	// (0x00042a67) bg_input_focus_pane_cp041

0x5611,	// (0x000449c9) form_midp_gauge_wait_pane_t1_ParamLimits

0x5611,	// (0x000449c9) form_midp_gauge_wait_pane_t1

0x5623,	// (0x000449db) form_midp_gauge_wait_pane_t2_ParamLimits

0x5623,	// (0x000449db) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0004ebcf) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0004ebcf) form_midp_gauge_wait_pane_t

0x5635,	// (0x000449ed) form_midp_wait_pane_ParamLimits

0x5635,	// (0x000449ed) form_midp_wait_pane

0x55db,	// (0x00044993) form_midp_image_pane_g1

0x55e4,	// (0x0004499c) form_midp_image_pane_t1

0x55f3,	// (0x000449ab) form_midp_image_pane_t2

0x5602,	// (0x000449ba) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0004ebc8) form_midp_image_pane_t

0x55d2,	// (0x0004498a) list_single_midp_pane_g1

0x0830,	// (0x0003fbe8) list_single_midp_pane_t1

0xdb8e,	// (0x0004cf46) list_midp_form_item_pane_ParamLimits

0xdb8e,	// (0x0004cf46) list_midp_form_item_pane

0x4ca7,	// (0x0004405f) list_midp_form_item_pane_t1

0x4cb6,	// (0x0004406e) midp_ticker_pane_g1

0x4cc2,	// (0x0004407a) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0004eb15) midp_ticker_pane_g

0x4cce,	// (0x00044086) midp_ticker_pane_t1

0x69ac,	// (0x00045d64) midp_editing_number_pane_t1

0x698a,	// (0x00045d42) midp_editing_number_pane

0x6999,	// (0x00045d51) midp_ticker_pane

0x674b,	// (0x00045b03) ai_message_heading_pane

0x35cf,	// (0x00042987) bg_popup_window_pane_cp14

0x6753,	// (0x00045b0b) listscroll_ai_message_pane

0x66d5,	// (0x00045a8d) ai_message_heading_pane_g1_ParamLimits

0x66d5,	// (0x00045a8d) ai_message_heading_pane_g1

0x66e1,	// (0x00045a99) ai_message_heading_pane_g2_ParamLimits

0x66e1,	// (0x00045a99) ai_message_heading_pane_g2

0x66ed,	// (0x00045aa5) ai_message_heading_pane_g3_ParamLimits

0x66ed,	// (0x00045aa5) ai_message_heading_pane_g3

0x66f9,	// (0x00045ab1) ai_message_heading_pane_g4_ParamLimits

0x66f9,	// (0x00045ab1) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0004ed09) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0004ed09) ai_message_heading_pane_g

0x6705,	// (0x00045abd) ai_message_heading_pane_t1_ParamLimits

0x6705,	// (0x00045abd) ai_message_heading_pane_t1

0x671f,	// (0x00045ad7) ai_message_heading_pane_t2_ParamLimits

0x671f,	// (0x00045ad7) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0004ed12) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0004ed12) ai_message_heading_pane_t

0x6731,	// (0x00045ae9) bg_popup_heading_pane_cp1_ParamLimits

0x6731,	// (0x00045ae9) bg_popup_heading_pane_cp1

0x66c3,	// (0x00045a7b) list_ai_message_pane_ParamLimits

0x66c3,	// (0x00045a7b) list_ai_message_pane

0x40b1,	// (0x00043469) scroll_pane_cp10

0x665f,	// (0x00045a17) list_ai_message_pane_g1

0x6667,	// (0x00045a1f) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0004ece6) list_ai_message_pane_g

0x666f,	// (0x00045a27) list_ai_message_pane_t1_ParamLimits

0x666f,	// (0x00045a27) list_ai_message_pane_t1

0x6684,	// (0x00045a3c) list_ai_message_pane_t2_ParamLimits

0x6684,	// (0x00045a3c) list_ai_message_pane_t2

0x6699,	// (0x00045a51) list_ai_message_pane_t3_ParamLimits

0x6699,	// (0x00045a51) list_ai_message_pane_t3

0x66ae,	// (0x00045a66) list_ai_message_pane_t4_ParamLimits

0x66ae,	// (0x00045a66) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0004eceb) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0004eceb) list_ai_message_pane_t

0xdd12,	// (0x0004d0ca) cell_ai_soft_ind_pane_ParamLimits

0xdd12,	// (0x0004d0ca) cell_ai_soft_ind_pane

0x4ce0,	// (0x00044098) cell_ai_soft_ind_pane_g1_ParamLimits

0x4ce0,	// (0x00044098) cell_ai_soft_ind_pane_g1

0x35cf,	// (0x00042987) grid_highlight_cp1

0x4ced,	// (0x000440a5) text_secondary_cp56_ParamLimits

0x4ced,	// (0x000440a5) text_secondary_cp56

0x661f,	// (0x000459d7) example_general_pane_ParamLimits

0x661f,	// (0x000459d7) example_general_pane

0x662b,	// (0x000459e3) example_parent_pane_g1_ParamLimits

0x662b,	// (0x000459e3) example_parent_pane_g1

0x6637,	// (0x000459ef) example_parent_pane_t1_ParamLimits

0x6637,	// (0x000459ef) example_parent_pane_t1

0xc65a,	// (0x0004ba12) popup_preview_text_window_ParamLimits

0xc65a,	// (0x0004ba12) popup_preview_text_window

0x4b0a,	// (0x00043ec2) list_single_pane_cp2_g4

0x3a06,	// (0x00042dbe) bg_popup_preview_window_pane_ParamLimits

0x3a06,	// (0x00042dbe) bg_popup_preview_window_pane

0x6377,	// (0x0004572f) popup_preview_text_window_t1_ParamLimits

0x6377,	// (0x0004572f) popup_preview_text_window_t1

0x6395,	// (0x0004574d) popup_preview_text_window_t2_ParamLimits

0x6395,	// (0x0004574d) popup_preview_text_window_t2

0x63de,	// (0x00045796) popup_preview_text_window_t3_ParamLimits

0x63de,	// (0x00045796) popup_preview_text_window_t3

0x6423,	// (0x000457db) popup_preview_text_window_t4_ParamLimits

0x6423,	// (0x000457db) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0004ecba) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0004ecba) popup_preview_text_window_t

0x64a1,	// (0x00045859) scroll_pane_cp11

0x5421,	// (0x000447d9) bg_popup_preview_window_pane_g1

0x6337,	// (0x000456ef) bg_popup_preview_window_pane_g2

0x633f,	// (0x000456f7) bg_popup_preview_window_pane_g3

0x6347,	// (0x000456ff) bg_popup_preview_window_pane_g4

0x634f,	// (0x00045707) bg_popup_preview_window_pane_g5

0x6357,	// (0x0004570f) bg_popup_preview_window_pane_g6

0x635f,	// (0x00045717) bg_popup_preview_window_pane_g7

0x6367,	// (0x0004571f) bg_popup_preview_window_pane_g8

0x0f57,	// (0x0004030f) aid_popup_width_pane

0xc5d6,	// (0x0004b98e) popup_midp_note_alarm_window_ParamLimits

0xc5d6,	// (0x0004b98e) popup_midp_note_alarm_window

0x3f44,	// (0x000432fc) data_form_pane_ParamLimits

0xbb5f,	// (0x0004af17) form_field_data_pane_g1

0xbb69,	// (0x0004af21) form_field_data_pane_t1_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_ParamLimits

0x04fb,	// (0x0003f8b3) data_form_wide_pane_ParamLimits

0x050c,	// (0x0003f8c4) form_field_data_wide_pane_g1

0x0518,	// (0x0003f8d0) form_field_data_wide_pane_t1_ParamLimits

0x3cb5,	// (0x0004306d) input_focus_pane_cp6_ParamLimits

0xd400,	// (0x0004c7b8) input_popup_find_pane_g1_ParamLimits

0xd400,	// (0x0004c7b8) input_popup_find_pane_g1

0x1575,	// (0x0004092d) aid_navi_side_left_pane

0x158a,	// (0x00040942) aid_navi_side_right_pane

0x5d50,	// (0x00045108) bg_popup_window_pane_cp30_ParamLimits

0x5d50,	// (0x00045108) bg_popup_window_pane_cp30

0x5dca,	// (0x00045182) popup_midp_note_alarm_window_g1_ParamLimits

0x5dca,	// (0x00045182) popup_midp_note_alarm_window_g1

0x5dfa,	// (0x000451b2) popup_midp_note_alarm_window_t1_ParamLimits

0x5dfa,	// (0x000451b2) popup_midp_note_alarm_window_t1

0x5e9b,	// (0x00045253) popup_midp_note_alarm_window_t2_ParamLimits

0x5e9b,	// (0x00045253) popup_midp_note_alarm_window_t2

0x5f49,	// (0x00045301) popup_midp_note_alarm_window_t3_ParamLimits

0x5f49,	// (0x00045301) popup_midp_note_alarm_window_t3

0x5f7b,	// (0x00045333) popup_midp_note_alarm_window_t4_ParamLimits

0x5f7b,	// (0x00045333) popup_midp_note_alarm_window_t4

0x5fa1,	// (0x00045359) popup_midp_note_alarm_window_t5_ParamLimits

0x5fa1,	// (0x00045359) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0004ec57) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0004ec57) popup_midp_note_alarm_window_t

0x604d,	// (0x00045405) wait_bar_pane_cp1_ParamLimits

0x604d,	// (0x00045405) wait_bar_pane_cp1

0x35cf,	// (0x00042987) wait_anim_pane_copy1

0x35cf,	// (0x00042987) wait_border_pane_copy1

0x5a36,	// (0x00044dee) wait_border_pane_g1_copy1

0x0532,	// (0x0003f8ea) form_field_popup_pane_g1

0xbb83,	// (0x0004af3b) form_field_popup_pane_t1_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_cp7_ParamLimits

0x3f72,	// (0x0004332a) list_form_pane_ParamLimits

0x0552,	// (0x0003f90a) form_field_popup_wide_pane_g1

0x055a,	// (0x0003f912) form_field_popup_wide_pane_t1_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_cp8_ParamLimits

0x3f7e,	// (0x00043336) list_form_wide_pane_ParamLimits

0xdf78,	// (0x0004d330) aid_size_cell_graphic_pane

0xbc02,	// (0x0004afba) data_form_pane_t1_ParamLimits

0xbd1e,	// (0x0004b0d6) data_form_wide_pane_t1_ParamLimits

0xd813,	// (0x0004cbcb) bg_status_flat_pane

0xd0bf,	// (0x0004c477) title_pane_t1_ParamLimits

0x3677,	// (0x00042a2f) title_pane_t2_ParamLimits

0x369d,	// (0x00042a55) title_pane_t3_ParamLimits

0xf557,	// (0x0004e90f) title_pane_t_ParamLimits

0x4532,	// (0x000438ea) level_1_signal_ParamLimits

0x4544,	// (0x000438fc) level_2_signal_ParamLimits

0x4557,	// (0x0004390f) level_3_signal_ParamLimits

0x456a,	// (0x00043922) level_4_signal_ParamLimits

0x457d,	// (0x00043935) level_5_signal_ParamLimits

0x4590,	// (0x00043948) level_6_signal_ParamLimits

0x45a3,	// (0x0004395b) level_7_signal_ParamLimits

0x4532,	// (0x000438ea) level_1_battery_ParamLimits

0x4544,	// (0x000438fc) level_2_battery_ParamLimits

0x4557,	// (0x0004390f) level_3_battery_ParamLimits

0x456a,	// (0x00043922) level_4_battery_ParamLimits

0x457d,	// (0x00043935) level_5_battery_ParamLimits

0x4590,	// (0x00043948) level_6_battery_ParamLimits

0x45a3,	// (0x0004395b) level_7_battery_ParamLimits

0x5c55,	// (0x0004500d) bg_status_flat_pane_g1

0x5c5d,	// (0x00045015) bg_status_flat_pane_g2

0x5c65,	// (0x0004501d) bg_status_flat_pane_g3

0x5c6d,	// (0x00045025) bg_status_flat_pane_g4

0x5c75,	// (0x0004502d) bg_status_flat_pane_g5

0x5c7d,	// (0x00045035) bg_status_flat_pane_g6

0x5c85,	// (0x0004503d) bg_status_flat_pane_g7

0xd14b,	// (0x0004c503) tabs_3_active_pane_t1_ParamLimits

0xd14b,	// (0x0004c503) tabs_3_passive_pane_t1_ParamLimits

0xd15d,	// (0x0004c515) tabs_4_active_pane_t1_ParamLimits

0xd15d,	// (0x0004c515) tabs_4_1_passive_pane_t1_ParamLimits

0xd40e,	// (0x0004c7c6) tabs_2_active_pane_t1_ParamLimits

0xd40e,	// (0x0004c7c6) tabs_2_passive_pane_t1_ParamLimits

0x36af,	// (0x00042a67) bg_active_tab_pane_cp4_ParamLimits

0xd420,	// (0x0004c7d8) tabs_2_long_active_pane_t1_ParamLimits

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp4_ParamLimits

0x20ce,	// (0x00041486) list_single_midp_graphic_pane_t1_ParamLimits

0x36af,	// (0x00042a67) bg_active_tab_pane_cp5_ParamLimits

0xd433,	// (0x0004c7eb) tabs_3_long_active_pane_t1_ParamLimits

0x4efd,	// (0x000442b5) bg_passive_tab_pane_cp5_ParamLimits

0x20ce,	// (0x00041486) list_single_midp_graphic_pane_t1

0xd813,	// (0x0004cbcb) bg_status_flat_pane_ParamLimits

0x50b1,	// (0x00044469) indicator_pane_cp2_ParamLimits

0x50b1,	// (0x00044469) indicator_pane_cp2

0xd991,	// (0x0004cd49) navi_pane_srt_ParamLimits

0xd991,	// (0x0004cd49) navi_pane_srt

0x5200,	// (0x000445b8) popup_clock_digital_analogue_window_cp1

0x378c,	// (0x00042b44) indicator_pane_t1

0x4bd9,	// (0x00043f91) copy_highlight_pane

0x4bd9,	// (0x00043f91) cursor_graphics_pane

0x4bd9,	// (0x00043f91) graphic_within_text_pane

0x4bd9,	// (0x00043f91) link_highlight_pane

0x6464,	// (0x0004581c) popup_preview_text_window_t5_ParamLimits

0x6464,	// (0x0004581c) popup_preview_text_window_t5

0x4d07,	// (0x000440bf) cursor_digital_pane

0x4d07,	// (0x000440bf) cursor_primary_pane

0x4d18,	// (0x000440d0) cursor_primary_small_pane

0x4d20,	// (0x000440d8) cursor_secondary_pane

0x4d28,	// (0x000440e0) cursor_title_pane

0x4d07,	// (0x000440bf) link_highlight_digital_pane

0x4d0f,	// (0x000440c7) link_highlight_primary_pane

0x4d18,	// (0x000440d0) link_highlight_primary_small_pane

0x4d20,	// (0x000440d8) link_highlight_secondary_pane

0x4d28,	// (0x000440e0) link_highlight_title_pane

0x4d07,	// (0x000440bf) copy_highlight_digital_pane

0x4d07,	// (0x000440bf) copy_highlight_primary_pane

0x4d18,	// (0x000440d0) copy_highlight_primary_small_pane

0x4d20,	// (0x000440d8) copy_highlight_secondary_pane

0x4d28,	// (0x000440e0) copy_highlight_title_pane

0x4d20,	// (0x000440d8) graphic_text_digital_pane

0x5cf3,	// (0x000450ab) graphic_text_primary_pane

0x5cfc,	// (0x000450b4) graphic_text_primary_small_pane

0x4d18,	// (0x000440d0) graphic_text_secondary_pane

0x4d07,	// (0x000440bf) graphic_text_title_pane

0xd64f,	// (0x0004ca07) cursor_primary_pane_g1

0x5ce5,	// (0x0004509d) cursor_text_primary_t1

0xdc0f,	// (0x0004cfc7) cursor_primary_small_pane_g1

0x5cd7,	// (0x0004508f) cursor_text_primary_small_t1

0xdc05,	// (0x0004cfbd) cursor_primary_small_pane_g1_copy1

0x5cbf,	// (0x00045077) cursor_text_primary_small_t1_copy1

0x5c9d,	// (0x00045055) cursor_text_title_t1

0xdbfb,	// (0x0004cfb3) cursor_title_pane_g1

0xd64f,	// (0x0004ca07) cursor_digital_pane_g1

0x4d3a,	// (0x000440f2) cursor_text_digital_t1

0x4d5f,	// (0x00044117) link_highlight_primary_pane_g1

0x5c46,	// (0x00044ffe) link_highlight_primary_pane_t1

0x4d48,	// (0x00044100) link_highlight_primary_small_pane_g1

0x4d50,	// (0x00044108) link_highlight_primary_small_pane_t1

0x4d5f,	// (0x00044117) link_highlight_secondary_pane_g1

0x4d67,	// (0x0004411f) link_highlight_secondary_pane_t1

0x5bba,	// (0x00044f72) link_highlight_title_pane_g1

0x5bc2,	// (0x00044f7a) link_highlight_title_pane_t1

0x5ba3,	// (0x00044f5b) link_highlight_digital_pane_g1

0x5bab,	// (0x00044f63) link_highlight_digital_pane_t1

0x5a7b,	// (0x00044e33) copy_highlight_primary_pane_g1

0x5a83,	// (0x00044e3b) copy_highlight_primary_pane_t1

0x5a55,	// (0x00044e0d) copy_highlight_primary_small_pane_g1

0x5a6c,	// (0x00044e24) copy_highlight_primary_small_pane_t1

0x4d76,	// (0x0004412e) copy_highlight_secondary_pane_g1

0x4d7e,	// (0x00044136) copy_highlight_secondary_pane_t1

0x5a55,	// (0x00044e0d) copy_highlight_title_pane_g1

0x5a5d,	// (0x00044e15) copy_highlight_title_pane_t1

0x5a7b,	// (0x00044e33) copy_highlight_digital_pane_g1

0x6cab,	// (0x00046063) copy_highlight_digital_pane_t1

0x6bff,	// (0x00045fb7) graphic_text_primary_pane_g1

0x6c8f,	// (0x00046047) graphic_text_primary_pane_t1

0x6c9d,	// (0x00046055) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0004ed86) graphic_text_primary_pane_t

0x6c6b,	// (0x00046023) graphic_text_primary_small_pane_g1

0x6c73,	// (0x0004602b) graphic_text_primary_small_pane_t1

0x6c81,	// (0x00046039) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0004ed81) graphic_text_primary_small_pane_t

0x6c47,	// (0x00045fff) graphic_text_secondary_pane_g1

0x6c4f,	// (0x00046007) graphic_text_secondary_pane_t1

0x6c5d,	// (0x00046015) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0004ed7c) graphic_text_secondary_pane_t

0x6c23,	// (0x00045fdb) graphic_text_title_pane_g1

0x6c2b,	// (0x00045fe3) graphic_text_title_pane_t1

0x6c39,	// (0x00045ff1) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0004ed77) graphic_text_title_pane_t

0x6bff,	// (0x00045fb7) graphic_text_digital_pane_g1

0x6c07,	// (0x00045fbf) graphic_text_digital_pane_t1

0x6c15,	// (0x00045fcd) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0004ed72) graphic_text_digital_pane_t

0x36af,	// (0x00042a67) navi_icon_pane_srt_ParamLimits

0x36af,	// (0x00042a67) navi_icon_pane_srt

0x35cf,	// (0x00042987) navi_midp_pane_srt

0x35cf,	// (0x00042987) navi_navi_pane_srt

0x36af,	// (0x00042a67) navi_text_pane_srt_ParamLimits

0x36af,	// (0x00042a67) navi_text_pane_srt

0x6bca,	// (0x00045f82) navi_navi_icon_text_pane_srt

0x6bd2,	// (0x00045f8a) navi_navi_pane_srt_g1_ParamLimits

0x6bd2,	// (0x00045f8a) navi_navi_pane_srt_g1

0x6be4,	// (0x00045f9c) navi_navi_pane_srt_g2_ParamLimits

0x6be4,	// (0x00045f9c) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0004ed6d) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0004ed6d) navi_navi_pane_srt_g

0x6bf6,	// (0x00045fae) navi_navi_tabs_pane_srt

0x6bca,	// (0x00045f82) navi_navi_text_pane_srt

0x6bca,	// (0x00045f82) navi_navi_volume_pane_srt

0x6bbb,	// (0x00045f73) navi_navi_text_pane_srt_t1

0x24f6,	// (0x000418ae) navi_navi_volume_pane_srt_g1

0x24fe,	// (0x000418b6) volume_small_pane_srt_ParamLimits

0x24fe,	// (0x000418b6) volume_small_pane_srt

0x1871,	// (0x00040c29) volume_small_pane_srt_g1_ParamLimits

0x1871,	// (0x00040c29) volume_small_pane_srt_g1

0x1881,	// (0x00040c39) volume_small_pane_srt_g2_ParamLimits

0x1881,	// (0x00040c39) volume_small_pane_srt_g2

0x1892,	// (0x00040c4a) volume_small_pane_srt_g3_ParamLimits

0x1892,	// (0x00040c4a) volume_small_pane_srt_g3

0x18a3,	// (0x00040c5b) volume_small_pane_srt_g4_ParamLimits

0x18a3,	// (0x00040c5b) volume_small_pane_srt_g4

0x18b4,	// (0x00040c6c) volume_small_pane_srt_g5_ParamLimits

0x18b4,	// (0x00040c6c) volume_small_pane_srt_g5

0x18c5,	// (0x00040c7d) volume_small_pane_srt_g6_ParamLimits

0x18c5,	// (0x00040c7d) volume_small_pane_srt_g6

0x18d6,	// (0x00040c8e) volume_small_pane_srt_g7_ParamLimits

0x18d6,	// (0x00040c8e) volume_small_pane_srt_g7

0x18e7,	// (0x00040c9f) volume_small_pane_srt_g8_ParamLimits

0x18e7,	// (0x00040c9f) volume_small_pane_srt_g8

0x18f8,	// (0x00040cb0) volume_small_pane_srt_g9_ParamLimits

0x18f8,	// (0x00040cb0) volume_small_pane_srt_g9

0x1909,	// (0x00040cc1) volume_small_pane_srt_g10_ParamLimits

0x1909,	// (0x00040cc1) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0004eb1a) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0004eb1a) volume_small_pane_srt_g

0x3aaf,	// (0x00042e67) query_popup_data_pane_cp2

0x6ba1,	// (0x00045f59) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6ba1,	// (0x00045f59) navi_navi_icon_text_pane_srt_t1

0x5cf3,	// (0x000450ab) navi_tabs_2_long_pane_srt

0x5cf3,	// (0x000450ab) navi_tabs_2_pane_srt

0x5cf3,	// (0x000450ab) navi_tabs_3_long_pane_srt

0x5cf3,	// (0x000450ab) navi_tabs_3_pane_srt

0x5cf3,	// (0x000450ab) navi_tabs_4_pane_srt

0x24d6,	// (0x0004188e) tabs_2_active_pane_srt_ParamLimits

0x24d6,	// (0x0004188e) tabs_2_active_pane_srt

0x24e6,	// (0x0004189e) tabs_2_passive_pane_srt_ParamLimits

0x24e6,	// (0x0004189e) tabs_2_passive_pane_srt

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp1_srt

0x6b6d,	// (0x00045f25) bg_passive_tab_pane_g1_cp1_srt

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp1_srt

0x6b76,	// (0x00045f2e) bg_passive_tab_pane_g3_cp1_srt

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp1_srt_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp1_srt

0x6b7f,	// (0x00045f37) tabs_2_active_pane_srt_g1

0xdfba,	// (0x0004d372) tabs_2_active_pane_srt_t1_ParamLimits

0xdfba,	// (0x0004d372) tabs_2_active_pane_srt_t1

0x6b6d,	// (0x00045f25) bg_active_tab_pane_g1_cp1_srt

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp1_srt

0x6b76,	// (0x00045f2e) bg_active_tab_pane_g3_cp1_srt

0x24a3,	// (0x0004185b) tabs_3_active_pane_srt_ParamLimits

0x24a3,	// (0x0004185b) tabs_3_active_pane_srt

0x24b4,	// (0x0004186c) tabs_3_passive_pane_cp_srt_ParamLimits

0x24b4,	// (0x0004186c) tabs_3_passive_pane_cp_srt

0x24c5,	// (0x0004187d) tabs_3_passive_pane_srt_ParamLimits

0x24c5,	// (0x0004187d) tabs_3_passive_pane_srt

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5495,	// (0x0004484d) bg_passive_tab_pane_cp2_srt

0x4d8d,	// (0x00044145) bg_passive_tab_pane_g1_cp2_srt

0x481b,	// (0x00043bd3) bg_passive_tab_pane_g2_cp2_srt

0x4d96,	// (0x0004414e) bg_passive_tab_pane_g3_cp2_srt

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp2_srt_ParamLimits

0x392a,	// (0x00042ce2) bg_active_tab_pane_cp2_srt

0x6b53,	// (0x00045f0b) tabs_3_active_pane_srt_g1

0xdfa4,	// (0x0004d35c) tabs_3_active_pane_srt_t1_ParamLimits

0xdfa4,	// (0x0004d35c) tabs_3_active_pane_srt_t1

0x4d8d,	// (0x00044145) bg_active_tab_pane_g1_cp2_srt

0x481b,	// (0x00043bd3) bg_active_tab_pane_g2_cp2_srt

0x4d96,	// (0x0004414e) bg_active_tab_pane_g3_cp2_srt

0x245b,	// (0x00041813) tabs_4_active_pane_srt_ParamLimits

0x245b,	// (0x00041813) tabs_4_active_pane_srt

0x246d,	// (0x00041825) tabs_4_passive_pane_cp2_srt_ParamLimits

0x246d,	// (0x00041825) tabs_4_passive_pane_cp2_srt

0x1a78,	// (0x00040e30) aid_size_cell_toolbar

0x6803,	// (0x00045bbb) main_idle_act_pane_ParamLimits

0x1c35,	// (0x00040fed) popup_large_graphic_colour_window_ParamLimits

0xc8e6,	// (0x0004bc9e) popup_toolbar_window_ParamLimits

0xc8e6,	// (0x0004bc9e) popup_toolbar_window

0x69bb,	// (0x00045d73) list_single_graphic_2heading_pane_ParamLimits

0x69bb,	// (0x00045d73) list_single_graphic_2heading_pane

0x42e1,	// (0x00043699) aid_size_cell_apps_grid_lsc_pane

0x42f3,	// (0x000436ab) aid_size_cell_apps_grid_prt_pane

0x4efd,	// (0x000442b5) bg_wml_button_pane_cp1_ParamLimits

0x4efd,	// (0x000442b5) bg_wml_button_pane_cp1

0xdbbe,	// (0x0004cf76) form_midp_field_text_pane_t1_ParamLimits

0x5495,	// (0x0004484d) input_focus_pane_cp050_ParamLimits

0x5708,	// (0x00044ac0) list_midp_form_text_pane_ParamLimits

0x56ae,	// (0x00044a66) input_focus_pane_cp051_ParamLimits

0x56c2,	// (0x00044a7a) list_midp_choice_pane_ParamLimits

0xdb5c,	// (0x0004cf14) list_single_2graphic_pane_cp3_ParamLimits

0xdb5c,	// (0x0004cf14) list_single_2graphic_pane_cp3

0xdb6f,	// (0x0004cf27) list_single_midp_graphic_pane_ParamLimits

0xdb6f,	// (0x0004cf27) list_single_midp_graphic_pane

0x070e,	// (0x0003fac6) list_single_graphic_2heading_pane_g1_ParamLimits

0x070e,	// (0x0003fac6) list_single_graphic_2heading_pane_g1

0x071a,	// (0x0003fad2) list_single_graphic_2heading_pane_g4_ParamLimits

0x071a,	// (0x0003fad2) list_single_graphic_2heading_pane_g4

0x0726,	// (0x0003fade) list_single_graphic_2heading_pane_g5_ParamLimits

0x0726,	// (0x0003fade) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0004eb6d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0004eb6d) list_single_graphic_2heading_pane_g

0x0732,	// (0x0003faea) list_single_graphic_2heading_pane_t1_ParamLimits

0x0732,	// (0x0003faea) list_single_graphic_2heading_pane_t1

0x0746,	// (0x0003fafe) list_single_graphic_2heading_pane_t2_ParamLimits

0x0746,	// (0x0003fafe) list_single_graphic_2heading_pane_t2

0x0762,	// (0x0003fb1a) list_single_graphic_2heading_pane_t3_ParamLimits

0x0762,	// (0x0003fb1a) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0004eb74) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0004eb74) list_single_graphic_2heading_pane_t

0x535f,	// (0x00044717) bg_popup_sub_pane_cp2

0x5389,	// (0x00044741) grid_toobar_pane

0x2049,	// (0x00041401) cell_toolbar_pane_ParamLimits

0x2049,	// (0x00041401) cell_toolbar_pane

0x53c5,	// (0x0004477d) cell_toolbar_pane_g1_ParamLimits

0x53c5,	// (0x0004477d) cell_toolbar_pane_g1

0x53d9,	// (0x00044791) cell_toolbar_pane_g2_ParamLimits

0x53d9,	// (0x00044791) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0004eb82) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0004eb82) cell_toolbar_pane_g

0x53fb,	// (0x000447b3) grid_highlight_pane_cp2_ParamLimits

0x53fb,	// (0x000447b3) grid_highlight_pane_cp2

0x5415,	// (0x000447cd) toolbar_button_pane

0x5421,	// (0x000447d9) toolbar_button_pane_g1

0x5429,	// (0x000447e1) toolbar_button_pane_g2

0x5431,	// (0x000447e9) toolbar_button_pane_g3

0x5439,	// (0x000447f1) toolbar_button_pane_g4

0x5441,	// (0x000447f9) toolbar_button_pane_g5

0x5449,	// (0x00044801) toolbar_button_pane_g6

0x5451,	// (0x00044809) toolbar_button_pane_g7

0x5459,	// (0x00044811) toolbar_button_pane_g8

0x5461,	// (0x00044819) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0004eb87) toolbar_button_pane_g

0x208d,	// (0x00041445) list_single_2graphic_pane_g1_cp3_ParamLimits

0x208d,	// (0x00041445) list_single_2graphic_pane_g1_cp3

0xc93e,	// (0x0004bcf6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc93e,	// (0x0004bcf6) list_single_2graphic_pane_g2_cp3

0x20aa,	// (0x00041462) list_single_2graphic_pane_g3_cp3

0x1724,	// (0x00040adc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1724,	// (0x00040adc) list_single_2graphic_pane_g4_cp3

0x20b2,	// (0x0004146a) list_single_2graphic_pane_t1_cp3_ParamLimits

0x20b2,	// (0x0004146a) list_single_2graphic_pane_t1_cp3

0x559e,	// (0x00044956) list_single_midp_graphic_pane_g2_ParamLimits

0x559e,	// (0x00044956) list_single_midp_graphic_pane_g2

0x06fe,	// (0x0003fab6) aid_zoom_text_primary

0x1a80,	// (0x00040e38) aid_zoom_text_secondary

0xd6a7,	// (0x0004ca5f) status_small_pane_g7_ParamLimits

0xd6a7,	// (0x0004ca5f) status_small_pane_g7

0xd6ca,	// (0x0004ca82) status_small_pane_t1_ParamLimits

0xd09b,	// (0x0004c453) title_pane_g2

0x0003,

0xf54e,	// (0x0004e906) title_pane_g

0xd313,	// (0x0004c6cb) aid_size_cell_colour_1_pane_ParamLimits

0xd313,	// (0x0004c6cb) aid_size_cell_colour_1_pane

0xd327,	// (0x0004c6df) aid_size_cell_colour_2_pane_ParamLimits

0xd327,	// (0x0004c6df) aid_size_cell_colour_2_pane

0xd33b,	// (0x0004c6f3) aid_size_cell_colour_3_pane_ParamLimits

0xd33b,	// (0x0004c6f3) aid_size_cell_colour_3_pane

0xd34f,	// (0x0004c707) aid_size_cell_colour_4_pane_ParamLimits

0xd34f,	// (0x0004c707) aid_size_cell_colour_4_pane

0x14b2,	// (0x0004086a) title_pane_stacon_g1_ParamLimits

0x14b2,	// (0x0004086a) title_pane_stacon_g1

0x5ada,	// (0x00044e92) popup_note_wait_window_g3_ParamLimits

0x5ada,	// (0x00044e92) popup_note_wait_window_g3

0x5b50,	// (0x00044f08) popup_note_wait_window_t5_ParamLimits

0x5b50,	// (0x00044f08) popup_note_wait_window_t5

0x35cf,	// (0x00042987) main_feb_china_hwr_fs_writing_pane

0xc2ee,	// (0x0004b6a6) popup_feb_china_hwr_fs_window_ParamLimits

0xc2ee,	// (0x0004b6a6) popup_feb_china_hwr_fs_window

0xc94f,	// (0x0004bd07) aid_size_cell_hwr_fs_ParamLimits

0xc94f,	// (0x0004bd07) aid_size_cell_hwr_fs

0x5495,	// (0x0004484d) bg_popup_sub_pane_cp3_ParamLimits

0x5495,	// (0x0004484d) bg_popup_sub_pane_cp3

0xc964,	// (0x0004bd1c) grid_hwr_fs_pane_ParamLimits

0xc964,	// (0x0004bd1c) grid_hwr_fs_pane

0x2129,	// (0x000414e1) linegrid_hwr_fs_pane_ParamLimits

0x2129,	// (0x000414e1) linegrid_hwr_fs_pane

0xc97c,	// (0x0004bd34) cell_hwr_fs_pane_ParamLimits

0xc97c,	// (0x0004bd34) cell_hwr_fs_pane

0x54a1,	// (0x00044859) linegrid_hwr_fs_pane_g1_ParamLimits

0x54a1,	// (0x00044859) linegrid_hwr_fs_pane_g1

0xdb30,	// (0x0004cee8) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb30,	// (0x0004cee8) linegrid_hwr_fs_pane_g2

0x54bf,	// (0x00044877) linegrid_hwr_fs_pane_g3_ParamLimits

0x54bf,	// (0x00044877) linegrid_hwr_fs_pane_g3

0x215b,	// (0x00041513) linegrid_hwr_fs_pane_g4_ParamLimits

0x215b,	// (0x00041513) linegrid_hwr_fs_pane_g4

0x2175,	// (0x0004152d) linegrid_hwr_fs_pane_g5_ParamLimits

0x2175,	// (0x0004152d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0004ebad) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0004ebad) linegrid_hwr_fs_pane_g

0x54cb,	// (0x00044883) cell_hwr_fs_pane_g1_ParamLimits

0x54cb,	// (0x00044883) cell_hwr_fs_pane_g1

0x5296,	// (0x0004464e) cell_hwr_fs_pane_g2_ParamLimits

0x5296,	// (0x0004464e) cell_hwr_fs_pane_g2

0xdb42,	// (0x0004cefa) cell_hwr_fs_pane_g3_ParamLimits

0xdb42,	// (0x0004cefa) cell_hwr_fs_pane_g3

0xdb4f,	// (0x0004cf07) cell_hwr_fs_pane_g4_ParamLimits

0xdb4f,	// (0x0004cf07) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0004ebb8) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0004ebb8) cell_hwr_fs_pane_g

0xc9a2,	// (0x0004bd5a) cell_hwr_fs_pane_t1

0x35cf,	// (0x00042987) grid_highlight_pane_cp6

0x35cf,	// (0x00042987) main_idle_act2_pane

0x4098,	// (0x00043450) aid_inside_area_popup_secondary

0xdc19,	// (0x0004cfd1) aid_inside_area_window_primary_ParamLimits

0xdc19,	// (0x0004cfd1) aid_inside_area_window_primary

0x6cba,	// (0x00046072) ai2_news_ticker_pane

0x6cc2,	// (0x0004607a) aid_size_cell_ai1_link_ParamLimits

0x6cc2,	// (0x0004607a) aid_size_cell_ai1_link

0xdfd0,	// (0x0004d388) popup_ai2_data_window_ParamLimits

0xdfd0,	// (0x0004d388) popup_ai2_data_window

0x6cf2,	// (0x000460aa) popup_ai2_link_window_ParamLimits

0x6cf2,	// (0x000460aa) popup_ai2_link_window

0x5495,	// (0x0004484d) bg_popup_sub_pane_cp4_ParamLimits

0x5495,	// (0x0004484d) bg_popup_sub_pane_cp4

0x6d06,	// (0x000460be) grid_ai2_link_pane_ParamLimits

0x6d06,	// (0x000460be) grid_ai2_link_pane

0x6d1d,	// (0x000460d5) popup_ai2_link_window_g1_ParamLimits

0x6d1d,	// (0x000460d5) popup_ai2_link_window_g1

0x6d29,	// (0x000460e1) popup_ai2_link_window_g2_ParamLimits

0x6d29,	// (0x000460e1) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0004ed8b) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0004ed8b) popup_ai2_link_window_g

0x6d38,	// (0x000460f0) ai2_mp_button_pane

0x6d40,	// (0x000460f8) ai2_mp_volume_pane

0x56ae,	// (0x00044a66) bg_popup_sub_pane_cp5_ParamLimits

0x56ae,	// (0x00044a66) bg_popup_sub_pane_cp5

0x6d48,	// (0x00046100) heading_ai2_gene_pane_ParamLimits

0x6d48,	// (0x00046100) heading_ai2_gene_pane

0x6d54,	// (0x0004610c) list_ai2_gene_pane_ParamLimits

0x6d54,	// (0x0004610c) list_ai2_gene_pane

0x6d9c,	// (0x00046154) cell_ai2_link_pane_ParamLimits

0x6d9c,	// (0x00046154) cell_ai2_link_pane

0x6db2,	// (0x0004616a) cell_ai2_link_pane_g1

0x35cf,	// (0x00042987) grid_highlight_pane_cp7

0x2513,	// (0x000418cb) ai2_mp_volume_pane_g1

0x6e82,	// (0x0004623a) ai2_mp_volume_pane_g2

0xdffa,	// (0x0004d3b2) list_ai2_gene_pane_t1

0x6e8a,	// (0x00046242) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0004eda4) ai2_mp_volume_pane_g

0x251b,	// (0x000418d3) volume_small_pane_cp3

0x6e92,	// (0x0004624a) aid_size_cell_ai2_button

0x6e9a,	// (0x00046252) grid_ai2_button_pane

0x6ea3,	// (0x0004625b) cell_ai2_button_pane_ParamLimits

0x6ea3,	// (0x0004625b) cell_ai2_button_pane

0x35c5,	// (0x0004297d) cell_ai2_button_pane_g1

0x35cf,	// (0x00042987) grid_highlight_pane_cp8

0x6e42,	// (0x000461fa) ai2_gene_pane_t1_ParamLimits

0x6e42,	// (0x000461fa) ai2_gene_pane_t1

0xc278,	// (0x0004b630) aid_height_parent_landscape

0xdd60,	// (0x0004d118) aid_height_set_list

0x6803,	// (0x00045bbb) aid_size_parent

0xdf78,	// (0x0004d330) aid_size_cell_graphic_pane_ParamLimits

0x6d64,	// (0x0004611c) popup_ai2_data_window_g1_ParamLimits

0x6d64,	// (0x0004611c) popup_ai2_data_window_g1

0x6d70,	// (0x00046128) ai2_news_ticker_pane_g1

0x6d78,	// (0x00046130) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0004ed90) ai2_news_ticker_pane_g

0x6d80,	// (0x00046138) ai2_news_ticker_pane_t1

0x6d8e,	// (0x00046146) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0004ed95) ai2_news_ticker_pane_t

0x6dbb,	// (0x00046173) heading_ai2_gene_pane_g1

0x6dc3,	// (0x0004617b) heading_ai2_gene_pane_t1_ParamLimits

0x6dc3,	// (0x0004617b) heading_ai2_gene_pane_t1

0x6dd8,	// (0x00046190) list_highlight_pane_cp6

0xdfe4,	// (0x0004d39c) ai2_gene_pane_ParamLimits

0xdfe4,	// (0x0004d39c) ai2_gene_pane

0xe008,	// (0x0004d3c0) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0004ed9a) list_ai2_gene_pane_t

0x6e13,	// (0x000461cb) list_highlight_pane_cp8_ParamLimits

0x6e13,	// (0x000461cb) list_highlight_pane_cp8

0x6e24,	// (0x000461dc) ai2_gene_pane_g1_ParamLimits

0x6e24,	// (0x000461dc) ai2_gene_pane_g1

0x6e36,	// (0x000461ee) ai2_gene_pane_g2_ParamLimits

0x6e36,	// (0x000461ee) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0004ed9f) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0004ed9f) ai2_gene_pane_g

0x3eda,	// (0x00043292) scroll_pane_cp12

0xc235,	// (0x0004b5ed) control_pane_t3_ParamLimits

0xc235,	// (0x0004b5ed) control_pane_t3

0xd6bb,	// (0x0004ca73) status_small_pane_g8_ParamLimits

0xd6bb,	// (0x0004ca73) status_small_pane_g8

0xc383,	// (0x0004b73b) popup_find_window_ParamLimits

0xc610,	// (0x0004b9c8) popup_note_image_window_ParamLimits

0x077a,	// (0x0003fb32) list_double2_graphic_pane_vc_g1_ParamLimits

0x077a,	// (0x0003fb32) list_double2_graphic_pane_vc_g1

0x4b12,	// (0x00043eca) list_double2_graphic_pane_vc_g2_ParamLimits

0x4b12,	// (0x00043eca) list_double2_graphic_pane_vc_g2

0x2079,	// (0x00041431) list_double2_graphic_pane_vc_g3_ParamLimits

0x2079,	// (0x00041431) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004eb7b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004eb7b) list_double2_graphic_pane_vc_g

0x0786,	// (0x0003fb3e) list_double2_graphic_pane_vc_t1_ParamLimits

0x0786,	// (0x0003fb3e) list_double2_graphic_pane_vc_t1

0x4b12,	// (0x00043eca) list_single_heading_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_single_heading_pane_vc_g1

0x2079,	// (0x00041431) list_single_heading_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_single_heading_pane_vc_g

0x079c,	// (0x0003fb54) list_single_heading_pane_vc_t1_ParamLimits

0x079c,	// (0x0003fb54) list_single_heading_pane_vc_t1

0x07b2,	// (0x0003fb6a) list_single_heading_pane_vc_t2_ParamLimits

0x07b2,	// (0x0003fb6a) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0004eb9c) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004eb9c) list_single_heading_pane_vc_t

0x20e4,	// (0x0004149c) list_setting_number_pane_vc_g1_ParamLimits

0x20e4,	// (0x0004149c) list_setting_number_pane_vc_g1

0x20f0,	// (0x000414a8) list_setting_number_pane_vc_g2_ParamLimits

0x20f0,	// (0x000414a8) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004eba1) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004eba1) list_setting_number_pane_vc_g

0x07c4,	// (0x0003fb7c) list_setting_number_pane_vc_t1_ParamLimits

0x07c4,	// (0x0003fb7c) list_setting_number_pane_vc_t1

0x07d8,	// (0x0003fb90) list_setting_number_pane_vc_t2_ParamLimits

0x07d8,	// (0x0003fb90) list_setting_number_pane_vc_t2

0x07f4,	// (0x0003fbac) list_setting_number_pane_vc_t3_ParamLimits

0x07f4,	// (0x0003fbac) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0004eba6) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0004eba6) list_setting_number_pane_vc_t

0x0820,	// (0x0003fbd8) set_value_pane_vc_ParamLimits

0x0820,	// (0x0003fbd8) set_value_pane_vc

0x69bb,	// (0x00045d73) list_double2_graphic_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double2_graphic_pane_vc

0x08d7,	// (0x0003fc8f) list_double2_large_graphic_pane_vc_ParamLimits

0x08d7,	// (0x0003fc8f) list_double2_large_graphic_pane_vc

0x69bb,	// (0x00045d73) list_double2_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double2_pane_vc

0x69bb,	// (0x00045d73) list_double_graphic_heading_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_graphic_heading_pane_vc

0x69bb,	// (0x00045d73) list_double_graphic_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_graphic_pane_vc

0x69bb,	// (0x00045d73) list_double_heading_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_heading_pane_vc

0x08e8,	// (0x0003fca0) list_double_large_graphic_pane_vc_ParamLimits

0x08e8,	// (0x0003fca0) list_double_large_graphic_pane_vc

0x69bb,	// (0x00045d73) list_double_number_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_number_pane_vc

0x69bb,	// (0x00045d73) list_double_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_pane_vc

0x69bb,	// (0x00045d73) list_double_time_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_double_time_pane_vc

0x69bb,	// (0x00045d73) list_setting_number_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_setting_number_pane_vc

0x69bb,	// (0x00045d73) list_setting_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_setting_pane_vc

0x69bb,	// (0x00045d73) list_single_graphic_heading_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_single_graphic_heading_pane_vc

0x69bb,	// (0x00045d73) list_single_heading_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_single_heading_pane_vc

0x69bb,	// (0x00045d73) list_single_number_heading_pane_vc_ParamLimits

0x69bb,	// (0x00045d73) list_single_number_heading_pane_vc

0x077a,	// (0x0003fb32) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x077a,	// (0x0003fb32) list_double_graphic_heading_pane_vc_g1

0x4b12,	// (0x00043eca) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4b12,	// (0x00043eca) list_double_graphic_heading_pane_vc_g2

0x2079,	// (0x00041431) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2079,	// (0x00041431) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0004eb7b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004eb7b) list_double_graphic_heading_pane_vc_g

0x0937,	// (0x0003fcef) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0937,	// (0x0003fcef) list_double_graphic_heading_pane_vc_t1

0x0953,	// (0x0003fd0b) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0953,	// (0x0003fd0b) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0004edab) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0004edab) list_double_graphic_heading_pane_vc_t

0x20e4,	// (0x0004149c) list_setting_pane_vc_g1_ParamLimits

0x20e4,	// (0x0004149c) list_setting_pane_vc_g1

0x20f0,	// (0x000414a8) list_setting_pane_vc_g2_ParamLimits

0x20f0,	// (0x000414a8) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0004eba1) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0004eba1) list_setting_pane_vc_g

0x0971,	// (0x0003fd29) list_setting_pane_vc_t1_ParamLimits

0x0971,	// (0x0003fd29) list_setting_pane_vc_t1

0x098d,	// (0x0003fd45) list_setting_pane_vc_t2_ParamLimits

0x098d,	// (0x0003fd45) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0004edd9) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0004edd9) list_setting_pane_vc_t

0x0820,	// (0x0003fbd8) set_value_pane_cp_vc_ParamLimits

0x0820,	// (0x0003fbd8) set_value_pane_cp_vc

0x4b12,	// (0x00043eca) list_single_number_heading_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_single_number_heading_pane_vc_g1

0x2079,	// (0x00041431) list_single_number_heading_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_single_number_heading_pane_vc_g

0x09a9,	// (0x0003fd61) list_single_number_heading_pane_vc_t1_ParamLimits

0x09a9,	// (0x0003fd61) list_single_number_heading_pane_vc_t1

0x09bf,	// (0x0003fd77) list_single_number_heading_pane_vc_t2_ParamLimits

0x09bf,	// (0x0003fd77) list_single_number_heading_pane_vc_t2

0x09d1,	// (0x0003fd89) list_single_number_heading_pane_vc_t3_ParamLimits

0x09d1,	// (0x0003fd89) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0004edde) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0004edde) list_single_number_heading_pane_vc_t

0x077a,	// (0x0003fb32) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x077a,	// (0x0003fb32) list_single_graphic_heading_pane_vc_g1

0x4b12,	// (0x00043eca) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4b12,	// (0x00043eca) list_single_graphic_heading_pane_vc_g4

0x2079,	// (0x00041431) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2079,	// (0x00041431) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0004eb7b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0004eb7b) list_single_graphic_heading_pane_vc_g

0x09a9,	// (0x0003fd61) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x09a9,	// (0x0003fd61) list_single_graphic_heading_pane_vc_t1

0x09e3,	// (0x0003fd9b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x09e3,	// (0x0003fd9b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0004ede5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0004ede5) list_single_graphic_heading_pane_vc_t

0x4b12,	// (0x00043eca) list_double2_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_double2_pane_vc_g1

0x2079,	// (0x00041431) list_double2_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_double2_pane_vc_g

0x09f5,	// (0x0003fdad) list_double2_pane_vc_t1_ParamLimits

0x09f5,	// (0x0003fdad) list_double2_pane_vc_t1

0x0a0b,	// (0x0003fdc3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0a0b,	// (0x0003fdc3) list_double2_large_graphic_pane_vc_g1

0x0a17,	// (0x0003fdcf) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0a17,	// (0x0003fdcf) list_double2_large_graphic_pane_vc_g2

0x0a23,	// (0x0003fddb) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0a23,	// (0x0003fddb) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0004e9a2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0004e9a2) list_double2_large_graphic_pane_vc_g

0x0a2f,	// (0x0003fde7) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0a2f,	// (0x0003fde7) list_double2_large_graphic_pane_vc_t1

0x2524,	// (0x000418dc) list_double_time_pane_vc_g1_ParamLimits

0x2524,	// (0x000418dc) list_double_time_pane_vc_g1

0x2530,	// (0x000418e8) list_double_time_pane_vc_g2_ParamLimits

0x2530,	// (0x000418e8) list_double_time_pane_vc_g2

0x0001,

0xfa32,	// (0x0004edea) list_double_time_pane_vc_g_ParamLimits

0xfa32,	// (0x0004edea) list_double_time_pane_vc_g

0x0a45,	// (0x0003fdfd) list_double_time_pane_vc_t1_ParamLimits

0x0a45,	// (0x0003fdfd) list_double_time_pane_vc_t1

0x0a69,	// (0x0003fe21) list_double_time_pane_vc_t2_ParamLimits

0x0a69,	// (0x0003fe21) list_double_time_pane_vc_t2

0x0ab8,	// (0x0003fe70) list_double_time_pane_vc_t3_ParamLimits

0x0ab8,	// (0x0003fe70) list_double_time_pane_vc_t3

0x0aca,	// (0x0003fe82) list_double_time_pane_vc_t4_ParamLimits

0x0aca,	// (0x0003fe82) list_double_time_pane_vc_t4

0x0003,

0xfa37,	// (0x0004edef) list_double_time_pane_vc_t_ParamLimits

0xfa37,	// (0x0004edef) list_double_time_pane_vc_t

0x4b12,	// (0x00043eca) list_double_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_double_pane_vc_g1

0x2079,	// (0x00041431) list_double_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_double_pane_vc_g

0x0ade,	// (0x0003fe96) list_double_pane_vc_t1_ParamLimits

0x0ade,	// (0x0003fe96) list_double_pane_vc_t1

0x0af2,	// (0x0003feaa) list_double_pane_vc_t2_ParamLimits

0x0af2,	// (0x0003feaa) list_double_pane_vc_t2

0x0001,

0xfa40,	// (0x0004edf8) list_double_pane_vc_t_ParamLimits

0xfa40,	// (0x0004edf8) list_double_pane_vc_t

0x4b12,	// (0x00043eca) list_double_number_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_double_number_pane_vc_g1

0x2079,	// (0x00041431) list_double_number_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_double_number_pane_vc_g

0x0b0a,	// (0x0003fec2) list_double_number_pane_vc_t1_ParamLimits

0x0b0a,	// (0x0003fec2) list_double_number_pane_vc_t1

0x0b1c,	// (0x0003fed4) list_double_number_pane_vc_t2_ParamLimits

0x0b1c,	// (0x0003fed4) list_double_number_pane_vc_t2

0x0b30,	// (0x0003fee8) list_double_number_pane_vc_t3_ParamLimits

0x0b30,	// (0x0003fee8) list_double_number_pane_vc_t3

0x0002,

0xfa45,	// (0x0004edfd) list_double_number_pane_vc_t_ParamLimits

0xfa45,	// (0x0004edfd) list_double_number_pane_vc_t

0x0b48,	// (0x0003ff00) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0b48,	// (0x0003ff00) list_double_large_graphic_pane_vc_g1

0x0b6a,	// (0x0003ff22) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0b6a,	// (0x0003ff22) list_double_large_graphic_pane_vc_g2

0x0b7e,	// (0x0003ff36) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0b7e,	// (0x0003ff36) list_double_large_graphic_pane_vc_g3

0x0b8d,	// (0x0003ff45) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0b8d,	// (0x0003ff45) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa4c,	// (0x0004ee04) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0004ee04) list_double_large_graphic_pane_vc_g

0x0b99,	// (0x0003ff51) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0b99,	// (0x0003ff51) list_double_large_graphic_pane_vc_t1

0x0bb5,	// (0x0003ff6d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0bb5,	// (0x0003ff6d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0004ee0d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0004ee0d) list_double_large_graphic_pane_vc_t

0x4b12,	// (0x00043eca) list_double_heading_pane_vc_g1_ParamLimits

0x4b12,	// (0x00043eca) list_double_heading_pane_vc_g1

0x2079,	// (0x00041431) list_double_heading_pane_vc_g2_ParamLimits

0x2079,	// (0x00041431) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004e98a) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004e98a) list_double_heading_pane_vc_g

0x0bd7,	// (0x0003ff8f) list_double_heading_pane_vc_t1_ParamLimits

0x0bd7,	// (0x0003ff8f) list_double_heading_pane_vc_t1

0x0beb,	// (0x0003ffa3) list_double_heading_pane_vc_t2_ParamLimits

0x0beb,	// (0x0003ffa3) list_double_heading_pane_vc_t2

0x0001,

0xfa5a,	// (0x0004ee12) list_double_heading_pane_vc_t_ParamLimits

0xfa5a,	// (0x0004ee12) list_double_heading_pane_vc_t

0x0c03,	// (0x0003ffbb) list_double_graphic_pane_vc_g1_ParamLimits

0x0c03,	// (0x0003ffbb) list_double_graphic_pane_vc_g1

0x253c,	// (0x000418f4) list_double_graphic_pane_vc_g2_ParamLimits

0x253c,	// (0x000418f4) list_double_graphic_pane_vc_g2

0x4b12,	// (0x00043eca) list_double_graphic_pane_vc_g3_ParamLimits

0x4b12,	// (0x00043eca) list_double_graphic_pane_vc_g3

0x0003,

0xfa5f,	// (0x0004ee17) list_double_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0004ee17) list_double_graphic_pane_vc_g

0x0c0f,	// (0x0003ffc7) list_double_graphic_pane_vc_t1_ParamLimits

0x0c0f,	// (0x0003ffc7) list_double_graphic_pane_vc_t1

0x0c39,	// (0x0003fff1) list_double_graphic_pane_vc_t2_ParamLimits

0x0c39,	// (0x0003fff1) list_double_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0004ee20) list_double_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0004ee20) list_double_graphic_pane_vc_t

0x0f63,	// (0x0004031b) aid_size_cell_fastswap

0xbe9f,	// (0x0004b257) aid_size_cell_touch_ParamLimits

0xbe9f,	// (0x0004b257) aid_size_cell_touch

0x11c6,	// (0x0004057e) popup_fast_swap_wide_window_ParamLimits

0x11c6,	// (0x0004057e) popup_fast_swap_wide_window

0xc04f,	// (0x0004b407) touch_pane_ParamLimits

0xc04f,	// (0x0004b407) touch_pane

0x3f3c,	// (0x000432f4) button_value_adjust_pane_cp2

0x0425,	// (0x0003f7dd) button_value_adjust_pane_cp4

0x0449,	// (0x0003f801) form_field_data_pane_cp2

0xbb26,	// (0x0004aede) form_field_data_wide_pane_cp2

0x43b0,	// (0x00043768) bg_scroll_pane_ParamLimits

0x1614,	// (0x000409cc) scroll_handle_pane_ParamLimits

0x1628,	// (0x000409e0) scroll_sc2_down_pane_ParamLimits

0x1628,	// (0x000409e0) scroll_sc2_down_pane

0x43e1,	// (0x00043799) scroll_sc2_up_pane_ParamLimits

0x43e1,	// (0x00043799) scroll_sc2_up_pane

0xe128,	// (0x0004d4e0) grid_wheel_folder_pane_g1_ParamLimits

0xe128,	// (0x0004d4e0) grid_wheel_folder_pane_g1

0x1809,	// (0x00040bc1) clock_nsta_pane_cp2_ParamLimits

0x1809,	// (0x00040bc1) clock_nsta_pane_cp2

0xd5aa,	// (0x0004c962) listscroll_midp_pane_ParamLimits

0xd5b6,	// (0x0004c96e) midp_canvas_pane

0x4ed5,	// (0x0004428d) nsta_clock_indic_pane

0x4f09,	// (0x000442c1) listscroll_form_pane_vc

0x4f11,	// (0x000442c9) listscroll_set_pane_vc_ParamLimits

0x4f11,	// (0x000442c9) listscroll_set_pane_vc

0xd83b,	// (0x0004cbf3) clock_nsta_pane

0xd865,	// (0x0004cc1d) indicator_nsta_pane

0x535f,	// (0x00044717) bg_popup_sub_pane_cp2_ParamLimits

0x5373,	// (0x0004472b) find_pane_cp2_ParamLimits

0x5373,	// (0x0004472b) find_pane_cp2

0x5389,	// (0x00044741) grid_toobar_pane_ParamLimits

0x5469,	// (0x00044821) list_form_gen_pane_vc_ParamLimits

0x5469,	// (0x00044821) list_form_gen_pane_vc

0x547f,	// (0x00044837) scroll_pane_cp8_vc_ParamLimits

0x547f,	// (0x00044837) scroll_pane_cp8_vc

0x54fb,	// (0x000448b3) data_form_wide_pane_vc_ParamLimits

0x54fb,	// (0x000448b3) data_form_wide_pane_vc

0x5507,	// (0x000448bf) form_field_data_wide_pane_vc_g1

0x550f,	// (0x000448c7) form_field_data_wide_pane_vc_t1_ParamLimits

0x550f,	// (0x000448c7) form_field_data_wide_pane_vc_t1

0x3f50,	// (0x00043308) input_focus_pane_cp6_vc_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_cp6_vc

0x5861,	// (0x00044c19) list_midp_pane_ParamLimits

0x6b47,	// (0x00045eff) scroll_pane_cp16_ParamLimits

0x6b47,	// (0x00045eff) scroll_pane_cp16

0x58af,	// (0x00044c67) button_value_adjust_pane_ParamLimits

0x58af,	// (0x00044c67) button_value_adjust_pane

0xdd71,	// (0x0004d129) button_value_adjust_pane_cp6_ParamLimits

0xdd71,	// (0x0004d129) button_value_adjust_pane_cp6

0xde8b,	// (0x0004d243) settings_code_pane_cp_ParamLimits

0xde8b,	// (0x0004d243) settings_code_pane_cp

0x35c5,	// (0x0004297d) cell_touch_pane_g1

0x35c5,	// (0x0004297d) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0004eac0) cell_touch_pane_g

0xe016,	// (0x0004d3ce) cell_touch_pane_cp_ParamLimits

0xe016,	// (0x0004d3ce) cell_touch_pane_cp

0xe032,	// (0x0004d3ea) cell_touch_pane_ParamLimits

0xe032,	// (0x0004d3ea) cell_touch_pane

0x35c5,	// (0x0004297d) scroll_sc2_down_pane_g1

0x35c5,	// (0x0004297d) scroll_sc2_up_pane_g1

0x35cf,	// (0x00042987) bg_set_opt_pane_cp4_vc

0x6ed7,	// (0x0004628f) list_set_graphic_pane_vc_g1_ParamLimits

0x6ed7,	// (0x0004628f) list_set_graphic_pane_vc_g1

0x6ee3,	// (0x0004629b) list_set_graphic_pane_vc_g2_ParamLimits

0x6ee3,	// (0x0004629b) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0004edb0) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0004edb0) list_set_graphic_pane_vc_g

0x6eef,	// (0x000462a7) text_primary_small_cp13_vc_ParamLimits

0x6eef,	// (0x000462a7) text_primary_small_cp13_vc

0x6f07,	// (0x000462bf) list_set_graphic_pane_vc_ParamLimits

0x6f07,	// (0x000462bf) list_set_graphic_pane_vc

0x35cf,	// (0x00042987) input_focus_pane_cp2_vc

0x35c5,	// (0x0004297d) setting_code_pane_vc_g1

0x36fa,	// (0x00042ab2) setting_code_pane_vc_t1

0x6f19,	// (0x000462d1) set_text_pane_vc_t1_ParamLimits

0x6f19,	// (0x000462d1) set_text_pane_vc_t1

0x35cf,	// (0x00042987) input_focus_pane_cp1_vc

0x6f35,	// (0x000462ed) list_set_text_pane_vc

0x35c5,	// (0x0004297d) setting_text_pane_vc_g1

0x35cf,	// (0x00042987) bg_set_opt_pane_cp2_vc

0x36f1,	// (0x00042aa9) setting_slider_graphic_pane_vc_g1

0x6f3f,	// (0x000462f7) setting_slider_graphic_pane_vc_t1

0x6f4f,	// (0x00046307) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0004edb5) setting_slider_graphic_pane_vc_t

0x6f5f,	// (0x00046317) slider_set_pane_cp_vc

0x6f67,	// (0x0004631f) slider_set_pane_vc_g1

0x6f70,	// (0x00046328) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0004edba) slider_set_pane_vc_g

0x3f9c,	// (0x00043354) set_opt_bg_pane_g1_copy1

0x3fa4,	// (0x0004335c) set_opt_bg_pane_g2_copy1

0x6f9c,	// (0x00046354) set_opt_bg_pane_g3_copy1

0x3fb4,	// (0x0004336c) set_opt_bg_pane_g4_copy1

0x3fbc,	// (0x00043374) set_opt_bg_pane_g5_copy1

0x3fc4,	// (0x0004337c) set_opt_bg_pane_g6_copy1

0x6fa6,	// (0x0004635e) set_opt_bg_pane_g7_copy1

0x6fae,	// (0x00046366) set_opt_bg_pane_g8_copy1

0x6fb8,	// (0x00046370) set_opt_bg_pane_g9_copy1

0x35cf,	// (0x00042987) bg_set_opt_pane_cp_vc

0x6fc2,	// (0x0004637a) setting_slider_pane_vc_t1

0x6fd1,	// (0x00046389) setting_slider_pane_vc_t2

0x6fe1,	// (0x00046399) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0004edc9) setting_slider_pane_vc_t

0x6ff1,	// (0x000463a9) slider_set_pane_vc

0x2199,	// (0x00041551) volume_set_pane_vc_g1

0x21a2,	// (0x0004155a) volume_set_pane_vc_g2

0x21ab,	// (0x00041563) volume_set_pane_vc_g3

0x21b4,	// (0x0004156c) volume_set_pane_vc_g4

0x21bd,	// (0x00041575) volume_set_pane_vc_g5

0x21c6,	// (0x0004157e) volume_set_pane_vc_g6

0x21cf,	// (0x00041587) volume_set_pane_vc_g7

0x21d8,	// (0x00041590) volume_set_pane_vc_g8

0x21e1,	// (0x00041599) volume_set_pane_vc_g9

0x21ea,	// (0x000415a2) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0004ec6e) volume_set_pane_vc_g

0x6ff9,	// (0x000463b1) volume_set_pane_vc

0x7001,	// (0x000463b9) button_value_adjust_pane_cp1_vc

0x700b,	// (0x000463c3) list_highlight_pane_cp2_vc

0x7014,	// (0x000463cc) list_set_pane_vc_ParamLimits

0x7014,	// (0x000463cc) list_set_pane_vc

0x7072,	// (0x0004642a) main_pane_set_vc_t1_ParamLimits

0x7072,	// (0x0004642a) main_pane_set_vc_t1

0x7087,	// (0x0004643f) main_pane_set_vc_t2_ParamLimits

0x7087,	// (0x0004643f) main_pane_set_vc_t2

0x7099,	// (0x00046451) main_pane_set_vc_t3_ParamLimits

0x7099,	// (0x00046451) main_pane_set_vc_t3

0x70ad,	// (0x00046465) main_pane_set_vc_t4_ParamLimits

0x70ad,	// (0x00046465) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0004edd0) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0004edd0) main_pane_set_vc_t

0x70c1,	// (0x00046479) setting_code_pane_vc_ParamLimits

0x70c1,	// (0x00046479) setting_code_pane_vc

0x70d2,	// (0x0004648a) setting_slider_graphic_pane_vc

0x70d2,	// (0x0004648a) setting_slider_pane_vc

0x70d2,	// (0x0004648a) setting_text_pane_vc

0x70d2,	// (0x0004648a) setting_volume_pane_vc

0x70dc,	// (0x00046494) scroll_pane_cp121_vc

0x3f2a,	// (0x000432e2) set_content_pane_vc

0x70e4,	// (0x0004649c) button_value_adjust_pane_g1

0x70ed,	// (0x000464a5) button_value_adjust_pane_g2

0x0001,

0xfa6d,	// (0x0004ee25) button_value_adjust_pane_g

0x70f6,	// (0x000464ae) form_field_slider_wide_pane_vc_t1_ParamLimits

0x70f6,	// (0x000464ae) form_field_slider_wide_pane_vc_t1

0x710a,	// (0x000464c2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x710a,	// (0x000464c2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa72,	// (0x0004ee2a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x0004ee2a) form_field_slider_wide_pane_vc_t

0x392a,	// (0x00042ce2) input_focus_pane_cp10_vc_ParamLimits

0x392a,	// (0x00042ce2) input_focus_pane_cp10_vc

0x7138,	// (0x000464f0) slider_cont_pane_cp1_vc_ParamLimits

0x7138,	// (0x000464f0) slider_cont_pane_cp1_vc

0x714a,	// (0x00046502) slider_form_pane_g1_cp2

0x6f70,	// (0x00046328) slider_form_pane_g2_cp2

0x7177,	// (0x0004652f) form_field_slider_pane_vc_t3

0x7185,	// (0x0004653d) form_field_slider_pane_vc_t4

0x7193,	// (0x0004654b) slider_form_pane_vc_ParamLimits

0x7193,	// (0x0004654b) slider_form_pane_vc

0x71a0,	// (0x00046558) form_field_slider_pane_vc_t1_ParamLimits

0x71a0,	// (0x00046558) form_field_slider_pane_vc_t1

0x710a,	// (0x000464c2) form_field_slider_pane_vc_t2_ParamLimits

0x710a,	// (0x000464c2) form_field_slider_pane_vc_t2

0x0001,

0xfa84,	// (0x0004ee3c) form_field_slider_pane_vc_t_ParamLimits

0xfa84,	// (0x0004ee3c) form_field_slider_pane_vc_t

0x392a,	// (0x00042ce2) input_focus_pane_cp9_vc_ParamLimits

0x392a,	// (0x00042ce2) input_focus_pane_cp9_vc

0x71bc,	// (0x00046574) slider_cont_pane_vc_ParamLimits

0x71bc,	// (0x00046574) slider_cont_pane_vc

0x71d0,	// (0x00046588) list_form_graphic_pane_cp_vc_ParamLimits

0x71d0,	// (0x00046588) list_form_graphic_pane_cp_vc

0x5507,	// (0x000448bf) form_field_popup_wide_pane_vc_g1

0x71e5,	// (0x0004659d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x71e5,	// (0x0004659d) form_field_popup_wide_pane_vc_t1

0x3f50,	// (0x00043308) input_focus_pane_cp8_vc_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_cp8_vc

0x722a,	// (0x000465e2) list_form_wide_pane_vc_ParamLimits

0x722a,	// (0x000465e2) list_form_wide_pane_vc

0x7236,	// (0x000465ee) list_form_graphic_pane_vc_g1

0x723e,	// (0x000465f6) list_form_graphic_pane_vc_t1_ParamLimits

0x723e,	// (0x000465f6) list_form_graphic_pane_vc_t1

0x36af,	// (0x00042a67) list_highlight_pane_cp5_vc_ParamLimits

0x36af,	// (0x00042a67) list_highlight_pane_cp5_vc

0x725a,	// (0x00046612) list_form_graphic_pane_vc_ParamLimits

0x725a,	// (0x00046612) list_form_graphic_pane_vc

0x5507,	// (0x000448bf) form_field_popup_pane_vc_g1

0x7270,	// (0x00046628) form_field_popup_pane_vc_t1_ParamLimits

0x7270,	// (0x00046628) form_field_popup_pane_vc_t1

0x3f50,	// (0x00043308) input_focus_pane_cp7_vc_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_cp7_vc

0x7287,	// (0x0004663f) list_form_pane_vc_ParamLimits

0x7287,	// (0x0004663f) list_form_pane_vc

0x7293,	// (0x0004664b) data_form_pane_vc_t1_ParamLimits

0x7293,	// (0x0004664b) data_form_pane_vc_t1

0x3f9c,	// (0x00043354) input_focus_pane_vc_g1

0x3fa4,	// (0x0004335c) input_focus_pane_vc_g2

0x3fac,	// (0x00043364) input_focus_pane_vc_g3

0x3fb4,	// (0x0004336c) input_focus_pane_vc_g4

0x3fbc,	// (0x00043374) input_focus_pane_vc_g5

0x3fc4,	// (0x0004337c) input_focus_pane_vc_g6

0x3fcc,	// (0x00043384) input_focus_pane_vc_g7

0x3fd4,	// (0x0004338c) input_focus_pane_vc_g8

0x3fdc,	// (0x00043394) input_focus_pane_vc_g9

0x35c5,	// (0x0004297d) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0004ea49) input_focus_pane_vc_g

0x54fb,	// (0x000448b3) data_form_pane_vc_ParamLimits

0x54fb,	// (0x000448b3) data_form_pane_vc

0x5507,	// (0x000448bf) form_field_data_pane_vc_g1

0x72ae,	// (0x00046666) form_field_data_pane_vc_t1_ParamLimits

0x72ae,	// (0x00046666) form_field_data_pane_vc_t1

0x3f50,	// (0x00043308) input_focus_pane_vc_ParamLimits

0x3f50,	// (0x00043308) input_focus_pane_vc

0x72c8,	// (0x00046680) button_value_adjust_pane_cp3_vc

0x72d0,	// (0x00046688) button_value_adjust_pane_cp5_vc

0x72d8,	// (0x00046690) form_field_data_pane_vc_ParamLimits

0x72d8,	// (0x00046690) form_field_data_pane_vc

0x72ef,	// (0x000466a7) form_field_data_pane_vc_cp2

0x72f7,	// (0x000466af) form_field_data_wide_pane_vc_ParamLimits

0x72f7,	// (0x000466af) form_field_data_wide_pane_vc

0x730d,	// (0x000466c5) form_field_data_wide_pane_vc_cp2

0x7315,	// (0x000466cd) form_field_popup_pane_vc_ParamLimits

0x7315,	// (0x000466cd) form_field_popup_pane_vc

0x732c,	// (0x000466e4) form_field_popup_wide_pane_vc_ParamLimits

0x732c,	// (0x000466e4) form_field_popup_wide_pane_vc

0x7342,	// (0x000466fa) form_field_slider_pane_vc_ParamLimits

0x7342,	// (0x000466fa) form_field_slider_pane_vc

0x7355,	// (0x0004670d) form_field_slider_wide_pane_vc_ParamLimits

0x7355,	// (0x0004670d) form_field_slider_wide_pane_vc

0xe050,	// (0x0004d408) grid_touch_1_pane_ParamLimits

0xe050,	// (0x0004d408) grid_touch_1_pane

0xe064,	// (0x0004d41c) grid_touch_2_pane_ParamLimits

0xe064,	// (0x0004d41c) grid_touch_2_pane

0x7423,	// (0x000467db) touch_pane_g1_ParamLimits

0x7423,	// (0x000467db) touch_pane_g1

0x738c,	// (0x00046744) cell_app_pane_cp_wide_ParamLimits

0x738c,	// (0x00046744) cell_app_pane_cp_wide

0x739d,	// (0x00046755) grid_popup_fast_wide_pane_ParamLimits

0x739d,	// (0x00046755) grid_popup_fast_wide_pane

0x73b1,	// (0x00046769) scroll_pane_cp19_ParamLimits

0x73b1,	// (0x00046769) scroll_pane_cp19

0x35cf,	// (0x00042987) bg_popup_window_pane_cp20

0x73c5,	// (0x0004677d) listscroll_popup_fast_wide_pane

0x4104,	// (0x000434bc) grid_indicator_nsta_pane

0x73cd,	// (0x00046785) clock_nsta_pane_g1

0x73d6,	// (0x0004678e) clock_nsta_pane_t1

0xe08e,	// (0x0004d446) cell_indicator_nsta_pane_ParamLimits

0xe08e,	// (0x0004d446) cell_indicator_nsta_pane

0x7423,	// (0x000467db) cell_indicator_nsta_pane_g1

0xe0a5,	// (0x0004d45d) cell_indicator_nsta_pane_g2

0x0001,

0xfa95,	// (0x0004ee4d) cell_indicator_nsta_pane_g

0x743e,	// (0x000467f6) clock_nsta_pane_cp

0x7447,	// (0x000467ff) indicator_nsta_pane_cp

0x744f,	// (0x00046807) nsta_clock_indic_pane_g1

0x3778,	// (0x00042b30) grid_indicator_pane

0x44d6,	// (0x0004388e) scroll_pane_cp29

0x1758,	// (0x00040b10) indicator_nsta_pane_cp2_ParamLimits

0x1758,	// (0x00040b10) indicator_nsta_pane_cp2

0x36af,	// (0x00042a67) main_apps_wheel_pane

0x5722,	// (0x00044ada) form_midp_field_text_pane_ParamLimits

0x586d,	// (0x00044c25) scroll_bar_cp050_ParamLimits

0x749f,	// (0x00046857) cell_indicator_pane_ParamLimits

0x749f,	// (0x00046857) cell_indicator_pane

0x74b6,	// (0x0004686e) cell_indicator_pane_g1

0xe0b2,	// (0x0004d46a) grid_wheel_folder_pane_ParamLimits

0xe0b2,	// (0x0004d46a) grid_wheel_folder_pane

0xe0c0,	// (0x0004d478) list_wheel_apps_pane_ParamLimits

0xe0c0,	// (0x0004d478) list_wheel_apps_pane

0xe0ce,	// (0x0004d486) main_apps_wheel_pane_g1_ParamLimits

0xe0ce,	// (0x0004d486) main_apps_wheel_pane_g1

0xe0da,	// (0x0004d492) main_apps_wheel_pane_g2_ParamLimits

0xe0da,	// (0x0004d492) main_apps_wheel_pane_g2

0x0001,

0xfab1,	// (0x0004ee69) main_apps_wheel_pane_g_ParamLimits

0xfab1,	// (0x0004ee69) main_apps_wheel_pane_g

0xe0e8,	// (0x0004d4a0) main_apps_wheel_pane_t1_ParamLimits

0xe0e8,	// (0x0004d4a0) main_apps_wheel_pane_t1

0xe0fc,	// (0x0004d4b4) list_wheel_apps_pane_g1

0xe104,	// (0x0004d4bc) list_wheel_apps_pane_g2

0xe10c,	// (0x0004d4c4) list_wheel_apps_pane_g3

0xe114,	// (0x0004d4cc) list_wheel_apps_pane_g4

0xe11e,	// (0x0004d4d6) list_wheel_apps_pane_g5

0x0004,

0xfab6,	// (0x0004ee6e) list_wheel_apps_pane_g

0x4a59,	// (0x00043e11) navi_icon_text_pane

0xd72f,	// (0x0004cae7) aid_fill_nsta

0x757b,	// (0x00046933) navi_icon_text_pane_g1

0x7587,	// (0x0004693f) navi_icon_text_pane_t1

0x48ec,	// (0x00043ca4) list_set_graphic_pane_t1_ParamLimits

0x48ec,	// (0x00043ca4) list_set_graphic_pane_t1

0x5fd0,	// (0x00045388) popup_midp_note_alarm_window_t6_ParamLimits

0x5fd0,	// (0x00045388) popup_midp_note_alarm_window_t6

0x5fe2,	// (0x0004539a) popup_midp_note_alarm_window_t7_ParamLimits

0x5fe2,	// (0x0004539a) popup_midp_note_alarm_window_t7

0x5ff4,	// (0x000453ac) popup_midp_note_alarm_window_t8_ParamLimits

0x5ff4,	// (0x000453ac) popup_midp_note_alarm_window_t8

0x6006,	// (0x000453be) popup_midp_note_alarm_window_t9_ParamLimits

0x6006,	// (0x000453be) popup_midp_note_alarm_window_t9

0x6018,	// (0x000453d0) popup_midp_note_alarm_window_t10_ParamLimits

0x6018,	// (0x000453d0) popup_midp_note_alarm_window_t10

0x602a,	// (0x000453e2) popup_midp_note_alarm_window_t11_ParamLimits

0x602a,	// (0x000453e2) popup_midp_note_alarm_window_t11

0x603c,	// (0x000453f4) scroll_pane_cp17_ParamLimits

0x603c,	// (0x000453f4) scroll_pane_cp17

0x2199,	// (0x00041551) volume_small_pane_cp_g1

0x2559,	// (0x00041911) volume_small_pane_cp_g2

0x2562,	// (0x0004191a) volume_small_pane_cp_g3

0x256b,	// (0x00041923) volume_small_pane_cp_g4

0x2574,	// (0x0004192c) volume_small_pane_cp_g5

0x257d,	// (0x00041935) volume_small_pane_cp_g6

0x2586,	// (0x0004193e) volume_small_pane_cp_g7

0x258f,	// (0x00041947) volume_small_pane_cp_g8

0x2598,	// (0x00041950) volume_small_pane_cp_g9

0x25a1,	// (0x00041959) volume_small_pane_cp_g10

0x4cb6,	// (0x0004406e) midp_ticker_pane_g1_ParamLimits

0x4cc2,	// (0x0004407a) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0004eb15) midp_ticker_pane_g_ParamLimits

0x4cce,	// (0x00044086) midp_ticker_pane_t1_ParamLimits

0xd753,	// (0x0004cb0b) aid_fill_nsta_2

0x5859,	// (0x00044c11) list_form2_midp_pane

0x698a,	// (0x00045d42) midp_editing_number_pane_ParamLimits

0x6999,	// (0x00045d51) midp_ticker_pane_ParamLimits

0x7599,	// (0x00046951) form2_midp_field_pane

0x75bd,	// (0x00046975) scroll_pane_cp51

0x75dd,	// (0x00046995) form2_midp_button_pane_ParamLimits

0x75dd,	// (0x00046995) form2_midp_button_pane

0x75ef,	// (0x000469a7) form2_midp_content_pane_ParamLimits

0x75ef,	// (0x000469a7) form2_midp_content_pane

0x7609,	// (0x000469c1) form2_midp_field_choice_group_pane

0x7611,	// (0x000469c9) form2_midp_field_pane_g1

0x7619,	// (0x000469d1) form2_midp_field_pane_g2

0x7621,	// (0x000469d9) form2_midp_field_pane_g3

0x7629,	// (0x000469e1) form2_midp_field_pane_g4

0x0003,

0xfadb,	// (0x0004ee93) form2_midp_field_pane_g

0x7631,	// (0x000469e9) form2_midp_gauge_slider_pane

0x7639,	// (0x000469f1) form2_midp_gauge_wait_pane

0x7641,	// (0x000469f9) form2_midp_image_pane_ParamLimits

0x7641,	// (0x000469f9) form2_midp_image_pane

0x765c,	// (0x00046a14) form2_midp_label_pane_ParamLimits

0x765c,	// (0x00046a14) form2_midp_label_pane

0xe151,	// (0x0004d509) form2_midp_label_pane_cp_ParamLimits

0xe151,	// (0x0004d509) form2_midp_label_pane_cp

0x7696,	// (0x00046a4e) form2_midp_string_pane_ParamLimits

0x7696,	// (0x00046a4e) form2_midp_string_pane

0xbd4a,	// (0x0004b102) form2_midp_text_pane_ParamLimits

0xbd4a,	// (0x0004b102) form2_midp_text_pane

0x76a8,	// (0x00046a60) form2_midp_time_pane

0x76b8,	// (0x00046a70) input_focus_pane_cp51_ParamLimits

0x76b8,	// (0x00046a70) input_focus_pane_cp51

0x76d0,	// (0x00046a88) form2_midp_label_pane_t1_ParamLimits

0x76d0,	// (0x00046a88) form2_midp_label_pane_t1

0xbd63,	// (0x0004b11b) form2_mdip_text_pane_t1_ParamLimits

0xbd63,	// (0x0004b11b) form2_mdip_text_pane_t1

0x0ca0,	// (0x00040058) form2_midp_time_pane_t1

0x7719,	// (0x00046ad1) form2_midp_gauge_slider_pane_t1

0xe170,	// (0x0004d528) form2_midp_gauge_slider_pane_t2

0xe182,	// (0x0004d53a) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae4,	// (0x0004ee9c) form2_midp_gauge_slider_pane_t

0x774f,	// (0x00046b07) form2_midp_slider_pane

0x775b,	// (0x00046b13) form2_midp_gauge_wait_pane_t1

0x7769,	// (0x00046b21) form2_midp_wait_pane_ParamLimits

0x7769,	// (0x00046b21) form2_midp_wait_pane

0xe194,	// (0x0004d54c) list_single_2graphic_pane_cp4_ParamLimits

0xe194,	// (0x0004d54c) list_single_2graphic_pane_cp4

0xdb6f,	// (0x0004cf27) list_single_midp_graphic_pane_cp_ParamLimits

0xdb6f,	// (0x0004cf27) list_single_midp_graphic_pane_cp

0x35cf,	// (0x00042987) list_highlight_pane_cp20

0x77b8,	// (0x00046b70) list_single_2graphic_pane_g1_cp4

0x77c0,	// (0x00046b78) list_single_2graphic_pane_g2_cp4

0x77c8,	// (0x00046b80) list_single_2graphic_pane_t1_cp4

0x36af,	// (0x00042a67) list_highlight_pane_cp21

0x77d7,	// (0x00046b8f) list_single_midp_graphic_pane_g4_cp

0x77e6,	// (0x00046b9e) list_single_midp_graphic_pane_t1_cp

0xe1a8,	// (0x0004d560) form2_mdip_string_pane_t1_ParamLimits

0xe1a8,	// (0x0004d560) form2_mdip_string_pane_t1

0x35cf,	// (0x00042987) bg_wml_button_pane_cp2

0x35c5,	// (0x0004297d) form2_midp_image_pane_g1

0x144a,	// (0x00040802) list_double_large_graphic_pane_g5_ParamLimits

0x144a,	// (0x00040802) list_double_large_graphic_pane_g5

0xd5aa,	// (0x0004c962) midp_form_pane_ParamLimits

0x36af,	// (0x00042a67) main_apps_wheel_pane_ParamLimits

0xc68e,	// (0x0004ba46) popup_preview_window_ParamLimits

0xc68e,	// (0x0004ba46) popup_preview_window

0x1ff4,	// (0x000413ac) popup_touch_info_window_ParamLimits

0x1ff4,	// (0x000413ac) popup_touch_info_window

0x2012,	// (0x000413ca) popup_touch_menu_window_ParamLimits

0x2012,	// (0x000413ca) popup_touch_menu_window

0x35bb,	// (0x00042973) bg_popup_sub_pane_cp6

0x78f4,	// (0x00046cac) list_touch_menu_pane

0x78fc,	// (0x00046cb4) list_single_touch_menu_pane_ParamLimits

0x78fc,	// (0x00046cb4) list_single_touch_menu_pane

0x7912,	// (0x00046cca) list_single_touch_menu_pane_t1

0x36af,	// (0x00042a67) bg_popup_sub_pane_cp7_ParamLimits

0x36af,	// (0x00042a67) bg_popup_sub_pane_cp7

0x7920,	// (0x00046cd8) heading_sub_pane

0x7928,	// (0x00046ce0) list_touch_info_pane_ParamLimits

0x7928,	// (0x00046ce0) list_touch_info_pane

0x7937,	// (0x00046cef) list_single_touch_info_pane_ParamLimits

0x7937,	// (0x00046cef) list_single_touch_info_pane

0x7949,	// (0x00046d01) list_single_touch_info_pane_t1

0x7957,	// (0x00046d0f) list_single_touch_info_pane_t2

0x0001,

0xfaf2,	// (0x0004eeaa) list_single_touch_info_pane_t

0x4bd9,	// (0x00043f91) bg_popup_heading_pane_cp

0x7965,	// (0x00046d1d) heading_sub_pane_t1

0x5495,	// (0x0004484d) bg_popup_preview_window_pane_cp_ParamLimits

0x5495,	// (0x0004484d) bg_popup_preview_window_pane_cp

0x7920,	// (0x00046cd8) heading_preview_pane

0x7928,	// (0x00046ce0) list_preview_pane_ParamLimits

0x7928,	// (0x00046ce0) list_preview_pane

0x7973,	// (0x00046d2b) popup_preview_window_g1

0x7937,	// (0x00046cef) list_single_preview_pane_ParamLimits

0x7937,	// (0x00046cef) list_single_preview_pane

0x797b,	// (0x00046d33) list_single_preview_pane_g1

0x7983,	// (0x00046d3b) list_single_preview_pane_t1

0x7949,	// (0x00046d01) list_single_preview_pane_t2

0x0001,

0xfaf7,	// (0x0004eeaf) list_single_preview_pane_t

0x7991,	// (0x00046d49) bg_popup_heading_pane_cp2_ParamLimits

0x7991,	// (0x00046d49) bg_popup_heading_pane_cp2

0x79a7,	// (0x00046d5f) heading_preview_pane_g1

0x79af,	// (0x00046d67) heading_preview_pane_t1_ParamLimits

0x79af,	// (0x00046d67) heading_preview_pane_t1

0x379b,	// (0x00042b53) soft_indicator_pane_t1_ParamLimits

0x3eb7,	// (0x0004326f) scroll_pane_ParamLimits

0x43cf,	// (0x00043787) scroll_sc2_left_pane

0x43d8,	// (0x00043790) scroll_sc2_right_pane

0x43f7,	// (0x000437af) scroll_bg_pane_g1_ParamLimits

0x440c,	// (0x000437c4) scroll_bg_pane_g2_ParamLimits

0x4424,	// (0x000437dc) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0004eaa0) scroll_bg_pane_g_ParamLimits

0x43f7,	// (0x000437af) scroll_handle_pane_g1_ParamLimits

0x4446,	// (0x000437fe) scroll_handle_pane_g2_ParamLimits

0x4424,	// (0x000437dc) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0004eaa7) scroll_handle_pane_g_ParamLimits

0x1aba,	// (0x00040e72) popup_choice_list_window_ParamLimits

0x1aba,	// (0x00040e72) popup_choice_list_window

0x536b,	// (0x00044723) choice_list_pane

0x53ed,	// (0x000447a5) cell_toolbar_pane_t1

0x5415,	// (0x000447cd) toolbar_button_pane_ParamLimits

0x64f6,	// (0x000458ae) ai_gene_pane_1_t2_ParamLimits

0x64f6,	// (0x000458ae) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0004ecca) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0004ecca) ai_gene_pane_1_t

0x79cc,	// (0x00046d84) scroll_sc2_left_pane_g1

0x79cc,	// (0x00046d84) scroll_sc2_right_pane_g1

0x4efd,	// (0x000442b5) bg_popup_sub_pane_cp10

0x79d6,	// (0x00046d8e) list_choice_list_pane

0x79ef,	// (0x00046da7) list_single_choice_list_pane_ParamLimits

0x79ef,	// (0x00046da7) list_single_choice_list_pane

0x7a02,	// (0x00046dba) list_single_choice_list_pane_g1

0x40d5,	// (0x0004348d) list_single_choice_list_pane_t1_ParamLimits

0x40d5,	// (0x0004348d) list_single_choice_list_pane_t1

0x7a0a,	// (0x00046dc2) choice_list_pane_g1

0x7a12,	// (0x00046dca) choice_list_pane_t1

0x35bb,	// (0x00042973) input_focus_pane_cp11

0x42ac,	// (0x00043664) title_pane_stacon_g2_ParamLimits

0x42ac,	// (0x00043664) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0004ea86) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0004ea86) title_pane_stacon_g

0x4bd9,	// (0x00043f91) cursor_press_pane

0xc33b,	// (0x0004b6f3) popup_fep_hwr_window_ParamLimits

0xc33b,	// (0x0004b6f3) popup_fep_hwr_window

0x1be0,	// (0x00040f98) popup_fep_vkb_window_ParamLimits

0x1be0,	// (0x00040f98) popup_fep_vkb_window

0x7a20,	// (0x00046dd8) cursor_press_pane_g1

0x0002,

0xfb20,	// (0x0004eed8) fep_vkb_side_pane_g_ParamLimits

0x25e3,	// (0x0004199b) fep_hwr_candidate_pane_ParamLimits

0x25e3,	// (0x0004199b) fep_hwr_candidate_pane

0x260d,	// (0x000419c5) fep_hwr_side_pane_ParamLimits

0x260d,	// (0x000419c5) fep_hwr_side_pane

0x262d,	// (0x000419e5) fep_hwr_top_pane_ParamLimits

0x262d,	// (0x000419e5) fep_hwr_top_pane

0x2645,	// (0x000419fd) fep_hwr_write_pane_ParamLimits

0x2645,	// (0x000419fd) fep_hwr_write_pane

0xfb20,	// (0x0004eed8) fep_vkb_side_pane_g

0x7a28,	// (0x00046de0) fep_hwr_top_pane_g1

0x7a3a,	// (0x00046df2) fep_hwr_top_pane_g2

0x2671,	// (0x00041a29) fep_hwr_top_pane_g3

0x0002,

0xfafc,	// (0x0004eeb4) fep_hwr_top_pane_g

0x2686,	// (0x00041a3e) fep_hwr_top_text_pane

0x45c6,	// (0x0004397e) fep_hwr_top_text_pane_g1

0x7a70,	// (0x00046e28) fep_hwr_top_text_pane_t1

0x277c,	// (0x00041b34) fep_hwr_candidate_pane_g1

0x7cc3,	// (0x0004707b) fep_vkb_keypad_pane_g3_ParamLimits

0x7cc3,	// (0x0004707b) fep_vkb_keypad_pane_g3

0x7ceb,	// (0x000470a3) fep_vkb_keypad_pane_g4_ParamLimits

0x7ceb,	// (0x000470a3) fep_vkb_keypad_pane_g4

0x7d5a,	// (0x00047112) fep_vkb_bottom_pane_g2_ParamLimits

0x7d5a,	// (0x00047112) fep_vkb_bottom_pane_g2

0x0001,

0xfb27,	// (0x0004eedf) fep_vkb_bottom_pane_g_ParamLimits

0xfb27,	// (0x0004eedf) fep_vkb_bottom_pane_g

0x79cc,	// (0x00046d84) cell_vkb_side_pane_g2

0x0001,

0xfb31,	// (0x0004eee9) cell_vkb_side_pane_g

0x7de5,	// (0x0004719d) cell_vkb_side_pane_t1

0x7df3,	// (0x000471ab) cell_vkb_side_pane_t1_copy1

0x79cc,	// (0x00046d84) bg_fep_vkb_candidate_pane_g2

0x7f2b,	// (0x000472e3) cell_vkb_candidate_pane_ParamLimits

0x7a7e,	// (0x00046e36) aid_size_cell_vkb_ParamLimits

0x7a7e,	// (0x00046e36) aid_size_cell_vkb

0x7f2b,	// (0x000472e3) cell_vkb_candidate_pane

0x2796,	// (0x00041b4e) bg_popup_fep_shadow_pane_g1

0xe252,	// (0x0004d60a) fep_vkb_bottom_pane_ParamLimits

0xe252,	// (0x0004d60a) fep_vkb_bottom_pane

0x7b42,	// (0x00046efa) fep_vkb_candidate_pane_ParamLimits

0x7b42,	// (0x00046efa) fep_vkb_candidate_pane

0xe277,	// (0x0004d62f) fep_vkb_keypad_pane_ParamLimits

0xe277,	// (0x0004d62f) fep_vkb_keypad_pane

0xe2b3,	// (0x0004d66b) fep_vkb_side_pane_ParamLimits

0xe2b3,	// (0x0004d66b) fep_vkb_side_pane

0xe2ef,	// (0x0004d6a7) fep_vkb_top_pane_ParamLimits

0xe2ef,	// (0x0004d6a7) fep_vkb_top_pane

0x7c1c,	// (0x00046fd4) fep_vkb_top_pane_g1_ParamLimits

0x7c1c,	// (0x00046fd4) fep_vkb_top_pane_g1

0x7c2b,	// (0x00046fe3) fep_vkb_top_pane_g2_ParamLimits

0x7c2b,	// (0x00046fe3) fep_vkb_top_pane_g2

0x7c3a,	// (0x00046ff2) fep_vkb_top_pane_g3_ParamLimits

0x7c3a,	// (0x00046ff2) fep_vkb_top_pane_g3

0x0003,

0xfb17,	// (0x0004eecf) fep_vkb_top_pane_g_ParamLimits

0xfb17,	// (0x0004eecf) fep_vkb_top_pane_g

0x7c58,	// (0x00047010) fep_vkb_top_text_pane_ParamLimits

0x7c58,	// (0x00047010) fep_vkb_top_text_pane

0xe32b,	// (0x0004d6e3) fep_vkb_side_pane_g1_ParamLimits

0xe32b,	// (0x0004d6e3) fep_vkb_side_pane_g1

0x7cb2,	// (0x0004706a) grid_vkb_side_pane_ParamLimits

0x7cb2,	// (0x0004706a) grid_vkb_side_pane

0x279e,	// (0x00041b56) bg_popup_fep_shadow_pane_g2

0x27a7,	// (0x00041b5f) bg_popup_fep_shadow_pane_g3

0x27af,	// (0x00041b67) bg_popup_fep_shadow_pane_g4

0x27b8,	// (0x00041b70) bg_popup_fep_shadow_pane_g5

0x27c2,	// (0x00041b7a) bg_popup_fep_shadow_pane_g6

0x27ca,	// (0x00041b82) bg_popup_fep_shadow_pane_g7

0x3fbc,	// (0x00043374) bg_popup_fep_shadow_pane_g8

0x7d09,	// (0x000470c1) grid_vkb_keypad_number_pane_ParamLimits

0x7d09,	// (0x000470c1) grid_vkb_keypad_number_pane

0x7d19,	// (0x000470d1) grid_vkb_keypad_pane_ParamLimits

0x7d19,	// (0x000470d1) grid_vkb_keypad_pane

0x7d3f,	// (0x000470f7) fep_vkb_bottom_pane_g1_ParamLimits

0x7d3f,	// (0x000470f7) fep_vkb_bottom_pane_g1

0x7d68,	// (0x00047120) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7d68,	// (0x00047120) grid_vkb_keypad_bottom_left_pane

0x7d7d,	// (0x00047135) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7d7d,	// (0x00047135) grid_vkb_keypad_bottom_right_pane

0x7d92,	// (0x0004714a) fep_vkb_top_text_pane_g1

0xe372,	// (0x0004d72a) fep_vkb_top_text_pane_t1

0xe384,	// (0x0004d73c) cell_vkb_side_pane_ParamLimits

0xe384,	// (0x0004d73c) cell_vkb_side_pane

0x79cc,	// (0x00046d84) cell_vkb_side_pane_g1

0x7e01,	// (0x000471b9) cell_vkb_keypad_pane_ParamLimits

0x7e01,	// (0x000471b9) cell_vkb_keypad_pane

0x7e76,	// (0x0004722e) cell_vkb_keypad_pane_g1

0x0008,

0xfb44,	// (0x0004eefc) bg_popup_fep_shadow_pane_g

0x79cc,	// (0x00046d84) cell_hwr_side_pane_g1

0x79cc,	// (0x00046d84) cell_hwr_side_pane_g2

0x7e80,	// (0x00047238) cell_vkb_keypad_pane_t1

0xe39a,	// (0x0004d752) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe39a,	// (0x0004d752) cell_vkb_keypad_bottom_left_pane

0xe3af,	// (0x0004d767) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe3af,	// (0x0004d767) cell_vkb_keypad_bottom_right_pane

0x79cc,	// (0x00046d84) cell_vkb_keypad_bottom_left_pane_g1

0x79cc,	// (0x00046d84) cell_vkb_keypad_bottom_right_pane_g1

0x7ee4,	// (0x0004729c) cell_vkb_keypad_number_pane_ParamLimits

0x7ee4,	// (0x0004729c) cell_vkb_keypad_number_pane

0x7f03,	// (0x000472bb) cell_vkb_keypad_number_pane_g1

0x7f19,	// (0x000472d1) cell_vkb_keypad_number_pane_g2

0x7f22,	// (0x000472da) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb36,	// (0x0004eeee) cell_vkb_keypad_number_pane_g

0x7e80,	// (0x00047238) cell_vkb_keypad_number_pane_t1

0x7f46,	// (0x000472fe) fep_vkb_candidate_pane_g1

0x0001,

0xfb31,	// (0x0004eee9) cell_hwr_side_pane_g

0x7f5f,	// (0x00047317) cell_hwr_side_pane_t1

0x27dc,	// (0x00041b94) cell_hwr_side_pane_t1_copy1

0x7c4a,	// (0x00047002) cell_hwr_candidate_pane_g1

0x27ea,	// (0x00041ba2) cell_hwr_candidate_pane_t1

0x79cc,	// (0x00046d84) cell_vkb_candidate_pane_g2

0x7fe5,	// (0x0004739d) cell_vkb_candidate_pane_t1

0x25aa,	// (0x00041962) bg_popup_fep_shadow_pane_ParamLimits

0x25aa,	// (0x00041962) bg_popup_fep_shadow_pane

0xe218,	// (0x0004d5d0) bg_fep_hwr_top_pane_g4

0x7a4c,	// (0x00046e04) bg_hwr_side_pane_g1_ParamLimits

0x7a4c,	// (0x00046e04) bg_hwr_side_pane_g1

0xc9ea,	// (0x0004bda2) cell_hwr_side_pane_ParamLimits

0xc9ea,	// (0x0004bda2) cell_hwr_side_pane

0x26fd,	// (0x00041ab5) fep_hwr_write_pane_g1_ParamLimits

0x26fd,	// (0x00041ab5) fep_hwr_write_pane_g1

0x270a,	// (0x00041ac2) fep_hwr_write_pane_g2_ParamLimits

0x270a,	// (0x00041ac2) fep_hwr_write_pane_g2

0x2717,	// (0x00041acf) fep_hwr_write_pane_g3_ParamLimits

0x2717,	// (0x00041acf) fep_hwr_write_pane_g3

0xca0a,	// (0x0004bdc2) fep_hwr_write_pane_g4_ParamLimits

0xca0a,	// (0x0004bdc2) fep_hwr_write_pane_g4

0x0005,

0xfb03,	// (0x0004eebb) fep_hwr_write_pane_g_ParamLimits

0xfb03,	// (0x0004eebb) fep_hwr_write_pane_g

0xe218,	// (0x0004d5d0) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xe218,	// (0x0004d5d0) bg_fep_hwr_candidate_pane_g2

0x273a,	// (0x00041af2) cell_hwr_candidate_pane_ParamLimits

0x273a,	// (0x00041af2) cell_hwr_candidate_pane

0x277c,	// (0x00041b34) fep_hwr_candidate_pane_g1_ParamLimits

0x7aac,	// (0x00046e64) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7aac,	// (0x00046e64) bg_popup_fep_shadow_pane_cp2

0x7c4a,	// (0x00047002) fep_vkb_top_pane_g4_ParamLimits

0x7c4a,	// (0x00047002) fep_vkb_top_pane_g4

0x7c90,	// (0x00047048) fep_vkb_side_pane_g2_ParamLimits

0x7c90,	// (0x00047048) fep_vkb_side_pane_g2

0xba34,	// (0x0004adec) list_setting_pane_t4_ParamLimits

0xba34,	// (0x0004adec) list_setting_pane_t4

0xbace,	// (0x0004ae86) list_setting_number_pane_t5_ParamLimits

0xbace,	// (0x0004ae86) list_setting_number_pane_t5

0x45fd,	// (0x000439b5) list_double_heading_pane_cp2_ParamLimits

0x45fd,	// (0x000439b5) list_double_heading_pane_cp2

0x3eeb,	// (0x000432a3) list_double_heading_pane_g1_cp2_ParamLimits

0x3eeb,	// (0x000432a3) list_double_heading_pane_g1_cp2

0x3f5e,	// (0x00043316) list_double_heading_pane_g2_cp2_ParamLimits

0x3f5e,	// (0x00043316) list_double_heading_pane_g2_cp2

0x7ff3,	// (0x000473ab) list_double_heading_pane_t1_cp2_ParamLimits

0x7ff3,	// (0x000473ab) list_double_heading_pane_t1_cp2

0x8009,	// (0x000473c1) list_double_heading_pane_t2_cp2_ParamLimits

0x8009,	// (0x000473c1) list_double_heading_pane_t2_cp2

0x35a3,	// (0x0004295b) aid_value_unit2

0x1220,	// (0x000405d8) popup_preview_fixed_window

0x3938,	// (0x00042cf0) bg_popup_preview_window_pane_cp02

0x801b,	// (0x000473d3) list_preview_fixed_pane

0x8061,	// (0x00047419) list_empty_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_empty_pane_fp

0x8061,	// (0x00047419) list_single_cale_day_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_cale_day_pane_fp

0x8061,	// (0x00047419) list_single_graphic_heading_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_graphic_heading_pane_fp

0x8061,	// (0x00047419) list_single_graphic_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_graphic_pane_fp

0x8061,	// (0x00047419) list_single_heading_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_heading_pane_fp

0x8061,	// (0x00047419) list_single_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_pane_fp

0x8076,	// (0x0004742e) list_single_pane_fp_g1_ParamLimits

0x8076,	// (0x0004742e) list_single_pane_fp_g1

0x3eeb,	// (0x000432a3) list_single_pane_fp_g2_ParamLimits

0x3eeb,	// (0x000432a3) list_single_pane_fp_g2

0x3f5e,	// (0x00043316) list_single_pane_fp_g3_ParamLimits

0x3f5e,	// (0x00043316) list_single_pane_fp_g3

0x8082,	// (0x0004743a) list_single_pane_fp_g4_ParamLimits

0x8082,	// (0x0004743a) list_single_pane_fp_g4

0x0003,

0xfb65,	// (0x0004ef1d) list_single_pane_fp_g_ParamLimits

0xfb65,	// (0x0004ef1d) list_single_pane_fp_g

0x0cb3,	// (0x0004006b) list_single_pane_fp_t1_ParamLimits

0x0cb3,	// (0x0004006b) list_single_pane_fp_t1

0x0cca,	// (0x00040082) list_single_graphic_pane_fp_g1_ParamLimits

0x0cca,	// (0x00040082) list_single_graphic_pane_fp_g1

0x8076,	// (0x0004742e) list_single_graphic_pane_fp_g2_ParamLimits

0x8076,	// (0x0004742e) list_single_graphic_pane_fp_g2

0x3eeb,	// (0x000432a3) list_single_graphic_pane_fp_g3_ParamLimits

0x3eeb,	// (0x000432a3) list_single_graphic_pane_fp_g3

0x3f5e,	// (0x00043316) list_single_graphic_pane_fp_g4_ParamLimits

0x3f5e,	// (0x00043316) list_single_graphic_pane_fp_g4

0x8082,	// (0x0004743a) list_single_graphic_pane_fp_g5_ParamLimits

0x8082,	// (0x0004743a) list_single_graphic_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004ef26) list_single_graphic_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004ef26) list_single_graphic_pane_fp_g

0x0cd6,	// (0x0004008e) list_single_graphic_pane_fp_t1_ParamLimits

0x0cd6,	// (0x0004008e) list_single_graphic_pane_fp_t1

0x0cca,	// (0x00040082) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0cca,	// (0x00040082) list_single_graphic_heading_pane_fp_g1

0x8076,	// (0x0004742e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8076,	// (0x0004742e) list_single_graphic_heading_pane_fp_g2

0x3eeb,	// (0x000432a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3eeb,	// (0x000432a3) list_single_graphic_heading_pane_fp_g3

0x3f5e,	// (0x00043316) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3f5e,	// (0x00043316) list_single_graphic_heading_pane_fp_g4

0x8082,	// (0x0004743a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8082,	// (0x0004743a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004ef26) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004ef26) list_single_graphic_heading_pane_fp_g

0x0cec,	// (0x000400a4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0cec,	// (0x000400a4) list_single_graphic_heading_pane_fp_t1

0x0d02,	// (0x000400ba) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x0d02,	// (0x000400ba) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb79,	// (0x0004ef31) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb79,	// (0x0004ef31) list_single_graphic_heading_pane_fp_t

0x0d14,	// (0x000400cc) list_single_cale_day_pane_fp_g1_ParamLimits

0x0d14,	// (0x000400cc) list_single_cale_day_pane_fp_g1

0x808e,	// (0x00047446) list_single_cale_day_pane_fp_g2_ParamLimits

0x808e,	// (0x00047446) list_single_cale_day_pane_fp_g2

0x2808,	// (0x00041bc0) list_single_cale_day_pane_fp_g3_ParamLimits

0x2808,	// (0x00041bc0) list_single_cale_day_pane_fp_g3

0x2830,	// (0x00041be8) list_single_cale_day_pane_fp_g4_ParamLimits

0x2830,	// (0x00041be8) list_single_cale_day_pane_fp_g4

0x2854,	// (0x00041c0c) list_single_cale_day_pane_fp_g5_ParamLimits

0x2854,	// (0x00041c0c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7e,	// (0x0004ef36) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7e,	// (0x0004ef36) list_single_cale_day_pane_fp_g

0x0d4c,	// (0x00040104) list_single_cale_day_pane_fp_t1_ParamLimits

0x0d4c,	// (0x00040104) list_single_cale_day_pane_fp_t1

0x0d72,	// (0x0004012a) list_single_cale_day_pane_fp_t2_ParamLimits

0x0d72,	// (0x0004012a) list_single_cale_day_pane_fp_t2

0x0d8b,	// (0x00040143) list_single_cale_day_pane_fp_t3_ParamLimits

0x0d8b,	// (0x00040143) list_single_cale_day_pane_fp_t3

0x0002,

0xfb89,	// (0x0004ef41) list_single_cale_day_pane_fp_t_ParamLimits

0xfb89,	// (0x0004ef41) list_single_cale_day_pane_fp_t

0x8076,	// (0x0004742e) list_empty_pane_fp_g1_ParamLimits

0x8076,	// (0x0004742e) list_empty_pane_fp_g1

0x0da4,	// (0x0004015c) list_empty_pane_fp_t1

0x0db2,	// (0x0004016a) list_empty_pane_fp_t2

0x0001,

0xfb90,	// (0x0004ef48) list_empty_pane_fp_t

0x8076,	// (0x0004742e) list_single_heading_pane_fp_g1_ParamLimits

0x8076,	// (0x0004742e) list_single_heading_pane_fp_g1

0x3eeb,	// (0x000432a3) list_single_heading_pane_fp_g2_ParamLimits

0x3eeb,	// (0x000432a3) list_single_heading_pane_fp_g2

0x3f5e,	// (0x00043316) list_single_heading_pane_fp_g3_ParamLimits

0x3f5e,	// (0x00043316) list_single_heading_pane_fp_g3

0x0002,

0xfb95,	// (0x0004ef4d) list_single_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0004ef4d) list_single_heading_pane_fp_g

0x0dc0,	// (0x00040178) list_single_heading_pane_fp_t1_ParamLimits

0x0dc0,	// (0x00040178) list_single_heading_pane_fp_t1

0x0dd2,	// (0x0004018a) list_single_heading_pane_fp_t2_ParamLimits

0x0dd2,	// (0x0004018a) list_single_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0004ef54) list_single_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0004ef54) list_single_heading_pane_fp_t

0x4143,	// (0x000434fb) aid_size_cell_fast

0x38a8,	// (0x00042c60) soft_indicator_pane_cp1_t1

0x4180,	// (0x00043538) cell_app_pane_cp2_ParamLimits

0x4180,	// (0x00043538) cell_app_pane_cp2

0x25cc,	// (0x00041984) fep_hwr_candidate_drop_down_list_pane

0xe226,	// (0x0004d5de) fep_hwr_candidate_pane_g3_ParamLimits

0xe226,	// (0x0004d5de) fep_hwr_candidate_pane_g3

0xe233,	// (0x0004d5eb) fep_hwr_candidate_pane_g4_ParamLimits

0xe233,	// (0x0004d5eb) fep_hwr_candidate_pane_g4

0x0002,

0xfb10,	// (0x0004eec8) fep_hwr_candidate_pane_g_ParamLimits

0xfb10,	// (0x0004eec8) fep_hwr_candidate_pane_g

0x7b31,	// (0x00046ee9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7b31,	// (0x00046ee9) fep_vkb_candidate_drop_down_list_pane

0x7f4e,	// (0x00047306) fep_vkb_candidate_pane_g3

0x7f56,	// (0x0004730e) fep_vkb_candidate_pane_g4

0x0002,

0xfb3d,	// (0x0004eef5) fep_vkb_candidate_pane_g

0x7c4a,	// (0x00047002) cell_hwr_candidate_pane_g1_ParamLimits

0x7f6d,	// (0x00047325) cell_hwr_candidate_pane_g3_ParamLimits

0x7f6d,	// (0x00047325) cell_hwr_candidate_pane_g3

0x7f8e,	// (0x00047346) cell_hwr_candidate_pane_g4_ParamLimits

0x7f8e,	// (0x00047346) cell_hwr_candidate_pane_g4

0x0002,

0xfb57,	// (0x0004ef0f) cell_hwr_candidate_pane_g_ParamLimits

0xfb57,	// (0x0004ef0f) cell_hwr_candidate_pane_g

0x7faf,	// (0x00047367) cell_vkb_candidate_pane_g3_ParamLimits

0x7faf,	// (0x00047367) cell_vkb_candidate_pane_g3

0x7fca,	// (0x00047382) cell_vkb_candidate_pane_g4_ParamLimits

0x7fca,	// (0x00047382) cell_vkb_candidate_pane_g4

0x809a,	// (0x00047452) cell_app_pane_cp2_g1_ParamLimits

0x809a,	// (0x00047452) cell_app_pane_cp2_g1

0x80b8,	// (0x00047470) cell_app_pane_cp2_g2_ParamLimits

0x80b8,	// (0x00047470) cell_app_pane_cp2_g2

0x0001,

0xfba1,	// (0x0004ef59) cell_app_pane_cp2_g_ParamLimits

0xfba1,	// (0x0004ef59) cell_app_pane_cp2_g

0x80c4,	// (0x0004747c) cell_app_pane_cp2_t1_ParamLimits

0x80c4,	// (0x0004747c) cell_app_pane_cp2_t1

0x3f50,	// (0x00043308) grid_highlight_pane_cp1_ParamLimits

0x3f50,	// (0x00043308) grid_highlight_pane_cp1

0x2878,	// (0x00041c30) cell_hwr_candidate_pane_cp1_ParamLimits

0x2878,	// (0x00041c30) cell_hwr_candidate_pane_cp1

0x7c4a,	// (0x00047002) fep_hwr_candidate_drop_down_list_pane_g1

0x80d6,	// (0x0004748e) fep_hwr_candidate_drop_down_list_pane_g2

0x80e3,	// (0x0004749b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004ef5e) fep_hwr_candidate_drop_down_list_pane_g

0x2897,	// (0x00041c4f) fep_hwr_candidate_drop_down_list_scroll_pane

0x28a0,	// (0x00041c58) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x28a0,	// (0x00041c58) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x28ad,	// (0x00041c65) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x28ad,	// (0x00041c65) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x28ba,	// (0x00041c72) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x28ba,	// (0x00041c72) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7faf,	// (0x00047367) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7faf,	// (0x00047367) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7fca,	// (0x00047382) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7fca,	// (0x00047382) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x28c7,	// (0x00041c7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x28c7,	// (0x00041c7f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x28e2,	// (0x00041c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x28e2,	// (0x00041c9a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x28fd,	// (0x00041cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x28fd,	// (0x00041cb5) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbad,	// (0x0004ef65) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbad,	// (0x0004ef65) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x80f0,	// (0x000474a8) cell_vkb_candidate_pane_cp1_ParamLimits

0x80f0,	// (0x000474a8) cell_vkb_candidate_pane_cp1

0x7c4a,	// (0x00047002) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7c4a,	// (0x00047002) fep_vkb_candidate_drop_down_list_pane_g1

0x80d6,	// (0x0004748e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x80d6,	// (0x0004748e) fep_vkb_candidate_drop_down_list_pane_g2

0x80e3,	// (0x0004749b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x80e3,	// (0x0004749b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba6,	// (0x0004ef5e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba6,	// (0x0004ef5e) fep_vkb_candidate_drop_down_list_pane_g

0x8110,	// (0x000474c8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8110,	// (0x000474c8) fep_vkb_candidate_drop_down_list_scroll_pane

0x811d,	// (0x000474d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x811d,	// (0x000474d5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x812a,	// (0x000474e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x812a,	// (0x000474e2) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8136,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8136,	// (0x000474ee) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f6d,	// (0x00047325) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f6d,	// (0x00047325) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f8e,	// (0x00047346) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f8e,	// (0x00047346) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8142,	// (0x000474fa) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8142,	// (0x000474fa) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8163,	// (0x0004751b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8163,	// (0x0004751b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8184,	// (0x0004753c) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8184,	// (0x0004753c) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0004ef76) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0004ef76) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd088,	// (0x0004c440) title_pane_g1_ParamLimits

0xd09b,	// (0x0004c453) title_pane_g2_ParamLimits

0xf54e,	// (0x0004e906) title_pane_g_ParamLimits

0x45b6,	// (0x0004396e) aid_call2_pane

0x45be,	// (0x00043976) aid_call_pane

0x45c6,	// (0x0004397e) popup_clock_analogue_window_g1

0x45c6,	// (0x0004397e) popup_clock_analogue_window_g2

0x163d,	// (0x000409f5) popup_clock_analogue_window_g3

0x1646,	// (0x000409fe) popup_clock_analogue_window_g4

0x35c5,	// (0x0004297d) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0004eab5) popup_clock_analogue_window_g

0x164e,	// (0x00040a06) popup_clock_analogue_window_t1

0x165c,	// (0x00040a14) clock_digital_number_pane_ParamLimits

0x165c,	// (0x00040a14) clock_digital_number_pane

0x1668,	// (0x00040a20) clock_digital_number_pane_cp02_ParamLimits

0x1668,	// (0x00040a20) clock_digital_number_pane_cp02

0x1674,	// (0x00040a2c) clock_digital_number_pane_cp03_ParamLimits

0x1674,	// (0x00040a2c) clock_digital_number_pane_cp03

0x1680,	// (0x00040a38) clock_digital_number_pane_cp04_ParamLimits

0x1680,	// (0x00040a38) clock_digital_number_pane_cp04

0x168c,	// (0x00040a44) clock_digital_separator_pane_ParamLimits

0x168c,	// (0x00040a44) clock_digital_separator_pane

0x1698,	// (0x00040a50) popup_clock_digital_window_t1_ParamLimits

0x1698,	// (0x00040a50) popup_clock_digital_window_t1

0x35c5,	// (0x0004297d) clock_digital_number_pane_g1

0x35c5,	// (0x0004297d) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0004eac0) clock_digital_number_pane_g

0x35c5,	// (0x0004297d) clock_digital_separator_pane_g1

0x35c5,	// (0x0004297d) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0004eac0) clock_digital_separator_pane_g

0xd72f,	// (0x0004cae7) aid_fill_nsta_ParamLimits

0xd865,	// (0x0004cc1d) indicator_nsta_pane_ParamLimits

0x51f8,	// (0x000445b0) popup_clock_analogue_window

0x51f8,	// (0x000445b0) popup_clock_digital_window

0x4104,	// (0x000434bc) grid_indicator_nsta_pane_ParamLimits

0x73e4,	// (0x0004679c) clock_nsta_pane_t2

0x0001,

0xfa90,	// (0x0004ee48) clock_nsta_pane_t

0x1601,	// (0x000409b9) aid_size_max_handle

0xc0ec,	// (0x0004b4a4) aid_size_min_handle

0x4bd9,	// (0x00043f91) editor_scroll_pane

0x819f,	// (0x00047557) ex_editor_pane

0x40b1,	// (0x00043469) scroll_pane_cp13

0x3ee3,	// (0x0004329b) scroll_pane_cp14

0x45f5,	// (0x000439ad) scroll_pane_cp36

0xd512,	// (0x0004c8ca) list_single_graphic_hl_pane_cp2_ParamLimits

0xd512,	// (0x0004c8ca) list_single_graphic_hl_pane_cp2

0xc9b0,	// (0x0004bd68) list_single_graphic_hl_pane_ParamLimits

0xc9b0,	// (0x0004bd68) list_single_graphic_hl_pane

0x0de8,	// (0x000401a0) aid_size_min_hl_cp1

0x81a7,	// (0x0004755f) list_highlight_pane_cp34_ParamLimits

0x81a7,	// (0x0004755f) list_highlight_pane_cp34

0x81b8,	// (0x00047570) list_single_graphic_hl_pane_g1_ParamLimits

0x81b8,	// (0x00047570) list_single_graphic_hl_pane_g1

0xbd7c,	// (0x0004b134) list_single_graphic_hl_pane_g2_ParamLimits

0xbd7c,	// (0x0004b134) list_single_graphic_hl_pane_g2

0xbd7c,	// (0x0004b134) list_single_graphic_hl_pane_g3_ParamLimits

0xbd7c,	// (0x0004b134) list_single_graphic_hl_pane_g3

0x4b4a,	// (0x00043f02) list_single_graphic_hl_pane_g4_ParamLimits

0x4b4a,	// (0x00043f02) list_single_graphic_hl_pane_g4

0x2918,	// (0x00041cd0) list_single_graphic_hl_pane_g5_ParamLimits

0x2918,	// (0x00041cd0) list_single_graphic_hl_pane_g5

0x0004,

0xfbcf,	// (0x0004ef87) list_single_graphic_hl_pane_g_ParamLimits

0xfbcf,	// (0x0004ef87) list_single_graphic_hl_pane_g

0xbd88,	// (0x0004b140) list_single_graphic_hl_pane_t1_ParamLimits

0xbd88,	// (0x0004b140) list_single_graphic_hl_pane_t1

0x81c5,	// (0x0004757d) aid_size_min_hl_cp2

0x81ce,	// (0x00047586) list_highlight_pane_cp34_cp2_ParamLimits

0x81ce,	// (0x00047586) list_highlight_pane_cp34_cp2

0x81b8,	// (0x00047570) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x81b8,	// (0x00047570) list_single_graphic_hl_pane_g1_cp2

0x81db,	// (0x00047593) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x81db,	// (0x00047593) list_single_graphic_hl_pane_g2_cp2

0x81e7,	// (0x0004759f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x81e7,	// (0x0004759f) list_single_graphic_hl_pane_g3_cp2

0x7f0d,	// (0x000472c5) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7f0d,	// (0x000472c5) list_single_graphic_hl_pane_g4_cp2

0x81f5,	// (0x000475ad) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x81f5,	// (0x000475ad) list_single_graphic_hl_pane_g5_cp2

0xc159,	// (0x0004b511) control_pane_g4_ParamLimits

0xc159,	// (0x0004b511) control_pane_g4

0x4efd,	// (0x000442b5) bg_popup_sub_pane_cp10_ParamLimits

0x79d6,	// (0x00046d8e) list_choice_list_pane_ParamLimits

0x79e5,	// (0x00046d9d) scroll_pane_cp23

0x3938,	// (0x00042cf0) bg_popup_preview_window_pane_cp02_ParamLimits

0x801b,	// (0x000473d3) list_preview_fixed_pane_ParamLimits

0x8031,	// (0x000473e9) list_preview_fixed_pane_cp_ParamLimits

0x8031,	// (0x000473e9) list_preview_fixed_pane_cp

0x803d,	// (0x000473f5) popup_preview_fixed_window_g1_ParamLimits

0x803d,	// (0x000473f5) popup_preview_fixed_window_g1

0x8049,	// (0x00047401) popup_preview_fixed_window_g2_ParamLimits

0x8049,	// (0x00047401) popup_preview_fixed_window_g2

0x0002,

0xfb5e,	// (0x0004ef16) popup_preview_fixed_window_g_ParamLimits

0xfb5e,	// (0x0004ef16) popup_preview_fixed_window_g

0x1575,	// (0x0004092d) aid_navi_side_left_pane_ParamLimits

0x158a,	// (0x00040942) aid_navi_side_right_pane_ParamLimits

0x15a2,	// (0x0004095a) navi_icon_pane_stacon_ParamLimits

0x15b6,	// (0x0004096e) navi_navi_pane_stacon_ParamLimits

0x15a2,	// (0x0004095a) navi_text_pane_stacon_ParamLimits

0x35bb,	// (0x00042973) main_text_info_pane

0x821f,	// (0x000475d7) listscroll_text_info_pane

0x8227,	// (0x000475df) list_text_info_pane_ParamLimits

0x8227,	// (0x000475df) list_text_info_pane

0x8236,	// (0x000475ee) scroll_pane_cp24_ParamLimits

0x8236,	// (0x000475ee) scroll_pane_cp24

0xe3ca,	// (0x0004d782) list_text_info_pane_t1_ParamLimits

0xe3ca,	// (0x0004d782) list_text_info_pane_t1

0xc2ae,	// (0x0004b666) popup_fast_swap2_window_ParamLimits

0xc2ae,	// (0x0004b666) popup_fast_swap2_window

0x8285,	// (0x0004763d) aid_size_cell_fast2

0x35bb,	// (0x00042973) bg_popup_window_pane_cp17

0x588d,	// (0x00044c45) heading_pane_cp2

0x3bad,	// (0x00042f65) listscroll_fast2_pane

0x828f,	// (0x00047647) grid_fast2_pane

0x8299,	// (0x00047651) listscroll_fast2_pane_g1

0x82a1,	// (0x00047659) listscroll_fast2_pane_g2

0x0001,

0xfbda,	// (0x0004ef92) listscroll_fast2_pane_g

0x40b1,	// (0x00043469) scroll_pane_cp26

0x82ab,	// (0x00047663) cell_fast2_pane_ParamLimits

0x82ab,	// (0x00047663) cell_fast2_pane

0x82c0,	// (0x00047678) cell_fast2_pane_g1

0x82c9,	// (0x00047681) cell_fast2_pane_g2

0x82d2,	// (0x0004768a) cell_fast2_pane_g3

0x0002,

0xfbdf,	// (0x0004ef97) cell_fast2_pane_g

0x3ca0,	// (0x00043058) grid_highlight_pane_cp9

0x3cb5,	// (0x0004306d) main_eswt_pane_ParamLimits

0x3cb5,	// (0x0004306d) main_eswt_pane

0x824b,	// (0x00047603) list_single_text_info_pane

0x82da,	// (0x00047692) eswt_ctrl_button_pane

0x82da,	// (0x00047692) eswt_ctrl_canvas_pane

0x82e2,	// (0x0004769a) eswt_ctrl_combo_pane

0x82da,	// (0x00047692) eswt_ctrl_default_pane

0x82da,	// (0x00047692) eswt_ctrl_label_pane

0x82ea,	// (0x000476a2) eswt_ctrl_wait_pane

0x82f2,	// (0x000476aa) eswt_shell_pane

0x35bb,	// (0x00042973) listscroll_eswt_app_pane

0x8312,	// (0x000476ca) popup_eswt_tasktip_window_ParamLimits

0x8312,	// (0x000476ca) popup_eswt_tasktip_window

0x5495,	// (0x0004484d) bg_popup_window_pane_cp18

0x8323,	// (0x000476db) eswt_control_pane_g1_ParamLimits

0x8323,	// (0x000476db) eswt_control_pane_g1

0x8330,	// (0x000476e8) eswt_control_pane_g2_ParamLimits

0x8330,	// (0x000476e8) eswt_control_pane_g2

0x833d,	// (0x000476f5) eswt_control_pane_g3_ParamLimits

0x833d,	// (0x000476f5) eswt_control_pane_g3

0x834a,	// (0x00047702) eswt_control_pane_g4_ParamLimits

0x834a,	// (0x00047702) eswt_control_pane_g4

0x0003,

0xfbe6,	// (0x0004ef9e) eswt_control_pane_g_ParamLimits

0xfbe6,	// (0x0004ef9e) eswt_control_pane_g

0x3f50,	// (0x00043308) bg_button_pane_ParamLimits

0x3f50,	// (0x00043308) bg_button_pane

0x3cb5,	// (0x0004306d) common_borders_pane_copy2_ParamLimits

0x3cb5,	// (0x0004306d) common_borders_pane_copy2

0x8357,	// (0x0004770f) control_button_pane_g1_ParamLimits

0x8357,	// (0x0004770f) control_button_pane_g1

0x8363,	// (0x0004771b) control_button_pane_g2_ParamLimits

0x8363,	// (0x0004771b) control_button_pane_g2

0x836f,	// (0x00047727) control_button_pane_g3_ParamLimits

0x836f,	// (0x00047727) control_button_pane_g3

0x0002,

0xfbef,	// (0x0004efa7) control_button_pane_g_ParamLimits

0xfbef,	// (0x0004efa7) control_button_pane_g

0x8383,	// (0x0004773b) control_button_pane_t1

0x8391,	// (0x00047749) control_button_pane_t2

0x0001,

0xfbf6,	// (0x0004efae) control_button_pane_t

0x5421,	// (0x000447d9) bg_button_pane_g1

0x5429,	// (0x000447e1) bg_button_pane_g2

0x5431,	// (0x000447e9) bg_button_pane_g3

0x5439,	// (0x000447f1) bg_button_pane_g4

0x5441,	// (0x000447f9) bg_button_pane_g5

0x5449,	// (0x00044801) bg_button_pane_g6

0x5451,	// (0x00044809) bg_button_pane_g7

0x5459,	// (0x00044811) bg_button_pane_g8

0x5461,	// (0x00044819) bg_button_pane_g9

0x0008,

0xf866,	// (0x0004ec1e) bg_button_pane_g

0x7991,	// (0x00046d49) common_borders_pane_ParamLimits

0x7991,	// (0x00046d49) common_borders_pane

0x8323,	// (0x000476db) eswt_control_pane_g1_copy1_ParamLimits

0x8323,	// (0x000476db) eswt_control_pane_g1_copy1

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy1_ParamLimits

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy1

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy1_ParamLimits

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy1

0x834a,	// (0x00047702) eswt_control_pane_g4_copy1_ParamLimits

0x834a,	// (0x00047702) eswt_control_pane_g4_copy1

0x79cc,	// (0x00046d84) bg_eswt_ctrl_canvas_pane_g1

0x7991,	// (0x00046d49) common_borders_pane_cp2_ParamLimits

0x7991,	// (0x00046d49) common_borders_pane_cp2

0x7991,	// (0x00046d49) common_borders_pane_cp3_ParamLimits

0x7991,	// (0x00046d49) common_borders_pane_cp3

0x839f,	// (0x00047757) separator_horizontal_pane

0x83a7,	// (0x0004775f) separator_vertical_pane

0x8323,	// (0x000476db) eswt_control_pane_g1_copy2_ParamLimits

0x8323,	// (0x000476db) eswt_control_pane_g1_copy2

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy2_ParamLimits

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy2

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy2_ParamLimits

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy2

0x834a,	// (0x00047702) eswt_control_pane_g4_copy2_ParamLimits

0x834a,	// (0x00047702) eswt_control_pane_g4_copy2

0x35bb,	// (0x00042973) common_borders_pane_cp4

0x83b0,	// (0x00047768) separator_horizontal_pane_g1

0x83b9,	// (0x00047771) separator_horizontal_pane_g2

0x83c2,	// (0x0004777a) separator_horizontal_pane_g3

0x0002,

0xfbfb,	// (0x0004efb3) separator_horizontal_pane_g

0x8323,	// (0x000476db) eswt_control_pane_g1_copy3_ParamLimits

0x8323,	// (0x000476db) eswt_control_pane_g1_copy3

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy3_ParamLimits

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy3

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy3_ParamLimits

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy3

0x834a,	// (0x00047702) eswt_control_pane_g4_copy3_ParamLimits

0x834a,	// (0x00047702) eswt_control_pane_g4_copy3

0x35bb,	// (0x00042973) common_borders_pane_cp5

0x83cb,	// (0x00047783) separator_vertical_pane_g1

0x83d4,	// (0x0004778c) separator_vertical_pane_g2

0x83dd,	// (0x00047795) separator_vertical_pane_g3

0x0002,

0xfc02,	// (0x0004efba) separator_vertical_pane_g

0x8323,	// (0x000476db) eswt_control_pane_g1_copy4_ParamLimits

0x8323,	// (0x000476db) eswt_control_pane_g1_copy4

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy4_ParamLimits

0x8330,	// (0x000476e8) eswt_control_pane_g2_copy4

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy4_ParamLimits

0x833d,	// (0x000476f5) eswt_control_pane_g3_copy4

0x834a,	// (0x00047702) eswt_control_pane_g4_copy4_ParamLimits

0x834a,	// (0x00047702) eswt_control_pane_g4_copy4

0xe3e5,	// (0x0004d79d) eswt_ctrl_combo_button_pane

0xe3ed,	// (0x0004d7a5) eswt_ctrl_input_pane

0xe3f5,	// (0x0004d7ad) popup_choice_list_window_cp70

0xe3fd,	// (0x0004d7b5) eswt_ctrl_input_pane_t1

0x35bb,	// (0x00042973) input_focus_pane_cp70

0x7991,	// (0x00046d49) bg_button_pane_cp70_ParamLimits

0x7991,	// (0x00046d49) bg_button_pane_cp70

0xe40b,	// (0x0004d7c3) eswt_ctrl_combo_button_pane_g1

0x8414,	// (0x000477cc) wait_bar_pane_cp70

0x5495,	// (0x0004484d) bg_popup_window_pane_cp70_ParamLimits

0x5495,	// (0x0004484d) bg_popup_window_pane_cp70

0x841c,	// (0x000477d4) popup_eswt_tasktip_window_t1

0x8432,	// (0x000477ea) wait_bar_pane_cp71_ParamLimits

0x8432,	// (0x000477ea) wait_bar_pane_cp71

0x843e,	// (0x000477f6) grid_eswt_app_pane

0x43d8,	// (0x00043790) scroll_pane_cp70

0xe413,	// (0x0004d7cb) cell_eswt_app_pane_ParamLimits

0xe413,	// (0x0004d7cb) cell_eswt_app_pane

0xe43d,	// (0x0004d7f5) cell_eswt_app_pane_g1_ParamLimits

0xe43d,	// (0x0004d7f5) cell_eswt_app_pane_g1

0xe46c,	// (0x0004d824) cell_eswt_app_pane_g2_ParamLimits

0xe46c,	// (0x0004d824) cell_eswt_app_pane_g2

0x0001,

0xfc09,	// (0x0004efc1) cell_eswt_app_pane_g_ParamLimits

0xfc09,	// (0x0004efc1) cell_eswt_app_pane_g

0xe495,	// (0x0004d84d) cell_eswt_app_pane_t1_ParamLimits

0xe495,	// (0x0004d84d) cell_eswt_app_pane_t1

0x8501,	// (0x000478b9) grid_highlight_pane_cp70_ParamLimits

0x8501,	// (0x000478b9) grid_highlight_pane_cp70

0x4aae,	// (0x00043e66) set_content_pane_g1

0xd6e4,	// (0x0004ca9c) status_small_volume_pane

0x292c,	// (0x00041ce4) status_small_volume_pane_g1

0x2934,	// (0x00041cec) volume_small2_pane

0x293d,	// (0x00041cf5) volume_small2_pane_g1

0x2946,	// (0x00041cfe) volume_small2_pane_g2

0x294f,	// (0x00041d07) volume_small2_pane_g3

0x2958,	// (0x00041d10) volume_small2_pane_g4

0x2961,	// (0x00041d19) volume_small2_pane_g5

0x296a,	// (0x00041d22) volume_small2_pane_g6

0x2973,	// (0x00041d2b) volume_small2_pane_g7

0x297c,	// (0x00041d34) volume_small2_pane_g8

0x2985,	// (0x00041d3d) volume_small2_pane_g9

0x298e,	// (0x00041d46) volume_small2_pane_g10

0x0009,

0xfc0e,	// (0x0004efc6) volume_small2_pane_g

0x7d92,	// (0x0004714a) fep_vkb_top_text_pane_g1_ParamLimits

0xe372,	// (0x0004d72a) fep_vkb_top_text_pane_t1_ParamLimits

0x8055,	// (0x0004740d) popup_preview_fixed_window_g3_ParamLimits

0x8055,	// (0x0004740d) popup_preview_fixed_window_g3

0xc8d1,	// (0x0004bc89) popup_toolbar_trans_pane

0xdd60,	// (0x0004d118) aid_height_set_list_ParamLimits

0x6803,	// (0x00045bbb) aid_size_parent_ParamLimits

0x4efd,	// (0x000442b5) list_highlight_pane_cp2_ParamLimits

0x4aae,	// (0x00043e66) set_content_pane_g1_ParamLimits

0xc9c1,	// (0x0004bd79) list_single_image_pane_ParamLimits

0xc9c1,	// (0x0004bd79) list_single_image_pane

0xe4c7,	// (0x0004d87f) aid_size_cell_image_ParamLimits

0xe4c7,	// (0x0004d87f) aid_size_cell_image

0xe4d4,	// (0x0004d88c) grid_single_image_pane_ParamLimits

0xe4d4,	// (0x0004d88c) grid_single_image_pane

0x559e,	// (0x00044956) list_single_image_pane_g1_ParamLimits

0x559e,	// (0x00044956) list_single_image_pane_g1

0x8526,	// (0x000478de) list_single_image_pane_g2_ParamLimits

0x8526,	// (0x000478de) list_single_image_pane_g2

0x0001,

0xfc23,	// (0x0004efdb) list_single_image_pane_g_ParamLimits

0xfc23,	// (0x0004efdb) list_single_image_pane_g

0x853a,	// (0x000478f2) list_single_image_pane_t1_ParamLimits

0x853a,	// (0x000478f2) list_single_image_pane_t1

0xe4e2,	// (0x0004d89a) cell_image_list_pane_ParamLimits

0xe4e2,	// (0x0004d89a) cell_image_list_pane

0xe4f8,	// (0x0004d8b0) cell_image_list_pane_g1

0xe501,	// (0x0004d8b9) cell_image_list_pane_g2

0x0001,

0xfc28,	// (0x0004efe0) cell_image_list_pane_g

0x8576,	// (0x0004792e) aid_size_cell_tb_trans_pane

0x3f50,	// (0x00043308) bg_tb_trans_pane

0x8588,	// (0x00047940) grid_tb_trans_pane

0x5421,	// (0x000447d9) bg_tb_trans_pane_g1

0x5429,	// (0x000447e1) bg_tb_trans_pane_g2

0x5431,	// (0x000447e9) bg_tb_trans_pane_g3

0x5439,	// (0x000447f1) bg_tb_trans_pane_g4

0x5441,	// (0x000447f9) bg_tb_trans_pane_g5

0x5459,	// (0x00044811) bg_tb_trans_pane_g6

0x5461,	// (0x00044819) bg_tb_trans_pane_g7

0x5449,	// (0x00044801) bg_tb_trans_pane_g8

0x5451,	// (0x00044809) bg_tb_trans_pane_g9

0x0008,

0xfc2d,	// (0x0004efe5) bg_tb_trans_pane_g

0x859c,	// (0x00047954) cell_toolbar_trans_pane_ParamLimits

0x859c,	// (0x00047954) cell_toolbar_trans_pane

0x79cc,	// (0x00046d84) cell_toolbar_trans_pane_g1

0xe135,	// (0x0004d4ed) list_form2_midp_pane_t1

0xe143,	// (0x0004d4fb) list_form2_midp_pane_t2

0x0001,

0xfad6,	// (0x0004ee8e) list_form2_midp_pane_t

0x75bd,	// (0x00046975) scroll_pane_cp51_ParamLimits

0x7779,	// (0x00046b31) form2_midp_wait_pane_g1

0x7782,	// (0x00046b3a) form2_midp_wait_pane_g2

0x778b,	// (0x00046b43) form2_midp_wait_pane_g3

0x0002,

0xfaeb,	// (0x0004eea3) form2_midp_wait_pane_g

0x36af,	// (0x00042a67) list_highlight_pane_cp21_ParamLimits

0x77d7,	// (0x00046b8f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x77e6,	// (0x00046b9e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x69bb,	// (0x00045d73) list_single_2graphic_im_pane_ParamLimits

0x69bb,	// (0x00045d73) list_single_2graphic_im_pane

0xe50a,	// (0x0004d8c2) list_single_2graphic_im_pane_g1_ParamLimits

0xe50a,	// (0x0004d8c2) list_single_2graphic_im_pane_g1

0xe51b,	// (0x0004d8d3) list_single_2graphic_im_pane_g2_ParamLimits

0xe51b,	// (0x0004d8d3) list_single_2graphic_im_pane_g2

0xe527,	// (0x0004d8df) list_single_2graphic_im_pane_g3_ParamLimits

0xe527,	// (0x0004d8df) list_single_2graphic_im_pane_g3

0x0003,

0xfc40,	// (0x0004eff8) list_single_2graphic_im_pane_g_ParamLimits

0xfc40,	// (0x0004eff8) list_single_2graphic_im_pane_g

0xe53b,	// (0x0004d8f3) list_single_2graphic_im_pane_t1_ParamLimits

0xe53b,	// (0x0004d8f3) list_single_2graphic_im_pane_t1

0x8061,	// (0x00047419) list_single_graphic_2heading_pane_fp_ParamLimits

0x8061,	// (0x00047419) list_single_graphic_2heading_pane_fp

0x0cca,	// (0x00040082) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0cca,	// (0x00040082) list_single_graphic_2heading_pane_fp_g1

0x8076,	// (0x0004742e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8076,	// (0x0004742e) list_single_graphic_2heading_pane_fp_g2

0x3eeb,	// (0x000432a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3eeb,	// (0x000432a3) list_single_graphic_2heading_pane_fp_g3

0x3f5e,	// (0x00043316) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3f5e,	// (0x00043316) list_single_graphic_2heading_pane_fp_g4

0x8082,	// (0x0004743a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8082,	// (0x0004743a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6e,	// (0x0004ef26) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6e,	// (0x0004ef26) list_single_graphic_2heading_pane_fp_g

0x0e13,	// (0x000401cb) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0e13,	// (0x000401cb) list_single_graphic_2heading_pane_fp_t1

0x0d02,	// (0x000400ba) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x0d02,	// (0x000400ba) list_single_graphic_2heading_pane_fp_t2

0x0e29,	// (0x000401e1) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0e29,	// (0x000401e1) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc49,	// (0x0004f001) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc49,	// (0x0004f001) list_single_graphic_2heading_pane_fp_t

0x7a58,	// (0x00046e10) fep_hwr_write_pane_g5_ParamLimits

0x7a58,	// (0x00046e10) fep_hwr_write_pane_g5

0x7a64,	// (0x00046e1c) fep_hwr_write_pane_g6_ParamLimits

0x7a64,	// (0x00046e1c) fep_hwr_write_pane_g6

0x82f2,	// (0x000476aa) eswt_shell_pane_ParamLimits

0x5495,	// (0x0004484d) bg_popup_window_pane_cp18_ParamLimits

0x674b,	// (0x00045b03) heading_pane_cp70

0x841c,	// (0x000477d4) popup_eswt_tasktip_window_t1_ParamLimits

0xd78a,	// (0x0004cb42) aid_touch_tab_arrow_left

0xd7a0,	// (0x0004cb58) aid_touch_tab_arrow_right

0xd0b3,	// (0x0004c46b) title_pane_g3_ParamLimits

0xd0b3,	// (0x0004c46b) title_pane_g3

0x3f0f,	// (0x000432c7) set_value_pane_g1

0xc8d1,	// (0x0004bc89) popup_toolbar_trans_pane_ParamLimits

0x8576,	// (0x0004792e) aid_size_cell_tb_trans_pane_ParamLimits

0x3f50,	// (0x00043308) bg_tb_trans_pane_ParamLimits

0x8588,	// (0x00047940) grid_tb_trans_pane_ParamLimits

0x3938,	// (0x00042cf0) cont_note_pane_ParamLimits

0x3938,	// (0x00042cf0) cont_note_pane

0x3cb5,	// (0x0004306d) cont_snote2_single_text_pane_ParamLimits

0x3cb5,	// (0x0004306d) cont_snote2_single_text_pane

0x3cb5,	// (0x0004306d) cont_snote2_single_graphic_pane_ParamLimits

0x3cb5,	// (0x0004306d) cont_snote2_single_graphic_pane

0x5ab4,	// (0x00044e6c) cont_note_wait_pane_ParamLimits

0x5ab4,	// (0x00044e6c) cont_note_wait_pane

0x5ab4,	// (0x00044e6c) cont_note_image_pane_ParamLimits

0x5ab4,	// (0x00044e6c) cont_note_image_pane

0x8630,	// (0x000479e8) popup_note2_window_g1_ParamLimits

0x8630,	// (0x000479e8) popup_note2_window_g1

0x8661,	// (0x00047a19) popup_note2_window_t1_ParamLimits

0x8661,	// (0x00047a19) popup_note2_window_t1

0x86a6,	// (0x00047a5e) popup_note2_window_t2_ParamLimits

0x86a6,	// (0x00047a5e) popup_note2_window_t2

0x86eb,	// (0x00047aa3) popup_note2_window_t3_ParamLimits

0x86eb,	// (0x00047aa3) popup_note2_window_t3

0x8730,	// (0x00047ae8) popup_note2_window_t4_ParamLimits

0x8730,	// (0x00047ae8) popup_note2_window_t4

0x39bc,	// (0x00042d74) popup_note2_window_t5_ParamLimits

0x39bc,	// (0x00042d74) popup_note2_window_t5

0x0004,

0xfc55,	// (0x0004f00d) popup_note2_window_t_ParamLimits

0xfc55,	// (0x0004f00d) popup_note2_window_t

0x875f,	// (0x00047b17) popup_note2_image_window_g1_ParamLimits

0x875f,	// (0x00047b17) popup_note2_image_window_g1

0x876b,	// (0x00047b23) popup_note2_image_window_g2_ParamLimits

0x876b,	// (0x00047b23) popup_note2_image_window_g2

0x0001,

0xfc60,	// (0x0004f018) popup_note2_image_window_g_ParamLimits

0xfc60,	// (0x0004f018) popup_note2_image_window_g

0x877d,	// (0x00047b35) popup_note2_image_window_t1_ParamLimits

0x877d,	// (0x00047b35) popup_note2_image_window_t1

0x8795,	// (0x00047b4d) popup_note2_image_window_t2_ParamLimits

0x8795,	// (0x00047b4d) popup_note2_image_window_t2

0x87ad,	// (0x00047b65) popup_note2_image_window_t3_ParamLimits

0x87ad,	// (0x00047b65) popup_note2_image_window_t3

0x0002,

0xfc65,	// (0x0004f01d) popup_note2_image_window_t_ParamLimits

0xfc65,	// (0x0004f01d) popup_note2_image_window_t

0x5ac2,	// (0x00044e7a) popup_note2_wait_window_g1_ParamLimits

0x5ac2,	// (0x00044e7a) popup_note2_wait_window_g1

0x87c9,	// (0x00047b81) popup_note2_wait_window_g2_ParamLimits

0x87c9,	// (0x00047b81) popup_note2_wait_window_g2

0x5ada,	// (0x00044e92) popup_note2_wait_window_g3_ParamLimits

0x5ada,	// (0x00044e92) popup_note2_wait_window_g3

0x0002,

0xfc6c,	// (0x0004f024) popup_note2_wait_window_g_ParamLimits

0xfc6c,	// (0x0004f024) popup_note2_wait_window_g

0x87d5,	// (0x00047b8d) popup_note2_wait_window_t1_ParamLimits

0x87d5,	// (0x00047b8d) popup_note2_wait_window_t1

0x87f3,	// (0x00047bab) popup_note2_wait_window_t2_ParamLimits

0x87f3,	// (0x00047bab) popup_note2_wait_window_t2

0x8811,	// (0x00047bc9) popup_note2_wait_window_t3_ParamLimits

0x8811,	// (0x00047bc9) popup_note2_wait_window_t3

0x8823,	// (0x00047bdb) popup_note2_wait_window_t4_ParamLimits

0x8823,	// (0x00047bdb) popup_note2_wait_window_t4

0x0003,

0xfc73,	// (0x0004f02b) popup_note2_wait_window_t_ParamLimits

0xfc73,	// (0x0004f02b) popup_note2_wait_window_t

0x8835,	// (0x00047bed) wait_bar2_pane_ParamLimits

0x8835,	// (0x00047bed) wait_bar2_pane

0x884d,	// (0x00047c05) popup_snote2_single_text_window_g1_ParamLimits

0x884d,	// (0x00047c05) popup_snote2_single_text_window_g1

0x8875,	// (0x00047c2d) popup_snote2_single_text_window_t1_ParamLimits

0x8875,	// (0x00047c2d) popup_snote2_single_text_window_t1

0x88c1,	// (0x00047c79) popup_snote2_single_text_window_t2_ParamLimits

0x88c1,	// (0x00047c79) popup_snote2_single_text_window_t2

0x890d,	// (0x00047cc5) popup_snote2_single_text_window_t3_ParamLimits

0x890d,	// (0x00047cc5) popup_snote2_single_text_window_t3

0x894e,	// (0x00047d06) popup_snote2_single_text_window_t4_ParamLimits

0x894e,	// (0x00047d06) popup_snote2_single_text_window_t4

0x8984,	// (0x00047d3c) popup_snote2_single_text_window_t5_ParamLimits

0x8984,	// (0x00047d3c) popup_snote2_single_text_window_t5

0x0004,

0xfc7c,	// (0x0004f034) popup_snote2_single_text_window_t_ParamLimits

0xfc7c,	// (0x0004f034) popup_snote2_single_text_window_t

0x89af,	// (0x00047d67) popup_snote2_single_graphic_window_g1_ParamLimits

0x89af,	// (0x00047d67) popup_snote2_single_graphic_window_g1

0x89d7,	// (0x00047d8f) popup_snote2_single_graphic_window_g2_ParamLimits

0x89d7,	// (0x00047d8f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc87,	// (0x0004f03f) popup_snote2_single_graphic_window_g_ParamLimits

0xfc87,	// (0x0004f03f) popup_snote2_single_graphic_window_g

0x89ff,	// (0x00047db7) popup_snote2_single_graphic_window_t1_ParamLimits

0x89ff,	// (0x00047db7) popup_snote2_single_graphic_window_t1

0x8a4b,	// (0x00047e03) popup_snote2_single_graphic_window_t2_ParamLimits

0x8a4b,	// (0x00047e03) popup_snote2_single_graphic_window_t2

0x890d,	// (0x00047cc5) popup_snote2_single_graphic_window_t3_ParamLimits

0x890d,	// (0x00047cc5) popup_snote2_single_graphic_window_t3

0x894e,	// (0x00047d06) popup_snote2_single_graphic_window_t4_ParamLimits

0x894e,	// (0x00047d06) popup_snote2_single_graphic_window_t4

0x8984,	// (0x00047d3c) popup_snote2_single_graphic_window_t5_ParamLimits

0x8984,	// (0x00047d3c) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8c,	// (0x0004f044) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8c,	// (0x0004f044) popup_snote2_single_graphic_window_t

0x747e,	// (0x00046836) clock_nsta_pane_cp2_t1

0x747e,	// (0x00046836) clock_nsta_pane_cp2_t2

0x0001,

0xfaac,	// (0x0004ee64) clock_nsta_pane_cp2_t

0x050c,	// (0x0003f8c4) form_field_data_wide_pane_g1_ParamLimits

0x3eeb,	// (0x000432a3) form_field_data_wide_pane_g2_ParamLimits

0x3eeb,	// (0x000432a3) form_field_data_wide_pane_g2

0x3f5e,	// (0x00043316) form_field_data_wide_pane_g3_ParamLimits

0x3f5e,	// (0x00043316) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0004ea38) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0004ea38) form_field_data_wide_pane_g

0xe078,	// (0x0004d430) grid_touch_3_pane_ParamLimits

0xe078,	// (0x0004d430) grid_touch_3_pane

0xe56c,	// (0x0004d924) cell_touch_3_pane_ParamLimits

0xe56c,	// (0x0004d924) cell_touch_3_pane

0x79cc,	// (0x00046d84) cell_touch_3_pane_g1

0x79cc,	// (0x00046d84) cell_touch_3_pane_g2

0x0001,

0xfb31,	// (0x0004eee9) cell_touch_3_pane_g

0x3a14,	// (0x00042dcc) cont_query_data_pane

0x3a1c,	// (0x00042dd4) cont_query_data_pane_cp1

0x8ac5,	// (0x00047e7d) button_value_adjust_pane_cp7

0x8acd,	// (0x00047e85) query_popup_pane_cp3

0x46b6,	// (0x00043a6e) bg_popup_sub_pane_cp22_ParamLimits

0x16b7,	// (0x00040a6f) navi_navi_volume_pane_cp2

0x16d2,	// (0x00040a8a) popup_side_volume_key_window_g2

0x16e1,	// (0x00040a99) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0004eace) popup_side_volume_key_window_g

0x16fe,	// (0x00040ab6) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0004ead5) popup_side_volume_key_window_t

0x496d,	// (0x00043d25) popup_side_volume_key_window_ParamLimits

0xc0d4,	// (0x0004b48c) list_double_graphic_pane_g4_ParamLimits

0xc0d4,	// (0x0004b48c) list_double_graphic_pane_g4

0xded9,	// (0x0004d291) list_single_2heading_msg_pane_ParamLimits

0xded9,	// (0x0004d291) list_single_2heading_msg_pane

0xca1f,	// (0x0004bdd7) list_single_2heading_msg_pane_g1_ParamLimits

0xca1f,	// (0x0004bdd7) list_single_2heading_msg_pane_g1

0xca2b,	// (0x0004bde3) list_single_2heading_msg_pane_g2_ParamLimits

0xca2b,	// (0x0004bde3) list_single_2heading_msg_pane_g2

0xca3e,	// (0x0004bdf6) list_single_2heading_msg_pane_g3_ParamLimits

0xca3e,	// (0x0004bdf6) list_single_2heading_msg_pane_g3

0xca4a,	// (0x0004be02) list_single_2heading_msg_pane_g4_ParamLimits

0xca4a,	// (0x0004be02) list_single_2heading_msg_pane_g4

0x0003,

0xfc97,	// (0x0004f04f) list_single_2heading_msg_pane_g_ParamLimits

0xfc97,	// (0x0004f04f) list_single_2heading_msg_pane_g

0xbd9e,	// (0x0004b156) list_single_2heading_msg_pane_t1_ParamLimits

0xbd9e,	// (0x0004b156) list_single_2heading_msg_pane_t1

0xbdc6,	// (0x0004b17e) list_single_2heading_msg_pane_t2_ParamLimits

0xbdc6,	// (0x0004b17e) list_single_2heading_msg_pane_t2

0xbe31,	// (0x0004b1e9) list_single_2heading_msg_pane_t3_ParamLimits

0xbe31,	// (0x0004b1e9) list_single_2heading_msg_pane_t3

0x0ede,	// (0x00040296) list_single_2heading_msg_pane_t4_ParamLimits

0x0ede,	// (0x00040296) list_single_2heading_msg_pane_t4

0x0003,

0xfca0,	// (0x0004f058) list_single_2heading_msg_pane_t_ParamLimits

0xfca0,	// (0x0004f058) list_single_2heading_msg_pane_t

0x3603,	// (0x000429bb) title_pane_g4_ParamLimits

0x3603,	// (0x000429bb) title_pane_g4

0x14c6,	// (0x0004087e) title_pane_stacon_g3_ParamLimits

0x14c6,	// (0x0004087e) title_pane_stacon_g3

0x85f3,	// (0x000479ab) list_single_2graphic_im_pane_g4_ParamLimits

0x85f3,	// (0x000479ab) list_single_2graphic_im_pane_g4

0x6513,	// (0x000458cb) popup_side_volume_key_window_cp

0x6cce,	// (0x00046086) main_idle_act2_pane_t1

0x2085,	// (0x0004143d) toolbar_button_pane_g10

0xd3be,	// (0x0004c776) popup_toolbar_window_cp1

0x746f,	// (0x00046827) clock_nsta_pane_cp_t1

0x746f,	// (0x00046827) clock_nsta_pane_cp_t2

0x0001,

0xfaa7,	// (0x0004ee5f) clock_nsta_pane_cp_t

0x16b7,	// (0x00040a6f) navi_navi_volume_pane_cp2_ParamLimits

0x16c6,	// (0x00040a7e) popup_side_volume_key_window_g1_ParamLimits

0x16d2,	// (0x00040a8a) popup_side_volume_key_window_g2_ParamLimits

0x16e1,	// (0x00040a99) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0004eace) popup_side_volume_key_window_g_ParamLimits

0x25b8,	// (0x00041970) fep_hwr_aid_pane

0xe218,	// (0x0004d5d0) bg_fep_hwr_top_pane_g4_ParamLimits

0x7a28,	// (0x00046de0) fep_hwr_top_pane_g1_ParamLimits

0x7a3a,	// (0x00046df2) fep_hwr_top_pane_g2_ParamLimits

0x2671,	// (0x00041a29) fep_hwr_top_pane_g3_ParamLimits

0xfafc,	// (0x0004eeb4) fep_hwr_top_pane_g_ParamLimits

0x2686,	// (0x00041a3e) fep_hwr_top_text_pane_ParamLimits

0x62d6,	// (0x0004568e) aid_touch_tab_arrow_arrow_2

0x62df,	// (0x00045697) aid_touch_tab_arrow_left_2

0x25cc,	// (0x00041984) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2603,	// (0x000419bb) fep_hwr_prediction_pane

0x7b9a,	// (0x00046f52) fep_vkb_prediction_pane

0xe352,	// (0x0004d70a) fep_vkb_side_pane_g3_ParamLimits

0xe352,	// (0x0004d70a) fep_vkb_side_pane_g3

0x7c4a,	// (0x00047002) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x80d6,	// (0x0004748e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x80e3,	// (0x0004749b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba6,	// (0x0004ef5e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8af2,	// (0x00047eaa) fep_hwr_prediction_pane_g1

0x29bb,	// (0x00041d73) fep_hwr_prediction_pane_g2

0x29c3,	// (0x00041d7b) fep_hwr_prediction_pane_g3

0x29cb,	// (0x00041d83) fep_hwr_prediction_pane_g4

0x0003,

0xfca9,	// (0x0004f061) fep_hwr_prediction_pane_g

0x8af2,	// (0x00047eaa) fep_vkb_prediction_pane_g1

0x8afc,	// (0x00047eb4) fep_vkb_prediction_pane_g2

0x8b04,	// (0x00047ebc) fep_vkb_prediction_pane_g3

0x8b0c,	// (0x00047ec4) fep_vkb_prediction_pane_g4

0x0003,

0xfcb2,	// (0x0004f06a) fep_vkb_prediction_pane_g

0x236d,	// (0x00041725) slider_set_pane_g3

0x2381,	// (0x00041739) slider_set_pane_g4

0x2399,	// (0x00041751) slider_set_pane_g5

0x236d,	// (0x00041725) slider_set_pane_g6

0x23af,	// (0x00041767) slider_set_pane_g7

0x6968,	// (0x00045d20) slider_form_pane_g3

0x6971,	// (0x00045d29) slider_form_pane_g4

0x6979,	// (0x00045d31) slider_form_pane_g5

0x6968,	// (0x00045d20) slider_form_pane_g6

0xdeab,	// (0x0004d263) slider_form_pane_g7

0x6f78,	// (0x00046330) slider_set_pane_vc_g3

0x6f81,	// (0x00046339) slider_set_pane_vc_g4

0x6f8a,	// (0x00046342) slider_set_pane_vc_g5

0x6f78,	// (0x00046330) slider_set_pane_vc_g6

0x6f93,	// (0x0004634b) slider_set_pane_vc_g7

0x7153,	// (0x0004650b) slider_form_pane_vc_g1

0x715c,	// (0x00046514) slider_form_pane_vc_g2

0x7165,	// (0x0004651d) slider_form_pane_vc_g3

0x7153,	// (0x0004650b) slider_form_pane_vc_g4

0x716e,	// (0x00046526) slider_form_pane_vc_g5

0x0004,

0xfa79,	// (0x0004ee31) slider_form_pane_vc_g

0x35bb,	// (0x00042973) main_idle_act3_pane

0x8b14,	// (0x00047ecc) ai3_links_pane

0xe5b4,	// (0x0004d96c) popup_ai3_data_window_ParamLimits

0xe5b4,	// (0x0004d96c) popup_ai3_data_window

0x35bb,	// (0x00042973) grid_ai3_links_pane

0xe5ce,	// (0x0004d986) cell_ai3_links_pane_ParamLimits

0xe5ce,	// (0x0004d986) cell_ai3_links_pane

0x8b4f,	// (0x00047f07) bg_popup_sub_pane_cp11

0x8b5c,	// (0x00047f14) cell_ai3_links_pane_g1

0x35bb,	// (0x00042973) bg_popup_sub_pane_cp12

0x8b81,	// (0x00047f39) heading_ai3_data_pane

0x8b89,	// (0x00047f41) list_ai3_gene_pane

0x8b95,	// (0x00047f4d) popup_ai3_data_window_g1

0x8b9d,	// (0x00047f55) heading_ai3_data_pane_g1

0x8ba5,	// (0x00047f5d) heading_ai3_data_pane_t1

0x8bb3,	// (0x00047f6b) list_double_ai3_gene_pane_ParamLimits

0x8bb3,	// (0x00047f6b) list_double_ai3_gene_pane

0x8bc0,	// (0x00047f78) list_single_ai3_gene_pane_ParamLimits

0x8bc0,	// (0x00047f78) list_single_ai3_gene_pane

0x7991,	// (0x00046d49) list_highlight_pane_cp7_ParamLimits

0x7991,	// (0x00046d49) list_highlight_pane_cp7

0x8bcd,	// (0x00047f85) list_single_a13_gene_pane_t1_ParamLimits

0x8bcd,	// (0x00047f85) list_single_a13_gene_pane_t1

0x8be4,	// (0x00047f9c) list_single_ai3_gene_pane_g1

0x8bed,	// (0x00047fa5) list_single_ai3_gene_pane_g2

0x0001,

0xfcbb,	// (0x0004f073) list_single_ai3_gene_pane_g

0x8bf5,	// (0x00047fad) list_double_ai3_gene_pane_g1_ParamLimits

0x8bf5,	// (0x00047fad) list_double_ai3_gene_pane_g1

0x8c01,	// (0x00047fb9) list_double_ai3_gene_pane_t1_ParamLimits

0x8c01,	// (0x00047fb9) list_double_ai3_gene_pane_t1

0x8c1d,	// (0x00047fd5) list_double_ai3_gene_pane_t2_ParamLimits

0x8c1d,	// (0x00047fd5) list_double_ai3_gene_pane_t2

0x8c33,	// (0x00047feb) list_double_ai3_gene_pane_t3_ParamLimits

0x8c33,	// (0x00047feb) list_double_ai3_gene_pane_t3

0x0002,

0xfcc0,	// (0x0004f078) list_double_ai3_gene_pane_t_ParamLimits

0xfcc0,	// (0x0004f078) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0e3f,	// (0x000401f7) aid_size_min_col_2

0xe59e,	// (0x0004d956) aid_size_min_msg_ParamLimits

0xe59e,	// (0x0004d956) aid_size_min_msg

0xe366,	// (0x0004d71e) fep_vkb_top_text_pane_g2_ParamLimits

0xe366,	// (0x0004d71e) fep_vkb_top_text_pane_g2

0x0001,

0xfb2c,	// (0x0004eee4) fep_vkb_top_text_pane_g_ParamLimits

0xfb2c,	// (0x0004eee4) fep_vkb_top_text_pane_g

0x35bb,	// (0x00042973) main_hc_apps_shell_pane

0x8c50,	// (0x00048008) grid_hc_apps_pane_ParamLimits

0x8c50,	// (0x00048008) grid_hc_apps_pane

0x8c5f,	// (0x00048017) list_hc_apps_pane

0x8c67,	// (0x0004801f) scroll_pane_cp37_ParamLimits

0x8c67,	// (0x0004801f) scroll_pane_cp37

0xe5e8,	// (0x0004d9a0) cell_hc_apps_pane_ParamLimits

0xe5e8,	// (0x0004d9a0) cell_hc_apps_pane

0xe6a6,	// (0x0004da5e) cell_hc_apps_pane_g1_ParamLimits

0xe6a6,	// (0x0004da5e) cell_hc_apps_pane_g1

0x8d52,	// (0x0004810a) cell_hc_apps_pane_g2_ParamLimits

0x8d52,	// (0x0004810a) cell_hc_apps_pane_g2

0x8d6e,	// (0x00048126) cell_hc_apps_pane_g3_ParamLimits

0x8d6e,	// (0x00048126) cell_hc_apps_pane_g3

0x0002,

0xfcc7,	// (0x0004f07f) cell_hc_apps_pane_g_ParamLimits

0xfcc7,	// (0x0004f07f) cell_hc_apps_pane_g

0xe6d3,	// (0x0004da8b) cell_hc_apps_pane_t1_ParamLimits

0xe6d3,	// (0x0004da8b) cell_hc_apps_pane_t1

0x3938,	// (0x00042cf0) grid_highlight_pane_cp10_ParamLimits

0x3938,	// (0x00042cf0) grid_highlight_pane_cp10

0xe711,	// (0x0004dac9) list_single_hc_apps_pane_ParamLimits

0xe711,	// (0x0004dac9) list_single_hc_apps_pane

0xe73e,	// (0x0004daf6) list_single_hc_apps_pane_g1

0xca62,	// (0x0004be1a) list_single_hc_apps_pane_g2

0x0001,

0xfcce,	// (0x0004f086) list_single_hc_apps_pane_g

0xca7b,	// (0x0004be33) list_single_hc_apps_pane_g2_copy1

0x0f03,	// (0x000402bb) list_single_hc_apps_pane_t1

0x36af,	// (0x00042a67) bg_set_opt_pane_cp_ParamLimits

0x1342,	// (0x000406fa) setting_slider_pane_t1_ParamLimits

0x135b,	// (0x00040713) setting_slider_pane_t2_ParamLimits

0x1375,	// (0x0004072d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0004e916) setting_slider_pane_t_ParamLimits

0x138d,	// (0x00040745) slider_set_pane_ParamLimits

0x197c,	// (0x00040d34) control_pane_g5_ParamLimits

0x197c,	// (0x00040d34) control_pane_g5

0x67b7,	// (0x00045b6f) slider_set_pane_g1_ParamLimits

0x2361,	// (0x00041719) slider_set_pane_g2_ParamLimits

0x236d,	// (0x00041725) slider_set_pane_g3_ParamLimits

0x2381,	// (0x00041739) slider_set_pane_g4_ParamLimits

0x2399,	// (0x00041751) slider_set_pane_g5_ParamLimits

0x236d,	// (0x00041725) slider_set_pane_g6_ParamLimits

0x23af,	// (0x00041767) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0004ed1c) slider_set_pane_g_ParamLimits

0x4a59,	// (0x00043e11) navi_icon_text_pane_ParamLimits

0xd753,	// (0x0004cb0b) aid_fill_nsta_2_ParamLimits

0xd78a,	// (0x0004cb42) aid_touch_tab_arrow_left_ParamLimits

0xd7a0,	// (0x0004cb58) aid_touch_tab_arrow_right_ParamLimits

0xd83b,	// (0x0004cbf3) clock_nsta_pane_ParamLimits

0x62b8,	// (0x00045670) navi_icon_pane_g1_ParamLimits

0x62c4,	// (0x0004567c) navi_text_pane_t1_ParamLimits

0x757b,	// (0x00046933) navi_icon_text_pane_g1_ParamLimits

0x7587,	// (0x0004693f) navi_icon_text_pane_t1_ParamLimits

0xe73e,	// (0x0004daf6) list_single_hc_apps_pane_g1_ParamLimits

0xca62,	// (0x0004be1a) list_single_hc_apps_pane_g2_ParamLimits

0xfcce,	// (0x0004f086) list_single_hc_apps_pane_g_ParamLimits

0xca7b,	// (0x0004be33) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x0f03,	// (0x000402bb) list_single_hc_apps_pane_t1_ParamLimits

0xbfd5,	// (0x0004b38d) popup_toolbar2_fixed_window_ParamLimits

0xbfd5,	// (0x0004b38d) popup_toolbar2_fixed_window

0xc8c7,	// (0x0004bc7f) popup_toolbar2_float_window

0x35bb,	// (0x00042973) bg_popup_sub_pane_cp27

0x8e45,	// (0x000481fd) grid_toolbar2_float_pane

0x35bb,	// (0x00042973) bg_popup_sub_pane_cp26

0x8e45,	// (0x000481fd) grid_toolbar2_fixed_pane

0xe757,	// (0x0004db0f) cell_toolbar2_fixed_pane_ParamLimits

0xe757,	// (0x0004db0f) cell_toolbar2_fixed_pane

0xe771,	// (0x0004db29) cell_toolbar2_fixed_pane_g1

0x8e66,	// (0x0004821e) toolbar2_fixed_button_pane

0x5421,	// (0x000447d9) toolbar2_fixed_button_pane_g1

0x5429,	// (0x000447e1) toolbar2_fixed_button_pane_g2

0x5431,	// (0x000447e9) toolbar2_fixed_button_pane_g3

0x5439,	// (0x000447f1) toolbar2_fixed_button_pane_g4

0x5441,	// (0x000447f9) toolbar2_fixed_button_pane_g5

0x5449,	// (0x00044801) toolbar2_fixed_button_pane_g6

0x5451,	// (0x00044809) toolbar2_fixed_button_pane_g7

0x5459,	// (0x00044811) toolbar2_fixed_button_pane_g8

0x5461,	// (0x00044819) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0004ec1e) toolbar2_fixed_button_pane_g

0x8e6e,	// (0x00048226) cell_toolbar2_float_pane_ParamLimits

0x8e6e,	// (0x00048226) cell_toolbar2_float_pane

0x8e7f,	// (0x00048237) cell_toolbar2_float_pane_g1

0x8e66,	// (0x0004821e) toolbar2_fixed_button_pane_cp

0xe240,	// (0x0004d5f8) fep_vkb_accented_list_pane_ParamLimits

0xe240,	// (0x0004d5f8) fep_vkb_accented_list_pane

0x27d4,	// (0x00041b8c) bg_popup_fep_shadow_pane_g9

0x4bd9,	// (0x00043f91) bg_popup_fep_shadow_pane_cp3

0x4098,	// (0x00043450) list_accented_list_pane

0x8e88,	// (0x00048240) list_single_accented_list_pane_ParamLimits

0x8e88,	// (0x00048240) list_single_accented_list_pane

0x4bd9,	// (0x00043f91) list_highlight_pane_cp10

0x8e99,	// (0x00048251) list_single_accented_list_pane_t1

0xc7f1,	// (0x0004bba9) popup_slider_window_ParamLimits

0xc7f1,	// (0x0004bba9) popup_slider_window

0x8ad5,	// (0x00047e8d) aid_indentation_list_msg

0xe868,	// (0x0004dc20) bg_popup_window_pane_cp19

0x8fc5,	// (0x0004837d) popup_slider_window_g1

0x8fe1,	// (0x00048399) popup_slider_window_g2

0x8ffd,	// (0x000483b5) popup_slider_window_g3

0x0005,

0xfcd3,	// (0x0004f08b) popup_slider_window_g

0x9063,	// (0x0004841b) popup_slider_window_t1

0x90d7,	// (0x0004848f) small_volume_slider_vertical_pane

0x79cc,	// (0x00046d84) small_volume_slider_vertical_pane_g1

0x79cc,	// (0x00046d84) small_volume_slider_vertical_pane_g2

0x90f3,	// (0x000484ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfce5,	// (0x0004f09d) small_volume_slider_vertical_pane_g

0xbf43,	// (0x0004b2fb) area_side_right_pane_ParamLimits

0xbf43,	// (0x0004b2fb) area_side_right_pane

0xca97,	// (0x0004be4f) aid_size_side_button_ParamLimits

0xca97,	// (0x0004be4f) aid_size_side_button

0xcab0,	// (0x0004be68) grid_sctrl_middle_pane_ParamLimits

0xcab0,	// (0x0004be68) grid_sctrl_middle_pane

0x2a3b,	// (0x00041df3) sctrl_sk_bottom_pane

0x2a4c,	// (0x00041e04) sctrl_sk_top_pane

0x2a5e,	// (0x00041e16) aid_touch_sctrl_top

0x3938,	// (0x00042cf0) bg_sctrl_sk_pane_ParamLimits

0x3938,	// (0x00042cf0) bg_sctrl_sk_pane

0x2a6b,	// (0x00041e23) sctrl_sk_top_pane_g1

0x2a78,	// (0x00041e30) sctrl_sk_top_pane_t1

0x2a5e,	// (0x00041e16) aid_touch_sctrl_bottom

0x3938,	// (0x00042cf0) bg_sctrl_sk_pane_cp_ParamLimits

0x3938,	// (0x00042cf0) bg_sctrl_sk_pane_cp

0x2a93,	// (0x00041e4b) sctrl_sk_bottom_pane_g1

0x2a78,	// (0x00041e30) sctrl_sk_bottom_pane_t1

0xcaca,	// (0x0004be82) cell_sctrl_middle_pane_ParamLimits

0xcaca,	// (0x0004be82) cell_sctrl_middle_pane

0xcadb,	// (0x0004be93) aid_touch_sctrl_middle_ParamLimits

0xcadb,	// (0x0004be93) aid_touch_sctrl_middle

0xcae8,	// (0x0004bea0) bg_sctrl_middle_pane_ParamLimits

0xcae8,	// (0x0004bea0) bg_sctrl_middle_pane

0x917b,	// (0x00048533) cell_sctrl_middle_pane_g1_ParamLimits

0x917b,	// (0x00048533) cell_sctrl_middle_pane_g1

0xcaf6,	// (0x0004beae) cell_sctrl_middle_pane_g2_ParamLimits

0xcaf6,	// (0x0004beae) cell_sctrl_middle_pane_g2

0x0001,

0xfcf1,	// (0x0004f0a9) cell_sctrl_middle_pane_g_ParamLimits

0xfcf1,	// (0x0004f0a9) cell_sctrl_middle_pane_g

0x5421,	// (0x000447d9) bg_sctrl_middle_pane_g1

0x5429,	// (0x000447e1) bg_sctrl_middle_pane_g2

0x5431,	// (0x000447e9) bg_sctrl_middle_pane_g3

0x5439,	// (0x000447f1) bg_sctrl_middle_pane_g4

0x5441,	// (0x000447f9) bg_sctrl_middle_pane_g5

0x5449,	// (0x00044801) bg_sctrl_middle_pane_g6

0x5451,	// (0x00044809) bg_sctrl_middle_pane_g7

0x5459,	// (0x00044811) bg_sctrl_middle_pane_g8

0x0007,

0xfcf6,	// (0x0004f0ae) bg_sctrl_middle_pane_g

0x5461,	// (0x00044819) bg_sctrl_middle_pane_g8_copy1

0x5421,	// (0x000447d9) bg_sctrl_sk_pane_g1

0x5429,	// (0x000447e1) bg_sctrl_sk_pane_g2

0x5431,	// (0x000447e9) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0004ec1e) bg_sctrl_sk_pane_g

0x3e73,	// (0x0004322b) aid_size_touch_scroll_bar

0x5439,	// (0x000447f1) bg_sctrl_sk_pane_g4

0x5441,	// (0x000447f9) bg_sctrl_sk_pane_g5

0x5449,	// (0x00044801) bg_sctrl_sk_pane_g6

0x5451,	// (0x00044809) bg_sctrl_sk_pane_g7

0x5459,	// (0x00044811) bg_sctrl_sk_pane_g8

0x5461,	// (0x00044819) bg_sctrl_sk_pane_g9

0x1b36,	// (0x00040eee) popup_fep_china_hwr2_fs_candidate_window

0xc30b,	// (0x0004b6c3) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc30b,	// (0x0004b6c3) popup_fep_china_hwr2_fs_control_window

0x7c4a,	// (0x00047002) sctrl_sk_top_pane_g2

0x0001,

0xfcec,	// (0x0004f0a4) sctrl_sk_top_pane_g

0xe920,	// (0x0004dcd8) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe920,	// (0x0004dcd8) aid_fep_china_hwr2_fs_cell

0xe934,	// (0x0004dcec) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe934,	// (0x0004dcec) bg_popup_fep_shadow_pane_cp4

0xe94b,	// (0x0004dd03) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe94b,	// (0x0004dd03) bg_popup_fep_shadow_pane_cp5

0xe95d,	// (0x0004dd15) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe95d,	// (0x0004dd15) popup_fep_china_hwr2_fs_control_bar_grid

0xe971,	// (0x0004dd29) popup_fep_china_hwr2_fs_control_funtion_grid

0x914f,	// (0x00048507) aid_fep_china_hwr2_fs_candi_cell

0x35bb,	// (0x00042973) bg_popup_fep_shadow_pane_cp6

0x9159,	// (0x00048511) popup_fep_china_hwr2_fs_candidate_grid

0xe979,	// (0x0004dd31) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe979,	// (0x0004dd31) cell_fep_china_hwr2_fs_funtion_grid

0x79cc,	// (0x00046d84) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x917b,	// (0x00048533) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x917b,	// (0x00048533) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9189,	// (0x00048541) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9189,	// (0x00048541) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd07,	// (0x0004f0bf) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd07,	// (0x0004f0bf) cell_fep_china_hwr2_fs_funtion_grid_g

0xe991,	// (0x0004dd49) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe991,	// (0x0004dd49) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9a6,	// (0x0004dd5e) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9a6,	// (0x0004dd5e) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0c,	// (0x0004f0c4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0c,	// (0x0004f0c4) cell_fep_china_hwr2_fs_funtion_grid_t

0x91d0,	// (0x00048588) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x91d8,	// (0x00048590) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x91e0,	// (0x00048598) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd11,	// (0x0004f0c9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x91e8,	// (0x000485a0) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x91e8,	// (0x000485a0) cell_fep_china_hwr2_fs_candidate_grid

0x9201,	// (0x000485b9) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9209,	// (0x000485c1) popup_fep_china_hwr2_fs_candidate_grid_g21

0x79cc,	// (0x00046d84) cell_fep_china_hwr2_fs_candidate_grid_g1

0x79cc,	// (0x00046d84) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb31,	// (0x0004eee9) cell_fep_china_hwr2_fs_candidate_grid_g

0x9211,	// (0x000485c9) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5017,	// (0x000443cf) clock_nsta_pane_cp_24_ParamLimits

0x5017,	// (0x000443cf) clock_nsta_pane_cp_24

0x5095,	// (0x0004444d) indicator_nsta_pane_cp_24_ParamLimits

0x5095,	// (0x0004444d) indicator_nsta_pane_cp_24

0x6134,	// (0x000454ec) heading_pane_g1

0x0001,

0xf8cb,	// (0x0004ec83) heading_pane_g

0x6b17,	// (0x00045ecf) grid_sct_catagory_button_pane

0x6b47,	// (0x00045eff) scroll_pane_cp5_ParamLimits

0x75c9,	// (0x00046981) button_value_adjust_pane_cp5_ParamLimits

0x75c9,	// (0x00046981) button_value_adjust_pane_cp5

0x76a8,	// (0x00046a60) form2_midp_time_pane_ParamLimits

0x921f,	// (0x000485d7) cell_sct_catagory_button_pane_ParamLimits

0x921f,	// (0x000485d7) cell_sct_catagory_button_pane

0x7991,	// (0x00046d49) bg_button_pane_cp01_ParamLimits

0x7991,	// (0x00046d49) bg_button_pane_cp01

0x79cc,	// (0x00046d84) cell_sct_catagory_button_pane_g1

0xc86a,	// (0x0004bc22) popup_tb_extension_window

0xe9c2,	// (0x0004dd7a) aid_size_cell_ext_ParamLimits

0xe9c2,	// (0x0004dd7a) aid_size_cell_ext

0x3cb5,	// (0x0004306d) bg_tb_trans_pane_cp1_ParamLimits

0x3cb5,	// (0x0004306d) bg_tb_trans_pane_cp1

0xe9e8,	// (0x0004dda0) grid_tb_ext_pane_ParamLimits

0xe9e8,	// (0x0004dda0) grid_tb_ext_pane

0xea23,	// (0x0004dddb) cell_tb_ext_pane_ParamLimits

0xea23,	// (0x0004dddb) cell_tb_ext_pane

0xea4b,	// (0x0004de03) cell_tb_ext_pane_g1_ParamLimits

0xea4b,	// (0x0004de03) cell_tb_ext_pane_g1

0x92b3,	// (0x0004866b) cell_tb_ext_pane_t1

0x3938,	// (0x00042cf0) list_highlight_pane_cp11_ParamLimits

0x3938,	// (0x00042cf0) list_highlight_pane_cp11

0xbfea,	// (0x0004b3a2) popup_uni_indicator_window_ParamLimits

0xbfea,	// (0x0004b3a2) popup_uni_indicator_window

0x3f50,	// (0x00043308) bg_popup_sub_pane_cp14

0x92ce,	// (0x00048686) list_uniindi_pane

0x92da,	// (0x00048692) uniindi_top_pane

0x3938,	// (0x00042cf0) bg_uniindi_top_pane

0x92f9,	// (0x000486b1) uniindi_top_pane_g1

0x930f,	// (0x000486c7) uniindi_top_pane_g2

0x0003,

0xfd18,	// (0x0004f0d0) uniindi_top_pane_g

0x9339,	// (0x000486f1) uniindi_top_pane_t1

0x9363,	// (0x0004871b) list_single_uniindi_pane_ParamLimits

0x9363,	// (0x0004871b) list_single_uniindi_pane

0x79cc,	// (0x00046d84) bg_uniindi_top_pane_g1

0x9376,	// (0x0004872e) list_single_uniindi_pane_g1

0x9389,	// (0x00048741) list_single_uniindi_pane_t1

0x35bb,	// (0x00042973) control_bg_pane

0x93ae,	// (0x00048766) bg_sctrl_sk_pane_cp1

0x93b7,	// (0x0004876f) bg_sctrl_sk_pane_cp2

0x93c0,	// (0x00048778) control_bg_pane_g1

0x93c9,	// (0x00048781) control_bg_pane_g2

0x0001,

0xfd21,	// (0x0004f0d9) control_bg_pane_g

0x7423,	// (0x000467db) cell_indicator_nsta_pane_g1_ParamLimits

0xe0a5,	// (0x0004d45d) cell_indicator_nsta_pane_g2_ParamLimits

0xfa95,	// (0x0004ee4d) cell_indicator_nsta_pane_g_ParamLimits

0x0ca0,	// (0x00040058) form2_midp_time_pane_t1_ParamLimits

0x25aa,	// (0x00041962) main_idle_act4_pane_ParamLimits

0x25aa,	// (0x00041962) main_idle_act4_pane

0xc86a,	// (0x0004bc22) popup_tb_extension_window_ParamLimits

0xea0a,	// (0x0004ddc2) tb_ext_find_pane_ParamLimits

0xea0a,	// (0x0004ddc2) tb_ext_find_pane

0x93d2,	// (0x0004878a) ai_gene_pane_1_cp1

0x4d20,	// (0x000440d8) ai_gene_pane_2_cp1

0x93da,	// (0x00048792) list_single_idle_plugin_calendar_pane

0x93e3,	// (0x0004879b) list_single_idle_plugin_notification_pane

0x93ec,	// (0x000487a4) list_single_idle_plugin_player_pane

0xea68,	// (0x0004de20) list_single_idle_plugin_shortcut_pane_ParamLimits

0xea68,	// (0x0004de20) list_single_idle_plugin_shortcut_pane

0xea90,	// (0x0004de48) main_idle_act4_pane_t1

0xeaa6,	// (0x0004de5e) main_idle_act4_pane_t2

0x0001,

0xfd26,	// (0x0004f0de) main_idle_act4_pane_t

0xeabc,	// (0x0004de74) middle_sk_idle_act4_pane_ParamLimits

0xeabc,	// (0x0004de74) middle_sk_idle_act4_pane

0xead8,	// (0x0004de90) popup_clock_digital_analogue_window_cp2

0xeb00,	// (0x0004deb8) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb00,	// (0x0004deb8) shortcut_wheel_idle_act4_pane

0x79cc,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g1

0x79cc,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g2

0x79cc,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g3

0x79cc,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g4

0x79cc,	// (0x00046d84) shortcut_wheel_idle_act4_pane_g5

0x947f,	// (0x00048837) shortcut_wheel_idle_act4_pane_g6

0x9487,	// (0x0004883f) shortcut_wheel_idle_act4_pane_g7

0x948f,	// (0x00048847) shortcut_wheel_idle_act4_pane_g8

0x9497,	// (0x0004884f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2b,	// (0x0004f0e3) shortcut_wheel_idle_act4_pane_g

0xe218,	// (0x0004d5d0) middle_sk_idle_act4_pane_g1_ParamLimits

0xe218,	// (0x0004d5d0) middle_sk_idle_act4_pane_g1

0xeb7d,	// (0x0004df35) middle_sk_idle_act4_pane_g2_ParamLimits

0xeb7d,	// (0x0004df35) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4e,	// (0x0004f106) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4e,	// (0x0004f106) middle_sk_idle_act4_pane_g

0xeb95,	// (0x0004df4d) middle_sk_idle_act4_pane_t1_ParamLimits

0xeb95,	// (0x0004df4d) middle_sk_idle_act4_pane_t1

0xebc4,	// (0x0004df7c) grid_ai_shortcut_pane_ParamLimits

0xebc4,	// (0x0004df7c) grid_ai_shortcut_pane

0xebe1,	// (0x0004df99) list_highlight_pane_cp16_ParamLimits

0xebe1,	// (0x0004df99) list_highlight_pane_cp16

0xebee,	// (0x0004dfa6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xebee,	// (0x0004dfa6) list_single_idle_plugin_shortcut_pane_g1

0xebfa,	// (0x0004dfb2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xebfa,	// (0x0004dfb2) list_single_idle_plugin_shortcut_pane_g2

0xec16,	// (0x0004dfce) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec16,	// (0x0004dfce) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd53,	// (0x0004f10b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd53,	// (0x0004f10b) list_single_idle_plugin_shortcut_pane_g

0xec2b,	// (0x0004dfe3) cell_ai_shortcut_pane_ParamLimits

0xec2b,	// (0x0004dfe3) cell_ai_shortcut_pane

0xec41,	// (0x0004dff9) cell_ai_shortcut_pane_g1_ParamLimits

0xec41,	// (0x0004dff9) cell_ai_shortcut_pane_g1

0x93d2,	// (0x0004878a) ai_gene_pane_1_cp2

0x95c7,	// (0x0004897f) ai_gene_pane_2_cp2

0x95cf,	// (0x00048987) list_highlight_pane_cp15

0x95d8,	// (0x00048990) list_single_idle_plugin_calendar_pane_g1

0x95cf,	// (0x00048987) list_highlight_pane_cp17

0x95e0,	// (0x00048998) list_single_idle_plugin_calendar_pane_g1_copy1

0x95e8,	// (0x000489a0) list_single_idle_plugin_player_pane_g1

0x6d70,	// (0x00046128) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004f112) list_single_idle_plugin_player_pane_g

0x95f0,	// (0x000489a8) list_single_idle_plugin_player_pane_t1

0x95fe,	// (0x000489b6) list_single_idle_plugin_player_pane_t2

0x960c,	// (0x000489c4) list_single_idle_plugin_player_pane_t3

0x961a,	// (0x000489d2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5f,	// (0x0004f117) list_single_idle_plugin_player_pane_t

0x9628,	// (0x000489e0) wait_bar_pane_cp15

0x9630,	// (0x000489e8) grid_ai_notification_pane

0x6d70,	// (0x00046128) list_single_idle_plugin_notification_pane_g1

0xec63,	// (0x0004e01b) cell_ai_notification_pane_ParamLimits

0xec63,	// (0x0004e01b) cell_ai_notification_pane

0x9646,	// (0x000489fe) cell_ai_notification_pane_g1

0x964e,	// (0x00048a06) cell_ai_notification_pane_t1

0xec70,	// (0x0004e028) tb_ext_find_button_pane

0xec78,	// (0x0004e030) tb_ext_find_pane_g1

0xec80,	// (0x0004e038) tb_ext_find_pane_t1

0x45c6,	// (0x0004397e) tb_ext_find_button_pane_g1

0x967a,	// (0x00048a32) tb_ext_find_button_pane_g2

0x0001,

0xfd68,	// (0x0004f120) tb_ext_find_button_pane_g

0xea90,	// (0x0004de48) main_idle_act4_pane_t1_ParamLimits

0xeaa6,	// (0x0004de5e) main_idle_act4_pane_t2_ParamLimits

0xfd26,	// (0x0004f0de) main_idle_act4_pane_t_ParamLimits

0xead8,	// (0x0004de90) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeaf0,	// (0x0004dea8) sat_plugin_idle_act4_pane_ParamLimits

0xeaf0,	// (0x0004dea8) sat_plugin_idle_act4_pane

0xec8e,	// (0x0004e046) sat_plugin_idle_act4_pane_t1_ParamLimits

0xec8e,	// (0x0004e046) sat_plugin_idle_act4_pane_t1

0xeca6,	// (0x0004e05e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xeca6,	// (0x0004e05e) sat_plugin_idle_act4_pane_t2

0xecbe,	// (0x0004e076) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecbe,	// (0x0004e076) sat_plugin_idle_act4_pane_t3

0xecd6,	// (0x0004e08e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xecd6,	// (0x0004e08e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6d,	// (0x0004f125) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6d,	// (0x0004f125) sat_plugin_idle_act4_pane_t

0x11a6,	// (0x0004055e) popup_battery_window_ParamLimits

0x11a6,	// (0x0004055e) popup_battery_window

0x3938,	// (0x00042cf0) bg_popup_sub_pane_cp25_ParamLimits

0x3938,	// (0x00042cf0) bg_popup_sub_pane_cp25

0x96cf,	// (0x00048a87) popup_battery_window_g1_ParamLimits

0x96cf,	// (0x00048a87) popup_battery_window_g1

0x96db,	// (0x00048a93) popup_battery_window_t1_ParamLimits

0x96db,	// (0x00048a93) popup_battery_window_t1

0x96ed,	// (0x00048aa5) popup_battery_window_t2_ParamLimits

0x96ed,	// (0x00048aa5) popup_battery_window_t2

0x0001,

0xfd76,	// (0x0004f12e) popup_battery_window_t_ParamLimits

0xfd76,	// (0x0004f12e) popup_battery_window_t

0xd5b6,	// (0x0004c96e) midp_canvas_pane_ParamLimits

0xd613,	// (0x0004c9cb) midp_keypad_pane_ParamLimits

0xd613,	// (0x0004c9cb) midp_keypad_pane

0x4efd,	// (0x000442b5) main_midp_pane_ParamLimits

0x748d,	// (0x00046845) signal_pane_g2_cp_ParamLimits

0xecee,	// (0x0004e0a6) aid_size_cell_midp_keypad_ParamLimits

0xecee,	// (0x0004e0a6) aid_size_cell_midp_keypad

0xed0c,	// (0x0004e0c4) midp_keyp_game_grid_pane_ParamLimits

0xed0c,	// (0x0004e0c4) midp_keyp_game_grid_pane

0xed33,	// (0x0004e0eb) midp_keyp_rocker_pane_ParamLimits

0xed33,	// (0x0004e0eb) midp_keyp_rocker_pane

0xed84,	// (0x0004e13c) midp_keyp_sk_left_pane_ParamLimits

0xed84,	// (0x0004e13c) midp_keyp_sk_left_pane

0xedd8,	// (0x0004e190) midp_keyp_sk_right_pane_ParamLimits

0xedd8,	// (0x0004e190) midp_keyp_sk_right_pane

0x35bb,	// (0x00042973) bg_button_pane_cp03

0xee2c,	// (0x0004e1e4) midp_keyp_sk_left_pane_g1

0x35bb,	// (0x00042973) bg_button_pane_cp04

0xee2c,	// (0x0004e1e4) midp_keyp_sk_right_pane_g1

0x79cc,	// (0x00046d84) midp_keyp_rocker_pane_g1

0xee35,	// (0x0004e1ed) keyp_game_cell_pane_ParamLimits

0xee35,	// (0x0004e1ed) keyp_game_cell_pane

0x35bb,	// (0x00042973) bg_button_pane_cp02

0xee59,	// (0x0004e211) keyp_game_cell_pane_g1

0xbf85,	// (0x0004b33d) popup_fep_vkb2_window_ParamLimits

0xbf85,	// (0x0004b33d) popup_fep_vkb2_window

0xcb02,	// (0x0004beba) aid_size_cell_vkb2_ParamLimits

0xcb02,	// (0x0004beba) aid_size_cell_vkb2

0xcb38,	// (0x0004bef0) popup_fep_vkb2_window_g1_ParamLimits

0xcb38,	// (0x0004bef0) popup_fep_vkb2_window_g1

0xcb88,	// (0x0004bf40) vkb2_area_bottom_pane_ParamLimits

0xcb88,	// (0x0004bf40) vkb2_area_bottom_pane

0xcbdc,	// (0x0004bf94) vkb2_area_keypad_pane_ParamLimits

0xcbdc,	// (0x0004bf94) vkb2_area_keypad_pane

0xcc24,	// (0x0004bfdc) vkb2_area_top_pane_ParamLimits

0xcc24,	// (0x0004bfdc) vkb2_area_top_pane

0xccaa,	// (0x0004c062) vkb2_top_entry_pane_ParamLimits

0xccaa,	// (0x0004c062) vkb2_top_entry_pane

0xccd7,	// (0x0004c08f) vkb2_top_grid_left_pane_ParamLimits

0xccd7,	// (0x0004c08f) vkb2_top_grid_left_pane

0xccf7,	// (0x0004c0af) vkb2_top_grid_right_pane_ParamLimits

0xccf7,	// (0x0004c0af) vkb2_top_grid_right_pane

0x2cf1,	// (0x000420a9) vkb2_cell_keypad_pane_ParamLimits

0x2cf1,	// (0x000420a9) vkb2_cell_keypad_pane

0xcd3d,	// (0x0004c0f5) vkb2_area_bottom_grid_pane_ParamLimits

0xcd3d,	// (0x0004c0f5) vkb2_area_bottom_grid_pane

0xcd67,	// (0x0004c11f) vkb2_area_bottom_pane_g1_ParamLimits

0xcd67,	// (0x0004c11f) vkb2_area_bottom_pane_g1

0xcd8d,	// (0x0004c145) vkb2_area_bottom_pane_g2_ParamLimits

0xcd8d,	// (0x0004c145) vkb2_area_bottom_pane_g2

0xcdbe,	// (0x0004c176) vkb2_area_bottom_pane_g3_ParamLimits

0xcdbe,	// (0x0004c176) vkb2_area_bottom_pane_g3

0x0002,

0xfd7b,	// (0x0004f133) vkb2_area_bottom_pane_g_ParamLimits

0xfd7b,	// (0x0004f133) vkb2_area_bottom_pane_g

0x2e9b,	// (0x00042253) vkb2_top_cell_left_pane_ParamLimits

0x2e9b,	// (0x00042253) vkb2_top_cell_left_pane

0xee62,	// (0x0004e21a) vkb2_top_entry_pane_g1_ParamLimits

0xee62,	// (0x0004e21a) vkb2_top_entry_pane_g1

0xee70,	// (0x0004e228) vkb2_top_entry_pane_t1_ParamLimits

0xee70,	// (0x0004e228) vkb2_top_entry_pane_t1

0x989e,	// (0x00048c56) vkb2_top_entry_pane_t2_ParamLimits

0x989e,	// (0x00048c56) vkb2_top_entry_pane_t2

0x98d0,	// (0x00048c88) vkb2_top_entry_pane_t3_ParamLimits

0x98d0,	// (0x00048c88) vkb2_top_entry_pane_t3

0x0002,

0xfd82,	// (0x0004f13a) vkb2_top_entry_pane_t_ParamLimits

0xfd82,	// (0x0004f13a) vkb2_top_entry_pane_t

0xce28,	// (0x0004c1e0) vkb2_top_grid_right_pane_g1_ParamLimits

0xce28,	// (0x0004c1e0) vkb2_top_grid_right_pane_g1

0x2efe,	// (0x000422b6) vkb2_top_grid_right_pane_g2_ParamLimits

0x2efe,	// (0x000422b6) vkb2_top_grid_right_pane_g2

0x2f16,	// (0x000422ce) vkb2_top_grid_right_pane_g3_ParamLimits

0x2f16,	// (0x000422ce) vkb2_top_grid_right_pane_g3

0xce3e,	// (0x0004c1f6) vkb2_top_grid_right_pane_g4_ParamLimits

0xce3e,	// (0x0004c1f6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd89,	// (0x0004f141) vkb2_top_grid_right_pane_g_ParamLimits

0xfd89,	// (0x0004f141) vkb2_top_grid_right_pane_g

0x2f44,	// (0x000422fc) vkb2_top_cell_left_pane_g1

0x2f5b,	// (0x00042313) vkb2_cell_keypad_pane_g1_ParamLimits

0x2f5b,	// (0x00042313) vkb2_cell_keypad_pane_g1

0x98f4,	// (0x00048cac) vkb2_cell_keypad_pane_t1_ParamLimits

0x98f4,	// (0x00048cac) vkb2_cell_keypad_pane_t1

0x2f69,	// (0x00042321) vkb2_cell_bottom_grid_pane_ParamLimits

0x2f69,	// (0x00042321) vkb2_cell_bottom_grid_pane

0x2fa2,	// (0x0004235a) vkb2_cell_bottom_grid_pane_g1

0xeb21,	// (0x0004ded9) aid_call2_pane_cp02

0xeb29,	// (0x0004dee1) aid_call_pane_cp02

0xeb31,	// (0x0004dee9) clock_digital_number_pane_cp10

0xeb39,	// (0x0004def1) clock_digital_number_pane_cp11

0xeb41,	// (0x0004def9) clock_digital_number_pane_cp12

0xeb49,	// (0x0004df01) clock_digital_number_pane_cp13

0xeb51,	// (0x0004df09) clock_digital_separator_pane_cp10

0x45c6,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g1

0x45c6,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g2

0xeb59,	// (0x0004df11) popup_clock_digital_analogue_window_cp2_g3

0x45c6,	// (0x0004397e) popup_clock_digital_analogue_window_cp2_g4

0xeb59,	// (0x0004df11) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3e,	// (0x0004f0f6) popup_clock_digital_analogue_window_cp2_g

0xeb61,	// (0x0004df19) popup_clock_digital_analogue_window_cp2_t1

0xeb6f,	// (0x0004df27) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd49,	// (0x0004f101) popup_clock_digital_analogue_window_cp2_t

0x79cc,	// (0x00046d84) clock_digital_number_pane_cp10_g1

0x79cc,	// (0x00046d84) clock_digital_number_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004eee9) clock_digital_number_pane_cp10_g

0x79cc,	// (0x00046d84) clock_digital_separator_pane_cp10_g1

0x79cc,	// (0x00046d84) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb31,	// (0x0004eee9) clock_digital_separator_pane_cp10_g

0x931b,	// (0x000486d3) uniindi_top_pane_g3

0x932c,	// (0x000486e4) uniindi_top_pane_g4

0x2d7c,	// (0x00042134) vkb2_row_keypad_pane_ParamLimits

0x2d7c,	// (0x00042134) vkb2_row_keypad_pane

0x2fbe,	// (0x00042376) vkb2_cell_t_keypad_pane_ParamLimits

0x2fbe,	// (0x00042376) vkb2_cell_t_keypad_pane

0x2fce,	// (0x00042386) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2fce,	// (0x00042386) vkb2_cell_t_keypad_pane_cp08

0x2fe1,	// (0x00042399) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2fe1,	// (0x00042399) vkb2_cell_t_keypad_pane_cp09

0x2ff5,	// (0x000423ad) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2ff5,	// (0x000423ad) vkb2_cell_t_keypad_pane_cp01

0x3006,	// (0x000423be) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3006,	// (0x000423be) vkb2_cell_t_keypad_pane_cp02

0x3017,	// (0x000423cf) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3017,	// (0x000423cf) vkb2_cell_t_keypad_pane_cp03

0x3028,	// (0x000423e0) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3028,	// (0x000423e0) vkb2_cell_t_keypad_pane_cp04

0x3039,	// (0x000423f1) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3039,	// (0x000423f1) vkb2_cell_t_keypad_pane_cp05

0x304a,	// (0x00042402) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x304a,	// (0x00042402) vkb2_cell_t_keypad_pane_cp06

0x305b,	// (0x00042413) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x305b,	// (0x00042413) vkb2_cell_t_keypad_pane_cp07

0x306c,	// (0x00042424) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x306c,	// (0x00042424) vkb2_cell_t_keypad_pane_cp10

0x7c4a,	// (0x00047002) vkb2_cell_t_keypad_pane_g1

0x990b,	// (0x00048cc3) vkb2_cell_t_keypad_pane_t1

0x35bb,	// (0x00042973) popup_grid_graphic2_window

0xeea9,	// (0x0004e261) aid_size_cell_graphic2_ParamLimits

0xeea9,	// (0x0004e261) aid_size_cell_graphic2

0xeee7,	// (0x0004e29f) bg_popup_window_pane_cp21_ParamLimits

0xeee7,	// (0x0004e29f) bg_popup_window_pane_cp21

0xeef5,	// (0x0004e2ad) graphic2_pages_pane_ParamLimits

0xeef5,	// (0x0004e2ad) graphic2_pages_pane

0xef4b,	// (0x0004e303) grid_graphic2_control_pane_ParamLimits

0xef4b,	// (0x0004e303) grid_graphic2_control_pane

0xef93,	// (0x0004e34b) grid_graphic2_pane_ParamLimits

0xef93,	// (0x0004e34b) grid_graphic2_pane

0xf027,	// (0x0004e3df) cell_graphic2_pane

0x35bb,	// (0x00042973) main_comp_mode_pane

0x8b89,	// (0x00047f41) list_ai3_gene_pane_ParamLimits

0xe868,	// (0x0004dc20) bg_popup_window_pane_cp19_ParamLimits

0x8f69,	// (0x00048321) bg_touch_area_indi_pane_ParamLimits

0x8f69,	// (0x00048321) bg_touch_area_indi_pane

0x8f7f,	// (0x00048337) bg_touch_area_indi_pane_cp01_ParamLimits

0x8f7f,	// (0x00048337) bg_touch_area_indi_pane_cp01

0x8f95,	// (0x0004834d) bg_touch_area_indi_pane_cp02_ParamLimits

0x8f95,	// (0x0004834d) bg_touch_area_indi_pane_cp02

0x8fab,	// (0x00048363) bg_touch_area_indi_pane_cp03_ParamLimits

0x8fab,	// (0x00048363) bg_touch_area_indi_pane_cp03

0x8fc5,	// (0x0004837d) popup_slider_window_g1_ParamLimits

0x8fe1,	// (0x00048399) popup_slider_window_g2_ParamLimits

0x8ffd,	// (0x000483b5) popup_slider_window_g3_ParamLimits

0xfcd3,	// (0x0004f08b) popup_slider_window_g_ParamLimits

0x9063,	// (0x0004841b) popup_slider_window_t1_ParamLimits

0x90d7,	// (0x0004848f) small_volume_slider_vertical_pane_ParamLimits

0xf027,	// (0x0004e3df) cell_graphic2_pane_ParamLimits

0xf082,	// (0x0004e43a) bg_button_pane_cp10_ParamLimits

0xf082,	// (0x0004e43a) bg_button_pane_cp10

0xf095,	// (0x0004e44d) bg_button_pane_cp11_ParamLimits

0xf095,	// (0x0004e44d) bg_button_pane_cp11

0xf0a8,	// (0x0004e460) graphic2_pages_pane_g1_ParamLimits

0xf0a8,	// (0x0004e460) graphic2_pages_pane_g1

0xf0c3,	// (0x0004e47b) graphic2_pages_pane_g2_ParamLimits

0xf0c3,	// (0x0004e47b) graphic2_pages_pane_g2

0x0001,

0xfd97,	// (0x0004f14f) graphic2_pages_pane_g_ParamLimits

0xfd97,	// (0x0004f14f) graphic2_pages_pane_g

0xf0db,	// (0x0004e493) graphic2_pages_pane_t1_ParamLimits

0xf0db,	// (0x0004e493) graphic2_pages_pane_t1

0xf0f3,	// (0x0004e4ab) cell_graphic2_control_pane_ParamLimits

0xf0f3,	// (0x0004e4ab) cell_graphic2_control_pane

0xf125,	// (0x0004e4dd) cell_graphic2_pane_g1_ParamLimits

0xf125,	// (0x0004e4dd) cell_graphic2_pane_g1

0xe226,	// (0x0004d5de) cell_graphic2_pane_g2_ParamLimits

0xe226,	// (0x0004d5de) cell_graphic2_pane_g2

0xf01a,	// (0x0004e3d2) cell_graphic2_pane_g3_ParamLimits

0xf01a,	// (0x0004e3d2) cell_graphic2_pane_g3

0xe233,	// (0x0004d5eb) cell_graphic2_pane_g4_ParamLimits

0xe233,	// (0x0004d5eb) cell_graphic2_pane_g4

0xf132,	// (0x0004e4ea) cell_graphic2_pane_g5_ParamLimits

0xf132,	// (0x0004e4ea) cell_graphic2_pane_g5

0x0004,

0xfd9c,	// (0x0004f154) cell_graphic2_pane_g_ParamLimits

0xfd9c,	// (0x0004f154) cell_graphic2_pane_g

0xf152,	// (0x0004e50a) cell_graphic2_pane_t1_ParamLimits

0xf152,	// (0x0004e50a) cell_graphic2_pane_t1

0x6128,	// (0x000454e0) grid_highlight_pane_cp11_ParamLimits

0x6128,	// (0x000454e0) grid_highlight_pane_cp11

0x3938,	// (0x00042cf0) bg_button_pane_cp05

0xf19b,	// (0x0004e553) cell_graphic2_control_pane_g1

0x79cc,	// (0x00046d84) bg_touch_area_indi_pane_g1

0x9be7,	// (0x00048f9f) aid_cmod_rocker_key_size

0x9bf1,	// (0x00048fa9) aid_cmode_itu_key_size

0x9bfb,	// (0x00048fb3) main_cmode_video_pane

0x9c05,	// (0x00048fbd) main_comp_mode_itu_pane

0x9c11,	// (0x00048fc9) main_comp_mode_rocker_pane

0x9c1d,	// (0x00048fd5) cell_cmode_rocker_pane_ParamLimits

0x9c1d,	// (0x00048fd5) cell_cmode_rocker_pane

0x9c2f,	// (0x00048fe7) cell_cmode_itu_pane_ParamLimits

0x9c2f,	// (0x00048fe7) cell_cmode_itu_pane

0x3f50,	// (0x00043308) bg_button_pane_cp06_ParamLimits

0x3f50,	// (0x00043308) bg_button_pane_cp06

0x7c4a,	// (0x00047002) cell_cmode_rocker_pane_g1_ParamLimits

0x7c4a,	// (0x00047002) cell_cmode_rocker_pane_g1

0x917b,	// (0x00048533) cell_cmode_rocker_pane_g2_ParamLimits

0x917b,	// (0x00048533) cell_cmode_rocker_pane_g2

0x0001,

0xfdac,	// (0x0004f164) cell_cmode_rocker_pane_g_ParamLimits

0xfdac,	// (0x0004f164) cell_cmode_rocker_pane_g

0x35bb,	// (0x00042973) bg_button_pane_cp07

0x9c44,	// (0x00048ffc) cell_cmode_itu_pane_g1

0x9c4d,	// (0x00049005) cell_cmode_itu_pane_t1

0x9c5b,	// (0x00049013) cell_cmode_itu_pane_t2

0x0001,

0xfdb1,	// (0x0004f169) cell_cmode_itu_pane_t

0x939e,	// (0x00048756) aid_touch_ctrl_left

0x93a6,	// (0x0004875e) aid_touch_ctrl_right

0x35bb,	// (0x00042973) compa_mode_pane

0xf1bf,	// (0x0004e577) aid_cmod_rocker_key_size_cp

0xf1c9,	// (0x0004e581) aid_cmode_itu_key_size_cp

0x9c7d,	// (0x00049035) compa_mode_pane_g1

0x9c85,	// (0x0004903d) compa_mode_pane_g2

0x9c8d,	// (0x00049045) compa_mode_pane_g3

0x0002,

0xfdb6,	// (0x0004f16e) compa_mode_pane_g

0xf1d3,	// (0x0004e58b) main_comp_mode_itu_pane_cp

0xf1db,	// (0x0004e593) main_comp_mode_rocker_pane_cp

0xf1e3,	// (0x0004e59b) cell_cmode_itu_pane_cp_ParamLimits

0xf1e3,	// (0x0004e59b) cell_cmode_itu_pane_cp

0xf1f8,	// (0x0004e5b0) cell_cmode_rocker_pane_cp_ParamLimits

0xf1f8,	// (0x0004e5b0) cell_cmode_rocker_pane_cp

0x3f50,	// (0x00043308) bg_button_pane_cp06_cp_ParamLimits

0x3f50,	// (0x00043308) bg_button_pane_cp06_cp

0x7c4a,	// (0x00047002) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7c4a,	// (0x00047002) cell_cmode_rocker_pane_g1_cp

0x79cc,	// (0x00046d84) cell_cmode_rocker_pane_g2_cp

0x35bb,	// (0x00042973) bg_button_pane_cp07_cp

0xf20a,	// (0x0004e5c2) cell_cmode_itu_pane_g1_cp

0xf213,	// (0x0004e5cb) cell_cmode_itu_pane_t1_cp

0xf213,	// (0x0004e5cb) cell_cmode_itu_pane_t2_cp

0xdea1,	// (0x0004d259) settings_code_pane_cp2

0x36af,	// (0x00042a67) bg_popup_window_pane_cp3_ParamLimits

0x3b38,	// (0x00042ef0) heading_pane_cp3_ParamLimits

0x3b44,	// (0x00042efc) listscroll_popup_graphic_pane_ParamLimits

0x25b8,	// (0x00041970) fep_hwr_aid_pane_ParamLimits

0x2a5e,	// (0x00041e16) aid_touch_sctrl_top_ParamLimits

0x2a6b,	// (0x00041e23) sctrl_sk_top_pane_g1_ParamLimits

0x7c4a,	// (0x00047002) sctrl_sk_top_pane_g2_ParamLimits

0xfcec,	// (0x0004f0a4) sctrl_sk_top_pane_g_ParamLimits

0x2a78,	// (0x00041e30) sctrl_sk_top_pane_t1_ParamLimits

0x2a5e,	// (0x00041e16) aid_touch_sctrl_bottom_ParamLimits

0x2a78,	// (0x00041e30) sctrl_sk_bottom_pane_t1_ParamLimits

0x92e7,	// (0x0004869f) aid_area_touch_clock

0xcc6c,	// (0x0004c024) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc6c,	// (0x0004c024) aid_vkb2_area_top_pane_cell

0xcd17,	// (0x0004c0cf) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd17,	// (0x0004c0cf) aid_vkb2_area_bottom_pane_cell

0x9856,	// (0x00048c0e) popup_char_count_window

0x9cda,	// (0x00049092) popup_char_count_window_g1

0x9ce3,	// (0x0004909b) popup_char_count_window_g2

0x9cec,	// (0x000490a4) popup_char_count_window_g3

0x0002,

0xfdbd,	// (0x0004f175) popup_char_count_window_g

0x9cf5,	// (0x000490ad) popup_char_count_window_t1

0x2b19,	// (0x00041ed1) popup_fep_char_preview_window_ParamLimits

0x2b19,	// (0x00041ed1) popup_fep_char_preview_window

0xcc8c,	// (0x0004c044) vkb2_top_candi_pane_ParamLimits

0xcc8c,	// (0x0004c044) vkb2_top_candi_pane

0xf221,	// (0x0004e5d9) cell_vkb2_top_candi_pane_ParamLimits

0xf221,	// (0x0004e5d9) cell_vkb2_top_candi_pane

0x5ab4,	// (0x00044e6c) bg_popup_fep_char_preview_window_ParamLimits

0x5ab4,	// (0x00044e6c) bg_popup_fep_char_preview_window

0x3081,	// (0x00042439) popup_fep_char_preview_window_t1_ParamLimits

0x3081,	// (0x00042439) popup_fep_char_preview_window_t1

0x9d50,	// (0x00049108) bg_popup_fep_char_preview_window_g1

0x9d58,	// (0x00049110) bg_popup_fep_char_preview_window_g2

0x9d60,	// (0x00049118) bg_popup_fep_char_preview_window_g3

0x9d68,	// (0x00049120) bg_popup_fep_char_preview_window_g4

0x9d70,	// (0x00049128) bg_popup_fep_char_preview_window_g5

0x30bb,	// (0x00042473) bg_popup_fep_char_preview_window_g6

0x9d78,	// (0x00049130) bg_popup_fep_char_preview_window_g7

0x9d80,	// (0x00049138) bg_popup_fep_char_preview_window_g8

0x9d88,	// (0x00049140) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc4,	// (0x0004f17c) bg_popup_fep_char_preview_window_g

0x7c4a,	// (0x00047002) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7c4a,	// (0x00047002) cell_vkb2_top_candi_pane_g1

0x7f6d,	// (0x00047325) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7f6d,	// (0x00047325) cell_vkb2_top_candi_pane_g2

0x7f8e,	// (0x00047346) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7f8e,	// (0x00047346) cell_vkb2_top_candi_pane_g3

0x30c3,	// (0x0004247b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x30c3,	// (0x0004247b) cell_vkb2_top_candi_pane_g4

0x9d90,	// (0x00049148) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9d90,	// (0x00049148) cell_vkb2_top_candi_pane_g5

0x917b,	// (0x00048533) cell_vkb2_top_candi_pane_g6_ParamLimits

0x917b,	// (0x00048533) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd7,	// (0x0004f18f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd7,	// (0x0004f18f) cell_vkb2_top_candi_pane_g

0x30e4,	// (0x0004249c) cell_vkb2_top_candi_pane_t1

0x234d,	// (0x00041705) aid_size_touch_slider_mark_ParamLimits

0x234d,	// (0x00041705) aid_size_touch_slider_mark

0xef31,	// (0x0004e2e9) grid_graphic2_catg_pane_ParamLimits

0xef31,	// (0x0004e2e9) grid_graphic2_catg_pane

0xefed,	// (0x0004e3a5) popup_grid_graphic2_window_t1_ParamLimits

0xefed,	// (0x0004e3a5) popup_grid_graphic2_window_t1

0xf003,	// (0x0004e3bb) popup_grid_graphic2_window_t2_ParamLimits

0xf003,	// (0x0004e3bb) popup_grid_graphic2_window_t2

0x0001,

0xfd92,	// (0x0004f14a) popup_grid_graphic2_window_t_ParamLimits

0xfd92,	// (0x0004f14a) popup_grid_graphic2_window_t

0x3938,	// (0x00042cf0) bg_button_pane_cp05_ParamLimits

0xf19b,	// (0x0004e553) cell_graphic2_control_pane_g1_ParamLimits

0xf287,	// (0x0004e63f) cell_graphic2_catg_pane_ParamLimits

0xf287,	// (0x0004e63f) cell_graphic2_catg_pane

0x35bb,	// (0x00042973) bg_button_pane_cp12

0xf299,	// (0x0004e651) cell_graphic2_catg_pane_g1

0x92b3,	// (0x0004866b) cell_tb_ext_pane_t1_ParamLimits

0x2ebb,	// (0x00042273) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2ebb,	// (0x00042273) vkb2_top_cell_right_narrow_pane

0x2ed3,	// (0x0004228b) vkb2_top_cell_right_wide_pane_ParamLimits

0x2ed3,	// (0x0004228b) vkb2_top_cell_right_wide_pane

0x25aa,	// (0x00041962) bg_vkb2_func_pane_ParamLimits

0x25aa,	// (0x00041962) bg_vkb2_func_pane

0x2f44,	// (0x000422fc) vkb2_top_cell_left_pane_g1_ParamLimits

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp03_ParamLimits

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp03

0x2fa2,	// (0x0004235a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5429,	// (0x000447e1) bg_vkb2_func_pane_g1

0x5431,	// (0x000447e9) bg_vkb2_func_pane_g2

0x5441,	// (0x000447f9) bg_vkb2_func_pane_g3

0x5439,	// (0x000447f1) bg_vkb2_func_pane_g4

0x5449,	// (0x00044801) bg_vkb2_func_pane_g5

0x5451,	// (0x00044809) bg_vkb2_func_pane_g6

0x5459,	// (0x00044811) bg_vkb2_func_pane_g7

0x5461,	// (0x00044819) bg_vkb2_func_pane_g8

0x5421,	// (0x000447d9) bg_vkb2_func_pane_g9

0x0008,

0xfde4,	// (0x0004f19c) bg_vkb2_func_pane_g

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp01_ParamLimits

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp01

0x2f44,	// (0x000422fc) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2f44,	// (0x000422fc) vkb2_top_cell_right_wide_pane_g1

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp02_ParamLimits

0x25aa,	// (0x00041962) bg_vkb2_fuc_pane_cp02

0x2fa2,	// (0x0004235a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2fa2,	// (0x0004235a) vkb2_top_cell_right_narrow_pane_g1

0xe7aa,	// (0x0004db62) aid_touch_area_decrease_ParamLimits

0xe7aa,	// (0x0004db62) aid_touch_area_decrease

0xe7e4,	// (0x0004db9c) aid_touch_area_increase_ParamLimits

0xe7e4,	// (0x0004db9c) aid_touch_area_increase

0xe80c,	// (0x0004dbc4) aid_touch_area_mute_ParamLimits

0xe80c,	// (0x0004dbc4) aid_touch_area_mute

0xe834,	// (0x0004dbec) aid_touch_area_slider_ParamLimits

0xe834,	// (0x0004dbec) aid_touch_area_slider

0xe874,	// (0x0004dc2c) popup_slider_window_g4_ParamLimits

0xe874,	// (0x0004dc2c) popup_slider_window_g4

0xe89c,	// (0x0004dc54) popup_slider_window_g5_ParamLimits

0xe89c,	// (0x0004dc54) popup_slider_window_g5

0xe8d0,	// (0x0004dc88) popup_slider_window_g6_ParamLimits

0xe8d0,	// (0x0004dc88) popup_slider_window_g6

0x9091,	// (0x00048449) popup_slider_window_t2_ParamLimits

0x9091,	// (0x00048449) popup_slider_window_t2

0x0001,

0xfce0,	// (0x0004f098) popup_slider_window_t_ParamLimits

0xfce0,	// (0x0004f098) popup_slider_window_t

0xe8ec,	// (0x0004dca4) slider_pane_ParamLimits

0xe8ec,	// (0x0004dca4) slider_pane

0x9dcc,	// (0x00049184) slider_pane_g1_ParamLimits

0x9dcc,	// (0x00049184) slider_pane_g1

0x9de0,	// (0x00049198) slider_pane_g2_ParamLimits

0x9de0,	// (0x00049198) slider_pane_g2

0x9df6,	// (0x000491ae) slider_pane_g3_ParamLimits

0x9df6,	// (0x000491ae) slider_pane_g3

0x0003,

0xfdf7,	// (0x0004f1af) slider_pane_g_ParamLimits

0xfdf7,	// (0x0004f1af) slider_pane_g

0xc8b2,	// (0x0004bc6a) popup_tb_float_extension_window_ParamLimits

0xc8b2,	// (0x0004bc6a) popup_tb_float_extension_window

0x9e22,	// (0x000491da) aid_size_cell_tb_float_ext

0x35bb,	// (0x00042973) bg_popup_sub_window_cp28

0x9e2e,	// (0x000491e6) grid_tb_float_ext_pane

0x9e38,	// (0x000491f0) cell_tb_float_ext_pane_ParamLimits

0x9e38,	// (0x000491f0) cell_tb_float_ext_pane

0x9e52,	// (0x0004920a) cell_tb_float_ext_pane_g1

0x9e5b,	// (0x00049213) grid_highlight_pane_cp12

0xc9fd,	// (0x0004bdb5) cell_last_hwr_side_pane_ParamLimits

0xc9fd,	// (0x0004bdb5) cell_last_hwr_side_pane

0x79cc,	// (0x00046d84) cell_last_hwr_side_pane_g1

0x9e64,	// (0x0004921c) cell_last_hwr_side_pane_g2

0x0001,

0xfe00,	// (0x0004f1b8) cell_last_hwr_side_pane_g

0xcdf3,	// (0x0004c1ab) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcdf3,	// (0x0004c1ab) vkb2_area_bottom_space_btn_pane

0x7c4a,	// (0x00047002) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x990b,	// (0x00048cc3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x30e4,	// (0x0004249c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x3103,	// (0x000424bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x3103,	// (0x000424bb) vkb2_area_bottom_space_btn_pane_g1

0x313d,	// (0x000424f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x313d,	// (0x000424f5) vkb2_area_bottom_space_btn_pane_g2

0x3173,	// (0x0004252b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x3173,	// (0x0004252b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe05,	// (0x0004f1bd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe05,	// (0x0004f1bd) vkb2_area_bottom_space_btn_pane_g

0x265f,	// (0x00041a17) cel_fep_hwr_func_pane_ParamLimits

0x265f,	// (0x00041a17) cel_fep_hwr_func_pane

0xc9d2,	// (0x0004bd8a) cell_hwr_side_button_pane_ParamLimits

0xc9d2,	// (0x0004bd8a) cell_hwr_side_button_pane

0x92e7,	// (0x0004869f) aid_area_touch_clock_ParamLimits

0x3938,	// (0x00042cf0) bg_uniindi_top_pane_ParamLimits

0x92f9,	// (0x000486b1) uniindi_top_pane_g1_ParamLimits

0x930f,	// (0x000486c7) uniindi_top_pane_g2_ParamLimits

0x931b,	// (0x000486d3) uniindi_top_pane_g3_ParamLimits

0x932c,	// (0x000486e4) uniindi_top_pane_g4_ParamLimits

0xfd18,	// (0x0004f0d0) uniindi_top_pane_g_ParamLimits

0x9339,	// (0x000486f1) uniindi_top_pane_t1_ParamLimits

0x3938,	// (0x00042cf0) bg_vkb2_func_pane_cp01_ParamLimits

0x3938,	// (0x00042cf0) bg_vkb2_func_pane_cp01

0x9e6d,	// (0x00049225) cel_fep_hwr_func_pane_g1_ParamLimits

0x9e6d,	// (0x00049225) cel_fep_hwr_func_pane_g1

0x3938,	// (0x00042cf0) bg_vkb2_func_pane_cp02_ParamLimits

0x3938,	// (0x00042cf0) bg_vkb2_func_pane_cp02

0x9e6d,	// (0x00049225) cell_hwr_side_button_pane_g1_ParamLimits

0x9e6d,	// (0x00049225) cell_hwr_side_button_pane_g1

0x52a2,	// (0x0004465a) status_pane_g4_ParamLimits

0x52a2,	// (0x0004465a) status_pane_g4

0x52bc,	// (0x00044674) status_pane_t1

0x7711,	// (0x00046ac9) form2_midp_gauge_slider_cont_pane

0x7719,	// (0x00046ad1) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe170,	// (0x0004d528) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe182,	// (0x0004d53a) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae4,	// (0x0004ee9c) form2_midp_gauge_slider_pane_t_ParamLimits

0x774f,	// (0x00046b07) form2_midp_slider_pane_ParamLimits

0x2ad9,	// (0x00041e91) aid_size_cell_func_vkb2_ParamLimits

0x2ad9,	// (0x00041e91) aid_size_cell_func_vkb2

0x9e0e,	// (0x000491c6) slider_pane_g4_ParamLimits

0x9e0e,	// (0x000491c6) slider_pane_g4

0xce54,	// (0x0004c20c) form2_midp_gauge_slider_pane_t2_cp01

0xce62,	// (0x0004c21a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce62,	// (0x0004c21a) form2_midp_gauge_slider_pane_t3_cp01

0x31e8,	// (0x000425a0) form2_midp_slider_pane_cp01

0x35bb,	// (0x00042973) navi_smil_pane

0x9ea6,	// (0x0004925e) navi_smil_pane_g1

0x9eae,	// (0x00049266) navi_smil_pane_t1

0x9e7b,	// (0x00049233) form2_midp_slider_pane_g1

0x9e84,	// (0x0004923c) form2_midp_slider_pane_g2

0x9e8c,	// (0x00049244) form2_midp_slider_pane_g3

0x9e7b,	// (0x00049233) form2_midp_slider_pane_g4

0xf2a2,	// (0x0004e65a) form2_midp_slider_pane_g5

0x0004,

0xfe0e,	// (0x0004f1c6) form2_midp_slider_pane_g

0x31ad,	// (0x00042565) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x31ad,	// (0x00042565) vkb2_area_bottom_space_btn_pane_g4

0xd886,	// (0x0004cc3e) lc0_navi_pane_ParamLimits

0xd886,	// (0x0004cc3e) lc0_navi_pane

0xd8f0,	// (0x0004cca8) lc0_stat_indi_pane_ParamLimits

0xd8f0,	// (0x0004cca8) lc0_stat_indi_pane

0xd905,	// (0x0004ccbd) ls0_title_pane_ParamLimits

0xd905,	// (0x0004ccbd) ls0_title_pane

0x3f50,	// (0x00043308) bg_popup_sub_pane_cp14_ParamLimits

0x92ce,	// (0x00048686) list_uniindi_pane_ParamLimits

0x92da,	// (0x00048692) uniindi_top_pane_ParamLimits

0x9376,	// (0x0004872e) list_single_uniindi_pane_g1_ParamLimits

0x9389,	// (0x00048741) list_single_uniindi_pane_t1_ParamLimits

0xce7f,	// (0x0004c237) lc0_stat_clock_pane_ParamLimits

0xce7f,	// (0x0004c237) lc0_stat_clock_pane

0xf2ad,	// (0x0004e665) lc0_stat_indi_pane_g1_ParamLimits

0xf2ad,	// (0x0004e665) lc0_stat_indi_pane_g1

0xf2ba,	// (0x0004e672) lc0_stat_indi_pane_g2_ParamLimits

0xf2ba,	// (0x0004e672) lc0_stat_indi_pane_g2

0x0001,

0xfe19,	// (0x0004f1d1) lc0_stat_indi_pane_g_ParamLimits

0xfe19,	// (0x0004f1d1) lc0_stat_indi_pane_g

0xce8c,	// (0x0004c244) lc0_uni_indicator_pane_ParamLimits

0xce8c,	// (0x0004c244) lc0_uni_indicator_pane

0xf2c7,	// (0x0004e67f) ls0_title_pane_g1_ParamLimits

0xf2c7,	// (0x0004e67f) ls0_title_pane_g1

0xf2db,	// (0x0004e693) ls0_title_pane_t1_ParamLimits

0xf2db,	// (0x0004e693) ls0_title_pane_t1

0xce99,	// (0x0004c251) lc0_uni_indicator_pane_g1_ParamLimits

0xce99,	// (0x0004c251) lc0_uni_indicator_pane_g1

0x9f20,	// (0x000492d8) lc0_stat_clock_pane_t1

0x35bb,	// (0x00042973) main_ai5_pane

0x9f2e,	// (0x000492e6) ai5_sk_pane_ParamLimits

0x9f2e,	// (0x000492e6) ai5_sk_pane

0xf309,	// (0x0004e6c1) cell_ai5_widget_pane_ParamLimits

0xf309,	// (0x0004e6c1) cell_ai5_widget_pane

0x9ff6,	// (0x000493ae) aid_size_cell_widget_grid

0xa00c,	// (0x000493c4) bg_ai5_widget_pane_ParamLimits

0xa00c,	// (0x000493c4) bg_ai5_widget_pane

0xa084,	// (0x0004943c) cell_ai5_widget_pane_g2

0xa098,	// (0x00049450) cell_ai5_widget_pane_g3

0xa0b2,	// (0x0004946a) cell_ai5_widget_pane_g4

0xa0c2,	// (0x0004947a) cell_ai5_widget_pane_g5

0xa0d2,	// (0x0004948a) cell_ai5_widget_pane_g6

0xa0de,	// (0x00049496) cell_ai5_widget_pane_g7

0xa126,	// (0x000494de) cell_ai5_widget_pane_t1_ParamLimits

0xa126,	// (0x000494de) cell_ai5_widget_pane_t1

0xa143,	// (0x000494fb) cell_ai5_widget_pane_t2_ParamLimits

0xa143,	// (0x000494fb) cell_ai5_widget_pane_t2

0xa15b,	// (0x00049513) cell_ai5_widget_pane_t3_ParamLimits

0xa15b,	// (0x00049513) cell_ai5_widget_pane_t3

0xa173,	// (0x0004952b) cell_ai5_widget_pane_t4_ParamLimits

0xa173,	// (0x0004952b) cell_ai5_widget_pane_t4

0xa199,	// (0x00049551) cell_ai5_widget_pane_t5_ParamLimits

0xa199,	// (0x00049551) cell_ai5_widget_pane_t5

0xa1b9,	// (0x00049571) cell_ai5_widget_pane_t6_ParamLimits

0xa1b9,	// (0x00049571) cell_ai5_widget_pane_t6

0xa1cb,	// (0x00049583) cell_ai5_widget_pane_t7_ParamLimits

0xa1cb,	// (0x00049583) cell_ai5_widget_pane_t7

0xa1e4,	// (0x0004959c) cell_ai5_widget_pane_t8_ParamLimits

0xa1e4,	// (0x0004959c) cell_ai5_widget_pane_t8

0x0009,

0xfe33,	// (0x0004f1eb) cell_ai5_widget_pane_t_ParamLimits

0xfe33,	// (0x0004f1eb) cell_ai5_widget_pane_t

0xa243,	// (0x000495fb) grid_ai5_widget_pane

0x3f50,	// (0x00043308) highlight_cell_ai5_widget_pane_ParamLimits

0x3f50,	// (0x00043308) highlight_cell_ai5_widget_pane

0xf36f,	// (0x0004e727) ai5_sk_left_pane

0xf379,	// (0x0004e731) ai5_sk_middle_pane

0xf383,	// (0x0004e73b) ai5_sk_right_pane

0xa278,	// (0x00049630) bg_ai5_widget_pane_g1_ParamLimits

0xa278,	// (0x00049630) bg_ai5_widget_pane_g1

0xa284,	// (0x0004963c) bg_ai5_widget_pane_g2_ParamLimits

0xa284,	// (0x0004963c) bg_ai5_widget_pane_g2

0xa290,	// (0x00049648) bg_ai5_widget_pane_g3_ParamLimits

0xa290,	// (0x00049648) bg_ai5_widget_pane_g3

0xa29c,	// (0x00049654) bg_ai5_widget_pane_g4_ParamLimits

0xa29c,	// (0x00049654) bg_ai5_widget_pane_g4

0xa2a8,	// (0x00049660) bg_ai5_widget_pane_g5_ParamLimits

0xa2a8,	// (0x00049660) bg_ai5_widget_pane_g5

0xa2b4,	// (0x0004966c) bg_ai5_widget_pane_g6_ParamLimits

0xa2b4,	// (0x0004966c) bg_ai5_widget_pane_g6

0xa2c0,	// (0x00049678) bg_ai5_widget_pane_g7_ParamLimits

0xa2c0,	// (0x00049678) bg_ai5_widget_pane_g7

0xa2cc,	// (0x00049684) bg_ai5_widget_pane_g8_ParamLimits

0xa2cc,	// (0x00049684) bg_ai5_widget_pane_g8

0xa2d8,	// (0x00049690) bg_ai5_widget_pane_g9_ParamLimits

0xa2d8,	// (0x00049690) bg_ai5_widget_pane_g9

0x0008,

0xfe48,	// (0x0004f200) bg_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0004f200) bg_ai5_widget_pane_g

0xa30a,	// (0x000496c2) cell_shortcut_ai5_widget_pane_ParamLimits

0xa30a,	// (0x000496c2) cell_shortcut_ai5_widget_pane

0x4bd9,	// (0x00043f91) bg_cell_shortcut_ai5_widget_pane

0xa31b,	// (0x000496d3) cell_grid_ai5_widget_pane_g1

0x4bd9,	// (0x00043f91) highlight_cell_shortcut_ai5_widget_pane

0x5431,	// (0x000447e9) ai5_sk_left_pane_g1

0xa324,	// (0x000496dc) ai5_sk_left_pane_g2

0xa32c,	// (0x000496e4) ai5_sk_left_pane_g3

0xa334,	// (0x000496ec) ai5_sk_left_pane_g4

0x0003,

0xfe5b,	// (0x0004f213) ai5_sk_left_pane_g

0xa33c,	// (0x000496f4) ai5_sk_left_pane_t1

0x5429,	// (0x000447e1) ai5_sk_right_pane_g1

0xa34a,	// (0x00049702) ai5_sk_right_pane_g2

0xa352,	// (0x0004970a) ai5_sk_right_pane_g3

0xa35a,	// (0x00049712) ai5_sk_right_pane_g4

0x0003,

0xfe64,	// (0x0004f21c) ai5_sk_right_pane_g

0xa362,	// (0x0004971a) ai5_sk_right_pane_t1

0x5429,	// (0x000447e1) ai5_sk_middle_pane_g1

0x5431,	// (0x000447e9) ai5_sk_middle_pane_g2

0x5449,	// (0x00044801) ai5_sk_middle_pane_g3

0xa352,	// (0x0004970a) ai5_sk_middle_pane_g4

0xa32c,	// (0x000496e4) ai5_sk_middle_pane_g5

0xa370,	// (0x00049728) ai5_sk_middle_pane_g6

0xf38d,	// (0x0004e745) ai5_sk_middle_pane_g7

0x0006,

0xfe6d,	// (0x0004f225) ai5_sk_middle_pane_g

0xd772,	// (0x0004cb2a) aid_touch_area_size_lc0_ParamLimits

0xd772,	// (0x0004cb2a) aid_touch_area_size_lc0

0x27ea,	// (0x00041ba2) cell_hwr_candidate_pane_t1_ParamLimits

0x4f79,	// (0x00044331) aid_touch_navi_pane

0xd9fe,	// (0x0004cdb6) status_dt_navi_pane_ParamLimits

0xd9fe,	// (0x0004cdb6) status_dt_navi_pane

0xda16,	// (0x0004cdce) status_dt_sta_pane_ParamLimits

0xda16,	// (0x0004cdce) status_dt_sta_pane

0xf395,	// (0x0004e74d) dt_sta_controll_pane

0xf3a2,	// (0x0004e75a) dt_sta_indi_pane

0xf3af,	// (0x0004e767) dt_sta_title_pane

0x3938,	// (0x00042cf0) bg_dt_sta_indi_pane_ParamLimits

0x3938,	// (0x00042cf0) bg_dt_sta_indi_pane

0xf3c1,	// (0x0004e779) dt_sta_battery_pane

0xf3c9,	// (0x0004e781) dt_sta_indi_pane_g1

0xa3c2,	// (0x0004977a) dt_sta_indi_pane_g2

0xa3cb,	// (0x00049783) dt_sta_indi_pane_g3

0x0002,

0xfe7c,	// (0x0004f234) dt_sta_indi_pane_g

0xa3d4,	// (0x0004978c) dt_sta_signal_pane

0x3f50,	// (0x00043308) bg_dt_sta_title_pane_ParamLimits

0x3f50,	// (0x00043308) bg_dt_sta_title_pane

0xa3dd,	// (0x00049795) dt_sta_title_pane_g1

0xa3e5,	// (0x0004979d) dt_sta_title_pane_t1_ParamLimits

0xa3e5,	// (0x0004979d) dt_sta_title_pane_t1

0x35bb,	// (0x00042973) bg_dt_sta_control_pane

0xf3d2,	// (0x0004e78a) dt_sta_controll_pane_g1

0xa403,	// (0x000497bb) bg_dt_sta_title_pane_g1

0xa40c,	// (0x000497c4) bg_dt_sta_title_pane_g2

0xa415,	// (0x000497cd) bg_dt_sta_title_pane_g3

0x0002,

0xfe83,	// (0x0004f23b) bg_dt_sta_title_pane_g

0x79cc,	// (0x00046d84) bg_dt_sta_indi_pane_g1

0xa41e,	// (0x000497d6) dt_sta_signal_pane_g1

0xa426,	// (0x000497de) dt_sta_signal_pane_g2

0x0001,

0xfe8a,	// (0x0004f242) dt_sta_signal_pane_g

0xa42e,	// (0x000497e6) dt_sta_battery_pane_g1

0xa437,	// (0x000497ef) dt_sta_battery_pane_t1

0x79cc,	// (0x00046d84) bg_dt_sta_control_pane_g1

0x46d8,	// (0x00043a90) fep_china_uni_eep_pane

0x46e0,	// (0x00043a98) fep_china_uni_entry_pane_ParamLimits

0x46f0,	// (0x00043aa8) popup_fep_china_uni_window_g1_ParamLimits

0x4700,	// (0x00043ab8) popup_fep_china_uni_window_g2_ParamLimits

0x4700,	// (0x00043ab8) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0004eada) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0004eada) popup_fep_china_uni_window_g

0xa446,	// (0x000497fe) fep_china_uni_eep_pane_g1

0xa44e,	// (0x00049806) fep_china_uni_eep_pane_t1

0x9e9d,	// (0x00049255) aid_touch_area_size_smil_player

0x50c9,	// (0x00044481) lc0_clock_pane

0x52b0,	// (0x00044668) status_pane_g5_ParamLimits

0x52b0,	// (0x00044668) status_pane_g5

0xc434,	// (0x0004b7ec) popup_keymap_window

0x526e,	// (0x00044626) status_icon_pane

0xa098,	// (0x00049450) cell_ai5_widget_pane_g3_ParamLimits

0xa0b2,	// (0x0004946a) cell_ai5_widget_pane_g4_ParamLimits

0xa0c2,	// (0x0004947a) cell_ai5_widget_pane_g5_ParamLimits

0xa0ea,	// (0x000494a2) cell_ai5_widget_pane_g8_ParamLimits

0xa0ea,	// (0x000494a2) cell_ai5_widget_pane_g8

0xa0fe,	// (0x000494b6) cell_ai5_widget_pane_g9_ParamLimits

0xa0fe,	// (0x000494b6) cell_ai5_widget_pane_g9

0xa112,	// (0x000494ca) cell_ai5_widget_pane_g10_ParamLimits

0xa112,	// (0x000494ca) cell_ai5_widget_pane_g10

0xa45d,	// (0x00049815) status_icon_pane_g1

0x35bb,	// (0x00042973) bg_popup_sub_pane_cp13

0xa465,	// (0x0004981d) popup_keymap_window_t1

0xd700,	// (0x0004cab8) control_pane_g6_ParamLimits

0xd700,	// (0x0004cab8) control_pane_g6

0xd70d,	// (0x0004cac5) control_pane_g7_ParamLimits

0xd70d,	// (0x0004cac5) control_pane_g7

0xd71a,	// (0x0004cad2) control_pane_g8_ParamLimits

0xd71a,	// (0x0004cad2) control_pane_g8

0xf395,	// (0x0004e74d) dt_sta_controll_pane_ParamLimits

0xf3a2,	// (0x0004e75a) dt_sta_indi_pane_ParamLimits

0xf3af,	// (0x0004e767) dt_sta_title_pane_ParamLimits

0x3e7c,	// (0x00043234) aid_size_touch_scroll_bar_cale

0x11ba,	// (0x00040572) popup_discreet_window_ParamLimits

0x11ba,	// (0x00040572) popup_discreet_window

0xbfcb,	// (0x0004b383) popup_sk_window

0x5ab4,	// (0x00044e6c) bg_popup_sub_pane_cp28_ParamLimits

0x5ab4,	// (0x00044e6c) bg_popup_sub_pane_cp28

0xa473,	// (0x0004982b) popup_discreet_window_g1_ParamLimits

0xa473,	// (0x0004982b) popup_discreet_window_g1

0xa493,	// (0x0004984b) popup_discreet_window_t1_ParamLimits

0xa493,	// (0x0004984b) popup_discreet_window_t1

0xa4b1,	// (0x00049869) popup_discreet_window_t2_ParamLimits

0xa4b1,	// (0x00049869) popup_discreet_window_t2

0x0002,

0xfe8f,	// (0x0004f247) popup_discreet_window_t_ParamLimits

0xfe8f,	// (0x0004f247) popup_discreet_window_t

0x321f,	// (0x000425d7) popup_sk_window_g1

0x3229,	// (0x000425e1) popup_sk_window_g2

0x0001,

0xfe96,	// (0x0004f24e) popup_sk_window_g

0x3231,	// (0x000425e9) popup_sk_window_t1

0x323f,	// (0x000425f7) popup_sk_window_t1_copy1

0xa084,	// (0x0004943c) cell_ai5_widget_pane_g2_ParamLimits

0xa1f6,	// (0x000495ae) cell_ai5_widget_pane_t9_ParamLimits

0xa1f6,	// (0x000495ae) cell_ai5_widget_pane_t9

0x35bb,	// (0x00042973) main_fep_fshwr2_pane

0xcec0,	// (0x0004c278) aid_fshwr2_btn_pane

0xced4,	// (0x0004c28c) aid_fshwr2_syb_pane

0xcee8,	// (0x0004c2a0) aid_fshwr2_txt_pane

0xcef8,	// (0x0004c2b0) fshwr2_func_candi_pane

0xcf18,	// (0x0004c2d0) fshwr2_hwr_syb_pane

0xcf3a,	// (0x0004c2f2) fshwr2_icf_pane

0x35bb,	// (0x00042973) fshwr2_icf_bg_pane

0x32d9,	// (0x00042691) fshwr2_icf_pane_t1_ParamLimits

0x32d9,	// (0x00042691) fshwr2_icf_pane_t1

0x45c6,	// (0x0004397e) fshwr2_func_candi_pane_g1

0xf3db,	// (0x0004e793) fshwr2_func_candi_row_pane_ParamLimits

0xf3db,	// (0x0004e793) fshwr2_func_candi_row_pane

0xcf6a,	// (0x0004c322) cell_fshwr2_syb_pane_ParamLimits

0xcf6a,	// (0x0004c322) cell_fshwr2_syb_pane

0x9e6d,	// (0x00049225) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9e6d,	// (0x00049225) fshwr2_hwr_syb_pane_g1

0x35bb,	// (0x00042973) bg_popup_call_pane_cp01

0xcf90,	// (0x0004c348) fshwr2_func_candi_cell_pane_ParamLimits

0xcf90,	// (0x0004c348) fshwr2_func_candi_cell_pane

0xf3fe,	// (0x0004e7b6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf3fe,	// (0x0004e7b6) fshwr2_func_candi_cell_bg_pane

0xcfdb,	// (0x0004c393) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcfdb,	// (0x0004c393) fshwr2_func_candi_cell_pane_g1

0xd012,	// (0x0004c3ca) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd012,	// (0x0004c3ca) fshwr2_func_candi_cell_pane_t1

0x35bb,	// (0x00042973) bg_button_pane_cp08

0xa534,	// (0x000498ec) cell_fshwr2_syb_bg_pane

0xd02d,	// (0x0004c3e5) cell_fshwr2_syb_bg_pane_g1

0xd040,	// (0x0004c3f8) cell_fshwr2_syb_bg_pane_t1

0x3f50,	// (0x00043308) main_tmo_pane

0xdcd4,	// (0x0004d08c) uni_indicator_pane_g1_ParamLimits

0xdce9,	// (0x0004d0a1) uni_indicator_pane_g2_ParamLimits

0xdcff,	// (0x0004d0b7) uni_indicator_pane_g3_ParamLimits

0x65f7,	// (0x000459af) uni_indicator_pane_g4_ParamLimits

0x65f7,	// (0x000459af) uni_indicator_pane_g4

0x660b,	// (0x000459c3) uni_indicator_pane_g5_ParamLimits

0x660b,	// (0x000459c3) uni_indicator_pane_g5

0x660b,	// (0x000459c3) uni_indicator_pane_g6_ParamLimits

0x660b,	// (0x000459c3) uni_indicator_pane_g6

0xf921,	// (0x0004ecd9) uni_indicator_pane_g_ParamLimits

0xe786,	// (0x0004db3e) popup_tmo_note_window_ParamLimits

0xe786,	// (0x0004db3e) popup_tmo_note_window

0x3f50,	// (0x00043308) fshwr2_bg_pane

0xd003,	// (0x0004c3bb) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd003,	// (0x0004c3bb) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9b,	// (0x0004f253) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9b,	// (0x0004f253) fshwr2_func_candi_cell_pane_g

0x79cc,	// (0x00046d84) bg_popup_window_pane_cp01

0x33c2,	// (0x0004277a) bg_popup_window_pane_g1_cp01

0xa540,	// (0x000498f8) bg_popup_window_pane_cp22_ParamLimits

0xa540,	// (0x000498f8) bg_popup_window_pane_cp22

0xa54e,	// (0x00049906) listscroll_tmo_link_pane_ParamLimits

0xa54e,	// (0x00049906) listscroll_tmo_link_pane

0xa58e,	// (0x00049946) popup_tmo_note_window_g1_ParamLimits

0xa58e,	// (0x00049946) popup_tmo_note_window_g1

0xa59b,	// (0x00049953) tmo_note_info_pane_ParamLimits

0xa59b,	// (0x00049953) tmo_note_info_pane

0xf40a,	// (0x0004e7c2) list_tmo_note_info_pane_g1_ParamLimits

0xf40a,	// (0x0004e7c2) list_tmo_note_info_pane_g1

0xa5cc,	// (0x00049984) list_tmo_note_info_pane_g2_ParamLimits

0xa5cc,	// (0x00049984) list_tmo_note_info_pane_g2

0x0001,

0xfea0,	// (0x0004f258) list_tmo_note_info_pane_g_ParamLimits

0xfea0,	// (0x0004f258) list_tmo_note_info_pane_g

0xa5e8,	// (0x000499a0) list_tmo_note_info_text_pane_ParamLimits

0xa5e8,	// (0x000499a0) list_tmo_note_info_text_pane

0xa669,	// (0x00049a21) list_tmo_link_pane

0xa676,	// (0x00049a2e) scroll_pane_cp20

0xa683,	// (0x00049a3b) list_single_tmo_link_pane_ParamLimits

0xa683,	// (0x00049a3b) list_single_tmo_link_pane

0xa693,	// (0x00049a4b) list_single_tmo_link_pane_t1

0xa6a1,	// (0x00049a59) list_tmo_note_info_text_pane_t1_ParamLimits

0xa6a1,	// (0x00049a59) list_tmo_note_info_text_pane_t1

0xd3c8,	// (0x0004c780) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd3c8,	// (0x0004c780) aid_size_touch_scroll_bar_cp01

0xbb9d,	// (0x0004af55) aid_size_touch_slider_marker

0xbfbb,	// (0x0004b373) popup_settings_window_ParamLimits

0xbfbb,	// (0x0004b373) popup_settings_window

0x0706,	// (0x0003fabe) popup_candi_list_indi_window

0x4f79,	// (0x00044331) aid_touch_navi_pane_ParamLimits

0x2a32,	// (0x00041dea) rs_clock_indi_pane

0x2a3b,	// (0x00041df3) sctrl_sk_bottom_pane_ParamLimits

0x2a4c,	// (0x00041e04) sctrl_sk_top_pane_ParamLimits

0x2b33,	// (0x00041eeb) popup_fep_tooltip_window

0x9ff6,	// (0x000493ae) aid_size_cell_widget_grid_ParamLimits

0xa06f,	// (0x00049427) cell_ai5_widget_pane_g1_ParamLimits

0xa06f,	// (0x00049427) cell_ai5_widget_pane_g1

0xa0d2,	// (0x0004948a) cell_ai5_widget_pane_g6_ParamLimits

0xa0de,	// (0x00049496) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1e,	// (0x0004f1d6) cell_ai5_widget_pane_g_ParamLimits

0xfe1e,	// (0x0004f1d6) cell_ai5_widget_pane_g

0xa225,	// (0x000495dd) cell_ai5_widget_pane_t10_ParamLimits

0xa225,	// (0x000495dd) cell_ai5_widget_pane_t10

0xa243,	// (0x000495fb) grid_ai5_widget_pane_ParamLimits

0xa2e4,	// (0x0004969c) cell_contacts_ai5_widget_pane_ParamLimits

0xa2e4,	// (0x0004969c) cell_contacts_ai5_widget_pane

0xa4c6,	// (0x0004987e) popup_discreet_window_t3_ParamLimits

0xa4c6,	// (0x0004987e) popup_discreet_window_t3

0xcf56,	// (0x0004c30e) popup_fshwr2_char_preview_window_ParamLimits

0xcf56,	// (0x0004c30e) popup_fshwr2_char_preview_window

0xf421,	// (0x0004e7d9) tmo_note_info_pane_t1

0xf436,	// (0x0004e7ee) tmo_note_info_pane_t2

0xf44d,	// (0x0004e805) tmo_note_info_pane_t3

0xa645,	// (0x000499fd) tmo_note_info_pane_t4

0xa657,	// (0x00049a0f) tmo_note_info_pane_t5

0x0004,

0xfea5,	// (0x0004f25d) tmo_note_info_pane_t

0xa669,	// (0x00049a21) list_tmo_link_pane_ParamLimits

0xa676,	// (0x00049a2e) scroll_pane_cp20_ParamLimits

0x35bb,	// (0x00042973) bg_popup_fep_char_preview_window_cp01

0xa6ba,	// (0x00049a72) popup_fshwr2_char_preview_window_t1

0xa6c8,	// (0x00049a80) popup_candi_list_indi_window_g1

0xa6d1,	// (0x00049a89) bg_cell_contacts_ai5_widget_pane

0xa6dd,	// (0x00049a95) cell_contacts_ai5_widget_pane_g1

0x80b8,	// (0x00047470) cell_contacts_ai5_widget_pane_g2

0xa6f2,	// (0x00049aaa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb0,	// (0x0004f268) cell_contacts_ai5_widget_pane_g

0xa6fe,	// (0x00049ab6) cell_contacts_ai5_widget_pane_t1

0x3f50,	// (0x00043308) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa775,	// (0x00049b2d) settings_container_pane

0x4bd9,	// (0x00043f91) listscroll_set_pane_copy1

0x70dc,	// (0x00046494) scroll_pane_cp121_copy1

0x5859,	// (0x00044c11) set_content_pane_copy1

0xa781,	// (0x00049b39) aid_height_set_list_copy1_ParamLimits

0xa781,	// (0x00049b39) aid_height_set_list_copy1

0x6803,	// (0x00045bbb) aid_size_parent_copy1_ParamLimits

0x6803,	// (0x00045bbb) aid_size_parent_copy1

0xa78d,	// (0x00049b45) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa78d,	// (0x00049b45) button_value_adjust_pane_cp6_copy1

0x4efd,	// (0x000442b5) list_highlight_pane_cp2_copy1_ParamLimits

0x4efd,	// (0x000442b5) list_highlight_pane_cp2_copy1

0xa7a1,	// (0x00049b59) list_set_pane_copy1_ParamLimits

0xa7a1,	// (0x00049b59) list_set_pane_copy1

0xa710,	// (0x00049ac8) main_pane_set_t1_copy1_ParamLimits

0xa710,	// (0x00049ac8) main_pane_set_t1_copy1

0xa74a,	// (0x00049b02) main_pane_set_t2_copy1_ParamLimits

0xa74a,	// (0x00049b02) main_pane_set_t2_copy1

0xa84e,	// (0x00049c06) main_pane_set_t3_copy1

0xa85c,	// (0x00049c14) main_pane_set_t4_copy1

0xa769,	// (0x00049b21) set_content_pane_g1_copy1_ParamLimits

0xa769,	// (0x00049b21) set_content_pane_g1_copy1

0xa86a,	// (0x00049c22) setting_code_pane_copy1

0xa872,	// (0x00049c2a) setting_slider_graphic_pane_copy1

0xa872,	// (0x00049c2a) setting_slider_pane_copy1

0xa872,	// (0x00049c2a) setting_text_pane_copy1

0xa872,	// (0x00049c2a) setting_volume_pane_copy1

0xa86a,	// (0x00049c22) settings_code_pane_cp2_copy1

0xa87a,	// (0x00049c32) settings_code_pane_cp_copy1_ParamLimits

0xa87a,	// (0x00049c32) settings_code_pane_cp_copy1

0x33cb,	// (0x00042783) volume_set_pane_copy1

0xa88e,	// (0x00049c46) volume_set_pane_g10_copy1

0xa896,	// (0x00049c4e) volume_set_pane_g1_copy1

0xa89e,	// (0x00049c56) volume_set_pane_g2_copy1

0xa8a6,	// (0x00049c5e) volume_set_pane_g3_copy1

0xa8ae,	// (0x00049c66) volume_set_pane_g4_copy1

0xa8b6,	// (0x00049c6e) volume_set_pane_g5_copy1

0xa8be,	// (0x00049c76) volume_set_pane_g6_copy1

0xa8c6,	// (0x00049c7e) volume_set_pane_g7_copy1

0xa8ce,	// (0x00049c86) volume_set_pane_g8_copy1

0xa8d6,	// (0x00049c8e) volume_set_pane_g9_copy1

0x36af,	// (0x00042a67) bg_set_opt_pane_cp_copy1_ParamLimits

0x36af,	// (0x00042a67) bg_set_opt_pane_cp_copy1

0x33d3,	// (0x0004278b) setting_slider_pane_t1_copy1_ParamLimits

0x33d3,	// (0x0004278b) setting_slider_pane_t1_copy1

0x33f1,	// (0x000427a9) setting_slider_pane_t2_copy1_ParamLimits

0x33f1,	// (0x000427a9) setting_slider_pane_t2_copy1

0x340b,	// (0x000427c3) setting_slider_pane_t3_copy1_ParamLimits

0x340b,	// (0x000427c3) setting_slider_pane_t3_copy1

0x3423,	// (0x000427db) slider_set_pane_copy1_ParamLimits

0x3423,	// (0x000427db) slider_set_pane_copy1

0x3f9c,	// (0x00043354) set_opt_bg_pane_g1_copy2

0x3fa4,	// (0x0004335c) set_opt_bg_pane_g2_copy2

0xa8de,	// (0x00049c96) set_opt_bg_pane_g3_copy2

0x3fb4,	// (0x0004336c) set_opt_bg_pane_g4_copy2

0x3fbc,	// (0x00043374) set_opt_bg_pane_g5_copy2

0x3fc4,	// (0x0004337c) set_opt_bg_pane_g6_copy2

0xa8e8,	// (0x00049ca0) set_opt_bg_pane_g7_copy2

0xa8f0,	// (0x00049ca8) set_opt_bg_pane_g8_copy2

0xa8fa,	// (0x00049cb2) set_opt_bg_pane_g9_copy2

0x3439,	// (0x000427f1) aid_size_touch_slider_mark_copy1_ParamLimits

0x3439,	// (0x000427f1) aid_size_touch_slider_mark_copy1

0xa904,	// (0x00049cbc) slider_set_pane_g1_copy1

0x344d,	// (0x00042805) slider_set_pane_g2_copy1

0x236d,	// (0x00041725) slider_set_pane_g3_copy1_ParamLimits

0x236d,	// (0x00041725) slider_set_pane_g3_copy1

0x2381,	// (0x00041739) slider_set_pane_g4_copy1_ParamLimits

0x2381,	// (0x00041739) slider_set_pane_g4_copy1

0x2399,	// (0x00041751) slider_set_pane_g5_copy1_ParamLimits

0x2399,	// (0x00041751) slider_set_pane_g5_copy1

0x236d,	// (0x00041725) slider_set_pane_g6_copy1_ParamLimits

0x236d,	// (0x00041725) slider_set_pane_g6_copy1

0x3455,	// (0x0004280d) slider_set_pane_g7_copy1_ParamLimits

0x3455,	// (0x0004280d) slider_set_pane_g7_copy1

0x35cf,	// (0x00042987) bg_set_opt_pane_cp2_copy1

0xa90d,	// (0x00049cc5) setting_slider_graphic_pane_g1_copy1

0xa916,	// (0x00049cce) setting_slider_graphic_pane_t1_copy1

0xa926,	// (0x00049cde) setting_slider_graphic_pane_t2_copy1

0xa936,	// (0x00049cee) slider_set_pane_cp_copy1

0xa946,	// (0x00049cfe) input_focus_pane_cp1_copy1

0xa94f,	// (0x00049d07) list_set_text_pane_copy1

0xa957,	// (0x00049d0f) setting_text_pane_g1_copy1

0x0f31,	// (0x000402e9) set_text_pane_t1_copy1

0xa946,	// (0x00049cfe) input_focus_pane_cp2_copy1

0xa957,	// (0x00049d0f) setting_code_pane_g1_copy1

0xa960,	// (0x00049d18) setting_code_pane_t1_copy1

0xa96e,	// (0x00049d26) list_set_graphic_pane_copy1

0x35cf,	// (0x00042987) bg_set_opt_pane_cp4_copy1

0x48d4,	// (0x00043c8c) list_set_graphic_pane_g1_copy1_ParamLimits

0x48d4,	// (0x00043c8c) list_set_graphic_pane_g1_copy1

0xa981,	// (0x00049d39) list_set_graphic_pane_g2_copy1

0x48ec,	// (0x00043ca4) list_set_graphic_pane_t1_copy1_ParamLimits

0x48ec,	// (0x00043ca4) list_set_graphic_pane_t1_copy1

0x79cc,	// (0x00046d84) rs_clock_indi_pane_g1

0xa989,	// (0x00049d41) rs_clock_indi_pane_t1

0xa997,	// (0x00049d4f) rs_indi_pane

0xa99f,	// (0x00049d57) rs_indi_pane_g1

0xa9a8,	// (0x00049d60) rs_indi_pane_g2

0xa9b1,	// (0x00049d69) rs_indi_pane_g3

0x0002,

0xfeb7,	// (0x0004f26f) rs_indi_pane_g

0x4bd9,	// (0x00043f91) bg_popup_preview_window_pane_cp03

0xa9ba,	// (0x00049d72) popup_fep_tooltip_window_t1

0x8654,	// (0x00047a0c) popup_note2_window_g2_ParamLimits

0x8654,	// (0x00047a0c) popup_note2_window_g2

0x0001,

0xfc50,	// (0x0004f008) popup_note2_window_g_ParamLimits

0xfc50,	// (0x0004f008) popup_note2_window_g

0x8b4f,	// (0x00047f07) bg_popup_sub_pane_cp11_ParamLimits

0x8b5c,	// (0x00047f14) cell_ai3_links_pane_g1_ParamLimits

0x8b73,	// (0x00047f2b) cell_ai3_links_pane_t1

0x0f31,	// (0x000402e9) set_text_pane_t1_copy1_ParamLimits

0x4aea,	// (0x00043ea2) cell_graphic_popup_pane_cp2_ParamLimits

0x4aea,	// (0x00043ea2) cell_graphic_popup_pane_cp2

0xa9c8,	// (0x00049d80) cell_graphic_popup_pane_g1_cp2

0x3c8f,	// (0x00043047) cell_graphic_popup_pane_g2_cp2

0xa9d0,	// (0x00049d88) cell_graphic_popup_pane_g3_cp2

0xa9d8,	// (0x00049d90) cell_graphic_popup_pane_t2_cp2

0x3ca0,	// (0x00043058) grid_highlight_pane_cp3_cp2

0x42e1,	// (0x00043699) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f50,	// (0x00043308) main_tmo_pane_ParamLimits

0xe77a,	// (0x0004db32) popup_tmo_big_image_note_window

0xa05e,	// (0x00049416) cell_ai5_widget_list_pane

0xa066,	// (0x0004941e) cell_ai5_widget_lrg_icon_pane

0xf421,	// (0x0004e7d9) tmo_note_info_pane_t1_ParamLimits

0xf436,	// (0x0004e7ee) tmo_note_info_pane_t2_ParamLimits

0xf44d,	// (0x0004e805) tmo_note_info_pane_t3_ParamLimits

0xa645,	// (0x000499fd) tmo_note_info_pane_t4_ParamLimits

0xa657,	// (0x00049a0f) tmo_note_info_pane_t5_ParamLimits

0xfea5,	// (0x0004f25d) tmo_note_info_pane_t_ParamLimits

0xa775,	// (0x00049b2d) settings_container_pane_ParamLimits

0xa93e,	// (0x00049cf6) indicator_popup_pane_cp5

0xa93e,	// (0x00049cf6) indicator_popup_pane_cp6

0xa96e,	// (0x00049d26) list_set_graphic_pane_copy1_ParamLimits

0x35bb,	// (0x00042973) bg_popup_window_pane_cp23

0xa9e6,	// (0x00049d9e) popup_tmo_big_image_note_window_g1

0xa9f0,	// (0x00049da8) popup_tmo_big_image_note_window_t1

0xaa00,	// (0x00049db8) popup_tmo_big_image_note_window_t2

0xaa10,	// (0x00049dc8) popup_tmo_big_image_note_window_t3

0x0002,

0xfebe,	// (0x0004f276) popup_tmo_big_image_note_window_t

0x79cc,	// (0x00046d84) cell_ai5_widget_lrg_icon_pane_g1

0xaa20,	// (0x00049dd8) cell_ai5_widget_lrg_icon_pane_t1

0xaa2e,	// (0x00049de6) cell_ai5_widget_list_row_pane_ParamLimits

0xaa2e,	// (0x00049de6) cell_ai5_widget_list_row_pane

0xaa45,	// (0x00049dfd) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xaa45,	// (0x00049dfd) cell_ai5_widget_list_row_pane_g1

0xaa52,	// (0x00049e0a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xaa52,	// (0x00049e0a) cell_ai5_widget_list_row_pane_t1

0xaa83,	// (0x00049e3b) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xaa83,	// (0x00049e3b) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec5,	// (0x0004f27d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec5,	// (0x0004f27d) cell_ai5_widget_list_row_pane_t

0x35bb,	// (0x00042973) main_fep_vtchi_ss_pane

0xaacb,	// (0x00049e83) popup_fep_char_pre_window

0xaad3,	// (0x00049e8b) popup_fep_ituss_window

0xf471,	// (0x0004e829) popup_fep_vkbss_window

0xf47e,	// (0x0004e836) grid_vkbss_keypad_pane_ParamLimits

0xf47e,	// (0x0004e836) grid_vkbss_keypad_pane

0xab39,	// (0x00049ef1) ituss_keypad_pane

0x3477,	// (0x0004282f) aid_vkbss_key_offset_ParamLimits

0x3477,	// (0x0004282f) aid_vkbss_key_offset

0xd056,	// (0x0004c40e) cell_vkbss_key_pane_ParamLimits

0xd056,	// (0x0004c40e) cell_vkbss_key_pane

0xab48,	// (0x00049f00) bg_cell_vkbss_key_g1_ParamLimits

0xab48,	// (0x00049f00) bg_cell_vkbss_key_g1

0xf48e,	// (0x0004e846) cell_vkbss_key_3p_pane_ParamLimits

0xf48e,	// (0x0004e846) cell_vkbss_key_3p_pane

0xf4a8,	// (0x0004e860) cell_vkbss_key_g1_ParamLimits

0xf4a8,	// (0x0004e860) cell_vkbss_key_g1

0xf4c2,	// (0x0004e87a) cell_vkbss_key_t1_ParamLimits

0xf4c2,	// (0x0004e87a) cell_vkbss_key_t1

0x3499,	// (0x00042851) cell_ituss_key_pane_ParamLimits

0x3499,	// (0x00042851) cell_ituss_key_pane

0xaba7,	// (0x00049f5f) bg_cell_ituss_key_g1_ParamLimits

0xaba7,	// (0x00049f5f) bg_cell_ituss_key_g1

0xabb3,	// (0x00049f6b) cell_ituss_key_pane_g1_ParamLimits

0xabb3,	// (0x00049f6b) cell_ituss_key_pane_g1

0x34aa,	// (0x00042862) cell_ituss_key_pane_g2_ParamLimits

0x34aa,	// (0x00042862) cell_ituss_key_pane_g2

0x0002,

0xfecc,	// (0x0004f284) cell_ituss_key_pane_g_ParamLimits

0xfecc,	// (0x0004f284) cell_ituss_key_pane_g

0x34d6,	// (0x0004288e) cell_ituss_key_t1_ParamLimits

0x34d6,	// (0x0004288e) cell_ituss_key_t1

0x3510,	// (0x000428c8) cell_ituss_key_t2_ParamLimits

0x3510,	// (0x000428c8) cell_ituss_key_t2

0x3541,	// (0x000428f9) cell_ituss_key_t3_ParamLimits

0x3541,	// (0x000428f9) cell_ituss_key_t3

0x3510,	// (0x000428c8) cell_ituss_key_t4_ParamLimits

0x3510,	// (0x000428c8) cell_ituss_key_t4

0x0004,

0xfed3,	// (0x0004f28b) cell_ituss_key_t_ParamLimits

0xfed3,	// (0x0004f28b) cell_ituss_key_t

0xabdf,	// (0x00049f97) cell_vkbss_key_3p_pane_g1

0xabe7,	// (0x00049f9f) cell_vkbss_key_3p_pane_g2

0xabef,	// (0x00049fa7) cell_vkbss_key_3p_pane_g3

0x0002,

0xfede,	// (0x0004f296) cell_vkbss_key_3p_pane_g

0x4bd9,	// (0x00043f91) bg_popup_fep_char_preview_window_cp02

0xabf7,	// (0x00049faf) popup_fep_char_pre_window_t1

0xf365,	// (0x0004e71d) main_ai5_sk_pane

0xa6d1,	// (0x00049a89) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa6dd,	// (0x00049a95) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x80b8,	// (0x00047470) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa6f2,	// (0x00049aaa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb0,	// (0x0004f268) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa6fe,	// (0x00049ab6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f50,	// (0x00043308) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4ed,	// (0x0004e8a5) main_ai5_sk_pane_g1

0x58ed,	// (0x00044ca5) popup_query_code_window_g1

0xf462,	// (0x0004e81a) popup_fep_vkb_icf_pane

0xab13,	// (0x00049ecb) popup_fep_vtchi_icf_pane

0xac0e,	// (0x00049fc6) bg_icf_pane

0xac1a,	// (0x00049fd2) list_vkb_icf_pane

0xac29,	// (0x00049fe1) bg_icf_pane_cp01

0xac3c,	// (0x00049ff4) vtchi_icf_list_pane

0xf4f6,	// (0x0004e8ae) list_vkb_icf_pane_t1_ParamLimits

0xf4f6,	// (0x0004e8ae) list_vkb_icf_pane_t1

0xac6d,	// (0x0004a025) vtchi_icf_list_pane_t1_ParamLimits

0xac6d,	// (0x0004a025) vtchi_icf_list_pane_t1

0xaad3,	// (0x00049e8b) popup_fep_ituss_window_ParamLimits

0xab13,	// (0x00049ecb) popup_fep_vtchi_icf_pane_ParamLimits

0xab39,	// (0x00049ef1) ituss_keypad_pane_ParamLimits

0x346b,	// (0x00042823) ituss_sks_pane

0xac0e,	// (0x00049fc6) bg_icf_pane_ParamLimits

0xaaab,	// (0x00049e63) icf_edit_indi_pane_ParamLimits

0xaaab,	// (0x00049e63) icf_edit_indi_pane

0xac1a,	// (0x00049fd2) list_vkb_icf_pane_ParamLimits

0xac29,	// (0x00049fe1) bg_icf_pane_cp01_ParamLimits

0xaabe,	// (0x00049e76) icf_edit_indi_pane_cp01_ParamLimits

0xaabe,	// (0x00049e76) icf_edit_indi_pane_cp01

0xac44,	// (0x00049ffc) vtchi_query_pane

0x9e6d,	// (0x00049225) icf_edit_indi_pane_g1_ParamLimits

0x9e6d,	// (0x00049225) icf_edit_indi_pane_g1

0xf50c,	// (0x0004e8c4) icf_edit_indi_pane_g2_ParamLimits

0xf50c,	// (0x0004e8c4) icf_edit_indi_pane_g2

0x0001,

0xfef6,	// (0x0004f2ae) icf_edit_indi_pane_g_ParamLimits

0xfef6,	// (0x0004f2ae) icf_edit_indi_pane_g

0xf51e,	// (0x0004e8d6) icf_edit_indi_pane_t1

0xac87,	// (0x0004a03f) bg_input_focus_pane_cp042

0x3e73,	// (0x0004322b) vtchi_button_pane

0xac90,	// (0x0004a048) vtchi_query_pane_t1

0xac9e,	// (0x0004a056) vtchi_query_pane_t2

0xacac,	// (0x0004a064) vtchi_query_pane_t3

0x0002,

0xfee5,	// (0x0004f29d) vtchi_query_pane_t

0x35bb,	// (0x00042973) bg_button_pane_cp13

0xacba,	// (0x0004a072) vtchi_button_pane_g1

0x3584,	// (0x0004293c) ituss_sks_pane_g1

0x358f,	// (0x00042947) ituss_sks_pane_g2

0x0001,

0xfeec,	// (0x0004f2a4) ituss_sks_pane_g

0xacc2,	// (0x0004a07a) ituss_sks_pane_t1

0xacd0,	// (0x0004a088) ituss_sks_pane_t2

0x0001,

0xfef1,	// (0x0004f2a9) ituss_sks_pane_t

0x7457,	// (0x0004680f) indicator_nsta_pane_cp_g1

0x745f,	// (0x00046817) indicator_nsta_pane_cp_g2

0x7467,	// (0x0004681f) indicator_nsta_pane_cp_g3

0x7457,	// (0x0004680f) indicator_nsta_pane_cp_g4

0x745f,	// (0x00046817) indicator_nsta_pane_cp_g5

0x7467,	// (0x0004681f) indicator_nsta_pane_cp_g6

0x0005,

0xfa9a,	// (0x0004ee52) indicator_nsta_pane_cp_g

0xf17d,	// (0x0004e535) cell_graphic2_pane_t2_ParamLimits

0xf17d,	// (0x0004e535) cell_graphic2_pane_t2

0x0001,

0xfda7,	// (0x0004f15f) cell_graphic2_pane_t_ParamLimits

0xfda7,	// (0x0004f15f) cell_graphic2_pane_t

0xf1b1,	// (0x0004e569) cell_graphic2_control_pane_t1

0xd573,	// (0x0004c92b) signal_pane_g3_ParamLimits

0xd573,	// (0x0004c92b) signal_pane_g3

0xd587,	// (0x0004c93f) signal_pane_g4_ParamLimits

0xd587,	// (0x0004c93f) signal_pane_g4

0xaa95,	// (0x00049e4d) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xaa95,	// (0x00049e4d) cell_ai5_widget_list_row_pane_t3

0xabcd,	// (0x00049f85) cell_ituss_key_pane_t1_ParamLimits

0xabcd,	// (0x00049f85) cell_ituss_key_pane_t1

0x5526,	// (0x000448de) form_field_data_wide_pane_vc_t2_ParamLimits

0x5526,	// (0x000448de) form_field_data_wide_pane_vc_t2

0x553a,	// (0x000448f2) form_field_data_wide_pane_vc_t3_ParamLimits

0x553a,	// (0x000448f2) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0004ebc1) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0004ebc1) form_field_data_wide_pane_vc_t

0x711e,	// (0x000464d6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x711e,	// (0x000464d6) form_field_slider_wide_pane_vc_t3

0x71fc,	// (0x000465b4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x71fc,	// (0x000465b4) form_field_popup_wide_pane_vc_t2

0x7213,	// (0x000465cb) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7213,	// (0x000465cb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa89,	// (0x0004ee41) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x0004ee41) form_field_popup_wide_pane_vc_t

0xcec0,	// (0x0004c278) aid_fshwr2_btn_pane_ParamLimits

0xced4,	// (0x0004c28c) aid_fshwr2_syb_pane_ParamLimits

0xcee8,	// (0x0004c2a0) aid_fshwr2_txt_pane_ParamLimits

0x3f50,	// (0x00043308) fshwr2_bg_pane_ParamLimits

0xcef8,	// (0x0004c2b0) fshwr2_func_candi_pane_ParamLimits

0xcf18,	// (0x0004c2d0) fshwr2_hwr_syb_pane_ParamLimits

0xcf3a,	// (0x0004c2f2) fshwr2_icf_pane_ParamLimits

0x254d,	// (0x00041905) list_double_graphic_pane_vc_g4_ParamLimits

0x254d,	// (0x00041905) list_double_graphic_pane_vc_g4

0x34ca,	// (0x00042882) cell_ituss_key_pane_g3_ParamLimits

0x34ca,	// (0x00042882) cell_ituss_key_pane_g3

0x3572,	// (0x0004292a) cell_ituss_key_t5_ParamLimits

0x3572,	// (0x0004292a) cell_ituss_key_t5

0xf471,	// (0x0004e829) popup_fep_vkbss_window_ParamLimits

0x9fed,	// (0x000493a5) aid_cell_ai5_quarter

0xf51e,	// (0x0004e8d6) icf_edit_indi_pane_t1_ParamLimits

0x39e0,	// (0x00042d98) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x39e0,	// (0x00042d98) aid_tch_indicator_popup_pane_cp2

0x39f3,	// (0x00042dab) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x39f3,	// (0x00042dab) aid_tch_query_popup_data_pane_cp2

0x5895,	// (0x00044c4d) aid_tch_query_popup_pane_ParamLimits

0x5895,	// (0x00044c4d) aid_tch_query_popup_pane

0x5895,	// (0x00044c4d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5895,	// (0x00044c4d) aid_tch_query_popup_data_pane_cp1

0xa534,	// (0x000498ec) cell_fshwr2_syb_bg_pane_ParamLimits

0xd02d,	// (0x0004c3e5) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd040,	// (0x0004c3f8) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf462,	// (0x0004e81a) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large

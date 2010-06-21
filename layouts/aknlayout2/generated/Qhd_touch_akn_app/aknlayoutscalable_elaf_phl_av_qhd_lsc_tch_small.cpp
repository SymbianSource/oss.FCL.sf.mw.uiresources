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

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0001f19b };

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
0xd094,	// (0x0002c22f) Screen

0xd0a0,	// (0x0002c23b) application_window_ParamLimits

0xd0a0,	// (0x0002c23b) application_window

0x3734,	// (0x000228cf) screen_g1

0xc01a,	// (0x0002b1b5) area_bottom_pane_ParamLimits

0xc01a,	// (0x0002b1b5) area_bottom_pane

0x14b8,	// (0x00020653) area_top_pane_ParamLimits

0x14b8,	// (0x00020653) area_top_pane

0x154c,	// (0x000206e7) main_pane_ParamLimits

0x154c,	// (0x000206e7) main_pane

0x373e,	// (0x000228d9) misc_graphics

0xd7dc,	// (0x0002c977) battery_pane_ParamLimits

0xd7dc,	// (0x0002c977) battery_pane

0x5dfc,	// (0x00024f97) bg_status_flat_pane_g8

0x5e04,	// (0x00024f9f) bg_status_flat_pane_g9

0x51de,	// (0x00024379) context_pane_ParamLimits

0x51de,	// (0x00024379) context_pane

0xd947,	// (0x0002cae2) navi_pane_ParamLimits

0xd947,	// (0x0002cae2) navi_pane

0xd9c5,	// (0x0002cb60) signal_pane_ParamLimits

0xd9c5,	// (0x0002cb60) signal_pane

0x0008,

0xf86d,	// (0x0002ea08) bg_status_flat_pane_g

0xda93,	// (0x0002cc2e) status_pane_g1_ParamLimits

0xda93,	// (0x0002cc2e) status_pane_g1

0xdaa9,	// (0x0002cc44) status_pane_g2_ParamLimits

0xdaa9,	// (0x0002cc44) status_pane_g2

0x5405,	// (0x000245a0) status_pane_g3_ParamLimits

0x5405,	// (0x000245a0) status_pane_g3

0x0004,

0xf7a0,	// (0x0002e93b) status_pane_g_ParamLimits

0xf7a0,	// (0x0002e93b) status_pane_g

0xdab5,	// (0x0002cc50) title_pane_ParamLimits

0xdab5,	// (0x0002cc50) title_pane

0xdb18,	// (0x0002ccb3) uni_indicator_pane_ParamLimits

0xdb18,	// (0x0002ccb3) uni_indicator_pane

0x504c,	// (0x000241e7) bg_list_pane_ParamLimits

0x504c,	// (0x000241e7) bg_list_pane

0xd74f,	// (0x0002c8ea) find_pane

0x5604,	// (0x0002479f) listscroll_app_pane_ParamLimits

0x5604,	// (0x0002479f) listscroll_app_pane

0x5078,	// (0x00024213) listscroll_form_pane

0xc37c,	// (0x0002b517) listscroll_gen_pane_ParamLimits

0xc37c,	// (0x0002b517) listscroll_gen_pane

0x1e21,	// (0x00020fbc) listscroll_set_pane

0x6972,	// (0x00025b0d) main_idle_act_pane

0x4d48,	// (0x00023ee3) main_idle_trad_pane

0x4d48,	// (0x00023ee3) main_list_empty_pane

0x506c,	// (0x00024207) main_midp_pane

0x5092,	// (0x0002422d) main_pane_g1_ParamLimits

0x5092,	// (0x0002422d) main_pane_g1

0xc390,	// (0x0002b52b) popup_ai_message_window_ParamLimits

0xc390,	// (0x0002b52b) popup_ai_message_window

0xc421,	// (0x0002b5bc) popup_fep_china_uni_window_ParamLimits

0xc421,	// (0x0002b5bc) popup_fep_china_uni_window

0x1f2b,	// (0x000210c6) popup_fep_japan_candidate_window_ParamLimits

0x1f2b,	// (0x000210c6) popup_fep_japan_candidate_window

0x1f4b,	// (0x000210e6) popup_fep_japan_predictive_window_ParamLimits

0x1f4b,	// (0x000210e6) popup_fep_japan_predictive_window

0xc47d,	// (0x0002b618) popup_find_window

0xc49a,	// (0x0002b635) popup_grid_graphic_window_ParamLimits

0xc49a,	// (0x0002b635) popup_grid_graphic_window

0x1fb2,	// (0x0002114d) popup_large_graphic_colour_window

0xc538,	// (0x0002b6d3) popup_menu_window_ParamLimits

0xc538,	// (0x0002b6d3) popup_menu_window

0xc70a,	// (0x0002b8a5) popup_note_image_window

0xc6d0,	// (0x0002b86b) popup_note_wait_window_ParamLimits

0xc6d0,	// (0x0002b86b) popup_note_wait_window

0xc722,	// (0x0002b8bd) popup_note_window_ParamLimits

0xc722,	// (0x0002b8bd) popup_note_window

0xc7c8,	// (0x0002b963) popup_query_code_window_ParamLimits

0xc7c8,	// (0x0002b963) popup_query_code_window

0x21fa,	// (0x00021395) popup_query_data_code_window_ParamLimits

0x21fa,	// (0x00021395) popup_query_data_code_window

0xc802,	// (0x0002b99d) popup_query_data_window_ParamLimits

0xc802,	// (0x0002b99d) popup_query_data_window

0xc884,	// (0x0002ba1f) popup_query_sat_info_window_ParamLimits

0xc884,	// (0x0002ba1f) popup_query_sat_info_window

0xc91b,	// (0x0002bab6) popup_snote_single_graphic_window_ParamLimits

0xc91b,	// (0x0002bab6) popup_snote_single_graphic_window

0xc91b,	// (0x0002bab6) popup_snote_single_text_window_ParamLimits

0xc91b,	// (0x0002bab6) popup_snote_single_text_window

0x2281,	// (0x0002141c) popup_sub_window_general

0x23b1,	// (0x0002154c) popup_window_general_ParamLimits

0x23b1,	// (0x0002154c) popup_window_general

0x50a0,	// (0x0002423b) power_save_pane

0xc201,	// (0x0002b39c) control_pane_g1_ParamLimits

0xc201,	// (0x0002b39c) control_pane_g1

0xc22a,	// (0x0002b3c5) control_pane_g2_ParamLimits

0xc22a,	// (0x0002b3c5) control_pane_g2

0x500f,	// (0x000241aa) control_pane_g3_ParamLimits

0x500f,	// (0x000241aa) control_pane_g3

0x0007,

0xf788,	// (0x0002e923) control_pane_g_ParamLimits

0xf788,	// (0x0002e923) control_pane_g

0xc26b,	// (0x0002b406) control_pane_t1_ParamLimits

0xc26b,	// (0x0002b406) control_pane_t1

0xc2d1,	// (0x0002b46c) control_pane_t2_ParamLimits

0xc2d1,	// (0x0002b46c) control_pane_t2

0x0002,

0xf799,	// (0x0002e934) control_pane_t_ParamLimits

0xf799,	// (0x0002e934) control_pane_t

0xd681,	// (0x0002c81c) navi_navi_volume_pane_cp1

0xd689,	// (0x0002c824) status_small_icon_pane

0x4f44,	// (0x000240df) status_small_pane_g1_ParamLimits

0x4f44,	// (0x000240df) status_small_pane_g1

0xd691,	// (0x0002c82c) status_small_pane_g2_ParamLimits

0xd691,	// (0x0002c82c) status_small_pane_g2

0xd69d,	// (0x0002c838) status_small_pane_g3_ParamLimits

0xd69d,	// (0x0002c838) status_small_pane_g3

0xd6a9,	// (0x0002c844) status_small_pane_g4_ParamLimits

0xd6a9,	// (0x0002c844) status_small_pane_g4

0xd6b5,	// (0x0002c850) status_small_pane_g5_ParamLimits

0xd6b5,	// (0x0002c850) status_small_pane_g5

0xd6c3,	// (0x0002c85e) status_small_pane_g6_ParamLimits

0xd6c3,	// (0x0002c85e) status_small_pane_g6

0x0007,

0xf777,	// (0x0002e912) status_small_pane_g_ParamLimits

0xf777,	// (0x0002e912) status_small_pane_g

0xd6f2,	// (0x0002c88d) status_small_pane_t1

0xd714,	// (0x0002c8af) status_small_wait_pane_ParamLimits

0xd714,	// (0x0002c8af) status_small_wait_pane

0xd54c,	// (0x0002c6e7) aid_levels_signal_ParamLimits

0xd54c,	// (0x0002c6e7) aid_levels_signal

0xd564,	// (0x0002c6ff) signal_pane_g1_ParamLimits

0xd564,	// (0x0002c6ff) signal_pane_g1

0xd57f,	// (0x0002c71a) signal_pane_g2_ParamLimits

0xd57f,	// (0x0002c71a) signal_pane_g2

0x0003,

0xf708,	// (0x0002e8a3) signal_pane_g_ParamLimits

0xf708,	// (0x0002e8a3) signal_pane_g

0x481c,	// (0x000239b7) context_pane_g1

0xd0b0,	// (0x0002c24b) title_pane_g1

0xd0e7,	// (0x0002c282) title_pane_t1

0x37e6,	// (0x00022981) title_pane_t2

0x380c,	// (0x000229a7) title_pane_t3

0x0002,

0xf557,	// (0x0002e6f2) title_pane_t

0xdb40,	// (0x0002ccdb) aid_levels_battery_ParamLimits

0xdb40,	// (0x0002ccdb) aid_levels_battery

0xdb5c,	// (0x0002ccf7) battery_pane_g1_ParamLimits

0xdb5c,	// (0x0002ccf7) battery_pane_g1

0xdb79,	// (0x0002cd14) battery_pane_g2_ParamLimits

0xdb79,	// (0x0002cd14) battery_pane_g2

0x0001,

0xf7ab,	// (0x0002e946) battery_pane_g_ParamLimits

0xf7ab,	// (0x0002e946) battery_pane_g

0xdd3a,	// (0x0002ced5) uni_indicator_pane_g1

0xdd4f,	// (0x0002ceea) uni_indicator_pane_g2

0xdd65,	// (0x0002cf00) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002eab0) uni_indicator_pane_g

0x4bba,	// (0x00023d55) navi_icon_pane_ParamLimits

0x4bba,	// (0x00023d55) navi_icon_pane

0x4af8,	// (0x00023c93) navi_midp_pane

0x4bd6,	// (0x00023d71) navi_navi_pane

0x4be0,	// (0x00023d7b) navi_text_pane_ParamLimits

0x4be0,	// (0x00023d7b) navi_text_pane

0x3734,	// (0x000228cf) status_small_wait_pane_g1

0x3c61,	// (0x00022dfc) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x0002eaab) status_small_wait_pane_g

0x6457,	// (0x000255f2) navi_navi_icon_text_pane

0x645f,	// (0x000255fa) navi_navi_pane_g1_ParamLimits

0x645f,	// (0x000255fa) navi_navi_pane_g1

0x6471,	// (0x0002560c) navi_navi_pane_g2_ParamLimits

0x6471,	// (0x0002560c) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x0002ea79) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x0002ea79) navi_navi_pane_g

0x6483,	// (0x0002561e) navi_navi_tabs_pane

0x648c,	// (0x00025627) navi_navi_text_pane

0x6457,	// (0x000255f2) navi_navi_volume_pane

0x6433,	// (0x000255ce) navi_text_pane_t1

0x6427,	// (0x000255c2) navi_icon_pane_g1

0x637a,	// (0x00025515) navi_navi_text_pane_t1

0x263b,	// (0x000217d6) navi_navi_volume_pane_g1

0x2643,	// (0x000217de) volume_small_pane

0x62e0,	// (0x0002547b) navi_navi_icon_text_pane_g1

0x62e8,	// (0x00025483) navi_navi_icon_text_pane_t1

0x4bd6,	// (0x00023d71) navi_tabs_2_long_pane

0x4bd6,	// (0x00023d71) navi_tabs_2_pane

0x4bd6,	// (0x00023d71) navi_tabs_3_long_pane

0x4bd6,	// (0x00023d71) navi_tabs_3_pane

0x4bd6,	// (0x00023d71) navi_tabs_4_pane

0x261b,	// (0x000217b6) tabs_2_active_pane_ParamLimits

0x261b,	// (0x000217b6) tabs_2_active_pane

0x262b,	// (0x000217c6) tabs_2_passive_pane_ParamLimits

0x262b,	// (0x000217c6) tabs_2_passive_pane

0x25e9,	// (0x00021784) tabs_3_active_pane_ParamLimits

0x25e9,	// (0x00021784) tabs_3_active_pane

0x25f9,	// (0x00021794) tabs_3_passive_pane_ParamLimits

0x25f9,	// (0x00021794) tabs_3_passive_pane

0x260a,	// (0x000217a5) tabs_3_passive_pane_cp_ParamLimits

0x260a,	// (0x000217a5) tabs_3_passive_pane_cp

0x25a5,	// (0x00021740) tabs_4_active_pane_ParamLimits

0x25a5,	// (0x00021740) tabs_4_active_pane

0x25b6,	// (0x00021751) tabs_4_passive_pane_ParamLimits

0x25b6,	// (0x00021751) tabs_4_passive_pane

0x25c7,	// (0x00021762) tabs_4_passive_pane_cp_ParamLimits

0x25c7,	// (0x00021762) tabs_4_passive_pane_cp

0x25d8,	// (0x00021773) tabs_4_passive_pane_cp2_ParamLimits

0x25d8,	// (0x00021773) tabs_4_passive_pane_cp2

0x2581,	// (0x0002171c) tabs_2_long_active_pane_ParamLimits

0x2581,	// (0x0002171c) tabs_2_long_active_pane

0x2593,	// (0x0002172e) tabs_2_long_passive_pane_ParamLimits

0x2593,	// (0x0002172e) tabs_2_long_passive_pane

0x2542,	// (0x000216dd) tabs_3_long_active_pane_ParamLimits

0x2542,	// (0x000216dd) tabs_3_long_active_pane

0x2555,	// (0x000216f0) tabs_3_long_passive_pane_ParamLimits

0x2555,	// (0x000216f0) tabs_3_long_passive_pane

0x256e,	// (0x00021709) tabs_3_long_passive_pane_cp_ParamLimits

0x256e,	// (0x00021709) tabs_3_long_passive_pane_cp

0x24e8,	// (0x00021683) volume_small_pane_g1

0x24f1,	// (0x0002168c) volume_small_pane_g2

0x24fa,	// (0x00021695) volume_small_pane_g3

0x2503,	// (0x0002169e) volume_small_pane_g4

0x250c,	// (0x000216a7) volume_small_pane_g5

0x2515,	// (0x000216b0) volume_small_pane_g6

0x251e,	// (0x000216b9) volume_small_pane_g7

0x2527,	// (0x000216c2) volume_small_pane_g8

0x2530,	// (0x000216cb) volume_small_pane_g9

0x2539,	// (0x000216d4) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0002ea45) volume_small_pane_g

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp2_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp2

0x382c,	// (0x000229c7) tabs_3_active_pane_g1

0xd173,	// (0x0002c30e) tabs_3_active_pane_t1

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp2_ParamLimits

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp2

0x382c,	// (0x000229c7) tabs_3_passive_pane_g1

0xd173,	// (0x0002c30e) tabs_3_passive_pane_t1

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp3_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp3

0x3846,	// (0x000229e1) tabs_4_active_pane_g1

0xd185,	// (0x0002c320) tabs_4_active_pane_t1

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp3_ParamLimits

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp3

0x3846,	// (0x000229e1) tabs_4_1_passive_pane_g1

0xd185,	// (0x0002c320) tabs_4_1_passive_pane_t1

0x506c,	// (0x00024207) list_highlight_pane_cp2

0xddeb,	// (0x0002cf86) list_set_pane_ParamLimits

0xddeb,	// (0x0002cf86) list_set_pane

0xde85,	// (0x0002d020) main_pane_set_t1_ParamLimits

0xde85,	// (0x0002d020) main_pane_set_t1

0xdea5,	// (0x0002d040) main_pane_set_t2_ParamLimits

0xdea5,	// (0x0002d040) main_pane_set_t2

0xdeb9,	// (0x0002d054) main_pane_set_t3_ParamLimits

0xdeb9,	// (0x0002d054) main_pane_set_t3

0xdecb,	// (0x0002d066) main_pane_set_t4_ParamLimits

0xdecb,	// (0x0002d066) main_pane_set_t4

0x0003,

0xf97a,	// (0x0002eb15) main_pane_set_t_ParamLimits

0xf97a,	// (0x0002eb15) main_pane_set_t

0xdedd,	// (0x0002d078) setting_code_pane

0xdee7,	// (0x0002d082) setting_slider_graphic_pane

0xdee7,	// (0x0002d082) setting_slider_pane

0xdee7,	// (0x0002d082) setting_text_pane

0xdee7,	// (0x0002d082) setting_volume_pane

0x179b,	// (0x00020936) volume_set_pane

0x381e,	// (0x000229b9) bg_set_opt_pane_cp

0x17a3,	// (0x0002093e) setting_slider_pane_t1

0x17bc,	// (0x00020957) setting_slider_pane_t2

0x17d6,	// (0x00020971) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0002e6f9) setting_slider_pane_t

0x17ee,	// (0x00020989) slider_set_pane

0x373e,	// (0x000228d9) bg_set_opt_pane_cp2

0x3860,	// (0x000229fb) setting_slider_graphic_pane_g1

0x1804,	// (0x0002099f) setting_slider_graphic_pane_t1

0x1814,	// (0x000209af) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0002e700) setting_slider_graphic_pane_t

0x1824,	// (0x000209bf) slider_set_pane_cp

0x373e,	// (0x000228d9) input_focus_pane_cp1

0x6959,	// (0x00025af4) list_set_text_pane

0x3734,	// (0x000228cf) setting_text_pane_g1

0x373e,	// (0x000228d9) input_focus_pane_cp2

0x3734,	// (0x000228cf) setting_code_pane_g1

0x3869,	// (0x00022a04) setting_code_pane_t1

0x0235,	// (0x0001f3d0) set_text_pane_t1_ParamLimits

0x0235,	// (0x0001f3d0) set_text_pane_t1

0x410b,	// (0x000232a6) set_opt_bg_pane_g1

0x4113,	// (0x000232ae) set_opt_bg_pane_g2

0x6933,	// (0x00025ace) set_opt_bg_pane_g3

0x4123,	// (0x000232be) set_opt_bg_pane_g4

0x412b,	// (0x000232c6) set_opt_bg_pane_g5

0x4133,	// (0x000232ce) set_opt_bg_pane_g6

0x693d,	// (0x00025ad8) set_opt_bg_pane_g7

0x6945,	// (0x00025ae0) set_opt_bg_pane_g8

0x694f,	// (0x00025aea) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x0002eb02) set_opt_bg_pane_g

0x6926,	// (0x00025ac1) slider_set_pane_g1

0x26b0,	// (0x0002184b) slider_set_pane_g2

0x0006,

0xf958,	// (0x0002eaf3) slider_set_pane_g

0x264c,	// (0x000217e7) volume_set_pane_g1

0x2654,	// (0x000217ef) volume_set_pane_g2

0x265c,	// (0x000217f7) volume_set_pane_g3

0x2664,	// (0x000217ff) volume_set_pane_g4

0x266c,	// (0x00021807) volume_set_pane_g5

0x2674,	// (0x0002180f) volume_set_pane_g6

0x267c,	// (0x00021817) volume_set_pane_g7

0x2684,	// (0x0002181f) volume_set_pane_g8

0x268c,	// (0x00021827) volume_set_pane_g9

0x2694,	// (0x0002182f) volume_set_pane_g10

0x0009,

0xf930,	// (0x0002eacb) volume_set_pane_g

0xd197,	// (0x0002c332) indicator_pane_ParamLimits

0xd197,	// (0x0002c332) indicator_pane

0xd1bf,	// (0x0002c35a) main_idle_pane_g2_ParamLimits

0xd1bf,	// (0x0002c35a) main_idle_pane_g2

0xd1f7,	// (0x0002c392) main_pane_idle_g1_ParamLimits

0xd1f7,	// (0x0002c392) main_pane_idle_g1

0x38b8,	// (0x00022a53) popup_clock_digital_analogue_window_ParamLimits

0x38b8,	// (0x00022a53) popup_clock_digital_analogue_window

0xd21e,	// (0x0002c3b9) soft_indicator_pane_ParamLimits

0xd21e,	// (0x0002c3b9) soft_indicator_pane

0xd238,	// (0x0002c3d3) wallpaper_pane_ParamLimits

0xd238,	// (0x0002c3d3) wallpaper_pane

0x3734,	// (0x000228cf) wallpaper_pane_g1

0xd24a,	// (0x0002c3e5) indicator_pane_g1_ParamLimits

0xd24a,	// (0x0002c3e5) indicator_pane_g1

0x6d5d,	// (0x00025ef8) navi_navi_icon_text_pane_srt_g1

0x390a,	// (0x00022aa5) soft_indicator_pane_t1

0x3924,	// (0x00022abf) aid_ps_area_pane

0xd260,	// (0x0002c3fb) aid_ps_clock_pane

0x3943,	// (0x00022ade) aid_ps_indicator_pane

0x394f,	// (0x00022aea) indicator_ps_pane_ParamLimits

0x394f,	// (0x00022aea) indicator_ps_pane

0x395e,	// (0x00022af9) power_save_pane_g1_ParamLimits

0x395e,	// (0x00022af9) power_save_pane_g1

0x396a,	// (0x00022b05) power_save_pane_g2_ParamLimits

0x396a,	// (0x00022b05) power_save_pane_g2

0x13ac,	// (0x00020547) aid_navinavi_width_pane

0x3924,	// (0x00022abf) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0002e705) power_save_pane_g_ParamLimits

0xf56a,	// (0x0002e705) power_save_pane_g

0x3978,	// (0x00022b13) power_save_pane_t1_ParamLimits

0x3978,	// (0x00022b13) power_save_pane_t1

0xd260,	// (0x0002c3fb) aid_ps_clock_pane_ParamLimits

0x3943,	// (0x00022ade) aid_ps_indicator_pane_ParamLimits

0x398a,	// (0x00022b25) power_save_pane_t4_ParamLimits

0x398a,	// (0x00022b25) power_save_pane_t4

0x0001,

0xf56f,	// (0x0002e70a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0002e70a) power_save_pane_t

0x39b4,	// (0x00022b4f) power_save_t3_ParamLimits

0x39b4,	// (0x00022b4f) power_save_t3

0x399f,	// (0x00022b3a) power_save_t2_ParamLimits

0x399f,	// (0x00022b3a) power_save_t2

0x39c9,	// (0x00022b64) indicator_ps_pane_g1

0xd26e,	// (0x0002c409) ai_gene_pane_ParamLimits

0xd26e,	// (0x0002c409) ai_gene_pane

0xd285,	// (0x0002c420) ai_links_pane_ParamLimits

0xd285,	// (0x0002c420) ai_links_pane

0xd29d,	// (0x0002c438) indicator_pane_cp1_ParamLimits

0xd29d,	// (0x0002c438) indicator_pane_cp1

0xd2ac,	// (0x0002c447) main_pane_idle_g1_cp_ParamLimits

0xd2ac,	// (0x0002c447) main_pane_idle_g1_cp

0x3a02,	// (0x00022b9d) popup_ai_links_title_window

0xd2c4,	// (0x0002c45f) soft_indicator_pane_cp1_ParamLimits

0xd2c4,	// (0x0002c45f) soft_indicator_pane_cp1

0x6720,	// (0x000258bb) ai_links_pane_g1

0x6729,	// (0x000258c4) grid_ai_links_pane

0xdd31,	// (0x0002cecc) ai_gene_pane_1

0x670e,	// (0x000258a9) ai_gene_pane_2

0x6717,	// (0x000258b2) list_highlight_pane_cp4

0xdd0d,	// (0x0002cea8) cell_ai_link_pane_ParamLimits

0xdd0d,	// (0x0002cea8) cell_ai_link_pane

0x66df,	// (0x0002587a) cell_ai_link_pane_g1

0x3c61,	// (0x00022dfc) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x0002eaa6) cell_ai_link_pane_g

0x373e,	// (0x000228d9) grid_highlight_cp2

0x373e,	// (0x000228d9) bg_popup_sub_pane_cp1

0x3a25,	// (0x00022bc0) popup_ai_links_title_window_t1

0x662d,	// (0x000257c8) ai_gene_pane_1_g1_ParamLimits

0x662d,	// (0x000257c8) ai_gene_pane_1_g1

0x6639,	// (0x000257d4) ai_gene_pane_1_g2_ParamLimits

0x6639,	// (0x000257d4) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x0002ea9c) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x0002ea9c) ai_gene_pane_1_g

0x6646,	// (0x000257e1) ai_gene_pane_1_t1_ParamLimits

0x6646,	// (0x000257e1) ai_gene_pane_1_t1

0x667a,	// (0x00025815) grid_ai_soft_ind_pane

0x6618,	// (0x000257b3) ai_gene_pane_2_t1_ParamLimits

0x6618,	// (0x000257b3) ai_gene_pane_2_t1

0xd2d8,	// (0x0002c473) main_pane_empty_t1_ParamLimits

0xd2d8,	// (0x0002c473) main_pane_empty_t1

0xd2f0,	// (0x0002c48b) main_pane_empty_t2_ParamLimits

0xd2f0,	// (0x0002c48b) main_pane_empty_t2

0xd305,	// (0x0002c4a0) main_pane_empty_t3_ParamLimits

0xd305,	// (0x0002c4a0) main_pane_empty_t3

0xd317,	// (0x0002c4b2) main_pane_empty_t4_ParamLimits

0xd317,	// (0x0002c4b2) main_pane_empty_t4

0xd329,	// (0x0002c4c4) main_pane_empty_t5_ParamLimits

0xd329,	// (0x0002c4c4) main_pane_empty_t5

0x0004,

0xf574,	// (0x0002e70f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0002e70f) main_pane_empty_t

0x415c,	// (0x000232f7) bg_popup_window_pane_ParamLimits

0x415c,	// (0x000232f7) bg_popup_window_pane

0x6388,	// (0x00025523) find_popup_pane_cp2_ParamLimits

0x6388,	// (0x00025523) find_popup_pane_cp2

0x6394,	// (0x0002552f) heading_pane_ParamLimits

0x6394,	// (0x0002552f) heading_pane

0x373e,	// (0x000228d9) bg_popup_sub_pane

0xdc8e,	// (0x0002ce29) bg_popup_window_pane_g1_ParamLimits

0xdc8e,	// (0x0002ce29) bg_popup_window_pane_g1

0xdc9d,	// (0x0002ce38) bg_popup_window_pane_g2_ParamLimits

0xdc9d,	// (0x0002ce38) bg_popup_window_pane_g2

0xdca9,	// (0x0002ce44) bg_popup_window_pane_g3_ParamLimits

0xdca9,	// (0x0002ce44) bg_popup_window_pane_g3

0xdcb5,	// (0x0002ce50) bg_popup_window_pane_g4_ParamLimits

0xdcb5,	// (0x0002ce50) bg_popup_window_pane_g4

0xdcc4,	// (0x0002ce5f) bg_popup_window_pane_g5_ParamLimits

0xdcc4,	// (0x0002ce5f) bg_popup_window_pane_g5

0xdcd4,	// (0x0002ce6f) bg_popup_window_pane_g6_ParamLimits

0xdcd4,	// (0x0002ce6f) bg_popup_window_pane_g6

0xdce0,	// (0x0002ce7b) bg_popup_window_pane_g7_ParamLimits

0xdce0,	// (0x0002ce7b) bg_popup_window_pane_g7

0xdcef,	// (0x0002ce8a) bg_popup_window_pane_g8_ParamLimits

0xdcef,	// (0x0002ce8a) bg_popup_window_pane_g8

0xdcfe,	// (0x0002ce99) bg_popup_window_pane_g9_ParamLimits

0xdcfe,	// (0x0002ce99) bg_popup_window_pane_g9

0x636e,	// (0x00025509) bg_popup_window_pane_g10_ParamLimits

0x636e,	// (0x00025509) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0002ea64) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0002ea64) bg_popup_window_pane_g

0x6297,	// (0x00025432) bg_popup_heading_pane_ParamLimits

0x6297,	// (0x00025432) bg_popup_heading_pane

0x2738,	// (0x000218d3) tabs_4_passive_pane_cp_srt_ParamLimits

0x2738,	// (0x000218d3) tabs_4_passive_pane_cp_srt

0x274a,	// (0x000218e5) tabs_4_passive_pane_srt_ParamLimits

0x62ab,	// (0x00025446) heading_pane_g2

0x274a,	// (0x000218e5) tabs_4_passive_pane_srt

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp3_srt

0x62b3,	// (0x0002544e) heading_pane_t1_ParamLimits

0x62b3,	// (0x0002544e) heading_pane_t1

0x62ca,	// (0x00025465) heading_pane_t2_ParamLimits

0x62ca,	// (0x00025465) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002ea5f) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002ea5f) heading_pane_t

0x5dc4,	// (0x00024f5f) bg_popup_heading_pane_g1

0x5e73,	// (0x0002500e) bg_popup_heading_pane_g2

0x5e7d,	// (0x00025018) bg_popup_heading_pane_g3

0x5e87,	// (0x00025022) bg_popup_heading_pane_g4

0x5e91,	// (0x0002502c) bg_popup_heading_pane_g5

0x5e9b,	// (0x00025036) bg_popup_heading_pane_g6

0x5ea3,	// (0x0002503e) bg_popup_heading_pane_g7

0x5eab,	// (0x00025046) bg_popup_heading_pane_g8

0x5eb5,	// (0x00025050) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x0002ea1b) bg_popup_heading_pane_g

0x5590,	// (0x0002472b) bg_popup_sub_pane_g1

0x5598,	// (0x00024733) bg_popup_sub_pane_g2

0x55a0,	// (0x0002473b) bg_popup_sub_pane_g3

0x55a8,	// (0x00024743) bg_popup_sub_pane_g4

0x55b0,	// (0x0002474b) bg_popup_sub_pane_g5

0x55b8,	// (0x00024753) bg_popup_sub_pane_g6

0x55c0,	// (0x0002475b) bg_popup_sub_pane_g7

0x55c8,	// (0x00024763) bg_popup_sub_pane_g8

0x55d0,	// (0x0002476b) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x0002e9f5) bg_popup_sub_pane_g

0x3a99,	// (0x00022c34) bg_popup_window_pane_cp5_ParamLimits

0x3a99,	// (0x00022c34) bg_popup_window_pane_cp5

0x3ab5,	// (0x00022c50) popup_note_window_g1_ParamLimits

0x3ab5,	// (0x00022c50) popup_note_window_g1

0x3ac1,	// (0x00022c5c) popup_note_window_t1_ParamLimits

0x3ac1,	// (0x00022c5c) popup_note_window_t1

0x3ad7,	// (0x00022c72) popup_note_window_t2_ParamLimits

0x3ad7,	// (0x00022c72) popup_note_window_t2

0x3aed,	// (0x00022c88) popup_note_window_t3_ParamLimits

0x3aed,	// (0x00022c88) popup_note_window_t3

0x3b03,	// (0x00022c9e) popup_note_window_t4_ParamLimits

0x3b03,	// (0x00022c9e) popup_note_window_t4

0x3b2b,	// (0x00022cc6) popup_note_window_t5_ParamLimits

0x3b2b,	// (0x00022cc6) popup_note_window_t5

0x0004,

0xf57f,	// (0x0002e71a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0002e71a) popup_note_window_t

0x3b75,	// (0x00022d10) bg_popup_window_pane_cp6_ParamLimits

0x3b75,	// (0x00022d10) bg_popup_window_pane_cp6

0x5d40,	// (0x00024edb) popup_note_image_window_g1_ParamLimits

0x5d40,	// (0x00024edb) popup_note_image_window_g1

0x5d4c,	// (0x00024ee7) popup_note_image_window_g2_ParamLimits

0x5d4c,	// (0x00024ee7) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x0002e9e9) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x0002e9e9) popup_note_image_window_g

0x5d65,	// (0x00024f00) popup_note_image_window_t1_ParamLimits

0x5d65,	// (0x00024f00) popup_note_image_window_t1

0x5d7e,	// (0x00024f19) popup_note_image_window_t2_ParamLimits

0x5d7e,	// (0x00024f19) popup_note_image_window_t2

0x5d97,	// (0x00024f32) popup_note_image_window_t3_ParamLimits

0x5d97,	// (0x00024f32) popup_note_image_window_t3

0x0002,

0xf853,	// (0x0002e9ee) popup_note_image_window_t_ParamLimits

0xf853,	// (0x0002e9ee) popup_note_image_window_t

0x5c01,	// (0x00024d9c) bg_popup_window_pane_cp7_ParamLimits

0x5c01,	// (0x00024d9c) bg_popup_window_pane_cp7

0x5c31,	// (0x00024dcc) popup_note_wait_window_g1_ParamLimits

0x5c31,	// (0x00024dcc) popup_note_wait_window_g1

0x5c3d,	// (0x00024dd8) popup_note_wait_window_g2_ParamLimits

0x5c3d,	// (0x00024dd8) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x0002e9d7) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x0002e9d7) popup_note_wait_window_g

0x5c55,	// (0x00024df0) popup_note_wait_window_t1_ParamLimits

0x5c55,	// (0x00024df0) popup_note_wait_window_t1

0x5c7c,	// (0x00024e17) popup_note_wait_window_t2_ParamLimits

0x5c7c,	// (0x00024e17) popup_note_wait_window_t2

0x5c99,	// (0x00024e34) popup_note_wait_window_t3_ParamLimits

0x5c99,	// (0x00024e34) popup_note_wait_window_t3

0x5cac,	// (0x00024e47) popup_note_wait_window_t4_ParamLimits

0x5cac,	// (0x00024e47) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x0002e9de) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x0002e9de) popup_note_wait_window_t

0x5cd1,	// (0x00024e6c) wait_bar_pane_ParamLimits

0x5cd1,	// (0x00024e6c) wait_bar_pane

0x373e,	// (0x000228d9) wait_anim_pane

0x373e,	// (0x000228d9) wait_border_pane

0x3734,	// (0x000228cf) wait_anim_pane_g1

0x3734,	// (0x000228cf) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002e89e) wait_anim_pane_g

0x5ba5,	// (0x00024d40) wait_border_pane_g1

0x5bb0,	// (0x00024d4b) wait_border_pane_g2

0x5bb9,	// (0x00024d54) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002e9d0) wait_border_pane_g

0x5a10,	// (0x00024bab) bg_popup_window_pane_cp16_ParamLimits

0x5a10,	// (0x00024bab) bg_popup_window_pane_cp16

0x5b10,	// (0x00024cab) indicator_popup_pane_cp4_ParamLimits

0x5b10,	// (0x00024cab) indicator_popup_pane_cp4

0x5b24,	// (0x00024cbf) popup_query_data_window_t1_ParamLimits

0x5b24,	// (0x00024cbf) popup_query_data_window_t1

0x5b36,	// (0x00024cd1) popup_query_data_window_t2_ParamLimits

0x5b36,	// (0x00024cd1) popup_query_data_window_t2

0x5b4f,	// (0x00024cea) popup_query_data_window_t3_ParamLimits

0x5b4f,	// (0x00024cea) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x0002e9c9) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x0002e9c9) popup_query_data_window_t

0x5b69,	// (0x00024d04) query_popup_data_pane_ParamLimits

0x5b69,	// (0x00024d04) query_popup_data_pane

0x5b7d,	// (0x00024d18) query_popup_data_pane_cp1_ParamLimits

0x5b7d,	// (0x00024d18) query_popup_data_pane_cp1

0x5a10,	// (0x00024bab) bg_popup_window_pane_cp10_ParamLimits

0x5a10,	// (0x00024bab) bg_popup_window_pane_cp10

0x5a42,	// (0x00024bdd) indicator_popup_pane_ParamLimits

0x5a42,	// (0x00024bdd) indicator_popup_pane

0x5a64,	// (0x00024bff) popup_query_code_window_t1_ParamLimits

0x5a64,	// (0x00024bff) popup_query_code_window_t1

0x5a7e,	// (0x00024c19) popup_query_code_window_t2_ParamLimits

0x5a7e,	// (0x00024c19) popup_query_code_window_t2

0x5ac7,	// (0x00024c62) popup_query_code_window_t3_ParamLimits

0x5ac7,	// (0x00024c62) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002e9c2) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002e9c2) popup_query_code_window_t

0x5af6,	// (0x00024c91) query_popup_pane_ParamLimits

0x5af6,	// (0x00024c91) query_popup_pane

0x3b75,	// (0x00022d10) bg_popup_window_pane_cp15_ParamLimits

0x3b75,	// (0x00022d10) bg_popup_window_pane_cp15

0x3b93,	// (0x00022d2e) indicator_popup_pane_cp1_ParamLimits

0x3b93,	// (0x00022d2e) indicator_popup_pane_cp1

0x3ba6,	// (0x00022d41) indicator_popup_pane_cp2_ParamLimits

0x3ba6,	// (0x00022d41) indicator_popup_pane_cp2

0x3bb9,	// (0x00022d54) popup_query_data_code_window_g1_ParamLimits

0x3bb9,	// (0x00022d54) popup_query_data_code_window_g1

0x3bcc,	// (0x00022d67) popup_query_data_code_window_t1_ParamLimits

0x3bcc,	// (0x00022d67) popup_query_data_code_window_t1

0x3bde,	// (0x00022d79) popup_query_data_code_window_t2_ParamLimits

0x3bde,	// (0x00022d79) popup_query_data_code_window_t2

0x3bf0,	// (0x00022d8b) popup_query_data_code_window_t3_ParamLimits

0x3bf0,	// (0x00022d8b) popup_query_data_code_window_t3

0x3c06,	// (0x00022da1) popup_query_data_code_window_t4_ParamLimits

0x3c06,	// (0x00022da1) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0002e725) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0002e725) popup_query_data_code_window_t

0x241b,	// (0x000215b6) list_single_midp_graphic_pane_g3

0x3c1e,	// (0x00022db9) query_popup_data_pane_cp2_ParamLimits

0x3c31,	// (0x00022dcc) query_popup_pane_cp2_ParamLimits

0x3c31,	// (0x00022dcc) query_popup_pane_cp2

0x373e,	// (0x000228d9) bg_popup_window_pane_cp11

0x59fc,	// (0x00024b97) heading_pane_cp5

0x3d1c,	// (0x00022eb7) listscroll_popup_info_pane

0x373e,	// (0x000228d9) input_focus_pane_cp3

0x3c44,	// (0x00022ddf) query_popup_pane_t1

0x3c52,	// (0x00022ded) list_popup_info_pane_ParamLimits

0x3c52,	// (0x00022ded) list_popup_info_pane

0x3c61,	// (0x00022dfc) listscroll_popup_info_pane_g1

0x3c69,	// (0x00022e04) scroll_pane_cp7

0x3c73,	// (0x00022e0e) popup_info_list_pane_t1_ParamLimits

0x3c73,	// (0x00022e0e) popup_info_list_pane_t1

0x3c8d,	// (0x00022e28) popup_info_list_pane_t2_ParamLimits

0x3c8d,	// (0x00022e28) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0002e72e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0002e72e) popup_info_list_pane_t

0x373e,	// (0x000228d9) bg_popup_window_pane_cp12

0x6d77,	// (0x00025f12) find_popup_pane

0x381e,	// (0x000229b9) bg_popup_window_pane_cp3

0x3ca7,	// (0x00022e42) heading_pane_cp3

0x3cb3,	// (0x00022e4e) listscroll_popup_graphic_pane

0x373e,	// (0x000228d9) bg_popup_window_pane_cp4

0xd38b,	// (0x0002c526) heading_pane_cp4

0x3d1c,	// (0x00022eb7) listscroll_popup_colour_pane

0x3d24,	// (0x00022ebf) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3d24,	// (0x00022ebf) cell_large_graphic_colour_none_popup_pane

0xd393,	// (0x0002c52e) grid_large_graphic_colour_popup_pane_ParamLimits

0xd393,	// (0x0002c52e) grid_large_graphic_colour_popup_pane

0x3d64,	// (0x00022eff) listscroll_popup_colour_pane_g1_ParamLimits

0x3d64,	// (0x00022eff) listscroll_popup_colour_pane_g1

0x3d7b,	// (0x00022f16) listscroll_popup_colour_pane_g2_ParamLimits

0x3d7b,	// (0x00022f16) listscroll_popup_colour_pane_g2

0x3d92,	// (0x00022f2d) listscroll_popup_colour_pane_g3_ParamLimits

0x3d92,	// (0x00022f2d) listscroll_popup_colour_pane_g3

0xd3b7,	// (0x0002c552) listscroll_popup_colour_pane_g4_ParamLimits

0xd3b7,	// (0x0002c552) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0002e733) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0002e733) listscroll_popup_colour_pane_g

0x3db6,	// (0x00022f51) scroll_pane_cp6_ParamLimits

0x3db6,	// (0x00022f51) scroll_pane_cp6

0xd3c7,	// (0x0002c562) cell_large_graphic_colour_popup_pane_ParamLimits

0xd3c7,	// (0x0002c562) cell_large_graphic_colour_popup_pane

0x3de7,	// (0x00022f82) cell_large_graphic_colour_none_popup_pane_t1

0x373e,	// (0x000228d9) grid_highlight_pane_cp5

0x3df6,	// (0x00022f91) cell_large_graphic_colour_popup_pane_g1

0x3dfe,	// (0x00022f99) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0002e73c) cell_large_graphic_colour_popup_pane_g

0x3e06,	// (0x00022fa1) cell_large_graphic_colour_popup_pane_g2_copy1

0x3e0f,	// (0x00022faa) grid_highlight_pane_cp4

0x3e17,	// (0x00022fb2) bg_popup_window_pane_cp8_ParamLimits

0x3e17,	// (0x00022fb2) bg_popup_window_pane_cp8

0x3e32,	// (0x00022fcd) popup_snote_single_text_window_g1_ParamLimits

0x3e32,	// (0x00022fcd) popup_snote_single_text_window_g1

0x3e44,	// (0x00022fdf) popup_snote_single_text_window_t1_ParamLimits

0x3e44,	// (0x00022fdf) popup_snote_single_text_window_t1

0x3e57,	// (0x00022ff2) popup_snote_single_text_window_t2_ParamLimits

0x3e57,	// (0x00022ff2) popup_snote_single_text_window_t2

0x3e6a,	// (0x00023005) popup_snote_single_text_window_t3_ParamLimits

0x3e6a,	// (0x00023005) popup_snote_single_text_window_t3

0x3ea3,	// (0x0002303e) popup_snote_single_text_window_t4_ParamLimits

0x3ea3,	// (0x0002303e) popup_snote_single_text_window_t4

0x3ed7,	// (0x00023072) popup_snote_single_text_window_t5_ParamLimits

0x3ed7,	// (0x00023072) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002e741) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002e741) popup_snote_single_text_window_t

0x3f06,	// (0x000230a1) bg_popup_window_pane_cp9_ParamLimits

0x3f06,	// (0x000230a1) bg_popup_window_pane_cp9

0x3e32,	// (0x00022fcd) popup_snote_single_graphic_window_g1_ParamLimits

0x3e32,	// (0x00022fcd) popup_snote_single_graphic_window_g1

0x3f14,	// (0x000230af) popup_snote_single_graphic_window_g2_ParamLimits

0x3f14,	// (0x000230af) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0002e74c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0002e74c) popup_snote_single_graphic_window_g

0x3f20,	// (0x000230bb) popup_snote_single_graphic_window_t1_ParamLimits

0x3f20,	// (0x000230bb) popup_snote_single_graphic_window_t1

0x3f33,	// (0x000230ce) popup_snote_single_graphic_window_t2_ParamLimits

0x3f33,	// (0x000230ce) popup_snote_single_graphic_window_t2

0x3f46,	// (0x000230e1) popup_snote_single_graphic_window_t3_ParamLimits

0x3f46,	// (0x000230e1) popup_snote_single_graphic_window_t3

0x3f7f,	// (0x0002311a) popup_snote_single_graphic_window_t4_ParamLimits

0x3f7f,	// (0x0002311a) popup_snote_single_graphic_window_t4

0x3fb3,	// (0x0002314e) popup_snote_single_graphic_window_t5_ParamLimits

0x3fb3,	// (0x0002314e) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002e751) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002e751) popup_snote_single_graphic_window_t

0x6cb9,	// (0x00025e54) grid_graphic_popup_pane_ParamLimits

0x6cb9,	// (0x00025e54) grid_graphic_popup_pane

0x6ce3,	// (0x00025e7e) listscroll_popup_graphic_pane_g1_ParamLimits

0x6ce3,	// (0x00025e7e) listscroll_popup_graphic_pane_g1

0xdff6,	// (0x0002d191) listscroll_popup_graphic_pane_g2_ParamLimits

0xdff6,	// (0x0002d191) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002eb3f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002eb3f) listscroll_popup_graphic_pane_g

0x6d0b,	// (0x00025ea6) scroll_pane_cp5

0xdf9b,	// (0x0002d136) cell_graphic_popup_pane_ParamLimits

0xdf9b,	// (0x0002d136) cell_graphic_popup_pane

0x6c39,	// (0x00025dd4) cell_graphic_popup_pane_g1

0x6c41,	// (0x00025ddc) cell_graphic_popup_pane_g2

0x3e06,	// (0x00022fa1) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x0002eb38) cell_graphic_popup_pane_g

0x6c4a,	// (0x00025de5) cell_graphic_popup_pane_t2

0x3e0f,	// (0x00022faa) grid_highlight_pane_cp3

0x3ff4,	// (0x0002318f) list_gen_pane_ParamLimits

0x3ff4,	// (0x0002318f) list_gen_pane

0x4026,	// (0x000231c1) scroll_pane

0xdf52,	// (0x0002d0ed) bg_list_pane_g1_ParamLimits

0xdf52,	// (0x0002d0ed) bg_list_pane_g1

0x6bae,	// (0x00025d49) bg_list_pane_g2_ParamLimits

0x6bae,	// (0x00025d49) bg_list_pane_g2

0x6bc3,	// (0x00025d5e) bg_list_pane_g3_ParamLimits

0x6bc3,	// (0x00025d5e) bg_list_pane_g3

0x6bd7,	// (0x00025d72) bg_list_pane_g4_ParamLimits

0x6bd7,	// (0x00025d72) bg_list_pane_g4

0xdf6f,	// (0x0002d10a) bg_list_pane_g5_ParamLimits

0xdf6f,	// (0x0002d10a) bg_list_pane_g5

0x0004,

0xf992,	// (0x0002eb2d) bg_list_pane_g_ParamLimits

0xf992,	// (0x0002eb2d) bg_list_pane_g

0xdf1a,	// (0x0002d0b5) list_double2_graphic_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double2_graphic_large_graphic_pane

0xdf1a,	// (0x0002d0b5) list_double2_graphic_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double2_graphic_pane

0xdf1a,	// (0x0002d0b5) list_double2_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double2_large_graphic_pane

0xdf1a,	// (0x0002d0b5) list_double2_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double2_pane

0xdf1a,	// (0x0002d0b5) list_double_graphic_heading_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_graphic_heading_pane

0xdf1a,	// (0x0002d0b5) list_double_graphic_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_graphic_pane

0xdf1a,	// (0x0002d0b5) list_double_heading_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_heading_pane

0xdf1a,	// (0x0002d0b5) list_double_large_graphic_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_large_graphic_pane

0xdf1a,	// (0x0002d0b5) list_double_number_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_number_pane

0xdf1a,	// (0x0002d0b5) list_double_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_pane

0xdf1a,	// (0x0002d0b5) list_double_time_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_double_time_pane

0xdf1a,	// (0x0002d0b5) list_setting_number_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_setting_number_pane

0xdf1a,	// (0x0002d0b5) list_setting_pane_ParamLimits

0xdf1a,	// (0x0002d0b5) list_setting_pane

0xdf2c,	// (0x0002d0c7) list_single_2graphic_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_2graphic_pane

0xdf2c,	// (0x0002d0c7) list_single_graphic_heading_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_graphic_heading_pane

0xdf2c,	// (0x0002d0c7) list_single_graphic_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_graphic_pane

0xdf2c,	// (0x0002d0c7) list_single_heading_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_heading_pane

0xdf2c,	// (0x0002d0c7) list_single_large_graphic_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_large_graphic_pane

0xdf2c,	// (0x0002d0c7) list_single_number_heading_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_number_heading_pane

0xdf2c,	// (0x0002d0c7) list_single_number_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_number_pane

0xdf2c,	// (0x0002d0c7) list_single_pane_ParamLimits

0xdf2c,	// (0x0002d0c7) list_single_pane

0x373e,	// (0x000228d9) list_highlight_pane_cp1

0x0a12,	// (0x0001fbad) list_single_pane_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_pane_g1

0x0a1e,	// (0x0001fbb9) list_single_pane_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_pane_g

0x0d42,	// (0x0001fedd) list_single_pane_t1_ParamLimits

0x0d42,	// (0x0001fedd) list_single_pane_t1

0x0a12,	// (0x0001fbad) list_single_number_pane_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_number_pane_g1

0x0a1e,	// (0x0001fbb9) list_single_number_pane_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_number_pane_g

0x0a70,	// (0x0001fc0b) list_single_number_pane_t1_ParamLimits

0x0a70,	// (0x0001fc0b) list_single_number_pane_t1

0xbd71,	// (0x0002af0c) list_single_number_pane_t2_ParamLimits

0xbd71,	// (0x0002af0c) list_single_number_pane_t2

0x0001,

0xf953,	// (0x0002eaee) list_single_number_pane_t_ParamLimits

0xf953,	// (0x0002eaee) list_single_number_pane_t

0xb76d,	// (0x0002a908) list_single_graphic_pane_g1_ParamLimits

0xb76d,	// (0x0002a908) list_single_graphic_pane_g1

0x0a12,	// (0x0001fbad) list_single_graphic_pane_g2_ParamLimits

0x0a12,	// (0x0001fbad) list_single_graphic_pane_g2

0x0a1e,	// (0x0001fbb9) list_single_graphic_pane_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0002e75c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0002e75c) list_single_graphic_pane_g

0xb779,	// (0x0002a914) list_single_graphic_pane_t1_ParamLimits

0xb779,	// (0x0002a914) list_single_graphic_pane_t1

0x0a12,	// (0x0001fbad) list_single_heading_pane_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_heading_pane_g1

0x0a1e,	// (0x0001fbb9) list_single_heading_pane_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_heading_pane_g

0xb78f,	// (0x0002a92a) list_single_heading_pane_t1_ParamLimits

0xb78f,	// (0x0002a92a) list_single_heading_pane_t1

0xb7a5,	// (0x0002a940) list_single_heading_pane_t2_ParamLimits

0xb7a5,	// (0x0002a940) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0002e768) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0002e768) list_single_heading_pane_t

0x0a12,	// (0x0001fbad) list_single_number_heading_pane_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_number_heading_pane_g1

0x0a1e,	// (0x0001fbb9) list_single_number_heading_pane_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_number_heading_pane_g

0xb78f,	// (0x0002a92a) list_single_number_heading_pane_t1_ParamLimits

0xb78f,	// (0x0002a92a) list_single_number_heading_pane_t1

0x0cf6,	// (0x0001fe91) list_single_number_heading_pane_t2_ParamLimits

0x0cf6,	// (0x0001fe91) list_single_number_heading_pane_t2

0x0d08,	// (0x0001fea3) list_single_number_heading_pane_t3_ParamLimits

0x0d08,	// (0x0001fea3) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002e76d) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002e76d) list_single_number_heading_pane_t

0x0a06,	// (0x0001fba1) list_single_graphic_heading_pane_g1_ParamLimits

0x0a06,	// (0x0001fba1) list_single_graphic_heading_pane_g1

0xb7b7,	// (0x0002a952) list_single_graphic_heading_pane_g4_ParamLimits

0xb7b7,	// (0x0002a952) list_single_graphic_heading_pane_g4

0x0a1e,	// (0x0001fbb9) list_single_graphic_heading_pane_g5_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0002e774) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0002e774) list_single_graphic_heading_pane_g

0xb78f,	// (0x0002a92a) list_single_graphic_heading_pane_t1_ParamLimits

0xb78f,	// (0x0002a92a) list_single_graphic_heading_pane_t1

0xb7c8,	// (0x0002a963) list_single_graphic_heading_pane_t2_ParamLimits

0xb7c8,	// (0x0002a963) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0002e77b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0002e77b) list_single_graphic_heading_pane_t

0x0d58,	// (0x0001fef3) list_single_large_graphic_pane_g1_ParamLimits

0x0d58,	// (0x0001fef3) list_single_large_graphic_pane_g1

0x0a12,	// (0x0001fbad) list_single_large_graphic_pane_g2_ParamLimits

0x0a12,	// (0x0001fbad) list_single_large_graphic_pane_g2

0x0a1e,	// (0x0001fbb9) list_single_large_graphic_pane_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002e780) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002e780) list_single_large_graphic_pane_g

0x5bb0,	// (0x00024d4b) wait_border_pane_g2_copy1

0xb7da,	// (0x0002a975) list_single_large_graphic_pane_g4_cp2

0x0d64,	// (0x0001feff) list_single_large_graphic_pane_t1_ParamLimits

0x0d64,	// (0x0001feff) list_single_large_graphic_pane_t1

0xb7e2,	// (0x0002a97d) list_double_pane_g1_ParamLimits

0xb7e2,	// (0x0002a97d) list_double_pane_g1

0xb7ee,	// (0x0002a989) list_double_pane_g2_ParamLimits

0xb7ee,	// (0x0002a989) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0002e787) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0002e787) list_double_pane_g

0xb7fa,	// (0x0002a995) list_double_pane_t1_ParamLimits

0xb7fa,	// (0x0002a995) list_double_pane_t1

0xb810,	// (0x0002a9ab) list_double_pane_t2_ParamLimits

0xb810,	// (0x0002a9ab) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0002e78c) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0002e78c) list_double_pane_t

0xb822,	// (0x0002a9bd) list_double2_pane_g1_ParamLimits

0xb822,	// (0x0002a9bd) list_double2_pane_g1

0xb833,	// (0x0002a9ce) list_double2_pane_g2_ParamLimits

0xb833,	// (0x0002a9ce) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002e791) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002e791) list_double2_pane_g

0xb83f,	// (0x0002a9da) list_double2_pane_t1_ParamLimits

0xb83f,	// (0x0002a9da) list_double2_pane_t1

0xb855,	// (0x0002a9f0) list_double2_pane_t2_ParamLimits

0xb855,	// (0x0002a9f0) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0002e796) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0002e796) list_double2_pane_t

0xb7e2,	// (0x0002a97d) list_double_number_pane_g1_ParamLimits

0xb7e2,	// (0x0002a97d) list_double_number_pane_g1

0xb7ee,	// (0x0002a989) list_double_number_pane_g2_ParamLimits

0xb7ee,	// (0x0002a989) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0002e787) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0002e787) list_double_number_pane_g

0xb867,	// (0x0002aa02) list_double_number_pane_t1_ParamLimits

0xb867,	// (0x0002aa02) list_double_number_pane_t1

0xb879,	// (0x0002aa14) list_double_number_pane_t2_ParamLimits

0xb879,	// (0x0002aa14) list_double_number_pane_t2

0xb88f,	// (0x0002aa2a) list_double_number_pane_t3_ParamLimits

0xb88f,	// (0x0002aa2a) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0002e79b) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0002e79b) list_double_number_pane_t

0xb8a1,	// (0x0002aa3c) list_double_graphic_pane_g1_ParamLimits

0xb8a1,	// (0x0002aa3c) list_double_graphic_pane_g1

0xb8ad,	// (0x0002aa48) list_double_graphic_pane_g2_ParamLimits

0xb8ad,	// (0x0002aa48) list_double_graphic_pane_g2

0xb8bc,	// (0x0002aa57) list_double_graphic_pane_g3_ParamLimits

0xb8bc,	// (0x0002aa57) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002e7a2) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002e7a2) list_double_graphic_pane_g

0xb8d4,	// (0x0002aa6f) list_double_graphic_pane_t1_ParamLimits

0xb8d4,	// (0x0002aa6f) list_double_graphic_pane_t1

0xb8ea,	// (0x0002aa85) list_double_graphic_pane_t2_ParamLimits

0xb8ea,	// (0x0002aa85) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0002e7ab) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0002e7ab) list_double_graphic_pane_t

0x057e,	// (0x0001f719) list_double2_graphic_pane_g1_ParamLimits

0x057e,	// (0x0001f719) list_double2_graphic_pane_g1

0x1019,	// (0x000201b4) list_double2_graphic_pane_g2_ParamLimits

0x1019,	// (0x000201b4) list_double2_graphic_pane_g2

0xb833,	// (0x0002a9ce) list_double2_graphic_pane_g3_ParamLimits

0xb833,	// (0x0002a9ce) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002e7b0) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002e7b0) list_double2_graphic_pane_g

0xb8fc,	// (0x0002aa97) list_double2_graphic_pane_t1_ParamLimits

0xb8fc,	// (0x0002aa97) list_double2_graphic_pane_t1

0xb912,	// (0x0002aaad) list_double2_graphic_pane_t2_ParamLimits

0xb912,	// (0x0002aaad) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0002e7b7) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0002e7b7) list_double2_graphic_pane_t

0xb924,	// (0x0002aabf) list_double_large_graphic_pane_g1_ParamLimits

0xb924,	// (0x0002aabf) list_double_large_graphic_pane_g1

0xb943,	// (0x0002aade) list_double_large_graphic_pane_g2_ParamLimits

0xb943,	// (0x0002aade) list_double_large_graphic_pane_g2

0xb7ee,	// (0x0002a989) list_double_large_graphic_pane_g3_ParamLimits

0xb7ee,	// (0x0002a989) list_double_large_graphic_pane_g3

0xb954,	// (0x0002aaef) list_double_large_graphic_pane_g4_ParamLimits

0xb954,	// (0x0002aaef) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0002e7bc) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0002e7bc) list_double_large_graphic_pane_g

0xb967,	// (0x0002ab02) list_double_large_graphic_pane_t1_ParamLimits

0xb967,	// (0x0002ab02) list_double_large_graphic_pane_t1

0xb980,	// (0x0002ab1b) list_double_large_graphic_pane_t2_ParamLimits

0xb980,	// (0x0002ab1b) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0002e7c7) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0002e7c7) list_double_large_graphic_pane_t

0xb992,	// (0x0002ab2d) list_double2_large_graphic_pane_g1_ParamLimits

0xb992,	// (0x0002ab2d) list_double2_large_graphic_pane_g1

0xb822,	// (0x0002a9bd) list_double2_large_graphic_pane_g2_ParamLimits

0xb822,	// (0x0002a9bd) list_double2_large_graphic_pane_g2

0xb833,	// (0x0002a9ce) list_double2_large_graphic_pane_g3_ParamLimits

0xb833,	// (0x0002a9ce) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0002e7cc) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0002e7cc) list_double2_large_graphic_pane_g

0xb99e,	// (0x0002ab39) list_double2_large_graphic_pane_t1_ParamLimits

0xb99e,	// (0x0002ab39) list_double2_large_graphic_pane_t1

0xb9b4,	// (0x0002ab4f) list_double2_large_graphic_pane_t2_ParamLimits

0xb9b4,	// (0x0002ab4f) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0002e7d3) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0002e7d3) list_double2_large_graphic_pane_t

0xb9c6,	// (0x0002ab61) list_double_heading_pane_g1_ParamLimits

0xb9c6,	// (0x0002ab61) list_double_heading_pane_g1

0x0353,	// (0x0001f4ee) list_double_heading_pane_g2_ParamLimits

0x0353,	// (0x0001f4ee) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0002e7d8) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0002e7d8) list_double_heading_pane_g

0xb9d7,	// (0x0002ab72) list_double_heading_pane_t1_ParamLimits

0xb9d7,	// (0x0002ab72) list_double_heading_pane_t1

0xb855,	// (0x0002a9f0) list_double_heading_pane_t2_ParamLimits

0xb855,	// (0x0002a9f0) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0002e7dd) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0002e7dd) list_double_heading_pane_t

0x057e,	// (0x0001f719) list_double_graphic_heading_pane_g1_ParamLimits

0x057e,	// (0x0001f719) list_double_graphic_heading_pane_g1

0xb9c6,	// (0x0002ab61) list_double_graphic_heading_pane_g2_ParamLimits

0xb9c6,	// (0x0002ab61) list_double_graphic_heading_pane_g2

0x0353,	// (0x0001f4ee) list_double_graphic_heading_pane_g3_ParamLimits

0x0353,	// (0x0001f4ee) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0002e7e2) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0002e7e2) list_double_graphic_heading_pane_g

0xb9ed,	// (0x0002ab88) list_double_graphic_heading_pane_t1_ParamLimits

0xb9ed,	// (0x0002ab88) list_double_graphic_heading_pane_t1

0xb912,	// (0x0002aaad) list_double_graphic_heading_pane_t2_ParamLimits

0xb912,	// (0x0002aaad) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0002e7e9) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0002e7e9) list_double_graphic_heading_pane_t

0xb943,	// (0x0002aade) list_double_time_pane_g1_ParamLimits

0xb943,	// (0x0002aade) list_double_time_pane_g1

0xb7ee,	// (0x0002a989) list_double_time_pane_g2_ParamLimits

0xb7ee,	// (0x0002a989) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0002e7ee) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0002e7ee) list_double_time_pane_g

0xba03,	// (0x0002ab9e) list_double_time_pane_t1_ParamLimits

0xba03,	// (0x0002ab9e) list_double_time_pane_t1

0xba19,	// (0x0002abb4) list_double_time_pane_t2_ParamLimits

0xba19,	// (0x0002abb4) list_double_time_pane_t2

0xba2b,	// (0x0002abc6) list_double_time_pane_t3_ParamLimits

0xba2b,	// (0x0002abc6) list_double_time_pane_t3

0xba3d,	// (0x0002abd8) list_double_time_pane_t4_ParamLimits

0xba3d,	// (0x0002abd8) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0002e7f3) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0002e7f3) list_double_time_pane_t

0xba4f,	// (0x0002abea) list_setting_pane_g1_ParamLimits

0xba4f,	// (0x0002abea) list_setting_pane_g1

0xba5b,	// (0x0002abf6) list_setting_pane_g2_ParamLimits

0xba5b,	// (0x0002abf6) list_setting_pane_g2

0x0001,

0xf661,	// (0x0002e7fc) list_setting_pane_g_ParamLimits

0xf661,	// (0x0002e7fc) list_setting_pane_g

0xba67,	// (0x0002ac02) list_setting_pane_t1_ParamLimits

0xba67,	// (0x0002ac02) list_setting_pane_t1

0xba81,	// (0x0002ac1c) list_setting_pane_t2_ParamLimits

0xba81,	// (0x0002ac1c) list_setting_pane_t2

0x0002,

0xf666,	// (0x0002e801) list_setting_pane_t_ParamLimits

0xf666,	// (0x0002e801) list_setting_pane_t

0xbac0,	// (0x0002ac5b) set_value_pane_cp_ParamLimits

0xbac0,	// (0x0002ac5b) set_value_pane_cp

0xbacc,	// (0x0002ac67) list_setting_number_pane_g1_ParamLimits

0xbacc,	// (0x0002ac67) list_setting_number_pane_g1

0xbad8,	// (0x0002ac73) list_setting_number_pane_g2_ParamLimits

0xbad8,	// (0x0002ac73) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0002e808) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0002e808) list_setting_number_pane_g

0xbae4,	// (0x0002ac7f) list_setting_number_pane_t1_ParamLimits

0xbae4,	// (0x0002ac7f) list_setting_number_pane_t1

0xbafd,	// (0x0002ac98) list_setting_number_pane_t2_ParamLimits

0xbafd,	// (0x0002ac98) list_setting_number_pane_t2

0xbb17,	// (0x0002acb2) list_setting_number_pane_t3_ParamLimits

0xbb17,	// (0x0002acb2) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0002e80d) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0002e80d) list_setting_number_pane_t

0xbac0,	// (0x0002ac5b) set_value_pane_ParamLimits

0xbac0,	// (0x0002ac5b) set_value_pane

0x405a,	// (0x000231f5) bg_set_opt_pane_ParamLimits

0x405a,	// (0x000231f5) bg_set_opt_pane

0x06df,	// (0x0001f87a) set_value_pane_t1

0x407b,	// (0x00023216) slider_set_pane_cp3

0x4084,	// (0x0002321f) volume_small_pane_cp

0x408d,	// (0x00023228) list_form_gen_pane

0x4096,	// (0x00023231) scroll_pane_cp8

0xbb5a,	// (0x0002acf5) form_field_data_pane_ParamLimits

0xbb5a,	// (0x0002acf5) form_field_data_pane

0xbb71,	// (0x0002ad0c) form_field_data_wide_pane_ParamLimits

0xbb71,	// (0x0002ad0c) form_field_data_wide_pane

0xbb91,	// (0x0002ad2c) form_field_popup_pane_ParamLimits

0xbb91,	// (0x0002ad2c) form_field_popup_pane

0xbba9,	// (0x0002ad44) form_field_popup_wide_pane_ParamLimits

0xbba9,	// (0x0002ad44) form_field_popup_wide_pane

0x0773,	// (0x0001f90e) form_field_slider_pane_ParamLimits

0x0773,	// (0x0001f90e) form_field_slider_pane

0x0786,	// (0x0001f921) form_field_slider_wide_pane_ParamLimits

0x0786,	// (0x0001f921) form_field_slider_wide_pane

0x40a7,	// (0x00023242) data_form_pane

0xbbca,	// (0x0002ad65) form_field_data_pane_t1

0x40b3,	// (0x0002324e) input_focus_pane

0x07bb,	// (0x0001f956) data_form_wide_pane

0x07d8,	// (0x0001f973) form_field_data_wide_pane_t1

0x3e24,	// (0x00022fbf) input_focus_pane_cp6

0xbbe4,	// (0x0002ad7f) form_field_popup_pane_t1

0x40b3,	// (0x0002324e) input_focus_pane_cp7

0x40e1,	// (0x0002327c) list_form_pane

0x081a,	// (0x0001f9b5) form_field_popup_wide_pane_t1

0x40b3,	// (0x0002324e) input_focus_pane_cp8

0x40ed,	// (0x00023288) list_form_wide_pane

0xbc06,	// (0x0002ada1) form_field_slider_pane_t1_ParamLimits

0xbc06,	// (0x0002ada1) form_field_slider_pane_t1

0xbc1e,	// (0x0002adb9) form_field_slider_pane_t2_ParamLimits

0xbc1e,	// (0x0002adb9) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0002e81d) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0002e81d) form_field_slider_pane_t

0x3a99,	// (0x00022c34) input_focus_pane_cp9_ParamLimits

0x3a99,	// (0x00022c34) input_focus_pane_cp9

0xbc33,	// (0x0002adce) slider_cont_pane_ParamLimits

0xbc33,	// (0x0002adce) slider_cont_pane

0x40f9,	// (0x00023294) form_field_slider_wide_pane_t1_ParamLimits

0x40f9,	// (0x00023294) form_field_slider_wide_pane_t1

0x0876,	// (0x0001fa11) form_field_slider_wide_pane_t2_ParamLimits

0x0876,	// (0x0001fa11) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0002e822) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0002e822) form_field_slider_wide_pane_t

0x3a99,	// (0x00022c34) input_focus_pane_cp10_ParamLimits

0x3a99,	// (0x00022c34) input_focus_pane_cp10

0xbc47,	// (0x0002ade2) slider_cont_pane_cp1_ParamLimits

0xbc47,	// (0x0002ade2) slider_cont_pane_cp1

0xbc5b,	// (0x0002adf6) slider_form_pane_cp

0x410b,	// (0x000232a6) input_focus_pane_g1

0x4113,	// (0x000232ae) input_focus_pane_g2

0x411b,	// (0x000232b6) input_focus_pane_g3

0x4123,	// (0x000232be) input_focus_pane_g4

0x412b,	// (0x000232c6) input_focus_pane_g5

0x4133,	// (0x000232ce) input_focus_pane_g6

0x413b,	// (0x000232d6) input_focus_pane_g7

0x4143,	// (0x000232de) input_focus_pane_g8

0x414b,	// (0x000232e6) input_focus_pane_g9

0x3734,	// (0x000228cf) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0002e827) input_focus_pane_g

0x5bb9,	// (0x00024d54) wait_border_pane_g3_copy1

0xbc63,	// (0x0002adfe) data_form_pane_t1

0x3734,	// (0x000228cf) wait_anim_pane_g1_copy1

0xbd83,	// (0x0002af1e) data_form_wide_pane_t1

0xbc7d,	// (0x0002ae18) list_form_graphic_pane_cp_ParamLimits

0xbc7d,	// (0x0002ae18) list_form_graphic_pane_cp

0x6ace,	// (0x00025c69) slider_form_pane_g1

0x6ad7,	// (0x00025c72) slider_form_pane_g2

0x0006,

0xf983,	// (0x0002eb1e) slider_form_pane_g

0xbc7d,	// (0x0002ae18) list_form_graphic_pane_ParamLimits

0xbc7d,	// (0x0002ae18) list_form_graphic_pane

0x08f4,	// (0x0001fa8f) list_form_graphic_pane_g1

0x08fc,	// (0x0001fa97) list_form_graphic_pane_t1_ParamLimits

0x08fc,	// (0x0001fa97) list_form_graphic_pane_t1

0x381e,	// (0x000229b9) list_highlight_pane_cp5_ParamLimits

0x381e,	// (0x000229b9) list_highlight_pane_cp5

0xbc8f,	// (0x0002ae2a) find_pane_g1

0x4153,	// (0x000232ee) input_find_pane

0xbc98,	// (0x0002ae33) input_find_pane_g1_ParamLimits

0xbc98,	// (0x0002ae33) input_find_pane_g1

0xbca4,	// (0x0002ae3f) input_find_pane_t1_ParamLimits

0xbca4,	// (0x0002ae3f) input_find_pane_t1

0xbcb9,	// (0x0002ae54) input_find_pane_t2_ParamLimits

0xbcb9,	// (0x0002ae54) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0002e83c) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0002e83c) input_find_pane_t

0x415c,	// (0x000232f7) input_focus_pane_cp5_ParamLimits

0x415c,	// (0x000232f7) input_focus_pane_cp5

0x4176,	// (0x00023311) bg_popup_window_pane_cp2_ParamLimits

0x4176,	// (0x00023311) bg_popup_window_pane_cp2

0x4183,	// (0x0002331e) listscroll_menu_pane_ParamLimits

0x4183,	// (0x0002331e) listscroll_menu_pane

0xd3fc,	// (0x0002c597) popup_submenu_window_ParamLimits

0xd3fc,	// (0x0002c597) popup_submenu_window

0x41bb,	// (0x00023356) find_popup_pane_g1

0x41c3,	// (0x0002335e) input_popup_find_pane_cp

0x415c,	// (0x000232f7) input_focus_pane_cp4_ParamLimits

0x415c,	// (0x000232f7) input_focus_pane_cp4

0x41d9,	// (0x00023374) input_popup_find_pane_t1_ParamLimits

0x41d9,	// (0x00023374) input_popup_find_pane_t1

0x373e,	// (0x000228d9) bg_popup_sub_pane_cp

0x4207,	// (0x000233a2) listscroll_popup_sub_pane

0x420f,	// (0x000233aa) list_submenu_pane_ParamLimits

0x420f,	// (0x000233aa) list_submenu_pane

0x4220,	// (0x000233bb) scroll_pane_cp4

0x4228,	// (0x000233c3) list_single_popup_submenu_pane_ParamLimits

0x4228,	// (0x000233c3) list_single_popup_submenu_pane

0x423c,	// (0x000233d7) list_single_popup_submenu_pane_g1

0x4244,	// (0x000233df) list_single_popup_submenu_pane_t1_ParamLimits

0x4244,	// (0x000233df) list_single_popup_submenu_pane_t1

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp1_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp1

0x4259,	// (0x000233f4) tabs_2_active_pane_g1

0xd436,	// (0x0002c5d1) tabs_2_active_pane_t1

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp1_ParamLimits

0x3a99,	// (0x00022c34) bg_passive_tab_pane_cp1

0x4259,	// (0x000233f4) tabs_2_passive_pane_g1

0xd436,	// (0x0002c5d1) tabs_2_passive_pane_t1

0x381e,	// (0x000229b9) bg_active_tab_pane_cp4

0xd448,	// (0x0002c5e3) tabs_2_long_active_pane_t1

0x506c,	// (0x00024207) bg_passive_tab_pane_cp4

0x2423,	// (0x000215be) list_single_midp_graphic_pane_g4_ParamLimits

0x381e,	// (0x000229b9) bg_active_tab_pane_cp5

0xd45b,	// (0x0002c5f6) tabs_3_long_active_pane_t1

0x506c,	// (0x00024207) bg_passive_tab_pane_cp5

0x2423,	// (0x000215be) list_single_midp_graphic_pane_g4

0x381e,	// (0x000229b9) bg_popup_window_pane_cp13_ParamLimits

0x381e,	// (0x000229b9) bg_popup_window_pane_cp13

0x42bb,	// (0x00023456) listscroll_popup_fast_pane_ParamLimits

0x42bb,	// (0x00023456) listscroll_popup_fast_pane

0x42ca,	// (0x00023465) grid_popup_fast_pane_ParamLimits

0x42ca,	// (0x00023465) grid_popup_fast_pane

0x42dc,	// (0x00023477) scroll_pane_cp9_ParamLimits

0x42dc,	// (0x00023477) scroll_pane_cp9

0x83cd,	// (0x00027568) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x83cd,	// (0x00027568) list_single_graphic_hl_pane_t1_cp2

0x4300,	// (0x0002349b) input_focus_pane_cp20_ParamLimits

0x4300,	// (0x0002349b) input_focus_pane_cp20

0x430e,	// (0x000234a9) query_popup_data_pane_t1_ParamLimits

0x430e,	// (0x000234a9) query_popup_data_pane_t1

0x4321,	// (0x000234bc) query_popup_data_pane_t2_ParamLimits

0x4321,	// (0x000234bc) query_popup_data_pane_t2

0x4367,	// (0x00023502) query_popup_data_pane_t3_ParamLimits

0x4367,	// (0x00023502) query_popup_data_pane_t3

0x43a8,	// (0x00023543) query_popup_data_pane_t4_ParamLimits

0x43a8,	// (0x00023543) query_popup_data_pane_t4

0x43e4,	// (0x0002357f) query_popup_data_pane_t5_ParamLimits

0x43e4,	// (0x0002357f) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002e841) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002e841) query_popup_data_pane_t

0x410b,	// (0x000232a6) bg_set_opt_pane_g1

0x4113,	// (0x000232ae) bg_set_opt_pane_g2

0x411b,	// (0x000232b6) bg_set_opt_pane_g3

0x4123,	// (0x000232be) bg_set_opt_pane_g4

0x412b,	// (0x000232c6) bg_set_opt_pane_g5

0x4133,	// (0x000232ce) bg_set_opt_pane_g6

0x413b,	// (0x000232d6) bg_set_opt_pane_g7

0x4143,	// (0x000232de) bg_set_opt_pane_g8

0x414b,	// (0x000232e6) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0002e84c) bg_set_opt_pane_g

0x1ac9,	// (0x00020c64) control_top_pane_stacon_ParamLimits

0x1ac9,	// (0x00020c64) control_top_pane_stacon

0x1b1c,	// (0x00020cb7) signal_pane_stacon_ParamLimits

0x1b1c,	// (0x00020cb7) signal_pane_stacon

0x49d6,	// (0x00023b71) stacon_top_pane_g1_ParamLimits

0x49d6,	// (0x00023b71) stacon_top_pane_g1

0x1b41,	// (0x00020cdc) title_pane_stacon_ParamLimits

0x1b41,	// (0x00020cdc) title_pane_stacon

0x1b6b,	// (0x00020d06) uni_indicator_pane_stacon_ParamLimits

0x1b6b,	// (0x00020d06) uni_indicator_pane_stacon

0x1b80,	// (0x00020d1b) battery_pane_stacon_ParamLimits

0x1b80,	// (0x00020d1b) battery_pane_stacon

0x1bc4,	// (0x00020d5f) control_bottom_pane_stacon_ParamLimits

0x1bc4,	// (0x00020d5f) control_bottom_pane_stacon

0x1be7,	// (0x00020d82) navi_pane_stacon_ParamLimits

0x1be7,	// (0x00020d82) navi_pane_stacon

0x49f8,	// (0x00023b93) stacon_bottom_pane_g1_ParamLimits

0x49f8,	// (0x00023b93) stacon_bottom_pane_g1

0x182c,	// (0x000209c7) aid_levels_signal_lsc_ParamLimits

0x182c,	// (0x000209c7) aid_levels_signal_lsc

0x1842,	// (0x000209dd) signal_pane_stacon_g1_ParamLimits

0x1842,	// (0x000209dd) signal_pane_stacon_g1

0x1856,	// (0x000209f1) signal_pane_stacon_g2_ParamLimits

0x1856,	// (0x000209f1) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002e85f) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002e85f) signal_pane_stacon_g

0x188b,	// (0x00020a26) title_pane_stacon_t1_ParamLimits

0x188b,	// (0x00020a26) title_pane_stacon_t1

0x4428,	// (0x000235c3) uni_indicator_pane_stacon_g1

0x4432,	// (0x000235cd) uni_indicator_pane_stacon_g2

0x443c,	// (0x000235d7) uni_indicator_pane_stacon_g3

0x4446,	// (0x000235e1) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0002e86b) uni_indicator_pane_stacon_g

0x18b0,	// (0x00020a4b) control_top_pane_stacon_g1

0x18b8,	// (0x00020a53) control_top_pane_stacon_t1_ParamLimits

0x18b8,	// (0x00020a53) control_top_pane_stacon_t1

0x18ef,	// (0x00020a8a) aid_levels_battery_lsc_ParamLimits

0x18ef,	// (0x00020a8a) aid_levels_battery_lsc

0x1906,	// (0x00020aa1) battery_pane_stacon_g1_ParamLimits

0x1906,	// (0x00020aa1) battery_pane_stacon_g1

0x1919,	// (0x00020ab4) battery_pane_stacon_g2_ParamLimits

0x1919,	// (0x00020ab4) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0002e874) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0002e874) battery_pane_stacon_g

0x1957,	// (0x00020af2) navi_icon_pane_stacon

0x196b,	// (0x00020b06) navi_navi_pane_stacon

0x1957,	// (0x00020af2) navi_text_pane_stacon

0x18b0,	// (0x00020a4b) control_bottom_pane_stacon_g1

0x197f,	// (0x00020b1a) control_bottom_pane_stacon_t1_ParamLimits

0x197f,	// (0x00020b1a) control_bottom_pane_stacon_t1

0xd46d,	// (0x0002c608) grid_app_pane_ParamLimits

0xd46d,	// (0x0002c608) grid_app_pane

0xd4a5,	// (0x0002c640) scroll_pane_cp15_ParamLimits

0xd4a5,	// (0x0002c640) scroll_pane_cp15

0xd4ba,	// (0x0002c655) cell_app_pane_ParamLimits

0xd4ba,	// (0x0002c655) cell_app_pane

0xd4ff,	// (0x0002c69a) cell_app_pane_g1_ParamLimits

0xd4ff,	// (0x0002c69a) cell_app_pane_g1

0x44eb,	// (0x00023686) cell_app_pane_g2_ParamLimits

0x44eb,	// (0x00023686) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0002e879) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0002e879) cell_app_pane_g

0xd523,	// (0x0002c6be) cell_app_pane_t1_ParamLimits

0xd523,	// (0x0002c6be) cell_app_pane_t1

0x450e,	// (0x000236a9) grid_highlight_pane_ParamLimits

0x450e,	// (0x000236a9) grid_highlight_pane

0x410b,	// (0x000232a6) cell_highlight_pane_g1

0x4113,	// (0x000232ae) cell_highlight_pane_g2

0x411b,	// (0x000232b6) cell_highlight_pane_g3

0x4123,	// (0x000232be) cell_highlight_pane_g4

0x412b,	// (0x000232c6) cell_highlight_pane_g5

0x4133,	// (0x000232ce) cell_highlight_pane_g6

0x413b,	// (0x000232d6) cell_highlight_pane_g7

0x4143,	// (0x000232de) cell_highlight_pane_g8

0x414b,	// (0x000232e6) cell_highlight_pane_g9

0x3734,	// (0x000228cf) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0002e827) cell_highlight_pane_g

0x451f,	// (0x000236ba) bg_scroll_pane

0x19c9,	// (0x00020b64) scroll_handle_pane

0x4566,	// (0x00023701) scroll_bg_pane_g1

0x457b,	// (0x00023716) scroll_bg_pane_g2

0x4593,	// (0x0002372e) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002e87e) scroll_bg_pane_g

0x45a8,	// (0x00023743) scroll_handle_focus_pane_ParamLimits

0x45a8,	// (0x00023743) scroll_handle_focus_pane

0x4566,	// (0x00023701) scroll_handle_pane_g1

0x45b5,	// (0x00023750) scroll_handle_pane_g2

0x4593,	// (0x0002372e) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0002e885) scroll_handle_pane_g

0x415c,	// (0x000232f7) bg_popup_sub_pane_cp21_ParamLimits

0x415c,	// (0x000232f7) bg_popup_sub_pane_cp21

0x45c9,	// (0x00023764) popup_fep_japan_predictive_window_t1_ParamLimits

0x45c9,	// (0x00023764) popup_fep_japan_predictive_window_t1

0x45e3,	// (0x0002377e) popup_fep_japan_predictive_window_t2_ParamLimits

0x45e3,	// (0x0002377e) popup_fep_japan_predictive_window_t2

0x4616,	// (0x000237b1) popup_fep_japan_predictive_window_t3_ParamLimits

0x4616,	// (0x000237b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0002e88c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0002e88c) popup_fep_japan_predictive_window_t

0x373e,	// (0x000228d9) bg_popup_sub_pane_cp23

0x464d,	// (0x000237e8) listscroll_japin_cand_pane

0x4655,	// (0x000237f0) popup_fep_japan_candidate_window_t1

0x4663,	// (0x000237fe) candidate_pane_ParamLimits

0x4663,	// (0x000237fe) candidate_pane

0x4675,	// (0x00023810) scroll_pane_cp30

0x467d,	// (0x00023818) list_single_popup_jap_candidate_pane_ParamLimits

0x467d,	// (0x00023818) list_single_popup_jap_candidate_pane

0x373e,	// (0x000228d9) list_highlight_pane_cp30

0x4692,	// (0x0002382d) list_single_popup_jap_candidate_pane_t1

0x46a1,	// (0x0002383c) level_1_signal

0x46b3,	// (0x0002384e) level_2_signal

0x46c6,	// (0x00023861) level_3_signal

0x46d9,	// (0x00023874) level_4_signal

0x46ec,	// (0x00023887) level_5_signal

0x46ff,	// (0x0002389a) level_6_signal

0x4712,	// (0x000238ad) level_7_signal

0x46a1,	// (0x0002383c) level_1_battery

0x46b3,	// (0x0002384e) level_2_battery

0x46c6,	// (0x00023861) level_3_battery

0x46d9,	// (0x00023874) level_4_battery

0x46ec,	// (0x00023887) level_5_battery

0x46ff,	// (0x0002389a) level_6_battery

0x4712,	// (0x000238ad) level_7_battery

0x473d,	// (0x000238d8) list_menu_pane_ParamLimits

0x473d,	// (0x000238d8) list_menu_pane

0x4753,	// (0x000238ee) scroll_pane_cp25_ParamLimits

0x4753,	// (0x000238ee) scroll_pane_cp25

0x476c,	// (0x00023907) list_double2_graphic_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double2_graphic_pane_cp2

0x476c,	// (0x00023907) list_double2_large_graphic_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double2_large_graphic_pane_cp2

0x476c,	// (0x00023907) list_double2_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double2_pane_cp2

0x476c,	// (0x00023907) list_double_graphic_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double_graphic_pane_cp2

0x476c,	// (0x00023907) list_double_large_graphic_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double_large_graphic_pane_cp2

0x476c,	// (0x00023907) list_double_number_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double_number_pane_cp2

0x476c,	// (0x00023907) list_double_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_2graphic_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_2graphic_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_graphic_heading_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_graphic_heading_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_graphic_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_graphic_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_heading_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_heading_pane_cp2

0x47a9,	// (0x00023944) list_single_large_graphic_pane_cp2_ParamLimits

0x47a9,	// (0x00023944) list_single_large_graphic_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_number_heading_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_number_heading_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_number_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_number_pane_cp2

0xd53a,	// (0x0002c6d5) list_single_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_pane_cp2

0x4825,	// (0x000239c0) bg_popup_sub_pane_cp22

0x1a7b,	// (0x00020c16) popup_side_volume_key_window_g1

0x1aa5,	// (0x00020c40) popup_side_volume_key_window_t1

0x1ac1,	// (0x00020c5c) volume_small_pane_cp1

0x3a99,	// (0x00022c34) bg_popup_sub_pane_cp24_ParamLimits

0x3a99,	// (0x00022c34) bg_popup_sub_pane_cp24

0x483b,	// (0x000239d6) fep_china_uni_candidate_pane_ParamLimits

0x483b,	// (0x000239d6) fep_china_uni_candidate_pane

0x484f,	// (0x000239ea) fep_china_uni_entry_pane

0x485f,	// (0x000239fa) popup_fep_china_uni_window_g1

0x487b,	// (0x00023a16) fep_china_uni_entry_pane_g1

0x4883,	// (0x00023a1e) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002e8bd) fep_china_uni_entry_pane_g

0x488b,	// (0x00023a26) fep_entry_item_pane

0x4895,	// (0x00023a30) fep_candidate_item_pane

0x489d,	// (0x00023a38) fep_china_uni_candidate_pane_g1

0x48a5,	// (0x00023a40) fep_china_uni_candidate_pane_g2

0x48ad,	// (0x00023a48) fep_china_uni_candidate_pane_g3

0x48b5,	// (0x00023a50) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002e8c2) fep_china_uni_candidate_pane_g

0x3734,	// (0x000228cf) fep_entry_item_pane_g1

0x48bd,	// (0x00023a58) fep_entry_item_pane_t1_ParamLimits

0x48bd,	// (0x00023a58) fep_entry_item_pane_t1

0x48d3,	// (0x00023a6e) fep_candidate_item_pane_t1_ParamLimits

0x48d3,	// (0x00023a6e) fep_candidate_item_pane_t1

0x48e8,	// (0x00023a83) fep_candidate_item_pane_t2_ParamLimits

0x48e8,	// (0x00023a83) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0002e8cb) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0002e8cb) fep_candidate_item_pane_t

0x381e,	// (0x000229b9) list_highlight_pane_cp31_ParamLimits

0x381e,	// (0x000229b9) list_highlight_pane_cp31

0x48fa,	// (0x00023a95) level_1_signal_lsc

0x4903,	// (0x00023a9e) level_2_signal_lsc

0x490c,	// (0x00023aa7) level_3_signal_lsc

0x4915,	// (0x00023ab0) level_4_signal_lsc

0x491e,	// (0x00023ab9) level_5_signal_lsc

0x4927,	// (0x00023ac2) level_6_signal_lsc

0x4930,	// (0x00023acb) level_7_signal_lsc

0x4930,	// (0x00023acb) level_1_battery_lsc

0x4939,	// (0x00023ad4) level_2_battery_lsc

0x4942,	// (0x00023add) level_3_battery_lsc

0x494b,	// (0x00023ae6) level_4_battery_lsc

0x4954,	// (0x00023aef) level_5_battery_lsc

0x495d,	// (0x00023af8) level_6_battery_lsc

0x48fa,	// (0x00023a95) level_7_battery_lsc

0x4966,	// (0x00023b01) scroll_handle_focus_pane_g1

0x496f,	// (0x00023b0a) scroll_handle_focus_pane_g2

0x4978,	// (0x00023b13) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002e8d0) scroll_handle_focus_pane_g

0xbcce,	// (0x0002ae69) list_single_2graphic_pane_g1_ParamLimits

0xbcce,	// (0x0002ae69) list_single_2graphic_pane_g1

0xb7b7,	// (0x0002a952) list_single_2graphic_pane_g2_ParamLimits

0xb7b7,	// (0x0002a952) list_single_2graphic_pane_g2

0x0a1e,	// (0x0001fbb9) list_single_2graphic_pane_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_2graphic_pane_g3

0xbcda,	// (0x0002ae75) list_single_2graphic_pane_g4_ParamLimits

0xbcda,	// (0x0002ae75) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0002e8d7) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0002e8d7) list_single_2graphic_pane_g

0xbce6,	// (0x0002ae81) list_single_2graphic_pane_t1_ParamLimits

0xbce6,	// (0x0002ae81) list_single_2graphic_pane_t1

0xbd14,	// (0x0002aeaf) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbd14,	// (0x0002aeaf) list_double2_graphic_large_graphic_pane_g1

0xb822,	// (0x0002a9bd) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb822,	// (0x0002a9bd) list_double2_graphic_large_graphic_pane_g2

0xb833,	// (0x0002a9ce) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb833,	// (0x0002a9ce) list_double2_graphic_large_graphic_pane_g3

0xbd26,	// (0x0002aec1) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd26,	// (0x0002aec1) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0002e8e0) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0002e8e0) list_double2_graphic_large_graphic_pane_g

0xbd32,	// (0x0002aecd) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd32,	// (0x0002aecd) list_double2_graphic_large_graphic_pane_t1

0xbd48,	// (0x0002aee3) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd48,	// (0x0002aee3) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0002e8e9) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0002e8e9) list_double2_graphic_large_graphic_pane_t

0x4ac0,	// (0x00023c5b) popup_fast_swap_window_ParamLimits

0x4ac0,	// (0x00023c5b) popup_fast_swap_window

0x4adc,	// (0x00023c77) popup_side_volume_key_window

0x4af8,	// (0x00023c93) stacon_top_pane

0x4b02,	// (0x00023c9d) status_pane_ParamLimits

0x4b02,	// (0x00023c9d) status_pane

0xd5c7,	// (0x0002c762) status_small_pane

0x373e,	// (0x000228d9) control_pane

0x373e,	// (0x000228d9) stacon_bottom_pane

0x4096,	// (0x00023231) scroll_pane_cp121

0x408d,	// (0x00023228) set_content_pane

0x4981,	// (0x00023b1c) bg_active_tab_pane_g1_cp1

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp1

0x4993,	// (0x00023b2e) bg_active_tab_pane_g3_cp1

0x4981,	// (0x00023b1c) bg_passive_tab_pane_g1_cp1

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp1

0x4993,	// (0x00023b2e) bg_passive_tab_pane_g3_cp1

0x499c,	// (0x00023b37) bg_active_tab_pane_g1_cp2

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp2

0x49a5,	// (0x00023b40) bg_active_tab_pane_g3_cp2

0x499c,	// (0x00023b37) bg_passive_tab_pane_g1_cp2

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp2

0x49a5,	// (0x00023b40) bg_passive_tab_pane_g3_cp2

0x49ae,	// (0x00023b49) bg_active_tab_pane_g1_cp3

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp3

0x49b7,	// (0x00023b52) bg_active_tab_pane_g3_cp3

0x49ae,	// (0x00023b49) bg_passive_tab_pane_g1_cp3

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp3

0x49b7,	// (0x00023b52) bg_passive_tab_pane_g3_cp3

0x49c0,	// (0x00023b5b) bg_active_tab_pane_g1_cp4

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp4

0x49cb,	// (0x00023b66) bg_active_tab_pane_g3_cp4

0x49c0,	// (0x00023b5b) bg_passive_tab_pane_g1_cp4

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp4

0x49cb,	// (0x00023b66) bg_passive_tab_pane_g3_cp4

0x4a14,	// (0x00023baf) bg_active_tab_pane_g1_cp5

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp5

0x4a1d,	// (0x00023bb8) bg_active_tab_pane_g3_cp5

0x4a14,	// (0x00023baf) bg_passive_tab_pane_g1_cp5

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp5

0x4a1d,	// (0x00023bb8) bg_passive_tab_pane_g3_cp5

0x70cb,	// (0x00026266) list_set_graphic_pane_ParamLimits

0x70cb,	// (0x00026266) list_set_graphic_pane

0x373e,	// (0x000228d9) bg_set_opt_pane_cp4

0x4a43,	// (0x00023bde) list_set_graphic_pane_g1_ParamLimits

0x4a43,	// (0x00023bde) list_set_graphic_pane_g1

0x4a4f,	// (0x00023bea) list_set_graphic_pane_g2_ParamLimits

0x4a4f,	// (0x00023bea) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0002e8ee) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0002e8ee) list_set_graphic_pane_g

0x0009,

0xfab5,	// (0x0002ec50) volume_small_pane_cp_g

0x4a73,	// (0x00023c0e) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4a73,	// (0x00023c0e) list_double2_large_graphic_pane_g1_cp2

0x4a7f,	// (0x00023c1a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4a7f,	// (0x00023c1a) list_double2_large_graphic_pane_g2_cp2

0x4a90,	// (0x00023c2b) list_double2_large_graphic_pane_g3_cp2

0x4a98,	// (0x00023c33) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4a98,	// (0x00023c33) list_double2_large_graphic_pane_t1_cp2

0x4aae,	// (0x00023c49) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4aae,	// (0x00023c49) list_double2_large_graphic_pane_t2_cp2

0x668c,	// (0x00025827) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x668c,	// (0x00025827) list_double_large_graphic_pane_g1_cp2

0x669d,	// (0x00025838) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x669d,	// (0x00025838) list_double_large_graphic_pane_g2_cp2

0x4c29,	// (0x00023dc4) list_double_large_graphic_pane_g3_cp2

0x66ae,	// (0x00025849) list_double_large_graphic_pane_g4_cp

0x66b6,	// (0x00025851) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x66b6,	// (0x00025851) list_double_large_graphic_pane_t1_cp2

0x66cd,	// (0x00025868) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x66cd,	// (0x00025868) list_double_large_graphic_pane_t2_cp2

0x4b1b,	// (0x00023cb6) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4b1b,	// (0x00023cb6) list_double2_graphic_pane_g1_cp2

0x4b29,	// (0x00023cc4) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4b29,	// (0x00023cc4) list_double2_graphic_pane_g2_cp2

0x4b3a,	// (0x00023cd5) list_double2_graphic_pane_g3_cp2

0x4b44,	// (0x00023cdf) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4b44,	// (0x00023cdf) list_double2_graphic_pane_t1_cp2

0x4b5a,	// (0x00023cf5) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b5a,	// (0x00023cf5) list_double2_graphic_pane_t2_cp2

0x4b6c,	// (0x00023d07) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b6c,	// (0x00023d07) list_single_number_heading_pane_g1_cp2

0x4b78,	// (0x00023d13) list_single_number_heading_pane_g2_cp2

0x4b80,	// (0x00023d1b) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4b80,	// (0x00023d1b) list_single_number_heading_pane_t1_cp2

0x4b96,	// (0x00023d31) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4b96,	// (0x00023d31) list_single_number_heading_pane_t2_cp2

0x4ba8,	// (0x00023d43) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4ba8,	// (0x00023d43) list_single_number_heading_pane_t3_cp2

0x4b6c,	// (0x00023d07) list_single_heading_pane_g1_cp2_ParamLimits

0x4b6c,	// (0x00023d07) list_single_heading_pane_g1_cp2

0x4b78,	// (0x00023d13) list_single_heading_pane_g2_cp2

0x4b80,	// (0x00023d1b) list_single_heading_pane_t1_cp2_ParamLimits

0x4b80,	// (0x00023d1b) list_single_heading_pane_t1_cp2

0x6494,	// (0x0002562f) list_single_heading_pane_t2_cp2_ParamLimits

0x6494,	// (0x0002562f) list_single_heading_pane_t2_cp2

0x63dc,	// (0x00025577) list_double_graphic_pane_g1_cp2_ParamLimits

0x63dc,	// (0x00025577) list_double_graphic_pane_g1_cp2

0x63e8,	// (0x00025583) list_double_graphic_pane_g2_cp2_ParamLimits

0x63e8,	// (0x00025583) list_double_graphic_pane_g2_cp2

0x63f7,	// (0x00025592) list_double_graphic_pane_g3_cp2

0x63ff,	// (0x0002559a) list_double_graphic_pane_t1_cp2_ParamLimits

0x63ff,	// (0x0002559a) list_double_graphic_pane_t1_cp2

0x6415,	// (0x000255b0) list_double_graphic_pane_t2_cp2_ParamLimits

0x6415,	// (0x000255b0) list_double_graphic_pane_t2_cp2

0x4c1d,	// (0x00023db8) list_double_number_pane_g1_cp2_ParamLimits

0x4c1d,	// (0x00023db8) list_double_number_pane_g1_cp2

0x4c29,	// (0x00023dc4) list_double_number_pane_g2_cp2

0x63a0,	// (0x0002553b) list_double_number_pane_t1_cp2_ParamLimits

0x63a0,	// (0x0002553b) list_double_number_pane_t1_cp2

0x63b4,	// (0x0002554f) list_double_number_pane_t2_cp2_ParamLimits

0x63b4,	// (0x0002554f) list_double_number_pane_t2_cp2

0x63ca,	// (0x00025565) list_double_number_pane_t3_cp2_ParamLimits

0x63ca,	// (0x00025565) list_double_number_pane_t3_cp2

0x6289,	// (0x00025424) list_single_graphic_pane_g1_cp2_ParamLimits

0x6289,	// (0x00025424) list_single_graphic_pane_g1_cp2

0x4c81,	// (0x00023e1c) list_single_graphic_pane_g2_cp2_ParamLimits

0x4c81,	// (0x00023e1c) list_single_graphic_pane_g2_cp2

0x4c8d,	// (0x00023e28) list_single_graphic_pane_g3_cp2

0x625f,	// (0x000253fa) list_single_graphic_pane_t1_cp2_ParamLimits

0x625f,	// (0x000253fa) list_single_graphic_pane_t1_cp2

0x4c81,	// (0x00023e1c) list_single_number_pane_g1_cp2_ParamLimits

0x4c81,	// (0x00023e1c) list_single_number_pane_g1_cp2

0x4c8d,	// (0x00023e28) list_single_number_pane_g2_cp2

0x625f,	// (0x000253fa) list_single_number_pane_t1_cp2_ParamLimits

0x625f,	// (0x000253fa) list_single_number_pane_t1_cp2

0x6275,	// (0x00025410) list_single_number_pane_t2_cp2_ParamLimits

0x6275,	// (0x00025410) list_single_number_pane_t2_cp2

0x4a7f,	// (0x00023c1a) list_double2_pane_g1_cp2_ParamLimits

0x4a7f,	// (0x00023c1a) list_double2_pane_g1_cp2

0x4a90,	// (0x00023c2b) list_double2_pane_g2_cp2

0x4bf5,	// (0x00023d90) list_double2_pane_t1_cp2_ParamLimits

0x4bf5,	// (0x00023d90) list_double2_pane_t1_cp2

0x4c0b,	// (0x00023da6) list_double2_pane_t2_cp2_ParamLimits

0x4c0b,	// (0x00023da6) list_double2_pane_t2_cp2

0x4c1d,	// (0x00023db8) list_double_pane_g1_cp2_ParamLimits

0x4c1d,	// (0x00023db8) list_double_pane_g1_cp2

0x4c29,	// (0x00023dc4) list_double_pane_g2_cp2

0x4c31,	// (0x00023dcc) list_double_pane_t1_cp2_ParamLimits

0x4c31,	// (0x00023dcc) list_double_pane_t1_cp2

0x4c47,	// (0x00023de2) list_double_pane_t2_cp2_ParamLimits

0x4c47,	// (0x00023de2) list_double_pane_t2_cp2

0x4c71,	// (0x00023e0c) list_single_pane_cp2_g3

0x4c81,	// (0x00023e1c) list_single_pane_g1_cp2_ParamLimits

0x4c81,	// (0x00023e1c) list_single_pane_g1_cp2

0x4c8d,	// (0x00023e28) list_single_pane_g2_cp2

0x4c95,	// (0x00023e30) list_single_pane_t1_cp2_ParamLimits

0x4c95,	// (0x00023e30) list_single_pane_t1_cp2

0x4cad,	// (0x00023e48) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4cad,	// (0x00023e48) list_single_large_graphic_pane_g1_cp2

0x4cb9,	// (0x00023e54) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4cb9,	// (0x00023e54) list_single_large_graphic_pane_g2_cp2

0x4cc5,	// (0x00023e60) list_single_large_graphic_pane_g3_cp2

0x4ccd,	// (0x00023e68) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4ccd,	// (0x00023e68) list_single_large_graphic_pane_g4_cp1

0x4ce7,	// (0x00023e82) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4ce7,	// (0x00023e82) list_single_large_graphic_pane_t1_cp2

0x622b,	// (0x000253c6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x622b,	// (0x000253c6) list_single_graphic_heading_pane_g1_cp2

0x61f8,	// (0x00025393) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x61f8,	// (0x00025393) list_single_graphic_heading_pane_g4_cp2

0x4c8d,	// (0x00023e28) list_single_graphic_heading_pane_g5_cp2

0x6237,	// (0x000253d2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x6237,	// (0x000253d2) list_single_graphic_heading_pane_t1_cp2

0x624d,	// (0x000253e8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x624d,	// (0x000253e8) list_single_graphic_heading_pane_t2_cp2

0x61ec,	// (0x00025387) list_single_2graphic_pane_g1_cp2_ParamLimits

0x61ec,	// (0x00025387) list_single_2graphic_pane_g1_cp2

0x61f8,	// (0x00025393) list_single_2graphic_pane_g2_cp2_ParamLimits

0x61f8,	// (0x00025393) list_single_2graphic_pane_g2_cp2

0x4c8d,	// (0x00023e28) list_single_2graphic_pane_g3_cp2

0x6209,	// (0x000253a4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6209,	// (0x000253a4) list_single_2graphic_pane_g4_cp2

0x6215,	// (0x000253b0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6215,	// (0x000253b0) list_single_2graphic_pane_t1_cp2

0x3734,	// (0x000228cf) list_highlight_pane_g10_cp1

0x5dc4,	// (0x00024f5f) list_highlight_pane_g1_cp1

0x5dcc,	// (0x00024f67) list_highlight_pane_g2_cp1

0x5dd4,	// (0x00024f6f) list_highlight_pane_g3_cp1

0x5ddc,	// (0x00024f77) list_highlight_pane_g4_cp1

0x5de4,	// (0x00024f7f) list_highlight_pane_g5_cp1

0x5dec,	// (0x00024f87) list_highlight_pane_g6_cp1

0x5df4,	// (0x00024f8f) list_highlight_pane_g7_cp1

0x5dfc,	// (0x00024f97) list_highlight_pane_g8_cp1

0x5e04,	// (0x00024f9f) list_highlight_pane_g9_cp1

0xdc45,	// (0x0002cde0) form_field_slider_pane_t3

0xdc53,	// (0x0002cdee) form_field_slider_pane_t4

0x5d00,	// (0x00024e9b) slider_form_pane_ParamLimits

0x5d00,	// (0x00024e9b) slider_form_pane

0x373e,	// (0x000228d9) control_abbreviations

0x373e,	// (0x000228d9) control_conventions

0x373e,	// (0x000228d9) control_definitions

0x373e,	// (0x000228d9) format_table_attribute

0x64de,	// (0x00025679) bg_popup_preview_window_pane_g9

0x373e,	// (0x000228d9) format_table_data2

0x373e,	// (0x000228d9) format_table_data3

0x373e,	// (0x000228d9) format_table_data_example

0x0008,

0x373e,	// (0x000228d9) intro_purpose

0xf8e3,	// (0x0002ea7e) bg_popup_preview_window_pane_g

0x373e,	// (0x000228d9) texts_category

0x373e,	// (0x000228d9) texts_graphics

0x4cfd,	// (0x00023e98) text_digital

0x4d0c,	// (0x00023ea7) text_primary

0x4d1b,	// (0x00023eb6) text_primary_small

0x4d2a,	// (0x00023ec5) text_secondary

0x4d39,	// (0x00023ed4) text_title

0x6c0d,	// (0x00025da8) bg_passive_tab_pane_g1_cp3_srt

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp3_srt

0x6c16,	// (0x00025db1) bg_passive_tab_pane_g3_cp3_srt

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp3_srt_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp3_srt

0x6c1f,	// (0x00025dba) tabs_4_active_pane_srt_g1

0xdf85,	// (0x0002d120) tabs_4_active_pane_srt_t1_ParamLimits

0xdf85,	// (0x0002d120) tabs_4_active_pane_srt_t1

0x6c0d,	// (0x00025da8) bg_active_tab_pane_g1_cp3_copy1

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp3_copy1

0x6c16,	// (0x00025db1) bg_active_tab_pane_g3_cp3_copy1

0x381e,	// (0x000229b9) tabs_2_long_active_pane_srt_ParamLimits

0x381e,	// (0x000229b9) tabs_2_long_active_pane_srt

0x381e,	// (0x000229b9) tabs_2_long_passive_pane_srt_ParamLimits

0x381e,	// (0x000229b9) tabs_2_long_passive_pane_srt

0x506c,	// (0x00024207) bg_passive_tab_pane_cp4_srt_ParamLimits

0x506c,	// (0x00024207) bg_passive_tab_pane_cp4_srt

0x6901,	// (0x00025a9c) bg_passive_tab_pane_g1_cp4_srt

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp4_srt

0x690a,	// (0x00025aa5) bg_passive_tab_pane_g3_cp4_srt

0x381e,	// (0x000229b9) bg_active_tab_pane_cp4_srt_ParamLimits

0x381e,	// (0x000229b9) bg_active_tab_pane_cp4_srt

0xddaf,	// (0x0002cf4a) tabs_2_long_active_pane_srt_t1_ParamLimits

0xddaf,	// (0x0002cf4a) tabs_2_long_active_pane_srt_t1

0x6901,	// (0x00025a9c) bg_active_tab_pane_g1_cp4_srt

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp4_srt

0x690a,	// (0x00025aa5) bg_active_tab_pane_g3_cp4_srt

0x3a99,	// (0x00022c34) tabs_3_long_active_pane_srt_ParamLimits

0x3a99,	// (0x00022c34) tabs_3_long_active_pane_srt

0x3a99,	// (0x00022c34) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3a99,	// (0x00022c34) tabs_3_long_passive_pane_cp_srt

0x3a99,	// (0x00022c34) tabs_3_long_passive_pane_srt_ParamLimits

0x3a99,	// (0x00022c34) tabs_3_long_passive_pane_srt

0x506c,	// (0x00024207) bg_passive_tab_pane_cp5_srt_ParamLimits

0x506c,	// (0x00024207) bg_passive_tab_pane_cp5_srt

0x4a14,	// (0x00023baf) bg_passive_tab_pane_g1_cp5_srt

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp5_srt

0x4a1d,	// (0x00023bb8) bg_passive_tab_pane_g3_cp5_srt

0x381e,	// (0x000229b9) bg_active_tab_pane_cp5_srt_ParamLimits

0x381e,	// (0x000229b9) bg_active_tab_pane_cp5_srt

0xdd99,	// (0x0002cf34) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd99,	// (0x0002cf34) tabs_3_long_active_pane_srt_t1

0x4a14,	// (0x00023baf) bg_active_tab_pane_g1_cp5_srt

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp5_srt

0x4a1d,	// (0x00023bb8) bg_active_tab_pane_g3_cp5_srt

0x68e1,	// (0x00025a7c) navi_text_pane_srt_t1

0x68d9,	// (0x00025a74) navi_icon_pane_srt_g1

0x4f0e,	// (0x000240a9) midp_editing_number_pane_srt

0x4d48,	// (0x00023ee3) midp_ticker_pane_srt

0x4f16,	// (0x000240b1) midp_ticker_pane_srt_g1

0x4f1e,	// (0x000240b9) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0002e90d) midp_ticker_pane_srt_g

0x4f26,	// (0x000240c1) midp_ticker_pane_srt_t1

0x68ca,	// (0x00025a65) midp_editing_number_pane_t1_copy1

0xd5d2,	// (0x0002c76d) listscroll_midp_pane

0xd5d2,	// (0x0002c76d) midp_form_pane

0x4dc0,	// (0x00023f5b) midp_info_popup_window_ParamLimits

0x4dc0,	// (0x00023f5b) midp_info_popup_window

0x415c,	// (0x000232f7) bg_popup_sub_pane_cp50_ParamLimits

0x415c,	// (0x000232f7) bg_popup_sub_pane_cp50

0x59f0,	// (0x00024b8b) listscroll_midp_info_pane_ParamLimits

0x59f0,	// (0x00024b8b) listscroll_midp_info_pane

0x59d0,	// (0x00024b6b) listscroll_form_midp_pane_ParamLimits

0x59d0,	// (0x00024b6b) listscroll_form_midp_pane

0x59dc,	// (0x00024b77) scroll_bar_cp050

0x59d0,	// (0x00024b6b) list_midp_pane

0x765d,	// (0x000267f8) signal_pane_g2_cp

0x58ea,	// (0x00024a85) listscroll_midp_info_pane_t1_ParamLimits

0x58ea,	// (0x00024a85) listscroll_midp_info_pane_t1

0x5902,	// (0x00024a9d) listscroll_midp_info_pane_t2_ParamLimits

0x5902,	// (0x00024a9d) listscroll_midp_info_pane_t2

0x5940,	// (0x00024adb) listscroll_midp_info_pane_t3_ParamLimits

0x5940,	// (0x00024adb) listscroll_midp_info_pane_t3

0x597a,	// (0x00024b15) listscroll_midp_info_pane_t4_ParamLimits

0x597a,	// (0x00024b15) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x0002e9b9) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x0002e9b9) listscroll_midp_info_pane_t

0x4220,	// (0x000233bb) scroll_pane_cp21

0x5888,	// (0x00024a23) form_midp_field_choice_group_pane

0x5891,	// (0x00024a2c) form_midp_field_text_pane

0x58d0,	// (0x00024a6b) form_midp_field_time_pane

0x58d8,	// (0x00024a73) form_midp_gauge_slider_pane

0x58e1,	// (0x00024a7c) form_midp_gauge_wait_pane

0x373e,	// (0x000228d9) form_midp_image_pane

0xbd5a,	// (0x0002aef5) list_single_midp_pane_ParamLimits

0xbd5a,	// (0x0002aef5) list_single_midp_pane

0xdc24,	// (0x0002cdbf) form_midp_field_text_pane_t1

0x5604,	// (0x0002479f) input_focus_pane_cp050

0x586b,	// (0x00024a06) list_midp_form_text_pane

0x5803,	// (0x0002499e) form_midp_field_choice_group_pane_t1

0x5811,	// (0x000249ac) input_focus_pane_cp051

0x5825,	// (0x000249c0) list_midp_choice_pane

0x373e,	// (0x000228d9) status_idle_pane

0x57e7,	// (0x00024982) form_midp_field_time_pane_t1

0x3734,	// (0x000228cf) wait_anim_pane_g2_copy1

0x57f5,	// (0x00024990) form_midp_field_time_pane_t2

0x0001,

0x4e6e,	// (0x00024009) aid_navinavi_width_2_pane

0xf819,	// (0x0002e9b4) form_midp_field_time_pane_t

0x373e,	// (0x000228d9) input_focus_pane_cp052

0x373e,	// (0x000228d9) bg_input_focus_pane_cp040

0x57a7,	// (0x00024942) form_midp_gauge_slider_pane_t1

0x57b5,	// (0x00024950) form_midp_gauge_slider_pane_t2

0xdc08,	// (0x0002cda3) form_midp_gauge_slider_pane_t3

0xdc16,	// (0x0002cdb1) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x0002e9ab) form_midp_gauge_slider_pane_t

0x57df,	// (0x0002497a) form_midp_slider_pane

0x381e,	// (0x000229b9) bg_input_focus_pane_cp041_ParamLimits

0x381e,	// (0x000229b9) bg_input_focus_pane_cp041

0x5774,	// (0x0002490f) form_midp_gauge_wait_pane_t1_ParamLimits

0x5774,	// (0x0002490f) form_midp_gauge_wait_pane_t1

0x5786,	// (0x00024921) form_midp_gauge_wait_pane_t2_ParamLimits

0x5786,	// (0x00024921) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x0002e9a6) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x0002e9a6) form_midp_gauge_wait_pane_t

0x5798,	// (0x00024933) form_midp_wait_pane_ParamLimits

0x5798,	// (0x00024933) form_midp_wait_pane

0x573e,	// (0x000248d9) form_midp_image_pane_g1

0x5747,	// (0x000248e2) form_midp_image_pane_t1

0x5756,	// (0x000248f1) form_midp_image_pane_t2

0x5765,	// (0x00024900) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002e99f) form_midp_image_pane_t

0x5735,	// (0x000248d0) list_single_midp_pane_g1

0x0b24,	// (0x0001fcbf) list_single_midp_pane_t1

0xdbf4,	// (0x0002cd8f) list_midp_form_item_pane_ParamLimits

0xdbf4,	// (0x0002cd8f) list_midp_form_item_pane

0x4e16,	// (0x00023fb1) list_midp_form_item_pane_t1

0x4e25,	// (0x00023fc0) midp_ticker_pane_g1

0x4e31,	// (0x00023fcc) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0002e8f3) midp_ticker_pane_g

0x4e3d,	// (0x00023fd8) midp_ticker_pane_t1

0x6b1b,	// (0x00025cb6) midp_editing_number_pane_t1

0x6af9,	// (0x00025c94) midp_editing_number_pane

0x6b08,	// (0x00025ca3) midp_ticker_pane

0x68ba,	// (0x00025a55) ai_message_heading_pane

0x373e,	// (0x000228d9) bg_popup_window_pane_cp14

0x68c2,	// (0x00025a5d) listscroll_ai_message_pane

0x6844,	// (0x000259df) ai_message_heading_pane_g1_ParamLimits

0x6844,	// (0x000259df) ai_message_heading_pane_g1

0x6850,	// (0x000259eb) ai_message_heading_pane_g2_ParamLimits

0x6850,	// (0x000259eb) ai_message_heading_pane_g2

0x685c,	// (0x000259f7) ai_message_heading_pane_g3_ParamLimits

0x685c,	// (0x000259f7) ai_message_heading_pane_g3

0x6868,	// (0x00025a03) ai_message_heading_pane_g4_ParamLimits

0x6868,	// (0x00025a03) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x0002eae0) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x0002eae0) ai_message_heading_pane_g

0x6874,	// (0x00025a0f) ai_message_heading_pane_t1_ParamLimits

0x6874,	// (0x00025a0f) ai_message_heading_pane_t1

0x688e,	// (0x00025a29) ai_message_heading_pane_t2_ParamLimits

0x688e,	// (0x00025a29) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x0002eae9) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x0002eae9) ai_message_heading_pane_t

0x68a0,	// (0x00025a3b) bg_popup_heading_pane_cp1_ParamLimits

0x68a0,	// (0x00025a3b) bg_popup_heading_pane_cp1

0x6832,	// (0x000259cd) list_ai_message_pane_ParamLimits

0x6832,	// (0x000259cd) list_ai_message_pane

0x4220,	// (0x000233bb) scroll_pane_cp10

0x67ce,	// (0x00025969) list_ai_message_pane_g1

0x67d6,	// (0x00025971) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002eabd) list_ai_message_pane_g

0x67de,	// (0x00025979) list_ai_message_pane_t1_ParamLimits

0x67de,	// (0x00025979) list_ai_message_pane_t1

0x67f3,	// (0x0002598e) list_ai_message_pane_t2_ParamLimits

0x67f3,	// (0x0002598e) list_ai_message_pane_t2

0x6808,	// (0x000259a3) list_ai_message_pane_t3_ParamLimits

0x6808,	// (0x000259a3) list_ai_message_pane_t3

0x681d,	// (0x000259b8) list_ai_message_pane_t4_ParamLimits

0x681d,	// (0x000259b8) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002eac2) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002eac2) list_ai_message_pane_t

0xdd78,	// (0x0002cf13) cell_ai_soft_ind_pane_ParamLimits

0xdd78,	// (0x0002cf13) cell_ai_soft_ind_pane

0x4e4f,	// (0x00023fea) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e4f,	// (0x00023fea) cell_ai_soft_ind_pane_g1

0x373e,	// (0x000228d9) grid_highlight_cp1

0x4e5c,	// (0x00023ff7) text_secondary_cp56_ParamLimits

0x4e5c,	// (0x00023ff7) text_secondary_cp56

0x678e,	// (0x00025929) example_general_pane_ParamLimits

0x678e,	// (0x00025929) example_general_pane

0x679a,	// (0x00025935) example_parent_pane_g1_ParamLimits

0x679a,	// (0x00025935) example_parent_pane_g1

0x67a6,	// (0x00025941) example_parent_pane_t1_ParamLimits

0x67a6,	// (0x00025941) example_parent_pane_t1

0xc754,	// (0x0002b8ef) popup_preview_text_window_ParamLimits

0xc754,	// (0x0002b8ef) popup_preview_text_window

0x4c79,	// (0x00023e14) list_single_pane_cp2_g4

0x3b75,	// (0x00022d10) bg_popup_preview_window_pane_ParamLimits

0x3b75,	// (0x00022d10) bg_popup_preview_window_pane

0x64e6,	// (0x00025681) popup_preview_text_window_t1_ParamLimits

0x64e6,	// (0x00025681) popup_preview_text_window_t1

0x6504,	// (0x0002569f) popup_preview_text_window_t2_ParamLimits

0x6504,	// (0x0002569f) popup_preview_text_window_t2

0x654d,	// (0x000256e8) popup_preview_text_window_t3_ParamLimits

0x654d,	// (0x000256e8) popup_preview_text_window_t3

0x6592,	// (0x0002572d) popup_preview_text_window_t4_ParamLimits

0x6592,	// (0x0002572d) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002ea91) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002ea91) popup_preview_text_window_t

0x6610,	// (0x000257ab) scroll_pane_cp11

0x5590,	// (0x0002472b) bg_popup_preview_window_pane_g1

0x64a6,	// (0x00025641) bg_popup_preview_window_pane_g2

0x64ae,	// (0x00025649) bg_popup_preview_window_pane_g3

0x64b6,	// (0x00025651) bg_popup_preview_window_pane_g4

0x64be,	// (0x00025659) bg_popup_preview_window_pane_g5

0x64c6,	// (0x00025661) bg_popup_preview_window_pane_g6

0x64ce,	// (0x00025669) bg_popup_preview_window_pane_g7

0x64d6,	// (0x00025671) bg_popup_preview_window_pane_g8

0x13b8,	// (0x00020553) aid_popup_width_pane

0xc6d0,	// (0x0002b86b) popup_midp_note_alarm_window_ParamLimits

0xc6d0,	// (0x0002b86b) popup_midp_note_alarm_window

0x40a7,	// (0x00023242) data_form_pane_ParamLimits

0xbbc0,	// (0x0002ad5b) form_field_data_pane_g1

0xbbca,	// (0x0002ad65) form_field_data_pane_t1_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_ParamLimits

0x07bb,	// (0x0001f956) data_form_wide_pane_ParamLimits

0x07cc,	// (0x0001f967) form_field_data_wide_pane_g1

0x07d8,	// (0x0001f973) form_field_data_wide_pane_t1_ParamLimits

0x3e24,	// (0x00022fbf) input_focus_pane_cp6_ParamLimits

0xd428,	// (0x0002c5c3) input_popup_find_pane_g1_ParamLimits

0xd428,	// (0x0002c5c3) input_popup_find_pane_g1

0x192a,	// (0x00020ac5) aid_navi_side_left_pane

0x193f,	// (0x00020ada) aid_navi_side_right_pane

0x5ebf,	// (0x0002505a) bg_popup_window_pane_cp30_ParamLimits

0x5ebf,	// (0x0002505a) bg_popup_window_pane_cp30

0x5f39,	// (0x000250d4) popup_midp_note_alarm_window_g1_ParamLimits

0x5f39,	// (0x000250d4) popup_midp_note_alarm_window_g1

0x5f69,	// (0x00025104) popup_midp_note_alarm_window_t1_ParamLimits

0x5f69,	// (0x00025104) popup_midp_note_alarm_window_t1

0x600a,	// (0x000251a5) popup_midp_note_alarm_window_t2_ParamLimits

0x600a,	// (0x000251a5) popup_midp_note_alarm_window_t2

0x60b8,	// (0x00025253) popup_midp_note_alarm_window_t3_ParamLimits

0x60b8,	// (0x00025253) popup_midp_note_alarm_window_t3

0x60ea,	// (0x00025285) popup_midp_note_alarm_window_t4_ParamLimits

0x60ea,	// (0x00025285) popup_midp_note_alarm_window_t4

0x6110,	// (0x000252ab) popup_midp_note_alarm_window_t5_ParamLimits

0x6110,	// (0x000252ab) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x0002ea2e) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x0002ea2e) popup_midp_note_alarm_window_t

0x61bc,	// (0x00025357) wait_bar_pane_cp1_ParamLimits

0x61bc,	// (0x00025357) wait_bar_pane_cp1

0x373e,	// (0x000228d9) wait_anim_pane_copy1

0x373e,	// (0x000228d9) wait_border_pane_copy1

0x5ba5,	// (0x00024d40) wait_border_pane_g1_copy1

0x07f2,	// (0x0001f98d) form_field_popup_pane_g1

0xbbe4,	// (0x0002ad7f) form_field_popup_pane_t1_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_cp7_ParamLimits

0x40e1,	// (0x0002327c) list_form_pane_ParamLimits

0x0812,	// (0x0001f9ad) form_field_popup_wide_pane_g1

0x081a,	// (0x0001f9b5) form_field_popup_wide_pane_t1_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_cp8_ParamLimits

0x40ed,	// (0x00023288) list_form_wide_pane_ParamLimits

0xdfde,	// (0x0002d179) aid_size_cell_graphic_pane

0xbc63,	// (0x0002adfe) data_form_pane_t1_ParamLimits

0xbd83,	// (0x0002af1e) data_form_wide_pane_t1_ParamLimits

0xd83b,	// (0x0002c9d6) bg_status_flat_pane

0xd0e7,	// (0x0002c282) title_pane_t1_ParamLimits

0x37e6,	// (0x00022981) title_pane_t2_ParamLimits

0x380c,	// (0x000229a7) title_pane_t3_ParamLimits

0xf557,	// (0x0002e6f2) title_pane_t_ParamLimits

0x46a1,	// (0x0002383c) level_1_signal_ParamLimits

0x46b3,	// (0x0002384e) level_2_signal_ParamLimits

0x46c6,	// (0x00023861) level_3_signal_ParamLimits

0x46d9,	// (0x00023874) level_4_signal_ParamLimits

0x46ec,	// (0x00023887) level_5_signal_ParamLimits

0x46ff,	// (0x0002389a) level_6_signal_ParamLimits

0x4712,	// (0x000238ad) level_7_signal_ParamLimits

0x46a1,	// (0x0002383c) level_1_battery_ParamLimits

0x46b3,	// (0x0002384e) level_2_battery_ParamLimits

0x46c6,	// (0x00023861) level_3_battery_ParamLimits

0x46d9,	// (0x00023874) level_4_battery_ParamLimits

0x46ec,	// (0x00023887) level_5_battery_ParamLimits

0x46ff,	// (0x0002389a) level_6_battery_ParamLimits

0x4712,	// (0x000238ad) level_7_battery_ParamLimits

0x5dc4,	// (0x00024f5f) bg_status_flat_pane_g1

0x5dcc,	// (0x00024f67) bg_status_flat_pane_g2

0x5dd4,	// (0x00024f6f) bg_status_flat_pane_g3

0x5ddc,	// (0x00024f77) bg_status_flat_pane_g4

0x5de4,	// (0x00024f7f) bg_status_flat_pane_g5

0x5dec,	// (0x00024f87) bg_status_flat_pane_g6

0x5df4,	// (0x00024f8f) bg_status_flat_pane_g7

0xd173,	// (0x0002c30e) tabs_3_active_pane_t1_ParamLimits

0xd173,	// (0x0002c30e) tabs_3_passive_pane_t1_ParamLimits

0xd185,	// (0x0002c320) tabs_4_active_pane_t1_ParamLimits

0xd185,	// (0x0002c320) tabs_4_1_passive_pane_t1_ParamLimits

0xd436,	// (0x0002c5d1) tabs_2_active_pane_t1_ParamLimits

0xd436,	// (0x0002c5d1) tabs_2_passive_pane_t1_ParamLimits

0x381e,	// (0x000229b9) bg_active_tab_pane_cp4_ParamLimits

0xd448,	// (0x0002c5e3) tabs_2_long_active_pane_t1_ParamLimits

0x506c,	// (0x00024207) bg_passive_tab_pane_cp4_ParamLimits

0xda26,	// (0x0002cbc1) list_single_midp_graphic_pane_t1_ParamLimits

0x381e,	// (0x000229b9) bg_active_tab_pane_cp5_ParamLimits

0xd45b,	// (0x0002c5f6) tabs_3_long_active_pane_t1_ParamLimits

0x506c,	// (0x00024207) bg_passive_tab_pane_cp5_ParamLimits

0xda26,	// (0x0002cbc1) list_single_midp_graphic_pane_t1

0xd83b,	// (0x0002c9d6) bg_status_flat_pane_ParamLimits

0x5220,	// (0x000243bb) indicator_pane_cp2_ParamLimits

0x5220,	// (0x000243bb) indicator_pane_cp2

0xd9b9,	// (0x0002cb54) navi_pane_srt_ParamLimits

0xd9b9,	// (0x0002cb54) navi_pane_srt

0x536f,	// (0x0002450a) popup_clock_digital_analogue_window_cp1

0x38fb,	// (0x00022a96) indicator_pane_t1

0x4d48,	// (0x00023ee3) copy_highlight_pane

0x4d48,	// (0x00023ee3) cursor_graphics_pane

0x4d48,	// (0x00023ee3) graphic_within_text_pane

0x4d48,	// (0x00023ee3) link_highlight_pane

0x65d3,	// (0x0002576e) popup_preview_text_window_t5_ParamLimits

0x65d3,	// (0x0002576e) popup_preview_text_window_t5

0x4e76,	// (0x00024011) cursor_digital_pane

0x4e76,	// (0x00024011) cursor_primary_pane

0x4e87,	// (0x00024022) cursor_primary_small_pane

0x4e8f,	// (0x0002402a) cursor_secondary_pane

0x4e97,	// (0x00024032) cursor_title_pane

0x4e76,	// (0x00024011) link_highlight_digital_pane

0x4e7e,	// (0x00024019) link_highlight_primary_pane

0x4e87,	// (0x00024022) link_highlight_primary_small_pane

0x4e8f,	// (0x0002402a) link_highlight_secondary_pane

0x4e97,	// (0x00024032) link_highlight_title_pane

0x4e76,	// (0x00024011) copy_highlight_digital_pane

0x4e76,	// (0x00024011) copy_highlight_primary_pane

0x4e87,	// (0x00024022) copy_highlight_primary_small_pane

0x4e8f,	// (0x0002402a) copy_highlight_secondary_pane

0x4e97,	// (0x00024032) copy_highlight_title_pane

0x4e8f,	// (0x0002402a) graphic_text_digital_pane

0x5e62,	// (0x00024ffd) graphic_text_primary_pane

0x5e6b,	// (0x00025006) graphic_text_primary_small_pane

0x4e87,	// (0x00024022) graphic_text_secondary_pane

0x4e76,	// (0x00024011) graphic_text_title_pane

0xd677,	// (0x0002c812) cursor_primary_pane_g1

0x5e54,	// (0x00024fef) cursor_text_primary_t1

0xdc75,	// (0x0002ce10) cursor_primary_small_pane_g1

0x5e46,	// (0x00024fe1) cursor_text_primary_small_t1

0xdc6b,	// (0x0002ce06) cursor_primary_small_pane_g1_copy1

0x5e2e,	// (0x00024fc9) cursor_text_primary_small_t1_copy1

0x5e0c,	// (0x00024fa7) cursor_text_title_t1

0xdc61,	// (0x0002cdfc) cursor_title_pane_g1

0xd677,	// (0x0002c812) cursor_digital_pane_g1

0x4ea9,	// (0x00024044) cursor_text_digital_t1

0x4ece,	// (0x00024069) link_highlight_primary_pane_g1

0x5db5,	// (0x00024f50) link_highlight_primary_pane_t1

0x4eb7,	// (0x00024052) link_highlight_primary_small_pane_g1

0x4ebf,	// (0x0002405a) link_highlight_primary_small_pane_t1

0x4ece,	// (0x00024069) link_highlight_secondary_pane_g1

0x4ed6,	// (0x00024071) link_highlight_secondary_pane_t1

0x5d29,	// (0x00024ec4) link_highlight_title_pane_g1

0x5d31,	// (0x00024ecc) link_highlight_title_pane_t1

0x5d12,	// (0x00024ead) link_highlight_digital_pane_g1

0x5d1a,	// (0x00024eb5) link_highlight_digital_pane_t1

0x5bea,	// (0x00024d85) copy_highlight_primary_pane_g1

0x5bf2,	// (0x00024d8d) copy_highlight_primary_pane_t1

0x5bc4,	// (0x00024d5f) copy_highlight_primary_small_pane_g1

0x5bdb,	// (0x00024d76) copy_highlight_primary_small_pane_t1

0x4ee5,	// (0x00024080) copy_highlight_secondary_pane_g1

0x4eed,	// (0x00024088) copy_highlight_secondary_pane_t1

0x5bc4,	// (0x00024d5f) copy_highlight_title_pane_g1

0x5bcc,	// (0x00024d67) copy_highlight_title_pane_t1

0x5bea,	// (0x00024d85) copy_highlight_digital_pane_g1

0x6e6f,	// (0x0002600a) copy_highlight_digital_pane_t1

0x6dc3,	// (0x00025f5e) graphic_text_primary_pane_g1

0x6e53,	// (0x00025fee) graphic_text_primary_pane_t1

0x6e61,	// (0x00025ffc) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002eb5d) graphic_text_primary_pane_t

0x6e2f,	// (0x00025fca) graphic_text_primary_small_pane_g1

0x6e37,	// (0x00025fd2) graphic_text_primary_small_pane_t1

0x6e45,	// (0x00025fe0) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x0002eb58) graphic_text_primary_small_pane_t

0x6e0b,	// (0x00025fa6) graphic_text_secondary_pane_g1

0x6e13,	// (0x00025fae) graphic_text_secondary_pane_t1

0x6e21,	// (0x00025fbc) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0002eb53) graphic_text_secondary_pane_t

0x6de7,	// (0x00025f82) graphic_text_title_pane_g1

0x6def,	// (0x00025f8a) graphic_text_title_pane_t1

0x6dfd,	// (0x00025f98) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002eb4e) graphic_text_title_pane_t

0x6dc3,	// (0x00025f5e) graphic_text_digital_pane_g1

0x6dcb,	// (0x00025f66) graphic_text_digital_pane_t1

0x6dd9,	// (0x00025f74) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x0002eb49) graphic_text_digital_pane_t

0x381e,	// (0x000229b9) navi_icon_pane_srt_ParamLimits

0x381e,	// (0x000229b9) navi_icon_pane_srt

0x373e,	// (0x000228d9) navi_midp_pane_srt

0x373e,	// (0x000228d9) navi_navi_pane_srt

0x381e,	// (0x000229b9) navi_text_pane_srt_ParamLimits

0x381e,	// (0x000229b9) navi_text_pane_srt

0x6d8e,	// (0x00025f29) navi_navi_icon_text_pane_srt

0x6d96,	// (0x00025f31) navi_navi_pane_srt_g1_ParamLimits

0x6d96,	// (0x00025f31) navi_navi_pane_srt_g1

0x6da8,	// (0x00025f43) navi_navi_pane_srt_g2_ParamLimits

0x6da8,	// (0x00025f43) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0002eb44) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0002eb44) navi_navi_pane_srt_g

0x6dba,	// (0x00025f55) navi_navi_tabs_pane_srt

0x6d8e,	// (0x00025f29) navi_navi_text_pane_srt

0x6d8e,	// (0x00025f29) navi_navi_volume_pane_srt

0x6d7f,	// (0x00025f1a) navi_navi_text_pane_srt_t1

0x27af,	// (0x0002194a) navi_navi_volume_pane_srt_g1

0x27b7,	// (0x00021952) volume_small_pane_srt_ParamLimits

0x27b7,	// (0x00021952) volume_small_pane_srt

0x1c0a,	// (0x00020da5) volume_small_pane_srt_g1_ParamLimits

0x1c0a,	// (0x00020da5) volume_small_pane_srt_g1

0x1c1a,	// (0x00020db5) volume_small_pane_srt_g2_ParamLimits

0x1c1a,	// (0x00020db5) volume_small_pane_srt_g2

0x1c2b,	// (0x00020dc6) volume_small_pane_srt_g3_ParamLimits

0x1c2b,	// (0x00020dc6) volume_small_pane_srt_g3

0x1c3c,	// (0x00020dd7) volume_small_pane_srt_g4_ParamLimits

0x1c3c,	// (0x00020dd7) volume_small_pane_srt_g4

0x1c4d,	// (0x00020de8) volume_small_pane_srt_g5_ParamLimits

0x1c4d,	// (0x00020de8) volume_small_pane_srt_g5

0x1c5e,	// (0x00020df9) volume_small_pane_srt_g6_ParamLimits

0x1c5e,	// (0x00020df9) volume_small_pane_srt_g6

0x1c6f,	// (0x00020e0a) volume_small_pane_srt_g7_ParamLimits

0x1c6f,	// (0x00020e0a) volume_small_pane_srt_g7

0x1c80,	// (0x00020e1b) volume_small_pane_srt_g8_ParamLimits

0x1c80,	// (0x00020e1b) volume_small_pane_srt_g8

0x1c91,	// (0x00020e2c) volume_small_pane_srt_g9_ParamLimits

0x1c91,	// (0x00020e2c) volume_small_pane_srt_g9

0x1ca2,	// (0x00020e3d) volume_small_pane_srt_g10_ParamLimits

0x1ca2,	// (0x00020e3d) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0002e8f8) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0002e8f8) volume_small_pane_srt_g

0x3c1e,	// (0x00022db9) query_popup_data_pane_cp2

0x6d65,	// (0x00025f00) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6d65,	// (0x00025f00) navi_navi_icon_text_pane_srt_t1

0x5e62,	// (0x00024ffd) navi_tabs_2_long_pane_srt

0x5e62,	// (0x00024ffd) navi_tabs_2_pane_srt

0x5e62,	// (0x00024ffd) navi_tabs_3_long_pane_srt

0x5e62,	// (0x00024ffd) navi_tabs_3_pane_srt

0x5e62,	// (0x00024ffd) navi_tabs_4_pane_srt

0x278f,	// (0x0002192a) tabs_2_active_pane_srt_ParamLimits

0x278f,	// (0x0002192a) tabs_2_active_pane_srt

0x279f,	// (0x0002193a) tabs_2_passive_pane_srt_ParamLimits

0x279f,	// (0x0002193a) tabs_2_passive_pane_srt

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp1_srt

0x6d31,	// (0x00025ecc) bg_passive_tab_pane_g1_cp1_srt

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp1_srt

0x6d3a,	// (0x00025ed5) bg_passive_tab_pane_g3_cp1_srt

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp1_srt_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp1_srt

0x6d43,	// (0x00025ede) tabs_2_active_pane_srt_g1

0xe020,	// (0x0002d1bb) tabs_2_active_pane_srt_t1_ParamLimits

0xe020,	// (0x0002d1bb) tabs_2_active_pane_srt_t1

0x6d31,	// (0x00025ecc) bg_active_tab_pane_g1_cp1_srt

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp1_srt

0x6d3a,	// (0x00025ed5) bg_active_tab_pane_g3_cp1_srt

0x275c,	// (0x000218f7) tabs_3_active_pane_srt_ParamLimits

0x275c,	// (0x000218f7) tabs_3_active_pane_srt

0x276d,	// (0x00021908) tabs_3_passive_pane_cp_srt_ParamLimits

0x276d,	// (0x00021908) tabs_3_passive_pane_cp_srt

0x277e,	// (0x00021919) tabs_3_passive_pane_srt_ParamLimits

0x277e,	// (0x00021919) tabs_3_passive_pane_srt

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5604,	// (0x0002479f) bg_passive_tab_pane_cp2_srt

0x4efc,	// (0x00024097) bg_passive_tab_pane_g1_cp2_srt

0x498a,	// (0x00023b25) bg_passive_tab_pane_g2_cp2_srt

0x4f05,	// (0x000240a0) bg_passive_tab_pane_g3_cp2_srt

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp2_srt_ParamLimits

0x3a99,	// (0x00022c34) bg_active_tab_pane_cp2_srt

0x6d17,	// (0x00025eb2) tabs_3_active_pane_srt_g1

0xe00a,	// (0x0002d1a5) tabs_3_active_pane_srt_t1_ParamLimits

0xe00a,	// (0x0002d1a5) tabs_3_active_pane_srt_t1

0x4efc,	// (0x00024097) bg_active_tab_pane_g1_cp2_srt

0x498a,	// (0x00023b25) bg_active_tab_pane_g2_cp2_srt

0x4f05,	// (0x000240a0) bg_active_tab_pane_g3_cp2_srt

0x2714,	// (0x000218af) tabs_4_active_pane_srt_ParamLimits

0x2714,	// (0x000218af) tabs_4_active_pane_srt

0x2726,	// (0x000218c1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2726,	// (0x000218c1) tabs_4_passive_pane_cp2_srt

0x1e11,	// (0x00020fac) aid_size_cell_toolbar

0x6972,	// (0x00025b0d) main_idle_act_pane_ParamLimits

0x1fb2,	// (0x0002114d) popup_large_graphic_colour_window_ParamLimits

0xc9e0,	// (0x0002bb7b) popup_toolbar_window_ParamLimits

0xc9e0,	// (0x0002bb7b) popup_toolbar_window

0x6b2a,	// (0x00025cc5) list_single_graphic_2heading_pane_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_graphic_2heading_pane

0x4450,	// (0x000235eb) aid_size_cell_apps_grid_lsc_pane

0x4462,	// (0x000235fd) aid_size_cell_apps_grid_prt_pane

0x506c,	// (0x00024207) bg_wml_button_pane_cp1_ParamLimits

0x506c,	// (0x00024207) bg_wml_button_pane_cp1

0xdc24,	// (0x0002cdbf) form_midp_field_text_pane_t1_ParamLimits

0x5604,	// (0x0002479f) input_focus_pane_cp050_ParamLimits

0x586b,	// (0x00024a06) list_midp_form_text_pane_ParamLimits

0x5811,	// (0x000249ac) input_focus_pane_cp051_ParamLimits

0x5825,	// (0x000249c0) list_midp_choice_pane_ParamLimits

0xdbc2,	// (0x0002cd5d) list_single_2graphic_pane_cp3_ParamLimits

0xdbc2,	// (0x0002cd5d) list_single_2graphic_pane_cp3

0xdbd5,	// (0x0002cd70) list_single_midp_graphic_pane_ParamLimits

0xdbd5,	// (0x0002cd70) list_single_midp_graphic_pane

0x0a06,	// (0x0001fba1) list_single_graphic_2heading_pane_g1_ParamLimits

0x0a06,	// (0x0001fba1) list_single_graphic_2heading_pane_g1

0x0a12,	// (0x0001fbad) list_single_graphic_2heading_pane_g4_ParamLimits

0x0a12,	// (0x0001fbad) list_single_graphic_2heading_pane_g4

0x0a1e,	// (0x0001fbb9) list_single_graphic_2heading_pane_g5_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0002e94b) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0002e94b) list_single_graphic_2heading_pane_g

0x0a2a,	// (0x0001fbc5) list_single_graphic_2heading_pane_t1_ParamLimits

0x0a2a,	// (0x0001fbc5) list_single_graphic_2heading_pane_t1

0x0a3e,	// (0x0001fbd9) list_single_graphic_2heading_pane_t2_ParamLimits

0x0a3e,	// (0x0001fbd9) list_single_graphic_2heading_pane_t2

0x0a58,	// (0x0001fbf3) list_single_graphic_2heading_pane_t3_ParamLimits

0x0a58,	// (0x0001fbf3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002e952) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002e952) list_single_graphic_2heading_pane_t

0x54ce,	// (0x00024669) bg_popup_sub_pane_cp2

0x54f8,	// (0x00024693) grid_toobar_pane

0x23c6,	// (0x00021561) cell_toolbar_pane_ParamLimits

0x23c6,	// (0x00021561) cell_toolbar_pane

0x5534,	// (0x000246cf) cell_toolbar_pane_g1_ParamLimits

0x5534,	// (0x000246cf) cell_toolbar_pane_g1

0x5548,	// (0x000246e3) cell_toolbar_pane_g2_ParamLimits

0x5548,	// (0x000246e3) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0002e959) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0002e959) cell_toolbar_pane_g

0x556a,	// (0x00024705) grid_highlight_pane_cp2_ParamLimits

0x556a,	// (0x00024705) grid_highlight_pane_cp2

0x5584,	// (0x0002471f) toolbar_button_pane

0x5590,	// (0x0002472b) toolbar_button_pane_g1

0x5598,	// (0x00024733) toolbar_button_pane_g2

0x55a0,	// (0x0002473b) toolbar_button_pane_g3

0x55a8,	// (0x00024743) toolbar_button_pane_g4

0x55b0,	// (0x0002474b) toolbar_button_pane_g5

0x55b8,	// (0x00024753) toolbar_button_pane_g6

0x55c0,	// (0x0002475b) toolbar_button_pane_g7

0x55c8,	// (0x00024763) toolbar_button_pane_g8

0x55d0,	// (0x0002476b) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002e95e) toolbar_button_pane_g

0x23fe,	// (0x00021599) list_single_2graphic_pane_g1_cp3_ParamLimits

0x23fe,	// (0x00021599) list_single_2graphic_pane_g1_cp3

0xca38,	// (0x0002bbd3) list_single_2graphic_pane_g2_cp3_ParamLimits

0xca38,	// (0x0002bbd3) list_single_2graphic_pane_g2_cp3

0x241b,	// (0x000215b6) list_single_2graphic_pane_g3_cp3

0x2423,	// (0x000215be) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2423,	// (0x000215be) list_single_2graphic_pane_g4_cp3

0x242f,	// (0x000215ca) list_single_2graphic_pane_t1_cp3_ParamLimits

0x242f,	// (0x000215ca) list_single_2graphic_pane_t1_cp3

0x587c,	// (0x00024a17) list_single_midp_graphic_pane_g2_ParamLimits

0x587c,	// (0x00024a17) list_single_midp_graphic_pane_g2

0x1e19,	// (0x00020fb4) aid_zoom_text_primary

0x09da,	// (0x0001fb75) aid_zoom_text_secondary

0xd6cf,	// (0x0002c86a) status_small_pane_g7_ParamLimits

0xd6cf,	// (0x0002c86a) status_small_pane_g7

0xd6f2,	// (0x0002c88d) status_small_pane_t1_ParamLimits

0xd0c3,	// (0x0002c25e) title_pane_g2

0x0003,

0xf54e,	// (0x0002e6e9) title_pane_g

0xd33b,	// (0x0002c4d6) aid_size_cell_colour_1_pane_ParamLimits

0xd33b,	// (0x0002c4d6) aid_size_cell_colour_1_pane

0xd34f,	// (0x0002c4ea) aid_size_cell_colour_2_pane_ParamLimits

0xd34f,	// (0x0002c4ea) aid_size_cell_colour_2_pane

0xd363,	// (0x0002c4fe) aid_size_cell_colour_3_pane_ParamLimits

0xd363,	// (0x0002c4fe) aid_size_cell_colour_3_pane

0xd377,	// (0x0002c512) aid_size_cell_colour_4_pane_ParamLimits

0xd377,	// (0x0002c512) aid_size_cell_colour_4_pane

0x1867,	// (0x00020a02) title_pane_stacon_g1_ParamLimits

0x1867,	// (0x00020a02) title_pane_stacon_g1

0x5c49,	// (0x00024de4) popup_note_wait_window_g3_ParamLimits

0x5c49,	// (0x00024de4) popup_note_wait_window_g3

0x5cbf,	// (0x00024e5a) popup_note_wait_window_t5_ParamLimits

0x5cbf,	// (0x00024e5a) popup_note_wait_window_t5

0x373e,	// (0x000228d9) main_feb_china_hwr_fs_writing_pane

0xc3e8,	// (0x0002b583) popup_feb_china_hwr_fs_window_ParamLimits

0xc3e8,	// (0x0002b583) popup_feb_china_hwr_fs_window

0xca49,	// (0x0002bbe4) aid_size_cell_hwr_fs_ParamLimits

0xca49,	// (0x0002bbe4) aid_size_cell_hwr_fs

0x5604,	// (0x0002479f) bg_popup_sub_pane_cp3_ParamLimits

0x5604,	// (0x0002479f) bg_popup_sub_pane_cp3

0xca5e,	// (0x0002bbf9) grid_hwr_fs_pane_ParamLimits

0xca5e,	// (0x0002bbf9) grid_hwr_fs_pane

0x2478,	// (0x00021613) linegrid_hwr_fs_pane_ParamLimits

0x2478,	// (0x00021613) linegrid_hwr_fs_pane

0xca76,	// (0x0002bc11) cell_hwr_fs_pane_ParamLimits

0xca76,	// (0x0002bc11) cell_hwr_fs_pane

0x5610,	// (0x000247ab) linegrid_hwr_fs_pane_g1_ParamLimits

0x5610,	// (0x000247ab) linegrid_hwr_fs_pane_g1

0xdb96,	// (0x0002cd31) linegrid_hwr_fs_pane_g2_ParamLimits

0xdb96,	// (0x0002cd31) linegrid_hwr_fs_pane_g2

0x562e,	// (0x000247c9) linegrid_hwr_fs_pane_g3_ParamLimits

0x562e,	// (0x000247c9) linegrid_hwr_fs_pane_g3

0x24aa,	// (0x00021645) linegrid_hwr_fs_pane_g4_ParamLimits

0x24aa,	// (0x00021645) linegrid_hwr_fs_pane_g4

0x24c4,	// (0x0002165f) linegrid_hwr_fs_pane_g5_ParamLimits

0x24c4,	// (0x0002165f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0002e984) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0002e984) linegrid_hwr_fs_pane_g

0x563a,	// (0x000247d5) cell_hwr_fs_pane_g1_ParamLimits

0x563a,	// (0x000247d5) cell_hwr_fs_pane_g1

0x5405,	// (0x000245a0) cell_hwr_fs_pane_g2_ParamLimits

0x5405,	// (0x000245a0) cell_hwr_fs_pane_g2

0xdba8,	// (0x0002cd43) cell_hwr_fs_pane_g3_ParamLimits

0xdba8,	// (0x0002cd43) cell_hwr_fs_pane_g3

0xdbb5,	// (0x0002cd50) cell_hwr_fs_pane_g4_ParamLimits

0xdbb5,	// (0x0002cd50) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002e98f) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002e98f) cell_hwr_fs_pane_g

0xca9c,	// (0x0002bc37) cell_hwr_fs_pane_t1

0x373e,	// (0x000228d9) grid_highlight_pane_cp6

0x373e,	// (0x000228d9) main_idle_act2_pane

0x4207,	// (0x000233a2) aid_inside_area_popup_secondary

0xdc7f,	// (0x0002ce1a) aid_inside_area_window_primary_ParamLimits

0xdc7f,	// (0x0002ce1a) aid_inside_area_window_primary

0x6e7e,	// (0x00026019) ai2_news_ticker_pane

0x6e86,	// (0x00026021) aid_size_cell_ai1_link_ParamLimits

0x6e86,	// (0x00026021) aid_size_cell_ai1_link

0xe036,	// (0x0002d1d1) popup_ai2_data_window_ParamLimits

0xe036,	// (0x0002d1d1) popup_ai2_data_window

0x6eb6,	// (0x00026051) popup_ai2_link_window_ParamLimits

0x6eb6,	// (0x00026051) popup_ai2_link_window

0x5604,	// (0x0002479f) bg_popup_sub_pane_cp4_ParamLimits

0x5604,	// (0x0002479f) bg_popup_sub_pane_cp4

0x6eca,	// (0x00026065) grid_ai2_link_pane_ParamLimits

0x6eca,	// (0x00026065) grid_ai2_link_pane

0x6ee1,	// (0x0002607c) popup_ai2_link_window_g1_ParamLimits

0x6ee1,	// (0x0002607c) popup_ai2_link_window_g1

0x6eed,	// (0x00026088) popup_ai2_link_window_g2_ParamLimits

0x6eed,	// (0x00026088) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002eb62) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002eb62) popup_ai2_link_window_g

0x6efc,	// (0x00026097) ai2_mp_button_pane

0x6f04,	// (0x0002609f) ai2_mp_volume_pane

0x5811,	// (0x000249ac) bg_popup_sub_pane_cp5_ParamLimits

0x5811,	// (0x000249ac) bg_popup_sub_pane_cp5

0x6f0c,	// (0x000260a7) heading_ai2_gene_pane_ParamLimits

0x6f0c,	// (0x000260a7) heading_ai2_gene_pane

0x6f18,	// (0x000260b3) list_ai2_gene_pane_ParamLimits

0x6f18,	// (0x000260b3) list_ai2_gene_pane

0x6f60,	// (0x000260fb) cell_ai2_link_pane_ParamLimits

0x6f60,	// (0x000260fb) cell_ai2_link_pane

0x6f76,	// (0x00026111) cell_ai2_link_pane_g1

0x373e,	// (0x000228d9) grid_highlight_pane_cp7

0x27cc,	// (0x00021967) ai2_mp_volume_pane_g1

0x7046,	// (0x000261e1) ai2_mp_volume_pane_g2

0xe060,	// (0x0002d1fb) list_ai2_gene_pane_t1

0x704e,	// (0x000261e9) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x0002eb7b) ai2_mp_volume_pane_g

0x27d4,	// (0x0002196f) volume_small_pane_cp3

0x7056,	// (0x000261f1) aid_size_cell_ai2_button

0x705e,	// (0x000261f9) grid_ai2_button_pane

0x7067,	// (0x00026202) cell_ai2_button_pane_ParamLimits

0x7067,	// (0x00026202) cell_ai2_button_pane

0x3734,	// (0x000228cf) cell_ai2_button_pane_g1

0x373e,	// (0x000228d9) grid_highlight_pane_cp8

0x7006,	// (0x000261a1) ai2_gene_pane_t1_ParamLimits

0x7006,	// (0x000261a1) ai2_gene_pane_t1

0xc372,	// (0x0002b50d) aid_height_parent_landscape

0xddc6,	// (0x0002cf61) aid_height_set_list

0x6972,	// (0x00025b0d) aid_size_parent

0xdfde,	// (0x0002d179) aid_size_cell_graphic_pane_ParamLimits

0x6f28,	// (0x000260c3) popup_ai2_data_window_g1_ParamLimits

0x6f28,	// (0x000260c3) popup_ai2_data_window_g1

0x6f34,	// (0x000260cf) ai2_news_ticker_pane_g1

0x6f3c,	// (0x000260d7) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x0002eb67) ai2_news_ticker_pane_g

0x6f44,	// (0x000260df) ai2_news_ticker_pane_t1

0x6f52,	// (0x000260ed) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x0002eb6c) ai2_news_ticker_pane_t

0x6f7f,	// (0x0002611a) heading_ai2_gene_pane_g1

0x6f87,	// (0x00026122) heading_ai2_gene_pane_t1_ParamLimits

0x6f87,	// (0x00026122) heading_ai2_gene_pane_t1

0x6f9c,	// (0x00026137) list_highlight_pane_cp6

0xe04a,	// (0x0002d1e5) ai2_gene_pane_ParamLimits

0xe04a,	// (0x0002d1e5) ai2_gene_pane

0xe06e,	// (0x0002d209) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002eb71) list_ai2_gene_pane_t

0x6fd7,	// (0x00026172) list_highlight_pane_cp8_ParamLimits

0x6fd7,	// (0x00026172) list_highlight_pane_cp8

0x6fe8,	// (0x00026183) ai2_gene_pane_g1_ParamLimits

0x6fe8,	// (0x00026183) ai2_gene_pane_g1

0x6ffa,	// (0x00026195) ai2_gene_pane_g2_ParamLimits

0x6ffa,	// (0x00026195) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x0002eb76) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x0002eb76) ai2_gene_pane_g

0x4049,	// (0x000231e4) scroll_pane_cp12

0xc32f,	// (0x0002b4ca) control_pane_t3_ParamLimits

0xc32f,	// (0x0002b4ca) control_pane_t3

0xd6e3,	// (0x0002c87e) status_small_pane_g8_ParamLimits

0xd6e3,	// (0x0002c87e) status_small_pane_g8

0xc47d,	// (0x0002b618) popup_find_window_ParamLimits

0xc70a,	// (0x0002b8a5) popup_note_image_window_ParamLimits

0x0a06,	// (0x0001fba1) list_double2_graphic_pane_vc_g1_ParamLimits

0x0a06,	// (0x0001fba1) list_double2_graphic_pane_vc_g1

0x0a12,	// (0x0001fbad) list_double2_graphic_pane_vc_g2_ParamLimits

0x0a12,	// (0x0001fbad) list_double2_graphic_pane_vc_g2

0x0a1e,	// (0x0001fbb9) list_double2_graphic_pane_vc_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e94b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e94b) list_double2_graphic_pane_vc_g

0x0a70,	// (0x0001fc0b) list_double2_graphic_pane_vc_t1_ParamLimits

0x0a70,	// (0x0001fc0b) list_double2_graphic_pane_vc_t1

0x0a12,	// (0x0001fbad) list_single_heading_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_heading_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_single_heading_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_heading_pane_vc_g

0x0a86,	// (0x0001fc21) list_single_heading_pane_vc_t1_ParamLimits

0x0a86,	// (0x0001fc21) list_single_heading_pane_vc_t1

0x0a9c,	// (0x0001fc37) list_single_heading_pane_vc_t2_ParamLimits

0x0a9c,	// (0x0001fc37) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0002e973) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0002e973) list_single_heading_pane_vc_t

0x0aae,	// (0x0001fc49) list_setting_number_pane_vc_g1_ParamLimits

0x0aae,	// (0x0001fc49) list_setting_number_pane_vc_g1

0x0aba,	// (0x0001fc55) list_setting_number_pane_vc_g2_ParamLimits

0x0aba,	// (0x0001fc55) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e978) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e978) list_setting_number_pane_vc_g

0x0ac6,	// (0x0001fc61) list_setting_number_pane_vc_t1_ParamLimits

0x0ac6,	// (0x0001fc61) list_setting_number_pane_vc_t1

0x0ada,	// (0x0001fc75) list_setting_number_pane_vc_t2_ParamLimits

0x0ada,	// (0x0001fc75) list_setting_number_pane_vc_t2

0x0af6,	// (0x0001fc91) list_setting_number_pane_vc_t3_ParamLimits

0x0af6,	// (0x0001fc91) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002e97d) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002e97d) list_setting_number_pane_vc_t

0x0b14,	// (0x0001fcaf) set_value_pane_vc_ParamLimits

0x0b14,	// (0x0001fcaf) set_value_pane_vc

0x6b2a,	// (0x00025cc5) list_double2_graphic_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double2_graphic_pane_vc

0x6b2a,	// (0x00025cc5) list_double2_large_graphic_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double2_large_graphic_pane_vc

0x6b2a,	// (0x00025cc5) list_double2_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double2_pane_vc

0x6b2a,	// (0x00025cc5) list_double_graphic_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_graphic_heading_pane_vc

0x6b2a,	// (0x00025cc5) list_double_graphic_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_graphic_pane_vc

0x6b2a,	// (0x00025cc5) list_double_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_heading_pane_vc

0x6b3c,	// (0x00025cd7) list_double_large_graphic_pane_vc_ParamLimits

0x6b3c,	// (0x00025cd7) list_double_large_graphic_pane_vc

0x6b2a,	// (0x00025cc5) list_double_number_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_number_pane_vc

0x6b2a,	// (0x00025cc5) list_double_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_pane_vc

0x6b2a,	// (0x00025cc5) list_double_time_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_double_time_pane_vc

0x6b2a,	// (0x00025cc5) list_setting_number_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_setting_number_pane_vc

0x6b2a,	// (0x00025cc5) list_setting_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_setting_pane_vc

0x6b2a,	// (0x00025cc5) list_single_graphic_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_graphic_heading_pane_vc

0x6b2a,	// (0x00025cc5) list_single_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_heading_pane_vc

0x6b2a,	// (0x00025cc5) list_single_number_heading_pane_vc_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_number_heading_pane_vc

0x0a06,	// (0x0001fba1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0a06,	// (0x0001fba1) list_double_graphic_heading_pane_vc_g1

0x0a12,	// (0x0001fbad) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0a12,	// (0x0001fbad) list_double_graphic_heading_pane_vc_g2

0x0a1e,	// (0x0001fbb9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b0,	// (0x0002e94b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e94b) list_double_graphic_heading_pane_vc_g

0x0c6e,	// (0x0001fe09) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x0c6e,	// (0x0001fe09) list_double_graphic_heading_pane_vc_t1

0x0c8a,	// (0x0001fe25) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x0c8a,	// (0x0001fe25) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e7,	// (0x0002eb82) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e7,	// (0x0002eb82) list_double_graphic_heading_pane_vc_t

0x0aae,	// (0x0001fc49) list_setting_pane_vc_g1_ParamLimits

0x0aae,	// (0x0001fc49) list_setting_pane_vc_g1

0x0aba,	// (0x0001fc55) list_setting_pane_vc_g2_ParamLimits

0x0aba,	// (0x0001fc55) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x0002e978) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x0002e978) list_setting_pane_vc_g

0x0ca8,	// (0x0001fe43) list_setting_pane_vc_t1_ParamLimits

0x0ca8,	// (0x0001fe43) list_setting_pane_vc_t1

0x0cc4,	// (0x0001fe5f) list_setting_pane_vc_t2_ParamLimits

0x0cc4,	// (0x0001fe5f) list_setting_pane_vc_t2

0x0001,

0xfa15,	// (0x0002ebb0) list_setting_pane_vc_t_ParamLimits

0xfa15,	// (0x0002ebb0) list_setting_pane_vc_t

0x0b14,	// (0x0001fcaf) set_value_pane_cp_vc_ParamLimits

0x0b14,	// (0x0001fcaf) set_value_pane_cp_vc

0x0a12,	// (0x0001fbad) list_single_number_heading_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_single_number_heading_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_single_number_heading_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_single_number_heading_pane_vc_g

0x0ce0,	// (0x0001fe7b) list_single_number_heading_pane_vc_t1_ParamLimits

0x0ce0,	// (0x0001fe7b) list_single_number_heading_pane_vc_t1

0x0cf6,	// (0x0001fe91) list_single_number_heading_pane_vc_t2_ParamLimits

0x0cf6,	// (0x0001fe91) list_single_number_heading_pane_vc_t2

0x0d08,	// (0x0001fea3) list_single_number_heading_pane_vc_t3_ParamLimits

0x0d08,	// (0x0001fea3) list_single_number_heading_pane_vc_t3

0x0002,

0xfa1a,	// (0x0002ebb5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa1a,	// (0x0002ebb5) list_single_number_heading_pane_vc_t

0x0a06,	// (0x0001fba1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0a06,	// (0x0001fba1) list_single_graphic_heading_pane_vc_g1

0x0a12,	// (0x0001fbad) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0a12,	// (0x0001fbad) list_single_graphic_heading_pane_vc_g4

0x0a1e,	// (0x0001fbb9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0a1e,	// (0x0001fbb9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0002e94b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0002e94b) list_single_graphic_heading_pane_vc_g

0x0d1a,	// (0x0001feb5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x0d1a,	// (0x0001feb5) list_single_graphic_heading_pane_vc_t1

0x0d30,	// (0x0001fecb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0d30,	// (0x0001fecb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa21,	// (0x0002ebbc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa21,	// (0x0002ebbc) list_single_graphic_heading_pane_vc_t

0x0a12,	// (0x0001fbad) list_double2_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_double2_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_double2_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_double2_pane_vc_g

0x0d42,	// (0x0001fedd) list_double2_pane_vc_t1_ParamLimits

0x0d42,	// (0x0001fedd) list_double2_pane_vc_t1

0x0d58,	// (0x0001fef3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0d58,	// (0x0001fef3) list_double2_large_graphic_pane_vc_g1

0x0a12,	// (0x0001fbad) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0a12,	// (0x0001fbad) list_double2_large_graphic_pane_vc_g2

0x0a1e,	// (0x0001fbb9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002e780) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002e780) list_double2_large_graphic_pane_vc_g

0x0d64,	// (0x0001feff) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0d64,	// (0x0001feff) list_double2_large_graphic_pane_vc_t1

0x0d7a,	// (0x0001ff15) list_double_time_pane_vc_g1_ParamLimits

0x0d7a,	// (0x0001ff15) list_double_time_pane_vc_g1

0x0d86,	// (0x0001ff21) list_double_time_pane_vc_g2_ParamLimits

0x0d86,	// (0x0001ff21) list_double_time_pane_vc_g2

0x0001,

0xfa26,	// (0x0002ebc1) list_double_time_pane_vc_g_ParamLimits

0xfa26,	// (0x0002ebc1) list_double_time_pane_vc_g

0x0d92,	// (0x0001ff2d) list_double_time_pane_vc_t1_ParamLimits

0x0d92,	// (0x0001ff2d) list_double_time_pane_vc_t1

0x0db6,	// (0x0001ff51) list_double_time_pane_vc_t2_ParamLimits

0x0db6,	// (0x0001ff51) list_double_time_pane_vc_t2

0x0e05,	// (0x0001ffa0) list_double_time_pane_vc_t3_ParamLimits

0x0e05,	// (0x0001ffa0) list_double_time_pane_vc_t3

0x0e17,	// (0x0001ffb2) list_double_time_pane_vc_t4_ParamLimits

0x0e17,	// (0x0001ffb2) list_double_time_pane_vc_t4

0x0003,

0xfa2b,	// (0x0002ebc6) list_double_time_pane_vc_t_ParamLimits

0xfa2b,	// (0x0002ebc6) list_double_time_pane_vc_t

0x0a12,	// (0x0001fbad) list_double_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_double_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_double_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_double_pane_vc_g

0x0e2b,	// (0x0001ffc6) list_double_pane_vc_t1_ParamLimits

0x0e2b,	// (0x0001ffc6) list_double_pane_vc_t1

0x0e3f,	// (0x0001ffda) list_double_pane_vc_t2_ParamLimits

0x0e3f,	// (0x0001ffda) list_double_pane_vc_t2

0x0001,

0xfa34,	// (0x0002ebcf) list_double_pane_vc_t_ParamLimits

0xfa34,	// (0x0002ebcf) list_double_pane_vc_t

0x0a12,	// (0x0001fbad) list_double_number_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_double_number_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_double_number_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_double_number_pane_vc_g

0x0e57,	// (0x0001fff2) list_double_number_pane_vc_t1_ParamLimits

0x0e57,	// (0x0001fff2) list_double_number_pane_vc_t1

0x0e69,	// (0x00020004) list_double_number_pane_vc_t2_ParamLimits

0x0e69,	// (0x00020004) list_double_number_pane_vc_t2

0x0e7d,	// (0x00020018) list_double_number_pane_vc_t3_ParamLimits

0x0e7d,	// (0x00020018) list_double_number_pane_vc_t3

0x0002,

0xfa39,	// (0x0002ebd4) list_double_number_pane_vc_t_ParamLimits

0xfa39,	// (0x0002ebd4) list_double_number_pane_vc_t

0x0e95,	// (0x00020030) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0e95,	// (0x00020030) list_double_large_graphic_pane_vc_g1

0x0eb7,	// (0x00020052) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0eb7,	// (0x00020052) list_double_large_graphic_pane_vc_g2

0x0ecb,	// (0x00020066) list_double_large_graphic_pane_vc_g3_ParamLimits

0x0ecb,	// (0x00020066) list_double_large_graphic_pane_vc_g3

0x0eda,	// (0x00020075) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0eda,	// (0x00020075) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa40,	// (0x0002ebdb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa40,	// (0x0002ebdb) list_double_large_graphic_pane_vc_g

0x0ee6,	// (0x00020081) list_double_large_graphic_pane_vc_t1_ParamLimits

0x0ee6,	// (0x00020081) list_double_large_graphic_pane_vc_t1

0x0f02,	// (0x0002009d) list_double_large_graphic_pane_vc_t2_ParamLimits

0x0f02,	// (0x0002009d) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa49,	// (0x0002ebe4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa49,	// (0x0002ebe4) list_double_large_graphic_pane_vc_t

0x0a12,	// (0x0001fbad) list_double_heading_pane_vc_g1_ParamLimits

0x0a12,	// (0x0001fbad) list_double_heading_pane_vc_g1

0x0a1e,	// (0x0001fbb9) list_double_heading_pane_vc_g2_ParamLimits

0x0a1e,	// (0x0001fbb9) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0002e763) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0002e763) list_double_heading_pane_vc_g

0x0f24,	// (0x000200bf) list_double_heading_pane_vc_t1_ParamLimits

0x0f24,	// (0x000200bf) list_double_heading_pane_vc_t1

0x0f38,	// (0x000200d3) list_double_heading_pane_vc_t2_ParamLimits

0x0f38,	// (0x000200d3) list_double_heading_pane_vc_t2

0x0001,

0xfa4e,	// (0x0002ebe9) list_double_heading_pane_vc_t_ParamLimits

0xfa4e,	// (0x0002ebe9) list_double_heading_pane_vc_t

0x0f50,	// (0x000200eb) list_double_graphic_pane_vc_g1_ParamLimits

0x0f50,	// (0x000200eb) list_double_graphic_pane_vc_g1

0x0f5c,	// (0x000200f7) list_double_graphic_pane_vc_g2_ParamLimits

0x0f5c,	// (0x000200f7) list_double_graphic_pane_vc_g2

0x0a12,	// (0x0001fbad) list_double_graphic_pane_vc_g3_ParamLimits

0x0a12,	// (0x0001fbad) list_double_graphic_pane_vc_g3

0x0003,

0xfa53,	// (0x0002ebee) list_double_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0002ebee) list_double_graphic_pane_vc_g

0x0f79,	// (0x00020114) list_double_graphic_pane_vc_t1_ParamLimits

0x0f79,	// (0x00020114) list_double_graphic_pane_vc_t1

0x0fa3,	// (0x0002013e) list_double_graphic_pane_vc_t2_ParamLimits

0x0fa3,	// (0x0002013e) list_double_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0002ebf7) list_double_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0002ebf7) list_double_graphic_pane_vc_t

0x13c4,	// (0x0002055f) aid_size_cell_fastswap

0xbff2,	// (0x0002b18d) aid_size_cell_touch_ParamLimits

0xbff2,	// (0x0002b18d) aid_size_cell_touch

0x1627,	// (0x000207c2) popup_fast_swap_wide_window_ParamLimits

0x1627,	// (0x000207c2) popup_fast_swap_wide_window

0xc1a2,	// (0x0002b33d) touch_pane_ParamLimits

0xc1a2,	// (0x0002b33d) touch_pane

0x409f,	// (0x0002323a) button_value_adjust_pane_cp2

0x06ed,	// (0x0001f888) button_value_adjust_pane_cp4

0x070d,	// (0x0001f8a8) form_field_data_pane_cp2

0xbb87,	// (0x0002ad22) form_field_data_wide_pane_cp2

0x451f,	// (0x000236ba) bg_scroll_pane_ParamLimits

0x19c9,	// (0x00020b64) scroll_handle_pane_ParamLimits

0x19dd,	// (0x00020b78) scroll_sc2_down_pane_ParamLimits

0x19dd,	// (0x00020b78) scroll_sc2_down_pane

0x4550,	// (0x000236eb) scroll_sc2_up_pane_ParamLimits

0x4550,	// (0x000236eb) scroll_sc2_up_pane

0xe18e,	// (0x0002d329) grid_wheel_folder_pane_g1_ParamLimits

0xe18e,	// (0x0002d329) grid_wheel_folder_pane_g1

0x1ba2,	// (0x00020d3d) clock_nsta_pane_cp2_ParamLimits

0x1ba2,	// (0x00020d3d) clock_nsta_pane_cp2

0xd5d2,	// (0x0002c76d) listscroll_midp_pane_ParamLimits

0xd5de,	// (0x0002c779) midp_canvas_pane

0x5044,	// (0x000241df) nsta_clock_indic_pane

0x5078,	// (0x00024213) listscroll_form_pane_vc

0x5080,	// (0x0002421b) listscroll_set_pane_vc_ParamLimits

0x5080,	// (0x0002421b) listscroll_set_pane_vc

0xd863,	// (0x0002c9fe) clock_nsta_pane

0xd88d,	// (0x0002ca28) indicator_nsta_pane

0x54ce,	// (0x00024669) bg_popup_sub_pane_cp2_ParamLimits

0x54e2,	// (0x0002467d) find_pane_cp2_ParamLimits

0x54e2,	// (0x0002467d) find_pane_cp2

0x54f8,	// (0x00024693) grid_toobar_pane_ParamLimits

0x55d8,	// (0x00024773) list_form_gen_pane_vc_ParamLimits

0x55d8,	// (0x00024773) list_form_gen_pane_vc

0x55ee,	// (0x00024789) scroll_pane_cp8_vc_ParamLimits

0x55ee,	// (0x00024789) scroll_pane_cp8_vc

0x566a,	// (0x00024805) data_form_wide_pane_vc_ParamLimits

0x566a,	// (0x00024805) data_form_wide_pane_vc

0x5676,	// (0x00024811) form_field_data_wide_pane_vc_g1

0x567e,	// (0x00024819) form_field_data_wide_pane_vc_t1_ParamLimits

0x567e,	// (0x00024819) form_field_data_wide_pane_vc_t1

0x40b3,	// (0x0002324e) input_focus_pane_cp6_vc_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_cp6_vc

0x59d0,	// (0x00024b6b) list_midp_pane_ParamLimits

0x6d0b,	// (0x00025ea6) scroll_pane_cp16_ParamLimits

0x6d0b,	// (0x00025ea6) scroll_pane_cp16

0x5a1e,	// (0x00024bb9) button_value_adjust_pane_ParamLimits

0x5a1e,	// (0x00024bb9) button_value_adjust_pane

0xddd7,	// (0x0002cf72) button_value_adjust_pane_cp6_ParamLimits

0xddd7,	// (0x0002cf72) button_value_adjust_pane_cp6

0xdef1,	// (0x0002d08c) settings_code_pane_cp_ParamLimits

0xdef1,	// (0x0002d08c) settings_code_pane_cp

0x3734,	// (0x000228cf) cell_touch_pane_g1

0x3734,	// (0x000228cf) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002e89e) cell_touch_pane_g

0xe07c,	// (0x0002d217) cell_touch_pane_cp_ParamLimits

0xe07c,	// (0x0002d217) cell_touch_pane_cp

0xe098,	// (0x0002d233) cell_touch_pane_ParamLimits

0xe098,	// (0x0002d233) cell_touch_pane

0x3734,	// (0x000228cf) scroll_sc2_down_pane_g1

0x3734,	// (0x000228cf) scroll_sc2_up_pane_g1

0x373e,	// (0x000228d9) bg_set_opt_pane_cp4_vc

0x709b,	// (0x00026236) list_set_graphic_pane_vc_g1_ParamLimits

0x709b,	// (0x00026236) list_set_graphic_pane_vc_g1

0x70a7,	// (0x00026242) list_set_graphic_pane_vc_g2_ParamLimits

0x70a7,	// (0x00026242) list_set_graphic_pane_vc_g2

0x0001,

0xf9ec,	// (0x0002eb87) list_set_graphic_pane_vc_g_ParamLimits

0xf9ec,	// (0x0002eb87) list_set_graphic_pane_vc_g

0x70b3,	// (0x0002624e) text_primary_small_cp13_vc_ParamLimits

0x70b3,	// (0x0002624e) text_primary_small_cp13_vc

0x70cb,	// (0x00026266) list_set_graphic_pane_vc_ParamLimits

0x70cb,	// (0x00026266) list_set_graphic_pane_vc

0x373e,	// (0x000228d9) input_focus_pane_cp2_vc

0x3734,	// (0x000228cf) setting_code_pane_vc_g1

0x3869,	// (0x00022a04) setting_code_pane_vc_t1

0x70dd,	// (0x00026278) set_text_pane_vc_t1_ParamLimits

0x70dd,	// (0x00026278) set_text_pane_vc_t1

0x373e,	// (0x000228d9) input_focus_pane_cp1_vc

0x70f9,	// (0x00026294) list_set_text_pane_vc

0x3734,	// (0x000228cf) setting_text_pane_vc_g1

0x373e,	// (0x000228d9) bg_set_opt_pane_cp2_vc

0x3860,	// (0x000229fb) setting_slider_graphic_pane_vc_g1

0x7103,	// (0x0002629e) setting_slider_graphic_pane_vc_t1

0x7113,	// (0x000262ae) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f1,	// (0x0002eb8c) setting_slider_graphic_pane_vc_t

0x7123,	// (0x000262be) slider_set_pane_cp_vc

0x712b,	// (0x000262c6) slider_set_pane_vc_g1

0x7134,	// (0x000262cf) slider_set_pane_vc_g2

0x0006,

0xf9f6,	// (0x0002eb91) slider_set_pane_vc_g

0x410b,	// (0x000232a6) set_opt_bg_pane_g1_copy1

0x4113,	// (0x000232ae) set_opt_bg_pane_g2_copy1

0x7160,	// (0x000262fb) set_opt_bg_pane_g3_copy1

0x4123,	// (0x000232be) set_opt_bg_pane_g4_copy1

0x412b,	// (0x000232c6) set_opt_bg_pane_g5_copy1

0x4133,	// (0x000232ce) set_opt_bg_pane_g6_copy1

0x716a,	// (0x00026305) set_opt_bg_pane_g7_copy1

0x7172,	// (0x0002630d) set_opt_bg_pane_g8_copy1

0x717c,	// (0x00026317) set_opt_bg_pane_g9_copy1

0x373e,	// (0x000228d9) bg_set_opt_pane_cp_vc

0x7186,	// (0x00026321) setting_slider_pane_vc_t1

0x7195,	// (0x00026330) setting_slider_pane_vc_t2

0x71a5,	// (0x00026340) setting_slider_pane_vc_t3

0x0002,

0xfa05,	// (0x0002eba0) setting_slider_pane_vc_t

0x71b5,	// (0x00026350) slider_set_pane_vc

0x24e8,	// (0x00021683) volume_set_pane_vc_g1

0x24f1,	// (0x0002168c) volume_set_pane_vc_g2

0x24fa,	// (0x00021695) volume_set_pane_vc_g3

0x2503,	// (0x0002169e) volume_set_pane_vc_g4

0x250c,	// (0x000216a7) volume_set_pane_vc_g5

0x2515,	// (0x000216b0) volume_set_pane_vc_g6

0x251e,	// (0x000216b9) volume_set_pane_vc_g7

0x2527,	// (0x000216c2) volume_set_pane_vc_g8

0x2530,	// (0x000216cb) volume_set_pane_vc_g9

0x2539,	// (0x000216d4) volume_set_pane_vc_g10

0x0009,

0xf8aa,	// (0x0002ea45) volume_set_pane_vc_g

0x71bd,	// (0x00026358) volume_set_pane_vc

0x71c5,	// (0x00026360) button_value_adjust_pane_cp1_vc

0x71cf,	// (0x0002636a) list_highlight_pane_cp2_vc

0x71d8,	// (0x00026373) list_set_pane_vc_ParamLimits

0x71d8,	// (0x00026373) list_set_pane_vc

0x7236,	// (0x000263d1) main_pane_set_vc_t1_ParamLimits

0x7236,	// (0x000263d1) main_pane_set_vc_t1

0x724b,	// (0x000263e6) main_pane_set_vc_t2_ParamLimits

0x724b,	// (0x000263e6) main_pane_set_vc_t2

0x725d,	// (0x000263f8) main_pane_set_vc_t3_ParamLimits

0x725d,	// (0x000263f8) main_pane_set_vc_t3

0x7271,	// (0x0002640c) main_pane_set_vc_t4_ParamLimits

0x7271,	// (0x0002640c) main_pane_set_vc_t4

0x0003,

0xfa0c,	// (0x0002eba7) main_pane_set_vc_t_ParamLimits

0xfa0c,	// (0x0002eba7) main_pane_set_vc_t

0x7285,	// (0x00026420) setting_code_pane_vc_ParamLimits

0x7285,	// (0x00026420) setting_code_pane_vc

0x7296,	// (0x00026431) setting_slider_graphic_pane_vc

0x7296,	// (0x00026431) setting_slider_pane_vc

0x7296,	// (0x00026431) setting_text_pane_vc

0x7296,	// (0x00026431) setting_volume_pane_vc

0x72a0,	// (0x0002643b) scroll_pane_cp121_vc

0x408d,	// (0x00023228) set_content_pane_vc

0x72a8,	// (0x00026443) button_value_adjust_pane_g1

0x72b1,	// (0x0002644c) button_value_adjust_pane_g2

0x0001,

0xfa61,	// (0x0002ebfc) button_value_adjust_pane_g

0x72ba,	// (0x00026455) form_field_slider_wide_pane_vc_t1_ParamLimits

0x72ba,	// (0x00026455) form_field_slider_wide_pane_vc_t1

0x72ce,	// (0x00026469) form_field_slider_wide_pane_vc_t2_ParamLimits

0x72ce,	// (0x00026469) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa66,	// (0x0002ec01) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa66,	// (0x0002ec01) form_field_slider_wide_pane_vc_t

0x3a99,	// (0x00022c34) input_focus_pane_cp10_vc_ParamLimits

0x3a99,	// (0x00022c34) input_focus_pane_cp10_vc

0x72fc,	// (0x00026497) slider_cont_pane_cp1_vc_ParamLimits

0x72fc,	// (0x00026497) slider_cont_pane_cp1_vc

0x730e,	// (0x000264a9) slider_form_pane_g1_cp2

0x7134,	// (0x000262cf) slider_form_pane_g2_cp2

0x733b,	// (0x000264d6) form_field_slider_pane_vc_t3

0x7349,	// (0x000264e4) form_field_slider_pane_vc_t4

0x7357,	// (0x000264f2) slider_form_pane_vc_ParamLimits

0x7357,	// (0x000264f2) slider_form_pane_vc

0x7364,	// (0x000264ff) form_field_slider_pane_vc_t1_ParamLimits

0x7364,	// (0x000264ff) form_field_slider_pane_vc_t1

0x72ce,	// (0x00026469) form_field_slider_pane_vc_t2_ParamLimits

0x72ce,	// (0x00026469) form_field_slider_pane_vc_t2

0x0001,

0xfa78,	// (0x0002ec13) form_field_slider_pane_vc_t_ParamLimits

0xfa78,	// (0x0002ec13) form_field_slider_pane_vc_t

0x3a99,	// (0x00022c34) input_focus_pane_cp9_vc_ParamLimits

0x3a99,	// (0x00022c34) input_focus_pane_cp9_vc

0x7380,	// (0x0002651b) slider_cont_pane_vc_ParamLimits

0x7380,	// (0x0002651b) slider_cont_pane_vc

0x7394,	// (0x0002652f) list_form_graphic_pane_cp_vc_ParamLimits

0x7394,	// (0x0002652f) list_form_graphic_pane_cp_vc

0x5676,	// (0x00024811) form_field_popup_wide_pane_vc_g1

0x73a9,	// (0x00026544) form_field_popup_wide_pane_vc_t1_ParamLimits

0x73a9,	// (0x00026544) form_field_popup_wide_pane_vc_t1

0x40b3,	// (0x0002324e) input_focus_pane_cp8_vc_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_cp8_vc

0x73fa,	// (0x00026595) list_form_wide_pane_vc_ParamLimits

0x73fa,	// (0x00026595) list_form_wide_pane_vc

0x7406,	// (0x000265a1) list_form_graphic_pane_vc_g1

0x740e,	// (0x000265a9) list_form_graphic_pane_vc_t1_ParamLimits

0x740e,	// (0x000265a9) list_form_graphic_pane_vc_t1

0x381e,	// (0x000229b9) list_highlight_pane_cp5_vc_ParamLimits

0x381e,	// (0x000229b9) list_highlight_pane_cp5_vc

0x742a,	// (0x000265c5) list_form_graphic_pane_vc_ParamLimits

0x742a,	// (0x000265c5) list_form_graphic_pane_vc

0x5676,	// (0x00024811) form_field_popup_pane_vc_g1

0x7440,	// (0x000265db) form_field_popup_pane_vc_t1_ParamLimits

0x7440,	// (0x000265db) form_field_popup_pane_vc_t1

0x40b3,	// (0x0002324e) input_focus_pane_cp7_vc_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_cp7_vc

0x7457,	// (0x000265f2) list_form_pane_vc_ParamLimits

0x7457,	// (0x000265f2) list_form_pane_vc

0x7463,	// (0x000265fe) data_form_pane_vc_t1_ParamLimits

0x7463,	// (0x000265fe) data_form_pane_vc_t1

0x410b,	// (0x000232a6) input_focus_pane_vc_g1

0x4113,	// (0x000232ae) input_focus_pane_vc_g2

0x411b,	// (0x000232b6) input_focus_pane_vc_g3

0x4123,	// (0x000232be) input_focus_pane_vc_g4

0x412b,	// (0x000232c6) input_focus_pane_vc_g5

0x4133,	// (0x000232ce) input_focus_pane_vc_g6

0x413b,	// (0x000232d6) input_focus_pane_vc_g7

0x4143,	// (0x000232de) input_focus_pane_vc_g8

0x414b,	// (0x000232e6) input_focus_pane_vc_g9

0x3734,	// (0x000228cf) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0002e827) input_focus_pane_vc_g

0x566a,	// (0x00024805) data_form_pane_vc_ParamLimits

0x566a,	// (0x00024805) data_form_pane_vc

0x5676,	// (0x00024811) form_field_data_pane_vc_g1

0x747e,	// (0x00026619) form_field_data_pane_vc_t1_ParamLimits

0x747e,	// (0x00026619) form_field_data_pane_vc_t1

0x40b3,	// (0x0002324e) input_focus_pane_vc_ParamLimits

0x40b3,	// (0x0002324e) input_focus_pane_vc

0x7498,	// (0x00026633) button_value_adjust_pane_cp3_vc

0x74a0,	// (0x0002663b) button_value_adjust_pane_cp5_vc

0x74a8,	// (0x00026643) form_field_data_pane_vc_ParamLimits

0x74a8,	// (0x00026643) form_field_data_pane_vc

0x74bf,	// (0x0002665a) form_field_data_pane_vc_cp2

0x74c7,	// (0x00026662) form_field_data_wide_pane_vc_ParamLimits

0x74c7,	// (0x00026662) form_field_data_wide_pane_vc

0x74dd,	// (0x00026678) form_field_data_wide_pane_vc_cp2

0x74e5,	// (0x00026680) form_field_popup_pane_vc_ParamLimits

0x74e5,	// (0x00026680) form_field_popup_pane_vc

0x74fc,	// (0x00026697) form_field_popup_wide_pane_vc_ParamLimits

0x74fc,	// (0x00026697) form_field_popup_wide_pane_vc

0x7512,	// (0x000266ad) form_field_slider_pane_vc_ParamLimits

0x7512,	// (0x000266ad) form_field_slider_pane_vc

0x7525,	// (0x000266c0) form_field_slider_wide_pane_vc_ParamLimits

0x7525,	// (0x000266c0) form_field_slider_wide_pane_vc

0xe0b6,	// (0x0002d251) grid_touch_1_pane_ParamLimits

0xe0b6,	// (0x0002d251) grid_touch_1_pane

0xe0ca,	// (0x0002d265) grid_touch_2_pane_ParamLimits

0xe0ca,	// (0x0002d265) grid_touch_2_pane

0x75f3,	// (0x0002678e) touch_pane_g1_ParamLimits

0x75f3,	// (0x0002678e) touch_pane_g1

0x755c,	// (0x000266f7) cell_app_pane_cp_wide_ParamLimits

0x755c,	// (0x000266f7) cell_app_pane_cp_wide

0x756d,	// (0x00026708) grid_popup_fast_wide_pane_ParamLimits

0x756d,	// (0x00026708) grid_popup_fast_wide_pane

0x7581,	// (0x0002671c) scroll_pane_cp19_ParamLimits

0x7581,	// (0x0002671c) scroll_pane_cp19

0x373e,	// (0x000228d9) bg_popup_window_pane_cp20

0x7595,	// (0x00026730) listscroll_popup_fast_wide_pane

0x4273,	// (0x0002340e) grid_indicator_nsta_pane

0x759d,	// (0x00026738) clock_nsta_pane_g1

0x75a6,	// (0x00026741) clock_nsta_pane_t1

0xe0f4,	// (0x0002d28f) cell_indicator_nsta_pane_ParamLimits

0xe0f4,	// (0x0002d28f) cell_indicator_nsta_pane

0x75f3,	// (0x0002678e) cell_indicator_nsta_pane_g1

0xe10b,	// (0x0002d2a6) cell_indicator_nsta_pane_g2

0x0001,

0xfa89,	// (0x0002ec24) cell_indicator_nsta_pane_g

0x760e,	// (0x000267a9) clock_nsta_pane_cp

0x7617,	// (0x000267b2) indicator_nsta_pane_cp

0x761f,	// (0x000267ba) nsta_clock_indic_pane_g1

0x38e7,	// (0x00022a82) grid_indicator_pane

0x4645,	// (0x000237e0) scroll_pane_cp29

0x1af1,	// (0x00020c8c) indicator_nsta_pane_cp2_ParamLimits

0x1af1,	// (0x00020c8c) indicator_nsta_pane_cp2

0x381e,	// (0x000229b9) main_apps_wheel_pane

0x5891,	// (0x00024a2c) form_midp_field_text_pane_ParamLimits

0x59dc,	// (0x00024b77) scroll_bar_cp050_ParamLimits

0x766f,	// (0x0002680a) cell_indicator_pane_ParamLimits

0x766f,	// (0x0002680a) cell_indicator_pane

0x7686,	// (0x00026821) cell_indicator_pane_g1

0xe118,	// (0x0002d2b3) grid_wheel_folder_pane_ParamLimits

0xe118,	// (0x0002d2b3) grid_wheel_folder_pane

0xe126,	// (0x0002d2c1) list_wheel_apps_pane_ParamLimits

0xe126,	// (0x0002d2c1) list_wheel_apps_pane

0xe134,	// (0x0002d2cf) main_apps_wheel_pane_g1_ParamLimits

0xe134,	// (0x0002d2cf) main_apps_wheel_pane_g1

0xe140,	// (0x0002d2db) main_apps_wheel_pane_g2_ParamLimits

0xe140,	// (0x0002d2db) main_apps_wheel_pane_g2

0x0001,

0xfaa5,	// (0x0002ec40) main_apps_wheel_pane_g_ParamLimits

0xfaa5,	// (0x0002ec40) main_apps_wheel_pane_g

0xe14e,	// (0x0002d2e9) main_apps_wheel_pane_t1_ParamLimits

0xe14e,	// (0x0002d2e9) main_apps_wheel_pane_t1

0xe162,	// (0x0002d2fd) list_wheel_apps_pane_g1

0xe16a,	// (0x0002d305) list_wheel_apps_pane_g2

0xe172,	// (0x0002d30d) list_wheel_apps_pane_g3

0xe17a,	// (0x0002d315) list_wheel_apps_pane_g4

0xe184,	// (0x0002d31f) list_wheel_apps_pane_g5

0x0004,

0xfaaa,	// (0x0002ec45) list_wheel_apps_pane_g

0x4bc8,	// (0x00023d63) navi_icon_text_pane

0xd757,	// (0x0002c8f2) aid_fill_nsta

0x774b,	// (0x000268e6) navi_icon_text_pane_g1

0x7757,	// (0x000268f2) navi_icon_text_pane_t1

0x4a5b,	// (0x00023bf6) list_set_graphic_pane_t1_ParamLimits

0x4a5b,	// (0x00023bf6) list_set_graphic_pane_t1

0x613f,	// (0x000252da) popup_midp_note_alarm_window_t6_ParamLimits

0x613f,	// (0x000252da) popup_midp_note_alarm_window_t6

0x6151,	// (0x000252ec) popup_midp_note_alarm_window_t7_ParamLimits

0x6151,	// (0x000252ec) popup_midp_note_alarm_window_t7

0x6163,	// (0x000252fe) popup_midp_note_alarm_window_t8_ParamLimits

0x6163,	// (0x000252fe) popup_midp_note_alarm_window_t8

0x6175,	// (0x00025310) popup_midp_note_alarm_window_t9_ParamLimits

0x6175,	// (0x00025310) popup_midp_note_alarm_window_t9

0x6187,	// (0x00025322) popup_midp_note_alarm_window_t10_ParamLimits

0x6187,	// (0x00025322) popup_midp_note_alarm_window_t10

0x6199,	// (0x00025334) popup_midp_note_alarm_window_t11_ParamLimits

0x6199,	// (0x00025334) popup_midp_note_alarm_window_t11

0x61ab,	// (0x00025346) scroll_pane_cp17_ParamLimits

0x61ab,	// (0x00025346) scroll_pane_cp17

0x24e8,	// (0x00021683) volume_small_pane_cp_g1

0x27dd,	// (0x00021978) volume_small_pane_cp_g2

0x27e6,	// (0x00021981) volume_small_pane_cp_g3

0x27ef,	// (0x0002198a) volume_small_pane_cp_g4

0x27f8,	// (0x00021993) volume_small_pane_cp_g5

0x2801,	// (0x0002199c) volume_small_pane_cp_g6

0x280a,	// (0x000219a5) volume_small_pane_cp_g7

0x2813,	// (0x000219ae) volume_small_pane_cp_g8

0x281c,	// (0x000219b7) volume_small_pane_cp_g9

0x2825,	// (0x000219c0) volume_small_pane_cp_g10

0x4e25,	// (0x00023fc0) midp_ticker_pane_g1_ParamLimits

0x4e31,	// (0x00023fcc) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0002e8f3) midp_ticker_pane_g_ParamLimits

0x4e3d,	// (0x00023fd8) midp_ticker_pane_t1_ParamLimits

0xd77b,	// (0x0002c916) aid_fill_nsta_2

0x59c8,	// (0x00024b63) list_form2_midp_pane

0x6af9,	// (0x00025c94) midp_editing_number_pane_ParamLimits

0x6b08,	// (0x00025ca3) midp_ticker_pane_ParamLimits

0x7769,	// (0x00026904) form2_midp_field_pane

0x778d,	// (0x00026928) scroll_pane_cp51

0x77ad,	// (0x00026948) form2_midp_button_pane_ParamLimits

0x77ad,	// (0x00026948) form2_midp_button_pane

0x77bf,	// (0x0002695a) form2_midp_content_pane_ParamLimits

0x77bf,	// (0x0002695a) form2_midp_content_pane

0x77d9,	// (0x00026974) form2_midp_field_choice_group_pane

0x77e1,	// (0x0002697c) form2_midp_field_pane_g1

0x77e9,	// (0x00026984) form2_midp_field_pane_g2

0x77f1,	// (0x0002698c) form2_midp_field_pane_g3

0x77f9,	// (0x00026994) form2_midp_field_pane_g4

0x0003,

0xfacf,	// (0x0002ec6a) form2_midp_field_pane_g

0x7801,	// (0x0002699c) form2_midp_gauge_slider_pane

0x7809,	// (0x000269a4) form2_midp_gauge_wait_pane

0x7811,	// (0x000269ac) form2_midp_image_pane_ParamLimits

0x7811,	// (0x000269ac) form2_midp_image_pane

0x782c,	// (0x000269c7) form2_midp_label_pane_ParamLimits

0x782c,	// (0x000269c7) form2_midp_label_pane

0xe1b7,	// (0x0002d352) form2_midp_label_pane_cp_ParamLimits

0xe1b7,	// (0x0002d352) form2_midp_label_pane_cp

0x7866,	// (0x00026a01) form2_midp_string_pane_ParamLimits

0x7866,	// (0x00026a01) form2_midp_string_pane

0xbdd3,	// (0x0002af6e) form2_midp_text_pane_ParamLimits

0xbdd3,	// (0x0002af6e) form2_midp_text_pane

0x7878,	// (0x00026a13) form2_midp_time_pane

0x7888,	// (0x00026a23) input_focus_pane_cp51_ParamLimits

0x7888,	// (0x00026a23) input_focus_pane_cp51

0x78a0,	// (0x00026a3b) form2_midp_label_pane_t1_ParamLimits

0x78a0,	// (0x00026a3b) form2_midp_label_pane_t1

0xbdec,	// (0x0002af87) form2_mdip_text_pane_t1_ParamLimits

0xbdec,	// (0x0002af87) form2_mdip_text_pane_t1

0x1006,	// (0x000201a1) form2_midp_time_pane_t1

0x78e9,	// (0x00026a84) form2_midp_gauge_slider_pane_t1

0xe1d6,	// (0x0002d371) form2_midp_gauge_slider_pane_t2

0xe1e8,	// (0x0002d383) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad8,	// (0x0002ec73) form2_midp_gauge_slider_pane_t

0x791f,	// (0x00026aba) form2_midp_slider_pane

0x792b,	// (0x00026ac6) form2_midp_gauge_wait_pane_t1

0x7939,	// (0x00026ad4) form2_midp_wait_pane_ParamLimits

0x7939,	// (0x00026ad4) form2_midp_wait_pane

0xe1fa,	// (0x0002d395) list_single_2graphic_pane_cp4_ParamLimits

0xe1fa,	// (0x0002d395) list_single_2graphic_pane_cp4

0xdbd5,	// (0x0002cd70) list_single_midp_graphic_pane_cp_ParamLimits

0xdbd5,	// (0x0002cd70) list_single_midp_graphic_pane_cp

0x373e,	// (0x000228d9) list_highlight_pane_cp20

0x7988,	// (0x00026b23) list_single_2graphic_pane_g1_cp4

0x7990,	// (0x00026b2b) list_single_2graphic_pane_g2_cp4

0x7998,	// (0x00026b33) list_single_2graphic_pane_t1_cp4

0x381e,	// (0x000229b9) list_highlight_pane_cp21

0x79a7,	// (0x00026b42) list_single_midp_graphic_pane_g4_cp

0x79b6,	// (0x00026b51) list_single_midp_graphic_pane_t1_cp

0xe20e,	// (0x0002d3a9) form2_mdip_string_pane_t1_ParamLimits

0xe20e,	// (0x0002d3a9) form2_mdip_string_pane_t1

0x373e,	// (0x000228d9) bg_wml_button_pane_cp2

0x3734,	// (0x000228cf) form2_midp_image_pane_g1

0x04d7,	// (0x0001f672) list_double_large_graphic_pane_g5_ParamLimits

0x04d7,	// (0x0001f672) list_double_large_graphic_pane_g5

0xd5d2,	// (0x0002c76d) midp_form_pane_ParamLimits

0x381e,	// (0x000229b9) main_apps_wheel_pane_ParamLimits

0xc788,	// (0x0002b923) popup_preview_window_ParamLimits

0xc788,	// (0x0002b923) popup_preview_window

0x2371,	// (0x0002150c) popup_touch_info_window_ParamLimits

0x2371,	// (0x0002150c) popup_touch_info_window

0x238f,	// (0x0002152a) popup_touch_menu_window_ParamLimits

0x238f,	// (0x0002152a) popup_touch_menu_window

0x372a,	// (0x000228c5) bg_popup_sub_pane_cp6

0x7ac4,	// (0x00026c5f) list_touch_menu_pane

0x7acc,	// (0x00026c67) list_single_touch_menu_pane_ParamLimits

0x7acc,	// (0x00026c67) list_single_touch_menu_pane

0x7ae2,	// (0x00026c7d) list_single_touch_menu_pane_t1

0x381e,	// (0x000229b9) bg_popup_sub_pane_cp7_ParamLimits

0x381e,	// (0x000229b9) bg_popup_sub_pane_cp7

0x7af0,	// (0x00026c8b) heading_sub_pane

0x7af8,	// (0x00026c93) list_touch_info_pane_ParamLimits

0x7af8,	// (0x00026c93) list_touch_info_pane

0x7b07,	// (0x00026ca2) list_single_touch_info_pane_ParamLimits

0x7b07,	// (0x00026ca2) list_single_touch_info_pane

0x7b19,	// (0x00026cb4) list_single_touch_info_pane_t1

0x7b27,	// (0x00026cc2) list_single_touch_info_pane_t2

0x0001,

0xfae6,	// (0x0002ec81) list_single_touch_info_pane_t

0x4d48,	// (0x00023ee3) bg_popup_heading_pane_cp

0x7b35,	// (0x00026cd0) heading_sub_pane_t1

0x5604,	// (0x0002479f) bg_popup_preview_window_pane_cp_ParamLimits

0x5604,	// (0x0002479f) bg_popup_preview_window_pane_cp

0x7af0,	// (0x00026c8b) heading_preview_pane

0x7af8,	// (0x00026c93) list_preview_pane_ParamLimits

0x7af8,	// (0x00026c93) list_preview_pane

0x7b43,	// (0x00026cde) popup_preview_window_g1

0x7b07,	// (0x00026ca2) list_single_preview_pane_ParamLimits

0x7b07,	// (0x00026ca2) list_single_preview_pane

0x7b4b,	// (0x00026ce6) list_single_preview_pane_g1

0x7b53,	// (0x00026cee) list_single_preview_pane_t1

0x7b19,	// (0x00026cb4) list_single_preview_pane_t2

0x0001,

0xfaeb,	// (0x0002ec86) list_single_preview_pane_t

0x7b61,	// (0x00026cfc) bg_popup_heading_pane_cp2_ParamLimits

0x7b61,	// (0x00026cfc) bg_popup_heading_pane_cp2

0x7b77,	// (0x00026d12) heading_preview_pane_g1

0x7b7f,	// (0x00026d1a) heading_preview_pane_t1_ParamLimits

0x7b7f,	// (0x00026d1a) heading_preview_pane_t1

0x390a,	// (0x00022aa5) soft_indicator_pane_t1_ParamLimits

0x4026,	// (0x000231c1) scroll_pane_ParamLimits

0x453e,	// (0x000236d9) scroll_sc2_left_pane

0x4547,	// (0x000236e2) scroll_sc2_right_pane

0x4566,	// (0x00023701) scroll_bg_pane_g1_ParamLimits

0x457b,	// (0x00023716) scroll_bg_pane_g2_ParamLimits

0x4593,	// (0x0002372e) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002e87e) scroll_bg_pane_g_ParamLimits

0x4566,	// (0x00023701) scroll_handle_pane_g1_ParamLimits

0x45b5,	// (0x00023750) scroll_handle_pane_g2_ParamLimits

0x4593,	// (0x0002372e) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0002e885) scroll_handle_pane_g_ParamLimits

0x1e37,	// (0x00020fd2) popup_choice_list_window_ParamLimits

0x1e37,	// (0x00020fd2) popup_choice_list_window

0x54da,	// (0x00024675) choice_list_pane

0x555c,	// (0x000246f7) cell_toolbar_pane_t1

0x5584,	// (0x0002471f) toolbar_button_pane_ParamLimits

0x6665,	// (0x00025800) ai_gene_pane_1_t2_ParamLimits

0x6665,	// (0x00025800) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002eaa1) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002eaa1) ai_gene_pane_1_t

0x7b9c,	// (0x00026d37) scroll_sc2_left_pane_g1

0x7b9c,	// (0x00026d37) scroll_sc2_right_pane_g1

0x506c,	// (0x00024207) bg_popup_sub_pane_cp10

0x7ba6,	// (0x00026d41) list_choice_list_pane

0x7bbf,	// (0x00026d5a) list_single_choice_list_pane_ParamLimits

0x7bbf,	// (0x00026d5a) list_single_choice_list_pane

0x7bd2,	// (0x00026d6d) list_single_choice_list_pane_g1

0x4244,	// (0x000233df) list_single_choice_list_pane_t1_ParamLimits

0x4244,	// (0x000233df) list_single_choice_list_pane_t1

0x7bda,	// (0x00026d75) choice_list_pane_g1

0x7be2,	// (0x00026d7d) choice_list_pane_t1

0x372a,	// (0x000228c5) input_focus_pane_cp11

0x441b,	// (0x000235b6) title_pane_stacon_g2_ParamLimits

0x441b,	// (0x000235b6) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0002e864) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0002e864) title_pane_stacon_g

0x4d48,	// (0x00023ee3) cursor_press_pane

0xc435,	// (0x0002b5d0) popup_fep_hwr_window_ParamLimits

0xc435,	// (0x0002b5d0) popup_fep_hwr_window

0x1f5d,	// (0x000210f8) popup_fep_vkb_window_ParamLimits

0x1f5d,	// (0x000210f8) popup_fep_vkb_window

0x7bf0,	// (0x00026d8b) cursor_press_pane_g1

0x0002,

0xfb14,	// (0x0002ecaf) fep_vkb_side_pane_g_ParamLimits

0x2867,	// (0x00021a02) fep_hwr_candidate_pane_ParamLimits

0x2867,	// (0x00021a02) fep_hwr_candidate_pane

0x2891,	// (0x00021a2c) fep_hwr_side_pane_ParamLimits

0x2891,	// (0x00021a2c) fep_hwr_side_pane

0x28b1,	// (0x00021a4c) fep_hwr_top_pane_ParamLimits

0x28b1,	// (0x00021a4c) fep_hwr_top_pane

0x28c9,	// (0x00021a64) fep_hwr_write_pane_ParamLimits

0x28c9,	// (0x00021a64) fep_hwr_write_pane

0xfb14,	// (0x0002ecaf) fep_vkb_side_pane_g

0x7bf8,	// (0x00026d93) fep_hwr_top_pane_g1

0x7c0a,	// (0x00026da5) fep_hwr_top_pane_g2

0x28f5,	// (0x00021a90) fep_hwr_top_pane_g3

0x0002,

0xfaf0,	// (0x0002ec8b) fep_hwr_top_pane_g

0x290a,	// (0x00021aa5) fep_hwr_top_text_pane

0x4735,	// (0x000238d0) fep_hwr_top_text_pane_g1

0x7c40,	// (0x00026ddb) fep_hwr_top_text_pane_t1

0x2a00,	// (0x00021b9b) fep_hwr_candidate_pane_g1

0x7e93,	// (0x0002702e) fep_vkb_keypad_pane_g3_ParamLimits

0x7e93,	// (0x0002702e) fep_vkb_keypad_pane_g3

0x7ebb,	// (0x00027056) fep_vkb_keypad_pane_g4_ParamLimits

0x7ebb,	// (0x00027056) fep_vkb_keypad_pane_g4

0x7f2a,	// (0x000270c5) fep_vkb_bottom_pane_g2_ParamLimits

0x7f2a,	// (0x000270c5) fep_vkb_bottom_pane_g2

0x0001,

0xfb1b,	// (0x0002ecb6) fep_vkb_bottom_pane_g_ParamLimits

0xfb1b,	// (0x0002ecb6) fep_vkb_bottom_pane_g

0x7b9c,	// (0x00026d37) cell_vkb_side_pane_g2

0x0001,

0xfb25,	// (0x0002ecc0) cell_vkb_side_pane_g

0x7fb5,	// (0x00027150) cell_vkb_side_pane_t1

0x7fc3,	// (0x0002715e) cell_vkb_side_pane_t1_copy1

0x7b9c,	// (0x00026d37) bg_fep_vkb_candidate_pane_g2

0x80ef,	// (0x0002728a) cell_vkb_candidate_pane_ParamLimits

0x7c4e,	// (0x00026de9) aid_size_cell_vkb_ParamLimits

0x7c4e,	// (0x00026de9) aid_size_cell_vkb

0x80ef,	// (0x0002728a) cell_vkb_candidate_pane

0x2a1a,	// (0x00021bb5) bg_popup_fep_shadow_pane_g1

0xe290,	// (0x0002d42b) fep_vkb_bottom_pane_ParamLimits

0xe290,	// (0x0002d42b) fep_vkb_bottom_pane

0x7d12,	// (0x00026ead) fep_vkb_candidate_pane_ParamLimits

0x7d12,	// (0x00026ead) fep_vkb_candidate_pane

0xe2b5,	// (0x0002d450) fep_vkb_keypad_pane_ParamLimits

0xe2b5,	// (0x0002d450) fep_vkb_keypad_pane

0xe2f1,	// (0x0002d48c) fep_vkb_side_pane_ParamLimits

0xe2f1,	// (0x0002d48c) fep_vkb_side_pane

0xe32d,	// (0x0002d4c8) fep_vkb_top_pane_ParamLimits

0xe32d,	// (0x0002d4c8) fep_vkb_top_pane

0x7dec,	// (0x00026f87) fep_vkb_top_pane_g1_ParamLimits

0x7dec,	// (0x00026f87) fep_vkb_top_pane_g1

0x7dfb,	// (0x00026f96) fep_vkb_top_pane_g2_ParamLimits

0x7dfb,	// (0x00026f96) fep_vkb_top_pane_g2

0x7e0a,	// (0x00026fa5) fep_vkb_top_pane_g3_ParamLimits

0x7e0a,	// (0x00026fa5) fep_vkb_top_pane_g3

0x0003,

0xfb0b,	// (0x0002eca6) fep_vkb_top_pane_g_ParamLimits

0xfb0b,	// (0x0002eca6) fep_vkb_top_pane_g

0x7e28,	// (0x00026fc3) fep_vkb_top_text_pane_ParamLimits

0x7e28,	// (0x00026fc3) fep_vkb_top_text_pane

0xe369,	// (0x0002d504) fep_vkb_side_pane_g1_ParamLimits

0xe369,	// (0x0002d504) fep_vkb_side_pane_g1

0x7e82,	// (0x0002701d) grid_vkb_side_pane_ParamLimits

0x7e82,	// (0x0002701d) grid_vkb_side_pane

0x2a22,	// (0x00021bbd) bg_popup_fep_shadow_pane_g2

0x2a2b,	// (0x00021bc6) bg_popup_fep_shadow_pane_g3

0x2a33,	// (0x00021bce) bg_popup_fep_shadow_pane_g4

0x2a3c,	// (0x00021bd7) bg_popup_fep_shadow_pane_g5

0x2a46,	// (0x00021be1) bg_popup_fep_shadow_pane_g6

0x2a4e,	// (0x00021be9) bg_popup_fep_shadow_pane_g7

0x412b,	// (0x000232c6) bg_popup_fep_shadow_pane_g8

0x7ed9,	// (0x00027074) grid_vkb_keypad_number_pane_ParamLimits

0x7ed9,	// (0x00027074) grid_vkb_keypad_number_pane

0x7ee9,	// (0x00027084) grid_vkb_keypad_pane_ParamLimits

0x7ee9,	// (0x00027084) grid_vkb_keypad_pane

0x7f0f,	// (0x000270aa) fep_vkb_bottom_pane_g1_ParamLimits

0x7f0f,	// (0x000270aa) fep_vkb_bottom_pane_g1

0x7f38,	// (0x000270d3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7f38,	// (0x000270d3) grid_vkb_keypad_bottom_left_pane

0x7f4d,	// (0x000270e8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7f4d,	// (0x000270e8) grid_vkb_keypad_bottom_right_pane

0x7f62,	// (0x000270fd) fep_vkb_top_text_pane_g1

0xe3b0,	// (0x0002d54b) fep_vkb_top_text_pane_t1

0xe3c2,	// (0x0002d55d) cell_vkb_side_pane_ParamLimits

0xe3c2,	// (0x0002d55d) cell_vkb_side_pane

0x7b9c,	// (0x00026d37) cell_vkb_side_pane_g1

0x7fd1,	// (0x0002716c) cell_vkb_keypad_pane_ParamLimits

0x7fd1,	// (0x0002716c) cell_vkb_keypad_pane

0x8046,	// (0x000271e1) cell_vkb_keypad_pane_g1

0x0008,

0xfb38,	// (0x0002ecd3) bg_popup_fep_shadow_pane_g

0x7b9c,	// (0x00026d37) cell_hwr_side_pane_g1

0x7b9c,	// (0x00026d37) cell_hwr_side_pane_g2

0x8050,	// (0x000271eb) cell_vkb_keypad_pane_t1

0xe3d8,	// (0x0002d573) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe3d8,	// (0x0002d573) cell_vkb_keypad_bottom_left_pane

0xe3ed,	// (0x0002d588) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe3ed,	// (0x0002d588) cell_vkb_keypad_bottom_right_pane

0x7b9c,	// (0x00026d37) cell_vkb_keypad_bottom_left_pane_g1

0x7b9c,	// (0x00026d37) cell_vkb_keypad_bottom_right_pane_g1

0x80b4,	// (0x0002724f) cell_vkb_keypad_number_pane_ParamLimits

0x80b4,	// (0x0002724f) cell_vkb_keypad_number_pane

0x80d3,	// (0x0002726e) cell_vkb_keypad_number_pane_g1

0x80dd,	// (0x00027278) cell_vkb_keypad_number_pane_g2

0x80e6,	// (0x00027281) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb2a,	// (0x0002ecc5) cell_vkb_keypad_number_pane_g

0x8050,	// (0x000271eb) cell_vkb_keypad_number_pane_t1

0x810a,	// (0x000272a5) fep_vkb_candidate_pane_g1

0x0001,

0xfb25,	// (0x0002ecc0) cell_hwr_side_pane_g

0x8123,	// (0x000272be) cell_hwr_side_pane_t1

0x2a60,	// (0x00021bfb) cell_hwr_side_pane_t1_copy1

0x7e1a,	// (0x00026fb5) cell_hwr_candidate_pane_g1

0x2a6e,	// (0x00021c09) cell_hwr_candidate_pane_t1

0x7b9c,	// (0x00026d37) cell_vkb_candidate_pane_g2

0x81a9,	// (0x00027344) cell_vkb_candidate_pane_t1

0x282e,	// (0x000219c9) bg_popup_fep_shadow_pane_ParamLimits

0x282e,	// (0x000219c9) bg_popup_fep_shadow_pane

0xda3c,	// (0x0002cbd7) bg_fep_hwr_top_pane_g4

0x7c1c,	// (0x00026db7) bg_hwr_side_pane_g1_ParamLimits

0x7c1c,	// (0x00026db7) bg_hwr_side_pane_g1

0xcac2,	// (0x0002bc5d) cell_hwr_side_pane_ParamLimits

0xcac2,	// (0x0002bc5d) cell_hwr_side_pane

0x2981,	// (0x00021b1c) fep_hwr_write_pane_g1_ParamLimits

0x2981,	// (0x00021b1c) fep_hwr_write_pane_g1

0x298e,	// (0x00021b29) fep_hwr_write_pane_g2_ParamLimits

0x298e,	// (0x00021b29) fep_hwr_write_pane_g2

0x299b,	// (0x00021b36) fep_hwr_write_pane_g3_ParamLimits

0x299b,	// (0x00021b36) fep_hwr_write_pane_g3

0xcae2,	// (0x0002bc7d) fep_hwr_write_pane_g4_ParamLimits

0xcae2,	// (0x0002bc7d) fep_hwr_write_pane_g4

0x0005,

0xfaf7,	// (0x0002ec92) fep_hwr_write_pane_g_ParamLimits

0xfaf7,	// (0x0002ec92) fep_hwr_write_pane_g

0xda3c,	// (0x0002cbd7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xda3c,	// (0x0002cbd7) bg_fep_hwr_candidate_pane_g2

0x29be,	// (0x00021b59) cell_hwr_candidate_pane_ParamLimits

0x29be,	// (0x00021b59) cell_hwr_candidate_pane

0x2a00,	// (0x00021b9b) fep_hwr_candidate_pane_g1_ParamLimits

0x7c7c,	// (0x00026e17) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7c7c,	// (0x00026e17) bg_popup_fep_shadow_pane_cp2

0x7e1a,	// (0x00026fb5) fep_vkb_top_pane_g4_ParamLimits

0x7e1a,	// (0x00026fb5) fep_vkb_top_pane_g4

0x7e60,	// (0x00026ffb) fep_vkb_side_pane_g2_ParamLimits

0x7e60,	// (0x00026ffb) fep_vkb_side_pane_g2

0xba95,	// (0x0002ac30) list_setting_pane_t4_ParamLimits

0xba95,	// (0x0002ac30) list_setting_pane_t4

0xbb2f,	// (0x0002acca) list_setting_number_pane_t5_ParamLimits

0xbb2f,	// (0x0002acca) list_setting_number_pane_t5

0x476c,	// (0x00023907) list_double_heading_pane_cp2_ParamLimits

0x476c,	// (0x00023907) list_double_heading_pane_cp2

0x40c1,	// (0x0002325c) list_double_heading_pane_g1_cp2_ParamLimits

0x40c1,	// (0x0002325c) list_double_heading_pane_g1_cp2

0x40cd,	// (0x00023268) list_double_heading_pane_g2_cp2_ParamLimits

0x40cd,	// (0x00023268) list_double_heading_pane_g2_cp2

0x81b7,	// (0x00027352) list_double_heading_pane_t1_cp2_ParamLimits

0x81b7,	// (0x00027352) list_double_heading_pane_t1_cp2

0x81cd,	// (0x00027368) list_double_heading_pane_t2_cp2_ParamLimits

0x81cd,	// (0x00027368) list_double_heading_pane_t2_cp2

0x3712,	// (0x000228ad) aid_value_unit2

0x1681,	// (0x0002081c) popup_preview_fixed_window

0x3aa7,	// (0x00022c42) bg_popup_preview_window_pane_cp02

0x81df,	// (0x0002737a) list_preview_fixed_pane

0x8225,	// (0x000273c0) list_empty_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_empty_pane_fp

0x8225,	// (0x000273c0) list_single_cale_day_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_cale_day_pane_fp

0x8225,	// (0x000273c0) list_single_graphic_heading_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_graphic_heading_pane_fp

0x8225,	// (0x000273c0) list_single_graphic_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_graphic_pane_fp

0x8225,	// (0x000273c0) list_single_heading_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_heading_pane_fp

0x8225,	// (0x000273c0) list_single_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_pane_fp

0x823a,	// (0x000273d5) list_single_pane_fp_g1_ParamLimits

0x823a,	// (0x000273d5) list_single_pane_fp_g1

0x1019,	// (0x000201b4) list_single_pane_fp_g2_ParamLimits

0x1019,	// (0x000201b4) list_single_pane_fp_g2

0x1025,	// (0x000201c0) list_single_pane_fp_g3_ParamLimits

0x1025,	// (0x000201c0) list_single_pane_fp_g3

0x8246,	// (0x000273e1) list_single_pane_fp_g4_ParamLimits

0x8246,	// (0x000273e1) list_single_pane_fp_g4

0x0003,

0xfb59,	// (0x0002ecf4) list_single_pane_fp_g_ParamLimits

0xfb59,	// (0x0002ecf4) list_single_pane_fp_g

0x1039,	// (0x000201d4) list_single_pane_fp_t1_ParamLimits

0x1039,	// (0x000201d4) list_single_pane_fp_t1

0x1050,	// (0x000201eb) list_single_graphic_pane_fp_g1_ParamLimits

0x1050,	// (0x000201eb) list_single_graphic_pane_fp_g1

0x823a,	// (0x000273d5) list_single_graphic_pane_fp_g2_ParamLimits

0x823a,	// (0x000273d5) list_single_graphic_pane_fp_g2

0x1019,	// (0x000201b4) list_single_graphic_pane_fp_g3_ParamLimits

0x1019,	// (0x000201b4) list_single_graphic_pane_fp_g3

0x1025,	// (0x000201c0) list_single_graphic_pane_fp_g4_ParamLimits

0x1025,	// (0x000201c0) list_single_graphic_pane_fp_g4

0x8246,	// (0x000273e1) list_single_graphic_pane_fp_g5_ParamLimits

0x8246,	// (0x000273e1) list_single_graphic_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ecfd) list_single_graphic_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ecfd) list_single_graphic_pane_fp_g

0x105c,	// (0x000201f7) list_single_graphic_pane_fp_t1_ParamLimits

0x105c,	// (0x000201f7) list_single_graphic_pane_fp_t1

0x1050,	// (0x000201eb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1050,	// (0x000201eb) list_single_graphic_heading_pane_fp_g1

0x823a,	// (0x000273d5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x823a,	// (0x000273d5) list_single_graphic_heading_pane_fp_g2

0x1019,	// (0x000201b4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1019,	// (0x000201b4) list_single_graphic_heading_pane_fp_g3

0x1025,	// (0x000201c0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1025,	// (0x000201c0) list_single_graphic_heading_pane_fp_g4

0x8246,	// (0x000273e1) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8246,	// (0x000273e1) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ecfd) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ecfd) list_single_graphic_heading_pane_fp_g

0x1072,	// (0x0002020d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1072,	// (0x0002020d) list_single_graphic_heading_pane_fp_t1

0x1088,	// (0x00020223) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1088,	// (0x00020223) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb6d,	// (0x0002ed08) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb6d,	// (0x0002ed08) list_single_graphic_heading_pane_fp_t

0x109a,	// (0x00020235) list_single_cale_day_pane_fp_g1_ParamLimits

0x109a,	// (0x00020235) list_single_cale_day_pane_fp_g1

0x8252,	// (0x000273ed) list_single_cale_day_pane_fp_g2_ParamLimits

0x8252,	// (0x000273ed) list_single_cale_day_pane_fp_g2

0x10d2,	// (0x0002026d) list_single_cale_day_pane_fp_g3_ParamLimits

0x10d2,	// (0x0002026d) list_single_cale_day_pane_fp_g3

0x10fa,	// (0x00020295) list_single_cale_day_pane_fp_g4_ParamLimits

0x10fa,	// (0x00020295) list_single_cale_day_pane_fp_g4

0x111e,	// (0x000202b9) list_single_cale_day_pane_fp_g5_ParamLimits

0x111e,	// (0x000202b9) list_single_cale_day_pane_fp_g5

0x0004,

0xfb72,	// (0x0002ed0d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb72,	// (0x0002ed0d) list_single_cale_day_pane_fp_g

0x1142,	// (0x000202dd) list_single_cale_day_pane_fp_t1_ParamLimits

0x1142,	// (0x000202dd) list_single_cale_day_pane_fp_t1

0x1168,	// (0x00020303) list_single_cale_day_pane_fp_t2_ParamLimits

0x1168,	// (0x00020303) list_single_cale_day_pane_fp_t2

0x1181,	// (0x0002031c) list_single_cale_day_pane_fp_t3_ParamLimits

0x1181,	// (0x0002031c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb7d,	// (0x0002ed18) list_single_cale_day_pane_fp_t_ParamLimits

0xfb7d,	// (0x0002ed18) list_single_cale_day_pane_fp_t

0x823a,	// (0x000273d5) list_empty_pane_fp_g1_ParamLimits

0x823a,	// (0x000273d5) list_empty_pane_fp_g1

0x119a,	// (0x00020335) list_empty_pane_fp_t1

0x11a8,	// (0x00020343) list_empty_pane_fp_t2

0x0001,

0xfb84,	// (0x0002ed1f) list_empty_pane_fp_t

0x823a,	// (0x000273d5) list_single_heading_pane_fp_g1_ParamLimits

0x823a,	// (0x000273d5) list_single_heading_pane_fp_g1

0x1019,	// (0x000201b4) list_single_heading_pane_fp_g2_ParamLimits

0x1019,	// (0x000201b4) list_single_heading_pane_fp_g2

0x1025,	// (0x000201c0) list_single_heading_pane_fp_g3_ParamLimits

0x1025,	// (0x000201c0) list_single_heading_pane_fp_g3

0x0002,

0xfb89,	// (0x0002ed24) list_single_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0002ed24) list_single_heading_pane_fp_g

0x11b6,	// (0x00020351) list_single_heading_pane_fp_t1_ParamLimits

0x11b6,	// (0x00020351) list_single_heading_pane_fp_t1

0x11c8,	// (0x00020363) list_single_heading_pane_fp_t2_ParamLimits

0x11c8,	// (0x00020363) list_single_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0002ed2b) list_single_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0002ed2b) list_single_heading_pane_fp_t

0x42b2,	// (0x0002344d) aid_size_cell_fast

0x3a17,	// (0x00022bb2) soft_indicator_pane_cp1_t1

0x42ef,	// (0x0002348a) cell_app_pane_cp2_ParamLimits

0x42ef,	// (0x0002348a) cell_app_pane_cp2

0x2850,	// (0x000219eb) fep_hwr_candidate_drop_down_list_pane

0xda4a,	// (0x0002cbe5) fep_hwr_candidate_pane_g3_ParamLimits

0xda4a,	// (0x0002cbe5) fep_hwr_candidate_pane_g3

0xda57,	// (0x0002cbf2) fep_hwr_candidate_pane_g4_ParamLimits

0xda57,	// (0x0002cbf2) fep_hwr_candidate_pane_g4

0x0002,

0xfb04,	// (0x0002ec9f) fep_hwr_candidate_pane_g_ParamLimits

0xfb04,	// (0x0002ec9f) fep_hwr_candidate_pane_g

0x7d01,	// (0x00026e9c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7d01,	// (0x00026e9c) fep_vkb_candidate_drop_down_list_pane

0x8112,	// (0x000272ad) fep_vkb_candidate_pane_g3

0x811a,	// (0x000272b5) fep_vkb_candidate_pane_g4

0x0002,

0xfb31,	// (0x0002eccc) fep_vkb_candidate_pane_g

0x7e1a,	// (0x00026fb5) cell_hwr_candidate_pane_g1_ParamLimits

0x8131,	// (0x000272cc) cell_hwr_candidate_pane_g3_ParamLimits

0x8131,	// (0x000272cc) cell_hwr_candidate_pane_g3

0x8152,	// (0x000272ed) cell_hwr_candidate_pane_g4_ParamLimits

0x8152,	// (0x000272ed) cell_hwr_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0002ece6) cell_hwr_candidate_pane_g_ParamLimits

0xfb4b,	// (0x0002ece6) cell_hwr_candidate_pane_g

0x8173,	// (0x0002730e) cell_vkb_candidate_pane_g3_ParamLimits

0x8173,	// (0x0002730e) cell_vkb_candidate_pane_g3

0x818e,	// (0x00027329) cell_vkb_candidate_pane_g4_ParamLimits

0x818e,	// (0x00027329) cell_vkb_candidate_pane_g4

0x825e,	// (0x000273f9) cell_app_pane_cp2_g1_ParamLimits

0x825e,	// (0x000273f9) cell_app_pane_cp2_g1

0x827c,	// (0x00027417) cell_app_pane_cp2_g2_ParamLimits

0x827c,	// (0x00027417) cell_app_pane_cp2_g2

0x0001,

0xfb95,	// (0x0002ed30) cell_app_pane_cp2_g_ParamLimits

0xfb95,	// (0x0002ed30) cell_app_pane_cp2_g

0x8288,	// (0x00027423) cell_app_pane_cp2_t1_ParamLimits

0x8288,	// (0x00027423) cell_app_pane_cp2_t1

0x40b3,	// (0x0002324e) grid_highlight_pane_cp1_ParamLimits

0x40b3,	// (0x0002324e) grid_highlight_pane_cp1

0x2a8c,	// (0x00021c27) cell_hwr_candidate_pane_cp1_ParamLimits

0x2a8c,	// (0x00021c27) cell_hwr_candidate_pane_cp1

0x7e1a,	// (0x00026fb5) fep_hwr_candidate_drop_down_list_pane_g1

0x829a,	// (0x00027435) fep_hwr_candidate_drop_down_list_pane_g2

0x82a7,	// (0x00027442) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002ed35) fep_hwr_candidate_drop_down_list_pane_g

0x2aab,	// (0x00021c46) fep_hwr_candidate_drop_down_list_scroll_pane

0x2ab4,	// (0x00021c4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2ab4,	// (0x00021c4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ac1,	// (0x00021c5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ac1,	// (0x00021c5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2ace,	// (0x00021c69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2ace,	// (0x00021c69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8173,	// (0x0002730e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8173,	// (0x0002730e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x818e,	// (0x00027329) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x818e,	// (0x00027329) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2adb,	// (0x00021c76) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2adb,	// (0x00021c76) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2af6,	// (0x00021c91) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2af6,	// (0x00021c91) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2b11,	// (0x00021cac) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2b11,	// (0x00021cac) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba1,	// (0x0002ed3c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba1,	// (0x0002ed3c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x82b4,	// (0x0002744f) cell_vkb_candidate_pane_cp1_ParamLimits

0x82b4,	// (0x0002744f) cell_vkb_candidate_pane_cp1

0x7e1a,	// (0x00026fb5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7e1a,	// (0x00026fb5) fep_vkb_candidate_drop_down_list_pane_g1

0x829a,	// (0x00027435) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x829a,	// (0x00027435) fep_vkb_candidate_drop_down_list_pane_g2

0x82a7,	// (0x00027442) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x82a7,	// (0x00027442) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb9a,	// (0x0002ed35) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb9a,	// (0x0002ed35) fep_vkb_candidate_drop_down_list_pane_g

0x82d4,	// (0x0002746f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x82d4,	// (0x0002746f) fep_vkb_candidate_drop_down_list_scroll_pane

0x82e1,	// (0x0002747c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x82e1,	// (0x0002747c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x82ee,	// (0x00027489) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x82ee,	// (0x00027489) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x82fa,	// (0x00027495) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x82fa,	// (0x00027495) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8131,	// (0x000272cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8131,	// (0x000272cc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8152,	// (0x000272ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8152,	// (0x000272ed) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8306,	// (0x000274a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8306,	// (0x000274a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8327,	// (0x000274c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8327,	// (0x000274c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8348,	// (0x000274e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8348,	// (0x000274e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0002ed4d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0002ed4d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd0b0,	// (0x0002c24b) title_pane_g1_ParamLimits

0xd0c3,	// (0x0002c25e) title_pane_g2_ParamLimits

0xf54e,	// (0x0002e6e9) title_pane_g_ParamLimits

0x4725,	// (0x000238c0) aid_call2_pane

0x472d,	// (0x000238c8) aid_call_pane

0x4735,	// (0x000238d0) popup_clock_analogue_window_g1

0x4735,	// (0x000238d0) popup_clock_analogue_window_g2

0x19f2,	// (0x00020b8d) popup_clock_analogue_window_g3

0x19fb,	// (0x00020b96) popup_clock_analogue_window_g4

0x3734,	// (0x000228cf) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0002e893) popup_clock_analogue_window_g

0x1a03,	// (0x00020b9e) popup_clock_analogue_window_t1

0x1a11,	// (0x00020bac) clock_digital_number_pane_ParamLimits

0x1a11,	// (0x00020bac) clock_digital_number_pane

0x1a1d,	// (0x00020bb8) clock_digital_number_pane_cp02_ParamLimits

0x1a1d,	// (0x00020bb8) clock_digital_number_pane_cp02

0x1a29,	// (0x00020bc4) clock_digital_number_pane_cp03_ParamLimits

0x1a29,	// (0x00020bc4) clock_digital_number_pane_cp03

0x1a35,	// (0x00020bd0) clock_digital_number_pane_cp04_ParamLimits

0x1a35,	// (0x00020bd0) clock_digital_number_pane_cp04

0x1a41,	// (0x00020bdc) clock_digital_separator_pane_ParamLimits

0x1a41,	// (0x00020bdc) clock_digital_separator_pane

0x1a4d,	// (0x00020be8) popup_clock_digital_window_t1_ParamLimits

0x1a4d,	// (0x00020be8) popup_clock_digital_window_t1

0x3734,	// (0x000228cf) clock_digital_number_pane_g1

0x3734,	// (0x000228cf) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002e89e) clock_digital_number_pane_g

0x3734,	// (0x000228cf) clock_digital_separator_pane_g1

0x3734,	// (0x000228cf) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002e89e) clock_digital_separator_pane_g

0xd757,	// (0x0002c8f2) aid_fill_nsta_ParamLimits

0xd88d,	// (0x0002ca28) indicator_nsta_pane_ParamLimits

0x5367,	// (0x00024502) popup_clock_analogue_window

0x5367,	// (0x00024502) popup_clock_digital_window

0x4273,	// (0x0002340e) grid_indicator_nsta_pane_ParamLimits

0x75b4,	// (0x0002674f) clock_nsta_pane_t2

0x0001,

0xfa84,	// (0x0002ec1f) clock_nsta_pane_t

0x19b6,	// (0x00020b51) aid_size_max_handle

0xc1f8,	// (0x0002b393) aid_size_min_handle

0x4d48,	// (0x00023ee3) editor_scroll_pane

0x8363,	// (0x000274fe) ex_editor_pane

0x4220,	// (0x000233bb) scroll_pane_cp13

0x4052,	// (0x000231ed) scroll_pane_cp14

0x4764,	// (0x000238ff) scroll_pane_cp36

0xd53a,	// (0x0002c6d5) list_single_graphic_hl_pane_cp2_ParamLimits

0xd53a,	// (0x0002c6d5) list_single_graphic_hl_pane_cp2

0xbdaf,	// (0x0002af4a) list_single_graphic_hl_pane_ParamLimits

0xbdaf,	// (0x0002af4a) list_single_graphic_hl_pane

0x11de,	// (0x00020379) aid_size_min_hl_cp1

0x836b,	// (0x00027506) list_highlight_pane_cp34_ParamLimits

0x836b,	// (0x00027506) list_highlight_pane_cp34

0x837c,	// (0x00027517) list_single_graphic_hl_pane_g1_ParamLimits

0x837c,	// (0x00027517) list_single_graphic_hl_pane_g1

0xbe09,	// (0x0002afa4) list_single_graphic_hl_pane_g2_ParamLimits

0xbe09,	// (0x0002afa4) list_single_graphic_hl_pane_g2

0xbe09,	// (0x0002afa4) list_single_graphic_hl_pane_g3_ParamLimits

0xbe09,	// (0x0002afa4) list_single_graphic_hl_pane_g3

0xbe15,	// (0x0002afb0) list_single_graphic_hl_pane_g4_ParamLimits

0xbe15,	// (0x0002afb0) list_single_graphic_hl_pane_g4

0xbe21,	// (0x0002afbc) list_single_graphic_hl_pane_g5_ParamLimits

0xbe21,	// (0x0002afbc) list_single_graphic_hl_pane_g5

0x0004,

0xfbc3,	// (0x0002ed5e) list_single_graphic_hl_pane_g_ParamLimits

0xfbc3,	// (0x0002ed5e) list_single_graphic_hl_pane_g

0xbe35,	// (0x0002afd0) list_single_graphic_hl_pane_t1_ParamLimits

0xbe35,	// (0x0002afd0) list_single_graphic_hl_pane_t1

0x8389,	// (0x00027524) aid_size_min_hl_cp2

0x8392,	// (0x0002752d) list_highlight_pane_cp34_cp2_ParamLimits

0x8392,	// (0x0002752d) list_highlight_pane_cp34_cp2

0x837c,	// (0x00027517) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x837c,	// (0x00027517) list_single_graphic_hl_pane_g1_cp2

0x839f,	// (0x0002753a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x839f,	// (0x0002753a) list_single_graphic_hl_pane_g2_cp2

0x83ab,	// (0x00027546) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x83ab,	// (0x00027546) list_single_graphic_hl_pane_g3_cp2

0x73d7,	// (0x00026572) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x73d7,	// (0x00026572) list_single_graphic_hl_pane_g4_cp2

0x83b9,	// (0x00027554) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x83b9,	// (0x00027554) list_single_graphic_hl_pane_g5_cp2

0xc253,	// (0x0002b3ee) control_pane_g4_ParamLimits

0xc253,	// (0x0002b3ee) control_pane_g4

0x506c,	// (0x00024207) bg_popup_sub_pane_cp10_ParamLimits

0x7ba6,	// (0x00026d41) list_choice_list_pane_ParamLimits

0x7bb5,	// (0x00026d50) scroll_pane_cp23

0x3aa7,	// (0x00022c42) bg_popup_preview_window_pane_cp02_ParamLimits

0x81df,	// (0x0002737a) list_preview_fixed_pane_ParamLimits

0x81f5,	// (0x00027390) list_preview_fixed_pane_cp_ParamLimits

0x81f5,	// (0x00027390) list_preview_fixed_pane_cp

0x8201,	// (0x0002739c) popup_preview_fixed_window_g1_ParamLimits

0x8201,	// (0x0002739c) popup_preview_fixed_window_g1

0x820d,	// (0x000273a8) popup_preview_fixed_window_g2_ParamLimits

0x820d,	// (0x000273a8) popup_preview_fixed_window_g2

0x0002,

0xfb52,	// (0x0002eced) popup_preview_fixed_window_g_ParamLimits

0xfb52,	// (0x0002eced) popup_preview_fixed_window_g

0x192a,	// (0x00020ac5) aid_navi_side_left_pane_ParamLimits

0x193f,	// (0x00020ada) aid_navi_side_right_pane_ParamLimits

0x1957,	// (0x00020af2) navi_icon_pane_stacon_ParamLimits

0x196b,	// (0x00020b06) navi_navi_pane_stacon_ParamLimits

0x1957,	// (0x00020af2) navi_text_pane_stacon_ParamLimits

0x372a,	// (0x000228c5) main_text_info_pane

0x83e3,	// (0x0002757e) listscroll_text_info_pane

0x83eb,	// (0x00027586) list_text_info_pane_ParamLimits

0x83eb,	// (0x00027586) list_text_info_pane

0x83fa,	// (0x00027595) scroll_pane_cp24_ParamLimits

0x83fa,	// (0x00027595) scroll_pane_cp24

0xe408,	// (0x0002d5a3) list_text_info_pane_t1_ParamLimits

0xe408,	// (0x0002d5a3) list_text_info_pane_t1

0xc3a8,	// (0x0002b543) popup_fast_swap2_window_ParamLimits

0xc3a8,	// (0x0002b543) popup_fast_swap2_window

0x8449,	// (0x000275e4) aid_size_cell_fast2

0x372a,	// (0x000228c5) bg_popup_window_pane_cp17

0x59fc,	// (0x00024b97) heading_pane_cp2

0x3d1c,	// (0x00022eb7) listscroll_fast2_pane

0x8453,	// (0x000275ee) grid_fast2_pane

0x845d,	// (0x000275f8) listscroll_fast2_pane_g1

0x8465,	// (0x00027600) listscroll_fast2_pane_g2

0x0001,

0xfbce,	// (0x0002ed69) listscroll_fast2_pane_g

0x4220,	// (0x000233bb) scroll_pane_cp26

0x846f,	// (0x0002760a) cell_fast2_pane_ParamLimits

0x846f,	// (0x0002760a) cell_fast2_pane

0x8484,	// (0x0002761f) cell_fast2_pane_g1

0x848d,	// (0x00027628) cell_fast2_pane_g2

0x8496,	// (0x00027631) cell_fast2_pane_g3

0x0002,

0xfbd3,	// (0x0002ed6e) cell_fast2_pane_g

0x3e0f,	// (0x00022faa) grid_highlight_pane_cp9

0x3e24,	// (0x00022fbf) main_eswt_pane_ParamLimits

0x3e24,	// (0x00022fbf) main_eswt_pane

0x840f,	// (0x000275aa) list_single_text_info_pane

0x849e,	// (0x00027639) eswt_ctrl_button_pane

0x849e,	// (0x00027639) eswt_ctrl_canvas_pane

0x84a6,	// (0x00027641) eswt_ctrl_combo_pane

0x849e,	// (0x00027639) eswt_ctrl_default_pane

0x849e,	// (0x00027639) eswt_ctrl_label_pane

0x84ae,	// (0x00027649) eswt_ctrl_wait_pane

0x84b6,	// (0x00027651) eswt_shell_pane

0x372a,	// (0x000228c5) listscroll_eswt_app_pane

0x84d6,	// (0x00027671) popup_eswt_tasktip_window_ParamLimits

0x84d6,	// (0x00027671) popup_eswt_tasktip_window

0x5604,	// (0x0002479f) bg_popup_window_pane_cp18

0x84e7,	// (0x00027682) eswt_control_pane_g1_ParamLimits

0x84e7,	// (0x00027682) eswt_control_pane_g1

0x84f4,	// (0x0002768f) eswt_control_pane_g2_ParamLimits

0x84f4,	// (0x0002768f) eswt_control_pane_g2

0x8501,	// (0x0002769c) eswt_control_pane_g3_ParamLimits

0x8501,	// (0x0002769c) eswt_control_pane_g3

0x850e,	// (0x000276a9) eswt_control_pane_g4_ParamLimits

0x850e,	// (0x000276a9) eswt_control_pane_g4

0x0003,

0xfbda,	// (0x0002ed75) eswt_control_pane_g_ParamLimits

0xfbda,	// (0x0002ed75) eswt_control_pane_g

0x40b3,	// (0x0002324e) bg_button_pane_ParamLimits

0x40b3,	// (0x0002324e) bg_button_pane

0x3e24,	// (0x00022fbf) common_borders_pane_copy2_ParamLimits

0x3e24,	// (0x00022fbf) common_borders_pane_copy2

0x851b,	// (0x000276b6) control_button_pane_g1_ParamLimits

0x851b,	// (0x000276b6) control_button_pane_g1

0x8527,	// (0x000276c2) control_button_pane_g2_ParamLimits

0x8527,	// (0x000276c2) control_button_pane_g2

0x8533,	// (0x000276ce) control_button_pane_g3_ParamLimits

0x8533,	// (0x000276ce) control_button_pane_g3

0x0002,

0xfbe3,	// (0x0002ed7e) control_button_pane_g_ParamLimits

0xfbe3,	// (0x0002ed7e) control_button_pane_g

0x8547,	// (0x000276e2) control_button_pane_t1

0x8555,	// (0x000276f0) control_button_pane_t2

0x0001,

0xfbea,	// (0x0002ed85) control_button_pane_t

0x5590,	// (0x0002472b) bg_button_pane_g1

0x5598,	// (0x00024733) bg_button_pane_g2

0x55a0,	// (0x0002473b) bg_button_pane_g3

0x55a8,	// (0x00024743) bg_button_pane_g4

0x55b0,	// (0x0002474b) bg_button_pane_g5

0x55b8,	// (0x00024753) bg_button_pane_g6

0x55c0,	// (0x0002475b) bg_button_pane_g7

0x55c8,	// (0x00024763) bg_button_pane_g8

0x55d0,	// (0x0002476b) bg_button_pane_g9

0x0008,

0xf85a,	// (0x0002e9f5) bg_button_pane_g

0x7b61,	// (0x00026cfc) common_borders_pane_ParamLimits

0x7b61,	// (0x00026cfc) common_borders_pane

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy1_ParamLimits

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy1

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy1_ParamLimits

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy1

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy1_ParamLimits

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy1

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy1_ParamLimits

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy1

0x7b9c,	// (0x00026d37) bg_eswt_ctrl_canvas_pane_g1

0x7b61,	// (0x00026cfc) common_borders_pane_cp2_ParamLimits

0x7b61,	// (0x00026cfc) common_borders_pane_cp2

0x7b61,	// (0x00026cfc) common_borders_pane_cp3_ParamLimits

0x7b61,	// (0x00026cfc) common_borders_pane_cp3

0x8563,	// (0x000276fe) separator_horizontal_pane

0x856b,	// (0x00027706) separator_vertical_pane

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy2_ParamLimits

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy2

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy2_ParamLimits

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy2

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy2_ParamLimits

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy2

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy2_ParamLimits

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy2

0x372a,	// (0x000228c5) common_borders_pane_cp4

0x8574,	// (0x0002770f) separator_horizontal_pane_g1

0x857d,	// (0x00027718) separator_horizontal_pane_g2

0x8586,	// (0x00027721) separator_horizontal_pane_g3

0x0002,

0xfbef,	// (0x0002ed8a) separator_horizontal_pane_g

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy3_ParamLimits

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy3

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy3_ParamLimits

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy3

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy3_ParamLimits

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy3

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy3_ParamLimits

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy3

0x372a,	// (0x000228c5) common_borders_pane_cp5

0x858f,	// (0x0002772a) separator_vertical_pane_g1

0x8598,	// (0x00027733) separator_vertical_pane_g2

0x85a1,	// (0x0002773c) separator_vertical_pane_g3

0x0002,

0xfbf6,	// (0x0002ed91) separator_vertical_pane_g

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy4_ParamLimits

0x84e7,	// (0x00027682) eswt_control_pane_g1_copy4

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy4_ParamLimits

0x84f4,	// (0x0002768f) eswt_control_pane_g2_copy4

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy4_ParamLimits

0x8501,	// (0x0002769c) eswt_control_pane_g3_copy4

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy4_ParamLimits

0x850e,	// (0x000276a9) eswt_control_pane_g4_copy4

0xe423,	// (0x0002d5be) eswt_ctrl_combo_button_pane

0xe42b,	// (0x0002d5c6) eswt_ctrl_input_pane

0xe433,	// (0x0002d5ce) popup_choice_list_window_cp70

0xe43b,	// (0x0002d5d6) eswt_ctrl_input_pane_t1

0x372a,	// (0x000228c5) input_focus_pane_cp70

0x7b61,	// (0x00026cfc) bg_button_pane_cp70_ParamLimits

0x7b61,	// (0x00026cfc) bg_button_pane_cp70

0xe449,	// (0x0002d5e4) eswt_ctrl_combo_button_pane_g1

0x85d8,	// (0x00027773) wait_bar_pane_cp70

0x5604,	// (0x0002479f) bg_popup_window_pane_cp70_ParamLimits

0x5604,	// (0x0002479f) bg_popup_window_pane_cp70

0x85e0,	// (0x0002777b) popup_eswt_tasktip_window_t1

0x85f6,	// (0x00027791) wait_bar_pane_cp71_ParamLimits

0x85f6,	// (0x00027791) wait_bar_pane_cp71

0x8602,	// (0x0002779d) grid_eswt_app_pane

0x4547,	// (0x000236e2) scroll_pane_cp70

0xe451,	// (0x0002d5ec) cell_eswt_app_pane_ParamLimits

0xe451,	// (0x0002d5ec) cell_eswt_app_pane

0xe47b,	// (0x0002d616) cell_eswt_app_pane_g1_ParamLimits

0xe47b,	// (0x0002d616) cell_eswt_app_pane_g1

0xe4aa,	// (0x0002d645) cell_eswt_app_pane_g2_ParamLimits

0xe4aa,	// (0x0002d645) cell_eswt_app_pane_g2

0x0001,

0xfbfd,	// (0x0002ed98) cell_eswt_app_pane_g_ParamLimits

0xfbfd,	// (0x0002ed98) cell_eswt_app_pane_g

0xe4d3,	// (0x0002d66e) cell_eswt_app_pane_t1_ParamLimits

0xe4d3,	// (0x0002d66e) cell_eswt_app_pane_t1

0x86c5,	// (0x00027860) grid_highlight_pane_cp70_ParamLimits

0x86c5,	// (0x00027860) grid_highlight_pane_cp70

0x4c1d,	// (0x00023db8) set_content_pane_g1

0xd70c,	// (0x0002c8a7) status_small_volume_pane

0x2b2c,	// (0x00021cc7) status_small_volume_pane_g1

0x2b34,	// (0x00021ccf) volume_small2_pane

0x2b3d,	// (0x00021cd8) volume_small2_pane_g1

0x2b46,	// (0x00021ce1) volume_small2_pane_g2

0x2b4f,	// (0x00021cea) volume_small2_pane_g3

0x2b58,	// (0x00021cf3) volume_small2_pane_g4

0x2b61,	// (0x00021cfc) volume_small2_pane_g5

0x2b6a,	// (0x00021d05) volume_small2_pane_g6

0x2b73,	// (0x00021d0e) volume_small2_pane_g7

0x2b7c,	// (0x00021d17) volume_small2_pane_g8

0x2b85,	// (0x00021d20) volume_small2_pane_g9

0x2b8e,	// (0x00021d29) volume_small2_pane_g10

0x0009,

0xfc02,	// (0x0002ed9d) volume_small2_pane_g

0x7f62,	// (0x000270fd) fep_vkb_top_text_pane_g1_ParamLimits

0xe3b0,	// (0x0002d54b) fep_vkb_top_text_pane_t1_ParamLimits

0x8219,	// (0x000273b4) popup_preview_fixed_window_g3_ParamLimits

0x8219,	// (0x000273b4) popup_preview_fixed_window_g3

0xc9cb,	// (0x0002bb66) popup_toolbar_trans_pane

0xddc6,	// (0x0002cf61) aid_height_set_list_ParamLimits

0x6972,	// (0x00025b0d) aid_size_parent_ParamLimits

0x506c,	// (0x00024207) list_highlight_pane_cp2_ParamLimits

0x4c1d,	// (0x00023db8) set_content_pane_g1_ParamLimits

0xbdc1,	// (0x0002af5c) list_single_image_pane_ParamLimits

0xbdc1,	// (0x0002af5c) list_single_image_pane

0xe505,	// (0x0002d6a0) aid_size_cell_image_ParamLimits

0xe505,	// (0x0002d6a0) aid_size_cell_image

0xe512,	// (0x0002d6ad) grid_single_image_pane_ParamLimits

0xe512,	// (0x0002d6ad) grid_single_image_pane

0x587c,	// (0x00024a17) list_single_image_pane_g1_ParamLimits

0x587c,	// (0x00024a17) list_single_image_pane_g1

0x86ea,	// (0x00027885) list_single_image_pane_g2_ParamLimits

0x86ea,	// (0x00027885) list_single_image_pane_g2

0x0001,

0xfc17,	// (0x0002edb2) list_single_image_pane_g_ParamLimits

0xfc17,	// (0x0002edb2) list_single_image_pane_g

0x86fe,	// (0x00027899) list_single_image_pane_t1_ParamLimits

0x86fe,	// (0x00027899) list_single_image_pane_t1

0xe520,	// (0x0002d6bb) cell_image_list_pane_ParamLimits

0xe520,	// (0x0002d6bb) cell_image_list_pane

0xe536,	// (0x0002d6d1) cell_image_list_pane_g1

0xe53f,	// (0x0002d6da) cell_image_list_pane_g2

0x0001,

0xfc1c,	// (0x0002edb7) cell_image_list_pane_g

0x873a,	// (0x000278d5) aid_size_cell_tb_trans_pane

0x40b3,	// (0x0002324e) bg_tb_trans_pane

0x874c,	// (0x000278e7) grid_tb_trans_pane

0x5590,	// (0x0002472b) bg_tb_trans_pane_g1

0x5598,	// (0x00024733) bg_tb_trans_pane_g2

0x55a0,	// (0x0002473b) bg_tb_trans_pane_g3

0x55a8,	// (0x00024743) bg_tb_trans_pane_g4

0x55b0,	// (0x0002474b) bg_tb_trans_pane_g5

0x55c8,	// (0x00024763) bg_tb_trans_pane_g6

0x55d0,	// (0x0002476b) bg_tb_trans_pane_g7

0x55b8,	// (0x00024753) bg_tb_trans_pane_g8

0x55c0,	// (0x0002475b) bg_tb_trans_pane_g9

0x0008,

0xfc21,	// (0x0002edbc) bg_tb_trans_pane_g

0x8760,	// (0x000278fb) cell_toolbar_trans_pane_ParamLimits

0x8760,	// (0x000278fb) cell_toolbar_trans_pane

0x7b9c,	// (0x00026d37) cell_toolbar_trans_pane_g1

0xe19b,	// (0x0002d336) list_form2_midp_pane_t1

0xe1a9,	// (0x0002d344) list_form2_midp_pane_t2

0x0001,

0xfaca,	// (0x0002ec65) list_form2_midp_pane_t

0x778d,	// (0x00026928) scroll_pane_cp51_ParamLimits

0x7949,	// (0x00026ae4) form2_midp_wait_pane_g1

0x7952,	// (0x00026aed) form2_midp_wait_pane_g2

0x795b,	// (0x00026af6) form2_midp_wait_pane_g3

0x0002,

0xfadf,	// (0x0002ec7a) form2_midp_wait_pane_g

0x381e,	// (0x000229b9) list_highlight_pane_cp21_ParamLimits

0x79a7,	// (0x00026b42) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x79b6,	// (0x00026b51) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_2graphic_im_pane_ParamLimits

0x6b2a,	// (0x00025cc5) list_single_2graphic_im_pane

0xe548,	// (0x0002d6e3) list_single_2graphic_im_pane_g1_ParamLimits

0xe548,	// (0x0002d6e3) list_single_2graphic_im_pane_g1

0xe559,	// (0x0002d6f4) list_single_2graphic_im_pane_g2_ParamLimits

0xe559,	// (0x0002d6f4) list_single_2graphic_im_pane_g2

0xe565,	// (0x0002d700) list_single_2graphic_im_pane_g3_ParamLimits

0xe565,	// (0x0002d700) list_single_2graphic_im_pane_g3

0x0003,

0xfc34,	// (0x0002edcf) list_single_2graphic_im_pane_g_ParamLimits

0xfc34,	// (0x0002edcf) list_single_2graphic_im_pane_g

0xe579,	// (0x0002d714) list_single_2graphic_im_pane_t1_ParamLimits

0xe579,	// (0x0002d714) list_single_2graphic_im_pane_t1

0x8225,	// (0x000273c0) list_single_graphic_2heading_pane_fp_ParamLimits

0x8225,	// (0x000273c0) list_single_graphic_2heading_pane_fp

0x1050,	// (0x000201eb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1050,	// (0x000201eb) list_single_graphic_2heading_pane_fp_g1

0x823a,	// (0x000273d5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x823a,	// (0x000273d5) list_single_graphic_2heading_pane_fp_g2

0x1019,	// (0x000201b4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1019,	// (0x000201b4) list_single_graphic_2heading_pane_fp_g3

0x1025,	// (0x000201c0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1025,	// (0x000201c0) list_single_graphic_2heading_pane_fp_g4

0x8246,	// (0x000273e1) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8246,	// (0x000273e1) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb62,	// (0x0002ecfd) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb62,	// (0x0002ecfd) list_single_graphic_2heading_pane_fp_g

0x1229,	// (0x000203c4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x1229,	// (0x000203c4) list_single_graphic_2heading_pane_fp_t1

0x1088,	// (0x00020223) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1088,	// (0x00020223) list_single_graphic_2heading_pane_fp_t2

0x123f,	// (0x000203da) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x123f,	// (0x000203da) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3d,	// (0x0002edd8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3d,	// (0x0002edd8) list_single_graphic_2heading_pane_fp_t

0x7c28,	// (0x00026dc3) fep_hwr_write_pane_g5_ParamLimits

0x7c28,	// (0x00026dc3) fep_hwr_write_pane_g5

0x7c34,	// (0x00026dcf) fep_hwr_write_pane_g6_ParamLimits

0x7c34,	// (0x00026dcf) fep_hwr_write_pane_g6

0x84b6,	// (0x00027651) eswt_shell_pane_ParamLimits

0x5604,	// (0x0002479f) bg_popup_window_pane_cp18_ParamLimits

0x68ba,	// (0x00025a55) heading_pane_cp70

0x85e0,	// (0x0002777b) popup_eswt_tasktip_window_t1_ParamLimits

0xd7b2,	// (0x0002c94d) aid_touch_tab_arrow_left

0xd7c8,	// (0x0002c963) aid_touch_tab_arrow_right

0xd0db,	// (0x0002c276) title_pane_g3_ParamLimits

0xd0db,	// (0x0002c276) title_pane_g3

0x4072,	// (0x0002320d) set_value_pane_g1

0xc9cb,	// (0x0002bb66) popup_toolbar_trans_pane_ParamLimits

0x873a,	// (0x000278d5) aid_size_cell_tb_trans_pane_ParamLimits

0x40b3,	// (0x0002324e) bg_tb_trans_pane_ParamLimits

0x874c,	// (0x000278e7) grid_tb_trans_pane_ParamLimits

0x3aa7,	// (0x00022c42) cont_note_pane_ParamLimits

0x3aa7,	// (0x00022c42) cont_note_pane

0x3e24,	// (0x00022fbf) cont_snote2_single_text_pane_ParamLimits

0x3e24,	// (0x00022fbf) cont_snote2_single_text_pane

0x3e24,	// (0x00022fbf) cont_snote2_single_graphic_pane_ParamLimits

0x3e24,	// (0x00022fbf) cont_snote2_single_graphic_pane

0x5c23,	// (0x00024dbe) cont_note_wait_pane_ParamLimits

0x5c23,	// (0x00024dbe) cont_note_wait_pane

0x5c23,	// (0x00024dbe) cont_note_image_pane_ParamLimits

0x5c23,	// (0x00024dbe) cont_note_image_pane

0x87f4,	// (0x0002798f) popup_note2_window_g1_ParamLimits

0x87f4,	// (0x0002798f) popup_note2_window_g1

0x8825,	// (0x000279c0) popup_note2_window_t1_ParamLimits

0x8825,	// (0x000279c0) popup_note2_window_t1

0x886a,	// (0x00027a05) popup_note2_window_t2_ParamLimits

0x886a,	// (0x00027a05) popup_note2_window_t2

0x88af,	// (0x00027a4a) popup_note2_window_t3_ParamLimits

0x88af,	// (0x00027a4a) popup_note2_window_t3

0x88f4,	// (0x00027a8f) popup_note2_window_t4_ParamLimits

0x88f4,	// (0x00027a8f) popup_note2_window_t4

0x3b2b,	// (0x00022cc6) popup_note2_window_t5_ParamLimits

0x3b2b,	// (0x00022cc6) popup_note2_window_t5

0x0004,

0xfc49,	// (0x0002ede4) popup_note2_window_t_ParamLimits

0xfc49,	// (0x0002ede4) popup_note2_window_t

0x8923,	// (0x00027abe) popup_note2_image_window_g1_ParamLimits

0x8923,	// (0x00027abe) popup_note2_image_window_g1

0x892f,	// (0x00027aca) popup_note2_image_window_g2_ParamLimits

0x892f,	// (0x00027aca) popup_note2_image_window_g2

0x0001,

0xfc54,	// (0x0002edef) popup_note2_image_window_g_ParamLimits

0xfc54,	// (0x0002edef) popup_note2_image_window_g

0x8941,	// (0x00027adc) popup_note2_image_window_t1_ParamLimits

0x8941,	// (0x00027adc) popup_note2_image_window_t1

0x8959,	// (0x00027af4) popup_note2_image_window_t2_ParamLimits

0x8959,	// (0x00027af4) popup_note2_image_window_t2

0x8971,	// (0x00027b0c) popup_note2_image_window_t3_ParamLimits

0x8971,	// (0x00027b0c) popup_note2_image_window_t3

0x0002,

0xfc59,	// (0x0002edf4) popup_note2_image_window_t_ParamLimits

0xfc59,	// (0x0002edf4) popup_note2_image_window_t

0x5c31,	// (0x00024dcc) popup_note2_wait_window_g1_ParamLimits

0x5c31,	// (0x00024dcc) popup_note2_wait_window_g1

0x898d,	// (0x00027b28) popup_note2_wait_window_g2_ParamLimits

0x898d,	// (0x00027b28) popup_note2_wait_window_g2

0x5c49,	// (0x00024de4) popup_note2_wait_window_g3_ParamLimits

0x5c49,	// (0x00024de4) popup_note2_wait_window_g3

0x0002,

0xfc60,	// (0x0002edfb) popup_note2_wait_window_g_ParamLimits

0xfc60,	// (0x0002edfb) popup_note2_wait_window_g

0x8999,	// (0x00027b34) popup_note2_wait_window_t1_ParamLimits

0x8999,	// (0x00027b34) popup_note2_wait_window_t1

0x89b7,	// (0x00027b52) popup_note2_wait_window_t2_ParamLimits

0x89b7,	// (0x00027b52) popup_note2_wait_window_t2

0x89d5,	// (0x00027b70) popup_note2_wait_window_t3_ParamLimits

0x89d5,	// (0x00027b70) popup_note2_wait_window_t3

0x89e7,	// (0x00027b82) popup_note2_wait_window_t4_ParamLimits

0x89e7,	// (0x00027b82) popup_note2_wait_window_t4

0x0003,

0xfc67,	// (0x0002ee02) popup_note2_wait_window_t_ParamLimits

0xfc67,	// (0x0002ee02) popup_note2_wait_window_t

0x89f9,	// (0x00027b94) wait_bar2_pane_ParamLimits

0x89f9,	// (0x00027b94) wait_bar2_pane

0x8a11,	// (0x00027bac) popup_snote2_single_text_window_g1_ParamLimits

0x8a11,	// (0x00027bac) popup_snote2_single_text_window_g1

0x8a39,	// (0x00027bd4) popup_snote2_single_text_window_t1_ParamLimits

0x8a39,	// (0x00027bd4) popup_snote2_single_text_window_t1

0x8a85,	// (0x00027c20) popup_snote2_single_text_window_t2_ParamLimits

0x8a85,	// (0x00027c20) popup_snote2_single_text_window_t2

0x8ad1,	// (0x00027c6c) popup_snote2_single_text_window_t3_ParamLimits

0x8ad1,	// (0x00027c6c) popup_snote2_single_text_window_t3

0x8b12,	// (0x00027cad) popup_snote2_single_text_window_t4_ParamLimits

0x8b12,	// (0x00027cad) popup_snote2_single_text_window_t4

0x8b48,	// (0x00027ce3) popup_snote2_single_text_window_t5_ParamLimits

0x8b48,	// (0x00027ce3) popup_snote2_single_text_window_t5

0x0004,

0xfc70,	// (0x0002ee0b) popup_snote2_single_text_window_t_ParamLimits

0xfc70,	// (0x0002ee0b) popup_snote2_single_text_window_t

0x8b73,	// (0x00027d0e) popup_snote2_single_graphic_window_g1_ParamLimits

0x8b73,	// (0x00027d0e) popup_snote2_single_graphic_window_g1

0x8b9b,	// (0x00027d36) popup_snote2_single_graphic_window_g2_ParamLimits

0x8b9b,	// (0x00027d36) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7b,	// (0x0002ee16) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7b,	// (0x0002ee16) popup_snote2_single_graphic_window_g

0x8bc3,	// (0x00027d5e) popup_snote2_single_graphic_window_t1_ParamLimits

0x8bc3,	// (0x00027d5e) popup_snote2_single_graphic_window_t1

0x8c0f,	// (0x00027daa) popup_snote2_single_graphic_window_t2_ParamLimits

0x8c0f,	// (0x00027daa) popup_snote2_single_graphic_window_t2

0x8ad1,	// (0x00027c6c) popup_snote2_single_graphic_window_t3_ParamLimits

0x8ad1,	// (0x00027c6c) popup_snote2_single_graphic_window_t3

0x8b12,	// (0x00027cad) popup_snote2_single_graphic_window_t4_ParamLimits

0x8b12,	// (0x00027cad) popup_snote2_single_graphic_window_t4

0x8b48,	// (0x00027ce3) popup_snote2_single_graphic_window_t5_ParamLimits

0x8b48,	// (0x00027ce3) popup_snote2_single_graphic_window_t5

0x0004,

0xfc80,	// (0x0002ee1b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc80,	// (0x0002ee1b) popup_snote2_single_graphic_window_t

0x764e,	// (0x000267e9) clock_nsta_pane_cp2_t1

0x764e,	// (0x000267e9) clock_nsta_pane_cp2_t2

0x0001,

0xfaa0,	// (0x0002ec3b) clock_nsta_pane_cp2_t

0x07cc,	// (0x0001f967) form_field_data_wide_pane_g1_ParamLimits

0x40c1,	// (0x0002325c) form_field_data_wide_pane_g2_ParamLimits

0x40c1,	// (0x0002325c) form_field_data_wide_pane_g2

0x40cd,	// (0x00023268) form_field_data_wide_pane_g3_ParamLimits

0x40cd,	// (0x00023268) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0002e816) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0002e816) form_field_data_wide_pane_g

0xe0de,	// (0x0002d279) grid_touch_3_pane_ParamLimits

0xe0de,	// (0x0002d279) grid_touch_3_pane

0xe5aa,	// (0x0002d745) cell_touch_3_pane_ParamLimits

0xe5aa,	// (0x0002d745) cell_touch_3_pane

0x7b9c,	// (0x00026d37) cell_touch_3_pane_g1

0x7b9c,	// (0x00026d37) cell_touch_3_pane_g2

0x0001,

0xfb25,	// (0x0002ecc0) cell_touch_3_pane_g

0x3b83,	// (0x00022d1e) cont_query_data_pane

0x3b8b,	// (0x00022d26) cont_query_data_pane_cp1

0x8c89,	// (0x00027e24) button_value_adjust_pane_cp7

0x8c91,	// (0x00027e2c) query_popup_pane_cp3

0x4825,	// (0x000239c0) bg_popup_sub_pane_cp22_ParamLimits

0x1a6c,	// (0x00020c07) navi_navi_volume_pane_cp2

0x1a87,	// (0x00020c22) popup_side_volume_key_window_g2

0x1a96,	// (0x00020c31) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0002e8ac) popup_side_volume_key_window_g

0x1ab3,	// (0x00020c4e) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0002e8b3) popup_side_volume_key_window_t

0x4adc,	// (0x00023c77) popup_side_volume_key_window_ParamLimits

0xb8c8,	// (0x0002aa63) list_double_graphic_pane_g4_ParamLimits

0xb8c8,	// (0x0002aa63) list_double_graphic_pane_g4

0xdf3f,	// (0x0002d0da) list_single_2heading_msg_pane_ParamLimits

0xdf3f,	// (0x0002d0da) list_single_2heading_msg_pane

0xbe4b,	// (0x0002afe6) list_single_2heading_msg_pane_g1_ParamLimits

0xbe4b,	// (0x0002afe6) list_single_2heading_msg_pane_g1

0xbe57,	// (0x0002aff2) list_single_2heading_msg_pane_g2_ParamLimits

0xbe57,	// (0x0002aff2) list_single_2heading_msg_pane_g2

0xbe6a,	// (0x0002b005) list_single_2heading_msg_pane_g3_ParamLimits

0xbe6a,	// (0x0002b005) list_single_2heading_msg_pane_g3

0xbe76,	// (0x0002b011) list_single_2heading_msg_pane_g4_ParamLimits

0xbe76,	// (0x0002b011) list_single_2heading_msg_pane_g4

0x0003,

0xfc8b,	// (0x0002ee26) list_single_2heading_msg_pane_g_ParamLimits

0xfc8b,	// (0x0002ee26) list_single_2heading_msg_pane_g

0xbe8e,	// (0x0002b029) list_single_2heading_msg_pane_t1_ParamLimits

0xbe8e,	// (0x0002b029) list_single_2heading_msg_pane_t1

0xbeb6,	// (0x0002b051) list_single_2heading_msg_pane_t2_ParamLimits

0xbeb6,	// (0x0002b051) list_single_2heading_msg_pane_t2

0xbf21,	// (0x0002b0bc) list_single_2heading_msg_pane_t3_ParamLimits

0xbf21,	// (0x0002b0bc) list_single_2heading_msg_pane_t3

0x1324,	// (0x000204bf) list_single_2heading_msg_pane_t4_ParamLimits

0x1324,	// (0x000204bf) list_single_2heading_msg_pane_t4

0x0003,

0xfc94,	// (0x0002ee2f) list_single_2heading_msg_pane_t_ParamLimits

0xfc94,	// (0x0002ee2f) list_single_2heading_msg_pane_t

0x3772,	// (0x0002290d) title_pane_g4_ParamLimits

0x3772,	// (0x0002290d) title_pane_g4

0x187b,	// (0x00020a16) title_pane_stacon_g3_ParamLimits

0x187b,	// (0x00020a16) title_pane_stacon_g3

0x87b7,	// (0x00027952) list_single_2graphic_im_pane_g4_ParamLimits

0x87b7,	// (0x00027952) list_single_2graphic_im_pane_g4

0x6682,	// (0x0002581d) popup_side_volume_key_window_cp

0x6e92,	// (0x0002602d) main_idle_act2_pane_t1

0x23f6,	// (0x00021591) toolbar_button_pane_g10

0xd3e6,	// (0x0002c581) popup_toolbar_window_cp1

0x763f,	// (0x000267da) clock_nsta_pane_cp_t1

0x763f,	// (0x000267da) clock_nsta_pane_cp_t2

0x0001,

0xfa9b,	// (0x0002ec36) clock_nsta_pane_cp_t

0x1a6c,	// (0x00020c07) navi_navi_volume_pane_cp2_ParamLimits

0x1a7b,	// (0x00020c16) popup_side_volume_key_window_g1_ParamLimits

0x1a87,	// (0x00020c22) popup_side_volume_key_window_g2_ParamLimits

0x1a96,	// (0x00020c31) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0002e8ac) popup_side_volume_key_window_g_ParamLimits

0x283c,	// (0x000219d7) fep_hwr_aid_pane

0xda3c,	// (0x0002cbd7) bg_fep_hwr_top_pane_g4_ParamLimits

0x7bf8,	// (0x00026d93) fep_hwr_top_pane_g1_ParamLimits

0x7c0a,	// (0x00026da5) fep_hwr_top_pane_g2_ParamLimits

0x28f5,	// (0x00021a90) fep_hwr_top_pane_g3_ParamLimits

0xfaf0,	// (0x0002ec8b) fep_hwr_top_pane_g_ParamLimits

0x290a,	// (0x00021aa5) fep_hwr_top_text_pane_ParamLimits

0x6445,	// (0x000255e0) aid_touch_tab_arrow_arrow_2

0x644e,	// (0x000255e9) aid_touch_tab_arrow_left_2

0x2850,	// (0x000219eb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2887,	// (0x00021a22) fep_hwr_prediction_pane

0x7d6a,	// (0x00026f05) fep_vkb_prediction_pane

0xe390,	// (0x0002d52b) fep_vkb_side_pane_g3_ParamLimits

0xe390,	// (0x0002d52b) fep_vkb_side_pane_g3

0x7e1a,	// (0x00026fb5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x829a,	// (0x00027435) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x82a7,	// (0x00027442) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb9a,	// (0x0002ed35) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8cb6,	// (0x00027e51) fep_hwr_prediction_pane_g1

0x2b97,	// (0x00021d32) fep_hwr_prediction_pane_g2

0x2b9f,	// (0x00021d3a) fep_hwr_prediction_pane_g3

0x2ba7,	// (0x00021d42) fep_hwr_prediction_pane_g4

0x0003,

0xfc9d,	// (0x0002ee38) fep_hwr_prediction_pane_g

0x8cb6,	// (0x00027e51) fep_vkb_prediction_pane_g1

0x8cc0,	// (0x00027e5b) fep_vkb_prediction_pane_g2

0x8cc8,	// (0x00027e63) fep_vkb_prediction_pane_g3

0x8cd0,	// (0x00027e6b) fep_vkb_prediction_pane_g4

0x0003,

0xfca6,	// (0x0002ee41) fep_vkb_prediction_pane_g

0x26bc,	// (0x00021857) slider_set_pane_g3

0x26d0,	// (0x0002186b) slider_set_pane_g4

0x26e8,	// (0x00021883) slider_set_pane_g5

0x26bc,	// (0x00021857) slider_set_pane_g6

0x26fe,	// (0x00021899) slider_set_pane_g7

0x6ad7,	// (0x00025c72) slider_form_pane_g3

0x6ae0,	// (0x00025c7b) slider_form_pane_g4

0x6ae8,	// (0x00025c83) slider_form_pane_g5

0x6ad7,	// (0x00025c72) slider_form_pane_g6

0xdf11,	// (0x0002d0ac) slider_form_pane_g7

0x713c,	// (0x000262d7) slider_set_pane_vc_g3

0x7145,	// (0x000262e0) slider_set_pane_vc_g4

0x714e,	// (0x000262e9) slider_set_pane_vc_g5

0x713c,	// (0x000262d7) slider_set_pane_vc_g6

0x7157,	// (0x000262f2) slider_set_pane_vc_g7

0x7317,	// (0x000264b2) slider_form_pane_vc_g1

0x7320,	// (0x000264bb) slider_form_pane_vc_g2

0x7329,	// (0x000264c4) slider_form_pane_vc_g3

0x7317,	// (0x000264b2) slider_form_pane_vc_g4

0x7332,	// (0x000264cd) slider_form_pane_vc_g5

0x0004,

0xfa6d,	// (0x0002ec08) slider_form_pane_vc_g

0x372a,	// (0x000228c5) main_idle_act3_pane

0x8cd8,	// (0x00027e73) ai3_links_pane

0xe5f2,	// (0x0002d78d) popup_ai3_data_window_ParamLimits

0xe5f2,	// (0x0002d78d) popup_ai3_data_window

0x372a,	// (0x000228c5) grid_ai3_links_pane

0xe60c,	// (0x0002d7a7) cell_ai3_links_pane_ParamLimits

0xe60c,	// (0x0002d7a7) cell_ai3_links_pane

0x8d13,	// (0x00027eae) bg_popup_sub_pane_cp11

0x8d20,	// (0x00027ebb) cell_ai3_links_pane_g1

0x372a,	// (0x000228c5) bg_popup_sub_pane_cp12

0x8d45,	// (0x00027ee0) heading_ai3_data_pane

0x8d4d,	// (0x00027ee8) list_ai3_gene_pane

0x8d59,	// (0x00027ef4) popup_ai3_data_window_g1

0x8d61,	// (0x00027efc) heading_ai3_data_pane_g1

0x8d69,	// (0x00027f04) heading_ai3_data_pane_t1

0x8d77,	// (0x00027f12) list_double_ai3_gene_pane_ParamLimits

0x8d77,	// (0x00027f12) list_double_ai3_gene_pane

0x8d84,	// (0x00027f1f) list_single_ai3_gene_pane_ParamLimits

0x8d84,	// (0x00027f1f) list_single_ai3_gene_pane

0x7b61,	// (0x00026cfc) list_highlight_pane_cp7_ParamLimits

0x7b61,	// (0x00026cfc) list_highlight_pane_cp7

0x8d91,	// (0x00027f2c) list_single_a13_gene_pane_t1_ParamLimits

0x8d91,	// (0x00027f2c) list_single_a13_gene_pane_t1

0x8da8,	// (0x00027f43) list_single_ai3_gene_pane_g1

0x8db1,	// (0x00027f4c) list_single_ai3_gene_pane_g2

0x0001,

0xfcaf,	// (0x0002ee4a) list_single_ai3_gene_pane_g

0x8db9,	// (0x00027f54) list_double_ai3_gene_pane_g1_ParamLimits

0x8db9,	// (0x00027f54) list_double_ai3_gene_pane_g1

0x8dc5,	// (0x00027f60) list_double_ai3_gene_pane_t1_ParamLimits

0x8dc5,	// (0x00027f60) list_double_ai3_gene_pane_t1

0x8de1,	// (0x00027f7c) list_double_ai3_gene_pane_t2_ParamLimits

0x8de1,	// (0x00027f7c) list_double_ai3_gene_pane_t2

0x8df7,	// (0x00027f92) list_double_ai3_gene_pane_t3_ParamLimits

0x8df7,	// (0x00027f92) list_double_ai3_gene_pane_t3

0x0002,

0xfcb4,	// (0x0002ee4f) list_double_ai3_gene_pane_t_ParamLimits

0xfcb4,	// (0x0002ee4f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1255,	// (0x000203f0) aid_size_min_col_2

0xe5dc,	// (0x0002d777) aid_size_min_msg_ParamLimits

0xe5dc,	// (0x0002d777) aid_size_min_msg

0xe3a4,	// (0x0002d53f) fep_vkb_top_text_pane_g2_ParamLimits

0xe3a4,	// (0x0002d53f) fep_vkb_top_text_pane_g2

0x0001,

0xfb20,	// (0x0002ecbb) fep_vkb_top_text_pane_g_ParamLimits

0xfb20,	// (0x0002ecbb) fep_vkb_top_text_pane_g

0x372a,	// (0x000228c5) main_hc_apps_shell_pane

0x8e14,	// (0x00027faf) grid_hc_apps_pane_ParamLimits

0x8e14,	// (0x00027faf) grid_hc_apps_pane

0x8e23,	// (0x00027fbe) list_hc_apps_pane

0x8e2b,	// (0x00027fc6) scroll_pane_cp37_ParamLimits

0x8e2b,	// (0x00027fc6) scroll_pane_cp37

0xe626,	// (0x0002d7c1) cell_hc_apps_pane_ParamLimits

0xe626,	// (0x0002d7c1) cell_hc_apps_pane

0xe6e4,	// (0x0002d87f) cell_hc_apps_pane_g1_ParamLimits

0xe6e4,	// (0x0002d87f) cell_hc_apps_pane_g1

0x8f16,	// (0x000280b1) cell_hc_apps_pane_g2_ParamLimits

0x8f16,	// (0x000280b1) cell_hc_apps_pane_g2

0x8f32,	// (0x000280cd) cell_hc_apps_pane_g3_ParamLimits

0x8f32,	// (0x000280cd) cell_hc_apps_pane_g3

0x0002,

0xfcbb,	// (0x0002ee56) cell_hc_apps_pane_g_ParamLimits

0xfcbb,	// (0x0002ee56) cell_hc_apps_pane_g

0xe711,	// (0x0002d8ac) cell_hc_apps_pane_t1_ParamLimits

0xe711,	// (0x0002d8ac) cell_hc_apps_pane_t1

0x3aa7,	// (0x00022c42) grid_highlight_pane_cp10_ParamLimits

0x3aa7,	// (0x00022c42) grid_highlight_pane_cp10

0xe74f,	// (0x0002d8ea) list_single_hc_apps_pane_ParamLimits

0xe74f,	// (0x0002d8ea) list_single_hc_apps_pane

0xe77c,	// (0x0002d917) list_single_hc_apps_pane_g1

0xbf8f,	// (0x0002b12a) list_single_hc_apps_pane_g2

0x0001,

0xfcc2,	// (0x0002ee5d) list_single_hc_apps_pane_g

0xbfa8,	// (0x0002b143) list_single_hc_apps_pane_g2_copy1

0xbfc4,	// (0x0002b15f) list_single_hc_apps_pane_t1

0x381e,	// (0x000229b9) bg_set_opt_pane_cp_ParamLimits

0x17a3,	// (0x0002093e) setting_slider_pane_t1_ParamLimits

0x17bc,	// (0x00020957) setting_slider_pane_t2_ParamLimits

0x17d6,	// (0x00020971) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0002e6f9) setting_slider_pane_t_ParamLimits

0x17ee,	// (0x00020989) slider_set_pane_ParamLimits

0x1d15,	// (0x00020eb0) control_pane_g5_ParamLimits

0x1d15,	// (0x00020eb0) control_pane_g5

0x6926,	// (0x00025ac1) slider_set_pane_g1_ParamLimits

0x26b0,	// (0x0002184b) slider_set_pane_g2_ParamLimits

0x26bc,	// (0x00021857) slider_set_pane_g3_ParamLimits

0x26d0,	// (0x0002186b) slider_set_pane_g4_ParamLimits

0x26e8,	// (0x00021883) slider_set_pane_g5_ParamLimits

0x26bc,	// (0x00021857) slider_set_pane_g6_ParamLimits

0x26fe,	// (0x00021899) slider_set_pane_g7_ParamLimits

0xf958,	// (0x0002eaf3) slider_set_pane_g_ParamLimits

0x4bc8,	// (0x00023d63) navi_icon_text_pane_ParamLimits

0xd77b,	// (0x0002c916) aid_fill_nsta_2_ParamLimits

0xd7b2,	// (0x0002c94d) aid_touch_tab_arrow_left_ParamLimits

0xd7c8,	// (0x0002c963) aid_touch_tab_arrow_right_ParamLimits

0xd863,	// (0x0002c9fe) clock_nsta_pane_ParamLimits

0x6427,	// (0x000255c2) navi_icon_pane_g1_ParamLimits

0x6433,	// (0x000255ce) navi_text_pane_t1_ParamLimits

0x774b,	// (0x000268e6) navi_icon_text_pane_g1_ParamLimits

0x7757,	// (0x000268f2) navi_icon_text_pane_t1_ParamLimits

0xe77c,	// (0x0002d917) list_single_hc_apps_pane_g1_ParamLimits

0xbf8f,	// (0x0002b12a) list_single_hc_apps_pane_g2_ParamLimits

0xfcc2,	// (0x0002ee5d) list_single_hc_apps_pane_g_ParamLimits

0xbfa8,	// (0x0002b143) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbfc4,	// (0x0002b15f) list_single_hc_apps_pane_t1_ParamLimits

0xc128,	// (0x0002b2c3) popup_toolbar2_fixed_window_ParamLimits

0xc128,	// (0x0002b2c3) popup_toolbar2_fixed_window

0xc9c1,	// (0x0002bb5c) popup_toolbar2_float_window

0x372a,	// (0x000228c5) bg_popup_sub_pane_cp27

0x9009,	// (0x000281a4) grid_toolbar2_float_pane

0x372a,	// (0x000228c5) bg_popup_sub_pane_cp26

0x9009,	// (0x000281a4) grid_toolbar2_fixed_pane

0xe795,	// (0x0002d930) cell_toolbar2_fixed_pane_ParamLimits

0xe795,	// (0x0002d930) cell_toolbar2_fixed_pane

0xe7af,	// (0x0002d94a) cell_toolbar2_fixed_pane_g1

0x902a,	// (0x000281c5) toolbar2_fixed_button_pane

0x5590,	// (0x0002472b) toolbar2_fixed_button_pane_g1

0x5598,	// (0x00024733) toolbar2_fixed_button_pane_g2

0x55a0,	// (0x0002473b) toolbar2_fixed_button_pane_g3

0x55a8,	// (0x00024743) toolbar2_fixed_button_pane_g4

0x55b0,	// (0x0002474b) toolbar2_fixed_button_pane_g5

0x55b8,	// (0x00024753) toolbar2_fixed_button_pane_g6

0x55c0,	// (0x0002475b) toolbar2_fixed_button_pane_g7

0x55c8,	// (0x00024763) toolbar2_fixed_button_pane_g8

0x55d0,	// (0x0002476b) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x0002e9f5) toolbar2_fixed_button_pane_g

0x9032,	// (0x000281cd) cell_toolbar2_float_pane_ParamLimits

0x9032,	// (0x000281cd) cell_toolbar2_float_pane

0x9043,	// (0x000281de) cell_toolbar2_float_pane_g1

0x902a,	// (0x000281c5) toolbar2_fixed_button_pane_cp

0xe27e,	// (0x0002d419) fep_vkb_accented_list_pane_ParamLimits

0xe27e,	// (0x0002d419) fep_vkb_accented_list_pane

0x2a58,	// (0x00021bf3) bg_popup_fep_shadow_pane_g9

0x4d48,	// (0x00023ee3) bg_popup_fep_shadow_pane_cp3

0x4207,	// (0x000233a2) list_accented_list_pane

0x904c,	// (0x000281e7) list_single_accented_list_pane_ParamLimits

0x904c,	// (0x000281e7) list_single_accented_list_pane

0x4d48,	// (0x00023ee3) list_highlight_pane_cp10

0x905d,	// (0x000281f8) list_single_accented_list_pane_t1

0xc8eb,	// (0x0002ba86) popup_slider_window_ParamLimits

0xc8eb,	// (0x0002ba86) popup_slider_window

0x8c99,	// (0x00027e34) aid_indentation_list_msg

0xe8a6,	// (0x0002da41) bg_popup_window_pane_cp19

0x9189,	// (0x00028324) popup_slider_window_g1

0x91a5,	// (0x00028340) popup_slider_window_g2

0x91c1,	// (0x0002835c) popup_slider_window_g3

0x0005,

0xfcc7,	// (0x0002ee62) popup_slider_window_g

0x9227,	// (0x000283c2) popup_slider_window_t1

0x929b,	// (0x00028436) small_volume_slider_vertical_pane

0x7b9c,	// (0x00026d37) small_volume_slider_vertical_pane_g1

0x7b9c,	// (0x00026d37) small_volume_slider_vertical_pane_g2

0x92b7,	// (0x00028452) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd9,	// (0x0002ee74) small_volume_slider_vertical_pane_g

0xc096,	// (0x0002b231) area_side_right_pane_ParamLimits

0xc096,	// (0x0002b231) area_side_right_pane

0xcaf7,	// (0x0002bc92) aid_size_side_button_ParamLimits

0xcaf7,	// (0x0002bc92) aid_size_side_button

0xcb10,	// (0x0002bcab) grid_sctrl_middle_pane_ParamLimits

0xcb10,	// (0x0002bcab) grid_sctrl_middle_pane

0x2be2,	// (0x00021d7d) sctrl_sk_bottom_pane

0x2bf3,	// (0x00021d8e) sctrl_sk_top_pane

0x2c05,	// (0x00021da0) aid_touch_sctrl_top

0x3aa7,	// (0x00022c42) bg_sctrl_sk_pane_ParamLimits

0x3aa7,	// (0x00022c42) bg_sctrl_sk_pane

0x2c12,	// (0x00021dad) sctrl_sk_top_pane_g1

0x2c1f,	// (0x00021dba) sctrl_sk_top_pane_t1

0x2c05,	// (0x00021da0) aid_touch_sctrl_bottom

0x3aa7,	// (0x00022c42) bg_sctrl_sk_pane_cp_ParamLimits

0x3aa7,	// (0x00022c42) bg_sctrl_sk_pane_cp

0x2c3a,	// (0x00021dd5) sctrl_sk_bottom_pane_g1

0x2c1f,	// (0x00021dba) sctrl_sk_bottom_pane_t1

0xcb2a,	// (0x0002bcc5) cell_sctrl_middle_pane_ParamLimits

0xcb2a,	// (0x0002bcc5) cell_sctrl_middle_pane

0xcb3b,	// (0x0002bcd6) aid_touch_sctrl_middle_ParamLimits

0xcb3b,	// (0x0002bcd6) aid_touch_sctrl_middle

0xcb48,	// (0x0002bce3) bg_sctrl_middle_pane_ParamLimits

0xcb48,	// (0x0002bce3) bg_sctrl_middle_pane

0x933f,	// (0x000284da) cell_sctrl_middle_pane_g1_ParamLimits

0x933f,	// (0x000284da) cell_sctrl_middle_pane_g1

0xcb56,	// (0x0002bcf1) cell_sctrl_middle_pane_g2_ParamLimits

0xcb56,	// (0x0002bcf1) cell_sctrl_middle_pane_g2

0x0001,

0xfce5,	// (0x0002ee80) cell_sctrl_middle_pane_g_ParamLimits

0xfce5,	// (0x0002ee80) cell_sctrl_middle_pane_g

0x5590,	// (0x0002472b) bg_sctrl_middle_pane_g1

0x5598,	// (0x00024733) bg_sctrl_middle_pane_g2

0x55a0,	// (0x0002473b) bg_sctrl_middle_pane_g3

0x55a8,	// (0x00024743) bg_sctrl_middle_pane_g4

0x55b0,	// (0x0002474b) bg_sctrl_middle_pane_g5

0x55b8,	// (0x00024753) bg_sctrl_middle_pane_g6

0x55c0,	// (0x0002475b) bg_sctrl_middle_pane_g7

0x55c8,	// (0x00024763) bg_sctrl_middle_pane_g8

0x0007,

0xfcea,	// (0x0002ee85) bg_sctrl_middle_pane_g

0x55d0,	// (0x0002476b) bg_sctrl_middle_pane_g8_copy1

0x5590,	// (0x0002472b) bg_sctrl_sk_pane_g1

0x5598,	// (0x00024733) bg_sctrl_sk_pane_g2

0x55a0,	// (0x0002473b) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x0002e9f5) bg_sctrl_sk_pane_g

0x3fe2,	// (0x0002317d) aid_size_touch_scroll_bar

0x55a8,	// (0x00024743) bg_sctrl_sk_pane_g4

0x55b0,	// (0x0002474b) bg_sctrl_sk_pane_g5

0x55b8,	// (0x00024753) bg_sctrl_sk_pane_g6

0x55c0,	// (0x0002475b) bg_sctrl_sk_pane_g7

0x55c8,	// (0x00024763) bg_sctrl_sk_pane_g8

0x55d0,	// (0x0002476b) bg_sctrl_sk_pane_g9

0x1eb3,	// (0x0002104e) popup_fep_china_hwr2_fs_candidate_window

0xc405,	// (0x0002b5a0) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc405,	// (0x0002b5a0) popup_fep_china_hwr2_fs_control_window

0x7e1a,	// (0x00026fb5) sctrl_sk_top_pane_g2

0x0001,

0xfce0,	// (0x0002ee7b) sctrl_sk_top_pane_g

0xe95e,	// (0x0002daf9) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe95e,	// (0x0002daf9) aid_fep_china_hwr2_fs_cell

0xe972,	// (0x0002db0d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe972,	// (0x0002db0d) bg_popup_fep_shadow_pane_cp4

0xe989,	// (0x0002db24) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe989,	// (0x0002db24) bg_popup_fep_shadow_pane_cp5

0xe99b,	// (0x0002db36) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe99b,	// (0x0002db36) popup_fep_china_hwr2_fs_control_bar_grid

0xe9af,	// (0x0002db4a) popup_fep_china_hwr2_fs_control_funtion_grid

0x9313,	// (0x000284ae) aid_fep_china_hwr2_fs_candi_cell

0x372a,	// (0x000228c5) bg_popup_fep_shadow_pane_cp6

0x931d,	// (0x000284b8) popup_fep_china_hwr2_fs_candidate_grid

0xe9b7,	// (0x0002db52) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe9b7,	// (0x0002db52) cell_fep_china_hwr2_fs_funtion_grid

0x7b9c,	// (0x00026d37) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x933f,	// (0x000284da) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x933f,	// (0x000284da) cell_fep_china_hwr2_fs_funtion_grid_g1

0x934d,	// (0x000284e8) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x934d,	// (0x000284e8) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfb,	// (0x0002ee96) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfb,	// (0x0002ee96) cell_fep_china_hwr2_fs_funtion_grid_g

0xe9cf,	// (0x0002db6a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe9cf,	// (0x0002db6a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe9e4,	// (0x0002db7f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe9e4,	// (0x0002db7f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0x0046,	// (0x0001f1e1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0x0046,	// (0x0001f1e1) cell_fep_china_hwr2_fs_funtion_grid_t

0x9394,	// (0x0002852f) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x939c,	// (0x00028537) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x93a4,	// (0x0002853f) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd00,	// (0x0002ee9b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x93ac,	// (0x00028547) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x93ac,	// (0x00028547) cell_fep_china_hwr2_fs_candidate_grid

0x93c5,	// (0x00028560) popup_fep_china_hwr2_fs_candidate_grid_g20

0x93cd,	// (0x00028568) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7b9c,	// (0x00026d37) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7b9c,	// (0x00026d37) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb25,	// (0x0002ecc0) cell_fep_china_hwr2_fs_candidate_grid_g

0x93d5,	// (0x00028570) cell_fep_china_hwr2_fs_candidate_grid_t1

0x5186,	// (0x00024321) clock_nsta_pane_cp_24_ParamLimits

0x5186,	// (0x00024321) clock_nsta_pane_cp_24

0x5204,	// (0x0002439f) indicator_nsta_pane_cp_24_ParamLimits

0x5204,	// (0x0002439f) indicator_nsta_pane_cp_24

0x62a3,	// (0x0002543e) heading_pane_g1

0x0001,

0xf8bf,	// (0x0002ea5a) heading_pane_g

0x6cdb,	// (0x00025e76) grid_sct_catagory_button_pane

0x6d0b,	// (0x00025ea6) scroll_pane_cp5_ParamLimits

0x7799,	// (0x00026934) button_value_adjust_pane_cp5_ParamLimits

0x7799,	// (0x00026934) button_value_adjust_pane_cp5

0x7878,	// (0x00026a13) form2_midp_time_pane_ParamLimits

0x93e3,	// (0x0002857e) cell_sct_catagory_button_pane_ParamLimits

0x93e3,	// (0x0002857e) cell_sct_catagory_button_pane

0x7b61,	// (0x00026cfc) bg_button_pane_cp01_ParamLimits

0x7b61,	// (0x00026cfc) bg_button_pane_cp01

0x7b9c,	// (0x00026d37) cell_sct_catagory_button_pane_g1

0xc964,	// (0x0002baff) popup_tb_extension_window

0xea00,	// (0x0002db9b) aid_size_cell_ext_ParamLimits

0xea00,	// (0x0002db9b) aid_size_cell_ext

0x3e24,	// (0x00022fbf) bg_tb_trans_pane_cp1_ParamLimits

0x3e24,	// (0x00022fbf) bg_tb_trans_pane_cp1

0xea26,	// (0x0002dbc1) grid_tb_ext_pane_ParamLimits

0xea26,	// (0x0002dbc1) grid_tb_ext_pane

0xea61,	// (0x0002dbfc) cell_tb_ext_pane_ParamLimits

0xea61,	// (0x0002dbfc) cell_tb_ext_pane

0xea89,	// (0x0002dc24) cell_tb_ext_pane_g1_ParamLimits

0xea89,	// (0x0002dc24) cell_tb_ext_pane_g1

0x9477,	// (0x00028612) cell_tb_ext_pane_t1

0x3aa7,	// (0x00022c42) list_highlight_pane_cp11_ParamLimits

0x3aa7,	// (0x00022c42) list_highlight_pane_cp11

0xc13d,	// (0x0002b2d8) popup_uni_indicator_window_ParamLimits

0xc13d,	// (0x0002b2d8) popup_uni_indicator_window

0x40b3,	// (0x0002324e) bg_popup_sub_pane_cp14

0x9492,	// (0x0002862d) list_uniindi_pane

0x949e,	// (0x00028639) uniindi_top_pane

0x3aa7,	// (0x00022c42) bg_uniindi_top_pane

0x94bd,	// (0x00028658) uniindi_top_pane_g1

0x94d3,	// (0x0002866e) uniindi_top_pane_g2

0x0003,

0xfd07,	// (0x0002eea2) uniindi_top_pane_g

0x94fd,	// (0x00028698) uniindi_top_pane_t1

0x9527,	// (0x000286c2) list_single_uniindi_pane_ParamLimits

0x9527,	// (0x000286c2) list_single_uniindi_pane

0x7b9c,	// (0x00026d37) bg_uniindi_top_pane_g1

0x953a,	// (0x000286d5) list_single_uniindi_pane_g1

0x954d,	// (0x000286e8) list_single_uniindi_pane_t1

0x372a,	// (0x000228c5) control_bg_pane

0x9572,	// (0x0002870d) bg_sctrl_sk_pane_cp1

0x957b,	// (0x00028716) bg_sctrl_sk_pane_cp2

0x9584,	// (0x0002871f) control_bg_pane_g1

0x958d,	// (0x00028728) control_bg_pane_g2

0x0001,

0xfd10,	// (0x0002eeab) control_bg_pane_g

0x75f3,	// (0x0002678e) cell_indicator_nsta_pane_g1_ParamLimits

0xe10b,	// (0x0002d2a6) cell_indicator_nsta_pane_g2_ParamLimits

0xfa89,	// (0x0002ec24) cell_indicator_nsta_pane_g_ParamLimits

0x1006,	// (0x000201a1) form2_midp_time_pane_t1_ParamLimits

0x282e,	// (0x000219c9) main_idle_act4_pane_ParamLimits

0x282e,	// (0x000219c9) main_idle_act4_pane

0xc964,	// (0x0002baff) popup_tb_extension_window_ParamLimits

0xea48,	// (0x0002dbe3) tb_ext_find_pane_ParamLimits

0xea48,	// (0x0002dbe3) tb_ext_find_pane

0x9596,	// (0x00028731) ai_gene_pane_1_cp1

0x4e8f,	// (0x0002402a) ai_gene_pane_2_cp1

0x959e,	// (0x00028739) list_single_idle_plugin_calendar_pane

0x95a7,	// (0x00028742) list_single_idle_plugin_notification_pane

0x95b0,	// (0x0002874b) list_single_idle_plugin_player_pane

0xeaa6,	// (0x0002dc41) list_single_idle_plugin_shortcut_pane_ParamLimits

0xeaa6,	// (0x0002dc41) list_single_idle_plugin_shortcut_pane

0xeace,	// (0x0002dc69) main_idle_act4_pane_t1

0xeae4,	// (0x0002dc7f) main_idle_act4_pane_t2

0x0001,

0x0060,	// (0x0001f1fb) main_idle_act4_pane_t

0xeafa,	// (0x0002dc95) middle_sk_idle_act4_pane_ParamLimits

0xeafa,	// (0x0002dc95) middle_sk_idle_act4_pane

0xeb16,	// (0x0002dcb1) popup_clock_digital_analogue_window_cp2

0xeb3e,	// (0x0002dcd9) shortcut_wheel_idle_act4_pane_ParamLimits

0xeb3e,	// (0x0002dcd9) shortcut_wheel_idle_act4_pane

0x7b9c,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g1

0x7b9c,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g2

0x7b9c,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g3

0x7b9c,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g4

0x7b9c,	// (0x00026d37) shortcut_wheel_idle_act4_pane_g5

0x9643,	// (0x000287de) shortcut_wheel_idle_act4_pane_g6

0x964b,	// (0x000287e6) shortcut_wheel_idle_act4_pane_g7

0x9653,	// (0x000287ee) shortcut_wheel_idle_act4_pane_g8

0x965b,	// (0x000287f6) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd15,	// (0x0002eeb0) shortcut_wheel_idle_act4_pane_g

0xda3c,	// (0x0002cbd7) middle_sk_idle_act4_pane_g1_ParamLimits

0xda3c,	// (0x0002cbd7) middle_sk_idle_act4_pane_g1

0xebbb,	// (0x0002dd56) middle_sk_idle_act4_pane_g2_ParamLimits

0xebbb,	// (0x0002dd56) middle_sk_idle_act4_pane_g2

0x0001,

0xfd33,	// (0x0002eece) middle_sk_idle_act4_pane_g_ParamLimits

0xfd33,	// (0x0002eece) middle_sk_idle_act4_pane_g

0xebd3,	// (0x0002dd6e) middle_sk_idle_act4_pane_t1_ParamLimits

0xebd3,	// (0x0002dd6e) middle_sk_idle_act4_pane_t1

0xec02,	// (0x0002dd9d) grid_ai_shortcut_pane_ParamLimits

0xec02,	// (0x0002dd9d) grid_ai_shortcut_pane

0xec1f,	// (0x0002ddba) list_highlight_pane_cp16_ParamLimits

0xec1f,	// (0x0002ddba) list_highlight_pane_cp16

0xec2c,	// (0x0002ddc7) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xec2c,	// (0x0002ddc7) list_single_idle_plugin_shortcut_pane_g1

0xec38,	// (0x0002ddd3) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xec38,	// (0x0002ddd3) list_single_idle_plugin_shortcut_pane_g2

0xec54,	// (0x0002ddef) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xec54,	// (0x0002ddef) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x008d,	// (0x0001f228) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x008d,	// (0x0001f228) list_single_idle_plugin_shortcut_pane_g

0xec69,	// (0x0002de04) cell_ai_shortcut_pane_ParamLimits

0xec69,	// (0x0002de04) cell_ai_shortcut_pane

0xec7f,	// (0x0002de1a) cell_ai_shortcut_pane_g1_ParamLimits

0xec7f,	// (0x0002de1a) cell_ai_shortcut_pane_g1

0x9596,	// (0x00028731) ai_gene_pane_1_cp2

0x978b,	// (0x00028926) ai_gene_pane_2_cp2

0x9793,	// (0x0002892e) list_highlight_pane_cp15

0x979c,	// (0x00028937) list_single_idle_plugin_calendar_pane_g1

0x9793,	// (0x0002892e) list_highlight_pane_cp17

0x97a4,	// (0x0002893f) list_single_idle_plugin_calendar_pane_g1_copy1

0x97ac,	// (0x00028947) list_single_idle_plugin_player_pane_g1

0x6f34,	// (0x000260cf) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd38,	// (0x0002eed3) list_single_idle_plugin_player_pane_g

0x97b4,	// (0x0002894f) list_single_idle_plugin_player_pane_t1

0x97c2,	// (0x0002895d) list_single_idle_plugin_player_pane_t2

0x97d0,	// (0x0002896b) list_single_idle_plugin_player_pane_t3

0x97de,	// (0x00028979) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd3d,	// (0x0002eed8) list_single_idle_plugin_player_pane_t

0x97ec,	// (0x00028987) wait_bar_pane_cp15

0x97f4,	// (0x0002898f) grid_ai_notification_pane

0x6f34,	// (0x000260cf) list_single_idle_plugin_notification_pane_g1

0xeca1,	// (0x0002de3c) cell_ai_notification_pane_ParamLimits

0xeca1,	// (0x0002de3c) cell_ai_notification_pane

0x980a,	// (0x000289a5) cell_ai_notification_pane_g1

0x9812,	// (0x000289ad) cell_ai_notification_pane_t1

0xecae,	// (0x0002de49) tb_ext_find_button_pane

0xecb6,	// (0x0002de51) tb_ext_find_pane_g1

0xecbe,	// (0x0002de59) tb_ext_find_pane_t1

0x4735,	// (0x000238d0) tb_ext_find_button_pane_g1

0x983e,	// (0x000289d9) tb_ext_find_button_pane_g2

0x0001,

0xfd46,	// (0x0002eee1) tb_ext_find_button_pane_g

0xeace,	// (0x0002dc69) main_idle_act4_pane_t1_ParamLimits

0xeae4,	// (0x0002dc7f) main_idle_act4_pane_t2_ParamLimits

0x0060,	// (0x0001f1fb) main_idle_act4_pane_t_ParamLimits

0xeb16,	// (0x0002dcb1) popup_clock_digital_analogue_window_cp2_ParamLimits

0xeb2e,	// (0x0002dcc9) sat_plugin_idle_act4_pane_ParamLimits

0xeb2e,	// (0x0002dcc9) sat_plugin_idle_act4_pane

0xeccc,	// (0x0002de67) sat_plugin_idle_act4_pane_t1_ParamLimits

0xeccc,	// (0x0002de67) sat_plugin_idle_act4_pane_t1

0xece4,	// (0x0002de7f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xece4,	// (0x0002de7f) sat_plugin_idle_act4_pane_t2

0xecfc,	// (0x0002de97) sat_plugin_idle_act4_pane_t3_ParamLimits

0xecfc,	// (0x0002de97) sat_plugin_idle_act4_pane_t3

0xed14,	// (0x0002deaf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xed14,	// (0x0002deaf) sat_plugin_idle_act4_pane_t4

0x0003,

0x00a7,	// (0x0001f242) sat_plugin_idle_act4_pane_t_ParamLimits

0x00a7,	// (0x0001f242) sat_plugin_idle_act4_pane_t

0x1607,	// (0x000207a2) popup_battery_window_ParamLimits

0x1607,	// (0x000207a2) popup_battery_window

0x3aa7,	// (0x00022c42) bg_popup_sub_pane_cp25_ParamLimits

0x3aa7,	// (0x00022c42) bg_popup_sub_pane_cp25

0x9893,	// (0x00028a2e) popup_battery_window_g1_ParamLimits

0x9893,	// (0x00028a2e) popup_battery_window_g1

0x989f,	// (0x00028a3a) popup_battery_window_t1_ParamLimits

0x989f,	// (0x00028a3a) popup_battery_window_t1

0x98b1,	// (0x00028a4c) popup_battery_window_t2_ParamLimits

0x98b1,	// (0x00028a4c) popup_battery_window_t2

0x0001,

0xfd4b,	// (0x0002eee6) popup_battery_window_t_ParamLimits

0xfd4b,	// (0x0002eee6) popup_battery_window_t

0xd5de,	// (0x0002c779) midp_canvas_pane_ParamLimits

0xd63b,	// (0x0002c7d6) midp_keypad_pane_ParamLimits

0xd63b,	// (0x0002c7d6) midp_keypad_pane

0x506c,	// (0x00024207) main_midp_pane_ParamLimits

0x765d,	// (0x000267f8) signal_pane_g2_cp_ParamLimits

0xed2c,	// (0x0002dec7) aid_size_cell_midp_keypad_ParamLimits

0xed2c,	// (0x0002dec7) aid_size_cell_midp_keypad

0xed4a,	// (0x0002dee5) midp_keyp_game_grid_pane_ParamLimits

0xed4a,	// (0x0002dee5) midp_keyp_game_grid_pane

0xed71,	// (0x0002df0c) midp_keyp_rocker_pane_ParamLimits

0xed71,	// (0x0002df0c) midp_keyp_rocker_pane

0xedc2,	// (0x0002df5d) midp_keyp_sk_left_pane_ParamLimits

0xedc2,	// (0x0002df5d) midp_keyp_sk_left_pane

0xee16,	// (0x0002dfb1) midp_keyp_sk_right_pane_ParamLimits

0xee16,	// (0x0002dfb1) midp_keyp_sk_right_pane

0x372a,	// (0x000228c5) bg_button_pane_cp03

0xee6a,	// (0x0002e005) midp_keyp_sk_left_pane_g1

0x372a,	// (0x000228c5) bg_button_pane_cp04

0xee6a,	// (0x0002e005) midp_keyp_sk_right_pane_g1

0x7b9c,	// (0x00026d37) midp_keyp_rocker_pane_g1

0xee73,	// (0x0002e00e) keyp_game_cell_pane_ParamLimits

0xee73,	// (0x0002e00e) keyp_game_cell_pane

0x372a,	// (0x000228c5) bg_button_pane_cp02

0xee97,	// (0x0002e032) keyp_game_cell_pane_g1

0xc0d8,	// (0x0002b273) popup_fep_vkb2_window_ParamLimits

0xc0d8,	// (0x0002b273) popup_fep_vkb2_window

0xcb62,	// (0x0002bcfd) aid_size_cell_vkb2_ParamLimits

0xcb62,	// (0x0002bcfd) aid_size_cell_vkb2

0xcb98,	// (0x0002bd33) popup_fep_vkb2_window_g1_ParamLimits

0xcb98,	// (0x0002bd33) popup_fep_vkb2_window_g1

0xcbe8,	// (0x0002bd83) vkb2_area_bottom_pane_ParamLimits

0xcbe8,	// (0x0002bd83) vkb2_area_bottom_pane

0xcc3c,	// (0x0002bdd7) vkb2_area_keypad_pane_ParamLimits

0xcc3c,	// (0x0002bdd7) vkb2_area_keypad_pane

0xcc84,	// (0x0002be1f) vkb2_area_top_pane_ParamLimits

0xcc84,	// (0x0002be1f) vkb2_area_top_pane

0xcd0a,	// (0x0002bea5) vkb2_top_entry_pane_ParamLimits

0xcd0a,	// (0x0002bea5) vkb2_top_entry_pane

0xcd37,	// (0x0002bed2) vkb2_top_grid_left_pane_ParamLimits

0xcd37,	// (0x0002bed2) vkb2_top_grid_left_pane

0xcd57,	// (0x0002bef2) vkb2_top_grid_right_pane_ParamLimits

0xcd57,	// (0x0002bef2) vkb2_top_grid_right_pane

0x2e98,	// (0x00022033) vkb2_cell_keypad_pane_ParamLimits

0x2e98,	// (0x00022033) vkb2_cell_keypad_pane

0xcd9d,	// (0x0002bf38) vkb2_area_bottom_grid_pane_ParamLimits

0xcd9d,	// (0x0002bf38) vkb2_area_bottom_grid_pane

0xcdc7,	// (0x0002bf62) vkb2_area_bottom_pane_g1_ParamLimits

0xcdc7,	// (0x0002bf62) vkb2_area_bottom_pane_g1

0xcded,	// (0x0002bf88) vkb2_area_bottom_pane_g2_ParamLimits

0xcded,	// (0x0002bf88) vkb2_area_bottom_pane_g2

0xce1e,	// (0x0002bfb9) vkb2_area_bottom_pane_g3_ParamLimits

0xce1e,	// (0x0002bfb9) vkb2_area_bottom_pane_g3

0x0002,

0xfd50,	// (0x0002eeeb) vkb2_area_bottom_pane_g_ParamLimits

0xfd50,	// (0x0002eeeb) vkb2_area_bottom_pane_g

0x3042,	// (0x000221dd) vkb2_top_cell_left_pane_ParamLimits

0x3042,	// (0x000221dd) vkb2_top_cell_left_pane

0xeea0,	// (0x0002e03b) vkb2_top_entry_pane_g1_ParamLimits

0xeea0,	// (0x0002e03b) vkb2_top_entry_pane_g1

0xeeae,	// (0x0002e049) vkb2_top_entry_pane_t1_ParamLimits

0xeeae,	// (0x0002e049) vkb2_top_entry_pane_t1

0x9a62,	// (0x00028bfd) vkb2_top_entry_pane_t2_ParamLimits

0x9a62,	// (0x00028bfd) vkb2_top_entry_pane_t2

0x9a94,	// (0x00028c2f) vkb2_top_entry_pane_t3_ParamLimits

0x9a94,	// (0x00028c2f) vkb2_top_entry_pane_t3

0x0002,

0xfd57,	// (0x0002eef2) vkb2_top_entry_pane_t_ParamLimits

0xfd57,	// (0x0002eef2) vkb2_top_entry_pane_t

0xce88,	// (0x0002c023) vkb2_top_grid_right_pane_g1_ParamLimits

0xce88,	// (0x0002c023) vkb2_top_grid_right_pane_g1

0x30a5,	// (0x00022240) vkb2_top_grid_right_pane_g2_ParamLimits

0x30a5,	// (0x00022240) vkb2_top_grid_right_pane_g2

0x30bd,	// (0x00022258) vkb2_top_grid_right_pane_g3_ParamLimits

0x30bd,	// (0x00022258) vkb2_top_grid_right_pane_g3

0xce9e,	// (0x0002c039) vkb2_top_grid_right_pane_g4_ParamLimits

0xce9e,	// (0x0002c039) vkb2_top_grid_right_pane_g4

0x0003,

0xfd5e,	// (0x0002eef9) vkb2_top_grid_right_pane_g_ParamLimits

0xfd5e,	// (0x0002eef9) vkb2_top_grid_right_pane_g

0x30eb,	// (0x00022286) vkb2_top_cell_left_pane_g1

0x3102,	// (0x0002229d) vkb2_cell_keypad_pane_g1_ParamLimits

0x3102,	// (0x0002229d) vkb2_cell_keypad_pane_g1

0x9ab8,	// (0x00028c53) vkb2_cell_keypad_pane_t1_ParamLimits

0x9ab8,	// (0x00028c53) vkb2_cell_keypad_pane_t1

0x3110,	// (0x000222ab) vkb2_cell_bottom_grid_pane_ParamLimits

0x3110,	// (0x000222ab) vkb2_cell_bottom_grid_pane

0x3149,	// (0x000222e4) vkb2_cell_bottom_grid_pane_g1

0xeb5f,	// (0x0002dcfa) aid_call2_pane_cp02

0xeb67,	// (0x0002dd02) aid_call_pane_cp02

0xeb6f,	// (0x0002dd0a) clock_digital_number_pane_cp10

0xeb77,	// (0x0002dd12) clock_digital_number_pane_cp11

0xeb7f,	// (0x0002dd1a) clock_digital_number_pane_cp12

0xeb87,	// (0x0002dd22) clock_digital_number_pane_cp13

0xeb8f,	// (0x0002dd2a) clock_digital_separator_pane_cp10

0x4735,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g1

0x4735,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g2

0xeb97,	// (0x0002dd32) popup_clock_digital_analogue_window_cp2_g3

0x4735,	// (0x000238d0) popup_clock_digital_analogue_window_cp2_g4

0xeb97,	// (0x0002dd32) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd28,	// (0x0002eec3) popup_clock_digital_analogue_window_cp2_g

0xeb9f,	// (0x0002dd3a) popup_clock_digital_analogue_window_cp2_t1

0xebad,	// (0x0002dd48) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0083,	// (0x0001f21e) popup_clock_digital_analogue_window_cp2_t

0x7b9c,	// (0x00026d37) clock_digital_number_pane_cp10_g1

0x7b9c,	// (0x00026d37) clock_digital_number_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ecc0) clock_digital_number_pane_cp10_g

0x7b9c,	// (0x00026d37) clock_digital_separator_pane_cp10_g1

0x7b9c,	// (0x00026d37) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb25,	// (0x0002ecc0) clock_digital_separator_pane_cp10_g

0x94df,	// (0x0002867a) uniindi_top_pane_g3

0x94f0,	// (0x0002868b) uniindi_top_pane_g4

0x2f23,	// (0x000220be) vkb2_row_keypad_pane_ParamLimits

0x2f23,	// (0x000220be) vkb2_row_keypad_pane

0x3165,	// (0x00022300) vkb2_cell_t_keypad_pane_ParamLimits

0x3165,	// (0x00022300) vkb2_cell_t_keypad_pane

0x3175,	// (0x00022310) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3175,	// (0x00022310) vkb2_cell_t_keypad_pane_cp08

0x3188,	// (0x00022323) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3188,	// (0x00022323) vkb2_cell_t_keypad_pane_cp09

0x319c,	// (0x00022337) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x319c,	// (0x00022337) vkb2_cell_t_keypad_pane_cp01

0x31ad,	// (0x00022348) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x31ad,	// (0x00022348) vkb2_cell_t_keypad_pane_cp02

0x31be,	// (0x00022359) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x31be,	// (0x00022359) vkb2_cell_t_keypad_pane_cp03

0x31cf,	// (0x0002236a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x31cf,	// (0x0002236a) vkb2_cell_t_keypad_pane_cp04

0x31e0,	// (0x0002237b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x31e0,	// (0x0002237b) vkb2_cell_t_keypad_pane_cp05

0x31f1,	// (0x0002238c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x31f1,	// (0x0002238c) vkb2_cell_t_keypad_pane_cp06

0x3202,	// (0x0002239d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3202,	// (0x0002239d) vkb2_cell_t_keypad_pane_cp07

0x3213,	// (0x000223ae) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3213,	// (0x000223ae) vkb2_cell_t_keypad_pane_cp10

0x7e1a,	// (0x00026fb5) vkb2_cell_t_keypad_pane_g1

0x9acf,	// (0x00028c6a) vkb2_cell_t_keypad_pane_t1

0x372a,	// (0x000228c5) popup_grid_graphic2_window

0xeee7,	// (0x0002e082) aid_size_cell_graphic2_ParamLimits

0xeee7,	// (0x0002e082) aid_size_cell_graphic2

0xef25,	// (0x0002e0c0) bg_popup_window_pane_cp21_ParamLimits

0xef25,	// (0x0002e0c0) bg_popup_window_pane_cp21

0xef33,	// (0x0002e0ce) graphic2_pages_pane_ParamLimits

0xef33,	// (0x0002e0ce) graphic2_pages_pane

0xef89,	// (0x0002e124) grid_graphic2_control_pane_ParamLimits

0xef89,	// (0x0002e124) grid_graphic2_control_pane

0xefd1,	// (0x0002e16c) grid_graphic2_pane_ParamLimits

0xefd1,	// (0x0002e16c) grid_graphic2_pane

0xf058,	// (0x0002e1f3) cell_graphic2_pane

0x372a,	// (0x000228c5) main_comp_mode_pane

0x8d4d,	// (0x00027ee8) list_ai3_gene_pane_ParamLimits

0xe8a6,	// (0x0002da41) bg_popup_window_pane_cp19_ParamLimits

0x912d,	// (0x000282c8) bg_touch_area_indi_pane_ParamLimits

0x912d,	// (0x000282c8) bg_touch_area_indi_pane

0x9143,	// (0x000282de) bg_touch_area_indi_pane_cp01_ParamLimits

0x9143,	// (0x000282de) bg_touch_area_indi_pane_cp01

0x9159,	// (0x000282f4) bg_touch_area_indi_pane_cp02_ParamLimits

0x9159,	// (0x000282f4) bg_touch_area_indi_pane_cp02

0x916f,	// (0x0002830a) bg_touch_area_indi_pane_cp03_ParamLimits

0x916f,	// (0x0002830a) bg_touch_area_indi_pane_cp03

0x9189,	// (0x00028324) popup_slider_window_g1_ParamLimits

0x91a5,	// (0x00028340) popup_slider_window_g2_ParamLimits

0x91c1,	// (0x0002835c) popup_slider_window_g3_ParamLimits

0xfcc7,	// (0x0002ee62) popup_slider_window_g_ParamLimits

0x9227,	// (0x000283c2) popup_slider_window_t1_ParamLimits

0x929b,	// (0x00028436) small_volume_slider_vertical_pane_ParamLimits

0xf058,	// (0x0002e1f3) cell_graphic2_pane_ParamLimits

0xf0b3,	// (0x0002e24e) bg_button_pane_cp10_ParamLimits

0xf0b3,	// (0x0002e24e) bg_button_pane_cp10

0xf0c6,	// (0x0002e261) bg_button_pane_cp11_ParamLimits

0xf0c6,	// (0x0002e261) bg_button_pane_cp11

0xf0d9,	// (0x0002e274) graphic2_pages_pane_g1_ParamLimits

0xf0d9,	// (0x0002e274) graphic2_pages_pane_g1

0xf0f4,	// (0x0002e28f) graphic2_pages_pane_g2_ParamLimits

0xf0f4,	// (0x0002e28f) graphic2_pages_pane_g2

0x0001,

0xfd6c,	// (0x0002ef07) graphic2_pages_pane_g_ParamLimits

0xfd6c,	// (0x0002ef07) graphic2_pages_pane_g

0xf10c,	// (0x0002e2a7) graphic2_pages_pane_t1_ParamLimits

0xf10c,	// (0x0002e2a7) graphic2_pages_pane_t1

0xf124,	// (0x0002e2bf) cell_graphic2_control_pane_ParamLimits

0xf124,	// (0x0002e2bf) cell_graphic2_control_pane

0xf156,	// (0x0002e2f1) cell_graphic2_pane_g1_ParamLimits

0xf156,	// (0x0002e2f1) cell_graphic2_pane_g1

0xda4a,	// (0x0002cbe5) cell_graphic2_pane_g2_ParamLimits

0xda4a,	// (0x0002cbe5) cell_graphic2_pane_g2

0xf163,	// (0x0002e2fe) cell_graphic2_pane_g3_ParamLimits

0xf163,	// (0x0002e2fe) cell_graphic2_pane_g3

0xda57,	// (0x0002cbf2) cell_graphic2_pane_g4_ParamLimits

0xda57,	// (0x0002cbf2) cell_graphic2_pane_g4

0xf170,	// (0x0002e30b) cell_graphic2_pane_g5_ParamLimits

0xf170,	// (0x0002e30b) cell_graphic2_pane_g5

0x0004,

0xfd71,	// (0x0002ef0c) cell_graphic2_pane_g_ParamLimits

0xfd71,	// (0x0002ef0c) cell_graphic2_pane_g

0xf190,	// (0x0002e32b) cell_graphic2_pane_t1_ParamLimits

0xf190,	// (0x0002e32b) cell_graphic2_pane_t1

0x6297,	// (0x00025432) grid_highlight_pane_cp11_ParamLimits

0x6297,	// (0x00025432) grid_highlight_pane_cp11

0x3aa7,	// (0x00022c42) bg_button_pane_cp05

0xf1d9,	// (0x0002e374) cell_graphic2_control_pane_g1

0x7b9c,	// (0x00026d37) bg_touch_area_indi_pane_g1

0x9dab,	// (0x00028f46) aid_cmod_rocker_key_size

0x9db5,	// (0x00028f50) aid_cmode_itu_key_size

0x9dbf,	// (0x00028f5a) main_cmode_video_pane

0x9dc9,	// (0x00028f64) main_comp_mode_itu_pane

0x9dd5,	// (0x00028f70) main_comp_mode_rocker_pane

0x9de1,	// (0x00028f7c) cell_cmode_rocker_pane_ParamLimits

0x9de1,	// (0x00028f7c) cell_cmode_rocker_pane

0x9df3,	// (0x00028f8e) cell_cmode_itu_pane_ParamLimits

0x9df3,	// (0x00028f8e) cell_cmode_itu_pane

0x40b3,	// (0x0002324e) bg_button_pane_cp06_ParamLimits

0x40b3,	// (0x0002324e) bg_button_pane_cp06

0x7e1a,	// (0x00026fb5) cell_cmode_rocker_pane_g1_ParamLimits

0x7e1a,	// (0x00026fb5) cell_cmode_rocker_pane_g1

0x933f,	// (0x000284da) cell_cmode_rocker_pane_g2_ParamLimits

0x933f,	// (0x000284da) cell_cmode_rocker_pane_g2

0x0001,

0xfd7c,	// (0x0002ef17) cell_cmode_rocker_pane_g_ParamLimits

0xfd7c,	// (0x0002ef17) cell_cmode_rocker_pane_g

0x372a,	// (0x000228c5) bg_button_pane_cp07

0x9e08,	// (0x00028fa3) cell_cmode_itu_pane_g1

0x9e11,	// (0x00028fac) cell_cmode_itu_pane_t1

0x9e1f,	// (0x00028fba) cell_cmode_itu_pane_t2

0x0001,

0xfd81,	// (0x0002ef1c) cell_cmode_itu_pane_t

0x9562,	// (0x000286fd) aid_touch_ctrl_left

0x956a,	// (0x00028705) aid_touch_ctrl_right

0x372a,	// (0x000228c5) compa_mode_pane

0xf1fd,	// (0x0002e398) aid_cmod_rocker_key_size_cp

0xf207,	// (0x0002e3a2) aid_cmode_itu_key_size_cp

0x9e41,	// (0x00028fdc) compa_mode_pane_g1

0x9e49,	// (0x00028fe4) compa_mode_pane_g2

0x9e51,	// (0x00028fec) compa_mode_pane_g3

0x0002,

0xfd86,	// (0x0002ef21) compa_mode_pane_g

0xf211,	// (0x0002e3ac) main_comp_mode_itu_pane_cp

0xf219,	// (0x0002e3b4) main_comp_mode_rocker_pane_cp

0xf221,	// (0x0002e3bc) cell_cmode_itu_pane_cp_ParamLimits

0xf221,	// (0x0002e3bc) cell_cmode_itu_pane_cp

0xf236,	// (0x0002e3d1) cell_cmode_rocker_pane_cp_ParamLimits

0xf236,	// (0x0002e3d1) cell_cmode_rocker_pane_cp

0x40b3,	// (0x0002324e) bg_button_pane_cp06_cp_ParamLimits

0x40b3,	// (0x0002324e) bg_button_pane_cp06_cp

0x7e1a,	// (0x00026fb5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7e1a,	// (0x00026fb5) cell_cmode_rocker_pane_g1_cp

0x7b9c,	// (0x00026d37) cell_cmode_rocker_pane_g2_cp

0x372a,	// (0x000228c5) bg_button_pane_cp07_cp

0xf248,	// (0x0002e3e3) cell_cmode_itu_pane_g1_cp

0xf251,	// (0x0002e3ec) cell_cmode_itu_pane_t1_cp

0xf251,	// (0x0002e3ec) cell_cmode_itu_pane_t2_cp

0xdf07,	// (0x0002d0a2) settings_code_pane_cp2

0x381e,	// (0x000229b9) bg_popup_window_pane_cp3_ParamLimits

0x3ca7,	// (0x00022e42) heading_pane_cp3_ParamLimits

0x3cb3,	// (0x00022e4e) listscroll_popup_graphic_pane_ParamLimits

0x283c,	// (0x000219d7) fep_hwr_aid_pane_ParamLimits

0x2c05,	// (0x00021da0) aid_touch_sctrl_top_ParamLimits

0x2c12,	// (0x00021dad) sctrl_sk_top_pane_g1_ParamLimits

0x7e1a,	// (0x00026fb5) sctrl_sk_top_pane_g2_ParamLimits

0xfce0,	// (0x0002ee7b) sctrl_sk_top_pane_g_ParamLimits

0x2c1f,	// (0x00021dba) sctrl_sk_top_pane_t1_ParamLimits

0x2c05,	// (0x00021da0) aid_touch_sctrl_bottom_ParamLimits

0x2c1f,	// (0x00021dba) sctrl_sk_bottom_pane_t1_ParamLimits

0x94ab,	// (0x00028646) aid_area_touch_clock

0xcccc,	// (0x0002be67) aid_vkb2_area_top_pane_cell_ParamLimits

0xcccc,	// (0x0002be67) aid_vkb2_area_top_pane_cell

0xcd77,	// (0x0002bf12) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd77,	// (0x0002bf12) aid_vkb2_area_bottom_pane_cell

0x9a1a,	// (0x00028bb5) popup_char_count_window

0x9e9e,	// (0x00029039) popup_char_count_window_g1

0x9ea7,	// (0x00029042) popup_char_count_window_g2

0x9eb0,	// (0x0002904b) popup_char_count_window_g3

0x0002,

0xfd8d,	// (0x0002ef28) popup_char_count_window_g

0x9eb9,	// (0x00029054) popup_char_count_window_t1

0x2cc0,	// (0x00021e5b) popup_fep_char_preview_window_ParamLimits

0x2cc0,	// (0x00021e5b) popup_fep_char_preview_window

0xccec,	// (0x0002be87) vkb2_top_candi_pane_ParamLimits

0xccec,	// (0x0002be87) vkb2_top_candi_pane

0xf25f,	// (0x0002e3fa) cell_vkb2_top_candi_pane_ParamLimits

0xf25f,	// (0x0002e3fa) cell_vkb2_top_candi_pane

0x5c23,	// (0x00024dbe) bg_popup_fep_char_preview_window_ParamLimits

0x5c23,	// (0x00024dbe) bg_popup_fep_char_preview_window

0x3228,	// (0x000223c3) popup_fep_char_preview_window_t1_ParamLimits

0x3228,	// (0x000223c3) popup_fep_char_preview_window_t1

0x9f14,	// (0x000290af) bg_popup_fep_char_preview_window_g1

0x9f1c,	// (0x000290b7) bg_popup_fep_char_preview_window_g2

0x9f24,	// (0x000290bf) bg_popup_fep_char_preview_window_g3

0x9f2c,	// (0x000290c7) bg_popup_fep_char_preview_window_g4

0x9f34,	// (0x000290cf) bg_popup_fep_char_preview_window_g5

0x3262,	// (0x000223fd) bg_popup_fep_char_preview_window_g6

0x9f3c,	// (0x000290d7) bg_popup_fep_char_preview_window_g7

0x9f44,	// (0x000290df) bg_popup_fep_char_preview_window_g8

0x9f4c,	// (0x000290e7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfd94,	// (0x0002ef2f) bg_popup_fep_char_preview_window_g

0x7e1a,	// (0x00026fb5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e1a,	// (0x00026fb5) cell_vkb2_top_candi_pane_g1

0x8131,	// (0x000272cc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8131,	// (0x000272cc) cell_vkb2_top_candi_pane_g2

0x8152,	// (0x000272ed) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8152,	// (0x000272ed) cell_vkb2_top_candi_pane_g3

0x326a,	// (0x00022405) cell_vkb2_top_candi_pane_g4_ParamLimits

0x326a,	// (0x00022405) cell_vkb2_top_candi_pane_g4

0x9f54,	// (0x000290ef) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9f54,	// (0x000290ef) cell_vkb2_top_candi_pane_g5

0x933f,	// (0x000284da) cell_vkb2_top_candi_pane_g6_ParamLimits

0x933f,	// (0x000284da) cell_vkb2_top_candi_pane_g6

0x0005,

0xfda7,	// (0x0002ef42) cell_vkb2_top_candi_pane_g_ParamLimits

0xfda7,	// (0x0002ef42) cell_vkb2_top_candi_pane_g

0x328b,	// (0x00022426) cell_vkb2_top_candi_pane_t1

0x269c,	// (0x00021837) aid_size_touch_slider_mark_ParamLimits

0x269c,	// (0x00021837) aid_size_touch_slider_mark

0xef6f,	// (0x0002e10a) grid_graphic2_catg_pane_ParamLimits

0xef6f,	// (0x0002e10a) grid_graphic2_catg_pane

0xf02b,	// (0x0002e1c6) popup_grid_graphic2_window_t1_ParamLimits

0xf02b,	// (0x0002e1c6) popup_grid_graphic2_window_t1

0xf041,	// (0x0002e1dc) popup_grid_graphic2_window_t2_ParamLimits

0xf041,	// (0x0002e1dc) popup_grid_graphic2_window_t2

0x0001,

0xfd67,	// (0x0002ef02) popup_grid_graphic2_window_t_ParamLimits

0xfd67,	// (0x0002ef02) popup_grid_graphic2_window_t

0x3aa7,	// (0x00022c42) bg_button_pane_cp05_ParamLimits

0xf1d9,	// (0x0002e374) cell_graphic2_control_pane_g1_ParamLimits

0xf2c5,	// (0x0002e460) cell_graphic2_catg_pane_ParamLimits

0xf2c5,	// (0x0002e460) cell_graphic2_catg_pane

0x372a,	// (0x000228c5) bg_button_pane_cp12

0xf2d7,	// (0x0002e472) cell_graphic2_catg_pane_g1

0x9477,	// (0x00028612) cell_tb_ext_pane_t1_ParamLimits

0x3062,	// (0x000221fd) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3062,	// (0x000221fd) vkb2_top_cell_right_narrow_pane

0x307a,	// (0x00022215) vkb2_top_cell_right_wide_pane_ParamLimits

0x307a,	// (0x00022215) vkb2_top_cell_right_wide_pane

0x282e,	// (0x000219c9) bg_vkb2_func_pane_ParamLimits

0x282e,	// (0x000219c9) bg_vkb2_func_pane

0x30eb,	// (0x00022286) vkb2_top_cell_left_pane_g1_ParamLimits

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp03

0x3149,	// (0x000222e4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x5598,	// (0x00024733) bg_vkb2_func_pane_g1

0x55a0,	// (0x0002473b) bg_vkb2_func_pane_g2

0x55b0,	// (0x0002474b) bg_vkb2_func_pane_g3

0x55a8,	// (0x00024743) bg_vkb2_func_pane_g4

0x55b8,	// (0x00024753) bg_vkb2_func_pane_g5

0x55c0,	// (0x0002475b) bg_vkb2_func_pane_g6

0x55c8,	// (0x00024763) bg_vkb2_func_pane_g7

0x55d0,	// (0x0002476b) bg_vkb2_func_pane_g8

0x5590,	// (0x0002472b) bg_vkb2_func_pane_g9

0x0008,

0xfdb4,	// (0x0002ef4f) bg_vkb2_func_pane_g

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp01

0x30eb,	// (0x00022286) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x30eb,	// (0x00022286) vkb2_top_cell_right_wide_pane_g1

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x282e,	// (0x000219c9) bg_vkb2_fuc_pane_cp02

0x3149,	// (0x000222e4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3149,	// (0x000222e4) vkb2_top_cell_right_narrow_pane_g1

0xe7e8,	// (0x0002d983) aid_touch_area_decrease_ParamLimits

0xe7e8,	// (0x0002d983) aid_touch_area_decrease

0xe822,	// (0x0002d9bd) aid_touch_area_increase_ParamLimits

0xe822,	// (0x0002d9bd) aid_touch_area_increase

0xe84a,	// (0x0002d9e5) aid_touch_area_mute_ParamLimits

0xe84a,	// (0x0002d9e5) aid_touch_area_mute

0xe872,	// (0x0002da0d) aid_touch_area_slider_ParamLimits

0xe872,	// (0x0002da0d) aid_touch_area_slider

0xe8b2,	// (0x0002da4d) popup_slider_window_g4_ParamLimits

0xe8b2,	// (0x0002da4d) popup_slider_window_g4

0xe8da,	// (0x0002da75) popup_slider_window_g5_ParamLimits

0xe8da,	// (0x0002da75) popup_slider_window_g5

0xe90e,	// (0x0002daa9) popup_slider_window_g6_ParamLimits

0xe90e,	// (0x0002daa9) popup_slider_window_g6

0x9255,	// (0x000283f0) popup_slider_window_t2_ParamLimits

0x9255,	// (0x000283f0) popup_slider_window_t2

0x0001,

0xfcd4,	// (0x0002ee6f) popup_slider_window_t_ParamLimits

0xfcd4,	// (0x0002ee6f) popup_slider_window_t

0xe92a,	// (0x0002dac5) slider_pane_ParamLimits

0xe92a,	// (0x0002dac5) slider_pane

0x9f90,	// (0x0002912b) slider_pane_g1_ParamLimits

0x9f90,	// (0x0002912b) slider_pane_g1

0x9fa4,	// (0x0002913f) slider_pane_g2_ParamLimits

0x9fa4,	// (0x0002913f) slider_pane_g2

0x9fba,	// (0x00029155) slider_pane_g3_ParamLimits

0x9fba,	// (0x00029155) slider_pane_g3

0x0003,

0xfdc7,	// (0x0002ef62) slider_pane_g_ParamLimits

0xfdc7,	// (0x0002ef62) slider_pane_g

0xc9ac,	// (0x0002bb47) popup_tb_float_extension_window_ParamLimits

0xc9ac,	// (0x0002bb47) popup_tb_float_extension_window

0x9fe6,	// (0x00029181) aid_size_cell_tb_float_ext

0x372a,	// (0x000228c5) bg_popup_sub_window_cp28

0x9ff2,	// (0x0002918d) grid_tb_float_ext_pane

0x9ffc,	// (0x00029197) cell_tb_float_ext_pane_ParamLimits

0x9ffc,	// (0x00029197) cell_tb_float_ext_pane

0xa016,	// (0x000291b1) cell_tb_float_ext_pane_g1

0xa01f,	// (0x000291ba) grid_highlight_pane_cp12

0xcad5,	// (0x0002bc70) cell_last_hwr_side_pane_ParamLimits

0xcad5,	// (0x0002bc70) cell_last_hwr_side_pane

0x7b9c,	// (0x00026d37) cell_last_hwr_side_pane_g1

0xa028,	// (0x000291c3) cell_last_hwr_side_pane_g2

0x0001,

0xfdd0,	// (0x0002ef6b) cell_last_hwr_side_pane_g

0xce53,	// (0x0002bfee) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce53,	// (0x0002bfee) vkb2_area_bottom_space_btn_pane

0x7e1a,	// (0x00026fb5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9acf,	// (0x00028c6a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x328b,	// (0x00022426) cell_vkb2_top_candi_pane_t1_ParamLimits

0x32aa,	// (0x00022445) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x32aa,	// (0x00022445) vkb2_area_bottom_space_btn_pane_g1

0x32e4,	// (0x0002247f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x32e4,	// (0x0002247f) vkb2_area_bottom_space_btn_pane_g2

0x331a,	// (0x000224b5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x331a,	// (0x000224b5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdd5,	// (0x0002ef70) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdd5,	// (0x0002ef70) vkb2_area_bottom_space_btn_pane_g

0x28e3,	// (0x00021a7e) cel_fep_hwr_func_pane_ParamLimits

0x28e3,	// (0x00021a7e) cel_fep_hwr_func_pane

0xcaaa,	// (0x0002bc45) cell_hwr_side_button_pane_ParamLimits

0xcaaa,	// (0x0002bc45) cell_hwr_side_button_pane

0x94ab,	// (0x00028646) aid_area_touch_clock_ParamLimits

0x3aa7,	// (0x00022c42) bg_uniindi_top_pane_ParamLimits

0x94bd,	// (0x00028658) uniindi_top_pane_g1_ParamLimits

0x94d3,	// (0x0002866e) uniindi_top_pane_g2_ParamLimits

0x94df,	// (0x0002867a) uniindi_top_pane_g3_ParamLimits

0x94f0,	// (0x0002868b) uniindi_top_pane_g4_ParamLimits

0xfd07,	// (0x0002eea2) uniindi_top_pane_g_ParamLimits

0x94fd,	// (0x00028698) uniindi_top_pane_t1_ParamLimits

0x3aa7,	// (0x00022c42) bg_vkb2_func_pane_cp01_ParamLimits

0x3aa7,	// (0x00022c42) bg_vkb2_func_pane_cp01

0xa031,	// (0x000291cc) cel_fep_hwr_func_pane_g1_ParamLimits

0xa031,	// (0x000291cc) cel_fep_hwr_func_pane_g1

0x3aa7,	// (0x00022c42) bg_vkb2_func_pane_cp02_ParamLimits

0x3aa7,	// (0x00022c42) bg_vkb2_func_pane_cp02

0xa031,	// (0x000291cc) cell_hwr_side_button_pane_g1_ParamLimits

0xa031,	// (0x000291cc) cell_hwr_side_button_pane_g1

0x5411,	// (0x000245ac) status_pane_g4_ParamLimits

0x5411,	// (0x000245ac) status_pane_g4

0x542b,	// (0x000245c6) status_pane_t1

0x78e1,	// (0x00026a7c) form2_midp_gauge_slider_cont_pane

0x78e9,	// (0x00026a84) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe1d6,	// (0x0002d371) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe1e8,	// (0x0002d383) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad8,	// (0x0002ec73) form2_midp_gauge_slider_pane_t_ParamLimits

0x791f,	// (0x00026aba) form2_midp_slider_pane_ParamLimits

0x2c80,	// (0x00021e1b) aid_size_cell_func_vkb2_ParamLimits

0x2c80,	// (0x00021e1b) aid_size_cell_func_vkb2

0x9fd2,	// (0x0002916d) slider_pane_g4_ParamLimits

0x9fd2,	// (0x0002916d) slider_pane_g4

0xceb4,	// (0x0002c04f) form2_midp_gauge_slider_pane_t2_cp01

0xcec2,	// (0x0002c05d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcec2,	// (0x0002c05d) form2_midp_gauge_slider_pane_t3_cp01

0x338f,	// (0x0002252a) form2_midp_slider_pane_cp01

0x372a,	// (0x000228c5) navi_smil_pane

0xa06a,	// (0x00029205) navi_smil_pane_g1

0xa072,	// (0x0002920d) navi_smil_pane_t1

0xa03f,	// (0x000291da) form2_midp_slider_pane_g1

0xa048,	// (0x000291e3) form2_midp_slider_pane_g2

0xa050,	// (0x000291eb) form2_midp_slider_pane_g3

0xa03f,	// (0x000291da) form2_midp_slider_pane_g4

0xf2e0,	// (0x0002e47b) form2_midp_slider_pane_g5

0x0004,

0xfdde,	// (0x0002ef79) form2_midp_slider_pane_g

0x3354,	// (0x000224ef) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x3354,	// (0x000224ef) vkb2_area_bottom_space_btn_pane_g4

0xd8ae,	// (0x0002ca49) lc0_navi_pane_ParamLimits

0xd8ae,	// (0x0002ca49) lc0_navi_pane

0xd918,	// (0x0002cab3) lc0_stat_indi_pane_ParamLimits

0xd918,	// (0x0002cab3) lc0_stat_indi_pane

0xd92d,	// (0x0002cac8) ls0_title_pane_ParamLimits

0xd92d,	// (0x0002cac8) ls0_title_pane

0x40b3,	// (0x0002324e) bg_popup_sub_pane_cp14_ParamLimits

0x9492,	// (0x0002862d) list_uniindi_pane_ParamLimits

0x949e,	// (0x00028639) uniindi_top_pane_ParamLimits

0x953a,	// (0x000286d5) list_single_uniindi_pane_g1_ParamLimits

0x954d,	// (0x000286e8) list_single_uniindi_pane_t1_ParamLimits

0xcedf,	// (0x0002c07a) lc0_stat_clock_pane_ParamLimits

0xcedf,	// (0x0002c07a) lc0_stat_clock_pane

0xf2eb,	// (0x0002e486) lc0_stat_indi_pane_g1_ParamLimits

0xf2eb,	// (0x0002e486) lc0_stat_indi_pane_g1

0xf2f8,	// (0x0002e493) lc0_stat_indi_pane_g2_ParamLimits

0xf2f8,	// (0x0002e493) lc0_stat_indi_pane_g2

0x0001,

0x0153,	// (0x0001f2ee) lc0_stat_indi_pane_g_ParamLimits

0x0153,	// (0x0001f2ee) lc0_stat_indi_pane_g

0xceec,	// (0x0002c087) lc0_uni_indicator_pane_ParamLimits

0xceec,	// (0x0002c087) lc0_uni_indicator_pane

0xf305,	// (0x0002e4a0) ls0_title_pane_g1_ParamLimits

0xf305,	// (0x0002e4a0) ls0_title_pane_g1

0xf319,	// (0x0002e4b4) ls0_title_pane_t1_ParamLimits

0xf319,	// (0x0002e4b4) ls0_title_pane_t1

0xcef9,	// (0x0002c094) lc0_uni_indicator_pane_g1_ParamLimits

0xcef9,	// (0x0002c094) lc0_uni_indicator_pane_g1

0xa0e4,	// (0x0002927f) lc0_stat_clock_pane_t1

0x372a,	// (0x000228c5) main_ai5_pane

0xa0f2,	// (0x0002928d) ai5_sk_pane_ParamLimits

0xa0f2,	// (0x0002928d) ai5_sk_pane

0xf347,	// (0x0002e4e2) cell_ai5_widget_pane_ParamLimits

0xf347,	// (0x0002e4e2) cell_ai5_widget_pane

0xa1ba,	// (0x00029355) aid_size_cell_widget_grid

0xa1d0,	// (0x0002936b) bg_ai5_widget_pane_ParamLimits

0xa1d0,	// (0x0002936b) bg_ai5_widget_pane

0xa248,	// (0x000293e3) cell_ai5_widget_pane_g2

0xa25c,	// (0x000293f7) cell_ai5_widget_pane_g3

0xa276,	// (0x00029411) cell_ai5_widget_pane_g4

0xa286,	// (0x00029421) cell_ai5_widget_pane_g5

0xa296,	// (0x00029431) cell_ai5_widget_pane_g6

0xa2a2,	// (0x0002943d) cell_ai5_widget_pane_g7

0xa2ea,	// (0x00029485) cell_ai5_widget_pane_t1_ParamLimits

0xa2ea,	// (0x00029485) cell_ai5_widget_pane_t1

0xa307,	// (0x000294a2) cell_ai5_widget_pane_t2_ParamLimits

0xa307,	// (0x000294a2) cell_ai5_widget_pane_t2

0xa31f,	// (0x000294ba) cell_ai5_widget_pane_t3_ParamLimits

0xa31f,	// (0x000294ba) cell_ai5_widget_pane_t3

0xa337,	// (0x000294d2) cell_ai5_widget_pane_t4_ParamLimits

0xa337,	// (0x000294d2) cell_ai5_widget_pane_t4

0xa35d,	// (0x000294f8) cell_ai5_widget_pane_t5_ParamLimits

0xa35d,	// (0x000294f8) cell_ai5_widget_pane_t5

0xa37d,	// (0x00029518) cell_ai5_widget_pane_t6_ParamLimits

0xa37d,	// (0x00029518) cell_ai5_widget_pane_t6

0xa38f,	// (0x0002952a) cell_ai5_widget_pane_t7_ParamLimits

0xa38f,	// (0x0002952a) cell_ai5_widget_pane_t7

0xa3a8,	// (0x00029543) cell_ai5_widget_pane_t8_ParamLimits

0xa3a8,	// (0x00029543) cell_ai5_widget_pane_t8

0x0009,

0xfdfe,	// (0x0002ef99) cell_ai5_widget_pane_t_ParamLimits

0xfdfe,	// (0x0002ef99) cell_ai5_widget_pane_t

0xa407,	// (0x000295a2) grid_ai5_widget_pane

0x40b3,	// (0x0002324e) highlight_cell_ai5_widget_pane_ParamLimits

0x40b3,	// (0x0002324e) highlight_cell_ai5_widget_pane

0xf3ad,	// (0x0002e548) ai5_sk_left_pane

0xf3b7,	// (0x0002e552) ai5_sk_middle_pane

0xf3c1,	// (0x0002e55c) ai5_sk_right_pane

0xa43c,	// (0x000295d7) bg_ai5_widget_pane_g1_ParamLimits

0xa43c,	// (0x000295d7) bg_ai5_widget_pane_g1

0xa448,	// (0x000295e3) bg_ai5_widget_pane_g2_ParamLimits

0xa448,	// (0x000295e3) bg_ai5_widget_pane_g2

0xa454,	// (0x000295ef) bg_ai5_widget_pane_g3_ParamLimits

0xa454,	// (0x000295ef) bg_ai5_widget_pane_g3

0xa460,	// (0x000295fb) bg_ai5_widget_pane_g4_ParamLimits

0xa460,	// (0x000295fb) bg_ai5_widget_pane_g4

0xa46c,	// (0x00029607) bg_ai5_widget_pane_g5_ParamLimits

0xa46c,	// (0x00029607) bg_ai5_widget_pane_g5

0xa478,	// (0x00029613) bg_ai5_widget_pane_g6_ParamLimits

0xa478,	// (0x00029613) bg_ai5_widget_pane_g6

0xa484,	// (0x0002961f) bg_ai5_widget_pane_g7_ParamLimits

0xa484,	// (0x0002961f) bg_ai5_widget_pane_g7

0xa490,	// (0x0002962b) bg_ai5_widget_pane_g8_ParamLimits

0xa490,	// (0x0002962b) bg_ai5_widget_pane_g8

0xa49c,	// (0x00029637) bg_ai5_widget_pane_g9_ParamLimits

0xa49c,	// (0x00029637) bg_ai5_widget_pane_g9

0x0008,

0xfe13,	// (0x0002efae) bg_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x0002efae) bg_ai5_widget_pane_g

0xa4ce,	// (0x00029669) cell_shortcut_ai5_widget_pane_ParamLimits

0xa4ce,	// (0x00029669) cell_shortcut_ai5_widget_pane

0x4d48,	// (0x00023ee3) bg_cell_shortcut_ai5_widget_pane

0xa4df,	// (0x0002967a) cell_grid_ai5_widget_pane_g1

0x4d48,	// (0x00023ee3) highlight_cell_shortcut_ai5_widget_pane

0x55a0,	// (0x0002473b) ai5_sk_left_pane_g1

0xa4e8,	// (0x00029683) ai5_sk_left_pane_g2

0xa4f0,	// (0x0002968b) ai5_sk_left_pane_g3

0xa4f8,	// (0x00029693) ai5_sk_left_pane_g4

0x0003,

0xfe26,	// (0x0002efc1) ai5_sk_left_pane_g

0xa500,	// (0x0002969b) ai5_sk_left_pane_t1

0x5598,	// (0x00024733) ai5_sk_right_pane_g1

0xa50e,	// (0x000296a9) ai5_sk_right_pane_g2

0xa516,	// (0x000296b1) ai5_sk_right_pane_g3

0xa51e,	// (0x000296b9) ai5_sk_right_pane_g4

0x0003,

0xfe2f,	// (0x0002efca) ai5_sk_right_pane_g

0xa526,	// (0x000296c1) ai5_sk_right_pane_t1

0x5598,	// (0x00024733) ai5_sk_middle_pane_g1

0x55a0,	// (0x0002473b) ai5_sk_middle_pane_g2

0x55b8,	// (0x00024753) ai5_sk_middle_pane_g3

0xa516,	// (0x000296b1) ai5_sk_middle_pane_g4

0xa4f0,	// (0x0002968b) ai5_sk_middle_pane_g5

0xa534,	// (0x000296cf) ai5_sk_middle_pane_g6

0xf3cb,	// (0x0002e566) ai5_sk_middle_pane_g7

0x0006,

0xfe38,	// (0x0002efd3) ai5_sk_middle_pane_g

0xd79a,	// (0x0002c935) aid_touch_area_size_lc0_ParamLimits

0xd79a,	// (0x0002c935) aid_touch_area_size_lc0

0x2a6e,	// (0x00021c09) cell_hwr_candidate_pane_t1_ParamLimits

0x50e8,	// (0x00024283) aid_touch_navi_pane

0xda64,	// (0x0002cbff) status_dt_navi_pane_ParamLimits

0xda64,	// (0x0002cbff) status_dt_navi_pane

0xda7c,	// (0x0002cc17) status_dt_sta_pane_ParamLimits

0xda7c,	// (0x0002cc17) status_dt_sta_pane

0xf3d3,	// (0x0002e56e) dt_sta_controll_pane

0xf3e0,	// (0x0002e57b) dt_sta_indi_pane

0xf3ed,	// (0x0002e588) dt_sta_title_pane

0x3aa7,	// (0x00022c42) bg_dt_sta_indi_pane_ParamLimits

0x3aa7,	// (0x00022c42) bg_dt_sta_indi_pane

0xf3ff,	// (0x0002e59a) dt_sta_battery_pane

0xf407,	// (0x0002e5a2) dt_sta_indi_pane_g1

0xa586,	// (0x00029721) dt_sta_indi_pane_g2

0xa58f,	// (0x0002972a) dt_sta_indi_pane_g3

0x0002,

0xfe47,	// (0x0002efe2) dt_sta_indi_pane_g

0xa598,	// (0x00029733) dt_sta_signal_pane

0x40b3,	// (0x0002324e) bg_dt_sta_title_pane_ParamLimits

0x40b3,	// (0x0002324e) bg_dt_sta_title_pane

0xa5a1,	// (0x0002973c) dt_sta_title_pane_g1

0xa5a9,	// (0x00029744) dt_sta_title_pane_t1_ParamLimits

0xa5a9,	// (0x00029744) dt_sta_title_pane_t1

0x372a,	// (0x000228c5) bg_dt_sta_control_pane

0xf410,	// (0x0002e5ab) dt_sta_controll_pane_g1

0xa5c7,	// (0x00029762) bg_dt_sta_title_pane_g1

0xa5d0,	// (0x0002976b) bg_dt_sta_title_pane_g2

0xa5d9,	// (0x00029774) bg_dt_sta_title_pane_g3

0x0002,

0xfe4e,	// (0x0002efe9) bg_dt_sta_title_pane_g

0x7b9c,	// (0x00026d37) bg_dt_sta_indi_pane_g1

0xa5e2,	// (0x0002977d) dt_sta_signal_pane_g1

0xa5ea,	// (0x00029785) dt_sta_signal_pane_g2

0x0001,

0xfe55,	// (0x0002eff0) dt_sta_signal_pane_g

0xa5f2,	// (0x0002978d) dt_sta_battery_pane_g1

0xa5fb,	// (0x00029796) dt_sta_battery_pane_t1

0x7b9c,	// (0x00026d37) bg_dt_sta_control_pane_g1

0x4847,	// (0x000239e2) fep_china_uni_eep_pane

0x484f,	// (0x000239ea) fep_china_uni_entry_pane_ParamLimits

0x485f,	// (0x000239fa) popup_fep_china_uni_window_g1_ParamLimits

0x486f,	// (0x00023a0a) popup_fep_china_uni_window_g2_ParamLimits

0x486f,	// (0x00023a0a) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0002e8b8) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0002e8b8) popup_fep_china_uni_window_g

0xa60a,	// (0x000297a5) fep_china_uni_eep_pane_g1

0xa612,	// (0x000297ad) fep_china_uni_eep_pane_t1

0xa061,	// (0x000291fc) aid_touch_area_size_smil_player

0x5238,	// (0x000243d3) lc0_clock_pane

0x541f,	// (0x000245ba) status_pane_g5_ParamLimits

0x541f,	// (0x000245ba) status_pane_g5

0xc52e,	// (0x0002b6c9) popup_keymap_window

0x53dd,	// (0x00024578) status_icon_pane

0xa25c,	// (0x000293f7) cell_ai5_widget_pane_g3_ParamLimits

0xa276,	// (0x00029411) cell_ai5_widget_pane_g4_ParamLimits

0xa286,	// (0x00029421) cell_ai5_widget_pane_g5_ParamLimits

0xa2ae,	// (0x00029449) cell_ai5_widget_pane_g8_ParamLimits

0xa2ae,	// (0x00029449) cell_ai5_widget_pane_g8

0xa2c2,	// (0x0002945d) cell_ai5_widget_pane_g9_ParamLimits

0xa2c2,	// (0x0002945d) cell_ai5_widget_pane_g9

0xa2d6,	// (0x00029471) cell_ai5_widget_pane_g10_ParamLimits

0xa2d6,	// (0x00029471) cell_ai5_widget_pane_g10

0xa621,	// (0x000297bc) status_icon_pane_g1

0x372a,	// (0x000228c5) bg_popup_sub_pane_cp13

0xa629,	// (0x000297c4) popup_keymap_window_t1

0xd728,	// (0x0002c8c3) control_pane_g6_ParamLimits

0xd728,	// (0x0002c8c3) control_pane_g6

0xd735,	// (0x0002c8d0) control_pane_g7_ParamLimits

0xd735,	// (0x0002c8d0) control_pane_g7

0xd742,	// (0x0002c8dd) control_pane_g8_ParamLimits

0xd742,	// (0x0002c8dd) control_pane_g8

0xf3d3,	// (0x0002e56e) dt_sta_controll_pane_ParamLimits

0xf3e0,	// (0x0002e57b) dt_sta_indi_pane_ParamLimits

0xf3ed,	// (0x0002e588) dt_sta_title_pane_ParamLimits

0x3feb,	// (0x00023186) aid_size_touch_scroll_bar_cale

0x161b,	// (0x000207b6) popup_discreet_window_ParamLimits

0x161b,	// (0x000207b6) popup_discreet_window

0xc11e,	// (0x0002b2b9) popup_sk_window

0x5c23,	// (0x00024dbe) bg_popup_sub_pane_cp28_ParamLimits

0x5c23,	// (0x00024dbe) bg_popup_sub_pane_cp28

0xa637,	// (0x000297d2) popup_discreet_window_g1_ParamLimits

0xa637,	// (0x000297d2) popup_discreet_window_g1

0xa657,	// (0x000297f2) popup_discreet_window_t1_ParamLimits

0xa657,	// (0x000297f2) popup_discreet_window_t1

0xa675,	// (0x00029810) popup_discreet_window_t2_ParamLimits

0xa675,	// (0x00029810) popup_discreet_window_t2

0x0002,

0xfe5a,	// (0x0002eff5) popup_discreet_window_t_ParamLimits

0xfe5a,	// (0x0002eff5) popup_discreet_window_t

0x33c6,	// (0x00022561) popup_sk_window_g1

0x33d0,	// (0x0002256b) popup_sk_window_g2

0x0001,

0xfe61,	// (0x0002effc) popup_sk_window_g

0x33d8,	// (0x00022573) popup_sk_window_t1

0x33e6,	// (0x00022581) popup_sk_window_t1_copy1

0xa248,	// (0x000293e3) cell_ai5_widget_pane_g2_ParamLimits

0xa3ba,	// (0x00029555) cell_ai5_widget_pane_t9_ParamLimits

0xa3ba,	// (0x00029555) cell_ai5_widget_pane_t9

0x372a,	// (0x000228c5) main_fep_fshwr2_pane

0xcf20,	// (0x0002c0bb) aid_fshwr2_btn_pane

0xcf31,	// (0x0002c0cc) aid_fshwr2_syb_pane

0xcf42,	// (0x0002c0dd) aid_fshwr2_txt_pane

0xcf4e,	// (0x0002c0e9) fshwr2_func_candi_pane

0xcf6d,	// (0x0002c108) fshwr2_hwr_syb_pane

0xcf88,	// (0x0002c123) fshwr2_icf_pane

0x372a,	// (0x000228c5) fshwr2_icf_bg_pane

0x3466,	// (0x00022601) fshwr2_icf_pane_t1_ParamLimits

0x3466,	// (0x00022601) fshwr2_icf_pane_t1

0x4735,	// (0x000238d0) fshwr2_func_candi_pane_g1

0xf419,	// (0x0002e5b4) fshwr2_func_candi_row_pane_ParamLimits

0xf419,	// (0x0002e5b4) fshwr2_func_candi_row_pane

0xcfb4,	// (0x0002c14f) cell_fshwr2_syb_pane_ParamLimits

0xcfb4,	// (0x0002c14f) cell_fshwr2_syb_pane

0x7e1a,	// (0x00026fb5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e1a,	// (0x00026fb5) fshwr2_hwr_syb_pane_g1

0x372a,	// (0x000228c5) bg_popup_call_pane_cp01

0xcfca,	// (0x0002c165) fshwr2_func_candi_cell_pane_ParamLimits

0xcfca,	// (0x0002c165) fshwr2_func_candi_cell_pane

0xf43c,	// (0x0002e5d7) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf43c,	// (0x0002e5d7) fshwr2_func_candi_cell_bg_pane

0xd015,	// (0x0002c1b0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd015,	// (0x0002c1b0) fshwr2_func_candi_cell_pane_g1

0xd04c,	// (0x0002c1e7) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd04c,	// (0x0002c1e7) fshwr2_func_candi_cell_pane_t1

0x372a,	// (0x000228c5) bg_button_pane_cp08

0xa6e3,	// (0x0002987e) cell_fshwr2_syb_bg_pane

0xd067,	// (0x0002c202) cell_fshwr2_syb_bg_pane_g1

0xd06f,	// (0x0002c20a) cell_fshwr2_syb_bg_pane_t1

0x40b3,	// (0x0002324e) main_tmo_pane

0xdd3a,	// (0x0002ced5) uni_indicator_pane_g1_ParamLimits

0xdd4f,	// (0x0002ceea) uni_indicator_pane_g2_ParamLimits

0xdd65,	// (0x0002cf00) uni_indicator_pane_g3_ParamLimits

0x6766,	// (0x00025901) uni_indicator_pane_g4_ParamLimits

0x6766,	// (0x00025901) uni_indicator_pane_g4

0x677a,	// (0x00025915) uni_indicator_pane_g5_ParamLimits

0x677a,	// (0x00025915) uni_indicator_pane_g5

0x677a,	// (0x00025915) uni_indicator_pane_g6_ParamLimits

0x677a,	// (0x00025915) uni_indicator_pane_g6

0xf915,	// (0x0002eab0) uni_indicator_pane_g_ParamLimits

0xe7c4,	// (0x0002d95f) popup_tmo_note_window_ParamLimits

0xe7c4,	// (0x0002d95f) popup_tmo_note_window

0x40b3,	// (0x0002324e) fshwr2_bg_pane

0xd03d,	// (0x0002c1d8) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd03d,	// (0x0002c1d8) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe66,	// (0x0002f001) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe66,	// (0x0002f001) fshwr2_func_candi_cell_pane_g

0x7b9c,	// (0x00026d37) bg_popup_window_pane_cp01

0x3531,	// (0x000226cc) bg_popup_window_pane_g1_cp01

0xa6eb,	// (0x00029886) bg_popup_window_pane_cp22_ParamLimits

0xa6eb,	// (0x00029886) bg_popup_window_pane_cp22

0xa6f9,	// (0x00029894) listscroll_tmo_link_pane_ParamLimits

0xa6f9,	// (0x00029894) listscroll_tmo_link_pane

0xa739,	// (0x000298d4) popup_tmo_note_window_g1_ParamLimits

0xa739,	// (0x000298d4) popup_tmo_note_window_g1

0xa746,	// (0x000298e1) tmo_note_info_pane_ParamLimits

0xa746,	// (0x000298e1) tmo_note_info_pane

0xf448,	// (0x0002e5e3) list_tmo_note_info_pane_g1_ParamLimits

0xf448,	// (0x0002e5e3) list_tmo_note_info_pane_g1

0xa777,	// (0x00029912) list_tmo_note_info_pane_g2_ParamLimits

0xa777,	// (0x00029912) list_tmo_note_info_pane_g2

0x0001,

0xfe6b,	// (0x0002f006) list_tmo_note_info_pane_g_ParamLimits

0xfe6b,	// (0x0002f006) list_tmo_note_info_pane_g

0xa793,	// (0x0002992e) list_tmo_note_info_text_pane_ParamLimits

0xa793,	// (0x0002992e) list_tmo_note_info_text_pane

0xa814,	// (0x000299af) list_tmo_link_pane

0xa821,	// (0x000299bc) scroll_pane_cp20

0xa82e,	// (0x000299c9) list_single_tmo_link_pane_ParamLimits

0xa82e,	// (0x000299c9) list_single_tmo_link_pane

0xa83e,	// (0x000299d9) list_single_tmo_link_pane_t1

0xa84c,	// (0x000299e7) list_tmo_note_info_text_pane_t1_ParamLimits

0xa84c,	// (0x000299e7) list_tmo_note_info_text_pane_t1

0xd3f0,	// (0x0002c58b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd3f0,	// (0x0002c58b) aid_size_touch_scroll_bar_cp01

0xbbfe,	// (0x0002ad99) aid_size_touch_slider_marker

0xc10e,	// (0x0002b2a9) popup_settings_window_ParamLimits

0xc10e,	// (0x0002b2a9) popup_settings_window

0x09fe,	// (0x0001fb99) popup_candi_list_indi_window

0x50e8,	// (0x00024283) aid_touch_navi_pane_ParamLimits

0x2bd9,	// (0x00021d74) rs_clock_indi_pane

0x2be2,	// (0x00021d7d) sctrl_sk_bottom_pane_ParamLimits

0x2bf3,	// (0x00021d8e) sctrl_sk_top_pane_ParamLimits

0x2cda,	// (0x00021e75) popup_fep_tooltip_window

0xa1ba,	// (0x00029355) aid_size_cell_widget_grid_ParamLimits

0xa233,	// (0x000293ce) cell_ai5_widget_pane_g1_ParamLimits

0xa233,	// (0x000293ce) cell_ai5_widget_pane_g1

0xa296,	// (0x00029431) cell_ai5_widget_pane_g6_ParamLimits

0xa2a2,	// (0x0002943d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfde9,	// (0x0002ef84) cell_ai5_widget_pane_g_ParamLimits

0xfde9,	// (0x0002ef84) cell_ai5_widget_pane_g

0xa3e9,	// (0x00029584) cell_ai5_widget_pane_t10_ParamLimits

0xa3e9,	// (0x00029584) cell_ai5_widget_pane_t10

0xa407,	// (0x000295a2) grid_ai5_widget_pane_ParamLimits

0xa4a8,	// (0x00029643) cell_contacts_ai5_widget_pane_ParamLimits

0xa4a8,	// (0x00029643) cell_contacts_ai5_widget_pane

0xa68a,	// (0x00029825) popup_discreet_window_t3_ParamLimits

0xa68a,	// (0x00029825) popup_discreet_window_t3

0xcfa0,	// (0x0002c13b) popup_fshwr2_char_preview_window_ParamLimits

0xcfa0,	// (0x0002c13b) popup_fshwr2_char_preview_window

0xf45f,	// (0x0002e5fa) tmo_note_info_pane_t1

0xf474,	// (0x0002e60f) tmo_note_info_pane_t2

0xf48b,	// (0x0002e626) tmo_note_info_pane_t3

0xa7f0,	// (0x0002998b) tmo_note_info_pane_t4

0xa802,	// (0x0002999d) tmo_note_info_pane_t5

0x0004,

0xfe70,	// (0x0002f00b) tmo_note_info_pane_t

0xa814,	// (0x000299af) list_tmo_link_pane_ParamLimits

0xa821,	// (0x000299bc) scroll_pane_cp20_ParamLimits

0x372a,	// (0x000228c5) bg_popup_fep_char_preview_window_cp01

0xa865,	// (0x00029a00) popup_fshwr2_char_preview_window_t1

0xa873,	// (0x00029a0e) popup_candi_list_indi_window_g1

0xa87c,	// (0x00029a17) bg_cell_contacts_ai5_widget_pane

0xa888,	// (0x00029a23) cell_contacts_ai5_widget_pane_g1

0x827c,	// (0x00027417) cell_contacts_ai5_widget_pane_g2

0xa89d,	// (0x00029a38) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe7b,	// (0x0002f016) cell_contacts_ai5_widget_pane_g

0xa8a9,	// (0x00029a44) cell_contacts_ai5_widget_pane_t1

0x40b3,	// (0x0002324e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa920,	// (0x00029abb) settings_container_pane

0x4d48,	// (0x00023ee3) listscroll_set_pane_copy1

0x72a0,	// (0x0002643b) scroll_pane_cp121_copy1

0x59c8,	// (0x00024b63) set_content_pane_copy1

0xa92c,	// (0x00029ac7) aid_height_set_list_copy1_ParamLimits

0xa92c,	// (0x00029ac7) aid_height_set_list_copy1

0x6972,	// (0x00025b0d) aid_size_parent_copy1_ParamLimits

0x6972,	// (0x00025b0d) aid_size_parent_copy1

0xa938,	// (0x00029ad3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa938,	// (0x00029ad3) button_value_adjust_pane_cp6_copy1

0x506c,	// (0x00024207) list_highlight_pane_cp2_copy1_ParamLimits

0x506c,	// (0x00024207) list_highlight_pane_cp2_copy1

0xa94c,	// (0x00029ae7) list_set_pane_copy1_ParamLimits

0xa94c,	// (0x00029ae7) list_set_pane_copy1

0xa8bb,	// (0x00029a56) main_pane_set_t1_copy1_ParamLimits

0xa8bb,	// (0x00029a56) main_pane_set_t1_copy1

0xa8f5,	// (0x00029a90) main_pane_set_t2_copy1_ParamLimits

0xa8f5,	// (0x00029a90) main_pane_set_t2_copy1

0xa9f9,	// (0x00029b94) main_pane_set_t3_copy1

0xaa07,	// (0x00029ba2) main_pane_set_t4_copy1

0xa914,	// (0x00029aaf) set_content_pane_g1_copy1_ParamLimits

0xa914,	// (0x00029aaf) set_content_pane_g1_copy1

0xaa15,	// (0x00029bb0) setting_code_pane_copy1

0xaa1d,	// (0x00029bb8) setting_slider_graphic_pane_copy1

0xaa1d,	// (0x00029bb8) setting_slider_pane_copy1

0xaa1d,	// (0x00029bb8) setting_text_pane_copy1

0xaa1d,	// (0x00029bb8) setting_volume_pane_copy1

0xaa15,	// (0x00029bb0) settings_code_pane_cp2_copy1

0xaa25,	// (0x00029bc0) settings_code_pane_cp_copy1_ParamLimits

0xaa25,	// (0x00029bc0) settings_code_pane_cp_copy1

0x353a,	// (0x000226d5) volume_set_pane_copy1

0xaa39,	// (0x00029bd4) volume_set_pane_g10_copy1

0xaa41,	// (0x00029bdc) volume_set_pane_g1_copy1

0xaa49,	// (0x00029be4) volume_set_pane_g2_copy1

0xaa51,	// (0x00029bec) volume_set_pane_g3_copy1

0xaa59,	// (0x00029bf4) volume_set_pane_g4_copy1

0xaa61,	// (0x00029bfc) volume_set_pane_g5_copy1

0xaa69,	// (0x00029c04) volume_set_pane_g6_copy1

0xaa71,	// (0x00029c0c) volume_set_pane_g7_copy1

0xaa79,	// (0x00029c14) volume_set_pane_g8_copy1

0xaa81,	// (0x00029c1c) volume_set_pane_g9_copy1

0x381e,	// (0x000229b9) bg_set_opt_pane_cp_copy1_ParamLimits

0x381e,	// (0x000229b9) bg_set_opt_pane_cp_copy1

0x3542,	// (0x000226dd) setting_slider_pane_t1_copy1_ParamLimits

0x3542,	// (0x000226dd) setting_slider_pane_t1_copy1

0x3560,	// (0x000226fb) setting_slider_pane_t2_copy1_ParamLimits

0x3560,	// (0x000226fb) setting_slider_pane_t2_copy1

0x357a,	// (0x00022715) setting_slider_pane_t3_copy1_ParamLimits

0x357a,	// (0x00022715) setting_slider_pane_t3_copy1

0x3592,	// (0x0002272d) slider_set_pane_copy1_ParamLimits

0x3592,	// (0x0002272d) slider_set_pane_copy1

0x410b,	// (0x000232a6) set_opt_bg_pane_g1_copy2

0x4113,	// (0x000232ae) set_opt_bg_pane_g2_copy2

0xaa89,	// (0x00029c24) set_opt_bg_pane_g3_copy2

0x4123,	// (0x000232be) set_opt_bg_pane_g4_copy2

0x412b,	// (0x000232c6) set_opt_bg_pane_g5_copy2

0x4133,	// (0x000232ce) set_opt_bg_pane_g6_copy2

0xaa93,	// (0x00029c2e) set_opt_bg_pane_g7_copy2

0xaa9b,	// (0x00029c36) set_opt_bg_pane_g8_copy2

0xaaa5,	// (0x00029c40) set_opt_bg_pane_g9_copy2

0x35a8,	// (0x00022743) aid_size_touch_slider_mark_copy1_ParamLimits

0x35a8,	// (0x00022743) aid_size_touch_slider_mark_copy1

0xaaaf,	// (0x00029c4a) slider_set_pane_g1_copy1

0x35bc,	// (0x00022757) slider_set_pane_g2_copy1

0x26bc,	// (0x00021857) slider_set_pane_g3_copy1_ParamLimits

0x26bc,	// (0x00021857) slider_set_pane_g3_copy1

0x26d0,	// (0x0002186b) slider_set_pane_g4_copy1_ParamLimits

0x26d0,	// (0x0002186b) slider_set_pane_g4_copy1

0x26e8,	// (0x00021883) slider_set_pane_g5_copy1_ParamLimits

0x26e8,	// (0x00021883) slider_set_pane_g5_copy1

0x26bc,	// (0x00021857) slider_set_pane_g6_copy1_ParamLimits

0x26bc,	// (0x00021857) slider_set_pane_g6_copy1

0x35c4,	// (0x0002275f) slider_set_pane_g7_copy1_ParamLimits

0x35c4,	// (0x0002275f) slider_set_pane_g7_copy1

0x373e,	// (0x000228d9) bg_set_opt_pane_cp2_copy1

0xaab8,	// (0x00029c53) setting_slider_graphic_pane_g1_copy1

0xaac1,	// (0x00029c5c) setting_slider_graphic_pane_t1_copy1

0xaad1,	// (0x00029c6c) setting_slider_graphic_pane_t2_copy1

0xaae1,	// (0x00029c7c) slider_set_pane_cp_copy1

0xaaf1,	// (0x00029c8c) input_focus_pane_cp1_copy1

0xaafa,	// (0x00029c95) list_set_text_pane_copy1

0xab02,	// (0x00029c9d) setting_text_pane_g1_copy1

0x0235,	// (0x0001f3d0) set_text_pane_t1_copy1

0xaaf1,	// (0x00029c8c) input_focus_pane_cp2_copy1

0xab02,	// (0x00029c9d) setting_code_pane_g1_copy1

0xab0b,	// (0x00029ca6) setting_code_pane_t1_copy1

0xab19,	// (0x00029cb4) list_set_graphic_pane_copy1

0x373e,	// (0x000228d9) bg_set_opt_pane_cp4_copy1

0x4a43,	// (0x00023bde) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a43,	// (0x00023bde) list_set_graphic_pane_g1_copy1

0xab2c,	// (0x00029cc7) list_set_graphic_pane_g2_copy1

0x4a5b,	// (0x00023bf6) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a5b,	// (0x00023bf6) list_set_graphic_pane_t1_copy1

0x7b9c,	// (0x00026d37) rs_clock_indi_pane_g1

0xab34,	// (0x00029ccf) rs_clock_indi_pane_t1

0xab42,	// (0x00029cdd) rs_indi_pane

0xab4a,	// (0x00029ce5) rs_indi_pane_g1

0xab53,	// (0x00029cee) rs_indi_pane_g2

0xab5c,	// (0x00029cf7) rs_indi_pane_g3

0x0002,

0xfe82,	// (0x0002f01d) rs_indi_pane_g

0x4d48,	// (0x00023ee3) bg_popup_preview_window_pane_cp03

0xab65,	// (0x00029d00) popup_fep_tooltip_window_t1

0x8818,	// (0x000279b3) popup_note2_window_g2_ParamLimits

0x8818,	// (0x000279b3) popup_note2_window_g2

0x0001,

0xfc44,	// (0x0002eddf) popup_note2_window_g_ParamLimits

0xfc44,	// (0x0002eddf) popup_note2_window_g

0x8d13,	// (0x00027eae) bg_popup_sub_pane_cp11_ParamLimits

0x8d20,	// (0x00027ebb) cell_ai3_links_pane_g1_ParamLimits

0x8d37,	// (0x00027ed2) cell_ai3_links_pane_t1

0x0235,	// (0x0001f3d0) set_text_pane_t1_copy1_ParamLimits

0x4c59,	// (0x00023df4) cell_graphic_popup_pane_cp2_ParamLimits

0x4c59,	// (0x00023df4) cell_graphic_popup_pane_cp2

0xab73,	// (0x00029d0e) cell_graphic_popup_pane_g1_cp2

0x3dfe,	// (0x00022f99) cell_graphic_popup_pane_g2_cp2

0xab7b,	// (0x00029d16) cell_graphic_popup_pane_g3_cp2

0xab83,	// (0x00029d1e) cell_graphic_popup_pane_t2_cp2

0x3e0f,	// (0x00022faa) grid_highlight_pane_cp3_cp2

0x4450,	// (0x000235eb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x40b3,	// (0x0002324e) main_tmo_pane_ParamLimits

0xe7b8,	// (0x0002d953) popup_tmo_big_image_note_window

0xa222,	// (0x000293bd) cell_ai5_widget_list_pane

0xa22a,	// (0x000293c5) cell_ai5_widget_lrg_icon_pane

0xf45f,	// (0x0002e5fa) tmo_note_info_pane_t1_ParamLimits

0xf474,	// (0x0002e60f) tmo_note_info_pane_t2_ParamLimits

0xf48b,	// (0x0002e626) tmo_note_info_pane_t3_ParamLimits

0xa7f0,	// (0x0002998b) tmo_note_info_pane_t4_ParamLimits

0xa802,	// (0x0002999d) tmo_note_info_pane_t5_ParamLimits

0xfe70,	// (0x0002f00b) tmo_note_info_pane_t_ParamLimits

0xa920,	// (0x00029abb) settings_container_pane_ParamLimits

0xaae9,	// (0x00029c84) indicator_popup_pane_cp5

0xaae9,	// (0x00029c84) indicator_popup_pane_cp6

0xab19,	// (0x00029cb4) list_set_graphic_pane_copy1_ParamLimits

0x372a,	// (0x000228c5) bg_popup_window_pane_cp23

0xab91,	// (0x00029d2c) popup_tmo_big_image_note_window_g1

0xab9b,	// (0x00029d36) popup_tmo_big_image_note_window_t1

0xabab,	// (0x00029d46) popup_tmo_big_image_note_window_t2

0xabbb,	// (0x00029d56) popup_tmo_big_image_note_window_t3

0x0002,

0xfe89,	// (0x0002f024) popup_tmo_big_image_note_window_t

0x7b9c,	// (0x00026d37) cell_ai5_widget_lrg_icon_pane_g1

0xabcb,	// (0x00029d66) cell_ai5_widget_lrg_icon_pane_t1

0xabd9,	// (0x00029d74) cell_ai5_widget_list_row_pane_ParamLimits

0xabd9,	// (0x00029d74) cell_ai5_widget_list_row_pane

0xabf0,	// (0x00029d8b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xabf0,	// (0x00029d8b) cell_ai5_widget_list_row_pane_g1

0xabfd,	// (0x00029d98) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xabfd,	// (0x00029d98) cell_ai5_widget_list_row_pane_t1

0xac2e,	// (0x00029dc9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xac2e,	// (0x00029dc9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfe90,	// (0x0002f02b) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe90,	// (0x0002f02b) cell_ai5_widget_list_row_pane_t

0x372a,	// (0x000228c5) main_fep_vtchi_ss_pane

0xac76,	// (0x00029e11) popup_fep_char_pre_window

0xac7e,	// (0x00029e19) popup_fep_ituss_window

0xf4a0,	// (0x0002e63b) popup_fep_vkbss_window

0xf4ad,	// (0x0002e648) grid_vkbss_keypad_pane_ParamLimits

0xf4ad,	// (0x0002e648) grid_vkbss_keypad_pane

0xacd9,	// (0x00029e74) ituss_keypad_pane

0x35e6,	// (0x00022781) aid_vkbss_key_offset_ParamLimits

0x35e6,	// (0x00022781) aid_vkbss_key_offset

0xd07e,	// (0x0002c219) cell_vkbss_key_pane_ParamLimits

0xd07e,	// (0x0002c219) cell_vkbss_key_pane

0xace8,	// (0x00029e83) bg_cell_vkbss_key_g1_ParamLimits

0xace8,	// (0x00029e83) bg_cell_vkbss_key_g1

0xf4bd,	// (0x0002e658) cell_vkbss_key_3p_pane_ParamLimits

0xf4bd,	// (0x0002e658) cell_vkbss_key_3p_pane

0xf4d7,	// (0x0002e672) cell_vkbss_key_g1_ParamLimits

0xf4d7,	// (0x0002e672) cell_vkbss_key_g1

0xf4f1,	// (0x0002e68c) cell_vkbss_key_t1_ParamLimits

0xf4f1,	// (0x0002e68c) cell_vkbss_key_t1

0x3608,	// (0x000227a3) cell_ituss_key_pane_ParamLimits

0x3608,	// (0x000227a3) cell_ituss_key_pane

0xad47,	// (0x00029ee2) bg_cell_ituss_key_g1_ParamLimits

0xad47,	// (0x00029ee2) bg_cell_ituss_key_g1

0xad53,	// (0x00029eee) cell_ituss_key_pane_g1_ParamLimits

0xad53,	// (0x00029eee) cell_ituss_key_pane_g1

0x3619,	// (0x000227b4) cell_ituss_key_pane_g2_ParamLimits

0x3619,	// (0x000227b4) cell_ituss_key_pane_g2

0x0002,

0xfe97,	// (0x0002f032) cell_ituss_key_pane_g_ParamLimits

0xfe97,	// (0x0002f032) cell_ituss_key_pane_g

0x3645,	// (0x000227e0) cell_ituss_key_t1_ParamLimits

0x3645,	// (0x000227e0) cell_ituss_key_t1

0x367f,	// (0x0002281a) cell_ituss_key_t2_ParamLimits

0x367f,	// (0x0002281a) cell_ituss_key_t2

0x36b0,	// (0x0002284b) cell_ituss_key_t3_ParamLimits

0x36b0,	// (0x0002284b) cell_ituss_key_t3

0x367f,	// (0x0002281a) cell_ituss_key_t4_ParamLimits

0x367f,	// (0x0002281a) cell_ituss_key_t4

0x0004,

0xfe9e,	// (0x0002f039) cell_ituss_key_t_ParamLimits

0xfe9e,	// (0x0002f039) cell_ituss_key_t

0xad7f,	// (0x00029f1a) cell_vkbss_key_3p_pane_g1

0xad87,	// (0x00029f22) cell_vkbss_key_3p_pane_g2

0xad8f,	// (0x00029f2a) cell_vkbss_key_3p_pane_g3

0x0002,

0xfea9,	// (0x0002f044) cell_vkbss_key_3p_pane_g

0x4d48,	// (0x00023ee3) bg_popup_fep_char_preview_window_cp02

0xad97,	// (0x00029f32) popup_fep_char_pre_window_t1

0xf3a3,	// (0x0002e53e) main_ai5_sk_pane

0xa87c,	// (0x00029a17) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa888,	// (0x00029a23) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x827c,	// (0x00027417) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa89d,	// (0x00029a38) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe7b,	// (0x0002f016) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa8a9,	// (0x00029a44) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x40b3,	// (0x0002324e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf51c,	// (0x0002e6b7) main_ai5_sk_pane_g1

0x5a5c,	// (0x00024bf7) popup_query_code_window_g1

0xac94,	// (0x00029e2f) popup_fep_vkb_icf_pane

0xacb3,	// (0x00029e4e) popup_fep_vtchi_icf_pane

0xadae,	// (0x00029f49) bg_icf_pane

0xadba,	// (0x00029f55) list_vkb_icf_pane

0xadc9,	// (0x00029f64) bg_icf_pane_cp01

0xaddc,	// (0x00029f77) vtchi_icf_list_pane

0xadec,	// (0x00029f87) list_vkb_icf_pane_t1_ParamLimits

0xadec,	// (0x00029f87) list_vkb_icf_pane_t1

0xae02,	// (0x00029f9d) vtchi_icf_list_pane_t1_ParamLimits

0xae02,	// (0x00029f9d) vtchi_icf_list_pane_t1

0xac7e,	// (0x00029e19) popup_fep_ituss_window_ParamLimits

0xacb3,	// (0x00029e4e) popup_fep_vtchi_icf_pane_ParamLimits

0xacd9,	// (0x00029e74) ituss_keypad_pane_ParamLimits

0x35da,	// (0x00022775) ituss_sks_pane

0xadae,	// (0x00029f49) bg_icf_pane_ParamLimits

0xac56,	// (0x00029df1) icf_edit_indi_pane_ParamLimits

0xac56,	// (0x00029df1) icf_edit_indi_pane

0xadba,	// (0x00029f55) list_vkb_icf_pane_ParamLimits

0xadc9,	// (0x00029f64) bg_icf_pane_cp01_ParamLimits

0xac69,	// (0x00029e04) icf_edit_indi_pane_cp01_ParamLimits

0xac69,	// (0x00029e04) icf_edit_indi_pane_cp01

0xade4,	// (0x00029f7f) vtchi_query_pane

0xa031,	// (0x000291cc) icf_edit_indi_pane_g1_ParamLimits

0xa031,	// (0x000291cc) icf_edit_indi_pane_g1

0xf525,	// (0x0002e6c0) icf_edit_indi_pane_g2_ParamLimits

0xf525,	// (0x0002e6c0) icf_edit_indi_pane_g2

0x0001,

0xfec1,	// (0x0002f05c) icf_edit_indi_pane_g_ParamLimits

0xfec1,	// (0x0002f05c) icf_edit_indi_pane_g

0xf537,	// (0x0002e6d2) icf_edit_indi_pane_t1

0xae1c,	// (0x00029fb7) bg_input_focus_pane_cp042

0x3fe2,	// (0x0002317d) vtchi_button_pane

0xae25,	// (0x00029fc0) vtchi_query_pane_t1

0xae33,	// (0x00029fce) vtchi_query_pane_t2

0xae41,	// (0x00029fdc) vtchi_query_pane_t3

0x0002,

0xfeb0,	// (0x0002f04b) vtchi_query_pane_t

0x372a,	// (0x000228c5) bg_button_pane_cp13

0xae4f,	// (0x00029fea) vtchi_button_pane_g1

0x36f3,	// (0x0002288e) ituss_sks_pane_g1

0x36fe,	// (0x00022899) ituss_sks_pane_g2

0x0001,

0xfeb7,	// (0x0002f052) ituss_sks_pane_g

0xae57,	// (0x00029ff2) ituss_sks_pane_t1

0xae65,	// (0x0002a000) ituss_sks_pane_t2

0x0001,

0xfebc,	// (0x0002f057) ituss_sks_pane_t

0x7627,	// (0x000267c2) indicator_nsta_pane_cp_g1

0x762f,	// (0x000267ca) indicator_nsta_pane_cp_g2

0x7637,	// (0x000267d2) indicator_nsta_pane_cp_g3

0x7627,	// (0x000267c2) indicator_nsta_pane_cp_g4

0x762f,	// (0x000267ca) indicator_nsta_pane_cp_g5

0x7637,	// (0x000267d2) indicator_nsta_pane_cp_g6

0x0005,

0xfa8e,	// (0x0002ec29) indicator_nsta_pane_cp_g

0xf1bb,	// (0x0002e356) cell_graphic2_pane_t2_ParamLimits

0xf1bb,	// (0x0002e356) cell_graphic2_pane_t2

0x0001,

0x00e1,	// (0x0001f27c) cell_graphic2_pane_t_ParamLimits

0x00e1,	// (0x0001f27c) cell_graphic2_pane_t

0xf1ef,	// (0x0002e38a) cell_graphic2_control_pane_t1

0xd59b,	// (0x0002c736) signal_pane_g3_ParamLimits

0xd59b,	// (0x0002c736) signal_pane_g3

0xd5af,	// (0x0002c74a) signal_pane_g4_ParamLimits

0xd5af,	// (0x0002c74a) signal_pane_g4

0xac40,	// (0x00029ddb) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xac40,	// (0x00029ddb) cell_ai5_widget_list_row_pane_t3

0xad6d,	// (0x00029f08) cell_ituss_key_pane_t1_ParamLimits

0xad6d,	// (0x00029f08) cell_ituss_key_pane_t1

0x5695,	// (0x00024830) form_field_data_wide_pane_vc_t2_ParamLimits

0x5695,	// (0x00024830) form_field_data_wide_pane_vc_t2

0x56a9,	// (0x00024844) form_field_data_wide_pane_vc_t3_ParamLimits

0x56a9,	// (0x00024844) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x0002e998) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x0002e998) form_field_data_wide_pane_vc_t

0x72e2,	// (0x0002647d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x72e2,	// (0x0002647d) form_field_slider_wide_pane_vc_t3

0x73c0,	// (0x0002655b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x73c0,	// (0x0002655b) form_field_popup_wide_pane_vc_t2

0x73e3,	// (0x0002657e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x73e3,	// (0x0002657e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa7d,	// (0x0002ec18) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0002ec18) form_field_popup_wide_pane_vc_t

0xcf20,	// (0x0002c0bb) aid_fshwr2_btn_pane_ParamLimits

0xcf31,	// (0x0002c0cc) aid_fshwr2_syb_pane_ParamLimits

0xcf42,	// (0x0002c0dd) aid_fshwr2_txt_pane_ParamLimits

0x40b3,	// (0x0002324e) fshwr2_bg_pane_ParamLimits

0xcf4e,	// (0x0002c0e9) fshwr2_func_candi_pane_ParamLimits

0xcf6d,	// (0x0002c108) fshwr2_hwr_syb_pane_ParamLimits

0xcf88,	// (0x0002c123) fshwr2_icf_pane_ParamLimits

0x0f6d,	// (0x00020108) list_double_graphic_pane_vc_g4_ParamLimits

0x0f6d,	// (0x00020108) list_double_graphic_pane_vc_g4

0x3639,	// (0x000227d4) cell_ituss_key_pane_g3_ParamLimits

0x3639,	// (0x000227d4) cell_ituss_key_pane_g3

0x36e1,	// (0x0002287c) cell_ituss_key_t5_ParamLimits

0x36e1,	// (0x0002287c) cell_ituss_key_t5

0xf4a0,	// (0x0002e63b) popup_fep_vkbss_window_ParamLimits

0xa1b1,	// (0x0002934c) aid_cell_ai5_quarter

0xf537,	// (0x0002e6d2) icf_edit_indi_pane_t1_ParamLimits

0x3b4f,	// (0x00022cea) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3b4f,	// (0x00022cea) aid_tch_indicator_popup_pane_cp2

0x3b62,	// (0x00022cfd) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3b62,	// (0x00022cfd) aid_tch_query_popup_data_pane_cp2

0x5a04,	// (0x00024b9f) aid_tch_query_popup_pane_ParamLimits

0x5a04,	// (0x00024b9f) aid_tch_query_popup_pane

0x5a04,	// (0x00024b9f) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x5a04,	// (0x00024b9f) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small

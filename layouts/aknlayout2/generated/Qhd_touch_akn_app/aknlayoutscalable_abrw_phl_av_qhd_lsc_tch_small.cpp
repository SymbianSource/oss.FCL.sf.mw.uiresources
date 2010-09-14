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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003150b };

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
0xb288,	// (0x0003c793) Screen

0xb294,	// (0x0003c79f) application_window_ParamLimits

0xb294,	// (0x0003c79f) application_window

0xe100,	// (0x0003f60b) screen_g1

0xb2cc,	// (0x0003c7d7) area_bottom_pane_ParamLimits

0xb2cc,	// (0x0003c7d7) area_bottom_pane

0xf0b2,	// (0x000405bd) area_top_pane_ParamLimits

0xf0b2,	// (0x000405bd) area_top_pane

0xf150,	// (0x0004065b) main_pane_ParamLimits

0xf150,	// (0x0004065b) main_pane

0x2c5f,	// (0x0003416a) misc_graphics

0xd3e6,	// (0x0003e8f1) battery_pane_ParamLimits

0xd3e6,	// (0x0003e8f1) battery_pane

0x5593,	// (0x00036a9e) bg_status_flat_pane_g8

0x559b,	// (0x00036aa6) bg_status_flat_pane_g9

0x4979,	// (0x00035e84) context_pane_ParamLimits

0x4979,	// (0x00035e84) context_pane

0xd551,	// (0x0003ea5c) navi_pane_ParamLimits

0xd551,	// (0x0003ea5c) navi_pane

0xd5cf,	// (0x0003eada) signal_pane_ParamLimits

0xd5cf,	// (0x0003eada) signal_pane

0x0008,

0xf84f,	// (0x00040d5a) bg_status_flat_pane_g

0xd65f,	// (0x0003eb6a) status_pane_g1_ParamLimits

0xd65f,	// (0x0003eb6a) status_pane_g1

0xd675,	// (0x0003eb80) status_pane_g2_ParamLimits

0xd675,	// (0x0003eb80) status_pane_g2

0x4ba0,	// (0x000360ab) status_pane_g3_ParamLimits

0x4ba0,	// (0x000360ab) status_pane_g3

0x0004,

0xf77b,	// (0x00040c86) status_pane_g_ParamLimits

0xf77b,	// (0x00040c86) status_pane_g

0xd681,	// (0x0003eb8c) title_pane_ParamLimits

0xd681,	// (0x0003eb8c) title_pane

0xd6e4,	// (0x0003ebef) uni_indicator_pane_ParamLimits

0xd6e4,	// (0x0003ebef) uni_indicator_pane

0x47e1,	// (0x00035cec) bg_list_pane_ParamLimits

0x47e1,	// (0x00035cec) bg_list_pane

0xc126,	// (0x0003d631) find_pane

0x4d9f,	// (0x000362aa) listscroll_app_pane_ParamLimits

0x4d9f,	// (0x000362aa) listscroll_app_pane

0x480d,	// (0x00035d18) listscroll_form_pane

0xb274,	// (0x0003c77f) listscroll_gen_pane_ParamLimits

0xb274,	// (0x0003c77f) listscroll_gen_pane

0x09a5,	// (0x00031eb0) listscroll_set_pane

0x6120,	// (0x0003762b) main_idle_act_pane

0x44dd,	// (0x000359e8) main_idle_trad_pane

0x44dd,	// (0x000359e8) main_list_empty_pane

0x4801,	// (0x00035d0c) main_midp_pane

0x4827,	// (0x00035d32) main_pane_g1_ParamLimits

0x4827,	// (0x00035d32) main_pane_g1

0xc12e,	// (0x0003d639) popup_ai_message_window_ParamLimits

0xc12e,	// (0x0003d639) popup_ai_message_window

0xc1bf,	// (0x0003d6ca) popup_fep_china_uni_window_ParamLimits

0xc1bf,	// (0x0003d6ca) popup_fep_china_uni_window

0x0ac5,	// (0x00031fd0) popup_fep_japan_candidate_window_ParamLimits

0x0ac5,	// (0x00031fd0) popup_fep_japan_candidate_window

0x0ae5,	// (0x00031ff0) popup_fep_japan_predictive_window_ParamLimits

0x0ae5,	// (0x00031ff0) popup_fep_japan_predictive_window

0xc21b,	// (0x0003d726) popup_find_window

0xc238,	// (0x0003d743) popup_grid_graphic_window_ParamLimits

0xc238,	// (0x0003d743) popup_grid_graphic_window

0x0b4e,	// (0x00032059) popup_large_graphic_colour_window

0xc2dc,	// (0x0003d7e7) popup_menu_window_ParamLimits

0xc2dc,	// (0x0003d7e7) popup_menu_window

0xc4ae,	// (0x0003d9b9) popup_note_image_window

0xc474,	// (0x0003d97f) popup_note_wait_window_ParamLimits

0xc474,	// (0x0003d97f) popup_note_wait_window

0xc4c6,	// (0x0003d9d1) popup_note_window_ParamLimits

0xc4c6,	// (0x0003d9d1) popup_note_window

0xc56c,	// (0x0003da77) popup_query_code_window_ParamLimits

0xc56c,	// (0x0003da77) popup_query_code_window

0x0d96,	// (0x000322a1) popup_query_data_code_window_ParamLimits

0x0d96,	// (0x000322a1) popup_query_data_code_window

0xc5a6,	// (0x0003dab1) popup_query_data_window_ParamLimits

0xc5a6,	// (0x0003dab1) popup_query_data_window

0xc628,	// (0x0003db33) popup_query_sat_info_window_ParamLimits

0xc628,	// (0x0003db33) popup_query_sat_info_window

0xc6bf,	// (0x0003dbca) popup_snote_single_graphic_window_ParamLimits

0xc6bf,	// (0x0003dbca) popup_snote_single_graphic_window

0xc6bf,	// (0x0003dbca) popup_snote_single_text_window_ParamLimits

0xc6bf,	// (0x0003dbca) popup_snote_single_text_window

0x0e1d,	// (0x00032328) popup_sub_window_general

0x0f4d,	// (0x00032458) popup_window_general_ParamLimits

0x0f4d,	// (0x00032458) popup_window_general

0x4835,	// (0x00035d40) power_save_pane

0xbfa7,	// (0x0003d4b2) control_pane_g1_ParamLimits

0xbfa7,	// (0x0003d4b2) control_pane_g1

0xbfd0,	// (0x0003d4db) control_pane_g2_ParamLimits

0xbfd0,	// (0x0003d4db) control_pane_g2

0x47a4,	// (0x00035caf) control_pane_g3_ParamLimits

0x47a4,	// (0x00035caf) control_pane_g3

0x0007,

0xf763,	// (0x00040c6e) control_pane_g_ParamLimits

0xf763,	// (0x00040c6e) control_pane_g

0xc011,	// (0x0003d51c) control_pane_t1_ParamLimits

0xc011,	// (0x0003d51c) control_pane_t1

0xc079,	// (0x0003d584) control_pane_t2_ParamLimits

0xc079,	// (0x0003d584) control_pane_t2

0x0002,

0xf774,	// (0x00040c7f) control_pane_t_ParamLimits

0xf774,	// (0x00040c7f) control_pane_t

0xd293,	// (0x0003e79e) navi_navi_volume_pane_cp1

0xd29b,	// (0x0003e7a6) status_small_icon_pane

0x46d9,	// (0x00035be4) status_small_pane_g1_ParamLimits

0x46d9,	// (0x00035be4) status_small_pane_g1

0xd2a3,	// (0x0003e7ae) status_small_pane_g2_ParamLimits

0xd2a3,	// (0x0003e7ae) status_small_pane_g2

0xd2af,	// (0x0003e7ba) status_small_pane_g3_ParamLimits

0xd2af,	// (0x0003e7ba) status_small_pane_g3

0xd2bb,	// (0x0003e7c6) status_small_pane_g4_ParamLimits

0xd2bb,	// (0x0003e7c6) status_small_pane_g4

0xd2c7,	// (0x0003e7d2) status_small_pane_g5_ParamLimits

0xd2c7,	// (0x0003e7d2) status_small_pane_g5

0xd2d5,	// (0x0003e7e0) status_small_pane_g6_ParamLimits

0xd2d5,	// (0x0003e7e0) status_small_pane_g6

0x0007,

0xf752,	// (0x00040c5d) status_small_pane_g_ParamLimits

0xf752,	// (0x00040c5d) status_small_pane_g

0xd304,	// (0x0003e80f) status_small_pane_t1

0xd326,	// (0x0003e831) status_small_wait_pane_ParamLimits

0xd326,	// (0x0003e831) status_small_wait_pane

0xd15e,	// (0x0003e669) aid_levels_signal_ParamLimits

0xd15e,	// (0x0003e669) aid_levels_signal

0xd176,	// (0x0003e681) signal_pane_g1_ParamLimits

0xd176,	// (0x0003e681) signal_pane_g1

0xd191,	// (0x0003e69c) signal_pane_g2_ParamLimits

0xd191,	// (0x0003e69c) signal_pane_g2

0x0003,

0xf6e3,	// (0x00040bee) signal_pane_g_ParamLimits

0xf6e3,	// (0x00040bee) signal_pane_g

0x3fa5,	// (0x000354b0) context_pane_g1

0xb4aa,	// (0x0003c9b5) title_pane_g1

0xb4e1,	// (0x0003c9ec) title_pane_t1

0x2d07,	// (0x00034212) title_pane_t2

0x2d2d,	// (0x00034238) title_pane_t3

0x0002,

0xf532,	// (0x00040a3d) title_pane_t

0xd70c,	// (0x0003ec17) aid_levels_battery_ParamLimits

0xd70c,	// (0x0003ec17) aid_levels_battery

0xd728,	// (0x0003ec33) battery_pane_g1_ParamLimits

0xd728,	// (0x0003ec33) battery_pane_g1

0xd745,	// (0x0003ec50) battery_pane_g2_ParamLimits

0xd745,	// (0x0003ec50) battery_pane_g2

0x0001,

0xf786,	// (0x00040c91) battery_pane_g_ParamLimits

0xf786,	// (0x00040c91) battery_pane_g

0xd906,	// (0x0003ee11) uni_indicator_pane_g1

0xd91c,	// (0x0003ee27) uni_indicator_pane_g2

0xd932,	// (0x0003ee3d) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x00040e02) uni_indicator_pane_g

0x4346,	// (0x00035851) navi_icon_pane_ParamLimits

0x4346,	// (0x00035851) navi_icon_pane

0x4284,	// (0x0003578f) navi_midp_pane

0x4362,	// (0x0003586d) navi_navi_pane

0x436c,	// (0x00035877) navi_text_pane_ParamLimits

0x436c,	// (0x00035877) navi_text_pane

0xe100,	// (0x0003f60b) status_small_wait_pane_g1

0x3182,	// (0x0003468d) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x00040dfd) status_small_wait_pane_g

0x5bfa,	// (0x00037105) navi_navi_icon_text_pane

0x5c02,	// (0x0003710d) navi_navi_pane_g1_ParamLimits

0x5c02,	// (0x0003710d) navi_navi_pane_g1

0x5c14,	// (0x0003711f) navi_navi_pane_g2_ParamLimits

0x5c14,	// (0x0003711f) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x00040dcb) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x00040dcb) navi_navi_pane_g

0x5c26,	// (0x00037131) navi_navi_tabs_pane

0x5c2f,	// (0x0003713a) navi_navi_text_pane

0x5bfa,	// (0x00037105) navi_navi_volume_pane

0x5bd6,	// (0x000370e1) navi_text_pane_t1

0x5bca,	// (0x000370d5) navi_icon_pane_g1

0x5b1d,	// (0x00037028) navi_navi_text_pane_t1

0x132a,	// (0x00032835) navi_navi_volume_pane_g1

0x1332,	// (0x0003283d) volume_small_pane

0x5a77,	// (0x00036f82) navi_navi_icon_text_pane_g1

0x5a7f,	// (0x00036f8a) navi_navi_icon_text_pane_t1

0x4362,	// (0x0003586d) navi_tabs_2_long_pane

0x4362,	// (0x0003586d) navi_tabs_2_pane

0x4362,	// (0x0003586d) navi_tabs_3_long_pane

0x4362,	// (0x0003586d) navi_tabs_3_pane

0x4362,	// (0x0003586d) navi_tabs_4_pane

0x130a,	// (0x00032815) tabs_2_active_pane_ParamLimits

0x130a,	// (0x00032815) tabs_2_active_pane

0x131a,	// (0x00032825) tabs_2_passive_pane_ParamLimits

0x131a,	// (0x00032825) tabs_2_passive_pane

0x12d8,	// (0x000327e3) tabs_3_active_pane_ParamLimits

0x12d8,	// (0x000327e3) tabs_3_active_pane

0x12e8,	// (0x000327f3) tabs_3_passive_pane_ParamLimits

0x12e8,	// (0x000327f3) tabs_3_passive_pane

0x12f9,	// (0x00032804) tabs_3_passive_pane_cp_ParamLimits

0x12f9,	// (0x00032804) tabs_3_passive_pane_cp

0x1294,	// (0x0003279f) tabs_4_active_pane_ParamLimits

0x1294,	// (0x0003279f) tabs_4_active_pane

0x12a5,	// (0x000327b0) tabs_4_passive_pane_ParamLimits

0x12a5,	// (0x000327b0) tabs_4_passive_pane

0x12b6,	// (0x000327c1) tabs_4_passive_pane_cp_ParamLimits

0x12b6,	// (0x000327c1) tabs_4_passive_pane_cp

0x12c7,	// (0x000327d2) tabs_4_passive_pane_cp2_ParamLimits

0x12c7,	// (0x000327d2) tabs_4_passive_pane_cp2

0x1270,	// (0x0003277b) tabs_2_long_active_pane_ParamLimits

0x1270,	// (0x0003277b) tabs_2_long_active_pane

0x1282,	// (0x0003278d) tabs_2_long_passive_pane_ParamLimits

0x1282,	// (0x0003278d) tabs_2_long_passive_pane

0x1231,	// (0x0003273c) tabs_3_long_active_pane_ParamLimits

0x1231,	// (0x0003273c) tabs_3_long_active_pane

0x1244,	// (0x0003274f) tabs_3_long_passive_pane_ParamLimits

0x1244,	// (0x0003274f) tabs_3_long_passive_pane

0x125d,	// (0x00032768) tabs_3_long_passive_pane_cp_ParamLimits

0x125d,	// (0x00032768) tabs_3_long_passive_pane_cp

0x11d7,	// (0x000326e2) volume_small_pane_g1

0x11e0,	// (0x000326eb) volume_small_pane_g2

0x11e9,	// (0x000326f4) volume_small_pane_g3

0x11f2,	// (0x000326fd) volume_small_pane_g4

0x11fb,	// (0x00032706) volume_small_pane_g5

0x1204,	// (0x0003270f) volume_small_pane_g6

0x120d,	// (0x00032718) volume_small_pane_g7

0x1216,	// (0x00032721) volume_small_pane_g8

0x121f,	// (0x0003272a) volume_small_pane_g9

0x1228,	// (0x00032733) volume_small_pane_g10

0x0009,

0xf88c,	// (0x00040d97) volume_small_pane_g

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp2_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp2

0x2d4d,	// (0x00034258) tabs_3_active_pane_g1

0xb56d,	// (0x0003ca78) tabs_3_active_pane_t1

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp2_ParamLimits

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp2

0x2d4d,	// (0x00034258) tabs_3_passive_pane_g1

0xb56d,	// (0x0003ca78) tabs_3_passive_pane_t1

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp3_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp3

0x2d67,	// (0x00034272) tabs_4_active_pane_g1

0xb57f,	// (0x0003ca8a) tabs_4_active_pane_t1

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp3_ParamLimits

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp3

0x2d67,	// (0x00034272) tabs_4_1_passive_pane_g1

0xb57f,	// (0x0003ca8a) tabs_4_1_passive_pane_t1

0x4801,	// (0x00035d0c) list_highlight_pane_cp2

0xd9b8,	// (0x0003eec3) list_set_pane_ParamLimits

0xd9b8,	// (0x0003eec3) list_set_pane

0xda52,	// (0x0003ef5d) main_pane_set_t1_ParamLimits

0xda52,	// (0x0003ef5d) main_pane_set_t1

0xda72,	// (0x0003ef7d) main_pane_set_t2_ParamLimits

0xda72,	// (0x0003ef7d) main_pane_set_t2

0xda86,	// (0x0003ef91) main_pane_set_t3_ParamLimits

0xda86,	// (0x0003ef91) main_pane_set_t3

0xda98,	// (0x0003efa3) main_pane_set_t4_ParamLimits

0xda98,	// (0x0003efa3) main_pane_set_t4

0x0003,

0xf95c,	// (0x00040e67) main_pane_set_t_ParamLimits

0xf95c,	// (0x00040e67) main_pane_set_t

0xdaaa,	// (0x0003efb5) setting_code_pane

0xdab4,	// (0x0003efbf) setting_slider_graphic_pane

0xdab4,	// (0x0003efbf) setting_slider_pane

0xdab4,	// (0x0003efbf) setting_text_pane

0xdab4,	// (0x0003efbf) setting_volume_pane

0xf498,	// (0x000409a3) volume_set_pane

0x2d3f,	// (0x0003424a) bg_set_opt_pane_cp

0xf4a0,	// (0x000409ab) setting_slider_pane_t1

0xf4b9,	// (0x000409c4) setting_slider_pane_t2

0xf4d3,	// (0x000409de) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00040a44) setting_slider_pane_t

0xf4eb,	// (0x000409f6) slider_set_pane

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp2

0x2d81,	// (0x0003428c) setting_slider_graphic_pane_g1

0xf501,	// (0x00040a0c) setting_slider_graphic_pane_t1

0xf511,	// (0x00040a1c) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00040a4b) setting_slider_graphic_pane_t

0xf521,	// (0x00040a2c) slider_set_pane_cp

0x2c5f,	// (0x0003416a) input_focus_pane_cp1

0x6107,	// (0x00037612) list_set_text_pane

0xe100,	// (0x0003f60b) setting_text_pane_g1

0x2c5f,	// (0x0003416a) input_focus_pane_cp2

0xe100,	// (0x0003f60b) setting_code_pane_g1

0x2d8a,	// (0x00034295) setting_code_pane_t1

0xf259,	// (0x00040764) set_text_pane_t1_ParamLimits

0xf259,	// (0x00040764) set_text_pane_t1

0x3624,	// (0x00034b2f) set_opt_bg_pane_g1

0x362c,	// (0x00034b37) set_opt_bg_pane_g2

0x60e1,	// (0x000375ec) set_opt_bg_pane_g3

0x363c,	// (0x00034b47) set_opt_bg_pane_g4

0x3644,	// (0x00034b4f) set_opt_bg_pane_g5

0x364c,	// (0x00034b57) set_opt_bg_pane_g6

0x60eb,	// (0x000375f6) set_opt_bg_pane_g7

0x60f3,	// (0x000375fe) set_opt_bg_pane_g8

0x60fd,	// (0x00037608) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x00040e54) set_opt_bg_pane_g

0x60d4,	// (0x000375df) slider_set_pane_g1

0x13c7,	// (0x000328d2) slider_set_pane_g2

0x0006,

0xf93a,	// (0x00040e45) slider_set_pane_g

0x133b,	// (0x00032846) volume_set_pane_g1

0x1343,	// (0x0003284e) volume_set_pane_g2

0x134b,	// (0x00032856) volume_set_pane_g3

0x1353,	// (0x0003285e) volume_set_pane_g4

0x135b,	// (0x00032866) volume_set_pane_g5

0x1363,	// (0x0003286e) volume_set_pane_g6

0x136b,	// (0x00032876) volume_set_pane_g7

0x1373,	// (0x0003287e) volume_set_pane_g8

0x137b,	// (0x00032886) volume_set_pane_g9

0x1383,	// (0x0003288e) volume_set_pane_g10

0x0009,

0xf912,	// (0x00040e1d) volume_set_pane_g

0xb591,	// (0x0003ca9c) indicator_pane_ParamLimits

0xb591,	// (0x0003ca9c) indicator_pane

0xb5b9,	// (0x0003cac4) main_idle_pane_g2_ParamLimits

0xb5b9,	// (0x0003cac4) main_idle_pane_g2

0xb5f1,	// (0x0003cafc) main_pane_idle_g1_ParamLimits

0xb5f1,	// (0x0003cafc) main_pane_idle_g1

0x2dd9,	// (0x000342e4) popup_clock_digital_analogue_window_ParamLimits

0x2dd9,	// (0x000342e4) popup_clock_digital_analogue_window

0xb618,	// (0x0003cb23) soft_indicator_pane_ParamLimits

0xb618,	// (0x0003cb23) soft_indicator_pane

0xb632,	// (0x0003cb3d) wallpaper_pane_ParamLimits

0xb632,	// (0x0003cb3d) wallpaper_pane

0xe100,	// (0x0003f60b) wallpaper_pane_g1

0xb644,	// (0x0003cb4f) indicator_pane_g1_ParamLimits

0xb644,	// (0x0003cb4f) indicator_pane_g1

0x6522,	// (0x00037a2d) navi_navi_icon_text_pane_srt_g1

0x2e2b,	// (0x00034336) soft_indicator_pane_t1

0x2e45,	// (0x00034350) aid_ps_area_pane

0xb65a,	// (0x0003cb65) aid_ps_clock_pane

0x2e64,	// (0x0003436f) aid_ps_indicator_pane

0x2e70,	// (0x0003437b) indicator_ps_pane_ParamLimits

0x2e70,	// (0x0003437b) indicator_ps_pane

0x2e7f,	// (0x0003438a) power_save_pane_g1_ParamLimits

0x2e7f,	// (0x0003438a) power_save_pane_g1

0x2e8b,	// (0x00034396) power_save_pane_g2_ParamLimits

0x2e8b,	// (0x00034396) power_save_pane_g2

0xf092,	// (0x0004059d) aid_navinavi_width_pane

0x2e45,	// (0x00034350) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00040a50) power_save_pane_g_ParamLimits

0xf545,	// (0x00040a50) power_save_pane_g

0x2e99,	// (0x000343a4) power_save_pane_t1_ParamLimits

0x2e99,	// (0x000343a4) power_save_pane_t1

0xb65a,	// (0x0003cb65) aid_ps_clock_pane_ParamLimits

0x2e64,	// (0x0003436f) aid_ps_indicator_pane_ParamLimits

0x2eab,	// (0x000343b6) power_save_pane_t4_ParamLimits

0x2eab,	// (0x000343b6) power_save_pane_t4

0x0001,

0xf54a,	// (0x00040a55) power_save_pane_t_ParamLimits

0xf54a,	// (0x00040a55) power_save_pane_t

0x2ed5,	// (0x000343e0) power_save_t3_ParamLimits

0x2ed5,	// (0x000343e0) power_save_t3

0x2ec0,	// (0x000343cb) power_save_t2_ParamLimits

0x2ec0,	// (0x000343cb) power_save_t2

0x2eea,	// (0x000343f5) indicator_ps_pane_g1

0xb668,	// (0x0003cb73) ai_gene_pane_ParamLimits

0xb668,	// (0x0003cb73) ai_gene_pane

0xb67f,	// (0x0003cb8a) ai_links_pane_ParamLimits

0xb67f,	// (0x0003cb8a) ai_links_pane

0xb697,	// (0x0003cba2) indicator_pane_cp1_ParamLimits

0xb697,	// (0x0003cba2) indicator_pane_cp1

0xb6a6,	// (0x0003cbb1) main_pane_idle_g1_cp_ParamLimits

0xb6a6,	// (0x0003cbb1) main_pane_idle_g1_cp

0x2f23,	// (0x0003442e) popup_ai_links_title_window

0xb6be,	// (0x0003cbc9) soft_indicator_pane_cp1_ParamLimits

0xb6be,	// (0x0003cbc9) soft_indicator_pane_cp1

0x5ec3,	// (0x000373ce) ai_links_pane_g1

0x5ecc,	// (0x000373d7) grid_ai_links_pane

0xd8fd,	// (0x0003ee08) ai_gene_pane_1

0x5eb1,	// (0x000373bc) ai_gene_pane_2

0x5eba,	// (0x000373c5) list_highlight_pane_cp4

0xd8d9,	// (0x0003ede4) cell_ai_link_pane_ParamLimits

0xd8d9,	// (0x0003ede4) cell_ai_link_pane

0x5e82,	// (0x0003738d) cell_ai_link_pane_g1

0x3182,	// (0x0003468d) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x00040df8) cell_ai_link_pane_g

0x2c5f,	// (0x0003416a) grid_highlight_cp2

0x2c5f,	// (0x0003416a) bg_popup_sub_pane_cp1

0x2f46,	// (0x00034451) popup_ai_links_title_window_t1

0x5dd0,	// (0x000372db) ai_gene_pane_1_g1_ParamLimits

0x5dd0,	// (0x000372db) ai_gene_pane_1_g1

0x5ddc,	// (0x000372e7) ai_gene_pane_1_g2_ParamLimits

0x5ddc,	// (0x000372e7) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x00040dee) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x00040dee) ai_gene_pane_1_g

0x5de9,	// (0x000372f4) ai_gene_pane_1_t1_ParamLimits

0x5de9,	// (0x000372f4) ai_gene_pane_1_t1

0x5e1d,	// (0x00037328) grid_ai_soft_ind_pane

0x5dbb,	// (0x000372c6) ai_gene_pane_2_t1_ParamLimits

0x5dbb,	// (0x000372c6) ai_gene_pane_2_t1

0xb6d2,	// (0x0003cbdd) main_pane_empty_t1_ParamLimits

0xb6d2,	// (0x0003cbdd) main_pane_empty_t1

0xb6ea,	// (0x0003cbf5) main_pane_empty_t2_ParamLimits

0xb6ea,	// (0x0003cbf5) main_pane_empty_t2

0xb6ff,	// (0x0003cc0a) main_pane_empty_t3_ParamLimits

0xb6ff,	// (0x0003cc0a) main_pane_empty_t3

0xb711,	// (0x0003cc1c) main_pane_empty_t4_ParamLimits

0xb711,	// (0x0003cc1c) main_pane_empty_t4

0xb723,	// (0x0003cc2e) main_pane_empty_t5_ParamLimits

0xb723,	// (0x0003cc2e) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00040a5a) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00040a5a) main_pane_empty_t

0x36eb,	// (0x00034bf6) bg_popup_window_pane_ParamLimits

0x36eb,	// (0x00034bf6) bg_popup_window_pane

0x5b2b,	// (0x00037036) find_popup_pane_cp2_ParamLimits

0x5b2b,	// (0x00037036) find_popup_pane_cp2

0x5b37,	// (0x00037042) heading_pane_ParamLimits

0x5b37,	// (0x00037042) heading_pane

0x2c5f,	// (0x0003416a) bg_popup_sub_pane

0xd85a,	// (0x0003ed65) bg_popup_window_pane_g1_ParamLimits

0xd85a,	// (0x0003ed65) bg_popup_window_pane_g1

0xd869,	// (0x0003ed74) bg_popup_window_pane_g2_ParamLimits

0xd869,	// (0x0003ed74) bg_popup_window_pane_g2

0xd875,	// (0x0003ed80) bg_popup_window_pane_g3_ParamLimits

0xd875,	// (0x0003ed80) bg_popup_window_pane_g3

0xd881,	// (0x0003ed8c) bg_popup_window_pane_g4_ParamLimits

0xd881,	// (0x0003ed8c) bg_popup_window_pane_g4

0xd890,	// (0x0003ed9b) bg_popup_window_pane_g5_ParamLimits

0xd890,	// (0x0003ed9b) bg_popup_window_pane_g5

0xd8a0,	// (0x0003edab) bg_popup_window_pane_g6_ParamLimits

0xd8a0,	// (0x0003edab) bg_popup_window_pane_g6

0xd8ac,	// (0x0003edb7) bg_popup_window_pane_g7_ParamLimits

0xd8ac,	// (0x0003edb7) bg_popup_window_pane_g7

0xd8bb,	// (0x0003edc6) bg_popup_window_pane_g8_ParamLimits

0xd8bb,	// (0x0003edc6) bg_popup_window_pane_g8

0xd8ca,	// (0x0003edd5) bg_popup_window_pane_g9_ParamLimits

0xd8ca,	// (0x0003edd5) bg_popup_window_pane_g9

0x5b11,	// (0x0003701c) bg_popup_window_pane_g10_ParamLimits

0x5b11,	// (0x0003701c) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x00040db6) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x00040db6) bg_popup_window_pane_g

0x5a2e,	// (0x00036f39) bg_popup_heading_pane_ParamLimits

0x5a2e,	// (0x00036f39) bg_popup_heading_pane

0x153d,	// (0x00032a48) tabs_4_passive_pane_cp_srt_ParamLimits

0x153d,	// (0x00032a48) tabs_4_passive_pane_cp_srt

0x154f,	// (0x00032a5a) tabs_4_passive_pane_srt_ParamLimits

0x5a42,	// (0x00036f4d) heading_pane_g2

0x154f,	// (0x00032a5a) tabs_4_passive_pane_srt

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp3_srt

0x5a4a,	// (0x00036f55) heading_pane_t1_ParamLimits

0x5a4a,	// (0x00036f55) heading_pane_t1

0x5a61,	// (0x00036f6c) heading_pane_t2_ParamLimits

0x5a61,	// (0x00036f6c) heading_pane_t2

0x0001,

0xf8a6,	// (0x00040db1) heading_pane_t_ParamLimits

0xf8a6,	// (0x00040db1) heading_pane_t

0x555b,	// (0x00036a66) bg_popup_heading_pane_g1

0x560a,	// (0x00036b15) bg_popup_heading_pane_g2

0x5614,	// (0x00036b1f) bg_popup_heading_pane_g3

0x561e,	// (0x00036b29) bg_popup_heading_pane_g4

0x5628,	// (0x00036b33) bg_popup_heading_pane_g5

0x5632,	// (0x00036b3d) bg_popup_heading_pane_g6

0x563a,	// (0x00036b45) bg_popup_heading_pane_g7

0x5642,	// (0x00036b4d) bg_popup_heading_pane_g8

0x564c,	// (0x00036b57) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x00040d6d) bg_popup_heading_pane_g

0x4d2b,	// (0x00036236) bg_popup_sub_pane_g1

0x4d3b,	// (0x00036246) bg_popup_sub_pane_g2

0x4d33,	// (0x0003623e) bg_popup_sub_pane_g3

0x4d4b,	// (0x00036256) bg_popup_sub_pane_g4

0x4d43,	// (0x0003624e) bg_popup_sub_pane_g5

0x4d53,	// (0x0003625e) bg_popup_sub_pane_g6

0x4d5b,	// (0x00036266) bg_popup_sub_pane_g7

0x4d6b,	// (0x00036276) bg_popup_sub_pane_g8

0x4d63,	// (0x0003626e) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x00040d47) bg_popup_sub_pane_g

0x2fba,	// (0x000344c5) bg_popup_window_pane_cp5_ParamLimits

0x2fba,	// (0x000344c5) bg_popup_window_pane_cp5

0x2fd6,	// (0x000344e1) popup_note_window_g1_ParamLimits

0x2fd6,	// (0x000344e1) popup_note_window_g1

0x2fe2,	// (0x000344ed) popup_note_window_t1_ParamLimits

0x2fe2,	// (0x000344ed) popup_note_window_t1

0x2ff8,	// (0x00034503) popup_note_window_t2_ParamLimits

0x2ff8,	// (0x00034503) popup_note_window_t2

0x300e,	// (0x00034519) popup_note_window_t3_ParamLimits

0x300e,	// (0x00034519) popup_note_window_t3

0x3024,	// (0x0003452f) popup_note_window_t4_ParamLimits

0x3024,	// (0x0003452f) popup_note_window_t4

0x304c,	// (0x00034557) popup_note_window_t5_ParamLimits

0x304c,	// (0x00034557) popup_note_window_t5

0x0004,

0xf55a,	// (0x00040a65) popup_note_window_t_ParamLimits

0xf55a,	// (0x00040a65) popup_note_window_t

0x3096,	// (0x000345a1) bg_popup_window_pane_cp6_ParamLimits

0x3096,	// (0x000345a1) bg_popup_window_pane_cp6

0x54d7,	// (0x000369e2) popup_note_image_window_g1_ParamLimits

0x54d7,	// (0x000369e2) popup_note_image_window_g1

0x54e3,	// (0x000369ee) popup_note_image_window_g2_ParamLimits

0x54e3,	// (0x000369ee) popup_note_image_window_g2

0x0001,

0xf830,	// (0x00040d3b) popup_note_image_window_g_ParamLimits

0xf830,	// (0x00040d3b) popup_note_image_window_g

0x54fc,	// (0x00036a07) popup_note_image_window_t1_ParamLimits

0x54fc,	// (0x00036a07) popup_note_image_window_t1

0x5515,	// (0x00036a20) popup_note_image_window_t2_ParamLimits

0x5515,	// (0x00036a20) popup_note_image_window_t2

0x552e,	// (0x00036a39) popup_note_image_window_t3_ParamLimits

0x552e,	// (0x00036a39) popup_note_image_window_t3

0x0002,

0xf835,	// (0x00040d40) popup_note_image_window_t_ParamLimits

0xf835,	// (0x00040d40) popup_note_image_window_t

0x5398,	// (0x000368a3) bg_popup_window_pane_cp7_ParamLimits

0x5398,	// (0x000368a3) bg_popup_window_pane_cp7

0x53c8,	// (0x000368d3) popup_note_wait_window_g1_ParamLimits

0x53c8,	// (0x000368d3) popup_note_wait_window_g1

0x53d4,	// (0x000368df) popup_note_wait_window_g2_ParamLimits

0x53d4,	// (0x000368df) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x00040d29) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x00040d29) popup_note_wait_window_g

0x53ec,	// (0x000368f7) popup_note_wait_window_t1_ParamLimits

0x53ec,	// (0x000368f7) popup_note_wait_window_t1

0x5413,	// (0x0003691e) popup_note_wait_window_t2_ParamLimits

0x5413,	// (0x0003691e) popup_note_wait_window_t2

0x5430,	// (0x0003693b) popup_note_wait_window_t3_ParamLimits

0x5430,	// (0x0003693b) popup_note_wait_window_t3

0x5443,	// (0x0003694e) popup_note_wait_window_t4_ParamLimits

0x5443,	// (0x0003694e) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x00040d30) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x00040d30) popup_note_wait_window_t

0x5468,	// (0x00036973) wait_bar_pane_ParamLimits

0x5468,	// (0x00036973) wait_bar_pane

0x2c5f,	// (0x0003416a) wait_anim_pane

0x2c5f,	// (0x0003416a) wait_border_pane

0xe100,	// (0x0003f60b) wait_anim_pane_g1

0xe100,	// (0x0003f60b) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x00040be9) wait_anim_pane_g

0x533c,	// (0x00036847) wait_border_pane_g1

0x5347,	// (0x00036852) wait_border_pane_g2

0x5350,	// (0x0003685b) wait_border_pane_g3

0x0002,

0xf817,	// (0x00040d22) wait_border_pane_g

0x51a7,	// (0x000366b2) bg_popup_window_pane_cp16_ParamLimits

0x51a7,	// (0x000366b2) bg_popup_window_pane_cp16

0x52a7,	// (0x000367b2) indicator_popup_pane_cp4_ParamLimits

0x52a7,	// (0x000367b2) indicator_popup_pane_cp4

0x52bb,	// (0x000367c6) popup_query_data_window_t1_ParamLimits

0x52bb,	// (0x000367c6) popup_query_data_window_t1

0x52cd,	// (0x000367d8) popup_query_data_window_t2_ParamLimits

0x52cd,	// (0x000367d8) popup_query_data_window_t2

0x52e6,	// (0x000367f1) popup_query_data_window_t3_ParamLimits

0x52e6,	// (0x000367f1) popup_query_data_window_t3

0x0002,

0xf810,	// (0x00040d1b) popup_query_data_window_t_ParamLimits

0xf810,	// (0x00040d1b) popup_query_data_window_t

0x5300,	// (0x0003680b) query_popup_data_pane_ParamLimits

0x5300,	// (0x0003680b) query_popup_data_pane

0x5314,	// (0x0003681f) query_popup_data_pane_cp1_ParamLimits

0x5314,	// (0x0003681f) query_popup_data_pane_cp1

0x51a7,	// (0x000366b2) bg_popup_window_pane_cp10_ParamLimits

0x51a7,	// (0x000366b2) bg_popup_window_pane_cp10

0x51d9,	// (0x000366e4) indicator_popup_pane_ParamLimits

0x51d9,	// (0x000366e4) indicator_popup_pane

0x51fb,	// (0x00036706) popup_query_code_window_t1_ParamLimits

0x51fb,	// (0x00036706) popup_query_code_window_t1

0x5215,	// (0x00036720) popup_query_code_window_t2_ParamLimits

0x5215,	// (0x00036720) popup_query_code_window_t2

0x525e,	// (0x00036769) popup_query_code_window_t3_ParamLimits

0x525e,	// (0x00036769) popup_query_code_window_t3

0x0002,

0xf809,	// (0x00040d14) popup_query_code_window_t_ParamLimits

0xf809,	// (0x00040d14) popup_query_code_window_t

0x528d,	// (0x00036798) query_popup_pane_ParamLimits

0x528d,	// (0x00036798) query_popup_pane

0x3096,	// (0x000345a1) bg_popup_window_pane_cp15_ParamLimits

0x3096,	// (0x000345a1) bg_popup_window_pane_cp15

0x30b4,	// (0x000345bf) indicator_popup_pane_cp1_ParamLimits

0x30b4,	// (0x000345bf) indicator_popup_pane_cp1

0x30c7,	// (0x000345d2) indicator_popup_pane_cp2_ParamLimits

0x30c7,	// (0x000345d2) indicator_popup_pane_cp2

0x30da,	// (0x000345e5) popup_query_data_code_window_g1_ParamLimits

0x30da,	// (0x000345e5) popup_query_data_code_window_g1

0x30ed,	// (0x000345f8) popup_query_data_code_window_t1_ParamLimits

0x30ed,	// (0x000345f8) popup_query_data_code_window_t1

0x30ff,	// (0x0003460a) popup_query_data_code_window_t2_ParamLimits

0x30ff,	// (0x0003460a) popup_query_data_code_window_t2

0x3111,	// (0x0003461c) popup_query_data_code_window_t3_ParamLimits

0x3111,	// (0x0003461c) popup_query_data_code_window_t3

0x3127,	// (0x00034632) popup_query_data_code_window_t4_ParamLimits

0x3127,	// (0x00034632) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00040a70) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00040a70) popup_query_data_code_window_t

0x0ff1,	// (0x000324fc) list_single_midp_graphic_pane_g3

0x313f,	// (0x0003464a) query_popup_data_pane_cp2_ParamLimits

0x3152,	// (0x0003465d) query_popup_pane_cp2_ParamLimits

0x3152,	// (0x0003465d) query_popup_pane_cp2

0x2c5f,	// (0x0003416a) bg_popup_window_pane_cp11

0x518b,	// (0x00036696) heading_pane_cp5

0x5193,	// (0x0003669e) listscroll_popup_info_pane

0x2c5f,	// (0x0003416a) input_focus_pane_cp3

0x3165,	// (0x00034670) query_popup_pane_t1

0x3173,	// (0x0003467e) list_popup_info_pane_ParamLimits

0x3173,	// (0x0003467e) list_popup_info_pane

0x3182,	// (0x0003468d) listscroll_popup_info_pane_g1

0x318a,	// (0x00034695) scroll_pane_cp7

0x3194,	// (0x0003469f) popup_info_list_pane_t1_ParamLimits

0x3194,	// (0x0003469f) popup_info_list_pane_t1

0x31ae,	// (0x000346b9) popup_info_list_pane_t2_ParamLimits

0x31ae,	// (0x000346b9) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00040a79) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00040a79) popup_info_list_pane_t

0x2c5f,	// (0x0003416a) bg_popup_window_pane_cp12

0x653c,	// (0x00037a47) find_popup_pane

0x2d3f,	// (0x0003424a) bg_popup_window_pane_cp3

0x31c8,	// (0x000346d3) heading_pane_cp3

0x31d7,	// (0x000346e2) listscroll_popup_graphic_pane

0x2c5f,	// (0x0003416a) bg_popup_window_pane_cp4

0xb785,	// (0x0003cc90) heading_pane_cp4

0x3241,	// (0x0003474c) listscroll_popup_colour_pane

0xb78f,	// (0x0003cc9a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb78f,	// (0x0003cc9a) cell_large_graphic_colour_none_popup_pane

0xb7a3,	// (0x0003ccae) grid_large_graphic_colour_popup_pane_ParamLimits

0xb7a3,	// (0x0003ccae) grid_large_graphic_colour_popup_pane

0xb7c7,	// (0x0003ccd2) listscroll_popup_colour_pane_g1_ParamLimits

0xb7c7,	// (0x0003ccd2) listscroll_popup_colour_pane_g1

0xb7de,	// (0x0003cce9) listscroll_popup_colour_pane_g2_ParamLimits

0xb7de,	// (0x0003cce9) listscroll_popup_colour_pane_g2

0xb7f5,	// (0x0003cd00) listscroll_popup_colour_pane_g3_ParamLimits

0xb7f5,	// (0x0003cd00) listscroll_popup_colour_pane_g3

0xb805,	// (0x0003cd10) listscroll_popup_colour_pane_g4_ParamLimits

0xb805,	// (0x0003cd10) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00040a7e) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00040a7e) listscroll_popup_colour_pane_g

0x32cf,	// (0x000347da) scroll_pane_cp6_ParamLimits

0x32cf,	// (0x000347da) scroll_pane_cp6

0xb815,	// (0x0003cd20) cell_large_graphic_colour_popup_pane_ParamLimits

0xb815,	// (0x0003cd20) cell_large_graphic_colour_popup_pane

0x3300,	// (0x0003480b) cell_large_graphic_colour_none_popup_pane_t1

0x2c5f,	// (0x0003416a) grid_highlight_pane_cp5

0x330f,	// (0x0003481a) cell_large_graphic_colour_popup_pane_g1

0x3317,	// (0x00034822) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00040a87) cell_large_graphic_colour_popup_pane_g

0x331f,	// (0x0003482a) cell_large_graphic_colour_popup_pane_g2_copy1

0x3328,	// (0x00034833) grid_highlight_pane_cp4

0x3330,	// (0x0003483b) bg_popup_window_pane_cp8_ParamLimits

0x3330,	// (0x0003483b) bg_popup_window_pane_cp8

0x334b,	// (0x00034856) popup_snote_single_text_window_g1_ParamLimits

0x334b,	// (0x00034856) popup_snote_single_text_window_g1

0x335d,	// (0x00034868) popup_snote_single_text_window_t1_ParamLimits

0x335d,	// (0x00034868) popup_snote_single_text_window_t1

0x3370,	// (0x0003487b) popup_snote_single_text_window_t2_ParamLimits

0x3370,	// (0x0003487b) popup_snote_single_text_window_t2

0x3383,	// (0x0003488e) popup_snote_single_text_window_t3_ParamLimits

0x3383,	// (0x0003488e) popup_snote_single_text_window_t3

0x33bc,	// (0x000348c7) popup_snote_single_text_window_t4_ParamLimits

0x33bc,	// (0x000348c7) popup_snote_single_text_window_t4

0x33f0,	// (0x000348fb) popup_snote_single_text_window_t5_ParamLimits

0x33f0,	// (0x000348fb) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00040a8c) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00040a8c) popup_snote_single_text_window_t

0x341f,	// (0x0003492a) bg_popup_window_pane_cp9_ParamLimits

0x341f,	// (0x0003492a) bg_popup_window_pane_cp9

0x334b,	// (0x00034856) popup_snote_single_graphic_window_g1_ParamLimits

0x334b,	// (0x00034856) popup_snote_single_graphic_window_g1

0x342d,	// (0x00034938) popup_snote_single_graphic_window_g2_ParamLimits

0x342d,	// (0x00034938) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00040a97) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00040a97) popup_snote_single_graphic_window_g

0x3439,	// (0x00034944) popup_snote_single_graphic_window_t1_ParamLimits

0x3439,	// (0x00034944) popup_snote_single_graphic_window_t1

0x344c,	// (0x00034957) popup_snote_single_graphic_window_t2_ParamLimits

0x344c,	// (0x00034957) popup_snote_single_graphic_window_t2

0x345f,	// (0x0003496a) popup_snote_single_graphic_window_t3_ParamLimits

0x345f,	// (0x0003496a) popup_snote_single_graphic_window_t3

0x3498,	// (0x000349a3) popup_snote_single_graphic_window_t4_ParamLimits

0x3498,	// (0x000349a3) popup_snote_single_graphic_window_t4

0x34cc,	// (0x000349d7) popup_snote_single_graphic_window_t5_ParamLimits

0x34cc,	// (0x000349d7) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00040a9c) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00040a9c) popup_snote_single_graphic_window_t

0x647e,	// (0x00037989) grid_graphic_popup_pane_ParamLimits

0x647e,	// (0x00037989) grid_graphic_popup_pane

0x64a8,	// (0x000379b3) listscroll_popup_graphic_pane_g1_ParamLimits

0x64a8,	// (0x000379b3) listscroll_popup_graphic_pane_g1

0xdbbc,	// (0x0003f0c7) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbbc,	// (0x0003f0c7) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x00040e91) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x00040e91) listscroll_popup_graphic_pane_g

0x64d0,	// (0x000379db) scroll_pane_cp5

0xdb79,	// (0x0003f084) cell_graphic_popup_pane_ParamLimits

0xdb79,	// (0x0003f084) cell_graphic_popup_pane

0x63f0,	// (0x000378fb) cell_graphic_popup_pane_g1

0x63f8,	// (0x00037903) cell_graphic_popup_pane_g2

0x331f,	// (0x0003482a) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x00040e8a) cell_graphic_popup_pane_g

0x6401,	// (0x0003790c) cell_graphic_popup_pane_t2

0x3328,	// (0x00034833) grid_highlight_pane_cp3

0x350d,	// (0x00034a18) list_gen_pane_ParamLimits

0x350d,	// (0x00034a18) list_gen_pane

0x353f,	// (0x00034a4a) scroll_pane

0xdb30,	// (0x0003f03b) bg_list_pane_g1_ParamLimits

0xdb30,	// (0x0003f03b) bg_list_pane_g1

0x6365,	// (0x00037870) bg_list_pane_g2_ParamLimits

0x6365,	// (0x00037870) bg_list_pane_g2

0x637a,	// (0x00037885) bg_list_pane_g3_ParamLimits

0x637a,	// (0x00037885) bg_list_pane_g3

0x638e,	// (0x00037899) bg_list_pane_g4_ParamLimits

0x638e,	// (0x00037899) bg_list_pane_g4

0xdb4d,	// (0x0003f058) bg_list_pane_g5_ParamLimits

0xdb4d,	// (0x0003f058) bg_list_pane_g5

0x0004,

0xf974,	// (0x00040e7f) bg_list_pane_g_ParamLimits

0xf974,	// (0x00040e7f) bg_list_pane_g

0xdae7,	// (0x0003eff2) list_double2_graphic_large_graphic_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double2_graphic_large_graphic_pane

0xdae7,	// (0x0003eff2) list_double2_graphic_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double2_graphic_pane

0xdae7,	// (0x0003eff2) list_double2_large_graphic_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double2_large_graphic_pane

0xdae7,	// (0x0003eff2) list_double2_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double2_pane

0xdae7,	// (0x0003eff2) list_double_graphic_heading_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_graphic_heading_pane

0xdae7,	// (0x0003eff2) list_double_graphic_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_graphic_pane

0xdae7,	// (0x0003eff2) list_double_heading_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_heading_pane

0xdae7,	// (0x0003eff2) list_double_large_graphic_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_large_graphic_pane

0xdae7,	// (0x0003eff2) list_double_number_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_number_pane

0xdae7,	// (0x0003eff2) list_double_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_pane

0xdae7,	// (0x0003eff2) list_double_time_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_double_time_pane

0xdae7,	// (0x0003eff2) list_setting_number_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_setting_number_pane

0xdae7,	// (0x0003eff2) list_setting_pane_ParamLimits

0xdae7,	// (0x0003eff2) list_setting_pane

0xc8a3,	// (0x0003ddae) list_single_2graphic_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_2graphic_pane

0xc8a3,	// (0x0003ddae) list_single_graphic_heading_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_graphic_heading_pane

0xc8a3,	// (0x0003ddae) list_single_graphic_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_graphic_pane

0xc8a3,	// (0x0003ddae) list_single_heading_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_heading_pane

0xdb1d,	// (0x0003f028) list_single_large_graphic_pane_ParamLimits

0xdb1d,	// (0x0003f028) list_single_large_graphic_pane

0xc8a3,	// (0x0003ddae) list_single_number_heading_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_number_heading_pane

0xc8a3,	// (0x0003ddae) list_single_number_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_number_pane

0xc8a3,	// (0x0003ddae) list_single_pane_ParamLimits

0xc8a3,	// (0x0003ddae) list_single_pane

0x2c5f,	// (0x0003416a) list_highlight_pane_cp1

0x1021,	// (0x0003252c) list_single_pane_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_pane_g1

0x102d,	// (0x00032538) list_single_pane_g2_ParamLimits

0x102d,	// (0x00032538) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_pane_g

0x16c2,	// (0x00032bcd) list_single_pane_t1_ParamLimits

0x16c2,	// (0x00032bcd) list_single_pane_t1

0x1021,	// (0x0003252c) list_single_number_pane_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_number_pane_g1

0x102d,	// (0x00032538) list_single_number_pane_g2_ParamLimits

0x102d,	// (0x00032538) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_number_pane_g

0x0fb6,	// (0x000324c1) list_single_number_pane_t1_ParamLimits

0x0fb6,	// (0x000324c1) list_single_number_pane_t1

0xc865,	// (0x0003dd70) list_single_number_pane_t2_ParamLimits

0xc865,	// (0x0003dd70) list_single_number_pane_t2

0x0001,

0xf935,	// (0x00040e40) list_single_number_pane_t_ParamLimits

0xf935,	// (0x00040e40) list_single_number_pane_t

0xb83e,	// (0x0003cd49) list_single_graphic_pane_g1_ParamLimits

0xb83e,	// (0x0003cd49) list_single_graphic_pane_g1

0x1021,	// (0x0003252c) list_single_graphic_pane_g2_ParamLimits

0x1021,	// (0x0003252c) list_single_graphic_pane_g2

0x102d,	// (0x00032538) list_single_graphic_pane_g3_ParamLimits

0x102d,	// (0x00032538) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00040aa7) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00040aa7) list_single_graphic_pane_g

0xb84a,	// (0x0003cd55) list_single_graphic_pane_t1_ParamLimits

0xb84a,	// (0x0003cd55) list_single_graphic_pane_t1

0x1021,	// (0x0003252c) list_single_heading_pane_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_heading_pane_g1

0x102d,	// (0x00032538) list_single_heading_pane_g2_ParamLimits

0x102d,	// (0x00032538) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_heading_pane_g

0xb860,	// (0x0003cd6b) list_single_heading_pane_t1_ParamLimits

0xb860,	// (0x0003cd6b) list_single_heading_pane_t1

0xb876,	// (0x0003cd81) list_single_heading_pane_t2_ParamLimits

0xb876,	// (0x0003cd81) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00040ab3) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00040ab3) list_single_heading_pane_t

0x1021,	// (0x0003252c) list_single_number_heading_pane_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_number_heading_pane_g1

0x102d,	// (0x00032538) list_single_number_heading_pane_g2_ParamLimits

0x102d,	// (0x00032538) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_number_heading_pane_g

0xb860,	// (0x0003cd6b) list_single_number_heading_pane_t1_ParamLimits

0xb860,	// (0x0003cd6b) list_single_number_heading_pane_t1

0x1676,	// (0x00032b81) list_single_number_heading_pane_t2_ParamLimits

0x1676,	// (0x00032b81) list_single_number_heading_pane_t2

0x1688,	// (0x00032b93) list_single_number_heading_pane_t3_ParamLimits

0x1688,	// (0x00032b93) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00040ab8) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00040ab8) list_single_number_heading_pane_t

0x0f92,	// (0x0003249d) list_single_graphic_heading_pane_g1_ParamLimits

0x0f92,	// (0x0003249d) list_single_graphic_heading_pane_g1

0xb888,	// (0x0003cd93) list_single_graphic_heading_pane_g4_ParamLimits

0xb888,	// (0x0003cd93) list_single_graphic_heading_pane_g4

0x102d,	// (0x00032538) list_single_graphic_heading_pane_g5_ParamLimits

0x102d,	// (0x00032538) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00040abf) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00040abf) list_single_graphic_heading_pane_g

0xb860,	// (0x0003cd6b) list_single_graphic_heading_pane_t1_ParamLimits

0xb860,	// (0x0003cd6b) list_single_graphic_heading_pane_t1

0xb899,	// (0x0003cda4) list_single_graphic_heading_pane_t2_ParamLimits

0xb899,	// (0x0003cda4) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00040ac6) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00040ac6) list_single_graphic_heading_pane_t

0x16d8,	// (0x00032be3) list_single_large_graphic_pane_g1_ParamLimits

0x16d8,	// (0x00032be3) list_single_large_graphic_pane_g1

0xf274,	// (0x0004077f) list_single_large_graphic_pane_g2_ParamLimits

0xf274,	// (0x0004077f) list_single_large_graphic_pane_g2

0xf280,	// (0x0004078b) list_single_large_graphic_pane_g3_ParamLimits

0xf280,	// (0x0004078b) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00040acb) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00040acb) list_single_large_graphic_pane_g

0x5347,	// (0x00036852) wait_border_pane_g2_copy1

0xb8ab,	// (0x0003cdb6) list_single_large_graphic_pane_g4_cp2

0x16e4,	// (0x00032bef) list_single_large_graphic_pane_t1_ParamLimits

0x16e4,	// (0x00032bef) list_single_large_graphic_pane_t1

0xb8b3,	// (0x0003cdbe) list_double_pane_g1_ParamLimits

0xb8b3,	// (0x0003cdbe) list_double_pane_g1

0xb8bf,	// (0x0003cdca) list_double_pane_g2_ParamLimits

0xb8bf,	// (0x0003cdca) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00040ad2) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00040ad2) list_double_pane_g

0xb8cb,	// (0x0003cdd6) list_double_pane_t1_ParamLimits

0xb8cb,	// (0x0003cdd6) list_double_pane_t1

0xb8e1,	// (0x0003cdec) list_double_pane_t2_ParamLimits

0xb8e1,	// (0x0003cdec) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00040ad7) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00040ad7) list_double_pane_t

0xb8f3,	// (0x0003cdfe) list_double2_pane_g1_ParamLimits

0xb8f3,	// (0x0003cdfe) list_double2_pane_g1

0xb904,	// (0x0003ce0f) list_double2_pane_g2_ParamLimits

0xb904,	// (0x0003ce0f) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00040adc) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00040adc) list_double2_pane_g

0xb910,	// (0x0003ce1b) list_double2_pane_t1_ParamLimits

0xb910,	// (0x0003ce1b) list_double2_pane_t1

0xb926,	// (0x0003ce31) list_double2_pane_t2_ParamLimits

0xb926,	// (0x0003ce31) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00040ae1) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00040ae1) list_double2_pane_t

0xb8b3,	// (0x0003cdbe) list_double_number_pane_g1_ParamLimits

0xb8b3,	// (0x0003cdbe) list_double_number_pane_g1

0xb8bf,	// (0x0003cdca) list_double_number_pane_g2_ParamLimits

0xb8bf,	// (0x0003cdca) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00040ad2) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00040ad2) list_double_number_pane_g

0xb938,	// (0x0003ce43) list_double_number_pane_t1_ParamLimits

0xb938,	// (0x0003ce43) list_double_number_pane_t1

0xb94a,	// (0x0003ce55) list_double_number_pane_t2_ParamLimits

0xb94a,	// (0x0003ce55) list_double_number_pane_t2

0xb960,	// (0x0003ce6b) list_double_number_pane_t3_ParamLimits

0xb960,	// (0x0003ce6b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00040ae6) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00040ae6) list_double_number_pane_t

0xb972,	// (0x0003ce7d) list_double_graphic_pane_g1_ParamLimits

0xb972,	// (0x0003ce7d) list_double_graphic_pane_g1

0xb97e,	// (0x0003ce89) list_double_graphic_pane_g2_ParamLimits

0xb97e,	// (0x0003ce89) list_double_graphic_pane_g2

0xb98d,	// (0x0003ce98) list_double_graphic_pane_g3_ParamLimits

0xb98d,	// (0x0003ce98) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00040aed) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00040aed) list_double_graphic_pane_g

0xb9a5,	// (0x0003ceb0) list_double_graphic_pane_t1_ParamLimits

0xb9a5,	// (0x0003ceb0) list_double_graphic_pane_t1

0xb9bb,	// (0x0003cec6) list_double_graphic_pane_t2_ParamLimits

0xb9bb,	// (0x0003cec6) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00040af6) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00040af6) list_double_graphic_pane_t

0xb9cd,	// (0x0003ced8) list_double2_graphic_pane_g1_ParamLimits

0xb9cd,	// (0x0003ced8) list_double2_graphic_pane_g1

0xb9d9,	// (0x0003cee4) list_double2_graphic_pane_g2_ParamLimits

0xb9d9,	// (0x0003cee4) list_double2_graphic_pane_g2

0xb904,	// (0x0003ce0f) list_double2_graphic_pane_g3_ParamLimits

0xb904,	// (0x0003ce0f) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00040afb) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00040afb) list_double2_graphic_pane_g

0xb9e5,	// (0x0003cef0) list_double2_graphic_pane_t1_ParamLimits

0xb9e5,	// (0x0003cef0) list_double2_graphic_pane_t1

0xb9fb,	// (0x0003cf06) list_double2_graphic_pane_t2_ParamLimits

0xb9fb,	// (0x0003cf06) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00040b02) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00040b02) list_double2_graphic_pane_t

0xba0d,	// (0x0003cf18) list_double_large_graphic_pane_g1_ParamLimits

0xba0d,	// (0x0003cf18) list_double_large_graphic_pane_g1

0xba2c,	// (0x0003cf37) list_double_large_graphic_pane_g2_ParamLimits

0xba2c,	// (0x0003cf37) list_double_large_graphic_pane_g2

0xb8bf,	// (0x0003cdca) list_double_large_graphic_pane_g3_ParamLimits

0xb8bf,	// (0x0003cdca) list_double_large_graphic_pane_g3

0xba3d,	// (0x0003cf48) list_double_large_graphic_pane_g4_ParamLimits

0xba3d,	// (0x0003cf48) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00040b07) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00040b07) list_double_large_graphic_pane_g

0xba50,	// (0x0003cf5b) list_double_large_graphic_pane_t1_ParamLimits

0xba50,	// (0x0003cf5b) list_double_large_graphic_pane_t1

0xba69,	// (0x0003cf74) list_double_large_graphic_pane_t2_ParamLimits

0xba69,	// (0x0003cf74) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00040b12) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00040b12) list_double_large_graphic_pane_t

0xba7b,	// (0x0003cf86) list_double2_large_graphic_pane_g1_ParamLimits

0xba7b,	// (0x0003cf86) list_double2_large_graphic_pane_g1

0xb8f3,	// (0x0003cdfe) list_double2_large_graphic_pane_g2_ParamLimits

0xb8f3,	// (0x0003cdfe) list_double2_large_graphic_pane_g2

0xb904,	// (0x0003ce0f) list_double2_large_graphic_pane_g3_ParamLimits

0xb904,	// (0x0003ce0f) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00040b17) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00040b17) list_double2_large_graphic_pane_g

0xba87,	// (0x0003cf92) list_double2_large_graphic_pane_t1_ParamLimits

0xba87,	// (0x0003cf92) list_double2_large_graphic_pane_t1

0xba9d,	// (0x0003cfa8) list_double2_large_graphic_pane_t2_ParamLimits

0xba9d,	// (0x0003cfa8) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00040b1e) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00040b1e) list_double2_large_graphic_pane_t

0xbaaf,	// (0x0003cfba) list_double_heading_pane_g1_ParamLimits

0xbaaf,	// (0x0003cfba) list_double_heading_pane_g1

0xf2a1,	// (0x000407ac) list_double_heading_pane_g2_ParamLimits

0xf2a1,	// (0x000407ac) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00040b23) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00040b23) list_double_heading_pane_g

0xbac0,	// (0x0003cfcb) list_double_heading_pane_t1_ParamLimits

0xbac0,	// (0x0003cfcb) list_double_heading_pane_t1

0xb926,	// (0x0003ce31) list_double_heading_pane_t2_ParamLimits

0xb926,	// (0x0003ce31) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00040b28) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00040b28) list_double_heading_pane_t

0xb9cd,	// (0x0003ced8) list_double_graphic_heading_pane_g1_ParamLimits

0xb9cd,	// (0x0003ced8) list_double_graphic_heading_pane_g1

0xbaaf,	// (0x0003cfba) list_double_graphic_heading_pane_g2_ParamLimits

0xbaaf,	// (0x0003cfba) list_double_graphic_heading_pane_g2

0xf2a1,	// (0x000407ac) list_double_graphic_heading_pane_g3_ParamLimits

0xf2a1,	// (0x000407ac) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00040b2d) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00040b2d) list_double_graphic_heading_pane_g

0xbad6,	// (0x0003cfe1) list_double_graphic_heading_pane_t1_ParamLimits

0xbad6,	// (0x0003cfe1) list_double_graphic_heading_pane_t1

0xb9fb,	// (0x0003cf06) list_double_graphic_heading_pane_t2_ParamLimits

0xb9fb,	// (0x0003cf06) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00040b34) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00040b34) list_double_graphic_heading_pane_t

0xba2c,	// (0x0003cf37) list_double_time_pane_g1_ParamLimits

0xba2c,	// (0x0003cf37) list_double_time_pane_g1

0xb8bf,	// (0x0003cdca) list_double_time_pane_g2_ParamLimits

0xb8bf,	// (0x0003cdca) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00040b39) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00040b39) list_double_time_pane_g

0xbaec,	// (0x0003cff7) list_double_time_pane_t1_ParamLimits

0xbaec,	// (0x0003cff7) list_double_time_pane_t1

0xbb02,	// (0x0003d00d) list_double_time_pane_t2_ParamLimits

0xbb02,	// (0x0003d00d) list_double_time_pane_t2

0xbb14,	// (0x0003d01f) list_double_time_pane_t3_ParamLimits

0xbb14,	// (0x0003d01f) list_double_time_pane_t3

0xbb26,	// (0x0003d031) list_double_time_pane_t4_ParamLimits

0xbb26,	// (0x0003d031) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00040b3e) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00040b3e) list_double_time_pane_t

0xb9d9,	// (0x0003cee4) list_setting_pane_g1_ParamLimits

0xb9d9,	// (0x0003cee4) list_setting_pane_g1

0xb904,	// (0x0003ce0f) list_setting_pane_g2_ParamLimits

0xb904,	// (0x0003ce0f) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00040b47) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00040b47) list_setting_pane_g

0xbb38,	// (0x0003d043) list_setting_pane_t1_ParamLimits

0xbb38,	// (0x0003d043) list_setting_pane_t1

0xbb52,	// (0x0003d05d) list_setting_pane_t2_ParamLimits

0xbb52,	// (0x0003d05d) list_setting_pane_t2

0x0002,

0xf641,	// (0x00040b4c) list_setting_pane_t_ParamLimits

0xf641,	// (0x00040b4c) list_setting_pane_t

0xbb91,	// (0x0003d09c) set_value_pane_cp_ParamLimits

0xbb91,	// (0x0003d09c) set_value_pane_cp

0xbb9d,	// (0x0003d0a8) list_setting_number_pane_g1_ParamLimits

0xbb9d,	// (0x0003d0a8) list_setting_number_pane_g1

0xbba9,	// (0x0003d0b4) list_setting_number_pane_g2_ParamLimits

0xbba9,	// (0x0003d0b4) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x00040b53) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x00040b53) list_setting_number_pane_g

0xbbb5,	// (0x0003d0c0) list_setting_number_pane_t1_ParamLimits

0xbbb5,	// (0x0003d0c0) list_setting_number_pane_t1

0xbbce,	// (0x0003d0d9) list_setting_number_pane_t2_ParamLimits

0xbbce,	// (0x0003d0d9) list_setting_number_pane_t2

0xbbe8,	// (0x0003d0f3) list_setting_number_pane_t3_ParamLimits

0xbbe8,	// (0x0003d0f3) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x00040b58) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x00040b58) list_setting_number_pane_t

0xbb91,	// (0x0003d09c) set_value_pane_ParamLimits

0xbb91,	// (0x0003d09c) set_value_pane

0x3573,	// (0x00034a7e) bg_set_opt_pane_ParamLimits

0x3573,	// (0x00034a7e) bg_set_opt_pane

0xf2ad,	// (0x000407b8) set_value_pane_t1

0x3594,	// (0x00034a9f) slider_set_pane_cp3

0x359d,	// (0x00034aa8) volume_small_pane_cp

0x35a6,	// (0x00034ab1) list_form_gen_pane

0x35af,	// (0x00034aba) scroll_pane_cp8

0xbc2b,	// (0x0003d136) form_field_data_pane_ParamLimits

0xbc2b,	// (0x0003d136) form_field_data_pane

0xbc42,	// (0x0003d14d) form_field_data_wide_pane_ParamLimits

0xbc42,	// (0x0003d14d) form_field_data_wide_pane

0xbc62,	// (0x0003d16d) form_field_popup_pane_ParamLimits

0xbc62,	// (0x0003d16d) form_field_popup_pane

0xbc82,	// (0x0003d18d) form_field_popup_wide_pane_ParamLimits

0xbc82,	// (0x0003d18d) form_field_popup_wide_pane

0x013d,	// (0x00031648) form_field_slider_pane_ParamLimits

0x013d,	// (0x00031648) form_field_slider_pane

0x0150,	// (0x0003165b) form_field_slider_wide_pane_ParamLimits

0x0150,	// (0x0003165b) form_field_slider_wide_pane

0x35c0,	// (0x00034acb) data_form_pane

0xbca3,	// (0x0003d1ae) form_field_data_pane_t1

0x35cc,	// (0x00034ad7) input_focus_pane

0x0185,	// (0x00031690) data_form_wide_pane

0x01a2,	// (0x000316ad) form_field_data_wide_pane_t1

0x333d,	// (0x00034848) input_focus_pane_cp6

0xbcbd,	// (0x0003d1c8) form_field_popup_pane_t1

0x35cc,	// (0x00034ad7) input_focus_pane_cp7

0x35fa,	// (0x00034b05) list_form_pane

0x01e4,	// (0x000316ef) form_field_popup_wide_pane_t1

0x35cc,	// (0x00034ad7) input_focus_pane_cp8

0x3606,	// (0x00034b11) list_form_wide_pane

0xbcdf,	// (0x0003d1ea) form_field_slider_pane_t1_ParamLimits

0xbcdf,	// (0x0003d1ea) form_field_slider_pane_t1

0xbcf7,	// (0x0003d202) form_field_slider_pane_t2_ParamLimits

0xbcf7,	// (0x0003d202) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x00040b68) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x00040b68) form_field_slider_pane_t

0x2fba,	// (0x000344c5) input_focus_pane_cp9_ParamLimits

0x2fba,	// (0x000344c5) input_focus_pane_cp9

0xbd0c,	// (0x0003d217) slider_cont_pane_ParamLimits

0xbd0c,	// (0x0003d217) slider_cont_pane

0x3612,	// (0x00034b1d) form_field_slider_wide_pane_t1_ParamLimits

0x3612,	// (0x00034b1d) form_field_slider_wide_pane_t1

0x0240,	// (0x0003174b) form_field_slider_wide_pane_t2_ParamLimits

0x0240,	// (0x0003174b) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x00040b6d) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x00040b6d) form_field_slider_wide_pane_t

0x2fba,	// (0x000344c5) input_focus_pane_cp10_ParamLimits

0x2fba,	// (0x000344c5) input_focus_pane_cp10

0xbd20,	// (0x0003d22b) slider_cont_pane_cp1_ParamLimits

0xbd20,	// (0x0003d22b) slider_cont_pane_cp1

0xbd34,	// (0x0003d23f) slider_form_pane_cp

0x3624,	// (0x00034b2f) input_focus_pane_g1

0x362c,	// (0x00034b37) input_focus_pane_g2

0x3634,	// (0x00034b3f) input_focus_pane_g3

0x363c,	// (0x00034b47) input_focus_pane_g4

0x3644,	// (0x00034b4f) input_focus_pane_g5

0x364c,	// (0x00034b57) input_focus_pane_g6

0x3654,	// (0x00034b5f) input_focus_pane_g7

0x365c,	// (0x00034b67) input_focus_pane_g8

0x3664,	// (0x00034b6f) input_focus_pane_g9

0xe100,	// (0x0003f60b) input_focus_pane_g10

0x0009,

0xf667,	// (0x00040b72) input_focus_pane_g

0x5350,	// (0x0003685b) wait_border_pane_g3_copy1

0xbd3c,	// (0x0003d247) data_form_pane_t1

0xe100,	// (0x0003f60b) wait_anim_pane_g1_copy1

0xc877,	// (0x0003dd82) data_form_wide_pane_t1

0xbd56,	// (0x0003d261) list_form_graphic_pane_cp_ParamLimits

0xbd56,	// (0x0003d261) list_form_graphic_pane_cp

0x627c,	// (0x00037787) slider_form_pane_g1

0x6285,	// (0x00037790) slider_form_pane_g2

0x0006,

0xf965,	// (0x00040e70) slider_form_pane_g

0xbd68,	// (0x0003d273) list_form_graphic_pane_ParamLimits

0xbd68,	// (0x0003d273) list_form_graphic_pane

0x02be,	// (0x000317c9) list_form_graphic_pane_g1

0x02c6,	// (0x000317d1) list_form_graphic_pane_t1_ParamLimits

0x02c6,	// (0x000317d1) list_form_graphic_pane_t1

0x2d3f,	// (0x0003424a) list_highlight_pane_cp5_ParamLimits

0x2d3f,	// (0x0003424a) list_highlight_pane_cp5

0xbd7b,	// (0x0003d286) find_pane_g1

0x366c,	// (0x00034b77) input_find_pane

0xbd84,	// (0x0003d28f) input_find_pane_g1_ParamLimits

0xbd84,	// (0x0003d28f) input_find_pane_g1

0xbd90,	// (0x0003d29b) input_find_pane_t1_ParamLimits

0xbd90,	// (0x0003d29b) input_find_pane_t1

0xbda5,	// (0x0003d2b0) input_find_pane_t2_ParamLimits

0xbda5,	// (0x0003d2b0) input_find_pane_t2

0x0001,

0xf67c,	// (0x00040b87) input_find_pane_t_ParamLimits

0xf67c,	// (0x00040b87) input_find_pane_t

0x3675,	// (0x00034b80) input_focus_pane_cp5_ParamLimits

0x3675,	// (0x00034b80) input_focus_pane_cp5

0x3694,	// (0x00034b9f) bg_popup_window_pane_cp2_ParamLimits

0x3694,	// (0x00034b9f) bg_popup_window_pane_cp2

0x36a1,	// (0x00034bac) listscroll_menu_pane_ParamLimits

0x36a1,	// (0x00034bac) listscroll_menu_pane

0xbdc6,	// (0x0003d2d1) popup_submenu_window_ParamLimits

0xbdc6,	// (0x0003d2d1) popup_submenu_window

0x36d9,	// (0x00034be4) find_popup_pane_g1

0x36e1,	// (0x00034bec) input_popup_find_pane_cp

0x36eb,	// (0x00034bf6) input_focus_pane_cp4_ParamLimits

0x36eb,	// (0x00034bf6) input_focus_pane_cp4

0x3705,	// (0x00034c10) input_popup_find_pane_t1_ParamLimits

0x3705,	// (0x00034c10) input_popup_find_pane_t1

0x2c5f,	// (0x0003416a) bg_popup_sub_pane_cp

0x3733,	// (0x00034c3e) listscroll_popup_sub_pane

0x373b,	// (0x00034c46) list_submenu_pane_ParamLimits

0x373b,	// (0x00034c46) list_submenu_pane

0x374c,	// (0x00034c57) scroll_pane_cp4

0x3754,	// (0x00034c5f) list_single_popup_submenu_pane_ParamLimits

0x3754,	// (0x00034c5f) list_single_popup_submenu_pane

0x3768,	// (0x00034c73) list_single_popup_submenu_pane_g1

0x3770,	// (0x00034c7b) list_single_popup_submenu_pane_t1_ParamLimits

0x3770,	// (0x00034c7b) list_single_popup_submenu_pane_t1

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp1_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp1

0x3785,	// (0x00034c90) tabs_2_active_pane_g1

0xbe00,	// (0x0003d30b) tabs_2_active_pane_t1

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp1_ParamLimits

0x2fba,	// (0x000344c5) bg_passive_tab_pane_cp1

0x3785,	// (0x00034c90) tabs_2_passive_pane_g1

0xbe00,	// (0x0003d30b) tabs_2_passive_pane_t1

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp4

0xbe12,	// (0x0003d31d) tabs_2_long_active_pane_t1

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp4

0x0ff9,	// (0x00032504) list_single_midp_graphic_pane_g4_ParamLimits

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp5

0xbe25,	// (0x0003d330) tabs_3_long_active_pane_t1

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp5

0x0ff9,	// (0x00032504) list_single_midp_graphic_pane_g4

0x2d3f,	// (0x0003424a) bg_popup_window_pane_cp13_ParamLimits

0x2d3f,	// (0x0003424a) bg_popup_window_pane_cp13

0x37e7,	// (0x00034cf2) listscroll_popup_fast_pane_ParamLimits

0x37e7,	// (0x00034cf2) listscroll_popup_fast_pane

0x37f6,	// (0x00034d01) grid_popup_fast_pane_ParamLimits

0x37f6,	// (0x00034d01) grid_popup_fast_pane

0x3808,	// (0x00034d13) scroll_pane_cp9_ParamLimits

0x3808,	// (0x00034d13) scroll_pane_cp9

0x7bbb,	// (0x000390c6) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7bbb,	// (0x000390c6) list_single_graphic_hl_pane_t1_cp2

0x382c,	// (0x00034d37) input_focus_pane_cp20_ParamLimits

0x382c,	// (0x00034d37) input_focus_pane_cp20

0x383a,	// (0x00034d45) query_popup_data_pane_t1_ParamLimits

0x383a,	// (0x00034d45) query_popup_data_pane_t1

0x384d,	// (0x00034d58) query_popup_data_pane_t2_ParamLimits

0x384d,	// (0x00034d58) query_popup_data_pane_t2

0x3893,	// (0x00034d9e) query_popup_data_pane_t3_ParamLimits

0x3893,	// (0x00034d9e) query_popup_data_pane_t3

0x38d4,	// (0x00034ddf) query_popup_data_pane_t4_ParamLimits

0x38d4,	// (0x00034ddf) query_popup_data_pane_t4

0x3910,	// (0x00034e1b) query_popup_data_pane_t5_ParamLimits

0x3910,	// (0x00034e1b) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x00040b8c) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x00040b8c) query_popup_data_pane_t

0x3624,	// (0x00034b2f) bg_set_opt_pane_g1

0x362c,	// (0x00034b37) bg_set_opt_pane_g2

0x3634,	// (0x00034b3f) bg_set_opt_pane_g3

0x363c,	// (0x00034b47) bg_set_opt_pane_g4

0x3644,	// (0x00034b4f) bg_set_opt_pane_g5

0x364c,	// (0x00034b57) bg_set_opt_pane_g6

0x3654,	// (0x00034b5f) bg_set_opt_pane_g7

0x365c,	// (0x00034b67) bg_set_opt_pane_g8

0x3664,	// (0x00034b6f) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x00040b97) bg_set_opt_pane_g

0x0641,	// (0x00031b4c) control_top_pane_stacon_ParamLimits

0x0641,	// (0x00031b4c) control_top_pane_stacon

0x0694,	// (0x00031b9f) signal_pane_stacon_ParamLimits

0x0694,	// (0x00031b9f) signal_pane_stacon

0x415f,	// (0x0003566a) stacon_top_pane_g1_ParamLimits

0x415f,	// (0x0003566a) stacon_top_pane_g1

0x06b9,	// (0x00031bc4) title_pane_stacon_ParamLimits

0x06b9,	// (0x00031bc4) title_pane_stacon

0x06e3,	// (0x00031bee) uni_indicator_pane_stacon_ParamLimits

0x06e3,	// (0x00031bee) uni_indicator_pane_stacon

0x06f8,	// (0x00031c03) battery_pane_stacon_ParamLimits

0x06f8,	// (0x00031c03) battery_pane_stacon

0x073c,	// (0x00031c47) control_bottom_pane_stacon_ParamLimits

0x073c,	// (0x00031c47) control_bottom_pane_stacon

0x075f,	// (0x00031c6a) navi_pane_stacon_ParamLimits

0x075f,	// (0x00031c6a) navi_pane_stacon

0x4181,	// (0x0003568c) stacon_bottom_pane_g1_ParamLimits

0x4181,	// (0x0003568c) stacon_bottom_pane_g1

0x031a,	// (0x00031825) aid_levels_signal_lsc_ParamLimits

0x031a,	// (0x00031825) aid_levels_signal_lsc

0x0330,	// (0x0003183b) signal_pane_stacon_g1_ParamLimits

0x0330,	// (0x0003183b) signal_pane_stacon_g1

0x0344,	// (0x0003184f) signal_pane_stacon_g2_ParamLimits

0x0344,	// (0x0003184f) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x00040baa) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x00040baa) signal_pane_stacon_g

0x0379,	// (0x00031884) title_pane_stacon_t1_ParamLimits

0x0379,	// (0x00031884) title_pane_stacon_t1

0x3954,	// (0x00034e5f) uni_indicator_pane_stacon_g1

0x395e,	// (0x00034e69) uni_indicator_pane_stacon_g2

0x3968,	// (0x00034e73) uni_indicator_pane_stacon_g3

0x3972,	// (0x00034e7d) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x00040bb6) uni_indicator_pane_stacon_g

0x039e,	// (0x000318a9) control_top_pane_stacon_g1

0x03a6,	// (0x000318b1) control_top_pane_stacon_t1_ParamLimits

0x03a6,	// (0x000318b1) control_top_pane_stacon_t1

0x03dd,	// (0x000318e8) aid_levels_battery_lsc_ParamLimits

0x03dd,	// (0x000318e8) aid_levels_battery_lsc

0x03f4,	// (0x000318ff) battery_pane_stacon_g1_ParamLimits

0x03f4,	// (0x000318ff) battery_pane_stacon_g1

0x0407,	// (0x00031912) battery_pane_stacon_g2_ParamLimits

0x0407,	// (0x00031912) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x00040bbf) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x00040bbf) battery_pane_stacon_g

0x0445,	// (0x00031950) navi_icon_pane_stacon

0x0459,	// (0x00031964) navi_navi_pane_stacon

0x0445,	// (0x00031950) navi_text_pane_stacon

0x039e,	// (0x000318a9) control_bottom_pane_stacon_g1

0x046d,	// (0x00031978) control_bottom_pane_stacon_t1_ParamLimits

0x046d,	// (0x00031978) control_bottom_pane_stacon_t1

0xbe37,	// (0x0003d342) grid_app_pane_ParamLimits

0xbe37,	// (0x0003d342) grid_app_pane

0xbe6f,	// (0x0003d37a) scroll_pane_cp15_ParamLimits

0xbe6f,	// (0x0003d37a) scroll_pane_cp15

0xbe84,	// (0x0003d38f) cell_app_pane_ParamLimits

0xbe84,	// (0x0003d38f) cell_app_pane

0xbec9,	// (0x0003d3d4) cell_app_pane_g1_ParamLimits

0xbec9,	// (0x0003d3d4) cell_app_pane_g1

0x3c5b,	// (0x00035166) cell_app_pane_g2_ParamLimits

0x3c5b,	// (0x00035166) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x00040bc4) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x00040bc4) cell_app_pane_g

0xbeed,	// (0x0003d3f8) cell_app_pane_t1_ParamLimits

0xbeed,	// (0x0003d3f8) cell_app_pane_t1

0x3c7e,	// (0x00035189) grid_highlight_pane_ParamLimits

0x3c7e,	// (0x00035189) grid_highlight_pane

0x3624,	// (0x00034b2f) cell_highlight_pane_g1

0x362c,	// (0x00034b37) cell_highlight_pane_g2

0x3634,	// (0x00034b3f) cell_highlight_pane_g3

0x363c,	// (0x00034b47) cell_highlight_pane_g4

0x3644,	// (0x00034b4f) cell_highlight_pane_g5

0x364c,	// (0x00034b57) cell_highlight_pane_g6

0x3654,	// (0x00034b5f) cell_highlight_pane_g7

0x365c,	// (0x00034b67) cell_highlight_pane_g8

0x3664,	// (0x00034b6f) cell_highlight_pane_g9

0xe100,	// (0x0003f60b) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x00040b72) cell_highlight_pane_g

0x3c8f,	// (0x0003519a) bg_scroll_pane

0x04b7,	// (0x000319c2) scroll_handle_pane

0x3cd6,	// (0x000351e1) scroll_bg_pane_g1

0x3ceb,	// (0x000351f6) scroll_bg_pane_g2

0x3d03,	// (0x0003520e) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x00040bc9) scroll_bg_pane_g

0x3d18,	// (0x00035223) scroll_handle_focus_pane_ParamLimits

0x3d18,	// (0x00035223) scroll_handle_focus_pane

0x3cd6,	// (0x000351e1) scroll_handle_pane_g1

0x3d25,	// (0x00035230) scroll_handle_pane_g2

0x3d03,	// (0x0003520e) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x00040bd0) scroll_handle_pane_g

0x36eb,	// (0x00034bf6) bg_popup_sub_pane_cp21_ParamLimits

0x36eb,	// (0x00034bf6) bg_popup_sub_pane_cp21

0x3d39,	// (0x00035244) popup_fep_japan_predictive_window_t1_ParamLimits

0x3d39,	// (0x00035244) popup_fep_japan_predictive_window_t1

0x3d53,	// (0x0003525e) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d53,	// (0x0003525e) popup_fep_japan_predictive_window_t2

0x3d86,	// (0x00035291) popup_fep_japan_predictive_window_t3_ParamLimits

0x3d86,	// (0x00035291) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x00040bd7) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x00040bd7) popup_fep_japan_predictive_window_t

0x2c5f,	// (0x0003416a) bg_popup_sub_pane_cp23

0x3dbd,	// (0x000352c8) listscroll_japin_cand_pane

0x3dc5,	// (0x000352d0) popup_fep_japan_candidate_window_t1

0x3dd3,	// (0x000352de) candidate_pane_ParamLimits

0x3dd3,	// (0x000352de) candidate_pane

0x3de5,	// (0x000352f0) scroll_pane_cp30

0x3ded,	// (0x000352f8) list_single_popup_jap_candidate_pane_ParamLimits

0x3ded,	// (0x000352f8) list_single_popup_jap_candidate_pane

0x2c5f,	// (0x0003416a) list_highlight_pane_cp30

0x3e02,	// (0x0003530d) list_single_popup_jap_candidate_pane_t1

0x3e11,	// (0x0003531c) level_1_signal

0x3e23,	// (0x0003532e) level_2_signal

0x3e36,	// (0x00035341) level_3_signal

0x3e49,	// (0x00035354) level_4_signal

0x3e5c,	// (0x00035367) level_5_signal

0x3e6f,	// (0x0003537a) level_6_signal

0x3e82,	// (0x0003538d) level_7_signal

0x3e11,	// (0x0003531c) level_1_battery

0x3e23,	// (0x0003532e) level_2_battery

0x3e36,	// (0x00035341) level_3_battery

0x3e49,	// (0x00035354) level_4_battery

0x3e5c,	// (0x00035367) level_5_battery

0x3e6f,	// (0x0003537a) level_6_battery

0x3e82,	// (0x0003538d) level_7_battery

0x3ead,	// (0x000353b8) list_menu_pane_ParamLimits

0x3ead,	// (0x000353b8) list_menu_pane

0x3ec3,	// (0x000353ce) scroll_pane_cp25_ParamLimits

0x3ec3,	// (0x000353ce) scroll_pane_cp25

0x3edc,	// (0x000353e7) list_double2_graphic_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double2_graphic_pane_cp2

0x3edc,	// (0x000353e7) list_double2_large_graphic_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double2_large_graphic_pane_cp2

0x3edc,	// (0x000353e7) list_double2_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double2_pane_cp2

0x3edc,	// (0x000353e7) list_double_graphic_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double_graphic_pane_cp2

0x3edc,	// (0x000353e7) list_double_large_graphic_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double_large_graphic_pane_cp2

0x3edc,	// (0x000353e7) list_double_number_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double_number_pane_cp2

0x3edc,	// (0x000353e7) list_double_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double_pane_cp2

0xbf04,	// (0x0003d40f) list_single_2graphic_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_2graphic_pane_cp2

0xbf04,	// (0x0003d40f) list_single_graphic_heading_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_graphic_heading_pane_cp2

0xbf04,	// (0x0003d40f) list_single_graphic_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_graphic_pane_cp2

0xbf04,	// (0x0003d40f) list_single_heading_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_heading_pane_cp2

0x3f19,	// (0x00035424) list_single_large_graphic_pane_cp2_ParamLimits

0x3f19,	// (0x00035424) list_single_large_graphic_pane_cp2

0xbf04,	// (0x0003d40f) list_single_number_heading_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_number_heading_pane_cp2

0xbf04,	// (0x0003d40f) list_single_number_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_number_pane_cp2

0xd14c,	// (0x0003e657) list_single_pane_cp2_ParamLimits

0xd14c,	// (0x0003e657) list_single_pane_cp2

0x3fae,	// (0x000354b9) bg_popup_sub_pane_cp22

0x0569,	// (0x00031a74) popup_side_volume_key_window_g1

0x0593,	// (0x00031a9e) popup_side_volume_key_window_t1

0x05af,	// (0x00031aba) volume_small_pane_cp1

0x2fba,	// (0x000344c5) bg_popup_sub_pane_cp24_ParamLimits

0x2fba,	// (0x000344c5) bg_popup_sub_pane_cp24

0x3fc4,	// (0x000354cf) fep_china_uni_candidate_pane_ParamLimits

0x3fc4,	// (0x000354cf) fep_china_uni_candidate_pane

0x3fd8,	// (0x000354e3) fep_china_uni_entry_pane

0x3fe8,	// (0x000354f3) popup_fep_china_uni_window_g1

0x4004,	// (0x0003550f) fep_china_uni_entry_pane_g1

0x400c,	// (0x00035517) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x00040c08) fep_china_uni_entry_pane_g

0x4014,	// (0x0003551f) fep_entry_item_pane

0x401e,	// (0x00035529) fep_candidate_item_pane

0x4026,	// (0x00035531) fep_china_uni_candidate_pane_g1

0x402e,	// (0x00035539) fep_china_uni_candidate_pane_g2

0x4036,	// (0x00035541) fep_china_uni_candidate_pane_g3

0x403e,	// (0x00035549) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x00040c0d) fep_china_uni_candidate_pane_g

0xe100,	// (0x0003f60b) fep_entry_item_pane_g1

0x4046,	// (0x00035551) fep_entry_item_pane_t1_ParamLimits

0x4046,	// (0x00035551) fep_entry_item_pane_t1

0x405c,	// (0x00035567) fep_candidate_item_pane_t1_ParamLimits

0x405c,	// (0x00035567) fep_candidate_item_pane_t1

0x4071,	// (0x0003557c) fep_candidate_item_pane_t2_ParamLimits

0x4071,	// (0x0003557c) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x00040c16) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x00040c16) fep_candidate_item_pane_t

0x2d3f,	// (0x0003424a) list_highlight_pane_cp31_ParamLimits

0x2d3f,	// (0x0003424a) list_highlight_pane_cp31

0x4083,	// (0x0003558e) level_1_signal_lsc

0x408c,	// (0x00035597) level_2_signal_lsc

0x4095,	// (0x000355a0) level_3_signal_lsc

0x409e,	// (0x000355a9) level_4_signal_lsc

0x40a7,	// (0x000355b2) level_5_signal_lsc

0x40b0,	// (0x000355bb) level_6_signal_lsc

0x40b9,	// (0x000355c4) level_7_signal_lsc

0x40b9,	// (0x000355c4) level_1_battery_lsc

0x40c2,	// (0x000355cd) level_2_battery_lsc

0x40cb,	// (0x000355d6) level_3_battery_lsc

0x40d4,	// (0x000355df) level_4_battery_lsc

0x40dd,	// (0x000355e8) level_5_battery_lsc

0x40e6,	// (0x000355f1) level_6_battery_lsc

0x4083,	// (0x0003558e) level_7_battery_lsc

0x40ef,	// (0x000355fa) scroll_handle_focus_pane_g1

0x40f8,	// (0x00035603) scroll_handle_focus_pane_g2

0x4101,	// (0x0003560c) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x00040c1b) scroll_handle_focus_pane_g

0xbf16,	// (0x0003d421) list_single_2graphic_pane_g1_ParamLimits

0xbf16,	// (0x0003d421) list_single_2graphic_pane_g1

0xb888,	// (0x0003cd93) list_single_2graphic_pane_g2_ParamLimits

0xb888,	// (0x0003cd93) list_single_2graphic_pane_g2

0x102d,	// (0x00032538) list_single_2graphic_pane_g3_ParamLimits

0x102d,	// (0x00032538) list_single_2graphic_pane_g3

0xbf22,	// (0x0003d42d) list_single_2graphic_pane_g4_ParamLimits

0xbf22,	// (0x0003d42d) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x00040c22) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x00040c22) list_single_2graphic_pane_g

0xbf33,	// (0x0003d43e) list_single_2graphic_pane_t1_ParamLimits

0xbf33,	// (0x0003d43e) list_single_2graphic_pane_t1

0xbf61,	// (0x0003d46c) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbf61,	// (0x0003d46c) list_double2_graphic_large_graphic_pane_g1

0xb8f3,	// (0x0003cdfe) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb8f3,	// (0x0003cdfe) list_double2_graphic_large_graphic_pane_g2

0xb904,	// (0x0003ce0f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb904,	// (0x0003ce0f) list_double2_graphic_large_graphic_pane_g3

0xbf73,	// (0x0003d47e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbf73,	// (0x0003d47e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x00040c2b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x00040c2b) list_double2_graphic_large_graphic_pane_g

0xbf7f,	// (0x0003d48a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbf7f,	// (0x0003d48a) list_double2_graphic_large_graphic_pane_t1

0xbf95,	// (0x0003d4a0) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbf95,	// (0x0003d4a0) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x00040c34) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x00040c34) list_double2_graphic_large_graphic_pane_t

0x424c,	// (0x00035757) popup_fast_swap_window_ParamLimits

0x424c,	// (0x00035757) popup_fast_swap_window

0x4268,	// (0x00035773) popup_side_volume_key_window

0x4284,	// (0x0003578f) stacon_top_pane

0x428e,	// (0x00035799) status_pane_ParamLimits

0x428e,	// (0x00035799) status_pane

0xd1d9,	// (0x0003e6e4) status_small_pane

0x2c5f,	// (0x0003416a) control_pane

0x2c5f,	// (0x0003416a) stacon_bottom_pane

0x35af,	// (0x00034aba) scroll_pane_cp121

0x35a6,	// (0x00034ab1) set_content_pane

0x410a,	// (0x00035615) bg_active_tab_pane_g1_cp1

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp1

0x411c,	// (0x00035627) bg_active_tab_pane_g3_cp1

0x410a,	// (0x00035615) bg_passive_tab_pane_g1_cp1

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp1

0x411c,	// (0x00035627) bg_passive_tab_pane_g3_cp1

0x4125,	// (0x00035630) bg_active_tab_pane_g1_cp2

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp2

0x412e,	// (0x00035639) bg_active_tab_pane_g3_cp2

0x4125,	// (0x00035630) bg_passive_tab_pane_g1_cp2

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp2

0x412e,	// (0x00035639) bg_passive_tab_pane_g3_cp2

0x4137,	// (0x00035642) bg_active_tab_pane_g1_cp3

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp3

0x4140,	// (0x0003564b) bg_active_tab_pane_g3_cp3

0x4137,	// (0x00035642) bg_passive_tab_pane_g1_cp3

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp3

0x4140,	// (0x0003564b) bg_passive_tab_pane_g3_cp3

0x4149,	// (0x00035654) bg_active_tab_pane_g1_cp4

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp4

0x4154,	// (0x0003565f) bg_active_tab_pane_g3_cp4

0x4149,	// (0x00035654) bg_passive_tab_pane_g1_cp4

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp4

0x4154,	// (0x0003565f) bg_passive_tab_pane_g3_cp4

0x419d,	// (0x000356a8) bg_active_tab_pane_g1_cp5

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp5

0x41a6,	// (0x000356b1) bg_active_tab_pane_g3_cp5

0x419d,	// (0x000356a8) bg_passive_tab_pane_g1_cp5

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp5

0x41a6,	// (0x000356b1) bg_passive_tab_pane_g3_cp5

0x6890,	// (0x00037d9b) list_set_graphic_pane_ParamLimits

0x6890,	// (0x00037d9b) list_set_graphic_pane

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp4

0x41cf,	// (0x000356da) list_set_graphic_pane_g1_ParamLimits

0x41cf,	// (0x000356da) list_set_graphic_pane_g1

0x41db,	// (0x000356e6) list_set_graphic_pane_g2_ParamLimits

0x41db,	// (0x000356e6) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x00040c39) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x00040c39) list_set_graphic_pane_g

0x0009,

0xfaa5,	// (0x00040fb0) volume_small_pane_cp_g

0x41ff,	// (0x0003570a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x41ff,	// (0x0003570a) list_double2_large_graphic_pane_g1_cp2

0x420b,	// (0x00035716) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x420b,	// (0x00035716) list_double2_large_graphic_pane_g2_cp2

0x421c,	// (0x00035727) list_double2_large_graphic_pane_g3_cp2

0x4224,	// (0x0003572f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4224,	// (0x0003572f) list_double2_large_graphic_pane_t1_cp2

0x423a,	// (0x00035745) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x423a,	// (0x00035745) list_double2_large_graphic_pane_t2_cp2

0x5e2f,	// (0x0003733a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5e2f,	// (0x0003733a) list_double_large_graphic_pane_g1_cp2

0x5e40,	// (0x0003734b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5e40,	// (0x0003734b) list_double_large_graphic_pane_g2_cp2

0x43b5,	// (0x000358c0) list_double_large_graphic_pane_g3_cp2

0x5e51,	// (0x0003735c) list_double_large_graphic_pane_g4_cp

0x5e59,	// (0x00037364) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e59,	// (0x00037364) list_double_large_graphic_pane_t1_cp2

0x5e70,	// (0x0003737b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e70,	// (0x0003737b) list_double_large_graphic_pane_t2_cp2

0x42a7,	// (0x000357b2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x42a7,	// (0x000357b2) list_double2_graphic_pane_g1_cp2

0x42b5,	// (0x000357c0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x42b5,	// (0x000357c0) list_double2_graphic_pane_g2_cp2

0x42c6,	// (0x000357d1) list_double2_graphic_pane_g3_cp2

0x42d0,	// (0x000357db) list_double2_graphic_pane_t1_cp2_ParamLimits

0x42d0,	// (0x000357db) list_double2_graphic_pane_t1_cp2

0x42e6,	// (0x000357f1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x42e6,	// (0x000357f1) list_double2_graphic_pane_t2_cp2

0x42f8,	// (0x00035803) list_single_number_heading_pane_g1_cp2_ParamLimits

0x42f8,	// (0x00035803) list_single_number_heading_pane_g1_cp2

0x4304,	// (0x0003580f) list_single_number_heading_pane_g2_cp2

0x430c,	// (0x00035817) list_single_number_heading_pane_t1_cp2_ParamLimits

0x430c,	// (0x00035817) list_single_number_heading_pane_t1_cp2

0x4322,	// (0x0003582d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x4322,	// (0x0003582d) list_single_number_heading_pane_t2_cp2

0x4334,	// (0x0003583f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4334,	// (0x0003583f) list_single_number_heading_pane_t3_cp2

0x42f8,	// (0x00035803) list_single_heading_pane_g1_cp2_ParamLimits

0x42f8,	// (0x00035803) list_single_heading_pane_g1_cp2

0x4304,	// (0x0003580f) list_single_heading_pane_g2_cp2

0x430c,	// (0x00035817) list_single_heading_pane_t1_cp2_ParamLimits

0x430c,	// (0x00035817) list_single_heading_pane_t1_cp2

0x5c37,	// (0x00037142) list_single_heading_pane_t2_cp2_ParamLimits

0x5c37,	// (0x00037142) list_single_heading_pane_t2_cp2

0x5b7f,	// (0x0003708a) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b7f,	// (0x0003708a) list_double_graphic_pane_g1_cp2

0x5b8b,	// (0x00037096) list_double_graphic_pane_g2_cp2_ParamLimits

0x5b8b,	// (0x00037096) list_double_graphic_pane_g2_cp2

0x5b9a,	// (0x000370a5) list_double_graphic_pane_g3_cp2

0x5ba2,	// (0x000370ad) list_double_graphic_pane_t1_cp2_ParamLimits

0x5ba2,	// (0x000370ad) list_double_graphic_pane_t1_cp2

0x5bb8,	// (0x000370c3) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bb8,	// (0x000370c3) list_double_graphic_pane_t2_cp2

0x43a9,	// (0x000358b4) list_double_number_pane_g1_cp2_ParamLimits

0x43a9,	// (0x000358b4) list_double_number_pane_g1_cp2

0x43b5,	// (0x000358c0) list_double_number_pane_g2_cp2

0x5b43,	// (0x0003704e) list_double_number_pane_t1_cp2_ParamLimits

0x5b43,	// (0x0003704e) list_double_number_pane_t1_cp2

0x5b57,	// (0x00037062) list_double_number_pane_t2_cp2_ParamLimits

0x5b57,	// (0x00037062) list_double_number_pane_t2_cp2

0x5b6d,	// (0x00037078) list_double_number_pane_t3_cp2_ParamLimits

0x5b6d,	// (0x00037078) list_double_number_pane_t3_cp2

0x5a20,	// (0x00036f2b) list_single_graphic_pane_g1_cp2_ParamLimits

0x5a20,	// (0x00036f2b) list_single_graphic_pane_g1_cp2

0x4416,	// (0x00035921) list_single_graphic_pane_g2_cp2_ParamLimits

0x4416,	// (0x00035921) list_single_graphic_pane_g2_cp2

0x4422,	// (0x0003592d) list_single_graphic_pane_g3_cp2

0x59f6,	// (0x00036f01) list_single_graphic_pane_t1_cp2_ParamLimits

0x59f6,	// (0x00036f01) list_single_graphic_pane_t1_cp2

0x4416,	// (0x00035921) list_single_number_pane_g1_cp2_ParamLimits

0x4416,	// (0x00035921) list_single_number_pane_g1_cp2

0x4422,	// (0x0003592d) list_single_number_pane_g2_cp2

0x59f6,	// (0x00036f01) list_single_number_pane_t1_cp2_ParamLimits

0x59f6,	// (0x00036f01) list_single_number_pane_t1_cp2

0x5a0c,	// (0x00036f17) list_single_number_pane_t2_cp2_ParamLimits

0x5a0c,	// (0x00036f17) list_single_number_pane_t2_cp2

0x420b,	// (0x00035716) list_double2_pane_g1_cp2_ParamLimits

0x420b,	// (0x00035716) list_double2_pane_g1_cp2

0x421c,	// (0x00035727) list_double2_pane_g2_cp2

0x4381,	// (0x0003588c) list_double2_pane_t1_cp2_ParamLimits

0x4381,	// (0x0003588c) list_double2_pane_t1_cp2

0x4397,	// (0x000358a2) list_double2_pane_t2_cp2_ParamLimits

0x4397,	// (0x000358a2) list_double2_pane_t2_cp2

0x43a9,	// (0x000358b4) list_double_pane_g1_cp2_ParamLimits

0x43a9,	// (0x000358b4) list_double_pane_g1_cp2

0x43b5,	// (0x000358c0) list_double_pane_g2_cp2

0x43bd,	// (0x000358c8) list_double_pane_t1_cp2_ParamLimits

0x43bd,	// (0x000358c8) list_double_pane_t1_cp2

0x43d3,	// (0x000358de) list_double_pane_t2_cp2_ParamLimits

0x43d3,	// (0x000358de) list_double_pane_t2_cp2

0x4406,	// (0x00035911) list_single_pane_cp2_g3

0x4416,	// (0x00035921) list_single_pane_g1_cp2_ParamLimits

0x4416,	// (0x00035921) list_single_pane_g1_cp2

0x4422,	// (0x0003592d) list_single_pane_g2_cp2

0x442a,	// (0x00035935) list_single_pane_t1_cp2_ParamLimits

0x442a,	// (0x00035935) list_single_pane_t1_cp2

0x4442,	// (0x0003594d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4442,	// (0x0003594d) list_single_large_graphic_pane_g1_cp2

0x444e,	// (0x00035959) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x444e,	// (0x00035959) list_single_large_graphic_pane_g2_cp2

0x445a,	// (0x00035965) list_single_large_graphic_pane_g3_cp2

0x4462,	// (0x0003596d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4462,	// (0x0003596d) list_single_large_graphic_pane_g4_cp1

0x447c,	// (0x00035987) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x447c,	// (0x00035987) list_single_large_graphic_pane_t1_cp2

0x59c2,	// (0x00036ecd) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59c2,	// (0x00036ecd) list_single_graphic_heading_pane_g1_cp2

0x598f,	// (0x00036e9a) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x598f,	// (0x00036e9a) list_single_graphic_heading_pane_g4_cp2

0x4422,	// (0x0003592d) list_single_graphic_heading_pane_g5_cp2

0x59ce,	// (0x00036ed9) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59ce,	// (0x00036ed9) list_single_graphic_heading_pane_t1_cp2

0x59e4,	// (0x00036eef) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x59e4,	// (0x00036eef) list_single_graphic_heading_pane_t2_cp2

0x5983,	// (0x00036e8e) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5983,	// (0x00036e8e) list_single_2graphic_pane_g1_cp2

0x598f,	// (0x00036e9a) list_single_2graphic_pane_g2_cp2_ParamLimits

0x598f,	// (0x00036e9a) list_single_2graphic_pane_g2_cp2

0x4422,	// (0x0003592d) list_single_2graphic_pane_g3_cp2

0x59a0,	// (0x00036eab) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59a0,	// (0x00036eab) list_single_2graphic_pane_g4_cp2

0x59ac,	// (0x00036eb7) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59ac,	// (0x00036eb7) list_single_2graphic_pane_t1_cp2

0xe100,	// (0x0003f60b) list_highlight_pane_g10_cp1

0x555b,	// (0x00036a66) list_highlight_pane_g1_cp1

0x5563,	// (0x00036a6e) list_highlight_pane_g2_cp1

0x556b,	// (0x00036a76) list_highlight_pane_g3_cp1

0x5573,	// (0x00036a7e) list_highlight_pane_g4_cp1

0x557b,	// (0x00036a86) list_highlight_pane_g5_cp1

0x5583,	// (0x00036a8e) list_highlight_pane_g6_cp1

0x558b,	// (0x00036a96) list_highlight_pane_g7_cp1

0x5593,	// (0x00036a9e) list_highlight_pane_g8_cp1

0x559b,	// (0x00036aa6) list_highlight_pane_g9_cp1

0xd811,	// (0x0003ed1c) form_field_slider_pane_t3

0xd81f,	// (0x0003ed2a) form_field_slider_pane_t4

0x5497,	// (0x000369a2) slider_form_pane_ParamLimits

0x5497,	// (0x000369a2) slider_form_pane

0x2c5f,	// (0x0003416a) control_abbreviations

0x2c5f,	// (0x0003416a) control_conventions

0x2c5f,	// (0x0003416a) control_definitions

0x2c5f,	// (0x0003416a) format_table_attribute

0x5c81,	// (0x0003718c) bg_popup_preview_window_pane_g9

0x2c5f,	// (0x0003416a) format_table_data2

0x2c5f,	// (0x0003416a) format_table_data3

0x2c5f,	// (0x0003416a) format_table_data_example

0x0008,

0x2c5f,	// (0x0003416a) intro_purpose

0xf8c5,	// (0x00040dd0) bg_popup_preview_window_pane_g

0x2c5f,	// (0x0003416a) texts_category

0x2c5f,	// (0x0003416a) texts_graphics

0x4492,	// (0x0003599d) text_digital

0x44a1,	// (0x000359ac) text_primary

0x44b0,	// (0x000359bb) text_primary_small

0x44bf,	// (0x000359ca) text_secondary

0x44ce,	// (0x000359d9) text_title

0x63c4,	// (0x000378cf) bg_passive_tab_pane_g1_cp3_srt

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp3_srt

0x63cd,	// (0x000378d8) bg_passive_tab_pane_g3_cp3_srt

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp3_srt_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp3_srt

0x63d6,	// (0x000378e1) tabs_4_active_pane_srt_g1

0xdb63,	// (0x0003f06e) tabs_4_active_pane_srt_t1_ParamLimits

0xdb63,	// (0x0003f06e) tabs_4_active_pane_srt_t1

0x63c4,	// (0x000378cf) bg_active_tab_pane_g1_cp3_copy1

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp3_copy1

0x63cd,	// (0x000378d8) bg_active_tab_pane_g3_cp3_copy1

0x2d3f,	// (0x0003424a) tabs_2_long_active_pane_srt_ParamLimits

0x2d3f,	// (0x0003424a) tabs_2_long_active_pane_srt

0x2d3f,	// (0x0003424a) tabs_2_long_passive_pane_srt_ParamLimits

0x2d3f,	// (0x0003424a) tabs_2_long_passive_pane_srt

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp4_srt

0x60af,	// (0x000375ba) bg_passive_tab_pane_g1_cp4_srt

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp4_srt

0x60b8,	// (0x000375c3) bg_passive_tab_pane_g3_cp4_srt

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp4_srt_ParamLimits

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp4_srt

0xd97c,	// (0x0003ee87) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd97c,	// (0x0003ee87) tabs_2_long_active_pane_srt_t1

0x60af,	// (0x000375ba) bg_active_tab_pane_g1_cp4_srt

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp4_srt

0x60b8,	// (0x000375c3) bg_active_tab_pane_g3_cp4_srt

0x2fba,	// (0x000344c5) tabs_3_long_active_pane_srt_ParamLimits

0x2fba,	// (0x000344c5) tabs_3_long_active_pane_srt

0x2fba,	// (0x000344c5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2fba,	// (0x000344c5) tabs_3_long_passive_pane_cp_srt

0x2fba,	// (0x000344c5) tabs_3_long_passive_pane_srt_ParamLimits

0x2fba,	// (0x000344c5) tabs_3_long_passive_pane_srt

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp5_srt

0x419d,	// (0x000356a8) bg_passive_tab_pane_g1_cp5_srt

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp5_srt

0x41a6,	// (0x000356b1) bg_passive_tab_pane_g3_cp5_srt

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp5_srt_ParamLimits

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp5_srt

0xd966,	// (0x0003ee71) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd966,	// (0x0003ee71) tabs_3_long_active_pane_srt_t1

0x419d,	// (0x000356a8) bg_active_tab_pane_g1_cp5_srt

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp5_srt

0x41a6,	// (0x000356b1) bg_active_tab_pane_g3_cp5_srt

0x608f,	// (0x0003759a) navi_text_pane_srt_t1

0x6087,	// (0x00037592) navi_icon_pane_srt_g1

0x46a3,	// (0x00035bae) midp_editing_number_pane_srt

0x44dd,	// (0x000359e8) midp_ticker_pane_srt

0x46ab,	// (0x00035bb6) midp_ticker_pane_srt_g1

0x46b3,	// (0x00035bbe) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x00040c58) midp_ticker_pane_srt_g

0x46bb,	// (0x00035bc6) midp_ticker_pane_srt_t1

0x6078,	// (0x00037583) midp_editing_number_pane_t1_copy1

0xd1e4,	// (0x0003e6ef) listscroll_midp_pane

0xd1e4,	// (0x0003e6ef) midp_form_pane

0x4555,	// (0x00035a60) midp_info_popup_window_ParamLimits

0x4555,	// (0x00035a60) midp_info_popup_window

0x36eb,	// (0x00034bf6) bg_popup_sub_pane_cp50_ParamLimits

0x36eb,	// (0x00034bf6) bg_popup_sub_pane_cp50

0x517f,	// (0x0003668a) listscroll_midp_info_pane_ParamLimits

0x517f,	// (0x0003668a) listscroll_midp_info_pane

0x515f,	// (0x0003666a) listscroll_form_midp_pane_ParamLimits

0x515f,	// (0x0003666a) listscroll_form_midp_pane

0x516b,	// (0x00036676) scroll_bar_cp050

0x515f,	// (0x0003666a) list_midp_pane

0x6e3f,	// (0x0003834a) signal_pane_g2_cp

0x5079,	// (0x00036584) listscroll_midp_info_pane_t1_ParamLimits

0x5079,	// (0x00036584) listscroll_midp_info_pane_t1

0x5091,	// (0x0003659c) listscroll_midp_info_pane_t2_ParamLimits

0x5091,	// (0x0003659c) listscroll_midp_info_pane_t2

0x50cf,	// (0x000365da) listscroll_midp_info_pane_t3_ParamLimits

0x50cf,	// (0x000365da) listscroll_midp_info_pane_t3

0x5109,	// (0x00036614) listscroll_midp_info_pane_t4_ParamLimits

0x5109,	// (0x00036614) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x00040d0b) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x00040d0b) listscroll_midp_info_pane_t

0x374c,	// (0x00034c57) scroll_pane_cp21

0x5017,	// (0x00036522) form_midp_field_choice_group_pane

0x5020,	// (0x0003652b) form_midp_field_text_pane

0x505f,	// (0x0003656a) form_midp_field_time_pane

0x5067,	// (0x00036572) form_midp_gauge_slider_pane

0x5070,	// (0x0003657b) form_midp_gauge_wait_pane

0x2c5f,	// (0x0003416a) form_midp_image_pane

0xc84e,	// (0x0003dd59) list_single_midp_pane_ParamLimits

0xc84e,	// (0x0003dd59) list_single_midp_pane

0xd7f0,	// (0x0003ecfb) form_midp_field_text_pane_t1

0x4d9f,	// (0x000362aa) input_focus_pane_cp050

0x5006,	// (0x00036511) list_midp_form_text_pane

0x4f9e,	// (0x000364a9) form_midp_field_choice_group_pane_t1

0x4fac,	// (0x000364b7) input_focus_pane_cp051

0x4fc0,	// (0x000364cb) list_midp_choice_pane

0x2c5f,	// (0x0003416a) status_idle_pane

0x4f82,	// (0x0003648d) form_midp_field_time_pane_t1

0xe100,	// (0x0003f60b) wait_anim_pane_g2_copy1

0x4f90,	// (0x0003649b) form_midp_field_time_pane_t2

0x0001,

0x4603,	// (0x00035b0e) aid_navinavi_width_2_pane

0xf7fb,	// (0x00040d06) form_midp_field_time_pane_t

0x2c5f,	// (0x0003416a) input_focus_pane_cp052

0x2c5f,	// (0x0003416a) bg_input_focus_pane_cp040

0x4f42,	// (0x0003644d) form_midp_gauge_slider_pane_t1

0x4f50,	// (0x0003645b) form_midp_gauge_slider_pane_t2

0xd7d4,	// (0x0003ecdf) form_midp_gauge_slider_pane_t3

0xd7e2,	// (0x0003eced) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x00040cfd) form_midp_gauge_slider_pane_t

0x4f7a,	// (0x00036485) form_midp_slider_pane

0x2d3f,	// (0x0003424a) bg_input_focus_pane_cp041_ParamLimits

0x2d3f,	// (0x0003424a) bg_input_focus_pane_cp041

0x4f0f,	// (0x0003641a) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f0f,	// (0x0003641a) form_midp_gauge_wait_pane_t1

0x4f21,	// (0x0003642c) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f21,	// (0x0003642c) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x00040cf8) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x00040cf8) form_midp_gauge_wait_pane_t

0x4f33,	// (0x0003643e) form_midp_wait_pane_ParamLimits

0x4f33,	// (0x0003643e) form_midp_wait_pane

0x4ed9,	// (0x000363e4) form_midp_image_pane_g1

0x4ee2,	// (0x000363ed) form_midp_image_pane_t1

0x4ef1,	// (0x000363fc) form_midp_image_pane_t2

0x4f00,	// (0x0003640b) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x00040cf1) form_midp_image_pane_t

0x4ed0,	// (0x000363db) list_single_midp_pane_g1

0x1196,	// (0x000326a1) list_single_midp_pane_t1

0xd7c0,	// (0x0003eccb) list_midp_form_item_pane_ParamLimits

0xd7c0,	// (0x0003eccb) list_midp_form_item_pane

0x45ab,	// (0x00035ab6) list_midp_form_item_pane_t1

0x45ba,	// (0x00035ac5) midp_ticker_pane_g1

0x45c6,	// (0x00035ad1) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x00040c3e) midp_ticker_pane_g

0x45d2,	// (0x00035add) midp_ticker_pane_t1

0x62c9,	// (0x000377d4) midp_editing_number_pane_t1

0x62a7,	// (0x000377b2) midp_editing_number_pane

0x62b6,	// (0x000377c1) midp_ticker_pane

0x6068,	// (0x00037573) ai_message_heading_pane

0x2c5f,	// (0x0003416a) bg_popup_window_pane_cp14

0x6070,	// (0x0003757b) listscroll_ai_message_pane

0x5ff2,	// (0x000374fd) ai_message_heading_pane_g1_ParamLimits

0x5ff2,	// (0x000374fd) ai_message_heading_pane_g1

0x5ffe,	// (0x00037509) ai_message_heading_pane_g2_ParamLimits

0x5ffe,	// (0x00037509) ai_message_heading_pane_g2

0x600a,	// (0x00037515) ai_message_heading_pane_g3_ParamLimits

0x600a,	// (0x00037515) ai_message_heading_pane_g3

0x6016,	// (0x00037521) ai_message_heading_pane_g4_ParamLimits

0x6016,	// (0x00037521) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x00040e32) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x00040e32) ai_message_heading_pane_g

0x6022,	// (0x0003752d) ai_message_heading_pane_t1_ParamLimits

0x6022,	// (0x0003752d) ai_message_heading_pane_t1

0x603c,	// (0x00037547) ai_message_heading_pane_t2_ParamLimits

0x603c,	// (0x00037547) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x00040e3b) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x00040e3b) ai_message_heading_pane_t

0x604e,	// (0x00037559) bg_popup_heading_pane_cp1_ParamLimits

0x604e,	// (0x00037559) bg_popup_heading_pane_cp1

0x5fe0,	// (0x000374eb) list_ai_message_pane_ParamLimits

0x5fe0,	// (0x000374eb) list_ai_message_pane

0x374c,	// (0x00034c57) scroll_pane_cp10

0x5f7c,	// (0x00037487) list_ai_message_pane_g1

0x5f84,	// (0x0003748f) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x00040e0f) list_ai_message_pane_g

0x5f8c,	// (0x00037497) list_ai_message_pane_t1_ParamLimits

0x5f8c,	// (0x00037497) list_ai_message_pane_t1

0x5fa1,	// (0x000374ac) list_ai_message_pane_t2_ParamLimits

0x5fa1,	// (0x000374ac) list_ai_message_pane_t2

0x5fb6,	// (0x000374c1) list_ai_message_pane_t3_ParamLimits

0x5fb6,	// (0x000374c1) list_ai_message_pane_t3

0x5fcb,	// (0x000374d6) list_ai_message_pane_t4_ParamLimits

0x5fcb,	// (0x000374d6) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x00040e14) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x00040e14) list_ai_message_pane_t

0xd945,	// (0x0003ee50) cell_ai_soft_ind_pane_ParamLimits

0xd945,	// (0x0003ee50) cell_ai_soft_ind_pane

0x45e4,	// (0x00035aef) cell_ai_soft_ind_pane_g1_ParamLimits

0x45e4,	// (0x00035aef) cell_ai_soft_ind_pane_g1

0x2c5f,	// (0x0003416a) grid_highlight_cp1

0x45f1,	// (0x00035afc) text_secondary_cp56_ParamLimits

0x45f1,	// (0x00035afc) text_secondary_cp56

0x5f3c,	// (0x00037447) example_general_pane_ParamLimits

0x5f3c,	// (0x00037447) example_general_pane

0x5f48,	// (0x00037453) example_parent_pane_g1_ParamLimits

0x5f48,	// (0x00037453) example_parent_pane_g1

0x5f54,	// (0x0003745f) example_parent_pane_t1_ParamLimits

0x5f54,	// (0x0003745f) example_parent_pane_t1

0xc4f8,	// (0x0003da03) popup_preview_text_window_ParamLimits

0xc4f8,	// (0x0003da03) popup_preview_text_window

0x440e,	// (0x00035919) list_single_pane_cp2_g4

0x3096,	// (0x000345a1) bg_popup_preview_window_pane_ParamLimits

0x3096,	// (0x000345a1) bg_popup_preview_window_pane

0x5c89,	// (0x00037194) popup_preview_text_window_t1_ParamLimits

0x5c89,	// (0x00037194) popup_preview_text_window_t1

0x5ca7,	// (0x000371b2) popup_preview_text_window_t2_ParamLimits

0x5ca7,	// (0x000371b2) popup_preview_text_window_t2

0x5cf0,	// (0x000371fb) popup_preview_text_window_t3_ParamLimits

0x5cf0,	// (0x000371fb) popup_preview_text_window_t3

0x5d35,	// (0x00037240) popup_preview_text_window_t4_ParamLimits

0x5d35,	// (0x00037240) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x00040de3) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x00040de3) popup_preview_text_window_t

0x5db3,	// (0x000372be) scroll_pane_cp11

0x4d2b,	// (0x00036236) bg_popup_preview_window_pane_g1

0x5c49,	// (0x00037154) bg_popup_preview_window_pane_g2

0x5c51,	// (0x0003715c) bg_popup_preview_window_pane_g3

0x5c59,	// (0x00037164) bg_popup_preview_window_pane_g4

0x5c61,	// (0x0003716c) bg_popup_preview_window_pane_g5

0x5c69,	// (0x00037174) bg_popup_preview_window_pane_g6

0x5c71,	// (0x0003717c) bg_popup_preview_window_pane_g7

0x5c79,	// (0x00037184) bg_popup_preview_window_pane_g8

0xf09e,	// (0x000405a9) aid_popup_width_pane

0xc474,	// (0x0003d97f) popup_midp_note_alarm_window_ParamLimits

0xc474,	// (0x0003d97f) popup_midp_note_alarm_window

0x35c0,	// (0x00034acb) data_form_pane_ParamLimits

0xbc99,	// (0x0003d1a4) form_field_data_pane_g1

0xbca3,	// (0x0003d1ae) form_field_data_pane_t1_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_ParamLimits

0x0185,	// (0x00031690) data_form_wide_pane_ParamLimits

0x0196,	// (0x000316a1) form_field_data_wide_pane_g1

0x01a2,	// (0x000316ad) form_field_data_wide_pane_t1_ParamLimits

0x333d,	// (0x00034848) input_focus_pane_cp6_ParamLimits

0xbdf2,	// (0x0003d2fd) input_popup_find_pane_g1_ParamLimits

0xbdf2,	// (0x0003d2fd) input_popup_find_pane_g1

0x0418,	// (0x00031923) aid_navi_side_left_pane

0x042d,	// (0x00031938) aid_navi_side_right_pane

0x5656,	// (0x00036b61) bg_popup_window_pane_cp30_ParamLimits

0x5656,	// (0x00036b61) bg_popup_window_pane_cp30

0x56d0,	// (0x00036bdb) popup_midp_note_alarm_window_g1_ParamLimits

0x56d0,	// (0x00036bdb) popup_midp_note_alarm_window_g1

0x5700,	// (0x00036c0b) popup_midp_note_alarm_window_t1_ParamLimits

0x5700,	// (0x00036c0b) popup_midp_note_alarm_window_t1

0x57a1,	// (0x00036cac) popup_midp_note_alarm_window_t2_ParamLimits

0x57a1,	// (0x00036cac) popup_midp_note_alarm_window_t2

0x584f,	// (0x00036d5a) popup_midp_note_alarm_window_t3_ParamLimits

0x584f,	// (0x00036d5a) popup_midp_note_alarm_window_t3

0x5881,	// (0x00036d8c) popup_midp_note_alarm_window_t4_ParamLimits

0x5881,	// (0x00036d8c) popup_midp_note_alarm_window_t4

0x58a7,	// (0x00036db2) popup_midp_note_alarm_window_t5_ParamLimits

0x58a7,	// (0x00036db2) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x00040d80) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x00040d80) popup_midp_note_alarm_window_t

0x5953,	// (0x00036e5e) wait_bar_pane_cp1_ParamLimits

0x5953,	// (0x00036e5e) wait_bar_pane_cp1

0x2c5f,	// (0x0003416a) wait_anim_pane_copy1

0x2c5f,	// (0x0003416a) wait_border_pane_copy1

0x533c,	// (0x00036847) wait_border_pane_g1_copy1

0x01bc,	// (0x000316c7) form_field_popup_pane_g1

0xbcbd,	// (0x0003d1c8) form_field_popup_pane_t1_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_cp7_ParamLimits

0x35fa,	// (0x00034b05) list_form_pane_ParamLimits

0x01dc,	// (0x000316e7) form_field_popup_wide_pane_g1

0x01e4,	// (0x000316ef) form_field_popup_wide_pane_t1_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_cp8_ParamLimits

0x3606,	// (0x00034b11) list_form_wide_pane_ParamLimits

0x6466,	// (0x00037971) aid_size_cell_graphic_pane

0xbd3c,	// (0x0003d247) data_form_pane_t1_ParamLimits

0xc877,	// (0x0003dd82) data_form_wide_pane_t1_ParamLimits

0xd445,	// (0x0003e950) bg_status_flat_pane

0xb4e1,	// (0x0003c9ec) title_pane_t1_ParamLimits

0x2d07,	// (0x00034212) title_pane_t2_ParamLimits

0x2d2d,	// (0x00034238) title_pane_t3_ParamLimits

0xf532,	// (0x00040a3d) title_pane_t_ParamLimits

0x3e11,	// (0x0003531c) level_1_signal_ParamLimits

0x3e23,	// (0x0003532e) level_2_signal_ParamLimits

0x3e36,	// (0x00035341) level_3_signal_ParamLimits

0x3e49,	// (0x00035354) level_4_signal_ParamLimits

0x3e5c,	// (0x00035367) level_5_signal_ParamLimits

0x3e6f,	// (0x0003537a) level_6_signal_ParamLimits

0x3e82,	// (0x0003538d) level_7_signal_ParamLimits

0x3e11,	// (0x0003531c) level_1_battery_ParamLimits

0x3e23,	// (0x0003532e) level_2_battery_ParamLimits

0x3e36,	// (0x00035341) level_3_battery_ParamLimits

0x3e49,	// (0x00035354) level_4_battery_ParamLimits

0x3e5c,	// (0x00035367) level_5_battery_ParamLimits

0x3e6f,	// (0x0003537a) level_6_battery_ParamLimits

0x3e82,	// (0x0003538d) level_7_battery_ParamLimits

0x555b,	// (0x00036a66) bg_status_flat_pane_g1

0x5563,	// (0x00036a6e) bg_status_flat_pane_g2

0x556b,	// (0x00036a76) bg_status_flat_pane_g3

0x5573,	// (0x00036a7e) bg_status_flat_pane_g4

0x557b,	// (0x00036a86) bg_status_flat_pane_g5

0x5583,	// (0x00036a8e) bg_status_flat_pane_g6

0x558b,	// (0x00036a96) bg_status_flat_pane_g7

0xb56d,	// (0x0003ca78) tabs_3_active_pane_t1_ParamLimits

0xb56d,	// (0x0003ca78) tabs_3_passive_pane_t1_ParamLimits

0xb57f,	// (0x0003ca8a) tabs_4_active_pane_t1_ParamLimits

0xb57f,	// (0x0003ca8a) tabs_4_1_passive_pane_t1_ParamLimits

0xbe00,	// (0x0003d30b) tabs_2_active_pane_t1_ParamLimits

0xbe00,	// (0x0003d30b) tabs_2_passive_pane_t1_ParamLimits

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp4_ParamLimits

0xbe12,	// (0x0003d31d) tabs_2_long_active_pane_t1_ParamLimits

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp4_ParamLimits

0x106d,	// (0x00032578) list_single_midp_graphic_pane_t1_ParamLimits

0x2d3f,	// (0x0003424a) bg_active_tab_pane_cp5_ParamLimits

0xbe25,	// (0x0003d330) tabs_3_long_active_pane_t1_ParamLimits

0x4801,	// (0x00035d0c) bg_passive_tab_pane_cp5_ParamLimits

0x106d,	// (0x00032578) list_single_midp_graphic_pane_t1

0xd445,	// (0x0003e950) bg_status_flat_pane_ParamLimits

0x49bb,	// (0x00035ec6) indicator_pane_cp2_ParamLimits

0x49bb,	// (0x00035ec6) indicator_pane_cp2

0xd5c3,	// (0x0003eace) navi_pane_srt_ParamLimits

0xd5c3,	// (0x0003eace) navi_pane_srt

0x4b0a,	// (0x00036015) popup_clock_digital_analogue_window_cp1

0x2e1c,	// (0x00034327) indicator_pane_t1

0x44dd,	// (0x000359e8) copy_highlight_pane

0x44dd,	// (0x000359e8) cursor_graphics_pane

0x44dd,	// (0x000359e8) graphic_within_text_pane

0x44dd,	// (0x000359e8) link_highlight_pane

0x5d76,	// (0x00037281) popup_preview_text_window_t5_ParamLimits

0x5d76,	// (0x00037281) popup_preview_text_window_t5

0x460b,	// (0x00035b16) cursor_digital_pane

0x460b,	// (0x00035b16) cursor_primary_pane

0x461c,	// (0x00035b27) cursor_primary_small_pane

0x4624,	// (0x00035b2f) cursor_secondary_pane

0x462c,	// (0x00035b37) cursor_title_pane

0x460b,	// (0x00035b16) link_highlight_digital_pane

0x4613,	// (0x00035b1e) link_highlight_primary_pane

0x461c,	// (0x00035b27) link_highlight_primary_small_pane

0x4624,	// (0x00035b2f) link_highlight_secondary_pane

0x462c,	// (0x00035b37) link_highlight_title_pane

0x460b,	// (0x00035b16) copy_highlight_digital_pane

0x460b,	// (0x00035b16) copy_highlight_primary_pane

0x461c,	// (0x00035b27) copy_highlight_primary_small_pane

0x4624,	// (0x00035b2f) copy_highlight_secondary_pane

0x462c,	// (0x00035b37) copy_highlight_title_pane

0x4624,	// (0x00035b2f) graphic_text_digital_pane

0x55f9,	// (0x00036b04) graphic_text_primary_pane

0x5602,	// (0x00036b0d) graphic_text_primary_small_pane

0x461c,	// (0x00035b27) graphic_text_secondary_pane

0x460b,	// (0x00035b16) graphic_text_title_pane

0xd289,	// (0x0003e794) cursor_primary_pane_g1

0x55eb,	// (0x00036af6) cursor_text_primary_t1

0xd841,	// (0x0003ed4c) cursor_primary_small_pane_g1

0x55dd,	// (0x00036ae8) cursor_text_primary_small_t1

0xd837,	// (0x0003ed42) cursor_primary_small_pane_g1_copy1

0x55c5,	// (0x00036ad0) cursor_text_primary_small_t1_copy1

0x55a3,	// (0x00036aae) cursor_text_title_t1

0xd82d,	// (0x0003ed38) cursor_title_pane_g1

0xd289,	// (0x0003e794) cursor_digital_pane_g1

0x463e,	// (0x00035b49) cursor_text_digital_t1

0x4663,	// (0x00035b6e) link_highlight_primary_pane_g1

0x554c,	// (0x00036a57) link_highlight_primary_pane_t1

0x464c,	// (0x00035b57) link_highlight_primary_small_pane_g1

0x4654,	// (0x00035b5f) link_highlight_primary_small_pane_t1

0x4663,	// (0x00035b6e) link_highlight_secondary_pane_g1

0x466b,	// (0x00035b76) link_highlight_secondary_pane_t1

0x54c0,	// (0x000369cb) link_highlight_title_pane_g1

0x54c8,	// (0x000369d3) link_highlight_title_pane_t1

0x54a9,	// (0x000369b4) link_highlight_digital_pane_g1

0x54b1,	// (0x000369bc) link_highlight_digital_pane_t1

0x5381,	// (0x0003688c) copy_highlight_primary_pane_g1

0x5389,	// (0x00036894) copy_highlight_primary_pane_t1

0x535b,	// (0x00036866) copy_highlight_primary_small_pane_g1

0x5372,	// (0x0003687d) copy_highlight_primary_small_pane_t1

0x467a,	// (0x00035b85) copy_highlight_secondary_pane_g1

0x4682,	// (0x00035b8d) copy_highlight_secondary_pane_t1

0x535b,	// (0x00036866) copy_highlight_title_pane_g1

0x5363,	// (0x0003686e) copy_highlight_title_pane_t1

0x5381,	// (0x0003688c) copy_highlight_digital_pane_g1

0x6634,	// (0x00037b3f) copy_highlight_digital_pane_t1

0x6588,	// (0x00037a93) graphic_text_primary_pane_g1

0x6618,	// (0x00037b23) graphic_text_primary_pane_t1

0x6626,	// (0x00037b31) graphic_text_primary_pane_t2

0x0001,

0xf9a4,	// (0x00040eaf) graphic_text_primary_pane_t

0x65f4,	// (0x00037aff) graphic_text_primary_small_pane_g1

0x65fc,	// (0x00037b07) graphic_text_primary_small_pane_t1

0x660a,	// (0x00037b15) graphic_text_primary_small_pane_t2

0x0001,

0xf99f,	// (0x00040eaa) graphic_text_primary_small_pane_t

0x65d0,	// (0x00037adb) graphic_text_secondary_pane_g1

0x65d8,	// (0x00037ae3) graphic_text_secondary_pane_t1

0x65e6,	// (0x00037af1) graphic_text_secondary_pane_t2

0x0001,

0xf99a,	// (0x00040ea5) graphic_text_secondary_pane_t

0x65ac,	// (0x00037ab7) graphic_text_title_pane_g1

0x65b4,	// (0x00037abf) graphic_text_title_pane_t1

0x65c2,	// (0x00037acd) graphic_text_title_pane_t2

0x0001,

0xf995,	// (0x00040ea0) graphic_text_title_pane_t

0x6588,	// (0x00037a93) graphic_text_digital_pane_g1

0x6590,	// (0x00037a9b) graphic_text_digital_pane_t1

0x659e,	// (0x00037aa9) graphic_text_digital_pane_t2

0x0001,

0xf990,	// (0x00040e9b) graphic_text_digital_pane_t

0x2d3f,	// (0x0003424a) navi_icon_pane_srt_ParamLimits

0x2d3f,	// (0x0003424a) navi_icon_pane_srt

0x2c5f,	// (0x0003416a) navi_midp_pane_srt

0x2c5f,	// (0x0003416a) navi_navi_pane_srt

0x2d3f,	// (0x0003424a) navi_text_pane_srt_ParamLimits

0x2d3f,	// (0x0003424a) navi_text_pane_srt

0x6553,	// (0x00037a5e) navi_navi_icon_text_pane_srt

0x655b,	// (0x00037a66) navi_navi_pane_srt_g1_ParamLimits

0x655b,	// (0x00037a66) navi_navi_pane_srt_g1

0x656d,	// (0x00037a78) navi_navi_pane_srt_g2_ParamLimits

0x656d,	// (0x00037a78) navi_navi_pane_srt_g2

0x0001,

0xf98b,	// (0x00040e96) navi_navi_pane_srt_g_ParamLimits

0xf98b,	// (0x00040e96) navi_navi_pane_srt_g

0x657f,	// (0x00037a8a) navi_navi_tabs_pane_srt

0x6553,	// (0x00037a5e) navi_navi_text_pane_srt

0x6553,	// (0x00037a5e) navi_navi_volume_pane_srt

0x6544,	// (0x00037a4f) navi_navi_text_pane_srt_t1

0x15b4,	// (0x00032abf) navi_navi_volume_pane_srt_g1

0x15bc,	// (0x00032ac7) volume_small_pane_srt_ParamLimits

0x15bc,	// (0x00032ac7) volume_small_pane_srt

0x0782,	// (0x00031c8d) volume_small_pane_srt_g1_ParamLimits

0x0782,	// (0x00031c8d) volume_small_pane_srt_g1

0x0792,	// (0x00031c9d) volume_small_pane_srt_g2_ParamLimits

0x0792,	// (0x00031c9d) volume_small_pane_srt_g2

0x07a3,	// (0x00031cae) volume_small_pane_srt_g3_ParamLimits

0x07a3,	// (0x00031cae) volume_small_pane_srt_g3

0x07b4,	// (0x00031cbf) volume_small_pane_srt_g4_ParamLimits

0x07b4,	// (0x00031cbf) volume_small_pane_srt_g4

0x07c5,	// (0x00031cd0) volume_small_pane_srt_g5_ParamLimits

0x07c5,	// (0x00031cd0) volume_small_pane_srt_g5

0x07d6,	// (0x00031ce1) volume_small_pane_srt_g6_ParamLimits

0x07d6,	// (0x00031ce1) volume_small_pane_srt_g6

0x07e7,	// (0x00031cf2) volume_small_pane_srt_g7_ParamLimits

0x07e7,	// (0x00031cf2) volume_small_pane_srt_g7

0x07f8,	// (0x00031d03) volume_small_pane_srt_g8_ParamLimits

0x07f8,	// (0x00031d03) volume_small_pane_srt_g8

0x0809,	// (0x00031d14) volume_small_pane_srt_g9_ParamLimits

0x0809,	// (0x00031d14) volume_small_pane_srt_g9

0x081a,	// (0x00031d25) volume_small_pane_srt_g10_ParamLimits

0x081a,	// (0x00031d25) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x00040c43) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x00040c43) volume_small_pane_srt_g

0x313f,	// (0x0003464a) query_popup_data_pane_cp2

0x652a,	// (0x00037a35) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x652a,	// (0x00037a35) navi_navi_icon_text_pane_srt_t1

0x55f9,	// (0x00036b04) navi_tabs_2_long_pane_srt

0x55f9,	// (0x00036b04) navi_tabs_2_pane_srt

0x55f9,	// (0x00036b04) navi_tabs_3_long_pane_srt

0x55f9,	// (0x00036b04) navi_tabs_3_pane_srt

0x55f9,	// (0x00036b04) navi_tabs_4_pane_srt

0x1594,	// (0x00032a9f) tabs_2_active_pane_srt_ParamLimits

0x1594,	// (0x00032a9f) tabs_2_active_pane_srt

0x15a4,	// (0x00032aaf) tabs_2_passive_pane_srt_ParamLimits

0x15a4,	// (0x00032aaf) tabs_2_passive_pane_srt

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp1_srt

0x64f6,	// (0x00037a01) bg_passive_tab_pane_g1_cp1_srt

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp1_srt

0x64ff,	// (0x00037a0a) bg_passive_tab_pane_g3_cp1_srt

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp1_srt_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp1_srt

0x6508,	// (0x00037a13) tabs_2_active_pane_srt_g1

0xdbe6,	// (0x0003f0f1) tabs_2_active_pane_srt_t1_ParamLimits

0xdbe6,	// (0x0003f0f1) tabs_2_active_pane_srt_t1

0x64f6,	// (0x00037a01) bg_active_tab_pane_g1_cp1_srt

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp1_srt

0x64ff,	// (0x00037a0a) bg_active_tab_pane_g3_cp1_srt

0x1561,	// (0x00032a6c) tabs_3_active_pane_srt_ParamLimits

0x1561,	// (0x00032a6c) tabs_3_active_pane_srt

0x1572,	// (0x00032a7d) tabs_3_passive_pane_cp_srt_ParamLimits

0x1572,	// (0x00032a7d) tabs_3_passive_pane_cp_srt

0x1583,	// (0x00032a8e) tabs_3_passive_pane_srt_ParamLimits

0x1583,	// (0x00032a8e) tabs_3_passive_pane_srt

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d9f,	// (0x000362aa) bg_passive_tab_pane_cp2_srt

0x4691,	// (0x00035b9c) bg_passive_tab_pane_g1_cp2_srt

0x4113,	// (0x0003561e) bg_passive_tab_pane_g2_cp2_srt

0x469a,	// (0x00035ba5) bg_passive_tab_pane_g3_cp2_srt

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp2_srt_ParamLimits

0x2fba,	// (0x000344c5) bg_active_tab_pane_cp2_srt

0x64dc,	// (0x000379e7) tabs_3_active_pane_srt_g1

0xdbd0,	// (0x0003f0db) tabs_3_active_pane_srt_t1_ParamLimits

0xdbd0,	// (0x0003f0db) tabs_3_active_pane_srt_t1

0x4691,	// (0x00035b9c) bg_active_tab_pane_g1_cp2_srt

0x4113,	// (0x0003561e) bg_active_tab_pane_g2_cp2_srt

0x469a,	// (0x00035ba5) bg_active_tab_pane_g3_cp2_srt

0x1519,	// (0x00032a24) tabs_4_active_pane_srt_ParamLimits

0x1519,	// (0x00032a24) tabs_4_active_pane_srt

0x152b,	// (0x00032a36) tabs_4_passive_pane_cp2_srt_ParamLimits

0x152b,	// (0x00032a36) tabs_4_passive_pane_cp2_srt

0x098d,	// (0x00031e98) aid_size_cell_toolbar

0x6120,	// (0x0003762b) main_idle_act_pane_ParamLimits

0x0b4e,	// (0x00032059) popup_large_graphic_colour_window_ParamLimits

0xc784,	// (0x0003dc8f) popup_toolbar_window_ParamLimits

0xc784,	// (0x0003dc8f) popup_toolbar_window

0x148b,	// (0x00032996) list_single_graphic_2heading_pane_ParamLimits

0x148b,	// (0x00032996) list_single_graphic_2heading_pane

0x397c,	// (0x00034e87) aid_size_cell_apps_grid_lsc_pane

0x3bd2,	// (0x000350dd) aid_size_cell_apps_grid_prt_pane

0x4801,	// (0x00035d0c) bg_wml_button_pane_cp1_ParamLimits

0x4801,	// (0x00035d0c) bg_wml_button_pane_cp1

0xd7f0,	// (0x0003ecfb) form_midp_field_text_pane_t1_ParamLimits

0x4d9f,	// (0x000362aa) input_focus_pane_cp050_ParamLimits

0x5006,	// (0x00036511) list_midp_form_text_pane_ParamLimits

0x4fac,	// (0x000364b7) input_focus_pane_cp051_ParamLimits

0x4fc0,	// (0x000364cb) list_midp_choice_pane_ParamLimits

0xd78e,	// (0x0003ec99) list_single_2graphic_pane_cp3_ParamLimits

0xd78e,	// (0x0003ec99) list_single_2graphic_pane_cp3

0xd7a1,	// (0x0003ecac) list_single_midp_graphic_pane_ParamLimits

0xd7a1,	// (0x0003ecac) list_single_midp_graphic_pane

0xf2d3,	// (0x000407de) list_single_graphic_2heading_pane_g1_ParamLimits

0xf2d3,	// (0x000407de) list_single_graphic_2heading_pane_g1

0xf2df,	// (0x000407ea) list_single_graphic_2heading_pane_g4_ParamLimits

0xf2df,	// (0x000407ea) list_single_graphic_2heading_pane_g4

0xf2eb,	// (0x000407f6) list_single_graphic_2heading_pane_g5_ParamLimits

0xf2eb,	// (0x000407f6) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x00040c96) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x00040c96) list_single_graphic_2heading_pane_g

0xf2f7,	// (0x00040802) list_single_graphic_2heading_pane_t1_ParamLimits

0xf2f7,	// (0x00040802) list_single_graphic_2heading_pane_t1

0xf30b,	// (0x00040816) list_single_graphic_2heading_pane_t2_ParamLimits

0xf30b,	// (0x00040816) list_single_graphic_2heading_pane_t2

0xf325,	// (0x00040830) list_single_graphic_2heading_pane_t3_ParamLimits

0xf325,	// (0x00040830) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x00040c9d) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x00040c9d) list_single_graphic_2heading_pane_t

0x4c69,	// (0x00036174) bg_popup_sub_pane_cp2

0x4c93,	// (0x0003619e) grid_toobar_pane

0x0f62,	// (0x0003246d) cell_toolbar_pane_ParamLimits

0x0f62,	// (0x0003246d) cell_toolbar_pane

0x4ccf,	// (0x000361da) cell_toolbar_pane_g1_ParamLimits

0x4ccf,	// (0x000361da) cell_toolbar_pane_g1

0x4ce3,	// (0x000361ee) cell_toolbar_pane_g2_ParamLimits

0x4ce3,	// (0x000361ee) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x00040cab) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x00040cab) cell_toolbar_pane_g

0x4d05,	// (0x00036210) grid_highlight_pane_cp2_ParamLimits

0x4d05,	// (0x00036210) grid_highlight_pane_cp2

0x4d1f,	// (0x0003622a) toolbar_button_pane

0x4d2b,	// (0x00036236) toolbar_button_pane_g1

0x4d33,	// (0x0003623e) toolbar_button_pane_g2

0x4d3b,	// (0x00036246) toolbar_button_pane_g3

0x4d43,	// (0x0003624e) toolbar_button_pane_g4

0x4d4b,	// (0x00036256) toolbar_button_pane_g5

0x4d53,	// (0x0003625e) toolbar_button_pane_g6

0x4d5b,	// (0x00036266) toolbar_button_pane_g7

0x4d63,	// (0x0003626e) toolbar_button_pane_g8

0x4d6b,	// (0x00036276) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x00040cb0) toolbar_button_pane_g

0x0fd4,	// (0x000324df) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0fd4,	// (0x000324df) list_single_2graphic_pane_g1_cp3

0xc7dc,	// (0x0003dce7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc7dc,	// (0x0003dce7) list_single_2graphic_pane_g2_cp3

0x0ff1,	// (0x000324fc) list_single_2graphic_pane_g3_cp3

0x0ff9,	// (0x00032504) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0ff9,	// (0x00032504) list_single_2graphic_pane_g4_cp3

0x1005,	// (0x00032510) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1005,	// (0x00032510) list_single_2graphic_pane_t1_cp3

0x1061,	// (0x0003256c) list_single_midp_graphic_pane_g2_ParamLimits

0x1061,	// (0x0003256c) list_single_midp_graphic_pane_g2

0x0995,	// (0x00031ea0) aid_zoom_text_primary

0xf2cb,	// (0x000407d6) aid_zoom_text_secondary

0xd2e1,	// (0x0003e7ec) status_small_pane_g7_ParamLimits

0xd2e1,	// (0x0003e7ec) status_small_pane_g7

0xd304,	// (0x0003e80f) status_small_pane_t1_ParamLimits

0xb4bd,	// (0x0003c9c8) title_pane_g2

0x0003,

0xf529,	// (0x00040a34) title_pane_g

0xb735,	// (0x0003cc40) aid_size_cell_colour_1_pane_ParamLimits

0xb735,	// (0x0003cc40) aid_size_cell_colour_1_pane

0xb749,	// (0x0003cc54) aid_size_cell_colour_2_pane_ParamLimits

0xb749,	// (0x0003cc54) aid_size_cell_colour_2_pane

0xb75d,	// (0x0003cc68) aid_size_cell_colour_3_pane_ParamLimits

0xb75d,	// (0x0003cc68) aid_size_cell_colour_3_pane

0xb771,	// (0x0003cc7c) aid_size_cell_colour_4_pane_ParamLimits

0xb771,	// (0x0003cc7c) aid_size_cell_colour_4_pane

0x0355,	// (0x00031860) title_pane_stacon_g1_ParamLimits

0x0355,	// (0x00031860) title_pane_stacon_g1

0x53e0,	// (0x000368eb) popup_note_wait_window_g3_ParamLimits

0x53e0,	// (0x000368eb) popup_note_wait_window_g3

0x5456,	// (0x00036961) popup_note_wait_window_t5_ParamLimits

0x5456,	// (0x00036961) popup_note_wait_window_t5

0x2c5f,	// (0x0003416a) main_feb_china_hwr_fs_writing_pane

0xc186,	// (0x0003d691) popup_feb_china_hwr_fs_window_ParamLimits

0xc186,	// (0x0003d691) popup_feb_china_hwr_fs_window

0xc7ed,	// (0x0003dcf8) aid_size_cell_hwr_fs_ParamLimits

0xc7ed,	// (0x0003dcf8) aid_size_cell_hwr_fs

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp3_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp3

0xc802,	// (0x0003dd0d) grid_hwr_fs_pane_ParamLimits

0xc802,	// (0x0003dd0d) grid_hwr_fs_pane

0x1126,	// (0x00032631) linegrid_hwr_fs_pane_ParamLimits

0x1126,	// (0x00032631) linegrid_hwr_fs_pane

0xc81a,	// (0x0003dd25) cell_hwr_fs_pane_ParamLimits

0xc81a,	// (0x0003dd25) cell_hwr_fs_pane

0x4dab,	// (0x000362b6) linegrid_hwr_fs_pane_g1_ParamLimits

0x4dab,	// (0x000362b6) linegrid_hwr_fs_pane_g1

0xd762,	// (0x0003ec6d) linegrid_hwr_fs_pane_g2_ParamLimits

0xd762,	// (0x0003ec6d) linegrid_hwr_fs_pane_g2

0x4dc9,	// (0x000362d4) linegrid_hwr_fs_pane_g3_ParamLimits

0x4dc9,	// (0x000362d4) linegrid_hwr_fs_pane_g3

0x1158,	// (0x00032663) linegrid_hwr_fs_pane_g4_ParamLimits

0x1158,	// (0x00032663) linegrid_hwr_fs_pane_g4

0x1172,	// (0x0003267d) linegrid_hwr_fs_pane_g5_ParamLimits

0x1172,	// (0x0003267d) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x00040cd6) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x00040cd6) linegrid_hwr_fs_pane_g

0x4dd5,	// (0x000362e0) cell_hwr_fs_pane_g1_ParamLimits

0x4dd5,	// (0x000362e0) cell_hwr_fs_pane_g1

0x4ba0,	// (0x000360ab) cell_hwr_fs_pane_g2_ParamLimits

0x4ba0,	// (0x000360ab) cell_hwr_fs_pane_g2

0xd774,	// (0x0003ec7f) cell_hwr_fs_pane_g3_ParamLimits

0xd774,	// (0x0003ec7f) cell_hwr_fs_pane_g3

0xd781,	// (0x0003ec8c) cell_hwr_fs_pane_g4_ParamLimits

0xd781,	// (0x0003ec8c) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x00040ce1) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x00040ce1) cell_hwr_fs_pane_g

0xc840,	// (0x0003dd4b) cell_hwr_fs_pane_t1

0x2c5f,	// (0x0003416a) grid_highlight_pane_cp6

0x2c5f,	// (0x0003416a) main_idle_act2_pane

0x3733,	// (0x00034c3e) aid_inside_area_popup_secondary

0xd84b,	// (0x0003ed56) aid_inside_area_window_primary_ParamLimits

0xd84b,	// (0x0003ed56) aid_inside_area_window_primary

0x6643,	// (0x00037b4e) ai2_news_ticker_pane

0x664b,	// (0x00037b56) aid_size_cell_ai1_link_ParamLimits

0x664b,	// (0x00037b56) aid_size_cell_ai1_link

0xdbfc,	// (0x0003f107) popup_ai2_data_window_ParamLimits

0xdbfc,	// (0x0003f107) popup_ai2_data_window

0x667b,	// (0x00037b86) popup_ai2_link_window_ParamLimits

0x667b,	// (0x00037b86) popup_ai2_link_window

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp4_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp4

0x668f,	// (0x00037b9a) grid_ai2_link_pane_ParamLimits

0x668f,	// (0x00037b9a) grid_ai2_link_pane

0x66a6,	// (0x00037bb1) popup_ai2_link_window_g1_ParamLimits

0x66a6,	// (0x00037bb1) popup_ai2_link_window_g1

0x66b2,	// (0x00037bbd) popup_ai2_link_window_g2_ParamLimits

0x66b2,	// (0x00037bbd) popup_ai2_link_window_g2

0x0001,

0xf9a9,	// (0x00040eb4) popup_ai2_link_window_g_ParamLimits

0xf9a9,	// (0x00040eb4) popup_ai2_link_window_g

0x66c1,	// (0x00037bcc) ai2_mp_button_pane

0x66c9,	// (0x00037bd4) ai2_mp_volume_pane

0x4fac,	// (0x000364b7) bg_popup_sub_pane_cp5_ParamLimits

0x4fac,	// (0x000364b7) bg_popup_sub_pane_cp5

0x66d1,	// (0x00037bdc) heading_ai2_gene_pane_ParamLimits

0x66d1,	// (0x00037bdc) heading_ai2_gene_pane

0x66dd,	// (0x00037be8) list_ai2_gene_pane_ParamLimits

0x66dd,	// (0x00037be8) list_ai2_gene_pane

0x6725,	// (0x00037c30) cell_ai2_link_pane_ParamLimits

0x6725,	// (0x00037c30) cell_ai2_link_pane

0x673b,	// (0x00037c46) cell_ai2_link_pane_g1

0x2c5f,	// (0x0003416a) grid_highlight_pane_cp7

0x15d1,	// (0x00032adc) ai2_mp_volume_pane_g1

0x680b,	// (0x00037d16) ai2_mp_volume_pane_g2

0xdc26,	// (0x0003f131) list_ai2_gene_pane_t1

0x6813,	// (0x00037d1e) ai2_mp_volume_pane_g3

0x0002,

0xf9c2,	// (0x00040ecd) ai2_mp_volume_pane_g

0x15d9,	// (0x00032ae4) volume_small_pane_cp3

0x681b,	// (0x00037d26) aid_size_cell_ai2_button

0x6823,	// (0x00037d2e) grid_ai2_button_pane

0x682c,	// (0x00037d37) cell_ai2_button_pane_ParamLimits

0x682c,	// (0x00037d37) cell_ai2_button_pane

0xe100,	// (0x0003f60b) cell_ai2_button_pane_g1

0x2c5f,	// (0x0003416a) grid_highlight_pane_cp8

0x67cb,	// (0x00037cd6) ai2_gene_pane_t1_ParamLimits

0x67cb,	// (0x00037cd6) ai2_gene_pane_t1

0xc11c,	// (0x0003d627) aid_height_parent_landscape

0xd993,	// (0x0003ee9e) aid_height_set_list

0x6120,	// (0x0003762b) aid_size_parent

0x6466,	// (0x00037971) aid_size_cell_graphic_pane_ParamLimits

0x66ed,	// (0x00037bf8) popup_ai2_data_window_g1_ParamLimits

0x66ed,	// (0x00037bf8) popup_ai2_data_window_g1

0x66f9,	// (0x00037c04) ai2_news_ticker_pane_g1

0x6701,	// (0x00037c0c) ai2_news_ticker_pane_g2

0x0001,

0xf9ae,	// (0x00040eb9) ai2_news_ticker_pane_g

0x6709,	// (0x00037c14) ai2_news_ticker_pane_t1

0x6717,	// (0x00037c22) ai2_news_ticker_pane_t2

0x0001,

0xf9b3,	// (0x00040ebe) ai2_news_ticker_pane_t

0x6744,	// (0x00037c4f) heading_ai2_gene_pane_g1

0x674c,	// (0x00037c57) heading_ai2_gene_pane_t1_ParamLimits

0x674c,	// (0x00037c57) heading_ai2_gene_pane_t1

0x6761,	// (0x00037c6c) list_highlight_pane_cp6

0xdc10,	// (0x0003f11b) ai2_gene_pane_ParamLimits

0xdc10,	// (0x0003f11b) ai2_gene_pane

0xdc34,	// (0x0003f13f) list_ai2_gene_pane_t2

0x0001,

0xf9b8,	// (0x00040ec3) list_ai2_gene_pane_t

0x679c,	// (0x00037ca7) list_highlight_pane_cp8_ParamLimits

0x679c,	// (0x00037ca7) list_highlight_pane_cp8

0x67ad,	// (0x00037cb8) ai2_gene_pane_g1_ParamLimits

0x67ad,	// (0x00037cb8) ai2_gene_pane_g1

0x67bf,	// (0x00037cca) ai2_gene_pane_g2_ParamLimits

0x67bf,	// (0x00037cca) ai2_gene_pane_g2

0x0001,

0xf9bd,	// (0x00040ec8) ai2_gene_pane_g_ParamLimits

0xf9bd,	// (0x00040ec8) ai2_gene_pane_g

0x3562,	// (0x00034a6d) scroll_pane_cp12

0xc0d9,	// (0x0003d5e4) control_pane_t3_ParamLimits

0xc0d9,	// (0x0003d5e4) control_pane_t3

0xd2f5,	// (0x0003e800) status_small_pane_g8_ParamLimits

0xd2f5,	// (0x0003e800) status_small_pane_g8

0xc21b,	// (0x0003d726) popup_find_window_ParamLimits

0xc4ae,	// (0x0003d9b9) popup_note_image_window_ParamLimits

0x0f92,	// (0x0003249d) list_double2_graphic_pane_vc_g1_ParamLimits

0x0f92,	// (0x0003249d) list_double2_graphic_pane_vc_g1

0x0f9e,	// (0x000324a9) list_double2_graphic_pane_vc_g2_ParamLimits

0x0f9e,	// (0x000324a9) list_double2_graphic_pane_vc_g2

0x0faa,	// (0x000324b5) list_double2_graphic_pane_vc_g3_ParamLimits

0x0faa,	// (0x000324b5) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x00040ca4) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x00040ca4) list_double2_graphic_pane_vc_g

0x0fb6,	// (0x000324c1) list_double2_graphic_pane_vc_t1_ParamLimits

0x0fb6,	// (0x000324c1) list_double2_graphic_pane_vc_t1

0x1021,	// (0x0003252c) list_single_heading_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_heading_pane_vc_g1

0x102d,	// (0x00032538) list_single_heading_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_heading_pane_vc_g

0x1039,	// (0x00032544) list_single_heading_pane_vc_t1_ParamLimits

0x1039,	// (0x00032544) list_single_heading_pane_vc_t1

0x104f,	// (0x0003255a) list_single_heading_pane_vc_t2_ParamLimits

0x104f,	// (0x0003255a) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x00040cc5) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x00040cc5) list_single_heading_pane_vc_t

0x1083,	// (0x0003258e) list_setting_number_pane_vc_g1_ParamLimits

0x1083,	// (0x0003258e) list_setting_number_pane_vc_g1

0x108f,	// (0x0003259a) list_setting_number_pane_vc_g2_ParamLimits

0x108f,	// (0x0003259a) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x00040cca) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x00040cca) list_setting_number_pane_vc_g

0x109b,	// (0x000325a6) list_setting_number_pane_vc_t1_ParamLimits

0x109b,	// (0x000325a6) list_setting_number_pane_vc_t1

0x10af,	// (0x000325ba) list_setting_number_pane_vc_t2_ParamLimits

0x10af,	// (0x000325ba) list_setting_number_pane_vc_t2

0x10cb,	// (0x000325d6) list_setting_number_pane_vc_t3_ParamLimits

0x10cb,	// (0x000325d6) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x00040ccf) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x00040ccf) list_setting_number_pane_vc_t

0x10e9,	// (0x000325f4) set_value_pane_vc_ParamLimits

0x10e9,	// (0x000325f4) set_value_pane_vc

0x148b,	// (0x00032996) list_double2_graphic_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double2_graphic_pane_vc

0x62d8,	// (0x000377e3) list_double2_large_graphic_pane_vc_ParamLimits

0x62d8,	// (0x000377e3) list_double2_large_graphic_pane_vc

0x148b,	// (0x00032996) list_double2_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double2_pane_vc

0x148b,	// (0x00032996) list_double_graphic_heading_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_graphic_heading_pane_vc

0x148b,	// (0x00032996) list_double_graphic_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_graphic_pane_vc

0x148b,	// (0x00032996) list_double_heading_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_heading_pane_vc

0x62ea,	// (0x000377f5) list_double_large_graphic_pane_vc_ParamLimits

0x62ea,	// (0x000377f5) list_double_large_graphic_pane_vc

0x148b,	// (0x00032996) list_double_number_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_number_pane_vc

0x148b,	// (0x00032996) list_double_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_pane_vc

0x148b,	// (0x00032996) list_double_time_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_double_time_pane_vc

0x148b,	// (0x00032996) list_setting_number_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_setting_number_pane_vc

0x148b,	// (0x00032996) list_setting_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_setting_pane_vc

0x148b,	// (0x00032996) list_single_graphic_heading_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_single_graphic_heading_pane_vc

0x148b,	// (0x00032996) list_single_heading_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_single_heading_pane_vc

0x148b,	// (0x00032996) list_single_number_heading_pane_vc_ParamLimits

0x148b,	// (0x00032996) list_single_number_heading_pane_vc

0x15e2,	// (0x00032aed) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x15e2,	// (0x00032aed) list_double_graphic_heading_pane_vc_g1

0x1021,	// (0x0003252c) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x1021,	// (0x0003252c) list_double_graphic_heading_pane_vc_g2

0x102d,	// (0x00032538) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x102d,	// (0x00032538) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c9,	// (0x00040ed4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c9,	// (0x00040ed4) list_double_graphic_heading_pane_vc_g

0x15ee,	// (0x00032af9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x15ee,	// (0x00032af9) list_double_graphic_heading_pane_vc_t1

0x160a,	// (0x00032b15) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x160a,	// (0x00032b15) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d0,	// (0x00040edb) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d0,	// (0x00040edb) list_double_graphic_heading_pane_vc_t

0x1083,	// (0x0003258e) list_setting_pane_vc_g1_ParamLimits

0x1083,	// (0x0003258e) list_setting_pane_vc_g1

0x108f,	// (0x0003259a) list_setting_pane_vc_g2_ParamLimits

0x108f,	// (0x0003259a) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x00040cca) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x00040cca) list_setting_pane_vc_g

0x1628,	// (0x00032b33) list_setting_pane_vc_t1_ParamLimits

0x1628,	// (0x00032b33) list_setting_pane_vc_t1

0x1644,	// (0x00032b4f) list_setting_pane_vc_t2_ParamLimits

0x1644,	// (0x00032b4f) list_setting_pane_vc_t2

0x0001,

0xf9fe,	// (0x00040f09) list_setting_pane_vc_t_ParamLimits

0xf9fe,	// (0x00040f09) list_setting_pane_vc_t

0x10e9,	// (0x000325f4) set_value_pane_cp_vc_ParamLimits

0x10e9,	// (0x000325f4) set_value_pane_cp_vc

0x1021,	// (0x0003252c) list_single_number_heading_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_single_number_heading_pane_vc_g1

0x102d,	// (0x00032538) list_single_number_heading_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_single_number_heading_pane_vc_g

0x1660,	// (0x00032b6b) list_single_number_heading_pane_vc_t1_ParamLimits

0x1660,	// (0x00032b6b) list_single_number_heading_pane_vc_t1

0x1676,	// (0x00032b81) list_single_number_heading_pane_vc_t2_ParamLimits

0x1676,	// (0x00032b81) list_single_number_heading_pane_vc_t2

0x1688,	// (0x00032b93) list_single_number_heading_pane_vc_t3_ParamLimits

0x1688,	// (0x00032b93) list_single_number_heading_pane_vc_t3

0x0002,

0xfa03,	// (0x00040f0e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa03,	// (0x00040f0e) list_single_number_heading_pane_vc_t

0x0f92,	// (0x0003249d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0f92,	// (0x0003249d) list_single_graphic_heading_pane_vc_g1

0x1021,	// (0x0003252c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1021,	// (0x0003252c) list_single_graphic_heading_pane_vc_g4

0x102d,	// (0x00032538) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x102d,	// (0x00032538) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa0a,	// (0x00040f15) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa0a,	// (0x00040f15) list_single_graphic_heading_pane_vc_g

0x169a,	// (0x00032ba5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x169a,	// (0x00032ba5) list_single_graphic_heading_pane_vc_t1

0x16b0,	// (0x00032bbb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x16b0,	// (0x00032bbb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x00040f1c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00040f1c) list_single_graphic_heading_pane_vc_t

0x1021,	// (0x0003252c) list_double2_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_double2_pane_vc_g1

0x102d,	// (0x00032538) list_double2_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_double2_pane_vc_g

0x16c2,	// (0x00032bcd) list_double2_pane_vc_t1_ParamLimits

0x16c2,	// (0x00032bcd) list_double2_pane_vc_t1

0x16d8,	// (0x00032be3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x16d8,	// (0x00032be3) list_double2_large_graphic_pane_vc_g1

0xf274,	// (0x0004077f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xf274,	// (0x0004077f) list_double2_large_graphic_pane_vc_g2

0xf280,	// (0x0004078b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xf280,	// (0x0004078b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00040acb) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00040acb) list_double2_large_graphic_pane_vc_g

0x16e4,	// (0x00032bef) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x16e4,	// (0x00032bef) list_double2_large_graphic_pane_vc_t1

0x16fa,	// (0x00032c05) list_double_time_pane_vc_g1_ParamLimits

0x16fa,	// (0x00032c05) list_double_time_pane_vc_g1

0x1706,	// (0x00032c11) list_double_time_pane_vc_g2_ParamLimits

0x1706,	// (0x00032c11) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x00040f21) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x00040f21) list_double_time_pane_vc_g

0x1712,	// (0x00032c1d) list_double_time_pane_vc_t1_ParamLimits

0x1712,	// (0x00032c1d) list_double_time_pane_vc_t1

0x1736,	// (0x00032c41) list_double_time_pane_vc_t2_ParamLimits

0x1736,	// (0x00032c41) list_double_time_pane_vc_t2

0x1780,	// (0x00032c8b) list_double_time_pane_vc_t3_ParamLimits

0x1780,	// (0x00032c8b) list_double_time_pane_vc_t3

0x1792,	// (0x00032c9d) list_double_time_pane_vc_t4_ParamLimits

0x1792,	// (0x00032c9d) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x00040f26) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x00040f26) list_double_time_pane_vc_t

0x1021,	// (0x0003252c) list_double_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_double_pane_vc_g1

0x102d,	// (0x00032538) list_double_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_double_pane_vc_g

0x17a6,	// (0x00032cb1) list_double_pane_vc_t1_ParamLimits

0x17a6,	// (0x00032cb1) list_double_pane_vc_t1

0x17ba,	// (0x00032cc5) list_double_pane_vc_t2_ParamLimits

0x17ba,	// (0x00032cc5) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x00040f2f) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x00040f2f) list_double_pane_vc_t

0x1021,	// (0x0003252c) list_double_number_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_double_number_pane_vc_g1

0x102d,	// (0x00032538) list_double_number_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_double_number_pane_vc_g

0x17d2,	// (0x00032cdd) list_double_number_pane_vc_t1_ParamLimits

0x17d2,	// (0x00032cdd) list_double_number_pane_vc_t1

0x17e4,	// (0x00032cef) list_double_number_pane_vc_t2_ParamLimits

0x17e4,	// (0x00032cef) list_double_number_pane_vc_t2

0x17f8,	// (0x00032d03) list_double_number_pane_vc_t3_ParamLimits

0x17f8,	// (0x00032d03) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x00040f34) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x00040f34) list_double_number_pane_vc_t

0x1810,	// (0x00032d1b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x1810,	// (0x00032d1b) list_double_large_graphic_pane_vc_g1

0x182c,	// (0x00032d37) list_double_large_graphic_pane_vc_g2_ParamLimits

0x182c,	// (0x00032d37) list_double_large_graphic_pane_vc_g2

0x1840,	// (0x00032d4b) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1840,	// (0x00032d4b) list_double_large_graphic_pane_vc_g3

0x184f,	// (0x00032d5a) list_double_large_graphic_pane_vc_g4_ParamLimits

0x184f,	// (0x00032d5a) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x00040f3b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x00040f3b) list_double_large_graphic_pane_vc_g

0x185e,	// (0x00032d69) list_double_large_graphic_pane_vc_t1_ParamLimits

0x185e,	// (0x00032d69) list_double_large_graphic_pane_vc_t1

0x187a,	// (0x00032d85) list_double_large_graphic_pane_vc_t2_ParamLimits

0x187a,	// (0x00032d85) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x00040f44) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x00040f44) list_double_large_graphic_pane_vc_t

0x1021,	// (0x0003252c) list_double_heading_pane_vc_g1_ParamLimits

0x1021,	// (0x0003252c) list_double_heading_pane_vc_g1

0x102d,	// (0x00032538) list_double_heading_pane_vc_g2_ParamLimits

0x102d,	// (0x00032538) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00040aae) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00040aae) list_double_heading_pane_vc_g

0x189c,	// (0x00032da7) list_double_heading_pane_vc_t1_ParamLimits

0x189c,	// (0x00032da7) list_double_heading_pane_vc_t1

0x18b0,	// (0x00032dbb) list_double_heading_pane_vc_t2_ParamLimits

0x18b0,	// (0x00032dbb) list_double_heading_pane_vc_t2

0x0001,

0xfa3e,	// (0x00040f49) list_double_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00040f49) list_double_heading_pane_vc_t

0x18c8,	// (0x00032dd3) list_double_graphic_pane_vc_g1_ParamLimits

0x18c8,	// (0x00032dd3) list_double_graphic_pane_vc_g1

0x18db,	// (0x00032de6) list_double_graphic_pane_vc_g2_ParamLimits

0x18db,	// (0x00032de6) list_double_graphic_pane_vc_g2

0x1021,	// (0x0003252c) list_double_graphic_pane_vc_g3_ParamLimits

0x1021,	// (0x0003252c) list_double_graphic_pane_vc_g3

0x0003,

0xfa43,	// (0x00040f4e) list_double_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00040f4e) list_double_graphic_pane_vc_g

0x18f8,	// (0x00032e03) list_double_graphic_pane_vc_t1_ParamLimits

0x18f8,	// (0x00032e03) list_double_graphic_pane_vc_t1

0x1922,	// (0x00032e2d) list_double_graphic_pane_vc_t2_ParamLimits

0x1922,	// (0x00032e2d) list_double_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x00040f57) list_double_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x00040f57) list_double_graphic_pane_vc_t

0xf0aa,	// (0x000405b5) aid_size_cell_fastswap

0xb2a4,	// (0x0003c7af) aid_size_cell_touch_ParamLimits

0xb2a4,	// (0x0003c7af) aid_size_cell_touch

0xf22b,	// (0x00040736) popup_fast_swap_wide_window_ParamLimits

0xf22b,	// (0x00040736) popup_fast_swap_wide_window

0xb454,	// (0x0003c95f) touch_pane_ParamLimits

0xb454,	// (0x0003c95f) touch_pane

0x35b8,	// (0x00034ac3) button_value_adjust_pane_cp2

0xf2bb,	// (0x000407c6) button_value_adjust_pane_cp4

0xf2c3,	// (0x000407ce) form_field_data_pane_cp2

0xbc58,	// (0x0003d163) form_field_data_wide_pane_cp2

0x3c8f,	// (0x0003519a) bg_scroll_pane_ParamLimits

0x04b7,	// (0x000319c2) scroll_handle_pane_ParamLimits

0x04cb,	// (0x000319d6) scroll_sc2_down_pane_ParamLimits

0x04cb,	// (0x000319d6) scroll_sc2_down_pane

0x3cc0,	// (0x000351cb) scroll_sc2_up_pane_ParamLimits

0x3cc0,	// (0x000351cb) scroll_sc2_up_pane

0xdd64,	// (0x0003f26f) grid_wheel_folder_pane_g1_ParamLimits

0xdd64,	// (0x0003f26f) grid_wheel_folder_pane_g1

0x071a,	// (0x00031c25) clock_nsta_pane_cp2_ParamLimits

0x071a,	// (0x00031c25) clock_nsta_pane_cp2

0xd1e4,	// (0x0003e6ef) listscroll_midp_pane_ParamLimits

0xd1f0,	// (0x0003e6fb) midp_canvas_pane

0x47d9,	// (0x00035ce4) nsta_clock_indic_pane

0x480d,	// (0x00035d18) listscroll_form_pane_vc

0x4815,	// (0x00035d20) listscroll_set_pane_vc_ParamLimits

0x4815,	// (0x00035d20) listscroll_set_pane_vc

0xd46d,	// (0x0003e978) clock_nsta_pane

0xd497,	// (0x0003e9a2) indicator_nsta_pane

0x4c69,	// (0x00036174) bg_popup_sub_pane_cp2_ParamLimits

0x4c7d,	// (0x00036188) find_pane_cp2_ParamLimits

0x4c7d,	// (0x00036188) find_pane_cp2

0x4c93,	// (0x0003619e) grid_toobar_pane_ParamLimits

0x4d73,	// (0x0003627e) list_form_gen_pane_vc_ParamLimits

0x4d73,	// (0x0003627e) list_form_gen_pane_vc

0x4d89,	// (0x00036294) scroll_pane_cp8_vc_ParamLimits

0x4d89,	// (0x00036294) scroll_pane_cp8_vc

0x4e05,	// (0x00036310) data_form_wide_pane_vc_ParamLimits

0x4e05,	// (0x00036310) data_form_wide_pane_vc

0x4e11,	// (0x0003631c) form_field_data_wide_pane_vc_g1

0x4e19,	// (0x00036324) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e19,	// (0x00036324) form_field_data_wide_pane_vc_t1

0x35cc,	// (0x00034ad7) input_focus_pane_cp6_vc_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_cp6_vc

0x515f,	// (0x0003666a) list_midp_pane_ParamLimits

0x64d0,	// (0x000379db) scroll_pane_cp16_ParamLimits

0x64d0,	// (0x000379db) scroll_pane_cp16

0x51b5,	// (0x000366c0) button_value_adjust_pane_ParamLimits

0x51b5,	// (0x000366c0) button_value_adjust_pane

0xd9a4,	// (0x0003eeaf) button_value_adjust_pane_cp6_ParamLimits

0xd9a4,	// (0x0003eeaf) button_value_adjust_pane_cp6

0xdabe,	// (0x0003efc9) settings_code_pane_cp_ParamLimits

0xdabe,	// (0x0003efc9) settings_code_pane_cp

0xe100,	// (0x0003f60b) cell_touch_pane_g1

0xe100,	// (0x0003f60b) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x00040be9) cell_touch_pane_g

0xdc42,	// (0x0003f14d) cell_touch_pane_cp_ParamLimits

0xdc42,	// (0x0003f14d) cell_touch_pane_cp

0xdc5e,	// (0x0003f169) cell_touch_pane_ParamLimits

0xdc5e,	// (0x0003f169) cell_touch_pane

0xe100,	// (0x0003f60b) scroll_sc2_down_pane_g1

0xe100,	// (0x0003f60b) scroll_sc2_up_pane_g1

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp4_vc

0x6860,	// (0x00037d6b) list_set_graphic_pane_vc_g1_ParamLimits

0x6860,	// (0x00037d6b) list_set_graphic_pane_vc_g1

0x686c,	// (0x00037d77) list_set_graphic_pane_vc_g2_ParamLimits

0x686c,	// (0x00037d77) list_set_graphic_pane_vc_g2

0x0001,

0xf9d5,	// (0x00040ee0) list_set_graphic_pane_vc_g_ParamLimits

0xf9d5,	// (0x00040ee0) list_set_graphic_pane_vc_g

0x6878,	// (0x00037d83) text_primary_small_cp13_vc_ParamLimits

0x6878,	// (0x00037d83) text_primary_small_cp13_vc

0x6890,	// (0x00037d9b) list_set_graphic_pane_vc_ParamLimits

0x6890,	// (0x00037d9b) list_set_graphic_pane_vc

0x2c5f,	// (0x0003416a) input_focus_pane_cp2_vc

0xe100,	// (0x0003f60b) setting_code_pane_vc_g1

0x2d8a,	// (0x00034295) setting_code_pane_vc_t1

0x68a3,	// (0x00037dae) set_text_pane_vc_t1_ParamLimits

0x68a3,	// (0x00037dae) set_text_pane_vc_t1

0x2c5f,	// (0x0003416a) input_focus_pane_cp1_vc

0x68bf,	// (0x00037dca) list_set_text_pane_vc

0xe100,	// (0x0003f60b) setting_text_pane_vc_g1

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp2_vc

0x2d81,	// (0x0003428c) setting_slider_graphic_pane_vc_g1

0x68c9,	// (0x00037dd4) setting_slider_graphic_pane_vc_t1

0x68d9,	// (0x00037de4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9da,	// (0x00040ee5) setting_slider_graphic_pane_vc_t

0x68e9,	// (0x00037df4) slider_set_pane_cp_vc

0x68f1,	// (0x00037dfc) slider_set_pane_vc_g1

0x68fa,	// (0x00037e05) slider_set_pane_vc_g2

0x0006,

0xf9df,	// (0x00040eea) slider_set_pane_vc_g

0x3624,	// (0x00034b2f) set_opt_bg_pane_g1_copy1

0x362c,	// (0x00034b37) set_opt_bg_pane_g2_copy1

0x6926,	// (0x00037e31) set_opt_bg_pane_g3_copy1

0x363c,	// (0x00034b47) set_opt_bg_pane_g4_copy1

0x3644,	// (0x00034b4f) set_opt_bg_pane_g5_copy1

0x364c,	// (0x00034b57) set_opt_bg_pane_g6_copy1

0x6930,	// (0x00037e3b) set_opt_bg_pane_g7_copy1

0x693a,	// (0x00037e45) set_opt_bg_pane_g8_copy1

0x6944,	// (0x00037e4f) set_opt_bg_pane_g9_copy1

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp_vc

0x694e,	// (0x00037e59) setting_slider_pane_vc_t1

0x695d,	// (0x00037e68) setting_slider_pane_vc_t2

0x696d,	// (0x00037e78) setting_slider_pane_vc_t3

0x0002,

0xf9ee,	// (0x00040ef9) setting_slider_pane_vc_t

0x697d,	// (0x00037e88) slider_set_pane_vc

0x11d7,	// (0x000326e2) volume_set_pane_vc_g1

0x11e0,	// (0x000326eb) volume_set_pane_vc_g2

0x11e9,	// (0x000326f4) volume_set_pane_vc_g3

0x11f2,	// (0x000326fd) volume_set_pane_vc_g4

0x11fb,	// (0x00032706) volume_set_pane_vc_g5

0x1204,	// (0x0003270f) volume_set_pane_vc_g6

0x120d,	// (0x00032718) volume_set_pane_vc_g7

0x1216,	// (0x00032721) volume_set_pane_vc_g8

0x121f,	// (0x0003272a) volume_set_pane_vc_g9

0x1228,	// (0x00032733) volume_set_pane_vc_g10

0x0009,

0xf88c,	// (0x00040d97) volume_set_pane_vc_g

0x6985,	// (0x00037e90) volume_set_pane_vc

0x698d,	// (0x00037e98) button_value_adjust_pane_cp1_vc

0x6997,	// (0x00037ea2) list_highlight_pane_cp2_vc

0x69a0,	// (0x00037eab) list_set_pane_vc_ParamLimits

0x69a0,	// (0x00037eab) list_set_pane_vc

0x69fe,	// (0x00037f09) main_pane_set_vc_t1_ParamLimits

0x69fe,	// (0x00037f09) main_pane_set_vc_t1

0x6a13,	// (0x00037f1e) main_pane_set_vc_t2_ParamLimits

0x6a13,	// (0x00037f1e) main_pane_set_vc_t2

0x6a25,	// (0x00037f30) main_pane_set_vc_t3_ParamLimits

0x6a25,	// (0x00037f30) main_pane_set_vc_t3

0x6a39,	// (0x00037f44) main_pane_set_vc_t4_ParamLimits

0x6a39,	// (0x00037f44) main_pane_set_vc_t4

0x0003,

0xf9f5,	// (0x00040f00) main_pane_set_vc_t_ParamLimits

0xf9f5,	// (0x00040f00) main_pane_set_vc_t

0x6a4d,	// (0x00037f58) setting_code_pane_vc_ParamLimits

0x6a4d,	// (0x00037f58) setting_code_pane_vc

0x6a5e,	// (0x00037f69) setting_slider_graphic_pane_vc

0x6a5e,	// (0x00037f69) setting_slider_pane_vc

0x6a5e,	// (0x00037f69) setting_text_pane_vc

0x6a5e,	// (0x00037f69) setting_volume_pane_vc

0x6a68,	// (0x00037f73) scroll_pane_cp121_vc

0x35a6,	// (0x00034ab1) set_content_pane_vc

0x6a70,	// (0x00037f7b) button_value_adjust_pane_g1

0x6a79,	// (0x00037f84) button_value_adjust_pane_g2

0x0001,

0xfa51,	// (0x00040f5c) button_value_adjust_pane_g

0x6a82,	// (0x00037f8d) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a82,	// (0x00037f8d) form_field_slider_wide_pane_vc_t1

0x6a96,	// (0x00037fa1) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a96,	// (0x00037fa1) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa56,	// (0x00040f61) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa56,	// (0x00040f61) form_field_slider_wide_pane_vc_t

0x2fba,	// (0x000344c5) input_focus_pane_cp10_vc_ParamLimits

0x2fba,	// (0x000344c5) input_focus_pane_cp10_vc

0x6ac4,	// (0x00037fcf) slider_cont_pane_cp1_vc_ParamLimits

0x6ac4,	// (0x00037fcf) slider_cont_pane_cp1_vc

0x6ad6,	// (0x00037fe1) slider_form_pane_g1_cp2

0x68fa,	// (0x00037e05) slider_form_pane_g2_cp2

0x6b03,	// (0x0003800e) form_field_slider_pane_vc_t3

0x6b11,	// (0x0003801c) form_field_slider_pane_vc_t4

0x6b1f,	// (0x0003802a) slider_form_pane_vc_ParamLimits

0x6b1f,	// (0x0003802a) slider_form_pane_vc

0x6b2c,	// (0x00038037) form_field_slider_pane_vc_t1_ParamLimits

0x6b2c,	// (0x00038037) form_field_slider_pane_vc_t1

0x6a96,	// (0x00037fa1) form_field_slider_pane_vc_t2_ParamLimits

0x6a96,	// (0x00037fa1) form_field_slider_pane_vc_t2

0x0001,

0xfa68,	// (0x00040f73) form_field_slider_pane_vc_t_ParamLimits

0xfa68,	// (0x00040f73) form_field_slider_pane_vc_t

0x2fba,	// (0x000344c5) input_focus_pane_cp9_vc_ParamLimits

0x2fba,	// (0x000344c5) input_focus_pane_cp9_vc

0x6b48,	// (0x00038053) slider_cont_pane_vc_ParamLimits

0x6b48,	// (0x00038053) slider_cont_pane_vc

0x6b5c,	// (0x00038067) list_form_graphic_pane_cp_vc_ParamLimits

0x6b5c,	// (0x00038067) list_form_graphic_pane_cp_vc

0x4e11,	// (0x0003631c) form_field_popup_wide_pane_vc_g1

0x6b71,	// (0x0003807c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b71,	// (0x0003807c) form_field_popup_wide_pane_vc_t1

0x35cc,	// (0x00034ad7) input_focus_pane_cp8_vc_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_cp8_vc

0x6bb6,	// (0x000380c1) list_form_wide_pane_vc_ParamLimits

0x6bb6,	// (0x000380c1) list_form_wide_pane_vc

0x6bc2,	// (0x000380cd) list_form_graphic_pane_vc_g1

0x6bca,	// (0x000380d5) list_form_graphic_pane_vc_t1_ParamLimits

0x6bca,	// (0x000380d5) list_form_graphic_pane_vc_t1

0x2d3f,	// (0x0003424a) list_highlight_pane_cp5_vc_ParamLimits

0x2d3f,	// (0x0003424a) list_highlight_pane_cp5_vc

0x6be6,	// (0x000380f1) list_form_graphic_pane_vc_ParamLimits

0x6be6,	// (0x000380f1) list_form_graphic_pane_vc

0x4e11,	// (0x0003631c) form_field_popup_pane_vc_g1

0x6bfc,	// (0x00038107) form_field_popup_pane_vc_t1_ParamLimits

0x6bfc,	// (0x00038107) form_field_popup_pane_vc_t1

0x35cc,	// (0x00034ad7) input_focus_pane_cp7_vc_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_cp7_vc

0x6c13,	// (0x0003811e) list_form_pane_vc_ParamLimits

0x6c13,	// (0x0003811e) list_form_pane_vc

0x6c1f,	// (0x0003812a) data_form_pane_vc_t1_ParamLimits

0x6c1f,	// (0x0003812a) data_form_pane_vc_t1

0x3624,	// (0x00034b2f) input_focus_pane_vc_g1

0x362c,	// (0x00034b37) input_focus_pane_vc_g2

0x3634,	// (0x00034b3f) input_focus_pane_vc_g3

0x363c,	// (0x00034b47) input_focus_pane_vc_g4

0x3644,	// (0x00034b4f) input_focus_pane_vc_g5

0x364c,	// (0x00034b57) input_focus_pane_vc_g6

0x3654,	// (0x00034b5f) input_focus_pane_vc_g7

0x365c,	// (0x00034b67) input_focus_pane_vc_g8

0x3664,	// (0x00034b6f) input_focus_pane_vc_g9

0xe100,	// (0x0003f60b) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x00040b72) input_focus_pane_vc_g

0x4e05,	// (0x00036310) data_form_pane_vc_ParamLimits

0x4e05,	// (0x00036310) data_form_pane_vc

0x4e11,	// (0x0003631c) form_field_data_pane_vc_g1

0x6c3a,	// (0x00038145) form_field_data_pane_vc_t1_ParamLimits

0x6c3a,	// (0x00038145) form_field_data_pane_vc_t1

0x35cc,	// (0x00034ad7) input_focus_pane_vc_ParamLimits

0x35cc,	// (0x00034ad7) input_focus_pane_vc

0x6c54,	// (0x0003815f) button_value_adjust_pane_cp3_vc

0x6c5c,	// (0x00038167) button_value_adjust_pane_cp5_vc

0x6c64,	// (0x0003816f) form_field_data_pane_vc_ParamLimits

0x6c64,	// (0x0003816f) form_field_data_pane_vc

0x6c7b,	// (0x00038186) form_field_data_pane_vc_cp2

0x6c83,	// (0x0003818e) form_field_data_wide_pane_vc_ParamLimits

0x6c83,	// (0x0003818e) form_field_data_wide_pane_vc

0x6c99,	// (0x000381a4) form_field_data_wide_pane_vc_cp2

0x6ca1,	// (0x000381ac) form_field_popup_pane_vc_ParamLimits

0x6ca1,	// (0x000381ac) form_field_popup_pane_vc

0x6cb8,	// (0x000381c3) form_field_popup_wide_pane_vc_ParamLimits

0x6cb8,	// (0x000381c3) form_field_popup_wide_pane_vc

0x6cce,	// (0x000381d9) form_field_slider_pane_vc_ParamLimits

0x6cce,	// (0x000381d9) form_field_slider_pane_vc

0x6ce1,	// (0x000381ec) form_field_slider_wide_pane_vc_ParamLimits

0x6ce1,	// (0x000381ec) form_field_slider_wide_pane_vc

0xdc7c,	// (0x0003f187) grid_touch_1_pane_ParamLimits

0xdc7c,	// (0x0003f187) grid_touch_1_pane

0xdc90,	// (0x0003f19b) grid_touch_2_pane_ParamLimits

0xdc90,	// (0x0003f19b) grid_touch_2_pane

0x6dc5,	// (0x000382d0) touch_pane_g1_ParamLimits

0x6dc5,	// (0x000382d0) touch_pane_g1

0x6d18,	// (0x00038223) cell_app_pane_cp_wide_ParamLimits

0x6d18,	// (0x00038223) cell_app_pane_cp_wide

0x6d29,	// (0x00038234) grid_popup_fast_wide_pane_ParamLimits

0x6d29,	// (0x00038234) grid_popup_fast_wide_pane

0x6d3d,	// (0x00038248) scroll_pane_cp19_ParamLimits

0x6d3d,	// (0x00038248) scroll_pane_cp19

0x2c5f,	// (0x0003416a) bg_popup_window_pane_cp20

0x6d51,	// (0x0003825c) listscroll_popup_fast_wide_pane

0xdcba,	// (0x0003f1c5) grid_indicator_nsta_pane

0x6d6b,	// (0x00038276) clock_nsta_pane_g1

0x6d74,	// (0x0003827f) clock_nsta_pane_t1

0xdcc6,	// (0x0003f1d1) cell_indicator_nsta_pane_ParamLimits

0xdcc6,	// (0x0003f1d1) cell_indicator_nsta_pane

0x6dc5,	// (0x000382d0) cell_indicator_nsta_pane_g1

0xdce1,	// (0x0003f1ec) cell_indicator_nsta_pane_g2

0x0001,

0xfa79,	// (0x00040f84) cell_indicator_nsta_pane_g

0x6de5,	// (0x000382f0) clock_nsta_pane_cp

0x6dee,	// (0x000382f9) indicator_nsta_pane_cp

0x6df8,	// (0x00038303) nsta_clock_indic_pane_g1

0x2e08,	// (0x00034313) grid_indicator_pane

0x3db5,	// (0x000352c0) scroll_pane_cp29

0x0669,	// (0x00031b74) indicator_nsta_pane_cp2_ParamLimits

0x0669,	// (0x00031b74) indicator_nsta_pane_cp2

0x2d3f,	// (0x0003424a) main_apps_wheel_pane

0x5020,	// (0x0003652b) form_midp_field_text_pane_ParamLimits

0x516b,	// (0x00036676) scroll_bar_cp050_ParamLimits

0x6e51,	// (0x0003835c) cell_indicator_pane_ParamLimits

0x6e51,	// (0x0003835c) cell_indicator_pane

0x6e68,	// (0x00038373) cell_indicator_pane_g1

0xdcee,	// (0x0003f1f9) grid_wheel_folder_pane_ParamLimits

0xdcee,	// (0x0003f1f9) grid_wheel_folder_pane

0xdcfc,	// (0x0003f207) list_wheel_apps_pane_ParamLimits

0xdcfc,	// (0x0003f207) list_wheel_apps_pane

0xdd0a,	// (0x0003f215) main_apps_wheel_pane_g1_ParamLimits

0xdd0a,	// (0x0003f215) main_apps_wheel_pane_g1

0xdd16,	// (0x0003f221) main_apps_wheel_pane_g2_ParamLimits

0xdd16,	// (0x0003f221) main_apps_wheel_pane_g2

0x0001,

0xfa95,	// (0x00040fa0) main_apps_wheel_pane_g_ParamLimits

0xfa95,	// (0x00040fa0) main_apps_wheel_pane_g

0xdd24,	// (0x0003f22f) main_apps_wheel_pane_t1_ParamLimits

0xdd24,	// (0x0003f22f) main_apps_wheel_pane_t1

0xdd38,	// (0x0003f243) list_wheel_apps_pane_g1

0xdd40,	// (0x0003f24b) list_wheel_apps_pane_g2

0xdd48,	// (0x0003f253) list_wheel_apps_pane_g3

0xdd50,	// (0x0003f25b) list_wheel_apps_pane_g4

0xdd5a,	// (0x0003f265) list_wheel_apps_pane_g5

0x0004,

0xfa9a,	// (0x00040fa5) list_wheel_apps_pane_g

0x4354,	// (0x0003585f) navi_icon_text_pane

0xd361,	// (0x0003e86c) aid_fill_nsta

0x6f2d,	// (0x00038438) navi_icon_text_pane_g1

0x6f39,	// (0x00038444) navi_icon_text_pane_t1

0x41e7,	// (0x000356f2) list_set_graphic_pane_t1_ParamLimits

0x41e7,	// (0x000356f2) list_set_graphic_pane_t1

0x58d6,	// (0x00036de1) popup_midp_note_alarm_window_t6_ParamLimits

0x58d6,	// (0x00036de1) popup_midp_note_alarm_window_t6

0x58e8,	// (0x00036df3) popup_midp_note_alarm_window_t7_ParamLimits

0x58e8,	// (0x00036df3) popup_midp_note_alarm_window_t7

0x58fa,	// (0x00036e05) popup_midp_note_alarm_window_t8_ParamLimits

0x58fa,	// (0x00036e05) popup_midp_note_alarm_window_t8

0x590c,	// (0x00036e17) popup_midp_note_alarm_window_t9_ParamLimits

0x590c,	// (0x00036e17) popup_midp_note_alarm_window_t9

0x591e,	// (0x00036e29) popup_midp_note_alarm_window_t10_ParamLimits

0x591e,	// (0x00036e29) popup_midp_note_alarm_window_t10

0x5930,	// (0x00036e3b) popup_midp_note_alarm_window_t11_ParamLimits

0x5930,	// (0x00036e3b) popup_midp_note_alarm_window_t11

0x5942,	// (0x00036e4d) scroll_pane_cp17_ParamLimits

0x5942,	// (0x00036e4d) scroll_pane_cp17

0x11d7,	// (0x000326e2) volume_small_pane_cp_g1

0x194c,	// (0x00032e57) volume_small_pane_cp_g2

0x1955,	// (0x00032e60) volume_small_pane_cp_g3

0x195e,	// (0x00032e69) volume_small_pane_cp_g4

0x1967,	// (0x00032e72) volume_small_pane_cp_g5

0x1970,	// (0x00032e7b) volume_small_pane_cp_g6

0x1979,	// (0x00032e84) volume_small_pane_cp_g7

0x1982,	// (0x00032e8d) volume_small_pane_cp_g8

0x198b,	// (0x00032e96) volume_small_pane_cp_g9

0x1994,	// (0x00032e9f) volume_small_pane_cp_g10

0x45ba,	// (0x00035ac5) midp_ticker_pane_g1_ParamLimits

0x45c6,	// (0x00035ad1) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x00040c3e) midp_ticker_pane_g_ParamLimits

0x45d2,	// (0x00035add) midp_ticker_pane_t1_ParamLimits

0xd385,	// (0x0003e890) aid_fill_nsta_2

0x5157,	// (0x00036662) list_form2_midp_pane

0x62a7,	// (0x000377b2) midp_editing_number_pane_ParamLimits

0x62b6,	// (0x000377c1) midp_ticker_pane_ParamLimits

0x6f4b,	// (0x00038456) form2_midp_field_pane

0x6f6f,	// (0x0003847a) scroll_pane_cp51

0x6f8f,	// (0x0003849a) form2_midp_button_pane_ParamLimits

0x6f8f,	// (0x0003849a) form2_midp_button_pane

0x6fa1,	// (0x000384ac) form2_midp_content_pane_ParamLimits

0x6fa1,	// (0x000384ac) form2_midp_content_pane

0x6fbb,	// (0x000384c6) form2_midp_field_choice_group_pane

0x6fc3,	// (0x000384ce) form2_midp_field_pane_g1

0x6fcb,	// (0x000384d6) form2_midp_field_pane_g2

0x6fd3,	// (0x000384de) form2_midp_field_pane_g3

0x6fdb,	// (0x000384e6) form2_midp_field_pane_g4

0x0003,

0xfabf,	// (0x00040fca) form2_midp_field_pane_g

0x6fe3,	// (0x000384ee) form2_midp_gauge_slider_pane

0x6feb,	// (0x000384f6) form2_midp_gauge_wait_pane

0x6ff3,	// (0x000384fe) form2_midp_image_pane_ParamLimits

0x6ff3,	// (0x000384fe) form2_midp_image_pane

0x700e,	// (0x00038519) form2_midp_label_pane_ParamLimits

0x700e,	// (0x00038519) form2_midp_label_pane

0xdd8d,	// (0x0003f298) form2_midp_label_pane_cp_ParamLimits

0xdd8d,	// (0x0003f298) form2_midp_label_pane_cp

0x7048,	// (0x00038553) form2_midp_string_pane_ParamLimits

0x7048,	// (0x00038553) form2_midp_string_pane

0xc8cb,	// (0x0003ddd6) form2_midp_text_pane_ParamLimits

0xc8cb,	// (0x0003ddd6) form2_midp_text_pane

0x705a,	// (0x00038565) form2_midp_time_pane

0x706a,	// (0x00038575) input_focus_pane_cp51_ParamLimits

0x706a,	// (0x00038575) input_focus_pane_cp51

0x7082,	// (0x0003858d) form2_midp_label_pane_t1_ParamLimits

0x7082,	// (0x0003858d) form2_midp_label_pane_t1

0xc8e4,	// (0x0003ddef) form2_mdip_text_pane_t1_ParamLimits

0xc8e4,	// (0x0003ddef) form2_mdip_text_pane_t1

0x19d6,	// (0x00032ee1) form2_midp_time_pane_t1

0x70cb,	// (0x000385d6) form2_midp_gauge_slider_pane_t1

0xddac,	// (0x0003f2b7) form2_midp_gauge_slider_pane_t2

0xddbe,	// (0x0003f2c9) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac8,	// (0x00040fd3) form2_midp_gauge_slider_pane_t

0x7101,	// (0x0003860c) form2_midp_slider_pane

0x710d,	// (0x00038618) form2_midp_gauge_wait_pane_t1

0x711b,	// (0x00038626) form2_midp_wait_pane_ParamLimits

0x711b,	// (0x00038626) form2_midp_wait_pane

0xddd0,	// (0x0003f2db) list_single_2graphic_pane_cp4_ParamLimits

0xddd0,	// (0x0003f2db) list_single_2graphic_pane_cp4

0xd7a1,	// (0x0003ecac) list_single_midp_graphic_pane_cp_ParamLimits

0xd7a1,	// (0x0003ecac) list_single_midp_graphic_pane_cp

0x2c5f,	// (0x0003416a) list_highlight_pane_cp20

0x716a,	// (0x00038675) list_single_2graphic_pane_g1_cp4

0x7172,	// (0x0003867d) list_single_2graphic_pane_g2_cp4

0x717a,	// (0x00038685) list_single_2graphic_pane_t1_cp4

0x2d3f,	// (0x0003424a) list_highlight_pane_cp21

0x7189,	// (0x00038694) list_single_midp_graphic_pane_g4_cp

0x7198,	// (0x000386a3) list_single_midp_graphic_pane_t1_cp

0xdde4,	// (0x0003f2ef) form2_mdip_string_pane_t1_ParamLimits

0xdde4,	// (0x0003f2ef) form2_mdip_string_pane_t1

0x2c5f,	// (0x0003416a) bg_wml_button_pane_cp2

0xe100,	// (0x0003f60b) form2_midp_image_pane_g1

0xf28c,	// (0x00040797) list_double_large_graphic_pane_g5_ParamLimits

0xf28c,	// (0x00040797) list_double_large_graphic_pane_g5

0xd1e4,	// (0x0003e6ef) midp_form_pane_ParamLimits

0x2d3f,	// (0x0003424a) main_apps_wheel_pane_ParamLimits

0xc52c,	// (0x0003da37) popup_preview_window_ParamLimits

0xc52c,	// (0x0003da37) popup_preview_window

0x0f0d,	// (0x00032418) popup_touch_info_window_ParamLimits

0x0f0d,	// (0x00032418) popup_touch_info_window

0x0f2b,	// (0x00032436) popup_touch_menu_window_ParamLimits

0x0f2b,	// (0x00032436) popup_touch_menu_window

0xe0f6,	// (0x0003f601) bg_popup_sub_pane_cp6

0x72a6,	// (0x000387b1) list_touch_menu_pane

0x72ae,	// (0x000387b9) list_single_touch_menu_pane_ParamLimits

0x72ae,	// (0x000387b9) list_single_touch_menu_pane

0x72c4,	// (0x000387cf) list_single_touch_menu_pane_t1

0x2d3f,	// (0x0003424a) bg_popup_sub_pane_cp7_ParamLimits

0x2d3f,	// (0x0003424a) bg_popup_sub_pane_cp7

0x72d2,	// (0x000387dd) heading_sub_pane

0x72da,	// (0x000387e5) list_touch_info_pane_ParamLimits

0x72da,	// (0x000387e5) list_touch_info_pane

0x72e9,	// (0x000387f4) list_single_touch_info_pane_ParamLimits

0x72e9,	// (0x000387f4) list_single_touch_info_pane

0x72fb,	// (0x00038806) list_single_touch_info_pane_t1

0x7309,	// (0x00038814) list_single_touch_info_pane_t2

0x0001,

0xfad6,	// (0x00040fe1) list_single_touch_info_pane_t

0x44dd,	// (0x000359e8) bg_popup_heading_pane_cp

0x7317,	// (0x00038822) heading_sub_pane_t1

0x4d9f,	// (0x000362aa) bg_popup_preview_window_pane_cp_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_preview_window_pane_cp

0x72d2,	// (0x000387dd) heading_preview_pane

0x72da,	// (0x000387e5) list_preview_pane_ParamLimits

0x72da,	// (0x000387e5) list_preview_pane

0x7325,	// (0x00038830) popup_preview_window_g1

0x72e9,	// (0x000387f4) list_single_preview_pane_ParamLimits

0x72e9,	// (0x000387f4) list_single_preview_pane

0x732d,	// (0x00038838) list_single_preview_pane_g1

0x7335,	// (0x00038840) list_single_preview_pane_t1

0x72fb,	// (0x00038806) list_single_preview_pane_t2

0x0001,

0xfadb,	// (0x00040fe6) list_single_preview_pane_t

0x7343,	// (0x0003884e) bg_popup_heading_pane_cp2_ParamLimits

0x7343,	// (0x0003884e) bg_popup_heading_pane_cp2

0x7359,	// (0x00038864) heading_preview_pane_g1

0x7361,	// (0x0003886c) heading_preview_pane_t1_ParamLimits

0x7361,	// (0x0003886c) heading_preview_pane_t1

0x2e2b,	// (0x00034336) soft_indicator_pane_t1_ParamLimits

0x353f,	// (0x00034a4a) scroll_pane_ParamLimits

0x3cae,	// (0x000351b9) scroll_sc2_left_pane

0x3cb7,	// (0x000351c2) scroll_sc2_right_pane

0x3cd6,	// (0x000351e1) scroll_bg_pane_g1_ParamLimits

0x3ceb,	// (0x000351f6) scroll_bg_pane_g2_ParamLimits

0x3d03,	// (0x0003520e) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x00040bc9) scroll_bg_pane_g_ParamLimits

0x3cd6,	// (0x000351e1) scroll_handle_pane_g1_ParamLimits

0x3d25,	// (0x00035230) scroll_handle_pane_g2_ParamLimits

0x3d03,	// (0x0003520e) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x00040bd0) scroll_handle_pane_g_ParamLimits

0x09d1,	// (0x00031edc) popup_choice_list_window_ParamLimits

0x09d1,	// (0x00031edc) popup_choice_list_window

0x4c75,	// (0x00036180) choice_list_pane

0x4cf7,	// (0x00036202) cell_toolbar_pane_t1

0x4d1f,	// (0x0003622a) toolbar_button_pane_ParamLimits

0x5e08,	// (0x00037313) ai_gene_pane_1_t2_ParamLimits

0x5e08,	// (0x00037313) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x00040df3) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x00040df3) ai_gene_pane_1_t

0x737e,	// (0x00038889) scroll_sc2_left_pane_g1

0x737e,	// (0x00038889) scroll_sc2_right_pane_g1

0x4801,	// (0x00035d0c) bg_popup_sub_pane_cp10

0x7388,	// (0x00038893) list_choice_list_pane

0x73a1,	// (0x000388ac) list_single_choice_list_pane_ParamLimits

0x73a1,	// (0x000388ac) list_single_choice_list_pane

0x73b4,	// (0x000388bf) list_single_choice_list_pane_g1

0x3770,	// (0x00034c7b) list_single_choice_list_pane_t1_ParamLimits

0x3770,	// (0x00034c7b) list_single_choice_list_pane_t1

0x73bc,	// (0x000388c7) choice_list_pane_g1

0x73c4,	// (0x000388cf) choice_list_pane_t1

0xe0f6,	// (0x0003f601) input_focus_pane_cp11

0x3947,	// (0x00034e52) title_pane_stacon_g2_ParamLimits

0x3947,	// (0x00034e52) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x00040baf) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x00040baf) title_pane_stacon_g

0x44dd,	// (0x000359e8) cursor_press_pane

0xc1d3,	// (0x0003d6de) popup_fep_hwr_window_ParamLimits

0xc1d3,	// (0x0003d6de) popup_fep_hwr_window

0x0af7,	// (0x00032002) popup_fep_vkb_window_ParamLimits

0x0af7,	// (0x00032002) popup_fep_vkb_window

0x73d2,	// (0x000388dd) cursor_press_pane_g1

0x0002,

0xfb04,	// (0x0004100f) fep_vkb_side_pane_g_ParamLimits

0x1a22,	// (0x00032f2d) fep_hwr_candidate_pane_ParamLimits

0x1a22,	// (0x00032f2d) fep_hwr_candidate_pane

0x1a4c,	// (0x00032f57) fep_hwr_side_pane_ParamLimits

0x1a4c,	// (0x00032f57) fep_hwr_side_pane

0x1a6c,	// (0x00032f77) fep_hwr_top_pane_ParamLimits

0x1a6c,	// (0x00032f77) fep_hwr_top_pane

0x1a84,	// (0x00032f8f) fep_hwr_write_pane_ParamLimits

0x1a84,	// (0x00032f8f) fep_hwr_write_pane

0xfb04,	// (0x0004100f) fep_vkb_side_pane_g

0x73da,	// (0x000388e5) fep_hwr_top_pane_g1

0x73ec,	// (0x000388f7) fep_hwr_top_pane_g2

0x1abe,	// (0x00032fc9) fep_hwr_top_pane_g3

0x0002,

0xfae0,	// (0x00040feb) fep_hwr_top_pane_g

0x1ad3,	// (0x00032fde) fep_hwr_top_text_pane

0x3ea5,	// (0x000353b0) fep_hwr_top_text_pane_g1

0x7422,	// (0x0003892d) fep_hwr_top_text_pane_t1

0x1bc9,	// (0x000330d4) fep_hwr_candidate_pane_g1

0x7675,	// (0x00038b80) fep_vkb_keypad_pane_g3_ParamLimits

0x7675,	// (0x00038b80) fep_vkb_keypad_pane_g3

0x769d,	// (0x00038ba8) fep_vkb_keypad_pane_g4_ParamLimits

0x769d,	// (0x00038ba8) fep_vkb_keypad_pane_g4

0x770c,	// (0x00038c17) fep_vkb_bottom_pane_g2_ParamLimits

0x770c,	// (0x00038c17) fep_vkb_bottom_pane_g2

0x0001,

0xfb0b,	// (0x00041016) fep_vkb_bottom_pane_g_ParamLimits

0xfb0b,	// (0x00041016) fep_vkb_bottom_pane_g

0x737e,	// (0x00038889) cell_vkb_side_pane_g2

0x0001,

0xfb15,	// (0x00041020) cell_vkb_side_pane_g

0x7797,	// (0x00038ca2) cell_vkb_side_pane_t1

0x77a5,	// (0x00038cb0) cell_vkb_side_pane_t1_copy1

0x737e,	// (0x00038889) bg_fep_vkb_candidate_pane_g2

0x78d1,	// (0x00038ddc) cell_vkb_candidate_pane_ParamLimits

0x7430,	// (0x0003893b) aid_size_cell_vkb_ParamLimits

0x7430,	// (0x0003893b) aid_size_cell_vkb

0x78d1,	// (0x00038ddc) cell_vkb_candidate_pane

0x1bf0,	// (0x000330fb) bg_popup_fep_shadow_pane_g1

0xde66,	// (0x0003f371) fep_vkb_bottom_pane_ParamLimits

0xde66,	// (0x0003f371) fep_vkb_bottom_pane

0x74f4,	// (0x000389ff) fep_vkb_candidate_pane_ParamLimits

0x74f4,	// (0x000389ff) fep_vkb_candidate_pane

0xde8b,	// (0x0003f396) fep_vkb_keypad_pane_ParamLimits

0xde8b,	// (0x0003f396) fep_vkb_keypad_pane

0xdec7,	// (0x0003f3d2) fep_vkb_side_pane_ParamLimits

0xdec7,	// (0x0003f3d2) fep_vkb_side_pane

0xdf03,	// (0x0003f40e) fep_vkb_top_pane_ParamLimits

0xdf03,	// (0x0003f40e) fep_vkb_top_pane

0x75ce,	// (0x00038ad9) fep_vkb_top_pane_g1_ParamLimits

0x75ce,	// (0x00038ad9) fep_vkb_top_pane_g1

0x75dd,	// (0x00038ae8) fep_vkb_top_pane_g2_ParamLimits

0x75dd,	// (0x00038ae8) fep_vkb_top_pane_g2

0x75ec,	// (0x00038af7) fep_vkb_top_pane_g3_ParamLimits

0x75ec,	// (0x00038af7) fep_vkb_top_pane_g3

0x0003,

0xfafb,	// (0x00041006) fep_vkb_top_pane_g_ParamLimits

0xfafb,	// (0x00041006) fep_vkb_top_pane_g

0x760a,	// (0x00038b15) fep_vkb_top_text_pane_ParamLimits

0x760a,	// (0x00038b15) fep_vkb_top_text_pane

0xdf3f,	// (0x0003f44a) fep_vkb_side_pane_g1_ParamLimits

0xdf3f,	// (0x0003f44a) fep_vkb_side_pane_g1

0x7664,	// (0x00038b6f) grid_vkb_side_pane_ParamLimits

0x7664,	// (0x00038b6f) grid_vkb_side_pane

0x1bf8,	// (0x00033103) bg_popup_fep_shadow_pane_g2

0x1c01,	// (0x0003310c) bg_popup_fep_shadow_pane_g3

0x1c09,	// (0x00033114) bg_popup_fep_shadow_pane_g4

0x1c12,	// (0x0003311d) bg_popup_fep_shadow_pane_g5

0x1c1c,	// (0x00033127) bg_popup_fep_shadow_pane_g6

0x1c24,	// (0x0003312f) bg_popup_fep_shadow_pane_g7

0x363c,	// (0x00034b47) bg_popup_fep_shadow_pane_g8

0x76bb,	// (0x00038bc6) grid_vkb_keypad_number_pane_ParamLimits

0x76bb,	// (0x00038bc6) grid_vkb_keypad_number_pane

0x76cb,	// (0x00038bd6) grid_vkb_keypad_pane_ParamLimits

0x76cb,	// (0x00038bd6) grid_vkb_keypad_pane

0x76f1,	// (0x00038bfc) fep_vkb_bottom_pane_g1_ParamLimits

0x76f1,	// (0x00038bfc) fep_vkb_bottom_pane_g1

0x771a,	// (0x00038c25) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x771a,	// (0x00038c25) grid_vkb_keypad_bottom_left_pane

0x772f,	// (0x00038c3a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x772f,	// (0x00038c3a) grid_vkb_keypad_bottom_right_pane

0x7744,	// (0x00038c4f) fep_vkb_top_text_pane_g1

0xdf86,	// (0x0003f491) fep_vkb_top_text_pane_t1

0xdf98,	// (0x0003f4a3) cell_vkb_side_pane_ParamLimits

0xdf98,	// (0x0003f4a3) cell_vkb_side_pane

0x737e,	// (0x00038889) cell_vkb_side_pane_g1

0x77b3,	// (0x00038cbe) cell_vkb_keypad_pane_ParamLimits

0x77b3,	// (0x00038cbe) cell_vkb_keypad_pane

0x7828,	// (0x00038d33) cell_vkb_keypad_pane_g1

0x0008,

0xfb28,	// (0x00041033) bg_popup_fep_shadow_pane_g

0x1c36,	// (0x00033141) cell_hwr_side_pane_g1

0x1c36,	// (0x00033141) cell_hwr_side_pane_g2

0x7832,	// (0x00038d3d) cell_vkb_keypad_pane_t1

0xdfae,	// (0x0003f4b9) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfae,	// (0x0003f4b9) cell_vkb_keypad_bottom_left_pane

0xdfc3,	// (0x0003f4ce) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdfc3,	// (0x0003f4ce) cell_vkb_keypad_bottom_right_pane

0x737e,	// (0x00038889) cell_vkb_keypad_bottom_left_pane_g1

0x737e,	// (0x00038889) cell_vkb_keypad_bottom_right_pane_g1

0x7896,	// (0x00038da1) cell_vkb_keypad_number_pane_ParamLimits

0x7896,	// (0x00038da1) cell_vkb_keypad_number_pane

0x78b5,	// (0x00038dc0) cell_vkb_keypad_number_pane_g1

0x78bf,	// (0x00038dca) cell_vkb_keypad_number_pane_g2

0x78c8,	// (0x00038dd3) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1a,	// (0x00041025) cell_vkb_keypad_number_pane_g

0x7832,	// (0x00038d3d) cell_vkb_keypad_number_pane_t1

0x78ec,	// (0x00038df7) fep_vkb_candidate_pane_g1

0x0001,

0xfb3b,	// (0x00041046) cell_hwr_side_pane_g

0x7905,	// (0x00038e10) cell_hwr_side_pane_t1

0x1c40,	// (0x0003314b) cell_hwr_side_pane_t1_copy1

0x1c4e,	// (0x00033159) cell_hwr_candidate_pane_g1

0x1c7d,	// (0x00033188) cell_hwr_candidate_pane_t1

0x737e,	// (0x00038889) cell_vkb_candidate_pane_g2

0x7949,	// (0x00038e54) cell_vkb_candidate_pane_t1

0x19e9,	// (0x00032ef4) bg_popup_fep_shadow_pane_ParamLimits

0x19e9,	// (0x00032ef4) bg_popup_fep_shadow_pane

0x1a9e,	// (0x00032fa9) bg_fep_hwr_top_pane_g4

0x73fe,	// (0x00038909) bg_hwr_side_pane_g1_ParamLimits

0x73fe,	// (0x00038909) bg_hwr_side_pane_g1

0xc919,	// (0x0003de24) cell_hwr_side_pane_ParamLimits

0xc919,	// (0x0003de24) cell_hwr_side_pane

0x1b4a,	// (0x00033055) fep_hwr_write_pane_g1_ParamLimits

0x1b4a,	// (0x00033055) fep_hwr_write_pane_g1

0x1b57,	// (0x00033062) fep_hwr_write_pane_g2_ParamLimits

0x1b57,	// (0x00033062) fep_hwr_write_pane_g2

0x1b64,	// (0x0003306f) fep_hwr_write_pane_g3_ParamLimits

0x1b64,	// (0x0003306f) fep_hwr_write_pane_g3

0xc939,	// (0x0003de44) fep_hwr_write_pane_g4_ParamLimits

0xc939,	// (0x0003de44) fep_hwr_write_pane_g4

0x0005,

0xfae7,	// (0x00040ff2) fep_hwr_write_pane_g_ParamLimits

0xfae7,	// (0x00040ff2) fep_hwr_write_pane_g

0x1a9e,	// (0x00032fa9) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1a9e,	// (0x00032fa9) bg_fep_hwr_candidate_pane_g2

0x1b87,	// (0x00033092) cell_hwr_candidate_pane_ParamLimits

0x1b87,	// (0x00033092) cell_hwr_candidate_pane

0x1bc9,	// (0x000330d4) fep_hwr_candidate_pane_g1_ParamLimits

0x745e,	// (0x00038969) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x745e,	// (0x00038969) bg_popup_fep_shadow_pane_cp2

0x75fc,	// (0x00038b07) fep_vkb_top_pane_g4_ParamLimits

0x75fc,	// (0x00038b07) fep_vkb_top_pane_g4

0x7642,	// (0x00038b4d) fep_vkb_side_pane_g2_ParamLimits

0x7642,	// (0x00038b4d) fep_vkb_side_pane_g2

0xbb66,	// (0x0003d071) list_setting_pane_t4_ParamLimits

0xbb66,	// (0x0003d071) list_setting_pane_t4

0xbc00,	// (0x0003d10b) list_setting_number_pane_t5_ParamLimits

0xbc00,	// (0x0003d10b) list_setting_number_pane_t5

0x3edc,	// (0x000353e7) list_double_heading_pane_cp2_ParamLimits

0x3edc,	// (0x000353e7) list_double_heading_pane_cp2

0x35da,	// (0x00034ae5) list_double_heading_pane_g1_cp2_ParamLimits

0x35da,	// (0x00034ae5) list_double_heading_pane_g1_cp2

0x35e6,	// (0x00034af1) list_double_heading_pane_g2_cp2_ParamLimits

0x35e6,	// (0x00034af1) list_double_heading_pane_g2_cp2

0x7957,	// (0x00038e62) list_double_heading_pane_t1_cp2_ParamLimits

0x7957,	// (0x00038e62) list_double_heading_pane_t1_cp2

0x796d,	// (0x00038e78) list_double_heading_pane_t2_cp2_ParamLimits

0x796d,	// (0x00038e78) list_double_heading_pane_t2_cp2

0xe0ee,	// (0x0003f5f9) aid_value_unit2

0xf24f,	// (0x0004075a) popup_preview_fixed_window

0x2fc8,	// (0x000344d3) bg_popup_preview_window_pane_cp02

0x797f,	// (0x00038e8a) list_preview_fixed_pane

0x7a07,	// (0x00038f12) list_empty_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_empty_pane_fp

0x7a07,	// (0x00038f12) list_single_cale_day_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_cale_day_pane_fp

0x7a07,	// (0x00038f12) list_single_graphic_heading_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_graphic_heading_pane_fp

0x7a07,	// (0x00038f12) list_single_graphic_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_graphic_pane_fp

0x7a07,	// (0x00038f12) list_single_heading_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_heading_pane_fp

0x7a07,	// (0x00038f12) list_single_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_pane_fp

0x7a1c,	// (0x00038f27) list_single_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00038f27) list_single_pane_fp_g1

0x1c9b,	// (0x000331a6) list_single_pane_fp_g2_ParamLimits

0x1c9b,	// (0x000331a6) list_single_pane_fp_g2

0x1ca7,	// (0x000331b2) list_single_pane_fp_g3_ParamLimits

0x1ca7,	// (0x000331b2) list_single_pane_fp_g3

0x7a28,	// (0x00038f33) list_single_pane_fp_g4_ParamLimits

0x7a28,	// (0x00038f33) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x00041059) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x00041059) list_single_pane_fp_g

0x1cbb,	// (0x000331c6) list_single_pane_fp_t1_ParamLimits

0x1cbb,	// (0x000331c6) list_single_pane_fp_t1

0x1cd2,	// (0x000331dd) list_single_graphic_pane_fp_g1_ParamLimits

0x1cd2,	// (0x000331dd) list_single_graphic_pane_fp_g1

0x7a1c,	// (0x00038f27) list_single_graphic_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00038f27) list_single_graphic_pane_fp_g2

0x1c9b,	// (0x000331a6) list_single_graphic_pane_fp_g3_ParamLimits

0x1c9b,	// (0x000331a6) list_single_graphic_pane_fp_g3

0x1ca7,	// (0x000331b2) list_single_graphic_pane_fp_g4_ParamLimits

0x1ca7,	// (0x000331b2) list_single_graphic_pane_fp_g4

0x7a28,	// (0x00038f33) list_single_graphic_pane_fp_g5_ParamLimits

0x7a28,	// (0x00038f33) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x00041062) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x00041062) list_single_graphic_pane_fp_g

0x1cde,	// (0x000331e9) list_single_graphic_pane_fp_t1_ParamLimits

0x1cde,	// (0x000331e9) list_single_graphic_pane_fp_t1

0x1cd2,	// (0x000331dd) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x1cd2,	// (0x000331dd) list_single_graphic_heading_pane_fp_g1

0x7a1c,	// (0x00038f27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00038f27) list_single_graphic_heading_pane_fp_g2

0x1c9b,	// (0x000331a6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x1c9b,	// (0x000331a6) list_single_graphic_heading_pane_fp_g3

0x1ca7,	// (0x000331b2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x1ca7,	// (0x000331b2) list_single_graphic_heading_pane_fp_g4

0x7a28,	// (0x00038f33) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a28,	// (0x00038f33) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00041062) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00041062) list_single_graphic_heading_pane_fp_g

0x1cf4,	// (0x000331ff) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x1cf4,	// (0x000331ff) list_single_graphic_heading_pane_fp_t1

0x1d0a,	// (0x00033215) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x1d0a,	// (0x00033215) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x0004106d) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x0004106d) list_single_graphic_heading_pane_fp_t

0x1d1c,	// (0x00033227) list_single_cale_day_pane_fp_g1_ParamLimits

0x1d1c,	// (0x00033227) list_single_cale_day_pane_fp_g1

0x7a34,	// (0x00038f3f) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a34,	// (0x00038f3f) list_single_cale_day_pane_fp_g2

0x1d54,	// (0x0003325f) list_single_cale_day_pane_fp_g3_ParamLimits

0x1d54,	// (0x0003325f) list_single_cale_day_pane_fp_g3

0x1d7c,	// (0x00033287) list_single_cale_day_pane_fp_g4_ParamLimits

0x1d7c,	// (0x00033287) list_single_cale_day_pane_fp_g4

0x1da0,	// (0x000332ab) list_single_cale_day_pane_fp_g5_ParamLimits

0x1da0,	// (0x000332ab) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x00041072) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x00041072) list_single_cale_day_pane_fp_g

0x1dc4,	// (0x000332cf) list_single_cale_day_pane_fp_t1_ParamLimits

0x1dc4,	// (0x000332cf) list_single_cale_day_pane_fp_t1

0x398e,	// (0x00034e99) list_single_cale_day_pane_fp_t2_ParamLimits

0x398e,	// (0x00034e99) list_single_cale_day_pane_fp_t2

0x39a7,	// (0x00034eb2) list_single_cale_day_pane_fp_t3_ParamLimits

0x39a7,	// (0x00034eb2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x0004107d) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x0004107d) list_single_cale_day_pane_fp_t

0x7a1c,	// (0x00038f27) list_empty_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00038f27) list_empty_pane_fp_g1

0x39c0,	// (0x00034ecb) list_empty_pane_fp_t1

0x39ce,	// (0x00034ed9) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x00041084) list_empty_pane_fp_t

0x7a1c,	// (0x00038f27) list_single_heading_pane_fp_g1_ParamLimits

0x7a1c,	// (0x00038f27) list_single_heading_pane_fp_g1

0x1c9b,	// (0x000331a6) list_single_heading_pane_fp_g2_ParamLimits

0x1c9b,	// (0x000331a6) list_single_heading_pane_fp_g2

0x1ca7,	// (0x000331b2) list_single_heading_pane_fp_g3_ParamLimits

0x1ca7,	// (0x000331b2) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x00041089) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00041089) list_single_heading_pane_fp_g

0x39dc,	// (0x00034ee7) list_single_heading_pane_fp_t1_ParamLimits

0x39dc,	// (0x00034ee7) list_single_heading_pane_fp_t1

0x39ee,	// (0x00034ef9) list_single_heading_pane_fp_t2_ParamLimits

0x39ee,	// (0x00034ef9) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00041090) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00041090) list_single_heading_pane_fp_t

0x37de,	// (0x00034ce9) aid_size_cell_fast

0x2f38,	// (0x00034443) soft_indicator_pane_cp1_t1

0x381b,	// (0x00034d26) cell_app_pane_cp2_ParamLimits

0x381b,	// (0x00034d26) cell_app_pane_cp2

0x1a0b,	// (0x00032f16) fep_hwr_candidate_drop_down_list_pane

0x1be3,	// (0x000330ee) fep_hwr_candidate_pane_g3_ParamLimits

0x1be3,	// (0x000330ee) fep_hwr_candidate_pane_g3

0xe10a,	// (0x0003f615) fep_hwr_candidate_pane_g4_ParamLimits

0xe10a,	// (0x0003f615) fep_hwr_candidate_pane_g4

0x0002,

0xfaf4,	// (0x00040fff) fep_hwr_candidate_pane_g_ParamLimits

0xfaf4,	// (0x00040fff) fep_hwr_candidate_pane_g

0x74e3,	// (0x000389ee) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74e3,	// (0x000389ee) fep_vkb_candidate_drop_down_list_pane

0x78f4,	// (0x00038dff) fep_vkb_candidate_pane_g3

0x78fc,	// (0x00038e07) fep_vkb_candidate_pane_g4

0x0002,

0xfb21,	// (0x0004102c) fep_vkb_candidate_pane_g

0x1c4e,	// (0x00033159) cell_hwr_candidate_pane_g1_ParamLimits

0x1c5c,	// (0x00033167) cell_hwr_candidate_pane_g3_ParamLimits

0x1c5c,	// (0x00033167) cell_hwr_candidate_pane_g3

0x8995,	// (0x00039ea0) cell_hwr_candidate_pane_g4_ParamLimits

0x8995,	// (0x00039ea0) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x0004104b) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x0004104b) cell_hwr_candidate_pane_g

0x7913,	// (0x00038e1e) cell_vkb_candidate_pane_g3_ParamLimits

0x7913,	// (0x00038e1e) cell_vkb_candidate_pane_g3

0x792e,	// (0x00038e39) cell_vkb_candidate_pane_g4_ParamLimits

0x792e,	// (0x00038e39) cell_vkb_candidate_pane_g4

0x7a40,	// (0x00038f4b) cell_app_pane_cp2_g1_ParamLimits

0x7a40,	// (0x00038f4b) cell_app_pane_cp2_g1

0x7a5e,	// (0x00038f69) cell_app_pane_cp2_g2_ParamLimits

0x7a5e,	// (0x00038f69) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x00041095) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x00041095) cell_app_pane_cp2_g

0x7a6a,	// (0x00038f75) cell_app_pane_cp2_t1_ParamLimits

0x7a6a,	// (0x00038f75) cell_app_pane_cp2_t1

0x35cc,	// (0x00034ad7) grid_highlight_pane_cp1_ParamLimits

0x35cc,	// (0x00034ad7) grid_highlight_pane_cp1

0x1dea,	// (0x000332f5) cell_hwr_candidate_pane_cp1_ParamLimits

0x1dea,	// (0x000332f5) cell_hwr_candidate_pane_cp1

0x1c4e,	// (0x00033159) fep_hwr_candidate_drop_down_list_pane_g1

0x1e09,	// (0x00033314) fep_hwr_candidate_drop_down_list_pane_g2

0x1e16,	// (0x00033321) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x0004109a) fep_hwr_candidate_drop_down_list_pane_g

0x1e23,	// (0x0003332e) fep_hwr_candidate_drop_down_list_scroll_pane

0x1e2c,	// (0x00033337) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1e2c,	// (0x00033337) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1e39,	// (0x00033344) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1e39,	// (0x00033344) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1e46,	// (0x00033351) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1e46,	// (0x00033351) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e53,	// (0x0003335e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e53,	// (0x0003335e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e6e,	// (0x00033379) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e6e,	// (0x00033379) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e89,	// (0x00033394) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e89,	// (0x00033394) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1ea4,	// (0x000333af) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1ea4,	// (0x000333af) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1ebf,	// (0x000333ca) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1ebf,	// (0x000333ca) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x000410a1) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x000410a1) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a7c,	// (0x00038f87) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a7c,	// (0x00038f87) cell_vkb_candidate_pane_cp1

0x75fc,	// (0x00038b07) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x75fc,	// (0x00038b07) fep_vkb_candidate_drop_down_list_pane_g1

0x7a9c,	// (0x00038fa7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7a9c,	// (0x00038fa7) fep_vkb_candidate_drop_down_list_pane_g2

0x7aa9,	// (0x00038fb4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7aa9,	// (0x00038fb4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba7,	// (0x000410b2) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba7,	// (0x000410b2) fep_vkb_candidate_drop_down_list_pane_g

0x7ab6,	// (0x00038fc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ab6,	// (0x00038fc1) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ac3,	// (0x00038fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ac3,	// (0x00038fce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7ad0,	// (0x00038fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ad0,	// (0x00038fdb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7adc,	// (0x00038fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7adc,	// (0x00038fe7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x79c5,	// (0x00038ed0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x79c5,	// (0x00038ed0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x79e6,	// (0x00038ef1) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x79e6,	// (0x00038ef1) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7ae8,	// (0x00038ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7ae8,	// (0x00038ff3) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b09,	// (0x00039014) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b09,	// (0x00039014) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b2a,	// (0x00039035) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b2a,	// (0x00039035) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbae,	// (0x000410b9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbae,	// (0x000410b9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb4aa,	// (0x0003c9b5) title_pane_g1_ParamLimits

0xb4bd,	// (0x0003c9c8) title_pane_g2_ParamLimits

0xf529,	// (0x00040a34) title_pane_g_ParamLimits

0x3e95,	// (0x000353a0) aid_call2_pane

0x3e9d,	// (0x000353a8) aid_call_pane

0x3ea5,	// (0x000353b0) popup_clock_analogue_window_g1

0x3ea5,	// (0x000353b0) popup_clock_analogue_window_g2

0x04e0,	// (0x000319eb) popup_clock_analogue_window_g3

0x04e9,	// (0x000319f4) popup_clock_analogue_window_g4

0xe100,	// (0x0003f60b) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x00040bde) popup_clock_analogue_window_g

0x04f1,	// (0x000319fc) popup_clock_analogue_window_t1

0x04ff,	// (0x00031a0a) clock_digital_number_pane_ParamLimits

0x04ff,	// (0x00031a0a) clock_digital_number_pane

0x050b,	// (0x00031a16) clock_digital_number_pane_cp02_ParamLimits

0x050b,	// (0x00031a16) clock_digital_number_pane_cp02

0x0517,	// (0x00031a22) clock_digital_number_pane_cp03_ParamLimits

0x0517,	// (0x00031a22) clock_digital_number_pane_cp03

0x0523,	// (0x00031a2e) clock_digital_number_pane_cp04_ParamLimits

0x0523,	// (0x00031a2e) clock_digital_number_pane_cp04

0x052f,	// (0x00031a3a) clock_digital_separator_pane_ParamLimits

0x052f,	// (0x00031a3a) clock_digital_separator_pane

0x053b,	// (0x00031a46) popup_clock_digital_window_t1_ParamLimits

0x053b,	// (0x00031a46) popup_clock_digital_window_t1

0xe100,	// (0x0003f60b) clock_digital_number_pane_g1

0xe100,	// (0x0003f60b) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x00040be9) clock_digital_number_pane_g

0xe100,	// (0x0003f60b) clock_digital_separator_pane_g1

0xe100,	// (0x0003f60b) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x00040be9) clock_digital_separator_pane_g

0xd361,	// (0x0003e86c) aid_fill_nsta_ParamLimits

0xd497,	// (0x0003e9a2) indicator_nsta_pane_ParamLimits

0x4b02,	// (0x0003600d) popup_clock_analogue_window

0x4b02,	// (0x0003600d) popup_clock_digital_window

0xdcba,	// (0x0003f1c5) grid_indicator_nsta_pane_ParamLimits

0x6d82,	// (0x0003828d) clock_nsta_pane_t2

0x0001,

0xfa74,	// (0x00040f7f) clock_nsta_pane_t

0x04a4,	// (0x000319af) aid_size_max_handle

0x04ae,	// (0x000319b9) aid_size_min_handle

0x44dd,	// (0x000359e8) editor_scroll_pane

0x7b45,	// (0x00039050) ex_editor_pane

0x374c,	// (0x00034c57) scroll_pane_cp13

0x356b,	// (0x00034a76) scroll_pane_cp14

0x3ed4,	// (0x000353df) scroll_pane_cp36

0xbf04,	// (0x0003d40f) list_single_graphic_hl_pane_cp2_ParamLimits

0xbf04,	// (0x0003d40f) list_single_graphic_hl_pane_cp2

0xdaf9,	// (0x0003f004) list_single_graphic_hl_pane_ParamLimits

0xdaf9,	// (0x0003f004) list_single_graphic_hl_pane

0x3a04,	// (0x00034f0f) aid_size_min_hl_cp1

0x7b4d,	// (0x00039058) list_highlight_pane_cp34_ParamLimits

0x7b4d,	// (0x00039058) list_highlight_pane_cp34

0x7b5e,	// (0x00039069) list_single_graphic_hl_pane_g1_ParamLimits

0x7b5e,	// (0x00039069) list_single_graphic_hl_pane_g1

0xf33d,	// (0x00040848) list_single_graphic_hl_pane_g2_ParamLimits

0xf33d,	// (0x00040848) list_single_graphic_hl_pane_g2

0xf33d,	// (0x00040848) list_single_graphic_hl_pane_g3_ParamLimits

0xf33d,	// (0x00040848) list_single_graphic_hl_pane_g3

0xf349,	// (0x00040854) list_single_graphic_hl_pane_g4_ParamLimits

0xf349,	// (0x00040854) list_single_graphic_hl_pane_g4

0xc94e,	// (0x0003de59) list_single_graphic_hl_pane_g5_ParamLimits

0xc94e,	// (0x0003de59) list_single_graphic_hl_pane_g5

0x0004,

0xfbbf,	// (0x000410ca) list_single_graphic_hl_pane_g_ParamLimits

0xfbbf,	// (0x000410ca) list_single_graphic_hl_pane_g

0xc962,	// (0x0003de6d) list_single_graphic_hl_pane_t1_ParamLimits

0xc962,	// (0x0003de6d) list_single_graphic_hl_pane_t1

0x7b6b,	// (0x00039076) aid_size_min_hl_cp2

0x7b74,	// (0x0003907f) list_highlight_pane_cp34_cp2_ParamLimits

0x7b74,	// (0x0003907f) list_highlight_pane_cp34_cp2

0x7b5e,	// (0x00039069) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7b5e,	// (0x00039069) list_single_graphic_hl_pane_g1_cp2

0x7b81,	// (0x0003908c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b81,	// (0x0003908c) list_single_graphic_hl_pane_g2_cp2

0x7b8d,	// (0x00039098) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7b8d,	// (0x00039098) list_single_graphic_hl_pane_g3_cp2

0x7b9b,	// (0x000390a6) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b9b,	// (0x000390a6) list_single_graphic_hl_pane_g4_cp2

0x7ba7,	// (0x000390b2) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ba7,	// (0x000390b2) list_single_graphic_hl_pane_g5_cp2

0xbff9,	// (0x0003d504) control_pane_g4_ParamLimits

0xbff9,	// (0x0003d504) control_pane_g4

0x4801,	// (0x00035d0c) bg_popup_sub_pane_cp10_ParamLimits

0x7388,	// (0x00038893) list_choice_list_pane_ParamLimits

0x7397,	// (0x000388a2) scroll_pane_cp23

0x2fc8,	// (0x000344d3) bg_popup_preview_window_pane_cp02_ParamLimits

0x797f,	// (0x00038e8a) list_preview_fixed_pane_ParamLimits

0x7995,	// (0x00038ea0) list_preview_fixed_pane_cp_ParamLimits

0x7995,	// (0x00038ea0) list_preview_fixed_pane_cp

0x79a1,	// (0x00038eac) popup_preview_fixed_window_g1_ParamLimits

0x79a1,	// (0x00038eac) popup_preview_fixed_window_g1

0x79ad,	// (0x00038eb8) popup_preview_fixed_window_g2_ParamLimits

0x79ad,	// (0x00038eb8) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x00041052) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x00041052) popup_preview_fixed_window_g

0x0418,	// (0x00031923) aid_navi_side_left_pane_ParamLimits

0x042d,	// (0x00031938) aid_navi_side_right_pane_ParamLimits

0x0445,	// (0x00031950) navi_icon_pane_stacon_ParamLimits

0x0459,	// (0x00031964) navi_navi_pane_stacon_ParamLimits

0x0445,	// (0x00031950) navi_text_pane_stacon_ParamLimits

0xf146,	// (0x00040651) main_text_info_pane

0x7bd1,	// (0x000390dc) listscroll_text_info_pane

0x7bd9,	// (0x000390e4) list_text_info_pane_ParamLimits

0x7bd9,	// (0x000390e4) list_text_info_pane

0x7be8,	// (0x000390f3) scroll_pane_cp24_ParamLimits

0x7be8,	// (0x000390f3) scroll_pane_cp24

0xdfde,	// (0x0003f4e9) list_text_info_pane_t1_ParamLimits

0xdfde,	// (0x0003f4e9) list_text_info_pane_t1

0xc146,	// (0x0003d651) popup_fast_swap2_window_ParamLimits

0xc146,	// (0x0003d651) popup_fast_swap2_window

0x7c37,	// (0x00039142) aid_size_cell_fast2

0xe0f6,	// (0x0003f601) bg_popup_window_pane_cp17

0x518b,	// (0x00036696) heading_pane_cp2

0x5193,	// (0x0003669e) listscroll_fast2_pane

0x7c41,	// (0x0003914c) grid_fast2_pane

0x7c4b,	// (0x00039156) listscroll_fast2_pane_g1

0x7c53,	// (0x0003915e) listscroll_fast2_pane_g2

0x0001,

0xfbca,	// (0x000410d5) listscroll_fast2_pane_g

0x374c,	// (0x00034c57) scroll_pane_cp26

0x7c5d,	// (0x00039168) cell_fast2_pane_ParamLimits

0x7c5d,	// (0x00039168) cell_fast2_pane

0x7c72,	// (0x0003917d) cell_fast2_pane_g1

0x7c7b,	// (0x00039186) cell_fast2_pane_g2

0x7c84,	// (0x0003918f) cell_fast2_pane_g3

0x0002,

0xfbcf,	// (0x000410da) cell_fast2_pane_g

0x3328,	// (0x00034833) grid_highlight_pane_cp9

0x09ad,	// (0x00031eb8) main_eswt_pane_ParamLimits

0x09ad,	// (0x00031eb8) main_eswt_pane

0x7bfd,	// (0x00039108) list_single_text_info_pane

0x7c8c,	// (0x00039197) eswt_ctrl_button_pane

0x7c8c,	// (0x00039197) eswt_ctrl_canvas_pane

0x7c94,	// (0x0003919f) eswt_ctrl_combo_pane

0x7c8c,	// (0x00039197) eswt_ctrl_default_pane

0x7c8c,	// (0x00039197) eswt_ctrl_label_pane

0x7c9c,	// (0x000391a7) eswt_ctrl_wait_pane

0x7ca4,	// (0x000391af) eswt_shell_pane

0xe0f6,	// (0x0003f601) listscroll_eswt_app_pane

0x7cc4,	// (0x000391cf) popup_eswt_tasktip_window_ParamLimits

0x7cc4,	// (0x000391cf) popup_eswt_tasktip_window

0x4d9f,	// (0x000362aa) bg_popup_window_pane_cp18

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_ParamLimits

0x7cd5,	// (0x000391e0) eswt_control_pane_g1

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_ParamLimits

0x7ce2,	// (0x000391ed) eswt_control_pane_g2

0x7cef,	// (0x000391fa) eswt_control_pane_g3_ParamLimits

0x7cef,	// (0x000391fa) eswt_control_pane_g3

0x7cfc,	// (0x00039207) eswt_control_pane_g4_ParamLimits

0x7cfc,	// (0x00039207) eswt_control_pane_g4

0x0003,

0xfbd6,	// (0x000410e1) eswt_control_pane_g_ParamLimits

0xfbd6,	// (0x000410e1) eswt_control_pane_g

0x35cc,	// (0x00034ad7) bg_button_pane_ParamLimits

0x35cc,	// (0x00034ad7) bg_button_pane

0x333d,	// (0x00034848) common_borders_pane_copy2_ParamLimits

0x333d,	// (0x00034848) common_borders_pane_copy2

0x7d09,	// (0x00039214) control_button_pane_g1_ParamLimits

0x7d09,	// (0x00039214) control_button_pane_g1

0x7d15,	// (0x00039220) control_button_pane_g2_ParamLimits

0x7d15,	// (0x00039220) control_button_pane_g2

0x7d21,	// (0x0003922c) control_button_pane_g3_ParamLimits

0x7d21,	// (0x0003922c) control_button_pane_g3

0x0002,

0xfbdf,	// (0x000410ea) control_button_pane_g_ParamLimits

0xfbdf,	// (0x000410ea) control_button_pane_g

0x7d35,	// (0x00039240) control_button_pane_t1

0x7d43,	// (0x0003924e) control_button_pane_t2

0x0001,

0xfbe6,	// (0x000410f1) control_button_pane_t

0x4d2b,	// (0x00036236) bg_button_pane_g1

0x4d3b,	// (0x00036246) bg_button_pane_g2

0x4d33,	// (0x0003623e) bg_button_pane_g3

0x4d4b,	// (0x00036256) bg_button_pane_g4

0x4d43,	// (0x0003624e) bg_button_pane_g5

0x4d53,	// (0x0003625e) bg_button_pane_g6

0x4d5b,	// (0x00036266) bg_button_pane_g7

0x4d6b,	// (0x00036276) bg_button_pane_g8

0x4d63,	// (0x0003626e) bg_button_pane_g9

0x0008,

0xf83c,	// (0x00040d47) bg_button_pane_g

0x7343,	// (0x0003884e) common_borders_pane_ParamLimits

0x7343,	// (0x0003884e) common_borders_pane

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy1_ParamLimits

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy1

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy1_ParamLimits

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy1

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy1_ParamLimits

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy1

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy1_ParamLimits

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy1

0x737e,	// (0x00038889) bg_eswt_ctrl_canvas_pane_g1

0x7343,	// (0x0003884e) common_borders_pane_cp2_ParamLimits

0x7343,	// (0x0003884e) common_borders_pane_cp2

0x7343,	// (0x0003884e) common_borders_pane_cp3_ParamLimits

0x7343,	// (0x0003884e) common_borders_pane_cp3

0x7d51,	// (0x0003925c) separator_horizontal_pane

0x7d59,	// (0x00039264) separator_vertical_pane

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy2_ParamLimits

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy2

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy2_ParamLimits

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy2

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy2_ParamLimits

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy2

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy2_ParamLimits

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy2

0xe0f6,	// (0x0003f601) common_borders_pane_cp4

0x7d62,	// (0x0003926d) separator_horizontal_pane_g1

0x7d6b,	// (0x00039276) separator_horizontal_pane_g2

0x7d74,	// (0x0003927f) separator_horizontal_pane_g3

0x0002,

0xfbeb,	// (0x000410f6) separator_horizontal_pane_g

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy3_ParamLimits

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy3

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy3_ParamLimits

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy3

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy3_ParamLimits

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy3

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy3_ParamLimits

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy3

0xe0f6,	// (0x0003f601) common_borders_pane_cp5

0x7d7d,	// (0x00039288) separator_vertical_pane_g1

0x7d86,	// (0x00039291) separator_vertical_pane_g2

0x7d8f,	// (0x0003929a) separator_vertical_pane_g3

0x0002,

0xfbf2,	// (0x000410fd) separator_vertical_pane_g

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy4_ParamLimits

0x7cd5,	// (0x000391e0) eswt_control_pane_g1_copy4

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy4_ParamLimits

0x7ce2,	// (0x000391ed) eswt_control_pane_g2_copy4

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy4_ParamLimits

0x7cef,	// (0x000391fa) eswt_control_pane_g3_copy4

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy4_ParamLimits

0x7cfc,	// (0x00039207) eswt_control_pane_g4_copy4

0x7d98,	// (0x000392a3) eswt_ctrl_combo_button_pane

0x7da0,	// (0x000392ab) eswt_ctrl_input_pane

0x7da8,	// (0x000392b3) popup_choice_list_window_cp70

0x7db0,	// (0x000392bb) eswt_ctrl_input_pane_t1

0xe0f6,	// (0x0003f601) input_focus_pane_cp70

0x7343,	// (0x0003884e) bg_button_pane_cp70_ParamLimits

0x7343,	// (0x0003884e) bg_button_pane_cp70

0x7dbe,	// (0x000392c9) eswt_ctrl_combo_button_pane_g1

0x7dc6,	// (0x000392d1) wait_bar_pane_cp70

0x4d9f,	// (0x000362aa) bg_popup_window_pane_cp70_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_window_pane_cp70

0x7dce,	// (0x000392d9) popup_eswt_tasktip_window_t1

0x7de4,	// (0x000392ef) wait_bar_pane_cp71_ParamLimits

0x7de4,	// (0x000392ef) wait_bar_pane_cp71

0x7df0,	// (0x000392fb) grid_eswt_app_pane

0x3cae,	// (0x000351b9) scroll_pane_cp70

0xdff9,	// (0x0003f504) cell_eswt_app_pane_ParamLimits

0xdff9,	// (0x0003f504) cell_eswt_app_pane

0xe023,	// (0x0003f52e) cell_eswt_app_pane_g1_ParamLimits

0xe023,	// (0x0003f52e) cell_eswt_app_pane_g1

0xe052,	// (0x0003f55d) cell_eswt_app_pane_g2_ParamLimits

0xe052,	// (0x0003f55d) cell_eswt_app_pane_g2

0x0001,

0xfbf9,	// (0x00041104) cell_eswt_app_pane_g_ParamLimits

0xfbf9,	// (0x00041104) cell_eswt_app_pane_g

0xe07b,	// (0x0003f586) cell_eswt_app_pane_t1_ParamLimits

0xe07b,	// (0x0003f586) cell_eswt_app_pane_t1

0x7eb3,	// (0x000393be) grid_highlight_pane_cp70_ParamLimits

0x7eb3,	// (0x000393be) grid_highlight_pane_cp70

0x43a9,	// (0x000358b4) set_content_pane_g1

0xd31e,	// (0x0003e829) status_small_volume_pane

0x1eda,	// (0x000333e5) status_small_volume_pane_g1

0x1ee2,	// (0x000333ed) volume_small2_pane

0x1eeb,	// (0x000333f6) volume_small2_pane_g1

0x1ef4,	// (0x000333ff) volume_small2_pane_g2

0x1efd,	// (0x00033408) volume_small2_pane_g3

0x1f06,	// (0x00033411) volume_small2_pane_g4

0x1f0f,	// (0x0003341a) volume_small2_pane_g5

0x1f18,	// (0x00033423) volume_small2_pane_g6

0x1f21,	// (0x0003342c) volume_small2_pane_g7

0x1f2a,	// (0x00033435) volume_small2_pane_g8

0x1f33,	// (0x0003343e) volume_small2_pane_g9

0x1f3c,	// (0x00033447) volume_small2_pane_g10

0x0009,

0xfbfe,	// (0x00041109) volume_small2_pane_g

0x7744,	// (0x00038c4f) fep_vkb_top_text_pane_g1_ParamLimits

0xdf86,	// (0x0003f491) fep_vkb_top_text_pane_t1_ParamLimits

0x79b9,	// (0x00038ec4) popup_preview_fixed_window_g3_ParamLimits

0x79b9,	// (0x00038ec4) popup_preview_fixed_window_g3

0xc76f,	// (0x0003dc7a) popup_toolbar_trans_pane

0xd993,	// (0x0003ee9e) aid_height_set_list_ParamLimits

0x6120,	// (0x0003762b) aid_size_parent_ParamLimits

0x4801,	// (0x00035d0c) list_highlight_pane_cp2_ParamLimits

0x43a9,	// (0x000358b4) set_content_pane_g1_ParamLimits

0xdb0b,	// (0x0003f016) list_single_image_pane_ParamLimits

0xdb0b,	// (0x0003f016) list_single_image_pane

0xe0ad,	// (0x0003f5b8) aid_size_cell_image_ParamLimits

0xe0ad,	// (0x0003f5b8) aid_size_cell_image

0xe0ba,	// (0x0003f5c5) grid_single_image_pane_ParamLimits

0xe0ba,	// (0x0003f5c5) grid_single_image_pane

0x5ae1,	// (0x00036fec) list_single_image_pane_g1_ParamLimits

0x5ae1,	// (0x00036fec) list_single_image_pane_g1

0x7ed8,	// (0x000393e3) list_single_image_pane_g2_ParamLimits

0x7ed8,	// (0x000393e3) list_single_image_pane_g2

0x0001,

0xfc13,	// (0x0004111e) list_single_image_pane_g_ParamLimits

0xfc13,	// (0x0004111e) list_single_image_pane_g

0x7eec,	// (0x000393f7) list_single_image_pane_t1_ParamLimits

0x7eec,	// (0x000393f7) list_single_image_pane_t1

0xe117,	// (0x0003f622) cell_image_list_pane_ParamLimits

0xe117,	// (0x0003f622) cell_image_list_pane

0xe12b,	// (0x0003f636) cell_image_list_pane_g1

0xe134,	// (0x0003f63f) cell_image_list_pane_g2

0x0001,

0xfc18,	// (0x00041123) cell_image_list_pane_g

0x7f28,	// (0x00039433) aid_size_cell_tb_trans_pane

0x35cc,	// (0x00034ad7) bg_tb_trans_pane

0x7f3a,	// (0x00039445) grid_tb_trans_pane

0x4d2b,	// (0x00036236) bg_tb_trans_pane_g1

0x4d3b,	// (0x00036246) bg_tb_trans_pane_g2

0x4d33,	// (0x0003623e) bg_tb_trans_pane_g3

0x4d4b,	// (0x00036256) bg_tb_trans_pane_g4

0x4d43,	// (0x0003624e) bg_tb_trans_pane_g5

0x4d6b,	// (0x00036276) bg_tb_trans_pane_g6

0x4d63,	// (0x0003626e) bg_tb_trans_pane_g7

0x4d53,	// (0x0003625e) bg_tb_trans_pane_g8

0x4d5b,	// (0x00036266) bg_tb_trans_pane_g9

0x0008,

0xfc1d,	// (0x00041128) bg_tb_trans_pane_g

0x7f4e,	// (0x00039459) cell_toolbar_trans_pane_ParamLimits

0x7f4e,	// (0x00039459) cell_toolbar_trans_pane

0x737e,	// (0x00038889) cell_toolbar_trans_pane_g1

0xdd71,	// (0x0003f27c) list_form2_midp_pane_t1

0xdd7f,	// (0x0003f28a) list_form2_midp_pane_t2

0x0001,

0xfaba,	// (0x00040fc5) list_form2_midp_pane_t

0x6f6f,	// (0x0003847a) scroll_pane_cp51_ParamLimits

0x712b,	// (0x00038636) form2_midp_wait_pane_g1

0x7134,	// (0x0003863f) form2_midp_wait_pane_g2

0x713d,	// (0x00038648) form2_midp_wait_pane_g3

0x0002,

0xfacf,	// (0x00040fda) form2_midp_wait_pane_g

0x2d3f,	// (0x0003424a) list_highlight_pane_cp21_ParamLimits

0x7189,	// (0x00038694) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7198,	// (0x000386a3) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x148b,	// (0x00032996) list_single_2graphic_im_pane_ParamLimits

0x148b,	// (0x00032996) list_single_2graphic_im_pane

0x7f74,	// (0x0003947f) list_single_2graphic_im_pane_g1_ParamLimits

0x7f74,	// (0x0003947f) list_single_2graphic_im_pane_g1

0x7f85,	// (0x00039490) list_single_2graphic_im_pane_g2_ParamLimits

0x7f85,	// (0x00039490) list_single_2graphic_im_pane_g2

0x7f91,	// (0x0003949c) list_single_2graphic_im_pane_g3_ParamLimits

0x7f91,	// (0x0003949c) list_single_2graphic_im_pane_g3

0x0003,

0xfc30,	// (0x0004113b) list_single_2graphic_im_pane_g_ParamLimits

0xfc30,	// (0x0004113b) list_single_2graphic_im_pane_g

0x7fb1,	// (0x000394bc) list_single_2graphic_im_pane_t1_ParamLimits

0x7fb1,	// (0x000394bc) list_single_2graphic_im_pane_t1

0x7a07,	// (0x00038f12) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a07,	// (0x00038f12) list_single_graphic_2heading_pane_fp

0x1cd2,	// (0x000331dd) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x1cd2,	// (0x000331dd) list_single_graphic_2heading_pane_fp_g1

0x7a1c,	// (0x00038f27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a1c,	// (0x00038f27) list_single_graphic_2heading_pane_fp_g2

0x1c9b,	// (0x000331a6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x1c9b,	// (0x000331a6) list_single_graphic_2heading_pane_fp_g3

0x1ca7,	// (0x000331b2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x1ca7,	// (0x000331b2) list_single_graphic_2heading_pane_fp_g4

0x7a28,	// (0x00038f33) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a28,	// (0x00038f33) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x00041062) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x00041062) list_single_graphic_2heading_pane_fp_g

0x3a4f,	// (0x00034f5a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3a4f,	// (0x00034f5a) list_single_graphic_2heading_pane_fp_t1

0x1d0a,	// (0x00033215) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x1d0a,	// (0x00033215) list_single_graphic_2heading_pane_fp_t2

0x3a65,	// (0x00034f70) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3a65,	// (0x00034f70) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc39,	// (0x00041144) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc39,	// (0x00041144) list_single_graphic_2heading_pane_fp_t

0x740a,	// (0x00038915) fep_hwr_write_pane_g5_ParamLimits

0x740a,	// (0x00038915) fep_hwr_write_pane_g5

0x7416,	// (0x00038921) fep_hwr_write_pane_g6_ParamLimits

0x7416,	// (0x00038921) fep_hwr_write_pane_g6

0x7ca4,	// (0x000391af) eswt_shell_pane_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_window_pane_cp18_ParamLimits

0x6068,	// (0x00037573) heading_pane_cp70

0x7dce,	// (0x000392d9) popup_eswt_tasktip_window_t1_ParamLimits

0xd3bc,	// (0x0003e8c7) aid_touch_tab_arrow_left

0xd3d2,	// (0x0003e8dd) aid_touch_tab_arrow_right

0xb4d5,	// (0x0003c9e0) title_pane_g3_ParamLimits

0xb4d5,	// (0x0003c9e0) title_pane_g3

0x358b,	// (0x00034a96) set_value_pane_g1

0xc76f,	// (0x0003dc7a) popup_toolbar_trans_pane_ParamLimits

0x7f28,	// (0x00039433) aid_size_cell_tb_trans_pane_ParamLimits

0x35cc,	// (0x00034ad7) bg_tb_trans_pane_ParamLimits

0x7f3a,	// (0x00039445) grid_tb_trans_pane_ParamLimits

0x2fc8,	// (0x000344d3) cont_note_pane_ParamLimits

0x2fc8,	// (0x000344d3) cont_note_pane

0x333d,	// (0x00034848) cont_snote2_single_text_pane_ParamLimits

0x333d,	// (0x00034848) cont_snote2_single_text_pane

0x333d,	// (0x00034848) cont_snote2_single_graphic_pane_ParamLimits

0x333d,	// (0x00034848) cont_snote2_single_graphic_pane

0x53ba,	// (0x000368c5) cont_note_wait_pane_ParamLimits

0x53ba,	// (0x000368c5) cont_note_wait_pane

0x53ba,	// (0x000368c5) cont_note_image_pane_ParamLimits

0x53ba,	// (0x000368c5) cont_note_image_pane

0x7fe2,	// (0x000394ed) popup_note2_window_g1_ParamLimits

0x7fe2,	// (0x000394ed) popup_note2_window_g1

0x8013,	// (0x0003951e) popup_note2_window_t1_ParamLimits

0x8013,	// (0x0003951e) popup_note2_window_t1

0x8058,	// (0x00039563) popup_note2_window_t2_ParamLimits

0x8058,	// (0x00039563) popup_note2_window_t2

0x809d,	// (0x000395a8) popup_note2_window_t3_ParamLimits

0x809d,	// (0x000395a8) popup_note2_window_t3

0x80e2,	// (0x000395ed) popup_note2_window_t4_ParamLimits

0x80e2,	// (0x000395ed) popup_note2_window_t4

0x304c,	// (0x00034557) popup_note2_window_t5_ParamLimits

0x304c,	// (0x00034557) popup_note2_window_t5

0x0004,

0xfc45,	// (0x00041150) popup_note2_window_t_ParamLimits

0xfc45,	// (0x00041150) popup_note2_window_t

0x8111,	// (0x0003961c) popup_note2_image_window_g1_ParamLimits

0x8111,	// (0x0003961c) popup_note2_image_window_g1

0x811d,	// (0x00039628) popup_note2_image_window_g2_ParamLimits

0x811d,	// (0x00039628) popup_note2_image_window_g2

0x0001,

0xfc50,	// (0x0004115b) popup_note2_image_window_g_ParamLimits

0xfc50,	// (0x0004115b) popup_note2_image_window_g

0x812f,	// (0x0003963a) popup_note2_image_window_t1_ParamLimits

0x812f,	// (0x0003963a) popup_note2_image_window_t1

0x8147,	// (0x00039652) popup_note2_image_window_t2_ParamLimits

0x8147,	// (0x00039652) popup_note2_image_window_t2

0x815f,	// (0x0003966a) popup_note2_image_window_t3_ParamLimits

0x815f,	// (0x0003966a) popup_note2_image_window_t3

0x0002,

0xfc55,	// (0x00041160) popup_note2_image_window_t_ParamLimits

0xfc55,	// (0x00041160) popup_note2_image_window_t

0x53c8,	// (0x000368d3) popup_note2_wait_window_g1_ParamLimits

0x53c8,	// (0x000368d3) popup_note2_wait_window_g1

0x817b,	// (0x00039686) popup_note2_wait_window_g2_ParamLimits

0x817b,	// (0x00039686) popup_note2_wait_window_g2

0x53e0,	// (0x000368eb) popup_note2_wait_window_g3_ParamLimits

0x53e0,	// (0x000368eb) popup_note2_wait_window_g3

0x0002,

0xfc5c,	// (0x00041167) popup_note2_wait_window_g_ParamLimits

0xfc5c,	// (0x00041167) popup_note2_wait_window_g

0x8187,	// (0x00039692) popup_note2_wait_window_t1_ParamLimits

0x8187,	// (0x00039692) popup_note2_wait_window_t1

0x81a5,	// (0x000396b0) popup_note2_wait_window_t2_ParamLimits

0x81a5,	// (0x000396b0) popup_note2_wait_window_t2

0x81c3,	// (0x000396ce) popup_note2_wait_window_t3_ParamLimits

0x81c3,	// (0x000396ce) popup_note2_wait_window_t3

0x81d5,	// (0x000396e0) popup_note2_wait_window_t4_ParamLimits

0x81d5,	// (0x000396e0) popup_note2_wait_window_t4

0x0003,

0xfc63,	// (0x0004116e) popup_note2_wait_window_t_ParamLimits

0xfc63,	// (0x0004116e) popup_note2_wait_window_t

0x81e7,	// (0x000396f2) wait_bar2_pane_ParamLimits

0x81e7,	// (0x000396f2) wait_bar2_pane

0x81ff,	// (0x0003970a) popup_snote2_single_text_window_g1_ParamLimits

0x81ff,	// (0x0003970a) popup_snote2_single_text_window_g1

0x8227,	// (0x00039732) popup_snote2_single_text_window_t1_ParamLimits

0x8227,	// (0x00039732) popup_snote2_single_text_window_t1

0x8273,	// (0x0003977e) popup_snote2_single_text_window_t2_ParamLimits

0x8273,	// (0x0003977e) popup_snote2_single_text_window_t2

0x82bf,	// (0x000397ca) popup_snote2_single_text_window_t3_ParamLimits

0x82bf,	// (0x000397ca) popup_snote2_single_text_window_t3

0x8300,	// (0x0003980b) popup_snote2_single_text_window_t4_ParamLimits

0x8300,	// (0x0003980b) popup_snote2_single_text_window_t4

0x8336,	// (0x00039841) popup_snote2_single_text_window_t5_ParamLimits

0x8336,	// (0x00039841) popup_snote2_single_text_window_t5

0x0004,

0xfc6c,	// (0x00041177) popup_snote2_single_text_window_t_ParamLimits

0xfc6c,	// (0x00041177) popup_snote2_single_text_window_t

0x8361,	// (0x0003986c) popup_snote2_single_graphic_window_g1_ParamLimits

0x8361,	// (0x0003986c) popup_snote2_single_graphic_window_g1

0x8389,	// (0x00039894) popup_snote2_single_graphic_window_g2_ParamLimits

0x8389,	// (0x00039894) popup_snote2_single_graphic_window_g2

0x0001,

0xfc77,	// (0x00041182) popup_snote2_single_graphic_window_g_ParamLimits

0xfc77,	// (0x00041182) popup_snote2_single_graphic_window_g

0x83b1,	// (0x000398bc) popup_snote2_single_graphic_window_t1_ParamLimits

0x83b1,	// (0x000398bc) popup_snote2_single_graphic_window_t1

0x83fd,	// (0x00039908) popup_snote2_single_graphic_window_t2_ParamLimits

0x83fd,	// (0x00039908) popup_snote2_single_graphic_window_t2

0x82bf,	// (0x000397ca) popup_snote2_single_graphic_window_t3_ParamLimits

0x82bf,	// (0x000397ca) popup_snote2_single_graphic_window_t3

0x8300,	// (0x0003980b) popup_snote2_single_graphic_window_t4_ParamLimits

0x8300,	// (0x0003980b) popup_snote2_single_graphic_window_t4

0x8336,	// (0x00039841) popup_snote2_single_graphic_window_t5_ParamLimits

0x8336,	// (0x00039841) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7c,	// (0x00041187) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7c,	// (0x00041187) popup_snote2_single_graphic_window_t

0x6e30,	// (0x0003833b) clock_nsta_pane_cp2_t1

0x6e30,	// (0x0003833b) clock_nsta_pane_cp2_t2

0x0001,

0xfa90,	// (0x00040f9b) clock_nsta_pane_cp2_t

0x0196,	// (0x000316a1) form_field_data_wide_pane_g1_ParamLimits

0x35da,	// (0x00034ae5) form_field_data_wide_pane_g2_ParamLimits

0x35da,	// (0x00034ae5) form_field_data_wide_pane_g2

0x35e6,	// (0x00034af1) form_field_data_wide_pane_g3_ParamLimits

0x35e6,	// (0x00034af1) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x00040b61) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x00040b61) form_field_data_wide_pane_g

0xdca4,	// (0x0003f1af) grid_touch_3_pane_ParamLimits

0xdca4,	// (0x0003f1af) grid_touch_3_pane

0xe13d,	// (0x0003f648) cell_touch_3_pane_ParamLimits

0xe13d,	// (0x0003f648) cell_touch_3_pane

0x737e,	// (0x00038889) cell_touch_3_pane_g1

0x737e,	// (0x00038889) cell_touch_3_pane_g2

0x0001,

0xfb15,	// (0x00041020) cell_touch_3_pane_g

0x30a4,	// (0x000345af) cont_query_data_pane

0x30ac,	// (0x000345b7) cont_query_data_pane_cp1

0x8477,	// (0x00039982) button_value_adjust_pane_cp7

0x847f,	// (0x0003998a) query_popup_pane_cp3

0x3fae,	// (0x000354b9) bg_popup_sub_pane_cp22_ParamLimits

0x055a,	// (0x00031a65) navi_navi_volume_pane_cp2

0x0575,	// (0x00031a80) popup_side_volume_key_window_g2

0x0584,	// (0x00031a8f) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x00040bf7) popup_side_volume_key_window_g

0x05a1,	// (0x00031aac) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x00040bfe) popup_side_volume_key_window_t

0x4268,	// (0x00035773) popup_side_volume_key_window_ParamLimits

0xb999,	// (0x0003cea4) list_double_graphic_pane_g4_ParamLimits

0xb999,	// (0x0003cea4) list_double_graphic_pane_g4

0xc8b7,	// (0x0003ddc2) list_single_2heading_msg_pane_ParamLimits

0xc8b7,	// (0x0003ddc2) list_single_2heading_msg_pane

0xc978,	// (0x0003de83) list_single_2heading_msg_pane_g1_ParamLimits

0xc978,	// (0x0003de83) list_single_2heading_msg_pane_g1

0xc984,	// (0x0003de8f) list_single_2heading_msg_pane_g2_ParamLimits

0xc984,	// (0x0003de8f) list_single_2heading_msg_pane_g2

0xc997,	// (0x0003dea2) list_single_2heading_msg_pane_g3_ParamLimits

0xc997,	// (0x0003dea2) list_single_2heading_msg_pane_g3

0xc9a3,	// (0x0003deae) list_single_2heading_msg_pane_g4_ParamLimits

0xc9a3,	// (0x0003deae) list_single_2heading_msg_pane_g4

0x0003,

0xfc87,	// (0x00041192) list_single_2heading_msg_pane_g_ParamLimits

0xfc87,	// (0x00041192) list_single_2heading_msg_pane_g

0xc9bb,	// (0x0003dec6) list_single_2heading_msg_pane_t1_ParamLimits

0xc9bb,	// (0x0003dec6) list_single_2heading_msg_pane_t1

0xc9e3,	// (0x0003deee) list_single_2heading_msg_pane_t2_ParamLimits

0xc9e3,	// (0x0003deee) list_single_2heading_msg_pane_t2

0xca4e,	// (0x0003df59) list_single_2heading_msg_pane_t3_ParamLimits

0xca4e,	// (0x0003df59) list_single_2heading_msg_pane_t3

0x3b4a,	// (0x00035055) list_single_2heading_msg_pane_t4_ParamLimits

0x3b4a,	// (0x00035055) list_single_2heading_msg_pane_t4

0x0003,

0xfc90,	// (0x0004119b) list_single_2heading_msg_pane_t_ParamLimits

0xfc90,	// (0x0004119b) list_single_2heading_msg_pane_t

0x2c93,	// (0x0003419e) title_pane_g4_ParamLimits

0x2c93,	// (0x0003419e) title_pane_g4

0x0369,	// (0x00031874) title_pane_stacon_g3_ParamLimits

0x0369,	// (0x00031874) title_pane_stacon_g3

0x7fa5,	// (0x000394b0) list_single_2graphic_im_pane_g4_ParamLimits

0x7fa5,	// (0x000394b0) list_single_2graphic_im_pane_g4

0x5e25,	// (0x00037330) popup_side_volume_key_window_cp

0x6657,	// (0x00037b62) main_idle_act2_pane_t1

0x0fcc,	// (0x000324d7) toolbar_button_pane_g10

0xb834,	// (0x0003cd3f) popup_toolbar_window_cp1

0x6e21,	// (0x0003832c) clock_nsta_pane_cp_t1

0x6e21,	// (0x0003832c) clock_nsta_pane_cp_t2

0x0001,

0xfa8b,	// (0x00040f96) clock_nsta_pane_cp_t

0x055a,	// (0x00031a65) navi_navi_volume_pane_cp2_ParamLimits

0x0569,	// (0x00031a74) popup_side_volume_key_window_g1_ParamLimits

0x0575,	// (0x00031a80) popup_side_volume_key_window_g2_ParamLimits

0x0584,	// (0x00031a8f) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x00040bf7) popup_side_volume_key_window_g_ParamLimits

0x19f7,	// (0x00032f02) fep_hwr_aid_pane

0x1a9e,	// (0x00032fa9) bg_fep_hwr_top_pane_g4_ParamLimits

0x73da,	// (0x000388e5) fep_hwr_top_pane_g1_ParamLimits

0x73ec,	// (0x000388f7) fep_hwr_top_pane_g2_ParamLimits

0x1abe,	// (0x00032fc9) fep_hwr_top_pane_g3_ParamLimits

0xfae0,	// (0x00040feb) fep_hwr_top_pane_g_ParamLimits

0x1ad3,	// (0x00032fde) fep_hwr_top_text_pane_ParamLimits

0x5be8,	// (0x000370f3) aid_touch_tab_arrow_arrow_2

0x5bf1,	// (0x000370fc) aid_touch_tab_arrow_left_2

0x1a0b,	// (0x00032f16) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1a42,	// (0x00032f4d) fep_hwr_prediction_pane

0x754c,	// (0x00038a57) fep_vkb_prediction_pane

0xdf66,	// (0x0003f471) fep_vkb_side_pane_g3_ParamLimits

0xdf66,	// (0x0003f471) fep_vkb_side_pane_g3

0x1c4e,	// (0x00033159) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1e09,	// (0x00033314) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1e16,	// (0x00033321) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x0004109a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1f45,	// (0x00033450) fep_hwr_prediction_pane_g1

0x1f4f,	// (0x0003345a) fep_hwr_prediction_pane_g2

0x1f57,	// (0x00033462) fep_hwr_prediction_pane_g3

0x1f5f,	// (0x0003346a) fep_hwr_prediction_pane_g4

0x0003,

0xfc99,	// (0x000411a4) fep_hwr_prediction_pane_g

0x84a4,	// (0x000399af) fep_vkb_prediction_pane_g1

0x84ae,	// (0x000399b9) fep_vkb_prediction_pane_g2

0x84b6,	// (0x000399c1) fep_vkb_prediction_pane_g3

0x84be,	// (0x000399c9) fep_vkb_prediction_pane_g4

0x0003,

0xfca2,	// (0x000411ad) fep_vkb_prediction_pane_g

0x13d3,	// (0x000328de) slider_set_pane_g3

0x13e7,	// (0x000328f2) slider_set_pane_g4

0x13ff,	// (0x0003290a) slider_set_pane_g5

0x13d3,	// (0x000328de) slider_set_pane_g6

0x1415,	// (0x00032920) slider_set_pane_g7

0x6285,	// (0x00037790) slider_form_pane_g3

0x628e,	// (0x00037799) slider_form_pane_g4

0x6296,	// (0x000377a1) slider_form_pane_g5

0x6285,	// (0x00037790) slider_form_pane_g6

0xdade,	// (0x0003efe9) slider_form_pane_g7

0x6902,	// (0x00037e0d) slider_set_pane_vc_g3

0x690b,	// (0x00037e16) slider_set_pane_vc_g4

0x6914,	// (0x00037e1f) slider_set_pane_vc_g5

0x6902,	// (0x00037e0d) slider_set_pane_vc_g6

0x691d,	// (0x00037e28) slider_set_pane_vc_g7

0x6adf,	// (0x00037fea) slider_form_pane_vc_g1

0x6ae8,	// (0x00037ff3) slider_form_pane_vc_g2

0x6af1,	// (0x00037ffc) slider_form_pane_vc_g3

0x6adf,	// (0x00037fea) slider_form_pane_vc_g4

0x6afa,	// (0x00038005) slider_form_pane_vc_g5

0x0004,

0xfa5d,	// (0x00040f68) slider_form_pane_vc_g

0xf146,	// (0x00040651) main_idle_act3_pane

0x84c6,	// (0x000399d1) ai3_links_pane

0xe185,	// (0x0003f690) popup_ai3_data_window_ParamLimits

0xe185,	// (0x0003f690) popup_ai3_data_window

0xe0f6,	// (0x0003f601) grid_ai3_links_pane

0xe19f,	// (0x0003f6aa) cell_ai3_links_pane_ParamLimits

0xe19f,	// (0x0003f6aa) cell_ai3_links_pane

0x8501,	// (0x00039a0c) bg_popup_sub_pane_cp11

0x850e,	// (0x00039a19) cell_ai3_links_pane_g1

0xe0f6,	// (0x0003f601) bg_popup_sub_pane_cp12

0x8533,	// (0x00039a3e) heading_ai3_data_pane

0x853b,	// (0x00039a46) list_ai3_gene_pane

0x8547,	// (0x00039a52) popup_ai3_data_window_g1

0x854f,	// (0x00039a5a) heading_ai3_data_pane_g1

0x8557,	// (0x00039a62) heading_ai3_data_pane_t1

0x8565,	// (0x00039a70) list_double_ai3_gene_pane_ParamLimits

0x8565,	// (0x00039a70) list_double_ai3_gene_pane

0x8572,	// (0x00039a7d) list_single_ai3_gene_pane_ParamLimits

0x8572,	// (0x00039a7d) list_single_ai3_gene_pane

0x7343,	// (0x0003884e) list_highlight_pane_cp7_ParamLimits

0x7343,	// (0x0003884e) list_highlight_pane_cp7

0x857f,	// (0x00039a8a) list_single_a13_gene_pane_t1_ParamLimits

0x857f,	// (0x00039a8a) list_single_a13_gene_pane_t1

0x8596,	// (0x00039aa1) list_single_ai3_gene_pane_g1

0x859f,	// (0x00039aaa) list_single_ai3_gene_pane_g2

0x0001,

0xfcab,	// (0x000411b6) list_single_ai3_gene_pane_g

0x85a7,	// (0x00039ab2) list_double_ai3_gene_pane_g1_ParamLimits

0x85a7,	// (0x00039ab2) list_double_ai3_gene_pane_g1

0x85b3,	// (0x00039abe) list_double_ai3_gene_pane_t1_ParamLimits

0x85b3,	// (0x00039abe) list_double_ai3_gene_pane_t1

0x85cf,	// (0x00039ada) list_double_ai3_gene_pane_t2_ParamLimits

0x85cf,	// (0x00039ada) list_double_ai3_gene_pane_t2

0x85e5,	// (0x00039af0) list_double_ai3_gene_pane_t3_ParamLimits

0x85e5,	// (0x00039af0) list_double_ai3_gene_pane_t3

0x0002,

0xfcb0,	// (0x000411bb) list_double_ai3_gene_pane_t_ParamLimits

0xfcb0,	// (0x000411bb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3a7b,	// (0x00034f86) aid_size_min_col_2

0xe16f,	// (0x0003f67a) aid_size_min_msg_ParamLimits

0xe16f,	// (0x0003f67a) aid_size_min_msg

0xdf7a,	// (0x0003f485) fep_vkb_top_text_pane_g2_ParamLimits

0xdf7a,	// (0x0003f485) fep_vkb_top_text_pane_g2

0x0001,

0xfb10,	// (0x0004101b) fep_vkb_top_text_pane_g_ParamLimits

0xfb10,	// (0x0004101b) fep_vkb_top_text_pane_g

0xf146,	// (0x00040651) main_hc_apps_shell_pane

0x8602,	// (0x00039b0d) grid_hc_apps_pane_ParamLimits

0x8602,	// (0x00039b0d) grid_hc_apps_pane

0x8614,	// (0x00039b1f) list_hc_apps_pane

0x861c,	// (0x00039b27) scroll_pane_cp37_ParamLimits

0x861c,	// (0x00039b27) scroll_pane_cp37

0xe1b9,	// (0x0003f6c4) cell_hc_apps_pane_ParamLimits

0xe1b9,	// (0x0003f6c4) cell_hc_apps_pane

0xe277,	// (0x0003f782) cell_hc_apps_pane_g1_ParamLimits

0xe277,	// (0x0003f782) cell_hc_apps_pane_g1

0x8706,	// (0x00039c11) cell_hc_apps_pane_g2_ParamLimits

0x8706,	// (0x00039c11) cell_hc_apps_pane_g2

0x8722,	// (0x00039c2d) cell_hc_apps_pane_g3_ParamLimits

0x8722,	// (0x00039c2d) cell_hc_apps_pane_g3

0x0002,

0xfcb7,	// (0x000411c2) cell_hc_apps_pane_g_ParamLimits

0xfcb7,	// (0x000411c2) cell_hc_apps_pane_g

0xe2a3,	// (0x0003f7ae) cell_hc_apps_pane_t1_ParamLimits

0xe2a3,	// (0x0003f7ae) cell_hc_apps_pane_t1

0x2fc8,	// (0x000344d3) grid_highlight_pane_cp10_ParamLimits

0x2fc8,	// (0x000344d3) grid_highlight_pane_cp10

0xe2e1,	// (0x0003f7ec) list_single_hc_apps_pane_ParamLimits

0xe2e1,	// (0x0003f7ec) list_single_hc_apps_pane

0xe30e,	// (0x0003f819) list_single_hc_apps_pane_g1

0xcabc,	// (0x0003dfc7) list_single_hc_apps_pane_g2

0x0001,

0xfcbe,	// (0x000411c9) list_single_hc_apps_pane_g

0xcad5,	// (0x0003dfe0) list_single_hc_apps_pane_g2_copy1

0xcaf1,	// (0x0003dffc) list_single_hc_apps_pane_t1

0x2d3f,	// (0x0003424a) bg_set_opt_pane_cp_ParamLimits

0xf4a0,	// (0x000409ab) setting_slider_pane_t1_ParamLimits

0xf4b9,	// (0x000409c4) setting_slider_pane_t2_ParamLimits

0xf4d3,	// (0x000409de) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00040a44) setting_slider_pane_t_ParamLimits

0xf4eb,	// (0x000409f6) slider_set_pane_ParamLimits

0x088d,	// (0x00031d98) control_pane_g5_ParamLimits

0x088d,	// (0x00031d98) control_pane_g5

0x60d4,	// (0x000375df) slider_set_pane_g1_ParamLimits

0x13c7,	// (0x000328d2) slider_set_pane_g2_ParamLimits

0x13d3,	// (0x000328de) slider_set_pane_g3_ParamLimits

0x13e7,	// (0x000328f2) slider_set_pane_g4_ParamLimits

0x13ff,	// (0x0003290a) slider_set_pane_g5_ParamLimits

0x13d3,	// (0x000328de) slider_set_pane_g6_ParamLimits

0x1415,	// (0x00032920) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x00040e45) slider_set_pane_g_ParamLimits

0x4354,	// (0x0003585f) navi_icon_text_pane_ParamLimits

0xd385,	// (0x0003e890) aid_fill_nsta_2_ParamLimits

0xd3bc,	// (0x0003e8c7) aid_touch_tab_arrow_left_ParamLimits

0xd3d2,	// (0x0003e8dd) aid_touch_tab_arrow_right_ParamLimits

0xd46d,	// (0x0003e978) clock_nsta_pane_ParamLimits

0x5bca,	// (0x000370d5) navi_icon_pane_g1_ParamLimits

0x5bd6,	// (0x000370e1) navi_text_pane_t1_ParamLimits

0x6f2d,	// (0x00038438) navi_icon_text_pane_g1_ParamLimits

0x6f39,	// (0x00038444) navi_icon_text_pane_t1_ParamLimits

0xe30e,	// (0x0003f819) list_single_hc_apps_pane_g1_ParamLimits

0xcabc,	// (0x0003dfc7) list_single_hc_apps_pane_g2_ParamLimits

0xfcbe,	// (0x000411c9) list_single_hc_apps_pane_g_ParamLimits

0xcad5,	// (0x0003dfe0) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcaf1,	// (0x0003dffc) list_single_hc_apps_pane_t1_ParamLimits

0xb3da,	// (0x0003c8e5) popup_toolbar2_fixed_window_ParamLimits

0xb3da,	// (0x0003c8e5) popup_toolbar2_fixed_window

0xc765,	// (0x0003dc70) popup_toolbar2_float_window

0xe0f6,	// (0x0003f601) bg_popup_sub_pane_cp27

0x87f9,	// (0x00039d04) grid_toolbar2_float_pane

0xe0f6,	// (0x0003f601) bg_popup_sub_pane_cp26

0x87f9,	// (0x00039d04) grid_toolbar2_fixed_pane

0xe327,	// (0x0003f832) cell_toolbar2_fixed_pane_ParamLimits

0xe327,	// (0x0003f832) cell_toolbar2_fixed_pane

0xe341,	// (0x0003f84c) cell_toolbar2_fixed_pane_g1

0x881a,	// (0x00039d25) toolbar2_fixed_button_pane

0x4d2b,	// (0x00036236) toolbar2_fixed_button_pane_g1

0x4d3b,	// (0x00036246) toolbar2_fixed_button_pane_g2

0x4d33,	// (0x0003623e) toolbar2_fixed_button_pane_g3

0x4d4b,	// (0x00036256) toolbar2_fixed_button_pane_g4

0x4d43,	// (0x0003624e) toolbar2_fixed_button_pane_g5

0x4d53,	// (0x0003625e) toolbar2_fixed_button_pane_g6

0x4d5b,	// (0x00036266) toolbar2_fixed_button_pane_g7

0x4d6b,	// (0x00036276) toolbar2_fixed_button_pane_g8

0x4d63,	// (0x0003626e) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x00040d47) toolbar2_fixed_button_pane_g

0x8822,	// (0x00039d2d) cell_toolbar2_float_pane_ParamLimits

0x8822,	// (0x00039d2d) cell_toolbar2_float_pane

0x8833,	// (0x00039d3e) cell_toolbar2_float_pane_g1

0x881a,	// (0x00039d25) toolbar2_fixed_button_pane_cp

0xde54,	// (0x0003f35f) fep_vkb_accented_list_pane_ParamLimits

0xde54,	// (0x0003f35f) fep_vkb_accented_list_pane

0x1c2e,	// (0x00033139) bg_popup_fep_shadow_pane_g9

0x44dd,	// (0x000359e8) bg_popup_fep_shadow_pane_cp3

0x3733,	// (0x00034c3e) list_accented_list_pane

0x883c,	// (0x00039d47) list_single_accented_list_pane_ParamLimits

0x883c,	// (0x00039d47) list_single_accented_list_pane

0x44dd,	// (0x000359e8) list_highlight_pane_cp10

0x884d,	// (0x00039d58) list_single_accented_list_pane_t1

0xc68f,	// (0x0003db9a) popup_slider_window_ParamLimits

0xc68f,	// (0x0003db9a) popup_slider_window

0x8487,	// (0x00039992) aid_indentation_list_msg

0xe438,	// (0x0003f943) bg_popup_window_pane_cp19

0x8979,	// (0x00039e84) popup_slider_window_g1

0x89b6,	// (0x00039ec1) popup_slider_window_g2

0x89d2,	// (0x00039edd) popup_slider_window_g3

0x0005,

0xfcc3,	// (0x000411ce) popup_slider_window_g

0x8a38,	// (0x00039f43) popup_slider_window_t1

0x8aac,	// (0x00039fb7) small_volume_slider_vertical_pane

0x737e,	// (0x00038889) small_volume_slider_vertical_pane_g1

0x737e,	// (0x00038889) small_volume_slider_vertical_pane_g2

0x8ac8,	// (0x00039fd3) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd5,	// (0x000411e0) small_volume_slider_vertical_pane_g

0xb348,	// (0x0003c853) area_side_right_pane_ParamLimits

0xb348,	// (0x0003c853) area_side_right_pane

0xcb1f,	// (0x0003e02a) aid_size_side_button_ParamLimits

0xcb1f,	// (0x0003e02a) aid_size_side_button

0xcb38,	// (0x0003e043) grid_sctrl_middle_pane_ParamLimits

0xcb38,	// (0x0003e043) grid_sctrl_middle_pane

0x1f9a,	// (0x000334a5) sctrl_sk_bottom_pane

0x1fab,	// (0x000334b6) sctrl_sk_top_pane

0x1fbd,	// (0x000334c8) aid_touch_sctrl_top

0x1fca,	// (0x000334d5) bg_sctrl_sk_pane_ParamLimits

0x1fca,	// (0x000334d5) bg_sctrl_sk_pane

0x1fd8,	// (0x000334e3) sctrl_sk_top_pane_g1

0x1fe5,	// (0x000334f0) sctrl_sk_top_pane_t1

0x1fbd,	// (0x000334c8) aid_touch_sctrl_bottom

0x1fca,	// (0x000334d5) bg_sctrl_sk_pane_cp_ParamLimits

0x1fca,	// (0x000334d5) bg_sctrl_sk_pane_cp

0x2000,	// (0x0003350b) sctrl_sk_bottom_pane_g1

0x1fe5,	// (0x000334f0) sctrl_sk_bottom_pane_t1

0xcb52,	// (0x0003e05d) cell_sctrl_middle_pane_ParamLimits

0xcb52,	// (0x0003e05d) cell_sctrl_middle_pane

0xcb63,	// (0x0003e06e) aid_touch_sctrl_middle_ParamLimits

0xcb63,	// (0x0003e06e) aid_touch_sctrl_middle

0xcb70,	// (0x0003e07b) bg_sctrl_middle_pane_ParamLimits

0xcb70,	// (0x0003e07b) bg_sctrl_middle_pane

0x2670,	// (0x00033b7b) cell_sctrl_middle_pane_g1_ParamLimits

0x2670,	// (0x00033b7b) cell_sctrl_middle_pane_g1

0xcb7e,	// (0x0003e089) cell_sctrl_middle_pane_g2_ParamLimits

0xcb7e,	// (0x0003e089) cell_sctrl_middle_pane_g2

0x0001,

0xfce1,	// (0x000411ec) cell_sctrl_middle_pane_g_ParamLimits

0xfce1,	// (0x000411ec) cell_sctrl_middle_pane_g

0x4d2b,	// (0x00036236) bg_sctrl_middle_pane_g1

0x4d33,	// (0x0003623e) bg_sctrl_middle_pane_g2

0x4d3b,	// (0x00036246) bg_sctrl_middle_pane_g3

0x4d43,	// (0x0003624e) bg_sctrl_middle_pane_g4

0x4d4b,	// (0x00036256) bg_sctrl_middle_pane_g5

0x4d53,	// (0x0003625e) bg_sctrl_middle_pane_g6

0x4d5b,	// (0x00036266) bg_sctrl_middle_pane_g7

0x4d63,	// (0x0003626e) bg_sctrl_middle_pane_g8

0x0007,

0xfce6,	// (0x000411f1) bg_sctrl_middle_pane_g

0x4d6b,	// (0x00036276) bg_sctrl_middle_pane_g8_copy1

0x4d2b,	// (0x00036236) bg_sctrl_sk_pane_g1

0x4d3b,	// (0x00036246) bg_sctrl_sk_pane_g2

0x4d33,	// (0x0003623e) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x00040d47) bg_sctrl_sk_pane_g

0x34fb,	// (0x00034a06) aid_size_touch_scroll_bar

0x4d4b,	// (0x00036256) bg_sctrl_sk_pane_g4

0x4d43,	// (0x0003624e) bg_sctrl_sk_pane_g5

0x4d53,	// (0x0003625e) bg_sctrl_sk_pane_g6

0x4d5b,	// (0x00036266) bg_sctrl_sk_pane_g7

0x4d6b,	// (0x00036276) bg_sctrl_sk_pane_g8

0x4d63,	// (0x0003626e) bg_sctrl_sk_pane_g9

0x0a4d,	// (0x00031f58) popup_fep_china_hwr2_fs_candidate_window

0xc1a3,	// (0x0003d6ae) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc1a3,	// (0x0003d6ae) popup_fep_china_hwr2_fs_control_window

0x1c4e,	// (0x00033159) sctrl_sk_top_pane_g2

0x0001,

0xfcdc,	// (0x000411e7) sctrl_sk_top_pane_g

0xe4f0,	// (0x0003f9fb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4f0,	// (0x0003f9fb) aid_fep_china_hwr2_fs_cell

0xe504,	// (0x0003fa0f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe504,	// (0x0003fa0f) bg_popup_fep_shadow_pane_cp4

0xe51b,	// (0x0003fa26) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe51b,	// (0x0003fa26) bg_popup_fep_shadow_pane_cp5

0xe52d,	// (0x0003fa38) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe52d,	// (0x0003fa38) popup_fep_china_hwr2_fs_control_bar_grid

0xe541,	// (0x0003fa4c) popup_fep_china_hwr2_fs_control_funtion_grid

0x8b24,	// (0x0003a02f) aid_fep_china_hwr2_fs_candi_cell

0xe0f6,	// (0x0003f601) bg_popup_fep_shadow_pane_cp6

0x8b2e,	// (0x0003a039) popup_fep_china_hwr2_fs_candidate_grid

0xe549,	// (0x0003fa54) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe549,	// (0x0003fa54) cell_fep_china_hwr2_fs_funtion_grid

0x737e,	// (0x00038889) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8b50,	// (0x0003a05b) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8b50,	// (0x0003a05b) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b5e,	// (0x0003a069) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b5e,	// (0x0003a069) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf7,	// (0x00041202) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf7,	// (0x00041202) cell_fep_china_hwr2_fs_funtion_grid_g

0xe561,	// (0x0003fa6c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe561,	// (0x0003fa6c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe576,	// (0x0003fa81) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe576,	// (0x0003fa81) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcfc,	// (0x00041207) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcfc,	// (0x00041207) cell_fep_china_hwr2_fs_funtion_grid_t

0x8ba5,	// (0x0003a0b0) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8bad,	// (0x0003a0b8) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8bb5,	// (0x0003a0c0) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd01,	// (0x0004120c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8bbd,	// (0x0003a0c8) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8bbd,	// (0x0003a0c8) cell_fep_china_hwr2_fs_candidate_grid

0x8bd6,	// (0x0003a0e1) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8bde,	// (0x0003a0e9) popup_fep_china_hwr2_fs_candidate_grid_g21

0x737e,	// (0x00038889) cell_fep_china_hwr2_fs_candidate_grid_g1

0x737e,	// (0x00038889) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb15,	// (0x00041020) cell_fep_china_hwr2_fs_candidate_grid_g

0x8be6,	// (0x0003a0f1) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4921,	// (0x00035e2c) clock_nsta_pane_cp_24_ParamLimits

0x4921,	// (0x00035e2c) clock_nsta_pane_cp_24

0x499f,	// (0x00035eaa) indicator_nsta_pane_cp_24_ParamLimits

0x499f,	// (0x00035eaa) indicator_nsta_pane_cp_24

0x5a3a,	// (0x00036f45) heading_pane_g1

0x0001,

0xf8a1,	// (0x00040dac) heading_pane_g

0x64a0,	// (0x000379ab) grid_sct_catagory_button_pane

0x64d0,	// (0x000379db) scroll_pane_cp5_ParamLimits

0x6f7b,	// (0x00038486) button_value_adjust_pane_cp5_ParamLimits

0x6f7b,	// (0x00038486) button_value_adjust_pane_cp5

0x705a,	// (0x00038565) form2_midp_time_pane_ParamLimits

0x8bf4,	// (0x0003a0ff) cell_sct_catagory_button_pane_ParamLimits

0x8bf4,	// (0x0003a0ff) cell_sct_catagory_button_pane

0x7343,	// (0x0003884e) bg_button_pane_cp01_ParamLimits

0x7343,	// (0x0003884e) bg_button_pane_cp01

0x737e,	// (0x00038889) cell_sct_catagory_button_pane_g1

0xc708,	// (0x0003dc13) popup_tb_extension_window

0xe592,	// (0x0003fa9d) aid_size_cell_ext_ParamLimits

0xe592,	// (0x0003fa9d) aid_size_cell_ext

0x333d,	// (0x00034848) bg_tb_trans_pane_cp1_ParamLimits

0x333d,	// (0x00034848) bg_tb_trans_pane_cp1

0xe5b8,	// (0x0003fac3) grid_tb_ext_pane_ParamLimits

0xe5b8,	// (0x0003fac3) grid_tb_ext_pane

0xe5f3,	// (0x0003fafe) cell_tb_ext_pane_ParamLimits

0xe5f3,	// (0x0003fafe) cell_tb_ext_pane

0xe61b,	// (0x0003fb26) cell_tb_ext_pane_g1_ParamLimits

0xe61b,	// (0x0003fb26) cell_tb_ext_pane_g1

0x8c88,	// (0x0003a193) cell_tb_ext_pane_t1

0x2fc8,	// (0x000344d3) list_highlight_pane_cp11_ParamLimits

0x2fc8,	// (0x000344d3) list_highlight_pane_cp11

0xb3ef,	// (0x0003c8fa) popup_uni_indicator_window_ParamLimits

0xb3ef,	// (0x0003c8fa) popup_uni_indicator_window

0x35cc,	// (0x00034ad7) bg_popup_sub_pane_cp14

0x8ca3,	// (0x0003a1ae) list_uniindi_pane

0x8caf,	// (0x0003a1ba) uniindi_top_pane

0x2fc8,	// (0x000344d3) bg_uniindi_top_pane

0x8cce,	// (0x0003a1d9) uniindi_top_pane_g1

0x8ce4,	// (0x0003a1ef) uniindi_top_pane_g2

0x0003,

0xfd08,	// (0x00041213) uniindi_top_pane_g

0x8d0e,	// (0x0003a219) uniindi_top_pane_t1

0x8d38,	// (0x0003a243) list_single_uniindi_pane_ParamLimits

0x8d38,	// (0x0003a243) list_single_uniindi_pane

0x737e,	// (0x00038889) bg_uniindi_top_pane_g1

0x8d4b,	// (0x0003a256) list_single_uniindi_pane_g1

0x8d5e,	// (0x0003a269) list_single_uniindi_pane_t1

0xf146,	// (0x00040651) control_bg_pane

0x8d83,	// (0x0003a28e) bg_sctrl_sk_pane_cp1

0x8d8c,	// (0x0003a297) bg_sctrl_sk_pane_cp2

0x8d95,	// (0x0003a2a0) control_bg_pane_g1

0x8d9e,	// (0x0003a2a9) control_bg_pane_g2

0x0001,

0xfd11,	// (0x0004121c) control_bg_pane_g

0x6dc5,	// (0x000382d0) cell_indicator_nsta_pane_g1_ParamLimits

0xdce1,	// (0x0003f1ec) cell_indicator_nsta_pane_g2_ParamLimits

0xfa79,	// (0x00040f84) cell_indicator_nsta_pane_g_ParamLimits

0x19d6,	// (0x00032ee1) form2_midp_time_pane_t1_ParamLimits

0x19e9,	// (0x00032ef4) main_idle_act4_pane_ParamLimits

0x19e9,	// (0x00032ef4) main_idle_act4_pane

0xc708,	// (0x0003dc13) popup_tb_extension_window_ParamLimits

0xe5da,	// (0x0003fae5) tb_ext_find_pane_ParamLimits

0xe5da,	// (0x0003fae5) tb_ext_find_pane

0x8da7,	// (0x0003a2b2) ai_gene_pane_1_cp1

0x4624,	// (0x00035b2f) ai_gene_pane_2_cp1

0x8daf,	// (0x0003a2ba) list_single_idle_plugin_calendar_pane

0x8db8,	// (0x0003a2c3) list_single_idle_plugin_notification_pane

0x8dc1,	// (0x0003a2cc) list_single_idle_plugin_player_pane

0xe638,	// (0x0003fb43) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe638,	// (0x0003fb43) list_single_idle_plugin_shortcut_pane

0xe660,	// (0x0003fb6b) main_idle_act4_pane_t1

0xe676,	// (0x0003fb81) main_idle_act4_pane_t2

0x0001,

0xfd16,	// (0x00041221) main_idle_act4_pane_t

0xe68c,	// (0x0003fb97) middle_sk_idle_act4_pane_ParamLimits

0xe68c,	// (0x0003fb97) middle_sk_idle_act4_pane

0xe6a8,	// (0x0003fbb3) popup_clock_digital_analogue_window_cp2

0xe6d0,	// (0x0003fbdb) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6d0,	// (0x0003fbdb) shortcut_wheel_idle_act4_pane

0x737e,	// (0x00038889) shortcut_wheel_idle_act4_pane_g1

0x737e,	// (0x00038889) shortcut_wheel_idle_act4_pane_g2

0x737e,	// (0x00038889) shortcut_wheel_idle_act4_pane_g3

0x737e,	// (0x00038889) shortcut_wheel_idle_act4_pane_g4

0x737e,	// (0x00038889) shortcut_wheel_idle_act4_pane_g5

0x8e54,	// (0x0003a35f) shortcut_wheel_idle_act4_pane_g6

0x8e5c,	// (0x0003a367) shortcut_wheel_idle_act4_pane_g7

0x8e64,	// (0x0003a36f) shortcut_wheel_idle_act4_pane_g8

0x8e6c,	// (0x0003a377) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1b,	// (0x00041226) shortcut_wheel_idle_act4_pane_g

0xe0c6,	// (0x0003f5d1) middle_sk_idle_act4_pane_g1_ParamLimits

0xe0c6,	// (0x0003f5d1) middle_sk_idle_act4_pane_g1

0xe74d,	// (0x0003fc58) middle_sk_idle_act4_pane_g2_ParamLimits

0xe74d,	// (0x0003fc58) middle_sk_idle_act4_pane_g2

0x0001,

0xfd3e,	// (0x00041249) middle_sk_idle_act4_pane_g_ParamLimits

0xfd3e,	// (0x00041249) middle_sk_idle_act4_pane_g

0xe765,	// (0x0003fc70) middle_sk_idle_act4_pane_t1_ParamLimits

0xe765,	// (0x0003fc70) middle_sk_idle_act4_pane_t1

0xe794,	// (0x0003fc9f) grid_ai_shortcut_pane_ParamLimits

0xe794,	// (0x0003fc9f) grid_ai_shortcut_pane

0xe7b1,	// (0x0003fcbc) list_highlight_pane_cp16_ParamLimits

0xe7b1,	// (0x0003fcbc) list_highlight_pane_cp16

0xe7be,	// (0x0003fcc9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7be,	// (0x0003fcc9) list_single_idle_plugin_shortcut_pane_g1

0xe7ca,	// (0x0003fcd5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7ca,	// (0x0003fcd5) list_single_idle_plugin_shortcut_pane_g2

0xe7e6,	// (0x0003fcf1) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7e6,	// (0x0003fcf1) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd43,	// (0x0004124e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd43,	// (0x0004124e) list_single_idle_plugin_shortcut_pane_g

0xe7fb,	// (0x0003fd06) cell_ai_shortcut_pane_ParamLimits

0xe7fb,	// (0x0003fd06) cell_ai_shortcut_pane

0xe811,	// (0x0003fd1c) cell_ai_shortcut_pane_g1_ParamLimits

0xe811,	// (0x0003fd1c) cell_ai_shortcut_pane_g1

0x8da7,	// (0x0003a2b2) ai_gene_pane_1_cp2

0x8f9c,	// (0x0003a4a7) ai_gene_pane_2_cp2

0x8fa4,	// (0x0003a4af) list_highlight_pane_cp15

0x8fad,	// (0x0003a4b8) list_single_idle_plugin_calendar_pane_g1

0x8fa4,	// (0x0003a4af) list_highlight_pane_cp17

0x8fb5,	// (0x0003a4c0) list_single_idle_plugin_calendar_pane_g1_copy1

0x8fbd,	// (0x0003a4c8) list_single_idle_plugin_player_pane_g1

0x66f9,	// (0x00037c04) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4a,	// (0x00041255) list_single_idle_plugin_player_pane_g

0x8fc5,	// (0x0003a4d0) list_single_idle_plugin_player_pane_t1

0x8fd3,	// (0x0003a4de) list_single_idle_plugin_player_pane_t2

0x8fe1,	// (0x0003a4ec) list_single_idle_plugin_player_pane_t3

0x8fef,	// (0x0003a4fa) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4f,	// (0x0004125a) list_single_idle_plugin_player_pane_t

0x8ffd,	// (0x0003a508) wait_bar_pane_cp15

0x9005,	// (0x0003a510) grid_ai_notification_pane

0x66f9,	// (0x00037c04) list_single_idle_plugin_notification_pane_g1

0xe833,	// (0x0003fd3e) cell_ai_notification_pane_ParamLimits

0xe833,	// (0x0003fd3e) cell_ai_notification_pane

0x901b,	// (0x0003a526) cell_ai_notification_pane_g1

0x9023,	// (0x0003a52e) cell_ai_notification_pane_t1

0xe840,	// (0x0003fd4b) tb_ext_find_button_pane

0xe848,	// (0x0003fd53) tb_ext_find_pane_g1

0xe850,	// (0x0003fd5b) tb_ext_find_pane_t1

0x3ea5,	// (0x000353b0) tb_ext_find_button_pane_g1

0x904f,	// (0x0003a55a) tb_ext_find_button_pane_g2

0x0001,

0xfd58,	// (0x00041263) tb_ext_find_button_pane_g

0xe660,	// (0x0003fb6b) main_idle_act4_pane_t1_ParamLimits

0xe676,	// (0x0003fb81) main_idle_act4_pane_t2_ParamLimits

0xfd16,	// (0x00041221) main_idle_act4_pane_t_ParamLimits

0xe6a8,	// (0x0003fbb3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6c0,	// (0x0003fbcb) sat_plugin_idle_act4_pane_ParamLimits

0xe6c0,	// (0x0003fbcb) sat_plugin_idle_act4_pane

0xe85e,	// (0x0003fd69) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe85e,	// (0x0003fd69) sat_plugin_idle_act4_pane_t1

0xe876,	// (0x0003fd81) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe876,	// (0x0003fd81) sat_plugin_idle_act4_pane_t2

0xe88e,	// (0x0003fd99) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe88e,	// (0x0003fd99) sat_plugin_idle_act4_pane_t3

0xe8a6,	// (0x0003fdb1) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8a6,	// (0x0003fdb1) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd5d,	// (0x00041268) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd5d,	// (0x00041268) sat_plugin_idle_act4_pane_t

0xf20b,	// (0x00040716) popup_battery_window_ParamLimits

0xf20b,	// (0x00040716) popup_battery_window

0x2fc8,	// (0x000344d3) bg_popup_sub_pane_cp25_ParamLimits

0x2fc8,	// (0x000344d3) bg_popup_sub_pane_cp25

0x90a4,	// (0x0003a5af) popup_battery_window_g1_ParamLimits

0x90a4,	// (0x0003a5af) popup_battery_window_g1

0x90b0,	// (0x0003a5bb) popup_battery_window_t1_ParamLimits

0x90b0,	// (0x0003a5bb) popup_battery_window_t1

0x90c2,	// (0x0003a5cd) popup_battery_window_t2_ParamLimits

0x90c2,	// (0x0003a5cd) popup_battery_window_t2

0x0001,

0xfd66,	// (0x00041271) popup_battery_window_t_ParamLimits

0xfd66,	// (0x00041271) popup_battery_window_t

0xd1f0,	// (0x0003e6fb) midp_canvas_pane_ParamLimits

0xd24d,	// (0x0003e758) midp_keypad_pane_ParamLimits

0xd24d,	// (0x0003e758) midp_keypad_pane

0x4801,	// (0x00035d0c) main_midp_pane_ParamLimits

0x6e3f,	// (0x0003834a) signal_pane_g2_cp_ParamLimits

0xe8be,	// (0x0003fdc9) aid_size_cell_midp_keypad_ParamLimits

0xe8be,	// (0x0003fdc9) aid_size_cell_midp_keypad

0xe8dc,	// (0x0003fde7) midp_keyp_game_grid_pane_ParamLimits

0xe8dc,	// (0x0003fde7) midp_keyp_game_grid_pane

0xe903,	// (0x0003fe0e) midp_keyp_rocker_pane_ParamLimits

0xe903,	// (0x0003fe0e) midp_keyp_rocker_pane

0xe954,	// (0x0003fe5f) midp_keyp_sk_left_pane_ParamLimits

0xe954,	// (0x0003fe5f) midp_keyp_sk_left_pane

0xe9a8,	// (0x0003feb3) midp_keyp_sk_right_pane_ParamLimits

0xe9a8,	// (0x0003feb3) midp_keyp_sk_right_pane

0xe0f6,	// (0x0003f601) bg_button_pane_cp03

0xe9fc,	// (0x0003ff07) midp_keyp_sk_left_pane_g1

0xe0f6,	// (0x0003f601) bg_button_pane_cp04

0xe9fc,	// (0x0003ff07) midp_keyp_sk_right_pane_g1

0x737e,	// (0x00038889) midp_keyp_rocker_pane_g1

0xea05,	// (0x0003ff10) keyp_game_cell_pane_ParamLimits

0xea05,	// (0x0003ff10) keyp_game_cell_pane

0xe0f6,	// (0x0003f601) bg_button_pane_cp02

0xea29,	// (0x0003ff34) keyp_game_cell_pane_g1

0xb38a,	// (0x0003c895) popup_fep_vkb2_window_ParamLimits

0xb38a,	// (0x0003c895) popup_fep_vkb2_window

0xcb8a,	// (0x0003e095) aid_size_cell_vkb2_ParamLimits

0xcb8a,	// (0x0003e095) aid_size_cell_vkb2

0xcbb6,	// (0x0003e0c1) popup_fep_vkb2_window_g1_ParamLimits

0xcbb6,	// (0x0003e0c1) popup_fep_vkb2_window_g1

0xcc06,	// (0x0003e111) vkb2_area_bottom_pane_ParamLimits

0xcc06,	// (0x0003e111) vkb2_area_bottom_pane

0xcc5a,	// (0x0003e165) vkb2_area_keypad_pane_ParamLimits

0xcc5a,	// (0x0003e165) vkb2_area_keypad_pane

0xcca2,	// (0x0003e1ad) vkb2_area_top_pane_ParamLimits

0xcca2,	// (0x0003e1ad) vkb2_area_top_pane

0xcd2e,	// (0x0003e239) vkb2_top_entry_pane_ParamLimits

0xcd2e,	// (0x0003e239) vkb2_top_entry_pane

0xcd5b,	// (0x0003e266) vkb2_top_grid_left_pane_ParamLimits

0xcd5b,	// (0x0003e266) vkb2_top_grid_left_pane

0xcd7c,	// (0x0003e287) vkb2_top_grid_right_pane_ParamLimits

0xcd7c,	// (0x0003e287) vkb2_top_grid_right_pane

0x226b,	// (0x00033776) vkb2_cell_keypad_pane_ParamLimits

0x226b,	// (0x00033776) vkb2_cell_keypad_pane

0xcdc4,	// (0x0003e2cf) vkb2_area_bottom_grid_pane_ParamLimits

0xcdc4,	// (0x0003e2cf) vkb2_area_bottom_grid_pane

0xcdee,	// (0x0003e2f9) vkb2_area_bottom_pane_g1_ParamLimits

0xcdee,	// (0x0003e2f9) vkb2_area_bottom_pane_g1

0xce14,	// (0x0003e31f) vkb2_area_bottom_pane_g2_ParamLimits

0xce14,	// (0x0003e31f) vkb2_area_bottom_pane_g2

0xce45,	// (0x0003e350) vkb2_area_bottom_pane_g3_ParamLimits

0xce45,	// (0x0003e350) vkb2_area_bottom_pane_g3

0x0002,

0xfd6b,	// (0x00041276) vkb2_area_bottom_pane_g_ParamLimits

0xfd6b,	// (0x00041276) vkb2_area_bottom_pane_g

0x2415,	// (0x00033920) vkb2_top_cell_left_pane_ParamLimits

0x2415,	// (0x00033920) vkb2_top_cell_left_pane

0xea32,	// (0x0003ff3d) vkb2_top_entry_pane_g1_ParamLimits

0xea32,	// (0x0003ff3d) vkb2_top_entry_pane_g1

0xea40,	// (0x0003ff4b) vkb2_top_entry_pane_t1_ParamLimits

0xea40,	// (0x0003ff4b) vkb2_top_entry_pane_t1

0x9273,	// (0x0003a77e) vkb2_top_entry_pane_t2_ParamLimits

0x9273,	// (0x0003a77e) vkb2_top_entry_pane_t2

0x92a5,	// (0x0003a7b0) vkb2_top_entry_pane_t3_ParamLimits

0x92a5,	// (0x0003a7b0) vkb2_top_entry_pane_t3

0x0002,

0xfd72,	// (0x0004127d) vkb2_top_entry_pane_t_ParamLimits

0xfd72,	// (0x0004127d) vkb2_top_entry_pane_t

0xceaf,	// (0x0003e3ba) vkb2_top_grid_right_pane_g1_ParamLimits

0xceaf,	// (0x0003e3ba) vkb2_top_grid_right_pane_g1

0x2478,	// (0x00033983) vkb2_top_grid_right_pane_g2_ParamLimits

0x2478,	// (0x00033983) vkb2_top_grid_right_pane_g2

0x2490,	// (0x0003399b) vkb2_top_grid_right_pane_g3_ParamLimits

0x2490,	// (0x0003399b) vkb2_top_grid_right_pane_g3

0xcec5,	// (0x0003e3d0) vkb2_top_grid_right_pane_g4_ParamLimits

0xcec5,	// (0x0003e3d0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd79,	// (0x00041284) vkb2_top_grid_right_pane_g_ParamLimits

0xfd79,	// (0x00041284) vkb2_top_grid_right_pane_g

0x24be,	// (0x000339c9) vkb2_top_cell_left_pane_g1

0x24d5,	// (0x000339e0) vkb2_cell_keypad_pane_g1_ParamLimits

0x24d5,	// (0x000339e0) vkb2_cell_keypad_pane_g1

0x92c9,	// (0x0003a7d4) vkb2_cell_keypad_pane_t1_ParamLimits

0x92c9,	// (0x0003a7d4) vkb2_cell_keypad_pane_t1

0x24e3,	// (0x000339ee) vkb2_cell_bottom_grid_pane_ParamLimits

0x24e3,	// (0x000339ee) vkb2_cell_bottom_grid_pane

0x251c,	// (0x00033a27) vkb2_cell_bottom_grid_pane_g1

0xe6f1,	// (0x0003fbfc) aid_call2_pane_cp02

0xe6f9,	// (0x0003fc04) aid_call_pane_cp02

0xe701,	// (0x0003fc0c) clock_digital_number_pane_cp10

0xe709,	// (0x0003fc14) clock_digital_number_pane_cp11

0xe711,	// (0x0003fc1c) clock_digital_number_pane_cp12

0xe719,	// (0x0003fc24) clock_digital_number_pane_cp13

0xe721,	// (0x0003fc2c) clock_digital_separator_pane_cp10

0x3ea5,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g1

0x3ea5,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g2

0xe729,	// (0x0003fc34) popup_clock_digital_analogue_window_cp2_g3

0x3ea5,	// (0x000353b0) popup_clock_digital_analogue_window_cp2_g4

0xe729,	// (0x0003fc34) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd2e,	// (0x00041239) popup_clock_digital_analogue_window_cp2_g

0xe731,	// (0x0003fc3c) popup_clock_digital_analogue_window_cp2_t1

0xe73f,	// (0x0003fc4a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd39,	// (0x00041244) popup_clock_digital_analogue_window_cp2_t

0x737e,	// (0x00038889) clock_digital_number_pane_cp10_g1

0x737e,	// (0x00038889) clock_digital_number_pane_cp10_g2

0x0001,

0xfb15,	// (0x00041020) clock_digital_number_pane_cp10_g

0x737e,	// (0x00038889) clock_digital_separator_pane_cp10_g1

0x737e,	// (0x00038889) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb15,	// (0x00041020) clock_digital_separator_pane_cp10_g

0x8cf0,	// (0x0003a1fb) uniindi_top_pane_g3

0x8d01,	// (0x0003a20c) uniindi_top_pane_g4

0x22f6,	// (0x00033801) vkb2_row_keypad_pane_ParamLimits

0x22f6,	// (0x00033801) vkb2_row_keypad_pane

0x253c,	// (0x00033a47) vkb2_cell_t_keypad_pane_ParamLimits

0x253c,	// (0x00033a47) vkb2_cell_t_keypad_pane

0x254c,	// (0x00033a57) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x254c,	// (0x00033a57) vkb2_cell_t_keypad_pane_cp08

0x255f,	// (0x00033a6a) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x255f,	// (0x00033a6a) vkb2_cell_t_keypad_pane_cp09

0x2573,	// (0x00033a7e) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2573,	// (0x00033a7e) vkb2_cell_t_keypad_pane_cp01

0x2584,	// (0x00033a8f) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2584,	// (0x00033a8f) vkb2_cell_t_keypad_pane_cp02

0x2595,	// (0x00033aa0) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2595,	// (0x00033aa0) vkb2_cell_t_keypad_pane_cp03

0x25a6,	// (0x00033ab1) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25a6,	// (0x00033ab1) vkb2_cell_t_keypad_pane_cp04

0x25b7,	// (0x00033ac2) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x25b7,	// (0x00033ac2) vkb2_cell_t_keypad_pane_cp05

0x25c8,	// (0x00033ad3) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x25c8,	// (0x00033ad3) vkb2_cell_t_keypad_pane_cp06

0x25d9,	// (0x00033ae4) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x25d9,	// (0x00033ae4) vkb2_cell_t_keypad_pane_cp07

0x25ea,	// (0x00033af5) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x25ea,	// (0x00033af5) vkb2_cell_t_keypad_pane_cp10

0x1c4e,	// (0x00033159) vkb2_cell_t_keypad_pane_g1

0x92e0,	// (0x0003a7eb) vkb2_cell_t_keypad_pane_t1

0xf146,	// (0x00040651) popup_grid_graphic2_window

0xea79,	// (0x0003ff84) aid_size_cell_graphic2_ParamLimits

0xea79,	// (0x0003ff84) aid_size_cell_graphic2

0xeab7,	// (0x0003ffc2) bg_popup_window_pane_cp21_ParamLimits

0xeab7,	// (0x0003ffc2) bg_popup_window_pane_cp21

0xeac5,	// (0x0003ffd0) graphic2_pages_pane_ParamLimits

0xeac5,	// (0x0003ffd0) graphic2_pages_pane

0xeb1b,	// (0x00040026) grid_graphic2_control_pane_ParamLimits

0xeb1b,	// (0x00040026) grid_graphic2_control_pane

0xeb63,	// (0x0004006e) grid_graphic2_pane_ParamLimits

0xeb63,	// (0x0004006e) grid_graphic2_pane

0xebea,	// (0x000400f5) cell_graphic2_pane

0xf146,	// (0x00040651) main_comp_mode_pane

0x853b,	// (0x00039a46) list_ai3_gene_pane_ParamLimits

0xe438,	// (0x0003f943) bg_popup_window_pane_cp19_ParamLimits

0x891d,	// (0x00039e28) bg_touch_area_indi_pane_ParamLimits

0x891d,	// (0x00039e28) bg_touch_area_indi_pane

0x8933,	// (0x00039e3e) bg_touch_area_indi_pane_cp01_ParamLimits

0x8933,	// (0x00039e3e) bg_touch_area_indi_pane_cp01

0x8949,	// (0x00039e54) bg_touch_area_indi_pane_cp02_ParamLimits

0x8949,	// (0x00039e54) bg_touch_area_indi_pane_cp02

0x895f,	// (0x00039e6a) bg_touch_area_indi_pane_cp03_ParamLimits

0x895f,	// (0x00039e6a) bg_touch_area_indi_pane_cp03

0x8979,	// (0x00039e84) popup_slider_window_g1_ParamLimits

0x89b6,	// (0x00039ec1) popup_slider_window_g2_ParamLimits

0x89d2,	// (0x00039edd) popup_slider_window_g3_ParamLimits

0xfcc3,	// (0x000411ce) popup_slider_window_g_ParamLimits

0x8a38,	// (0x00039f43) popup_slider_window_t1_ParamLimits

0x8aac,	// (0x00039fb7) small_volume_slider_vertical_pane_ParamLimits

0xebea,	// (0x000400f5) cell_graphic2_pane_ParamLimits

0xec45,	// (0x00040150) bg_button_pane_cp10_ParamLimits

0xec45,	// (0x00040150) bg_button_pane_cp10

0xec58,	// (0x00040163) bg_button_pane_cp11_ParamLimits

0xec58,	// (0x00040163) bg_button_pane_cp11

0xec6b,	// (0x00040176) graphic2_pages_pane_g1_ParamLimits

0xec6b,	// (0x00040176) graphic2_pages_pane_g1

0xec86,	// (0x00040191) graphic2_pages_pane_g2_ParamLimits

0xec86,	// (0x00040191) graphic2_pages_pane_g2

0x0001,

0xfd87,	// (0x00041292) graphic2_pages_pane_g_ParamLimits

0xfd87,	// (0x00041292) graphic2_pages_pane_g

0xec9e,	// (0x000401a9) graphic2_pages_pane_t1_ParamLimits

0xec9e,	// (0x000401a9) graphic2_pages_pane_t1

0xecb6,	// (0x000401c1) cell_graphic2_control_pane_ParamLimits

0xecb6,	// (0x000401c1) cell_graphic2_control_pane

0xece8,	// (0x000401f3) cell_graphic2_pane_g1_ParamLimits

0xece8,	// (0x000401f3) cell_graphic2_pane_g1

0xe0d4,	// (0x0003f5df) cell_graphic2_pane_g2_ParamLimits

0xe0d4,	// (0x0003f5df) cell_graphic2_pane_g2

0xe10a,	// (0x0003f615) cell_graphic2_pane_g3_ParamLimits

0xe10a,	// (0x0003f615) cell_graphic2_pane_g3

0xe0e1,	// (0x0003f5ec) cell_graphic2_pane_g4_ParamLimits

0xe0e1,	// (0x0003f5ec) cell_graphic2_pane_g4

0xecf5,	// (0x00040200) cell_graphic2_pane_g5_ParamLimits

0xecf5,	// (0x00040200) cell_graphic2_pane_g5

0x0004,

0xfd8c,	// (0x00041297) cell_graphic2_pane_g_ParamLimits

0xfd8c,	// (0x00041297) cell_graphic2_pane_g

0xed12,	// (0x0004021d) cell_graphic2_pane_t1_ParamLimits

0xed12,	// (0x0004021d) cell_graphic2_pane_t1

0x5a2e,	// (0x00036f39) grid_highlight_pane_cp11_ParamLimits

0x5a2e,	// (0x00036f39) grid_highlight_pane_cp11

0x2fc8,	// (0x000344d3) bg_button_pane_cp05

0xed5c,	// (0x00040267) cell_graphic2_control_pane_g1

0x737e,	// (0x00038889) bg_touch_area_indi_pane_g1

0x95b9,	// (0x0003aac4) aid_cmod_rocker_key_size

0x95c3,	// (0x0003aace) aid_cmode_itu_key_size

0x95cd,	// (0x0003aad8) main_cmode_video_pane

0x95d7,	// (0x0003aae2) main_comp_mode_itu_pane

0x95e3,	// (0x0003aaee) main_comp_mode_rocker_pane

0x95ef,	// (0x0003aafa) cell_cmode_rocker_pane_ParamLimits

0x95ef,	// (0x0003aafa) cell_cmode_rocker_pane

0x9601,	// (0x0003ab0c) cell_cmode_itu_pane_ParamLimits

0x9601,	// (0x0003ab0c) cell_cmode_itu_pane

0x35cc,	// (0x00034ad7) bg_button_pane_cp06_ParamLimits

0x35cc,	// (0x00034ad7) bg_button_pane_cp06

0x75fc,	// (0x00038b07) cell_cmode_rocker_pane_g1_ParamLimits

0x75fc,	// (0x00038b07) cell_cmode_rocker_pane_g1

0x8b50,	// (0x0003a05b) cell_cmode_rocker_pane_g2_ParamLimits

0x8b50,	// (0x0003a05b) cell_cmode_rocker_pane_g2

0x0001,

0xfd9c,	// (0x000412a7) cell_cmode_rocker_pane_g_ParamLimits

0xfd9c,	// (0x000412a7) cell_cmode_rocker_pane_g

0xe0f6,	// (0x0003f601) bg_button_pane_cp07

0x9616,	// (0x0003ab21) cell_cmode_itu_pane_g1

0x961f,	// (0x0003ab2a) cell_cmode_itu_pane_t1

0x962d,	// (0x0003ab38) cell_cmode_itu_pane_t2

0x0001,

0xfda1,	// (0x000412ac) cell_cmode_itu_pane_t

0x8d73,	// (0x0003a27e) aid_touch_ctrl_left

0x8d7b,	// (0x0003a286) aid_touch_ctrl_right

0xe0f6,	// (0x0003f601) compa_mode_pane

0xed80,	// (0x0004028b) aid_cmod_rocker_key_size_cp

0xed8a,	// (0x00040295) aid_cmode_itu_key_size_cp

0x964f,	// (0x0003ab5a) compa_mode_pane_g1

0x9657,	// (0x0003ab62) compa_mode_pane_g2

0x965f,	// (0x0003ab6a) compa_mode_pane_g3

0x0002,

0xfda6,	// (0x000412b1) compa_mode_pane_g

0xed94,	// (0x0004029f) main_comp_mode_itu_pane_cp

0xed9c,	// (0x000402a7) main_comp_mode_rocker_pane_cp

0xeda4,	// (0x000402af) cell_cmode_itu_pane_cp_ParamLimits

0xeda4,	// (0x000402af) cell_cmode_itu_pane_cp

0xedb9,	// (0x000402c4) cell_cmode_rocker_pane_cp_ParamLimits

0xedb9,	// (0x000402c4) cell_cmode_rocker_pane_cp

0x35cc,	// (0x00034ad7) bg_button_pane_cp06_cp_ParamLimits

0x35cc,	// (0x00034ad7) bg_button_pane_cp06_cp

0x75fc,	// (0x00038b07) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x75fc,	// (0x00038b07) cell_cmode_rocker_pane_g1_cp

0x737e,	// (0x00038889) cell_cmode_rocker_pane_g2_cp

0xe0f6,	// (0x0003f601) bg_button_pane_cp07_cp

0xedcb,	// (0x000402d6) cell_cmode_itu_pane_g1_cp

0xedd4,	// (0x000402df) cell_cmode_itu_pane_t1_cp

0xedd4,	// (0x000402df) cell_cmode_itu_pane_t2_cp

0xdad4,	// (0x0003efdf) settings_code_pane_cp2

0x2d3f,	// (0x0003424a) bg_popup_window_pane_cp3_ParamLimits

0x31c8,	// (0x000346d3) heading_pane_cp3_ParamLimits

0x31d7,	// (0x000346e2) listscroll_popup_graphic_pane_ParamLimits

0x19f7,	// (0x00032f02) fep_hwr_aid_pane_ParamLimits

0x1fbd,	// (0x000334c8) aid_touch_sctrl_top_ParamLimits

0x1fd8,	// (0x000334e3) sctrl_sk_top_pane_g1_ParamLimits

0x1c4e,	// (0x00033159) sctrl_sk_top_pane_g2_ParamLimits

0xfcdc,	// (0x000411e7) sctrl_sk_top_pane_g_ParamLimits

0x1fe5,	// (0x000334f0) sctrl_sk_top_pane_t1_ParamLimits

0x1fbd,	// (0x000334c8) aid_touch_sctrl_bottom_ParamLimits

0x1fe5,	// (0x000334f0) sctrl_sk_bottom_pane_t1_ParamLimits

0x8cbc,	// (0x0003a1c7) aid_area_touch_clock

0xccee,	// (0x0003e1f9) aid_vkb2_area_top_pane_cell_ParamLimits

0xccee,	// (0x0003e1f9) aid_vkb2_area_top_pane_cell

0xcd9d,	// (0x0003e2a8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd9d,	// (0x0003e2a8) aid_vkb2_area_bottom_pane_cell

0x922b,	// (0x0003a736) popup_char_count_window

0x96ac,	// (0x0003abb7) popup_char_count_window_g1

0x96b5,	// (0x0003abc0) popup_char_count_window_g2

0x96be,	// (0x0003abc9) popup_char_count_window_g3

0x0002,

0xfdad,	// (0x000412b8) popup_char_count_window_g

0x96c7,	// (0x0003abd2) popup_char_count_window_t1

0x208c,	// (0x00033597) popup_fep_char_preview_window_ParamLimits

0x208c,	// (0x00033597) popup_fep_char_preview_window

0xcd0e,	// (0x0003e219) vkb2_top_candi_pane_ParamLimits

0xcd0e,	// (0x0003e219) vkb2_top_candi_pane

0xede2,	// (0x000402ed) cell_vkb2_top_candi_pane_ParamLimits

0xede2,	// (0x000402ed) cell_vkb2_top_candi_pane

0x25ff,	// (0x00033b0a) bg_popup_fep_char_preview_window_ParamLimits

0x25ff,	// (0x00033b0a) bg_popup_fep_char_preview_window

0x260d,	// (0x00033b18) popup_fep_char_preview_window_t1_ParamLimits

0x260d,	// (0x00033b18) popup_fep_char_preview_window_t1

0x971f,	// (0x0003ac2a) bg_popup_fep_char_preview_window_g1

0x9727,	// (0x0003ac32) bg_popup_fep_char_preview_window_g2

0x972f,	// (0x0003ac3a) bg_popup_fep_char_preview_window_g3

0x9737,	// (0x0003ac42) bg_popup_fep_char_preview_window_g4

0x973f,	// (0x0003ac4a) bg_popup_fep_char_preview_window_g5

0x9747,	// (0x0003ac52) bg_popup_fep_char_preview_window_g6

0x974f,	// (0x0003ac5a) bg_popup_fep_char_preview_window_g7

0x9757,	// (0x0003ac62) bg_popup_fep_char_preview_window_g8

0x975f,	// (0x0003ac6a) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb4,	// (0x000412bf) bg_popup_fep_char_preview_window_g

0x1c4e,	// (0x00033159) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1c4e,	// (0x00033159) cell_vkb2_top_candi_pane_g1

0x1c5c,	// (0x00033167) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1c5c,	// (0x00033167) cell_vkb2_top_candi_pane_g2

0x8995,	// (0x00039ea0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8995,	// (0x00039ea0) cell_vkb2_top_candi_pane_g3

0x264f,	// (0x00033b5a) cell_vkb2_top_candi_pane_g4_ParamLimits

0x264f,	// (0x00033b5a) cell_vkb2_top_candi_pane_g4

0x79e6,	// (0x00038ef1) cell_vkb2_top_candi_pane_g5_ParamLimits

0x79e6,	// (0x00038ef1) cell_vkb2_top_candi_pane_g5

0x2670,	// (0x00033b7b) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2670,	// (0x00033b7b) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc9,	// (0x000412d4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc9,	// (0x000412d4) cell_vkb2_top_candi_pane_g

0x267e,	// (0x00033b89) cell_vkb2_top_candi_pane_t1

0x13b3,	// (0x000328be) aid_size_touch_slider_mark_ParamLimits

0x13b3,	// (0x000328be) aid_size_touch_slider_mark

0xeb01,	// (0x0004000c) grid_graphic2_catg_pane_ParamLimits

0xeb01,	// (0x0004000c) grid_graphic2_catg_pane

0xebbd,	// (0x000400c8) popup_grid_graphic2_window_t1_ParamLimits

0xebbd,	// (0x000400c8) popup_grid_graphic2_window_t1

0xebd3,	// (0x000400de) popup_grid_graphic2_window_t2_ParamLimits

0xebd3,	// (0x000400de) popup_grid_graphic2_window_t2

0x0001,

0xfd82,	// (0x0004128d) popup_grid_graphic2_window_t_ParamLimits

0xfd82,	// (0x0004128d) popup_grid_graphic2_window_t

0x2fc8,	// (0x000344d3) bg_button_pane_cp05_ParamLimits

0xed5c,	// (0x00040267) cell_graphic2_control_pane_g1_ParamLimits

0xee42,	// (0x0004034d) cell_graphic2_catg_pane_ParamLimits

0xee42,	// (0x0004034d) cell_graphic2_catg_pane

0xe0f6,	// (0x0003f601) bg_button_pane_cp12

0xee54,	// (0x0004035f) cell_graphic2_catg_pane_g1

0x8c88,	// (0x0003a193) cell_tb_ext_pane_t1_ParamLimits

0x2435,	// (0x00033940) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2435,	// (0x00033940) vkb2_top_cell_right_narrow_pane

0x244d,	// (0x00033958) vkb2_top_cell_right_wide_pane_ParamLimits

0x244d,	// (0x00033958) vkb2_top_cell_right_wide_pane

0x19e9,	// (0x00032ef4) bg_vkb2_func_pane_ParamLimits

0x19e9,	// (0x00032ef4) bg_vkb2_func_pane

0x24be,	// (0x000339c9) vkb2_top_cell_left_pane_g1_ParamLimits

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp03

0x251c,	// (0x00033a27) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4d33,	// (0x0003623e) bg_vkb2_func_pane_g1

0x4d3b,	// (0x00036246) bg_vkb2_func_pane_g2

0x4d4b,	// (0x00036256) bg_vkb2_func_pane_g3

0x4d43,	// (0x0003624e) bg_vkb2_func_pane_g4

0x4d53,	// (0x0003625e) bg_vkb2_func_pane_g5

0x4d5b,	// (0x00036266) bg_vkb2_func_pane_g6

0x4d63,	// (0x0003626e) bg_vkb2_func_pane_g7

0x4d6b,	// (0x00036276) bg_vkb2_func_pane_g8

0x4d2b,	// (0x00036236) bg_vkb2_func_pane_g9

0x0008,

0xfdd6,	// (0x000412e1) bg_vkb2_func_pane_g

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp01

0x24be,	// (0x000339c9) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x24be,	// (0x000339c9) vkb2_top_cell_right_wide_pane_g1

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x19e9,	// (0x00032ef4) bg_vkb2_fuc_pane_cp02

0x269d,	// (0x00033ba8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x269d,	// (0x00033ba8) vkb2_top_cell_right_narrow_pane_g1

0xe37a,	// (0x0003f885) aid_touch_area_decrease_ParamLimits

0xe37a,	// (0x0003f885) aid_touch_area_decrease

0xe3b4,	// (0x0003f8bf) aid_touch_area_increase_ParamLimits

0xe3b4,	// (0x0003f8bf) aid_touch_area_increase

0xe3dc,	// (0x0003f8e7) aid_touch_area_mute_ParamLimits

0xe3dc,	// (0x0003f8e7) aid_touch_area_mute

0xe404,	// (0x0003f90f) aid_touch_area_slider_ParamLimits

0xe404,	// (0x0003f90f) aid_touch_area_slider

0xe444,	// (0x0003f94f) popup_slider_window_g4_ParamLimits

0xe444,	// (0x0003f94f) popup_slider_window_g4

0xe46c,	// (0x0003f977) popup_slider_window_g5_ParamLimits

0xe46c,	// (0x0003f977) popup_slider_window_g5

0xe4a0,	// (0x0003f9ab) popup_slider_window_g6_ParamLimits

0xe4a0,	// (0x0003f9ab) popup_slider_window_g6

0x8a66,	// (0x00039f71) popup_slider_window_t2_ParamLimits

0x8a66,	// (0x00039f71) popup_slider_window_t2

0x0001,

0xfcd0,	// (0x000411db) popup_slider_window_t_ParamLimits

0xfcd0,	// (0x000411db) popup_slider_window_t

0xe4bc,	// (0x0003f9c7) slider_pane_ParamLimits

0xe4bc,	// (0x0003f9c7) slider_pane

0x9782,	// (0x0003ac8d) slider_pane_g1_ParamLimits

0x9782,	// (0x0003ac8d) slider_pane_g1

0x9796,	// (0x0003aca1) slider_pane_g2_ParamLimits

0x9796,	// (0x0003aca1) slider_pane_g2

0x97ac,	// (0x0003acb7) slider_pane_g3_ParamLimits

0x97ac,	// (0x0003acb7) slider_pane_g3

0x0003,

0xfde9,	// (0x000412f4) slider_pane_g_ParamLimits

0xfde9,	// (0x000412f4) slider_pane_g

0xc750,	// (0x0003dc5b) popup_tb_float_extension_window_ParamLimits

0xc750,	// (0x0003dc5b) popup_tb_float_extension_window

0x97d8,	// (0x0003ace3) aid_size_cell_tb_float_ext

0xe0f6,	// (0x0003f601) bg_popup_sub_window_cp28

0x97e4,	// (0x0003acef) grid_tb_float_ext_pane

0x97ee,	// (0x0003acf9) cell_tb_float_ext_pane_ParamLimits

0x97ee,	// (0x0003acf9) cell_tb_float_ext_pane

0x9808,	// (0x0003ad13) cell_tb_float_ext_pane_g1

0x9811,	// (0x0003ad1c) grid_highlight_pane_cp12

0xc92c,	// (0x0003de37) cell_last_hwr_side_pane_ParamLimits

0xc92c,	// (0x0003de37) cell_last_hwr_side_pane

0x737e,	// (0x00038889) cell_last_hwr_side_pane_g1

0x981a,	// (0x0003ad25) cell_last_hwr_side_pane_g2

0x0001,

0xfdf2,	// (0x000412fd) cell_last_hwr_side_pane_g

0xce7a,	// (0x0003e385) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce7a,	// (0x0003e385) vkb2_area_bottom_space_btn_pane

0x1c4e,	// (0x00033159) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x92e0,	// (0x0003a7eb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x267e,	// (0x00033b89) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26bd,	// (0x00033bc8) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26bd,	// (0x00033bc8) vkb2_area_bottom_space_btn_pane_g1

0x26f7,	// (0x00033c02) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x26f7,	// (0x00033c02) vkb2_area_bottom_space_btn_pane_g2

0x272d,	// (0x00033c38) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x272d,	// (0x00033c38) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf7,	// (0x00041302) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf7,	// (0x00041302) vkb2_area_bottom_space_btn_pane_g

0x1aac,	// (0x00032fb7) cel_fep_hwr_func_pane_ParamLimits

0x1aac,	// (0x00032fb7) cel_fep_hwr_func_pane

0xc901,	// (0x0003de0c) cell_hwr_side_button_pane_ParamLimits

0xc901,	// (0x0003de0c) cell_hwr_side_button_pane

0x8cbc,	// (0x0003a1c7) aid_area_touch_clock_ParamLimits

0x2fc8,	// (0x000344d3) bg_uniindi_top_pane_ParamLimits

0x8cce,	// (0x0003a1d9) uniindi_top_pane_g1_ParamLimits

0x8ce4,	// (0x0003a1ef) uniindi_top_pane_g2_ParamLimits

0x8cf0,	// (0x0003a1fb) uniindi_top_pane_g3_ParamLimits

0x8d01,	// (0x0003a20c) uniindi_top_pane_g4_ParamLimits

0xfd08,	// (0x00041213) uniindi_top_pane_g_ParamLimits

0x8d0e,	// (0x0003a219) uniindi_top_pane_t1_ParamLimits

0x2fc8,	// (0x000344d3) bg_vkb2_func_pane_cp01_ParamLimits

0x2fc8,	// (0x000344d3) bg_vkb2_func_pane_cp01

0x9823,	// (0x0003ad2e) cel_fep_hwr_func_pane_g1_ParamLimits

0x9823,	// (0x0003ad2e) cel_fep_hwr_func_pane_g1

0x2fc8,	// (0x000344d3) bg_vkb2_func_pane_cp02_ParamLimits

0x2fc8,	// (0x000344d3) bg_vkb2_func_pane_cp02

0x9823,	// (0x0003ad2e) cell_hwr_side_button_pane_g1_ParamLimits

0x9823,	// (0x0003ad2e) cell_hwr_side_button_pane_g1

0x4bac,	// (0x000360b7) status_pane_g4_ParamLimits

0x4bac,	// (0x000360b7) status_pane_g4

0x4bc6,	// (0x000360d1) status_pane_t1

0x70c3,	// (0x000385ce) form2_midp_gauge_slider_cont_pane

0x70cb,	// (0x000385d6) form2_midp_gauge_slider_pane_t1_ParamLimits

0xddac,	// (0x0003f2b7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xddbe,	// (0x0003f2c9) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac8,	// (0x00040fd3) form2_midp_gauge_slider_pane_t_ParamLimits

0x7101,	// (0x0003860c) form2_midp_slider_pane_ParamLimits

0x2054,	// (0x0003355f) aid_size_cell_func_vkb2_ParamLimits

0x2054,	// (0x0003355f) aid_size_cell_func_vkb2

0x97c4,	// (0x0003accf) slider_pane_g4_ParamLimits

0x97c4,	// (0x0003accf) slider_pane_g4

0xcee3,	// (0x0003e3ee) form2_midp_gauge_slider_pane_t2_cp01

0xcef1,	// (0x0003e3fc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcef1,	// (0x0003e3fc) form2_midp_gauge_slider_pane_t3_cp01

0x27a2,	// (0x00033cad) form2_midp_slider_pane_cp01

0xe0f6,	// (0x0003f601) navi_smil_pane

0x985c,	// (0x0003ad67) navi_smil_pane_g1

0x9864,	// (0x0003ad6f) navi_smil_pane_t1

0x9831,	// (0x0003ad3c) form2_midp_slider_pane_g1

0x983a,	// (0x0003ad45) form2_midp_slider_pane_g2

0x9842,	// (0x0003ad4d) form2_midp_slider_pane_g3

0x9831,	// (0x0003ad3c) form2_midp_slider_pane_g4

0xee5d,	// (0x00040368) form2_midp_slider_pane_g5

0x0004,

0xfe00,	// (0x0004130b) form2_midp_slider_pane_g

0x2767,	// (0x00033c72) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2767,	// (0x00033c72) vkb2_area_bottom_space_btn_pane_g4

0xd4b8,	// (0x0003e9c3) lc0_navi_pane_ParamLimits

0xd4b8,	// (0x0003e9c3) lc0_navi_pane

0xd522,	// (0x0003ea2d) lc0_stat_indi_pane_ParamLimits

0xd522,	// (0x0003ea2d) lc0_stat_indi_pane

0xd537,	// (0x0003ea42) ls0_title_pane_ParamLimits

0xd537,	// (0x0003ea42) ls0_title_pane

0x35cc,	// (0x00034ad7) bg_popup_sub_pane_cp14_ParamLimits

0x8ca3,	// (0x0003a1ae) list_uniindi_pane_ParamLimits

0x8caf,	// (0x0003a1ba) uniindi_top_pane_ParamLimits

0x8d4b,	// (0x0003a256) list_single_uniindi_pane_g1_ParamLimits

0x8d5e,	// (0x0003a269) list_single_uniindi_pane_t1_ParamLimits

0xcf0e,	// (0x0003e419) lc0_stat_clock_pane_ParamLimits

0xcf0e,	// (0x0003e419) lc0_stat_clock_pane

0xee68,	// (0x00040373) lc0_stat_indi_pane_g1_ParamLimits

0xee68,	// (0x00040373) lc0_stat_indi_pane_g1

0xee75,	// (0x00040380) lc0_stat_indi_pane_g2_ParamLimits

0xee75,	// (0x00040380) lc0_stat_indi_pane_g2

0x0001,

0xfe0b,	// (0x00041316) lc0_stat_indi_pane_g_ParamLimits

0xfe0b,	// (0x00041316) lc0_stat_indi_pane_g

0xcf1b,	// (0x0003e426) lc0_uni_indicator_pane_ParamLimits

0xcf1b,	// (0x0003e426) lc0_uni_indicator_pane

0xee82,	// (0x0004038d) ls0_title_pane_g1_ParamLimits

0xee82,	// (0x0004038d) ls0_title_pane_g1

0xee96,	// (0x000403a1) ls0_title_pane_t1_ParamLimits

0xee96,	// (0x000403a1) ls0_title_pane_t1

0xcf28,	// (0x0003e433) lc0_uni_indicator_pane_g1_ParamLimits

0xcf28,	// (0x0003e433) lc0_uni_indicator_pane_g1

0x98d6,	// (0x0003ade1) lc0_stat_clock_pane_t1

0xf146,	// (0x00040651) main_ai5_pane

0x98e4,	// (0x0003adef) ai5_sk_pane_ParamLimits

0x98e4,	// (0x0003adef) ai5_sk_pane

0xeec4,	// (0x000403cf) cell_ai5_widget_pane_ParamLimits

0xeec4,	// (0x000403cf) cell_ai5_widget_pane

0x99ba,	// (0x0003aec5) aid_size_cell_widget_grid

0x99d0,	// (0x0003aedb) bg_ai5_widget_pane_ParamLimits

0x99d0,	// (0x0003aedb) bg_ai5_widget_pane

0x9a4c,	// (0x0003af57) cell_ai5_widget_pane_g2

0x9a60,	// (0x0003af6b) cell_ai5_widget_pane_g3

0x9a7a,	// (0x0003af85) cell_ai5_widget_pane_g4

0x9a8a,	// (0x0003af95) cell_ai5_widget_pane_g5

0x9a9a,	// (0x0003afa5) cell_ai5_widget_pane_g6

0x9aa6,	// (0x0003afb1) cell_ai5_widget_pane_g7

0x9b12,	// (0x0003b01d) cell_ai5_widget_pane_t1_ParamLimits

0x9b12,	// (0x0003b01d) cell_ai5_widget_pane_t1

0x9b2f,	// (0x0003b03a) cell_ai5_widget_pane_t2_ParamLimits

0x9b2f,	// (0x0003b03a) cell_ai5_widget_pane_t2

0x9b47,	// (0x0003b052) cell_ai5_widget_pane_t3_ParamLimits

0x9b47,	// (0x0003b052) cell_ai5_widget_pane_t3

0x9b5f,	// (0x0003b06a) cell_ai5_widget_pane_t4_ParamLimits

0x9b5f,	// (0x0003b06a) cell_ai5_widget_pane_t4

0x9b85,	// (0x0003b090) cell_ai5_widget_pane_t5_ParamLimits

0x9b85,	// (0x0003b090) cell_ai5_widget_pane_t5

0x9ba4,	// (0x0003b0af) cell_ai5_widget_pane_t6_ParamLimits

0x9ba4,	// (0x0003b0af) cell_ai5_widget_pane_t6

0x9bb6,	// (0x0003b0c1) cell_ai5_widget_pane_t7_ParamLimits

0x9bb6,	// (0x0003b0c1) cell_ai5_widget_pane_t7

0x9bd5,	// (0x0003b0e0) cell_ai5_widget_pane_t8_ParamLimits

0x9bd5,	// (0x0003b0e0) cell_ai5_widget_pane_t8

0x000b,

0xfe2b,	// (0x00041336) cell_ai5_widget_pane_t_ParamLimits

0xfe2b,	// (0x00041336) cell_ai5_widget_pane_t

0x9c59,	// (0x0003b164) grid_ai5_widget_pane

0x35cc,	// (0x00034ad7) highlight_cell_ai5_widget_pane_ParamLimits

0x35cc,	// (0x00034ad7) highlight_cell_ai5_widget_pane

0xef30,	// (0x0004043b) ai5_sk_left_pane

0xef3a,	// (0x00040445) ai5_sk_middle_pane

0xef44,	// (0x0004044f) ai5_sk_right_pane

0x9c8e,	// (0x0003b199) bg_ai5_widget_pane_g1_ParamLimits

0x9c8e,	// (0x0003b199) bg_ai5_widget_pane_g1

0x9c9a,	// (0x0003b1a5) bg_ai5_widget_pane_g2_ParamLimits

0x9c9a,	// (0x0003b1a5) bg_ai5_widget_pane_g2

0x9ca6,	// (0x0003b1b1) bg_ai5_widget_pane_g3_ParamLimits

0x9ca6,	// (0x0003b1b1) bg_ai5_widget_pane_g3

0x9cb2,	// (0x0003b1bd) bg_ai5_widget_pane_g4_ParamLimits

0x9cb2,	// (0x0003b1bd) bg_ai5_widget_pane_g4

0x9cbe,	// (0x0003b1c9) bg_ai5_widget_pane_g5_ParamLimits

0x9cbe,	// (0x0003b1c9) bg_ai5_widget_pane_g5

0x9cca,	// (0x0003b1d5) bg_ai5_widget_pane_g6_ParamLimits

0x9cca,	// (0x0003b1d5) bg_ai5_widget_pane_g6

0x9cd6,	// (0x0003b1e1) bg_ai5_widget_pane_g7_ParamLimits

0x9cd6,	// (0x0003b1e1) bg_ai5_widget_pane_g7

0x9ce2,	// (0x0003b1ed) bg_ai5_widget_pane_g8_ParamLimits

0x9ce2,	// (0x0003b1ed) bg_ai5_widget_pane_g8

0x9cee,	// (0x0003b1f9) bg_ai5_widget_pane_g9_ParamLimits

0x9cee,	// (0x0003b1f9) bg_ai5_widget_pane_g9

0x0008,

0xfe44,	// (0x0004134f) bg_ai5_widget_pane_g_ParamLimits

0xfe44,	// (0x0004134f) bg_ai5_widget_pane_g

0x9d20,	// (0x0003b22b) cell_shortcut_ai5_widget_pane_ParamLimits

0x9d20,	// (0x0003b22b) cell_shortcut_ai5_widget_pane

0x44dd,	// (0x000359e8) bg_cell_shortcut_ai5_widget_pane

0x9d31,	// (0x0003b23c) cell_grid_ai5_widget_pane_g1

0x44dd,	// (0x000359e8) highlight_cell_shortcut_ai5_widget_pane

0x4d33,	// (0x0003623e) ai5_sk_left_pane_g1

0x9d3a,	// (0x0003b245) ai5_sk_left_pane_g2

0x9d42,	// (0x0003b24d) ai5_sk_left_pane_g3

0x9d4a,	// (0x0003b255) ai5_sk_left_pane_g4

0x0003,

0xfe57,	// (0x00041362) ai5_sk_left_pane_g

0x9d52,	// (0x0003b25d) ai5_sk_left_pane_t1

0x4d3b,	// (0x00036246) ai5_sk_right_pane_g1

0x9d60,	// (0x0003b26b) ai5_sk_right_pane_g2

0x9d68,	// (0x0003b273) ai5_sk_right_pane_g3

0x9d70,	// (0x0003b27b) ai5_sk_right_pane_g4

0x0003,

0xfe60,	// (0x0004136b) ai5_sk_right_pane_g

0x9d78,	// (0x0003b283) ai5_sk_right_pane_t1

0x4d3b,	// (0x00036246) ai5_sk_middle_pane_g1

0x4d33,	// (0x0003623e) ai5_sk_middle_pane_g2

0x4d53,	// (0x0003625e) ai5_sk_middle_pane_g3

0x9d68,	// (0x0003b273) ai5_sk_middle_pane_g4

0x9d42,	// (0x0003b24d) ai5_sk_middle_pane_g5

0x9d86,	// (0x0003b291) ai5_sk_middle_pane_g6

0xef4e,	// (0x00040459) ai5_sk_middle_pane_g7

0x0006,

0xfe69,	// (0x00041374) ai5_sk_middle_pane_g

0xd3a4,	// (0x0003e8af) aid_touch_area_size_lc0_ParamLimits

0xd3a4,	// (0x0003e8af) aid_touch_area_size_lc0

0x1c7d,	// (0x00033188) cell_hwr_candidate_pane_t1_ParamLimits

0x487d,	// (0x00035d88) aid_touch_navi_pane

0xd630,	// (0x0003eb3b) status_dt_navi_pane_ParamLimits

0xd630,	// (0x0003eb3b) status_dt_navi_pane

0xd648,	// (0x0003eb53) status_dt_sta_pane_ParamLimits

0xd648,	// (0x0003eb53) status_dt_sta_pane

0xef56,	// (0x00040461) dt_sta_controll_pane

0xef63,	// (0x0004046e) dt_sta_indi_pane

0xef70,	// (0x0004047b) dt_sta_title_pane

0x2fc8,	// (0x000344d3) bg_dt_sta_indi_pane_ParamLimits

0x2fc8,	// (0x000344d3) bg_dt_sta_indi_pane

0xef82,	// (0x0004048d) dt_sta_battery_pane

0xef8a,	// (0x00040495) dt_sta_indi_pane_g1

0x9dd8,	// (0x0003b2e3) dt_sta_indi_pane_g2

0x9de1,	// (0x0003b2ec) dt_sta_indi_pane_g3

0x0002,

0xfe78,	// (0x00041383) dt_sta_indi_pane_g

0x9dea,	// (0x0003b2f5) dt_sta_signal_pane

0x35cc,	// (0x00034ad7) bg_dt_sta_title_pane_ParamLimits

0x35cc,	// (0x00034ad7) bg_dt_sta_title_pane

0x9df3,	// (0x0003b2fe) dt_sta_title_pane_g1

0x9dfb,	// (0x0003b306) dt_sta_title_pane_t1_ParamLimits

0x9dfb,	// (0x0003b306) dt_sta_title_pane_t1

0xe0f6,	// (0x0003f601) bg_dt_sta_control_pane

0xef93,	// (0x0004049e) dt_sta_controll_pane_g1

0x9e19,	// (0x0003b324) bg_dt_sta_title_pane_g1

0x9e22,	// (0x0003b32d) bg_dt_sta_title_pane_g2

0x9e2b,	// (0x0003b336) bg_dt_sta_title_pane_g3

0x0002,

0xfe7f,	// (0x0004138a) bg_dt_sta_title_pane_g

0x737e,	// (0x00038889) bg_dt_sta_indi_pane_g1

0x9e34,	// (0x0003b33f) dt_sta_signal_pane_g1

0x9e3c,	// (0x0003b347) dt_sta_signal_pane_g2

0x0001,

0xfe86,	// (0x00041391) dt_sta_signal_pane_g

0x9e44,	// (0x0003b34f) dt_sta_battery_pane_g1

0x9e4d,	// (0x0003b358) dt_sta_battery_pane_t1

0x737e,	// (0x00038889) bg_dt_sta_control_pane_g1

0x3fd0,	// (0x000354db) fep_china_uni_eep_pane

0x3fd8,	// (0x000354e3) fep_china_uni_entry_pane_ParamLimits

0x3fe8,	// (0x000354f3) popup_fep_china_uni_window_g1_ParamLimits

0x3ff8,	// (0x00035503) popup_fep_china_uni_window_g2_ParamLimits

0x3ff8,	// (0x00035503) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x00040c03) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x00040c03) popup_fep_china_uni_window_g

0x9e5c,	// (0x0003b367) fep_china_uni_eep_pane_g1

0x9e64,	// (0x0003b36f) fep_china_uni_eep_pane_t1

0x9853,	// (0x0003ad5e) aid_touch_area_size_smil_player

0x49d3,	// (0x00035ede) lc0_clock_pane

0x4bba,	// (0x000360c5) status_pane_g5_ParamLimits

0x4bba,	// (0x000360c5) status_pane_g5

0xc2d2,	// (0x0003d7dd) popup_keymap_window

0x4b78,	// (0x00036083) status_icon_pane

0x9a60,	// (0x0003af6b) cell_ai5_widget_pane_g3_ParamLimits

0x9a7a,	// (0x0003af85) cell_ai5_widget_pane_g4_ParamLimits

0x9a8a,	// (0x0003af95) cell_ai5_widget_pane_g5_ParamLimits

0x9ab2,	// (0x0003afbd) cell_ai5_widget_pane_g8_ParamLimits

0x9ab2,	// (0x0003afbd) cell_ai5_widget_pane_g8

0x9ac6,	// (0x0003afd1) cell_ai5_widget_pane_g9_ParamLimits

0x9ac6,	// (0x0003afd1) cell_ai5_widget_pane_g9

0x9ada,	// (0x0003afe5) cell_ai5_widget_pane_g10_ParamLimits

0x9ada,	// (0x0003afe5) cell_ai5_widget_pane_g10

0x9e73,	// (0x0003b37e) status_icon_pane_g1

0xe0f6,	// (0x0003f601) bg_popup_sub_pane_cp13

0x9e7b,	// (0x0003b386) popup_keymap_window_t1

0xd33a,	// (0x0003e845) control_pane_g6_ParamLimits

0xd33a,	// (0x0003e845) control_pane_g6

0xd347,	// (0x0003e852) control_pane_g7_ParamLimits

0xd347,	// (0x0003e852) control_pane_g7

0xd354,	// (0x0003e85f) control_pane_g8_ParamLimits

0xd354,	// (0x0003e85f) control_pane_g8

0xef56,	// (0x00040461) dt_sta_controll_pane_ParamLimits

0xef63,	// (0x0004046e) dt_sta_indi_pane_ParamLimits

0xef70,	// (0x0004047b) dt_sta_title_pane_ParamLimits

0x3504,	// (0x00034a0f) aid_size_touch_scroll_bar_cale

0xf21f,	// (0x0004072a) popup_discreet_window_ParamLimits

0xf21f,	// (0x0004072a) popup_discreet_window

0xb3d0,	// (0x0003c8db) popup_sk_window

0x53ba,	// (0x000368c5) bg_popup_sub_pane_cp28_ParamLimits

0x53ba,	// (0x000368c5) bg_popup_sub_pane_cp28

0x9e89,	// (0x0003b394) popup_discreet_window_g1_ParamLimits

0x9e89,	// (0x0003b394) popup_discreet_window_g1

0x9ea9,	// (0x0003b3b4) popup_discreet_window_t1_ParamLimits

0x9ea9,	// (0x0003b3b4) popup_discreet_window_t1

0x9ec7,	// (0x0003b3d2) popup_discreet_window_t2_ParamLimits

0x9ec7,	// (0x0003b3d2) popup_discreet_window_t2

0x0002,

0xfe8b,	// (0x00041396) popup_discreet_window_t_ParamLimits

0xfe8b,	// (0x00041396) popup_discreet_window_t

0x27d9,	// (0x00033ce4) popup_sk_window_g1

0x27e3,	// (0x00033cee) popup_sk_window_g2

0x0001,

0xfe92,	// (0x0004139d) popup_sk_window_g

0x27eb,	// (0x00033cf6) popup_sk_window_t1

0x27f9,	// (0x00033d04) popup_sk_window_t1_copy1

0x9a4c,	// (0x0003af57) cell_ai5_widget_pane_g2_ParamLimits

0x9be7,	// (0x0003b0f2) cell_ai5_widget_pane_t9_ParamLimits

0x9be7,	// (0x0003b0f2) cell_ai5_widget_pane_t9

0xe0f6,	// (0x0003f601) main_fep_fshwr2_pane

0xcf4f,	// (0x0003e45a) aid_fshwr2_btn_pane

0xcf5f,	// (0x0003e46a) aid_fshwr2_syb_pane

0xcf73,	// (0x0003e47e) aid_fshwr2_txt_pane

0xcf83,	// (0x0003e48e) fshwr2_func_candi_pane

0xcfa3,	// (0x0003e4ae) fshwr2_hwr_syb_pane

0xcfc5,	// (0x0003e4d0) fshwr2_icf_pane

0xf146,	// (0x00040651) fshwr2_icf_bg_pane

0xcff5,	// (0x0003e500) fshwr2_icf_pane_t1_ParamLimits

0xcff5,	// (0x0003e500) fshwr2_icf_pane_t1

0x3ea5,	// (0x000353b0) fshwr2_func_candi_pane_g1

0xef9c,	// (0x000404a7) fshwr2_func_candi_row_pane_ParamLimits

0xef9c,	// (0x000404a7) fshwr2_func_candi_row_pane

0xd00e,	// (0x0003e519) cell_fshwr2_syb_pane_ParamLimits

0xd00e,	// (0x0003e519) cell_fshwr2_syb_pane

0x28e2,	// (0x00033ded) fshwr2_hwr_syb_pane_g1_ParamLimits

0x28e2,	// (0x00033ded) fshwr2_hwr_syb_pane_g1

0xf146,	// (0x00040651) bg_popup_call_pane_cp01

0xd034,	// (0x0003e53f) fshwr2_func_candi_cell_pane_ParamLimits

0xd034,	// (0x0003e53f) fshwr2_func_candi_cell_pane

0x519b,	// (0x000366a6) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x519b,	// (0x000366a6) fshwr2_func_candi_cell_bg_pane

0xd07f,	// (0x0003e58a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd07f,	// (0x0003e58a) fshwr2_func_candi_cell_pane_g1

0xd0b6,	// (0x0003e5c1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd0b6,	// (0x0003e5c1) fshwr2_func_candi_cell_pane_t1

0xf146,	// (0x00040651) bg_button_pane_cp08

0x4801,	// (0x00035d0c) cell_fshwr2_syb_bg_pane

0xd0d1,	// (0x0003e5dc) cell_fshwr2_syb_bg_pane_g1

0xd0e4,	// (0x0003e5ef) cell_fshwr2_syb_bg_pane_t1

0x35cc,	// (0x00034ad7) main_tmo_pane

0xd906,	// (0x0003ee11) uni_indicator_pane_g1_ParamLimits

0xd91c,	// (0x0003ee27) uni_indicator_pane_g2_ParamLimits

0xd932,	// (0x0003ee3d) uni_indicator_pane_g3_ParamLimits

0x5f14,	// (0x0003741f) uni_indicator_pane_g4_ParamLimits

0x5f14,	// (0x0003741f) uni_indicator_pane_g4

0x5f28,	// (0x00037433) uni_indicator_pane_g5_ParamLimits

0x5f28,	// (0x00037433) uni_indicator_pane_g5

0x5f28,	// (0x00037433) uni_indicator_pane_g6_ParamLimits

0x5f28,	// (0x00037433) uni_indicator_pane_g6

0xf8f7,	// (0x00040e02) uni_indicator_pane_g_ParamLimits

0xe356,	// (0x0003f861) popup_tmo_note_window_ParamLimits

0xe356,	// (0x0003f861) popup_tmo_note_window

0x2036,	// (0x00033541) fshwr2_bg_pane

0xd0a7,	// (0x0003e5b2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd0a7,	// (0x0003e5b2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe97,	// (0x000413a2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe97,	// (0x000413a2) fshwr2_func_candi_cell_pane_g

0x1c36,	// (0x00033141) bg_popup_window_pane_cp01

0x29a3,	// (0x00033eae) bg_popup_window_pane_g1_cp01

0x9f40,	// (0x0003b44b) bg_popup_window_pane_cp22_ParamLimits

0x9f40,	// (0x0003b44b) bg_popup_window_pane_cp22

0x9f4e,	// (0x0003b459) listscroll_tmo_link_pane_ParamLimits

0x9f4e,	// (0x0003b459) listscroll_tmo_link_pane

0x9f8e,	// (0x0003b499) popup_tmo_note_window_g1_ParamLimits

0x9f8e,	// (0x0003b499) popup_tmo_note_window_g1

0x9f9b,	// (0x0003b4a6) tmo_note_info_pane_ParamLimits

0x9f9b,	// (0x0003b4a6) tmo_note_info_pane

0xefbf,	// (0x000404ca) list_tmo_note_info_pane_g1_ParamLimits

0xefbf,	// (0x000404ca) list_tmo_note_info_pane_g1

0x9fcc,	// (0x0003b4d7) list_tmo_note_info_pane_g2_ParamLimits

0x9fcc,	// (0x0003b4d7) list_tmo_note_info_pane_g2

0x0001,

0xfe9c,	// (0x000413a7) list_tmo_note_info_pane_g_ParamLimits

0xfe9c,	// (0x000413a7) list_tmo_note_info_pane_g

0x9fe8,	// (0x0003b4f3) list_tmo_note_info_text_pane_ParamLimits

0x9fe8,	// (0x0003b4f3) list_tmo_note_info_text_pane

0xa069,	// (0x0003b574) list_tmo_link_pane

0xa076,	// (0x0003b581) scroll_pane_cp20

0xa083,	// (0x0003b58e) list_single_tmo_link_pane_ParamLimits

0xa083,	// (0x0003b58e) list_single_tmo_link_pane

0xa093,	// (0x0003b59e) list_single_tmo_link_pane_t1

0xa0a1,	// (0x0003b5ac) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0a1,	// (0x0003b5ac) list_tmo_note_info_text_pane_t1

0xbdba,	// (0x0003d2c5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbdba,	// (0x0003d2c5) aid_size_touch_scroll_bar_cp01

0xbcd7,	// (0x0003d1e2) aid_size_touch_slider_marker

0xb3c0,	// (0x0003c8cb) popup_settings_window_ParamLimits

0xb3c0,	// (0x0003c8cb) popup_settings_window

0x09c9,	// (0x00031ed4) popup_candi_list_indi_window

0x487d,	// (0x00035d88) aid_touch_navi_pane_ParamLimits

0x1f91,	// (0x0003349c) rs_clock_indi_pane

0x1f9a,	// (0x000334a5) sctrl_sk_bottom_pane_ParamLimits

0x1fab,	// (0x000334b6) sctrl_sk_top_pane_ParamLimits

0x20a6,	// (0x000335b1) popup_fep_tooltip_window

0x99ba,	// (0x0003aec5) aid_size_cell_widget_grid_ParamLimits

0x9a37,	// (0x0003af42) cell_ai5_widget_pane_g1_ParamLimits

0x9a37,	// (0x0003af42) cell_ai5_widget_pane_g1

0x9a9a,	// (0x0003afa5) cell_ai5_widget_pane_g6_ParamLimits

0x9aa6,	// (0x0003afb1) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe10,	// (0x0004131b) cell_ai5_widget_pane_g_ParamLimits

0xfe10,	// (0x0004131b) cell_ai5_widget_pane_g

0x9c16,	// (0x0003b121) cell_ai5_widget_pane_t10_ParamLimits

0x9c16,	// (0x0003b121) cell_ai5_widget_pane_t10

0x9c59,	// (0x0003b164) grid_ai5_widget_pane_ParamLimits

0x9cfa,	// (0x0003b205) cell_contacts_ai5_widget_pane_ParamLimits

0x9cfa,	// (0x0003b205) cell_contacts_ai5_widget_pane

0x9edc,	// (0x0003b3e7) popup_discreet_window_t3_ParamLimits

0x9edc,	// (0x0003b3e7) popup_discreet_window_t3

0xcfe1,	// (0x0003e4ec) popup_fshwr2_char_preview_window_ParamLimits

0xcfe1,	// (0x0003e4ec) popup_fshwr2_char_preview_window

0xefd6,	// (0x000404e1) tmo_note_info_pane_t1

0xefeb,	// (0x000404f6) tmo_note_info_pane_t2

0xf002,	// (0x0004050d) tmo_note_info_pane_t3

0xa045,	// (0x0003b550) tmo_note_info_pane_t4

0xa057,	// (0x0003b562) tmo_note_info_pane_t5

0x0004,

0xfea1,	// (0x000413ac) tmo_note_info_pane_t

0xa069,	// (0x0003b574) list_tmo_link_pane_ParamLimits

0xa076,	// (0x0003b581) scroll_pane_cp20_ParamLimits

0xf146,	// (0x00040651) bg_popup_fep_char_preview_window_cp01

0xf017,	// (0x00040522) popup_fshwr2_char_preview_window_t1

0xa0c8,	// (0x0003b5d3) popup_candi_list_indi_window_g1

0xa0d1,	// (0x0003b5dc) bg_cell_contacts_ai5_widget_pane

0xa0dd,	// (0x0003b5e8) cell_contacts_ai5_widget_pane_g1

0x7a5e,	// (0x00038f69) cell_contacts_ai5_widget_pane_g2

0xa0f2,	// (0x0003b5fd) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeac,	// (0x000413b7) cell_contacts_ai5_widget_pane_g

0xa0fe,	// (0x0003b609) cell_contacts_ai5_widget_pane_t1

0x35cc,	// (0x00034ad7) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa175,	// (0x0003b680) settings_container_pane

0x44dd,	// (0x000359e8) listscroll_set_pane_copy1

0x6a68,	// (0x00037f73) scroll_pane_cp121_copy1

0x5157,	// (0x00036662) set_content_pane_copy1

0xa181,	// (0x0003b68c) aid_height_set_list_copy1_ParamLimits

0xa181,	// (0x0003b68c) aid_height_set_list_copy1

0x6120,	// (0x0003762b) aid_size_parent_copy1_ParamLimits

0x6120,	// (0x0003762b) aid_size_parent_copy1

0xa18d,	// (0x0003b698) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa18d,	// (0x0003b698) button_value_adjust_pane_cp6_copy1

0x4801,	// (0x00035d0c) list_highlight_pane_cp2_copy1_ParamLimits

0x4801,	// (0x00035d0c) list_highlight_pane_cp2_copy1

0xa1a1,	// (0x0003b6ac) list_set_pane_copy1_ParamLimits

0xa1a1,	// (0x0003b6ac) list_set_pane_copy1

0xa110,	// (0x0003b61b) main_pane_set_t1_copy1_ParamLimits

0xa110,	// (0x0003b61b) main_pane_set_t1_copy1

0xa14a,	// (0x0003b655) main_pane_set_t2_copy1_ParamLimits

0xa14a,	// (0x0003b655) main_pane_set_t2_copy1

0xa24e,	// (0x0003b759) main_pane_set_t3_copy1

0xa25c,	// (0x0003b767) main_pane_set_t4_copy1

0xa169,	// (0x0003b674) set_content_pane_g1_copy1_ParamLimits

0xa169,	// (0x0003b674) set_content_pane_g1_copy1

0xa26a,	// (0x0003b775) setting_code_pane_copy1

0xa272,	// (0x0003b77d) setting_slider_graphic_pane_copy1

0xa272,	// (0x0003b77d) setting_slider_pane_copy1

0xa27a,	// (0x0003b785) setting_text_pane_copy1

0xa27a,	// (0x0003b785) setting_volume_pane_copy1

0xa26a,	// (0x0003b775) settings_code_pane_cp2_copy1

0xa282,	// (0x0003b78d) settings_code_pane_cp_copy1_ParamLimits

0xa282,	// (0x0003b78d) settings_code_pane_cp_copy1

0x29ac,	// (0x00033eb7) volume_set_pane_copy1

0xa296,	// (0x0003b7a1) volume_set_pane_g10_copy1

0xa29e,	// (0x0003b7a9) volume_set_pane_g1_copy1

0xa2a6,	// (0x0003b7b1) volume_set_pane_g2_copy1

0xa2ae,	// (0x0003b7b9) volume_set_pane_g3_copy1

0xa2b6,	// (0x0003b7c1) volume_set_pane_g4_copy1

0xa2be,	// (0x0003b7c9) volume_set_pane_g5_copy1

0xa2c6,	// (0x0003b7d1) volume_set_pane_g6_copy1

0xa2ce,	// (0x0003b7d9) volume_set_pane_g7_copy1

0xa2d6,	// (0x0003b7e1) volume_set_pane_g8_copy1

0xa2de,	// (0x0003b7e9) volume_set_pane_g9_copy1

0x2d3f,	// (0x0003424a) bg_set_opt_pane_cp_copy1_ParamLimits

0x2d3f,	// (0x0003424a) bg_set_opt_pane_cp_copy1

0x29b4,	// (0x00033ebf) setting_slider_pane_t1_copy1_ParamLimits

0x29b4,	// (0x00033ebf) setting_slider_pane_t1_copy1

0x29d3,	// (0x00033ede) setting_slider_pane_t2_copy1_ParamLimits

0x29d3,	// (0x00033ede) setting_slider_pane_t2_copy1

0x29ed,	// (0x00033ef8) setting_slider_pane_t3_copy1_ParamLimits

0x29ed,	// (0x00033ef8) setting_slider_pane_t3_copy1

0x2a05,	// (0x00033f10) slider_set_pane_copy1_ParamLimits

0x2a05,	// (0x00033f10) slider_set_pane_copy1

0x3624,	// (0x00034b2f) set_opt_bg_pane_g1_copy2

0x362c,	// (0x00034b37) set_opt_bg_pane_g2_copy2

0xa2e6,	// (0x0003b7f1) set_opt_bg_pane_g3_copy2

0x363c,	// (0x00034b47) set_opt_bg_pane_g4_copy2

0x3644,	// (0x00034b4f) set_opt_bg_pane_g5_copy2

0x364c,	// (0x00034b57) set_opt_bg_pane_g6_copy2

0xa2f0,	// (0x0003b7fb) set_opt_bg_pane_g7_copy2

0xa2f8,	// (0x0003b803) set_opt_bg_pane_g8_copy2

0xa302,	// (0x0003b80d) set_opt_bg_pane_g9_copy2

0x2a1b,	// (0x00033f26) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a1b,	// (0x00033f26) aid_size_touch_slider_mark_copy1

0xa30c,	// (0x0003b817) slider_set_pane_g1_copy1

0x2a2f,	// (0x00033f3a) slider_set_pane_g2_copy1

0x13d3,	// (0x000328de) slider_set_pane_g3_copy1_ParamLimits

0x13d3,	// (0x000328de) slider_set_pane_g3_copy1

0x13e7,	// (0x000328f2) slider_set_pane_g4_copy1_ParamLimits

0x13e7,	// (0x000328f2) slider_set_pane_g4_copy1

0x13ff,	// (0x0003290a) slider_set_pane_g5_copy1_ParamLimits

0x13ff,	// (0x0003290a) slider_set_pane_g5_copy1

0x13d3,	// (0x000328de) slider_set_pane_g6_copy1_ParamLimits

0x13d3,	// (0x000328de) slider_set_pane_g6_copy1

0x2a37,	// (0x00033f42) slider_set_pane_g7_copy1_ParamLimits

0x2a37,	// (0x00033f42) slider_set_pane_g7_copy1

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp2_copy1

0xa315,	// (0x0003b820) setting_slider_graphic_pane_g1_copy1

0xa31e,	// (0x0003b829) setting_slider_graphic_pane_t1_copy1

0xa32e,	// (0x0003b839) setting_slider_graphic_pane_t2_copy1

0xa33e,	// (0x0003b849) slider_set_pane_cp_copy1

0xa34e,	// (0x0003b859) input_focus_pane_cp1_copy1

0xa357,	// (0x0003b862) list_set_text_pane_copy1

0xa35f,	// (0x0003b86a) setting_text_pane_g1_copy1

0xf259,	// (0x00040764) set_text_pane_t1_copy1

0xa34e,	// (0x0003b859) input_focus_pane_cp2_copy1

0xa35f,	// (0x0003b86a) setting_code_pane_g1_copy1

0xa368,	// (0x0003b873) setting_code_pane_t1_copy1

0x6890,	// (0x00037d9b) list_set_graphic_pane_copy1

0x2c5f,	// (0x0003416a) bg_set_opt_pane_cp4_copy1

0x41cf,	// (0x000356da) list_set_graphic_pane_g1_copy1_ParamLimits

0x41cf,	// (0x000356da) list_set_graphic_pane_g1_copy1

0xa376,	// (0x0003b881) list_set_graphic_pane_g2_copy1

0x41e7,	// (0x000356f2) list_set_graphic_pane_t1_copy1_ParamLimits

0x41e7,	// (0x000356f2) list_set_graphic_pane_t1_copy1

0x737e,	// (0x00038889) rs_clock_indi_pane_g1

0xa37e,	// (0x0003b889) rs_clock_indi_pane_t1

0xa38c,	// (0x0003b897) rs_indi_pane

0xa394,	// (0x0003b89f) rs_indi_pane_g1

0xa39d,	// (0x0003b8a8) rs_indi_pane_g2

0xa3a6,	// (0x0003b8b1) rs_indi_pane_g3

0x0002,

0xfeb3,	// (0x000413be) rs_indi_pane_g

0x44dd,	// (0x000359e8) bg_popup_preview_window_pane_cp03

0xa3af,	// (0x0003b8ba) popup_fep_tooltip_window_t1

0x8006,	// (0x00039511) popup_note2_window_g2_ParamLimits

0x8006,	// (0x00039511) popup_note2_window_g2

0x0001,

0xfc40,	// (0x0004114b) popup_note2_window_g_ParamLimits

0xfc40,	// (0x0004114b) popup_note2_window_g

0x8501,	// (0x00039a0c) bg_popup_sub_pane_cp11_ParamLimits

0x850e,	// (0x00039a19) cell_ai3_links_pane_g1_ParamLimits

0x8525,	// (0x00039a30) cell_ai3_links_pane_t1

0xf259,	// (0x00040764) set_text_pane_t1_copy1_ParamLimits

0x43e5,	// (0x000358f0) cell_graphic_popup_pane_cp2_ParamLimits

0x43e5,	// (0x000358f0) cell_graphic_popup_pane_cp2

0xa3bd,	// (0x0003b8c8) cell_graphic_popup_pane_g1_cp2

0x3317,	// (0x00034822) cell_graphic_popup_pane_g2_cp2

0xa3c5,	// (0x0003b8d0) cell_graphic_popup_pane_g3_cp2

0xa3cd,	// (0x0003b8d8) cell_graphic_popup_pane_t2_cp2

0x3328,	// (0x00034833) grid_highlight_pane_cp3_cp2

0x397c,	// (0x00034e87) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x35cc,	// (0x00034ad7) main_tmo_pane_ParamLimits

0xe34a,	// (0x0003f855) popup_tmo_big_image_note_window

0x9a26,	// (0x0003af31) cell_ai5_widget_list_pane

0x9a2e,	// (0x0003af39) cell_ai5_widget_lrg_icon_pane

0xefd6,	// (0x000404e1) tmo_note_info_pane_t1_ParamLimits

0xefeb,	// (0x000404f6) tmo_note_info_pane_t2_ParamLimits

0xf002,	// (0x0004050d) tmo_note_info_pane_t3_ParamLimits

0xa045,	// (0x0003b550) tmo_note_info_pane_t4_ParamLimits

0xa057,	// (0x0003b562) tmo_note_info_pane_t5_ParamLimits

0xfea1,	// (0x000413ac) tmo_note_info_pane_t_ParamLimits

0xa175,	// (0x0003b680) settings_container_pane_ParamLimits

0xa346,	// (0x0003b851) indicator_popup_pane_cp5

0xa346,	// (0x0003b851) indicator_popup_pane_cp6

0x6890,	// (0x00037d9b) list_set_graphic_pane_copy1_ParamLimits

0xe0f6,	// (0x0003f601) bg_popup_window_pane_cp23

0xa3db,	// (0x0003b8e6) popup_tmo_big_image_note_window_g1

0xa3e5,	// (0x0003b8f0) popup_tmo_big_image_note_window_t1

0xa3f5,	// (0x0003b900) popup_tmo_big_image_note_window_t2

0xa405,	// (0x0003b910) popup_tmo_big_image_note_window_t3

0x0002,

0xfeba,	// (0x000413c5) popup_tmo_big_image_note_window_t

0x737e,	// (0x00038889) cell_ai5_widget_lrg_icon_pane_g1

0xa415,	// (0x0003b920) cell_ai5_widget_lrg_icon_pane_t1

0xa423,	// (0x0003b92e) cell_ai5_widget_list_row_pane_ParamLimits

0xa423,	// (0x0003b92e) cell_ai5_widget_list_row_pane

0xa43a,	// (0x0003b945) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa43a,	// (0x0003b945) cell_ai5_widget_list_row_pane_g1

0xa447,	// (0x0003b952) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa447,	// (0x0003b952) cell_ai5_widget_list_row_pane_t1

0xa478,	// (0x0003b983) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa478,	// (0x0003b983) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec1,	// (0x000413cc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec1,	// (0x000413cc) cell_ai5_widget_list_row_pane_t

0xf146,	// (0x00040651) main_fep_vtchi_ss_pane

0xa4c8,	// (0x0003b9d3) popup_fep_char_pre_window

0xa4d0,	// (0x0003b9db) popup_fep_ituss_window

0xf04f,	// (0x0004055a) popup_fep_vkbss_window

0x4801,	// (0x00035d0c) grid_vkbss_keypad_pane_ParamLimits

0x4801,	// (0x00035d0c) grid_vkbss_keypad_pane

0xa53c,	// (0x0003ba47) ituss_keypad_pane

0x2a57,	// (0x00033f62) aid_vkbss_key_offset_ParamLimits

0x2a57,	// (0x00033f62) aid_vkbss_key_offset

0xd0fa,	// (0x0003e605) cell_vkbss_key_pane_ParamLimits

0xd0fa,	// (0x0003e605) cell_vkbss_key_pane

0xa548,	// (0x0003ba53) bg_cell_vkbss_key_g1_ParamLimits

0xa548,	// (0x0003ba53) bg_cell_vkbss_key_g1

0xf05c,	// (0x00040567) cell_vkbss_key_3p_pane_ParamLimits

0xf05c,	// (0x00040567) cell_vkbss_key_3p_pane

0xf355,	// (0x00040860) cell_vkbss_key_g1_ParamLimits

0xf355,	// (0x00040860) cell_vkbss_key_g1

0xf38b,	// (0x00040896) cell_vkbss_key_t1_ParamLimits

0xf38b,	// (0x00040896) cell_vkbss_key_t1

0x2abb,	// (0x00033fc6) cell_ituss_key_pane_ParamLimits

0x2abb,	// (0x00033fc6) cell_ituss_key_pane

0xa61c,	// (0x0003bb27) bg_cell_ituss_key_g1_ParamLimits

0xa61c,	// (0x0003bb27) bg_cell_ituss_key_g1

0xa628,	// (0x0003bb33) cell_ituss_key_pane_g1_ParamLimits

0xa628,	// (0x0003bb33) cell_ituss_key_pane_g1

0x2acc,	// (0x00033fd7) cell_ituss_key_pane_g2_ParamLimits

0x2acc,	// (0x00033fd7) cell_ituss_key_pane_g2

0x0005,

0xfec8,	// (0x000413d3) cell_ituss_key_pane_g_ParamLimits

0xfec8,	// (0x000413d3) cell_ituss_key_pane_g

0x2b50,	// (0x0003405b) cell_ituss_key_t1_ParamLimits

0x2b50,	// (0x0003405b) cell_ituss_key_t1

0x2b8a,	// (0x00034095) cell_ituss_key_t2_ParamLimits

0x2b8a,	// (0x00034095) cell_ituss_key_t2

0x2bbc,	// (0x000340c7) cell_ituss_key_t3_ParamLimits

0x2bbc,	// (0x000340c7) cell_ituss_key_t3

0x2bed,	// (0x000340f8) cell_ituss_key_t4_ParamLimits

0x2bed,	// (0x000340f8) cell_ituss_key_t4

0x0004,

0xfed5,	// (0x000413e0) cell_ituss_key_t_ParamLimits

0xfed5,	// (0x000413e0) cell_ituss_key_t

0xf3e7,	// (0x000408f2) cell_vkbss_key_3p_pane_g1

0xf3ef,	// (0x000408fa) cell_vkbss_key_3p_pane_g2

0xf3f7,	// (0x00040902) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee0,	// (0x000413eb) cell_vkbss_key_3p_pane_g

0x44dd,	// (0x000359e8) bg_popup_fep_char_preview_window_cp02

0xa666,	// (0x0003bb71) popup_fep_char_pre_window_t1

0xef26,	// (0x00040431) main_ai5_sk_pane

0xa0d1,	// (0x0003b5dc) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0dd,	// (0x0003b5e8) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a5e,	// (0x00038f69) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa0f2,	// (0x0003b5fd) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeac,	// (0x000413b7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa0fe,	// (0x0003b609) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x35cc,	// (0x00034ad7) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf3ff,	// (0x0004090a) main_ai5_sk_pane_g1

0x51f3,	// (0x000366fe) popup_query_code_window_g1

0xf040,	// (0x0004054b) popup_fep_vkb_icf_pane

0xa513,	// (0x0003ba1e) popup_fep_vtchi_icf_pane

0xa67d,	// (0x0003bb88) bg_icf_pane

0xa67d,	// (0x0003bb88) list_vkb_icf_pane

0xa689,	// (0x0003bb94) bg_icf_pane_cp01

0xa69c,	// (0x0003bba7) vtchi_icf_list_pane

0xf454,	// (0x0004095f) list_vkb_icf_pane_t1_ParamLimits

0xf454,	// (0x0004095f) list_vkb_icf_pane_t1

0xa71d,	// (0x0003bc28) vtchi_icf_list_pane_t1_ParamLimits

0xa71d,	// (0x0003bc28) vtchi_icf_list_pane_t1

0xa4d0,	// (0x0003b9db) popup_fep_ituss_window_ParamLimits

0xa513,	// (0x0003ba1e) popup_fep_vtchi_icf_pane_ParamLimits

0xa53c,	// (0x0003ba47) ituss_keypad_pane_ParamLimits

0x2a4d,	// (0x00033f58) ituss_sks_pane

0xa67d,	// (0x0003bb88) bg_icf_pane_ParamLimits

0xf025,	// (0x00040530) icf_edit_indi_pane_ParamLimits

0xf025,	// (0x00040530) icf_edit_indi_pane

0xa67d,	// (0x0003bb88) list_vkb_icf_pane_ParamLimits

0xa689,	// (0x0003bb94) bg_icf_pane_cp01_ParamLimits

0xa4bb,	// (0x0003b9c6) icf_edit_indi_pane_cp01_ParamLimits

0xa4bb,	// (0x0003b9c6) icf_edit_indi_pane_cp01

0xa69c,	// (0x0003bba7) vtchi_query_pane

0x9823,	// (0x0003ad2e) icf_edit_indi_pane_g1_ParamLimits

0x9823,	// (0x0003ad2e) icf_edit_indi_pane_g1

0xf46b,	// (0x00040976) icf_edit_indi_pane_g2_ParamLimits

0xf46b,	// (0x00040976) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x00041416) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x00041416) icf_edit_indi_pane_g

0xf47f,	// (0x0004098a) icf_edit_indi_pane_t1

0xa73b,	// (0x0003bc46) bg_input_focus_pane_cp042

0x34fb,	// (0x00034a06) vtchi_button_pane

0xa744,	// (0x0003bc4f) vtchi_query_pane_t1

0xa752,	// (0x0003bc5d) vtchi_query_pane_t2

0xa760,	// (0x0003bc6b) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00041405) vtchi_query_pane_t

0xf146,	// (0x00040651) bg_button_pane_cp13

0xa76e,	// (0x0003bc79) vtchi_button_pane_g1

0x2c30,	// (0x0003413b) ituss_sks_pane_g1

0x2c3b,	// (0x00034146) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0004140c) ituss_sks_pane_g

0xa776,	// (0x0003bc81) ituss_sks_pane_t1

0xa784,	// (0x0003bc8f) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00041411) ituss_sks_pane_t

0x6e00,	// (0x0003830b) indicator_nsta_pane_cp_g1

0x6e09,	// (0x00038314) indicator_nsta_pane_cp_g2

0x6e11,	// (0x0003831c) indicator_nsta_pane_cp_g3

0x6e19,	// (0x00038324) indicator_nsta_pane_cp_g4

0x6e09,	// (0x00038314) indicator_nsta_pane_cp_g5

0x6e11,	// (0x0003831c) indicator_nsta_pane_cp_g6

0x0005,

0xfa7e,	// (0x00040f89) indicator_nsta_pane_cp_g

0xed3d,	// (0x00040248) cell_graphic2_pane_t2_ParamLimits

0xed3d,	// (0x00040248) cell_graphic2_pane_t2

0x0001,

0xfd97,	// (0x000412a2) cell_graphic2_pane_t_ParamLimits

0xfd97,	// (0x000412a2) cell_graphic2_pane_t

0xed72,	// (0x0004027d) cell_graphic2_control_pane_t1

0xd1ad,	// (0x0003e6b8) signal_pane_g3_ParamLimits

0xd1ad,	// (0x0003e6b8) signal_pane_g3

0xd1c1,	// (0x0003e6cc) signal_pane_g4_ParamLimits

0xd1c1,	// (0x0003e6cc) signal_pane_g4

0xa48a,	// (0x0003b995) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa48a,	// (0x0003b995) cell_ai5_widget_list_row_pane_t3

0xa63c,	// (0x0003bb47) cell_ituss_key_pane_t1_ParamLimits

0xa63c,	// (0x0003bb47) cell_ituss_key_pane_t1

0x4e30,	// (0x0003633b) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e30,	// (0x0003633b) form_field_data_wide_pane_vc_t2

0x4e44,	// (0x0003634f) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e44,	// (0x0003634f) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x00040cea) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x00040cea) form_field_data_wide_pane_vc_t

0x6aaa,	// (0x00037fb5) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6aaa,	// (0x00037fb5) form_field_slider_wide_pane_vc_t3

0x6b88,	// (0x00038093) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b88,	// (0x00038093) form_field_popup_wide_pane_vc_t2

0x6b9f,	// (0x000380aa) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b9f,	// (0x000380aa) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6d,	// (0x00040f78) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6d,	// (0x00040f78) form_field_popup_wide_pane_vc_t

0xcf4f,	// (0x0003e45a) aid_fshwr2_btn_pane_ParamLimits

0xcf5f,	// (0x0003e46a) aid_fshwr2_syb_pane_ParamLimits

0xcf73,	// (0x0003e47e) aid_fshwr2_txt_pane_ParamLimits

0x2036,	// (0x00033541) fshwr2_bg_pane_ParamLimits

0xcf83,	// (0x0003e48e) fshwr2_func_candi_pane_ParamLimits

0xcfa3,	// (0x0003e4ae) fshwr2_hwr_syb_pane_ParamLimits

0xcfc5,	// (0x0003e4d0) fshwr2_icf_pane_ParamLimits

0x18ec,	// (0x00032df7) list_double_graphic_pane_vc_g4_ParamLimits

0x18ec,	// (0x00032df7) list_double_graphic_pane_vc_g4

0x2aec,	// (0x00033ff7) cell_ituss_key_pane_g3_ParamLimits

0x2aec,	// (0x00033ff7) cell_ituss_key_pane_g3

0x2c1e,	// (0x00034129) cell_ituss_key_t5_ParamLimits

0x2c1e,	// (0x00034129) cell_ituss_key_t5

0xf04f,	// (0x0004055a) popup_fep_vkbss_window_ParamLimits

0x99b1,	// (0x0003aebc) aid_cell_ai5_quarter

0xf47f,	// (0x0004098a) icf_edit_indi_pane_t1_ParamLimits

0x3070,	// (0x0003457b) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3070,	// (0x0003457b) aid_tch_indicator_popup_pane_cp2

0x3083,	// (0x0003458e) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3083,	// (0x0003458e) aid_tch_query_popup_data_pane_cp2

0x519b,	// (0x000366a6) aid_tch_query_popup_pane_ParamLimits

0x519b,	// (0x000366a6) aid_tch_query_popup_pane

0x519b,	// (0x000366a6) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x519b,	// (0x000366a6) aid_tch_query_popup_data_pane_cp1

0x4801,	// (0x00035d0c) cell_fshwr2_syb_bg_pane_ParamLimits

0xd0d1,	// (0x0003e5dc) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd0e4,	// (0x0003e5ef) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf040,	// (0x0004054b) popup_fep_vkb_icf_pane_ParamLimits

0xcedb,	// (0x0003e3e6) bg_popup_fep_char_preview_window_g10

0x9aee,	// (0x0003aff9) cell_ai5_widget_pane_g11_ParamLimits

0x9aee,	// (0x0003aff9) cell_ai5_widget_pane_g11

0x9afa,	// (0x0003b005) cell_ai5_widget_pane_g12_ParamLimits

0x9afa,	// (0x0003b005) cell_ai5_widget_pane_g12

0x9b06,	// (0x0003b011) cell_ai5_widget_pane_g13_ParamLimits

0x9b06,	// (0x0003b011) cell_ai5_widget_pane_g13

0x9c35,	// (0x0003b140) cell_ai5_widget_pane_t11_ParamLimits

0x9c35,	// (0x0003b140) cell_ai5_widget_pane_t11

0x9c47,	// (0x0003b152) cell_ai5_widget_pane_t12_ParamLimits

0x9c47,	// (0x0003b152) cell_ai5_widget_pane_t12

0x2af8,	// (0x00034003) cell_ituss_key_pane_g4_ParamLimits

0x2af8,	// (0x00034003) cell_ituss_key_pane_g4

0x2b14,	// (0x0003401f) cell_ituss_key_pane_g5_ParamLimits

0x2b14,	// (0x0003401f) cell_ituss_key_pane_g5

0x2b30,	// (0x0003403b) cell_ituss_key_pane_g6_ParamLimits

0x2b30,	// (0x0003403b) cell_ituss_key_pane_g6

0x4d2b,	// (0x00036236) bg_icf_pane_g1

0xf408,	// (0x00040913) bg_icf_pane_g2

0xf412,	// (0x0004091d) bg_icf_pane_g3

0xf41a,	// (0x00040925) bg_icf_pane_g4

0xf424,	// (0x0004092f) bg_icf_pane_g5

0xf42e,	// (0x00040939) bg_icf_pane_g6

0xf438,	// (0x00040943) bg_icf_pane_g7

0xf440,	// (0x0004094b) bg_icf_pane_g8

0xf44a,	// (0x00040955) bg_icf_pane_g9

0x0008,

0xfee7,	// (0x000413f2) bg_icf_pane_g

0xa529,	// (0x0003ba34) popup_hyb_candi_window_ParamLimits

0xa529,	// (0x0003ba34) popup_hyb_candi_window

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp01_ParamLimits

0x4d9f,	// (0x000362aa) bg_popup_sub_pane_cp01

0xa7bf,	// (0x0003bcca) entry_hyb_candi_pane_ParamLimits

0xa7bf,	// (0x0003bcca) entry_hyb_candi_pane

0xa7ce,	// (0x0003bcd9) grid_hyb_candi_pane_ParamLimits

0xa7ce,	// (0x0003bcd9) grid_hyb_candi_pane

0xa7e3,	// (0x0003bcee) grid_hyb_phrase_pane_ParamLimits

0xa7e3,	// (0x0003bcee) grid_hyb_phrase_pane

0xa7f2,	// (0x0003bcfd) cell_hyb_candi_pane_ParamLimits

0xa7f2,	// (0x0003bcfd) cell_hyb_candi_pane

0xa815,	// (0x0003bd20) cell_hyb_candi_scroll_pane

0x3ea5,	// (0x000353b0) cell_hyb_candi_pane_g1

0xa81e,	// (0x0003bd29) cell_hyb_candi_pane_t1

0xa82c,	// (0x0003bd37) cell_hyb_phrase_pane

0x3ea5,	// (0x000353b0) cell_hyb_phrase_pane_g1

0xa835,	// (0x0003bd40) cell_hyb_phrase_pane_t1

0xa843,	// (0x0003bd4e) entry_hyb_candi_pane_t1

0x44dd,	// (0x000359e8) input_focus_pane_cp06

0xa851,	// (0x0003bd5c) cell_hyb_candi_scroll_pane_g1

0xa859,	// (0x0003bd64) cell_hyb_candi_scroll_pane_g1_aid

0xa861,	// (0x0003bd6c) cell_hyb_candi_scroll_pane_g2

0xa869,	// (0x0003bd74) cell_hyb_candi_scroll_pane_g2_aid

0xa871,	// (0x0003bd7c) cell_hyb_candi_scroll_pane_g3

0xa879,	// (0x0003bd84) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

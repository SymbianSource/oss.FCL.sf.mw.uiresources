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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00049269 };

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
0x9840,	// (0x00052aa9) Screen

0x984c,	// (0x00052ab5) application_window_ParamLimits

0x984c,	// (0x00052ab5) application_window

0x9866,	// (0x00052acf) screen_g1

0x9898,	// (0x00052b01) area_bottom_pane_ParamLimits

0x9898,	// (0x00052b01) area_bottom_pane

0xec3a,	// (0x00057ea3) area_top_pane_ParamLimits

0xec3a,	// (0x00057ea3) area_top_pane

0xecce,	// (0x00057f37) main_pane_ParamLimits

0xecce,	// (0x00057f37) main_pane

0x9956,	// (0x00052bbf) misc_graphics

0xb737,	// (0x000549a0) battery_pane_ParamLimits

0xb737,	// (0x000549a0) battery_pane

0x302f,	// (0x0004c298) bg_status_flat_pane_g8

0x3037,	// (0x0004c2a0) bg_status_flat_pane_g9

0x2437,	// (0x0004b6a0) context_pane_ParamLimits

0x2437,	// (0x0004b6a0) context_pane

0xb8ae,	// (0x00054b17) navi_pane_ParamLimits

0xb8ae,	// (0x00054b17) navi_pane

0xc44d,	// (0x000556b6) signal_pane_ParamLimits

0xc44d,	// (0x000556b6) signal_pane

0x0008,

0xf879,	// (0x00058ae2) bg_status_flat_pane_g

0xc4dd,	// (0x00055746) status_pane_g1_ParamLimits

0xc4dd,	// (0x00055746) status_pane_g1

0xc4f3,	// (0x0005575c) status_pane_g2_ParamLimits

0xc4f3,	// (0x0005575c) status_pane_g2

0x2670,	// (0x0004b8d9) status_pane_g3_ParamLimits

0x2670,	// (0x0004b8d9) status_pane_g3

0x0004,

0xf7a5,	// (0x00058a0e) status_pane_g_ParamLimits

0xf7a5,	// (0x00058a0e) status_pane_g

0xc4ff,	// (0x00055768) title_pane_ParamLimits

0xc4ff,	// (0x00055768) title_pane

0xc566,	// (0x000557cf) uni_indicator_pane_ParamLimits

0xc566,	// (0x000557cf) uni_indicator_pane

0x229f,	// (0x0004b508) bg_list_pane_ParamLimits

0x229f,	// (0x0004b508) bg_list_pane

0xaf77,	// (0x000541e0) find_pane

0x286b,	// (0x0004bad4) listscroll_app_pane_ParamLimits

0x286b,	// (0x0004bad4) listscroll_app_pane

0x22d3,	// (0x0004b53c) listscroll_form_pane

0xaf7f,	// (0x000541e8) listscroll_gen_pane_ParamLimits

0xaf7f,	// (0x000541e8) listscroll_gen_pane

0x05ef,	// (0x00049858) listscroll_set_pane

0x3bc1,	// (0x0004ce2a) main_idle_act_pane

0xe76d,	// (0x000579d6) main_idle_trad_pane

0xe76d,	// (0x000579d6) main_list_empty_pane

0x22c7,	// (0x0004b530) main_midp_pane

0x22ed,	// (0x0004b556) main_pane_g1_ParamLimits

0x22ed,	// (0x0004b556) main_pane_g1

0xaf93,	// (0x000541fc) popup_ai_message_window_ParamLimits

0xaf93,	// (0x000541fc) popup_ai_message_window

0xb033,	// (0x0005429c) popup_fep_china_uni_window_ParamLimits

0xb033,	// (0x0005429c) popup_fep_china_uni_window

0x070b,	// (0x00049974) popup_fep_japan_candidate_window_ParamLimits

0x070b,	// (0x00049974) popup_fep_japan_candidate_window

0x0735,	// (0x0004999e) popup_fep_japan_predictive_window_ParamLimits

0x0735,	// (0x0004999e) popup_fep_japan_predictive_window

0xb093,	// (0x000542fc) popup_find_window

0xb0b0,	// (0x00054319) popup_grid_graphic_window_ParamLimits

0xb0b0,	// (0x00054319) popup_grid_graphic_window

0x07a6,	// (0x00049a0f) popup_large_graphic_colour_window

0xb154,	// (0x000543bd) popup_menu_window_ParamLimits

0xb154,	// (0x000543bd) popup_menu_window

0xb344,	// (0x000545ad) popup_note_image_window

0xb304,	// (0x0005456d) popup_note_wait_window_ParamLimits

0xb304,	// (0x0005456d) popup_note_wait_window

0xb35c,	// (0x000545c5) popup_note_window_ParamLimits

0xb35c,	// (0x000545c5) popup_note_window

0xb40a,	// (0x00054673) popup_query_code_window_ParamLimits

0xb40a,	// (0x00054673) popup_query_code_window

0x0a12,	// (0x00049c7b) popup_query_data_code_window_ParamLimits

0x0a12,	// (0x00049c7b) popup_query_data_code_window

0xb44a,	// (0x000546b3) popup_query_data_window_ParamLimits

0xb44a,	// (0x000546b3) popup_query_data_window

0xb4de,	// (0x00054747) popup_query_sat_info_window_ParamLimits

0xb4de,	// (0x00054747) popup_query_sat_info_window

0xb587,	// (0x000547f0) popup_snote_single_graphic_window_ParamLimits

0xb587,	// (0x000547f0) popup_snote_single_graphic_window

0xb587,	// (0x000547f0) popup_snote_single_text_window_ParamLimits

0xb587,	// (0x000547f0) popup_snote_single_text_window

0x0aad,	// (0x00049d16) popup_sub_window_general

0x0bf3,	// (0x00049e5c) popup_window_general_ParamLimits

0x0bf3,	// (0x00049e5c) popup_window_general

0x22fb,	// (0x0004b564) power_save_pane

0xadd7,	// (0x00054040) control_pane_g1_ParamLimits

0xadd7,	// (0x00054040) control_pane_g1

0xae00,	// (0x00054069) control_pane_g2_ParamLimits

0xae00,	// (0x00054069) control_pane_g2

0x2262,	// (0x0004b4cb) control_pane_g3_ParamLimits

0x2262,	// (0x0004b4cb) control_pane_g3

0x0007,

0xf78d,	// (0x000589f6) control_pane_g_ParamLimits

0xf78d,	// (0x000589f6) control_pane_g

0xae66,	// (0x000540cf) control_pane_t1_ParamLimits

0xae66,	// (0x000540cf) control_pane_t1

0xaecc,	// (0x00054135) control_pane_t2_ParamLimits

0xaecc,	// (0x00054135) control_pane_t2

0x0002,

0xf79e,	// (0x00058a07) control_pane_t_ParamLimits

0xf79e,	// (0x00058a07) control_pane_t

0xad30,	// (0x00053f99) navi_navi_volume_pane_cp1

0xad38,	// (0x00053fa1) status_small_icon_pane

0xe88e,	// (0x00057af7) status_small_pane_g1_ParamLimits

0xe88e,	// (0x00057af7) status_small_pane_g1

0xad40,	// (0x00053fa9) status_small_pane_g2_ParamLimits

0xad40,	// (0x00053fa9) status_small_pane_g2

0xad4c,	// (0x00053fb5) status_small_pane_g3_ParamLimits

0xad4c,	// (0x00053fb5) status_small_pane_g3

0xad58,	// (0x00053fc1) status_small_pane_g4_ParamLimits

0xad58,	// (0x00053fc1) status_small_pane_g4

0xad64,	// (0x00053fcd) status_small_pane_g5_ParamLimits

0xad64,	// (0x00053fcd) status_small_pane_g5

0xad72,	// (0x00053fdb) status_small_pane_g6_ParamLimits

0xad72,	// (0x00053fdb) status_small_pane_g6

0x0007,

0xf77c,	// (0x000589e5) status_small_pane_g_ParamLimits

0xf77c,	// (0x000589e5) status_small_pane_g

0xada1,	// (0x0005400a) status_small_pane_t1

0xadc3,	// (0x0005402c) status_small_wait_pane_ParamLimits

0xadc3,	// (0x0005402c) status_small_wait_pane

0xab73,	// (0x00053ddc) aid_levels_signal_ParamLimits

0xab73,	// (0x00053ddc) aid_levels_signal

0xab8b,	// (0x00053df4) signal_pane_g1_ParamLimits

0xab8b,	// (0x00053df4) signal_pane_g1

0xaba6,	// (0x00053e0f) signal_pane_g2_ParamLimits

0xaba6,	// (0x00053e0f) signal_pane_g2

0x0003,

0xf70d,	// (0x00058976) signal_pane_g_ParamLimits

0xf70d,	// (0x00058976) signal_pane_g

0xc2c8,	// (0x00055531) context_pane_g1

0x9a8e,	// (0x00052cf7) title_pane_g1

0x9add,	// (0x00052d46) title_pane_t1

0x9b69,	// (0x00052dd2) title_pane_t2

0x9b8f,	// (0x00052df8) title_pane_t3

0x0002,

0xf557,	// (0x000587c0) title_pane_t

0xc58e,	// (0x000557f7) aid_levels_battery_ParamLimits

0xc58e,	// (0x000557f7) aid_levels_battery

0xc5aa,	// (0x00055813) battery_pane_g1_ParamLimits

0xc5aa,	// (0x00055813) battery_pane_g1

0xc5c7,	// (0x00055830) battery_pane_g2_ParamLimits

0xc5c7,	// (0x00055830) battery_pane_g2

0x0001,

0xf7b0,	// (0x00058a19) battery_pane_g_ParamLimits

0xf7b0,	// (0x00058a19) battery_pane_g

0xc7c8,	// (0x00055a31) uni_indicator_pane_g1

0xc7de,	// (0x00055a47) uni_indicator_pane_g2

0xc7f4,	// (0x00055a5d) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x00058b8a) uni_indicator_pane_g

0xe5f3,	// (0x0005785c) navi_icon_pane_ParamLimits

0xe5f3,	// (0x0005785c) navi_icon_pane

0xe53a,	// (0x000577a3) navi_midp_pane

0xe60f,	// (0x00057878) navi_navi_pane

0xe619,	// (0x00057882) navi_text_pane_ParamLimits

0xe619,	// (0x00057882) navi_text_pane

0x9866,	// (0x00052acf) status_small_wait_pane_g1

0xa094,	// (0x000532fd) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x00058b85) status_small_wait_pane_g

0xc767,	// (0x000559d0) navi_navi_icon_text_pane

0xc76f,	// (0x000559d8) navi_navi_pane_g1_ParamLimits

0xc76f,	// (0x000559d8) navi_navi_pane_g1

0xc781,	// (0x000559ea) navi_navi_pane_g2_ParamLimits

0xc781,	// (0x000559ea) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x00058b53) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x00058b53) navi_navi_pane_g

0x36b8,	// (0x0004c921) navi_navi_tabs_pane

0xc793,	// (0x000559fc) navi_navi_text_pane

0xc767,	// (0x000559d0) navi_navi_volume_pane

0xc755,	// (0x000559be) navi_text_pane_t1

0xc749,	// (0x000559b2) navi_icon_pane_g1

0x35af,	// (0x0004c818) navi_navi_text_pane_t1

0xbaf4,	// (0x00054d5d) navi_navi_volume_pane_g1

0xbafc,	// (0x00054d65) volume_small_pane

0xc6a5,	// (0x0005590e) navi_navi_icon_text_pane_g1

0xc6ad,	// (0x00055916) navi_navi_icon_text_pane_t1

0xe60f,	// (0x00057878) navi_tabs_2_long_pane

0xe60f,	// (0x00057878) navi_tabs_2_pane

0xe60f,	// (0x00057878) navi_tabs_3_long_pane

0xe60f,	// (0x00057878) navi_tabs_3_pane

0xe60f,	// (0x00057878) navi_tabs_4_pane

0xbad4,	// (0x00054d3d) tabs_2_active_pane_ParamLimits

0xbad4,	// (0x00054d3d) tabs_2_active_pane

0xbae4,	// (0x00054d4d) tabs_2_passive_pane_ParamLimits

0xbae4,	// (0x00054d4d) tabs_2_passive_pane

0xbaa2,	// (0x00054d0b) tabs_3_active_pane_ParamLimits

0xbaa2,	// (0x00054d0b) tabs_3_active_pane

0xbab2,	// (0x00054d1b) tabs_3_passive_pane_ParamLimits

0xbab2,	// (0x00054d1b) tabs_3_passive_pane

0xbac3,	// (0x00054d2c) tabs_3_passive_pane_cp_ParamLimits

0xbac3,	// (0x00054d2c) tabs_3_passive_pane_cp

0xba5e,	// (0x00054cc7) tabs_4_active_pane_ParamLimits

0xba5e,	// (0x00054cc7) tabs_4_active_pane

0xba6f,	// (0x00054cd8) tabs_4_passive_pane_ParamLimits

0xba6f,	// (0x00054cd8) tabs_4_passive_pane

0xba80,	// (0x00054ce9) tabs_4_passive_pane_cp_ParamLimits

0xba80,	// (0x00054ce9) tabs_4_passive_pane_cp

0xba91,	// (0x00054cfa) tabs_4_passive_pane_cp2_ParamLimits

0xba91,	// (0x00054cfa) tabs_4_passive_pane_cp2

0xba3a,	// (0x00054ca3) tabs_2_long_active_pane_ParamLimits

0xba3a,	// (0x00054ca3) tabs_2_long_active_pane

0xba4c,	// (0x00054cb5) tabs_2_long_passive_pane_ParamLimits

0xba4c,	// (0x00054cb5) tabs_2_long_passive_pane

0xb9ef,	// (0x00054c58) tabs_3_long_active_pane_ParamLimits

0xb9ef,	// (0x00054c58) tabs_3_long_active_pane

0xba08,	// (0x00054c71) tabs_3_long_passive_pane_ParamLimits

0xba08,	// (0x00054c71) tabs_3_long_passive_pane

0xba21,	// (0x00054c8a) tabs_3_long_passive_pane_cp_ParamLimits

0xba21,	// (0x00054c8a) tabs_3_long_passive_pane_cp

0x0d65,	// (0x00049fce) volume_small_pane_g1

0xb99e,	// (0x00054c07) volume_small_pane_g2

0xb9a7,	// (0x00054c10) volume_small_pane_g3

0xb9b0,	// (0x00054c19) volume_small_pane_g4

0xb9b9,	// (0x00054c22) volume_small_pane_g5

0xb9c2,	// (0x00054c2b) volume_small_pane_g6

0xb9cb,	// (0x00054c34) volume_small_pane_g7

0xb9d4,	// (0x00054c3d) volume_small_pane_g8

0xb9dd,	// (0x00054c46) volume_small_pane_g9

0xb9e6,	// (0x00054c4f) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x00058b1f) volume_small_pane_g

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp2_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp2

0x9baf,	// (0x00052e18) tabs_3_active_pane_g1

0x9bb7,	// (0x00052e20) tabs_3_active_pane_t1

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp2_ParamLimits

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp2

0x9baf,	// (0x00052e18) tabs_3_passive_pane_g1

0x9bb7,	// (0x00052e20) tabs_3_passive_pane_t1

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp3_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp3

0x9bc9,	// (0x00052e32) tabs_4_active_pane_g1

0x9bd1,	// (0x00052e3a) tabs_4_active_pane_t1

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp3_ParamLimits

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp3

0x9bc9,	// (0x00052e32) tabs_4_1_passive_pane_g1

0x9bd1,	// (0x00052e3a) tabs_4_1_passive_pane_t1

0x22c7,	// (0x0004b530) list_highlight_pane_cp2

0x3be7,	// (0x0004ce50) list_set_pane_ParamLimits

0x3be7,	// (0x0004ce50) list_set_pane

0xc887,	// (0x00055af0) main_pane_set_t1_ParamLimits

0xc887,	// (0x00055af0) main_pane_set_t1

0xc8a7,	// (0x00055b10) main_pane_set_t2_ParamLimits

0xc8a7,	// (0x00055b10) main_pane_set_t2

0xc8bb,	// (0x00055b24) main_pane_set_t3_ParamLimits

0xc8bb,	// (0x00055b24) main_pane_set_t3

0xc8cf,	// (0x00055b38) main_pane_set_t4_ParamLimits

0xc8cf,	// (0x00055b38) main_pane_set_t4

0x0003,

0xf986,	// (0x00058bef) main_pane_set_t_ParamLimits

0xf986,	// (0x00058bef) main_pane_set_t

0xc8e3,	// (0x00055b4c) setting_code_pane

0x3d0f,	// (0x0004cf78) setting_slider_graphic_pane

0x3d0f,	// (0x0004cf78) setting_slider_pane

0x3d0f,	// (0x0004cf78) setting_text_pane

0x3d0f,	// (0x0004cf78) setting_volume_pane

0xf2c6,	// (0x0005852f) volume_set_pane

0x9be3,	// (0x00052e4c) bg_set_opt_pane_cp

0xf2d0,	// (0x00058539) setting_slider_pane_t1

0xf2e9,	// (0x00058552) setting_slider_pane_t2

0xf303,	// (0x0005856c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000587c7) setting_slider_pane_t

0xf31b,	// (0x00058584) slider_set_pane

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp2

0x9bf1,	// (0x00052e5a) setting_slider_graphic_pane_g1

0xf331,	// (0x0005859a) setting_slider_graphic_pane_t1

0xf341,	// (0x000585aa) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000587ce) setting_slider_graphic_pane_t

0xf351,	// (0x000585ba) slider_set_pane_cp

0x9956,	// (0x00052bbf) input_focus_pane_cp1

0x3ba8,	// (0x0004ce11) list_set_text_pane

0x9866,	// (0x00052acf) setting_text_pane_g1

0x9956,	// (0x00052bbf) input_focus_pane_cp2

0x9866,	// (0x00052acf) setting_code_pane_g1

0x9bfa,	// (0x00052e63) setting_code_pane_t1

0xe2ec,	// (0x00057555) set_text_pane_t1_ParamLimits

0xe2ec,	// (0x00057555) set_text_pane_t1

0xa5a0,	// (0x00053809) set_opt_bg_pane_g1

0xa5a8,	// (0x00053811) set_opt_bg_pane_g2

0x3b80,	// (0x0004cde9) set_opt_bg_pane_g3

0xa5b8,	// (0x00053821) set_opt_bg_pane_g4

0xa5c0,	// (0x00053829) set_opt_bg_pane_g5

0xa5c8,	// (0x00053831) set_opt_bg_pane_g6

0x3b8a,	// (0x0004cdf3) set_opt_bg_pane_g7

0x3b94,	// (0x0004cdfd) set_opt_bg_pane_g8

0x3b9e,	// (0x0004ce07) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x00058bdc) set_opt_bg_pane_g

0x3b73,	// (0x0004cddc) slider_set_pane_g1

0x0f49,	// (0x0004a1b2) slider_set_pane_g2

0x0006,

0xf964,	// (0x00058bcd) slider_set_pane_g

0x0ed1,	// (0x0004a13a) volume_set_pane_g1

0x0edb,	// (0x0004a144) volume_set_pane_g2

0x0ee5,	// (0x0004a14e) volume_set_pane_g3

0x0eef,	// (0x0004a158) volume_set_pane_g4

0x0ef9,	// (0x0004a162) volume_set_pane_g5

0x0f03,	// (0x0004a16c) volume_set_pane_g6

0x0f0d,	// (0x0004a176) volume_set_pane_g7

0x0f17,	// (0x0004a180) volume_set_pane_g8

0x0f21,	// (0x0004a18a) volume_set_pane_g9

0x0f2b,	// (0x0004a194) volume_set_pane_g10

0x0009,

0xf93c,	// (0x00058ba5) volume_set_pane_g

0x9c08,	// (0x00052e71) indicator_pane_ParamLimits

0x9c08,	// (0x00052e71) indicator_pane

0x9c34,	// (0x00052e9d) main_idle_pane_g2_ParamLimits

0x9c34,	// (0x00052e9d) main_idle_pane_g2

0x9c6c,	// (0x00052ed5) main_pane_idle_g1_ParamLimits

0x9c6c,	// (0x00052ed5) main_pane_idle_g1

0x9c96,	// (0x00052eff) popup_clock_digital_analogue_window_ParamLimits

0x9c96,	// (0x00052eff) popup_clock_digital_analogue_window

0x9cad,	// (0x00052f16) soft_indicator_pane_ParamLimits

0x9cad,	// (0x00052f16) soft_indicator_pane

0x9cc9,	// (0x00052f32) wallpaper_pane_ParamLimits

0x9cc9,	// (0x00052f32) wallpaper_pane

0x9866,	// (0x00052acf) wallpaper_pane_g1

0x9ce3,	// (0x00052f4c) indicator_pane_g1_ParamLimits

0x9ce3,	// (0x00052f4c) indicator_pane_g1

0x3fea,	// (0x0004d253) navi_navi_icon_text_pane_srt_g1

0x9d0b,	// (0x00052f74) soft_indicator_pane_t1

0x9d25,	// (0x00052f8e) aid_ps_area_pane

0x9d36,	// (0x00052f9f) aid_ps_clock_pane

0x9d44,	// (0x00052fad) aid_ps_indicator_pane

0x9d50,	// (0x00052fb9) indicator_ps_pane_ParamLimits

0x9d50,	// (0x00052fb9) indicator_ps_pane

0x9d5f,	// (0x00052fc8) power_save_pane_g1_ParamLimits

0x9d5f,	// (0x00052fc8) power_save_pane_g1

0x9d6b,	// (0x00052fd4) power_save_pane_g2_ParamLimits

0x9d6b,	// (0x00052fd4) power_save_pane_g2

0xec1a,	// (0x00057e83) aid_navinavi_width_pane

0x9d25,	// (0x00052f8e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000587d3) power_save_pane_g_ParamLimits

0xf56a,	// (0x000587d3) power_save_pane_g

0x9d79,	// (0x00052fe2) power_save_pane_t1_ParamLimits

0x9d79,	// (0x00052fe2) power_save_pane_t1

0x9d36,	// (0x00052f9f) aid_ps_clock_pane_ParamLimits

0x9d44,	// (0x00052fad) aid_ps_indicator_pane_ParamLimits

0x9d8b,	// (0x00052ff4) power_save_pane_t4_ParamLimits

0x9d8b,	// (0x00052ff4) power_save_pane_t4

0x0001,

0xf56f,	// (0x000587d8) power_save_pane_t_ParamLimits

0xf56f,	// (0x000587d8) power_save_pane_t

0x9db5,	// (0x0005301e) power_save_t3_ParamLimits

0x9db5,	// (0x0005301e) power_save_t3

0x9da0,	// (0x00053009) power_save_t2_ParamLimits

0x9da0,	// (0x00053009) power_save_t2

0x9dca,	// (0x00053033) indicator_ps_pane_g1

0x9dd3,	// (0x0005303c) ai_gene_pane_ParamLimits

0x9dd3,	// (0x0005303c) ai_gene_pane

0x9dea,	// (0x00053053) ai_links_pane_ParamLimits

0x9dea,	// (0x00053053) ai_links_pane

0x9e02,	// (0x0005306b) indicator_pane_cp1_ParamLimits

0x9e02,	// (0x0005306b) indicator_pane_cp1

0x9e11,	// (0x0005307a) main_pane_idle_g1_cp_ParamLimits

0x9e11,	// (0x0005307a) main_pane_idle_g1_cp

0x9e29,	// (0x00053092) popup_ai_links_title_window

0x9e32,	// (0x0005309b) soft_indicator_pane_cp1_ParamLimits

0x9e32,	// (0x0005309b) soft_indicator_pane_cp1

0x3967,	// (0x0004cbd0) ai_links_pane_g1

0x3970,	// (0x0004cbd9) grid_ai_links_pane

0xc7bf,	// (0x00055a28) ai_gene_pane_1

0x3955,	// (0x0004cbbe) ai_gene_pane_2

0x395e,	// (0x0004cbc7) list_highlight_pane_cp4

0xc79b,	// (0x00055a04) cell_ai_link_pane_ParamLimits

0xc79b,	// (0x00055a04) cell_ai_link_pane

0x3924,	// (0x0004cb8d) cell_ai_link_pane_g1

0xa094,	// (0x000532fd) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x00058b80) cell_ai_link_pane_g

0x9956,	// (0x00052bbf) grid_highlight_cp2

0x9956,	// (0x00052bbf) bg_popup_sub_pane_cp1

0x9e54,	// (0x000530bd) popup_ai_links_title_window_t1

0x3870,	// (0x0004cad9) ai_gene_pane_1_g1_ParamLimits

0x3870,	// (0x0004cad9) ai_gene_pane_1_g1

0x387c,	// (0x0004cae5) ai_gene_pane_1_g2_ParamLimits

0x387c,	// (0x0004cae5) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x00058b76) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x00058b76) ai_gene_pane_1_g

0x3889,	// (0x0004caf2) ai_gene_pane_1_t1_ParamLimits

0x3889,	// (0x0004caf2) ai_gene_pane_1_t1

0x38bd,	// (0x0004cb26) grid_ai_soft_ind_pane

0x385b,	// (0x0004cac4) ai_gene_pane_2_t1_ParamLimits

0x385b,	// (0x0004cac4) ai_gene_pane_2_t1

0x9e63,	// (0x000530cc) main_pane_empty_t1_ParamLimits

0x9e63,	// (0x000530cc) main_pane_empty_t1

0x9e7b,	// (0x000530e4) main_pane_empty_t2_ParamLimits

0x9e7b,	// (0x000530e4) main_pane_empty_t2

0x9e90,	// (0x000530f9) main_pane_empty_t3_ParamLimits

0x9e90,	// (0x000530f9) main_pane_empty_t3

0x9ea2,	// (0x0005310b) main_pane_empty_t4_ParamLimits

0x9ea2,	// (0x0005310b) main_pane_empty_t4

0x9eb4,	// (0x0005311d) main_pane_empty_t5_ParamLimits

0x9eb4,	// (0x0005311d) main_pane_empty_t5

0x0004,

0xf574,	// (0x000587dd) main_pane_empty_t_ParamLimits

0xf574,	// (0x000587dd) main_pane_empty_t

0xa5f1,	// (0x0005385a) bg_popup_window_pane_ParamLimits

0xa5f1,	// (0x0005385a) bg_popup_window_pane

0x35bd,	// (0x0004c826) find_popup_pane_cp2_ParamLimits

0x35bd,	// (0x0004c826) find_popup_pane_cp2

0x35c9,	// (0x0004c832) heading_pane_ParamLimits

0x35c9,	// (0x0004c832) heading_pane

0x9956,	// (0x00052bbf) bg_popup_sub_pane

0xc6ca,	// (0x00055933) bg_popup_window_pane_g1_ParamLimits

0xc6ca,	// (0x00055933) bg_popup_window_pane_g1

0xc6d9,	// (0x00055942) bg_popup_window_pane_g2_ParamLimits

0xc6d9,	// (0x00055942) bg_popup_window_pane_g2

0xc6e5,	// (0x0005594e) bg_popup_window_pane_g3_ParamLimits

0xc6e5,	// (0x0005594e) bg_popup_window_pane_g3

0xc6f1,	// (0x0005595a) bg_popup_window_pane_g4_ParamLimits

0xc6f1,	// (0x0005595a) bg_popup_window_pane_g4

0xc700,	// (0x00055969) bg_popup_window_pane_g5_ParamLimits

0xc700,	// (0x00055969) bg_popup_window_pane_g5

0xc710,	// (0x00055979) bg_popup_window_pane_g6_ParamLimits

0xc710,	// (0x00055979) bg_popup_window_pane_g6

0xc71c,	// (0x00055985) bg_popup_window_pane_g7_ParamLimits

0xc71c,	// (0x00055985) bg_popup_window_pane_g7

0xc72b,	// (0x00055994) bg_popup_window_pane_g8_ParamLimits

0xc72b,	// (0x00055994) bg_popup_window_pane_g8

0xc73a,	// (0x000559a3) bg_popup_window_pane_g9_ParamLimits

0xc73a,	// (0x000559a3) bg_popup_window_pane_g9

0x35a3,	// (0x0004c80c) bg_popup_window_pane_g10_ParamLimits

0x35a3,	// (0x0004c80c) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x00058b3e) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x00058b3e) bg_popup_window_pane_g

0x34cc,	// (0x0004c735) bg_popup_heading_pane_ParamLimits

0x34cc,	// (0x0004c735) bg_popup_heading_pane

0x1011,	// (0x0004a27a) tabs_4_passive_pane_cp_srt_ParamLimits

0x1011,	// (0x0004a27a) tabs_4_passive_pane_cp_srt

0x1023,	// (0x0004a28c) tabs_4_passive_pane_srt_ParamLimits

0x34e0,	// (0x0004c749) heading_pane_g2

0x1023,	// (0x0004a28c) tabs_4_passive_pane_srt

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp3_srt

0x34e8,	// (0x0004c751) heading_pane_t1_ParamLimits

0x34e8,	// (0x0004c751) heading_pane_t1

0x34ff,	// (0x0004c768) heading_pane_t2_ParamLimits

0x34ff,	// (0x0004c768) heading_pane_t2

0x0001,

0xf8d0,	// (0x00058b39) heading_pane_t_ParamLimits

0xf8d0,	// (0x00058b39) heading_pane_t

0x2ff7,	// (0x0004c260) bg_popup_heading_pane_g1

0x30a6,	// (0x0004c30f) bg_popup_heading_pane_g2

0x30b0,	// (0x0004c319) bg_popup_heading_pane_g3

0x30ba,	// (0x0004c323) bg_popup_heading_pane_g4

0x30c4,	// (0x0004c32d) bg_popup_heading_pane_g5

0x30ce,	// (0x0004c337) bg_popup_heading_pane_g6

0x30d6,	// (0x0004c33f) bg_popup_heading_pane_g7

0x30de,	// (0x0004c347) bg_popup_heading_pane_g8

0x30e8,	// (0x0004c351) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x00058af5) bg_popup_heading_pane_g

0x27f7,	// (0x0004ba60) bg_popup_sub_pane_g1

0x27ff,	// (0x0004ba68) bg_popup_sub_pane_g2

0x2807,	// (0x0004ba70) bg_popup_sub_pane_g3

0x280f,	// (0x0004ba78) bg_popup_sub_pane_g4

0x2817,	// (0x0004ba80) bg_popup_sub_pane_g5

0x281f,	// (0x0004ba88) bg_popup_sub_pane_g6

0x2827,	// (0x0004ba90) bg_popup_sub_pane_g7

0x282f,	// (0x0004ba98) bg_popup_sub_pane_g8

0x2837,	// (0x0004baa0) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x00058acf) bg_popup_sub_pane_g

0x9ba1,	// (0x00052e0a) bg_popup_window_pane_cp5_ParamLimits

0x9ba1,	// (0x00052e0a) bg_popup_window_pane_cp5

0x9ed4,	// (0x0005313d) popup_note_window_g1_ParamLimits

0x9ed4,	// (0x0005313d) popup_note_window_g1

0x9ee0,	// (0x00053149) popup_note_window_t1_ParamLimits

0x9ee0,	// (0x00053149) popup_note_window_t1

0x9ef6,	// (0x0005315f) popup_note_window_t2_ParamLimits

0x9ef6,	// (0x0005315f) popup_note_window_t2

0x9f0c,	// (0x00053175) popup_note_window_t3_ParamLimits

0x9f0c,	// (0x00053175) popup_note_window_t3

0x9f22,	// (0x0005318b) popup_note_window_t4_ParamLimits

0x9f22,	// (0x0005318b) popup_note_window_t4

0x9f4a,	// (0x000531b3) popup_note_window_t5_ParamLimits

0x9f4a,	// (0x000531b3) popup_note_window_t5

0x0004,

0xf57f,	// (0x000587e8) popup_note_window_t_ParamLimits

0xf57f,	// (0x000587e8) popup_note_window_t

0x9f94,	// (0x000531fd) bg_popup_window_pane_cp6_ParamLimits

0x9f94,	// (0x000531fd) bg_popup_window_pane_cp6

0x2f73,	// (0x0004c1dc) popup_note_image_window_g1_ParamLimits

0x2f73,	// (0x0004c1dc) popup_note_image_window_g1

0x2f7f,	// (0x0004c1e8) popup_note_image_window_g2_ParamLimits

0x2f7f,	// (0x0004c1e8) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x00058ac3) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x00058ac3) popup_note_image_window_g

0x2f98,	// (0x0004c201) popup_note_image_window_t1_ParamLimits

0x2f98,	// (0x0004c201) popup_note_image_window_t1

0x2fb1,	// (0x0004c21a) popup_note_image_window_t2_ParamLimits

0x2fb1,	// (0x0004c21a) popup_note_image_window_t2

0x2fca,	// (0x0004c233) popup_note_image_window_t3_ParamLimits

0x2fca,	// (0x0004c233) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x00058ac8) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x00058ac8) popup_note_image_window_t

0x2e33,	// (0x0004c09c) bg_popup_window_pane_cp7_ParamLimits

0x2e33,	// (0x0004c09c) bg_popup_window_pane_cp7

0x2e63,	// (0x0004c0cc) popup_note_wait_window_g1_ParamLimits

0x2e63,	// (0x0004c0cc) popup_note_wait_window_g1

0x2e6f,	// (0x0004c0d8) popup_note_wait_window_g2_ParamLimits

0x2e6f,	// (0x0004c0d8) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x00058ab1) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x00058ab1) popup_note_wait_window_g

0x2e87,	// (0x0004c0f0) popup_note_wait_window_t1_ParamLimits

0x2e87,	// (0x0004c0f0) popup_note_wait_window_t1

0x2eae,	// (0x0004c117) popup_note_wait_window_t2_ParamLimits

0x2eae,	// (0x0004c117) popup_note_wait_window_t2

0x2ecc,	// (0x0004c135) popup_note_wait_window_t3_ParamLimits

0x2ecc,	// (0x0004c135) popup_note_wait_window_t3

0x2edf,	// (0x0004c148) popup_note_wait_window_t4_ParamLimits

0x2edf,	// (0x0004c148) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x00058ab8) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x00058ab8) popup_note_wait_window_t

0x2f04,	// (0x0004c16d) wait_bar_pane_ParamLimits

0x2f04,	// (0x0004c16d) wait_bar_pane

0x9956,	// (0x00052bbf) wait_anim_pane

0x9956,	// (0x00052bbf) wait_border_pane

0x9866,	// (0x00052acf) wait_anim_pane_g1

0x9866,	// (0x00052acf) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00058971) wait_anim_pane_g

0x2dd7,	// (0x0004c040) wait_border_pane_g1

0x2de2,	// (0x0004c04b) wait_border_pane_g2

0x2deb,	// (0x0004c054) wait_border_pane_g3

0x0002,

0xf841,	// (0x00058aaa) wait_border_pane_g

0x2c41,	// (0x0004beaa) bg_popup_window_pane_cp16_ParamLimits

0x2c41,	// (0x0004beaa) bg_popup_window_pane_cp16

0x2d41,	// (0x0004bfaa) indicator_popup_pane_cp4_ParamLimits

0x2d41,	// (0x0004bfaa) indicator_popup_pane_cp4

0x2d55,	// (0x0004bfbe) popup_query_data_window_t1_ParamLimits

0x2d55,	// (0x0004bfbe) popup_query_data_window_t1

0x2d67,	// (0x0004bfd0) popup_query_data_window_t2_ParamLimits

0x2d67,	// (0x0004bfd0) popup_query_data_window_t2

0x2d80,	// (0x0004bfe9) popup_query_data_window_t3_ParamLimits

0x2d80,	// (0x0004bfe9) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x00058aa3) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x00058aa3) popup_query_data_window_t

0x2d9a,	// (0x0004c003) query_popup_data_pane_ParamLimits

0x2d9a,	// (0x0004c003) query_popup_data_pane

0x2dae,	// (0x0004c017) query_popup_data_pane_cp1_ParamLimits

0x2dae,	// (0x0004c017) query_popup_data_pane_cp1

0x2c41,	// (0x0004beaa) bg_popup_window_pane_cp10_ParamLimits

0x2c41,	// (0x0004beaa) bg_popup_window_pane_cp10

0x2c73,	// (0x0004bedc) indicator_popup_pane_ParamLimits

0x2c73,	// (0x0004bedc) indicator_popup_pane

0x2c95,	// (0x0004befe) popup_query_code_window_t1_ParamLimits

0x2c95,	// (0x0004befe) popup_query_code_window_t1

0x2caf,	// (0x0004bf18) popup_query_code_window_t2_ParamLimits

0x2caf,	// (0x0004bf18) popup_query_code_window_t2

0x2cf8,	// (0x0004bf61) popup_query_code_window_t3_ParamLimits

0x2cf8,	// (0x0004bf61) popup_query_code_window_t3

0x0002,

0xf833,	// (0x00058a9c) popup_query_code_window_t_ParamLimits

0xf833,	// (0x00058a9c) popup_query_code_window_t

0x2d27,	// (0x0004bf90) query_popup_pane_ParamLimits

0x2d27,	// (0x0004bf90) query_popup_pane

0x9f94,	// (0x000531fd) bg_popup_window_pane_cp15_ParamLimits

0x9f94,	// (0x000531fd) bg_popup_window_pane_cp15

0x9fb4,	// (0x0005321d) indicator_popup_pane_cp1_ParamLimits

0x9fb4,	// (0x0005321d) indicator_popup_pane_cp1

0x9fc7,	// (0x00053230) indicator_popup_pane_cp2_ParamLimits

0x9fc7,	// (0x00053230) indicator_popup_pane_cp2

0x9fe2,	// (0x0005324b) popup_query_data_code_window_g1_ParamLimits

0x9fe2,	// (0x0005324b) popup_query_data_code_window_g1

0x9ff5,	// (0x0005325e) popup_query_data_code_window_t1_ParamLimits

0x9ff5,	// (0x0005325e) popup_query_data_code_window_t1

0xa007,	// (0x00053270) popup_query_data_code_window_t2_ParamLimits

0xa007,	// (0x00053270) popup_query_data_code_window_t2

0xa019,	// (0x00053282) popup_query_data_code_window_t3_ParamLimits

0xa019,	// (0x00053282) popup_query_data_code_window_t3

0xa02f,	// (0x00053298) popup_query_data_code_window_t4_ParamLimits

0xa02f,	// (0x00053298) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000587f3) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000587f3) popup_query_data_code_window_t

0xe5af,	// (0x00057818) list_single_midp_graphic_pane_g3

0xa049,	// (0x000532b2) query_popup_data_pane_cp2_ParamLimits

0xa05c,	// (0x000532c5) query_popup_pane_cp2_ParamLimits

0xa05c,	// (0x000532c5) query_popup_pane_cp2

0x9956,	// (0x00052bbf) bg_popup_window_pane_cp11

0x2c2d,	// (0x0004be96) heading_pane_cp5

0xa14f,	// (0x000533b8) listscroll_popup_info_pane

0x9956,	// (0x00052bbf) input_focus_pane_cp3

0xa077,	// (0x000532e0) query_popup_pane_t1

0xa085,	// (0x000532ee) list_popup_info_pane_ParamLimits

0xa085,	// (0x000532ee) list_popup_info_pane

0xa094,	// (0x000532fd) listscroll_popup_info_pane_g1

0xa09c,	// (0x00053305) scroll_pane_cp7

0xa0a6,	// (0x0005330f) popup_info_list_pane_t1_ParamLimits

0xa0a6,	// (0x0005330f) popup_info_list_pane_t1

0xa0c0,	// (0x00053329) popup_info_list_pane_t2_ParamLimits

0xa0c0,	// (0x00053329) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000587fc) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000587fc) popup_info_list_pane_t

0x9956,	// (0x00052bbf) bg_popup_window_pane_cp12

0x4004,	// (0x0004d26d) find_popup_pane

0x9be3,	// (0x00052e4c) bg_popup_window_pane_cp3

0xa0da,	// (0x00053343) heading_pane_cp3

0xa0e6,	// (0x0005334f) listscroll_popup_graphic_pane

0x9956,	// (0x00052bbf) bg_popup_window_pane_cp4

0xa145,	// (0x000533ae) heading_pane_cp4

0xa14f,	// (0x000533b8) listscroll_popup_colour_pane

0xa157,	// (0x000533c0) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa157,	// (0x000533c0) cell_large_graphic_colour_none_popup_pane

0xa16b,	// (0x000533d4) grid_large_graphic_colour_popup_pane_ParamLimits

0xa16b,	// (0x000533d4) grid_large_graphic_colour_popup_pane

0xa18f,	// (0x000533f8) listscroll_popup_colour_pane_g1_ParamLimits

0xa18f,	// (0x000533f8) listscroll_popup_colour_pane_g1

0xa1a6,	// (0x0005340f) listscroll_popup_colour_pane_g2_ParamLimits

0xa1a6,	// (0x0005340f) listscroll_popup_colour_pane_g2

0xa1bd,	// (0x00053426) listscroll_popup_colour_pane_g3_ParamLimits

0xa1bd,	// (0x00053426) listscroll_popup_colour_pane_g3

0xa1cd,	// (0x00053436) listscroll_popup_colour_pane_g4_ParamLimits

0xa1cd,	// (0x00053436) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00058801) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00058801) listscroll_popup_colour_pane_g

0xa1dd,	// (0x00053446) scroll_pane_cp6_ParamLimits

0xa1dd,	// (0x00053446) scroll_pane_cp6

0xa1ef,	// (0x00053458) cell_large_graphic_colour_popup_pane_ParamLimits

0xa1ef,	// (0x00053458) cell_large_graphic_colour_popup_pane

0xa210,	// (0x00053479) cell_large_graphic_colour_none_popup_pane_t1

0x9956,	// (0x00052bbf) grid_highlight_pane_cp5

0xa21f,	// (0x00053488) cell_large_graphic_colour_popup_pane_g1

0xa227,	// (0x00053490) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005880a) cell_large_graphic_colour_popup_pane_g

0xa22f,	// (0x00053498) cell_large_graphic_colour_popup_pane_g2_copy1

0xa238,	// (0x000534a1) grid_highlight_pane_cp4

0xa240,	// (0x000534a9) bg_popup_window_pane_cp8_ParamLimits

0xa240,	// (0x000534a9) bg_popup_window_pane_cp8

0xa25b,	// (0x000534c4) popup_snote_single_text_window_g1_ParamLimits

0xa25b,	// (0x000534c4) popup_snote_single_text_window_g1

0xa26d,	// (0x000534d6) popup_snote_single_text_window_t1_ParamLimits

0xa26d,	// (0x000534d6) popup_snote_single_text_window_t1

0xa280,	// (0x000534e9) popup_snote_single_text_window_t2_ParamLimits

0xa280,	// (0x000534e9) popup_snote_single_text_window_t2

0xa293,	// (0x000534fc) popup_snote_single_text_window_t3_ParamLimits

0xa293,	// (0x000534fc) popup_snote_single_text_window_t3

0xa2cc,	// (0x00053535) popup_snote_single_text_window_t4_ParamLimits

0xa2cc,	// (0x00053535) popup_snote_single_text_window_t4

0xa300,	// (0x00053569) popup_snote_single_text_window_t5_ParamLimits

0xa300,	// (0x00053569) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005880f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005880f) popup_snote_single_text_window_t

0xa32f,	// (0x00053598) bg_popup_window_pane_cp9_ParamLimits

0xa32f,	// (0x00053598) bg_popup_window_pane_cp9

0xa25b,	// (0x000534c4) popup_snote_single_graphic_window_g1_ParamLimits

0xa25b,	// (0x000534c4) popup_snote_single_graphic_window_g1

0xa33d,	// (0x000535a6) popup_snote_single_graphic_window_g2_ParamLimits

0xa33d,	// (0x000535a6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005881a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005881a) popup_snote_single_graphic_window_g

0xa349,	// (0x000535b2) popup_snote_single_graphic_window_t1_ParamLimits

0xa349,	// (0x000535b2) popup_snote_single_graphic_window_t1

0xa35c,	// (0x000535c5) popup_snote_single_graphic_window_t2_ParamLimits

0xa35c,	// (0x000535c5) popup_snote_single_graphic_window_t2

0xa36f,	// (0x000535d8) popup_snote_single_graphic_window_t3_ParamLimits

0xa36f,	// (0x000535d8) popup_snote_single_graphic_window_t3

0xa3a8,	// (0x00053611) popup_snote_single_graphic_window_t4_ParamLimits

0xa3a8,	// (0x00053611) popup_snote_single_graphic_window_t4

0xa3dc,	// (0x00053645) popup_snote_single_graphic_window_t5_ParamLimits

0xa3dc,	// (0x00053645) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005881f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005881f) popup_snote_single_graphic_window_t

0x3f42,	// (0x0004d1ab) grid_graphic_popup_pane_ParamLimits

0x3f42,	// (0x0004d1ab) grid_graphic_popup_pane

0x3f70,	// (0x0004d1d9) listscroll_popup_graphic_pane_g1_ParamLimits

0x3f70,	// (0x0004d1d9) listscroll_popup_graphic_pane_g1

0xca08,	// (0x00055c71) listscroll_popup_graphic_pane_g2_ParamLimits

0xca08,	// (0x00055c71) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x00058c19) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x00058c19) listscroll_popup_graphic_pane_g

0x3f98,	// (0x0004d201) scroll_pane_cp5

0xc9a7,	// (0x00055c10) cell_graphic_popup_pane_ParamLimits

0xc9a7,	// (0x00055c10) cell_graphic_popup_pane

0x3eb8,	// (0x0004d121) cell_graphic_popup_pane_g1

0x3ec0,	// (0x0004d129) cell_graphic_popup_pane_g2

0xa22f,	// (0x00053498) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x00058c12) cell_graphic_popup_pane_g

0x3ec9,	// (0x0004d132) cell_graphic_popup_pane_t2

0xa238,	// (0x000534a1) grid_highlight_pane_cp3

0xa41d,	// (0x00053686) list_gen_pane_ParamLimits

0xa41d,	// (0x00053686) list_gen_pane

0xa44f,	// (0x000536b8) scroll_pane

0xc95e,	// (0x00055bc7) bg_list_pane_g1_ParamLimits

0xc95e,	// (0x00055bc7) bg_list_pane_g1

0x3e2d,	// (0x0004d096) bg_list_pane_g2_ParamLimits

0x3e2d,	// (0x0004d096) bg_list_pane_g2

0x3e42,	// (0x0004d0ab) bg_list_pane_g3_ParamLimits

0x3e42,	// (0x0004d0ab) bg_list_pane_g3

0x3e56,	// (0x0004d0bf) bg_list_pane_g4_ParamLimits

0x3e56,	// (0x0004d0bf) bg_list_pane_g4

0xc97b,	// (0x00055be4) bg_list_pane_g5_ParamLimits

0xc97b,	// (0x00055be4) bg_list_pane_g5

0x0004,

0xf99e,	// (0x00058c07) bg_list_pane_g_ParamLimits

0xf99e,	// (0x00058c07) bg_list_pane_g

0xbb05,	// (0x00054d6e) list_double2_graphic_large_graphic_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double2_graphic_large_graphic_pane

0xbb05,	// (0x00054d6e) list_double2_graphic_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double2_graphic_pane

0xbb05,	// (0x00054d6e) list_double2_large_graphic_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double2_large_graphic_pane

0xbb05,	// (0x00054d6e) list_double2_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double2_pane

0xbb05,	// (0x00054d6e) list_double_graphic_heading_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_graphic_heading_pane

0xbb05,	// (0x00054d6e) list_double_graphic_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_graphic_pane

0xbb05,	// (0x00054d6e) list_double_heading_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_heading_pane

0xbb05,	// (0x00054d6e) list_double_large_graphic_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_large_graphic_pane

0xbb05,	// (0x00054d6e) list_double_number_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_number_pane

0xbb05,	// (0x00054d6e) list_double_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_pane

0xbb05,	// (0x00054d6e) list_double_time_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_double_time_pane

0xbb05,	// (0x00054d6e) list_setting_number_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_setting_number_pane

0xbb05,	// (0x00054d6e) list_setting_pane_ParamLimits

0xbb05,	// (0x00054d6e) list_setting_pane

0xc921,	// (0x00055b8a) list_single_2graphic_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_2graphic_pane

0xc921,	// (0x00055b8a) list_single_graphic_heading_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_graphic_heading_pane

0xc921,	// (0x00055b8a) list_single_graphic_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_graphic_pane

0xc921,	// (0x00055b8a) list_single_heading_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_heading_pane

0xc921,	// (0x00055b8a) list_single_large_graphic_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_large_graphic_pane

0xc921,	// (0x00055b8a) list_single_number_heading_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_number_heading_pane

0xc921,	// (0x00055b8a) list_single_number_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_number_pane

0xc921,	// (0x00055b8a) list_single_pane_ParamLimits

0xc921,	// (0x00055b8a) list_single_pane

0x9956,	// (0x00052bbf) list_highlight_pane_cp1

0xe305,	// (0x0005756e) list_single_pane_g1_ParamLimits

0xe305,	// (0x0005756e) list_single_pane_g1

0x0c3c,	// (0x00049ea5) list_single_pane_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005883b) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005883b) list_single_pane_g

0xee7e,	// (0x000580e7) list_single_pane_t1_ParamLimits

0xee7e,	// (0x000580e7) list_single_pane_t1

0xe305,	// (0x0005756e) list_single_number_pane_g1_ParamLimits

0xe305,	// (0x0005756e) list_single_number_pane_g1

0x0c3c,	// (0x00049ea5) list_single_number_pane_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005883b) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005883b) list_single_number_pane_g

0xe952,	// (0x00057bbb) list_single_number_pane_t1_ParamLimits

0xe952,	// (0x00057bbb) list_single_number_pane_t1

0xee6c,	// (0x000580d5) list_single_number_pane_t2_ParamLimits

0xee6c,	// (0x000580d5) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x00058bc8) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x00058bc8) list_single_number_pane_t

0x903f,	// (0x000522a8) list_single_graphic_pane_g1_ParamLimits

0x903f,	// (0x000522a8) list_single_graphic_pane_g1

0xe305,	// (0x0005756e) list_single_graphic_pane_g2_ParamLimits

0xe305,	// (0x0005756e) list_single_graphic_pane_g2

0x0c3c,	// (0x00049ea5) list_single_graphic_pane_g3_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005882a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005882a) list_single_graphic_pane_g

0x904b,	// (0x000522b4) list_single_graphic_pane_t1_ParamLimits

0x904b,	// (0x000522b4) list_single_graphic_pane_t1

0x9061,	// (0x000522ca) list_single_heading_pane_g1_ParamLimits

0x9061,	// (0x000522ca) list_single_heading_pane_g1

0x0c3c,	// (0x00049ea5) list_single_heading_pane_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00058831) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00058831) list_single_heading_pane_g

0x9074,	// (0x000522dd) list_single_heading_pane_t1_ParamLimits

0x9074,	// (0x000522dd) list_single_heading_pane_t1

0xa483,	// (0x000536ec) list_single_heading_pane_t2_ParamLimits

0xa483,	// (0x000536ec) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00058836) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00058836) list_single_heading_pane_t

0xe305,	// (0x0005756e) list_single_number_heading_pane_g1_ParamLimits

0xe305,	// (0x0005756e) list_single_number_heading_pane_g1

0x0c3c,	// (0x00049ea5) list_single_number_heading_pane_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005883b) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005883b) list_single_number_heading_pane_g

0x908a,	// (0x000522f3) list_single_number_heading_pane_t1_ParamLimits

0x908a,	// (0x000522f3) list_single_number_heading_pane_t1

0xeda1,	// (0x0005800a) list_single_number_heading_pane_t2_ParamLimits

0xeda1,	// (0x0005800a) list_single_number_heading_pane_t2

0xedb3,	// (0x0005801c) list_single_number_heading_pane_t3_ParamLimits

0xedb3,	// (0x0005801c) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x00058840) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x00058840) list_single_number_heading_pane_t

0x90a0,	// (0x00052309) list_single_graphic_heading_pane_g1_ParamLimits

0x90a0,	// (0x00052309) list_single_graphic_heading_pane_g1

0xa495,	// (0x000536fe) list_single_graphic_heading_pane_g4_ParamLimits

0xa495,	// (0x000536fe) list_single_graphic_heading_pane_g4

0x0c3c,	// (0x00049ea5) list_single_graphic_heading_pane_g5_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00058847) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00058847) list_single_graphic_heading_pane_g

0x908a,	// (0x000522f3) list_single_graphic_heading_pane_t1_ParamLimits

0x908a,	// (0x000522f3) list_single_graphic_heading_pane_t1

0x90b8,	// (0x00052321) list_single_graphic_heading_pane_t2_ParamLimits

0x90b8,	// (0x00052321) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005884e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005884e) list_single_graphic_heading_pane_t

0x10ce,	// (0x0004a337) list_single_large_graphic_pane_g1_ParamLimits

0x10ce,	// (0x0004a337) list_single_large_graphic_pane_g1

0xe305,	// (0x0005756e) list_single_large_graphic_pane_g2_ParamLimits

0xe305,	// (0x0005756e) list_single_large_graphic_pane_g2

0x0c3c,	// (0x00049ea5) list_single_large_graphic_pane_g3_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00058853) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00058853) list_single_large_graphic_pane_g

0x2de2,	// (0x0004c04b) wait_border_pane_g2_copy1

0xa4a6,	// (0x0005370f) list_single_large_graphic_pane_g4_cp2

0xedc5,	// (0x0005802e) list_single_large_graphic_pane_t1_ParamLimits

0xedc5,	// (0x0005802e) list_single_large_graphic_pane_t1

0x541b,	// (0x0004e684) list_double_pane_g1_ParamLimits

0x541b,	// (0x0004e684) list_double_pane_g1

0x90d0,	// (0x00052339) list_double_pane_g2_ParamLimits

0x90d0,	// (0x00052339) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005885a) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005885a) list_double_pane_g

0x90dc,	// (0x00052345) list_double_pane_t1_ParamLimits

0x90dc,	// (0x00052345) list_double_pane_t1

0x90f2,	// (0x0005235b) list_double_pane_t2_ParamLimits

0x90f2,	// (0x0005235b) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005885f) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005885f) list_double_pane_t

0x9104,	// (0x0005236d) list_double2_pane_g1_ParamLimits

0x9104,	// (0x0005236d) list_double2_pane_g1

0x9115,	// (0x0005237e) list_double2_pane_g2_ParamLimits

0x9115,	// (0x0005237e) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00058864) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00058864) list_double2_pane_g

0x9121,	// (0x0005238a) list_double2_pane_t1_ParamLimits

0x9121,	// (0x0005238a) list_double2_pane_t1

0x9137,	// (0x000523a0) list_double2_pane_t2_ParamLimits

0x9137,	// (0x000523a0) list_double2_pane_t2

0x0001,

0xf600,	// (0x00058869) list_double2_pane_t_ParamLimits

0xf600,	// (0x00058869) list_double2_pane_t

0x541b,	// (0x0004e684) list_double_number_pane_g1_ParamLimits

0x541b,	// (0x0004e684) list_double_number_pane_g1

0x90d0,	// (0x00052339) list_double_number_pane_g2_ParamLimits

0x90d0,	// (0x00052339) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005885a) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005885a) list_double_number_pane_g

0x9149,	// (0x000523b2) list_double_number_pane_t1_ParamLimits

0x9149,	// (0x000523b2) list_double_number_pane_t1

0x915b,	// (0x000523c4) list_double_number_pane_t2_ParamLimits

0x915b,	// (0x000523c4) list_double_number_pane_t2

0x9171,	// (0x000523da) list_double_number_pane_t3_ParamLimits

0x9171,	// (0x000523da) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005886e) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005886e) list_double_number_pane_t

0x9183,	// (0x000523ec) list_double_graphic_pane_g1_ParamLimits

0x9183,	// (0x000523ec) list_double_graphic_pane_g1

0x918f,	// (0x000523f8) list_double_graphic_pane_g2_ParamLimits

0x918f,	// (0x000523f8) list_double_graphic_pane_g2

0x919e,	// (0x00052407) list_double_graphic_pane_g3_ParamLimits

0x919e,	// (0x00052407) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00058875) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00058875) list_double_graphic_pane_g

0x91b6,	// (0x0005241f) list_double_graphic_pane_t1_ParamLimits

0x91b6,	// (0x0005241f) list_double_graphic_pane_t1

0x91cc,	// (0x00052435) list_double_graphic_pane_t2_ParamLimits

0x91cc,	// (0x00052435) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005887e) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005887e) list_double_graphic_pane_t

0x91de,	// (0x00052447) list_double2_graphic_pane_g1_ParamLimits

0x91de,	// (0x00052447) list_double2_graphic_pane_g1

0xa4ae,	// (0x00053717) list_double2_graphic_pane_g2_ParamLimits

0xa4ae,	// (0x00053717) list_double2_graphic_pane_g2

0xa4ba,	// (0x00053723) list_double2_graphic_pane_g3_ParamLimits

0xa4ba,	// (0x00053723) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00058883) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00058883) list_double2_graphic_pane_g

0x91ea,	// (0x00052453) list_double2_graphic_pane_t1_ParamLimits

0x91ea,	// (0x00052453) list_double2_graphic_pane_t1

0x9200,	// (0x00052469) list_double2_graphic_pane_t2_ParamLimits

0x9200,	// (0x00052469) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005888a) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005888a) list_double2_graphic_pane_t

0x9212,	// (0x0005247b) list_double_large_graphic_pane_g1_ParamLimits

0x9212,	// (0x0005247b) list_double_large_graphic_pane_g1

0x9231,	// (0x0005249a) list_double_large_graphic_pane_g2_ParamLimits

0x9231,	// (0x0005249a) list_double_large_graphic_pane_g2

0x90d0,	// (0x00052339) list_double_large_graphic_pane_g3_ParamLimits

0x90d0,	// (0x00052339) list_double_large_graphic_pane_g3

0x9247,	// (0x000524b0) list_double_large_graphic_pane_g4_ParamLimits

0x9247,	// (0x000524b0) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005888f) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005888f) list_double_large_graphic_pane_g

0x925a,	// (0x000524c3) list_double_large_graphic_pane_t1_ParamLimits

0x925a,	// (0x000524c3) list_double_large_graphic_pane_t1

0x9273,	// (0x000524dc) list_double_large_graphic_pane_t2_ParamLimits

0x9273,	// (0x000524dc) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005889a) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005889a) list_double_large_graphic_pane_t

0xa4c6,	// (0x0005372f) list_double2_large_graphic_pane_g1_ParamLimits

0xa4c6,	// (0x0005372f) list_double2_large_graphic_pane_g1

0xa4d2,	// (0x0005373b) list_double2_large_graphic_pane_g2_ParamLimits

0xa4d2,	// (0x0005373b) list_double2_large_graphic_pane_g2

0xa4ba,	// (0x00053723) list_double2_large_graphic_pane_g3_ParamLimits

0xa4ba,	// (0x00053723) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005889f) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005889f) list_double2_large_graphic_pane_g

0x9285,	// (0x000524ee) list_double2_large_graphic_pane_t1_ParamLimits

0x9285,	// (0x000524ee) list_double2_large_graphic_pane_t1

0x929b,	// (0x00052504) list_double2_large_graphic_pane_t2_ParamLimits

0x929b,	// (0x00052504) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x000588a6) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x000588a6) list_double2_large_graphic_pane_t

0x92ad,	// (0x00052516) list_double_heading_pane_g1_ParamLimits

0x92ad,	// (0x00052516) list_double_heading_pane_g1

0xa4e3,	// (0x0005374c) list_double_heading_pane_g2_ParamLimits

0xa4e3,	// (0x0005374c) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x000588ab) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x000588ab) list_double_heading_pane_g

0x92be,	// (0x00052527) list_double_heading_pane_t1_ParamLimits

0x92be,	// (0x00052527) list_double_heading_pane_t1

0x92d4,	// (0x0005253d) list_double_heading_pane_t2_ParamLimits

0x92d4,	// (0x0005253d) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x000588b0) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x000588b0) list_double_heading_pane_t

0x92e6,	// (0x0005254f) list_double_graphic_heading_pane_g1_ParamLimits

0x92e6,	// (0x0005254f) list_double_graphic_heading_pane_g1

0x92ad,	// (0x00052516) list_double_graphic_heading_pane_g2_ParamLimits

0x92ad,	// (0x00052516) list_double_graphic_heading_pane_g2

0xa4e3,	// (0x0005374c) list_double_graphic_heading_pane_g3_ParamLimits

0xa4e3,	// (0x0005374c) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x000588b5) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x000588b5) list_double_graphic_heading_pane_g

0x92f2,	// (0x0005255b) list_double_graphic_heading_pane_t1_ParamLimits

0x92f2,	// (0x0005255b) list_double_graphic_heading_pane_t1

0x9308,	// (0x00052571) list_double_graphic_heading_pane_t2_ParamLimits

0x9308,	// (0x00052571) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x000588bc) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x000588bc) list_double_graphic_heading_pane_t

0x931a,	// (0x00052583) list_double_time_pane_g1_ParamLimits

0x931a,	// (0x00052583) list_double_time_pane_g1

0x932b,	// (0x00052594) list_double_time_pane_g2_ParamLimits

0x932b,	// (0x00052594) list_double_time_pane_g2

0x0001,

0xf658,	// (0x000588c1) list_double_time_pane_g_ParamLimits

0xf658,	// (0x000588c1) list_double_time_pane_g

0x9337,	// (0x000525a0) list_double_time_pane_t1_ParamLimits

0x9337,	// (0x000525a0) list_double_time_pane_t1

0x934d,	// (0x000525b6) list_double_time_pane_t2_ParamLimits

0x934d,	// (0x000525b6) list_double_time_pane_t2

0x935f,	// (0x000525c8) list_double_time_pane_t3_ParamLimits

0x935f,	// (0x000525c8) list_double_time_pane_t3

0x9371,	// (0x000525da) list_double_time_pane_t4_ParamLimits

0x9371,	// (0x000525da) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x000588c6) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x000588c6) list_double_time_pane_t

0x9383,	// (0x000525ec) list_setting_pane_g1_ParamLimits

0x9383,	// (0x000525ec) list_setting_pane_g1

0x938f,	// (0x000525f8) list_setting_pane_g2_ParamLimits

0x938f,	// (0x000525f8) list_setting_pane_g2

0x0001,

0xf666,	// (0x000588cf) list_setting_pane_g_ParamLimits

0xf666,	// (0x000588cf) list_setting_pane_g

0x939b,	// (0x00052604) list_setting_pane_t1_ParamLimits

0x939b,	// (0x00052604) list_setting_pane_t1

0x93b5,	// (0x0005261e) list_setting_pane_t2_ParamLimits

0x93b5,	// (0x0005261e) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000588d4) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000588d4) list_setting_pane_t

0x93f4,	// (0x0005265d) set_value_pane_cp_ParamLimits

0x93f4,	// (0x0005265d) set_value_pane_cp

0x9402,	// (0x0005266b) list_setting_number_pane_g1_ParamLimits

0x9402,	// (0x0005266b) list_setting_number_pane_g1

0x940e,	// (0x00052677) list_setting_number_pane_g2_ParamLimits

0x940e,	// (0x00052677) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000588db) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000588db) list_setting_number_pane_g

0x941a,	// (0x00052683) list_setting_number_pane_t1_ParamLimits

0x941a,	// (0x00052683) list_setting_number_pane_t1

0x9433,	// (0x0005269c) list_setting_number_pane_t2_ParamLimits

0x9433,	// (0x0005269c) list_setting_number_pane_t2

0x944d,	// (0x000526b6) list_setting_number_pane_t3_ParamLimits

0x944d,	// (0x000526b6) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000588e0) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000588e0) list_setting_number_pane_t

0x93f4,	// (0x0005265d) set_value_pane_ParamLimits

0x93f4,	// (0x0005265d) set_value_pane

0xa4ef,	// (0x00053758) bg_set_opt_pane_ParamLimits

0xa4ef,	// (0x00053758) bg_set_opt_pane

0xe311,	// (0x0005757a) set_value_pane_t1

0xa510,	// (0x00053779) slider_set_pane_cp3

0xa519,	// (0x00053782) volume_small_pane_cp

0xa522,	// (0x0005378b) list_form_gen_pane

0xa52b,	// (0x00053794) scroll_pane_cp8

0x9490,	// (0x000526f9) form_field_data_pane_ParamLimits

0x9490,	// (0x000526f9) form_field_data_pane

0x94ad,	// (0x00052716) form_field_data_wide_pane_ParamLimits

0x94ad,	// (0x00052716) form_field_data_wide_pane

0x94d1,	// (0x0005273a) form_field_popup_pane_ParamLimits

0x94d1,	// (0x0005273a) form_field_popup_pane

0xe32f,	// (0x00057598) form_field_popup_wide_pane_ParamLimits

0xe32f,	// (0x00057598) form_field_popup_wide_pane

0xe350,	// (0x000575b9) form_field_slider_pane_ParamLimits

0xe350,	// (0x000575b9) form_field_slider_pane

0xe363,	// (0x000575cc) form_field_slider_wide_pane_ParamLimits

0xe363,	// (0x000575cc) form_field_slider_wide_pane

0xa53c,	// (0x000537a5) data_form_pane

0x94fd,	// (0x00052766) form_field_data_pane_t1

0xa548,	// (0x000537b1) input_focus_pane

0xe376,	// (0x000575df) data_form_wide_pane

0xe393,	// (0x000575fc) form_field_data_wide_pane_t1

0xa24d,	// (0x000534b6) input_focus_pane_cp6

0x9517,	// (0x00052780) form_field_popup_pane_t1

0xa548,	// (0x000537b1) input_focus_pane_cp7

0xa576,	// (0x000537df) list_form_pane

0xe3bd,	// (0x00057626) form_field_popup_wide_pane_t1

0xa548,	// (0x000537b1) input_focus_pane_cp8

0xa582,	// (0x000537eb) list_form_wide_pane

0x9539,	// (0x000527a2) form_field_slider_pane_t1_ParamLimits

0x9539,	// (0x000527a2) form_field_slider_pane_t1

0x9551,	// (0x000527ba) form_field_slider_pane_t2_ParamLimits

0x9551,	// (0x000527ba) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000588f0) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000588f0) form_field_slider_pane_t

0x9ba1,	// (0x00052e0a) input_focus_pane_cp9_ParamLimits

0x9ba1,	// (0x00052e0a) input_focus_pane_cp9

0x9566,	// (0x000527cf) slider_cont_pane_ParamLimits

0x9566,	// (0x000527cf) slider_cont_pane

0xa58e,	// (0x000537f7) form_field_slider_wide_pane_t1_ParamLimits

0xa58e,	// (0x000537f7) form_field_slider_wide_pane_t1

0xe3d2,	// (0x0005763b) form_field_slider_wide_pane_t2_ParamLimits

0xe3d2,	// (0x0005763b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000588f5) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000588f5) form_field_slider_wide_pane_t

0x9ba1,	// (0x00052e0a) input_focus_pane_cp10_ParamLimits

0x9ba1,	// (0x00052e0a) input_focus_pane_cp10

0x957a,	// (0x000527e3) slider_cont_pane_cp1_ParamLimits

0x957a,	// (0x000527e3) slider_cont_pane_cp1

0x958e,	// (0x000527f7) slider_form_pane_cp

0xa5a0,	// (0x00053809) input_focus_pane_g1

0xa5a8,	// (0x00053811) input_focus_pane_g2

0xa5b0,	// (0x00053819) input_focus_pane_g3

0xa5b8,	// (0x00053821) input_focus_pane_g4

0xa5c0,	// (0x00053829) input_focus_pane_g5

0xa5c8,	// (0x00053831) input_focus_pane_g6

0xa5d0,	// (0x00053839) input_focus_pane_g7

0xa5d8,	// (0x00053841) input_focus_pane_g8

0xa5e0,	// (0x00053849) input_focus_pane_g9

0x9866,	// (0x00052acf) input_focus_pane_g10

0x0009,

0xf691,	// (0x000588fa) input_focus_pane_g

0x2deb,	// (0x0004c054) wait_border_pane_g3_copy1

0x9596,	// (0x000527ff) data_form_pane_t1

0x9866,	// (0x00052acf) wait_anim_pane_g1_copy1

0x9680,	// (0x000528e9) data_form_wide_pane_t1

0xe3e4,	// (0x0005764d) list_form_graphic_pane_cp_ParamLimits

0xe3e4,	// (0x0005764d) list_form_graphic_pane_cp

0x3d37,	// (0x0004cfa0) slider_form_pane_g1

0x3d40,	// (0x0004cfa9) slider_form_pane_g2

0x0006,

0xf98f,	// (0x00058bf8) slider_form_pane_g

0x95b2,	// (0x0005281b) list_form_graphic_pane_ParamLimits

0x95b2,	// (0x0005281b) list_form_graphic_pane

0xe3f6,	// (0x0005765f) list_form_graphic_pane_g1

0xe3fe,	// (0x00057667) list_form_graphic_pane_t1_ParamLimits

0xe3fe,	// (0x00057667) list_form_graphic_pane_t1

0x9be3,	// (0x00052e4c) list_highlight_pane_cp5_ParamLimits

0x9be3,	// (0x00052e4c) list_highlight_pane_cp5

0x95c3,	// (0x0005282c) find_pane_g1

0xa5e8,	// (0x00053851) input_find_pane

0x95cc,	// (0x00052835) input_find_pane_g1_ParamLimits

0x95cc,	// (0x00052835) input_find_pane_g1

0x95d8,	// (0x00052841) input_find_pane_t1_ParamLimits

0x95d8,	// (0x00052841) input_find_pane_t1

0x95ed,	// (0x00052856) input_find_pane_t2_ParamLimits

0x95ed,	// (0x00052856) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005890f) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005890f) input_find_pane_t

0xa5f1,	// (0x0005385a) input_focus_pane_cp5_ParamLimits

0xa5f1,	// (0x0005385a) input_focus_pane_cp5

0xa60b,	// (0x00053874) bg_popup_window_pane_cp2_ParamLimits

0xa60b,	// (0x00053874) bg_popup_window_pane_cp2

0xa618,	// (0x00053881) listscroll_menu_pane_ParamLimits

0xa618,	// (0x00053881) listscroll_menu_pane

0xa624,	// (0x0005388d) popup_submenu_window_ParamLimits

0xa624,	// (0x0005388d) popup_submenu_window

0xa654,	// (0x000538bd) find_popup_pane_g1

0xa65c,	// (0x000538c5) input_popup_find_pane_cp

0xa5f1,	// (0x0005385a) input_focus_pane_cp4_ParamLimits

0xa5f1,	// (0x0005385a) input_focus_pane_cp4

0xa674,	// (0x000538dd) input_popup_find_pane_t1_ParamLimits

0xa674,	// (0x000538dd) input_popup_find_pane_t1

0x9956,	// (0x00052bbf) bg_popup_sub_pane_cp

0xa6a2,	// (0x0005390b) listscroll_popup_sub_pane

0xa6aa,	// (0x00053913) list_submenu_pane_ParamLimits

0xa6aa,	// (0x00053913) list_submenu_pane

0xa6bb,	// (0x00053924) scroll_pane_cp4

0xa6c3,	// (0x0005392c) list_single_popup_submenu_pane_ParamLimits

0xa6c3,	// (0x0005392c) list_single_popup_submenu_pane

0xa6d8,	// (0x00053941) list_single_popup_submenu_pane_g1

0xa6e0,	// (0x00053949) list_single_popup_submenu_pane_t1_ParamLimits

0xa6e0,	// (0x00053949) list_single_popup_submenu_pane_t1

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp1_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp1

0xa6f5,	// (0x0005395e) tabs_2_active_pane_g1

0xa6fd,	// (0x00053966) tabs_2_active_pane_t1

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp1_ParamLimits

0x9ba1,	// (0x00052e0a) bg_passive_tab_pane_cp1

0xa6f5,	// (0x0005395e) tabs_2_passive_pane_g1

0xa6fd,	// (0x00053966) tabs_2_passive_pane_t1

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp4

0xa70f,	// (0x00053978) tabs_2_long_active_pane_t1

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp4

0x0c6d,	// (0x00049ed6) list_single_midp_graphic_pane_g4_ParamLimits

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp5

0xa722,	// (0x0005398b) tabs_3_long_active_pane_t1

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp5

0x0c6d,	// (0x00049ed6) list_single_midp_graphic_pane_g4

0x9be3,	// (0x00052e4c) bg_popup_window_pane_cp13_ParamLimits

0x9be3,	// (0x00052e4c) bg_popup_window_pane_cp13

0xa73d,	// (0x000539a6) listscroll_popup_fast_pane_ParamLimits

0xa73d,	// (0x000539a6) listscroll_popup_fast_pane

0xa74c,	// (0x000539b5) grid_popup_fast_pane_ParamLimits

0xa74c,	// (0x000539b5) grid_popup_fast_pane

0xa75e,	// (0x000539c7) scroll_pane_cp9_ParamLimits

0xa75e,	// (0x000539c7) scroll_pane_cp9

0x5667,	// (0x0004e8d0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5667,	// (0x0004e8d0) list_single_graphic_hl_pane_t1_cp2

0xa782,	// (0x000539eb) input_focus_pane_cp20_ParamLimits

0xa782,	// (0x000539eb) input_focus_pane_cp20

0xa790,	// (0x000539f9) query_popup_data_pane_t1_ParamLimits

0xa790,	// (0x000539f9) query_popup_data_pane_t1

0xa7a3,	// (0x00053a0c) query_popup_data_pane_t2_ParamLimits

0xa7a3,	// (0x00053a0c) query_popup_data_pane_t2

0xa7e9,	// (0x00053a52) query_popup_data_pane_t3_ParamLimits

0xa7e9,	// (0x00053a52) query_popup_data_pane_t3

0xa82a,	// (0x00053a93) query_popup_data_pane_t4_ParamLimits

0xa82a,	// (0x00053a93) query_popup_data_pane_t4

0xa866,	// (0x00053acf) query_popup_data_pane_t5_ParamLimits

0xa866,	// (0x00053acf) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00058914) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00058914) query_popup_data_pane_t

0xa5a0,	// (0x00053809) bg_set_opt_pane_g1

0xa5a8,	// (0x00053811) bg_set_opt_pane_g2

0xa5b0,	// (0x00053819) bg_set_opt_pane_g3

0xa5b8,	// (0x00053821) bg_set_opt_pane_g4

0xa5c0,	// (0x00053829) bg_set_opt_pane_g5

0xa5c8,	// (0x00053831) bg_set_opt_pane_g6

0xa5d0,	// (0x00053839) bg_set_opt_pane_g7

0xa5d8,	// (0x00053841) bg_set_opt_pane_g8

0xa5e0,	// (0x00053849) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005891f) bg_set_opt_pane_g

0x0192,	// (0x000493fb) control_top_pane_stacon_ParamLimits

0x0192,	// (0x000493fb) control_top_pane_stacon

0x01e5,	// (0x0004944e) signal_pane_stacon_ParamLimits

0x01e5,	// (0x0004944e) signal_pane_stacon

0xe41c,	// (0x00057685) stacon_top_pane_g1_ParamLimits

0xe41c,	// (0x00057685) stacon_top_pane_g1

0x020a,	// (0x00049473) title_pane_stacon_ParamLimits

0x020a,	// (0x00049473) title_pane_stacon

0x0234,	// (0x0004949d) uni_indicator_pane_stacon_ParamLimits

0x0234,	// (0x0004949d) uni_indicator_pane_stacon

0x0249,	// (0x000494b2) battery_pane_stacon_ParamLimits

0x0249,	// (0x000494b2) battery_pane_stacon

0x028d,	// (0x000494f6) control_bottom_pane_stacon_ParamLimits

0x028d,	// (0x000494f6) control_bottom_pane_stacon

0x02b0,	// (0x00049519) navi_pane_stacon_ParamLimits

0x02b0,	// (0x00049519) navi_pane_stacon

0xe43e,	// (0x000576a7) stacon_bottom_pane_g1_ParamLimits

0xe43e,	// (0x000576a7) stacon_bottom_pane_g1

0xf36e,	// (0x000585d7) aid_levels_signal_lsc_ParamLimits

0xf36e,	// (0x000585d7) aid_levels_signal_lsc

0xf385,	// (0x000585ee) signal_pane_stacon_g1_ParamLimits

0xf385,	// (0x000585ee) signal_pane_stacon_g1

0xf399,	// (0x00058602) signal_pane_stacon_g2_ParamLimits

0xf399,	// (0x00058602) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00058932) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00058932) signal_pane_stacon_g

0xf3ce,	// (0x00058637) title_pane_stacon_t1_ParamLimits

0xf3ce,	// (0x00058637) title_pane_stacon_t1

0xa8aa,	// (0x00053b13) uni_indicator_pane_stacon_g1

0xa8b4,	// (0x00053b1d) uni_indicator_pane_stacon_g2

0xa8be,	// (0x00053b27) uni_indicator_pane_stacon_g3

0xa8c8,	// (0x00053b31) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005893e) uni_indicator_pane_stacon_g

0xf3f3,	// (0x0005865c) control_top_pane_stacon_g1

0xf3fb,	// (0x00058664) control_top_pane_stacon_t1_ParamLimits

0xf3fb,	// (0x00058664) control_top_pane_stacon_t1

0xf432,	// (0x0005869b) aid_levels_battery_lsc_ParamLimits

0xf432,	// (0x0005869b) aid_levels_battery_lsc

0xf44a,	// (0x000586b3) battery_pane_stacon_g1_ParamLimits

0xf44a,	// (0x000586b3) battery_pane_stacon_g1

0xf45d,	// (0x000586c6) battery_pane_stacon_g2_ParamLimits

0xf45d,	// (0x000586c6) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00058947) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00058947) battery_pane_stacon_g

0xf49b,	// (0x00058704) navi_icon_pane_stacon

0xf4af,	// (0x00058718) navi_navi_pane_stacon

0xf49b,	// (0x00058704) navi_text_pane_stacon

0xf3f3,	// (0x0005865c) control_bottom_pane_stacon_g1

0xf4c5,	// (0x0005872e) control_bottom_pane_stacon_t1_ParamLimits

0xf4c5,	// (0x0005872e) control_bottom_pane_stacon_t1

0xa8ec,	// (0x00053b55) grid_app_pane_ParamLimits

0xa8ec,	// (0x00053b55) grid_app_pane

0xa924,	// (0x00053b8d) scroll_pane_cp15_ParamLimits

0xa924,	// (0x00053b8d) scroll_pane_cp15

0xa939,	// (0x00053ba2) cell_app_pane_ParamLimits

0xa939,	// (0x00053ba2) cell_app_pane

0xa986,	// (0x00053bef) cell_app_pane_g1_ParamLimits

0xa986,	// (0x00053bef) cell_app_pane_g1

0xa9aa,	// (0x00053c13) cell_app_pane_g2_ParamLimits

0xa9aa,	// (0x00053c13) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005894c) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005894c) cell_app_pane_g

0xa9b6,	// (0x00053c1f) cell_app_pane_t1_ParamLimits

0xa9b6,	// (0x00053c1f) cell_app_pane_t1

0xa9cd,	// (0x00053c36) grid_highlight_pane_ParamLimits

0xa9cd,	// (0x00053c36) grid_highlight_pane

0xa5a0,	// (0x00053809) cell_highlight_pane_g1

0xa5a8,	// (0x00053811) cell_highlight_pane_g2

0xa5b0,	// (0x00053819) cell_highlight_pane_g3

0xa5b8,	// (0x00053821) cell_highlight_pane_g4

0xa5c0,	// (0x00053829) cell_highlight_pane_g5

0xa5c8,	// (0x00053831) cell_highlight_pane_g6

0xa5d0,	// (0x00053839) cell_highlight_pane_g7

0xa5d8,	// (0x00053841) cell_highlight_pane_g8

0xa5e0,	// (0x00053849) cell_highlight_pane_g9

0x9866,	// (0x00052acf) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000588fa) cell_highlight_pane_g

0xa9e7,	// (0x00053c50) bg_scroll_pane

0xf506,	// (0x0005876f) scroll_handle_pane

0xaa2e,	// (0x00053c97) scroll_bg_pane_g1

0xaa43,	// (0x00053cac) scroll_bg_pane_g2

0xaa5b,	// (0x00053cc4) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00058951) scroll_bg_pane_g

0xaa70,	// (0x00053cd9) scroll_handle_focus_pane_ParamLimits

0xaa70,	// (0x00053cd9) scroll_handle_focus_pane

0xaa2e,	// (0x00053c97) scroll_handle_pane_g1

0xaa7d,	// (0x00053ce6) scroll_handle_pane_g2

0xaa5b,	// (0x00053cc4) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00058958) scroll_handle_pane_g

0xa5f1,	// (0x0005385a) bg_popup_sub_pane_cp21_ParamLimits

0xa5f1,	// (0x0005385a) bg_popup_sub_pane_cp21

0xaa91,	// (0x00053cfa) popup_fep_japan_predictive_window_t1_ParamLimits

0xaa91,	// (0x00053cfa) popup_fep_japan_predictive_window_t1

0xaaa8,	// (0x00053d11) popup_fep_japan_predictive_window_t2_ParamLimits

0xaaa8,	// (0x00053d11) popup_fep_japan_predictive_window_t2

0xc1d5,	// (0x0005543e) popup_fep_japan_predictive_window_t3_ParamLimits

0xc1d5,	// (0x0005543e) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005895f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005895f) popup_fep_japan_predictive_window_t

0x9956,	// (0x00052bbf) bg_popup_sub_pane_cp23

0xc20c,	// (0x00055475) listscroll_japin_cand_pane

0xc214,	// (0x0005547d) popup_fep_japan_candidate_window_t1

0xc222,	// (0x0005548b) candidate_pane_ParamLimits

0xc222,	// (0x0005548b) candidate_pane

0xc234,	// (0x0005549d) scroll_pane_cp30

0xc23e,	// (0x000554a7) list_single_popup_jap_candidate_pane_ParamLimits

0xc23e,	// (0x000554a7) list_single_popup_jap_candidate_pane

0x9956,	// (0x00052bbf) list_highlight_pane_cp30

0xc252,	// (0x000554bb) list_single_popup_jap_candidate_pane_t1

0xaadb,	// (0x00053d44) level_1_signal

0xaaed,	// (0x00053d56) level_2_signal

0xab00,	// (0x00053d69) level_3_signal

0xab13,	// (0x00053d7c) level_4_signal

0xab26,	// (0x00053d8f) level_5_signal

0xab39,	// (0x00053da2) level_6_signal

0xab4c,	// (0x00053db5) level_7_signal

0xaadb,	// (0x00053d44) level_1_battery

0xaaed,	// (0x00053d56) level_2_battery

0xab00,	// (0x00053d69) level_3_battery

0xab13,	// (0x00053d7c) level_4_battery

0xab26,	// (0x00053d8f) level_5_battery

0xab39,	// (0x00053da2) level_6_battery

0xab4c,	// (0x00053db5) level_7_battery

0xc279,	// (0x000554e2) list_menu_pane_ParamLimits

0xc279,	// (0x000554e2) list_menu_pane

0xc28f,	// (0x000554f8) scroll_pane_cp25_ParamLimits

0xc28f,	// (0x000554f8) scroll_pane_cp25

0xc2a8,	// (0x00055511) list_double2_graphic_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double2_graphic_pane_cp2

0xc2a8,	// (0x00055511) list_double2_large_graphic_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double2_large_graphic_pane_cp2

0xc2a8,	// (0x00055511) list_double2_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double2_pane_cp2

0xc2a8,	// (0x00055511) list_double_graphic_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double_graphic_pane_cp2

0xc2a8,	// (0x00055511) list_double_large_graphic_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double_large_graphic_pane_cp2

0xc2a8,	// (0x00055511) list_double_number_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double_number_pane_cp2

0xc2a8,	// (0x00055511) list_double_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double_pane_cp2

0xab5f,	// (0x00053dc8) list_single_2graphic_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_2graphic_pane_cp2

0xab5f,	// (0x00053dc8) list_single_graphic_heading_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_graphic_heading_pane_cp2

0xab5f,	// (0x00053dc8) list_single_graphic_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_graphic_pane_cp2

0xab5f,	// (0x00053dc8) list_single_heading_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_heading_pane_cp2

0xc2b8,	// (0x00055521) list_single_large_graphic_pane_cp2_ParamLimits

0xc2b8,	// (0x00055521) list_single_large_graphic_pane_cp2

0xab5f,	// (0x00053dc8) list_single_number_heading_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_number_heading_pane_cp2

0xab5f,	// (0x00053dc8) list_single_number_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_number_pane_cp2

0xab5f,	// (0x00053dc8) list_single_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_pane_cp2

0xc2d1,	// (0x0005553a) bg_popup_sub_pane_cp22

0x00e5,	// (0x0004934e) popup_side_volume_key_window_g1

0x010f,	// (0x00049378) popup_side_volume_key_window_t1

0x012d,	// (0x00049396) volume_small_pane_cp1

0x9ba1,	// (0x00052e0a) bg_popup_sub_pane_cp24_ParamLimits

0x9ba1,	// (0x00052e0a) bg_popup_sub_pane_cp24

0xc2e7,	// (0x00055550) fep_china_uni_candidate_pane_ParamLimits

0xc2e7,	// (0x00055550) fep_china_uni_candidate_pane

0xc2fb,	// (0x00055564) fep_china_uni_entry_pane

0xc30b,	// (0x00055574) popup_fep_china_uni_window_g1

0xc327,	// (0x00055590) fep_china_uni_entry_pane_g1

0xc331,	// (0x0005559a) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00058990) fep_china_uni_entry_pane_g

0xc33b,	// (0x000555a4) fep_entry_item_pane

0xc345,	// (0x000555ae) fep_candidate_item_pane

0xc34d,	// (0x000555b6) fep_china_uni_candidate_pane_g1

0xc357,	// (0x000555c0) fep_china_uni_candidate_pane_g2

0xc35f,	// (0x000555c8) fep_china_uni_candidate_pane_g3

0xc367,	// (0x000555d0) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00058995) fep_china_uni_candidate_pane_g

0x9866,	// (0x00052acf) fep_entry_item_pane_g1

0xc371,	// (0x000555da) fep_entry_item_pane_t1_ParamLimits

0xc371,	// (0x000555da) fep_entry_item_pane_t1

0xc387,	// (0x000555f0) fep_candidate_item_pane_t1_ParamLimits

0xc387,	// (0x000555f0) fep_candidate_item_pane_t1

0xc39c,	// (0x00055605) fep_candidate_item_pane_t2_ParamLimits

0xc39c,	// (0x00055605) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005899e) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005899e) fep_candidate_item_pane_t

0x9be3,	// (0x00052e4c) list_highlight_pane_cp31_ParamLimits

0x9be3,	// (0x00052e4c) list_highlight_pane_cp31

0xc3ae,	// (0x00055617) level_1_signal_lsc

0xc3b7,	// (0x00055620) level_2_signal_lsc

0xc3c0,	// (0x00055629) level_3_signal_lsc

0xc3c9,	// (0x00055632) level_4_signal_lsc

0xc3d2,	// (0x0005563b) level_5_signal_lsc

0xc3db,	// (0x00055644) level_6_signal_lsc

0xc3e4,	// (0x0005564d) level_7_signal_lsc

0xc3e4,	// (0x0005564d) level_1_battery_lsc

0xc3ed,	// (0x00055656) level_2_battery_lsc

0xc3f6,	// (0x0005565f) level_3_battery_lsc

0xc3ff,	// (0x00055668) level_4_battery_lsc

0xc408,	// (0x00055671) level_5_battery_lsc

0xc411,	// (0x0005567a) level_6_battery_lsc

0xc3ae,	// (0x00055617) level_7_battery_lsc

0xc41a,	// (0x00055683) scroll_handle_focus_pane_g1

0xc423,	// (0x0005568c) scroll_handle_focus_pane_g2

0xc42c,	// (0x00055695) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x000589a3) scroll_handle_focus_pane_g

0x9602,	// (0x0005286b) list_single_2graphic_pane_g1_ParamLimits

0x9602,	// (0x0005286b) list_single_2graphic_pane_g1

0xa495,	// (0x000536fe) list_single_2graphic_pane_g2_ParamLimits

0xa495,	// (0x000536fe) list_single_2graphic_pane_g2

0x0c3c,	// (0x00049ea5) list_single_2graphic_pane_g3_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_2graphic_pane_g3

0xabee,	// (0x00053e57) list_single_2graphic_pane_g4_ParamLimits

0xabee,	// (0x00053e57) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x000589aa) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x000589aa) list_single_2graphic_pane_g

0x960e,	// (0x00052877) list_single_2graphic_pane_t1_ParamLimits

0x960e,	// (0x00052877) list_single_2graphic_pane_t1

0xabff,	// (0x00053e68) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xabff,	// (0x00053e68) list_double2_graphic_large_graphic_pane_g1

0xa4d2,	// (0x0005373b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xa4d2,	// (0x0005373b) list_double2_graphic_large_graphic_pane_g2

0xa4ba,	// (0x00053723) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xa4ba,	// (0x00053723) list_double2_graphic_large_graphic_pane_g3

0xac11,	// (0x00053e7a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xac11,	// (0x00053e7a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x000589b3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x000589b3) list_double2_graphic_large_graphic_pane_g

0x963c,	// (0x000528a5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x963c,	// (0x000528a5) list_double2_graphic_large_graphic_pane_t1

0x9652,	// (0x000528bb) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9652,	// (0x000528bb) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x000589bc) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x000589bc) list_double2_graphic_large_graphic_pane_t

0xe4fe,	// (0x00057767) popup_fast_swap_window_ParamLimits

0xe4fe,	// (0x00057767) popup_fast_swap_window

0xe51c,	// (0x00057785) popup_side_volume_key_window

0xe53a,	// (0x000577a3) stacon_top_pane

0xe544,	// (0x000577ad) status_pane_ParamLimits

0xe544,	// (0x000577ad) status_pane

0xac65,	// (0x00053ece) status_small_pane

0x9956,	// (0x00052bbf) control_pane

0x9956,	// (0x00052bbf) stacon_bottom_pane

0xa52b,	// (0x00053794) scroll_pane_cp121

0xa522,	// (0x0005378b) set_content_pane

0xac1d,	// (0x00053e86) bg_active_tab_pane_g1_cp1

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp1

0xac26,	// (0x00053e8f) bg_active_tab_pane_g3_cp1

0xac1d,	// (0x00053e86) bg_passive_tab_pane_g1_cp1

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp1

0xac26,	// (0x00053e8f) bg_passive_tab_pane_g3_cp1

0xac2f,	// (0x00053e98) bg_active_tab_pane_g1_cp2

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp2

0xac38,	// (0x00053ea1) bg_active_tab_pane_g3_cp2

0xac2f,	// (0x00053e98) bg_passive_tab_pane_g1_cp2

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp2

0xac38,	// (0x00053ea1) bg_passive_tab_pane_g3_cp2

0xac41,	// (0x00053eaa) bg_active_tab_pane_g1_cp3

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp3

0xac4a,	// (0x00053eb3) bg_active_tab_pane_g3_cp3

0xac41,	// (0x00053eaa) bg_passive_tab_pane_g1_cp3

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp3

0xac4a,	// (0x00053eb3) bg_passive_tab_pane_g3_cp3

0xac53,	// (0x00053ebc) bg_active_tab_pane_g1_cp4

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp4

0xac5c,	// (0x00053ec5) bg_active_tab_pane_g3_cp4

0xac53,	// (0x00053ebc) bg_passive_tab_pane_g1_cp4

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp4

0xac5c,	// (0x00053ec5) bg_passive_tab_pane_g3_cp4

0xe45a,	// (0x000576c3) bg_active_tab_pane_g1_cp5

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp5

0xe463,	// (0x000576cc) bg_active_tab_pane_g3_cp5

0xe45a,	// (0x000576c3) bg_passive_tab_pane_g1_cp5

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp5

0xe463,	// (0x000576cc) bg_passive_tab_pane_g3_cp5

0xe46c,	// (0x000576d5) list_set_graphic_pane_ParamLimits

0xe46c,	// (0x000576d5) list_set_graphic_pane

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp4

0xe47f,	// (0x000576e8) list_set_graphic_pane_g1_ParamLimits

0xe47f,	// (0x000576e8) list_set_graphic_pane_g1

0xe48b,	// (0x000576f4) list_set_graphic_pane_g2_ParamLimits

0xe48b,	// (0x000576f4) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x000589c1) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x000589c1) list_set_graphic_pane_g

0x0009,

0xfae2,	// (0x00058d4b) volume_small_pane_cp_g

0xe4af,	// (0x00057718) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xe4af,	// (0x00057718) list_double2_large_graphic_pane_g1_cp2

0xe4bd,	// (0x00057726) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xe4bd,	// (0x00057726) list_double2_large_graphic_pane_g2_cp2

0xe4ce,	// (0x00057737) list_double2_large_graphic_pane_g3_cp2

0xe4d6,	// (0x0005773f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe4d6,	// (0x0005773f) list_double2_large_graphic_pane_t1_cp2

0xe4ec,	// (0x00057755) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe4ec,	// (0x00057755) list_double2_large_graphic_pane_t2_cp2

0x38cf,	// (0x0004cb38) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x38cf,	// (0x0004cb38) list_double_large_graphic_pane_g1_cp2

0x38e2,	// (0x0004cb4b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x38e2,	// (0x0004cb4b) list_double_large_graphic_pane_g2_cp2

0xe662,	// (0x000578cb) list_double_large_graphic_pane_g3_cp2

0x38f3,	// (0x0004cb5c) list_double_large_graphic_pane_g4_cp

0x38fb,	// (0x0004cb64) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x38fb,	// (0x0004cb64) list_double_large_graphic_pane_t1_cp2

0x3912,	// (0x0004cb7b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3912,	// (0x0004cb7b) list_double_large_graphic_pane_t2_cp2

0xe552,	// (0x000577bb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe552,	// (0x000577bb) list_double2_graphic_pane_g1_cp2

0xe560,	// (0x000577c9) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe560,	// (0x000577c9) list_double2_graphic_pane_g2_cp2

0xe571,	// (0x000577da) list_double2_graphic_pane_g3_cp2

0xe57b,	// (0x000577e4) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe57b,	// (0x000577e4) list_double2_graphic_pane_t1_cp2

0xe591,	// (0x000577fa) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe591,	// (0x000577fa) list_double2_graphic_pane_t2_cp2

0xe5a3,	// (0x0005780c) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe5a3,	// (0x0005780c) list_single_number_heading_pane_g1_cp2

0xe5af,	// (0x00057818) list_single_number_heading_pane_g2_cp2

0xe5b7,	// (0x00057820) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe5b7,	// (0x00057820) list_single_number_heading_pane_t1_cp2

0xe5cd,	// (0x00057836) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe5cd,	// (0x00057836) list_single_number_heading_pane_t2_cp2

0xe5e1,	// (0x0005784a) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe5e1,	// (0x0005784a) list_single_number_heading_pane_t3_cp2

0xe5a3,	// (0x0005780c) list_single_heading_pane_g1_cp2_ParamLimits

0xe5a3,	// (0x0005780c) list_single_heading_pane_g1_cp2

0xe5af,	// (0x00057818) list_single_heading_pane_g2_cp2

0xe5b7,	// (0x00057820) list_single_heading_pane_t1_cp2_ParamLimits

0xe5b7,	// (0x00057820) list_single_heading_pane_t1_cp2

0x36c9,	// (0x0004c932) list_single_heading_pane_t2_cp2_ParamLimits

0x36c9,	// (0x0004c932) list_single_heading_pane_t2_cp2

0x3611,	// (0x0004c87a) list_double_graphic_pane_g1_cp2_ParamLimits

0x3611,	// (0x0004c87a) list_double_graphic_pane_g1_cp2

0x361d,	// (0x0004c886) list_double_graphic_pane_g2_cp2_ParamLimits

0x361d,	// (0x0004c886) list_double_graphic_pane_g2_cp2

0x362c,	// (0x0004c895) list_double_graphic_pane_g3_cp2

0x3634,	// (0x0004c89d) list_double_graphic_pane_t1_cp2_ParamLimits

0x3634,	// (0x0004c89d) list_double_graphic_pane_t1_cp2

0x364a,	// (0x0004c8b3) list_double_graphic_pane_t2_cp2_ParamLimits

0x364a,	// (0x0004c8b3) list_double_graphic_pane_t2_cp2

0xe656,	// (0x000578bf) list_double_number_pane_g1_cp2_ParamLimits

0xe656,	// (0x000578bf) list_double_number_pane_g1_cp2

0xe662,	// (0x000578cb) list_double_number_pane_g2_cp2

0x35d5,	// (0x0004c83e) list_double_number_pane_t1_cp2_ParamLimits

0x35d5,	// (0x0004c83e) list_double_number_pane_t1_cp2

0x35e9,	// (0x0004c852) list_double_number_pane_t2_cp2_ParamLimits

0x35e9,	// (0x0004c852) list_double_number_pane_t2_cp2

0x35ff,	// (0x0004c868) list_double_number_pane_t3_cp2_ParamLimits

0x35ff,	// (0x0004c868) list_double_number_pane_t3_cp2

0x34be,	// (0x0004c727) list_single_graphic_pane_g1_cp2_ParamLimits

0x34be,	// (0x0004c727) list_single_graphic_pane_g1_cp2

0xc435,	// (0x0005569e) list_single_graphic_pane_g2_cp2_ParamLimits

0xc435,	// (0x0005569e) list_single_graphic_pane_g2_cp2

0xe6bc,	// (0x00057925) list_single_graphic_pane_g3_cp2

0x3494,	// (0x0004c6fd) list_single_graphic_pane_t1_cp2_ParamLimits

0x3494,	// (0x0004c6fd) list_single_graphic_pane_t1_cp2

0xc435,	// (0x0005569e) list_single_number_pane_g1_cp2_ParamLimits

0xc435,	// (0x0005569e) list_single_number_pane_g1_cp2

0xe6bc,	// (0x00057925) list_single_number_pane_g2_cp2

0x3494,	// (0x0004c6fd) list_single_number_pane_t1_cp2_ParamLimits

0x3494,	// (0x0004c6fd) list_single_number_pane_t1_cp2

0x34aa,	// (0x0004c713) list_single_number_pane_t2_cp2_ParamLimits

0x34aa,	// (0x0004c713) list_single_number_pane_t2_cp2

0xe4bd,	// (0x00057726) list_double2_pane_g1_cp2_ParamLimits

0xe4bd,	// (0x00057726) list_double2_pane_g1_cp2

0xe4ce,	// (0x00057737) list_double2_pane_g2_cp2

0xe62e,	// (0x00057897) list_double2_pane_t1_cp2_ParamLimits

0xe62e,	// (0x00057897) list_double2_pane_t1_cp2

0xe644,	// (0x000578ad) list_double2_pane_t2_cp2_ParamLimits

0xe644,	// (0x000578ad) list_double2_pane_t2_cp2

0xe656,	// (0x000578bf) list_double_pane_g1_cp2_ParamLimits

0xe656,	// (0x000578bf) list_double_pane_g1_cp2

0xe662,	// (0x000578cb) list_double_pane_g2_cp2

0xe66a,	// (0x000578d3) list_double_pane_t1_cp2_ParamLimits

0xe66a,	// (0x000578d3) list_double_pane_t1_cp2

0xe680,	// (0x000578e9) list_double_pane_t2_cp2_ParamLimits

0xe680,	// (0x000578e9) list_double_pane_t2_cp2

0xe6ac,	// (0x00057915) list_single_pane_cp2_g3

0xc435,	// (0x0005569e) list_single_pane_g1_cp2_ParamLimits

0xc435,	// (0x0005569e) list_single_pane_g1_cp2

0xe6bc,	// (0x00057925) list_single_pane_g2_cp2

0xe6c4,	// (0x0005792d) list_single_pane_t1_cp2_ParamLimits

0xe6c4,	// (0x0005792d) list_single_pane_t1_cp2

0xe6dc,	// (0x00057945) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xe6dc,	// (0x00057945) list_single_large_graphic_pane_g1_cp2

0xe305,	// (0x0005756e) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xe305,	// (0x0005756e) list_single_large_graphic_pane_g2_cp2

0xe6ea,	// (0x00057953) list_single_large_graphic_pane_g3_cp2

0xe6f2,	// (0x0005795b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xe6f2,	// (0x0005795b) list_single_large_graphic_pane_g4_cp1

0xe70c,	// (0x00057975) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xe70c,	// (0x00057975) list_single_large_graphic_pane_t1_cp2

0x345e,	// (0x0004c6c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x345e,	// (0x0004c6c7) list_single_graphic_heading_pane_g1_cp2

0x342b,	// (0x0004c694) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x342b,	// (0x0004c694) list_single_graphic_heading_pane_g4_cp2

0xe6bc,	// (0x00057925) list_single_graphic_heading_pane_g5_cp2

0x346a,	// (0x0004c6d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x346a,	// (0x0004c6d3) list_single_graphic_heading_pane_t1_cp2

0x3480,	// (0x0004c6e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x3480,	// (0x0004c6e9) list_single_graphic_heading_pane_t2_cp2

0x341f,	// (0x0004c688) list_single_2graphic_pane_g1_cp2_ParamLimits

0x341f,	// (0x0004c688) list_single_2graphic_pane_g1_cp2

0x342b,	// (0x0004c694) list_single_2graphic_pane_g2_cp2_ParamLimits

0x342b,	// (0x0004c694) list_single_2graphic_pane_g2_cp2

0xe6bc,	// (0x00057925) list_single_2graphic_pane_g3_cp2

0x343c,	// (0x0004c6a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0x343c,	// (0x0004c6a5) list_single_2graphic_pane_g4_cp2

0x3448,	// (0x0004c6b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3448,	// (0x0004c6b1) list_single_2graphic_pane_t1_cp2

0x9866,	// (0x00052acf) list_highlight_pane_g10_cp1

0x2ff7,	// (0x0004c260) list_highlight_pane_g1_cp1

0x2fff,	// (0x0004c268) list_highlight_pane_g2_cp1

0x3007,	// (0x0004c270) list_highlight_pane_g3_cp1

0x300f,	// (0x0004c278) list_highlight_pane_g4_cp1

0x3017,	// (0x0004c280) list_highlight_pane_g5_cp1

0x301f,	// (0x0004c288) list_highlight_pane_g6_cp1

0x3027,	// (0x0004c290) list_highlight_pane_g7_cp1

0x302f,	// (0x0004c298) list_highlight_pane_g8_cp1

0x3037,	// (0x0004c2a0) list_highlight_pane_g9_cp1

0xc66b,	// (0x000558d4) form_field_slider_pane_t3

0xc679,	// (0x000558e2) form_field_slider_pane_t4

0x2f33,	// (0x0004c19c) slider_form_pane_ParamLimits

0x2f33,	// (0x0004c19c) slider_form_pane

0x9956,	// (0x00052bbf) control_abbreviations

0x9956,	// (0x00052bbf) control_conventions

0x9956,	// (0x00052bbf) control_definitions

0x9956,	// (0x00052bbf) format_table_attribute

0x371f,	// (0x0004c988) bg_popup_preview_window_pane_g9

0x9956,	// (0x00052bbf) format_table_data2

0x9956,	// (0x00052bbf) format_table_data3

0x9956,	// (0x00052bbf) format_table_data_example

0x0008,

0x9956,	// (0x00052bbf) intro_purpose

0xf8ef,	// (0x00058b58) bg_popup_preview_window_pane_g

0x9956,	// (0x00052bbf) texts_category

0x9956,	// (0x00052bbf) texts_graphics

0xe722,	// (0x0005798b) text_digital

0xe731,	// (0x0005799a) text_primary

0xe740,	// (0x000579a9) text_primary_small

0xe74f,	// (0x000579b8) text_secondary

0xe75e,	// (0x000579c7) text_title

0x3e8c,	// (0x0004d0f5) bg_passive_tab_pane_g1_cp3_srt

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp3_srt

0x3e95,	// (0x0004d0fe) bg_passive_tab_pane_g3_cp3_srt

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp3_srt_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp3_srt

0x3e9e,	// (0x0004d107) tabs_4_active_pane_srt_g1

0xc991,	// (0x00055bfa) tabs_4_active_pane_srt_t1_ParamLimits

0xc991,	// (0x00055bfa) tabs_4_active_pane_srt_t1

0x3e8c,	// (0x0004d0f5) bg_active_tab_pane_g1_cp3_copy1

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp3_copy1

0x3e95,	// (0x0004d0fe) bg_active_tab_pane_g3_cp3_copy1

0x9be3,	// (0x00052e4c) tabs_2_long_active_pane_srt_ParamLimits

0x9be3,	// (0x00052e4c) tabs_2_long_active_pane_srt

0x9be3,	// (0x00052e4c) tabs_2_long_passive_pane_srt_ParamLimits

0x9be3,	// (0x00052e4c) tabs_2_long_passive_pane_srt

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp4_srt_ParamLimits

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp4_srt

0x3b4e,	// (0x0004cdb7) bg_passive_tab_pane_g1_cp4_srt

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp4_srt

0x3b57,	// (0x0004cdc0) bg_passive_tab_pane_g3_cp4_srt

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp4_srt_ParamLimits

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp4_srt

0xc84b,	// (0x00055ab4) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc84b,	// (0x00055ab4) tabs_2_long_active_pane_srt_t1

0x3b4e,	// (0x0004cdb7) bg_active_tab_pane_g1_cp4_srt

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp4_srt

0x3b57,	// (0x0004cdc0) bg_active_tab_pane_g3_cp4_srt

0x9ba1,	// (0x00052e0a) tabs_3_long_active_pane_srt_ParamLimits

0x9ba1,	// (0x00052e0a) tabs_3_long_active_pane_srt

0x9ba1,	// (0x00052e0a) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x9ba1,	// (0x00052e0a) tabs_3_long_passive_pane_cp_srt

0x9ba1,	// (0x00052e0a) tabs_3_long_passive_pane_srt_ParamLimits

0x9ba1,	// (0x00052e0a) tabs_3_long_passive_pane_srt

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp5_srt_ParamLimits

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp5_srt

0xe45a,	// (0x000576c3) bg_passive_tab_pane_g1_cp5_srt

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp5_srt

0xe463,	// (0x000576cc) bg_passive_tab_pane_g3_cp5_srt

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp5_srt_ParamLimits

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp5_srt

0xc835,	// (0x00055a9e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc835,	// (0x00055a9e) tabs_3_long_active_pane_srt_t1

0xe45a,	// (0x000576c3) bg_active_tab_pane_g1_cp5_srt

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp5_srt

0xe463,	// (0x000576cc) bg_active_tab_pane_g3_cp5_srt

0x3b2e,	// (0x0004cd97) navi_text_pane_srt_t1

0x3b26,	// (0x0004cd8f) navi_icon_pane_srt_g1

0xe868,	// (0x00057ad1) midp_editing_number_pane_srt

0xe76d,	// (0x000579d6) midp_ticker_pane_srt

0xe870,	// (0x00057ad9) midp_ticker_pane_srt_g1

0xe878,	// (0x00057ae1) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x000589e0) midp_ticker_pane_srt_g

0xe880,	// (0x00057ae9) midp_ticker_pane_srt_t1

0x3b17,	// (0x0004cd80) midp_editing_number_pane_t1_copy1

0xac70,	// (0x00053ed9) listscroll_midp_pane

0xac70,	// (0x00053ed9) midp_form_pane

0xe775,	// (0x000579de) midp_info_popup_window_ParamLimits

0xe775,	// (0x000579de) midp_info_popup_window

0xa5f1,	// (0x0005385a) bg_popup_sub_pane_cp50_ParamLimits

0xa5f1,	// (0x0005385a) bg_popup_sub_pane_cp50

0x2c21,	// (0x0004be8a) listscroll_midp_info_pane_ParamLimits

0x2c21,	// (0x0004be8a) listscroll_midp_info_pane

0x2c01,	// (0x0004be6a) listscroll_form_midp_pane_ParamLimits

0x2c01,	// (0x0004be6a) listscroll_form_midp_pane

0x2c0d,	// (0x0004be76) scroll_bar_cp050

0x2c01,	// (0x0004be6a) list_midp_pane

0x4904,	// (0x0004db6d) signal_pane_g2_cp

0x2b1b,	// (0x0004bd84) listscroll_midp_info_pane_t1_ParamLimits

0x2b1b,	// (0x0004bd84) listscroll_midp_info_pane_t1

0x2b33,	// (0x0004bd9c) listscroll_midp_info_pane_t2_ParamLimits

0x2b33,	// (0x0004bd9c) listscroll_midp_info_pane_t2

0x2b71,	// (0x0004bdda) listscroll_midp_info_pane_t3_ParamLimits

0x2b71,	// (0x0004bdda) listscroll_midp_info_pane_t3

0x2bab,	// (0x0004be14) listscroll_midp_info_pane_t4_ParamLimits

0x2bab,	// (0x0004be14) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x00058a93) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x00058a93) listscroll_midp_info_pane_t

0xa6bb,	// (0x00053924) scroll_pane_cp21

0x2ab5,	// (0x0004bd1e) form_midp_field_choice_group_pane

0x2abe,	// (0x0004bd27) form_midp_field_text_pane

0x2b01,	// (0x0004bd6a) form_midp_field_time_pane

0x2b09,	// (0x0004bd72) form_midp_gauge_slider_pane

0x2b12,	// (0x0004bd7b) form_midp_gauge_wait_pane

0x9956,	// (0x00052bbf) form_midp_image_pane

0x9664,	// (0x000528cd) list_single_midp_pane_ParamLimits

0x9664,	// (0x000528cd) list_single_midp_pane

0xc643,	// (0x000558ac) form_midp_field_text_pane_t1

0x286b,	// (0x0004bad4) input_focus_pane_cp050

0x2aa4,	// (0x0004bd0d) list_midp_form_text_pane

0x2a48,	// (0x0004bcb1) form_midp_field_choice_group_pane_t1

0x2a56,	// (0x0004bcbf) input_focus_pane_cp051

0x2a6a,	// (0x0004bcd3) list_midp_choice_pane

0x9956,	// (0x00052bbf) status_idle_pane

0x2a2c,	// (0x0004bc95) form_midp_field_time_pane_t1

0x9866,	// (0x00052acf) wait_anim_pane_g2_copy1

0x2a3a,	// (0x0004bca3) form_midp_field_time_pane_t2

0x0001,

0xe7d0,	// (0x00057a39) aid_navinavi_width_2_pane

0xf825,	// (0x00058a8e) form_midp_field_time_pane_t

0x9956,	// (0x00052bbf) input_focus_pane_cp052

0x9956,	// (0x00052bbf) bg_input_focus_pane_cp040

0x29ec,	// (0x0004bc55) form_midp_gauge_slider_pane_t1

0x29fa,	// (0x0004bc63) form_midp_gauge_slider_pane_t2

0xc627,	// (0x00055890) form_midp_gauge_slider_pane_t3

0xc635,	// (0x0005589e) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x00058a85) form_midp_gauge_slider_pane_t

0x2a24,	// (0x0004bc8d) form_midp_slider_pane

0x9be3,	// (0x00052e4c) bg_input_focus_pane_cp041_ParamLimits

0x9be3,	// (0x00052e4c) bg_input_focus_pane_cp041

0x29b9,	// (0x0004bc22) form_midp_gauge_wait_pane_t1_ParamLimits

0x29b9,	// (0x0004bc22) form_midp_gauge_wait_pane_t1

0x29cb,	// (0x0004bc34) form_midp_gauge_wait_pane_t2_ParamLimits

0x29cb,	// (0x0004bc34) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x00058a80) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x00058a80) form_midp_gauge_wait_pane_t

0x29dd,	// (0x0004bc46) form_midp_wait_pane_ParamLimits

0x29dd,	// (0x0004bc46) form_midp_wait_pane

0x2981,	// (0x0004bbea) form_midp_image_pane_g1

0x298a,	// (0x0004bbf3) form_midp_image_pane_t1

0x2999,	// (0x0004bc02) form_midp_image_pane_t2

0x29a8,	// (0x0004bc11) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x00058a79) form_midp_image_pane_t

0x2978,	// (0x0004bbe1) list_single_midp_pane_g1

0xee5d,	// (0x000580c6) list_single_midp_pane_t1

0xc610,	// (0x00055879) list_midp_form_item_pane_ParamLimits

0xc610,	// (0x00055879) list_midp_form_item_pane

0xe78a,	// (0x000579f3) list_midp_form_item_pane_t1

0xe799,	// (0x00057a02) midp_ticker_pane_g1

0xe7a5,	// (0x00057a0e) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x000589c6) midp_ticker_pane_g

0xad14,	// (0x00053f7d) midp_ticker_pane_t1

0xc912,	// (0x00055b7b) midp_editing_number_pane_t1

0x3d62,	// (0x0004cfcb) midp_editing_number_pane

0x3d71,	// (0x0004cfda) midp_ticker_pane

0x3b07,	// (0x0004cd70) ai_message_heading_pane

0x9956,	// (0x00052bbf) bg_popup_window_pane_cp14

0x3b0f,	// (0x0004cd78) listscroll_ai_message_pane

0x3a8d,	// (0x0004ccf6) ai_message_heading_pane_g1_ParamLimits

0x3a8d,	// (0x0004ccf6) ai_message_heading_pane_g1

0x3a99,	// (0x0004cd02) ai_message_heading_pane_g2_ParamLimits

0x3a99,	// (0x0004cd02) ai_message_heading_pane_g2

0x3aa7,	// (0x0004cd10) ai_message_heading_pane_g3_ParamLimits

0x3aa7,	// (0x0004cd10) ai_message_heading_pane_g3

0x3ab3,	// (0x0004cd1c) ai_message_heading_pane_g4_ParamLimits

0x3ab3,	// (0x0004cd1c) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x00058bba) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x00058bba) ai_message_heading_pane_g

0x3abf,	// (0x0004cd28) ai_message_heading_pane_t1_ParamLimits

0x3abf,	// (0x0004cd28) ai_message_heading_pane_t1

0x3ad9,	// (0x0004cd42) ai_message_heading_pane_t2_ParamLimits

0x3ad9,	// (0x0004cd42) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x00058bc3) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x00058bc3) ai_message_heading_pane_t

0x3aed,	// (0x0004cd56) bg_popup_heading_pane_cp1_ParamLimits

0x3aed,	// (0x0004cd56) bg_popup_heading_pane_cp1

0x3a7b,	// (0x0004cce4) list_ai_message_pane_ParamLimits

0x3a7b,	// (0x0004cce4) list_ai_message_pane

0xa6bb,	// (0x00053924) scroll_pane_cp10

0x3a17,	// (0x0004cc80) list_ai_message_pane_g1

0x3a1f,	// (0x0004cc88) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x00058b97) list_ai_message_pane_g

0x3a27,	// (0x0004cc90) list_ai_message_pane_t1_ParamLimits

0x3a27,	// (0x0004cc90) list_ai_message_pane_t1

0x3a3c,	// (0x0004cca5) list_ai_message_pane_t2_ParamLimits

0x3a3c,	// (0x0004cca5) list_ai_message_pane_t2

0x3a51,	// (0x0004ccba) list_ai_message_pane_t3_ParamLimits

0x3a51,	// (0x0004ccba) list_ai_message_pane_t3

0x3a66,	// (0x0004cccf) list_ai_message_pane_t4_ParamLimits

0x3a66,	// (0x0004cccf) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x00058b9c) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x00058b9c) list_ai_message_pane_t

0xc81b,	// (0x00055a84) cell_ai_soft_ind_pane_ParamLimits

0xc81b,	// (0x00055a84) cell_ai_soft_ind_pane

0xe7b1,	// (0x00057a1a) cell_ai_soft_ind_pane_g1_ParamLimits

0xe7b1,	// (0x00057a1a) cell_ai_soft_ind_pane_g1

0x9956,	// (0x00052bbf) grid_highlight_cp1

0xe7be,	// (0x00057a27) text_secondary_cp56_ParamLimits

0xe7be,	// (0x00057a27) text_secondary_cp56

0x39d5,	// (0x0004cc3e) example_general_pane_ParamLimits

0x39d5,	// (0x0004cc3e) example_general_pane

0x39e1,	// (0x0004cc4a) example_parent_pane_g1_ParamLimits

0x39e1,	// (0x0004cc4a) example_parent_pane_g1

0x39ed,	// (0x0004cc56) example_parent_pane_t1_ParamLimits

0x39ed,	// (0x0004cc56) example_parent_pane_t1

0xb394,	// (0x000545fd) popup_preview_text_window_ParamLimits

0xb394,	// (0x000545fd) popup_preview_text_window

0xe6b4,	// (0x0005791d) list_single_pane_cp2_g4

0x9f94,	// (0x000531fd) bg_popup_preview_window_pane_ParamLimits

0x9f94,	// (0x000531fd) bg_popup_preview_window_pane

0x3729,	// (0x0004c992) popup_preview_text_window_t1_ParamLimits

0x3729,	// (0x0004c992) popup_preview_text_window_t1

0x3747,	// (0x0004c9b0) popup_preview_text_window_t2_ParamLimits

0x3747,	// (0x0004c9b0) popup_preview_text_window_t2

0x3790,	// (0x0004c9f9) popup_preview_text_window_t3_ParamLimits

0x3790,	// (0x0004c9f9) popup_preview_text_window_t3

0x37d5,	// (0x0004ca3e) popup_preview_text_window_t4_ParamLimits

0x37d5,	// (0x0004ca3e) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x00058b6b) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x00058b6b) popup_preview_text_window_t

0x3853,	// (0x0004cabc) scroll_pane_cp11

0x27f7,	// (0x0004ba60) bg_popup_preview_window_pane_g1

0x36dd,	// (0x0004c946) bg_popup_preview_window_pane_g2

0x36e7,	// (0x0004c950) bg_popup_preview_window_pane_g3

0x36f1,	// (0x0004c95a) bg_popup_preview_window_pane_g4

0x36fb,	// (0x0004c964) bg_popup_preview_window_pane_g5

0x3705,	// (0x0004c96e) bg_popup_preview_window_pane_g6

0x370d,	// (0x0004c976) bg_popup_preview_window_pane_g7

0x3715,	// (0x0004c97e) bg_popup_preview_window_pane_g8

0xec26,	// (0x00057e8f) aid_popup_width_pane

0xb304,	// (0x0005456d) popup_midp_note_alarm_window_ParamLimits

0xb304,	// (0x0005456d) popup_midp_note_alarm_window

0xa53c,	// (0x000537a5) data_form_pane_ParamLimits

0x94f3,	// (0x0005275c) form_field_data_pane_g1

0x94fd,	// (0x00052766) form_field_data_pane_t1_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_ParamLimits

0xe376,	// (0x000575df) data_form_wide_pane_ParamLimits

0xe387,	// (0x000575f0) form_field_data_wide_pane_g1

0xe393,	// (0x000575fc) form_field_data_wide_pane_t1_ParamLimits

0xa24d,	// (0x000534b6) input_focus_pane_cp6_ParamLimits

0xa666,	// (0x000538cf) input_popup_find_pane_g1_ParamLimits

0xa666,	// (0x000538cf) input_popup_find_pane_g1

0xf46e,	// (0x000586d7) aid_navi_side_left_pane

0xf483,	// (0x000586ec) aid_navi_side_right_pane

0x30f2,	// (0x0004c35b) bg_popup_window_pane_cp30_ParamLimits

0x30f2,	// (0x0004c35b) bg_popup_window_pane_cp30

0x316c,	// (0x0004c3d5) popup_midp_note_alarm_window_g1_ParamLimits

0x316c,	// (0x0004c3d5) popup_midp_note_alarm_window_g1

0x319c,	// (0x0004c405) popup_midp_note_alarm_window_t1_ParamLimits

0x319c,	// (0x0004c405) popup_midp_note_alarm_window_t1

0x323d,	// (0x0004c4a6) popup_midp_note_alarm_window_t2_ParamLimits

0x323d,	// (0x0004c4a6) popup_midp_note_alarm_window_t2

0x32eb,	// (0x0004c554) popup_midp_note_alarm_window_t3_ParamLimits

0x32eb,	// (0x0004c554) popup_midp_note_alarm_window_t3

0x331d,	// (0x0004c586) popup_midp_note_alarm_window_t4_ParamLimits

0x331d,	// (0x0004c586) popup_midp_note_alarm_window_t4

0x3343,	// (0x0004c5ac) popup_midp_note_alarm_window_t5_ParamLimits

0x3343,	// (0x0004c5ac) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x00058b08) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x00058b08) popup_midp_note_alarm_window_t

0x33ef,	// (0x0004c658) wait_bar_pane_cp1_ParamLimits

0x33ef,	// (0x0004c658) wait_bar_pane_cp1

0x9956,	// (0x00052bbf) wait_anim_pane_copy1

0x9956,	// (0x00052bbf) wait_border_pane_copy1

0x2dd7,	// (0x0004c040) wait_border_pane_g1_copy1

0xe3ad,	// (0x00057616) form_field_popup_pane_g1

0x9517,	// (0x00052780) form_field_popup_pane_t1_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_cp7_ParamLimits

0xa576,	// (0x000537df) list_form_pane_ParamLimits

0xe3b5,	// (0x0005761e) form_field_popup_wide_pane_g1

0xe3bd,	// (0x00057626) form_field_popup_wide_pane_t1_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_cp8_ParamLimits

0xa582,	// (0x000537eb) list_form_wide_pane_ParamLimits

0xc9f0,	// (0x00055c59) aid_size_cell_graphic_pane

0x9596,	// (0x000527ff) data_form_pane_t1_ParamLimits

0x9680,	// (0x000528e9) data_form_wide_pane_t1_ParamLimits

0xb796,	// (0x000549ff) bg_status_flat_pane

0x9add,	// (0x00052d46) title_pane_t1_ParamLimits

0x9b69,	// (0x00052dd2) title_pane_t2_ParamLimits

0x9b8f,	// (0x00052df8) title_pane_t3_ParamLimits

0xf557,	// (0x000587c0) title_pane_t_ParamLimits

0xaadb,	// (0x00053d44) level_1_signal_ParamLimits

0xaaed,	// (0x00053d56) level_2_signal_ParamLimits

0xab00,	// (0x00053d69) level_3_signal_ParamLimits

0xab13,	// (0x00053d7c) level_4_signal_ParamLimits

0xab26,	// (0x00053d8f) level_5_signal_ParamLimits

0xab39,	// (0x00053da2) level_6_signal_ParamLimits

0xab4c,	// (0x00053db5) level_7_signal_ParamLimits

0xaadb,	// (0x00053d44) level_1_battery_ParamLimits

0xaaed,	// (0x00053d56) level_2_battery_ParamLimits

0xab00,	// (0x00053d69) level_3_battery_ParamLimits

0xab13,	// (0x00053d7c) level_4_battery_ParamLimits

0xab26,	// (0x00053d8f) level_5_battery_ParamLimits

0xab39,	// (0x00053da2) level_6_battery_ParamLimits

0xab4c,	// (0x00053db5) level_7_battery_ParamLimits

0x2ff7,	// (0x0004c260) bg_status_flat_pane_g1

0x2fff,	// (0x0004c268) bg_status_flat_pane_g2

0x3007,	// (0x0004c270) bg_status_flat_pane_g3

0x300f,	// (0x0004c278) bg_status_flat_pane_g4

0x3017,	// (0x0004c280) bg_status_flat_pane_g5

0x301f,	// (0x0004c288) bg_status_flat_pane_g6

0x3027,	// (0x0004c290) bg_status_flat_pane_g7

0x9bb7,	// (0x00052e20) tabs_3_active_pane_t1_ParamLimits

0x9bb7,	// (0x00052e20) tabs_3_passive_pane_t1_ParamLimits

0x9bd1,	// (0x00052e3a) tabs_4_active_pane_t1_ParamLimits

0x9bd1,	// (0x00052e3a) tabs_4_1_passive_pane_t1_ParamLimits

0xa6fd,	// (0x00053966) tabs_2_active_pane_t1_ParamLimits

0xa6fd,	// (0x00053966) tabs_2_passive_pane_t1_ParamLimits

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp4_ParamLimits

0xa70f,	// (0x00053978) tabs_2_long_active_pane_t1_ParamLimits

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp4_ParamLimits

0x0c94,	// (0x00049efd) list_single_midp_graphic_pane_t1_ParamLimits

0x9be3,	// (0x00052e4c) bg_active_tab_pane_cp5_ParamLimits

0xa722,	// (0x0005398b) tabs_3_long_active_pane_t1_ParamLimits

0x22c7,	// (0x0004b530) bg_passive_tab_pane_cp5_ParamLimits

0x0c94,	// (0x00049efd) list_single_midp_graphic_pane_t1

0xb796,	// (0x000549ff) bg_status_flat_pane_ParamLimits

0x247b,	// (0x0004b6e4) indicator_pane_cp2_ParamLimits

0x247b,	// (0x0004b6e4) indicator_pane_cp2

0xc441,	// (0x000556aa) navi_pane_srt_ParamLimits

0xc441,	// (0x000556aa) navi_pane_srt

0x25e2,	// (0x0004b84b) popup_clock_digital_analogue_window_cp1

0x9cfc,	// (0x00052f65) indicator_pane_t1

0xe76d,	// (0x000579d6) copy_highlight_pane

0xe76d,	// (0x000579d6) cursor_graphics_pane

0xe76d,	// (0x000579d6) graphic_within_text_pane

0xe76d,	// (0x000579d6) link_highlight_pane

0x3816,	// (0x0004ca7f) popup_preview_text_window_t5_ParamLimits

0x3816,	// (0x0004ca7f) popup_preview_text_window_t5

0xe7da,	// (0x00057a43) cursor_digital_pane

0xe7da,	// (0x00057a43) cursor_primary_pane

0xe7eb,	// (0x00057a54) cursor_primary_small_pane

0xe7f3,	// (0x00057a5c) cursor_secondary_pane

0xe7fb,	// (0x00057a64) cursor_title_pane

0xe7da,	// (0x00057a43) link_highlight_digital_pane

0xe7e2,	// (0x00057a4b) link_highlight_primary_pane

0xe7eb,	// (0x00057a54) link_highlight_primary_small_pane

0xe7f3,	// (0x00057a5c) link_highlight_secondary_pane

0xe7fb,	// (0x00057a64) link_highlight_title_pane

0xe7da,	// (0x00057a43) copy_highlight_digital_pane

0xe7da,	// (0x00057a43) copy_highlight_primary_pane

0xe7eb,	// (0x00057a54) copy_highlight_primary_small_pane

0xe7f3,	// (0x00057a5c) copy_highlight_secondary_pane

0xe7fb,	// (0x00057a64) copy_highlight_title_pane

0xe7f3,	// (0x00057a5c) graphic_text_digital_pane

0x3095,	// (0x0004c2fe) graphic_text_primary_pane

0x309e,	// (0x0004c307) graphic_text_primary_small_pane

0xe7eb,	// (0x00057a54) graphic_text_secondary_pane

0xe7da,	// (0x00057a43) graphic_text_title_pane

0xad26,	// (0x00053f8f) cursor_primary_pane_g1

0x3087,	// (0x0004c2f0) cursor_text_primary_t1

0xc69b,	// (0x00055904) cursor_primary_small_pane_g1

0x3079,	// (0x0004c2e2) cursor_text_primary_small_t1

0xc691,	// (0x000558fa) cursor_primary_small_pane_g1_copy1

0x3061,	// (0x0004c2ca) cursor_text_primary_small_t1_copy1

0x303f,	// (0x0004c2a8) cursor_text_title_t1

0xc687,	// (0x000558f0) cursor_title_pane_g1

0xad26,	// (0x00053f8f) cursor_digital_pane_g1

0xe803,	// (0x00057a6c) cursor_text_digital_t1

0xe811,	// (0x00057a7a) link_highlight_primary_pane_g1

0x2fe8,	// (0x0004c251) link_highlight_primary_pane_t1

0xe811,	// (0x00057a7a) link_highlight_primary_small_pane_g1

0xe819,	// (0x00057a82) link_highlight_primary_small_pane_t1

0xe828,	// (0x00057a91) link_highlight_secondary_pane_g1

0xe830,	// (0x00057a99) link_highlight_secondary_pane_t1

0x2f5c,	// (0x0004c1c5) link_highlight_title_pane_g1

0x2f64,	// (0x0004c1cd) link_highlight_title_pane_t1

0x2f45,	// (0x0004c1ae) link_highlight_digital_pane_g1

0x2f4d,	// (0x0004c1b6) link_highlight_digital_pane_t1

0x2e0d,	// (0x0004c076) copy_highlight_primary_pane_g1

0x2e24,	// (0x0004c08d) copy_highlight_primary_pane_t1

0x2e0d,	// (0x0004c076) copy_highlight_primary_small_pane_g1

0x2e15,	// (0x0004c07e) copy_highlight_primary_small_pane_t1

0xe83f,	// (0x00057aa8) copy_highlight_secondary_pane_g1

0xe847,	// (0x00057ab0) copy_highlight_secondary_pane_t1

0x2df6,	// (0x0004c05f) copy_highlight_title_pane_g1

0x2dfe,	// (0x0004c067) copy_highlight_title_pane_t1

0x2e0d,	// (0x0004c076) copy_highlight_digital_pane_g1

0x40fc,	// (0x0004d365) copy_highlight_digital_pane_t1

0x4050,	// (0x0004d2b9) graphic_text_primary_pane_g1

0x40e0,	// (0x0004d349) graphic_text_primary_pane_t1

0x40ee,	// (0x0004d357) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x00058c37) graphic_text_primary_pane_t

0x40bc,	// (0x0004d325) graphic_text_primary_small_pane_g1

0x40c4,	// (0x0004d32d) graphic_text_primary_small_pane_t1

0x40d2,	// (0x0004d33b) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x00058c32) graphic_text_primary_small_pane_t

0x4098,	// (0x0004d301) graphic_text_secondary_pane_g1

0x40a0,	// (0x0004d309) graphic_text_secondary_pane_t1

0x40ae,	// (0x0004d317) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x00058c2d) graphic_text_secondary_pane_t

0x4074,	// (0x0004d2dd) graphic_text_title_pane_g1

0x407c,	// (0x0004d2e5) graphic_text_title_pane_t1

0x408a,	// (0x0004d2f3) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x00058c28) graphic_text_title_pane_t

0x4050,	// (0x0004d2b9) graphic_text_digital_pane_g1

0x4058,	// (0x0004d2c1) graphic_text_digital_pane_t1

0x4066,	// (0x0004d2cf) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x00058c23) graphic_text_digital_pane_t

0x9be3,	// (0x00052e4c) navi_icon_pane_srt_ParamLimits

0x9be3,	// (0x00052e4c) navi_icon_pane_srt

0x9956,	// (0x00052bbf) navi_midp_pane_srt

0x9956,	// (0x00052bbf) navi_navi_pane_srt

0x9be3,	// (0x00052e4c) navi_text_pane_srt_ParamLimits

0x9be3,	// (0x00052e4c) navi_text_pane_srt

0x401b,	// (0x0004d284) navi_navi_icon_text_pane_srt

0x4023,	// (0x0004d28c) navi_navi_pane_srt_g1_ParamLimits

0x4023,	// (0x0004d28c) navi_navi_pane_srt_g1

0x4035,	// (0x0004d29e) navi_navi_pane_srt_g2_ParamLimits

0x4035,	// (0x0004d29e) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x00058c1e) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x00058c1e) navi_navi_pane_srt_g

0x4047,	// (0x0004d2b0) navi_navi_tabs_pane_srt

0x401b,	// (0x0004d284) navi_navi_text_pane_srt

0x401b,	// (0x0004d284) navi_navi_volume_pane_srt

0x400c,	// (0x0004d275) navi_navi_text_pane_srt_t1

0x1088,	// (0x0004a2f1) navi_navi_volume_pane_srt_g1

0x1090,	// (0x0004a2f9) volume_small_pane_srt_ParamLimits

0x1090,	// (0x0004a2f9) volume_small_pane_srt

0x03ac,	// (0x00049615) volume_small_pane_srt_g1_ParamLimits

0x03ac,	// (0x00049615) volume_small_pane_srt_g1

0x03bc,	// (0x00049625) volume_small_pane_srt_g2_ParamLimits

0x03bc,	// (0x00049625) volume_small_pane_srt_g2

0x03cd,	// (0x00049636) volume_small_pane_srt_g3_ParamLimits

0x03cd,	// (0x00049636) volume_small_pane_srt_g3

0x03de,	// (0x00049647) volume_small_pane_srt_g4_ParamLimits

0x03de,	// (0x00049647) volume_small_pane_srt_g4

0x03ef,	// (0x00049658) volume_small_pane_srt_g5_ParamLimits

0x03ef,	// (0x00049658) volume_small_pane_srt_g5

0x0400,	// (0x00049669) volume_small_pane_srt_g6_ParamLimits

0x0400,	// (0x00049669) volume_small_pane_srt_g6

0x0411,	// (0x0004967a) volume_small_pane_srt_g7_ParamLimits

0x0411,	// (0x0004967a) volume_small_pane_srt_g7

0x0422,	// (0x0004968b) volume_small_pane_srt_g8_ParamLimits

0x0422,	// (0x0004968b) volume_small_pane_srt_g8

0x0433,	// (0x0004969c) volume_small_pane_srt_g9_ParamLimits

0x0433,	// (0x0004969c) volume_small_pane_srt_g9

0x0444,	// (0x000496ad) volume_small_pane_srt_g10_ParamLimits

0x0444,	// (0x000496ad) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x000589cb) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x000589cb) volume_small_pane_srt_g

0xa049,	// (0x000532b2) query_popup_data_pane_cp2

0x3ff2,	// (0x0004d25b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ff2,	// (0x0004d25b) navi_navi_icon_text_pane_srt_t1

0x3095,	// (0x0004c2fe) navi_tabs_2_long_pane_srt

0x3095,	// (0x0004c2fe) navi_tabs_2_pane_srt

0x3095,	// (0x0004c2fe) navi_tabs_3_long_pane_srt

0x3095,	// (0x0004c2fe) navi_tabs_3_pane_srt

0x3095,	// (0x0004c2fe) navi_tabs_4_pane_srt

0x1068,	// (0x0004a2d1) tabs_2_active_pane_srt_ParamLimits

0x1068,	// (0x0004a2d1) tabs_2_active_pane_srt

0x1078,	// (0x0004a2e1) tabs_2_passive_pane_srt_ParamLimits

0x1078,	// (0x0004a2e1) tabs_2_passive_pane_srt

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp1_srt

0x3fbe,	// (0x0004d227) bg_passive_tab_pane_g1_cp1_srt

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp1_srt

0x3fc7,	// (0x0004d230) bg_passive_tab_pane_g3_cp1_srt

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp1_srt_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp1_srt

0x3fd0,	// (0x0004d239) tabs_2_active_pane_srt_g1

0xca32,	// (0x00055c9b) tabs_2_active_pane_srt_t1_ParamLimits

0xca32,	// (0x00055c9b) tabs_2_active_pane_srt_t1

0x3fbe,	// (0x0004d227) bg_active_tab_pane_g1_cp1_srt

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp1_srt

0x3fc7,	// (0x0004d230) bg_active_tab_pane_g3_cp1_srt

0x1035,	// (0x0004a29e) tabs_3_active_pane_srt_ParamLimits

0x1035,	// (0x0004a29e) tabs_3_active_pane_srt

0x1046,	// (0x0004a2af) tabs_3_passive_pane_cp_srt_ParamLimits

0x1046,	// (0x0004a2af) tabs_3_passive_pane_cp_srt

0x1057,	// (0x0004a2c0) tabs_3_passive_pane_srt_ParamLimits

0x1057,	// (0x0004a2c0) tabs_3_passive_pane_srt

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x286b,	// (0x0004bad4) bg_passive_tab_pane_cp2_srt

0xe856,	// (0x00057abf) bg_passive_tab_pane_g1_cp2_srt

0xe413,	// (0x0005767c) bg_passive_tab_pane_g2_cp2_srt

0xe85f,	// (0x00057ac8) bg_passive_tab_pane_g3_cp2_srt

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp2_srt_ParamLimits

0x9ba1,	// (0x00052e0a) bg_active_tab_pane_cp2_srt

0x3fa4,	// (0x0004d20d) tabs_3_active_pane_srt_g1

0xca1c,	// (0x00055c85) tabs_3_active_pane_srt_t1_ParamLimits

0xca1c,	// (0x00055c85) tabs_3_active_pane_srt_t1

0xe856,	// (0x00057abf) bg_active_tab_pane_g1_cp2_srt

0xe413,	// (0x0005767c) bg_active_tab_pane_g2_cp2_srt

0xe85f,	// (0x00057ac8) bg_active_tab_pane_g3_cp2_srt

0x0fed,	// (0x0004a256) tabs_4_active_pane_srt_ParamLimits

0x0fed,	// (0x0004a256) tabs_4_active_pane_srt

0x0fff,	// (0x0004a268) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0fff,	// (0x0004a268) tabs_4_passive_pane_cp2_srt

0x05d3,	// (0x0004983c) aid_size_cell_toolbar

0x3bc1,	// (0x0004ce2a) main_idle_act_pane_ParamLimits

0x07a6,	// (0x00049a0f) popup_large_graphic_colour_window_ParamLimits

0xb658,	// (0x000548c1) popup_toolbar_window_ParamLimits

0xb658,	// (0x000548c1) popup_toolbar_window

0x3d93,	// (0x0004cffc) list_single_graphic_2heading_pane_ParamLimits

0x3d93,	// (0x0004cffc) list_single_graphic_2heading_pane

0xa8d2,	// (0x00053b3b) aid_size_cell_apps_grid_lsc_pane

0xa8e4,	// (0x00053b4d) aid_size_cell_apps_grid_prt_pane

0x22c7,	// (0x0004b530) bg_wml_button_pane_cp1_ParamLimits

0x22c7,	// (0x0004b530) bg_wml_button_pane_cp1

0xc643,	// (0x000558ac) form_midp_field_text_pane_t1_ParamLimits

0x286b,	// (0x0004bad4) input_focus_pane_cp050_ParamLimits

0x2aa4,	// (0x0004bd0d) list_midp_form_text_pane_ParamLimits

0x2a56,	// (0x0004bcbf) input_focus_pane_cp051_ParamLimits

0x2a6a,	// (0x0004bcd3) list_midp_choice_pane_ParamLimits

0x2924,	// (0x0004bb8d) list_single_2graphic_pane_cp3_ParamLimits

0x2924,	// (0x0004bb8d) list_single_2graphic_pane_cp3

0x293a,	// (0x0004bba3) list_single_midp_graphic_pane_ParamLimits

0x293a,	// (0x0004bba3) list_single_midp_graphic_pane

0xe8da,	// (0x00057b43) list_single_graphic_2heading_pane_g1_ParamLimits

0xe8da,	// (0x00057b43) list_single_graphic_2heading_pane_g1

0xe8e6,	// (0x00057b4f) list_single_graphic_2heading_pane_g4_ParamLimits

0xe8e6,	// (0x00057b4f) list_single_graphic_2heading_pane_g4

0xe8f2,	// (0x00057b5b) list_single_graphic_2heading_pane_g5_ParamLimits

0xe8f2,	// (0x00057b5b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00058a1e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00058a1e) list_single_graphic_2heading_pane_g

0xe8fe,	// (0x00057b67) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8fe,	// (0x00057b67) list_single_graphic_2heading_pane_t1

0xe912,	// (0x00057b7b) list_single_graphic_2heading_pane_t2_ParamLimits

0xe912,	// (0x00057b7b) list_single_graphic_2heading_pane_t2

0xe92e,	// (0x00057b97) list_single_graphic_2heading_pane_t3_ParamLimits

0xe92e,	// (0x00057b97) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00058a25) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00058a25) list_single_graphic_2heading_pane_t

0x2735,	// (0x0004b99e) bg_popup_sub_pane_cp2

0x275f,	// (0x0004b9c8) grid_toobar_pane

0x0c0c,	// (0x00049e75) cell_toolbar_pane_ParamLimits

0x0c0c,	// (0x00049e75) cell_toolbar_pane

0x279b,	// (0x0004ba04) cell_toolbar_pane_g1_ParamLimits

0x279b,	// (0x0004ba04) cell_toolbar_pane_g1

0x27af,	// (0x0004ba18) cell_toolbar_pane_g2_ParamLimits

0x27af,	// (0x0004ba18) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00058a33) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00058a33) cell_toolbar_pane_g

0x27d1,	// (0x0004ba3a) grid_highlight_pane_cp2_ParamLimits

0x27d1,	// (0x0004ba3a) grid_highlight_pane_cp2

0x27eb,	// (0x0004ba54) toolbar_button_pane

0x27f7,	// (0x0004ba60) toolbar_button_pane_g1

0x27ff,	// (0x0004ba68) toolbar_button_pane_g2

0x2807,	// (0x0004ba70) toolbar_button_pane_g3

0x280f,	// (0x0004ba78) toolbar_button_pane_g4

0x2817,	// (0x0004ba80) toolbar_button_pane_g5

0x281f,	// (0x0004ba88) toolbar_button_pane_g6

0x2827,	// (0x0004ba90) toolbar_button_pane_g7

0x282f,	// (0x0004ba98) toolbar_button_pane_g8

0x2837,	// (0x0004baa0) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00058a38) toolbar_button_pane_g

0x0c50,	// (0x00049eb9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0c50,	// (0x00049eb9) list_single_2graphic_pane_g1_cp3

0xb92c,	// (0x00054b95) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb92c,	// (0x00054b95) list_single_2graphic_pane_g2_cp3

0xe5af,	// (0x00057818) list_single_2graphic_pane_g3_cp3

0x0c6d,	// (0x00049ed6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0c6d,	// (0x00049ed6) list_single_2graphic_pane_g4_cp3

0x0c79,	// (0x00049ee2) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0c79,	// (0x00049ee2) list_single_2graphic_pane_t1_cp3

0xe5a3,	// (0x0005780c) list_single_midp_graphic_pane_g2_ParamLimits

0xe5a3,	// (0x0005780c) list_single_midp_graphic_pane_g2

0xe8c2,	// (0x00057b2b) aid_zoom_text_primary

0xe8ca,	// (0x00057b33) aid_zoom_text_secondary

0xad7e,	// (0x00053fe7) status_small_pane_g7_ParamLimits

0xad7e,	// (0x00053fe7) status_small_pane_g7

0xada1,	// (0x0005400a) status_small_pane_t1_ParamLimits

0x9aa1,	// (0x00052d0a) title_pane_g2

0x0003,

0xf54e,	// (0x000587b7) title_pane_g

0xa0f5,	// (0x0005335e) aid_size_cell_colour_1_pane_ParamLimits

0xa0f5,	// (0x0005335e) aid_size_cell_colour_1_pane

0xa109,	// (0x00053372) aid_size_cell_colour_2_pane_ParamLimits

0xa109,	// (0x00053372) aid_size_cell_colour_2_pane

0xa11d,	// (0x00053386) aid_size_cell_colour_3_pane_ParamLimits

0xa11d,	// (0x00053386) aid_size_cell_colour_3_pane

0xa131,	// (0x0005339a) aid_size_cell_colour_4_pane_ParamLimits

0xa131,	// (0x0005339a) aid_size_cell_colour_4_pane

0xf3aa,	// (0x00058613) title_pane_stacon_g1_ParamLimits

0xf3aa,	// (0x00058613) title_pane_stacon_g1

0x2e7b,	// (0x0004c0e4) popup_note_wait_window_g3_ParamLimits

0x2e7b,	// (0x0004c0e4) popup_note_wait_window_g3

0x2ef2,	// (0x0004c15b) popup_note_wait_window_t5_ParamLimits

0x2ef2,	// (0x0004c15b) popup_note_wait_window_t5

0x9956,	// (0x00052bbf) main_feb_china_hwr_fs_writing_pane

0xaff1,	// (0x0005425a) popup_feb_china_hwr_fs_window_ParamLimits

0xaff1,	// (0x0005425a) popup_feb_china_hwr_fs_window

0xb93d,	// (0x00054ba6) aid_size_cell_hwr_fs_ParamLimits

0xb93d,	// (0x00054ba6) aid_size_cell_hwr_fs

0x286b,	// (0x0004bad4) bg_popup_sub_pane_cp3_ParamLimits

0x286b,	// (0x0004bad4) bg_popup_sub_pane_cp3

0xb952,	// (0x00054bbb) grid_hwr_fs_pane_ParamLimits

0xb952,	// (0x00054bbb) grid_hwr_fs_pane

0x0cef,	// (0x00049f58) linegrid_hwr_fs_pane_ParamLimits

0x0cef,	// (0x00049f58) linegrid_hwr_fs_pane

0xb96a,	// (0x00054bd3) cell_hwr_fs_pane_ParamLimits

0xb96a,	// (0x00054bd3) cell_hwr_fs_pane

0x2877,	// (0x0004bae0) linegrid_hwr_fs_pane_g1_ParamLimits

0x2877,	// (0x0004bae0) linegrid_hwr_fs_pane_g1

0xc5e4,	// (0x0005584d) linegrid_hwr_fs_pane_g2_ParamLimits

0xc5e4,	// (0x0005584d) linegrid_hwr_fs_pane_g2

0x2895,	// (0x0004bafe) linegrid_hwr_fs_pane_g3_ParamLimits

0x2895,	// (0x0004bafe) linegrid_hwr_fs_pane_g3

0x0d23,	// (0x00049f8c) linegrid_hwr_fs_pane_g4_ParamLimits

0x0d23,	// (0x00049f8c) linegrid_hwr_fs_pane_g4

0x0d41,	// (0x00049faa) linegrid_hwr_fs_pane_g5_ParamLimits

0x0d41,	// (0x00049faa) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x00058a5e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x00058a5e) linegrid_hwr_fs_pane_g

0x28a1,	// (0x0004bb0a) cell_hwr_fs_pane_g1_ParamLimits

0x28a1,	// (0x0004bb0a) cell_hwr_fs_pane_g1

0x2670,	// (0x0004b8d9) cell_hwr_fs_pane_g2_ParamLimits

0x2670,	// (0x0004b8d9) cell_hwr_fs_pane_g2

0xc5f6,	// (0x0005585f) cell_hwr_fs_pane_g3_ParamLimits

0xc5f6,	// (0x0005585f) cell_hwr_fs_pane_g3

0xc603,	// (0x0005586c) cell_hwr_fs_pane_g4_ParamLimits

0xc603,	// (0x0005586c) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x00058a69) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x00058a69) cell_hwr_fs_pane_g

0xb990,	// (0x00054bf9) cell_hwr_fs_pane_t1

0x9956,	// (0x00052bbf) grid_highlight_pane_cp6

0x9956,	// (0x00052bbf) main_idle_act2_pane

0xa6a2,	// (0x0005390b) aid_inside_area_popup_secondary

0xc6bb,	// (0x00055924) aid_inside_area_window_primary_ParamLimits

0xc6bb,	// (0x00055924) aid_inside_area_window_primary

0x410b,	// (0x0004d374) ai2_news_ticker_pane

0x4113,	// (0x0004d37c) aid_size_cell_ai1_link_ParamLimits

0x4113,	// (0x0004d37c) aid_size_cell_ai1_link

0x412d,	// (0x0004d396) popup_ai2_data_window_ParamLimits

0x412d,	// (0x0004d396) popup_ai2_data_window

0x414b,	// (0x0004d3b4) popup_ai2_link_window_ParamLimits

0x414b,	// (0x0004d3b4) popup_ai2_link_window

0x286b,	// (0x0004bad4) bg_popup_sub_pane_cp4_ParamLimits

0x286b,	// (0x0004bad4) bg_popup_sub_pane_cp4

0x4161,	// (0x0004d3ca) grid_ai2_link_pane_ParamLimits

0x4161,	// (0x0004d3ca) grid_ai2_link_pane

0x4178,	// (0x0004d3e1) popup_ai2_link_window_g1_ParamLimits

0x4178,	// (0x0004d3e1) popup_ai2_link_window_g1

0x4184,	// (0x0004d3ed) popup_ai2_link_window_g2_ParamLimits

0x4184,	// (0x0004d3ed) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x00058c3c) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x00058c3c) popup_ai2_link_window_g

0x4195,	// (0x0004d3fe) ai2_mp_button_pane

0x419d,	// (0x0004d406) ai2_mp_volume_pane

0x2a56,	// (0x0004bcbf) bg_popup_sub_pane_cp5_ParamLimits

0x2a56,	// (0x0004bcbf) bg_popup_sub_pane_cp5

0x41a5,	// (0x0004d40e) heading_ai2_gene_pane_ParamLimits

0x41a5,	// (0x0004d40e) heading_ai2_gene_pane

0x41b1,	// (0x0004d41a) list_ai2_gene_pane_ParamLimits

0x41b1,	// (0x0004d41a) list_ai2_gene_pane

0x41f9,	// (0x0004d462) cell_ai2_link_pane_ParamLimits

0x41f9,	// (0x0004d462) cell_ai2_link_pane

0x420f,	// (0x0004d478) cell_ai2_link_pane_g1

0x9956,	// (0x00052bbf) grid_highlight_pane_cp7

0x10a5,	// (0x0004a30e) ai2_mp_volume_pane_g1

0x42e2,	// (0x0004d54b) ai2_mp_volume_pane_g2

0x4257,	// (0x0004d4c0) list_ai2_gene_pane_t1

0x42ea,	// (0x0004d553) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x00058c55) ai2_mp_volume_pane_g

0x10ad,	// (0x0004a316) volume_small_pane_cp3

0x42f2,	// (0x0004d55b) aid_size_cell_ai2_button

0x42fa,	// (0x0004d563) grid_ai2_button_pane

0x4303,	// (0x0004d56c) cell_ai2_button_pane_ParamLimits

0x4303,	// (0x0004d56c) cell_ai2_button_pane

0x9866,	// (0x00052acf) cell_ai2_button_pane_g1

0x9956,	// (0x00052bbf) grid_highlight_pane_cp8

0x42a2,	// (0x0004d50b) ai2_gene_pane_t1_ParamLimits

0x42a2,	// (0x0004d50b) ai2_gene_pane_t1

0xaf6d,	// (0x000541d6) aid_height_parent_landscape

0xc862,	// (0x00055acb) aid_height_set_list

0x3bc1,	// (0x0004ce2a) aid_size_parent

0xc9f0,	// (0x00055c59) aid_size_cell_graphic_pane_ParamLimits

0x41c1,	// (0x0004d42a) popup_ai2_data_window_g1_ParamLimits

0x41c1,	// (0x0004d42a) popup_ai2_data_window_g1

0x41cd,	// (0x0004d436) ai2_news_ticker_pane_g1

0x41d5,	// (0x0004d43e) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x00058c41) ai2_news_ticker_pane_g

0x41dd,	// (0x0004d446) ai2_news_ticker_pane_t1

0x41eb,	// (0x0004d454) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x00058c46) ai2_news_ticker_pane_t

0x4218,	// (0x0004d481) heading_ai2_gene_pane_g1

0x4220,	// (0x0004d489) heading_ai2_gene_pane_t1_ParamLimits

0x4220,	// (0x0004d489) heading_ai2_gene_pane_t1

0x4235,	// (0x0004d49e) list_highlight_pane_cp6

0x423d,	// (0x0004d4a6) ai2_gene_pane_ParamLimits

0x423d,	// (0x0004d4a6) ai2_gene_pane

0x4265,	// (0x0004d4ce) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x00058c4b) list_ai2_gene_pane_t

0x4273,	// (0x0004d4dc) list_highlight_pane_cp8_ParamLimits

0x4273,	// (0x0004d4dc) list_highlight_pane_cp8

0x4284,	// (0x0004d4ed) ai2_gene_pane_g1_ParamLimits

0x4284,	// (0x0004d4ed) ai2_gene_pane_g1

0x4296,	// (0x0004d4ff) ai2_gene_pane_g2_ParamLimits

0x4296,	// (0x0004d4ff) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x00058c50) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x00058c50) ai2_gene_pane_g

0xa472,	// (0x000536db) scroll_pane_cp12

0xaf2a,	// (0x00054193) control_pane_t3_ParamLimits

0xaf2a,	// (0x00054193) control_pane_t3

0xad92,	// (0x00053ffb) status_small_pane_g8_ParamLimits

0xad92,	// (0x00053ffb) status_small_pane_g8

0xb093,	// (0x000542fc) popup_find_window_ParamLimits

0xb344,	// (0x000545ad) popup_note_image_window_ParamLimits

0xe946,	// (0x00057baf) list_double2_graphic_pane_vc_g1_ParamLimits

0xe946,	// (0x00057baf) list_double2_graphic_pane_vc_g1

0xe305,	// (0x0005756e) list_double2_graphic_pane_vc_g2_ParamLimits

0xe305,	// (0x0005756e) list_double2_graphic_pane_vc_g2

0x0c3c,	// (0x00049ea5) list_double2_graphic_pane_vc_g3_ParamLimits

0x0c3c,	// (0x00049ea5) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00058a2c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00058a2c) list_double2_graphic_pane_vc_g

0xe952,	// (0x00057bbb) list_double2_graphic_pane_vc_t1_ParamLimits

0xe952,	// (0x00057bbb) list_double2_graphic_pane_vc_t1

0xe305,	// (0x0005756e) list_single_heading_pane_vc_g1_ParamLimits

0xe305,	// (0x0005756e) list_single_heading_pane_vc_g1

0x0c3c,	// (0x00049ea5) list_single_heading_pane_vc_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005883b) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005883b) list_single_heading_pane_vc_g

0xe968,	// (0x00057bd1) list_single_heading_pane_vc_t1_ParamLimits

0xe968,	// (0x00057bd1) list_single_heading_pane_vc_t1

0xeddb,	// (0x00058044) list_single_heading_pane_vc_t2_ParamLimits

0xeddb,	// (0x00058044) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x00058a4d) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x00058a4d) list_single_heading_pane_vc_t

0x0caa,	// (0x00049f13) list_setting_number_pane_vc_g1_ParamLimits

0x0caa,	// (0x00049f13) list_setting_number_pane_vc_g1

0x0cb6,	// (0x00049f1f) list_setting_number_pane_vc_g2_ParamLimits

0x0cb6,	// (0x00049f1f) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x00058a52) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x00058a52) list_setting_number_pane_vc_g

0xeded,	// (0x00058056) list_setting_number_pane_vc_t1_ParamLimits

0xeded,	// (0x00058056) list_setting_number_pane_vc_t1

0xee01,	// (0x0005806a) list_setting_number_pane_vc_t2_ParamLimits

0xee01,	// (0x0005806a) list_setting_number_pane_vc_t2

0xee1d,	// (0x00058086) list_setting_number_pane_vc_t3_ParamLimits

0xee1d,	// (0x00058086) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x00058a57) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x00058a57) list_setting_number_pane_vc_t

0xee4b,	// (0x000580b4) set_value_pane_vc_ParamLimits

0xee4b,	// (0x000580b4) set_value_pane_vc

0x3d93,	// (0x0004cffc) list_double2_graphic_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double2_graphic_pane_vc

0x3d93,	// (0x0004cffc) list_double2_large_graphic_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double2_large_graphic_pane_vc

0x3d93,	// (0x0004cffc) list_double2_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double2_pane_vc

0x3d93,	// (0x0004cffc) list_double_graphic_heading_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_graphic_heading_pane_vc

0x3d93,	// (0x0004cffc) list_double_graphic_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_graphic_pane_vc

0x3d93,	// (0x0004cffc) list_double_heading_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_heading_pane_vc

0x3da7,	// (0x0004d010) list_double_large_graphic_pane_vc_ParamLimits

0x3da7,	// (0x0004d010) list_double_large_graphic_pane_vc

0x3d93,	// (0x0004cffc) list_double_number_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_number_pane_vc

0x3d93,	// (0x0004cffc) list_double_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_pane_vc

0x3d93,	// (0x0004cffc) list_double_time_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_double_time_pane_vc

0x3d93,	// (0x0004cffc) list_setting_number_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_setting_number_pane_vc

0x3d93,	// (0x0004cffc) list_setting_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_setting_pane_vc

0x3d93,	// (0x0004cffc) list_single_graphic_heading_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_single_graphic_heading_pane_vc

0x3d93,	// (0x0004cffc) list_single_heading_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_single_heading_pane_vc

0x3d93,	// (0x0004cffc) list_single_number_heading_pane_vc_ParamLimits

0x3d93,	// (0x0004cffc) list_single_number_heading_pane_vc

0xe946,	// (0x00057baf) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe946,	// (0x00057baf) list_double_graphic_heading_pane_vc_g1

0x10b6,	// (0x0004a31f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x10b6,	// (0x0004a31f) list_double_graphic_heading_pane_vc_g2

0x10c2,	// (0x0004a32b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x10c2,	// (0x0004a32b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x00058c5c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x00058c5c) list_double_graphic_heading_pane_vc_g

0xee94,	// (0x000580fd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xee94,	// (0x000580fd) list_double_graphic_heading_pane_vc_t1

0xeeaa,	// (0x00058113) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeeaa,	// (0x00058113) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x00058c63) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x00058c63) list_double_graphic_heading_pane_vc_t

0x0caa,	// (0x00049f13) list_setting_pane_vc_g1_ParamLimits

0x0caa,	// (0x00049f13) list_setting_pane_vc_g1

0x0cb6,	// (0x00049f1f) list_setting_pane_vc_g2_ParamLimits

0x0cb6,	// (0x00049f1f) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x00058a52) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x00058a52) list_setting_pane_vc_g

0xeec8,	// (0x00058131) list_setting_pane_vc_t1_ParamLimits

0xeec8,	// (0x00058131) list_setting_pane_vc_t1

0xeee4,	// (0x0005814d) list_setting_pane_vc_t2_ParamLimits

0xeee4,	// (0x0005814d) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x00058ca6) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x00058ca6) list_setting_pane_vc_t

0xee4b,	// (0x000580b4) set_value_pane_cp_vc_ParamLimits

0xee4b,	// (0x000580b4) set_value_pane_cp_vc

0xe305,	// (0x0005756e) list_single_number_heading_pane_vc_g1_ParamLimits

0xe305,	// (0x0005756e) list_single_number_heading_pane_vc_g1

0x0c3c,	// (0x00049ea5) list_single_number_heading_pane_vc_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005883b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005883b) list_single_number_heading_pane_vc_g

0xef00,	// (0x00058169) list_single_number_heading_pane_vc_t1_ParamLimits

0xef00,	// (0x00058169) list_single_number_heading_pane_vc_t1

0xeda1,	// (0x0005800a) list_single_number_heading_pane_vc_t2_ParamLimits

0xeda1,	// (0x0005800a) list_single_number_heading_pane_vc_t2

0xedb3,	// (0x0005801c) list_single_number_heading_pane_vc_t3_ParamLimits

0xedb3,	// (0x0005801c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x00058cab) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x00058cab) list_single_number_heading_pane_vc_t

0xe946,	// (0x00057baf) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe946,	// (0x00057baf) list_single_graphic_heading_pane_vc_g1

0xe305,	// (0x0005756e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe305,	// (0x0005756e) list_single_graphic_heading_pane_vc_g4

0x0c3c,	// (0x00049ea5) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x0c3c,	// (0x00049ea5) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00058a2c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00058a2c) list_single_graphic_heading_pane_vc_g

0xef16,	// (0x0005817f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xef16,	// (0x0005817f) list_single_graphic_heading_pane_vc_t1

0xef2c,	// (0x00058195) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef2c,	// (0x00058195) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x00058cb2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00058cb2) list_single_graphic_heading_pane_vc_t

0xe305,	// (0x0005756e) list_double2_pane_vc_g1_ParamLimits

0xe305,	// (0x0005756e) list_double2_pane_vc_g1

0x0c3c,	// (0x00049ea5) list_double2_pane_vc_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005883b) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005883b) list_double2_pane_vc_g

0xee7e,	// (0x000580e7) list_double2_pane_vc_t1_ParamLimits

0xee7e,	// (0x000580e7) list_double2_pane_vc_t1

0x10ce,	// (0x0004a337) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x10ce,	// (0x0004a337) list_double2_large_graphic_pane_vc_g1

0xe305,	// (0x0005756e) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe305,	// (0x0005756e) list_double2_large_graphic_pane_vc_g2

0x0c3c,	// (0x00049ea5) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x0c3c,	// (0x00049ea5) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x00058853) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x00058853) list_double2_large_graphic_pane_vc_g

0xedc5,	// (0x0005802e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xedc5,	// (0x0005802e) list_double2_large_graphic_pane_vc_t1

0x10da,	// (0x0004a343) list_double_time_pane_vc_g1_ParamLimits

0x10da,	// (0x0004a343) list_double_time_pane_vc_g1

0x10e6,	// (0x0004a34f) list_double_time_pane_vc_g2_ParamLimits

0x10e6,	// (0x0004a34f) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x00058cb7) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x00058cb7) list_double_time_pane_vc_g

0xef3e,	// (0x000581a7) list_double_time_pane_vc_t1_ParamLimits

0xef3e,	// (0x000581a7) list_double_time_pane_vc_t1

0xef68,	// (0x000581d1) list_double_time_pane_vc_t2_ParamLimits

0xef68,	// (0x000581d1) list_double_time_pane_vc_t2

0xefb1,	// (0x0005821a) list_double_time_pane_vc_t3_ParamLimits

0xefb1,	// (0x0005821a) list_double_time_pane_vc_t3

0xefc3,	// (0x0005822c) list_double_time_pane_vc_t4_ParamLimits

0xefc3,	// (0x0005822c) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x00058cbc) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x00058cbc) list_double_time_pane_vc_t

0xe305,	// (0x0005756e) list_double_pane_vc_g1_ParamLimits

0xe305,	// (0x0005756e) list_double_pane_vc_g1

0x0c3c,	// (0x00049ea5) list_double_pane_vc_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005883b) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005883b) list_double_pane_vc_g

0xefd7,	// (0x00058240) list_double_pane_vc_t1_ParamLimits

0xefd7,	// (0x00058240) list_double_pane_vc_t1

0xefeb,	// (0x00058254) list_double_pane_vc_t2_ParamLimits

0xefeb,	// (0x00058254) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x00058cc5) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x00058cc5) list_double_pane_vc_t

0xe305,	// (0x0005756e) list_double_number_pane_vc_g1_ParamLimits

0xe305,	// (0x0005756e) list_double_number_pane_vc_g1

0x0c3c,	// (0x00049ea5) list_double_number_pane_vc_g2_ParamLimits

0x0c3c,	// (0x00049ea5) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0005883b) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0005883b) list_double_number_pane_vc_g

0xee6c,	// (0x000580d5) list_double_number_pane_vc_t1_ParamLimits

0xee6c,	// (0x000580d5) list_double_number_pane_vc_t1

0xf001,	// (0x0005826a) list_double_number_pane_vc_t2_ParamLimits

0xf001,	// (0x0005826a) list_double_number_pane_vc_t2

0xefeb,	// (0x00058254) list_double_number_pane_vc_t3_ParamLimits

0xefeb,	// (0x00058254) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x00058cca) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x00058cca) list_double_number_pane_vc_t

0x10f2,	// (0x0004a35b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x10f2,	// (0x0004a35b) list_double_large_graphic_pane_vc_g1

0x1114,	// (0x0004a37d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x1114,	// (0x0004a37d) list_double_large_graphic_pane_vc_g2

0x1128,	// (0x0004a391) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1128,	// (0x0004a391) list_double_large_graphic_pane_vc_g3

0xf015,	// (0x0005827e) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf015,	// (0x0005827e) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x00058cd1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x00058cd1) list_double_large_graphic_pane_vc_g

0xf024,	// (0x0005828d) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf024,	// (0x0005828d) list_double_large_graphic_pane_vc_t1

0xf040,	// (0x000582a9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf040,	// (0x000582a9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x00058cda) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x00058cda) list_double_large_graphic_pane_vc_t

0x10b6,	// (0x0004a31f) list_double_heading_pane_vc_g1_ParamLimits

0x10b6,	// (0x0004a31f) list_double_heading_pane_vc_g1

0x10c2,	// (0x0004a32b) list_double_heading_pane_vc_g2_ParamLimits

0x10c2,	// (0x0004a32b) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x00058cdf) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x00058cdf) list_double_heading_pane_vc_g

0xf060,	// (0x000582c9) list_double_heading_pane_vc_t1_ParamLimits

0xf060,	// (0x000582c9) list_double_heading_pane_vc_t1

0xf072,	// (0x000582db) list_double_heading_pane_vc_t2_ParamLimits

0xf072,	// (0x000582db) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x00058ce4) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x00058ce4) list_double_heading_pane_vc_t

0xf08a,	// (0x000582f3) list_double_graphic_pane_vc_g1_ParamLimits

0xf08a,	// (0x000582f3) list_double_graphic_pane_vc_g1

0x1137,	// (0x0004a3a0) list_double_graphic_pane_vc_g2_ParamLimits

0x1137,	// (0x0004a3a0) list_double_graphic_pane_vc_g2

0xe305,	// (0x0005756e) list_double_graphic_pane_vc_g3_ParamLimits

0xe305,	// (0x0005756e) list_double_graphic_pane_vc_g3

0x0003,

0xfa80,	// (0x00058ce9) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x00058ce9) list_double_graphic_pane_vc_g

0xf096,	// (0x000582ff) list_double_graphic_pane_vc_t1_ParamLimits

0xf096,	// (0x000582ff) list_double_graphic_pane_vc_t1

0xf0c0,	// (0x00058329) list_double_graphic_pane_vc_t2_ParamLimits

0xf0c0,	// (0x00058329) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00058cf2) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00058cf2) list_double_graphic_pane_vc_t

0xec32,	// (0x00057e9b) aid_size_cell_fastswap

0x9870,	// (0x00052ad9) aid_size_cell_touch_ParamLimits

0x9870,	// (0x00052ad9) aid_size_cell_touch

0xf298,	// (0x00058501) popup_fast_swap_wide_window_ParamLimits

0xf298,	// (0x00058501) popup_fast_swap_wide_window

0x9a38,	// (0x00052ca1) touch_pane_ParamLimits

0x9a38,	// (0x00052ca1) touch_pane

0xa534,	// (0x0005379d) button_value_adjust_pane_cp2

0xe31f,	// (0x00057588) button_value_adjust_pane_cp4

0xe327,	// (0x00057590) form_field_data_pane_cp2

0x94c7,	// (0x00052730) form_field_data_wide_pane_cp2

0xa9e7,	// (0x00053c50) bg_scroll_pane_ParamLimits

0xf506,	// (0x0005876f) scroll_handle_pane_ParamLimits

0xf51a,	// (0x00058783) scroll_sc2_down_pane_ParamLimits

0xf51a,	// (0x00058783) scroll_sc2_down_pane

0xaa18,	// (0x00053c81) scroll_sc2_up_pane_ParamLimits

0xaa18,	// (0x00053c81) scroll_sc2_up_pane

0xcb72,	// (0x00055ddb) grid_wheel_folder_pane_g1_ParamLimits

0xcb72,	// (0x00055ddb) grid_wheel_folder_pane_g1

0x026b,	// (0x000494d4) clock_nsta_pane_cp2_ParamLimits

0x026b,	// (0x000494d4) clock_nsta_pane_cp2

0xac70,	// (0x00053ed9) listscroll_midp_pane_ParamLimits

0xac7c,	// (0x00053ee5) midp_canvas_pane

0x2297,	// (0x0004b500) nsta_clock_indic_pane

0x22d3,	// (0x0004b53c) listscroll_form_pane_vc

0x22db,	// (0x0004b544) listscroll_set_pane_vc_ParamLimits

0x22db,	// (0x0004b544) listscroll_set_pane_vc

0xb7be,	// (0x00054a27) clock_nsta_pane

0xb7e8,	// (0x00054a51) indicator_nsta_pane

0x2735,	// (0x0004b99e) bg_popup_sub_pane_cp2_ParamLimits

0x2749,	// (0x0004b9b2) find_pane_cp2_ParamLimits

0x2749,	// (0x0004b9b2) find_pane_cp2

0x275f,	// (0x0004b9c8) grid_toobar_pane_ParamLimits

0x283f,	// (0x0004baa8) list_form_gen_pane_vc_ParamLimits

0x283f,	// (0x0004baa8) list_form_gen_pane_vc

0x2855,	// (0x0004babe) scroll_pane_cp8_vc_ParamLimits

0x2855,	// (0x0004babe) scroll_pane_cp8_vc

0x28d1,	// (0x0004bb3a) data_form_wide_pane_vc_ParamLimits

0x28d1,	// (0x0004bb3a) data_form_wide_pane_vc

0x28dd,	// (0x0004bb46) form_field_data_wide_pane_vc_g1

0x28e5,	// (0x0004bb4e) form_field_data_wide_pane_vc_t1_ParamLimits

0x28e5,	// (0x0004bb4e) form_field_data_wide_pane_vc_t1

0xa548,	// (0x000537b1) input_focus_pane_cp6_vc_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_cp6_vc

0x2c01,	// (0x0004be6a) list_midp_pane_ParamLimits

0x3f98,	// (0x0004d201) scroll_pane_cp16_ParamLimits

0x3f98,	// (0x0004d201) scroll_pane_cp16

0x2c4f,	// (0x0004beb8) button_value_adjust_pane_ParamLimits

0x2c4f,	// (0x0004beb8) button_value_adjust_pane

0xc873,	// (0x00055adc) button_value_adjust_pane_cp6_ParamLimits

0xc873,	// (0x00055adc) button_value_adjust_pane_cp6

0xc8ed,	// (0x00055b56) settings_code_pane_cp_ParamLimits

0xc8ed,	// (0x00055b56) settings_code_pane_cp

0x9866,	// (0x00052acf) cell_touch_pane_g1

0x9866,	// (0x00052acf) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00058971) cell_touch_pane_g

0xca48,	// (0x00055cb1) cell_touch_pane_cp_ParamLimits

0xca48,	// (0x00055cb1) cell_touch_pane_cp

0xca64,	// (0x00055ccd) cell_touch_pane_ParamLimits

0xca64,	// (0x00055ccd) cell_touch_pane

0x9866,	// (0x00052acf) scroll_sc2_down_pane_g1

0x9866,	// (0x00052acf) scroll_sc2_up_pane_g1

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp4_vc

0x4336,	// (0x0004d59f) list_set_graphic_pane_vc_g1_ParamLimits

0x4336,	// (0x0004d59f) list_set_graphic_pane_vc_g1

0x4342,	// (0x0004d5ab) list_set_graphic_pane_vc_g2_ParamLimits

0x4342,	// (0x0004d5ab) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x00058c68) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x00058c68) list_set_graphic_pane_vc_g

0x434e,	// (0x0004d5b7) text_primary_small_cp13_vc_ParamLimits

0x434e,	// (0x0004d5b7) text_primary_small_cp13_vc

0xe46c,	// (0x000576d5) list_set_graphic_pane_vc_ParamLimits

0xe46c,	// (0x000576d5) list_set_graphic_pane_vc

0x9956,	// (0x00052bbf) input_focus_pane_cp2_vc

0x9866,	// (0x00052acf) setting_code_pane_vc_g1

0x9bfa,	// (0x00052e63) setting_code_pane_vc_t1

0x4366,	// (0x0004d5cf) set_text_pane_vc_t1_ParamLimits

0x4366,	// (0x0004d5cf) set_text_pane_vc_t1

0x9956,	// (0x00052bbf) input_focus_pane_cp1_vc

0x4384,	// (0x0004d5ed) list_set_text_pane_vc

0x9866,	// (0x00052acf) setting_text_pane_vc_g1

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp2_vc

0x9bf1,	// (0x00052e5a) setting_slider_graphic_pane_vc_g1

0x438e,	// (0x0004d5f7) setting_slider_graphic_pane_vc_t1

0x43a0,	// (0x0004d609) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x00058c6d) setting_slider_graphic_pane_vc_t

0x43b2,	// (0x0004d61b) slider_set_pane_cp_vc

0x43bc,	// (0x0004d625) slider_set_pane_vc_g1

0x43c5,	// (0x0004d62e) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x00058c72) slider_set_pane_vc_g

0xa5a0,	// (0x00053809) set_opt_bg_pane_g1_copy1

0xa5a8,	// (0x00053811) set_opt_bg_pane_g2_copy1

0x43f1,	// (0x0004d65a) set_opt_bg_pane_g3_copy1

0xa5b8,	// (0x00053821) set_opt_bg_pane_g4_copy1

0xa5c0,	// (0x00053829) set_opt_bg_pane_g5_copy1

0xa5c8,	// (0x00053831) set_opt_bg_pane_g6_copy1

0x43fb,	// (0x0004d664) set_opt_bg_pane_g7_copy1

0x4405,	// (0x0004d66e) set_opt_bg_pane_g8_copy1

0x440f,	// (0x0004d678) set_opt_bg_pane_g9_copy1

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp_vc

0x4419,	// (0x0004d682) setting_slider_pane_vc_t1

0x4428,	// (0x0004d691) setting_slider_pane_vc_t2

0x443a,	// (0x0004d6a3) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x00058c81) setting_slider_pane_vc_t

0x444c,	// (0x0004d6b5) slider_set_pane_vc

0x0d65,	// (0x00049fce) volume_set_pane_vc_g1

0x0d6e,	// (0x00049fd7) volume_set_pane_vc_g2

0x0d77,	// (0x00049fe0) volume_set_pane_vc_g3

0x0d80,	// (0x00049fe9) volume_set_pane_vc_g4

0x0d89,	// (0x00049ff2) volume_set_pane_vc_g5

0x0d92,	// (0x00049ffb) volume_set_pane_vc_g6

0x0d9b,	// (0x0004a004) volume_set_pane_vc_g7

0x0da4,	// (0x0004a00d) volume_set_pane_vc_g8

0x0dad,	// (0x0004a016) volume_set_pane_vc_g9

0x0db6,	// (0x0004a01f) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x00058c88) volume_set_pane_vc_g

0x4454,	// (0x0004d6bd) volume_set_pane_vc

0x445e,	// (0x0004d6c7) button_value_adjust_pane_cp1_vc

0x4468,	// (0x0004d6d1) list_highlight_pane_cp2_vc

0x4471,	// (0x0004d6da) list_set_pane_vc_ParamLimits

0x4471,	// (0x0004d6da) list_set_pane_vc

0x44df,	// (0x0004d748) main_pane_set_vc_t1_ParamLimits

0x44df,	// (0x0004d748) main_pane_set_vc_t1

0x44f4,	// (0x0004d75d) main_pane_set_vc_t2_ParamLimits

0x44f4,	// (0x0004d75d) main_pane_set_vc_t2

0x4506,	// (0x0004d76f) main_pane_set_vc_t3_ParamLimits

0x4506,	// (0x0004d76f) main_pane_set_vc_t3

0x451a,	// (0x0004d783) main_pane_set_vc_t4_ParamLimits

0x451a,	// (0x0004d783) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x00058c9d) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x00058c9d) main_pane_set_vc_t

0x452e,	// (0x0004d797) setting_code_pane_vc_ParamLimits

0x452e,	// (0x0004d797) setting_code_pane_vc

0x453f,	// (0x0004d7a8) setting_slider_graphic_pane_vc

0x453f,	// (0x0004d7a8) setting_slider_pane_vc

0x453f,	// (0x0004d7a8) setting_text_pane_vc

0x453f,	// (0x0004d7a8) setting_volume_pane_vc

0x4549,	// (0x0004d7b2) scroll_pane_cp121_vc

0xa522,	// (0x0005378b) set_content_pane_vc

0x4551,	// (0x0004d7ba) button_value_adjust_pane_g1

0x455a,	// (0x0004d7c3) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00058cf7) button_value_adjust_pane_g

0x4563,	// (0x0004d7cc) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4563,	// (0x0004d7cc) form_field_slider_wide_pane_vc_t1

0x4575,	// (0x0004d7de) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4575,	// (0x0004d7de) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa93,	// (0x00058cfc) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00058cfc) form_field_slider_wide_pane_vc_t

0x9ba1,	// (0x00052e0a) input_focus_pane_cp10_vc_ParamLimits

0x9ba1,	// (0x00052e0a) input_focus_pane_cp10_vc

0x45a1,	// (0x0004d80a) slider_cont_pane_cp1_vc_ParamLimits

0x45a1,	// (0x0004d80a) slider_cont_pane_cp1_vc

0x45b3,	// (0x0004d81c) slider_form_pane_g1_cp2

0x43c5,	// (0x0004d62e) slider_form_pane_g2_cp2

0x45e0,	// (0x0004d849) form_field_slider_pane_vc_t3

0x45ee,	// (0x0004d857) form_field_slider_pane_vc_t4

0x45fc,	// (0x0004d865) slider_form_pane_vc_ParamLimits

0x45fc,	// (0x0004d865) slider_form_pane_vc

0x4609,	// (0x0004d872) form_field_slider_pane_vc_t1_ParamLimits

0x4609,	// (0x0004d872) form_field_slider_pane_vc_t1

0x4575,	// (0x0004d7de) form_field_slider_pane_vc_t2_ParamLimits

0x4575,	// (0x0004d7de) form_field_slider_pane_vc_t2

0x0001,

0xfaa5,	// (0x00058d0e) form_field_slider_pane_vc_t_ParamLimits

0xfaa5,	// (0x00058d0e) form_field_slider_pane_vc_t

0x9ba1,	// (0x00052e0a) input_focus_pane_cp9_vc_ParamLimits

0x9ba1,	// (0x00052e0a) input_focus_pane_cp9_vc

0x461f,	// (0x0004d888) slider_cont_pane_vc_ParamLimits

0x461f,	// (0x0004d888) slider_cont_pane_vc

0x4633,	// (0x0004d89c) list_form_graphic_pane_cp_vc_ParamLimits

0x4633,	// (0x0004d89c) list_form_graphic_pane_cp_vc

0x28dd,	// (0x0004bb46) form_field_popup_wide_pane_vc_g1

0x4648,	// (0x0004d8b1) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4648,	// (0x0004d8b1) form_field_popup_wide_pane_vc_t1

0xa548,	// (0x000537b1) input_focus_pane_cp8_vc_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_cp8_vc

0x468d,	// (0x0004d8f6) list_form_wide_pane_vc_ParamLimits

0x468d,	// (0x0004d8f6) list_form_wide_pane_vc

0x4699,	// (0x0004d902) list_form_graphic_pane_vc_g1

0x46a1,	// (0x0004d90a) list_form_graphic_pane_vc_t1_ParamLimits

0x46a1,	// (0x0004d90a) list_form_graphic_pane_vc_t1

0x9be3,	// (0x00052e4c) list_highlight_pane_cp5_vc_ParamLimits

0x9be3,	// (0x00052e4c) list_highlight_pane_cp5_vc

0x46bd,	// (0x0004d926) list_form_graphic_pane_vc_ParamLimits

0x46bd,	// (0x0004d926) list_form_graphic_pane_vc

0x28dd,	// (0x0004bb46) form_field_popup_pane_vc_g1

0x46d3,	// (0x0004d93c) form_field_popup_pane_vc_t1_ParamLimits

0x46d3,	// (0x0004d93c) form_field_popup_pane_vc_t1

0xa548,	// (0x000537b1) input_focus_pane_cp7_vc_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_cp7_vc

0x46ea,	// (0x0004d953) list_form_pane_vc_ParamLimits

0x46ea,	// (0x0004d953) list_form_pane_vc

0x46f6,	// (0x0004d95f) data_form_pane_vc_t1_ParamLimits

0x46f6,	// (0x0004d95f) data_form_pane_vc_t1

0xa5a0,	// (0x00053809) input_focus_pane_vc_g1

0xa5a8,	// (0x00053811) input_focus_pane_vc_g2

0xa5b0,	// (0x00053819) input_focus_pane_vc_g3

0xa5b8,	// (0x00053821) input_focus_pane_vc_g4

0xa5c0,	// (0x00053829) input_focus_pane_vc_g5

0xa5c8,	// (0x00053831) input_focus_pane_vc_g6

0xa5d0,	// (0x00053839) input_focus_pane_vc_g7

0xa5d8,	// (0x00053841) input_focus_pane_vc_g8

0xa5e0,	// (0x00053849) input_focus_pane_vc_g9

0x9866,	// (0x00052acf) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000588fa) input_focus_pane_vc_g

0x28d1,	// (0x0004bb3a) data_form_pane_vc_ParamLimits

0x28d1,	// (0x0004bb3a) data_form_pane_vc

0x28dd,	// (0x0004bb46) form_field_data_pane_vc_g1

0x4713,	// (0x0004d97c) form_field_data_pane_vc_t1_ParamLimits

0x4713,	// (0x0004d97c) form_field_data_pane_vc_t1

0xa548,	// (0x000537b1) input_focus_pane_vc_ParamLimits

0xa548,	// (0x000537b1) input_focus_pane_vc

0x472d,	// (0x0004d996) button_value_adjust_pane_cp3_vc

0x4735,	// (0x0004d99e) button_value_adjust_pane_cp5_vc

0x473d,	// (0x0004d9a6) form_field_data_pane_vc_ParamLimits

0x473d,	// (0x0004d9a6) form_field_data_pane_vc

0x4758,	// (0x0004d9c1) form_field_data_pane_vc_cp2

0x4760,	// (0x0004d9c9) form_field_data_wide_pane_vc_ParamLimits

0x4760,	// (0x0004d9c9) form_field_data_wide_pane_vc

0x477a,	// (0x0004d9e3) form_field_data_wide_pane_vc_cp2

0x4782,	// (0x0004d9eb) form_field_popup_pane_vc_ParamLimits

0x4782,	// (0x0004d9eb) form_field_popup_pane_vc

0x479d,	// (0x0004da06) form_field_popup_wide_pane_vc_ParamLimits

0x479d,	// (0x0004da06) form_field_popup_wide_pane_vc

0x47b7,	// (0x0004da20) form_field_slider_pane_vc_ParamLimits

0x47b7,	// (0x0004da20) form_field_slider_pane_vc

0x47ca,	// (0x0004da33) form_field_slider_wide_pane_vc_ParamLimits

0x47ca,	// (0x0004da33) form_field_slider_wide_pane_vc

0xca82,	// (0x00055ceb) grid_touch_1_pane_ParamLimits

0xca82,	// (0x00055ceb) grid_touch_1_pane

0xca96,	// (0x00055cff) grid_touch_2_pane_ParamLimits

0xca96,	// (0x00055cff) grid_touch_2_pane

0x489a,	// (0x0004db03) touch_pane_g1_ParamLimits

0x489a,	// (0x0004db03) touch_pane_g1

0x4803,	// (0x0004da6c) cell_app_pane_cp_wide_ParamLimits

0x4803,	// (0x0004da6c) cell_app_pane_cp_wide

0x4814,	// (0x0004da7d) grid_popup_fast_wide_pane_ParamLimits

0x4814,	// (0x0004da7d) grid_popup_fast_wide_pane

0x4828,	// (0x0004da91) scroll_pane_cp19_ParamLimits

0x4828,	// (0x0004da91) scroll_pane_cp19

0x9956,	// (0x00052bbf) bg_popup_window_pane_cp20

0x483c,	// (0x0004daa5) listscroll_popup_fast_wide_pane

0xcac2,	// (0x00055d2b) grid_indicator_nsta_pane

0x4844,	// (0x0004daad) clock_nsta_pane_g1

0x484d,	// (0x0004dab6) clock_nsta_pane_t1

0xcad0,	// (0x00055d39) cell_indicator_nsta_pane_ParamLimits

0xcad0,	// (0x00055d39) cell_indicator_nsta_pane

0x489a,	// (0x0004db03) cell_indicator_nsta_pane_g1

0xcae7,	// (0x00055d50) cell_indicator_nsta_pane_g2

0x0001,

0xfab6,	// (0x00058d1f) cell_indicator_nsta_pane_g

0x48b5,	// (0x0004db1e) clock_nsta_pane_cp

0x48be,	// (0x0004db27) indicator_nsta_pane_cp

0x48c6,	// (0x0004db2f) nsta_clock_indic_pane_g1

0x9cdb,	// (0x00052f44) grid_indicator_pane

0xc204,	// (0x0005546d) scroll_pane_cp29

0x01ba,	// (0x00049423) indicator_nsta_pane_cp2_ParamLimits

0x01ba,	// (0x00049423) indicator_nsta_pane_cp2

0x9be3,	// (0x00052e4c) main_apps_wheel_pane

0x2abe,	// (0x0004bd27) form_midp_field_text_pane_ParamLimits

0x2c0d,	// (0x0004be76) scroll_bar_cp050_ParamLimits

0x4916,	// (0x0004db7f) cell_indicator_pane_ParamLimits

0x4916,	// (0x0004db7f) cell_indicator_pane

0x492e,	// (0x0004db97) cell_indicator_pane_g1

0xcaf4,	// (0x00055d5d) grid_wheel_folder_pane_ParamLimits

0xcaf4,	// (0x00055d5d) grid_wheel_folder_pane

0xcb02,	// (0x00055d6b) list_wheel_apps_pane_ParamLimits

0xcb02,	// (0x00055d6b) list_wheel_apps_pane

0xcb10,	// (0x00055d79) main_apps_wheel_pane_g1_ParamLimits

0xcb10,	// (0x00055d79) main_apps_wheel_pane_g1

0xcb20,	// (0x00055d89) main_apps_wheel_pane_g2_ParamLimits

0xcb20,	// (0x00055d89) main_apps_wheel_pane_g2

0x0001,

0xfad2,	// (0x00058d3b) main_apps_wheel_pane_g_ParamLimits

0xfad2,	// (0x00058d3b) main_apps_wheel_pane_g

0xcb30,	// (0x00055d99) main_apps_wheel_pane_t1_ParamLimits

0xcb30,	// (0x00055d99) main_apps_wheel_pane_t1

0xcb48,	// (0x00055db1) list_wheel_apps_pane_g1

0xcb50,	// (0x00055db9) list_wheel_apps_pane_g2

0xcb58,	// (0x00055dc1) list_wheel_apps_pane_g3

0xcb60,	// (0x00055dc9) list_wheel_apps_pane_g4

0xcb68,	// (0x00055dd1) list_wheel_apps_pane_g5

0x0004,

0xfad7,	// (0x00058d40) list_wheel_apps_pane_g

0xe601,	// (0x0005786a) navi_icon_text_pane

0xb6b0,	// (0x00054919) aid_fill_nsta

0xcb85,	// (0x00055dee) navi_icon_text_pane_g1

0xcb91,	// (0x00055dfa) navi_icon_text_pane_t1

0xe497,	// (0x00057700) list_set_graphic_pane_t1_ParamLimits

0xe497,	// (0x00057700) list_set_graphic_pane_t1

0x3372,	// (0x0004c5db) popup_midp_note_alarm_window_t6_ParamLimits

0x3372,	// (0x0004c5db) popup_midp_note_alarm_window_t6

0x3384,	// (0x0004c5ed) popup_midp_note_alarm_window_t7_ParamLimits

0x3384,	// (0x0004c5ed) popup_midp_note_alarm_window_t7

0x3396,	// (0x0004c5ff) popup_midp_note_alarm_window_t8_ParamLimits

0x3396,	// (0x0004c5ff) popup_midp_note_alarm_window_t8

0x33a8,	// (0x0004c611) popup_midp_note_alarm_window_t9_ParamLimits

0x33a8,	// (0x0004c611) popup_midp_note_alarm_window_t9

0x33ba,	// (0x0004c623) popup_midp_note_alarm_window_t10_ParamLimits

0x33ba,	// (0x0004c623) popup_midp_note_alarm_window_t10

0x33cc,	// (0x0004c635) popup_midp_note_alarm_window_t11_ParamLimits

0x33cc,	// (0x0004c635) popup_midp_note_alarm_window_t11

0x33de,	// (0x0004c647) scroll_pane_cp17_ParamLimits

0x33de,	// (0x0004c647) scroll_pane_cp17

0x0d65,	// (0x00049fce) volume_small_pane_cp_g1

0x1154,	// (0x0004a3bd) volume_small_pane_cp_g2

0x115d,	// (0x0004a3c6) volume_small_pane_cp_g3

0x1166,	// (0x0004a3cf) volume_small_pane_cp_g4

0x116f,	// (0x0004a3d8) volume_small_pane_cp_g5

0x1178,	// (0x0004a3e1) volume_small_pane_cp_g6

0x1181,	// (0x0004a3ea) volume_small_pane_cp_g7

0x118a,	// (0x0004a3f3) volume_small_pane_cp_g8

0x1193,	// (0x0004a3fc) volume_small_pane_cp_g9

0x119c,	// (0x0004a405) volume_small_pane_cp_g10

0xe799,	// (0x00057a02) midp_ticker_pane_g1_ParamLimits

0xe7a5,	// (0x00057a0e) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x000589c6) midp_ticker_pane_g_ParamLimits

0xad14,	// (0x00053f7d) midp_ticker_pane_t1_ParamLimits

0xb6d4,	// (0x0005493d) aid_fill_nsta_2

0x2bf9,	// (0x0004be62) list_form2_midp_pane

0x3d62,	// (0x0004cfcb) midp_editing_number_pane_ParamLimits

0x3d71,	// (0x0004cfda) midp_ticker_pane_ParamLimits

0x4a21,	// (0x0004dc8a) form2_midp_field_pane

0x4a45,	// (0x0004dcae) scroll_pane_cp51

0x4a65,	// (0x0004dcce) form2_midp_button_pane_ParamLimits

0x4a65,	// (0x0004dcce) form2_midp_button_pane

0x4a77,	// (0x0004dce0) form2_midp_content_pane_ParamLimits

0x4a77,	// (0x0004dce0) form2_midp_content_pane

0x4a91,	// (0x0004dcfa) form2_midp_field_choice_group_pane

0x4a99,	// (0x0004dd02) form2_midp_field_pane_g1

0x4aa1,	// (0x0004dd0a) form2_midp_field_pane_g2

0x4aa9,	// (0x0004dd12) form2_midp_field_pane_g3

0x4ab1,	// (0x0004dd1a) form2_midp_field_pane_g4

0x0003,

0xfafc,	// (0x00058d65) form2_midp_field_pane_g

0x4ab9,	// (0x0004dd22) form2_midp_gauge_slider_pane

0x4ac1,	// (0x0004dd2a) form2_midp_gauge_wait_pane

0x4ac9,	// (0x0004dd32) form2_midp_image_pane_ParamLimits

0x4ac9,	// (0x0004dd32) form2_midp_image_pane

0x4ae4,	// (0x0004dd4d) form2_midp_label_pane_ParamLimits

0x4ae4,	// (0x0004dd4d) form2_midp_label_pane

0xcbbf,	// (0x00055e28) form2_midp_label_pane_cp_ParamLimits

0xcbbf,	// (0x00055e28) form2_midp_label_pane_cp

0x4b24,	// (0x0004dd8d) form2_midp_string_pane_ParamLimits

0x4b24,	// (0x0004dd8d) form2_midp_string_pane

0x96b0,	// (0x00052919) form2_midp_text_pane_ParamLimits

0x96b0,	// (0x00052919) form2_midp_text_pane

0x4b36,	// (0x0004dd9f) form2_midp_time_pane

0x4b46,	// (0x0004ddaf) input_focus_pane_cp51_ParamLimits

0x4b46,	// (0x0004ddaf) input_focus_pane_cp51

0x4b5e,	// (0x0004ddc7) form2_midp_label_pane_t1_ParamLimits

0x4b5e,	// (0x0004ddc7) form2_midp_label_pane_t1

0x96d3,	// (0x0005293c) form2_mdip_text_pane_t1_ParamLimits

0x96d3,	// (0x0005293c) form2_mdip_text_pane_t1

0xf0de,	// (0x00058347) form2_midp_time_pane_t1

0x4bac,	// (0x0004de15) form2_midp_gauge_slider_pane_t1

0xcbe0,	// (0x00055e49) form2_midp_gauge_slider_pane_t2

0xcbf2,	// (0x00055e5b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb05,	// (0x00058d6e) form2_midp_gauge_slider_pane_t

0x4be2,	// (0x0004de4b) form2_midp_slider_pane

0x4bee,	// (0x0004de57) form2_midp_gauge_wait_pane_t1

0x4bfc,	// (0x0004de65) form2_midp_wait_pane_ParamLimits

0x4bfc,	// (0x0004de65) form2_midp_wait_pane

0x2924,	// (0x0004bb8d) list_single_2graphic_pane_cp4_ParamLimits

0x2924,	// (0x0004bb8d) list_single_2graphic_pane_cp4

0xcc04,	// (0x00055e6d) list_single_midp_graphic_pane_cp_ParamLimits

0xcc04,	// (0x00055e6d) list_single_midp_graphic_pane_cp

0x9956,	// (0x00052bbf) list_highlight_pane_cp20

0x4c40,	// (0x0004dea9) list_single_2graphic_pane_g1_cp4

0x4218,	// (0x0004d481) list_single_2graphic_pane_g2_cp4

0x4c48,	// (0x0004deb1) list_single_2graphic_pane_t1_cp4

0x9be3,	// (0x00052e4c) list_highlight_pane_cp21

0x4c57,	// (0x0004dec0) list_single_midp_graphic_pane_g4_cp

0x4c66,	// (0x0004decf) list_single_midp_graphic_pane_t1_cp

0xcc25,	// (0x00055e8e) form2_mdip_string_pane_t1_ParamLimits

0xcc25,	// (0x00055e8e) form2_mdip_string_pane_t1

0x9956,	// (0x00052bbf) bg_wml_button_pane_cp2

0x9866,	// (0x00052acf) form2_midp_image_pane_g1

0xf359,	// (0x000585c2) list_double_large_graphic_pane_g5_ParamLimits

0xf359,	// (0x000585c2) list_double_large_graphic_pane_g5

0xac70,	// (0x00053ed9) midp_form_pane_ParamLimits

0x9be3,	// (0x00052e4c) main_apps_wheel_pane_ParamLimits

0xb3ca,	// (0x00054633) popup_preview_window_ParamLimits

0xb3ca,	// (0x00054633) popup_preview_window

0x0ba5,	// (0x00049e0e) popup_touch_info_window_ParamLimits

0x0ba5,	// (0x00049e0e) popup_touch_info_window

0x0bc7,	// (0x00049e30) popup_touch_menu_window_ParamLimits

0x0bc7,	// (0x00049e30) popup_touch_menu_window

0x985c,	// (0x00052ac5) bg_popup_sub_pane_cp6

0x4d17,	// (0x0004df80) list_touch_menu_pane

0x4d1f,	// (0x0004df88) list_single_touch_menu_pane_ParamLimits

0x4d1f,	// (0x0004df88) list_single_touch_menu_pane

0x4d37,	// (0x0004dfa0) list_single_touch_menu_pane_t1

0x9be3,	// (0x00052e4c) bg_popup_sub_pane_cp7_ParamLimits

0x9be3,	// (0x00052e4c) bg_popup_sub_pane_cp7

0x4d45,	// (0x0004dfae) heading_sub_pane

0x4d4d,	// (0x0004dfb6) list_touch_info_pane_ParamLimits

0x4d4d,	// (0x0004dfb6) list_touch_info_pane

0x4d5c,	// (0x0004dfc5) list_single_touch_info_pane_ParamLimits

0x4d5c,	// (0x0004dfc5) list_single_touch_info_pane

0x4d6e,	// (0x0004dfd7) list_single_touch_info_pane_t1

0x4d7c,	// (0x0004dfe5) list_single_touch_info_pane_t2

0x0001,

0xfb13,	// (0x00058d7c) list_single_touch_info_pane_t

0xe76d,	// (0x000579d6) bg_popup_heading_pane_cp

0x4d8a,	// (0x0004dff3) heading_sub_pane_t1

0x286b,	// (0x0004bad4) bg_popup_preview_window_pane_cp_ParamLimits

0x286b,	// (0x0004bad4) bg_popup_preview_window_pane_cp

0x4d45,	// (0x0004dfae) heading_preview_pane

0x4d4d,	// (0x0004dfb6) list_preview_pane_ParamLimits

0x4d4d,	// (0x0004dfb6) list_preview_pane

0x4d98,	// (0x0004e001) popup_preview_window_g1

0x4d5c,	// (0x0004dfc5) list_single_preview_pane_ParamLimits

0x4d5c,	// (0x0004dfc5) list_single_preview_pane

0x4da0,	// (0x0004e009) list_single_preview_pane_g1

0x4da8,	// (0x0004e011) list_single_preview_pane_t1

0x4d6e,	// (0x0004dfd7) list_single_preview_pane_t2

0x0001,

0xfb18,	// (0x00058d81) list_single_preview_pane_t

0x4db6,	// (0x0004e01f) bg_popup_heading_pane_cp2_ParamLimits

0x4db6,	// (0x0004e01f) bg_popup_heading_pane_cp2

0x4dcc,	// (0x0004e035) heading_preview_pane_g1

0x4dd4,	// (0x0004e03d) heading_preview_pane_t1_ParamLimits

0x4dd4,	// (0x0004e03d) heading_preview_pane_t1

0x9d0b,	// (0x00052f74) soft_indicator_pane_t1_ParamLimits

0xa44f,	// (0x000536b8) scroll_pane_ParamLimits

0xaa06,	// (0x00053c6f) scroll_sc2_left_pane

0xaa0f,	// (0x00053c78) scroll_sc2_right_pane

0xaa2e,	// (0x00053c97) scroll_bg_pane_g1_ParamLimits

0xaa43,	// (0x00053cac) scroll_bg_pane_g2_ParamLimits

0xaa5b,	// (0x00053cc4) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00058951) scroll_bg_pane_g_ParamLimits

0xaa2e,	// (0x00053c97) scroll_handle_pane_g1_ParamLimits

0xaa7d,	// (0x00053ce6) scroll_handle_pane_g2_ParamLimits

0xaa5b,	// (0x00053cc4) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00058958) scroll_handle_pane_g_ParamLimits

0x0605,	// (0x0004986e) popup_choice_list_window_ParamLimits

0x0605,	// (0x0004986e) popup_choice_list_window

0x2741,	// (0x0004b9aa) choice_list_pane

0x27c3,	// (0x0004ba2c) cell_toolbar_pane_t1

0x27eb,	// (0x0004ba54) toolbar_button_pane_ParamLimits

0x38a8,	// (0x0004cb11) ai_gene_pane_1_t2_ParamLimits

0x38a8,	// (0x0004cb11) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x00058b7b) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x00058b7b) ai_gene_pane_1_t

0x4df1,	// (0x0004e05a) scroll_sc2_left_pane_g1

0x4df1,	// (0x0004e05a) scroll_sc2_right_pane_g1

0x22c7,	// (0x0004b530) bg_popup_sub_pane_cp10

0x4dfb,	// (0x0004e064) list_choice_list_pane

0x3df8,	// (0x0004d061) list_single_choice_list_pane_ParamLimits

0x3df8,	// (0x0004d061) list_single_choice_list_pane

0x4e14,	// (0x0004e07d) list_single_choice_list_pane_g1

0xa6e0,	// (0x00053949) list_single_choice_list_pane_t1_ParamLimits

0xa6e0,	// (0x00053949) list_single_choice_list_pane_t1

0x4e1c,	// (0x0004e085) choice_list_pane_g1

0x4e24,	// (0x0004e08d) choice_list_pane_t1

0x985c,	// (0x00052ac5) input_focus_pane_cp11

0xa89d,	// (0x00053b06) title_pane_stacon_g2_ParamLimits

0xa89d,	// (0x00053b06) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00058937) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00058937) title_pane_stacon_g

0xe76d,	// (0x000579d6) cursor_press_pane

0xb047,	// (0x000542b0) popup_fep_hwr_window_ParamLimits

0xb047,	// (0x000542b0) popup_fep_hwr_window

0x0749,	// (0x000499b2) popup_fep_vkb_window_ParamLimits

0x0749,	// (0x000499b2) popup_fep_vkb_window

0x4e32,	// (0x0004e09b) cursor_press_pane_g1

0x0002,

0xfb41,	// (0x00058daa) fep_vkb_side_pane_g_ParamLimits

0x11de,	// (0x0004a447) fep_hwr_candidate_pane_ParamLimits

0x11de,	// (0x0004a447) fep_hwr_candidate_pane

0x1208,	// (0x0004a471) fep_hwr_side_pane_ParamLimits

0x1208,	// (0x0004a471) fep_hwr_side_pane

0x122a,	// (0x0004a493) fep_hwr_top_pane_ParamLimits

0x122a,	// (0x0004a493) fep_hwr_top_pane

0x1242,	// (0x0004a4ab) fep_hwr_write_pane_ParamLimits

0x1242,	// (0x0004a4ab) fep_hwr_write_pane

0xfb41,	// (0x00058daa) fep_vkb_side_pane_g

0x4e3a,	// (0x0004e0a3) fep_hwr_top_pane_g1

0x4e4c,	// (0x0004e0b5) fep_hwr_top_pane_g2

0x126e,	// (0x0004a4d7) fep_hwr_top_pane_g3

0x0002,

0xfb1d,	// (0x00058d86) fep_hwr_top_pane_g

0x1283,	// (0x0004a4ec) fep_hwr_top_text_pane

0xc271,	// (0x000554da) fep_hwr_top_text_pane_g1

0x4e82,	// (0x0004e0eb) fep_hwr_top_text_pane_t1

0x138d,	// (0x0004a5f6) fep_hwr_candidate_pane_g1

0x50cd,	// (0x0004e336) fep_vkb_keypad_pane_g3_ParamLimits

0x50cd,	// (0x0004e336) fep_vkb_keypad_pane_g3

0x50f9,	// (0x0004e362) fep_vkb_keypad_pane_g4_ParamLimits

0x50f9,	// (0x0004e362) fep_vkb_keypad_pane_g4

0x5170,	// (0x0004e3d9) fep_vkb_bottom_pane_g2_ParamLimits

0x5170,	// (0x0004e3d9) fep_vkb_bottom_pane_g2

0x0001,

0xfb48,	// (0x00058db1) fep_vkb_bottom_pane_g_ParamLimits

0xfb48,	// (0x00058db1) fep_vkb_bottom_pane_g

0x4df1,	// (0x0004e05a) cell_vkb_side_pane_g2

0x0001,

0xfb52,	// (0x00058dbb) cell_vkb_side_pane_g

0x51fb,	// (0x0004e464) cell_vkb_side_pane_t1

0x5209,	// (0x0004e472) cell_vkb_side_pane_t1_copy1

0x4df1,	// (0x0004e05a) bg_fep_vkb_candidate_pane_g2

0x534d,	// (0x0004e5b6) cell_vkb_candidate_pane_ParamLimits

0x4e90,	// (0x0004e0f9) aid_size_cell_vkb_ParamLimits

0x4e90,	// (0x0004e0f9) aid_size_cell_vkb

0x534d,	// (0x0004e5b6) cell_vkb_candidate_pane

0x13a7,	// (0x0004a610) bg_popup_fep_shadow_pane_g1

0xcce9,	// (0x00055f52) fep_vkb_bottom_pane_ParamLimits

0xcce9,	// (0x00055f52) fep_vkb_bottom_pane

0x4f5f,	// (0x0004e1c8) fep_vkb_candidate_pane_ParamLimits

0x4f5f,	// (0x0004e1c8) fep_vkb_candidate_pane

0xcd15,	// (0x00055f7e) fep_vkb_keypad_pane_ParamLimits

0xcd15,	// (0x00055f7e) fep_vkb_keypad_pane

0xcd3c,	// (0x00055fa5) fep_vkb_side_pane_ParamLimits

0xcd3c,	// (0x00055fa5) fep_vkb_side_pane

0xcd78,	// (0x00055fe1) fep_vkb_top_pane_ParamLimits

0xcd78,	// (0x00055fe1) fep_vkb_top_pane

0x5026,	// (0x0004e28f) fep_vkb_top_pane_g1_ParamLimits

0x5026,	// (0x0004e28f) fep_vkb_top_pane_g1

0x5035,	// (0x0004e29e) fep_vkb_top_pane_g2_ParamLimits

0x5035,	// (0x0004e29e) fep_vkb_top_pane_g2

0x5044,	// (0x0004e2ad) fep_vkb_top_pane_g3_ParamLimits

0x5044,	// (0x0004e2ad) fep_vkb_top_pane_g3

0x0003,

0xfb38,	// (0x00058da1) fep_vkb_top_pane_g_ParamLimits

0xfb38,	// (0x00058da1) fep_vkb_top_pane_g

0x5062,	// (0x0004e2cb) fep_vkb_top_text_pane_ParamLimits

0x5062,	// (0x0004e2cb) fep_vkb_top_text_pane

0xcdb4,	// (0x0005601d) fep_vkb_side_pane_g1_ParamLimits

0xcdb4,	// (0x0005601d) fep_vkb_side_pane_g1

0x50bc,	// (0x0004e325) grid_vkb_side_pane_ParamLimits

0x50bc,	// (0x0004e325) grid_vkb_side_pane

0x13af,	// (0x0004a618) bg_popup_fep_shadow_pane_g2

0x13b8,	// (0x0004a621) bg_popup_fep_shadow_pane_g3

0x13c0,	// (0x0004a629) bg_popup_fep_shadow_pane_g4

0x13c9,	// (0x0004a632) bg_popup_fep_shadow_pane_g5

0x13d3,	// (0x0004a63c) bg_popup_fep_shadow_pane_g6

0x13db,	// (0x0004a644) bg_popup_fep_shadow_pane_g7

0xa5c0,	// (0x00053829) bg_popup_fep_shadow_pane_g8

0x511b,	// (0x0004e384) grid_vkb_keypad_number_pane_ParamLimits

0x511b,	// (0x0004e384) grid_vkb_keypad_number_pane

0x512f,	// (0x0004e398) grid_vkb_keypad_pane_ParamLimits

0x512f,	// (0x0004e398) grid_vkb_keypad_pane

0x5155,	// (0x0004e3be) fep_vkb_bottom_pane_g1_ParamLimits

0x5155,	// (0x0004e3be) fep_vkb_bottom_pane_g1

0x517e,	// (0x0004e3e7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x517e,	// (0x0004e3e7) grid_vkb_keypad_bottom_left_pane

0x5193,	// (0x0004e3fc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5193,	// (0x0004e3fc) grid_vkb_keypad_bottom_right_pane

0x51a8,	// (0x0004e411) fep_vkb_top_text_pane_g1

0xcdfb,	// (0x00056064) fep_vkb_top_text_pane_t1

0xce0d,	// (0x00056076) cell_vkb_side_pane_ParamLimits

0xce0d,	// (0x00056076) cell_vkb_side_pane

0x4df1,	// (0x0004e05a) cell_vkb_side_pane_g1

0x5217,	// (0x0004e480) cell_vkb_keypad_pane_ParamLimits

0x5217,	// (0x0004e480) cell_vkb_keypad_pane

0x52a4,	// (0x0004e50d) cell_vkb_keypad_pane_g1

0x0008,

0xfb65,	// (0x00058dce) bg_popup_fep_shadow_pane_g

0x4df1,	// (0x0004e05a) cell_hwr_side_pane_g1

0x4df1,	// (0x0004e05a) cell_hwr_side_pane_g2

0x52ae,	// (0x0004e517) cell_vkb_keypad_pane_t1

0xce23,	// (0x0005608c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce23,	// (0x0005608c) cell_vkb_keypad_bottom_left_pane

0xce38,	// (0x000560a1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce38,	// (0x000560a1) cell_vkb_keypad_bottom_right_pane

0x4df1,	// (0x0004e05a) cell_vkb_keypad_bottom_left_pane_g1

0x4df1,	// (0x0004e05a) cell_vkb_keypad_bottom_right_pane_g1

0x5312,	// (0x0004e57b) cell_vkb_keypad_number_pane_ParamLimits

0x5312,	// (0x0004e57b) cell_vkb_keypad_number_pane

0x5331,	// (0x0004e59a) cell_vkb_keypad_number_pane_g1

0x533b,	// (0x0004e5a4) cell_vkb_keypad_number_pane_g2

0x5344,	// (0x0004e5ad) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb57,	// (0x00058dc0) cell_vkb_keypad_number_pane_g

0x52ae,	// (0x0004e517) cell_vkb_keypad_number_pane_t1

0x536e,	// (0x0004e5d7) fep_vkb_candidate_pane_g1

0x0001,

0xfb52,	// (0x00058dbb) cell_hwr_side_pane_g

0x5387,	// (0x0004e5f0) cell_hwr_side_pane_t1

0x13ed,	// (0x0004a656) cell_hwr_side_pane_t1_copy1

0x5054,	// (0x0004e2bd) cell_hwr_candidate_pane_g1

0x13fb,	// (0x0004a664) cell_hwr_candidate_pane_t1

0x4df1,	// (0x0004e05a) cell_vkb_candidate_pane_g2

0x540d,	// (0x0004e676) cell_vkb_candidate_pane_t1

0x11a5,	// (0x0004a40e) bg_popup_fep_shadow_pane_ParamLimits

0x11a5,	// (0x0004a40e) bg_popup_fep_shadow_pane

0xccaf,	// (0x00055f18) bg_fep_hwr_top_pane_g4

0x4e5e,	// (0x0004e0c7) bg_hwr_side_pane_g1_ParamLimits

0x4e5e,	// (0x0004e0c7) bg_hwr_side_pane_g1

0xbb46,	// (0x00054daf) cell_hwr_side_pane_ParamLimits

0xbb46,	// (0x00054daf) cell_hwr_side_pane

0x12fe,	// (0x0004a567) fep_hwr_write_pane_g1_ParamLimits

0x12fe,	// (0x0004a567) fep_hwr_write_pane_g1

0x130b,	// (0x0004a574) fep_hwr_write_pane_g2_ParamLimits

0x130b,	// (0x0004a574) fep_hwr_write_pane_g2

0x1318,	// (0x0004a581) fep_hwr_write_pane_g3_ParamLimits

0x1318,	// (0x0004a581) fep_hwr_write_pane_g3

0xbb66,	// (0x00054dcf) fep_hwr_write_pane_g4_ParamLimits

0xbb66,	// (0x00054dcf) fep_hwr_write_pane_g4

0x0005,

0xfb24,	// (0x00058d8d) fep_hwr_write_pane_g_ParamLimits

0xfb24,	// (0x00058d8d) fep_hwr_write_pane_g

0xccaf,	// (0x00055f18) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xccaf,	// (0x00055f18) bg_fep_hwr_candidate_pane_g2

0x133b,	// (0x0004a5a4) cell_hwr_candidate_pane_ParamLimits

0x133b,	// (0x0004a5a4) cell_hwr_candidate_pane

0x138d,	// (0x0004a5f6) fep_hwr_candidate_pane_g1_ParamLimits

0x4ebe,	// (0x0004e127) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4ebe,	// (0x0004e127) bg_popup_fep_shadow_pane_cp2

0x5054,	// (0x0004e2bd) fep_vkb_top_pane_g4_ParamLimits

0x5054,	// (0x0004e2bd) fep_vkb_top_pane_g4

0x509a,	// (0x0004e303) fep_vkb_side_pane_g2_ParamLimits

0x509a,	// (0x0004e303) fep_vkb_side_pane_g2

0x93c9,	// (0x00052632) list_setting_pane_t4_ParamLimits

0x93c9,	// (0x00052632) list_setting_pane_t4

0x9465,	// (0x000526ce) list_setting_number_pane_t5_ParamLimits

0x9465,	// (0x000526ce) list_setting_number_pane_t5

0xc2a8,	// (0x00055511) list_double_heading_pane_cp2_ParamLimits

0xc2a8,	// (0x00055511) list_double_heading_pane_cp2

0x541b,	// (0x0004e684) list_double_heading_pane_g1_cp2_ParamLimits

0x541b,	// (0x0004e684) list_double_heading_pane_g1_cp2

0x5427,	// (0x0004e690) list_double_heading_pane_g2_cp2_ParamLimits

0x5427,	// (0x0004e690) list_double_heading_pane_g2_cp2

0x543b,	// (0x0004e6a4) list_double_heading_pane_t1_cp2_ParamLimits

0x543b,	// (0x0004e6a4) list_double_heading_pane_t1_cp2

0x5451,	// (0x0004e6ba) list_double_heading_pane_t2_cp2_ParamLimits

0x5451,	// (0x0004e6ba) list_double_heading_pane_t2_cp2

0x72ca,	// (0x00050533) aid_value_unit2

0xf2bc,	// (0x00058525) popup_preview_fixed_window

0x9ec6,	// (0x0005312f) bg_popup_preview_window_pane_cp02

0x5463,	// (0x0004e6cc) list_preview_fixed_pane

0x54a9,	// (0x0004e712) list_empty_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_empty_pane_fp

0x54a9,	// (0x0004e712) list_single_cale_day_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_cale_day_pane_fp

0x54a9,	// (0x0004e712) list_single_graphic_heading_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_graphic_heading_pane_fp

0x54a9,	// (0x0004e712) list_single_graphic_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_graphic_pane_fp

0x54a9,	// (0x0004e712) list_single_heading_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_heading_pane_fp

0x54a9,	// (0x0004e712) list_single_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_pane_fp

0x54c2,	// (0x0004e72b) list_single_pane_fp_g1_ParamLimits

0x54c2,	// (0x0004e72b) list_single_pane_fp_g1

0x541b,	// (0x0004e684) list_single_pane_fp_g2_ParamLimits

0x541b,	// (0x0004e684) list_single_pane_fp_g2

0x5427,	// (0x0004e690) list_single_pane_fp_g3_ParamLimits

0x5427,	// (0x0004e690) list_single_pane_fp_g3

0x54ce,	// (0x0004e737) list_single_pane_fp_g4_ParamLimits

0x54ce,	// (0x0004e737) list_single_pane_fp_g4

0x0003,

0xfb86,	// (0x00058def) list_single_pane_fp_g_ParamLimits

0xfb86,	// (0x00058def) list_single_pane_fp_g

0xf0f1,	// (0x0005835a) list_single_pane_fp_t1_ParamLimits

0xf0f1,	// (0x0005835a) list_single_pane_fp_t1

0xf108,	// (0x00058371) list_single_graphic_pane_fp_g1_ParamLimits

0xf108,	// (0x00058371) list_single_graphic_pane_fp_g1

0x54c2,	// (0x0004e72b) list_single_graphic_pane_fp_g2_ParamLimits

0x54c2,	// (0x0004e72b) list_single_graphic_pane_fp_g2

0x541b,	// (0x0004e684) list_single_graphic_pane_fp_g3_ParamLimits

0x541b,	// (0x0004e684) list_single_graphic_pane_fp_g3

0x5427,	// (0x0004e690) list_single_graphic_pane_fp_g4_ParamLimits

0x5427,	// (0x0004e690) list_single_graphic_pane_fp_g4

0x54ce,	// (0x0004e737) list_single_graphic_pane_fp_g5_ParamLimits

0x54ce,	// (0x0004e737) list_single_graphic_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058df8) list_single_graphic_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058df8) list_single_graphic_pane_fp_g

0xf114,	// (0x0005837d) list_single_graphic_pane_fp_t1_ParamLimits

0xf114,	// (0x0005837d) list_single_graphic_pane_fp_t1

0xf108,	// (0x00058371) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf108,	// (0x00058371) list_single_graphic_heading_pane_fp_g1

0x54c2,	// (0x0004e72b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x54c2,	// (0x0004e72b) list_single_graphic_heading_pane_fp_g2

0x541b,	// (0x0004e684) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x541b,	// (0x0004e684) list_single_graphic_heading_pane_fp_g3

0x5427,	// (0x0004e690) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5427,	// (0x0004e690) list_single_graphic_heading_pane_fp_g4

0x54ce,	// (0x0004e737) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x54ce,	// (0x0004e737) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058df8) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058df8) list_single_graphic_heading_pane_fp_g

0xf12a,	// (0x00058393) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf12a,	// (0x00058393) list_single_graphic_heading_pane_fp_t1

0xf140,	// (0x000583a9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf140,	// (0x000583a9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9a,	// (0x00058e03) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9a,	// (0x00058e03) list_single_graphic_heading_pane_fp_t

0xf152,	// (0x000583bb) list_single_cale_day_pane_fp_g1_ParamLimits

0xf152,	// (0x000583bb) list_single_cale_day_pane_fp_g1

0x54da,	// (0x0004e743) list_single_cale_day_pane_fp_g2_ParamLimits

0x54da,	// (0x0004e743) list_single_cale_day_pane_fp_g2

0x1419,	// (0x0004a682) list_single_cale_day_pane_fp_g3_ParamLimits

0x1419,	// (0x0004a682) list_single_cale_day_pane_fp_g3

0x1441,	// (0x0004a6aa) list_single_cale_day_pane_fp_g4_ParamLimits

0x1441,	// (0x0004a6aa) list_single_cale_day_pane_fp_g4

0x1465,	// (0x0004a6ce) list_single_cale_day_pane_fp_g5_ParamLimits

0x1465,	// (0x0004a6ce) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9f,	// (0x00058e08) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9f,	// (0x00058e08) list_single_cale_day_pane_fp_g

0xf18a,	// (0x000583f3) list_single_cale_day_pane_fp_t1_ParamLimits

0xf18a,	// (0x000583f3) list_single_cale_day_pane_fp_t1

0xf1b0,	// (0x00058419) list_single_cale_day_pane_fp_t2_ParamLimits

0xf1b0,	// (0x00058419) list_single_cale_day_pane_fp_t2

0xf1c9,	// (0x00058432) list_single_cale_day_pane_fp_t3_ParamLimits

0xf1c9,	// (0x00058432) list_single_cale_day_pane_fp_t3

0x0002,

0xfbaa,	// (0x00058e13) list_single_cale_day_pane_fp_t_ParamLimits

0xfbaa,	// (0x00058e13) list_single_cale_day_pane_fp_t

0x54c2,	// (0x0004e72b) list_empty_pane_fp_g1_ParamLimits

0x54c2,	// (0x0004e72b) list_empty_pane_fp_g1

0xf1e2,	// (0x0005844b) list_empty_pane_fp_t1

0xf1f0,	// (0x00058459) list_empty_pane_fp_t2

0x0001,

0xfbb1,	// (0x00058e1a) list_empty_pane_fp_t

0x54c2,	// (0x0004e72b) list_single_heading_pane_fp_g1_ParamLimits

0x54c2,	// (0x0004e72b) list_single_heading_pane_fp_g1

0x541b,	// (0x0004e684) list_single_heading_pane_fp_g2_ParamLimits

0x541b,	// (0x0004e684) list_single_heading_pane_fp_g2

0x5427,	// (0x0004e690) list_single_heading_pane_fp_g3_ParamLimits

0x5427,	// (0x0004e690) list_single_heading_pane_fp_g3

0x0002,

0xfbb6,	// (0x00058e1f) list_single_heading_pane_fp_g_ParamLimits

0xfbb6,	// (0x00058e1f) list_single_heading_pane_fp_g

0xf1fe,	// (0x00058467) list_single_heading_pane_fp_t1_ParamLimits

0xf1fe,	// (0x00058467) list_single_heading_pane_fp_t1

0xf210,	// (0x00058479) list_single_heading_pane_fp_t2_ParamLimits

0xf210,	// (0x00058479) list_single_heading_pane_fp_t2

0x0001,

0xfbbd,	// (0x00058e26) list_single_heading_pane_fp_t_ParamLimits

0xfbbd,	// (0x00058e26) list_single_heading_pane_fp_t

0xa734,	// (0x0005399d) aid_size_cell_fast

0x9e46,	// (0x000530af) soft_indicator_pane_cp1_t1

0xa771,	// (0x000539da) cell_app_pane_cp2_ParamLimits

0xa771,	// (0x000539da) cell_app_pane_cp2

0x11c7,	// (0x0004a430) fep_hwr_candidate_drop_down_list_pane

0xccbd,	// (0x00055f26) fep_hwr_candidate_pane_g3_ParamLimits

0xccbd,	// (0x00055f26) fep_hwr_candidate_pane_g3

0xccca,	// (0x00055f33) fep_hwr_candidate_pane_g4_ParamLimits

0xccca,	// (0x00055f33) fep_hwr_candidate_pane_g4

0x0002,

0xfb31,	// (0x00058d9a) fep_hwr_candidate_pane_g_ParamLimits

0xfb31,	// (0x00058d9a) fep_hwr_candidate_pane_g

0x4f4e,	// (0x0004e1b7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4f4e,	// (0x0004e1b7) fep_vkb_candidate_drop_down_list_pane

0x5376,	// (0x0004e5df) fep_vkb_candidate_pane_g3

0x537e,	// (0x0004e5e7) fep_vkb_candidate_pane_g4

0x0002,

0xfb5e,	// (0x00058dc7) fep_vkb_candidate_pane_g

0x5054,	// (0x0004e2bd) cell_hwr_candidate_pane_g1_ParamLimits

0x5395,	// (0x0004e5fe) cell_hwr_candidate_pane_g3_ParamLimits

0x5395,	// (0x0004e5fe) cell_hwr_candidate_pane_g3

0x53b6,	// (0x0004e61f) cell_hwr_candidate_pane_g4_ParamLimits

0x53b6,	// (0x0004e61f) cell_hwr_candidate_pane_g4

0x0002,

0xfb78,	// (0x00058de1) cell_hwr_candidate_pane_g_ParamLimits

0xfb78,	// (0x00058de1) cell_hwr_candidate_pane_g

0x53d7,	// (0x0004e640) cell_vkb_candidate_pane_g3_ParamLimits

0x53d7,	// (0x0004e640) cell_vkb_candidate_pane_g3

0x53f2,	// (0x0004e65b) cell_vkb_candidate_pane_g4_ParamLimits

0x53f2,	// (0x0004e65b) cell_vkb_candidate_pane_g4

0x54e6,	// (0x0004e74f) cell_app_pane_cp2_g1_ParamLimits

0x54e6,	// (0x0004e74f) cell_app_pane_cp2_g1

0x5504,	// (0x0004e76d) cell_app_pane_cp2_g2_ParamLimits

0x5504,	// (0x0004e76d) cell_app_pane_cp2_g2

0x0001,

0xfbc2,	// (0x00058e2b) cell_app_pane_cp2_g_ParamLimits

0xfbc2,	// (0x00058e2b) cell_app_pane_cp2_g

0x5510,	// (0x0004e779) cell_app_pane_cp2_t1_ParamLimits

0x5510,	// (0x0004e779) cell_app_pane_cp2_t1

0xa548,	// (0x000537b1) grid_highlight_pane_cp1_ParamLimits

0xa548,	// (0x000537b1) grid_highlight_pane_cp1

0x1489,	// (0x0004a6f2) cell_hwr_candidate_pane_cp1_ParamLimits

0x1489,	// (0x0004a6f2) cell_hwr_candidate_pane_cp1

0x5054,	// (0x0004e2bd) fep_hwr_candidate_drop_down_list_pane_g1

0x5522,	// (0x0004e78b) fep_hwr_candidate_drop_down_list_pane_g2

0x552f,	// (0x0004e798) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00058e30) fep_hwr_candidate_drop_down_list_pane_g

0x14ad,	// (0x0004a716) fep_hwr_candidate_drop_down_list_scroll_pane

0x14b6,	// (0x0004a71f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x14b6,	// (0x0004a71f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x14c3,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x14c3,	// (0x0004a72c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x14d0,	// (0x0004a739) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x14d0,	// (0x0004a739) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x53d7,	// (0x0004e640) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x53d7,	// (0x0004e640) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x53f2,	// (0x0004e65b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x53f2,	// (0x0004e65b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x14dd,	// (0x0004a746) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x14dd,	// (0x0004a746) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x14f8,	// (0x0004a761) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x14f8,	// (0x0004a761) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1513,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1513,	// (0x0004a77c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00058e37) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00058e37) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x553c,	// (0x0004e7a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x553c,	// (0x0004e7a5) cell_vkb_candidate_pane_cp1

0x5054,	// (0x0004e2bd) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5054,	// (0x0004e2bd) fep_vkb_candidate_drop_down_list_pane_g1

0x5522,	// (0x0004e78b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5522,	// (0x0004e78b) fep_vkb_candidate_drop_down_list_pane_g2

0x552f,	// (0x0004e798) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x552f,	// (0x0004e798) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x00058e30) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x00058e30) fep_vkb_candidate_drop_down_list_pane_g

0x5562,	// (0x0004e7cb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5562,	// (0x0004e7cb) fep_vkb_candidate_drop_down_list_scroll_pane

0x556f,	// (0x0004e7d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x556f,	// (0x0004e7d8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x557c,	// (0x0004e7e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x557c,	// (0x0004e7e5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5588,	// (0x0004e7f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5588,	// (0x0004e7f1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5395,	// (0x0004e5fe) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5395,	// (0x0004e5fe) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x53b6,	// (0x0004e61f) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x53b6,	// (0x0004e61f) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5594,	// (0x0004e7fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5594,	// (0x0004e7fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x55b5,	// (0x0004e81e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x55b5,	// (0x0004e81e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x55d6,	// (0x0004e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x55d6,	// (0x0004e83f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x00058e48) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x00058e48) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9a8e,	// (0x00052cf7) title_pane_g1_ParamLimits

0x9aa1,	// (0x00052d0a) title_pane_g2_ParamLimits

0xf54e,	// (0x000587b7) title_pane_g_ParamLimits

0xc261,	// (0x000554ca) aid_call2_pane

0xc269,	// (0x000554d2) aid_call_pane

0xc271,	// (0x000554da) popup_clock_analogue_window_g1

0xc271,	// (0x000554da) popup_clock_analogue_window_g2

0xf52f,	// (0x00058798) popup_clock_analogue_window_g3

0xf538,	// (0x000587a1) popup_clock_analogue_window_g4

0x9866,	// (0x00052acf) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00058966) popup_clock_analogue_window_g

0xf540,	// (0x000587a9) popup_clock_analogue_window_t1

0x0026,	// (0x0004928f) clock_digital_number_pane_ParamLimits

0x0026,	// (0x0004928f) clock_digital_number_pane

0x0032,	// (0x0004929b) clock_digital_number_pane_cp02_ParamLimits

0x0032,	// (0x0004929b) clock_digital_number_pane_cp02

0x003e,	// (0x000492a7) clock_digital_number_pane_cp03_ParamLimits

0x003e,	// (0x000492a7) clock_digital_number_pane_cp03

0x004a,	// (0x000492b3) clock_digital_number_pane_cp04_ParamLimits

0x004a,	// (0x000492b3) clock_digital_number_pane_cp04

0x0056,	// (0x000492bf) clock_digital_separator_pane_ParamLimits

0x0056,	// (0x000492bf) clock_digital_separator_pane

0x0062,	// (0x000492cb) popup_clock_digital_window_t1_ParamLimits

0x0062,	// (0x000492cb) popup_clock_digital_window_t1

0x9866,	// (0x00052acf) clock_digital_number_pane_g1

0x9866,	// (0x00052acf) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00058971) clock_digital_number_pane_g

0x9866,	// (0x00052acf) clock_digital_separator_pane_g1

0x9866,	// (0x00052acf) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00058971) clock_digital_separator_pane_g

0xb6b0,	// (0x00054919) aid_fill_nsta_ParamLimits

0xb7e8,	// (0x00054a51) indicator_nsta_pane_ParamLimits

0x25da,	// (0x0004b843) popup_clock_analogue_window

0x25da,	// (0x0004b843) popup_clock_digital_window

0xcac2,	// (0x00055d2b) grid_indicator_nsta_pane_ParamLimits

0x485b,	// (0x0004dac4) clock_nsta_pane_t2

0x0001,

0xfab1,	// (0x00058d1a) clock_nsta_pane_t

0xf4fc,	// (0x00058765) aid_size_max_handle

0xa9de,	// (0x00053c47) aid_size_min_handle

0xe76d,	// (0x000579d6) editor_scroll_pane

0x55f1,	// (0x0004e85a) ex_editor_pane

0xa6bb,	// (0x00053924) scroll_pane_cp13

0xa47b,	// (0x000536e4) scroll_pane_cp14

0xc2a0,	// (0x00055509) scroll_pane_cp36

0xab5f,	// (0x00053dc8) list_single_graphic_hl_pane_cp2_ParamLimits

0xab5f,	// (0x00053dc8) list_single_graphic_hl_pane_cp2

0xc936,	// (0x00055b9f) list_single_graphic_hl_pane_ParamLimits

0xc936,	// (0x00055b9f) list_single_graphic_hl_pane

0xf226,	// (0x0005848f) aid_size_min_hl_cp1

0x55f9,	// (0x0004e862) list_highlight_pane_cp34_ParamLimits

0x55f9,	// (0x0004e862) list_highlight_pane_cp34

0x560a,	// (0x0004e873) list_single_graphic_hl_pane_g1_ParamLimits

0x560a,	// (0x0004e873) list_single_graphic_hl_pane_g1

0x96ef,	// (0x00052958) list_single_graphic_hl_pane_g2_ParamLimits

0x96ef,	// (0x00052958) list_single_graphic_hl_pane_g2

0x96ef,	// (0x00052958) list_single_graphic_hl_pane_g3_ParamLimits

0x96ef,	// (0x00052958) list_single_graphic_hl_pane_g3

0x5647,	// (0x0004e8b0) list_single_graphic_hl_pane_g4_ParamLimits

0x5647,	// (0x0004e8b0) list_single_graphic_hl_pane_g4

0x5653,	// (0x0004e8bc) list_single_graphic_hl_pane_g5_ParamLimits

0x5653,	// (0x0004e8bc) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x00058e59) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x00058e59) list_single_graphic_hl_pane_g

0x96fb,	// (0x00052964) list_single_graphic_hl_pane_t1_ParamLimits

0x96fb,	// (0x00052964) list_single_graphic_hl_pane_t1

0x5617,	// (0x0004e880) aid_size_min_hl_cp2

0x5620,	// (0x0004e889) list_highlight_pane_cp34_cp2_ParamLimits

0x5620,	// (0x0004e889) list_highlight_pane_cp34_cp2

0x560a,	// (0x0004e873) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x560a,	// (0x0004e873) list_single_graphic_hl_pane_g1_cp2

0x562d,	// (0x0004e896) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x562d,	// (0x0004e896) list_single_graphic_hl_pane_g2_cp2

0x5639,	// (0x0004e8a2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5639,	// (0x0004e8a2) list_single_graphic_hl_pane_g3_cp2

0x5647,	// (0x0004e8b0) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5647,	// (0x0004e8b0) list_single_graphic_hl_pane_g4_cp2

0x5653,	// (0x0004e8bc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5653,	// (0x0004e8bc) list_single_graphic_hl_pane_g5_cp2

0xae29,	// (0x00054092) control_pane_g4_ParamLimits

0xae29,	// (0x00054092) control_pane_g4

0x22c7,	// (0x0004b530) bg_popup_sub_pane_cp10_ParamLimits

0x4dfb,	// (0x0004e064) list_choice_list_pane_ParamLimits

0x4e0a,	// (0x0004e073) scroll_pane_cp23

0x9ec6,	// (0x0005312f) bg_popup_preview_window_pane_cp02_ParamLimits

0x5463,	// (0x0004e6cc) list_preview_fixed_pane_ParamLimits

0x5479,	// (0x0004e6e2) list_preview_fixed_pane_cp_ParamLimits

0x5479,	// (0x0004e6e2) list_preview_fixed_pane_cp

0x5485,	// (0x0004e6ee) popup_preview_fixed_window_g1_ParamLimits

0x5485,	// (0x0004e6ee) popup_preview_fixed_window_g1

0x5491,	// (0x0004e6fa) popup_preview_fixed_window_g2_ParamLimits

0x5491,	// (0x0004e6fa) popup_preview_fixed_window_g2

0x0002,

0xfb7f,	// (0x00058de8) popup_preview_fixed_window_g_ParamLimits

0xfb7f,	// (0x00058de8) popup_preview_fixed_window_g

0xf46e,	// (0x000586d7) aid_navi_side_left_pane_ParamLimits

0xf483,	// (0x000586ec) aid_navi_side_right_pane_ParamLimits

0xf49b,	// (0x00058704) navi_icon_pane_stacon_ParamLimits

0xf4af,	// (0x00058718) navi_navi_pane_stacon_ParamLimits

0xf49b,	// (0x00058704) navi_text_pane_stacon_ParamLimits

0x985c,	// (0x00052ac5) main_text_info_pane

0x567d,	// (0x0004e8e6) listscroll_text_info_pane

0x5685,	// (0x0004e8ee) list_text_info_pane_ParamLimits

0x5685,	// (0x0004e8ee) list_text_info_pane

0x5694,	// (0x0004e8fd) scroll_pane_cp24_ParamLimits

0x5694,	// (0x0004e8fd) scroll_pane_cp24

0xce53,	// (0x000560bc) list_text_info_pane_t1_ParamLimits

0xce53,	// (0x000560bc) list_text_info_pane_t1

0xafab,	// (0x00054214) popup_fast_swap2_window_ParamLimits

0xafab,	// (0x00054214) popup_fast_swap2_window

0x56d7,	// (0x0004e940) aid_size_cell_fast2

0x985c,	// (0x00052ac5) bg_popup_window_pane_cp17

0x2c2d,	// (0x0004be96) heading_pane_cp2

0xa14f,	// (0x000533b8) listscroll_fast2_pane

0x56e1,	// (0x0004e94a) grid_fast2_pane

0x56eb,	// (0x0004e954) listscroll_fast2_pane_g1

0x56f5,	// (0x0004e95e) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x00058e64) listscroll_fast2_pane_g

0xa6bb,	// (0x00053924) scroll_pane_cp26

0x56ff,	// (0x0004e968) cell_fast2_pane_ParamLimits

0x56ff,	// (0x0004e968) cell_fast2_pane

0x5716,	// (0x0004e97f) cell_fast2_pane_g1

0x571f,	// (0x0004e988) cell_fast2_pane_g2

0x5728,	// (0x0004e991) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x00058e69) cell_fast2_pane_g

0xa238,	// (0x000534a1) grid_highlight_pane_cp9

0xa24d,	// (0x000534b6) main_eswt_pane_ParamLimits

0xa24d,	// (0x000534b6) main_eswt_pane

0x56a9,	// (0x0004e912) list_single_text_info_pane

0x5730,	// (0x0004e999) eswt_ctrl_button_pane

0x5730,	// (0x0004e999) eswt_ctrl_canvas_pane

0x5738,	// (0x0004e9a1) eswt_ctrl_combo_pane

0x5730,	// (0x0004e999) eswt_ctrl_default_pane

0x5730,	// (0x0004e999) eswt_ctrl_label_pane

0x5740,	// (0x0004e9a9) eswt_ctrl_wait_pane

0x5748,	// (0x0004e9b1) eswt_shell_pane

0x985c,	// (0x00052ac5) listscroll_eswt_app_pane

0x5768,	// (0x0004e9d1) popup_eswt_tasktip_window_ParamLimits

0x5768,	// (0x0004e9d1) popup_eswt_tasktip_window

0x286b,	// (0x0004bad4) bg_popup_window_pane_cp18

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_ParamLimits

0x5779,	// (0x0004e9e2) eswt_control_pane_g1

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_ParamLimits

0x5786,	// (0x0004e9ef) eswt_control_pane_g2

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_ParamLimits

0x5793,	// (0x0004e9fc) eswt_control_pane_g3

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_ParamLimits

0x57a0,	// (0x0004ea09) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x00058e70) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x00058e70) eswt_control_pane_g

0xa548,	// (0x000537b1) bg_button_pane_ParamLimits

0xa548,	// (0x000537b1) bg_button_pane

0xa24d,	// (0x000534b6) common_borders_pane_copy2_ParamLimits

0xa24d,	// (0x000534b6) common_borders_pane_copy2

0x57ad,	// (0x0004ea16) control_button_pane_g1_ParamLimits

0x57ad,	// (0x0004ea16) control_button_pane_g1

0x57b9,	// (0x0004ea22) control_button_pane_g2_ParamLimits

0x57b9,	// (0x0004ea22) control_button_pane_g2

0x57c5,	// (0x0004ea2e) control_button_pane_g3_ParamLimits

0x57c5,	// (0x0004ea2e) control_button_pane_g3

0x0002,

0xfc10,	// (0x00058e79) control_button_pane_g_ParamLimits

0xfc10,	// (0x00058e79) control_button_pane_g

0x57d9,	// (0x0004ea42) control_button_pane_t1

0x57e7,	// (0x0004ea50) control_button_pane_t2

0x0001,

0xfc17,	// (0x00058e80) control_button_pane_t

0x27f7,	// (0x0004ba60) bg_button_pane_g1

0x27ff,	// (0x0004ba68) bg_button_pane_g2

0x2807,	// (0x0004ba70) bg_button_pane_g3

0x280f,	// (0x0004ba78) bg_button_pane_g4

0x2817,	// (0x0004ba80) bg_button_pane_g5

0x281f,	// (0x0004ba88) bg_button_pane_g6

0x2827,	// (0x0004ba90) bg_button_pane_g7

0x282f,	// (0x0004ba98) bg_button_pane_g8

0x2837,	// (0x0004baa0) bg_button_pane_g9

0x0008,

0xf866,	// (0x00058acf) bg_button_pane_g

0x4db6,	// (0x0004e01f) common_borders_pane_ParamLimits

0x4db6,	// (0x0004e01f) common_borders_pane

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy1_ParamLimits

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy1

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy1_ParamLimits

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy1

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy1_ParamLimits

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy1

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy1_ParamLimits

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy1

0x4df1,	// (0x0004e05a) bg_eswt_ctrl_canvas_pane_g1

0x4db6,	// (0x0004e01f) common_borders_pane_cp2_ParamLimits

0x4db6,	// (0x0004e01f) common_borders_pane_cp2

0x4db6,	// (0x0004e01f) common_borders_pane_cp3_ParamLimits

0x4db6,	// (0x0004e01f) common_borders_pane_cp3

0x57f5,	// (0x0004ea5e) separator_horizontal_pane

0x57fd,	// (0x0004ea66) separator_vertical_pane

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy2_ParamLimits

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy2

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy2_ParamLimits

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy2

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy2_ParamLimits

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy2

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy2_ParamLimits

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy2

0x985c,	// (0x00052ac5) common_borders_pane_cp4

0x5806,	// (0x0004ea6f) separator_horizontal_pane_g1

0x580f,	// (0x0004ea78) separator_horizontal_pane_g2

0x5818,	// (0x0004ea81) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x00058e85) separator_horizontal_pane_g

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy3_ParamLimits

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy3

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy3_ParamLimits

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy3

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy3_ParamLimits

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy3

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy3_ParamLimits

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy3

0x985c,	// (0x00052ac5) common_borders_pane_cp5

0x5821,	// (0x0004ea8a) separator_vertical_pane_g1

0x582a,	// (0x0004ea93) separator_vertical_pane_g2

0x5833,	// (0x0004ea9c) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x00058e8c) separator_vertical_pane_g

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy4_ParamLimits

0x5779,	// (0x0004e9e2) eswt_control_pane_g1_copy4

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy4_ParamLimits

0x5786,	// (0x0004e9ef) eswt_control_pane_g2_copy4

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy4_ParamLimits

0x5793,	// (0x0004e9fc) eswt_control_pane_g3_copy4

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy4_ParamLimits

0x57a0,	// (0x0004ea09) eswt_control_pane_g4_copy4

0xce75,	// (0x000560de) eswt_ctrl_combo_button_pane

0xce7d,	// (0x000560e6) eswt_ctrl_input_pane

0xce85,	// (0x000560ee) popup_choice_list_window_cp70

0xce8d,	// (0x000560f6) eswt_ctrl_input_pane_t1

0x985c,	// (0x00052ac5) input_focus_pane_cp70

0x4db6,	// (0x0004e01f) bg_button_pane_cp70_ParamLimits

0x4db6,	// (0x0004e01f) bg_button_pane_cp70

0xce9b,	// (0x00056104) eswt_ctrl_combo_button_pane_g1

0x586a,	// (0x0004ead3) wait_bar_pane_cp70

0x286b,	// (0x0004bad4) bg_popup_window_pane_cp70_ParamLimits

0x286b,	// (0x0004bad4) bg_popup_window_pane_cp70

0x5872,	// (0x0004eadb) popup_eswt_tasktip_window_t1

0x5888,	// (0x0004eaf1) wait_bar_pane_cp71_ParamLimits

0x5888,	// (0x0004eaf1) wait_bar_pane_cp71

0x5894,	// (0x0004eafd) grid_eswt_app_pane

0xaa0f,	// (0x00053c78) scroll_pane_cp70

0xcea3,	// (0x0005610c) cell_eswt_app_pane_ParamLimits

0xcea3,	// (0x0005610c) cell_eswt_app_pane

0xced5,	// (0x0005613e) cell_eswt_app_pane_g1_ParamLimits

0xced5,	// (0x0005613e) cell_eswt_app_pane_g1

0xcf04,	// (0x0005616d) cell_eswt_app_pane_g2_ParamLimits

0xcf04,	// (0x0005616d) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x00058e93) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x00058e93) cell_eswt_app_pane_g

0xcf2d,	// (0x00056196) cell_eswt_app_pane_t1_ParamLimits

0xcf2d,	// (0x00056196) cell_eswt_app_pane_t1

0x5959,	// (0x0004ebc2) grid_highlight_pane_cp70_ParamLimits

0x5959,	// (0x0004ebc2) grid_highlight_pane_cp70

0xe656,	// (0x000578bf) set_content_pane_g1

0xadbb,	// (0x00054024) status_small_volume_pane

0x1542,	// (0x0004a7ab) status_small_volume_pane_g1

0x154a,	// (0x0004a7b3) volume_small2_pane

0x1553,	// (0x0004a7bc) volume_small2_pane_g1

0x155c,	// (0x0004a7c5) volume_small2_pane_g2

0x1565,	// (0x0004a7ce) volume_small2_pane_g3

0x156e,	// (0x0004a7d7) volume_small2_pane_g4

0x1577,	// (0x0004a7e0) volume_small2_pane_g5

0x1580,	// (0x0004a7e9) volume_small2_pane_g6

0x1589,	// (0x0004a7f2) volume_small2_pane_g7

0x1592,	// (0x0004a7fb) volume_small2_pane_g8

0x159b,	// (0x0004a804) volume_small2_pane_g9

0x15a4,	// (0x0004a80d) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x00058e98) volume_small2_pane_g

0x51a8,	// (0x0004e411) fep_vkb_top_text_pane_g1_ParamLimits

0xcdfb,	// (0x00056064) fep_vkb_top_text_pane_t1_ParamLimits

0x549d,	// (0x0004e706) popup_preview_fixed_window_g3_ParamLimits

0x549d,	// (0x0004e706) popup_preview_fixed_window_g3

0xb643,	// (0x000548ac) popup_toolbar_trans_pane

0xc862,	// (0x00055acb) aid_height_set_list_ParamLimits

0x3bc1,	// (0x0004ce2a) aid_size_parent_ParamLimits

0x22c7,	// (0x0004b530) list_highlight_pane_cp2_ParamLimits

0xe656,	// (0x000578bf) set_content_pane_g1_ParamLimits

0xc94a,	// (0x00055bb3) list_single_image_pane_ParamLimits

0xc94a,	// (0x00055bb3) list_single_image_pane

0xcf5f,	// (0x000561c8) aid_size_cell_image_ParamLimits

0xcf5f,	// (0x000561c8) aid_size_cell_image

0xcf6c,	// (0x000561d5) grid_single_image_pane_ParamLimits

0xcf6c,	// (0x000561d5) grid_single_image_pane

0xa556,	// (0x000537bf) list_single_image_pane_g1_ParamLimits

0xa556,	// (0x000537bf) list_single_image_pane_g1

0xa562,	// (0x000537cb) list_single_image_pane_g2_ParamLimits

0xa562,	// (0x000537cb) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x00058ead) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x00058ead) list_single_image_pane_g

0x5980,	// (0x0004ebe9) list_single_image_pane_t1_ParamLimits

0x5980,	// (0x0004ebe9) list_single_image_pane_t1

0xcf7a,	// (0x000561e3) cell_image_list_pane_ParamLimits

0xcf7a,	// (0x000561e3) cell_image_list_pane

0xcf8e,	// (0x000561f7) cell_image_list_pane_g1

0xcf97,	// (0x00056200) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x00058eb2) cell_image_list_pane_g

0x59be,	// (0x0004ec27) aid_size_cell_tb_trans_pane

0xa548,	// (0x000537b1) bg_tb_trans_pane

0x59d0,	// (0x0004ec39) grid_tb_trans_pane

0x27f7,	// (0x0004ba60) bg_tb_trans_pane_g1

0x27ff,	// (0x0004ba68) bg_tb_trans_pane_g2

0x2807,	// (0x0004ba70) bg_tb_trans_pane_g3

0x280f,	// (0x0004ba78) bg_tb_trans_pane_g4

0x2817,	// (0x0004ba80) bg_tb_trans_pane_g5

0x282f,	// (0x0004ba98) bg_tb_trans_pane_g6

0x2837,	// (0x0004baa0) bg_tb_trans_pane_g7

0x281f,	// (0x0004ba88) bg_tb_trans_pane_g8

0x2827,	// (0x0004ba90) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x00058eb7) bg_tb_trans_pane_g

0x59e4,	// (0x0004ec4d) cell_toolbar_trans_pane_ParamLimits

0x59e4,	// (0x0004ec4d) cell_toolbar_trans_pane

0x4df1,	// (0x0004e05a) cell_toolbar_trans_pane_g1

0xcba3,	// (0x00055e0c) list_form2_midp_pane_t1

0xcbb1,	// (0x00055e1a) list_form2_midp_pane_t2

0x0001,

0xfaf7,	// (0x00058d60) list_form2_midp_pane_t

0x4a45,	// (0x0004dcae) scroll_pane_cp51_ParamLimits

0x4c0c,	// (0x0004de75) form2_midp_wait_pane_g1

0x4c15,	// (0x0004de7e) form2_midp_wait_pane_g2

0x4c1e,	// (0x0004de87) form2_midp_wait_pane_g3

0x0002,

0xfb0c,	// (0x00058d75) form2_midp_wait_pane_g

0x9be3,	// (0x00052e4c) list_highlight_pane_cp21_ParamLimits

0x4c57,	// (0x0004dec0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4c66,	// (0x0004decf) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3d93,	// (0x0004cffc) list_single_2graphic_im_pane_ParamLimits

0x3d93,	// (0x0004cffc) list_single_2graphic_im_pane

0xcfa0,	// (0x00056209) list_single_2graphic_im_pane_g1_ParamLimits

0xcfa0,	// (0x00056209) list_single_2graphic_im_pane_g1

0xcfb1,	// (0x0005621a) list_single_2graphic_im_pane_g2_ParamLimits

0xcfb1,	// (0x0005621a) list_single_2graphic_im_pane_g2

0xcfbd,	// (0x00056226) list_single_2graphic_im_pane_g3_ParamLimits

0xcfbd,	// (0x00056226) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x00058eca) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x00058eca) list_single_2graphic_im_pane_g

0xcfd1,	// (0x0005623a) list_single_2graphic_im_pane_t1_ParamLimits

0xcfd1,	// (0x0005623a) list_single_2graphic_im_pane_t1

0x54a9,	// (0x0004e712) list_single_graphic_2heading_pane_fp_ParamLimits

0x54a9,	// (0x0004e712) list_single_graphic_2heading_pane_fp

0xf108,	// (0x00058371) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf108,	// (0x00058371) list_single_graphic_2heading_pane_fp_g1

0x54c2,	// (0x0004e72b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x54c2,	// (0x0004e72b) list_single_graphic_2heading_pane_fp_g2

0x541b,	// (0x0004e684) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x541b,	// (0x0004e684) list_single_graphic_2heading_pane_fp_g3

0x5427,	// (0x0004e690) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5427,	// (0x0004e690) list_single_graphic_2heading_pane_fp_g4

0x54ce,	// (0x0004e737) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x54ce,	// (0x0004e737) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8f,	// (0x00058df8) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8f,	// (0x00058df8) list_single_graphic_2heading_pane_fp_g

0xf22f,	// (0x00058498) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf22f,	// (0x00058498) list_single_graphic_2heading_pane_fp_t1

0xf140,	// (0x000583a9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf140,	// (0x000583a9) list_single_graphic_2heading_pane_fp_t2

0xf245,	// (0x000584ae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf245,	// (0x000584ae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x00058ed3) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x00058ed3) list_single_graphic_2heading_pane_fp_t

0x4e6a,	// (0x0004e0d3) fep_hwr_write_pane_g5_ParamLimits

0x4e6a,	// (0x0004e0d3) fep_hwr_write_pane_g5

0x4e76,	// (0x0004e0df) fep_hwr_write_pane_g6_ParamLimits

0x4e76,	// (0x0004e0df) fep_hwr_write_pane_g6

0x5748,	// (0x0004e9b1) eswt_shell_pane_ParamLimits

0x286b,	// (0x0004bad4) bg_popup_window_pane_cp18_ParamLimits

0x3b07,	// (0x0004cd70) heading_pane_cp70

0x5872,	// (0x0004eadb) popup_eswt_tasktip_window_t1_ParamLimits

0xb70d,	// (0x00054976) aid_touch_tab_arrow_left

0xb723,	// (0x0005498c) aid_touch_tab_arrow_right

0x9ac5,	// (0x00052d2e) title_pane_g3_ParamLimits

0x9ac5,	// (0x00052d2e) title_pane_g3

0xa507,	// (0x00053770) set_value_pane_g1

0xb643,	// (0x000548ac) popup_toolbar_trans_pane_ParamLimits

0x59be,	// (0x0004ec27) aid_size_cell_tb_trans_pane_ParamLimits

0xa548,	// (0x000537b1) bg_tb_trans_pane_ParamLimits

0x59d0,	// (0x0004ec39) grid_tb_trans_pane_ParamLimits

0x9ec6,	// (0x0005312f) cont_note_pane_ParamLimits

0x9ec6,	// (0x0005312f) cont_note_pane

0xa24d,	// (0x000534b6) cont_snote2_single_text_pane_ParamLimits

0xa24d,	// (0x000534b6) cont_snote2_single_text_pane

0xa24d,	// (0x000534b6) cont_snote2_single_graphic_pane_ParamLimits

0xa24d,	// (0x000534b6) cont_snote2_single_graphic_pane

0x2e55,	// (0x0004c0be) cont_note_wait_pane_ParamLimits

0x2e55,	// (0x0004c0be) cont_note_wait_pane

0x2e55,	// (0x0004c0be) cont_note_image_pane_ParamLimits

0x2e55,	// (0x0004c0be) cont_note_image_pane

0x5a78,	// (0x0004ece1) popup_note2_window_g1_ParamLimits

0x5a78,	// (0x0004ece1) popup_note2_window_g1

0x5aa9,	// (0x0004ed12) popup_note2_window_t1_ParamLimits

0x5aa9,	// (0x0004ed12) popup_note2_window_t1

0x5aee,	// (0x0004ed57) popup_note2_window_t2_ParamLimits

0x5aee,	// (0x0004ed57) popup_note2_window_t2

0x5b33,	// (0x0004ed9c) popup_note2_window_t3_ParamLimits

0x5b33,	// (0x0004ed9c) popup_note2_window_t3

0x5b78,	// (0x0004ede1) popup_note2_window_t4_ParamLimits

0x5b78,	// (0x0004ede1) popup_note2_window_t4

0x9f4a,	// (0x000531b3) popup_note2_window_t5_ParamLimits

0x9f4a,	// (0x000531b3) popup_note2_window_t5

0x0004,

0xfc76,	// (0x00058edf) popup_note2_window_t_ParamLimits

0xfc76,	// (0x00058edf) popup_note2_window_t

0x5ba7,	// (0x0004ee10) popup_note2_image_window_g1_ParamLimits

0x5ba7,	// (0x0004ee10) popup_note2_image_window_g1

0x5bb3,	// (0x0004ee1c) popup_note2_image_window_g2_ParamLimits

0x5bb3,	// (0x0004ee1c) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x00058eea) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x00058eea) popup_note2_image_window_g

0x5bc5,	// (0x0004ee2e) popup_note2_image_window_t1_ParamLimits

0x5bc5,	// (0x0004ee2e) popup_note2_image_window_t1

0x5bdd,	// (0x0004ee46) popup_note2_image_window_t2_ParamLimits

0x5bdd,	// (0x0004ee46) popup_note2_image_window_t2

0x5bf5,	// (0x0004ee5e) popup_note2_image_window_t3_ParamLimits

0x5bf5,	// (0x0004ee5e) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x00058eef) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x00058eef) popup_note2_image_window_t

0x2e63,	// (0x0004c0cc) popup_note2_wait_window_g1_ParamLimits

0x2e63,	// (0x0004c0cc) popup_note2_wait_window_g1

0x5c11,	// (0x0004ee7a) popup_note2_wait_window_g2_ParamLimits

0x5c11,	// (0x0004ee7a) popup_note2_wait_window_g2

0x2e7b,	// (0x0004c0e4) popup_note2_wait_window_g3_ParamLimits

0x2e7b,	// (0x0004c0e4) popup_note2_wait_window_g3

0x0002,

0xfc8d,	// (0x00058ef6) popup_note2_wait_window_g_ParamLimits

0xfc8d,	// (0x00058ef6) popup_note2_wait_window_g

0x5c1d,	// (0x0004ee86) popup_note2_wait_window_t1_ParamLimits

0x5c1d,	// (0x0004ee86) popup_note2_wait_window_t1

0x5c3b,	// (0x0004eea4) popup_note2_wait_window_t2_ParamLimits

0x5c3b,	// (0x0004eea4) popup_note2_wait_window_t2

0x5c59,	// (0x0004eec2) popup_note2_wait_window_t3_ParamLimits

0x5c59,	// (0x0004eec2) popup_note2_wait_window_t3

0x5c6b,	// (0x0004eed4) popup_note2_wait_window_t4_ParamLimits

0x5c6b,	// (0x0004eed4) popup_note2_wait_window_t4

0x0003,

0xfc94,	// (0x00058efd) popup_note2_wait_window_t_ParamLimits

0xfc94,	// (0x00058efd) popup_note2_wait_window_t

0x5c7d,	// (0x0004eee6) wait_bar2_pane_ParamLimits

0x5c7d,	// (0x0004eee6) wait_bar2_pane

0x5c95,	// (0x0004eefe) popup_snote2_single_text_window_g1_ParamLimits

0x5c95,	// (0x0004eefe) popup_snote2_single_text_window_g1

0x5cbd,	// (0x0004ef26) popup_snote2_single_text_window_t1_ParamLimits

0x5cbd,	// (0x0004ef26) popup_snote2_single_text_window_t1

0x5d09,	// (0x0004ef72) popup_snote2_single_text_window_t2_ParamLimits

0x5d09,	// (0x0004ef72) popup_snote2_single_text_window_t2

0x5d55,	// (0x0004efbe) popup_snote2_single_text_window_t3_ParamLimits

0x5d55,	// (0x0004efbe) popup_snote2_single_text_window_t3

0x5d96,	// (0x0004efff) popup_snote2_single_text_window_t4_ParamLimits

0x5d96,	// (0x0004efff) popup_snote2_single_text_window_t4

0x5dcc,	// (0x0004f035) popup_snote2_single_text_window_t5_ParamLimits

0x5dcc,	// (0x0004f035) popup_snote2_single_text_window_t5

0x0004,

0xfc9d,	// (0x00058f06) popup_snote2_single_text_window_t_ParamLimits

0xfc9d,	// (0x00058f06) popup_snote2_single_text_window_t

0x5df7,	// (0x0004f060) popup_snote2_single_graphic_window_g1_ParamLimits

0x5df7,	// (0x0004f060) popup_snote2_single_graphic_window_g1

0x5e1f,	// (0x0004f088) popup_snote2_single_graphic_window_g2_ParamLimits

0x5e1f,	// (0x0004f088) popup_snote2_single_graphic_window_g2

0x0001,

0xfca8,	// (0x00058f11) popup_snote2_single_graphic_window_g_ParamLimits

0xfca8,	// (0x00058f11) popup_snote2_single_graphic_window_g

0x5e47,	// (0x0004f0b0) popup_snote2_single_graphic_window_t1_ParamLimits

0x5e47,	// (0x0004f0b0) popup_snote2_single_graphic_window_t1

0x5e93,	// (0x0004f0fc) popup_snote2_single_graphic_window_t2_ParamLimits

0x5e93,	// (0x0004f0fc) popup_snote2_single_graphic_window_t2

0x5d55,	// (0x0004efbe) popup_snote2_single_graphic_window_t3_ParamLimits

0x5d55,	// (0x0004efbe) popup_snote2_single_graphic_window_t3

0x5d96,	// (0x0004efff) popup_snote2_single_graphic_window_t4_ParamLimits

0x5d96,	// (0x0004efff) popup_snote2_single_graphic_window_t4

0x5dcc,	// (0x0004f035) popup_snote2_single_graphic_window_t5_ParamLimits

0x5dcc,	// (0x0004f035) popup_snote2_single_graphic_window_t5

0x0004,

0xfcad,	// (0x00058f16) popup_snote2_single_graphic_window_t_ParamLimits

0xfcad,	// (0x00058f16) popup_snote2_single_graphic_window_t

0x48f5,	// (0x0004db5e) clock_nsta_pane_cp2_t1

0x48f5,	// (0x0004db5e) clock_nsta_pane_cp2_t2

0x0001,

0xfacd,	// (0x00058d36) clock_nsta_pane_cp2_t

0xe387,	// (0x000575f0) form_field_data_wide_pane_g1_ParamLimits

0xa556,	// (0x000537bf) form_field_data_wide_pane_g2_ParamLimits

0xa556,	// (0x000537bf) form_field_data_wide_pane_g2

0xa562,	// (0x000537cb) form_field_data_wide_pane_g3_ParamLimits

0xa562,	// (0x000537cb) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000588e9) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000588e9) form_field_data_wide_pane_g

0xcaac,	// (0x00055d15) grid_touch_3_pane_ParamLimits

0xcaac,	// (0x00055d15) grid_touch_3_pane

0xd002,	// (0x0005626b) cell_touch_3_pane_ParamLimits

0xd002,	// (0x0005626b) cell_touch_3_pane

0x4df1,	// (0x0004e05a) cell_touch_3_pane_g1

0x4df1,	// (0x0004e05a) cell_touch_3_pane_g2

0x0001,

0xfb52,	// (0x00058dbb) cell_touch_3_pane_g

0x9fa2,	// (0x0005320b) cont_query_data_pane

0x9faa,	// (0x00053213) cont_query_data_pane_cp1

0x5f12,	// (0x0004f17b) button_value_adjust_pane_cp7

0x5f1a,	// (0x0004f183) query_popup_pane_cp3

0xc2d1,	// (0x0005553a) bg_popup_sub_pane_cp22_ParamLimits

0x00d6,	// (0x0004933f) navi_navi_volume_pane_cp2

0x00f1,	// (0x0004935a) popup_side_volume_key_window_g2

0x0100,	// (0x00049369) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005897f) popup_side_volume_key_window_g

0x011d,	// (0x00049386) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00058986) popup_side_volume_key_window_t

0xe51c,	// (0x00057785) popup_side_volume_key_window_ParamLimits

0x91aa,	// (0x00052413) list_double_graphic_pane_g4_ParamLimits

0x91aa,	// (0x00052413) list_double_graphic_pane_g4

0xbb19,	// (0x00054d82) list_single_2heading_msg_pane_ParamLimits

0xbb19,	// (0x00054d82) list_single_2heading_msg_pane

0xbb7b,	// (0x00054de4) list_single_2heading_msg_pane_g1_ParamLimits

0xbb7b,	// (0x00054de4) list_single_2heading_msg_pane_g1

0xbb87,	// (0x00054df0) list_single_2heading_msg_pane_g2_ParamLimits

0xbb87,	// (0x00054df0) list_single_2heading_msg_pane_g2

0xbb9a,	// (0x00054e03) list_single_2heading_msg_pane_g3_ParamLimits

0xbb9a,	// (0x00054e03) list_single_2heading_msg_pane_g3

0xbba6,	// (0x00054e0f) list_single_2heading_msg_pane_g4_ParamLimits

0xbba6,	// (0x00054e0f) list_single_2heading_msg_pane_g4

0x0003,

0xfcb8,	// (0x00058f21) list_single_2heading_msg_pane_g_ParamLimits

0xfcb8,	// (0x00058f21) list_single_2heading_msg_pane_g

0x9711,	// (0x0005297a) list_single_2heading_msg_pane_t1_ParamLimits

0x9711,	// (0x0005297a) list_single_2heading_msg_pane_t1

0x9739,	// (0x000529a2) list_single_2heading_msg_pane_t2_ParamLimits

0x9739,	// (0x000529a2) list_single_2heading_msg_pane_t2

0x97a4,	// (0x00052a0d) list_single_2heading_msg_pane_t3_ParamLimits

0x97a4,	// (0x00052a0d) list_single_2heading_msg_pane_t3

0xf265,	// (0x000584ce) list_single_2heading_msg_pane_t4_ParamLimits

0xf265,	// (0x000584ce) list_single_2heading_msg_pane_t4

0x0003,

0xfcc1,	// (0x00058f2a) list_single_2heading_msg_pane_t_ParamLimits

0xfcc1,	// (0x00058f2a) list_single_2heading_msg_pane_t

0x9ad1,	// (0x00052d3a) title_pane_g4_ParamLimits

0x9ad1,	// (0x00052d3a) title_pane_g4

0xf3be,	// (0x00058627) title_pane_stacon_g3_ParamLimits

0xf3be,	// (0x00058627) title_pane_stacon_g3

0x5a3b,	// (0x0004eca4) list_single_2graphic_im_pane_g4_ParamLimits

0x5a3b,	// (0x0004eca4) list_single_2graphic_im_pane_g4

0x38c5,	// (0x0004cb2e) popup_side_volume_key_window_cp

0x411f,	// (0x0004d388) main_idle_act2_pane_t1

0x0c48,	// (0x00049eb1) toolbar_button_pane_g10

0xa445,	// (0x000536ae) popup_toolbar_window_cp1

0x48e6,	// (0x0004db4f) clock_nsta_pane_cp_t1

0x48e6,	// (0x0004db4f) clock_nsta_pane_cp_t2

0x0001,

0xfac8,	// (0x00058d31) clock_nsta_pane_cp_t

0x00d6,	// (0x0004933f) navi_navi_volume_pane_cp2_ParamLimits

0x00e5,	// (0x0004934e) popup_side_volume_key_window_g1_ParamLimits

0x00f1,	// (0x0004935a) popup_side_volume_key_window_g2_ParamLimits

0x0100,	// (0x00049369) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005897f) popup_side_volume_key_window_g_ParamLimits

0x11b3,	// (0x0004a41c) fep_hwr_aid_pane

0xccaf,	// (0x00055f18) bg_fep_hwr_top_pane_g4_ParamLimits

0x4e3a,	// (0x0004e0a3) fep_hwr_top_pane_g1_ParamLimits

0x4e4c,	// (0x0004e0b5) fep_hwr_top_pane_g2_ParamLimits

0x126e,	// (0x0004a4d7) fep_hwr_top_pane_g3_ParamLimits

0xfb1d,	// (0x00058d86) fep_hwr_top_pane_g_ParamLimits

0x1283,	// (0x0004a4ec) fep_hwr_top_text_pane_ParamLimits

0x367a,	// (0x0004c8e3) aid_touch_tab_arrow_arrow_2

0x3683,	// (0x0004c8ec) aid_touch_tab_arrow_left_2

0x11c7,	// (0x0004a430) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x11fe,	// (0x0004a467) fep_hwr_prediction_pane

0x4fa2,	// (0x0004e20b) fep_vkb_prediction_pane

0xcddb,	// (0x00056044) fep_vkb_side_pane_g3_ParamLimits

0xcddb,	// (0x00056044) fep_vkb_side_pane_g3

0x5054,	// (0x0004e2bd) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5522,	// (0x0004e78b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x552f,	// (0x0004e798) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc7,	// (0x00058e30) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5f41,	// (0x0004f1aa) fep_hwr_prediction_pane_g1

0x15dd,	// (0x0004a846) fep_hwr_prediction_pane_g2

0x15e5,	// (0x0004a84e) fep_hwr_prediction_pane_g3

0x15ed,	// (0x0004a856) fep_hwr_prediction_pane_g4

0x0003,

0xfcca,	// (0x00058f33) fep_hwr_prediction_pane_g

0x5f41,	// (0x0004f1aa) fep_vkb_prediction_pane_g1

0x5f4b,	// (0x0004f1b4) fep_vkb_prediction_pane_g2

0x5f53,	// (0x0004f1bc) fep_vkb_prediction_pane_g3

0x5f5b,	// (0x0004f1c4) fep_vkb_prediction_pane_g4

0x0003,

0xfcd3,	// (0x00058f3c) fep_vkb_prediction_pane_g

0x0f55,	// (0x0004a1be) slider_set_pane_g3

0x0f69,	// (0x0004a1d2) slider_set_pane_g4

0x0f81,	// (0x0004a1ea) slider_set_pane_g5

0x0f55,	// (0x0004a1be) slider_set_pane_g6

0x0f97,	// (0x0004a200) slider_set_pane_g7

0x3d40,	// (0x0004cfa9) slider_form_pane_g3

0x3d49,	// (0x0004cfb2) slider_form_pane_g4

0x3d51,	// (0x0004cfba) slider_form_pane_g5

0x3d40,	// (0x0004cfa9) slider_form_pane_g6

0xc909,	// (0x00055b72) slider_form_pane_g7

0x43cd,	// (0x0004d636) slider_set_pane_vc_g3

0x43d6,	// (0x0004d63f) slider_set_pane_vc_g4

0x43df,	// (0x0004d648) slider_set_pane_vc_g5

0x43cd,	// (0x0004d636) slider_set_pane_vc_g6

0x43e8,	// (0x0004d651) slider_set_pane_vc_g7

0x45bc,	// (0x0004d825) slider_form_pane_vc_g1

0x45c5,	// (0x0004d82e) slider_form_pane_vc_g2

0x45ce,	// (0x0004d837) slider_form_pane_vc_g3

0x45bc,	// (0x0004d825) slider_form_pane_vc_g4

0x45d7,	// (0x0004d840) slider_form_pane_vc_g5

0x0004,

0xfa9a,	// (0x00058d03) slider_form_pane_vc_g

0x985c,	// (0x00052ac5) main_idle_act3_pane

0x5f63,	// (0x0004f1cc) ai3_links_pane

0xd04e,	// (0x000562b7) popup_ai3_data_window_ParamLimits

0xd04e,	// (0x000562b7) popup_ai3_data_window

0x985c,	// (0x00052ac5) grid_ai3_links_pane

0xd06c,	// (0x000562d5) cell_ai3_links_pane_ParamLimits

0xd06c,	// (0x000562d5) cell_ai3_links_pane

0x5fa4,	// (0x0004f20d) bg_popup_sub_pane_cp11

0x5fb1,	// (0x0004f21a) cell_ai3_links_pane_g1

0x985c,	// (0x00052ac5) bg_popup_sub_pane_cp12

0x5fd6,	// (0x0004f23f) heading_ai3_data_pane

0x5fde,	// (0x0004f247) list_ai3_gene_pane

0x5fea,	// (0x0004f253) popup_ai3_data_window_g1

0x5ff2,	// (0x0004f25b) heading_ai3_data_pane_g1

0x5ffa,	// (0x0004f263) heading_ai3_data_pane_t1

0x6008,	// (0x0004f271) list_double_ai3_gene_pane_ParamLimits

0x6008,	// (0x0004f271) list_double_ai3_gene_pane

0x6015,	// (0x0004f27e) list_single_ai3_gene_pane_ParamLimits

0x6015,	// (0x0004f27e) list_single_ai3_gene_pane

0x4db6,	// (0x0004e01f) list_highlight_pane_cp7_ParamLimits

0x4db6,	// (0x0004e01f) list_highlight_pane_cp7

0x6022,	// (0x0004f28b) list_single_a13_gene_pane_t1_ParamLimits

0x6022,	// (0x0004f28b) list_single_a13_gene_pane_t1

0x6039,	// (0x0004f2a2) list_single_ai3_gene_pane_g1

0x6042,	// (0x0004f2ab) list_single_ai3_gene_pane_g2

0x0001,

0xfcdc,	// (0x00058f45) list_single_ai3_gene_pane_g

0x604a,	// (0x0004f2b3) list_double_ai3_gene_pane_g1_ParamLimits

0x604a,	// (0x0004f2b3) list_double_ai3_gene_pane_g1

0x6056,	// (0x0004f2bf) list_double_ai3_gene_pane_t1_ParamLimits

0x6056,	// (0x0004f2bf) list_double_ai3_gene_pane_t1

0x6072,	// (0x0004f2db) list_double_ai3_gene_pane_t2_ParamLimits

0x6072,	// (0x0004f2db) list_double_ai3_gene_pane_t2

0x6087,	// (0x0004f2f0) list_double_ai3_gene_pane_t3_ParamLimits

0x6087,	// (0x0004f2f0) list_double_ai3_gene_pane_t3

0x0002,

0xfce1,	// (0x00058f4a) list_double_ai3_gene_pane_t_ParamLimits

0xfce1,	// (0x00058f4a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf25b,	// (0x000584c4) aid_size_min_col_2

0xd038,	// (0x000562a1) aid_size_min_msg_ParamLimits

0xd038,	// (0x000562a1) aid_size_min_msg

0xcdef,	// (0x00056058) fep_vkb_top_text_pane_g2_ParamLimits

0xcdef,	// (0x00056058) fep_vkb_top_text_pane_g2

0x0001,

0xfb4d,	// (0x00058db6) fep_vkb_top_text_pane_g_ParamLimits

0xfb4d,	// (0x00058db6) fep_vkb_top_text_pane_g

0x985c,	// (0x00052ac5) main_hc_apps_shell_pane

0x60a4,	// (0x0004f30d) grid_hc_apps_pane_ParamLimits

0x60a4,	// (0x0004f30d) grid_hc_apps_pane

0x60b3,	// (0x0004f31c) list_hc_apps_pane

0x60bb,	// (0x0004f324) scroll_pane_cp37_ParamLimits

0x60bb,	// (0x0004f324) scroll_pane_cp37

0xd086,	// (0x000562ef) cell_hc_apps_pane_ParamLimits

0xd086,	// (0x000562ef) cell_hc_apps_pane

0xd150,	// (0x000563b9) cell_hc_apps_pane_g1_ParamLimits

0xd150,	// (0x000563b9) cell_hc_apps_pane_g1

0x61b0,	// (0x0004f419) cell_hc_apps_pane_g2_ParamLimits

0x61b0,	// (0x0004f419) cell_hc_apps_pane_g2

0x61cc,	// (0x0004f435) cell_hc_apps_pane_g3_ParamLimits

0x61cc,	// (0x0004f435) cell_hc_apps_pane_g3

0x0002,

0xfce8,	// (0x00058f51) cell_hc_apps_pane_g_ParamLimits

0xfce8,	// (0x00058f51) cell_hc_apps_pane_g

0xd17d,	// (0x000563e6) cell_hc_apps_pane_t1_ParamLimits

0xd17d,	// (0x000563e6) cell_hc_apps_pane_t1

0x9ec6,	// (0x0005312f) grid_highlight_pane_cp10_ParamLimits

0x9ec6,	// (0x0005312f) grid_highlight_pane_cp10

0xd1bd,	// (0x00056426) list_single_hc_apps_pane_ParamLimits

0xd1bd,	// (0x00056426) list_single_hc_apps_pane

0xd1f7,	// (0x00056460) list_single_hc_apps_pane_g1

0xbbbe,	// (0x00054e27) list_single_hc_apps_pane_g2

0x0001,

0xfcef,	// (0x00058f58) list_single_hc_apps_pane_g

0xbbd7,	// (0x00054e40) list_single_hc_apps_pane_g2_copy1

0x9812,	// (0x00052a7b) list_single_hc_apps_pane_t1

0x9be3,	// (0x00052e4c) bg_set_opt_pane_cp_ParamLimits

0xf2d0,	// (0x00058539) setting_slider_pane_t1_ParamLimits

0xf2e9,	// (0x00058552) setting_slider_pane_t2_ParamLimits

0xf303,	// (0x0005856c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000587c7) setting_slider_pane_t_ParamLimits

0xf31b,	// (0x00058584) slider_set_pane_ParamLimits

0x04cb,	// (0x00049734) control_pane_g5_ParamLimits

0x04cb,	// (0x00049734) control_pane_g5

0x3b73,	// (0x0004cddc) slider_set_pane_g1_ParamLimits

0x0f49,	// (0x0004a1b2) slider_set_pane_g2_ParamLimits

0x0f55,	// (0x0004a1be) slider_set_pane_g3_ParamLimits

0x0f69,	// (0x0004a1d2) slider_set_pane_g4_ParamLimits

0x0f81,	// (0x0004a1ea) slider_set_pane_g5_ParamLimits

0x0f55,	// (0x0004a1be) slider_set_pane_g6_ParamLimits

0x0f97,	// (0x0004a200) slider_set_pane_g7_ParamLimits

0xf964,	// (0x00058bcd) slider_set_pane_g_ParamLimits

0xe601,	// (0x0005786a) navi_icon_text_pane_ParamLimits

0xb6d4,	// (0x0005493d) aid_fill_nsta_2_ParamLimits

0xb70d,	// (0x00054976) aid_touch_tab_arrow_left_ParamLimits

0xb723,	// (0x0005498c) aid_touch_tab_arrow_right_ParamLimits

0xb7be,	// (0x00054a27) clock_nsta_pane_ParamLimits

0xc749,	// (0x000559b2) navi_icon_pane_g1_ParamLimits

0xc755,	// (0x000559be) navi_text_pane_t1_ParamLimits

0xcb85,	// (0x00055dee) navi_icon_text_pane_g1_ParamLimits

0xcb91,	// (0x00055dfa) navi_icon_text_pane_t1_ParamLimits

0xd1f7,	// (0x00056460) list_single_hc_apps_pane_g1_ParamLimits

0xbbbe,	// (0x00054e27) list_single_hc_apps_pane_g2_ParamLimits

0xfcef,	// (0x00058f58) list_single_hc_apps_pane_g_ParamLimits

0xbbd7,	// (0x00054e40) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9812,	// (0x00052a7b) list_single_hc_apps_pane_t1_ParamLimits

0x99b4,	// (0x00052c1d) popup_toolbar2_fixed_window_ParamLimits

0x99b4,	// (0x00052c1d) popup_toolbar2_fixed_window

0xb639,	// (0x000548a2) popup_toolbar2_float_window

0x985c,	// (0x00052ac5) bg_popup_sub_pane_cp27

0x6286,	// (0x0004f4ef) grid_toolbar2_float_pane

0x985c,	// (0x00052ac5) bg_popup_sub_pane_cp26

0x6286,	// (0x0004f4ef) grid_toolbar2_fixed_pane

0xd210,	// (0x00056479) cell_toolbar2_fixed_pane_ParamLimits

0xd210,	// (0x00056479) cell_toolbar2_fixed_pane

0xd22a,	// (0x00056493) cell_toolbar2_fixed_pane_g1

0x62a7,	// (0x0004f510) toolbar2_fixed_button_pane

0x27f7,	// (0x0004ba60) toolbar2_fixed_button_pane_g1

0x27ff,	// (0x0004ba68) toolbar2_fixed_button_pane_g2

0x2807,	// (0x0004ba70) toolbar2_fixed_button_pane_g3

0x280f,	// (0x0004ba78) toolbar2_fixed_button_pane_g4

0x2817,	// (0x0004ba80) toolbar2_fixed_button_pane_g5

0x281f,	// (0x0004ba88) toolbar2_fixed_button_pane_g6

0x2827,	// (0x0004ba90) toolbar2_fixed_button_pane_g7

0x282f,	// (0x0004ba98) toolbar2_fixed_button_pane_g8

0x2837,	// (0x0004baa0) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x00058acf) toolbar2_fixed_button_pane_g

0x62af,	// (0x0004f518) cell_toolbar2_float_pane_ParamLimits

0x62af,	// (0x0004f518) cell_toolbar2_float_pane

0x62c0,	// (0x0004f529) cell_toolbar2_float_pane_g1

0x62a7,	// (0x0004f510) toolbar2_fixed_button_pane_cp

0xccd7,	// (0x00055f40) fep_vkb_accented_list_pane_ParamLimits

0xccd7,	// (0x00055f40) fep_vkb_accented_list_pane

0x13e5,	// (0x0004a64e) bg_popup_fep_shadow_pane_g9

0xe76d,	// (0x000579d6) bg_popup_fep_shadow_pane_cp3

0xa6a2,	// (0x0005390b) list_accented_list_pane

0x62c9,	// (0x0004f532) list_single_accented_list_pane_ParamLimits

0x62c9,	// (0x0004f532) list_single_accented_list_pane

0xe76d,	// (0x000579d6) list_highlight_pane_cp10

0x62da,	// (0x0004f543) list_single_accented_list_pane_t1

0xb557,	// (0x000547c0) popup_slider_window_ParamLimits

0xb557,	// (0x000547c0) popup_slider_window

0x5f22,	// (0x0004f18b) aid_indentation_list_msg

0xd32d,	// (0x00056596) bg_popup_window_pane_cp19

0x6416,	// (0x0004f67f) popup_slider_window_g1

0x6432,	// (0x0004f69b) popup_slider_window_g2

0x644e,	// (0x0004f6b7) popup_slider_window_g3

0x0005,

0xfcf4,	// (0x00058f5d) popup_slider_window_g

0x64b4,	// (0x0004f71d) popup_slider_window_t1

0x6528,	// (0x0004f791) small_volume_slider_vertical_pane

0x4df1,	// (0x0004e05a) small_volume_slider_vertical_pane_g1

0x4df1,	// (0x0004e05a) small_volume_slider_vertical_pane_g2

0x6544,	// (0x0004f7ad) small_volume_slider_vertical_pane_g3

0x0002,

0xfd06,	// (0x00058f6f) small_volume_slider_vertical_pane_g

0x9914,	// (0x00052b7d) area_side_right_pane_ParamLimits

0x9914,	// (0x00052b7d) area_side_right_pane

0xbbf3,	// (0x00054e5c) aid_size_side_button_ParamLimits

0xbbf3,	// (0x00054e5c) aid_size_side_button

0xbc0c,	// (0x00054e75) grid_sctrl_middle_pane_ParamLimits

0xbc0c,	// (0x00054e75) grid_sctrl_middle_pane

0x165d,	// (0x0004a8c6) sctrl_sk_bottom_pane

0x166e,	// (0x0004a8d7) sctrl_sk_top_pane

0x1680,	// (0x0004a8e9) aid_touch_sctrl_top

0x9ec6,	// (0x0005312f) bg_sctrl_sk_pane_ParamLimits

0x9ec6,	// (0x0005312f) bg_sctrl_sk_pane

0x168d,	// (0x0004a8f6) sctrl_sk_top_pane_g1

0x169a,	// (0x0004a903) sctrl_sk_top_pane_t1

0x1680,	// (0x0004a8e9) aid_touch_sctrl_bottom

0x9ec6,	// (0x0005312f) bg_sctrl_sk_pane_cp_ParamLimits

0x9ec6,	// (0x0005312f) bg_sctrl_sk_pane_cp

0x16b5,	// (0x0004a91e) sctrl_sk_bottom_pane_g1

0x169a,	// (0x0004a903) sctrl_sk_bottom_pane_t1

0xbc26,	// (0x00054e8f) cell_sctrl_middle_pane_ParamLimits

0xbc26,	// (0x00054e8f) cell_sctrl_middle_pane

0xbc39,	// (0x00054ea2) aid_touch_sctrl_middle_ParamLimits

0xbc39,	// (0x00054ea2) aid_touch_sctrl_middle

0xbc46,	// (0x00054eaf) bg_sctrl_middle_pane_ParamLimits

0xbc46,	// (0x00054eaf) bg_sctrl_middle_pane

0x65cf,	// (0x0004f838) cell_sctrl_middle_pane_g1_ParamLimits

0x65cf,	// (0x0004f838) cell_sctrl_middle_pane_g1

0xbc54,	// (0x00054ebd) cell_sctrl_middle_pane_g2_ParamLimits

0xbc54,	// (0x00054ebd) cell_sctrl_middle_pane_g2

0x0001,

0xfd12,	// (0x00058f7b) cell_sctrl_middle_pane_g_ParamLimits

0xfd12,	// (0x00058f7b) cell_sctrl_middle_pane_g

0x27f7,	// (0x0004ba60) bg_sctrl_middle_pane_g1

0x27ff,	// (0x0004ba68) bg_sctrl_middle_pane_g2

0x2807,	// (0x0004ba70) bg_sctrl_middle_pane_g3

0x280f,	// (0x0004ba78) bg_sctrl_middle_pane_g4

0x2817,	// (0x0004ba80) bg_sctrl_middle_pane_g5

0x281f,	// (0x0004ba88) bg_sctrl_middle_pane_g6

0x2827,	// (0x0004ba90) bg_sctrl_middle_pane_g7

0x282f,	// (0x0004ba98) bg_sctrl_middle_pane_g8

0x0007,

0xfd17,	// (0x00058f80) bg_sctrl_middle_pane_g

0x2837,	// (0x0004baa0) bg_sctrl_middle_pane_g8_copy1

0x27f7,	// (0x0004ba60) bg_sctrl_sk_pane_g1

0x27ff,	// (0x0004ba68) bg_sctrl_sk_pane_g2

0x2807,	// (0x0004ba70) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x00058acf) bg_sctrl_sk_pane_g

0xa40b,	// (0x00053674) aid_size_touch_scroll_bar

0x280f,	// (0x0004ba78) bg_sctrl_sk_pane_g4

0x2817,	// (0x0004ba80) bg_sctrl_sk_pane_g5

0x281f,	// (0x0004ba88) bg_sctrl_sk_pane_g6

0x2827,	// (0x0004ba90) bg_sctrl_sk_pane_g7

0x282f,	// (0x0004ba98) bg_sctrl_sk_pane_g8

0x2837,	// (0x0004baa0) bg_sctrl_sk_pane_g9

0x068b,	// (0x000498f4) popup_fep_china_hwr2_fs_candidate_window

0xb00f,	// (0x00054278) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb00f,	// (0x00054278) popup_fep_china_hwr2_fs_control_window

0x5054,	// (0x0004e2bd) sctrl_sk_top_pane_g2

0x0001,

0xfd0d,	// (0x00058f76) sctrl_sk_top_pane_g

0xd3e5,	// (0x0005664e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd3e5,	// (0x0005664e) aid_fep_china_hwr2_fs_cell

0xd3fb,	// (0x00056664) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd3fb,	// (0x00056664) bg_popup_fep_shadow_pane_cp4

0xd412,	// (0x0005667b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd412,	// (0x0005667b) bg_popup_fep_shadow_pane_cp5

0xd424,	// (0x0005668d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd424,	// (0x0005668d) popup_fep_china_hwr2_fs_control_bar_grid

0xd438,	// (0x000566a1) popup_fep_china_hwr2_fs_control_funtion_grid

0x65a3,	// (0x0004f80c) aid_fep_china_hwr2_fs_candi_cell

0x985c,	// (0x00052ac5) bg_popup_fep_shadow_pane_cp6

0x65ad,	// (0x0004f816) popup_fep_china_hwr2_fs_candidate_grid

0xd440,	// (0x000566a9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd440,	// (0x000566a9) cell_fep_china_hwr2_fs_funtion_grid

0x4df1,	// (0x0004e05a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x65cf,	// (0x0004f838) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x65cf,	// (0x0004f838) cell_fep_china_hwr2_fs_funtion_grid_g1

0x65dd,	// (0x0004f846) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x65dd,	// (0x0004f846) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd28,	// (0x00058f91) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd28,	// (0x00058f91) cell_fep_china_hwr2_fs_funtion_grid_g

0xd458,	// (0x000566c1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd458,	// (0x000566c1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd46d,	// (0x000566d6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd46d,	// (0x000566d6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2d,	// (0x00058f96) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2d,	// (0x00058f96) cell_fep_china_hwr2_fs_funtion_grid_t

0x6624,	// (0x0004f88d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x662c,	// (0x0004f895) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6634,	// (0x0004f89d) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd32,	// (0x00058f9b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x663c,	// (0x0004f8a5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x663c,	// (0x0004f8a5) cell_fep_china_hwr2_fs_candidate_grid

0x665b,	// (0x0004f8c4) popup_fep_china_hwr2_fs_candidate_grid_g20

0x6663,	// (0x0004f8cc) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4df1,	// (0x0004e05a) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4df1,	// (0x0004e05a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb52,	// (0x00058dbb) cell_fep_china_hwr2_fs_candidate_grid_g

0x666b,	// (0x0004f8d4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x23df,	// (0x0004b648) clock_nsta_pane_cp_24_ParamLimits

0x23df,	// (0x0004b648) clock_nsta_pane_cp_24

0x245f,	// (0x0004b6c8) indicator_nsta_pane_cp_24_ParamLimits

0x245f,	// (0x0004b6c8) indicator_nsta_pane_cp_24

0x34d8,	// (0x0004c741) heading_pane_g1

0x0001,

0xf8cb,	// (0x00058b34) heading_pane_g

0x3f66,	// (0x0004d1cf) grid_sct_catagory_button_pane

0x3f98,	// (0x0004d201) scroll_pane_cp5_ParamLimits

0x4a51,	// (0x0004dcba) button_value_adjust_pane_cp5_ParamLimits

0x4a51,	// (0x0004dcba) button_value_adjust_pane_cp5

0x4b36,	// (0x0004dd9f) form2_midp_time_pane_ParamLimits

0x6679,	// (0x0004f8e2) cell_sct_catagory_button_pane_ParamLimits

0x6679,	// (0x0004f8e2) cell_sct_catagory_button_pane

0x4db6,	// (0x0004e01f) bg_button_pane_cp01_ParamLimits

0x4db6,	// (0x0004e01f) bg_button_pane_cp01

0x4df1,	// (0x0004e05a) cell_sct_catagory_button_pane_g1

0xb5d6,	// (0x0005483f) popup_tb_extension_window

0xd489,	// (0x000566f2) aid_size_cell_ext_ParamLimits

0xd489,	// (0x000566f2) aid_size_cell_ext

0xa24d,	// (0x000534b6) bg_tb_trans_pane_cp1_ParamLimits

0xa24d,	// (0x000534b6) bg_tb_trans_pane_cp1

0xd4af,	// (0x00056718) grid_tb_ext_pane_ParamLimits

0xd4af,	// (0x00056718) grid_tb_ext_pane

0xd4ec,	// (0x00056755) cell_tb_ext_pane_ParamLimits

0xd4ec,	// (0x00056755) cell_tb_ext_pane

0xd514,	// (0x0005677d) cell_tb_ext_pane_g1_ParamLimits

0xd514,	// (0x0005677d) cell_tb_ext_pane_g1

0x670d,	// (0x0004f976) cell_tb_ext_pane_t1

0x9ec6,	// (0x0005312f) list_highlight_pane_cp11_ParamLimits

0x9ec6,	// (0x0005312f) list_highlight_pane_cp11

0x99c9,	// (0x00052c32) popup_uni_indicator_window_ParamLimits

0x99c9,	// (0x00052c32) popup_uni_indicator_window

0xa548,	// (0x000537b1) bg_popup_sub_pane_cp14

0x6728,	// (0x0004f991) list_uniindi_pane

0x6734,	// (0x0004f99d) uniindi_top_pane

0x9ec6,	// (0x0005312f) bg_uniindi_top_pane

0x6755,	// (0x0004f9be) uniindi_top_pane_g1

0x676b,	// (0x0004f9d4) uniindi_top_pane_g2

0x0003,

0xfd39,	// (0x00058fa2) uniindi_top_pane_g

0x6795,	// (0x0004f9fe) uniindi_top_pane_t1

0x67c1,	// (0x0004fa2a) list_single_uniindi_pane_ParamLimits

0x67c1,	// (0x0004fa2a) list_single_uniindi_pane

0x4df1,	// (0x0004e05a) bg_uniindi_top_pane_g1

0x67d3,	// (0x0004fa3c) list_single_uniindi_pane_g1

0x67e6,	// (0x0004fa4f) list_single_uniindi_pane_t1

0x985c,	// (0x00052ac5) control_bg_pane

0x680b,	// (0x0004fa74) bg_sctrl_sk_pane_cp1

0x6814,	// (0x0004fa7d) bg_sctrl_sk_pane_cp2

0x681d,	// (0x0004fa86) control_bg_pane_g1

0x6826,	// (0x0004fa8f) control_bg_pane_g2

0x0001,

0xfd42,	// (0x00058fab) control_bg_pane_g

0x489a,	// (0x0004db03) cell_indicator_nsta_pane_g1_ParamLimits

0xcae7,	// (0x00055d50) cell_indicator_nsta_pane_g2_ParamLimits

0xfab6,	// (0x00058d1f) cell_indicator_nsta_pane_g_ParamLimits

0xf0de,	// (0x00058347) form2_midp_time_pane_t1_ParamLimits

0x11a5,	// (0x0004a40e) main_idle_act4_pane_ParamLimits

0x11a5,	// (0x0004a40e) main_idle_act4_pane

0xb5d6,	// (0x0005483f) popup_tb_extension_window_ParamLimits

0xd4d4,	// (0x0005673d) tb_ext_find_pane_ParamLimits

0xd4d4,	// (0x0005673d) tb_ext_find_pane

0x682f,	// (0x0004fa98) ai_gene_pane_1_cp1

0xe7f3,	// (0x00057a5c) ai_gene_pane_2_cp1

0x6837,	// (0x0004faa0) list_single_idle_plugin_calendar_pane

0x6840,	// (0x0004faa9) list_single_idle_plugin_notification_pane

0x6849,	// (0x0004fab2) list_single_idle_plugin_player_pane

0xd531,	// (0x0005679a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd531,	// (0x0005679a) list_single_idle_plugin_shortcut_pane

0xd559,	// (0x000567c2) main_idle_act4_pane_t1

0xd571,	// (0x000567da) main_idle_act4_pane_t2

0x0001,

0xfd47,	// (0x00058fb0) main_idle_act4_pane_t

0xd589,	// (0x000567f2) middle_sk_idle_act4_pane_ParamLimits

0xd589,	// (0x000567f2) middle_sk_idle_act4_pane

0xd5a5,	// (0x0005680e) popup_clock_digital_analogue_window_cp2

0xd5cc,	// (0x00056835) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5cc,	// (0x00056835) shortcut_wheel_idle_act4_pane

0x4df1,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g1

0x4df1,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g2

0x4df1,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g3

0x4df1,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g4

0x4df1,	// (0x0004e05a) shortcut_wheel_idle_act4_pane_g5

0x68dc,	// (0x0004fb45) shortcut_wheel_idle_act4_pane_g6

0x68e4,	// (0x0004fb4d) shortcut_wheel_idle_act4_pane_g7

0x68ec,	// (0x0004fb55) shortcut_wheel_idle_act4_pane_g8

0x68f4,	// (0x0004fb5d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4c,	// (0x00058fb5) shortcut_wheel_idle_act4_pane_g

0xccaf,	// (0x00055f18) middle_sk_idle_act4_pane_g1_ParamLimits

0xccaf,	// (0x00055f18) middle_sk_idle_act4_pane_g1

0xd649,	// (0x000568b2) middle_sk_idle_act4_pane_g2_ParamLimits

0xd649,	// (0x000568b2) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6f,	// (0x00058fd8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6f,	// (0x00058fd8) middle_sk_idle_act4_pane_g

0xd661,	// (0x000568ca) middle_sk_idle_act4_pane_t1_ParamLimits

0xd661,	// (0x000568ca) middle_sk_idle_act4_pane_t1

0xd690,	// (0x000568f9) grid_ai_shortcut_pane_ParamLimits

0xd690,	// (0x000568f9) grid_ai_shortcut_pane

0xd6ad,	// (0x00056916) list_highlight_pane_cp16_ParamLimits

0xd6ad,	// (0x00056916) list_highlight_pane_cp16

0xd6ba,	// (0x00056923) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd6ba,	// (0x00056923) list_single_idle_plugin_shortcut_pane_g1

0xd6c6,	// (0x0005692f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd6c6,	// (0x0005692f) list_single_idle_plugin_shortcut_pane_g2

0xd6e4,	// (0x0005694d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6e4,	// (0x0005694d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd74,	// (0x00058fdd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd74,	// (0x00058fdd) list_single_idle_plugin_shortcut_pane_g

0xd6f9,	// (0x00056962) cell_ai_shortcut_pane_ParamLimits

0xd6f9,	// (0x00056962) cell_ai_shortcut_pane

0xd70f,	// (0x00056978) cell_ai_shortcut_pane_g1_ParamLimits

0xd70f,	// (0x00056978) cell_ai_shortcut_pane_g1

0x682f,	// (0x0004fa98) ai_gene_pane_1_cp2

0x6a25,	// (0x0004fc8e) ai_gene_pane_2_cp2

0x6a2d,	// (0x0004fc96) list_highlight_pane_cp15

0x6a36,	// (0x0004fc9f) list_single_idle_plugin_calendar_pane_g1

0x6a2d,	// (0x0004fc96) list_highlight_pane_cp17

0x6a3e,	// (0x0004fca7) list_single_idle_plugin_calendar_pane_g1_copy1

0x6a46,	// (0x0004fcaf) list_single_idle_plugin_player_pane_g1

0x41cd,	// (0x0004d436) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7b,	// (0x00058fe4) list_single_idle_plugin_player_pane_g

0x6a4e,	// (0x0004fcb7) list_single_idle_plugin_player_pane_t1

0x6a5c,	// (0x0004fcc5) list_single_idle_plugin_player_pane_t2

0x6a6a,	// (0x0004fcd3) list_single_idle_plugin_player_pane_t3

0x6a78,	// (0x0004fce1) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd80,	// (0x00058fe9) list_single_idle_plugin_player_pane_t

0x6a86,	// (0x0004fcef) wait_bar_pane_cp15

0x6a8e,	// (0x0004fcf7) grid_ai_notification_pane

0x41cd,	// (0x0004d436) list_single_idle_plugin_notification_pane_g1

0xd731,	// (0x0005699a) cell_ai_notification_pane_ParamLimits

0xd731,	// (0x0005699a) cell_ai_notification_pane

0x6aa4,	// (0x0004fd0d) cell_ai_notification_pane_g1

0x6aac,	// (0x0004fd15) cell_ai_notification_pane_t1

0xd73e,	// (0x000569a7) tb_ext_find_button_pane

0xd746,	// (0x000569af) tb_ext_find_pane_g1

0xd74e,	// (0x000569b7) tb_ext_find_pane_t1

0xc271,	// (0x000554da) tb_ext_find_button_pane_g1

0x6ad8,	// (0x0004fd41) tb_ext_find_button_pane_g2

0x0001,

0xfd89,	// (0x00058ff2) tb_ext_find_button_pane_g

0xd559,	// (0x000567c2) main_idle_act4_pane_t1_ParamLimits

0xd571,	// (0x000567da) main_idle_act4_pane_t2_ParamLimits

0xfd47,	// (0x00058fb0) main_idle_act4_pane_t_ParamLimits

0xd5a5,	// (0x0005680e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5bc,	// (0x00056825) sat_plugin_idle_act4_pane_ParamLimits

0xd5bc,	// (0x00056825) sat_plugin_idle_act4_pane

0xd75c,	// (0x000569c5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd75c,	// (0x000569c5) sat_plugin_idle_act4_pane_t1

0xd774,	// (0x000569dd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd774,	// (0x000569dd) sat_plugin_idle_act4_pane_t2

0xd78c,	// (0x000569f5) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd78c,	// (0x000569f5) sat_plugin_idle_act4_pane_t3

0xd7a4,	// (0x00056a0d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7a4,	// (0x00056a0d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8e,	// (0x00058ff7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8e,	// (0x00058ff7) sat_plugin_idle_act4_pane_t

0xed89,	// (0x00057ff2) popup_battery_window_ParamLimits

0xed89,	// (0x00057ff2) popup_battery_window

0x9ec6,	// (0x0005312f) bg_popup_sub_pane_cp25_ParamLimits

0x9ec6,	// (0x0005312f) bg_popup_sub_pane_cp25

0x6b2d,	// (0x0004fd96) popup_battery_window_g1_ParamLimits

0x6b2d,	// (0x0004fd96) popup_battery_window_g1

0x6b39,	// (0x0004fda2) popup_battery_window_t1_ParamLimits

0x6b39,	// (0x0004fda2) popup_battery_window_t1

0x6b4b,	// (0x0004fdb4) popup_battery_window_t2_ParamLimits

0x6b4b,	// (0x0004fdb4) popup_battery_window_t2

0x0001,

0xfd97,	// (0x00059000) popup_battery_window_t_ParamLimits

0xfd97,	// (0x00059000) popup_battery_window_t

0xac7c,	// (0x00053ee5) midp_canvas_pane_ParamLimits

0xacd8,	// (0x00053f41) midp_keypad_pane_ParamLimits

0xacd8,	// (0x00053f41) midp_keypad_pane

0x22c7,	// (0x0004b530) main_midp_pane_ParamLimits

0x4904,	// (0x0004db6d) signal_pane_g2_cp_ParamLimits

0xd7bc,	// (0x00056a25) aid_size_cell_midp_keypad_ParamLimits

0xd7bc,	// (0x00056a25) aid_size_cell_midp_keypad

0xd7da,	// (0x00056a43) midp_keyp_game_grid_pane_ParamLimits

0xd7da,	// (0x00056a43) midp_keyp_game_grid_pane

0xd801,	// (0x00056a6a) midp_keyp_rocker_pane_ParamLimits

0xd801,	// (0x00056a6a) midp_keyp_rocker_pane

0xd850,	// (0x00056ab9) midp_keyp_sk_left_pane_ParamLimits

0xd850,	// (0x00056ab9) midp_keyp_sk_left_pane

0xd8a6,	// (0x00056b0f) midp_keyp_sk_right_pane_ParamLimits

0xd8a6,	// (0x00056b0f) midp_keyp_sk_right_pane

0x985c,	// (0x00052ac5) bg_button_pane_cp03

0xd8fc,	// (0x00056b65) midp_keyp_sk_left_pane_g1

0x985c,	// (0x00052ac5) bg_button_pane_cp04

0xd8fc,	// (0x00056b65) midp_keyp_sk_right_pane_g1

0x4df1,	// (0x0004e05a) midp_keyp_rocker_pane_g1

0xd904,	// (0x00056b6d) keyp_game_cell_pane_ParamLimits

0xd904,	// (0x00056b6d) keyp_game_cell_pane

0x985c,	// (0x00052ac5) bg_button_pane_cp02

0xd92a,	// (0x00056b93) keyp_game_cell_pane_g1

0x9960,	// (0x00052bc9) popup_fep_vkb2_window_ParamLimits

0x9960,	// (0x00052bc9) popup_fep_vkb2_window

0xbc60,	// (0x00054ec9) aid_size_cell_vkb2_ParamLimits

0xbc60,	// (0x00054ec9) aid_size_cell_vkb2

0xbc96,	// (0x00054eff) popup_fep_vkb2_window_g1_ParamLimits

0xbc96,	// (0x00054eff) popup_fep_vkb2_window_g1

0xbce6,	// (0x00054f4f) vkb2_area_bottom_pane_ParamLimits

0xbce6,	// (0x00054f4f) vkb2_area_bottom_pane

0xbd42,	// (0x00054fab) vkb2_area_keypad_pane_ParamLimits

0xbd42,	// (0x00054fab) vkb2_area_keypad_pane

0xbd90,	// (0x00054ff9) vkb2_area_top_pane_ParamLimits

0xbd90,	// (0x00054ff9) vkb2_area_top_pane

0xbe16,	// (0x0005507f) vkb2_top_entry_pane_ParamLimits

0xbe16,	// (0x0005507f) vkb2_top_entry_pane

0xbe43,	// (0x000550ac) vkb2_top_grid_left_pane_ParamLimits

0xbe43,	// (0x000550ac) vkb2_top_grid_left_pane

0xbe63,	// (0x000550cc) vkb2_top_grid_right_pane_ParamLimits

0xbe63,	// (0x000550cc) vkb2_top_grid_right_pane

0x1921,	// (0x0004ab8a) vkb2_cell_keypad_pane_ParamLimits

0x1921,	// (0x0004ab8a) vkb2_cell_keypad_pane

0xbea9,	// (0x00055112) vkb2_area_bottom_grid_pane_ParamLimits

0xbea9,	// (0x00055112) vkb2_area_bottom_grid_pane

0xbed3,	// (0x0005513c) vkb2_area_bottom_pane_g1_ParamLimits

0xbed3,	// (0x0005513c) vkb2_area_bottom_pane_g1

0xbef9,	// (0x00055162) vkb2_area_bottom_pane_g2_ParamLimits

0xbef9,	// (0x00055162) vkb2_area_bottom_pane_g2

0xbf2a,	// (0x00055193) vkb2_area_bottom_pane_g3_ParamLimits

0xbf2a,	// (0x00055193) vkb2_area_bottom_pane_g3

0x0002,

0xfd9c,	// (0x00059005) vkb2_area_bottom_pane_g_ParamLimits

0xfd9c,	// (0x00059005) vkb2_area_bottom_pane_g

0x1acb,	// (0x0004ad34) vkb2_top_cell_left_pane_ParamLimits

0x1acb,	// (0x0004ad34) vkb2_top_cell_left_pane

0xd933,	// (0x00056b9c) vkb2_top_entry_pane_g1_ParamLimits

0xd933,	// (0x00056b9c) vkb2_top_entry_pane_g1

0xd941,	// (0x00056baa) vkb2_top_entry_pane_t1_ParamLimits

0xd941,	// (0x00056baa) vkb2_top_entry_pane_t1

0x6cf5,	// (0x0004ff5e) vkb2_top_entry_pane_t2_ParamLimits

0x6cf5,	// (0x0004ff5e) vkb2_top_entry_pane_t2

0x6d27,	// (0x0004ff90) vkb2_top_entry_pane_t3_ParamLimits

0x6d27,	// (0x0004ff90) vkb2_top_entry_pane_t3

0x0002,

0xfda3,	// (0x0005900c) vkb2_top_entry_pane_t_ParamLimits

0xfda3,	// (0x0005900c) vkb2_top_entry_pane_t

0xbf94,	// (0x000551fd) vkb2_top_grid_right_pane_g1_ParamLimits

0xbf94,	// (0x000551fd) vkb2_top_grid_right_pane_g1

0x1b2e,	// (0x0004ad97) vkb2_top_grid_right_pane_g2_ParamLimits

0x1b2e,	// (0x0004ad97) vkb2_top_grid_right_pane_g2

0x1b46,	// (0x0004adaf) vkb2_top_grid_right_pane_g3_ParamLimits

0x1b46,	// (0x0004adaf) vkb2_top_grid_right_pane_g3

0xbfaa,	// (0x00055213) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfaa,	// (0x00055213) vkb2_top_grid_right_pane_g4

0x0003,

0xfdaa,	// (0x00059013) vkb2_top_grid_right_pane_g_ParamLimits

0xfdaa,	// (0x00059013) vkb2_top_grid_right_pane_g

0x1b74,	// (0x0004addd) vkb2_top_cell_left_pane_g1

0x1b8b,	// (0x0004adf4) vkb2_cell_keypad_pane_g1_ParamLimits

0x1b8b,	// (0x0004adf4) vkb2_cell_keypad_pane_g1

0x6d4b,	// (0x0004ffb4) vkb2_cell_keypad_pane_t1_ParamLimits

0x6d4b,	// (0x0004ffb4) vkb2_cell_keypad_pane_t1

0x1b99,	// (0x0004ae02) vkb2_cell_bottom_grid_pane_ParamLimits

0x1b99,	// (0x0004ae02) vkb2_cell_bottom_grid_pane

0x1bd2,	// (0x0004ae3b) vkb2_cell_bottom_grid_pane_g1

0xd5ed,	// (0x00056856) aid_call2_pane_cp02

0xd5f5,	// (0x0005685e) aid_call_pane_cp02

0xd5fd,	// (0x00056866) clock_digital_number_pane_cp10

0xd605,	// (0x0005686e) clock_digital_number_pane_cp11

0xd60d,	// (0x00056876) clock_digital_number_pane_cp12

0xd615,	// (0x0005687e) clock_digital_number_pane_cp13

0xd61d,	// (0x00056886) clock_digital_separator_pane_cp10

0xc271,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g1

0xc271,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g2

0xd625,	// (0x0005688e) popup_clock_digital_analogue_window_cp2_g3

0xc271,	// (0x000554da) popup_clock_digital_analogue_window_cp2_g4

0xd625,	// (0x0005688e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5f,	// (0x00058fc8) popup_clock_digital_analogue_window_cp2_g

0xd62d,	// (0x00056896) popup_clock_digital_analogue_window_cp2_t1

0xd63b,	// (0x000568a4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6a,	// (0x00058fd3) popup_clock_digital_analogue_window_cp2_t

0x4df1,	// (0x0004e05a) clock_digital_number_pane_cp10_g1

0x4df1,	// (0x0004e05a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb52,	// (0x00058dbb) clock_digital_number_pane_cp10_g

0x4df1,	// (0x0004e05a) clock_digital_separator_pane_cp10_g1

0x4df1,	// (0x0004e05a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb52,	// (0x00058dbb) clock_digital_separator_pane_cp10_g

0x6777,	// (0x0004f9e0) uniindi_top_pane_g3

0x6788,	// (0x0004f9f1) uniindi_top_pane_g4

0x19ac,	// (0x0004ac15) vkb2_row_keypad_pane_ParamLimits

0x19ac,	// (0x0004ac15) vkb2_row_keypad_pane

0x1bee,	// (0x0004ae57) vkb2_cell_t_keypad_pane_ParamLimits

0x1bee,	// (0x0004ae57) vkb2_cell_t_keypad_pane

0x1bfe,	// (0x0004ae67) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x1bfe,	// (0x0004ae67) vkb2_cell_t_keypad_pane_cp08

0x1c13,	// (0x0004ae7c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x1c13,	// (0x0004ae7c) vkb2_cell_t_keypad_pane_cp09

0x1c27,	// (0x0004ae90) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1c27,	// (0x0004ae90) vkb2_cell_t_keypad_pane_cp01

0x1c38,	// (0x0004aea1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1c38,	// (0x0004aea1) vkb2_cell_t_keypad_pane_cp02

0x1c49,	// (0x0004aeb2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1c49,	// (0x0004aeb2) vkb2_cell_t_keypad_pane_cp03

0x1c5a,	// (0x0004aec3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1c5a,	// (0x0004aec3) vkb2_cell_t_keypad_pane_cp04

0x1c6b,	// (0x0004aed4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1c6b,	// (0x0004aed4) vkb2_cell_t_keypad_pane_cp05

0x1c7c,	// (0x0004aee5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1c7c,	// (0x0004aee5) vkb2_cell_t_keypad_pane_cp06

0x1c8f,	// (0x0004aef8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x1c8f,	// (0x0004aef8) vkb2_cell_t_keypad_pane_cp07

0x1ca4,	// (0x0004af0d) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1ca4,	// (0x0004af0d) vkb2_cell_t_keypad_pane_cp10

0x5054,	// (0x0004e2bd) vkb2_cell_t_keypad_pane_g1

0x6d62,	// (0x0004ffcb) vkb2_cell_t_keypad_pane_t1

0x985c,	// (0x00052ac5) popup_grid_graphic2_window

0xd97a,	// (0x00056be3) aid_size_cell_graphic2_ParamLimits

0xd97a,	// (0x00056be3) aid_size_cell_graphic2

0xd9b8,	// (0x00056c21) bg_popup_window_pane_cp21_ParamLimits

0xd9b8,	// (0x00056c21) bg_popup_window_pane_cp21

0xd9c6,	// (0x00056c2f) graphic2_pages_pane_ParamLimits

0xd9c6,	// (0x00056c2f) graphic2_pages_pane

0xda1e,	// (0x00056c87) grid_graphic2_control_pane_ParamLimits

0xda1e,	// (0x00056c87) grid_graphic2_control_pane

0xda66,	// (0x00056ccf) grid_graphic2_pane_ParamLimits

0xda66,	// (0x00056ccf) grid_graphic2_pane

0xdaf1,	// (0x00056d5a) cell_graphic2_pane

0x985c,	// (0x00052ac5) main_comp_mode_pane

0x5fde,	// (0x0004f247) list_ai3_gene_pane_ParamLimits

0xd32d,	// (0x00056596) bg_popup_window_pane_cp19_ParamLimits

0x63b6,	// (0x0004f61f) bg_touch_area_indi_pane_ParamLimits

0x63b6,	// (0x0004f61f) bg_touch_area_indi_pane

0x63cc,	// (0x0004f635) bg_touch_area_indi_pane_cp01_ParamLimits

0x63cc,	// (0x0004f635) bg_touch_area_indi_pane_cp01

0x63e2,	// (0x0004f64b) bg_touch_area_indi_pane_cp02_ParamLimits

0x63e2,	// (0x0004f64b) bg_touch_area_indi_pane_cp02

0x63fc,	// (0x0004f665) bg_touch_area_indi_pane_cp03_ParamLimits

0x63fc,	// (0x0004f665) bg_touch_area_indi_pane_cp03

0x6416,	// (0x0004f67f) popup_slider_window_g1_ParamLimits

0x6432,	// (0x0004f69b) popup_slider_window_g2_ParamLimits

0x644e,	// (0x0004f6b7) popup_slider_window_g3_ParamLimits

0xfcf4,	// (0x00058f5d) popup_slider_window_g_ParamLimits

0x64b4,	// (0x0004f71d) popup_slider_window_t1_ParamLimits

0x6528,	// (0x0004f791) small_volume_slider_vertical_pane_ParamLimits

0xdaf1,	// (0x00056d5a) cell_graphic2_pane_ParamLimits

0xdb54,	// (0x00056dbd) bg_button_pane_cp10_ParamLimits

0xdb54,	// (0x00056dbd) bg_button_pane_cp10

0xdb67,	// (0x00056dd0) bg_button_pane_cp11_ParamLimits

0xdb67,	// (0x00056dd0) bg_button_pane_cp11

0xdb7a,	// (0x00056de3) graphic2_pages_pane_g1_ParamLimits

0xdb7a,	// (0x00056de3) graphic2_pages_pane_g1

0xdb95,	// (0x00056dfe) graphic2_pages_pane_g2_ParamLimits

0xdb95,	// (0x00056dfe) graphic2_pages_pane_g2

0x0001,

0xfdb8,	// (0x00059021) graphic2_pages_pane_g_ParamLimits

0xfdb8,	// (0x00059021) graphic2_pages_pane_g

0xdbad,	// (0x00056e16) graphic2_pages_pane_t1_ParamLimits

0xdbad,	// (0x00056e16) graphic2_pages_pane_t1

0xdbc5,	// (0x00056e2e) cell_graphic2_control_pane_ParamLimits

0xdbc5,	// (0x00056e2e) cell_graphic2_control_pane

0xdbf9,	// (0x00056e62) cell_graphic2_pane_g1_ParamLimits

0xdbf9,	// (0x00056e62) cell_graphic2_pane_g1

0xccbd,	// (0x00055f26) cell_graphic2_pane_g2_ParamLimits

0xccbd,	// (0x00055f26) cell_graphic2_pane_g2

0xdc06,	// (0x00056e6f) cell_graphic2_pane_g3_ParamLimits

0xdc06,	// (0x00056e6f) cell_graphic2_pane_g3

0xccca,	// (0x00055f33) cell_graphic2_pane_g4_ParamLimits

0xccca,	// (0x00055f33) cell_graphic2_pane_g4

0xdc13,	// (0x00056e7c) cell_graphic2_pane_g5_ParamLimits

0xdc13,	// (0x00056e7c) cell_graphic2_pane_g5

0x0004,

0xfdbd,	// (0x00059026) cell_graphic2_pane_g_ParamLimits

0xfdbd,	// (0x00059026) cell_graphic2_pane_g

0xdc33,	// (0x00056e9c) cell_graphic2_pane_t1_ParamLimits

0xdc33,	// (0x00056e9c) cell_graphic2_pane_t1

0x34cc,	// (0x0004c735) grid_highlight_pane_cp11_ParamLimits

0x34cc,	// (0x0004c735) grid_highlight_pane_cp11

0x9ec6,	// (0x0005312f) bg_button_pane_cp05

0xdc7c,	// (0x00056ee5) cell_graphic2_control_pane_g1

0x4df1,	// (0x0004e05a) bg_touch_area_indi_pane_g1

0x704a,	// (0x000502b3) aid_cmod_rocker_key_size

0x7054,	// (0x000502bd) aid_cmode_itu_key_size

0x705e,	// (0x000502c7) main_cmode_video_pane

0x7068,	// (0x000502d1) main_comp_mode_itu_pane

0x7074,	// (0x000502dd) main_comp_mode_rocker_pane

0x7080,	// (0x000502e9) cell_cmode_rocker_pane_ParamLimits

0x7080,	// (0x000502e9) cell_cmode_rocker_pane

0x7094,	// (0x000502fd) cell_cmode_itu_pane_ParamLimits

0x7094,	// (0x000502fd) cell_cmode_itu_pane

0xa548,	// (0x000537b1) bg_button_pane_cp06_ParamLimits

0xa548,	// (0x000537b1) bg_button_pane_cp06

0x5054,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_ParamLimits

0x5054,	// (0x0004e2bd) cell_cmode_rocker_pane_g1

0x65cf,	// (0x0004f838) cell_cmode_rocker_pane_g2_ParamLimits

0x65cf,	// (0x0004f838) cell_cmode_rocker_pane_g2

0x0001,

0xfdcd,	// (0x00059036) cell_cmode_rocker_pane_g_ParamLimits

0xfdcd,	// (0x00059036) cell_cmode_rocker_pane_g

0x985c,	// (0x00052ac5) bg_button_pane_cp07

0x70ab,	// (0x00050314) cell_cmode_itu_pane_g1

0x70b4,	// (0x0005031d) cell_cmode_itu_pane_t1

0x70c2,	// (0x0005032b) cell_cmode_itu_pane_t2

0x0001,

0xfdd2,	// (0x0005903b) cell_cmode_itu_pane_t

0x67fb,	// (0x0004fa64) aid_touch_ctrl_left

0x6803,	// (0x0004fa6c) aid_touch_ctrl_right

0x985c,	// (0x00052ac5) compa_mode_pane

0xdca4,	// (0x00056f0d) aid_cmod_rocker_key_size_cp

0xdcae,	// (0x00056f17) aid_cmode_itu_key_size_cp

0x70e4,	// (0x0005034d) compa_mode_pane_g1

0x70ec,	// (0x00050355) compa_mode_pane_g2

0x70f4,	// (0x0005035d) compa_mode_pane_g3

0x0002,

0xfdd7,	// (0x00059040) compa_mode_pane_g

0xdcb8,	// (0x00056f21) main_comp_mode_itu_pane_cp

0xdcc0,	// (0x00056f29) main_comp_mode_rocker_pane_cp

0xdcc8,	// (0x00056f31) cell_cmode_itu_pane_cp_ParamLimits

0xdcc8,	// (0x00056f31) cell_cmode_itu_pane_cp

0xdcdd,	// (0x00056f46) cell_cmode_rocker_pane_cp_ParamLimits

0xdcdd,	// (0x00056f46) cell_cmode_rocker_pane_cp

0xa548,	// (0x000537b1) bg_button_pane_cp06_cp_ParamLimits

0xa548,	// (0x000537b1) bg_button_pane_cp06_cp

0x5054,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5054,	// (0x0004e2bd) cell_cmode_rocker_pane_g1_cp

0x4df1,	// (0x0004e05a) cell_cmode_rocker_pane_g2_cp

0x985c,	// (0x00052ac5) bg_button_pane_cp07_cp

0xdcef,	// (0x00056f58) cell_cmode_itu_pane_g1_cp

0xdcf8,	// (0x00056f61) cell_cmode_itu_pane_t1_cp

0xdcf8,	// (0x00056f61) cell_cmode_itu_pane_t2_cp

0xc901,	// (0x00055b6a) settings_code_pane_cp2

0x9be3,	// (0x00052e4c) bg_popup_window_pane_cp3_ParamLimits

0xa0da,	// (0x00053343) heading_pane_cp3_ParamLimits

0xa0e6,	// (0x0005334f) listscroll_popup_graphic_pane_ParamLimits

0x11b3,	// (0x0004a41c) fep_hwr_aid_pane_ParamLimits

0x1680,	// (0x0004a8e9) aid_touch_sctrl_top_ParamLimits

0x168d,	// (0x0004a8f6) sctrl_sk_top_pane_g1_ParamLimits

0x5054,	// (0x0004e2bd) sctrl_sk_top_pane_g2_ParamLimits

0xfd0d,	// (0x00058f76) sctrl_sk_top_pane_g_ParamLimits

0x169a,	// (0x0004a903) sctrl_sk_top_pane_t1_ParamLimits

0x1680,	// (0x0004a8e9) aid_touch_sctrl_bottom_ParamLimits

0x169a,	// (0x0004a903) sctrl_sk_bottom_pane_t1_ParamLimits

0x6741,	// (0x0004f9aa) aid_area_touch_clock

0xbdd8,	// (0x00055041) aid_vkb2_area_top_pane_cell_ParamLimits

0xbdd8,	// (0x00055041) aid_vkb2_area_top_pane_cell

0xbe83,	// (0x000550ec) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbe83,	// (0x000550ec) aid_vkb2_area_bottom_pane_cell

0x6cad,	// (0x0004ff16) popup_char_count_window

0x714a,	// (0x000503b3) popup_char_count_window_g1

0x7153,	// (0x000503bc) popup_char_count_window_g2

0x715c,	// (0x000503c5) popup_char_count_window_g3

0x0002,

0xfdde,	// (0x00059047) popup_char_count_window_g

0x7165,	// (0x000503ce) popup_char_count_window_t1

0x173d,	// (0x0004a9a6) popup_fep_char_preview_window_ParamLimits

0x173d,	// (0x0004a9a6) popup_fep_char_preview_window

0xbdf8,	// (0x00055061) vkb2_top_candi_pane_ParamLimits

0xbdf8,	// (0x00055061) vkb2_top_candi_pane

0xdd06,	// (0x00056f6f) cell_vkb2_top_candi_pane_ParamLimits

0xdd06,	// (0x00056f6f) cell_vkb2_top_candi_pane

0x2e55,	// (0x0004c0be) bg_popup_fep_char_preview_window_ParamLimits

0x2e55,	// (0x0004c0be) bg_popup_fep_char_preview_window

0x1cb9,	// (0x0004af22) popup_fep_char_preview_window_t1_ParamLimits

0x1cb9,	// (0x0004af22) popup_fep_char_preview_window_t1

0x71c4,	// (0x0005042d) bg_popup_fep_char_preview_window_g1

0x71cc,	// (0x00050435) bg_popup_fep_char_preview_window_g2

0x71d4,	// (0x0005043d) bg_popup_fep_char_preview_window_g3

0x71dc,	// (0x00050445) bg_popup_fep_char_preview_window_g4

0x71e4,	// (0x0005044d) bg_popup_fep_char_preview_window_g5

0x1cf3,	// (0x0004af5c) bg_popup_fep_char_preview_window_g6

0x71ec,	// (0x00050455) bg_popup_fep_char_preview_window_g7

0x71f4,	// (0x0005045d) bg_popup_fep_char_preview_window_g8

0x71fc,	// (0x00050465) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde5,	// (0x0005904e) bg_popup_fep_char_preview_window_g

0x5054,	// (0x0004e2bd) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5054,	// (0x0004e2bd) cell_vkb2_top_candi_pane_g1

0x5395,	// (0x0004e5fe) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5395,	// (0x0004e5fe) cell_vkb2_top_candi_pane_g2

0x53b6,	// (0x0004e61f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x53b6,	// (0x0004e61f) cell_vkb2_top_candi_pane_g3

0x1cfb,	// (0x0004af64) cell_vkb2_top_candi_pane_g4_ParamLimits

0x1cfb,	// (0x0004af64) cell_vkb2_top_candi_pane_g4

0x7204,	// (0x0005046d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7204,	// (0x0005046d) cell_vkb2_top_candi_pane_g5

0x65cf,	// (0x0004f838) cell_vkb2_top_candi_pane_g6_ParamLimits

0x65cf,	// (0x0004f838) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf8,	// (0x00059061) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf8,	// (0x00059061) cell_vkb2_top_candi_pane_g

0x1d1c,	// (0x0004af85) cell_vkb2_top_candi_pane_t1

0x0f35,	// (0x0004a19e) aid_size_touch_slider_mark_ParamLimits

0x0f35,	// (0x0004a19e) aid_size_touch_slider_mark

0xda02,	// (0x00056c6b) grid_graphic2_catg_pane_ParamLimits

0xda02,	// (0x00056c6b) grid_graphic2_catg_pane

0xdac0,	// (0x00056d29) popup_grid_graphic2_window_t1_ParamLimits

0xdac0,	// (0x00056d29) popup_grid_graphic2_window_t1

0xdad6,	// (0x00056d3f) popup_grid_graphic2_window_t2_ParamLimits

0xdad6,	// (0x00056d3f) popup_grid_graphic2_window_t2

0x0001,

0xfdb3,	// (0x0005901c) popup_grid_graphic2_window_t_ParamLimits

0xfdb3,	// (0x0005901c) popup_grid_graphic2_window_t

0x9ec6,	// (0x0005312f) bg_button_pane_cp05_ParamLimits

0xdc7c,	// (0x00056ee5) cell_graphic2_control_pane_g1_ParamLimits

0xdd70,	// (0x00056fd9) cell_graphic2_catg_pane_ParamLimits

0xdd70,	// (0x00056fd9) cell_graphic2_catg_pane

0x985c,	// (0x00052ac5) bg_button_pane_cp12

0xdd82,	// (0x00056feb) cell_graphic2_catg_pane_g1

0x670d,	// (0x0004f976) cell_tb_ext_pane_t1_ParamLimits

0x1aeb,	// (0x0004ad54) vkb2_top_cell_right_narrow_pane_ParamLimits

0x1aeb,	// (0x0004ad54) vkb2_top_cell_right_narrow_pane

0x1b03,	// (0x0004ad6c) vkb2_top_cell_right_wide_pane_ParamLimits

0x1b03,	// (0x0004ad6c) vkb2_top_cell_right_wide_pane

0x11a5,	// (0x0004a40e) bg_vkb2_func_pane_ParamLimits

0x11a5,	// (0x0004a40e) bg_vkb2_func_pane

0x1b74,	// (0x0004addd) vkb2_top_cell_left_pane_g1_ParamLimits

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp03

0x1bd2,	// (0x0004ae3b) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x27ff,	// (0x0004ba68) bg_vkb2_func_pane_g1

0x2807,	// (0x0004ba70) bg_vkb2_func_pane_g2

0x2817,	// (0x0004ba80) bg_vkb2_func_pane_g3

0x280f,	// (0x0004ba78) bg_vkb2_func_pane_g4

0x281f,	// (0x0004ba88) bg_vkb2_func_pane_g5

0x2827,	// (0x0004ba90) bg_vkb2_func_pane_g6

0x282f,	// (0x0004ba98) bg_vkb2_func_pane_g7

0x2837,	// (0x0004baa0) bg_vkb2_func_pane_g8

0x27f7,	// (0x0004ba60) bg_vkb2_func_pane_g9

0x0008,

0xfe05,	// (0x0005906e) bg_vkb2_func_pane_g

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp01

0x1b74,	// (0x0004addd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1b74,	// (0x0004addd) vkb2_top_cell_right_wide_pane_g1

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x11a5,	// (0x0004a40e) bg_vkb2_fuc_pane_cp02

0x1bd2,	// (0x0004ae3b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x1bd2,	// (0x0004ae3b) vkb2_top_cell_right_narrow_pane_g1

0xd26f,	// (0x000564d8) aid_touch_area_decrease_ParamLimits

0xd26f,	// (0x000564d8) aid_touch_area_decrease

0xd2a9,	// (0x00056512) aid_touch_area_increase_ParamLimits

0xd2a9,	// (0x00056512) aid_touch_area_increase

0xd2d1,	// (0x0005653a) aid_touch_area_mute_ParamLimits

0xd2d1,	// (0x0005653a) aid_touch_area_mute

0xd2f9,	// (0x00056562) aid_touch_area_slider_ParamLimits

0xd2f9,	// (0x00056562) aid_touch_area_slider

0xd339,	// (0x000565a2) popup_slider_window_g4_ParamLimits

0xd339,	// (0x000565a2) popup_slider_window_g4

0xd361,	// (0x000565ca) popup_slider_window_g5_ParamLimits

0xd361,	// (0x000565ca) popup_slider_window_g5

0xd395,	// (0x000565fe) popup_slider_window_g6_ParamLimits

0xd395,	// (0x000565fe) popup_slider_window_g6

0x64e2,	// (0x0004f74b) popup_slider_window_t2_ParamLimits

0x64e2,	// (0x0004f74b) popup_slider_window_t2

0x0001,

0xfd01,	// (0x00058f6a) popup_slider_window_t_ParamLimits

0xfd01,	// (0x00058f6a) popup_slider_window_t

0xd3b1,	// (0x0005661a) slider_pane_ParamLimits

0xd3b1,	// (0x0005661a) slider_pane

0x7240,	// (0x000504a9) slider_pane_g1_ParamLimits

0x7240,	// (0x000504a9) slider_pane_g1

0x7254,	// (0x000504bd) slider_pane_g2_ParamLimits

0x7254,	// (0x000504bd) slider_pane_g2

0x726a,	// (0x000504d3) slider_pane_g3_ParamLimits

0x726a,	// (0x000504d3) slider_pane_g3

0x0003,

0xfe18,	// (0x00059081) slider_pane_g_ParamLimits

0xfe18,	// (0x00059081) slider_pane_g

0xb622,	// (0x0005488b) popup_tb_float_extension_window_ParamLimits

0xb622,	// (0x0005488b) popup_tb_float_extension_window

0x7296,	// (0x000504ff) aid_size_cell_tb_float_ext

0x985c,	// (0x00052ac5) bg_popup_sub_window_cp28

0x72a2,	// (0x0005050b) grid_tb_float_ext_pane

0x72ae,	// (0x00050517) cell_tb_float_ext_pane_ParamLimits

0x72ae,	// (0x00050517) cell_tb_float_ext_pane

0x72d2,	// (0x0005053b) cell_tb_float_ext_pane_g1

0x72db,	// (0x00050544) grid_highlight_pane_cp12

0xbb59,	// (0x00054dc2) cell_last_hwr_side_pane_ParamLimits

0xbb59,	// (0x00054dc2) cell_last_hwr_side_pane

0x4df1,	// (0x0004e05a) cell_last_hwr_side_pane_g1

0x72e4,	// (0x0005054d) cell_last_hwr_side_pane_g2

0x0001,

0xfe21,	// (0x0005908a) cell_last_hwr_side_pane_g

0xbf5f,	// (0x000551c8) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf5f,	// (0x000551c8) vkb2_area_bottom_space_btn_pane

0x5054,	// (0x0004e2bd) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6d62,	// (0x0004ffcb) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1d1c,	// (0x0004af85) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1d3a,	// (0x0004afa3) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1d3a,	// (0x0004afa3) vkb2_area_bottom_space_btn_pane_g1

0x1d74,	// (0x0004afdd) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1d74,	// (0x0004afdd) vkb2_area_bottom_space_btn_pane_g2

0x1daa,	// (0x0004b013) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x1daa,	// (0x0004b013) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe26,	// (0x0005908f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe26,	// (0x0005908f) vkb2_area_bottom_space_btn_pane_g

0x125c,	// (0x0004a4c5) cel_fep_hwr_func_pane_ParamLimits

0x125c,	// (0x0004a4c5) cel_fep_hwr_func_pane

0xbb2e,	// (0x00054d97) cell_hwr_side_button_pane_ParamLimits

0xbb2e,	// (0x00054d97) cell_hwr_side_button_pane

0x6741,	// (0x0004f9aa) aid_area_touch_clock_ParamLimits

0x9ec6,	// (0x0005312f) bg_uniindi_top_pane_ParamLimits

0x6755,	// (0x0004f9be) uniindi_top_pane_g1_ParamLimits

0x676b,	// (0x0004f9d4) uniindi_top_pane_g2_ParamLimits

0x6777,	// (0x0004f9e0) uniindi_top_pane_g3_ParamLimits

0x6788,	// (0x0004f9f1) uniindi_top_pane_g4_ParamLimits

0xfd39,	// (0x00058fa2) uniindi_top_pane_g_ParamLimits

0x6795,	// (0x0004f9fe) uniindi_top_pane_t1_ParamLimits

0x9ec6,	// (0x0005312f) bg_vkb2_func_pane_cp01_ParamLimits

0x9ec6,	// (0x0005312f) bg_vkb2_func_pane_cp01

0x72ed,	// (0x00050556) cel_fep_hwr_func_pane_g1_ParamLimits

0x72ed,	// (0x00050556) cel_fep_hwr_func_pane_g1

0x9ec6,	// (0x0005312f) bg_vkb2_func_pane_cp02_ParamLimits

0x9ec6,	// (0x0005312f) bg_vkb2_func_pane_cp02

0x72ed,	// (0x00050556) cell_hwr_side_button_pane_g1_ParamLimits

0x72ed,	// (0x00050556) cell_hwr_side_button_pane_g1

0x267c,	// (0x0004b8e5) status_pane_g4_ParamLimits

0x267c,	// (0x0004b8e5) status_pane_g4

0x2696,	// (0x0004b8ff) status_pane_t1

0x4ba4,	// (0x0004de0d) form2_midp_gauge_slider_cont_pane

0x4bac,	// (0x0004de15) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcbe0,	// (0x00055e49) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcbf2,	// (0x00055e5b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb05,	// (0x00058d6e) form2_midp_gauge_slider_pane_t_ParamLimits

0x4be2,	// (0x0004de4b) form2_midp_slider_pane_ParamLimits

0x16fd,	// (0x0004a966) aid_size_cell_func_vkb2_ParamLimits

0x16fd,	// (0x0004a966) aid_size_cell_func_vkb2

0x7282,	// (0x000504eb) slider_pane_g4_ParamLimits

0x7282,	// (0x000504eb) slider_pane_g4

0xbfc0,	// (0x00055229) form2_midp_gauge_slider_pane_t2_cp01

0xbfce,	// (0x00055237) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbfce,	// (0x00055237) form2_midp_gauge_slider_pane_t3_cp01

0x1e1f,	// (0x0004b088) form2_midp_slider_pane_cp01

0x985c,	// (0x00052ac5) navi_smil_pane

0x7326,	// (0x0005058f) navi_smil_pane_g1

0x732e,	// (0x00050597) navi_smil_pane_t1

0x72fb,	// (0x00050564) form2_midp_slider_pane_g1

0x7304,	// (0x0005056d) form2_midp_slider_pane_g2

0x730c,	// (0x00050575) form2_midp_slider_pane_g3

0x72fb,	// (0x00050564) form2_midp_slider_pane_g4

0xdd8b,	// (0x00056ff4) form2_midp_slider_pane_g5

0x0004,

0xfe2f,	// (0x00059098) form2_midp_slider_pane_g

0x1de4,	// (0x0004b04d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x1de4,	// (0x0004b04d) vkb2_area_bottom_space_btn_pane_g4

0xb809,	// (0x00054a72) lc0_navi_pane_ParamLimits

0xb809,	// (0x00054a72) lc0_navi_pane

0xb879,	// (0x00054ae2) lc0_stat_indi_pane_ParamLimits

0xb879,	// (0x00054ae2) lc0_stat_indi_pane

0xb88e,	// (0x00054af7) ls0_title_pane_ParamLimits

0xb88e,	// (0x00054af7) ls0_title_pane

0xa548,	// (0x000537b1) bg_popup_sub_pane_cp14_ParamLimits

0x6728,	// (0x0004f991) list_uniindi_pane_ParamLimits

0x6734,	// (0x0004f99d) uniindi_top_pane_ParamLimits

0x67d3,	// (0x0004fa3c) list_single_uniindi_pane_g1_ParamLimits

0x67e6,	// (0x0004fa4f) list_single_uniindi_pane_t1_ParamLimits

0xbfeb,	// (0x00055254) lc0_stat_clock_pane_ParamLimits

0xbfeb,	// (0x00055254) lc0_stat_clock_pane

0xdd94,	// (0x00056ffd) lc0_stat_indi_pane_g1_ParamLimits

0xdd94,	// (0x00056ffd) lc0_stat_indi_pane_g1

0xdda1,	// (0x0005700a) lc0_stat_indi_pane_g2_ParamLimits

0xdda1,	// (0x0005700a) lc0_stat_indi_pane_g2

0x0001,

0xfe3a,	// (0x000590a3) lc0_stat_indi_pane_g_ParamLimits

0xfe3a,	// (0x000590a3) lc0_stat_indi_pane_g

0xbff8,	// (0x00055261) lc0_uni_indicator_pane_ParamLimits

0xbff8,	// (0x00055261) lc0_uni_indicator_pane

0xddae,	// (0x00057017) ls0_title_pane_g1_ParamLimits

0xddae,	// (0x00057017) ls0_title_pane_g1

0xddc2,	// (0x0005702b) ls0_title_pane_t1_ParamLimits

0xddc2,	// (0x0005702b) ls0_title_pane_t1

0xc005,	// (0x0005526e) lc0_uni_indicator_pane_g1_ParamLimits

0xc005,	// (0x0005526e) lc0_uni_indicator_pane_g1

0x73a0,	// (0x00050609) lc0_stat_clock_pane_t1

0x985c,	// (0x00052ac5) main_ai5_pane

0x73ae,	// (0x00050617) ai5_sk_pane_ParamLimits

0x73ae,	// (0x00050617) ai5_sk_pane

0xddf0,	// (0x00057059) cell_ai5_widget_pane_ParamLimits

0xddf0,	// (0x00057059) cell_ai5_widget_pane

0xe14a,	// (0x000573b3) aid_size_cell_widget_grid

0x796b,	// (0x00050bd4) bg_ai5_widget_pane_ParamLimits

0x796b,	// (0x00050bd4) bg_ai5_widget_pane

0xe17e,	// (0x000573e7) cell_ai5_widget_pane_g2

0xe192,	// (0x000573fb) cell_ai5_widget_pane_g3

0xe1ac,	// (0x00057415) cell_ai5_widget_pane_g4

0xe1bc,	// (0x00057425) cell_ai5_widget_pane_g5

0xe1cc,	// (0x00057435) cell_ai5_widget_pane_g6

0xe1d8,	// (0x00057441) cell_ai5_widget_pane_g7

0xe1e4,	// (0x0005744d) cell_ai5_widget_pane_t1_ParamLimits

0xe1e4,	// (0x0005744d) cell_ai5_widget_pane_t1

0x7aa2,	// (0x00050d0b) cell_ai5_widget_pane_t2_ParamLimits

0x7aa2,	// (0x00050d0b) cell_ai5_widget_pane_t2

0x7aba,	// (0x00050d23) cell_ai5_widget_pane_t3_ParamLimits

0x7aba,	// (0x00050d23) cell_ai5_widget_pane_t3

0xe201,	// (0x0005746a) cell_ai5_widget_pane_t4_ParamLimits

0xe201,	// (0x0005746a) cell_ai5_widget_pane_t4

0xe227,	// (0x00057490) cell_ai5_widget_pane_t5_ParamLimits

0xe227,	// (0x00057490) cell_ai5_widget_pane_t5

0x7b18,	// (0x00050d81) cell_ai5_widget_pane_t6_ParamLimits

0x7b18,	// (0x00050d81) cell_ai5_widget_pane_t6

0x7b2a,	// (0x00050d93) cell_ai5_widget_pane_t7_ParamLimits

0x7b2a,	// (0x00050d93) cell_ai5_widget_pane_t7

0x7b43,	// (0x00050dac) cell_ai5_widget_pane_t8_ParamLimits

0x7b43,	// (0x00050dac) cell_ai5_widget_pane_t8

0x0009,

0xfe54,	// (0x000590bd) cell_ai5_widget_pane_t_ParamLimits

0xfe54,	// (0x000590bd) cell_ai5_widget_pane_t

0xe294,	// (0x000574fd) grid_ai5_widget_pane

0xa548,	// (0x000537b1) highlight_cell_ai5_widget_pane_ParamLimits

0xa548,	// (0x000537b1) highlight_cell_ai5_widget_pane

0xe2a2,	// (0x0005750b) ai5_sk_left_pane

0xe2ac,	// (0x00057515) ai5_sk_middle_pane

0xe2b6,	// (0x0005751f) ai5_sk_right_pane

0x7bce,	// (0x00050e37) bg_ai5_widget_pane_g1_ParamLimits

0x7bce,	// (0x00050e37) bg_ai5_widget_pane_g1

0x7bda,	// (0x00050e43) bg_ai5_widget_pane_g2_ParamLimits

0x7bda,	// (0x00050e43) bg_ai5_widget_pane_g2

0x7be6,	// (0x00050e4f) bg_ai5_widget_pane_g3_ParamLimits

0x7be6,	// (0x00050e4f) bg_ai5_widget_pane_g3

0x7bf2,	// (0x00050e5b) bg_ai5_widget_pane_g4_ParamLimits

0x7bf2,	// (0x00050e5b) bg_ai5_widget_pane_g4

0x7bfe,	// (0x00050e67) bg_ai5_widget_pane_g5_ParamLimits

0x7bfe,	// (0x00050e67) bg_ai5_widget_pane_g5

0x7c0a,	// (0x00050e73) bg_ai5_widget_pane_g6_ParamLimits

0x7c0a,	// (0x00050e73) bg_ai5_widget_pane_g6

0x7c16,	// (0x00050e7f) bg_ai5_widget_pane_g7_ParamLimits

0x7c16,	// (0x00050e7f) bg_ai5_widget_pane_g7

0x7c22,	// (0x00050e8b) bg_ai5_widget_pane_g8_ParamLimits

0x7c22,	// (0x00050e8b) bg_ai5_widget_pane_g8

0x7c2e,	// (0x00050e97) bg_ai5_widget_pane_g9_ParamLimits

0x7c2e,	// (0x00050e97) bg_ai5_widget_pane_g9

0x0008,

0xfe69,	// (0x000590d2) bg_ai5_widget_pane_g_ParamLimits

0xfe69,	// (0x000590d2) bg_ai5_widget_pane_g

0xe97e,	// (0x00057be7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe97e,	// (0x00057be7) cell_shortcut_ai5_widget_pane

0xe76d,	// (0x000579d6) bg_cell_shortcut_ai5_widget_pane

0x7c79,	// (0x00050ee2) cell_grid_ai5_widget_pane_g1

0xe76d,	// (0x000579d6) highlight_cell_shortcut_ai5_widget_pane

0x2807,	// (0x0004ba70) ai5_sk_left_pane_g1

0x7c82,	// (0x00050eeb) ai5_sk_left_pane_g2

0x7c8a,	// (0x00050ef3) ai5_sk_left_pane_g3

0x7c92,	// (0x00050efb) ai5_sk_left_pane_g4

0x0003,

0xfe7c,	// (0x000590e5) ai5_sk_left_pane_g

0x7c9a,	// (0x00050f03) ai5_sk_left_pane_t1

0x27ff,	// (0x0004ba68) ai5_sk_right_pane_g1

0x7ca8,	// (0x00050f11) ai5_sk_right_pane_g2

0x7cb0,	// (0x00050f19) ai5_sk_right_pane_g3

0x7cb8,	// (0x00050f21) ai5_sk_right_pane_g4

0x0003,

0xfe85,	// (0x000590ee) ai5_sk_right_pane_g

0x7cc0,	// (0x00050f29) ai5_sk_right_pane_t1

0x27ff,	// (0x0004ba68) ai5_sk_middle_pane_g1

0x2807,	// (0x0004ba70) ai5_sk_middle_pane_g2

0x281f,	// (0x0004ba88) ai5_sk_middle_pane_g3

0x7cb0,	// (0x00050f19) ai5_sk_middle_pane_g4

0x7c8a,	// (0x00050ef3) ai5_sk_middle_pane_g5

0x7cce,	// (0x00050f37) ai5_sk_middle_pane_g6

0xe991,	// (0x00057bfa) ai5_sk_middle_pane_g7

0x0006,

0xfe8e,	// (0x000590f7) ai5_sk_middle_pane_g

0xb6f3,	// (0x0005495c) aid_touch_area_size_lc0_ParamLimits

0xb6f3,	// (0x0005495c) aid_touch_area_size_lc0

0x13fb,	// (0x0004a664) cell_hwr_candidate_pane_t1_ParamLimits

0x2345,	// (0x0004b5ae) aid_touch_navi_pane

0xc4ae,	// (0x00055717) status_dt_navi_pane_ParamLimits

0xc4ae,	// (0x00055717) status_dt_navi_pane

0xc4c6,	// (0x0005572f) status_dt_sta_pane_ParamLimits

0xc4c6,	// (0x0005572f) status_dt_sta_pane

0xe999,	// (0x00057c02) dt_sta_controll_pane

0xe9a6,	// (0x00057c0f) dt_sta_indi_pane

0xe9b3,	// (0x00057c1c) dt_sta_title_pane

0x9ec6,	// (0x0005312f) bg_dt_sta_indi_pane_ParamLimits

0x9ec6,	// (0x0005312f) bg_dt_sta_indi_pane

0xe9c5,	// (0x00057c2e) dt_sta_battery_pane

0xe9cd,	// (0x00057c36) dt_sta_indi_pane_g1

0xe9d6,	// (0x00057c3f) dt_sta_indi_pane_g2

0xe9df,	// (0x00057c48) dt_sta_indi_pane_g3

0x0002,

0xfe9d,	// (0x00059106) dt_sta_indi_pane_g

0xe9e8,	// (0x00057c51) dt_sta_signal_pane

0xa548,	// (0x000537b1) bg_dt_sta_title_pane_ParamLimits

0xa548,	// (0x000537b1) bg_dt_sta_title_pane

0xe9f1,	// (0x00057c5a) dt_sta_title_pane_g1

0xe9f9,	// (0x00057c62) dt_sta_title_pane_t1_ParamLimits

0xe9f9,	// (0x00057c62) dt_sta_title_pane_t1

0x985c,	// (0x00052ac5) bg_dt_sta_control_pane

0xea0e,	// (0x00057c77) dt_sta_controll_pane_g1

0xea17,	// (0x00057c80) bg_dt_sta_title_pane_g1

0xea20,	// (0x00057c89) bg_dt_sta_title_pane_g2

0xea29,	// (0x00057c92) bg_dt_sta_title_pane_g3

0x0002,

0xfea4,	// (0x0005910d) bg_dt_sta_title_pane_g

0x4df1,	// (0x0004e05a) bg_dt_sta_indi_pane_g1

0x7d7c,	// (0x00050fe5) dt_sta_signal_pane_g1

0x7d84,	// (0x00050fed) dt_sta_signal_pane_g2

0x0001,

0xfeab,	// (0x00059114) dt_sta_signal_pane_g

0x7d8c,	// (0x00050ff5) dt_sta_battery_pane_g1

0x7d95,	// (0x00050ffe) dt_sta_battery_pane_t1

0x4df1,	// (0x0004e05a) bg_dt_sta_control_pane_g1

0xc2f3,	// (0x0005555c) fep_china_uni_eep_pane

0xc2fb,	// (0x00055564) fep_china_uni_entry_pane_ParamLimits

0xc30b,	// (0x00055574) popup_fep_china_uni_window_g1_ParamLimits

0xc31b,	// (0x00055584) popup_fep_china_uni_window_g2_ParamLimits

0xc31b,	// (0x00055584) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005898b) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005898b) popup_fep_china_uni_window_g

0x7da4,	// (0x0005100d) fep_china_uni_eep_pane_g1

0x7dac,	// (0x00051015) fep_china_uni_eep_pane_t1

0x731d,	// (0x00050586) aid_touch_area_size_smil_player

0x2493,	// (0x0004b6fc) lc0_clock_pane

0x268a,	// (0x0004b8f3) status_pane_g5_ParamLimits

0x268a,	// (0x0004b8f3) status_pane_g5

0xb14a,	// (0x000543b3) popup_keymap_window

0x2650,	// (0x0004b8b9) status_icon_pane

0xe192,	// (0x000573fb) cell_ai5_widget_pane_g3_ParamLimits

0xe1ac,	// (0x00057415) cell_ai5_widget_pane_g4_ParamLimits

0xe1bc,	// (0x00057425) cell_ai5_widget_pane_g5_ParamLimits

0x7a49,	// (0x00050cb2) cell_ai5_widget_pane_g8_ParamLimits

0x7a49,	// (0x00050cb2) cell_ai5_widget_pane_g8

0x7a5d,	// (0x00050cc6) cell_ai5_widget_pane_g9_ParamLimits

0x7a5d,	// (0x00050cc6) cell_ai5_widget_pane_g9

0x7a71,	// (0x00050cda) cell_ai5_widget_pane_g10_ParamLimits

0x7a71,	// (0x00050cda) cell_ai5_widget_pane_g10

0x7dbb,	// (0x00051024) status_icon_pane_g1

0x985c,	// (0x00052ac5) bg_popup_sub_pane_cp13

0x7dc3,	// (0x0005102c) popup_keymap_window_t1

0xae3f,	// (0x000540a8) control_pane_g6_ParamLimits

0xae3f,	// (0x000540a8) control_pane_g6

0xae4c,	// (0x000540b5) control_pane_g7_ParamLimits

0xae4c,	// (0x000540b5) control_pane_g7

0xae59,	// (0x000540c2) control_pane_g8_ParamLimits

0xae59,	// (0x000540c2) control_pane_g8

0xe999,	// (0x00057c02) dt_sta_controll_pane_ParamLimits

0xe9a6,	// (0x00057c0f) dt_sta_indi_pane_ParamLimits

0xe9b3,	// (0x00057c1c) dt_sta_title_pane_ParamLimits

0xa414,	// (0x0005367d) aid_size_touch_scroll_bar_cale

0xf28a,	// (0x000584f3) popup_discreet_window_ParamLimits

0xf28a,	// (0x000584f3) popup_discreet_window

0x99aa,	// (0x00052c13) popup_sk_window

0x2e55,	// (0x0004c0be) bg_popup_sub_pane_cp28_ParamLimits

0x2e55,	// (0x0004c0be) bg_popup_sub_pane_cp28

0x7dd1,	// (0x0005103a) popup_discreet_window_g1_ParamLimits

0x7dd1,	// (0x0005103a) popup_discreet_window_g1

0x7df1,	// (0x0005105a) popup_discreet_window_t1_ParamLimits

0x7df1,	// (0x0005105a) popup_discreet_window_t1

0x7e0f,	// (0x00051078) popup_discreet_window_t2_ParamLimits

0x7e0f,	// (0x00051078) popup_discreet_window_t2

0x0002,

0xfeb0,	// (0x00059119) popup_discreet_window_t_ParamLimits

0xfeb0,	// (0x00059119) popup_discreet_window_t

0x1e55,	// (0x0004b0be) popup_sk_window_g1

0x1e5f,	// (0x0004b0c8) popup_sk_window_g2

0x0001,

0xfeb7,	// (0x00059120) popup_sk_window_g

0x1e67,	// (0x0004b0d0) popup_sk_window_t1

0x1e75,	// (0x0004b0de) popup_sk_window_t1_copy1

0xe17e,	// (0x000573e7) cell_ai5_widget_pane_g2_ParamLimits

0xe247,	// (0x000574b0) cell_ai5_widget_pane_t9_ParamLimits

0xe247,	// (0x000574b0) cell_ai5_widget_pane_t9

0x985c,	// (0x00052ac5) main_fep_fshwr2_pane

0xc024,	// (0x0005528d) aid_fshwr2_btn_pane

0xc038,	// (0x000552a1) aid_fshwr2_syb_pane

0xc04c,	// (0x000552b5) aid_fshwr2_txt_pane

0xc05c,	// (0x000552c5) fshwr2_func_candi_pane

0xc07e,	// (0x000552e7) fshwr2_hwr_syb_pane

0xc0a2,	// (0x0005530b) fshwr2_icf_pane

0x985c,	// (0x00052ac5) fshwr2_icf_bg_pane

0x1f0b,	// (0x0004b174) fshwr2_icf_pane_t1_ParamLimits

0x1f0b,	// (0x0004b174) fshwr2_icf_pane_t1

0xc271,	// (0x000554da) fshwr2_func_candi_pane_g1

0xea32,	// (0x00057c9b) fshwr2_func_candi_row_pane_ParamLimits

0xea32,	// (0x00057c9b) fshwr2_func_candi_row_pane

0xc0d2,	// (0x0005533b) cell_fshwr2_syb_pane_ParamLimits

0xc0d2,	// (0x0005533b) cell_fshwr2_syb_pane

0x72ed,	// (0x00050556) fshwr2_hwr_syb_pane_g1_ParamLimits

0x72ed,	// (0x00050556) fshwr2_hwr_syb_pane_g1

0x985c,	// (0x00052ac5) bg_popup_call_pane_cp01

0xc0fa,	// (0x00055363) fshwr2_func_candi_cell_pane_ParamLimits

0xc0fa,	// (0x00055363) fshwr2_func_candi_cell_pane

0xea59,	// (0x00057cc2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xea59,	// (0x00057cc2) fshwr2_func_candi_cell_bg_pane

0xc143,	// (0x000553ac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc143,	// (0x000553ac) fshwr2_func_candi_cell_pane_g1

0xc17a,	// (0x000553e3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc17a,	// (0x000553e3) fshwr2_func_candi_cell_pane_t1

0x985c,	// (0x00052ac5) bg_button_pane_cp08

0x7e90,	// (0x000510f9) cell_fshwr2_syb_bg_pane

0xc195,	// (0x000553fe) cell_fshwr2_syb_bg_pane_g1

0xc1a9,	// (0x00055412) cell_fshwr2_syb_bg_pane_t1

0xa548,	// (0x000537b1) main_tmo_pane

0xc7c8,	// (0x00055a31) uni_indicator_pane_g1_ParamLimits

0xc7de,	// (0x00055a47) uni_indicator_pane_g2_ParamLimits

0xc7f4,	// (0x00055a5d) uni_indicator_pane_g3_ParamLimits

0xc807,	// (0x00055a70) uni_indicator_pane_g4_ParamLimits

0xc807,	// (0x00055a70) uni_indicator_pane_g4

0x39c1,	// (0x0004cc2a) uni_indicator_pane_g5_ParamLimits

0x39c1,	// (0x0004cc2a) uni_indicator_pane_g5

0x39c1,	// (0x0004cc2a) uni_indicator_pane_g6_ParamLimits

0x39c1,	// (0x0004cc2a) uni_indicator_pane_g6

0xf921,	// (0x00058b8a) uni_indicator_pane_g_ParamLimits

0xd23f,	// (0x000564a8) popup_tmo_note_window_ParamLimits

0xd23f,	// (0x000564a8) popup_tmo_note_window

0xa548,	// (0x000537b1) fshwr2_bg_pane

0xc16b,	// (0x000553d4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc16b,	// (0x000553d4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebc,	// (0x00059125) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebc,	// (0x00059125) fshwr2_func_candi_cell_pane_g

0x4df1,	// (0x0004e05a) bg_popup_window_pane_cp01

0x1ff2,	// (0x0004b25b) bg_popup_window_pane_g1_cp01

0x7e9c,	// (0x00051105) bg_popup_window_pane_cp22_ParamLimits

0x7e9c,	// (0x00051105) bg_popup_window_pane_cp22

0x7eaa,	// (0x00051113) listscroll_tmo_link_pane_ParamLimits

0x7eaa,	// (0x00051113) listscroll_tmo_link_pane

0x7eea,	// (0x00051153) popup_tmo_note_window_g1_ParamLimits

0x7eea,	// (0x00051153) popup_tmo_note_window_g1

0x7ef7,	// (0x00051160) tmo_note_info_pane_ParamLimits

0x7ef7,	// (0x00051160) tmo_note_info_pane

0xea65,	// (0x00057cce) list_tmo_note_info_pane_g1_ParamLimits

0xea65,	// (0x00057cce) list_tmo_note_info_pane_g1

0x7f28,	// (0x00051191) list_tmo_note_info_pane_g2_ParamLimits

0x7f28,	// (0x00051191) list_tmo_note_info_pane_g2

0x0001,

0xfec1,	// (0x0005912a) list_tmo_note_info_pane_g_ParamLimits

0xfec1,	// (0x0005912a) list_tmo_note_info_pane_g

0x7f44,	// (0x000511ad) list_tmo_note_info_text_pane_ParamLimits

0x7f44,	// (0x000511ad) list_tmo_note_info_text_pane

0x7fc9,	// (0x00051232) list_tmo_link_pane

0x7fd6,	// (0x0005123f) scroll_pane_cp20

0x7fe3,	// (0x0005124c) list_single_tmo_link_pane_ParamLimits

0x7fe3,	// (0x0005124c) list_single_tmo_link_pane

0x7ff3,	// (0x0005125c) list_single_tmo_link_pane_t1

0x8001,	// (0x0005126a) list_tmo_note_info_text_pane_t1_ParamLimits

0x8001,	// (0x0005126a) list_tmo_note_info_text_pane_t1

0xa5ff,	// (0x00053868) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa5ff,	// (0x00053868) aid_size_touch_scroll_bar_cp01

0x9531,	// (0x0005279a) aid_size_touch_slider_marker

0x999a,	// (0x00052c03) popup_settings_window_ParamLimits

0x999a,	// (0x00052c03) popup_settings_window

0xe8d2,	// (0x00057b3b) popup_candi_list_indi_window

0x2345,	// (0x0004b5ae) aid_touch_navi_pane_ParamLimits

0x1654,	// (0x0004a8bd) rs_clock_indi_pane

0x165d,	// (0x0004a8c6) sctrl_sk_bottom_pane_ParamLimits

0x166e,	// (0x0004a8d7) sctrl_sk_top_pane_ParamLimits

0x1757,	// (0x0004a9c0) popup_fep_tooltip_window

0xe14a,	// (0x000573b3) aid_size_cell_widget_grid_ParamLimits

0xe169,	// (0x000573d2) cell_ai5_widget_pane_g1_ParamLimits

0xe169,	// (0x000573d2) cell_ai5_widget_pane_g1

0xe1cc,	// (0x00057435) cell_ai5_widget_pane_g6_ParamLimits

0xe1d8,	// (0x00057441) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3f,	// (0x000590a8) cell_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x000590a8) cell_ai5_widget_pane_g

0xe276,	// (0x000574df) cell_ai5_widget_pane_t10_ParamLimits

0xe276,	// (0x000574df) cell_ai5_widget_pane_t10

0xe294,	// (0x000574fd) grid_ai5_widget_pane_ParamLimits

0xe2c0,	// (0x00057529) cell_contacts_ai5_widget_pane_ParamLimits

0xe2c0,	// (0x00057529) cell_contacts_ai5_widget_pane

0x7e24,	// (0x0005108d) popup_discreet_window_t3_ParamLimits

0x7e24,	// (0x0005108d) popup_discreet_window_t3

0xc0be,	// (0x00055327) popup_fshwr2_char_preview_window_ParamLimits

0xc0be,	// (0x00055327) popup_fshwr2_char_preview_window

0xea7c,	// (0x00057ce5) tmo_note_info_pane_t1

0xea91,	// (0x00057cfa) tmo_note_info_pane_t2

0xeaaa,	// (0x00057d13) tmo_note_info_pane_t3

0x7fa5,	// (0x0005120e) tmo_note_info_pane_t4

0x7fb7,	// (0x00051220) tmo_note_info_pane_t5

0x0004,

0xfec6,	// (0x0005912f) tmo_note_info_pane_t

0x7fc9,	// (0x00051232) list_tmo_link_pane_ParamLimits

0x7fd6,	// (0x0005123f) scroll_pane_cp20_ParamLimits

0x985c,	// (0x00052ac5) bg_popup_fep_char_preview_window_cp01

0x801a,	// (0x00051283) popup_fshwr2_char_preview_window_t1

0x8028,	// (0x00051291) popup_candi_list_indi_window_g1

0x8031,	// (0x0005129a) bg_cell_contacts_ai5_widget_pane

0x803d,	// (0x000512a6) cell_contacts_ai5_widget_pane_g1

0x8052,	// (0x000512bb) cell_contacts_ai5_widget_pane_g2

0x805e,	// (0x000512c7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed1,	// (0x0005913a) cell_contacts_ai5_widget_pane_g

0x806a,	// (0x000512d3) cell_contacts_ai5_widget_pane_t1

0xa548,	// (0x000537b1) highlight_cell_shortcut_ai5_widget_pane_cp01

0x80e1,	// (0x0005134a) settings_container_pane

0xe76d,	// (0x000579d6) listscroll_set_pane_copy1

0x4549,	// (0x0004d7b2) scroll_pane_cp121_copy1

0x80ed,	// (0x00051356) set_content_pane_copy1

0x80f5,	// (0x0005135e) aid_height_set_list_copy1_ParamLimits

0x80f5,	// (0x0005135e) aid_height_set_list_copy1

0x3bc1,	// (0x0004ce2a) aid_size_parent_copy1_ParamLimits

0x3bc1,	// (0x0004ce2a) aid_size_parent_copy1

0x8101,	// (0x0005136a) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8101,	// (0x0005136a) button_value_adjust_pane_cp6_copy1

0x22c7,	// (0x0004b530) list_highlight_pane_cp2_copy1_ParamLimits

0x22c7,	// (0x0004b530) list_highlight_pane_cp2_copy1

0x8115,	// (0x0005137e) list_set_pane_copy1_ParamLimits

0x8115,	// (0x0005137e) list_set_pane_copy1

0x807c,	// (0x000512e5) main_pane_set_t1_copy1_ParamLimits

0x807c,	// (0x000512e5) main_pane_set_t1_copy1

0x80b6,	// (0x0005131f) main_pane_set_t2_copy1_ParamLimits

0x80b6,	// (0x0005131f) main_pane_set_t2_copy1

0x81d6,	// (0x0005143f) main_pane_set_t3_copy1

0x81e4,	// (0x0005144d) main_pane_set_t4_copy1

0x80d5,	// (0x0005133e) set_content_pane_g1_copy1_ParamLimits

0x80d5,	// (0x0005133e) set_content_pane_g1_copy1

0x81f2,	// (0x0005145b) setting_code_pane_copy1

0x81fa,	// (0x00051463) setting_slider_graphic_pane_copy1

0x81fa,	// (0x00051463) setting_slider_pane_copy1

0x81fa,	// (0x00051463) setting_text_pane_copy1

0x81fa,	// (0x00051463) setting_volume_pane_copy1

0x81f2,	// (0x0005145b) settings_code_pane_cp2_copy1

0x8202,	// (0x0005146b) settings_code_pane_cp_copy1_ParamLimits

0x8202,	// (0x0005146b) settings_code_pane_cp_copy1

0x1ffb,	// (0x0004b264) volume_set_pane_copy1

0x8216,	// (0x0005147f) volume_set_pane_g10_copy1

0x8222,	// (0x0005148b) volume_set_pane_g1_copy1

0x822c,	// (0x00051495) volume_set_pane_g2_copy1

0x8236,	// (0x0005149f) volume_set_pane_g3_copy1

0x8240,	// (0x000514a9) volume_set_pane_g4_copy1

0x824a,	// (0x000514b3) volume_set_pane_g5_copy1

0x8254,	// (0x000514bd) volume_set_pane_g6_copy1

0x825e,	// (0x000514c7) volume_set_pane_g7_copy1

0x8268,	// (0x000514d1) volume_set_pane_g8_copy1

0x8272,	// (0x000514db) volume_set_pane_g9_copy1

0x9be3,	// (0x00052e4c) bg_set_opt_pane_cp_copy1_ParamLimits

0x9be3,	// (0x00052e4c) bg_set_opt_pane_cp_copy1

0x2007,	// (0x0004b270) setting_slider_pane_t1_copy1_ParamLimits

0x2007,	// (0x0004b270) setting_slider_pane_t1_copy1

0x2025,	// (0x0004b28e) setting_slider_pane_t2_copy1_ParamLimits

0x2025,	// (0x0004b28e) setting_slider_pane_t2_copy1

0x203f,	// (0x0004b2a8) setting_slider_pane_t3_copy1_ParamLimits

0x203f,	// (0x0004b2a8) setting_slider_pane_t3_copy1

0x2057,	// (0x0004b2c0) slider_set_pane_copy1_ParamLimits

0x2057,	// (0x0004b2c0) slider_set_pane_copy1

0xa5a0,	// (0x00053809) set_opt_bg_pane_g1_copy2

0xa5a8,	// (0x00053811) set_opt_bg_pane_g2_copy2

0x827c,	// (0x000514e5) set_opt_bg_pane_g3_copy2

0xa5b8,	// (0x00053821) set_opt_bg_pane_g4_copy2

0xa5c0,	// (0x00053829) set_opt_bg_pane_g5_copy2

0xa5c8,	// (0x00053831) set_opt_bg_pane_g6_copy2

0x8286,	// (0x000514ef) set_opt_bg_pane_g7_copy2

0x8290,	// (0x000514f9) set_opt_bg_pane_g8_copy2

0x829a,	// (0x00051503) set_opt_bg_pane_g9_copy2

0x206d,	// (0x0004b2d6) aid_size_touch_slider_mark_copy1_ParamLimits

0x206d,	// (0x0004b2d6) aid_size_touch_slider_mark_copy1

0x82a4,	// (0x0005150d) slider_set_pane_g1_copy1

0x2081,	// (0x0004b2ea) slider_set_pane_g2_copy1

0x0f55,	// (0x0004a1be) slider_set_pane_g3_copy1_ParamLimits

0x0f55,	// (0x0004a1be) slider_set_pane_g3_copy1

0x0f69,	// (0x0004a1d2) slider_set_pane_g4_copy1_ParamLimits

0x0f69,	// (0x0004a1d2) slider_set_pane_g4_copy1

0x0f81,	// (0x0004a1ea) slider_set_pane_g5_copy1_ParamLimits

0x0f81,	// (0x0004a1ea) slider_set_pane_g5_copy1

0x0f55,	// (0x0004a1be) slider_set_pane_g6_copy1_ParamLimits

0x0f55,	// (0x0004a1be) slider_set_pane_g6_copy1

0x2089,	// (0x0004b2f2) slider_set_pane_g7_copy1_ParamLimits

0x2089,	// (0x0004b2f2) slider_set_pane_g7_copy1

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp2_copy1

0x82ad,	// (0x00051516) setting_slider_graphic_pane_g1_copy1

0x82b6,	// (0x0005151f) setting_slider_graphic_pane_t1_copy1

0x82c6,	// (0x0005152f) setting_slider_graphic_pane_t2_copy1

0x82d6,	// (0x0005153f) slider_set_pane_cp_copy1

0x82e6,	// (0x0005154f) input_focus_pane_cp1_copy1

0x82ef,	// (0x00051558) list_set_text_pane_copy1

0x82f7,	// (0x00051560) setting_text_pane_g1_copy1

0xe2ec,	// (0x00057555) set_text_pane_t1_copy1

0x82e6,	// (0x0005154f) input_focus_pane_cp2_copy1

0x82f7,	// (0x00051560) setting_code_pane_g1_copy1

0x8300,	// (0x00051569) setting_code_pane_t1_copy1

0xe46c,	// (0x000576d5) list_set_graphic_pane_copy1

0x9956,	// (0x00052bbf) bg_set_opt_pane_cp4_copy1

0xe47f,	// (0x000576e8) list_set_graphic_pane_g1_copy1_ParamLimits

0xe47f,	// (0x000576e8) list_set_graphic_pane_g1_copy1

0x830e,	// (0x00051577) list_set_graphic_pane_g2_copy1

0xe497,	// (0x00057700) list_set_graphic_pane_t1_copy1_ParamLimits

0xe497,	// (0x00057700) list_set_graphic_pane_t1_copy1

0x4df1,	// (0x0004e05a) rs_clock_indi_pane_g1

0x8316,	// (0x0005157f) rs_clock_indi_pane_t1

0x8324,	// (0x0005158d) rs_indi_pane

0x832c,	// (0x00051595) rs_indi_pane_g1

0x8335,	// (0x0005159e) rs_indi_pane_g2

0x833e,	// (0x000515a7) rs_indi_pane_g3

0x0002,

0xfed8,	// (0x00059141) rs_indi_pane_g

0xe76d,	// (0x000579d6) bg_popup_preview_window_pane_cp03

0x8347,	// (0x000515b0) popup_fep_tooltip_window_t1

0x5a9c,	// (0x0004ed05) popup_note2_window_g2_ParamLimits

0x5a9c,	// (0x0004ed05) popup_note2_window_g2

0x0001,

0xfc71,	// (0x00058eda) popup_note2_window_g_ParamLimits

0xfc71,	// (0x00058eda) popup_note2_window_g

0x5fa4,	// (0x0004f20d) bg_popup_sub_pane_cp11_ParamLimits

0x5fb1,	// (0x0004f21a) cell_ai3_links_pane_g1_ParamLimits

0x5fc8,	// (0x0004f231) cell_ai3_links_pane_t1

0xe2ec,	// (0x00057555) set_text_pane_t1_copy1_ParamLimits

0xe692,	// (0x000578fb) cell_graphic_popup_pane_cp2_ParamLimits

0xe692,	// (0x000578fb) cell_graphic_popup_pane_cp2

0x8355,	// (0x000515be) cell_graphic_popup_pane_g1_cp2

0xa227,	// (0x00053490) cell_graphic_popup_pane_g2_cp2

0x835d,	// (0x000515c6) cell_graphic_popup_pane_g3_cp2

0x8365,	// (0x000515ce) cell_graphic_popup_pane_t2_cp2

0xa238,	// (0x000534a1) grid_highlight_pane_cp3_cp2

0xa8d2,	// (0x00053b3b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xa548,	// (0x000537b1) main_tmo_pane_ParamLimits

0xd233,	// (0x0005649c) popup_tmo_big_image_note_window

0xe158,	// (0x000573c1) cell_ai5_widget_list_pane

0xe160,	// (0x000573c9) cell_ai5_widget_lrg_icon_pane

0xea7c,	// (0x00057ce5) tmo_note_info_pane_t1_ParamLimits

0xea91,	// (0x00057cfa) tmo_note_info_pane_t2_ParamLimits

0xeaaa,	// (0x00057d13) tmo_note_info_pane_t3_ParamLimits

0x7fa5,	// (0x0005120e) tmo_note_info_pane_t4_ParamLimits

0x7fb7,	// (0x00051220) tmo_note_info_pane_t5_ParamLimits

0xfec6,	// (0x0005912f) tmo_note_info_pane_t_ParamLimits

0x80e1,	// (0x0005134a) settings_container_pane_ParamLimits

0x82de,	// (0x00051547) indicator_popup_pane_cp5

0x82de,	// (0x00051547) indicator_popup_pane_cp6

0xe46c,	// (0x000576d5) list_set_graphic_pane_copy1_ParamLimits

0x985c,	// (0x00052ac5) bg_popup_window_pane_cp23

0x8373,	// (0x000515dc) popup_tmo_big_image_note_window_g1

0x837f,	// (0x000515e8) popup_tmo_big_image_note_window_t1

0x838f,	// (0x000515f8) popup_tmo_big_image_note_window_t2

0x839f,	// (0x00051608) popup_tmo_big_image_note_window_t3

0x0002,

0xfedf,	// (0x00059148) popup_tmo_big_image_note_window_t

0x4df1,	// (0x0004e05a) cell_ai5_widget_lrg_icon_pane_g1

0xeabf,	// (0x00057d28) cell_ai5_widget_lrg_icon_pane_t1

0xeacd,	// (0x00057d36) cell_ai5_widget_list_row_pane_ParamLimits

0xeacd,	// (0x00057d36) cell_ai5_widget_list_row_pane

0xeae5,	// (0x00057d4e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xeae5,	// (0x00057d4e) cell_ai5_widget_list_row_pane_g1

0xeaf2,	// (0x00057d5b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xeaf2,	// (0x00057d5b) cell_ai5_widget_list_row_pane_t1

0xeb1d,	// (0x00057d86) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeb1d,	// (0x00057d86) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee6,	// (0x0005914f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee6,	// (0x0005914f) cell_ai5_widget_list_row_pane_t

0x985c,	// (0x00052ac5) main_fep_vtchi_ss_pane

0x8455,	// (0x000516be) popup_fep_char_pre_window

0x845d,	// (0x000516c6) popup_fep_ituss_window

0xeb54,	// (0x00057dbd) popup_fep_vkbss_window

0xeb63,	// (0x00057dcc) grid_vkbss_keypad_pane_ParamLimits

0xeb63,	// (0x00057dcc) grid_vkbss_keypad_pane

0x84b7,	// (0x00051720) ituss_keypad_pane

0x20ab,	// (0x0004b314) aid_vkbss_key_offset_ParamLimits

0x20ab,	// (0x0004b314) aid_vkbss_key_offset

0xc1bf,	// (0x00055428) cell_vkbss_key_pane_ParamLimits

0xc1bf,	// (0x00055428) cell_vkbss_key_pane

0x84c6,	// (0x0005172f) bg_cell_vkbss_key_g1_ParamLimits

0x84c6,	// (0x0005172f) bg_cell_vkbss_key_g1

0xeb73,	// (0x00057ddc) cell_vkbss_key_3p_pane_ParamLimits

0xeb73,	// (0x00057ddc) cell_vkbss_key_3p_pane

0xeb8d,	// (0x00057df6) cell_vkbss_key_g1_ParamLimits

0xeb8d,	// (0x00057df6) cell_vkbss_key_g1

0xeba7,	// (0x00057e10) cell_vkbss_key_t1_ParamLimits

0xeba7,	// (0x00057e10) cell_vkbss_key_t1

0x20cd,	// (0x0004b336) cell_ituss_key_pane_ParamLimits

0x20cd,	// (0x0004b336) cell_ituss_key_pane

0x8525,	// (0x0005178e) bg_cell_ituss_key_g1_ParamLimits

0x8525,	// (0x0005178e) bg_cell_ituss_key_g1

0x8531,	// (0x0005179a) cell_ituss_key_pane_g1_ParamLimits

0x8531,	// (0x0005179a) cell_ituss_key_pane_g1

0x20de,	// (0x0004b347) cell_ituss_key_pane_g2_ParamLimits

0x20de,	// (0x0004b347) cell_ituss_key_pane_g2

0x0002,

0xfeed,	// (0x00059156) cell_ituss_key_pane_g_ParamLimits

0xfeed,	// (0x00059156) cell_ituss_key_pane_g

0x210a,	// (0x0004b373) cell_ituss_key_t1_ParamLimits

0x210a,	// (0x0004b373) cell_ituss_key_t1

0x2144,	// (0x0004b3ad) cell_ituss_key_t2_ParamLimits

0x2144,	// (0x0004b3ad) cell_ituss_key_t2

0x2175,	// (0x0004b3de) cell_ituss_key_t3_ParamLimits

0x2175,	// (0x0004b3de) cell_ituss_key_t3

0x2144,	// (0x0004b3ad) cell_ituss_key_t4_ParamLimits

0x2144,	// (0x0004b3ad) cell_ituss_key_t4

0x0004,

0xfef4,	// (0x0005915d) cell_ituss_key_t_ParamLimits

0xfef4,	// (0x0005915d) cell_ituss_key_t

0x8557,	// (0x000517c0) cell_vkbss_key_3p_pane_g1

0x855f,	// (0x000517c8) cell_vkbss_key_3p_pane_g2

0x8567,	// (0x000517d0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x00059168) cell_vkbss_key_3p_pane_g

0xe76d,	// (0x000579d6) bg_popup_fep_char_preview_window_cp02

0x856f,	// (0x000517d8) popup_fep_char_pre_window_t1

0xe137,	// (0x000573a0) main_ai5_sk_pane

0x8031,	// (0x0005129a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x803d,	// (0x000512a6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8052,	// (0x000512bb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x805e,	// (0x000512c7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed1,	// (0x0005913a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x806a,	// (0x000512d3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xa548,	// (0x000537b1) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xebd2,	// (0x00057e3b) main_ai5_sk_pane_g1

0x2c8d,	// (0x0004bef6) popup_query_code_window_g1

0xeb45,	// (0x00057dae) popup_fep_vkb_icf_pane

0x8491,	// (0x000516fa) popup_fep_vtchi_icf_pane

0x8586,	// (0x000517ef) bg_icf_pane

0x8592,	// (0x000517fb) list_vkb_icf_pane

0x85a1,	// (0x0005180a) bg_icf_pane_cp01

0x85b4,	// (0x0005181d) vtchi_icf_list_pane

0xebdb,	// (0x00057e44) list_vkb_icf_pane_t1_ParamLimits

0xebdb,	// (0x00057e44) list_vkb_icf_pane_t1

0x85e2,	// (0x0005184b) vtchi_icf_list_pane_t1_ParamLimits

0x85e2,	// (0x0005184b) vtchi_icf_list_pane_t1

0x845d,	// (0x000516c6) popup_fep_ituss_window_ParamLimits

0x8491,	// (0x000516fa) popup_fep_vtchi_icf_pane_ParamLimits

0x84b7,	// (0x00051720) ituss_keypad_pane_ParamLimits

0x209f,	// (0x0004b308) ituss_sks_pane

0x8586,	// (0x000517ef) bg_icf_pane_ParamLimits

0x8435,	// (0x0005169e) icf_edit_indi_pane_ParamLimits

0x8435,	// (0x0005169e) icf_edit_indi_pane

0x8592,	// (0x000517fb) list_vkb_icf_pane_ParamLimits

0x85a1,	// (0x0005180a) bg_icf_pane_cp01_ParamLimits

0x8448,	// (0x000516b1) icf_edit_indi_pane_cp01_ParamLimits

0x8448,	// (0x000516b1) icf_edit_indi_pane_cp01

0x85bc,	// (0x00051825) vtchi_query_pane

0x72ed,	// (0x00050556) icf_edit_indi_pane_g1_ParamLimits

0x72ed,	// (0x00050556) icf_edit_indi_pane_g1

0xebf1,	// (0x00057e5a) icf_edit_indi_pane_g2_ParamLimits

0xebf1,	// (0x00057e5a) icf_edit_indi_pane_g2

0x0001,

0xff17,	// (0x00059180) icf_edit_indi_pane_g_ParamLimits

0xff17,	// (0x00059180) icf_edit_indi_pane_g

0xec03,	// (0x00057e6c) icf_edit_indi_pane_t1

0x85fa,	// (0x00051863) bg_input_focus_pane_cp042

0xa40b,	// (0x00053674) vtchi_button_pane

0x8603,	// (0x0005186c) vtchi_query_pane_t1

0x8611,	// (0x0005187a) vtchi_query_pane_t2

0x861f,	// (0x00051888) vtchi_query_pane_t3

0x0002,

0xff06,	// (0x0005916f) vtchi_query_pane_t

0x985c,	// (0x00052ac5) bg_button_pane_cp13

0x862d,	// (0x00051896) vtchi_button_pane_g1

0x21b8,	// (0x0004b421) ituss_sks_pane_g1

0x21c3,	// (0x0004b42c) ituss_sks_pane_g2

0x0001,

0xff0d,	// (0x00059176) ituss_sks_pane_g

0x8635,	// (0x0005189e) ituss_sks_pane_t1

0x8643,	// (0x000518ac) ituss_sks_pane_t2

0x0001,

0xff12,	// (0x0005917b) ituss_sks_pane_t

0x48ce,	// (0x0004db37) indicator_nsta_pane_cp_g1

0x48d6,	// (0x0004db3f) indicator_nsta_pane_cp_g2

0x48de,	// (0x0004db47) indicator_nsta_pane_cp_g3

0x48ce,	// (0x0004db37) indicator_nsta_pane_cp_g4

0x48d6,	// (0x0004db3f) indicator_nsta_pane_cp_g5

0x48de,	// (0x0004db47) indicator_nsta_pane_cp_g6

0x0005,

0xfabb,	// (0x00058d24) indicator_nsta_pane_cp_g

0xdc5e,	// (0x00056ec7) cell_graphic2_pane_t2_ParamLimits

0xdc5e,	// (0x00056ec7) cell_graphic2_pane_t2

0x0001,

0xfdc8,	// (0x00059031) cell_graphic2_pane_t_ParamLimits

0xfdc8,	// (0x00059031) cell_graphic2_pane_t

0xdc96,	// (0x00056eff) cell_graphic2_control_pane_t1

0xabc2,	// (0x00053e2b) signal_pane_g3_ParamLimits

0xabc2,	// (0x00053e2b) signal_pane_g3

0xabd6,	// (0x00053e3f) signal_pane_g4_ParamLimits

0xabd6,	// (0x00053e3f) signal_pane_g4

0xeb2f,	// (0x00057d98) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xeb2f,	// (0x00057d98) cell_ai5_widget_list_row_pane_t3

0x8545,	// (0x000517ae) cell_ituss_key_pane_t1_ParamLimits

0x8545,	// (0x000517ae) cell_ituss_key_pane_t1

0x28fc,	// (0x0004bb65) form_field_data_wide_pane_vc_t2_ParamLimits

0x28fc,	// (0x0004bb65) form_field_data_wide_pane_vc_t2

0x2910,	// (0x0004bb79) form_field_data_wide_pane_vc_t3_ParamLimits

0x2910,	// (0x0004bb79) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x00058a72) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x00058a72) form_field_data_wide_pane_vc_t

0x4589,	// (0x0004d7f2) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4589,	// (0x0004d7f2) form_field_slider_wide_pane_vc_t3

0x465f,	// (0x0004d8c8) form_field_popup_wide_pane_vc_t2_ParamLimits

0x465f,	// (0x0004d8c8) form_field_popup_wide_pane_vc_t2

0x4676,	// (0x0004d8df) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4676,	// (0x0004d8df) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaaa,	// (0x00058d13) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaaa,	// (0x00058d13) form_field_popup_wide_pane_vc_t

0xc024,	// (0x0005528d) aid_fshwr2_btn_pane_ParamLimits

0xc038,	// (0x000552a1) aid_fshwr2_syb_pane_ParamLimits

0xc04c,	// (0x000552b5) aid_fshwr2_txt_pane_ParamLimits

0xa548,	// (0x000537b1) fshwr2_bg_pane_ParamLimits

0xc05c,	// (0x000552c5) fshwr2_func_candi_pane_ParamLimits

0xc07e,	// (0x000552e7) fshwr2_hwr_syb_pane_ParamLimits

0xc0a2,	// (0x0005530b) fshwr2_icf_pane_ParamLimits

0x1148,	// (0x0004a3b1) list_double_graphic_pane_vc_g4_ParamLimits

0x1148,	// (0x0004a3b1) list_double_graphic_pane_vc_g4

0x20fe,	// (0x0004b367) cell_ituss_key_pane_g3_ParamLimits

0x20fe,	// (0x0004b367) cell_ituss_key_pane_g3

0x21a6,	// (0x0004b40f) cell_ituss_key_t5_ParamLimits

0x21a6,	// (0x0004b40f) cell_ituss_key_t5

0xeb54,	// (0x00057dbd) popup_fep_vkbss_window_ParamLimits

0xe141,	// (0x000573aa) aid_cell_ai5_quarter

0xec03,	// (0x00057e6c) icf_edit_indi_pane_t1_ParamLimits

0x9f6e,	// (0x000531d7) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9f6e,	// (0x000531d7) aid_tch_indicator_popup_pane_cp2

0x9f81,	// (0x000531ea) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x9f81,	// (0x000531ea) aid_tch_query_popup_data_pane_cp2

0x2c35,	// (0x0004be9e) aid_tch_query_popup_pane_ParamLimits

0x2c35,	// (0x0004be9e) aid_tch_query_popup_pane

0x2c35,	// (0x0004be9e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2c35,	// (0x0004be9e) aid_tch_query_popup_data_pane_cp1

0x7e90,	// (0x000510f9) cell_fshwr2_syb_bg_pane_ParamLimits

0xc195,	// (0x000553fe) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xc1a9,	// (0x00055412) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xeb45,	// (0x00057dae) popup_fep_vkb_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Large

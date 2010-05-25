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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003a336 };

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
0x7ea5,	// (0x000421db) Screen

0x7eb9,	// (0x000421ef) application_window_ParamLimits

0x7eb9,	// (0x000421ef) application_window

0x7ed3,	// (0x00042209) screen_g1

0x58ce,	// (0x0003fc04) area_bottom_pane_ParamLimits

0x58ce,	// (0x0003fc04) area_bottom_pane

0x598e,	// (0x0003fcc4) area_top_pane_ParamLimits

0x598e,	// (0x0003fcc4) area_top_pane

0x5a22,	// (0x0003fd58) main_pane_ParamLimits

0x5a22,	// (0x0003fd58) main_pane

0x7edd,	// (0x00042213) misc_graphics

0x989f,	// (0x00043bd5) battery_pane_ParamLimits

0x989f,	// (0x00043bd5) battery_pane

0xa56d,	// (0x000448a3) bg_status_flat_pane_g8

0xa575,	// (0x000448ab) bg_status_flat_pane_g9

0x9961,	// (0x00043c97) context_pane_ParamLimits

0x9961,	// (0x00043c97) context_pane

0x9a77,	// (0x00043dad) navi_pane_ParamLimits

0x9a77,	// (0x00043dad) navi_pane

0x9afb,	// (0x00043e31) signal_pane_ParamLimits

0x9afb,	// (0x00043e31) signal_pane

0x0008,

0xf87e,	// (0x00049bb4) bg_status_flat_pane_g

0x9b68,	// (0x00043e9e) status_pane_g1_ParamLimits

0x9b68,	// (0x00043e9e) status_pane_g1

0x9b7c,	// (0x00043eb2) status_pane_g2_ParamLimits

0x9b7c,	// (0x00043eb2) status_pane_g2

0x9b88,	// (0x00043ebe) status_pane_g3_ParamLimits

0x9b88,	// (0x00043ebe) status_pane_g3

0x0004,

0xf7a5,	// (0x00049adb) status_pane_g_ParamLimits

0xf7a5,	// (0x00049adb) status_pane_g

0x9bbc,	// (0x00043ef2) title_pane_ParamLimits

0x9bbc,	// (0x00043ef2) title_pane

0x9bf9,	// (0x00043f2f) uni_indicator_pane_ParamLimits

0x9bf9,	// (0x00043f2f) uni_indicator_pane

0x97c3,	// (0x00043af9) bg_list_pane_ParamLimits

0x97c3,	// (0x00043af9) bg_list_pane

0x63bf,	// (0x000406f5) find_pane

0x97e3,	// (0x00043b19) listscroll_app_pane_ParamLimits

0x97e3,	// (0x00043b19) listscroll_app_pane

0x97ef,	// (0x00043b25) listscroll_form_pane

0x63c7,	// (0x000406fd) listscroll_gen_pane_ParamLimits

0x63c7,	// (0x000406fd) listscroll_gen_pane

0x63db,	// (0x00040711) listscroll_set_pane

0x8a0d,	// (0x00042d43) main_idle_act_pane

0x94bf,	// (0x000437f5) main_idle_trad_pane

0x94bf,	// (0x000437f5) main_list_empty_pane

0x9809,	// (0x00043b3f) main_midp_pane

0x9815,	// (0x00043b4b) main_pane_g1_ParamLimits

0x9815,	// (0x00043b4b) main_pane_g1

0x63e3,	// (0x00040719) popup_ai_message_window_ParamLimits

0x63e3,	// (0x00040719) popup_ai_message_window

0x6489,	// (0x000407bf) popup_fep_china_uni_window_ParamLimits

0x6489,	// (0x000407bf) popup_fep_china_uni_window

0x64e5,	// (0x0004081b) popup_fep_japan_candidate_window_ParamLimits

0x64e5,	// (0x0004081b) popup_fep_japan_candidate_window

0x6505,	// (0x0004083b) popup_fep_japan_predictive_window_ParamLimits

0x6505,	// (0x0004083b) popup_fep_japan_predictive_window

0x6535,	// (0x0004086b) popup_find_window

0x6542,	// (0x00040878) popup_grid_graphic_window_ParamLimits

0x6542,	// (0x00040878) popup_grid_graphic_window

0x656c,	// (0x000408a2) popup_large_graphic_colour_window

0x6592,	// (0x000408c8) popup_menu_window_ParamLimits

0x6592,	// (0x000408c8) popup_menu_window

0x674a,	// (0x00040a80) popup_note_image_window

0x6736,	// (0x00040a6c) popup_note_wait_window_ParamLimits

0x6736,	// (0x00040a6c) popup_note_wait_window

0x6736,	// (0x00040a6c) popup_note_window_ParamLimits

0x6736,	// (0x00040a6c) popup_note_window

0x67a0,	// (0x00040ad6) popup_query_code_window_ParamLimits

0x67a0,	// (0x00040ad6) popup_query_code_window

0x67b4,	// (0x00040aea) popup_query_data_code_window_ParamLimits

0x67b4,	// (0x00040aea) popup_query_data_code_window

0x67d1,	// (0x00040b07) popup_query_data_window_ParamLimits

0x67d1,	// (0x00040b07) popup_query_data_window

0x67ed,	// (0x00040b23) popup_query_sat_info_window_ParamLimits

0x67ed,	// (0x00040b23) popup_query_sat_info_window

0x6826,	// (0x00040b5c) popup_snote_single_graphic_window_ParamLimits

0x6826,	// (0x00040b5c) popup_snote_single_graphic_window

0x6826,	// (0x00040b5c) popup_snote_single_text_window_ParamLimits

0x6826,	// (0x00040b5c) popup_snote_single_text_window

0x683b,	// (0x00040b71) popup_sub_window_general

0x696b,	// (0x00040ca1) popup_window_general_ParamLimits

0x696b,	// (0x00040ca1) popup_window_general

0x9823,	// (0x00043b59) power_save_pane

0x6251,	// (0x00040587) control_pane_g1_ParamLimits

0x6251,	// (0x00040587) control_pane_g1

0x6278,	// (0x000405ae) control_pane_g2_ParamLimits

0x6278,	// (0x000405ae) control_pane_g2

0x9786,	// (0x00043abc) control_pane_g3_ParamLimits

0x9786,	// (0x00043abc) control_pane_g3

0x0007,

0xf78d,	// (0x00049ac3) control_pane_g_ParamLimits

0xf78d,	// (0x00049ac3) control_pane_g

0x62c2,	// (0x000405f8) control_pane_t1_ParamLimits

0x62c2,	// (0x000405f8) control_pane_t1

0x6316,	// (0x0004064c) control_pane_t2_ParamLimits

0x6316,	// (0x0004064c) control_pane_t2

0x0002,

0xf79e,	// (0x00049ad4) control_pane_t_ParamLimits

0xf79e,	// (0x00049ad4) control_pane_t

0x96ab,	// (0x000439e1) navi_navi_volume_pane_cp1

0x96b3,	// (0x000439e9) status_small_icon_pane

0x96bb,	// (0x000439f1) status_small_pane_g1_ParamLimits

0x96bb,	// (0x000439f1) status_small_pane_g1

0x96ef,	// (0x00043a25) status_small_pane_g2_ParamLimits

0x96ef,	// (0x00043a25) status_small_pane_g2

0x96fb,	// (0x00043a31) status_small_pane_g3_ParamLimits

0x96fb,	// (0x00043a31) status_small_pane_g3

0x9707,	// (0x00043a3d) status_small_pane_g4_ParamLimits

0x9707,	// (0x00043a3d) status_small_pane_g4

0x9713,	// (0x00043a49) status_small_pane_g5_ParamLimits

0x9713,	// (0x00043a49) status_small_pane_g5

0x9721,	// (0x00043a57) status_small_pane_g6_ParamLimits

0x9721,	// (0x00043a57) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049ab2) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049ab2) status_small_pane_g

0x9750,	// (0x00043a86) status_small_pane_t1

0x9772,	// (0x00043aa8) status_small_wait_pane_ParamLimits

0x9772,	// (0x00043aa8) status_small_wait_pane

0x8f31,	// (0x00043267) aid_levels_signal_ParamLimits

0x8f31,	// (0x00043267) aid_levels_signal

0x8f43,	// (0x00043279) signal_pane_g1_ParamLimits

0x8f43,	// (0x00043279) signal_pane_g1

0x8f58,	// (0x0004328e) signal_pane_g2_ParamLimits

0x8f58,	// (0x0004328e) signal_pane_g2

0x0003,

0xf70d,	// (0x00049a43) signal_pane_g_ParamLimits

0xf70d,	// (0x00049a43) signal_pane_g

0x8f93,	// (0x000432c9) context_pane_g1

0x7ee7,	// (0x0004221d) title_pane_g1

0x7f1d,	// (0x00042253) title_pane_t1

0x7f85,	// (0x000422bb) title_pane_t2

0x7fab,	// (0x000422e1) title_pane_t3

0x0002,

0xf557,	// (0x0004988d) title_pane_t

0x9c11,	// (0x00043f47) aid_levels_battery_ParamLimits

0x9c11,	// (0x00043f47) aid_levels_battery

0x9c25,	// (0x00043f5b) battery_pane_g1_ParamLimits

0x9c25,	// (0x00043f5b) battery_pane_g1

0x9c3b,	// (0x00043f71) battery_pane_g2_ParamLimits

0x9c3b,	// (0x00043f71) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049ae6) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049ae6) battery_pane_g

0xaea3,	// (0x000451d9) uni_indicator_pane_g1

0xaeb9,	// (0x000451ef) uni_indicator_pane_g2

0xaecf,	// (0x00045205) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x00049c5c) uni_indicator_pane_g

0x9331,	// (0x00043667) navi_icon_pane_ParamLimits

0x9331,	// (0x00043667) navi_icon_pane

0x926f,	// (0x000435a5) navi_midp_pane

0x934d,	// (0x00043683) navi_navi_pane

0x9357,	// (0x0004368d) navi_text_pane_ParamLimits

0x9357,	// (0x0004368d) navi_text_pane

0x7ed3,	// (0x00042209) status_small_wait_pane_g1

0x83da,	// (0x00042710) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x00049c57) status_small_wait_pane_g

0xabc8,	// (0x00044efe) navi_navi_icon_text_pane

0xabd0,	// (0x00044f06) navi_navi_pane_g1_ParamLimits

0xabd0,	// (0x00044f06) navi_navi_pane_g1

0xabe2,	// (0x00044f18) navi_navi_pane_g2_ParamLimits

0xabe2,	// (0x00044f18) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x00049c25) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x00049c25) navi_navi_pane_g

0xabf4,	// (0x00044f2a) navi_navi_tabs_pane

0xabfd,	// (0x00044f33) navi_navi_text_pane

0xabc8,	// (0x00044efe) navi_navi_volume_pane

0xaba4,	// (0x00044eda) navi_text_pane_t1

0xab98,	// (0x00044ece) navi_icon_pane_g1

0xaaeb,	// (0x00044e21) navi_navi_text_pane_t1

0x6c23,	// (0x00040f59) navi_navi_volume_pane_g1

0x6c2b,	// (0x00040f61) volume_small_pane

0xaa51,	// (0x00044d87) navi_navi_icon_text_pane_g1

0xaa59,	// (0x00044d8f) navi_navi_icon_text_pane_t1

0x934d,	// (0x00043683) navi_tabs_2_long_pane

0x934d,	// (0x00043683) navi_tabs_2_pane

0x934d,	// (0x00043683) navi_tabs_3_long_pane

0x934d,	// (0x00043683) navi_tabs_3_pane

0x934d,	// (0x00043683) navi_tabs_4_pane

0x6c03,	// (0x00040f39) tabs_2_active_pane_ParamLimits

0x6c03,	// (0x00040f39) tabs_2_active_pane

0x6c13,	// (0x00040f49) tabs_2_passive_pane_ParamLimits

0x6c13,	// (0x00040f49) tabs_2_passive_pane

0x6bd1,	// (0x00040f07) tabs_3_active_pane_ParamLimits

0x6bd1,	// (0x00040f07) tabs_3_active_pane

0x6be1,	// (0x00040f17) tabs_3_passive_pane_ParamLimits

0x6be1,	// (0x00040f17) tabs_3_passive_pane

0x6bf2,	// (0x00040f28) tabs_3_passive_pane_cp_ParamLimits

0x6bf2,	// (0x00040f28) tabs_3_passive_pane_cp

0x6b8d,	// (0x00040ec3) tabs_4_active_pane_ParamLimits

0x6b8d,	// (0x00040ec3) tabs_4_active_pane

0x6b9e,	// (0x00040ed4) tabs_4_passive_pane_ParamLimits

0x6b9e,	// (0x00040ed4) tabs_4_passive_pane

0x6baf,	// (0x00040ee5) tabs_4_passive_pane_cp_ParamLimits

0x6baf,	// (0x00040ee5) tabs_4_passive_pane_cp

0x6bc0,	// (0x00040ef6) tabs_4_passive_pane_cp2_ParamLimits

0x6bc0,	// (0x00040ef6) tabs_4_passive_pane_cp2

0x6b69,	// (0x00040e9f) tabs_2_long_active_pane_ParamLimits

0x6b69,	// (0x00040e9f) tabs_2_long_active_pane

0x6b7b,	// (0x00040eb1) tabs_2_long_passive_pane_ParamLimits

0x6b7b,	// (0x00040eb1) tabs_2_long_passive_pane

0x6b2a,	// (0x00040e60) tabs_3_long_active_pane_ParamLimits

0x6b2a,	// (0x00040e60) tabs_3_long_active_pane

0x6b3d,	// (0x00040e73) tabs_3_long_passive_pane_ParamLimits

0x6b3d,	// (0x00040e73) tabs_3_long_passive_pane

0x6b56,	// (0x00040e8c) tabs_3_long_passive_pane_cp_ParamLimits

0x6b56,	// (0x00040e8c) tabs_3_long_passive_pane_cp

0x6ad0,	// (0x00040e06) volume_small_pane_g1

0x6ad9,	// (0x00040e0f) volume_small_pane_g2

0x6ae2,	// (0x00040e18) volume_small_pane_g3

0x6aeb,	// (0x00040e21) volume_small_pane_g4

0x6af4,	// (0x00040e2a) volume_small_pane_g5

0x6afd,	// (0x00040e33) volume_small_pane_g6

0x6b06,	// (0x00040e3c) volume_small_pane_g7

0x6b0f,	// (0x00040e45) volume_small_pane_g8

0x6b18,	// (0x00040e4e) volume_small_pane_g9

0x6b21,	// (0x00040e57) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x00049bf1) volume_small_pane_g

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp2_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp2

0x7fcb,	// (0x00042301) tabs_3_active_pane_g1

0x7fd3,	// (0x00042309) tabs_3_active_pane_t1

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp2_ParamLimits

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp2

0x7fcb,	// (0x00042301) tabs_3_passive_pane_g1

0x7fd3,	// (0x00042309) tabs_3_passive_pane_t1

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp3_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp3

0x7fe5,	// (0x0004231b) tabs_4_active_pane_g1

0x7fed,	// (0x00042323) tabs_4_active_pane_t1

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp3_ParamLimits

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp3

0x7fe5,	// (0x0004231b) tabs_4_1_passive_pane_g1

0x7fed,	// (0x00042323) tabs_4_1_passive_pane_t1

0x9809,	// (0x00043b3f) list_highlight_pane_cp2

0xb116,	// (0x0004544c) list_set_pane_ParamLimits

0xb116,	// (0x0004544c) list_set_pane

0xb1bc,	// (0x000454f2) main_pane_set_t1_ParamLimits

0xb1bc,	// (0x000454f2) main_pane_set_t1

0xb1dc,	// (0x00045512) main_pane_set_t2_ParamLimits

0xb1dc,	// (0x00045512) main_pane_set_t2

0xb1f0,	// (0x00045526) main_pane_set_t3_ParamLimits

0xb1f0,	// (0x00045526) main_pane_set_t3

0xb202,	// (0x00045538) main_pane_set_t4_ParamLimits

0xb202,	// (0x00045538) main_pane_set_t4

0x0003,

0xf98b,	// (0x00049cc1) main_pane_set_t_ParamLimits

0xf98b,	// (0x00049cc1) main_pane_set_t

0xb214,	// (0x0004554a) setting_code_pane

0xb220,	// (0x00045556) setting_slider_graphic_pane

0xb220,	// (0x00045556) setting_slider_pane

0xb220,	// (0x00045556) setting_text_pane

0xb220,	// (0x00045556) setting_volume_pane

0x5c71,	// (0x0003ffa7) volume_set_pane

0x7fbd,	// (0x000422f3) bg_set_opt_pane_cp

0x5c79,	// (0x0003ffaf) setting_slider_pane_t1

0x5c92,	// (0x0003ffc8) setting_slider_pane_t2

0x5cac,	// (0x0003ffe2) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049894) setting_slider_pane_t

0x5cc4,	// (0x0003fffa) slider_set_pane

0x7edd,	// (0x00042213) bg_set_opt_pane_cp2

0x7fff,	// (0x00042335) setting_slider_graphic_pane_g1

0x5cda,	// (0x00040010) setting_slider_graphic_pane_t1

0x5cea,	// (0x00040020) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0004989b) setting_slider_graphic_pane_t

0x5cfa,	// (0x00040030) slider_set_pane_cp

0x7edd,	// (0x00042213) input_focus_pane_cp1

0xb0d5,	// (0x0004540b) list_set_text_pane

0x7ed3,	// (0x00042209) setting_text_pane_g1

0x7edd,	// (0x00042213) input_focus_pane_cp2

0x7ed3,	// (0x00042209) setting_code_pane_g1

0x8008,	// (0x0004233e) setting_code_pane_t1

0x48db,	// (0x0003ec11) set_text_pane_t1_ParamLimits

0x48db,	// (0x0003ec11) set_text_pane_t1

0x8884,	// (0x00042bba) set_opt_bg_pane_g1

0x888c,	// (0x00042bc2) set_opt_bg_pane_g2

0xb0af,	// (0x000453e5) set_opt_bg_pane_g3

0x889c,	// (0x00042bd2) set_opt_bg_pane_g4

0x88a4,	// (0x00042bda) set_opt_bg_pane_g5

0x88ac,	// (0x00042be2) set_opt_bg_pane_g6

0xb0b9,	// (0x000453ef) set_opt_bg_pane_g7

0xb0c1,	// (0x000453f7) set_opt_bg_pane_g8

0xb0cb,	// (0x00045401) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x00049cae) set_opt_bg_pane_g

0xb0a2,	// (0x000453d8) slider_set_pane_g1

0x6c98,	// (0x00040fce) slider_set_pane_g2

0x0006,

0xf969,	// (0x00049c9f) slider_set_pane_g

0x6c34,	// (0x00040f6a) volume_set_pane_g1

0x6c3c,	// (0x00040f72) volume_set_pane_g2

0x6c44,	// (0x00040f7a) volume_set_pane_g3

0x6c4c,	// (0x00040f82) volume_set_pane_g4

0x6c54,	// (0x00040f8a) volume_set_pane_g5

0x6c5c,	// (0x00040f92) volume_set_pane_g6

0x6c64,	// (0x00040f9a) volume_set_pane_g7

0x6c6c,	// (0x00040fa2) volume_set_pane_g8

0x6c74,	// (0x00040faa) volume_set_pane_g9

0x6c7c,	// (0x00040fb2) volume_set_pane_g10

0x0009,

0xf941,	// (0x00049c77) volume_set_pane_g

0x8016,	// (0x0004234c) indicator_pane_ParamLimits

0x8016,	// (0x0004234c) indicator_pane

0x8022,	// (0x00042358) main_idle_pane_g2_ParamLimits

0x8022,	// (0x00042358) main_idle_pane_g2

0x804a,	// (0x00042380) main_pane_idle_g1_ParamLimits

0x804a,	// (0x00042380) main_pane_idle_g1

0x8057,	// (0x0004238d) popup_clock_digital_analogue_window_ParamLimits

0x8057,	// (0x0004238d) popup_clock_digital_analogue_window

0x806e,	// (0x000423a4) soft_indicator_pane_ParamLimits

0x806e,	// (0x000423a4) soft_indicator_pane

0x807a,	// (0x000423b0) wallpaper_pane_ParamLimits

0x807a,	// (0x000423b0) wallpaper_pane

0x7ed3,	// (0x00042209) wallpaper_pane_g1

0x808e,	// (0x000423c4) indicator_pane_g1_ParamLimits

0x808e,	// (0x000423c4) indicator_pane_g1

0xb484,	// (0x000457ba) navi_navi_icon_text_pane_srt_g1

0x80a9,	// (0x000423df) soft_indicator_pane_t1

0x80c3,	// (0x000423f9) aid_ps_area_pane

0x80d4,	// (0x0004240a) aid_ps_clock_pane

0x80e2,	// (0x00042418) aid_ps_indicator_pane

0x80ee,	// (0x00042424) indicator_ps_pane_ParamLimits

0x80ee,	// (0x00042424) indicator_ps_pane

0x80fd,	// (0x00042433) power_save_pane_g1_ParamLimits

0x80fd,	// (0x00042433) power_save_pane_g1

0x8109,	// (0x0004243f) power_save_pane_g2_ParamLimits

0x8109,	// (0x0004243f) power_save_pane_g2

0x5882,	// (0x0003fbb8) aid_navinavi_width_pane

0x80c3,	// (0x000423f9) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000498a0) power_save_pane_g_ParamLimits

0xf56a,	// (0x000498a0) power_save_pane_g

0x8117,	// (0x0004244d) power_save_pane_t1_ParamLimits

0x8117,	// (0x0004244d) power_save_pane_t1

0x80d4,	// (0x0004240a) aid_ps_clock_pane_ParamLimits

0x80e2,	// (0x00042418) aid_ps_indicator_pane_ParamLimits

0x8129,	// (0x0004245f) power_save_pane_t4_ParamLimits

0x8129,	// (0x0004245f) power_save_pane_t4

0x0001,

0xf56f,	// (0x000498a5) power_save_pane_t_ParamLimits

0xf56f,	// (0x000498a5) power_save_pane_t

0x8153,	// (0x00042489) power_save_t3_ParamLimits

0x8153,	// (0x00042489) power_save_t3

0x813e,	// (0x00042474) power_save_t2_ParamLimits

0x813e,	// (0x00042474) power_save_t2

0x8168,	// (0x0004249e) indicator_ps_pane_g1

0x8171,	// (0x000424a7) ai_gene_pane_ParamLimits

0x8171,	// (0x000424a7) ai_gene_pane

0x817d,	// (0x000424b3) ai_links_pane_ParamLimits

0x817d,	// (0x000424b3) ai_links_pane

0x8189,	// (0x000424bf) indicator_pane_cp1_ParamLimits

0x8189,	// (0x000424bf) indicator_pane_cp1

0x8195,	// (0x000424cb) main_pane_idle_g1_cp_ParamLimits

0x8195,	// (0x000424cb) main_pane_idle_g1_cp

0x81a1,	// (0x000424d7) popup_ai_links_title_window

0x81aa,	// (0x000424e0) soft_indicator_pane_cp1_ParamLimits

0x81aa,	// (0x000424e0) soft_indicator_pane_cp1

0xae91,	// (0x000451c7) ai_links_pane_g1

0xae9a,	// (0x000451d0) grid_ai_links_pane

0xae74,	// (0x000451aa) ai_gene_pane_1

0xae7f,	// (0x000451b5) ai_gene_pane_2

0xae88,	// (0x000451be) list_highlight_pane_cp4

0xae58,	// (0x0004518e) cell_ai_link_pane_ParamLimits

0xae58,	// (0x0004518e) cell_ai_link_pane

0xae50,	// (0x00045186) cell_ai_link_pane_g1

0x83da,	// (0x00042710) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x00049c52) cell_ai_link_pane_g

0x7edd,	// (0x00042213) grid_highlight_cp2

0x7edd,	// (0x00042213) bg_popup_sub_pane_cp1

0x81c4,	// (0x000424fa) popup_ai_links_title_window_t1

0xad9e,	// (0x000450d4) ai_gene_pane_1_g1_ParamLimits

0xad9e,	// (0x000450d4) ai_gene_pane_1_g1

0xadaa,	// (0x000450e0) ai_gene_pane_1_g2_ParamLimits

0xadaa,	// (0x000450e0) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x00049c48) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x00049c48) ai_gene_pane_1_g

0xadb7,	// (0x000450ed) ai_gene_pane_1_t1_ParamLimits

0xadb7,	// (0x000450ed) ai_gene_pane_1_t1

0xadeb,	// (0x00045121) grid_ai_soft_ind_pane

0xad89,	// (0x000450bf) ai_gene_pane_2_t1_ParamLimits

0xad89,	// (0x000450bf) ai_gene_pane_2_t1

0x81d3,	// (0x00042509) main_pane_empty_t1_ParamLimits

0x81d3,	// (0x00042509) main_pane_empty_t1

0x81eb,	// (0x00042521) main_pane_empty_t2_ParamLimits

0x81eb,	// (0x00042521) main_pane_empty_t2

0x8200,	// (0x00042536) main_pane_empty_t3_ParamLimits

0x8200,	// (0x00042536) main_pane_empty_t3

0x8212,	// (0x00042548) main_pane_empty_t4_ParamLimits

0x8212,	// (0x00042548) main_pane_empty_t4

0x8224,	// (0x0004255a) main_pane_empty_t5_ParamLimits

0x8224,	// (0x0004255a) main_pane_empty_t5

0x0004,

0xf574,	// (0x000498aa) main_pane_empty_t_ParamLimits

0xf574,	// (0x000498aa) main_pane_empty_t

0x88d5,	// (0x00042c0b) bg_popup_window_pane_ParamLimits

0x88d5,	// (0x00042c0b) bg_popup_window_pane

0xaaf9,	// (0x00044e2f) find_popup_pane_cp2_ParamLimits

0xaaf9,	// (0x00044e2f) find_popup_pane_cp2

0xab05,	// (0x00044e3b) heading_pane_ParamLimits

0xab05,	// (0x00044e3b) heading_pane

0x7edd,	// (0x00042213) bg_popup_sub_pane

0xaa73,	// (0x00044da9) bg_popup_window_pane_g1_ParamLimits

0xaa73,	// (0x00044da9) bg_popup_window_pane_g1

0xaa7f,	// (0x00044db5) bg_popup_window_pane_g2_ParamLimits

0xaa7f,	// (0x00044db5) bg_popup_window_pane_g2

0xaa8b,	// (0x00044dc1) bg_popup_window_pane_g3_ParamLimits

0xaa8b,	// (0x00044dc1) bg_popup_window_pane_g3

0xaa97,	// (0x00044dcd) bg_popup_window_pane_g4_ParamLimits

0xaa97,	// (0x00044dcd) bg_popup_window_pane_g4

0xaaa3,	// (0x00044dd9) bg_popup_window_pane_g5_ParamLimits

0xaaa3,	// (0x00044dd9) bg_popup_window_pane_g5

0xaaaf,	// (0x00044de5) bg_popup_window_pane_g6_ParamLimits

0xaaaf,	// (0x00044de5) bg_popup_window_pane_g6

0xaabb,	// (0x00044df1) bg_popup_window_pane_g7_ParamLimits

0xaabb,	// (0x00044df1) bg_popup_window_pane_g7

0xaac7,	// (0x00044dfd) bg_popup_window_pane_g8_ParamLimits

0xaac7,	// (0x00044dfd) bg_popup_window_pane_g8

0xaad3,	// (0x00044e09) bg_popup_window_pane_g9_ParamLimits

0xaad3,	// (0x00044e09) bg_popup_window_pane_g9

0xaadf,	// (0x00044e15) bg_popup_window_pane_g10_ParamLimits

0xaadf,	// (0x00044e15) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x00049c10) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x00049c10) bg_popup_window_pane_g

0xaa08,	// (0x00044d3e) bg_popup_heading_pane_ParamLimits

0xaa08,	// (0x00044d3e) bg_popup_heading_pane

0x6db6,	// (0x000410ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x6db6,	// (0x000410ec) tabs_4_passive_pane_cp_srt

0x6dc8,	// (0x000410fe) tabs_4_passive_pane_srt_ParamLimits

0xaa1c,	// (0x00044d52) heading_pane_g2

0x6dc8,	// (0x000410fe) tabs_4_passive_pane_srt

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp3_srt

0xaa24,	// (0x00044d5a) heading_pane_t1_ParamLimits

0xaa24,	// (0x00044d5a) heading_pane_t1

0xaa3b,	// (0x00044d71) heading_pane_t2_ParamLimits

0xaa3b,	// (0x00044d71) heading_pane_t2

0x0001,

0xf8d5,	// (0x00049c0b) heading_pane_t_ParamLimits

0xf8d5,	// (0x00049c0b) heading_pane_t

0xa535,	// (0x0004486b) bg_popup_heading_pane_g1

0xa5e4,	// (0x0004491a) bg_popup_heading_pane_g2

0xa5ee,	// (0x00044924) bg_popup_heading_pane_g3

0xa5f8,	// (0x0004492e) bg_popup_heading_pane_g4

0xa602,	// (0x00044938) bg_popup_heading_pane_g5

0xa60c,	// (0x00044942) bg_popup_heading_pane_g6

0xa614,	// (0x0004494a) bg_popup_heading_pane_g7

0xa61c,	// (0x00044952) bg_popup_heading_pane_g8

0xa626,	// (0x0004495c) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x00049bc7) bg_popup_heading_pane_g

0x9d13,	// (0x00044049) bg_popup_sub_pane_g1

0x9d1b,	// (0x00044051) bg_popup_sub_pane_g2

0x9d23,	// (0x00044059) bg_popup_sub_pane_g3

0x9d2b,	// (0x00044061) bg_popup_sub_pane_g4

0x9d33,	// (0x00044069) bg_popup_sub_pane_g5

0x9d3b,	// (0x00044071) bg_popup_sub_pane_g6

0x9d43,	// (0x00044079) bg_popup_sub_pane_g7

0x9d4b,	// (0x00044081) bg_popup_sub_pane_g8

0x9d53,	// (0x00044089) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x00049ba1) bg_popup_sub_pane_g

0x8238,	// (0x0004256e) bg_popup_window_pane_cp5_ParamLimits

0x8238,	// (0x0004256e) bg_popup_window_pane_cp5

0x8254,	// (0x0004258a) popup_note_window_g1_ParamLimits

0x8254,	// (0x0004258a) popup_note_window_g1

0x8260,	// (0x00042596) popup_note_window_t1_ParamLimits

0x8260,	// (0x00042596) popup_note_window_t1

0x8276,	// (0x000425ac) popup_note_window_t2_ParamLimits

0x8276,	// (0x000425ac) popup_note_window_t2

0x828c,	// (0x000425c2) popup_note_window_t3_ParamLimits

0x828c,	// (0x000425c2) popup_note_window_t3

0x82a2,	// (0x000425d8) popup_note_window_t4_ParamLimits

0x82a2,	// (0x000425d8) popup_note_window_t4

0x82ca,	// (0x00042600) popup_note_window_t5_ParamLimits

0x82ca,	// (0x00042600) popup_note_window_t5

0x0004,

0xf57f,	// (0x000498b5) popup_note_window_t_ParamLimits

0xf57f,	// (0x000498b5) popup_note_window_t

0x82ee,	// (0x00042624) bg_popup_window_pane_cp6_ParamLimits

0x82ee,	// (0x00042624) bg_popup_window_pane_cp6

0xa4b1,	// (0x000447e7) popup_note_image_window_g1_ParamLimits

0xa4b1,	// (0x000447e7) popup_note_image_window_g1

0xa4bd,	// (0x000447f3) popup_note_image_window_g2_ParamLimits

0xa4bd,	// (0x000447f3) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x00049b95) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x00049b95) popup_note_image_window_g

0xa4d6,	// (0x0004480c) popup_note_image_window_t1_ParamLimits

0xa4d6,	// (0x0004480c) popup_note_image_window_t1

0xa4ef,	// (0x00044825) popup_note_image_window_t2_ParamLimits

0xa4ef,	// (0x00044825) popup_note_image_window_t2

0xa508,	// (0x0004483e) popup_note_image_window_t3_ParamLimits

0xa508,	// (0x0004483e) popup_note_image_window_t3

0x0002,

0xf864,	// (0x00049b9a) popup_note_image_window_t_ParamLimits

0xf864,	// (0x00049b9a) popup_note_image_window_t

0xa372,	// (0x000446a8) bg_popup_window_pane_cp7_ParamLimits

0xa372,	// (0x000446a8) bg_popup_window_pane_cp7

0xa3a2,	// (0x000446d8) popup_note_wait_window_g1_ParamLimits

0xa3a2,	// (0x000446d8) popup_note_wait_window_g1

0xa3ae,	// (0x000446e4) popup_note_wait_window_g2_ParamLimits

0xa3ae,	// (0x000446e4) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x00049b83) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x00049b83) popup_note_wait_window_g

0xa3c6,	// (0x000446fc) popup_note_wait_window_t1_ParamLimits

0xa3c6,	// (0x000446fc) popup_note_wait_window_t1

0xa3ed,	// (0x00044723) popup_note_wait_window_t2_ParamLimits

0xa3ed,	// (0x00044723) popup_note_wait_window_t2

0xa40a,	// (0x00044740) popup_note_wait_window_t3_ParamLimits

0xa40a,	// (0x00044740) popup_note_wait_window_t3

0xa41d,	// (0x00044753) popup_note_wait_window_t4_ParamLimits

0xa41d,	// (0x00044753) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x00049b8a) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x00049b8a) popup_note_wait_window_t

0xa442,	// (0x00044778) wait_bar_pane_ParamLimits

0xa442,	// (0x00044778) wait_bar_pane

0x7edd,	// (0x00042213) wait_anim_pane

0x7edd,	// (0x00042213) wait_border_pane

0x7ed3,	// (0x00042209) wait_anim_pane_g1

0x7ed3,	// (0x00042209) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049a3e) wait_anim_pane_g

0xa316,	// (0x0004464c) wait_border_pane_g1

0xa321,	// (0x00044657) wait_border_pane_g2

0xa32a,	// (0x00044660) wait_border_pane_g3

0x0002,

0xf846,	// (0x00049b7c) wait_border_pane_g

0xa181,	// (0x000444b7) bg_popup_window_pane_cp16_ParamLimits

0xa181,	// (0x000444b7) bg_popup_window_pane_cp16

0xa281,	// (0x000445b7) indicator_popup_pane_cp4_ParamLimits

0xa281,	// (0x000445b7) indicator_popup_pane_cp4

0xa295,	// (0x000445cb) popup_query_data_window_t1_ParamLimits

0xa295,	// (0x000445cb) popup_query_data_window_t1

0xa2a7,	// (0x000445dd) popup_query_data_window_t2_ParamLimits

0xa2a7,	// (0x000445dd) popup_query_data_window_t2

0xa2c0,	// (0x000445f6) popup_query_data_window_t3_ParamLimits

0xa2c0,	// (0x000445f6) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x00049b75) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x00049b75) popup_query_data_window_t

0xa2da,	// (0x00044610) query_popup_data_pane_ParamLimits

0xa2da,	// (0x00044610) query_popup_data_pane

0xa2ee,	// (0x00044624) query_popup_data_pane_cp1_ParamLimits

0xa2ee,	// (0x00044624) query_popup_data_pane_cp1

0xa181,	// (0x000444b7) bg_popup_window_pane_cp10_ParamLimits

0xa181,	// (0x000444b7) bg_popup_window_pane_cp10

0xa1b3,	// (0x000444e9) indicator_popup_pane_ParamLimits

0xa1b3,	// (0x000444e9) indicator_popup_pane

0xa1d5,	// (0x0004450b) popup_query_code_window_t1_ParamLimits

0xa1d5,	// (0x0004450b) popup_query_code_window_t1

0xa1ef,	// (0x00044525) popup_query_code_window_t2_ParamLimits

0xa1ef,	// (0x00044525) popup_query_code_window_t2

0xa238,	// (0x0004456e) popup_query_code_window_t3_ParamLimits

0xa238,	// (0x0004456e) popup_query_code_window_t3

0x0002,

0xf838,	// (0x00049b6e) popup_query_code_window_t_ParamLimits

0xf838,	// (0x00049b6e) popup_query_code_window_t

0xa267,	// (0x0004459d) query_popup_pane_ParamLimits

0xa267,	// (0x0004459d) query_popup_pane

0x82ee,	// (0x00042624) bg_popup_window_pane_cp15_ParamLimits

0x82ee,	// (0x00042624) bg_popup_window_pane_cp15

0x830c,	// (0x00042642) indicator_popup_pane_cp1_ParamLimits

0x830c,	// (0x00042642) indicator_popup_pane_cp1

0x831f,	// (0x00042655) indicator_popup_pane_cp2_ParamLimits

0x831f,	// (0x00042655) indicator_popup_pane_cp2

0x8332,	// (0x00042668) popup_query_data_code_window_g1_ParamLimits

0x8332,	// (0x00042668) popup_query_data_code_window_g1

0x8345,	// (0x0004267b) popup_query_data_code_window_t1_ParamLimits

0x8345,	// (0x0004267b) popup_query_data_code_window_t1

0x8357,	// (0x0004268d) popup_query_data_code_window_t2_ParamLimits

0x8357,	// (0x0004268d) popup_query_data_code_window_t2

0x8369,	// (0x0004269f) popup_query_data_code_window_t3_ParamLimits

0x8369,	// (0x0004269f) popup_query_data_code_window_t3

0x837f,	// (0x000426b5) popup_query_data_code_window_t4_ParamLimits

0x837f,	// (0x000426b5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000498c0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000498c0) popup_query_data_code_window_t

0x69e1,	// (0x00040d17) list_single_midp_graphic_pane_g3

0x8397,	// (0x000426cd) query_popup_data_pane_cp2_ParamLimits

0x83aa,	// (0x000426e0) query_popup_pane_cp2_ParamLimits

0x83aa,	// (0x000426e0) query_popup_pane_cp2

0x7edd,	// (0x00042213) bg_popup_window_pane_cp11

0xa179,	// (0x000444af) heading_pane_cp5

0x8495,	// (0x000427cb) listscroll_popup_info_pane

0x7edd,	// (0x00042213) input_focus_pane_cp3

0x83bd,	// (0x000426f3) query_popup_pane_t1

0x83cb,	// (0x00042701) list_popup_info_pane_ParamLimits

0x83cb,	// (0x00042701) list_popup_info_pane

0x83da,	// (0x00042710) listscroll_popup_info_pane_g1

0x83e2,	// (0x00042718) scroll_pane_cp7

0x83ec,	// (0x00042722) popup_info_list_pane_t1_ParamLimits

0x83ec,	// (0x00042722) popup_info_list_pane_t1

0x8406,	// (0x0004273c) popup_info_list_pane_t2_ParamLimits

0x8406,	// (0x0004273c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000498c9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000498c9) popup_info_list_pane_t

0x7edd,	// (0x00042213) bg_popup_window_pane_cp12

0xb49e,	// (0x000457d4) find_popup_pane

0x7fbd,	// (0x000422f3) bg_popup_window_pane_cp3

0x8420,	// (0x00042756) heading_pane_cp3

0x842c,	// (0x00042762) listscroll_popup_graphic_pane

0x7edd,	// (0x00042213) bg_popup_window_pane_cp4

0x848b,	// (0x000427c1) heading_pane_cp4

0x8495,	// (0x000427cb) listscroll_popup_colour_pane

0x849d,	// (0x000427d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x849d,	// (0x000427d3) cell_large_graphic_colour_none_popup_pane

0x84b1,	// (0x000427e7) grid_large_graphic_colour_popup_pane_ParamLimits

0x84b1,	// (0x000427e7) grid_large_graphic_colour_popup_pane

0x84dd,	// (0x00042813) listscroll_popup_colour_pane_g1_ParamLimits

0x84dd,	// (0x00042813) listscroll_popup_colour_pane_g1

0x84f4,	// (0x0004282a) listscroll_popup_colour_pane_g2_ParamLimits

0x84f4,	// (0x0004282a) listscroll_popup_colour_pane_g2

0x850b,	// (0x00042841) listscroll_popup_colour_pane_g3_ParamLimits

0x850b,	// (0x00042841) listscroll_popup_colour_pane_g3

0x851b,	// (0x00042851) listscroll_popup_colour_pane_g4_ParamLimits

0x851b,	// (0x00042851) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000498ce) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000498ce) listscroll_popup_colour_pane_g

0x852f,	// (0x00042865) scroll_pane_cp6_ParamLimits

0x852f,	// (0x00042865) scroll_pane_cp6

0x8541,	// (0x00042877) cell_large_graphic_colour_popup_pane_ParamLimits

0x8541,	// (0x00042877) cell_large_graphic_colour_popup_pane

0x8560,	// (0x00042896) cell_large_graphic_colour_none_popup_pane_t1

0x7edd,	// (0x00042213) grid_highlight_pane_cp5

0x856f,	// (0x000428a5) cell_large_graphic_colour_popup_pane_g1

0x8577,	// (0x000428ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000498d7) cell_large_graphic_colour_popup_pane_g

0x857f,	// (0x000428b5) cell_large_graphic_colour_popup_pane_g2_copy1

0x8588,	// (0x000428be) grid_highlight_pane_cp4

0x8590,	// (0x000428c6) bg_popup_window_pane_cp8_ParamLimits

0x8590,	// (0x000428c6) bg_popup_window_pane_cp8

0x85ab,	// (0x000428e1) popup_snote_single_text_window_g1_ParamLimits

0x85ab,	// (0x000428e1) popup_snote_single_text_window_g1

0x85bd,	// (0x000428f3) popup_snote_single_text_window_t1_ParamLimits

0x85bd,	// (0x000428f3) popup_snote_single_text_window_t1

0x85d0,	// (0x00042906) popup_snote_single_text_window_t2_ParamLimits

0x85d0,	// (0x00042906) popup_snote_single_text_window_t2

0x85e3,	// (0x00042919) popup_snote_single_text_window_t3_ParamLimits

0x85e3,	// (0x00042919) popup_snote_single_text_window_t3

0x861c,	// (0x00042952) popup_snote_single_text_window_t4_ParamLimits

0x861c,	// (0x00042952) popup_snote_single_text_window_t4

0x8650,	// (0x00042986) popup_snote_single_text_window_t5_ParamLimits

0x8650,	// (0x00042986) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000498dc) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000498dc) popup_snote_single_text_window_t

0x867f,	// (0x000429b5) bg_popup_window_pane_cp9_ParamLimits

0x867f,	// (0x000429b5) bg_popup_window_pane_cp9

0x85ab,	// (0x000428e1) popup_snote_single_graphic_window_g1_ParamLimits

0x85ab,	// (0x000428e1) popup_snote_single_graphic_window_g1

0x868d,	// (0x000429c3) popup_snote_single_graphic_window_g2_ParamLimits

0x868d,	// (0x000429c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000498e7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000498e7) popup_snote_single_graphic_window_g

0x8699,	// (0x000429cf) popup_snote_single_graphic_window_t1_ParamLimits

0x8699,	// (0x000429cf) popup_snote_single_graphic_window_t1

0x86ac,	// (0x000429e2) popup_snote_single_graphic_window_t2_ParamLimits

0x86ac,	// (0x000429e2) popup_snote_single_graphic_window_t2

0x86bf,	// (0x000429f5) popup_snote_single_graphic_window_t3_ParamLimits

0x86bf,	// (0x000429f5) popup_snote_single_graphic_window_t3

0x86f8,	// (0x00042a2e) popup_snote_single_graphic_window_t4_ParamLimits

0x86f8,	// (0x00042a2e) popup_snote_single_graphic_window_t4

0x872c,	// (0x00042a62) popup_snote_single_graphic_window_t5_ParamLimits

0x872c,	// (0x00042a62) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000498ec) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000498ec) popup_snote_single_graphic_window_t

0xb3e0,	// (0x00045716) grid_graphic_popup_pane_ParamLimits

0xb3e0,	// (0x00045716) grid_graphic_popup_pane

0xb40a,	// (0x00045740) listscroll_popup_graphic_pane_g1_ParamLimits

0xb40a,	// (0x00045740) listscroll_popup_graphic_pane_g1

0xb41e,	// (0x00045754) listscroll_popup_graphic_pane_g2_ParamLimits

0xb41e,	// (0x00045754) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x00049ceb) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x00049ceb) listscroll_popup_graphic_pane_g

0xb432,	// (0x00045768) scroll_pane_cp5

0xb37f,	// (0x000456b5) cell_graphic_popup_pane_ParamLimits

0xb37f,	// (0x000456b5) cell_graphic_popup_pane

0xb360,	// (0x00045696) cell_graphic_popup_pane_g1

0xb368,	// (0x0004569e) cell_graphic_popup_pane_g2

0x857f,	// (0x000428b5) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x00049ce4) cell_graphic_popup_pane_g

0xb371,	// (0x000456a7) cell_graphic_popup_pane_t2

0x8588,	// (0x000428be) grid_highlight_pane_cp3

0x876d,	// (0x00042aa3) list_gen_pane_ParamLimits

0x876d,	// (0x00042aa3) list_gen_pane

0x879f,	// (0x00042ad5) scroll_pane

0xb2b8,	// (0x000455ee) bg_list_pane_g1_ParamLimits

0xb2b8,	// (0x000455ee) bg_list_pane_g1

0xb2d5,	// (0x0004560b) bg_list_pane_g2_ParamLimits

0xb2d5,	// (0x0004560b) bg_list_pane_g2

0xb2ea,	// (0x00045620) bg_list_pane_g3_ParamLimits

0xb2ea,	// (0x00045620) bg_list_pane_g3

0xb2fe,	// (0x00045634) bg_list_pane_g4_ParamLimits

0xb2fe,	// (0x00045634) bg_list_pane_g4

0xb312,	// (0x00045648) bg_list_pane_g5_ParamLimits

0xb312,	// (0x00045648) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x00049cd9) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x00049cd9) bg_list_pane_g

0x6cfc,	// (0x00041032) list_double2_graphic_large_graphic_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double2_graphic_large_graphic_pane

0x6cfc,	// (0x00041032) list_double2_graphic_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double2_graphic_pane

0x6cfc,	// (0x00041032) list_double2_large_graphic_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double2_large_graphic_pane

0x6cfc,	// (0x00041032) list_double2_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double2_pane

0x6cfc,	// (0x00041032) list_double_graphic_heading_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_graphic_heading_pane

0x6cfc,	// (0x00041032) list_double_graphic_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_graphic_pane

0x6cfc,	// (0x00041032) list_double_heading_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_heading_pane

0x6cfc,	// (0x00041032) list_double_large_graphic_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_large_graphic_pane

0x6cfc,	// (0x00041032) list_double_number_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_number_pane

0x6cfc,	// (0x00041032) list_double_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_pane

0x6cfc,	// (0x00041032) list_double_time_pane_ParamLimits

0x6cfc,	// (0x00041032) list_double_time_pane

0x6cfc,	// (0x00041032) list_setting_number_pane_ParamLimits

0x6cfc,	// (0x00041032) list_setting_number_pane

0x6cfc,	// (0x00041032) list_setting_pane_ParamLimits

0x6cfc,	// (0x00041032) list_setting_pane

0x6d35,	// (0x0004106b) list_single_2graphic_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_2graphic_pane

0x6d35,	// (0x0004106b) list_single_graphic_heading_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_graphic_heading_pane

0x6d35,	// (0x0004106b) list_single_graphic_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_graphic_pane

0x6d35,	// (0x0004106b) list_single_heading_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_heading_pane

0x6d73,	// (0x000410a9) list_single_large_graphic_pane_ParamLimits

0x6d73,	// (0x000410a9) list_single_large_graphic_pane

0x6d35,	// (0x0004106b) list_single_number_heading_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_number_heading_pane

0x6d35,	// (0x0004106b) list_single_number_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_number_pane

0x6d35,	// (0x0004106b) list_single_pane_ParamLimits

0x6d35,	// (0x0004106b) list_single_pane

0x7edd,	// (0x00042213) list_highlight_pane_cp1

0x5d02,	// (0x00040038) list_single_pane_g1_ParamLimits

0x5d02,	// (0x00040038) list_single_pane_g1

0x5d0e,	// (0x00040044) list_single_pane_g2_ParamLimits

0x5d0e,	// (0x00040044) list_single_pane_g2

0x0001,

0xf5d2,	// (0x00049908) list_single_pane_g_ParamLimits

0xf5d2,	// (0x00049908) list_single_pane_g

0x51f8,	// (0x0003f52e) list_single_pane_t1_ParamLimits

0x51f8,	// (0x0003f52e) list_single_pane_t1

0x5d02,	// (0x00040038) list_single_number_pane_g1_ParamLimits

0x5d02,	// (0x00040038) list_single_number_pane_g1

0x5d0e,	// (0x00040044) list_single_number_pane_g2_ParamLimits

0x5d0e,	// (0x00040044) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x00049908) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x00049908) list_single_number_pane_g

0x51a0,	// (0x0003f4d6) list_single_number_pane_t1_ParamLimits

0x51a0,	// (0x0003f4d6) list_single_number_pane_t1

0x51b6,	// (0x0003f4ec) list_single_number_pane_t2_ParamLimits

0x51b6,	// (0x0003f4ec) list_single_number_pane_t2

0x0001,

0xf964,	// (0x00049c9a) list_single_number_pane_t_ParamLimits

0xf964,	// (0x00049c9a) list_single_number_pane_t

0x48f4,	// (0x0003ec2a) list_single_graphic_pane_g1_ParamLimits

0x48f4,	// (0x0003ec2a) list_single_graphic_pane_g1

0x5d02,	// (0x00040038) list_single_graphic_pane_g2_ParamLimits

0x5d02,	// (0x00040038) list_single_graphic_pane_g2

0x5d0e,	// (0x00040044) list_single_graphic_pane_g3_ParamLimits

0x5d0e,	// (0x00040044) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000498f7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000498f7) list_single_graphic_pane_g

0x4900,	// (0x0003ec36) list_single_graphic_pane_t1_ParamLimits

0x4900,	// (0x0003ec36) list_single_graphic_pane_t1

0x4916,	// (0x0003ec4c) list_single_heading_pane_g1_ParamLimits

0x4916,	// (0x0003ec4c) list_single_heading_pane_g1

0x5d0e,	// (0x00040044) list_single_heading_pane_g2_ParamLimits

0x5d0e,	// (0x00040044) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000498fe) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000498fe) list_single_heading_pane_g

0x4929,	// (0x0003ec5f) list_single_heading_pane_t1_ParamLimits

0x4929,	// (0x0003ec5f) list_single_heading_pane_t1

0x5d1a,	// (0x00040050) list_single_heading_pane_t2_ParamLimits

0x5d1a,	// (0x00040050) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049903) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049903) list_single_heading_pane_t

0x5d02,	// (0x00040038) list_single_number_heading_pane_g1_ParamLimits

0x5d02,	// (0x00040038) list_single_number_heading_pane_g1

0x5d0e,	// (0x00040044) list_single_number_heading_pane_g2_ParamLimits

0x5d0e,	// (0x00040044) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x00049908) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x00049908) list_single_number_heading_pane_g

0x493f,	// (0x0003ec75) list_single_number_heading_pane_t1_ParamLimits

0x493f,	// (0x0003ec75) list_single_number_heading_pane_t1

0x4955,	// (0x0003ec8b) list_single_number_heading_pane_t2_ParamLimits

0x4955,	// (0x0003ec8b) list_single_number_heading_pane_t2

0x4967,	// (0x0003ec9d) list_single_number_heading_pane_t3_ParamLimits

0x4967,	// (0x0003ec9d) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0004990d) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0004990d) list_single_number_heading_pane_t

0x4979,	// (0x0003ecaf) list_single_graphic_heading_pane_g1_ParamLimits

0x4979,	// (0x0003ecaf) list_single_graphic_heading_pane_g1

0x5d2c,	// (0x00040062) list_single_graphic_heading_pane_g4_ParamLimits

0x5d2c,	// (0x00040062) list_single_graphic_heading_pane_g4

0x5d0e,	// (0x00040044) list_single_graphic_heading_pane_g5_ParamLimits

0x5d0e,	// (0x00040044) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x00049914) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x00049914) list_single_graphic_heading_pane_g

0x493f,	// (0x0003ec75) list_single_graphic_heading_pane_t1_ParamLimits

0x493f,	// (0x0003ec75) list_single_graphic_heading_pane_t1

0x4991,	// (0x0003ecc7) list_single_graphic_heading_pane_t2_ParamLimits

0x4991,	// (0x0003ecc7) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004991b) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004991b) list_single_graphic_heading_pane_t

0x5d3d,	// (0x00040073) list_single_large_graphic_pane_g1_ParamLimits

0x5d3d,	// (0x00040073) list_single_large_graphic_pane_g1

0x5d49,	// (0x0004007f) list_single_large_graphic_pane_g2_ParamLimits

0x5d49,	// (0x0004007f) list_single_large_graphic_pane_g2

0x5d55,	// (0x0004008b) list_single_large_graphic_pane_g3_ParamLimits

0x5d55,	// (0x0004008b) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x00049920) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x00049920) list_single_large_graphic_pane_g

0xa321,	// (0x00044657) wait_border_pane_g2_copy1

0x5d61,	// (0x00040097) list_single_large_graphic_pane_g4_cp2

0x49a7,	// (0x0003ecdd) list_single_large_graphic_pane_t1_ParamLimits

0x49a7,	// (0x0003ecdd) list_single_large_graphic_pane_t1

0x87d3,	// (0x00042b09) list_double_pane_g1_ParamLimits

0x87d3,	// (0x00042b09) list_double_pane_g1

0x5d69,	// (0x0004009f) list_double_pane_g2_ParamLimits

0x5d69,	// (0x0004009f) list_double_pane_g2

0x0001,

0xf5f1,	// (0x00049927) list_double_pane_g_ParamLimits

0xf5f1,	// (0x00049927) list_double_pane_g

0x49bd,	// (0x0003ecf3) list_double_pane_t1_ParamLimits

0x49bd,	// (0x0003ecf3) list_double_pane_t1

0x49d3,	// (0x0003ed09) list_double_pane_t2_ParamLimits

0x49d3,	// (0x0003ed09) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0004992c) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0004992c) list_double_pane_t

0x49e5,	// (0x0003ed1b) list_double2_pane_g1_ParamLimits

0x49e5,	// (0x0003ed1b) list_double2_pane_g1

0x49f6,	// (0x0003ed2c) list_double2_pane_g2_ParamLimits

0x49f6,	// (0x0003ed2c) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x00049931) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x00049931) list_double2_pane_g

0x4a02,	// (0x0003ed38) list_double2_pane_t1_ParamLimits

0x4a02,	// (0x0003ed38) list_double2_pane_t1

0x4a18,	// (0x0003ed4e) list_double2_pane_t2_ParamLimits

0x4a18,	// (0x0003ed4e) list_double2_pane_t2

0x0001,

0xf600,	// (0x00049936) list_double2_pane_t_ParamLimits

0xf600,	// (0x00049936) list_double2_pane_t

0x87d3,	// (0x00042b09) list_double_number_pane_g1_ParamLimits

0x87d3,	// (0x00042b09) list_double_number_pane_g1

0x5d69,	// (0x0004009f) list_double_number_pane_g2_ParamLimits

0x5d69,	// (0x0004009f) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x00049927) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x00049927) list_double_number_pane_g

0x4a2a,	// (0x0003ed60) list_double_number_pane_t1_ParamLimits

0x4a2a,	// (0x0003ed60) list_double_number_pane_t1

0x4a3c,	// (0x0003ed72) list_double_number_pane_t2_ParamLimits

0x4a3c,	// (0x0003ed72) list_double_number_pane_t2

0x4a52,	// (0x0003ed88) list_double_number_pane_t3_ParamLimits

0x4a52,	// (0x0003ed88) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0004993b) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0004993b) list_double_number_pane_t

0x4a64,	// (0x0003ed9a) list_double_graphic_pane_g1_ParamLimits

0x4a64,	// (0x0003ed9a) list_double_graphic_pane_g1

0x4a70,	// (0x0003eda6) list_double_graphic_pane_g2_ParamLimits

0x4a70,	// (0x0003eda6) list_double_graphic_pane_g2

0x4a7f,	// (0x0003edb5) list_double_graphic_pane_g3_ParamLimits

0x4a7f,	// (0x0003edb5) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x00049942) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x00049942) list_double_graphic_pane_g

0x4a97,	// (0x0003edcd) list_double_graphic_pane_t1_ParamLimits

0x4a97,	// (0x0003edcd) list_double_graphic_pane_t1

0x4aad,	// (0x0003ede3) list_double_graphic_pane_t2_ParamLimits

0x4aad,	// (0x0003ede3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0004994b) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0004994b) list_double_graphic_pane_t

0x4abf,	// (0x0003edf5) list_double2_graphic_pane_g1_ParamLimits

0x4abf,	// (0x0003edf5) list_double2_graphic_pane_g1

0x9fe8,	// (0x0004431e) list_double2_graphic_pane_g2_ParamLimits

0x9fe8,	// (0x0004431e) list_double2_graphic_pane_g2

0x5d75,	// (0x000400ab) list_double2_graphic_pane_g3_ParamLimits

0x5d75,	// (0x000400ab) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x00049950) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x00049950) list_double2_graphic_pane_g

0x4acb,	// (0x0003ee01) list_double2_graphic_pane_t1_ParamLimits

0x4acb,	// (0x0003ee01) list_double2_graphic_pane_t1

0x4ae1,	// (0x0003ee17) list_double2_graphic_pane_t2_ParamLimits

0x4ae1,	// (0x0003ee17) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x00049957) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x00049957) list_double2_graphic_pane_t

0x4af3,	// (0x0003ee29) list_double_large_graphic_pane_g1_ParamLimits

0x4af3,	// (0x0003ee29) list_double_large_graphic_pane_g1

0x4b12,	// (0x0003ee48) list_double_large_graphic_pane_g2_ParamLimits

0x4b12,	// (0x0003ee48) list_double_large_graphic_pane_g2

0x5d69,	// (0x0004009f) list_double_large_graphic_pane_g3_ParamLimits

0x5d69,	// (0x0004009f) list_double_large_graphic_pane_g3

0x4b28,	// (0x0003ee5e) list_double_large_graphic_pane_g4_ParamLimits

0x4b28,	// (0x0003ee5e) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0004995c) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0004995c) list_double_large_graphic_pane_g

0x4b39,	// (0x0003ee6f) list_double_large_graphic_pane_t1_ParamLimits

0x4b39,	// (0x0003ee6f) list_double_large_graphic_pane_t1

0x4b52,	// (0x0003ee88) list_double_large_graphic_pane_t2_ParamLimits

0x4b52,	// (0x0003ee88) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x00049967) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x00049967) list_double_large_graphic_pane_t

0x5d96,	// (0x000400cc) list_double2_large_graphic_pane_g1_ParamLimits

0x5d96,	// (0x000400cc) list_double2_large_graphic_pane_g1

0x4b64,	// (0x0003ee9a) list_double2_large_graphic_pane_g2_ParamLimits

0x4b64,	// (0x0003ee9a) list_double2_large_graphic_pane_g2

0x5d75,	// (0x000400ab) list_double2_large_graphic_pane_g3_ParamLimits

0x5d75,	// (0x000400ab) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0004996c) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0004996c) list_double2_large_graphic_pane_g

0x4b75,	// (0x0003eeab) list_double2_large_graphic_pane_t1_ParamLimits

0x4b75,	// (0x0003eeab) list_double2_large_graphic_pane_t1

0x4b8b,	// (0x0003eec1) list_double2_large_graphic_pane_t2_ParamLimits

0x4b8b,	// (0x0003eec1) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049973) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049973) list_double2_large_graphic_pane_t

0x4b9d,	// (0x0003eed3) list_double_heading_pane_g1_ParamLimits

0x4b9d,	// (0x0003eed3) list_double_heading_pane_g1

0x5da2,	// (0x000400d8) list_double_heading_pane_g2_ParamLimits

0x5da2,	// (0x000400d8) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049978) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049978) list_double_heading_pane_g

0x4bae,	// (0x0003eee4) list_double_heading_pane_t1_ParamLimits

0x4bae,	// (0x0003eee4) list_double_heading_pane_t1

0x4a18,	// (0x0003ed4e) list_double_heading_pane_t2_ParamLimits

0x4a18,	// (0x0003ed4e) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0004997d) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0004997d) list_double_heading_pane_t

0x4bc4,	// (0x0003eefa) list_double_graphic_heading_pane_g1_ParamLimits

0x4bc4,	// (0x0003eefa) list_double_graphic_heading_pane_g1

0x4b9d,	// (0x0003eed3) list_double_graphic_heading_pane_g2_ParamLimits

0x4b9d,	// (0x0003eed3) list_double_graphic_heading_pane_g2

0x5da2,	// (0x000400d8) list_double_graphic_heading_pane_g3_ParamLimits

0x5da2,	// (0x000400d8) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049982) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049982) list_double_graphic_heading_pane_g

0x4bd0,	// (0x0003ef06) list_double_graphic_heading_pane_t1_ParamLimits

0x4bd0,	// (0x0003ef06) list_double_graphic_heading_pane_t1

0x4ae1,	// (0x0003ee17) list_double_graphic_heading_pane_t2_ParamLimits

0x4ae1,	// (0x0003ee17) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049989) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049989) list_double_graphic_heading_pane_t

0x4be6,	// (0x0003ef1c) list_double_time_pane_g1_ParamLimits

0x4be6,	// (0x0003ef1c) list_double_time_pane_g1

0x4bf7,	// (0x0003ef2d) list_double_time_pane_g2_ParamLimits

0x4bf7,	// (0x0003ef2d) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0004998e) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0004998e) list_double_time_pane_g

0x4c03,	// (0x0003ef39) list_double_time_pane_t1_ParamLimits

0x4c03,	// (0x0003ef39) list_double_time_pane_t1

0x4c19,	// (0x0003ef4f) list_double_time_pane_t2_ParamLimits

0x4c19,	// (0x0003ef4f) list_double_time_pane_t2

0x4c2b,	// (0x0003ef61) list_double_time_pane_t3_ParamLimits

0x4c2b,	// (0x0003ef61) list_double_time_pane_t3

0x4c3d,	// (0x0003ef73) list_double_time_pane_t4_ParamLimits

0x4c3d,	// (0x0003ef73) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049993) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049993) list_double_time_pane_t

0x4c4f,	// (0x0003ef85) list_setting_pane_g1_ParamLimits

0x4c4f,	// (0x0003ef85) list_setting_pane_g1

0x49f6,	// (0x0003ed2c) list_setting_pane_g2_ParamLimits

0x49f6,	// (0x0003ed2c) list_setting_pane_g2

0x0001,

0xf666,	// (0x0004999c) list_setting_pane_g_ParamLimits

0xf666,	// (0x0004999c) list_setting_pane_g

0x4c5b,	// (0x0003ef91) list_setting_pane_t1_ParamLimits

0x4c5b,	// (0x0003ef91) list_setting_pane_t1

0x4c75,	// (0x0003efab) list_setting_pane_t2_ParamLimits

0x4c75,	// (0x0003efab) list_setting_pane_t2

0x0002,

0xf66b,	// (0x000499a1) list_setting_pane_t_ParamLimits

0xf66b,	// (0x000499a1) list_setting_pane_t

0x4cb4,	// (0x0003efea) set_value_pane_cp_ParamLimits

0x4cb4,	// (0x0003efea) set_value_pane_cp

0x4cc0,	// (0x0003eff6) list_setting_number_pane_g1_ParamLimits

0x4cc0,	// (0x0003eff6) list_setting_number_pane_g1

0x4ccc,	// (0x0003f002) list_setting_number_pane_g2_ParamLimits

0x4ccc,	// (0x0003f002) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x000499a8) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x000499a8) list_setting_number_pane_g

0x4cd8,	// (0x0003f00e) list_setting_number_pane_t1_ParamLimits

0x4cd8,	// (0x0003f00e) list_setting_number_pane_t1

0x4cf1,	// (0x0003f027) list_setting_number_pane_t2_ParamLimits

0x4cf1,	// (0x0003f027) list_setting_number_pane_t2

0x4d0b,	// (0x0003f041) list_setting_number_pane_t3_ParamLimits

0x4d0b,	// (0x0003f041) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x000499ad) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x000499ad) list_setting_number_pane_t

0x4cb4,	// (0x0003efea) set_value_pane_ParamLimits

0x4cb4,	// (0x0003efea) set_value_pane

0x87df,	// (0x00042b15) bg_set_opt_pane_ParamLimits

0x87df,	// (0x00042b15) bg_set_opt_pane

0x4d4e,	// (0x0003f084) set_value_pane_t1

0x8800,	// (0x00042b36) slider_set_pane_cp3

0x8809,	// (0x00042b3f) volume_small_pane_cp

0x8812,	// (0x00042b48) list_form_gen_pane

0x881b,	// (0x00042b51) scroll_pane_cp8

0x4d64,	// (0x0003f09a) form_field_data_pane_ParamLimits

0x4d64,	// (0x0003f09a) form_field_data_pane

0x4d88,	// (0x0003f0be) form_field_data_wide_pane_ParamLimits

0x4d88,	// (0x0003f0be) form_field_data_wide_pane

0x4dab,	// (0x0003f0e1) form_field_popup_pane_ParamLimits

0x4dab,	// (0x0003f0e1) form_field_popup_pane

0x4dcb,	// (0x0003f101) form_field_popup_wide_pane_ParamLimits

0x4dcb,	// (0x0003f101) form_field_popup_wide_pane

0x4dea,	// (0x0003f120) form_field_slider_pane_ParamLimits

0x4dea,	// (0x0003f120) form_field_slider_pane

0x4dfd,	// (0x0003f133) form_field_slider_wide_pane_ParamLimits

0x4dfd,	// (0x0003f133) form_field_slider_wide_pane

0x882c,	// (0x00042b62) data_form_pane

0x4e1a,	// (0x0003f150) form_field_data_pane_t1

0x8838,	// (0x00042b6e) input_focus_pane

0x4e32,	// (0x0003f168) data_form_wide_pane

0x4e4f,	// (0x0003f185) form_field_data_wide_pane_t1

0x859d,	// (0x000428d3) input_focus_pane_cp6

0x4e71,	// (0x0003f1a7) form_field_popup_pane_t1

0x8838,	// (0x00042b6e) input_focus_pane_cp7

0x885a,	// (0x00042b90) list_form_pane

0x4e91,	// (0x0003f1c7) form_field_popup_wide_pane_t1

0x8838,	// (0x00042b6e) input_focus_pane_cp8

0x8866,	// (0x00042b9c) list_form_wide_pane

0x4eae,	// (0x0003f1e4) form_field_slider_pane_t1_ParamLimits

0x4eae,	// (0x0003f1e4) form_field_slider_pane_t1

0x4ec4,	// (0x0003f1fa) form_field_slider_pane_t2_ParamLimits

0x4ec4,	// (0x0003f1fa) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x000499bd) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x000499bd) form_field_slider_pane_t

0x8238,	// (0x0004256e) input_focus_pane_cp9_ParamLimits

0x8238,	// (0x0004256e) input_focus_pane_cp9

0x4ed9,	// (0x0003f20f) slider_cont_pane_ParamLimits

0x4ed9,	// (0x0003f20f) slider_cont_pane

0x8872,	// (0x00042ba8) form_field_slider_wide_pane_t1_ParamLimits

0x8872,	// (0x00042ba8) form_field_slider_wide_pane_t1

0x4eed,	// (0x0003f223) form_field_slider_wide_pane_t2_ParamLimits

0x4eed,	// (0x0003f223) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x000499c2) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x000499c2) form_field_slider_wide_pane_t

0x8238,	// (0x0004256e) input_focus_pane_cp10_ParamLimits

0x8238,	// (0x0004256e) input_focus_pane_cp10

0x4eff,	// (0x0003f235) slider_cont_pane_cp1_ParamLimits

0x4eff,	// (0x0003f235) slider_cont_pane_cp1

0x4f13,	// (0x0003f249) slider_form_pane_cp

0x8884,	// (0x00042bba) input_focus_pane_g1

0x888c,	// (0x00042bc2) input_focus_pane_g2

0x8894,	// (0x00042bca) input_focus_pane_g3

0x889c,	// (0x00042bd2) input_focus_pane_g4

0x88a4,	// (0x00042bda) input_focus_pane_g5

0x88ac,	// (0x00042be2) input_focus_pane_g6

0x88b4,	// (0x00042bea) input_focus_pane_g7

0x88bc,	// (0x00042bf2) input_focus_pane_g8

0x88c4,	// (0x00042bfa) input_focus_pane_g9

0x7ed3,	// (0x00042209) input_focus_pane_g10

0x0009,

0xf691,	// (0x000499c7) input_focus_pane_g

0xa32a,	// (0x00044660) wait_border_pane_g3_copy1

0x4f1b,	// (0x0003f251) data_form_pane_t1

0x7ed3,	// (0x00042209) wait_anim_pane_g1_copy1

0x51c8,	// (0x0003f4fe) data_form_wide_pane_t1

0x4f36,	// (0x0003f26c) list_form_graphic_pane_cp_ParamLimits

0x4f36,	// (0x0003f26c) list_form_graphic_pane_cp

0xb24a,	// (0x00045580) slider_form_pane_g1

0xb253,	// (0x00045589) slider_form_pane_g2

0x0006,

0xf994,	// (0x00049cca) slider_form_pane_g

0x4f4f,	// (0x0003f285) list_form_graphic_pane_ParamLimits

0x4f4f,	// (0x0003f285) list_form_graphic_pane

0x4f6b,	// (0x0003f2a1) list_form_graphic_pane_g1

0x4f73,	// (0x0003f2a9) list_form_graphic_pane_t1_ParamLimits

0x4f73,	// (0x0003f2a9) list_form_graphic_pane_t1

0x7fbd,	// (0x000422f3) list_highlight_pane_cp5_ParamLimits

0x7fbd,	// (0x000422f3) list_highlight_pane_cp5

0x4f88,	// (0x0003f2be) find_pane_g1

0x88cc,	// (0x00042c02) input_find_pane

0x4f91,	// (0x0003f2c7) input_find_pane_g1_ParamLimits

0x4f91,	// (0x0003f2c7) input_find_pane_g1

0x4f9d,	// (0x0003f2d3) input_find_pane_t1_ParamLimits

0x4f9d,	// (0x0003f2d3) input_find_pane_t1

0x4fb2,	// (0x0003f2e8) input_find_pane_t2_ParamLimits

0x4fb2,	// (0x0003f2e8) input_find_pane_t2

0x0001,

0xf6a6,	// (0x000499dc) input_find_pane_t_ParamLimits

0xf6a6,	// (0x000499dc) input_find_pane_t

0x88d5,	// (0x00042c0b) input_focus_pane_cp5_ParamLimits

0x88d5,	// (0x00042c0b) input_focus_pane_cp5

0x88ef,	// (0x00042c25) bg_popup_window_pane_cp2_ParamLimits

0x88ef,	// (0x00042c25) bg_popup_window_pane_cp2

0x88fc,	// (0x00042c32) listscroll_menu_pane_ParamLimits

0x88fc,	// (0x00042c32) listscroll_menu_pane

0x8908,	// (0x00042c3e) popup_submenu_window_ParamLimits

0x8908,	// (0x00042c3e) popup_submenu_window

0x8934,	// (0x00042c6a) find_popup_pane_g1

0x893c,	// (0x00042c72) input_popup_find_pane_cp

0x88d5,	// (0x00042c0b) input_focus_pane_cp4_ParamLimits

0x88d5,	// (0x00042c0b) input_focus_pane_cp4

0x8952,	// (0x00042c88) input_popup_find_pane_t1_ParamLimits

0x8952,	// (0x00042c88) input_popup_find_pane_t1

0x7edd,	// (0x00042213) bg_popup_sub_pane_cp

0x8980,	// (0x00042cb6) listscroll_popup_sub_pane

0x8988,	// (0x00042cbe) list_submenu_pane_ParamLimits

0x8988,	// (0x00042cbe) list_submenu_pane

0x8999,	// (0x00042ccf) scroll_pane_cp4

0x89a1,	// (0x00042cd7) list_single_popup_submenu_pane_ParamLimits

0x89a1,	// (0x00042cd7) list_single_popup_submenu_pane

0x89b5,	// (0x00042ceb) list_single_popup_submenu_pane_g1

0x89bd,	// (0x00042cf3) list_single_popup_submenu_pane_t1_ParamLimits

0x89bd,	// (0x00042cf3) list_single_popup_submenu_pane_t1

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp1_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp1

0x89d2,	// (0x00042d08) tabs_2_active_pane_g1

0x89da,	// (0x00042d10) tabs_2_active_pane_t1

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp1_ParamLimits

0x7fbd,	// (0x000422f3) bg_passive_tab_pane_cp1

0x89d2,	// (0x00042d08) tabs_2_passive_pane_g1

0x89da,	// (0x00042d10) tabs_2_passive_pane_t1

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp4

0x89fa,	// (0x00042d30) tabs_2_long_active_pane_t1

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp4

0x605b,	// (0x00040391) list_single_midp_graphic_pane_g4_ParamLimits

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp5

0x8a19,	// (0x00042d4f) tabs_3_long_active_pane_t1

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp5

0x605b,	// (0x00040391) list_single_midp_graphic_pane_g4

0x7fbd,	// (0x000422f3) bg_popup_window_pane_cp13_ParamLimits

0x7fbd,	// (0x000422f3) bg_popup_window_pane_cp13

0x8a34,	// (0x00042d6a) listscroll_popup_fast_pane_ParamLimits

0x8a34,	// (0x00042d6a) listscroll_popup_fast_pane

0x8a43,	// (0x00042d79) grid_popup_fast_pane_ParamLimits

0x8a43,	// (0x00042d79) grid_popup_fast_pane

0x8a55,	// (0x00042d8b) scroll_pane_cp9_ParamLimits

0x8a55,	// (0x00042d8b) scroll_pane_cp9

0xcae4,	// (0x00046e1a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae4,	// (0x00046e1a) list_single_graphic_hl_pane_t1_cp2

0x8a79,	// (0x00042daf) input_focus_pane_cp20_ParamLimits

0x8a79,	// (0x00042daf) input_focus_pane_cp20

0x8a87,	// (0x00042dbd) query_popup_data_pane_t1_ParamLimits

0x8a87,	// (0x00042dbd) query_popup_data_pane_t1

0x8a9a,	// (0x00042dd0) query_popup_data_pane_t2_ParamLimits

0x8a9a,	// (0x00042dd0) query_popup_data_pane_t2

0x8ae0,	// (0x00042e16) query_popup_data_pane_t3_ParamLimits

0x8ae0,	// (0x00042e16) query_popup_data_pane_t3

0x8b21,	// (0x00042e57) query_popup_data_pane_t4_ParamLimits

0x8b21,	// (0x00042e57) query_popup_data_pane_t4

0x8b5d,	// (0x00042e93) query_popup_data_pane_t5_ParamLimits

0x8b5d,	// (0x00042e93) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x000499e1) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x000499e1) query_popup_data_pane_t

0x8884,	// (0x00042bba) bg_set_opt_pane_g1

0x888c,	// (0x00042bc2) bg_set_opt_pane_g2

0x8894,	// (0x00042bca) bg_set_opt_pane_g3

0x889c,	// (0x00042bd2) bg_set_opt_pane_g4

0x88a4,	// (0x00042bda) bg_set_opt_pane_g5

0x88ac,	// (0x00042be2) bg_set_opt_pane_g6

0x88b4,	// (0x00042bea) bg_set_opt_pane_g7

0x88bc,	// (0x00042bf2) bg_set_opt_pane_g8

0x88c4,	// (0x00042bfa) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x000499ec) bg_set_opt_pane_g

0x6067,	// (0x0004039d) control_top_pane_stacon_ParamLimits

0x6067,	// (0x0004039d) control_top_pane_stacon

0x60ba,	// (0x000403f0) signal_pane_stacon_ParamLimits

0x60ba,	// (0x000403f0) signal_pane_stacon

0x914d,	// (0x00043483) stacon_top_pane_g1_ParamLimits

0x914d,	// (0x00043483) stacon_top_pane_g1

0x60df,	// (0x00040415) title_pane_stacon_ParamLimits

0x60df,	// (0x00040415) title_pane_stacon

0x6109,	// (0x0004043f) uni_indicator_pane_stacon_ParamLimits

0x6109,	// (0x0004043f) uni_indicator_pane_stacon

0x611e,	// (0x00040454) battery_pane_stacon_ParamLimits

0x611e,	// (0x00040454) battery_pane_stacon

0x6162,	// (0x00040498) control_bottom_pane_stacon_ParamLimits

0x6162,	// (0x00040498) control_bottom_pane_stacon

0x6185,	// (0x000404bb) navi_pane_stacon_ParamLimits

0x6185,	// (0x000404bb) navi_pane_stacon

0x916f,	// (0x000434a5) stacon_bottom_pane_g1_ParamLimits

0x916f,	// (0x000434a5) stacon_bottom_pane_g1

0x5dae,	// (0x000400e4) aid_levels_signal_lsc_ParamLimits

0x5dae,	// (0x000400e4) aid_levels_signal_lsc

0x5dc4,	// (0x000400fa) signal_pane_stacon_g1_ParamLimits

0x5dc4,	// (0x000400fa) signal_pane_stacon_g1

0x5dd8,	// (0x0004010e) signal_pane_stacon_g2_ParamLimits

0x5dd8,	// (0x0004010e) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x000499ff) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000499ff) signal_pane_stacon_g

0x5e0d,	// (0x00040143) title_pane_stacon_t1_ParamLimits

0x5e0d,	// (0x00040143) title_pane_stacon_t1

0x8ba1,	// (0x00042ed7) uni_indicator_pane_stacon_g1

0x8bab,	// (0x00042ee1) uni_indicator_pane_stacon_g2

0x8bb5,	// (0x00042eeb) uni_indicator_pane_stacon_g3

0x8bbf,	// (0x00042ef5) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049a0b) uni_indicator_pane_stacon_g

0x5e32,	// (0x00040168) control_top_pane_stacon_g1

0x5e3a,	// (0x00040170) control_top_pane_stacon_t1_ParamLimits

0x5e3a,	// (0x00040170) control_top_pane_stacon_t1

0x5e71,	// (0x000401a7) aid_levels_battery_lsc_ParamLimits

0x5e71,	// (0x000401a7) aid_levels_battery_lsc

0x5e88,	// (0x000401be) battery_pane_stacon_g1_ParamLimits

0x5e88,	// (0x000401be) battery_pane_stacon_g1

0x5e9b,	// (0x000401d1) battery_pane_stacon_g2_ParamLimits

0x5e9b,	// (0x000401d1) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049a14) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049a14) battery_pane_stacon_g

0x5ed9,	// (0x0004020f) navi_icon_pane_stacon

0x5eed,	// (0x00040223) navi_navi_pane_stacon

0x5ed9,	// (0x0004020f) navi_text_pane_stacon

0x5e32,	// (0x00040168) control_bottom_pane_stacon_g1

0x5f01,	// (0x00040237) control_bottom_pane_stacon_t1_ParamLimits

0x5f01,	// (0x00040237) control_bottom_pane_stacon_t1

0x8be3,	// (0x00042f19) grid_app_pane_ParamLimits

0x8be3,	// (0x00042f19) grid_app_pane

0x8c07,	// (0x00042f3d) scroll_pane_cp15_ParamLimits

0x8c07,	// (0x00042f3d) scroll_pane_cp15

0x8c1a,	// (0x00042f50) cell_app_pane_ParamLimits

0x8c1a,	// (0x00042f50) cell_app_pane

0x8c3e,	// (0x00042f74) cell_app_pane_g1_ParamLimits

0x8c3e,	// (0x00042f74) cell_app_pane_g1

0x8c62,	// (0x00042f98) cell_app_pane_g2_ParamLimits

0x8c62,	// (0x00042f98) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049a19) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049a19) cell_app_pane_g

0x8c6e,	// (0x00042fa4) cell_app_pane_t1_ParamLimits

0x8c6e,	// (0x00042fa4) cell_app_pane_t1

0x8c85,	// (0x00042fbb) grid_highlight_pane_ParamLimits

0x8c85,	// (0x00042fbb) grid_highlight_pane

0x8884,	// (0x00042bba) cell_highlight_pane_g1

0x888c,	// (0x00042bc2) cell_highlight_pane_g2

0x8894,	// (0x00042bca) cell_highlight_pane_g3

0x889c,	// (0x00042bd2) cell_highlight_pane_g4

0x88a4,	// (0x00042bda) cell_highlight_pane_g5

0x88ac,	// (0x00042be2) cell_highlight_pane_g6

0x88b4,	// (0x00042bea) cell_highlight_pane_g7

0x88bc,	// (0x00042bf2) cell_highlight_pane_g8

0x88c4,	// (0x00042bfa) cell_highlight_pane_g9

0x7ed3,	// (0x00042209) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x000499c7) cell_highlight_pane_g

0x8c96,	// (0x00042fcc) bg_scroll_pane

0x5f4b,	// (0x00040281) scroll_handle_pane

0x8cdd,	// (0x00043013) scroll_bg_pane_g1

0x8cf2,	// (0x00043028) scroll_bg_pane_g2

0x8d0a,	// (0x00043040) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049a1e) scroll_bg_pane_g

0x8d1f,	// (0x00043055) scroll_handle_focus_pane_ParamLimits

0x8d1f,	// (0x00043055) scroll_handle_focus_pane

0x8cdd,	// (0x00043013) scroll_handle_pane_g1

0x8d2c,	// (0x00043062) scroll_handle_pane_g2

0x8d0a,	// (0x00043040) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049a25) scroll_handle_pane_g

0x88d5,	// (0x00042c0b) bg_popup_sub_pane_cp21_ParamLimits

0x88d5,	// (0x00042c0b) bg_popup_sub_pane_cp21

0x8d40,	// (0x00043076) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d40,	// (0x00043076) popup_fep_japan_predictive_window_t1

0x8d5a,	// (0x00043090) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d5a,	// (0x00043090) popup_fep_japan_predictive_window_t2

0x8d8d,	// (0x000430c3) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d8d,	// (0x000430c3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049a2c) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049a2c) popup_fep_japan_predictive_window_t

0x7edd,	// (0x00042213) bg_popup_sub_pane_cp23

0x8dc4,	// (0x000430fa) listscroll_japin_cand_pane

0x8dcc,	// (0x00043102) popup_fep_japan_candidate_window_t1

0x8dda,	// (0x00043110) candidate_pane_ParamLimits

0x8dda,	// (0x00043110) candidate_pane

0x8dec,	// (0x00043122) scroll_pane_cp30

0x8df4,	// (0x0004312a) list_single_popup_jap_candidate_pane_ParamLimits

0x8df4,	// (0x0004312a) list_single_popup_jap_candidate_pane

0x7edd,	// (0x00042213) list_highlight_pane_cp30

0x8e09,	// (0x0004313f) list_single_popup_jap_candidate_pane_t1

0x8e18,	// (0x0004314e) level_1_signal

0x8e2a,	// (0x00043160) level_2_signal

0x8e3d,	// (0x00043173) level_3_signal

0x8e50,	// (0x00043186) level_4_signal

0x8e63,	// (0x00043199) level_5_signal

0x8e76,	// (0x000431ac) level_6_signal

0x8e89,	// (0x000431bf) level_7_signal

0x8e18,	// (0x0004314e) level_1_battery

0x8e2a,	// (0x00043160) level_2_battery

0x8e3d,	// (0x00043173) level_3_battery

0x8e50,	// (0x00043186) level_4_battery

0x8e63,	// (0x00043199) level_5_battery

0x8e76,	// (0x000431ac) level_6_battery

0x8e89,	// (0x000431bf) level_7_battery

0x8eb4,	// (0x000431ea) list_menu_pane_ParamLimits

0x8eb4,	// (0x000431ea) list_menu_pane

0x8eca,	// (0x00043200) scroll_pane_cp25_ParamLimits

0x8eca,	// (0x00043200) scroll_pane_cp25

0x8ee3,	// (0x00043219) list_double2_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double2_graphic_pane_cp2

0x8ee3,	// (0x00043219) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double2_large_graphic_pane_cp2

0x8ee3,	// (0x00043219) list_double2_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double2_pane_cp2

0x8ee3,	// (0x00043219) list_double_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double_graphic_pane_cp2

0x8ee3,	// (0x00043219) list_double_large_graphic_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double_large_graphic_pane_cp2

0x8ee3,	// (0x00043219) list_double_number_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double_number_pane_cp2

0x8ee3,	// (0x00043219) list_double_pane_cp2_ParamLimits

0x8ee3,	// (0x00043219) list_double_pane_cp2

0x8f07,	// (0x0004323d) list_single_2graphic_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_2graphic_pane_cp2

0x8f07,	// (0x0004323d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_graphic_heading_pane_cp2

0x8f07,	// (0x0004323d) list_single_graphic_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_graphic_pane_cp2

0x8f07,	// (0x0004323d) list_single_heading_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_heading_pane_cp2

0x8f20,	// (0x00043256) list_single_large_graphic_pane_cp2_ParamLimits

0x8f20,	// (0x00043256) list_single_large_graphic_pane_cp2

0x8f07,	// (0x0004323d) list_single_number_heading_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_number_heading_pane_cp2

0x8f07,	// (0x0004323d) list_single_number_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_number_pane_cp2

0x8f07,	// (0x0004323d) list_single_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_pane_cp2

0x8f9c,	// (0x000432d2) bg_popup_sub_pane_cp22

0x5ffd,	// (0x00040333) popup_side_volume_key_window_g1

0x6027,	// (0x0004035d) popup_side_volume_key_window_t1

0x6043,	// (0x00040379) volume_small_pane_cp1

0x8238,	// (0x0004256e) bg_popup_sub_pane_cp24_ParamLimits

0x8238,	// (0x0004256e) bg_popup_sub_pane_cp24

0x8fb2,	// (0x000432e8) fep_china_uni_candidate_pane_ParamLimits

0x8fb2,	// (0x000432e8) fep_china_uni_candidate_pane

0x8fc6,	// (0x000432fc) fep_china_uni_entry_pane

0x8fd6,	// (0x0004330c) popup_fep_china_uni_window_g1

0x8ff2,	// (0x00043328) fep_china_uni_entry_pane_g1

0x8ffa,	// (0x00043330) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049a5d) fep_china_uni_entry_pane_g

0x9002,	// (0x00043338) fep_entry_item_pane

0x900c,	// (0x00043342) fep_candidate_item_pane

0x9014,	// (0x0004334a) fep_china_uni_candidate_pane_g1

0x901c,	// (0x00043352) fep_china_uni_candidate_pane_g2

0x9024,	// (0x0004335a) fep_china_uni_candidate_pane_g3

0x902c,	// (0x00043362) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049a62) fep_china_uni_candidate_pane_g

0x7ed3,	// (0x00042209) fep_entry_item_pane_g1

0x9034,	// (0x0004336a) fep_entry_item_pane_t1_ParamLimits

0x9034,	// (0x0004336a) fep_entry_item_pane_t1

0x904a,	// (0x00043380) fep_candidate_item_pane_t1_ParamLimits

0x904a,	// (0x00043380) fep_candidate_item_pane_t1

0x905f,	// (0x00043395) fep_candidate_item_pane_t2_ParamLimits

0x905f,	// (0x00043395) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049a6b) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049a6b) fep_candidate_item_pane_t

0x7fbd,	// (0x000422f3) list_highlight_pane_cp31_ParamLimits

0x7fbd,	// (0x000422f3) list_highlight_pane_cp31

0x9071,	// (0x000433a7) level_1_signal_lsc

0x907a,	// (0x000433b0) level_2_signal_lsc

0x9083,	// (0x000433b9) level_3_signal_lsc

0x908c,	// (0x000433c2) level_4_signal_lsc

0x9095,	// (0x000433cb) level_5_signal_lsc

0x909e,	// (0x000433d4) level_6_signal_lsc

0x90a7,	// (0x000433dd) level_7_signal_lsc

0x90a7,	// (0x000433dd) level_1_battery_lsc

0x90b0,	// (0x000433e6) level_2_battery_lsc

0x90b9,	// (0x000433ef) level_3_battery_lsc

0x90c2,	// (0x000433f8) level_4_battery_lsc

0x90cb,	// (0x00043401) level_5_battery_lsc

0x90d4,	// (0x0004340a) level_6_battery_lsc

0x9071,	// (0x000433a7) level_7_battery_lsc

0x90dd,	// (0x00043413) scroll_handle_focus_pane_g1

0x90e6,	// (0x0004341c) scroll_handle_focus_pane_g2

0x90ef,	// (0x00043425) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049a70) scroll_handle_focus_pane_g

0x4fc7,	// (0x0003f2fd) list_single_2graphic_pane_g1_ParamLimits

0x4fc7,	// (0x0003f2fd) list_single_2graphic_pane_g1

0x5d2c,	// (0x00040062) list_single_2graphic_pane_g2_ParamLimits

0x5d2c,	// (0x00040062) list_single_2graphic_pane_g2

0x5d0e,	// (0x00040044) list_single_2graphic_pane_g3_ParamLimits

0x5d0e,	// (0x00040044) list_single_2graphic_pane_g3

0x4fd3,	// (0x0003f309) list_single_2graphic_pane_g4_ParamLimits

0x4fd3,	// (0x0003f309) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049a77) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049a77) list_single_2graphic_pane_g

0x4fdf,	// (0x0003f315) list_single_2graphic_pane_t1_ParamLimits

0x4fdf,	// (0x0003f315) list_single_2graphic_pane_t1

0x604b,	// (0x00040381) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x604b,	// (0x00040381) list_double2_graphic_large_graphic_pane_g1

0x4b64,	// (0x0003ee9a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4b64,	// (0x0003ee9a) list_double2_graphic_large_graphic_pane_g2

0x5d75,	// (0x000400ab) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x5d75,	// (0x000400ab) list_double2_graphic_large_graphic_pane_g3

0x605b,	// (0x00040391) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x605b,	// (0x00040391) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049a80) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049a80) list_double2_graphic_large_graphic_pane_g

0x500d,	// (0x0003f343) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x500d,	// (0x0003f343) list_double2_graphic_large_graphic_pane_t1

0x5023,	// (0x0003f359) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x5023,	// (0x0003f359) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049a89) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049a89) list_double2_graphic_large_graphic_pane_t

0x9237,	// (0x0004356d) popup_fast_swap_window_ParamLimits

0x9237,	// (0x0004356d) popup_fast_swap_window

0x9253,	// (0x00043589) popup_side_volume_key_window

0x926f,	// (0x000435a5) stacon_top_pane

0x9279,	// (0x000435af) status_pane_ParamLimits

0x9279,	// (0x000435af) status_pane

0x9287,	// (0x000435bd) status_small_pane

0x7edd,	// (0x00042213) control_pane

0x7edd,	// (0x00042213) stacon_bottom_pane

0x881b,	// (0x00042b51) scroll_pane_cp121

0x8812,	// (0x00042b48) set_content_pane

0x90f8,	// (0x0004342e) bg_active_tab_pane_g1_cp1

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp1

0x910a,	// (0x00043440) bg_active_tab_pane_g3_cp1

0x90f8,	// (0x0004342e) bg_passive_tab_pane_g1_cp1

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp1

0x910a,	// (0x00043440) bg_passive_tab_pane_g3_cp1

0x9113,	// (0x00043449) bg_active_tab_pane_g1_cp2

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp2

0x911c,	// (0x00043452) bg_active_tab_pane_g3_cp2

0x9113,	// (0x00043449) bg_passive_tab_pane_g1_cp2

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp2

0x911c,	// (0x00043452) bg_passive_tab_pane_g3_cp2

0x9125,	// (0x0004345b) bg_active_tab_pane_g1_cp3

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp3

0x912e,	// (0x00043464) bg_active_tab_pane_g3_cp3

0x9125,	// (0x0004345b) bg_passive_tab_pane_g1_cp3

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp3

0x912e,	// (0x00043464) bg_passive_tab_pane_g3_cp3

0x9137,	// (0x0004346d) bg_active_tab_pane_g1_cp4

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp4

0x9142,	// (0x00043478) bg_active_tab_pane_g3_cp4

0x9137,	// (0x0004346d) bg_passive_tab_pane_g1_cp4

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp4

0x9142,	// (0x00043478) bg_passive_tab_pane_g3_cp4

0x918b,	// (0x000434c1) bg_active_tab_pane_g1_cp5

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp5

0x9194,	// (0x000434ca) bg_active_tab_pane_g3_cp5

0x918b,	// (0x000434c1) bg_passive_tab_pane_g1_cp5

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp5

0x9194,	// (0x000434ca) bg_passive_tab_pane_g3_cp5

0x919d,	// (0x000434d3) list_set_graphic_pane_ParamLimits

0x919d,	// (0x000434d3) list_set_graphic_pane

0x7edd,	// (0x00042213) bg_set_opt_pane_cp4

0x91ba,	// (0x000434f0) list_set_graphic_pane_g1_ParamLimits

0x91ba,	// (0x000434f0) list_set_graphic_pane_g1

0x91c6,	// (0x000434fc) list_set_graphic_pane_g2_ParamLimits

0x91c6,	// (0x000434fc) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049a8e) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049a8e) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x00049e03) volume_small_pane_cp_g

0x91ea,	// (0x00043520) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91ea,	// (0x00043520) list_double2_large_graphic_pane_g1_cp2

0x91f6,	// (0x0004352c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91f6,	// (0x0004352c) list_double2_large_graphic_pane_g2_cp2

0x9207,	// (0x0004353d) list_double2_large_graphic_pane_g3_cp2

0x920f,	// (0x00043545) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x920f,	// (0x00043545) list_double2_large_graphic_pane_t1_cp2

0x9225,	// (0x0004355b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9225,	// (0x0004355b) list_double2_large_graphic_pane_t2_cp2

0xadfd,	// (0x00045133) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadfd,	// (0x00045133) list_double_large_graphic_pane_g1_cp2

0xae0e,	// (0x00045144) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae0e,	// (0x00045144) list_double_large_graphic_pane_g2_cp2

0x93a0,	// (0x000436d6) list_double_large_graphic_pane_g3_cp2

0xae1f,	// (0x00045155) list_double_large_graphic_pane_g4_cp

0xae27,	// (0x0004515d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae27,	// (0x0004515d) list_double_large_graphic_pane_t1_cp2

0xae3e,	// (0x00045174) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae3e,	// (0x00045174) list_double_large_graphic_pane_t2_cp2

0x9292,	// (0x000435c8) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9292,	// (0x000435c8) list_double2_graphic_pane_g1_cp2

0x92a0,	// (0x000435d6) list_double2_graphic_pane_g2_cp2_ParamLimits

0x92a0,	// (0x000435d6) list_double2_graphic_pane_g2_cp2

0x92b1,	// (0x000435e7) list_double2_graphic_pane_g3_cp2

0x92bb,	// (0x000435f1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x92bb,	// (0x000435f1) list_double2_graphic_pane_t1_cp2

0x92d1,	// (0x00043607) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92d1,	// (0x00043607) list_double2_graphic_pane_t2_cp2

0x92e3,	// (0x00043619) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92e3,	// (0x00043619) list_single_number_heading_pane_g1_cp2

0x92ef,	// (0x00043625) list_single_number_heading_pane_g2_cp2

0x92f7,	// (0x0004362d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92f7,	// (0x0004362d) list_single_number_heading_pane_t1_cp2

0x930d,	// (0x00043643) list_single_number_heading_pane_t2_cp2_ParamLimits

0x930d,	// (0x00043643) list_single_number_heading_pane_t2_cp2

0x931f,	// (0x00043655) list_single_number_heading_pane_t3_cp2_ParamLimits

0x931f,	// (0x00043655) list_single_number_heading_pane_t3_cp2

0x92e3,	// (0x00043619) list_single_heading_pane_g1_cp2_ParamLimits

0x92e3,	// (0x00043619) list_single_heading_pane_g1_cp2

0x92ef,	// (0x00043625) list_single_heading_pane_g2_cp2

0x92f7,	// (0x0004362d) list_single_heading_pane_t1_cp2_ParamLimits

0x92f7,	// (0x0004362d) list_single_heading_pane_t1_cp2

0xac05,	// (0x00044f3b) list_single_heading_pane_t2_cp2_ParamLimits

0xac05,	// (0x00044f3b) list_single_heading_pane_t2_cp2

0xab4d,	// (0x00044e83) list_double_graphic_pane_g1_cp2_ParamLimits

0xab4d,	// (0x00044e83) list_double_graphic_pane_g1_cp2

0xab59,	// (0x00044e8f) list_double_graphic_pane_g2_cp2_ParamLimits

0xab59,	// (0x00044e8f) list_double_graphic_pane_g2_cp2

0xab68,	// (0x00044e9e) list_double_graphic_pane_g3_cp2

0xab70,	// (0x00044ea6) list_double_graphic_pane_t1_cp2_ParamLimits

0xab70,	// (0x00044ea6) list_double_graphic_pane_t1_cp2

0xab86,	// (0x00044ebc) list_double_graphic_pane_t2_cp2_ParamLimits

0xab86,	// (0x00044ebc) list_double_graphic_pane_t2_cp2

0x9394,	// (0x000436ca) list_double_number_pane_g1_cp2_ParamLimits

0x9394,	// (0x000436ca) list_double_number_pane_g1_cp2

0x93a0,	// (0x000436d6) list_double_number_pane_g2_cp2

0xab11,	// (0x00044e47) list_double_number_pane_t1_cp2_ParamLimits

0xab11,	// (0x00044e47) list_double_number_pane_t1_cp2

0xab25,	// (0x00044e5b) list_double_number_pane_t2_cp2_ParamLimits

0xab25,	// (0x00044e5b) list_double_number_pane_t2_cp2

0xab3b,	// (0x00044e71) list_double_number_pane_t3_cp2_ParamLimits

0xab3b,	// (0x00044e71) list_double_number_pane_t3_cp2

0xa9fa,	// (0x00044d30) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9fa,	// (0x00044d30) list_single_graphic_pane_g1_cp2

0x93f8,	// (0x0004372e) list_single_graphic_pane_g2_cp2_ParamLimits

0x93f8,	// (0x0004372e) list_single_graphic_pane_g2_cp2

0x9404,	// (0x0004373a) list_single_graphic_pane_g3_cp2

0xa9d0,	// (0x00044d06) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9d0,	// (0x00044d06) list_single_graphic_pane_t1_cp2

0x93f8,	// (0x0004372e) list_single_number_pane_g1_cp2_ParamLimits

0x93f8,	// (0x0004372e) list_single_number_pane_g1_cp2

0x9404,	// (0x0004373a) list_single_number_pane_g2_cp2

0xa9d0,	// (0x00044d06) list_single_number_pane_t1_cp2_ParamLimits

0xa9d0,	// (0x00044d06) list_single_number_pane_t1_cp2

0xa9e6,	// (0x00044d1c) list_single_number_pane_t2_cp2_ParamLimits

0xa9e6,	// (0x00044d1c) list_single_number_pane_t2_cp2

0x91f6,	// (0x0004352c) list_double2_pane_g1_cp2_ParamLimits

0x91f6,	// (0x0004352c) list_double2_pane_g1_cp2

0x9207,	// (0x0004353d) list_double2_pane_g2_cp2

0x936c,	// (0x000436a2) list_double2_pane_t1_cp2_ParamLimits

0x936c,	// (0x000436a2) list_double2_pane_t1_cp2

0x9382,	// (0x000436b8) list_double2_pane_t2_cp2_ParamLimits

0x9382,	// (0x000436b8) list_double2_pane_t2_cp2

0x9394,	// (0x000436ca) list_double_pane_g1_cp2_ParamLimits

0x9394,	// (0x000436ca) list_double_pane_g1_cp2

0x93a0,	// (0x000436d6) list_double_pane_g2_cp2

0x93a8,	// (0x000436de) list_double_pane_t1_cp2_ParamLimits

0x93a8,	// (0x000436de) list_double_pane_t1_cp2

0x93be,	// (0x000436f4) list_double_pane_t2_cp2_ParamLimits

0x93be,	// (0x000436f4) list_double_pane_t2_cp2

0x93e8,	// (0x0004371e) list_single_pane_cp2_g3

0x93f8,	// (0x0004372e) list_single_pane_g1_cp2_ParamLimits

0x93f8,	// (0x0004372e) list_single_pane_g1_cp2

0x9404,	// (0x0004373a) list_single_pane_g2_cp2

0x940c,	// (0x00043742) list_single_pane_t1_cp2_ParamLimits

0x940c,	// (0x00043742) list_single_pane_t1_cp2

0x9424,	// (0x0004375a) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9424,	// (0x0004375a) list_single_large_graphic_pane_g1_cp2

0x9430,	// (0x00043766) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9430,	// (0x00043766) list_single_large_graphic_pane_g2_cp2

0x943c,	// (0x00043772) list_single_large_graphic_pane_g3_cp2

0x9444,	// (0x0004377a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9444,	// (0x0004377a) list_single_large_graphic_pane_g4_cp1

0x945e,	// (0x00043794) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x945e,	// (0x00043794) list_single_large_graphic_pane_t1_cp2

0xa99c,	// (0x00044cd2) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa99c,	// (0x00044cd2) list_single_graphic_heading_pane_g1_cp2

0xa969,	// (0x00044c9f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa969,	// (0x00044c9f) list_single_graphic_heading_pane_g4_cp2

0x9404,	// (0x0004373a) list_single_graphic_heading_pane_g5_cp2

0xa9a8,	// (0x00044cde) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa9a8,	// (0x00044cde) list_single_graphic_heading_pane_t1_cp2

0xa9be,	// (0x00044cf4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9be,	// (0x00044cf4) list_single_graphic_heading_pane_t2_cp2

0xa95d,	// (0x00044c93) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa95d,	// (0x00044c93) list_single_2graphic_pane_g1_cp2

0xa969,	// (0x00044c9f) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa969,	// (0x00044c9f) list_single_2graphic_pane_g2_cp2

0x9404,	// (0x0004373a) list_single_2graphic_pane_g3_cp2

0xa97a,	// (0x00044cb0) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa97a,	// (0x00044cb0) list_single_2graphic_pane_g4_cp2

0xa986,	// (0x00044cbc) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa986,	// (0x00044cbc) list_single_2graphic_pane_t1_cp2

0x7ed3,	// (0x00042209) list_highlight_pane_g10_cp1

0xa535,	// (0x0004486b) list_highlight_pane_g1_cp1

0xa53d,	// (0x00044873) list_highlight_pane_g2_cp1

0xa545,	// (0x0004487b) list_highlight_pane_g3_cp1

0xa54d,	// (0x00044883) list_highlight_pane_g4_cp1

0xa555,	// (0x0004488b) list_highlight_pane_g5_cp1

0xa55d,	// (0x00044893) list_highlight_pane_g6_cp1

0xa565,	// (0x0004489b) list_highlight_pane_g7_cp1

0xa56d,	// (0x000448a3) list_highlight_pane_g8_cp1

0xa575,	// (0x000448ab) list_highlight_pane_g9_cp1

0xa455,	// (0x0004478b) form_field_slider_pane_t3

0xa463,	// (0x00044799) form_field_slider_pane_t4

0xa471,	// (0x000447a7) slider_form_pane_ParamLimits

0xa471,	// (0x000447a7) slider_form_pane

0x7edd,	// (0x00042213) control_abbreviations

0x7edd,	// (0x00042213) control_conventions

0x7edd,	// (0x00042213) control_definitions

0x7edd,	// (0x00042213) format_table_attribute

0xac4f,	// (0x00044f85) bg_popup_preview_window_pane_g9

0x7edd,	// (0x00042213) format_table_data2

0x7edd,	// (0x00042213) format_table_data3

0x7edd,	// (0x00042213) format_table_data_example

0x0008,

0x7edd,	// (0x00042213) intro_purpose

0xf8f4,	// (0x00049c2a) bg_popup_preview_window_pane_g

0x7edd,	// (0x00042213) texts_category

0x7edd,	// (0x00042213) texts_graphics

0x9474,	// (0x000437aa) text_digital

0x9483,	// (0x000437b9) text_primary

0x9492,	// (0x000437c8) text_primary_small

0x94a1,	// (0x000437d7) text_secondary

0x94b0,	// (0x000437e6) text_title

0xb334,	// (0x0004566a) bg_passive_tab_pane_g1_cp3_srt

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp3_srt

0xb33d,	// (0x00045673) bg_passive_tab_pane_g3_cp3_srt

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp3_srt_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp3_srt

0xb346,	// (0x0004567c) tabs_4_active_pane_srt_g1

0xb34e,	// (0x00045684) tabs_4_active_pane_srt_t1_ParamLimits

0xb34e,	// (0x00045684) tabs_4_active_pane_srt_t1

0xb334,	// (0x0004566a) bg_active_tab_pane_g1_cp3_copy1

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp3_copy1

0xb33d,	// (0x00045673) bg_active_tab_pane_g3_cp3_copy1

0x7fbd,	// (0x000422f3) tabs_2_long_active_pane_srt_ParamLimits

0x7fbd,	// (0x000422f3) tabs_2_long_active_pane_srt

0x7fbd,	// (0x000422f3) tabs_2_long_passive_pane_srt_ParamLimits

0x7fbd,	// (0x000422f3) tabs_2_long_passive_pane_srt

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp4_srt

0xb07d,	// (0x000453b3) bg_passive_tab_pane_g1_cp4_srt

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp4_srt

0xb086,	// (0x000453bc) bg_passive_tab_pane_g3_cp4_srt

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp4_srt_ParamLimits

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp4_srt

0xb08f,	// (0x000453c5) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb08f,	// (0x000453c5) tabs_2_long_active_pane_srt_t1

0xb07d,	// (0x000453b3) bg_active_tab_pane_g1_cp4_srt

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp4_srt

0xb086,	// (0x000453bc) bg_active_tab_pane_g3_cp4_srt

0x8238,	// (0x0004256e) tabs_3_long_active_pane_srt_ParamLimits

0x8238,	// (0x0004256e) tabs_3_long_active_pane_srt

0x8238,	// (0x0004256e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8238,	// (0x0004256e) tabs_3_long_passive_pane_cp_srt

0x8238,	// (0x0004256e) tabs_3_long_passive_pane_srt_ParamLimits

0x8238,	// (0x0004256e) tabs_3_long_passive_pane_srt

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp5_srt

0x918b,	// (0x000434c1) bg_passive_tab_pane_g1_cp5_srt

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp5_srt

0x9194,	// (0x000434ca) bg_passive_tab_pane_g3_cp5_srt

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp5_srt_ParamLimits

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp5_srt

0xb06b,	// (0x000453a1) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb06b,	// (0x000453a1) tabs_3_long_active_pane_srt_t1

0x918b,	// (0x000434c1) bg_active_tab_pane_g1_cp5_srt

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp5_srt

0x9194,	// (0x000434ca) bg_active_tab_pane_g3_cp5_srt

0xb05d,	// (0x00045393) navi_text_pane_srt_t1

0xb055,	// (0x0004538b) navi_icon_pane_srt_g1

0x9685,	// (0x000439bb) midp_editing_number_pane_srt

0x94bf,	// (0x000437f5) midp_ticker_pane_srt

0x968d,	// (0x000439c3) midp_ticker_pane_srt_g1

0x9695,	// (0x000439cb) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049aad) midp_ticker_pane_srt_g

0x969d,	// (0x000439d3) midp_ticker_pane_srt_t1

0xb046,	// (0x0004537c) midp_editing_number_pane_t1_copy1

0x94c7,	// (0x000437fd) listscroll_midp_pane

0x94c7,	// (0x000437fd) midp_form_pane

0x9537,	// (0x0004386d) midp_info_popup_window_ParamLimits

0x9537,	// (0x0004386d) midp_info_popup_window

0x88d5,	// (0x00042c0b) bg_popup_sub_pane_cp50_ParamLimits

0x88d5,	// (0x00042c0b) bg_popup_sub_pane_cp50

0xa16d,	// (0x000444a3) listscroll_midp_info_pane_ParamLimits

0xa16d,	// (0x000444a3) listscroll_midp_info_pane

0xa14d,	// (0x00044483) listscroll_form_midp_pane_ParamLimits

0xa14d,	// (0x00044483) listscroll_form_midp_pane

0xa159,	// (0x0004448f) scroll_bar_cp050

0xa12d,	// (0x00044463) list_midp_pane

0xbd77,	// (0x000460ad) signal_pane_g2_cp

0xa067,	// (0x0004439d) listscroll_midp_info_pane_t1_ParamLimits

0xa067,	// (0x0004439d) listscroll_midp_info_pane_t1

0xa07f,	// (0x000443b5) listscroll_midp_info_pane_t2_ParamLimits

0xa07f,	// (0x000443b5) listscroll_midp_info_pane_t2

0xa0bd,	// (0x000443f3) listscroll_midp_info_pane_t3_ParamLimits

0xa0bd,	// (0x000443f3) listscroll_midp_info_pane_t3

0xa0f7,	// (0x0004442d) listscroll_midp_info_pane_t4_ParamLimits

0xa0f7,	// (0x0004442d) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x00049b65) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x00049b65) listscroll_midp_info_pane_t

0x8999,	// (0x00042ccf) scroll_pane_cp21

0xa005,	// (0x0004433b) form_midp_field_choice_group_pane

0xa00e,	// (0x00044344) form_midp_field_text_pane

0xa04d,	// (0x00044383) form_midp_field_time_pane

0xa055,	// (0x0004438b) form_midp_gauge_slider_pane

0xa05e,	// (0x00044394) form_midp_gauge_wait_pane

0x7edd,	// (0x00042213) form_midp_image_pane

0x5176,	// (0x0003f4ac) list_single_midp_pane_ParamLimits

0x5176,	// (0x0003f4ac) list_single_midp_pane

0x9fb4,	// (0x000442ea) form_midp_field_text_pane_t1

0x9d87,	// (0x000440bd) input_focus_pane_cp050

0x9ff4,	// (0x0004432a) list_midp_form_text_pane

0x9f83,	// (0x000442b9) form_midp_field_choice_group_pane_t1

0x9f91,	// (0x000442c7) input_focus_pane_cp051

0x9fa5,	// (0x000442db) list_midp_choice_pane

0x7edd,	// (0x00042213) status_idle_pane

0x9f67,	// (0x0004429d) form_midp_field_time_pane_t1

0x7ed3,	// (0x00042209) wait_anim_pane_g2_copy1

0x9f75,	// (0x000442ab) form_midp_field_time_pane_t2

0x0001,

0x95e5,	// (0x0004391b) aid_navinavi_width_2_pane

0xf82a,	// (0x00049b60) form_midp_field_time_pane_t

0x7edd,	// (0x00042213) input_focus_pane_cp052

0x7edd,	// (0x00042213) bg_input_focus_pane_cp040

0x9f27,	// (0x0004425d) form_midp_gauge_slider_pane_t1

0x9f35,	// (0x0004426b) form_midp_gauge_slider_pane_t2

0x9f43,	// (0x00044279) form_midp_gauge_slider_pane_t3

0x9f51,	// (0x00044287) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x00049b57) form_midp_gauge_slider_pane_t

0x9f5f,	// (0x00044295) form_midp_slider_pane

0x7fbd,	// (0x000422f3) bg_input_focus_pane_cp041_ParamLimits

0x7fbd,	// (0x000422f3) bg_input_focus_pane_cp041

0x9ef4,	// (0x0004422a) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ef4,	// (0x0004422a) form_midp_gauge_wait_pane_t1

0x9f06,	// (0x0004423c) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f06,	// (0x0004423c) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x00049b52) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x00049b52) form_midp_gauge_wait_pane_t

0x9f18,	// (0x0004424e) form_midp_wait_pane_ParamLimits

0x9f18,	// (0x0004424e) form_midp_wait_pane

0x9ebe,	// (0x000441f4) form_midp_image_pane_g1

0x9ec7,	// (0x000441fd) form_midp_image_pane_t1

0x9ed6,	// (0x0004420c) form_midp_image_pane_t2

0x9ee5,	// (0x0004421b) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x00049b4b) form_midp_image_pane_t

0x9eb5,	// (0x000441eb) list_single_midp_pane_g1

0x5167,	// (0x0003f49d) list_single_midp_pane_t1

0x9e90,	// (0x000441c6) list_midp_form_item_pane_ParamLimits

0x9e90,	// (0x000441c6) list_midp_form_item_pane

0x958d,	// (0x000438c3) list_midp_form_item_pane_t1

0x959c,	// (0x000438d2) midp_ticker_pane_g1

0x95a8,	// (0x000438de) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049a93) midp_ticker_pane_g

0x95b4,	// (0x000438ea) midp_ticker_pane_t1

0xb297,	// (0x000455cd) midp_editing_number_pane_t1

0xb275,	// (0x000455ab) midp_editing_number_pane

0xb284,	// (0x000455ba) midp_ticker_pane

0xb036,	// (0x0004536c) ai_message_heading_pane

0x7edd,	// (0x00042213) bg_popup_window_pane_cp14

0xb03e,	// (0x00045374) listscroll_ai_message_pane

0xafc0,	// (0x000452f6) ai_message_heading_pane_g1_ParamLimits

0xafc0,	// (0x000452f6) ai_message_heading_pane_g1

0xafcc,	// (0x00045302) ai_message_heading_pane_g2_ParamLimits

0xafcc,	// (0x00045302) ai_message_heading_pane_g2

0xafd8,	// (0x0004530e) ai_message_heading_pane_g3_ParamLimits

0xafd8,	// (0x0004530e) ai_message_heading_pane_g3

0xafe4,	// (0x0004531a) ai_message_heading_pane_g4_ParamLimits

0xafe4,	// (0x0004531a) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x00049c8c) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x00049c8c) ai_message_heading_pane_g

0xaff0,	// (0x00045326) ai_message_heading_pane_t1_ParamLimits

0xaff0,	// (0x00045326) ai_message_heading_pane_t1

0xb00a,	// (0x00045340) ai_message_heading_pane_t2_ParamLimits

0xb00a,	// (0x00045340) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x00049c95) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x00049c95) ai_message_heading_pane_t

0xb01c,	// (0x00045352) bg_popup_heading_pane_cp1_ParamLimits

0xb01c,	// (0x00045352) bg_popup_heading_pane_cp1

0xafae,	// (0x000452e4) list_ai_message_pane_ParamLimits

0xafae,	// (0x000452e4) list_ai_message_pane

0x8999,	// (0x00042ccf) scroll_pane_cp10

0xaf4a,	// (0x00045280) list_ai_message_pane_g1

0xaf52,	// (0x00045288) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x00049c69) list_ai_message_pane_g

0xaf5a,	// (0x00045290) list_ai_message_pane_t1_ParamLimits

0xaf5a,	// (0x00045290) list_ai_message_pane_t1

0xaf6f,	// (0x000452a5) list_ai_message_pane_t2_ParamLimits

0xaf6f,	// (0x000452a5) list_ai_message_pane_t2

0xaf84,	// (0x000452ba) list_ai_message_pane_t3_ParamLimits

0xaf84,	// (0x000452ba) list_ai_message_pane_t3

0xaf99,	// (0x000452cf) list_ai_message_pane_t4_ParamLimits

0xaf99,	// (0x000452cf) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x00049c6e) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x00049c6e) list_ai_message_pane_t

0xaf35,	// (0x0004526b) cell_ai_soft_ind_pane_ParamLimits

0xaf35,	// (0x0004526b) cell_ai_soft_ind_pane

0x95c6,	// (0x000438fc) cell_ai_soft_ind_pane_g1_ParamLimits

0x95c6,	// (0x000438fc) cell_ai_soft_ind_pane_g1

0x7edd,	// (0x00042213) grid_highlight_cp1

0x95d3,	// (0x00043909) text_secondary_cp56_ParamLimits

0x95d3,	// (0x00043909) text_secondary_cp56

0xaf0a,	// (0x00045240) example_general_pane_ParamLimits

0xaf0a,	// (0x00045240) example_general_pane

0xaf16,	// (0x0004524c) example_parent_pane_g1_ParamLimits

0xaf16,	// (0x0004524c) example_parent_pane_g1

0xaf22,	// (0x00045258) example_parent_pane_t1_ParamLimits

0xaf22,	// (0x00045258) example_parent_pane_t1

0x6758,	// (0x00040a8e) popup_preview_text_window_ParamLimits

0x6758,	// (0x00040a8e) popup_preview_text_window

0x93f0,	// (0x00043726) list_single_pane_cp2_g4

0x82ee,	// (0x00042624) bg_popup_preview_window_pane_ParamLimits

0x82ee,	// (0x00042624) bg_popup_preview_window_pane

0xac57,	// (0x00044f8d) popup_preview_text_window_t1_ParamLimits

0xac57,	// (0x00044f8d) popup_preview_text_window_t1

0xac75,	// (0x00044fab) popup_preview_text_window_t2_ParamLimits

0xac75,	// (0x00044fab) popup_preview_text_window_t2

0xacbe,	// (0x00044ff4) popup_preview_text_window_t3_ParamLimits

0xacbe,	// (0x00044ff4) popup_preview_text_window_t3

0xad03,	// (0x00045039) popup_preview_text_window_t4_ParamLimits

0xad03,	// (0x00045039) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x00049c3d) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x00049c3d) popup_preview_text_window_t

0xad81,	// (0x000450b7) scroll_pane_cp11

0x9d13,	// (0x00044049) bg_popup_preview_window_pane_g1

0xac17,	// (0x00044f4d) bg_popup_preview_window_pane_g2

0xac1f,	// (0x00044f55) bg_popup_preview_window_pane_g3

0xac27,	// (0x00044f5d) bg_popup_preview_window_pane_g4

0xac2f,	// (0x00044f65) bg_popup_preview_window_pane_g5

0xac37,	// (0x00044f6d) bg_popup_preview_window_pane_g6

0xac3f,	// (0x00044f75) bg_popup_preview_window_pane_g7

0xac47,	// (0x00044f7d) bg_popup_preview_window_pane_g8

0x588e,	// (0x0003fbc4) aid_popup_width_pane

0x6736,	// (0x00040a6c) popup_midp_note_alarm_window_ParamLimits

0x6736,	// (0x00040a6c) popup_midp_note_alarm_window

0x882c,	// (0x00042b62) data_form_pane_ParamLimits

0x4e10,	// (0x0003f146) form_field_data_pane_g1

0x4e1a,	// (0x0003f150) form_field_data_pane_t1_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_ParamLimits

0x4e32,	// (0x0003f168) data_form_wide_pane_ParamLimits

0x4e43,	// (0x0003f179) form_field_data_wide_pane_g1

0x4e4f,	// (0x0003f185) form_field_data_wide_pane_t1_ParamLimits

0x859d,	// (0x000428d3) input_focus_pane_cp6_ParamLimits

0x8946,	// (0x00042c7c) input_popup_find_pane_g1_ParamLimits

0x8946,	// (0x00042c7c) input_popup_find_pane_g1

0x5eac,	// (0x000401e2) aid_navi_side_left_pane

0x5ec1,	// (0x000401f7) aid_navi_side_right_pane

0xa630,	// (0x00044966) bg_popup_window_pane_cp30_ParamLimits

0xa630,	// (0x00044966) bg_popup_window_pane_cp30

0xa6aa,	// (0x000449e0) popup_midp_note_alarm_window_g1_ParamLimits

0xa6aa,	// (0x000449e0) popup_midp_note_alarm_window_g1

0xa6da,	// (0x00044a10) popup_midp_note_alarm_window_t1_ParamLimits

0xa6da,	// (0x00044a10) popup_midp_note_alarm_window_t1

0xa77b,	// (0x00044ab1) popup_midp_note_alarm_window_t2_ParamLimits

0xa77b,	// (0x00044ab1) popup_midp_note_alarm_window_t2

0xa829,	// (0x00044b5f) popup_midp_note_alarm_window_t3_ParamLimits

0xa829,	// (0x00044b5f) popup_midp_note_alarm_window_t3

0xa85b,	// (0x00044b91) popup_midp_note_alarm_window_t4_ParamLimits

0xa85b,	// (0x00044b91) popup_midp_note_alarm_window_t4

0xa881,	// (0x00044bb7) popup_midp_note_alarm_window_t5_ParamLimits

0xa881,	// (0x00044bb7) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x00049bda) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x00049bda) popup_midp_note_alarm_window_t

0xa92d,	// (0x00044c63) wait_bar_pane_cp1_ParamLimits

0xa92d,	// (0x00044c63) wait_bar_pane_cp1

0x7edd,	// (0x00042213) wait_anim_pane_copy1

0x7edd,	// (0x00042213) wait_border_pane_copy1

0xa316,	// (0x0004464c) wait_border_pane_g1_copy1

0x4e69,	// (0x0003f19f) form_field_popup_pane_g1

0x4e71,	// (0x0003f1a7) form_field_popup_pane_t1_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_cp7_ParamLimits

0x885a,	// (0x00042b90) list_form_pane_ParamLimits

0x4e89,	// (0x0003f1bf) form_field_popup_wide_pane_g1

0x4e91,	// (0x0003f1c7) form_field_popup_wide_pane_t1_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_cp8_ParamLimits

0x8866,	// (0x00042b9c) list_form_wide_pane_ParamLimits

0xb3c8,	// (0x000456fe) aid_size_cell_graphic_pane

0x4f1b,	// (0x0003f251) data_form_pane_t1_ParamLimits

0x51c8,	// (0x0003f4fe) data_form_wide_pane_t1_ParamLimits

0x98e0,	// (0x00043c16) bg_status_flat_pane

0x7f1d,	// (0x00042253) title_pane_t1_ParamLimits

0x7f85,	// (0x000422bb) title_pane_t2_ParamLimits

0x7fab,	// (0x000422e1) title_pane_t3_ParamLimits

0xf557,	// (0x0004988d) title_pane_t_ParamLimits

0x8e18,	// (0x0004314e) level_1_signal_ParamLimits

0x8e2a,	// (0x00043160) level_2_signal_ParamLimits

0x8e3d,	// (0x00043173) level_3_signal_ParamLimits

0x8e50,	// (0x00043186) level_4_signal_ParamLimits

0x8e63,	// (0x00043199) level_5_signal_ParamLimits

0x8e76,	// (0x000431ac) level_6_signal_ParamLimits

0x8e89,	// (0x000431bf) level_7_signal_ParamLimits

0x8e18,	// (0x0004314e) level_1_battery_ParamLimits

0x8e2a,	// (0x00043160) level_2_battery_ParamLimits

0x8e3d,	// (0x00043173) level_3_battery_ParamLimits

0x8e50,	// (0x00043186) level_4_battery_ParamLimits

0x8e63,	// (0x00043199) level_5_battery_ParamLimits

0x8e76,	// (0x000431ac) level_6_battery_ParamLimits

0x8e89,	// (0x000431bf) level_7_battery_ParamLimits

0xa535,	// (0x0004486b) bg_status_flat_pane_g1

0xa53d,	// (0x00044873) bg_status_flat_pane_g2

0xa545,	// (0x0004487b) bg_status_flat_pane_g3

0xa54d,	// (0x00044883) bg_status_flat_pane_g4

0xa555,	// (0x0004488b) bg_status_flat_pane_g5

0xa55d,	// (0x00044893) bg_status_flat_pane_g6

0xa565,	// (0x0004489b) bg_status_flat_pane_g7

0x7fd3,	// (0x00042309) tabs_3_active_pane_t1_ParamLimits

0x7fd3,	// (0x00042309) tabs_3_passive_pane_t1_ParamLimits

0x7fed,	// (0x00042323) tabs_4_active_pane_t1_ParamLimits

0x7fed,	// (0x00042323) tabs_4_1_passive_pane_t1_ParamLimits

0x89da,	// (0x00042d10) tabs_2_active_pane_t1_ParamLimits

0x89da,	// (0x00042d10) tabs_2_passive_pane_t1_ParamLimits

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp4_ParamLimits

0x89fa,	// (0x00042d30) tabs_2_long_active_pane_t1_ParamLimits

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp4_ParamLimits

0x6a05,	// (0x00040d3b) list_single_midp_graphic_pane_t1_ParamLimits

0x89ec,	// (0x00042d22) bg_active_tab_pane_cp5_ParamLimits

0x8a19,	// (0x00042d4f) tabs_3_long_active_pane_t1_ParamLimits

0x8a0d,	// (0x00042d43) bg_passive_tab_pane_cp5_ParamLimits

0x6a05,	// (0x00040d3b) list_single_midp_graphic_pane_t1

0x98e0,	// (0x00043c16) bg_status_flat_pane_ParamLimits

0x99a3,	// (0x00043cd9) indicator_pane_cp2_ParamLimits

0x99a3,	// (0x00043cd9) indicator_pane_cp2

0x9ace,	// (0x00043e04) navi_pane_srt_ParamLimits

0x9ace,	// (0x00043e04) navi_pane_srt

0x9af2,	// (0x00043e28) popup_clock_digital_analogue_window_cp1

0x809a,	// (0x000423d0) indicator_pane_t1

0x94bf,	// (0x000437f5) copy_highlight_pane

0x94bf,	// (0x000437f5) cursor_graphics_pane

0x94bf,	// (0x000437f5) graphic_within_text_pane

0x94bf,	// (0x000437f5) link_highlight_pane

0xad44,	// (0x0004507a) popup_preview_text_window_t5_ParamLimits

0xad44,	// (0x0004507a) popup_preview_text_window_t5

0x95ed,	// (0x00043923) cursor_digital_pane

0x95ed,	// (0x00043923) cursor_primary_pane

0x95fe,	// (0x00043934) cursor_primary_small_pane

0x9606,	// (0x0004393c) cursor_secondary_pane

0x960e,	// (0x00043944) cursor_title_pane

0x95ed,	// (0x00043923) link_highlight_digital_pane

0x95f5,	// (0x0004392b) link_highlight_primary_pane

0x95fe,	// (0x00043934) link_highlight_primary_small_pane

0x9606,	// (0x0004393c) link_highlight_secondary_pane

0x960e,	// (0x00043944) link_highlight_title_pane

0x95ed,	// (0x00043923) copy_highlight_digital_pane

0x95ed,	// (0x00043923) copy_highlight_primary_pane

0x95fe,	// (0x00043934) copy_highlight_primary_small_pane

0x9606,	// (0x0004393c) copy_highlight_secondary_pane

0x960e,	// (0x00043944) copy_highlight_title_pane

0x9606,	// (0x0004393c) graphic_text_digital_pane

0xa5d3,	// (0x00044909) graphic_text_primary_pane

0xa5dc,	// (0x00044912) graphic_text_primary_small_pane

0x95fe,	// (0x00043934) graphic_text_secondary_pane

0x95ed,	// (0x00043923) graphic_text_title_pane

0x9616,	// (0x0004394c) cursor_primary_pane_g1

0xa5c5,	// (0x000448fb) cursor_text_primary_t1

0xa5ad,	// (0x000448e3) cursor_primary_small_pane_g1

0xa5b7,	// (0x000448ed) cursor_text_primary_small_t1

0xa595,	// (0x000448cb) cursor_primary_small_pane_g1_copy1

0xa59f,	// (0x000448d5) cursor_text_primary_small_t1_copy1

0xa57d,	// (0x000448b3) cursor_text_title_t1

0xa58b,	// (0x000448c1) cursor_title_pane_g1

0x9616,	// (0x0004394c) cursor_digital_pane_g1

0x9620,	// (0x00043956) cursor_text_digital_t1

0x9645,	// (0x0004397b) link_highlight_primary_pane_g1

0xa526,	// (0x0004485c) link_highlight_primary_pane_t1

0x962e,	// (0x00043964) link_highlight_primary_small_pane_g1

0x9636,	// (0x0004396c) link_highlight_primary_small_pane_t1

0x9645,	// (0x0004397b) link_highlight_secondary_pane_g1

0x964d,	// (0x00043983) link_highlight_secondary_pane_t1

0xa49a,	// (0x000447d0) link_highlight_title_pane_g1

0xa4a2,	// (0x000447d8) link_highlight_title_pane_t1

0xa483,	// (0x000447b9) link_highlight_digital_pane_g1

0xa48b,	// (0x000447c1) link_highlight_digital_pane_t1

0xa35b,	// (0x00044691) copy_highlight_primary_pane_g1

0xa363,	// (0x00044699) copy_highlight_primary_pane_t1

0xa335,	// (0x0004466b) copy_highlight_primary_small_pane_g1

0xa34c,	// (0x00044682) copy_highlight_primary_small_pane_t1

0x965c,	// (0x00043992) copy_highlight_secondary_pane_g1

0x9664,	// (0x0004399a) copy_highlight_secondary_pane_t1

0xa335,	// (0x0004466b) copy_highlight_title_pane_g1

0xa33d,	// (0x00044673) copy_highlight_title_pane_t1

0xa35b,	// (0x00044691) copy_highlight_digital_pane_g1

0xb596,	// (0x000458cc) copy_highlight_digital_pane_t1

0xb4ea,	// (0x00045820) graphic_text_primary_pane_g1

0xb57a,	// (0x000458b0) graphic_text_primary_pane_t1

0xb588,	// (0x000458be) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x00049d09) graphic_text_primary_pane_t

0xb556,	// (0x0004588c) graphic_text_primary_small_pane_g1

0xb55e,	// (0x00045894) graphic_text_primary_small_pane_t1

0xb56c,	// (0x000458a2) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x00049d04) graphic_text_primary_small_pane_t

0xb532,	// (0x00045868) graphic_text_secondary_pane_g1

0xb53a,	// (0x00045870) graphic_text_secondary_pane_t1

0xb548,	// (0x0004587e) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x00049cff) graphic_text_secondary_pane_t

0xb50e,	// (0x00045844) graphic_text_title_pane_g1

0xb516,	// (0x0004584c) graphic_text_title_pane_t1

0xb524,	// (0x0004585a) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x00049cfa) graphic_text_title_pane_t

0xb4ea,	// (0x00045820) graphic_text_digital_pane_g1

0xb4f2,	// (0x00045828) graphic_text_digital_pane_t1

0xb500,	// (0x00045836) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x00049cf5) graphic_text_digital_pane_t

0x7fbd,	// (0x000422f3) navi_icon_pane_srt_ParamLimits

0x7fbd,	// (0x000422f3) navi_icon_pane_srt

0x7edd,	// (0x00042213) navi_midp_pane_srt

0x7edd,	// (0x00042213) navi_navi_pane_srt

0x7fbd,	// (0x000422f3) navi_text_pane_srt_ParamLimits

0x7fbd,	// (0x000422f3) navi_text_pane_srt

0xb4b5,	// (0x000457eb) navi_navi_icon_text_pane_srt

0xb4bd,	// (0x000457f3) navi_navi_pane_srt_g1_ParamLimits

0xb4bd,	// (0x000457f3) navi_navi_pane_srt_g1

0xb4cf,	// (0x00045805) navi_navi_pane_srt_g2_ParamLimits

0xb4cf,	// (0x00045805) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x00049cf0) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x00049cf0) navi_navi_pane_srt_g

0xb4e1,	// (0x00045817) navi_navi_tabs_pane_srt

0xb4b5,	// (0x000457eb) navi_navi_text_pane_srt

0xb4b5,	// (0x000457eb) navi_navi_volume_pane_srt

0xb4a6,	// (0x000457dc) navi_navi_text_pane_srt_t1

0x6e2d,	// (0x00041163) navi_navi_volume_pane_srt_g1

0x6e35,	// (0x0004116b) volume_small_pane_srt_ParamLimits

0x6e35,	// (0x0004116b) volume_small_pane_srt

0x61a8,	// (0x000404de) volume_small_pane_srt_g1_ParamLimits

0x61a8,	// (0x000404de) volume_small_pane_srt_g1

0x61b8,	// (0x000404ee) volume_small_pane_srt_g2_ParamLimits

0x61b8,	// (0x000404ee) volume_small_pane_srt_g2

0x61c9,	// (0x000404ff) volume_small_pane_srt_g3_ParamLimits

0x61c9,	// (0x000404ff) volume_small_pane_srt_g3

0x61da,	// (0x00040510) volume_small_pane_srt_g4_ParamLimits

0x61da,	// (0x00040510) volume_small_pane_srt_g4

0x61eb,	// (0x00040521) volume_small_pane_srt_g5_ParamLimits

0x61eb,	// (0x00040521) volume_small_pane_srt_g5

0x61fc,	// (0x00040532) volume_small_pane_srt_g6_ParamLimits

0x61fc,	// (0x00040532) volume_small_pane_srt_g6

0x620d,	// (0x00040543) volume_small_pane_srt_g7_ParamLimits

0x620d,	// (0x00040543) volume_small_pane_srt_g7

0x621e,	// (0x00040554) volume_small_pane_srt_g8_ParamLimits

0x621e,	// (0x00040554) volume_small_pane_srt_g8

0x622f,	// (0x00040565) volume_small_pane_srt_g9_ParamLimits

0x622f,	// (0x00040565) volume_small_pane_srt_g9

0x6240,	// (0x00040576) volume_small_pane_srt_g10_ParamLimits

0x6240,	// (0x00040576) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049a98) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049a98) volume_small_pane_srt_g

0x8397,	// (0x000426cd) query_popup_data_pane_cp2

0xb48c,	// (0x000457c2) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb48c,	// (0x000457c2) navi_navi_icon_text_pane_srt_t1

0xa5d3,	// (0x00044909) navi_tabs_2_long_pane_srt

0xa5d3,	// (0x00044909) navi_tabs_2_pane_srt

0xa5d3,	// (0x00044909) navi_tabs_3_long_pane_srt

0xa5d3,	// (0x00044909) navi_tabs_3_pane_srt

0xa5d3,	// (0x00044909) navi_tabs_4_pane_srt

0x6e0d,	// (0x00041143) tabs_2_active_pane_srt_ParamLimits

0x6e0d,	// (0x00041143) tabs_2_active_pane_srt

0x6e1d,	// (0x00041153) tabs_2_passive_pane_srt_ParamLimits

0x6e1d,	// (0x00041153) tabs_2_passive_pane_srt

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp1_srt

0xb458,	// (0x0004578e) bg_passive_tab_pane_g1_cp1_srt

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp1_srt

0xb461,	// (0x00045797) bg_passive_tab_pane_g3_cp1_srt

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp1_srt_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp1_srt

0xb46a,	// (0x000457a0) tabs_2_active_pane_srt_g1

0xb472,	// (0x000457a8) tabs_2_active_pane_srt_t1_ParamLimits

0xb472,	// (0x000457a8) tabs_2_active_pane_srt_t1

0xb458,	// (0x0004578e) bg_active_tab_pane_g1_cp1_srt

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp1_srt

0xb461,	// (0x00045797) bg_active_tab_pane_g3_cp1_srt

0x6dda,	// (0x00041110) tabs_3_active_pane_srt_ParamLimits

0x6dda,	// (0x00041110) tabs_3_active_pane_srt

0x6deb,	// (0x00041121) tabs_3_passive_pane_cp_srt_ParamLimits

0x6deb,	// (0x00041121) tabs_3_passive_pane_cp_srt

0x6dfc,	// (0x00041132) tabs_3_passive_pane_srt_ParamLimits

0x6dfc,	// (0x00041132) tabs_3_passive_pane_srt

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9809,	// (0x00043b3f) bg_passive_tab_pane_cp2_srt

0x9673,	// (0x000439a9) bg_passive_tab_pane_g1_cp2_srt

0x9101,	// (0x00043437) bg_passive_tab_pane_g2_cp2_srt

0x967c,	// (0x000439b2) bg_passive_tab_pane_g3_cp2_srt

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp2_srt_ParamLimits

0x7fbd,	// (0x000422f3) bg_active_tab_pane_cp2_srt

0xb43e,	// (0x00045774) tabs_3_active_pane_srt_g1

0xb446,	// (0x0004577c) tabs_3_active_pane_srt_t1_ParamLimits

0xb446,	// (0x0004577c) tabs_3_active_pane_srt_t1

0x9673,	// (0x000439a9) bg_active_tab_pane_g1_cp2_srt

0x9101,	// (0x00043437) bg_active_tab_pane_g2_cp2_srt

0x967c,	// (0x000439b2) bg_active_tab_pane_g3_cp2_srt

0x6d92,	// (0x000410c8) tabs_4_active_pane_srt_ParamLimits

0x6d92,	// (0x000410c8) tabs_4_active_pane_srt

0x6da4,	// (0x000410da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6da4,	// (0x000410da) tabs_4_passive_pane_cp2_srt

0x63af,	// (0x000406e5) aid_size_cell_toolbar

0x8a0d,	// (0x00042d43) main_idle_act_pane_ParamLimits

0x656c,	// (0x000408a2) popup_large_graphic_colour_window_ParamLimits

0x68d3,	// (0x00040c09) popup_toolbar_window_ParamLimits

0x68d3,	// (0x00040c09) popup_toolbar_window

0xb2a6,	// (0x000455dc) list_single_graphic_2heading_pane_ParamLimits

0xb2a6,	// (0x000455dc) list_single_graphic_2heading_pane

0x8bc9,	// (0x00042eff) aid_size_cell_apps_grid_lsc_pane

0x8bdb,	// (0x00042f11) aid_size_cell_apps_grid_prt_pane

0x9809,	// (0x00043b3f) bg_wml_button_pane_cp1_ParamLimits

0x9809,	// (0x00043b3f) bg_wml_button_pane_cp1

0x9fb4,	// (0x000442ea) form_midp_field_text_pane_t1_ParamLimits

0x9d87,	// (0x000440bd) input_focus_pane_cp050_ParamLimits

0x9ff4,	// (0x0004432a) list_midp_form_text_pane_ParamLimits

0x9f91,	// (0x000442c7) input_focus_pane_cp051_ParamLimits

0x9fa5,	// (0x000442db) list_midp_choice_pane_ParamLimits

0x9e40,	// (0x00044176) list_single_2graphic_pane_cp3_ParamLimits

0x9e40,	// (0x00044176) list_single_2graphic_pane_cp3

0x9e61,	// (0x00044197) list_single_midp_graphic_pane_ParamLimits

0x9e61,	// (0x00044197) list_single_midp_graphic_pane

0x5045,	// (0x0003f37b) list_single_graphic_2heading_pane_g1_ParamLimits

0x5045,	// (0x0003f37b) list_single_graphic_2heading_pane_g1

0x5051,	// (0x0003f387) list_single_graphic_2heading_pane_g4_ParamLimits

0x5051,	// (0x0003f387) list_single_graphic_2heading_pane_g4

0x505d,	// (0x0003f393) list_single_graphic_2heading_pane_g5_ParamLimits

0x505d,	// (0x0003f393) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049aeb) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049aeb) list_single_graphic_2heading_pane_g

0x5069,	// (0x0003f39f) list_single_graphic_2heading_pane_t1_ParamLimits

0x5069,	// (0x0003f39f) list_single_graphic_2heading_pane_t1

0x507d,	// (0x0003f3b3) list_single_graphic_2heading_pane_t2_ParamLimits

0x507d,	// (0x0003f3b3) list_single_graphic_2heading_pane_t2

0x5099,	// (0x0003f3cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x5099,	// (0x0003f3cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049af2) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049af2) list_single_graphic_2heading_pane_t

0x9c51,	// (0x00043f87) bg_popup_sub_pane_cp2

0x9c7b,	// (0x00043fb1) grid_toobar_pane

0x6980,	// (0x00040cb6) cell_toolbar_pane_ParamLimits

0x6980,	// (0x00040cb6) cell_toolbar_pane

0x9cb7,	// (0x00043fed) cell_toolbar_pane_g1_ParamLimits

0x9cb7,	// (0x00043fed) cell_toolbar_pane_g1

0x9ccb,	// (0x00044001) cell_toolbar_pane_g2_ParamLimits

0x9ccb,	// (0x00044001) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x00049b00) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x00049b00) cell_toolbar_pane_g

0x9ced,	// (0x00044023) grid_highlight_pane_cp2_ParamLimits

0x9ced,	// (0x00044023) grid_highlight_pane_cp2

0x9d07,	// (0x0004403d) toolbar_button_pane

0x9d13,	// (0x00044049) toolbar_button_pane_g1

0x9d1b,	// (0x00044051) toolbar_button_pane_g2

0x9d23,	// (0x00044059) toolbar_button_pane_g3

0x9d2b,	// (0x00044061) toolbar_button_pane_g4

0x9d33,	// (0x00044069) toolbar_button_pane_g5

0x9d3b,	// (0x00044071) toolbar_button_pane_g6

0x9d43,	// (0x00044079) toolbar_button_pane_g7

0x9d4b,	// (0x00044081) toolbar_button_pane_g8

0x9d53,	// (0x00044089) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x00049b05) toolbar_button_pane_g

0x69c4,	// (0x00040cfa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x69c4,	// (0x00040cfa) list_single_2graphic_pane_g1_cp3

0x69d0,	// (0x00040d06) list_single_2graphic_pane_g2_cp3_ParamLimits

0x69d0,	// (0x00040d06) list_single_2graphic_pane_g2_cp3

0x69e1,	// (0x00040d17) list_single_2graphic_pane_g3_cp3

0x605b,	// (0x00040391) list_single_2graphic_pane_g4_cp3_ParamLimits

0x605b,	// (0x00040391) list_single_2graphic_pane_g4_cp3

0x69e9,	// (0x00040d1f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x69e9,	// (0x00040d1f) list_single_2graphic_pane_t1_cp3

0x9fe8,	// (0x0004431e) list_single_midp_graphic_pane_g2_ParamLimits

0x9fe8,	// (0x0004431e) list_single_midp_graphic_pane_g2

0x5035,	// (0x0003f36b) aid_zoom_text_primary

0x63b7,	// (0x000406ed) aid_zoom_text_secondary

0x972d,	// (0x00043a63) status_small_pane_g7_ParamLimits

0x972d,	// (0x00043a63) status_small_pane_g7

0x9750,	// (0x00043a86) status_small_pane_t1_ParamLimits

0x7ef4,	// (0x0004222a) title_pane_g2

0x0003,

0xf54e,	// (0x00049884) title_pane_g

0x843b,	// (0x00042771) aid_size_cell_colour_1_pane_ParamLimits

0x843b,	// (0x00042771) aid_size_cell_colour_1_pane

0x844f,	// (0x00042785) aid_size_cell_colour_2_pane_ParamLimits

0x844f,	// (0x00042785) aid_size_cell_colour_2_pane

0x8463,	// (0x00042799) aid_size_cell_colour_3_pane_ParamLimits

0x8463,	// (0x00042799) aid_size_cell_colour_3_pane

0x8477,	// (0x000427ad) aid_size_cell_colour_4_pane_ParamLimits

0x8477,	// (0x000427ad) aid_size_cell_colour_4_pane

0x5de9,	// (0x0004011f) title_pane_stacon_g1_ParamLimits

0x5de9,	// (0x0004011f) title_pane_stacon_g1

0xa3ba,	// (0x000446f0) popup_note_wait_window_g3_ParamLimits

0xa3ba,	// (0x000446f0) popup_note_wait_window_g3

0xa430,	// (0x00044766) popup_note_wait_window_t5_ParamLimits

0xa430,	// (0x00044766) popup_note_wait_window_t5

0x7edd,	// (0x00042213) main_feb_china_hwr_fs_writing_pane

0x644f,	// (0x00040785) popup_feb_china_hwr_fs_window_ParamLimits

0x644f,	// (0x00040785) popup_feb_china_hwr_fs_window

0x6a33,	// (0x00040d69) aid_size_cell_hwr_fs_ParamLimits

0x6a33,	// (0x00040d69) aid_size_cell_hwr_fs

0x9d87,	// (0x000440bd) bg_popup_sub_pane_cp3_ParamLimits

0x9d87,	// (0x000440bd) bg_popup_sub_pane_cp3

0x6a48,	// (0x00040d7e) grid_hwr_fs_pane_ParamLimits

0x6a48,	// (0x00040d7e) grid_hwr_fs_pane

0x6a60,	// (0x00040d96) linegrid_hwr_fs_pane_ParamLimits

0x6a60,	// (0x00040d96) linegrid_hwr_fs_pane

0x6a70,	// (0x00040da6) cell_hwr_fs_pane_ParamLimits

0x6a70,	// (0x00040da6) cell_hwr_fs_pane

0x9d93,	// (0x000440c9) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d93,	// (0x000440c9) linegrid_hwr_fs_pane_g1

0x9d9f,	// (0x000440d5) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d9f,	// (0x000440d5) linegrid_hwr_fs_pane_g2

0x9db1,	// (0x000440e7) linegrid_hwr_fs_pane_g3_ParamLimits

0x9db1,	// (0x000440e7) linegrid_hwr_fs_pane_g3

0x6a92,	// (0x00040dc8) linegrid_hwr_fs_pane_g4_ParamLimits

0x6a92,	// (0x00040dc8) linegrid_hwr_fs_pane_g4

0x6aac,	// (0x00040de2) linegrid_hwr_fs_pane_g5_ParamLimits

0x6aac,	// (0x00040de2) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x00049b30) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x00049b30) linegrid_hwr_fs_pane_g

0x9dbd,	// (0x000440f3) cell_hwr_fs_pane_g1_ParamLimits

0x9dbd,	// (0x000440f3) cell_hwr_fs_pane_g1

0x9b88,	// (0x00043ebe) cell_hwr_fs_pane_g2_ParamLimits

0x9b88,	// (0x00043ebe) cell_hwr_fs_pane_g2

0x9dd3,	// (0x00044109) cell_hwr_fs_pane_g3_ParamLimits

0x9dd3,	// (0x00044109) cell_hwr_fs_pane_g3

0x9de0,	// (0x00044116) cell_hwr_fs_pane_g4_ParamLimits

0x9de0,	// (0x00044116) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x00049b3b) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x00049b3b) cell_hwr_fs_pane_g

0x6ac2,	// (0x00040df8) cell_hwr_fs_pane_t1

0x7edd,	// (0x00042213) grid_highlight_pane_cp6

0x7edd,	// (0x00042213) main_idle_act2_pane

0x8980,	// (0x00042cb6) aid_inside_area_popup_secondary

0xaa67,	// (0x00044d9d) aid_inside_area_window_primary_ParamLimits

0xaa67,	// (0x00044d9d) aid_inside_area_window_primary

0xb5a5,	// (0x000458db) ai2_news_ticker_pane

0xb5ad,	// (0x000458e3) aid_size_cell_ai1_link_ParamLimits

0xb5ad,	// (0x000458e3) aid_size_cell_ai1_link

0xb5c7,	// (0x000458fd) popup_ai2_data_window_ParamLimits

0xb5c7,	// (0x000458fd) popup_ai2_data_window

0xb5dd,	// (0x00045913) popup_ai2_link_window_ParamLimits

0xb5dd,	// (0x00045913) popup_ai2_link_window

0x9d87,	// (0x000440bd) bg_popup_sub_pane_cp4_ParamLimits

0x9d87,	// (0x000440bd) bg_popup_sub_pane_cp4

0xb5f1,	// (0x00045927) grid_ai2_link_pane_ParamLimits

0xb5f1,	// (0x00045927) grid_ai2_link_pane

0xb608,	// (0x0004593e) popup_ai2_link_window_g1_ParamLimits

0xb608,	// (0x0004593e) popup_ai2_link_window_g1

0xb614,	// (0x0004594a) popup_ai2_link_window_g2_ParamLimits

0xb614,	// (0x0004594a) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x00049d0e) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x00049d0e) popup_ai2_link_window_g

0xb623,	// (0x00045959) ai2_mp_button_pane

0xb62b,	// (0x00045961) ai2_mp_volume_pane

0x9f91,	// (0x000442c7) bg_popup_sub_pane_cp5_ParamLimits

0x9f91,	// (0x000442c7) bg_popup_sub_pane_cp5

0xb633,	// (0x00045969) heading_ai2_gene_pane_ParamLimits

0xb633,	// (0x00045969) heading_ai2_gene_pane

0xb63f,	// (0x00045975) list_ai2_gene_pane_ParamLimits

0xb63f,	// (0x00045975) list_ai2_gene_pane

0xb687,	// (0x000459bd) cell_ai2_link_pane_ParamLimits

0xb687,	// (0x000459bd) cell_ai2_link_pane

0xb69d,	// (0x000459d3) cell_ai2_link_pane_g1

0x7edd,	// (0x00042213) grid_highlight_pane_cp7

0x6e4a,	// (0x00041180) ai2_mp_volume_pane_g1

0xb76d,	// (0x00045aa3) ai2_mp_volume_pane_g2

0xb6e2,	// (0x00045a18) list_ai2_gene_pane_t1

0xb775,	// (0x00045aab) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x00049d27) ai2_mp_volume_pane_g

0x6e52,	// (0x00041188) volume_small_pane_cp3

0xb77d,	// (0x00045ab3) aid_size_cell_ai2_button

0xb785,	// (0x00045abb) grid_ai2_button_pane

0xb78e,	// (0x00045ac4) cell_ai2_button_pane_ParamLimits

0xb78e,	// (0x00045ac4) cell_ai2_button_pane

0x7ed3,	// (0x00042209) cell_ai2_button_pane_g1

0x7edd,	// (0x00042213) grid_highlight_pane_cp8

0xb72d,	// (0x00045a63) ai2_gene_pane_t1_ParamLimits

0xb72d,	// (0x00045a63) ai2_gene_pane_t1

0x63a5,	// (0x000406db) aid_height_parent_landscape

0xb0dd,	// (0x00045413) aid_height_set_list

0xb0ee,	// (0x00045424) aid_size_parent

0xb3c8,	// (0x000456fe) aid_size_cell_graphic_pane_ParamLimits

0xb64f,	// (0x00045985) popup_ai2_data_window_g1_ParamLimits

0xb64f,	// (0x00045985) popup_ai2_data_window_g1

0xb65b,	// (0x00045991) ai2_news_ticker_pane_g1

0xb663,	// (0x00045999) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x00049d13) ai2_news_ticker_pane_g

0xb66b,	// (0x000459a1) ai2_news_ticker_pane_t1

0xb679,	// (0x000459af) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x00049d18) ai2_news_ticker_pane_t

0xb6a6,	// (0x000459dc) heading_ai2_gene_pane_g1

0xb6ae,	// (0x000459e4) heading_ai2_gene_pane_t1_ParamLimits

0xb6ae,	// (0x000459e4) heading_ai2_gene_pane_t1

0xb6c3,	// (0x000459f9) list_highlight_pane_cp6

0xb6cb,	// (0x00045a01) ai2_gene_pane_ParamLimits

0xb6cb,	// (0x00045a01) ai2_gene_pane

0xb6f0,	// (0x00045a26) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x00049d1d) list_ai2_gene_pane_t

0xb6fe,	// (0x00045a34) list_highlight_pane_cp8_ParamLimits

0xb6fe,	// (0x00045a34) list_highlight_pane_cp8

0xb70f,	// (0x00045a45) ai2_gene_pane_g1_ParamLimits

0xb70f,	// (0x00045a45) ai2_gene_pane_g1

0xb721,	// (0x00045a57) ai2_gene_pane_g2_ParamLimits

0xb721,	// (0x00045a57) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x00049d22) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x00049d22) ai2_gene_pane_g

0x87c2,	// (0x00042af8) scroll_pane_cp12

0x6362,	// (0x00040698) control_pane_t3_ParamLimits

0x6362,	// (0x00040698) control_pane_t3

0x9741,	// (0x00043a77) status_small_pane_g8_ParamLimits

0x9741,	// (0x00043a77) status_small_pane_g8

0x6535,	// (0x0004086b) popup_find_window_ParamLimits

0x674a,	// (0x00040a80) popup_note_image_window_ParamLimits

0x50b1,	// (0x0003f3e7) list_double2_graphic_pane_vc_g1_ParamLimits

0x50b1,	// (0x0003f3e7) list_double2_graphic_pane_vc_g1

0x93f8,	// (0x0004372e) list_double2_graphic_pane_vc_g2_ParamLimits

0x93f8,	// (0x0004372e) list_double2_graphic_pane_vc_g2

0x69b0,	// (0x00040ce6) list_double2_graphic_pane_vc_g3_ParamLimits

0x69b0,	// (0x00040ce6) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049af9) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049af9) list_double2_graphic_pane_vc_g

0x50bd,	// (0x0003f3f3) list_double2_graphic_pane_vc_t1_ParamLimits

0x50bd,	// (0x0003f3f3) list_double2_graphic_pane_vc_t1

0x93f8,	// (0x0004372e) list_single_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_single_heading_pane_vc_g1

0x69b0,	// (0x00040ce6) list_single_heading_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_single_heading_pane_vc_g

0x50d3,	// (0x0003f409) list_single_heading_pane_vc_t1_ParamLimits

0x50d3,	// (0x0003f409) list_single_heading_pane_vc_t1

0x50e9,	// (0x0003f41f) list_single_heading_pane_vc_t2_ParamLimits

0x50e9,	// (0x0003f41f) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x00049b1f) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x00049b1f) list_single_heading_pane_vc_t

0x6a1b,	// (0x00040d51) list_setting_number_pane_vc_g1_ParamLimits

0x6a1b,	// (0x00040d51) list_setting_number_pane_vc_g1

0x6a27,	// (0x00040d5d) list_setting_number_pane_vc_g2_ParamLimits

0x6a27,	// (0x00040d5d) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049b24) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049b24) list_setting_number_pane_vc_g

0x50fb,	// (0x0003f431) list_setting_number_pane_vc_t1_ParamLimits

0x50fb,	// (0x0003f431) list_setting_number_pane_vc_t1

0x510f,	// (0x0003f445) list_setting_number_pane_vc_t2_ParamLimits

0x510f,	// (0x0003f445) list_setting_number_pane_vc_t2

0x512b,	// (0x0003f461) list_setting_number_pane_vc_t3_ParamLimits

0x512b,	// (0x0003f461) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x00049b29) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x00049b29) list_setting_number_pane_vc_t

0x5157,	// (0x0003f48d) set_value_pane_vc_ParamLimits

0x5157,	// (0x0003f48d) set_value_pane_vc

0xb2a6,	// (0x000455dc) list_double2_graphic_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double2_graphic_pane_vc

0x520e,	// (0x0003f544) list_double2_large_graphic_pane_vc_ParamLimits

0x520e,	// (0x0003f544) list_double2_large_graphic_pane_vc

0xb2a6,	// (0x000455dc) list_double2_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double2_pane_vc

0xb2a6,	// (0x000455dc) list_double_graphic_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_graphic_heading_pane_vc

0xb2a6,	// (0x000455dc) list_double_graphic_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_graphic_pane_vc

0xb2a6,	// (0x000455dc) list_double_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_heading_pane_vc

0x521f,	// (0x0003f555) list_double_large_graphic_pane_vc_ParamLimits

0x521f,	// (0x0003f555) list_double_large_graphic_pane_vc

0xb2a6,	// (0x000455dc) list_double_number_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_number_pane_vc

0xb2a6,	// (0x000455dc) list_double_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_pane_vc

0xb2a6,	// (0x000455dc) list_double_time_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_double_time_pane_vc

0xb2a6,	// (0x000455dc) list_setting_number_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_setting_number_pane_vc

0xb2a6,	// (0x000455dc) list_setting_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_setting_pane_vc

0xb2a6,	// (0x000455dc) list_single_graphic_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_single_graphic_heading_pane_vc

0xb2a6,	// (0x000455dc) list_single_heading_pane_vc_ParamLimits

0xb2a6,	// (0x000455dc) list_single_heading_pane_vc

0x6d17,	// (0x0004104d) list_single_number_heading_pane_vc_ParamLimits

0x6d17,	// (0x0004104d) list_single_number_heading_pane_vc

0x50b1,	// (0x0003f3e7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x50b1,	// (0x0003f3e7) list_double_graphic_heading_pane_vc_g1

0x93f8,	// (0x0004372e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93f8,	// (0x0004372e) list_double_graphic_heading_pane_vc_g2

0x69b0,	// (0x00040ce6) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x69b0,	// (0x00040ce6) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x00049af9) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049af9) list_double_graphic_heading_pane_vc_g

0x526e,	// (0x0003f5a4) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x526e,	// (0x0003f5a4) list_double_graphic_heading_pane_vc_t1

0x528a,	// (0x0003f5c0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x528a,	// (0x0003f5c0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x00049d2e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x00049d2e) list_double_graphic_heading_pane_vc_t

0x6a1b,	// (0x00040d51) list_setting_pane_vc_g1_ParamLimits

0x6a1b,	// (0x00040d51) list_setting_pane_vc_g1

0x6a27,	// (0x00040d5d) list_setting_pane_vc_g2_ParamLimits

0x6a27,	// (0x00040d5d) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x00049b24) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x00049b24) list_setting_pane_vc_g

0x52a8,	// (0x0003f5de) list_setting_pane_vc_t1_ParamLimits

0x52a8,	// (0x0003f5de) list_setting_pane_vc_t1

0x52c4,	// (0x0003f5fa) list_setting_pane_vc_t2_ParamLimits

0x52c4,	// (0x0003f5fa) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x00049d5c) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x00049d5c) list_setting_pane_vc_t

0x5157,	// (0x0003f48d) set_value_pane_cp_vc_ParamLimits

0x5157,	// (0x0003f48d) set_value_pane_cp_vc

0x93f8,	// (0x0004372e) list_single_number_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_single_number_heading_pane_vc_g1

0x69b0,	// (0x00040ce6) list_single_number_heading_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_single_number_heading_pane_vc_g

0x52e0,	// (0x0003f616) list_single_number_heading_pane_vc_t1_ParamLimits

0x52e0,	// (0x0003f616) list_single_number_heading_pane_vc_t1

0x52f6,	// (0x0003f62c) list_single_number_heading_pane_vc_t2_ParamLimits

0x52f6,	// (0x0003f62c) list_single_number_heading_pane_vc_t2

0x5308,	// (0x0003f63e) list_single_number_heading_pane_vc_t3_ParamLimits

0x5308,	// (0x0003f63e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x00049d61) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x00049d61) list_single_number_heading_pane_vc_t

0x50b1,	// (0x0003f3e7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x50b1,	// (0x0003f3e7) list_single_graphic_heading_pane_vc_g1

0x93f8,	// (0x0004372e) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93f8,	// (0x0004372e) list_single_graphic_heading_pane_vc_g4

0x69b0,	// (0x00040ce6) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x69b0,	// (0x00040ce6) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x00049af9) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x00049af9) list_single_graphic_heading_pane_vc_g

0x52e0,	// (0x0003f616) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x52e0,	// (0x0003f616) list_single_graphic_heading_pane_vc_t1

0x531a,	// (0x0003f650) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x531a,	// (0x0003f650) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x00049d68) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x00049d68) list_single_graphic_heading_pane_vc_t

0x93f8,	// (0x0004372e) list_double2_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_double2_pane_vc_g1

0x69b0,	// (0x00040ce6) list_double2_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_double2_pane_vc_g

0x532c,	// (0x0003f662) list_double2_pane_vc_t1_ParamLimits

0x532c,	// (0x0003f662) list_double2_pane_vc_t1

0x5342,	// (0x0003f678) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5342,	// (0x0003f678) list_double2_large_graphic_pane_vc_g1

0x534e,	// (0x0003f684) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x534e,	// (0x0003f684) list_double2_large_graphic_pane_vc_g2

0x535a,	// (0x0003f690) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x535a,	// (0x0003f690) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x00049d6d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x00049d6d) list_double2_large_graphic_pane_vc_g

0x5366,	// (0x0003f69c) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5366,	// (0x0003f69c) list_double2_large_graphic_pane_vc_t1

0x6e5b,	// (0x00041191) list_double_time_pane_vc_g1_ParamLimits

0x6e5b,	// (0x00041191) list_double_time_pane_vc_g1

0x6e67,	// (0x0004119d) list_double_time_pane_vc_g2_ParamLimits

0x6e67,	// (0x0004119d) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x00049d74) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x00049d74) list_double_time_pane_vc_g

0x537c,	// (0x0003f6b2) list_double_time_pane_vc_t1_ParamLimits

0x537c,	// (0x0003f6b2) list_double_time_pane_vc_t1

0x53a0,	// (0x0003f6d6) list_double_time_pane_vc_t2_ParamLimits

0x53a0,	// (0x0003f6d6) list_double_time_pane_vc_t2

0x53ef,	// (0x0003f725) list_double_time_pane_vc_t3_ParamLimits

0x53ef,	// (0x0003f725) list_double_time_pane_vc_t3

0x5401,	// (0x0003f737) list_double_time_pane_vc_t4_ParamLimits

0x5401,	// (0x0003f737) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x00049d79) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x00049d79) list_double_time_pane_vc_t

0x93f8,	// (0x0004372e) list_double_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_double_pane_vc_g1

0x69b0,	// (0x00040ce6) list_double_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_double_pane_vc_g

0x5415,	// (0x0003f74b) list_double_pane_vc_t1_ParamLimits

0x5415,	// (0x0003f74b) list_double_pane_vc_t1

0x5429,	// (0x0003f75f) list_double_pane_vc_t2_ParamLimits

0x5429,	// (0x0003f75f) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x00049d82) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x00049d82) list_double_pane_vc_t

0x93f8,	// (0x0004372e) list_double_number_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_double_number_pane_vc_g1

0x69b0,	// (0x00040ce6) list_double_number_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_double_number_pane_vc_g

0x5441,	// (0x0003f777) list_double_number_pane_vc_t1_ParamLimits

0x5441,	// (0x0003f777) list_double_number_pane_vc_t1

0x5453,	// (0x0003f789) list_double_number_pane_vc_t2_ParamLimits

0x5453,	// (0x0003f789) list_double_number_pane_vc_t2

0x5467,	// (0x0003f79d) list_double_number_pane_vc_t3_ParamLimits

0x5467,	// (0x0003f79d) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x00049d87) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x00049d87) list_double_number_pane_vc_t

0x547f,	// (0x0003f7b5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x547f,	// (0x0003f7b5) list_double_large_graphic_pane_vc_g1

0x54a1,	// (0x0003f7d7) list_double_large_graphic_pane_vc_g2_ParamLimits

0x54a1,	// (0x0003f7d7) list_double_large_graphic_pane_vc_g2

0x54b5,	// (0x0003f7eb) list_double_large_graphic_pane_vc_g3_ParamLimits

0x54b5,	// (0x0003f7eb) list_double_large_graphic_pane_vc_g3

0x54c4,	// (0x0003f7fa) list_double_large_graphic_pane_vc_g4_ParamLimits

0x54c4,	// (0x0003f7fa) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x00049d8e) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x00049d8e) list_double_large_graphic_pane_vc_g

0x54d0,	// (0x0003f806) list_double_large_graphic_pane_vc_t1_ParamLimits

0x54d0,	// (0x0003f806) list_double_large_graphic_pane_vc_t1

0x54ec,	// (0x0003f822) list_double_large_graphic_pane_vc_t2_ParamLimits

0x54ec,	// (0x0003f822) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x00049d97) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x00049d97) list_double_large_graphic_pane_vc_t

0x93f8,	// (0x0004372e) list_double_heading_pane_vc_g1_ParamLimits

0x93f8,	// (0x0004372e) list_double_heading_pane_vc_g1

0x69b0,	// (0x00040ce6) list_double_heading_pane_vc_g2_ParamLimits

0x69b0,	// (0x00040ce6) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x00049b1a) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x00049b1a) list_double_heading_pane_vc_g

0x550e,	// (0x0003f844) list_double_heading_pane_vc_t1_ParamLimits

0x550e,	// (0x0003f844) list_double_heading_pane_vc_t1

0x5522,	// (0x0003f858) list_double_heading_pane_vc_t2_ParamLimits

0x5522,	// (0x0003f858) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x00049d9c) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x00049d9c) list_double_heading_pane_vc_t

0x553a,	// (0x0003f870) list_double_graphic_pane_vc_g1_ParamLimits

0x553a,	// (0x0003f870) list_double_graphic_pane_vc_g1

0x6e73,	// (0x000411a9) list_double_graphic_pane_vc_g2_ParamLimits

0x6e73,	// (0x000411a9) list_double_graphic_pane_vc_g2

0x93f8,	// (0x0004372e) list_double_graphic_pane_vc_g3_ParamLimits

0x93f8,	// (0x0004372e) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x00049da1) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x00049da1) list_double_graphic_pane_vc_g

0x5546,	// (0x0003f87c) list_double_graphic_pane_vc_t1_ParamLimits

0x5546,	// (0x0003f87c) list_double_graphic_pane_vc_t1

0x5570,	// (0x0003f8a6) list_double_graphic_pane_vc_t2_ParamLimits

0x5570,	// (0x0003f8a6) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x00049daa) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x00049daa) list_double_graphic_pane_vc_t

0x589a,	// (0x0003fbd0) aid_size_cell_fastswap

0x58a2,	// (0x0003fbd8) aid_size_cell_touch_ParamLimits

0x58a2,	// (0x0003fbd8) aid_size_cell_touch

0x5afd,	// (0x0003fe33) popup_fast_swap_wide_window_ParamLimits

0x5afd,	// (0x0003fe33) popup_fast_swap_wide_window

0x5c11,	// (0x0003ff47) touch_pane_ParamLimits

0x5c11,	// (0x0003ff47) touch_pane

0x8824,	// (0x00042b5a) button_value_adjust_pane_cp2

0x4d5c,	// (0x0003f092) button_value_adjust_pane_cp4

0x4d80,	// (0x0003f0b6) form_field_data_pane_cp2

0x4da1,	// (0x0003f0d7) form_field_data_wide_pane_cp2

0x8c96,	// (0x00042fcc) bg_scroll_pane_ParamLimits

0x5f4b,	// (0x00040281) scroll_handle_pane_ParamLimits

0x5f5f,	// (0x00040295) scroll_sc2_down_pane_ParamLimits

0x5f5f,	// (0x00040295) scroll_sc2_down_pane

0x8cc7,	// (0x00042ffd) scroll_sc2_up_pane_ParamLimits

0x8cc7,	// (0x00042ffd) scroll_sc2_up_pane

0xbe4c,	// (0x00046182) grid_wheel_folder_pane_g1_ParamLimits

0xbe4c,	// (0x00046182) grid_wheel_folder_pane_g1

0x6140,	// (0x00040476) clock_nsta_pane_cp2_ParamLimits

0x6140,	// (0x00040476) clock_nsta_pane_cp2

0x94c7,	// (0x000437fd) listscroll_midp_pane_ParamLimits

0x94d3,	// (0x00043809) midp_canvas_pane

0x97bb,	// (0x00043af1) nsta_clock_indic_pane

0x97ef,	// (0x00043b25) listscroll_form_pane_vc

0x97f7,	// (0x00043b2d) listscroll_set_pane_vc_ParamLimits

0x97f7,	// (0x00043b2d) listscroll_set_pane_vc

0x98fc,	// (0x00043c32) clock_nsta_pane

0x9971,	// (0x00043ca7) indicator_nsta_pane

0x9c51,	// (0x00043f87) bg_popup_sub_pane_cp2_ParamLimits

0x9c65,	// (0x00043f9b) find_pane_cp2_ParamLimits

0x9c65,	// (0x00043f9b) find_pane_cp2

0x9c7b,	// (0x00043fb1) grid_toobar_pane_ParamLimits

0x9d5b,	// (0x00044091) list_form_gen_pane_vc_ParamLimits

0x9d5b,	// (0x00044091) list_form_gen_pane_vc

0x9d71,	// (0x000440a7) scroll_pane_cp8_vc_ParamLimits

0x9d71,	// (0x000440a7) scroll_pane_cp8_vc

0x9ded,	// (0x00044123) data_form_wide_pane_vc_ParamLimits

0x9ded,	// (0x00044123) data_form_wide_pane_vc

0x9df9,	// (0x0004412f) form_field_data_wide_pane_vc_g1

0x9e01,	// (0x00044137) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e01,	// (0x00044137) form_field_data_wide_pane_vc_t1

0x8838,	// (0x00042b6e) input_focus_pane_cp6_vc_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_cp6_vc

0xa12d,	// (0x00044463) list_midp_pane_ParamLimits

0xa139,	// (0x0004446f) scroll_pane_cp16_ParamLimits

0xa139,	// (0x0004446f) scroll_pane_cp16

0xa18f,	// (0x000444c5) button_value_adjust_pane_ParamLimits

0xa18f,	// (0x000444c5) button_value_adjust_pane

0xb100,	// (0x00045436) button_value_adjust_pane_cp6_ParamLimits

0xb100,	// (0x00045436) button_value_adjust_pane_cp6

0xb22a,	// (0x00045560) settings_code_pane_cp_ParamLimits

0xb22a,	// (0x00045560) settings_code_pane_cp

0x7ed3,	// (0x00042209) cell_touch_pane_g1

0x7ed3,	// (0x00042209) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049a3e) cell_touch_pane_g

0xb7a0,	// (0x00045ad6) cell_touch_pane_cp_ParamLimits

0xb7a0,	// (0x00045ad6) cell_touch_pane_cp

0xb7b0,	// (0x00045ae6) cell_touch_pane_ParamLimits

0xb7b0,	// (0x00045ae6) cell_touch_pane

0x7ed3,	// (0x00042209) scroll_sc2_down_pane_g1

0x7ed3,	// (0x00042209) scroll_sc2_up_pane_g1

0x7edd,	// (0x00042213) bg_set_opt_pane_cp4_vc

0xb7c2,	// (0x00045af8) list_set_graphic_pane_vc_g1_ParamLimits

0xb7c2,	// (0x00045af8) list_set_graphic_pane_vc_g1

0xb7ce,	// (0x00045b04) list_set_graphic_pane_vc_g2_ParamLimits

0xb7ce,	// (0x00045b04) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x00049d33) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x00049d33) list_set_graphic_pane_vc_g

0xb7da,	// (0x00045b10) text_primary_small_cp13_vc_ParamLimits

0xb7da,	// (0x00045b10) text_primary_small_cp13_vc

0xb7f2,	// (0x00045b28) list_set_graphic_pane_vc_ParamLimits

0xb7f2,	// (0x00045b28) list_set_graphic_pane_vc

0x7edd,	// (0x00042213) input_focus_pane_cp2_vc

0x7ed3,	// (0x00042209) setting_code_pane_vc_g1

0x8008,	// (0x0004233e) setting_code_pane_vc_t1

0xb804,	// (0x00045b3a) set_text_pane_vc_t1_ParamLimits

0xb804,	// (0x00045b3a) set_text_pane_vc_t1

0x7edd,	// (0x00042213) input_focus_pane_cp1_vc

0xb820,	// (0x00045b56) list_set_text_pane_vc

0x7ed3,	// (0x00042209) setting_text_pane_vc_g1

0x7edd,	// (0x00042213) bg_set_opt_pane_cp2_vc

0x7fff,	// (0x00042335) setting_slider_graphic_pane_vc_g1

0xb82a,	// (0x00045b60) setting_slider_graphic_pane_vc_t1

0xb83a,	// (0x00045b70) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x00049d38) setting_slider_graphic_pane_vc_t

0xb84a,	// (0x00045b80) slider_set_pane_cp_vc

0xb852,	// (0x00045b88) slider_set_pane_vc_g1

0xb85b,	// (0x00045b91) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x00049d3d) slider_set_pane_vc_g

0x8884,	// (0x00042bba) set_opt_bg_pane_g1_copy1

0x888c,	// (0x00042bc2) set_opt_bg_pane_g2_copy1

0xb887,	// (0x00045bbd) set_opt_bg_pane_g3_copy1

0x889c,	// (0x00042bd2) set_opt_bg_pane_g4_copy1

0x88a4,	// (0x00042bda) set_opt_bg_pane_g5_copy1

0x88ac,	// (0x00042be2) set_opt_bg_pane_g6_copy1

0xb891,	// (0x00045bc7) set_opt_bg_pane_g7_copy1

0xb899,	// (0x00045bcf) set_opt_bg_pane_g8_copy1

0xb8a3,	// (0x00045bd9) set_opt_bg_pane_g9_copy1

0x7edd,	// (0x00042213) bg_set_opt_pane_cp_vc

0xb8ad,	// (0x00045be3) setting_slider_pane_vc_t1

0xb8bc,	// (0x00045bf2) setting_slider_pane_vc_t2

0xb8cc,	// (0x00045c02) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x00049d4c) setting_slider_pane_vc_t

0xb8dc,	// (0x00045c12) slider_set_pane_vc

0x6ad0,	// (0x00040e06) volume_set_pane_vc_g1

0x6ad9,	// (0x00040e0f) volume_set_pane_vc_g2

0x6ae2,	// (0x00040e18) volume_set_pane_vc_g3

0x6aeb,	// (0x00040e21) volume_set_pane_vc_g4

0x6af4,	// (0x00040e2a) volume_set_pane_vc_g5

0x6afd,	// (0x00040e33) volume_set_pane_vc_g6

0x6b06,	// (0x00040e3c) volume_set_pane_vc_g7

0x6b0f,	// (0x00040e45) volume_set_pane_vc_g8

0x6b18,	// (0x00040e4e) volume_set_pane_vc_g9

0x6b21,	// (0x00040e57) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x00049bf1) volume_set_pane_vc_g

0xb8e4,	// (0x00045c1a) volume_set_pane_vc

0xb8ec,	// (0x00045c22) button_value_adjust_pane_cp1_vc

0xb8f6,	// (0x00045c2c) list_highlight_pane_cp2_vc

0xb8ff,	// (0x00045c35) list_set_pane_vc_ParamLimits

0xb8ff,	// (0x00045c35) list_set_pane_vc

0xb95d,	// (0x00045c93) main_pane_set_vc_t1_ParamLimits

0xb95d,	// (0x00045c93) main_pane_set_vc_t1

0xb972,	// (0x00045ca8) main_pane_set_vc_t2_ParamLimits

0xb972,	// (0x00045ca8) main_pane_set_vc_t2

0xb984,	// (0x00045cba) main_pane_set_vc_t3_ParamLimits

0xb984,	// (0x00045cba) main_pane_set_vc_t3

0xb998,	// (0x00045cce) main_pane_set_vc_t4_ParamLimits

0xb998,	// (0x00045cce) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x00049d53) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x00049d53) main_pane_set_vc_t

0xb9ac,	// (0x00045ce2) setting_code_pane_vc_ParamLimits

0xb9ac,	// (0x00045ce2) setting_code_pane_vc

0xb9bd,	// (0x00045cf3) setting_slider_graphic_pane_vc

0xb9bd,	// (0x00045cf3) setting_slider_pane_vc

0xb9bd,	// (0x00045cf3) setting_text_pane_vc

0xb9bd,	// (0x00045cf3) setting_volume_pane_vc

0xb9c7,	// (0x00045cfd) scroll_pane_cp121_vc

0x8812,	// (0x00042b48) set_content_pane_vc

0xb9cf,	// (0x00045d05) button_value_adjust_pane_g1

0xb9d8,	// (0x00045d0e) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x00049daf) button_value_adjust_pane_g

0xb9e1,	// (0x00045d17) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9e1,	// (0x00045d17) form_field_slider_wide_pane_vc_t1

0xb9f5,	// (0x00045d2b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00045d2b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x00049db4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x00049db4) form_field_slider_wide_pane_vc_t

0x8238,	// (0x0004256e) input_focus_pane_cp10_vc_ParamLimits

0x8238,	// (0x0004256e) input_focus_pane_cp10_vc

0xba23,	// (0x00045d59) slider_cont_pane_cp1_vc_ParamLimits

0xba23,	// (0x00045d59) slider_cont_pane_cp1_vc

0xba35,	// (0x00045d6b) slider_form_pane_g1_cp2

0xb85b,	// (0x00045b91) slider_form_pane_g2_cp2

0xba62,	// (0x00045d98) form_field_slider_pane_vc_t3

0xba70,	// (0x00045da6) form_field_slider_pane_vc_t4

0xba7e,	// (0x00045db4) slider_form_pane_vc_ParamLimits

0xba7e,	// (0x00045db4) slider_form_pane_vc

0xba8b,	// (0x00045dc1) form_field_slider_pane_vc_t1_ParamLimits

0xba8b,	// (0x00045dc1) form_field_slider_pane_vc_t1

0xb9f5,	// (0x00045d2b) form_field_slider_pane_vc_t2_ParamLimits

0xb9f5,	// (0x00045d2b) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x00049dc6) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x00049dc6) form_field_slider_pane_vc_t

0x8238,	// (0x0004256e) input_focus_pane_cp9_vc_ParamLimits

0x8238,	// (0x0004256e) input_focus_pane_cp9_vc

0xbaa7,	// (0x00045ddd) slider_cont_pane_vc_ParamLimits

0xbaa7,	// (0x00045ddd) slider_cont_pane_vc

0xbabb,	// (0x00045df1) list_form_graphic_pane_cp_vc_ParamLimits

0xbabb,	// (0x00045df1) list_form_graphic_pane_cp_vc

0x9df9,	// (0x0004412f) form_field_popup_wide_pane_vc_g1

0xbad0,	// (0x00045e06) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbad0,	// (0x00045e06) form_field_popup_wide_pane_vc_t1

0x8838,	// (0x00042b6e) input_focus_pane_cp8_vc_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_cp8_vc

0xbb15,	// (0x00045e4b) list_form_wide_pane_vc_ParamLimits

0xbb15,	// (0x00045e4b) list_form_wide_pane_vc

0xbb21,	// (0x00045e57) list_form_graphic_pane_vc_g1

0xbb29,	// (0x00045e5f) list_form_graphic_pane_vc_t1_ParamLimits

0xbb29,	// (0x00045e5f) list_form_graphic_pane_vc_t1

0x7fbd,	// (0x000422f3) list_highlight_pane_cp5_vc_ParamLimits

0x7fbd,	// (0x000422f3) list_highlight_pane_cp5_vc

0xbb45,	// (0x00045e7b) list_form_graphic_pane_vc_ParamLimits

0xbb45,	// (0x00045e7b) list_form_graphic_pane_vc

0x9df9,	// (0x0004412f) form_field_popup_pane_vc_g1

0xbb5b,	// (0x00045e91) form_field_popup_pane_vc_t1_ParamLimits

0xbb5b,	// (0x00045e91) form_field_popup_pane_vc_t1

0x8838,	// (0x00042b6e) input_focus_pane_cp7_vc_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_cp7_vc

0xbb72,	// (0x00045ea8) list_form_pane_vc_ParamLimits

0xbb72,	// (0x00045ea8) list_form_pane_vc

0xbb7e,	// (0x00045eb4) data_form_pane_vc_t1_ParamLimits

0xbb7e,	// (0x00045eb4) data_form_pane_vc_t1

0x8884,	// (0x00042bba) input_focus_pane_vc_g1

0x888c,	// (0x00042bc2) input_focus_pane_vc_g2

0x8894,	// (0x00042bca) input_focus_pane_vc_g3

0x889c,	// (0x00042bd2) input_focus_pane_vc_g4

0x88a4,	// (0x00042bda) input_focus_pane_vc_g5

0x88ac,	// (0x00042be2) input_focus_pane_vc_g6

0x88b4,	// (0x00042bea) input_focus_pane_vc_g7

0x88bc,	// (0x00042bf2) input_focus_pane_vc_g8

0x88c4,	// (0x00042bfa) input_focus_pane_vc_g9

0x7ed3,	// (0x00042209) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x000499c7) input_focus_pane_vc_g

0x9ded,	// (0x00044123) data_form_pane_vc_ParamLimits

0x9ded,	// (0x00044123) data_form_pane_vc

0x9df9,	// (0x0004412f) form_field_data_pane_vc_g1

0xbb99,	// (0x00045ecf) form_field_data_pane_vc_t1_ParamLimits

0xbb99,	// (0x00045ecf) form_field_data_pane_vc_t1

0x8838,	// (0x00042b6e) input_focus_pane_vc_ParamLimits

0x8838,	// (0x00042b6e) input_focus_pane_vc

0xbbb3,	// (0x00045ee9) button_value_adjust_pane_cp3_vc

0xbbbb,	// (0x00045ef1) button_value_adjust_pane_cp5_vc

0xbbc3,	// (0x00045ef9) form_field_data_pane_vc_ParamLimits

0xbbc3,	// (0x00045ef9) form_field_data_pane_vc

0xbbda,	// (0x00045f10) form_field_data_pane_vc_cp2

0xbbe2,	// (0x00045f18) form_field_data_wide_pane_vc_ParamLimits

0xbbe2,	// (0x00045f18) form_field_data_wide_pane_vc

0xbbf8,	// (0x00045f2e) form_field_data_wide_pane_vc_cp2

0xbc00,	// (0x00045f36) form_field_popup_pane_vc_ParamLimits

0xbc00,	// (0x00045f36) form_field_popup_pane_vc

0xbc17,	// (0x00045f4d) form_field_popup_wide_pane_vc_ParamLimits

0xbc17,	// (0x00045f4d) form_field_popup_wide_pane_vc

0xbc2d,	// (0x00045f63) form_field_slider_pane_vc_ParamLimits

0xbc2d,	// (0x00045f63) form_field_slider_pane_vc

0xbc40,	// (0x00045f76) form_field_slider_wide_pane_vc_ParamLimits

0xbc40,	// (0x00045f76) form_field_slider_wide_pane_vc

0xbc53,	// (0x00045f89) grid_touch_1_pane_ParamLimits

0xbc53,	// (0x00045f89) grid_touch_1_pane

0xbc5f,	// (0x00045f95) grid_touch_2_pane_ParamLimits

0xbc5f,	// (0x00045f95) grid_touch_2_pane

0x9786,	// (0x00043abc) touch_pane_g1_ParamLimits

0x9786,	// (0x00043abc) touch_pane_g1

0xbc77,	// (0x00045fad) cell_app_pane_cp_wide_ParamLimits

0xbc77,	// (0x00045fad) cell_app_pane_cp_wide

0xbc88,	// (0x00045fbe) grid_popup_fast_wide_pane_ParamLimits

0xbc88,	// (0x00045fbe) grid_popup_fast_wide_pane

0xbc9c,	// (0x00045fd2) scroll_pane_cp19_ParamLimits

0xbc9c,	// (0x00045fd2) scroll_pane_cp19

0x7edd,	// (0x00042213) bg_popup_window_pane_cp20

0xbcb0,	// (0x00045fe6) listscroll_popup_fast_wide_pane

0x7fbd,	// (0x000422f3) grid_indicator_nsta_pane

0xbcb8,	// (0x00045fee) clock_nsta_pane_g1

0xbcc1,	// (0x00045ff7) clock_nsta_pane_t1

0xbcdd,	// (0x00046013) cell_indicator_nsta_pane_ParamLimits

0xbcdd,	// (0x00046013) cell_indicator_nsta_pane

0xbd0e,	// (0x00046044) cell_indicator_nsta_pane_g1

0xbd1c,	// (0x00046052) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x00049dd7) cell_indicator_nsta_pane_g

0xbd29,	// (0x0004605f) clock_nsta_pane_cp

0xbd31,	// (0x00046067) indicator_nsta_pane_cp

0xbd39,	// (0x0004606f) nsta_clock_indic_pane_g1

0x8086,	// (0x000423bc) grid_indicator_pane

0x8dbc,	// (0x000430f2) scroll_pane_cp29

0x608f,	// (0x000403c5) indicator_nsta_pane_cp2_ParamLimits

0x608f,	// (0x000403c5) indicator_nsta_pane_cp2

0x7fbd,	// (0x000422f3) main_apps_wheel_pane

0xa00e,	// (0x00044344) form_midp_field_text_pane_ParamLimits

0xa159,	// (0x0004448f) scroll_bar_cp050_ParamLimits

0xbd89,	// (0x000460bf) cell_indicator_pane_ParamLimits

0xbd89,	// (0x000460bf) cell_indicator_pane

0xbda0,	// (0x000460d6) cell_indicator_pane_g1

0xbdaa,	// (0x000460e0) grid_wheel_folder_pane_ParamLimits

0xbdaa,	// (0x000460e0) grid_wheel_folder_pane

0xbdc0,	// (0x000460f6) list_wheel_apps_pane_ParamLimits

0xbdc0,	// (0x000460f6) list_wheel_apps_pane

0xbdd1,	// (0x00046107) main_apps_wheel_pane_g1_ParamLimits

0xbdd1,	// (0x00046107) main_apps_wheel_pane_g1

0xbde5,	// (0x0004611b) main_apps_wheel_pane_g2_ParamLimits

0xbde5,	// (0x0004611b) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x00049df3) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x00049df3) main_apps_wheel_pane_g

0xbdfd,	// (0x00046133) main_apps_wheel_pane_t1_ParamLimits

0xbdfd,	// (0x00046133) main_apps_wheel_pane_t1

0xbe20,	// (0x00046156) list_wheel_apps_pane_g1

0xbe28,	// (0x0004615e) list_wheel_apps_pane_g2

0xbe30,	// (0x00046166) list_wheel_apps_pane_g3

0xbe38,	// (0x0004616e) list_wheel_apps_pane_g4

0xbe42,	// (0x00046178) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x00049df8) list_wheel_apps_pane_g

0x933f,	// (0x00043675) navi_icon_text_pane

0x982b,	// (0x00043b61) aid_fill_nsta

0xbe65,	// (0x0004619b) navi_icon_text_pane_g1

0xbe71,	// (0x000461a7) navi_icon_text_pane_t1

0x91d2,	// (0x00043508) list_set_graphic_pane_t1_ParamLimits

0x91d2,	// (0x00043508) list_set_graphic_pane_t1

0xa8b0,	// (0x00044be6) popup_midp_note_alarm_window_t6_ParamLimits

0xa8b0,	// (0x00044be6) popup_midp_note_alarm_window_t6

0xa8c2,	// (0x00044bf8) popup_midp_note_alarm_window_t7_ParamLimits

0xa8c2,	// (0x00044bf8) popup_midp_note_alarm_window_t7

0xa8d4,	// (0x00044c0a) popup_midp_note_alarm_window_t8_ParamLimits

0xa8d4,	// (0x00044c0a) popup_midp_note_alarm_window_t8

0xa8e6,	// (0x00044c1c) popup_midp_note_alarm_window_t9_ParamLimits

0xa8e6,	// (0x00044c1c) popup_midp_note_alarm_window_t9

0xa8f8,	// (0x00044c2e) popup_midp_note_alarm_window_t10_ParamLimits

0xa8f8,	// (0x00044c2e) popup_midp_note_alarm_window_t10

0xa90a,	// (0x00044c40) popup_midp_note_alarm_window_t11_ParamLimits

0xa90a,	// (0x00044c40) popup_midp_note_alarm_window_t11

0xa91c,	// (0x00044c52) scroll_pane_cp17_ParamLimits

0xa91c,	// (0x00044c52) scroll_pane_cp17

0x6ad0,	// (0x00040e06) volume_small_pane_cp_g1

0x6e90,	// (0x000411c6) volume_small_pane_cp_g2

0x6e99,	// (0x000411cf) volume_small_pane_cp_g3

0x6ea2,	// (0x000411d8) volume_small_pane_cp_g4

0x6eab,	// (0x000411e1) volume_small_pane_cp_g5

0x6eb4,	// (0x000411ea) volume_small_pane_cp_g6

0x6ebd,	// (0x000411f3) volume_small_pane_cp_g7

0x6ec6,	// (0x000411fc) volume_small_pane_cp_g8

0x6ecf,	// (0x00041205) volume_small_pane_cp_g9

0x6ed8,	// (0x0004120e) volume_small_pane_cp_g10

0x959c,	// (0x000438d2) midp_ticker_pane_g1_ParamLimits

0x95a8,	// (0x000438de) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049a93) midp_ticker_pane_g_ParamLimits

0x95b4,	// (0x000438ea) midp_ticker_pane_t1_ParamLimits

0x9841,	// (0x00043b77) aid_fill_nsta_2

0xa145,	// (0x0004447b) list_form2_midp_pane

0xb275,	// (0x000455ab) midp_editing_number_pane_ParamLimits

0xb284,	// (0x000455ba) midp_ticker_pane_ParamLimits

0xbe83,	// (0x000461b9) form2_midp_field_pane

0xbea7,	// (0x000461dd) scroll_pane_cp51

0xbec7,	// (0x000461fd) form2_midp_button_pane_ParamLimits

0xbec7,	// (0x000461fd) form2_midp_button_pane

0xbed9,	// (0x0004620f) form2_midp_content_pane_ParamLimits

0xbed9,	// (0x0004620f) form2_midp_content_pane

0xbef3,	// (0x00046229) form2_midp_field_choice_group_pane

0xbefb,	// (0x00046231) form2_midp_field_pane_g1

0xbf03,	// (0x00046239) form2_midp_field_pane_g2

0xbf0b,	// (0x00046241) form2_midp_field_pane_g3

0xbf13,	// (0x00046249) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x00049e1d) form2_midp_field_pane_g

0xbf1b,	// (0x00046251) form2_midp_gauge_slider_pane

0xbf23,	// (0x00046259) form2_midp_gauge_wait_pane

0xbf2b,	// (0x00046261) form2_midp_image_pane_ParamLimits

0xbf2b,	// (0x00046261) form2_midp_image_pane

0xbf46,	// (0x0004627c) form2_midp_label_pane_ParamLimits

0xbf46,	// (0x0004627c) form2_midp_label_pane

0xbf5f,	// (0x00046295) form2_midp_label_pane_cp_ParamLimits

0xbf5f,	// (0x00046295) form2_midp_label_pane_cp

0xbf80,	// (0x000462b6) form2_midp_string_pane_ParamLimits

0xbf80,	// (0x000462b6) form2_midp_string_pane

0x559a,	// (0x0003f8d0) form2_midp_text_pane_ParamLimits

0x559a,	// (0x0003f8d0) form2_midp_text_pane

0xbf92,	// (0x000462c8) form2_midp_time_pane

0xbfa2,	// (0x000462d8) input_focus_pane_cp51_ParamLimits

0xbfa2,	// (0x000462d8) input_focus_pane_cp51

0xbfba,	// (0x000462f0) form2_midp_label_pane_t1_ParamLimits

0xbfba,	// (0x000462f0) form2_midp_label_pane_t1

0x55b9,	// (0x0003f8ef) form2_mdip_text_pane_t1_ParamLimits

0x55b9,	// (0x0003f8ef) form2_mdip_text_pane_t1

0x55d7,	// (0x0003f90d) form2_midp_time_pane_t1

0xc003,	// (0x00046339) form2_midp_gauge_slider_pane_t1

0xc015,	// (0x0004634b) form2_midp_gauge_slider_pane_t2

0xc027,	// (0x0004635d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x00049e26) form2_midp_gauge_slider_pane_t

0xc039,	// (0x0004636f) form2_midp_slider_pane

0xc045,	// (0x0004637b) form2_midp_gauge_wait_pane_t1

0xc053,	// (0x00046389) form2_midp_wait_pane_ParamLimits

0xc053,	// (0x00046389) form2_midp_wait_pane

0xc08a,	// (0x000463c0) list_single_2graphic_pane_cp4_ParamLimits

0xc08a,	// (0x000463c0) list_single_2graphic_pane_cp4

0x9e61,	// (0x00044197) list_single_midp_graphic_pane_cp_ParamLimits

0x9e61,	// (0x00044197) list_single_midp_graphic_pane_cp

0x7edd,	// (0x00042213) list_highlight_pane_cp20

0xc0ae,	// (0x000463e4) list_single_2graphic_pane_g1_cp4

0xc0b6,	// (0x000463ec) list_single_2graphic_pane_g2_cp4

0xc0be,	// (0x000463f4) list_single_2graphic_pane_t1_cp4

0x7fbd,	// (0x000422f3) list_highlight_pane_cp21

0xc0cd,	// (0x00046403) list_single_midp_graphic_pane_g4_cp

0xc0dc,	// (0x00046412) list_single_midp_graphic_pane_t1_cp

0xc0f1,	// (0x00046427) form2_mdip_string_pane_t1_ParamLimits

0xc0f1,	// (0x00046427) form2_mdip_string_pane_t1

0x7edd,	// (0x00042213) bg_wml_button_pane_cp2

0x7ed3,	// (0x00042209) form2_midp_image_pane_g1

0x5d81,	// (0x000400b7) list_double_large_graphic_pane_g5_ParamLimits

0x5d81,	// (0x000400b7) list_double_large_graphic_pane_g5

0x94c7,	// (0x000437fd) midp_form_pane_ParamLimits

0x7fbd,	// (0x000422f3) main_apps_wheel_pane_ParamLimits

0x6770,	// (0x00040aa6) popup_preview_window_ParamLimits

0x6770,	// (0x00040aa6) popup_preview_window

0x692b,	// (0x00040c61) popup_touch_info_window_ParamLimits

0x692b,	// (0x00040c61) popup_touch_info_window

0x6949,	// (0x00040c7f) popup_touch_menu_window_ParamLimits

0x6949,	// (0x00040c7f) popup_touch_menu_window

0x7ec9,	// (0x000421ff) bg_popup_sub_pane_cp6

0xc1db,	// (0x00046511) list_touch_menu_pane

0xc1e3,	// (0x00046519) list_single_touch_menu_pane_ParamLimits

0xc1e3,	// (0x00046519) list_single_touch_menu_pane

0xc1f9,	// (0x0004652f) list_single_touch_menu_pane_t1

0x7fbd,	// (0x000422f3) bg_popup_sub_pane_cp7_ParamLimits

0x7fbd,	// (0x000422f3) bg_popup_sub_pane_cp7

0xc207,	// (0x0004653d) heading_sub_pane

0xc20f,	// (0x00046545) list_touch_info_pane_ParamLimits

0xc20f,	// (0x00046545) list_touch_info_pane

0xc21e,	// (0x00046554) list_single_touch_info_pane_ParamLimits

0xc21e,	// (0x00046554) list_single_touch_info_pane

0xc230,	// (0x00046566) list_single_touch_info_pane_t1

0xc23e,	// (0x00046574) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x00049e34) list_single_touch_info_pane_t

0x94bf,	// (0x000437f5) bg_popup_heading_pane_cp

0xc24c,	// (0x00046582) heading_sub_pane_t1

0x9d87,	// (0x000440bd) bg_popup_preview_window_pane_cp_ParamLimits

0x9d87,	// (0x000440bd) bg_popup_preview_window_pane_cp

0xc207,	// (0x0004653d) heading_preview_pane

0xc20f,	// (0x00046545) list_preview_pane_ParamLimits

0xc20f,	// (0x00046545) list_preview_pane

0xc25a,	// (0x00046590) popup_preview_window_g1

0xc21e,	// (0x00046554) list_single_preview_pane_ParamLimits

0xc21e,	// (0x00046554) list_single_preview_pane

0xc262,	// (0x00046598) list_single_preview_pane_g1

0xc26a,	// (0x000465a0) list_single_preview_pane_t1

0xc230,	// (0x00046566) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x00049e39) list_single_preview_pane_t

0xc278,	// (0x000465ae) bg_popup_heading_pane_cp2_ParamLimits

0xc278,	// (0x000465ae) bg_popup_heading_pane_cp2

0xc28e,	// (0x000465c4) heading_preview_pane_g1

0xc296,	// (0x000465cc) heading_preview_pane_t1_ParamLimits

0xc296,	// (0x000465cc) heading_preview_pane_t1

0x80a9,	// (0x000423df) soft_indicator_pane_t1_ParamLimits

0x879f,	// (0x00042ad5) scroll_pane_ParamLimits

0x8cb5,	// (0x00042feb) scroll_sc2_left_pane

0x8cbe,	// (0x00042ff4) scroll_sc2_right_pane

0x8cdd,	// (0x00043013) scroll_bg_pane_g1_ParamLimits

0x8cf2,	// (0x00043028) scroll_bg_pane_g2_ParamLimits

0x8d0a,	// (0x00043040) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049a1e) scroll_bg_pane_g_ParamLimits

0x8cdd,	// (0x00043013) scroll_handle_pane_g1_ParamLimits

0x8d2c,	// (0x00043062) scroll_handle_pane_g2_ParamLimits

0x8d0a,	// (0x00043040) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049a25) scroll_handle_pane_g_ParamLimits

0x63f1,	// (0x00040727) popup_choice_list_window_ParamLimits

0x63f1,	// (0x00040727) popup_choice_list_window

0x9c5d,	// (0x00043f93) choice_list_pane

0x9cdf,	// (0x00044015) cell_toolbar_pane_t1

0x9d07,	// (0x0004403d) toolbar_button_pane_ParamLimits

0xadd6,	// (0x0004510c) ai_gene_pane_1_t2_ParamLimits

0xadd6,	// (0x0004510c) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x00049c4d) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x00049c4d) ai_gene_pane_1_t

0xc2b3,	// (0x000465e9) scroll_sc2_left_pane_g1

0xc2b3,	// (0x000465e9) scroll_sc2_right_pane_g1

0x9809,	// (0x00043b3f) bg_popup_sub_pane_cp10

0xc2bd,	// (0x000465f3) list_choice_list_pane

0xc2d6,	// (0x0004660c) list_single_choice_list_pane_ParamLimits

0xc2d6,	// (0x0004660c) list_single_choice_list_pane

0xc2e9,	// (0x0004661f) list_single_choice_list_pane_g1

0x89bd,	// (0x00042cf3) list_single_choice_list_pane_t1_ParamLimits

0x89bd,	// (0x00042cf3) list_single_choice_list_pane_t1

0xc2f1,	// (0x00046627) choice_list_pane_g1

0xc2f9,	// (0x0004662f) choice_list_pane_t1

0x7ec9,	// (0x000421ff) input_focus_pane_cp11

0x8b94,	// (0x00042eca) title_pane_stacon_g2_ParamLimits

0x8b94,	// (0x00042eca) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049a04) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049a04) title_pane_stacon_g

0x94bf,	// (0x000437f5) cursor_press_pane

0x649d,	// (0x000407d3) popup_fep_hwr_window_ParamLimits

0x649d,	// (0x000407d3) popup_fep_hwr_window

0x6517,	// (0x0004084d) popup_fep_vkb_window_ParamLimits

0x6517,	// (0x0004084d) popup_fep_vkb_window

0xc307,	// (0x0004663d) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x00049e62) fep_vkb_side_pane_g_ParamLimits

0x6f1a,	// (0x00041250) fep_hwr_candidate_pane_ParamLimits

0x6f1a,	// (0x00041250) fep_hwr_candidate_pane

0x6f44,	// (0x0004127a) fep_hwr_side_pane_ParamLimits

0x6f44,	// (0x0004127a) fep_hwr_side_pane

0x6f64,	// (0x0004129a) fep_hwr_top_pane_ParamLimits

0x6f64,	// (0x0004129a) fep_hwr_top_pane

0x6f7c,	// (0x000412b2) fep_hwr_write_pane_ParamLimits

0x6f7c,	// (0x000412b2) fep_hwr_write_pane

0xfb2c,	// (0x00049e62) fep_vkb_side_pane_g

0xc30f,	// (0x00046645) fep_hwr_top_pane_g1

0xc321,	// (0x00046657) fep_hwr_top_pane_g2

0x6fa8,	// (0x000412de) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x00049e3e) fep_hwr_top_pane_g

0x6fbd,	// (0x000412f3) fep_hwr_top_text_pane

0x8eac,	// (0x000431e2) fep_hwr_top_text_pane_g1

0xc357,	// (0x0004668d) fep_hwr_top_text_pane_t1

0x70b3,	// (0x000413e9) fep_hwr_candidate_pane_g1

0xc5aa,	// (0x000468e0) fep_vkb_keypad_pane_g3_ParamLimits

0xc5aa,	// (0x000468e0) fep_vkb_keypad_pane_g3

0xc5d2,	// (0x00046908) fep_vkb_keypad_pane_g4_ParamLimits

0xc5d2,	// (0x00046908) fep_vkb_keypad_pane_g4

0xc641,	// (0x00046977) fep_vkb_bottom_pane_g2_ParamLimits

0xc641,	// (0x00046977) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x00049e69) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x00049e69) fep_vkb_bottom_pane_g

0xc2b3,	// (0x000465e9) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x00049e73) cell_vkb_side_pane_g

0xc6cc,	// (0x00046a02) cell_vkb_side_pane_t1

0xc6da,	// (0x00046a10) cell_vkb_side_pane_t1_copy1

0xc2b3,	// (0x000465e9) bg_fep_vkb_candidate_pane_g2

0xc806,	// (0x00046b3c) cell_vkb_candidate_pane_ParamLimits

0xc365,	// (0x0004669b) aid_size_cell_vkb_ParamLimits

0xc365,	// (0x0004669b) aid_size_cell_vkb

0xc806,	// (0x00046b3c) cell_vkb_candidate_pane

0x70cd,	// (0x00041403) bg_popup_fep_shadow_pane_g1

0xc3f3,	// (0x00046729) fep_vkb_bottom_pane_ParamLimits

0xc3f3,	// (0x00046729) fep_vkb_bottom_pane

0xc429,	// (0x0004675f) fep_vkb_candidate_pane_ParamLimits

0xc429,	// (0x0004675f) fep_vkb_candidate_pane

0xc445,	// (0x0004677b) fep_vkb_keypad_pane_ParamLimits

0xc445,	// (0x0004677b) fep_vkb_keypad_pane

0xc48b,	// (0x000467c1) fep_vkb_side_pane_ParamLimits

0xc48b,	// (0x000467c1) fep_vkb_side_pane

0xc4c7,	// (0x000467fd) fep_vkb_top_pane_ParamLimits

0xc4c7,	// (0x000467fd) fep_vkb_top_pane

0xc503,	// (0x00046839) fep_vkb_top_pane_g1_ParamLimits

0xc503,	// (0x00046839) fep_vkb_top_pane_g1

0xc512,	// (0x00046848) fep_vkb_top_pane_g2_ParamLimits

0xc512,	// (0x00046848) fep_vkb_top_pane_g2

0xc521,	// (0x00046857) fep_vkb_top_pane_g3_ParamLimits

0xc521,	// (0x00046857) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x00049e59) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x00049e59) fep_vkb_top_pane_g

0xc53f,	// (0x00046875) fep_vkb_top_text_pane_ParamLimits

0xc53f,	// (0x00046875) fep_vkb_top_text_pane

0xc550,	// (0x00046886) fep_vkb_side_pane_g1_ParamLimits

0xc550,	// (0x00046886) fep_vkb_side_pane_g1

0xc599,	// (0x000468cf) grid_vkb_side_pane_ParamLimits

0xc599,	// (0x000468cf) grid_vkb_side_pane

0x70d5,	// (0x0004140b) bg_popup_fep_shadow_pane_g2

0x70de,	// (0x00041414) bg_popup_fep_shadow_pane_g3

0x70e6,	// (0x0004141c) bg_popup_fep_shadow_pane_g4

0x70ef,	// (0x00041425) bg_popup_fep_shadow_pane_g5

0x70f9,	// (0x0004142f) bg_popup_fep_shadow_pane_g6

0x7101,	// (0x00041437) bg_popup_fep_shadow_pane_g7

0x88a4,	// (0x00042bda) bg_popup_fep_shadow_pane_g8

0xc5f0,	// (0x00046926) grid_vkb_keypad_number_pane_ParamLimits

0xc5f0,	// (0x00046926) grid_vkb_keypad_number_pane

0xc600,	// (0x00046936) grid_vkb_keypad_pane_ParamLimits

0xc600,	// (0x00046936) grid_vkb_keypad_pane

0xc626,	// (0x0004695c) fep_vkb_bottom_pane_g1_ParamLimits

0xc626,	// (0x0004695c) fep_vkb_bottom_pane_g1

0xc64f,	// (0x00046985) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc64f,	// (0x00046985) grid_vkb_keypad_bottom_left_pane

0xc664,	// (0x0004699a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc664,	// (0x0004699a) grid_vkb_keypad_bottom_right_pane

0xc679,	// (0x000469af) fep_vkb_top_text_pane_g1

0xc694,	// (0x000469ca) fep_vkb_top_text_pane_t1

0xc6a9,	// (0x000469df) cell_vkb_side_pane_ParamLimits

0xc6a9,	// (0x000469df) cell_vkb_side_pane

0xc2b3,	// (0x000465e9) cell_vkb_side_pane_g1

0xc6e8,	// (0x00046a1e) cell_vkb_keypad_pane_ParamLimits

0xc6e8,	// (0x00046a1e) cell_vkb_keypad_pane

0xc75d,	// (0x00046a93) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x00049e86) bg_popup_fep_shadow_pane_g

0xc2b3,	// (0x000465e9) cell_hwr_side_pane_g1

0xc2b3,	// (0x000465e9) cell_hwr_side_pane_g2

0xc767,	// (0x00046a9d) cell_vkb_keypad_pane_t1

0xc775,	// (0x00046aab) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc775,	// (0x00046aab) cell_vkb_keypad_bottom_left_pane

0xc792,	// (0x00046ac8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc792,	// (0x00046ac8) cell_vkb_keypad_bottom_right_pane

0xc2b3,	// (0x000465e9) cell_vkb_keypad_bottom_left_pane_g1

0xc2b3,	// (0x000465e9) cell_vkb_keypad_bottom_right_pane_g1

0xc7cb,	// (0x00046b01) cell_vkb_keypad_number_pane_ParamLimits

0xc7cb,	// (0x00046b01) cell_vkb_keypad_number_pane

0xc7ea,	// (0x00046b20) cell_vkb_keypad_number_pane_g1

0xc7f4,	// (0x00046b2a) cell_vkb_keypad_number_pane_g2

0xc7fd,	// (0x00046b33) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x00049e78) cell_vkb_keypad_number_pane_g

0xc767,	// (0x00046a9d) cell_vkb_keypad_number_pane_t1

0xc821,	// (0x00046b57) fep_vkb_candidate_pane_g1

0x0001,

0xfb3d,	// (0x00049e73) cell_hwr_side_pane_g

0xc83a,	// (0x00046b70) cell_hwr_side_pane_t1

0x7113,	// (0x00041449) cell_hwr_side_pane_t1_copy1

0xc531,	// (0x00046867) cell_hwr_candidate_pane_g1

0x7121,	// (0x00041457) cell_hwr_candidate_pane_t1

0xc2b3,	// (0x000465e9) cell_vkb_candidate_pane_g2

0xc8c0,	// (0x00046bf6) cell_vkb_candidate_pane_t1

0x6ee1,	// (0x00041217) bg_popup_fep_shadow_pane_ParamLimits

0x6ee1,	// (0x00041217) bg_popup_fep_shadow_pane

0x2b5d,	// (0x0003ce93) bg_fep_hwr_top_pane_g4

0xc333,	// (0x00046669) bg_hwr_side_pane_g1_ParamLimits

0xc333,	// (0x00046669) bg_hwr_side_pane_g1

0x6ff9,	// (0x0004132f) cell_hwr_side_pane_ParamLimits

0x6ff9,	// (0x0004132f) cell_hwr_side_pane

0x7034,	// (0x0004136a) fep_hwr_write_pane_g1_ParamLimits

0x7034,	// (0x0004136a) fep_hwr_write_pane_g1

0x7041,	// (0x00041377) fep_hwr_write_pane_g2_ParamLimits

0x7041,	// (0x00041377) fep_hwr_write_pane_g2

0x704e,	// (0x00041384) fep_hwr_write_pane_g3_ParamLimits

0x704e,	// (0x00041384) fep_hwr_write_pane_g3

0x705c,	// (0x00041392) fep_hwr_write_pane_g4_ParamLimits

0x705c,	// (0x00041392) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x00049e45) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x00049e45) fep_hwr_write_pane_g

0x2b5d,	// (0x0003ce93) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2b5d,	// (0x0003ce93) bg_fep_hwr_candidate_pane_g2

0x7071,	// (0x000413a7) cell_hwr_candidate_pane_ParamLimits

0x7071,	// (0x000413a7) cell_hwr_candidate_pane

0x70b3,	// (0x000413e9) fep_hwr_candidate_pane_g1_ParamLimits

0xc393,	// (0x000466c9) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc393,	// (0x000466c9) bg_popup_fep_shadow_pane_cp2

0xc531,	// (0x00046867) fep_vkb_top_pane_g4_ParamLimits

0xc531,	// (0x00046867) fep_vkb_top_pane_g4

0xc577,	// (0x000468ad) fep_vkb_side_pane_g2_ParamLimits

0xc577,	// (0x000468ad) fep_vkb_side_pane_g2

0x4c89,	// (0x0003efbf) list_setting_pane_t4_ParamLimits

0x4c89,	// (0x0003efbf) list_setting_pane_t4

0x4d23,	// (0x0003f059) list_setting_number_pane_t5_ParamLimits

0x4d23,	// (0x0003f059) list_setting_number_pane_t5

0x8ef3,	// (0x00043229) list_double_heading_pane_cp2_ParamLimits

0x8ef3,	// (0x00043229) list_double_heading_pane_cp2

0x87d3,	// (0x00042b09) list_double_heading_pane_g1_cp2_ParamLimits

0x87d3,	// (0x00042b09) list_double_heading_pane_g1_cp2

0x8846,	// (0x00042b7c) list_double_heading_pane_g2_cp2_ParamLimits

0x8846,	// (0x00042b7c) list_double_heading_pane_g2_cp2

0xc8ce,	// (0x00046c04) list_double_heading_pane_t1_cp2_ParamLimits

0xc8ce,	// (0x00046c04) list_double_heading_pane_t1_cp2

0xc8e4,	// (0x00046c1a) list_double_heading_pane_t2_cp2_ParamLimits

0xc8e4,	// (0x00046c1a) list_double_heading_pane_t2_cp2

0x7eb1,	// (0x000421e7) aid_value_unit2

0x5b57,	// (0x0003fe8d) popup_preview_fixed_window

0x8246,	// (0x0004257c) bg_popup_preview_window_pane_cp02

0xc8f6,	// (0x00046c2c) list_preview_fixed_pane

0xc93c,	// (0x00046c72) list_empty_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_empty_pane_fp

0xc93c,	// (0x00046c72) list_single_cale_day_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_cale_day_pane_fp

0xc93c,	// (0x00046c72) list_single_graphic_heading_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_graphic_heading_pane_fp

0xc93c,	// (0x00046c72) list_single_graphic_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_graphic_pane_fp

0xc93c,	// (0x00046c72) list_single_heading_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_heading_pane_fp

0xc93c,	// (0x00046c72) list_single_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_pane_fp

0xc951,	// (0x00046c87) list_single_pane_fp_g1_ParamLimits

0xc951,	// (0x00046c87) list_single_pane_fp_g1

0x87d3,	// (0x00042b09) list_single_pane_fp_g2_ParamLimits

0x87d3,	// (0x00042b09) list_single_pane_fp_g2

0x8846,	// (0x00042b7c) list_single_pane_fp_g3_ParamLimits

0x8846,	// (0x00042b7c) list_single_pane_fp_g3

0xc95d,	// (0x00046c93) list_single_pane_fp_g4_ParamLimits

0xc95d,	// (0x00046c93) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x00049ea7) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x00049ea7) list_single_pane_fp_g

0x55ea,	// (0x0003f920) list_single_pane_fp_t1_ParamLimits

0x55ea,	// (0x0003f920) list_single_pane_fp_t1

0x5601,	// (0x0003f937) list_single_graphic_pane_fp_g1_ParamLimits

0x5601,	// (0x0003f937) list_single_graphic_pane_fp_g1

0xc951,	// (0x00046c87) list_single_graphic_pane_fp_g2_ParamLimits

0xc951,	// (0x00046c87) list_single_graphic_pane_fp_g2

0x87d3,	// (0x00042b09) list_single_graphic_pane_fp_g3_ParamLimits

0x87d3,	// (0x00042b09) list_single_graphic_pane_fp_g3

0x8846,	// (0x00042b7c) list_single_graphic_pane_fp_g4_ParamLimits

0x8846,	// (0x00042b7c) list_single_graphic_pane_fp_g4

0xc95d,	// (0x00046c93) list_single_graphic_pane_fp_g5_ParamLimits

0xc95d,	// (0x00046c93) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049eb0) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049eb0) list_single_graphic_pane_fp_g

0x560d,	// (0x0003f943) list_single_graphic_pane_fp_t1_ParamLimits

0x560d,	// (0x0003f943) list_single_graphic_pane_fp_t1

0x5601,	// (0x0003f937) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5601,	// (0x0003f937) list_single_graphic_heading_pane_fp_g1

0xc951,	// (0x00046c87) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc951,	// (0x00046c87) list_single_graphic_heading_pane_fp_g2

0x87d3,	// (0x00042b09) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87d3,	// (0x00042b09) list_single_graphic_heading_pane_fp_g3

0x8846,	// (0x00042b7c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x8846,	// (0x00042b7c) list_single_graphic_heading_pane_fp_g4

0xc95d,	// (0x00046c93) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc95d,	// (0x00046c93) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049eb0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049eb0) list_single_graphic_heading_pane_fp_g

0x5623,	// (0x0003f959) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5623,	// (0x0003f959) list_single_graphic_heading_pane_fp_t1

0x5639,	// (0x0003f96f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5639,	// (0x0003f96f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x00049ebb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x00049ebb) list_single_graphic_heading_pane_fp_t

0x564b,	// (0x0003f981) list_single_cale_day_pane_fp_g1_ParamLimits

0x564b,	// (0x0003f981) list_single_cale_day_pane_fp_g1

0xc969,	// (0x00046c9f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc969,	// (0x00046c9f) list_single_cale_day_pane_fp_g2

0x713f,	// (0x00041475) list_single_cale_day_pane_fp_g3_ParamLimits

0x713f,	// (0x00041475) list_single_cale_day_pane_fp_g3

0x7167,	// (0x0004149d) list_single_cale_day_pane_fp_g4_ParamLimits

0x7167,	// (0x0004149d) list_single_cale_day_pane_fp_g4

0x718b,	// (0x000414c1) list_single_cale_day_pane_fp_g5_ParamLimits

0x718b,	// (0x000414c1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x00049ec0) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x00049ec0) list_single_cale_day_pane_fp_g

0x5683,	// (0x0003f9b9) list_single_cale_day_pane_fp_t1_ParamLimits

0x5683,	// (0x0003f9b9) list_single_cale_day_pane_fp_t1

0x56a9,	// (0x0003f9df) list_single_cale_day_pane_fp_t2_ParamLimits

0x56a9,	// (0x0003f9df) list_single_cale_day_pane_fp_t2

0x56c2,	// (0x0003f9f8) list_single_cale_day_pane_fp_t3_ParamLimits

0x56c2,	// (0x0003f9f8) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x00049ecb) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x00049ecb) list_single_cale_day_pane_fp_t

0xc951,	// (0x00046c87) list_empty_pane_fp_g1_ParamLimits

0xc951,	// (0x00046c87) list_empty_pane_fp_g1

0x56db,	// (0x0003fa11) list_empty_pane_fp_t1

0x56e9,	// (0x0003fa1f) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x00049ed2) list_empty_pane_fp_t

0xc951,	// (0x00046c87) list_single_heading_pane_fp_g1_ParamLimits

0xc951,	// (0x00046c87) list_single_heading_pane_fp_g1

0x87d3,	// (0x00042b09) list_single_heading_pane_fp_g2_ParamLimits

0x87d3,	// (0x00042b09) list_single_heading_pane_fp_g2

0x8846,	// (0x00042b7c) list_single_heading_pane_fp_g3_ParamLimits

0x8846,	// (0x00042b7c) list_single_heading_pane_fp_g3

0x0002,

0xfba1,	// (0x00049ed7) list_single_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x00049ed7) list_single_heading_pane_fp_g

0x56f7,	// (0x0003fa2d) list_single_heading_pane_fp_t1_ParamLimits

0x56f7,	// (0x0003fa2d) list_single_heading_pane_fp_t1

0x5709,	// (0x0003fa3f) list_single_heading_pane_fp_t2_ParamLimits

0x5709,	// (0x0003fa3f) list_single_heading_pane_fp_t2

0x0001,

0xfba8,	// (0x00049ede) list_single_heading_pane_fp_t_ParamLimits

0xfba8,	// (0x00049ede) list_single_heading_pane_fp_t

0x8a2b,	// (0x00042d61) aid_size_cell_fast

0x81b6,	// (0x000424ec) soft_indicator_pane_cp1_t1

0x8a68,	// (0x00042d9e) cell_app_pane_cp2_ParamLimits

0x8a68,	// (0x00042d9e) cell_app_pane_cp2

0x6f03,	// (0x00041239) fep_hwr_candidate_drop_down_list_pane

0x2b6b,	// (0x0003cea1) fep_hwr_candidate_pane_g3_ParamLimits

0x2b6b,	// (0x0003cea1) fep_hwr_candidate_pane_g3

0x2b78,	// (0x0003ceae) fep_hwr_candidate_pane_g4_ParamLimits

0x2b78,	// (0x0003ceae) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x00049e52) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x00049e52) fep_hwr_candidate_pane_g

0xc418,	// (0x0004674e) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc418,	// (0x0004674e) fep_vkb_candidate_drop_down_list_pane

0xc829,	// (0x00046b5f) fep_vkb_candidate_pane_g3

0xc831,	// (0x00046b67) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x00049e7f) fep_vkb_candidate_pane_g

0xc531,	// (0x00046867) cell_hwr_candidate_pane_g1_ParamLimits

0xc87e,	// (0x00046bb4) cell_hwr_candidate_pane_g3_ParamLimits

0xc87e,	// (0x00046bb4) cell_hwr_candidate_pane_g3

0xc89f,	// (0x00046bd5) cell_hwr_candidate_pane_g4_ParamLimits

0xc89f,	// (0x00046bd5) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x00049e99) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x00049e99) cell_hwr_candidate_pane_g

0xc848,	// (0x00046b7e) cell_vkb_candidate_pane_g3_ParamLimits

0xc848,	// (0x00046b7e) cell_vkb_candidate_pane_g3

0xc863,	// (0x00046b99) cell_vkb_candidate_pane_g4_ParamLimits

0xc863,	// (0x00046b99) cell_vkb_candidate_pane_g4

0xc975,	// (0x00046cab) cell_app_pane_cp2_g1_ParamLimits

0xc975,	// (0x00046cab) cell_app_pane_cp2_g1

0xc993,	// (0x00046cc9) cell_app_pane_cp2_g2_ParamLimits

0xc993,	// (0x00046cc9) cell_app_pane_cp2_g2

0x0001,

0xfbad,	// (0x00049ee3) cell_app_pane_cp2_g_ParamLimits

0xfbad,	// (0x00049ee3) cell_app_pane_cp2_g

0xc99f,	// (0x00046cd5) cell_app_pane_cp2_t1_ParamLimits

0xc99f,	// (0x00046cd5) cell_app_pane_cp2_t1

0x8838,	// (0x00042b6e) grid_highlight_pane_cp1_ParamLimits

0x8838,	// (0x00042b6e) grid_highlight_pane_cp1

0x71af,	// (0x000414e5) cell_hwr_candidate_pane_cp1_ParamLimits

0x71af,	// (0x000414e5) cell_hwr_candidate_pane_cp1

0xc531,	// (0x00046867) fep_hwr_candidate_drop_down_list_pane_g1

0xc9b1,	// (0x00046ce7) fep_hwr_candidate_drop_down_list_pane_g2

0xc9be,	// (0x00046cf4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049ee8) fep_hwr_candidate_drop_down_list_pane_g

0x71ce,	// (0x00041504) fep_hwr_candidate_drop_down_list_scroll_pane

0x71d7,	// (0x0004150d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x71d7,	// (0x0004150d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x71e4,	// (0x0004151a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x71e4,	// (0x0004151a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x71f1,	// (0x00041527) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x71f1,	// (0x00041527) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc848,	// (0x00046b7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc848,	// (0x00046b7e) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc863,	// (0x00046b99) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc863,	// (0x00046b99) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x71fe,	// (0x00041534) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x71fe,	// (0x00041534) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7219,	// (0x0004154f) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7219,	// (0x0004154f) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7234,	// (0x0004156a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7234,	// (0x0004156a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb9,	// (0x00049eef) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb9,	// (0x00049eef) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9cb,	// (0x00046d01) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9cb,	// (0x00046d01) cell_vkb_candidate_pane_cp1

0xc531,	// (0x00046867) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc531,	// (0x00046867) fep_vkb_candidate_drop_down_list_pane_g1

0xc9b1,	// (0x00046ce7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9b1,	// (0x00046ce7) fep_vkb_candidate_drop_down_list_pane_g2

0xc9be,	// (0x00046cf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9be,	// (0x00046cf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb2,	// (0x00049ee8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb2,	// (0x00049ee8) fep_vkb_candidate_drop_down_list_pane_g

0xc9eb,	// (0x00046d21) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9eb,	// (0x00046d21) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9f8,	// (0x00046d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9f8,	// (0x00046d2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca05,	// (0x00046d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca05,	// (0x00046d3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca11,	// (0x00046d47) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca11,	// (0x00046d47) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc87e,	// (0x00046bb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc87e,	// (0x00046bb4) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc89f,	// (0x00046bd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc89f,	// (0x00046bd5) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca1d,	// (0x00046d53) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca1d,	// (0x00046d53) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca3e,	// (0x00046d74) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca3e,	// (0x00046d74) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca5f,	// (0x00046d95) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca5f,	// (0x00046d95) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x00049f00) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x00049f00) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7ee7,	// (0x0004221d) title_pane_g1_ParamLimits

0x7ef4,	// (0x0004222a) title_pane_g2_ParamLimits

0xf54e,	// (0x00049884) title_pane_g_ParamLimits

0x8e9c,	// (0x000431d2) aid_call2_pane

0x8ea4,	// (0x000431da) aid_call_pane

0x8eac,	// (0x000431e2) popup_clock_analogue_window_g1

0x8eac,	// (0x000431e2) popup_clock_analogue_window_g2

0x5f74,	// (0x000402aa) popup_clock_analogue_window_g3

0x5f7d,	// (0x000402b3) popup_clock_analogue_window_g4

0x7ed3,	// (0x00042209) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049a33) popup_clock_analogue_window_g

0x5f85,	// (0x000402bb) popup_clock_analogue_window_t1

0x5f93,	// (0x000402c9) clock_digital_number_pane_ParamLimits

0x5f93,	// (0x000402c9) clock_digital_number_pane

0x5f9f,	// (0x000402d5) clock_digital_number_pane_cp02_ParamLimits

0x5f9f,	// (0x000402d5) clock_digital_number_pane_cp02

0x5fab,	// (0x000402e1) clock_digital_number_pane_cp03_ParamLimits

0x5fab,	// (0x000402e1) clock_digital_number_pane_cp03

0x5fb7,	// (0x000402ed) clock_digital_number_pane_cp04_ParamLimits

0x5fb7,	// (0x000402ed) clock_digital_number_pane_cp04

0x5fc3,	// (0x000402f9) clock_digital_separator_pane_ParamLimits

0x5fc3,	// (0x000402f9) clock_digital_separator_pane

0x5fcf,	// (0x00040305) popup_clock_digital_window_t1_ParamLimits

0x5fcf,	// (0x00040305) popup_clock_digital_window_t1

0x7ed3,	// (0x00042209) clock_digital_number_pane_g1

0x7ed3,	// (0x00042209) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049a3e) clock_digital_number_pane_g

0x7ed3,	// (0x00042209) clock_digital_separator_pane_g1

0x7ed3,	// (0x00042209) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049a3e) clock_digital_separator_pane_g

0x982b,	// (0x00043b61) aid_fill_nsta_ParamLimits

0x9971,	// (0x00043ca7) indicator_nsta_pane_ParamLimits

0x9aea,	// (0x00043e20) popup_clock_analogue_window

0x9aea,	// (0x00043e20) popup_clock_digital_window

0x7fbd,	// (0x000422f3) grid_indicator_nsta_pane_ParamLimits

0xbccf,	// (0x00046005) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x00049dd2) clock_nsta_pane_t

0x5f38,	// (0x0004026e) aid_size_max_handle

0x5f42,	// (0x00040278) aid_size_min_handle

0x94bf,	// (0x000437f5) editor_scroll_pane

0xca7a,	// (0x00046db0) ex_editor_pane

0x8999,	// (0x00042ccf) scroll_pane_cp13

0x87cb,	// (0x00042b01) scroll_pane_cp14

0x8edb,	// (0x00043211) scroll_pane_cp36

0x8f07,	// (0x0004323d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f07,	// (0x0004323d) list_single_graphic_hl_pane_cp2

0x523b,	// (0x0003f571) list_single_graphic_hl_pane_ParamLimits

0x523b,	// (0x0003f571) list_single_graphic_hl_pane

0x571f,	// (0x0003fa55) aid_size_min_hl_cp1

0xca82,	// (0x00046db8) list_highlight_pane_cp34_ParamLimits

0xca82,	// (0x00046db8) list_highlight_pane_cp34

0xca93,	// (0x00046dc9) list_single_graphic_hl_pane_g1_ParamLimits

0xca93,	// (0x00046dc9) list_single_graphic_hl_pane_g1

0x5728,	// (0x0003fa5e) list_single_graphic_hl_pane_g2_ParamLimits

0x5728,	// (0x0003fa5e) list_single_graphic_hl_pane_g2

0x5728,	// (0x0003fa5e) list_single_graphic_hl_pane_g3_ParamLimits

0x5728,	// (0x0003fa5e) list_single_graphic_hl_pane_g3

0x9430,	// (0x00043766) list_single_graphic_hl_pane_g4_ParamLimits

0x9430,	// (0x00043766) list_single_graphic_hl_pane_g4

0x724f,	// (0x00041585) list_single_graphic_hl_pane_g5_ParamLimits

0x724f,	// (0x00041585) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x00049f11) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x00049f11) list_single_graphic_hl_pane_g

0x5734,	// (0x0003fa6a) list_single_graphic_hl_pane_t1_ParamLimits

0x5734,	// (0x0003fa6a) list_single_graphic_hl_pane_t1

0xcaa0,	// (0x00046dd6) aid_size_min_hl_cp2

0xcaa9,	// (0x00046ddf) list_highlight_pane_cp34_cp2_ParamLimits

0xcaa9,	// (0x00046ddf) list_highlight_pane_cp34_cp2

0xca93,	// (0x00046dc9) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca93,	// (0x00046dc9) list_single_graphic_hl_pane_g1_cp2

0xcab6,	// (0x00046dec) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcab6,	// (0x00046dec) list_single_graphic_hl_pane_g2_cp2

0xcac2,	// (0x00046df8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcac2,	// (0x00046df8) list_single_graphic_hl_pane_g3_cp2

0xc07e,	// (0x000463b4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc07e,	// (0x000463b4) list_single_graphic_hl_pane_g4_cp2

0xcad0,	// (0x00046e06) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcad0,	// (0x00046e06) list_single_graphic_hl_pane_g5_cp2

0x629f,	// (0x000405d5) control_pane_g4_ParamLimits

0x629f,	// (0x000405d5) control_pane_g4

0x9809,	// (0x00043b3f) bg_popup_sub_pane_cp10_ParamLimits

0xc2bd,	// (0x000465f3) list_choice_list_pane_ParamLimits

0xc2cc,	// (0x00046602) scroll_pane_cp23

0x8246,	// (0x0004257c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f6,	// (0x00046c2c) list_preview_fixed_pane_ParamLimits

0xc90c,	// (0x00046c42) list_preview_fixed_pane_cp_ParamLimits

0xc90c,	// (0x00046c42) list_preview_fixed_pane_cp

0xc918,	// (0x00046c4e) popup_preview_fixed_window_g1_ParamLimits

0xc918,	// (0x00046c4e) popup_preview_fixed_window_g1

0xc924,	// (0x00046c5a) popup_preview_fixed_window_g2_ParamLimits

0xc924,	// (0x00046c5a) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x00049ea0) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x00049ea0) popup_preview_fixed_window_g

0x5eac,	// (0x000401e2) aid_navi_side_left_pane_ParamLimits

0x5ec1,	// (0x000401f7) aid_navi_side_right_pane_ParamLimits

0x5ed9,	// (0x0004020f) navi_icon_pane_stacon_ParamLimits

0x5eed,	// (0x00040223) navi_navi_pane_stacon_ParamLimits

0x5ed9,	// (0x0004020f) navi_text_pane_stacon_ParamLimits

0x7ec9,	// (0x000421ff) main_text_info_pane

0xcafa,	// (0x00046e30) listscroll_text_info_pane

0xcb02,	// (0x00046e38) list_text_info_pane_ParamLimits

0xcb02,	// (0x00046e38) list_text_info_pane

0xcb11,	// (0x00046e47) scroll_pane_cp24_ParamLimits

0xcb11,	// (0x00046e47) scroll_pane_cp24

0xcb2f,	// (0x00046e65) list_text_info_pane_t1_ParamLimits

0xcb2f,	// (0x00046e65) list_text_info_pane_t1

0x640f,	// (0x00040745) popup_fast_swap2_window_ParamLimits

0x640f,	// (0x00040745) popup_fast_swap2_window

0xcb60,	// (0x00046e96) aid_size_cell_fast2

0x7ec9,	// (0x000421ff) bg_popup_window_pane_cp17

0xa179,	// (0x000444af) heading_pane_cp2

0x8495,	// (0x000427cb) listscroll_fast2_pane

0xcb6a,	// (0x00046ea0) grid_fast2_pane

0xcb74,	// (0x00046eaa) listscroll_fast2_pane_g1

0xcb7c,	// (0x00046eb2) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x00049f1c) listscroll_fast2_pane_g

0x8999,	// (0x00042ccf) scroll_pane_cp26

0xcb86,	// (0x00046ebc) cell_fast2_pane_ParamLimits

0xcb86,	// (0x00046ebc) cell_fast2_pane

0xcb9b,	// (0x00046ed1) cell_fast2_pane_g1

0xcba4,	// (0x00046eda) cell_fast2_pane_g2

0xcbad,	// (0x00046ee3) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x00049f21) cell_fast2_pane_g

0x8588,	// (0x000428be) grid_highlight_pane_cp9

0x859d,	// (0x000428d3) main_eswt_pane_ParamLimits

0x859d,	// (0x000428d3) main_eswt_pane

0xcb26,	// (0x00046e5c) list_single_text_info_pane

0xcbb5,	// (0x00046eeb) eswt_ctrl_button_pane

0xcbb5,	// (0x00046eeb) eswt_ctrl_canvas_pane

0xcbbd,	// (0x00046ef3) eswt_ctrl_combo_pane

0xcbb5,	// (0x00046eeb) eswt_ctrl_default_pane

0xcbb5,	// (0x00046eeb) eswt_ctrl_label_pane

0xcbc5,	// (0x00046efb) eswt_ctrl_wait_pane

0xcbcd,	// (0x00046f03) eswt_shell_pane

0x7ec9,	// (0x000421ff) listscroll_eswt_app_pane

0xcbed,	// (0x00046f23) popup_eswt_tasktip_window_ParamLimits

0xcbed,	// (0x00046f23) popup_eswt_tasktip_window

0x9d87,	// (0x000440bd) bg_popup_window_pane_cp18

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_ParamLimits

0xcbfe,	// (0x00046f34) eswt_control_pane_g1

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_ParamLimits

0xcc0b,	// (0x00046f41) eswt_control_pane_g2

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_ParamLimits

0xcc18,	// (0x00046f4e) eswt_control_pane_g3

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_ParamLimits

0xcc25,	// (0x00046f5b) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x00049f28) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x00049f28) eswt_control_pane_g

0x8838,	// (0x00042b6e) bg_button_pane_ParamLimits

0x8838,	// (0x00042b6e) bg_button_pane

0x859d,	// (0x000428d3) common_borders_pane_copy2_ParamLimits

0x859d,	// (0x000428d3) common_borders_pane_copy2

0xcc32,	// (0x00046f68) control_button_pane_g1_ParamLimits

0xcc32,	// (0x00046f68) control_button_pane_g1

0xcc3e,	// (0x00046f74) control_button_pane_g2_ParamLimits

0xcc3e,	// (0x00046f74) control_button_pane_g2

0xcc4a,	// (0x00046f80) control_button_pane_g3_ParamLimits

0xcc4a,	// (0x00046f80) control_button_pane_g3

0x0002,

0xfbfb,	// (0x00049f31) control_button_pane_g_ParamLimits

0xfbfb,	// (0x00049f31) control_button_pane_g

0xcc5e,	// (0x00046f94) control_button_pane_t1

0xcc6c,	// (0x00046fa2) control_button_pane_t2

0x0001,

0xfc02,	// (0x00049f38) control_button_pane_t

0x9d13,	// (0x00044049) bg_button_pane_g1

0x9d1b,	// (0x00044051) bg_button_pane_g2

0x9d23,	// (0x00044059) bg_button_pane_g3

0x9d2b,	// (0x00044061) bg_button_pane_g4

0x9d33,	// (0x00044069) bg_button_pane_g5

0x9d3b,	// (0x00044071) bg_button_pane_g6

0x9d43,	// (0x00044079) bg_button_pane_g7

0x9d4b,	// (0x00044081) bg_button_pane_g8

0x9d53,	// (0x00044089) bg_button_pane_g9

0x0008,

0xf86b,	// (0x00049ba1) bg_button_pane_g

0xc278,	// (0x000465ae) common_borders_pane_ParamLimits

0xc278,	// (0x000465ae) common_borders_pane

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy1_ParamLimits

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy1

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy1_ParamLimits

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy1

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy1_ParamLimits

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy1

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy1_ParamLimits

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy1

0xc2b3,	// (0x000465e9) bg_eswt_ctrl_canvas_pane_g1

0xc278,	// (0x000465ae) common_borders_pane_cp2_ParamLimits

0xc278,	// (0x000465ae) common_borders_pane_cp2

0xc278,	// (0x000465ae) common_borders_pane_cp3_ParamLimits

0xc278,	// (0x000465ae) common_borders_pane_cp3

0xcc7a,	// (0x00046fb0) separator_horizontal_pane

0xcc82,	// (0x00046fb8) separator_vertical_pane

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy2_ParamLimits

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy2

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy2_ParamLimits

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy2

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy2_ParamLimits

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy2

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy2_ParamLimits

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy2

0x7ec9,	// (0x000421ff) common_borders_pane_cp4

0xcc8b,	// (0x00046fc1) separator_horizontal_pane_g1

0xcc94,	// (0x00046fca) separator_horizontal_pane_g2

0xcc9d,	// (0x00046fd3) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x00049f3d) separator_horizontal_pane_g

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy3_ParamLimits

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy3

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy3_ParamLimits

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy3

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy3_ParamLimits

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy3

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy3_ParamLimits

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy3

0x7ec9,	// (0x000421ff) common_borders_pane_cp5

0xcca6,	// (0x00046fdc) separator_vertical_pane_g1

0xccaf,	// (0x00046fe5) separator_vertical_pane_g2

0xccb8,	// (0x00046fee) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x00049f44) separator_vertical_pane_g

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy4_ParamLimits

0xcbfe,	// (0x00046f34) eswt_control_pane_g1_copy4

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy4_ParamLimits

0xcc0b,	// (0x00046f41) eswt_control_pane_g2_copy4

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy4_ParamLimits

0xcc18,	// (0x00046f4e) eswt_control_pane_g3_copy4

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy4_ParamLimits

0xcc25,	// (0x00046f5b) eswt_control_pane_g4_copy4

0xccc1,	// (0x00046ff7) eswt_ctrl_combo_button_pane

0xccc9,	// (0x00046fff) eswt_ctrl_input_pane

0xccd1,	// (0x00047007) popup_choice_list_window_cp70

0xccd9,	// (0x0004700f) eswt_ctrl_input_pane_t1

0x7ec9,	// (0x000421ff) input_focus_pane_cp70

0xc278,	// (0x000465ae) bg_button_pane_cp70_ParamLimits

0xc278,	// (0x000465ae) bg_button_pane_cp70

0xcce7,	// (0x0004701d) eswt_ctrl_combo_button_pane_g1

0xccef,	// (0x00047025) wait_bar_pane_cp70

0x9d87,	// (0x000440bd) bg_popup_window_pane_cp70_ParamLimits

0x9d87,	// (0x000440bd) bg_popup_window_pane_cp70

0xccf7,	// (0x0004702d) popup_eswt_tasktip_window_t1

0xcd0d,	// (0x00047043) wait_bar_pane_cp71_ParamLimits

0xcd0d,	// (0x00047043) wait_bar_pane_cp71

0xcd19,	// (0x0004704f) grid_eswt_app_pane

0x8cbe,	// (0x00042ff4) scroll_pane_cp70

0xcd22,	// (0x00047058) cell_eswt_app_pane_ParamLimits

0xcd22,	// (0x00047058) cell_eswt_app_pane

0xcd52,	// (0x00047088) cell_eswt_app_pane_g1_ParamLimits

0xcd52,	// (0x00047088) cell_eswt_app_pane_g1

0xcd81,	// (0x000470b7) cell_eswt_app_pane_g2_ParamLimits

0xcd81,	// (0x000470b7) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x00049f4b) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x00049f4b) cell_eswt_app_pane_g

0xcdaa,	// (0x000470e0) cell_eswt_app_pane_t1_ParamLimits

0xcdaa,	// (0x000470e0) cell_eswt_app_pane_t1

0xcddc,	// (0x00047112) grid_highlight_pane_cp70_ParamLimits

0xcddc,	// (0x00047112) grid_highlight_pane_cp70

0x9394,	// (0x000436ca) set_content_pane_g1

0x976a,	// (0x00043aa0) status_small_volume_pane

0x7263,	// (0x00041599) status_small_volume_pane_g1

0x726b,	// (0x000415a1) volume_small2_pane

0x7274,	// (0x000415aa) volume_small2_pane_g1

0x727d,	// (0x000415b3) volume_small2_pane_g2

0x7286,	// (0x000415bc) volume_small2_pane_g3

0x728f,	// (0x000415c5) volume_small2_pane_g4

0x7298,	// (0x000415ce) volume_small2_pane_g5

0x72a1,	// (0x000415d7) volume_small2_pane_g6

0x72aa,	// (0x000415e0) volume_small2_pane_g7

0x72b3,	// (0x000415e9) volume_small2_pane_g8

0x72bc,	// (0x000415f2) volume_small2_pane_g9

0x72c5,	// (0x000415fb) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x00049f50) volume_small2_pane_g

0xc679,	// (0x000469af) fep_vkb_top_text_pane_g1_ParamLimits

0xc694,	// (0x000469ca) fep_vkb_top_text_pane_t1_ParamLimits

0xc930,	// (0x00046c66) popup_preview_fixed_window_g3_ParamLimits

0xc930,	// (0x00046c66) popup_preview_fixed_window_g3

0x68be,	// (0x00040bf4) popup_toolbar_trans_pane

0xb0dd,	// (0x00045413) aid_height_set_list_ParamLimits

0xb0ee,	// (0x00045424) aid_size_parent_ParamLimits

0x9809,	// (0x00043b3f) list_highlight_pane_cp2_ParamLimits

0x9394,	// (0x000436ca) set_content_pane_g1_ParamLimits

0x5256,	// (0x0003f58c) list_single_image_pane_ParamLimits

0x5256,	// (0x0003f58c) list_single_image_pane

0xcde8,	// (0x0004711e) aid_size_cell_image_ParamLimits

0xcde8,	// (0x0004711e) aid_size_cell_image

0xcdf5,	// (0x0004712b) grid_single_image_pane_ParamLimits

0xcdf5,	// (0x0004712b) grid_single_image_pane

0x9fe8,	// (0x0004431e) list_single_image_pane_g1_ParamLimits

0x9fe8,	// (0x0004431e) list_single_image_pane_g1

0xce01,	// (0x00047137) list_single_image_pane_g2_ParamLimits

0xce01,	// (0x00047137) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x00049f65) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x00049f65) list_single_image_pane_g

0xce15,	// (0x0004714b) list_single_image_pane_t1_ParamLimits

0xce15,	// (0x0004714b) list_single_image_pane_t1

0xce2b,	// (0x00047161) cell_image_list_pane_ParamLimits

0xce2b,	// (0x00047161) cell_image_list_pane

0xce3f,	// (0x00047175) cell_image_list_pane_g1

0xce48,	// (0x0004717e) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x00049f6a) cell_image_list_pane_g

0xce51,	// (0x00047187) aid_size_cell_tb_trans_pane

0x8838,	// (0x00042b6e) bg_tb_trans_pane

0xce63,	// (0x00047199) grid_tb_trans_pane

0x9d13,	// (0x00044049) bg_tb_trans_pane_g1

0x9d1b,	// (0x00044051) bg_tb_trans_pane_g2

0x9d23,	// (0x00044059) bg_tb_trans_pane_g3

0x9d2b,	// (0x00044061) bg_tb_trans_pane_g4

0x9d33,	// (0x00044069) bg_tb_trans_pane_g5

0x9d4b,	// (0x00044081) bg_tb_trans_pane_g6

0x9d53,	// (0x00044089) bg_tb_trans_pane_g7

0x9d3b,	// (0x00044071) bg_tb_trans_pane_g8

0x9d43,	// (0x00044079) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x00049f6f) bg_tb_trans_pane_g

0xce77,	// (0x000471ad) cell_toolbar_trans_pane_ParamLimits

0xce77,	// (0x000471ad) cell_toolbar_trans_pane

0xc2b3,	// (0x000465e9) cell_toolbar_trans_pane_g1

0xbe8b,	// (0x000461c1) list_form2_midp_pane_t1

0xbe99,	// (0x000461cf) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x00049e18) list_form2_midp_pane_t

0xbea7,	// (0x000461dd) scroll_pane_cp51_ParamLimits

0xc063,	// (0x00046399) form2_midp_wait_pane_g1

0xc06c,	// (0x000463a2) form2_midp_wait_pane_g2

0xc075,	// (0x000463ab) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x00049e2d) form2_midp_wait_pane_g

0x7fbd,	// (0x000422f3) list_highlight_pane_cp21_ParamLimits

0xc0cd,	// (0x00046403) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0dc,	// (0x00046412) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6d17,	// (0x0004104d) list_single_2graphic_im_pane_ParamLimits

0x6d17,	// (0x0004104d) list_single_2graphic_im_pane

0xce9d,	// (0x000471d3) list_single_2graphic_im_pane_g1_ParamLimits

0xce9d,	// (0x000471d3) list_single_2graphic_im_pane_g1

0xceae,	// (0x000471e4) list_single_2graphic_im_pane_g2_ParamLimits

0xceae,	// (0x000471e4) list_single_2graphic_im_pane_g2

0xceba,	// (0x000471f0) list_single_2graphic_im_pane_g3_ParamLimits

0xceba,	// (0x000471f0) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x00049f82) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x00049f82) list_single_2graphic_im_pane_g

0xceda,	// (0x00047210) list_single_2graphic_im_pane_t1_ParamLimits

0xceda,	// (0x00047210) list_single_2graphic_im_pane_t1

0xc93c,	// (0x00046c72) list_single_graphic_2heading_pane_fp_ParamLimits

0xc93c,	// (0x00046c72) list_single_graphic_2heading_pane_fp

0x5601,	// (0x0003f937) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5601,	// (0x0003f937) list_single_graphic_2heading_pane_fp_g1

0xc951,	// (0x00046c87) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc951,	// (0x00046c87) list_single_graphic_2heading_pane_fp_g2

0x87d3,	// (0x00042b09) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87d3,	// (0x00042b09) list_single_graphic_2heading_pane_fp_g3

0x8846,	// (0x00042b7c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x8846,	// (0x00042b7c) list_single_graphic_2heading_pane_fp_g4

0xc95d,	// (0x00046c93) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc95d,	// (0x00046c93) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x00049eb0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x00049eb0) list_single_graphic_2heading_pane_fp_g

0x574a,	// (0x0003fa80) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x574a,	// (0x0003fa80) list_single_graphic_2heading_pane_fp_t1

0x5639,	// (0x0003f96f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5639,	// (0x0003f96f) list_single_graphic_2heading_pane_fp_t2

0x5760,	// (0x0003fa96) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5760,	// (0x0003fa96) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x00049f8b) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x00049f8b) list_single_graphic_2heading_pane_fp_t

0xc33f,	// (0x00046675) fep_hwr_write_pane_g5_ParamLimits

0xc33f,	// (0x00046675) fep_hwr_write_pane_g5

0xc34b,	// (0x00046681) fep_hwr_write_pane_g6_ParamLimits

0xc34b,	// (0x00046681) fep_hwr_write_pane_g6

0xcbcd,	// (0x00046f03) eswt_shell_pane_ParamLimits

0x9d87,	// (0x000440bd) bg_popup_window_pane_cp18_ParamLimits

0xb036,	// (0x0004536c) heading_pane_cp70

0xccf7,	// (0x0004702d) popup_eswt_tasktip_window_t1_ParamLimits

0x9880,	// (0x00043bb6) aid_touch_tab_arrow_left

0x988f,	// (0x00043bc5) aid_touch_tab_arrow_right

0x7f05,	// (0x0004223b) title_pane_g3_ParamLimits

0x7f05,	// (0x0004223b) title_pane_g3

0x87f7,	// (0x00042b2d) set_value_pane_g1

0x68be,	// (0x00040bf4) popup_toolbar_trans_pane_ParamLimits

0xce51,	// (0x00047187) aid_size_cell_tb_trans_pane_ParamLimits

0x8838,	// (0x00042b6e) bg_tb_trans_pane_ParamLimits

0xce63,	// (0x00047199) grid_tb_trans_pane_ParamLimits

0x8246,	// (0x0004257c) cont_note_pane_ParamLimits

0x8246,	// (0x0004257c) cont_note_pane

0x859d,	// (0x000428d3) cont_snote2_single_text_pane_ParamLimits

0x859d,	// (0x000428d3) cont_snote2_single_text_pane

0x859d,	// (0x000428d3) cont_snote2_single_graphic_pane_ParamLimits

0x859d,	// (0x000428d3) cont_snote2_single_graphic_pane

0xa394,	// (0x000446ca) cont_note_wait_pane_ParamLimits

0xa394,	// (0x000446ca) cont_note_wait_pane

0xa394,	// (0x000446ca) cont_note_image_pane_ParamLimits

0xa394,	// (0x000446ca) cont_note_image_pane

0xcf0b,	// (0x00047241) popup_note2_window_g1_ParamLimits

0xcf0b,	// (0x00047241) popup_note2_window_g1

0xcf3c,	// (0x00047272) popup_note2_window_t1_ParamLimits

0xcf3c,	// (0x00047272) popup_note2_window_t1

0xcf81,	// (0x000472b7) popup_note2_window_t2_ParamLimits

0xcf81,	// (0x000472b7) popup_note2_window_t2

0xcfc6,	// (0x000472fc) popup_note2_window_t3_ParamLimits

0xcfc6,	// (0x000472fc) popup_note2_window_t3

0xd00b,	// (0x00047341) popup_note2_window_t4_ParamLimits

0xd00b,	// (0x00047341) popup_note2_window_t4

0x82ca,	// (0x00042600) popup_note2_window_t5_ParamLimits

0x82ca,	// (0x00042600) popup_note2_window_t5

0x0004,

0xfc61,	// (0x00049f97) popup_note2_window_t_ParamLimits

0xfc61,	// (0x00049f97) popup_note2_window_t

0xd03a,	// (0x00047370) popup_note2_image_window_g1_ParamLimits

0xd03a,	// (0x00047370) popup_note2_image_window_g1

0xd046,	// (0x0004737c) popup_note2_image_window_g2_ParamLimits

0xd046,	// (0x0004737c) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x00049fa2) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x00049fa2) popup_note2_image_window_g

0xd058,	// (0x0004738e) popup_note2_image_window_t1_ParamLimits

0xd058,	// (0x0004738e) popup_note2_image_window_t1

0xd070,	// (0x000473a6) popup_note2_image_window_t2_ParamLimits

0xd070,	// (0x000473a6) popup_note2_image_window_t2

0xd088,	// (0x000473be) popup_note2_image_window_t3_ParamLimits

0xd088,	// (0x000473be) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x00049fa7) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x00049fa7) popup_note2_image_window_t

0xa3a2,	// (0x000446d8) popup_note2_wait_window_g1_ParamLimits

0xa3a2,	// (0x000446d8) popup_note2_wait_window_g1

0xd0a4,	// (0x000473da) popup_note2_wait_window_g2_ParamLimits

0xd0a4,	// (0x000473da) popup_note2_wait_window_g2

0xa3ba,	// (0x000446f0) popup_note2_wait_window_g3_ParamLimits

0xa3ba,	// (0x000446f0) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x00049fae) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x00049fae) popup_note2_wait_window_g

0xd0b0,	// (0x000473e6) popup_note2_wait_window_t1_ParamLimits

0xd0b0,	// (0x000473e6) popup_note2_wait_window_t1

0xd0ce,	// (0x00047404) popup_note2_wait_window_t2_ParamLimits

0xd0ce,	// (0x00047404) popup_note2_wait_window_t2

0xd0ec,	// (0x00047422) popup_note2_wait_window_t3_ParamLimits

0xd0ec,	// (0x00047422) popup_note2_wait_window_t3

0xd0fe,	// (0x00047434) popup_note2_wait_window_t4_ParamLimits

0xd0fe,	// (0x00047434) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x00049fb5) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x00049fb5) popup_note2_wait_window_t

0xd110,	// (0x00047446) wait_bar2_pane_ParamLimits

0xd110,	// (0x00047446) wait_bar2_pane

0xd128,	// (0x0004745e) popup_snote2_single_text_window_g1_ParamLimits

0xd128,	// (0x0004745e) popup_snote2_single_text_window_g1

0xd150,	// (0x00047486) popup_snote2_single_text_window_t1_ParamLimits

0xd150,	// (0x00047486) popup_snote2_single_text_window_t1

0xd19c,	// (0x000474d2) popup_snote2_single_text_window_t2_ParamLimits

0xd19c,	// (0x000474d2) popup_snote2_single_text_window_t2

0xd1e8,	// (0x0004751e) popup_snote2_single_text_window_t3_ParamLimits

0xd1e8,	// (0x0004751e) popup_snote2_single_text_window_t3

0xd229,	// (0x0004755f) popup_snote2_single_text_window_t4_ParamLimits

0xd229,	// (0x0004755f) popup_snote2_single_text_window_t4

0xd25f,	// (0x00047595) popup_snote2_single_text_window_t5_ParamLimits

0xd25f,	// (0x00047595) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x00049fbe) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x00049fbe) popup_snote2_single_text_window_t

0xd28a,	// (0x000475c0) popup_snote2_single_graphic_window_g1_ParamLimits

0xd28a,	// (0x000475c0) popup_snote2_single_graphic_window_g1

0xd2b2,	// (0x000475e8) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2b2,	// (0x000475e8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x00049fc9) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x00049fc9) popup_snote2_single_graphic_window_g

0xd2da,	// (0x00047610) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2da,	// (0x00047610) popup_snote2_single_graphic_window_t1

0xd326,	// (0x0004765c) popup_snote2_single_graphic_window_t2_ParamLimits

0xd326,	// (0x0004765c) popup_snote2_single_graphic_window_t2

0xd1e8,	// (0x0004751e) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e8,	// (0x0004751e) popup_snote2_single_graphic_window_t3

0xd229,	// (0x0004755f) popup_snote2_single_graphic_window_t4_ParamLimits

0xd229,	// (0x0004755f) popup_snote2_single_graphic_window_t4

0xd25f,	// (0x00047595) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25f,	// (0x00047595) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x00049fce) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x00049fce) popup_snote2_single_graphic_window_t

0xbd68,	// (0x0004609e) clock_nsta_pane_cp2_t1

0xbd68,	// (0x0004609e) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x00049dee) clock_nsta_pane_cp2_t

0x4e43,	// (0x0003f179) form_field_data_wide_pane_g1_ParamLimits

0x87d3,	// (0x00042b09) form_field_data_wide_pane_g2_ParamLimits

0x87d3,	// (0x00042b09) form_field_data_wide_pane_g2

0x8846,	// (0x00042b7c) form_field_data_wide_pane_g3_ParamLimits

0x8846,	// (0x00042b7c) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x000499b6) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x000499b6) form_field_data_wide_pane_g

0xbc6b,	// (0x00045fa1) grid_touch_3_pane_ParamLimits

0xbc6b,	// (0x00045fa1) grid_touch_3_pane

0xd372,	// (0x000476a8) cell_touch_3_pane_ParamLimits

0xd372,	// (0x000476a8) cell_touch_3_pane

0xc2b3,	// (0x000465e9) cell_touch_3_pane_g1

0xc2b3,	// (0x000465e9) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x00049e73) cell_touch_3_pane_g

0x82fc,	// (0x00042632) cont_query_data_pane

0x8304,	// (0x0004263a) cont_query_data_pane_cp1

0xd3a0,	// (0x000476d6) button_value_adjust_pane_cp7

0xd3a8,	// (0x000476de) query_popup_pane_cp3

0x8f9c,	// (0x000432d2) bg_popup_sub_pane_cp22_ParamLimits

0x5fee,	// (0x00040324) navi_navi_volume_pane_cp2

0x6009,	// (0x0004033f) popup_side_volume_key_window_g2

0x6018,	// (0x0004034e) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049a4c) popup_side_volume_key_window_g

0x6035,	// (0x0004036b) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049a53) popup_side_volume_key_window_t

0x9253,	// (0x00043589) popup_side_volume_key_window_ParamLimits

0x4a8b,	// (0x0003edc1) list_double_graphic_pane_g4_ParamLimits

0x4a8b,	// (0x0003edc1) list_double_graphic_pane_g4

0x6d54,	// (0x0004108a) list_single_2heading_msg_pane_ParamLimits

0x6d54,	// (0x0004108a) list_single_2heading_msg_pane

0x72ce,	// (0x00041604) list_single_2heading_msg_pane_g1_ParamLimits

0x72ce,	// (0x00041604) list_single_2heading_msg_pane_g1

0x93f8,	// (0x0004372e) list_single_2heading_msg_pane_g2_ParamLimits

0x93f8,	// (0x0004372e) list_single_2heading_msg_pane_g2

0x6e5b,	// (0x00041191) list_single_2heading_msg_pane_g3_ParamLimits

0x6e5b,	// (0x00041191) list_single_2heading_msg_pane_g3

0x72da,	// (0x00041610) list_single_2heading_msg_pane_g4_ParamLimits

0x72da,	// (0x00041610) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x00049fd9) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x00049fd9) list_single_2heading_msg_pane_g

0x5780,	// (0x0003fab6) list_single_2heading_msg_pane_t1_ParamLimits

0x5780,	// (0x0003fab6) list_single_2heading_msg_pane_t1

0x57a8,	// (0x0003fade) list_single_2heading_msg_pane_t2_ParamLimits

0x57a8,	// (0x0003fade) list_single_2heading_msg_pane_t2

0x57dc,	// (0x0003fb12) list_single_2heading_msg_pane_t3_ParamLimits

0x57dc,	// (0x0003fb12) list_single_2heading_msg_pane_t3

0x5815,	// (0x0003fb4b) list_single_2heading_msg_pane_t4_ParamLimits

0x5815,	// (0x0003fb4b) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x00049fe2) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x00049fe2) list_single_2heading_msg_pane_t

0x7f11,	// (0x00042247) title_pane_g4_ParamLimits

0x7f11,	// (0x00042247) title_pane_g4

0x5dfd,	// (0x00040133) title_pane_stacon_g3_ParamLimits

0x5dfd,	// (0x00040133) title_pane_stacon_g3

0xcece,	// (0x00047204) list_single_2graphic_im_pane_g4_ParamLimits

0xcece,	// (0x00047204) list_single_2graphic_im_pane_g4

0xadf3,	// (0x00045129) popup_side_volume_key_window_cp

0xb5b9,	// (0x000458ef) main_idle_act2_pane_t1

0x69bc,	// (0x00040cf2) toolbar_button_pane_g10

0x8795,	// (0x00042acb) popup_toolbar_window_cp1

0xbd59,	// (0x0004608f) clock_nsta_pane_cp_t1

0xbd59,	// (0x0004608f) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x00049de9) clock_nsta_pane_cp_t

0x5fee,	// (0x00040324) navi_navi_volume_pane_cp2_ParamLimits

0x5ffd,	// (0x00040333) popup_side_volume_key_window_g1_ParamLimits

0x6009,	// (0x0004033f) popup_side_volume_key_window_g2_ParamLimits

0x6018,	// (0x0004034e) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049a4c) popup_side_volume_key_window_g_ParamLimits

0x6eef,	// (0x00041225) fep_hwr_aid_pane

0x2b5d,	// (0x0003ce93) bg_fep_hwr_top_pane_g4_ParamLimits

0xc30f,	// (0x00046645) fep_hwr_top_pane_g1_ParamLimits

0xc321,	// (0x00046657) fep_hwr_top_pane_g2_ParamLimits

0x6fa8,	// (0x000412de) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x00049e3e) fep_hwr_top_pane_g_ParamLimits

0x6fbd,	// (0x000412f3) fep_hwr_top_text_pane_ParamLimits

0xabb6,	// (0x00044eec) aid_touch_tab_arrow_arrow_2

0xabbf,	// (0x00044ef5) aid_touch_tab_arrow_left_2

0x6f03,	// (0x00041239) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6f3a,	// (0x00041270) fep_hwr_prediction_pane

0xc481,	// (0x000467b7) fep_vkb_prediction_pane

0xc585,	// (0x000468bb) fep_vkb_side_pane_g3_ParamLimits

0xc585,	// (0x000468bb) fep_vkb_side_pane_g3

0xc531,	// (0x00046867) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc9b1,	// (0x00046ce7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc9be,	// (0x00046cf4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb2,	// (0x00049ee8) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd3cd,	// (0x00047703) fep_hwr_prediction_pane_g1

0x72f2,	// (0x00041628) fep_hwr_prediction_pane_g2

0x72fa,	// (0x00041630) fep_hwr_prediction_pane_g3

0x7302,	// (0x00041638) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x00049feb) fep_hwr_prediction_pane_g

0xd3cd,	// (0x00047703) fep_vkb_prediction_pane_g1

0xd3d7,	// (0x0004770d) fep_vkb_prediction_pane_g2

0xd3df,	// (0x00047715) fep_vkb_prediction_pane_g3

0xd3e7,	// (0x0004771d) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00049ff4) fep_vkb_prediction_pane_g

0x6ca4,	// (0x00040fda) slider_set_pane_g3

0x6cb8,	// (0x00040fee) slider_set_pane_g4

0x6cd0,	// (0x00041006) slider_set_pane_g5

0x6ca4,	// (0x00040fda) slider_set_pane_g6

0x6ce6,	// (0x0004101c) slider_set_pane_g7

0xb253,	// (0x00045589) slider_form_pane_g3

0xb25c,	// (0x00045592) slider_form_pane_g4

0xb264,	// (0x0004559a) slider_form_pane_g5

0xb253,	// (0x00045589) slider_form_pane_g6

0xb26c,	// (0x000455a2) slider_form_pane_g7

0xb863,	// (0x00045b99) slider_set_pane_vc_g3

0xb86c,	// (0x00045ba2) slider_set_pane_vc_g4

0xb875,	// (0x00045bab) slider_set_pane_vc_g5

0xb863,	// (0x00045b99) slider_set_pane_vc_g6

0xb87e,	// (0x00045bb4) slider_set_pane_vc_g7

0xba3e,	// (0x00045d74) slider_form_pane_vc_g1

0xba47,	// (0x00045d7d) slider_form_pane_vc_g2

0xba50,	// (0x00045d86) slider_form_pane_vc_g3

0xba3e,	// (0x00045d74) slider_form_pane_vc_g4

0xba59,	// (0x00045d8f) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x00049dbb) slider_form_pane_vc_g

0x7ec9,	// (0x000421ff) main_idle_act3_pane

0xd3ef,	// (0x00047725) ai3_links_pane

0xd3f8,	// (0x0004772e) popup_ai3_data_window_ParamLimits

0xd3f8,	// (0x0004772e) popup_ai3_data_window

0x7ec9,	// (0x000421ff) grid_ai3_links_pane

0xd412,	// (0x00047748) cell_ai3_links_pane_ParamLimits

0xd412,	// (0x00047748) cell_ai3_links_pane

0xd42a,	// (0x00047760) bg_popup_sub_pane_cp11

0xd437,	// (0x0004776d) cell_ai3_links_pane_g1

0x7ec9,	// (0x000421ff) bg_popup_sub_pane_cp12

0xd45c,	// (0x00047792) heading_ai3_data_pane

0xd464,	// (0x0004779a) list_ai3_gene_pane

0xd470,	// (0x000477a6) popup_ai3_data_window_g1

0xd478,	// (0x000477ae) heading_ai3_data_pane_g1

0xd480,	// (0x000477b6) heading_ai3_data_pane_t1

0xd48e,	// (0x000477c4) list_double_ai3_gene_pane_ParamLimits

0xd48e,	// (0x000477c4) list_double_ai3_gene_pane

0xd49b,	// (0x000477d1) list_single_ai3_gene_pane_ParamLimits

0xd49b,	// (0x000477d1) list_single_ai3_gene_pane

0xc278,	// (0x000465ae) list_highlight_pane_cp7_ParamLimits

0xc278,	// (0x000465ae) list_highlight_pane_cp7

0xd4a8,	// (0x000477de) list_single_a13_gene_pane_t1_ParamLimits

0xd4a8,	// (0x000477de) list_single_a13_gene_pane_t1

0xd4bf,	// (0x000477f5) list_single_ai3_gene_pane_g1

0xd4c8,	// (0x000477fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x00049ffd) list_single_ai3_gene_pane_g

0xd4d0,	// (0x00047806) list_double_ai3_gene_pane_g1_ParamLimits

0xd4d0,	// (0x00047806) list_double_ai3_gene_pane_g1

0xd4dc,	// (0x00047812) list_double_ai3_gene_pane_t1_ParamLimits

0xd4dc,	// (0x00047812) list_double_ai3_gene_pane_t1

0xd4f8,	// (0x0004782e) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f8,	// (0x0004782e) list_double_ai3_gene_pane_t2

0xd50e,	// (0x00047844) list_double_ai3_gene_pane_t3_ParamLimits

0xd50e,	// (0x00047844) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0004a002) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0004a002) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5776,	// (0x0003faac) aid_size_min_col_2

0xd3b9,	// (0x000476ef) aid_size_min_msg_ParamLimits

0xd3b9,	// (0x000476ef) aid_size_min_msg

0xc685,	// (0x000469bb) fep_vkb_top_text_pane_g2_ParamLimits

0xc685,	// (0x000469bb) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x00049e6e) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x00049e6e) fep_vkb_top_text_pane_g

0x7ec9,	// (0x000421ff) main_hc_apps_shell_pane

0xd52b,	// (0x00047861) grid_hc_apps_pane_ParamLimits

0xd52b,	// (0x00047861) grid_hc_apps_pane

0xd53a,	// (0x00047870) list_hc_apps_pane

0xd542,	// (0x00047878) scroll_pane_cp37_ParamLimits

0xd542,	// (0x00047878) scroll_pane_cp37

0xd54e,	// (0x00047884) cell_hc_apps_pane_ParamLimits

0xd54e,	// (0x00047884) cell_hc_apps_pane

0xd5fc,	// (0x00047932) cell_hc_apps_pane_g1_ParamLimits

0xd5fc,	// (0x00047932) cell_hc_apps_pane_g1

0xd62d,	// (0x00047963) cell_hc_apps_pane_g2_ParamLimits

0xd62d,	// (0x00047963) cell_hc_apps_pane_g2

0xd649,	// (0x0004797f) cell_hc_apps_pane_g3_ParamLimits

0xd649,	// (0x0004797f) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0004a009) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0004a009) cell_hc_apps_pane_g

0xd66b,	// (0x000479a1) cell_hc_apps_pane_t1_ParamLimits

0xd66b,	// (0x000479a1) cell_hc_apps_pane_t1

0x8246,	// (0x0004257c) grid_highlight_pane_cp10_ParamLimits

0x8246,	// (0x0004257c) grid_highlight_pane_cp10

0xd6ab,	// (0x000479e1) list_single_hc_apps_pane_ParamLimits

0xd6ab,	// (0x000479e1) list_single_hc_apps_pane

0xd707,	// (0x00047a3d) list_single_hc_apps_pane_g1

0x730a,	// (0x00041640) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0004a010) list_single_hc_apps_pane_g

0x7323,	// (0x00041659) list_single_hc_apps_pane_g2_copy1

0x583a,	// (0x0003fb70) list_single_hc_apps_pane_t1

0x7fbd,	// (0x000422f3) bg_set_opt_pane_cp_ParamLimits

0x5c79,	// (0x0003ffaf) setting_slider_pane_t1_ParamLimits

0x5c92,	// (0x0003ffc8) setting_slider_pane_t2_ParamLimits

0x5cac,	// (0x0003ffe2) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049894) setting_slider_pane_t_ParamLimits

0x5cc4,	// (0x0003fffa) slider_set_pane_ParamLimits

0x62b3,	// (0x000405e9) control_pane_g5_ParamLimits

0x62b3,	// (0x000405e9) control_pane_g5

0xb0a2,	// (0x000453d8) slider_set_pane_g1_ParamLimits

0x6c98,	// (0x00040fce) slider_set_pane_g2_ParamLimits

0x6ca4,	// (0x00040fda) slider_set_pane_g3_ParamLimits

0x6cb8,	// (0x00040fee) slider_set_pane_g4_ParamLimits

0x6cd0,	// (0x00041006) slider_set_pane_g5_ParamLimits

0x6ca4,	// (0x00040fda) slider_set_pane_g6_ParamLimits

0x6ce6,	// (0x0004101c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x00049c9f) slider_set_pane_g_ParamLimits

0x933f,	// (0x00043675) navi_icon_text_pane_ParamLimits

0x9841,	// (0x00043b77) aid_fill_nsta_2_ParamLimits

0x9880,	// (0x00043bb6) aid_touch_tab_arrow_left_ParamLimits

0x988f,	// (0x00043bc5) aid_touch_tab_arrow_right_ParamLimits

0x98fc,	// (0x00043c32) clock_nsta_pane_ParamLimits

0xab98,	// (0x00044ece) navi_icon_pane_g1_ParamLimits

0xaba4,	// (0x00044eda) navi_text_pane_t1_ParamLimits

0xbe65,	// (0x0004619b) navi_icon_text_pane_g1_ParamLimits

0xbe71,	// (0x000461a7) navi_icon_text_pane_t1_ParamLimits

0xd707,	// (0x00047a3d) list_single_hc_apps_pane_g1_ParamLimits

0x730a,	// (0x00041640) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0004a010) list_single_hc_apps_pane_g_ParamLimits

0x7323,	// (0x00041659) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x583a,	// (0x0003fb70) list_single_hc_apps_pane_t1_ParamLimits

0x5b83,	// (0x0003feb9) popup_toolbar2_fixed_window_ParamLimits

0x5b83,	// (0x0003feb9) popup_toolbar2_fixed_window

0x68b4,	// (0x00040bea) popup_toolbar2_float_window

0x7ec9,	// (0x000421ff) bg_popup_sub_pane_cp27

0xd720,	// (0x00047a56) grid_toolbar2_float_pane

0x7ec9,	// (0x000421ff) bg_popup_sub_pane_cp26

0xd720,	// (0x00047a56) grid_toolbar2_fixed_pane

0xd728,	// (0x00047a5e) cell_toolbar2_fixed_pane_ParamLimits

0xd728,	// (0x00047a5e) cell_toolbar2_fixed_pane

0xd738,	// (0x00047a6e) cell_toolbar2_fixed_pane_g1

0xd741,	// (0x00047a77) toolbar2_fixed_button_pane

0x9d13,	// (0x00044049) toolbar2_fixed_button_pane_g1

0x9d1b,	// (0x00044051) toolbar2_fixed_button_pane_g2

0x9d23,	// (0x00044059) toolbar2_fixed_button_pane_g3

0x9d2b,	// (0x00044061) toolbar2_fixed_button_pane_g4

0x9d33,	// (0x00044069) toolbar2_fixed_button_pane_g5

0x9d3b,	// (0x00044071) toolbar2_fixed_button_pane_g6

0x9d43,	// (0x00044079) toolbar2_fixed_button_pane_g7

0x9d4b,	// (0x00044081) toolbar2_fixed_button_pane_g8

0x9d53,	// (0x00044089) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x00049ba1) toolbar2_fixed_button_pane_g

0xd749,	// (0x00047a7f) cell_toolbar2_float_pane_ParamLimits

0xd749,	// (0x00047a7f) cell_toolbar2_float_pane

0xd75a,	// (0x00047a90) cell_toolbar2_float_pane_g1

0xd741,	// (0x00047a77) toolbar2_fixed_button_pane_cp

0xc3e1,	// (0x00046717) fep_vkb_accented_list_pane_ParamLimits

0xc3e1,	// (0x00046717) fep_vkb_accented_list_pane

0x710b,	// (0x00041441) bg_popup_fep_shadow_pane_g9

0x94bf,	// (0x000437f5) bg_popup_fep_shadow_pane_cp3

0x8980,	// (0x00042cb6) list_accented_list_pane

0xd763,	// (0x00047a99) list_single_accented_list_pane_ParamLimits

0xd763,	// (0x00047a99) list_single_accented_list_pane

0x94bf,	// (0x000437f5) list_highlight_pane_cp10

0xd774,	// (0x00047aaa) list_single_accented_list_pane_t1

0x6804,	// (0x00040b3a) popup_slider_window_ParamLimits

0x6804,	// (0x00040b3a) popup_slider_window

0xd3b0,	// (0x000476e6) aid_indentation_list_msg

0xd82e,	// (0x00047b64) bg_popup_window_pane_cp19

0xd898,	// (0x00047bce) popup_slider_window_g1

0xd8b4,	// (0x00047bea) popup_slider_window_g2

0xd8d0,	// (0x00047c06) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0004a015) popup_slider_window_g

0xd92c,	// (0x00047c62) popup_slider_window_t1

0xd9a0,	// (0x00047cd6) small_volume_slider_vertical_pane

0xc2b3,	// (0x000465e9) small_volume_slider_vertical_pane_g1

0xc2b3,	// (0x000465e9) small_volume_slider_vertical_pane_g2

0xd9bc,	// (0x00047cf2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0004a027) small_volume_slider_vertical_pane_g

0x5945,	// (0x0003fc7b) area_side_right_pane_ParamLimits

0x5945,	// (0x0003fc7b) area_side_right_pane

0x733f,	// (0x00041675) aid_size_side_button_ParamLimits

0x733f,	// (0x00041675) aid_size_side_button

0x7353,	// (0x00041689) grid_sctrl_middle_pane_ParamLimits

0x7353,	// (0x00041689) grid_sctrl_middle_pane

0x7372,	// (0x000416a8) sctrl_sk_bottom_pane

0x7383,	// (0x000416b9) sctrl_sk_top_pane

0x7395,	// (0x000416cb) aid_touch_sctrl_top

0x8246,	// (0x0004257c) bg_sctrl_sk_pane_ParamLimits

0x8246,	// (0x0004257c) bg_sctrl_sk_pane

0x73a2,	// (0x000416d8) sctrl_sk_top_pane_g1

0x73af,	// (0x000416e5) sctrl_sk_top_pane_t1

0x7395,	// (0x000416cb) aid_touch_sctrl_bottom

0x8246,	// (0x0004257c) bg_sctrl_sk_pane_cp_ParamLimits

0x8246,	// (0x0004257c) bg_sctrl_sk_pane_cp

0x73ca,	// (0x00041700) sctrl_sk_bottom_pane_g1

0x73af,	// (0x000416e5) sctrl_sk_bottom_pane_t1

0x73d3,	// (0x00041709) cell_sctrl_middle_pane_ParamLimits

0x73d3,	// (0x00041709) cell_sctrl_middle_pane

0x73ee,	// (0x00041724) aid_touch_sctrl_middle_ParamLimits

0x73ee,	// (0x00041724) aid_touch_sctrl_middle

0x8838,	// (0x00042b6e) bg_sctrl_middle_pane_ParamLimits

0x8838,	// (0x00042b6e) bg_sctrl_middle_pane

0xc531,	// (0x00046867) cell_sctrl_middle_pane_g1_ParamLimits

0xc531,	// (0x00046867) cell_sctrl_middle_pane_g1

0x7400,	// (0x00041736) cell_sctrl_middle_pane_g2_ParamLimits

0x7400,	// (0x00041736) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0004a033) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0004a033) cell_sctrl_middle_pane_g

0x9d13,	// (0x00044049) bg_sctrl_middle_pane_g1

0x9d1b,	// (0x00044051) bg_sctrl_middle_pane_g2

0x9d23,	// (0x00044059) bg_sctrl_middle_pane_g3

0x9d2b,	// (0x00044061) bg_sctrl_middle_pane_g4

0x9d33,	// (0x00044069) bg_sctrl_middle_pane_g5

0x9d3b,	// (0x00044071) bg_sctrl_middle_pane_g6

0x9d43,	// (0x00044079) bg_sctrl_middle_pane_g7

0x9d4b,	// (0x00044081) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0004a038) bg_sctrl_middle_pane_g

0x9d53,	// (0x00044089) bg_sctrl_middle_pane_g8_copy1

0x9d13,	// (0x00044049) bg_sctrl_sk_pane_g1

0x9d1b,	// (0x00044051) bg_sctrl_sk_pane_g2

0x9d23,	// (0x00044059) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x00049ba1) bg_sctrl_sk_pane_g

0x875b,	// (0x00042a91) aid_size_touch_scroll_bar

0x9d2b,	// (0x00044061) bg_sctrl_sk_pane_g4

0x9d33,	// (0x00044069) bg_sctrl_sk_pane_g5

0x9d3b,	// (0x00044071) bg_sctrl_sk_pane_g6

0x9d43,	// (0x00044079) bg_sctrl_sk_pane_g7

0x9d4b,	// (0x00044081) bg_sctrl_sk_pane_g8

0x9d53,	// (0x00044089) bg_sctrl_sk_pane_g9

0x646d,	// (0x000407a3) popup_fep_china_hwr2_fs_candidate_window

0x6477,	// (0x000407ad) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x6477,	// (0x000407ad) popup_fep_china_hwr2_fs_control_window

0xc531,	// (0x00046867) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0004a02e) sctrl_sk_top_pane_g

0xd9c5,	// (0x00047cfb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c5,	// (0x00047cfb) aid_fep_china_hwr2_fs_cell

0xd9d7,	// (0x00047d0d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d7,	// (0x00047d0d) bg_popup_fep_shadow_pane_cp4

0xd9ee,	// (0x00047d24) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ee,	// (0x00047d24) bg_popup_fep_shadow_pane_cp5

0xda00,	// (0x00047d36) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda00,	// (0x00047d36) popup_fep_china_hwr2_fs_control_bar_grid

0xda10,	// (0x00047d46) popup_fep_china_hwr2_fs_control_funtion_grid

0xda18,	// (0x00047d4e) aid_fep_china_hwr2_fs_candi_cell

0x7ec9,	// (0x000421ff) bg_popup_fep_shadow_pane_cp6

0xda22,	// (0x00047d58) popup_fep_china_hwr2_fs_candidate_grid

0xda2c,	// (0x00047d62) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda2c,	// (0x00047d62) cell_fep_china_hwr2_fs_funtion_grid

0xc2b3,	// (0x000465e9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda44,	// (0x00047d7a) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda44,	// (0x00047d7a) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda52,	// (0x00047d88) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda52,	// (0x00047d88) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0004a049) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0004a049) cell_fep_china_hwr2_fs_funtion_grid_g

0xda68,	// (0x00047d9e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda68,	// (0x00047d9e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda7d,	// (0x00047db3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda7d,	// (0x00047db3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0004a04e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0004a04e) cell_fep_china_hwr2_fs_funtion_grid_t

0xda99,	// (0x00047dcf) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdaa1,	// (0x00047dd7) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa9,	// (0x00047ddf) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0004a053) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdab1,	// (0x00047de7) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdab1,	// (0x00047de7) cell_fep_china_hwr2_fs_candidate_grid

0xdaca,	// (0x00047e00) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdad2,	// (0x00047e08) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2b3,	// (0x000465e9) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2b3,	// (0x000465e9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x00049e73) cell_fep_china_hwr2_fs_candidate_grid_g

0xdada,	// (0x00047e10) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9909,	// (0x00043c3f) clock_nsta_pane_cp_24_ParamLimits

0x9909,	// (0x00043c3f) clock_nsta_pane_cp_24

0x9987,	// (0x00043cbd) indicator_nsta_pane_cp_24_ParamLimits

0x9987,	// (0x00043cbd) indicator_nsta_pane_cp_24

0xaa14,	// (0x00044d4a) heading_pane_g1

0x0001,

0xf8d0,	// (0x00049c06) heading_pane_g

0xb402,	// (0x00045738) grid_sct_catagory_button_pane

0xb432,	// (0x00045768) scroll_pane_cp5_ParamLimits

0xbeb3,	// (0x000461e9) button_value_adjust_pane_cp5_ParamLimits

0xbeb3,	// (0x000461e9) button_value_adjust_pane_cp5

0xbf92,	// (0x000462c8) form2_midp_time_pane_ParamLimits

0xdae8,	// (0x00047e1e) cell_sct_catagory_button_pane_ParamLimits

0xdae8,	// (0x00047e1e) cell_sct_catagory_button_pane

0xc278,	// (0x000465ae) bg_button_pane_cp01_ParamLimits

0xc278,	// (0x000465ae) bg_button_pane_cp01

0xc2b3,	// (0x000465e9) cell_sct_catagory_button_pane_g1

0x6843,	// (0x00040b79) popup_tb_extension_window

0xdafa,	// (0x00047e30) aid_size_cell_ext_ParamLimits

0xdafa,	// (0x00047e30) aid_size_cell_ext

0x8246,	// (0x0004257c) bg_tb_trans_pane_cp1_ParamLimits

0x8246,	// (0x0004257c) bg_tb_trans_pane_cp1

0xdb1a,	// (0x00047e50) grid_tb_ext_pane_ParamLimits

0xdb1a,	// (0x00047e50) grid_tb_ext_pane

0xdb48,	// (0x00047e7e) cell_tb_ext_pane_ParamLimits

0xdb48,	// (0x00047e7e) cell_tb_ext_pane

0xdb5f,	// (0x00047e95) cell_tb_ext_pane_g1_ParamLimits

0xdb5f,	// (0x00047e95) cell_tb_ext_pane_g1

0xdb7c,	// (0x00047eb2) cell_tb_ext_pane_t1

0x8246,	// (0x0004257c) list_highlight_pane_cp11_ParamLimits

0x8246,	// (0x0004257c) list_highlight_pane_cp11

0x5ba2,	// (0x0003fed8) popup_uni_indicator_window_ParamLimits

0x5ba2,	// (0x0003fed8) popup_uni_indicator_window

0x8838,	// (0x00042b6e) bg_popup_sub_pane_cp14

0xdb97,	// (0x00047ecd) list_uniindi_pane

0xdba3,	// (0x00047ed9) uniindi_top_pane

0x8246,	// (0x0004257c) bg_uniindi_top_pane

0xdbc2,	// (0x00047ef8) uniindi_top_pane_g1

0xdbd8,	// (0x00047f0e) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0004a05a) uniindi_top_pane_g

0xdc02,	// (0x00047f38) uniindi_top_pane_t1

0xdc2c,	// (0x00047f62) list_single_uniindi_pane_ParamLimits

0xdc2c,	// (0x00047f62) list_single_uniindi_pane

0xc2b3,	// (0x000465e9) bg_uniindi_top_pane_g1

0xdc3f,	// (0x00047f75) list_single_uniindi_pane_g1

0xdc52,	// (0x00047f88) list_single_uniindi_pane_t1

0x7ec9,	// (0x000421ff) control_bg_pane

0xdc77,	// (0x00047fad) bg_sctrl_sk_pane_cp1

0xdc80,	// (0x00047fb6) bg_sctrl_sk_pane_cp2

0xdc89,	// (0x00047fbf) control_bg_pane_g1

0xdc92,	// (0x00047fc8) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0004a063) control_bg_pane_g

0xbd0e,	// (0x00046044) cell_indicator_nsta_pane_g1_ParamLimits

0xbd1c,	// (0x00046052) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x00049dd7) cell_indicator_nsta_pane_g_ParamLimits

0x55d7,	// (0x0003f90d) form2_midp_time_pane_t1_ParamLimits

0x859d,	// (0x000428d3) main_idle_act4_pane_ParamLimits

0x859d,	// (0x000428d3) main_idle_act4_pane

0x6843,	// (0x00040b79) popup_tb_extension_window_ParamLimits

0xdb38,	// (0x00047e6e) tb_ext_find_pane_ParamLimits

0xdb38,	// (0x00047e6e) tb_ext_find_pane

0xdc9b,	// (0x00047fd1) ai_gene_pane_1_cp1

0x9606,	// (0x0004393c) ai_gene_pane_2_cp1

0xdca3,	// (0x00047fd9) list_single_idle_plugin_calendar_pane

0xdcac,	// (0x00047fe2) list_single_idle_plugin_notification_pane

0xdcb5,	// (0x00047feb) list_single_idle_plugin_player_pane

0xdcbe,	// (0x00047ff4) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcbe,	// (0x00047ff4) list_single_idle_plugin_shortcut_pane

0xdce0,	// (0x00048016) main_idle_act4_pane_t1

0xdcf2,	// (0x00048028) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0004a068) main_idle_act4_pane_t

0xdd04,	// (0x0004803a) middle_sk_idle_act4_pane_ParamLimits

0xdd04,	// (0x0004803a) middle_sk_idle_act4_pane

0xdd1a,	// (0x00048050) popup_clock_digital_analogue_window_cp2

0xdd34,	// (0x0004806a) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd34,	// (0x0004806a) shortcut_wheel_idle_act4_pane

0xc2b3,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g1

0xc2b3,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g2

0xc2b3,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g3

0xc2b3,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g4

0xc2b3,	// (0x000465e9) shortcut_wheel_idle_act4_pane_g5

0xdd48,	// (0x0004807e) shortcut_wheel_idle_act4_pane_g6

0xdd50,	// (0x00048086) shortcut_wheel_idle_act4_pane_g7

0xdd58,	// (0x0004808e) shortcut_wheel_idle_act4_pane_g8

0xdd60,	// (0x00048096) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0004a06d) shortcut_wheel_idle_act4_pane_g

0xc531,	// (0x00046867) middle_sk_idle_act4_pane_g1_ParamLimits

0xc531,	// (0x00046867) middle_sk_idle_act4_pane_g1

0xddc4,	// (0x000480fa) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc4,	// (0x000480fa) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0004a08b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0004a08b) middle_sk_idle_act4_pane_g

0xddd0,	// (0x00048106) middle_sk_idle_act4_pane_t1_ParamLimits

0xddd0,	// (0x00048106) middle_sk_idle_act4_pane_t1

0xdded,	// (0x00048123) grid_ai_shortcut_pane_ParamLimits

0xdded,	// (0x00048123) grid_ai_shortcut_pane

0xde06,	// (0x0004813c) list_highlight_pane_cp16_ParamLimits

0xde06,	// (0x0004813c) list_highlight_pane_cp16

0xde13,	// (0x00048149) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde13,	// (0x00048149) list_single_idle_plugin_shortcut_pane_g1

0xde1f,	// (0x00048155) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1f,	// (0x00048155) list_single_idle_plugin_shortcut_pane_g2

0xde37,	// (0x0004816d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde37,	// (0x0004816d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x0005,	// (0x0003a33b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x0005,	// (0x0003a33b) list_single_idle_plugin_shortcut_pane_g

0xde4a,	// (0x00048180) cell_ai_shortcut_pane_ParamLimits

0xde4a,	// (0x00048180) cell_ai_shortcut_pane

0xde6e,	// (0x000481a4) cell_ai_shortcut_pane_g1_ParamLimits

0xde6e,	// (0x000481a4) cell_ai_shortcut_pane_g1

0xdc9b,	// (0x00047fd1) ai_gene_pane_1_cp2

0xde90,	// (0x000481c6) ai_gene_pane_2_cp2

0xde98,	// (0x000481ce) list_highlight_pane_cp15

0xdea1,	// (0x000481d7) list_single_idle_plugin_calendar_pane_g1

0xde98,	// (0x000481ce) list_highlight_pane_cp17

0xdea9,	// (0x000481df) list_single_idle_plugin_calendar_pane_g1_copy1

0xdeb1,	// (0x000481e7) list_single_idle_plugin_player_pane_g1

0xb65b,	// (0x00045991) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5a,	// (0x0004a090) list_single_idle_plugin_player_pane_g

0xdeb9,	// (0x000481ef) list_single_idle_plugin_player_pane_t1

0xdec7,	// (0x000481fd) list_single_idle_plugin_player_pane_t2

0xded5,	// (0x0004820b) list_single_idle_plugin_player_pane_t3

0xdee3,	// (0x00048219) list_single_idle_plugin_player_pane_t4

0x0003,

0x000c,	// (0x0003a342) list_single_idle_plugin_player_pane_t

0xdef1,	// (0x00048227) wait_bar_pane_cp15

0xdef9,	// (0x0004822f) grid_ai_notification_pane

0xb65b,	// (0x00045991) list_single_idle_plugin_notification_pane_g1

0xdf02,	// (0x00048238) cell_ai_notification_pane_ParamLimits

0xdf02,	// (0x00048238) cell_ai_notification_pane

0xdf0f,	// (0x00048245) cell_ai_notification_pane_g1

0xdf17,	// (0x0004824d) cell_ai_notification_pane_t1

0xdf25,	// (0x0004825b) tb_ext_find_button_pane

0xdf2d,	// (0x00048263) tb_ext_find_pane_g1

0xdf35,	// (0x0004826b) tb_ext_find_pane_t1

0x8eac,	// (0x000431e2) tb_ext_find_button_pane_g1

0xdf43,	// (0x00048279) tb_ext_find_button_pane_g2

0x0001,

0xfd5f,	// (0x0004a095) tb_ext_find_button_pane_g

0xdce0,	// (0x00048016) main_idle_act4_pane_t1_ParamLimits

0xdcf2,	// (0x00048028) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0004a068) main_idle_act4_pane_t_ParamLimits

0xdd1a,	// (0x00048050) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd28,	// (0x0004805e) sat_plugin_idle_act4_pane_ParamLimits

0xdd28,	// (0x0004805e) sat_plugin_idle_act4_pane

0xdf4c,	// (0x00048282) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf4c,	// (0x00048282) sat_plugin_idle_act4_pane_t1

0xdf5f,	// (0x00048295) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5f,	// (0x00048295) sat_plugin_idle_act4_pane_t2

0xdf72,	// (0x000482a8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf72,	// (0x000482a8) sat_plugin_idle_act4_pane_t3

0xdf85,	// (0x000482bb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf85,	// (0x000482bb) sat_plugin_idle_act4_pane_t4

0x0003,

0x0015,	// (0x0003a34b) sat_plugin_idle_act4_pane_t_ParamLimits

0x0015,	// (0x0003a34b) sat_plugin_idle_act4_pane_t

0x5add,	// (0x0003fe13) popup_battery_window_ParamLimits

0x5add,	// (0x0003fe13) popup_battery_window

0x8246,	// (0x0004257c) bg_popup_sub_pane_cp25_ParamLimits

0x8246,	// (0x0004257c) bg_popup_sub_pane_cp25

0xdf98,	// (0x000482ce) popup_battery_window_g1_ParamLimits

0xdf98,	// (0x000482ce) popup_battery_window_g1

0xdfa4,	// (0x000482da) popup_battery_window_t1_ParamLimits

0xdfa4,	// (0x000482da) popup_battery_window_t1

0xdfb6,	// (0x000482ec) popup_battery_window_t2_ParamLimits

0xdfb6,	// (0x000482ec) popup_battery_window_t2

0x0001,

0x001e,	// (0x0003a354) popup_battery_window_t_ParamLimits

0x001e,	// (0x0003a354) popup_battery_window_t

0x94d3,	// (0x00043809) midp_canvas_pane_ParamLimits

0x954a,	// (0x00043880) midp_keypad_pane_ParamLimits

0x954a,	// (0x00043880) midp_keypad_pane

0x9809,	// (0x00043b3f) main_midp_pane_ParamLimits

0xbd77,	// (0x000460ad) signal_pane_g2_cp_ParamLimits

0xdfd3,	// (0x00048309) aid_size_cell_midp_keypad_ParamLimits

0xdfd3,	// (0x00048309) aid_size_cell_midp_keypad

0xdfed,	// (0x00048323) midp_keyp_game_grid_pane_ParamLimits

0xdfed,	// (0x00048323) midp_keyp_game_grid_pane

0xe00d,	// (0x00048343) midp_keyp_rocker_pane_ParamLimits

0xe00d,	// (0x00048343) midp_keyp_rocker_pane

0xe046,	// (0x0004837c) midp_keyp_sk_left_pane_ParamLimits

0xe046,	// (0x0004837c) midp_keyp_sk_left_pane

0xe0a0,	// (0x000483d6) midp_keyp_sk_right_pane_ParamLimits

0xe0a0,	// (0x000483d6) midp_keyp_sk_right_pane

0x7ec9,	// (0x000421ff) bg_button_pane_cp03

0xe0fa,	// (0x00048430) midp_keyp_sk_left_pane_g1

0x7ec9,	// (0x000421ff) bg_button_pane_cp04

0xe0fa,	// (0x00048430) midp_keyp_sk_right_pane_g1

0xc2b3,	// (0x000465e9) midp_keyp_rocker_pane_g1

0xe103,	// (0x00048439) keyp_game_cell_pane_ParamLimits

0xe103,	// (0x00048439) keyp_game_cell_pane

0x7ec9,	// (0x000421ff) bg_button_pane_cp02

0xe116,	// (0x0004844c) keyp_game_cell_pane_g1

0x5b21,	// (0x0003fe57) popup_fep_vkb2_window_ParamLimits

0x5b21,	// (0x0003fe57) popup_fep_vkb2_window

0x741e,	// (0x00041754) aid_size_cell_vkb2_ParamLimits

0x741e,	// (0x00041754) aid_size_cell_vkb2

0x7472,	// (0x000417a8) popup_fep_vkb2_window_g1_ParamLimits

0x7472,	// (0x000417a8) popup_fep_vkb2_window_g1

0x74ba,	// (0x000417f0) vkb2_area_bottom_pane_ParamLimits

0x74ba,	// (0x000417f0) vkb2_area_bottom_pane

0x7506,	// (0x0004183c) vkb2_area_keypad_pane_ParamLimits

0x7506,	// (0x0004183c) vkb2_area_keypad_pane

0x7548,	// (0x0004187e) vkb2_area_top_pane_ParamLimits

0x7548,	// (0x0004187e) vkb2_area_top_pane

0x75c2,	// (0x000418f8) vkb2_top_entry_pane_ParamLimits

0x75c2,	// (0x000418f8) vkb2_top_entry_pane

0x75ec,	// (0x00041922) vkb2_top_grid_left_pane_ParamLimits

0x75ec,	// (0x00041922) vkb2_top_grid_left_pane

0x760a,	// (0x00041940) vkb2_top_grid_right_pane_ParamLimits

0x760a,	// (0x00041940) vkb2_top_grid_right_pane

0x7628,	// (0x0004195e) vkb2_cell_keypad_pane_ParamLimits

0x7628,	// (0x0004195e) vkb2_cell_keypad_pane

0x76f9,	// (0x00041a2f) vkb2_area_bottom_grid_pane_ParamLimits

0x76f9,	// (0x00041a2f) vkb2_area_bottom_grid_pane

0x771f,	// (0x00041a55) vkb2_area_bottom_pane_g1_ParamLimits

0x771f,	// (0x00041a55) vkb2_area_bottom_pane_g1

0x7743,	// (0x00041a79) vkb2_area_bottom_pane_g2_ParamLimits

0x7743,	// (0x00041a79) vkb2_area_bottom_pane_g2

0x7771,	// (0x00041aa7) vkb2_area_bottom_pane_g3_ParamLimits

0x7771,	// (0x00041aa7) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x0004a09a) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x0004a09a) vkb2_area_bottom_pane_g

0x77d2,	// (0x00041b08) vkb2_top_cell_left_pane_ParamLimits

0x77d2,	// (0x00041b08) vkb2_top_cell_left_pane

0xe127,	// (0x0004845d) vkb2_top_entry_pane_g1_ParamLimits

0xe127,	// (0x0004845d) vkb2_top_entry_pane_g1

0xe135,	// (0x0004846b) vkb2_top_entry_pane_t1_ParamLimits

0xe135,	// (0x0004846b) vkb2_top_entry_pane_t1

0xe167,	// (0x0004849d) vkb2_top_entry_pane_t2_ParamLimits

0xe167,	// (0x0004849d) vkb2_top_entry_pane_t2

0xe199,	// (0x000484cf) vkb2_top_entry_pane_t3_ParamLimits

0xe199,	// (0x000484cf) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x0004a0a1) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x0004a0a1) vkb2_top_entry_pane_t

0x781f,	// (0x00041b55) vkb2_top_grid_right_pane_g1_ParamLimits

0x781f,	// (0x00041b55) vkb2_top_grid_right_pane_g1

0x7835,	// (0x00041b6b) vkb2_top_grid_right_pane_g2_ParamLimits

0x7835,	// (0x00041b6b) vkb2_top_grid_right_pane_g2

0x784d,	// (0x00041b83) vkb2_top_grid_right_pane_g3_ParamLimits

0x784d,	// (0x00041b83) vkb2_top_grid_right_pane_g3

0x7865,	// (0x00041b9b) vkb2_top_grid_right_pane_g4_ParamLimits

0x7865,	// (0x00041b9b) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x0004a0a8) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x0004a0a8) vkb2_top_grid_right_pane_g

0x787b,	// (0x00041bb1) vkb2_top_cell_left_pane_g1

0x7892,	// (0x00041bc8) vkb2_cell_keypad_pane_g1_ParamLimits

0x7892,	// (0x00041bc8) vkb2_cell_keypad_pane_g1

0xe1bd,	// (0x000484f3) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1bd,	// (0x000484f3) vkb2_cell_keypad_pane_t1

0x78a0,	// (0x00041bd6) vkb2_cell_bottom_grid_pane_ParamLimits

0x78a0,	// (0x00041bd6) vkb2_cell_bottom_grid_pane

0x78d9,	// (0x00041c0f) vkb2_cell_bottom_grid_pane_g1

0xdd68,	// (0x0004809e) aid_call2_pane_cp02

0xdd70,	// (0x000480a6) aid_call_pane_cp02

0xdd78,	// (0x000480ae) clock_digital_number_pane_cp10

0xdd80,	// (0x000480b6) clock_digital_number_pane_cp11

0xdd88,	// (0x000480be) clock_digital_number_pane_cp12

0xdd90,	// (0x000480c6) clock_digital_number_pane_cp13

0xdd98,	// (0x000480ce) clock_digital_separator_pane_cp10

0x8eac,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g1

0x8eac,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g2

0xdda0,	// (0x000480d6) popup_clock_digital_analogue_window_cp2_g3

0x8eac,	// (0x000431e2) popup_clock_digital_analogue_window_cp2_g4

0xdda0,	// (0x000480d6) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0004a080) popup_clock_digital_analogue_window_cp2_g

0xdda8,	// (0x000480de) popup_clock_digital_analogue_window_cp2_t1

0xddb6,	// (0x000480ec) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0000,	// (0x0003a336) popup_clock_digital_analogue_window_cp2_t

0xc2b3,	// (0x000465e9) clock_digital_number_pane_cp10_g1

0xc2b3,	// (0x000465e9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00049e73) clock_digital_number_pane_cp10_g

0xc2b3,	// (0x000465e9) clock_digital_separator_pane_cp10_g1

0xc2b3,	// (0x000465e9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x00049e73) clock_digital_separator_pane_cp10_g

0xdbe4,	// (0x00047f1a) uniindi_top_pane_g3

0xdbf5,	// (0x00047f2b) uniindi_top_pane_g4

0x76b3,	// (0x000419e9) vkb2_row_keypad_pane_ParamLimits

0x76b3,	// (0x000419e9) vkb2_row_keypad_pane

0x78f5,	// (0x00041c2b) vkb2_cell_t_keypad_pane_ParamLimits

0x78f5,	// (0x00041c2b) vkb2_cell_t_keypad_pane

0x7905,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7905,	// (0x00041c3b) vkb2_cell_t_keypad_pane_cp08

0x7918,	// (0x00041c4e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7918,	// (0x00041c4e) vkb2_cell_t_keypad_pane_cp09

0x792c,	// (0x00041c62) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x792c,	// (0x00041c62) vkb2_cell_t_keypad_pane_cp01

0x793d,	// (0x00041c73) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x793d,	// (0x00041c73) vkb2_cell_t_keypad_pane_cp02

0x794e,	// (0x00041c84) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x794e,	// (0x00041c84) vkb2_cell_t_keypad_pane_cp03

0x795f,	// (0x00041c95) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x795f,	// (0x00041c95) vkb2_cell_t_keypad_pane_cp04

0x7970,	// (0x00041ca6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7970,	// (0x00041ca6) vkb2_cell_t_keypad_pane_cp05

0x7981,	// (0x00041cb7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7981,	// (0x00041cb7) vkb2_cell_t_keypad_pane_cp06

0x7992,	// (0x00041cc8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7992,	// (0x00041cc8) vkb2_cell_t_keypad_pane_cp07

0x79a3,	// (0x00041cd9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x79a3,	// (0x00041cd9) vkb2_cell_t_keypad_pane_cp10

0xc531,	// (0x00046867) vkb2_cell_t_keypad_pane_g1

0xe1d4,	// (0x0004850a) vkb2_cell_t_keypad_pane_t1

0x7ec9,	// (0x000421ff) popup_grid_graphic2_window

0xe1e6,	// (0x0004851c) aid_size_cell_graphic2_ParamLimits

0xe1e6,	// (0x0004851c) aid_size_cell_graphic2

0xe21e,	// (0x00048554) bg_popup_window_pane_cp21_ParamLimits

0xe21e,	// (0x00048554) bg_popup_window_pane_cp21

0xe22c,	// (0x00048562) graphic2_pages_pane_ParamLimits

0xe22c,	// (0x00048562) graphic2_pages_pane

0xe272,	// (0x000485a8) grid_graphic2_control_pane_ParamLimits

0xe272,	// (0x000485a8) grid_graphic2_control_pane

0xe2b0,	// (0x000485e6) grid_graphic2_pane_ParamLimits

0xe2b0,	// (0x000485e6) grid_graphic2_pane

0xe324,	// (0x0004865a) cell_graphic2_pane

0x7ec9,	// (0x000421ff) main_comp_mode_pane

0xd464,	// (0x0004779a) list_ai3_gene_pane_ParamLimits

0xd82e,	// (0x00047b64) bg_popup_window_pane_cp19_ParamLimits

0xd83a,	// (0x00047b70) bg_touch_area_indi_pane_ParamLimits

0xd83a,	// (0x00047b70) bg_touch_area_indi_pane

0xd850,	// (0x00047b86) bg_touch_area_indi_pane_cp01_ParamLimits

0xd850,	// (0x00047b86) bg_touch_area_indi_pane_cp01

0xd866,	// (0x00047b9c) bg_touch_area_indi_pane_cp02_ParamLimits

0xd866,	// (0x00047b9c) bg_touch_area_indi_pane_cp02

0xd87e,	// (0x00047bb4) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87e,	// (0x00047bb4) bg_touch_area_indi_pane_cp03

0xd898,	// (0x00047bce) popup_slider_window_g1_ParamLimits

0xd8b4,	// (0x00047bea) popup_slider_window_g2_ParamLimits

0xd8d0,	// (0x00047c06) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0004a015) popup_slider_window_g_ParamLimits

0xd92c,	// (0x00047c62) popup_slider_window_t1_ParamLimits

0xd9a0,	// (0x00047cd6) small_volume_slider_vertical_pane_ParamLimits

0xe324,	// (0x0004865a) cell_graphic2_pane_ParamLimits

0xe373,	// (0x000486a9) bg_button_pane_cp10_ParamLimits

0xe373,	// (0x000486a9) bg_button_pane_cp10

0xe386,	// (0x000486bc) bg_button_pane_cp11_ParamLimits

0xe386,	// (0x000486bc) bg_button_pane_cp11

0xe399,	// (0x000486cf) graphic2_pages_pane_g1_ParamLimits

0xe399,	// (0x000486cf) graphic2_pages_pane_g1

0xe3b4,	// (0x000486ea) graphic2_pages_pane_g2_ParamLimits

0xe3b4,	// (0x000486ea) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x0004a0b6) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x0004a0b6) graphic2_pages_pane_g

0xe3cc,	// (0x00048702) graphic2_pages_pane_t1_ParamLimits

0xe3cc,	// (0x00048702) graphic2_pages_pane_t1

0xe3e4,	// (0x0004871a) cell_graphic2_control_pane_ParamLimits

0xe3e4,	// (0x0004871a) cell_graphic2_control_pane

0xe402,	// (0x00048738) cell_graphic2_pane_g1_ParamLimits

0xe402,	// (0x00048738) cell_graphic2_pane_g1

0xe40f,	// (0x00048745) cell_graphic2_pane_g2_ParamLimits

0xe40f,	// (0x00048745) cell_graphic2_pane_g2

0xe41c,	// (0x00048752) cell_graphic2_pane_g3_ParamLimits

0xe41c,	// (0x00048752) cell_graphic2_pane_g3

0xe429,	// (0x0004875f) cell_graphic2_pane_g4_ParamLimits

0xe429,	// (0x0004875f) cell_graphic2_pane_g4

0xe436,	// (0x0004876c) cell_graphic2_pane_g5_ParamLimits

0xe436,	// (0x0004876c) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0004a0bb) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0004a0bb) cell_graphic2_pane_g

0xe451,	// (0x00048787) cell_graphic2_pane_t1_ParamLimits

0xe451,	// (0x00048787) cell_graphic2_pane_t1

0x9d87,	// (0x000440bd) grid_highlight_pane_cp11_ParamLimits

0x9d87,	// (0x000440bd) grid_highlight_pane_cp11

0x8246,	// (0x0004257c) bg_button_pane_cp05

0xe488,	// (0x000487be) cell_graphic2_control_pane_g1

0xc2b3,	// (0x000465e9) bg_touch_area_indi_pane_g1

0xe4b0,	// (0x000487e6) aid_cmod_rocker_key_size

0xe4ba,	// (0x000487f0) aid_cmode_itu_key_size

0xe4c4,	// (0x000487fa) main_cmode_video_pane

0xe4ce,	// (0x00048804) main_comp_mode_itu_pane

0xe4da,	// (0x00048810) main_comp_mode_rocker_pane

0xe4e6,	// (0x0004881c) cell_cmode_rocker_pane_ParamLimits

0xe4e6,	// (0x0004881c) cell_cmode_rocker_pane

0xe4f8,	// (0x0004882e) cell_cmode_itu_pane_ParamLimits

0xe4f8,	// (0x0004882e) cell_cmode_itu_pane

0x8838,	// (0x00042b6e) bg_button_pane_cp06_ParamLimits

0x8838,	// (0x00042b6e) bg_button_pane_cp06

0xc531,	// (0x00046867) cell_cmode_rocker_pane_g1_ParamLimits

0xc531,	// (0x00046867) cell_cmode_rocker_pane_g1

0xda44,	// (0x00047d7a) cell_cmode_rocker_pane_g2_ParamLimits

0xda44,	// (0x00047d7a) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0004a0cb) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0004a0cb) cell_cmode_rocker_pane_g

0x7ec9,	// (0x000421ff) bg_button_pane_cp07

0xe50d,	// (0x00048843) cell_cmode_itu_pane_g1

0xe516,	// (0x0004884c) cell_cmode_itu_pane_t1

0xe524,	// (0x0004885a) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0004a0d0) cell_cmode_itu_pane_t

0xdc67,	// (0x00047f9d) aid_touch_ctrl_left

0xdc6f,	// (0x00047fa5) aid_touch_ctrl_right

0x7ec9,	// (0x000421ff) compa_mode_pane

0xe532,	// (0x00048868) aid_cmod_rocker_key_size_cp

0xe53c,	// (0x00048872) aid_cmode_itu_key_size_cp

0xe546,	// (0x0004887c) compa_mode_pane_g1

0xe54e,	// (0x00048884) compa_mode_pane_g2

0xe556,	// (0x0004888c) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x0004a0d5) compa_mode_pane_g

0xe55e,	// (0x00048894) main_comp_mode_itu_pane_cp

0xe566,	// (0x0004889c) main_comp_mode_rocker_pane_cp

0xe56e,	// (0x000488a4) cell_cmode_itu_pane_cp_ParamLimits

0xe56e,	// (0x000488a4) cell_cmode_itu_pane_cp

0xe583,	// (0x000488b9) cell_cmode_rocker_pane_cp_ParamLimits

0xe583,	// (0x000488b9) cell_cmode_rocker_pane_cp

0x8838,	// (0x00042b6e) bg_button_pane_cp06_cp_ParamLimits

0x8838,	// (0x00042b6e) bg_button_pane_cp06_cp

0xc531,	// (0x00046867) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc531,	// (0x00046867) cell_cmode_rocker_pane_g1_cp

0xc2b3,	// (0x000465e9) cell_cmode_rocker_pane_g2_cp

0x7ec9,	// (0x000421ff) bg_button_pane_cp07_cp

0xb253,	// (0x00045589) cell_cmode_itu_pane_g1_cp

0xe595,	// (0x000488cb) cell_cmode_itu_pane_t1_cp

0xe595,	// (0x000488cb) cell_cmode_itu_pane_t2_cp

0xb240,	// (0x00045576) settings_code_pane_cp2

0x7fbd,	// (0x000422f3) bg_popup_window_pane_cp3_ParamLimits

0x8420,	// (0x00042756) heading_pane_cp3_ParamLimits

0x842c,	// (0x00042762) listscroll_popup_graphic_pane_ParamLimits

0x6eef,	// (0x00041225) fep_hwr_aid_pane_ParamLimits

0x7395,	// (0x000416cb) aid_touch_sctrl_top_ParamLimits

0x73a2,	// (0x000416d8) sctrl_sk_top_pane_g1_ParamLimits

0xc531,	// (0x00046867) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0004a02e) sctrl_sk_top_pane_g_ParamLimits

0x73af,	// (0x000416e5) sctrl_sk_top_pane_t1_ParamLimits

0x7395,	// (0x000416cb) aid_touch_sctrl_bottom_ParamLimits

0x73af,	// (0x000416e5) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbb0,	// (0x00047ee6) aid_area_touch_clock

0x758a,	// (0x000418c0) aid_vkb2_area_top_pane_cell_ParamLimits

0x758a,	// (0x000418c0) aid_vkb2_area_top_pane_cell

0x76d5,	// (0x00041a0b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x76d5,	// (0x00041a0b) aid_vkb2_area_bottom_pane_cell

0xe11f,	// (0x00048455) popup_char_count_window

0xe5a3,	// (0x000488d9) popup_char_count_window_g1

0xe5ac,	// (0x000488e2) popup_char_count_window_g2

0xe5b5,	// (0x000488eb) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0004a0dc) popup_char_count_window_g

0xe5be,	// (0x000488f4) popup_char_count_window_t1

0x7450,	// (0x00041786) popup_fep_char_preview_window_ParamLimits

0x7450,	// (0x00041786) popup_fep_char_preview_window

0x75a8,	// (0x000418de) vkb2_top_candi_pane_ParamLimits

0x75a8,	// (0x000418de) vkb2_top_candi_pane

0xe5cc,	// (0x00048902) cell_vkb2_top_candi_pane_ParamLimits

0xe5cc,	// (0x00048902) cell_vkb2_top_candi_pane

0xa394,	// (0x000446ca) bg_popup_fep_char_preview_window_ParamLimits

0xa394,	// (0x000446ca) bg_popup_fep_char_preview_window

0x79b8,	// (0x00041cee) popup_fep_char_preview_window_t1_ParamLimits

0x79b8,	// (0x00041cee) popup_fep_char_preview_window_t1

0xe619,	// (0x0004894f) bg_popup_fep_char_preview_window_g1

0xe621,	// (0x00048957) bg_popup_fep_char_preview_window_g2

0xe629,	// (0x0004895f) bg_popup_fep_char_preview_window_g3

0xe631,	// (0x00048967) bg_popup_fep_char_preview_window_g4

0xe639,	// (0x0004896f) bg_popup_fep_char_preview_window_g5

0x79f2,	// (0x00041d28) bg_popup_fep_char_preview_window_g6

0xe641,	// (0x00048977) bg_popup_fep_char_preview_window_g7

0xe649,	// (0x0004897f) bg_popup_fep_char_preview_window_g8

0xe651,	// (0x00048987) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdad,	// (0x0004a0e3) bg_popup_fep_char_preview_window_g

0xc531,	// (0x00046867) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc531,	// (0x00046867) cell_vkb2_top_candi_pane_g1

0xc87e,	// (0x00046bb4) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc87e,	// (0x00046bb4) cell_vkb2_top_candi_pane_g2

0xc89f,	// (0x00046bd5) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc89f,	// (0x00046bd5) cell_vkb2_top_candi_pane_g3

0x79fa,	// (0x00041d30) cell_vkb2_top_candi_pane_g4_ParamLimits

0x79fa,	// (0x00041d30) cell_vkb2_top_candi_pane_g4

0xe659,	// (0x0004898f) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe659,	// (0x0004898f) cell_vkb2_top_candi_pane_g5

0xda44,	// (0x00047d7a) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda44,	// (0x00047d7a) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc0,	// (0x0004a0f6) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc0,	// (0x0004a0f6) cell_vkb2_top_candi_pane_g

0x7a1b,	// (0x00041d51) cell_vkb2_top_candi_pane_t1

0x6c84,	// (0x00040fba) aid_size_touch_slider_mark_ParamLimits

0x6c84,	// (0x00040fba) aid_size_touch_slider_mark

0xe262,	// (0x00048598) grid_graphic2_catg_pane_ParamLimits

0xe262,	// (0x00048598) grid_graphic2_catg_pane

0xe300,	// (0x00048636) popup_grid_graphic2_window_t1_ParamLimits

0xe300,	// (0x00048636) popup_grid_graphic2_window_t1

0xe312,	// (0x00048648) popup_grid_graphic2_window_t2_ParamLimits

0xe312,	// (0x00048648) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x0004a0b1) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x0004a0b1) popup_grid_graphic2_window_t

0x8246,	// (0x0004257c) bg_button_pane_cp05_ParamLimits

0xe488,	// (0x000487be) cell_graphic2_control_pane_g1_ParamLimits

0xe67a,	// (0x000489b0) cell_graphic2_catg_pane_ParamLimits

0xe67a,	// (0x000489b0) cell_graphic2_catg_pane

0x7ec9,	// (0x000421ff) bg_button_pane_cp12

0xe68c,	// (0x000489c2) cell_graphic2_catg_pane_g1

0xdb7c,	// (0x00047eb2) cell_tb_ext_pane_t1_ParamLimits

0x77f2,	// (0x00041b28) vkb2_top_cell_right_narrow_pane_ParamLimits

0x77f2,	// (0x00041b28) vkb2_top_cell_right_narrow_pane

0x780a,	// (0x00041b40) vkb2_top_cell_right_wide_pane_ParamLimits

0x780a,	// (0x00041b40) vkb2_top_cell_right_wide_pane

0x6ee1,	// (0x00041217) bg_vkb2_func_pane_ParamLimits

0x6ee1,	// (0x00041217) bg_vkb2_func_pane

0x787b,	// (0x00041bb1) vkb2_top_cell_left_pane_g1_ParamLimits

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp03

0x78d9,	// (0x00041c0f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d1b,	// (0x00044051) bg_vkb2_func_pane_g1

0x9d23,	// (0x00044059) bg_vkb2_func_pane_g2

0x9d33,	// (0x00044069) bg_vkb2_func_pane_g3

0x9d2b,	// (0x00044061) bg_vkb2_func_pane_g4

0x9d3b,	// (0x00044071) bg_vkb2_func_pane_g5

0x9d43,	// (0x00044079) bg_vkb2_func_pane_g6

0x9d4b,	// (0x00044081) bg_vkb2_func_pane_g7

0x9d53,	// (0x00044089) bg_vkb2_func_pane_g8

0x9d13,	// (0x00044049) bg_vkb2_func_pane_g9

0x0008,

0xfdcd,	// (0x0004a103) bg_vkb2_func_pane_g

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp01

0x787b,	// (0x00041bb1) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x787b,	// (0x00041bb1) vkb2_top_cell_right_wide_pane_g1

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6ee1,	// (0x00041217) bg_vkb2_fuc_pane_cp02

0x78d9,	// (0x00041c0f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x78d9,	// (0x00041c0f) vkb2_top_cell_right_narrow_pane_g1

0xd7b2,	// (0x00047ae8) aid_touch_area_decrease_ParamLimits

0xd7b2,	// (0x00047ae8) aid_touch_area_decrease

0xd7d0,	// (0x00047b06) aid_touch_area_increase_ParamLimits

0xd7d0,	// (0x00047b06) aid_touch_area_increase

0xd7dc,	// (0x00047b12) aid_touch_area_mute_ParamLimits

0xd7dc,	// (0x00047b12) aid_touch_area_mute

0xd800,	// (0x00047b36) aid_touch_area_slider_ParamLimits

0xd800,	// (0x00047b36) aid_touch_area_slider

0xd8ec,	// (0x00047c22) popup_slider_window_g4_ParamLimits

0xd8ec,	// (0x00047c22) popup_slider_window_g4

0xd8f8,	// (0x00047c2e) popup_slider_window_g5_ParamLimits

0xd8f8,	// (0x00047c2e) popup_slider_window_g5

0xd91a,	// (0x00047c50) popup_slider_window_g6_ParamLimits

0xd91a,	// (0x00047c50) popup_slider_window_g6

0xd95a,	// (0x00047c90) popup_slider_window_t2_ParamLimits

0xd95a,	// (0x00047c90) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0004a022) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0004a022) popup_slider_window_t

0xd972,	// (0x00047ca8) slider_pane_ParamLimits

0xd972,	// (0x00047ca8) slider_pane

0xe695,	// (0x000489cb) slider_pane_g1_ParamLimits

0xe695,	// (0x000489cb) slider_pane_g1

0xe6a9,	// (0x000489df) slider_pane_g2_ParamLimits

0xe6a9,	// (0x000489df) slider_pane_g2

0xe6bf,	// (0x000489f5) slider_pane_g3_ParamLimits

0xe6bf,	// (0x000489f5) slider_pane_g3

0x0003,

0x009a,	// (0x0003a3d0) slider_pane_g_ParamLimits

0x009a,	// (0x0003a3d0) slider_pane_g

0x689f,	// (0x00040bd5) popup_tb_float_extension_window_ParamLimits

0x689f,	// (0x00040bd5) popup_tb_float_extension_window

0xe6eb,	// (0x00048a21) aid_size_cell_tb_float_ext

0x7ec9,	// (0x000421ff) bg_popup_sub_window_cp28

0xe6f7,	// (0x00048a2d) grid_tb_float_ext_pane

0xe701,	// (0x00048a37) cell_tb_float_ext_pane_ParamLimits

0xe701,	// (0x00048a37) cell_tb_float_ext_pane

0xe71b,	// (0x00048a51) cell_tb_float_ext_pane_g1

0xe724,	// (0x00048a5a) grid_highlight_pane_cp12

0x7022,	// (0x00041358) cell_last_hwr_side_pane_ParamLimits

0x7022,	// (0x00041358) cell_last_hwr_side_pane

0xc2b3,	// (0x000465e9) cell_last_hwr_side_pane_g1

0xe72d,	// (0x00048a63) cell_last_hwr_side_pane_g2

0x0001,

0xfde0,	// (0x0004a116) cell_last_hwr_side_pane_g

0x77a1,	// (0x00041ad7) vkb2_area_bottom_space_btn_pane_ParamLimits

0x77a1,	// (0x00041ad7) vkb2_area_bottom_space_btn_pane

0xc531,	// (0x00046867) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1d4,	// (0x0004850a) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7a1b,	// (0x00041d51) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7a3a,	// (0x00041d70) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7a3a,	// (0x00041d70) vkb2_area_bottom_space_btn_pane_g1

0x7a74,	// (0x00041daa) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7a74,	// (0x00041daa) vkb2_area_bottom_space_btn_pane_g2

0x7aaa,	// (0x00041de0) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7aaa,	// (0x00041de0) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde5,	// (0x0004a11b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde5,	// (0x0004a11b) vkb2_area_bottom_space_btn_pane_g

0x6f96,	// (0x000412cc) cel_fep_hwr_func_pane_ParamLimits

0x6f96,	// (0x000412cc) cel_fep_hwr_func_pane

0x6fd2,	// (0x00041308) cell_hwr_side_button_pane_ParamLimits

0x6fd2,	// (0x00041308) cell_hwr_side_button_pane

0xdbb0,	// (0x00047ee6) aid_area_touch_clock_ParamLimits

0x8246,	// (0x0004257c) bg_uniindi_top_pane_ParamLimits

0xdbc2,	// (0x00047ef8) uniindi_top_pane_g1_ParamLimits

0xdbd8,	// (0x00047f0e) uniindi_top_pane_g2_ParamLimits

0xdbe4,	// (0x00047f1a) uniindi_top_pane_g3_ParamLimits

0xdbf5,	// (0x00047f2b) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0004a05a) uniindi_top_pane_g_ParamLimits

0xdc02,	// (0x00047f38) uniindi_top_pane_t1_ParamLimits

0x8246,	// (0x0004257c) bg_vkb2_func_pane_cp01_ParamLimits

0x8246,	// (0x0004257c) bg_vkb2_func_pane_cp01

0xe736,	// (0x00048a6c) cel_fep_hwr_func_pane_g1_ParamLimits

0xe736,	// (0x00048a6c) cel_fep_hwr_func_pane_g1

0x8246,	// (0x0004257c) bg_vkb2_func_pane_cp02_ParamLimits

0x8246,	// (0x0004257c) bg_vkb2_func_pane_cp02

0xe736,	// (0x00048a6c) cell_hwr_side_button_pane_g1_ParamLimits

0xe736,	// (0x00048a6c) cell_hwr_side_button_pane_g1

0x9b94,	// (0x00043eca) status_pane_g4_ParamLimits

0x9b94,	// (0x00043eca) status_pane_g4

0x9bae,	// (0x00043ee4) status_pane_t1

0xbffb,	// (0x00046331) form2_midp_gauge_slider_cont_pane

0xc003,	// (0x00046339) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc015,	// (0x0004634b) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc027,	// (0x0004635d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x00049e26) form2_midp_gauge_slider_pane_t_ParamLimits

0xc039,	// (0x0004636f) form2_midp_slider_pane_ParamLimits

0x7410,	// (0x00041746) aid_size_cell_func_vkb2_ParamLimits

0x7410,	// (0x00041746) aid_size_cell_func_vkb2

0xe6d7,	// (0x00048a0d) slider_pane_g4_ParamLimits

0xe6d7,	// (0x00048a0d) slider_pane_g4

0x7af4,	// (0x00041e2a) form2_midp_gauge_slider_pane_t2_cp01

0x7b02,	// (0x00041e38) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x7b02,	// (0x00041e38) form2_midp_gauge_slider_pane_t3_cp01

0x7b1f,	// (0x00041e55) form2_midp_slider_pane_cp01

0x7ec9,	// (0x000421ff) navi_smil_pane

0xe76f,	// (0x00048aa5) navi_smil_pane_g1

0xe777,	// (0x00048aad) navi_smil_pane_t1

0xe744,	// (0x00048a7a) form2_midp_slider_pane_g1

0xe74d,	// (0x00048a83) form2_midp_slider_pane_g2

0xe755,	// (0x00048a8b) form2_midp_slider_pane_g3

0xe744,	// (0x00048a7a) form2_midp_slider_pane_g4

0xe75d,	// (0x00048a93) form2_midp_slider_pane_g5

0x0004,

0x00ac,	// (0x0003a3e2) form2_midp_slider_pane_g

0x7ae4,	// (0x00041e1a) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7ae4,	// (0x00041e1a) vkb2_area_bottom_space_btn_pane_g4

0x99c3,	// (0x00043cf9) lc0_navi_pane_ParamLimits

0x99c3,	// (0x00043cf9) lc0_navi_pane

0x9a39,	// (0x00043d6f) lc0_stat_indi_pane_ParamLimits

0x9a39,	// (0x00043d6f) lc0_stat_indi_pane

0x9a50,	// (0x00043d86) ls0_title_pane_ParamLimits

0x9a50,	// (0x00043d86) ls0_title_pane

0x8838,	// (0x00042b6e) bg_popup_sub_pane_cp14_ParamLimits

0xdb97,	// (0x00047ecd) list_uniindi_pane_ParamLimits

0xdba3,	// (0x00047ed9) uniindi_top_pane_ParamLimits

0xdc3f,	// (0x00047f75) list_single_uniindi_pane_g1_ParamLimits

0xdc52,	// (0x00047f88) list_single_uniindi_pane_t1_ParamLimits

0x7b28,	// (0x00041e5e) lc0_stat_clock_pane_ParamLimits

0x7b28,	// (0x00041e5e) lc0_stat_clock_pane

0xe785,	// (0x00048abb) lc0_stat_indi_pane_g1_ParamLimits

0xe785,	// (0x00048abb) lc0_stat_indi_pane_g1

0xe792,	// (0x00048ac8) lc0_stat_indi_pane_g2_ParamLimits

0xe792,	// (0x00048ac8) lc0_stat_indi_pane_g2

0x0001,

0x00b7,	// (0x0003a3ed) lc0_stat_indi_pane_g_ParamLimits

0x00b7,	// (0x0003a3ed) lc0_stat_indi_pane_g

0x7b35,	// (0x00041e6b) lc0_uni_indicator_pane_ParamLimits

0x7b35,	// (0x00041e6b) lc0_uni_indicator_pane

0xe79f,	// (0x00048ad5) ls0_title_pane_g1_ParamLimits

0xe79f,	// (0x00048ad5) ls0_title_pane_g1

0xe7b3,	// (0x00048ae9) ls0_title_pane_t1_ParamLimits

0xe7b3,	// (0x00048ae9) ls0_title_pane_t1

0x7b42,	// (0x00041e78) lc0_uni_indicator_pane_g1_ParamLimits

0x7b42,	// (0x00041e78) lc0_uni_indicator_pane_g1

0xe7e9,	// (0x00048b1f) lc0_stat_clock_pane_t1

0x7ec9,	// (0x000421ff) main_ai5_pane

0xe7f7,	// (0x00048b2d) ai5_sk_pane_ParamLimits

0xe7f7,	// (0x00048b2d) ai5_sk_pane

0xe804,	// (0x00048b3a) cell_ai5_widget_pane_ParamLimits

0xe804,	// (0x00048b3a) cell_ai5_widget_pane

0xe8b6,	// (0x00048bec) aid_size_cell_widget_grid

0xe8cc,	// (0x00048c02) bg_ai5_widget_pane_ParamLimits

0xe8cc,	// (0x00048c02) bg_ai5_widget_pane

0xe940,	// (0x00048c76) cell_ai5_widget_pane_g2

0xe950,	// (0x00048c86) cell_ai5_widget_pane_g3

0xe967,	// (0x00048c9d) cell_ai5_widget_pane_g4

0xe973,	// (0x00048ca9) cell_ai5_widget_pane_g5

0xe97f,	// (0x00048cb5) cell_ai5_widget_pane_g6

0xe98b,	// (0x00048cc1) cell_ai5_widget_pane_g7

0xe9d3,	// (0x00048d09) cell_ai5_widget_pane_t1_ParamLimits

0xe9d3,	// (0x00048d09) cell_ai5_widget_pane_t1

0xe9f0,	// (0x00048d26) cell_ai5_widget_pane_t2_ParamLimits

0xe9f0,	// (0x00048d26) cell_ai5_widget_pane_t2

0xea08,	// (0x00048d3e) cell_ai5_widget_pane_t3_ParamLimits

0xea08,	// (0x00048d3e) cell_ai5_widget_pane_t3

0xea20,	// (0x00048d56) cell_ai5_widget_pane_t4_ParamLimits

0xea20,	// (0x00048d56) cell_ai5_widget_pane_t4

0xea3d,	// (0x00048d73) cell_ai5_widget_pane_t5_ParamLimits

0xea3d,	// (0x00048d73) cell_ai5_widget_pane_t5

0xea5c,	// (0x00048d92) cell_ai5_widget_pane_t6_ParamLimits

0xea5c,	// (0x00048d92) cell_ai5_widget_pane_t6

0xea6e,	// (0x00048da4) cell_ai5_widget_pane_t7_ParamLimits

0xea6e,	// (0x00048da4) cell_ai5_widget_pane_t7

0xea87,	// (0x00048dbd) cell_ai5_widget_pane_t8_ParamLimits

0xea87,	// (0x00048dbd) cell_ai5_widget_pane_t8

0x0009,

0x00d1,	// (0x0003a407) cell_ai5_widget_pane_t_ParamLimits

0x00d1,	// (0x0003a407) cell_ai5_widget_pane_t

0xeadb,	// (0x00048e11) grid_ai5_widget_pane

0x8838,	// (0x00042b6e) highlight_cell_ai5_widget_pane_ParamLimits

0x8838,	// (0x00042b6e) highlight_cell_ai5_widget_pane

0xeaf2,	// (0x00048e28) ai5_sk_left_pane

0xeafc,	// (0x00048e32) ai5_sk_middle_pane

0xeb06,	// (0x00048e3c) ai5_sk_right_pane

0xeb10,	// (0x00048e46) bg_ai5_widget_pane_g1_ParamLimits

0xeb10,	// (0x00048e46) bg_ai5_widget_pane_g1

0xeb1c,	// (0x00048e52) bg_ai5_widget_pane_g2_ParamLimits

0xeb1c,	// (0x00048e52) bg_ai5_widget_pane_g2

0xeb28,	// (0x00048e5e) bg_ai5_widget_pane_g3_ParamLimits

0xeb28,	// (0x00048e5e) bg_ai5_widget_pane_g3

0xeb34,	// (0x00048e6a) bg_ai5_widget_pane_g4_ParamLimits

0xeb34,	// (0x00048e6a) bg_ai5_widget_pane_g4

0xeb40,	// (0x00048e76) bg_ai5_widget_pane_g5_ParamLimits

0xeb40,	// (0x00048e76) bg_ai5_widget_pane_g5

0xeb4c,	// (0x00048e82) bg_ai5_widget_pane_g6_ParamLimits

0xeb4c,	// (0x00048e82) bg_ai5_widget_pane_g6

0xeb58,	// (0x00048e8e) bg_ai5_widget_pane_g7_ParamLimits

0xeb58,	// (0x00048e8e) bg_ai5_widget_pane_g7

0xeb64,	// (0x00048e9a) bg_ai5_widget_pane_g8_ParamLimits

0xeb64,	// (0x00048e9a) bg_ai5_widget_pane_g8

0xeb70,	// (0x00048ea6) bg_ai5_widget_pane_g9_ParamLimits

0xeb70,	// (0x00048ea6) bg_ai5_widget_pane_g9

0x0008,

0x00e6,	// (0x0003a41c) bg_ai5_widget_pane_g_ParamLimits

0x00e6,	// (0x0003a41c) bg_ai5_widget_pane_g

0xeba2,	// (0x00048ed8) cell_shortcut_ai5_widget_pane_ParamLimits

0xeba2,	// (0x00048ed8) cell_shortcut_ai5_widget_pane

0x94bf,	// (0x000437f5) bg_cell_shortcut_ai5_widget_pane

0xebb3,	// (0x00048ee9) cell_grid_ai5_widget_pane_g1

0x94bf,	// (0x000437f5) highlight_cell_shortcut_ai5_widget_pane

0x9d23,	// (0x00044059) ai5_sk_left_pane_g1

0xebbc,	// (0x00048ef2) ai5_sk_left_pane_g2

0xebc4,	// (0x00048efa) ai5_sk_left_pane_g3

0xebcc,	// (0x00048f02) ai5_sk_left_pane_g4

0x0003,

0xfdee,	// (0x0004a124) ai5_sk_left_pane_g

0xebd4,	// (0x00048f0a) ai5_sk_left_pane_t1

0x9d1b,	// (0x00044051) ai5_sk_right_pane_g1

0xebe2,	// (0x00048f18) ai5_sk_right_pane_g2

0xebea,	// (0x00048f20) ai5_sk_right_pane_g3

0xebf2,	// (0x00048f28) ai5_sk_right_pane_g4

0x0003,

0xfdf7,	// (0x0004a12d) ai5_sk_right_pane_g

0xebfa,	// (0x00048f30) ai5_sk_right_pane_t1

0x9d1b,	// (0x00044051) ai5_sk_middle_pane_g1

0x9d23,	// (0x00044059) ai5_sk_middle_pane_g2

0x9d3b,	// (0x00044071) ai5_sk_middle_pane_g3

0xebea,	// (0x00048f20) ai5_sk_middle_pane_g4

0xebc4,	// (0x00048efa) ai5_sk_middle_pane_g5

0xec08,	// (0x00048f3e) ai5_sk_middle_pane_g6

0xec10,	// (0x00048f46) ai5_sk_middle_pane_g7

0x0006,

0xfe00,	// (0x0004a136) ai5_sk_middle_pane_g

0x984f,	// (0x00043b85) aid_touch_area_size_lc0_ParamLimits

0x984f,	// (0x00043b85) aid_touch_area_size_lc0

0x7121,	// (0x00041457) cell_hwr_candidate_pane_t1_ParamLimits

0x986b,	// (0x00043ba1) aid_touch_navi_pane

0x9b3e,	// (0x00043e74) status_dt_navi_pane_ParamLimits

0x9b3e,	// (0x00043e74) status_dt_navi_pane

0x9b4b,	// (0x00043e81) status_dt_sta_pane_ParamLimits

0x9b4b,	// (0x00043e81) status_dt_sta_pane

0xec18,	// (0x00048f4e) dt_sta_controll_pane

0xec25,	// (0x00048f5b) dt_sta_indi_pane

0xec36,	// (0x00048f6c) dt_sta_title_pane

0x8246,	// (0x0004257c) bg_dt_sta_indi_pane_ParamLimits

0x8246,	// (0x0004257c) bg_dt_sta_indi_pane

0xec49,	// (0x00048f7f) dt_sta_battery_pane

0xec51,	// (0x00048f87) dt_sta_indi_pane_g1

0xec5a,	// (0x00048f90) dt_sta_indi_pane_g2

0xec63,	// (0x00048f99) dt_sta_indi_pane_g3

0x0002,

0x00f9,	// (0x0003a42f) dt_sta_indi_pane_g

0xec6c,	// (0x00048fa2) dt_sta_signal_pane

0x8838,	// (0x00042b6e) bg_dt_sta_title_pane_ParamLimits

0x8838,	// (0x00042b6e) bg_dt_sta_title_pane

0xec75,	// (0x00048fab) dt_sta_title_pane_g1

0xec7d,	// (0x00048fb3) dt_sta_title_pane_t1_ParamLimits

0xec7d,	// (0x00048fb3) dt_sta_title_pane_t1

0x7ec9,	// (0x000421ff) bg_dt_sta_control_pane

0xec92,	// (0x00048fc8) dt_sta_controll_pane_g1

0xec9b,	// (0x00048fd1) bg_dt_sta_title_pane_g1

0xeca4,	// (0x00048fda) bg_dt_sta_title_pane_g2

0xecad,	// (0x00048fe3) bg_dt_sta_title_pane_g3

0x0002,

0x0100,	// (0x0003a436) bg_dt_sta_title_pane_g

0xc2b3,	// (0x000465e9) bg_dt_sta_indi_pane_g1

0xecb6,	// (0x00048fec) dt_sta_signal_pane_g1

0xecbe,	// (0x00048ff4) dt_sta_signal_pane_g2

0x0001,

0x0107,	// (0x0003a43d) dt_sta_signal_pane_g

0xecc6,	// (0x00048ffc) dt_sta_battery_pane_g1

0xeccf,	// (0x00049005) dt_sta_battery_pane_t1

0xc2b3,	// (0x000465e9) bg_dt_sta_control_pane_g1

0x8fbe,	// (0x000432f4) fep_china_uni_eep_pane

0x8fc6,	// (0x000432fc) fep_china_uni_entry_pane_ParamLimits

0x8fd6,	// (0x0004330c) popup_fep_china_uni_window_g1_ParamLimits

0x8fe6,	// (0x0004331c) popup_fep_china_uni_window_g2_ParamLimits

0x8fe6,	// (0x0004331c) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049a58) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049a58) popup_fep_china_uni_window_g

0xecde,	// (0x00049014) fep_china_uni_eep_pane_g1

0xece6,	// (0x0004901c) fep_china_uni_eep_pane_t1

0xe766,	// (0x00048a9c) aid_touch_area_size_smil_player

0x99bb,	// (0x00043cf1) lc0_clock_pane

0x9ba2,	// (0x00043ed8) status_pane_g5_ParamLimits

0x9ba2,	// (0x00043ed8) status_pane_g5

0x6564,	// (0x0004089a) popup_keymap_window

0x9b60,	// (0x00043e96) status_icon_pane

0xe950,	// (0x00048c86) cell_ai5_widget_pane_g3_ParamLimits

0xe967,	// (0x00048c9d) cell_ai5_widget_pane_g4_ParamLimits

0xe973,	// (0x00048ca9) cell_ai5_widget_pane_g5_ParamLimits

0xe997,	// (0x00048ccd) cell_ai5_widget_pane_g8_ParamLimits

0xe997,	// (0x00048ccd) cell_ai5_widget_pane_g8

0xe9ab,	// (0x00048ce1) cell_ai5_widget_pane_g9_ParamLimits

0xe9ab,	// (0x00048ce1) cell_ai5_widget_pane_g9

0xe9bf,	// (0x00048cf5) cell_ai5_widget_pane_g10_ParamLimits

0xe9bf,	// (0x00048cf5) cell_ai5_widget_pane_g10

0xecf5,	// (0x0004902b) status_icon_pane_g1

0x7ec9,	// (0x000421ff) bg_popup_sub_pane_cp13

0xecfd,	// (0x00049033) popup_keymap_window_t1

0x9794,	// (0x00043aca) control_pane_g6_ParamLimits

0x9794,	// (0x00043aca) control_pane_g6

0x97a1,	// (0x00043ad7) control_pane_g7_ParamLimits

0x97a1,	// (0x00043ad7) control_pane_g7

0x97ae,	// (0x00043ae4) control_pane_g8_ParamLimits

0x97ae,	// (0x00043ae4) control_pane_g8

0xec18,	// (0x00048f4e) dt_sta_controll_pane_ParamLimits

0xec25,	// (0x00048f5b) dt_sta_indi_pane_ParamLimits

0xec36,	// (0x00048f6c) dt_sta_title_pane_ParamLimits

0x8764,	// (0x00042a9a) aid_size_touch_scroll_bar_cale

0x5af1,	// (0x0003fe27) popup_discreet_window_ParamLimits

0x5af1,	// (0x0003fe27) popup_discreet_window

0x5b79,	// (0x0003feaf) popup_sk_window

0xa394,	// (0x000446ca) bg_popup_sub_pane_cp28_ParamLimits

0xa394,	// (0x000446ca) bg_popup_sub_pane_cp28

0xed0b,	// (0x00049041) popup_discreet_window_g1_ParamLimits

0xed0b,	// (0x00049041) popup_discreet_window_g1

0xed2b,	// (0x00049061) popup_discreet_window_t1_ParamLimits

0xed2b,	// (0x00049061) popup_discreet_window_t1

0xed49,	// (0x0004907f) popup_discreet_window_t2_ParamLimits

0xed49,	// (0x0004907f) popup_discreet_window_t2

0x0002,

0x010c,	// (0x0003a442) popup_discreet_window_t_ParamLimits

0x010c,	// (0x0003a442) popup_discreet_window_t

0x7b56,	// (0x00041e8c) popup_sk_window_g1

0x7b60,	// (0x00041e96) popup_sk_window_g2

0x0001,

0xfe0f,	// (0x0004a145) popup_sk_window_g

0x7b68,	// (0x00041e9e) popup_sk_window_t1

0x7b76,	// (0x00041eac) popup_sk_window_t1_copy1

0xe940,	// (0x00048c76) cell_ai5_widget_pane_g2_ParamLimits

0xea99,	// (0x00048dcf) cell_ai5_widget_pane_t9_ParamLimits

0xea99,	// (0x00048dcf) cell_ai5_widget_pane_t9

0x7ec9,	// (0x000421ff) main_fep_fshwr2_pane

0x7b84,	// (0x00041eba) aid_fshwr2_btn_pane

0x7b90,	// (0x00041ec6) aid_fshwr2_syb_pane

0x7b9c,	// (0x00041ed2) aid_fshwr2_txt_pane

0x7ba8,	// (0x00041ede) fshwr2_func_candi_pane

0x7bbd,	// (0x00041ef3) fshwr2_hwr_syb_pane

0x7bcd,	// (0x00041f03) fshwr2_icf_pane

0x7ec9,	// (0x000421ff) fshwr2_icf_bg_pane

0x7bf6,	// (0x00041f2c) fshwr2_icf_pane_t1_ParamLimits

0x7bf6,	// (0x00041f2c) fshwr2_icf_pane_t1

0x8eac,	// (0x000431e2) fshwr2_func_candi_pane_g1

0xed9b,	// (0x000490d1) fshwr2_func_candi_row_pane_ParamLimits

0xed9b,	// (0x000490d1) fshwr2_func_candi_row_pane

0x7c0e,	// (0x00041f44) cell_fshwr2_syb_pane_ParamLimits

0x7c0e,	// (0x00041f44) cell_fshwr2_syb_pane

0xc531,	// (0x00046867) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc531,	// (0x00046867) fshwr2_hwr_syb_pane_g1

0x7ec9,	// (0x000421ff) bg_popup_call_pane_cp01

0x7c24,	// (0x00041f5a) fshwr2_func_candi_cell_pane_ParamLimits

0x7c24,	// (0x00041f5a) fshwr2_func_candi_cell_pane

0xedab,	// (0x000490e1) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xedab,	// (0x000490e1) fshwr2_func_candi_cell_bg_pane

0x7c6f,	// (0x00041fa5) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7c6f,	// (0x00041fa5) fshwr2_func_candi_cell_pane_g1

0x7c97,	// (0x00041fcd) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7c97,	// (0x00041fcd) fshwr2_func_candi_cell_pane_t1

0x7ec9,	// (0x000421ff) bg_button_pane_cp08

0xedb7,	// (0x000490ed) cell_fshwr2_syb_bg_pane

0x7caa,	// (0x00041fe0) cell_fshwr2_syb_bg_pane_g1

0x7cb2,	// (0x00041fe8) cell_fshwr2_syb_bg_pane_t1

0x8838,	// (0x00042b6e) main_tmo_pane

0xaea3,	// (0x000451d9) uni_indicator_pane_g1_ParamLimits

0xaeb9,	// (0x000451ef) uni_indicator_pane_g2_ParamLimits

0xaecf,	// (0x00045205) uni_indicator_pane_g3_ParamLimits

0xaee2,	// (0x00045218) uni_indicator_pane_g4_ParamLimits

0xaee2,	// (0x00045218) uni_indicator_pane_g4

0xaef6,	// (0x0004522c) uni_indicator_pane_g5_ParamLimits

0xaef6,	// (0x0004522c) uni_indicator_pane_g5

0xaef6,	// (0x0004522c) uni_indicator_pane_g6_ParamLimits

0xaef6,	// (0x0004522c) uni_indicator_pane_g6

0xf926,	// (0x00049c5c) uni_indicator_pane_g_ParamLimits

0xd78e,	// (0x00047ac4) popup_tmo_note_window_ParamLimits

0xd78e,	// (0x00047ac4) popup_tmo_note_window

0x8838,	// (0x00042b6e) fshwr2_bg_pane

0x7c88,	// (0x00041fbe) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7c88,	// (0x00041fbe) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe14,	// (0x0004a14a) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe14,	// (0x0004a14a) fshwr2_func_candi_cell_pane_g

0xc2b3,	// (0x000465e9) bg_popup_window_pane_cp01

0x7cc1,	// (0x00041ff7) bg_popup_window_pane_g1_cp01

0xedbf,	// (0x000490f5) bg_popup_window_pane_cp22_ParamLimits

0xedbf,	// (0x000490f5) bg_popup_window_pane_cp22

0xedcd,	// (0x00049103) listscroll_tmo_link_pane_ParamLimits

0xedcd,	// (0x00049103) listscroll_tmo_link_pane

0xee0d,	// (0x00049143) popup_tmo_note_window_g1_ParamLimits

0xee0d,	// (0x00049143) popup_tmo_note_window_g1

0xee1a,	// (0x00049150) tmo_note_info_pane_ParamLimits

0xee1a,	// (0x00049150) tmo_note_info_pane

0xee34,	// (0x0004916a) list_tmo_note_info_pane_g1_ParamLimits

0xee34,	// (0x0004916a) list_tmo_note_info_pane_g1

0xee4b,	// (0x00049181) list_tmo_note_info_pane_g2_ParamLimits

0xee4b,	// (0x00049181) list_tmo_note_info_pane_g2

0x0001,

0x011d,	// (0x0003a453) list_tmo_note_info_pane_g_ParamLimits

0x011d,	// (0x0003a453) list_tmo_note_info_pane_g

0xee67,	// (0x0004919d) list_tmo_note_info_text_pane_ParamLimits

0xee67,	// (0x0004919d) list_tmo_note_info_text_pane

0xeee8,	// (0x0004921e) list_tmo_link_pane

0xeef5,	// (0x0004922b) scroll_pane_cp20

0xef02,	// (0x00049238) list_single_tmo_link_pane_ParamLimits

0xef02,	// (0x00049238) list_single_tmo_link_pane

0xef12,	// (0x00049248) list_single_tmo_link_pane_t1

0xef20,	// (0x00049256) list_tmo_note_info_text_pane_t1_ParamLimits

0xef20,	// (0x00049256) list_tmo_note_info_text_pane_t1

0x88e3,	// (0x00042c19) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88e3,	// (0x00042c19) aid_size_touch_scroll_bar_cp01

0x4ea6,	// (0x0003f1dc) aid_size_touch_slider_marker

0x5b61,	// (0x0003fe97) popup_settings_window_ParamLimits

0x5b61,	// (0x0003fe97) popup_settings_window

0x503d,	// (0x0003f373) popup_candi_list_indi_window

0x986b,	// (0x00043ba1) aid_touch_navi_pane_ParamLimits

0x7369,	// (0x0004169f) rs_clock_indi_pane

0x7372,	// (0x000416a8) sctrl_sk_bottom_pane_ParamLimits

0x7383,	// (0x000416b9) sctrl_sk_top_pane_ParamLimits

0x746a,	// (0x000417a0) popup_fep_tooltip_window

0xe8b6,	// (0x00048bec) aid_size_cell_widget_grid_ParamLimits

0xe92b,	// (0x00048c61) cell_ai5_widget_pane_g1_ParamLimits

0xe92b,	// (0x00048c61) cell_ai5_widget_pane_g1

0xe97f,	// (0x00048cb5) cell_ai5_widget_pane_g6_ParamLimits

0xe98b,	// (0x00048cc1) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x00bc,	// (0x0003a3f2) cell_ai5_widget_pane_g_ParamLimits

0x00bc,	// (0x0003a3f2) cell_ai5_widget_pane_g

0xeabd,	// (0x00048df3) cell_ai5_widget_pane_t10_ParamLimits

0xeabd,	// (0x00048df3) cell_ai5_widget_pane_t10

0xeadb,	// (0x00048e11) grid_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00048eb2) cell_contacts_ai5_widget_pane_ParamLimits

0xeb7c,	// (0x00048eb2) cell_contacts_ai5_widget_pane

0xed5e,	// (0x00049094) popup_discreet_window_t3_ParamLimits

0xed5e,	// (0x00049094) popup_discreet_window_t3

0x7be2,	// (0x00041f18) popup_fshwr2_char_preview_window_ParamLimits

0x7be2,	// (0x00041f18) popup_fshwr2_char_preview_window

0xee85,	// (0x000491bb) tmo_note_info_pane_t1

0xee9a,	// (0x000491d0) tmo_note_info_pane_t2

0xeeaf,	// (0x000491e5) tmo_note_info_pane_t3

0xeec4,	// (0x000491fa) tmo_note_info_pane_t4

0xeed6,	// (0x0004920c) tmo_note_info_pane_t5

0x0004,

0x0122,	// (0x0003a458) tmo_note_info_pane_t

0xeee8,	// (0x0004921e) list_tmo_link_pane_ParamLimits

0xeef5,	// (0x0004922b) scroll_pane_cp20_ParamLimits

0x7ec9,	// (0x000421ff) bg_popup_fep_char_preview_window_cp01

0xef39,	// (0x0004926f) popup_fshwr2_char_preview_window_t1

0xef47,	// (0x0004927d) popup_candi_list_indi_window_g1

0xef50,	// (0x00049286) bg_cell_contacts_ai5_widget_pane

0xef5c,	// (0x00049292) cell_contacts_ai5_widget_pane_g1

0xc993,	// (0x00046cc9) cell_contacts_ai5_widget_pane_g2

0xef71,	// (0x000492a7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe19,	// (0x0004a14f) cell_contacts_ai5_widget_pane_g

0xef7d,	// (0x000492b3) cell_contacts_ai5_widget_pane_t1

0x8838,	// (0x00042b6e) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeff4,	// (0x0004932a) settings_container_pane

0x94bf,	// (0x000437f5) listscroll_set_pane_copy1

0xb9c7,	// (0x00045cfd) scroll_pane_cp121_copy1

0xa145,	// (0x0004447b) set_content_pane_copy1

0xf000,	// (0x00049336) aid_height_set_list_copy1_ParamLimits

0xf000,	// (0x00049336) aid_height_set_list_copy1

0xb0ee,	// (0x00045424) aid_size_parent_copy1_ParamLimits

0xb0ee,	// (0x00045424) aid_size_parent_copy1

0xf00c,	// (0x00049342) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf00c,	// (0x00049342) button_value_adjust_pane_cp6_copy1

0x9809,	// (0x00043b3f) list_highlight_pane_cp2_copy1_ParamLimits

0x9809,	// (0x00043b3f) list_highlight_pane_cp2_copy1

0xf020,	// (0x00049356) list_set_pane_copy1_ParamLimits

0xf020,	// (0x00049356) list_set_pane_copy1

0xef8f,	// (0x000492c5) main_pane_set_t1_copy1_ParamLimits

0xef8f,	// (0x000492c5) main_pane_set_t1_copy1

0xefc9,	// (0x000492ff) main_pane_set_t2_copy1_ParamLimits

0xefc9,	// (0x000492ff) main_pane_set_t2_copy1

0xf0cd,	// (0x00049403) main_pane_set_t3_copy1

0xf0db,	// (0x00049411) main_pane_set_t4_copy1

0xefe8,	// (0x0004931e) set_content_pane_g1_copy1_ParamLimits

0xefe8,	// (0x0004931e) set_content_pane_g1_copy1

0xf0e9,	// (0x0004941f) setting_code_pane_copy1

0xf0f1,	// (0x00049427) setting_slider_graphic_pane_copy1

0xf0f1,	// (0x00049427) setting_slider_pane_copy1

0xf0f1,	// (0x00049427) setting_text_pane_copy1

0xf0f1,	// (0x00049427) setting_volume_pane_copy1

0xf0e9,	// (0x0004941f) settings_code_pane_cp2_copy1

0xf0f9,	// (0x0004942f) settings_code_pane_cp_copy1_ParamLimits

0xf0f9,	// (0x0004942f) settings_code_pane_cp_copy1

0x7cca,	// (0x00042000) volume_set_pane_copy1

0xf10d,	// (0x00049443) volume_set_pane_g10_copy1

0xf115,	// (0x0004944b) volume_set_pane_g1_copy1

0xf11d,	// (0x00049453) volume_set_pane_g2_copy1

0xf125,	// (0x0004945b) volume_set_pane_g3_copy1

0xf12d,	// (0x00049463) volume_set_pane_g4_copy1

0xf135,	// (0x0004946b) volume_set_pane_g5_copy1

0xf13d,	// (0x00049473) volume_set_pane_g6_copy1

0xf145,	// (0x0004947b) volume_set_pane_g7_copy1

0xf14d,	// (0x00049483) volume_set_pane_g8_copy1

0xf155,	// (0x0004948b) volume_set_pane_g9_copy1

0x7fbd,	// (0x000422f3) bg_set_opt_pane_cp_copy1_ParamLimits

0x7fbd,	// (0x000422f3) bg_set_opt_pane_cp_copy1

0x7cd2,	// (0x00042008) setting_slider_pane_t1_copy1_ParamLimits

0x7cd2,	// (0x00042008) setting_slider_pane_t1_copy1

0x7cf0,	// (0x00042026) setting_slider_pane_t2_copy1_ParamLimits

0x7cf0,	// (0x00042026) setting_slider_pane_t2_copy1

0x7d0a,	// (0x00042040) setting_slider_pane_t3_copy1_ParamLimits

0x7d0a,	// (0x00042040) setting_slider_pane_t3_copy1

0x7d22,	// (0x00042058) slider_set_pane_copy1_ParamLimits

0x7d22,	// (0x00042058) slider_set_pane_copy1

0x8884,	// (0x00042bba) set_opt_bg_pane_g1_copy2

0x888c,	// (0x00042bc2) set_opt_bg_pane_g2_copy2

0xf15d,	// (0x00049493) set_opt_bg_pane_g3_copy2

0x889c,	// (0x00042bd2) set_opt_bg_pane_g4_copy2

0x88a4,	// (0x00042bda) set_opt_bg_pane_g5_copy2

0x88ac,	// (0x00042be2) set_opt_bg_pane_g6_copy2

0xf167,	// (0x0004949d) set_opt_bg_pane_g7_copy2

0xf16f,	// (0x000494a5) set_opt_bg_pane_g8_copy2

0xf179,	// (0x000494af) set_opt_bg_pane_g9_copy2

0x7d38,	// (0x0004206e) aid_size_touch_slider_mark_copy1_ParamLimits

0x7d38,	// (0x0004206e) aid_size_touch_slider_mark_copy1

0xf183,	// (0x000494b9) slider_set_pane_g1_copy1

0x7d4c,	// (0x00042082) slider_set_pane_g2_copy1

0x6ca4,	// (0x00040fda) slider_set_pane_g3_copy1_ParamLimits

0x6ca4,	// (0x00040fda) slider_set_pane_g3_copy1

0x6cb8,	// (0x00040fee) slider_set_pane_g4_copy1_ParamLimits

0x6cb8,	// (0x00040fee) slider_set_pane_g4_copy1

0x6cd0,	// (0x00041006) slider_set_pane_g5_copy1_ParamLimits

0x6cd0,	// (0x00041006) slider_set_pane_g5_copy1

0x6ca4,	// (0x00040fda) slider_set_pane_g6_copy1_ParamLimits

0x6ca4,	// (0x00040fda) slider_set_pane_g6_copy1

0x7d54,	// (0x0004208a) slider_set_pane_g7_copy1_ParamLimits

0x7d54,	// (0x0004208a) slider_set_pane_g7_copy1

0x7edd,	// (0x00042213) bg_set_opt_pane_cp2_copy1

0xf18c,	// (0x000494c2) setting_slider_graphic_pane_g1_copy1

0xf195,	// (0x000494cb) setting_slider_graphic_pane_t1_copy1

0xf1a5,	// (0x000494db) setting_slider_graphic_pane_t2_copy1

0xf1b5,	// (0x000494eb) slider_set_pane_cp_copy1

0xf1c5,	// (0x000494fb) input_focus_pane_cp1_copy1

0xf1ce,	// (0x00049504) list_set_text_pane_copy1

0xf1d6,	// (0x0004950c) setting_text_pane_g1_copy1

0x5868,	// (0x0003fb9e) set_text_pane_t1_copy1

0xf1c5,	// (0x000494fb) input_focus_pane_cp2_copy1

0xf1d6,	// (0x0004950c) setting_code_pane_g1_copy1

0xf1df,	// (0x00049515) setting_code_pane_t1_copy1

0xf1ed,	// (0x00049523) list_set_graphic_pane_copy1

0x7edd,	// (0x00042213) bg_set_opt_pane_cp4_copy1

0x91ba,	// (0x000434f0) list_set_graphic_pane_g1_copy1_ParamLimits

0x91ba,	// (0x000434f0) list_set_graphic_pane_g1_copy1

0xf200,	// (0x00049536) list_set_graphic_pane_g2_copy1

0x91d2,	// (0x00043508) list_set_graphic_pane_t1_copy1_ParamLimits

0x91d2,	// (0x00043508) list_set_graphic_pane_t1_copy1

0xc2b3,	// (0x000465e9) rs_clock_indi_pane_g1

0xf208,	// (0x0004953e) rs_clock_indi_pane_t1

0xf216,	// (0x0004954c) rs_indi_pane

0xf21e,	// (0x00049554) rs_indi_pane_g1

0xf227,	// (0x0004955d) rs_indi_pane_g2

0xf230,	// (0x00049566) rs_indi_pane_g3

0x0002,

0x0134,	// (0x0003a46a) rs_indi_pane_g

0x94bf,	// (0x000437f5) bg_popup_preview_window_pane_cp03

0xf239,	// (0x0004956f) popup_fep_tooltip_window_t1

0xcf2f,	// (0x00047265) popup_note2_window_g2_ParamLimits

0xcf2f,	// (0x00047265) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x00049f92) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x00049f92) popup_note2_window_g

0xd42a,	// (0x00047760) bg_popup_sub_pane_cp11_ParamLimits

0xd437,	// (0x0004776d) cell_ai3_links_pane_g1_ParamLimits

0xd44e,	// (0x00047784) cell_ai3_links_pane_t1

0x5868,	// (0x0003fb9e) set_text_pane_t1_copy1_ParamLimits

0x93d0,	// (0x00043706) cell_graphic_popup_pane_cp2_ParamLimits

0x93d0,	// (0x00043706) cell_graphic_popup_pane_cp2

0xf247,	// (0x0004957d) cell_graphic_popup_pane_g1_cp2

0x8577,	// (0x000428ad) cell_graphic_popup_pane_g2_cp2

0xf24f,	// (0x00049585) cell_graphic_popup_pane_g3_cp2

0xf257,	// (0x0004958d) cell_graphic_popup_pane_t2_cp2

0x8588,	// (0x000428be) grid_highlight_pane_cp3_cp2

0x8bc9,	// (0x00042eff) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8838,	// (0x00042b6e) main_tmo_pane_ParamLimits

0xd782,	// (0x00047ab8) popup_tmo_big_image_note_window

0xe91a,	// (0x00048c50) cell_ai5_widget_list_pane

0xe922,	// (0x00048c58) cell_ai5_widget_lrg_icon_pane

0xee85,	// (0x000491bb) tmo_note_info_pane_t1_ParamLimits

0xee9a,	// (0x000491d0) tmo_note_info_pane_t2_ParamLimits

0xeeaf,	// (0x000491e5) tmo_note_info_pane_t3_ParamLimits

0xeec4,	// (0x000491fa) tmo_note_info_pane_t4_ParamLimits

0xeed6,	// (0x0004920c) tmo_note_info_pane_t5_ParamLimits

0x0122,	// (0x0003a458) tmo_note_info_pane_t_ParamLimits

0xeff4,	// (0x0004932a) settings_container_pane_ParamLimits

0xf1bd,	// (0x000494f3) indicator_popup_pane_cp5

0xf1bd,	// (0x000494f3) indicator_popup_pane_cp6

0xf1ed,	// (0x00049523) list_set_graphic_pane_copy1_ParamLimits

0x7ec9,	// (0x000421ff) bg_popup_window_pane_cp23

0xf265,	// (0x0004959b) popup_tmo_big_image_note_window_g1

0xf26f,	// (0x000495a5) popup_tmo_big_image_note_window_t1

0xf27f,	// (0x000495b5) popup_tmo_big_image_note_window_t2

0xf28f,	// (0x000495c5) popup_tmo_big_image_note_window_t3

0x0002,

0x013b,	// (0x0003a471) popup_tmo_big_image_note_window_t

0xc2b3,	// (0x000465e9) cell_ai5_widget_lrg_icon_pane_g1

0xf29f,	// (0x000495d5) cell_ai5_widget_lrg_icon_pane_t1

0xf2ad,	// (0x000495e3) cell_ai5_widget_list_row_pane_ParamLimits

0xf2ad,	// (0x000495e3) cell_ai5_widget_list_row_pane

0xf2c4,	// (0x000495fa) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c4,	// (0x000495fa) cell_ai5_widget_list_row_pane_g1

0xf2d1,	// (0x00049607) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d1,	// (0x00049607) cell_ai5_widget_list_row_pane_t1

0xf302,	// (0x00049638) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf302,	// (0x00049638) cell_ai5_widget_list_row_pane_t2

0x0002,

0x0142,	// (0x0003a478) cell_ai5_widget_list_row_pane_t_ParamLimits

0x0142,	// (0x0003a478) cell_ai5_widget_list_row_pane_t

0x7ec9,	// (0x000421ff) main_fep_vtchi_ss_pane

0xf346,	// (0x0004967c) popup_fep_char_pre_window

0xf34e,	// (0x00049684) popup_fep_ituss_window

0xf36f,	// (0x000496a5) popup_fep_vkbss_window

0xf399,	// (0x000496cf) grid_vkbss_keypad_pane_ParamLimits

0xf399,	// (0x000496cf) grid_vkbss_keypad_pane

0xf3a5,	// (0x000496db) ituss_keypad_pane

0x7d76,	// (0x000420ac) aid_vkbss_key_offset_ParamLimits

0x7d76,	// (0x000420ac) aid_vkbss_key_offset

0x7d82,	// (0x000420b8) cell_vkbss_key_pane_ParamLimits

0x7d82,	// (0x000420b8) cell_vkbss_key_pane

0xf3b4,	// (0x000496ea) bg_cell_vkbss_key_g1_ParamLimits

0xf3b4,	// (0x000496ea) bg_cell_vkbss_key_g1

0xf3c0,	// (0x000496f6) cell_vkbss_key_3p_pane_ParamLimits

0xf3c0,	// (0x000496f6) cell_vkbss_key_3p_pane

0xf3d4,	// (0x0004970a) cell_vkbss_key_g1_ParamLimits

0xf3d4,	// (0x0004970a) cell_vkbss_key_g1

0xf3e8,	// (0x0004971e) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0004971e) cell_vkbss_key_t1

0x7d98,	// (0x000420ce) cell_ituss_key_pane_ParamLimits

0x7d98,	// (0x000420ce) cell_ituss_key_pane

0xf413,	// (0x00049749) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x00049749) bg_cell_ituss_key_g1

0xf41f,	// (0x00049755) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x00049755) cell_ituss_key_pane_g1

0x7da9,	// (0x000420df) cell_ituss_key_pane_g2_ParamLimits

0x7da9,	// (0x000420df) cell_ituss_key_pane_g2

0x0002,

0xfe20,	// (0x0004a156) cell_ituss_key_pane_g_ParamLimits

0xfe20,	// (0x0004a156) cell_ituss_key_pane_g

0x7dd5,	// (0x0004210b) cell_ituss_key_t1_ParamLimits

0x7dd5,	// (0x0004210b) cell_ituss_key_t1

0x7e0f,	// (0x00042145) cell_ituss_key_t2_ParamLimits

0x7e0f,	// (0x00042145) cell_ituss_key_t2

0x7e40,	// (0x00042176) cell_ituss_key_t3_ParamLimits

0x7e40,	// (0x00042176) cell_ituss_key_t3

0x7e0f,	// (0x00042145) cell_ituss_key_t4_ParamLimits

0x7e0f,	// (0x00042145) cell_ituss_key_t4

0x0004,

0xfe27,	// (0x0004a15d) cell_ituss_key_t_ParamLimits

0xfe27,	// (0x0004a15d) cell_ituss_key_t

0xf44b,	// (0x00049781) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x00049789) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x00049791) cell_vkbss_key_3p_pane_g3

0x0002,

0x015b,	// (0x0003a491) cell_vkbss_key_3p_pane_g

0x7ec9,	// (0x000421ff) bg_popup_fep_char_preview_window_cp02

0x7e83,	// (0x000421b9) popup_fep_char_pre_window_t1

0xe8ac,	// (0x00048be2) main_ai5_sk_pane

0xef50,	// (0x00049286) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef5c,	// (0x00049292) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc993,	// (0x00046cc9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef71,	// (0x000492a7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe19,	// (0x0004a14f) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef7d,	// (0x000492b3) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8838,	// (0x00042b6e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x00049799) main_ai5_sk_pane_g1

0xa1cd,	// (0x00044503) popup_query_code_window_g1

0xf364,	// (0x0004969a) popup_fep_vkb_icf_pane

0xf383,	// (0x000496b9) popup_fep_vtchi_icf_pane

0xf46c,	// (0x000497a2) bg_icf_pane

0xf478,	// (0x000497ae) list_vkb_icf_pane

0xf487,	// (0x000497bd) bg_icf_pane_cp01

0xf49a,	// (0x000497d0) vtchi_icf_list_pane

0xf4aa,	// (0x000497e0) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x000497e0) list_vkb_icf_pane_t1

0xf4c0,	// (0x000497f6) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x000497f6) vtchi_icf_list_pane_t1

0xf34e,	// (0x00049684) popup_fep_ituss_window_ParamLimits

0xf383,	// (0x000496b9) popup_fep_vtchi_icf_pane_ParamLimits

0xf3a5,	// (0x000496db) ituss_keypad_pane_ParamLimits

0x7d6a,	// (0x000420a0) ituss_sks_pane

0xf46c,	// (0x000497a2) bg_icf_pane_ParamLimits

0xf32a,	// (0x00049660) icf_edit_indi_pane_ParamLimits

0xf32a,	// (0x00049660) icf_edit_indi_pane

0xf478,	// (0x000497ae) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x000497bd) bg_icf_pane_cp01_ParamLimits

0xf339,	// (0x0004966f) icf_edit_indi_pane_cp01_ParamLimits

0xf339,	// (0x0004966f) icf_edit_indi_pane_cp01

0xf4a2,	// (0x000497d8) vtchi_query_pane

0xc531,	// (0x00046867) icf_edit_indi_pane_g1_ParamLimits

0xc531,	// (0x00046867) icf_edit_indi_pane_g1

0xf531,	// (0x00049867) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00049867) icf_edit_indi_pane_g2

0x0001,

0xfe37,	// (0x0004a16d) icf_edit_indi_pane_g_ParamLimits

0xfe37,	// (0x0004a16d) icf_edit_indi_pane_g

0xf540,	// (0x00049876) icf_edit_indi_pane_t1

0xf4da,	// (0x00049810) bg_input_focus_pane_cp042

0x875b,	// (0x00042a91) vtchi_button_pane

0xf4e3,	// (0x00049819) vtchi_query_pane_t1

0xf4f1,	// (0x00049827) vtchi_query_pane_t2

0xf4ff,	// (0x00049835) vtchi_query_pane_t3

0x0002,

0x0162,	// (0x0003a498) vtchi_query_pane_t

0x7ec9,	// (0x000421ff) bg_button_pane_cp13

0xf50d,	// (0x00049843) vtchi_button_pane_g1

0x7e92,	// (0x000421c8) ituss_sks_pane_g1

0x7e9d,	// (0x000421d3) ituss_sks_pane_g2

0x0001,

0xfe32,	// (0x0004a168) ituss_sks_pane_g

0xf515,	// (0x0004984b) ituss_sks_pane_t1

0xf523,	// (0x00049859) ituss_sks_pane_t2

0x0001,

0x016e,	// (0x0003a4a4) ituss_sks_pane_t

0xbd41,	// (0x00046077) indicator_nsta_pane_cp_g1

0xbd49,	// (0x0004607f) indicator_nsta_pane_cp_g2

0xbd51,	// (0x00046087) indicator_nsta_pane_cp_g3

0xbd41,	// (0x00046077) indicator_nsta_pane_cp_g4

0xbd49,	// (0x0004607f) indicator_nsta_pane_cp_g5

0xbd51,	// (0x00046087) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x00049ddc) indicator_nsta_pane_cp_g

0xe475,	// (0x000487ab) cell_graphic2_pane_t2_ParamLimits

0xe475,	// (0x000487ab) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x0004a0c6) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x0004a0c6) cell_graphic2_pane_t

0xe4a2,	// (0x000487d8) cell_graphic2_control_pane_t1

0x8f6d,	// (0x000432a3) signal_pane_g3_ParamLimits

0x8f6d,	// (0x000432a3) signal_pane_g3

0x8f7f,	// (0x000432b5) signal_pane_g4_ParamLimits

0x8f7f,	// (0x000432b5) signal_pane_g4

0xf314,	// (0x0004964a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf314,	// (0x0004964a) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0004976f) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0004976f) cell_ituss_key_pane_t1

0x9e18,	// (0x0004414e) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e18,	// (0x0004414e) form_field_data_wide_pane_vc_t2

0x9e2c,	// (0x00044162) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e2c,	// (0x00044162) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x00049b44) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x00049b44) form_field_data_wide_pane_vc_t

0xba09,	// (0x00045d3f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba09,	// (0x00045d3f) form_field_slider_wide_pane_vc_t3

0xbae7,	// (0x00045e1d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbae7,	// (0x00045e1d) form_field_popup_wide_pane_vc_t2

0xbafe,	// (0x00045e34) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbafe,	// (0x00045e34) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x00049dcb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x00049dcb) form_field_popup_wide_pane_vc_t

0x7b84,	// (0x00041eba) aid_fshwr2_btn_pane_ParamLimits

0x7b90,	// (0x00041ec6) aid_fshwr2_syb_pane_ParamLimits

0x7b9c,	// (0x00041ed2) aid_fshwr2_txt_pane_ParamLimits

0x8838,	// (0x00042b6e) fshwr2_bg_pane_ParamLimits

0x7ba8,	// (0x00041ede) fshwr2_func_candi_pane_ParamLimits

0x7bbd,	// (0x00041ef3) fshwr2_hwr_syb_pane_ParamLimits

0x7bcd,	// (0x00041f03) fshwr2_icf_pane_ParamLimits

0x6e84,	// (0x000411ba) list_double_graphic_pane_vc_g4_ParamLimits

0x6e84,	// (0x000411ba) list_double_graphic_pane_vc_g4

0x7dc9,	// (0x000420ff) cell_ituss_key_pane_g3_ParamLimits

0x7dc9,	// (0x000420ff) cell_ituss_key_pane_g3

0x7e71,	// (0x000421a7) cell_ituss_key_t5_ParamLimits

0x7e71,	// (0x000421a7) cell_ituss_key_t5

0xf36f,	// (0x000496a5) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002f721 };

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
0xb2ac,	// (0x0003a9cd) Screen

0xb2b8,	// (0x0003a9d9) application_window_ParamLimits

0xb2b8,	// (0x0003a9d9) application_window

0x2848,	// (0x00031f69) screen_g1

0xb2f0,	// (0x0003aa11) area_bottom_pane_ParamLimits

0xb2f0,	// (0x0003aa11) area_bottom_pane

0xf3ad,	// (0x0003eace) area_top_pane_ParamLimits

0xf3ad,	// (0x0003eace) area_top_pane

0xf44b,	// (0x0003eb6c) main_pane_ParamLimits

0xf44b,	// (0x0003eb6c) main_pane

0x2852,	// (0x00031f73) misc_graphics

0xd38d,	// (0x0003caae) battery_pane_ParamLimits

0xd38d,	// (0x0003caae) battery_pane

0x55c1,	// (0x00034ce2) bg_status_flat_pane_g8

0x55c9,	// (0x00034cea) bg_status_flat_pane_g9

0x493e,	// (0x0003405f) context_pane_ParamLimits

0x493e,	// (0x0003405f) context_pane

0xd4f8,	// (0x0003cc19) navi_pane_ParamLimits

0xd4f8,	// (0x0003cc19) navi_pane

0xd570,	// (0x0003cc91) signal_pane_ParamLimits

0xd570,	// (0x0003cc91) signal_pane

0x0008,

0xf87a,	// (0x0003ef9b) bg_status_flat_pane_g

0xd600,	// (0x0003cd21) status_pane_g1_ParamLimits

0xd600,	// (0x0003cd21) status_pane_g1

0xd616,	// (0x0003cd37) status_pane_g2_ParamLimits

0xd616,	// (0x0003cd37) status_pane_g2

0x4b57,	// (0x00034278) status_pane_g3_ParamLimits

0x4b57,	// (0x00034278) status_pane_g3

0x0004,

0xf7a6,	// (0x0003eec7) status_pane_g_ParamLimits

0xf7a6,	// (0x0003eec7) status_pane_g

0xd622,	// (0x0003cd43) title_pane_ParamLimits

0xd622,	// (0x0003cd43) title_pane

0xd685,	// (0x0003cda6) uni_indicator_pane_ParamLimits

0xd685,	// (0x0003cda6) uni_indicator_pane

0x4782,	// (0x00033ea3) bg_list_pane_ParamLimits

0x4782,	// (0x00033ea3) bg_list_pane

0xd2f4,	// (0x0003ca15) find_pane

0xd2fc,	// (0x0003ca1d) listscroll_app_pane_ParamLimits

0xd2fc,	// (0x0003ca1d) listscroll_app_pane

0x47ae,	// (0x00033ecf) listscroll_form_pane

0xbc65,	// (0x0003b386) listscroll_gen_pane_ParamLimits

0xbc65,	// (0x0003b386) listscroll_gen_pane

0x47ae,	// (0x00033ecf) listscroll_set_pane

0x6158,	// (0x00035879) main_idle_act_pane

0x4488,	// (0x00033ba9) main_idle_trad_pane

0x4488,	// (0x00033ba9) main_list_empty_pane

0x47c8,	// (0x00033ee9) main_midp_pane

0x47d4,	// (0x00033ef5) main_pane_g1_ParamLimits

0x47d4,	// (0x00033ef5) main_pane_g1

0xbc79,	// (0x0003b39a) popup_ai_message_window_ParamLimits

0xbc79,	// (0x0003b39a) popup_ai_message_window

0xbd0a,	// (0x0003b42b) popup_fep_china_uni_window_ParamLimits

0xbd0a,	// (0x0003b42b) popup_fep_china_uni_window

0x1044,	// (0x00030765) popup_fep_japan_candidate_window_ParamLimits

0x1044,	// (0x00030765) popup_fep_japan_candidate_window

0x1064,	// (0x00030785) popup_fep_japan_predictive_window_ParamLimits

0x1064,	// (0x00030785) popup_fep_japan_predictive_window

0xbd66,	// (0x0003b487) popup_find_window

0xbd83,	// (0x0003b4a4) popup_grid_graphic_window_ParamLimits

0xbd83,	// (0x0003b4a4) popup_grid_graphic_window

0x10c9,	// (0x000307ea) popup_large_graphic_colour_window

0xbe1b,	// (0x0003b53c) popup_menu_window_ParamLimits

0xbe1b,	// (0x0003b53c) popup_menu_window

0xbfed,	// (0x0003b70e) popup_note_image_window

0xbfb3,	// (0x0003b6d4) popup_note_wait_window_ParamLimits

0xbfb3,	// (0x0003b6d4) popup_note_wait_window

0xc005,	// (0x0003b726) popup_note_window_ParamLimits

0xc005,	// (0x0003b726) popup_note_window

0xc0ab,	// (0x0003b7cc) popup_query_code_window_ParamLimits

0xc0ab,	// (0x0003b7cc) popup_query_code_window

0x1311,	// (0x00030a32) popup_query_data_code_window_ParamLimits

0x1311,	// (0x00030a32) popup_query_data_code_window

0xc0e5,	// (0x0003b806) popup_query_data_window_ParamLimits

0xc0e5,	// (0x0003b806) popup_query_data_window

0xc167,	// (0x0003b888) popup_query_sat_info_window_ParamLimits

0xc167,	// (0x0003b888) popup_query_sat_info_window

0xc1fe,	// (0x0003b91f) popup_snote_single_graphic_window_ParamLimits

0xc1fe,	// (0x0003b91f) popup_snote_single_graphic_window

0xc1fe,	// (0x0003b91f) popup_snote_single_text_window_ParamLimits

0xc1fe,	// (0x0003b91f) popup_snote_single_text_window

0x1398,	// (0x00030ab9) popup_sub_window_general

0x14c8,	// (0x00030be9) popup_window_general_ParamLimits

0x14c8,	// (0x00030be9) popup_window_general

0x47e2,	// (0x00033f03) power_save_pane

0xbaf8,	// (0x0003b219) control_pane_g1_ParamLimits

0xbaf8,	// (0x0003b219) control_pane_g1

0xbb21,	// (0x0003b242) control_pane_g2_ParamLimits

0xbb21,	// (0x0003b242) control_pane_g2

0x4745,	// (0x00033e66) control_pane_g3_ParamLimits

0x4745,	// (0x00033e66) control_pane_g3

0x0007,

0xf78e,	// (0x0003eeaf) control_pane_g_ParamLimits

0xf78e,	// (0x0003eeaf) control_pane_g

0xbb5e,	// (0x0003b27f) control_pane_t1_ParamLimits

0xbb5e,	// (0x0003b27f) control_pane_t1

0xbbbc,	// (0x0003b2dd) control_pane_t2_ParamLimits

0xbbbc,	// (0x0003b2dd) control_pane_t2

0x0002,

0xf79f,	// (0x0003eec0) control_pane_t_ParamLimits

0xf79f,	// (0x0003eec0) control_pane_t

0x4666,	// (0x00033d87) navi_navi_volume_pane_cp1

0x466f,	// (0x00033d90) status_small_icon_pane

0x4677,	// (0x00033d98) status_small_pane_g1_ParamLimits

0x4677,	// (0x00033d98) status_small_pane_g1

0x46ab,	// (0x00033dcc) status_small_pane_g2_ParamLimits

0x46ab,	// (0x00033dcc) status_small_pane_g2

0x46b7,	// (0x00033dd8) status_small_pane_g3_ParamLimits

0x46b7,	// (0x00033dd8) status_small_pane_g3

0x46c3,	// (0x00033de4) status_small_pane_g4_ParamLimits

0x46c3,	// (0x00033de4) status_small_pane_g4

0x46cf,	// (0x00033df0) status_small_pane_g5_ParamLimits

0x46cf,	// (0x00033df0) status_small_pane_g5

0x46de,	// (0x00033dff) status_small_pane_g6_ParamLimits

0x46de,	// (0x00033dff) status_small_pane_g6

0x0007,

0xf77d,	// (0x0003ee9e) status_small_pane_g_ParamLimits

0xf77d,	// (0x0003ee9e) status_small_pane_g

0x470e,	// (0x00033e2f) status_small_pane_t1

0x4731,	// (0x00033e52) status_small_wait_pane_ParamLimits

0x4731,	// (0x00033e52) status_small_wait_pane

0xd0c9,	// (0x0003c7ea) aid_levels_signal_ParamLimits

0xd0c9,	// (0x0003c7ea) aid_levels_signal

0xd0e1,	// (0x0003c802) signal_pane_g1_ParamLimits

0xd0e1,	// (0x0003c802) signal_pane_g1

0xd0fc,	// (0x0003c81d) signal_pane_g2_ParamLimits

0xd0fc,	// (0x0003c81d) signal_pane_g2

0x0003,

0xf70e,	// (0x0003ee2f) signal_pane_g_ParamLimits

0xf70e,	// (0x0003ee2f) signal_pane_g

0x3f67,	// (0x00033688) context_pane_g1

0xb469,	// (0x0003ab8a) title_pane_g1

0xb4a0,	// (0x0003abc1) title_pane_t1

0x28fa,	// (0x0003201b) title_pane_t2

0x2920,	// (0x00032041) title_pane_t3

0x0002,

0xf55d,	// (0x0003ec7e) title_pane_t

0xd6ad,	// (0x0003cdce) aid_levels_battery_ParamLimits

0xd6ad,	// (0x0003cdce) aid_levels_battery

0xd6c9,	// (0x0003cdea) battery_pane_g1_ParamLimits

0xd6c9,	// (0x0003cdea) battery_pane_g1

0xd6e6,	// (0x0003ce07) battery_pane_g2_ParamLimits

0xd6e6,	// (0x0003ce07) battery_pane_g2

0x0001,

0xf7b1,	// (0x0003eed2) battery_pane_g_ParamLimits

0xf7b1,	// (0x0003eed2) battery_pane_g

0x5ef7,	// (0x00035618) uni_indicator_pane_g1

0x5f0c,	// (0x0003562d) uni_indicator_pane_g2

0x5f22,	// (0x00035643) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0003f043) uni_indicator_pane_g

0x42fa,	// (0x00033a1b) navi_icon_pane_ParamLimits

0x42fa,	// (0x00033a1b) navi_icon_pane

0x4243,	// (0x00033964) navi_midp_pane

0x4316,	// (0x00033a37) navi_navi_pane

0x4320,	// (0x00033a41) navi_text_pane_ParamLimits

0x4320,	// (0x00033a41) navi_text_pane

0x2848,	// (0x00031f69) status_small_wait_pane_g1

0x33d3,	// (0x00032af4) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0003f03e) status_small_wait_pane_g

0x5c1c,	// (0x0003533d) navi_navi_icon_text_pane

0x5c24,	// (0x00035345) navi_navi_pane_g1_ParamLimits

0x5c24,	// (0x00035345) navi_navi_pane_g1

0x5c36,	// (0x00035357) navi_navi_pane_g2_ParamLimits

0x5c36,	// (0x00035357) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0003f00c) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0003f00c) navi_navi_pane_g

0x5c48,	// (0x00035369) navi_navi_tabs_pane

0x5c51,	// (0x00035372) navi_navi_text_pane

0x5c1c,	// (0x0003533d) navi_navi_volume_pane

0x5bf8,	// (0x00035319) navi_text_pane_t1

0x5bec,	// (0x0003530d) navi_icon_pane_g1

0x5b3f,	// (0x00035260) navi_navi_text_pane_t1

0xc4de,	// (0x0003bbff) navi_navi_volume_pane_g1

0xc4e6,	// (0x0003bc07) volume_small_pane

0xd841,	// (0x0003cf62) navi_navi_icon_text_pane_g1

0xd849,	// (0x0003cf6a) navi_navi_icon_text_pane_t1

0x4316,	// (0x00033a37) navi_tabs_2_long_pane

0x4316,	// (0x00033a37) navi_tabs_2_pane

0x4316,	// (0x00033a37) navi_tabs_3_long_pane

0x4316,	// (0x00033a37) navi_tabs_3_pane

0x4316,	// (0x00033a37) navi_tabs_4_pane

0xc4be,	// (0x0003bbdf) tabs_2_active_pane_ParamLimits

0xc4be,	// (0x0003bbdf) tabs_2_active_pane

0xc4ce,	// (0x0003bbef) tabs_2_passive_pane_ParamLimits

0xc4ce,	// (0x0003bbef) tabs_2_passive_pane

0xc48c,	// (0x0003bbad) tabs_3_active_pane_ParamLimits

0xc48c,	// (0x0003bbad) tabs_3_active_pane

0xc49c,	// (0x0003bbbd) tabs_3_passive_pane_ParamLimits

0xc49c,	// (0x0003bbbd) tabs_3_passive_pane

0xc4ad,	// (0x0003bbce) tabs_3_passive_pane_cp_ParamLimits

0xc4ad,	// (0x0003bbce) tabs_3_passive_pane_cp

0xc448,	// (0x0003bb69) tabs_4_active_pane_ParamLimits

0xc448,	// (0x0003bb69) tabs_4_active_pane

0xc459,	// (0x0003bb7a) tabs_4_passive_pane_ParamLimits

0xc459,	// (0x0003bb7a) tabs_4_passive_pane

0xc46a,	// (0x0003bb8b) tabs_4_passive_pane_cp_ParamLimits

0xc46a,	// (0x0003bb8b) tabs_4_passive_pane_cp

0xc47b,	// (0x0003bb9c) tabs_4_passive_pane_cp2_ParamLimits

0xc47b,	// (0x0003bb9c) tabs_4_passive_pane_cp2

0xc428,	// (0x0003bb49) tabs_2_long_active_pane_ParamLimits

0xc428,	// (0x0003bb49) tabs_2_long_active_pane

0xc438,	// (0x0003bb59) tabs_2_long_passive_pane_ParamLimits

0xc438,	// (0x0003bb59) tabs_2_long_passive_pane

0xc3f5,	// (0x0003bb16) tabs_3_long_active_pane_ParamLimits

0xc3f5,	// (0x0003bb16) tabs_3_long_active_pane

0xc406,	// (0x0003bb27) tabs_3_long_passive_pane_ParamLimits

0xc406,	// (0x0003bb27) tabs_3_long_passive_pane

0xc417,	// (0x0003bb38) tabs_3_long_passive_pane_cp_ParamLimits

0xc417,	// (0x0003bb38) tabs_3_long_passive_pane_cp

0x16e0,	// (0x00030e01) volume_small_pane_g1

0xc3a4,	// (0x0003bac5) volume_small_pane_g2

0xc3ad,	// (0x0003bace) volume_small_pane_g3

0xc3b6,	// (0x0003bad7) volume_small_pane_g4

0xc3bf,	// (0x0003bae0) volume_small_pane_g5

0xc3c8,	// (0x0003bae9) volume_small_pane_g6

0xc3d1,	// (0x0003baf2) volume_small_pane_g7

0xc3da,	// (0x0003bafb) volume_small_pane_g8

0xc3e3,	// (0x0003bb04) volume_small_pane_g9

0xc3ec,	// (0x0003bb0d) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0003efd8) volume_small_pane_g

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp2_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp2

0xcc74,	// (0x0003c395) tabs_3_active_pane_g1

0xcc7c,	// (0x0003c39d) tabs_3_active_pane_t1

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp2_ParamLimits

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp2

0xcc74,	// (0x0003c395) tabs_3_passive_pane_g1

0xcc7c,	// (0x0003c39d) tabs_3_passive_pane_t1

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp3_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp3

0xcc8e,	// (0x0003c3af) tabs_4_active_pane_g1

0xcc96,	// (0x0003c3b7) tabs_4_active_pane_t1

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp3_ParamLimits

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp3

0xcc8e,	// (0x0003c3af) tabs_4_1_passive_pane_g1

0xcc96,	// (0x0003c3b7) tabs_4_1_passive_pane_t1

0x47c8,	// (0x00033ee9) list_highlight_pane_cp2

0xd9d1,	// (0x0003d0f2) list_set_pane_ParamLimits

0xd9d1,	// (0x0003d0f2) list_set_pane

0xda6b,	// (0x0003d18c) main_pane_set_t1_ParamLimits

0xda6b,	// (0x0003d18c) main_pane_set_t1

0xda8b,	// (0x0003d1ac) main_pane_set_t2_ParamLimits

0xda8b,	// (0x0003d1ac) main_pane_set_t2

0xda9f,	// (0x0003d1c0) main_pane_set_t3_ParamLimits

0xda9f,	// (0x0003d1c0) main_pane_set_t3

0xdab1,	// (0x0003d1d2) main_pane_set_t4_ParamLimits

0xdab1,	// (0x0003d1d2) main_pane_set_t4

0x0003,

0xf987,	// (0x0003f0a8) main_pane_set_t_ParamLimits

0xf987,	// (0x0003f0a8) main_pane_set_t

0xdac3,	// (0x0003d1e4) setting_code_pane

0xdacd,	// (0x0003d1ee) setting_slider_graphic_pane

0xdacd,	// (0x0003d1ee) setting_slider_pane

0xdacd,	// (0x0003d1ee) setting_text_pane

0xdacd,	// (0x0003d1ee) setting_volume_pane

0x00df,	// (0x0002f800) volume_set_pane

0x2932,	// (0x00032053) bg_set_opt_pane_cp

0x00e7,	// (0x0002f808) setting_slider_pane_t1

0x0100,	// (0x0002f821) setting_slider_pane_t2

0x011a,	// (0x0002f83b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0003ec85) setting_slider_pane_t

0x0132,	// (0x0002f853) slider_set_pane

0x2852,	// (0x00031f73) bg_set_opt_pane_cp2

0x2974,	// (0x00032095) setting_slider_graphic_pane_g1

0x0148,	// (0x0002f869) setting_slider_graphic_pane_t1

0x0158,	// (0x0002f879) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0003ec8c) setting_slider_graphic_pane_t

0x0168,	// (0x0002f889) slider_set_pane_cp

0x2852,	// (0x00031f73) input_focus_pane_cp1

0x613f,	// (0x00035860) list_set_text_pane

0x2848,	// (0x00031f69) setting_text_pane_g1

0x2852,	// (0x00031f73) input_focus_pane_cp2

0x2848,	// (0x00031f69) setting_code_pane_g1

0x297d,	// (0x0003209e) setting_code_pane_t1

0x0170,	// (0x0002f891) set_text_pane_t1_ParamLimits

0x0170,	// (0x0002f891) set_text_pane_t1

0x3889,	// (0x00032faa) set_opt_bg_pane_g1

0x3891,	// (0x00032fb2) set_opt_bg_pane_g2

0x6119,	// (0x0003583a) set_opt_bg_pane_g3

0x38a1,	// (0x00032fc2) set_opt_bg_pane_g4

0x38a9,	// (0x00032fca) set_opt_bg_pane_g5

0x38b1,	// (0x00032fd2) set_opt_bg_pane_g6

0x6123,	// (0x00035844) set_opt_bg_pane_g7

0x612b,	// (0x0003584c) set_opt_bg_pane_g8

0x6135,	// (0x00035856) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0003f095) set_opt_bg_pane_g

0x610c,	// (0x0003582d) slider_set_pane_g1

0x18d0,	// (0x00030ff1) slider_set_pane_g2

0x0006,

0xf965,	// (0x0003f086) slider_set_pane_g

0x1844,	// (0x00030f65) volume_set_pane_g1

0x184c,	// (0x00030f6d) volume_set_pane_g2

0x1854,	// (0x00030f75) volume_set_pane_g3

0x185c,	// (0x00030f7d) volume_set_pane_g4

0x1864,	// (0x00030f85) volume_set_pane_g5

0x186c,	// (0x00030f8d) volume_set_pane_g6

0x1874,	// (0x00030f95) volume_set_pane_g7

0x187c,	// (0x00030f9d) volume_set_pane_g8

0x1884,	// (0x00030fa5) volume_set_pane_g9

0x188c,	// (0x00030fad) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0003f05e) volume_set_pane_g

0xcca8,	// (0x0003c3c9) indicator_pane_ParamLimits

0xcca8,	// (0x0003c3c9) indicator_pane

0xccd0,	// (0x0003c3f1) main_idle_pane_g2_ParamLimits

0xccd0,	// (0x0003c3f1) main_idle_pane_g2

0xcd08,	// (0x0003c429) main_pane_idle_g1_ParamLimits

0xcd08,	// (0x0003c429) main_pane_idle_g1

0x29cc,	// (0x000320ed) popup_clock_digital_analogue_window_ParamLimits

0x29cc,	// (0x000320ed) popup_clock_digital_analogue_window

0xcd2f,	// (0x0003c450) soft_indicator_pane_ParamLimits

0xcd2f,	// (0x0003c450) soft_indicator_pane

0xcd49,	// (0x0003c46a) wallpaper_pane_ParamLimits

0xcd49,	// (0x0003c46a) wallpaper_pane

0x2848,	// (0x00031f69) wallpaper_pane_g1

0xcd5b,	// (0x0003c47c) indicator_pane_g1_ParamLimits

0xcd5b,	// (0x0003c47c) indicator_pane_g1

0x6519,	// (0x00035c3a) navi_navi_icon_text_pane_srt_g1

0x2a1e,	// (0x0003213f) soft_indicator_pane_t1

0x2a38,	// (0x00032159) aid_ps_area_pane

0xcd71,	// (0x0003c492) aid_ps_clock_pane

0x2a57,	// (0x00032178) aid_ps_indicator_pane

0x2a63,	// (0x00032184) indicator_ps_pane_ParamLimits

0x2a63,	// (0x00032184) indicator_ps_pane

0x2a72,	// (0x00032193) power_save_pane_g1_ParamLimits

0x2a72,	// (0x00032193) power_save_pane_g1

0x2a7e,	// (0x0003219f) power_save_pane_g2_ParamLimits

0x2a7e,	// (0x0003219f) power_save_pane_g2

0xf319,	// (0x0003ea3a) aid_navinavi_width_pane

0x2a38,	// (0x00032159) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0003ec91) power_save_pane_g_ParamLimits

0xf570,	// (0x0003ec91) power_save_pane_g

0x2a8c,	// (0x000321ad) power_save_pane_t1_ParamLimits

0x2a8c,	// (0x000321ad) power_save_pane_t1

0xcd71,	// (0x0003c492) aid_ps_clock_pane_ParamLimits

0x2a57,	// (0x00032178) aid_ps_indicator_pane_ParamLimits

0x2a9e,	// (0x000321bf) power_save_pane_t4_ParamLimits

0x2a9e,	// (0x000321bf) power_save_pane_t4

0x0001,

0xf575,	// (0x0003ec96) power_save_pane_t_ParamLimits

0xf575,	// (0x0003ec96) power_save_pane_t

0x2ac8,	// (0x000321e9) power_save_t3_ParamLimits

0x2ac8,	// (0x000321e9) power_save_t3

0x2ab3,	// (0x000321d4) power_save_t2_ParamLimits

0x2ab3,	// (0x000321d4) power_save_t2

0x2add,	// (0x000321fe) indicator_ps_pane_g1

0xcd7f,	// (0x0003c4a0) ai_gene_pane_ParamLimits

0xcd7f,	// (0x0003c4a0) ai_gene_pane

0xcd96,	// (0x0003c4b7) ai_links_pane_ParamLimits

0xcd96,	// (0x0003c4b7) ai_links_pane

0xcdae,	// (0x0003c4cf) indicator_pane_cp1_ParamLimits

0xcdae,	// (0x0003c4cf) indicator_pane_cp1

0xcdbd,	// (0x0003c4de) main_pane_idle_g1_cp_ParamLimits

0xcdbd,	// (0x0003c4de) main_pane_idle_g1_cp

0x2b16,	// (0x00032237) popup_ai_links_title_window

0xcdd5,	// (0x0003c4f6) soft_indicator_pane_cp1_ParamLimits

0xcdd5,	// (0x0003c4f6) soft_indicator_pane_cp1

0x5ee5,	// (0x00035606) ai_links_pane_g1

0x5eee,	// (0x0003560f) grid_ai_links_pane

0xd955,	// (0x0003d076) ai_gene_pane_1

0x5ed3,	// (0x000355f4) ai_gene_pane_2

0x5edc,	// (0x000355fd) list_highlight_pane_cp4

0xd931,	// (0x0003d052) cell_ai_link_pane_ParamLimits

0xd931,	// (0x0003d052) cell_ai_link_pane

0x5ea4,	// (0x000355c5) cell_ai_link_pane_g1

0x33d3,	// (0x00032af4) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0003f039) cell_ai_link_pane_g

0x2852,	// (0x00031f73) grid_highlight_cp2

0x2852,	// (0x00031f73) bg_popup_sub_pane_cp1

0x2b39,	// (0x0003225a) popup_ai_links_title_window_t1

0x5df2,	// (0x00035513) ai_gene_pane_1_g1_ParamLimits

0x5df2,	// (0x00035513) ai_gene_pane_1_g1

0x5dfe,	// (0x0003551f) ai_gene_pane_1_g2_ParamLimits

0x5dfe,	// (0x0003551f) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0003f02f) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0003f02f) ai_gene_pane_1_g

0x5e0b,	// (0x0003552c) ai_gene_pane_1_t1_ParamLimits

0x5e0b,	// (0x0003552c) ai_gene_pane_1_t1

0x5e3f,	// (0x00035560) grid_ai_soft_ind_pane

0x5ddd,	// (0x000354fe) ai_gene_pane_2_t1_ParamLimits

0x5ddd,	// (0x000354fe) ai_gene_pane_2_t1

0xcde9,	// (0x0003c50a) main_pane_empty_t1_ParamLimits

0xcde9,	// (0x0003c50a) main_pane_empty_t1

0xce01,	// (0x0003c522) main_pane_empty_t2_ParamLimits

0xce01,	// (0x0003c522) main_pane_empty_t2

0xce16,	// (0x0003c537) main_pane_empty_t3_ParamLimits

0xce16,	// (0x0003c537) main_pane_empty_t3

0xce28,	// (0x0003c549) main_pane_empty_t4_ParamLimits

0xce28,	// (0x0003c549) main_pane_empty_t4

0xce3a,	// (0x0003c55b) main_pane_empty_t5_ParamLimits

0xce3a,	// (0x0003c55b) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0003ec9b) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0003ec9b) main_pane_empty_t

0x38da,	// (0x00032ffb) bg_popup_window_pane_ParamLimits

0x38da,	// (0x00032ffb) bg_popup_window_pane

0x5b4d,	// (0x0003526e) find_popup_pane_cp2_ParamLimits

0x5b4d,	// (0x0003526e) find_popup_pane_cp2

0x5b59,	// (0x0003527a) heading_pane_ParamLimits

0x5b59,	// (0x0003527a) heading_pane

0x2852,	// (0x00031f73) bg_popup_sub_pane

0xd866,	// (0x0003cf87) bg_popup_window_pane_g1_ParamLimits

0xd866,	// (0x0003cf87) bg_popup_window_pane_g1

0xd875,	// (0x0003cf96) bg_popup_window_pane_g2_ParamLimits

0xd875,	// (0x0003cf96) bg_popup_window_pane_g2

0xd881,	// (0x0003cfa2) bg_popup_window_pane_g3_ParamLimits

0xd881,	// (0x0003cfa2) bg_popup_window_pane_g3

0xd88d,	// (0x0003cfae) bg_popup_window_pane_g4_ParamLimits

0xd88d,	// (0x0003cfae) bg_popup_window_pane_g4

0xd89c,	// (0x0003cfbd) bg_popup_window_pane_g5_ParamLimits

0xd89c,	// (0x0003cfbd) bg_popup_window_pane_g5

0xd8ac,	// (0x0003cfcd) bg_popup_window_pane_g6_ParamLimits

0xd8ac,	// (0x0003cfcd) bg_popup_window_pane_g6

0xd8b8,	// (0x0003cfd9) bg_popup_window_pane_g7_ParamLimits

0xd8b8,	// (0x0003cfd9) bg_popup_window_pane_g7

0xd8c7,	// (0x0003cfe8) bg_popup_window_pane_g8_ParamLimits

0xd8c7,	// (0x0003cfe8) bg_popup_window_pane_g8

0xd8d6,	// (0x0003cff7) bg_popup_window_pane_g9_ParamLimits

0xd8d6,	// (0x0003cff7) bg_popup_window_pane_g9

0x5b33,	// (0x00035254) bg_popup_window_pane_g10_ParamLimits

0x5b33,	// (0x00035254) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0003eff7) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0003eff7) bg_popup_window_pane_g

0x5a5c,	// (0x0003517d) bg_popup_heading_pane_ParamLimits

0x5a5c,	// (0x0003517d) bg_popup_heading_pane

0x19f7,	// (0x00031118) tabs_4_passive_pane_cp_srt_ParamLimits

0x19f7,	// (0x00031118) tabs_4_passive_pane_cp_srt

0x1a09,	// (0x0003112a) tabs_4_passive_pane_srt_ParamLimits

0x5a70,	// (0x00035191) heading_pane_g2

0x1a09,	// (0x0003112a) tabs_4_passive_pane_srt

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp3_srt

0x5a78,	// (0x00035199) heading_pane_t1_ParamLimits

0x5a78,	// (0x00035199) heading_pane_t1

0x5a8f,	// (0x000351b0) heading_pane_t2_ParamLimits

0x5a8f,	// (0x000351b0) heading_pane_t2

0x0001,

0xf8d1,	// (0x0003eff2) heading_pane_t_ParamLimits

0xf8d1,	// (0x0003eff2) heading_pane_t

0x5589,	// (0x00034caa) bg_popup_heading_pane_g1

0x5638,	// (0x00034d59) bg_popup_heading_pane_g2

0x5642,	// (0x00034d63) bg_popup_heading_pane_g3

0x564c,	// (0x00034d6d) bg_popup_heading_pane_g4

0x5656,	// (0x00034d77) bg_popup_heading_pane_g5

0x5660,	// (0x00034d81) bg_popup_heading_pane_g6

0x5668,	// (0x00034d89) bg_popup_heading_pane_g7

0x5670,	// (0x00034d91) bg_popup_heading_pane_g8

0x567a,	// (0x00034d9b) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0003efae) bg_popup_heading_pane_g

0x4cdf,	// (0x00034400) bg_popup_sub_pane_g1

0x4cef,	// (0x00034410) bg_popup_sub_pane_g2

0x4ce7,	// (0x00034408) bg_popup_sub_pane_g3

0x4cff,	// (0x00034420) bg_popup_sub_pane_g4

0x4cf7,	// (0x00034418) bg_popup_sub_pane_g5

0x4d07,	// (0x00034428) bg_popup_sub_pane_g6

0x4d0f,	// (0x00034430) bg_popup_sub_pane_g7

0x4d1f,	// (0x00034440) bg_popup_sub_pane_g8

0x4d17,	// (0x00034438) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0003ef88) bg_popup_sub_pane_g

0x2bad,	// (0x000322ce) bg_popup_window_pane_cp5_ParamLimits

0x2bad,	// (0x000322ce) bg_popup_window_pane_cp5

0x2bc9,	// (0x000322ea) popup_note_window_g1_ParamLimits

0x2bc9,	// (0x000322ea) popup_note_window_g1

0x2bd5,	// (0x000322f6) popup_note_window_t1_ParamLimits

0x2bd5,	// (0x000322f6) popup_note_window_t1

0x2beb,	// (0x0003230c) popup_note_window_t2_ParamLimits

0x2beb,	// (0x0003230c) popup_note_window_t2

0x2c01,	// (0x00032322) popup_note_window_t3_ParamLimits

0x2c01,	// (0x00032322) popup_note_window_t3

0x2c17,	// (0x00032338) popup_note_window_t4_ParamLimits

0x2c17,	// (0x00032338) popup_note_window_t4

0x32c3,	// (0x000329e4) popup_note_window_t5_ParamLimits

0x32c3,	// (0x000329e4) popup_note_window_t5

0x0004,

0xf585,	// (0x0003eca6) popup_note_window_t_ParamLimits

0xf585,	// (0x0003eca6) popup_note_window_t

0x32e7,	// (0x00032a08) bg_popup_window_pane_cp6_ParamLimits

0x32e7,	// (0x00032a08) bg_popup_window_pane_cp6

0x5505,	// (0x00034c26) popup_note_image_window_g1_ParamLimits

0x5505,	// (0x00034c26) popup_note_image_window_g1

0x5511,	// (0x00034c32) popup_note_image_window_g2_ParamLimits

0x5511,	// (0x00034c32) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0003ef7c) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0003ef7c) popup_note_image_window_g

0x552a,	// (0x00034c4b) popup_note_image_window_t1_ParamLimits

0x552a,	// (0x00034c4b) popup_note_image_window_t1

0x5543,	// (0x00034c64) popup_note_image_window_t2_ParamLimits

0x5543,	// (0x00034c64) popup_note_image_window_t2

0x555c,	// (0x00034c7d) popup_note_image_window_t3_ParamLimits

0x555c,	// (0x00034c7d) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0003ef81) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0003ef81) popup_note_image_window_t

0x53c6,	// (0x00034ae7) bg_popup_window_pane_cp7_ParamLimits

0x53c6,	// (0x00034ae7) bg_popup_window_pane_cp7

0x53f6,	// (0x00034b17) popup_note_wait_window_g1_ParamLimits

0x53f6,	// (0x00034b17) popup_note_wait_window_g1

0x5402,	// (0x00034b23) popup_note_wait_window_g2_ParamLimits

0x5402,	// (0x00034b23) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0003ef6a) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0003ef6a) popup_note_wait_window_g

0x541a,	// (0x00034b3b) popup_note_wait_window_t1_ParamLimits

0x541a,	// (0x00034b3b) popup_note_wait_window_t1

0x5441,	// (0x00034b62) popup_note_wait_window_t2_ParamLimits

0x5441,	// (0x00034b62) popup_note_wait_window_t2

0x545e,	// (0x00034b7f) popup_note_wait_window_t3_ParamLimits

0x545e,	// (0x00034b7f) popup_note_wait_window_t3

0x5471,	// (0x00034b92) popup_note_wait_window_t4_ParamLimits

0x5471,	// (0x00034b92) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0003ef71) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0003ef71) popup_note_wait_window_t

0x5496,	// (0x00034bb7) wait_bar_pane_ParamLimits

0x5496,	// (0x00034bb7) wait_bar_pane

0x2852,	// (0x00031f73) wait_anim_pane

0x2852,	// (0x00031f73) wait_border_pane

0x2848,	// (0x00031f69) wait_anim_pane_g1

0x2848,	// (0x00031f69) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0003ee2a) wait_anim_pane_g

0x536a,	// (0x00034a8b) wait_border_pane_g1

0x5375,	// (0x00034a96) wait_border_pane_g2

0x537e,	// (0x00034a9f) wait_border_pane_g3

0x0002,

0xf842,	// (0x0003ef63) wait_border_pane_g

0x51c9,	// (0x000348ea) bg_popup_window_pane_cp16_ParamLimits

0x51c9,	// (0x000348ea) bg_popup_window_pane_cp16

0x52c9,	// (0x000349ea) indicator_popup_pane_cp4_ParamLimits

0x52c9,	// (0x000349ea) indicator_popup_pane_cp4

0x52e9,	// (0x00034a0a) popup_query_data_window_t1_ParamLimits

0x52e9,	// (0x00034a0a) popup_query_data_window_t1

0x52fb,	// (0x00034a1c) popup_query_data_window_t2_ParamLimits

0x52fb,	// (0x00034a1c) popup_query_data_window_t2

0x5314,	// (0x00034a35) popup_query_data_window_t3_ParamLimits

0x5314,	// (0x00034a35) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0003ef5c) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0003ef5c) popup_query_data_window_t

0x532e,	// (0x00034a4f) query_popup_data_pane_ParamLimits

0x532e,	// (0x00034a4f) query_popup_data_pane

0x5342,	// (0x00034a63) query_popup_data_pane_cp1_ParamLimits

0x5342,	// (0x00034a63) query_popup_data_pane_cp1

0x51c9,	// (0x000348ea) bg_popup_window_pane_cp10_ParamLimits

0x51c9,	// (0x000348ea) bg_popup_window_pane_cp10

0x51fb,	// (0x0003491c) indicator_popup_pane_ParamLimits

0x51fb,	// (0x0003491c) indicator_popup_pane

0x521d,	// (0x0003493e) popup_query_code_window_t1_ParamLimits

0x521d,	// (0x0003493e) popup_query_code_window_t1

0x5237,	// (0x00034958) popup_query_code_window_t2_ParamLimits

0x5237,	// (0x00034958) popup_query_code_window_t2

0x5280,	// (0x000349a1) popup_query_code_window_t3_ParamLimits

0x5280,	// (0x000349a1) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0003ef55) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0003ef55) popup_query_code_window_t

0x52af,	// (0x000349d0) query_popup_pane_ParamLimits

0x52af,	// (0x000349d0) query_popup_pane

0x32e7,	// (0x00032a08) bg_popup_window_pane_cp15_ParamLimits

0x32e7,	// (0x00032a08) bg_popup_window_pane_cp15

0x3305,	// (0x00032a26) indicator_popup_pane_cp1_ParamLimits

0x3305,	// (0x00032a26) indicator_popup_pane_cp1

0x3318,	// (0x00032a39) indicator_popup_pane_cp2_ParamLimits

0x3318,	// (0x00032a39) indicator_popup_pane_cp2

0x332b,	// (0x00032a4c) popup_query_data_code_window_g1_ParamLimits

0x332b,	// (0x00032a4c) popup_query_data_code_window_g1

0x333e,	// (0x00032a5f) popup_query_data_code_window_t1_ParamLimits

0x333e,	// (0x00032a5f) popup_query_data_code_window_t1

0x3350,	// (0x00032a71) popup_query_data_code_window_t2_ParamLimits

0x3350,	// (0x00032a71) popup_query_data_code_window_t2

0x3362,	// (0x00032a83) popup_query_data_code_window_t3_ParamLimits

0x3362,	// (0x00032a83) popup_query_data_code_window_t3

0x3378,	// (0x00032a99) popup_query_data_code_window_t4_ParamLimits

0x3378,	// (0x00032a99) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0003ecb1) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0003ecb1) popup_query_data_code_window_t

0x156c,	// (0x00030c8d) list_single_midp_graphic_pane_g3

0x3390,	// (0x00032ab1) query_popup_data_pane_cp2_ParamLimits

0x33a3,	// (0x00032ac4) query_popup_pane_cp2_ParamLimits

0x33a3,	// (0x00032ac4) query_popup_pane_cp2

0x2852,	// (0x00031f73) bg_popup_window_pane_cp11

0x51c1,	// (0x000348e2) heading_pane_cp5

0x348b,	// (0x00032bac) listscroll_popup_info_pane

0x2852,	// (0x00031f73) input_focus_pane_cp3

0x33b6,	// (0x00032ad7) query_popup_pane_t1

0x33c4,	// (0x00032ae5) list_popup_info_pane_ParamLimits

0x33c4,	// (0x00032ae5) list_popup_info_pane

0x33d3,	// (0x00032af4) listscroll_popup_info_pane_g1

0x33db,	// (0x00032afc) scroll_pane_cp7

0x33e5,	// (0x00032b06) popup_info_list_pane_t1_ParamLimits

0x33e5,	// (0x00032b06) popup_info_list_pane_t1

0x33ff,	// (0x00032b20) popup_info_list_pane_t2_ParamLimits

0x33ff,	// (0x00032b20) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0003ecba) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0003ecba) popup_info_list_pane_t

0x2852,	// (0x00031f73) bg_popup_window_pane_cp12

0x6533,	// (0x00035c54) find_popup_pane

0x2932,	// (0x00032053) bg_popup_window_pane_cp3

0x3419,	// (0x00032b3a) heading_pane_cp3

0x3425,	// (0x00032b46) listscroll_popup_graphic_pane

0x2852,	// (0x00031f73) bg_popup_window_pane_cp4

0xce9c,	// (0x0003c5bd) heading_pane_cp4

0x348b,	// (0x00032bac) listscroll_popup_colour_pane

0xcea4,	// (0x0003c5c5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xcea4,	// (0x0003c5c5) cell_large_graphic_colour_none_popup_pane

0xceb8,	// (0x0003c5d9) grid_large_graphic_colour_popup_pane_ParamLimits

0xceb8,	// (0x0003c5d9) grid_large_graphic_colour_popup_pane

0xcedc,	// (0x0003c5fd) listscroll_popup_colour_pane_g1_ParamLimits

0xcedc,	// (0x0003c5fd) listscroll_popup_colour_pane_g1

0xcef3,	// (0x0003c614) listscroll_popup_colour_pane_g2_ParamLimits

0xcef3,	// (0x0003c614) listscroll_popup_colour_pane_g2

0xcf0a,	// (0x0003c62b) listscroll_popup_colour_pane_g3_ParamLimits

0xcf0a,	// (0x0003c62b) listscroll_popup_colour_pane_g3

0xcf1a,	// (0x0003c63b) listscroll_popup_colour_pane_g4_ParamLimits

0xcf1a,	// (0x0003c63b) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0003ecbf) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0003ecbf) listscroll_popup_colour_pane_g

0x3525,	// (0x00032c46) scroll_pane_cp6_ParamLimits

0x3525,	// (0x00032c46) scroll_pane_cp6

0xcf2a,	// (0x0003c64b) cell_large_graphic_colour_popup_pane_ParamLimits

0xcf2a,	// (0x0003c64b) cell_large_graphic_colour_popup_pane

0x3556,	// (0x00032c77) cell_large_graphic_colour_none_popup_pane_t1

0x2852,	// (0x00031f73) grid_highlight_pane_cp5

0x3565,	// (0x00032c86) cell_large_graphic_colour_popup_pane_g1

0x356d,	// (0x00032c8e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0003ecc8) cell_large_graphic_colour_popup_pane_g

0x3575,	// (0x00032c96) cell_large_graphic_colour_popup_pane_g2_copy1

0x357e,	// (0x00032c9f) grid_highlight_pane_cp4

0x3586,	// (0x00032ca7) bg_popup_window_pane_cp8_ParamLimits

0x3586,	// (0x00032ca7) bg_popup_window_pane_cp8

0x35a1,	// (0x00032cc2) popup_snote_single_text_window_g1_ParamLimits

0x35a1,	// (0x00032cc2) popup_snote_single_text_window_g1

0x35b3,	// (0x00032cd4) popup_snote_single_text_window_t1_ParamLimits

0x35b3,	// (0x00032cd4) popup_snote_single_text_window_t1

0x35c6,	// (0x00032ce7) popup_snote_single_text_window_t2_ParamLimits

0x35c6,	// (0x00032ce7) popup_snote_single_text_window_t2

0x35d9,	// (0x00032cfa) popup_snote_single_text_window_t3_ParamLimits

0x35d9,	// (0x00032cfa) popup_snote_single_text_window_t3

0x3612,	// (0x00032d33) popup_snote_single_text_window_t4_ParamLimits

0x3612,	// (0x00032d33) popup_snote_single_text_window_t4

0x3646,	// (0x00032d67) popup_snote_single_text_window_t5_ParamLimits

0x3646,	// (0x00032d67) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0003eccd) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0003eccd) popup_snote_single_text_window_t

0x3675,	// (0x00032d96) bg_popup_window_pane_cp9_ParamLimits

0x3675,	// (0x00032d96) bg_popup_window_pane_cp9

0x35a1,	// (0x00032cc2) popup_snote_single_graphic_window_g1_ParamLimits

0x35a1,	// (0x00032cc2) popup_snote_single_graphic_window_g1

0x3683,	// (0x00032da4) popup_snote_single_graphic_window_g2_ParamLimits

0x3683,	// (0x00032da4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0003ecd8) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0003ecd8) popup_snote_single_graphic_window_g

0x368f,	// (0x00032db0) popup_snote_single_graphic_window_t1_ParamLimits

0x368f,	// (0x00032db0) popup_snote_single_graphic_window_t1

0x36a2,	// (0x00032dc3) popup_snote_single_graphic_window_t2_ParamLimits

0x36a2,	// (0x00032dc3) popup_snote_single_graphic_window_t2

0x36b5,	// (0x00032dd6) popup_snote_single_graphic_window_t3_ParamLimits

0x36b5,	// (0x00032dd6) popup_snote_single_graphic_window_t3

0x36ee,	// (0x00032e0f) popup_snote_single_graphic_window_t4_ParamLimits

0x36ee,	// (0x00032e0f) popup_snote_single_graphic_window_t4

0x3722,	// (0x00032e43) popup_snote_single_graphic_window_t5_ParamLimits

0x3722,	// (0x00032e43) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0003ecdd) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0003ecdd) popup_snote_single_graphic_window_t

0x6477,	// (0x00035b98) grid_graphic_popup_pane_ParamLimits

0x6477,	// (0x00035b98) grid_graphic_popup_pane

0x649f,	// (0x00035bc0) listscroll_popup_graphic_pane_g1_ParamLimits

0x649f,	// (0x00035bc0) listscroll_popup_graphic_pane_g1

0xdbbe,	// (0x0003d2df) listscroll_popup_graphic_pane_g2_ParamLimits

0xdbbe,	// (0x0003d2df) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0003f0d2) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0003f0d2) listscroll_popup_graphic_pane_g

0x64c7,	// (0x00035be8) scroll_pane_cp5

0xdb81,	// (0x0003d2a2) cell_graphic_popup_pane_ParamLimits

0xdb81,	// (0x0003d2a2) cell_graphic_popup_pane

0x6401,	// (0x00035b22) cell_graphic_popup_pane_g1

0x6409,	// (0x00035b2a) cell_graphic_popup_pane_g2

0x3575,	// (0x00032c96) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0003f0cb) cell_graphic_popup_pane_g

0x6412,	// (0x00035b33) cell_graphic_popup_pane_t2

0x357e,	// (0x00032c9f) grid_highlight_pane_cp3

0x3763,	// (0x00032e84) list_gen_pane_ParamLimits

0x3763,	// (0x00032e84) list_gen_pane

0x3795,	// (0x00032eb6) scroll_pane

0xdb38,	// (0x0003d259) bg_list_pane_g1_ParamLimits

0xdb38,	// (0x0003d259) bg_list_pane_g1

0x6376,	// (0x00035a97) bg_list_pane_g2_ParamLimits

0x6376,	// (0x00035a97) bg_list_pane_g2

0x638b,	// (0x00035aac) bg_list_pane_g3_ParamLimits

0x638b,	// (0x00035aac) bg_list_pane_g3

0x639f,	// (0x00035ac0) bg_list_pane_g4_ParamLimits

0x639f,	// (0x00035ac0) bg_list_pane_g4

0xdb55,	// (0x0003d276) bg_list_pane_g5_ParamLimits

0xdb55,	// (0x0003d276) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0003f0c0) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0003f0c0) bg_list_pane_g

0xdb00,	// (0x0003d221) list_double2_graphic_large_graphic_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double2_graphic_large_graphic_pane

0xdb00,	// (0x0003d221) list_double2_graphic_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double2_graphic_pane

0xdb00,	// (0x0003d221) list_double2_large_graphic_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double2_large_graphic_pane

0xdb00,	// (0x0003d221) list_double2_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double2_pane

0xdb00,	// (0x0003d221) list_double_graphic_heading_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_graphic_heading_pane

0xdb00,	// (0x0003d221) list_double_graphic_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_graphic_pane

0xdb00,	// (0x0003d221) list_double_heading_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_heading_pane

0xdb00,	// (0x0003d221) list_double_large_graphic_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_large_graphic_pane

0xdb00,	// (0x0003d221) list_double_number_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_number_pane

0xdb00,	// (0x0003d221) list_double_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_pane

0xdb00,	// (0x0003d221) list_double_time_pane_ParamLimits

0xdb00,	// (0x0003d221) list_double_time_pane

0xdb00,	// (0x0003d221) list_setting_number_pane_ParamLimits

0xdb00,	// (0x0003d221) list_setting_number_pane

0xdb00,	// (0x0003d221) list_setting_pane_ParamLimits

0xdb00,	// (0x0003d221) list_setting_pane

0xdb12,	// (0x0003d233) list_single_2graphic_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_2graphic_pane

0xdb12,	// (0x0003d233) list_single_graphic_heading_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_graphic_heading_pane

0xdb12,	// (0x0003d233) list_single_graphic_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_graphic_pane

0xdb12,	// (0x0003d233) list_single_heading_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_heading_pane

0xdb12,	// (0x0003d233) list_single_large_graphic_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_large_graphic_pane

0xdb12,	// (0x0003d233) list_single_number_heading_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_number_heading_pane

0xdb12,	// (0x0003d233) list_single_number_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_number_pane

0xdb12,	// (0x0003d233) list_single_pane_ParamLimits

0xdb12,	// (0x0003d233) list_single_pane

0x2852,	// (0x00031f73) list_highlight_pane_cp1

0x159c,	// (0x00030cbd) list_single_pane_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_pane_g1

0x15a8,	// (0x00030cc9) list_single_pane_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_pane_g

0x2cf6,	// (0x00032417) list_single_pane_t1_ParamLimits

0x2cf6,	// (0x00032417) list_single_pane_t1

0x159c,	// (0x00030cbd) list_single_number_pane_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_number_pane_g1

0x15a8,	// (0x00030cc9) list_single_number_pane_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_number_pane_g

0x1531,	// (0x00030c52) list_single_number_pane_t1_ParamLimits

0x1531,	// (0x00030c52) list_single_number_pane_t1

0xc4ef,	// (0x0003bc10) list_single_number_pane_t2_ParamLimits

0xc4ef,	// (0x0003bc10) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0003f081) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0003f081) list_single_number_pane_t

0x310a,	// (0x0003282b) list_single_graphic_pane_g1_ParamLimits

0x310a,	// (0x0003282b) list_single_graphic_pane_g1

0x159c,	// (0x00030cbd) list_single_graphic_pane_g2_ParamLimits

0x159c,	// (0x00030cbd) list_single_graphic_pane_g2

0x15a8,	// (0x00030cc9) list_single_graphic_pane_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0003ece8) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0003ece8) list_single_graphic_pane_g

0xb52c,	// (0x0003ac4d) list_single_graphic_pane_t1_ParamLimits

0xb52c,	// (0x0003ac4d) list_single_graphic_pane_t1

0x159c,	// (0x00030cbd) list_single_heading_pane_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_heading_pane_g1

0x15a8,	// (0x00030cc9) list_single_heading_pane_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_heading_pane_g

0x2d18,	// (0x00032439) list_single_heading_pane_t1_ParamLimits

0x2d18,	// (0x00032439) list_single_heading_pane_t1

0xb542,	// (0x0003ac63) list_single_heading_pane_t2_ParamLimits

0xb542,	// (0x0003ac63) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0003ecf4) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0003ecf4) list_single_heading_pane_t

0x159c,	// (0x00030cbd) list_single_number_heading_pane_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_number_heading_pane_g1

0x15a8,	// (0x00030cc9) list_single_number_heading_pane_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_number_heading_pane_g

0x2d18,	// (0x00032439) list_single_number_heading_pane_t1_ParamLimits

0x2d18,	// (0x00032439) list_single_number_heading_pane_t1

0xb554,	// (0x0003ac75) list_single_number_heading_pane_t2_ParamLimits

0xb554,	// (0x0003ac75) list_single_number_heading_pane_t2

0x2cd0,	// (0x000323f1) list_single_number_heading_pane_t3_ParamLimits

0x2cd0,	// (0x000323f1) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0003ecf9) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0003ecf9) list_single_number_heading_pane_t

0x150d,	// (0x00030c2e) list_single_graphic_heading_pane_g1_ParamLimits

0x150d,	// (0x00030c2e) list_single_graphic_heading_pane_g1

0xb566,	// (0x0003ac87) list_single_graphic_heading_pane_g4_ParamLimits

0xb566,	// (0x0003ac87) list_single_graphic_heading_pane_g4

0x15a8,	// (0x00030cc9) list_single_graphic_heading_pane_g5_ParamLimits

0x15a8,	// (0x00030cc9) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0003ed00) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0003ed00) list_single_graphic_heading_pane_g

0x2d18,	// (0x00032439) list_single_graphic_heading_pane_t1_ParamLimits

0x2d18,	// (0x00032439) list_single_graphic_heading_pane_t1

0xb577,	// (0x0003ac98) list_single_graphic_heading_pane_t2_ParamLimits

0xb577,	// (0x0003ac98) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0003ed07) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0003ed07) list_single_graphic_heading_pane_t

0x2d0c,	// (0x0003242d) list_single_large_graphic_pane_g1_ParamLimits

0x2d0c,	// (0x0003242d) list_single_large_graphic_pane_g1

0x159c,	// (0x00030cbd) list_single_large_graphic_pane_g2_ParamLimits

0x159c,	// (0x00030cbd) list_single_large_graphic_pane_g2

0x15a8,	// (0x00030cc9) list_single_large_graphic_pane_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0003ed0c) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0003ed0c) list_single_large_graphic_pane_g

0x5375,	// (0x00034a96) wait_border_pane_g2_copy1

0xb589,	// (0x0003acaa) list_single_large_graphic_pane_g4_cp2

0x2d18,	// (0x00032439) list_single_large_graphic_pane_t1_ParamLimits

0x2d18,	// (0x00032439) list_single_large_graphic_pane_t1

0x2f3c,	// (0x0003265d) list_double_pane_g1_ParamLimits

0x2f3c,	// (0x0003265d) list_double_pane_g1

0xb591,	// (0x0003acb2) list_double_pane_g2_ParamLimits

0xb591,	// (0x0003acb2) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0003ed13) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0003ed13) list_double_pane_g

0xb59d,	// (0x0003acbe) list_double_pane_t1_ParamLimits

0xb59d,	// (0x0003acbe) list_double_pane_t1

0xb5b3,	// (0x0003acd4) list_double_pane_t2_ParamLimits

0xb5b3,	// (0x0003acd4) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0003ed18) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0003ed18) list_double_pane_t

0xb5c5,	// (0x0003ace6) list_double2_pane_g1_ParamLimits

0xb5c5,	// (0x0003ace6) list_double2_pane_g1

0x04c8,	// (0x0002fbe9) list_double2_pane_g2_ParamLimits

0x04c8,	// (0x0002fbe9) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0003ed1d) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0003ed1d) list_double2_pane_g

0xb5d6,	// (0x0003acf7) list_double2_pane_t1_ParamLimits

0xb5d6,	// (0x0003acf7) list_double2_pane_t1

0xb5ec,	// (0x0003ad0d) list_double2_pane_t2_ParamLimits

0xb5ec,	// (0x0003ad0d) list_double2_pane_t2

0x0001,

0xf601,	// (0x0003ed22) list_double2_pane_t_ParamLimits

0xf601,	// (0x0003ed22) list_double2_pane_t

0x2f3c,	// (0x0003265d) list_double_number_pane_g1_ParamLimits

0x2f3c,	// (0x0003265d) list_double_number_pane_g1

0xb591,	// (0x0003acb2) list_double_number_pane_g2_ParamLimits

0xb591,	// (0x0003acb2) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0003ed13) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0003ed13) list_double_number_pane_g

0xb5fe,	// (0x0003ad1f) list_double_number_pane_t1_ParamLimits

0xb5fe,	// (0x0003ad1f) list_double_number_pane_t1

0xb610,	// (0x0003ad31) list_double_number_pane_t2_ParamLimits

0xb610,	// (0x0003ad31) list_double_number_pane_t2

0xb626,	// (0x0003ad47) list_double_number_pane_t3_ParamLimits

0xb626,	// (0x0003ad47) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0003ed27) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0003ed27) list_double_number_pane_t

0xb638,	// (0x0003ad59) list_double_graphic_pane_g1_ParamLimits

0xb638,	// (0x0003ad59) list_double_graphic_pane_g1

0xb644,	// (0x0003ad65) list_double_graphic_pane_g2_ParamLimits

0xb644,	// (0x0003ad65) list_double_graphic_pane_g2

0xb653,	// (0x0003ad74) list_double_graphic_pane_g3_ParamLimits

0xb653,	// (0x0003ad74) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0003ed2e) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0003ed2e) list_double_graphic_pane_g

0xb66b,	// (0x0003ad8c) list_double_graphic_pane_t1_ParamLimits

0xb66b,	// (0x0003ad8c) list_double_graphic_pane_t1

0xb681,	// (0x0003ada2) list_double_graphic_pane_t2_ParamLimits

0xb681,	// (0x0003ada2) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0003ed37) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0003ed37) list_double_graphic_pane_t

0xb693,	// (0x0003adb4) list_double2_graphic_pane_g1_ParamLimits

0xb693,	// (0x0003adb4) list_double2_graphic_pane_g1

0xb69f,	// (0x0003adc0) list_double2_graphic_pane_g2_ParamLimits

0xb69f,	// (0x0003adc0) list_double2_graphic_pane_g2

0x04c8,	// (0x0002fbe9) list_double2_graphic_pane_g3_ParamLimits

0x04c8,	// (0x0002fbe9) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0003ed3c) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0003ed3c) list_double2_graphic_pane_g

0xb6ab,	// (0x0003adcc) list_double2_graphic_pane_t1_ParamLimits

0xb6ab,	// (0x0003adcc) list_double2_graphic_pane_t1

0xb6c1,	// (0x0003ade2) list_double2_graphic_pane_t2_ParamLimits

0xb6c1,	// (0x0003ade2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0003ed43) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0003ed43) list_double2_graphic_pane_t

0xb6d3,	// (0x0003adf4) list_double_large_graphic_pane_g1_ParamLimits

0xb6d3,	// (0x0003adf4) list_double_large_graphic_pane_g1

0xb6fe,	// (0x0003ae1f) list_double_large_graphic_pane_g2_ParamLimits

0xb6fe,	// (0x0003ae1f) list_double_large_graphic_pane_g2

0xb591,	// (0x0003acb2) list_double_large_graphic_pane_g3_ParamLimits

0xb591,	// (0x0003acb2) list_double_large_graphic_pane_g3

0xb70f,	// (0x0003ae30) list_double_large_graphic_pane_g4_ParamLimits

0xb70f,	// (0x0003ae30) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0003ed48) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0003ed48) list_double_large_graphic_pane_g

0xb721,	// (0x0003ae42) list_double_large_graphic_pane_t1_ParamLimits

0xb721,	// (0x0003ae42) list_double_large_graphic_pane_t1

0xb73a,	// (0x0003ae5b) list_double_large_graphic_pane_t2_ParamLimits

0xb73a,	// (0x0003ae5b) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0003ed53) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0003ed53) list_double_large_graphic_pane_t

0xb74c,	// (0x0003ae6d) list_double2_large_graphic_pane_g1_ParamLimits

0xb74c,	// (0x0003ae6d) list_double2_large_graphic_pane_g1

0xb5c5,	// (0x0003ace6) list_double2_large_graphic_pane_g2_ParamLimits

0xb5c5,	// (0x0003ace6) list_double2_large_graphic_pane_g2

0x04c8,	// (0x0002fbe9) list_double2_large_graphic_pane_g3_ParamLimits

0x04c8,	// (0x0002fbe9) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0003ed58) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0003ed58) list_double2_large_graphic_pane_g

0xb758,	// (0x0003ae79) list_double2_large_graphic_pane_t1_ParamLimits

0xb758,	// (0x0003ae79) list_double2_large_graphic_pane_t1

0xb76e,	// (0x0003ae8f) list_double2_large_graphic_pane_t2_ParamLimits

0xb76e,	// (0x0003ae8f) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0003ed5f) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0003ed5f) list_double2_large_graphic_pane_t

0xb780,	// (0x0003aea1) list_double_heading_pane_g1_ParamLimits

0xb780,	// (0x0003aea1) list_double_heading_pane_g1

0x02d3,	// (0x0002f9f4) list_double_heading_pane_g2_ParamLimits

0x02d3,	// (0x0002f9f4) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0003ed64) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0003ed64) list_double_heading_pane_g

0xb791,	// (0x0003aeb2) list_double_heading_pane_t1_ParamLimits

0xb791,	// (0x0003aeb2) list_double_heading_pane_t1

0xb5ec,	// (0x0003ad0d) list_double_heading_pane_t2_ParamLimits

0xb5ec,	// (0x0003ad0d) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0003ed69) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0003ed69) list_double_heading_pane_t

0xb638,	// (0x0003ad59) list_double_graphic_heading_pane_g1_ParamLimits

0xb638,	// (0x0003ad59) list_double_graphic_heading_pane_g1

0xb780,	// (0x0003aea1) list_double_graphic_heading_pane_g2_ParamLimits

0xb780,	// (0x0003aea1) list_double_graphic_heading_pane_g2

0x02d3,	// (0x0002f9f4) list_double_graphic_heading_pane_g3_ParamLimits

0x02d3,	// (0x0002f9f4) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0003ed6e) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0003ed6e) list_double_graphic_heading_pane_g

0xb7a7,	// (0x0003aec8) list_double_graphic_heading_pane_t1_ParamLimits

0xb7a7,	// (0x0003aec8) list_double_graphic_heading_pane_t1

0xb6c1,	// (0x0003ade2) list_double_graphic_heading_pane_t2_ParamLimits

0xb6c1,	// (0x0003ade2) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0003ed75) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0003ed75) list_double_graphic_heading_pane_t

0xb6fe,	// (0x0003ae1f) list_double_time_pane_g1_ParamLimits

0xb6fe,	// (0x0003ae1f) list_double_time_pane_g1

0xb591,	// (0x0003acb2) list_double_time_pane_g2_ParamLimits

0xb591,	// (0x0003acb2) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0003ed7a) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0003ed7a) list_double_time_pane_g

0xb7bd,	// (0x0003aede) list_double_time_pane_t1_ParamLimits

0xb7bd,	// (0x0003aede) list_double_time_pane_t1

0xb7d3,	// (0x0003aef4) list_double_time_pane_t2_ParamLimits

0xb7d3,	// (0x0003aef4) list_double_time_pane_t2

0xb7e5,	// (0x0003af06) list_double_time_pane_t3_ParamLimits

0xb7e5,	// (0x0003af06) list_double_time_pane_t3

0xb7f7,	// (0x0003af18) list_double_time_pane_t4_ParamLimits

0xb7f7,	// (0x0003af18) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0003ed7f) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0003ed7f) list_double_time_pane_t

0xb69f,	// (0x0003adc0) list_setting_pane_g1_ParamLimits

0xb69f,	// (0x0003adc0) list_setting_pane_g1

0x04c8,	// (0x0002fbe9) list_setting_pane_g2_ParamLimits

0x04c8,	// (0x0002fbe9) list_setting_pane_g2

0x0001,

0xf667,	// (0x0003ed88) list_setting_pane_g_ParamLimits

0xf667,	// (0x0003ed88) list_setting_pane_g

0xb809,	// (0x0003af2a) list_setting_pane_t1_ParamLimits

0xb809,	// (0x0003af2a) list_setting_pane_t1

0xb823,	// (0x0003af44) list_setting_pane_t2_ParamLimits

0xb823,	// (0x0003af44) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0003ed8d) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0003ed8d) list_setting_pane_t

0xb862,	// (0x0003af83) set_value_pane_cp_ParamLimits

0xb862,	// (0x0003af83) set_value_pane_cp

0xb86e,	// (0x0003af8f) list_setting_number_pane_g1_ParamLimits

0xb86e,	// (0x0003af8f) list_setting_number_pane_g1

0xb87a,	// (0x0003af9b) list_setting_number_pane_g2_ParamLimits

0xb87a,	// (0x0003af9b) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0003ed94) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0003ed94) list_setting_number_pane_g

0xb886,	// (0x0003afa7) list_setting_number_pane_t1_ParamLimits

0xb886,	// (0x0003afa7) list_setting_number_pane_t1

0xb89f,	// (0x0003afc0) list_setting_number_pane_t2_ParamLimits

0xb89f,	// (0x0003afc0) list_setting_number_pane_t2

0xb8b9,	// (0x0003afda) list_setting_number_pane_t3_ParamLimits

0xb8b9,	// (0x0003afda) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0003ed99) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0003ed99) list_setting_number_pane_t

0xb862,	// (0x0003af83) set_value_pane_ParamLimits

0xb862,	// (0x0003af83) set_value_pane

0x37c9,	// (0x00032eea) bg_set_opt_pane_ParamLimits

0x37c9,	// (0x00032eea) bg_set_opt_pane

0x0651,	// (0x0002fd72) set_value_pane_t1

0x37ea,	// (0x00032f0b) slider_set_pane_cp3

0x37f3,	// (0x00032f14) volume_small_pane_cp

0x37fc,	// (0x00032f1d) list_form_gen_pane

0x3805,	// (0x00032f26) scroll_pane_cp8

0xb8fc,	// (0x0003b01d) form_field_data_pane_ParamLimits

0xb8fc,	// (0x0003b01d) form_field_data_pane

0xb913,	// (0x0003b034) form_field_data_wide_pane_ParamLimits

0xb913,	// (0x0003b034) form_field_data_wide_pane

0xb933,	// (0x0003b054) form_field_popup_pane_ParamLimits

0xb933,	// (0x0003b054) form_field_popup_pane

0xb94b,	// (0x0003b06c) form_field_popup_wide_pane_ParamLimits

0xb94b,	// (0x0003b06c) form_field_popup_wide_pane

0x06e5,	// (0x0002fe06) form_field_slider_pane_ParamLimits

0x06e5,	// (0x0002fe06) form_field_slider_pane

0x06f8,	// (0x0002fe19) form_field_slider_wide_pane_ParamLimits

0x06f8,	// (0x0002fe19) form_field_slider_wide_pane

0x3816,	// (0x00032f37) data_form_pane

0xb96c,	// (0x0003b08d) form_field_data_pane_t1

0x3822,	// (0x00032f43) input_focus_pane

0x3830,	// (0x00032f51) data_form_wide_pane

0x0739,	// (0x0002fe5a) form_field_data_wide_pane_t1

0x3593,	// (0x00032cb4) input_focus_pane_cp6

0xb986,	// (0x0003b0a7) form_field_popup_pane_t1

0x3822,	// (0x00032f43) input_focus_pane_cp7

0x385c,	// (0x00032f7d) list_form_pane

0x077b,	// (0x0002fe9c) form_field_popup_wide_pane_t1

0x3822,	// (0x00032f43) input_focus_pane_cp8

0x3868,	// (0x00032f89) list_form_wide_pane

0xb9a8,	// (0x0003b0c9) form_field_slider_pane_t1_ParamLimits

0xb9a8,	// (0x0003b0c9) form_field_slider_pane_t1

0xb9c0,	// (0x0003b0e1) form_field_slider_pane_t2_ParamLimits

0xb9c0,	// (0x0003b0e1) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0003eda9) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0003eda9) form_field_slider_pane_t

0x2bad,	// (0x000322ce) input_focus_pane_cp9_ParamLimits

0x2bad,	// (0x000322ce) input_focus_pane_cp9

0xb9d5,	// (0x0003b0f6) slider_cont_pane_ParamLimits

0xb9d5,	// (0x0003b0f6) slider_cont_pane

0x3877,	// (0x00032f98) form_field_slider_wide_pane_t1_ParamLimits

0x3877,	// (0x00032f98) form_field_slider_wide_pane_t1

0x07d7,	// (0x0002fef8) form_field_slider_wide_pane_t2_ParamLimits

0x07d7,	// (0x0002fef8) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0003edae) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0003edae) form_field_slider_wide_pane_t

0x2bad,	// (0x000322ce) input_focus_pane_cp10_ParamLimits

0x2bad,	// (0x000322ce) input_focus_pane_cp10

0xb9e9,	// (0x0003b10a) slider_cont_pane_cp1_ParamLimits

0xb9e9,	// (0x0003b10a) slider_cont_pane_cp1

0xb9fd,	// (0x0003b11e) slider_form_pane_cp

0x3889,	// (0x00032faa) input_focus_pane_g1

0x3891,	// (0x00032fb2) input_focus_pane_g2

0x3899,	// (0x00032fba) input_focus_pane_g3

0x38a1,	// (0x00032fc2) input_focus_pane_g4

0x38a9,	// (0x00032fca) input_focus_pane_g5

0x38b1,	// (0x00032fd2) input_focus_pane_g6

0x38b9,	// (0x00032fda) input_focus_pane_g7

0x38c1,	// (0x00032fe2) input_focus_pane_g8

0x38c9,	// (0x00032fea) input_focus_pane_g9

0x2848,	// (0x00031f69) input_focus_pane_g10

0x0009,

0xf692,	// (0x0003edb3) input_focus_pane_g

0x537e,	// (0x00034a9f) wait_border_pane_g3_copy1

0xba05,	// (0x0003b126) data_form_pane_t1

0x2848,	// (0x00031f69) wait_anim_pane_g1_copy1

0xc501,	// (0x0003bc22) data_form_wide_pane_t1

0x68c9,	// (0x00035fea) list_form_graphic_pane_cp_ParamLimits

0x68c9,	// (0x00035fea) list_form_graphic_pane_cp

0x62b4,	// (0x000359d5) slider_form_pane_g1

0x62bd,	// (0x000359de) slider_form_pane_g2

0x0006,

0xf990,	// (0x0003f0b1) slider_form_pane_g

0x68c9,	// (0x00035fea) list_form_graphic_pane_ParamLimits

0x68c9,	// (0x00035fea) list_form_graphic_pane

0x0855,	// (0x0002ff76) list_form_graphic_pane_g1

0x085d,	// (0x0002ff7e) list_form_graphic_pane_t1_ParamLimits

0x085d,	// (0x0002ff7e) list_form_graphic_pane_t1

0x2932,	// (0x00032053) list_highlight_pane_cp5_ParamLimits

0x2932,	// (0x00032053) list_highlight_pane_cp5

0xba1f,	// (0x0003b140) find_pane_g1

0x38d1,	// (0x00032ff2) input_find_pane

0xba28,	// (0x0003b149) input_find_pane_g1_ParamLimits

0xba28,	// (0x0003b149) input_find_pane_g1

0xba34,	// (0x0003b155) input_find_pane_t1_ParamLimits

0xba34,	// (0x0003b155) input_find_pane_t1

0xba49,	// (0x0003b16a) input_find_pane_t2_ParamLimits

0xba49,	// (0x0003b16a) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0003edc8) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0003edc8) input_find_pane_t

0x38da,	// (0x00032ffb) input_focus_pane_cp5_ParamLimits

0x38da,	// (0x00032ffb) input_focus_pane_cp5

0x38f4,	// (0x00033015) bg_popup_window_pane_cp2_ParamLimits

0x38f4,	// (0x00033015) bg_popup_window_pane_cp2

0x3901,	// (0x00033022) listscroll_menu_pane_ParamLimits

0x3901,	// (0x00033022) listscroll_menu_pane

0xcf5f,	// (0x0003c680) popup_submenu_window_ParamLimits

0xcf5f,	// (0x0003c680) popup_submenu_window

0x3939,	// (0x0003305a) find_popup_pane_g1

0x3941,	// (0x00033062) input_popup_find_pane_cp

0x38da,	// (0x00032ffb) input_focus_pane_cp4_ParamLimits

0x38da,	// (0x00032ffb) input_focus_pane_cp4

0x3957,	// (0x00033078) input_popup_find_pane_t1_ParamLimits

0x3957,	// (0x00033078) input_popup_find_pane_t1

0x2852,	// (0x00031f73) bg_popup_sub_pane_cp

0x3985,	// (0x000330a6) listscroll_popup_sub_pane

0x398d,	// (0x000330ae) list_submenu_pane_ParamLimits

0x398d,	// (0x000330ae) list_submenu_pane

0x399e,	// (0x000330bf) scroll_pane_cp4

0x39a6,	// (0x000330c7) list_single_popup_submenu_pane_ParamLimits

0x39a6,	// (0x000330c7) list_single_popup_submenu_pane

0x39ba,	// (0x000330db) list_single_popup_submenu_pane_g1

0x39c2,	// (0x000330e3) list_single_popup_submenu_pane_t1_ParamLimits

0x39c2,	// (0x000330e3) list_single_popup_submenu_pane_t1

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp1_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp1

0xcf99,	// (0x0003c6ba) tabs_2_active_pane_g1

0xcfa1,	// (0x0003c6c2) tabs_2_active_pane_t1

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp1_ParamLimits

0x2bad,	// (0x000322ce) bg_passive_tab_pane_cp1

0xcf99,	// (0x0003c6ba) tabs_2_passive_pane_g1

0xcfa1,	// (0x0003c6c2) tabs_2_passive_pane_t1

0x2932,	// (0x00032053) bg_active_tab_pane_cp4

0xcfb3,	// (0x0003c6d4) tabs_2_long_active_pane_t1

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp4

0x1574,	// (0x00030c95) list_single_midp_graphic_pane_g4_ParamLimits

0x2932,	// (0x00032053) bg_active_tab_pane_cp5

0xcfc6,	// (0x0003c6e7) tabs_3_long_active_pane_t1

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp5

0x1574,	// (0x00030c95) list_single_midp_graphic_pane_g4

0x2932,	// (0x00032053) bg_popup_window_pane_cp13_ParamLimits

0x2932,	// (0x00032053) bg_popup_window_pane_cp13

0x3a39,	// (0x0003315a) listscroll_popup_fast_pane_ParamLimits

0x3a39,	// (0x0003315a) listscroll_popup_fast_pane

0x3a48,	// (0x00033169) grid_popup_fast_pane_ParamLimits

0x3a48,	// (0x00033169) grid_popup_fast_pane

0x3a5a,	// (0x0003317b) scroll_pane_cp9_ParamLimits

0x3a5a,	// (0x0003317b) scroll_pane_cp9

0x7c28,	// (0x00037349) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7c28,	// (0x00037349) list_single_graphic_hl_pane_t1_cp2

0x3a7e,	// (0x0003319f) input_focus_pane_cp20_ParamLimits

0x3a7e,	// (0x0003319f) input_focus_pane_cp20

0x3a8c,	// (0x000331ad) query_popup_data_pane_t1_ParamLimits

0x3a8c,	// (0x000331ad) query_popup_data_pane_t1

0x3a9f,	// (0x000331c0) query_popup_data_pane_t2_ParamLimits

0x3a9f,	// (0x000331c0) query_popup_data_pane_t2

0x3ae5,	// (0x00033206) query_popup_data_pane_t3_ParamLimits

0x3ae5,	// (0x00033206) query_popup_data_pane_t3

0x3b26,	// (0x00033247) query_popup_data_pane_t4_ParamLimits

0x3b26,	// (0x00033247) query_popup_data_pane_t4

0x3b62,	// (0x00033283) query_popup_data_pane_t5_ParamLimits

0x3b62,	// (0x00033283) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0003edcd) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0003edcd) query_popup_data_pane_t

0x3889,	// (0x00032faa) bg_set_opt_pane_g1

0x3891,	// (0x00032fb2) bg_set_opt_pane_g2

0x3899,	// (0x00032fba) bg_set_opt_pane_g3

0x38a1,	// (0x00032fc2) bg_set_opt_pane_g4

0x38a9,	// (0x00032fca) bg_set_opt_pane_g5

0x38b1,	// (0x00032fd2) bg_set_opt_pane_g6

0x38b9,	// (0x00032fda) bg_set_opt_pane_g7

0x38c1,	// (0x00032fe2) bg_set_opt_pane_g8

0x38c9,	// (0x00032fea) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0003edd8) bg_set_opt_pane_g

0x0bda,	// (0x000302fb) control_top_pane_stacon_ParamLimits

0x0bda,	// (0x000302fb) control_top_pane_stacon

0x0c2d,	// (0x0003034e) signal_pane_stacon_ParamLimits

0x0c2d,	// (0x0003034e) signal_pane_stacon

0x4121,	// (0x00033842) stacon_top_pane_g1_ParamLimits

0x4121,	// (0x00033842) stacon_top_pane_g1

0x0c52,	// (0x00030373) title_pane_stacon_ParamLimits

0x0c52,	// (0x00030373) title_pane_stacon

0x0c7c,	// (0x0003039d) uni_indicator_pane_stacon_ParamLimits

0x0c7c,	// (0x0003039d) uni_indicator_pane_stacon

0x0c91,	// (0x000303b2) battery_pane_stacon_ParamLimits

0x0c91,	// (0x000303b2) battery_pane_stacon

0x0cd5,	// (0x000303f6) control_bottom_pane_stacon_ParamLimits

0x0cd5,	// (0x000303f6) control_bottom_pane_stacon

0x0cf8,	// (0x00030419) navi_pane_stacon_ParamLimits

0x0cf8,	// (0x00030419) navi_pane_stacon

0x4143,	// (0x00033864) stacon_bottom_pane_g1_ParamLimits

0x4143,	// (0x00033864) stacon_bottom_pane_g1

0x08b1,	// (0x0002ffd2) aid_levels_signal_lsc_ParamLimits

0x08b1,	// (0x0002ffd2) aid_levels_signal_lsc

0x08c8,	// (0x0002ffe9) signal_pane_stacon_g1_ParamLimits

0x08c8,	// (0x0002ffe9) signal_pane_stacon_g1

0x08dc,	// (0x0002fffd) signal_pane_stacon_g2_ParamLimits

0x08dc,	// (0x0002fffd) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0003edeb) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0003edeb) signal_pane_stacon_g

0x0911,	// (0x00030032) title_pane_stacon_t1_ParamLimits

0x0911,	// (0x00030032) title_pane_stacon_t1

0x3ba6,	// (0x000332c7) uni_indicator_pane_stacon_g1

0x3bb0,	// (0x000332d1) uni_indicator_pane_stacon_g2

0x3bba,	// (0x000332db) uni_indicator_pane_stacon_g3

0x3bc4,	// (0x000332e5) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0003edf7) uni_indicator_pane_stacon_g

0x0936,	// (0x00030057) control_top_pane_stacon_g1

0x093e,	// (0x0003005f) control_top_pane_stacon_t1_ParamLimits

0x093e,	// (0x0003005f) control_top_pane_stacon_t1

0x0975,	// (0x00030096) aid_levels_battery_lsc_ParamLimits

0x0975,	// (0x00030096) aid_levels_battery_lsc

0x098d,	// (0x000300ae) battery_pane_stacon_g1_ParamLimits

0x098d,	// (0x000300ae) battery_pane_stacon_g1

0x09a0,	// (0x000300c1) battery_pane_stacon_g2_ParamLimits

0x09a0,	// (0x000300c1) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0003ee00) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0003ee00) battery_pane_stacon_g

0x09de,	// (0x000300ff) navi_icon_pane_stacon

0x09f2,	// (0x00030113) navi_navi_pane_stacon

0x09de,	// (0x000300ff) navi_text_pane_stacon

0x0936,	// (0x00030057) control_bottom_pane_stacon_g1

0x0a06,	// (0x00030127) control_bottom_pane_stacon_t1_ParamLimits

0x0a06,	// (0x00030127) control_bottom_pane_stacon_t1

0xcfd8,	// (0x0003c6f9) grid_app_pane_ParamLimits

0xcfd8,	// (0x0003c6f9) grid_app_pane

0xd010,	// (0x0003c731) scroll_pane_cp15_ParamLimits

0xd010,	// (0x0003c731) scroll_pane_cp15

0xd029,	// (0x0003c74a) cell_app_pane_ParamLimits

0xd029,	// (0x0003c74a) cell_app_pane

0xd06e,	// (0x0003c78f) cell_app_pane_g1_ParamLimits

0xd06e,	// (0x0003c78f) cell_app_pane_g1

0x3c65,	// (0x00033386) cell_app_pane_g2_ParamLimits

0x3c65,	// (0x00033386) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0003ee05) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0003ee05) cell_app_pane_g

0xd08e,	// (0x0003c7af) cell_app_pane_t1_ParamLimits

0xd08e,	// (0x0003c7af) cell_app_pane_t1

0x3c88,	// (0x000333a9) grid_highlight_pane_ParamLimits

0x3c88,	// (0x000333a9) grid_highlight_pane

0x3889,	// (0x00032faa) cell_highlight_pane_g1

0x3891,	// (0x00032fb2) cell_highlight_pane_g2

0x3899,	// (0x00032fba) cell_highlight_pane_g3

0x38a1,	// (0x00032fc2) cell_highlight_pane_g4

0x38a9,	// (0x00032fca) cell_highlight_pane_g5

0x38b1,	// (0x00032fd2) cell_highlight_pane_g6

0x38b9,	// (0x00032fda) cell_highlight_pane_g7

0x38c1,	// (0x00032fe2) cell_highlight_pane_g8

0x38c9,	// (0x00032fea) cell_highlight_pane_g9

0x2848,	// (0x00031f69) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0003edb3) cell_highlight_pane_g

0x3c99,	// (0x000333ba) bg_scroll_pane

0x0a50,	// (0x00030171) scroll_handle_pane

0x3ce0,	// (0x00033401) scroll_bg_pane_g1

0x3cf5,	// (0x00033416) scroll_bg_pane_g2

0x3d0d,	// (0x0003342e) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0003ee0a) scroll_bg_pane_g

0x3d22,	// (0x00033443) scroll_handle_focus_pane_ParamLimits

0x3d22,	// (0x00033443) scroll_handle_focus_pane

0x3ce0,	// (0x00033401) scroll_handle_pane_g1

0x3d2f,	// (0x00033450) scroll_handle_pane_g2

0x3d0d,	// (0x0003342e) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0003ee11) scroll_handle_pane_g

0x38da,	// (0x00032ffb) bg_popup_sub_pane_cp21_ParamLimits

0x38da,	// (0x00032ffb) bg_popup_sub_pane_cp21

0x3d43,	// (0x00033464) popup_fep_japan_predictive_window_t1_ParamLimits

0x3d43,	// (0x00033464) popup_fep_japan_predictive_window_t1

0x3d5d,	// (0x0003347e) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d5d,	// (0x0003347e) popup_fep_japan_predictive_window_t2

0x3d90,	// (0x000334b1) popup_fep_japan_predictive_window_t3_ParamLimits

0x3d90,	// (0x000334b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0003ee18) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0003ee18) popup_fep_japan_predictive_window_t

0x2852,	// (0x00031f73) bg_popup_sub_pane_cp23

0x3dc7,	// (0x000334e8) listscroll_japin_cand_pane

0x3dcf,	// (0x000334f0) popup_fep_japan_candidate_window_t1

0x3ddd,	// (0x000334fe) candidate_pane_ParamLimits

0x3ddd,	// (0x000334fe) candidate_pane

0x3def,	// (0x00033510) scroll_pane_cp30

0x3df7,	// (0x00033518) list_single_popup_jap_candidate_pane_ParamLimits

0x3df7,	// (0x00033518) list_single_popup_jap_candidate_pane

0x2852,	// (0x00031f73) list_highlight_pane_cp30

0x3e0c,	// (0x0003352d) list_single_popup_jap_candidate_pane_t1

0x3e1b,	// (0x0003353c) level_1_signal

0x3e28,	// (0x00033549) level_2_signal

0x3e35,	// (0x00033556) level_3_signal

0x3e42,	// (0x00033563) level_4_signal

0x3e4f,	// (0x00033570) level_5_signal

0x3e5c,	// (0x0003357d) level_6_signal

0x3e69,	// (0x0003358a) level_7_signal

0x3e1b,	// (0x0003353c) level_1_battery

0x3e28,	// (0x00033549) level_2_battery

0x3e35,	// (0x00033556) level_3_battery

0x3e42,	// (0x00033563) level_4_battery

0x3e4f,	// (0x00033570) level_5_battery

0x3e5c,	// (0x0003357d) level_6_battery

0x3e69,	// (0x0003358a) level_7_battery

0x3e8e,	// (0x000335af) list_menu_pane_ParamLimits

0x3e8e,	// (0x000335af) list_menu_pane

0x3ea4,	// (0x000335c5) scroll_pane_cp25_ParamLimits

0x3ea4,	// (0x000335c5) scroll_pane_cp25

0x3ebd,	// (0x000335de) list_double2_graphic_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double2_graphic_pane_cp2

0x3ebd,	// (0x000335de) list_double2_large_graphic_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double2_large_graphic_pane_cp2

0x3ebd,	// (0x000335de) list_double2_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double2_pane_cp2

0x3ebd,	// (0x000335de) list_double_graphic_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double_graphic_pane_cp2

0x3ebd,	// (0x000335de) list_double_large_graphic_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double_large_graphic_pane_cp2

0x3ebd,	// (0x000335de) list_double_number_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double_number_pane_cp2

0x3ebd,	// (0x000335de) list_double_pane_cp2_ParamLimits

0x3ebd,	// (0x000335de) list_double_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_2graphic_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_2graphic_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_graphic_heading_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_graphic_heading_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_graphic_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_graphic_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_heading_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_heading_pane_cp2

0x3efa,	// (0x0003361b) list_single_large_graphic_pane_cp2_ParamLimits

0x3efa,	// (0x0003361b) list_single_large_graphic_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_number_heading_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_number_heading_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_number_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_number_pane_cp2

0xd0b6,	// (0x0003c7d7) list_single_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_pane_cp2

0x3f70,	// (0x00033691) bg_popup_sub_pane_cp22

0x0b02,	// (0x00030223) popup_side_volume_key_window_g1

0x0b2c,	// (0x0003024d) popup_side_volume_key_window_t1

0x0b48,	// (0x00030269) volume_small_pane_cp1

0x2bad,	// (0x000322ce) bg_popup_sub_pane_cp24_ParamLimits

0x2bad,	// (0x000322ce) bg_popup_sub_pane_cp24

0x3f86,	// (0x000336a7) fep_china_uni_candidate_pane_ParamLimits

0x3f86,	// (0x000336a7) fep_china_uni_candidate_pane

0x3f9a,	// (0x000336bb) fep_china_uni_entry_pane

0x3faa,	// (0x000336cb) popup_fep_china_uni_window_g1

0x3fc6,	// (0x000336e7) fep_china_uni_entry_pane_g1

0x3fce,	// (0x000336ef) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0003ee49) fep_china_uni_entry_pane_g

0x3fd6,	// (0x000336f7) fep_entry_item_pane

0x3fe0,	// (0x00033701) fep_candidate_item_pane

0x3fe8,	// (0x00033709) fep_china_uni_candidate_pane_g1

0x3ff0,	// (0x00033711) fep_china_uni_candidate_pane_g2

0x3ff8,	// (0x00033719) fep_china_uni_candidate_pane_g3

0x4000,	// (0x00033721) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0003ee4e) fep_china_uni_candidate_pane_g

0x2848,	// (0x00031f69) fep_entry_item_pane_g1

0x4008,	// (0x00033729) fep_entry_item_pane_t1_ParamLimits

0x4008,	// (0x00033729) fep_entry_item_pane_t1

0x401e,	// (0x0003373f) fep_candidate_item_pane_t1_ParamLimits

0x401e,	// (0x0003373f) fep_candidate_item_pane_t1

0x4033,	// (0x00033754) fep_candidate_item_pane_t2_ParamLimits

0x4033,	// (0x00033754) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0003ee57) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0003ee57) fep_candidate_item_pane_t

0x2932,	// (0x00032053) list_highlight_pane_cp31_ParamLimits

0x2932,	// (0x00032053) list_highlight_pane_cp31

0x4045,	// (0x00033766) level_1_signal_lsc

0x404e,	// (0x0003376f) level_2_signal_lsc

0x4057,	// (0x00033778) level_3_signal_lsc

0x4060,	// (0x00033781) level_4_signal_lsc

0x4069,	// (0x0003378a) level_5_signal_lsc

0x4072,	// (0x00033793) level_6_signal_lsc

0x407b,	// (0x0003379c) level_7_signal_lsc

0x407b,	// (0x0003379c) level_1_battery_lsc

0x4084,	// (0x000337a5) level_2_battery_lsc

0x408d,	// (0x000337ae) level_3_battery_lsc

0x4096,	// (0x000337b7) level_4_battery_lsc

0x409f,	// (0x000337c0) level_5_battery_lsc

0x40a8,	// (0x000337c9) level_6_battery_lsc

0x4045,	// (0x00033766) level_7_battery_lsc

0x40b1,	// (0x000337d2) scroll_handle_focus_pane_g1

0x40ba,	// (0x000337db) scroll_handle_focus_pane_g2

0x40c3,	// (0x000337e4) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0003ee5c) scroll_handle_focus_pane_g

0xba67,	// (0x0003b188) list_single_2graphic_pane_g1_ParamLimits

0xba67,	// (0x0003b188) list_single_2graphic_pane_g1

0xb566,	// (0x0003ac87) list_single_2graphic_pane_g2_ParamLimits

0xb566,	// (0x0003ac87) list_single_2graphic_pane_g2

0x15a8,	// (0x00030cc9) list_single_2graphic_pane_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_single_2graphic_pane_g3

0xba73,	// (0x0003b194) list_single_2graphic_pane_g4_ParamLimits

0xba73,	// (0x0003b194) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0003ee63) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0003ee63) list_single_2graphic_pane_g

0xba84,	// (0x0003b1a5) list_single_2graphic_pane_t1_ParamLimits

0xba84,	// (0x0003b1a5) list_single_2graphic_pane_t1

0xbab2,	// (0x0003b1d3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbab2,	// (0x0003b1d3) list_double2_graphic_large_graphic_pane_g1

0xb5c5,	// (0x0003ace6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5c5,	// (0x0003ace6) list_double2_graphic_large_graphic_pane_g2

0x04c8,	// (0x0002fbe9) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x04c8,	// (0x0002fbe9) list_double2_graphic_large_graphic_pane_g3

0xbac4,	// (0x0003b1e5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbac4,	// (0x0003b1e5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0003ee6c) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0003ee6c) list_double2_graphic_large_graphic_pane_g

0xbad0,	// (0x0003b1f1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbad0,	// (0x0003b1f1) list_double2_graphic_large_graphic_pane_t1

0xbae6,	// (0x0003b207) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbae6,	// (0x0003b207) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0003ee75) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0003ee75) list_double2_graphic_large_graphic_pane_t

0x420b,	// (0x0003392c) popup_fast_swap_window_ParamLimits

0x420b,	// (0x0003392c) popup_fast_swap_window

0x4227,	// (0x00033948) popup_side_volume_key_window

0x4243,	// (0x00033964) stacon_top_pane

0x424d,	// (0x0003396e) status_pane_ParamLimits

0x424d,	// (0x0003396e) status_pane

0x4243,	// (0x00033964) status_small_pane

0x2852,	// (0x00031f73) control_pane

0x2852,	// (0x00031f73) stacon_bottom_pane

0x3805,	// (0x00032f26) scroll_pane_cp121

0x37fc,	// (0x00032f1d) set_content_pane

0x40e7,	// (0x00033808) bg_active_tab_pane_g1_cp1

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp1

0x40f0,	// (0x00033811) bg_active_tab_pane_g3_cp1

0x40e7,	// (0x00033808) bg_passive_tab_pane_g1_cp1

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp1

0x40f0,	// (0x00033811) bg_passive_tab_pane_g3_cp1

0xd144,	// (0x0003c865) bg_active_tab_pane_g1_cp2

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp2

0xd14d,	// (0x0003c86e) bg_active_tab_pane_g3_cp2

0xd144,	// (0x0003c865) bg_passive_tab_pane_g1_cp2

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp2

0xd14d,	// (0x0003c86e) bg_passive_tab_pane_g3_cp2

0xd156,	// (0x0003c877) bg_active_tab_pane_g1_cp3

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp3

0xd15f,	// (0x0003c880) bg_active_tab_pane_g3_cp3

0xd156,	// (0x0003c877) bg_passive_tab_pane_g1_cp3

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp3

0xd15f,	// (0x0003c880) bg_passive_tab_pane_g3_cp3

0xd168,	// (0x0003c889) bg_active_tab_pane_g1_cp4

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp4

0xd171,	// (0x0003c892) bg_active_tab_pane_g3_cp4

0xd168,	// (0x0003c889) bg_passive_tab_pane_g1_cp4

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp4

0xd171,	// (0x0003c892) bg_passive_tab_pane_g3_cp4

0x415f,	// (0x00033880) bg_active_tab_pane_g1_cp5

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp5

0x4168,	// (0x00033889) bg_active_tab_pane_g3_cp5

0x415f,	// (0x00033880) bg_passive_tab_pane_g1_cp5

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp5

0x4168,	// (0x00033889) bg_passive_tab_pane_g3_cp5

0x68c9,	// (0x00035fea) list_set_graphic_pane_ParamLimits

0x68c9,	// (0x00035fea) list_set_graphic_pane

0x2852,	// (0x00031f73) bg_set_opt_pane_cp4

0xd17a,	// (0x0003c89b) list_set_graphic_pane_g1_ParamLimits

0xd17a,	// (0x0003c89b) list_set_graphic_pane_g1

0xd186,	// (0x0003c8a7) list_set_graphic_pane_g2_ParamLimits

0xd186,	// (0x0003c8a7) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0003ee7a) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0003ee7a) list_set_graphic_pane_g

0x0009,

0xfae3,	// (0x0003f204) volume_small_pane_cp_g

0xd1aa,	// (0x0003c8cb) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd1aa,	// (0x0003c8cb) list_double2_large_graphic_pane_g1_cp2

0xd1b8,	// (0x0003c8d9) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd1b8,	// (0x0003c8d9) list_double2_large_graphic_pane_g2_cp2

0x41db,	// (0x000338fc) list_double2_large_graphic_pane_g3_cp2

0x41e3,	// (0x00033904) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x41e3,	// (0x00033904) list_double2_large_graphic_pane_t1_cp2

0x41f9,	// (0x0003391a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41f9,	// (0x0003391a) list_double2_large_graphic_pane_t2_cp2

0xd90d,	// (0x0003d02e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd90d,	// (0x0003d02e) list_double_large_graphic_pane_g1_cp2

0xd920,	// (0x0003d041) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd920,	// (0x0003d041) list_double_large_graphic_pane_g2_cp2

0x4369,	// (0x00033a8a) list_double_large_graphic_pane_g3_cp2

0x5e73,	// (0x00035594) list_double_large_graphic_pane_g4_cp

0x5e7b,	// (0x0003559c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e7b,	// (0x0003559c) list_double_large_graphic_pane_t1_cp2

0x5e92,	// (0x000355b3) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e92,	// (0x000355b3) list_double_large_graphic_pane_t2_cp2

0xd1c9,	// (0x0003c8ea) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1c9,	// (0x0003c8ea) list_double2_graphic_pane_g1_cp2

0xd1d7,	// (0x0003c8f8) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1d7,	// (0x0003c8f8) list_double2_graphic_pane_g2_cp2

0xd1e8,	// (0x0003c909) list_double2_graphic_pane_g3_cp2

0x4284,	// (0x000339a5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4284,	// (0x000339a5) list_double2_graphic_pane_t1_cp2

0x429a,	// (0x000339bb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x429a,	// (0x000339bb) list_double2_graphic_pane_t2_cp2

0x42ac,	// (0x000339cd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x42ac,	// (0x000339cd) list_single_number_heading_pane_g1_cp2

0x42b8,	// (0x000339d9) list_single_number_heading_pane_g2_cp2

0x42c0,	// (0x000339e1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x42c0,	// (0x000339e1) list_single_number_heading_pane_t1_cp2

0xd1f2,	// (0x0003c913) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd1f2,	// (0x0003c913) list_single_number_heading_pane_t2_cp2

0x42e8,	// (0x00033a09) list_single_number_heading_pane_t3_cp2_ParamLimits

0x42e8,	// (0x00033a09) list_single_number_heading_pane_t3_cp2

0x42ac,	// (0x000339cd) list_single_heading_pane_g1_cp2_ParamLimits

0x42ac,	// (0x000339cd) list_single_heading_pane_g1_cp2

0x42b8,	// (0x000339d9) list_single_heading_pane_g2_cp2

0x42c0,	// (0x000339e1) list_single_heading_pane_t1_cp2_ParamLimits

0x42c0,	// (0x000339e1) list_single_heading_pane_t1_cp2

0xd8f9,	// (0x0003d01a) list_single_heading_pane_t2_cp2_ParamLimits

0xd8f9,	// (0x0003d01a) list_single_heading_pane_t2_cp2

0x5ba1,	// (0x000352c2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5ba1,	// (0x000352c2) list_double_graphic_pane_g1_cp2

0x5bad,	// (0x000352ce) list_double_graphic_pane_g2_cp2_ParamLimits

0x5bad,	// (0x000352ce) list_double_graphic_pane_g2_cp2

0x5bbc,	// (0x000352dd) list_double_graphic_pane_g3_cp2

0x5bc4,	// (0x000352e5) list_double_graphic_pane_t1_cp2_ParamLimits

0x5bc4,	// (0x000352e5) list_double_graphic_pane_t1_cp2

0x5bda,	// (0x000352fb) list_double_graphic_pane_t2_cp2_ParamLimits

0x5bda,	// (0x000352fb) list_double_graphic_pane_t2_cp2

0x435d,	// (0x00033a7e) list_double_number_pane_g1_cp2_ParamLimits

0x435d,	// (0x00033a7e) list_double_number_pane_g1_cp2

0x4369,	// (0x00033a8a) list_double_number_pane_g2_cp2

0xd8e5,	// (0x0003d006) list_double_number_pane_t1_cp2_ParamLimits

0xd8e5,	// (0x0003d006) list_double_number_pane_t1_cp2

0x5b79,	// (0x0003529a) list_double_number_pane_t2_cp2_ParamLimits

0x5b79,	// (0x0003529a) list_double_number_pane_t2_cp2

0x5b8f,	// (0x000352b0) list_double_number_pane_t3_cp2_ParamLimits

0x5b8f,	// (0x000352b0) list_double_number_pane_t3_cp2

0xd833,	// (0x0003cf54) list_single_graphic_pane_g1_cp2_ParamLimits

0xd833,	// (0x0003cf54) list_single_graphic_pane_g1_cp2

0x43c1,	// (0x00033ae2) list_single_graphic_pane_g2_cp2_ParamLimits

0x43c1,	// (0x00033ae2) list_single_graphic_pane_g2_cp2

0x43cd,	// (0x00033aee) list_single_graphic_pane_g3_cp2

0x5a24,	// (0x00035145) list_single_graphic_pane_t1_cp2_ParamLimits

0x5a24,	// (0x00035145) list_single_graphic_pane_t1_cp2

0x43c1,	// (0x00033ae2) list_single_number_pane_g1_cp2_ParamLimits

0x43c1,	// (0x00033ae2) list_single_number_pane_g1_cp2

0x43cd,	// (0x00033aee) list_single_number_pane_g2_cp2

0x5a24,	// (0x00035145) list_single_number_pane_t1_cp2_ParamLimits

0x5a24,	// (0x00035145) list_single_number_pane_t1_cp2

0xd81f,	// (0x0003cf40) list_single_number_pane_t2_cp2_ParamLimits

0xd81f,	// (0x0003cf40) list_single_number_pane_t2_cp2

0xd1b8,	// (0x0003c8d9) list_double2_pane_g1_cp2_ParamLimits

0xd1b8,	// (0x0003c8d9) list_double2_pane_g1_cp2

0x41db,	// (0x000338fc) list_double2_pane_g2_cp2

0x4335,	// (0x00033a56) list_double2_pane_t1_cp2_ParamLimits

0x4335,	// (0x00033a56) list_double2_pane_t1_cp2

0x434b,	// (0x00033a6c) list_double2_pane_t2_cp2_ParamLimits

0x434b,	// (0x00033a6c) list_double2_pane_t2_cp2

0x435d,	// (0x00033a7e) list_double_pane_g1_cp2_ParamLimits

0x435d,	// (0x00033a7e) list_double_pane_g1_cp2

0x4369,	// (0x00033a8a) list_double_pane_g2_cp2

0x4371,	// (0x00033a92) list_double_pane_t1_cp2_ParamLimits

0x4371,	// (0x00033a92) list_double_pane_t1_cp2

0x4387,	// (0x00033aa8) list_double_pane_t2_cp2_ParamLimits

0x4387,	// (0x00033aa8) list_double_pane_t2_cp2

0x43b1,	// (0x00033ad2) list_single_pane_cp2_g3

0x43c1,	// (0x00033ae2) list_single_pane_g1_cp2_ParamLimits

0x43c1,	// (0x00033ae2) list_single_pane_g1_cp2

0x43cd,	// (0x00033aee) list_single_pane_g2_cp2

0x43d5,	// (0x00033af6) list_single_pane_t1_cp2_ParamLimits

0x43d5,	// (0x00033af6) list_single_pane_t1_cp2

0xd21e,	// (0x0003c93f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd21e,	// (0x0003c93f) list_single_large_graphic_pane_g1_cp2

0x43f9,	// (0x00033b1a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43f9,	// (0x00033b1a) list_single_large_graphic_pane_g2_cp2

0x4405,	// (0x00033b26) list_single_large_graphic_pane_g3_cp2

0x440d,	// (0x00033b2e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x440d,	// (0x00033b2e) list_single_large_graphic_pane_g4_cp1

0x4427,	// (0x00033b48) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4427,	// (0x00033b48) list_single_large_graphic_pane_t1_cp2

0x59f0,	// (0x00035111) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59f0,	// (0x00035111) list_single_graphic_heading_pane_g1_cp2

0xd7fa,	// (0x0003cf1b) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd7fa,	// (0x0003cf1b) list_single_graphic_heading_pane_g4_cp2

0x43cd,	// (0x00033aee) list_single_graphic_heading_pane_g5_cp2

0x59fc,	// (0x0003511d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59fc,	// (0x0003511d) list_single_graphic_heading_pane_t1_cp2

0xd80b,	// (0x0003cf2c) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd80b,	// (0x0003cf2c) list_single_graphic_heading_pane_t2_cp2

0x59b1,	// (0x000350d2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x59b1,	// (0x000350d2) list_single_2graphic_pane_g1_cp2

0xd7fa,	// (0x0003cf1b) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd7fa,	// (0x0003cf1b) list_single_2graphic_pane_g2_cp2

0x43cd,	// (0x00033aee) list_single_2graphic_pane_g3_cp2

0x59ce,	// (0x000350ef) list_single_2graphic_pane_g4_cp2_ParamLimits

0x59ce,	// (0x000350ef) list_single_2graphic_pane_g4_cp2

0x59da,	// (0x000350fb) list_single_2graphic_pane_t1_cp2_ParamLimits

0x59da,	// (0x000350fb) list_single_2graphic_pane_t1_cp2

0x2848,	// (0x00031f69) list_highlight_pane_g10_cp1

0x5589,	// (0x00034caa) list_highlight_pane_g1_cp1

0x5591,	// (0x00034cb2) list_highlight_pane_g2_cp1

0x5599,	// (0x00034cba) list_highlight_pane_g3_cp1

0x55a1,	// (0x00034cc2) list_highlight_pane_g4_cp1

0x55a9,	// (0x00034cca) list_highlight_pane_g5_cp1

0x55b1,	// (0x00034cd2) list_highlight_pane_g6_cp1

0x55b9,	// (0x00034cda) list_highlight_pane_g7_cp1

0x55c1,	// (0x00034ce2) list_highlight_pane_g8_cp1

0x55c9,	// (0x00034cea) list_highlight_pane_g9_cp1

0xd7c0,	// (0x0003cee1) form_field_slider_pane_t3

0xd7ce,	// (0x0003ceef) form_field_slider_pane_t4

0x54c5,	// (0x00034be6) slider_form_pane_ParamLimits

0x54c5,	// (0x00034be6) slider_form_pane

0x2852,	// (0x00031f73) control_abbreviations

0x2852,	// (0x00031f73) control_conventions

0x2852,	// (0x00031f73) control_definitions

0x2852,	// (0x00031f73) format_table_attribute

0x5ca3,	// (0x000353c4) bg_popup_preview_window_pane_g9

0x2852,	// (0x00031f73) format_table_data2

0x2852,	// (0x00031f73) format_table_data3

0x2852,	// (0x00031f73) format_table_data_example

0x0008,

0x2852,	// (0x00031f73) intro_purpose

0xf8f0,	// (0x0003f011) bg_popup_preview_window_pane_g

0x2852,	// (0x00031f73) texts_category

0x2852,	// (0x00031f73) texts_graphics

0x443d,	// (0x00033b5e) text_digital

0x444c,	// (0x00033b6d) text_primary

0x445b,	// (0x00033b7c) text_primary_small

0x446a,	// (0x00033b8b) text_secondary

0x4479,	// (0x00033b9a) text_title

0x63d5,	// (0x00035af6) bg_passive_tab_pane_g1_cp3_srt

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp3_srt

0x63de,	// (0x00035aff) bg_passive_tab_pane_g3_cp3_srt

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp3_srt_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp3_srt

0x63e7,	// (0x00035b08) tabs_4_active_pane_srt_g1

0xdb6b,	// (0x0003d28c) tabs_4_active_pane_srt_t1_ParamLimits

0xdb6b,	// (0x0003d28c) tabs_4_active_pane_srt_t1

0x63d5,	// (0x00035af6) bg_active_tab_pane_g1_cp3_copy1

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp3_copy1

0x63de,	// (0x00035aff) bg_active_tab_pane_g3_cp3_copy1

0x2932,	// (0x00032053) tabs_2_long_active_pane_srt_ParamLimits

0x2932,	// (0x00032053) tabs_2_long_active_pane_srt

0x2932,	// (0x00032053) tabs_2_long_passive_pane_srt_ParamLimits

0x2932,	// (0x00032053) tabs_2_long_passive_pane_srt

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp4_srt

0x60e7,	// (0x00035808) bg_passive_tab_pane_g1_cp4_srt

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp4_srt

0x60f0,	// (0x00035811) bg_passive_tab_pane_g3_cp4_srt

0x2932,	// (0x00032053) bg_active_tab_pane_cp4_srt_ParamLimits

0x2932,	// (0x00032053) bg_active_tab_pane_cp4_srt

0xd995,	// (0x0003d0b6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd995,	// (0x0003d0b6) tabs_2_long_active_pane_srt_t1

0x60e7,	// (0x00035808) bg_active_tab_pane_g1_cp4_srt

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp4_srt

0x60f0,	// (0x00035811) bg_active_tab_pane_g3_cp4_srt

0x2bad,	// (0x000322ce) tabs_3_long_active_pane_srt_ParamLimits

0x2bad,	// (0x000322ce) tabs_3_long_active_pane_srt

0x2bad,	// (0x000322ce) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2bad,	// (0x000322ce) tabs_3_long_passive_pane_cp_srt

0x2bad,	// (0x000322ce) tabs_3_long_passive_pane_srt_ParamLimits

0x2bad,	// (0x000322ce) tabs_3_long_passive_pane_srt

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp5_srt

0x415f,	// (0x00033880) bg_passive_tab_pane_g1_cp5_srt

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp5_srt

0x4168,	// (0x00033889) bg_passive_tab_pane_g3_cp5_srt

0x2932,	// (0x00032053) bg_active_tab_pane_cp5_srt_ParamLimits

0x2932,	// (0x00032053) bg_active_tab_pane_cp5_srt

0xd97f,	// (0x0003d0a0) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd97f,	// (0x0003d0a0) tabs_3_long_active_pane_srt_t1

0x415f,	// (0x00033880) bg_active_tab_pane_g1_cp5_srt

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp5_srt

0x4168,	// (0x00033889) bg_active_tab_pane_g3_cp5_srt

0x60c7,	// (0x000357e8) navi_text_pane_srt_t1

0x60bf,	// (0x000357e0) navi_icon_pane_srt_g1

0x4640,	// (0x00033d61) midp_editing_number_pane_srt

0x4488,	// (0x00033ba9) midp_ticker_pane_srt

0x4648,	// (0x00033d69) midp_ticker_pane_srt_g1

0x4650,	// (0x00033d71) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0003ee99) midp_ticker_pane_srt_g

0x4658,	// (0x00033d79) midp_ticker_pane_srt_t1

0x60b0,	// (0x000357d1) midp_editing_number_pane_t1_copy1

0x47c8,	// (0x00033ee9) listscroll_midp_pane

0x47c8,	// (0x00033ee9) midp_form_pane

0x44f2,	// (0x00033c13) midp_info_popup_window_ParamLimits

0x44f2,	// (0x00033c13) midp_info_popup_window

0x38da,	// (0x00032ffb) bg_popup_sub_pane_cp50_ParamLimits

0x38da,	// (0x00032ffb) bg_popup_sub_pane_cp50

0x51b5,	// (0x000348d6) listscroll_midp_info_pane_ParamLimits

0x51b5,	// (0x000348d6) listscroll_midp_info_pane

0x519d,	// (0x000348be) listscroll_form_midp_pane_ParamLimits

0x519d,	// (0x000348be) listscroll_form_midp_pane

0x51a9,	// (0x000348ca) scroll_bar_cp050

0xd7b4,	// (0x0003ced5) list_midp_pane

0x6eaf,	// (0x000365d0) signal_pane_g2_cp

0x50b7,	// (0x000347d8) listscroll_midp_info_pane_t1_ParamLimits

0x50b7,	// (0x000347d8) listscroll_midp_info_pane_t1

0x50cf,	// (0x000347f0) listscroll_midp_info_pane_t2_ParamLimits

0x50cf,	// (0x000347f0) listscroll_midp_info_pane_t2

0x510d,	// (0x0003482e) listscroll_midp_info_pane_t3_ParamLimits

0x510d,	// (0x0003482e) listscroll_midp_info_pane_t3

0x5147,	// (0x00034868) listscroll_midp_info_pane_t4_ParamLimits

0x5147,	// (0x00034868) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0003ef4c) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0003ef4c) listscroll_midp_info_pane_t

0x399e,	// (0x000330bf) scroll_pane_cp21

0x5055,	// (0x00034776) form_midp_field_choice_group_pane

0x505e,	// (0x0003477f) form_midp_field_text_pane

0x509d,	// (0x000347be) form_midp_field_time_pane

0x50a5,	// (0x000347c6) form_midp_gauge_slider_pane

0x50ae,	// (0x000347cf) form_midp_gauge_wait_pane

0x2852,	// (0x00031f73) form_midp_image_pane

0xc38d,	// (0x0003baae) list_single_midp_pane_ParamLimits

0xc38d,	// (0x0003baae) list_single_midp_pane

0xd792,	// (0x0003ceb3) form_midp_field_text_pane_t1

0x4dd7,	// (0x000344f8) input_focus_pane_cp050

0x5044,	// (0x00034765) list_midp_form_text_pane

0x4fdc,	// (0x000346fd) form_midp_field_choice_group_pane_t1

0x4fea,	// (0x0003470b) input_focus_pane_cp051

0x4ffe,	// (0x0003471f) list_midp_choice_pane

0x2852,	// (0x00031f73) status_idle_pane

0x4fc0,	// (0x000346e1) form_midp_field_time_pane_t1

0x2848,	// (0x00031f69) wait_anim_pane_g2_copy1

0x4fce,	// (0x000346ef) form_midp_field_time_pane_t2

0x0001,

0x45a0,	// (0x00033cc1) aid_navinavi_width_2_pane

0xf826,	// (0x0003ef47) form_midp_field_time_pane_t

0x2852,	// (0x00031f73) input_focus_pane_cp052

0x2852,	// (0x00031f73) bg_input_focus_pane_cp040

0x4f80,	// (0x000346a1) form_midp_gauge_slider_pane_t1

0x4f8e,	// (0x000346af) form_midp_gauge_slider_pane_t2

0xd776,	// (0x0003ce97) form_midp_gauge_slider_pane_t3

0xd784,	// (0x0003cea5) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0003ef3e) form_midp_gauge_slider_pane_t

0x4fb8,	// (0x000346d9) form_midp_slider_pane

0x2932,	// (0x00032053) bg_input_focus_pane_cp041_ParamLimits

0x2932,	// (0x00032053) bg_input_focus_pane_cp041

0x4f4d,	// (0x0003466e) form_midp_gauge_wait_pane_t1_ParamLimits

0x4f4d,	// (0x0003466e) form_midp_gauge_wait_pane_t1

0x4f5f,	// (0x00034680) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f5f,	// (0x00034680) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0003ef39) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0003ef39) form_midp_gauge_wait_pane_t

0x4f71,	// (0x00034692) form_midp_wait_pane_ParamLimits

0x4f71,	// (0x00034692) form_midp_wait_pane

0x4f17,	// (0x00034638) form_midp_image_pane_g1

0x4f20,	// (0x00034641) form_midp_image_pane_t1

0x4f2f,	// (0x00034650) form_midp_image_pane_t2

0x4f3e,	// (0x0003465f) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0003ef32) form_midp_image_pane_t

0x4f0e,	// (0x0003462f) list_single_midp_pane_g1

0x169f,	// (0x00030dc0) list_single_midp_pane_t1

0xd761,	// (0x0003ce82) list_midp_form_item_pane_ParamLimits

0xd761,	// (0x0003ce82) list_midp_form_item_pane

0x4548,	// (0x00033c69) list_midp_form_item_pane_t1

0x4557,	// (0x00033c78) midp_ticker_pane_g1

0x4563,	// (0x00033c84) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0003ee7f) midp_ticker_pane_g

0x456f,	// (0x00033c90) midp_ticker_pane_t1

0x6301,	// (0x00035a22) midp_editing_number_pane_t1

0x62df,	// (0x00035a00) midp_editing_number_pane

0x62ee,	// (0x00035a0f) midp_ticker_pane

0x60a0,	// (0x000357c1) ai_message_heading_pane

0x2852,	// (0x00031f73) bg_popup_window_pane_cp14

0x60a8,	// (0x000357c9) listscroll_ai_message_pane

0x602a,	// (0x0003574b) ai_message_heading_pane_g1_ParamLimits

0x602a,	// (0x0003574b) ai_message_heading_pane_g1

0x6036,	// (0x00035757) ai_message_heading_pane_g2_ParamLimits

0x6036,	// (0x00035757) ai_message_heading_pane_g2

0x6042,	// (0x00035763) ai_message_heading_pane_g3_ParamLimits

0x6042,	// (0x00035763) ai_message_heading_pane_g3

0x604e,	// (0x0003576f) ai_message_heading_pane_g4_ParamLimits

0x604e,	// (0x0003576f) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0003f073) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0003f073) ai_message_heading_pane_g

0x605a,	// (0x0003577b) ai_message_heading_pane_t1_ParamLimits

0x605a,	// (0x0003577b) ai_message_heading_pane_t1

0x6074,	// (0x00035795) ai_message_heading_pane_t2_ParamLimits

0x6074,	// (0x00035795) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0003f07c) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0003f07c) ai_message_heading_pane_t

0x6086,	// (0x000357a7) bg_popup_heading_pane_cp1_ParamLimits

0x6086,	// (0x000357a7) bg_popup_heading_pane_cp1

0x6018,	// (0x00035739) list_ai_message_pane_ParamLimits

0x6018,	// (0x00035739) list_ai_message_pane

0x399e,	// (0x000330bf) scroll_pane_cp10

0x5fb4,	// (0x000356d5) list_ai_message_pane_g1

0x5fbc,	// (0x000356dd) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0003f050) list_ai_message_pane_g

0x5fc4,	// (0x000356e5) list_ai_message_pane_t1_ParamLimits

0x5fc4,	// (0x000356e5) list_ai_message_pane_t1

0x5fd9,	// (0x000356fa) list_ai_message_pane_t2_ParamLimits

0x5fd9,	// (0x000356fa) list_ai_message_pane_t2

0x5fee,	// (0x0003570f) list_ai_message_pane_t3_ParamLimits

0x5fee,	// (0x0003570f) list_ai_message_pane_t3

0x6003,	// (0x00035724) list_ai_message_pane_t4_ParamLimits

0x6003,	// (0x00035724) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0003f055) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0003f055) list_ai_message_pane_t

0xd95e,	// (0x0003d07f) cell_ai_soft_ind_pane_ParamLimits

0xd95e,	// (0x0003d07f) cell_ai_soft_ind_pane

0x4581,	// (0x00033ca2) cell_ai_soft_ind_pane_g1_ParamLimits

0x4581,	// (0x00033ca2) cell_ai_soft_ind_pane_g1

0x2852,	// (0x00031f73) grid_highlight_cp1

0x458e,	// (0x00033caf) text_secondary_cp56_ParamLimits

0x458e,	// (0x00033caf) text_secondary_cp56

0x5f74,	// (0x00035695) example_general_pane_ParamLimits

0x5f74,	// (0x00035695) example_general_pane

0x5f80,	// (0x000356a1) example_parent_pane_g1_ParamLimits

0x5f80,	// (0x000356a1) example_parent_pane_g1

0x5f8c,	// (0x000356ad) example_parent_pane_t1_ParamLimits

0x5f8c,	// (0x000356ad) example_parent_pane_t1

0xc037,	// (0x0003b758) popup_preview_text_window_ParamLimits

0xc037,	// (0x0003b758) popup_preview_text_window

0x43b9,	// (0x00033ada) list_single_pane_cp2_g4

0x32e7,	// (0x00032a08) bg_popup_preview_window_pane_ParamLimits

0x32e7,	// (0x00032a08) bg_popup_preview_window_pane

0x5cab,	// (0x000353cc) popup_preview_text_window_t1_ParamLimits

0x5cab,	// (0x000353cc) popup_preview_text_window_t1

0x5cc9,	// (0x000353ea) popup_preview_text_window_t2_ParamLimits

0x5cc9,	// (0x000353ea) popup_preview_text_window_t2

0x5d12,	// (0x00035433) popup_preview_text_window_t3_ParamLimits

0x5d12,	// (0x00035433) popup_preview_text_window_t3

0x5d57,	// (0x00035478) popup_preview_text_window_t4_ParamLimits

0x5d57,	// (0x00035478) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0003f024) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0003f024) popup_preview_text_window_t

0x5dd5,	// (0x000354f6) scroll_pane_cp11

0x4cdf,	// (0x00034400) bg_popup_preview_window_pane_g1

0x5c6b,	// (0x0003538c) bg_popup_preview_window_pane_g2

0x5c73,	// (0x00035394) bg_popup_preview_window_pane_g3

0x5c7b,	// (0x0003539c) bg_popup_preview_window_pane_g4

0x5c83,	// (0x000353a4) bg_popup_preview_window_pane_g5

0x5c8b,	// (0x000353ac) bg_popup_preview_window_pane_g6

0x5c93,	// (0x000353b4) bg_popup_preview_window_pane_g7

0x5c9b,	// (0x000353bc) bg_popup_preview_window_pane_g8

0xf325,	// (0x0003ea46) aid_popup_width_pane

0xbfb3,	// (0x0003b6d4) popup_midp_note_alarm_window_ParamLimits

0xbfb3,	// (0x0003b6d4) popup_midp_note_alarm_window

0x3816,	// (0x00032f37) data_form_pane_ParamLimits

0xb962,	// (0x0003b083) form_field_data_pane_g1

0xb96c,	// (0x0003b08d) form_field_data_pane_t1_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_ParamLimits

0x3830,	// (0x00032f51) data_form_wide_pane_ParamLimits

0x072d,	// (0x0002fe4e) form_field_data_wide_pane_g1

0x0739,	// (0x0002fe5a) form_field_data_wide_pane_t1_ParamLimits

0x3593,	// (0x00032cb4) input_focus_pane_cp6_ParamLimits

0xcf8b,	// (0x0003c6ac) input_popup_find_pane_g1_ParamLimits

0xcf8b,	// (0x0003c6ac) input_popup_find_pane_g1

0x09b1,	// (0x000300d2) aid_navi_side_left_pane

0x09c6,	// (0x000300e7) aid_navi_side_right_pane

0x5684,	// (0x00034da5) bg_popup_window_pane_cp30_ParamLimits

0x5684,	// (0x00034da5) bg_popup_window_pane_cp30

0x56fe,	// (0x00034e1f) popup_midp_note_alarm_window_g1_ParamLimits

0x56fe,	// (0x00034e1f) popup_midp_note_alarm_window_g1

0x572e,	// (0x00034e4f) popup_midp_note_alarm_window_t1_ParamLimits

0x572e,	// (0x00034e4f) popup_midp_note_alarm_window_t1

0x57cf,	// (0x00034ef0) popup_midp_note_alarm_window_t2_ParamLimits

0x57cf,	// (0x00034ef0) popup_midp_note_alarm_window_t2

0x587d,	// (0x00034f9e) popup_midp_note_alarm_window_t3_ParamLimits

0x587d,	// (0x00034f9e) popup_midp_note_alarm_window_t3

0x58af,	// (0x00034fd0) popup_midp_note_alarm_window_t4_ParamLimits

0x58af,	// (0x00034fd0) popup_midp_note_alarm_window_t4

0x58d5,	// (0x00034ff6) popup_midp_note_alarm_window_t5_ParamLimits

0x58d5,	// (0x00034ff6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0003efc1) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0003efc1) popup_midp_note_alarm_window_t

0x5981,	// (0x000350a2) wait_bar_pane_cp1_ParamLimits

0x5981,	// (0x000350a2) wait_bar_pane_cp1

0x2852,	// (0x00031f73) wait_anim_pane_copy1

0x2852,	// (0x00031f73) wait_border_pane_copy1

0x536a,	// (0x00034a8b) wait_border_pane_g1_copy1

0x0753,	// (0x0002fe74) form_field_popup_pane_g1

0xb986,	// (0x0003b0a7) form_field_popup_pane_t1_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_cp7_ParamLimits

0x385c,	// (0x00032f7d) list_form_pane_ParamLimits

0x0773,	// (0x0002fe94) form_field_popup_wide_pane_g1

0x077b,	// (0x0002fe9c) form_field_popup_wide_pane_t1_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_cp8_ParamLimits

0x3868,	// (0x00032f89) list_form_wide_pane_ParamLimits

0x6461,	// (0x00035b82) aid_size_cell_graphic_pane

0xba05,	// (0x0003b126) data_form_pane_t1_ParamLimits

0xc501,	// (0x0003bc22) data_form_wide_pane_t1_ParamLimits

0xd3ec,	// (0x0003cb0d) bg_status_flat_pane

0xb4a0,	// (0x0003abc1) title_pane_t1_ParamLimits

0x28fa,	// (0x0003201b) title_pane_t2_ParamLimits

0x2920,	// (0x00032041) title_pane_t3_ParamLimits

0xf55d,	// (0x0003ec7e) title_pane_t_ParamLimits

0x3e1b,	// (0x0003353c) level_1_signal_ParamLimits

0x3e28,	// (0x00033549) level_2_signal_ParamLimits

0x3e35,	// (0x00033556) level_3_signal_ParamLimits

0x3e42,	// (0x00033563) level_4_signal_ParamLimits

0x3e4f,	// (0x00033570) level_5_signal_ParamLimits

0x3e5c,	// (0x0003357d) level_6_signal_ParamLimits

0x3e69,	// (0x0003358a) level_7_signal_ParamLimits

0x3e1b,	// (0x0003353c) level_1_battery_ParamLimits

0x3e28,	// (0x00033549) level_2_battery_ParamLimits

0x3e35,	// (0x00033556) level_3_battery_ParamLimits

0x3e42,	// (0x00033563) level_4_battery_ParamLimits

0x3e4f,	// (0x00033570) level_5_battery_ParamLimits

0x3e5c,	// (0x0003357d) level_6_battery_ParamLimits

0x3e69,	// (0x0003358a) level_7_battery_ParamLimits

0x5589,	// (0x00034caa) bg_status_flat_pane_g1

0x5591,	// (0x00034cb2) bg_status_flat_pane_g2

0x5599,	// (0x00034cba) bg_status_flat_pane_g3

0x55a1,	// (0x00034cc2) bg_status_flat_pane_g4

0x55a9,	// (0x00034cca) bg_status_flat_pane_g5

0x55b1,	// (0x00034cd2) bg_status_flat_pane_g6

0x55b9,	// (0x00034cda) bg_status_flat_pane_g7

0xcc7c,	// (0x0003c39d) tabs_3_active_pane_t1_ParamLimits

0xcc7c,	// (0x0003c39d) tabs_3_passive_pane_t1_ParamLimits

0xcc96,	// (0x0003c3b7) tabs_4_active_pane_t1_ParamLimits

0xcc96,	// (0x0003c3b7) tabs_4_1_passive_pane_t1_ParamLimits

0xcfa1,	// (0x0003c6c2) tabs_2_active_pane_t1_ParamLimits

0xcfa1,	// (0x0003c6c2) tabs_2_passive_pane_t1_ParamLimits

0x2932,	// (0x00032053) bg_active_tab_pane_cp4_ParamLimits

0xcfb3,	// (0x0003c6d4) tabs_2_long_active_pane_t1_ParamLimits

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp4_ParamLimits

0x15ec,	// (0x00030d0d) list_single_midp_graphic_pane_t1_ParamLimits

0x2932,	// (0x00032053) bg_active_tab_pane_cp5_ParamLimits

0xcfc6,	// (0x0003c6e7) tabs_3_long_active_pane_t1_ParamLimits

0x47c8,	// (0x00033ee9) bg_passive_tab_pane_cp5_ParamLimits

0x15ec,	// (0x00030d0d) list_single_midp_graphic_pane_t1

0xd3ec,	// (0x0003cb0d) bg_status_flat_pane_ParamLimits

0x4980,	// (0x000340a1) indicator_pane_cp2_ParamLimits

0x4980,	// (0x000340a1) indicator_pane_cp2

0xd564,	// (0x0003cc85) navi_pane_srt_ParamLimits

0xd564,	// (0x0003cc85) navi_pane_srt

0x4ac9,	// (0x000341ea) popup_clock_digital_analogue_window_cp1

0x2a0f,	// (0x00032130) indicator_pane_t1

0x4488,	// (0x00033ba9) copy_highlight_pane

0x4488,	// (0x00033ba9) cursor_graphics_pane

0x4488,	// (0x00033ba9) graphic_within_text_pane

0x4488,	// (0x00033ba9) link_highlight_pane

0x5d98,	// (0x000354b9) popup_preview_text_window_t5_ParamLimits

0x5d98,	// (0x000354b9) popup_preview_text_window_t5

0x45a8,	// (0x00033cc9) cursor_digital_pane

0x45a8,	// (0x00033cc9) cursor_primary_pane

0x45b9,	// (0x00033cda) cursor_primary_small_pane

0x45c1,	// (0x00033ce2) cursor_secondary_pane

0x45c9,	// (0x00033cea) cursor_title_pane

0x45a8,	// (0x00033cc9) link_highlight_digital_pane

0x45b0,	// (0x00033cd1) link_highlight_primary_pane

0x45b9,	// (0x00033cda) link_highlight_primary_small_pane

0x45c1,	// (0x00033ce2) link_highlight_secondary_pane

0x45c9,	// (0x00033cea) link_highlight_title_pane

0x45a8,	// (0x00033cc9) copy_highlight_digital_pane

0x45a8,	// (0x00033cc9) copy_highlight_primary_pane

0x45b9,	// (0x00033cda) copy_highlight_primary_small_pane

0x45c1,	// (0x00033ce2) copy_highlight_secondary_pane

0x45c9,	// (0x00033cea) copy_highlight_title_pane

0x45c1,	// (0x00033ce2) graphic_text_digital_pane

0x5627,	// (0x00034d48) graphic_text_primary_pane

0x5630,	// (0x00034d51) graphic_text_primary_small_pane

0x45b9,	// (0x00033cda) graphic_text_secondary_pane

0x45a8,	// (0x00033cc9) graphic_text_title_pane

0xd2c3,	// (0x0003c9e4) cursor_primary_pane_g1

0x5619,	// (0x00034d3a) cursor_text_primary_t1

0xd7f0,	// (0x0003cf11) cursor_primary_small_pane_g1

0x560b,	// (0x00034d2c) cursor_text_primary_small_t1

0xd7e6,	// (0x0003cf07) cursor_primary_small_pane_g1_copy1

0x55f3,	// (0x00034d14) cursor_text_primary_small_t1_copy1

0x55d1,	// (0x00034cf2) cursor_text_title_t1

0xd7dc,	// (0x0003cefd) cursor_title_pane_g1

0xd2c3,	// (0x0003c9e4) cursor_digital_pane_g1

0x45db,	// (0x00033cfc) cursor_text_digital_t1

0x4600,	// (0x00033d21) link_highlight_primary_pane_g1

0x557a,	// (0x00034c9b) link_highlight_primary_pane_t1

0x45e9,	// (0x00033d0a) link_highlight_primary_small_pane_g1

0x45f1,	// (0x00033d12) link_highlight_primary_small_pane_t1

0x4600,	// (0x00033d21) link_highlight_secondary_pane_g1

0x4608,	// (0x00033d29) link_highlight_secondary_pane_t1

0x54ee,	// (0x00034c0f) link_highlight_title_pane_g1

0x54f6,	// (0x00034c17) link_highlight_title_pane_t1

0x54d7,	// (0x00034bf8) link_highlight_digital_pane_g1

0x54df,	// (0x00034c00) link_highlight_digital_pane_t1

0x53af,	// (0x00034ad0) copy_highlight_primary_pane_g1

0x53b7,	// (0x00034ad8) copy_highlight_primary_pane_t1

0x5389,	// (0x00034aaa) copy_highlight_primary_small_pane_g1

0x53a0,	// (0x00034ac1) copy_highlight_primary_small_pane_t1

0x4617,	// (0x00033d38) copy_highlight_secondary_pane_g1

0x461f,	// (0x00033d40) copy_highlight_secondary_pane_t1

0x5389,	// (0x00034aaa) copy_highlight_title_pane_g1

0x5391,	// (0x00034ab2) copy_highlight_title_pane_t1

0x53af,	// (0x00034ad0) copy_highlight_digital_pane_g1

0x662b,	// (0x00035d4c) copy_highlight_digital_pane_t1

0x657f,	// (0x00035ca0) graphic_text_primary_pane_g1

0x660f,	// (0x00035d30) graphic_text_primary_pane_t1

0x661d,	// (0x00035d3e) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0003f0f0) graphic_text_primary_pane_t

0x65eb,	// (0x00035d0c) graphic_text_primary_small_pane_g1

0x65f3,	// (0x00035d14) graphic_text_primary_small_pane_t1

0x6601,	// (0x00035d22) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0003f0eb) graphic_text_primary_small_pane_t

0x65c7,	// (0x00035ce8) graphic_text_secondary_pane_g1

0x65cf,	// (0x00035cf0) graphic_text_secondary_pane_t1

0x65dd,	// (0x00035cfe) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0003f0e6) graphic_text_secondary_pane_t

0x65a3,	// (0x00035cc4) graphic_text_title_pane_g1

0x65ab,	// (0x00035ccc) graphic_text_title_pane_t1

0x65b9,	// (0x00035cda) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0003f0e1) graphic_text_title_pane_t

0x657f,	// (0x00035ca0) graphic_text_digital_pane_g1

0x6587,	// (0x00035ca8) graphic_text_digital_pane_t1

0x6595,	// (0x00035cb6) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0003f0dc) graphic_text_digital_pane_t

0x2932,	// (0x00032053) navi_icon_pane_srt_ParamLimits

0x2932,	// (0x00032053) navi_icon_pane_srt

0x2852,	// (0x00031f73) navi_midp_pane_srt

0x2852,	// (0x00031f73) navi_navi_pane_srt

0x2932,	// (0x00032053) navi_text_pane_srt_ParamLimits

0x2932,	// (0x00032053) navi_text_pane_srt

0x654a,	// (0x00035c6b) navi_navi_icon_text_pane_srt

0x6552,	// (0x00035c73) navi_navi_pane_srt_g1_ParamLimits

0x6552,	// (0x00035c73) navi_navi_pane_srt_g1

0x6564,	// (0x00035c85) navi_navi_pane_srt_g2_ParamLimits

0x6564,	// (0x00035c85) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0003f0d7) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0003f0d7) navi_navi_pane_srt_g

0x6576,	// (0x00035c97) navi_navi_tabs_pane_srt

0x654a,	// (0x00035c6b) navi_navi_text_pane_srt

0x654a,	// (0x00035c6b) navi_navi_volume_pane_srt

0x653b,	// (0x00035c5c) navi_navi_text_pane_srt_t1

0x1a6e,	// (0x0003118f) navi_navi_volume_pane_srt_g1

0x1a76,	// (0x00031197) volume_small_pane_srt_ParamLimits

0x1a76,	// (0x00031197) volume_small_pane_srt

0x0d1b,	// (0x0003043c) volume_small_pane_srt_g1_ParamLimits

0x0d1b,	// (0x0003043c) volume_small_pane_srt_g1

0x0d2b,	// (0x0003044c) volume_small_pane_srt_g2_ParamLimits

0x0d2b,	// (0x0003044c) volume_small_pane_srt_g2

0x0d3c,	// (0x0003045d) volume_small_pane_srt_g3_ParamLimits

0x0d3c,	// (0x0003045d) volume_small_pane_srt_g3

0x0d4d,	// (0x0003046e) volume_small_pane_srt_g4_ParamLimits

0x0d4d,	// (0x0003046e) volume_small_pane_srt_g4

0x0d5e,	// (0x0003047f) volume_small_pane_srt_g5_ParamLimits

0x0d5e,	// (0x0003047f) volume_small_pane_srt_g5

0x0d6f,	// (0x00030490) volume_small_pane_srt_g6_ParamLimits

0x0d6f,	// (0x00030490) volume_small_pane_srt_g6

0x0d80,	// (0x000304a1) volume_small_pane_srt_g7_ParamLimits

0x0d80,	// (0x000304a1) volume_small_pane_srt_g7

0x0d91,	// (0x000304b2) volume_small_pane_srt_g8_ParamLimits

0x0d91,	// (0x000304b2) volume_small_pane_srt_g8

0x0da2,	// (0x000304c3) volume_small_pane_srt_g9_ParamLimits

0x0da2,	// (0x000304c3) volume_small_pane_srt_g9

0x0db3,	// (0x000304d4) volume_small_pane_srt_g10_ParamLimits

0x0db3,	// (0x000304d4) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0003ee84) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0003ee84) volume_small_pane_srt_g

0x3390,	// (0x00032ab1) query_popup_data_pane_cp2

0x6521,	// (0x00035c42) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6521,	// (0x00035c42) navi_navi_icon_text_pane_srt_t1

0x5627,	// (0x00034d48) navi_tabs_2_long_pane_srt

0x5627,	// (0x00034d48) navi_tabs_2_pane_srt

0x5627,	// (0x00034d48) navi_tabs_3_long_pane_srt

0x5627,	// (0x00034d48) navi_tabs_3_pane_srt

0x5627,	// (0x00034d48) navi_tabs_4_pane_srt

0x1a4e,	// (0x0003116f) tabs_2_active_pane_srt_ParamLimits

0x1a4e,	// (0x0003116f) tabs_2_active_pane_srt

0x1a5e,	// (0x0003117f) tabs_2_passive_pane_srt_ParamLimits

0x1a5e,	// (0x0003117f) tabs_2_passive_pane_srt

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp1_srt

0x64ed,	// (0x00035c0e) bg_passive_tab_pane_g1_cp1_srt

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp1_srt

0x64f6,	// (0x00035c17) bg_passive_tab_pane_g3_cp1_srt

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp1_srt_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp1_srt

0x64ff,	// (0x00035c20) tabs_2_active_pane_srt_g1

0xdbe8,	// (0x0003d309) tabs_2_active_pane_srt_t1_ParamLimits

0xdbe8,	// (0x0003d309) tabs_2_active_pane_srt_t1

0x64ed,	// (0x00035c0e) bg_active_tab_pane_g1_cp1_srt

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp1_srt

0x64f6,	// (0x00035c17) bg_active_tab_pane_g3_cp1_srt

0x1a1b,	// (0x0003113c) tabs_3_active_pane_srt_ParamLimits

0x1a1b,	// (0x0003113c) tabs_3_active_pane_srt

0x1a2c,	// (0x0003114d) tabs_3_passive_pane_cp_srt_ParamLimits

0x1a2c,	// (0x0003114d) tabs_3_passive_pane_cp_srt

0x1a3d,	// (0x0003115e) tabs_3_passive_pane_srt_ParamLimits

0x1a3d,	// (0x0003115e) tabs_3_passive_pane_srt

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4dd7,	// (0x000344f8) bg_passive_tab_pane_cp2_srt

0x462e,	// (0x00033d4f) bg_passive_tab_pane_g1_cp2_srt

0x40d5,	// (0x000337f6) bg_passive_tab_pane_g2_cp2_srt

0x4637,	// (0x00033d58) bg_passive_tab_pane_g3_cp2_srt

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp2_srt_ParamLimits

0x2bad,	// (0x000322ce) bg_active_tab_pane_cp2_srt

0x64d3,	// (0x00035bf4) tabs_3_active_pane_srt_g1

0xdbd2,	// (0x0003d2f3) tabs_3_active_pane_srt_t1_ParamLimits

0xdbd2,	// (0x0003d2f3) tabs_3_active_pane_srt_t1

0x462e,	// (0x00033d4f) bg_active_tab_pane_g1_cp2_srt

0x40d5,	// (0x000337f6) bg_active_tab_pane_g2_cp2_srt

0x4637,	// (0x00033d58) bg_active_tab_pane_g3_cp2_srt

0x19d3,	// (0x000310f4) tabs_4_active_pane_srt_ParamLimits

0x19d3,	// (0x000310f4) tabs_4_active_pane_srt

0x19e5,	// (0x00031106) tabs_4_passive_pane_cp2_srt_ParamLimits

0x19e5,	// (0x00031106) tabs_4_passive_pane_cp2_srt

0x0f14,	// (0x00030635) aid_size_cell_toolbar

0x6158,	// (0x00035879) main_idle_act_pane_ParamLimits

0x10c9,	// (0x000307ea) popup_large_graphic_colour_window_ParamLimits

0xc2c3,	// (0x0003b9e4) popup_toolbar_window_ParamLimits

0xc2c3,	// (0x0003b9e4) popup_toolbar_window

0x632b,	// (0x00035a4c) list_single_graphic_2heading_pane_ParamLimits

0x632b,	// (0x00035a4c) list_single_graphic_2heading_pane

0x3bce,	// (0x000332ef) aid_size_cell_apps_grid_lsc_pane

0x3be0,	// (0x00033301) aid_size_cell_apps_grid_prt_pane

0x47c8,	// (0x00033ee9) bg_wml_button_pane_cp1_ParamLimits

0x47c8,	// (0x00033ee9) bg_wml_button_pane_cp1

0xd792,	// (0x0003ceb3) form_midp_field_text_pane_t1_ParamLimits

0x4dd7,	// (0x000344f8) input_focus_pane_cp050_ParamLimits

0x5044,	// (0x00034765) list_midp_form_text_pane_ParamLimits

0x4fea,	// (0x0003470b) input_focus_pane_cp051_ParamLimits

0x4ffe,	// (0x0003471f) list_midp_choice_pane_ParamLimits

0xd72f,	// (0x0003ce50) list_single_2graphic_pane_cp3_ParamLimits

0xd72f,	// (0x0003ce50) list_single_2graphic_pane_cp3

0xd742,	// (0x0003ce63) list_single_midp_graphic_pane_ParamLimits

0xd742,	// (0x0003ce63) list_single_midp_graphic_pane

0xf341,	// (0x0003ea62) list_single_graphic_2heading_pane_g1_ParamLimits

0xf341,	// (0x0003ea62) list_single_graphic_2heading_pane_g1

0xf34d,	// (0x0003ea6e) list_single_graphic_2heading_pane_g4_ParamLimits

0xf34d,	// (0x0003ea6e) list_single_graphic_2heading_pane_g4

0xf359,	// (0x0003ea7a) list_single_graphic_2heading_pane_g5_ParamLimits

0xf359,	// (0x0003ea7a) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0003eed7) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0003eed7) list_single_graphic_2heading_pane_g

0xf365,	// (0x0003ea86) list_single_graphic_2heading_pane_t1_ParamLimits

0xf365,	// (0x0003ea86) list_single_graphic_2heading_pane_t1

0xf379,	// (0x0003ea9a) list_single_graphic_2heading_pane_t2_ParamLimits

0xf379,	// (0x0003ea9a) list_single_graphic_2heading_pane_t2

0xf395,	// (0x0003eab6) list_single_graphic_2heading_pane_t3_ParamLimits

0xf395,	// (0x0003eab6) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0003eede) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0003eede) list_single_graphic_2heading_pane_t

0x4c1d,	// (0x0003433e) bg_popup_sub_pane_cp2

0x4c47,	// (0x00034368) grid_toobar_pane

0x14dd,	// (0x00030bfe) cell_toolbar_pane_ParamLimits

0x14dd,	// (0x00030bfe) cell_toolbar_pane

0x4c83,	// (0x000343a4) cell_toolbar_pane_g1_ParamLimits

0x4c83,	// (0x000343a4) cell_toolbar_pane_g1

0x4c97,	// (0x000343b8) cell_toolbar_pane_g2_ParamLimits

0x4c97,	// (0x000343b8) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0003eeec) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0003eeec) cell_toolbar_pane_g

0x4cb9,	// (0x000343da) grid_highlight_pane_cp2_ParamLimits

0x4cb9,	// (0x000343da) grid_highlight_pane_cp2

0x4cd3,	// (0x000343f4) toolbar_button_pane

0x4cdf,	// (0x00034400) toolbar_button_pane_g1

0x4ce7,	// (0x00034408) toolbar_button_pane_g2

0x4cef,	// (0x00034410) toolbar_button_pane_g3

0x4cf7,	// (0x00034418) toolbar_button_pane_g4

0x4cff,	// (0x00034420) toolbar_button_pane_g5

0x4d07,	// (0x00034428) toolbar_button_pane_g6

0x4d0f,	// (0x00034430) toolbar_button_pane_g7

0x4d17,	// (0x00034438) toolbar_button_pane_g8

0x4d1f,	// (0x00034440) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0003eef1) toolbar_button_pane_g

0x154f,	// (0x00030c70) list_single_2graphic_pane_g1_cp3_ParamLimits

0x154f,	// (0x00030c70) list_single_2graphic_pane_g1_cp3

0xc31b,	// (0x0003ba3c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc31b,	// (0x0003ba3c) list_single_2graphic_pane_g2_cp3

0x156c,	// (0x00030c8d) list_single_2graphic_pane_g3_cp3

0x1574,	// (0x00030c95) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1574,	// (0x00030c95) list_single_2graphic_pane_g4_cp3

0x1580,	// (0x00030ca1) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1580,	// (0x00030ca1) list_single_2graphic_pane_t1_cp3

0x15e0,	// (0x00030d01) list_single_midp_graphic_pane_g2_ParamLimits

0x15e0,	// (0x00030d01) list_single_midp_graphic_pane_g2

0x0f1c,	// (0x0003063d) aid_zoom_text_primary

0xf339,	// (0x0003ea5a) aid_zoom_text_secondary

0x46eb,	// (0x00033e0c) status_small_pane_g7_ParamLimits

0x46eb,	// (0x00033e0c) status_small_pane_g7

0x470e,	// (0x00033e2f) status_small_pane_t1_ParamLimits

0xb47c,	// (0x0003ab9d) title_pane_g2

0x0003,

0xf554,	// (0x0003ec75) title_pane_g

0xce4c,	// (0x0003c56d) aid_size_cell_colour_1_pane_ParamLimits

0xce4c,	// (0x0003c56d) aid_size_cell_colour_1_pane

0xce60,	// (0x0003c581) aid_size_cell_colour_2_pane_ParamLimits

0xce60,	// (0x0003c581) aid_size_cell_colour_2_pane

0xce74,	// (0x0003c595) aid_size_cell_colour_3_pane_ParamLimits

0xce74,	// (0x0003c595) aid_size_cell_colour_3_pane

0xce88,	// (0x0003c5a9) aid_size_cell_colour_4_pane_ParamLimits

0xce88,	// (0x0003c5a9) aid_size_cell_colour_4_pane

0x08ed,	// (0x0003000e) title_pane_stacon_g1_ParamLimits

0x08ed,	// (0x0003000e) title_pane_stacon_g1

0x540e,	// (0x00034b2f) popup_note_wait_window_g3_ParamLimits

0x540e,	// (0x00034b2f) popup_note_wait_window_g3

0x5484,	// (0x00034ba5) popup_note_wait_window_t5_ParamLimits

0x5484,	// (0x00034ba5) popup_note_wait_window_t5

0x2852,	// (0x00031f73) main_feb_china_hwr_fs_writing_pane

0xbcd1,	// (0x0003b3f2) popup_feb_china_hwr_fs_window_ParamLimits

0xbcd1,	// (0x0003b3f2) popup_feb_china_hwr_fs_window

0xc32c,	// (0x0003ba4d) aid_size_cell_hwr_fs_ParamLimits

0xc32c,	// (0x0003ba4d) aid_size_cell_hwr_fs

0x4dd7,	// (0x000344f8) bg_popup_sub_pane_cp3_ParamLimits

0x4dd7,	// (0x000344f8) bg_popup_sub_pane_cp3

0xc341,	// (0x0003ba62) grid_hwr_fs_pane_ParamLimits

0xc341,	// (0x0003ba62) grid_hwr_fs_pane

0x162f,	// (0x00030d50) linegrid_hwr_fs_pane_ParamLimits

0x162f,	// (0x00030d50) linegrid_hwr_fs_pane

0xc359,	// (0x0003ba7a) cell_hwr_fs_pane_ParamLimits

0xc359,	// (0x0003ba7a) cell_hwr_fs_pane

0x4de3,	// (0x00034504) linegrid_hwr_fs_pane_g1_ParamLimits

0x4de3,	// (0x00034504) linegrid_hwr_fs_pane_g1

0xd703,	// (0x0003ce24) linegrid_hwr_fs_pane_g2_ParamLimits

0xd703,	// (0x0003ce24) linegrid_hwr_fs_pane_g2

0x4e01,	// (0x00034522) linegrid_hwr_fs_pane_g3_ParamLimits

0x4e01,	// (0x00034522) linegrid_hwr_fs_pane_g3

0x1661,	// (0x00030d82) linegrid_hwr_fs_pane_g4_ParamLimits

0x1661,	// (0x00030d82) linegrid_hwr_fs_pane_g4

0x167b,	// (0x00030d9c) linegrid_hwr_fs_pane_g5_ParamLimits

0x167b,	// (0x00030d9c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0003ef17) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0003ef17) linegrid_hwr_fs_pane_g

0x4e0d,	// (0x0003452e) cell_hwr_fs_pane_g1_ParamLimits

0x4e0d,	// (0x0003452e) cell_hwr_fs_pane_g1

0x4b57,	// (0x00034278) cell_hwr_fs_pane_g2_ParamLimits

0x4b57,	// (0x00034278) cell_hwr_fs_pane_g2

0xd715,	// (0x0003ce36) cell_hwr_fs_pane_g3_ParamLimits

0xd715,	// (0x0003ce36) cell_hwr_fs_pane_g3

0xd722,	// (0x0003ce43) cell_hwr_fs_pane_g4_ParamLimits

0xd722,	// (0x0003ce43) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0003ef22) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0003ef22) cell_hwr_fs_pane_g

0xc37f,	// (0x0003baa0) cell_hwr_fs_pane_t1

0x2852,	// (0x00031f73) grid_highlight_pane_cp6

0x2852,	// (0x00031f73) main_idle_act2_pane

0x3985,	// (0x000330a6) aid_inside_area_popup_secondary

0xd857,	// (0x0003cf78) aid_inside_area_window_primary_ParamLimits

0xd857,	// (0x0003cf78) aid_inside_area_window_primary

0x663a,	// (0x00035d5b) ai2_news_ticker_pane

0x6642,	// (0x00035d63) aid_size_cell_ai1_link_ParamLimits

0x6642,	// (0x00035d63) aid_size_cell_ai1_link

0xdbfe,	// (0x0003d31f) popup_ai2_data_window_ParamLimits

0xdbfe,	// (0x0003d31f) popup_ai2_data_window

0x6672,	// (0x00035d93) popup_ai2_link_window_ParamLimits

0x6672,	// (0x00035d93) popup_ai2_link_window

0x4dd7,	// (0x000344f8) bg_popup_sub_pane_cp4_ParamLimits

0x4dd7,	// (0x000344f8) bg_popup_sub_pane_cp4

0x6686,	// (0x00035da7) grid_ai2_link_pane_ParamLimits

0x6686,	// (0x00035da7) grid_ai2_link_pane

0x669d,	// (0x00035dbe) popup_ai2_link_window_g1_ParamLimits

0x669d,	// (0x00035dbe) popup_ai2_link_window_g1

0x66a9,	// (0x00035dca) popup_ai2_link_window_g2_ParamLimits

0x66a9,	// (0x00035dca) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0003f0f5) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0003f0f5) popup_ai2_link_window_g

0x66b8,	// (0x00035dd9) ai2_mp_button_pane

0x66c0,	// (0x00035de1) ai2_mp_volume_pane

0x4fea,	// (0x0003470b) bg_popup_sub_pane_cp5_ParamLimits

0x4fea,	// (0x0003470b) bg_popup_sub_pane_cp5

0x66c8,	// (0x00035de9) heading_ai2_gene_pane_ParamLimits

0x66c8,	// (0x00035de9) heading_ai2_gene_pane

0x66d4,	// (0x00035df5) list_ai2_gene_pane_ParamLimits

0x66d4,	// (0x00035df5) list_ai2_gene_pane

0x671c,	// (0x00035e3d) cell_ai2_link_pane_ParamLimits

0x671c,	// (0x00035e3d) cell_ai2_link_pane

0x6732,	// (0x00035e53) cell_ai2_link_pane_g1

0x2852,	// (0x00031f73) grid_highlight_pane_cp7

0x1a8b,	// (0x000311ac) ai2_mp_volume_pane_g1

0x6844,	// (0x00035f65) ai2_mp_volume_pane_g2

0xdc28,	// (0x0003d349) list_ai2_gene_pane_t1

0x684c,	// (0x00035f6d) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0003f10e) ai2_mp_volume_pane_g

0x1a93,	// (0x000311b4) volume_small_pane_cp3

0x6854,	// (0x00035f75) aid_size_cell_ai2_button

0x685c,	// (0x00035f7d) grid_ai2_button_pane

0x6865,	// (0x00035f86) cell_ai2_button_pane_ParamLimits

0x6865,	// (0x00035f86) cell_ai2_button_pane

0x2848,	// (0x00031f69) cell_ai2_button_pane_g1

0x2852,	// (0x00031f73) grid_highlight_pane_cp8

0x67c2,	// (0x00035ee3) ai2_gene_pane_t1_ParamLimits

0x67c2,	// (0x00035ee3) ai2_gene_pane_t1

0xbc5b,	// (0x0003b37c) aid_height_parent_landscape

0xd9ac,	// (0x0003d0cd) aid_height_set_list

0x6158,	// (0x00035879) aid_size_parent

0x6461,	// (0x00035b82) aid_size_cell_graphic_pane_ParamLimits

0x66e4,	// (0x00035e05) popup_ai2_data_window_g1_ParamLimits

0x66e4,	// (0x00035e05) popup_ai2_data_window_g1

0x66f0,	// (0x00035e11) ai2_news_ticker_pane_g1

0x66f8,	// (0x00035e19) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0003f0fa) ai2_news_ticker_pane_g

0x6700,	// (0x00035e21) ai2_news_ticker_pane_t1

0x670e,	// (0x00035e2f) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0003f0ff) ai2_news_ticker_pane_t

0x673b,	// (0x00035e5c) heading_ai2_gene_pane_g1

0x6743,	// (0x00035e64) heading_ai2_gene_pane_t1_ParamLimits

0x6743,	// (0x00035e64) heading_ai2_gene_pane_t1

0x6758,	// (0x00035e79) list_highlight_pane_cp6

0xdc12,	// (0x0003d333) ai2_gene_pane_ParamLimits

0xdc12,	// (0x0003d333) ai2_gene_pane

0xdc36,	// (0x0003d357) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0003f104) list_ai2_gene_pane_t

0x6793,	// (0x00035eb4) list_highlight_pane_cp8_ParamLimits

0x6793,	// (0x00035eb4) list_highlight_pane_cp8

0x67a4,	// (0x00035ec5) ai2_gene_pane_g1_ParamLimits

0x67a4,	// (0x00035ec5) ai2_gene_pane_g1

0x67b6,	// (0x00035ed7) ai2_gene_pane_g2_ParamLimits

0x67b6,	// (0x00035ed7) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0003f109) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0003f109) ai2_gene_pane_g

0x37b8,	// (0x00032ed9) scroll_pane_cp12

0xbc1a,	// (0x0003b33b) control_pane_t3_ParamLimits

0xbc1a,	// (0x0003b33b) control_pane_t3

0x46ff,	// (0x00033e20) status_small_pane_g8_ParamLimits

0x46ff,	// (0x00033e20) status_small_pane_g8

0xbd66,	// (0x0003b487) popup_find_window_ParamLimits

0xbfed,	// (0x0003b70e) popup_note_image_window_ParamLimits

0x150d,	// (0x00030c2e) list_double2_graphic_pane_vc_g1_ParamLimits

0x150d,	// (0x00030c2e) list_double2_graphic_pane_vc_g1

0x1519,	// (0x00030c3a) list_double2_graphic_pane_vc_g2_ParamLimits

0x1519,	// (0x00030c3a) list_double2_graphic_pane_vc_g2

0x1525,	// (0x00030c46) list_double2_graphic_pane_vc_g3_ParamLimits

0x1525,	// (0x00030c46) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0003eee5) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0003eee5) list_double2_graphic_pane_vc_g

0x1531,	// (0x00030c52) list_double2_graphic_pane_vc_t1_ParamLimits

0x1531,	// (0x00030c52) list_double2_graphic_pane_vc_t1

0x159c,	// (0x00030cbd) list_single_heading_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_heading_pane_vc_g1

0x15a8,	// (0x00030cc9) list_single_heading_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_heading_pane_vc_g

0x15b4,	// (0x00030cd5) list_single_heading_pane_vc_t1_ParamLimits

0x15b4,	// (0x00030cd5) list_single_heading_pane_vc_t1

0x15cc,	// (0x00030ced) list_single_heading_pane_vc_t2_ParamLimits

0x15cc,	// (0x00030ced) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0003ef06) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0003ef06) list_single_heading_pane_vc_t

0x4d27,	// (0x00034448) list_setting_number_pane_vc_g1_ParamLimits

0x4d27,	// (0x00034448) list_setting_number_pane_vc_g1

0x4d33,	// (0x00034454) list_setting_number_pane_vc_g2_ParamLimits

0x4d33,	// (0x00034454) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003ef0b) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003ef0b) list_setting_number_pane_vc_g

0x4d3f,	// (0x00034460) list_setting_number_pane_vc_t1_ParamLimits

0x4d3f,	// (0x00034460) list_setting_number_pane_vc_t1

0x4d53,	// (0x00034474) list_setting_number_pane_vc_t2_ParamLimits

0x4d53,	// (0x00034474) list_setting_number_pane_vc_t2

0x4d6f,	// (0x00034490) list_setting_number_pane_vc_t3_ParamLimits

0x4d6f,	// (0x00034490) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0003ef10) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0003ef10) list_setting_number_pane_vc_t

0x4d9b,	// (0x000344bc) set_value_pane_vc_ParamLimits

0x4d9b,	// (0x000344bc) set_value_pane_vc

0x632b,	// (0x00035a4c) list_double2_graphic_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double2_graphic_pane_vc

0x632b,	// (0x00035a4c) list_double2_large_graphic_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double2_large_graphic_pane_vc

0x632b,	// (0x00035a4c) list_double2_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double2_pane_vc

0x632b,	// (0x00035a4c) list_double_graphic_heading_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_graphic_heading_pane_vc

0x632b,	// (0x00035a4c) list_double_graphic_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_graphic_pane_vc

0x632b,	// (0x00035a4c) list_double_heading_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_heading_pane_vc

0x632b,	// (0x00035a4c) list_double_large_graphic_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_large_graphic_pane_vc

0x632b,	// (0x00035a4c) list_double_number_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_number_pane_vc

0x632b,	// (0x00035a4c) list_double_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_pane_vc

0x632b,	// (0x00035a4c) list_double_time_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_double_time_pane_vc

0x632b,	// (0x00035a4c) list_setting_number_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_setting_number_pane_vc

0x632b,	// (0x00035a4c) list_setting_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_setting_pane_vc

0x632b,	// (0x00035a4c) list_single_graphic_heading_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_single_graphic_heading_pane_vc

0x632b,	// (0x00035a4c) list_single_heading_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_single_heading_pane_vc

0x632b,	// (0x00035a4c) list_single_number_heading_pane_vc_ParamLimits

0x632b,	// (0x00035a4c) list_single_number_heading_pane_vc

0x2c9c,	// (0x000323bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2c9c,	// (0x000323bd) list_double_graphic_heading_pane_vc_g1

0x159c,	// (0x00030cbd) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x159c,	// (0x00030cbd) list_double_graphic_heading_pane_vc_g2

0x15a8,	// (0x00030cc9) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0003f115) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0003f115) list_double_graphic_heading_pane_vc_g

0x2ca8,	// (0x000323c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2ca8,	// (0x000323c9) list_double_graphic_heading_pane_vc_t1

0x15b4,	// (0x00030cd5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x15b4,	// (0x00030cd5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0003f11c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0003f11c) list_double_graphic_heading_pane_vc_t

0x4d27,	// (0x00034448) list_setting_pane_vc_g1_ParamLimits

0x4d27,	// (0x00034448) list_setting_pane_vc_g1

0x4d33,	// (0x00034454) list_setting_pane_vc_g2_ParamLimits

0x4d33,	// (0x00034454) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0003ef0b) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0003ef0b) list_setting_pane_vc_g

0x6aa5,	// (0x000361c6) list_setting_pane_vc_t1_ParamLimits

0x6aa5,	// (0x000361c6) list_setting_pane_vc_t1

0x6ac1,	// (0x000361e2) list_setting_pane_vc_t2_ParamLimits

0x6ac1,	// (0x000361e2) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0003f15f) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003f15f) list_setting_pane_vc_t

0x4d9b,	// (0x000344bc) set_value_pane_cp_vc_ParamLimits

0x4d9b,	// (0x000344bc) set_value_pane_cp_vc

0x159c,	// (0x00030cbd) list_single_number_heading_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_single_number_heading_pane_vc_g1

0x15a8,	// (0x00030cc9) list_single_number_heading_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_single_number_heading_pane_vc_g

0x15b4,	// (0x00030cd5) list_single_number_heading_pane_vc_t1_ParamLimits

0x15b4,	// (0x00030cd5) list_single_number_heading_pane_vc_t1

0x2cbc,	// (0x000323dd) list_single_number_heading_pane_vc_t2_ParamLimits

0x2cbc,	// (0x000323dd) list_single_number_heading_pane_vc_t2

0x2cd0,	// (0x000323f1) list_single_number_heading_pane_vc_t3_ParamLimits

0x2cd0,	// (0x000323f1) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0003f164) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0003f164) list_single_number_heading_pane_vc_t

0x150d,	// (0x00030c2e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x150d,	// (0x00030c2e) list_single_graphic_heading_pane_vc_g1

0x159c,	// (0x00030cbd) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x159c,	// (0x00030cbd) list_single_graphic_heading_pane_vc_g4

0x15a8,	// (0x00030cc9) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x15a8,	// (0x00030cc9) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa4a,	// (0x0003f16b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa4a,	// (0x0003f16b) list_single_graphic_heading_pane_vc_g

0x15b4,	// (0x00030cd5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x15b4,	// (0x00030cd5) list_single_graphic_heading_pane_vc_t1

0x2ce2,	// (0x00032403) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2ce2,	// (0x00032403) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa51,	// (0x0003f172) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa51,	// (0x0003f172) list_single_graphic_heading_pane_vc_t

0x159c,	// (0x00030cbd) list_double2_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_double2_pane_vc_g1

0x15a8,	// (0x00030cc9) list_double2_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_double2_pane_vc_g

0x2cf6,	// (0x00032417) list_double2_pane_vc_t1_ParamLimits

0x2cf6,	// (0x00032417) list_double2_pane_vc_t1

0x2d0c,	// (0x0003242d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2d0c,	// (0x0003242d) list_double2_large_graphic_pane_vc_g1

0x159c,	// (0x00030cbd) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x159c,	// (0x00030cbd) list_double2_large_graphic_pane_vc_g2

0x15a8,	// (0x00030cc9) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0003ed0c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0003ed0c) list_double2_large_graphic_pane_vc_g

0x2d18,	// (0x00032439) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2d18,	// (0x00032439) list_double2_large_graphic_pane_vc_t1

0x2d2e,	// (0x0003244f) list_double_time_pane_vc_g1_ParamLimits

0x2d2e,	// (0x0003244f) list_double_time_pane_vc_g1

0x2d3a,	// (0x0003245b) list_double_time_pane_vc_g2_ParamLimits

0x2d3a,	// (0x0003245b) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0003f177) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0003f177) list_double_time_pane_vc_g

0x2d46,	// (0x00032467) list_double_time_pane_vc_t1_ParamLimits

0x2d46,	// (0x00032467) list_double_time_pane_vc_t1

0x2d6a,	// (0x0003248b) list_double_time_pane_vc_t2_ParamLimits

0x2d6a,	// (0x0003248b) list_double_time_pane_vc_t2

0x2db4,	// (0x000324d5) list_double_time_pane_vc_t3_ParamLimits

0x2db4,	// (0x000324d5) list_double_time_pane_vc_t3

0x2dc6,	// (0x000324e7) list_double_time_pane_vc_t4_ParamLimits

0x2dc6,	// (0x000324e7) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0003f17c) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0003f17c) list_double_time_pane_vc_t

0x159c,	// (0x00030cbd) list_double_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_double_pane_vc_g1

0x15a8,	// (0x00030cc9) list_double_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_double_pane_vc_g

0x2deb,	// (0x0003250c) list_double_pane_vc_t1_ParamLimits

0x2deb,	// (0x0003250c) list_double_pane_vc_t1

0x2dff,	// (0x00032520) list_double_pane_vc_t2_ParamLimits

0x2dff,	// (0x00032520) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0003f185) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0003f185) list_double_pane_vc_t

0x159c,	// (0x00030cbd) list_double_number_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_double_number_pane_vc_g1

0x15a8,	// (0x00030cc9) list_double_number_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_double_number_pane_vc_g

0x2e17,	// (0x00032538) list_double_number_pane_vc_t1_ParamLimits

0x2e17,	// (0x00032538) list_double_number_pane_vc_t1

0x2e2b,	// (0x0003254c) list_double_number_pane_vc_t2_ParamLimits

0x2e2b,	// (0x0003254c) list_double_number_pane_vc_t2

0x2dff,	// (0x00032520) list_double_number_pane_vc_t3_ParamLimits

0x2dff,	// (0x00032520) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0003f18a) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0003f18a) list_double_number_pane_vc_t

0x2e3f,	// (0x00032560) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2e3f,	// (0x00032560) list_double_large_graphic_pane_vc_g1

0x2e50,	// (0x00032571) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2e50,	// (0x00032571) list_double_large_graphic_pane_vc_g2

0x15a8,	// (0x00030cc9) list_double_large_graphic_pane_vc_g3_ParamLimits

0x15a8,	// (0x00030cc9) list_double_large_graphic_pane_vc_g3

0x2e5f,	// (0x00032580) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2e5f,	// (0x00032580) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0003f191) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0003f191) list_double_large_graphic_pane_vc_g

0x2e6b,	// (0x0003258c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2e6b,	// (0x0003258c) list_double_large_graphic_pane_vc_t1

0x2e84,	// (0x000325a5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2e84,	// (0x000325a5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0003f19a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0003f19a) list_double_large_graphic_pane_vc_t

0x159c,	// (0x00030cbd) list_double_heading_pane_vc_g1_ParamLimits

0x159c,	// (0x00030cbd) list_double_heading_pane_vc_g1

0x15a8,	// (0x00030cc9) list_double_heading_pane_vc_g2_ParamLimits

0x15a8,	// (0x00030cc9) list_double_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0003ecef) list_double_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0003ecef) list_double_heading_pane_vc_g

0x2e9d,	// (0x000325be) list_double_heading_pane_vc_t1_ParamLimits

0x2e9d,	// (0x000325be) list_double_heading_pane_vc_t1

0x15b4,	// (0x00030cd5) list_double_heading_pane_vc_t2_ParamLimits

0x15b4,	// (0x00030cd5) list_double_heading_pane_vc_t2

0x0001,

0xfa7e,	// (0x0003f19f) list_double_heading_pane_vc_t_ParamLimits

0xfa7e,	// (0x0003f19f) list_double_heading_pane_vc_t

0x2eb1,	// (0x000325d2) list_double_graphic_pane_vc_g1_ParamLimits

0x2eb1,	// (0x000325d2) list_double_graphic_pane_vc_g1

0x2ec1,	// (0x000325e2) list_double_graphic_pane_vc_g2_ParamLimits

0x2ec1,	// (0x000325e2) list_double_graphic_pane_vc_g2

0x2ed0,	// (0x000325f1) list_double_graphic_pane_vc_g3_ParamLimits

0x2ed0,	// (0x000325f1) list_double_graphic_pane_vc_g3

0x0002,

0xfa83,	// (0x0003f1a4) list_double_graphic_pane_vc_g_ParamLimits

0xfa83,	// (0x0003f1a4) list_double_graphic_pane_vc_g

0x2edc,	// (0x000325fd) list_double_graphic_pane_vc_t1_ParamLimits

0x2edc,	// (0x000325fd) list_double_graphic_pane_vc_t1

0x2dff,	// (0x00032520) list_double_graphic_pane_vc_t2_ParamLimits

0x2dff,	// (0x00032520) list_double_graphic_pane_vc_t2

0x0001,

0xfa8a,	// (0x0003f1ab) list_double_graphic_pane_vc_t_ParamLimits

0xfa8a,	// (0x0003f1ab) list_double_graphic_pane_vc_t

0xf331,	// (0x0003ea52) aid_size_cell_fastswap

0xb2c8,	// (0x0003a9e9) aid_size_cell_touch_ParamLimits

0xb2c8,	// (0x0003a9e9) aid_size_cell_touch

0xf526,	// (0x0003ec47) popup_fast_swap_wide_window_ParamLimits

0xf526,	// (0x0003ec47) popup_fast_swap_wide_window

0xb413,	// (0x0003ab34) touch_pane_ParamLimits

0xb413,	// (0x0003ab34) touch_pane

0x380e,	// (0x00032f2f) button_value_adjust_pane_cp2

0x065f,	// (0x0002fd80) button_value_adjust_pane_cp4

0x067f,	// (0x0002fda0) form_field_data_pane_cp2

0xb929,	// (0x0003b04a) form_field_data_wide_pane_cp2

0x3c99,	// (0x000333ba) bg_scroll_pane_ParamLimits

0x0a50,	// (0x00030171) scroll_handle_pane_ParamLimits

0x0a64,	// (0x00030185) scroll_sc2_down_pane_ParamLimits

0x0a64,	// (0x00030185) scroll_sc2_down_pane

0x3cca,	// (0x000333eb) scroll_sc2_up_pane_ParamLimits

0x3cca,	// (0x000333eb) scroll_sc2_up_pane

0xdd60,	// (0x0003d481) grid_wheel_folder_pane_g1_ParamLimits

0xdd60,	// (0x0003d481) grid_wheel_folder_pane_g1

0x0cb3,	// (0x000303d4) clock_nsta_pane_cp2_ParamLimits

0x0cb3,	// (0x000303d4) clock_nsta_pane_cp2

0x47c8,	// (0x00033ee9) listscroll_midp_pane_ParamLimits

0xd22c,	// (0x0003c94d) midp_canvas_pane

0x477a,	// (0x00033e9b) nsta_clock_indic_pane

0x47ae,	// (0x00033ecf) listscroll_form_pane_vc

0x47b6,	// (0x00033ed7) listscroll_set_pane_vc_ParamLimits

0x47b6,	// (0x00033ed7) listscroll_set_pane_vc

0xd414,	// (0x0003cb35) clock_nsta_pane

0xd43e,	// (0x0003cb5f) indicator_nsta_pane

0x4c1d,	// (0x0003433e) bg_popup_sub_pane_cp2_ParamLimits

0x4c31,	// (0x00034352) find_pane_cp2_ParamLimits

0x4c31,	// (0x00034352) find_pane_cp2

0x4c47,	// (0x00034368) grid_toobar_pane_ParamLimits

0x4dab,	// (0x000344cc) list_form_gen_pane_vc_ParamLimits

0x4dab,	// (0x000344cc) list_form_gen_pane_vc

0x4dc1,	// (0x000344e2) scroll_pane_cp8_vc_ParamLimits

0x4dc1,	// (0x000344e2) scroll_pane_cp8_vc

0x4e3d,	// (0x0003455e) data_form_wide_pane_vc_ParamLimits

0x4e3d,	// (0x0003455e) data_form_wide_pane_vc

0x4e49,	// (0x0003456a) form_field_data_wide_pane_vc_g1

0x4e51,	// (0x00034572) form_field_data_wide_pane_vc_t1_ParamLimits

0x4e51,	// (0x00034572) form_field_data_wide_pane_vc_t1

0x3822,	// (0x00032f43) input_focus_pane_cp6_vc_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_cp6_vc

0xd7b4,	// (0x0003ced5) list_midp_pane_ParamLimits

0x64c7,	// (0x00035be8) scroll_pane_cp16_ParamLimits

0x64c7,	// (0x00035be8) scroll_pane_cp16

0x51d7,	// (0x000348f8) button_value_adjust_pane_ParamLimits

0x51d7,	// (0x000348f8) button_value_adjust_pane

0xd9bd,	// (0x0003d0de) button_value_adjust_pane_cp6_ParamLimits

0xd9bd,	// (0x0003d0de) button_value_adjust_pane_cp6

0xdad7,	// (0x0003d1f8) settings_code_pane_cp_ParamLimits

0xdad7,	// (0x0003d1f8) settings_code_pane_cp

0x2848,	// (0x00031f69) cell_touch_pane_g1

0x2848,	// (0x00031f69) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0003ee2a) cell_touch_pane_g

0xdc44,	// (0x0003d365) cell_touch_pane_cp_ParamLimits

0xdc44,	// (0x0003d365) cell_touch_pane_cp

0xdc60,	// (0x0003d381) cell_touch_pane_ParamLimits

0xdc60,	// (0x0003d381) cell_touch_pane

0x2848,	// (0x00031f69) scroll_sc2_down_pane_g1

0x2848,	// (0x00031f69) scroll_sc2_up_pane_g1

0x2852,	// (0x00031f73) bg_set_opt_pane_cp4_vc

0x6899,	// (0x00035fba) list_set_graphic_pane_vc_g1_ParamLimits

0x6899,	// (0x00035fba) list_set_graphic_pane_vc_g1

0x68a5,	// (0x00035fc6) list_set_graphic_pane_vc_g2_ParamLimits

0x68a5,	// (0x00035fc6) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0003f121) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0003f121) list_set_graphic_pane_vc_g

0x68b1,	// (0x00035fd2) text_primary_small_cp13_vc_ParamLimits

0x68b1,	// (0x00035fd2) text_primary_small_cp13_vc

0x68c9,	// (0x00035fea) list_set_graphic_pane_vc_ParamLimits

0x68c9,	// (0x00035fea) list_set_graphic_pane_vc

0x2852,	// (0x00031f73) input_focus_pane_cp2_vc

0x2848,	// (0x00031f69) setting_code_pane_vc_g1

0x297d,	// (0x0003209e) setting_code_pane_vc_t1

0x68db,	// (0x00035ffc) set_text_pane_vc_t1_ParamLimits

0x68db,	// (0x00035ffc) set_text_pane_vc_t1

0x2852,	// (0x00031f73) input_focus_pane_cp1_vc

0x68f6,	// (0x00036017) list_set_text_pane_vc

0x2848,	// (0x00031f69) setting_text_pane_vc_g1

0x2852,	// (0x00031f73) bg_set_opt_pane_cp2_vc

0x2974,	// (0x00032095) setting_slider_graphic_pane_vc_g1

0x6900,	// (0x00036021) setting_slider_graphic_pane_vc_t1

0x6910,	// (0x00036031) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0003f126) setting_slider_graphic_pane_vc_t

0x6920,	// (0x00036041) slider_set_pane_cp_vc

0x6928,	// (0x00036049) slider_set_pane_vc_g1

0x6931,	// (0x00036052) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0003f12b) slider_set_pane_vc_g

0x3889,	// (0x00032faa) set_opt_bg_pane_g1_copy1

0x3891,	// (0x00032fb2) set_opt_bg_pane_g2_copy1

0x695d,	// (0x0003607e) set_opt_bg_pane_g3_copy1

0x38a1,	// (0x00032fc2) set_opt_bg_pane_g4_copy1

0x38a9,	// (0x00032fca) set_opt_bg_pane_g5_copy1

0x38b1,	// (0x00032fd2) set_opt_bg_pane_g6_copy1

0x6967,	// (0x00036088) set_opt_bg_pane_g7_copy1

0x696f,	// (0x00036090) set_opt_bg_pane_g8_copy1

0x6979,	// (0x0003609a) set_opt_bg_pane_g9_copy1

0x2852,	// (0x00031f73) bg_set_opt_pane_cp_vc

0x6983,	// (0x000360a4) setting_slider_pane_vc_t1

0x6992,	// (0x000360b3) setting_slider_pane_vc_t2

0x69a2,	// (0x000360c3) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0003f13a) setting_slider_pane_vc_t

0x69b2,	// (0x000360d3) slider_set_pane_vc

0x16e0,	// (0x00030e01) volume_set_pane_vc_g1

0x16e9,	// (0x00030e0a) volume_set_pane_vc_g2

0x16f2,	// (0x00030e13) volume_set_pane_vc_g3

0x16fb,	// (0x00030e1c) volume_set_pane_vc_g4

0x1704,	// (0x00030e25) volume_set_pane_vc_g5

0x170d,	// (0x00030e2e) volume_set_pane_vc_g6

0x1716,	// (0x00030e37) volume_set_pane_vc_g7

0x171f,	// (0x00030e40) volume_set_pane_vc_g8

0x1728,	// (0x00030e49) volume_set_pane_vc_g9

0x1731,	// (0x00030e52) volume_set_pane_vc_g10

0x0009,

0xfa20,	// (0x0003f141) volume_set_pane_vc_g

0x69ba,	// (0x000360db) volume_set_pane_vc

0x69c2,	// (0x000360e3) button_value_adjust_pane_cp1_vc

0x69cc,	// (0x000360ed) list_highlight_pane_cp2_vc

0x69d5,	// (0x000360f6) list_set_pane_vc_ParamLimits

0x69d5,	// (0x000360f6) list_set_pane_vc

0x6a33,	// (0x00036154) main_pane_set_vc_t1_ParamLimits

0x6a33,	// (0x00036154) main_pane_set_vc_t1

0x6a48,	// (0x00036169) main_pane_set_vc_t2_ParamLimits

0x6a48,	// (0x00036169) main_pane_set_vc_t2

0x6a5a,	// (0x0003617b) main_pane_set_vc_t3_ParamLimits

0x6a5a,	// (0x0003617b) main_pane_set_vc_t3

0x6a6e,	// (0x0003618f) main_pane_set_vc_t4_ParamLimits

0x6a6e,	// (0x0003618f) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0003f156) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0003f156) main_pane_set_vc_t

0x6a82,	// (0x000361a3) setting_code_pane_vc_ParamLimits

0x6a82,	// (0x000361a3) setting_code_pane_vc

0x6a93,	// (0x000361b4) setting_slider_graphic_pane_vc

0x6a93,	// (0x000361b4) setting_slider_pane_vc

0x6a93,	// (0x000361b4) setting_text_pane_vc

0x6a93,	// (0x000361b4) setting_volume_pane_vc

0x6a9d,	// (0x000361be) scroll_pane_cp121_vc

0x37fc,	// (0x00032f1d) set_content_pane_vc

0x6add,	// (0x000361fe) button_value_adjust_pane_g1

0x6ae6,	// (0x00036207) button_value_adjust_pane_g2

0x0001,

0xfa8f,	// (0x0003f1b0) button_value_adjust_pane_g

0x6aef,	// (0x00036210) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6aef,	// (0x00036210) form_field_slider_wide_pane_vc_t1

0x6b03,	// (0x00036224) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6b03,	// (0x00036224) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa94,	// (0x0003f1b5) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x0003f1b5) form_field_slider_wide_pane_vc_t

0x2bad,	// (0x000322ce) input_focus_pane_cp10_vc_ParamLimits

0x2bad,	// (0x000322ce) input_focus_pane_cp10_vc

0x6b31,	// (0x00036252) slider_cont_pane_cp1_vc_ParamLimits

0x6b31,	// (0x00036252) slider_cont_pane_cp1_vc

0x6b43,	// (0x00036264) slider_form_pane_g1_cp2

0x6931,	// (0x00036052) slider_form_pane_g2_cp2

0x6b70,	// (0x00036291) form_field_slider_pane_vc_t3

0x6b7e,	// (0x0003629f) form_field_slider_pane_vc_t4

0x6b8c,	// (0x000362ad) slider_form_pane_vc_ParamLimits

0x6b8c,	// (0x000362ad) slider_form_pane_vc

0x6b99,	// (0x000362ba) form_field_slider_pane_vc_t1_ParamLimits

0x6b99,	// (0x000362ba) form_field_slider_pane_vc_t1

0x6b03,	// (0x00036224) form_field_slider_pane_vc_t2_ParamLimits

0x6b03,	// (0x00036224) form_field_slider_pane_vc_t2

0x0001,

0xfaa6,	// (0x0003f1c7) form_field_slider_pane_vc_t_ParamLimits

0xfaa6,	// (0x0003f1c7) form_field_slider_pane_vc_t

0x2bad,	// (0x000322ce) input_focus_pane_cp9_vc_ParamLimits

0x2bad,	// (0x000322ce) input_focus_pane_cp9_vc

0x6bb5,	// (0x000362d6) slider_cont_pane_vc_ParamLimits

0x6bb5,	// (0x000362d6) slider_cont_pane_vc

0x6bc9,	// (0x000362ea) list_form_graphic_pane_cp_vc_ParamLimits

0x6bc9,	// (0x000362ea) list_form_graphic_pane_cp_vc

0x4e49,	// (0x0003456a) form_field_popup_wide_pane_vc_g1

0x6bde,	// (0x000362ff) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6bde,	// (0x000362ff) form_field_popup_wide_pane_vc_t1

0x3822,	// (0x00032f43) input_focus_pane_cp8_vc_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_cp8_vc

0x6c23,	// (0x00036344) list_form_wide_pane_vc_ParamLimits

0x6c23,	// (0x00036344) list_form_wide_pane_vc

0x6c2f,	// (0x00036350) list_form_graphic_pane_vc_g1

0x6c37,	// (0x00036358) list_form_graphic_pane_vc_t1_ParamLimits

0x6c37,	// (0x00036358) list_form_graphic_pane_vc_t1

0x2932,	// (0x00032053) list_highlight_pane_cp5_vc_ParamLimits

0x2932,	// (0x00032053) list_highlight_pane_cp5_vc

0x6c53,	// (0x00036374) list_form_graphic_pane_vc_ParamLimits

0x6c53,	// (0x00036374) list_form_graphic_pane_vc

0x4e49,	// (0x0003456a) form_field_popup_pane_vc_g1

0x6c69,	// (0x0003638a) form_field_popup_pane_vc_t1_ParamLimits

0x6c69,	// (0x0003638a) form_field_popup_pane_vc_t1

0x3822,	// (0x00032f43) input_focus_pane_cp7_vc_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_cp7_vc

0x6c80,	// (0x000363a1) list_form_pane_vc_ParamLimits

0x6c80,	// (0x000363a1) list_form_pane_vc

0x6c8c,	// (0x000363ad) data_form_pane_vc_t1_ParamLimits

0x6c8c,	// (0x000363ad) data_form_pane_vc_t1

0x3889,	// (0x00032faa) input_focus_pane_vc_g1

0x3891,	// (0x00032fb2) input_focus_pane_vc_g2

0x3899,	// (0x00032fba) input_focus_pane_vc_g3

0x38a1,	// (0x00032fc2) input_focus_pane_vc_g4

0x38a9,	// (0x00032fca) input_focus_pane_vc_g5

0x38b1,	// (0x00032fd2) input_focus_pane_vc_g6

0x38b9,	// (0x00032fda) input_focus_pane_vc_g7

0x38c1,	// (0x00032fe2) input_focus_pane_vc_g8

0x38c9,	// (0x00032fea) input_focus_pane_vc_g9

0x2848,	// (0x00031f69) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0003edb3) input_focus_pane_vc_g

0x4e3d,	// (0x0003455e) data_form_pane_vc_ParamLimits

0x4e3d,	// (0x0003455e) data_form_pane_vc

0x4e49,	// (0x0003456a) form_field_data_pane_vc_g1

0x6ca7,	// (0x000363c8) form_field_data_pane_vc_t1_ParamLimits

0x6ca7,	// (0x000363c8) form_field_data_pane_vc_t1

0x3822,	// (0x00032f43) input_focus_pane_vc_ParamLimits

0x3822,	// (0x00032f43) input_focus_pane_vc

0x6cc1,	// (0x000363e2) button_value_adjust_pane_cp3_vc

0x6cc9,	// (0x000363ea) button_value_adjust_pane_cp5_vc

0x6cd1,	// (0x000363f2) form_field_data_pane_vc_ParamLimits

0x6cd1,	// (0x000363f2) form_field_data_pane_vc

0x6ce8,	// (0x00036409) form_field_data_pane_vc_cp2

0x6cf0,	// (0x00036411) form_field_data_wide_pane_vc_ParamLimits

0x6cf0,	// (0x00036411) form_field_data_wide_pane_vc

0x6d06,	// (0x00036427) form_field_data_wide_pane_vc_cp2

0x6d0e,	// (0x0003642f) form_field_popup_pane_vc_ParamLimits

0x6d0e,	// (0x0003642f) form_field_popup_pane_vc

0x6d25,	// (0x00036446) form_field_popup_wide_pane_vc_ParamLimits

0x6d25,	// (0x00036446) form_field_popup_wide_pane_vc

0x6d3b,	// (0x0003645c) form_field_slider_pane_vc_ParamLimits

0x6d3b,	// (0x0003645c) form_field_slider_pane_vc

0x6d4e,	// (0x0003646f) form_field_slider_wide_pane_vc_ParamLimits

0x6d4e,	// (0x0003646f) form_field_slider_wide_pane_vc

0xdc7e,	// (0x0003d39f) grid_touch_1_pane_ParamLimits

0xdc7e,	// (0x0003d39f) grid_touch_1_pane

0xdc92,	// (0x0003d3b3) grid_touch_2_pane_ParamLimits

0xdc92,	// (0x0003d3b3) grid_touch_2_pane

0x6e23,	// (0x00036544) touch_pane_g1_ParamLimits

0x6e23,	// (0x00036544) touch_pane_g1

0x6d85,	// (0x000364a6) cell_app_pane_cp_wide_ParamLimits

0x6d85,	// (0x000364a6) cell_app_pane_cp_wide

0x6d96,	// (0x000364b7) grid_popup_fast_wide_pane_ParamLimits

0x6d96,	// (0x000364b7) grid_popup_fast_wide_pane

0x6daa,	// (0x000364cb) scroll_pane_cp19_ParamLimits

0x6daa,	// (0x000364cb) scroll_pane_cp19

0x2852,	// (0x00031f73) bg_popup_window_pane_cp20

0x6dbe,	// (0x000364df) listscroll_popup_fast_wide_pane

0x39f1,	// (0x00033112) grid_indicator_nsta_pane

0x6dc6,	// (0x000364e7) clock_nsta_pane_g1

0x6dcf,	// (0x000364f0) clock_nsta_pane_t1

0xdcbc,	// (0x0003d3dd) cell_indicator_nsta_pane_ParamLimits

0xdcbc,	// (0x0003d3dd) cell_indicator_nsta_pane

0x6e23,	// (0x00036544) cell_indicator_nsta_pane_g1

0xdcd5,	// (0x0003d3f6) cell_indicator_nsta_pane_g2

0x0001,

0xfab7,	// (0x0003f1d8) cell_indicator_nsta_pane_g

0x6e47,	// (0x00036568) clock_nsta_pane_cp

0x6e4f,	// (0x00036570) indicator_nsta_pane_cp

0x6e58,	// (0x00036579) nsta_clock_indic_pane_g1

0x29fb,	// (0x0003211c) grid_indicator_pane

0x3dbf,	// (0x000334e0) scroll_pane_cp29

0x0c02,	// (0x00030323) indicator_nsta_pane_cp2_ParamLimits

0x0c02,	// (0x00030323) indicator_nsta_pane_cp2

0x2932,	// (0x00032053) main_apps_wheel_pane

0x505e,	// (0x0003477f) form_midp_field_text_pane_ParamLimits

0x51a9,	// (0x000348ca) scroll_bar_cp050_ParamLimits

0x6ec1,	// (0x000365e2) cell_indicator_pane_ParamLimits

0x6ec1,	// (0x000365e2) cell_indicator_pane

0x6ed8,	// (0x000365f9) cell_indicator_pane_g1

0xdcea,	// (0x0003d40b) grid_wheel_folder_pane_ParamLimits

0xdcea,	// (0x0003d40b) grid_wheel_folder_pane

0xdcf8,	// (0x0003d419) list_wheel_apps_pane_ParamLimits

0xdcf8,	// (0x0003d419) list_wheel_apps_pane

0xdd06,	// (0x0003d427) main_apps_wheel_pane_g1_ParamLimits

0xdd06,	// (0x0003d427) main_apps_wheel_pane_g1

0xdd12,	// (0x0003d433) main_apps_wheel_pane_g2_ParamLimits

0xdd12,	// (0x0003d433) main_apps_wheel_pane_g2

0x0001,

0xfad3,	// (0x0003f1f4) main_apps_wheel_pane_g_ParamLimits

0xfad3,	// (0x0003f1f4) main_apps_wheel_pane_g

0xdd20,	// (0x0003d441) main_apps_wheel_pane_t1_ParamLimits

0xdd20,	// (0x0003d441) main_apps_wheel_pane_t1

0xdd34,	// (0x0003d455) list_wheel_apps_pane_g1

0xdd3c,	// (0x0003d45d) list_wheel_apps_pane_g2

0xdd44,	// (0x0003d465) list_wheel_apps_pane_g3

0xdd4c,	// (0x0003d46d) list_wheel_apps_pane_g4

0xdd56,	// (0x0003d477) list_wheel_apps_pane_g5

0x0004,

0xfad8,	// (0x0003f1f9) list_wheel_apps_pane_g

0x4308,	// (0x00033a29) navi_icon_text_pane

0xd308,	// (0x0003ca29) aid_fill_nsta

0x6f9b,	// (0x000366bc) navi_icon_text_pane_g1

0x6fa7,	// (0x000366c8) navi_icon_text_pane_t1

0xd192,	// (0x0003c8b3) list_set_graphic_pane_t1_ParamLimits

0xd192,	// (0x0003c8b3) list_set_graphic_pane_t1

0x5904,	// (0x00035025) popup_midp_note_alarm_window_t6_ParamLimits

0x5904,	// (0x00035025) popup_midp_note_alarm_window_t6

0x5916,	// (0x00035037) popup_midp_note_alarm_window_t7_ParamLimits

0x5916,	// (0x00035037) popup_midp_note_alarm_window_t7

0x5928,	// (0x00035049) popup_midp_note_alarm_window_t8_ParamLimits

0x5928,	// (0x00035049) popup_midp_note_alarm_window_t8

0x593a,	// (0x0003505b) popup_midp_note_alarm_window_t9_ParamLimits

0x593a,	// (0x0003505b) popup_midp_note_alarm_window_t9

0x594c,	// (0x0003506d) popup_midp_note_alarm_window_t10_ParamLimits

0x594c,	// (0x0003506d) popup_midp_note_alarm_window_t10

0x595e,	// (0x0003507f) popup_midp_note_alarm_window_t11_ParamLimits

0x595e,	// (0x0003507f) popup_midp_note_alarm_window_t11

0x5970,	// (0x00035091) scroll_pane_cp17_ParamLimits

0x5970,	// (0x00035091) scroll_pane_cp17

0x16e0,	// (0x00030e01) volume_small_pane_cp_g1

0x1a9c,	// (0x000311bd) volume_small_pane_cp_g2

0x1aa5,	// (0x000311c6) volume_small_pane_cp_g3

0x1aae,	// (0x000311cf) volume_small_pane_cp_g4

0x1ab7,	// (0x000311d8) volume_small_pane_cp_g5

0x1ac0,	// (0x000311e1) volume_small_pane_cp_g6

0x1ac9,	// (0x000311ea) volume_small_pane_cp_g7

0x1ad2,	// (0x000311f3) volume_small_pane_cp_g8

0x1adb,	// (0x000311fc) volume_small_pane_cp_g9

0x1ae4,	// (0x00031205) volume_small_pane_cp_g10

0x4557,	// (0x00033c78) midp_ticker_pane_g1_ParamLimits

0x4563,	// (0x00033c84) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0003ee7f) midp_ticker_pane_g_ParamLimits

0x456f,	// (0x00033c90) midp_ticker_pane_t1_ParamLimits

0xd32c,	// (0x0003ca4d) aid_fill_nsta_2

0x5195,	// (0x000348b6) list_form2_midp_pane

0x62df,	// (0x00035a00) midp_editing_number_pane_ParamLimits

0x62ee,	// (0x00035a0f) midp_ticker_pane_ParamLimits

0x6fb9,	// (0x000366da) form2_midp_field_pane

0x6fdd,	// (0x000366fe) scroll_pane_cp51

0x6ffd,	// (0x0003671e) form2_midp_button_pane_ParamLimits

0x6ffd,	// (0x0003671e) form2_midp_button_pane

0x700f,	// (0x00036730) form2_midp_content_pane_ParamLimits

0x700f,	// (0x00036730) form2_midp_content_pane

0x7029,	// (0x0003674a) form2_midp_field_choice_group_pane

0x7031,	// (0x00036752) form2_midp_field_pane_g1

0x7039,	// (0x0003675a) form2_midp_field_pane_g2

0x7041,	// (0x00036762) form2_midp_field_pane_g3

0x7049,	// (0x0003676a) form2_midp_field_pane_g4

0x0003,

0xfafd,	// (0x0003f21e) form2_midp_field_pane_g

0x7051,	// (0x00036772) form2_midp_gauge_slider_pane

0x7059,	// (0x0003677a) form2_midp_gauge_wait_pane

0x7061,	// (0x00036782) form2_midp_image_pane_ParamLimits

0x7061,	// (0x00036782) form2_midp_image_pane

0x707c,	// (0x0003679d) form2_midp_label_pane_ParamLimits

0x707c,	// (0x0003679d) form2_midp_label_pane

0xdd89,	// (0x0003d4aa) form2_midp_label_pane_cp_ParamLimits

0xdd89,	// (0x0003d4aa) form2_midp_label_pane_cp

0x70b6,	// (0x000367d7) form2_midp_string_pane_ParamLimits

0x70b6,	// (0x000367d7) form2_midp_string_pane

0xc551,	// (0x0003bc72) form2_midp_text_pane_ParamLimits

0xc551,	// (0x0003bc72) form2_midp_text_pane

0x70c8,	// (0x000367e9) form2_midp_time_pane

0x70d8,	// (0x000367f9) input_focus_pane_cp51_ParamLimits

0x70d8,	// (0x000367f9) input_focus_pane_cp51

0x70f0,	// (0x00036811) form2_midp_label_pane_t1_ParamLimits

0x70f0,	// (0x00036811) form2_midp_label_pane_t1

0xc56a,	// (0x0003bc8b) form2_mdip_text_pane_t1_ParamLimits

0xc56a,	// (0x0003bc8b) form2_mdip_text_pane_t1

0x2f29,	// (0x0003264a) form2_midp_time_pane_t1

0x7139,	// (0x0003685a) form2_midp_gauge_slider_pane_t1

0xdda8,	// (0x0003d4c9) form2_midp_gauge_slider_pane_t2

0xddba,	// (0x0003d4db) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb06,	// (0x0003f227) form2_midp_gauge_slider_pane_t

0x716f,	// (0x00036890) form2_midp_slider_pane

0x717b,	// (0x0003689c) form2_midp_gauge_wait_pane_t1

0x7189,	// (0x000368aa) form2_midp_wait_pane_ParamLimits

0x7189,	// (0x000368aa) form2_midp_wait_pane

0xddcc,	// (0x0003d4ed) list_single_2graphic_pane_cp4_ParamLimits

0xddcc,	// (0x0003d4ed) list_single_2graphic_pane_cp4

0xd742,	// (0x0003ce63) list_single_midp_graphic_pane_cp_ParamLimits

0xd742,	// (0x0003ce63) list_single_midp_graphic_pane_cp

0x2852,	// (0x00031f73) list_highlight_pane_cp20

0x71e3,	// (0x00036904) list_single_2graphic_pane_g1_cp4

0x71eb,	// (0x0003690c) list_single_2graphic_pane_g2_cp4

0x71f3,	// (0x00036914) list_single_2graphic_pane_t1_cp4

0x2932,	// (0x00032053) list_highlight_pane_cp21

0x7202,	// (0x00036923) list_single_midp_graphic_pane_g4_cp

0x7211,	// (0x00036932) list_single_midp_graphic_pane_t1_cp

0xdde0,	// (0x0003d501) form2_mdip_string_pane_t1_ParamLimits

0xdde0,	// (0x0003d501) form2_mdip_string_pane_t1

0x2852,	// (0x00031f73) bg_wml_button_pane_cp2

0x2848,	// (0x00031f69) form2_midp_image_pane_g1

0x0432,	// (0x0002fb53) list_double_large_graphic_pane_g5_ParamLimits

0x0432,	// (0x0002fb53) list_double_large_graphic_pane_g5

0x47c8,	// (0x00033ee9) midp_form_pane_ParamLimits

0x2932,	// (0x00032053) main_apps_wheel_pane_ParamLimits

0xc06b,	// (0x0003b78c) popup_preview_window_ParamLimits

0xc06b,	// (0x0003b78c) popup_preview_window

0x1488,	// (0x00030ba9) popup_touch_info_window_ParamLimits

0x1488,	// (0x00030ba9) popup_touch_info_window

0x14a6,	// (0x00030bc7) popup_touch_menu_window_ParamLimits

0x14a6,	// (0x00030bc7) popup_touch_menu_window

0x283e,	// (0x00031f5f) bg_popup_sub_pane_cp6

0x731f,	// (0x00036a40) list_touch_menu_pane

0x7327,	// (0x00036a48) list_single_touch_menu_pane_ParamLimits

0x7327,	// (0x00036a48) list_single_touch_menu_pane

0x733d,	// (0x00036a5e) list_single_touch_menu_pane_t1

0x2932,	// (0x00032053) bg_popup_sub_pane_cp7_ParamLimits

0x2932,	// (0x00032053) bg_popup_sub_pane_cp7

0x734b,	// (0x00036a6c) heading_sub_pane

0x7353,	// (0x00036a74) list_touch_info_pane_ParamLimits

0x7353,	// (0x00036a74) list_touch_info_pane

0x7362,	// (0x00036a83) list_single_touch_info_pane_ParamLimits

0x7362,	// (0x00036a83) list_single_touch_info_pane

0x7374,	// (0x00036a95) list_single_touch_info_pane_t1

0x7382,	// (0x00036aa3) list_single_touch_info_pane_t2

0x0001,

0xfb14,	// (0x0003f235) list_single_touch_info_pane_t

0x4488,	// (0x00033ba9) bg_popup_heading_pane_cp

0x7390,	// (0x00036ab1) heading_sub_pane_t1

0x4dd7,	// (0x000344f8) bg_popup_preview_window_pane_cp_ParamLimits

0x4dd7,	// (0x000344f8) bg_popup_preview_window_pane_cp

0x734b,	// (0x00036a6c) heading_preview_pane

0x7353,	// (0x00036a74) list_preview_pane_ParamLimits

0x7353,	// (0x00036a74) list_preview_pane

0x739e,	// (0x00036abf) popup_preview_window_g1

0x7362,	// (0x00036a83) list_single_preview_pane_ParamLimits

0x7362,	// (0x00036a83) list_single_preview_pane

0x73a6,	// (0x00036ac7) list_single_preview_pane_g1

0x73ae,	// (0x00036acf) list_single_preview_pane_t1

0x7374,	// (0x00036a95) list_single_preview_pane_t2

0x0001,

0xfb19,	// (0x0003f23a) list_single_preview_pane_t

0x73bc,	// (0x00036add) bg_popup_heading_pane_cp2_ParamLimits

0x73bc,	// (0x00036add) bg_popup_heading_pane_cp2

0x73d2,	// (0x00036af3) heading_preview_pane_g1

0x73da,	// (0x00036afb) heading_preview_pane_t1_ParamLimits

0x73da,	// (0x00036afb) heading_preview_pane_t1

0x2a1e,	// (0x0003213f) soft_indicator_pane_t1_ParamLimits

0x3795,	// (0x00032eb6) scroll_pane_ParamLimits

0x3cb8,	// (0x000333d9) scroll_sc2_left_pane

0x3cc1,	// (0x000333e2) scroll_sc2_right_pane

0x3ce0,	// (0x00033401) scroll_bg_pane_g1_ParamLimits

0x3cf5,	// (0x00033416) scroll_bg_pane_g2_ParamLimits

0x3d0d,	// (0x0003342e) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0003ee0a) scroll_bg_pane_g_ParamLimits

0x3ce0,	// (0x00033401) scroll_handle_pane_g1_ParamLimits

0x3d2f,	// (0x00033450) scroll_handle_pane_g2_ParamLimits

0x3d0d,	// (0x0003342e) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0003ee11) scroll_handle_pane_g_ParamLimits

0x0f50,	// (0x00030671) popup_choice_list_window_ParamLimits

0x0f50,	// (0x00030671) popup_choice_list_window

0x4c29,	// (0x0003434a) choice_list_pane

0x4cab,	// (0x000343cc) cell_toolbar_pane_t1

0x4cd3,	// (0x000343f4) toolbar_button_pane_ParamLimits

0x5e2a,	// (0x0003554b) ai_gene_pane_1_t2_ParamLimits

0x5e2a,	// (0x0003554b) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0003f034) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0003f034) ai_gene_pane_1_t

0x73f7,	// (0x00036b18) scroll_sc2_left_pane_g1

0x73f7,	// (0x00036b18) scroll_sc2_right_pane_g1

0x47c8,	// (0x00033ee9) bg_popup_sub_pane_cp10

0x7401,	// (0x00036b22) list_choice_list_pane

0x741a,	// (0x00036b3b) list_single_choice_list_pane_ParamLimits

0x741a,	// (0x00036b3b) list_single_choice_list_pane

0x742d,	// (0x00036b4e) list_single_choice_list_pane_g1

0x39c2,	// (0x000330e3) list_single_choice_list_pane_t1_ParamLimits

0x39c2,	// (0x000330e3) list_single_choice_list_pane_t1

0x7435,	// (0x00036b56) choice_list_pane_g1

0x743d,	// (0x00036b5e) choice_list_pane_t1

0x283e,	// (0x00031f5f) input_focus_pane_cp11

0x3b99,	// (0x000332ba) title_pane_stacon_g2_ParamLimits

0x3b99,	// (0x000332ba) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0003edf0) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0003edf0) title_pane_stacon_g

0x4488,	// (0x00033ba9) cursor_press_pane

0xbd1e,	// (0x0003b43f) popup_fep_hwr_window_ParamLimits

0xbd1e,	// (0x0003b43f) popup_fep_hwr_window

0x1076,	// (0x00030797) popup_fep_vkb_window_ParamLimits

0x1076,	// (0x00030797) popup_fep_vkb_window

0x744b,	// (0x00036b6c) cursor_press_pane_g1

0x0002,

0xfb42,	// (0x0003f263) fep_vkb_side_pane_g_ParamLimits

0x1b26,	// (0x00031247) fep_hwr_candidate_pane_ParamLimits

0x1b26,	// (0x00031247) fep_hwr_candidate_pane

0x1b50,	// (0x00031271) fep_hwr_side_pane_ParamLimits

0x1b50,	// (0x00031271) fep_hwr_side_pane

0x1b70,	// (0x00031291) fep_hwr_top_pane_ParamLimits

0x1b70,	// (0x00031291) fep_hwr_top_pane

0x1b88,	// (0x000312a9) fep_hwr_write_pane_ParamLimits

0x1b88,	// (0x000312a9) fep_hwr_write_pane

0xfb42,	// (0x0003f263) fep_vkb_side_pane_g

0x7453,	// (0x00036b74) fep_hwr_top_pane_g1

0x7465,	// (0x00036b86) fep_hwr_top_pane_g2

0x1bc2,	// (0x000312e3) fep_hwr_top_pane_g3

0x0002,

0xfb1e,	// (0x0003f23f) fep_hwr_top_pane_g

0x1bd7,	// (0x000312f8) fep_hwr_top_text_pane

0x3e86,	// (0x000335a7) fep_hwr_top_text_pane_g1

0x749b,	// (0x00036bbc) fep_hwr_top_text_pane_t1

0x1ccd,	// (0x000313ee) fep_hwr_candidate_pane_g1

0x76ee,	// (0x00036e0f) fep_vkb_keypad_pane_g3_ParamLimits

0x76ee,	// (0x00036e0f) fep_vkb_keypad_pane_g3

0x7716,	// (0x00036e37) fep_vkb_keypad_pane_g4_ParamLimits

0x7716,	// (0x00036e37) fep_vkb_keypad_pane_g4

0x7785,	// (0x00036ea6) fep_vkb_bottom_pane_g2_ParamLimits

0x7785,	// (0x00036ea6) fep_vkb_bottom_pane_g2

0x0001,

0xfb49,	// (0x0003f26a) fep_vkb_bottom_pane_g_ParamLimits

0xfb49,	// (0x0003f26a) fep_vkb_bottom_pane_g

0x73f7,	// (0x00036b18) cell_vkb_side_pane_g2

0x0001,

0xfb53,	// (0x0003f274) cell_vkb_side_pane_g

0x7810,	// (0x00036f31) cell_vkb_side_pane_t1

0x781e,	// (0x00036f3f) cell_vkb_side_pane_t1_copy1

0x73f7,	// (0x00036b18) bg_fep_vkb_candidate_pane_g2

0x794a,	// (0x0003706b) cell_vkb_candidate_pane_ParamLimits

0x74a9,	// (0x00036bca) aid_size_cell_vkb_ParamLimits

0x74a9,	// (0x00036bca) aid_size_cell_vkb

0x794a,	// (0x0003706b) cell_vkb_candidate_pane

0x1cf4,	// (0x00031415) bg_popup_fep_shadow_pane_g1

0xde64,	// (0x0003d585) fep_vkb_bottom_pane_ParamLimits

0xde64,	// (0x0003d585) fep_vkb_bottom_pane

0x756d,	// (0x00036c8e) fep_vkb_candidate_pane_ParamLimits

0x756d,	// (0x00036c8e) fep_vkb_candidate_pane

0xde89,	// (0x0003d5aa) fep_vkb_keypad_pane_ParamLimits

0xde89,	// (0x0003d5aa) fep_vkb_keypad_pane

0xdec5,	// (0x0003d5e6) fep_vkb_side_pane_ParamLimits

0xdec5,	// (0x0003d5e6) fep_vkb_side_pane

0xdf01,	// (0x0003d622) fep_vkb_top_pane_ParamLimits

0xdf01,	// (0x0003d622) fep_vkb_top_pane

0x7647,	// (0x00036d68) fep_vkb_top_pane_g1_ParamLimits

0x7647,	// (0x00036d68) fep_vkb_top_pane_g1

0x7656,	// (0x00036d77) fep_vkb_top_pane_g2_ParamLimits

0x7656,	// (0x00036d77) fep_vkb_top_pane_g2

0x7665,	// (0x00036d86) fep_vkb_top_pane_g3_ParamLimits

0x7665,	// (0x00036d86) fep_vkb_top_pane_g3

0x0003,

0xfb39,	// (0x0003f25a) fep_vkb_top_pane_g_ParamLimits

0xfb39,	// (0x0003f25a) fep_vkb_top_pane_g

0x7683,	// (0x00036da4) fep_vkb_top_text_pane_ParamLimits

0x7683,	// (0x00036da4) fep_vkb_top_text_pane

0xdf3d,	// (0x0003d65e) fep_vkb_side_pane_g1_ParamLimits

0xdf3d,	// (0x0003d65e) fep_vkb_side_pane_g1

0x76dd,	// (0x00036dfe) grid_vkb_side_pane_ParamLimits

0x76dd,	// (0x00036dfe) grid_vkb_side_pane

0x1cfc,	// (0x0003141d) bg_popup_fep_shadow_pane_g2

0x1d05,	// (0x00031426) bg_popup_fep_shadow_pane_g3

0x1d0d,	// (0x0003142e) bg_popup_fep_shadow_pane_g4

0x1d16,	// (0x00031437) bg_popup_fep_shadow_pane_g5

0x1d20,	// (0x00031441) bg_popup_fep_shadow_pane_g6

0x1d28,	// (0x00031449) bg_popup_fep_shadow_pane_g7

0x38a1,	// (0x00032fc2) bg_popup_fep_shadow_pane_g8

0x7734,	// (0x00036e55) grid_vkb_keypad_number_pane_ParamLimits

0x7734,	// (0x00036e55) grid_vkb_keypad_number_pane

0x7744,	// (0x00036e65) grid_vkb_keypad_pane_ParamLimits

0x7744,	// (0x00036e65) grid_vkb_keypad_pane

0x776a,	// (0x00036e8b) fep_vkb_bottom_pane_g1_ParamLimits

0x776a,	// (0x00036e8b) fep_vkb_bottom_pane_g1

0x7793,	// (0x00036eb4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7793,	// (0x00036eb4) grid_vkb_keypad_bottom_left_pane

0x77a8,	// (0x00036ec9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x77a8,	// (0x00036ec9) grid_vkb_keypad_bottom_right_pane

0x77bd,	// (0x00036ede) fep_vkb_top_text_pane_g1

0xdf84,	// (0x0003d6a5) fep_vkb_top_text_pane_t1

0xdf96,	// (0x0003d6b7) cell_vkb_side_pane_ParamLimits

0xdf96,	// (0x0003d6b7) cell_vkb_side_pane

0x73f7,	// (0x00036b18) cell_vkb_side_pane_g1

0x782c,	// (0x00036f4d) cell_vkb_keypad_pane_ParamLimits

0x782c,	// (0x00036f4d) cell_vkb_keypad_pane

0x78a1,	// (0x00036fc2) cell_vkb_keypad_pane_g1

0x0008,

0xfb66,	// (0x0003f287) bg_popup_fep_shadow_pane_g

0x1d3a,	// (0x0003145b) cell_hwr_side_pane_g1

0x1d3a,	// (0x0003145b) cell_hwr_side_pane_g2

0x78ab,	// (0x00036fcc) cell_vkb_keypad_pane_t1

0xdfac,	// (0x0003d6cd) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdfac,	// (0x0003d6cd) cell_vkb_keypad_bottom_left_pane

0xdfc1,	// (0x0003d6e2) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdfc1,	// (0x0003d6e2) cell_vkb_keypad_bottom_right_pane

0x73f7,	// (0x00036b18) cell_vkb_keypad_bottom_left_pane_g1

0x73f7,	// (0x00036b18) cell_vkb_keypad_bottom_right_pane_g1

0x790f,	// (0x00037030) cell_vkb_keypad_number_pane_ParamLimits

0x790f,	// (0x00037030) cell_vkb_keypad_number_pane

0x792e,	// (0x0003704f) cell_vkb_keypad_number_pane_g1

0x7938,	// (0x00037059) cell_vkb_keypad_number_pane_g2

0x7941,	// (0x00037062) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb58,	// (0x0003f279) cell_vkb_keypad_number_pane_g

0x78ab,	// (0x00036fcc) cell_vkb_keypad_number_pane_t1

0x7965,	// (0x00037086) fep_vkb_candidate_pane_g1

0x0001,

0xfb79,	// (0x0003f29a) cell_hwr_side_pane_g

0x797e,	// (0x0003709f) cell_hwr_side_pane_t1

0x1d44,	// (0x00031465) cell_hwr_side_pane_t1_copy1

0x1d52,	// (0x00031473) cell_hwr_candidate_pane_g1

0x1d81,	// (0x000314a2) cell_hwr_candidate_pane_t1

0x73f7,	// (0x00036b18) cell_vkb_candidate_pane_g2

0x79c2,	// (0x000370e3) cell_vkb_candidate_pane_t1

0x1aed,	// (0x0003120e) bg_popup_fep_shadow_pane_ParamLimits

0x1aed,	// (0x0003120e) bg_popup_fep_shadow_pane

0x1ba2,	// (0x000312c3) bg_fep_hwr_top_pane_g4

0x7477,	// (0x00036b98) bg_hwr_side_pane_g1_ParamLimits

0x7477,	// (0x00036b98) bg_hwr_side_pane_g1

0xc59f,	// (0x0003bcc0) cell_hwr_side_pane_ParamLimits

0xc59f,	// (0x0003bcc0) cell_hwr_side_pane

0x1c4e,	// (0x0003136f) fep_hwr_write_pane_g1_ParamLimits

0x1c4e,	// (0x0003136f) fep_hwr_write_pane_g1

0x1c5b,	// (0x0003137c) fep_hwr_write_pane_g2_ParamLimits

0x1c5b,	// (0x0003137c) fep_hwr_write_pane_g2

0x1c68,	// (0x00031389) fep_hwr_write_pane_g3_ParamLimits

0x1c68,	// (0x00031389) fep_hwr_write_pane_g3

0xc5bf,	// (0x0003bce0) fep_hwr_write_pane_g4_ParamLimits

0xc5bf,	// (0x0003bce0) fep_hwr_write_pane_g4

0x0005,

0xfb25,	// (0x0003f246) fep_hwr_write_pane_g_ParamLimits

0xfb25,	// (0x0003f246) fep_hwr_write_pane_g

0x1ba2,	// (0x000312c3) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1ba2,	// (0x000312c3) bg_fep_hwr_candidate_pane_g2

0x1c8b,	// (0x000313ac) cell_hwr_candidate_pane_ParamLimits

0x1c8b,	// (0x000313ac) cell_hwr_candidate_pane

0x1ccd,	// (0x000313ee) fep_hwr_candidate_pane_g1_ParamLimits

0x74d7,	// (0x00036bf8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x74d7,	// (0x00036bf8) bg_popup_fep_shadow_pane_cp2

0x7675,	// (0x00036d96) fep_vkb_top_pane_g4_ParamLimits

0x7675,	// (0x00036d96) fep_vkb_top_pane_g4

0x76bb,	// (0x00036ddc) fep_vkb_side_pane_g2_ParamLimits

0x76bb,	// (0x00036ddc) fep_vkb_side_pane_g2

0xb837,	// (0x0003af58) list_setting_pane_t4_ParamLimits

0xb837,	// (0x0003af58) list_setting_pane_t4

0xb8d1,	// (0x0003aff2) list_setting_number_pane_t5_ParamLimits

0xb8d1,	// (0x0003aff2) list_setting_number_pane_t5

0xd0a5,	// (0x0003c7c6) list_double_heading_pane_cp2_ParamLimits

0xd0a5,	// (0x0003c7c6) list_double_heading_pane_cp2

0x383c,	// (0x00032f5d) list_double_heading_pane_g1_cp2_ParamLimits

0x383c,	// (0x00032f5d) list_double_heading_pane_g1_cp2

0x3848,	// (0x00032f69) list_double_heading_pane_g2_cp2_ParamLimits

0x3848,	// (0x00032f69) list_double_heading_pane_g2_cp2

0x79d0,	// (0x000370f1) list_double_heading_pane_t1_cp2_ParamLimits

0x79d0,	// (0x000370f1) list_double_heading_pane_t1_cp2

0x79e6,	// (0x00037107) list_double_heading_pane_t2_cp2_ParamLimits

0x79e6,	// (0x00037107) list_double_heading_pane_t2_cp2

0x2826,	// (0x00031f47) aid_value_unit2

0xf54a,	// (0x0003ec6b) popup_preview_fixed_window

0x2bbb,	// (0x000322dc) bg_popup_preview_window_pane_cp02

0x79f8,	// (0x00037119) list_preview_fixed_pane

0x7a3e,	// (0x0003715f) list_empty_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_empty_pane_fp

0x7a3e,	// (0x0003715f) list_single_cale_day_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_cale_day_pane_fp

0x7a3e,	// (0x0003715f) list_single_graphic_heading_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_graphic_heading_pane_fp

0x7a3e,	// (0x0003715f) list_single_graphic_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_graphic_pane_fp

0x7a3e,	// (0x0003715f) list_single_heading_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_heading_pane_fp

0x7a3e,	// (0x0003715f) list_single_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_pane_fp

0x7a53,	// (0x00037174) list_single_pane_fp_g1_ParamLimits

0x7a53,	// (0x00037174) list_single_pane_fp_g1

0x2f3c,	// (0x0003265d) list_single_pane_fp_g2_ParamLimits

0x2f3c,	// (0x0003265d) list_single_pane_fp_g2

0x2f48,	// (0x00032669) list_single_pane_fp_g3_ParamLimits

0x2f48,	// (0x00032669) list_single_pane_fp_g3

0x7a5f,	// (0x00037180) list_single_pane_fp_g4_ParamLimits

0x7a5f,	// (0x00037180) list_single_pane_fp_g4

0x0003,

0xfb8c,	// (0x0003f2ad) list_single_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003f2ad) list_single_pane_fp_g

0x2f5c,	// (0x0003267d) list_single_pane_fp_t1_ParamLimits

0x2f5c,	// (0x0003267d) list_single_pane_fp_t1

0x2f73,	// (0x00032694) list_single_graphic_pane_fp_g1_ParamLimits

0x2f73,	// (0x00032694) list_single_graphic_pane_fp_g1

0x7a53,	// (0x00037174) list_single_graphic_pane_fp_g2_ParamLimits

0x7a53,	// (0x00037174) list_single_graphic_pane_fp_g2

0x2f3c,	// (0x0003265d) list_single_graphic_pane_fp_g3_ParamLimits

0x2f3c,	// (0x0003265d) list_single_graphic_pane_fp_g3

0x2f48,	// (0x00032669) list_single_graphic_pane_fp_g4_ParamLimits

0x2f48,	// (0x00032669) list_single_graphic_pane_fp_g4

0x7a5f,	// (0x00037180) list_single_graphic_pane_fp_g5_ParamLimits

0x7a5f,	// (0x00037180) list_single_graphic_pane_fp_g5

0x0004,

0xfb95,	// (0x0003f2b6) list_single_graphic_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f2b6) list_single_graphic_pane_fp_g

0x2f7f,	// (0x000326a0) list_single_graphic_pane_fp_t1_ParamLimits

0x2f7f,	// (0x000326a0) list_single_graphic_pane_fp_t1

0x2f73,	// (0x00032694) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2f73,	// (0x00032694) list_single_graphic_heading_pane_fp_g1

0x7a53,	// (0x00037174) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7a53,	// (0x00037174) list_single_graphic_heading_pane_fp_g2

0x2f3c,	// (0x0003265d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x2f3c,	// (0x0003265d) list_single_graphic_heading_pane_fp_g3

0x2f48,	// (0x00032669) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x2f48,	// (0x00032669) list_single_graphic_heading_pane_fp_g4

0x7a5f,	// (0x00037180) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7a5f,	// (0x00037180) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003f2b6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f2b6) list_single_graphic_heading_pane_fp_g

0x2f95,	// (0x000326b6) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2f95,	// (0x000326b6) list_single_graphic_heading_pane_fp_t1

0x2fab,	// (0x000326cc) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2fab,	// (0x000326cc) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba0,	// (0x0003f2c1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba0,	// (0x0003f2c1) list_single_graphic_heading_pane_fp_t

0x2fbd,	// (0x000326de) list_single_cale_day_pane_fp_g1_ParamLimits

0x2fbd,	// (0x000326de) list_single_cale_day_pane_fp_g1

0x7a6b,	// (0x0003718c) list_single_cale_day_pane_fp_g2_ParamLimits

0x7a6b,	// (0x0003718c) list_single_cale_day_pane_fp_g2

0x2ff5,	// (0x00032716) list_single_cale_day_pane_fp_g3_ParamLimits

0x2ff5,	// (0x00032716) list_single_cale_day_pane_fp_g3

0x301d,	// (0x0003273e) list_single_cale_day_pane_fp_g4_ParamLimits

0x301d,	// (0x0003273e) list_single_cale_day_pane_fp_g4

0x3041,	// (0x00032762) list_single_cale_day_pane_fp_g5_ParamLimits

0x3041,	// (0x00032762) list_single_cale_day_pane_fp_g5

0x0004,

0xfba5,	// (0x0003f2c6) list_single_cale_day_pane_fp_g_ParamLimits

0xfba5,	// (0x0003f2c6) list_single_cale_day_pane_fp_g

0x3065,	// (0x00032786) list_single_cale_day_pane_fp_t1_ParamLimits

0x3065,	// (0x00032786) list_single_cale_day_pane_fp_t1

0x308b,	// (0x000327ac) list_single_cale_day_pane_fp_t2_ParamLimits

0x308b,	// (0x000327ac) list_single_cale_day_pane_fp_t2

0x30a4,	// (0x000327c5) list_single_cale_day_pane_fp_t3_ParamLimits

0x30a4,	// (0x000327c5) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb0,	// (0x0003f2d1) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb0,	// (0x0003f2d1) list_single_cale_day_pane_fp_t

0x7a53,	// (0x00037174) list_empty_pane_fp_g1_ParamLimits

0x7a53,	// (0x00037174) list_empty_pane_fp_g1

0x30bd,	// (0x000327de) list_empty_pane_fp_t1

0x30cb,	// (0x000327ec) list_empty_pane_fp_t2

0x0001,

0xfbb7,	// (0x0003f2d8) list_empty_pane_fp_t

0x7a53,	// (0x00037174) list_single_heading_pane_fp_g1_ParamLimits

0x7a53,	// (0x00037174) list_single_heading_pane_fp_g1

0x2f3c,	// (0x0003265d) list_single_heading_pane_fp_g2_ParamLimits

0x2f3c,	// (0x0003265d) list_single_heading_pane_fp_g2

0x2f48,	// (0x00032669) list_single_heading_pane_fp_g3_ParamLimits

0x2f48,	// (0x00032669) list_single_heading_pane_fp_g3

0x0002,

0xfbbc,	// (0x0003f2dd) list_single_heading_pane_fp_g_ParamLimits

0xfbbc,	// (0x0003f2dd) list_single_heading_pane_fp_g

0x30d9,	// (0x000327fa) list_single_heading_pane_fp_t1_ParamLimits

0x30d9,	// (0x000327fa) list_single_heading_pane_fp_t1

0x30eb,	// (0x0003280c) list_single_heading_pane_fp_t2_ParamLimits

0x30eb,	// (0x0003280c) list_single_heading_pane_fp_t2

0x0001,

0xfbc3,	// (0x0003f2e4) list_single_heading_pane_fp_t_ParamLimits

0xfbc3,	// (0x0003f2e4) list_single_heading_pane_fp_t

0x3a30,	// (0x00033151) aid_size_cell_fast

0x2b2b,	// (0x0003224c) soft_indicator_pane_cp1_t1

0x3a6d,	// (0x0003318e) cell_app_pane_cp2_ParamLimits

0x3a6d,	// (0x0003318e) cell_app_pane_cp2

0x1b0f,	// (0x00031230) fep_hwr_candidate_drop_down_list_pane

0x1ce7,	// (0x00031408) fep_hwr_candidate_pane_g3_ParamLimits

0x1ce7,	// (0x00031408) fep_hwr_candidate_pane_g3

0xe2f0,	// (0x0003da11) fep_hwr_candidate_pane_g4_ParamLimits

0xe2f0,	// (0x0003da11) fep_hwr_candidate_pane_g4

0x0002,

0xfb32,	// (0x0003f253) fep_hwr_candidate_pane_g_ParamLimits

0xfb32,	// (0x0003f253) fep_hwr_candidate_pane_g

0x755c,	// (0x00036c7d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x755c,	// (0x00036c7d) fep_vkb_candidate_drop_down_list_pane

0x796d,	// (0x0003708e) fep_vkb_candidate_pane_g3

0x7975,	// (0x00037096) fep_vkb_candidate_pane_g4

0x0002,

0xfb5f,	// (0x0003f280) fep_vkb_candidate_pane_g

0x1d52,	// (0x00031473) cell_hwr_candidate_pane_g1_ParamLimits

0x1d60,	// (0x00031481) cell_hwr_candidate_pane_g3_ParamLimits

0x1d60,	// (0x00031481) cell_hwr_candidate_pane_g3

0x92f7,	// (0x00038a18) cell_hwr_candidate_pane_g4_ParamLimits

0x92f7,	// (0x00038a18) cell_hwr_candidate_pane_g4

0x0002,

0xfb7e,	// (0x0003f29f) cell_hwr_candidate_pane_g_ParamLimits

0xfb7e,	// (0x0003f29f) cell_hwr_candidate_pane_g

0x798c,	// (0x000370ad) cell_vkb_candidate_pane_g3_ParamLimits

0x798c,	// (0x000370ad) cell_vkb_candidate_pane_g3

0x79a7,	// (0x000370c8) cell_vkb_candidate_pane_g4_ParamLimits

0x79a7,	// (0x000370c8) cell_vkb_candidate_pane_g4

0x7a77,	// (0x00037198) cell_app_pane_cp2_g1_ParamLimits

0x7a77,	// (0x00037198) cell_app_pane_cp2_g1

0x7a95,	// (0x000371b6) cell_app_pane_cp2_g2_ParamLimits

0x7a95,	// (0x000371b6) cell_app_pane_cp2_g2

0x0001,

0xfbc8,	// (0x0003f2e9) cell_app_pane_cp2_g_ParamLimits

0xfbc8,	// (0x0003f2e9) cell_app_pane_cp2_g

0x7aa1,	// (0x000371c2) cell_app_pane_cp2_t1_ParamLimits

0x7aa1,	// (0x000371c2) cell_app_pane_cp2_t1

0x3822,	// (0x00032f43) grid_highlight_pane_cp1_ParamLimits

0x3822,	// (0x00032f43) grid_highlight_pane_cp1

0x1d9f,	// (0x000314c0) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d9f,	// (0x000314c0) cell_hwr_candidate_pane_cp1

0x1d52,	// (0x00031473) fep_hwr_candidate_drop_down_list_pane_g1

0x1dbe,	// (0x000314df) fep_hwr_candidate_drop_down_list_pane_g2

0x1dcb,	// (0x000314ec) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbcd,	// (0x0003f2ee) fep_hwr_candidate_drop_down_list_pane_g

0x1dd8,	// (0x000314f9) fep_hwr_candidate_drop_down_list_scroll_pane

0x1de1,	// (0x00031502) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1de1,	// (0x00031502) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1dee,	// (0x0003150f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1dee,	// (0x0003150f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1dfb,	// (0x0003151c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1dfb,	// (0x0003151c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1e08,	// (0x00031529) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1e08,	// (0x00031529) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e23,	// (0x00031544) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e23,	// (0x00031544) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e3e,	// (0x0003155f) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e3e,	// (0x0003155f) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e59,	// (0x0003157a) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e59,	// (0x0003157a) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e74,	// (0x00031595) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e74,	// (0x00031595) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0003f2f5) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0003f2f5) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7ab3,	// (0x000371d4) cell_vkb_candidate_pane_cp1_ParamLimits

0x7ab3,	// (0x000371d4) cell_vkb_candidate_pane_cp1

0x7675,	// (0x00036d96) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7675,	// (0x00036d96) fep_vkb_candidate_drop_down_list_pane_g1

0x7ad3,	// (0x000371f4) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ad3,	// (0x000371f4) fep_vkb_candidate_drop_down_list_pane_g2

0x7ae0,	// (0x00037201) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7ae0,	// (0x00037201) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe5,	// (0x0003f306) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe5,	// (0x0003f306) fep_vkb_candidate_drop_down_list_pane_g

0x7aed,	// (0x0003720e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7aed,	// (0x0003720e) fep_vkb_candidate_drop_down_list_scroll_pane

0x7afa,	// (0x0003721b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7afa,	// (0x0003721b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7b07,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7b07,	// (0x00037228) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7b13,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7b13,	// (0x00037234) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7b1f,	// (0x00037240) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7b1f,	// (0x00037240) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7b40,	// (0x00037261) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7b40,	// (0x00037261) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7b61,	// (0x00037282) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7b61,	// (0x00037282) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b82,	// (0x000372a3) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b82,	// (0x000372a3) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7ba3,	// (0x000372c4) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7ba3,	// (0x000372c4) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbec,	// (0x0003f30d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbec,	// (0x0003f30d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb469,	// (0x0003ab8a) title_pane_g1_ParamLimits

0xb47c,	// (0x0003ab9d) title_pane_g2_ParamLimits

0xf554,	// (0x0003ec75) title_pane_g_ParamLimits

0x3e76,	// (0x00033597) aid_call2_pane

0x3e7e,	// (0x0003359f) aid_call_pane

0x3e86,	// (0x000335a7) popup_clock_analogue_window_g1

0x3e86,	// (0x000335a7) popup_clock_analogue_window_g2

0x0a79,	// (0x0003019a) popup_clock_analogue_window_g3

0x0a82,	// (0x000301a3) popup_clock_analogue_window_g4

0x2848,	// (0x00031f69) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0003ee1f) popup_clock_analogue_window_g

0x0a8a,	// (0x000301ab) popup_clock_analogue_window_t1

0x0a98,	// (0x000301b9) clock_digital_number_pane_ParamLimits

0x0a98,	// (0x000301b9) clock_digital_number_pane

0x0aa4,	// (0x000301c5) clock_digital_number_pane_cp02_ParamLimits

0x0aa4,	// (0x000301c5) clock_digital_number_pane_cp02

0x0ab0,	// (0x000301d1) clock_digital_number_pane_cp03_ParamLimits

0x0ab0,	// (0x000301d1) clock_digital_number_pane_cp03

0x0abc,	// (0x000301dd) clock_digital_number_pane_cp04_ParamLimits

0x0abc,	// (0x000301dd) clock_digital_number_pane_cp04

0x0ac8,	// (0x000301e9) clock_digital_separator_pane_ParamLimits

0x0ac8,	// (0x000301e9) clock_digital_separator_pane

0x0ad4,	// (0x000301f5) popup_clock_digital_window_t1_ParamLimits

0x0ad4,	// (0x000301f5) popup_clock_digital_window_t1

0x2848,	// (0x00031f69) clock_digital_number_pane_g1

0x2848,	// (0x00031f69) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0003ee2a) clock_digital_number_pane_g

0x2848,	// (0x00031f69) clock_digital_separator_pane_g1

0x2848,	// (0x00031f69) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0003ee2a) clock_digital_separator_pane_g

0xd308,	// (0x0003ca29) aid_fill_nsta_ParamLimits

0xd43e,	// (0x0003cb5f) indicator_nsta_pane_ParamLimits

0x4ac1,	// (0x000341e2) popup_clock_analogue_window

0x4ac1,	// (0x000341e2) popup_clock_digital_window

0x39f1,	// (0x00033112) grid_indicator_nsta_pane_ParamLimits

0x6ddd,	// (0x000364fe) clock_nsta_pane_t2

0x0001,

0xfab2,	// (0x0003f1d3) clock_nsta_pane_t

0x0a3d,	// (0x0003015e) aid_size_max_handle

0xba5e,	// (0x0003b17f) aid_size_min_handle

0x4488,	// (0x00033ba9) editor_scroll_pane

0x7bbe,	// (0x000372df) ex_editor_pane

0x399e,	// (0x000330bf) scroll_pane_cp13

0x37c1,	// (0x00032ee2) scroll_pane_cp14

0x3eb5,	// (0x000335d6) scroll_pane_cp36

0xd0b6,	// (0x0003c7d7) list_single_graphic_hl_pane_cp2_ParamLimits

0xd0b6,	// (0x0003c7d7) list_single_graphic_hl_pane_cp2

0xc52d,	// (0x0003bc4e) list_single_graphic_hl_pane_ParamLimits

0xc52d,	// (0x0003bc4e) list_single_graphic_hl_pane

0x3101,	// (0x00032822) aid_size_min_hl_cp1

0x7bc6,	// (0x000372e7) list_highlight_pane_cp34_ParamLimits

0x7bc6,	// (0x000372e7) list_highlight_pane_cp34

0x7bd7,	// (0x000372f8) list_single_graphic_hl_pane_g1_ParamLimits

0x7bd7,	// (0x000372f8) list_single_graphic_hl_pane_g1

0xc5d4,	// (0x0003bcf5) list_single_graphic_hl_pane_g2_ParamLimits

0xc5d4,	// (0x0003bcf5) list_single_graphic_hl_pane_g2

0xc5d4,	// (0x0003bcf5) list_single_graphic_hl_pane_g3_ParamLimits

0xc5d4,	// (0x0003bcf5) list_single_graphic_hl_pane_g3

0xc5e0,	// (0x0003bd01) list_single_graphic_hl_pane_g4_ParamLimits

0xc5e0,	// (0x0003bd01) list_single_graphic_hl_pane_g4

0xc5ec,	// (0x0003bd0d) list_single_graphic_hl_pane_g5_ParamLimits

0xc5ec,	// (0x0003bd0d) list_single_graphic_hl_pane_g5

0x0004,

0xfbfd,	// (0x0003f31e) list_single_graphic_hl_pane_g_ParamLimits

0xfbfd,	// (0x0003f31e) list_single_graphic_hl_pane_g

0xc600,	// (0x0003bd21) list_single_graphic_hl_pane_t1_ParamLimits

0xc600,	// (0x0003bd21) list_single_graphic_hl_pane_t1

0x7be4,	// (0x00037305) aid_size_min_hl_cp2

0x7bed,	// (0x0003730e) list_highlight_pane_cp34_cp2_ParamLimits

0x7bed,	// (0x0003730e) list_highlight_pane_cp34_cp2

0x7bd7,	// (0x000372f8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7bd7,	// (0x000372f8) list_single_graphic_hl_pane_g1_cp2

0x7bfa,	// (0x0003731b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7bfa,	// (0x0003731b) list_single_graphic_hl_pane_g2_cp2

0xdfdc,	// (0x0003d6fd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdfdc,	// (0x0003d6fd) list_single_graphic_hl_pane_g3_cp2

0x52dd,	// (0x000349fe) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x52dd,	// (0x000349fe) list_single_graphic_hl_pane_g4_cp2

0x7c14,	// (0x00037335) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7c14,	// (0x00037335) list_single_graphic_hl_pane_g5_cp2

0xbb46,	// (0x0003b267) control_pane_g4_ParamLimits

0xbb46,	// (0x0003b267) control_pane_g4

0x47c8,	// (0x00033ee9) bg_popup_sub_pane_cp10_ParamLimits

0x7401,	// (0x00036b22) list_choice_list_pane_ParamLimits

0x7410,	// (0x00036b31) scroll_pane_cp23

0x2bbb,	// (0x000322dc) bg_popup_preview_window_pane_cp02_ParamLimits

0x79f8,	// (0x00037119) list_preview_fixed_pane_ParamLimits

0x7a0e,	// (0x0003712f) list_preview_fixed_pane_cp_ParamLimits

0x7a0e,	// (0x0003712f) list_preview_fixed_pane_cp

0x7a1a,	// (0x0003713b) popup_preview_fixed_window_g1_ParamLimits

0x7a1a,	// (0x0003713b) popup_preview_fixed_window_g1

0x7a26,	// (0x00037147) popup_preview_fixed_window_g2_ParamLimits

0x7a26,	// (0x00037147) popup_preview_fixed_window_g2

0x0002,

0xfb85,	// (0x0003f2a6) popup_preview_fixed_window_g_ParamLimits

0xfb85,	// (0x0003f2a6) popup_preview_fixed_window_g

0x09b1,	// (0x000300d2) aid_navi_side_left_pane_ParamLimits

0x09c6,	// (0x000300e7) aid_navi_side_right_pane_ParamLimits

0x09de,	// (0x000300ff) navi_icon_pane_stacon_ParamLimits

0x09f2,	// (0x00030113) navi_navi_pane_stacon_ParamLimits

0x09de,	// (0x000300ff) navi_text_pane_stacon_ParamLimits

0xf441,	// (0x0003eb62) main_text_info_pane

0x7c3e,	// (0x0003735f) listscroll_text_info_pane

0x7c46,	// (0x00037367) list_text_info_pane_ParamLimits

0x7c46,	// (0x00037367) list_text_info_pane

0x7c55,	// (0x00037376) scroll_pane_cp24_ParamLimits

0x7c55,	// (0x00037376) scroll_pane_cp24

0xdfea,	// (0x0003d70b) list_text_info_pane_t1_ParamLimits

0xdfea,	// (0x0003d70b) list_text_info_pane_t1

0xbc91,	// (0x0003b3b2) popup_fast_swap2_window_ParamLimits

0xbc91,	// (0x0003b3b2) popup_fast_swap2_window

0x7ca4,	// (0x000373c5) aid_size_cell_fast2

0x283e,	// (0x00031f5f) bg_popup_window_pane_cp17

0x51c1,	// (0x000348e2) heading_pane_cp2

0x348b,	// (0x00032bac) listscroll_fast2_pane

0x7cae,	// (0x000373cf) grid_fast2_pane

0x7cb8,	// (0x000373d9) listscroll_fast2_pane_g1

0x7cc0,	// (0x000373e1) listscroll_fast2_pane_g2

0x0001,

0xfc08,	// (0x0003f329) listscroll_fast2_pane_g

0x399e,	// (0x000330bf) scroll_pane_cp26

0x7cca,	// (0x000373eb) cell_fast2_pane_ParamLimits

0x7cca,	// (0x000373eb) cell_fast2_pane

0x7cdf,	// (0x00037400) cell_fast2_pane_g1

0x7ce8,	// (0x00037409) cell_fast2_pane_g2

0x7cf1,	// (0x00037412) cell_fast2_pane_g3

0x0002,

0xfc0d,	// (0x0003f32e) cell_fast2_pane_g

0x357e,	// (0x00032c9f) grid_highlight_pane_cp9

0x0f2c,	// (0x0003064d) main_eswt_pane_ParamLimits

0x0f2c,	// (0x0003064d) main_eswt_pane

0x7c6a,	// (0x0003738b) list_single_text_info_pane

0x7cf9,	// (0x0003741a) eswt_ctrl_button_pane

0x7cf9,	// (0x0003741a) eswt_ctrl_canvas_pane

0x7d01,	// (0x00037422) eswt_ctrl_combo_pane

0x7cf9,	// (0x0003741a) eswt_ctrl_default_pane

0x7cf9,	// (0x0003741a) eswt_ctrl_label_pane

0x7d09,	// (0x0003742a) eswt_ctrl_wait_pane

0x7d11,	// (0x00037432) eswt_shell_pane

0x283e,	// (0x00031f5f) listscroll_eswt_app_pane

0x7d31,	// (0x00037452) popup_eswt_tasktip_window_ParamLimits

0x7d31,	// (0x00037452) popup_eswt_tasktip_window

0x4dd7,	// (0x000344f8) bg_popup_window_pane_cp18

0x7d42,	// (0x00037463) eswt_control_pane_g1_ParamLimits

0x7d42,	// (0x00037463) eswt_control_pane_g1

0x7d4f,	// (0x00037470) eswt_control_pane_g2_ParamLimits

0x7d4f,	// (0x00037470) eswt_control_pane_g2

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_ParamLimits

0x7d5c,	// (0x0003747d) eswt_control_pane_g3

0x7d69,	// (0x0003748a) eswt_control_pane_g4_ParamLimits

0x7d69,	// (0x0003748a) eswt_control_pane_g4

0x0003,

0xfc14,	// (0x0003f335) eswt_control_pane_g_ParamLimits

0xfc14,	// (0x0003f335) eswt_control_pane_g

0x3822,	// (0x00032f43) bg_button_pane_ParamLimits

0x3822,	// (0x00032f43) bg_button_pane

0x3593,	// (0x00032cb4) common_borders_pane_copy2_ParamLimits

0x3593,	// (0x00032cb4) common_borders_pane_copy2

0x7d76,	// (0x00037497) control_button_pane_g1_ParamLimits

0x7d76,	// (0x00037497) control_button_pane_g1

0x7d82,	// (0x000374a3) control_button_pane_g2_ParamLimits

0x7d82,	// (0x000374a3) control_button_pane_g2

0x7d8e,	// (0x000374af) control_button_pane_g3_ParamLimits

0x7d8e,	// (0x000374af) control_button_pane_g3

0x0002,

0xfc1d,	// (0x0003f33e) control_button_pane_g_ParamLimits

0xfc1d,	// (0x0003f33e) control_button_pane_g

0x7da2,	// (0x000374c3) control_button_pane_t1

0x7db0,	// (0x000374d1) control_button_pane_t2

0x0001,

0xfc24,	// (0x0003f345) control_button_pane_t

0x4cdf,	// (0x00034400) bg_button_pane_g1

0x4cef,	// (0x00034410) bg_button_pane_g2

0x4ce7,	// (0x00034408) bg_button_pane_g3

0x4cff,	// (0x00034420) bg_button_pane_g4

0x4cf7,	// (0x00034418) bg_button_pane_g5

0x4d07,	// (0x00034428) bg_button_pane_g6

0x4d0f,	// (0x00034430) bg_button_pane_g7

0x4d1f,	// (0x00034440) bg_button_pane_g8

0x4d17,	// (0x00034438) bg_button_pane_g9

0x0008,

0xf867,	// (0x0003ef88) bg_button_pane_g

0x73bc,	// (0x00036add) common_borders_pane_ParamLimits

0x73bc,	// (0x00036add) common_borders_pane

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy1_ParamLimits

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy1

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy1_ParamLimits

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy1

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy1_ParamLimits

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy1

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy1_ParamLimits

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy1

0x73f7,	// (0x00036b18) bg_eswt_ctrl_canvas_pane_g1

0x73bc,	// (0x00036add) common_borders_pane_cp2_ParamLimits

0x73bc,	// (0x00036add) common_borders_pane_cp2

0x73bc,	// (0x00036add) common_borders_pane_cp3_ParamLimits

0x73bc,	// (0x00036add) common_borders_pane_cp3

0x7dbe,	// (0x000374df) separator_horizontal_pane

0x7dc6,	// (0x000374e7) separator_vertical_pane

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy2_ParamLimits

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy2

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy2_ParamLimits

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy2

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy2_ParamLimits

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy2

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy2_ParamLimits

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy2

0x283e,	// (0x00031f5f) common_borders_pane_cp4

0x7dcf,	// (0x000374f0) separator_horizontal_pane_g1

0x7dd8,	// (0x000374f9) separator_horizontal_pane_g2

0x7de1,	// (0x00037502) separator_horizontal_pane_g3

0x0002,

0xfc29,	// (0x0003f34a) separator_horizontal_pane_g

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy3_ParamLimits

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy3

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy3_ParamLimits

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy3

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy3_ParamLimits

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy3

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy3_ParamLimits

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy3

0x283e,	// (0x00031f5f) common_borders_pane_cp5

0x7dea,	// (0x0003750b) separator_vertical_pane_g1

0x7df3,	// (0x00037514) separator_vertical_pane_g2

0x7dfc,	// (0x0003751d) separator_vertical_pane_g3

0x0002,

0xfc30,	// (0x0003f351) separator_vertical_pane_g

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy4_ParamLimits

0x7d42,	// (0x00037463) eswt_control_pane_g1_copy4

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy4_ParamLimits

0x7d4f,	// (0x00037470) eswt_control_pane_g2_copy4

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy4_ParamLimits

0x7d5c,	// (0x0003747d) eswt_control_pane_g3_copy4

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy4_ParamLimits

0x7d69,	// (0x0003748a) eswt_control_pane_g4_copy4

0xe005,	// (0x0003d726) eswt_ctrl_combo_button_pane

0xe00d,	// (0x0003d72e) eswt_ctrl_input_pane

0xe015,	// (0x0003d736) popup_choice_list_window_cp70

0xe01d,	// (0x0003d73e) eswt_ctrl_input_pane_t1

0x283e,	// (0x00031f5f) input_focus_pane_cp70

0x73bc,	// (0x00036add) bg_button_pane_cp70_ParamLimits

0x73bc,	// (0x00036add) bg_button_pane_cp70

0xe02b,	// (0x0003d74c) eswt_ctrl_combo_button_pane_g1

0x7e33,	// (0x00037554) wait_bar_pane_cp70

0x4dd7,	// (0x000344f8) bg_popup_window_pane_cp70_ParamLimits

0x4dd7,	// (0x000344f8) bg_popup_window_pane_cp70

0x7e3b,	// (0x0003755c) popup_eswt_tasktip_window_t1

0x7e51,	// (0x00037572) wait_bar_pane_cp71_ParamLimits

0x7e51,	// (0x00037572) wait_bar_pane_cp71

0x7e5d,	// (0x0003757e) grid_eswt_app_pane

0x3cb8,	// (0x000333d9) scroll_pane_cp70

0xe033,	// (0x0003d754) cell_eswt_app_pane_ParamLimits

0xe033,	// (0x0003d754) cell_eswt_app_pane

0xe05d,	// (0x0003d77e) cell_eswt_app_pane_g1_ParamLimits

0xe05d,	// (0x0003d77e) cell_eswt_app_pane_g1

0xe08c,	// (0x0003d7ad) cell_eswt_app_pane_g2_ParamLimits

0xe08c,	// (0x0003d7ad) cell_eswt_app_pane_g2

0x0001,

0xfc37,	// (0x0003f358) cell_eswt_app_pane_g_ParamLimits

0xfc37,	// (0x0003f358) cell_eswt_app_pane_g

0xe0b5,	// (0x0003d7d6) cell_eswt_app_pane_t1_ParamLimits

0xe0b5,	// (0x0003d7d6) cell_eswt_app_pane_t1

0x7f20,	// (0x00037641) grid_highlight_pane_cp70_ParamLimits

0x7f20,	// (0x00037641) grid_highlight_pane_cp70

0x435d,	// (0x00033a7e) set_content_pane_g1

0x4728,	// (0x00033e49) status_small_volume_pane

0x1e8f,	// (0x000315b0) status_small_volume_pane_g1

0x1e97,	// (0x000315b8) volume_small2_pane

0x1ea0,	// (0x000315c1) volume_small2_pane_g1

0x1ea9,	// (0x000315ca) volume_small2_pane_g2

0x1eb2,	// (0x000315d3) volume_small2_pane_g3

0x1ebb,	// (0x000315dc) volume_small2_pane_g4

0x1ec4,	// (0x000315e5) volume_small2_pane_g5

0x1ecd,	// (0x000315ee) volume_small2_pane_g6

0x1ed6,	// (0x000315f7) volume_small2_pane_g7

0x1edf,	// (0x00031600) volume_small2_pane_g8

0x1ee8,	// (0x00031609) volume_small2_pane_g9

0x1ef1,	// (0x00031612) volume_small2_pane_g10

0x0009,

0xfc3c,	// (0x0003f35d) volume_small2_pane_g

0x77bd,	// (0x00036ede) fep_vkb_top_text_pane_g1_ParamLimits

0xdf84,	// (0x0003d6a5) fep_vkb_top_text_pane_t1_ParamLimits

0x7a32,	// (0x00037153) popup_preview_fixed_window_g3_ParamLimits

0x7a32,	// (0x00037153) popup_preview_fixed_window_g3

0xc2ae,	// (0x0003b9cf) popup_toolbar_trans_pane

0xd9ac,	// (0x0003d0cd) aid_height_set_list_ParamLimits

0x6158,	// (0x00035879) aid_size_parent_ParamLimits

0x47c8,	// (0x00033ee9) list_highlight_pane_cp2_ParamLimits

0x435d,	// (0x00033a7e) set_content_pane_g1_ParamLimits

0xc53f,	// (0x0003bc60) list_single_image_pane_ParamLimits

0xc53f,	// (0x0003bc60) list_single_image_pane

0xe0e7,	// (0x0003d808) aid_size_cell_image_ParamLimits

0xe0e7,	// (0x0003d808) aid_size_cell_image

0xe0f4,	// (0x0003d815) grid_single_image_pane_ParamLimits

0xe0f4,	// (0x0003d815) grid_single_image_pane

0x482a,	// (0x00033f4b) list_single_image_pane_g1_ParamLimits

0x482a,	// (0x00033f4b) list_single_image_pane_g1

0x7f47,	// (0x00037668) list_single_image_pane_g2_ParamLimits

0x7f47,	// (0x00037668) list_single_image_pane_g2

0x0001,

0xfc51,	// (0x0003f372) list_single_image_pane_g_ParamLimits

0xfc51,	// (0x0003f372) list_single_image_pane_g

0x4836,	// (0x00033f57) list_single_image_pane_t1_ParamLimits

0x4836,	// (0x00033f57) list_single_image_pane_t1

0xe102,	// (0x0003d823) cell_image_list_pane_ParamLimits

0xe102,	// (0x0003d823) cell_image_list_pane

0xe118,	// (0x0003d839) cell_image_list_pane_g1

0xe121,	// (0x0003d842) cell_image_list_pane_g2

0x0001,

0xfc56,	// (0x0003f377) cell_image_list_pane_g

0x7f80,	// (0x000376a1) aid_size_cell_tb_trans_pane

0x3822,	// (0x00032f43) bg_tb_trans_pane

0x7f92,	// (0x000376b3) grid_tb_trans_pane

0x4cdf,	// (0x00034400) bg_tb_trans_pane_g1

0x4cef,	// (0x00034410) bg_tb_trans_pane_g2

0x4ce7,	// (0x00034408) bg_tb_trans_pane_g3

0x4cff,	// (0x00034420) bg_tb_trans_pane_g4

0x4cf7,	// (0x00034418) bg_tb_trans_pane_g5

0x4d1f,	// (0x00034440) bg_tb_trans_pane_g6

0x4d17,	// (0x00034438) bg_tb_trans_pane_g7

0x4d07,	// (0x00034428) bg_tb_trans_pane_g8

0x4d0f,	// (0x00034430) bg_tb_trans_pane_g9

0x0008,

0xfc5b,	// (0x0003f37c) bg_tb_trans_pane_g

0x7fa6,	// (0x000376c7) cell_toolbar_trans_pane_ParamLimits

0x7fa6,	// (0x000376c7) cell_toolbar_trans_pane

0x73f7,	// (0x00036b18) cell_toolbar_trans_pane_g1

0xdd6d,	// (0x0003d48e) list_form2_midp_pane_t1

0xdd7b,	// (0x0003d49c) list_form2_midp_pane_t2

0x0001,

0xfaf8,	// (0x0003f219) list_form2_midp_pane_t

0x6fdd,	// (0x000366fe) scroll_pane_cp51_ParamLimits

0x7199,	// (0x000368ba) form2_midp_wait_pane_g1

0x71a2,	// (0x000368c3) form2_midp_wait_pane_g2

0x71ab,	// (0x000368cc) form2_midp_wait_pane_g3

0x0002,

0xfb0d,	// (0x0003f22e) form2_midp_wait_pane_g

0x2932,	// (0x00032053) list_highlight_pane_cp21_ParamLimits

0x7202,	// (0x00036923) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7211,	// (0x00036932) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x632b,	// (0x00035a4c) list_single_2graphic_im_pane_ParamLimits

0x632b,	// (0x00035a4c) list_single_2graphic_im_pane

0xe12a,	// (0x0003d84b) list_single_2graphic_im_pane_g1_ParamLimits

0xe12a,	// (0x0003d84b) list_single_2graphic_im_pane_g1

0xe13b,	// (0x0003d85c) list_single_2graphic_im_pane_g2_ParamLimits

0xe13b,	// (0x0003d85c) list_single_2graphic_im_pane_g2

0xe147,	// (0x0003d868) list_single_2graphic_im_pane_g3_ParamLimits

0xe147,	// (0x0003d868) list_single_2graphic_im_pane_g3

0x0003,

0xfc6e,	// (0x0003f38f) list_single_2graphic_im_pane_g_ParamLimits

0xfc6e,	// (0x0003f38f) list_single_2graphic_im_pane_g

0xe15b,	// (0x0003d87c) list_single_2graphic_im_pane_t1_ParamLimits

0xe15b,	// (0x0003d87c) list_single_2graphic_im_pane_t1

0x7a3e,	// (0x0003715f) list_single_graphic_2heading_pane_fp_ParamLimits

0x7a3e,	// (0x0003715f) list_single_graphic_2heading_pane_fp

0x2f73,	// (0x00032694) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2f73,	// (0x00032694) list_single_graphic_2heading_pane_fp_g1

0x7a53,	// (0x00037174) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7a53,	// (0x00037174) list_single_graphic_2heading_pane_fp_g2

0x2f3c,	// (0x0003265d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x2f3c,	// (0x0003265d) list_single_graphic_2heading_pane_fp_g3

0x2f48,	// (0x00032669) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x2f48,	// (0x00032669) list_single_graphic_2heading_pane_fp_g4

0x7a5f,	// (0x00037180) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7a5f,	// (0x00037180) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb95,	// (0x0003f2b6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb95,	// (0x0003f2b6) list_single_graphic_2heading_pane_fp_g

0x3140,	// (0x00032861) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3140,	// (0x00032861) list_single_graphic_2heading_pane_fp_t1

0x2fab,	// (0x000326cc) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2fab,	// (0x000326cc) list_single_graphic_2heading_pane_fp_t2

0x3156,	// (0x00032877) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3156,	// (0x00032877) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc77,	// (0x0003f398) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc77,	// (0x0003f398) list_single_graphic_2heading_pane_fp_t

0x7483,	// (0x00036ba4) fep_hwr_write_pane_g5_ParamLimits

0x7483,	// (0x00036ba4) fep_hwr_write_pane_g5

0x748f,	// (0x00036bb0) fep_hwr_write_pane_g6_ParamLimits

0x748f,	// (0x00036bb0) fep_hwr_write_pane_g6

0x7d11,	// (0x00037432) eswt_shell_pane_ParamLimits

0x4dd7,	// (0x000344f8) bg_popup_window_pane_cp18_ParamLimits

0x60a0,	// (0x000357c1) heading_pane_cp70

0x7e3b,	// (0x0003755c) popup_eswt_tasktip_window_t1_ParamLimits

0xd363,	// (0x0003ca84) aid_touch_tab_arrow_left

0xd379,	// (0x0003ca9a) aid_touch_tab_arrow_right

0xb494,	// (0x0003abb5) title_pane_g3_ParamLimits

0xb494,	// (0x0003abb5) title_pane_g3

0x37e1,	// (0x00032f02) set_value_pane_g1

0xc2ae,	// (0x0003b9cf) popup_toolbar_trans_pane_ParamLimits

0x7f80,	// (0x000376a1) aid_size_cell_tb_trans_pane_ParamLimits

0x3822,	// (0x00032f43) bg_tb_trans_pane_ParamLimits

0x7f92,	// (0x000376b3) grid_tb_trans_pane_ParamLimits

0x2bbb,	// (0x000322dc) cont_note_pane_ParamLimits

0x2bbb,	// (0x000322dc) cont_note_pane

0x3593,	// (0x00032cb4) cont_snote2_single_text_pane_ParamLimits

0x3593,	// (0x00032cb4) cont_snote2_single_text_pane

0x3593,	// (0x00032cb4) cont_snote2_single_graphic_pane_ParamLimits

0x3593,	// (0x00032cb4) cont_snote2_single_graphic_pane

0x53e8,	// (0x00034b09) cont_note_wait_pane_ParamLimits

0x53e8,	// (0x00034b09) cont_note_wait_pane

0x53e8,	// (0x00034b09) cont_note_image_pane_ParamLimits

0x53e8,	// (0x00034b09) cont_note_image_pane

0x803a,	// (0x0003775b) popup_note2_window_g1_ParamLimits

0x803a,	// (0x0003775b) popup_note2_window_g1

0x806b,	// (0x0003778c) popup_note2_window_t1_ParamLimits

0x806b,	// (0x0003778c) popup_note2_window_t1

0x80b0,	// (0x000377d1) popup_note2_window_t2_ParamLimits

0x80b0,	// (0x000377d1) popup_note2_window_t2

0x80f5,	// (0x00037816) popup_note2_window_t3_ParamLimits

0x80f5,	// (0x00037816) popup_note2_window_t3

0x813a,	// (0x0003785b) popup_note2_window_t4_ParamLimits

0x813a,	// (0x0003785b) popup_note2_window_t4

0x32c3,	// (0x000329e4) popup_note2_window_t5_ParamLimits

0x32c3,	// (0x000329e4) popup_note2_window_t5

0x0004,

0xfc83,	// (0x0003f3a4) popup_note2_window_t_ParamLimits

0xfc83,	// (0x0003f3a4) popup_note2_window_t

0x8169,	// (0x0003788a) popup_note2_image_window_g1_ParamLimits

0x8169,	// (0x0003788a) popup_note2_image_window_g1

0x8175,	// (0x00037896) popup_note2_image_window_g2_ParamLimits

0x8175,	// (0x00037896) popup_note2_image_window_g2

0x0001,

0xfc8e,	// (0x0003f3af) popup_note2_image_window_g_ParamLimits

0xfc8e,	// (0x0003f3af) popup_note2_image_window_g

0x8187,	// (0x000378a8) popup_note2_image_window_t1_ParamLimits

0x8187,	// (0x000378a8) popup_note2_image_window_t1

0x819f,	// (0x000378c0) popup_note2_image_window_t2_ParamLimits

0x819f,	// (0x000378c0) popup_note2_image_window_t2

0x81b7,	// (0x000378d8) popup_note2_image_window_t3_ParamLimits

0x81b7,	// (0x000378d8) popup_note2_image_window_t3

0x0002,

0xfc93,	// (0x0003f3b4) popup_note2_image_window_t_ParamLimits

0xfc93,	// (0x0003f3b4) popup_note2_image_window_t

0x53f6,	// (0x00034b17) popup_note2_wait_window_g1_ParamLimits

0x53f6,	// (0x00034b17) popup_note2_wait_window_g1

0x81d3,	// (0x000378f4) popup_note2_wait_window_g2_ParamLimits

0x81d3,	// (0x000378f4) popup_note2_wait_window_g2

0x540e,	// (0x00034b2f) popup_note2_wait_window_g3_ParamLimits

0x540e,	// (0x00034b2f) popup_note2_wait_window_g3

0x0002,

0xfc9a,	// (0x0003f3bb) popup_note2_wait_window_g_ParamLimits

0xfc9a,	// (0x0003f3bb) popup_note2_wait_window_g

0x81df,	// (0x00037900) popup_note2_wait_window_t1_ParamLimits

0x81df,	// (0x00037900) popup_note2_wait_window_t1

0x81fd,	// (0x0003791e) popup_note2_wait_window_t2_ParamLimits

0x81fd,	// (0x0003791e) popup_note2_wait_window_t2

0x821b,	// (0x0003793c) popup_note2_wait_window_t3_ParamLimits

0x821b,	// (0x0003793c) popup_note2_wait_window_t3

0x822d,	// (0x0003794e) popup_note2_wait_window_t4_ParamLimits

0x822d,	// (0x0003794e) popup_note2_wait_window_t4

0x0003,

0xfca1,	// (0x0003f3c2) popup_note2_wait_window_t_ParamLimits

0xfca1,	// (0x0003f3c2) popup_note2_wait_window_t

0x823f,	// (0x00037960) wait_bar2_pane_ParamLimits

0x823f,	// (0x00037960) wait_bar2_pane

0x8257,	// (0x00037978) popup_snote2_single_text_window_g1_ParamLimits

0x8257,	// (0x00037978) popup_snote2_single_text_window_g1

0x827f,	// (0x000379a0) popup_snote2_single_text_window_t1_ParamLimits

0x827f,	// (0x000379a0) popup_snote2_single_text_window_t1

0x82cb,	// (0x000379ec) popup_snote2_single_text_window_t2_ParamLimits

0x82cb,	// (0x000379ec) popup_snote2_single_text_window_t2

0x8317,	// (0x00037a38) popup_snote2_single_text_window_t3_ParamLimits

0x8317,	// (0x00037a38) popup_snote2_single_text_window_t3

0x8358,	// (0x00037a79) popup_snote2_single_text_window_t4_ParamLimits

0x8358,	// (0x00037a79) popup_snote2_single_text_window_t4

0x838e,	// (0x00037aaf) popup_snote2_single_text_window_t5_ParamLimits

0x838e,	// (0x00037aaf) popup_snote2_single_text_window_t5

0x0004,

0xfcaa,	// (0x0003f3cb) popup_snote2_single_text_window_t_ParamLimits

0xfcaa,	// (0x0003f3cb) popup_snote2_single_text_window_t

0x83b9,	// (0x00037ada) popup_snote2_single_graphic_window_g1_ParamLimits

0x83b9,	// (0x00037ada) popup_snote2_single_graphic_window_g1

0x83e1,	// (0x00037b02) popup_snote2_single_graphic_window_g2_ParamLimits

0x83e1,	// (0x00037b02) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb5,	// (0x0003f3d6) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb5,	// (0x0003f3d6) popup_snote2_single_graphic_window_g

0x8409,	// (0x00037b2a) popup_snote2_single_graphic_window_t1_ParamLimits

0x8409,	// (0x00037b2a) popup_snote2_single_graphic_window_t1

0x8455,	// (0x00037b76) popup_snote2_single_graphic_window_t2_ParamLimits

0x8455,	// (0x00037b76) popup_snote2_single_graphic_window_t2

0x8317,	// (0x00037a38) popup_snote2_single_graphic_window_t3_ParamLimits

0x8317,	// (0x00037a38) popup_snote2_single_graphic_window_t3

0x8358,	// (0x00037a79) popup_snote2_single_graphic_window_t4_ParamLimits

0x8358,	// (0x00037a79) popup_snote2_single_graphic_window_t4

0x838e,	// (0x00037aaf) popup_snote2_single_graphic_window_t5_ParamLimits

0x838e,	// (0x00037aaf) popup_snote2_single_graphic_window_t5

0x0004,

0xfcba,	// (0x0003f3db) popup_snote2_single_graphic_window_t_ParamLimits

0xfcba,	// (0x0003f3db) popup_snote2_single_graphic_window_t

0x6ea0,	// (0x000365c1) clock_nsta_pane_cp2_t1

0x6ea0,	// (0x000365c1) clock_nsta_pane_cp2_t2

0x0001,

0xface,	// (0x0003f1ef) clock_nsta_pane_cp2_t

0x072d,	// (0x0002fe4e) form_field_data_wide_pane_g1_ParamLimits

0x383c,	// (0x00032f5d) form_field_data_wide_pane_g2_ParamLimits

0x383c,	// (0x00032f5d) form_field_data_wide_pane_g2

0x3848,	// (0x00032f69) form_field_data_wide_pane_g3_ParamLimits

0x3848,	// (0x00032f69) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0003eda2) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0003eda2) form_field_data_wide_pane_g

0xdca6,	// (0x0003d3c7) grid_touch_3_pane_ParamLimits

0xdca6,	// (0x0003d3c7) grid_touch_3_pane

0xe18c,	// (0x0003d8ad) cell_touch_3_pane_ParamLimits

0xe18c,	// (0x0003d8ad) cell_touch_3_pane

0x73f7,	// (0x00036b18) cell_touch_3_pane_g1

0x73f7,	// (0x00036b18) cell_touch_3_pane_g2

0x0001,

0xfb53,	// (0x0003f274) cell_touch_3_pane_g

0x32f5,	// (0x00032a16) cont_query_data_pane

0x32fd,	// (0x00032a1e) cont_query_data_pane_cp1

0x84cf,	// (0x00037bf0) button_value_adjust_pane_cp7

0x84d7,	// (0x00037bf8) query_popup_pane_cp3

0x3f70,	// (0x00033691) bg_popup_sub_pane_cp22_ParamLimits

0x0af3,	// (0x00030214) navi_navi_volume_pane_cp2

0x0b0e,	// (0x0003022f) popup_side_volume_key_window_g2

0x0b1d,	// (0x0003023e) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0003ee38) popup_side_volume_key_window_g

0x0b3a,	// (0x0003025b) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0003ee3f) popup_side_volume_key_window_t

0x4227,	// (0x00033948) popup_side_volume_key_window_ParamLimits

0xb65f,	// (0x0003ad80) list_double_graphic_pane_g4_ParamLimits

0xb65f,	// (0x0003ad80) list_double_graphic_pane_g4

0xdb25,	// (0x0003d246) list_single_2heading_msg_pane_ParamLimits

0xdb25,	// (0x0003d246) list_single_2heading_msg_pane

0xc616,	// (0x0003bd37) list_single_2heading_msg_pane_g1_ParamLimits

0xc616,	// (0x0003bd37) list_single_2heading_msg_pane_g1

0xc622,	// (0x0003bd43) list_single_2heading_msg_pane_g2_ParamLimits

0xc622,	// (0x0003bd43) list_single_2heading_msg_pane_g2

0xc635,	// (0x0003bd56) list_single_2heading_msg_pane_g3_ParamLimits

0xc635,	// (0x0003bd56) list_single_2heading_msg_pane_g3

0xc641,	// (0x0003bd62) list_single_2heading_msg_pane_g4_ParamLimits

0xc641,	// (0x0003bd62) list_single_2heading_msg_pane_g4

0x0003,

0xfcc5,	// (0x0003f3e6) list_single_2heading_msg_pane_g_ParamLimits

0xfcc5,	// (0x0003f3e6) list_single_2heading_msg_pane_g

0xc659,	// (0x0003bd7a) list_single_2heading_msg_pane_t1_ParamLimits

0xc659,	// (0x0003bd7a) list_single_2heading_msg_pane_t1

0xc681,	// (0x0003bda2) list_single_2heading_msg_pane_t2_ParamLimits

0xc681,	// (0x0003bda2) list_single_2heading_msg_pane_t2

0xc6ec,	// (0x0003be0d) list_single_2heading_msg_pane_t3_ParamLimits

0xc6ec,	// (0x0003be0d) list_single_2heading_msg_pane_t3

0x323b,	// (0x0003295c) list_single_2heading_msg_pane_t4_ParamLimits

0x323b,	// (0x0003295c) list_single_2heading_msg_pane_t4

0x0003,

0xfcce,	// (0x0003f3ef) list_single_2heading_msg_pane_t_ParamLimits

0xfcce,	// (0x0003f3ef) list_single_2heading_msg_pane_t

0x2886,	// (0x00031fa7) title_pane_g4_ParamLimits

0x2886,	// (0x00031fa7) title_pane_g4

0x0901,	// (0x00030022) title_pane_stacon_g3_ParamLimits

0x0901,	// (0x00030022) title_pane_stacon_g3

0x7ffd,	// (0x0003771e) list_single_2graphic_im_pane_g4_ParamLimits

0x7ffd,	// (0x0003771e) list_single_2graphic_im_pane_g4

0x5e47,	// (0x00035568) popup_side_volume_key_window_cp

0x664e,	// (0x00035d6f) main_idle_act2_pane_t1

0x1547,	// (0x00030c68) toolbar_button_pane_g10

0xcf49,	// (0x0003c66a) popup_toolbar_window_cp1

0x6e91,	// (0x000365b2) clock_nsta_pane_cp_t1

0x6e91,	// (0x000365b2) clock_nsta_pane_cp_t2

0x0001,

0xfac9,	// (0x0003f1ea) clock_nsta_pane_cp_t

0x0af3,	// (0x00030214) navi_navi_volume_pane_cp2_ParamLimits

0x0b02,	// (0x00030223) popup_side_volume_key_window_g1_ParamLimits

0x0b0e,	// (0x0003022f) popup_side_volume_key_window_g2_ParamLimits

0x0b1d,	// (0x0003023e) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0003ee38) popup_side_volume_key_window_g_ParamLimits

0x1afb,	// (0x0003121c) fep_hwr_aid_pane

0x1ba2,	// (0x000312c3) bg_fep_hwr_top_pane_g4_ParamLimits

0x7453,	// (0x00036b74) fep_hwr_top_pane_g1_ParamLimits

0x7465,	// (0x00036b86) fep_hwr_top_pane_g2_ParamLimits

0x1bc2,	// (0x000312e3) fep_hwr_top_pane_g3_ParamLimits

0xfb1e,	// (0x0003f23f) fep_hwr_top_pane_g_ParamLimits

0x1bd7,	// (0x000312f8) fep_hwr_top_text_pane_ParamLimits

0x5c0a,	// (0x0003532b) aid_touch_tab_arrow_arrow_2

0x5c13,	// (0x00035334) aid_touch_tab_arrow_left_2

0x1b0f,	// (0x00031230) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1b46,	// (0x00031267) fep_hwr_prediction_pane

0x75c5,	// (0x00036ce6) fep_vkb_prediction_pane

0xdf64,	// (0x0003d685) fep_vkb_side_pane_g3_ParamLimits

0xdf64,	// (0x0003d685) fep_vkb_side_pane_g3

0x1d52,	// (0x00031473) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1dbe,	// (0x000314df) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1dcb,	// (0x000314ec) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbcd,	// (0x0003f2ee) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1efa,	// (0x0003161b) fep_hwr_prediction_pane_g1

0x1f04,	// (0x00031625) fep_hwr_prediction_pane_g2

0x1f0c,	// (0x0003162d) fep_hwr_prediction_pane_g3

0x1f14,	// (0x00031635) fep_hwr_prediction_pane_g4

0x0003,

0xfcd7,	// (0x0003f3f8) fep_hwr_prediction_pane_g

0x84fc,	// (0x00037c1d) fep_vkb_prediction_pane_g1

0x8506,	// (0x00037c27) fep_vkb_prediction_pane_g2

0x850e,	// (0x00037c2f) fep_vkb_prediction_pane_g3

0x8516,	// (0x00037c37) fep_vkb_prediction_pane_g4

0x0003,

0xfce0,	// (0x0003f401) fep_vkb_prediction_pane_g

0x18dc,	// (0x00030ffd) slider_set_pane_g3

0x18f0,	// (0x00031011) slider_set_pane_g4

0x1908,	// (0x00031029) slider_set_pane_g5

0x18dc,	// (0x00030ffd) slider_set_pane_g6

0x191e,	// (0x0003103f) slider_set_pane_g7

0x62bd,	// (0x000359de) slider_form_pane_g3

0x62c6,	// (0x000359e7) slider_form_pane_g4

0x62ce,	// (0x000359ef) slider_form_pane_g5

0x62bd,	// (0x000359de) slider_form_pane_g6

0xdaf7,	// (0x0003d218) slider_form_pane_g7

0x6939,	// (0x0003605a) slider_set_pane_vc_g3

0x6942,	// (0x00036063) slider_set_pane_vc_g4

0x694b,	// (0x0003606c) slider_set_pane_vc_g5

0x6939,	// (0x0003605a) slider_set_pane_vc_g6

0x6954,	// (0x00036075) slider_set_pane_vc_g7

0x6b4c,	// (0x0003626d) slider_form_pane_vc_g1

0x6b55,	// (0x00036276) slider_form_pane_vc_g2

0x6b5e,	// (0x0003627f) slider_form_pane_vc_g3

0x6b4c,	// (0x0003626d) slider_form_pane_vc_g4

0x6b67,	// (0x00036288) slider_form_pane_vc_g5

0x0004,

0xfa9b,	// (0x0003f1bc) slider_form_pane_vc_g

0xf441,	// (0x0003eb62) main_idle_act3_pane

0x851e,	// (0x00037c3f) ai3_links_pane

0xe1d6,	// (0x0003d8f7) popup_ai3_data_window_ParamLimits

0xe1d6,	// (0x0003d8f7) popup_ai3_data_window

0x283e,	// (0x00031f5f) grid_ai3_links_pane

0xe1f0,	// (0x0003d911) cell_ai3_links_pane_ParamLimits

0xe1f0,	// (0x0003d911) cell_ai3_links_pane

0x8559,	// (0x00037c7a) bg_popup_sub_pane_cp11

0x8566,	// (0x00037c87) cell_ai3_links_pane_g1

0x283e,	// (0x00031f5f) bg_popup_sub_pane_cp12

0x858b,	// (0x00037cac) heading_ai3_data_pane

0x8593,	// (0x00037cb4) list_ai3_gene_pane

0x859f,	// (0x00037cc0) popup_ai3_data_window_g1

0x85a7,	// (0x00037cc8) heading_ai3_data_pane_g1

0x85af,	// (0x00037cd0) heading_ai3_data_pane_t1

0x85bd,	// (0x00037cde) list_double_ai3_gene_pane_ParamLimits

0x85bd,	// (0x00037cde) list_double_ai3_gene_pane

0x85ca,	// (0x00037ceb) list_single_ai3_gene_pane_ParamLimits

0x85ca,	// (0x00037ceb) list_single_ai3_gene_pane

0x73bc,	// (0x00036add) list_highlight_pane_cp7_ParamLimits

0x73bc,	// (0x00036add) list_highlight_pane_cp7

0x85d7,	// (0x00037cf8) list_single_a13_gene_pane_t1_ParamLimits

0x85d7,	// (0x00037cf8) list_single_a13_gene_pane_t1

0x85ee,	// (0x00037d0f) list_single_ai3_gene_pane_g1

0x85f7,	// (0x00037d18) list_single_ai3_gene_pane_g2

0x0001,

0xfce9,	// (0x0003f40a) list_single_ai3_gene_pane_g

0x85ff,	// (0x00037d20) list_double_ai3_gene_pane_g1_ParamLimits

0x85ff,	// (0x00037d20) list_double_ai3_gene_pane_g1

0x860b,	// (0x00037d2c) list_double_ai3_gene_pane_t1_ParamLimits

0x860b,	// (0x00037d2c) list_double_ai3_gene_pane_t1

0x8627,	// (0x00037d48) list_double_ai3_gene_pane_t2_ParamLimits

0x8627,	// (0x00037d48) list_double_ai3_gene_pane_t2

0x863d,	// (0x00037d5e) list_double_ai3_gene_pane_t3_ParamLimits

0x863d,	// (0x00037d5e) list_double_ai3_gene_pane_t3

0x0002,

0xfcee,	// (0x0003f40f) list_double_ai3_gene_pane_t_ParamLimits

0xfcee,	// (0x0003f40f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x316c,	// (0x0003288d) aid_size_min_col_2

0xe1c0,	// (0x0003d8e1) aid_size_min_msg_ParamLimits

0xe1c0,	// (0x0003d8e1) aid_size_min_msg

0xdf78,	// (0x0003d699) fep_vkb_top_text_pane_g2_ParamLimits

0xdf78,	// (0x0003d699) fep_vkb_top_text_pane_g2

0x0001,

0xfb4e,	// (0x0003f26f) fep_vkb_top_text_pane_g_ParamLimits

0xfb4e,	// (0x0003f26f) fep_vkb_top_text_pane_g

0xf441,	// (0x0003eb62) main_hc_apps_shell_pane

0x865a,	// (0x00037d7b) grid_hc_apps_pane_ParamLimits

0x865a,	// (0x00037d7b) grid_hc_apps_pane

0x8669,	// (0x00037d8a) list_hc_apps_pane

0x8671,	// (0x00037d92) scroll_pane_cp37_ParamLimits

0x8671,	// (0x00037d92) scroll_pane_cp37

0xe20a,	// (0x0003d92b) cell_hc_apps_pane_ParamLimits

0xe20a,	// (0x0003d92b) cell_hc_apps_pane

0xe2fd,	// (0x0003da1e) cell_hc_apps_pane_g1_ParamLimits

0xe2fd,	// (0x0003da1e) cell_hc_apps_pane_g1

0x875c,	// (0x00037e7d) cell_hc_apps_pane_g2_ParamLimits

0x875c,	// (0x00037e7d) cell_hc_apps_pane_g2

0x8778,	// (0x00037e99) cell_hc_apps_pane_g3_ParamLimits

0x8778,	// (0x00037e99) cell_hc_apps_pane_g3

0x0002,

0xfcf5,	// (0x0003f416) cell_hc_apps_pane_g_ParamLimits

0xfcf5,	// (0x0003f416) cell_hc_apps_pane_g

0xe32a,	// (0x0003da4b) cell_hc_apps_pane_t1_ParamLimits

0xe32a,	// (0x0003da4b) cell_hc_apps_pane_t1

0x2bbb,	// (0x000322dc) grid_highlight_pane_cp10_ParamLimits

0x2bbb,	// (0x000322dc) grid_highlight_pane_cp10

0xe368,	// (0x0003da89) list_single_hc_apps_pane_ParamLimits

0xe368,	// (0x0003da89) list_single_hc_apps_pane

0xe395,	// (0x0003dab6) list_single_hc_apps_pane_g1

0xc75a,	// (0x0003be7b) list_single_hc_apps_pane_g2

0x0001,

0xfcfc,	// (0x0003f41d) list_single_hc_apps_pane_g

0xc773,	// (0x0003be94) list_single_hc_apps_pane_g2_copy1

0xc78f,	// (0x0003beb0) list_single_hc_apps_pane_t1

0x2932,	// (0x00032053) bg_set_opt_pane_cp_ParamLimits

0x00e7,	// (0x0002f808) setting_slider_pane_t1_ParamLimits

0x0100,	// (0x0002f821) setting_slider_pane_t2_ParamLimits

0x011a,	// (0x0002f83b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0003ec85) setting_slider_pane_t_ParamLimits

0x0132,	// (0x0002f853) slider_set_pane_ParamLimits

0x0e22,	// (0x00030543) control_pane_g5_ParamLimits

0x0e22,	// (0x00030543) control_pane_g5

0x610c,	// (0x0003582d) slider_set_pane_g1_ParamLimits

0x18d0,	// (0x00030ff1) slider_set_pane_g2_ParamLimits

0x18dc,	// (0x00030ffd) slider_set_pane_g3_ParamLimits

0x18f0,	// (0x00031011) slider_set_pane_g4_ParamLimits

0x1908,	// (0x00031029) slider_set_pane_g5_ParamLimits

0x18dc,	// (0x00030ffd) slider_set_pane_g6_ParamLimits

0x191e,	// (0x0003103f) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0003f086) slider_set_pane_g_ParamLimits

0x4308,	// (0x00033a29) navi_icon_text_pane_ParamLimits

0xd32c,	// (0x0003ca4d) aid_fill_nsta_2_ParamLimits

0xd363,	// (0x0003ca84) aid_touch_tab_arrow_left_ParamLimits

0xd379,	// (0x0003ca9a) aid_touch_tab_arrow_right_ParamLimits

0xd414,	// (0x0003cb35) clock_nsta_pane_ParamLimits

0x5bec,	// (0x0003530d) navi_icon_pane_g1_ParamLimits

0x5bf8,	// (0x00035319) navi_text_pane_t1_ParamLimits

0x6f9b,	// (0x000366bc) navi_icon_text_pane_g1_ParamLimits

0x6fa7,	// (0x000366c8) navi_icon_text_pane_t1_ParamLimits

0xe395,	// (0x0003dab6) list_single_hc_apps_pane_g1_ParamLimits

0xc75a,	// (0x0003be7b) list_single_hc_apps_pane_g2_ParamLimits

0xfcfc,	// (0x0003f41d) list_single_hc_apps_pane_g_ParamLimits

0xc773,	// (0x0003be94) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc78f,	// (0x0003beb0) list_single_hc_apps_pane_t1_ParamLimits

0xb3fe,	// (0x0003ab1f) popup_toolbar2_fixed_window_ParamLimits

0xb3fe,	// (0x0003ab1f) popup_toolbar2_fixed_window

0xc2a4,	// (0x0003b9c5) popup_toolbar2_float_window

0x283e,	// (0x00031f5f) bg_popup_sub_pane_cp27

0x884f,	// (0x00037f70) grid_toolbar2_float_pane

0x283e,	// (0x00031f5f) bg_popup_sub_pane_cp26

0x884f,	// (0x00037f70) grid_toolbar2_fixed_pane

0xe3ae,	// (0x0003dacf) cell_toolbar2_fixed_pane_ParamLimits

0xe3ae,	// (0x0003dacf) cell_toolbar2_fixed_pane

0xe3c9,	// (0x0003daea) cell_toolbar2_fixed_pane_g1

0x8870,	// (0x00037f91) toolbar2_fixed_button_pane

0x4cdf,	// (0x00034400) toolbar2_fixed_button_pane_g1

0x4cef,	// (0x00034410) toolbar2_fixed_button_pane_g2

0x4ce7,	// (0x00034408) toolbar2_fixed_button_pane_g3

0x4cff,	// (0x00034420) toolbar2_fixed_button_pane_g4

0x4cf7,	// (0x00034418) toolbar2_fixed_button_pane_g5

0x4d07,	// (0x00034428) toolbar2_fixed_button_pane_g6

0x4d0f,	// (0x00034430) toolbar2_fixed_button_pane_g7

0x4d1f,	// (0x00034440) toolbar2_fixed_button_pane_g8

0x4d17,	// (0x00034438) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0003ef88) toolbar2_fixed_button_pane_g

0x8878,	// (0x00037f99) cell_toolbar2_float_pane_ParamLimits

0x8878,	// (0x00037f99) cell_toolbar2_float_pane

0x8889,	// (0x00037faa) cell_toolbar2_float_pane_g1

0x8870,	// (0x00037f91) toolbar2_fixed_button_pane_cp

0xde52,	// (0x0003d573) fep_vkb_accented_list_pane_ParamLimits

0xde52,	// (0x0003d573) fep_vkb_accented_list_pane

0x1d32,	// (0x00031453) bg_popup_fep_shadow_pane_g9

0x4488,	// (0x00033ba9) bg_popup_fep_shadow_pane_cp3

0x3985,	// (0x000330a6) list_accented_list_pane

0x8892,	// (0x00037fb3) list_single_accented_list_pane_ParamLimits

0x8892,	// (0x00037fb3) list_single_accented_list_pane

0x4488,	// (0x00033ba9) list_highlight_pane_cp10

0x88a3,	// (0x00037fc4) list_single_accented_list_pane_t1

0xc1ce,	// (0x0003b8ef) popup_slider_window_ParamLimits

0xc1ce,	// (0x0003b8ef) popup_slider_window

0x84df,	// (0x00037c00) aid_indentation_list_msg

0xe4c2,	// (0x0003dbe3) bg_popup_window_pane_cp19

0x89c7,	// (0x000380e8) popup_slider_window_g1

0x89e3,	// (0x00038104) popup_slider_window_g2

0x89ff,	// (0x00038120) popup_slider_window_g3

0x0005,

0xfd01,	// (0x0003f422) popup_slider_window_g

0x8a5b,	// (0x0003817c) popup_slider_window_t1

0x8acf,	// (0x000381f0) small_volume_slider_vertical_pane

0x73f7,	// (0x00036b18) small_volume_slider_vertical_pane_g1

0x73f7,	// (0x00036b18) small_volume_slider_vertical_pane_g2

0x8aeb,	// (0x0003820c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd13,	// (0x0003f434) small_volume_slider_vertical_pane_g

0xb36c,	// (0x0003aa8d) area_side_right_pane_ParamLimits

0xb36c,	// (0x0003aa8d) area_side_right_pane

0xc7bd,	// (0x0003bede) aid_size_side_button_ParamLimits

0xc7bd,	// (0x0003bede) aid_size_side_button

0xc7d6,	// (0x0003bef7) grid_sctrl_middle_pane_ParamLimits

0xc7d6,	// (0x0003bef7) grid_sctrl_middle_pane

0x1f50,	// (0x00031671) sctrl_sk_bottom_pane

0x1f61,	// (0x00031682) sctrl_sk_top_pane

0x1f73,	// (0x00031694) aid_touch_sctrl_top

0x1f80,	// (0x000316a1) bg_sctrl_sk_pane_ParamLimits

0x1f80,	// (0x000316a1) bg_sctrl_sk_pane

0x1f8e,	// (0x000316af) sctrl_sk_top_pane_g1

0x1f9b,	// (0x000316bc) sctrl_sk_top_pane_t1

0x1f73,	// (0x00031694) aid_touch_sctrl_bottom

0x1f80,	// (0x000316a1) bg_sctrl_sk_pane_cp_ParamLimits

0x1f80,	// (0x000316a1) bg_sctrl_sk_pane_cp

0x1fb6,	// (0x000316d7) sctrl_sk_bottom_pane_g1

0x1f9b,	// (0x000316bc) sctrl_sk_bottom_pane_t1

0xc7f0,	// (0x0003bf11) cell_sctrl_middle_pane_ParamLimits

0xc7f0,	// (0x0003bf11) cell_sctrl_middle_pane

0xc801,	// (0x0003bf22) aid_touch_sctrl_middle_ParamLimits

0xc801,	// (0x0003bf22) aid_touch_sctrl_middle

0xc80e,	// (0x0003bf2f) bg_sctrl_middle_pane_ParamLimits

0xc80e,	// (0x0003bf2f) bg_sctrl_middle_pane

0x2623,	// (0x00031d44) cell_sctrl_middle_pane_g1_ParamLimits

0x2623,	// (0x00031d44) cell_sctrl_middle_pane_g1

0xc81c,	// (0x0003bf3d) cell_sctrl_middle_pane_g2_ParamLimits

0xc81c,	// (0x0003bf3d) cell_sctrl_middle_pane_g2

0x0001,

0xfd1f,	// (0x0003f440) cell_sctrl_middle_pane_g_ParamLimits

0xfd1f,	// (0x0003f440) cell_sctrl_middle_pane_g

0x4cdf,	// (0x00034400) bg_sctrl_middle_pane_g1

0x4ce7,	// (0x00034408) bg_sctrl_middle_pane_g2

0x4cef,	// (0x00034410) bg_sctrl_middle_pane_g3

0x4cf7,	// (0x00034418) bg_sctrl_middle_pane_g4

0x4cff,	// (0x00034420) bg_sctrl_middle_pane_g5

0x4d07,	// (0x00034428) bg_sctrl_middle_pane_g6

0x4d0f,	// (0x00034430) bg_sctrl_middle_pane_g7

0x4d17,	// (0x00034438) bg_sctrl_middle_pane_g8

0x0007,

0xfd24,	// (0x0003f445) bg_sctrl_middle_pane_g

0x4d1f,	// (0x00034440) bg_sctrl_middle_pane_g8_copy1

0x4cdf,	// (0x00034400) bg_sctrl_sk_pane_g1

0x4cef,	// (0x00034410) bg_sctrl_sk_pane_g2

0x4ce7,	// (0x00034408) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0003ef88) bg_sctrl_sk_pane_g

0x3751,	// (0x00032e72) aid_size_touch_scroll_bar

0x4cff,	// (0x00034420) bg_sctrl_sk_pane_g4

0x4cf7,	// (0x00034418) bg_sctrl_sk_pane_g5

0x4d07,	// (0x00034428) bg_sctrl_sk_pane_g6

0x4d0f,	// (0x00034430) bg_sctrl_sk_pane_g7

0x4d1f,	// (0x00034440) bg_sctrl_sk_pane_g8

0x4d17,	// (0x00034438) bg_sctrl_sk_pane_g9

0x0fcc,	// (0x000306ed) popup_fep_china_hwr2_fs_candidate_window

0xbcee,	// (0x0003b40f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbcee,	// (0x0003b40f) popup_fep_china_hwr2_fs_control_window

0x1d52,	// (0x00031473) sctrl_sk_top_pane_g2

0x0001,

0xfd1a,	// (0x0003f43b) sctrl_sk_top_pane_g

0xe57a,	// (0x0003dc9b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe57a,	// (0x0003dc9b) aid_fep_china_hwr2_fs_cell

0xe58e,	// (0x0003dcaf) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe58e,	// (0x0003dcaf) bg_popup_fep_shadow_pane_cp4

0xe5a5,	// (0x0003dcc6) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe5a5,	// (0x0003dcc6) bg_popup_fep_shadow_pane_cp5

0xe5b7,	// (0x0003dcd8) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe5b7,	// (0x0003dcd8) popup_fep_china_hwr2_fs_control_bar_grid

0xe5cb,	// (0x0003dcec) popup_fep_china_hwr2_fs_control_funtion_grid

0x8b47,	// (0x00038268) aid_fep_china_hwr2_fs_candi_cell

0x283e,	// (0x00031f5f) bg_popup_fep_shadow_pane_cp6

0x8b51,	// (0x00038272) popup_fep_china_hwr2_fs_candidate_grid

0xe5d3,	// (0x0003dcf4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe5d3,	// (0x0003dcf4) cell_fep_china_hwr2_fs_funtion_grid

0x73f7,	// (0x00036b18) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8b73,	// (0x00038294) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8b73,	// (0x00038294) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b81,	// (0x000382a2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b81,	// (0x000382a2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd35,	// (0x0003f456) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd35,	// (0x0003f456) cell_fep_china_hwr2_fs_funtion_grid_g

0xe5eb,	// (0x0003dd0c) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe5eb,	// (0x0003dd0c) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe600,	// (0x0003dd21) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe600,	// (0x0003dd21) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3a,	// (0x0003f45b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3a,	// (0x0003f45b) cell_fep_china_hwr2_fs_funtion_grid_t

0x8bc8,	// (0x000382e9) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8bd0,	// (0x000382f1) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8bd8,	// (0x000382f9) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3f,	// (0x0003f460) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8be0,	// (0x00038301) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8be0,	// (0x00038301) cell_fep_china_hwr2_fs_candidate_grid

0x8bf9,	// (0x0003831a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8c01,	// (0x00038322) popup_fep_china_hwr2_fs_candidate_grid_g21

0x73f7,	// (0x00036b18) cell_fep_china_hwr2_fs_candidate_grid_g1

0x73f7,	// (0x00036b18) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb53,	// (0x0003f274) cell_fep_china_hwr2_fs_candidate_grid_g

0x8c09,	// (0x0003832a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x48e6,	// (0x00034007) clock_nsta_pane_cp_24_ParamLimits

0x48e6,	// (0x00034007) clock_nsta_pane_cp_24

0x4964,	// (0x00034085) indicator_nsta_pane_cp_24_ParamLimits

0x4964,	// (0x00034085) indicator_nsta_pane_cp_24

0x5a68,	// (0x00035189) heading_pane_g1

0x0001,

0xf8cc,	// (0x0003efed) heading_pane_g

0x6497,	// (0x00035bb8) grid_sct_catagory_button_pane

0x64c7,	// (0x00035be8) scroll_pane_cp5_ParamLimits

0x6fe9,	// (0x0003670a) button_value_adjust_pane_cp5_ParamLimits

0x6fe9,	// (0x0003670a) button_value_adjust_pane_cp5

0x70c8,	// (0x000367e9) form2_midp_time_pane_ParamLimits

0x8c17,	// (0x00038338) cell_sct_catagory_button_pane_ParamLimits

0x8c17,	// (0x00038338) cell_sct_catagory_button_pane

0x73bc,	// (0x00036add) bg_button_pane_cp01_ParamLimits

0x73bc,	// (0x00036add) bg_button_pane_cp01

0x73f7,	// (0x00036b18) cell_sct_catagory_button_pane_g1

0xc247,	// (0x0003b968) popup_tb_extension_window

0xe61c,	// (0x0003dd3d) aid_size_cell_ext_ParamLimits

0xe61c,	// (0x0003dd3d) aid_size_cell_ext

0x3593,	// (0x00032cb4) bg_tb_trans_pane_cp1_ParamLimits

0x3593,	// (0x00032cb4) bg_tb_trans_pane_cp1

0xe642,	// (0x0003dd63) grid_tb_ext_pane_ParamLimits

0xe642,	// (0x0003dd63) grid_tb_ext_pane

0xe680,	// (0x0003dda1) cell_tb_ext_pane_ParamLimits

0xe680,	// (0x0003dda1) cell_tb_ext_pane

0xe6a8,	// (0x0003ddc9) cell_tb_ext_pane_g1_ParamLimits

0xe6a8,	// (0x0003ddc9) cell_tb_ext_pane_g1

0x8cad,	// (0x000383ce) cell_tb_ext_pane_t1

0x2bbb,	// (0x000322dc) list_highlight_pane_cp11_ParamLimits

0x2bbb,	// (0x000322dc) list_highlight_pane_cp11

0x001a,	// (0x0002f73b) popup_uni_indicator_window_ParamLimits

0x001a,	// (0x0002f73b) popup_uni_indicator_window

0x3822,	// (0x00032f43) bg_popup_sub_pane_cp14

0x8cc8,	// (0x000383e9) list_uniindi_pane

0x8cd4,	// (0x000383f5) uniindi_top_pane

0x2bbb,	// (0x000322dc) bg_uniindi_top_pane

0x8cf3,	// (0x00038414) uniindi_top_pane_g1

0x8d09,	// (0x0003842a) uniindi_top_pane_g2

0x0003,

0xfd46,	// (0x0003f467) uniindi_top_pane_g

0x8d33,	// (0x00038454) uniindi_top_pane_t1

0x8d5d,	// (0x0003847e) list_single_uniindi_pane_ParamLimits

0x8d5d,	// (0x0003847e) list_single_uniindi_pane

0x73f7,	// (0x00036b18) bg_uniindi_top_pane_g1

0x8d70,	// (0x00038491) list_single_uniindi_pane_g1

0x8d83,	// (0x000384a4) list_single_uniindi_pane_t1

0xf441,	// (0x0003eb62) control_bg_pane

0x8da8,	// (0x000384c9) bg_sctrl_sk_pane_cp1

0x8db1,	// (0x000384d2) bg_sctrl_sk_pane_cp2

0x8dba,	// (0x000384db) control_bg_pane_g1

0x8dc3,	// (0x000384e4) control_bg_pane_g2

0x0001,

0xfd4f,	// (0x0003f470) control_bg_pane_g

0x6e23,	// (0x00036544) cell_indicator_nsta_pane_g1_ParamLimits

0xdcd5,	// (0x0003d3f6) cell_indicator_nsta_pane_g2_ParamLimits

0xfab7,	// (0x0003f1d8) cell_indicator_nsta_pane_g_ParamLimits

0x2f29,	// (0x0003264a) form2_midp_time_pane_t1_ParamLimits

0x1aed,	// (0x0003120e) main_idle_act4_pane_ParamLimits

0x1aed,	// (0x0003120e) main_idle_act4_pane

0xc247,	// (0x0003b968) popup_tb_extension_window_ParamLimits

0xe667,	// (0x0003dd88) tb_ext_find_pane_ParamLimits

0xe667,	// (0x0003dd88) tb_ext_find_pane

0x8dcc,	// (0x000384ed) ai_gene_pane_1_cp1

0x45c1,	// (0x00033ce2) ai_gene_pane_2_cp1

0x8dd4,	// (0x000384f5) list_single_idle_plugin_calendar_pane

0x8ddd,	// (0x000384fe) list_single_idle_plugin_notification_pane

0x8de6,	// (0x00038507) list_single_idle_plugin_player_pane

0xe6c5,	// (0x0003dde6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe6c5,	// (0x0003dde6) list_single_idle_plugin_shortcut_pane

0xe6ed,	// (0x0003de0e) main_idle_act4_pane_t1

0xe703,	// (0x0003de24) main_idle_act4_pane_t2

0x0001,

0xfd54,	// (0x0003f475) main_idle_act4_pane_t

0xe719,	// (0x0003de3a) middle_sk_idle_act4_pane_ParamLimits

0xe719,	// (0x0003de3a) middle_sk_idle_act4_pane

0xe735,	// (0x0003de56) popup_clock_digital_analogue_window_cp2

0xe75d,	// (0x0003de7e) shortcut_wheel_idle_act4_pane_ParamLimits

0xe75d,	// (0x0003de7e) shortcut_wheel_idle_act4_pane

0x73f7,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g1

0x73f7,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g2

0x73f7,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g3

0x73f7,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g4

0x73f7,	// (0x00036b18) shortcut_wheel_idle_act4_pane_g5

0x8e79,	// (0x0003859a) shortcut_wheel_idle_act4_pane_g6

0x8e81,	// (0x000385a2) shortcut_wheel_idle_act4_pane_g7

0x8e89,	// (0x000385aa) shortcut_wheel_idle_act4_pane_g8

0x8e91,	// (0x000385b2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd59,	// (0x0003f47a) shortcut_wheel_idle_act4_pane_g

0xe2c8,	// (0x0003d9e9) middle_sk_idle_act4_pane_g1_ParamLimits

0xe2c8,	// (0x0003d9e9) middle_sk_idle_act4_pane_g1

0xe7da,	// (0x0003defb) middle_sk_idle_act4_pane_g2_ParamLimits

0xe7da,	// (0x0003defb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7c,	// (0x0003f49d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7c,	// (0x0003f49d) middle_sk_idle_act4_pane_g

0xe7f2,	// (0x0003df13) middle_sk_idle_act4_pane_t1_ParamLimits

0xe7f2,	// (0x0003df13) middle_sk_idle_act4_pane_t1

0xe821,	// (0x0003df42) grid_ai_shortcut_pane_ParamLimits

0xe821,	// (0x0003df42) grid_ai_shortcut_pane

0xe83e,	// (0x0003df5f) list_highlight_pane_cp16_ParamLimits

0xe83e,	// (0x0003df5f) list_highlight_pane_cp16

0xe84b,	// (0x0003df6c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe84b,	// (0x0003df6c) list_single_idle_plugin_shortcut_pane_g1

0xe857,	// (0x0003df78) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe857,	// (0x0003df78) list_single_idle_plugin_shortcut_pane_g2

0xe873,	// (0x0003df94) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe873,	// (0x0003df94) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd81,	// (0x0003f4a2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd81,	// (0x0003f4a2) list_single_idle_plugin_shortcut_pane_g

0xe888,	// (0x0003dfa9) cell_ai_shortcut_pane_ParamLimits

0xe888,	// (0x0003dfa9) cell_ai_shortcut_pane

0xe89e,	// (0x0003dfbf) cell_ai_shortcut_pane_g1_ParamLimits

0xe89e,	// (0x0003dfbf) cell_ai_shortcut_pane_g1

0x8dcc,	// (0x000384ed) ai_gene_pane_1_cp2

0x8fc1,	// (0x000386e2) ai_gene_pane_2_cp2

0x8fc9,	// (0x000386ea) list_highlight_pane_cp15

0x8fd2,	// (0x000386f3) list_single_idle_plugin_calendar_pane_g1

0x8fc9,	// (0x000386ea) list_highlight_pane_cp17

0x8fda,	// (0x000386fb) list_single_idle_plugin_calendar_pane_g1_copy1

0x8fe2,	// (0x00038703) list_single_idle_plugin_player_pane_g1

0x66f0,	// (0x00035e11) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd88,	// (0x0003f4a9) list_single_idle_plugin_player_pane_g

0x8fea,	// (0x0003870b) list_single_idle_plugin_player_pane_t1

0x8ff8,	// (0x00038719) list_single_idle_plugin_player_pane_t2

0x9006,	// (0x00038727) list_single_idle_plugin_player_pane_t3

0x9014,	// (0x00038735) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8d,	// (0x0003f4ae) list_single_idle_plugin_player_pane_t

0x9022,	// (0x00038743) wait_bar_pane_cp15

0x902a,	// (0x0003874b) grid_ai_notification_pane

0x66f0,	// (0x00035e11) list_single_idle_plugin_notification_pane_g1

0xe8c0,	// (0x0003dfe1) cell_ai_notification_pane_ParamLimits

0xe8c0,	// (0x0003dfe1) cell_ai_notification_pane

0x9040,	// (0x00038761) cell_ai_notification_pane_g1

0x9048,	// (0x00038769) cell_ai_notification_pane_t1

0xe8cd,	// (0x0003dfee) tb_ext_find_button_pane

0xe8d5,	// (0x0003dff6) tb_ext_find_pane_g1

0xe8dd,	// (0x0003dffe) tb_ext_find_pane_t1

0x3e86,	// (0x000335a7) tb_ext_find_button_pane_g1

0x9074,	// (0x00038795) tb_ext_find_button_pane_g2

0x0001,

0xfd96,	// (0x0003f4b7) tb_ext_find_button_pane_g

0xe6ed,	// (0x0003de0e) main_idle_act4_pane_t1_ParamLimits

0xe703,	// (0x0003de24) main_idle_act4_pane_t2_ParamLimits

0xfd54,	// (0x0003f475) main_idle_act4_pane_t_ParamLimits

0xe735,	// (0x0003de56) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe74d,	// (0x0003de6e) sat_plugin_idle_act4_pane_ParamLimits

0xe74d,	// (0x0003de6e) sat_plugin_idle_act4_pane

0xe8eb,	// (0x0003e00c) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe8eb,	// (0x0003e00c) sat_plugin_idle_act4_pane_t1

0xe903,	// (0x0003e024) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe903,	// (0x0003e024) sat_plugin_idle_act4_pane_t2

0xe91b,	// (0x0003e03c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe91b,	// (0x0003e03c) sat_plugin_idle_act4_pane_t3

0xe933,	// (0x0003e054) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe933,	// (0x0003e054) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd9b,	// (0x0003f4bc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd9b,	// (0x0003f4bc) sat_plugin_idle_act4_pane_t

0xf506,	// (0x0003ec27) popup_battery_window_ParamLimits

0xf506,	// (0x0003ec27) popup_battery_window

0x2bbb,	// (0x000322dc) bg_popup_sub_pane_cp25_ParamLimits

0x2bbb,	// (0x000322dc) bg_popup_sub_pane_cp25

0x90c9,	// (0x000387ea) popup_battery_window_g1_ParamLimits

0x90c9,	// (0x000387ea) popup_battery_window_g1

0x90d5,	// (0x000387f6) popup_battery_window_t1_ParamLimits

0x90d5,	// (0x000387f6) popup_battery_window_t1

0x90e7,	// (0x00038808) popup_battery_window_t2_ParamLimits

0x90e7,	// (0x00038808) popup_battery_window_t2

0x0001,

0xfda4,	// (0x0003f4c5) popup_battery_window_t_ParamLimits

0xfda4,	// (0x0003f4c5) popup_battery_window_t

0xd22c,	// (0x0003c94d) midp_canvas_pane_ParamLimits

0xd287,	// (0x0003c9a8) midp_keypad_pane_ParamLimits

0xd287,	// (0x0003c9a8) midp_keypad_pane

0x47c8,	// (0x00033ee9) main_midp_pane_ParamLimits

0x6eaf,	// (0x000365d0) signal_pane_g2_cp_ParamLimits

0xe94b,	// (0x0003e06c) aid_size_cell_midp_keypad_ParamLimits

0xe94b,	// (0x0003e06c) aid_size_cell_midp_keypad

0xe969,	// (0x0003e08a) midp_keyp_game_grid_pane_ParamLimits

0xe969,	// (0x0003e08a) midp_keyp_game_grid_pane

0xe990,	// (0x0003e0b1) midp_keyp_rocker_pane_ParamLimits

0xe990,	// (0x0003e0b1) midp_keyp_rocker_pane

0xe9d1,	// (0x0003e0f2) midp_keyp_sk_left_pane_ParamLimits

0xe9d1,	// (0x0003e0f2) midp_keyp_sk_left_pane

0xea25,	// (0x0003e146) midp_keyp_sk_right_pane_ParamLimits

0xea25,	// (0x0003e146) midp_keyp_sk_right_pane

0x283e,	// (0x00031f5f) bg_button_pane_cp03

0xea79,	// (0x0003e19a) midp_keyp_sk_left_pane_g1

0x283e,	// (0x00031f5f) bg_button_pane_cp04

0xea79,	// (0x0003e19a) midp_keyp_sk_right_pane_g1

0x73f7,	// (0x00036b18) midp_keyp_rocker_pane_g1

0xea82,	// (0x0003e1a3) keyp_game_cell_pane_ParamLimits

0xea82,	// (0x0003e1a3) keyp_game_cell_pane

0x283e,	// (0x00031f5f) bg_button_pane_cp02

0xeaa6,	// (0x0003e1c7) keyp_game_cell_pane_g1

0xb3ae,	// (0x0003aacf) popup_fep_vkb2_window_ParamLimits

0xb3ae,	// (0x0003aacf) popup_fep_vkb2_window

0xc828,	// (0x0003bf49) aid_size_cell_vkb2_ParamLimits

0xc828,	// (0x0003bf49) aid_size_cell_vkb2

0xc85e,	// (0x0003bf7f) popup_fep_vkb2_window_g1_ParamLimits

0xc85e,	// (0x0003bf7f) popup_fep_vkb2_window_g1

0xc8ae,	// (0x0003bfcf) vkb2_area_bottom_pane_ParamLimits

0xc8ae,	// (0x0003bfcf) vkb2_area_bottom_pane

0xc902,	// (0x0003c023) vkb2_area_keypad_pane_ParamLimits

0xc902,	// (0x0003c023) vkb2_area_keypad_pane

0xc94a,	// (0x0003c06b) vkb2_area_top_pane_ParamLimits

0xc94a,	// (0x0003c06b) vkb2_area_top_pane

0xc9d0,	// (0x0003c0f1) vkb2_top_entry_pane_ParamLimits

0xc9d0,	// (0x0003c0f1) vkb2_top_entry_pane

0xc9fd,	// (0x0003c11e) vkb2_top_grid_left_pane_ParamLimits

0xc9fd,	// (0x0003c11e) vkb2_top_grid_left_pane

0xca1d,	// (0x0003c13e) vkb2_top_grid_right_pane_ParamLimits

0xca1d,	// (0x0003c13e) vkb2_top_grid_right_pane

0x2222,	// (0x00031943) vkb2_cell_keypad_pane_ParamLimits

0x2222,	// (0x00031943) vkb2_cell_keypad_pane

0xca63,	// (0x0003c184) vkb2_area_bottom_grid_pane_ParamLimits

0xca63,	// (0x0003c184) vkb2_area_bottom_grid_pane

0xca8d,	// (0x0003c1ae) vkb2_area_bottom_pane_g1_ParamLimits

0xca8d,	// (0x0003c1ae) vkb2_area_bottom_pane_g1

0xcab3,	// (0x0003c1d4) vkb2_area_bottom_pane_g2_ParamLimits

0xcab3,	// (0x0003c1d4) vkb2_area_bottom_pane_g2

0xcae4,	// (0x0003c205) vkb2_area_bottom_pane_g3_ParamLimits

0xcae4,	// (0x0003c205) vkb2_area_bottom_pane_g3

0x0002,

0xfda9,	// (0x0003f4ca) vkb2_area_bottom_pane_g_ParamLimits

0xfda9,	// (0x0003f4ca) vkb2_area_bottom_pane_g

0x23cc,	// (0x00031aed) vkb2_top_cell_left_pane_ParamLimits

0x23cc,	// (0x00031aed) vkb2_top_cell_left_pane

0xeaaf,	// (0x0003e1d0) vkb2_top_entry_pane_g1_ParamLimits

0xeaaf,	// (0x0003e1d0) vkb2_top_entry_pane_g1

0xeabd,	// (0x0003e1de) vkb2_top_entry_pane_t1_ParamLimits

0xeabd,	// (0x0003e1de) vkb2_top_entry_pane_t1

0x928a,	// (0x000389ab) vkb2_top_entry_pane_t2_ParamLimits

0x928a,	// (0x000389ab) vkb2_top_entry_pane_t2

0x92bc,	// (0x000389dd) vkb2_top_entry_pane_t3_ParamLimits

0x92bc,	// (0x000389dd) vkb2_top_entry_pane_t3

0x0002,

0xfdb0,	// (0x0003f4d1) vkb2_top_entry_pane_t_ParamLimits

0xfdb0,	// (0x0003f4d1) vkb2_top_entry_pane_t

0xcb4e,	// (0x0003c26f) vkb2_top_grid_right_pane_g1_ParamLimits

0xcb4e,	// (0x0003c26f) vkb2_top_grid_right_pane_g1

0x242f,	// (0x00031b50) vkb2_top_grid_right_pane_g2_ParamLimits

0x242f,	// (0x00031b50) vkb2_top_grid_right_pane_g2

0x2447,	// (0x00031b68) vkb2_top_grid_right_pane_g3_ParamLimits

0x2447,	// (0x00031b68) vkb2_top_grid_right_pane_g3

0xcb64,	// (0x0003c285) vkb2_top_grid_right_pane_g4_ParamLimits

0xcb64,	// (0x0003c285) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb7,	// (0x0003f4d8) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb7,	// (0x0003f4d8) vkb2_top_grid_right_pane_g

0x2475,	// (0x00031b96) vkb2_top_cell_left_pane_g1

0x248c,	// (0x00031bad) vkb2_cell_keypad_pane_g1_ParamLimits

0x248c,	// (0x00031bad) vkb2_cell_keypad_pane_g1

0x92e0,	// (0x00038a01) vkb2_cell_keypad_pane_t1_ParamLimits

0x92e0,	// (0x00038a01) vkb2_cell_keypad_pane_t1

0x249a,	// (0x00031bbb) vkb2_cell_bottom_grid_pane_ParamLimits

0x249a,	// (0x00031bbb) vkb2_cell_bottom_grid_pane

0x24d3,	// (0x00031bf4) vkb2_cell_bottom_grid_pane_g1

0xe77e,	// (0x0003de9f) aid_call2_pane_cp02

0xe786,	// (0x0003dea7) aid_call_pane_cp02

0xe78e,	// (0x0003deaf) clock_digital_number_pane_cp10

0xe796,	// (0x0003deb7) clock_digital_number_pane_cp11

0xe79e,	// (0x0003debf) clock_digital_number_pane_cp12

0xe7a6,	// (0x0003dec7) clock_digital_number_pane_cp13

0xe7ae,	// (0x0003decf) clock_digital_separator_pane_cp10

0x3e86,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g1

0x3e86,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g2

0xe7b6,	// (0x0003ded7) popup_clock_digital_analogue_window_cp2_g3

0x3e86,	// (0x000335a7) popup_clock_digital_analogue_window_cp2_g4

0xe7b6,	// (0x0003ded7) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6c,	// (0x0003f48d) popup_clock_digital_analogue_window_cp2_g

0xe7be,	// (0x0003dedf) popup_clock_digital_analogue_window_cp2_t1

0xe7cc,	// (0x0003deed) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd77,	// (0x0003f498) popup_clock_digital_analogue_window_cp2_t

0x73f7,	// (0x00036b18) clock_digital_number_pane_cp10_g1

0x73f7,	// (0x00036b18) clock_digital_number_pane_cp10_g2

0x0001,

0xfb53,	// (0x0003f274) clock_digital_number_pane_cp10_g

0x73f7,	// (0x00036b18) clock_digital_separator_pane_cp10_g1

0x73f7,	// (0x00036b18) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb53,	// (0x0003f274) clock_digital_separator_pane_cp10_g

0x8d15,	// (0x00038436) uniindi_top_pane_g3

0x8d26,	// (0x00038447) uniindi_top_pane_g4

0x22ad,	// (0x000319ce) vkb2_row_keypad_pane_ParamLimits

0x22ad,	// (0x000319ce) vkb2_row_keypad_pane

0x24ef,	// (0x00031c10) vkb2_cell_t_keypad_pane_ParamLimits

0x24ef,	// (0x00031c10) vkb2_cell_t_keypad_pane

0x24ff,	// (0x00031c20) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24ff,	// (0x00031c20) vkb2_cell_t_keypad_pane_cp08

0x2512,	// (0x00031c33) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2512,	// (0x00031c33) vkb2_cell_t_keypad_pane_cp09

0x2526,	// (0x00031c47) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2526,	// (0x00031c47) vkb2_cell_t_keypad_pane_cp01

0x2537,	// (0x00031c58) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2537,	// (0x00031c58) vkb2_cell_t_keypad_pane_cp02

0x2548,	// (0x00031c69) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2548,	// (0x00031c69) vkb2_cell_t_keypad_pane_cp03

0x2559,	// (0x00031c7a) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2559,	// (0x00031c7a) vkb2_cell_t_keypad_pane_cp04

0x256a,	// (0x00031c8b) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x256a,	// (0x00031c8b) vkb2_cell_t_keypad_pane_cp05

0x257b,	// (0x00031c9c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x257b,	// (0x00031c9c) vkb2_cell_t_keypad_pane_cp06

0x258c,	// (0x00031cad) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x258c,	// (0x00031cad) vkb2_cell_t_keypad_pane_cp07

0x259d,	// (0x00031cbe) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x259d,	// (0x00031cbe) vkb2_cell_t_keypad_pane_cp10

0x1d52,	// (0x00031473) vkb2_cell_t_keypad_pane_g1

0x9318,	// (0x00038a39) vkb2_cell_t_keypad_pane_t1

0xf441,	// (0x0003eb62) popup_grid_graphic2_window

0xeaf6,	// (0x0003e217) aid_size_cell_graphic2_ParamLimits

0xeaf6,	// (0x0003e217) aid_size_cell_graphic2

0xeb34,	// (0x0003e255) bg_popup_window_pane_cp21_ParamLimits

0xeb34,	// (0x0003e255) bg_popup_window_pane_cp21

0xeb42,	// (0x0003e263) graphic2_pages_pane_ParamLimits

0xeb42,	// (0x0003e263) graphic2_pages_pane

0xeb98,	// (0x0003e2b9) grid_graphic2_control_pane_ParamLimits

0xeb98,	// (0x0003e2b9) grid_graphic2_control_pane

0xebe0,	// (0x0003e301) grid_graphic2_pane_ParamLimits

0xebe0,	// (0x0003e301) grid_graphic2_pane

0xec67,	// (0x0003e388) cell_graphic2_pane

0xf441,	// (0x0003eb62) main_comp_mode_pane

0x8593,	// (0x00037cb4) list_ai3_gene_pane_ParamLimits

0xe4c2,	// (0x0003dbe3) bg_popup_window_pane_cp19_ParamLimits

0x8969,	// (0x0003808a) bg_touch_area_indi_pane_ParamLimits

0x8969,	// (0x0003808a) bg_touch_area_indi_pane

0x897f,	// (0x000380a0) bg_touch_area_indi_pane_cp01_ParamLimits

0x897f,	// (0x000380a0) bg_touch_area_indi_pane_cp01

0x8995,	// (0x000380b6) bg_touch_area_indi_pane_cp02_ParamLimits

0x8995,	// (0x000380b6) bg_touch_area_indi_pane_cp02

0x89ad,	// (0x000380ce) bg_touch_area_indi_pane_cp03_ParamLimits

0x89ad,	// (0x000380ce) bg_touch_area_indi_pane_cp03

0x89c7,	// (0x000380e8) popup_slider_window_g1_ParamLimits

0x89e3,	// (0x00038104) popup_slider_window_g2_ParamLimits

0x89ff,	// (0x00038120) popup_slider_window_g3_ParamLimits

0xfd01,	// (0x0003f422) popup_slider_window_g_ParamLimits

0x8a5b,	// (0x0003817c) popup_slider_window_t1_ParamLimits

0x8acf,	// (0x000381f0) small_volume_slider_vertical_pane_ParamLimits

0xec67,	// (0x0003e388) cell_graphic2_pane_ParamLimits

0xecc4,	// (0x0003e3e5) bg_button_pane_cp10_ParamLimits

0xecc4,	// (0x0003e3e5) bg_button_pane_cp10

0xecd7,	// (0x0003e3f8) bg_button_pane_cp11_ParamLimits

0xecd7,	// (0x0003e3f8) bg_button_pane_cp11

0xecea,	// (0x0003e40b) graphic2_pages_pane_g1_ParamLimits

0xecea,	// (0x0003e40b) graphic2_pages_pane_g1

0xed05,	// (0x0003e426) graphic2_pages_pane_g2_ParamLimits

0xed05,	// (0x0003e426) graphic2_pages_pane_g2

0x0001,

0xfdc5,	// (0x0003f4e6) graphic2_pages_pane_g_ParamLimits

0xfdc5,	// (0x0003f4e6) graphic2_pages_pane_g

0xed1d,	// (0x0003e43e) graphic2_pages_pane_t1_ParamLimits

0xed1d,	// (0x0003e43e) graphic2_pages_pane_t1

0xed35,	// (0x0003e456) cell_graphic2_control_pane_ParamLimits

0xed35,	// (0x0003e456) cell_graphic2_control_pane

0xed67,	// (0x0003e488) cell_graphic2_pane_g1_ParamLimits

0xed67,	// (0x0003e488) cell_graphic2_pane_g1

0xe2d6,	// (0x0003d9f7) cell_graphic2_pane_g2_ParamLimits

0xe2d6,	// (0x0003d9f7) cell_graphic2_pane_g2

0xe2f0,	// (0x0003da11) cell_graphic2_pane_g3_ParamLimits

0xe2f0,	// (0x0003da11) cell_graphic2_pane_g3

0xe2e3,	// (0x0003da04) cell_graphic2_pane_g4_ParamLimits

0xe2e3,	// (0x0003da04) cell_graphic2_pane_g4

0xed74,	// (0x0003e495) cell_graphic2_pane_g5_ParamLimits

0xed74,	// (0x0003e495) cell_graphic2_pane_g5

0x0004,

0xfdca,	// (0x0003f4eb) cell_graphic2_pane_g_ParamLimits

0xfdca,	// (0x0003f4eb) cell_graphic2_pane_g

0xed94,	// (0x0003e4b5) cell_graphic2_pane_t1_ParamLimits

0xed94,	// (0x0003e4b5) cell_graphic2_pane_t1

0x5a5c,	// (0x0003517d) grid_highlight_pane_cp11_ParamLimits

0x5a5c,	// (0x0003517d) grid_highlight_pane_cp11

0x2bbb,	// (0x000322dc) bg_button_pane_cp05

0xedc9,	// (0x0003e4ea) cell_graphic2_control_pane_g1

0x73f7,	// (0x00036b18) bg_touch_area_indi_pane_g1

0x95e8,	// (0x00038d09) aid_cmod_rocker_key_size

0x95f2,	// (0x00038d13) aid_cmode_itu_key_size

0x95fc,	// (0x00038d1d) main_cmode_video_pane

0x9606,	// (0x00038d27) main_comp_mode_itu_pane

0x9612,	// (0x00038d33) main_comp_mode_rocker_pane

0x961e,	// (0x00038d3f) cell_cmode_rocker_pane_ParamLimits

0x961e,	// (0x00038d3f) cell_cmode_rocker_pane

0x9630,	// (0x00038d51) cell_cmode_itu_pane_ParamLimits

0x9630,	// (0x00038d51) cell_cmode_itu_pane

0x3822,	// (0x00032f43) bg_button_pane_cp06_ParamLimits

0x3822,	// (0x00032f43) bg_button_pane_cp06

0x7675,	// (0x00036d96) cell_cmode_rocker_pane_g1_ParamLimits

0x7675,	// (0x00036d96) cell_cmode_rocker_pane_g1

0x8b73,	// (0x00038294) cell_cmode_rocker_pane_g2_ParamLimits

0x8b73,	// (0x00038294) cell_cmode_rocker_pane_g2

0x0001,

0xfdda,	// (0x0003f4fb) cell_cmode_rocker_pane_g_ParamLimits

0xfdda,	// (0x0003f4fb) cell_cmode_rocker_pane_g

0x283e,	// (0x00031f5f) bg_button_pane_cp07

0x9645,	// (0x00038d66) cell_cmode_itu_pane_g1

0x964e,	// (0x00038d6f) cell_cmode_itu_pane_t1

0x965c,	// (0x00038d7d) cell_cmode_itu_pane_t2

0x0001,

0xfddf,	// (0x0003f500) cell_cmode_itu_pane_t

0x8d98,	// (0x000384b9) aid_touch_ctrl_left

0x8da0,	// (0x000384c1) aid_touch_ctrl_right

0x283e,	// (0x00031f5f) compa_mode_pane

0xedef,	// (0x0003e510) aid_cmod_rocker_key_size_cp

0xedf9,	// (0x0003e51a) aid_cmode_itu_key_size_cp

0x967e,	// (0x00038d9f) compa_mode_pane_g1

0x9686,	// (0x00038da7) compa_mode_pane_g2

0x968e,	// (0x00038daf) compa_mode_pane_g3

0x0002,

0xfde4,	// (0x0003f505) compa_mode_pane_g

0xee03,	// (0x0003e524) main_comp_mode_itu_pane_cp

0xee0b,	// (0x0003e52c) main_comp_mode_rocker_pane_cp

0xee13,	// (0x0003e534) cell_cmode_itu_pane_cp_ParamLimits

0xee13,	// (0x0003e534) cell_cmode_itu_pane_cp

0xee28,	// (0x0003e549) cell_cmode_rocker_pane_cp_ParamLimits

0xee28,	// (0x0003e549) cell_cmode_rocker_pane_cp

0x3822,	// (0x00032f43) bg_button_pane_cp06_cp_ParamLimits

0x3822,	// (0x00032f43) bg_button_pane_cp06_cp

0x7675,	// (0x00036d96) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7675,	// (0x00036d96) cell_cmode_rocker_pane_g1_cp

0x73f7,	// (0x00036b18) cell_cmode_rocker_pane_g2_cp

0x283e,	// (0x00031f5f) bg_button_pane_cp07_cp

0xee3a,	// (0x0003e55b) cell_cmode_itu_pane_g1_cp

0xee43,	// (0x0003e564) cell_cmode_itu_pane_t1_cp

0xee43,	// (0x0003e564) cell_cmode_itu_pane_t2_cp

0xdaed,	// (0x0003d20e) settings_code_pane_cp2

0x2932,	// (0x00032053) bg_popup_window_pane_cp3_ParamLimits

0x3419,	// (0x00032b3a) heading_pane_cp3_ParamLimits

0x3425,	// (0x00032b46) listscroll_popup_graphic_pane_ParamLimits

0x1afb,	// (0x0003121c) fep_hwr_aid_pane_ParamLimits

0x1f73,	// (0x00031694) aid_touch_sctrl_top_ParamLimits

0x1f8e,	// (0x000316af) sctrl_sk_top_pane_g1_ParamLimits

0x1d52,	// (0x00031473) sctrl_sk_top_pane_g2_ParamLimits

0xfd1a,	// (0x0003f43b) sctrl_sk_top_pane_g_ParamLimits

0x1f9b,	// (0x000316bc) sctrl_sk_top_pane_t1_ParamLimits

0x1f73,	// (0x00031694) aid_touch_sctrl_bottom_ParamLimits

0x1f9b,	// (0x000316bc) sctrl_sk_bottom_pane_t1_ParamLimits

0x8ce1,	// (0x00038402) aid_area_touch_clock

0xc992,	// (0x0003c0b3) aid_vkb2_area_top_pane_cell_ParamLimits

0xc992,	// (0x0003c0b3) aid_vkb2_area_top_pane_cell

0xca3d,	// (0x0003c15e) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xca3d,	// (0x0003c15e) aid_vkb2_area_bottom_pane_cell

0x9242,	// (0x00038963) popup_char_count_window

0x96db,	// (0x00038dfc) popup_char_count_window_g1

0x96e4,	// (0x00038e05) popup_char_count_window_g2

0x96ed,	// (0x00038e0e) popup_char_count_window_g3

0x0002,

0xfdeb,	// (0x0003f50c) popup_char_count_window_g

0x96f6,	// (0x00038e17) popup_char_count_window_t1

0x204a,	// (0x0003176b) popup_fep_char_preview_window_ParamLimits

0x204a,	// (0x0003176b) popup_fep_char_preview_window

0xc9b2,	// (0x0003c0d3) vkb2_top_candi_pane_ParamLimits

0xc9b2,	// (0x0003c0d3) vkb2_top_candi_pane

0xee51,	// (0x0003e572) cell_vkb2_top_candi_pane_ParamLimits

0xee51,	// (0x0003e572) cell_vkb2_top_candi_pane

0x25b2,	// (0x00031cd3) bg_popup_fep_char_preview_window_ParamLimits

0x25b2,	// (0x00031cd3) bg_popup_fep_char_preview_window

0x25c0,	// (0x00031ce1) popup_fep_char_preview_window_t1_ParamLimits

0x25c0,	// (0x00031ce1) popup_fep_char_preview_window_t1

0x9751,	// (0x00038e72) bg_popup_fep_char_preview_window_g1

0x9759,	// (0x00038e7a) bg_popup_fep_char_preview_window_g2

0x9761,	// (0x00038e82) bg_popup_fep_char_preview_window_g3

0x9769,	// (0x00038e8a) bg_popup_fep_char_preview_window_g4

0x9771,	// (0x00038e92) bg_popup_fep_char_preview_window_g5

0x25fa,	// (0x00031d1b) bg_popup_fep_char_preview_window_g6

0x9779,	// (0x00038e9a) bg_popup_fep_char_preview_window_g7

0x9781,	// (0x00038ea2) bg_popup_fep_char_preview_window_g8

0x9789,	// (0x00038eaa) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf2,	// (0x0003f513) bg_popup_fep_char_preview_window_g

0x1d52,	// (0x00031473) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1d52,	// (0x00031473) cell_vkb2_top_candi_pane_g1

0x1d60,	// (0x00031481) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1d60,	// (0x00031481) cell_vkb2_top_candi_pane_g2

0x92f7,	// (0x00038a18) cell_vkb2_top_candi_pane_g3_ParamLimits

0x92f7,	// (0x00038a18) cell_vkb2_top_candi_pane_g3

0x2602,	// (0x00031d23) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2602,	// (0x00031d23) cell_vkb2_top_candi_pane_g4

0x7b40,	// (0x00037261) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7b40,	// (0x00037261) cell_vkb2_top_candi_pane_g5

0x2623,	// (0x00031d44) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2623,	// (0x00031d44) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe05,	// (0x0003f526) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe05,	// (0x0003f526) cell_vkb2_top_candi_pane_g

0x2631,	// (0x00031d52) cell_vkb2_top_candi_pane_t1

0x18bc,	// (0x00030fdd) aid_size_touch_slider_mark_ParamLimits

0x18bc,	// (0x00030fdd) aid_size_touch_slider_mark

0xeb7e,	// (0x0003e29f) grid_graphic2_catg_pane_ParamLimits

0xeb7e,	// (0x0003e29f) grid_graphic2_catg_pane

0xec3a,	// (0x0003e35b) popup_grid_graphic2_window_t1_ParamLimits

0xec3a,	// (0x0003e35b) popup_grid_graphic2_window_t1

0xec50,	// (0x0003e371) popup_grid_graphic2_window_t2_ParamLimits

0xec50,	// (0x0003e371) popup_grid_graphic2_window_t2

0x0001,

0xfdc0,	// (0x0003f4e1) popup_grid_graphic2_window_t_ParamLimits

0xfdc0,	// (0x0003f4e1) popup_grid_graphic2_window_t

0x2bbb,	// (0x000322dc) bg_button_pane_cp05_ParamLimits

0xedc9,	// (0x0003e4ea) cell_graphic2_control_pane_g1_ParamLimits

0xeeb7,	// (0x0003e5d8) cell_graphic2_catg_pane_ParamLimits

0xeeb7,	// (0x0003e5d8) cell_graphic2_catg_pane

0x283e,	// (0x00031f5f) bg_button_pane_cp12

0xeec9,	// (0x0003e5ea) cell_graphic2_catg_pane_g1

0x8cad,	// (0x000383ce) cell_tb_ext_pane_t1_ParamLimits

0x23ec,	// (0x00031b0d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23ec,	// (0x00031b0d) vkb2_top_cell_right_narrow_pane

0x2404,	// (0x00031b25) vkb2_top_cell_right_wide_pane_ParamLimits

0x2404,	// (0x00031b25) vkb2_top_cell_right_wide_pane

0x1aed,	// (0x0003120e) bg_vkb2_func_pane_ParamLimits

0x1aed,	// (0x0003120e) bg_vkb2_func_pane

0x2475,	// (0x00031b96) vkb2_top_cell_left_pane_g1_ParamLimits

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp03

0x24d3,	// (0x00031bf4) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4ce7,	// (0x00034408) bg_vkb2_func_pane_g1

0x4cef,	// (0x00034410) bg_vkb2_func_pane_g2

0x4cff,	// (0x00034420) bg_vkb2_func_pane_g3

0x4cf7,	// (0x00034418) bg_vkb2_func_pane_g4

0x4d07,	// (0x00034428) bg_vkb2_func_pane_g5

0x4d0f,	// (0x00034430) bg_vkb2_func_pane_g6

0x4d17,	// (0x00034438) bg_vkb2_func_pane_g7

0x4d1f,	// (0x00034440) bg_vkb2_func_pane_g8

0x4cdf,	// (0x00034400) bg_vkb2_func_pane_g9

0x0008,

0xfe12,	// (0x0003f533) bg_vkb2_func_pane_g

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp01

0x2475,	// (0x00031b96) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2475,	// (0x00031b96) vkb2_top_cell_right_wide_pane_g1

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1aed,	// (0x0003120e) bg_vkb2_fuc_pane_cp02

0x24d3,	// (0x00031bf4) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x24d3,	// (0x00031bf4) vkb2_top_cell_right_narrow_pane_g1

0xe402,	// (0x0003db23) aid_touch_area_decrease_ParamLimits

0xe402,	// (0x0003db23) aid_touch_area_decrease

0xe436,	// (0x0003db57) aid_touch_area_increase_ParamLimits

0xe436,	// (0x0003db57) aid_touch_area_increase

0xe45e,	// (0x0003db7f) aid_touch_area_mute_ParamLimits

0xe45e,	// (0x0003db7f) aid_touch_area_mute

0xe48e,	// (0x0003dbaf) aid_touch_area_slider_ParamLimits

0xe48e,	// (0x0003dbaf) aid_touch_area_slider

0xe4ce,	// (0x0003dbef) popup_slider_window_g4_ParamLimits

0xe4ce,	// (0x0003dbef) popup_slider_window_g4

0xe4f6,	// (0x0003dc17) popup_slider_window_g5_ParamLimits

0xe4f6,	// (0x0003dc17) popup_slider_window_g5

0xe52a,	// (0x0003dc4b) popup_slider_window_g6_ParamLimits

0xe52a,	// (0x0003dc4b) popup_slider_window_g6

0x8a89,	// (0x000381aa) popup_slider_window_t2_ParamLimits

0x8a89,	// (0x000381aa) popup_slider_window_t2

0x0001,

0xfd0e,	// (0x0003f42f) popup_slider_window_t_ParamLimits

0xfd0e,	// (0x0003f42f) popup_slider_window_t

0xe546,	// (0x0003dc67) slider_pane_ParamLimits

0xe546,	// (0x0003dc67) slider_pane

0x97ac,	// (0x00038ecd) slider_pane_g1_ParamLimits

0x97ac,	// (0x00038ecd) slider_pane_g1

0x97c0,	// (0x00038ee1) slider_pane_g2_ParamLimits

0x97c0,	// (0x00038ee1) slider_pane_g2

0x97d6,	// (0x00038ef7) slider_pane_g3_ParamLimits

0x97d6,	// (0x00038ef7) slider_pane_g3

0x0003,

0xfe25,	// (0x0003f546) slider_pane_g_ParamLimits

0xfe25,	// (0x0003f546) slider_pane_g

0xc28f,	// (0x0003b9b0) popup_tb_float_extension_window_ParamLimits

0xc28f,	// (0x0003b9b0) popup_tb_float_extension_window

0x9802,	// (0x00038f23) aid_size_cell_tb_float_ext

0x283e,	// (0x00031f5f) bg_popup_sub_window_cp28

0x980e,	// (0x00038f2f) grid_tb_float_ext_pane

0x9818,	// (0x00038f39) cell_tb_float_ext_pane_ParamLimits

0x9818,	// (0x00038f39) cell_tb_float_ext_pane

0x9832,	// (0x00038f53) cell_tb_float_ext_pane_g1

0x983b,	// (0x00038f5c) grid_highlight_pane_cp12

0xc5b2,	// (0x0003bcd3) cell_last_hwr_side_pane_ParamLimits

0xc5b2,	// (0x0003bcd3) cell_last_hwr_side_pane

0x73f7,	// (0x00036b18) cell_last_hwr_side_pane_g1

0x9844,	// (0x00038f65) cell_last_hwr_side_pane_g2

0x0001,

0xfe2e,	// (0x0003f54f) cell_last_hwr_side_pane_g

0xcb19,	// (0x0003c23a) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcb19,	// (0x0003c23a) vkb2_area_bottom_space_btn_pane

0x1d52,	// (0x00031473) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9318,	// (0x00038a39) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2631,	// (0x00031d52) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2650,	// (0x00031d71) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2650,	// (0x00031d71) vkb2_area_bottom_space_btn_pane_g1

0x268a,	// (0x00031dab) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x268a,	// (0x00031dab) vkb2_area_bottom_space_btn_pane_g2

0x26c0,	// (0x00031de1) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26c0,	// (0x00031de1) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe33,	// (0x0003f554) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe33,	// (0x0003f554) vkb2_area_bottom_space_btn_pane_g

0x1bb0,	// (0x000312d1) cel_fep_hwr_func_pane_ParamLimits

0x1bb0,	// (0x000312d1) cel_fep_hwr_func_pane

0xc587,	// (0x0003bca8) cell_hwr_side_button_pane_ParamLimits

0xc587,	// (0x0003bca8) cell_hwr_side_button_pane

0x8ce1,	// (0x00038402) aid_area_touch_clock_ParamLimits

0x2bbb,	// (0x000322dc) bg_uniindi_top_pane_ParamLimits

0x8cf3,	// (0x00038414) uniindi_top_pane_g1_ParamLimits

0x8d09,	// (0x0003842a) uniindi_top_pane_g2_ParamLimits

0x8d15,	// (0x00038436) uniindi_top_pane_g3_ParamLimits

0x8d26,	// (0x00038447) uniindi_top_pane_g4_ParamLimits

0xfd46,	// (0x0003f467) uniindi_top_pane_g_ParamLimits

0x8d33,	// (0x00038454) uniindi_top_pane_t1_ParamLimits

0x2bbb,	// (0x000322dc) bg_vkb2_func_pane_cp01_ParamLimits

0x2bbb,	// (0x000322dc) bg_vkb2_func_pane_cp01

0x984d,	// (0x00038f6e) cel_fep_hwr_func_pane_g1_ParamLimits

0x984d,	// (0x00038f6e) cel_fep_hwr_func_pane_g1

0x2bbb,	// (0x000322dc) bg_vkb2_func_pane_cp02_ParamLimits

0x2bbb,	// (0x000322dc) bg_vkb2_func_pane_cp02

0x984d,	// (0x00038f6e) cell_hwr_side_button_pane_g1_ParamLimits

0x984d,	// (0x00038f6e) cell_hwr_side_button_pane_g1

0x4b63,	// (0x00034284) status_pane_g4_ParamLimits

0x4b63,	// (0x00034284) status_pane_g4

0x4b7d,	// (0x0003429e) status_pane_t1

0x7131,	// (0x00036852) form2_midp_gauge_slider_cont_pane

0x7139,	// (0x0003685a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdda8,	// (0x0003d4c9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xddba,	// (0x0003d4db) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb06,	// (0x0003f227) form2_midp_gauge_slider_pane_t_ParamLimits

0x716f,	// (0x00036890) form2_midp_slider_pane_ParamLimits

0x200a,	// (0x0003172b) aid_size_cell_func_vkb2_ParamLimits

0x200a,	// (0x0003172b) aid_size_cell_func_vkb2

0x97ee,	// (0x00038f0f) slider_pane_g4_ParamLimits

0x97ee,	// (0x00038f0f) slider_pane_g4

0xcb7a,	// (0x0003c29b) form2_midp_gauge_slider_pane_t2_cp01

0xcb88,	// (0x0003c2a9) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcb88,	// (0x0003c2a9) form2_midp_gauge_slider_pane_t3_cp01

0x2735,	// (0x00031e56) form2_midp_slider_pane_cp01

0x283e,	// (0x00031f5f) navi_smil_pane

0x9886,	// (0x00038fa7) navi_smil_pane_g1

0x988e,	// (0x00038faf) navi_smil_pane_t1

0x985b,	// (0x00038f7c) form2_midp_slider_pane_g1

0x9864,	// (0x00038f85) form2_midp_slider_pane_g2

0x986c,	// (0x00038f8d) form2_midp_slider_pane_g3

0x985b,	// (0x00038f7c) form2_midp_slider_pane_g4

0xeed2,	// (0x0003e5f3) form2_midp_slider_pane_g5

0x0004,

0xfe3c,	// (0x0003f55d) form2_midp_slider_pane_g

0x26fa,	// (0x00031e1b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x26fa,	// (0x00031e1b) vkb2_area_bottom_space_btn_pane_g4

0xd45f,	// (0x0003cb80) lc0_navi_pane_ParamLimits

0xd45f,	// (0x0003cb80) lc0_navi_pane

0xd4c9,	// (0x0003cbea) lc0_stat_indi_pane_ParamLimits

0xd4c9,	// (0x0003cbea) lc0_stat_indi_pane

0xd4de,	// (0x0003cbff) ls0_title_pane_ParamLimits

0xd4de,	// (0x0003cbff) ls0_title_pane

0x3822,	// (0x00032f43) bg_popup_sub_pane_cp14_ParamLimits

0x8cc8,	// (0x000383e9) list_uniindi_pane_ParamLimits

0x8cd4,	// (0x000383f5) uniindi_top_pane_ParamLimits

0x8d70,	// (0x00038491) list_single_uniindi_pane_g1_ParamLimits

0x8d83,	// (0x000384a4) list_single_uniindi_pane_t1_ParamLimits

0xcba5,	// (0x0003c2c6) lc0_stat_clock_pane_ParamLimits

0xcba5,	// (0x0003c2c6) lc0_stat_clock_pane

0xeedd,	// (0x0003e5fe) lc0_stat_indi_pane_g1_ParamLimits

0xeedd,	// (0x0003e5fe) lc0_stat_indi_pane_g1

0xeeea,	// (0x0003e60b) lc0_stat_indi_pane_g2_ParamLimits

0xeeea,	// (0x0003e60b) lc0_stat_indi_pane_g2

0x0001,

0xfe47,	// (0x0003f568) lc0_stat_indi_pane_g_ParamLimits

0xfe47,	// (0x0003f568) lc0_stat_indi_pane_g

0xcbb2,	// (0x0003c2d3) lc0_uni_indicator_pane_ParamLimits

0xcbb2,	// (0x0003c2d3) lc0_uni_indicator_pane

0xeef7,	// (0x0003e618) ls0_title_pane_g1_ParamLimits

0xeef7,	// (0x0003e618) ls0_title_pane_g1

0xef0b,	// (0x0003e62c) ls0_title_pane_t1_ParamLimits

0xef0b,	// (0x0003e62c) ls0_title_pane_t1

0xcbbf,	// (0x0003c2e0) lc0_uni_indicator_pane_g1_ParamLimits

0xcbbf,	// (0x0003c2e0) lc0_uni_indicator_pane_g1

0x9900,	// (0x00039021) lc0_stat_clock_pane_t1

0xf441,	// (0x0003eb62) main_ai5_pane

0x990e,	// (0x0003902f) ai5_sk_pane_ParamLimits

0x990e,	// (0x0003902f) ai5_sk_pane

0xef39,	// (0x0003e65a) cell_ai5_widget_pane_ParamLimits

0xef39,	// (0x0003e65a) cell_ai5_widget_pane

0x99d1,	// (0x000390f2) aid_size_cell_widget_grid

0x99e7,	// (0x00039108) bg_ai5_widget_pane_ParamLimits

0x99e7,	// (0x00039108) bg_ai5_widget_pane

0x9a51,	// (0x00039172) cell_ai5_widget_pane_g2

0x9a61,	// (0x00039182) cell_ai5_widget_pane_g3

0x9a80,	// (0x000391a1) cell_ai5_widget_pane_g4

0x9a8c,	// (0x000391ad) cell_ai5_widget_pane_g5

0x9a98,	// (0x000391b9) cell_ai5_widget_pane_g6

0x9aa4,	// (0x000391c5) cell_ai5_widget_pane_g7

0x9aec,	// (0x0003920d) cell_ai5_widget_pane_t1_ParamLimits

0x9aec,	// (0x0003920d) cell_ai5_widget_pane_t1

0x9b09,	// (0x0003922a) cell_ai5_widget_pane_t2_ParamLimits

0x9b09,	// (0x0003922a) cell_ai5_widget_pane_t2

0x9b21,	// (0x00039242) cell_ai5_widget_pane_t3_ParamLimits

0x9b21,	// (0x00039242) cell_ai5_widget_pane_t3

0x9b39,	// (0x0003925a) cell_ai5_widget_pane_t4_ParamLimits

0x9b39,	// (0x0003925a) cell_ai5_widget_pane_t4

0x9b53,	// (0x00039274) cell_ai5_widget_pane_t5_ParamLimits

0x9b53,	// (0x00039274) cell_ai5_widget_pane_t5

0x9b72,	// (0x00039293) cell_ai5_widget_pane_t6_ParamLimits

0x9b72,	// (0x00039293) cell_ai5_widget_pane_t6

0x9b84,	// (0x000392a5) cell_ai5_widget_pane_t7_ParamLimits

0x9b84,	// (0x000392a5) cell_ai5_widget_pane_t7

0x9b9d,	// (0x000392be) cell_ai5_widget_pane_t8_ParamLimits

0x9b9d,	// (0x000392be) cell_ai5_widget_pane_t8

0x0009,

0xfe61,	// (0x0003f582) cell_ai5_widget_pane_t_ParamLimits

0xfe61,	// (0x0003f582) cell_ai5_widget_pane_t

0x9be9,	// (0x0003930a) grid_ai5_widget_pane

0x3822,	// (0x00032f43) highlight_cell_ai5_widget_pane_ParamLimits

0x3822,	// (0x00032f43) highlight_cell_ai5_widget_pane

0xefa3,	// (0x0003e6c4) ai5_sk_left_pane

0xefad,	// (0x0003e6ce) ai5_sk_middle_pane

0xefb7,	// (0x0003e6d8) ai5_sk_right_pane

0x9c1f,	// (0x00039340) bg_ai5_widget_pane_g1_ParamLimits

0x9c1f,	// (0x00039340) bg_ai5_widget_pane_g1

0x9c2b,	// (0x0003934c) bg_ai5_widget_pane_g2_ParamLimits

0x9c2b,	// (0x0003934c) bg_ai5_widget_pane_g2

0x9c37,	// (0x00039358) bg_ai5_widget_pane_g3_ParamLimits

0x9c37,	// (0x00039358) bg_ai5_widget_pane_g3

0x9c43,	// (0x00039364) bg_ai5_widget_pane_g4_ParamLimits

0x9c43,	// (0x00039364) bg_ai5_widget_pane_g4

0x9c4f,	// (0x00039370) bg_ai5_widget_pane_g5_ParamLimits

0x9c4f,	// (0x00039370) bg_ai5_widget_pane_g5

0x9c5b,	// (0x0003937c) bg_ai5_widget_pane_g6_ParamLimits

0x9c5b,	// (0x0003937c) bg_ai5_widget_pane_g6

0x9c67,	// (0x00039388) bg_ai5_widget_pane_g7_ParamLimits

0x9c67,	// (0x00039388) bg_ai5_widget_pane_g7

0x9c73,	// (0x00039394) bg_ai5_widget_pane_g8_ParamLimits

0x9c73,	// (0x00039394) bg_ai5_widget_pane_g8

0x9c7f,	// (0x000393a0) bg_ai5_widget_pane_g9_ParamLimits

0x9c7f,	// (0x000393a0) bg_ai5_widget_pane_g9

0x0008,

0xfe76,	// (0x0003f597) bg_ai5_widget_pane_g_ParamLimits

0xfe76,	// (0x0003f597) bg_ai5_widget_pane_g

0x9cb2,	// (0x000393d3) cell_shortcut_ai5_widget_pane_ParamLimits

0x9cb2,	// (0x000393d3) cell_shortcut_ai5_widget_pane

0x4488,	// (0x00033ba9) bg_cell_shortcut_ai5_widget_pane

0x9cc3,	// (0x000393e4) cell_grid_ai5_widget_pane_g1

0x9ccc,	// (0x000393ed) highlight_cell_shortcut_ai5_widget_pane

0x4ce7,	// (0x00034408) ai5_sk_left_pane_g1

0x9cd4,	// (0x000393f5) ai5_sk_left_pane_g2

0x9cdc,	// (0x000393fd) ai5_sk_left_pane_g3

0x9ce4,	// (0x00039405) ai5_sk_left_pane_g4

0x0003,

0xfe89,	// (0x0003f5aa) ai5_sk_left_pane_g

0x9cec,	// (0x0003940d) ai5_sk_left_pane_t1

0x4cef,	// (0x00034410) ai5_sk_right_pane_g1

0x9cfa,	// (0x0003941b) ai5_sk_right_pane_g2

0x9d02,	// (0x00039423) ai5_sk_right_pane_g3

0x9d0a,	// (0x0003942b) ai5_sk_right_pane_g4

0x0003,

0xfe92,	// (0x0003f5b3) ai5_sk_right_pane_g

0x9d12,	// (0x00039433) ai5_sk_right_pane_t1

0x4cef,	// (0x00034410) ai5_sk_middle_pane_g1

0x4ce7,	// (0x00034408) ai5_sk_middle_pane_g2

0x4d07,	// (0x00034428) ai5_sk_middle_pane_g3

0x9d02,	// (0x00039423) ai5_sk_middle_pane_g4

0x9cdc,	// (0x000393fd) ai5_sk_middle_pane_g5

0x9d20,	// (0x00039441) ai5_sk_middle_pane_g6

0xefc1,	// (0x0003e6e2) ai5_sk_middle_pane_g7

0x0006,

0xfe9b,	// (0x0003f5bc) ai5_sk_middle_pane_g

0xd34b,	// (0x0003ca6c) aid_touch_area_size_lc0_ParamLimits

0xd34b,	// (0x0003ca6c) aid_touch_area_size_lc0

0x1d81,	// (0x000314a2) cell_hwr_candidate_pane_t1_ParamLimits

0x484c,	// (0x00033f6d) aid_touch_navi_pane

0xd5d1,	// (0x0003ccf2) status_dt_navi_pane_ParamLimits

0xd5d1,	// (0x0003ccf2) status_dt_navi_pane

0xd5e9,	// (0x0003cd0a) status_dt_sta_pane_ParamLimits

0xd5e9,	// (0x0003cd0a) status_dt_sta_pane

0xefc9,	// (0x0003e6ea) dt_sta_controll_pane

0xefd6,	// (0x0003e6f7) dt_sta_indi_pane

0xefe3,	// (0x0003e704) dt_sta_title_pane

0x2bbb,	// (0x000322dc) bg_dt_sta_indi_pane_ParamLimits

0x2bbb,	// (0x000322dc) bg_dt_sta_indi_pane

0x9d5b,	// (0x0003947c) dt_sta_battery_pane

0x9d63,	// (0x00039484) dt_sta_indi_pane_g1

0x9d6c,	// (0x0003948d) dt_sta_indi_pane_g2

0x9d75,	// (0x00039496) dt_sta_indi_pane_g3

0x0002,

0xfeaa,	// (0x0003f5cb) dt_sta_indi_pane_g

0x9d7e,	// (0x0003949f) dt_sta_signal_pane

0x3822,	// (0x00032f43) bg_dt_sta_title_pane_ParamLimits

0x3822,	// (0x00032f43) bg_dt_sta_title_pane

0x9d87,	// (0x000394a8) dt_sta_title_pane_g1

0x9d8f,	// (0x000394b0) dt_sta_title_pane_t1_ParamLimits

0x9d8f,	// (0x000394b0) dt_sta_title_pane_t1

0x283e,	// (0x00031f5f) bg_dt_sta_control_pane

0x9da4,	// (0x000394c5) dt_sta_controll_pane_g1

0x9dad,	// (0x000394ce) bg_dt_sta_title_pane_g1

0x9db6,	// (0x000394d7) bg_dt_sta_title_pane_g2

0x9dbf,	// (0x000394e0) bg_dt_sta_title_pane_g3

0x0002,

0xfeb1,	// (0x0003f5d2) bg_dt_sta_title_pane_g

0x73f7,	// (0x00036b18) bg_dt_sta_indi_pane_g1

0x9dc8,	// (0x000394e9) dt_sta_signal_pane_g1

0x9dd0,	// (0x000394f1) dt_sta_signal_pane_g2

0x0001,

0xfeb8,	// (0x0003f5d9) dt_sta_signal_pane_g

0x9dd8,	// (0x000394f9) dt_sta_battery_pane_g1

0x9de1,	// (0x00039502) dt_sta_battery_pane_t1

0x73f7,	// (0x00036b18) bg_dt_sta_control_pane_g1

0x3f92,	// (0x000336b3) fep_china_uni_eep_pane

0x3f9a,	// (0x000336bb) fep_china_uni_entry_pane_ParamLimits

0x3faa,	// (0x000336cb) popup_fep_china_uni_window_g1_ParamLimits

0x3fba,	// (0x000336db) popup_fep_china_uni_window_g2_ParamLimits

0x3fba,	// (0x000336db) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0003ee44) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0003ee44) popup_fep_china_uni_window_g

0x9df0,	// (0x00039511) fep_china_uni_eep_pane_g1

0x9df8,	// (0x00039519) fep_china_uni_eep_pane_t1

0x987d,	// (0x00038f9e) aid_touch_area_size_smil_player

0x4998,	// (0x000340b9) lc0_clock_pane

0x4b71,	// (0x00034292) status_pane_g5_ParamLimits

0x4b71,	// (0x00034292) status_pane_g5

0xbe11,	// (0x0003b532) popup_keymap_window

0x4b37,	// (0x00034258) status_icon_pane

0x9a61,	// (0x00039182) cell_ai5_widget_pane_g3_ParamLimits

0x9a80,	// (0x000391a1) cell_ai5_widget_pane_g4_ParamLimits

0x9a8c,	// (0x000391ad) cell_ai5_widget_pane_g5_ParamLimits

0x9ab0,	// (0x000391d1) cell_ai5_widget_pane_g8_ParamLimits

0x9ab0,	// (0x000391d1) cell_ai5_widget_pane_g8

0x9ac4,	// (0x000391e5) cell_ai5_widget_pane_g9_ParamLimits

0x9ac4,	// (0x000391e5) cell_ai5_widget_pane_g9

0x9ad8,	// (0x000391f9) cell_ai5_widget_pane_g10_ParamLimits

0x9ad8,	// (0x000391f9) cell_ai5_widget_pane_g10

0x9e07,	// (0x00039528) status_icon_pane_g1

0x283e,	// (0x00031f5f) bg_popup_sub_pane_cp13

0x9e0f,	// (0x00039530) popup_keymap_window_t1

0xd2cd,	// (0x0003c9ee) control_pane_g6_ParamLimits

0xd2cd,	// (0x0003c9ee) control_pane_g6

0xd2da,	// (0x0003c9fb) control_pane_g7_ParamLimits

0xd2da,	// (0x0003c9fb) control_pane_g7

0xd2e7,	// (0x0003ca08) control_pane_g8_ParamLimits

0xd2e7,	// (0x0003ca08) control_pane_g8

0xefc9,	// (0x0003e6ea) dt_sta_controll_pane_ParamLimits

0xefd6,	// (0x0003e6f7) dt_sta_indi_pane_ParamLimits

0xefe3,	// (0x0003e704) dt_sta_title_pane_ParamLimits

0x375a,	// (0x00032e7b) aid_size_touch_scroll_bar_cale

0xf51a,	// (0x0003ec3b) popup_discreet_window_ParamLimits

0xf51a,	// (0x0003ec3b) popup_discreet_window

0xb3f4,	// (0x0003ab15) popup_sk_window

0x53e8,	// (0x00034b09) bg_popup_sub_pane_cp28_ParamLimits

0x53e8,	// (0x00034b09) bg_popup_sub_pane_cp28

0x9e1d,	// (0x0003953e) popup_discreet_window_g1_ParamLimits

0x9e1d,	// (0x0003953e) popup_discreet_window_g1

0x9e3d,	// (0x0003955e) popup_discreet_window_t1_ParamLimits

0x9e3d,	// (0x0003955e) popup_discreet_window_t1

0x9e5b,	// (0x0003957c) popup_discreet_window_t2_ParamLimits

0x9e5b,	// (0x0003957c) popup_discreet_window_t2

0x0002,

0xfebd,	// (0x0003f5de) popup_discreet_window_t_ParamLimits

0xfebd,	// (0x0003f5de) popup_discreet_window_t

0x276c,	// (0x00031e8d) popup_sk_window_g1

0x2776,	// (0x00031e97) popup_sk_window_g2

0x0001,

0xfec4,	// (0x0003f5e5) popup_sk_window_g

0x2780,	// (0x00031ea1) popup_sk_window_t1

0x278e,	// (0x00031eaf) popup_sk_window_t1_copy1

0x9a51,	// (0x00039172) cell_ai5_widget_pane_g2_ParamLimits

0x9baf,	// (0x000392d0) cell_ai5_widget_pane_t9_ParamLimits

0x9baf,	// (0x000392d0) cell_ai5_widget_pane_t9

0x283e,	// (0x00031f5f) main_fep_fshwr2_pane

0xcbe6,	// (0x0003c307) aid_fshwr2_btn_pane

0xcbf5,	// (0x0003c316) aid_fshwr2_syb_pane

0xcc07,	// (0x0003c328) aid_fshwr2_txt_pane

0xcc16,	// (0x0003c337) fshwr2_func_candi_pane

0xcc27,	// (0x0003c348) fshwr2_hwr_syb_pane

0xcc42,	// (0x0003c363) fshwr2_icf_pane

0x283e,	// (0x00031f5f) fshwr2_icf_bg_pane

0xeff5,	// (0x0003e716) fshwr2_icf_pane_t1_ParamLimits

0xeff5,	// (0x0003e716) fshwr2_icf_pane_t1

0x73f7,	// (0x00036b18) fshwr2_func_candi_pane_g1

0x9ec4,	// (0x000395e5) fshwr2_func_candi_row_pane_ParamLimits

0x9ec4,	// (0x000395e5) fshwr2_func_candi_row_pane

0xf00d,	// (0x0003e72e) cell_fshwr2_syb_pane_ParamLimits

0xf00d,	// (0x0003e72e) cell_fshwr2_syb_pane

0x7675,	// (0x00036d96) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7675,	// (0x00036d96) fshwr2_hwr_syb_pane_g1

0x283e,	// (0x00031f5f) bg_popup_call_pane_cp01

0x9eef,	// (0x00039610) fshwr2_func_candi_cell_pane_ParamLimits

0x9eef,	// (0x00039610) fshwr2_func_candi_cell_pane

0x9f20,	// (0x00039641) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9f20,	// (0x00039641) fshwr2_func_candi_cell_bg_pane

0x9f3a,	// (0x0003965b) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9f3a,	// (0x0003965b) fshwr2_func_candi_cell_pane_g1

0x9f62,	// (0x00039683) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9f62,	// (0x00039683) fshwr2_func_candi_cell_pane_t1

0x283e,	// (0x00031f5f) bg_button_pane_cp08

0x4488,	// (0x00033ba9) cell_fshwr2_syb_bg_pane

0xf027,	// (0x0003e748) cell_fshwr2_syb_bg_pane_g1

0xf02f,	// (0x0003e750) cell_fshwr2_syb_bg_pane_t1

0x3822,	// (0x00032f43) main_tmo_pane

0x5ef7,	// (0x00035618) uni_indicator_pane_g1_ParamLimits

0x5f0c,	// (0x0003562d) uni_indicator_pane_g2_ParamLimits

0x5f22,	// (0x00035643) uni_indicator_pane_g3_ParamLimits

0x5f38,	// (0x00035659) uni_indicator_pane_g4_ParamLimits

0x5f38,	// (0x00035659) uni_indicator_pane_g4

0x5f4c,	// (0x0003566d) uni_indicator_pane_g5_ParamLimits

0x5f4c,	// (0x0003566d) uni_indicator_pane_g5

0x5f60,	// (0x00035681) uni_indicator_pane_g6_ParamLimits

0x5f60,	// (0x00035681) uni_indicator_pane_g6

0xf922,	// (0x0003f043) uni_indicator_pane_g_ParamLimits

0xe3de,	// (0x0003daff) popup_tmo_note_window_ParamLimits

0xe3de,	// (0x0003daff) popup_tmo_note_window

0x1fec,	// (0x0003170d) fshwr2_bg_pane

0x9f53,	// (0x00039674) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9f53,	// (0x00039674) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec9,	// (0x0003f5ea) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec9,	// (0x0003f5ea) fshwr2_func_candi_cell_pane_g

0x73f7,	// (0x00036b18) bg_popup_window_pane_cp01

0x9f8c,	// (0x000396ad) bg_popup_window_pane_g1_cp01

0x9f95,	// (0x000396b6) bg_popup_window_pane_cp22_ParamLimits

0x9f95,	// (0x000396b6) bg_popup_window_pane_cp22

0x9fa3,	// (0x000396c4) listscroll_tmo_link_pane_ParamLimits

0x9fa3,	// (0x000396c4) listscroll_tmo_link_pane

0x9fe3,	// (0x00039704) popup_tmo_note_window_g1_ParamLimits

0x9fe3,	// (0x00039704) popup_tmo_note_window_g1

0x9ff0,	// (0x00039711) tmo_note_info_pane_ParamLimits

0x9ff0,	// (0x00039711) tmo_note_info_pane

0xf03e,	// (0x0003e75f) list_tmo_note_info_pane_g1_ParamLimits

0xf03e,	// (0x0003e75f) list_tmo_note_info_pane_g1

0xa021,	// (0x00039742) list_tmo_note_info_pane_g2_ParamLimits

0xa021,	// (0x00039742) list_tmo_note_info_pane_g2

0x0001,

0xfece,	// (0x0003f5ef) list_tmo_note_info_pane_g_ParamLimits

0xfece,	// (0x0003f5ef) list_tmo_note_info_pane_g

0xa03d,	// (0x0003975e) list_tmo_note_info_text_pane_ParamLimits

0xa03d,	// (0x0003975e) list_tmo_note_info_text_pane

0xa0be,	// (0x000397df) list_tmo_link_pane

0xa0cb,	// (0x000397ec) scroll_pane_cp20

0xa0d8,	// (0x000397f9) list_single_tmo_link_pane_ParamLimits

0xa0d8,	// (0x000397f9) list_single_tmo_link_pane

0xa0e8,	// (0x00039809) list_single_tmo_link_pane_t1

0xa0f6,	// (0x00039817) list_tmo_note_info_text_pane_t1_ParamLimits

0xa0f6,	// (0x00039817) list_tmo_note_info_text_pane_t1

0xcf53,	// (0x0003c674) aid_size_touch_scroll_bar_cp01_ParamLimits

0xcf53,	// (0x0003c674) aid_size_touch_scroll_bar_cp01

0xb9a0,	// (0x0003b0c1) aid_size_touch_slider_marker

0xb3e4,	// (0x0003ab05) popup_settings_window_ParamLimits

0xb3e4,	// (0x0003ab05) popup_settings_window

0x0f48,	// (0x00030669) popup_candi_list_indi_window

0x484c,	// (0x00033f6d) aid_touch_navi_pane_ParamLimits

0x1f47,	// (0x00031668) rs_clock_indi_pane

0x1f50,	// (0x00031671) sctrl_sk_bottom_pane_ParamLimits

0x1f61,	// (0x00031682) sctrl_sk_top_pane_ParamLimits

0x2064,	// (0x00031785) popup_fep_tooltip_window

0x99d1,	// (0x000390f2) aid_size_cell_widget_grid_ParamLimits

0x9a45,	// (0x00039166) cell_ai5_widget_pane_g1_ParamLimits

0x9a45,	// (0x00039166) cell_ai5_widget_pane_g1

0x9a98,	// (0x000391b9) cell_ai5_widget_pane_g6_ParamLimits

0x9aa4,	// (0x000391c5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe4c,	// (0x0003f56d) cell_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x0003f56d) cell_ai5_widget_pane_g

0x9bd3,	// (0x000392f4) cell_ai5_widget_pane_t10_ParamLimits

0x9bd3,	// (0x000392f4) cell_ai5_widget_pane_t10

0x9be9,	// (0x0003930a) grid_ai5_widget_pane_ParamLimits

0x9c8b,	// (0x000393ac) cell_contacts_ai5_widget_pane_ParamLimits

0x9c8b,	// (0x000393ac) cell_contacts_ai5_widget_pane

0x9e70,	// (0x00039591) popup_discreet_window_t3_ParamLimits

0x9e70,	// (0x00039591) popup_discreet_window_t3

0x2806,	// (0x00031f27) popup_fshwr2_char_preview_window_ParamLimits

0x2806,	// (0x00031f27) popup_fshwr2_char_preview_window

0xf055,	// (0x0003e776) tmo_note_info_pane_t1

0xf06a,	// (0x0003e78b) tmo_note_info_pane_t2

0xf081,	// (0x0003e7a2) tmo_note_info_pane_t3

0xa09a,	// (0x000397bb) tmo_note_info_pane_t4

0xa0ac,	// (0x000397cd) tmo_note_info_pane_t5

0x0004,

0xfed3,	// (0x0003f5f4) tmo_note_info_pane_t

0xa0be,	// (0x000397df) list_tmo_link_pane_ParamLimits

0xa0cb,	// (0x000397ec) scroll_pane_cp20_ParamLimits

0x283e,	// (0x00031f5f) bg_popup_fep_char_preview_window_cp01

0xa10f,	// (0x00039830) popup_fshwr2_char_preview_window_t1

0xa11d,	// (0x0003983e) popup_candi_list_indi_window_g1

0xa126,	// (0x00039847) bg_cell_contacts_ai5_widget_pane

0xa132,	// (0x00039853) cell_contacts_ai5_widget_pane_g1

0xa146,	// (0x00039867) cell_contacts_ai5_widget_pane_g2

0xa152,	// (0x00039873) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfede,	// (0x0003f5ff) cell_contacts_ai5_widget_pane_g

0xa165,	// (0x00039886) cell_contacts_ai5_widget_pane_t1

0x3822,	// (0x00032f43) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0fb,	// (0x0003e81c) settings_container_pane

0x4488,	// (0x00033ba9) listscroll_set_pane_copy1

0x6a9d,	// (0x000361be) scroll_pane_cp121_copy1

0xa1e8,	// (0x00039909) set_content_pane_copy1

0xf107,	// (0x0003e828) aid_height_set_list_copy1_ParamLimits

0xf107,	// (0x0003e828) aid_height_set_list_copy1

0x6158,	// (0x00035879) aid_size_parent_copy1_ParamLimits

0x6158,	// (0x00035879) aid_size_parent_copy1

0xf113,	// (0x0003e834) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf113,	// (0x0003e834) button_value_adjust_pane_cp6_copy1

0x47c8,	// (0x00033ee9) list_highlight_pane_cp2_copy1_ParamLimits

0x47c8,	// (0x00033ee9) list_highlight_pane_cp2_copy1

0xf127,	// (0x0003e848) list_set_pane_copy1_ParamLimits

0xf127,	// (0x0003e848) list_set_pane_copy1

0xf096,	// (0x0003e7b7) main_pane_set_t1_copy1_ParamLimits

0xf096,	// (0x0003e7b7) main_pane_set_t1_copy1

0xf0d0,	// (0x0003e7f1) main_pane_set_t2_copy1_ParamLimits

0xf0d0,	// (0x0003e7f1) main_pane_set_t2_copy1

0xf1d4,	// (0x0003e8f5) main_pane_set_t3_copy1

0xf1e2,	// (0x0003e903) main_pane_set_t4_copy1

0xf0ef,	// (0x0003e810) set_content_pane_g1_copy1_ParamLimits

0xf0ef,	// (0x0003e810) set_content_pane_g1_copy1

0xf1f0,	// (0x0003e911) setting_code_pane_copy1

0xa2e1,	// (0x00039a02) setting_slider_graphic_pane_copy1

0xa2e1,	// (0x00039a02) setting_slider_pane_copy1

0xa2e1,	// (0x00039a02) setting_text_pane_copy1

0xa2e1,	// (0x00039a02) setting_volume_pane_copy1

0xf1f0,	// (0x0003e911) settings_code_pane_cp2_copy1

0xf1f8,	// (0x0003e919) settings_code_pane_cp_copy1_ParamLimits

0xf1f8,	// (0x0003e919) settings_code_pane_cp_copy1

0xf20c,	// (0x0003e92d) volume_set_pane_copy1

0xf214,	// (0x0003e935) volume_set_pane_g10_copy1

0xf21c,	// (0x0003e93d) volume_set_pane_g1_copy1

0xf224,	// (0x0003e945) volume_set_pane_g2_copy1

0xf22c,	// (0x0003e94d) volume_set_pane_g3_copy1

0xf234,	// (0x0003e955) volume_set_pane_g4_copy1

0xf23c,	// (0x0003e95d) volume_set_pane_g5_copy1

0xf244,	// (0x0003e965) volume_set_pane_g6_copy1

0xf24c,	// (0x0003e96d) volume_set_pane_g7_copy1

0xf254,	// (0x0003e975) volume_set_pane_g8_copy1

0xf25c,	// (0x0003e97d) volume_set_pane_g9_copy1

0x2932,	// (0x00032053) bg_set_opt_pane_cp_copy1_ParamLimits

0x2932,	// (0x00032053) bg_set_opt_pane_cp_copy1

0xa355,	// (0x00039a76) setting_slider_pane_t1_copy1_ParamLimits

0xa355,	// (0x00039a76) setting_slider_pane_t1_copy1

0xf264,	// (0x0003e985) setting_slider_pane_t2_copy1_ParamLimits

0xf264,	// (0x0003e985) setting_slider_pane_t2_copy1

0xf27e,	// (0x0003e99f) setting_slider_pane_t3_copy1_ParamLimits

0xf27e,	// (0x0003e99f) setting_slider_pane_t3_copy1

0xf296,	// (0x0003e9b7) slider_set_pane_copy1_ParamLimits

0xf296,	// (0x0003e9b7) slider_set_pane_copy1

0x3889,	// (0x00032faa) set_opt_bg_pane_g1_copy2

0x3891,	// (0x00032fb2) set_opt_bg_pane_g2_copy2

0xa3bb,	// (0x00039adc) set_opt_bg_pane_g3_copy2

0x38a1,	// (0x00032fc2) set_opt_bg_pane_g4_copy2

0x38a9,	// (0x00032fca) set_opt_bg_pane_g5_copy2

0x38b1,	// (0x00032fd2) set_opt_bg_pane_g6_copy2

0xf2ac,	// (0x0003e9cd) set_opt_bg_pane_g7_copy2

0xa3cd,	// (0x00039aee) set_opt_bg_pane_g8_copy2

0xa3d7,	// (0x00039af8) set_opt_bg_pane_g9_copy2

0xa3e1,	// (0x00039b02) aid_size_touch_slider_mark_copy1_ParamLimits

0xa3e1,	// (0x00039b02) aid_size_touch_slider_mark_copy1

0xa3f5,	// (0x00039b16) slider_set_pane_g1_copy1

0xa3fe,	// (0x00039b1f) slider_set_pane_g2_copy1

0x6802,	// (0x00035f23) slider_set_pane_g3_copy1_ParamLimits

0x6802,	// (0x00035f23) slider_set_pane_g3_copy1

0x6816,	// (0x00035f37) slider_set_pane_g4_copy1_ParamLimits

0x6816,	// (0x00035f37) slider_set_pane_g4_copy1

0x682e,	// (0x00035f4f) slider_set_pane_g5_copy1_ParamLimits

0x682e,	// (0x00035f4f) slider_set_pane_g5_copy1

0x6802,	// (0x00035f23) slider_set_pane_g6_copy1_ParamLimits

0x6802,	// (0x00035f23) slider_set_pane_g6_copy1

0xf2b4,	// (0x0003e9d5) slider_set_pane_g7_copy1_ParamLimits

0xf2b4,	// (0x0003e9d5) slider_set_pane_g7_copy1

0x2852,	// (0x00031f73) bg_set_opt_pane_cp2_copy1

0xa41c,	// (0x00039b3d) setting_slider_graphic_pane_g1_copy1

0xf2ca,	// (0x0003e9eb) setting_slider_graphic_pane_t1_copy1

0xf2da,	// (0x0003e9fb) setting_slider_graphic_pane_t2_copy1

0xf2ea,	// (0x0003ea0b) slider_set_pane_cp_copy1

0xa455,	// (0x00039b76) input_focus_pane_cp1_copy1

0xa45e,	// (0x00039b7f) list_set_text_pane_copy1

0xa466,	// (0x00039b87) setting_text_pane_g1_copy1

0xcc5a,	// (0x0003c37b) set_text_pane_t1_copy1

0xa455,	// (0x00039b76) input_focus_pane_cp2_copy1

0xa466,	// (0x00039b87) setting_code_pane_g1_copy1

0xf2f2,	// (0x0003ea13) setting_code_pane_t1_copy1

0x68c9,	// (0x00035fea) list_set_graphic_pane_copy1

0x2852,	// (0x00031f73) bg_set_opt_pane_cp4_copy1

0xd17a,	// (0x0003c89b) list_set_graphic_pane_g1_copy1_ParamLimits

0xd17a,	// (0x0003c89b) list_set_graphic_pane_g1_copy1

0xf300,	// (0x0003ea21) list_set_graphic_pane_g2_copy1

0xd192,	// (0x0003c8b3) list_set_graphic_pane_t1_copy1_ParamLimits

0xd192,	// (0x0003c8b3) list_set_graphic_pane_t1_copy1

0x73f7,	// (0x00036b18) rs_clock_indi_pane_g1

0xa497,	// (0x00039bb8) rs_clock_indi_pane_t1

0xa4a5,	// (0x00039bc6) rs_indi_pane

0xa4ad,	// (0x00039bce) rs_indi_pane_g1

0xa4b6,	// (0x00039bd7) rs_indi_pane_g2

0xa4bf,	// (0x00039be0) rs_indi_pane_g3

0x0002,

0xfee5,	// (0x0003f606) rs_indi_pane_g

0x4488,	// (0x00033ba9) bg_popup_preview_window_pane_cp03

0xa4c8,	// (0x00039be9) popup_fep_tooltip_window_t1

0x805e,	// (0x0003777f) popup_note2_window_g2_ParamLimits

0x805e,	// (0x0003777f) popup_note2_window_g2

0x0001,

0xfc7e,	// (0x0003f39f) popup_note2_window_g_ParamLimits

0xfc7e,	// (0x0003f39f) popup_note2_window_g

0x8559,	// (0x00037c7a) bg_popup_sub_pane_cp11_ParamLimits

0x8566,	// (0x00037c87) cell_ai3_links_pane_g1_ParamLimits

0x857d,	// (0x00037c9e) cell_ai3_links_pane_t1

0xcc5a,	// (0x0003c37b) set_text_pane_t1_copy1_ParamLimits

0xd206,	// (0x0003c927) cell_graphic_popup_pane_cp2_ParamLimits

0xd206,	// (0x0003c927) cell_graphic_popup_pane_cp2

0xf308,	// (0x0003ea29) cell_graphic_popup_pane_g1_cp2

0x356d,	// (0x00032c8e) cell_graphic_popup_pane_g2_cp2

0xa4de,	// (0x00039bff) cell_graphic_popup_pane_g3_cp2

0xa4e6,	// (0x00039c07) cell_graphic_popup_pane_t2_cp2

0x357e,	// (0x00032c9f) grid_highlight_pane_cp3_cp2

0x3bce,	// (0x000332ef) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3822,	// (0x00032f43) main_tmo_pane_ParamLimits

0xe3d2,	// (0x0003daf3) popup_tmo_big_image_note_window

0x9a35,	// (0x00039156) cell_ai5_widget_list_pane

0x9a3d,	// (0x0003915e) cell_ai5_widget_lrg_icon_pane

0xf055,	// (0x0003e776) tmo_note_info_pane_t1_ParamLimits

0xf06a,	// (0x0003e78b) tmo_note_info_pane_t2_ParamLimits

0xf081,	// (0x0003e7a2) tmo_note_info_pane_t3_ParamLimits

0xa09a,	// (0x000397bb) tmo_note_info_pane_t4_ParamLimits

0xa0ac,	// (0x000397cd) tmo_note_info_pane_t5_ParamLimits

0xfed3,	// (0x0003f5f4) tmo_note_info_pane_t_ParamLimits

0xf0fb,	// (0x0003e81c) settings_container_pane_ParamLimits

0xa44d,	// (0x00039b6e) indicator_popup_pane_cp5

0xa44d,	// (0x00039b6e) indicator_popup_pane_cp6

0x68c9,	// (0x00035fea) list_set_graphic_pane_copy1_ParamLimits

0x283e,	// (0x00031f5f) bg_popup_window_pane_cp23

0xa4f4,	// (0x00039c15) popup_tmo_big_image_note_window_g1

0xa4fe,	// (0x00039c1f) popup_tmo_big_image_note_window_t1

0xa50e,	// (0x00039c2f) popup_tmo_big_image_note_window_t2

0xa51e,	// (0x00039c3f) popup_tmo_big_image_note_window_t3

0x0002,

0xfeec,	// (0x0003f60d) popup_tmo_big_image_note_window_t

0xa52e,	// (0x00039c4f) cell_ai5_widget_lrg_icon_pane_g1

0xa536,	// (0x00039c57) cell_ai5_widget_lrg_icon_pane_t1

0xa544,	// (0x00039c65) cell_ai5_widget_list_row_pane_ParamLimits

0xa544,	// (0x00039c65) cell_ai5_widget_list_row_pane

0xa55d,	// (0x00039c7e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa55d,	// (0x00039c7e) cell_ai5_widget_list_row_pane_g1

0xa56a,	// (0x00039c8b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa56a,	// (0x00039c8b) cell_ai5_widget_list_row_pane_t1

0xa582,	// (0x00039ca3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa582,	// (0x00039ca3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef3,	// (0x0003f614) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef3,	// (0x0003f614) cell_ai5_widget_list_row_pane_t

0xf441,	// (0x0003eb62) main_fep_vtchi_ss_pane

0xa5b9,	// (0x00039cda) popup_fep_char_pre_window

0xa5c1,	// (0x00039ce2) popup_fep_ituss_window

0xa5e2,	// (0x00039d03) popup_fep_vkbss_window

0xa601,	// (0x00039d22) grid_vkbss_keypad_pane_ParamLimits

0xa601,	// (0x00039d22) grid_vkbss_keypad_pane

0xa611,	// (0x00039d32) ituss_keypad_pane

0xa62d,	// (0x00039d4e) aid_vkbss_key_offset_ParamLimits

0xa62d,	// (0x00039d4e) aid_vkbss_key_offset

0xa639,	// (0x00039d5a) cell_vkbss_key_pane_ParamLimits

0xa639,	// (0x00039d5a) cell_vkbss_key_pane

0xa64f,	// (0x00039d70) bg_cell_vkbss_key_g1_ParamLimits

0xa64f,	// (0x00039d70) bg_cell_vkbss_key_g1

0xa65b,	// (0x00039d7c) cell_vkbss_key_3p_pane_ParamLimits

0xa65b,	// (0x00039d7c) cell_vkbss_key_3p_pane

0xa675,	// (0x00039d96) cell_vkbss_key_g1_ParamLimits

0xa675,	// (0x00039d96) cell_vkbss_key_g1

0xa68f,	// (0x00039db0) cell_vkbss_key_t1_ParamLimits

0xa68f,	// (0x00039db0) cell_vkbss_key_t1

0xa6ba,	// (0x00039ddb) cell_ituss_key_pane_ParamLimits

0xa6ba,	// (0x00039ddb) cell_ituss_key_pane

0xa6cb,	// (0x00039dec) bg_cell_ituss_key_g1_ParamLimits

0xa6cb,	// (0x00039dec) bg_cell_ituss_key_g1

0xa6d7,	// (0x00039df8) cell_ituss_key_pane_g1_ParamLimits

0xa6d7,	// (0x00039df8) cell_ituss_key_pane_g1

0xa6f1,	// (0x00039e12) cell_ituss_key_pane_g2_ParamLimits

0xa6f1,	// (0x00039e12) cell_ituss_key_pane_g2

0x0001,

0xfefa,	// (0x0003f61b) cell_ituss_key_pane_g_ParamLimits

0xfefa,	// (0x0003f61b) cell_ituss_key_pane_g

0xa71c,	// (0x00039e3d) cell_ituss_key_t1_ParamLimits

0xa71c,	// (0x00039e3d) cell_ituss_key_t1

0xa74a,	// (0x00039e6b) cell_ituss_key_t2_ParamLimits

0xa74a,	// (0x00039e6b) cell_ituss_key_t2

0xa77b,	// (0x00039e9c) cell_ituss_key_t3_ParamLimits

0xa77b,	// (0x00039e9c) cell_ituss_key_t3

0xa7ac,	// (0x00039ecd) cell_ituss_key_t4_ParamLimits

0xa7ac,	// (0x00039ecd) cell_ituss_key_t4

0x0003,

0xfeff,	// (0x0003f620) cell_ituss_key_t_ParamLimits

0xfeff,	// (0x0003f620) cell_ituss_key_t

0xa7dd,	// (0x00039efe) cell_vkbss_key_3p_pane_g1

0xa7e5,	// (0x00039f06) cell_vkbss_key_3p_pane_g2

0xa7ed,	// (0x00039f0e) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0003f629) cell_vkbss_key_3p_pane_g

0x283e,	// (0x00031f5f) bg_popup_fep_char_preview_window_cp02

0xa7f5,	// (0x00039f16) popup_fep_char_pre_window_t1

0xef99,	// (0x0003e6ba) main_ai5_sk_pane

0xa126,	// (0x00039847) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa132,	// (0x00039853) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa146,	// (0x00039867) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa152,	// (0x00039873) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfede,	// (0x0003f5ff) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa165,	// (0x00039886) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3822,	// (0x00032f43) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf310,	// (0x0003ea31) main_ai5_sk_pane_g1

0x5215,	// (0x00034936) popup_query_code_window_g1

0xa5d7,	// (0x00039cf8) popup_fep_vkb_icf_pane

0xa5eb,	// (0x00039d0c) popup_fep_vtchi_icf_pane

0x3822,	// (0x00032f43) bg_icf_pane

0xa80d,	// (0x00039f2e) list_vkb_icf_pane

0x3822,	// (0x00032f43) bg_icf_pane_cp01

0xa819,	// (0x00039f3a) vtchi_icf_list_pane

0xa82a,	// (0x00039f4b) list_vkb_icf_pane_t1_ParamLimits

0xa82a,	// (0x00039f4b) list_vkb_icf_pane_t1

0xa841,	// (0x00039f62) vtchi_icf_list_pane_t1_ParamLimits

0xa841,	// (0x00039f62) vtchi_icf_list_pane_t1

0xa5c1,	// (0x00039ce2) popup_fep_ituss_window_ParamLimits

0xa5eb,	// (0x00039d0c) popup_fep_vtchi_icf_pane_ParamLimits

0xa611,	// (0x00039d32) ituss_keypad_pane_ParamLimits

0xa621,	// (0x00039d42) ituss_sks_pane

0x3822,	// (0x00032f43) bg_icf_pane_ParamLimits

0xa5aa,	// (0x00039ccb) icf_edit_indi_pane_ParamLimits

0xa5aa,	// (0x00039ccb) icf_edit_indi_pane

0xa80d,	// (0x00039f2e) list_vkb_icf_pane_ParamLimits

0x3822,	// (0x00032f43) bg_icf_pane_cp01_ParamLimits

0xa5aa,	// (0x00039ccb) icf_edit_indi_pane_cp01_ParamLimits

0xa5aa,	// (0x00039ccb) icf_edit_indi_pane_cp01

0xa821,	// (0x00039f42) vtchi_query_pane

0x7675,	// (0x00036d96) icf_edit_indi_pane_g1_ParamLimits

0x7675,	// (0x00036d96) icf_edit_indi_pane_g1

0xa8c7,	// (0x00039fe8) icf_edit_indi_pane_g2_ParamLimits

0xa8c7,	// (0x00039fe8) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0003f641) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0003f641) icf_edit_indi_pane_g

0xa8d6,	// (0x00039ff7) icf_edit_indi_pane_t1

0xa85d,	// (0x00039f7e) bg_input_focus_pane_cp042

0x3751,	// (0x00032e72) vtchi_button_pane

0xa866,	// (0x00039f87) vtchi_query_pane_t1

0xa874,	// (0x00039f95) vtchi_query_pane_t2

0xa882,	// (0x00039fa3) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0003f630) vtchi_query_pane_t

0x283e,	// (0x00031f5f) bg_button_pane_cp13

0xa890,	// (0x00039fb1) vtchi_button_pane_g1

0xa898,	// (0x00039fb9) ituss_sks_pane_g1

0xa8a3,	// (0x00039fc4) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x0003f637) ituss_sks_pane_g

0xa8ab,	// (0x00039fcc) ituss_sks_pane_t1

0xa8b9,	// (0x00039fda) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x0003f63c) ituss_sks_pane_t

0x6e60,	// (0x00036581) indicator_nsta_pane_cp_g1

0x6e69,	// (0x0003658a) indicator_nsta_pane_cp_g2

0x6e71,	// (0x00036592) indicator_nsta_pane_cp_g3

0x6e79,	// (0x0003659a) indicator_nsta_pane_cp_g4

0x6e81,	// (0x000365a2) indicator_nsta_pane_cp_g5

0x6e89,	// (0x000365aa) indicator_nsta_pane_cp_g6

0x0005,

0xfabc,	// (0x0003f1dd) indicator_nsta_pane_cp_g

0xedab,	// (0x0003e4cc) cell_graphic2_pane_t2_ParamLimits

0xedab,	// (0x0003e4cc) cell_graphic2_pane_t2

0x0001,

0xfdd5,	// (0x0003f4f6) cell_graphic2_pane_t_ParamLimits

0xfdd5,	// (0x0003f4f6) cell_graphic2_pane_t

0xede1,	// (0x0003e502) cell_graphic2_control_pane_t1

0xd118,	// (0x0003c839) signal_pane_g3_ParamLimits

0xd118,	// (0x0003c839) signal_pane_g3

0xd12c,	// (0x0003c84d) signal_pane_g4_ParamLimits

0xd12c,	// (0x0003c84d) signal_pane_g4

0xa594,	// (0x00039cb5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa594,	// (0x00039cb5) cell_ai5_widget_list_row_pane_t3

0xa70a,	// (0x00039e2b) cell_ituss_key_pane_t1_ParamLimits

0xa70a,	// (0x00039e2b) cell_ituss_key_pane_t1

0x4e68,	// (0x00034589) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e68,	// (0x00034589) form_field_data_wide_pane_vc_t2

0x4e7c,	// (0x0003459d) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e7c,	// (0x0003459d) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0003ef2b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0003ef2b) form_field_data_wide_pane_vc_t

0x6b17,	// (0x00036238) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6b17,	// (0x00036238) form_field_slider_wide_pane_vc_t3

0x6bf5,	// (0x00036316) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6bf5,	// (0x00036316) form_field_popup_wide_pane_vc_t2

0x6c0c,	// (0x0003632d) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6c0c,	// (0x0003632d) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaab,	// (0x0003f1cc) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaab,	// (0x0003f1cc) form_field_popup_wide_pane_vc_t

0xcbe6,	// (0x0003c307) aid_fshwr2_btn_pane_ParamLimits

0xcbf5,	// (0x0003c316) aid_fshwr2_syb_pane_ParamLimits

0xcc07,	// (0x0003c328) aid_fshwr2_txt_pane_ParamLimits

0x1fec,	// (0x0003170d) fshwr2_bg_pane_ParamLimits

0xcc16,	// (0x0003c337) fshwr2_func_candi_pane_ParamLimits

0xcc27,	// (0x0003c348) fshwr2_hwr_syb_pane_ParamLimits

0xcc42,	// (0x0003c363) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small

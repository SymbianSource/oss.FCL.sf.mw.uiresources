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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002a598 };

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
0x7c9d,	// (0x00032235) Screen

0x7cb1,	// (0x00032249) application_window_ParamLimits

0x7cb1,	// (0x00032249) application_window

0x7ccb,	// (0x00032263) screen_g1

0x4996,	// (0x0002ef2e) area_bottom_pane_ParamLimits

0x4996,	// (0x0002ef2e) area_bottom_pane

0x4a56,	// (0x0002efee) area_top_pane_ParamLimits

0x4a56,	// (0x0002efee) area_top_pane

0x4af4,	// (0x0002f08c) main_pane_ParamLimits

0x4af4,	// (0x0002f08c) main_pane

0x7cd5,	// (0x0003226d) misc_graphics

0x967e,	// (0x00033c16) battery_pane_ParamLimits

0x967e,	// (0x00033c16) battery_pane

0xa350,	// (0x000348e8) bg_status_flat_pane_g8

0xa358,	// (0x000348f0) bg_status_flat_pane_g9

0x9740,	// (0x00033cd8) context_pane_ParamLimits

0x9740,	// (0x00033cd8) context_pane

0x9856,	// (0x00033dee) navi_pane_ParamLimits

0x9856,	// (0x00033dee) navi_pane

0x98da,	// (0x00033e72) signal_pane_ParamLimits

0x98da,	// (0x00033e72) signal_pane

0x0008,

0xf87f,	// (0x00039e17) bg_status_flat_pane_g

0x9947,	// (0x00033edf) status_pane_g1_ParamLimits

0x9947,	// (0x00033edf) status_pane_g1

0x995b,	// (0x00033ef3) status_pane_g2_ParamLimits

0x995b,	// (0x00033ef3) status_pane_g2

0x9967,	// (0x00033eff) status_pane_g3_ParamLimits

0x9967,	// (0x00033eff) status_pane_g3

0x0004,

0xf7a6,	// (0x00039d3e) status_pane_g_ParamLimits

0xf7a6,	// (0x00039d3e) status_pane_g

0x999b,	// (0x00033f33) title_pane_ParamLimits

0x999b,	// (0x00033f33) title_pane

0x99d8,	// (0x00033f70) uni_indicator_pane_ParamLimits

0x99d8,	// (0x00033f70) uni_indicator_pane

0x95a2,	// (0x00033b3a) bg_list_pane_ParamLimits

0x95a2,	// (0x00033b3a) bg_list_pane

0x73d2,	// (0x0003196a) find_pane

0x95c2,	// (0x00033b5a) listscroll_app_pane_ParamLimits

0x95c2,	// (0x00033b5a) listscroll_app_pane

0x95ce,	// (0x00033b66) listscroll_form_pane

0x48ca,	// (0x0002ee62) listscroll_gen_pane_ParamLimits

0x48ca,	// (0x0002ee62) listscroll_gen_pane

0x5a86,	// (0x0003001e) listscroll_set_pane

0x8805,	// (0x00032d9d) main_idle_act_pane

0x92a8,	// (0x00033840) main_idle_trad_pane

0x92a8,	// (0x00033840) main_list_empty_pane

0x95e8,	// (0x00033b80) main_midp_pane

0x95f4,	// (0x00033b8c) main_pane_g1_ParamLimits

0x95f4,	// (0x00033b8c) main_pane_g1

0x5a9c,	// (0x00030034) popup_ai_message_window_ParamLimits

0x5a9c,	// (0x00030034) popup_ai_message_window

0x5b42,	// (0x000300da) popup_fep_china_uni_window_ParamLimits

0x5b42,	// (0x000300da) popup_fep_china_uni_window

0x5b9e,	// (0x00030136) popup_fep_japan_candidate_window_ParamLimits

0x5b9e,	// (0x00030136) popup_fep_japan_candidate_window

0x5bbe,	// (0x00030156) popup_fep_japan_predictive_window_ParamLimits

0x5bbe,	// (0x00030156) popup_fep_japan_predictive_window

0x5bee,	// (0x00030186) popup_find_window

0x5bfb,	// (0x00030193) popup_grid_graphic_window_ParamLimits

0x5bfb,	// (0x00030193) popup_grid_graphic_window

0x5c23,	// (0x000301bb) popup_large_graphic_colour_window

0x5c49,	// (0x000301e1) popup_menu_window_ParamLimits

0x5c49,	// (0x000301e1) popup_menu_window

0x5e01,	// (0x00030399) popup_note_image_window

0x5ded,	// (0x00030385) popup_note_wait_window_ParamLimits

0x5ded,	// (0x00030385) popup_note_wait_window

0x5ded,	// (0x00030385) popup_note_window_ParamLimits

0x5ded,	// (0x00030385) popup_note_window

0x5e57,	// (0x000303ef) popup_query_code_window_ParamLimits

0x5e57,	// (0x000303ef) popup_query_code_window

0x5e6b,	// (0x00030403) popup_query_data_code_window_ParamLimits

0x5e6b,	// (0x00030403) popup_query_data_code_window

0x5e88,	// (0x00030420) popup_query_data_window_ParamLimits

0x5e88,	// (0x00030420) popup_query_data_window

0x5ea4,	// (0x0003043c) popup_query_sat_info_window_ParamLimits

0x5ea4,	// (0x0003043c) popup_query_sat_info_window

0x5edd,	// (0x00030475) popup_snote_single_graphic_window_ParamLimits

0x5edd,	// (0x00030475) popup_snote_single_graphic_window

0x5edd,	// (0x00030475) popup_snote_single_text_window_ParamLimits

0x5edd,	// (0x00030475) popup_snote_single_text_window

0x5ef2,	// (0x0003048a) popup_sub_window_general

0x6022,	// (0x000305ba) popup_window_general_ParamLimits

0x6022,	// (0x000305ba) popup_window_general

0x9602,	// (0x00033b9a) power_save_pane

0x5922,	// (0x0002feba) control_pane_g1_ParamLimits

0x5922,	// (0x0002feba) control_pane_g1

0x5949,	// (0x0002fee1) control_pane_g2_ParamLimits

0x5949,	// (0x0002fee1) control_pane_g2

0x9565,	// (0x00033afd) control_pane_g3_ParamLimits

0x9565,	// (0x00033afd) control_pane_g3

0x0007,

0xf78e,	// (0x00039d26) control_pane_g_ParamLimits

0xf78e,	// (0x00039d26) control_pane_g

0x5993,	// (0x0002ff2b) control_pane_t1_ParamLimits

0x5993,	// (0x0002ff2b) control_pane_t1

0x59df,	// (0x0002ff77) control_pane_t2_ParamLimits

0x59df,	// (0x0002ff77) control_pane_t2

0x0002,

0xf79f,	// (0x00039d37) control_pane_t_ParamLimits

0xf79f,	// (0x00039d37) control_pane_t

0x9486,	// (0x00033a1e) navi_navi_volume_pane_cp1

0x948f,	// (0x00033a27) status_small_icon_pane

0x9497,	// (0x00033a2f) status_small_pane_g1_ParamLimits

0x9497,	// (0x00033a2f) status_small_pane_g1

0x94cb,	// (0x00033a63) status_small_pane_g2_ParamLimits

0x94cb,	// (0x00033a63) status_small_pane_g2

0x94d7,	// (0x00033a6f) status_small_pane_g3_ParamLimits

0x94d7,	// (0x00033a6f) status_small_pane_g3

0x94e3,	// (0x00033a7b) status_small_pane_g4_ParamLimits

0x94e3,	// (0x00033a7b) status_small_pane_g4

0x94ef,	// (0x00033a87) status_small_pane_g5_ParamLimits

0x94ef,	// (0x00033a87) status_small_pane_g5

0x94fe,	// (0x00033a96) status_small_pane_g6_ParamLimits

0x94fe,	// (0x00033a96) status_small_pane_g6

0x0007,

0xf77d,	// (0x00039d15) status_small_pane_g_ParamLimits

0xf77d,	// (0x00039d15) status_small_pane_g

0x952e,	// (0x00033ac6) status_small_pane_t1

0x9551,	// (0x00033ae9) status_small_wait_pane_ParamLimits

0x9551,	// (0x00033ae9) status_small_wait_pane

0x8d25,	// (0x000332bd) aid_levels_signal_ParamLimits

0x8d25,	// (0x000332bd) aid_levels_signal

0x8d37,	// (0x000332cf) signal_pane_g1_ParamLimits

0x8d37,	// (0x000332cf) signal_pane_g1

0x8d4c,	// (0x000332e4) signal_pane_g2_ParamLimits

0x8d4c,	// (0x000332e4) signal_pane_g2

0x0003,

0xf70e,	// (0x00039ca6) signal_pane_g_ParamLimits

0xf70e,	// (0x00039ca6) signal_pane_g

0x8d87,	// (0x0003331f) context_pane_g1

0x7cdf,	// (0x00032277) title_pane_g1

0x7d15,	// (0x000322ad) title_pane_t1

0x7d7d,	// (0x00032315) title_pane_t2

0x7da3,	// (0x0003233b) title_pane_t3

0x0002,

0xf55d,	// (0x00039af5) title_pane_t

0x99f0,	// (0x00033f88) aid_levels_battery_ParamLimits

0x99f0,	// (0x00033f88) aid_levels_battery

0x9a04,	// (0x00033f9c) battery_pane_g1_ParamLimits

0x9a04,	// (0x00033f9c) battery_pane_g1

0x9a1a,	// (0x00033fb2) battery_pane_g2_ParamLimits

0x9a1a,	// (0x00033fb2) battery_pane_g2

0x0001,

0xf7b1,	// (0x00039d49) battery_pane_g_ParamLimits

0xf7b1,	// (0x00039d49) battery_pane_g

0xac86,	// (0x0003521e) uni_indicator_pane_g1

0xac9d,	// (0x00035235) uni_indicator_pane_g2

0xacb0,	// (0x00035248) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x00039ebf) uni_indicator_pane_g

0x911a,	// (0x000336b2) navi_icon_pane_ParamLimits

0x911a,	// (0x000336b2) navi_icon_pane

0x9063,	// (0x000335fb) navi_midp_pane

0x9136,	// (0x000336ce) navi_navi_pane

0x9140,	// (0x000336d8) navi_text_pane_ParamLimits

0x9140,	// (0x000336d8) navi_text_pane

0x7ccb,	// (0x00032263) status_small_wait_pane_g1

0x81d2,	// (0x0003276a) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x00039eba) status_small_wait_pane_g

0xa9ab,	// (0x00034f43) navi_navi_icon_text_pane

0xa9b3,	// (0x00034f4b) navi_navi_pane_g1_ParamLimits

0xa9b3,	// (0x00034f4b) navi_navi_pane_g1

0xa9c5,	// (0x00034f5d) navi_navi_pane_g2_ParamLimits

0xa9c5,	// (0x00034f5d) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x00039e88) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x00039e88) navi_navi_pane_g

0xa9d7,	// (0x00034f6f) navi_navi_tabs_pane

0xa9e0,	// (0x00034f78) navi_navi_text_pane

0xa9ab,	// (0x00034f43) navi_navi_volume_pane

0xa987,	// (0x00034f1f) navi_text_pane_t1

0xa97b,	// (0x00034f13) navi_icon_pane_g1

0xa8ce,	// (0x00034e66) navi_navi_text_pane_t1

0x62ce,	// (0x00030866) navi_navi_volume_pane_g1

0x62d6,	// (0x0003086e) volume_small_pane

0xa834,	// (0x00034dcc) navi_navi_icon_text_pane_g1

0xa83c,	// (0x00034dd4) navi_navi_icon_text_pane_t1

0x9136,	// (0x000336ce) navi_tabs_2_long_pane

0x9136,	// (0x000336ce) navi_tabs_2_pane

0x9136,	// (0x000336ce) navi_tabs_3_long_pane

0x9136,	// (0x000336ce) navi_tabs_3_pane

0x9136,	// (0x000336ce) navi_tabs_4_pane

0x62ae,	// (0x00030846) tabs_2_active_pane_ParamLimits

0x62ae,	// (0x00030846) tabs_2_active_pane

0x62be,	// (0x00030856) tabs_2_passive_pane_ParamLimits

0x62be,	// (0x00030856) tabs_2_passive_pane

0x627c,	// (0x00030814) tabs_3_active_pane_ParamLimits

0x627c,	// (0x00030814) tabs_3_active_pane

0x628c,	// (0x00030824) tabs_3_passive_pane_ParamLimits

0x628c,	// (0x00030824) tabs_3_passive_pane

0x629d,	// (0x00030835) tabs_3_passive_pane_cp_ParamLimits

0x629d,	// (0x00030835) tabs_3_passive_pane_cp

0x6238,	// (0x000307d0) tabs_4_active_pane_ParamLimits

0x6238,	// (0x000307d0) tabs_4_active_pane

0x6249,	// (0x000307e1) tabs_4_passive_pane_ParamLimits

0x6249,	// (0x000307e1) tabs_4_passive_pane

0x625a,	// (0x000307f2) tabs_4_passive_pane_cp_ParamLimits

0x625a,	// (0x000307f2) tabs_4_passive_pane_cp

0x626b,	// (0x00030803) tabs_4_passive_pane_cp2_ParamLimits

0x626b,	// (0x00030803) tabs_4_passive_pane_cp2

0x6214,	// (0x000307ac) tabs_2_long_active_pane_ParamLimits

0x6214,	// (0x000307ac) tabs_2_long_active_pane

0x6226,	// (0x000307be) tabs_2_long_passive_pane_ParamLimits

0x6226,	// (0x000307be) tabs_2_long_passive_pane

0x61d5,	// (0x0003076d) tabs_3_long_active_pane_ParamLimits

0x61d5,	// (0x0003076d) tabs_3_long_active_pane

0x61e8,	// (0x00030780) tabs_3_long_passive_pane_ParamLimits

0x61e8,	// (0x00030780) tabs_3_long_passive_pane

0x6201,	// (0x00030799) tabs_3_long_passive_pane_cp_ParamLimits

0x6201,	// (0x00030799) tabs_3_long_passive_pane_cp

0x617b,	// (0x00030713) volume_small_pane_g1

0x6184,	// (0x0003071c) volume_small_pane_g2

0x618d,	// (0x00030725) volume_small_pane_g3

0x6196,	// (0x0003072e) volume_small_pane_g4

0x619f,	// (0x00030737) volume_small_pane_g5

0x61a8,	// (0x00030740) volume_small_pane_g6

0x61b1,	// (0x00030749) volume_small_pane_g7

0x61ba,	// (0x00030752) volume_small_pane_g8

0x61c3,	// (0x0003075b) volume_small_pane_g9

0x61cc,	// (0x00030764) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x00039e54) volume_small_pane_g

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp2_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp2

0x7dc3,	// (0x0003235b) tabs_3_active_pane_g1

0x7dcb,	// (0x00032363) tabs_3_active_pane_t1

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp2_ParamLimits

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp2

0x7dc3,	// (0x0003235b) tabs_3_passive_pane_g1

0x7dcb,	// (0x00032363) tabs_3_passive_pane_t1

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp3_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp3

0x7ddd,	// (0x00032375) tabs_4_active_pane_g1

0x7de5,	// (0x0003237d) tabs_4_active_pane_t1

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp3_ParamLimits

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp3

0x7ddd,	// (0x00032375) tabs_4_1_passive_pane_g1

0x7de5,	// (0x0003237d) tabs_4_1_passive_pane_t1

0x95e8,	// (0x00033b80) list_highlight_pane_cp2

0xaef6,	// (0x0003548e) list_set_pane_ParamLimits

0xaef6,	// (0x0003548e) list_set_pane

0xaf9c,	// (0x00035534) main_pane_set_t1_ParamLimits

0xaf9c,	// (0x00035534) main_pane_set_t1

0xafbc,	// (0x00035554) main_pane_set_t2_ParamLimits

0xafbc,	// (0x00035554) main_pane_set_t2

0xafd0,	// (0x00035568) main_pane_set_t3_ParamLimits

0xafd0,	// (0x00035568) main_pane_set_t3

0xafe2,	// (0x0003557a) main_pane_set_t4_ParamLimits

0xafe2,	// (0x0003557a) main_pane_set_t4

0x0003,

0xf98c,	// (0x00039f24) main_pane_set_t_ParamLimits

0xf98c,	// (0x00039f24) main_pane_set_t

0xaff4,	// (0x0003558c) setting_code_pane

0xb000,	// (0x00035598) setting_slider_graphic_pane

0xb000,	// (0x00035598) setting_slider_pane

0xb000,	// (0x00035598) setting_text_pane

0xb000,	// (0x00035598) setting_volume_pane

0x4d43,	// (0x0002f2db) volume_set_pane

0x7db5,	// (0x0003234d) bg_set_opt_pane_cp

0x4d4b,	// (0x0002f2e3) setting_slider_pane_t1

0x4d64,	// (0x0002f2fc) setting_slider_pane_t2

0x4d7e,	// (0x0002f316) setting_slider_pane_t3

0x0002,

0xf564,	// (0x00039afc) setting_slider_pane_t

0x4d96,	// (0x0002f32e) slider_set_pane

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp2

0x7df7,	// (0x0003238f) setting_slider_graphic_pane_g1

0x4dac,	// (0x0002f344) setting_slider_graphic_pane_t1

0x4dbc,	// (0x0002f354) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x00039b03) setting_slider_graphic_pane_t

0x4dcc,	// (0x0002f364) slider_set_pane_cp

0x7cd5,	// (0x0003226d) input_focus_pane_cp1

0xaeb5,	// (0x0003544d) list_set_text_pane

0x7ccb,	// (0x00032263) setting_text_pane_g1

0x7cd5,	// (0x0003226d) input_focus_pane_cp2

0x7ccb,	// (0x00032263) setting_code_pane_g1

0x7e00,	// (0x00032398) setting_code_pane_t1

0x4dd4,	// (0x0002f36c) set_text_pane_t1_ParamLimits

0x4dd4,	// (0x0002f36c) set_text_pane_t1

0x867c,	// (0x00032c14) set_opt_bg_pane_g1

0x8684,	// (0x00032c1c) set_opt_bg_pane_g2

0xae8f,	// (0x00035427) set_opt_bg_pane_g3

0x8694,	// (0x00032c2c) set_opt_bg_pane_g4

0x869c,	// (0x00032c34) set_opt_bg_pane_g5

0x86a4,	// (0x00032c3c) set_opt_bg_pane_g6

0xae99,	// (0x00035431) set_opt_bg_pane_g7

0xaea1,	// (0x00035439) set_opt_bg_pane_g8

0xaeab,	// (0x00035443) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x00039f11) set_opt_bg_pane_g

0xae82,	// (0x0003541a) slider_set_pane_g1

0x6343,	// (0x000308db) slider_set_pane_g2

0x0006,

0xf96a,	// (0x00039f02) slider_set_pane_g

0x62df,	// (0x00030877) volume_set_pane_g1

0x62e7,	// (0x0003087f) volume_set_pane_g2

0x62ef,	// (0x00030887) volume_set_pane_g3

0x62f7,	// (0x0003088f) volume_set_pane_g4

0x62ff,	// (0x00030897) volume_set_pane_g5

0x6307,	// (0x0003089f) volume_set_pane_g6

0x630f,	// (0x000308a7) volume_set_pane_g7

0x6317,	// (0x000308af) volume_set_pane_g8

0x631f,	// (0x000308b7) volume_set_pane_g9

0x6327,	// (0x000308bf) volume_set_pane_g10

0x0009,

0xf942,	// (0x00039eda) volume_set_pane_g

0x7e0e,	// (0x000323a6) indicator_pane_ParamLimits

0x7e0e,	// (0x000323a6) indicator_pane

0x7e1a,	// (0x000323b2) main_idle_pane_g2_ParamLimits

0x7e1a,	// (0x000323b2) main_idle_pane_g2

0x7e42,	// (0x000323da) main_pane_idle_g1_ParamLimits

0x7e42,	// (0x000323da) main_pane_idle_g1

0x7e4f,	// (0x000323e7) popup_clock_digital_analogue_window_ParamLimits

0x7e4f,	// (0x000323e7) popup_clock_digital_analogue_window

0x7e66,	// (0x000323fe) soft_indicator_pane_ParamLimits

0x7e66,	// (0x000323fe) soft_indicator_pane

0x7e72,	// (0x0003240a) wallpaper_pane_ParamLimits

0x7e72,	// (0x0003240a) wallpaper_pane

0x7ccb,	// (0x00032263) wallpaper_pane_g1

0x7e86,	// (0x0003241e) indicator_pane_g1_ParamLimits

0x7e86,	// (0x0003241e) indicator_pane_g1

0xb28f,	// (0x00035827) navi_navi_icon_text_pane_srt_g1

0x7ea1,	// (0x00032439) soft_indicator_pane_t1

0x7ebb,	// (0x00032453) aid_ps_area_pane

0x7ecc,	// (0x00032464) aid_ps_clock_pane

0x7eda,	// (0x00032472) aid_ps_indicator_pane

0x7ee6,	// (0x0003247e) indicator_ps_pane_ParamLimits

0x7ee6,	// (0x0003247e) indicator_ps_pane

0x7ef5,	// (0x0003248d) power_save_pane_g1_ParamLimits

0x7ef5,	// (0x0003248d) power_save_pane_g1

0x7f01,	// (0x00032499) power_save_pane_g2_ParamLimits

0x7f01,	// (0x00032499) power_save_pane_g2

0x494a,	// (0x0002eee2) aid_navinavi_width_pane

0x7ebb,	// (0x00032453) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x00039b08) power_save_pane_g_ParamLimits

0xf570,	// (0x00039b08) power_save_pane_g

0x7f0f,	// (0x000324a7) power_save_pane_t1_ParamLimits

0x7f0f,	// (0x000324a7) power_save_pane_t1

0x7ecc,	// (0x00032464) aid_ps_clock_pane_ParamLimits

0x7eda,	// (0x00032472) aid_ps_indicator_pane_ParamLimits

0x7f21,	// (0x000324b9) power_save_pane_t4_ParamLimits

0x7f21,	// (0x000324b9) power_save_pane_t4

0x0001,

0xf575,	// (0x00039b0d) power_save_pane_t_ParamLimits

0xf575,	// (0x00039b0d) power_save_pane_t

0x7f4b,	// (0x000324e3) power_save_t3_ParamLimits

0x7f4b,	// (0x000324e3) power_save_t3

0x7f36,	// (0x000324ce) power_save_t2_ParamLimits

0x7f36,	// (0x000324ce) power_save_t2

0x7f60,	// (0x000324f8) indicator_ps_pane_g1

0x7f69,	// (0x00032501) ai_gene_pane_ParamLimits

0x7f69,	// (0x00032501) ai_gene_pane

0x7f75,	// (0x0003250d) ai_links_pane_ParamLimits

0x7f75,	// (0x0003250d) ai_links_pane

0x7f81,	// (0x00032519) indicator_pane_cp1_ParamLimits

0x7f81,	// (0x00032519) indicator_pane_cp1

0x7f8d,	// (0x00032525) main_pane_idle_g1_cp_ParamLimits

0x7f8d,	// (0x00032525) main_pane_idle_g1_cp

0x7f99,	// (0x00032531) popup_ai_links_title_window

0x7fa2,	// (0x0003253a) soft_indicator_pane_cp1_ParamLimits

0x7fa2,	// (0x0003253a) soft_indicator_pane_cp1

0xac74,	// (0x0003520c) ai_links_pane_g1

0xac7d,	// (0x00035215) grid_ai_links_pane

0xac57,	// (0x000351ef) ai_gene_pane_1

0xac62,	// (0x000351fa) ai_gene_pane_2

0xac6b,	// (0x00035203) list_highlight_pane_cp4

0xac3b,	// (0x000351d3) cell_ai_link_pane_ParamLimits

0xac3b,	// (0x000351d3) cell_ai_link_pane

0xac33,	// (0x000351cb) cell_ai_link_pane_g1

0x81d2,	// (0x0003276a) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x00039eb5) cell_ai_link_pane_g

0x7cd5,	// (0x0003226d) grid_highlight_cp2

0x7cd5,	// (0x0003226d) bg_popup_sub_pane_cp1

0x7fbc,	// (0x00032554) popup_ai_links_title_window_t1

0xab81,	// (0x00035119) ai_gene_pane_1_g1_ParamLimits

0xab81,	// (0x00035119) ai_gene_pane_1_g1

0xab8d,	// (0x00035125) ai_gene_pane_1_g2_ParamLimits

0xab8d,	// (0x00035125) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x00039eab) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x00039eab) ai_gene_pane_1_g

0xab9a,	// (0x00035132) ai_gene_pane_1_t1_ParamLimits

0xab9a,	// (0x00035132) ai_gene_pane_1_t1

0xabce,	// (0x00035166) grid_ai_soft_ind_pane

0xab6c,	// (0x00035104) ai_gene_pane_2_t1_ParamLimits

0xab6c,	// (0x00035104) ai_gene_pane_2_t1

0x7fcb,	// (0x00032563) main_pane_empty_t1_ParamLimits

0x7fcb,	// (0x00032563) main_pane_empty_t1

0x7fe3,	// (0x0003257b) main_pane_empty_t2_ParamLimits

0x7fe3,	// (0x0003257b) main_pane_empty_t2

0x7ff8,	// (0x00032590) main_pane_empty_t3_ParamLimits

0x7ff8,	// (0x00032590) main_pane_empty_t3

0x800a,	// (0x000325a2) main_pane_empty_t4_ParamLimits

0x800a,	// (0x000325a2) main_pane_empty_t4

0x801c,	// (0x000325b4) main_pane_empty_t5_ParamLimits

0x801c,	// (0x000325b4) main_pane_empty_t5

0x0004,

0xf57a,	// (0x00039b12) main_pane_empty_t_ParamLimits

0xf57a,	// (0x00039b12) main_pane_empty_t

0x86cd,	// (0x00032c65) bg_popup_window_pane_ParamLimits

0x86cd,	// (0x00032c65) bg_popup_window_pane

0xa8dc,	// (0x00034e74) find_popup_pane_cp2_ParamLimits

0xa8dc,	// (0x00034e74) find_popup_pane_cp2

0xa8e8,	// (0x00034e80) heading_pane_ParamLimits

0xa8e8,	// (0x00034e80) heading_pane

0x7cd5,	// (0x0003226d) bg_popup_sub_pane

0xa856,	// (0x00034dee) bg_popup_window_pane_g1_ParamLimits

0xa856,	// (0x00034dee) bg_popup_window_pane_g1

0xa862,	// (0x00034dfa) bg_popup_window_pane_g2_ParamLimits

0xa862,	// (0x00034dfa) bg_popup_window_pane_g2

0xa86e,	// (0x00034e06) bg_popup_window_pane_g3_ParamLimits

0xa86e,	// (0x00034e06) bg_popup_window_pane_g3

0xa87a,	// (0x00034e12) bg_popup_window_pane_g4_ParamLimits

0xa87a,	// (0x00034e12) bg_popup_window_pane_g4

0xa886,	// (0x00034e1e) bg_popup_window_pane_g5_ParamLimits

0xa886,	// (0x00034e1e) bg_popup_window_pane_g5

0xa892,	// (0x00034e2a) bg_popup_window_pane_g6_ParamLimits

0xa892,	// (0x00034e2a) bg_popup_window_pane_g6

0xa89e,	// (0x00034e36) bg_popup_window_pane_g7_ParamLimits

0xa89e,	// (0x00034e36) bg_popup_window_pane_g7

0xa8aa,	// (0x00034e42) bg_popup_window_pane_g8_ParamLimits

0xa8aa,	// (0x00034e42) bg_popup_window_pane_g8

0xa8b6,	// (0x00034e4e) bg_popup_window_pane_g9_ParamLimits

0xa8b6,	// (0x00034e4e) bg_popup_window_pane_g9

0xa8c2,	// (0x00034e5a) bg_popup_window_pane_g10_ParamLimits

0xa8c2,	// (0x00034e5a) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x00039e73) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x00039e73) bg_popup_window_pane_g

0xa7eb,	// (0x00034d83) bg_popup_heading_pane_ParamLimits

0xa7eb,	// (0x00034d83) bg_popup_heading_pane

0x63cb,	// (0x00030963) tabs_4_passive_pane_cp_srt_ParamLimits

0x63cb,	// (0x00030963) tabs_4_passive_pane_cp_srt

0x63dd,	// (0x00030975) tabs_4_passive_pane_srt_ParamLimits

0xa7ff,	// (0x00034d97) heading_pane_g2

0x63dd,	// (0x00030975) tabs_4_passive_pane_srt

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp3_srt_ParamLimits

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp3_srt

0xa807,	// (0x00034d9f) heading_pane_t1_ParamLimits

0xa807,	// (0x00034d9f) heading_pane_t1

0xa81e,	// (0x00034db6) heading_pane_t2_ParamLimits

0xa81e,	// (0x00034db6) heading_pane_t2

0x0001,

0xf8d6,	// (0x00039e6e) heading_pane_t_ParamLimits

0xf8d6,	// (0x00039e6e) heading_pane_t

0xa30c,	// (0x000348a4) bg_popup_heading_pane_g1

0xa3c7,	// (0x0003495f) bg_popup_heading_pane_g2

0xa3d1,	// (0x00034969) bg_popup_heading_pane_g3

0xa3db,	// (0x00034973) bg_popup_heading_pane_g4

0xa3e5,	// (0x0003497d) bg_popup_heading_pane_g5

0xa3ef,	// (0x00034987) bg_popup_heading_pane_g6

0xa3f7,	// (0x0003498f) bg_popup_heading_pane_g7

0xa3ff,	// (0x00034997) bg_popup_heading_pane_g8

0xa409,	// (0x000349a1) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x00039e2a) bg_popup_heading_pane_g

0x9af2,	// (0x0003408a) bg_popup_sub_pane_g1

0x9b02,	// (0x0003409a) bg_popup_sub_pane_g2

0x9afa,	// (0x00034092) bg_popup_sub_pane_g3

0x9b12,	// (0x000340aa) bg_popup_sub_pane_g4

0x9b0a,	// (0x000340a2) bg_popup_sub_pane_g5

0x9b1a,	// (0x000340b2) bg_popup_sub_pane_g6

0x9b22,	// (0x000340ba) bg_popup_sub_pane_g7

0x9b32,	// (0x000340ca) bg_popup_sub_pane_g8

0x9b2a,	// (0x000340c2) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x00039e04) bg_popup_sub_pane_g

0x8030,	// (0x000325c8) bg_popup_window_pane_cp5_ParamLimits

0x8030,	// (0x000325c8) bg_popup_window_pane_cp5

0x804c,	// (0x000325e4) popup_note_window_g1_ParamLimits

0x804c,	// (0x000325e4) popup_note_window_g1

0x8058,	// (0x000325f0) popup_note_window_t1_ParamLimits

0x8058,	// (0x000325f0) popup_note_window_t1

0x806e,	// (0x00032606) popup_note_window_t2_ParamLimits

0x806e,	// (0x00032606) popup_note_window_t2

0x8084,	// (0x0003261c) popup_note_window_t3_ParamLimits

0x8084,	// (0x0003261c) popup_note_window_t3

0x809a,	// (0x00032632) popup_note_window_t4_ParamLimits

0x809a,	// (0x00032632) popup_note_window_t4

0x80c2,	// (0x0003265a) popup_note_window_t5_ParamLimits

0x80c2,	// (0x0003265a) popup_note_window_t5

0x0004,

0xf585,	// (0x00039b1d) popup_note_window_t_ParamLimits

0xf585,	// (0x00039b1d) popup_note_window_t

0x80e6,	// (0x0003267e) bg_popup_window_pane_cp6_ParamLimits

0x80e6,	// (0x0003267e) bg_popup_window_pane_cp6

0xa288,	// (0x00034820) popup_note_image_window_g1_ParamLimits

0xa288,	// (0x00034820) popup_note_image_window_g1

0xa294,	// (0x0003482c) popup_note_image_window_g2_ParamLimits

0xa294,	// (0x0003482c) popup_note_image_window_g2

0x0001,

0xf860,	// (0x00039df8) popup_note_image_window_g_ParamLimits

0xf860,	// (0x00039df8) popup_note_image_window_g

0xa2ad,	// (0x00034845) popup_note_image_window_t1_ParamLimits

0xa2ad,	// (0x00034845) popup_note_image_window_t1

0xa2c6,	// (0x0003485e) popup_note_image_window_t2_ParamLimits

0xa2c6,	// (0x0003485e) popup_note_image_window_t2

0xa2df,	// (0x00034877) popup_note_image_window_t3_ParamLimits

0xa2df,	// (0x00034877) popup_note_image_window_t3

0x0002,

0xf865,	// (0x00039dfd) popup_note_image_window_t_ParamLimits

0xf865,	// (0x00039dfd) popup_note_image_window_t

0xa149,	// (0x000346e1) bg_popup_window_pane_cp7_ParamLimits

0xa149,	// (0x000346e1) bg_popup_window_pane_cp7

0xa179,	// (0x00034711) popup_note_wait_window_g1_ParamLimits

0xa179,	// (0x00034711) popup_note_wait_window_g1

0xa185,	// (0x0003471d) popup_note_wait_window_g2_ParamLimits

0xa185,	// (0x0003471d) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x00039de6) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x00039de6) popup_note_wait_window_g

0xa19d,	// (0x00034735) popup_note_wait_window_t1_ParamLimits

0xa19d,	// (0x00034735) popup_note_wait_window_t1

0xa1c4,	// (0x0003475c) popup_note_wait_window_t2_ParamLimits

0xa1c4,	// (0x0003475c) popup_note_wait_window_t2

0xa1e1,	// (0x00034779) popup_note_wait_window_t3_ParamLimits

0xa1e1,	// (0x00034779) popup_note_wait_window_t3

0xa1f4,	// (0x0003478c) popup_note_wait_window_t4_ParamLimits

0xa1f4,	// (0x0003478c) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x00039ded) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x00039ded) popup_note_wait_window_t

0xa219,	// (0x000347b1) wait_bar_pane_ParamLimits

0xa219,	// (0x000347b1) wait_bar_pane

0x7cd5,	// (0x0003226d) wait_anim_pane

0x7cd5,	// (0x0003226d) wait_border_pane

0x7ccb,	// (0x00032263) wait_anim_pane_g1

0x7ccb,	// (0x00032263) wait_anim_pane_g2

0x0001,

0xf709,	// (0x00039ca1) wait_anim_pane_g

0xa0ed,	// (0x00034685) wait_border_pane_g1

0xa0f8,	// (0x00034690) wait_border_pane_g2

0xa101,	// (0x00034699) wait_border_pane_g3

0x0002,

0xf847,	// (0x00039ddf) wait_border_pane_g

0x9f58,	// (0x000344f0) bg_popup_window_pane_cp16_ParamLimits

0x9f58,	// (0x000344f0) bg_popup_window_pane_cp16

0xa058,	// (0x000345f0) indicator_popup_pane_cp4_ParamLimits

0xa058,	// (0x000345f0) indicator_popup_pane_cp4

0xa06c,	// (0x00034604) popup_query_data_window_t1_ParamLimits

0xa06c,	// (0x00034604) popup_query_data_window_t1

0xa07e,	// (0x00034616) popup_query_data_window_t2_ParamLimits

0xa07e,	// (0x00034616) popup_query_data_window_t2

0xa097,	// (0x0003462f) popup_query_data_window_t3_ParamLimits

0xa097,	// (0x0003462f) popup_query_data_window_t3

0x0002,

0xf840,	// (0x00039dd8) popup_query_data_window_t_ParamLimits

0xf840,	// (0x00039dd8) popup_query_data_window_t

0xa0b1,	// (0x00034649) query_popup_data_pane_ParamLimits

0xa0b1,	// (0x00034649) query_popup_data_pane

0xa0c5,	// (0x0003465d) query_popup_data_pane_cp1_ParamLimits

0xa0c5,	// (0x0003465d) query_popup_data_pane_cp1

0x9f58,	// (0x000344f0) bg_popup_window_pane_cp10_ParamLimits

0x9f58,	// (0x000344f0) bg_popup_window_pane_cp10

0x9f8a,	// (0x00034522) indicator_popup_pane_ParamLimits

0x9f8a,	// (0x00034522) indicator_popup_pane

0x9fac,	// (0x00034544) popup_query_code_window_t1_ParamLimits

0x9fac,	// (0x00034544) popup_query_code_window_t1

0x9fc6,	// (0x0003455e) popup_query_code_window_t2_ParamLimits

0x9fc6,	// (0x0003455e) popup_query_code_window_t2

0xa00f,	// (0x000345a7) popup_query_code_window_t3_ParamLimits

0xa00f,	// (0x000345a7) popup_query_code_window_t3

0x0002,

0xf839,	// (0x00039dd1) popup_query_code_window_t_ParamLimits

0xf839,	// (0x00039dd1) popup_query_code_window_t

0xa03e,	// (0x000345d6) query_popup_pane_ParamLimits

0xa03e,	// (0x000345d6) query_popup_pane

0x80e6,	// (0x0003267e) bg_popup_window_pane_cp15_ParamLimits

0x80e6,	// (0x0003267e) bg_popup_window_pane_cp15

0x8104,	// (0x0003269c) indicator_popup_pane_cp1_ParamLimits

0x8104,	// (0x0003269c) indicator_popup_pane_cp1

0x8117,	// (0x000326af) indicator_popup_pane_cp2_ParamLimits

0x8117,	// (0x000326af) indicator_popup_pane_cp2

0x812a,	// (0x000326c2) popup_query_data_code_window_g1_ParamLimits

0x812a,	// (0x000326c2) popup_query_data_code_window_g1

0x813d,	// (0x000326d5) popup_query_data_code_window_t1_ParamLimits

0x813d,	// (0x000326d5) popup_query_data_code_window_t1

0x814f,	// (0x000326e7) popup_query_data_code_window_t2_ParamLimits

0x814f,	// (0x000326e7) popup_query_data_code_window_t2

0x8161,	// (0x000326f9) popup_query_data_code_window_t3_ParamLimits

0x8161,	// (0x000326f9) popup_query_data_code_window_t3

0x8177,	// (0x0003270f) popup_query_data_code_window_t4_ParamLimits

0x8177,	// (0x0003270f) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x00039b28) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x00039b28) popup_query_data_code_window_t

0x608c,	// (0x00030624) list_single_midp_graphic_pane_g3

0x818f,	// (0x00032727) query_popup_data_pane_cp2_ParamLimits

0x81a2,	// (0x0003273a) query_popup_pane_cp2_ParamLimits

0x81a2,	// (0x0003273a) query_popup_pane_cp2

0x7cd5,	// (0x0003226d) bg_popup_window_pane_cp11

0x9f50,	// (0x000344e8) heading_pane_cp5

0x828a,	// (0x00032822) listscroll_popup_info_pane

0x7cd5,	// (0x0003226d) input_focus_pane_cp3

0x81b5,	// (0x0003274d) query_popup_pane_t1

0x81c3,	// (0x0003275b) list_popup_info_pane_ParamLimits

0x81c3,	// (0x0003275b) list_popup_info_pane

0x81d2,	// (0x0003276a) listscroll_popup_info_pane_g1

0x81da,	// (0x00032772) scroll_pane_cp7

0x81e4,	// (0x0003277c) popup_info_list_pane_t1_ParamLimits

0x81e4,	// (0x0003277c) popup_info_list_pane_t1

0x81fe,	// (0x00032796) popup_info_list_pane_t2_ParamLimits

0x81fe,	// (0x00032796) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x00039b31) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x00039b31) popup_info_list_pane_t

0x7cd5,	// (0x0003226d) bg_popup_window_pane_cp12

0xb2eb,	// (0x00035883) find_popup_pane

0x7db5,	// (0x0003234d) bg_popup_window_pane_cp3

0x8218,	// (0x000327b0) heading_pane_cp3

0x8224,	// (0x000327bc) listscroll_popup_graphic_pane

0x7cd5,	// (0x0003226d) bg_popup_window_pane_cp4

0x8280,	// (0x00032818) heading_pane_cp4

0x828a,	// (0x00032822) listscroll_popup_colour_pane

0x8292,	// (0x0003282a) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8292,	// (0x0003282a) cell_large_graphic_colour_none_popup_pane

0x82a6,	// (0x0003283e) grid_large_graphic_colour_popup_pane_ParamLimits

0x82a6,	// (0x0003283e) grid_large_graphic_colour_popup_pane

0x82d2,	// (0x0003286a) listscroll_popup_colour_pane_g1_ParamLimits

0x82d2,	// (0x0003286a) listscroll_popup_colour_pane_g1

0x82e9,	// (0x00032881) listscroll_popup_colour_pane_g2_ParamLimits

0x82e9,	// (0x00032881) listscroll_popup_colour_pane_g2

0x8300,	// (0x00032898) listscroll_popup_colour_pane_g3_ParamLimits

0x8300,	// (0x00032898) listscroll_popup_colour_pane_g3

0x8310,	// (0x000328a8) listscroll_popup_colour_pane_g4_ParamLimits

0x8310,	// (0x000328a8) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x00039b36) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x00039b36) listscroll_popup_colour_pane_g

0x8324,	// (0x000328bc) scroll_pane_cp6_ParamLimits

0x8324,	// (0x000328bc) scroll_pane_cp6

0x8336,	// (0x000328ce) cell_large_graphic_colour_popup_pane_ParamLimits

0x8336,	// (0x000328ce) cell_large_graphic_colour_popup_pane

0x8355,	// (0x000328ed) cell_large_graphic_colour_none_popup_pane_t1

0x7cd5,	// (0x0003226d) grid_highlight_pane_cp5

0x8364,	// (0x000328fc) cell_large_graphic_colour_popup_pane_g1

0x836c,	// (0x00032904) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00039b3f) cell_large_graphic_colour_popup_pane_g

0x8374,	// (0x0003290c) cell_large_graphic_colour_popup_pane_g2_copy1

0x837d,	// (0x00032915) grid_highlight_pane_cp4

0x8385,	// (0x0003291d) bg_popup_window_pane_cp8_ParamLimits

0x8385,	// (0x0003291d) bg_popup_window_pane_cp8

0x83a0,	// (0x00032938) popup_snote_single_text_window_g1_ParamLimits

0x83a0,	// (0x00032938) popup_snote_single_text_window_g1

0x83b2,	// (0x0003294a) popup_snote_single_text_window_t1_ParamLimits

0x83b2,	// (0x0003294a) popup_snote_single_text_window_t1

0x83c5,	// (0x0003295d) popup_snote_single_text_window_t2_ParamLimits

0x83c5,	// (0x0003295d) popup_snote_single_text_window_t2

0x83d8,	// (0x00032970) popup_snote_single_text_window_t3_ParamLimits

0x83d8,	// (0x00032970) popup_snote_single_text_window_t3

0x8411,	// (0x000329a9) popup_snote_single_text_window_t4_ParamLimits

0x8411,	// (0x000329a9) popup_snote_single_text_window_t4

0x8445,	// (0x000329dd) popup_snote_single_text_window_t5_ParamLimits

0x8445,	// (0x000329dd) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x00039b44) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x00039b44) popup_snote_single_text_window_t

0x8474,	// (0x00032a0c) bg_popup_window_pane_cp9_ParamLimits

0x8474,	// (0x00032a0c) bg_popup_window_pane_cp9

0x83a0,	// (0x00032938) popup_snote_single_graphic_window_g1_ParamLimits

0x83a0,	// (0x00032938) popup_snote_single_graphic_window_g1

0x8482,	// (0x00032a1a) popup_snote_single_graphic_window_g2_ParamLimits

0x8482,	// (0x00032a1a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00039b4f) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00039b4f) popup_snote_single_graphic_window_g

0x848e,	// (0x00032a26) popup_snote_single_graphic_window_t1_ParamLimits

0x848e,	// (0x00032a26) popup_snote_single_graphic_window_t1

0x84a1,	// (0x00032a39) popup_snote_single_graphic_window_t2_ParamLimits

0x84a1,	// (0x00032a39) popup_snote_single_graphic_window_t2

0x84b4,	// (0x00032a4c) popup_snote_single_graphic_window_t3_ParamLimits

0x84b4,	// (0x00032a4c) popup_snote_single_graphic_window_t3

0x84ed,	// (0x00032a85) popup_snote_single_graphic_window_t4_ParamLimits

0x84ed,	// (0x00032a85) popup_snote_single_graphic_window_t4

0x8521,	// (0x00032ab9) popup_snote_single_graphic_window_t5_ParamLimits

0x8521,	// (0x00032ab9) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x00039b54) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x00039b54) popup_snote_single_graphic_window_t

0xb1ed,	// (0x00035785) grid_graphic_popup_pane_ParamLimits

0xb1ed,	// (0x00035785) grid_graphic_popup_pane

0xb215,	// (0x000357ad) listscroll_popup_graphic_pane_g1_ParamLimits

0xb215,	// (0x000357ad) listscroll_popup_graphic_pane_g1

0xb229,	// (0x000357c1) listscroll_popup_graphic_pane_g2_ParamLimits

0xb229,	// (0x000357c1) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x00039f4e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x00039f4e) listscroll_popup_graphic_pane_g

0xb23d,	// (0x000357d5) scroll_pane_cp5

0xb196,	// (0x0003572e) cell_graphic_popup_pane_ParamLimits

0xb196,	// (0x0003572e) cell_graphic_popup_pane

0xb177,	// (0x0003570f) cell_graphic_popup_pane_g1

0xb17f,	// (0x00035717) cell_graphic_popup_pane_g2

0x8374,	// (0x0003290c) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x00039f47) cell_graphic_popup_pane_g

0xb188,	// (0x00035720) cell_graphic_popup_pane_t2

0x837d,	// (0x00032915) grid_highlight_pane_cp3

0x8562,	// (0x00032afa) list_gen_pane_ParamLimits

0x8562,	// (0x00032afa) list_gen_pane

0x8594,	// (0x00032b2c) scroll_pane

0xb0cf,	// (0x00035667) bg_list_pane_g1_ParamLimits

0xb0cf,	// (0x00035667) bg_list_pane_g1

0xb0ec,	// (0x00035684) bg_list_pane_g2_ParamLimits

0xb0ec,	// (0x00035684) bg_list_pane_g2

0xb101,	// (0x00035699) bg_list_pane_g3_ParamLimits

0xb101,	// (0x00035699) bg_list_pane_g3

0xb115,	// (0x000356ad) bg_list_pane_g4_ParamLimits

0xb115,	// (0x000356ad) bg_list_pane_g4

0xb129,	// (0x000356c1) bg_list_pane_g5_ParamLimits

0xb129,	// (0x000356c1) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x00039f3c) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x00039f3c) bg_list_pane_g

0x7573,	// (0x00031b0b) list_double2_graphic_large_graphic_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double2_graphic_large_graphic_pane

0x7573,	// (0x00031b0b) list_double2_graphic_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double2_graphic_pane

0x7573,	// (0x00031b0b) list_double2_large_graphic_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double2_large_graphic_pane

0x7573,	// (0x00031b0b) list_double2_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double2_pane

0x7573,	// (0x00031b0b) list_double_graphic_heading_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_graphic_heading_pane

0x7573,	// (0x00031b0b) list_double_graphic_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_graphic_pane

0x7573,	// (0x00031b0b) list_double_heading_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_heading_pane

0x7573,	// (0x00031b0b) list_double_large_graphic_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_large_graphic_pane

0x7573,	// (0x00031b0b) list_double_number_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_number_pane

0x7573,	// (0x00031b0b) list_double_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_pane

0x7573,	// (0x00031b0b) list_double_time_pane_ParamLimits

0x7573,	// (0x00031b0b) list_double_time_pane

0x7573,	// (0x00031b0b) list_setting_number_pane_ParamLimits

0x7573,	// (0x00031b0b) list_setting_number_pane

0x7573,	// (0x00031b0b) list_setting_pane_ParamLimits

0x7573,	// (0x00031b0b) list_setting_pane

0x75ae,	// (0x00031b46) list_single_2graphic_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_2graphic_pane

0x75ae,	// (0x00031b46) list_single_graphic_heading_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_graphic_heading_pane

0x75ae,	// (0x00031b46) list_single_graphic_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_graphic_pane

0x75ae,	// (0x00031b46) list_single_heading_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_heading_pane

0x75ee,	// (0x00031b86) list_single_large_graphic_pane_ParamLimits

0x75ee,	// (0x00031b86) list_single_large_graphic_pane

0x75ae,	// (0x00031b46) list_single_number_heading_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_number_heading_pane

0x75ae,	// (0x00031b46) list_single_number_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_number_pane

0x75ae,	// (0x00031b46) list_single_pane_ParamLimits

0x75ae,	// (0x00031b46) list_single_pane

0x7cd5,	// (0x0003226d) list_highlight_pane_cp1

0x4dfb,	// (0x0002f393) list_single_pane_g1_ParamLimits

0x4dfb,	// (0x0002f393) list_single_pane_g1

0x4e07,	// (0x0002f39f) list_single_pane_g2_ParamLimits

0x4e07,	// (0x0002f39f) list_single_pane_g2

0x0001,

0xf5ce,	// (0x00039b66) list_single_pane_g_ParamLimits

0xf5ce,	// (0x00039b66) list_single_pane_g

0x755d,	// (0x00031af5) list_single_pane_t1_ParamLimits

0x755d,	// (0x00031af5) list_single_pane_t1

0x4dfb,	// (0x0002f393) list_single_number_pane_g1_ParamLimits

0x4dfb,	// (0x0002f393) list_single_number_pane_g1

0x4e07,	// (0x0002f39f) list_single_number_pane_g2_ParamLimits

0x4e07,	// (0x0002f39f) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x00039b66) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x00039b66) list_single_number_pane_g

0x7507,	// (0x00031a9f) list_single_number_pane_t1_ParamLimits

0x7507,	// (0x00031a9f) list_single_number_pane_t1

0x751d,	// (0x00031ab5) list_single_number_pane_t2_ParamLimits

0x751d,	// (0x00031ab5) list_single_number_pane_t2

0x0001,

0xf965,	// (0x00039efd) list_single_number_pane_t_ParamLimits

0xf965,	// (0x00039efd) list_single_number_pane_t

0x4def,	// (0x0002f387) list_single_graphic_pane_g1_ParamLimits

0x4def,	// (0x0002f387) list_single_graphic_pane_g1

0x4dfb,	// (0x0002f393) list_single_graphic_pane_g2_ParamLimits

0x4dfb,	// (0x0002f393) list_single_graphic_pane_g2

0x4e07,	// (0x0002f39f) list_single_graphic_pane_g3_ParamLimits

0x4e07,	// (0x0002f39f) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00039b5f) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00039b5f) list_single_graphic_pane_g

0x4e13,	// (0x0002f3ab) list_single_graphic_pane_t1_ParamLimits

0x4e13,	// (0x0002f3ab) list_single_graphic_pane_t1

0x4dfb,	// (0x0002f393) list_single_heading_pane_g1_ParamLimits

0x4dfb,	// (0x0002f393) list_single_heading_pane_g1

0x4e07,	// (0x0002f39f) list_single_heading_pane_g2_ParamLimits

0x4e07,	// (0x0002f39f) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x00039b66) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x00039b66) list_single_heading_pane_g

0x4e29,	// (0x0002f3c1) list_single_heading_pane_t1_ParamLimits

0x4e29,	// (0x0002f3c1) list_single_heading_pane_t1

0x4e3f,	// (0x0002f3d7) list_single_heading_pane_t2_ParamLimits

0x4e3f,	// (0x0002f3d7) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00039b6b) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00039b6b) list_single_heading_pane_t

0x4dfb,	// (0x0002f393) list_single_number_heading_pane_g1_ParamLimits

0x4dfb,	// (0x0002f393) list_single_number_heading_pane_g1

0x4e07,	// (0x0002f39f) list_single_number_heading_pane_g2_ParamLimits

0x4e07,	// (0x0002f39f) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x00039b66) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x00039b66) list_single_number_heading_pane_g

0x4e29,	// (0x0002f3c1) list_single_number_heading_pane_t1_ParamLimits

0x4e29,	// (0x0002f3c1) list_single_number_heading_pane_t1

0x4e51,	// (0x0002f3e9) list_single_number_heading_pane_t2_ParamLimits

0x4e51,	// (0x0002f3e9) list_single_number_heading_pane_t2

0x4e63,	// (0x0002f3fb) list_single_number_heading_pane_t3_ParamLimits

0x4e63,	// (0x0002f3fb) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00039b70) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00039b70) list_single_number_heading_pane_t

0x4e75,	// (0x0002f40d) list_single_graphic_heading_pane_g1_ParamLimits

0x4e75,	// (0x0002f40d) list_single_graphic_heading_pane_g1

0x4e81,	// (0x0002f419) list_single_graphic_heading_pane_g4_ParamLimits

0x4e81,	// (0x0002f419) list_single_graphic_heading_pane_g4

0x4e07,	// (0x0002f39f) list_single_graphic_heading_pane_g5_ParamLimits

0x4e07,	// (0x0002f39f) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00039b77) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00039b77) list_single_graphic_heading_pane_g

0x4e29,	// (0x0002f3c1) list_single_graphic_heading_pane_t1_ParamLimits

0x4e29,	// (0x0002f3c1) list_single_graphic_heading_pane_t1

0x4e92,	// (0x0002f42a) list_single_graphic_heading_pane_t2_ParamLimits

0x4e92,	// (0x0002f42a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00039b7e) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00039b7e) list_single_graphic_heading_pane_t

0x4ea4,	// (0x0002f43c) list_single_large_graphic_pane_g1_ParamLimits

0x4ea4,	// (0x0002f43c) list_single_large_graphic_pane_g1

0x4eb0,	// (0x0002f448) list_single_large_graphic_pane_g2_ParamLimits

0x4eb0,	// (0x0002f448) list_single_large_graphic_pane_g2

0x4ebc,	// (0x0002f454) list_single_large_graphic_pane_g3_ParamLimits

0x4ebc,	// (0x0002f454) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x00039b83) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x00039b83) list_single_large_graphic_pane_g

0xa0f8,	// (0x00034690) wait_border_pane_g2_copy1

0x4ec8,	// (0x0002f460) list_single_large_graphic_pane_g4_cp2

0x4ed0,	// (0x0002f468) list_single_large_graphic_pane_t1_ParamLimits

0x4ed0,	// (0x0002f468) list_single_large_graphic_pane_t1

0x4ee6,	// (0x0002f47e) list_double_pane_g1_ParamLimits

0x4ee6,	// (0x0002f47e) list_double_pane_g1

0x4ef2,	// (0x0002f48a) list_double_pane_g2_ParamLimits

0x4ef2,	// (0x0002f48a) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00039b8a) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00039b8a) list_double_pane_g

0x4efe,	// (0x0002f496) list_double_pane_t1_ParamLimits

0x4efe,	// (0x0002f496) list_double_pane_t1

0x4f14,	// (0x0002f4ac) list_double_pane_t2_ParamLimits

0x4f14,	// (0x0002f4ac) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00039b8f) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00039b8f) list_double_pane_t

0x4f26,	// (0x0002f4be) list_double2_pane_g1_ParamLimits

0x4f26,	// (0x0002f4be) list_double2_pane_g1

0x4f37,	// (0x0002f4cf) list_double2_pane_g2_ParamLimits

0x4f37,	// (0x0002f4cf) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x00039b94) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x00039b94) list_double2_pane_g

0x4f43,	// (0x0002f4db) list_double2_pane_t1_ParamLimits

0x4f43,	// (0x0002f4db) list_double2_pane_t1

0x4f59,	// (0x0002f4f1) list_double2_pane_t2_ParamLimits

0x4f59,	// (0x0002f4f1) list_double2_pane_t2

0x0001,

0xf601,	// (0x00039b99) list_double2_pane_t_ParamLimits

0xf601,	// (0x00039b99) list_double2_pane_t

0x4ee6,	// (0x0002f47e) list_double_number_pane_g1_ParamLimits

0x4ee6,	// (0x0002f47e) list_double_number_pane_g1

0x4ef2,	// (0x0002f48a) list_double_number_pane_g2_ParamLimits

0x4ef2,	// (0x0002f48a) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00039b8a) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00039b8a) list_double_number_pane_g

0x4f6b,	// (0x0002f503) list_double_number_pane_t1_ParamLimits

0x4f6b,	// (0x0002f503) list_double_number_pane_t1

0x4f7d,	// (0x0002f515) list_double_number_pane_t2_ParamLimits

0x4f7d,	// (0x0002f515) list_double_number_pane_t2

0x4f93,	// (0x0002f52b) list_double_number_pane_t3_ParamLimits

0x4f93,	// (0x0002f52b) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00039b9e) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00039b9e) list_double_number_pane_t

0x4fa5,	// (0x0002f53d) list_double_graphic_pane_g1_ParamLimits

0x4fa5,	// (0x0002f53d) list_double_graphic_pane_g1

0x4fb1,	// (0x0002f549) list_double_graphic_pane_g2_ParamLimits

0x4fb1,	// (0x0002f549) list_double_graphic_pane_g2

0x4fc0,	// (0x0002f558) list_double_graphic_pane_g3_ParamLimits

0x4fc0,	// (0x0002f558) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x00039ba5) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x00039ba5) list_double_graphic_pane_g

0x4fd8,	// (0x0002f570) list_double_graphic_pane_t1_ParamLimits

0x4fd8,	// (0x0002f570) list_double_graphic_pane_t1

0x4fee,	// (0x0002f586) list_double_graphic_pane_t2_ParamLimits

0x4fee,	// (0x0002f586) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00039bae) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00039bae) list_double_graphic_pane_t

0x5000,	// (0x0002f598) list_double2_graphic_pane_g1_ParamLimits

0x5000,	// (0x0002f598) list_double2_graphic_pane_g1

0x500c,	// (0x0002f5a4) list_double2_graphic_pane_g2_ParamLimits

0x500c,	// (0x0002f5a4) list_double2_graphic_pane_g2

0x4f37,	// (0x0002f4cf) list_double2_graphic_pane_g3_ParamLimits

0x4f37,	// (0x0002f4cf) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x00039bb3) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x00039bb3) list_double2_graphic_pane_g

0x5018,	// (0x0002f5b0) list_double2_graphic_pane_t1_ParamLimits

0x5018,	// (0x0002f5b0) list_double2_graphic_pane_t1

0x502e,	// (0x0002f5c6) list_double2_graphic_pane_t2_ParamLimits

0x502e,	// (0x0002f5c6) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00039bba) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00039bba) list_double2_graphic_pane_t

0x5040,	// (0x0002f5d8) list_double_large_graphic_pane_g1_ParamLimits

0x5040,	// (0x0002f5d8) list_double_large_graphic_pane_g1

0x5053,	// (0x0002f5eb) list_double_large_graphic_pane_g2_ParamLimits

0x5053,	// (0x0002f5eb) list_double_large_graphic_pane_g2

0x4ef2,	// (0x0002f48a) list_double_large_graphic_pane_g3_ParamLimits

0x4ef2,	// (0x0002f48a) list_double_large_graphic_pane_g3

0x5064,	// (0x0002f5fc) list_double_large_graphic_pane_g4_ParamLimits

0x5064,	// (0x0002f5fc) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00039bbf) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00039bbf) list_double_large_graphic_pane_g

0x508b,	// (0x0002f623) list_double_large_graphic_pane_t1_ParamLimits

0x508b,	// (0x0002f623) list_double_large_graphic_pane_t1

0x50a4,	// (0x0002f63c) list_double_large_graphic_pane_t2_ParamLimits

0x50a4,	// (0x0002f63c) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00039bca) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00039bca) list_double_large_graphic_pane_t

0x50b6,	// (0x0002f64e) list_double2_large_graphic_pane_g1_ParamLimits

0x50b6,	// (0x0002f64e) list_double2_large_graphic_pane_g1

0x4f26,	// (0x0002f4be) list_double2_large_graphic_pane_g2_ParamLimits

0x4f26,	// (0x0002f4be) list_double2_large_graphic_pane_g2

0x4f37,	// (0x0002f4cf) list_double2_large_graphic_pane_g3_ParamLimits

0x4f37,	// (0x0002f4cf) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00039bcf) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00039bcf) list_double2_large_graphic_pane_g

0x50c2,	// (0x0002f65a) list_double2_large_graphic_pane_t1_ParamLimits

0x50c2,	// (0x0002f65a) list_double2_large_graphic_pane_t1

0x50d8,	// (0x0002f670) list_double2_large_graphic_pane_t2_ParamLimits

0x50d8,	// (0x0002f670) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x00039bd6) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x00039bd6) list_double2_large_graphic_pane_t

0x50ea,	// (0x0002f682) list_double_heading_pane_g1_ParamLimits

0x50ea,	// (0x0002f682) list_double_heading_pane_g1

0x50fb,	// (0x0002f693) list_double_heading_pane_g2_ParamLimits

0x50fb,	// (0x0002f693) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x00039bdb) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x00039bdb) list_double_heading_pane_g

0x5107,	// (0x0002f69f) list_double_heading_pane_t1_ParamLimits

0x5107,	// (0x0002f69f) list_double_heading_pane_t1

0x4f59,	// (0x0002f4f1) list_double_heading_pane_t2_ParamLimits

0x4f59,	// (0x0002f4f1) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x00039be0) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x00039be0) list_double_heading_pane_t

0x511d,	// (0x0002f6b5) list_double_graphic_heading_pane_g1_ParamLimits

0x511d,	// (0x0002f6b5) list_double_graphic_heading_pane_g1

0x50ea,	// (0x0002f682) list_double_graphic_heading_pane_g2_ParamLimits

0x50ea,	// (0x0002f682) list_double_graphic_heading_pane_g2

0x50fb,	// (0x0002f693) list_double_graphic_heading_pane_g3_ParamLimits

0x50fb,	// (0x0002f693) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x00039be5) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x00039be5) list_double_graphic_heading_pane_g

0x5129,	// (0x0002f6c1) list_double_graphic_heading_pane_t1_ParamLimits

0x5129,	// (0x0002f6c1) list_double_graphic_heading_pane_t1

0x502e,	// (0x0002f5c6) list_double_graphic_heading_pane_t2_ParamLimits

0x502e,	// (0x0002f5c6) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x00039bec) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x00039bec) list_double_graphic_heading_pane_t

0x5053,	// (0x0002f5eb) list_double_time_pane_g1_ParamLimits

0x5053,	// (0x0002f5eb) list_double_time_pane_g1

0x4ef2,	// (0x0002f48a) list_double_time_pane_g2_ParamLimits

0x4ef2,	// (0x0002f48a) list_double_time_pane_g2

0x0001,

0xf659,	// (0x00039bf1) list_double_time_pane_g_ParamLimits

0xf659,	// (0x00039bf1) list_double_time_pane_g

0x513f,	// (0x0002f6d7) list_double_time_pane_t1_ParamLimits

0x513f,	// (0x0002f6d7) list_double_time_pane_t1

0x5155,	// (0x0002f6ed) list_double_time_pane_t2_ParamLimits

0x5155,	// (0x0002f6ed) list_double_time_pane_t2

0x5167,	// (0x0002f6ff) list_double_time_pane_t3_ParamLimits

0x5167,	// (0x0002f6ff) list_double_time_pane_t3

0x5179,	// (0x0002f711) list_double_time_pane_t4_ParamLimits

0x5179,	// (0x0002f711) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x00039bf6) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x00039bf6) list_double_time_pane_t

0x500c,	// (0x0002f5a4) list_setting_pane_g1_ParamLimits

0x500c,	// (0x0002f5a4) list_setting_pane_g1

0x4f37,	// (0x0002f4cf) list_setting_pane_g2_ParamLimits

0x4f37,	// (0x0002f4cf) list_setting_pane_g2

0x0001,

0xf667,	// (0x00039bff) list_setting_pane_g_ParamLimits

0xf667,	// (0x00039bff) list_setting_pane_g

0x518b,	// (0x0002f723) list_setting_pane_t1_ParamLimits

0x518b,	// (0x0002f723) list_setting_pane_t1

0x51a5,	// (0x0002f73d) list_setting_pane_t2_ParamLimits

0x51a5,	// (0x0002f73d) list_setting_pane_t2

0x0002,

0xf66c,	// (0x00039c04) list_setting_pane_t_ParamLimits

0xf66c,	// (0x00039c04) list_setting_pane_t

0x51e4,	// (0x0002f77c) set_value_pane_cp_ParamLimits

0x51e4,	// (0x0002f77c) set_value_pane_cp

0x51f0,	// (0x0002f788) list_setting_number_pane_g1_ParamLimits

0x51f0,	// (0x0002f788) list_setting_number_pane_g1

0x51fc,	// (0x0002f794) list_setting_number_pane_g2_ParamLimits

0x51fc,	// (0x0002f794) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x00039c0b) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x00039c0b) list_setting_number_pane_g

0x5208,	// (0x0002f7a0) list_setting_number_pane_t1_ParamLimits

0x5208,	// (0x0002f7a0) list_setting_number_pane_t1

0x5221,	// (0x0002f7b9) list_setting_number_pane_t2_ParamLimits

0x5221,	// (0x0002f7b9) list_setting_number_pane_t2

0x523b,	// (0x0002f7d3) list_setting_number_pane_t3_ParamLimits

0x523b,	// (0x0002f7d3) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x00039c10) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x00039c10) list_setting_number_pane_t

0x51e4,	// (0x0002f77c) set_value_pane_ParamLimits

0x51e4,	// (0x0002f77c) set_value_pane

0x85c8,	// (0x00032b60) bg_set_opt_pane_ParamLimits

0x85c8,	// (0x00032b60) bg_set_opt_pane

0x527e,	// (0x0002f816) set_value_pane_t1

0x85e9,	// (0x00032b81) slider_set_pane_cp3

0x85f2,	// (0x00032b8a) volume_small_pane_cp

0x85fb,	// (0x00032b93) list_form_gen_pane

0x8604,	// (0x00032b9c) scroll_pane_cp8

0x5294,	// (0x0002f82c) form_field_data_pane_ParamLimits

0x5294,	// (0x0002f82c) form_field_data_pane

0x52b4,	// (0x0002f84c) form_field_data_wide_pane_ParamLimits

0x52b4,	// (0x0002f84c) form_field_data_wide_pane

0x52d5,	// (0x0002f86d) form_field_popup_pane_ParamLimits

0x52d5,	// (0x0002f86d) form_field_popup_pane

0x52f5,	// (0x0002f88d) form_field_popup_wide_pane_ParamLimits

0x52f5,	// (0x0002f88d) form_field_popup_wide_pane

0x5312,	// (0x0002f8aa) form_field_slider_pane_ParamLimits

0x5312,	// (0x0002f8aa) form_field_slider_pane

0x5325,	// (0x0002f8bd) form_field_slider_wide_pane_ParamLimits

0x5325,	// (0x0002f8bd) form_field_slider_wide_pane

0x8615,	// (0x00032bad) data_form_pane

0x5342,	// (0x0002f8da) form_field_data_pane_t1

0x8621,	// (0x00032bb9) input_focus_pane

0x535a,	// (0x0002f8f2) data_form_wide_pane

0x5377,	// (0x0002f90f) form_field_data_wide_pane_t1

0x8392,	// (0x0003292a) input_focus_pane_cp6

0x5399,	// (0x0002f931) form_field_popup_pane_t1

0x8621,	// (0x00032bb9) input_focus_pane_cp7

0x864f,	// (0x00032be7) list_form_pane

0x53b9,	// (0x0002f951) form_field_popup_wide_pane_t1

0x8621,	// (0x00032bb9) input_focus_pane_cp8

0x865b,	// (0x00032bf3) list_form_wide_pane

0x53d6,	// (0x0002f96e) form_field_slider_pane_t1_ParamLimits

0x53d6,	// (0x0002f96e) form_field_slider_pane_t1

0x53ec,	// (0x0002f984) form_field_slider_pane_t2_ParamLimits

0x53ec,	// (0x0002f984) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x00039c20) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x00039c20) form_field_slider_pane_t

0x8030,	// (0x000325c8) input_focus_pane_cp9_ParamLimits

0x8030,	// (0x000325c8) input_focus_pane_cp9

0x5401,	// (0x0002f999) slider_cont_pane_ParamLimits

0x5401,	// (0x0002f999) slider_cont_pane

0x866a,	// (0x00032c02) form_field_slider_wide_pane_t1_ParamLimits

0x866a,	// (0x00032c02) form_field_slider_wide_pane_t1

0x5415,	// (0x0002f9ad) form_field_slider_wide_pane_t2_ParamLimits

0x5415,	// (0x0002f9ad) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x00039c25) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x00039c25) form_field_slider_wide_pane_t

0x8030,	// (0x000325c8) input_focus_pane_cp10_ParamLimits

0x8030,	// (0x000325c8) input_focus_pane_cp10

0x5427,	// (0x0002f9bf) slider_cont_pane_cp1_ParamLimits

0x5427,	// (0x0002f9bf) slider_cont_pane_cp1

0x543b,	// (0x0002f9d3) slider_form_pane_cp

0x867c,	// (0x00032c14) input_focus_pane_g1

0x8684,	// (0x00032c1c) input_focus_pane_g2

0x868c,	// (0x00032c24) input_focus_pane_g3

0x8694,	// (0x00032c2c) input_focus_pane_g4

0x869c,	// (0x00032c34) input_focus_pane_g5

0x86a4,	// (0x00032c3c) input_focus_pane_g6

0x86ac,	// (0x00032c44) input_focus_pane_g7

0x86b4,	// (0x00032c4c) input_focus_pane_g8

0x86bc,	// (0x00032c54) input_focus_pane_g9

0x7ccb,	// (0x00032263) input_focus_pane_g10

0x0009,

0xf692,	// (0x00039c2a) input_focus_pane_g

0xa101,	// (0x00034699) wait_border_pane_g3_copy1

0x5443,	// (0x0002f9db) data_form_pane_t1

0x7ccb,	// (0x00032263) wait_anim_pane_g1_copy1

0x752f,	// (0x00031ac7) data_form_wide_pane_t1

0x545e,	// (0x0002f9f6) list_form_graphic_pane_cp_ParamLimits

0x545e,	// (0x0002f9f6) list_form_graphic_pane_cp

0xb02a,	// (0x000355c2) slider_form_pane_g1

0xb033,	// (0x000355cb) slider_form_pane_g2

0x0006,

0xf995,	// (0x00039f2d) slider_form_pane_g

0x5477,	// (0x0002fa0f) list_form_graphic_pane_ParamLimits

0x5477,	// (0x0002fa0f) list_form_graphic_pane

0x5493,	// (0x0002fa2b) list_form_graphic_pane_g1

0x72f4,	// (0x0003188c) list_form_graphic_pane_t1_ParamLimits

0x72f4,	// (0x0003188c) list_form_graphic_pane_t1

0x7db5,	// (0x0003234d) list_highlight_pane_cp5_ParamLimits

0x7db5,	// (0x0003234d) list_highlight_pane_cp5

0x7309,	// (0x000318a1) find_pane_g1

0x86c4,	// (0x00032c5c) input_find_pane

0x7312,	// (0x000318aa) input_find_pane_g1_ParamLimits

0x7312,	// (0x000318aa) input_find_pane_g1

0x731e,	// (0x000318b6) input_find_pane_t1_ParamLimits

0x731e,	// (0x000318b6) input_find_pane_t1

0x7333,	// (0x000318cb) input_find_pane_t2_ParamLimits

0x7333,	// (0x000318cb) input_find_pane_t2

0x0001,

0xf6a7,	// (0x00039c3f) input_find_pane_t_ParamLimits

0xf6a7,	// (0x00039c3f) input_find_pane_t

0x86cd,	// (0x00032c65) input_focus_pane_cp5_ParamLimits

0x86cd,	// (0x00032c65) input_focus_pane_cp5

0x86e7,	// (0x00032c7f) bg_popup_window_pane_cp2_ParamLimits

0x86e7,	// (0x00032c7f) bg_popup_window_pane_cp2

0x86f4,	// (0x00032c8c) listscroll_menu_pane_ParamLimits

0x86f4,	// (0x00032c8c) listscroll_menu_pane

0x8700,	// (0x00032c98) popup_submenu_window_ParamLimits

0x8700,	// (0x00032c98) popup_submenu_window

0x872c,	// (0x00032cc4) find_popup_pane_g1

0x8734,	// (0x00032ccc) input_popup_find_pane_cp

0x86cd,	// (0x00032c65) input_focus_pane_cp4_ParamLimits

0x86cd,	// (0x00032c65) input_focus_pane_cp4

0x874a,	// (0x00032ce2) input_popup_find_pane_t1_ParamLimits

0x874a,	// (0x00032ce2) input_popup_find_pane_t1

0x7cd5,	// (0x0003226d) bg_popup_sub_pane_cp

0x8778,	// (0x00032d10) listscroll_popup_sub_pane

0x8780,	// (0x00032d18) list_submenu_pane_ParamLimits

0x8780,	// (0x00032d18) list_submenu_pane

0x8791,	// (0x00032d29) scroll_pane_cp4

0x8799,	// (0x00032d31) list_single_popup_submenu_pane_ParamLimits

0x8799,	// (0x00032d31) list_single_popup_submenu_pane

0x87ad,	// (0x00032d45) list_single_popup_submenu_pane_g1

0x87b5,	// (0x00032d4d) list_single_popup_submenu_pane_t1_ParamLimits

0x87b5,	// (0x00032d4d) list_single_popup_submenu_pane_t1

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp1_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp1

0x87ca,	// (0x00032d62) tabs_2_active_pane_g1

0x87d2,	// (0x00032d6a) tabs_2_active_pane_t1

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp1_ParamLimits

0x7db5,	// (0x0003234d) bg_passive_tab_pane_cp1

0x87ca,	// (0x00032d62) tabs_2_passive_pane_g1

0x87d2,	// (0x00032d6a) tabs_2_passive_pane_t1

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp4

0x87f2,	// (0x00032d8a) tabs_2_long_active_pane_t1

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp4

0x6094,	// (0x0003062c) list_single_midp_graphic_pane_g4_ParamLimits

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp5

0x8811,	// (0x00032da9) tabs_3_long_active_pane_t1

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp5

0x6094,	// (0x0003062c) list_single_midp_graphic_pane_g4

0x7db5,	// (0x0003234d) bg_popup_window_pane_cp13_ParamLimits

0x7db5,	// (0x0003234d) bg_popup_window_pane_cp13

0x882c,	// (0x00032dc4) listscroll_popup_fast_pane_ParamLimits

0x882c,	// (0x00032dc4) listscroll_popup_fast_pane

0x883b,	// (0x00032dd3) grid_popup_fast_pane_ParamLimits

0x883b,	// (0x00032dd3) grid_popup_fast_pane

0x884d,	// (0x00032de5) scroll_pane_cp9_ParamLimits

0x884d,	// (0x00032de5) scroll_pane_cp9

0xc964,	// (0x00036efc) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc964,	// (0x00036efc) list_single_graphic_hl_pane_t1_cp2

0x8871,	// (0x00032e09) input_focus_pane_cp20_ParamLimits

0x8871,	// (0x00032e09) input_focus_pane_cp20

0x887f,	// (0x00032e17) query_popup_data_pane_t1_ParamLimits

0x887f,	// (0x00032e17) query_popup_data_pane_t1

0x8892,	// (0x00032e2a) query_popup_data_pane_t2_ParamLimits

0x8892,	// (0x00032e2a) query_popup_data_pane_t2

0x88d8,	// (0x00032e70) query_popup_data_pane_t3_ParamLimits

0x88d8,	// (0x00032e70) query_popup_data_pane_t3

0x8919,	// (0x00032eb1) query_popup_data_pane_t4_ParamLimits

0x8919,	// (0x00032eb1) query_popup_data_pane_t4

0x8955,	// (0x00032eed) query_popup_data_pane_t5_ParamLimits

0x8955,	// (0x00032eed) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x00039c44) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x00039c44) query_popup_data_pane_t

0x867c,	// (0x00032c14) bg_set_opt_pane_g1

0x8684,	// (0x00032c1c) bg_set_opt_pane_g2

0x868c,	// (0x00032c24) bg_set_opt_pane_g3

0x8694,	// (0x00032c2c) bg_set_opt_pane_g4

0x869c,	// (0x00032c34) bg_set_opt_pane_g5

0x86a4,	// (0x00032c3c) bg_set_opt_pane_g6

0x86ac,	// (0x00032c44) bg_set_opt_pane_g7

0x86b4,	// (0x00032c4c) bg_set_opt_pane_g8

0x86bc,	// (0x00032c54) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x00039c4f) bg_set_opt_pane_g

0x5738,	// (0x0002fcd0) control_top_pane_stacon_ParamLimits

0x5738,	// (0x0002fcd0) control_top_pane_stacon

0x578b,	// (0x0002fd23) signal_pane_stacon_ParamLimits

0x578b,	// (0x0002fd23) signal_pane_stacon

0x8f41,	// (0x000334d9) stacon_top_pane_g1_ParamLimits

0x8f41,	// (0x000334d9) stacon_top_pane_g1

0x57b0,	// (0x0002fd48) title_pane_stacon_ParamLimits

0x57b0,	// (0x0002fd48) title_pane_stacon

0x57da,	// (0x0002fd72) uni_indicator_pane_stacon_ParamLimits

0x57da,	// (0x0002fd72) uni_indicator_pane_stacon

0x57ef,	// (0x0002fd87) battery_pane_stacon_ParamLimits

0x57ef,	// (0x0002fd87) battery_pane_stacon

0x5833,	// (0x0002fdcb) control_bottom_pane_stacon_ParamLimits

0x5833,	// (0x0002fdcb) control_bottom_pane_stacon

0x5856,	// (0x0002fdee) navi_pane_stacon_ParamLimits

0x5856,	// (0x0002fdee) navi_pane_stacon

0x8f63,	// (0x000334fb) stacon_bottom_pane_g1_ParamLimits

0x8f63,	// (0x000334fb) stacon_bottom_pane_g1

0x549b,	// (0x0002fa33) aid_levels_signal_lsc_ParamLimits

0x549b,	// (0x0002fa33) aid_levels_signal_lsc

0x54b1,	// (0x0002fa49) signal_pane_stacon_g1_ParamLimits

0x54b1,	// (0x0002fa49) signal_pane_stacon_g1

0x54c5,	// (0x0002fa5d) signal_pane_stacon_g2_ParamLimits

0x54c5,	// (0x0002fa5d) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00039c62) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00039c62) signal_pane_stacon_g

0x54fa,	// (0x0002fa92) title_pane_stacon_t1_ParamLimits

0x54fa,	// (0x0002fa92) title_pane_stacon_t1

0x8999,	// (0x00032f31) uni_indicator_pane_stacon_g1

0x89a3,	// (0x00032f3b) uni_indicator_pane_stacon_g2

0x89ad,	// (0x00032f45) uni_indicator_pane_stacon_g3

0x89b7,	// (0x00032f4f) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x00039c6e) uni_indicator_pane_stacon_g

0x551f,	// (0x0002fab7) control_top_pane_stacon_g1

0x5527,	// (0x0002fabf) control_top_pane_stacon_t1_ParamLimits

0x5527,	// (0x0002fabf) control_top_pane_stacon_t1

0x555e,	// (0x0002faf6) aid_levels_battery_lsc_ParamLimits

0x555e,	// (0x0002faf6) aid_levels_battery_lsc

0x5575,	// (0x0002fb0d) battery_pane_stacon_g1_ParamLimits

0x5575,	// (0x0002fb0d) battery_pane_stacon_g1

0x5588,	// (0x0002fb20) battery_pane_stacon_g2_ParamLimits

0x5588,	// (0x0002fb20) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x00039c77) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x00039c77) battery_pane_stacon_g

0x55c6,	// (0x0002fb5e) navi_icon_pane_stacon

0x55da,	// (0x0002fb72) navi_navi_pane_stacon

0x55c6,	// (0x0002fb5e) navi_text_pane_stacon

0x551f,	// (0x0002fab7) control_bottom_pane_stacon_g1

0x55ee,	// (0x0002fb86) control_bottom_pane_stacon_t1_ParamLimits

0x55ee,	// (0x0002fb86) control_bottom_pane_stacon_t1

0x89db,	// (0x00032f73) grid_app_pane_ParamLimits

0x89db,	// (0x00032f73) grid_app_pane

0x89ff,	// (0x00032f97) scroll_pane_cp15_ParamLimits

0x89ff,	// (0x00032f97) scroll_pane_cp15

0x8a12,	// (0x00032faa) cell_app_pane_ParamLimits

0x8a12,	// (0x00032faa) cell_app_pane

0x8a36,	// (0x00032fce) cell_app_pane_g1_ParamLimits

0x8a36,	// (0x00032fce) cell_app_pane_g1

0x8a56,	// (0x00032fee) cell_app_pane_g2_ParamLimits

0x8a56,	// (0x00032fee) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x00039c7c) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x00039c7c) cell_app_pane_g

0x8a62,	// (0x00032ffa) cell_app_pane_t1_ParamLimits

0x8a62,	// (0x00032ffa) cell_app_pane_t1

0x8a79,	// (0x00033011) grid_highlight_pane_ParamLimits

0x8a79,	// (0x00033011) grid_highlight_pane

0x867c,	// (0x00032c14) cell_highlight_pane_g1

0x8684,	// (0x00032c1c) cell_highlight_pane_g2

0x868c,	// (0x00032c24) cell_highlight_pane_g3

0x8694,	// (0x00032c2c) cell_highlight_pane_g4

0x869c,	// (0x00032c34) cell_highlight_pane_g5

0x86a4,	// (0x00032c3c) cell_highlight_pane_g6

0x86ac,	// (0x00032c44) cell_highlight_pane_g7

0x86b4,	// (0x00032c4c) cell_highlight_pane_g8

0x86bc,	// (0x00032c54) cell_highlight_pane_g9

0x7ccb,	// (0x00032263) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x00039c2a) cell_highlight_pane_g

0x8a8a,	// (0x00033022) bg_scroll_pane

0x5638,	// (0x0002fbd0) scroll_handle_pane

0x8ad1,	// (0x00033069) scroll_bg_pane_g1

0x8ae6,	// (0x0003307e) scroll_bg_pane_g2

0x8afe,	// (0x00033096) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x00039c81) scroll_bg_pane_g

0x8b13,	// (0x000330ab) scroll_handle_focus_pane_ParamLimits

0x8b13,	// (0x000330ab) scroll_handle_focus_pane

0x8ad1,	// (0x00033069) scroll_handle_pane_g1

0x8b20,	// (0x000330b8) scroll_handle_pane_g2

0x8afe,	// (0x00033096) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x00039c88) scroll_handle_pane_g

0x86cd,	// (0x00032c65) bg_popup_sub_pane_cp21_ParamLimits

0x86cd,	// (0x00032c65) bg_popup_sub_pane_cp21

0x8b34,	// (0x000330cc) popup_fep_japan_predictive_window_t1_ParamLimits

0x8b34,	// (0x000330cc) popup_fep_japan_predictive_window_t1

0x8b4e,	// (0x000330e6) popup_fep_japan_predictive_window_t2_ParamLimits

0x8b4e,	// (0x000330e6) popup_fep_japan_predictive_window_t2

0x8b81,	// (0x00033119) popup_fep_japan_predictive_window_t3_ParamLimits

0x8b81,	// (0x00033119) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x00039c8f) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x00039c8f) popup_fep_japan_predictive_window_t

0x7cd5,	// (0x0003226d) bg_popup_sub_pane_cp23

0x8bb8,	// (0x00033150) listscroll_japin_cand_pane

0x8bc0,	// (0x00033158) popup_fep_japan_candidate_window_t1

0x8bce,	// (0x00033166) candidate_pane_ParamLimits

0x8bce,	// (0x00033166) candidate_pane

0x8be0,	// (0x00033178) scroll_pane_cp30

0x8be8,	// (0x00033180) list_single_popup_jap_candidate_pane_ParamLimits

0x8be8,	// (0x00033180) list_single_popup_jap_candidate_pane

0x7cd5,	// (0x0003226d) list_highlight_pane_cp30

0x8bfd,	// (0x00033195) list_single_popup_jap_candidate_pane_t1

0x8c0c,	// (0x000331a4) level_1_signal

0x8c1e,	// (0x000331b6) level_2_signal

0x8c31,	// (0x000331c9) level_3_signal

0x8c44,	// (0x000331dc) level_4_signal

0x8c57,	// (0x000331ef) level_5_signal

0x8c6a,	// (0x00033202) level_6_signal

0x8c7d,	// (0x00033215) level_7_signal

0x8c0c,	// (0x000331a4) level_1_battery

0x8c1e,	// (0x000331b6) level_2_battery

0x8c31,	// (0x000331c9) level_3_battery

0x8c44,	// (0x000331dc) level_4_battery

0x8c57,	// (0x000331ef) level_5_battery

0x8c6a,	// (0x00033202) level_6_battery

0x8c7d,	// (0x00033215) level_7_battery

0x8ca8,	// (0x00033240) list_menu_pane_ParamLimits

0x8ca8,	// (0x00033240) list_menu_pane

0x8cbe,	// (0x00033256) scroll_pane_cp25_ParamLimits

0x8cbe,	// (0x00033256) scroll_pane_cp25

0x8cd7,	// (0x0003326f) list_double2_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double2_graphic_pane_cp2

0x8cd7,	// (0x0003326f) list_double2_large_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double2_large_graphic_pane_cp2

0x8cd7,	// (0x0003326f) list_double2_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double2_pane_cp2

0x8cd7,	// (0x0003326f) list_double_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double_graphic_pane_cp2

0x8cd7,	// (0x0003326f) list_double_large_graphic_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double_large_graphic_pane_cp2

0x8cd7,	// (0x0003326f) list_double_number_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double_number_pane_cp2

0x8cd7,	// (0x0003326f) list_double_pane_cp2_ParamLimits

0x8cd7,	// (0x0003326f) list_double_pane_cp2

0x8cfb,	// (0x00033293) list_single_2graphic_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_2graphic_pane_cp2

0x8cfb,	// (0x00033293) list_single_graphic_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_graphic_heading_pane_cp2

0x8cfb,	// (0x00033293) list_single_graphic_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_graphic_pane_cp2

0x8cfb,	// (0x00033293) list_single_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_heading_pane_cp2

0x8d14,	// (0x000332ac) list_single_large_graphic_pane_cp2_ParamLimits

0x8d14,	// (0x000332ac) list_single_large_graphic_pane_cp2

0x8cfb,	// (0x00033293) list_single_number_heading_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_number_heading_pane_cp2

0x8cfb,	// (0x00033293) list_single_number_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_number_pane_cp2

0x8cfb,	// (0x00033293) list_single_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_pane_cp2

0x8d90,	// (0x00033328) bg_popup_sub_pane_cp22

0x56ea,	// (0x0002fc82) popup_side_volume_key_window_g1

0x5714,	// (0x0002fcac) popup_side_volume_key_window_t1

0x5730,	// (0x0002fcc8) volume_small_pane_cp1

0x8030,	// (0x000325c8) bg_popup_sub_pane_cp24_ParamLimits

0x8030,	// (0x000325c8) bg_popup_sub_pane_cp24

0x8da6,	// (0x0003333e) fep_china_uni_candidate_pane_ParamLimits

0x8da6,	// (0x0003333e) fep_china_uni_candidate_pane

0x8dba,	// (0x00033352) fep_china_uni_entry_pane

0x8dca,	// (0x00033362) popup_fep_china_uni_window_g1

0x8de6,	// (0x0003337e) fep_china_uni_entry_pane_g1

0x8dee,	// (0x00033386) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x00039cc0) fep_china_uni_entry_pane_g

0x8df6,	// (0x0003338e) fep_entry_item_pane

0x8e00,	// (0x00033398) fep_candidate_item_pane

0x8e08,	// (0x000333a0) fep_china_uni_candidate_pane_g1

0x8e10,	// (0x000333a8) fep_china_uni_candidate_pane_g2

0x8e18,	// (0x000333b0) fep_china_uni_candidate_pane_g3

0x8e20,	// (0x000333b8) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x00039cc5) fep_china_uni_candidate_pane_g

0x7ccb,	// (0x00032263) fep_entry_item_pane_g1

0x8e28,	// (0x000333c0) fep_entry_item_pane_t1_ParamLimits

0x8e28,	// (0x000333c0) fep_entry_item_pane_t1

0x8e3e,	// (0x000333d6) fep_candidate_item_pane_t1_ParamLimits

0x8e3e,	// (0x000333d6) fep_candidate_item_pane_t1

0x8e53,	// (0x000333eb) fep_candidate_item_pane_t2_ParamLimits

0x8e53,	// (0x000333eb) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x00039cce) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x00039cce) fep_candidate_item_pane_t

0x7db5,	// (0x0003234d) list_highlight_pane_cp31_ParamLimits

0x7db5,	// (0x0003234d) list_highlight_pane_cp31

0x8e65,	// (0x000333fd) level_1_signal_lsc

0x8e6e,	// (0x00033406) level_2_signal_lsc

0x8e77,	// (0x0003340f) level_3_signal_lsc

0x8e80,	// (0x00033418) level_4_signal_lsc

0x8e89,	// (0x00033421) level_5_signal_lsc

0x8e92,	// (0x0003342a) level_6_signal_lsc

0x8e9b,	// (0x00033433) level_7_signal_lsc

0x8e9b,	// (0x00033433) level_1_battery_lsc

0x8ea4,	// (0x0003343c) level_2_battery_lsc

0x8ead,	// (0x00033445) level_3_battery_lsc

0x8eb6,	// (0x0003344e) level_4_battery_lsc

0x8ebf,	// (0x00033457) level_5_battery_lsc

0x8ec8,	// (0x00033460) level_6_battery_lsc

0x8e65,	// (0x000333fd) level_7_battery_lsc

0x8ed1,	// (0x00033469) scroll_handle_focus_pane_g1

0x8eda,	// (0x00033472) scroll_handle_focus_pane_g2

0x8ee3,	// (0x0003347b) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x00039cd3) scroll_handle_focus_pane_g

0x7348,	// (0x000318e0) list_single_2graphic_pane_g1_ParamLimits

0x7348,	// (0x000318e0) list_single_2graphic_pane_g1

0x4e81,	// (0x0002f419) list_single_2graphic_pane_g2_ParamLimits

0x4e81,	// (0x0002f419) list_single_2graphic_pane_g2

0x4e07,	// (0x0002f39f) list_single_2graphic_pane_g3_ParamLimits

0x4e07,	// (0x0002f39f) list_single_2graphic_pane_g3

0x7354,	// (0x000318ec) list_single_2graphic_pane_g4_ParamLimits

0x7354,	// (0x000318ec) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x00039cda) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x00039cda) list_single_2graphic_pane_g

0x7360,	// (0x000318f8) list_single_2graphic_pane_t1_ParamLimits

0x7360,	// (0x000318f8) list_single_2graphic_pane_t1

0x738e,	// (0x00031926) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x738e,	// (0x00031926) list_double2_graphic_large_graphic_pane_g1

0x4f26,	// (0x0002f4be) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f26,	// (0x0002f4be) list_double2_graphic_large_graphic_pane_g2

0x4f37,	// (0x0002f4cf) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4f37,	// (0x0002f4cf) list_double2_graphic_large_graphic_pane_g3

0x739e,	// (0x00031936) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x739e,	// (0x00031936) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x00039ce3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x00039ce3) list_double2_graphic_large_graphic_pane_g

0x73aa,	// (0x00031942) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x73aa,	// (0x00031942) list_double2_graphic_large_graphic_pane_t1

0x73c0,	// (0x00031958) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x73c0,	// (0x00031958) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x00039cec) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x00039cec) list_double2_graphic_large_graphic_pane_t

0x902b,	// (0x000335c3) popup_fast_swap_window_ParamLimits

0x902b,	// (0x000335c3) popup_fast_swap_window

0x9047,	// (0x000335df) popup_side_volume_key_window

0x9063,	// (0x000335fb) stacon_top_pane

0x906d,	// (0x00033605) status_pane_ParamLimits

0x906d,	// (0x00033605) status_pane

0x9063,	// (0x000335fb) status_small_pane

0x7cd5,	// (0x0003226d) control_pane

0x7cd5,	// (0x0003226d) stacon_bottom_pane

0x8604,	// (0x00032b9c) scroll_pane_cp121

0x85fb,	// (0x00032b93) set_content_pane

0x8eec,	// (0x00033484) bg_active_tab_pane_g1_cp1

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp1

0x8efe,	// (0x00033496) bg_active_tab_pane_g3_cp1

0x8eec,	// (0x00033484) bg_passive_tab_pane_g1_cp1

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp1

0x8efe,	// (0x00033496) bg_passive_tab_pane_g3_cp1

0x8f07,	// (0x0003349f) bg_active_tab_pane_g1_cp2

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp2

0x8f10,	// (0x000334a8) bg_active_tab_pane_g3_cp2

0x8f07,	// (0x0003349f) bg_passive_tab_pane_g1_cp2

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp2

0x8f10,	// (0x000334a8) bg_passive_tab_pane_g3_cp2

0x8f19,	// (0x000334b1) bg_active_tab_pane_g1_cp3

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp3

0x8f22,	// (0x000334ba) bg_active_tab_pane_g3_cp3

0x8f19,	// (0x000334b1) bg_passive_tab_pane_g1_cp3

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp3

0x8f22,	// (0x000334ba) bg_passive_tab_pane_g3_cp3

0x8f2b,	// (0x000334c3) bg_active_tab_pane_g1_cp4

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp4

0x8f36,	// (0x000334ce) bg_active_tab_pane_g3_cp4

0x8f2b,	// (0x000334c3) bg_passive_tab_pane_g1_cp4

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp4

0x8f36,	// (0x000334ce) bg_passive_tab_pane_g3_cp4

0x8f7f,	// (0x00033517) bg_active_tab_pane_g1_cp5

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp5

0x8f88,	// (0x00033520) bg_active_tab_pane_g3_cp5

0x8f7f,	// (0x00033517) bg_passive_tab_pane_g1_cp5

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp5

0x8f88,	// (0x00033520) bg_passive_tab_pane_g3_cp5

0x8f91,	// (0x00033529) list_set_graphic_pane_ParamLimits

0x8f91,	// (0x00033529) list_set_graphic_pane

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp4

0x8fae,	// (0x00033546) list_set_graphic_pane_g1_ParamLimits

0x8fae,	// (0x00033546) list_set_graphic_pane_g1

0x8fba,	// (0x00033552) list_set_graphic_pane_g2_ParamLimits

0x8fba,	// (0x00033552) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x00039cf1) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x00039cf1) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x0003a064) volume_small_pane_cp_g

0x8fde,	// (0x00033576) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8fde,	// (0x00033576) list_double2_large_graphic_pane_g1_cp2

0x8fea,	// (0x00033582) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8fea,	// (0x00033582) list_double2_large_graphic_pane_g2_cp2

0x8ffb,	// (0x00033593) list_double2_large_graphic_pane_g3_cp2

0x9003,	// (0x0003359b) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x9003,	// (0x0003359b) list_double2_large_graphic_pane_t1_cp2

0x9019,	// (0x000335b1) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9019,	// (0x000335b1) list_double2_large_graphic_pane_t2_cp2

0xabe0,	// (0x00035178) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabe0,	// (0x00035178) list_double_large_graphic_pane_g1_cp2

0xabf1,	// (0x00035189) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabf1,	// (0x00035189) list_double_large_graphic_pane_g2_cp2

0x9189,	// (0x00033721) list_double_large_graphic_pane_g3_cp2

0xac02,	// (0x0003519a) list_double_large_graphic_pane_g4_cp

0xac0a,	// (0x000351a2) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac0a,	// (0x000351a2) list_double_large_graphic_pane_t1_cp2

0xac21,	// (0x000351b9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac21,	// (0x000351b9) list_double_large_graphic_pane_t2_cp2

0x907b,	// (0x00033613) list_double2_graphic_pane_g1_cp2_ParamLimits

0x907b,	// (0x00033613) list_double2_graphic_pane_g1_cp2

0x9089,	// (0x00033621) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9089,	// (0x00033621) list_double2_graphic_pane_g2_cp2

0x909a,	// (0x00033632) list_double2_graphic_pane_g3_cp2

0x90a4,	// (0x0003363c) list_double2_graphic_pane_t1_cp2_ParamLimits

0x90a4,	// (0x0003363c) list_double2_graphic_pane_t1_cp2

0x90ba,	// (0x00033652) list_double2_graphic_pane_t2_cp2_ParamLimits

0x90ba,	// (0x00033652) list_double2_graphic_pane_t2_cp2

0x90cc,	// (0x00033664) list_single_number_heading_pane_g1_cp2_ParamLimits

0x90cc,	// (0x00033664) list_single_number_heading_pane_g1_cp2

0x90d8,	// (0x00033670) list_single_number_heading_pane_g2_cp2

0x90e0,	// (0x00033678) list_single_number_heading_pane_t1_cp2_ParamLimits

0x90e0,	// (0x00033678) list_single_number_heading_pane_t1_cp2

0x90f6,	// (0x0003368e) list_single_number_heading_pane_t2_cp2_ParamLimits

0x90f6,	// (0x0003368e) list_single_number_heading_pane_t2_cp2

0x9108,	// (0x000336a0) list_single_number_heading_pane_t3_cp2_ParamLimits

0x9108,	// (0x000336a0) list_single_number_heading_pane_t3_cp2

0x90cc,	// (0x00033664) list_single_heading_pane_g1_cp2_ParamLimits

0x90cc,	// (0x00033664) list_single_heading_pane_g1_cp2

0x90d8,	// (0x00033670) list_single_heading_pane_g2_cp2

0x90e0,	// (0x00033678) list_single_heading_pane_t1_cp2_ParamLimits

0x90e0,	// (0x00033678) list_single_heading_pane_t1_cp2

0xa9e8,	// (0x00034f80) list_single_heading_pane_t2_cp2_ParamLimits

0xa9e8,	// (0x00034f80) list_single_heading_pane_t2_cp2

0xa930,	// (0x00034ec8) list_double_graphic_pane_g1_cp2_ParamLimits

0xa930,	// (0x00034ec8) list_double_graphic_pane_g1_cp2

0xa93c,	// (0x00034ed4) list_double_graphic_pane_g2_cp2_ParamLimits

0xa93c,	// (0x00034ed4) list_double_graphic_pane_g2_cp2

0xa94b,	// (0x00034ee3) list_double_graphic_pane_g3_cp2

0xa953,	// (0x00034eeb) list_double_graphic_pane_t1_cp2_ParamLimits

0xa953,	// (0x00034eeb) list_double_graphic_pane_t1_cp2

0xa969,	// (0x00034f01) list_double_graphic_pane_t2_cp2_ParamLimits

0xa969,	// (0x00034f01) list_double_graphic_pane_t2_cp2

0x917d,	// (0x00033715) list_double_number_pane_g1_cp2_ParamLimits

0x917d,	// (0x00033715) list_double_number_pane_g1_cp2

0x9189,	// (0x00033721) list_double_number_pane_g2_cp2

0xa8f4,	// (0x00034e8c) list_double_number_pane_t1_cp2_ParamLimits

0xa8f4,	// (0x00034e8c) list_double_number_pane_t1_cp2

0xa908,	// (0x00034ea0) list_double_number_pane_t2_cp2_ParamLimits

0xa908,	// (0x00034ea0) list_double_number_pane_t2_cp2

0xa91e,	// (0x00034eb6) list_double_number_pane_t3_cp2_ParamLimits

0xa91e,	// (0x00034eb6) list_double_number_pane_t3_cp2

0xa7dd,	// (0x00034d75) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7dd,	// (0x00034d75) list_single_graphic_pane_g1_cp2

0x91e1,	// (0x00033779) list_single_graphic_pane_g2_cp2_ParamLimits

0x91e1,	// (0x00033779) list_single_graphic_pane_g2_cp2

0x91ed,	// (0x00033785) list_single_graphic_pane_g3_cp2

0xa7b3,	// (0x00034d4b) list_single_graphic_pane_t1_cp2_ParamLimits

0xa7b3,	// (0x00034d4b) list_single_graphic_pane_t1_cp2

0x91e1,	// (0x00033779) list_single_number_pane_g1_cp2_ParamLimits

0x91e1,	// (0x00033779) list_single_number_pane_g1_cp2

0x91ed,	// (0x00033785) list_single_number_pane_g2_cp2

0xa7b3,	// (0x00034d4b) list_single_number_pane_t1_cp2_ParamLimits

0xa7b3,	// (0x00034d4b) list_single_number_pane_t1_cp2

0xa7c9,	// (0x00034d61) list_single_number_pane_t2_cp2_ParamLimits

0xa7c9,	// (0x00034d61) list_single_number_pane_t2_cp2

0x8fea,	// (0x00033582) list_double2_pane_g1_cp2_ParamLimits

0x8fea,	// (0x00033582) list_double2_pane_g1_cp2

0x8ffb,	// (0x00033593) list_double2_pane_g2_cp2

0x9155,	// (0x000336ed) list_double2_pane_t1_cp2_ParamLimits

0x9155,	// (0x000336ed) list_double2_pane_t1_cp2

0x916b,	// (0x00033703) list_double2_pane_t2_cp2_ParamLimits

0x916b,	// (0x00033703) list_double2_pane_t2_cp2

0x917d,	// (0x00033715) list_double_pane_g1_cp2_ParamLimits

0x917d,	// (0x00033715) list_double_pane_g1_cp2

0x9189,	// (0x00033721) list_double_pane_g2_cp2

0x9191,	// (0x00033729) list_double_pane_t1_cp2_ParamLimits

0x9191,	// (0x00033729) list_double_pane_t1_cp2

0x91a7,	// (0x0003373f) list_double_pane_t2_cp2_ParamLimits

0x91a7,	// (0x0003373f) list_double_pane_t2_cp2

0x91d1,	// (0x00033769) list_single_pane_cp2_g3

0x91e1,	// (0x00033779) list_single_pane_g1_cp2_ParamLimits

0x91e1,	// (0x00033779) list_single_pane_g1_cp2

0x91ed,	// (0x00033785) list_single_pane_g2_cp2

0x91f5,	// (0x0003378d) list_single_pane_t1_cp2_ParamLimits

0x91f5,	// (0x0003378d) list_single_pane_t1_cp2

0x920d,	// (0x000337a5) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x920d,	// (0x000337a5) list_single_large_graphic_pane_g1_cp2

0x9219,	// (0x000337b1) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9219,	// (0x000337b1) list_single_large_graphic_pane_g2_cp2

0x9225,	// (0x000337bd) list_single_large_graphic_pane_g3_cp2

0x922d,	// (0x000337c5) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x922d,	// (0x000337c5) list_single_large_graphic_pane_g4_cp1

0x9247,	// (0x000337df) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9247,	// (0x000337df) list_single_large_graphic_pane_t1_cp2

0xa77f,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa77f,	// (0x00034d17) list_single_graphic_heading_pane_g1_cp2

0xa74c,	// (0x00034ce4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa74c,	// (0x00034ce4) list_single_graphic_heading_pane_g4_cp2

0x91ed,	// (0x00033785) list_single_graphic_heading_pane_g5_cp2

0xa78b,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa78b,	// (0x00034d23) list_single_graphic_heading_pane_t1_cp2

0xa7a1,	// (0x00034d39) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa7a1,	// (0x00034d39) list_single_graphic_heading_pane_t2_cp2

0xa740,	// (0x00034cd8) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa740,	// (0x00034cd8) list_single_2graphic_pane_g1_cp2

0xa74c,	// (0x00034ce4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa74c,	// (0x00034ce4) list_single_2graphic_pane_g2_cp2

0x91ed,	// (0x00033785) list_single_2graphic_pane_g3_cp2

0xa75d,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa75d,	// (0x00034cf5) list_single_2graphic_pane_g4_cp2

0xa769,	// (0x00034d01) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa769,	// (0x00034d01) list_single_2graphic_pane_t1_cp2

0x7ccb,	// (0x00032263) list_highlight_pane_g10_cp1

0xa30c,	// (0x000348a4) list_highlight_pane_g1_cp1

0xa314,	// (0x000348ac) list_highlight_pane_g2_cp1

0xa31c,	// (0x000348b4) list_highlight_pane_g3_cp1

0xa324,	// (0x000348bc) list_highlight_pane_g4_cp1

0xa32c,	// (0x000348c4) list_highlight_pane_g5_cp1

0xa340,	// (0x000348d8) list_highlight_pane_g6_cp1

0xa348,	// (0x000348e0) list_highlight_pane_g7_cp1

0xa350,	// (0x000348e8) list_highlight_pane_g8_cp1

0xa358,	// (0x000348f0) list_highlight_pane_g9_cp1

0xa22c,	// (0x000347c4) form_field_slider_pane_t3

0xa23a,	// (0x000347d2) form_field_slider_pane_t4

0xa248,	// (0x000347e0) slider_form_pane_ParamLimits

0xa248,	// (0x000347e0) slider_form_pane

0x7cd5,	// (0x0003226d) control_abbreviations

0x7cd5,	// (0x0003226d) control_conventions

0x7cd5,	// (0x0003226d) control_definitions

0x7cd5,	// (0x0003226d) format_table_attribute

0xaa32,	// (0x00034fca) bg_popup_preview_window_pane_g9

0x7cd5,	// (0x0003226d) format_table_data2

0x7cd5,	// (0x0003226d) format_table_data3

0x7cd5,	// (0x0003226d) format_table_data_example

0x0008,

0x7cd5,	// (0x0003226d) intro_purpose

0xf8f5,	// (0x00039e8d) bg_popup_preview_window_pane_g

0x7cd5,	// (0x0003226d) texts_category

0x7cd5,	// (0x0003226d) texts_graphics

0x925d,	// (0x000337f5) text_digital

0x926c,	// (0x00033804) text_primary

0x927b,	// (0x00033813) text_primary_small

0x928a,	// (0x00033822) text_secondary

0x9299,	// (0x00033831) text_title

0xb14b,	// (0x000356e3) bg_passive_tab_pane_g1_cp3_srt

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp3_srt

0xb154,	// (0x000356ec) bg_passive_tab_pane_g3_cp3_srt

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp3_srt_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp3_srt

0xb15d,	// (0x000356f5) tabs_4_active_pane_srt_g1

0xb165,	// (0x000356fd) tabs_4_active_pane_srt_t1_ParamLimits

0xb165,	// (0x000356fd) tabs_4_active_pane_srt_t1

0xb14b,	// (0x000356e3) bg_active_tab_pane_g1_cp3_copy1

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp3_copy1

0xb154,	// (0x000356ec) bg_active_tab_pane_g3_cp3_copy1

0x7db5,	// (0x0003234d) tabs_2_long_active_pane_srt_ParamLimits

0x7db5,	// (0x0003234d) tabs_2_long_active_pane_srt

0x7db5,	// (0x0003234d) tabs_2_long_passive_pane_srt_ParamLimits

0x7db5,	// (0x0003234d) tabs_2_long_passive_pane_srt

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp4_srt

0xae5d,	// (0x000353f5) bg_passive_tab_pane_g1_cp4_srt

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp4_srt

0xae66,	// (0x000353fe) bg_passive_tab_pane_g3_cp4_srt

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp4_srt_ParamLimits

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp4_srt

0xae6f,	// (0x00035407) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6f,	// (0x00035407) tabs_2_long_active_pane_srt_t1

0xae5d,	// (0x000353f5) bg_active_tab_pane_g1_cp4_srt

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp4_srt

0xae66,	// (0x000353fe) bg_active_tab_pane_g3_cp4_srt

0x8030,	// (0x000325c8) tabs_3_long_active_pane_srt_ParamLimits

0x8030,	// (0x000325c8) tabs_3_long_active_pane_srt

0x8030,	// (0x000325c8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8030,	// (0x000325c8) tabs_3_long_passive_pane_cp_srt

0x8030,	// (0x000325c8) tabs_3_long_passive_pane_srt_ParamLimits

0x8030,	// (0x000325c8) tabs_3_long_passive_pane_srt

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp5_srt

0x8f7f,	// (0x00033517) bg_passive_tab_pane_g1_cp5_srt

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp5_srt

0x8f88,	// (0x00033520) bg_passive_tab_pane_g3_cp5_srt

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp5_srt_ParamLimits

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp5_srt

0xae4b,	// (0x000353e3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae4b,	// (0x000353e3) tabs_3_long_active_pane_srt_t1

0x8f7f,	// (0x00033517) bg_active_tab_pane_g1_cp5_srt

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp5_srt

0x8f88,	// (0x00033520) bg_active_tab_pane_g3_cp5_srt

0xae3d,	// (0x000353d5) navi_text_pane_srt_t1

0xae35,	// (0x000353cd) navi_icon_pane_srt_g1

0x9460,	// (0x000339f8) midp_editing_number_pane_srt

0x92a8,	// (0x00033840) midp_ticker_pane_srt

0x9468,	// (0x00033a00) midp_ticker_pane_srt_g1

0x9470,	// (0x00033a08) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x00039d10) midp_ticker_pane_srt_g

0x9478,	// (0x00033a10) midp_ticker_pane_srt_t1

0xae26,	// (0x000353be) midp_editing_number_pane_t1_copy1

0x8805,	// (0x00032d9d) listscroll_midp_pane

0x8805,	// (0x00032d9d) midp_form_pane

0x9312,	// (0x000338aa) midp_info_popup_window_ParamLimits

0x9312,	// (0x000338aa) midp_info_popup_window

0x86cd,	// (0x00032c65) bg_popup_sub_pane_cp50_ParamLimits

0x86cd,	// (0x00032c65) bg_popup_sub_pane_cp50

0x9f44,	// (0x000344dc) listscroll_midp_info_pane_ParamLimits

0x9f44,	// (0x000344dc) listscroll_midp_info_pane

0x9f2c,	// (0x000344c4) listscroll_form_midp_pane_ParamLimits

0x9f2c,	// (0x000344c4) listscroll_form_midp_pane

0x9f38,	// (0x000344d0) scroll_bar_cp050

0x9f0c,	// (0x000344a4) list_midp_pane

0xbbe9,	// (0x00036181) signal_pane_g2_cp

0x9e46,	// (0x000343de) listscroll_midp_info_pane_t1_ParamLimits

0x9e46,	// (0x000343de) listscroll_midp_info_pane_t1

0x9e5e,	// (0x000343f6) listscroll_midp_info_pane_t2_ParamLimits

0x9e5e,	// (0x000343f6) listscroll_midp_info_pane_t2

0x9e9c,	// (0x00034434) listscroll_midp_info_pane_t3_ParamLimits

0x9e9c,	// (0x00034434) listscroll_midp_info_pane_t3

0x9ed6,	// (0x0003446e) listscroll_midp_info_pane_t4_ParamLimits

0x9ed6,	// (0x0003446e) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x00039dc8) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x00039dc8) listscroll_midp_info_pane_t

0x8791,	// (0x00032d29) scroll_pane_cp21

0x9de4,	// (0x0003437c) form_midp_field_choice_group_pane

0x9ded,	// (0x00034385) form_midp_field_text_pane

0x9e2c,	// (0x000343c4) form_midp_field_time_pane

0x9e34,	// (0x000343cc) form_midp_gauge_slider_pane

0x9e3d,	// (0x000343d5) form_midp_gauge_wait_pane

0x7cd5,	// (0x0003226d) form_midp_image_pane

0x74d5,	// (0x00031a6d) list_single_midp_pane_ParamLimits

0x74d5,	// (0x00031a6d) list_single_midp_pane

0x9d9c,	// (0x00034334) form_midp_field_text_pane_t1

0x9b66,	// (0x000340fe) input_focus_pane_cp050

0x9dd3,	// (0x0003436b) list_midp_form_text_pane

0x9d6b,	// (0x00034303) form_midp_field_choice_group_pane_t1

0x9d79,	// (0x00034311) input_focus_pane_cp051

0x9d8d,	// (0x00034325) list_midp_choice_pane

0x7cd5,	// (0x0003226d) status_idle_pane

0x9d4f,	// (0x000342e7) form_midp_field_time_pane_t1

0x7ccb,	// (0x00032263) wait_anim_pane_g2_copy1

0x9d5d,	// (0x000342f5) form_midp_field_time_pane_t2

0x0001,

0x93c0,	// (0x00033958) aid_navinavi_width_2_pane

0xf82b,	// (0x00039dc3) form_midp_field_time_pane_t

0x7cd5,	// (0x0003226d) input_focus_pane_cp052

0x7cd5,	// (0x0003226d) bg_input_focus_pane_cp040

0x9d0f,	// (0x000342a7) form_midp_gauge_slider_pane_t1

0x9d1d,	// (0x000342b5) form_midp_gauge_slider_pane_t2

0x9d2b,	// (0x000342c3) form_midp_gauge_slider_pane_t3

0x9d39,	// (0x000342d1) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x00039dba) form_midp_gauge_slider_pane_t

0x9d47,	// (0x000342df) form_midp_slider_pane

0x7db5,	// (0x0003234d) bg_input_focus_pane_cp041_ParamLimits

0x7db5,	// (0x0003234d) bg_input_focus_pane_cp041

0x9cdc,	// (0x00034274) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cdc,	// (0x00034274) form_midp_gauge_wait_pane_t1

0x9cee,	// (0x00034286) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cee,	// (0x00034286) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x00039db5) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x00039db5) form_midp_gauge_wait_pane_t

0x9d00,	// (0x00034298) form_midp_wait_pane_ParamLimits

0x9d00,	// (0x00034298) form_midp_wait_pane

0x9ca6,	// (0x0003423e) form_midp_image_pane_g1

0x9caf,	// (0x00034247) form_midp_image_pane_t1

0x9cbe,	// (0x00034256) form_midp_image_pane_t2

0x9ccd,	// (0x00034265) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x00039dae) form_midp_image_pane_t

0x9c9d,	// (0x00034235) list_single_midp_pane_g1

0x74c6,	// (0x00031a5e) list_single_midp_pane_t1

0x9c75,	// (0x0003420d) list_midp_form_item_pane_ParamLimits

0x9c75,	// (0x0003420d) list_midp_form_item_pane

0x9368,	// (0x00033900) list_midp_form_item_pane_t1

0x9377,	// (0x0003390f) midp_ticker_pane_g1

0x9383,	// (0x0003391b) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x00039cf6) midp_ticker_pane_g

0x938f,	// (0x00033927) midp_ticker_pane_t1

0xb077,	// (0x0003560f) midp_editing_number_pane_t1

0xb055,	// (0x000355ed) midp_editing_number_pane

0xb064,	// (0x000355fc) midp_ticker_pane

0xae16,	// (0x000353ae) ai_message_heading_pane

0x7cd5,	// (0x0003226d) bg_popup_window_pane_cp14

0xae1e,	// (0x000353b6) listscroll_ai_message_pane

0xada0,	// (0x00035338) ai_message_heading_pane_g1_ParamLimits

0xada0,	// (0x00035338) ai_message_heading_pane_g1

0xadac,	// (0x00035344) ai_message_heading_pane_g2_ParamLimits

0xadac,	// (0x00035344) ai_message_heading_pane_g2

0xadb8,	// (0x00035350) ai_message_heading_pane_g3_ParamLimits

0xadb8,	// (0x00035350) ai_message_heading_pane_g3

0xadc4,	// (0x0003535c) ai_message_heading_pane_g4_ParamLimits

0xadc4,	// (0x0003535c) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x00039eef) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x00039eef) ai_message_heading_pane_g

0xadd0,	// (0x00035368) ai_message_heading_pane_t1_ParamLimits

0xadd0,	// (0x00035368) ai_message_heading_pane_t1

0xadea,	// (0x00035382) ai_message_heading_pane_t2_ParamLimits

0xadea,	// (0x00035382) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x00039ef8) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x00039ef8) ai_message_heading_pane_t

0xadfc,	// (0x00035394) bg_popup_heading_pane_cp1_ParamLimits

0xadfc,	// (0x00035394) bg_popup_heading_pane_cp1

0xad8e,	// (0x00035326) list_ai_message_pane_ParamLimits

0xad8e,	// (0x00035326) list_ai_message_pane

0x8791,	// (0x00032d29) scroll_pane_cp10

0xad2a,	// (0x000352c2) list_ai_message_pane_g1

0xad32,	// (0x000352ca) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x00039ecc) list_ai_message_pane_g

0xad3a,	// (0x000352d2) list_ai_message_pane_t1_ParamLimits

0xad3a,	// (0x000352d2) list_ai_message_pane_t1

0xad4f,	// (0x000352e7) list_ai_message_pane_t2_ParamLimits

0xad4f,	// (0x000352e7) list_ai_message_pane_t2

0xad64,	// (0x000352fc) list_ai_message_pane_t3_ParamLimits

0xad64,	// (0x000352fc) list_ai_message_pane_t3

0xad79,	// (0x00035311) list_ai_message_pane_t4_ParamLimits

0xad79,	// (0x00035311) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x00039ed1) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x00039ed1) list_ai_message_pane_t

0xad15,	// (0x000352ad) cell_ai_soft_ind_pane_ParamLimits

0xad15,	// (0x000352ad) cell_ai_soft_ind_pane

0x93a1,	// (0x00033939) cell_ai_soft_ind_pane_g1_ParamLimits

0x93a1,	// (0x00033939) cell_ai_soft_ind_pane_g1

0x7cd5,	// (0x0003226d) grid_highlight_cp1

0x93ae,	// (0x00033946) text_secondary_cp56_ParamLimits

0x93ae,	// (0x00033946) text_secondary_cp56

0xacea,	// (0x00035282) example_general_pane_ParamLimits

0xacea,	// (0x00035282) example_general_pane

0xacf6,	// (0x0003528e) example_parent_pane_g1_ParamLimits

0xacf6,	// (0x0003528e) example_parent_pane_g1

0xad02,	// (0x0003529a) example_parent_pane_t1_ParamLimits

0xad02,	// (0x0003529a) example_parent_pane_t1

0x5e0f,	// (0x000303a7) popup_preview_text_window_ParamLimits

0x5e0f,	// (0x000303a7) popup_preview_text_window

0x91d9,	// (0x00033771) list_single_pane_cp2_g4

0x80e6,	// (0x0003267e) bg_popup_preview_window_pane_ParamLimits

0x80e6,	// (0x0003267e) bg_popup_preview_window_pane

0xaa3a,	// (0x00034fd2) popup_preview_text_window_t1_ParamLimits

0xaa3a,	// (0x00034fd2) popup_preview_text_window_t1

0xaa58,	// (0x00034ff0) popup_preview_text_window_t2_ParamLimits

0xaa58,	// (0x00034ff0) popup_preview_text_window_t2

0xaaa1,	// (0x00035039) popup_preview_text_window_t3_ParamLimits

0xaaa1,	// (0x00035039) popup_preview_text_window_t3

0xaae6,	// (0x0003507e) popup_preview_text_window_t4_ParamLimits

0xaae6,	// (0x0003507e) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x00039ea0) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x00039ea0) popup_preview_text_window_t

0xab64,	// (0x000350fc) scroll_pane_cp11

0x9af2,	// (0x0003408a) bg_popup_preview_window_pane_g1

0xa9fa,	// (0x00034f92) bg_popup_preview_window_pane_g2

0xaa02,	// (0x00034f9a) bg_popup_preview_window_pane_g3

0xaa0a,	// (0x00034fa2) bg_popup_preview_window_pane_g4

0xaa12,	// (0x00034faa) bg_popup_preview_window_pane_g5

0xaa1a,	// (0x00034fb2) bg_popup_preview_window_pane_g6

0xaa22,	// (0x00034fba) bg_popup_preview_window_pane_g7

0xaa2a,	// (0x00034fc2) bg_popup_preview_window_pane_g8

0x4956,	// (0x0002eeee) aid_popup_width_pane

0x5ded,	// (0x00030385) popup_midp_note_alarm_window_ParamLimits

0x5ded,	// (0x00030385) popup_midp_note_alarm_window

0x8615,	// (0x00032bad) data_form_pane_ParamLimits

0x5338,	// (0x0002f8d0) form_field_data_pane_g1

0x5342,	// (0x0002f8da) form_field_data_pane_t1_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_ParamLimits

0x535a,	// (0x0002f8f2) data_form_wide_pane_ParamLimits

0x536b,	// (0x0002f903) form_field_data_wide_pane_g1

0x5377,	// (0x0002f90f) form_field_data_wide_pane_t1_ParamLimits

0x8392,	// (0x0003292a) input_focus_pane_cp6_ParamLimits

0x873e,	// (0x00032cd6) input_popup_find_pane_g1_ParamLimits

0x873e,	// (0x00032cd6) input_popup_find_pane_g1

0x5599,	// (0x0002fb31) aid_navi_side_left_pane

0x55ae,	// (0x0002fb46) aid_navi_side_right_pane

0xa413,	// (0x000349ab) bg_popup_window_pane_cp30_ParamLimits

0xa413,	// (0x000349ab) bg_popup_window_pane_cp30

0xa48d,	// (0x00034a25) popup_midp_note_alarm_window_g1_ParamLimits

0xa48d,	// (0x00034a25) popup_midp_note_alarm_window_g1

0xa4bd,	// (0x00034a55) popup_midp_note_alarm_window_t1_ParamLimits

0xa4bd,	// (0x00034a55) popup_midp_note_alarm_window_t1

0xa55e,	// (0x00034af6) popup_midp_note_alarm_window_t2_ParamLimits

0xa55e,	// (0x00034af6) popup_midp_note_alarm_window_t2

0xa60c,	// (0x00034ba4) popup_midp_note_alarm_window_t3_ParamLimits

0xa60c,	// (0x00034ba4) popup_midp_note_alarm_window_t3

0xa63e,	// (0x00034bd6) popup_midp_note_alarm_window_t4_ParamLimits

0xa63e,	// (0x00034bd6) popup_midp_note_alarm_window_t4

0xa664,	// (0x00034bfc) popup_midp_note_alarm_window_t5_ParamLimits

0xa664,	// (0x00034bfc) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x00039e3d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x00039e3d) popup_midp_note_alarm_window_t

0xa710,	// (0x00034ca8) wait_bar_pane_cp1_ParamLimits

0xa710,	// (0x00034ca8) wait_bar_pane_cp1

0x7cd5,	// (0x0003226d) wait_anim_pane_copy1

0x7cd5,	// (0x0003226d) wait_border_pane_copy1

0xa0ed,	// (0x00034685) wait_border_pane_g1_copy1

0x5391,	// (0x0002f929) form_field_popup_pane_g1

0x5399,	// (0x0002f931) form_field_popup_pane_t1_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_cp7_ParamLimits

0x864f,	// (0x00032be7) list_form_pane_ParamLimits

0x53b1,	// (0x0002f949) form_field_popup_wide_pane_g1

0x53b9,	// (0x0002f951) form_field_popup_wide_pane_t1_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_cp8_ParamLimits

0x865b,	// (0x00032bf3) list_form_wide_pane_ParamLimits

0xb1d7,	// (0x0003576f) aid_size_cell_graphic_pane

0x5443,	// (0x0002f9db) data_form_pane_t1_ParamLimits

0x752f,	// (0x00031ac7) data_form_wide_pane_t1_ParamLimits

0x96bf,	// (0x00033c57) bg_status_flat_pane

0x7d15,	// (0x000322ad) title_pane_t1_ParamLimits

0x7d7d,	// (0x00032315) title_pane_t2_ParamLimits

0x7da3,	// (0x0003233b) title_pane_t3_ParamLimits

0xf55d,	// (0x00039af5) title_pane_t_ParamLimits

0x8c0c,	// (0x000331a4) level_1_signal_ParamLimits

0x8c1e,	// (0x000331b6) level_2_signal_ParamLimits

0x8c31,	// (0x000331c9) level_3_signal_ParamLimits

0x8c44,	// (0x000331dc) level_4_signal_ParamLimits

0x8c57,	// (0x000331ef) level_5_signal_ParamLimits

0x8c6a,	// (0x00033202) level_6_signal_ParamLimits

0x8c7d,	// (0x00033215) level_7_signal_ParamLimits

0x8c0c,	// (0x000331a4) level_1_battery_ParamLimits

0x8c1e,	// (0x000331b6) level_2_battery_ParamLimits

0x8c31,	// (0x000331c9) level_3_battery_ParamLimits

0x8c44,	// (0x000331dc) level_4_battery_ParamLimits

0x8c57,	// (0x000331ef) level_5_battery_ParamLimits

0x8c6a,	// (0x00033202) level_6_battery_ParamLimits

0x8c7d,	// (0x00033215) level_7_battery_ParamLimits

0xa30c,	// (0x000348a4) bg_status_flat_pane_g1

0xa314,	// (0x000348ac) bg_status_flat_pane_g2

0xa31c,	// (0x000348b4) bg_status_flat_pane_g3

0xa324,	// (0x000348bc) bg_status_flat_pane_g4

0xa32c,	// (0x000348c4) bg_status_flat_pane_g5

0xa340,	// (0x000348d8) bg_status_flat_pane_g6

0xa348,	// (0x000348e0) bg_status_flat_pane_g7

0x7dcb,	// (0x00032363) tabs_3_active_pane_t1_ParamLimits

0x7dcb,	// (0x00032363) tabs_3_passive_pane_t1_ParamLimits

0x7de5,	// (0x0003237d) tabs_4_active_pane_t1_ParamLimits

0x7de5,	// (0x0003237d) tabs_4_1_passive_pane_t1_ParamLimits

0x87d2,	// (0x00032d6a) tabs_2_active_pane_t1_ParamLimits

0x87d2,	// (0x00032d6a) tabs_2_passive_pane_t1_ParamLimits

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp4_ParamLimits

0x87f2,	// (0x00032d8a) tabs_2_long_active_pane_t1_ParamLimits

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp4_ParamLimits

0x60c8,	// (0x00030660) list_single_midp_graphic_pane_t1_ParamLimits

0x87e4,	// (0x00032d7c) bg_active_tab_pane_cp5_ParamLimits

0x8811,	// (0x00032da9) tabs_3_long_active_pane_t1_ParamLimits

0x8805,	// (0x00032d9d) bg_passive_tab_pane_cp5_ParamLimits

0x60c8,	// (0x00030660) list_single_midp_graphic_pane_t1

0x96bf,	// (0x00033c57) bg_status_flat_pane_ParamLimits

0x9782,	// (0x00033d1a) indicator_pane_cp2_ParamLimits

0x9782,	// (0x00033d1a) indicator_pane_cp2

0x98ad,	// (0x00033e45) navi_pane_srt_ParamLimits

0x98ad,	// (0x00033e45) navi_pane_srt

0x98d1,	// (0x00033e69) popup_clock_digital_analogue_window_cp1

0x7e92,	// (0x0003242a) indicator_pane_t1

0x92a8,	// (0x00033840) copy_highlight_pane

0x92a8,	// (0x00033840) cursor_graphics_pane

0x92a8,	// (0x00033840) graphic_within_text_pane

0x92a8,	// (0x00033840) link_highlight_pane

0xab27,	// (0x000350bf) popup_preview_text_window_t5_ParamLimits

0xab27,	// (0x000350bf) popup_preview_text_window_t5

0x93c8,	// (0x00033960) cursor_digital_pane

0x93c8,	// (0x00033960) cursor_primary_pane

0x93d9,	// (0x00033971) cursor_primary_small_pane

0x93e1,	// (0x00033979) cursor_secondary_pane

0x93e9,	// (0x00033981) cursor_title_pane

0x93c8,	// (0x00033960) link_highlight_digital_pane

0x93d0,	// (0x00033968) link_highlight_primary_pane

0x93d9,	// (0x00033971) link_highlight_primary_small_pane

0x93e1,	// (0x00033979) link_highlight_secondary_pane

0x93e9,	// (0x00033981) link_highlight_title_pane

0x93c8,	// (0x00033960) copy_highlight_digital_pane

0x93c8,	// (0x00033960) copy_highlight_primary_pane

0x93d9,	// (0x00033971) copy_highlight_primary_small_pane

0x93e1,	// (0x00033979) copy_highlight_secondary_pane

0x93e9,	// (0x00033981) copy_highlight_title_pane

0x93e1,	// (0x00033979) graphic_text_digital_pane

0xa3b6,	// (0x0003494e) graphic_text_primary_pane

0xa3bf,	// (0x00034957) graphic_text_primary_small_pane

0x93d9,	// (0x00033971) graphic_text_secondary_pane

0x93c8,	// (0x00033960) graphic_text_title_pane

0x93f1,	// (0x00033989) cursor_primary_pane_g1

0xa3a8,	// (0x00034940) cursor_text_primary_t1

0xa390,	// (0x00034928) cursor_primary_small_pane_g1

0xa39a,	// (0x00034932) cursor_text_primary_small_t1

0xa378,	// (0x00034910) cursor_primary_small_pane_g1_copy1

0xa382,	// (0x0003491a) cursor_text_primary_small_t1_copy1

0xa360,	// (0x000348f8) cursor_text_title_t1

0xa36e,	// (0x00034906) cursor_title_pane_g1

0x93f1,	// (0x00033989) cursor_digital_pane_g1

0x93fb,	// (0x00033993) cursor_text_digital_t1

0x9420,	// (0x000339b8) link_highlight_primary_pane_g1

0xa2fd,	// (0x00034895) link_highlight_primary_pane_t1

0x9409,	// (0x000339a1) link_highlight_primary_small_pane_g1

0x9411,	// (0x000339a9) link_highlight_primary_small_pane_t1

0x9420,	// (0x000339b8) link_highlight_secondary_pane_g1

0x9428,	// (0x000339c0) link_highlight_secondary_pane_t1

0xa271,	// (0x00034809) link_highlight_title_pane_g1

0xa279,	// (0x00034811) link_highlight_title_pane_t1

0xa25a,	// (0x000347f2) link_highlight_digital_pane_g1

0xa262,	// (0x000347fa) link_highlight_digital_pane_t1

0xa132,	// (0x000346ca) copy_highlight_primary_pane_g1

0xa13a,	// (0x000346d2) copy_highlight_primary_pane_t1

0xa10c,	// (0x000346a4) copy_highlight_primary_small_pane_g1

0xa123,	// (0x000346bb) copy_highlight_primary_small_pane_t1

0x9437,	// (0x000339cf) copy_highlight_secondary_pane_g1

0x943f,	// (0x000339d7) copy_highlight_secondary_pane_t1

0xa10c,	// (0x000346a4) copy_highlight_title_pane_g1

0xa114,	// (0x000346ac) copy_highlight_title_pane_t1

0xa132,	// (0x000346ca) copy_highlight_digital_pane_g1

0xb3e3,	// (0x0003597b) copy_highlight_digital_pane_t1

0xb337,	// (0x000358cf) graphic_text_primary_pane_g1

0xb3c7,	// (0x0003595f) graphic_text_primary_pane_t1

0xb3d5,	// (0x0003596d) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x00039f6c) graphic_text_primary_pane_t

0xb3a3,	// (0x0003593b) graphic_text_primary_small_pane_g1

0xb3ab,	// (0x00035943) graphic_text_primary_small_pane_t1

0xb3b9,	// (0x00035951) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x00039f67) graphic_text_primary_small_pane_t

0xb37f,	// (0x00035917) graphic_text_secondary_pane_g1

0xb387,	// (0x0003591f) graphic_text_secondary_pane_t1

0xb395,	// (0x0003592d) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x00039f62) graphic_text_secondary_pane_t

0xb35b,	// (0x000358f3) graphic_text_title_pane_g1

0xb363,	// (0x000358fb) graphic_text_title_pane_t1

0xb371,	// (0x00035909) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x00039f5d) graphic_text_title_pane_t

0xb337,	// (0x000358cf) graphic_text_digital_pane_g1

0xb33f,	// (0x000358d7) graphic_text_digital_pane_t1

0xb34d,	// (0x000358e5) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x00039f58) graphic_text_digital_pane_t

0x7db5,	// (0x0003234d) navi_icon_pane_srt_ParamLimits

0x7db5,	// (0x0003234d) navi_icon_pane_srt

0x7cd5,	// (0x0003226d) navi_midp_pane_srt

0x7cd5,	// (0x0003226d) navi_navi_pane_srt

0x7db5,	// (0x0003234d) navi_text_pane_srt_ParamLimits

0x7db5,	// (0x0003234d) navi_text_pane_srt

0xb302,	// (0x0003589a) navi_navi_icon_text_pane_srt

0xb30a,	// (0x000358a2) navi_navi_pane_srt_g1_ParamLimits

0xb30a,	// (0x000358a2) navi_navi_pane_srt_g1

0xb31c,	// (0x000358b4) navi_navi_pane_srt_g2_ParamLimits

0xb31c,	// (0x000358b4) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x00039f53) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x00039f53) navi_navi_pane_srt_g

0xb32e,	// (0x000358c6) navi_navi_tabs_pane_srt

0xb302,	// (0x0003589a) navi_navi_text_pane_srt

0xb302,	// (0x0003589a) navi_navi_volume_pane_srt

0xb2f3,	// (0x0003588b) navi_navi_text_pane_srt_t1

0x6442,	// (0x000309da) navi_navi_volume_pane_srt_g1

0x644a,	// (0x000309e2) volume_small_pane_srt_ParamLimits

0x644a,	// (0x000309e2) volume_small_pane_srt

0x5879,	// (0x0002fe11) volume_small_pane_srt_g1_ParamLimits

0x5879,	// (0x0002fe11) volume_small_pane_srt_g1

0x5889,	// (0x0002fe21) volume_small_pane_srt_g2_ParamLimits

0x5889,	// (0x0002fe21) volume_small_pane_srt_g2

0x589a,	// (0x0002fe32) volume_small_pane_srt_g3_ParamLimits

0x589a,	// (0x0002fe32) volume_small_pane_srt_g3

0x58ab,	// (0x0002fe43) volume_small_pane_srt_g4_ParamLimits

0x58ab,	// (0x0002fe43) volume_small_pane_srt_g4

0x58bc,	// (0x0002fe54) volume_small_pane_srt_g5_ParamLimits

0x58bc,	// (0x0002fe54) volume_small_pane_srt_g5

0x58cd,	// (0x0002fe65) volume_small_pane_srt_g6_ParamLimits

0x58cd,	// (0x0002fe65) volume_small_pane_srt_g6

0x58de,	// (0x0002fe76) volume_small_pane_srt_g7_ParamLimits

0x58de,	// (0x0002fe76) volume_small_pane_srt_g7

0x58ef,	// (0x0002fe87) volume_small_pane_srt_g8_ParamLimits

0x58ef,	// (0x0002fe87) volume_small_pane_srt_g8

0x5900,	// (0x0002fe98) volume_small_pane_srt_g9_ParamLimits

0x5900,	// (0x0002fe98) volume_small_pane_srt_g9

0x5911,	// (0x0002fea9) volume_small_pane_srt_g10_ParamLimits

0x5911,	// (0x0002fea9) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x00039cfb) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x00039cfb) volume_small_pane_srt_g

0x818f,	// (0x00032727) query_popup_data_pane_cp2

0xb2d9,	// (0x00035871) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2d9,	// (0x00035871) navi_navi_icon_text_pane_srt_t1

0xa3b6,	// (0x0003494e) navi_tabs_2_long_pane_srt

0xa3b6,	// (0x0003494e) navi_tabs_2_pane_srt

0xa3b6,	// (0x0003494e) navi_tabs_3_long_pane_srt

0xa3b6,	// (0x0003494e) navi_tabs_3_pane_srt

0xa3b6,	// (0x0003494e) navi_tabs_4_pane_srt

0x6422,	// (0x000309ba) tabs_2_active_pane_srt_ParamLimits

0x6422,	// (0x000309ba) tabs_2_active_pane_srt

0x6432,	// (0x000309ca) tabs_2_passive_pane_srt_ParamLimits

0x6432,	// (0x000309ca) tabs_2_passive_pane_srt

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp1_srt_ParamLimits

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp1_srt

0xb263,	// (0x000357fb) bg_passive_tab_pane_g1_cp1_srt

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp1_srt

0xb26c,	// (0x00035804) bg_passive_tab_pane_g3_cp1_srt

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp1_srt_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp1_srt

0xb275,	// (0x0003580d) tabs_2_active_pane_srt_g1

0xb27d,	// (0x00035815) tabs_2_active_pane_srt_t1_ParamLimits

0xb27d,	// (0x00035815) tabs_2_active_pane_srt_t1

0xb263,	// (0x000357fb) bg_active_tab_pane_g1_cp1_srt

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp1_srt

0xb26c,	// (0x00035804) bg_active_tab_pane_g3_cp1_srt

0x63ef,	// (0x00030987) tabs_3_active_pane_srt_ParamLimits

0x63ef,	// (0x00030987) tabs_3_active_pane_srt

0x6400,	// (0x00030998) tabs_3_passive_pane_cp_srt_ParamLimits

0x6400,	// (0x00030998) tabs_3_passive_pane_cp_srt

0x6411,	// (0x000309a9) tabs_3_passive_pane_srt_ParamLimits

0x6411,	// (0x000309a9) tabs_3_passive_pane_srt

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp2_srt_ParamLimits

0x95e8,	// (0x00033b80) bg_passive_tab_pane_cp2_srt

0x944e,	// (0x000339e6) bg_passive_tab_pane_g1_cp2_srt

0x8ef5,	// (0x0003348d) bg_passive_tab_pane_g2_cp2_srt

0x9457,	// (0x000339ef) bg_passive_tab_pane_g3_cp2_srt

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp2_srt_ParamLimits

0x7db5,	// (0x0003234d) bg_active_tab_pane_cp2_srt

0xb249,	// (0x000357e1) tabs_3_active_pane_srt_g1

0xb251,	// (0x000357e9) tabs_3_active_pane_srt_t1_ParamLimits

0xb251,	// (0x000357e9) tabs_3_active_pane_srt_t1

0x944e,	// (0x000339e6) bg_active_tab_pane_g1_cp2_srt

0x8ef5,	// (0x0003348d) bg_active_tab_pane_g2_cp2_srt

0x9457,	// (0x000339ef) bg_active_tab_pane_g3_cp2_srt

0x63a7,	// (0x0003093f) tabs_4_active_pane_srt_ParamLimits

0x63a7,	// (0x0003093f) tabs_4_active_pane_srt

0x63b9,	// (0x00030951) tabs_4_passive_pane_cp2_srt_ParamLimits

0x63b9,	// (0x00030951) tabs_4_passive_pane_cp2_srt

0x5a76,	// (0x0003000e) aid_size_cell_toolbar

0x8805,	// (0x00032d9d) main_idle_act_pane_ParamLimits

0x5c23,	// (0x000301bb) popup_large_graphic_colour_window_ParamLimits

0x5f8a,	// (0x00030522) popup_toolbar_window_ParamLimits

0x5f8a,	// (0x00030522) popup_toolbar_window

0xb086,	// (0x0003561e) list_single_graphic_2heading_pane_ParamLimits

0xb086,	// (0x0003561e) list_single_graphic_2heading_pane

0x89c1,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane

0x89d3,	// (0x00032f6b) aid_size_cell_apps_grid_prt_pane

0x95e8,	// (0x00033b80) bg_wml_button_pane_cp1_ParamLimits

0x95e8,	// (0x00033b80) bg_wml_button_pane_cp1

0x9d9c,	// (0x00034334) form_midp_field_text_pane_t1_ParamLimits

0x9b66,	// (0x000340fe) input_focus_pane_cp050_ParamLimits

0x9dd3,	// (0x0003436b) list_midp_form_text_pane_ParamLimits

0x9d79,	// (0x00034311) input_focus_pane_cp051_ParamLimits

0x9d8d,	// (0x00034325) list_midp_choice_pane_ParamLimits

0x9c1f,	// (0x000341b7) list_single_2graphic_pane_cp3_ParamLimits

0x9c1f,	// (0x000341b7) list_single_2graphic_pane_cp3

0x9c43,	// (0x000341db) list_single_midp_graphic_pane_ParamLimits

0x9c43,	// (0x000341db) list_single_midp_graphic_pane

0x48de,	// (0x0002ee76) list_single_graphic_2heading_pane_g1_ParamLimits

0x48de,	// (0x0002ee76) list_single_graphic_2heading_pane_g1

0x48ea,	// (0x0002ee82) list_single_graphic_2heading_pane_g4_ParamLimits

0x48ea,	// (0x0002ee82) list_single_graphic_2heading_pane_g4

0x48f6,	// (0x0002ee8e) list_single_graphic_2heading_pane_g5_ParamLimits

0x48f6,	// (0x0002ee8e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x00039d4e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x00039d4e) list_single_graphic_2heading_pane_g

0x4902,	// (0x0002ee9a) list_single_graphic_2heading_pane_t1_ParamLimits

0x4902,	// (0x0002ee9a) list_single_graphic_2heading_pane_t1

0x4916,	// (0x0002eeae) list_single_graphic_2heading_pane_t2_ParamLimits

0x4916,	// (0x0002eeae) list_single_graphic_2heading_pane_t2

0x4932,	// (0x0002eeca) list_single_graphic_2heading_pane_t3_ParamLimits

0x4932,	// (0x0002eeca) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x00039d55) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x00039d55) list_single_graphic_2heading_pane_t

0x9a30,	// (0x00033fc8) bg_popup_sub_pane_cp2

0x9a5a,	// (0x00033ff2) grid_toobar_pane

0x6037,	// (0x000305cf) cell_toolbar_pane_ParamLimits

0x6037,	// (0x000305cf) cell_toolbar_pane

0x9a96,	// (0x0003402e) cell_toolbar_pane_g1_ParamLimits

0x9a96,	// (0x0003402e) cell_toolbar_pane_g1

0x9aaa,	// (0x00034042) cell_toolbar_pane_g2_ParamLimits

0x9aaa,	// (0x00034042) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x00039d63) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x00039d63) cell_toolbar_pane_g

0x9acc,	// (0x00034064) grid_highlight_pane_cp2_ParamLimits

0x9acc,	// (0x00034064) grid_highlight_pane_cp2

0x9ae6,	// (0x0003407e) toolbar_button_pane

0x9af2,	// (0x0003408a) toolbar_button_pane_g1

0x9afa,	// (0x00034092) toolbar_button_pane_g2

0x9b02,	// (0x0003409a) toolbar_button_pane_g3

0x9b0a,	// (0x000340a2) toolbar_button_pane_g4

0x9b12,	// (0x000340aa) toolbar_button_pane_g5

0x9b1a,	// (0x000340b2) toolbar_button_pane_g6

0x9b22,	// (0x000340ba) toolbar_button_pane_g7

0x9b2a,	// (0x000340c2) toolbar_button_pane_g8

0x9b32,	// (0x000340ca) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x00039d68) toolbar_button_pane_g

0x606f,	// (0x00030607) list_single_2graphic_pane_g1_cp3_ParamLimits

0x606f,	// (0x00030607) list_single_2graphic_pane_g1_cp3

0x607b,	// (0x00030613) list_single_2graphic_pane_g2_cp3_ParamLimits

0x607b,	// (0x00030613) list_single_2graphic_pane_g2_cp3

0x608c,	// (0x00030624) list_single_2graphic_pane_g3_cp3

0x6094,	// (0x0003062c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6094,	// (0x0003062c) list_single_2graphic_pane_g4_cp3

0x60a0,	// (0x00030638) list_single_2graphic_pane_t1_cp3_ParamLimits

0x60a0,	// (0x00030638) list_single_2graphic_pane_t1_cp3

0x60bc,	// (0x00030654) list_single_midp_graphic_pane_g2_ParamLimits

0x60bc,	// (0x00030654) list_single_midp_graphic_pane_g2

0x5a7e,	// (0x00030016) aid_zoom_text_primary

0x48c2,	// (0x0002ee5a) aid_zoom_text_secondary

0x950b,	// (0x00033aa3) status_small_pane_g7_ParamLimits

0x950b,	// (0x00033aa3) status_small_pane_g7

0x952e,	// (0x00033ac6) status_small_pane_t1_ParamLimits

0x7cec,	// (0x00032284) title_pane_g2

0x0003,

0xf554,	// (0x00039aec) title_pane_g

0x8230,	// (0x000327c8) aid_size_cell_colour_1_pane_ParamLimits

0x8230,	// (0x000327c8) aid_size_cell_colour_1_pane

0x8244,	// (0x000327dc) aid_size_cell_colour_2_pane_ParamLimits

0x8244,	// (0x000327dc) aid_size_cell_colour_2_pane

0x8258,	// (0x000327f0) aid_size_cell_colour_3_pane_ParamLimits

0x8258,	// (0x000327f0) aid_size_cell_colour_3_pane

0x826c,	// (0x00032804) aid_size_cell_colour_4_pane_ParamLimits

0x826c,	// (0x00032804) aid_size_cell_colour_4_pane

0x54d6,	// (0x0002fa6e) title_pane_stacon_g1_ParamLimits

0x54d6,	// (0x0002fa6e) title_pane_stacon_g1

0xa191,	// (0x00034729) popup_note_wait_window_g3_ParamLimits

0xa191,	// (0x00034729) popup_note_wait_window_g3

0xa207,	// (0x0003479f) popup_note_wait_window_t5_ParamLimits

0xa207,	// (0x0003479f) popup_note_wait_window_t5

0x7cd5,	// (0x0003226d) main_feb_china_hwr_fs_writing_pane

0x5b08,	// (0x000300a0) popup_feb_china_hwr_fs_window_ParamLimits

0x5b08,	// (0x000300a0) popup_feb_china_hwr_fs_window

0x60de,	// (0x00030676) aid_size_cell_hwr_fs_ParamLimits

0x60de,	// (0x00030676) aid_size_cell_hwr_fs

0x9b66,	// (0x000340fe) bg_popup_sub_pane_cp3_ParamLimits

0x9b66,	// (0x000340fe) bg_popup_sub_pane_cp3

0x60f3,	// (0x0003068b) grid_hwr_fs_pane_ParamLimits

0x60f3,	// (0x0003068b) grid_hwr_fs_pane

0x610b,	// (0x000306a3) linegrid_hwr_fs_pane_ParamLimits

0x610b,	// (0x000306a3) linegrid_hwr_fs_pane

0x611b,	// (0x000306b3) cell_hwr_fs_pane_ParamLimits

0x611b,	// (0x000306b3) cell_hwr_fs_pane

0x9b72,	// (0x0003410a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9b72,	// (0x0003410a) linegrid_hwr_fs_pane_g1

0x9b7e,	// (0x00034116) linegrid_hwr_fs_pane_g2_ParamLimits

0x9b7e,	// (0x00034116) linegrid_hwr_fs_pane_g2

0x9b90,	// (0x00034128) linegrid_hwr_fs_pane_g3_ParamLimits

0x9b90,	// (0x00034128) linegrid_hwr_fs_pane_g3

0x613d,	// (0x000306d5) linegrid_hwr_fs_pane_g4_ParamLimits

0x613d,	// (0x000306d5) linegrid_hwr_fs_pane_g4

0x6157,	// (0x000306ef) linegrid_hwr_fs_pane_g5_ParamLimits

0x6157,	// (0x000306ef) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x00039d93) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00039d93) linegrid_hwr_fs_pane_g

0x9b9c,	// (0x00034134) cell_hwr_fs_pane_g1_ParamLimits

0x9b9c,	// (0x00034134) cell_hwr_fs_pane_g1

0x9967,	// (0x00033eff) cell_hwr_fs_pane_g2_ParamLimits

0x9967,	// (0x00033eff) cell_hwr_fs_pane_g2

0x9bb2,	// (0x0003414a) cell_hwr_fs_pane_g3_ParamLimits

0x9bb2,	// (0x0003414a) cell_hwr_fs_pane_g3

0x9bbf,	// (0x00034157) cell_hwr_fs_pane_g4_ParamLimits

0x9bbf,	// (0x00034157) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x00039d9e) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x00039d9e) cell_hwr_fs_pane_g

0x616d,	// (0x00030705) cell_hwr_fs_pane_t1

0x7cd5,	// (0x0003226d) grid_highlight_pane_cp6

0x7cd5,	// (0x0003226d) main_idle_act2_pane

0x8778,	// (0x00032d10) aid_inside_area_popup_secondary

0xa84a,	// (0x00034de2) aid_inside_area_window_primary_ParamLimits

0xa84a,	// (0x00034de2) aid_inside_area_window_primary

0xb3f2,	// (0x0003598a) ai2_news_ticker_pane

0xb3fa,	// (0x00035992) aid_size_cell_ai1_link_ParamLimits

0xb3fa,	// (0x00035992) aid_size_cell_ai1_link

0xb414,	// (0x000359ac) popup_ai2_data_window_ParamLimits

0xb414,	// (0x000359ac) popup_ai2_data_window

0xb42a,	// (0x000359c2) popup_ai2_link_window_ParamLimits

0xb42a,	// (0x000359c2) popup_ai2_link_window

0x9b66,	// (0x000340fe) bg_popup_sub_pane_cp4_ParamLimits

0x9b66,	// (0x000340fe) bg_popup_sub_pane_cp4

0xb43e,	// (0x000359d6) grid_ai2_link_pane_ParamLimits

0xb43e,	// (0x000359d6) grid_ai2_link_pane

0xb455,	// (0x000359ed) popup_ai2_link_window_g1_ParamLimits

0xb455,	// (0x000359ed) popup_ai2_link_window_g1

0xb461,	// (0x000359f9) popup_ai2_link_window_g2_ParamLimits

0xb461,	// (0x000359f9) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x00039f71) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x00039f71) popup_ai2_link_window_g

0xb470,	// (0x00035a08) ai2_mp_button_pane

0xb478,	// (0x00035a10) ai2_mp_volume_pane

0x9d79,	// (0x00034311) bg_popup_sub_pane_cp5_ParamLimits

0x9d79,	// (0x00034311) bg_popup_sub_pane_cp5

0xb480,	// (0x00035a18) heading_ai2_gene_pane_ParamLimits

0xb480,	// (0x00035a18) heading_ai2_gene_pane

0xb48c,	// (0x00035a24) list_ai2_gene_pane_ParamLimits

0xb48c,	// (0x00035a24) list_ai2_gene_pane

0xb4d4,	// (0x00035a6c) cell_ai2_link_pane_ParamLimits

0xb4d4,	// (0x00035a6c) cell_ai2_link_pane

0xb4ea,	// (0x00035a82) cell_ai2_link_pane_g1

0x7cd5,	// (0x0003226d) grid_highlight_pane_cp7

0x645f,	// (0x000309f7) ai2_mp_volume_pane_g1

0xb5ba,	// (0x00035b52) ai2_mp_volume_pane_g2

0xb52f,	// (0x00035ac7) list_ai2_gene_pane_t1

0xb5c2,	// (0x00035b5a) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x00039f8a) ai2_mp_volume_pane_g

0x6467,	// (0x000309ff) volume_small_pane_cp3

0xb5ca,	// (0x00035b62) aid_size_cell_ai2_button

0xb5d2,	// (0x00035b6a) grid_ai2_button_pane

0xb5db,	// (0x00035b73) cell_ai2_button_pane_ParamLimits

0xb5db,	// (0x00035b73) cell_ai2_button_pane

0x7ccb,	// (0x00032263) cell_ai2_button_pane_g1

0x7cd5,	// (0x0003226d) grid_highlight_pane_cp8

0xb57a,	// (0x00035b12) ai2_gene_pane_t1_ParamLimits

0xb57a,	// (0x00035b12) ai2_gene_pane_t1

0x5a6c,	// (0x00030004) aid_height_parent_landscape

0xaebd,	// (0x00035455) aid_height_set_list

0xaece,	// (0x00035466) aid_size_parent

0xb1d7,	// (0x0003576f) aid_size_cell_graphic_pane_ParamLimits

0xb49c,	// (0x00035a34) popup_ai2_data_window_g1_ParamLimits

0xb49c,	// (0x00035a34) popup_ai2_data_window_g1

0xb4a8,	// (0x00035a40) ai2_news_ticker_pane_g1

0xb4b0,	// (0x00035a48) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x00039f76) ai2_news_ticker_pane_g

0xb4b8,	// (0x00035a50) ai2_news_ticker_pane_t1

0xb4c6,	// (0x00035a5e) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x00039f7b) ai2_news_ticker_pane_t

0xb4f3,	// (0x00035a8b) heading_ai2_gene_pane_g1

0xb4fb,	// (0x00035a93) heading_ai2_gene_pane_t1_ParamLimits

0xb4fb,	// (0x00035a93) heading_ai2_gene_pane_t1

0xb510,	// (0x00035aa8) list_highlight_pane_cp6

0xb518,	// (0x00035ab0) ai2_gene_pane_ParamLimits

0xb518,	// (0x00035ab0) ai2_gene_pane

0xb53d,	// (0x00035ad5) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x00039f80) list_ai2_gene_pane_t

0xb54b,	// (0x00035ae3) list_highlight_pane_cp8_ParamLimits

0xb54b,	// (0x00035ae3) list_highlight_pane_cp8

0xb55c,	// (0x00035af4) ai2_gene_pane_g1_ParamLimits

0xb55c,	// (0x00035af4) ai2_gene_pane_g1

0xb56e,	// (0x00035b06) ai2_gene_pane_g2_ParamLimits

0xb56e,	// (0x00035b06) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x00039f85) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x00039f85) ai2_gene_pane_g

0x85b7,	// (0x00032b4f) scroll_pane_cp12

0x5a2b,	// (0x0002ffc3) control_pane_t3_ParamLimits

0x5a2b,	// (0x0002ffc3) control_pane_t3

0x951f,	// (0x00033ab7) status_small_pane_g8_ParamLimits

0x951f,	// (0x00033ab7) status_small_pane_g8

0x5bee,	// (0x00030186) popup_find_window_ParamLimits

0x5e01,	// (0x00030399) popup_note_image_window_ParamLimits

0x73e2,	// (0x0003197a) list_double2_graphic_pane_vc_g1_ParamLimits

0x73e2,	// (0x0003197a) list_double2_graphic_pane_vc_g1

0x73ee,	// (0x00031986) list_double2_graphic_pane_vc_g2_ParamLimits

0x73ee,	// (0x00031986) list_double2_graphic_pane_vc_g2

0x73fa,	// (0x00031992) list_double2_graphic_pane_vc_g3_ParamLimits

0x73fa,	// (0x00031992) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x00039d5c) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x00039d5c) list_double2_graphic_pane_vc_g

0x7406,	// (0x0003199e) list_double2_graphic_pane_vc_t1_ParamLimits

0x7406,	// (0x0003199e) list_double2_graphic_pane_vc_t1

0x73ee,	// (0x00031986) list_single_heading_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_single_heading_pane_vc_g1

0x73fa,	// (0x00031992) list_single_heading_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_single_heading_pane_vc_g

0x741c,	// (0x000319b4) list_single_heading_pane_vc_t1_ParamLimits

0x741c,	// (0x000319b4) list_single_heading_pane_vc_t1

0x7434,	// (0x000319cc) list_single_heading_pane_vc_t2_ParamLimits

0x7434,	// (0x000319cc) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x00039d82) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x00039d82) list_single_heading_pane_vc_t

0x7450,	// (0x000319e8) list_setting_number_pane_vc_g1_ParamLimits

0x7450,	// (0x000319e8) list_setting_number_pane_vc_g1

0x745c,	// (0x000319f4) list_setting_number_pane_vc_g2_ParamLimits

0x745c,	// (0x000319f4) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x00039d87) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x00039d87) list_setting_number_pane_vc_g

0x7468,	// (0x00031a00) list_setting_number_pane_vc_t1_ParamLimits

0x7468,	// (0x00031a00) list_setting_number_pane_vc_t1

0x747c,	// (0x00031a14) list_setting_number_pane_vc_t2_ParamLimits

0x747c,	// (0x00031a14) list_setting_number_pane_vc_t2

0x7498,	// (0x00031a30) list_setting_number_pane_vc_t3_ParamLimits

0x7498,	// (0x00031a30) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x00039d8c) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x00039d8c) list_setting_number_pane_vc_t

0x74b6,	// (0x00031a4e) set_value_pane_vc_ParamLimits

0x74b6,	// (0x00031a4e) set_value_pane_vc

0xb086,	// (0x0003561e) list_double2_graphic_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double2_graphic_pane_vc

0xb086,	// (0x0003561e) list_double2_large_graphic_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double2_large_graphic_pane_vc

0xb086,	// (0x0003561e) list_double2_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double2_pane_vc

0xb086,	// (0x0003561e) list_double_graphic_heading_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_graphic_heading_pane_vc

0xb086,	// (0x0003561e) list_double_graphic_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_graphic_pane_vc

0xb086,	// (0x0003561e) list_double_heading_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_heading_pane_vc

0xb086,	// (0x0003561e) list_double_large_graphic_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_large_graphic_pane_vc

0xb086,	// (0x0003561e) list_double_number_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_number_pane_vc

0xb086,	// (0x0003561e) list_double_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_pane_vc

0xb086,	// (0x0003561e) list_double_time_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_double_time_pane_vc

0xb086,	// (0x0003561e) list_setting_number_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_setting_number_pane_vc

0xb086,	// (0x0003561e) list_setting_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_setting_pane_vc

0xb086,	// (0x0003561e) list_single_graphic_heading_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_single_graphic_heading_pane_vc

0xb086,	// (0x0003561e) list_single_heading_pane_vc_ParamLimits

0xb086,	// (0x0003561e) list_single_heading_pane_vc

0x758f,	// (0x00031b27) list_single_number_heading_pane_vc_ParamLimits

0x758f,	// (0x00031b27) list_single_number_heading_pane_vc

0x73e2,	// (0x0003197a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x73e2,	// (0x0003197a) list_double_graphic_heading_pane_vc_g1

0x73ee,	// (0x00031986) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x73ee,	// (0x00031986) list_double_graphic_heading_pane_vc_g2

0x73fa,	// (0x00031992) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x73fa,	// (0x00031992) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c4,	// (0x00039d5c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00039d5c) list_double_graphic_heading_pane_vc_g

0x7610,	// (0x00031ba8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7610,	// (0x00031ba8) list_double_graphic_heading_pane_vc_t1

0x762c,	// (0x00031bc4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x762c,	// (0x00031bc4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x00039f91) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x00039f91) list_double_graphic_heading_pane_vc_t

0x7450,	// (0x000319e8) list_setting_pane_vc_g1_ParamLimits

0x7450,	// (0x000319e8) list_setting_pane_vc_g1

0x745c,	// (0x000319f4) list_setting_pane_vc_g2_ParamLimits

0x745c,	// (0x000319f4) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x00039d87) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x00039d87) list_setting_pane_vc_g

0x764a,	// (0x00031be2) list_setting_pane_vc_t1_ParamLimits

0x764a,	// (0x00031be2) list_setting_pane_vc_t1

0x7666,	// (0x00031bfe) list_setting_pane_vc_t2_ParamLimits

0x7666,	// (0x00031bfe) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x00039fbf) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x00039fbf) list_setting_pane_vc_t

0x74b6,	// (0x00031a4e) set_value_pane_cp_vc_ParamLimits

0x74b6,	// (0x00031a4e) set_value_pane_cp_vc

0x73ee,	// (0x00031986) list_single_number_heading_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_single_number_heading_pane_vc_g1

0x73fa,	// (0x00031992) list_single_number_heading_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_single_number_heading_pane_vc_g

0x741c,	// (0x000319b4) list_single_number_heading_pane_vc_t1_ParamLimits

0x741c,	// (0x000319b4) list_single_number_heading_pane_vc_t1

0x7682,	// (0x00031c1a) list_single_number_heading_pane_vc_t2_ParamLimits

0x7682,	// (0x00031c1a) list_single_number_heading_pane_vc_t2

0x7696,	// (0x00031c2e) list_single_number_heading_pane_vc_t3_ParamLimits

0x7696,	// (0x00031c2e) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x00039fc4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x00039fc4) list_single_number_heading_pane_vc_t

0x73e2,	// (0x0003197a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x73e2,	// (0x0003197a) list_single_graphic_heading_pane_vc_g1

0x73ee,	// (0x00031986) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x73ee,	// (0x00031986) list_single_graphic_heading_pane_vc_g4

0x73fa,	// (0x00031992) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x73fa,	// (0x00031992) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x00039d5c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x00039d5c) list_single_graphic_heading_pane_vc_g

0x741c,	// (0x000319b4) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x741c,	// (0x000319b4) list_single_graphic_heading_pane_vc_t1

0x76a8,	// (0x00031c40) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x76a8,	// (0x00031c40) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x00039fcb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x00039fcb) list_single_graphic_heading_pane_vc_t

0x73ee,	// (0x00031986) list_double2_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_double2_pane_vc_g1

0x73fa,	// (0x00031992) list_double2_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_double2_pane_vc_g

0x76bc,	// (0x00031c54) list_double2_pane_vc_t1_ParamLimits

0x76bc,	// (0x00031c54) list_double2_pane_vc_t1

0x76d2,	// (0x00031c6a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x76d2,	// (0x00031c6a) list_double2_large_graphic_pane_vc_g1

0x73ee,	// (0x00031986) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x73ee,	// (0x00031986) list_double2_large_graphic_pane_vc_g2

0x73fa,	// (0x00031992) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x73fa,	// (0x00031992) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa38,	// (0x00039fd0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa38,	// (0x00039fd0) list_double2_large_graphic_pane_vc_g

0x76de,	// (0x00031c76) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x76de,	// (0x00031c76) list_double2_large_graphic_pane_vc_t1

0x76f4,	// (0x00031c8c) list_double_time_pane_vc_g1_ParamLimits

0x76f4,	// (0x00031c8c) list_double_time_pane_vc_g1

0x7700,	// (0x00031c98) list_double_time_pane_vc_g2_ParamLimits

0x7700,	// (0x00031c98) list_double_time_pane_vc_g2

0x0001,

0xfa3f,	// (0x00039fd7) list_double_time_pane_vc_g_ParamLimits

0xfa3f,	// (0x00039fd7) list_double_time_pane_vc_g

0x770c,	// (0x00031ca4) list_double_time_pane_vc_t1_ParamLimits

0x770c,	// (0x00031ca4) list_double_time_pane_vc_t1

0x7730,	// (0x00031cc8) list_double_time_pane_vc_t2_ParamLimits

0x7730,	// (0x00031cc8) list_double_time_pane_vc_t2

0x777f,	// (0x00031d17) list_double_time_pane_vc_t3_ParamLimits

0x777f,	// (0x00031d17) list_double_time_pane_vc_t3

0x7791,	// (0x00031d29) list_double_time_pane_vc_t4_ParamLimits

0x7791,	// (0x00031d29) list_double_time_pane_vc_t4

0x0003,

0xfa44,	// (0x00039fdc) list_double_time_pane_vc_t_ParamLimits

0xfa44,	// (0x00039fdc) list_double_time_pane_vc_t

0x73ee,	// (0x00031986) list_double_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_double_pane_vc_g1

0x73fa,	// (0x00031992) list_double_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_double_pane_vc_g

0x77a5,	// (0x00031d3d) list_double_pane_vc_t1_ParamLimits

0x77a5,	// (0x00031d3d) list_double_pane_vc_t1

0x77b9,	// (0x00031d51) list_double_pane_vc_t2_ParamLimits

0x77b9,	// (0x00031d51) list_double_pane_vc_t2

0x0001,

0xfa4d,	// (0x00039fe5) list_double_pane_vc_t_ParamLimits

0xfa4d,	// (0x00039fe5) list_double_pane_vc_t

0x73ee,	// (0x00031986) list_double_number_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_double_number_pane_vc_g1

0x73fa,	// (0x00031992) list_double_number_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_double_number_pane_vc_g

0x77d1,	// (0x00031d69) list_double_number_pane_vc_t1_ParamLimits

0x77d1,	// (0x00031d69) list_double_number_pane_vc_t1

0x77e3,	// (0x00031d7b) list_double_number_pane_vc_t2_ParamLimits

0x77e3,	// (0x00031d7b) list_double_number_pane_vc_t2

0x77f7,	// (0x00031d8f) list_double_number_pane_vc_t3_ParamLimits

0x77f7,	// (0x00031d8f) list_double_number_pane_vc_t3

0x0002,

0xfa52,	// (0x00039fea) list_double_number_pane_vc_t_ParamLimits

0xfa52,	// (0x00039fea) list_double_number_pane_vc_t

0x780f,	// (0x00031da7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x780f,	// (0x00031da7) list_double_large_graphic_pane_vc_g1

0x781b,	// (0x00031db3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x781b,	// (0x00031db3) list_double_large_graphic_pane_vc_g2

0x73fa,	// (0x00031992) list_double_large_graphic_pane_vc_g3_ParamLimits

0x73fa,	// (0x00031992) list_double_large_graphic_pane_vc_g3

0x782a,	// (0x00031dc2) list_double_large_graphic_pane_vc_g4_ParamLimits

0x782a,	// (0x00031dc2) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa59,	// (0x00039ff1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x00039ff1) list_double_large_graphic_pane_vc_g

0x7836,	// (0x00031dce) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7836,	// (0x00031dce) list_double_large_graphic_pane_vc_t1

0x784a,	// (0x00031de2) list_double_large_graphic_pane_vc_t2_ParamLimits

0x784a,	// (0x00031de2) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x00039ffa) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x00039ffa) list_double_large_graphic_pane_vc_t

0x73ee,	// (0x00031986) list_double_heading_pane_vc_g1_ParamLimits

0x73ee,	// (0x00031986) list_double_heading_pane_vc_g1

0x73fa,	// (0x00031992) list_double_heading_pane_vc_g2_ParamLimits

0x73fa,	// (0x00031992) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x00039d7d) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x00039d7d) list_double_heading_pane_vc_g

0x7863,	// (0x00031dfb) list_double_heading_pane_vc_t1_ParamLimits

0x7863,	// (0x00031dfb) list_double_heading_pane_vc_t1

0x741c,	// (0x000319b4) list_double_heading_pane_vc_t2_ParamLimits

0x741c,	// (0x000319b4) list_double_heading_pane_vc_t2

0x0001,

0xfa67,	// (0x00039fff) list_double_heading_pane_vc_t_ParamLimits

0xfa67,	// (0x00039fff) list_double_heading_pane_vc_t

0x73e2,	// (0x0003197a) list_double_graphic_pane_vc_g1_ParamLimits

0x73e2,	// (0x0003197a) list_double_graphic_pane_vc_g1

0x7877,	// (0x00031e0f) list_double_graphic_pane_vc_g2_ParamLimits

0x7877,	// (0x00031e0f) list_double_graphic_pane_vc_g2

0x7886,	// (0x00031e1e) list_double_graphic_pane_vc_g3_ParamLimits

0x7886,	// (0x00031e1e) list_double_graphic_pane_vc_g3

0x0002,

0xfa6c,	// (0x0003a004) list_double_graphic_pane_vc_g_ParamLimits

0xfa6c,	// (0x0003a004) list_double_graphic_pane_vc_g

0x7892,	// (0x00031e2a) list_double_graphic_pane_vc_t1_ParamLimits

0x7892,	// (0x00031e2a) list_double_graphic_pane_vc_t1

0x78a6,	// (0x00031e3e) list_double_graphic_pane_vc_t2_ParamLimits

0x78a6,	// (0x00031e3e) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x0003a00b) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x0003a00b) list_double_graphic_pane_vc_t

0x4962,	// (0x0002eefa) aid_size_cell_fastswap

0x496a,	// (0x0002ef02) aid_size_cell_touch_ParamLimits

0x496a,	// (0x0002ef02) aid_size_cell_touch

0x4bcf,	// (0x0002f167) popup_fast_swap_wide_window_ParamLimits

0x4bcf,	// (0x0002f167) popup_fast_swap_wide_window

0x4ce3,	// (0x0002f27b) touch_pane_ParamLimits

0x4ce3,	// (0x0002f27b) touch_pane

0x860d,	// (0x00032ba5) button_value_adjust_pane_cp2

0x528c,	// (0x0002f824) button_value_adjust_pane_cp4

0x52ac,	// (0x0002f844) form_field_data_pane_cp2

0x52cb,	// (0x0002f863) form_field_data_wide_pane_cp2

0x8a8a,	// (0x00033022) bg_scroll_pane_ParamLimits

0x5638,	// (0x0002fbd0) scroll_handle_pane_ParamLimits

0x564c,	// (0x0002fbe4) scroll_sc2_down_pane_ParamLimits

0x564c,	// (0x0002fbe4) scroll_sc2_down_pane

0x8abb,	// (0x00033053) scroll_sc2_up_pane_ParamLimits

0x8abb,	// (0x00033053) scroll_sc2_up_pane

0xbcbe,	// (0x00036256) grid_wheel_folder_pane_g1_ParamLimits

0xbcbe,	// (0x00036256) grid_wheel_folder_pane_g1

0x5811,	// (0x0002fda9) clock_nsta_pane_cp2_ParamLimits

0x5811,	// (0x0002fda9) clock_nsta_pane_cp2

0x8805,	// (0x00032d9d) listscroll_midp_pane_ParamLimits

0x92b0,	// (0x00033848) midp_canvas_pane

0x959a,	// (0x00033b32) nsta_clock_indic_pane

0x95ce,	// (0x00033b66) listscroll_form_pane_vc

0x95d6,	// (0x00033b6e) listscroll_set_pane_vc_ParamLimits

0x95d6,	// (0x00033b6e) listscroll_set_pane_vc

0x96db,	// (0x00033c73) clock_nsta_pane

0x9750,	// (0x00033ce8) indicator_nsta_pane

0x9a30,	// (0x00033fc8) bg_popup_sub_pane_cp2_ParamLimits

0x9a44,	// (0x00033fdc) find_pane_cp2_ParamLimits

0x9a44,	// (0x00033fdc) find_pane_cp2

0x9a5a,	// (0x00033ff2) grid_toobar_pane_ParamLimits

0x9b3a,	// (0x000340d2) list_form_gen_pane_vc_ParamLimits

0x9b3a,	// (0x000340d2) list_form_gen_pane_vc

0x9b50,	// (0x000340e8) scroll_pane_cp8_vc_ParamLimits

0x9b50,	// (0x000340e8) scroll_pane_cp8_vc

0x9bcc,	// (0x00034164) data_form_wide_pane_vc_ParamLimits

0x9bcc,	// (0x00034164) data_form_wide_pane_vc

0x9bd8,	// (0x00034170) form_field_data_wide_pane_vc_g1

0x9be0,	// (0x00034178) form_field_data_wide_pane_vc_t1_ParamLimits

0x9be0,	// (0x00034178) form_field_data_wide_pane_vc_t1

0x8621,	// (0x00032bb9) input_focus_pane_cp6_vc_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_cp6_vc

0x9f0c,	// (0x000344a4) list_midp_pane_ParamLimits

0x9f18,	// (0x000344b0) scroll_pane_cp16_ParamLimits

0x9f18,	// (0x000344b0) scroll_pane_cp16

0x9f66,	// (0x000344fe) button_value_adjust_pane_ParamLimits

0x9f66,	// (0x000344fe) button_value_adjust_pane

0xaee0,	// (0x00035478) button_value_adjust_pane_cp6_ParamLimits

0xaee0,	// (0x00035478) button_value_adjust_pane_cp6

0xb00a,	// (0x000355a2) settings_code_pane_cp_ParamLimits

0xb00a,	// (0x000355a2) settings_code_pane_cp

0x7ccb,	// (0x00032263) cell_touch_pane_g1

0x7ccb,	// (0x00032263) cell_touch_pane_g2

0x0001,

0xf709,	// (0x00039ca1) cell_touch_pane_g

0xb5ed,	// (0x00035b85) cell_touch_pane_cp_ParamLimits

0xb5ed,	// (0x00035b85) cell_touch_pane_cp

0xb5fd,	// (0x00035b95) cell_touch_pane_ParamLimits

0xb5fd,	// (0x00035b95) cell_touch_pane

0x7ccb,	// (0x00032263) scroll_sc2_down_pane_g1

0x7ccb,	// (0x00032263) scroll_sc2_up_pane_g1

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp4_vc

0xb60f,	// (0x00035ba7) list_set_graphic_pane_vc_g1_ParamLimits

0xb60f,	// (0x00035ba7) list_set_graphic_pane_vc_g1

0xb61b,	// (0x00035bb3) list_set_graphic_pane_vc_g2_ParamLimits

0xb61b,	// (0x00035bb3) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x00039f96) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x00039f96) list_set_graphic_pane_vc_g

0xb627,	// (0x00035bbf) text_primary_small_cp13_vc_ParamLimits

0xb627,	// (0x00035bbf) text_primary_small_cp13_vc

0xb63f,	// (0x00035bd7) list_set_graphic_pane_vc_ParamLimits

0xb63f,	// (0x00035bd7) list_set_graphic_pane_vc

0x7cd5,	// (0x0003226d) input_focus_pane_cp2_vc

0x7ccb,	// (0x00032263) setting_code_pane_vc_g1

0x7e00,	// (0x00032398) setting_code_pane_vc_t1

0xb651,	// (0x00035be9) set_text_pane_vc_t1_ParamLimits

0xb651,	// (0x00035be9) set_text_pane_vc_t1

0x7cd5,	// (0x0003226d) input_focus_pane_cp1_vc

0xb66d,	// (0x00035c05) list_set_text_pane_vc

0x7ccb,	// (0x00032263) setting_text_pane_vc_g1

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp2_vc

0x7df7,	// (0x0003238f) setting_slider_graphic_pane_vc_g1

0xb677,	// (0x00035c0f) setting_slider_graphic_pane_vc_t1

0xb687,	// (0x00035c1f) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00039f9b) setting_slider_graphic_pane_vc_t

0xb697,	// (0x00035c2f) slider_set_pane_cp_vc

0xb69f,	// (0x00035c37) slider_set_pane_vc_g1

0xb6a8,	// (0x00035c40) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x00039fa0) slider_set_pane_vc_g

0x867c,	// (0x00032c14) set_opt_bg_pane_g1_copy1

0x8684,	// (0x00032c1c) set_opt_bg_pane_g2_copy1

0xb6d4,	// (0x00035c6c) set_opt_bg_pane_g3_copy1

0x8694,	// (0x00032c2c) set_opt_bg_pane_g4_copy1

0x869c,	// (0x00032c34) set_opt_bg_pane_g5_copy1

0x86a4,	// (0x00032c3c) set_opt_bg_pane_g6_copy1

0xb6de,	// (0x00035c76) set_opt_bg_pane_g7_copy1

0xb6e6,	// (0x00035c7e) set_opt_bg_pane_g8_copy1

0xb6f0,	// (0x00035c88) set_opt_bg_pane_g9_copy1

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp_vc

0xb6fa,	// (0x00035c92) setting_slider_pane_vc_t1

0xb709,	// (0x00035ca1) setting_slider_pane_vc_t2

0xb719,	// (0x00035cb1) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x00039faf) setting_slider_pane_vc_t

0xb729,	// (0x00035cc1) slider_set_pane_vc

0x617b,	// (0x00030713) volume_set_pane_vc_g1

0x6184,	// (0x0003071c) volume_set_pane_vc_g2

0x618d,	// (0x00030725) volume_set_pane_vc_g3

0x6196,	// (0x0003072e) volume_set_pane_vc_g4

0x619f,	// (0x00030737) volume_set_pane_vc_g5

0x61a8,	// (0x00030740) volume_set_pane_vc_g6

0x61b1,	// (0x00030749) volume_set_pane_vc_g7

0x61ba,	// (0x00030752) volume_set_pane_vc_g8

0x61c3,	// (0x0003075b) volume_set_pane_vc_g9

0x61cc,	// (0x00030764) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x00039e54) volume_set_pane_vc_g

0xb731,	// (0x00035cc9) volume_set_pane_vc

0xb739,	// (0x00035cd1) button_value_adjust_pane_cp1_vc

0xb743,	// (0x00035cdb) list_highlight_pane_cp2_vc

0xb74c,	// (0x00035ce4) list_set_pane_vc_ParamLimits

0xb74c,	// (0x00035ce4) list_set_pane_vc

0xb7aa,	// (0x00035d42) main_pane_set_vc_t1_ParamLimits

0xb7aa,	// (0x00035d42) main_pane_set_vc_t1

0xb7bf,	// (0x00035d57) main_pane_set_vc_t2_ParamLimits

0xb7bf,	// (0x00035d57) main_pane_set_vc_t2

0xb7d1,	// (0x00035d69) main_pane_set_vc_t3_ParamLimits

0xb7d1,	// (0x00035d69) main_pane_set_vc_t3

0xb7e5,	// (0x00035d7d) main_pane_set_vc_t4_ParamLimits

0xb7e5,	// (0x00035d7d) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x00039fb6) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x00039fb6) main_pane_set_vc_t

0xb7f9,	// (0x00035d91) setting_code_pane_vc_ParamLimits

0xb7f9,	// (0x00035d91) setting_code_pane_vc

0xb80a,	// (0x00035da2) setting_slider_graphic_pane_vc

0xb80a,	// (0x00035da2) setting_slider_pane_vc

0xb80a,	// (0x00035da2) setting_text_pane_vc

0xb80a,	// (0x00035da2) setting_volume_pane_vc

0xb814,	// (0x00035dac) scroll_pane_cp121_vc

0x85fb,	// (0x00032b93) set_content_pane_vc

0xb81c,	// (0x00035db4) button_value_adjust_pane_g1

0xb825,	// (0x00035dbd) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x0003a010) button_value_adjust_pane_g

0xb82e,	// (0x00035dc6) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb82e,	// (0x00035dc6) form_field_slider_wide_pane_vc_t1

0xb842,	// (0x00035dda) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb842,	// (0x00035dda) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x0003a015) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x0003a015) form_field_slider_wide_pane_vc_t

0x8030,	// (0x000325c8) input_focus_pane_cp10_vc_ParamLimits

0x8030,	// (0x000325c8) input_focus_pane_cp10_vc

0xb870,	// (0x00035e08) slider_cont_pane_cp1_vc_ParamLimits

0xb870,	// (0x00035e08) slider_cont_pane_cp1_vc

0xb882,	// (0x00035e1a) slider_form_pane_g1_cp2

0xb6a8,	// (0x00035c40) slider_form_pane_g2_cp2

0xb8af,	// (0x00035e47) form_field_slider_pane_vc_t3

0xb8bd,	// (0x00035e55) form_field_slider_pane_vc_t4

0xb8cb,	// (0x00035e63) slider_form_pane_vc_ParamLimits

0xb8cb,	// (0x00035e63) slider_form_pane_vc

0xb8d8,	// (0x00035e70) form_field_slider_pane_vc_t1_ParamLimits

0xb8d8,	// (0x00035e70) form_field_slider_pane_vc_t1

0xb842,	// (0x00035dda) form_field_slider_pane_vc_t2_ParamLimits

0xb842,	// (0x00035dda) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x0003a027) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x0003a027) form_field_slider_pane_vc_t

0x8030,	// (0x000325c8) input_focus_pane_cp9_vc_ParamLimits

0x8030,	// (0x000325c8) input_focus_pane_cp9_vc

0xb8f4,	// (0x00035e8c) slider_cont_pane_vc_ParamLimits

0xb8f4,	// (0x00035e8c) slider_cont_pane_vc

0xb908,	// (0x00035ea0) list_form_graphic_pane_cp_vc_ParamLimits

0xb908,	// (0x00035ea0) list_form_graphic_pane_cp_vc

0x9bd8,	// (0x00034170) form_field_popup_wide_pane_vc_g1

0xb91d,	// (0x00035eb5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb91d,	// (0x00035eb5) form_field_popup_wide_pane_vc_t1

0x8621,	// (0x00032bb9) input_focus_pane_cp8_vc_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_cp8_vc

0xb962,	// (0x00035efa) list_form_wide_pane_vc_ParamLimits

0xb962,	// (0x00035efa) list_form_wide_pane_vc

0xb96e,	// (0x00035f06) list_form_graphic_pane_vc_g1

0xb976,	// (0x00035f0e) list_form_graphic_pane_vc_t1_ParamLimits

0xb976,	// (0x00035f0e) list_form_graphic_pane_vc_t1

0x7db5,	// (0x0003234d) list_highlight_pane_cp5_vc_ParamLimits

0x7db5,	// (0x0003234d) list_highlight_pane_cp5_vc

0xb992,	// (0x00035f2a) list_form_graphic_pane_vc_ParamLimits

0xb992,	// (0x00035f2a) list_form_graphic_pane_vc

0x9bd8,	// (0x00034170) form_field_popup_pane_vc_g1

0xb9a8,	// (0x00035f40) form_field_popup_pane_vc_t1_ParamLimits

0xb9a8,	// (0x00035f40) form_field_popup_pane_vc_t1

0x8621,	// (0x00032bb9) input_focus_pane_cp7_vc_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_cp7_vc

0xb9bf,	// (0x00035f57) list_form_pane_vc_ParamLimits

0xb9bf,	// (0x00035f57) list_form_pane_vc

0xb9cb,	// (0x00035f63) data_form_pane_vc_t1_ParamLimits

0xb9cb,	// (0x00035f63) data_form_pane_vc_t1

0x867c,	// (0x00032c14) input_focus_pane_vc_g1

0x8684,	// (0x00032c1c) input_focus_pane_vc_g2

0x868c,	// (0x00032c24) input_focus_pane_vc_g3

0x8694,	// (0x00032c2c) input_focus_pane_vc_g4

0x869c,	// (0x00032c34) input_focus_pane_vc_g5

0x86a4,	// (0x00032c3c) input_focus_pane_vc_g6

0x86ac,	// (0x00032c44) input_focus_pane_vc_g7

0x86b4,	// (0x00032c4c) input_focus_pane_vc_g8

0x86bc,	// (0x00032c54) input_focus_pane_vc_g9

0x7ccb,	// (0x00032263) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x00039c2a) input_focus_pane_vc_g

0x9bcc,	// (0x00034164) data_form_pane_vc_ParamLimits

0x9bcc,	// (0x00034164) data_form_pane_vc

0x9bd8,	// (0x00034170) form_field_data_pane_vc_g1

0xb9e6,	// (0x00035f7e) form_field_data_pane_vc_t1_ParamLimits

0xb9e6,	// (0x00035f7e) form_field_data_pane_vc_t1

0x8621,	// (0x00032bb9) input_focus_pane_vc_ParamLimits

0x8621,	// (0x00032bb9) input_focus_pane_vc

0xba00,	// (0x00035f98) button_value_adjust_pane_cp3_vc

0xba08,	// (0x00035fa0) button_value_adjust_pane_cp5_vc

0xba10,	// (0x00035fa8) form_field_data_pane_vc_ParamLimits

0xba10,	// (0x00035fa8) form_field_data_pane_vc

0xba27,	// (0x00035fbf) form_field_data_pane_vc_cp2

0xba2f,	// (0x00035fc7) form_field_data_wide_pane_vc_ParamLimits

0xba2f,	// (0x00035fc7) form_field_data_wide_pane_vc

0xba45,	// (0x00035fdd) form_field_data_wide_pane_vc_cp2

0xba4d,	// (0x00035fe5) form_field_popup_pane_vc_ParamLimits

0xba4d,	// (0x00035fe5) form_field_popup_pane_vc

0xba64,	// (0x00035ffc) form_field_popup_wide_pane_vc_ParamLimits

0xba64,	// (0x00035ffc) form_field_popup_wide_pane_vc

0xba86,	// (0x0003601e) form_field_slider_pane_vc_ParamLimits

0xba86,	// (0x0003601e) form_field_slider_pane_vc

0xba99,	// (0x00036031) form_field_slider_wide_pane_vc_ParamLimits

0xba99,	// (0x00036031) form_field_slider_wide_pane_vc

0xbaac,	// (0x00036044) grid_touch_1_pane_ParamLimits

0xbaac,	// (0x00036044) grid_touch_1_pane

0xbab8,	// (0x00036050) grid_touch_2_pane_ParamLimits

0xbab8,	// (0x00036050) grid_touch_2_pane

0x9565,	// (0x00033afd) touch_pane_g1_ParamLimits

0x9565,	// (0x00033afd) touch_pane_g1

0xbad0,	// (0x00036068) cell_app_pane_cp_wide_ParamLimits

0xbad0,	// (0x00036068) cell_app_pane_cp_wide

0xbae1,	// (0x00036079) grid_popup_fast_wide_pane_ParamLimits

0xbae1,	// (0x00036079) grid_popup_fast_wide_pane

0xbaf5,	// (0x0003608d) scroll_pane_cp19_ParamLimits

0xbaf5,	// (0x0003608d) scroll_pane_cp19

0x7cd5,	// (0x0003226d) bg_popup_window_pane_cp20

0xbb09,	// (0x000360a1) listscroll_popup_fast_wide_pane

0x7db5,	// (0x0003234d) grid_indicator_nsta_pane

0xbb11,	// (0x000360a9) clock_nsta_pane_g1

0xbb1a,	// (0x000360b2) clock_nsta_pane_t1

0xbb36,	// (0x000360ce) cell_indicator_nsta_pane_ParamLimits

0xbb36,	// (0x000360ce) cell_indicator_nsta_pane

0xbb6e,	// (0x00036106) cell_indicator_nsta_pane_g1

0xbb7c,	// (0x00036114) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x0003a038) cell_indicator_nsta_pane_g

0xbb92,	// (0x0003612a) clock_nsta_pane_cp

0xbb9a,	// (0x00036132) indicator_nsta_pane_cp

0xbba2,	// (0x0003613a) nsta_clock_indic_pane_g1

0x7e7e,	// (0x00032416) grid_indicator_pane

0x8bb0,	// (0x00033148) scroll_pane_cp29

0x5760,	// (0x0002fcf8) indicator_nsta_pane_cp2_ParamLimits

0x5760,	// (0x0002fcf8) indicator_nsta_pane_cp2

0x7db5,	// (0x0003234d) main_apps_wheel_pane

0x9ded,	// (0x00034385) form_midp_field_text_pane_ParamLimits

0x9f38,	// (0x000344d0) scroll_bar_cp050_ParamLimits

0xbbfb,	// (0x00036193) cell_indicator_pane_ParamLimits

0xbbfb,	// (0x00036193) cell_indicator_pane

0xbc12,	// (0x000361aa) cell_indicator_pane_g1

0xbc1c,	// (0x000361b4) grid_wheel_folder_pane_ParamLimits

0xbc1c,	// (0x000361b4) grid_wheel_folder_pane

0xbc32,	// (0x000361ca) list_wheel_apps_pane_ParamLimits

0xbc32,	// (0x000361ca) list_wheel_apps_pane

0xbc43,	// (0x000361db) main_apps_wheel_pane_g1_ParamLimits

0xbc43,	// (0x000361db) main_apps_wheel_pane_g1

0xbc57,	// (0x000361ef) main_apps_wheel_pane_g2_ParamLimits

0xbc57,	// (0x000361ef) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x0003a054) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x0003a054) main_apps_wheel_pane_g

0xbc6f,	// (0x00036207) main_apps_wheel_pane_t1_ParamLimits

0xbc6f,	// (0x00036207) main_apps_wheel_pane_t1

0xbc92,	// (0x0003622a) list_wheel_apps_pane_g1

0xbc9a,	// (0x00036232) list_wheel_apps_pane_g2

0xbca2,	// (0x0003623a) list_wheel_apps_pane_g3

0xbcaa,	// (0x00036242) list_wheel_apps_pane_g4

0xbcb4,	// (0x0003624c) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x0003a059) list_wheel_apps_pane_g

0x9128,	// (0x000336c0) navi_icon_text_pane

0x960a,	// (0x00033ba2) aid_fill_nsta

0xbcd7,	// (0x0003626f) navi_icon_text_pane_g1

0xbce3,	// (0x0003627b) navi_icon_text_pane_t1

0x8fc6,	// (0x0003355e) list_set_graphic_pane_t1_ParamLimits

0x8fc6,	// (0x0003355e) list_set_graphic_pane_t1

0xa693,	// (0x00034c2b) popup_midp_note_alarm_window_t6_ParamLimits

0xa693,	// (0x00034c2b) popup_midp_note_alarm_window_t6

0xa6a5,	// (0x00034c3d) popup_midp_note_alarm_window_t7_ParamLimits

0xa6a5,	// (0x00034c3d) popup_midp_note_alarm_window_t7

0xa6b7,	// (0x00034c4f) popup_midp_note_alarm_window_t8_ParamLimits

0xa6b7,	// (0x00034c4f) popup_midp_note_alarm_window_t8

0xa6c9,	// (0x00034c61) popup_midp_note_alarm_window_t9_ParamLimits

0xa6c9,	// (0x00034c61) popup_midp_note_alarm_window_t9

0xa6db,	// (0x00034c73) popup_midp_note_alarm_window_t10_ParamLimits

0xa6db,	// (0x00034c73) popup_midp_note_alarm_window_t10

0xa6ed,	// (0x00034c85) popup_midp_note_alarm_window_t11_ParamLimits

0xa6ed,	// (0x00034c85) popup_midp_note_alarm_window_t11

0xa6ff,	// (0x00034c97) scroll_pane_cp17_ParamLimits

0xa6ff,	// (0x00034c97) scroll_pane_cp17

0x617b,	// (0x00030713) volume_small_pane_cp_g1

0x6470,	// (0x00030a08) volume_small_pane_cp_g2

0x6479,	// (0x00030a11) volume_small_pane_cp_g3

0x6482,	// (0x00030a1a) volume_small_pane_cp_g4

0x648b,	// (0x00030a23) volume_small_pane_cp_g5

0x6494,	// (0x00030a2c) volume_small_pane_cp_g6

0x649d,	// (0x00030a35) volume_small_pane_cp_g7

0x64a6,	// (0x00030a3e) volume_small_pane_cp_g8

0x64af,	// (0x00030a47) volume_small_pane_cp_g9

0x64b8,	// (0x00030a50) volume_small_pane_cp_g10

0x9377,	// (0x0003390f) midp_ticker_pane_g1_ParamLimits

0x9383,	// (0x0003391b) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x00039cf6) midp_ticker_pane_g_ParamLimits

0x938f,	// (0x00033927) midp_ticker_pane_t1_ParamLimits

0x9620,	// (0x00033bb8) aid_fill_nsta_2

0x9f24,	// (0x000344bc) list_form2_midp_pane

0xb055,	// (0x000355ed) midp_editing_number_pane_ParamLimits

0xb064,	// (0x000355fc) midp_ticker_pane_ParamLimits

0xbcf5,	// (0x0003628d) form2_midp_field_pane

0xbd19,	// (0x000362b1) scroll_pane_cp51

0xbd39,	// (0x000362d1) form2_midp_button_pane_ParamLimits

0xbd39,	// (0x000362d1) form2_midp_button_pane

0xbd4b,	// (0x000362e3) form2_midp_content_pane_ParamLimits

0xbd4b,	// (0x000362e3) form2_midp_content_pane

0xbd65,	// (0x000362fd) form2_midp_field_choice_group_pane

0xbd6d,	// (0x00036305) form2_midp_field_pane_g1

0xbd75,	// (0x0003630d) form2_midp_field_pane_g2

0xbd7d,	// (0x00036315) form2_midp_field_pane_g3

0xbd85,	// (0x0003631d) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x0003a07e) form2_midp_field_pane_g

0xbd8d,	// (0x00036325) form2_midp_gauge_slider_pane

0xbd95,	// (0x0003632d) form2_midp_gauge_wait_pane

0xbd9d,	// (0x00036335) form2_midp_image_pane_ParamLimits

0xbd9d,	// (0x00036335) form2_midp_image_pane

0xbdb8,	// (0x00036350) form2_midp_label_pane_ParamLimits

0xbdb8,	// (0x00036350) form2_midp_label_pane

0xbdd1,	// (0x00036369) form2_midp_label_pane_cp_ParamLimits

0xbdd1,	// (0x00036369) form2_midp_label_pane_cp

0xbdf2,	// (0x0003638a) form2_midp_string_pane_ParamLimits

0xbdf2,	// (0x0003638a) form2_midp_string_pane

0x78be,	// (0x00031e56) form2_midp_text_pane_ParamLimits

0x78be,	// (0x00031e56) form2_midp_text_pane

0xbe04,	// (0x0003639c) form2_midp_time_pane

0xbe14,	// (0x000363ac) input_focus_pane_cp51_ParamLimits

0xbe14,	// (0x000363ac) input_focus_pane_cp51

0xbe2c,	// (0x000363c4) form2_midp_label_pane_t1_ParamLimits

0xbe2c,	// (0x000363c4) form2_midp_label_pane_t1

0x78d9,	// (0x00031e71) form2_mdip_text_pane_t1_ParamLimits

0x78d9,	// (0x00031e71) form2_mdip_text_pane_t1

0x78f7,	// (0x00031e8f) form2_midp_time_pane_t1

0xbe75,	// (0x0003640d) form2_midp_gauge_slider_pane_t1

0xbe87,	// (0x0003641f) form2_midp_gauge_slider_pane_t2

0xbe99,	// (0x00036431) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x0003a087) form2_midp_gauge_slider_pane_t

0xbeab,	// (0x00036443) form2_midp_slider_pane

0xbeb7,	// (0x0003644f) form2_midp_gauge_wait_pane_t1

0xbec5,	// (0x0003645d) form2_midp_wait_pane_ParamLimits

0xbec5,	// (0x0003645d) form2_midp_wait_pane

0x9c1f,	// (0x000341b7) list_single_2graphic_pane_cp4_ParamLimits

0x9c1f,	// (0x000341b7) list_single_2graphic_pane_cp4

0xbef0,	// (0x00036488) list_single_midp_graphic_pane_cp_ParamLimits

0xbef0,	// (0x00036488) list_single_midp_graphic_pane_cp

0x7cd5,	// (0x0003226d) list_highlight_pane_cp20

0xbf1f,	// (0x000364b7) list_single_2graphic_pane_g1_cp4

0xbf27,	// (0x000364bf) list_single_2graphic_pane_g2_cp4

0xbf2f,	// (0x000364c7) list_single_2graphic_pane_t1_cp4

0x7db5,	// (0x0003234d) list_highlight_pane_cp21

0xbf3e,	// (0x000364d6) list_single_midp_graphic_pane_g4_cp

0xbf4d,	// (0x000364e5) list_single_midp_graphic_pane_t1_cp

0xbf62,	// (0x000364fa) form2_mdip_string_pane_t1_ParamLimits

0xbf62,	// (0x000364fa) form2_mdip_string_pane_t1

0x7cd5,	// (0x0003226d) bg_wml_button_pane_cp2

0x7ccb,	// (0x00032263) form2_midp_image_pane_g1

0x5076,	// (0x0002f60e) list_double_large_graphic_pane_g5_ParamLimits

0x5076,	// (0x0002f60e) list_double_large_graphic_pane_g5

0x8805,	// (0x00032d9d) midp_form_pane_ParamLimits

0x7db5,	// (0x0003234d) main_apps_wheel_pane_ParamLimits

0x5e27,	// (0x000303bf) popup_preview_window_ParamLimits

0x5e27,	// (0x000303bf) popup_preview_window

0x5fe2,	// (0x0003057a) popup_touch_info_window_ParamLimits

0x5fe2,	// (0x0003057a) popup_touch_info_window

0x6000,	// (0x00030598) popup_touch_menu_window_ParamLimits

0x6000,	// (0x00030598) popup_touch_menu_window

0x7cc1,	// (0x00032259) bg_popup_sub_pane_cp6

0xc05b,	// (0x000365f3) list_touch_menu_pane

0xc063,	// (0x000365fb) list_single_touch_menu_pane_ParamLimits

0xc063,	// (0x000365fb) list_single_touch_menu_pane

0xc079,	// (0x00036611) list_single_touch_menu_pane_t1

0x7db5,	// (0x0003234d) bg_popup_sub_pane_cp7_ParamLimits

0x7db5,	// (0x0003234d) bg_popup_sub_pane_cp7

0xc087,	// (0x0003661f) heading_sub_pane

0xc08f,	// (0x00036627) list_touch_info_pane_ParamLimits

0xc08f,	// (0x00036627) list_touch_info_pane

0xc09e,	// (0x00036636) list_single_touch_info_pane_ParamLimits

0xc09e,	// (0x00036636) list_single_touch_info_pane

0xc0b0,	// (0x00036648) list_single_touch_info_pane_t1

0xc0be,	// (0x00036656) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x0003a095) list_single_touch_info_pane_t

0x92a8,	// (0x00033840) bg_popup_heading_pane_cp

0xc0cc,	// (0x00036664) heading_sub_pane_t1

0x9b66,	// (0x000340fe) bg_popup_preview_window_pane_cp_ParamLimits

0x9b66,	// (0x000340fe) bg_popup_preview_window_pane_cp

0xc087,	// (0x0003661f) heading_preview_pane

0xc08f,	// (0x00036627) list_preview_pane_ParamLimits

0xc08f,	// (0x00036627) list_preview_pane

0xc0da,	// (0x00036672) popup_preview_window_g1

0xc09e,	// (0x00036636) list_single_preview_pane_ParamLimits

0xc09e,	// (0x00036636) list_single_preview_pane

0xc0e2,	// (0x0003667a) list_single_preview_pane_g1

0xc0ea,	// (0x00036682) list_single_preview_pane_t1

0xc0b0,	// (0x00036648) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x0003a09a) list_single_preview_pane_t

0xc0f8,	// (0x00036690) bg_popup_heading_pane_cp2_ParamLimits

0xc0f8,	// (0x00036690) bg_popup_heading_pane_cp2

0xc10e,	// (0x000366a6) heading_preview_pane_g1

0xc116,	// (0x000366ae) heading_preview_pane_t1_ParamLimits

0xc116,	// (0x000366ae) heading_preview_pane_t1

0x7ea1,	// (0x00032439) soft_indicator_pane_t1_ParamLimits

0x8594,	// (0x00032b2c) scroll_pane_ParamLimits

0x8aa9,	// (0x00033041) scroll_sc2_left_pane

0x8ab2,	// (0x0003304a) scroll_sc2_right_pane

0x8ad1,	// (0x00033069) scroll_bg_pane_g1_ParamLimits

0x8ae6,	// (0x0003307e) scroll_bg_pane_g2_ParamLimits

0x8afe,	// (0x00033096) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x00039c81) scroll_bg_pane_g_ParamLimits

0x8ad1,	// (0x00033069) scroll_handle_pane_g1_ParamLimits

0x8b20,	// (0x000330b8) scroll_handle_pane_g2_ParamLimits

0x8afe,	// (0x00033096) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x00039c88) scroll_handle_pane_g_ParamLimits

0x5aaa,	// (0x00030042) popup_choice_list_window_ParamLimits

0x5aaa,	// (0x00030042) popup_choice_list_window

0x9a3c,	// (0x00033fd4) choice_list_pane

0x9abe,	// (0x00034056) cell_toolbar_pane_t1

0x9ae6,	// (0x0003407e) toolbar_button_pane_ParamLimits

0xabb9,	// (0x00035151) ai_gene_pane_1_t2_ParamLimits

0xabb9,	// (0x00035151) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x00039eb0) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x00039eb0) ai_gene_pane_1_t

0xc133,	// (0x000366cb) scroll_sc2_left_pane_g1

0xc133,	// (0x000366cb) scroll_sc2_right_pane_g1

0x95e8,	// (0x00033b80) bg_popup_sub_pane_cp10

0xc13d,	// (0x000366d5) list_choice_list_pane

0xc156,	// (0x000366ee) list_single_choice_list_pane_ParamLimits

0xc156,	// (0x000366ee) list_single_choice_list_pane

0xc169,	// (0x00036701) list_single_choice_list_pane_g1

0x87b5,	// (0x00032d4d) list_single_choice_list_pane_t1_ParamLimits

0x87b5,	// (0x00032d4d) list_single_choice_list_pane_t1

0xc171,	// (0x00036709) choice_list_pane_g1

0xc179,	// (0x00036711) choice_list_pane_t1

0x7cc1,	// (0x00032259) input_focus_pane_cp11

0x898c,	// (0x00032f24) title_pane_stacon_g2_ParamLimits

0x898c,	// (0x00032f24) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x00039c67) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x00039c67) title_pane_stacon_g

0x92a8,	// (0x00033840) cursor_press_pane

0x5b56,	// (0x000300ee) popup_fep_hwr_window_ParamLimits

0x5b56,	// (0x000300ee) popup_fep_hwr_window

0x5bd0,	// (0x00030168) popup_fep_vkb_window_ParamLimits

0x5bd0,	// (0x00030168) popup_fep_vkb_window

0xc187,	// (0x0003671f) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x0003a0c3) fep_vkb_side_pane_g_ParamLimits

0x64fa,	// (0x00030a92) fep_hwr_candidate_pane_ParamLimits

0x64fa,	// (0x00030a92) fep_hwr_candidate_pane

0x6524,	// (0x00030abc) fep_hwr_side_pane_ParamLimits

0x6524,	// (0x00030abc) fep_hwr_side_pane

0x6544,	// (0x00030adc) fep_hwr_top_pane_ParamLimits

0x6544,	// (0x00030adc) fep_hwr_top_pane

0x655c,	// (0x00030af4) fep_hwr_write_pane_ParamLimits

0x655c,	// (0x00030af4) fep_hwr_write_pane

0xfb2b,	// (0x0003a0c3) fep_vkb_side_pane_g

0xc18f,	// (0x00036727) fep_hwr_top_pane_g1

0xc1a1,	// (0x00036739) fep_hwr_top_pane_g2

0x6596,	// (0x00030b2e) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x0003a09f) fep_hwr_top_pane_g

0x65ab,	// (0x00030b43) fep_hwr_top_text_pane

0x8ca0,	// (0x00033238) fep_hwr_top_text_pane_g1

0xc1d7,	// (0x0003676f) fep_hwr_top_text_pane_t1

0x66a1,	// (0x00030c39) fep_hwr_candidate_pane_g1

0xc42a,	// (0x000369c2) fep_vkb_keypad_pane_g3_ParamLimits

0xc42a,	// (0x000369c2) fep_vkb_keypad_pane_g3

0xc452,	// (0x000369ea) fep_vkb_keypad_pane_g4_ParamLimits

0xc452,	// (0x000369ea) fep_vkb_keypad_pane_g4

0xc4c1,	// (0x00036a59) fep_vkb_bottom_pane_g2_ParamLimits

0xc4c1,	// (0x00036a59) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x0003a0ca) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x0003a0ca) fep_vkb_bottom_pane_g

0xc133,	// (0x000366cb) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x0003a0d4) cell_vkb_side_pane_g

0xc54c,	// (0x00036ae4) cell_vkb_side_pane_t1

0xc55a,	// (0x00036af2) cell_vkb_side_pane_t1_copy1

0xc133,	// (0x000366cb) bg_fep_vkb_candidate_pane_g2

0xc686,	// (0x00036c1e) cell_vkb_candidate_pane_ParamLimits

0xc1e5,	// (0x0003677d) aid_size_cell_vkb_ParamLimits

0xc1e5,	// (0x0003677d) aid_size_cell_vkb

0xc686,	// (0x00036c1e) cell_vkb_candidate_pane

0x66c8,	// (0x00030c60) bg_popup_fep_shadow_pane_g1

0xc273,	// (0x0003680b) fep_vkb_bottom_pane_ParamLimits

0xc273,	// (0x0003680b) fep_vkb_bottom_pane

0xc2a9,	// (0x00036841) fep_vkb_candidate_pane_ParamLimits

0xc2a9,	// (0x00036841) fep_vkb_candidate_pane

0xc2c5,	// (0x0003685d) fep_vkb_keypad_pane_ParamLimits

0xc2c5,	// (0x0003685d) fep_vkb_keypad_pane

0xc30b,	// (0x000368a3) fep_vkb_side_pane_ParamLimits

0xc30b,	// (0x000368a3) fep_vkb_side_pane

0xc347,	// (0x000368df) fep_vkb_top_pane_ParamLimits

0xc347,	// (0x000368df) fep_vkb_top_pane

0xc383,	// (0x0003691b) fep_vkb_top_pane_g1_ParamLimits

0xc383,	// (0x0003691b) fep_vkb_top_pane_g1

0xc392,	// (0x0003692a) fep_vkb_top_pane_g2_ParamLimits

0xc392,	// (0x0003692a) fep_vkb_top_pane_g2

0xc3a1,	// (0x00036939) fep_vkb_top_pane_g3_ParamLimits

0xc3a1,	// (0x00036939) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x0003a0ba) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x0003a0ba) fep_vkb_top_pane_g

0xc3bf,	// (0x00036957) fep_vkb_top_text_pane_ParamLimits

0xc3bf,	// (0x00036957) fep_vkb_top_text_pane

0xc3d0,	// (0x00036968) fep_vkb_side_pane_g1_ParamLimits

0xc3d0,	// (0x00036968) fep_vkb_side_pane_g1

0xc419,	// (0x000369b1) grid_vkb_side_pane_ParamLimits

0xc419,	// (0x000369b1) grid_vkb_side_pane

0x66d0,	// (0x00030c68) bg_popup_fep_shadow_pane_g2

0x66d9,	// (0x00030c71) bg_popup_fep_shadow_pane_g3

0x66e1,	// (0x00030c79) bg_popup_fep_shadow_pane_g4

0x66ea,	// (0x00030c82) bg_popup_fep_shadow_pane_g5

0x66f4,	// (0x00030c8c) bg_popup_fep_shadow_pane_g6

0x66fc,	// (0x00030c94) bg_popup_fep_shadow_pane_g7

0x8694,	// (0x00032c2c) bg_popup_fep_shadow_pane_g8

0xc470,	// (0x00036a08) grid_vkb_keypad_number_pane_ParamLimits

0xc470,	// (0x00036a08) grid_vkb_keypad_number_pane

0xc480,	// (0x00036a18) grid_vkb_keypad_pane_ParamLimits

0xc480,	// (0x00036a18) grid_vkb_keypad_pane

0xc4a6,	// (0x00036a3e) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a6,	// (0x00036a3e) fep_vkb_bottom_pane_g1

0xc4cf,	// (0x00036a67) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4cf,	// (0x00036a67) grid_vkb_keypad_bottom_left_pane

0xc4e4,	// (0x00036a7c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4e4,	// (0x00036a7c) grid_vkb_keypad_bottom_right_pane

0xc4f9,	// (0x00036a91) fep_vkb_top_text_pane_g1

0xc514,	// (0x00036aac) fep_vkb_top_text_pane_t1

0xc529,	// (0x00036ac1) cell_vkb_side_pane_ParamLimits

0xc529,	// (0x00036ac1) cell_vkb_side_pane

0xc133,	// (0x000366cb) cell_vkb_side_pane_g1

0xc568,	// (0x00036b00) cell_vkb_keypad_pane_ParamLimits

0xc568,	// (0x00036b00) cell_vkb_keypad_pane

0xc5dd,	// (0x00036b75) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x0003a0e7) bg_popup_fep_shadow_pane_g

0x670e,	// (0x00030ca6) cell_hwr_side_pane_g1

0x670e,	// (0x00030ca6) cell_hwr_side_pane_g2

0xc5e7,	// (0x00036b7f) cell_vkb_keypad_pane_t1

0xc5f5,	// (0x00036b8d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5f5,	// (0x00036b8d) cell_vkb_keypad_bottom_left_pane

0xc612,	// (0x00036baa) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc612,	// (0x00036baa) cell_vkb_keypad_bottom_right_pane

0xc133,	// (0x000366cb) cell_vkb_keypad_bottom_left_pane_g1

0xc133,	// (0x000366cb) cell_vkb_keypad_bottom_right_pane_g1

0xc64b,	// (0x00036be3) cell_vkb_keypad_number_pane_ParamLimits

0xc64b,	// (0x00036be3) cell_vkb_keypad_number_pane

0xc66a,	// (0x00036c02) cell_vkb_keypad_number_pane_g1

0xc674,	// (0x00036c0c) cell_vkb_keypad_number_pane_g2

0xc67d,	// (0x00036c15) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x0003a0d9) cell_vkb_keypad_number_pane_g

0xc5e7,	// (0x00036b7f) cell_vkb_keypad_number_pane_t1

0xc6a1,	// (0x00036c39) fep_vkb_candidate_pane_g1

0x0001,

0xfb62,	// (0x0003a0fa) cell_hwr_side_pane_g

0xc6ba,	// (0x00036c52) cell_hwr_side_pane_t1

0x6718,	// (0x00030cb0) cell_hwr_side_pane_t1_copy1

0x6726,	// (0x00030cbe) cell_hwr_candidate_pane_g1

0x6755,	// (0x00030ced) cell_hwr_candidate_pane_t1

0xc133,	// (0x000366cb) cell_vkb_candidate_pane_g2

0xc6fe,	// (0x00036c96) cell_vkb_candidate_pane_t1

0x64c1,	// (0x00030a59) bg_popup_fep_shadow_pane_ParamLimits

0x64c1,	// (0x00030a59) bg_popup_fep_shadow_pane

0x6576,	// (0x00030b0e) bg_fep_hwr_top_pane_g4

0xc1b3,	// (0x0003674b) bg_hwr_side_pane_g1_ParamLimits

0xc1b3,	// (0x0003674b) bg_hwr_side_pane_g1

0x65e7,	// (0x00030b7f) cell_hwr_side_pane_ParamLimits

0x65e7,	// (0x00030b7f) cell_hwr_side_pane

0x6622,	// (0x00030bba) fep_hwr_write_pane_g1_ParamLimits

0x6622,	// (0x00030bba) fep_hwr_write_pane_g1

0x662f,	// (0x00030bc7) fep_hwr_write_pane_g2_ParamLimits

0x662f,	// (0x00030bc7) fep_hwr_write_pane_g2

0x663c,	// (0x00030bd4) fep_hwr_write_pane_g3_ParamLimits

0x663c,	// (0x00030bd4) fep_hwr_write_pane_g3

0x664a,	// (0x00030be2) fep_hwr_write_pane_g4_ParamLimits

0x664a,	// (0x00030be2) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x0003a0a6) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x0003a0a6) fep_hwr_write_pane_g

0x6576,	// (0x00030b0e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6576,	// (0x00030b0e) bg_fep_hwr_candidate_pane_g2

0x665f,	// (0x00030bf7) cell_hwr_candidate_pane_ParamLimits

0x665f,	// (0x00030bf7) cell_hwr_candidate_pane

0x66a1,	// (0x00030c39) fep_hwr_candidate_pane_g1_ParamLimits

0xc213,	// (0x000367ab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc213,	// (0x000367ab) bg_popup_fep_shadow_pane_cp2

0xc3b1,	// (0x00036949) fep_vkb_top_pane_g4_ParamLimits

0xc3b1,	// (0x00036949) fep_vkb_top_pane_g4

0xc3f7,	// (0x0003698f) fep_vkb_side_pane_g2_ParamLimits

0xc3f7,	// (0x0003698f) fep_vkb_side_pane_g2

0x51b9,	// (0x0002f751) list_setting_pane_t4_ParamLimits

0x51b9,	// (0x0002f751) list_setting_pane_t4

0x5253,	// (0x0002f7eb) list_setting_number_pane_t5_ParamLimits

0x5253,	// (0x0002f7eb) list_setting_number_pane_t5

0x8ce7,	// (0x0003327f) list_double_heading_pane_cp2_ParamLimits

0x8ce7,	// (0x0003327f) list_double_heading_pane_cp2

0x862f,	// (0x00032bc7) list_double_heading_pane_g1_cp2_ParamLimits

0x862f,	// (0x00032bc7) list_double_heading_pane_g1_cp2

0x863b,	// (0x00032bd3) list_double_heading_pane_g2_cp2_ParamLimits

0x863b,	// (0x00032bd3) list_double_heading_pane_g2_cp2

0xc70c,	// (0x00036ca4) list_double_heading_pane_t1_cp2_ParamLimits

0xc70c,	// (0x00036ca4) list_double_heading_pane_t1_cp2

0xc722,	// (0x00036cba) list_double_heading_pane_t2_cp2_ParamLimits

0xc722,	// (0x00036cba) list_double_heading_pane_t2_cp2

0x7ca9,	// (0x00032241) aid_value_unit2

0x4c29,	// (0x0002f1c1) popup_preview_fixed_window

0x803e,	// (0x000325d6) bg_popup_preview_window_pane_cp02

0xc734,	// (0x00036ccc) list_preview_fixed_pane

0xc77a,	// (0x00036d12) list_empty_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_empty_pane_fp

0xc77a,	// (0x00036d12) list_single_cale_day_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_cale_day_pane_fp

0xc77a,	// (0x00036d12) list_single_graphic_heading_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_graphic_heading_pane_fp

0xc77a,	// (0x00036d12) list_single_graphic_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_graphic_pane_fp

0xc77a,	// (0x00036d12) list_single_heading_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_heading_pane_fp

0xc77a,	// (0x00036d12) list_single_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_pane_fp

0xc78f,	// (0x00036d27) list_single_pane_fp_g1_ParamLimits

0xc78f,	// (0x00036d27) list_single_pane_fp_g1

0x790a,	// (0x00031ea2) list_single_pane_fp_g2_ParamLimits

0x790a,	// (0x00031ea2) list_single_pane_fp_g2

0x7916,	// (0x00031eae) list_single_pane_fp_g3_ParamLimits

0x7916,	// (0x00031eae) list_single_pane_fp_g3

0xc79b,	// (0x00036d33) list_single_pane_fp_g4_ParamLimits

0xc79b,	// (0x00036d33) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x0003a10d) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x0003a10d) list_single_pane_fp_g

0x792a,	// (0x00031ec2) list_single_pane_fp_t1_ParamLimits

0x792a,	// (0x00031ec2) list_single_pane_fp_t1

0x7941,	// (0x00031ed9) list_single_graphic_pane_fp_g1_ParamLimits

0x7941,	// (0x00031ed9) list_single_graphic_pane_fp_g1

0xc78f,	// (0x00036d27) list_single_graphic_pane_fp_g2_ParamLimits

0xc78f,	// (0x00036d27) list_single_graphic_pane_fp_g2

0x790a,	// (0x00031ea2) list_single_graphic_pane_fp_g3_ParamLimits

0x790a,	// (0x00031ea2) list_single_graphic_pane_fp_g3

0x7916,	// (0x00031eae) list_single_graphic_pane_fp_g4_ParamLimits

0x7916,	// (0x00031eae) list_single_graphic_pane_fp_g4

0xc79b,	// (0x00036d33) list_single_graphic_pane_fp_g5_ParamLimits

0xc79b,	// (0x00036d33) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a116) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a116) list_single_graphic_pane_fp_g

0x794d,	// (0x00031ee5) list_single_graphic_pane_fp_t1_ParamLimits

0x794d,	// (0x00031ee5) list_single_graphic_pane_fp_t1

0x7941,	// (0x00031ed9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7941,	// (0x00031ed9) list_single_graphic_heading_pane_fp_g1

0xc78f,	// (0x00036d27) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc78f,	// (0x00036d27) list_single_graphic_heading_pane_fp_g2

0x790a,	// (0x00031ea2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x790a,	// (0x00031ea2) list_single_graphic_heading_pane_fp_g3

0x7916,	// (0x00031eae) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7916,	// (0x00031eae) list_single_graphic_heading_pane_fp_g4

0xc79b,	// (0x00036d33) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc79b,	// (0x00036d33) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a116) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a116) list_single_graphic_heading_pane_fp_g

0x7963,	// (0x00031efb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7963,	// (0x00031efb) list_single_graphic_heading_pane_fp_t1

0x7979,	// (0x00031f11) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7979,	// (0x00031f11) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0003a121) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0003a121) list_single_graphic_heading_pane_fp_t

0x798b,	// (0x00031f23) list_single_cale_day_pane_fp_g1_ParamLimits

0x798b,	// (0x00031f23) list_single_cale_day_pane_fp_g1

0xc7a7,	// (0x00036d3f) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7a7,	// (0x00036d3f) list_single_cale_day_pane_fp_g2

0x79c3,	// (0x00031f5b) list_single_cale_day_pane_fp_g3_ParamLimits

0x79c3,	// (0x00031f5b) list_single_cale_day_pane_fp_g3

0x79eb,	// (0x00031f83) list_single_cale_day_pane_fp_g4_ParamLimits

0x79eb,	// (0x00031f83) list_single_cale_day_pane_fp_g4

0x7a0f,	// (0x00031fa7) list_single_cale_day_pane_fp_g5_ParamLimits

0x7a0f,	// (0x00031fa7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x0003a126) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x0003a126) list_single_cale_day_pane_fp_g

0x7a33,	// (0x00031fcb) list_single_cale_day_pane_fp_t1_ParamLimits

0x7a33,	// (0x00031fcb) list_single_cale_day_pane_fp_t1

0x7a59,	// (0x00031ff1) list_single_cale_day_pane_fp_t2_ParamLimits

0x7a59,	// (0x00031ff1) list_single_cale_day_pane_fp_t2

0x7a72,	// (0x0003200a) list_single_cale_day_pane_fp_t3_ParamLimits

0x7a72,	// (0x0003200a) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x0003a131) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x0003a131) list_single_cale_day_pane_fp_t

0xc78f,	// (0x00036d27) list_empty_pane_fp_g1_ParamLimits

0xc78f,	// (0x00036d27) list_empty_pane_fp_g1

0x7a8b,	// (0x00032023) list_empty_pane_fp_t1

0x7a99,	// (0x00032031) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x0003a138) list_empty_pane_fp_t

0xc78f,	// (0x00036d27) list_single_heading_pane_fp_g1_ParamLimits

0xc78f,	// (0x00036d27) list_single_heading_pane_fp_g1

0x790a,	// (0x00031ea2) list_single_heading_pane_fp_g2_ParamLimits

0x790a,	// (0x00031ea2) list_single_heading_pane_fp_g2

0x7916,	// (0x00031eae) list_single_heading_pane_fp_g3_ParamLimits

0x7916,	// (0x00031eae) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x0003a13d) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x0003a13d) list_single_heading_pane_fp_g

0x7aa7,	// (0x0003203f) list_single_heading_pane_fp_t1_ParamLimits

0x7aa7,	// (0x0003203f) list_single_heading_pane_fp_t1

0x7ab9,	// (0x00032051) list_single_heading_pane_fp_t2_ParamLimits

0x7ab9,	// (0x00032051) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0003a144) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0003a144) list_single_heading_pane_fp_t

0x8823,	// (0x00032dbb) aid_size_cell_fast

0x7fae,	// (0x00032546) soft_indicator_pane_cp1_t1

0x8860,	// (0x00032df8) cell_app_pane_cp2_ParamLimits

0x8860,	// (0x00032df8) cell_app_pane_cp2

0x64e3,	// (0x00030a7b) fep_hwr_candidate_drop_down_list_pane

0x66bb,	// (0x00030c53) fep_hwr_candidate_pane_g3_ParamLimits

0x66bb,	// (0x00030c53) fep_hwr_candidate_pane_g3

0x3998,	// (0x0002df30) fep_hwr_candidate_pane_g4_ParamLimits

0x3998,	// (0x0002df30) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x0003a0b3) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x0003a0b3) fep_hwr_candidate_pane_g

0xc298,	// (0x00036830) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc298,	// (0x00036830) fep_vkb_candidate_drop_down_list_pane

0xc6a9,	// (0x00036c41) fep_vkb_candidate_pane_g3

0xc6b1,	// (0x00036c49) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x0003a0e0) fep_vkb_candidate_pane_g

0x6726,	// (0x00030cbe) cell_hwr_candidate_pane_g1_ParamLimits

0x6734,	// (0x00030ccc) cell_hwr_candidate_pane_g3_ParamLimits

0x6734,	// (0x00030ccc) cell_hwr_candidate_pane_g3

0xe178,	// (0x00038710) cell_hwr_candidate_pane_g4_ParamLimits

0xe178,	// (0x00038710) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x0003a0ff) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x0003a0ff) cell_hwr_candidate_pane_g

0xc6c8,	// (0x00036c60) cell_vkb_candidate_pane_g3_ParamLimits

0xc6c8,	// (0x00036c60) cell_vkb_candidate_pane_g3

0xc6e3,	// (0x00036c7b) cell_vkb_candidate_pane_g4_ParamLimits

0xc6e3,	// (0x00036c7b) cell_vkb_candidate_pane_g4

0xc7b3,	// (0x00036d4b) cell_app_pane_cp2_g1_ParamLimits

0xc7b3,	// (0x00036d4b) cell_app_pane_cp2_g1

0xc7d1,	// (0x00036d69) cell_app_pane_cp2_g2_ParamLimits

0xc7d1,	// (0x00036d69) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x0003a149) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x0003a149) cell_app_pane_cp2_g

0xc7dd,	// (0x00036d75) cell_app_pane_cp2_t1_ParamLimits

0xc7dd,	// (0x00036d75) cell_app_pane_cp2_t1

0x8621,	// (0x00032bb9) grid_highlight_pane_cp1_ParamLimits

0x8621,	// (0x00032bb9) grid_highlight_pane_cp1

0x6773,	// (0x00030d0b) cell_hwr_candidate_pane_cp1_ParamLimits

0x6773,	// (0x00030d0b) cell_hwr_candidate_pane_cp1

0x6726,	// (0x00030cbe) fep_hwr_candidate_drop_down_list_pane_g1

0x6792,	// (0x00030d2a) fep_hwr_candidate_drop_down_list_pane_g2

0x679f,	// (0x00030d37) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x0003a14e) fep_hwr_candidate_drop_down_list_pane_g

0x67ac,	// (0x00030d44) fep_hwr_candidate_drop_down_list_scroll_pane

0x67b5,	// (0x00030d4d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x67b5,	// (0x00030d4d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x67c2,	// (0x00030d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x67c2,	// (0x00030d5a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x67cf,	// (0x00030d67) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x67cf,	// (0x00030d67) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x67dc,	// (0x00030d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x67dc,	// (0x00030d74) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x67f7,	// (0x00030d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x67f7,	// (0x00030d8f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6812,	// (0x00030daa) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6812,	// (0x00030daa) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x682d,	// (0x00030dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x682d,	// (0x00030dc5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6848,	// (0x00030de0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6848,	// (0x00030de0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x0003a155) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x0003a155) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7ef,	// (0x00036d87) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7ef,	// (0x00036d87) cell_vkb_candidate_pane_cp1

0xc3b1,	// (0x00036949) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3b1,	// (0x00036949) fep_vkb_candidate_drop_down_list_pane_g1

0xc80f,	// (0x00036da7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc80f,	// (0x00036da7) fep_vkb_candidate_drop_down_list_pane_g2

0xc81c,	// (0x00036db4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc81c,	// (0x00036db4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbce,	// (0x0003a166) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbce,	// (0x0003a166) fep_vkb_candidate_drop_down_list_pane_g

0xc829,	// (0x00036dc1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc829,	// (0x00036dc1) fep_vkb_candidate_drop_down_list_scroll_pane

0xc836,	// (0x00036dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc836,	// (0x00036dce) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc843,	// (0x00036ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc843,	// (0x00036ddb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc84f,	// (0x00036de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc84f,	// (0x00036de7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc85b,	// (0x00036df3) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc85b,	// (0x00036df3) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc87c,	// (0x00036e14) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc87c,	// (0x00036e14) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc89d,	// (0x00036e35) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc89d,	// (0x00036e35) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8be,	// (0x00036e56) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8be,	// (0x00036e56) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8df,	// (0x00036e77) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8df,	// (0x00036e77) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd5,	// (0x0003a16d) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd5,	// (0x0003a16d) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7cdf,	// (0x00032277) title_pane_g1_ParamLimits

0x7cec,	// (0x00032284) title_pane_g2_ParamLimits

0xf554,	// (0x00039aec) title_pane_g_ParamLimits

0x8c90,	// (0x00033228) aid_call2_pane

0x8c98,	// (0x00033230) aid_call_pane

0x8ca0,	// (0x00033238) popup_clock_analogue_window_g1

0x8ca0,	// (0x00033238) popup_clock_analogue_window_g2

0x5661,	// (0x0002fbf9) popup_clock_analogue_window_g3

0x566a,	// (0x0002fc02) popup_clock_analogue_window_g4

0x7ccb,	// (0x00032263) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x00039c96) popup_clock_analogue_window_g

0x5672,	// (0x0002fc0a) popup_clock_analogue_window_t1

0x5680,	// (0x0002fc18) clock_digital_number_pane_ParamLimits

0x5680,	// (0x0002fc18) clock_digital_number_pane

0x568c,	// (0x0002fc24) clock_digital_number_pane_cp02_ParamLimits

0x568c,	// (0x0002fc24) clock_digital_number_pane_cp02

0x5698,	// (0x0002fc30) clock_digital_number_pane_cp03_ParamLimits

0x5698,	// (0x0002fc30) clock_digital_number_pane_cp03

0x56a4,	// (0x0002fc3c) clock_digital_number_pane_cp04_ParamLimits

0x56a4,	// (0x0002fc3c) clock_digital_number_pane_cp04

0x56b0,	// (0x0002fc48) clock_digital_separator_pane_ParamLimits

0x56b0,	// (0x0002fc48) clock_digital_separator_pane

0x56bc,	// (0x0002fc54) popup_clock_digital_window_t1_ParamLimits

0x56bc,	// (0x0002fc54) popup_clock_digital_window_t1

0x7ccb,	// (0x00032263) clock_digital_number_pane_g1

0x7ccb,	// (0x00032263) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x00039ca1) clock_digital_number_pane_g

0x7ccb,	// (0x00032263) clock_digital_separator_pane_g1

0x7ccb,	// (0x00032263) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x00039ca1) clock_digital_separator_pane_g

0x960a,	// (0x00033ba2) aid_fill_nsta_ParamLimits

0x9750,	// (0x00033ce8) indicator_nsta_pane_ParamLimits

0x98c9,	// (0x00033e61) popup_clock_analogue_window

0x98c9,	// (0x00033e61) popup_clock_digital_window

0x7db5,	// (0x0003234d) grid_indicator_nsta_pane_ParamLimits

0xbb28,	// (0x000360c0) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x0003a033) clock_nsta_pane_t

0x5625,	// (0x0002fbbd) aid_size_max_handle

0x562f,	// (0x0002fbc7) aid_size_min_handle

0x92a8,	// (0x00033840) editor_scroll_pane

0xc8fa,	// (0x00036e92) ex_editor_pane

0x8791,	// (0x00032d29) scroll_pane_cp13

0x85c0,	// (0x00032b58) scroll_pane_cp14

0x8ccf,	// (0x00033267) scroll_pane_cp36

0x8cfb,	// (0x00033293) list_single_graphic_hl_pane_cp2_ParamLimits

0x8cfb,	// (0x00033293) list_single_graphic_hl_pane_cp2

0xb098,	// (0x00035630) list_single_graphic_hl_pane_ParamLimits

0xb098,	// (0x00035630) list_single_graphic_hl_pane

0x7acf,	// (0x00032067) aid_size_min_hl_cp1

0xc902,	// (0x00036e9a) list_highlight_pane_cp34_ParamLimits

0xc902,	// (0x00036e9a) list_highlight_pane_cp34

0xc913,	// (0x00036eab) list_single_graphic_hl_pane_g1_ParamLimits

0xc913,	// (0x00036eab) list_single_graphic_hl_pane_g1

0x7ad8,	// (0x00032070) list_single_graphic_hl_pane_g2_ParamLimits

0x7ad8,	// (0x00032070) list_single_graphic_hl_pane_g2

0x7ad8,	// (0x00032070) list_single_graphic_hl_pane_g3_ParamLimits

0x7ad8,	// (0x00032070) list_single_graphic_hl_pane_g3

0x7ae4,	// (0x0003207c) list_single_graphic_hl_pane_g4_ParamLimits

0x7ae4,	// (0x0003207c) list_single_graphic_hl_pane_g4

0x7af0,	// (0x00032088) list_single_graphic_hl_pane_g5_ParamLimits

0x7af0,	// (0x00032088) list_single_graphic_hl_pane_g5

0x0004,

0xfbe6,	// (0x0003a17e) list_single_graphic_hl_pane_g_ParamLimits

0xfbe6,	// (0x0003a17e) list_single_graphic_hl_pane_g

0x7b04,	// (0x0003209c) list_single_graphic_hl_pane_t1_ParamLimits

0x7b04,	// (0x0003209c) list_single_graphic_hl_pane_t1

0xc920,	// (0x00036eb8) aid_size_min_hl_cp2

0xc929,	// (0x00036ec1) list_highlight_pane_cp34_cp2_ParamLimits

0xc929,	// (0x00036ec1) list_highlight_pane_cp34_cp2

0xc913,	// (0x00036eab) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc913,	// (0x00036eab) list_single_graphic_hl_pane_g1_cp2

0xc936,	// (0x00036ece) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc936,	// (0x00036ece) list_single_graphic_hl_pane_g2_cp2

0xc942,	// (0x00036eda) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc942,	// (0x00036eda) list_single_graphic_hl_pane_g3_cp2

0xba7a,	// (0x00036012) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xba7a,	// (0x00036012) list_single_graphic_hl_pane_g4_cp2

0xc950,	// (0x00036ee8) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc950,	// (0x00036ee8) list_single_graphic_hl_pane_g5_cp2

0x5970,	// (0x0002ff08) control_pane_g4_ParamLimits

0x5970,	// (0x0002ff08) control_pane_g4

0x95e8,	// (0x00033b80) bg_popup_sub_pane_cp10_ParamLimits

0xc13d,	// (0x000366d5) list_choice_list_pane_ParamLimits

0xc14c,	// (0x000366e4) scroll_pane_cp23

0x803e,	// (0x000325d6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc734,	// (0x00036ccc) list_preview_fixed_pane_ParamLimits

0xc74a,	// (0x00036ce2) list_preview_fixed_pane_cp_ParamLimits

0xc74a,	// (0x00036ce2) list_preview_fixed_pane_cp

0xc756,	// (0x00036cee) popup_preview_fixed_window_g1_ParamLimits

0xc756,	// (0x00036cee) popup_preview_fixed_window_g1

0xc762,	// (0x00036cfa) popup_preview_fixed_window_g2_ParamLimits

0xc762,	// (0x00036cfa) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x0003a106) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x0003a106) popup_preview_fixed_window_g

0x5599,	// (0x0002fb31) aid_navi_side_left_pane_ParamLimits

0x55ae,	// (0x0002fb46) aid_navi_side_right_pane_ParamLimits

0x55c6,	// (0x0002fb5e) navi_icon_pane_stacon_ParamLimits

0x55da,	// (0x0002fb72) navi_navi_pane_stacon_ParamLimits

0x55c6,	// (0x0002fb5e) navi_text_pane_stacon_ParamLimits

0x4aea,	// (0x0002f082) main_text_info_pane

0xc97a,	// (0x00036f12) listscroll_text_info_pane

0xc982,	// (0x00036f1a) list_text_info_pane_ParamLimits

0xc982,	// (0x00036f1a) list_text_info_pane

0xc991,	// (0x00036f29) scroll_pane_cp24_ParamLimits

0xc991,	// (0x00036f29) scroll_pane_cp24

0xc9af,	// (0x00036f47) list_text_info_pane_t1_ParamLimits

0xc9af,	// (0x00036f47) list_text_info_pane_t1

0x5ac8,	// (0x00030060) popup_fast_swap2_window_ParamLimits

0x5ac8,	// (0x00030060) popup_fast_swap2_window

0xc9e0,	// (0x00036f78) aid_size_cell_fast2

0x7cc1,	// (0x00032259) bg_popup_window_pane_cp17

0x9f50,	// (0x000344e8) heading_pane_cp2

0x828a,	// (0x00032822) listscroll_fast2_pane

0xc9ea,	// (0x00036f82) grid_fast2_pane

0xc9f4,	// (0x00036f8c) listscroll_fast2_pane_g1

0xc9fc,	// (0x00036f94) listscroll_fast2_pane_g2

0x0001,

0xfbf1,	// (0x0003a189) listscroll_fast2_pane_g

0x8791,	// (0x00032d29) scroll_pane_cp26

0xca06,	// (0x00036f9e) cell_fast2_pane_ParamLimits

0xca06,	// (0x00036f9e) cell_fast2_pane

0xca1b,	// (0x00036fb3) cell_fast2_pane_g1

0xca24,	// (0x00036fbc) cell_fast2_pane_g2

0xca2d,	// (0x00036fc5) cell_fast2_pane_g3

0x0002,

0xfbf6,	// (0x0003a18e) cell_fast2_pane_g

0x837d,	// (0x00032915) grid_highlight_pane_cp9

0x5a8e,	// (0x00030026) main_eswt_pane_ParamLimits

0x5a8e,	// (0x00030026) main_eswt_pane

0xc9a6,	// (0x00036f3e) list_single_text_info_pane

0xca35,	// (0x00036fcd) eswt_ctrl_button_pane

0xca35,	// (0x00036fcd) eswt_ctrl_canvas_pane

0xca3d,	// (0x00036fd5) eswt_ctrl_combo_pane

0xca35,	// (0x00036fcd) eswt_ctrl_default_pane

0xca35,	// (0x00036fcd) eswt_ctrl_label_pane

0xca45,	// (0x00036fdd) eswt_ctrl_wait_pane

0xca4d,	// (0x00036fe5) eswt_shell_pane

0x7cc1,	// (0x00032259) listscroll_eswt_app_pane

0xca6d,	// (0x00037005) popup_eswt_tasktip_window_ParamLimits

0xca6d,	// (0x00037005) popup_eswt_tasktip_window

0x9b66,	// (0x000340fe) bg_popup_window_pane_cp18

0xca7e,	// (0x00037016) eswt_control_pane_g1_ParamLimits

0xca7e,	// (0x00037016) eswt_control_pane_g1

0xca8b,	// (0x00037023) eswt_control_pane_g2_ParamLimits

0xca8b,	// (0x00037023) eswt_control_pane_g2

0xca98,	// (0x00037030) eswt_control_pane_g3_ParamLimits

0xca98,	// (0x00037030) eswt_control_pane_g3

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_ParamLimits

0xcaa5,	// (0x0003703d) eswt_control_pane_g4

0x0003,

0xfbfd,	// (0x0003a195) eswt_control_pane_g_ParamLimits

0xfbfd,	// (0x0003a195) eswt_control_pane_g

0x8621,	// (0x00032bb9) bg_button_pane_ParamLimits

0x8621,	// (0x00032bb9) bg_button_pane

0x8392,	// (0x0003292a) common_borders_pane_copy2_ParamLimits

0x8392,	// (0x0003292a) common_borders_pane_copy2

0xcab2,	// (0x0003704a) control_button_pane_g1_ParamLimits

0xcab2,	// (0x0003704a) control_button_pane_g1

0xcabe,	// (0x00037056) control_button_pane_g2_ParamLimits

0xcabe,	// (0x00037056) control_button_pane_g2

0xcaca,	// (0x00037062) control_button_pane_g3_ParamLimits

0xcaca,	// (0x00037062) control_button_pane_g3

0x0002,

0xfc06,	// (0x0003a19e) control_button_pane_g_ParamLimits

0xfc06,	// (0x0003a19e) control_button_pane_g

0xcade,	// (0x00037076) control_button_pane_t1

0xcaec,	// (0x00037084) control_button_pane_t2

0x0001,

0xfc0d,	// (0x0003a1a5) control_button_pane_t

0x9af2,	// (0x0003408a) bg_button_pane_g1

0x9b02,	// (0x0003409a) bg_button_pane_g2

0x9afa,	// (0x00034092) bg_button_pane_g3

0x9b12,	// (0x000340aa) bg_button_pane_g4

0x9b0a,	// (0x000340a2) bg_button_pane_g5

0x9b1a,	// (0x000340b2) bg_button_pane_g6

0x9b22,	// (0x000340ba) bg_button_pane_g7

0x9b32,	// (0x000340ca) bg_button_pane_g8

0x9b2a,	// (0x000340c2) bg_button_pane_g9

0x0008,

0xf86c,	// (0x00039e04) bg_button_pane_g

0xc0f8,	// (0x00036690) common_borders_pane_ParamLimits

0xc0f8,	// (0x00036690) common_borders_pane

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy1_ParamLimits

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy1

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy1_ParamLimits

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy1

0xca98,	// (0x00037030) eswt_control_pane_g3_copy1_ParamLimits

0xca98,	// (0x00037030) eswt_control_pane_g3_copy1

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy1_ParamLimits

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy1

0xc133,	// (0x000366cb) bg_eswt_ctrl_canvas_pane_g1

0xc0f8,	// (0x00036690) common_borders_pane_cp2_ParamLimits

0xc0f8,	// (0x00036690) common_borders_pane_cp2

0xc0f8,	// (0x00036690) common_borders_pane_cp3_ParamLimits

0xc0f8,	// (0x00036690) common_borders_pane_cp3

0xcafa,	// (0x00037092) separator_horizontal_pane

0xcb02,	// (0x0003709a) separator_vertical_pane

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy2_ParamLimits

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy2

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy2_ParamLimits

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy2

0xca98,	// (0x00037030) eswt_control_pane_g3_copy2_ParamLimits

0xca98,	// (0x00037030) eswt_control_pane_g3_copy2

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy2_ParamLimits

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy2

0x7cc1,	// (0x00032259) common_borders_pane_cp4

0xcb0b,	// (0x000370a3) separator_horizontal_pane_g1

0xcb14,	// (0x000370ac) separator_horizontal_pane_g2

0xcb1d,	// (0x000370b5) separator_horizontal_pane_g3

0x0002,

0xfc12,	// (0x0003a1aa) separator_horizontal_pane_g

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy3_ParamLimits

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy3

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy3_ParamLimits

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy3

0xca98,	// (0x00037030) eswt_control_pane_g3_copy3_ParamLimits

0xca98,	// (0x00037030) eswt_control_pane_g3_copy3

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy3_ParamLimits

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy3

0x7cc1,	// (0x00032259) common_borders_pane_cp5

0xcb26,	// (0x000370be) separator_vertical_pane_g1

0xcb2f,	// (0x000370c7) separator_vertical_pane_g2

0xcb38,	// (0x000370d0) separator_vertical_pane_g3

0x0002,

0xfc19,	// (0x0003a1b1) separator_vertical_pane_g

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy4_ParamLimits

0xca7e,	// (0x00037016) eswt_control_pane_g1_copy4

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy4_ParamLimits

0xca8b,	// (0x00037023) eswt_control_pane_g2_copy4

0xca98,	// (0x00037030) eswt_control_pane_g3_copy4_ParamLimits

0xca98,	// (0x00037030) eswt_control_pane_g3_copy4

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy4_ParamLimits

0xcaa5,	// (0x0003703d) eswt_control_pane_g4_copy4

0xcb41,	// (0x000370d9) eswt_ctrl_combo_button_pane

0xcb49,	// (0x000370e1) eswt_ctrl_input_pane

0xcb51,	// (0x000370e9) popup_choice_list_window_cp70

0xcb59,	// (0x000370f1) eswt_ctrl_input_pane_t1

0x7cc1,	// (0x00032259) input_focus_pane_cp70

0xc0f8,	// (0x00036690) bg_button_pane_cp70_ParamLimits

0xc0f8,	// (0x00036690) bg_button_pane_cp70

0xcb67,	// (0x000370ff) eswt_ctrl_combo_button_pane_g1

0xcb6f,	// (0x00037107) wait_bar_pane_cp70

0x9b66,	// (0x000340fe) bg_popup_window_pane_cp70_ParamLimits

0x9b66,	// (0x000340fe) bg_popup_window_pane_cp70

0xcb77,	// (0x0003710f) popup_eswt_tasktip_window_t1

0xcb8d,	// (0x00037125) wait_bar_pane_cp71_ParamLimits

0xcb8d,	// (0x00037125) wait_bar_pane_cp71

0xcb99,	// (0x00037131) grid_eswt_app_pane

0x8aa9,	// (0x00033041) scroll_pane_cp70

0xcba2,	// (0x0003713a) cell_eswt_app_pane_ParamLimits

0xcba2,	// (0x0003713a) cell_eswt_app_pane

0xcbd2,	// (0x0003716a) cell_eswt_app_pane_g1_ParamLimits

0xcbd2,	// (0x0003716a) cell_eswt_app_pane_g1

0xcc01,	// (0x00037199) cell_eswt_app_pane_g2_ParamLimits

0xcc01,	// (0x00037199) cell_eswt_app_pane_g2

0x0001,

0xfc20,	// (0x0003a1b8) cell_eswt_app_pane_g_ParamLimits

0xfc20,	// (0x0003a1b8) cell_eswt_app_pane_g

0xcc2a,	// (0x000371c2) cell_eswt_app_pane_t1_ParamLimits

0xcc2a,	// (0x000371c2) cell_eswt_app_pane_t1

0xcc5c,	// (0x000371f4) grid_highlight_pane_cp70_ParamLimits

0xcc5c,	// (0x000371f4) grid_highlight_pane_cp70

0x917d,	// (0x00033715) set_content_pane_g1

0x9548,	// (0x00033ae0) status_small_volume_pane

0x6863,	// (0x00030dfb) status_small_volume_pane_g1

0x686b,	// (0x00030e03) volume_small2_pane

0x6874,	// (0x00030e0c) volume_small2_pane_g1

0x687d,	// (0x00030e15) volume_small2_pane_g2

0x6886,	// (0x00030e1e) volume_small2_pane_g3

0x688f,	// (0x00030e27) volume_small2_pane_g4

0x6898,	// (0x00030e30) volume_small2_pane_g5

0x68a1,	// (0x00030e39) volume_small2_pane_g6

0x68aa,	// (0x00030e42) volume_small2_pane_g7

0x68b3,	// (0x00030e4b) volume_small2_pane_g8

0x68bc,	// (0x00030e54) volume_small2_pane_g9

0x68c5,	// (0x00030e5d) volume_small2_pane_g10

0x0009,

0xfc25,	// (0x0003a1bd) volume_small2_pane_g

0xc4f9,	// (0x00036a91) fep_vkb_top_text_pane_g1_ParamLimits

0xc514,	// (0x00036aac) fep_vkb_top_text_pane_t1_ParamLimits

0xc76e,	// (0x00036d06) popup_preview_fixed_window_g3_ParamLimits

0xc76e,	// (0x00036d06) popup_preview_fixed_window_g3

0x5f75,	// (0x0003050d) popup_toolbar_trans_pane

0xaebd,	// (0x00035455) aid_height_set_list_ParamLimits

0xaece,	// (0x00035466) aid_size_parent_ParamLimits

0x95e8,	// (0x00033b80) list_highlight_pane_cp2_ParamLimits

0x917d,	// (0x00033715) set_content_pane_g1_ParamLimits

0xb0b4,	// (0x0003564c) list_single_image_pane_ParamLimits

0xb0b4,	// (0x0003564c) list_single_image_pane

0xcc68,	// (0x00037200) aid_size_cell_image_ParamLimits

0xcc68,	// (0x00037200) aid_size_cell_image

0xcc75,	// (0x0003720d) grid_single_image_pane_ParamLimits

0xcc75,	// (0x0003720d) grid_single_image_pane

0xa334,	// (0x000348cc) list_single_image_pane_g1_ParamLimits

0xa334,	// (0x000348cc) list_single_image_pane_g1

0xcc81,	// (0x00037219) list_single_image_pane_g2_ParamLimits

0xcc81,	// (0x00037219) list_single_image_pane_g2

0x0001,

0xfc3a,	// (0x0003a1d2) list_single_image_pane_g_ParamLimits

0xfc3a,	// (0x0003a1d2) list_single_image_pane_g

0xcc95,	// (0x0003722d) list_single_image_pane_t1_ParamLimits

0xcc95,	// (0x0003722d) list_single_image_pane_t1

0xccab,	// (0x00037243) cell_image_list_pane_ParamLimits

0xccab,	// (0x00037243) cell_image_list_pane

0xccbf,	// (0x00037257) cell_image_list_pane_g1

0xccc8,	// (0x00037260) cell_image_list_pane_g2

0x0001,

0xfc3f,	// (0x0003a1d7) cell_image_list_pane_g

0xccd1,	// (0x00037269) aid_size_cell_tb_trans_pane

0x8621,	// (0x00032bb9) bg_tb_trans_pane

0xcce3,	// (0x0003727b) grid_tb_trans_pane

0x9af2,	// (0x0003408a) bg_tb_trans_pane_g1

0x9b02,	// (0x0003409a) bg_tb_trans_pane_g2

0x9afa,	// (0x00034092) bg_tb_trans_pane_g3

0x9b12,	// (0x000340aa) bg_tb_trans_pane_g4

0x9b0a,	// (0x000340a2) bg_tb_trans_pane_g5

0x9b32,	// (0x000340ca) bg_tb_trans_pane_g6

0x9b2a,	// (0x000340c2) bg_tb_trans_pane_g7

0x9b1a,	// (0x000340b2) bg_tb_trans_pane_g8

0x9b22,	// (0x000340ba) bg_tb_trans_pane_g9

0x0008,

0xfc44,	// (0x0003a1dc) bg_tb_trans_pane_g

0xccf7,	// (0x0003728f) cell_toolbar_trans_pane_ParamLimits

0xccf7,	// (0x0003728f) cell_toolbar_trans_pane

0xc133,	// (0x000366cb) cell_toolbar_trans_pane_g1

0xbcfd,	// (0x00036295) list_form2_midp_pane_t1

0xbd0b,	// (0x000362a3) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x0003a079) list_form2_midp_pane_t

0xbd19,	// (0x000362b1) scroll_pane_cp51_ParamLimits

0xbed5,	// (0x0003646d) form2_midp_wait_pane_g1

0xbede,	// (0x00036476) form2_midp_wait_pane_g2

0xbee7,	// (0x0003647f) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x0003a08e) form2_midp_wait_pane_g

0x7db5,	// (0x0003234d) list_highlight_pane_cp21_ParamLimits

0xbf3e,	// (0x000364d6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf4d,	// (0x000364e5) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x758f,	// (0x00031b27) list_single_2graphic_im_pane_ParamLimits

0x758f,	// (0x00031b27) list_single_2graphic_im_pane

0xcd1d,	// (0x000372b5) list_single_2graphic_im_pane_g1_ParamLimits

0xcd1d,	// (0x000372b5) list_single_2graphic_im_pane_g1

0xcd2e,	// (0x000372c6) list_single_2graphic_im_pane_g2_ParamLimits

0xcd2e,	// (0x000372c6) list_single_2graphic_im_pane_g2

0xcd3a,	// (0x000372d2) list_single_2graphic_im_pane_g3_ParamLimits

0xcd3a,	// (0x000372d2) list_single_2graphic_im_pane_g3

0x0003,

0xfc57,	// (0x0003a1ef) list_single_2graphic_im_pane_g_ParamLimits

0xfc57,	// (0x0003a1ef) list_single_2graphic_im_pane_g

0xcd5a,	// (0x000372f2) list_single_2graphic_im_pane_t1_ParamLimits

0xcd5a,	// (0x000372f2) list_single_2graphic_im_pane_t1

0xc77a,	// (0x00036d12) list_single_graphic_2heading_pane_fp_ParamLimits

0xc77a,	// (0x00036d12) list_single_graphic_2heading_pane_fp

0x7941,	// (0x00031ed9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7941,	// (0x00031ed9) list_single_graphic_2heading_pane_fp_g1

0xc78f,	// (0x00036d27) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc78f,	// (0x00036d27) list_single_graphic_2heading_pane_fp_g2

0x790a,	// (0x00031ea2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x790a,	// (0x00031ea2) list_single_graphic_2heading_pane_fp_g3

0x7916,	// (0x00031eae) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7916,	// (0x00031eae) list_single_graphic_2heading_pane_fp_g4

0xc79b,	// (0x00036d33) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc79b,	// (0x00036d33) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x0003a116) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x0003a116) list_single_graphic_2heading_pane_fp_g

0x7b1a,	// (0x000320b2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7b1a,	// (0x000320b2) list_single_graphic_2heading_pane_fp_t1

0x7979,	// (0x00031f11) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7979,	// (0x00031f11) list_single_graphic_2heading_pane_fp_t2

0x7b30,	// (0x000320c8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7b30,	// (0x000320c8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc60,	// (0x0003a1f8) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc60,	// (0x0003a1f8) list_single_graphic_2heading_pane_fp_t

0xc1bf,	// (0x00036757) fep_hwr_write_pane_g5_ParamLimits

0xc1bf,	// (0x00036757) fep_hwr_write_pane_g5

0xc1cb,	// (0x00036763) fep_hwr_write_pane_g6_ParamLimits

0xc1cb,	// (0x00036763) fep_hwr_write_pane_g6

0xca4d,	// (0x00036fe5) eswt_shell_pane_ParamLimits

0x9b66,	// (0x000340fe) bg_popup_window_pane_cp18_ParamLimits

0xae16,	// (0x000353ae) heading_pane_cp70

0xcb77,	// (0x0003710f) popup_eswt_tasktip_window_t1_ParamLimits

0x965f,	// (0x00033bf7) aid_touch_tab_arrow_left

0x966e,	// (0x00033c06) aid_touch_tab_arrow_right

0x7cfd,	// (0x00032295) title_pane_g3_ParamLimits

0x7cfd,	// (0x00032295) title_pane_g3

0x85e0,	// (0x00032b78) set_value_pane_g1

0x5f75,	// (0x0003050d) popup_toolbar_trans_pane_ParamLimits

0xccd1,	// (0x00037269) aid_size_cell_tb_trans_pane_ParamLimits

0x8621,	// (0x00032bb9) bg_tb_trans_pane_ParamLimits

0xcce3,	// (0x0003727b) grid_tb_trans_pane_ParamLimits

0x803e,	// (0x000325d6) cont_note_pane_ParamLimits

0x803e,	// (0x000325d6) cont_note_pane

0x8392,	// (0x0003292a) cont_snote2_single_text_pane_ParamLimits

0x8392,	// (0x0003292a) cont_snote2_single_text_pane

0x8392,	// (0x0003292a) cont_snote2_single_graphic_pane_ParamLimits

0x8392,	// (0x0003292a) cont_snote2_single_graphic_pane

0xa16b,	// (0x00034703) cont_note_wait_pane_ParamLimits

0xa16b,	// (0x00034703) cont_note_wait_pane

0xa16b,	// (0x00034703) cont_note_image_pane_ParamLimits

0xa16b,	// (0x00034703) cont_note_image_pane

0xcd8b,	// (0x00037323) popup_note2_window_g1_ParamLimits

0xcd8b,	// (0x00037323) popup_note2_window_g1

0xcdbc,	// (0x00037354) popup_note2_window_t1_ParamLimits

0xcdbc,	// (0x00037354) popup_note2_window_t1

0xce01,	// (0x00037399) popup_note2_window_t2_ParamLimits

0xce01,	// (0x00037399) popup_note2_window_t2

0xce46,	// (0x000373de) popup_note2_window_t3_ParamLimits

0xce46,	// (0x000373de) popup_note2_window_t3

0xce8b,	// (0x00037423) popup_note2_window_t4_ParamLimits

0xce8b,	// (0x00037423) popup_note2_window_t4

0x80c2,	// (0x0003265a) popup_note2_window_t5_ParamLimits

0x80c2,	// (0x0003265a) popup_note2_window_t5

0x0004,

0xfc6c,	// (0x0003a204) popup_note2_window_t_ParamLimits

0xfc6c,	// (0x0003a204) popup_note2_window_t

0xceba,	// (0x00037452) popup_note2_image_window_g1_ParamLimits

0xceba,	// (0x00037452) popup_note2_image_window_g1

0xcec6,	// (0x0003745e) popup_note2_image_window_g2_ParamLimits

0xcec6,	// (0x0003745e) popup_note2_image_window_g2

0x0001,

0xfc77,	// (0x0003a20f) popup_note2_image_window_g_ParamLimits

0xfc77,	// (0x0003a20f) popup_note2_image_window_g

0xced8,	// (0x00037470) popup_note2_image_window_t1_ParamLimits

0xced8,	// (0x00037470) popup_note2_image_window_t1

0xcef0,	// (0x00037488) popup_note2_image_window_t2_ParamLimits

0xcef0,	// (0x00037488) popup_note2_image_window_t2

0xcf08,	// (0x000374a0) popup_note2_image_window_t3_ParamLimits

0xcf08,	// (0x000374a0) popup_note2_image_window_t3

0x0002,

0xfc7c,	// (0x0003a214) popup_note2_image_window_t_ParamLimits

0xfc7c,	// (0x0003a214) popup_note2_image_window_t

0xa179,	// (0x00034711) popup_note2_wait_window_g1_ParamLimits

0xa179,	// (0x00034711) popup_note2_wait_window_g1

0xcf24,	// (0x000374bc) popup_note2_wait_window_g2_ParamLimits

0xcf24,	// (0x000374bc) popup_note2_wait_window_g2

0xa191,	// (0x00034729) popup_note2_wait_window_g3_ParamLimits

0xa191,	// (0x00034729) popup_note2_wait_window_g3

0x0002,

0xfc83,	// (0x0003a21b) popup_note2_wait_window_g_ParamLimits

0xfc83,	// (0x0003a21b) popup_note2_wait_window_g

0xcf30,	// (0x000374c8) popup_note2_wait_window_t1_ParamLimits

0xcf30,	// (0x000374c8) popup_note2_wait_window_t1

0xcf4e,	// (0x000374e6) popup_note2_wait_window_t2_ParamLimits

0xcf4e,	// (0x000374e6) popup_note2_wait_window_t2

0xcf6c,	// (0x00037504) popup_note2_wait_window_t3_ParamLimits

0xcf6c,	// (0x00037504) popup_note2_wait_window_t3

0xcf7e,	// (0x00037516) popup_note2_wait_window_t4_ParamLimits

0xcf7e,	// (0x00037516) popup_note2_wait_window_t4

0x0003,

0xfc8a,	// (0x0003a222) popup_note2_wait_window_t_ParamLimits

0xfc8a,	// (0x0003a222) popup_note2_wait_window_t

0xcf90,	// (0x00037528) wait_bar2_pane_ParamLimits

0xcf90,	// (0x00037528) wait_bar2_pane

0xcfa8,	// (0x00037540) popup_snote2_single_text_window_g1_ParamLimits

0xcfa8,	// (0x00037540) popup_snote2_single_text_window_g1

0xcfd0,	// (0x00037568) popup_snote2_single_text_window_t1_ParamLimits

0xcfd0,	// (0x00037568) popup_snote2_single_text_window_t1

0xd01c,	// (0x000375b4) popup_snote2_single_text_window_t2_ParamLimits

0xd01c,	// (0x000375b4) popup_snote2_single_text_window_t2

0xd068,	// (0x00037600) popup_snote2_single_text_window_t3_ParamLimits

0xd068,	// (0x00037600) popup_snote2_single_text_window_t3

0xd0a9,	// (0x00037641) popup_snote2_single_text_window_t4_ParamLimits

0xd0a9,	// (0x00037641) popup_snote2_single_text_window_t4

0xd0df,	// (0x00037677) popup_snote2_single_text_window_t5_ParamLimits

0xd0df,	// (0x00037677) popup_snote2_single_text_window_t5

0x0004,

0xfc93,	// (0x0003a22b) popup_snote2_single_text_window_t_ParamLimits

0xfc93,	// (0x0003a22b) popup_snote2_single_text_window_t

0xd10a,	// (0x000376a2) popup_snote2_single_graphic_window_g1_ParamLimits

0xd10a,	// (0x000376a2) popup_snote2_single_graphic_window_g1

0xd132,	// (0x000376ca) popup_snote2_single_graphic_window_g2_ParamLimits

0xd132,	// (0x000376ca) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9e,	// (0x0003a236) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9e,	// (0x0003a236) popup_snote2_single_graphic_window_g

0xd15a,	// (0x000376f2) popup_snote2_single_graphic_window_t1_ParamLimits

0xd15a,	// (0x000376f2) popup_snote2_single_graphic_window_t1

0xd1a6,	// (0x0003773e) popup_snote2_single_graphic_window_t2_ParamLimits

0xd1a6,	// (0x0003773e) popup_snote2_single_graphic_window_t2

0xd068,	// (0x00037600) popup_snote2_single_graphic_window_t3_ParamLimits

0xd068,	// (0x00037600) popup_snote2_single_graphic_window_t3

0xd0a9,	// (0x00037641) popup_snote2_single_graphic_window_t4_ParamLimits

0xd0a9,	// (0x00037641) popup_snote2_single_graphic_window_t4

0xd0df,	// (0x00037677) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0df,	// (0x00037677) popup_snote2_single_graphic_window_t5

0x0004,

0xfca3,	// (0x0003a23b) popup_snote2_single_graphic_window_t_ParamLimits

0xfca3,	// (0x0003a23b) popup_snote2_single_graphic_window_t

0xbbda,	// (0x00036172) clock_nsta_pane_cp2_t1

0xbbda,	// (0x00036172) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x0003a04f) clock_nsta_pane_cp2_t

0x536b,	// (0x0002f903) form_field_data_wide_pane_g1_ParamLimits

0x862f,	// (0x00032bc7) form_field_data_wide_pane_g2_ParamLimits

0x862f,	// (0x00032bc7) form_field_data_wide_pane_g2

0x863b,	// (0x00032bd3) form_field_data_wide_pane_g3_ParamLimits

0x863b,	// (0x00032bd3) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x00039c19) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x00039c19) form_field_data_wide_pane_g

0xbac4,	// (0x0003605c) grid_touch_3_pane_ParamLimits

0xbac4,	// (0x0003605c) grid_touch_3_pane

0xd1f2,	// (0x0003778a) cell_touch_3_pane_ParamLimits

0xd1f2,	// (0x0003778a) cell_touch_3_pane

0xc133,	// (0x000366cb) cell_touch_3_pane_g1

0xc133,	// (0x000366cb) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x0003a0d4) cell_touch_3_pane_g

0x80f4,	// (0x0003268c) cont_query_data_pane

0x80fc,	// (0x00032694) cont_query_data_pane_cp1

0xd220,	// (0x000377b8) button_value_adjust_pane_cp7

0xd228,	// (0x000377c0) query_popup_pane_cp3

0x8d90,	// (0x00033328) bg_popup_sub_pane_cp22_ParamLimits

0x56db,	// (0x0002fc73) navi_navi_volume_pane_cp2

0x56f6,	// (0x0002fc8e) popup_side_volume_key_window_g2

0x5705,	// (0x0002fc9d) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x00039caf) popup_side_volume_key_window_g

0x5722,	// (0x0002fcba) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x00039cb6) popup_side_volume_key_window_t

0x9047,	// (0x000335df) popup_side_volume_key_window_ParamLimits

0x4fcc,	// (0x0002f564) list_double_graphic_pane_g4_ParamLimits

0x4fcc,	// (0x0002f564) list_double_graphic_pane_g4

0x75ce,	// (0x00031b66) list_single_2heading_msg_pane_ParamLimits

0x75ce,	// (0x00031b66) list_single_2heading_msg_pane

0x7b50,	// (0x000320e8) list_single_2heading_msg_pane_g1_ParamLimits

0x7b50,	// (0x000320e8) list_single_2heading_msg_pane_g1

0x4dfb,	// (0x0002f393) list_single_2heading_msg_pane_g2_ParamLimits

0x4dfb,	// (0x0002f393) list_single_2heading_msg_pane_g2

0x7b5c,	// (0x000320f4) list_single_2heading_msg_pane_g3_ParamLimits

0x7b5c,	// (0x000320f4) list_single_2heading_msg_pane_g3

0x7b68,	// (0x00032100) list_single_2heading_msg_pane_g4_ParamLimits

0x7b68,	// (0x00032100) list_single_2heading_msg_pane_g4

0x0003,

0xfcae,	// (0x0003a246) list_single_2heading_msg_pane_g_ParamLimits

0xfcae,	// (0x0003a246) list_single_2heading_msg_pane_g

0x7b80,	// (0x00032118) list_single_2heading_msg_pane_t1_ParamLimits

0x7b80,	// (0x00032118) list_single_2heading_msg_pane_t1

0x7ba8,	// (0x00032140) list_single_2heading_msg_pane_t2_ParamLimits

0x7ba8,	// (0x00032140) list_single_2heading_msg_pane_t2

0x7bdc,	// (0x00032174) list_single_2heading_msg_pane_t3_ParamLimits

0x7bdc,	// (0x00032174) list_single_2heading_msg_pane_t3

0x7c15,	// (0x000321ad) list_single_2heading_msg_pane_t4_ParamLimits

0x7c15,	// (0x000321ad) list_single_2heading_msg_pane_t4

0x0003,

0xfcb7,	// (0x0003a24f) list_single_2heading_msg_pane_t_ParamLimits

0xfcb7,	// (0x0003a24f) list_single_2heading_msg_pane_t

0x7d09,	// (0x000322a1) title_pane_g4_ParamLimits

0x7d09,	// (0x000322a1) title_pane_g4

0x54ea,	// (0x0002fa82) title_pane_stacon_g3_ParamLimits

0x54ea,	// (0x0002fa82) title_pane_stacon_g3

0xcd4e,	// (0x000372e6) list_single_2graphic_im_pane_g4_ParamLimits

0xcd4e,	// (0x000372e6) list_single_2graphic_im_pane_g4

0xabd6,	// (0x0003516e) popup_side_volume_key_window_cp

0xb406,	// (0x0003599e) main_idle_act2_pane_t1

0x6067,	// (0x000305ff) toolbar_button_pane_g10

0x858a,	// (0x00032b22) popup_toolbar_window_cp1

0xbbcb,	// (0x00036163) clock_nsta_pane_cp_t1

0xbbcb,	// (0x00036163) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x0003a04a) clock_nsta_pane_cp_t

0x56db,	// (0x0002fc73) navi_navi_volume_pane_cp2_ParamLimits

0x56ea,	// (0x0002fc82) popup_side_volume_key_window_g1_ParamLimits

0x56f6,	// (0x0002fc8e) popup_side_volume_key_window_g2_ParamLimits

0x5705,	// (0x0002fc9d) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x00039caf) popup_side_volume_key_window_g_ParamLimits

0x64cf,	// (0x00030a67) fep_hwr_aid_pane

0x6576,	// (0x00030b0e) bg_fep_hwr_top_pane_g4_ParamLimits

0xc18f,	// (0x00036727) fep_hwr_top_pane_g1_ParamLimits

0xc1a1,	// (0x00036739) fep_hwr_top_pane_g2_ParamLimits

0x6596,	// (0x00030b2e) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x0003a09f) fep_hwr_top_pane_g_ParamLimits

0x65ab,	// (0x00030b43) fep_hwr_top_text_pane_ParamLimits

0xa999,	// (0x00034f31) aid_touch_tab_arrow_arrow_2

0xa9a2,	// (0x00034f3a) aid_touch_tab_arrow_left_2

0x64e3,	// (0x00030a7b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x651a,	// (0x00030ab2) fep_hwr_prediction_pane

0xc301,	// (0x00036899) fep_vkb_prediction_pane

0xc405,	// (0x0003699d) fep_vkb_side_pane_g3_ParamLimits

0xc405,	// (0x0003699d) fep_vkb_side_pane_g3

0x6726,	// (0x00030cbe) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6792,	// (0x00030d2a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x679f,	// (0x00030d37) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x0003a14e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x68ce,	// (0x00030e66) fep_hwr_prediction_pane_g1

0x68d8,	// (0x00030e70) fep_hwr_prediction_pane_g2

0x68e0,	// (0x00030e78) fep_hwr_prediction_pane_g3

0x68e8,	// (0x00030e80) fep_hwr_prediction_pane_g4

0x0003,

0xfcc0,	// (0x0003a258) fep_hwr_prediction_pane_g

0xd24d,	// (0x000377e5) fep_vkb_prediction_pane_g1

0xd257,	// (0x000377ef) fep_vkb_prediction_pane_g2

0xd25f,	// (0x000377f7) fep_vkb_prediction_pane_g3

0xd267,	// (0x000377ff) fep_vkb_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0003a261) fep_vkb_prediction_pane_g

0x634f,	// (0x000308e7) slider_set_pane_g3

0x6363,	// (0x000308fb) slider_set_pane_g4

0x637b,	// (0x00030913) slider_set_pane_g5

0x634f,	// (0x000308e7) slider_set_pane_g6

0x6391,	// (0x00030929) slider_set_pane_g7

0xb033,	// (0x000355cb) slider_form_pane_g3

0xb03c,	// (0x000355d4) slider_form_pane_g4

0xb044,	// (0x000355dc) slider_form_pane_g5

0xb033,	// (0x000355cb) slider_form_pane_g6

0xb04c,	// (0x000355e4) slider_form_pane_g7

0xb6b0,	// (0x00035c48) slider_set_pane_vc_g3

0xb6b9,	// (0x00035c51) slider_set_pane_vc_g4

0xb6c2,	// (0x00035c5a) slider_set_pane_vc_g5

0xb6b0,	// (0x00035c48) slider_set_pane_vc_g6

0xb6cb,	// (0x00035c63) slider_set_pane_vc_g7

0xb88b,	// (0x00035e23) slider_form_pane_vc_g1

0xb894,	// (0x00035e2c) slider_form_pane_vc_g2

0xb89d,	// (0x00035e35) slider_form_pane_vc_g3

0xb88b,	// (0x00035e23) slider_form_pane_vc_g4

0xb8a6,	// (0x00035e3e) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x0003a01c) slider_form_pane_vc_g

0x4aea,	// (0x0002f082) main_idle_act3_pane

0xd26f,	// (0x00037807) ai3_links_pane

0xd278,	// (0x00037810) popup_ai3_data_window_ParamLimits

0xd278,	// (0x00037810) popup_ai3_data_window

0x7cc1,	// (0x00032259) grid_ai3_links_pane

0xd292,	// (0x0003782a) cell_ai3_links_pane_ParamLimits

0xd292,	// (0x0003782a) cell_ai3_links_pane

0xd2aa,	// (0x00037842) bg_popup_sub_pane_cp11

0xd2b7,	// (0x0003784f) cell_ai3_links_pane_g1

0x7cc1,	// (0x00032259) bg_popup_sub_pane_cp12

0xd2dc,	// (0x00037874) heading_ai3_data_pane

0xd2e4,	// (0x0003787c) list_ai3_gene_pane

0xd2f0,	// (0x00037888) popup_ai3_data_window_g1

0xd2f8,	// (0x00037890) heading_ai3_data_pane_g1

0xd300,	// (0x00037898) heading_ai3_data_pane_t1

0xd30e,	// (0x000378a6) list_double_ai3_gene_pane_ParamLimits

0xd30e,	// (0x000378a6) list_double_ai3_gene_pane

0xd31b,	// (0x000378b3) list_single_ai3_gene_pane_ParamLimits

0xd31b,	// (0x000378b3) list_single_ai3_gene_pane

0xc0f8,	// (0x00036690) list_highlight_pane_cp7_ParamLimits

0xc0f8,	// (0x00036690) list_highlight_pane_cp7

0xd328,	// (0x000378c0) list_single_a13_gene_pane_t1_ParamLimits

0xd328,	// (0x000378c0) list_single_a13_gene_pane_t1

0xd33f,	// (0x000378d7) list_single_ai3_gene_pane_g1

0xd348,	// (0x000378e0) list_single_ai3_gene_pane_g2

0x0001,

0xfcd2,	// (0x0003a26a) list_single_ai3_gene_pane_g

0xd350,	// (0x000378e8) list_double_ai3_gene_pane_g1_ParamLimits

0xd350,	// (0x000378e8) list_double_ai3_gene_pane_g1

0xd35c,	// (0x000378f4) list_double_ai3_gene_pane_t1_ParamLimits

0xd35c,	// (0x000378f4) list_double_ai3_gene_pane_t1

0xd378,	// (0x00037910) list_double_ai3_gene_pane_t2_ParamLimits

0xd378,	// (0x00037910) list_double_ai3_gene_pane_t2

0xd38e,	// (0x00037926) list_double_ai3_gene_pane_t3_ParamLimits

0xd38e,	// (0x00037926) list_double_ai3_gene_pane_t3

0x0002,

0xfcd7,	// (0x0003a26f) list_double_ai3_gene_pane_t_ParamLimits

0xfcd7,	// (0x0003a26f) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7b46,	// (0x000320de) aid_size_min_col_2

0xd239,	// (0x000377d1) aid_size_min_msg_ParamLimits

0xd239,	// (0x000377d1) aid_size_min_msg

0xc505,	// (0x00036a9d) fep_vkb_top_text_pane_g2_ParamLimits

0xc505,	// (0x00036a9d) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x0003a0cf) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x0003a0cf) fep_vkb_top_text_pane_g

0x4aea,	// (0x0002f082) main_hc_apps_shell_pane

0xd3ab,	// (0x00037943) grid_hc_apps_pane_ParamLimits

0xd3ab,	// (0x00037943) grid_hc_apps_pane

0xd3ba,	// (0x00037952) list_hc_apps_pane

0xd3c2,	// (0x0003795a) scroll_pane_cp37_ParamLimits

0xd3c2,	// (0x0003795a) scroll_pane_cp37

0xd3ce,	// (0x00037966) cell_hc_apps_pane_ParamLimits

0xd3ce,	// (0x00037966) cell_hc_apps_pane

0xd47c,	// (0x00037a14) cell_hc_apps_pane_g1_ParamLimits

0xd47c,	// (0x00037a14) cell_hc_apps_pane_g1

0xd4ad,	// (0x00037a45) cell_hc_apps_pane_g2_ParamLimits

0xd4ad,	// (0x00037a45) cell_hc_apps_pane_g2

0xd4c9,	// (0x00037a61) cell_hc_apps_pane_g3_ParamLimits

0xd4c9,	// (0x00037a61) cell_hc_apps_pane_g3

0x0002,

0xfcde,	// (0x0003a276) cell_hc_apps_pane_g_ParamLimits

0xfcde,	// (0x0003a276) cell_hc_apps_pane_g

0xd4eb,	// (0x00037a83) cell_hc_apps_pane_t1_ParamLimits

0xd4eb,	// (0x00037a83) cell_hc_apps_pane_t1

0x803e,	// (0x000325d6) grid_highlight_pane_cp10_ParamLimits

0x803e,	// (0x000325d6) grid_highlight_pane_cp10

0xd52b,	// (0x00037ac3) list_single_hc_apps_pane_ParamLimits

0xd52b,	// (0x00037ac3) list_single_hc_apps_pane

0xd587,	// (0x00037b1f) list_single_hc_apps_pane_g1

0x7c3a,	// (0x000321d2) list_single_hc_apps_pane_g2

0x0001,

0xfce5,	// (0x0003a27d) list_single_hc_apps_pane_g

0x7c53,	// (0x000321eb) list_single_hc_apps_pane_g2_copy1

0x7c6f,	// (0x00032207) list_single_hc_apps_pane_t1

0x7db5,	// (0x0003234d) bg_set_opt_pane_cp_ParamLimits

0x4d4b,	// (0x0002f2e3) setting_slider_pane_t1_ParamLimits

0x4d64,	// (0x0002f2fc) setting_slider_pane_t2_ParamLimits

0x4d7e,	// (0x0002f316) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x00039afc) setting_slider_pane_t_ParamLimits

0x4d96,	// (0x0002f32e) slider_set_pane_ParamLimits

0x5984,	// (0x0002ff1c) control_pane_g5_ParamLimits

0x5984,	// (0x0002ff1c) control_pane_g5

0xae82,	// (0x0003541a) slider_set_pane_g1_ParamLimits

0x6343,	// (0x000308db) slider_set_pane_g2_ParamLimits

0x634f,	// (0x000308e7) slider_set_pane_g3_ParamLimits

0x6363,	// (0x000308fb) slider_set_pane_g4_ParamLimits

0x637b,	// (0x00030913) slider_set_pane_g5_ParamLimits

0x634f,	// (0x000308e7) slider_set_pane_g6_ParamLimits

0x6391,	// (0x00030929) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x00039f02) slider_set_pane_g_ParamLimits

0x9128,	// (0x000336c0) navi_icon_text_pane_ParamLimits

0x9620,	// (0x00033bb8) aid_fill_nsta_2_ParamLimits

0x965f,	// (0x00033bf7) aid_touch_tab_arrow_left_ParamLimits

0x966e,	// (0x00033c06) aid_touch_tab_arrow_right_ParamLimits

0x96db,	// (0x00033c73) clock_nsta_pane_ParamLimits

0xa97b,	// (0x00034f13) navi_icon_pane_g1_ParamLimits

0xa987,	// (0x00034f1f) navi_text_pane_t1_ParamLimits

0xbcd7,	// (0x0003626f) navi_icon_text_pane_g1_ParamLimits

0xbce3,	// (0x0003627b) navi_icon_text_pane_t1_ParamLimits

0xd587,	// (0x00037b1f) list_single_hc_apps_pane_g1_ParamLimits

0x7c3a,	// (0x000321d2) list_single_hc_apps_pane_g2_ParamLimits

0xfce5,	// (0x0003a27d) list_single_hc_apps_pane_g_ParamLimits

0x7c53,	// (0x000321eb) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x7c6f,	// (0x00032207) list_single_hc_apps_pane_t1_ParamLimits

0x4c55,	// (0x0002f1ed) popup_toolbar2_fixed_window_ParamLimits

0x4c55,	// (0x0002f1ed) popup_toolbar2_fixed_window

0x5f6b,	// (0x00030503) popup_toolbar2_float_window

0x7cc1,	// (0x00032259) bg_popup_sub_pane_cp27

0xd5a0,	// (0x00037b38) grid_toolbar2_float_pane

0x7cc1,	// (0x00032259) bg_popup_sub_pane_cp26

0xd5a0,	// (0x00037b38) grid_toolbar2_fixed_pane

0xd5a8,	// (0x00037b40) cell_toolbar2_fixed_pane_ParamLimits

0xd5a8,	// (0x00037b40) cell_toolbar2_fixed_pane

0xd5b8,	// (0x00037b50) cell_toolbar2_fixed_pane_g1

0xd5c1,	// (0x00037b59) toolbar2_fixed_button_pane

0x9af2,	// (0x0003408a) toolbar2_fixed_button_pane_g1

0x9b02,	// (0x0003409a) toolbar2_fixed_button_pane_g2

0x9afa,	// (0x00034092) toolbar2_fixed_button_pane_g3

0x9b12,	// (0x000340aa) toolbar2_fixed_button_pane_g4

0x9b0a,	// (0x000340a2) toolbar2_fixed_button_pane_g5

0x9b1a,	// (0x000340b2) toolbar2_fixed_button_pane_g6

0x9b22,	// (0x000340ba) toolbar2_fixed_button_pane_g7

0x9b32,	// (0x000340ca) toolbar2_fixed_button_pane_g8

0x9b2a,	// (0x000340c2) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x00039e04) toolbar2_fixed_button_pane_g

0xd5c9,	// (0x00037b61) cell_toolbar2_float_pane_ParamLimits

0xd5c9,	// (0x00037b61) cell_toolbar2_float_pane

0xd5da,	// (0x00037b72) cell_toolbar2_float_pane_g1

0xd5c1,	// (0x00037b59) toolbar2_fixed_button_pane_cp

0xc261,	// (0x000367f9) fep_vkb_accented_list_pane_ParamLimits

0xc261,	// (0x000367f9) fep_vkb_accented_list_pane

0x6706,	// (0x00030c9e) bg_popup_fep_shadow_pane_g9

0x92a8,	// (0x00033840) bg_popup_fep_shadow_pane_cp3

0x8778,	// (0x00032d10) list_accented_list_pane

0xd5e3,	// (0x00037b7b) list_single_accented_list_pane_ParamLimits

0xd5e3,	// (0x00037b7b) list_single_accented_list_pane

0x92a8,	// (0x00033840) list_highlight_pane_cp10

0xd5f4,	// (0x00037b8c) list_single_accented_list_pane_t1

0x5ebb,	// (0x00030453) popup_slider_window_ParamLimits

0x5ebb,	// (0x00030453) popup_slider_window

0xd230,	// (0x000377c8) aid_indentation_list_msg

0xd6ae,	// (0x00037c46) bg_popup_window_pane_cp19

0xd718,	// (0x00037cb0) popup_slider_window_g1

0xd734,	// (0x00037ccc) popup_slider_window_g2

0xd750,	// (0x00037ce8) popup_slider_window_g3

0x0005,

0xfcea,	// (0x0003a282) popup_slider_window_g

0xd7ac,	// (0x00037d44) popup_slider_window_t1

0xd820,	// (0x00037db8) small_volume_slider_vertical_pane

0xc133,	// (0x000366cb) small_volume_slider_vertical_pane_g1

0xc133,	// (0x000366cb) small_volume_slider_vertical_pane_g2

0xd83c,	// (0x00037dd4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfc,	// (0x0003a294) small_volume_slider_vertical_pane_g

0x4a0d,	// (0x0002efa5) area_side_right_pane_ParamLimits

0x4a0d,	// (0x0002efa5) area_side_right_pane

0x68f0,	// (0x00030e88) aid_size_side_button_ParamLimits

0x68f0,	// (0x00030e88) aid_size_side_button

0x6904,	// (0x00030e9c) grid_sctrl_middle_pane_ParamLimits

0x6904,	// (0x00030e9c) grid_sctrl_middle_pane

0x6923,	// (0x00030ebb) sctrl_sk_bottom_pane

0x6934,	// (0x00030ecc) sctrl_sk_top_pane

0x6946,	// (0x00030ede) aid_touch_sctrl_top

0x6953,	// (0x00030eeb) bg_sctrl_sk_pane_ParamLimits

0x6953,	// (0x00030eeb) bg_sctrl_sk_pane

0x6961,	// (0x00030ef9) sctrl_sk_top_pane_g1

0x696e,	// (0x00030f06) sctrl_sk_top_pane_t1

0x6946,	// (0x00030ede) aid_touch_sctrl_bottom

0x6953,	// (0x00030eeb) bg_sctrl_sk_pane_cp_ParamLimits

0x6953,	// (0x00030eeb) bg_sctrl_sk_pane_cp

0x6989,	// (0x00030f21) sctrl_sk_bottom_pane_g1

0x696e,	// (0x00030f06) sctrl_sk_bottom_pane_t1

0x6992,	// (0x00030f2a) cell_sctrl_middle_pane_ParamLimits

0x6992,	// (0x00030f2a) cell_sctrl_middle_pane

0x69ad,	// (0x00030f45) aid_touch_sctrl_middle_ParamLimits

0x69ad,	// (0x00030f45) aid_touch_sctrl_middle

0x69bf,	// (0x00030f57) bg_sctrl_middle_pane_ParamLimits

0x69bf,	// (0x00030f57) bg_sctrl_middle_pane

0x6726,	// (0x00030cbe) cell_sctrl_middle_pane_g1_ParamLimits

0x6726,	// (0x00030cbe) cell_sctrl_middle_pane_g1

0x69cd,	// (0x00030f65) cell_sctrl_middle_pane_g2_ParamLimits

0x69cd,	// (0x00030f65) cell_sctrl_middle_pane_g2

0x0001,

0xfd08,	// (0x0003a2a0) cell_sctrl_middle_pane_g_ParamLimits

0xfd08,	// (0x0003a2a0) cell_sctrl_middle_pane_g

0x9af2,	// (0x0003408a) bg_sctrl_middle_pane_g1

0x9afa,	// (0x00034092) bg_sctrl_middle_pane_g2

0x9b02,	// (0x0003409a) bg_sctrl_middle_pane_g3

0x9b0a,	// (0x000340a2) bg_sctrl_middle_pane_g4

0x9b12,	// (0x000340aa) bg_sctrl_middle_pane_g5

0x9b1a,	// (0x000340b2) bg_sctrl_middle_pane_g6

0x9b22,	// (0x000340ba) bg_sctrl_middle_pane_g7

0x9b2a,	// (0x000340c2) bg_sctrl_middle_pane_g8

0x0007,

0xfd0d,	// (0x0003a2a5) bg_sctrl_middle_pane_g

0x9b32,	// (0x000340ca) bg_sctrl_middle_pane_g8_copy1

0x9af2,	// (0x0003408a) bg_sctrl_sk_pane_g1

0x9b02,	// (0x0003409a) bg_sctrl_sk_pane_g2

0x9afa,	// (0x00034092) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x00039e04) bg_sctrl_sk_pane_g

0x8550,	// (0x00032ae8) aid_size_touch_scroll_bar

0x9b12,	// (0x000340aa) bg_sctrl_sk_pane_g4

0x9b0a,	// (0x000340a2) bg_sctrl_sk_pane_g5

0x9b1a,	// (0x000340b2) bg_sctrl_sk_pane_g6

0x9b22,	// (0x000340ba) bg_sctrl_sk_pane_g7

0x9b32,	// (0x000340ca) bg_sctrl_sk_pane_g8

0x9b2a,	// (0x000340c2) bg_sctrl_sk_pane_g9

0x5b26,	// (0x000300be) popup_fep_china_hwr2_fs_candidate_window

0x5b30,	// (0x000300c8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5b30,	// (0x000300c8) popup_fep_china_hwr2_fs_control_window

0x6726,	// (0x00030cbe) sctrl_sk_top_pane_g2

0x0001,

0xfd03,	// (0x0003a29b) sctrl_sk_top_pane_g

0xd845,	// (0x00037ddd) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd845,	// (0x00037ddd) aid_fep_china_hwr2_fs_cell

0xd857,	// (0x00037def) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd857,	// (0x00037def) bg_popup_fep_shadow_pane_cp4

0xd86e,	// (0x00037e06) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86e,	// (0x00037e06) bg_popup_fep_shadow_pane_cp5

0xd880,	// (0x00037e18) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd880,	// (0x00037e18) popup_fep_china_hwr2_fs_control_bar_grid

0xd890,	// (0x00037e28) popup_fep_china_hwr2_fs_control_funtion_grid

0xd898,	// (0x00037e30) aid_fep_china_hwr2_fs_candi_cell

0x7cc1,	// (0x00032259) bg_popup_fep_shadow_pane_cp6

0xd8a2,	// (0x00037e3a) popup_fep_china_hwr2_fs_candidate_grid

0xd8ac,	// (0x00037e44) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ac,	// (0x00037e44) cell_fep_china_hwr2_fs_funtion_grid

0xc133,	// (0x000366cb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c4,	// (0x00037e5c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c4,	// (0x00037e5c) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d2,	// (0x00037e6a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d2,	// (0x00037e6a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1e,	// (0x0003a2b6) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1e,	// (0x0003a2b6) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e8,	// (0x00037e80) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e8,	// (0x00037e80) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fd,	// (0x00037e95) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fd,	// (0x00037e95) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd23,	// (0x0003a2bb) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd23,	// (0x0003a2bb) cell_fep_china_hwr2_fs_funtion_grid_t

0xd919,	// (0x00037eb1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd921,	// (0x00037eb9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd929,	// (0x00037ec1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd28,	// (0x0003a2c0) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd931,	// (0x00037ec9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd931,	// (0x00037ec9) cell_fep_china_hwr2_fs_candidate_grid

0xd94a,	// (0x00037ee2) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd952,	// (0x00037eea) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc133,	// (0x000366cb) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc133,	// (0x000366cb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x0003a0d4) cell_fep_china_hwr2_fs_candidate_grid_g

0xd95a,	// (0x00037ef2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x96e8,	// (0x00033c80) clock_nsta_pane_cp_24_ParamLimits

0x96e8,	// (0x00033c80) clock_nsta_pane_cp_24

0x9766,	// (0x00033cfe) indicator_nsta_pane_cp_24_ParamLimits

0x9766,	// (0x00033cfe) indicator_nsta_pane_cp_24

0xa7f7,	// (0x00034d8f) heading_pane_g1

0x0001,

0xf8d1,	// (0x00039e69) heading_pane_g

0xb20d,	// (0x000357a5) grid_sct_catagory_button_pane

0xb23d,	// (0x000357d5) scroll_pane_cp5_ParamLimits

0xbd25,	// (0x000362bd) button_value_adjust_pane_cp5_ParamLimits

0xbd25,	// (0x000362bd) button_value_adjust_pane_cp5

0xbe04,	// (0x0003639c) form2_midp_time_pane_ParamLimits

0xd968,	// (0x00037f00) cell_sct_catagory_button_pane_ParamLimits

0xd968,	// (0x00037f00) cell_sct_catagory_button_pane

0xc0f8,	// (0x00036690) bg_button_pane_cp01_ParamLimits

0xc0f8,	// (0x00036690) bg_button_pane_cp01

0xc133,	// (0x000366cb) cell_sct_catagory_button_pane_g1

0x5efa,	// (0x00030492) popup_tb_extension_window

0xd97a,	// (0x00037f12) aid_size_cell_ext_ParamLimits

0xd97a,	// (0x00037f12) aid_size_cell_ext

0x803e,	// (0x000325d6) bg_tb_trans_pane_cp1_ParamLimits

0x803e,	// (0x000325d6) bg_tb_trans_pane_cp1

0xd99a,	// (0x00037f32) grid_tb_ext_pane_ParamLimits

0xd99a,	// (0x00037f32) grid_tb_ext_pane

0xd9c8,	// (0x00037f60) cell_tb_ext_pane_ParamLimits

0xd9c8,	// (0x00037f60) cell_tb_ext_pane

0xd9df,	// (0x00037f77) cell_tb_ext_pane_g1_ParamLimits

0xd9df,	// (0x00037f77) cell_tb_ext_pane_g1

0xd9fc,	// (0x00037f94) cell_tb_ext_pane_t1

0x803e,	// (0x000325d6) list_highlight_pane_cp11_ParamLimits

0x803e,	// (0x000325d6) list_highlight_pane_cp11

0x4c74,	// (0x0002f20c) popup_uni_indicator_window_ParamLimits

0x4c74,	// (0x0002f20c) popup_uni_indicator_window

0x8621,	// (0x00032bb9) bg_popup_sub_pane_cp14

0xda17,	// (0x00037faf) list_uniindi_pane

0xda23,	// (0x00037fbb) uniindi_top_pane

0x803e,	// (0x000325d6) bg_uniindi_top_pane

0xda42,	// (0x00037fda) uniindi_top_pane_g1

0xda58,	// (0x00037ff0) uniindi_top_pane_g2

0x0003,

0xfd2f,	// (0x0003a2c7) uniindi_top_pane_g

0xda82,	// (0x0003801a) uniindi_top_pane_t1

0xdaac,	// (0x00038044) list_single_uniindi_pane_ParamLimits

0xdaac,	// (0x00038044) list_single_uniindi_pane

0xc133,	// (0x000366cb) bg_uniindi_top_pane_g1

0xdabf,	// (0x00038057) list_single_uniindi_pane_g1

0xdad2,	// (0x0003806a) list_single_uniindi_pane_t1

0x4aea,	// (0x0002f082) control_bg_pane

0xdaf7,	// (0x0003808f) bg_sctrl_sk_pane_cp1

0xdb00,	// (0x00038098) bg_sctrl_sk_pane_cp2

0xdb09,	// (0x000380a1) control_bg_pane_g1

0xdb12,	// (0x000380aa) control_bg_pane_g2

0x0001,

0xfd38,	// (0x0003a2d0) control_bg_pane_g

0xbb6e,	// (0x00036106) cell_indicator_nsta_pane_g1_ParamLimits

0xbb7c,	// (0x00036114) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x0003a038) cell_indicator_nsta_pane_g_ParamLimits

0x78f7,	// (0x00031e8f) form2_midp_time_pane_t1_ParamLimits

0x5a8e,	// (0x00030026) main_idle_act4_pane_ParamLimits

0x5a8e,	// (0x00030026) main_idle_act4_pane

0x5efa,	// (0x00030492) popup_tb_extension_window_ParamLimits

0xd9b8,	// (0x00037f50) tb_ext_find_pane_ParamLimits

0xd9b8,	// (0x00037f50) tb_ext_find_pane

0xdb1b,	// (0x000380b3) ai_gene_pane_1_cp1

0x93e1,	// (0x00033979) ai_gene_pane_2_cp1

0xdb23,	// (0x000380bb) list_single_idle_plugin_calendar_pane

0xdb2c,	// (0x000380c4) list_single_idle_plugin_notification_pane

0xdb35,	// (0x000380cd) list_single_idle_plugin_player_pane

0xdb3e,	// (0x000380d6) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3e,	// (0x000380d6) list_single_idle_plugin_shortcut_pane

0xdb60,	// (0x000380f8) main_idle_act4_pane_t1

0xdb72,	// (0x0003810a) main_idle_act4_pane_t2

0x0001,

0xfd3d,	// (0x0003a2d5) main_idle_act4_pane_t

0xdb84,	// (0x0003811c) middle_sk_idle_act4_pane_ParamLimits

0xdb84,	// (0x0003811c) middle_sk_idle_act4_pane

0xdb9a,	// (0x00038132) popup_clock_digital_analogue_window_cp2

0xdbb4,	// (0x0003814c) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb4,	// (0x0003814c) shortcut_wheel_idle_act4_pane

0xc133,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g1

0xc133,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g2

0xc133,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g3

0xc133,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g4

0xc133,	// (0x000366cb) shortcut_wheel_idle_act4_pane_g5

0xdbc8,	// (0x00038160) shortcut_wheel_idle_act4_pane_g6

0xdbd0,	// (0x00038168) shortcut_wheel_idle_act4_pane_g7

0xdbd8,	// (0x00038170) shortcut_wheel_idle_act4_pane_g8

0xdbe0,	// (0x00038178) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd42,	// (0x0003a2da) shortcut_wheel_idle_act4_pane_g

0xc3b1,	// (0x00036949) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3b1,	// (0x00036949) middle_sk_idle_act4_pane_g1

0xdc44,	// (0x000381dc) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc44,	// (0x000381dc) middle_sk_idle_act4_pane_g2

0x0001,

0x0016,	// (0x0002a5ae) middle_sk_idle_act4_pane_g_ParamLimits

0x0016,	// (0x0002a5ae) middle_sk_idle_act4_pane_g

0xdc50,	// (0x000381e8) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc50,	// (0x000381e8) middle_sk_idle_act4_pane_t1

0xdc6d,	// (0x00038205) grid_ai_shortcut_pane_ParamLimits

0xdc6d,	// (0x00038205) grid_ai_shortcut_pane

0xdc86,	// (0x0003821e) list_highlight_pane_cp16_ParamLimits

0xdc86,	// (0x0003821e) list_highlight_pane_cp16

0xdc93,	// (0x0003822b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc93,	// (0x0003822b) list_single_idle_plugin_shortcut_pane_g1

0xdc9f,	// (0x00038237) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9f,	// (0x00038237) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x0003824f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x0003824f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003a2f2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003a2f2) list_single_idle_plugin_shortcut_pane_g

0xdcca,	// (0x00038262) cell_ai_shortcut_pane_ParamLimits

0xdcca,	// (0x00038262) cell_ai_shortcut_pane

0xdcee,	// (0x00038286) cell_ai_shortcut_pane_g1_ParamLimits

0xdcee,	// (0x00038286) cell_ai_shortcut_pane_g1

0xdb1b,	// (0x000380b3) ai_gene_pane_1_cp2

0xdd10,	// (0x000382a8) ai_gene_pane_2_cp2

0xdd18,	// (0x000382b0) list_highlight_pane_cp15

0xdd21,	// (0x000382b9) list_single_idle_plugin_calendar_pane_g1

0xdd18,	// (0x000382b0) list_highlight_pane_cp17

0xdd29,	// (0x000382c1) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd31,	// (0x000382c9) list_single_idle_plugin_player_pane_g1

0xb4a8,	// (0x00035a40) list_single_idle_plugin_player_pane_g2

0x0001,

0x001b,	// (0x0002a5b3) list_single_idle_plugin_player_pane_g

0xdd39,	// (0x000382d1) list_single_idle_plugin_player_pane_t1

0xdd47,	// (0x000382df) list_single_idle_plugin_player_pane_t2

0xdd55,	// (0x000382ed) list_single_idle_plugin_player_pane_t3

0xdd63,	// (0x000382fb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd61,	// (0x0003a2f9) list_single_idle_plugin_player_pane_t

0xdd71,	// (0x00038309) wait_bar_pane_cp15

0xdd79,	// (0x00038311) grid_ai_notification_pane

0xb4a8,	// (0x00035a40) list_single_idle_plugin_notification_pane_g1

0xdd82,	// (0x0003831a) cell_ai_notification_pane_ParamLimits

0xdd82,	// (0x0003831a) cell_ai_notification_pane

0xdd8f,	// (0x00038327) cell_ai_notification_pane_g1

0xdd97,	// (0x0003832f) cell_ai_notification_pane_t1

0xdda5,	// (0x0003833d) tb_ext_find_button_pane

0xddad,	// (0x00038345) tb_ext_find_pane_g1

0xddb5,	// (0x0003834d) tb_ext_find_pane_t1

0x8ca0,	// (0x00033238) tb_ext_find_button_pane_g1

0xddc3,	// (0x0003835b) tb_ext_find_button_pane_g2

0x0001,

0x0020,	// (0x0002a5b8) tb_ext_find_button_pane_g

0xdb60,	// (0x000380f8) main_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0003810a) main_idle_act4_pane_t2_ParamLimits

0xfd3d,	// (0x0003a2d5) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00038132) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba8,	// (0x00038140) sat_plugin_idle_act4_pane_ParamLimits

0xdba8,	// (0x00038140) sat_plugin_idle_act4_pane

0xddcc,	// (0x00038364) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00038364) sat_plugin_idle_act4_pane_t1

0xdddf,	// (0x00038377) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdddf,	// (0x00038377) sat_plugin_idle_act4_pane_t2

0xddf2,	// (0x0003838a) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf2,	// (0x0003838a) sat_plugin_idle_act4_pane_t3

0xde05,	// (0x0003839d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde05,	// (0x0003839d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6a,	// (0x0003a302) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6a,	// (0x0003a302) sat_plugin_idle_act4_pane_t

0x4baf,	// (0x0002f147) popup_battery_window_ParamLimits

0x4baf,	// (0x0002f147) popup_battery_window

0x803e,	// (0x000325d6) bg_popup_sub_pane_cp25_ParamLimits

0x803e,	// (0x000325d6) bg_popup_sub_pane_cp25

0xde18,	// (0x000383b0) popup_battery_window_g1_ParamLimits

0xde18,	// (0x000383b0) popup_battery_window_g1

0xde24,	// (0x000383bc) popup_battery_window_t1_ParamLimits

0xde24,	// (0x000383bc) popup_battery_window_t1

0xde36,	// (0x000383ce) popup_battery_window_t2_ParamLimits

0xde36,	// (0x000383ce) popup_battery_window_t2

0x0001,

0xfd73,	// (0x0003a30b) popup_battery_window_t_ParamLimits

0xfd73,	// (0x0003a30b) popup_battery_window_t

0x92b0,	// (0x00033848) midp_canvas_pane_ParamLimits

0x9325,	// (0x000338bd) midp_keypad_pane_ParamLimits

0x9325,	// (0x000338bd) midp_keypad_pane

0x95e8,	// (0x00033b80) main_midp_pane_ParamLimits

0xbbe9,	// (0x00036181) signal_pane_g2_cp_ParamLimits

0xde53,	// (0x000383eb) aid_size_cell_midp_keypad_ParamLimits

0xde53,	// (0x000383eb) aid_size_cell_midp_keypad

0xde6d,	// (0x00038405) midp_keyp_game_grid_pane_ParamLimits

0xde6d,	// (0x00038405) midp_keyp_game_grid_pane

0xde8d,	// (0x00038425) midp_keyp_rocker_pane_ParamLimits

0xde8d,	// (0x00038425) midp_keyp_rocker_pane

0xdec2,	// (0x0003845a) midp_keyp_sk_left_pane_ParamLimits

0xdec2,	// (0x0003845a) midp_keyp_sk_left_pane

0xdf1a,	// (0x000384b2) midp_keyp_sk_right_pane_ParamLimits

0xdf1a,	// (0x000384b2) midp_keyp_sk_right_pane

0x7cc1,	// (0x00032259) bg_button_pane_cp03

0xdf72,	// (0x0003850a) midp_keyp_sk_left_pane_g1

0x7cc1,	// (0x00032259) bg_button_pane_cp04

0xdf72,	// (0x0003850a) midp_keyp_sk_right_pane_g1

0xc133,	// (0x000366cb) midp_keyp_rocker_pane_g1

0xdf7b,	// (0x00038513) keyp_game_cell_pane_ParamLimits

0xdf7b,	// (0x00038513) keyp_game_cell_pane

0x7cc1,	// (0x00032259) bg_button_pane_cp02

0xdf8e,	// (0x00038526) keyp_game_cell_pane_g1

0x4bf3,	// (0x0002f18b) popup_fep_vkb2_window_ParamLimits

0x4bf3,	// (0x0002f18b) popup_fep_vkb2_window

0x69eb,	// (0x00030f83) aid_size_cell_vkb2_ParamLimits

0x69eb,	// (0x00030f83) aid_size_cell_vkb2

0x6a3f,	// (0x00030fd7) popup_fep_vkb2_window_g1_ParamLimits

0x6a3f,	// (0x00030fd7) popup_fep_vkb2_window_g1

0x6a87,	// (0x0003101f) vkb2_area_bottom_pane_ParamLimits

0x6a87,	// (0x0003101f) vkb2_area_bottom_pane

0x6ad3,	// (0x0003106b) vkb2_area_keypad_pane_ParamLimits

0x6ad3,	// (0x0003106b) vkb2_area_keypad_pane

0x6b15,	// (0x000310ad) vkb2_area_top_pane_ParamLimits

0x6b15,	// (0x000310ad) vkb2_area_top_pane

0x6b8f,	// (0x00031127) vkb2_top_entry_pane_ParamLimits

0x6b8f,	// (0x00031127) vkb2_top_entry_pane

0x6bb9,	// (0x00031151) vkb2_top_grid_left_pane_ParamLimits

0x6bb9,	// (0x00031151) vkb2_top_grid_left_pane

0x6bd7,	// (0x0003116f) vkb2_top_grid_right_pane_ParamLimits

0x6bd7,	// (0x0003116f) vkb2_top_grid_right_pane

0x6bf5,	// (0x0003118d) vkb2_cell_keypad_pane_ParamLimits

0x6bf5,	// (0x0003118d) vkb2_cell_keypad_pane

0x6cc6,	// (0x0003125e) vkb2_area_bottom_grid_pane_ParamLimits

0x6cc6,	// (0x0003125e) vkb2_area_bottom_grid_pane

0x6cec,	// (0x00031284) vkb2_area_bottom_pane_g1_ParamLimits

0x6cec,	// (0x00031284) vkb2_area_bottom_pane_g1

0x6d10,	// (0x000312a8) vkb2_area_bottom_pane_g2_ParamLimits

0x6d10,	// (0x000312a8) vkb2_area_bottom_pane_g2

0x6d3e,	// (0x000312d6) vkb2_area_bottom_pane_g3_ParamLimits

0x6d3e,	// (0x000312d6) vkb2_area_bottom_pane_g3

0x0002,

0xfd78,	// (0x0003a310) vkb2_area_bottom_pane_g_ParamLimits

0xfd78,	// (0x0003a310) vkb2_area_bottom_pane_g

0x6d9f,	// (0x00031337) vkb2_top_cell_left_pane_ParamLimits

0x6d9f,	// (0x00031337) vkb2_top_cell_left_pane

0xdf9f,	// (0x00038537) vkb2_top_entry_pane_g1_ParamLimits

0xdf9f,	// (0x00038537) vkb2_top_entry_pane_g1

0xdfad,	// (0x00038545) vkb2_top_entry_pane_t1_ParamLimits

0xdfad,	// (0x00038545) vkb2_top_entry_pane_t1

0xdfdf,	// (0x00038577) vkb2_top_entry_pane_t2_ParamLimits

0xdfdf,	// (0x00038577) vkb2_top_entry_pane_t2

0xe011,	// (0x000385a9) vkb2_top_entry_pane_t3_ParamLimits

0xe011,	// (0x000385a9) vkb2_top_entry_pane_t3

0x0002,

0xfd7f,	// (0x0003a317) vkb2_top_entry_pane_t_ParamLimits

0xfd7f,	// (0x0003a317) vkb2_top_entry_pane_t

0x6dec,	// (0x00031384) vkb2_top_grid_right_pane_g1_ParamLimits

0x6dec,	// (0x00031384) vkb2_top_grid_right_pane_g1

0x6e02,	// (0x0003139a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e02,	// (0x0003139a) vkb2_top_grid_right_pane_g2

0x6e1a,	// (0x000313b2) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e1a,	// (0x000313b2) vkb2_top_grid_right_pane_g3

0x6e32,	// (0x000313ca) vkb2_top_grid_right_pane_g4_ParamLimits

0x6e32,	// (0x000313ca) vkb2_top_grid_right_pane_g4

0x0003,

0xfd86,	// (0x0003a31e) vkb2_top_grid_right_pane_g_ParamLimits

0xfd86,	// (0x0003a31e) vkb2_top_grid_right_pane_g

0x6e48,	// (0x000313e0) vkb2_top_cell_left_pane_g1

0x6e5f,	// (0x000313f7) vkb2_cell_keypad_pane_g1_ParamLimits

0x6e5f,	// (0x000313f7) vkb2_cell_keypad_pane_g1

0xe035,	// (0x000385cd) vkb2_cell_keypad_pane_t1_ParamLimits

0xe035,	// (0x000385cd) vkb2_cell_keypad_pane_t1

0x6e6d,	// (0x00031405) vkb2_cell_bottom_grid_pane_ParamLimits

0x6e6d,	// (0x00031405) vkb2_cell_bottom_grid_pane

0x6ea6,	// (0x0003143e) vkb2_cell_bottom_grid_pane_g1

0xdbe8,	// (0x00038180) aid_call2_pane_cp02

0xdbf0,	// (0x00038188) aid_call_pane_cp02

0xdbf8,	// (0x00038190) clock_digital_number_pane_cp10

0xdc00,	// (0x00038198) clock_digital_number_pane_cp11

0xdc08,	// (0x000381a0) clock_digital_number_pane_cp12

0xdc10,	// (0x000381a8) clock_digital_number_pane_cp13

0xdc18,	// (0x000381b0) clock_digital_separator_pane_cp10

0x8ca0,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g1

0x8ca0,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g2

0xdc20,	// (0x000381b8) popup_clock_digital_analogue_window_cp2_g3

0x8ca0,	// (0x00033238) popup_clock_digital_analogue_window_cp2_g4

0xdc20,	// (0x000381b8) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0x000b,	// (0x0002a5a3) popup_clock_digital_analogue_window_cp2_g

0xdc28,	// (0x000381c0) popup_clock_digital_analogue_window_cp2_t1

0xdc36,	// (0x000381ce) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0003a2ed) popup_clock_digital_analogue_window_cp2_t

0xc133,	// (0x000366cb) clock_digital_number_pane_cp10_g1

0xc133,	// (0x000366cb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0003a0d4) clock_digital_number_pane_cp10_g

0xc133,	// (0x000366cb) clock_digital_separator_pane_cp10_g1

0xc133,	// (0x000366cb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x0003a0d4) clock_digital_separator_pane_cp10_g

0xda64,	// (0x00037ffc) uniindi_top_pane_g3

0xda75,	// (0x0003800d) uniindi_top_pane_g4

0x6c80,	// (0x00031218) vkb2_row_keypad_pane_ParamLimits

0x6c80,	// (0x00031218) vkb2_row_keypad_pane

0x6ec2,	// (0x0003145a) vkb2_cell_t_keypad_pane_ParamLimits

0x6ec2,	// (0x0003145a) vkb2_cell_t_keypad_pane

0x6ed2,	// (0x0003146a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6ed2,	// (0x0003146a) vkb2_cell_t_keypad_pane_cp08

0x6ee5,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ee5,	// (0x0003147d) vkb2_cell_t_keypad_pane_cp09

0x6ef9,	// (0x00031491) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6ef9,	// (0x00031491) vkb2_cell_t_keypad_pane_cp01

0x6f0a,	// (0x000314a2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f0a,	// (0x000314a2) vkb2_cell_t_keypad_pane_cp02

0x6f1b,	// (0x000314b3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f1b,	// (0x000314b3) vkb2_cell_t_keypad_pane_cp03

0x6f2c,	// (0x000314c4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f2c,	// (0x000314c4) vkb2_cell_t_keypad_pane_cp04

0x6f3d,	// (0x000314d5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f3d,	// (0x000314d5) vkb2_cell_t_keypad_pane_cp05

0x6f4e,	// (0x000314e6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f4e,	// (0x000314e6) vkb2_cell_t_keypad_pane_cp06

0x6f5f,	// (0x000314f7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6f5f,	// (0x000314f7) vkb2_cell_t_keypad_pane_cp07

0x6f70,	// (0x00031508) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6f70,	// (0x00031508) vkb2_cell_t_keypad_pane_cp10

0x6726,	// (0x00030cbe) vkb2_cell_t_keypad_pane_g1

0xe04c,	// (0x000385e4) vkb2_cell_t_keypad_pane_t1

0x4aea,	// (0x0002f082) popup_grid_graphic2_window

0xe05e,	// (0x000385f6) aid_size_cell_graphic2_ParamLimits

0xe05e,	// (0x000385f6) aid_size_cell_graphic2

0xe096,	// (0x0003862e) bg_popup_window_pane_cp21_ParamLimits

0xe096,	// (0x0003862e) bg_popup_window_pane_cp21

0xe0a4,	// (0x0003863c) graphic2_pages_pane_ParamLimits

0xe0a4,	// (0x0003863c) graphic2_pages_pane

0xe0ea,	// (0x00038682) grid_graphic2_control_pane_ParamLimits

0xe0ea,	// (0x00038682) grid_graphic2_control_pane

0xe128,	// (0x000386c0) grid_graphic2_pane_ParamLimits

0xe128,	// (0x000386c0) grid_graphic2_pane

0xe1bd,	// (0x00038755) cell_graphic2_pane

0x4aea,	// (0x0002f082) main_comp_mode_pane

0xd2e4,	// (0x0003787c) list_ai3_gene_pane_ParamLimits

0xd6ae,	// (0x00037c46) bg_popup_window_pane_cp19_ParamLimits

0xd6ba,	// (0x00037c52) bg_touch_area_indi_pane_ParamLimits

0xd6ba,	// (0x00037c52) bg_touch_area_indi_pane

0xd6d0,	// (0x00037c68) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6d0,	// (0x00037c68) bg_touch_area_indi_pane_cp01

0xd6e6,	// (0x00037c7e) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e6,	// (0x00037c7e) bg_touch_area_indi_pane_cp02

0xd6fe,	// (0x00037c96) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fe,	// (0x00037c96) bg_touch_area_indi_pane_cp03

0xd718,	// (0x00037cb0) popup_slider_window_g1_ParamLimits

0xd734,	// (0x00037ccc) popup_slider_window_g2_ParamLimits

0xd750,	// (0x00037ce8) popup_slider_window_g3_ParamLimits

0xfcea,	// (0x0003a282) popup_slider_window_g_ParamLimits

0xd7ac,	// (0x00037d44) popup_slider_window_t1_ParamLimits

0xd820,	// (0x00037db8) small_volume_slider_vertical_pane_ParamLimits

0xe1bd,	// (0x00038755) cell_graphic2_pane_ParamLimits

0xe20b,	// (0x000387a3) bg_button_pane_cp10_ParamLimits

0xe20b,	// (0x000387a3) bg_button_pane_cp10

0xe21e,	// (0x000387b6) bg_button_pane_cp11_ParamLimits

0xe21e,	// (0x000387b6) bg_button_pane_cp11

0xe231,	// (0x000387c9) graphic2_pages_pane_g1_ParamLimits

0xe231,	// (0x000387c9) graphic2_pages_pane_g1

0xe24c,	// (0x000387e4) graphic2_pages_pane_g2_ParamLimits

0xe24c,	// (0x000387e4) graphic2_pages_pane_g2

0x0001,

0xfd94,	// (0x0003a32c) graphic2_pages_pane_g_ParamLimits

0xfd94,	// (0x0003a32c) graphic2_pages_pane_g

0xe264,	// (0x000387fc) graphic2_pages_pane_t1_ParamLimits

0xe264,	// (0x000387fc) graphic2_pages_pane_t1

0xe27c,	// (0x00038814) cell_graphic2_control_pane_ParamLimits

0xe27c,	// (0x00038814) cell_graphic2_control_pane

0xe29d,	// (0x00038835) cell_graphic2_pane_g1_ParamLimits

0xe29d,	// (0x00038835) cell_graphic2_pane_g1

0xe2aa,	// (0x00038842) cell_graphic2_pane_g2_ParamLimits

0xe2aa,	// (0x00038842) cell_graphic2_pane_g2

0xe2b7,	// (0x0003884f) cell_graphic2_pane_g3_ParamLimits

0xe2b7,	// (0x0003884f) cell_graphic2_pane_g3

0xe2c4,	// (0x0003885c) cell_graphic2_pane_g4_ParamLimits

0xe2c4,	// (0x0003885c) cell_graphic2_pane_g4

0xe2d1,	// (0x00038869) cell_graphic2_pane_g5_ParamLimits

0xe2d1,	// (0x00038869) cell_graphic2_pane_g5

0x0004,

0xfd99,	// (0x0003a331) cell_graphic2_pane_g_ParamLimits

0xfd99,	// (0x0003a331) cell_graphic2_pane_g

0xe2ec,	// (0x00038884) cell_graphic2_pane_t1_ParamLimits

0xe2ec,	// (0x00038884) cell_graphic2_pane_t1

0x9b66,	// (0x000340fe) grid_highlight_pane_cp11_ParamLimits

0x9b66,	// (0x000340fe) grid_highlight_pane_cp11

0x803e,	// (0x000325d6) bg_button_pane_cp05

0xe315,	// (0x000388ad) cell_graphic2_control_pane_g1

0xc133,	// (0x000366cb) bg_touch_area_indi_pane_g1

0xe33d,	// (0x000388d5) aid_cmod_rocker_key_size

0xe347,	// (0x000388df) aid_cmode_itu_key_size

0xe351,	// (0x000388e9) main_cmode_video_pane

0xe35b,	// (0x000388f3) main_comp_mode_itu_pane

0xe367,	// (0x000388ff) main_comp_mode_rocker_pane

0xe373,	// (0x0003890b) cell_cmode_rocker_pane_ParamLimits

0xe373,	// (0x0003890b) cell_cmode_rocker_pane

0xe385,	// (0x0003891d) cell_cmode_itu_pane_ParamLimits

0xe385,	// (0x0003891d) cell_cmode_itu_pane

0x8621,	// (0x00032bb9) bg_button_pane_cp06_ParamLimits

0x8621,	// (0x00032bb9) bg_button_pane_cp06

0xc3b1,	// (0x00036949) cell_cmode_rocker_pane_g1_ParamLimits

0xc3b1,	// (0x00036949) cell_cmode_rocker_pane_g1

0xd8c4,	// (0x00037e5c) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c4,	// (0x00037e5c) cell_cmode_rocker_pane_g2

0x0001,

0x0035,	// (0x0002a5cd) cell_cmode_rocker_pane_g_ParamLimits

0x0035,	// (0x0002a5cd) cell_cmode_rocker_pane_g

0x7cc1,	// (0x00032259) bg_button_pane_cp07

0xe39a,	// (0x00038932) cell_cmode_itu_pane_g1

0xe3a3,	// (0x0003893b) cell_cmode_itu_pane_t1

0xe3b1,	// (0x00038949) cell_cmode_itu_pane_t2

0x0001,

0xfda9,	// (0x0003a341) cell_cmode_itu_pane_t

0xdae7,	// (0x0003807f) aid_touch_ctrl_left

0xdaef,	// (0x00038087) aid_touch_ctrl_right

0x7cc1,	// (0x00032259) compa_mode_pane

0xe3bf,	// (0x00038957) aid_cmod_rocker_key_size_cp

0xe3c9,	// (0x00038961) aid_cmode_itu_key_size_cp

0xe3d3,	// (0x0003896b) compa_mode_pane_g1

0xe3db,	// (0x00038973) compa_mode_pane_g2

0xe3e3,	// (0x0003897b) compa_mode_pane_g3

0x0002,

0xfdae,	// (0x0003a346) compa_mode_pane_g

0xe3eb,	// (0x00038983) main_comp_mode_itu_pane_cp

0xe3f3,	// (0x0003898b) main_comp_mode_rocker_pane_cp

0xe3fb,	// (0x00038993) cell_cmode_itu_pane_cp_ParamLimits

0xe3fb,	// (0x00038993) cell_cmode_itu_pane_cp

0xe410,	// (0x000389a8) cell_cmode_rocker_pane_cp_ParamLimits

0xe410,	// (0x000389a8) cell_cmode_rocker_pane_cp

0x8621,	// (0x00032bb9) bg_button_pane_cp06_cp_ParamLimits

0x8621,	// (0x00032bb9) bg_button_pane_cp06_cp

0xc3b1,	// (0x00036949) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3b1,	// (0x00036949) cell_cmode_rocker_pane_g1_cp

0xc133,	// (0x000366cb) cell_cmode_rocker_pane_g2_cp

0x7cc1,	// (0x00032259) bg_button_pane_cp07_cp

0xb033,	// (0x000355cb) cell_cmode_itu_pane_g1_cp

0xe422,	// (0x000389ba) cell_cmode_itu_pane_t1_cp

0xe422,	// (0x000389ba) cell_cmode_itu_pane_t2_cp

0xb020,	// (0x000355b8) settings_code_pane_cp2

0x7db5,	// (0x0003234d) bg_popup_window_pane_cp3_ParamLimits

0x8218,	// (0x000327b0) heading_pane_cp3_ParamLimits

0x8224,	// (0x000327bc) listscroll_popup_graphic_pane_ParamLimits

0x64cf,	// (0x00030a67) fep_hwr_aid_pane_ParamLimits

0x6946,	// (0x00030ede) aid_touch_sctrl_top_ParamLimits

0x6961,	// (0x00030ef9) sctrl_sk_top_pane_g1_ParamLimits

0x6726,	// (0x00030cbe) sctrl_sk_top_pane_g2_ParamLimits

0xfd03,	// (0x0003a29b) sctrl_sk_top_pane_g_ParamLimits

0x696e,	// (0x00030f06) sctrl_sk_top_pane_t1_ParamLimits

0x6946,	// (0x00030ede) aid_touch_sctrl_bottom_ParamLimits

0x696e,	// (0x00030f06) sctrl_sk_bottom_pane_t1_ParamLimits

0xda30,	// (0x00037fc8) aid_area_touch_clock

0x6b57,	// (0x000310ef) aid_vkb2_area_top_pane_cell_ParamLimits

0x6b57,	// (0x000310ef) aid_vkb2_area_top_pane_cell

0x6ca2,	// (0x0003123a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6ca2,	// (0x0003123a) aid_vkb2_area_bottom_pane_cell

0xdf97,	// (0x0003852f) popup_char_count_window

0xe430,	// (0x000389c8) popup_char_count_window_g1

0xe439,	// (0x000389d1) popup_char_count_window_g2

0xe442,	// (0x000389da) popup_char_count_window_g3

0x0002,

0xfdb5,	// (0x0003a34d) popup_char_count_window_g

0xe44b,	// (0x000389e3) popup_char_count_window_t1

0x6a1d,	// (0x00030fb5) popup_fep_char_preview_window_ParamLimits

0x6a1d,	// (0x00030fb5) popup_fep_char_preview_window

0x6b75,	// (0x0003110d) vkb2_top_candi_pane_ParamLimits

0x6b75,	// (0x0003110d) vkb2_top_candi_pane

0xe459,	// (0x000389f1) cell_vkb2_top_candi_pane_ParamLimits

0xe459,	// (0x000389f1) cell_vkb2_top_candi_pane

0x6f85,	// (0x0003151d) bg_popup_fep_char_preview_window_ParamLimits

0x6f85,	// (0x0003151d) bg_popup_fep_char_preview_window

0x6f93,	// (0x0003152b) popup_fep_char_preview_window_t1_ParamLimits

0x6f93,	// (0x0003152b) popup_fep_char_preview_window_t1

0xe4a6,	// (0x00038a3e) bg_popup_fep_char_preview_window_g1

0xe4ae,	// (0x00038a46) bg_popup_fep_char_preview_window_g2

0xe4b6,	// (0x00038a4e) bg_popup_fep_char_preview_window_g3

0xe4be,	// (0x00038a56) bg_popup_fep_char_preview_window_g4

0xe4c6,	// (0x00038a5e) bg_popup_fep_char_preview_window_g5

0x6fcd,	// (0x00031565) bg_popup_fep_char_preview_window_g6

0xe4ce,	// (0x00038a66) bg_popup_fep_char_preview_window_g7

0xe4d6,	// (0x00038a6e) bg_popup_fep_char_preview_window_g8

0xe4de,	// (0x00038a76) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdbc,	// (0x0003a354) bg_popup_fep_char_preview_window_g

0x6726,	// (0x00030cbe) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6726,	// (0x00030cbe) cell_vkb2_top_candi_pane_g1

0x6734,	// (0x00030ccc) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6734,	// (0x00030ccc) cell_vkb2_top_candi_pane_g2

0xe178,	// (0x00038710) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe178,	// (0x00038710) cell_vkb2_top_candi_pane_g3

0x6fd5,	// (0x0003156d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6fd5,	// (0x0003156d) cell_vkb2_top_candi_pane_g4

0xc87c,	// (0x00036e14) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc87c,	// (0x00036e14) cell_vkb2_top_candi_pane_g5

0x6ff6,	// (0x0003158e) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6ff6,	// (0x0003158e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcf,	// (0x0003a367) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcf,	// (0x0003a367) cell_vkb2_top_candi_pane_g

0x7004,	// (0x0003159c) cell_vkb2_top_candi_pane_t1

0x632f,	// (0x000308c7) aid_size_touch_slider_mark_ParamLimits

0x632f,	// (0x000308c7) aid_size_touch_slider_mark

0xe0da,	// (0x00038672) grid_graphic2_catg_pane_ParamLimits

0xe0da,	// (0x00038672) grid_graphic2_catg_pane

0xe199,	// (0x00038731) popup_grid_graphic2_window_t1_ParamLimits

0xe199,	// (0x00038731) popup_grid_graphic2_window_t1

0xe1ab,	// (0x00038743) popup_grid_graphic2_window_t2_ParamLimits

0xe1ab,	// (0x00038743) popup_grid_graphic2_window_t2

0x0001,

0xfd8f,	// (0x0003a327) popup_grid_graphic2_window_t_ParamLimits

0xfd8f,	// (0x0003a327) popup_grid_graphic2_window_t

0x803e,	// (0x000325d6) bg_button_pane_cp05_ParamLimits

0xe315,	// (0x000388ad) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x00038a7e) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x00038a7e) cell_graphic2_catg_pane

0x7cc1,	// (0x00032259) bg_button_pane_cp12

0xe4f8,	// (0x00038a90) cell_graphic2_catg_pane_g1

0xd9fc,	// (0x00037f94) cell_tb_ext_pane_t1_ParamLimits

0x6dbf,	// (0x00031357) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6dbf,	// (0x00031357) vkb2_top_cell_right_narrow_pane

0x6dd7,	// (0x0003136f) vkb2_top_cell_right_wide_pane_ParamLimits

0x6dd7,	// (0x0003136f) vkb2_top_cell_right_wide_pane

0x64c1,	// (0x00030a59) bg_vkb2_func_pane_ParamLimits

0x64c1,	// (0x00030a59) bg_vkb2_func_pane

0x6e48,	// (0x000313e0) vkb2_top_cell_left_pane_g1_ParamLimits

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp03_ParamLimits

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp03

0x6ea6,	// (0x0003143e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9afa,	// (0x00034092) bg_vkb2_func_pane_g1

0x9b02,	// (0x0003409a) bg_vkb2_func_pane_g2

0x9b12,	// (0x000340aa) bg_vkb2_func_pane_g3

0x9b0a,	// (0x000340a2) bg_vkb2_func_pane_g4

0x9b1a,	// (0x000340b2) bg_vkb2_func_pane_g5

0x9b22,	// (0x000340ba) bg_vkb2_func_pane_g6

0x9b2a,	// (0x000340c2) bg_vkb2_func_pane_g7

0x9b32,	// (0x000340ca) bg_vkb2_func_pane_g8

0x9af2,	// (0x0003408a) bg_vkb2_func_pane_g9

0x0008,

0x0061,	// (0x0002a5f9) bg_vkb2_func_pane_g

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp01_ParamLimits

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp01

0x6e48,	// (0x000313e0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6e48,	// (0x000313e0) vkb2_top_cell_right_wide_pane_g1

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp02_ParamLimits

0x64c1,	// (0x00030a59) bg_vkb2_fuc_pane_cp02

0x6ea6,	// (0x0003143e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6ea6,	// (0x0003143e) vkb2_top_cell_right_narrow_pane_g1

0xd632,	// (0x00037bca) aid_touch_area_decrease_ParamLimits

0xd632,	// (0x00037bca) aid_touch_area_decrease

0xd650,	// (0x00037be8) aid_touch_area_increase_ParamLimits

0xd650,	// (0x00037be8) aid_touch_area_increase

0xd65c,	// (0x00037bf4) aid_touch_area_mute_ParamLimits

0xd65c,	// (0x00037bf4) aid_touch_area_mute

0xd680,	// (0x00037c18) aid_touch_area_slider_ParamLimits

0xd680,	// (0x00037c18) aid_touch_area_slider

0xd76c,	// (0x00037d04) popup_slider_window_g4_ParamLimits

0xd76c,	// (0x00037d04) popup_slider_window_g4

0xd778,	// (0x00037d10) popup_slider_window_g5_ParamLimits

0xd778,	// (0x00037d10) popup_slider_window_g5

0xd79a,	// (0x00037d32) popup_slider_window_g6_ParamLimits

0xd79a,	// (0x00037d32) popup_slider_window_g6

0xd7da,	// (0x00037d72) popup_slider_window_t2_ParamLimits

0xd7da,	// (0x00037d72) popup_slider_window_t2

0x0001,

0xfcf7,	// (0x0003a28f) popup_slider_window_t_ParamLimits

0xfcf7,	// (0x0003a28f) popup_slider_window_t

0xd7f2,	// (0x00037d8a) slider_pane_ParamLimits

0xd7f2,	// (0x00037d8a) slider_pane

0xe501,	// (0x00038a99) slider_pane_g1_ParamLimits

0xe501,	// (0x00038a99) slider_pane_g1

0xe515,	// (0x00038aad) slider_pane_g2_ParamLimits

0xe515,	// (0x00038aad) slider_pane_g2

0xe52b,	// (0x00038ac3) slider_pane_g3_ParamLimits

0xe52b,	// (0x00038ac3) slider_pane_g3

0x0003,

0xfddc,	// (0x0003a374) slider_pane_g_ParamLimits

0xfddc,	// (0x0003a374) slider_pane_g

0x5f56,	// (0x000304ee) popup_tb_float_extension_window_ParamLimits

0x5f56,	// (0x000304ee) popup_tb_float_extension_window

0xe557,	// (0x00038aef) aid_size_cell_tb_float_ext

0x7cc1,	// (0x00032259) bg_popup_sub_window_cp28

0xe563,	// (0x00038afb) grid_tb_float_ext_pane

0xe56d,	// (0x00038b05) cell_tb_float_ext_pane_ParamLimits

0xe56d,	// (0x00038b05) cell_tb_float_ext_pane

0xe587,	// (0x00038b1f) cell_tb_float_ext_pane_g1

0xe590,	// (0x00038b28) grid_highlight_pane_cp12

0x6610,	// (0x00030ba8) cell_last_hwr_side_pane_ParamLimits

0x6610,	// (0x00030ba8) cell_last_hwr_side_pane

0xc133,	// (0x000366cb) cell_last_hwr_side_pane_g1

0xe599,	// (0x00038b31) cell_last_hwr_side_pane_g2

0x0001,

0x0074,	// (0x0002a60c) cell_last_hwr_side_pane_g

0x6d6e,	// (0x00031306) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6d6e,	// (0x00031306) vkb2_area_bottom_space_btn_pane

0x6726,	// (0x00030cbe) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04c,	// (0x000385e4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7004,	// (0x0003159c) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7023,	// (0x000315bb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7023,	// (0x000315bb) vkb2_area_bottom_space_btn_pane_g1

0x705d,	// (0x000315f5) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x705d,	// (0x000315f5) vkb2_area_bottom_space_btn_pane_g2

0x7093,	// (0x0003162b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7093,	// (0x0003162b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde5,	// (0x0003a37d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde5,	// (0x0003a37d) vkb2_area_bottom_space_btn_pane_g

0x6584,	// (0x00030b1c) cel_fep_hwr_func_pane_ParamLimits

0x6584,	// (0x00030b1c) cel_fep_hwr_func_pane

0x65c0,	// (0x00030b58) cell_hwr_side_button_pane_ParamLimits

0x65c0,	// (0x00030b58) cell_hwr_side_button_pane

0xda30,	// (0x00037fc8) aid_area_touch_clock_ParamLimits

0x803e,	// (0x000325d6) bg_uniindi_top_pane_ParamLimits

0xda42,	// (0x00037fda) uniindi_top_pane_g1_ParamLimits

0xda58,	// (0x00037ff0) uniindi_top_pane_g2_ParamLimits

0xda64,	// (0x00037ffc) uniindi_top_pane_g3_ParamLimits

0xda75,	// (0x0003800d) uniindi_top_pane_g4_ParamLimits

0xfd2f,	// (0x0003a2c7) uniindi_top_pane_g_ParamLimits

0xda82,	// (0x0003801a) uniindi_top_pane_t1_ParamLimits

0x803e,	// (0x000325d6) bg_vkb2_func_pane_cp01_ParamLimits

0x803e,	// (0x000325d6) bg_vkb2_func_pane_cp01

0xe5a2,	// (0x00038b3a) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a2,	// (0x00038b3a) cel_fep_hwr_func_pane_g1

0x803e,	// (0x000325d6) bg_vkb2_func_pane_cp02_ParamLimits

0x803e,	// (0x000325d6) bg_vkb2_func_pane_cp02

0xe5a2,	// (0x00038b3a) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a2,	// (0x00038b3a) cell_hwr_side_button_pane_g1

0x9973,	// (0x00033f0b) status_pane_g4_ParamLimits

0x9973,	// (0x00033f0b) status_pane_g4

0x998d,	// (0x00033f25) status_pane_t1

0xbe6d,	// (0x00036405) form2_midp_gauge_slider_cont_pane

0xbe75,	// (0x0003640d) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe87,	// (0x0003641f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe99,	// (0x00036431) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x0003a087) form2_midp_gauge_slider_pane_t_ParamLimits

0xbeab,	// (0x00036443) form2_midp_slider_pane_ParamLimits

0x69dd,	// (0x00030f75) aid_size_cell_func_vkb2_ParamLimits

0x69dd,	// (0x00030f75) aid_size_cell_func_vkb2

0xe543,	// (0x00038adb) slider_pane_g4_ParamLimits

0xe543,	// (0x00038adb) slider_pane_g4

0x70dd,	// (0x00031675) form2_midp_gauge_slider_pane_t2_cp01

0x70eb,	// (0x00031683) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x70eb,	// (0x00031683) form2_midp_gauge_slider_pane_t3_cp01

0x7108,	// (0x000316a0) form2_midp_slider_pane_cp01

0x7cc1,	// (0x00032259) navi_smil_pane

0xe5db,	// (0x00038b73) navi_smil_pane_g1

0xe5e3,	// (0x00038b7b) navi_smil_pane_t1

0xe5b0,	// (0x00038b48) form2_midp_slider_pane_g1

0xe5b9,	// (0x00038b51) form2_midp_slider_pane_g2

0xe5c1,	// (0x00038b59) form2_midp_slider_pane_g3

0xe5b0,	// (0x00038b48) form2_midp_slider_pane_g4

0xe5c9,	// (0x00038b61) form2_midp_slider_pane_g5

0x0004,

0xfdee,	// (0x0003a386) form2_midp_slider_pane_g

0x70cd,	// (0x00031665) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x70cd,	// (0x00031665) vkb2_area_bottom_space_btn_pane_g4

0x97a2,	// (0x00033d3a) lc0_navi_pane_ParamLimits

0x97a2,	// (0x00033d3a) lc0_navi_pane

0x9818,	// (0x00033db0) lc0_stat_indi_pane_ParamLimits

0x9818,	// (0x00033db0) lc0_stat_indi_pane

0x982f,	// (0x00033dc7) ls0_title_pane_ParamLimits

0x982f,	// (0x00033dc7) ls0_title_pane

0x8621,	// (0x00032bb9) bg_popup_sub_pane_cp14_ParamLimits

0xda17,	// (0x00037faf) list_uniindi_pane_ParamLimits

0xda23,	// (0x00037fbb) uniindi_top_pane_ParamLimits

0xdabf,	// (0x00038057) list_single_uniindi_pane_g1_ParamLimits

0xdad2,	// (0x0003806a) list_single_uniindi_pane_t1_ParamLimits

0x7111,	// (0x000316a9) lc0_stat_clock_pane_ParamLimits

0x7111,	// (0x000316a9) lc0_stat_clock_pane

0xe5f1,	// (0x00038b89) lc0_stat_indi_pane_g1_ParamLimits

0xe5f1,	// (0x00038b89) lc0_stat_indi_pane_g1

0xe5fe,	// (0x00038b96) lc0_stat_indi_pane_g2_ParamLimits

0xe5fe,	// (0x00038b96) lc0_stat_indi_pane_g2

0x0001,

0xfdf9,	// (0x0003a391) lc0_stat_indi_pane_g_ParamLimits

0xfdf9,	// (0x0003a391) lc0_stat_indi_pane_g

0x711e,	// (0x000316b6) lc0_uni_indicator_pane_ParamLimits

0x711e,	// (0x000316b6) lc0_uni_indicator_pane

0xe60b,	// (0x00038ba3) ls0_title_pane_g1_ParamLimits

0xe60b,	// (0x00038ba3) ls0_title_pane_g1

0xe61f,	// (0x00038bb7) ls0_title_pane_t1_ParamLimits

0xe61f,	// (0x00038bb7) ls0_title_pane_t1

0x712b,	// (0x000316c3) lc0_uni_indicator_pane_g1_ParamLimits

0x712b,	// (0x000316c3) lc0_uni_indicator_pane_g1

0xe655,	// (0x00038bed) lc0_stat_clock_pane_t1

0x4aea,	// (0x0002f082) main_ai5_pane

0xe663,	// (0x00038bfb) ai5_sk_pane_ParamLimits

0xe663,	// (0x00038bfb) ai5_sk_pane

0xe670,	// (0x00038c08) cell_ai5_widget_pane_ParamLimits

0xe670,	// (0x00038c08) cell_ai5_widget_pane

0xe726,	// (0x00038cbe) aid_size_cell_widget_grid

0xe73c,	// (0x00038cd4) bg_ai5_widget_pane_ParamLimits

0xe73c,	// (0x00038cd4) bg_ai5_widget_pane

0xe7b0,	// (0x00038d48) cell_ai5_widget_pane_g2

0xe7c0,	// (0x00038d58) cell_ai5_widget_pane_g3

0xe7d7,	// (0x00038d6f) cell_ai5_widget_pane_g4

0xe7e3,	// (0x00038d7b) cell_ai5_widget_pane_g5

0xe7ef,	// (0x00038d87) cell_ai5_widget_pane_g6

0xe7fb,	// (0x00038d93) cell_ai5_widget_pane_g7

0xe843,	// (0x00038ddb) cell_ai5_widget_pane_t1_ParamLimits

0xe843,	// (0x00038ddb) cell_ai5_widget_pane_t1

0xe860,	// (0x00038df8) cell_ai5_widget_pane_t2_ParamLimits

0xe860,	// (0x00038df8) cell_ai5_widget_pane_t2

0xe878,	// (0x00038e10) cell_ai5_widget_pane_t3_ParamLimits

0xe878,	// (0x00038e10) cell_ai5_widget_pane_t3

0xe890,	// (0x00038e28) cell_ai5_widget_pane_t4_ParamLimits

0xe890,	// (0x00038e28) cell_ai5_widget_pane_t4

0xe8ad,	// (0x00038e45) cell_ai5_widget_pane_t5_ParamLimits

0xe8ad,	// (0x00038e45) cell_ai5_widget_pane_t5

0xe8cc,	// (0x00038e64) cell_ai5_widget_pane_t6_ParamLimits

0xe8cc,	// (0x00038e64) cell_ai5_widget_pane_t6

0xe8de,	// (0x00038e76) cell_ai5_widget_pane_t7_ParamLimits

0xe8de,	// (0x00038e76) cell_ai5_widget_pane_t7

0xe8f7,	// (0x00038e8f) cell_ai5_widget_pane_t8_ParamLimits

0xe8f7,	// (0x00038e8f) cell_ai5_widget_pane_t8

0x0009,

0xfe13,	// (0x0003a3ab) cell_ai5_widget_pane_t_ParamLimits

0xfe13,	// (0x0003a3ab) cell_ai5_widget_pane_t

0xe94b,	// (0x00038ee3) grid_ai5_widget_pane

0x8621,	// (0x00032bb9) highlight_cell_ai5_widget_pane_ParamLimits

0x8621,	// (0x00032bb9) highlight_cell_ai5_widget_pane

0xe963,	// (0x00038efb) ai5_sk_left_pane

0xe96d,	// (0x00038f05) ai5_sk_middle_pane

0xe977,	// (0x00038f0f) ai5_sk_right_pane

0xe981,	// (0x00038f19) bg_ai5_widget_pane_g1_ParamLimits

0xe981,	// (0x00038f19) bg_ai5_widget_pane_g1

0xe98d,	// (0x00038f25) bg_ai5_widget_pane_g2_ParamLimits

0xe98d,	// (0x00038f25) bg_ai5_widget_pane_g2

0xe999,	// (0x00038f31) bg_ai5_widget_pane_g3_ParamLimits

0xe999,	// (0x00038f31) bg_ai5_widget_pane_g3

0xe9a5,	// (0x00038f3d) bg_ai5_widget_pane_g4_ParamLimits

0xe9a5,	// (0x00038f3d) bg_ai5_widget_pane_g4

0xe9b1,	// (0x00038f49) bg_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x00038f49) bg_ai5_widget_pane_g5

0xe9bd,	// (0x00038f55) bg_ai5_widget_pane_g6_ParamLimits

0xe9bd,	// (0x00038f55) bg_ai5_widget_pane_g6

0xe9c9,	// (0x00038f61) bg_ai5_widget_pane_g7_ParamLimits

0xe9c9,	// (0x00038f61) bg_ai5_widget_pane_g7

0xe9d5,	// (0x00038f6d) bg_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x00038f6d) bg_ai5_widget_pane_g8

0xe9e1,	// (0x00038f79) bg_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x00038f79) bg_ai5_widget_pane_g9

0x0008,

0xfe28,	// (0x0003a3c0) bg_ai5_widget_pane_g_ParamLimits

0xfe28,	// (0x0003a3c0) bg_ai5_widget_pane_g

0xea13,	// (0x00038fab) cell_shortcut_ai5_widget_pane_ParamLimits

0xea13,	// (0x00038fab) cell_shortcut_ai5_widget_pane

0x92a8,	// (0x00033840) bg_cell_shortcut_ai5_widget_pane

0xea24,	// (0x00038fbc) cell_grid_ai5_widget_pane_g1

0xea2d,	// (0x00038fc5) highlight_cell_shortcut_ai5_widget_pane

0x9afa,	// (0x00034092) ai5_sk_left_pane_g1

0xea35,	// (0x00038fcd) ai5_sk_left_pane_g2

0xea3d,	// (0x00038fd5) ai5_sk_left_pane_g3

0xea45,	// (0x00038fdd) ai5_sk_left_pane_g4

0x0003,

0xfe3b,	// (0x0003a3d3) ai5_sk_left_pane_g

0xea4d,	// (0x00038fe5) ai5_sk_left_pane_t1

0x9b02,	// (0x0003409a) ai5_sk_right_pane_g1

0xea5b,	// (0x00038ff3) ai5_sk_right_pane_g2

0xea63,	// (0x00038ffb) ai5_sk_right_pane_g3

0xea6b,	// (0x00039003) ai5_sk_right_pane_g4

0x0003,

0xfe44,	// (0x0003a3dc) ai5_sk_right_pane_g

0xea73,	// (0x0003900b) ai5_sk_right_pane_t1

0x9b02,	// (0x0003409a) ai5_sk_middle_pane_g1

0x9afa,	// (0x00034092) ai5_sk_middle_pane_g2

0x9b1a,	// (0x000340b2) ai5_sk_middle_pane_g3

0xea63,	// (0x00038ffb) ai5_sk_middle_pane_g4

0xea3d,	// (0x00038fd5) ai5_sk_middle_pane_g5

0xea81,	// (0x00039019) ai5_sk_middle_pane_g6

0xea89,	// (0x00039021) ai5_sk_middle_pane_g7

0x0006,

0xfe4d,	// (0x0003a3e5) ai5_sk_middle_pane_g

0x962e,	// (0x00033bc6) aid_touch_area_size_lc0_ParamLimits

0x962e,	// (0x00033bc6) aid_touch_area_size_lc0

0x6755,	// (0x00030ced) cell_hwr_candidate_pane_t1_ParamLimits

0x964a,	// (0x00033be2) aid_touch_navi_pane

0x991d,	// (0x00033eb5) status_dt_navi_pane_ParamLimits

0x991d,	// (0x00033eb5) status_dt_navi_pane

0x992a,	// (0x00033ec2) status_dt_sta_pane_ParamLimits

0x992a,	// (0x00033ec2) status_dt_sta_pane

0xea91,	// (0x00039029) dt_sta_controll_pane

0xea9e,	// (0x00039036) dt_sta_indi_pane

0xeaaf,	// (0x00039047) dt_sta_title_pane

0x803e,	// (0x000325d6) bg_dt_sta_indi_pane_ParamLimits

0x803e,	// (0x000325d6) bg_dt_sta_indi_pane

0xeac2,	// (0x0003905a) dt_sta_battery_pane

0xeaca,	// (0x00039062) dt_sta_indi_pane_g1

0xead3,	// (0x0003906b) dt_sta_indi_pane_g2

0xeadc,	// (0x00039074) dt_sta_indi_pane_g3

0x0002,

0xfe5c,	// (0x0003a3f4) dt_sta_indi_pane_g

0xeae5,	// (0x0003907d) dt_sta_signal_pane

0x8621,	// (0x00032bb9) bg_dt_sta_title_pane_ParamLimits

0x8621,	// (0x00032bb9) bg_dt_sta_title_pane

0xeaee,	// (0x00039086) dt_sta_title_pane_g1

0xeaf6,	// (0x0003908e) dt_sta_title_pane_t1_ParamLimits

0xeaf6,	// (0x0003908e) dt_sta_title_pane_t1

0x7cc1,	// (0x00032259) bg_dt_sta_control_pane

0xeb0b,	// (0x000390a3) dt_sta_controll_pane_g1

0xeb14,	// (0x000390ac) bg_dt_sta_title_pane_g1

0xeb1d,	// (0x000390b5) bg_dt_sta_title_pane_g2

0xeb26,	// (0x000390be) bg_dt_sta_title_pane_g3

0x0002,

0xfe63,	// (0x0003a3fb) bg_dt_sta_title_pane_g

0xc133,	// (0x000366cb) bg_dt_sta_indi_pane_g1

0xeb2f,	// (0x000390c7) dt_sta_signal_pane_g1

0xeb37,	// (0x000390cf) dt_sta_signal_pane_g2

0x0001,

0xfe6a,	// (0x0003a402) dt_sta_signal_pane_g

0xeb3f,	// (0x000390d7) dt_sta_battery_pane_g1

0xeb48,	// (0x000390e0) dt_sta_battery_pane_t1

0xc133,	// (0x000366cb) bg_dt_sta_control_pane_g1

0x8db2,	// (0x0003334a) fep_china_uni_eep_pane

0x8dba,	// (0x00033352) fep_china_uni_entry_pane_ParamLimits

0x8dca,	// (0x00033362) popup_fep_china_uni_window_g1_ParamLimits

0x8dda,	// (0x00033372) popup_fep_china_uni_window_g2_ParamLimits

0x8dda,	// (0x00033372) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x00039cbb) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x00039cbb) popup_fep_china_uni_window_g

0xeb57,	// (0x000390ef) fep_china_uni_eep_pane_g1

0xeb5f,	// (0x000390f7) fep_china_uni_eep_pane_t1

0xe5d2,	// (0x00038b6a) aid_touch_area_size_smil_player

0x979a,	// (0x00033d32) lc0_clock_pane

0x9981,	// (0x00033f19) status_pane_g5_ParamLimits

0x9981,	// (0x00033f19) status_pane_g5

0x5c1b,	// (0x000301b3) popup_keymap_window

0x993f,	// (0x00033ed7) status_icon_pane

0xe7c0,	// (0x00038d58) cell_ai5_widget_pane_g3_ParamLimits

0xe7d7,	// (0x00038d6f) cell_ai5_widget_pane_g4_ParamLimits

0xe7e3,	// (0x00038d7b) cell_ai5_widget_pane_g5_ParamLimits

0xe807,	// (0x00038d9f) cell_ai5_widget_pane_g8_ParamLimits

0xe807,	// (0x00038d9f) cell_ai5_widget_pane_g8

0xe81b,	// (0x00038db3) cell_ai5_widget_pane_g9_ParamLimits

0xe81b,	// (0x00038db3) cell_ai5_widget_pane_g9

0xe82f,	// (0x00038dc7) cell_ai5_widget_pane_g10_ParamLimits

0xe82f,	// (0x00038dc7) cell_ai5_widget_pane_g10

0xeb6e,	// (0x00039106) status_icon_pane_g1

0x7cc1,	// (0x00032259) bg_popup_sub_pane_cp13

0xeb76,	// (0x0003910e) popup_keymap_window_t1

0x9573,	// (0x00033b0b) control_pane_g6_ParamLimits

0x9573,	// (0x00033b0b) control_pane_g6

0x9580,	// (0x00033b18) control_pane_g7_ParamLimits

0x9580,	// (0x00033b18) control_pane_g7

0x958d,	// (0x00033b25) control_pane_g8_ParamLimits

0x958d,	// (0x00033b25) control_pane_g8

0xea91,	// (0x00039029) dt_sta_controll_pane_ParamLimits

0xea9e,	// (0x00039036) dt_sta_indi_pane_ParamLimits

0xeaaf,	// (0x00039047) dt_sta_title_pane_ParamLimits

0x8559,	// (0x00032af1) aid_size_touch_scroll_bar_cale

0x4bc3,	// (0x0002f15b) popup_discreet_window_ParamLimits

0x4bc3,	// (0x0002f15b) popup_discreet_window

0x4c4b,	// (0x0002f1e3) popup_sk_window

0xa16b,	// (0x00034703) bg_popup_sub_pane_cp28_ParamLimits

0xa16b,	// (0x00034703) bg_popup_sub_pane_cp28

0xeb84,	// (0x0003911c) popup_discreet_window_g1_ParamLimits

0xeb84,	// (0x0003911c) popup_discreet_window_g1

0xeba4,	// (0x0003913c) popup_discreet_window_t1_ParamLimits

0xeba4,	// (0x0003913c) popup_discreet_window_t1

0xebc2,	// (0x0003915a) popup_discreet_window_t2_ParamLimits

0xebc2,	// (0x0003915a) popup_discreet_window_t2

0x0002,

0xfe6f,	// (0x0003a407) popup_discreet_window_t_ParamLimits

0xfe6f,	// (0x0003a407) popup_discreet_window_t

0x713f,	// (0x000316d7) popup_sk_window_g1

0x7149,	// (0x000316e1) popup_sk_window_g2

0x0001,

0xfe76,	// (0x0003a40e) popup_sk_window_g

0x7153,	// (0x000316eb) popup_sk_window_t1

0x7161,	// (0x000316f9) popup_sk_window_t1_copy1

0xe7b0,	// (0x00038d48) cell_ai5_widget_pane_g2_ParamLimits

0xe909,	// (0x00038ea1) cell_ai5_widget_pane_t9_ParamLimits

0xe909,	// (0x00038ea1) cell_ai5_widget_pane_t9

0x7cc1,	// (0x00032259) main_fep_fshwr2_pane

0x716f,	// (0x00031707) aid_fshwr2_btn_pane

0x717b,	// (0x00031713) aid_fshwr2_syb_pane

0x718c,	// (0x00031724) aid_fshwr2_txt_pane

0x7198,	// (0x00031730) fshwr2_func_candi_pane

0x71b0,	// (0x00031748) fshwr2_hwr_syb_pane

0x71c7,	// (0x0003175f) fshwr2_icf_pane

0x7cc1,	// (0x00032259) fshwr2_icf_bg_pane

0xec14,	// (0x000391ac) fshwr2_icf_pane_t1_ParamLimits

0xec14,	// (0x000391ac) fshwr2_icf_pane_t1

0x8ca0,	// (0x00033238) fshwr2_func_candi_pane_g1

0xec2c,	// (0x000391c4) fshwr2_func_candi_row_pane_ParamLimits

0xec2c,	// (0x000391c4) fshwr2_func_candi_row_pane

0xec3c,	// (0x000391d4) cell_fshwr2_syb_pane_ParamLimits

0xec3c,	// (0x000391d4) cell_fshwr2_syb_pane

0xc3b1,	// (0x00036949) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3b1,	// (0x00036949) fshwr2_hwr_syb_pane_g1

0x7cc1,	// (0x00032259) bg_popup_call_pane_cp01

0xec56,	// (0x000391ee) fshwr2_func_candi_cell_pane_ParamLimits

0xec56,	// (0x000391ee) fshwr2_func_candi_cell_pane

0xec81,	// (0x00039219) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec81,	// (0x00039219) fshwr2_func_candi_cell_bg_pane

0xec8d,	// (0x00039225) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8d,	// (0x00039225) fshwr2_func_candi_cell_pane_g1

0xecb5,	// (0x0003924d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecb5,	// (0x0003924d) fshwr2_func_candi_cell_pane_t1

0x7cc1,	// (0x00032259) bg_button_pane_cp08

0x92a8,	// (0x00033840) cell_fshwr2_syb_bg_pane

0xecc8,	// (0x00039260) cell_fshwr2_syb_bg_pane_g1

0xecd0,	// (0x00039268) cell_fshwr2_syb_bg_pane_t1

0x8621,	// (0x00032bb9) main_tmo_pane

0xac86,	// (0x0003521e) uni_indicator_pane_g1_ParamLimits

0xac9d,	// (0x00035235) uni_indicator_pane_g2_ParamLimits

0xacb0,	// (0x00035248) uni_indicator_pane_g3_ParamLimits

0xacc2,	// (0x0003525a) uni_indicator_pane_g4_ParamLimits

0xacc2,	// (0x0003525a) uni_indicator_pane_g4

0xacd6,	// (0x0003526e) uni_indicator_pane_g5_ParamLimits

0xacd6,	// (0x0003526e) uni_indicator_pane_g5

0xacd6,	// (0x0003526e) uni_indicator_pane_g6_ParamLimits

0xacd6,	// (0x0003526e) uni_indicator_pane_g6

0xf927,	// (0x00039ebf) uni_indicator_pane_g_ParamLimits

0xd60e,	// (0x00037ba6) popup_tmo_note_window_ParamLimits

0xd60e,	// (0x00037ba6) popup_tmo_note_window

0x69bf,	// (0x00030f57) fshwr2_bg_pane

0xeca6,	// (0x0003923e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeca6,	// (0x0003923e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7b,	// (0x0003a413) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7b,	// (0x0003a413) fshwr2_func_candi_cell_pane_g

0xc133,	// (0x000366cb) bg_popup_window_pane_cp01

0xecdf,	// (0x00039277) bg_popup_window_pane_g1_cp01

0xece8,	// (0x00039280) bg_popup_window_pane_cp22_ParamLimits

0xece8,	// (0x00039280) bg_popup_window_pane_cp22

0xecf6,	// (0x0003928e) listscroll_tmo_link_pane_ParamLimits

0xecf6,	// (0x0003928e) listscroll_tmo_link_pane

0xed36,	// (0x000392ce) popup_tmo_note_window_g1_ParamLimits

0xed36,	// (0x000392ce) popup_tmo_note_window_g1

0xed43,	// (0x000392db) tmo_note_info_pane_ParamLimits

0xed43,	// (0x000392db) tmo_note_info_pane

0xed5d,	// (0x000392f5) list_tmo_note_info_pane_g1_ParamLimits

0xed5d,	// (0x000392f5) list_tmo_note_info_pane_g1

0xed74,	// (0x0003930c) list_tmo_note_info_pane_g2_ParamLimits

0xed74,	// (0x0003930c) list_tmo_note_info_pane_g2

0x0001,

0xfe80,	// (0x0003a418) list_tmo_note_info_pane_g_ParamLimits

0xfe80,	// (0x0003a418) list_tmo_note_info_pane_g

0xed90,	// (0x00039328) list_tmo_note_info_text_pane_ParamLimits

0xed90,	// (0x00039328) list_tmo_note_info_text_pane

0xee11,	// (0x000393a9) list_tmo_link_pane

0xee1e,	// (0x000393b6) scroll_pane_cp20

0xee2b,	// (0x000393c3) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x000393c3) list_single_tmo_link_pane

0xee3b,	// (0x000393d3) list_single_tmo_link_pane_t1

0xee49,	// (0x000393e1) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x000393e1) list_tmo_note_info_text_pane_t1

0x86db,	// (0x00032c73) aid_size_touch_scroll_bar_cp01_ParamLimits

0x86db,	// (0x00032c73) aid_size_touch_scroll_bar_cp01

0x53ce,	// (0x0002f966) aid_size_touch_slider_marker

0x4c33,	// (0x0002f1cb) popup_settings_window_ParamLimits

0x4c33,	// (0x0002f1cb) popup_settings_window

0x73da,	// (0x00031972) popup_candi_list_indi_window

0x964a,	// (0x00033be2) aid_touch_navi_pane_ParamLimits

0x691a,	// (0x00030eb2) rs_clock_indi_pane

0x6923,	// (0x00030ebb) sctrl_sk_bottom_pane_ParamLimits

0x6934,	// (0x00030ecc) sctrl_sk_top_pane_ParamLimits

0x6a37,	// (0x00030fcf) popup_fep_tooltip_window

0xe726,	// (0x00038cbe) aid_size_cell_widget_grid_ParamLimits

0xe79b,	// (0x00038d33) cell_ai5_widget_pane_g1_ParamLimits

0xe79b,	// (0x00038d33) cell_ai5_widget_pane_g1

0xe7ef,	// (0x00038d87) cell_ai5_widget_pane_g6_ParamLimits

0xe7fb,	// (0x00038d93) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfdfe,	// (0x0003a396) cell_ai5_widget_pane_g_ParamLimits

0xfdfe,	// (0x0003a396) cell_ai5_widget_pane_g

0xe92d,	// (0x00038ec5) cell_ai5_widget_pane_t10_ParamLimits

0xe92d,	// (0x00038ec5) cell_ai5_widget_pane_t10

0xe94b,	// (0x00038ee3) grid_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00038f85) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x00038f85) cell_contacts_ai5_widget_pane

0xebd7,	// (0x0003916f) popup_discreet_window_t3_ParamLimits

0xebd7,	// (0x0003916f) popup_discreet_window_t3

0x71dc,	// (0x00031774) popup_fshwr2_char_preview_window_ParamLimits

0x71dc,	// (0x00031774) popup_fshwr2_char_preview_window

0xedae,	// (0x00039346) tmo_note_info_pane_t1

0xedc3,	// (0x0003935b) tmo_note_info_pane_t2

0xedd8,	// (0x00039370) tmo_note_info_pane_t3

0xeded,	// (0x00039385) tmo_note_info_pane_t4

0xedff,	// (0x00039397) tmo_note_info_pane_t5

0x0004,

0xfe85,	// (0x0003a41d) tmo_note_info_pane_t

0xee11,	// (0x000393a9) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x000393b6) scroll_pane_cp20_ParamLimits

0x7cc1,	// (0x00032259) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x000393fa) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x00039408) popup_candi_list_indi_window_g1

0xee79,	// (0x00039411) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x0003941d) cell_contacts_ai5_widget_pane_g1

0xc7d1,	// (0x00036d69) cell_contacts_ai5_widget_pane_g2

0xee98,	// (0x00039430) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe90,	// (0x0003a428) cell_contacts_ai5_widget_pane_g

0xeeaa,	// (0x00039442) cell_contacts_ai5_widget_pane_t1

0x8621,	// (0x00032bb9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef21,	// (0x000394b9) settings_container_pane

0x92a8,	// (0x00033840) listscroll_set_pane_copy1

0xb814,	// (0x00035dac) scroll_pane_cp121_copy1

0xef2d,	// (0x000394c5) set_content_pane_copy1

0xef35,	// (0x000394cd) aid_height_set_list_copy1_ParamLimits

0xef35,	// (0x000394cd) aid_height_set_list_copy1

0xaece,	// (0x00035466) aid_size_parent_copy1_ParamLimits

0xaece,	// (0x00035466) aid_size_parent_copy1

0xef41,	// (0x000394d9) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef41,	// (0x000394d9) button_value_adjust_pane_cp6_copy1

0x95e8,	// (0x00033b80) list_highlight_pane_cp2_copy1_ParamLimits

0x95e8,	// (0x00033b80) list_highlight_pane_cp2_copy1

0xef55,	// (0x000394ed) list_set_pane_copy1_ParamLimits

0xef55,	// (0x000394ed) list_set_pane_copy1

0xeebc,	// (0x00039454) main_pane_set_t1_copy1_ParamLimits

0xeebc,	// (0x00039454) main_pane_set_t1_copy1

0xeef6,	// (0x0003948e) main_pane_set_t2_copy1_ParamLimits

0xeef6,	// (0x0003948e) main_pane_set_t2_copy1

0xf002,	// (0x0003959a) main_pane_set_t3_copy1

0xf010,	// (0x000395a8) main_pane_set_t4_copy1

0xef15,	// (0x000394ad) set_content_pane_g1_copy1_ParamLimits

0xef15,	// (0x000394ad) set_content_pane_g1_copy1

0xf01e,	// (0x000395b6) setting_code_pane_copy1

0xf026,	// (0x000395be) setting_slider_graphic_pane_copy1

0xf026,	// (0x000395be) setting_slider_pane_copy1

0xf026,	// (0x000395be) setting_text_pane_copy1

0xf026,	// (0x000395be) setting_volume_pane_copy1

0xf01e,	// (0x000395b6) settings_code_pane_cp2_copy1

0xf02e,	// (0x000395c6) settings_code_pane_cp_copy1_ParamLimits

0xf02e,	// (0x000395c6) settings_code_pane_cp_copy1

0x71f0,	// (0x00031788) volume_set_pane_copy1

0xf042,	// (0x000395da) volume_set_pane_g10_copy1

0xf04a,	// (0x000395e2) volume_set_pane_g1_copy1

0xf052,	// (0x000395ea) volume_set_pane_g2_copy1

0xf05a,	// (0x000395f2) volume_set_pane_g3_copy1

0xf062,	// (0x000395fa) volume_set_pane_g4_copy1

0xf06a,	// (0x00039602) volume_set_pane_g5_copy1

0xf072,	// (0x0003960a) volume_set_pane_g6_copy1

0xf07a,	// (0x00039612) volume_set_pane_g7_copy1

0xf082,	// (0x0003961a) volume_set_pane_g8_copy1

0xf08a,	// (0x00039622) volume_set_pane_g9_copy1

0x7db5,	// (0x0003234d) bg_set_opt_pane_cp_copy1_ParamLimits

0x7db5,	// (0x0003234d) bg_set_opt_pane_cp_copy1

0x71f8,	// (0x00031790) setting_slider_pane_t1_copy1_ParamLimits

0x71f8,	// (0x00031790) setting_slider_pane_t1_copy1

0x7216,	// (0x000317ae) setting_slider_pane_t2_copy1_ParamLimits

0x7216,	// (0x000317ae) setting_slider_pane_t2_copy1

0x7230,	// (0x000317c8) setting_slider_pane_t3_copy1_ParamLimits

0x7230,	// (0x000317c8) setting_slider_pane_t3_copy1

0x7248,	// (0x000317e0) slider_set_pane_copy1_ParamLimits

0x7248,	// (0x000317e0) slider_set_pane_copy1

0x867c,	// (0x00032c14) set_opt_bg_pane_g1_copy2

0x8684,	// (0x00032c1c) set_opt_bg_pane_g2_copy2

0xf092,	// (0x0003962a) set_opt_bg_pane_g3_copy2

0x8694,	// (0x00032c2c) set_opt_bg_pane_g4_copy2

0x869c,	// (0x00032c34) set_opt_bg_pane_g5_copy2

0x86a4,	// (0x00032c3c) set_opt_bg_pane_g6_copy2

0xf09c,	// (0x00039634) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x0003963c) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x00039646) set_opt_bg_pane_g9_copy2

0xf0b8,	// (0x00039650) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b8,	// (0x00039650) aid_size_touch_slider_mark_copy1

0xf0cc,	// (0x00039664) slider_set_pane_g1_copy1

0xf0d5,	// (0x0003966d) slider_set_pane_g2_copy1

0xb297,	// (0x0003582f) slider_set_pane_g3_copy1_ParamLimits

0xb297,	// (0x0003582f) slider_set_pane_g3_copy1

0xb2ab,	// (0x00035843) slider_set_pane_g4_copy1_ParamLimits

0xb2ab,	// (0x00035843) slider_set_pane_g4_copy1

0xb2c3,	// (0x0003585b) slider_set_pane_g5_copy1_ParamLimits

0xb2c3,	// (0x0003585b) slider_set_pane_g5_copy1

0xb297,	// (0x0003582f) slider_set_pane_g6_copy1_ParamLimits

0xb297,	// (0x0003582f) slider_set_pane_g6_copy1

0xf0dd,	// (0x00039675) slider_set_pane_g7_copy1_ParamLimits

0xf0dd,	// (0x00039675) slider_set_pane_g7_copy1

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp2_copy1

0xf0f3,	// (0x0003968b) setting_slider_graphic_pane_g1_copy1

0xf0fc,	// (0x00039694) setting_slider_graphic_pane_t1_copy1

0xf10c,	// (0x000396a4) setting_slider_graphic_pane_t2_copy1

0xf11c,	// (0x000396b4) slider_set_pane_cp_copy1

0xf12c,	// (0x000396c4) input_focus_pane_cp1_copy1

0xf135,	// (0x000396cd) list_set_text_pane_copy1

0xf13d,	// (0x000396d5) setting_text_pane_g1_copy1

0x4dd4,	// (0x0002f36c) set_text_pane_t1_copy1

0xf12c,	// (0x000396c4) input_focus_pane_cp2_copy1

0xf13d,	// (0x000396d5) setting_code_pane_g1_copy1

0xf146,	// (0x000396de) setting_code_pane_t1_copy1

0xf154,	// (0x000396ec) list_set_graphic_pane_copy1

0x7cd5,	// (0x0003226d) bg_set_opt_pane_cp4_copy1

0x8fae,	// (0x00033546) list_set_graphic_pane_g1_copy1_ParamLimits

0x8fae,	// (0x00033546) list_set_graphic_pane_g1_copy1

0xf166,	// (0x000396fe) list_set_graphic_pane_g2_copy1

0x8fc6,	// (0x0003355e) list_set_graphic_pane_t1_copy1_ParamLimits

0x8fc6,	// (0x0003355e) list_set_graphic_pane_t1_copy1

0xc133,	// (0x000366cb) rs_clock_indi_pane_g1

0xf16e,	// (0x00039706) rs_clock_indi_pane_t1

0xf17c,	// (0x00039714) rs_indi_pane

0xf184,	// (0x0003971c) rs_indi_pane_g1

0xf18d,	// (0x00039725) rs_indi_pane_g2

0xf196,	// (0x0003972e) rs_indi_pane_g3

0x0002,

0xfe97,	// (0x0003a42f) rs_indi_pane_g

0x92a8,	// (0x00033840) bg_popup_preview_window_pane_cp03

0xf19f,	// (0x00039737) popup_fep_tooltip_window_t1

0xcdaf,	// (0x00037347) popup_note2_window_g2_ParamLimits

0xcdaf,	// (0x00037347) popup_note2_window_g2

0x0001,

0xfc67,	// (0x0003a1ff) popup_note2_window_g_ParamLimits

0xfc67,	// (0x0003a1ff) popup_note2_window_g

0xd2aa,	// (0x00037842) bg_popup_sub_pane_cp11_ParamLimits

0xd2b7,	// (0x0003784f) cell_ai3_links_pane_g1_ParamLimits

0xd2ce,	// (0x00037866) cell_ai3_links_pane_t1

0x4dd4,	// (0x0002f36c) set_text_pane_t1_copy1_ParamLimits

0x91b9,	// (0x00033751) cell_graphic_popup_pane_cp2_ParamLimits

0x91b9,	// (0x00033751) cell_graphic_popup_pane_cp2

0xf1ad,	// (0x00039745) cell_graphic_popup_pane_g1_cp2

0x836c,	// (0x00032904) cell_graphic_popup_pane_g2_cp2

0xf1b5,	// (0x0003974d) cell_graphic_popup_pane_g3_cp2

0xf1bd,	// (0x00039755) cell_graphic_popup_pane_t2_cp2

0x837d,	// (0x00032915) grid_highlight_pane_cp3_cp2

0x89c1,	// (0x00032f59) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8621,	// (0x00032bb9) main_tmo_pane_ParamLimits

0xd602,	// (0x00037b9a) popup_tmo_big_image_note_window

0xe78a,	// (0x00038d22) cell_ai5_widget_list_pane

0xe792,	// (0x00038d2a) cell_ai5_widget_lrg_icon_pane

0xedae,	// (0x00039346) tmo_note_info_pane_t1_ParamLimits

0xedc3,	// (0x0003935b) tmo_note_info_pane_t2_ParamLimits

0xedd8,	// (0x00039370) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x00039385) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x00039397) tmo_note_info_pane_t5_ParamLimits

0xfe85,	// (0x0003a41d) tmo_note_info_pane_t_ParamLimits

0xef21,	// (0x000394b9) settings_container_pane_ParamLimits

0xf124,	// (0x000396bc) indicator_popup_pane_cp5

0xf124,	// (0x000396bc) indicator_popup_pane_cp6

0xf154,	// (0x000396ec) list_set_graphic_pane_copy1_ParamLimits

0x7cc1,	// (0x00032259) bg_popup_window_pane_cp23

0xf1cb,	// (0x00039763) popup_tmo_big_image_note_window_g1

0xf1d5,	// (0x0003976d) popup_tmo_big_image_note_window_t1

0xf1e5,	// (0x0003977d) popup_tmo_big_image_note_window_t2

0xf1f5,	// (0x0003978d) popup_tmo_big_image_note_window_t3

0x0002,

0xfe9e,	// (0x0003a436) popup_tmo_big_image_note_window_t

0xc133,	// (0x000366cb) cell_ai5_widget_lrg_icon_pane_g1

0xf205,	// (0x0003979d) cell_ai5_widget_lrg_icon_pane_t1

0xf213,	// (0x000397ab) cell_ai5_widget_list_row_pane_ParamLimits

0xf213,	// (0x000397ab) cell_ai5_widget_list_row_pane

0xf22c,	// (0x000397c4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf22c,	// (0x000397c4) cell_ai5_widget_list_row_pane_g1

0xf239,	// (0x000397d1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf239,	// (0x000397d1) cell_ai5_widget_list_row_pane_t1

0xf26a,	// (0x00039802) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26a,	// (0x00039802) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea5,	// (0x0003a43d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea5,	// (0x0003a43d) cell_ai5_widget_list_row_pane_t

0x4aea,	// (0x0002f082) main_fep_vtchi_ss_pane

0x726d,	// (0x00031805) popup_fep_char_pre_window

0x7275,	// (0x0003180d) popup_fep_ituss_window

0x7296,	// (0x0003182e) popup_fep_vkbss_window

0xf292,	// (0x0003982a) grid_vkbss_keypad_pane_ParamLimits

0xf292,	// (0x0003982a) grid_vkbss_keypad_pane

0xf2a2,	// (0x0003983a) ituss_keypad_pane

0x72c1,	// (0x00031859) aid_vkbss_key_offset_ParamLimits

0x72c1,	// (0x00031859) aid_vkbss_key_offset

0x72cd,	// (0x00031865) cell_vkbss_key_pane_ParamLimits

0x72cd,	// (0x00031865) cell_vkbss_key_pane

0xf2b2,	// (0x0003984a) bg_cell_vkbss_key_g1_ParamLimits

0xf2b2,	// (0x0003984a) bg_cell_vkbss_key_g1

0xf2be,	// (0x00039856) cell_vkbss_key_3p_pane_ParamLimits

0xf2be,	// (0x00039856) cell_vkbss_key_3p_pane

0xf2d8,	// (0x00039870) cell_vkbss_key_g1_ParamLimits

0xf2d8,	// (0x00039870) cell_vkbss_key_g1

0xf2f2,	// (0x0003988a) cell_vkbss_key_t1_ParamLimits

0xf2f2,	// (0x0003988a) cell_vkbss_key_t1

0x72e3,	// (0x0003187b) cell_ituss_key_pane_ParamLimits

0x72e3,	// (0x0003187b) cell_ituss_key_pane

0xf31d,	// (0x000398b5) bg_cell_ituss_key_g1_ParamLimits

0xf31d,	// (0x000398b5) bg_cell_ituss_key_g1

0xf329,	// (0x000398c1) cell_ituss_key_pane_g1_ParamLimits

0xf329,	// (0x000398c1) cell_ituss_key_pane_g1

0xf343,	// (0x000398db) cell_ituss_key_pane_g2_ParamLimits

0xf343,	// (0x000398db) cell_ituss_key_pane_g2

0x0001,

0xfeac,	// (0x0003a444) cell_ituss_key_pane_g_ParamLimits

0xfeac,	// (0x0003a444) cell_ituss_key_pane_g

0xf371,	// (0x00039909) cell_ituss_key_t1_ParamLimits

0xf371,	// (0x00039909) cell_ituss_key_t1

0xf3ab,	// (0x00039943) cell_ituss_key_t2_ParamLimits

0xf3ab,	// (0x00039943) cell_ituss_key_t2

0xf3dc,	// (0x00039974) cell_ituss_key_t3_ParamLimits

0xf3dc,	// (0x00039974) cell_ituss_key_t3

0xf416,	// (0x000399ae) cell_ituss_key_t4_ParamLimits

0xf416,	// (0x000399ae) cell_ituss_key_t4

0x0003,

0xfeb1,	// (0x0003a449) cell_ituss_key_t_ParamLimits

0xfeb1,	// (0x0003a449) cell_ituss_key_t

0xf450,	// (0x000399e8) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x000399f0) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x000399f8) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeba,	// (0x0003a452) cell_vkbss_key_3p_pane_g

0x7cc1,	// (0x00032259) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x00039a00) popup_fep_char_pre_window_t1

0xe71c,	// (0x00038cb4) main_ai5_sk_pane

0xee79,	// (0x00039411) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x0003941d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7d1,	// (0x00036d69) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee98,	// (0x00039430) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe90,	// (0x0003a428) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeaa,	// (0x00039442) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8621,	// (0x00032bb9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x00039a0f) main_ai5_sk_pane_g1

0x9fa4,	// (0x0003453c) popup_query_code_window_g1

0x728b,	// (0x00031823) popup_fep_vkb_icf_pane

0x729f,	// (0x00031837) popup_fep_vtchi_icf_pane

0x8621,	// (0x00032bb9) bg_icf_pane

0xf480,	// (0x00039a18) list_vkb_icf_pane

0x8621,	// (0x00032bb9) bg_icf_pane_cp01

0xf48c,	// (0x00039a24) vtchi_icf_list_pane

0xf49d,	// (0x00039a35) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x00039a35) list_vkb_icf_pane_t1

0xf4b3,	// (0x00039a4b) vtchi_icf_list_pane_t1_ParamLimits

0xf4b3,	// (0x00039a4b) vtchi_icf_list_pane_t1

0x7275,	// (0x0003180d) popup_fep_ituss_window_ParamLimits

0x729f,	// (0x00031837) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a2,	// (0x0003983a) ituss_keypad_pane_ParamLimits

0x72b5,	// (0x0003184d) ituss_sks_pane

0x8621,	// (0x00032bb9) bg_icf_pane_ParamLimits

0x725e,	// (0x000317f6) icf_edit_indi_pane_ParamLimits

0x725e,	// (0x000317f6) icf_edit_indi_pane

0xf480,	// (0x00039a18) list_vkb_icf_pane_ParamLimits

0x8621,	// (0x00032bb9) bg_icf_pane_cp01_ParamLimits

0x725e,	// (0x000317f6) icf_edit_indi_pane_cp01_ParamLimits

0x725e,	// (0x000317f6) icf_edit_indi_pane_cp01

0xf494,	// (0x00039a2c) vtchi_query_pane

0xc3b1,	// (0x00036949) icf_edit_indi_pane_g1_ParamLimits

0xc3b1,	// (0x00036949) icf_edit_indi_pane_g1

0xf537,	// (0x00039acf) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x00039acf) icf_edit_indi_pane_g2

0x0001,

0x00af,	// (0x0002a647) icf_edit_indi_pane_g_ParamLimits

0x00af,	// (0x0002a647) icf_edit_indi_pane_g

0xf546,	// (0x00039ade) icf_edit_indi_pane_t1

0xf4cd,	// (0x00039a65) bg_input_focus_pane_cp042

0x8550,	// (0x00032ae8) vtchi_button_pane

0xf4d6,	// (0x00039a6e) vtchi_query_pane_t1

0xf4e4,	// (0x00039a7c) vtchi_query_pane_t2

0xf4f2,	// (0x00039a8a) vtchi_query_pane_t3

0x0002,

0xfec1,	// (0x0003a459) vtchi_query_pane_t

0x7cc1,	// (0x00032259) bg_button_pane_cp13

0xf500,	// (0x00039a98) vtchi_button_pane_g1

0xf508,	// (0x00039aa0) ituss_sks_pane_g1

0xf513,	// (0x00039aab) ituss_sks_pane_g2

0x0001,

0xfec8,	// (0x0003a460) ituss_sks_pane_g

0xf51b,	// (0x00039ab3) ituss_sks_pane_t1

0xf529,	// (0x00039ac1) ituss_sks_pane_t2

0x0001,

0xfecd,	// (0x0003a465) ituss_sks_pane_t

0xbbaa,	// (0x00036142) indicator_nsta_pane_cp_g1

0xbbb3,	// (0x0003614b) indicator_nsta_pane_cp_g2

0xbbbb,	// (0x00036153) indicator_nsta_pane_cp_g3

0xbbc3,	// (0x0003615b) indicator_nsta_pane_cp_g4

0xbbc3,	// (0x0003615b) indicator_nsta_pane_cp_g5

0xbbc3,	// (0x0003615b) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x0003a03d) indicator_nsta_pane_cp_g

0xe302,	// (0x0003889a) cell_graphic2_pane_t2_ParamLimits

0xe302,	// (0x0003889a) cell_graphic2_pane_t2

0x0001,

0xfda4,	// (0x0003a33c) cell_graphic2_pane_t_ParamLimits

0xfda4,	// (0x0003a33c) cell_graphic2_pane_t

0xe32f,	// (0x000388c7) cell_graphic2_control_pane_t1

0x8d61,	// (0x000332f9) signal_pane_g3_ParamLimits

0x8d61,	// (0x000332f9) signal_pane_g3

0x8d73,	// (0x0003330b) signal_pane_g4_ParamLimits

0x8d73,	// (0x0003330b) signal_pane_g4

0xf27c,	// (0x00039814) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27c,	// (0x00039814) cell_ai5_widget_list_row_pane_t3

0xf35f,	// (0x000398f7) cell_ituss_key_pane_t1_ParamLimits

0xf35f,	// (0x000398f7) cell_ituss_key_pane_t1

0x9bf7,	// (0x0003418f) form_field_data_wide_pane_vc_t2_ParamLimits

0x9bf7,	// (0x0003418f) form_field_data_wide_pane_vc_t2

0x9c0b,	// (0x000341a3) form_field_data_wide_pane_vc_t3_ParamLimits

0x9c0b,	// (0x000341a3) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x00039da7) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x00039da7) form_field_data_wide_pane_vc_t

0xb856,	// (0x00035dee) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb856,	// (0x00035dee) form_field_slider_wide_pane_vc_t3

0xb934,	// (0x00035ecc) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb934,	// (0x00035ecc) form_field_popup_wide_pane_vc_t2

0xb94b,	// (0x00035ee3) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb94b,	// (0x00035ee3) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x0003a02c) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x0003a02c) form_field_popup_wide_pane_vc_t

0x716f,	// (0x00031707) aid_fshwr2_btn_pane_ParamLimits

0x717b,	// (0x00031713) aid_fshwr2_syb_pane_ParamLimits

0x718c,	// (0x00031724) aid_fshwr2_txt_pane_ParamLimits

0x69bf,	// (0x00030f57) fshwr2_bg_pane_ParamLimits

0x7198,	// (0x00031730) fshwr2_func_candi_pane_ParamLimits

0x71b0,	// (0x00031748) fshwr2_hwr_syb_pane_ParamLimits

0x71c7,	// (0x0003175f) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

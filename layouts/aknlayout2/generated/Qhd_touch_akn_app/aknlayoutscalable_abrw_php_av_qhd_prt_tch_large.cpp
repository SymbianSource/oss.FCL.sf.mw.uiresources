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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00049f16 };

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
0x772b,	// (0x00051641) Screen

0x773f,	// (0x00051655) application_window_ParamLimits

0x773f,	// (0x00051655) application_window

0x7759,	// (0x0005166f) screen_g1

0x4bbd,	// (0x0004ead3) area_bottom_pane_ParamLimits

0x4bbd,	// (0x0004ead3) area_bottom_pane

0x4c7d,	// (0x0004eb93) area_top_pane_ParamLimits

0x4c7d,	// (0x0004eb93) area_top_pane

0x4d1b,	// (0x0004ec31) main_pane_ParamLimits

0x4d1b,	// (0x0004ec31) main_pane

0x7763,	// (0x00051679) misc_graphics

0x969b,	// (0x000535b1) battery_pane_ParamLimits

0x969b,	// (0x000535b1) battery_pane

0xa3ba,	// (0x000542d0) bg_status_flat_pane_g8

0xa3c2,	// (0x000542d8) bg_status_flat_pane_g9

0x975d,	// (0x00053673) context_pane_ParamLimits

0x975d,	// (0x00053673) context_pane

0x9873,	// (0x00053789) navi_pane_ParamLimits

0x9873,	// (0x00053789) navi_pane

0x98f0,	// (0x00053806) signal_pane_ParamLimits

0x98f0,	// (0x00053806) signal_pane

0x0008,

0xf88f,	// (0x000597a5) bg_status_flat_pane_g

0x995d,	// (0x00053873) status_pane_g1_ParamLimits

0x995d,	// (0x00053873) status_pane_g1

0x9971,	// (0x00053887) status_pane_g2_ParamLimits

0x9971,	// (0x00053887) status_pane_g2

0x997d,	// (0x00053893) status_pane_g3_ParamLimits

0x997d,	// (0x00053893) status_pane_g3

0x0004,

0xf7bd,	// (0x000596d3) status_pane_g_ParamLimits

0xf7bd,	// (0x000596d3) status_pane_g

0x99b1,	// (0x000538c7) title_pane_ParamLimits

0x99b1,	// (0x000538c7) title_pane

0x99ee,	// (0x00053904) uni_indicator_pane_ParamLimits

0x99ee,	// (0x00053904) uni_indicator_pane

0x902c,	// (0x00052f42) bg_list_pane_ParamLimits

0x902c,	// (0x00052f42) bg_list_pane

0x6f5b,	// (0x00050e71) find_pane

0x904c,	// (0x00052f62) listscroll_app_pane_ParamLimits

0x904c,	// (0x00052f62) listscroll_app_pane

0x9058,	// (0x00052f6e) listscroll_form_pane

0x6f63,	// (0x00050e79) listscroll_gen_pane_ParamLimits

0x6f63,	// (0x00050e79) listscroll_gen_pane

0x9058,	// (0x00052f6e) listscroll_set_pane

0x829d,	// (0x000521b3) main_idle_act_pane

0x8cf2,	// (0x00052c08) main_idle_trad_pane

0x8cf2,	// (0x00052c08) main_list_empty_pane

0x9072,	// (0x00052f88) main_midp_pane

0x907e,	// (0x00052f94) main_pane_g1_ParamLimits

0x907e,	// (0x00052f94) main_pane_g1

0x908c,	// (0x00052fa2) popup_ai_message_window_ParamLimits

0x908c,	// (0x00052fa2) popup_ai_message_window

0x912e,	// (0x00053044) popup_fep_china_uni_window_ParamLimits

0x912e,	// (0x00053044) popup_fep_china_uni_window

0x918a,	// (0x000530a0) popup_fep_japan_candidate_window_ParamLimits

0x918a,	// (0x000530a0) popup_fep_japan_candidate_window

0x91aa,	// (0x000530c0) popup_fep_japan_predictive_window_ParamLimits

0x91aa,	// (0x000530c0) popup_fep_japan_predictive_window

0x91da,	// (0x000530f0) popup_find_window

0x91e7,	// (0x000530fd) popup_grid_graphic_window_ParamLimits

0x91e7,	// (0x000530fd) popup_grid_graphic_window

0x920f,	// (0x00053125) popup_large_graphic_colour_window

0x9235,	// (0x0005314b) popup_menu_window_ParamLimits

0x9235,	// (0x0005314b) popup_menu_window

0x93ed,	// (0x00053303) popup_note_image_window

0x93d9,	// (0x000532ef) popup_note_wait_window_ParamLimits

0x93d9,	// (0x000532ef) popup_note_wait_window

0x93d9,	// (0x000532ef) popup_note_window_ParamLimits

0x93d9,	// (0x000532ef) popup_note_window

0x9443,	// (0x00053359) popup_query_code_window_ParamLimits

0x9443,	// (0x00053359) popup_query_code_window

0x9457,	// (0x0005336d) popup_query_data_code_window_ParamLimits

0x9457,	// (0x0005336d) popup_query_data_code_window

0x9474,	// (0x0005338a) popup_query_data_window_ParamLimits

0x9474,	// (0x0005338a) popup_query_data_window

0x9490,	// (0x000533a6) popup_query_sat_info_window_ParamLimits

0x9490,	// (0x000533a6) popup_query_sat_info_window

0x94c9,	// (0x000533df) popup_snote_single_graphic_window_ParamLimits

0x94c9,	// (0x000533df) popup_snote_single_graphic_window

0x94c9,	// (0x000533df) popup_snote_single_text_window_ParamLimits

0x94c9,	// (0x000533df) popup_snote_single_text_window

0x94de,	// (0x000533f4) popup_sub_window_general

0x960e,	// (0x00053524) popup_window_general_ParamLimits

0x960e,	// (0x00053524) popup_window_general

0x9623,	// (0x00053539) power_save_pane

0x5b9e,	// (0x0004fab4) control_pane_g1_ParamLimits

0x5b9e,	// (0x0004fab4) control_pane_g1

0x5bc7,	// (0x0004fadd) control_pane_g2_ParamLimits

0x5bc7,	// (0x0004fadd) control_pane_g2

0x8fdd,	// (0x00052ef3) control_pane_g3_ParamLimits

0x8fdd,	// (0x00052ef3) control_pane_g3

0x0007,

0xf7a5,	// (0x000596bb) control_pane_g_ParamLimits

0xf7a5,	// (0x000596bb) control_pane_g

0x5c0e,	// (0x0004fb24) control_pane_t1_ParamLimits

0x5c0e,	// (0x0004fb24) control_pane_t1

0x5c60,	// (0x0004fb76) control_pane_t2_ParamLimits

0x5c60,	// (0x0004fb76) control_pane_t2

0x0002,

0xf7b6,	// (0x000596cc) control_pane_t_ParamLimits

0xf7b6,	// (0x000596cc) control_pane_t

0x8efe,	// (0x00052e14) navi_navi_volume_pane_cp1

0x8f07,	// (0x00052e1d) status_small_icon_pane

0x8f0f,	// (0x00052e25) status_small_pane_g1_ParamLimits

0x8f0f,	// (0x00052e25) status_small_pane_g1

0x8f43,	// (0x00052e59) status_small_pane_g2_ParamLimits

0x8f43,	// (0x00052e59) status_small_pane_g2

0x8f4f,	// (0x00052e65) status_small_pane_g3_ParamLimits

0x8f4f,	// (0x00052e65) status_small_pane_g3

0x8f5b,	// (0x00052e71) status_small_pane_g4_ParamLimits

0x8f5b,	// (0x00052e71) status_small_pane_g4

0x8f67,	// (0x00052e7d) status_small_pane_g5_ParamLimits

0x8f67,	// (0x00052e7d) status_small_pane_g5

0x8f76,	// (0x00052e8c) status_small_pane_g6_ParamLimits

0x8f76,	// (0x00052e8c) status_small_pane_g6

0x0007,

0xf794,	// (0x000596aa) status_small_pane_g_ParamLimits

0xf794,	// (0x000596aa) status_small_pane_g

0x8fa6,	// (0x00052ebc) status_small_pane_t1

0x8fc9,	// (0x00052edf) status_small_wait_pane_ParamLimits

0x8fc9,	// (0x00052edf) status_small_wait_pane

0x87a1,	// (0x000526b7) aid_levels_signal_ParamLimits

0x87a1,	// (0x000526b7) aid_levels_signal

0x87b3,	// (0x000526c9) signal_pane_g1_ParamLimits

0x87b3,	// (0x000526c9) signal_pane_g1

0x87c8,	// (0x000526de) signal_pane_g2_ParamLimits

0x87c8,	// (0x000526de) signal_pane_g2

0x0001,

0xf729,	// (0x0005963f) signal_pane_g_ParamLimits

0xf729,	// (0x0005963f) signal_pane_g

0x87dd,	// (0x000526f3) context_pane_g1

0x776d,	// (0x00051683) title_pane_g1

0x77a3,	// (0x000516b9) title_pane_t1

0x780b,	// (0x00051721) title_pane_t2

0x7831,	// (0x00051747) title_pane_t3

0x0002,

0xf573,	// (0x00059489) title_pane_t

0x9a06,	// (0x0005391c) aid_levels_battery_ParamLimits

0x9a06,	// (0x0005391c) aid_levels_battery

0x9a1a,	// (0x00053930) battery_pane_g1_ParamLimits

0x9a1a,	// (0x00053930) battery_pane_g1

0x9a30,	// (0x00053946) battery_pane_g2_ParamLimits

0x9a30,	// (0x00053946) battery_pane_g2

0x0001,

0xf7c8,	// (0x000596de) battery_pane_g_ParamLimits

0xf7c8,	// (0x000596de) battery_pane_g

0xacf6,	// (0x00054c0c) uni_indicator_pane_g1

0xad0b,	// (0x00054c21) uni_indicator_pane_g2

0xad21,	// (0x00054c37) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0005984d) uni_indicator_pane_g

0x8b70,	// (0x00052a86) navi_icon_pane_ParamLimits

0x8b70,	// (0x00052a86) navi_icon_pane

0x8ab9,	// (0x000529cf) navi_midp_pane

0x8b8c,	// (0x00052aa2) navi_navi_pane

0x8b96,	// (0x00052aac) navi_text_pane_ParamLimits

0x8b96,	// (0x00052aac) navi_text_pane

0x7759,	// (0x0005166f) status_small_wait_pane_g1

0x7c60,	// (0x00051b76) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x00059848) status_small_wait_pane_g

0xaa1b,	// (0x00054931) navi_navi_icon_text_pane

0xaa23,	// (0x00054939) navi_navi_pane_g1_ParamLimits

0xaa23,	// (0x00054939) navi_navi_pane_g1

0xaa35,	// (0x0005494b) navi_navi_pane_g2_ParamLimits

0xaa35,	// (0x0005494b) navi_navi_pane_g2

0x0001,

0xf900,	// (0x00059816) navi_navi_pane_g_ParamLimits

0xf900,	// (0x00059816) navi_navi_pane_g

0xaa47,	// (0x0005495d) navi_navi_tabs_pane

0xaa50,	// (0x00054966) navi_navi_text_pane

0xaa1b,	// (0x00054931) navi_navi_volume_pane

0xa9f4,	// (0x0005490a) navi_text_pane_t1

0xa9e5,	// (0x000548fb) navi_icon_pane_g1

0xa947,	// (0x0005485d) navi_navi_text_pane_t1

0x5f8a,	// (0x0004fea0) navi_navi_volume_pane_g1

0x5f92,	// (0x0004fea8) volume_small_pane

0xa8ad,	// (0x000547c3) navi_navi_icon_text_pane_g1

0xa8b5,	// (0x000547cb) navi_navi_icon_text_pane_t1

0x8b8c,	// (0x00052aa2) navi_tabs_2_long_pane

0x8b8c,	// (0x00052aa2) navi_tabs_2_pane

0x8b8c,	// (0x00052aa2) navi_tabs_3_long_pane

0x8b8c,	// (0x00052aa2) navi_tabs_3_pane

0x8b8c,	// (0x00052aa2) navi_tabs_4_pane

0x5f6a,	// (0x0004fe80) tabs_2_active_pane_ParamLimits

0x5f6a,	// (0x0004fe80) tabs_2_active_pane

0x5f7a,	// (0x0004fe90) tabs_2_passive_pane_ParamLimits

0x5f7a,	// (0x0004fe90) tabs_2_passive_pane

0x5f38,	// (0x0004fe4e) tabs_3_active_pane_ParamLimits

0x5f38,	// (0x0004fe4e) tabs_3_active_pane

0x5f48,	// (0x0004fe5e) tabs_3_passive_pane_ParamLimits

0x5f48,	// (0x0004fe5e) tabs_3_passive_pane

0x5f59,	// (0x0004fe6f) tabs_3_passive_pane_cp_ParamLimits

0x5f59,	// (0x0004fe6f) tabs_3_passive_pane_cp

0x5ef4,	// (0x0004fe0a) tabs_4_active_pane_ParamLimits

0x5ef4,	// (0x0004fe0a) tabs_4_active_pane

0x5f05,	// (0x0004fe1b) tabs_4_passive_pane_ParamLimits

0x5f05,	// (0x0004fe1b) tabs_4_passive_pane

0x5f16,	// (0x0004fe2c) tabs_4_passive_pane_cp_ParamLimits

0x5f16,	// (0x0004fe2c) tabs_4_passive_pane_cp

0x5f27,	// (0x0004fe3d) tabs_4_passive_pane_cp2_ParamLimits

0x5f27,	// (0x0004fe3d) tabs_4_passive_pane_cp2

0x5ed0,	// (0x0004fde6) tabs_2_long_active_pane_ParamLimits

0x5ed0,	// (0x0004fde6) tabs_2_long_active_pane

0x5ee2,	// (0x0004fdf8) tabs_2_long_passive_pane_ParamLimits

0x5ee2,	// (0x0004fdf8) tabs_2_long_passive_pane

0x5e91,	// (0x0004fda7) tabs_3_long_active_pane_ParamLimits

0x5e91,	// (0x0004fda7) tabs_3_long_active_pane

0x5ea4,	// (0x0004fdba) tabs_3_long_passive_pane_ParamLimits

0x5ea4,	// (0x0004fdba) tabs_3_long_passive_pane

0x5ebd,	// (0x0004fdd3) tabs_3_long_passive_pane_cp_ParamLimits

0x5ebd,	// (0x0004fdd3) tabs_3_long_passive_pane_cp

0x5e37,	// (0x0004fd4d) volume_small_pane_g1

0x5e40,	// (0x0004fd56) volume_small_pane_g2

0x5e49,	// (0x0004fd5f) volume_small_pane_g3

0x5e52,	// (0x0004fd68) volume_small_pane_g4

0x5e5b,	// (0x0004fd71) volume_small_pane_g5

0x5e64,	// (0x0004fd7a) volume_small_pane_g6

0x5e6d,	// (0x0004fd83) volume_small_pane_g7

0x5e76,	// (0x0004fd8c) volume_small_pane_g8

0x5e7f,	// (0x0004fd95) volume_small_pane_g9

0x5e88,	// (0x0004fd9e) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x000597e2) volume_small_pane_g

0x7843,	// (0x00051759) bg_active_tab_pane_cp2_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp2

0x7851,	// (0x00051767) tabs_3_active_pane_g1

0x7859,	// (0x0005176f) tabs_3_active_pane_t1

0x7843,	// (0x00051759) bg_passive_tab_pane_cp2_ParamLimits

0x7843,	// (0x00051759) bg_passive_tab_pane_cp2

0x7851,	// (0x00051767) tabs_3_passive_pane_g1

0x7859,	// (0x0005176f) tabs_3_passive_pane_t1

0x7843,	// (0x00051759) bg_active_tab_pane_cp3_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp3

0x786b,	// (0x00051781) tabs_4_active_pane_g1

0x7873,	// (0x00051789) tabs_4_active_pane_t1

0x7843,	// (0x00051759) bg_passive_tab_pane_cp3_ParamLimits

0x7843,	// (0x00051759) bg_passive_tab_pane_cp3

0x786b,	// (0x00051781) tabs_4_1_passive_pane_g1

0x7873,	// (0x00051789) tabs_4_1_passive_pane_t1

0x9072,	// (0x00052f88) list_highlight_pane_cp2

0xaf7f,	// (0x00054e95) list_set_pane_ParamLimits

0xaf7f,	// (0x00054e95) list_set_pane

0xb025,	// (0x00054f3b) main_pane_set_t1_ParamLimits

0xb025,	// (0x00054f3b) main_pane_set_t1

0xb045,	// (0x00054f5b) main_pane_set_t2_ParamLimits

0xb045,	// (0x00054f5b) main_pane_set_t2

0xb059,	// (0x00054f6f) main_pane_set_t3_ParamLimits

0xb059,	// (0x00054f6f) main_pane_set_t3

0xb06b,	// (0x00054f81) main_pane_set_t4_ParamLimits

0xb06b,	// (0x00054f81) main_pane_set_t4

0x0003,

0xf99c,	// (0x000598b2) main_pane_set_t_ParamLimits

0xf99c,	// (0x000598b2) main_pane_set_t

0xb07d,	// (0x00054f93) setting_code_pane

0xb089,	// (0x00054f9f) setting_slider_graphic_pane

0xb089,	// (0x00054f9f) setting_slider_pane

0xb089,	// (0x00054f9f) setting_text_pane

0xb089,	// (0x00054f9f) setting_volume_pane

0x4f60,	// (0x0004ee76) volume_set_pane

0x7843,	// (0x00051759) bg_set_opt_pane_cp

0x4f68,	// (0x0004ee7e) setting_slider_pane_t1

0x4f81,	// (0x0004ee97) setting_slider_pane_t2

0x4f9b,	// (0x0004eeb1) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00059490) setting_slider_pane_t

0x4fb3,	// (0x0004eec9) slider_set_pane

0x7763,	// (0x00051679) bg_set_opt_pane_cp2

0x7885,	// (0x0005179b) setting_slider_graphic_pane_g1

0x4fc9,	// (0x0004eedf) setting_slider_graphic_pane_t1

0x4fd9,	// (0x0004eeef) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00059497) setting_slider_graphic_pane_t

0x4fe9,	// (0x0004eeff) slider_set_pane_cp

0x7763,	// (0x00051679) input_focus_pane_cp1

0xaf3e,	// (0x00054e54) list_set_text_pane

0x7759,	// (0x0005166f) setting_text_pane_g1

0x7763,	// (0x00051679) input_focus_pane_cp2

0x7759,	// (0x0005166f) setting_code_pane_g1

0x788e,	// (0x000517a4) setting_code_pane_t1

0x4ff1,	// (0x0004ef07) set_text_pane_t1_ParamLimits

0x4ff1,	// (0x0004ef07) set_text_pane_t1

0x8116,	// (0x0005202c) set_opt_bg_pane_g1

0x811e,	// (0x00052034) set_opt_bg_pane_g2

0xaf18,	// (0x00054e2e) set_opt_bg_pane_g3

0x812e,	// (0x00052044) set_opt_bg_pane_g4

0x8136,	// (0x0005204c) set_opt_bg_pane_g5

0x813e,	// (0x00052054) set_opt_bg_pane_g6

0xaf22,	// (0x00054e38) set_opt_bg_pane_g7

0xaf2a,	// (0x00054e40) set_opt_bg_pane_g8

0xaf34,	// (0x00054e4a) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0005989f) set_opt_bg_pane_g

0xaf0b,	// (0x00054e21) slider_set_pane_g1

0x5fff,	// (0x0004ff15) slider_set_pane_g2

0x0006,

0xf97a,	// (0x00059890) slider_set_pane_g

0x5f9b,	// (0x0004feb1) volume_set_pane_g1

0x5fa3,	// (0x0004feb9) volume_set_pane_g2

0x5fab,	// (0x0004fec1) volume_set_pane_g3

0x5fb3,	// (0x0004fec9) volume_set_pane_g4

0x5fbb,	// (0x0004fed1) volume_set_pane_g5

0x5fc3,	// (0x0004fed9) volume_set_pane_g6

0x5fcb,	// (0x0004fee1) volume_set_pane_g7

0x5fd3,	// (0x0004fee9) volume_set_pane_g8

0x5fdb,	// (0x0004fef1) volume_set_pane_g9

0x5fe3,	// (0x0004fef9) volume_set_pane_g10

0x0009,

0xf952,	// (0x00059868) volume_set_pane_g

0x789c,	// (0x000517b2) indicator_pane_ParamLimits

0x789c,	// (0x000517b2) indicator_pane

0x78a8,	// (0x000517be) main_idle_pane_g2_ParamLimits

0x78a8,	// (0x000517be) main_idle_pane_g2

0x78d0,	// (0x000517e6) main_pane_idle_g1_ParamLimits

0x78d0,	// (0x000517e6) main_pane_idle_g1

0x78dd,	// (0x000517f3) popup_clock_digital_analogue_window_ParamLimits

0x78dd,	// (0x000517f3) popup_clock_digital_analogue_window

0x78f4,	// (0x0005180a) soft_indicator_pane_ParamLimits

0x78f4,	// (0x0005180a) soft_indicator_pane

0x7900,	// (0x00051816) wallpaper_pane_ParamLimits

0x7900,	// (0x00051816) wallpaper_pane

0x7759,	// (0x0005166f) wallpaper_pane_g1

0x7914,	// (0x0005182a) indicator_pane_g1_ParamLimits

0x7914,	// (0x0005182a) indicator_pane_g1

0xb2f2,	// (0x00055208) navi_navi_icon_text_pane_srt_g1

0x792f,	// (0x00051845) soft_indicator_pane_t1

0x7949,	// (0x0005185f) aid_ps_area_pane

0x795a,	// (0x00051870) aid_ps_clock_pane

0x7968,	// (0x0005187e) aid_ps_indicator_pane

0x7974,	// (0x0005188a) indicator_ps_pane_ParamLimits

0x7974,	// (0x0005188a) indicator_ps_pane

0x7983,	// (0x00051899) power_save_pane_g1_ParamLimits

0x7983,	// (0x00051899) power_save_pane_g1

0x798f,	// (0x000518a5) power_save_pane_g2_ParamLimits

0x798f,	// (0x000518a5) power_save_pane_g2

0x4b71,	// (0x0004ea87) aid_navinavi_width_pane

0x7949,	// (0x0005185f) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0005949c) power_save_pane_g_ParamLimits

0xf586,	// (0x0005949c) power_save_pane_g

0x799d,	// (0x000518b3) power_save_pane_t1_ParamLimits

0x799d,	// (0x000518b3) power_save_pane_t1

0x795a,	// (0x00051870) aid_ps_clock_pane_ParamLimits

0x7968,	// (0x0005187e) aid_ps_indicator_pane_ParamLimits

0x79af,	// (0x000518c5) power_save_pane_t4_ParamLimits

0x79af,	// (0x000518c5) power_save_pane_t4

0x0001,

0xf58b,	// (0x000594a1) power_save_pane_t_ParamLimits

0xf58b,	// (0x000594a1) power_save_pane_t

0x79d9,	// (0x000518ef) power_save_t3_ParamLimits

0x79d9,	// (0x000518ef) power_save_t3

0x79c4,	// (0x000518da) power_save_t2_ParamLimits

0x79c4,	// (0x000518da) power_save_t2

0x79ee,	// (0x00051904) indicator_ps_pane_g1

0x79f7,	// (0x0005190d) ai_gene_pane_ParamLimits

0x79f7,	// (0x0005190d) ai_gene_pane

0x7a03,	// (0x00051919) ai_links_pane_ParamLimits

0x7a03,	// (0x00051919) ai_links_pane

0x7a0f,	// (0x00051925) indicator_pane_cp1_ParamLimits

0x7a0f,	// (0x00051925) indicator_pane_cp1

0x7a1b,	// (0x00051931) main_pane_idle_g1_cp_ParamLimits

0x7a1b,	// (0x00051931) main_pane_idle_g1_cp

0x7a27,	// (0x0005193d) popup_ai_links_title_window

0x7a30,	// (0x00051946) soft_indicator_pane_cp1_ParamLimits

0x7a30,	// (0x00051946) soft_indicator_pane_cp1

0xace4,	// (0x00054bfa) ai_links_pane_g1

0xaced,	// (0x00054c03) grid_ai_links_pane

0xacc7,	// (0x00054bdd) ai_gene_pane_1

0xacd2,	// (0x00054be8) ai_gene_pane_2

0xacdb,	// (0x00054bf1) list_highlight_pane_cp4

0xacab,	// (0x00054bc1) cell_ai_link_pane_ParamLimits

0xacab,	// (0x00054bc1) cell_ai_link_pane

0xaca3,	// (0x00054bb9) cell_ai_link_pane_g1

0x7c60,	// (0x00051b76) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x00059843) cell_ai_link_pane_g

0x7763,	// (0x00051679) grid_highlight_cp2

0x7763,	// (0x00051679) bg_popup_sub_pane_cp1

0x7a4a,	// (0x00051960) popup_ai_links_title_window_t1

0xabf1,	// (0x00054b07) ai_gene_pane_1_g1_ParamLimits

0xabf1,	// (0x00054b07) ai_gene_pane_1_g1

0xabfd,	// (0x00054b13) ai_gene_pane_1_g2_ParamLimits

0xabfd,	// (0x00054b13) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x00059839) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x00059839) ai_gene_pane_1_g

0xac0a,	// (0x00054b20) ai_gene_pane_1_t1_ParamLimits

0xac0a,	// (0x00054b20) ai_gene_pane_1_t1

0xac3e,	// (0x00054b54) grid_ai_soft_ind_pane

0xabdc,	// (0x00054af2) ai_gene_pane_2_t1_ParamLimits

0xabdc,	// (0x00054af2) ai_gene_pane_2_t1

0x7a59,	// (0x0005196f) main_pane_empty_t1_ParamLimits

0x7a59,	// (0x0005196f) main_pane_empty_t1

0x7a71,	// (0x00051987) main_pane_empty_t2_ParamLimits

0x7a71,	// (0x00051987) main_pane_empty_t2

0x7a86,	// (0x0005199c) main_pane_empty_t3_ParamLimits

0x7a86,	// (0x0005199c) main_pane_empty_t3

0x7a98,	// (0x000519ae) main_pane_empty_t4_ParamLimits

0x7a98,	// (0x000519ae) main_pane_empty_t4

0x7aaa,	// (0x000519c0) main_pane_empty_t5_ParamLimits

0x7aaa,	// (0x000519c0) main_pane_empty_t5

0x0004,

0xf590,	// (0x000594a6) main_pane_empty_t_ParamLimits

0xf590,	// (0x000594a6) main_pane_empty_t

0x8167,	// (0x0005207d) bg_popup_window_pane_ParamLimits

0x8167,	// (0x0005207d) bg_popup_window_pane

0xa955,	// (0x0005486b) find_popup_pane_cp2_ParamLimits

0xa955,	// (0x0005486b) find_popup_pane_cp2

0xa961,	// (0x00054877) heading_pane_ParamLimits

0xa961,	// (0x00054877) heading_pane

0x7763,	// (0x00051679) bg_popup_sub_pane

0xa8cf,	// (0x000547e5) bg_popup_window_pane_g1_ParamLimits

0xa8cf,	// (0x000547e5) bg_popup_window_pane_g1

0xa8db,	// (0x000547f1) bg_popup_window_pane_g2_ParamLimits

0xa8db,	// (0x000547f1) bg_popup_window_pane_g2

0xa8e7,	// (0x000547fd) bg_popup_window_pane_g3_ParamLimits

0xa8e7,	// (0x000547fd) bg_popup_window_pane_g3

0xa8f3,	// (0x00054809) bg_popup_window_pane_g4_ParamLimits

0xa8f3,	// (0x00054809) bg_popup_window_pane_g4

0xa8ff,	// (0x00054815) bg_popup_window_pane_g5_ParamLimits

0xa8ff,	// (0x00054815) bg_popup_window_pane_g5

0xa90b,	// (0x00054821) bg_popup_window_pane_g6_ParamLimits

0xa90b,	// (0x00054821) bg_popup_window_pane_g6

0xa917,	// (0x0005482d) bg_popup_window_pane_g7_ParamLimits

0xa917,	// (0x0005482d) bg_popup_window_pane_g7

0xa923,	// (0x00054839) bg_popup_window_pane_g8_ParamLimits

0xa923,	// (0x00054839) bg_popup_window_pane_g8

0xa92f,	// (0x00054845) bg_popup_window_pane_g9_ParamLimits

0xa92f,	// (0x00054845) bg_popup_window_pane_g9

0xa93b,	// (0x00054851) bg_popup_window_pane_g10_ParamLimits

0xa93b,	// (0x00054851) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x00059801) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x00059801) bg_popup_window_pane_g

0xa864,	// (0x0005477a) bg_popup_heading_pane_ParamLimits

0xa864,	// (0x0005477a) bg_popup_heading_pane

0x6087,	// (0x0004ff9d) tabs_4_passive_pane_cp_srt_ParamLimits

0x6087,	// (0x0004ff9d) tabs_4_passive_pane_cp_srt

0x6099,	// (0x0004ffaf) tabs_4_passive_pane_srt_ParamLimits

0xa878,	// (0x0005478e) heading_pane_g2

0x6099,	// (0x0004ffaf) tabs_4_passive_pane_srt

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp3_srt

0xa880,	// (0x00054796) heading_pane_t1_ParamLimits

0xa880,	// (0x00054796) heading_pane_t1

0xa897,	// (0x000547ad) heading_pane_t2_ParamLimits

0xa897,	// (0x000547ad) heading_pane_t2

0x0001,

0xf8e6,	// (0x000597fc) heading_pane_t_ParamLimits

0xf8e6,	// (0x000597fc) heading_pane_t

0xa382,	// (0x00054298) bg_popup_heading_pane_g1

0xa431,	// (0x00054347) bg_popup_heading_pane_g2

0xa43b,	// (0x00054351) bg_popup_heading_pane_g3

0xa445,	// (0x0005435b) bg_popup_heading_pane_g4

0xa44f,	// (0x00054365) bg_popup_heading_pane_g5

0xa459,	// (0x0005436f) bg_popup_heading_pane_g6

0xa461,	// (0x00054377) bg_popup_heading_pane_g7

0xa469,	// (0x0005437f) bg_popup_heading_pane_g8

0xa473,	// (0x00054389) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x000597b8) bg_popup_heading_pane_g

0x9b08,	// (0x00053a1e) bg_popup_sub_pane_g1

0x9b18,	// (0x00053a2e) bg_popup_sub_pane_g2

0x9b10,	// (0x00053a26) bg_popup_sub_pane_g3

0x9b28,	// (0x00053a3e) bg_popup_sub_pane_g4

0x9b20,	// (0x00053a36) bg_popup_sub_pane_g5

0x9b30,	// (0x00053a46) bg_popup_sub_pane_g6

0x9b38,	// (0x00053a4e) bg_popup_sub_pane_g7

0x9b48,	// (0x00053a5e) bg_popup_sub_pane_g8

0x9b40,	// (0x00053a56) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x00059792) bg_popup_sub_pane_g

0x7abe,	// (0x000519d4) bg_popup_window_pane_cp5_ParamLimits

0x7abe,	// (0x000519d4) bg_popup_window_pane_cp5

0x7ada,	// (0x000519f0) popup_note_window_g1_ParamLimits

0x7ada,	// (0x000519f0) popup_note_window_g1

0x7ae6,	// (0x000519fc) popup_note_window_t1_ParamLimits

0x7ae6,	// (0x000519fc) popup_note_window_t1

0x7afc,	// (0x00051a12) popup_note_window_t2_ParamLimits

0x7afc,	// (0x00051a12) popup_note_window_t2

0x7b12,	// (0x00051a28) popup_note_window_t3_ParamLimits

0x7b12,	// (0x00051a28) popup_note_window_t3

0x7b28,	// (0x00051a3e) popup_note_window_t4_ParamLimits

0x7b28,	// (0x00051a3e) popup_note_window_t4

0x7b50,	// (0x00051a66) popup_note_window_t5_ParamLimits

0x7b50,	// (0x00051a66) popup_note_window_t5

0x0004,

0xf59b,	// (0x000594b1) popup_note_window_t_ParamLimits

0xf59b,	// (0x000594b1) popup_note_window_t

0x7b74,	// (0x00051a8a) bg_popup_window_pane_cp6_ParamLimits

0x7b74,	// (0x00051a8a) bg_popup_window_pane_cp6

0xa2fe,	// (0x00054214) popup_note_image_window_g1_ParamLimits

0xa2fe,	// (0x00054214) popup_note_image_window_g1

0xa30a,	// (0x00054220) popup_note_image_window_g2_ParamLimits

0xa30a,	// (0x00054220) popup_note_image_window_g2

0x0001,

0xf870,	// (0x00059786) popup_note_image_window_g_ParamLimits

0xf870,	// (0x00059786) popup_note_image_window_g

0xa323,	// (0x00054239) popup_note_image_window_t1_ParamLimits

0xa323,	// (0x00054239) popup_note_image_window_t1

0xa33c,	// (0x00054252) popup_note_image_window_t2_ParamLimits

0xa33c,	// (0x00054252) popup_note_image_window_t2

0xa355,	// (0x0005426b) popup_note_image_window_t3_ParamLimits

0xa355,	// (0x0005426b) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0005978b) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0005978b) popup_note_image_window_t

0xa1bf,	// (0x000540d5) bg_popup_window_pane_cp7_ParamLimits

0xa1bf,	// (0x000540d5) bg_popup_window_pane_cp7

0xa1ef,	// (0x00054105) popup_note_wait_window_g1_ParamLimits

0xa1ef,	// (0x00054105) popup_note_wait_window_g1

0xa1fb,	// (0x00054111) popup_note_wait_window_g2_ParamLimits

0xa1fb,	// (0x00054111) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x00059774) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x00059774) popup_note_wait_window_g

0xa213,	// (0x00054129) popup_note_wait_window_t1_ParamLimits

0xa213,	// (0x00054129) popup_note_wait_window_t1

0xa23a,	// (0x00054150) popup_note_wait_window_t2_ParamLimits

0xa23a,	// (0x00054150) popup_note_wait_window_t2

0xa257,	// (0x0005416d) popup_note_wait_window_t3_ParamLimits

0xa257,	// (0x0005416d) popup_note_wait_window_t3

0xa26a,	// (0x00054180) popup_note_wait_window_t4_ParamLimits

0xa26a,	// (0x00054180) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0005977b) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0005977b) popup_note_wait_window_t

0xa28f,	// (0x000541a5) wait_bar_pane_ParamLimits

0xa28f,	// (0x000541a5) wait_bar_pane

0x7763,	// (0x00051679) wait_anim_pane

0x7763,	// (0x00051679) wait_border_pane

0x7759,	// (0x0005166f) wait_anim_pane_g1

0x7759,	// (0x0005166f) wait_anim_pane_g2

0x0001,

0xf724,	// (0x0005963a) wait_anim_pane_g

0xa163,	// (0x00054079) wait_border_pane_g1

0xa16e,	// (0x00054084) wait_border_pane_g2

0xa177,	// (0x0005408d) wait_border_pane_g3

0x0002,

0xf857,	// (0x0005976d) wait_border_pane_g

0x9fce,	// (0x00053ee4) bg_popup_window_pane_cp16_ParamLimits

0x9fce,	// (0x00053ee4) bg_popup_window_pane_cp16

0xa0ce,	// (0x00053fe4) indicator_popup_pane_cp4_ParamLimits

0xa0ce,	// (0x00053fe4) indicator_popup_pane_cp4

0xa0e2,	// (0x00053ff8) popup_query_data_window_t1_ParamLimits

0xa0e2,	// (0x00053ff8) popup_query_data_window_t1

0xa0f4,	// (0x0005400a) popup_query_data_window_t2_ParamLimits

0xa0f4,	// (0x0005400a) popup_query_data_window_t2

0xa10d,	// (0x00054023) popup_query_data_window_t3_ParamLimits

0xa10d,	// (0x00054023) popup_query_data_window_t3

0x0002,

0xf850,	// (0x00059766) popup_query_data_window_t_ParamLimits

0xf850,	// (0x00059766) popup_query_data_window_t

0xa127,	// (0x0005403d) query_popup_data_pane_ParamLimits

0xa127,	// (0x0005403d) query_popup_data_pane

0xa13b,	// (0x00054051) query_popup_data_pane_cp1_ParamLimits

0xa13b,	// (0x00054051) query_popup_data_pane_cp1

0x9fce,	// (0x00053ee4) bg_popup_window_pane_cp10_ParamLimits

0x9fce,	// (0x00053ee4) bg_popup_window_pane_cp10

0xa000,	// (0x00053f16) indicator_popup_pane_ParamLimits

0xa000,	// (0x00053f16) indicator_popup_pane

0xa022,	// (0x00053f38) popup_query_code_window_t1_ParamLimits

0xa022,	// (0x00053f38) popup_query_code_window_t1

0xa03c,	// (0x00053f52) popup_query_code_window_t2_ParamLimits

0xa03c,	// (0x00053f52) popup_query_code_window_t2

0xa085,	// (0x00053f9b) popup_query_code_window_t3_ParamLimits

0xa085,	// (0x00053f9b) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0005975f) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0005975f) popup_query_code_window_t

0xa0b4,	// (0x00053fca) query_popup_pane_ParamLimits

0xa0b4,	// (0x00053fca) query_popup_pane

0x7b74,	// (0x00051a8a) bg_popup_window_pane_cp15_ParamLimits

0x7b74,	// (0x00051a8a) bg_popup_window_pane_cp15

0x7b92,	// (0x00051aa8) indicator_popup_pane_cp1_ParamLimits

0x7b92,	// (0x00051aa8) indicator_popup_pane_cp1

0x7ba5,	// (0x00051abb) indicator_popup_pane_cp2_ParamLimits

0x7ba5,	// (0x00051abb) indicator_popup_pane_cp2

0x7bb8,	// (0x00051ace) popup_query_data_code_window_g1_ParamLimits

0x7bb8,	// (0x00051ace) popup_query_data_code_window_g1

0x7bcb,	// (0x00051ae1) popup_query_data_code_window_t1_ParamLimits

0x7bcb,	// (0x00051ae1) popup_query_data_code_window_t1

0x7bdd,	// (0x00051af3) popup_query_data_code_window_t2_ParamLimits

0x7bdd,	// (0x00051af3) popup_query_data_code_window_t2

0x7bef,	// (0x00051b05) popup_query_data_code_window_t3_ParamLimits

0x7bef,	// (0x00051b05) popup_query_data_code_window_t3

0x7c05,	// (0x00051b1b) popup_query_data_code_window_t4_ParamLimits

0x7c05,	// (0x00051b1b) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x000594bc) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x000594bc) popup_query_data_code_window_t

0x5d48,	// (0x0004fc5e) list_single_midp_graphic_pane_g3

0x7c1d,	// (0x00051b33) query_popup_data_pane_cp2_ParamLimits

0x7c30,	// (0x00051b46) query_popup_pane_cp2_ParamLimits

0x7c30,	// (0x00051b46) query_popup_pane_cp2

0x7763,	// (0x00051679) bg_popup_window_pane_cp11

0x9fc6,	// (0x00053edc) heading_pane_cp5

0x7d18,	// (0x00051c2e) listscroll_popup_info_pane

0x7763,	// (0x00051679) input_focus_pane_cp3

0x7c43,	// (0x00051b59) query_popup_pane_t1

0x7c51,	// (0x00051b67) list_popup_info_pane_ParamLimits

0x7c51,	// (0x00051b67) list_popup_info_pane

0x7c60,	// (0x00051b76) listscroll_popup_info_pane_g1

0x7c68,	// (0x00051b7e) scroll_pane_cp7

0x7c72,	// (0x00051b88) popup_info_list_pane_t1_ParamLimits

0x7c72,	// (0x00051b88) popup_info_list_pane_t1

0x7c8c,	// (0x00051ba2) popup_info_list_pane_t2_ParamLimits

0x7c8c,	// (0x00051ba2) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x000594c5) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x000594c5) popup_info_list_pane_t

0x7763,	// (0x00051679) bg_popup_window_pane_cp12

0xb30c,	// (0x00055222) find_popup_pane

0x7843,	// (0x00051759) bg_popup_window_pane_cp3

0x7ca6,	// (0x00051bbc) heading_pane_cp3

0x7cb2,	// (0x00051bc8) listscroll_popup_graphic_pane

0x7763,	// (0x00051679) bg_popup_window_pane_cp4

0x7d0e,	// (0x00051c24) heading_pane_cp4

0x7d18,	// (0x00051c2e) listscroll_popup_colour_pane

0x7d20,	// (0x00051c36) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7d20,	// (0x00051c36) cell_large_graphic_colour_none_popup_pane

0x7d34,	// (0x00051c4a) grid_large_graphic_colour_popup_pane_ParamLimits

0x7d34,	// (0x00051c4a) grid_large_graphic_colour_popup_pane

0x7d60,	// (0x00051c76) listscroll_popup_colour_pane_g1_ParamLimits

0x7d60,	// (0x00051c76) listscroll_popup_colour_pane_g1

0x7d77,	// (0x00051c8d) listscroll_popup_colour_pane_g2_ParamLimits

0x7d77,	// (0x00051c8d) listscroll_popup_colour_pane_g2

0x7d8e,	// (0x00051ca4) listscroll_popup_colour_pane_g3_ParamLimits

0x7d8e,	// (0x00051ca4) listscroll_popup_colour_pane_g3

0x7d9e,	// (0x00051cb4) listscroll_popup_colour_pane_g4_ParamLimits

0x7d9e,	// (0x00051cb4) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x000594ca) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x000594ca) listscroll_popup_colour_pane_g

0x7db2,	// (0x00051cc8) scroll_pane_cp6_ParamLimits

0x7db2,	// (0x00051cc8) scroll_pane_cp6

0x7dc4,	// (0x00051cda) cell_large_graphic_colour_popup_pane_ParamLimits

0x7dc4,	// (0x00051cda) cell_large_graphic_colour_popup_pane

0x7de3,	// (0x00051cf9) cell_large_graphic_colour_none_popup_pane_t1

0x7763,	// (0x00051679) grid_highlight_pane_cp5

0x7df2,	// (0x00051d08) cell_large_graphic_colour_popup_pane_g1

0x7dfa,	// (0x00051d10) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000594d3) cell_large_graphic_colour_popup_pane_g

0x7e02,	// (0x00051d18) cell_large_graphic_colour_popup_pane_g2_copy1

0x7e0b,	// (0x00051d21) grid_highlight_pane_cp4

0x7e13,	// (0x00051d29) bg_popup_window_pane_cp8_ParamLimits

0x7e13,	// (0x00051d29) bg_popup_window_pane_cp8

0x7e2e,	// (0x00051d44) popup_snote_single_text_window_g1_ParamLimits

0x7e2e,	// (0x00051d44) popup_snote_single_text_window_g1

0x7e40,	// (0x00051d56) popup_snote_single_text_window_t1_ParamLimits

0x7e40,	// (0x00051d56) popup_snote_single_text_window_t1

0x7e53,	// (0x00051d69) popup_snote_single_text_window_t2_ParamLimits

0x7e53,	// (0x00051d69) popup_snote_single_text_window_t2

0x7e66,	// (0x00051d7c) popup_snote_single_text_window_t3_ParamLimits

0x7e66,	// (0x00051d7c) popup_snote_single_text_window_t3

0x7e9f,	// (0x00051db5) popup_snote_single_text_window_t4_ParamLimits

0x7e9f,	// (0x00051db5) popup_snote_single_text_window_t4

0x7ed3,	// (0x00051de9) popup_snote_single_text_window_t5_ParamLimits

0x7ed3,	// (0x00051de9) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000594d8) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000594d8) popup_snote_single_text_window_t

0x7f02,	// (0x00051e18) bg_popup_window_pane_cp9_ParamLimits

0x7f02,	// (0x00051e18) bg_popup_window_pane_cp9

0x7e2e,	// (0x00051d44) popup_snote_single_graphic_window_g1_ParamLimits

0x7e2e,	// (0x00051d44) popup_snote_single_graphic_window_g1

0x7f10,	// (0x00051e26) popup_snote_single_graphic_window_g2_ParamLimits

0x7f10,	// (0x00051e26) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000594e3) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000594e3) popup_snote_single_graphic_window_g

0x7f1c,	// (0x00051e32) popup_snote_single_graphic_window_t1_ParamLimits

0x7f1c,	// (0x00051e32) popup_snote_single_graphic_window_t1

0x7f2f,	// (0x00051e45) popup_snote_single_graphic_window_t2_ParamLimits

0x7f2f,	// (0x00051e45) popup_snote_single_graphic_window_t2

0x7f42,	// (0x00051e58) popup_snote_single_graphic_window_t3_ParamLimits

0x7f42,	// (0x00051e58) popup_snote_single_graphic_window_t3

0x7f7b,	// (0x00051e91) popup_snote_single_graphic_window_t4_ParamLimits

0x7f7b,	// (0x00051e91) popup_snote_single_graphic_window_t4

0x7faf,	// (0x00051ec5) popup_snote_single_graphic_window_t5_ParamLimits

0x7faf,	// (0x00051ec5) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000594e8) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000594e8) popup_snote_single_graphic_window_t

0xb250,	// (0x00055166) grid_graphic_popup_pane_ParamLimits

0xb250,	// (0x00055166) grid_graphic_popup_pane

0xb278,	// (0x0005518e) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x0005518e) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x000551a2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x000551a2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x000598dc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x000598dc) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x000551b6) scroll_pane_cp5

0xb1f9,	// (0x0005510f) cell_graphic_popup_pane_ParamLimits

0xb1f9,	// (0x0005510f) cell_graphic_popup_pane

0xb1da,	// (0x000550f0) cell_graphic_popup_pane_g1

0xb1e2,	// (0x000550f8) cell_graphic_popup_pane_g2

0x7e02,	// (0x00051d18) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x000598d5) cell_graphic_popup_pane_g

0xb1eb,	// (0x00055101) cell_graphic_popup_pane_t2

0x7e0b,	// (0x00051d21) grid_highlight_pane_cp3

0x7ff0,	// (0x00051f06) list_gen_pane_ParamLimits

0x7ff0,	// (0x00051f06) list_gen_pane

0x8022,	// (0x00051f38) scroll_pane

0xb13c,	// (0x00055052) bg_list_pane_g1_ParamLimits

0xb13c,	// (0x00055052) bg_list_pane_g1

0xb157,	// (0x0005506d) bg_list_pane_g2_ParamLimits

0xb157,	// (0x0005506d) bg_list_pane_g2

0xb16a,	// (0x00055080) bg_list_pane_g3_ParamLimits

0xb16a,	// (0x00055080) bg_list_pane_g3

0xb17c,	// (0x00055092) bg_list_pane_g4_ParamLimits

0xb17c,	// (0x00055092) bg_list_pane_g4

0xb18e,	// (0x000550a4) bg_list_pane_g5_ParamLimits

0xb18e,	// (0x000550a4) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x000598ca) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x000598ca) bg_list_pane_g

0x707f,	// (0x00050f95) list_double2_graphic_large_graphic_pane_ParamLimits

0x707f,	// (0x00050f95) list_double2_graphic_large_graphic_pane

0x707f,	// (0x00050f95) list_double2_graphic_pane_ParamLimits

0x707f,	// (0x00050f95) list_double2_graphic_pane

0x707f,	// (0x00050f95) list_double2_large_graphic_pane_ParamLimits

0x707f,	// (0x00050f95) list_double2_large_graphic_pane

0xb121,	// (0x00055037) list_double2_pane_ParamLimits

0xb121,	// (0x00055037) list_double2_pane

0x707f,	// (0x00050f95) list_double_graphic_heading_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_graphic_heading_pane

0x707f,	// (0x00050f95) list_double_graphic_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_graphic_pane

0x707f,	// (0x00050f95) list_double_heading_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_heading_pane

0x707f,	// (0x00050f95) list_double_large_graphic_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_large_graphic_pane

0x707f,	// (0x00050f95) list_double_number_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_number_pane

0x707f,	// (0x00050f95) list_double_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_pane

0x707f,	// (0x00050f95) list_double_time_pane_ParamLimits

0x707f,	// (0x00050f95) list_double_time_pane

0x707f,	// (0x00050f95) list_setting_number_pane_ParamLimits

0x707f,	// (0x00050f95) list_setting_number_pane

0x707f,	// (0x00050f95) list_setting_pane_ParamLimits

0x707f,	// (0x00050f95) list_setting_pane

0x70c6,	// (0x00050fdc) list_single_2graphic_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_2graphic_pane

0x70c6,	// (0x00050fdc) list_single_graphic_heading_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_graphic_heading_pane

0x70c6,	// (0x00050fdc) list_single_graphic_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_graphic_pane

0x70c6,	// (0x00050fdc) list_single_heading_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_heading_pane

0x7137,	// (0x0005104d) list_single_large_graphic_pane_ParamLimits

0x7137,	// (0x0005104d) list_single_large_graphic_pane

0x70c6,	// (0x00050fdc) list_single_number_heading_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_number_heading_pane

0x70c6,	// (0x00050fdc) list_single_number_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_number_pane

0x70c6,	// (0x00050fdc) list_single_pane_ParamLimits

0x70c6,	// (0x00050fdc) list_single_pane

0x7763,	// (0x00051679) list_highlight_pane_cp1

0x6e45,	// (0x00050d5b) list_single_pane_g1_ParamLimits

0x6e45,	// (0x00050d5b) list_single_pane_g1

0x6e51,	// (0x00050d67) list_single_pane_g2_ParamLimits

0x6e51,	// (0x00050d67) list_single_pane_g2

0x0001,

0xf5ee,	// (0x00059504) list_single_pane_g_ParamLimits

0xf5ee,	// (0x00059504) list_single_pane_g

0x7069,	// (0x00050f7f) list_single_pane_t1_ParamLimits

0x7069,	// (0x00050f7f) list_single_pane_t1

0x6e45,	// (0x00050d5b) list_single_number_pane_g1_ParamLimits

0x6e45,	// (0x00050d5b) list_single_number_pane_g1

0x6e51,	// (0x00050d67) list_single_number_pane_g2_ParamLimits

0x6e51,	// (0x00050d67) list_single_number_pane_g2

0x0001,

0xf5ee,	// (0x00059504) list_single_number_pane_g_ParamLimits

0xf5ee,	// (0x00059504) list_single_number_pane_g

0x7011,	// (0x00050f27) list_single_number_pane_t1_ParamLimits

0x7011,	// (0x00050f27) list_single_number_pane_t1

0x7027,	// (0x00050f3d) list_single_number_pane_t2_ParamLimits

0x7027,	// (0x00050f3d) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0005988b) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0005988b) list_single_number_pane_t

0x500a,	// (0x0004ef20) list_single_graphic_pane_g1_ParamLimits

0x500a,	// (0x0004ef20) list_single_graphic_pane_g1

0x6e45,	// (0x00050d5b) list_single_graphic_pane_g2_ParamLimits

0x6e45,	// (0x00050d5b) list_single_graphic_pane_g2

0x6e51,	// (0x00050d67) list_single_graphic_pane_g3_ParamLimits

0x6e51,	// (0x00050d67) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000594f3) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000594f3) list_single_graphic_pane_g

0x5016,	// (0x0004ef2c) list_single_graphic_pane_t1_ParamLimits

0x5016,	// (0x0004ef2c) list_single_graphic_pane_t1

0x502c,	// (0x0004ef42) list_single_heading_pane_g1_ParamLimits

0x502c,	// (0x0004ef42) list_single_heading_pane_g1

0x6e51,	// (0x00050d67) list_single_heading_pane_g2_ParamLimits

0x6e51,	// (0x00050d67) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000594fa) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000594fa) list_single_heading_pane_g

0x503f,	// (0x0004ef55) list_single_heading_pane_t1_ParamLimits

0x503f,	// (0x0004ef55) list_single_heading_pane_t1

0x6e5d,	// (0x00050d73) list_single_heading_pane_t2_ParamLimits

0x6e5d,	// (0x00050d73) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000594ff) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000594ff) list_single_heading_pane_t

0x6e45,	// (0x00050d5b) list_single_number_heading_pane_g1_ParamLimits

0x6e45,	// (0x00050d5b) list_single_number_heading_pane_g1

0x6e51,	// (0x00050d67) list_single_number_heading_pane_g2_ParamLimits

0x6e51,	// (0x00050d67) list_single_number_heading_pane_g2

0x0001,

0xf5ee,	// (0x00059504) list_single_number_heading_pane_g_ParamLimits

0xf5ee,	// (0x00059504) list_single_number_heading_pane_g

0x5055,	// (0x0004ef6b) list_single_number_heading_pane_t1_ParamLimits

0x5055,	// (0x0004ef6b) list_single_number_heading_pane_t1

0x506b,	// (0x0004ef81) list_single_number_heading_pane_t2_ParamLimits

0x506b,	// (0x0004ef81) list_single_number_heading_pane_t2

0x507d,	// (0x0004ef93) list_single_number_heading_pane_t3_ParamLimits

0x507d,	// (0x0004ef93) list_single_number_heading_pane_t3

0x0002,

0xf5f3,	// (0x00059509) list_single_number_heading_pane_t_ParamLimits

0xf5f3,	// (0x00059509) list_single_number_heading_pane_t

0x508f,	// (0x0004efa5) list_single_graphic_heading_pane_g1_ParamLimits

0x508f,	// (0x0004efa5) list_single_graphic_heading_pane_g1

0x6e6f,	// (0x00050d85) list_single_graphic_heading_pane_g4_ParamLimits

0x6e6f,	// (0x00050d85) list_single_graphic_heading_pane_g4

0x6e51,	// (0x00050d67) list_single_graphic_heading_pane_g5_ParamLimits

0x6e51,	// (0x00050d67) list_single_graphic_heading_pane_g5

0x0002,

0xf5fa,	// (0x00059510) list_single_graphic_heading_pane_g_ParamLimits

0xf5fa,	// (0x00059510) list_single_graphic_heading_pane_g

0x5055,	// (0x0004ef6b) list_single_graphic_heading_pane_t1_ParamLimits

0x5055,	// (0x0004ef6b) list_single_graphic_heading_pane_t1

0x50a7,	// (0x0004efbd) list_single_graphic_heading_pane_t2_ParamLimits

0x50a7,	// (0x0004efbd) list_single_graphic_heading_pane_t2

0x0001,

0xf601,	// (0x00059517) list_single_graphic_heading_pane_t_ParamLimits

0xf601,	// (0x00059517) list_single_graphic_heading_pane_t

0x6e80,	// (0x00050d96) list_single_large_graphic_pane_g1_ParamLimits

0x6e80,	// (0x00050d96) list_single_large_graphic_pane_g1

0x6e8c,	// (0x00050da2) list_single_large_graphic_pane_g2_ParamLimits

0x6e8c,	// (0x00050da2) list_single_large_graphic_pane_g2

0x6e98,	// (0x00050dae) list_single_large_graphic_pane_g3_ParamLimits

0x6e98,	// (0x00050dae) list_single_large_graphic_pane_g3

0x0002,

0xf606,	// (0x0005951c) list_single_large_graphic_pane_g_ParamLimits

0xf606,	// (0x0005951c) list_single_large_graphic_pane_g

0xa16e,	// (0x00054084) wait_border_pane_g2_copy1

0x6ea4,	// (0x00050dba) list_single_large_graphic_pane_g4_cp2

0x50bd,	// (0x0004efd3) list_single_large_graphic_pane_t1_ParamLimits

0x50bd,	// (0x0004efd3) list_single_large_graphic_pane_t1

0x86c4,	// (0x000525da) list_double_pane_g1_ParamLimits

0x86c4,	// (0x000525da) list_double_pane_g1

0x50d3,	// (0x0004efe9) list_double_pane_g2_ParamLimits

0x50d3,	// (0x0004efe9) list_double_pane_g2

0x0001,

0xf60d,	// (0x00059523) list_double_pane_g_ParamLimits

0xf60d,	// (0x00059523) list_double_pane_g

0x50df,	// (0x0004eff5) list_double_pane_t1_ParamLimits

0x50df,	// (0x0004eff5) list_double_pane_t1

0x50f5,	// (0x0004f00b) list_double_pane_t2_ParamLimits

0x50f5,	// (0x0004f00b) list_double_pane_t2

0x0001,

0xf612,	// (0x00059528) list_double_pane_t_ParamLimits

0xf612,	// (0x00059528) list_double_pane_t

0x5107,	// (0x0004f01d) list_double2_pane_g1_ParamLimits

0x5107,	// (0x0004f01d) list_double2_pane_g1

0x5118,	// (0x0004f02e) list_double2_pane_g2_ParamLimits

0x5118,	// (0x0004f02e) list_double2_pane_g2

0x0001,

0xf617,	// (0x0005952d) list_double2_pane_g_ParamLimits

0xf617,	// (0x0005952d) list_double2_pane_g

0x5124,	// (0x0004f03a) list_double2_pane_t1_ParamLimits

0x5124,	// (0x0004f03a) list_double2_pane_t1

0x513a,	// (0x0004f050) list_double2_pane_t2_ParamLimits

0x513a,	// (0x0004f050) list_double2_pane_t2

0x0001,

0xf61c,	// (0x00059532) list_double2_pane_t_ParamLimits

0xf61c,	// (0x00059532) list_double2_pane_t

0x86c4,	// (0x000525da) list_double_number_pane_g1_ParamLimits

0x86c4,	// (0x000525da) list_double_number_pane_g1

0x50d3,	// (0x0004efe9) list_double_number_pane_g2_ParamLimits

0x50d3,	// (0x0004efe9) list_double_number_pane_g2

0x0001,

0xf60d,	// (0x00059523) list_double_number_pane_g_ParamLimits

0xf60d,	// (0x00059523) list_double_number_pane_g

0x514c,	// (0x0004f062) list_double_number_pane_t1_ParamLimits

0x514c,	// (0x0004f062) list_double_number_pane_t1

0x515e,	// (0x0004f074) list_double_number_pane_t2_ParamLimits

0x515e,	// (0x0004f074) list_double_number_pane_t2

0x5174,	// (0x0004f08a) list_double_number_pane_t3_ParamLimits

0x5174,	// (0x0004f08a) list_double_number_pane_t3

0x0002,

0xf621,	// (0x00059537) list_double_number_pane_t_ParamLimits

0xf621,	// (0x00059537) list_double_number_pane_t

0x5186,	// (0x0004f09c) list_double_graphic_pane_g1_ParamLimits

0x5186,	// (0x0004f09c) list_double_graphic_pane_g1

0xa676,	// (0x0005458c) list_double_graphic_pane_g2_ParamLimits

0xa676,	// (0x0005458c) list_double_graphic_pane_g2

0x5192,	// (0x0004f0a8) list_double_graphic_pane_g3_ParamLimits

0x5192,	// (0x0004f0a8) list_double_graphic_pane_g3

0x0003,

0xf628,	// (0x0005953e) list_double_graphic_pane_g_ParamLimits

0xf628,	// (0x0005953e) list_double_graphic_pane_g

0x51aa,	// (0x0004f0c0) list_double_graphic_pane_t1_ParamLimits

0x51aa,	// (0x0004f0c0) list_double_graphic_pane_t1

0x51c0,	// (0x0004f0d6) list_double_graphic_pane_t2_ParamLimits

0x51c0,	// (0x0004f0d6) list_double_graphic_pane_t2

0x0001,

0xf631,	// (0x00059547) list_double_graphic_pane_t_ParamLimits

0xf631,	// (0x00059547) list_double_graphic_pane_t

0x51d2,	// (0x0004f0e8) list_double2_graphic_pane_g1_ParamLimits

0x51d2,	// (0x0004f0e8) list_double2_graphic_pane_g1

0x51de,	// (0x0004f0f4) list_double2_graphic_pane_g2_ParamLimits

0x51de,	// (0x0004f0f4) list_double2_graphic_pane_g2

0x51ea,	// (0x0004f100) list_double2_graphic_pane_g3_ParamLimits

0x51ea,	// (0x0004f100) list_double2_graphic_pane_g3

0x0002,

0xf636,	// (0x0005954c) list_double2_graphic_pane_g_ParamLimits

0xf636,	// (0x0005954c) list_double2_graphic_pane_g

0x51f6,	// (0x0004f10c) list_double2_graphic_pane_t1_ParamLimits

0x51f6,	// (0x0004f10c) list_double2_graphic_pane_t1

0x520c,	// (0x0004f122) list_double2_graphic_pane_t2_ParamLimits

0x520c,	// (0x0004f122) list_double2_graphic_pane_t2

0x0001,

0xf63d,	// (0x00059553) list_double2_graphic_pane_t_ParamLimits

0xf63d,	// (0x00059553) list_double2_graphic_pane_t

0x521e,	// (0x0004f134) list_double_large_graphic_pane_g1_ParamLimits

0x521e,	// (0x0004f134) list_double_large_graphic_pane_g1

0x5247,	// (0x0004f15d) list_double_large_graphic_pane_g2_ParamLimits

0x5247,	// (0x0004f15d) list_double_large_graphic_pane_g2

0x50d3,	// (0x0004efe9) list_double_large_graphic_pane_g3_ParamLimits

0x50d3,	// (0x0004efe9) list_double_large_graphic_pane_g3

0x525d,	// (0x0004f173) list_double_large_graphic_pane_g4_ParamLimits

0x525d,	// (0x0004f173) list_double_large_graphic_pane_g4

0x0004,

0xf642,	// (0x00059558) list_double_large_graphic_pane_g_ParamLimits

0xf642,	// (0x00059558) list_double_large_graphic_pane_g

0x526e,	// (0x0004f184) list_double_large_graphic_pane_t1_ParamLimits

0x526e,	// (0x0004f184) list_double_large_graphic_pane_t1

0x5287,	// (0x0004f19d) list_double_large_graphic_pane_t2_ParamLimits

0x5287,	// (0x0004f19d) list_double_large_graphic_pane_t2

0x0001,

0xf64d,	// (0x00059563) list_double_large_graphic_pane_t_ParamLimits

0xf64d,	// (0x00059563) list_double_large_graphic_pane_t

0x5299,	// (0x0004f1af) list_double2_large_graphic_pane_g1_ParamLimits

0x5299,	// (0x0004f1af) list_double2_large_graphic_pane_g1

0x52a5,	// (0x0004f1bb) list_double2_large_graphic_pane_g2_ParamLimits

0x52a5,	// (0x0004f1bb) list_double2_large_graphic_pane_g2

0x51ea,	// (0x0004f100) list_double2_large_graphic_pane_g3_ParamLimits

0x51ea,	// (0x0004f100) list_double2_large_graphic_pane_g3

0x0002,

0xf652,	// (0x00059568) list_double2_large_graphic_pane_g_ParamLimits

0xf652,	// (0x00059568) list_double2_large_graphic_pane_g

0x52b6,	// (0x0004f1cc) list_double2_large_graphic_pane_t1_ParamLimits

0x52b6,	// (0x0004f1cc) list_double2_large_graphic_pane_t1

0x52cc,	// (0x0004f1e2) list_double2_large_graphic_pane_t2_ParamLimits

0x52cc,	// (0x0004f1e2) list_double2_large_graphic_pane_t2

0x0001,

0xf659,	// (0x0005956f) list_double2_large_graphic_pane_t_ParamLimits

0xf659,	// (0x0005956f) list_double2_large_graphic_pane_t

0x52de,	// (0x0004f1f4) list_double_heading_pane_g1_ParamLimits

0x52de,	// (0x0004f1f4) list_double_heading_pane_g1

0x52ef,	// (0x0004f205) list_double_heading_pane_g2_ParamLimits

0x52ef,	// (0x0004f205) list_double_heading_pane_g2

0x0001,

0xf65e,	// (0x00059574) list_double_heading_pane_g_ParamLimits

0xf65e,	// (0x00059574) list_double_heading_pane_g

0x52fb,	// (0x0004f211) list_double_heading_pane_t1_ParamLimits

0x52fb,	// (0x0004f211) list_double_heading_pane_t1

0x5311,	// (0x0004f227) list_double_heading_pane_t2_ParamLimits

0x5311,	// (0x0004f227) list_double_heading_pane_t2

0x0001,

0xf663,	// (0x00059579) list_double_heading_pane_t_ParamLimits

0xf663,	// (0x00059579) list_double_heading_pane_t

0x51d2,	// (0x0004f0e8) list_double_graphic_heading_pane_g1_ParamLimits

0x51d2,	// (0x0004f0e8) list_double_graphic_heading_pane_g1

0x52de,	// (0x0004f1f4) list_double_graphic_heading_pane_g2_ParamLimits

0x52de,	// (0x0004f1f4) list_double_graphic_heading_pane_g2

0x52ef,	// (0x0004f205) list_double_graphic_heading_pane_g3_ParamLimits

0x52ef,	// (0x0004f205) list_double_graphic_heading_pane_g3

0x0002,

0xf668,	// (0x0005957e) list_double_graphic_heading_pane_g_ParamLimits

0xf668,	// (0x0005957e) list_double_graphic_heading_pane_g

0x5323,	// (0x0004f239) list_double_graphic_heading_pane_t1_ParamLimits

0x5323,	// (0x0004f239) list_double_graphic_heading_pane_t1

0x520c,	// (0x0004f122) list_double_graphic_heading_pane_t2_ParamLimits

0x520c,	// (0x0004f122) list_double_graphic_heading_pane_t2

0x0001,

0xf66f,	// (0x00059585) list_double_graphic_heading_pane_t_ParamLimits

0xf66f,	// (0x00059585) list_double_graphic_heading_pane_t

0x5339,	// (0x0004f24f) list_double_time_pane_g1_ParamLimits

0x5339,	// (0x0004f24f) list_double_time_pane_g1

0x534a,	// (0x0004f260) list_double_time_pane_g2_ParamLimits

0x534a,	// (0x0004f260) list_double_time_pane_g2

0x0001,

0xf674,	// (0x0005958a) list_double_time_pane_g_ParamLimits

0xf674,	// (0x0005958a) list_double_time_pane_g

0x5356,	// (0x0004f26c) list_double_time_pane_t1_ParamLimits

0x5356,	// (0x0004f26c) list_double_time_pane_t1

0x536c,	// (0x0004f282) list_double_time_pane_t2_ParamLimits

0x536c,	// (0x0004f282) list_double_time_pane_t2

0x537e,	// (0x0004f294) list_double_time_pane_t3_ParamLimits

0x537e,	// (0x0004f294) list_double_time_pane_t3

0x5390,	// (0x0004f2a6) list_double_time_pane_t4_ParamLimits

0x5390,	// (0x0004f2a6) list_double_time_pane_t4

0x0003,

0xf679,	// (0x0005958f) list_double_time_pane_t_ParamLimits

0xf679,	// (0x0005958f) list_double_time_pane_t

0x53a2,	// (0x0004f2b8) list_setting_pane_g1_ParamLimits

0x53a2,	// (0x0004f2b8) list_setting_pane_g1

0x53ae,	// (0x0004f2c4) list_setting_pane_g2_ParamLimits

0x53ae,	// (0x0004f2c4) list_setting_pane_g2

0x0001,

0xf682,	// (0x00059598) list_setting_pane_g_ParamLimits

0xf682,	// (0x00059598) list_setting_pane_g

0x53ba,	// (0x0004f2d0) list_setting_pane_t1_ParamLimits

0x53ba,	// (0x0004f2d0) list_setting_pane_t1

0x53d4,	// (0x0004f2ea) list_setting_pane_t2_ParamLimits

0x53d4,	// (0x0004f2ea) list_setting_pane_t2

0x0002,

0xf687,	// (0x0005959d) list_setting_pane_t_ParamLimits

0xf687,	// (0x0005959d) list_setting_pane_t

0x5413,	// (0x0004f329) set_value_pane_cp_ParamLimits

0x5413,	// (0x0004f329) set_value_pane_cp

0x541f,	// (0x0004f335) list_setting_number_pane_g1_ParamLimits

0x541f,	// (0x0004f335) list_setting_number_pane_g1

0x542b,	// (0x0004f341) list_setting_number_pane_g2_ParamLimits

0x542b,	// (0x0004f341) list_setting_number_pane_g2

0x0001,

0xf68e,	// (0x000595a4) list_setting_number_pane_g_ParamLimits

0xf68e,	// (0x000595a4) list_setting_number_pane_g

0x5437,	// (0x0004f34d) list_setting_number_pane_t1_ParamLimits

0x5437,	// (0x0004f34d) list_setting_number_pane_t1

0x5450,	// (0x0004f366) list_setting_number_pane_t2_ParamLimits

0x5450,	// (0x0004f366) list_setting_number_pane_t2

0x546a,	// (0x0004f380) list_setting_number_pane_t3_ParamLimits

0x546a,	// (0x0004f380) list_setting_number_pane_t3

0x0003,

0xf693,	// (0x000595a9) list_setting_number_pane_t_ParamLimits

0xf693,	// (0x000595a9) list_setting_number_pane_t

0x5413,	// (0x0004f329) set_value_pane_ParamLimits

0x5413,	// (0x0004f329) set_value_pane

0x8056,	// (0x00051f6c) bg_set_opt_pane_ParamLimits

0x8056,	// (0x00051f6c) bg_set_opt_pane

0x54ad,	// (0x0004f3c3) set_value_pane_t1

0x8077,	// (0x00051f8d) slider_set_pane_cp3

0x8080,	// (0x00051f96) volume_small_pane_cp

0x8089,	// (0x00051f9f) list_form_gen_pane

0x8092,	// (0x00051fa8) scroll_pane_cp8

0x54c3,	// (0x0004f3d9) form_field_data_pane_ParamLimits

0x54c3,	// (0x0004f3d9) form_field_data_pane

0x54e7,	// (0x0004f3fd) form_field_data_wide_pane_ParamLimits

0x54e7,	// (0x0004f3fd) form_field_data_wide_pane

0x550a,	// (0x0004f420) form_field_popup_pane_ParamLimits

0x550a,	// (0x0004f420) form_field_popup_pane

0x552a,	// (0x0004f440) form_field_popup_wide_pane_ParamLimits

0x552a,	// (0x0004f440) form_field_popup_wide_pane

0x5549,	// (0x0004f45f) form_field_slider_pane_ParamLimits

0x5549,	// (0x0004f45f) form_field_slider_pane

0x555c,	// (0x0004f472) form_field_slider_wide_pane_ParamLimits

0x555c,	// (0x0004f472) form_field_slider_wide_pane

0x80a3,	// (0x00051fb9) data_form_pane

0x5579,	// (0x0004f48f) form_field_data_pane_t1

0x80af,	// (0x00051fc5) input_focus_pane

0x80bd,	// (0x00051fd3) data_form_wide_pane

0x559d,	// (0x0004f4b3) form_field_data_wide_pane_t1

0x7e20,	// (0x00051d36) input_focus_pane_cp6

0x55bf,	// (0x0004f4d5) form_field_popup_pane_t1

0x80af,	// (0x00051fc5) input_focus_pane_cp7

0x80e9,	// (0x00051fff) list_form_pane

0x55df,	// (0x0004f4f5) form_field_popup_wide_pane_t1

0x80af,	// (0x00051fc5) input_focus_pane_cp8

0x80f5,	// (0x0005200b) list_form_wide_pane

0x55fc,	// (0x0004f512) form_field_slider_pane_t1_ParamLimits

0x55fc,	// (0x0004f512) form_field_slider_pane_t1

0x5612,	// (0x0004f528) form_field_slider_pane_t2_ParamLimits

0x5612,	// (0x0004f528) form_field_slider_pane_t2

0x0001,

0xf6a3,	// (0x000595b9) form_field_slider_pane_t_ParamLimits

0xf6a3,	// (0x000595b9) form_field_slider_pane_t

0x7abe,	// (0x000519d4) input_focus_pane_cp9_ParamLimits

0x7abe,	// (0x000519d4) input_focus_pane_cp9

0x5627,	// (0x0004f53d) slider_cont_pane_ParamLimits

0x5627,	// (0x0004f53d) slider_cont_pane

0x8104,	// (0x0005201a) form_field_slider_wide_pane_t1_ParamLimits

0x8104,	// (0x0005201a) form_field_slider_wide_pane_t1

0x563b,	// (0x0004f551) form_field_slider_wide_pane_t2_ParamLimits

0x563b,	// (0x0004f551) form_field_slider_wide_pane_t2

0x0001,

0xf6a8,	// (0x000595be) form_field_slider_wide_pane_t_ParamLimits

0xf6a8,	// (0x000595be) form_field_slider_wide_pane_t

0x7abe,	// (0x000519d4) input_focus_pane_cp10_ParamLimits

0x7abe,	// (0x000519d4) input_focus_pane_cp10

0x564d,	// (0x0004f563) slider_cont_pane_cp1_ParamLimits

0x564d,	// (0x0004f563) slider_cont_pane_cp1

0x5661,	// (0x0004f577) slider_form_pane_cp

0x8116,	// (0x0005202c) input_focus_pane_g1

0x811e,	// (0x00052034) input_focus_pane_g2

0x8126,	// (0x0005203c) input_focus_pane_g3

0x812e,	// (0x00052044) input_focus_pane_g4

0x8136,	// (0x0005204c) input_focus_pane_g5

0x813e,	// (0x00052054) input_focus_pane_g6

0x8146,	// (0x0005205c) input_focus_pane_g7

0x814e,	// (0x00052064) input_focus_pane_g8

0x8156,	// (0x0005206c) input_focus_pane_g9

0x7759,	// (0x0005166f) input_focus_pane_g10

0x0009,

0xf6ad,	// (0x000595c3) input_focus_pane_g

0xa177,	// (0x0005408d) wait_border_pane_g3_copy1

0x5669,	// (0x0004f57f) data_form_pane_t1

0x7759,	// (0x0005166f) wait_anim_pane_g1_copy1

0x7039,	// (0x00050f4f) data_form_wide_pane_t1

0x5684,	// (0x0004f59a) list_form_graphic_pane_cp_ParamLimits

0x5684,	// (0x0004f59a) list_form_graphic_pane_cp

0xb0b3,	// (0x00054fc9) slider_form_pane_g1

0xb0bc,	// (0x00054fd2) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x000598bb) slider_form_pane_g

0x569d,	// (0x0004f5b3) list_form_graphic_pane_ParamLimits

0x569d,	// (0x0004f5b3) list_form_graphic_pane

0x56b9,	// (0x0004f5cf) list_form_graphic_pane_g1

0x56c1,	// (0x0004f5d7) list_form_graphic_pane_t1_ParamLimits

0x56c1,	// (0x0004f5d7) list_form_graphic_pane_t1

0x7843,	// (0x00051759) list_highlight_pane_cp5_ParamLimits

0x7843,	// (0x00051759) list_highlight_pane_cp5

0x56d6,	// (0x0004f5ec) find_pane_g1

0x815e,	// (0x00052074) input_find_pane

0x56df,	// (0x0004f5f5) input_find_pane_g1_ParamLimits

0x56df,	// (0x0004f5f5) input_find_pane_g1

0x56eb,	// (0x0004f601) input_find_pane_t1_ParamLimits

0x56eb,	// (0x0004f601) input_find_pane_t1

0x5700,	// (0x0004f616) input_find_pane_t2_ParamLimits

0x5700,	// (0x0004f616) input_find_pane_t2

0x0001,

0xf6c2,	// (0x000595d8) input_find_pane_t_ParamLimits

0xf6c2,	// (0x000595d8) input_find_pane_t

0x8167,	// (0x0005207d) input_focus_pane_cp5_ParamLimits

0x8167,	// (0x0005207d) input_focus_pane_cp5

0x8181,	// (0x00052097) bg_popup_window_pane_cp2_ParamLimits

0x8181,	// (0x00052097) bg_popup_window_pane_cp2

0x818e,	// (0x000520a4) listscroll_menu_pane_ParamLimits

0x818e,	// (0x000520a4) listscroll_menu_pane

0x819a,	// (0x000520b0) popup_submenu_window_ParamLimits

0x819a,	// (0x000520b0) popup_submenu_window

0x81c4,	// (0x000520da) find_popup_pane_g1

0x81cc,	// (0x000520e2) input_popup_find_pane_cp

0x8167,	// (0x0005207d) input_focus_pane_cp4_ParamLimits

0x8167,	// (0x0005207d) input_focus_pane_cp4

0x81e2,	// (0x000520f8) input_popup_find_pane_t1_ParamLimits

0x81e2,	// (0x000520f8) input_popup_find_pane_t1

0x7763,	// (0x00051679) bg_popup_sub_pane_cp

0x8210,	// (0x00052126) listscroll_popup_sub_pane

0x8218,	// (0x0005212e) list_submenu_pane_ParamLimits

0x8218,	// (0x0005212e) list_submenu_pane

0x8229,	// (0x0005213f) scroll_pane_cp4

0x8231,	// (0x00052147) list_single_popup_submenu_pane_ParamLimits

0x8231,	// (0x00052147) list_single_popup_submenu_pane

0x8245,	// (0x0005215b) list_single_popup_submenu_pane_g1

0x824d,	// (0x00052163) list_single_popup_submenu_pane_t1_ParamLimits

0x824d,	// (0x00052163) list_single_popup_submenu_pane_t1

0x7843,	// (0x00051759) bg_active_tab_pane_cp1_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp1

0x8262,	// (0x00052178) tabs_2_active_pane_g1

0x826a,	// (0x00052180) tabs_2_active_pane_t1

0x7843,	// (0x00051759) bg_passive_tab_pane_cp1_ParamLimits

0x7843,	// (0x00051759) bg_passive_tab_pane_cp1

0x8262,	// (0x00052178) tabs_2_passive_pane_g1

0x826a,	// (0x00052180) tabs_2_passive_pane_t1

0x827c,	// (0x00052192) bg_active_tab_pane_cp4

0x828a,	// (0x000521a0) tabs_2_long_active_pane_t1

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp4

0x5d50,	// (0x0004fc66) list_single_midp_graphic_pane_g4_ParamLimits

0x827c,	// (0x00052192) bg_active_tab_pane_cp5

0x82a9,	// (0x000521bf) tabs_3_long_active_pane_t1

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp5

0x5d50,	// (0x0004fc66) list_single_midp_graphic_pane_g4

0x7843,	// (0x00051759) bg_popup_window_pane_cp13_ParamLimits

0x7843,	// (0x00051759) bg_popup_window_pane_cp13

0x82c4,	// (0x000521da) listscroll_popup_fast_pane_ParamLimits

0x82c4,	// (0x000521da) listscroll_popup_fast_pane

0x82d3,	// (0x000521e9) grid_popup_fast_pane_ParamLimits

0x82d3,	// (0x000521e9) grid_popup_fast_pane

0x82e5,	// (0x000521fb) scroll_pane_cp9_ParamLimits

0x82e5,	// (0x000521fb) scroll_pane_cp9

0xc972,	// (0x00056888) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc972,	// (0x00056888) list_single_graphic_hl_pane_t1_cp2

0x8309,	// (0x0005221f) input_focus_pane_cp20_ParamLimits

0x8309,	// (0x0005221f) input_focus_pane_cp20

0x8317,	// (0x0005222d) query_popup_data_pane_t1_ParamLimits

0x8317,	// (0x0005222d) query_popup_data_pane_t1

0x832a,	// (0x00052240) query_popup_data_pane_t2_ParamLimits

0x832a,	// (0x00052240) query_popup_data_pane_t2

0x8370,	// (0x00052286) query_popup_data_pane_t3_ParamLimits

0x8370,	// (0x00052286) query_popup_data_pane_t3

0x83b1,	// (0x000522c7) query_popup_data_pane_t4_ParamLimits

0x83b1,	// (0x000522c7) query_popup_data_pane_t4

0x83ed,	// (0x00052303) query_popup_data_pane_t5_ParamLimits

0x83ed,	// (0x00052303) query_popup_data_pane_t5

0x0004,

0xf6c7,	// (0x000595dd) query_popup_data_pane_t_ParamLimits

0xf6c7,	// (0x000595dd) query_popup_data_pane_t

0x8116,	// (0x0005202c) bg_set_opt_pane_g1

0x811e,	// (0x00052034) bg_set_opt_pane_g2

0x8126,	// (0x0005203c) bg_set_opt_pane_g3

0x812e,	// (0x00052044) bg_set_opt_pane_g4

0x8136,	// (0x0005204c) bg_set_opt_pane_g5

0x813e,	// (0x00052054) bg_set_opt_pane_g6

0x8146,	// (0x0005205c) bg_set_opt_pane_g7

0x814e,	// (0x00052064) bg_set_opt_pane_g8

0x8156,	// (0x0005206c) bg_set_opt_pane_g9

0x0008,

0xf6d2,	// (0x000595e8) bg_set_opt_pane_g

0x59b4,	// (0x0004f8ca) control_top_pane_stacon_ParamLimits

0x59b4,	// (0x0004f8ca) control_top_pane_stacon

0x5a07,	// (0x0004f91d) signal_pane_stacon_ParamLimits

0x5a07,	// (0x0004f91d) signal_pane_stacon

0x8997,	// (0x000528ad) stacon_top_pane_g1_ParamLimits

0x8997,	// (0x000528ad) stacon_top_pane_g1

0x5a2c,	// (0x0004f942) title_pane_stacon_ParamLimits

0x5a2c,	// (0x0004f942) title_pane_stacon

0x5a56,	// (0x0004f96c) uni_indicator_pane_stacon_ParamLimits

0x5a56,	// (0x0004f96c) uni_indicator_pane_stacon

0x5a6b,	// (0x0004f981) battery_pane_stacon_ParamLimits

0x5a6b,	// (0x0004f981) battery_pane_stacon

0x5aaf,	// (0x0004f9c5) control_bottom_pane_stacon_ParamLimits

0x5aaf,	// (0x0004f9c5) control_bottom_pane_stacon

0x5ad2,	// (0x0004f9e8) navi_pane_stacon_ParamLimits

0x5ad2,	// (0x0004f9e8) navi_pane_stacon

0x89b9,	// (0x000528cf) stacon_bottom_pane_g1_ParamLimits

0x89b9,	// (0x000528cf) stacon_bottom_pane_g1

0x5715,	// (0x0004f62b) aid_levels_signal_lsc_ParamLimits

0x5715,	// (0x0004f62b) aid_levels_signal_lsc

0x572c,	// (0x0004f642) signal_pane_stacon_g1_ParamLimits

0x572c,	// (0x0004f642) signal_pane_stacon_g1

0x5740,	// (0x0004f656) signal_pane_stacon_g2_ParamLimits

0x5740,	// (0x0004f656) signal_pane_stacon_g2

0x0001,

0xf6e5,	// (0x000595fb) signal_pane_stacon_g_ParamLimits

0xf6e5,	// (0x000595fb) signal_pane_stacon_g

0x5775,	// (0x0004f68b) title_pane_stacon_t1_ParamLimits

0x5775,	// (0x0004f68b) title_pane_stacon_t1

0x8431,	// (0x00052347) uni_indicator_pane_stacon_g1

0x843b,	// (0x00052351) uni_indicator_pane_stacon_g2

0x8445,	// (0x0005235b) uni_indicator_pane_stacon_g3

0x844f,	// (0x00052365) uni_indicator_pane_stacon_g4

0x0003,

0xf6f1,	// (0x00059607) uni_indicator_pane_stacon_g

0x579a,	// (0x0004f6b0) control_top_pane_stacon_g1

0x57a2,	// (0x0004f6b8) control_top_pane_stacon_t1_ParamLimits

0x57a2,	// (0x0004f6b8) control_top_pane_stacon_t1

0x57d9,	// (0x0004f6ef) aid_levels_battery_lsc_ParamLimits

0x57d9,	// (0x0004f6ef) aid_levels_battery_lsc

0x57f1,	// (0x0004f707) battery_pane_stacon_g1_ParamLimits

0x57f1,	// (0x0004f707) battery_pane_stacon_g1

0x5804,	// (0x0004f71a) battery_pane_stacon_g2_ParamLimits

0x5804,	// (0x0004f71a) battery_pane_stacon_g2

0x0001,

0xf6fa,	// (0x00059610) battery_pane_stacon_g_ParamLimits

0xf6fa,	// (0x00059610) battery_pane_stacon_g

0x5842,	// (0x0004f758) navi_icon_pane_stacon

0x5856,	// (0x0004f76c) navi_navi_pane_stacon

0x5842,	// (0x0004f758) navi_text_pane_stacon

0x579a,	// (0x0004f6b0) control_bottom_pane_stacon_g1

0x586a,	// (0x0004f780) control_bottom_pane_stacon_t1_ParamLimits

0x586a,	// (0x0004f780) control_bottom_pane_stacon_t1

0x8473,	// (0x00052389) grid_app_pane_ParamLimits

0x8473,	// (0x00052389) grid_app_pane

0x8497,	// (0x000523ad) scroll_pane_cp15_ParamLimits

0x8497,	// (0x000523ad) scroll_pane_cp15

0x84ac,	// (0x000523c2) cell_app_pane_ParamLimits

0x84ac,	// (0x000523c2) cell_app_pane

0x84d0,	// (0x000523e6) cell_app_pane_g1_ParamLimits

0x84d0,	// (0x000523e6) cell_app_pane_g1

0x84f4,	// (0x0005240a) cell_app_pane_g2_ParamLimits

0x84f4,	// (0x0005240a) cell_app_pane_g2

0x0001,

0xf6ff,	// (0x00059615) cell_app_pane_g_ParamLimits

0xf6ff,	// (0x00059615) cell_app_pane_g

0x8500,	// (0x00052416) cell_app_pane_t1_ParamLimits

0x8500,	// (0x00052416) cell_app_pane_t1

0x8517,	// (0x0005242d) grid_highlight_pane_ParamLimits

0x8517,	// (0x0005242d) grid_highlight_pane

0x8116,	// (0x0005202c) cell_highlight_pane_g1

0x811e,	// (0x00052034) cell_highlight_pane_g2

0x8126,	// (0x0005203c) cell_highlight_pane_g3

0x812e,	// (0x00052044) cell_highlight_pane_g4

0x8136,	// (0x0005204c) cell_highlight_pane_g5

0x813e,	// (0x00052054) cell_highlight_pane_g6

0x8146,	// (0x0005205c) cell_highlight_pane_g7

0x814e,	// (0x00052064) cell_highlight_pane_g8

0x8156,	// (0x0005206c) cell_highlight_pane_g9

0x7759,	// (0x0005166f) cell_highlight_pane_g10

0x0009,

0xf6ad,	// (0x000595c3) cell_highlight_pane_g

0x8528,	// (0x0005243e) bg_scroll_pane

0x58b4,	// (0x0004f7ca) scroll_handle_pane

0x856f,	// (0x00052485) scroll_bg_pane_g1

0x8584,	// (0x0005249a) scroll_bg_pane_g2

0x859c,	// (0x000524b2) scroll_bg_pane_g3

0x0002,

0xf704,	// (0x0005961a) scroll_bg_pane_g

0x85b1,	// (0x000524c7) scroll_handle_focus_pane_ParamLimits

0x85b1,	// (0x000524c7) scroll_handle_focus_pane

0x856f,	// (0x00052485) scroll_handle_pane_g1

0x85be,	// (0x000524d4) scroll_handle_pane_g2

0x859c,	// (0x000524b2) scroll_handle_pane_g3

0x0002,

0xf70b,	// (0x00059621) scroll_handle_pane_g

0x8167,	// (0x0005207d) bg_popup_sub_pane_cp21_ParamLimits

0x8167,	// (0x0005207d) bg_popup_sub_pane_cp21

0x85d2,	// (0x000524e8) popup_fep_japan_predictive_window_t1_ParamLimits

0x85d2,	// (0x000524e8) popup_fep_japan_predictive_window_t1

0x85ec,	// (0x00052502) popup_fep_japan_predictive_window_t2_ParamLimits

0x85ec,	// (0x00052502) popup_fep_japan_predictive_window_t2

0x861f,	// (0x00052535) popup_fep_japan_predictive_window_t3_ParamLimits

0x861f,	// (0x00052535) popup_fep_japan_predictive_window_t3

0x0002,

0xf712,	// (0x00059628) popup_fep_japan_predictive_window_t_ParamLimits

0xf712,	// (0x00059628) popup_fep_japan_predictive_window_t

0x7763,	// (0x00051679) bg_popup_sub_pane_cp23

0x8656,	// (0x0005256c) listscroll_japin_cand_pane

0x865e,	// (0x00052574) popup_fep_japan_candidate_window_t1

0x866c,	// (0x00052582) candidate_pane_ParamLimits

0x866c,	// (0x00052582) candidate_pane

0x867e,	// (0x00052594) scroll_pane_cp30

0x8686,	// (0x0005259c) list_single_popup_jap_candidate_pane_ParamLimits

0x8686,	// (0x0005259c) list_single_popup_jap_candidate_pane

0x7763,	// (0x00051679) list_highlight_pane_cp30

0x869b,	// (0x000525b1) list_single_popup_jap_candidate_pane_t1

0x86aa,	// (0x000525c0) level_1_signal

0x86b7,	// (0x000525cd) level_2_signal

0x86d0,	// (0x000525e6) level_3_signal

0x86dd,	// (0x000525f3) level_4_signal

0x86ea,	// (0x00052600) level_5_signal

0x86f7,	// (0x0005260d) level_6_signal

0x8704,	// (0x0005261a) level_7_signal

0x86aa,	// (0x000525c0) level_1_battery

0x86b7,	// (0x000525cd) level_2_battery

0x86d0,	// (0x000525e6) level_3_battery

0x86dd,	// (0x000525f3) level_4_battery

0x86ea,	// (0x00052600) level_5_battery

0x86f7,	// (0x0005260d) level_6_battery

0x8704,	// (0x0005261a) level_7_battery

0x8729,	// (0x0005263f) list_menu_pane_ParamLimits

0x8729,	// (0x0005263f) list_menu_pane

0x873a,	// (0x00052650) scroll_pane_cp25_ParamLimits

0x873a,	// (0x00052650) scroll_pane_cp25

0x8753,	// (0x00052669) list_double2_graphic_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double2_graphic_pane_cp2

0x8753,	// (0x00052669) list_double2_large_graphic_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double2_large_graphic_pane_cp2

0x8753,	// (0x00052669) list_double2_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double2_pane_cp2

0x8753,	// (0x00052669) list_double_graphic_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double_graphic_pane_cp2

0x8753,	// (0x00052669) list_double_large_graphic_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double_large_graphic_pane_cp2

0x8753,	// (0x00052669) list_double_number_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double_number_pane_cp2

0x8753,	// (0x00052669) list_double_pane_cp2_ParamLimits

0x8753,	// (0x00052669) list_double_pane_cp2

0x8777,	// (0x0005268d) list_single_2graphic_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_2graphic_pane_cp2

0x8777,	// (0x0005268d) list_single_graphic_heading_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_graphic_heading_pane_cp2

0x8777,	// (0x0005268d) list_single_graphic_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_graphic_pane_cp2

0x8777,	// (0x0005268d) list_single_heading_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_heading_pane_cp2

0x8790,	// (0x000526a6) list_single_large_graphic_pane_cp2_ParamLimits

0x8790,	// (0x000526a6) list_single_large_graphic_pane_cp2

0x8777,	// (0x0005268d) list_single_number_heading_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_number_heading_pane_cp2

0x8777,	// (0x0005268d) list_single_number_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_number_pane_cp2

0x8777,	// (0x0005268d) list_single_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_pane_cp2

0x87e6,	// (0x000526fc) bg_popup_sub_pane_cp22

0x5966,	// (0x0004f87c) popup_side_volume_key_window_g1

0x5990,	// (0x0004f8a6) popup_side_volume_key_window_t1

0x59ac,	// (0x0004f8c2) volume_small_pane_cp1

0x7abe,	// (0x000519d4) bg_popup_sub_pane_cp24_ParamLimits

0x7abe,	// (0x000519d4) bg_popup_sub_pane_cp24

0x87fc,	// (0x00052712) fep_china_uni_candidate_pane_ParamLimits

0x87fc,	// (0x00052712) fep_china_uni_candidate_pane

0x8810,	// (0x00052726) fep_china_uni_entry_pane

0x8820,	// (0x00052736) popup_fep_china_uni_window_g1

0x883c,	// (0x00052752) fep_china_uni_entry_pane_g1

0x8844,	// (0x0005275a) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x00059655) fep_china_uni_entry_pane_g

0x884c,	// (0x00052762) fep_entry_item_pane

0x8856,	// (0x0005276c) fep_candidate_item_pane

0x885e,	// (0x00052774) fep_china_uni_candidate_pane_g1

0x8866,	// (0x0005277c) fep_china_uni_candidate_pane_g2

0x886e,	// (0x00052784) fep_china_uni_candidate_pane_g3

0x8876,	// (0x0005278c) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0005965a) fep_china_uni_candidate_pane_g

0x7759,	// (0x0005166f) fep_entry_item_pane_g1

0x887e,	// (0x00052794) fep_entry_item_pane_t1_ParamLimits

0x887e,	// (0x00052794) fep_entry_item_pane_t1

0x8894,	// (0x000527aa) fep_candidate_item_pane_t1_ParamLimits

0x8894,	// (0x000527aa) fep_candidate_item_pane_t1

0x88a9,	// (0x000527bf) fep_candidate_item_pane_t2_ParamLimits

0x88a9,	// (0x000527bf) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x00059663) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x00059663) fep_candidate_item_pane_t

0x7843,	// (0x00051759) list_highlight_pane_cp31_ParamLimits

0x7843,	// (0x00051759) list_highlight_pane_cp31

0x88bb,	// (0x000527d1) level_1_signal_lsc

0x88c4,	// (0x000527da) level_2_signal_lsc

0x88cd,	// (0x000527e3) level_3_signal_lsc

0x88d6,	// (0x000527ec) level_4_signal_lsc

0x88df,	// (0x000527f5) level_5_signal_lsc

0x88e8,	// (0x000527fe) level_6_signal_lsc

0x88f1,	// (0x00052807) level_7_signal_lsc

0x88f1,	// (0x00052807) level_1_battery_lsc

0x88fa,	// (0x00052810) level_2_battery_lsc

0x8903,	// (0x00052819) level_3_battery_lsc

0x890c,	// (0x00052822) level_4_battery_lsc

0x8915,	// (0x0005282b) level_5_battery_lsc

0x891e,	// (0x00052834) level_6_battery_lsc

0x88bb,	// (0x000527d1) level_7_battery_lsc

0x8927,	// (0x0005283d) scroll_handle_focus_pane_g1

0x8930,	// (0x00052846) scroll_handle_focus_pane_g2

0x8939,	// (0x0005284f) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x00059668) scroll_handle_focus_pane_g

0x6ec1,	// (0x00050dd7) list_single_2graphic_pane_g1_ParamLimits

0x6ec1,	// (0x00050dd7) list_single_2graphic_pane_g1

0x6e6f,	// (0x00050d85) list_single_2graphic_pane_g2_ParamLimits

0x6e6f,	// (0x00050d85) list_single_2graphic_pane_g2

0x6e51,	// (0x00050d67) list_single_2graphic_pane_g3_ParamLimits

0x6e51,	// (0x00050d67) list_single_2graphic_pane_g3

0x6ecd,	// (0x00050de3) list_single_2graphic_pane_g4_ParamLimits

0x6ecd,	// (0x00050de3) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0005966f) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0005966f) list_single_2graphic_pane_g

0x6ed9,	// (0x00050def) list_single_2graphic_pane_t1_ParamLimits

0x6ed9,	// (0x00050def) list_single_2graphic_pane_t1

0x6f07,	// (0x00050e1d) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6f07,	// (0x00050e1d) list_double2_graphic_large_graphic_pane_g1

0x52a5,	// (0x0004f1bb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x52a5,	// (0x0004f1bb) list_double2_graphic_large_graphic_pane_g2

0x51ea,	// (0x0004f100) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x51ea,	// (0x0004f100) list_double2_graphic_large_graphic_pane_g3

0x6f17,	// (0x00050e2d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x6f17,	// (0x00050e2d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x00059678) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x00059678) list_double2_graphic_large_graphic_pane_g

0x6f23,	// (0x00050e39) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x6f23,	// (0x00050e39) list_double2_graphic_large_graphic_pane_t1

0x6f39,	// (0x00050e4f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x6f39,	// (0x00050e4f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x00059681) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x00059681) list_double2_graphic_large_graphic_pane_t

0x8a81,	// (0x00052997) popup_fast_swap_window_ParamLimits

0x8a81,	// (0x00052997) popup_fast_swap_window

0x8a9d,	// (0x000529b3) popup_side_volume_key_window

0x8ab9,	// (0x000529cf) stacon_top_pane

0x8ac3,	// (0x000529d9) status_pane_ParamLimits

0x8ac3,	// (0x000529d9) status_pane

0x8ab9,	// (0x000529cf) status_small_pane

0x7763,	// (0x00051679) control_pane

0x7763,	// (0x00051679) stacon_bottom_pane

0x8092,	// (0x00051fa8) scroll_pane_cp121

0x8089,	// (0x00051f9f) set_content_pane

0x8942,	// (0x00052858) bg_active_tab_pane_g1_cp1

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp1

0x8954,	// (0x0005286a) bg_active_tab_pane_g3_cp1

0x8942,	// (0x00052858) bg_passive_tab_pane_g1_cp1

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp1

0x8954,	// (0x0005286a) bg_passive_tab_pane_g3_cp1

0x895d,	// (0x00052873) bg_active_tab_pane_g1_cp2

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp2

0x8966,	// (0x0005287c) bg_active_tab_pane_g3_cp2

0x895d,	// (0x00052873) bg_passive_tab_pane_g1_cp2

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp2

0x8966,	// (0x0005287c) bg_passive_tab_pane_g3_cp2

0x896f,	// (0x00052885) bg_active_tab_pane_g1_cp3

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp3

0x8978,	// (0x0005288e) bg_active_tab_pane_g3_cp3

0x896f,	// (0x00052885) bg_passive_tab_pane_g1_cp3

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp3

0x8978,	// (0x0005288e) bg_passive_tab_pane_g3_cp3

0x8981,	// (0x00052897) bg_active_tab_pane_g1_cp4

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp4

0x898c,	// (0x000528a2) bg_active_tab_pane_g3_cp4

0x8981,	// (0x00052897) bg_passive_tab_pane_g1_cp4

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp4

0x898c,	// (0x000528a2) bg_passive_tab_pane_g3_cp4

0x89d5,	// (0x000528eb) bg_active_tab_pane_g1_cp5

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp5

0x89de,	// (0x000528f4) bg_active_tab_pane_g3_cp5

0x89d5,	// (0x000528eb) bg_passive_tab_pane_g1_cp5

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp5

0x89de,	// (0x000528f4) bg_passive_tab_pane_g3_cp5

0x89e7,	// (0x000528fd) list_set_graphic_pane_ParamLimits

0x89e7,	// (0x000528fd) list_set_graphic_pane

0x7763,	// (0x00051679) bg_set_opt_pane_cp4

0x8a04,	// (0x0005291a) list_set_graphic_pane_g1_ParamLimits

0x8a04,	// (0x0005291a) list_set_graphic_pane_g1

0x8a10,	// (0x00052926) list_set_graphic_pane_g2_ParamLimits

0x8a10,	// (0x00052926) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x00059686) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x00059686) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x000599e9) volume_small_pane_cp_g

0x8a34,	// (0x0005294a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8a34,	// (0x0005294a) list_double2_large_graphic_pane_g1_cp2

0x8a40,	// (0x00052956) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8a40,	// (0x00052956) list_double2_large_graphic_pane_g2_cp2

0x8a51,	// (0x00052967) list_double2_large_graphic_pane_g3_cp2

0x8a59,	// (0x0005296f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8a59,	// (0x0005296f) list_double2_large_graphic_pane_t1_cp2

0x8a6f,	// (0x00052985) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8a6f,	// (0x00052985) list_double2_large_graphic_pane_t2_cp2

0xac50,	// (0x00054b66) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xac50,	// (0x00054b66) list_double_large_graphic_pane_g1_cp2

0xac61,	// (0x00054b77) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xac61,	// (0x00054b77) list_double_large_graphic_pane_g2_cp2

0x8bd3,	// (0x00052ae9) list_double_large_graphic_pane_g3_cp2

0xac72,	// (0x00054b88) list_double_large_graphic_pane_g4_cp

0xac7a,	// (0x00054b90) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xac7a,	// (0x00054b90) list_double_large_graphic_pane_t1_cp2

0xac91,	// (0x00054ba7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xac91,	// (0x00054ba7) list_double_large_graphic_pane_t2_cp2

0x8ad1,	// (0x000529e7) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8ad1,	// (0x000529e7) list_double2_graphic_pane_g1_cp2

0x8adf,	// (0x000529f5) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8adf,	// (0x000529f5) list_double2_graphic_pane_g2_cp2

0x8af0,	// (0x00052a06) list_double2_graphic_pane_g3_cp2

0x8afa,	// (0x00052a10) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8afa,	// (0x00052a10) list_double2_graphic_pane_t1_cp2

0x8b10,	// (0x00052a26) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8b10,	// (0x00052a26) list_double2_graphic_pane_t2_cp2

0x8b22,	// (0x00052a38) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8b22,	// (0x00052a38) list_single_number_heading_pane_g1_cp2

0x8b2e,	// (0x00052a44) list_single_number_heading_pane_g2_cp2

0x8b36,	// (0x00052a4c) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8b36,	// (0x00052a4c) list_single_number_heading_pane_t1_cp2

0x8b4c,	// (0x00052a62) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8b4c,	// (0x00052a62) list_single_number_heading_pane_t2_cp2

0x8b5e,	// (0x00052a74) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8b5e,	// (0x00052a74) list_single_number_heading_pane_t3_cp2

0x8b22,	// (0x00052a38) list_single_heading_pane_g1_cp2_ParamLimits

0x8b22,	// (0x00052a38) list_single_heading_pane_g1_cp2

0x8b2e,	// (0x00052a44) list_single_heading_pane_g2_cp2

0x8b36,	// (0x00052a4c) list_single_heading_pane_t1_cp2_ParamLimits

0x8b36,	// (0x00052a4c) list_single_heading_pane_t1_cp2

0xaa58,	// (0x0005496e) list_single_heading_pane_t2_cp2_ParamLimits

0xaa58,	// (0x0005496e) list_single_heading_pane_t2_cp2

0xa9a9,	// (0x000548bf) list_double_graphic_pane_g1_cp2_ParamLimits

0xa9a9,	// (0x000548bf) list_double_graphic_pane_g1_cp2

0xa676,	// (0x0005458c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa676,	// (0x0005458c) list_double_graphic_pane_g2_cp2

0xa9b5,	// (0x000548cb) list_double_graphic_pane_g3_cp2

0xa9bd,	// (0x000548d3) list_double_graphic_pane_t1_cp2_ParamLimits

0xa9bd,	// (0x000548d3) list_double_graphic_pane_t1_cp2

0xa9d3,	// (0x000548e9) list_double_graphic_pane_t2_cp2_ParamLimits

0xa9d3,	// (0x000548e9) list_double_graphic_pane_t2_cp2

0x86c4,	// (0x000525da) list_double_number_pane_g1_cp2_ParamLimits

0x86c4,	// (0x000525da) list_double_number_pane_g1_cp2

0x8bd3,	// (0x00052ae9) list_double_number_pane_g2_cp2

0xa96d,	// (0x00054883) list_double_number_pane_t1_cp2_ParamLimits

0xa96d,	// (0x00054883) list_double_number_pane_t1_cp2

0xa981,	// (0x00054897) list_double_number_pane_t2_cp2_ParamLimits

0xa981,	// (0x00054897) list_double_number_pane_t2_cp2

0xa997,	// (0x000548ad) list_double_number_pane_t3_cp2_ParamLimits

0xa997,	// (0x000548ad) list_double_number_pane_t3_cp2

0xa856,	// (0x0005476c) list_single_graphic_pane_g1_cp2_ParamLimits

0xa856,	// (0x0005476c) list_single_graphic_pane_g1_cp2

0x8c2b,	// (0x00052b41) list_single_graphic_pane_g2_cp2_ParamLimits

0x8c2b,	// (0x00052b41) list_single_graphic_pane_g2_cp2

0x8c37,	// (0x00052b4d) list_single_graphic_pane_g3_cp2

0xa82c,	// (0x00054742) list_single_graphic_pane_t1_cp2_ParamLimits

0xa82c,	// (0x00054742) list_single_graphic_pane_t1_cp2

0x8c2b,	// (0x00052b41) list_single_number_pane_g1_cp2_ParamLimits

0x8c2b,	// (0x00052b41) list_single_number_pane_g1_cp2

0x8c37,	// (0x00052b4d) list_single_number_pane_g2_cp2

0xa82c,	// (0x00054742) list_single_number_pane_t1_cp2_ParamLimits

0xa82c,	// (0x00054742) list_single_number_pane_t1_cp2

0xa842,	// (0x00054758) list_single_number_pane_t2_cp2_ParamLimits

0xa842,	// (0x00054758) list_single_number_pane_t2_cp2

0x8a40,	// (0x00052956) list_double2_pane_g1_cp2_ParamLimits

0x8a40,	// (0x00052956) list_double2_pane_g1_cp2

0x8a51,	// (0x00052967) list_double2_pane_g2_cp2

0x8bab,	// (0x00052ac1) list_double2_pane_t1_cp2_ParamLimits

0x8bab,	// (0x00052ac1) list_double2_pane_t1_cp2

0x8bc1,	// (0x00052ad7) list_double2_pane_t2_cp2_ParamLimits

0x8bc1,	// (0x00052ad7) list_double2_pane_t2_cp2

0x86c4,	// (0x000525da) list_double_pane_g1_cp2_ParamLimits

0x86c4,	// (0x000525da) list_double_pane_g1_cp2

0x8bd3,	// (0x00052ae9) list_double_pane_g2_cp2

0x8bdb,	// (0x00052af1) list_double_pane_t1_cp2_ParamLimits

0x8bdb,	// (0x00052af1) list_double_pane_t1_cp2

0x8bf1,	// (0x00052b07) list_double_pane_t2_cp2_ParamLimits

0x8bf1,	// (0x00052b07) list_double_pane_t2_cp2

0x8c1b,	// (0x00052b31) list_single_pane_cp2_g3

0x8c2b,	// (0x00052b41) list_single_pane_g1_cp2_ParamLimits

0x8c2b,	// (0x00052b41) list_single_pane_g1_cp2

0x8c37,	// (0x00052b4d) list_single_pane_g2_cp2

0x8c3f,	// (0x00052b55) list_single_pane_t1_cp2_ParamLimits

0x8c3f,	// (0x00052b55) list_single_pane_t1_cp2

0x8c57,	// (0x00052b6d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8c57,	// (0x00052b6d) list_single_large_graphic_pane_g1_cp2

0x8c63,	// (0x00052b79) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8c63,	// (0x00052b79) list_single_large_graphic_pane_g2_cp2

0x8c6f,	// (0x00052b85) list_single_large_graphic_pane_g3_cp2

0x8c77,	// (0x00052b8d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8c77,	// (0x00052b8d) list_single_large_graphic_pane_g4_cp1

0x8c91,	// (0x00052ba7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8c91,	// (0x00052ba7) list_single_large_graphic_pane_t1_cp2

0xa7f8,	// (0x0005470e) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa7f8,	// (0x0005470e) list_single_graphic_heading_pane_g1_cp2

0xa7c5,	// (0x000546db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa7c5,	// (0x000546db) list_single_graphic_heading_pane_g4_cp2

0x8c37,	// (0x00052b4d) list_single_graphic_heading_pane_g5_cp2

0xa804,	// (0x0005471a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa804,	// (0x0005471a) list_single_graphic_heading_pane_t1_cp2

0xa81a,	// (0x00054730) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa81a,	// (0x00054730) list_single_graphic_heading_pane_t2_cp2

0xa7b9,	// (0x000546cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa7b9,	// (0x000546cf) list_single_2graphic_pane_g1_cp2

0xa7c5,	// (0x000546db) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa7c5,	// (0x000546db) list_single_2graphic_pane_g2_cp2

0x8c37,	// (0x00052b4d) list_single_2graphic_pane_g3_cp2

0xa7d6,	// (0x000546ec) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa7d6,	// (0x000546ec) list_single_2graphic_pane_g4_cp2

0xa7e2,	// (0x000546f8) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa7e2,	// (0x000546f8) list_single_2graphic_pane_t1_cp2

0x7759,	// (0x0005166f) list_highlight_pane_g10_cp1

0xa382,	// (0x00054298) list_highlight_pane_g1_cp1

0xa38a,	// (0x000542a0) list_highlight_pane_g2_cp1

0xa392,	// (0x000542a8) list_highlight_pane_g3_cp1

0xa39a,	// (0x000542b0) list_highlight_pane_g4_cp1

0xa3a2,	// (0x000542b8) list_highlight_pane_g5_cp1

0xa3aa,	// (0x000542c0) list_highlight_pane_g6_cp1

0xa3b2,	// (0x000542c8) list_highlight_pane_g7_cp1

0xa3ba,	// (0x000542d0) list_highlight_pane_g8_cp1

0xa3c2,	// (0x000542d8) list_highlight_pane_g9_cp1

0xa2a2,	// (0x000541b8) form_field_slider_pane_t3

0xa2b0,	// (0x000541c6) form_field_slider_pane_t4

0xa2be,	// (0x000541d4) slider_form_pane_ParamLimits

0xa2be,	// (0x000541d4) slider_form_pane

0x7763,	// (0x00051679) control_abbreviations

0x7763,	// (0x00051679) control_conventions

0x7763,	// (0x00051679) control_definitions

0x7763,	// (0x00051679) format_table_attribute

0xaaa2,	// (0x000549b8) bg_popup_preview_window_pane_g9

0x7763,	// (0x00051679) format_table_data2

0x7763,	// (0x00051679) format_table_data3

0x7763,	// (0x00051679) format_table_data_example

0x0008,

0x7763,	// (0x00051679) intro_purpose

0xf905,	// (0x0005981b) bg_popup_preview_window_pane_g

0x7763,	// (0x00051679) texts_category

0x7763,	// (0x00051679) texts_graphics

0x8ca7,	// (0x00052bbd) text_digital

0x8cb6,	// (0x00052bcc) text_primary

0x8cc5,	// (0x00052bdb) text_primary_small

0x8cd4,	// (0x00052bea) text_secondary

0x8ce3,	// (0x00052bf9) text_title

0xb1ae,	// (0x000550c4) bg_passive_tab_pane_g1_cp3_srt

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp3_srt

0xb1b7,	// (0x000550cd) bg_passive_tab_pane_g3_cp3_srt

0x7843,	// (0x00051759) bg_active_tab_pane_cp3_srt_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp3_srt

0xb1c0,	// (0x000550d6) tabs_4_active_pane_srt_g1

0xb1c8,	// (0x000550de) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c8,	// (0x000550de) tabs_4_active_pane_srt_t1

0xb1ae,	// (0x000550c4) bg_active_tab_pane_g1_cp3_copy1

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp3_copy1

0xb1b7,	// (0x000550cd) bg_active_tab_pane_g3_cp3_copy1

0x7843,	// (0x00051759) tabs_2_long_active_pane_srt_ParamLimits

0x7843,	// (0x00051759) tabs_2_long_active_pane_srt

0x7843,	// (0x00051759) tabs_2_long_passive_pane_srt_ParamLimits

0x7843,	// (0x00051759) tabs_2_long_passive_pane_srt

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp4_srt

0xaee6,	// (0x00054dfc) bg_passive_tab_pane_g1_cp4_srt

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp4_srt

0xaeef,	// (0x00054e05) bg_passive_tab_pane_g3_cp4_srt

0x827c,	// (0x00052192) bg_active_tab_pane_cp4_srt_ParamLimits

0x827c,	// (0x00052192) bg_active_tab_pane_cp4_srt

0xaef8,	// (0x00054e0e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xaef8,	// (0x00054e0e) tabs_2_long_active_pane_srt_t1

0xaee6,	// (0x00054dfc) bg_active_tab_pane_g1_cp4_srt

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp4_srt

0xaeef,	// (0x00054e05) bg_active_tab_pane_g3_cp4_srt

0x7abe,	// (0x000519d4) tabs_3_long_active_pane_srt_ParamLimits

0x7abe,	// (0x000519d4) tabs_3_long_active_pane_srt

0x7abe,	// (0x000519d4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7abe,	// (0x000519d4) tabs_3_long_passive_pane_cp_srt

0x7abe,	// (0x000519d4) tabs_3_long_passive_pane_srt_ParamLimits

0x7abe,	// (0x000519d4) tabs_3_long_passive_pane_srt

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp5_srt

0x89d5,	// (0x000528eb) bg_passive_tab_pane_g1_cp5_srt

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp5_srt

0x89de,	// (0x000528f4) bg_passive_tab_pane_g3_cp5_srt

0x827c,	// (0x00052192) bg_active_tab_pane_cp5_srt_ParamLimits

0x827c,	// (0x00052192) bg_active_tab_pane_cp5_srt

0xaed4,	// (0x00054dea) tabs_3_long_active_pane_srt_t1_ParamLimits

0xaed4,	// (0x00054dea) tabs_3_long_active_pane_srt_t1

0x89d5,	// (0x000528eb) bg_active_tab_pane_g1_cp5_srt

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp5_srt

0x89de,	// (0x000528f4) bg_active_tab_pane_g3_cp5_srt

0xaec6,	// (0x00054ddc) navi_text_pane_srt_t1

0xaebe,	// (0x00054dd4) navi_icon_pane_srt_g1

0x8ed8,	// (0x00052dee) midp_editing_number_pane_srt

0x8cf2,	// (0x00052c08) midp_ticker_pane_srt

0x8ee0,	// (0x00052df6) midp_ticker_pane_srt_g1

0x8ee8,	// (0x00052dfe) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x000596a5) midp_ticker_pane_srt_g

0x8ef0,	// (0x00052e06) midp_ticker_pane_srt_t1

0xaeaf,	// (0x00054dc5) midp_editing_number_pane_t1_copy1

0x8cfa,	// (0x00052c10) listscroll_midp_pane

0x8cfa,	// (0x00052c10) midp_form_pane

0x8d68,	// (0x00052c7e) midp_info_popup_window_ParamLimits

0x8d68,	// (0x00052c7e) midp_info_popup_window

0x8167,	// (0x0005207d) bg_popup_sub_pane_cp50_ParamLimits

0x8167,	// (0x0005207d) bg_popup_sub_pane_cp50

0x9fba,	// (0x00053ed0) listscroll_midp_info_pane_ParamLimits

0x9fba,	// (0x00053ed0) listscroll_midp_info_pane

0x9fa2,	// (0x00053eb8) listscroll_form_midp_pane_ParamLimits

0x9fa2,	// (0x00053eb8) listscroll_form_midp_pane

0x9fae,	// (0x00053ec4) scroll_bar_cp050

0x9f82,	// (0x00053e98) list_midp_pane

0xbbca,	// (0x00055ae0) signal_pane_g2_cp

0x9ebc,	// (0x00053dd2) listscroll_midp_info_pane_t1_ParamLimits

0x9ebc,	// (0x00053dd2) listscroll_midp_info_pane_t1

0x9ed4,	// (0x00053dea) listscroll_midp_info_pane_t2_ParamLimits

0x9ed4,	// (0x00053dea) listscroll_midp_info_pane_t2

0x9f12,	// (0x00053e28) listscroll_midp_info_pane_t3_ParamLimits

0x9f12,	// (0x00053e28) listscroll_midp_info_pane_t3

0x9f4c,	// (0x00053e62) listscroll_midp_info_pane_t4_ParamLimits

0x9f4c,	// (0x00053e62) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x00059756) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x00059756) listscroll_midp_info_pane_t

0x8229,	// (0x0005213f) scroll_pane_cp21

0x9e5a,	// (0x00053d70) form_midp_field_choice_group_pane

0x9e63,	// (0x00053d79) form_midp_field_text_pane

0x9ea2,	// (0x00053db8) form_midp_field_time_pane

0x9eaa,	// (0x00053dc0) form_midp_gauge_slider_pane

0x9eb3,	// (0x00053dc9) form_midp_gauge_wait_pane

0x7763,	// (0x00051679) form_midp_image_pane

0x6fe6,	// (0x00050efc) list_single_midp_pane_ParamLimits

0x6fe6,	// (0x00050efc) list_single_midp_pane

0x9e06,	// (0x00053d1c) form_midp_field_text_pane_t1

0x9bf8,	// (0x00053b0e) input_focus_pane_cp050

0x9e49,	// (0x00053d5f) list_midp_form_text_pane

0x9dd5,	// (0x00053ceb) form_midp_field_choice_group_pane_t1

0x9de3,	// (0x00053cf9) input_focus_pane_cp051

0x9df7,	// (0x00053d0d) list_midp_choice_pane

0x7763,	// (0x00051679) status_idle_pane

0x9db9,	// (0x00053ccf) form_midp_field_time_pane_t1

0x7759,	// (0x0005166f) wait_anim_pane_g2_copy1

0x9dc7,	// (0x00053cdd) form_midp_field_time_pane_t2

0x0001,

0x8e16,	// (0x00052d2c) aid_navinavi_width_2_pane

0xf83b,	// (0x00059751) form_midp_field_time_pane_t

0x7763,	// (0x00051679) input_focus_pane_cp052

0x7763,	// (0x00051679) bg_input_focus_pane_cp040

0x9d79,	// (0x00053c8f) form_midp_gauge_slider_pane_t1

0x9d87,	// (0x00053c9d) form_midp_gauge_slider_pane_t2

0x9d95,	// (0x00053cab) form_midp_gauge_slider_pane_t3

0x9da3,	// (0x00053cb9) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x00059748) form_midp_gauge_slider_pane_t

0x9db1,	// (0x00053cc7) form_midp_slider_pane

0x7843,	// (0x00051759) bg_input_focus_pane_cp041_ParamLimits

0x7843,	// (0x00051759) bg_input_focus_pane_cp041

0x9d46,	// (0x00053c5c) form_midp_gauge_wait_pane_t1_ParamLimits

0x9d46,	// (0x00053c5c) form_midp_gauge_wait_pane_t1

0x9d58,	// (0x00053c6e) form_midp_gauge_wait_pane_t2_ParamLimits

0x9d58,	// (0x00053c6e) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x00059743) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x00059743) form_midp_gauge_wait_pane_t

0x9d6a,	// (0x00053c80) form_midp_wait_pane_ParamLimits

0x9d6a,	// (0x00053c80) form_midp_wait_pane

0x9d10,	// (0x00053c26) form_midp_image_pane_g1

0x9d19,	// (0x00053c2f) form_midp_image_pane_t1

0x9d28,	// (0x00053c3e) form_midp_image_pane_t2

0x9d37,	// (0x00053c4d) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0005973c) form_midp_image_pane_t

0x9d07,	// (0x00053c1d) list_single_midp_pane_g1

0x6fd7,	// (0x00050eed) list_single_midp_pane_t1

0x9cdf,	// (0x00053bf5) list_midp_form_item_pane_ParamLimits

0x9cdf,	// (0x00053bf5) list_midp_form_item_pane

0x8dbe,	// (0x00052cd4) list_midp_form_item_pane_t1

0x8dcd,	// (0x00052ce3) midp_ticker_pane_g1

0x8dd9,	// (0x00052cef) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0005968b) midp_ticker_pane_g

0x8de5,	// (0x00052cfb) midp_ticker_pane_t1

0xb100,	// (0x00055016) midp_editing_number_pane_t1

0xb0de,	// (0x00054ff4) midp_editing_number_pane

0xb0ed,	// (0x00055003) midp_ticker_pane

0xae9f,	// (0x00054db5) ai_message_heading_pane

0x7763,	// (0x00051679) bg_popup_window_pane_cp14

0xaea7,	// (0x00054dbd) listscroll_ai_message_pane

0xae29,	// (0x00054d3f) ai_message_heading_pane_g1_ParamLimits

0xae29,	// (0x00054d3f) ai_message_heading_pane_g1

0xae35,	// (0x00054d4b) ai_message_heading_pane_g2_ParamLimits

0xae35,	// (0x00054d4b) ai_message_heading_pane_g2

0xae41,	// (0x00054d57) ai_message_heading_pane_g3_ParamLimits

0xae41,	// (0x00054d57) ai_message_heading_pane_g3

0xae4d,	// (0x00054d63) ai_message_heading_pane_g4_ParamLimits

0xae4d,	// (0x00054d63) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0005987d) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0005987d) ai_message_heading_pane_g

0xae59,	// (0x00054d6f) ai_message_heading_pane_t1_ParamLimits

0xae59,	// (0x00054d6f) ai_message_heading_pane_t1

0xae73,	// (0x00054d89) ai_message_heading_pane_t2_ParamLimits

0xae73,	// (0x00054d89) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x00059886) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x00059886) ai_message_heading_pane_t

0xae85,	// (0x00054d9b) bg_popup_heading_pane_cp1_ParamLimits

0xae85,	// (0x00054d9b) bg_popup_heading_pane_cp1

0xae17,	// (0x00054d2d) list_ai_message_pane_ParamLimits

0xae17,	// (0x00054d2d) list_ai_message_pane

0x8229,	// (0x0005213f) scroll_pane_cp10

0xadb3,	// (0x00054cc9) list_ai_message_pane_g1

0xadbb,	// (0x00054cd1) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0005985a) list_ai_message_pane_g

0xadc3,	// (0x00054cd9) list_ai_message_pane_t1_ParamLimits

0xadc3,	// (0x00054cd9) list_ai_message_pane_t1

0xadd8,	// (0x00054cee) list_ai_message_pane_t2_ParamLimits

0xadd8,	// (0x00054cee) list_ai_message_pane_t2

0xaded,	// (0x00054d03) list_ai_message_pane_t3_ParamLimits

0xaded,	// (0x00054d03) list_ai_message_pane_t3

0xae02,	// (0x00054d18) list_ai_message_pane_t4_ParamLimits

0xae02,	// (0x00054d18) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0005985f) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0005985f) list_ai_message_pane_t

0xad9e,	// (0x00054cb4) cell_ai_soft_ind_pane_ParamLimits

0xad9e,	// (0x00054cb4) cell_ai_soft_ind_pane

0x8df7,	// (0x00052d0d) cell_ai_soft_ind_pane_g1_ParamLimits

0x8df7,	// (0x00052d0d) cell_ai_soft_ind_pane_g1

0x7763,	// (0x00051679) grid_highlight_cp1

0x8e04,	// (0x00052d1a) text_secondary_cp56_ParamLimits

0x8e04,	// (0x00052d1a) text_secondary_cp56

0xad73,	// (0x00054c89) example_general_pane_ParamLimits

0xad73,	// (0x00054c89) example_general_pane

0xad7f,	// (0x00054c95) example_parent_pane_g1_ParamLimits

0xad7f,	// (0x00054c95) example_parent_pane_g1

0xad8b,	// (0x00054ca1) example_parent_pane_t1_ParamLimits

0xad8b,	// (0x00054ca1) example_parent_pane_t1

0x93fb,	// (0x00053311) popup_preview_text_window_ParamLimits

0x93fb,	// (0x00053311) popup_preview_text_window

0x8c23,	// (0x00052b39) list_single_pane_cp2_g4

0x7b74,	// (0x00051a8a) bg_popup_preview_window_pane_ParamLimits

0x7b74,	// (0x00051a8a) bg_popup_preview_window_pane

0xaaaa,	// (0x000549c0) popup_preview_text_window_t1_ParamLimits

0xaaaa,	// (0x000549c0) popup_preview_text_window_t1

0xaac8,	// (0x000549de) popup_preview_text_window_t2_ParamLimits

0xaac8,	// (0x000549de) popup_preview_text_window_t2

0xab11,	// (0x00054a27) popup_preview_text_window_t3_ParamLimits

0xab11,	// (0x00054a27) popup_preview_text_window_t3

0xab56,	// (0x00054a6c) popup_preview_text_window_t4_ParamLimits

0xab56,	// (0x00054a6c) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0005982e) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0005982e) popup_preview_text_window_t

0xabd4,	// (0x00054aea) scroll_pane_cp11

0x9b08,	// (0x00053a1e) bg_popup_preview_window_pane_g1

0xaa6a,	// (0x00054980) bg_popup_preview_window_pane_g2

0xaa72,	// (0x00054988) bg_popup_preview_window_pane_g3

0xaa7a,	// (0x00054990) bg_popup_preview_window_pane_g4

0xaa82,	// (0x00054998) bg_popup_preview_window_pane_g5

0xaa8a,	// (0x000549a0) bg_popup_preview_window_pane_g6

0xaa92,	// (0x000549a8) bg_popup_preview_window_pane_g7

0xaa9a,	// (0x000549b0) bg_popup_preview_window_pane_g8

0x4b7d,	// (0x0004ea93) aid_popup_width_pane

0x93d9,	// (0x000532ef) popup_midp_note_alarm_window_ParamLimits

0x93d9,	// (0x000532ef) popup_midp_note_alarm_window

0x80a3,	// (0x00051fb9) data_form_pane_ParamLimits

0x556f,	// (0x0004f485) form_field_data_pane_g1

0x5579,	// (0x0004f48f) form_field_data_pane_t1_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_ParamLimits

0x80bd,	// (0x00051fd3) data_form_wide_pane_ParamLimits

0x5591,	// (0x0004f4a7) form_field_data_wide_pane_g1

0x559d,	// (0x0004f4b3) form_field_data_wide_pane_t1_ParamLimits

0x7e20,	// (0x00051d36) input_focus_pane_cp6_ParamLimits

0x81d6,	// (0x000520ec) input_popup_find_pane_g1_ParamLimits

0x81d6,	// (0x000520ec) input_popup_find_pane_g1

0x5815,	// (0x0004f72b) aid_navi_side_left_pane

0x582a,	// (0x0004f740) aid_navi_side_right_pane

0xa47d,	// (0x00054393) bg_popup_window_pane_cp30_ParamLimits

0xa47d,	// (0x00054393) bg_popup_window_pane_cp30

0xa4f7,	// (0x0005440d) popup_midp_note_alarm_window_g1_ParamLimits

0xa4f7,	// (0x0005440d) popup_midp_note_alarm_window_g1

0xa527,	// (0x0005443d) popup_midp_note_alarm_window_t1_ParamLimits

0xa527,	// (0x0005443d) popup_midp_note_alarm_window_t1

0xa5c8,	// (0x000544de) popup_midp_note_alarm_window_t2_ParamLimits

0xa5c8,	// (0x000544de) popup_midp_note_alarm_window_t2

0xa685,	// (0x0005459b) popup_midp_note_alarm_window_t3_ParamLimits

0xa685,	// (0x0005459b) popup_midp_note_alarm_window_t3

0xa6b7,	// (0x000545cd) popup_midp_note_alarm_window_t4_ParamLimits

0xa6b7,	// (0x000545cd) popup_midp_note_alarm_window_t4

0xa6dd,	// (0x000545f3) popup_midp_note_alarm_window_t5_ParamLimits

0xa6dd,	// (0x000545f3) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x000597cb) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x000597cb) popup_midp_note_alarm_window_t

0xa789,	// (0x0005469f) wait_bar_pane_cp1_ParamLimits

0xa789,	// (0x0005469f) wait_bar_pane_cp1

0x7763,	// (0x00051679) wait_anim_pane_copy1

0x7763,	// (0x00051679) wait_border_pane_copy1

0xa163,	// (0x00054079) wait_border_pane_g1_copy1

0x55b7,	// (0x0004f4cd) form_field_popup_pane_g1

0x55bf,	// (0x0004f4d5) form_field_popup_pane_t1_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_cp7_ParamLimits

0x80e9,	// (0x00051fff) list_form_pane_ParamLimits

0x55d7,	// (0x0004f4ed) form_field_popup_wide_pane_g1

0x55df,	// (0x0004f4f5) form_field_popup_wide_pane_t1_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_cp8_ParamLimits

0x80f5,	// (0x0005200b) list_form_wide_pane_ParamLimits

0xb23a,	// (0x00055150) aid_size_cell_graphic_pane

0x5669,	// (0x0004f57f) data_form_pane_t1_ParamLimits

0x7039,	// (0x00050f4f) data_form_wide_pane_t1_ParamLimits

0x96dc,	// (0x000535f2) bg_status_flat_pane

0x77a3,	// (0x000516b9) title_pane_t1_ParamLimits

0x780b,	// (0x00051721) title_pane_t2_ParamLimits

0x7831,	// (0x00051747) title_pane_t3_ParamLimits

0xf573,	// (0x00059489) title_pane_t_ParamLimits

0x86aa,	// (0x000525c0) level_1_signal_ParamLimits

0x86b7,	// (0x000525cd) level_2_signal_ParamLimits

0x86d0,	// (0x000525e6) level_3_signal_ParamLimits

0x86dd,	// (0x000525f3) level_4_signal_ParamLimits

0x86ea,	// (0x00052600) level_5_signal_ParamLimits

0x86f7,	// (0x0005260d) level_6_signal_ParamLimits

0x8704,	// (0x0005261a) level_7_signal_ParamLimits

0x86aa,	// (0x000525c0) level_1_battery_ParamLimits

0x86b7,	// (0x000525cd) level_2_battery_ParamLimits

0x86d0,	// (0x000525e6) level_3_battery_ParamLimits

0x86dd,	// (0x000525f3) level_4_battery_ParamLimits

0x86ea,	// (0x00052600) level_5_battery_ParamLimits

0x86f7,	// (0x0005260d) level_6_battery_ParamLimits

0x8704,	// (0x0005261a) level_7_battery_ParamLimits

0xa382,	// (0x00054298) bg_status_flat_pane_g1

0xa38a,	// (0x000542a0) bg_status_flat_pane_g2

0xa392,	// (0x000542a8) bg_status_flat_pane_g3

0xa39a,	// (0x000542b0) bg_status_flat_pane_g4

0xa3a2,	// (0x000542b8) bg_status_flat_pane_g5

0xa3aa,	// (0x000542c0) bg_status_flat_pane_g6

0xa3b2,	// (0x000542c8) bg_status_flat_pane_g7

0x7859,	// (0x0005176f) tabs_3_active_pane_t1_ParamLimits

0x7859,	// (0x0005176f) tabs_3_passive_pane_t1_ParamLimits

0x7873,	// (0x00051789) tabs_4_active_pane_t1_ParamLimits

0x7873,	// (0x00051789) tabs_4_1_passive_pane_t1_ParamLimits

0x826a,	// (0x00052180) tabs_2_active_pane_t1_ParamLimits

0x826a,	// (0x00052180) tabs_2_passive_pane_t1_ParamLimits

0x827c,	// (0x00052192) bg_active_tab_pane_cp4_ParamLimits

0x828a,	// (0x000521a0) tabs_2_long_active_pane_t1_ParamLimits

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp4_ParamLimits

0x5d84,	// (0x0004fc9a) list_single_midp_graphic_pane_t1_ParamLimits

0x827c,	// (0x00052192) bg_active_tab_pane_cp5_ParamLimits

0x82a9,	// (0x000521bf) tabs_3_long_active_pane_t1_ParamLimits

0x829d,	// (0x000521b3) bg_passive_tab_pane_cp5_ParamLimits

0x5d84,	// (0x0004fc9a) list_single_midp_graphic_pane_t1

0x96dc,	// (0x000535f2) bg_status_flat_pane_ParamLimits

0x979f,	// (0x000536b5) indicator_pane_cp2_ParamLimits

0x979f,	// (0x000536b5) indicator_pane_cp2

0x98c3,	// (0x000537d9) navi_pane_srt_ParamLimits

0x98c3,	// (0x000537d9) navi_pane_srt

0x98e7,	// (0x000537fd) popup_clock_digital_analogue_window_cp1

0x7920,	// (0x00051836) indicator_pane_t1

0x8cf2,	// (0x00052c08) copy_highlight_pane

0x8cf2,	// (0x00052c08) cursor_graphics_pane

0x8cf2,	// (0x00052c08) graphic_within_text_pane

0x8cf2,	// (0x00052c08) link_highlight_pane

0xab97,	// (0x00054aad) popup_preview_text_window_t5_ParamLimits

0xab97,	// (0x00054aad) popup_preview_text_window_t5

0x8e1e,	// (0x00052d34) cursor_digital_pane

0x8e1e,	// (0x00052d34) cursor_primary_pane

0x8e2f,	// (0x00052d45) cursor_primary_small_pane

0x8e37,	// (0x00052d4d) cursor_secondary_pane

0x8e3f,	// (0x00052d55) cursor_title_pane

0x8e1e,	// (0x00052d34) link_highlight_digital_pane

0x8e26,	// (0x00052d3c) link_highlight_primary_pane

0x8e2f,	// (0x00052d45) link_highlight_primary_small_pane

0x8e37,	// (0x00052d4d) link_highlight_secondary_pane

0x8e3f,	// (0x00052d55) link_highlight_title_pane

0x8e1e,	// (0x00052d34) copy_highlight_digital_pane

0x8e1e,	// (0x00052d34) copy_highlight_primary_pane

0x8e2f,	// (0x00052d45) copy_highlight_primary_small_pane

0x8e37,	// (0x00052d4d) copy_highlight_secondary_pane

0x8e3f,	// (0x00052d55) copy_highlight_title_pane

0x8e37,	// (0x00052d4d) graphic_text_digital_pane

0xa420,	// (0x00054336) graphic_text_primary_pane

0xa429,	// (0x0005433f) graphic_text_primary_small_pane

0x8e2f,	// (0x00052d45) graphic_text_secondary_pane

0x8e1e,	// (0x00052d34) graphic_text_title_pane

0x8e47,	// (0x00052d5d) cursor_primary_pane_g1

0xa412,	// (0x00054328) cursor_text_primary_t1

0xa3fa,	// (0x00054310) cursor_primary_small_pane_g1

0xa404,	// (0x0005431a) cursor_text_primary_small_t1

0xa3e2,	// (0x000542f8) cursor_primary_small_pane_g1_copy1

0xa3ec,	// (0x00054302) cursor_text_primary_small_t1_copy1

0xa3ca,	// (0x000542e0) cursor_text_title_t1

0xa3d8,	// (0x000542ee) cursor_title_pane_g1

0x8e47,	// (0x00052d5d) cursor_digital_pane_g1

0x8e51,	// (0x00052d67) cursor_text_digital_t1

0x8e98,	// (0x00052dae) link_highlight_primary_pane_g1

0xa373,	// (0x00054289) link_highlight_primary_pane_t1

0x8e5f,	// (0x00052d75) link_highlight_primary_small_pane_g1

0x8e89,	// (0x00052d9f) link_highlight_primary_small_pane_t1

0x8e98,	// (0x00052dae) link_highlight_secondary_pane_g1

0x8ea0,	// (0x00052db6) link_highlight_secondary_pane_t1

0xa2e7,	// (0x000541fd) link_highlight_title_pane_g1

0xa2ef,	// (0x00054205) link_highlight_title_pane_t1

0xa2d0,	// (0x000541e6) link_highlight_digital_pane_g1

0xa2d8,	// (0x000541ee) link_highlight_digital_pane_t1

0xa1a8,	// (0x000540be) copy_highlight_primary_pane_g1

0xa1b0,	// (0x000540c6) copy_highlight_primary_pane_t1

0xa182,	// (0x00054098) copy_highlight_primary_small_pane_g1

0xa199,	// (0x000540af) copy_highlight_primary_small_pane_t1

0x8eaf,	// (0x00052dc5) copy_highlight_secondary_pane_g1

0x8eb7,	// (0x00052dcd) copy_highlight_secondary_pane_t1

0xa182,	// (0x00054098) copy_highlight_title_pane_g1

0xa18a,	// (0x000540a0) copy_highlight_title_pane_t1

0xa1a8,	// (0x000540be) copy_highlight_digital_pane_g1

0xb404,	// (0x0005531a) copy_highlight_digital_pane_t1

0xb358,	// (0x0005526e) graphic_text_primary_pane_g1

0xb3e8,	// (0x000552fe) graphic_text_primary_pane_t1

0xb3f6,	// (0x0005530c) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x000598fa) graphic_text_primary_pane_t

0xb3c4,	// (0x000552da) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x000552e2) graphic_text_primary_small_pane_t1

0xb3da,	// (0x000552f0) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x000598f5) graphic_text_primary_small_pane_t

0xb3a0,	// (0x000552b6) graphic_text_secondary_pane_g1

0xb3a8,	// (0x000552be) graphic_text_secondary_pane_t1

0xb3b6,	// (0x000552cc) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x000598f0) graphic_text_secondary_pane_t

0xb37c,	// (0x00055292) graphic_text_title_pane_g1

0xb384,	// (0x0005529a) graphic_text_title_pane_t1

0xb392,	// (0x000552a8) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x000598eb) graphic_text_title_pane_t

0xb358,	// (0x0005526e) graphic_text_digital_pane_g1

0xb360,	// (0x00055276) graphic_text_digital_pane_t1

0xb36e,	// (0x00055284) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x000598e6) graphic_text_digital_pane_t

0x7843,	// (0x00051759) navi_icon_pane_srt_ParamLimits

0x7843,	// (0x00051759) navi_icon_pane_srt

0x7763,	// (0x00051679) navi_midp_pane_srt

0x7763,	// (0x00051679) navi_navi_pane_srt

0x7843,	// (0x00051759) navi_text_pane_srt_ParamLimits

0x7843,	// (0x00051759) navi_text_pane_srt

0xb323,	// (0x00055239) navi_navi_icon_text_pane_srt

0xb32b,	// (0x00055241) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x00055241) navi_navi_pane_srt_g1

0xb33d,	// (0x00055253) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x00055253) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x000598e1) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x000598e1) navi_navi_pane_srt_g

0xb34f,	// (0x00055265) navi_navi_tabs_pane_srt

0xb323,	// (0x00055239) navi_navi_text_pane_srt

0xb323,	// (0x00055239) navi_navi_volume_pane_srt

0xb314,	// (0x0005522a) navi_navi_text_pane_srt_t1

0x60fe,	// (0x00050014) navi_navi_volume_pane_srt_g1

0x6106,	// (0x0005001c) volume_small_pane_srt_ParamLimits

0x6106,	// (0x0005001c) volume_small_pane_srt

0x5af5,	// (0x0004fa0b) volume_small_pane_srt_g1_ParamLimits

0x5af5,	// (0x0004fa0b) volume_small_pane_srt_g1

0x5b05,	// (0x0004fa1b) volume_small_pane_srt_g2_ParamLimits

0x5b05,	// (0x0004fa1b) volume_small_pane_srt_g2

0x5b16,	// (0x0004fa2c) volume_small_pane_srt_g3_ParamLimits

0x5b16,	// (0x0004fa2c) volume_small_pane_srt_g3

0x5b27,	// (0x0004fa3d) volume_small_pane_srt_g4_ParamLimits

0x5b27,	// (0x0004fa3d) volume_small_pane_srt_g4

0x5b38,	// (0x0004fa4e) volume_small_pane_srt_g5_ParamLimits

0x5b38,	// (0x0004fa4e) volume_small_pane_srt_g5

0x5b49,	// (0x0004fa5f) volume_small_pane_srt_g6_ParamLimits

0x5b49,	// (0x0004fa5f) volume_small_pane_srt_g6

0x5b5a,	// (0x0004fa70) volume_small_pane_srt_g7_ParamLimits

0x5b5a,	// (0x0004fa70) volume_small_pane_srt_g7

0x5b6b,	// (0x0004fa81) volume_small_pane_srt_g8_ParamLimits

0x5b6b,	// (0x0004fa81) volume_small_pane_srt_g8

0x5b7c,	// (0x0004fa92) volume_small_pane_srt_g9_ParamLimits

0x5b7c,	// (0x0004fa92) volume_small_pane_srt_g9

0x5b8d,	// (0x0004faa3) volume_small_pane_srt_g10_ParamLimits

0x5b8d,	// (0x0004faa3) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x00059690) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x00059690) volume_small_pane_srt_g

0x7c1d,	// (0x00051b33) query_popup_data_pane_cp2

0xb2fa,	// (0x00055210) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x00055210) navi_navi_icon_text_pane_srt_t1

0xa420,	// (0x00054336) navi_tabs_2_long_pane_srt

0xa420,	// (0x00054336) navi_tabs_2_pane_srt

0xa420,	// (0x00054336) navi_tabs_3_long_pane_srt

0xa420,	// (0x00054336) navi_tabs_3_pane_srt

0xa420,	// (0x00054336) navi_tabs_4_pane_srt

0x60de,	// (0x0004fff4) tabs_2_active_pane_srt_ParamLimits

0x60de,	// (0x0004fff4) tabs_2_active_pane_srt

0x60ee,	// (0x00050004) tabs_2_passive_pane_srt_ParamLimits

0x60ee,	// (0x00050004) tabs_2_passive_pane_srt

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x000551dc) bg_passive_tab_pane_g1_cp1_srt

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000551e5) bg_passive_tab_pane_g3_cp1_srt

0x7843,	// (0x00051759) bg_active_tab_pane_cp1_srt_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x000551ee) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x000551f6) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x000551f6) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x000551dc) bg_active_tab_pane_g1_cp1_srt

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x000551e5) bg_active_tab_pane_g3_cp1_srt

0x60ab,	// (0x0004ffc1) tabs_3_active_pane_srt_ParamLimits

0x60ab,	// (0x0004ffc1) tabs_3_active_pane_srt

0x60bc,	// (0x0004ffd2) tabs_3_passive_pane_cp_srt_ParamLimits

0x60bc,	// (0x0004ffd2) tabs_3_passive_pane_cp_srt

0x60cd,	// (0x0004ffe3) tabs_3_passive_pane_srt_ParamLimits

0x60cd,	// (0x0004ffe3) tabs_3_passive_pane_srt

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9072,	// (0x00052f88) bg_passive_tab_pane_cp2_srt

0x8ec6,	// (0x00052ddc) bg_passive_tab_pane_g1_cp2_srt

0x894b,	// (0x00052861) bg_passive_tab_pane_g2_cp2_srt

0x8ecf,	// (0x00052de5) bg_passive_tab_pane_g3_cp2_srt

0x7843,	// (0x00051759) bg_active_tab_pane_cp2_srt_ParamLimits

0x7843,	// (0x00051759) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x000551c2) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x000551ca) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x000551ca) tabs_3_active_pane_srt_t1

0x8ec6,	// (0x00052ddc) bg_active_tab_pane_g1_cp2_srt

0x894b,	// (0x00052861) bg_active_tab_pane_g2_cp2_srt

0x8ecf,	// (0x00052de5) bg_active_tab_pane_g3_cp2_srt

0x6063,	// (0x0004ff79) tabs_4_active_pane_srt_ParamLimits

0x6063,	// (0x0004ff79) tabs_4_active_pane_srt

0x6075,	// (0x0004ff8b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6075,	// (0x0004ff8b) tabs_4_passive_pane_cp2_srt

0x9024,	// (0x00052f3a) aid_size_cell_toolbar

0x829d,	// (0x000521b3) main_idle_act_pane_ParamLimits

0x920f,	// (0x00053125) popup_large_graphic_colour_window_ParamLimits

0x9576,	// (0x0005348c) popup_toolbar_window_ParamLimits

0x9576,	// (0x0005348c) popup_toolbar_window

0xb10f,	// (0x00055025) list_single_graphic_2heading_pane_ParamLimits

0xb10f,	// (0x00055025) list_single_graphic_2heading_pane

0x8459,	// (0x0005236f) aid_size_cell_apps_grid_lsc_pane

0x846b,	// (0x00052381) aid_size_cell_apps_grid_prt_pane

0x9072,	// (0x00052f88) bg_wml_button_pane_cp1_ParamLimits

0x9072,	// (0x00052f88) bg_wml_button_pane_cp1

0x9e06,	// (0x00053d1c) form_midp_field_text_pane_t1_ParamLimits

0x9bf8,	// (0x00053b0e) input_focus_pane_cp050_ParamLimits

0x9e49,	// (0x00053d5f) list_midp_form_text_pane_ParamLimits

0x9de3,	// (0x00053cf9) input_focus_pane_cp051_ParamLimits

0x9df7,	// (0x00053d0d) list_midp_choice_pane_ParamLimits

0x9c89,	// (0x00053b9f) list_single_2graphic_pane_cp3_ParamLimits

0x9c89,	// (0x00053b9f) list_single_2graphic_pane_cp3

0x9cad,	// (0x00053bc3) list_single_midp_graphic_pane_ParamLimits

0x9cad,	// (0x00053bc3) list_single_midp_graphic_pane

0x4b05,	// (0x0004ea1b) list_single_graphic_2heading_pane_g1_ParamLimits

0x4b05,	// (0x0004ea1b) list_single_graphic_2heading_pane_g1

0x4b11,	// (0x0004ea27) list_single_graphic_2heading_pane_g4_ParamLimits

0x4b11,	// (0x0004ea27) list_single_graphic_2heading_pane_g4

0x4b1d,	// (0x0004ea33) list_single_graphic_2heading_pane_g5_ParamLimits

0x4b1d,	// (0x0004ea33) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x000596e3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x000596e3) list_single_graphic_2heading_pane_g

0x4b29,	// (0x0004ea3f) list_single_graphic_2heading_pane_t1_ParamLimits

0x4b29,	// (0x0004ea3f) list_single_graphic_2heading_pane_t1

0x4b3d,	// (0x0004ea53) list_single_graphic_2heading_pane_t2_ParamLimits

0x4b3d,	// (0x0004ea53) list_single_graphic_2heading_pane_t2

0x4b59,	// (0x0004ea6f) list_single_graphic_2heading_pane_t3_ParamLimits

0x4b59,	// (0x0004ea6f) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x000596ea) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x000596ea) list_single_graphic_2heading_pane_t

0x9a46,	// (0x0005395c) bg_popup_sub_pane_cp2

0x9a70,	// (0x00053986) grid_toobar_pane

0x5cf3,	// (0x0004fc09) cell_toolbar_pane_ParamLimits

0x5cf3,	// (0x0004fc09) cell_toolbar_pane

0x9aac,	// (0x000539c2) cell_toolbar_pane_g1_ParamLimits

0x9aac,	// (0x000539c2) cell_toolbar_pane_g1

0x9ac0,	// (0x000539d6) cell_toolbar_pane_g2_ParamLimits

0x9ac0,	// (0x000539d6) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x000596f8) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x000596f8) cell_toolbar_pane_g

0x9ae2,	// (0x000539f8) grid_highlight_pane_cp2_ParamLimits

0x9ae2,	// (0x000539f8) grid_highlight_pane_cp2

0x9afc,	// (0x00053a12) toolbar_button_pane

0x9b08,	// (0x00053a1e) toolbar_button_pane_g1

0x9b10,	// (0x00053a26) toolbar_button_pane_g2

0x9b18,	// (0x00053a2e) toolbar_button_pane_g3

0x9b20,	// (0x00053a36) toolbar_button_pane_g4

0x9b28,	// (0x00053a3e) toolbar_button_pane_g5

0x9b30,	// (0x00053a46) toolbar_button_pane_g6

0x9b38,	// (0x00053a4e) toolbar_button_pane_g7

0x9b40,	// (0x00053a56) toolbar_button_pane_g8

0x9b48,	// (0x00053a5e) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x000596fd) toolbar_button_pane_g

0x5d2b,	// (0x0004fc41) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5d2b,	// (0x0004fc41) list_single_2graphic_pane_g1_cp3

0x5d37,	// (0x0004fc4d) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5d37,	// (0x0004fc4d) list_single_2graphic_pane_g2_cp3

0x5d48,	// (0x0004fc5e) list_single_2graphic_pane_g3_cp3

0x5d50,	// (0x0004fc66) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5d50,	// (0x0004fc66) list_single_2graphic_pane_g4_cp3

0x5d5c,	// (0x0004fc72) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5d5c,	// (0x0004fc72) list_single_2graphic_pane_t1_cp3

0x5d78,	// (0x0004fc8e) list_single_midp_graphic_pane_g2_ParamLimits

0x5d78,	// (0x0004fc8e) list_single_midp_graphic_pane_g2

0x6f4b,	// (0x00050e61) aid_zoom_text_primary

0x6f53,	// (0x00050e69) aid_zoom_text_secondary

0x8f83,	// (0x00052e99) status_small_pane_g7_ParamLimits

0x8f83,	// (0x00052e99) status_small_pane_g7

0x8fa6,	// (0x00052ebc) status_small_pane_t1_ParamLimits

0x777a,	// (0x00051690) title_pane_g2

0x0003,

0xf56a,	// (0x00059480) title_pane_g

0x7cbe,	// (0x00051bd4) aid_size_cell_colour_1_pane_ParamLimits

0x7cbe,	// (0x00051bd4) aid_size_cell_colour_1_pane

0x7cd2,	// (0x00051be8) aid_size_cell_colour_2_pane_ParamLimits

0x7cd2,	// (0x00051be8) aid_size_cell_colour_2_pane

0x7ce6,	// (0x00051bfc) aid_size_cell_colour_3_pane_ParamLimits

0x7ce6,	// (0x00051bfc) aid_size_cell_colour_3_pane

0x7cfa,	// (0x00051c10) aid_size_cell_colour_4_pane_ParamLimits

0x7cfa,	// (0x00051c10) aid_size_cell_colour_4_pane

0x5751,	// (0x0004f667) title_pane_stacon_g1_ParamLimits

0x5751,	// (0x0004f667) title_pane_stacon_g1

0xa207,	// (0x0005411d) popup_note_wait_window_g3_ParamLimits

0xa207,	// (0x0005411d) popup_note_wait_window_g3

0xa27d,	// (0x00054193) popup_note_wait_window_t5_ParamLimits

0xa27d,	// (0x00054193) popup_note_wait_window_t5

0x7763,	// (0x00051679) main_feb_china_hwr_fs_writing_pane

0x90f4,	// (0x0005300a) popup_feb_china_hwr_fs_window_ParamLimits

0x90f4,	// (0x0005300a) popup_feb_china_hwr_fs_window

0x5d9a,	// (0x0004fcb0) aid_size_cell_hwr_fs_ParamLimits

0x5d9a,	// (0x0004fcb0) aid_size_cell_hwr_fs

0x9bf8,	// (0x00053b0e) bg_popup_sub_pane_cp3_ParamLimits

0x9bf8,	// (0x00053b0e) bg_popup_sub_pane_cp3

0x5daf,	// (0x0004fcc5) grid_hwr_fs_pane_ParamLimits

0x5daf,	// (0x0004fcc5) grid_hwr_fs_pane

0x5dc7,	// (0x0004fcdd) linegrid_hwr_fs_pane_ParamLimits

0x5dc7,	// (0x0004fcdd) linegrid_hwr_fs_pane

0x5dd7,	// (0x0004fced) cell_hwr_fs_pane_ParamLimits

0x5dd7,	// (0x0004fced) cell_hwr_fs_pane

0x9c04,	// (0x00053b1a) linegrid_hwr_fs_pane_g1_ParamLimits

0x9c04,	// (0x00053b1a) linegrid_hwr_fs_pane_g1

0x9c10,	// (0x00053b26) linegrid_hwr_fs_pane_g2_ParamLimits

0x9c10,	// (0x00053b26) linegrid_hwr_fs_pane_g2

0x9c22,	// (0x00053b38) linegrid_hwr_fs_pane_g3_ParamLimits

0x9c22,	// (0x00053b38) linegrid_hwr_fs_pane_g3

0x5df9,	// (0x0004fd0f) linegrid_hwr_fs_pane_g4_ParamLimits

0x5df9,	// (0x0004fd0f) linegrid_hwr_fs_pane_g4

0x5e13,	// (0x0004fd29) linegrid_hwr_fs_pane_g5_ParamLimits

0x5e13,	// (0x0004fd29) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x00059728) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x00059728) linegrid_hwr_fs_pane_g

0x9c2e,	// (0x00053b44) cell_hwr_fs_pane_g1_ParamLimits

0x9c2e,	// (0x00053b44) cell_hwr_fs_pane_g1

0x997d,	// (0x00053893) cell_hwr_fs_pane_g2_ParamLimits

0x997d,	// (0x00053893) cell_hwr_fs_pane_g2

0x9c44,	// (0x00053b5a) cell_hwr_fs_pane_g3_ParamLimits

0x9c44,	// (0x00053b5a) cell_hwr_fs_pane_g3

0x9c51,	// (0x00053b67) cell_hwr_fs_pane_g4_ParamLimits

0x9c51,	// (0x00053b67) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x00059733) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x00059733) cell_hwr_fs_pane_g

0x5e29,	// (0x0004fd3f) cell_hwr_fs_pane_t1

0x7763,	// (0x00051679) grid_highlight_pane_cp6

0x7763,	// (0x00051679) main_idle_act2_pane

0x8210,	// (0x00052126) aid_inside_area_popup_secondary

0xa8c3,	// (0x000547d9) aid_inside_area_window_primary_ParamLimits

0xa8c3,	// (0x000547d9) aid_inside_area_window_primary

0xb413,	// (0x00055329) ai2_news_ticker_pane

0xb41b,	// (0x00055331) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x00055331) aid_size_cell_ai1_link

0xb435,	// (0x0005534b) popup_ai2_data_window_ParamLimits

0xb435,	// (0x0005534b) popup_ai2_data_window

0xb44b,	// (0x00055361) popup_ai2_link_window_ParamLimits

0xb44b,	// (0x00055361) popup_ai2_link_window

0x9bf8,	// (0x00053b0e) bg_popup_sub_pane_cp4_ParamLimits

0x9bf8,	// (0x00053b0e) bg_popup_sub_pane_cp4

0xb45f,	// (0x00055375) grid_ai2_link_pane_ParamLimits

0xb45f,	// (0x00055375) grid_ai2_link_pane

0xb476,	// (0x0005538c) popup_ai2_link_window_g1_ParamLimits

0xb476,	// (0x0005538c) popup_ai2_link_window_g1

0xb482,	// (0x00055398) popup_ai2_link_window_g2_ParamLimits

0xb482,	// (0x00055398) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x000598ff) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x000598ff) popup_ai2_link_window_g

0xb491,	// (0x000553a7) ai2_mp_button_pane

0xb499,	// (0x000553af) ai2_mp_volume_pane

0x9de3,	// (0x00053cf9) bg_popup_sub_pane_cp5_ParamLimits

0x9de3,	// (0x00053cf9) bg_popup_sub_pane_cp5

0xb4a1,	// (0x000553b7) heading_ai2_gene_pane_ParamLimits

0xb4a1,	// (0x000553b7) heading_ai2_gene_pane

0xb4ad,	// (0x000553c3) list_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x000553c3) list_ai2_gene_pane

0xb4f5,	// (0x0005540b) cell_ai2_link_pane_ParamLimits

0xb4f5,	// (0x0005540b) cell_ai2_link_pane

0xb50b,	// (0x00055421) cell_ai2_link_pane_g1

0x7763,	// (0x00051679) grid_highlight_pane_cp7

0x611b,	// (0x00050031) ai2_mp_volume_pane_g1

0xb5db,	// (0x000554f1) ai2_mp_volume_pane_g2

0xb550,	// (0x00055466) list_ai2_gene_pane_t1

0xb5e3,	// (0x000554f9) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x00059918) ai2_mp_volume_pane_g

0x6123,	// (0x00050039) volume_small_pane_cp3

0xb5eb,	// (0x00055501) aid_size_cell_ai2_button

0xb5f3,	// (0x00055509) grid_ai2_button_pane

0xb5fc,	// (0x00055512) cell_ai2_button_pane_ParamLimits

0xb5fc,	// (0x00055512) cell_ai2_button_pane

0x7759,	// (0x0005166f) cell_ai2_button_pane_g1

0x7763,	// (0x00051679) grid_highlight_pane_cp8

0xb59b,	// (0x000554b1) ai2_gene_pane_t1_ParamLimits

0xb59b,	// (0x000554b1) ai2_gene_pane_t1

0x901a,	// (0x00052f30) aid_height_parent_landscape

0xaf46,	// (0x00054e5c) aid_height_set_list

0xaf57,	// (0x00054e6d) aid_size_parent

0xb23a,	// (0x00055150) aid_size_cell_graphic_pane_ParamLimits

0xb4bd,	// (0x000553d3) popup_ai2_data_window_g1_ParamLimits

0xb4bd,	// (0x000553d3) popup_ai2_data_window_g1

0xb4c9,	// (0x000553df) ai2_news_ticker_pane_g1

0xb4d1,	// (0x000553e7) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x00059904) ai2_news_ticker_pane_g

0xb4d9,	// (0x000553ef) ai2_news_ticker_pane_t1

0xb4e7,	// (0x000553fd) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x00059909) ai2_news_ticker_pane_t

0xb514,	// (0x0005542a) heading_ai2_gene_pane_g1

0xb51c,	// (0x00055432) heading_ai2_gene_pane_t1_ParamLimits

0xb51c,	// (0x00055432) heading_ai2_gene_pane_t1

0xb531,	// (0x00055447) list_highlight_pane_cp6

0xb539,	// (0x0005544f) ai2_gene_pane_ParamLimits

0xb539,	// (0x0005544f) ai2_gene_pane

0xb55e,	// (0x00055474) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0005990e) list_ai2_gene_pane_t

0xb56c,	// (0x00055482) list_highlight_pane_cp8_ParamLimits

0xb56c,	// (0x00055482) list_highlight_pane_cp8

0xb57d,	// (0x00055493) ai2_gene_pane_g1_ParamLimits

0xb57d,	// (0x00055493) ai2_gene_pane_g1

0xb58f,	// (0x000554a5) ai2_gene_pane_g2_ParamLimits

0xb58f,	// (0x000554a5) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x00059913) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x00059913) ai2_gene_pane_g

0x8045,	// (0x00051f5b) scroll_pane_cp12

0x5cb2,	// (0x0004fbc8) control_pane_t3_ParamLimits

0x5cb2,	// (0x0004fbc8) control_pane_t3

0x8f97,	// (0x00052ead) status_small_pane_g8_ParamLimits

0x8f97,	// (0x00052ead) status_small_pane_g8

0x91da,	// (0x000530f0) popup_find_window_ParamLimits

0x93ed,	// (0x00053303) popup_note_image_window_ParamLimits

0x6f7f,	// (0x00050e95) list_double2_graphic_pane_vc_g1_ParamLimits

0x6f7f,	// (0x00050e95) list_double2_graphic_pane_vc_g1

0x9e3d,	// (0x00053d53) list_double2_graphic_pane_vc_g2_ParamLimits

0x9e3d,	// (0x00053d53) list_double2_graphic_pane_vc_g2

0x6f8b,	// (0x00050ea1) list_double2_graphic_pane_vc_g3_ParamLimits

0x6f8b,	// (0x00050ea1) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x000596f1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x000596f1) list_double2_graphic_pane_vc_g

0x6f97,	// (0x00050ead) list_double2_graphic_pane_vc_t1_ParamLimits

0x6f97,	// (0x00050ead) list_double2_graphic_pane_vc_t1

0x9e3d,	// (0x00053d53) list_single_heading_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_single_heading_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_single_heading_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_single_heading_pane_vc_g

0x6fad,	// (0x00050ec3) list_single_heading_pane_vc_t1_ParamLimits

0x6fad,	// (0x00050ec3) list_single_heading_pane_vc_t1

0x6fc3,	// (0x00050ed9) list_single_heading_pane_vc_t2_ParamLimits

0x6fc3,	// (0x00050ed9) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x00059717) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x00059717) list_single_heading_pane_vc_t

0x9b50,	// (0x00053a66) list_setting_number_pane_vc_g1_ParamLimits

0x9b50,	// (0x00053a66) list_setting_number_pane_vc_g1

0x9b5c,	// (0x00053a72) list_setting_number_pane_vc_g2_ParamLimits

0x9b5c,	// (0x00053a72) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0005971c) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0005971c) list_setting_number_pane_vc_g

0x9b68,	// (0x00053a7e) list_setting_number_pane_vc_t1_ParamLimits

0x9b68,	// (0x00053a7e) list_setting_number_pane_vc_t1

0x9b7c,	// (0x00053a92) list_setting_number_pane_vc_t2_ParamLimits

0x9b7c,	// (0x00053a92) list_setting_number_pane_vc_t2

0x9b98,	// (0x00053aae) list_setting_number_pane_vc_t3_ParamLimits

0x9b98,	// (0x00053aae) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x00059721) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x00059721) list_setting_number_pane_vc_t

0x9bbe,	// (0x00053ad4) set_value_pane_vc_ParamLimits

0x9bbe,	// (0x00053ad4) set_value_pane_vc

0xb10f,	// (0x00055025) list_double2_graphic_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double2_graphic_pane_vc

0x7097,	// (0x00050fad) list_double2_large_graphic_pane_vc_ParamLimits

0x7097,	// (0x00050fad) list_double2_large_graphic_pane_vc

0xb10f,	// (0x00055025) list_double2_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double2_pane_vc

0xb10f,	// (0x00055025) list_double_graphic_heading_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_graphic_heading_pane_vc

0xb10f,	// (0x00055025) list_double_graphic_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_graphic_pane_vc

0xb10f,	// (0x00055025) list_double_heading_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_heading_pane_vc

0x7097,	// (0x00050fad) list_double_large_graphic_pane_vc_ParamLimits

0x7097,	// (0x00050fad) list_double_large_graphic_pane_vc

0xb10f,	// (0x00055025) list_double_number_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_number_pane_vc

0xb10f,	// (0x00055025) list_double_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_pane_vc

0xb10f,	// (0x00055025) list_double_time_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_double_time_pane_vc

0xb10f,	// (0x00055025) list_setting_number_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_setting_number_pane_vc

0xb10f,	// (0x00055025) list_setting_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_setting_pane_vc

0xb10f,	// (0x00055025) list_single_graphic_heading_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_single_graphic_heading_pane_vc

0xb10f,	// (0x00055025) list_single_heading_pane_vc_ParamLimits

0xb10f,	// (0x00055025) list_single_heading_pane_vc

0x70a8,	// (0x00050fbe) list_single_number_heading_pane_vc_ParamLimits

0x70a8,	// (0x00050fbe) list_single_number_heading_pane_vc

0x6f7f,	// (0x00050e95) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x6f7f,	// (0x00050e95) list_double_graphic_heading_pane_vc_g1

0x9e3d,	// (0x00053d53) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9e3d,	// (0x00053d53) list_double_graphic_heading_pane_vc_g2

0x6f8b,	// (0x00050ea1) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6f8b,	// (0x00050ea1) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7db,	// (0x000596f1) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x000596f1) list_double_graphic_heading_pane_vc_g

0x7156,	// (0x0005106c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7156,	// (0x0005106c) list_double_graphic_heading_pane_vc_t1

0x6fad,	// (0x00050ec3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x6fad,	// (0x00050ec3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa09,	// (0x0005991f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa09,	// (0x0005991f) list_double_graphic_heading_pane_vc_t

0x9b50,	// (0x00053a66) list_setting_pane_vc_g1_ParamLimits

0x9b50,	// (0x00053a66) list_setting_pane_vc_g1

0x9b5c,	// (0x00053a72) list_setting_pane_vc_g2_ParamLimits

0x9b5c,	// (0x00053a72) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0005971c) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0005971c) list_setting_pane_vc_g

0xb834,	// (0x0005574a) list_setting_pane_vc_t1_ParamLimits

0xb834,	// (0x0005574a) list_setting_pane_vc_t1

0xb848,	// (0x0005575e) list_setting_pane_vc_t2_ParamLimits

0xb848,	// (0x0005575e) list_setting_pane_vc_t2

0x0001,

0xfa37,	// (0x0005994d) list_setting_pane_vc_t_ParamLimits

0xfa37,	// (0x0005994d) list_setting_pane_vc_t

0x9bbe,	// (0x00053ad4) set_value_pane_cp_vc_ParamLimits

0x9bbe,	// (0x00053ad4) set_value_pane_cp_vc

0x9e3d,	// (0x00053d53) list_single_number_heading_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_single_number_heading_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_single_number_heading_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_single_number_heading_pane_vc_g

0x6fad,	// (0x00050ec3) list_single_number_heading_pane_vc_t1_ParamLimits

0x6fad,	// (0x00050ec3) list_single_number_heading_pane_vc_t1

0x716a,	// (0x00051080) list_single_number_heading_pane_vc_t2_ParamLimits

0x716a,	// (0x00051080) list_single_number_heading_pane_vc_t2

0x717e,	// (0x00051094) list_single_number_heading_pane_vc_t3_ParamLimits

0x717e,	// (0x00051094) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3c,	// (0x00059952) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x00059952) list_single_number_heading_pane_vc_t

0x6f7f,	// (0x00050e95) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x6f7f,	// (0x00050e95) list_single_graphic_heading_pane_vc_g1

0x9e3d,	// (0x00053d53) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9e3d,	// (0x00053d53) list_single_graphic_heading_pane_vc_g4

0x6f8b,	// (0x00050ea1) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6f8b,	// (0x00050ea1) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x000596f1) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x000596f1) list_single_graphic_heading_pane_vc_g

0x6fad,	// (0x00050ec3) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6fad,	// (0x00050ec3) list_single_graphic_heading_pane_vc_t1

0x7190,	// (0x000510a6) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7190,	// (0x000510a6) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00059959) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00059959) list_single_graphic_heading_pane_vc_t

0x9e3d,	// (0x00053d53) list_double2_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_double2_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_double2_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_double2_pane_vc_g

0x71a4,	// (0x000510ba) list_double2_pane_vc_t1_ParamLimits

0x71a4,	// (0x000510ba) list_double2_pane_vc_t1

0x71ba,	// (0x000510d0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x71ba,	// (0x000510d0) list_double2_large_graphic_pane_vc_g1

0x71c6,	// (0x000510dc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x71c6,	// (0x000510dc) list_double2_large_graphic_pane_vc_g2

0x71d2,	// (0x000510e8) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x71d2,	// (0x000510e8) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa48,	// (0x0005995e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x0005995e) list_double2_large_graphic_pane_vc_g

0x71de,	// (0x000510f4) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x71de,	// (0x000510f4) list_double2_large_graphic_pane_vc_t1

0x71f4,	// (0x0005110a) list_double_time_pane_vc_g1_ParamLimits

0x71f4,	// (0x0005110a) list_double_time_pane_vc_g1

0x7200,	// (0x00051116) list_double_time_pane_vc_g2_ParamLimits

0x7200,	// (0x00051116) list_double_time_pane_vc_g2

0x0001,

0xfa4f,	// (0x00059965) list_double_time_pane_vc_g_ParamLimits

0xfa4f,	// (0x00059965) list_double_time_pane_vc_g

0x720c,	// (0x00051122) list_double_time_pane_vc_t1_ParamLimits

0x720c,	// (0x00051122) list_double_time_pane_vc_t1

0x7225,	// (0x0005113b) list_double_time_pane_vc_t2_ParamLimits

0x7225,	// (0x0005113b) list_double_time_pane_vc_t2

0x7265,	// (0x0005117b) list_double_time_pane_vc_t3_ParamLimits

0x7265,	// (0x0005117b) list_double_time_pane_vc_t3

0x727d,	// (0x00051193) list_double_time_pane_vc_t4_ParamLimits

0x727d,	// (0x00051193) list_double_time_pane_vc_t4

0x0003,

0xfa54,	// (0x0005996a) list_double_time_pane_vc_t_ParamLimits

0xfa54,	// (0x0005996a) list_double_time_pane_vc_t

0x9e3d,	// (0x00053d53) list_double_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_double_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_double_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_double_pane_vc_g

0x7291,	// (0x000511a7) list_double_pane_vc_t1_ParamLimits

0x7291,	// (0x000511a7) list_double_pane_vc_t1

0x72a3,	// (0x000511b9) list_double_pane_vc_t2_ParamLimits

0x72a3,	// (0x000511b9) list_double_pane_vc_t2

0x0001,

0xfa5d,	// (0x00059973) list_double_pane_vc_t_ParamLimits

0xfa5d,	// (0x00059973) list_double_pane_vc_t

0x9e3d,	// (0x00053d53) list_double_number_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_double_number_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_double_number_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_double_number_pane_vc_g

0x72bb,	// (0x000511d1) list_double_number_pane_vc_t1_ParamLimits

0x72bb,	// (0x000511d1) list_double_number_pane_vc_t1

0x72cf,	// (0x000511e5) list_double_number_pane_vc_t2_ParamLimits

0x72cf,	// (0x000511e5) list_double_number_pane_vc_t2

0x72a3,	// (0x000511b9) list_double_number_pane_vc_t3_ParamLimits

0x72a3,	// (0x000511b9) list_double_number_pane_vc_t3

0x0002,

0xfa62,	// (0x00059978) list_double_number_pane_vc_t_ParamLimits

0xfa62,	// (0x00059978) list_double_number_pane_vc_t

0x72e1,	// (0x000511f7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x72e1,	// (0x000511f7) list_double_large_graphic_pane_vc_g1

0x72ed,	// (0x00051203) list_double_large_graphic_pane_vc_g2_ParamLimits

0x72ed,	// (0x00051203) list_double_large_graphic_pane_vc_g2

0x71d2,	// (0x000510e8) list_double_large_graphic_pane_vc_g3_ParamLimits

0x71d2,	// (0x000510e8) list_double_large_graphic_pane_vc_g3

0x72fc,	// (0x00051212) list_double_large_graphic_pane_vc_g4_ParamLimits

0x72fc,	// (0x00051212) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa69,	// (0x0005997f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa69,	// (0x0005997f) list_double_large_graphic_pane_vc_g

0x7308,	// (0x0005121e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7308,	// (0x0005121e) list_double_large_graphic_pane_vc_t1

0x731a,	// (0x00051230) list_double_large_graphic_pane_vc_t2_ParamLimits

0x731a,	// (0x00051230) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa72,	// (0x00059988) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa72,	// (0x00059988) list_double_large_graphic_pane_vc_t

0x9e3d,	// (0x00053d53) list_double_heading_pane_vc_g1_ParamLimits

0x9e3d,	// (0x00053d53) list_double_heading_pane_vc_g1

0x6f8b,	// (0x00050ea1) list_double_heading_pane_vc_g2_ParamLimits

0x6f8b,	// (0x00050ea1) list_double_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x00059712) list_double_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x00059712) list_double_heading_pane_vc_g

0x7333,	// (0x00051249) list_double_heading_pane_vc_t1_ParamLimits

0x7333,	// (0x00051249) list_double_heading_pane_vc_t1

0x6fad,	// (0x00050ec3) list_double_heading_pane_vc_t2_ParamLimits

0x6fad,	// (0x00050ec3) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0005998d) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0005998d) list_double_heading_pane_vc_t

0x6f7f,	// (0x00050e95) list_double_graphic_pane_vc_g1_ParamLimits

0x6f7f,	// (0x00050e95) list_double_graphic_pane_vc_g1

0x7347,	// (0x0005125d) list_double_graphic_pane_vc_g2_ParamLimits

0x7347,	// (0x0005125d) list_double_graphic_pane_vc_g2

0x7356,	// (0x0005126c) list_double_graphic_pane_vc_g3_ParamLimits

0x7356,	// (0x0005126c) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00059992) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00059992) list_double_graphic_pane_vc_g

0x7362,	// (0x00051278) list_double_graphic_pane_vc_t1_ParamLimits

0x7362,	// (0x00051278) list_double_graphic_pane_vc_t1

0x72a3,	// (0x000511b9) list_double_graphic_pane_vc_t2_ParamLimits

0x72a3,	// (0x000511b9) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00059999) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00059999) list_double_graphic_pane_vc_t

0x4b89,	// (0x0004ea9f) aid_size_cell_fastswap

0x4b91,	// (0x0004eaa7) aid_size_cell_touch_ParamLimits

0x4b91,	// (0x0004eaa7) aid_size_cell_touch

0x4df6,	// (0x0004ed0c) popup_fast_swap_wide_window_ParamLimits

0x4df6,	// (0x0004ed0c) popup_fast_swap_wide_window

0x4f00,	// (0x0004ee16) touch_pane_ParamLimits

0x4f00,	// (0x0004ee16) touch_pane

0x809b,	// (0x00051fb1) button_value_adjust_pane_cp2

0x54bb,	// (0x0004f3d1) button_value_adjust_pane_cp4

0x54df,	// (0x0004f3f5) form_field_data_pane_cp2

0x5500,	// (0x0004f416) form_field_data_wide_pane_cp2

0x8528,	// (0x0005243e) bg_scroll_pane_ParamLimits

0x58b4,	// (0x0004f7ca) scroll_handle_pane_ParamLimits

0x58c8,	// (0x0004f7de) scroll_sc2_down_pane_ParamLimits

0x58c8,	// (0x0004f7de) scroll_sc2_down_pane

0x8559,	// (0x0005246f) scroll_sc2_up_pane_ParamLimits

0x8559,	// (0x0005246f) scroll_sc2_up_pane

0xbc9d,	// (0x00055bb3) grid_wheel_folder_pane_g1_ParamLimits

0xbc9d,	// (0x00055bb3) grid_wheel_folder_pane_g1

0x5a8d,	// (0x0004f9a3) clock_nsta_pane_cp2_ParamLimits

0x5a8d,	// (0x0004f9a3) clock_nsta_pane_cp2

0x8cfa,	// (0x00052c10) listscroll_midp_pane_ParamLimits

0x8d06,	// (0x00052c1c) midp_canvas_pane

0x9012,	// (0x00052f28) nsta_clock_indic_pane

0x9058,	// (0x00052f6e) listscroll_form_pane_vc

0x9060,	// (0x00052f76) listscroll_set_pane_vc_ParamLimits

0x9060,	// (0x00052f76) listscroll_set_pane_vc

0x96f8,	// (0x0005360e) clock_nsta_pane

0x976d,	// (0x00053683) indicator_nsta_pane

0x9a46,	// (0x0005395c) bg_popup_sub_pane_cp2_ParamLimits

0x9a5a,	// (0x00053970) find_pane_cp2_ParamLimits

0x9a5a,	// (0x00053970) find_pane_cp2

0x9a70,	// (0x00053986) grid_toobar_pane_ParamLimits

0x9bcc,	// (0x00053ae2) list_form_gen_pane_vc_ParamLimits

0x9bcc,	// (0x00053ae2) list_form_gen_pane_vc

0x9be2,	// (0x00053af8) scroll_pane_cp8_vc_ParamLimits

0x9be2,	// (0x00053af8) scroll_pane_cp8_vc

0x9c5e,	// (0x00053b74) data_form_wide_pane_vc_ParamLimits

0x9c5e,	// (0x00053b74) data_form_wide_pane_vc

0x9c6a,	// (0x00053b80) form_field_data_wide_pane_vc_g1

0x9c72,	// (0x00053b88) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c72,	// (0x00053b88) form_field_data_wide_pane_vc_t1

0x80af,	// (0x00051fc5) input_focus_pane_cp6_vc_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_cp6_vc

0x9f82,	// (0x00053e98) list_midp_pane_ParamLimits

0x9f8e,	// (0x00053ea4) scroll_pane_cp16_ParamLimits

0x9f8e,	// (0x00053ea4) scroll_pane_cp16

0x9fdc,	// (0x00053ef2) button_value_adjust_pane_ParamLimits

0x9fdc,	// (0x00053ef2) button_value_adjust_pane

0xaf69,	// (0x00054e7f) button_value_adjust_pane_cp6_ParamLimits

0xaf69,	// (0x00054e7f) button_value_adjust_pane_cp6

0xb093,	// (0x00054fa9) settings_code_pane_cp_ParamLimits

0xb093,	// (0x00054fa9) settings_code_pane_cp

0x7759,	// (0x0005166f) cell_touch_pane_g1

0x7759,	// (0x0005166f) cell_touch_pane_g2

0x0001,

0xf724,	// (0x0005963a) cell_touch_pane_g

0xb60e,	// (0x00055524) cell_touch_pane_cp_ParamLimits

0xb60e,	// (0x00055524) cell_touch_pane_cp

0xb61e,	// (0x00055534) cell_touch_pane_ParamLimits

0xb61e,	// (0x00055534) cell_touch_pane

0x7759,	// (0x0005166f) scroll_sc2_down_pane_g1

0x7759,	// (0x0005166f) scroll_sc2_up_pane_g1

0x7763,	// (0x00051679) bg_set_opt_pane_cp4_vc

0xb630,	// (0x00055546) list_set_graphic_pane_vc_g1_ParamLimits

0xb630,	// (0x00055546) list_set_graphic_pane_vc_g1

0xb63c,	// (0x00055552) list_set_graphic_pane_vc_g2_ParamLimits

0xb63c,	// (0x00055552) list_set_graphic_pane_vc_g2

0x0001,

0xfa0e,	// (0x00059924) list_set_graphic_pane_vc_g_ParamLimits

0xfa0e,	// (0x00059924) list_set_graphic_pane_vc_g

0xb648,	// (0x0005555e) text_primary_small_cp13_vc_ParamLimits

0xb648,	// (0x0005555e) text_primary_small_cp13_vc

0xb660,	// (0x00055576) list_set_graphic_pane_vc_ParamLimits

0xb660,	// (0x00055576) list_set_graphic_pane_vc

0x7763,	// (0x00051679) input_focus_pane_cp2_vc

0x7759,	// (0x0005166f) setting_code_pane_vc_g1

0xb674,	// (0x0005558a) setting_code_pane_vc_t1

0xb682,	// (0x00055598) set_text_pane_vc_t1_ParamLimits

0xb682,	// (0x00055598) set_text_pane_vc_t1

0x7763,	// (0x00051679) input_focus_pane_cp1_vc

0xb69d,	// (0x000555b3) list_set_text_pane_vc

0x7759,	// (0x0005166f) setting_text_pane_vc_g1

0x7763,	// (0x00051679) bg_set_opt_pane_cp2_vc

0xb6a7,	// (0x000555bd) setting_slider_graphic_pane_vc_g1

0xb6af,	// (0x000555c5) setting_slider_graphic_pane_vc_t1

0xb6bd,	// (0x000555d3) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa13,	// (0x00059929) setting_slider_graphic_pane_vc_t

0xb6cb,	// (0x000555e1) slider_set_pane_cp_vc

0xb6d3,	// (0x000555e9) slider_set_pane_vc_g1

0xb6dc,	// (0x000555f2) slider_set_pane_vc_g2

0x0006,

0xfa18,	// (0x0005992e) slider_set_pane_vc_g

0x8116,	// (0x0005202c) set_opt_bg_pane_g1_copy1

0x811e,	// (0x00052034) set_opt_bg_pane_g2_copy1

0xb708,	// (0x0005561e) set_opt_bg_pane_g3_copy1

0x812e,	// (0x00052044) set_opt_bg_pane_g4_copy1

0x8136,	// (0x0005204c) set_opt_bg_pane_g5_copy1

0x813e,	// (0x00052054) set_opt_bg_pane_g6_copy1

0xb712,	// (0x00055628) set_opt_bg_pane_g7_copy1

0xb71a,	// (0x00055630) set_opt_bg_pane_g8_copy1

0xb724,	// (0x0005563a) set_opt_bg_pane_g9_copy1

0x7763,	// (0x00051679) bg_set_opt_pane_cp_vc

0xb72e,	// (0x00055644) setting_slider_pane_vc_t1

0xb6af,	// (0x000555c5) setting_slider_pane_vc_t2

0xb6bd,	// (0x000555d3) setting_slider_pane_vc_t3

0x0002,

0xfa27,	// (0x0005993d) setting_slider_pane_vc_t

0xb6cb,	// (0x000555e1) slider_set_pane_vc

0x5e37,	// (0x0004fd4d) volume_set_pane_vc_g1

0x5e40,	// (0x0004fd56) volume_set_pane_vc_g2

0x5e49,	// (0x0004fd5f) volume_set_pane_vc_g3

0x5e52,	// (0x0004fd68) volume_set_pane_vc_g4

0x5e5b,	// (0x0004fd71) volume_set_pane_vc_g5

0x5e64,	// (0x0004fd7a) volume_set_pane_vc_g6

0x5e6d,	// (0x0004fd83) volume_set_pane_vc_g7

0x5e76,	// (0x0004fd8c) volume_set_pane_vc_g8

0x5e7f,	// (0x0004fd95) volume_set_pane_vc_g9

0x5e88,	// (0x0004fd9e) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x000597e2) volume_set_pane_vc_g

0xb73d,	// (0x00055653) volume_set_pane_vc

0xb745,	// (0x0005565b) button_value_adjust_pane_cp1_vc

0xb74f,	// (0x00055665) list_highlight_pane_cp2_vc

0xb758,	// (0x0005566e) list_set_pane_vc_ParamLimits

0xb758,	// (0x0005566e) list_set_pane_vc

0xb7c2,	// (0x000556d8) main_pane_set_vc_t1_ParamLimits

0xb7c2,	// (0x000556d8) main_pane_set_vc_t1

0xb7d7,	// (0x000556ed) main_pane_set_vc_t2_ParamLimits

0xb7d7,	// (0x000556ed) main_pane_set_vc_t2

0xb7e9,	// (0x000556ff) main_pane_set_vc_t3_ParamLimits

0xb7e9,	// (0x000556ff) main_pane_set_vc_t3

0xb7fd,	// (0x00055713) main_pane_set_vc_t4_ParamLimits

0xb7fd,	// (0x00055713) main_pane_set_vc_t4

0x0003,

0xfa2e,	// (0x00059944) main_pane_set_vc_t_ParamLimits

0xfa2e,	// (0x00059944) main_pane_set_vc_t

0xb811,	// (0x00055727) setting_code_pane_vc_ParamLimits

0xb811,	// (0x00055727) setting_code_pane_vc

0xb822,	// (0x00055738) setting_slider_graphic_pane_vc

0xb822,	// (0x00055738) setting_slider_pane_vc

0xb822,	// (0x00055738) setting_text_pane_vc

0xb822,	// (0x00055738) setting_volume_pane_vc

0xb82c,	// (0x00055742) scroll_pane_cp121_vc

0x8089,	// (0x00051f9f) set_content_pane_vc

0xb86a,	// (0x00055780) button_value_adjust_pane_g1

0xb873,	// (0x00055789) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0005999e) button_value_adjust_pane_g

0xb87c,	// (0x00055792) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb87c,	// (0x00055792) form_field_slider_wide_pane_vc_t1

0xb890,	// (0x000557a6) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb890,	// (0x000557a6) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8d,	// (0x000599a3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x000599a3) form_field_slider_wide_pane_vc_t

0x7abe,	// (0x000519d4) input_focus_pane_cp10_vc_ParamLimits

0x7abe,	// (0x000519d4) input_focus_pane_cp10_vc

0xb8a2,	// (0x000557b8) slider_cont_pane_cp1_vc_ParamLimits

0xb8a2,	// (0x000557b8) slider_cont_pane_cp1_vc

0xb6d3,	// (0x000555e9) slider_form_pane_g1_cp2

0xb6dc,	// (0x000555f2) slider_form_pane_g2_cp2

0xb8bb,	// (0x000557d1) form_field_slider_pane_vc_t3

0xb8c9,	// (0x000557df) form_field_slider_pane_vc_t4

0xb8d7,	// (0x000557ed) slider_form_pane_vc_ParamLimits

0xb8d7,	// (0x000557ed) slider_form_pane_vc

0xb8e4,	// (0x000557fa) form_field_slider_pane_vc_t1_ParamLimits

0xb8e4,	// (0x000557fa) form_field_slider_pane_vc_t1

0xb890,	// (0x000557a6) form_field_slider_pane_vc_t2_ParamLimits

0xb890,	// (0x000557a6) form_field_slider_pane_vc_t2

0x0001,

0xfa9d,	// (0x000599b3) form_field_slider_pane_vc_t_ParamLimits

0xfa9d,	// (0x000599b3) form_field_slider_pane_vc_t

0x7abe,	// (0x000519d4) input_focus_pane_cp9_vc_ParamLimits

0x7abe,	// (0x000519d4) input_focus_pane_cp9_vc

0xb900,	// (0x00055816) slider_cont_pane_vc_ParamLimits

0xb900,	// (0x00055816) slider_cont_pane_vc

0xb912,	// (0x00055828) list_form_graphic_pane_cp_vc_ParamLimits

0xb912,	// (0x00055828) list_form_graphic_pane_cp_vc

0x9c6a,	// (0x00053b80) form_field_popup_wide_pane_vc_g1

0xb927,	// (0x0005583d) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb927,	// (0x0005583d) form_field_popup_wide_pane_vc_t1

0x80af,	// (0x00051fc5) input_focus_pane_cp8_vc_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_cp8_vc

0xb93e,	// (0x00055854) list_form_wide_pane_vc_ParamLimits

0xb93e,	// (0x00055854) list_form_wide_pane_vc

0xb94a,	// (0x00055860) list_form_graphic_pane_vc_g1

0xb952,	// (0x00055868) list_form_graphic_pane_vc_t1_ParamLimits

0xb952,	// (0x00055868) list_form_graphic_pane_vc_t1

0x7843,	// (0x00051759) list_highlight_pane_cp5_vc_ParamLimits

0x7843,	// (0x00051759) list_highlight_pane_cp5_vc

0xb96e,	// (0x00055884) list_form_graphic_pane_vc_ParamLimits

0xb96e,	// (0x00055884) list_form_graphic_pane_vc

0x9c6a,	// (0x00053b80) form_field_popup_pane_vc_g1

0xb984,	// (0x0005589a) form_field_popup_pane_vc_t1_ParamLimits

0xb984,	// (0x0005589a) form_field_popup_pane_vc_t1

0x80af,	// (0x00051fc5) input_focus_pane_cp7_vc_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_cp7_vc

0xb99b,	// (0x000558b1) list_form_pane_vc_ParamLimits

0xb99b,	// (0x000558b1) list_form_pane_vc

0xb9a7,	// (0x000558bd) data_form_pane_vc_t1_ParamLimits

0xb9a7,	// (0x000558bd) data_form_pane_vc_t1

0x8116,	// (0x0005202c) input_focus_pane_vc_g1

0x811e,	// (0x00052034) input_focus_pane_vc_g2

0x8126,	// (0x0005203c) input_focus_pane_vc_g3

0x812e,	// (0x00052044) input_focus_pane_vc_g4

0x8136,	// (0x0005204c) input_focus_pane_vc_g5

0x813e,	// (0x00052054) input_focus_pane_vc_g6

0x8146,	// (0x0005205c) input_focus_pane_vc_g7

0x814e,	// (0x00052064) input_focus_pane_vc_g8

0x8156,	// (0x0005206c) input_focus_pane_vc_g9

0x7759,	// (0x0005166f) input_focus_pane_vc_g10

0x0009,

0xf6ad,	// (0x000595c3) input_focus_pane_vc_g

0x9c5e,	// (0x00053b74) data_form_pane_vc_ParamLimits

0x9c5e,	// (0x00053b74) data_form_pane_vc

0x9c6a,	// (0x00053b80) form_field_data_pane_vc_g1

0xb9c2,	// (0x000558d8) form_field_data_pane_vc_t1_ParamLimits

0xb9c2,	// (0x000558d8) form_field_data_pane_vc_t1

0x80af,	// (0x00051fc5) input_focus_pane_vc_ParamLimits

0x80af,	// (0x00051fc5) input_focus_pane_vc

0xb9dc,	// (0x000558f2) button_value_adjust_pane_cp3_vc

0xb9e4,	// (0x000558fa) button_value_adjust_pane_cp5_vc

0xb9ec,	// (0x00055902) form_field_data_pane_vc_ParamLimits

0xb9ec,	// (0x00055902) form_field_data_pane_vc

0xba03,	// (0x00055919) form_field_data_pane_vc_cp2

0xba0b,	// (0x00055921) form_field_data_wide_pane_vc_ParamLimits

0xba0b,	// (0x00055921) form_field_data_wide_pane_vc

0xba21,	// (0x00055937) form_field_data_wide_pane_vc_cp2

0xba29,	// (0x0005593f) form_field_popup_pane_vc_ParamLimits

0xba29,	// (0x0005593f) form_field_popup_pane_vc

0xba40,	// (0x00055956) form_field_popup_wide_pane_vc_ParamLimits

0xba40,	// (0x00055956) form_field_popup_wide_pane_vc

0xba56,	// (0x0005596c) form_field_slider_pane_vc_ParamLimits

0xba56,	// (0x0005596c) form_field_slider_pane_vc

0xba69,	// (0x0005597f) form_field_slider_wide_pane_vc_ParamLimits

0xba69,	// (0x0005597f) form_field_slider_wide_pane_vc

0xba7c,	// (0x00055992) grid_touch_1_pane_ParamLimits

0xba7c,	// (0x00055992) grid_touch_1_pane

0xba88,	// (0x0005599e) grid_touch_2_pane_ParamLimits

0xba88,	// (0x0005599e) grid_touch_2_pane

0x8fdd,	// (0x00052ef3) touch_pane_g1_ParamLimits

0x8fdd,	// (0x00052ef3) touch_pane_g1

0xbaa0,	// (0x000559b6) cell_app_pane_cp_wide_ParamLimits

0xbaa0,	// (0x000559b6) cell_app_pane_cp_wide

0xbab1,	// (0x000559c7) grid_popup_fast_wide_pane_ParamLimits

0xbab1,	// (0x000559c7) grid_popup_fast_wide_pane

0xbac5,	// (0x000559db) scroll_pane_cp19_ParamLimits

0xbac5,	// (0x000559db) scroll_pane_cp19

0x7763,	// (0x00051679) bg_popup_window_pane_cp20

0xbad9,	// (0x000559ef) listscroll_popup_fast_wide_pane

0x7843,	// (0x00051759) grid_indicator_nsta_pane

0xbae1,	// (0x000559f7) clock_nsta_pane_g1

0xbaea,	// (0x00055a00) clock_nsta_pane_t1

0xbb06,	// (0x00055a1c) cell_indicator_nsta_pane_ParamLimits

0xbb06,	// (0x00055a1c) cell_indicator_nsta_pane

0xbb3e,	// (0x00055a54) cell_indicator_nsta_pane_g1

0xbb4c,	// (0x00055a62) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x000599bd) cell_indicator_nsta_pane_g

0xbb62,	// (0x00055a78) clock_nsta_pane_cp

0xbb6a,	// (0x00055a80) indicator_nsta_pane_cp

0xbb73,	// (0x00055a89) nsta_clock_indic_pane_g1

0x790c,	// (0x00051822) grid_indicator_pane

0x864e,	// (0x00052564) scroll_pane_cp29

0x59dc,	// (0x0004f8f2) indicator_nsta_pane_cp2_ParamLimits

0x59dc,	// (0x0004f8f2) indicator_nsta_pane_cp2

0x7843,	// (0x00051759) main_apps_wheel_pane

0x9e63,	// (0x00053d79) form_midp_field_text_pane_ParamLimits

0x9fae,	// (0x00053ec4) scroll_bar_cp050_ParamLimits

0xbbdc,	// (0x00055af2) cell_indicator_pane_ParamLimits

0xbbdc,	// (0x00055af2) cell_indicator_pane

0xbbf3,	// (0x00055b09) cell_indicator_pane_g1

0xbbfd,	// (0x00055b13) grid_wheel_folder_pane_ParamLimits

0xbbfd,	// (0x00055b13) grid_wheel_folder_pane

0xbc11,	// (0x00055b27) list_wheel_apps_pane_ParamLimits

0xbc11,	// (0x00055b27) list_wheel_apps_pane

0xbc22,	// (0x00055b38) main_apps_wheel_pane_g1_ParamLimits

0xbc22,	// (0x00055b38) main_apps_wheel_pane_g1

0xbc36,	// (0x00055b4c) main_apps_wheel_pane_g2_ParamLimits

0xbc36,	// (0x00055b4c) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x000599d9) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x000599d9) main_apps_wheel_pane_g

0xbc4e,	// (0x00055b64) main_apps_wheel_pane_t1_ParamLimits

0xbc4e,	// (0x00055b64) main_apps_wheel_pane_t1

0xbc71,	// (0x00055b87) list_wheel_apps_pane_g1

0xbc79,	// (0x00055b8f) list_wheel_apps_pane_g2

0xbc81,	// (0x00055b97) list_wheel_apps_pane_g3

0xbc89,	// (0x00055b9f) list_wheel_apps_pane_g4

0xbc93,	// (0x00055ba9) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x000599de) list_wheel_apps_pane_g

0x8b7e,	// (0x00052a94) navi_icon_text_pane

0x962b,	// (0x00053541) aid_fill_nsta

0xbcb6,	// (0x00055bcc) navi_icon_text_pane_g1

0xbcc5,	// (0x00055bdb) navi_icon_text_pane_t1

0x8a1c,	// (0x00052932) list_set_graphic_pane_t1_ParamLimits

0x8a1c,	// (0x00052932) list_set_graphic_pane_t1

0xa70c,	// (0x00054622) popup_midp_note_alarm_window_t6_ParamLimits

0xa70c,	// (0x00054622) popup_midp_note_alarm_window_t6

0xa71e,	// (0x00054634) popup_midp_note_alarm_window_t7_ParamLimits

0xa71e,	// (0x00054634) popup_midp_note_alarm_window_t7

0xa730,	// (0x00054646) popup_midp_note_alarm_window_t8_ParamLimits

0xa730,	// (0x00054646) popup_midp_note_alarm_window_t8

0xa742,	// (0x00054658) popup_midp_note_alarm_window_t9_ParamLimits

0xa742,	// (0x00054658) popup_midp_note_alarm_window_t9

0xa754,	// (0x0005466a) popup_midp_note_alarm_window_t10_ParamLimits

0xa754,	// (0x0005466a) popup_midp_note_alarm_window_t10

0xa766,	// (0x0005467c) popup_midp_note_alarm_window_t11_ParamLimits

0xa766,	// (0x0005467c) popup_midp_note_alarm_window_t11

0xa778,	// (0x0005468e) scroll_pane_cp17_ParamLimits

0xa778,	// (0x0005468e) scroll_pane_cp17

0x5e37,	// (0x0004fd4d) volume_small_pane_cp_g1

0x612c,	// (0x00050042) volume_small_pane_cp_g2

0x6135,	// (0x0005004b) volume_small_pane_cp_g3

0x613e,	// (0x00050054) volume_small_pane_cp_g4

0x6147,	// (0x0005005d) volume_small_pane_cp_g5

0x6150,	// (0x00050066) volume_small_pane_cp_g6

0x6159,	// (0x0005006f) volume_small_pane_cp_g7

0x6162,	// (0x00050078) volume_small_pane_cp_g8

0x616b,	// (0x00050081) volume_small_pane_cp_g9

0x6174,	// (0x0005008a) volume_small_pane_cp_g10

0x8dcd,	// (0x00052ce3) midp_ticker_pane_g1_ParamLimits

0x8dd9,	// (0x00052cef) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0005968b) midp_ticker_pane_g_ParamLimits

0x8de5,	// (0x00052cfb) midp_ticker_pane_t1_ParamLimits

0x9641,	// (0x00053557) aid_fill_nsta_2

0x9f9a,	// (0x00053eb0) list_form2_midp_pane

0xb0de,	// (0x00054ff4) midp_editing_number_pane_ParamLimits

0xb0ed,	// (0x00055003) midp_ticker_pane_ParamLimits

0xbcda,	// (0x00055bf0) form2_midp_field_pane

0xbcfe,	// (0x00055c14) scroll_pane_cp51

0xbd1e,	// (0x00055c34) form2_midp_button_pane_ParamLimits

0xbd1e,	// (0x00055c34) form2_midp_button_pane

0xbd30,	// (0x00055c46) form2_midp_content_pane_ParamLimits

0xbd30,	// (0x00055c46) form2_midp_content_pane

0xbd4a,	// (0x00055c60) form2_midp_field_choice_group_pane

0xbd52,	// (0x00055c68) form2_midp_field_pane_g1

0xbd5a,	// (0x00055c70) form2_midp_field_pane_g2

0xbd62,	// (0x00055c78) form2_midp_field_pane_g3

0xbd6a,	// (0x00055c80) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x00059a03) form2_midp_field_pane_g

0xbd72,	// (0x00055c88) form2_midp_gauge_slider_pane

0xbd7a,	// (0x00055c90) form2_midp_gauge_wait_pane

0xbd82,	// (0x00055c98) form2_midp_image_pane_ParamLimits

0xbd82,	// (0x00055c98) form2_midp_image_pane

0xbd9d,	// (0x00055cb3) form2_midp_label_pane_ParamLimits

0xbd9d,	// (0x00055cb3) form2_midp_label_pane

0xbdb6,	// (0x00055ccc) form2_midp_label_pane_cp_ParamLimits

0xbdb6,	// (0x00055ccc) form2_midp_label_pane_cp

0xbdd7,	// (0x00055ced) form2_midp_string_pane_ParamLimits

0xbdd7,	// (0x00055ced) form2_midp_string_pane

0x7374,	// (0x0005128a) form2_midp_text_pane_ParamLimits

0x7374,	// (0x0005128a) form2_midp_text_pane

0xbde9,	// (0x00055cff) form2_midp_time_pane

0xbdf9,	// (0x00055d0f) input_focus_pane_cp51_ParamLimits

0xbdf9,	// (0x00055d0f) input_focus_pane_cp51

0xbe11,	// (0x00055d27) form2_midp_label_pane_t1_ParamLimits

0xbe11,	// (0x00055d27) form2_midp_label_pane_t1

0x7393,	// (0x000512a9) form2_mdip_text_pane_t1_ParamLimits

0x7393,	// (0x000512a9) form2_mdip_text_pane_t1

0x73b1,	// (0x000512c7) form2_midp_time_pane_t1

0xbe5a,	// (0x00055d70) form2_midp_gauge_slider_pane_t1

0xbe6c,	// (0x00055d82) form2_midp_gauge_slider_pane_t2

0xbe7e,	// (0x00055d94) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x00059a0c) form2_midp_gauge_slider_pane_t

0xbe90,	// (0x00055da6) form2_midp_slider_pane

0xbe9c,	// (0x00055db2) form2_midp_gauge_wait_pane_t1

0xbeaa,	// (0x00055dc0) form2_midp_wait_pane_ParamLimits

0xbeaa,	// (0x00055dc0) form2_midp_wait_pane

0x9c89,	// (0x00053b9f) list_single_2graphic_pane_cp4_ParamLimits

0x9c89,	// (0x00053b9f) list_single_2graphic_pane_cp4

0xbed5,	// (0x00055deb) list_single_midp_graphic_pane_cp_ParamLimits

0xbed5,	// (0x00055deb) list_single_midp_graphic_pane_cp

0x7763,	// (0x00051679) list_highlight_pane_cp20

0xbf04,	// (0x00055e1a) list_single_2graphic_pane_g1_cp4

0xbf0c,	// (0x00055e22) list_single_2graphic_pane_g2_cp4

0xbf14,	// (0x00055e2a) list_single_2graphic_pane_t1_cp4

0x7843,	// (0x00051759) list_highlight_pane_cp21

0xbf23,	// (0x00055e39) list_single_midp_graphic_pane_g4_cp

0xbf32,	// (0x00055e48) list_single_midp_graphic_pane_t1_cp

0xbf47,	// (0x00055e5d) form2_mdip_string_pane_t1_ParamLimits

0xbf47,	// (0x00055e5d) form2_mdip_string_pane_t1

0x7763,	// (0x00051679) bg_wml_button_pane_cp2

0x7759,	// (0x0005166f) form2_midp_image_pane_g1

0x6eac,	// (0x00050dc2) list_double_large_graphic_pane_g5_ParamLimits

0x6eac,	// (0x00050dc2) list_double_large_graphic_pane_g5

0x8cfa,	// (0x00052c10) midp_form_pane_ParamLimits

0x7843,	// (0x00051759) main_apps_wheel_pane_ParamLimits

0x9413,	// (0x00053329) popup_preview_window_ParamLimits

0x9413,	// (0x00053329) popup_preview_window

0x95ce,	// (0x000534e4) popup_touch_info_window_ParamLimits

0x95ce,	// (0x000534e4) popup_touch_info_window

0x95ec,	// (0x00053502) popup_touch_menu_window_ParamLimits

0x95ec,	// (0x00053502) popup_touch_menu_window

0x774f,	// (0x00051665) bg_popup_sub_pane_cp6

0xc040,	// (0x00055f56) list_touch_menu_pane

0xc048,	// (0x00055f5e) list_single_touch_menu_pane_ParamLimits

0xc048,	// (0x00055f5e) list_single_touch_menu_pane

0xc05f,	// (0x00055f75) list_single_touch_menu_pane_t1

0x7843,	// (0x00051759) bg_popup_sub_pane_cp7_ParamLimits

0x7843,	// (0x00051759) bg_popup_sub_pane_cp7

0xc06d,	// (0x00055f83) heading_sub_pane

0xc075,	// (0x00055f8b) list_touch_info_pane_ParamLimits

0xc075,	// (0x00055f8b) list_touch_info_pane

0xc084,	// (0x00055f9a) list_single_touch_info_pane_ParamLimits

0xc084,	// (0x00055f9a) list_single_touch_info_pane

0xc096,	// (0x00055fac) list_single_touch_info_pane_t1

0xc0a4,	// (0x00055fba) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x00059a1a) list_single_touch_info_pane_t

0x8cf2,	// (0x00052c08) bg_popup_heading_pane_cp

0xc0b2,	// (0x00055fc8) heading_sub_pane_t1

0x9bf8,	// (0x00053b0e) bg_popup_preview_window_pane_cp_ParamLimits

0x9bf8,	// (0x00053b0e) bg_popup_preview_window_pane_cp

0xc06d,	// (0x00055f83) heading_preview_pane

0xc075,	// (0x00055f8b) list_preview_pane_ParamLimits

0xc075,	// (0x00055f8b) list_preview_pane

0xc0c0,	// (0x00055fd6) popup_preview_window_g1

0xc084,	// (0x00055f9a) list_single_preview_pane_ParamLimits

0xc084,	// (0x00055f9a) list_single_preview_pane

0xc0c8,	// (0x00055fde) list_single_preview_pane_g1

0xc0d0,	// (0x00055fe6) list_single_preview_pane_t1

0xc096,	// (0x00055fac) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x00059a1f) list_single_preview_pane_t

0xc0de,	// (0x00055ff4) bg_popup_heading_pane_cp2_ParamLimits

0xc0de,	// (0x00055ff4) bg_popup_heading_pane_cp2

0xc0f4,	// (0x0005600a) heading_preview_pane_g1

0xc0fc,	// (0x00056012) heading_preview_pane_t1_ParamLimits

0xc0fc,	// (0x00056012) heading_preview_pane_t1

0x792f,	// (0x00051845) soft_indicator_pane_t1_ParamLimits

0x8022,	// (0x00051f38) scroll_pane_ParamLimits

0x8547,	// (0x0005245d) scroll_sc2_left_pane

0x8550,	// (0x00052466) scroll_sc2_right_pane

0x856f,	// (0x00052485) scroll_bg_pane_g1_ParamLimits

0x8584,	// (0x0005249a) scroll_bg_pane_g2_ParamLimits

0x859c,	// (0x000524b2) scroll_bg_pane_g3_ParamLimits

0xf704,	// (0x0005961a) scroll_bg_pane_g_ParamLimits

0x856f,	// (0x00052485) scroll_handle_pane_g1_ParamLimits

0x85be,	// (0x000524d4) scroll_handle_pane_g2_ParamLimits

0x859c,	// (0x000524b2) scroll_handle_pane_g3_ParamLimits

0xf70b,	// (0x00059621) scroll_handle_pane_g_ParamLimits

0x909a,	// (0x00052fb0) popup_choice_list_window_ParamLimits

0x909a,	// (0x00052fb0) popup_choice_list_window

0x9a52,	// (0x00053968) choice_list_pane

0x9ad4,	// (0x000539ea) cell_toolbar_pane_t1

0x9afc,	// (0x00053a12) toolbar_button_pane_ParamLimits

0xac29,	// (0x00054b3f) ai_gene_pane_1_t2_ParamLimits

0xac29,	// (0x00054b3f) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0005983e) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0005983e) ai_gene_pane_1_t

0xc119,	// (0x0005602f) scroll_sc2_left_pane_g1

0xc119,	// (0x0005602f) scroll_sc2_right_pane_g1

0x9072,	// (0x00052f88) bg_popup_sub_pane_cp10

0xc123,	// (0x00056039) list_choice_list_pane

0xc13a,	// (0x00056050) list_single_choice_list_pane_ParamLimits

0xc13a,	// (0x00056050) list_single_choice_list_pane

0xc14e,	// (0x00056064) list_single_choice_list_pane_g1

0xc156,	// (0x0005606c) list_single_choice_list_pane_t1_ParamLimits

0xc156,	// (0x0005606c) list_single_choice_list_pane_t1

0xc16b,	// (0x00056081) choice_list_pane_g1

0xc173,	// (0x00056089) choice_list_pane_t1

0x774f,	// (0x00051665) input_focus_pane_cp11

0x8424,	// (0x0005233a) title_pane_stacon_g2_ParamLimits

0x8424,	// (0x0005233a) title_pane_stacon_g2

0x0002,

0xf6ea,	// (0x00059600) title_pane_stacon_g_ParamLimits

0xf6ea,	// (0x00059600) title_pane_stacon_g

0x8cf2,	// (0x00052c08) cursor_press_pane

0x9142,	// (0x00053058) popup_fep_hwr_window_ParamLimits

0x9142,	// (0x00053058) popup_fep_hwr_window

0x91bc,	// (0x000530d2) popup_fep_vkb_window_ParamLimits

0x91bc,	// (0x000530d2) popup_fep_vkb_window

0xc181,	// (0x00056097) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x00059a48) fep_vkb_side_pane_g_ParamLimits

0x61b6,	// (0x000500cc) fep_hwr_candidate_pane_ParamLimits

0x61b6,	// (0x000500cc) fep_hwr_candidate_pane

0x61e0,	// (0x000500f6) fep_hwr_side_pane_ParamLimits

0x61e0,	// (0x000500f6) fep_hwr_side_pane

0x6200,	// (0x00050116) fep_hwr_top_pane_ParamLimits

0x6200,	// (0x00050116) fep_hwr_top_pane

0x6218,	// (0x0005012e) fep_hwr_write_pane_ParamLimits

0x6218,	// (0x0005012e) fep_hwr_write_pane

0xfb32,	// (0x00059a48) fep_vkb_side_pane_g

0xc189,	// (0x0005609f) fep_hwr_top_pane_g1

0xc19b,	// (0x000560b1) fep_hwr_top_pane_g2

0x6252,	// (0x00050168) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x00059a24) fep_hwr_top_pane_g

0x6267,	// (0x0005017d) fep_hwr_top_text_pane

0x8721,	// (0x00052637) fep_hwr_top_text_pane_g1

0xc1d1,	// (0x000560e7) fep_hwr_top_text_pane_t1

0x635d,	// (0x00050273) fep_hwr_candidate_pane_g1

0xc424,	// (0x0005633a) fep_vkb_keypad_pane_g3_ParamLimits

0xc424,	// (0x0005633a) fep_vkb_keypad_pane_g3

0xc44c,	// (0x00056362) fep_vkb_keypad_pane_g4_ParamLimits

0xc44c,	// (0x00056362) fep_vkb_keypad_pane_g4

0xc4bb,	// (0x000563d1) fep_vkb_bottom_pane_g2_ParamLimits

0xc4bb,	// (0x000563d1) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x00059a4f) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x00059a4f) fep_vkb_bottom_pane_g

0xc119,	// (0x0005602f) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x00059a59) cell_vkb_side_pane_g

0xc546,	// (0x0005645c) cell_vkb_side_pane_t1

0xc554,	// (0x0005646a) cell_vkb_side_pane_t1_copy1

0xc119,	// (0x0005602f) bg_fep_vkb_candidate_pane_g2

0xc680,	// (0x00056596) cell_vkb_candidate_pane_ParamLimits

0xc1df,	// (0x000560f5) aid_size_cell_vkb_ParamLimits

0xc1df,	// (0x000560f5) aid_size_cell_vkb

0xc680,	// (0x00056596) cell_vkb_candidate_pane

0x6384,	// (0x0005029a) bg_popup_fep_shadow_pane_g1

0xc26d,	// (0x00056183) fep_vkb_bottom_pane_ParamLimits

0xc26d,	// (0x00056183) fep_vkb_bottom_pane

0xc2a3,	// (0x000561b9) fep_vkb_candidate_pane_ParamLimits

0xc2a3,	// (0x000561b9) fep_vkb_candidate_pane

0xc2bf,	// (0x000561d5) fep_vkb_keypad_pane_ParamLimits

0xc2bf,	// (0x000561d5) fep_vkb_keypad_pane

0xc305,	// (0x0005621b) fep_vkb_side_pane_ParamLimits

0xc305,	// (0x0005621b) fep_vkb_side_pane

0xc341,	// (0x00056257) fep_vkb_top_pane_ParamLimits

0xc341,	// (0x00056257) fep_vkb_top_pane

0xc37d,	// (0x00056293) fep_vkb_top_pane_g1_ParamLimits

0xc37d,	// (0x00056293) fep_vkb_top_pane_g1

0xc38c,	// (0x000562a2) fep_vkb_top_pane_g2_ParamLimits

0xc38c,	// (0x000562a2) fep_vkb_top_pane_g2

0xc39b,	// (0x000562b1) fep_vkb_top_pane_g3_ParamLimits

0xc39b,	// (0x000562b1) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x00059a3f) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x00059a3f) fep_vkb_top_pane_g

0xc3b9,	// (0x000562cf) fep_vkb_top_text_pane_ParamLimits

0xc3b9,	// (0x000562cf) fep_vkb_top_text_pane

0xc3ca,	// (0x000562e0) fep_vkb_side_pane_g1_ParamLimits

0xc3ca,	// (0x000562e0) fep_vkb_side_pane_g1

0xc413,	// (0x00056329) grid_vkb_side_pane_ParamLimits

0xc413,	// (0x00056329) grid_vkb_side_pane

0x638c,	// (0x000502a2) bg_popup_fep_shadow_pane_g2

0x6395,	// (0x000502ab) bg_popup_fep_shadow_pane_g3

0x639d,	// (0x000502b3) bg_popup_fep_shadow_pane_g4

0x63a6,	// (0x000502bc) bg_popup_fep_shadow_pane_g5

0x63b0,	// (0x000502c6) bg_popup_fep_shadow_pane_g6

0x63b8,	// (0x000502ce) bg_popup_fep_shadow_pane_g7

0x812e,	// (0x00052044) bg_popup_fep_shadow_pane_g8

0xc46a,	// (0x00056380) grid_vkb_keypad_number_pane_ParamLimits

0xc46a,	// (0x00056380) grid_vkb_keypad_number_pane

0xc47a,	// (0x00056390) grid_vkb_keypad_pane_ParamLimits

0xc47a,	// (0x00056390) grid_vkb_keypad_pane

0xc4a0,	// (0x000563b6) fep_vkb_bottom_pane_g1_ParamLimits

0xc4a0,	// (0x000563b6) fep_vkb_bottom_pane_g1

0xc4c9,	// (0x000563df) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc4c9,	// (0x000563df) grid_vkb_keypad_bottom_left_pane

0xc4de,	// (0x000563f4) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc4de,	// (0x000563f4) grid_vkb_keypad_bottom_right_pane

0xc4f3,	// (0x00056409) fep_vkb_top_text_pane_g1

0xc50e,	// (0x00056424) fep_vkb_top_text_pane_t1

0xc523,	// (0x00056439) cell_vkb_side_pane_ParamLimits

0xc523,	// (0x00056439) cell_vkb_side_pane

0xc119,	// (0x0005602f) cell_vkb_side_pane_g1

0xc562,	// (0x00056478) cell_vkb_keypad_pane_ParamLimits

0xc562,	// (0x00056478) cell_vkb_keypad_pane

0xc5d7,	// (0x000564ed) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x00059a6c) bg_popup_fep_shadow_pane_g

0x63ca,	// (0x000502e0) cell_hwr_side_pane_g1

0x63ca,	// (0x000502e0) cell_hwr_side_pane_g2

0xc5e1,	// (0x000564f7) cell_vkb_keypad_pane_t1

0xc5ef,	// (0x00056505) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc5ef,	// (0x00056505) cell_vkb_keypad_bottom_left_pane

0xc60c,	// (0x00056522) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc60c,	// (0x00056522) cell_vkb_keypad_bottom_right_pane

0xc119,	// (0x0005602f) cell_vkb_keypad_bottom_left_pane_g1

0xc119,	// (0x0005602f) cell_vkb_keypad_bottom_right_pane_g1

0xc645,	// (0x0005655b) cell_vkb_keypad_number_pane_ParamLimits

0xc645,	// (0x0005655b) cell_vkb_keypad_number_pane

0xc664,	// (0x0005657a) cell_vkb_keypad_number_pane_g1

0xc66e,	// (0x00056584) cell_vkb_keypad_number_pane_g2

0xc677,	// (0x0005658d) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x00059a5e) cell_vkb_keypad_number_pane_g

0xc5e1,	// (0x000564f7) cell_vkb_keypad_number_pane_t1

0xc69b,	// (0x000565b1) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x00059a7f) cell_hwr_side_pane_g

0xc6b4,	// (0x000565ca) cell_hwr_side_pane_t1

0x63d4,	// (0x000502ea) cell_hwr_side_pane_t1_copy1

0x63e2,	// (0x000502f8) cell_hwr_candidate_pane_g1

0x6411,	// (0x00050327) cell_hwr_candidate_pane_t1

0xc119,	// (0x0005602f) cell_vkb_candidate_pane_g2

0xc6f8,	// (0x0005660e) cell_vkb_candidate_pane_t1

0x617d,	// (0x00050093) bg_popup_fep_shadow_pane_ParamLimits

0x617d,	// (0x00050093) bg_popup_fep_shadow_pane

0x6232,	// (0x00050148) bg_fep_hwr_top_pane_g4

0xc1ad,	// (0x000560c3) bg_hwr_side_pane_g1_ParamLimits

0xc1ad,	// (0x000560c3) bg_hwr_side_pane_g1

0x62a3,	// (0x000501b9) cell_hwr_side_pane_ParamLimits

0x62a3,	// (0x000501b9) cell_hwr_side_pane

0x62de,	// (0x000501f4) fep_hwr_write_pane_g1_ParamLimits

0x62de,	// (0x000501f4) fep_hwr_write_pane_g1

0x62eb,	// (0x00050201) fep_hwr_write_pane_g2_ParamLimits

0x62eb,	// (0x00050201) fep_hwr_write_pane_g2

0x62f8,	// (0x0005020e) fep_hwr_write_pane_g3_ParamLimits

0x62f8,	// (0x0005020e) fep_hwr_write_pane_g3

0x6306,	// (0x0005021c) fep_hwr_write_pane_g4_ParamLimits

0x6306,	// (0x0005021c) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x00059a2b) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x00059a2b) fep_hwr_write_pane_g

0x6232,	// (0x00050148) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6232,	// (0x00050148) bg_fep_hwr_candidate_pane_g2

0x631b,	// (0x00050231) cell_hwr_candidate_pane_ParamLimits

0x631b,	// (0x00050231) cell_hwr_candidate_pane

0x635d,	// (0x00050273) fep_hwr_candidate_pane_g1_ParamLimits

0xc20d,	// (0x00056123) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc20d,	// (0x00056123) bg_popup_fep_shadow_pane_cp2

0xc3ab,	// (0x000562c1) fep_vkb_top_pane_g4_ParamLimits

0xc3ab,	// (0x000562c1) fep_vkb_top_pane_g4

0xc3f1,	// (0x00056307) fep_vkb_side_pane_g2_ParamLimits

0xc3f1,	// (0x00056307) fep_vkb_side_pane_g2

0x53e8,	// (0x0004f2fe) list_setting_pane_t4_ParamLimits

0x53e8,	// (0x0004f2fe) list_setting_pane_t4

0x5482,	// (0x0004f398) list_setting_number_pane_t5_ParamLimits

0x5482,	// (0x0004f398) list_setting_number_pane_t5

0x8763,	// (0x00052679) list_double_heading_pane_cp2_ParamLimits

0x8763,	// (0x00052679) list_double_heading_pane_cp2

0x80c9,	// (0x00051fdf) list_double_heading_pane_g1_cp2_ParamLimits

0x80c9,	// (0x00051fdf) list_double_heading_pane_g1_cp2

0x80d5,	// (0x00051feb) list_double_heading_pane_g2_cp2_ParamLimits

0x80d5,	// (0x00051feb) list_double_heading_pane_g2_cp2

0xc706,	// (0x0005661c) list_double_heading_pane_t1_cp2_ParamLimits

0xc706,	// (0x0005661c) list_double_heading_pane_t1_cp2

0xc71c,	// (0x00056632) list_double_heading_pane_t2_cp2_ParamLimits

0xc71c,	// (0x00056632) list_double_heading_pane_t2_cp2

0x7737,	// (0x0005164d) aid_value_unit2

0x4e50,	// (0x0004ed66) popup_preview_fixed_window

0x7acc,	// (0x000519e2) bg_popup_preview_window_pane_cp02

0xc72e,	// (0x00056644) list_preview_fixed_pane

0xc774,	// (0x0005668a) list_empty_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_empty_pane_fp

0xc774,	// (0x0005668a) list_single_cale_day_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_cale_day_pane_fp

0xc774,	// (0x0005668a) list_single_graphic_heading_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_graphic_heading_pane_fp

0xc774,	// (0x0005668a) list_single_graphic_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_graphic_pane_fp

0xc774,	// (0x0005668a) list_single_heading_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_heading_pane_fp

0xc774,	// (0x0005668a) list_single_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_pane_fp

0xc789,	// (0x0005669f) list_single_pane_fp_g1_ParamLimits

0xc789,	// (0x0005669f) list_single_pane_fp_g1

0x8e67,	// (0x00052d7d) list_single_pane_fp_g2_ParamLimits

0x8e67,	// (0x00052d7d) list_single_pane_fp_g2

0xc795,	// (0x000566ab) list_single_pane_fp_g3_ParamLimits

0xc795,	// (0x000566ab) list_single_pane_fp_g3

0xc7a9,	// (0x000566bf) list_single_pane_fp_g4_ParamLimits

0xc7a9,	// (0x000566bf) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x00059a92) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x00059a92) list_single_pane_fp_g

0x73c4,	// (0x000512da) list_single_pane_fp_t1_ParamLimits

0x73c4,	// (0x000512da) list_single_pane_fp_t1

0x73db,	// (0x000512f1) list_single_graphic_pane_fp_g1_ParamLimits

0x73db,	// (0x000512f1) list_single_graphic_pane_fp_g1

0xc789,	// (0x0005669f) list_single_graphic_pane_fp_g2_ParamLimits

0xc789,	// (0x0005669f) list_single_graphic_pane_fp_g2

0x8e67,	// (0x00052d7d) list_single_graphic_pane_fp_g3_ParamLimits

0x8e67,	// (0x00052d7d) list_single_graphic_pane_fp_g3

0xc795,	// (0x000566ab) list_single_graphic_pane_fp_g4_ParamLimits

0xc795,	// (0x000566ab) list_single_graphic_pane_fp_g4

0xc7a9,	// (0x000566bf) list_single_graphic_pane_fp_g5_ParamLimits

0xc7a9,	// (0x000566bf) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x00059a9b) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x00059a9b) list_single_graphic_pane_fp_g

0x73e7,	// (0x000512fd) list_single_graphic_pane_fp_t1_ParamLimits

0x73e7,	// (0x000512fd) list_single_graphic_pane_fp_t1

0x73db,	// (0x000512f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x73db,	// (0x000512f1) list_single_graphic_heading_pane_fp_g1

0xc789,	// (0x0005669f) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc789,	// (0x0005669f) list_single_graphic_heading_pane_fp_g2

0x8e67,	// (0x00052d7d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8e67,	// (0x00052d7d) list_single_graphic_heading_pane_fp_g3

0xc795,	// (0x000566ab) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc795,	// (0x000566ab) list_single_graphic_heading_pane_fp_g4

0xc7a9,	// (0x000566bf) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc7a9,	// (0x000566bf) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00059a9b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00059a9b) list_single_graphic_heading_pane_fp_g

0x73fd,	// (0x00051313) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x73fd,	// (0x00051313) list_single_graphic_heading_pane_fp_t1

0x7413,	// (0x00051329) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7413,	// (0x00051329) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x00059aa6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x00059aa6) list_single_graphic_heading_pane_fp_t

0x7425,	// (0x0005133b) list_single_cale_day_pane_fp_g1_ParamLimits

0x7425,	// (0x0005133b) list_single_cale_day_pane_fp_g1

0xc7b5,	// (0x000566cb) list_single_cale_day_pane_fp_g2_ParamLimits

0xc7b5,	// (0x000566cb) list_single_cale_day_pane_fp_g2

0x745d,	// (0x00051373) list_single_cale_day_pane_fp_g3_ParamLimits

0x745d,	// (0x00051373) list_single_cale_day_pane_fp_g3

0x7485,	// (0x0005139b) list_single_cale_day_pane_fp_g4_ParamLimits

0x7485,	// (0x0005139b) list_single_cale_day_pane_fp_g4

0x74a9,	// (0x000513bf) list_single_cale_day_pane_fp_g5_ParamLimits

0x74a9,	// (0x000513bf) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x00059aab) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x00059aab) list_single_cale_day_pane_fp_g

0x74cd,	// (0x000513e3) list_single_cale_day_pane_fp_t1_ParamLimits

0x74cd,	// (0x000513e3) list_single_cale_day_pane_fp_t1

0x74f3,	// (0x00051409) list_single_cale_day_pane_fp_t2_ParamLimits

0x74f3,	// (0x00051409) list_single_cale_day_pane_fp_t2

0x750c,	// (0x00051422) list_single_cale_day_pane_fp_t3_ParamLimits

0x750c,	// (0x00051422) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x00059ab6) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x00059ab6) list_single_cale_day_pane_fp_t

0xc789,	// (0x0005669f) list_empty_pane_fp_g1_ParamLimits

0xc789,	// (0x0005669f) list_empty_pane_fp_g1

0x7525,	// (0x0005143b) list_empty_pane_fp_t1

0x7533,	// (0x00051449) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x00059abd) list_empty_pane_fp_t

0xc789,	// (0x0005669f) list_single_heading_pane_fp_g1_ParamLimits

0xc789,	// (0x0005669f) list_single_heading_pane_fp_g1

0x8e67,	// (0x00052d7d) list_single_heading_pane_fp_g2_ParamLimits

0x8e67,	// (0x00052d7d) list_single_heading_pane_fp_g2

0xc795,	// (0x000566ab) list_single_heading_pane_fp_g3_ParamLimits

0xc795,	// (0x000566ab) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x00059ac2) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x00059ac2) list_single_heading_pane_fp_g

0x7541,	// (0x00051457) list_single_heading_pane_fp_t1_ParamLimits

0x7541,	// (0x00051457) list_single_heading_pane_fp_t1

0x7553,	// (0x00051469) list_single_heading_pane_fp_t2_ParamLimits

0x7553,	// (0x00051469) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x00059ac9) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x00059ac9) list_single_heading_pane_fp_t

0x82bb,	// (0x000521d1) aid_size_cell_fast

0x7a3c,	// (0x00051952) soft_indicator_pane_cp1_t1

0x82f8,	// (0x0005220e) cell_app_pane_cp2_ParamLimits

0x82f8,	// (0x0005220e) cell_app_pane_cp2

0x619f,	// (0x000500b5) fep_hwr_candidate_drop_down_list_pane

0x6377,	// (0x0005028d) fep_hwr_candidate_pane_g3_ParamLimits

0x6377,	// (0x0005028d) fep_hwr_candidate_pane_g3

0x39b1,	// (0x0004d8c7) fep_hwr_candidate_pane_g4_ParamLimits

0x39b1,	// (0x0004d8c7) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x00059a38) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x00059a38) fep_hwr_candidate_pane_g

0xc292,	// (0x000561a8) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc292,	// (0x000561a8) fep_vkb_candidate_drop_down_list_pane

0xc6a3,	// (0x000565b9) fep_vkb_candidate_pane_g3

0xc6ab,	// (0x000565c1) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x00059a65) fep_vkb_candidate_pane_g

0x63e2,	// (0x000502f8) cell_hwr_candidate_pane_g1_ParamLimits

0x63f0,	// (0x00050306) cell_hwr_candidate_pane_g3_ParamLimits

0x63f0,	// (0x00050306) cell_hwr_candidate_pane_g3

0xdd3a,	// (0x00057c50) cell_hwr_candidate_pane_g4_ParamLimits

0xdd3a,	// (0x00057c50) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x00059a84) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x00059a84) cell_hwr_candidate_pane_g

0xc6c2,	// (0x000565d8) cell_vkb_candidate_pane_g3_ParamLimits

0xc6c2,	// (0x000565d8) cell_vkb_candidate_pane_g3

0xc6dd,	// (0x000565f3) cell_vkb_candidate_pane_g4_ParamLimits

0xc6dd,	// (0x000565f3) cell_vkb_candidate_pane_g4

0xc7c1,	// (0x000566d7) cell_app_pane_cp2_g1_ParamLimits

0xc7c1,	// (0x000566d7) cell_app_pane_cp2_g1

0xc7df,	// (0x000566f5) cell_app_pane_cp2_g2_ParamLimits

0xc7df,	// (0x000566f5) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x00059ace) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x00059ace) cell_app_pane_cp2_g

0xc7eb,	// (0x00056701) cell_app_pane_cp2_t1_ParamLimits

0xc7eb,	// (0x00056701) cell_app_pane_cp2_t1

0x80af,	// (0x00051fc5) grid_highlight_pane_cp1_ParamLimits

0x80af,	// (0x00051fc5) grid_highlight_pane_cp1

0x642f,	// (0x00050345) cell_hwr_candidate_pane_cp1_ParamLimits

0x642f,	// (0x00050345) cell_hwr_candidate_pane_cp1

0x63e2,	// (0x000502f8) fep_hwr_candidate_drop_down_list_pane_g1

0x644e,	// (0x00050364) fep_hwr_candidate_drop_down_list_pane_g2

0x645b,	// (0x00050371) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x00059ad3) fep_hwr_candidate_drop_down_list_pane_g

0x6468,	// (0x0005037e) fep_hwr_candidate_drop_down_list_scroll_pane

0x6471,	// (0x00050387) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6471,	// (0x00050387) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x647e,	// (0x00050394) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x647e,	// (0x00050394) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x648b,	// (0x000503a1) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x648b,	// (0x000503a1) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6498,	// (0x000503ae) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6498,	// (0x000503ae) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x64b3,	// (0x000503c9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x64b3,	// (0x000503c9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x64ce,	// (0x000503e4) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x64ce,	// (0x000503e4) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x64e9,	// (0x000503ff) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x64e9,	// (0x000503ff) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6504,	// (0x0005041a) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6504,	// (0x0005041a) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x00059ada) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x00059ada) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7fd,	// (0x00056713) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7fd,	// (0x00056713) cell_vkb_candidate_pane_cp1

0xc3ab,	// (0x000562c1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc3ab,	// (0x000562c1) fep_vkb_candidate_drop_down_list_pane_g1

0xc81d,	// (0x00056733) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc81d,	// (0x00056733) fep_vkb_candidate_drop_down_list_pane_g2

0xc82a,	// (0x00056740) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc82a,	// (0x00056740) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x00059aeb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x00059aeb) fep_vkb_candidate_drop_down_list_pane_g

0xc837,	// (0x0005674d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc837,	// (0x0005674d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc844,	// (0x0005675a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc844,	// (0x0005675a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc851,	// (0x00056767) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc851,	// (0x00056767) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc85d,	// (0x00056773) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc85d,	// (0x00056773) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc869,	// (0x0005677f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc869,	// (0x0005677f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc88a,	// (0x000567a0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc88a,	// (0x000567a0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc8ab,	// (0x000567c1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc8ab,	// (0x000567c1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8cc,	// (0x000567e2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8cc,	// (0x000567e2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8ed,	// (0x00056803) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8ed,	// (0x00056803) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x00059af2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x00059af2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x776d,	// (0x00051683) title_pane_g1_ParamLimits

0x777a,	// (0x00051690) title_pane_g2_ParamLimits

0xf56a,	// (0x00059480) title_pane_g_ParamLimits

0x8711,	// (0x00052627) aid_call2_pane

0x8719,	// (0x0005262f) aid_call_pane

0x8721,	// (0x00052637) popup_clock_analogue_window_g1

0x8721,	// (0x00052637) popup_clock_analogue_window_g2

0x58dd,	// (0x0004f7f3) popup_clock_analogue_window_g3

0x58e6,	// (0x0004f7fc) popup_clock_analogue_window_g4

0x7759,	// (0x0005166f) popup_clock_analogue_window_g5

0x0004,

0xf719,	// (0x0005962f) popup_clock_analogue_window_g

0x58ee,	// (0x0004f804) popup_clock_analogue_window_t1

0x58fc,	// (0x0004f812) clock_digital_number_pane_ParamLimits

0x58fc,	// (0x0004f812) clock_digital_number_pane

0x5908,	// (0x0004f81e) clock_digital_number_pane_cp02_ParamLimits

0x5908,	// (0x0004f81e) clock_digital_number_pane_cp02

0x5914,	// (0x0004f82a) clock_digital_number_pane_cp03_ParamLimits

0x5914,	// (0x0004f82a) clock_digital_number_pane_cp03

0x5920,	// (0x0004f836) clock_digital_number_pane_cp04_ParamLimits

0x5920,	// (0x0004f836) clock_digital_number_pane_cp04

0x592c,	// (0x0004f842) clock_digital_separator_pane_ParamLimits

0x592c,	// (0x0004f842) clock_digital_separator_pane

0x5938,	// (0x0004f84e) popup_clock_digital_window_t1_ParamLimits

0x5938,	// (0x0004f84e) popup_clock_digital_window_t1

0x7759,	// (0x0005166f) clock_digital_number_pane_g1

0x7759,	// (0x0005166f) clock_digital_number_pane_g2

0x0001,

0xf724,	// (0x0005963a) clock_digital_number_pane_g

0x7759,	// (0x0005166f) clock_digital_separator_pane_g1

0x7759,	// (0x0005166f) clock_digital_separator_pane_g2

0x0001,

0xf724,	// (0x0005963a) clock_digital_separator_pane_g

0x962b,	// (0x00053541) aid_fill_nsta_ParamLimits

0x976d,	// (0x00053683) indicator_nsta_pane_ParamLimits

0x98df,	// (0x000537f5) popup_clock_analogue_window

0x98df,	// (0x000537f5) popup_clock_digital_window

0x7843,	// (0x00051759) grid_indicator_nsta_pane_ParamLimits

0xbaf8,	// (0x00055a0e) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x000599b8) clock_nsta_pane_t

0x58a1,	// (0x0004f7b7) aid_size_max_handle

0x58ab,	// (0x0004f7c1) aid_size_min_handle

0x8cf2,	// (0x00052c08) editor_scroll_pane

0xc908,	// (0x0005681e) ex_editor_pane

0x8229,	// (0x0005213f) scroll_pane_cp13

0x804e,	// (0x00051f64) scroll_pane_cp14

0x874b,	// (0x00052661) scroll_pane_cp36

0x8777,	// (0x0005268d) list_single_graphic_hl_pane_cp2_ParamLimits

0x8777,	// (0x0005268d) list_single_graphic_hl_pane_cp2

0x7104,	// (0x0005101a) list_single_graphic_hl_pane_ParamLimits

0x7104,	// (0x0005101a) list_single_graphic_hl_pane

0x7569,	// (0x0005147f) aid_size_min_hl_cp1

0xc910,	// (0x00056826) list_highlight_pane_cp34_ParamLimits

0xc910,	// (0x00056826) list_highlight_pane_cp34

0xc921,	// (0x00056837) list_single_graphic_hl_pane_g1_ParamLimits

0xc921,	// (0x00056837) list_single_graphic_hl_pane_g1

0x7572,	// (0x00051488) list_single_graphic_hl_pane_g2_ParamLimits

0x7572,	// (0x00051488) list_single_graphic_hl_pane_g2

0x7572,	// (0x00051488) list_single_graphic_hl_pane_g3_ParamLimits

0x7572,	// (0x00051488) list_single_graphic_hl_pane_g3

0x8c63,	// (0x00052b79) list_single_graphic_hl_pane_g4_ParamLimits

0x8c63,	// (0x00052b79) list_single_graphic_hl_pane_g4

0x757e,	// (0x00051494) list_single_graphic_hl_pane_g5_ParamLimits

0x757e,	// (0x00051494) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x00059b03) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x00059b03) list_single_graphic_hl_pane_g

0x7592,	// (0x000514a8) list_single_graphic_hl_pane_t1_ParamLimits

0x7592,	// (0x000514a8) list_single_graphic_hl_pane_t1

0xc92e,	// (0x00056844) aid_size_min_hl_cp2

0xc937,	// (0x0005684d) list_highlight_pane_cp34_cp2_ParamLimits

0xc937,	// (0x0005684d) list_highlight_pane_cp34_cp2

0xc921,	// (0x00056837) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc921,	// (0x00056837) list_single_graphic_hl_pane_g1_cp2

0xc944,	// (0x0005685a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc944,	// (0x0005685a) list_single_graphic_hl_pane_g2_cp2

0xc950,	// (0x00056866) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc950,	// (0x00056866) list_single_graphic_hl_pane_g3_cp2

0x9e3d,	// (0x00053d53) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x9e3d,	// (0x00053d53) list_single_graphic_hl_pane_g4_cp2

0xc95e,	// (0x00056874) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc95e,	// (0x00056874) list_single_graphic_hl_pane_g5_cp2

0x5bea,	// (0x0004fb00) control_pane_g4_ParamLimits

0x5bea,	// (0x0004fb00) control_pane_g4

0x9072,	// (0x00052f88) bg_popup_sub_pane_cp10_ParamLimits

0xc123,	// (0x00056039) list_choice_list_pane_ParamLimits

0xc132,	// (0x00056048) scroll_pane_cp23

0x7acc,	// (0x000519e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc72e,	// (0x00056644) list_preview_fixed_pane_ParamLimits

0xc744,	// (0x0005665a) list_preview_fixed_pane_cp_ParamLimits

0xc744,	// (0x0005665a) list_preview_fixed_pane_cp

0xc750,	// (0x00056666) popup_preview_fixed_window_g1_ParamLimits

0xc750,	// (0x00056666) popup_preview_fixed_window_g1

0xc75c,	// (0x00056672) popup_preview_fixed_window_g2_ParamLimits

0xc75c,	// (0x00056672) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x00059a8b) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x00059a8b) popup_preview_fixed_window_g

0x5815,	// (0x0004f72b) aid_navi_side_left_pane_ParamLimits

0x582a,	// (0x0004f740) aid_navi_side_right_pane_ParamLimits

0x5842,	// (0x0004f758) navi_icon_pane_stacon_ParamLimits

0x5856,	// (0x0004f76c) navi_navi_pane_stacon_ParamLimits

0x5842,	// (0x0004f758) navi_text_pane_stacon_ParamLimits

0x774f,	// (0x00051665) main_text_info_pane

0xc988,	// (0x0005689e) listscroll_text_info_pane

0xc990,	// (0x000568a6) list_text_info_pane_ParamLimits

0xc990,	// (0x000568a6) list_text_info_pane

0xc99f,	// (0x000568b5) scroll_pane_cp24_ParamLimits

0xc99f,	// (0x000568b5) scroll_pane_cp24

0xc9bd,	// (0x000568d3) list_text_info_pane_t1_ParamLimits

0xc9bd,	// (0x000568d3) list_text_info_pane_t1

0x90b4,	// (0x00052fca) popup_fast_swap2_window_ParamLimits

0x90b4,	// (0x00052fca) popup_fast_swap2_window

0xc9ee,	// (0x00056904) aid_size_cell_fast2

0x774f,	// (0x00051665) bg_popup_window_pane_cp17

0x9fc6,	// (0x00053edc) heading_pane_cp2

0x7d18,	// (0x00051c2e) listscroll_fast2_pane

0xc9f8,	// (0x0005690e) grid_fast2_pane

0xca02,	// (0x00056918) listscroll_fast2_pane_g1

0xca0a,	// (0x00056920) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x00059b0e) listscroll_fast2_pane_g

0x8229,	// (0x0005213f) scroll_pane_cp26

0xca14,	// (0x0005692a) cell_fast2_pane_ParamLimits

0xca14,	// (0x0005692a) cell_fast2_pane

0xca29,	// (0x0005693f) cell_fast2_pane_g1

0xca32,	// (0x00056948) cell_fast2_pane_g2

0xca3b,	// (0x00056951) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x00059b13) cell_fast2_pane_g

0x7e0b,	// (0x00051d21) grid_highlight_pane_cp9

0x7e20,	// (0x00051d36) main_eswt_pane_ParamLimits

0x7e20,	// (0x00051d36) main_eswt_pane

0xc9b4,	// (0x000568ca) list_single_text_info_pane

0xca43,	// (0x00056959) eswt_ctrl_button_pane

0xca43,	// (0x00056959) eswt_ctrl_canvas_pane

0xca4b,	// (0x00056961) eswt_ctrl_combo_pane

0xca43,	// (0x00056959) eswt_ctrl_default_pane

0xca43,	// (0x00056959) eswt_ctrl_label_pane

0xca53,	// (0x00056969) eswt_ctrl_wait_pane

0xca5b,	// (0x00056971) eswt_shell_pane

0x774f,	// (0x00051665) listscroll_eswt_app_pane

0xca7b,	// (0x00056991) popup_eswt_tasktip_window_ParamLimits

0xca7b,	// (0x00056991) popup_eswt_tasktip_window

0x9bf8,	// (0x00053b0e) bg_popup_window_pane_cp18

0xca8c,	// (0x000569a2) eswt_control_pane_g1_ParamLimits

0xca8c,	// (0x000569a2) eswt_control_pane_g1

0xca99,	// (0x000569af) eswt_control_pane_g2_ParamLimits

0xca99,	// (0x000569af) eswt_control_pane_g2

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_ParamLimits

0xcaa6,	// (0x000569bc) eswt_control_pane_g3

0xcab3,	// (0x000569c9) eswt_control_pane_g4_ParamLimits

0xcab3,	// (0x000569c9) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x00059b1a) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x00059b1a) eswt_control_pane_g

0x80af,	// (0x00051fc5) bg_button_pane_ParamLimits

0x80af,	// (0x00051fc5) bg_button_pane

0x7e20,	// (0x00051d36) common_borders_pane_copy2_ParamLimits

0x7e20,	// (0x00051d36) common_borders_pane_copy2

0xcac0,	// (0x000569d6) control_button_pane_g1_ParamLimits

0xcac0,	// (0x000569d6) control_button_pane_g1

0xcacc,	// (0x000569e2) control_button_pane_g2_ParamLimits

0xcacc,	// (0x000569e2) control_button_pane_g2

0xcad8,	// (0x000569ee) control_button_pane_g3_ParamLimits

0xcad8,	// (0x000569ee) control_button_pane_g3

0x0002,

0xfc0d,	// (0x00059b23) control_button_pane_g_ParamLimits

0xfc0d,	// (0x00059b23) control_button_pane_g

0xcaec,	// (0x00056a02) control_button_pane_t1

0xcafa,	// (0x00056a10) control_button_pane_t2

0x0001,

0xfc14,	// (0x00059b2a) control_button_pane_t

0x9b08,	// (0x00053a1e) bg_button_pane_g1

0x9b18,	// (0x00053a2e) bg_button_pane_g2

0x9b10,	// (0x00053a26) bg_button_pane_g3

0x9b28,	// (0x00053a3e) bg_button_pane_g4

0x9b20,	// (0x00053a36) bg_button_pane_g5

0x9b30,	// (0x00053a46) bg_button_pane_g6

0x9b38,	// (0x00053a4e) bg_button_pane_g7

0x9b48,	// (0x00053a5e) bg_button_pane_g8

0x9b40,	// (0x00053a56) bg_button_pane_g9

0x0008,

0xf87c,	// (0x00059792) bg_button_pane_g

0xc0de,	// (0x00055ff4) common_borders_pane_ParamLimits

0xc0de,	// (0x00055ff4) common_borders_pane

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy1_ParamLimits

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy1

0xca99,	// (0x000569af) eswt_control_pane_g2_copy1_ParamLimits

0xca99,	// (0x000569af) eswt_control_pane_g2_copy1

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy1_ParamLimits

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy1

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy1_ParamLimits

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy1

0xc119,	// (0x0005602f) bg_eswt_ctrl_canvas_pane_g1

0xc0de,	// (0x00055ff4) common_borders_pane_cp2_ParamLimits

0xc0de,	// (0x00055ff4) common_borders_pane_cp2

0xc0de,	// (0x00055ff4) common_borders_pane_cp3_ParamLimits

0xc0de,	// (0x00055ff4) common_borders_pane_cp3

0xcb08,	// (0x00056a1e) separator_horizontal_pane

0xcb10,	// (0x00056a26) separator_vertical_pane

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy2_ParamLimits

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy2

0xca99,	// (0x000569af) eswt_control_pane_g2_copy2_ParamLimits

0xca99,	// (0x000569af) eswt_control_pane_g2_copy2

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy2_ParamLimits

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy2

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy2_ParamLimits

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy2

0x774f,	// (0x00051665) common_borders_pane_cp4

0xcb19,	// (0x00056a2f) separator_horizontal_pane_g1

0xcb22,	// (0x00056a38) separator_horizontal_pane_g2

0xcb2b,	// (0x00056a41) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x00059b2f) separator_horizontal_pane_g

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy3_ParamLimits

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy3

0xca99,	// (0x000569af) eswt_control_pane_g2_copy3_ParamLimits

0xca99,	// (0x000569af) eswt_control_pane_g2_copy3

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy3_ParamLimits

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy3

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy3_ParamLimits

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy3

0x774f,	// (0x00051665) common_borders_pane_cp5

0xcb34,	// (0x00056a4a) separator_vertical_pane_g1

0xcb3d,	// (0x00056a53) separator_vertical_pane_g2

0xcb46,	// (0x00056a5c) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x00059b36) separator_vertical_pane_g

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy4_ParamLimits

0xca8c,	// (0x000569a2) eswt_control_pane_g1_copy4

0xca99,	// (0x000569af) eswt_control_pane_g2_copy4_ParamLimits

0xca99,	// (0x000569af) eswt_control_pane_g2_copy4

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy4_ParamLimits

0xcaa6,	// (0x000569bc) eswt_control_pane_g3_copy4

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy4_ParamLimits

0xcab3,	// (0x000569c9) eswt_control_pane_g4_copy4

0xcb4f,	// (0x00056a65) eswt_ctrl_combo_button_pane

0xcb57,	// (0x00056a6d) eswt_ctrl_input_pane

0xcb5f,	// (0x00056a75) popup_choice_list_window_cp70

0xcb67,	// (0x00056a7d) eswt_ctrl_input_pane_t1

0x774f,	// (0x00051665) input_focus_pane_cp70

0xc0de,	// (0x00055ff4) bg_button_pane_cp70_ParamLimits

0xc0de,	// (0x00055ff4) bg_button_pane_cp70

0xcb75,	// (0x00056a8b) eswt_ctrl_combo_button_pane_g1

0xcb7d,	// (0x00056a93) wait_bar_pane_cp70

0x9bf8,	// (0x00053b0e) bg_popup_window_pane_cp70_ParamLimits

0x9bf8,	// (0x00053b0e) bg_popup_window_pane_cp70

0xcb85,	// (0x00056a9b) popup_eswt_tasktip_window_t1

0xcb9b,	// (0x00056ab1) wait_bar_pane_cp71_ParamLimits

0xcb9b,	// (0x00056ab1) wait_bar_pane_cp71

0xcba7,	// (0x00056abd) grid_eswt_app_pane

0x8547,	// (0x0005245d) scroll_pane_cp70

0xcbb0,	// (0x00056ac6) cell_eswt_app_pane_ParamLimits

0xcbb0,	// (0x00056ac6) cell_eswt_app_pane

0xcbe0,	// (0x00056af6) cell_eswt_app_pane_g1_ParamLimits

0xcbe0,	// (0x00056af6) cell_eswt_app_pane_g1

0xcc0f,	// (0x00056b25) cell_eswt_app_pane_g2_ParamLimits

0xcc0f,	// (0x00056b25) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x00059b3d) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x00059b3d) cell_eswt_app_pane_g

0xcc38,	// (0x00056b4e) cell_eswt_app_pane_t1_ParamLimits

0xcc38,	// (0x00056b4e) cell_eswt_app_pane_t1

0xcc6a,	// (0x00056b80) grid_highlight_pane_cp70_ParamLimits

0xcc6a,	// (0x00056b80) grid_highlight_pane_cp70

0x86c4,	// (0x000525da) set_content_pane_g1

0x8fc0,	// (0x00052ed6) status_small_volume_pane

0x651f,	// (0x00050435) status_small_volume_pane_g1

0x6527,	// (0x0005043d) volume_small2_pane

0x6530,	// (0x00050446) volume_small2_pane_g1

0x6539,	// (0x0005044f) volume_small2_pane_g2

0x6542,	// (0x00050458) volume_small2_pane_g3

0x654b,	// (0x00050461) volume_small2_pane_g4

0x6554,	// (0x0005046a) volume_small2_pane_g5

0x655d,	// (0x00050473) volume_small2_pane_g6

0x6566,	// (0x0005047c) volume_small2_pane_g7

0x656f,	// (0x00050485) volume_small2_pane_g8

0x6578,	// (0x0005048e) volume_small2_pane_g9

0x6581,	// (0x00050497) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x00059b42) volume_small2_pane_g

0xc4f3,	// (0x00056409) fep_vkb_top_text_pane_g1_ParamLimits

0xc50e,	// (0x00056424) fep_vkb_top_text_pane_t1_ParamLimits

0xc768,	// (0x0005667e) popup_preview_fixed_window_g3_ParamLimits

0xc768,	// (0x0005667e) popup_preview_fixed_window_g3

0x9561,	// (0x00053477) popup_toolbar_trans_pane

0xaf46,	// (0x00054e5c) aid_height_set_list_ParamLimits

0xaf57,	// (0x00054e6d) aid_size_parent_ParamLimits

0x9072,	// (0x00052f88) list_highlight_pane_cp2_ParamLimits

0x86c4,	// (0x000525da) set_content_pane_g1_ParamLimits

0x711f,	// (0x00051035) list_single_image_pane_ParamLimits

0x711f,	// (0x00051035) list_single_image_pane

0xcc76,	// (0x00056b8c) aid_size_cell_image_ParamLimits

0xcc76,	// (0x00056b8c) aid_size_cell_image

0xcc83,	// (0x00056b99) grid_single_image_pane_ParamLimits

0xcc83,	// (0x00056b99) grid_single_image_pane

0x8e67,	// (0x00052d7d) list_single_image_pane_g1_ParamLimits

0x8e67,	// (0x00052d7d) list_single_image_pane_g1

0xc795,	// (0x000566ab) list_single_image_pane_g2_ParamLimits

0xc795,	// (0x000566ab) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x00059b57) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x00059b57) list_single_image_pane_g

0x8e73,	// (0x00052d89) list_single_image_pane_t1_ParamLimits

0x8e73,	// (0x00052d89) list_single_image_pane_t1

0xcc91,	// (0x00056ba7) cell_image_list_pane_ParamLimits

0xcc91,	// (0x00056ba7) cell_image_list_pane

0xcca4,	// (0x00056bba) cell_image_list_pane_g1

0xccad,	// (0x00056bc3) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x00059b5c) cell_image_list_pane_g

0xccb6,	// (0x00056bcc) aid_size_cell_tb_trans_pane

0x80af,	// (0x00051fc5) bg_tb_trans_pane

0xccc8,	// (0x00056bde) grid_tb_trans_pane

0x9b08,	// (0x00053a1e) bg_tb_trans_pane_g1

0x9b18,	// (0x00053a2e) bg_tb_trans_pane_g2

0x9b10,	// (0x00053a26) bg_tb_trans_pane_g3

0x9b28,	// (0x00053a3e) bg_tb_trans_pane_g4

0x9b20,	// (0x00053a36) bg_tb_trans_pane_g5

0x9b48,	// (0x00053a5e) bg_tb_trans_pane_g6

0x9b40,	// (0x00053a56) bg_tb_trans_pane_g7

0x9b30,	// (0x00053a46) bg_tb_trans_pane_g8

0x9b38,	// (0x00053a4e) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x00059b61) bg_tb_trans_pane_g

0xccdc,	// (0x00056bf2) cell_toolbar_trans_pane_ParamLimits

0xccdc,	// (0x00056bf2) cell_toolbar_trans_pane

0xc119,	// (0x0005602f) cell_toolbar_trans_pane_g1

0xbce2,	// (0x00055bf8) list_form2_midp_pane_t1

0xbcf0,	// (0x00055c06) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x000599fe) list_form2_midp_pane_t

0xbcfe,	// (0x00055c14) scroll_pane_cp51_ParamLimits

0xbeba,	// (0x00055dd0) form2_midp_wait_pane_g1

0xbec3,	// (0x00055dd9) form2_midp_wait_pane_g2

0xbecc,	// (0x00055de2) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x00059a13) form2_midp_wait_pane_g

0x7843,	// (0x00051759) list_highlight_pane_cp21_ParamLimits

0xbf23,	// (0x00055e39) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf32,	// (0x00055e48) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x70a8,	// (0x00050fbe) list_single_2graphic_im_pane_ParamLimits

0x70a8,	// (0x00050fbe) list_single_2graphic_im_pane

0xcd02,	// (0x00056c18) list_single_2graphic_im_pane_g1_ParamLimits

0xcd02,	// (0x00056c18) list_single_2graphic_im_pane_g1

0xcd13,	// (0x00056c29) list_single_2graphic_im_pane_g2_ParamLimits

0xcd13,	// (0x00056c29) list_single_2graphic_im_pane_g2

0xcd1f,	// (0x00056c35) list_single_2graphic_im_pane_g3_ParamLimits

0xcd1f,	// (0x00056c35) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x00059b74) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x00059b74) list_single_2graphic_im_pane_g

0xcd3f,	// (0x00056c55) list_single_2graphic_im_pane_t1_ParamLimits

0xcd3f,	// (0x00056c55) list_single_2graphic_im_pane_t1

0xc774,	// (0x0005668a) list_single_graphic_2heading_pane_fp_ParamLimits

0xc774,	// (0x0005668a) list_single_graphic_2heading_pane_fp

0x73db,	// (0x000512f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x73db,	// (0x000512f1) list_single_graphic_2heading_pane_fp_g1

0xc789,	// (0x0005669f) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc789,	// (0x0005669f) list_single_graphic_2heading_pane_fp_g2

0x8e67,	// (0x00052d7d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8e67,	// (0x00052d7d) list_single_graphic_2heading_pane_fp_g3

0xc795,	// (0x000566ab) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc795,	// (0x000566ab) list_single_graphic_2heading_pane_fp_g4

0xc7a9,	// (0x000566bf) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc7a9,	// (0x000566bf) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x00059a9b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x00059a9b) list_single_graphic_2heading_pane_fp_g

0x75a8,	// (0x000514be) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x75a8,	// (0x000514be) list_single_graphic_2heading_pane_fp_t1

0x7413,	// (0x00051329) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7413,	// (0x00051329) list_single_graphic_2heading_pane_fp_t2

0x75be,	// (0x000514d4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x75be,	// (0x000514d4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x00059b7d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x00059b7d) list_single_graphic_2heading_pane_fp_t

0xc1b9,	// (0x000560cf) fep_hwr_write_pane_g5_ParamLimits

0xc1b9,	// (0x000560cf) fep_hwr_write_pane_g5

0xc1c5,	// (0x000560db) fep_hwr_write_pane_g6_ParamLimits

0xc1c5,	// (0x000560db) fep_hwr_write_pane_g6

0xca5b,	// (0x00056971) eswt_shell_pane_ParamLimits

0x9bf8,	// (0x00053b0e) bg_popup_window_pane_cp18_ParamLimits

0xae9f,	// (0x00054db5) heading_pane_cp70

0xcb85,	// (0x00056a9b) popup_eswt_tasktip_window_t1_ParamLimits

0x9680,	// (0x00053596) aid_touch_tab_arrow_left

0x968c,	// (0x000535a2) aid_touch_tab_arrow_right

0x778b,	// (0x000516a1) title_pane_g3_ParamLimits

0x778b,	// (0x000516a1) title_pane_g3

0x806e,	// (0x00051f84) set_value_pane_g1

0x9561,	// (0x00053477) popup_toolbar_trans_pane_ParamLimits

0xccb6,	// (0x00056bcc) aid_size_cell_tb_trans_pane_ParamLimits

0x80af,	// (0x00051fc5) bg_tb_trans_pane_ParamLimits

0xccc8,	// (0x00056bde) grid_tb_trans_pane_ParamLimits

0x7acc,	// (0x000519e2) cont_note_pane_ParamLimits

0x7acc,	// (0x000519e2) cont_note_pane

0x7e20,	// (0x00051d36) cont_snote2_single_text_pane_ParamLimits

0x7e20,	// (0x00051d36) cont_snote2_single_text_pane

0x7e20,	// (0x00051d36) cont_snote2_single_graphic_pane_ParamLimits

0x7e20,	// (0x00051d36) cont_snote2_single_graphic_pane

0xa1e1,	// (0x000540f7) cont_note_wait_pane_ParamLimits

0xa1e1,	// (0x000540f7) cont_note_wait_pane

0xa1e1,	// (0x000540f7) cont_note_image_pane_ParamLimits

0xa1e1,	// (0x000540f7) cont_note_image_pane

0xcd70,	// (0x00056c86) popup_note2_window_g1_ParamLimits

0xcd70,	// (0x00056c86) popup_note2_window_g1

0xcdaf,	// (0x00056cc5) popup_note2_window_t1_ParamLimits

0xcdaf,	// (0x00056cc5) popup_note2_window_t1

0xcdf4,	// (0x00056d0a) popup_note2_window_t2_ParamLimits

0xcdf4,	// (0x00056d0a) popup_note2_window_t2

0xce39,	// (0x00056d4f) popup_note2_window_t3_ParamLimits

0xce39,	// (0x00056d4f) popup_note2_window_t3

0xce7e,	// (0x00056d94) popup_note2_window_t4_ParamLimits

0xce7e,	// (0x00056d94) popup_note2_window_t4

0x7b50,	// (0x00051a66) popup_note2_window_t5_ParamLimits

0x7b50,	// (0x00051a66) popup_note2_window_t5

0x0004,

0xfc73,	// (0x00059b89) popup_note2_window_t_ParamLimits

0xfc73,	// (0x00059b89) popup_note2_window_t

0xcead,	// (0x00056dc3) popup_note2_image_window_g1_ParamLimits

0xcead,	// (0x00056dc3) popup_note2_image_window_g1

0xceb9,	// (0x00056dcf) popup_note2_image_window_g2_ParamLimits

0xceb9,	// (0x00056dcf) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x00059b94) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x00059b94) popup_note2_image_window_g

0xcecb,	// (0x00056de1) popup_note2_image_window_t1_ParamLimits

0xcecb,	// (0x00056de1) popup_note2_image_window_t1

0xcee3,	// (0x00056df9) popup_note2_image_window_t2_ParamLimits

0xcee3,	// (0x00056df9) popup_note2_image_window_t2

0xcefb,	// (0x00056e11) popup_note2_image_window_t3_ParamLimits

0xcefb,	// (0x00056e11) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x00059b99) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x00059b99) popup_note2_image_window_t

0xa1ef,	// (0x00054105) popup_note2_wait_window_g1_ParamLimits

0xa1ef,	// (0x00054105) popup_note2_wait_window_g1

0xcf17,	// (0x00056e2d) popup_note2_wait_window_g2_ParamLimits

0xcf17,	// (0x00056e2d) popup_note2_wait_window_g2

0xa207,	// (0x0005411d) popup_note2_wait_window_g3_ParamLimits

0xa207,	// (0x0005411d) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x00059ba0) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x00059ba0) popup_note2_wait_window_g

0xcf23,	// (0x00056e39) popup_note2_wait_window_t1_ParamLimits

0xcf23,	// (0x00056e39) popup_note2_wait_window_t1

0xcf41,	// (0x00056e57) popup_note2_wait_window_t2_ParamLimits

0xcf41,	// (0x00056e57) popup_note2_wait_window_t2

0xcf5f,	// (0x00056e75) popup_note2_wait_window_t3_ParamLimits

0xcf5f,	// (0x00056e75) popup_note2_wait_window_t3

0xcf71,	// (0x00056e87) popup_note2_wait_window_t4_ParamLimits

0xcf71,	// (0x00056e87) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x00059ba7) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x00059ba7) popup_note2_wait_window_t

0xcf83,	// (0x00056e99) wait_bar2_pane_ParamLimits

0xcf83,	// (0x00056e99) wait_bar2_pane

0xcf9b,	// (0x00056eb1) popup_snote2_single_text_window_g1_ParamLimits

0xcf9b,	// (0x00056eb1) popup_snote2_single_text_window_g1

0xcfc3,	// (0x00056ed9) popup_snote2_single_text_window_t1_ParamLimits

0xcfc3,	// (0x00056ed9) popup_snote2_single_text_window_t1

0xd00f,	// (0x00056f25) popup_snote2_single_text_window_t2_ParamLimits

0xd00f,	// (0x00056f25) popup_snote2_single_text_window_t2

0xd05b,	// (0x00056f71) popup_snote2_single_text_window_t3_ParamLimits

0xd05b,	// (0x00056f71) popup_snote2_single_text_window_t3

0xd09c,	// (0x00056fb2) popup_snote2_single_text_window_t4_ParamLimits

0xd09c,	// (0x00056fb2) popup_snote2_single_text_window_t4

0xd0d2,	// (0x00056fe8) popup_snote2_single_text_window_t5_ParamLimits

0xd0d2,	// (0x00056fe8) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x00059bb0) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x00059bb0) popup_snote2_single_text_window_t

0xd0fd,	// (0x00057013) popup_snote2_single_graphic_window_g1_ParamLimits

0xd0fd,	// (0x00057013) popup_snote2_single_graphic_window_g1

0xd125,	// (0x0005703b) popup_snote2_single_graphic_window_g2_ParamLimits

0xd125,	// (0x0005703b) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00059bbb) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00059bbb) popup_snote2_single_graphic_window_g

0xd14d,	// (0x00057063) popup_snote2_single_graphic_window_t1_ParamLimits

0xd14d,	// (0x00057063) popup_snote2_single_graphic_window_t1

0xd199,	// (0x000570af) popup_snote2_single_graphic_window_t2_ParamLimits

0xd199,	// (0x000570af) popup_snote2_single_graphic_window_t2

0xd05b,	// (0x00056f71) popup_snote2_single_graphic_window_t3_ParamLimits

0xd05b,	// (0x00056f71) popup_snote2_single_graphic_window_t3

0xd09c,	// (0x00056fb2) popup_snote2_single_graphic_window_t4_ParamLimits

0xd09c,	// (0x00056fb2) popup_snote2_single_graphic_window_t4

0xd0d2,	// (0x00056fe8) popup_snote2_single_graphic_window_t5_ParamLimits

0xd0d2,	// (0x00056fe8) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x00059bc0) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x00059bc0) popup_snote2_single_graphic_window_t

0xbbbb,	// (0x00055ad1) clock_nsta_pane_cp2_t1

0xbbbb,	// (0x00055ad1) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x000599d4) clock_nsta_pane_cp2_t

0x5591,	// (0x0004f4a7) form_field_data_wide_pane_g1_ParamLimits

0x80c9,	// (0x00051fdf) form_field_data_wide_pane_g2_ParamLimits

0x80c9,	// (0x00051fdf) form_field_data_wide_pane_g2

0x80d5,	// (0x00051feb) form_field_data_wide_pane_g3_ParamLimits

0x80d5,	// (0x00051feb) form_field_data_wide_pane_g3

0x0002,

0xf69c,	// (0x000595b2) form_field_data_wide_pane_g_ParamLimits

0xf69c,	// (0x000595b2) form_field_data_wide_pane_g

0xba94,	// (0x000559aa) grid_touch_3_pane_ParamLimits

0xba94,	// (0x000559aa) grid_touch_3_pane

0xd1e5,	// (0x000570fb) cell_touch_3_pane_ParamLimits

0xd1e5,	// (0x000570fb) cell_touch_3_pane

0xc119,	// (0x0005602f) cell_touch_3_pane_g1

0xc119,	// (0x0005602f) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x00059a59) cell_touch_3_pane_g

0x7b82,	// (0x00051a98) cont_query_data_pane

0x7b8a,	// (0x00051aa0) cont_query_data_pane_cp1

0xd213,	// (0x00057129) button_value_adjust_pane_cp7

0xd21b,	// (0x00057131) query_popup_pane_cp3

0x87e6,	// (0x000526fc) bg_popup_sub_pane_cp22_ParamLimits

0x5957,	// (0x0004f86d) navi_navi_volume_pane_cp2

0x5972,	// (0x0004f888) popup_side_volume_key_window_g2

0x5981,	// (0x0004f897) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x00059644) popup_side_volume_key_window_g

0x599e,	// (0x0004f8b4) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0005964b) popup_side_volume_key_window_t

0x8a9d,	// (0x000529b3) popup_side_volume_key_window_ParamLimits

0x519e,	// (0x0004f0b4) list_double_graphic_pane_g4_ParamLimits

0x519e,	// (0x0004f0b4) list_double_graphic_pane_g4

0x70e5,	// (0x00050ffb) list_single_2heading_msg_pane_ParamLimits

0x70e5,	// (0x00050ffb) list_single_2heading_msg_pane

0x75de,	// (0x000514f4) list_single_2heading_msg_pane_g1_ParamLimits

0x75de,	// (0x000514f4) list_single_2heading_msg_pane_g1

0x8c2b,	// (0x00052b41) list_single_2heading_msg_pane_g2_ParamLimits

0x8c2b,	// (0x00052b41) list_single_2heading_msg_pane_g2

0x75ea,	// (0x00051500) list_single_2heading_msg_pane_g3_ParamLimits

0x75ea,	// (0x00051500) list_single_2heading_msg_pane_g3

0x75f6,	// (0x0005150c) list_single_2heading_msg_pane_g4_ParamLimits

0x75f6,	// (0x0005150c) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00059bcb) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00059bcb) list_single_2heading_msg_pane_g

0x760e,	// (0x00051524) list_single_2heading_msg_pane_t1_ParamLimits

0x760e,	// (0x00051524) list_single_2heading_msg_pane_t1

0x7636,	// (0x0005154c) list_single_2heading_msg_pane_t2_ParamLimits

0x7636,	// (0x0005154c) list_single_2heading_msg_pane_t2

0x766a,	// (0x00051580) list_single_2heading_msg_pane_t3_ParamLimits

0x766a,	// (0x00051580) list_single_2heading_msg_pane_t3

0x76a3,	// (0x000515b9) list_single_2heading_msg_pane_t4_ParamLimits

0x76a3,	// (0x000515b9) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00059bd4) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00059bd4) list_single_2heading_msg_pane_t

0x7797,	// (0x000516ad) title_pane_g4_ParamLimits

0x7797,	// (0x000516ad) title_pane_g4

0x5765,	// (0x0004f67b) title_pane_stacon_g3_ParamLimits

0x5765,	// (0x0004f67b) title_pane_stacon_g3

0xcd33,	// (0x00056c49) list_single_2graphic_im_pane_g4_ParamLimits

0xcd33,	// (0x00056c49) list_single_2graphic_im_pane_g4

0xac46,	// (0x00054b5c) popup_side_volume_key_window_cp

0xb427,	// (0x0005533d) main_idle_act2_pane_t1

0x5d23,	// (0x0004fc39) toolbar_button_pane_g10

0x8018,	// (0x00051f2e) popup_toolbar_window_cp1

0xbbac,	// (0x00055ac2) clock_nsta_pane_cp_t1

0xbbac,	// (0x00055ac2) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x000599cf) clock_nsta_pane_cp_t

0x5957,	// (0x0004f86d) navi_navi_volume_pane_cp2_ParamLimits

0x5966,	// (0x0004f87c) popup_side_volume_key_window_g1_ParamLimits

0x5972,	// (0x0004f888) popup_side_volume_key_window_g2_ParamLimits

0x5981,	// (0x0004f897) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x00059644) popup_side_volume_key_window_g_ParamLimits

0x618b,	// (0x000500a1) fep_hwr_aid_pane

0x6232,	// (0x00050148) bg_fep_hwr_top_pane_g4_ParamLimits

0xc189,	// (0x0005609f) fep_hwr_top_pane_g1_ParamLimits

0xc19b,	// (0x000560b1) fep_hwr_top_pane_g2_ParamLimits

0x6252,	// (0x00050168) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x00059a24) fep_hwr_top_pane_g_ParamLimits

0x6267,	// (0x0005017d) fep_hwr_top_text_pane_ParamLimits

0xaa09,	// (0x0005491f) aid_touch_tab_arrow_arrow_2

0xaa12,	// (0x00054928) aid_touch_tab_arrow_left_2

0x619f,	// (0x000500b5) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x61d6,	// (0x000500ec) fep_hwr_prediction_pane

0xc2fb,	// (0x00056211) fep_vkb_prediction_pane

0xc3ff,	// (0x00056315) fep_vkb_side_pane_g3_ParamLimits

0xc3ff,	// (0x00056315) fep_vkb_side_pane_g3

0x63e2,	// (0x000502f8) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x644e,	// (0x00050364) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x645b,	// (0x00050371) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x00059ad3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x658a,	// (0x000504a0) fep_hwr_prediction_pane_g1

0x6594,	// (0x000504aa) fep_hwr_prediction_pane_g2

0x659c,	// (0x000504b2) fep_hwr_prediction_pane_g3

0x65a4,	// (0x000504ba) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00059bdd) fep_hwr_prediction_pane_g

0xd240,	// (0x00057156) fep_vkb_prediction_pane_g1

0xd24a,	// (0x00057160) fep_vkb_prediction_pane_g2

0xd252,	// (0x00057168) fep_vkb_prediction_pane_g3

0xd25a,	// (0x00057170) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00059be6) fep_vkb_prediction_pane_g

0x600b,	// (0x0004ff21) slider_set_pane_g3

0x601f,	// (0x0004ff35) slider_set_pane_g4

0x6037,	// (0x0004ff4d) slider_set_pane_g5

0x600b,	// (0x0004ff21) slider_set_pane_g6

0x604d,	// (0x0004ff63) slider_set_pane_g7

0xb0bc,	// (0x00054fd2) slider_form_pane_g3

0xb0c5,	// (0x00054fdb) slider_form_pane_g4

0xb0cd,	// (0x00054fe3) slider_form_pane_g5

0xb0bc,	// (0x00054fd2) slider_form_pane_g6

0xb0d5,	// (0x00054feb) slider_form_pane_g7

0xb6e4,	// (0x000555fa) slider_set_pane_vc_g3

0xb6ed,	// (0x00055603) slider_set_pane_vc_g4

0xb6f6,	// (0x0005560c) slider_set_pane_vc_g5

0xb6e4,	// (0x000555fa) slider_set_pane_vc_g6

0xb6ff,	// (0x00055615) slider_set_pane_vc_g7

0xb6e4,	// (0x000555fa) slider_form_pane_vc_g1

0xb6ed,	// (0x00055603) slider_form_pane_vc_g2

0xb6f6,	// (0x0005560c) slider_form_pane_vc_g3

0xb6e4,	// (0x000555fa) slider_form_pane_vc_g4

0xb8b2,	// (0x000557c8) slider_form_pane_vc_g5

0x0004,

0xfa92,	// (0x000599a8) slider_form_pane_vc_g

0x774f,	// (0x00051665) main_idle_act3_pane

0xd262,	// (0x00057178) ai3_links_pane

0xd26b,	// (0x00057181) popup_ai3_data_window_ParamLimits

0xd26b,	// (0x00057181) popup_ai3_data_window

0x774f,	// (0x00051665) grid_ai3_links_pane

0xd285,	// (0x0005719b) cell_ai3_links_pane_ParamLimits

0xd285,	// (0x0005719b) cell_ai3_links_pane

0xd29d,	// (0x000571b3) bg_popup_sub_pane_cp11

0xd2aa,	// (0x000571c0) cell_ai3_links_pane_g1

0x774f,	// (0x00051665) bg_popup_sub_pane_cp12

0xd2cf,	// (0x000571e5) heading_ai3_data_pane

0xd2d7,	// (0x000571ed) list_ai3_gene_pane

0xd2e3,	// (0x000571f9) popup_ai3_data_window_g1

0xd2eb,	// (0x00057201) heading_ai3_data_pane_g1

0xd2f3,	// (0x00057209) heading_ai3_data_pane_t1

0xd301,	// (0x00057217) list_double_ai3_gene_pane_ParamLimits

0xd301,	// (0x00057217) list_double_ai3_gene_pane

0xd30e,	// (0x00057224) list_single_ai3_gene_pane_ParamLimits

0xd30e,	// (0x00057224) list_single_ai3_gene_pane

0xc0de,	// (0x00055ff4) list_highlight_pane_cp7_ParamLimits

0xc0de,	// (0x00055ff4) list_highlight_pane_cp7

0xd31b,	// (0x00057231) list_single_a13_gene_pane_t1_ParamLimits

0xd31b,	// (0x00057231) list_single_a13_gene_pane_t1

0xd332,	// (0x00057248) list_single_ai3_gene_pane_g1

0xd33b,	// (0x00057251) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x00059bef) list_single_ai3_gene_pane_g

0xd343,	// (0x00057259) list_double_ai3_gene_pane_g1_ParamLimits

0xd343,	// (0x00057259) list_double_ai3_gene_pane_g1

0xd34f,	// (0x00057265) list_double_ai3_gene_pane_t1_ParamLimits

0xd34f,	// (0x00057265) list_double_ai3_gene_pane_t1

0xd36b,	// (0x00057281) list_double_ai3_gene_pane_t2_ParamLimits

0xd36b,	// (0x00057281) list_double_ai3_gene_pane_t2

0xd381,	// (0x00057297) list_double_ai3_gene_pane_t3_ParamLimits

0xd381,	// (0x00057297) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x00059bf4) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x00059bf4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x75d4,	// (0x000514ea) aid_size_min_col_2

0xd22c,	// (0x00057142) aid_size_min_msg_ParamLimits

0xd22c,	// (0x00057142) aid_size_min_msg

0xc4ff,	// (0x00056415) fep_vkb_top_text_pane_g2_ParamLimits

0xc4ff,	// (0x00056415) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x00059a54) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x00059a54) fep_vkb_top_text_pane_g

0x774f,	// (0x00051665) main_hc_apps_shell_pane

0xd39e,	// (0x000572b4) grid_hc_apps_pane_ParamLimits

0xd39e,	// (0x000572b4) grid_hc_apps_pane

0xd3ad,	// (0x000572c3) list_hc_apps_pane

0xd3b5,	// (0x000572cb) scroll_pane_cp37_ParamLimits

0xd3b5,	// (0x000572cb) scroll_pane_cp37

0xd3c1,	// (0x000572d7) cell_hc_apps_pane_ParamLimits

0xd3c1,	// (0x000572d7) cell_hc_apps_pane

0xd46f,	// (0x00057385) cell_hc_apps_pane_g1_ParamLimits

0xd46f,	// (0x00057385) cell_hc_apps_pane_g1

0xd4a0,	// (0x000573b6) cell_hc_apps_pane_g2_ParamLimits

0xd4a0,	// (0x000573b6) cell_hc_apps_pane_g2

0xd4bc,	// (0x000573d2) cell_hc_apps_pane_g3_ParamLimits

0xd4bc,	// (0x000573d2) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x00059bfb) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x00059bfb) cell_hc_apps_pane_g

0xd4de,	// (0x000573f4) cell_hc_apps_pane_t1_ParamLimits

0xd4de,	// (0x000573f4) cell_hc_apps_pane_t1

0x7acc,	// (0x000519e2) grid_highlight_pane_cp10_ParamLimits

0x7acc,	// (0x000519e2) grid_highlight_pane_cp10

0xd51e,	// (0x00057434) list_single_hc_apps_pane_ParamLimits

0xd51e,	// (0x00057434) list_single_hc_apps_pane

0xd57a,	// (0x00057490) list_single_hc_apps_pane_g1

0x76c8,	// (0x000515de) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x00059c02) list_single_hc_apps_pane_g

0x76e1,	// (0x000515f7) list_single_hc_apps_pane_g2_copy1

0x76fd,	// (0x00051613) list_single_hc_apps_pane_t1

0x7843,	// (0x00051759) bg_set_opt_pane_cp_ParamLimits

0x4f68,	// (0x0004ee7e) setting_slider_pane_t1_ParamLimits

0x4f81,	// (0x0004ee97) setting_slider_pane_t2_ParamLimits

0x4f9b,	// (0x0004eeb1) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00059490) setting_slider_pane_t_ParamLimits

0x4fb3,	// (0x0004eec9) slider_set_pane_ParamLimits

0x5bff,	// (0x0004fb15) control_pane_g5_ParamLimits

0x5bff,	// (0x0004fb15) control_pane_g5

0xaf0b,	// (0x00054e21) slider_set_pane_g1_ParamLimits

0x5fff,	// (0x0004ff15) slider_set_pane_g2_ParamLimits

0x600b,	// (0x0004ff21) slider_set_pane_g3_ParamLimits

0x601f,	// (0x0004ff35) slider_set_pane_g4_ParamLimits

0x6037,	// (0x0004ff4d) slider_set_pane_g5_ParamLimits

0x600b,	// (0x0004ff21) slider_set_pane_g6_ParamLimits

0x604d,	// (0x0004ff63) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x00059890) slider_set_pane_g_ParamLimits

0x8b7e,	// (0x00052a94) navi_icon_text_pane_ParamLimits

0x9641,	// (0x00053557) aid_fill_nsta_2_ParamLimits

0x9680,	// (0x00053596) aid_touch_tab_arrow_left_ParamLimits

0x968c,	// (0x000535a2) aid_touch_tab_arrow_right_ParamLimits

0x96f8,	// (0x0005360e) clock_nsta_pane_ParamLimits

0xa9e5,	// (0x000548fb) navi_icon_pane_g1_ParamLimits

0xa9f4,	// (0x0005490a) navi_text_pane_t1_ParamLimits

0xbcb6,	// (0x00055bcc) navi_icon_text_pane_g1_ParamLimits

0xbcc5,	// (0x00055bdb) navi_icon_text_pane_t1_ParamLimits

0xd57a,	// (0x00057490) list_single_hc_apps_pane_g1_ParamLimits

0x76c8,	// (0x000515de) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x00059c02) list_single_hc_apps_pane_g_ParamLimits

0x76e1,	// (0x000515f7) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x76fd,	// (0x00051613) list_single_hc_apps_pane_t1_ParamLimits

0x4e7c,	// (0x0004ed92) popup_toolbar2_fixed_window_ParamLimits

0x4e7c,	// (0x0004ed92) popup_toolbar2_fixed_window

0x9557,	// (0x0005346d) popup_toolbar2_float_window

0x774f,	// (0x00051665) bg_popup_sub_pane_cp27

0xd593,	// (0x000574a9) grid_toolbar2_float_pane

0x774f,	// (0x00051665) bg_popup_sub_pane_cp26

0xd593,	// (0x000574a9) grid_toolbar2_fixed_pane

0xd59b,	// (0x000574b1) cell_toolbar2_fixed_pane_ParamLimits

0xd59b,	// (0x000574b1) cell_toolbar2_fixed_pane

0xd5ab,	// (0x000574c1) cell_toolbar2_fixed_pane_g1

0xd5b4,	// (0x000574ca) toolbar2_fixed_button_pane

0x9b08,	// (0x00053a1e) toolbar2_fixed_button_pane_g1

0x9b18,	// (0x00053a2e) toolbar2_fixed_button_pane_g2

0x9b10,	// (0x00053a26) toolbar2_fixed_button_pane_g3

0x9b28,	// (0x00053a3e) toolbar2_fixed_button_pane_g4

0x9b20,	// (0x00053a36) toolbar2_fixed_button_pane_g5

0x9b30,	// (0x00053a46) toolbar2_fixed_button_pane_g6

0x9b38,	// (0x00053a4e) toolbar2_fixed_button_pane_g7

0x9b48,	// (0x00053a5e) toolbar2_fixed_button_pane_g8

0x9b40,	// (0x00053a56) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x00059792) toolbar2_fixed_button_pane_g

0xd5bc,	// (0x000574d2) cell_toolbar2_float_pane_ParamLimits

0xd5bc,	// (0x000574d2) cell_toolbar2_float_pane

0xd5cd,	// (0x000574e3) cell_toolbar2_float_pane_g1

0xd5b4,	// (0x000574ca) toolbar2_fixed_button_pane_cp

0xc25b,	// (0x00056171) fep_vkb_accented_list_pane_ParamLimits

0xc25b,	// (0x00056171) fep_vkb_accented_list_pane

0x63c2,	// (0x000502d8) bg_popup_fep_shadow_pane_g9

0x8cf2,	// (0x00052c08) bg_popup_fep_shadow_pane_cp3

0x8210,	// (0x00052126) list_accented_list_pane

0xd5d6,	// (0x000574ec) list_single_accented_list_pane_ParamLimits

0xd5d6,	// (0x000574ec) list_single_accented_list_pane

0x8cf2,	// (0x00052c08) list_highlight_pane_cp10

0xd5e7,	// (0x000574fd) list_single_accented_list_pane_t1

0x94a7,	// (0x000533bd) popup_slider_window_ParamLimits

0x94a7,	// (0x000533bd) popup_slider_window

0xd223,	// (0x00057139) aid_indentation_list_msg

0xd6a1,	// (0x000575b7) bg_popup_window_pane_cp19

0xd70b,	// (0x00057621) popup_slider_window_g1

0xd727,	// (0x0005763d) popup_slider_window_g2

0xd743,	// (0x00057659) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x00059c07) popup_slider_window_g

0xd79f,	// (0x000576b5) popup_slider_window_t1

0xd813,	// (0x00057729) small_volume_slider_vertical_pane

0xc119,	// (0x0005602f) small_volume_slider_vertical_pane_g1

0xc119,	// (0x0005602f) small_volume_slider_vertical_pane_g2

0xd82f,	// (0x00057745) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x00059c19) small_volume_slider_vertical_pane_g

0x4c34,	// (0x0004eb4a) area_side_right_pane_ParamLimits

0x4c34,	// (0x0004eb4a) area_side_right_pane

0x65ac,	// (0x000504c2) aid_size_side_button_ParamLimits

0x65ac,	// (0x000504c2) aid_size_side_button

0x65c0,	// (0x000504d6) grid_sctrl_middle_pane_ParamLimits

0x65c0,	// (0x000504d6) grid_sctrl_middle_pane

0x65e0,	// (0x000504f6) sctrl_sk_bottom_pane

0x65f1,	// (0x00050507) sctrl_sk_top_pane

0x6603,	// (0x00050519) aid_touch_sctrl_top

0x6610,	// (0x00050526) bg_sctrl_sk_pane_ParamLimits

0x6610,	// (0x00050526) bg_sctrl_sk_pane

0x661e,	// (0x00050534) sctrl_sk_top_pane_g1

0x662b,	// (0x00050541) sctrl_sk_top_pane_t1

0x6603,	// (0x00050519) aid_touch_sctrl_bottom

0x6610,	// (0x00050526) bg_sctrl_sk_pane_cp_ParamLimits

0x6610,	// (0x00050526) bg_sctrl_sk_pane_cp

0x6646,	// (0x0005055c) sctrl_sk_bottom_pane_g1

0x662b,	// (0x00050541) sctrl_sk_bottom_pane_t1

0x664f,	// (0x00050565) cell_sctrl_middle_pane_ParamLimits

0x664f,	// (0x00050565) cell_sctrl_middle_pane

0x666a,	// (0x00050580) aid_touch_sctrl_middle_ParamLimits

0x666a,	// (0x00050580) aid_touch_sctrl_middle

0x667c,	// (0x00050592) bg_sctrl_middle_pane_ParamLimits

0x667c,	// (0x00050592) bg_sctrl_middle_pane

0x63e2,	// (0x000502f8) cell_sctrl_middle_pane_g1_ParamLimits

0x63e2,	// (0x000502f8) cell_sctrl_middle_pane_g1

0x668a,	// (0x000505a0) cell_sctrl_middle_pane_g2_ParamLimits

0x668a,	// (0x000505a0) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x00059c25) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x00059c25) cell_sctrl_middle_pane_g

0x9b08,	// (0x00053a1e) bg_sctrl_middle_pane_g1

0x9b10,	// (0x00053a26) bg_sctrl_middle_pane_g2

0x9b18,	// (0x00053a2e) bg_sctrl_middle_pane_g3

0x9b20,	// (0x00053a36) bg_sctrl_middle_pane_g4

0x9b28,	// (0x00053a3e) bg_sctrl_middle_pane_g5

0x9b30,	// (0x00053a46) bg_sctrl_middle_pane_g6

0x9b38,	// (0x00053a4e) bg_sctrl_middle_pane_g7

0x9b40,	// (0x00053a56) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x00059c2a) bg_sctrl_middle_pane_g

0x9b48,	// (0x00053a5e) bg_sctrl_middle_pane_g8_copy1

0x9b08,	// (0x00053a1e) bg_sctrl_sk_pane_g1

0x9b18,	// (0x00053a2e) bg_sctrl_sk_pane_g2

0x9b10,	// (0x00053a26) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x00059792) bg_sctrl_sk_pane_g

0x7fde,	// (0x00051ef4) aid_size_touch_scroll_bar

0x9b28,	// (0x00053a3e) bg_sctrl_sk_pane_g4

0x9b20,	// (0x00053a36) bg_sctrl_sk_pane_g5

0x9b30,	// (0x00053a46) bg_sctrl_sk_pane_g6

0x9b38,	// (0x00053a4e) bg_sctrl_sk_pane_g7

0x9b48,	// (0x00053a5e) bg_sctrl_sk_pane_g8

0x9b40,	// (0x00053a56) bg_sctrl_sk_pane_g9

0x9112,	// (0x00053028) popup_fep_china_hwr2_fs_candidate_window

0x911c,	// (0x00053032) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x911c,	// (0x00053032) popup_fep_china_hwr2_fs_control_window

0x63e2,	// (0x000502f8) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x00059c20) sctrl_sk_top_pane_g

0xd838,	// (0x0005774e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd838,	// (0x0005774e) aid_fep_china_hwr2_fs_cell

0xd84a,	// (0x00057760) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd84a,	// (0x00057760) bg_popup_fep_shadow_pane_cp4

0xd861,	// (0x00057777) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd861,	// (0x00057777) bg_popup_fep_shadow_pane_cp5

0xd873,	// (0x00057789) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd873,	// (0x00057789) popup_fep_china_hwr2_fs_control_bar_grid

0xd883,	// (0x00057799) popup_fep_china_hwr2_fs_control_funtion_grid

0xd88b,	// (0x000577a1) aid_fep_china_hwr2_fs_candi_cell

0x774f,	// (0x00051665) bg_popup_fep_shadow_pane_cp6

0xd895,	// (0x000577ab) popup_fep_china_hwr2_fs_candidate_grid

0xd89f,	// (0x000577b5) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd89f,	// (0x000577b5) cell_fep_china_hwr2_fs_funtion_grid

0xc119,	// (0x0005602f) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8b7,	// (0x000577cd) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8b7,	// (0x000577cd) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8c5,	// (0x000577db) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8c5,	// (0x000577db) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x00059c3b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x00059c3b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8db,	// (0x000577f1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8db,	// (0x000577f1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8f0,	// (0x00057806) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8f0,	// (0x00057806) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x00059c40) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x00059c40) cell_fep_china_hwr2_fs_funtion_grid_t

0xd90c,	// (0x00057822) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd914,	// (0x0005782a) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd91c,	// (0x00057832) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x00059c45) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd924,	// (0x0005783a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd924,	// (0x0005783a) cell_fep_china_hwr2_fs_candidate_grid

0xd93d,	// (0x00057853) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd945,	// (0x0005785b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc119,	// (0x0005602f) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc119,	// (0x0005602f) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x00059a59) cell_fep_china_hwr2_fs_candidate_grid_g

0xd94d,	// (0x00057863) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9705,	// (0x0005361b) clock_nsta_pane_cp_24_ParamLimits

0x9705,	// (0x0005361b) clock_nsta_pane_cp_24

0x9783,	// (0x00053699) indicator_nsta_pane_cp_24_ParamLimits

0x9783,	// (0x00053699) indicator_nsta_pane_cp_24

0xa870,	// (0x00054786) heading_pane_g1

0x0001,

0xf8e1,	// (0x000597f7) heading_pane_g

0xb270,	// (0x00055186) grid_sct_catagory_button_pane

0xb2a0,	// (0x000551b6) scroll_pane_cp5_ParamLimits

0xbd0a,	// (0x00055c20) button_value_adjust_pane_cp5_ParamLimits

0xbd0a,	// (0x00055c20) button_value_adjust_pane_cp5

0xbde9,	// (0x00055cff) form2_midp_time_pane_ParamLimits

0xd95b,	// (0x00057871) cell_sct_catagory_button_pane_ParamLimits

0xd95b,	// (0x00057871) cell_sct_catagory_button_pane

0xc0de,	// (0x00055ff4) bg_button_pane_cp01_ParamLimits

0xc0de,	// (0x00055ff4) bg_button_pane_cp01

0xc119,	// (0x0005602f) cell_sct_catagory_button_pane_g1

0x94e6,	// (0x000533fc) popup_tb_extension_window

0xd96d,	// (0x00057883) aid_size_cell_ext_ParamLimits

0xd96d,	// (0x00057883) aid_size_cell_ext

0x7acc,	// (0x000519e2) bg_tb_trans_pane_cp1_ParamLimits

0x7acc,	// (0x000519e2) bg_tb_trans_pane_cp1

0xd98d,	// (0x000578a3) grid_tb_ext_pane_ParamLimits

0xd98d,	// (0x000578a3) grid_tb_ext_pane

0xd9bb,	// (0x000578d1) cell_tb_ext_pane_ParamLimits

0xd9bb,	// (0x000578d1) cell_tb_ext_pane

0xd9d2,	// (0x000578e8) cell_tb_ext_pane_g1_ParamLimits

0xd9d2,	// (0x000578e8) cell_tb_ext_pane_g1

0xd9ef,	// (0x00057905) cell_tb_ext_pane_t1

0x7acc,	// (0x000519e2) list_highlight_pane_cp11_ParamLimits

0x7acc,	// (0x000519e2) list_highlight_pane_cp11

0x4e9b,	// (0x0004edb1) popup_uni_indicator_window_ParamLimits

0x4e9b,	// (0x0004edb1) popup_uni_indicator_window

0x80af,	// (0x00051fc5) bg_popup_sub_pane_cp14

0xda0a,	// (0x00057920) list_uniindi_pane

0xda16,	// (0x0005792c) uniindi_top_pane

0x7acc,	// (0x000519e2) bg_uniindi_top_pane

0xda35,	// (0x0005794b) uniindi_top_pane_g1

0xda4b,	// (0x00057961) uniindi_top_pane_g2

0x0003,

0x0000,	// (0x00049f16) uniindi_top_pane_g

0xda75,	// (0x0005798b) uniindi_top_pane_t1

0xda9f,	// (0x000579b5) list_single_uniindi_pane_ParamLimits

0xda9f,	// (0x000579b5) list_single_uniindi_pane

0xc119,	// (0x0005602f) bg_uniindi_top_pane_g1

0xdab2,	// (0x000579c8) list_single_uniindi_pane_g1

0xdac5,	// (0x000579db) list_single_uniindi_pane_t1

0x4d11,	// (0x0004ec27) control_bg_pane

0xdaea,	// (0x00057a00) bg_sctrl_sk_pane_cp1

0xdaf3,	// (0x00057a09) bg_sctrl_sk_pane_cp2

0xdafc,	// (0x00057a12) control_bg_pane_g1

0xdb05,	// (0x00057a1b) control_bg_pane_g2

0x0001,

0x0009,	// (0x00049f1f) control_bg_pane_g

0xbb3e,	// (0x00055a54) cell_indicator_nsta_pane_g1_ParamLimits

0xbb4c,	// (0x00055a62) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x000599bd) cell_indicator_nsta_pane_g_ParamLimits

0x73b1,	// (0x000512c7) form2_midp_time_pane_t1_ParamLimits

0x7e20,	// (0x00051d36) main_idle_act4_pane_ParamLimits

0x7e20,	// (0x00051d36) main_idle_act4_pane

0x94e6,	// (0x000533fc) popup_tb_extension_window_ParamLimits

0xd9ab,	// (0x000578c1) tb_ext_find_pane_ParamLimits

0xd9ab,	// (0x000578c1) tb_ext_find_pane

0xdb0e,	// (0x00057a24) ai_gene_pane_1_cp1

0x8e37,	// (0x00052d4d) ai_gene_pane_2_cp1

0xdb16,	// (0x00057a2c) list_single_idle_plugin_calendar_pane

0xdb1f,	// (0x00057a35) list_single_idle_plugin_notification_pane

0xdb28,	// (0x00057a3e) list_single_idle_plugin_player_pane

0xdb31,	// (0x00057a47) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb31,	// (0x00057a47) list_single_idle_plugin_shortcut_pane

0xdb53,	// (0x00057a69) main_idle_act4_pane_t1

0xdb65,	// (0x00057a7b) main_idle_act4_pane_t2

0x0001,

0x000e,	// (0x00049f24) main_idle_act4_pane_t

0xdb77,	// (0x00057a8d) middle_sk_idle_act4_pane_ParamLimits

0xdb77,	// (0x00057a8d) middle_sk_idle_act4_pane

0xdb8d,	// (0x00057aa3) popup_clock_digital_analogue_window_cp2

0xdba7,	// (0x00057abd) shortcut_wheel_idle_act4_pane_ParamLimits

0xdba7,	// (0x00057abd) shortcut_wheel_idle_act4_pane

0xc119,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g1

0xc119,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g2

0xc119,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g3

0xc119,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g4

0xc119,	// (0x0005602f) shortcut_wheel_idle_act4_pane_g5

0xdbbb,	// (0x00057ad1) shortcut_wheel_idle_act4_pane_g6

0xdbc3,	// (0x00057ad9) shortcut_wheel_idle_act4_pane_g7

0xdbcb,	// (0x00057ae1) shortcut_wheel_idle_act4_pane_g8

0xdbd3,	// (0x00057ae9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0x0013,	// (0x00049f29) shortcut_wheel_idle_act4_pane_g

0xc3ab,	// (0x000562c1) middle_sk_idle_act4_pane_g1_ParamLimits

0xc3ab,	// (0x000562c1) middle_sk_idle_act4_pane_g1

0xdc37,	// (0x00057b4d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc37,	// (0x00057b4d) middle_sk_idle_act4_pane_g2

0x0001,

0x0036,	// (0x00049f4c) middle_sk_idle_act4_pane_g_ParamLimits

0x0036,	// (0x00049f4c) middle_sk_idle_act4_pane_g

0xdc43,	// (0x00057b59) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc43,	// (0x00057b59) middle_sk_idle_act4_pane_t1

0xdc60,	// (0x00057b76) grid_ai_shortcut_pane_ParamLimits

0xdc60,	// (0x00057b76) grid_ai_shortcut_pane

0xdc79,	// (0x00057b8f) list_highlight_pane_cp16_ParamLimits

0xdc79,	// (0x00057b8f) list_highlight_pane_cp16

0xdc86,	// (0x00057b9c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc86,	// (0x00057b9c) list_single_idle_plugin_shortcut_pane_g1

0xdc92,	// (0x00057ba8) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc92,	// (0x00057ba8) list_single_idle_plugin_shortcut_pane_g2

0xdcaa,	// (0x00057bc0) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcaa,	// (0x00057bc0) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0x003b,	// (0x00049f51) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0x003b,	// (0x00049f51) list_single_idle_plugin_shortcut_pane_g

0xdcbd,	// (0x00057bd3) cell_ai_shortcut_pane_ParamLimits

0xdcbd,	// (0x00057bd3) cell_ai_shortcut_pane

0xdce1,	// (0x00057bf7) cell_ai_shortcut_pane_g1_ParamLimits

0xdce1,	// (0x00057bf7) cell_ai_shortcut_pane_g1

0xdb0e,	// (0x00057a24) ai_gene_pane_1_cp2

0xdd03,	// (0x00057c19) ai_gene_pane_2_cp2

0xdd0b,	// (0x00057c21) list_highlight_pane_cp15

0xdd14,	// (0x00057c2a) list_single_idle_plugin_calendar_pane_g1

0xdd0b,	// (0x00057c21) list_highlight_pane_cp17

0xdd1c,	// (0x00057c32) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd24,	// (0x00057c3a) list_single_idle_plugin_player_pane_g1

0xb4c9,	// (0x000553df) list_single_idle_plugin_player_pane_g2

0x0001,

0x0042,	// (0x00049f58) list_single_idle_plugin_player_pane_g

0xdd2c,	// (0x00057c42) list_single_idle_plugin_player_pane_t1

0xdd5b,	// (0x00057c71) list_single_idle_plugin_player_pane_t2

0xdd69,	// (0x00057c7f) list_single_idle_plugin_player_pane_t3

0xdd77,	// (0x00057c8d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x00059c57) list_single_idle_plugin_player_pane_t

0xdd85,	// (0x00057c9b) wait_bar_pane_cp15

0xdd8d,	// (0x00057ca3) grid_ai_notification_pane

0xb4c9,	// (0x000553df) list_single_idle_plugin_notification_pane_g1

0xdd96,	// (0x00057cac) cell_ai_notification_pane_ParamLimits

0xdd96,	// (0x00057cac) cell_ai_notification_pane

0xdda3,	// (0x00057cb9) cell_ai_notification_pane_g1

0xddab,	// (0x00057cc1) cell_ai_notification_pane_t1

0xddb9,	// (0x00057ccf) tb_ext_find_button_pane

0xddc1,	// (0x00057cd7) tb_ext_find_pane_g1

0xddc9,	// (0x00057cdf) tb_ext_find_pane_t1

0x8721,	// (0x00052637) tb_ext_find_button_pane_g1

0xddd7,	// (0x00057ced) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x00059c60) tb_ext_find_button_pane_g

0xdb53,	// (0x00057a69) main_idle_act4_pane_t1_ParamLimits

0xdb65,	// (0x00057a7b) main_idle_act4_pane_t2_ParamLimits

0x000e,	// (0x00049f24) main_idle_act4_pane_t_ParamLimits

0xdb8d,	// (0x00057aa3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb9b,	// (0x00057ab1) sat_plugin_idle_act4_pane_ParamLimits

0xdb9b,	// (0x00057ab1) sat_plugin_idle_act4_pane

0xdde0,	// (0x00057cf6) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdde0,	// (0x00057cf6) sat_plugin_idle_act4_pane_t1

0xddf3,	// (0x00057d09) sat_plugin_idle_act4_pane_t2_ParamLimits

0xddf3,	// (0x00057d09) sat_plugin_idle_act4_pane_t2

0xde06,	// (0x00057d1c) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde06,	// (0x00057d1c) sat_plugin_idle_act4_pane_t3

0xde19,	// (0x00057d2f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde19,	// (0x00057d2f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x00059c65) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x00059c65) sat_plugin_idle_act4_pane_t

0x4dd6,	// (0x0004ecec) popup_battery_window_ParamLimits

0x4dd6,	// (0x0004ecec) popup_battery_window

0x7acc,	// (0x000519e2) bg_popup_sub_pane_cp25_ParamLimits

0x7acc,	// (0x000519e2) bg_popup_sub_pane_cp25

0xde2c,	// (0x00057d42) popup_battery_window_g1_ParamLimits

0xde2c,	// (0x00057d42) popup_battery_window_g1

0xde38,	// (0x00057d4e) popup_battery_window_t1_ParamLimits

0xde38,	// (0x00057d4e) popup_battery_window_t1

0xde4a,	// (0x00057d60) popup_battery_window_t2_ParamLimits

0xde4a,	// (0x00057d60) popup_battery_window_t2

0x0001,

0xfd58,	// (0x00059c6e) popup_battery_window_t_ParamLimits

0xfd58,	// (0x00059c6e) popup_battery_window_t

0x8d06,	// (0x00052c1c) midp_canvas_pane_ParamLimits

0x8d7b,	// (0x00052c91) midp_keypad_pane_ParamLimits

0x8d7b,	// (0x00052c91) midp_keypad_pane

0x9072,	// (0x00052f88) main_midp_pane_ParamLimits

0xbbca,	// (0x00055ae0) signal_pane_g2_cp_ParamLimits

0xde67,	// (0x00057d7d) aid_size_cell_midp_keypad_ParamLimits

0xde67,	// (0x00057d7d) aid_size_cell_midp_keypad

0xde81,	// (0x00057d97) midp_keyp_game_grid_pane_ParamLimits

0xde81,	// (0x00057d97) midp_keyp_game_grid_pane

0xdea1,	// (0x00057db7) midp_keyp_rocker_pane_ParamLimits

0xdea1,	// (0x00057db7) midp_keyp_rocker_pane

0xdeda,	// (0x00057df0) midp_keyp_sk_left_pane_ParamLimits

0xdeda,	// (0x00057df0) midp_keyp_sk_left_pane

0xdf34,	// (0x00057e4a) midp_keyp_sk_right_pane_ParamLimits

0xdf34,	// (0x00057e4a) midp_keyp_sk_right_pane

0x774f,	// (0x00051665) bg_button_pane_cp03

0xdf8e,	// (0x00057ea4) midp_keyp_sk_left_pane_g1

0x774f,	// (0x00051665) bg_button_pane_cp04

0xdf8e,	// (0x00057ea4) midp_keyp_sk_right_pane_g1

0xc119,	// (0x0005602f) midp_keyp_rocker_pane_g1

0xdf97,	// (0x00057ead) keyp_game_cell_pane_ParamLimits

0xdf97,	// (0x00057ead) keyp_game_cell_pane

0x774f,	// (0x00051665) bg_button_pane_cp02

0xdfaa,	// (0x00057ec0) keyp_game_cell_pane_g1

0x4e1a,	// (0x0004ed30) popup_fep_vkb2_window_ParamLimits

0x4e1a,	// (0x0004ed30) popup_fep_vkb2_window

0x66ab,	// (0x000505c1) aid_size_cell_vkb2_ParamLimits

0x66ab,	// (0x000505c1) aid_size_cell_vkb2

0x66ff,	// (0x00050615) popup_fep_vkb2_window_g1_ParamLimits

0x66ff,	// (0x00050615) popup_fep_vkb2_window_g1

0x6747,	// (0x0005065d) vkb2_area_bottom_pane_ParamLimits

0x6747,	// (0x0005065d) vkb2_area_bottom_pane

0x6793,	// (0x000506a9) vkb2_area_keypad_pane_ParamLimits

0x6793,	// (0x000506a9) vkb2_area_keypad_pane

0x67d5,	// (0x000506eb) vkb2_area_top_pane_ParamLimits

0x67d5,	// (0x000506eb) vkb2_area_top_pane

0x684f,	// (0x00050765) vkb2_top_entry_pane_ParamLimits

0x684f,	// (0x00050765) vkb2_top_entry_pane

0x6879,	// (0x0005078f) vkb2_top_grid_left_pane_ParamLimits

0x6879,	// (0x0005078f) vkb2_top_grid_left_pane

0x6897,	// (0x000507ad) vkb2_top_grid_right_pane_ParamLimits

0x6897,	// (0x000507ad) vkb2_top_grid_right_pane

0x68b5,	// (0x000507cb) vkb2_cell_keypad_pane_ParamLimits

0x68b5,	// (0x000507cb) vkb2_cell_keypad_pane

0x6986,	// (0x0005089c) vkb2_area_bottom_grid_pane_ParamLimits

0x6986,	// (0x0005089c) vkb2_area_bottom_grid_pane

0x69ac,	// (0x000508c2) vkb2_area_bottom_pane_g1_ParamLimits

0x69ac,	// (0x000508c2) vkb2_area_bottom_pane_g1

0x69d0,	// (0x000508e6) vkb2_area_bottom_pane_g2_ParamLimits

0x69d0,	// (0x000508e6) vkb2_area_bottom_pane_g2

0x69fe,	// (0x00050914) vkb2_area_bottom_pane_g3_ParamLimits

0x69fe,	// (0x00050914) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x00059c73) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x00059c73) vkb2_area_bottom_pane_g

0x6a5f,	// (0x00050975) vkb2_top_cell_left_pane_ParamLimits

0x6a5f,	// (0x00050975) vkb2_top_cell_left_pane

0xdfbb,	// (0x00057ed1) vkb2_top_entry_pane_g1_ParamLimits

0xdfbb,	// (0x00057ed1) vkb2_top_entry_pane_g1

0xdfc9,	// (0x00057edf) vkb2_top_entry_pane_t1_ParamLimits

0xdfc9,	// (0x00057edf) vkb2_top_entry_pane_t1

0xdffb,	// (0x00057f11) vkb2_top_entry_pane_t2_ParamLimits

0xdffb,	// (0x00057f11) vkb2_top_entry_pane_t2

0xe02d,	// (0x00057f43) vkb2_top_entry_pane_t3_ParamLimits

0xe02d,	// (0x00057f43) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x00059c7a) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x00059c7a) vkb2_top_entry_pane_t

0x6aac,	// (0x000509c2) vkb2_top_grid_right_pane_g1_ParamLimits

0x6aac,	// (0x000509c2) vkb2_top_grid_right_pane_g1

0x6ac2,	// (0x000509d8) vkb2_top_grid_right_pane_g2_ParamLimits

0x6ac2,	// (0x000509d8) vkb2_top_grid_right_pane_g2

0x6ada,	// (0x000509f0) vkb2_top_grid_right_pane_g3_ParamLimits

0x6ada,	// (0x000509f0) vkb2_top_grid_right_pane_g3

0x6af2,	// (0x00050a08) vkb2_top_grid_right_pane_g4_ParamLimits

0x6af2,	// (0x00050a08) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x00059c81) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x00059c81) vkb2_top_grid_right_pane_g

0x6b08,	// (0x00050a1e) vkb2_top_cell_left_pane_g1

0x6b1f,	// (0x00050a35) vkb2_cell_keypad_pane_g1_ParamLimits

0x6b1f,	// (0x00050a35) vkb2_cell_keypad_pane_g1

0xe051,	// (0x00057f67) vkb2_cell_keypad_pane_t1_ParamLimits

0xe051,	// (0x00057f67) vkb2_cell_keypad_pane_t1

0x6b2d,	// (0x00050a43) vkb2_cell_bottom_grid_pane_ParamLimits

0x6b2d,	// (0x00050a43) vkb2_cell_bottom_grid_pane

0x6b66,	// (0x00050a7c) vkb2_cell_bottom_grid_pane_g1

0xdbdb,	// (0x00057af1) aid_call2_pane_cp02

0xdbe3,	// (0x00057af9) aid_call_pane_cp02

0xdbeb,	// (0x00057b01) clock_digital_number_pane_cp10

0xdbf3,	// (0x00057b09) clock_digital_number_pane_cp11

0xdbfb,	// (0x00057b11) clock_digital_number_pane_cp12

0xdc03,	// (0x00057b19) clock_digital_number_pane_cp13

0xdc0b,	// (0x00057b21) clock_digital_separator_pane_cp10

0x8721,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g1

0x8721,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g2

0xdc13,	// (0x00057b29) popup_clock_digital_analogue_window_cp2_g3

0x8721,	// (0x00052637) popup_clock_digital_analogue_window_cp2_g4

0xdc13,	// (0x00057b29) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd36,	// (0x00059c4c) popup_clock_digital_analogue_window_cp2_g

0xdc1b,	// (0x00057b31) popup_clock_digital_analogue_window_cp2_t1

0xdc29,	// (0x00057b3f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0x0031,	// (0x00049f47) popup_clock_digital_analogue_window_cp2_t

0xc119,	// (0x0005602f) clock_digital_number_pane_cp10_g1

0xc119,	// (0x0005602f) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x00059a59) clock_digital_number_pane_cp10_g

0xc119,	// (0x0005602f) clock_digital_separator_pane_cp10_g1

0xc119,	// (0x0005602f) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x00059a59) clock_digital_separator_pane_cp10_g

0xda57,	// (0x0005796d) uniindi_top_pane_g3

0xda68,	// (0x0005797e) uniindi_top_pane_g4

0x6940,	// (0x00050856) vkb2_row_keypad_pane_ParamLimits

0x6940,	// (0x00050856) vkb2_row_keypad_pane

0x6b82,	// (0x00050a98) vkb2_cell_t_keypad_pane_ParamLimits

0x6b82,	// (0x00050a98) vkb2_cell_t_keypad_pane

0x6b92,	// (0x00050aa8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6b92,	// (0x00050aa8) vkb2_cell_t_keypad_pane_cp08

0x6ba5,	// (0x00050abb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6ba5,	// (0x00050abb) vkb2_cell_t_keypad_pane_cp09

0x6bb9,	// (0x00050acf) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6bb9,	// (0x00050acf) vkb2_cell_t_keypad_pane_cp01

0x6bca,	// (0x00050ae0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6bca,	// (0x00050ae0) vkb2_cell_t_keypad_pane_cp02

0x6bdb,	// (0x00050af1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6bdb,	// (0x00050af1) vkb2_cell_t_keypad_pane_cp03

0x6bec,	// (0x00050b02) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6bec,	// (0x00050b02) vkb2_cell_t_keypad_pane_cp04

0x6bfd,	// (0x00050b13) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6bfd,	// (0x00050b13) vkb2_cell_t_keypad_pane_cp05

0x6c0e,	// (0x00050b24) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6c0e,	// (0x00050b24) vkb2_cell_t_keypad_pane_cp06

0x6c1f,	// (0x00050b35) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6c1f,	// (0x00050b35) vkb2_cell_t_keypad_pane_cp07

0x6c30,	// (0x00050b46) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6c30,	// (0x00050b46) vkb2_cell_t_keypad_pane_cp10

0x63e2,	// (0x000502f8) vkb2_cell_t_keypad_pane_g1

0xe068,	// (0x00057f7e) vkb2_cell_t_keypad_pane_t1

0x4d11,	// (0x0004ec27) popup_grid_graphic2_window

0xe07a,	// (0x00057f90) aid_size_cell_graphic2_ParamLimits

0xe07a,	// (0x00057f90) aid_size_cell_graphic2

0xcd94,	// (0x00056caa) bg_popup_window_pane_cp21_ParamLimits

0xcd94,	// (0x00056caa) bg_popup_window_pane_cp21

0xe0a6,	// (0x00057fbc) graphic2_pages_pane_ParamLimits

0xe0a6,	// (0x00057fbc) graphic2_pages_pane

0xe0ec,	// (0x00058002) grid_graphic2_control_pane_ParamLimits

0xe0ec,	// (0x00058002) grid_graphic2_control_pane

0xe11a,	// (0x00058030) grid_graphic2_pane_ParamLimits

0xe11a,	// (0x00058030) grid_graphic2_pane

0xe17a,	// (0x00058090) cell_graphic2_pane

0x774f,	// (0x00051665) main_comp_mode_pane

0xd2d7,	// (0x000571ed) list_ai3_gene_pane_ParamLimits

0xd6a1,	// (0x000575b7) bg_popup_window_pane_cp19_ParamLimits

0xd6ad,	// (0x000575c3) bg_touch_area_indi_pane_ParamLimits

0xd6ad,	// (0x000575c3) bg_touch_area_indi_pane

0xd6c3,	// (0x000575d9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6c3,	// (0x000575d9) bg_touch_area_indi_pane_cp01

0xd6d9,	// (0x000575ef) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6d9,	// (0x000575ef) bg_touch_area_indi_pane_cp02

0xd6f1,	// (0x00057607) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6f1,	// (0x00057607) bg_touch_area_indi_pane_cp03

0xd70b,	// (0x00057621) popup_slider_window_g1_ParamLimits

0xd727,	// (0x0005763d) popup_slider_window_g2_ParamLimits

0xd743,	// (0x00057659) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x00059c07) popup_slider_window_g_ParamLimits

0xd79f,	// (0x000576b5) popup_slider_window_t1_ParamLimits

0xd813,	// (0x00057729) small_volume_slider_vertical_pane_ParamLimits

0xe17a,	// (0x00058090) cell_graphic2_pane_ParamLimits

0xe1c9,	// (0x000580df) bg_button_pane_cp10_ParamLimits

0xe1c9,	// (0x000580df) bg_button_pane_cp10

0xe1dc,	// (0x000580f2) bg_button_pane_cp11_ParamLimits

0xe1dc,	// (0x000580f2) bg_button_pane_cp11

0xe1ef,	// (0x00058105) graphic2_pages_pane_g1_ParamLimits

0xe1ef,	// (0x00058105) graphic2_pages_pane_g1

0xe20a,	// (0x00058120) graphic2_pages_pane_g2_ParamLimits

0xe20a,	// (0x00058120) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x00059c8f) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x00059c8f) graphic2_pages_pane_g

0xe222,	// (0x00058138) graphic2_pages_pane_t1_ParamLimits

0xe222,	// (0x00058138) graphic2_pages_pane_t1

0xe23a,	// (0x00058150) cell_graphic2_control_pane_ParamLimits

0xe23a,	// (0x00058150) cell_graphic2_control_pane

0xe254,	// (0x0005816a) cell_graphic2_pane_g1_ParamLimits

0xe254,	// (0x0005816a) cell_graphic2_pane_g1

0xe261,	// (0x00058177) cell_graphic2_pane_g2_ParamLimits

0xe261,	// (0x00058177) cell_graphic2_pane_g2

0xe26e,	// (0x00058184) cell_graphic2_pane_g3_ParamLimits

0xe26e,	// (0x00058184) cell_graphic2_pane_g3

0xe27b,	// (0x00058191) cell_graphic2_pane_g4_ParamLimits

0xe27b,	// (0x00058191) cell_graphic2_pane_g4

0xe288,	// (0x0005819e) cell_graphic2_pane_g5_ParamLimits

0xe288,	// (0x0005819e) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x00059c94) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x00059c94) cell_graphic2_pane_g

0xe2a3,	// (0x000581b9) cell_graphic2_pane_t1_ParamLimits

0xe2a3,	// (0x000581b9) cell_graphic2_pane_t1

0x9bf8,	// (0x00053b0e) grid_highlight_pane_cp11_ParamLimits

0x9bf8,	// (0x00053b0e) grid_highlight_pane_cp11

0x80af,	// (0x00051fc5) bg_button_pane_cp05

0xe2cc,	// (0x000581e2) cell_graphic2_control_pane_g1

0xc119,	// (0x0005602f) bg_touch_area_indi_pane_g1

0xe2d9,	// (0x000581ef) aid_cmod_rocker_key_size

0xe2e3,	// (0x000581f9) aid_cmode_itu_key_size

0xe2ed,	// (0x00058203) main_cmode_video_pane

0xe2f7,	// (0x0005820d) main_comp_mode_itu_pane

0xe303,	// (0x00058219) main_comp_mode_rocker_pane

0xe30f,	// (0x00058225) cell_cmode_rocker_pane_ParamLimits

0xe30f,	// (0x00058225) cell_cmode_rocker_pane

0xe321,	// (0x00058237) cell_cmode_itu_pane_ParamLimits

0xe321,	// (0x00058237) cell_cmode_itu_pane

0x80af,	// (0x00051fc5) bg_button_pane_cp06_ParamLimits

0x80af,	// (0x00051fc5) bg_button_pane_cp06

0xc3ab,	// (0x000562c1) cell_cmode_rocker_pane_g1_ParamLimits

0xc3ab,	// (0x000562c1) cell_cmode_rocker_pane_g1

0xd8b7,	// (0x000577cd) cell_cmode_rocker_pane_g2_ParamLimits

0xd8b7,	// (0x000577cd) cell_cmode_rocker_pane_g2

0x0001,

0x0094,	// (0x00049faa) cell_cmode_rocker_pane_g_ParamLimits

0x0094,	// (0x00049faa) cell_cmode_rocker_pane_g

0x774f,	// (0x00051665) bg_button_pane_cp07

0xe336,	// (0x0005824c) cell_cmode_itu_pane_g1

0xe33f,	// (0x00058255) cell_cmode_itu_pane_t1

0xe34d,	// (0x00058263) cell_cmode_itu_pane_t2

0x0001,

0xfd8e,	// (0x00059ca4) cell_cmode_itu_pane_t

0xdada,	// (0x000579f0) aid_touch_ctrl_left

0xdae2,	// (0x000579f8) aid_touch_ctrl_right

0x774f,	// (0x00051665) compa_mode_pane

0xe35b,	// (0x00058271) aid_cmod_rocker_key_size_cp

0xe365,	// (0x0005827b) aid_cmode_itu_key_size_cp

0xe36f,	// (0x00058285) compa_mode_pane_g1

0xe377,	// (0x0005828d) compa_mode_pane_g2

0xe37f,	// (0x00058295) compa_mode_pane_g3

0x0002,

0xfd93,	// (0x00059ca9) compa_mode_pane_g

0xe387,	// (0x0005829d) main_comp_mode_itu_pane_cp

0xe38f,	// (0x000582a5) main_comp_mode_rocker_pane_cp

0xe397,	// (0x000582ad) cell_cmode_itu_pane_cp_ParamLimits

0xe397,	// (0x000582ad) cell_cmode_itu_pane_cp

0xe3ac,	// (0x000582c2) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ac,	// (0x000582c2) cell_cmode_rocker_pane_cp

0x80af,	// (0x00051fc5) bg_button_pane_cp06_cp_ParamLimits

0x80af,	// (0x00051fc5) bg_button_pane_cp06_cp

0xc3ab,	// (0x000562c1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc3ab,	// (0x000562c1) cell_cmode_rocker_pane_g1_cp

0xc119,	// (0x0005602f) cell_cmode_rocker_pane_g2_cp

0x774f,	// (0x00051665) bg_button_pane_cp07_cp

0xb0bc,	// (0x00054fd2) cell_cmode_itu_pane_g1_cp

0xe3be,	// (0x000582d4) cell_cmode_itu_pane_t1_cp

0xe3be,	// (0x000582d4) cell_cmode_itu_pane_t2_cp

0xb0a9,	// (0x00054fbf) settings_code_pane_cp2

0x7843,	// (0x00051759) bg_popup_window_pane_cp3_ParamLimits

0x7ca6,	// (0x00051bbc) heading_pane_cp3_ParamLimits

0x7cb2,	// (0x00051bc8) listscroll_popup_graphic_pane_ParamLimits

0x618b,	// (0x000500a1) fep_hwr_aid_pane_ParamLimits

0x6603,	// (0x00050519) aid_touch_sctrl_top_ParamLimits

0x661e,	// (0x00050534) sctrl_sk_top_pane_g1_ParamLimits

0x63e2,	// (0x000502f8) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x00059c20) sctrl_sk_top_pane_g_ParamLimits

0x662b,	// (0x00050541) sctrl_sk_top_pane_t1_ParamLimits

0x6603,	// (0x00050519) aid_touch_sctrl_bottom_ParamLimits

0x662b,	// (0x00050541) sctrl_sk_bottom_pane_t1_ParamLimits

0xda23,	// (0x00057939) aid_area_touch_clock

0x6817,	// (0x0005072d) aid_vkb2_area_top_pane_cell_ParamLimits

0x6817,	// (0x0005072d) aid_vkb2_area_top_pane_cell

0x6962,	// (0x00050878) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6962,	// (0x00050878) aid_vkb2_area_bottom_pane_cell

0xdfb3,	// (0x00057ec9) popup_char_count_window

0xe3cc,	// (0x000582e2) popup_char_count_window_g1

0xe3d5,	// (0x000582eb) popup_char_count_window_g2

0xe3de,	// (0x000582f4) popup_char_count_window_g3

0x0002,

0xfd9a,	// (0x00059cb0) popup_char_count_window_g

0xe3e7,	// (0x000582fd) popup_char_count_window_t1

0x66dd,	// (0x000505f3) popup_fep_char_preview_window_ParamLimits

0x66dd,	// (0x000505f3) popup_fep_char_preview_window

0x6835,	// (0x0005074b) vkb2_top_candi_pane_ParamLimits

0x6835,	// (0x0005074b) vkb2_top_candi_pane

0xe3f5,	// (0x0005830b) cell_vkb2_top_candi_pane_ParamLimits

0xe3f5,	// (0x0005830b) cell_vkb2_top_candi_pane

0x6c45,	// (0x00050b5b) bg_popup_fep_char_preview_window_ParamLimits

0x6c45,	// (0x00050b5b) bg_popup_fep_char_preview_window

0x6c53,	// (0x00050b69) popup_fep_char_preview_window_t1_ParamLimits

0x6c53,	// (0x00050b69) popup_fep_char_preview_window_t1

0xe442,	// (0x00058358) bg_popup_fep_char_preview_window_g1

0xe44a,	// (0x00058360) bg_popup_fep_char_preview_window_g2

0xe452,	// (0x00058368) bg_popup_fep_char_preview_window_g3

0xe45a,	// (0x00058370) bg_popup_fep_char_preview_window_g4

0xe462,	// (0x00058378) bg_popup_fep_char_preview_window_g5

0x6c8d,	// (0x00050ba3) bg_popup_fep_char_preview_window_g6

0xe46a,	// (0x00058380) bg_popup_fep_char_preview_window_g7

0xe472,	// (0x00058388) bg_popup_fep_char_preview_window_g8

0xe47a,	// (0x00058390) bg_popup_fep_char_preview_window_g9

0x0008,

0xfda1,	// (0x00059cb7) bg_popup_fep_char_preview_window_g

0x63e2,	// (0x000502f8) cell_vkb2_top_candi_pane_g1_ParamLimits

0x63e2,	// (0x000502f8) cell_vkb2_top_candi_pane_g1

0x63f0,	// (0x00050306) cell_vkb2_top_candi_pane_g2_ParamLimits

0x63f0,	// (0x00050306) cell_vkb2_top_candi_pane_g2

0xdd3a,	// (0x00057c50) cell_vkb2_top_candi_pane_g3_ParamLimits

0xdd3a,	// (0x00057c50) cell_vkb2_top_candi_pane_g3

0x6c95,	// (0x00050bab) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c95,	// (0x00050bab) cell_vkb2_top_candi_pane_g4

0xc88a,	// (0x000567a0) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc88a,	// (0x000567a0) cell_vkb2_top_candi_pane_g5

0x6cb6,	// (0x00050bcc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6cb6,	// (0x00050bcc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb4,	// (0x00059cca) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb4,	// (0x00059cca) cell_vkb2_top_candi_pane_g

0x6cc4,	// (0x00050bda) cell_vkb2_top_candi_pane_t1

0x5feb,	// (0x0004ff01) aid_size_touch_slider_mark_ParamLimits

0x5feb,	// (0x0004ff01) aid_size_touch_slider_mark

0xe0dc,	// (0x00057ff2) grid_graphic2_catg_pane_ParamLimits

0xe0dc,	// (0x00057ff2) grid_graphic2_catg_pane

0xe156,	// (0x0005806c) popup_grid_graphic2_window_t1_ParamLimits

0xe156,	// (0x0005806c) popup_grid_graphic2_window_t1

0xe168,	// (0x0005807e) popup_grid_graphic2_window_t2_ParamLimits

0xe168,	// (0x0005807e) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x00059c8a) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x00059c8a) popup_grid_graphic2_window_t

0x80af,	// (0x00051fc5) bg_button_pane_cp05_ParamLimits

0xe2cc,	// (0x000581e2) cell_graphic2_control_pane_g1_ParamLimits

0xe482,	// (0x00058398) cell_graphic2_catg_pane_ParamLimits

0xe482,	// (0x00058398) cell_graphic2_catg_pane

0x774f,	// (0x00051665) bg_button_pane_cp12

0xe494,	// (0x000583aa) cell_graphic2_catg_pane_g1

0xd9ef,	// (0x00057905) cell_tb_ext_pane_t1_ParamLimits

0x6a7f,	// (0x00050995) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6a7f,	// (0x00050995) vkb2_top_cell_right_narrow_pane

0x6a97,	// (0x000509ad) vkb2_top_cell_right_wide_pane_ParamLimits

0x6a97,	// (0x000509ad) vkb2_top_cell_right_wide_pane

0x617d,	// (0x00050093) bg_vkb2_func_pane_ParamLimits

0x617d,	// (0x00050093) bg_vkb2_func_pane

0x6b08,	// (0x00050a1e) vkb2_top_cell_left_pane_g1_ParamLimits

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp03_ParamLimits

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp03

0x6b66,	// (0x00050a7c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9b10,	// (0x00053a26) bg_vkb2_func_pane_g1

0x9b18,	// (0x00053a2e) bg_vkb2_func_pane_g2

0x9b28,	// (0x00053a3e) bg_vkb2_func_pane_g3

0x9b20,	// (0x00053a36) bg_vkb2_func_pane_g4

0x9b30,	// (0x00053a46) bg_vkb2_func_pane_g5

0x9b38,	// (0x00053a4e) bg_vkb2_func_pane_g6

0x9b40,	// (0x00053a56) bg_vkb2_func_pane_g7

0x9b48,	// (0x00053a5e) bg_vkb2_func_pane_g8

0x9b08,	// (0x00053a1e) bg_vkb2_func_pane_g9

0x0008,

0x00b9,	// (0x00049fcf) bg_vkb2_func_pane_g

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp01_ParamLimits

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp01

0x6b08,	// (0x00050a1e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6b08,	// (0x00050a1e) vkb2_top_cell_right_wide_pane_g1

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp02_ParamLimits

0x617d,	// (0x00050093) bg_vkb2_fuc_pane_cp02

0x6b66,	// (0x00050a7c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6b66,	// (0x00050a7c) vkb2_top_cell_right_narrow_pane_g1

0xd625,	// (0x0005753b) aid_touch_area_decrease_ParamLimits

0xd625,	// (0x0005753b) aid_touch_area_decrease

0xd643,	// (0x00057559) aid_touch_area_increase_ParamLimits

0xd643,	// (0x00057559) aid_touch_area_increase

0xd64f,	// (0x00057565) aid_touch_area_mute_ParamLimits

0xd64f,	// (0x00057565) aid_touch_area_mute

0xd673,	// (0x00057589) aid_touch_area_slider_ParamLimits

0xd673,	// (0x00057589) aid_touch_area_slider

0xd75f,	// (0x00057675) popup_slider_window_g4_ParamLimits

0xd75f,	// (0x00057675) popup_slider_window_g4

0xd76b,	// (0x00057681) popup_slider_window_g5_ParamLimits

0xd76b,	// (0x00057681) popup_slider_window_g5

0xd78d,	// (0x000576a3) popup_slider_window_g6_ParamLimits

0xd78d,	// (0x000576a3) popup_slider_window_g6

0xd7cd,	// (0x000576e3) popup_slider_window_t2_ParamLimits

0xd7cd,	// (0x000576e3) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x00059c14) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x00059c14) popup_slider_window_t

0xd7e5,	// (0x000576fb) slider_pane_ParamLimits

0xd7e5,	// (0x000576fb) slider_pane

0xe49d,	// (0x000583b3) slider_pane_g1_ParamLimits

0xe49d,	// (0x000583b3) slider_pane_g1

0xe4b1,	// (0x000583c7) slider_pane_g2_ParamLimits

0xe4b1,	// (0x000583c7) slider_pane_g2

0xe4c7,	// (0x000583dd) slider_pane_g3_ParamLimits

0xe4c7,	// (0x000583dd) slider_pane_g3

0x0003,

0xfdc1,	// (0x00059cd7) slider_pane_g_ParamLimits

0xfdc1,	// (0x00059cd7) slider_pane_g

0x9542,	// (0x00053458) popup_tb_float_extension_window_ParamLimits

0x9542,	// (0x00053458) popup_tb_float_extension_window

0xe4f3,	// (0x00058409) aid_size_cell_tb_float_ext

0x774f,	// (0x00051665) bg_popup_sub_window_cp28

0xe4ff,	// (0x00058415) grid_tb_float_ext_pane

0xe509,	// (0x0005841f) cell_tb_float_ext_pane_ParamLimits

0xe509,	// (0x0005841f) cell_tb_float_ext_pane

0xe523,	// (0x00058439) cell_tb_float_ext_pane_g1

0xe52c,	// (0x00058442) grid_highlight_pane_cp12

0x62cc,	// (0x000501e2) cell_last_hwr_side_pane_ParamLimits

0x62cc,	// (0x000501e2) cell_last_hwr_side_pane

0xc119,	// (0x0005602f) cell_last_hwr_side_pane_g1

0xe535,	// (0x0005844b) cell_last_hwr_side_pane_g2

0x0001,

0x00cc,	// (0x00049fe2) cell_last_hwr_side_pane_g

0x6a2e,	// (0x00050944) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6a2e,	// (0x00050944) vkb2_area_bottom_space_btn_pane

0x63e2,	// (0x000502f8) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe068,	// (0x00057f7e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6cc4,	// (0x00050bda) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6ce3,	// (0x00050bf9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6ce3,	// (0x00050bf9) vkb2_area_bottom_space_btn_pane_g1

0x6d1d,	// (0x00050c33) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d1d,	// (0x00050c33) vkb2_area_bottom_space_btn_pane_g2

0x6d53,	// (0x00050c69) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d53,	// (0x00050c69) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdca,	// (0x00059ce0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdca,	// (0x00059ce0) vkb2_area_bottom_space_btn_pane_g

0x6240,	// (0x00050156) cel_fep_hwr_func_pane_ParamLimits

0x6240,	// (0x00050156) cel_fep_hwr_func_pane

0x627c,	// (0x00050192) cell_hwr_side_button_pane_ParamLimits

0x627c,	// (0x00050192) cell_hwr_side_button_pane

0xda23,	// (0x00057939) aid_area_touch_clock_ParamLimits

0x7acc,	// (0x000519e2) bg_uniindi_top_pane_ParamLimits

0xda35,	// (0x0005794b) uniindi_top_pane_g1_ParamLimits

0xda4b,	// (0x00057961) uniindi_top_pane_g2_ParamLimits

0xda57,	// (0x0005796d) uniindi_top_pane_g3_ParamLimits

0xda68,	// (0x0005797e) uniindi_top_pane_g4_ParamLimits

0x0000,	// (0x00049f16) uniindi_top_pane_g_ParamLimits

0xda75,	// (0x0005798b) uniindi_top_pane_t1_ParamLimits

0x7acc,	// (0x000519e2) bg_vkb2_func_pane_cp01_ParamLimits

0x7acc,	// (0x000519e2) bg_vkb2_func_pane_cp01

0xe53e,	// (0x00058454) cel_fep_hwr_func_pane_g1_ParamLimits

0xe53e,	// (0x00058454) cel_fep_hwr_func_pane_g1

0x7acc,	// (0x000519e2) bg_vkb2_func_pane_cp02_ParamLimits

0x7acc,	// (0x000519e2) bg_vkb2_func_pane_cp02

0xe53e,	// (0x00058454) cell_hwr_side_button_pane_g1_ParamLimits

0xe53e,	// (0x00058454) cell_hwr_side_button_pane_g1

0x9989,	// (0x0005389f) status_pane_g4_ParamLimits

0x9989,	// (0x0005389f) status_pane_g4

0x99a3,	// (0x000538b9) status_pane_t1

0xbe52,	// (0x00055d68) form2_midp_gauge_slider_cont_pane

0xbe5a,	// (0x00055d70) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe6c,	// (0x00055d82) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbe7e,	// (0x00055d94) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x00059a0c) form2_midp_gauge_slider_pane_t_ParamLimits

0xbe90,	// (0x00055da6) form2_midp_slider_pane_ParamLimits

0x669d,	// (0x000505b3) aid_size_cell_func_vkb2_ParamLimits

0x669d,	// (0x000505b3) aid_size_cell_func_vkb2

0xe4df,	// (0x000583f5) slider_pane_g4_ParamLimits

0xe4df,	// (0x000583f5) slider_pane_g4

0x6d9d,	// (0x00050cb3) form2_midp_gauge_slider_pane_t2_cp01

0x6dab,	// (0x00050cc1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6dab,	// (0x00050cc1) form2_midp_gauge_slider_pane_t3_cp01

0x6dc8,	// (0x00050cde) form2_midp_slider_pane_cp01

0x774f,	// (0x00051665) navi_smil_pane

0xe577,	// (0x0005848d) navi_smil_pane_g1

0xe57f,	// (0x00058495) navi_smil_pane_t1

0xe54c,	// (0x00058462) form2_midp_slider_pane_g1

0xe555,	// (0x0005846b) form2_midp_slider_pane_g2

0xe55d,	// (0x00058473) form2_midp_slider_pane_g3

0xe54c,	// (0x00058462) form2_midp_slider_pane_g4

0xe565,	// (0x0005847b) form2_midp_slider_pane_g5

0x0004,

0xfdd3,	// (0x00059ce9) form2_midp_slider_pane_g

0x6d8d,	// (0x00050ca3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d8d,	// (0x00050ca3) vkb2_area_bottom_space_btn_pane_g4

0x97bf,	// (0x000536d5) lc0_navi_pane_ParamLimits

0x97bf,	// (0x000536d5) lc0_navi_pane

0x9835,	// (0x0005374b) lc0_stat_indi_pane_ParamLimits

0x9835,	// (0x0005374b) lc0_stat_indi_pane

0x984c,	// (0x00053762) ls0_title_pane_ParamLimits

0x984c,	// (0x00053762) ls0_title_pane

0x80af,	// (0x00051fc5) bg_popup_sub_pane_cp14_ParamLimits

0xda0a,	// (0x00057920) list_uniindi_pane_ParamLimits

0xda16,	// (0x0005792c) uniindi_top_pane_ParamLimits

0xdab2,	// (0x000579c8) list_single_uniindi_pane_g1_ParamLimits

0xdac5,	// (0x000579db) list_single_uniindi_pane_t1_ParamLimits

0x6dd1,	// (0x00050ce7) lc0_stat_clock_pane_ParamLimits

0x6dd1,	// (0x00050ce7) lc0_stat_clock_pane

0xe58d,	// (0x000584a3) lc0_stat_indi_pane_g1_ParamLimits

0xe58d,	// (0x000584a3) lc0_stat_indi_pane_g1

0xe59a,	// (0x000584b0) lc0_stat_indi_pane_g2_ParamLimits

0xe59a,	// (0x000584b0) lc0_stat_indi_pane_g2

0x0001,

0xfdde,	// (0x00059cf4) lc0_stat_indi_pane_g_ParamLimits

0xfdde,	// (0x00059cf4) lc0_stat_indi_pane_g

0x6dde,	// (0x00050cf4) lc0_uni_indicator_pane_ParamLimits

0x6dde,	// (0x00050cf4) lc0_uni_indicator_pane

0xe5a7,	// (0x000584bd) ls0_title_pane_g1_ParamLimits

0xe5a7,	// (0x000584bd) ls0_title_pane_g1

0xe5bb,	// (0x000584d1) ls0_title_pane_t1_ParamLimits

0xe5bb,	// (0x000584d1) ls0_title_pane_t1

0x6deb,	// (0x00050d01) lc0_uni_indicator_pane_g1_ParamLimits

0x6deb,	// (0x00050d01) lc0_uni_indicator_pane_g1

0xe5f1,	// (0x00058507) lc0_stat_clock_pane_t1

0x774f,	// (0x00051665) main_ai5_pane

0xe5ff,	// (0x00058515) ai5_sk_pane_ParamLimits

0xe5ff,	// (0x00058515) ai5_sk_pane

0xe60c,	// (0x00058522) cell_ai5_widget_pane_ParamLimits

0xe60c,	// (0x00058522) cell_ai5_widget_pane

0xe68e,	// (0x000585a4) aid_size_cell_widget_grid

0xe6a2,	// (0x000585b8) bg_ai5_widget_pane_ParamLimits

0xe6a2,	// (0x000585b8) bg_ai5_widget_pane

0xe6ca,	// (0x000585e0) cell_ai5_widget_pane_g2

0xe6da,	// (0x000585f0) cell_ai5_widget_pane_g3

0xe6f9,	// (0x0005860f) cell_ai5_widget_pane_g4

0xe705,	// (0x0005861b) cell_ai5_widget_pane_g5

0xe711,	// (0x00058627) cell_ai5_widget_pane_g6

0xe71d,	// (0x00058633) cell_ai5_widget_pane_g7

0xe765,	// (0x0005867b) cell_ai5_widget_pane_t1_ParamLimits

0xe765,	// (0x0005867b) cell_ai5_widget_pane_t1

0xe782,	// (0x00058698) cell_ai5_widget_pane_t2_ParamLimits

0xe782,	// (0x00058698) cell_ai5_widget_pane_t2

0xe79a,	// (0x000586b0) cell_ai5_widget_pane_t3_ParamLimits

0xe79a,	// (0x000586b0) cell_ai5_widget_pane_t3

0xe7b2,	// (0x000586c8) cell_ai5_widget_pane_t4_ParamLimits

0xe7b2,	// (0x000586c8) cell_ai5_widget_pane_t4

0xe7cc,	// (0x000586e2) cell_ai5_widget_pane_t5_ParamLimits

0xe7cc,	// (0x000586e2) cell_ai5_widget_pane_t5

0xe7eb,	// (0x00058701) cell_ai5_widget_pane_t6_ParamLimits

0xe7eb,	// (0x00058701) cell_ai5_widget_pane_t6

0xe7fd,	// (0x00058713) cell_ai5_widget_pane_t7_ParamLimits

0xe7fd,	// (0x00058713) cell_ai5_widget_pane_t7

0xe816,	// (0x0005872c) cell_ai5_widget_pane_t8_ParamLimits

0xe816,	// (0x0005872c) cell_ai5_widget_pane_t8

0x0009,

0xfdf8,	// (0x00059d0e) cell_ai5_widget_pane_t_ParamLimits

0xfdf8,	// (0x00059d0e) cell_ai5_widget_pane_t

0xe862,	// (0x00058778) grid_ai5_widget_pane

0x80af,	// (0x00051fc5) highlight_cell_ai5_widget_pane_ParamLimits

0x80af,	// (0x00051fc5) highlight_cell_ai5_widget_pane

0xe87a,	// (0x00058790) ai5_sk_left_pane

0xe884,	// (0x0005879a) ai5_sk_middle_pane

0xe88e,	// (0x000587a4) ai5_sk_right_pane

0xe898,	// (0x000587ae) bg_ai5_widget_pane_g1_ParamLimits

0xe898,	// (0x000587ae) bg_ai5_widget_pane_g1

0xe8a4,	// (0x000587ba) bg_ai5_widget_pane_g2_ParamLimits

0xe8a4,	// (0x000587ba) bg_ai5_widget_pane_g2

0xe8b0,	// (0x000587c6) bg_ai5_widget_pane_g3_ParamLimits

0xe8b0,	// (0x000587c6) bg_ai5_widget_pane_g3

0xe8bc,	// (0x000587d2) bg_ai5_widget_pane_g4_ParamLimits

0xe8bc,	// (0x000587d2) bg_ai5_widget_pane_g4

0xe8c8,	// (0x000587de) bg_ai5_widget_pane_g5_ParamLimits

0xe8c8,	// (0x000587de) bg_ai5_widget_pane_g5

0xe8d4,	// (0x000587ea) bg_ai5_widget_pane_g6_ParamLimits

0xe8d4,	// (0x000587ea) bg_ai5_widget_pane_g6

0xe8e0,	// (0x000587f6) bg_ai5_widget_pane_g7_ParamLimits

0xe8e0,	// (0x000587f6) bg_ai5_widget_pane_g7

0xe8ec,	// (0x00058802) bg_ai5_widget_pane_g8_ParamLimits

0xe8ec,	// (0x00058802) bg_ai5_widget_pane_g8

0xe8f8,	// (0x0005880e) bg_ai5_widget_pane_g9_ParamLimits

0xe8f8,	// (0x0005880e) bg_ai5_widget_pane_g9

0x0008,

0xfe0d,	// (0x00059d23) bg_ai5_widget_pane_g_ParamLimits

0xfe0d,	// (0x00059d23) bg_ai5_widget_pane_g

0xe92b,	// (0x00058841) cell_shortcut_ai5_widget_pane_ParamLimits

0xe92b,	// (0x00058841) cell_shortcut_ai5_widget_pane

0x790c,	// (0x00051822) bg_cell_shortcut_ai5_widget_pane

0xe93c,	// (0x00058852) cell_grid_ai5_widget_pane_g1

0xe945,	// (0x0005885b) highlight_cell_shortcut_ai5_widget_pane

0x9b10,	// (0x00053a26) ai5_sk_left_pane_g1

0xe94d,	// (0x00058863) ai5_sk_left_pane_g2

0xe955,	// (0x0005886b) ai5_sk_left_pane_g3

0xe95d,	// (0x00058873) ai5_sk_left_pane_g4

0x0003,

0xfe20,	// (0x00059d36) ai5_sk_left_pane_g

0xe965,	// (0x0005887b) ai5_sk_left_pane_t1

0x9b18,	// (0x00053a2e) ai5_sk_right_pane_g1

0xe973,	// (0x00058889) ai5_sk_right_pane_g2

0xe97b,	// (0x00058891) ai5_sk_right_pane_g3

0xe983,	// (0x00058899) ai5_sk_right_pane_g4

0x0003,

0xfe29,	// (0x00059d3f) ai5_sk_right_pane_g

0xe98b,	// (0x000588a1) ai5_sk_right_pane_t1

0x9b18,	// (0x00053a2e) ai5_sk_middle_pane_g1

0x9b10,	// (0x00053a26) ai5_sk_middle_pane_g2

0x9b30,	// (0x00053a46) ai5_sk_middle_pane_g3

0xe97b,	// (0x00058891) ai5_sk_middle_pane_g4

0xe955,	// (0x0005886b) ai5_sk_middle_pane_g5

0xe999,	// (0x000588af) ai5_sk_middle_pane_g6

0xe9a1,	// (0x000588b7) ai5_sk_middle_pane_g7

0x0006,

0xfe32,	// (0x00059d48) ai5_sk_middle_pane_g

0x964f,	// (0x00053565) aid_touch_area_size_lc0_ParamLimits

0x964f,	// (0x00053565) aid_touch_area_size_lc0

0x6411,	// (0x00050327) cell_hwr_candidate_pane_t1_ParamLimits

0x966b,	// (0x00053581) aid_touch_navi_pane

0x9933,	// (0x00053849) status_dt_navi_pane_ParamLimits

0x9933,	// (0x00053849) status_dt_navi_pane

0x9940,	// (0x00053856) status_dt_sta_pane_ParamLimits

0x9940,	// (0x00053856) status_dt_sta_pane

0xe9a9,	// (0x000588bf) dt_sta_controll_pane

0xe9b6,	// (0x000588cc) dt_sta_indi_pane

0xe9c7,	// (0x000588dd) dt_sta_title_pane

0x7acc,	// (0x000519e2) bg_dt_sta_indi_pane_ParamLimits

0x7acc,	// (0x000519e2) bg_dt_sta_indi_pane

0xe9da,	// (0x000588f0) dt_sta_battery_pane

0xe9e2,	// (0x000588f8) dt_sta_indi_pane_g1

0xe9eb,	// (0x00058901) dt_sta_indi_pane_g2

0xe9f4,	// (0x0005890a) dt_sta_indi_pane_g3

0x0002,

0xfe41,	// (0x00059d57) dt_sta_indi_pane_g

0xe9fd,	// (0x00058913) dt_sta_signal_pane

0x80af,	// (0x00051fc5) bg_dt_sta_title_pane_ParamLimits

0x80af,	// (0x00051fc5) bg_dt_sta_title_pane

0xea06,	// (0x0005891c) dt_sta_title_pane_g1

0xea0e,	// (0x00058924) dt_sta_title_pane_t1_ParamLimits

0xea0e,	// (0x00058924) dt_sta_title_pane_t1

0x774f,	// (0x00051665) bg_dt_sta_control_pane

0xea23,	// (0x00058939) dt_sta_controll_pane_g1

0xea2c,	// (0x00058942) bg_dt_sta_title_pane_g1

0xea35,	// (0x0005894b) bg_dt_sta_title_pane_g2

0xea3e,	// (0x00058954) bg_dt_sta_title_pane_g3

0x0002,

0xfe48,	// (0x00059d5e) bg_dt_sta_title_pane_g

0xc119,	// (0x0005602f) bg_dt_sta_indi_pane_g1

0xea47,	// (0x0005895d) dt_sta_signal_pane_g1

0xea4f,	// (0x00058965) dt_sta_signal_pane_g2

0x0001,

0xfe4f,	// (0x00059d65) dt_sta_signal_pane_g

0xea57,	// (0x0005896d) dt_sta_battery_pane_g1

0xea60,	// (0x00058976) dt_sta_battery_pane_t1

0xc119,	// (0x0005602f) bg_dt_sta_control_pane_g1

0x8808,	// (0x0005271e) fep_china_uni_eep_pane

0x8810,	// (0x00052726) fep_china_uni_entry_pane_ParamLimits

0x8820,	// (0x00052736) popup_fep_china_uni_window_g1_ParamLimits

0x8830,	// (0x00052746) popup_fep_china_uni_window_g2_ParamLimits

0x8830,	// (0x00052746) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x00059650) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x00059650) popup_fep_china_uni_window_g

0xea6f,	// (0x00058985) fep_china_uni_eep_pane_g1

0xea77,	// (0x0005898d) fep_china_uni_eep_pane_t1

0xe56e,	// (0x00058484) aid_touch_area_size_smil_player

0x97b7,	// (0x000536cd) lc0_clock_pane

0x9997,	// (0x000538ad) status_pane_g5_ParamLimits

0x9997,	// (0x000538ad) status_pane_g5

0x9207,	// (0x0005311d) popup_keymap_window

0x9955,	// (0x0005386b) status_icon_pane

0xe6da,	// (0x000585f0) cell_ai5_widget_pane_g3_ParamLimits

0xe6f9,	// (0x0005860f) cell_ai5_widget_pane_g4_ParamLimits

0xe705,	// (0x0005861b) cell_ai5_widget_pane_g5_ParamLimits

0xe729,	// (0x0005863f) cell_ai5_widget_pane_g8_ParamLimits

0xe729,	// (0x0005863f) cell_ai5_widget_pane_g8

0xe73d,	// (0x00058653) cell_ai5_widget_pane_g9_ParamLimits

0xe73d,	// (0x00058653) cell_ai5_widget_pane_g9

0xe751,	// (0x00058667) cell_ai5_widget_pane_g10_ParamLimits

0xe751,	// (0x00058667) cell_ai5_widget_pane_g10

0xea86,	// (0x0005899c) status_icon_pane_g1

0x774f,	// (0x00051665) bg_popup_sub_pane_cp13

0xea8e,	// (0x000589a4) popup_keymap_window_t1

0x8feb,	// (0x00052f01) control_pane_g6_ParamLimits

0x8feb,	// (0x00052f01) control_pane_g6

0x8ff8,	// (0x00052f0e) control_pane_g7_ParamLimits

0x8ff8,	// (0x00052f0e) control_pane_g7

0x9005,	// (0x00052f1b) control_pane_g8_ParamLimits

0x9005,	// (0x00052f1b) control_pane_g8

0xe9a9,	// (0x000588bf) dt_sta_controll_pane_ParamLimits

0xe9b6,	// (0x000588cc) dt_sta_indi_pane_ParamLimits

0xe9c7,	// (0x000588dd) dt_sta_title_pane_ParamLimits

0x7fe7,	// (0x00051efd) aid_size_touch_scroll_bar_cale

0x4dea,	// (0x0004ed00) popup_discreet_window_ParamLimits

0x4dea,	// (0x0004ed00) popup_discreet_window

0x4e72,	// (0x0004ed88) popup_sk_window

0xa1e1,	// (0x000540f7) bg_popup_sub_pane_cp28_ParamLimits

0xa1e1,	// (0x000540f7) bg_popup_sub_pane_cp28

0xea9c,	// (0x000589b2) popup_discreet_window_g1_ParamLimits

0xea9c,	// (0x000589b2) popup_discreet_window_g1

0xeabc,	// (0x000589d2) popup_discreet_window_t1_ParamLimits

0xeabc,	// (0x000589d2) popup_discreet_window_t1

0xeada,	// (0x000589f0) popup_discreet_window_t2_ParamLimits

0xeada,	// (0x000589f0) popup_discreet_window_t2

0x0002,

0xfe54,	// (0x00059d6a) popup_discreet_window_t_ParamLimits

0xfe54,	// (0x00059d6a) popup_discreet_window_t

0x6dff,	// (0x00050d15) popup_sk_window_g1

0x6e09,	// (0x00050d1f) popup_sk_window_g2

0x0001,

0xfe5b,	// (0x00059d71) popup_sk_window_g

0xeb2c,	// (0x00058a42) popup_sk_window_t1

0xeb3a,	// (0x00058a50) popup_sk_window_t1_copy1

0xe6ca,	// (0x000585e0) cell_ai5_widget_pane_g2_ParamLimits

0xe828,	// (0x0005873e) cell_ai5_widget_pane_t9_ParamLimits

0xe828,	// (0x0005873e) cell_ai5_widget_pane_t9

0x774f,	// (0x00051665) main_fep_fshwr2_pane

0xeb48,	// (0x00058a5e) aid_fshwr2_btn_pane

0xeb50,	// (0x00058a66) aid_fshwr2_syb_pane

0xeb58,	// (0x00058a6e) aid_fshwr2_txt_pane

0xeb60,	// (0x00058a76) fshwr2_func_candi_pane

0xeb6c,	// (0x00058a82) fshwr2_hwr_syb_pane

0xeb78,	// (0x00058a8e) fshwr2_icf_pane

0x774f,	// (0x00051665) fshwr2_icf_bg_pane

0xeb96,	// (0x00058aac) fshwr2_icf_pane_t1_ParamLimits

0xeb96,	// (0x00058aac) fshwr2_icf_pane_t1

0xc119,	// (0x0005602f) fshwr2_func_candi_pane_g1

0xebad,	// (0x00058ac3) fshwr2_func_candi_row_pane_ParamLimits

0xebad,	// (0x00058ac3) fshwr2_func_candi_row_pane

0xebbe,	// (0x00058ad4) cell_fshwr2_syb_pane_ParamLimits

0xebbe,	// (0x00058ad4) cell_fshwr2_syb_pane

0xc3ab,	// (0x000562c1) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc3ab,	// (0x000562c1) fshwr2_hwr_syb_pane_g1

0x774f,	// (0x00051665) bg_popup_call_pane_cp01

0xebd8,	// (0x00058aee) fshwr2_func_candi_cell_pane_ParamLimits

0xebd8,	// (0x00058aee) fshwr2_func_candi_cell_pane

0xec09,	// (0x00058b1f) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec09,	// (0x00058b1f) fshwr2_func_candi_cell_bg_pane

0xec23,	// (0x00058b39) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec23,	// (0x00058b39) fshwr2_func_candi_cell_pane_g1

0xec4b,	// (0x00058b61) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec4b,	// (0x00058b61) fshwr2_func_candi_cell_pane_t1

0x774f,	// (0x00051665) bg_button_pane_cp08

0x8cf2,	// (0x00052c08) cell_fshwr2_syb_bg_pane

0xec5e,	// (0x00058b74) cell_fshwr2_syb_bg_pane_g1

0xec66,	// (0x00058b7c) cell_fshwr2_syb_bg_pane_t1

0x80af,	// (0x00051fc5) main_tmo_pane

0xacf6,	// (0x00054c0c) uni_indicator_pane_g1_ParamLimits

0xad0b,	// (0x00054c21) uni_indicator_pane_g2_ParamLimits

0xad21,	// (0x00054c37) uni_indicator_pane_g3_ParamLimits

0xad37,	// (0x00054c4d) uni_indicator_pane_g4_ParamLimits

0xad37,	// (0x00054c4d) uni_indicator_pane_g4

0xad4b,	// (0x00054c61) uni_indicator_pane_g5_ParamLimits

0xad4b,	// (0x00054c61) uni_indicator_pane_g5

0xad5f,	// (0x00054c75) uni_indicator_pane_g6_ParamLimits

0xad5f,	// (0x00054c75) uni_indicator_pane_g6

0xf937,	// (0x0005984d) uni_indicator_pane_g_ParamLimits

0xd601,	// (0x00057517) popup_tmo_note_window_ParamLimits

0xd601,	// (0x00057517) popup_tmo_note_window

0x774f,	// (0x00051665) fshwr2_bg_pane

0xec3c,	// (0x00058b52) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec3c,	// (0x00058b52) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe60,	// (0x00059d76) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe60,	// (0x00059d76) fshwr2_func_candi_cell_pane_g

0xc119,	// (0x0005602f) bg_popup_window_pane_cp01

0xec75,	// (0x00058b8b) bg_popup_window_pane_g1_cp01

0xec7e,	// (0x00058b94) bg_popup_window_pane_cp22_ParamLimits

0xec7e,	// (0x00058b94) bg_popup_window_pane_cp22

0xec8c,	// (0x00058ba2) listscroll_tmo_link_pane_ParamLimits

0xec8c,	// (0x00058ba2) listscroll_tmo_link_pane

0xeccc,	// (0x00058be2) popup_tmo_note_window_g1_ParamLimits

0xeccc,	// (0x00058be2) popup_tmo_note_window_g1

0xecd9,	// (0x00058bef) tmo_note_info_pane_ParamLimits

0xecd9,	// (0x00058bef) tmo_note_info_pane

0xecf3,	// (0x00058c09) list_tmo_note_info_pane_g1_ParamLimits

0xecf3,	// (0x00058c09) list_tmo_note_info_pane_g1

0xed0a,	// (0x00058c20) list_tmo_note_info_pane_g2_ParamLimits

0xed0a,	// (0x00058c20) list_tmo_note_info_pane_g2

0x0001,

0xfe65,	// (0x00059d7b) list_tmo_note_info_pane_g_ParamLimits

0xfe65,	// (0x00059d7b) list_tmo_note_info_pane_g

0xed26,	// (0x00058c3c) list_tmo_note_info_text_pane_ParamLimits

0xed26,	// (0x00058c3c) list_tmo_note_info_text_pane

0xeda7,	// (0x00058cbd) list_tmo_link_pane

0xedb4,	// (0x00058cca) scroll_pane_cp20

0xedc1,	// (0x00058cd7) list_single_tmo_link_pane_ParamLimits

0xedc1,	// (0x00058cd7) list_single_tmo_link_pane

0xedd1,	// (0x00058ce7) list_single_tmo_link_pane_t1

0xeddf,	// (0x00058cf5) list_tmo_note_info_text_pane_t1_ParamLimits

0xeddf,	// (0x00058cf5) list_tmo_note_info_text_pane_t1

0x8175,	// (0x0005208b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8175,	// (0x0005208b) aid_size_touch_scroll_bar_cp01

0x55f4,	// (0x0004f50a) aid_size_touch_slider_marker

0x4e5a,	// (0x0004ed70) popup_settings_window_ParamLimits

0x4e5a,	// (0x0004ed70) popup_settings_window

0x6f77,	// (0x00050e8d) popup_candi_list_indi_window

0x966b,	// (0x00053581) aid_touch_navi_pane_ParamLimits

0x65d7,	// (0x000504ed) rs_clock_indi_pane

0x65e0,	// (0x000504f6) sctrl_sk_bottom_pane_ParamLimits

0x65f1,	// (0x00050507) sctrl_sk_top_pane_ParamLimits

0x66f7,	// (0x0005060d) popup_fep_tooltip_window

0xe68e,	// (0x000585a4) aid_size_cell_widget_grid_ParamLimits

0xe6be,	// (0x000585d4) cell_ai5_widget_pane_g1_ParamLimits

0xe6be,	// (0x000585d4) cell_ai5_widget_pane_g1

0xe711,	// (0x00058627) cell_ai5_widget_pane_g6_ParamLimits

0xe71d,	// (0x00058633) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfde3,	// (0x00059cf9) cell_ai5_widget_pane_g_ParamLimits

0xfde3,	// (0x00059cf9) cell_ai5_widget_pane_g

0xe84c,	// (0x00058762) cell_ai5_widget_pane_t10_ParamLimits

0xe84c,	// (0x00058762) cell_ai5_widget_pane_t10

0xe862,	// (0x00058778) grid_ai5_widget_pane_ParamLimits

0xe904,	// (0x0005881a) cell_contacts_ai5_widget_pane_ParamLimits

0xe904,	// (0x0005881a) cell_contacts_ai5_widget_pane

0xeaef,	// (0x00058a05) popup_discreet_window_t3_ParamLimits

0xeaef,	// (0x00058a05) popup_discreet_window_t3

0xeb82,	// (0x00058a98) popup_fshwr2_char_preview_window_ParamLimits

0xeb82,	// (0x00058a98) popup_fshwr2_char_preview_window

0xed44,	// (0x00058c5a) tmo_note_info_pane_t1

0xed59,	// (0x00058c6f) tmo_note_info_pane_t2

0xed6e,	// (0x00058c84) tmo_note_info_pane_t3

0xed83,	// (0x00058c99) tmo_note_info_pane_t4

0xed95,	// (0x00058cab) tmo_note_info_pane_t5

0x0004,

0xfe6a,	// (0x00059d80) tmo_note_info_pane_t

0xeda7,	// (0x00058cbd) list_tmo_link_pane_ParamLimits

0xedb4,	// (0x00058cca) scroll_pane_cp20_ParamLimits

0x774f,	// (0x00051665) bg_popup_fep_char_preview_window_cp01

0xedf8,	// (0x00058d0e) popup_fshwr2_char_preview_window_t1

0xee06,	// (0x00058d1c) popup_candi_list_indi_window_g1

0xee0f,	// (0x00058d25) bg_cell_contacts_ai5_widget_pane

0xee1b,	// (0x00058d31) cell_contacts_ai5_widget_pane_g1

0xee2f,	// (0x00058d45) cell_contacts_ai5_widget_pane_g2

0xee3e,	// (0x00058d54) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe75,	// (0x00059d8b) cell_contacts_ai5_widget_pane_g

0xee51,	// (0x00058d67) cell_contacts_ai5_widget_pane_t1

0x80af,	// (0x00051fc5) highlight_cell_shortcut_ai5_widget_pane_cp01

0xeecb,	// (0x00058de1) settings_container_pane

0x8cf2,	// (0x00052c08) listscroll_set_pane_copy1

0xb82c,	// (0x00055742) scroll_pane_cp121_copy1

0xeed7,	// (0x00058ded) set_content_pane_copy1

0xeedf,	// (0x00058df5) aid_height_set_list_copy1_ParamLimits

0xeedf,	// (0x00058df5) aid_height_set_list_copy1

0xaf57,	// (0x00054e6d) aid_size_parent_copy1_ParamLimits

0xaf57,	// (0x00054e6d) aid_size_parent_copy1

0xeeeb,	// (0x00058e01) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeeeb,	// (0x00058e01) button_value_adjust_pane_cp6_copy1

0x9072,	// (0x00052f88) list_highlight_pane_cp2_copy1_ParamLimits

0x9072,	// (0x00052f88) list_highlight_pane_cp2_copy1

0xeeff,	// (0x00058e15) list_set_pane_copy1_ParamLimits

0xeeff,	// (0x00058e15) list_set_pane_copy1

0xee66,	// (0x00058d7c) main_pane_set_t1_copy1_ParamLimits

0xee66,	// (0x00058d7c) main_pane_set_t1_copy1

0xeea0,	// (0x00058db6) main_pane_set_t2_copy1_ParamLimits

0xeea0,	// (0x00058db6) main_pane_set_t2_copy1

0xefac,	// (0x00058ec2) main_pane_set_t3_copy1

0xefba,	// (0x00058ed0) main_pane_set_t4_copy1

0xeebf,	// (0x00058dd5) set_content_pane_g1_copy1_ParamLimits

0xeebf,	// (0x00058dd5) set_content_pane_g1_copy1

0xefc8,	// (0x00058ede) setting_code_pane_copy1

0xefd2,	// (0x00058ee8) setting_slider_graphic_pane_copy1

0xefd2,	// (0x00058ee8) setting_slider_pane_copy1

0xefd2,	// (0x00058ee8) setting_text_pane_copy1

0xefdc,	// (0x00058ef2) setting_volume_pane_copy1

0xefe5,	// (0x00058efb) settings_code_pane_cp2_copy1

0xefed,	// (0x00058f03) settings_code_pane_cp_copy1_ParamLimits

0xefed,	// (0x00058f03) settings_code_pane_cp_copy1

0xf001,	// (0x00058f17) volume_set_pane_copy1

0xf009,	// (0x00058f1f) volume_set_pane_g10_copy1

0xf011,	// (0x00058f27) volume_set_pane_g1_copy1

0xf019,	// (0x00058f2f) volume_set_pane_g2_copy1

0xf021,	// (0x00058f37) volume_set_pane_g3_copy1

0xf029,	// (0x00058f3f) volume_set_pane_g4_copy1

0xf031,	// (0x00058f47) volume_set_pane_g5_copy1

0xf039,	// (0x00058f4f) volume_set_pane_g6_copy1

0xf041,	// (0x00058f57) volume_set_pane_g7_copy1

0xf049,	// (0x00058f5f) volume_set_pane_g8_copy1

0xf051,	// (0x00058f67) volume_set_pane_g9_copy1

0x7843,	// (0x00051759) bg_set_opt_pane_cp_copy1_ParamLimits

0x7843,	// (0x00051759) bg_set_opt_pane_cp_copy1

0xf059,	// (0x00058f6f) setting_slider_pane_t1_copy1_ParamLimits

0xf059,	// (0x00058f6f) setting_slider_pane_t1_copy1

0xf077,	// (0x00058f8d) setting_slider_pane_t2_copy1_ParamLimits

0xf077,	// (0x00058f8d) setting_slider_pane_t2_copy1

0xf091,	// (0x00058fa7) setting_slider_pane_t3_copy1_ParamLimits

0xf091,	// (0x00058fa7) setting_slider_pane_t3_copy1

0xf0a9,	// (0x00058fbf) slider_set_pane_copy1_ParamLimits

0xf0a9,	// (0x00058fbf) slider_set_pane_copy1

0x8116,	// (0x0005202c) set_opt_bg_pane_g1_copy2

0x811e,	// (0x00052034) set_opt_bg_pane_g2_copy2

0xf0bf,	// (0x00058fd5) set_opt_bg_pane_g3_copy2

0x812e,	// (0x00052044) set_opt_bg_pane_g4_copy2

0x8136,	// (0x0005204c) set_opt_bg_pane_g5_copy2

0x813e,	// (0x00052054) set_opt_bg_pane_g6_copy2

0xf0c9,	// (0x00058fdf) set_opt_bg_pane_g7_copy2

0xf0d1,	// (0x00058fe7) set_opt_bg_pane_g8_copy2

0xf0db,	// (0x00058ff1) set_opt_bg_pane_g9_copy2

0x6e13,	// (0x00050d29) aid_size_touch_slider_mark_copy1_ParamLimits

0x6e13,	// (0x00050d29) aid_size_touch_slider_mark_copy1

0xf0e5,	// (0x00058ffb) slider_set_pane_g1_copy1

0x6e27,	// (0x00050d3d) slider_set_pane_g2_copy1

0x600b,	// (0x0004ff21) slider_set_pane_g3_copy1_ParamLimits

0x600b,	// (0x0004ff21) slider_set_pane_g3_copy1

0x601f,	// (0x0004ff35) slider_set_pane_g4_copy1_ParamLimits

0x601f,	// (0x0004ff35) slider_set_pane_g4_copy1

0x6037,	// (0x0004ff4d) slider_set_pane_g5_copy1_ParamLimits

0x6037,	// (0x0004ff4d) slider_set_pane_g5_copy1

0x600b,	// (0x0004ff21) slider_set_pane_g6_copy1_ParamLimits

0x600b,	// (0x0004ff21) slider_set_pane_g6_copy1

0x6e2f,	// (0x00050d45) slider_set_pane_g7_copy1_ParamLimits

0x6e2f,	// (0x00050d45) slider_set_pane_g7_copy1

0x7763,	// (0x00051679) bg_set_opt_pane_cp2_copy1

0xf0ee,	// (0x00059004) setting_slider_graphic_pane_g1_copy1

0xf0f7,	// (0x0005900d) setting_slider_graphic_pane_t1_copy1

0xf107,	// (0x0005901d) setting_slider_graphic_pane_t2_copy1

0xf117,	// (0x0005902d) slider_set_pane_cp_copy1

0xf127,	// (0x0005903d) input_focus_pane_cp1_copy1

0xf130,	// (0x00059046) list_set_text_pane_copy1

0xf138,	// (0x0005904e) setting_text_pane_g1_copy1

0x4ff1,	// (0x0004ef07) set_text_pane_t1_copy1

0xf127,	// (0x0005903d) input_focus_pane_cp2_copy1

0xf138,	// (0x0005904e) setting_code_pane_g1_copy1

0xf141,	// (0x00059057) setting_code_pane_t1_copy1

0xf14f,	// (0x00059065) list_set_graphic_pane_copy1

0x7763,	// (0x00051679) bg_set_opt_pane_cp4_copy1

0x8a04,	// (0x0005291a) list_set_graphic_pane_g1_copy1_ParamLimits

0x8a04,	// (0x0005291a) list_set_graphic_pane_g1_copy1

0xf161,	// (0x00059077) list_set_graphic_pane_g2_copy1

0x8a1c,	// (0x00052932) list_set_graphic_pane_t1_copy1_ParamLimits

0x8a1c,	// (0x00052932) list_set_graphic_pane_t1_copy1

0xc119,	// (0x0005602f) rs_clock_indi_pane_g1

0xf169,	// (0x0005907f) rs_clock_indi_pane_t1

0xe9da,	// (0x000588f0) rs_indi_pane

0xf177,	// (0x0005908d) rs_indi_pane_g1

0xf180,	// (0x00059096) rs_indi_pane_g2

0xf189,	// (0x0005909f) rs_indi_pane_g3

0x0002,

0xfe7c,	// (0x00059d92) rs_indi_pane_g

0x8cf2,	// (0x00052c08) bg_popup_preview_window_pane_cp03

0xf192,	// (0x000590a8) popup_fep_tooltip_window_t1

0xcda2,	// (0x00056cb8) popup_note2_window_g2_ParamLimits

0xcda2,	// (0x00056cb8) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x00059b84) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x00059b84) popup_note2_window_g

0xd29d,	// (0x000571b3) bg_popup_sub_pane_cp11_ParamLimits

0xd2aa,	// (0x000571c0) cell_ai3_links_pane_g1_ParamLimits

0xd2c1,	// (0x000571d7) cell_ai3_links_pane_t1

0x4ff1,	// (0x0004ef07) set_text_pane_t1_copy1_ParamLimits

0x8c03,	// (0x00052b19) cell_graphic_popup_pane_cp2_ParamLimits

0x8c03,	// (0x00052b19) cell_graphic_popup_pane_cp2

0xf1a0,	// (0x000590b6) cell_graphic_popup_pane_g1_cp2

0x7dfa,	// (0x00051d10) cell_graphic_popup_pane_g2_cp2

0xf1a8,	// (0x000590be) cell_graphic_popup_pane_g3_cp2

0xf1b0,	// (0x000590c6) cell_graphic_popup_pane_t2_cp2

0x7e0b,	// (0x00051d21) grid_highlight_pane_cp3_cp2

0x8459,	// (0x0005236f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x80af,	// (0x00051fc5) main_tmo_pane_ParamLimits

0xd5f5,	// (0x0005750b) popup_tmo_big_image_note_window

0xe6ae,	// (0x000585c4) cell_ai5_widget_list_pane

0xe6b6,	// (0x000585cc) cell_ai5_widget_lrg_icon_pane

0xed44,	// (0x00058c5a) tmo_note_info_pane_t1_ParamLimits

0xed59,	// (0x00058c6f) tmo_note_info_pane_t2_ParamLimits

0xed6e,	// (0x00058c84) tmo_note_info_pane_t3_ParamLimits

0xed83,	// (0x00058c99) tmo_note_info_pane_t4_ParamLimits

0xed95,	// (0x00058cab) tmo_note_info_pane_t5_ParamLimits

0xfe6a,	// (0x00059d80) tmo_note_info_pane_t_ParamLimits

0xeecb,	// (0x00058de1) settings_container_pane_ParamLimits

0xf11f,	// (0x00059035) indicator_popup_pane_cp5

0xf11f,	// (0x00059035) indicator_popup_pane_cp6

0xf14f,	// (0x00059065) list_set_graphic_pane_copy1_ParamLimits

0x774f,	// (0x00051665) bg_popup_window_pane_cp23

0xf1be,	// (0x000590d4) popup_tmo_big_image_note_window_g1

0xf1c8,	// (0x000590de) popup_tmo_big_image_note_window_t1

0xf1d8,	// (0x000590ee) popup_tmo_big_image_note_window_t2

0xf1e8,	// (0x000590fe) popup_tmo_big_image_note_window_t3

0x0002,

0xfe83,	// (0x00059d99) popup_tmo_big_image_note_window_t

0xf1f8,	// (0x0005910e) cell_ai5_widget_lrg_icon_pane_g1

0xf200,	// (0x00059116) cell_ai5_widget_lrg_icon_pane_t1

0xf20e,	// (0x00059124) cell_ai5_widget_list_row_pane_ParamLimits

0xf20e,	// (0x00059124) cell_ai5_widget_list_row_pane

0xf227,	// (0x0005913d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf227,	// (0x0005913d) cell_ai5_widget_list_row_pane_g1

0xf234,	// (0x0005914a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf234,	// (0x0005914a) cell_ai5_widget_list_row_pane_t1

0xf24c,	// (0x00059162) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf24c,	// (0x00059162) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfe8a,	// (0x00059da0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfe8a,	// (0x00059da0) cell_ai5_widget_list_row_pane_t

0x4d11,	// (0x0004ec27) main_fep_vtchi_ss_pane

0xf25e,	// (0x00059174) popup_fep_char_pre_window

0xf266,	// (0x0005917c) popup_fep_ituss_window

0xf287,	// (0x0005919d) popup_fep_vkbss_window

0xf2a6,	// (0x000591bc) grid_vkbss_keypad_pane_ParamLimits

0xf2a6,	// (0x000591bc) grid_vkbss_keypad_pane

0xf2b6,	// (0x000591cc) ituss_keypad_pane

0xf2cf,	// (0x000591e5) aid_vkbss_key_offset_ParamLimits

0xf2cf,	// (0x000591e5) aid_vkbss_key_offset

0xf2db,	// (0x000591f1) cell_vkbss_key_pane_ParamLimits

0xf2db,	// (0x000591f1) cell_vkbss_key_pane

0xf2f1,	// (0x00059207) bg_cell_vkbss_key_g1_ParamLimits

0xf2f1,	// (0x00059207) bg_cell_vkbss_key_g1

0xf2fd,	// (0x00059213) cell_vkbss_key_3p_pane_ParamLimits

0xf2fd,	// (0x00059213) cell_vkbss_key_3p_pane

0xf317,	// (0x0005922d) cell_vkbss_key_g1_ParamLimits

0xf317,	// (0x0005922d) cell_vkbss_key_g1

0xf331,	// (0x00059247) cell_vkbss_key_t1_ParamLimits

0xf331,	// (0x00059247) cell_vkbss_key_t1

0xf35c,	// (0x00059272) cell_ituss_key_pane_ParamLimits

0xf35c,	// (0x00059272) cell_ituss_key_pane

0xf36c,	// (0x00059282) bg_cell_ituss_key_g1_ParamLimits

0xf36c,	// (0x00059282) bg_cell_ituss_key_g1

0xf378,	// (0x0005928e) cell_ituss_key_pane_g1_ParamLimits

0xf378,	// (0x0005928e) cell_ituss_key_pane_g1

0xf384,	// (0x0005929a) cell_ituss_key_pane_g2_ParamLimits

0xf384,	// (0x0005929a) cell_ituss_key_pane_g2

0x0001,

0xfe8f,	// (0x00059da5) cell_ituss_key_pane_g_ParamLimits

0xfe8f,	// (0x00059da5) cell_ituss_key_pane_g

0xf39d,	// (0x000592b3) cell_ituss_key_t1_ParamLimits

0xf39d,	// (0x000592b3) cell_ituss_key_t1

0xf3cb,	// (0x000592e1) cell_ituss_key_t2_ParamLimits

0xf3cb,	// (0x000592e1) cell_ituss_key_t2

0xf3fc,	// (0x00059312) cell_ituss_key_t3_ParamLimits

0xf3fc,	// (0x00059312) cell_ituss_key_t3

0xf42d,	// (0x00059343) cell_ituss_key_t4_ParamLimits

0xf42d,	// (0x00059343) cell_ituss_key_t4

0x0003,

0xfe94,	// (0x00059daa) cell_ituss_key_t_ParamLimits

0xfe94,	// (0x00059daa) cell_ituss_key_t

0xf45e,	// (0x00059374) cell_vkbss_key_3p_pane_g1

0xf466,	// (0x0005937c) cell_vkbss_key_3p_pane_g2

0xf46e,	// (0x00059384) cell_vkbss_key_3p_pane_g3

0x0002,

0xfe9d,	// (0x00059db3) cell_vkbss_key_3p_pane_g

0x774f,	// (0x00051665) bg_popup_fep_char_preview_window_cp02

0xf476,	// (0x0005938c) popup_fep_char_pre_window_t1

0xe684,	// (0x0005859a) main_ai5_sk_pane

0xee0f,	// (0x00058d25) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee1b,	// (0x00058d31) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee2f,	// (0x00058d45) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee3e,	// (0x00058d54) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe75,	// (0x00059d8b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee51,	// (0x00058d67) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x80af,	// (0x00051fc5) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf485,	// (0x0005939b) main_ai5_sk_pane_g1

0xa01a,	// (0x00053f30) popup_query_code_window_g1

0xf27c,	// (0x00059192) popup_fep_vkb_icf_pane

0xf290,	// (0x000591a6) popup_fep_vtchi_icf_pane

0x80af,	// (0x00051fc5) bg_icf_pane

0xf49d,	// (0x000593b3) list_vkb_icf_pane

0x80af,	// (0x00051fc5) bg_icf_pane_cp01

0xd5b4,	// (0x000574ca) vtchi_icf_list_pane

0xf4bd,	// (0x000593d3) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x000593d3) list_vkb_icf_pane_t1

0xf4d4,	// (0x000593ea) vtchi_icf_list_pane_t1_ParamLimits

0xf4d4,	// (0x000593ea) vtchi_icf_list_pane_t1

0xf266,	// (0x0005917c) popup_fep_ituss_window_ParamLimits

0xf290,	// (0x000591a6) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b6,	// (0x000591cc) ituss_keypad_pane_ParamLimits

0xf2c6,	// (0x000591dc) ituss_sks_pane

0x80af,	// (0x00051fc5) bg_icf_pane_ParamLimits

0xf48e,	// (0x000593a4) icf_edit_indi_pane_ParamLimits

0xf48e,	// (0x000593a4) icf_edit_indi_pane

0xf49d,	// (0x000593b3) list_vkb_icf_pane_ParamLimits

0x80af,	// (0x00051fc5) bg_icf_pane_cp01_ParamLimits

0xf4a9,	// (0x000593bf) icf_edit_indi_pane_cp01_ParamLimits

0xf4a9,	// (0x000593bf) icf_edit_indi_pane_cp01

0xf4b5,	// (0x000593cb) vtchi_query_pane

0xc3ab,	// (0x000562c1) icf_edit_indi_pane_g1_ParamLimits

0xc3ab,	// (0x000562c1) icf_edit_indi_pane_g1

0xf4f0,	// (0x00059406) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x00059406) icf_edit_indi_pane_g2

0x0001,

0x0100,	// (0x0004a016) icf_edit_indi_pane_g_ParamLimits

0x0100,	// (0x0004a016) icf_edit_indi_pane_g

0xf4fc,	// (0x00059412) icf_edit_indi_pane_t1

0xf50a,	// (0x00059420) bg_input_focus_pane_cp042

0x7fde,	// (0x00051ef4) vtchi_button_pane

0xf513,	// (0x00059429) vtchi_query_pane_t1

0xf521,	// (0x00059437) vtchi_query_pane_t2

0xf52f,	// (0x00059445) vtchi_query_pane_t3

0x0002,

0xfea4,	// (0x00059dba) vtchi_query_pane_t

0x774f,	// (0x00051665) bg_button_pane_cp13

0xf53d,	// (0x00059453) vtchi_button_pane_g1

0xdafc,	// (0x00057a12) ituss_sks_pane_g1

0xf545,	// (0x0005945b) ituss_sks_pane_g2

0x0001,

0xfeab,	// (0x00059dc1) ituss_sks_pane_g

0xf54e,	// (0x00059464) ituss_sks_pane_t1

0xf55c,	// (0x00059472) ituss_sks_pane_t2

0x0001,

0xfeb0,	// (0x00059dc6) ituss_sks_pane_t

0xbb7b,	// (0x00055a91) indicator_nsta_pane_cp_g1

0xbb84,	// (0x00055a9a) indicator_nsta_pane_cp_g2

0xbb8c,	// (0x00055aa2) indicator_nsta_pane_cp_g3

0xbb94,	// (0x00055aaa) indicator_nsta_pane_cp_g4

0xbb9c,	// (0x00055ab2) indicator_nsta_pane_cp_g5

0xbba4,	// (0x00055aba) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x000599c2) indicator_nsta_pane_cp_g

0xe2b9,	// (0x000581cf) cell_graphic2_pane_t2_ParamLimits

0xe2b9,	// (0x000581cf) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x00059c9f) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x00059c9f) cell_graphic2_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
